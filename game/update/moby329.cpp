// game/update/moby329.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 3 functions, 0x344134-0x34570c
#include <stdio.h>
#include "game/update/moby329.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/path.h"
#include "game/update/moby291.h"
#include "game/update/moby327.h"
#include "game/update/moby334.h"
#include "idol/fastfunc.h"

// 0x0344134 (0x14 bytes)
void M329_00344134(void)

{
  DAT_0083fb50 = 0x10000;
  return;
}


// 0x0344150 (0x130 bytes)
MobyInstance *
FUN_00344150(double param_1,undefined4 param_2,f32 *param_3,undefined4 *param_4,undefined8 param_5,
            undefined4 param_6,undefined2 param_7)

{
  f32 fVar1;
  float fVar2;
  void *pvVar3;
  MobyClass *pMVar4;
  MobyInstance *pMVar5;
  
  pMVar5 = CreateMoby(0x149);
  if (pMVar5 != (MobyInstance *)0x0) {
    pMVar5->updateDistance = -1;
    pMVar5->enabled = '\x01';
    pMVar5->state = '\0';
    pMVar5->setByGroup = '\0';
    pvVar3 = pMVar5->pVar;
    (pMVar5->pos).x = *param_3;
    (pMVar5->pos).y = param_3[1];
    (pMVar5->pos).z = param_3[2];
    fVar1 = param_3[3];
    pMVar5->drawDistance = 0xff;
    (pMVar5->pos).w = fVar1;
    *(undefined4 *)((int)pvVar3 + 0x40) = *param_4;
    *(undefined4 *)((int)pvVar3 + 0x44) = param_4[1];
    *(undefined4 *)((int)pvVar3 + 0x48) = param_4[2];
    *(undefined4 *)((int)pvVar3 + 0x4c) = param_4[3];
    (pMVar5->rotation).z = (float)param_1;
    pMVar4 = pMVar5->pClass;
    *(undefined4 *)((int)pvVar3 + 0x58) = param_2;
    fVar2 = pMVar4->gScale;
    *(undefined4 *)((int)pvVar3 + 0x5c) = param_6;
    *(undefined2 *)((int)pvVar3 + 0x56) = param_7;
    pMVar5->scale = fVar2 * 0.1;
    UpdateMobyTransform(pMVar5);
    MB_CopyHeroLights(pMVar5);
  }
  return pMVar5;
}


// 0x0344328 (0x13e4 bytes)
// inlined: FastAtan2 @0x344a5c, FastAtan2 @0x344c6c
// strings: 00656424: 'error, GunpVar was NULL!\n' | 00656444: 'error, Boss was NULL!\n' | 0065645c: 'error, BosspVar was NULL!\n' | 0065647c: 'error, path was NULL!\n'

/* Moby 329 */

