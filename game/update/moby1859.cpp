// game/update/moby1859.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 9 functions, 0x2c9754-0x2caea0
#include "game/update/moby1859.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/pause.h"
#include "game/sound.h"
#include "game/update/moby186.h"
#include "idol/fastfunc.h"

// 0x02c9754 (0xf8 bytes)
/* Moby 1859 */

void UpdateMoby_1859(MobyInstance *moby)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = MB_damage(moby,0x10000,0);
  bVar1 = moby->state;
  if (bVar1 == 0) {
    moby->state = '\x01';
  }
  else if (bVar1 < 2) {
    if ((iVar2 != 0) && (0 < *(int *)(iVar2 + 0x2c))) {
      moby->state = '\x02';
    }
  }
  else if (bVar1 < 3) {
    PlayMobySound(0,0,moby);
    MB_DistributeBoltsNearHero(moby);
    MB_SpawnDebris(moby,0x745,1,0x745,1,0xb,2);
    MB_SpawnReplacementMoby(moby,0x744);
    DeleteMoby(moby);
  }
  return;
}


// 0x02c9860 (0x104 bytes)
void M186_002c9860(undefined4 param_1,undefined8 param_2)

{
  int iVar1;
  double dVar2;
  double dVar3;
  GPiece<16> local_40;
  
  dVar2 = (double)FastIntToDouble(g_goldWeaponsArray.gloveOfDoom);
  dVar2 = (double)(float)(dVar2 * 0.5 + 1.0);
  dVar3 = 0.20000000298023224;
  iVar1 = CollSphere
                    ((double)(float)(dVar2 * 0.19990000128746033),local_40,&DAT_002c9850,param_2,
                     param_1);
  if (iVar1 != 0) {
    g_CollOutput.push.z = -(float)(dVar2 * dVar3 - (double)g_CollOutput.push.z);
  }
  return;
}


// 0x02c9964 (0x34 bytes)
void M1859_002c9964(int param_1)

{
  DAT_0096bbb0 = *(undefined4 *)(param_1 + 0x40);
  DAT_0096bbb4 = *(undefined4 *)(param_1 + 0x44);
  DAT_0096bbe8 = *(undefined4 *)(param_1 + 0x4c);
  DAT_0096bbb8 = *(undefined4 *)(param_1 + 0x48);
  DAT_0096bbc4 = *(undefined4 *)(param_1 + 0x5c);
  return;
}


// 0x02c9998 (0x34 bytes)
void M1859_002c9998(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  *(undefined4 *)(param_1 + 0x40) = DAT_0096bbb0;
  uVar2 = DAT_0096bbe8;
  *(undefined4 *)(param_1 + 0x44) = DAT_0096bbb4;
  uVar1 = DAT_0096bbb8;
  *(undefined4 *)(param_1 + 0x4c) = uVar2;
  *(undefined4 *)(param_1 + 0x48) = uVar1;
  *(undefined4 *)(param_1 + 0x5c) = DAT_0096bbc4;
  return;
}


// 0x02c99cc (0x54 bytes)
void M1859_002c99cc(undefined4 *param_1)

{
  DAT_0096bc00 = param_1[0x14];
  DAT_0096bc04 = param_1[0x15];
  DAT_0096bc08 = param_1[0x16];
  DAT_0096bc1f = *(undefined1 *)(param_1 + 0x1a);
  DAT_0096bc20 = param_1[0x11];
  DAT_0096bbf0 = *param_1;
  DAT_0096bbf4 = param_1[1];
  DAT_0096bbf8 = param_1[2];
  DAT_0096bbfc = param_1[3];
  return;
}


// 0x02c9a20 (0x34 bytes)
void M1859_002c9a20(int param_1)

{
  *(undefined4 *)(param_1 + 0x50) = DAT_0096bc00;
  *(undefined4 *)(param_1 + 0x54) = DAT_0096bc04;
  *(undefined4 *)(param_1 + 0x58) = DAT_0096bc08;
  *(undefined1 *)(param_1 + 0x68) = DAT_0096bc1f;
  *(undefined4 *)(param_1 + 0x44) = DAT_0096bc20;
  return;
}


// 0x02c9a68 (0x144 bytes)
double M1859_002c9a68(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  double dVar2;
  GPiece<16> local_30;
  GPiece<24> local_20;
  
  iVar1 = CollLine(local_20,local_30,6,param_2,0);
  if (iVar1 == 0) {
    dVar2 = 0.0;
  }
  else if (((g_CollOutput.pMoby == (MobyInstance *)0x0) ||
           ((g_CollOutput.pMoby)->pClass == (MobyClass *)0x0)) ||
          ((short)(g_CollOutput.pMoby)->pClass->mode_bits != 5)) {
    iVar1 = CollHotspot();
    dVar2 = (double)g_CollOutput.ip.z;
    if (iVar1 < 4) {
      if (iVar1 < 2) {
        if (iVar1 < 0) {
          return dVar2;
        }
      }
      else if (iVar1 < 3) {
        return dVar2;
      }
    }
    else if (iVar1 < 0xb) {
      if (iVar1 != 8) {
        return dVar2;
      }
    }
    else if (0xd < iVar1) {
      return dVar2;
    }
    dVar2 = 0.0;
  }
  else {
    dVar2 = (double)g_CollOutput.ip.z;
  }
  return dVar2;
}


// 0x02c9be0 (0x640 bytes)
// inlined: FastAtan2 @0x2c9db8, FastAtan2 @0x2c9f68
// strings: 002c9bb0: 'Nnk(B ' (raw)

