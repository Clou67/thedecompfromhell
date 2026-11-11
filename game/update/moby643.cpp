// game/update/moby643.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x3ff9c0-0x3fff90
#include <stdio.h>
#include "game/update/moby643.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/sound.h"
#include "idol/fastfunc.h"

// 0x03ff9c0 (0x5d0 bytes)
// strings: 00656ec4: '*Error: Moby 28(Footsoldier) with no flyPath. UID: %d - RAR\n' | 00656f04: '*Error: Moby 28(Footsoldier) with a fly path that has no points. UID: %d - RAR\n' | 008546f0: '=VwP' (raw)

/* Moby 643 */

void UpdateMoby_643(MobyInstance *moby)

{
  undefined4 uVar1;
  void *pvVar2;
  Spline *pSVar3;
  float fVar4;
  float fVar5;
  longlong lVar6;
  float *pfVar7;
  int iVar8;
  int iVar9;
  undefined4 *unused;
  Spline *pSVar10;
  ulonglong uVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined8 uVar15;
  double dVar16;
  float fVar17;
  float local_70;
  float local_6c;
  float local_68;
  GPiece<16> local_60;
  int local_50 [4];
  
  lVar6 = (longlong)(int)moby;
  pvVar2 = moby->pVar;
  uVar11 = ZEXT48(pvVar2);
  if (moby->state == 0) {
    if (*(int *)((int)pvVar2 + 0x60) == -1) {
      printf("*Error: Moby 28(Footsoldier) with no flyPath. UID: %d - RAR\n",moby->uid);
      DeleteMoby(moby);
    }
    else {
      pSVar3 = Splines[*(int *)((int)pvVar2 + 0x60)];
      iVar8 = pSVar3->cnt;
      if (iVar8 == 0) {
        printf("*Error: Moby 28(Footsoldier) with a fly path that has no points. UID: %d - RAR\n"
                     ,moby->uid);
        DeleteMoby(moby);
      }
      else {
        iVar9 = 0;
        pSVar10 = pSVar3;
        if (0 < iVar8) {
          do {
            iVar9 = iVar9 + 1;
            pfVar7 = (float *)((int)pSVar3 + ((iVar9 - (iVar9 / iVar8) * iVar8) * 4 + 4) * 4);
            fVar17 = pSVar10->points[0].y - pfVar7[1];
            fVar4 = pSVar10->points[0].x - *pfVar7;
            fVar5 = pSVar10->points[0].z - pfVar7[2];
            pSVar10->points[0].w = SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar17 * fVar17);
            iVar8 = pSVar3->cnt;
            pSVar10 = (Spline *)pSVar10->points;
          } while (iVar9 < iVar8);
        }
        *(undefined4 *)((int)pvVar2 + 100) = 0;
        uVar15 = 0;
        *(undefined4 *)((int)pvVar2 + 0x68) = 0;
        iVar8 = MB_randInt(2);
        uVar1 = 0xbf800000;
        if (iVar8 != 0) {
          uVar1 = 0x3f800000;
        }
        *(undefined4 *)((int)pvVar2 + 0x6c) = uVar1;
        (moby->pos).x = pSVar3->points[0].x;
        (moby->pos).y = pSVar3->points[0].y;
        (moby->pos).z = pSVar3->points[0].z;
        fVar17 = pSVar3->points[0].w;
        moby->state = '\x01';
        (moby->pos).w = fVar17;
        dVar12 = (double)MB_randRangeFloat(0.05235988,0.10471976);
        *(float *)((int)pvVar2 + 0x80) = (float)dVar12;
        dVar14 = 0.03490658476948738;
        dVar12 = (double)MB_randRangeFloat(0.034906585,0.06981317);
        *(float *)((int)pvVar2 + 0x84) = (float)dVar12;
        dVar12 = (double)MB_randRangeFloat(0.017453292,(float)dVar14);
        *(float *)((int)pvVar2 + 0x88) = (float)dVar12;
        *(undefined4 *)((int)pvVar2 + 0x7c) = 0;
        *(undefined4 *)((int)pvVar2 + 0x78) = 0;
        *(undefined4 *)((int)pvVar2 + 0x74) = 0;
        *(undefined4 *)((int)pvVar2 + 0x70) = 0;
        dVar12 = (double)MB_randRangeSigned(uVar15,0x400921fb60000000);
        *(float *)((int)pvVar2 + 0x7c) = (float)dVar12;
      }
    }
  }
  else if (moby->state < 2) {
    MB_PathMoveDist
              ((double)(g_FrameTime * DAT_008546ec * *(float *)((int)pvVar2 + 0x6c)),
               Splines[*(int *)((int)pvVar2 + 0x60)],&local_70,uVar11 + 100,uVar11 + 0x68,Splines,1)
    ;
    unused = &DAT_003ff960;
    dVar14 = 0.019999999552965164;
    dVar12 = 0.20000000298023224;
    dVar16 = 0.0;
    AccelDelt(local_70,0.02,0.2,0.0,&(moby->pos).x,0x3ff960,(float *)((int)pvVar2 + 0x70))
    ;
    AccelDelt(local_6c,(float)dVar14,(float)dVar12,(float)dVar16,&(moby->pos).y,
                        (int)unused,(float *)((int)pvVar2 + 0x74));
    fVar17 = AccelDelt(local_68,(float)dVar14,(float)dVar12,(float)dVar16,&(moby->pos).z,
                                 (int)unused,(float *)((int)pvVar2 + 0x78));
    iVar8 = MB_damage((double)fVar17,lVar6,0x230000,0);
    MB_HandleDamage(moby,iVar8,uVar11 + 0x20,0,local_50,0,0,4);
    if ((((local_50[0] < 2) || (iVar8 == 0)) || (*(short *)(*(int *)(iVar8 + 0x20) + 0xa6) == 0x283)
        ) && (DAT_00969f1c != moby)) {
      dVar12 = (double)FastWrapRot((moby->rotation).x,*(float *)((int)pvVar2 + 0x80));
      (moby->rotation).x = (float)dVar12;
      dVar12 = (double)FastWrapRot((moby->rotation).y,*(float *)((int)pvVar2 + 0x84));
      (moby->rotation).y = (float)dVar12;
      dVar12 = (double)FastWrapRot((moby->rotation).z,*(float *)((int)pvVar2 + 0x88));
      (moby->rotation).z = (float)dVar12;
      dVar14 = (double)FastWrapRot(*(float *)((int)pvVar2 + 0x7c),DAT_008546f0);
      dVar12 = (double)(float)(3.141592502593994 - dVar14);
      if (dVar14 - (double)(float)(3.141592502593994 - dVar14) < 0.0) {
        dVar12 = dVar14;
      }
      dVar16 = (double)(float)(-3.141592502593994 - dVar14);
      if ((double)(float)(-3.141592502593994 - dVar14) - dVar12 < 0.0) {
        dVar16 = dVar12;
      }
      *(float *)((int)pvVar2 + 0x7c) = (float)dVar14;
      dVar14 = (double)(float)(dVar16 * dVar16);
      dVar13 = (double)(float)(dVar14 * (double)(float)(dVar14 * dVar16));
      dVar12 = (double)(float)(dVar14 * dVar13);
      dVar12 = (double)((float)(dVar14 * dVar12) * 2.601887e-06 +
                       (float)(dVar12 * -0.0001980741071747616 +
                              (double)(float)(dVar13 * 0.008333025500178337 +
                                             (double)(float)((double)(float)(dVar14 * dVar16) *
                                                             -0.16666656732559204 + dVar16))));
      iVar8 = FastDoubleToInt((double)(float)(dVar12 * 48.0));
      uVar11 = FastDoubleToInt((double)(float)(dVar12 * 32.0));
      moby->field60_0x90 =
           (int)((uVar11 & 0xffffffff) << 8) + 0x3000U | iVar8 + 0xcfU |
           (int)((uVar11 & 0xffffffff) << 0x10) + 0x300000U | 0xff000000;
    }
    else {
      PlayMobySound(0,0,moby);
      if (DAT_00969f1c == moby) {
        MB_genericExplosion
                  (0x4008000000000000,0x3ff0000000000000,0x4008000000000000,0x4014000000000000,
                   0x4022000000000000,0x3ff0000000000000,0x402e000000000000,lVar6,local_60,
                   lVar6 + 0x10,1,0xffffffffffffffff,10,0x14,0x3c);
      }
      else {
        MB_genericExplosion
                  (dVar16,dVar16,0x4008000000000000,0x4014000000000000,0x4022000000000000,
                   0x3ff0000000000000,0x402e000000000000,lVar6,local_60,lVar6 + 0x10,
                   0xffffffffffffffff,0,10,0x14,0x3c);
      }
      DeleteMoby(moby);
    }
  }
  return;
}