void UpdateMoby_329(MobyInstance *moby)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  f32 fVar8;
  float *pfVar9;
  float fVar10;
  int *piVar11;
  Spline *spline;
  uint uVar12;
  uint uVar13;
  ulonglong *puVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  ulonglong uVar21;
  longlong lVar22;
  int iVar25;
  longlong lVar23;
  longlong lVar24;
  short sVar27;
  int iVar26;
  ulonglong uVar28;
  float *pfVar30;
  longlong lVar29;
  longlong lVar31;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  int iVar32;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar33;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  ulonglong in_f18;
  ulonglong in_f19;
  ulonglong in_f20;
  undefined8 uVar38;
  ulonglong in_f21;
  double dVar39;
  ulonglong in_f22;
  double dVar40;
  ulonglong in_f23;
  double dVar41;
  double dVar42;
  ulonglong in_f24;
  double dVar43;
  double dVar44;
  ulonglong in_f25;
  double dVar45;
  double dVar46;
  ulonglong in_f26;
  ulonglong in_f27;
  double dVar47;
  ulonglong in_f28;
  double dVar48;
  ulonglong in_f29;
  double dVar49;
  double dVar50;
  ulonglong in_f30;
  double dVar51;
  double dVar52;
  ulonglong in_f31;
  double dVar53;
  
  lVar22 = (longlong)(int)moby;
  uVar21 = ZEXT48(&stack0x00000000);
  lVar24 = uVar21 - 0x240;
  puVar14 = (ulonglong *)lVar24;
  *puVar14 = uVar21;
  puVar14[0x4a] = in_LR;
  puVar14[0x3a] = in_f18;
  puVar14[0x3b] = in_f19;
  puVar14[0x3c] = in_f20;
  puVar14[0x3d] = in_f21;
  puVar14[0x3e] = in_f22;
  puVar14[0x3f] = in_f23;
  puVar14[0x40] = in_f24;
  puVar14[0x41] = in_f25;
  puVar14[0x42] = in_f26;
  puVar14[0x43] = in_f27;
  puVar14[0x44] = in_f28;
  puVar14[0x45] = in_f29;
  puVar14[0x46] = in_f30;
  puVar14[0x47] = in_f31;
  puVar14[0x39] = unaff_r31;
  puVar14[0x38] = unaff_r30;
  puVar14[0x37] = unaff_r29;
  puVar14[0x36] = unaff_r28;
  puVar14[0x35] = unaff_r27;
  puVar14[0x34] = unaff_r26;
  puVar14[0x33] = unaff_r25;
  if (moby != (MobyInstance *)0x0) {
    pfVar9 = (float *)moby->pVar;
    uVar33 = ZEXT48(pfVar9);
    if (pfVar9 != (float *)0x0) {
      fVar10 = pfVar9[0x16];
      if (((fVar10 == 0.0) ||
          (*(char *)((int)fVar10 + 0x20) == -3 || *(char *)((int)fVar10 + 0x20) == -2)) ||
         (*(short *)((int)fVar10 + 0xa6) != 0x179)) {
        puVar14[0x12] = 0xffffffffffffffff;
        puVar14[0x14] = 1;
        puVar14[0x15] = 1;
        puVar14[0x16] = 0xffffffffffffffff;
        puVar14[0x17] = 0;
        MB_genericExplosion
                  (0,0,0x4010000000000000,0x4000000000000000,0x4022000000000000,0x3ff0000000000000,
                   0x402e000000000000,lVar22,uVar33 + 0x40,0,1,0xffffffffffffffff,10,3,0x10);
        DeleteMoby(moby);
      }
      else {
        piVar11 = *(int **)((int)fVar10 + 0x78);
        if (piVar11 == (int *)0x0) {
          printf("error, GunpVar was NULL!\n");
          DeleteMoby(moby);
        }
        else {
          iVar26 = *piVar11;
          if (iVar26 == 0) {
            printf("error, Boss was NULL!\n");
            DeleteMoby(moby);
          }
          else {
            iVar32 = *(int *)(iVar26 + 0x78);
            if (iVar32 == 0) {
              printf("error, BosspVar was NULL!\n");
              DeleteMoby(moby);
            }
            else {
              spline = Splines[(int)pfVar9[0x17]];
              if (spline == (Spline *)0x0) {
                printf("error, path was NULL!\n");
                DeleteMoby(moby);
              }
              else {
                dVar49 = -0.949999988079071;
                dVar47 = 1.0;
                bVar1 = DAT_0083be04 == 0;
                moby->scale = (moby->pClass->gScale - moby->scale) * (DAT_0071f408 * -0.95 + 1.0) +
                              moby->scale;
                dVar51 = 0.3499999940395355;
                if (bVar1) {
                  dVar35 = (double)(moby->pos).z;
                }
                else {
                  dVar35 = (double)FUN_00342d38(lVar22 + 0x10);
                }
                dVar51 = (double)(float)(dVar35 + dVar51);
                if (moby->state != '\x05') {
                  iVar25 = MB_damage(lVar22,0x30000,0);
                  MB_HandleDamage(moby,iVar25,uVar33,0,puVar14 + 0x26,0,0,4);
                  if (iVar25 != 0) {
                    uVar12 = (int)*pfVar9 >> 0x1f;
                    uVar13 = (int)*(uint *)(iVar25 + 0x2c) >> 0x1f;
                    if ((int)((uVar13 >> 1 ^ *(uint *)(iVar25 + 0x2c)) - uVar13) <
                        (int)((uVar12 >> 1 ^ (uint)*pfVar9) - uVar12)) {
                      *pfVar9 = *pfVar9 - *(float *)(iVar25 + 0x2c);
                      fVar10 = *(float *)(iVar25 + 0x14);
                      fVar4 = *(float *)(iVar25 + 0x10);
                      fVar5 = *(float *)(iVar25 + 0x18);
                      fVar6 = 0.0;
                      fVar17 = SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar10 * fVar10);
                      fVar7 = (*(float *)(iVar25 + 0x2c) * 0.125) / fVar17;
                      fVar16 = fVar6;
                      if (0.0 - fVar17 < 0.0) {
                        fVar16 = fVar5 * fVar7;
                      }
                      fVar15 = fVar6;
                      if (0.0 - fVar17 < 0.0) {
                        fVar15 = fVar10 * fVar7;
                      }
                      if (0.0 - fVar17 < 0.0) {
                        fVar6 = fVar4 * fVar7;
                      }
                      if (fVar17 - 0.0 < 0.0) {
                        fVar16 = fVar5 * fVar7;
                      }
                      if (fVar17 - 0.0 < 0.0) {
                        fVar15 = fVar10 * fVar7;
                      }
                      if (fVar17 - 0.0 < 0.0) {
                        fVar6 = fVar4 * fVar7;
                      }
                      pfVar9[0x12] = pfVar9[0x12] + fVar16;
                      pfVar9[0x11] = pfVar9[0x11] + fVar15;
                      pfVar9[0x10] = pfVar9[0x10] + fVar6;
                    }
                    else {
                      *pfVar9 = 0.0;
                      moby->state = '\x05';
                      *(undefined2 *)(pfVar9 + 0x15) = 0xb4;
                    }
                    moby->damage = -1;
                  }
                }
                fVar5 = g_heroPosition.w;
                fVar4 = g_heroPosition.z;
                fVar10 = g_heroPosition.y;
                bVar2 = moby->state;
                if (bVar2 < 2) {
                  if (-1 < (int)(uint)bVar2) {
                    if (bVar2 == 0) {
                      moby->state = '\x01';
                      *pfVar9 = 5.0;
                      *(undefined2 *)(pfVar9 + 1) = 5;
                      *(undefined1 *)(pfVar9 + 2) = 0;
                      iVar26 = PathFindClosestPnt(0.0,(Vec4 *)&moby->pos,spline);
                      *(short *)(pfVar9 + 0x18) = (short)iVar26;
                      FastMemSet
                                (iVar32 + *(short *)((int)pfVar9 + 0x56) * 0x40 + 0x50,0,0x40);
                      AttachManipulator
                                (moby,3,iVar32 + (int)((longlong)*(short *)((int)pfVar9 + 0x56) << 6
                                                      ) + 0x50);
                    }
                    else if (g_heroState == TURRET_PLANE_UI) {
                      moby->state = '\x02';
                    }
                  }
                }
                else if (bVar2 < 5) {
                  if (bVar2 < 4) {
                    fVar7 = g_heroPosition.x - *(float *)(iVar26 + 0x10);
                    *(float *)(puVar14 + 0x18) = fVar7;
                    fVar10 = fVar10 - *(float *)(iVar26 + 0x14);
                    *(float *)((int)puVar14 + 0xc4) = fVar10;
                    fVar6 = *(float *)(iVar26 + 0x18);
                    *(float *)((int)puVar14 + 0xcc) = fVar5;
                    fVar4 = fVar4 - fVar6;
                    *(float *)(puVar14 + 0x19) = fVar4;
                    fVar10 = fVar10 * 0.3;
                    fVar7 = fVar7 * 0.3;
                    fVar4 = fVar4 * 0.3;
                    *(float *)(puVar14 + 0x18) = fVar7;
                    *(float *)((int)puVar14 + 0xc4) = fVar10;
                    *(float *)(puVar14 + 0x19) = fVar4;
                    dVar43 = (double)(moby->pos).x;
                    dVar35 = (double)(moby->pos).y;
                    dVar41 = (double)(moby->pos).z;
                    dVar40 = (double)(moby->pos).w;
                    fVar5 = SQRT(fVar4 * fVar4 + fVar7 * fVar7 + fVar10 * fVar10);
                    if (fVar5 < 2.0) {
                      fVar17 = 2.0 / fVar5;
                      fVar15 = 0.0;
                      fVar16 = fVar7 * fVar17;
                      fVar6 = fVar10 * fVar17;
                      fVar17 = fVar4 * fVar17;
                      fVar7 = fVar15;
                      if (0.0 - fVar5 < 0.0) {
                        fVar7 = fVar16;
                      }
                      fVar10 = fVar15;
                      if (0.0 - fVar5 < 0.0) {
                        fVar10 = fVar6;
                      }
                      if (0.0 - fVar5 < 0.0) {
                        fVar15 = fVar17;
                      }
                      if (fVar5 - 0.0 < 0.0) {
                        fVar7 = fVar16;
                      }
                      if (fVar5 - 0.0 < 0.0) {
                        fVar10 = fVar6;
                      }
                      fVar4 = fVar15;
                      if (fVar5 - 0.0 < 0.0) {
                        fVar4 = fVar17;
                      }
                      *(float *)(puVar14 + 0x18) = fVar7;
                      *(float *)((int)puVar14 + 0xc4) = fVar10;
                      *(float *)(puVar14 + 0x19) = fVar4;
                    }
                    *(float *)(puVar14 + 0x18) = fVar7 + *(float *)(iVar26 + 0x10);
                    *(float *)((int)puVar14 + 0xc4) = fVar10 + *(float *)(iVar26 + 0x14);
                    *(float *)(puVar14 + 0x19) = fVar4 + *(float *)(iVar26 + 0x18);
                    dVar45 = 0.0;
                    MB_PathFollowToPos
                              (0x408f380000000000,0x4014000000000000,0,spline,uVar21 - 0x180,
                               uVar21 - 0x170,uVar21 - 0x108,uVar21 - 0x10c);
                    *(short *)(pfVar9 + 0x18) = (short)*(undefined4 *)(puVar14 + 0x27);
                    fVar10 = (moby->pos).y;
                    fVar16 = *(float *)((int)puVar14 + 0xd4) - fVar10;
                    fVar4 = (moby->pos).x;
                    fVar15 = *(float *)(puVar14 + 0x1a) - fVar4;
                    fVar5 = (moby->pos).z;
                    fVar17 = *(float *)(puVar14 + 0x1b) - fVar5;
                    *(undefined4 *)((int)puVar14 + 0xcc) = *(undefined4 *)((int)puVar14 + 0xdc);
                    *(float *)(puVar14 + 0x18) = fVar15;
                    *(float *)((int)puVar14 + 0xc4) = fVar16;
                    *(float *)(puVar14 + 0x19) = fVar17;
                    fVar6 = DAT_0071f408 * 0.5;
                    fVar7 = SQRT(fVar17 * fVar17 + fVar15 * fVar15 + fVar16 * fVar16);
                    fVar18 = fVar6 / fVar7;
                    if (fVar6 - fVar7 < 0.0) {
                      fVar16 = fVar16 * fVar18;
                    }
                    if (fVar6 - fVar7 < 0.0) {
                      fVar15 = fVar15 * fVar18;
                    }
                    if (fVar6 - fVar7 < 0.0) {
                      fVar17 = fVar17 * fVar18;
                    }
                    fVar16 = fVar16 + fVar10;
                    fVar15 = fVar15 + fVar4;
                    fVar10 = (float)((double)fVar16 - dVar35);
                    fVar4 = (float)((double)fVar15 - dVar43);
                    *(float *)((int)puVar14 + 0xc4) = fVar16;
                    *(float *)(puVar14 + 0x18) = fVar15;
                    *(float *)(puVar14 + 0x19) = fVar17 + fVar5;
                    pfVar9[0x11] = fVar10;
                    pfVar9[0x10] = fVar4;
                    *(float *)(puVar14 + 0x29) = fVar4;
                    *(float *)((int)puVar14 + 0x14c) = fVar10;
                    (moby->pos).z = (float)dVar41;
                    (moby->pos).x = (float)dVar43;
                    (moby->pos).y = (float)dVar35;
                    *(float *)(puVar14 + 0x2a) = (float)(ABS((double)fVar4) - ABS((double)fVar10));
                    uVar12 = *(uint *)(puVar14 + 0x29);
                    fVar5 = *(float *)(puVar14 + 0x29);
                    (moby->pos).w = (float)dVar40;
                    fVar6 = (moby->rotation).z;
                    dVar40 = 0.7853981852531433;
                    uVar28 = (ulonglong)(uVar12 >> 0x1c) & 8 |
                             (ulonglong)(*(uint *)(puVar14 + 0x2a) >> 0x1e) & 2 |
                             (ulonglong)(*(uint *)((int)puVar14 + 0x14c) >> 0x1d) & 4;
                    dVar35 = ABS((double)fVar5);
                    if ((double)*(float *)(puVar14 + 0x2a) - dVar45 < 0.0) {
                      dVar35 = ABS((double)fVar10);
                    }
                    fVar10 = *(float *)(&g_atanQuadrantTable + (int)(uVar28 << 2));
                    dVar41 = ABS((double)*(float *)((int)puVar14 + 0x14c));
                    if ((double)*(float *)(puVar14 + 0x2a) - dVar45 < 0.0) {
                      dVar41 = ABS((double)fVar4);
                    }
                    fVar4 = *(float *)(((uint)(uVar28 << 2) | 0x735900) + 4);
                    dVar43 = dVar45;
                    if (dVar45 < dVar35) {
                      lVar23 = uVar21 - 0x230;
                      lVar29 = uVar21 - 0xcc;
                      lVar31 = uVar21 - 0xbc;
                      lVar34 = 2;
                      fVar5 = (float)(dVar41 - dVar35) / (float)(dVar41 + dVar35);
                      fVar7 = fVar5 * fVar5;
                      *(float *)(puVar14 + 0x30) = fVar5;
                      *(float *)(puVar14 + 0x2f) = fVar5;
                      *(float *)((int)puVar14 + 0x17c) = fVar5;
                      *(float *)((int)puVar14 + 0x174) = fVar5;
                      fVar5 = fVar7 * fVar7;
                      *(float *)(puVar14 + 0x2f) = *(float *)(puVar14 + 0x2f) * fVar7;
                      *(float *)((int)puVar14 + 0x17c) = *(float *)((int)puVar14 + 0x17c) * fVar5;
                      *(float *)(puVar14 + 0x30) = *(float *)(puVar14 + 0x30) * fVar5 * fVar7;
                      do {
                        *(float *)((int)lVar23 + 0x174) =
                             *(float *)((int)lVar23 + 0x164) * fVar5 * fVar5;
                        iVar26 = (int)lVar29;
                        lVar23 = lVar23 + 8;
                        lVar29 = lVar29 + 8;
                        *(float *)((int)lVar31 + 4) = *(float *)(iVar26 + 4) * fVar5 * fVar5;
                        lVar31 = lVar31 + 8;
                        lVar34 = lVar34 + -1;
                      } while (lVar34 != 0);
                      lVar34 = 4;
                      lVar31 = uVar21 - 0xcc;
                      pfVar30 = (float *)&DAT_007358e0;
                      lVar23 = lVar24;
                      lVar29 = lVar31;
                      do {
                        fVar5 = *pfVar30;
                        fVar7 = pfVar30[1];
                        pfVar30 = pfVar30 + 2;
                        *(float *)((int)lVar23 + 0x174) = *(float *)((int)lVar23 + 0x174) * fVar5;
                        lVar23 = lVar23 + 8;
                        *(float *)((int)lVar29 + 4) = *(float *)((int)lVar29 + 4) * fVar7;
                        lVar29 = lVar29 + 8;
                        lVar34 = lVar34 + -1;
                      } while (lVar34 != 0);
                      lVar29 = 2;
                      lVar23 = lVar24;
                      dVar35 = dVar45;
                      do {
                        iVar26 = (int)lVar23;
                        lVar23 = lVar23 + 0x10;
                        iVar25 = (int)lVar31;
                        lVar31 = lVar31 + 0x10;
                        dVar35 = (double)((float)(dVar35 + (double)*(float *)(iVar26 + 0x174)) +
                                          *(float *)(iVar25 + 4) + *(float *)(iVar25 + 8) +
                                         *(float *)(iVar25 + 0xc));
                        lVar29 = lVar29 + -1;
                      } while (lVar29 != 0);
                      dVar43 = (double)((float)(dVar35 + 0.7853981852531433) * fVar10 + fVar4);
                    }
                    dVar35 = (double)FastDiffRots(dVar43,(double)fVar6);
                    fVar10 = (float)(dVar35 * (double)(float)((double)DAT_0071f408 * dVar49 + dVar47
                                                             ));
                    dVar41 = (double)fVar10;
                    dVar35 = (double)FastWrapRot((moby->rotation).z,fVar10);
                    (moby->rotation).z = (float)dVar35;
                    (moby->rotation).x = (float)(dVar41 * 4.0);
                    GetBonePosition(lVar22,3,uVar21 - 0x160);
                    fVar10 = g_heroPosition.x - (moby->pos).x;
                    fVar4 = g_heroPosition.y - (moby->pos).y;
                    dVar41 = ABS((double)fVar10);
                    dVar43 = ABS((double)fVar4);
                    *(float *)((int)puVar14 + 0x13c) = fVar10;
                    *(float *)(puVar14 + 0x28) = fVar4;
                    fVar10 = (moby->rotation).z;
                    *(float *)((int)puVar14 + 0x144) = (float)(dVar41 - dVar43);
                    uVar28 = (ulonglong)(*(uint *)((int)puVar14 + 0x13c) >> 0x1c) & 8 |
                             (ulonglong)(*(uint *)((int)puVar14 + 0x144) >> 0x1e) & 2 |
                             (ulonglong)(*(uint *)(puVar14 + 0x28) >> 0x1d) & 4;
                    dVar35 = ABS((double)*(float *)((int)puVar14 + 0x13c));
                    if ((double)*(float *)((int)puVar14 + 0x144) - dVar45 < 0.0) {
                      dVar35 = dVar43;
                    }
                    fVar5 = *(float *)(&g_atanQuadrantTable + (int)(uVar28 << 2));
                    fVar4 = *(float *)(((uint)(uVar28 << 2) | 0x735900) + 4);
                    dVar43 = ABS((double)*(float *)(puVar14 + 0x28));
                    if ((double)*(float *)((int)puVar14 + 0x144) - dVar45 < 0.0) {
                      dVar43 = dVar41;
                    }
                    dVar41 = dVar45;
                    if (dVar45 < dVar35) {
                      lVar23 = uVar21 - 0x230;
                      lVar29 = uVar21 - 0xec;
                      lVar31 = uVar21 - 0xdc;
                      lVar34 = 2;
                      fVar6 = (float)(dVar43 - dVar35) / (float)(dVar43 + dVar35);
                      fVar7 = fVar6 * fVar6;
                      *(float *)(puVar14 + 0x2c) = fVar6;
                      *(float *)(puVar14 + 0x2b) = fVar6;
                      *(float *)((int)puVar14 + 0x15c) = fVar6;
                      *(float *)((int)puVar14 + 0x154) = fVar6;
                      fVar6 = fVar7 * fVar7;
                      *(float *)(puVar14 + 0x2b) = *(float *)(puVar14 + 0x2b) * fVar7;
                      *(float *)((int)puVar14 + 0x15c) = *(float *)((int)puVar14 + 0x15c) * fVar6;
                      *(float *)(puVar14 + 0x2c) = *(float *)(puVar14 + 0x2c) * fVar6 * fVar7;
                      do {
                        *(float *)((int)lVar23 + 0x154) =
                             *(float *)((int)lVar23 + 0x144) * fVar6 * fVar6;
                        iVar26 = (int)lVar29;
                        lVar23 = lVar23 + 8;
                        lVar29 = lVar29 + 8;
                        *(float *)((int)lVar31 + 4) = *(float *)(iVar26 + 4) * fVar6 * fVar6;
                        lVar31 = lVar31 + 8;
                        lVar34 = lVar34 + -1;
                      } while (lVar34 != 0);
                      lVar34 = 4;
                      lVar31 = uVar21 - 0xec;
                      pfVar30 = (float *)&DAT_007358e0;
                      lVar23 = lVar24;
                      lVar29 = lVar31;
                      do {
                        fVar6 = *pfVar30;
                        fVar7 = pfVar30[1];
                        pfVar30 = pfVar30 + 2;
                        *(float *)((int)lVar23 + 0x154) = *(float *)((int)lVar23 + 0x154) * fVar6;
                        lVar23 = lVar23 + 8;
                        *(float *)((int)lVar29 + 4) = *(float *)((int)lVar29 + 4) * fVar7;
                        lVar29 = lVar29 + 8;
                        lVar34 = lVar34 + -1;
                      } while (lVar34 != 0);
                      lVar23 = 2;
                      dVar35 = dVar45;
                      do {
                        iVar26 = (int)lVar24;
                        lVar24 = lVar24 + 0x10;
                        iVar25 = (int)lVar31;
                        lVar31 = lVar31 + 0x10;
                        dVar35 = (double)((float)(dVar35 + (double)*(float *)(iVar26 + 0x154)) +
                                          *(float *)(iVar25 + 4) + *(float *)(iVar25 + 8) +
                                         *(float *)(iVar25 + 0xc));
                        lVar23 = lVar23 + -1;
                      } while (lVar23 != 0);
                      dVar41 = (double)((float)(dVar35 + dVar40) * fVar5 + fVar4);
                    }
                    uVar38 = FastDiffRots(dVar41,(double)fVar10);
                    dVar35 = (double)FastDiffRots(uVar38,(double)pfVar9[0x1a]);
                    dVar49 = (double)FastWrapRot
                                               (pfVar9[0x1a],
                                                (float)(dVar35 * (double)(float)((double)
                                                  DAT_0071f408 * dVar49 + dVar47)));
                    pfVar9[0x1a] = (float)dVar49;
                    FastQuaternionToEuler
                              (iVar32 + *(short *)((int)pfVar9 + 0x56) * 0x40 + 0x60,2);
                    FastDecTimerU8(uVar33 + 99);
                    iVar26 = 0;
                    bVar1 = true;
                    iVar32 = 0;
                    do {
                      if (((iVar26 != *(short *)((int)pfVar9 + 0x56)) &&
                          (iVar25 = *(int *)(*(int *)((int)pfVar9[0x16] + 0x78) + iVar32 + 0x10),
                          iVar25 != 0)) &&
                         ((iVar25 = *(int *)(iVar25 + 0x78), iVar25 != 0 &&
                          (*(char *)(iVar25 + 99) != '\0')))) {
                        bVar1 = false;
                        break;
                      }
                      iVar26 = iVar26 + 1;
                      iVar32 = iVar32 + 4;
                    } while (iVar26 < 4);
                    iVar26 = FastDecTimerU8(uVar33 + 0x51);
                    if (((iVar26 != 0) && (bVar1)) &&
                       ((uVar38 = 0x3fc99999a0000000, dVar35 < 0.20000000298023224 &&
                        (moby->enabled != '\0')))) {
                      dVar35 = (double)(g_FrameTime * 30.0);
                      dVar49 = (double)FastWrapRot(pfVar9[0x1a],(moby->rotation).z);
                      MB_SphericalToVector
                                ((float)dVar35,(float)dVar49,(float)dVar45,(float *)(puVar14 + 0x1e)
                                );
                      *(float *)(puVar14 + 0x1e) = *(float *)(puVar14 + 0x1e) + pfVar9[0x10];
                      *(float *)((int)puVar14 + 0xf4) =
                           *(float *)((int)puVar14 + 0xf4) + pfVar9[0x11];
                      *(float *)(puVar14 + 0x1f) = *(float *)(puVar14 + 0x1f) + pfVar9[0x12];
                      GetBonePosition(lVar22,5,uVar21 - 0x140);
                      fVar10 = *(float *)(puVar14 + 0x20) + *(float *)(puVar14 + 0x1e);
                      fVar4 = *(float *)((int)puVar14 + 0x104) + *(float *)((int)puVar14 + 0xf4);
                      fVar5 = *(float *)(puVar14 + 0x21) + *(float *)(puVar14 + 0x1f);
                      *(float *)(puVar14 + 0x20) = fVar10;
                      *(float *)((int)puVar14 + 0x104) = fVar4;
                      *(float *)(puVar14 + 0x21) = fVar5;
                      *(float *)(puVar14 + 8) = fVar10;
                      *(float *)(puVar14 + 9) = fVar5;
                      *(float *)(puVar14 + 10) = *(float *)(puVar14 + 0x1e);
                      *(float *)(puVar14 + 0xb) = *(float *)(puVar14 + 0x1f);
                      *(float *)((int)puVar14 + 0x44) = fVar4;
                      *(undefined4 *)((int)puVar14 + 0x4c) = *(undefined4 *)((int)puVar14 + 0x10c);
                      *(float *)((int)puVar14 + 0x54) = *(float *)((int)puVar14 + 0xf4);
                      *(undefined4 *)((int)puVar14 + 0x5c) = *(undefined4 *)((int)puVar14 + 0xfc);
                      puVar14[0xe] = 0;
                      FUN_003487b8(0x3fd0000000000000,0xbff0000000000000,0x3fb99999a0000000,uVar38,
                                   lVar22);
                      cVar3 = *(char *)(pfVar9 + 0x14);
                      *(char *)(pfVar9 + 0x14) = cVar3 + '\x01';
                      if ((char)(cVar3 + '\x01') == '\x03') {
                        *(undefined1 *)((int)pfVar9 + 0x51) = 0xf0;
                        *(undefined1 *)(pfVar9 + 0x14) = 0;
                      }
                      else {
                        *(undefined1 *)((int)pfVar9 + 0x51) = 0x18;
                      }
                      *(undefined1 *)((int)pfVar9 + 99) = 0x19;
                    }
                  }
                }
                else if (bVar2 < 6) {
                  puVar14[0x12] = 0xffffffffffffffff;
                  puVar14[0x14] = 1;
                  puVar14[0x15] = 1;
                  puVar14[0x16] = 0xffffffffffffffff;
                  puVar14[0x17] = 0;
                  MB_genericExplosion
                            (0,0,0x4010000000000000,0x4000000000000000,0x4022000000000000,dVar47,
                             0x402e000000000000,lVar22,uVar33 + 0x40,0,1,0xffffffffffffffff,10,3,
                             0x10);
                  *(short *)((int)piVar11 + 0xe) = *(short *)((int)piVar11 + 0xe) + -1;
                  *(undefined4 *)
                   ((int)piVar11 + (int)((longlong)*(short *)((int)pfVar9 + 0x56) << 2) + 0x10) = 0;
                  sVar27 = *(short *)((int)pfVar9 + 0x56);
                  iVar26 = iVar32 + (int)((longlong)sVar27 << 6);
                  if (*(char *)(iVar26 + 0x51) != '\0') {
                    DetachManipulator(moby,iVar26 + 0x50);
                    sVar27 = *(short *)((int)pfVar9 + 0x56);
                  }
                  FastMemSet(iVar32 + sVar27 * 0x40 + 0x50,0,0x40);
                  DeleteMoby(moby);
                  return;
                }
                fVar10 = pfVar9[0x11];
                fVar4 = pfVar9[0x10];
                dVar49 = 0.550000011920929;
                dVar35 = (double)((moby->pos).z + pfVar9[0x12]);
                fVar5 = SQRT(fVar4 * fVar4 + fVar10 * fVar10);
                if (DAT_0071f408 * 0.55 < fVar5) {
                  fVar5 = (DAT_0071f408 * 0.55) / fVar5;
                  pfVar9[0x10] = fVar4 * fVar5;
                  pfVar9[0x11] = fVar10 * fVar5;
                }
                iVar26 = MB_CheckCollPill(moby,4,0,0);
                if (dVar35 < dVar51) {
                  if (moby->state == '\x02') {
                    moby->state = '\x03';
                  }
                  pfVar9[0x12] = (float)(dVar51 - dVar35) * 0.2 + pfVar9[0x12];
                  dVar50 = 1.570796251296997;
                  fVar10 = (moby->rotation).z;
                  dVar48 = 3.141592502593994;
                  fVar5 = fVar10 + 1.5707963;
                  dVar45 = -3.141592502593994;
                  dVar43 = -0.16666656732559204;
                  dVar41 = 0.008333025500178337;
                  dVar40 = -0.0001980741071747616;
                  dVar51 = 2.601886990305502e-06;
                  dVar35 = 1.5707963705062866;
                  fVar4 = 3.1415925 - fVar10;
                  if (fVar10 - (3.1415925 - fVar10) < 0.0) {
                    fVar4 = fVar10;
                  }
                  fVar6 = 3.1415925 - fVar5;
                  if (fVar5 - (3.1415925 - fVar5) < 0.0) {
                    fVar6 = fVar5;
                  }
                  fVar7 = -3.1415925 - fVar10;
                  if ((-3.1415925 - fVar10) - fVar4 < 0.0) {
                    fVar7 = fVar4;
                  }
                  fVar4 = -3.1415925 - fVar5;
                  if ((-3.1415925 - fVar5) - fVar6 < 0.0) {
                    fVar4 = fVar6;
                  }
                  fVar16 = fVar7 * fVar7;
                  fVar18 = fVar4 * fVar4;
                  fVar5 = fVar16 * fVar16 * fVar7;
                  fVar17 = fVar18 * fVar18 * fVar4;
                  fVar6 = fVar16 * fVar5;
                  fVar15 = fVar18 * fVar17;
                  dVar52 = (double)(fVar16 * fVar6 * 2.601887e-06 +
                                   fVar6 * -0.0001980741 +
                                   fVar5 * 0.0083330255 + fVar16 * fVar7 * -0.16666657 + fVar7);
                  dVar53 = (double)(fVar18 * fVar15 * 2.601887e-06 +
                                   fVar15 * -0.0001980741 +
                                   fVar17 * 0.0083330255 + fVar18 * fVar4 * -0.16666657 + fVar4);
                  dVar36 = (double)FastWrapRot(fVar10,1.5707964);
                  dVar36 = (double)(float)(dVar36 + dVar50);
                  dVar50 = (double)(float)(dVar48 - dVar36);
                  if (dVar36 - (double)(float)(dVar48 - dVar36) < 0.0) {
                    dVar50 = dVar36;
                  }
                  dVar39 = (double)(float)(dVar45 - dVar36);
                  if ((double)(float)(dVar45 - dVar36) - dVar50 < 0.0) {
                    dVar39 = dVar50;
                  }
                  dVar50 = (double)(float)(dVar39 * dVar39);
                  dVar37 = (double)(float)(dVar50 * (double)(float)(dVar50 * dVar39));
                  dVar36 = (double)(float)(dVar50 * dVar37);
                  dVar36 = (double)(float)((double)(float)(dVar50 * dVar36) * dVar51 +
                                          (double)(float)(dVar36 * dVar40 +
                                                         (double)(float)(dVar37 * dVar41 +
                                                                        (double)(float)((double)(
                                                  float)(dVar50 * dVar39) * dVar43 + dVar39))));
                  dVar50 = (double)FastWrapRot((moby->rotation).z,(float)dVar35);
                  iVar32 = 0;
                  dVar35 = (double)(float)(dVar48 - dVar50);
                  if (dVar50 - (double)(float)(dVar48 - dVar50) < 0.0) {
                    dVar35 = dVar50;
                  }
                  *(float *)(puVar14 + 0x24) = pfVar9[0x10] * 0.8;
                  dVar48 = (double)(float)(dVar45 - dVar50);
                  if ((double)(float)(dVar45 - dVar50) - dVar35 < 0.0) {
                    dVar48 = dVar35;
                  }
                  *(float *)((int)puVar14 + 0x124) = pfVar9[0x11] * 0.8;
                  dVar35 = (double)(float)(dVar48 * dVar48);
                  *(float *)(puVar14 + 0x25) = pfVar9[0x12] * 0.8;
                  *(float *)((int)puVar14 + 300) = pfVar9[0x13];
                  dVar46 = -0.5;
                  dVar50 = (double)(float)(dVar35 * (double)(float)(dVar35 * dVar48));
                  dVar44 = 0.5;
                  dVar45 = (double)(float)(dVar35 * dVar50);
                  dVar42 = 0.0010000000474974513;
                  dVar37 = 0.029999999329447746;
                  dVar39 = 0.0;
                  uVar38 = 0x3f747ae140000000;
                  dVar51 = (double)(float)((double)(float)(dVar35 * dVar45) * dVar51 +
                                          (double)(float)(dVar45 * dVar40 +
                                                         (double)(float)(dVar50 * dVar41 +
                                                                        (double)(float)((double)(
                                                  float)(dVar35 * dVar48) * dVar43 + dVar48))));
                  do {
                    dVar35 = (double)MB_randRangeFloat((float)dVar46,(float)dVar44);
                    dVar45 = (double)(float)(dVar35 * dVar36);
                    fVar10 = (moby->pos).x;
                    dVar41 = (double)(float)(dVar35 * dVar51);
                    fVar4 = (moby->pos).y;
                    fVar8 = (moby->pos).w;
                    *(f32 *)(puVar14 + 0x23) = (moby->pos).z;
                    *(f32 *)((int)puVar14 + 0x11c) = fVar8;
                    *(float *)(puVar14 + 0x22) = (float)((double)fVar10 + dVar45);
                    *(float *)((int)puVar14 + 0x114) = (float)((double)fVar4 + dVar41);
                    dVar35 = (double)MB_randRangeFloat((float)dVar42,(float)dVar37);
                    dVar40 = (double)SQRT((float)(dVar45 * dVar45 + (double)(float)(dVar41 * dVar41)
                                                 ));
                    dVar43 = (double)(float)(dVar41 * (double)(float)(dVar35 / dVar40));
                    dVar41 = (double)(float)(dVar45 * (double)(float)(dVar35 / dVar40));
                    dVar35 = dVar39;
                    if (dVar39 - dVar40 < 0.0) {
                      dVar35 = dVar43;
                    }
                    dVar45 = dVar39;
                    if (dVar39 - dVar40 < 0.0) {
                      dVar45 = dVar41;
                    }
                    if (dVar40 - dVar39 < 0.0) {
                      dVar35 = dVar43;
                    }
                    if (dVar40 - dVar39 < 0.0) {
                      dVar45 = dVar41;
                    }
                    *(float *)((int)puVar14 + 0x124) =
                         (float)((double)*(float *)((int)puVar14 + 0x124) + dVar35);
                    *(float *)(puVar14 + 0x24) =
                         (float)((double)*(float *)(puVar14 + 0x24) + dVar45);
                    dVar35 = (double)MB_randRangeFloat((float)dVar39,(float)dVar47);
                    *(float *)(puVar14 + 0x22) =
                         (float)(dVar35 * dVar53 + (double)*(float *)(puVar14 + 0x22));
                    *(float *)((int)puVar14 + 0x114) =
                         (float)(dVar35 * dVar52 + (double)*(float *)((int)puVar14 + 0x114));
                    SpawnPart_38(dVar44,uVar38,uVar21 - 0x130,uVar21 - 0x120);
                    iVar32 = iVar32 + 1;
                  } while (iVar32 < 3);
                  *(float *)(puVar14 + 0x24) = (float)((double)pfVar9[0x10] * dVar44);
                  *(float *)((int)puVar14 + 0x124) = (float)((double)pfVar9[0x11] * dVar44);
                  *(float *)(puVar14 + 0x25) = (float)((double)pfVar9[0x12] * dVar44);
                  *(float *)((int)puVar14 + 300) = pfVar9[0x13];
                  dVar47 = (double)MB_randRangeFloat(-0.03,(float)dVar39);
                  *(float *)(puVar14 + 0x24) =
                       (float)(dVar47 * dVar53 + (double)*(float *)(puVar14 + 0x24));
                  *(float *)((int)puVar14 + 0x124) =
                       (float)(dVar47 * dVar52 + (double)*(float *)((int)puVar14 + 0x124));
                  dVar47 = (double)MB_randRangeFloat(-0.15,0.15);
                  fVar10 = (moby->pos).x;
                  fVar4 = (moby->pos).y;
                  fVar8 = (moby->pos).w;
                  *(f32 *)(puVar14 + 0x23) = (moby->pos).z;
                  *(f32 *)((int)puVar14 + 0x11c) = fVar8;
                  *(float *)(puVar14 + 0x22) = (float)(dVar47 * dVar36 + (double)fVar10);
                  *(float *)((int)puVar14 + 0x114) = (float)(dVar47 * dVar51 + (double)fVar4);
                  SpawnPart_38(dVar44,0x3f7cac0840000000,uVar21 - 0x130,uVar21 - 0x120);
                }
                fVar5 = g_CollOutput.push.z;
                fVar4 = g_CollOutput.push.y;
                fVar10 = g_CollOutput.push.x;
                if (iVar26 != 0) {
                  fVar7 = g_CollOutput.push.y - (moby->pos).y;
                  fVar15 = g_CollOutput.push.x - (moby->pos).x;
                  fVar18 = g_CollOutput.push.z - (moby->pos).z;
                  fVar16 = 0.0;
                  (moby->pos).w = g_CollOutput.push.w;
                  fVar6 = SQRT(fVar18 * fVar18 + fVar15 * fVar15 + fVar7 * fVar7);
                  fVar20 = 0.015 / fVar6;
                  fVar17 = fVar16;
                  if (0.0 - fVar6 < 0.0) {
                    fVar17 = fVar18 * fVar20;
                  }
                  fVar19 = fVar16;
                  if (0.0 - fVar6 < 0.0) {
                    fVar19 = fVar7 * fVar20;
                  }
                  if (0.0 - fVar6 < 0.0) {
                    fVar16 = fVar15 * fVar20;
                  }
                  if (fVar6 - 0.0 < 0.0) {
                    fVar17 = fVar18 * fVar20;
                  }
                  if (fVar6 - 0.0 < 0.0) {
                    fVar19 = fVar7 * fVar20;
                  }
                  if (fVar6 - 0.0 < 0.0) {
                    fVar16 = fVar15 * fVar20;
                  }
                  (moby->pos).z = fVar5 + fVar17;
                  (moby->pos).y = fVar4 + fVar19;
                  (moby->pos).x = fVar10 + fVar16;
                  FastVecReflect(uVar33 + 0x40,uVar33 + 0x40,0xa10980);
                  pfVar9[0x10] = pfVar9[0x10] * 0.25;
                  pfVar9[0x11] = pfVar9[0x11] * 0.25;
                  pfVar9[0x12] = pfVar9[0x12] * 0.25;
                }
                fVar10 = pfVar9[0x11] * 0.99;
                fVar4 = pfVar9[0x10] * 0.99;
                pfVar9[0x11] = fVar10;
                pfVar9[0x10] = fVar4;
                pfVar9[0x12] = pfVar9[0x12] * 0.99 - 0.00272222;
                fVar5 = SQRT(fVar4 * fVar4 + fVar10 * fVar10);
                if ((float)((double)DAT_0071f408 * dVar49) < fVar5) {
                  fVar5 = (float)((double)DAT_0071f408 * dVar49) / fVar5;
                  fVar4 = fVar4 * fVar5;
                  pfVar9[0x10] = fVar4;
                  pfVar9[0x11] = fVar10 * fVar5;
                }
                fVar4 = (moby->pos).x + fVar4;
                (moby->pos).x = fVar4;
                fVar10 = (moby->pos).y + pfVar9[0x11];
                (moby->pos).y = fVar10;
                (moby->pos).z = (moby->pos).z + pfVar9[0x12];
                if (fVar4 < 2.0) {
                  (moby->pos).x = 2.0;
                  fVar4 = 2.0;
                }
                if (510.0 < fVar4) {
                  (moby->pos).x = 510.0;
                }
                if (fVar10 < 2.0) {
                  (moby->pos).y = 2.0;
                  fVar10 = 2.0;
                }
                if (510.0 < fVar10) {
                  (moby->pos).y = 510.0;
                }
              }
            }
          }
        }
      }
    }
  }
  return;
}