MobyInstance *
M186_002c9be0
          (int param_1,float *param_2,int param_3,undefined8 param_4,char param_5)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  MobyInstance *pMVar7;
  ulonglong *puVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  ulonglong uVar12;
  longlong lVar13;
  undefined4 uVar14;
  uint uVar15;
  ulonglong uVar16;
  float *pfVar18;
  longlong lVar17;
  longlong lVar19;
  ulonglong unaff_r20;
  ulonglong unaff_r21;
  int iVar20;
  ulonglong unaff_r22;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  MobyInstance *pMVar21;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  ulonglong in_f28;
  double dVar26;
  ulonglong in_f29;
  double dVar27;
  ulonglong in_f30;
  double dVar28;
  ulonglong in_f31;
  double dVar29;
  
  uVar12 = ZEXT48(&stack0x00000000);
  lVar1 = uVar12 - 0x160;
  puVar8 = (ulonglong *)lVar1;
  *puVar8 = uVar12;
  puVar8[0x2e] = in_LR;
  puVar8[0x28] = in_f28;
  puVar8[0x29] = in_f29;
  puVar8[0x2a] = in_f30;
  puVar8[0x2b] = in_f31;
  puVar8[0x1e] = unaff_r22;
  puVar8[0x22] = unaff_r26;
  puVar8[0x21] = unaff_r25;
  bVar11 = true;
  puVar8[0x27] = unaff_r31;
  puVar8[0x23] = unaff_r27;
  pMVar21 = (MobyInstance *)0x0;
  puVar8[0x20] = unaff_r24;
  puVar8[0x1c] = unaff_r20;
  dVar29 = 1000000000.0;
  puVar8[0x26] = unaff_r30;
  pMVar7 = DAT_00a49344;
  puVar8[0x25] = unaff_r29;
  puVar8[0x24] = unaff_r28;
  puVar8[0x1f] = unaff_r23;
  puVar8[0x1d] = unaff_r21;
  if (pMVar7 != (MobyInstance *)0x0) {
    iVar20 = 0;
    do {
      if ((pMVar7->pClass != (MobyClass *)0x0) && ((short)pMVar7->pClass->mode_bits == 5)) {
        fVar2 = param_2[1];
        fVar6 = fVar2 - (pMVar7->pos).y;
        fVar3 = (pMVar7->pos).x;
        fVar4 = *param_2 - fVar3;
        fVar5 = param_2[2] - (pMVar7->pos).z;
        dVar28 = (double)SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar6 * fVar6);
        if (dVar28 <= 40.0) {
          if (30.0 < dVar28) {
            bVar11 = false;
          }
          fVar6 = fVar3 - *param_2;
          *(float *)(puVar8 + 0xe) = fVar3;
          fVar3 = (pMVar7->pos).y;
          fVar2 = fVar3 - fVar2;
          *(float *)((int)puVar8 + 0x74) = fVar3;
          fVar3 = (pMVar7->pos).z;
          *(float *)(puVar8 + 0xf) = fVar3;
          fVar4 = ABS(fVar6);
          *(f32 *)((int)puVar8 + 0x7c) = (pMVar7->pos).w;
          *(float *)((int)puVar8 + 0x8c) = fVar6;
          fVar6 = ABS(fVar2);
          *(float *)(puVar8 + 0x12) = fVar2;
          fVar2 = *(float *)(param_3 + 8);
          *(float *)((int)puVar8 + 0x94) = fVar4 - fVar6;
          *(float *)(puVar8 + 0xf) = fVar3 + 0.4;
          dVar26 = 0.0;
          dVar27 = 0.7853981852531433;
          uVar16 = (ulonglong)(*(uint *)((int)puVar8 + 0x8c) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)((int)puVar8 + 0x94) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)(puVar8 + 0x12) >> 0x1d) & 4;
          fVar3 = ABS(*(float *)((int)puVar8 + 0x8c));
          if (*(float *)((int)puVar8 + 0x94) - 0.0 < 0.0) {
            fVar3 = fVar6;
          }
          fVar6 = *(float *)(&g_atanQuadrantTable + (int)(uVar16 << 2));
          fVar5 = ABS(*(float *)(puVar8 + 0x12));
          if (*(float *)((int)puVar8 + 0x94) - 0.0 < 0.0) {
            fVar5 = fVar4;
          }
          fVar4 = *(float *)(((uint)(uVar16 << 2) | 0x735900) + 4);
          dVar24 = dVar26;
          if (0.0 < fVar3) {
            lVar13 = uVar12 - 0x150;
            lVar19 = uVar12 - 0x98;
            lVar17 = uVar12 - 0xa8;
            lVar22 = 2;
            fVar3 = (fVar5 - fVar3) / (fVar5 + fVar3);
            fVar5 = fVar3 * fVar3;
            *(float *)((int)puVar8 + 0xc4) = fVar3;
            *(float *)((int)puVar8 + 0xbc) = fVar3;
            *(float *)(puVar8 + 0x18) = fVar3;
            *(float *)(puVar8 + 0x17) = fVar3;
            fVar3 = fVar5 * fVar5;
            *(float *)((int)puVar8 + 0xbc) = *(float *)((int)puVar8 + 0xbc) * fVar5;
            *(float *)(puVar8 + 0x18) = *(float *)(puVar8 + 0x18) * fVar3;
            *(float *)((int)puVar8 + 0xc4) = *(float *)((int)puVar8 + 0xc4) * fVar3 * fVar5;
            do {
              *(float *)((int)lVar13 + 0xb8) = *(float *)((int)lVar13 + 0xa8) * fVar3 * fVar3;
              iVar9 = (int)lVar17;
              lVar17 = lVar17 + 8;
              lVar13 = lVar13 + 8;
              *(float *)((int)lVar19 + 4) = *(float *)(iVar9 + 4) * fVar3 * fVar3;
              lVar19 = lVar19 + 8;
              lVar22 = lVar22 + -1;
            } while (lVar22 != 0);
            lVar22 = 4;
            lVar19 = uVar12 - 0xa8;
            pfVar18 = (float *)&DAT_007358e0;
            lVar13 = lVar1;
            lVar17 = lVar19;
            do {
              fVar3 = *pfVar18;
              fVar5 = pfVar18[1];
              pfVar18 = pfVar18 + 2;
              *(float *)((int)lVar13 + 0xb8) = *(float *)((int)lVar13 + 0xb8) * fVar3;
              lVar13 = lVar13 + 8;
              *(float *)((int)lVar17 + 4) = *(float *)((int)lVar17 + 4) * fVar5;
              lVar17 = lVar17 + 8;
              lVar22 = lVar22 + -1;
            } while (lVar22 != 0);
            lVar17 = 2;
            lVar13 = lVar1;
            do {
              iVar9 = (int)lVar13;
              iVar10 = (int)lVar19;
              lVar13 = lVar13 + 0x10;
              lVar19 = lVar19 + 0x10;
              dVar24 = (double)((float)(dVar24 + (double)*(float *)(iVar9 + 0xb8)) +
                                *(float *)(iVar10 + 4) + *(float *)(iVar10 + 8) +
                               *(float *)(iVar10 + 0xc));
              lVar17 = lVar17 + -1;
            } while (lVar17 != 0);
            dVar24 = (double)((float)(dVar24 + 0.7853981852531433) * fVar6 + fVar4);
          }
          dVar23 = (double)FastSubRots(fVar2,(float)dVar24);
          fVar2 = param_2[2];
          *(float *)(puVar8 + 0x10) = (float)dVar28;
          dVar25 = ABS((double)(*(float *)(puVar8 + 0xf) - fVar2));
          *(float *)((int)puVar8 + 0x84) = *(float *)(puVar8 + 0xf) - fVar2;
          *(float *)(puVar8 + 0x11) = (float)(ABS(dVar28) - dVar25);
          fVar2 = *(float *)(param_3 + 4);
          uVar16 = (ulonglong)(*(uint *)(puVar8 + 0x10) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)(puVar8 + 0x11) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)((int)puVar8 + 0x84) >> 0x1d) & 4;
          dVar24 = ABS((double)*(float *)(puVar8 + 0x10));
          if ((double)*(float *)(puVar8 + 0x11) - dVar26 < 0.0) {
            dVar24 = dVar25;
          }
          fVar3 = *(float *)(&g_atanQuadrantTable + (int)(uVar16 << 2));
          dVar25 = ABS((double)*(float *)((int)puVar8 + 0x84));
          if ((double)*(float *)(puVar8 + 0x11) - dVar26 < 0.0) {
            dVar25 = ABS(dVar28);
          }
          fVar6 = *(float *)(((uint)(uVar16 << 2) | 0x735900) + 4);
          dVar28 = dVar26;
          if (dVar26 < dVar24) {
            lVar13 = uVar12 - 0x150;
            lVar19 = uVar12 - 0xb8;
            lVar17 = uVar12 - 200;
            lVar22 = 2;
            fVar4 = (float)(dVar25 - dVar24) / (float)(dVar25 + dVar24);
            fVar5 = fVar4 * fVar4;
            *(float *)((int)puVar8 + 0xa4) = fVar4;
            *(float *)((int)puVar8 + 0x9c) = fVar4;
            *(float *)(puVar8 + 0x14) = fVar4;
            *(float *)(puVar8 + 0x13) = fVar4;
            fVar4 = fVar5 * fVar5;
            *(float *)((int)puVar8 + 0x9c) = *(float *)((int)puVar8 + 0x9c) * fVar5;
            *(float *)(puVar8 + 0x14) = *(float *)(puVar8 + 0x14) * fVar4;
            *(float *)((int)puVar8 + 0xa4) = *(float *)((int)puVar8 + 0xa4) * fVar4 * fVar5;
            do {
              *(float *)((int)lVar13 + 0x98) = *(float *)((int)lVar13 + 0x88) * fVar4 * fVar4;
              iVar9 = (int)lVar17;
              lVar17 = lVar17 + 8;
              lVar13 = lVar13 + 8;
              *(float *)((int)lVar19 + 4) = *(float *)(iVar9 + 4) * fVar4 * fVar4;
              lVar19 = lVar19 + 8;
              lVar22 = lVar22 + -1;
            } while (lVar22 != 0);
            lVar22 = 4;
            lVar19 = uVar12 - 200;
            pfVar18 = (float *)&DAT_007358e0;
            lVar13 = lVar1;
            lVar17 = lVar19;
            do {
              fVar4 = *pfVar18;
              fVar5 = pfVar18[1];
              pfVar18 = pfVar18 + 2;
              *(float *)((int)lVar13 + 0x98) = *(float *)((int)lVar13 + 0x98) * fVar4;
              lVar13 = lVar13 + 8;
              *(float *)((int)lVar17 + 4) = *(float *)((int)lVar17 + 4) * fVar5;
              lVar17 = lVar17 + 8;
              lVar22 = lVar22 + -1;
            } while (lVar22 != 0);
            lVar17 = 2;
            lVar13 = lVar1;
            do {
              iVar9 = (int)lVar13;
              iVar10 = (int)lVar19;
              lVar13 = lVar13 + 0x10;
              lVar19 = lVar19 + 0x10;
              dVar28 = (double)((float)(dVar28 + (double)*(float *)(iVar9 + 0x98)) +
                                *(float *)(iVar10 + 4) + *(float *)(iVar10 + 8) +
                               *(float *)(iVar10 + 0xc));
              lVar17 = lVar17 + -1;
            } while (lVar17 != 0);
            dVar28 = (double)((float)(dVar28 + dVar27) * fVar3 + fVar6);
          }
          dVar28 = (double)FastSubRots(fVar2,(float)dVar28);
          if (bVar11) {
            uVar15 = 1;
            if (ABS((pMVar7->pos).z - *(float *)(param_1 + 0x18)) <= 8.0) {
              uVar14 = CollLine(param_2,uVar12 - 0xf0,6,pMVar7,0);
              uVar15 = (uVar14 != 0);
            }
          }
          else {
            uVar15 = ((uint)(byte)pMVar7->enabled == 0);
          }
          if ((param_5 != '\0') || (uVar15 == 0)) {
            fVar2 = param_2[1] - *(float *)((int)puVar8 + 0x74);
            dVar27 = (double)SQRT((param_2[2] - *(float *)(puVar8 + 0xf)) *
                                  (param_2[2] - *(float *)(puVar8 + 0xf)) +
                                  (*param_2 - *(float *)(puVar8 + 0xe)) *
                                  (*param_2 - *(float *)(puVar8 + 0xe)) + fVar2 * fVar2);
            if (3.25 - ((pMVar7->pos).z - *(float *)(param_1 + 0x18)) < 0.0) {
              dVar27 = (double)(float)(dVar27 + 15.0);
            }
            if (uVar15 != 0) {
              dVar26 = 5.0;
            }
            dVar28 = (double)(float)(dVar23 * dVar23 +
                                    (double)(float)(dVar28 * dVar28 +
                                                   (double)(float)(dVar26 + dVar27)));
            if (dVar28 < dVar29) {
              dVar29 = dVar28;
              pMVar21 = pMVar7;
            }
          }
        }
      }
      pMVar7 = *(MobyInstance **)((int)&DAT_00a49348 + iVar20);
      iVar20 = iVar20 + 4;
    } while (pMVar7 != (MobyInstance *)0x0);
    if (pMVar21 != (MobyInstance *)0x0) {
      return pMVar21;
    }
  }
  fVar2 = *(float *)(param_1 + 0x14) - g_heroPosition.y;
  fVar3 = *(float *)(param_1 + 0x10) - g_heroPosition.x;
  if (3.2 < SQRT(fVar3 * fVar3 + fVar2 * fVar2)) {
    pMVar21 = g_heroMobyPtr;
  }
  return pMVar21;
}


// 0x02ca268 (0xc38 bytes)
// inlined: FastAtan2 @0x2ca408
double M186_002ca268
                 (double param_1,double param_2,double param_3,double param_4,double param_5,
                 double param_6,int param_7,float *param_8)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float *pfVar6;
  int iVar7;
  ulonglong *puVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  ulonglong uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  float *pfVar17;
  ulonglong uVar18;
  longlong lVar19;
  float *in_r10;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  longlong lVar20;
  ulonglong unaff_r25;
  longlong lVar21;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
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
  double dVar37;
  ulonglong in_f14;
  ulonglong in_f15;
  ulonglong in_f16;
  double dVar38;
  ulonglong in_f17;
  ulonglong in_f18;
  ulonglong in_f19;
  double dVar39;
  ulonglong in_f20;
  double dVar40;
  ulonglong in_f21;
  double dVar41;
  ulonglong in_f22;
  double dVar42;
  ulonglong in_f23;
  double dVar43;
  ulonglong in_f24;
  double dVar44;
  ulonglong in_f25;
  ulonglong in_f26;
  ulonglong in_f27;
  ulonglong in_f28;
  double dVar45;
  ulonglong in_f29;
  double dVar46;
  ulonglong in_f30;
  double dVar47;
  ulonglong in_f31;
  double dVar48;
  
  uVar12 = ZEXT48(&stack0x00000000);
  lVar20 = uVar12 - 0x1b0;
  puVar8 = (ulonglong *)lVar20;
  *puVar8 = uVar12;
  puVar8[0x38] = in_LR;
  puVar8[0x24] = in_f14;
  puVar8[0x25] = in_f15;
  puVar8[0x26] = in_f16;
  puVar8[0x27] = in_f17;
  puVar8[0x28] = in_f18;
  puVar8[0x29] = in_f19;
  puVar8[0x2a] = in_f20;
  puVar8[0x2b] = in_f21;
  puVar8[0x2c] = in_f22;
  puVar8[0x2d] = in_f23;
  puVar8[0x2e] = in_f24;
  puVar8[0x2f] = in_f25;
  puVar8[0x30] = in_f26;
  puVar8[0x31] = in_f27;
  puVar8[0x32] = in_f28;
  puVar8[0x33] = in_f29;
  puVar8[0x34] = in_f30;
  puVar8[0x35] = in_f31;
  puVar8[0x23] = unaff_r31;
  puVar8[0x22] = unaff_r30;
  puVar8[0x1e] = unaff_r26;
  dVar46 = 0.0;
  puVar8[0x21] = unaff_r29;
  dVar45 = 6.2831854820251465;
  pfVar6 = *(float **)((int)puVar8 + 0x22c);
  puVar8[0x20] = unaff_r28;
  puVar8[0x1f] = unaff_r27;
  puVar8[0x1d] = unaff_r25;
  puVar8[0x1c] = unaff_r24;
  puVar8[0x1b] = unaff_r23;
  puVar8[0x18] = (ulonglong)(double)(float)(param_2 / param_3);
  dVar25 = param_1;
  dVar23 = dVar46;
  iVar13 = FastDoubleToInt(param_3);
  iVar7 = *(int *)(param_7 + 0x78);
  *pfVar6 = 0.0;
  dVar26 = param_1;
  if (in_r10 != (float *)0x0) {
    fVar5 = *in_r10 - *(float *)(param_7 + 0x10);
    fVar1 = in_r10[1] - *(float *)(param_7 + 0x14);
    dVar26 = ABS((double)fVar5);
    dVar27 = ABS((double)fVar1);
    *(float *)(puVar8 + 0x12) = fVar5;
    *(float *)((int)puVar8 + 0x94) = fVar1;
    *(float *)(puVar8 + 0x13) = (float)(dVar26 - dVar27);
    uVar18 = (ulonglong)(*(uint *)(puVar8 + 0x12) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar8 + 0x13) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar8 + 0x94) >> 0x1d) & 4;
    dVar48 = ABS((double)*(float *)(puVar8 + 0x12));
    if ((double)*(float *)(puVar8 + 0x13) - dVar23 < 0.0) {
      dVar48 = dVar27;
    }
    fVar5 = *(float *)(&g_atanQuadrantTable + (int)(uVar18 << 2));
    dVar27 = ABS((double)*(float *)((int)puVar8 + 0x94));
    if ((double)*(float *)(puVar8 + 0x13) - dVar23 < 0.0) {
      dVar27 = dVar26;
    }
    fVar1 = *(float *)(((uint)(uVar18 << 2) | 0x735900) + 4);
    dVar26 = dVar23;
    if (dVar23 < dVar48) {
      lVar21 = uVar12 - 0x1a0;
      lVar19 = uVar12 - 0x104;
      lVar16 = uVar12 - 0x114;
      lVar22 = 2;
      fVar2 = (float)(dVar27 - dVar48) / (float)(dVar27 + dVar48);
      fVar4 = fVar2 * fVar2;
      *(float *)(puVar8 + 0x15) = fVar2;
      *(float *)(puVar8 + 0x14) = fVar2;
      *(float *)((int)puVar8 + 0xa4) = fVar2;
      *(float *)((int)puVar8 + 0x9c) = fVar2;
      fVar2 = fVar4 * fVar4;
      *(float *)(puVar8 + 0x14) = *(float *)(puVar8 + 0x14) * fVar4;
      *(float *)((int)puVar8 + 0xa4) = *(float *)((int)puVar8 + 0xa4) * fVar2;
      *(float *)(puVar8 + 0x15) = *(float *)(puVar8 + 0x15) * fVar2 * fVar4;
      do {
        *(float *)((int)lVar21 + 0x9c) = *(float *)((int)lVar21 + 0x8c) * fVar2 * fVar2;
        iVar14 = (int)lVar16;
        lVar16 = lVar16 + 8;
        lVar21 = lVar21 + 8;
        *(float *)((int)lVar19 + 4) = *(float *)(iVar14 + 4) * fVar2 * fVar2;
        lVar19 = lVar19 + 8;
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
      lVar22 = 4;
      lVar19 = uVar12 - 0x114;
      pfVar17 = (float *)&DAT_007358e0;
      lVar21 = lVar20;
      lVar16 = lVar19;
      do {
        fVar2 = *pfVar17;
        fVar4 = pfVar17[1];
        pfVar17 = pfVar17 + 2;
        *(float *)((int)lVar21 + 0x9c) = *(float *)((int)lVar21 + 0x9c) * fVar2;
        lVar21 = lVar21 + 8;
        *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar4;
        lVar16 = lVar16 + 8;
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
      lVar21 = 2;
      do {
        iVar14 = (int)lVar20;
        iVar15 = (int)lVar19;
        lVar20 = lVar20 + 0x10;
        lVar19 = lVar19 + 0x10;
        dVar26 = (double)((float)(dVar26 + (double)*(float *)(iVar14 + 0x9c)) +
                          *(float *)(iVar15 + 4) + *(float *)(iVar15 + 8) + *(float *)(iVar15 + 0xc)
                         );
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
      dVar26 = (double)((float)(dVar26 + 0.7853981852531433) * fVar5 + fVar1);
    }
  }
  dVar48 = (double)(float)(param_2 * 0.5);
  *(undefined4 *)(puVar8 + 0x19) = 0x3f000000;
  FastWrapRot((float)param_1,(float)(param_2 * 0.5));
  dVar27 = (double)FastDiffRots(param_1,dVar48);
  dVar39 = 3.141592502593994;
  dVar38 = 1.570796251296997;
  dVar40 = -3.141592502593994;
  fVar5 = (float)(dVar26 + 1.570796251296997);
  dVar41 = -0.16666656732559204;
  dVar42 = 0.008333025500178337;
  dVar43 = -0.0001980741071747616;
  dVar44 = 2.601886990305502e-06;
  lVar21 = uVar12 - 0x140;
  lVar20 = uVar12 - 0x130;
  dVar48 = (double)(float)(3.141592502593994 - dVar26);
  if (dVar26 - (double)(float)(3.141592502593994 - dVar26) < 0.0) {
    dVar48 = dVar26;
  }
  fVar1 = 3.1415925 - fVar5;
  if (fVar5 - (3.1415925 - fVar5) < 0.0) {
    fVar1 = fVar5;
  }
  dVar24 = (double)(float)(-3.141592502593994 - dVar26);
  if ((double)(float)(-3.141592502593994 - dVar26) - dVar48 < 0.0) {
    dVar24 = dVar48;
  }
  fVar2 = *param_8;
  fVar4 = -3.1415925 - fVar5;
  if ((-3.1415925 - fVar5) - fVar1 < 0.0) {
    fVar4 = fVar1;
  }
  dVar48 = (double)(float)(dVar24 * dVar24);
  fVar5 = param_8[1];
  fVar1 = param_8[2];
  fVar3 = param_8[3];
  fVar11 = fVar4 * fVar4;
  dVar34 = (double)(float)(dVar48 * (double)(float)(dVar48 * dVar24));
  fVar9 = fVar11 * fVar11 * fVar4;
  dVar32 = (double)(float)(dVar48 * dVar34);
  fVar10 = fVar11 * fVar9;
  dVar24 = (double)((float)(dVar48 * dVar32) * 2.601887e-06 +
                   (float)(dVar32 * -0.0001980741071747616 +
                          (double)(float)(dVar34 * 0.008333025500178337 +
                                         (double)(float)((double)(float)(dVar48 * dVar24) *
                                                         -0.16666656732559204 + dVar24))));
  dVar48 = (double)(fVar11 * fVar10 * 2.601887e-06 +
                   fVar10 * -0.0001980741 +
                   fVar9 * 0.0083330255 + fVar11 * fVar4 * -0.16666657 + fVar4);
  *(float *)(puVar8 + 0x10) = (float)(dVar48 * param_5 + (double)fVar2);
  dVar32 = 2.0;
  *(float *)((int)puVar8 + 0x84) = (float)(dVar24 * param_5 + (double)fVar5);
  *(float *)((int)puVar8 + 0x8c) = fVar3;
  *(float *)(puVar8 + 0xf) = (float)((double)fVar1 + param_4);
  *(float *)(puVar8 + 0xe) = (float)(dVar48 * param_6 + (double)fVar2);
  *(float *)((int)puVar8 + 0x74) = (float)(dVar24 * param_6 + (double)fVar5);
  *(float *)((int)puVar8 + 0x7c) = fVar3;
  *(float *)(puVar8 + 0x11) = (float)(param_4 * 2.0 + (double)fVar1);
  iVar14 = CollLine(lVar21,lVar20,4,param_7,0);
  dVar48 = dVar26;
  if (iVar14 == 0) {
    dVar24 = (double)M1859_002c9a68(lVar20,param_7);
    dVar26 = dVar25;
    if (dVar24 != dVar23) {
      *pfVar6 = (float)param_5;
      dVar26 = dVar48;
      dVar23 = param_5;
    }
  }
  else {
    if ((g_CollOutput.pMoby == *(MobyInstance **)(iVar7 + 0x38)) ||
       (((g_CollOutput.pMoby != (MobyInstance *)0x0 &&
         ((g_CollOutput.pMoby)->pClass != (MobyClass *)0x0)) &&
        ((short)(g_CollOutput.pMoby)->pClass->mode_bits == 5)))) {
      *pfVar6 = 100.0;
      return dVar26;
    }
    fVar5 = *(float *)((int)puVar8 + 0x74) - g_CollOutput.ip.y;
    fVar5 = SQRT((*(float *)(puVar8 + 0xf) - g_CollOutput.ip.z) *
                 (*(float *)(puVar8 + 0xf) - g_CollOutput.ip.z) +
                 (*(float *)(puVar8 + 0xe) - g_CollOutput.ip.x) *
                 (*(float *)(puVar8 + 0xe) - g_CollOutput.ip.x) + fVar5 * fVar5);
    dVar23 = (double)fVar5;
    dVar45 = dVar46;
    if ((double)*pfVar6 < dVar23) {
      *pfVar6 = fVar5;
    }
  }
  if (0 < iVar13) {
    iVar14 = 0;
    do {
      dVar24 = (double)(float)(dVar27 + dVar38);
      dVar25 = (double)(float)(dVar39 - dVar27);
      if (dVar27 - (double)(float)(dVar39 - dVar27) < 0.0) {
        dVar25 = dVar27;
      }
      dVar34 = (double)(float)(dVar39 - dVar24);
      if (dVar24 - (double)(float)(dVar39 - dVar24) < 0.0) {
        dVar34 = dVar24;
      }
      fVar5 = *param_8;
      dVar29 = (double)(float)(dVar40 - dVar27);
      if ((double)(float)(dVar40 - dVar27) - dVar25 < 0.0) {
        dVar29 = dVar25;
      }
      dVar28 = (double)(float)(dVar29 * dVar29);
      dVar25 = (double)(float)(dVar40 - dVar24);
      if ((double)(float)(dVar40 - dVar24) - dVar34 < 0.0) {
        dVar25 = dVar34;
      }
      fVar1 = param_8[1];
      fVar2 = param_8[2];
      fVar4 = param_8[3];
      *(float *)((int)puVar8 + 0x8c) = fVar4;
      dVar34 = (double)(float)(dVar25 * dVar25);
      dVar24 = (double)(float)(dVar28 * (double)(float)(dVar28 * dVar29));
      dVar35 = (double)(float)(dVar28 * dVar24);
      dVar33 = (double)(float)(dVar34 * (double)(float)(dVar34 * dVar25));
      *(float *)(puVar8 + 0xf) = (float)((double)fVar2 + param_4);
      *(float *)(puVar8 + 0x11) = (float)(param_4 * dVar32 + (double)fVar2);
      *(float *)((int)puVar8 + 0x7c) = fVar4;
      dVar30 = (double)(float)(dVar34 * dVar33);
      dVar24 = (double)(float)((double)(float)(dVar28 * dVar35) * dVar44 +
                              (double)(float)(dVar35 * dVar43 +
                                             (double)(float)(dVar24 * dVar42 +
                                                            (double)(float)((double)(float)(dVar28 *
                                                                                           dVar29) *
                                                                            dVar41 + dVar29))));
      dVar25 = (double)(float)((double)(float)(dVar34 * dVar30) * dVar44 +
                              (double)(float)(dVar30 * dVar43 +
                                             (double)(float)(dVar33 * dVar42 +
                                                            (double)(float)((double)(float)(dVar34 *
                                                                                           dVar25) *
                                                                            dVar41 + dVar25))));
      *(float *)((int)puVar8 + 0x74) = (float)(dVar24 * param_6 + (double)fVar1);
      *(float *)((int)puVar8 + 0x84) = (float)(dVar24 * param_5 + (double)fVar1);
      *(float *)(puVar8 + 0xe) = (float)(dVar25 * param_6 + (double)fVar5);
      *(float *)(puVar8 + 0x10) = (float)(dVar25 * param_5 + (double)fVar5);
      iVar15 = CollLine(lVar21,lVar20,4,param_7,0);
      if (iVar15 == 0) {
        dVar24 = (double)M1859_002c9a68(lVar20,param_7);
        dVar25 = dVar27;
        if ((dVar24 != dVar46) &&
           (((dVar24 = (double)FastSubRots((float)dVar27,(float)dVar48), dVar25 = dVar27,
             dVar24 < dVar45 || (dVar23 < param_5)) &&
            (dVar26 = dVar27, dVar45 = dVar24, dVar23 = param_5, (double)*pfVar6 < param_5)))) {
          *pfVar6 = (float)param_5;
        }
      }
      else {
        if ((g_CollOutput.pMoby == *(MobyInstance **)(iVar7 + 0x38)) ||
           (((g_CollOutput.pMoby != (MobyInstance *)0x0 &&
             ((g_CollOutput.pMoby)->pClass != (MobyClass *)0x0)) &&
            ((short)(g_CollOutput.pMoby)->pClass->mode_bits == 5)))) {
          *pfVar6 = 100.0;
          return dVar27;
        }
        fVar5 = *(float *)((int)puVar8 + 0x74) - g_CollOutput.ip.y;
        dVar24 = (double)SQRT((*(float *)(puVar8 + 0xf) - g_CollOutput.ip.z) *
                              (*(float *)(puVar8 + 0xf) - g_CollOutput.ip.z) +
                              (*(float *)(puVar8 + 0xe) - g_CollOutput.ip.x) *
                              (*(float *)(puVar8 + 0xe) - g_CollOutput.ip.x) + fVar5 * fVar5);
        dVar25 = dVar27;
        if (dVar24 <= dVar23) {
          if (((dVar23 == dVar24) &&
              (dVar34 = (double)FastSubRots((float)dVar27,(float)dVar48), dVar25 = dVar27,
              dVar34 < dVar45)) &&
             (dVar26 = dVar27, dVar45 = dVar34, dVar23 = dVar24, (double)*pfVar6 < dVar24)) {
            *pfVar6 = (float)dVar24;
          }
        }
        else {
          dVar45 = (double)FastSubRots((float)dVar27,(float)dVar48);
          dVar26 = dVar27;
          dVar23 = dVar24;
          if ((double)*pfVar6 < dVar24) {
            *pfVar6 = (float)dVar24;
          }
        }
      }
      dVar27 = (double)FastWrapRot((float)dVar25,(float)(double)puVar8[0x18]);
      iVar14 = iVar14 + 1;
    } while (iVar14 < iVar13);
  }
  dVar45 = (double)FastDiffRots(dVar26,0x3ff921fb60000000);
  dVar23 = (double)(float)(dVar26 + dVar38);
  dVar46 = (double)(float)(dVar45 + dVar38);
  dVar25 = (double)(float)(dVar39 - dVar45);
  if (dVar45 - (double)(float)(dVar39 - dVar45) < 0.0) {
    dVar25 = dVar45;
  }
  dVar48 = (double)(float)(dVar39 - dVar23);
  if (dVar23 - (double)(float)(dVar39 - dVar23) < 0.0) {
    dVar48 = dVar23;
  }
  dVar27 = (double)(float)(dVar39 - dVar46);
  if (dVar46 - (double)(float)(dVar39 - dVar46) < 0.0) {
    dVar27 = dVar46;
  }
  dVar24 = (double)(float)(dVar40 - dVar45);
  if ((double)(float)(dVar40 - dVar45) - dVar25 < 0.0) {
    dVar24 = dVar25;
  }
  dVar25 = (double)(float)(dVar39 - dVar26);
  if (dVar26 - (double)(float)(dVar39 - dVar26) < 0.0) {
    dVar25 = dVar26;
  }
  dVar32 = (double)(float)(dVar40 - dVar23);
  if ((double)(float)(dVar40 - dVar23) - dVar48 < 0.0) {
    dVar32 = dVar48;
  }
  dVar23 = (double)(float)(dVar40 - dVar46);
  if ((double)(float)(dVar40 - dVar46) - dVar27 < 0.0) {
    dVar23 = dVar27;
  }
  dVar48 = (double)(float)(dVar24 * dVar24);
  dVar34 = (double)(float)(dVar32 * dVar32);
  dVar27 = (double)(float)(dVar23 * dVar23);
  dVar46 = (double)(float)(dVar40 - dVar26);
  if ((double)(float)(dVar40 - dVar26) - dVar25 < 0.0) {
    dVar46 = dVar25;
  }
  dVar28 = (double)(float)(dVar48 * (double)(float)(dVar48 * dVar24));
  dVar36 = (double)(float)(dVar46 * dVar46);
  dVar37 = (double)(float)(dVar27 * (double)(float)(dVar27 * dVar23));
  dVar29 = (double)(float)(dVar48 * dVar28);
  dVar30 = (double)(float)(dVar34 * (double)(float)(dVar34 * dVar32));
  dVar25 = (double)(float)(dVar27 * dVar37);
  dVar47 = (double)(float)(dVar34 * dVar30);
  dVar33 = (double)(float)(dVar36 * (double)(float)(dVar36 * dVar46));
  fVar4 = param_8[3];
  dVar35 = 0.125;
  dVar31 = (double)(float)(dVar36 * dVar33);
  fVar5 = (float)((double)(float)((double)(float)(dVar48 * dVar29) * dVar44 +
                                 (double)(float)(dVar29 * dVar43 +
                                                (double)(float)(dVar28 * dVar42 +
                                                               (double)(float)((double)(float)(
                                                  dVar48 * dVar24) * dVar41 + dVar24)))) * param_6 +
                 (double)param_8[1]);
  fVar1 = (float)(param_4 * 0.125 + (double)param_8[2]);
  fVar2 = (float)((double)(float)((double)(float)(dVar27 * dVar25) * dVar44 +
                                 (double)(float)(dVar25 * dVar43 +
                                                (double)(float)(dVar37 * dVar42 +
                                                               (double)(float)((double)(float)(
                                                  dVar27 * dVar23) * dVar41 + dVar23)))) * param_6 +
                 (double)*param_8);
  *(float *)(puVar8 + 0x10) =
       (float)((double)(float)((double)(float)(dVar34 * dVar47) * dVar44 +
                              (double)(float)(dVar47 * dVar43 +
                                             (double)(float)(dVar30 * dVar42 +
                                                            (double)(float)((double)(float)(dVar34 *
                                                                                           dVar32) *
                                                                            dVar41 + dVar32)))) *
               param_5 + (double)fVar2);
  dVar25 = 0.11999999731779099;
  *(float *)((int)puVar8 + 0x8c) = fVar4;
  *(float *)(puVar8 + 0xf) = fVar1;
  *(float *)(puVar8 + 0xe) = fVar2;
  *(float *)((int)puVar8 + 0x74) = fVar5;
  *(float *)((int)puVar8 + 0x7c) = fVar4;
  *(float *)((int)puVar8 + 0x84) =
       (float)((double)(float)((double)(float)(dVar36 * dVar31) * dVar44 +
                              (double)(float)(dVar31 * dVar43 +
                                             (double)(float)(dVar33 * dVar42 +
                                                            (double)(float)((double)(float)(dVar36 *
                                                                                           dVar46) *
                                                                            dVar41 + dVar46)))) *
               param_5 + (double)fVar5);
  *(float *)(puVar8 + 0x11) = fVar1 + 0.12;
  iVar13 = CollLine(lVar21,lVar20,4,param_7,0);
  if (((iVar13 != 0) && (g_CollOutput.pMoby != *(MobyInstance **)(iVar7 + 0x38))) &&
     ((g_CollOutput.pMoby == (MobyInstance *)0x0 ||
      (((g_CollOutput.pMoby)->pClass == (MobyClass *)0x0 ||
       ((short)(g_CollOutput.pMoby)->pClass->mode_bits != 5)))))) {
    fVar5 = *(float *)((int)puVar8 + 0x74) - g_CollOutput.ip.y;
    dVar26 = (double)FastWrapRot
                               ((float)dVar26,
                                ((float)(param_5 -
                                        (double)SQRT((*(float *)(puVar8 + 0xf) - g_CollOutput.ip.z) *
                                                     (*(float *)(puVar8 + 0xf) - g_CollOutput.ip.z) +
                                                     (*(float *)(puVar8 + 0xe) - g_CollOutput.ip.x) *
                                                     (*(float *)(puVar8 + 0xe) - g_CollOutput.ip.x) +
                                                     fVar5 * fVar5)) * 3.1415927) /
                                (float)(param_5 * 3.0));
  }
  dVar27 = 3.1415927410125732;
  dVar23 = (double)FastWrapRot((float)dVar45,3.1415927);
  dVar46 = (double)(float)(dVar23 + dVar38);
  dVar48 = (double)(float)(dVar26 + dVar38);
  dVar45 = (double)(float)(dVar39 - dVar23);
  if (dVar23 - (double)(float)(dVar39 - dVar23) < 0.0) {
    dVar45 = dVar23;
  }
  dVar38 = (double)(float)(dVar39 - dVar26);
  if (dVar26 - (double)(float)(dVar39 - dVar26) < 0.0) {
    dVar38 = dVar26;
  }
  dVar24 = (double)(float)(dVar39 - dVar46);
  if (dVar46 - (double)(float)(dVar39 - dVar46) < 0.0) {
    dVar24 = dVar46;
  }
  dVar32 = (double)(float)(dVar39 - dVar48);
  if (dVar48 - (double)(float)(dVar39 - dVar48) < 0.0) {
    dVar32 = dVar48;
  }
  dVar39 = (double)(float)(dVar40 - dVar23);
  if ((double)(float)(dVar40 - dVar23) - dVar45 < 0.0) {
    dVar39 = dVar45;
  }
  dVar45 = (double)(float)(dVar40 - dVar26);
  if ((double)(float)(dVar40 - dVar26) - dVar38 < 0.0) {
    dVar45 = dVar38;
  }
  dVar38 = (double)(float)(dVar39 * dVar39);
  dVar23 = (double)(float)(dVar40 - dVar46);
  if ((double)(float)(dVar40 - dVar46) - dVar24 < 0.0) {
    dVar23 = dVar24;
  }
  dVar24 = (double)(float)(dVar45 * dVar45);
  dVar46 = (double)(float)(dVar40 - dVar48);
  if ((double)(float)(dVar40 - dVar48) - dVar32 < 0.0) {
    dVar46 = dVar32;
  }
  fVar2 = *param_8;
  fVar1 = param_8[1];
  dVar40 = (double)(float)(dVar23 * dVar23);
  dVar34 = (double)(float)(dVar46 * dVar46);
  dVar29 = (double)(float)(dVar38 * (double)(float)(dVar38 * dVar39));
  dVar31 = (double)(float)(dVar24 * (double)(float)(dVar24 * dVar45));
  fVar5 = (float)(param_4 * dVar35 + (double)param_8[2]);
  dVar32 = (double)(float)(dVar38 * dVar29);
  dVar30 = (double)(float)(dVar40 * (double)(float)(dVar40 * dVar23));
  dVar28 = (double)(float)(dVar24 * dVar31);
  dVar48 = (double)(float)(dVar34 * (double)(float)(dVar34 * dVar46));
  dVar35 = (double)(float)(dVar40 * dVar30);
  fVar4 = param_8[3];
  dVar33 = (double)(float)(dVar34 * dVar48);
  *(float *)((int)puVar8 + 0x8c) = fVar4;
  *(float *)(puVar8 + 0xf) = fVar5;
  fVar1 = (float)((double)(float)((double)(float)(dVar38 * dVar32) * dVar44 +
                                 (double)(float)(dVar32 * dVar43 +
                                                (double)(float)(dVar29 * dVar42 +
                                                               (double)(float)((double)(float)(
                                                  dVar38 * dVar39) * dVar41 + dVar39)))) * param_6 +
                 (double)fVar1);
  *(float *)(puVar8 + 0x11) = (float)((double)fVar5 + dVar25);
  fVar5 = (float)((double)(float)((double)(float)(dVar40 * dVar35) * dVar44 +
                                 (double)(float)(dVar35 * dVar43 +
                                                (double)(float)(dVar30 * dVar42 +
                                                               (double)(float)((double)(float)(
                                                  dVar40 * dVar23) * dVar41 + dVar23)))) * param_6 +
                 (double)fVar2);
  *(float *)((int)puVar8 + 0x74) = fVar1;
  *(float *)((int)puVar8 + 0x7c) = fVar4;
  *(float *)(puVar8 + 0xe) = fVar5;
  *(float *)((int)puVar8 + 0x84) =
       (float)((double)(float)((double)(float)(dVar24 * dVar28) * dVar44 +
                              (double)(float)(dVar28 * dVar43 +
                                             (double)(float)(dVar31 * dVar42 +
                                                            (double)(float)((double)(float)(dVar24 *
                                                                                           dVar45) *
                                                                            dVar41 + dVar45)))) *
               param_5 + (double)fVar1);
  *(float *)(puVar8 + 0x10) =
       (float)((double)(float)((double)(float)(dVar34 * dVar33) * dVar44 +
                              (double)(float)(dVar33 * dVar43 +
                                             (double)(float)(dVar48 * dVar42 +
                                                            (double)(float)((double)(float)(dVar34 *
                                                                                           dVar46) *
                                                                            dVar41 + dVar46)))) *
               param_5 + (double)fVar5);
  iVar13 = CollLine(lVar21,lVar20,4,param_7,0);
  if (((iVar13 != 0) && (g_CollOutput.pMoby != *(MobyInstance **)(iVar7 + 0x38))) &&
     ((g_CollOutput.pMoby == (MobyInstance *)0x0 ||
      (((g_CollOutput.pMoby)->pClass == (MobyClass *)0x0 ||
       ((short)(g_CollOutput.pMoby)->pClass->mode_bits != 5)))))) {
    fVar5 = *(float *)((int)puVar8 + 0x74) - g_CollOutput.ip.y;
    dVar26 = (double)FastDiffRots
                               (dVar26,(double)((float)((double)(float)(param_5 -
                                                                       (double)SQRT((*(float *)(
                                                  puVar8 + 0xf) - g_CollOutput.ip.z) *
                                                  (*(float *)(puVar8 + 0xf) - g_CollOutput.ip.z) +
                                                  (*(float *)(puVar8 + 0xe) - g_CollOutput.ip.x) *
                                                  (*(float *)(puVar8 + 0xe) - g_CollOutput.ip.x) +
                                                  fVar5 * fVar5)) * dVar27) / (float)(param_5 * 3.0)
                                               ));
  }
  dVar25 = (double)FastSubRots((float)dVar26,*(float *)(param_7 + 0x48));
  if (2.5132741928100586 < dVar25) {
    dVar45 = (double)*(float *)(puVar8 + 0x19);
    dVar25 = (double)FastDiffRots(dVar26,(double)*(float *)(param_7 + 0x48));
    dVar26 = (double)FastWrapRot(*(float *)(param_7 + 0x48),(float)(dVar25 * dVar45));
  }
  return dVar26;
}


