// game/update/moby1750.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 4 functions, 0x2b1950-0x2b2274
#include "game/update/moby1750.h"
#include "game/collproc.h"
#include "game/debug.h"
#include "game/draw.h"
#include "game/hero.h"
#include "game/hud.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/pause.h"
#include "game/update/moby175.h"
#include "idol/fastfunc.h"

// 0x02b1950 (0x434 bytes)
// inlined: FastRSqrt @0x2b1b6c
void M1750_002b1950(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float *pfVar6;
  float *pfVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  float local_140 [38];
  
  GetEffectTex(8);
  idol_draw::PackCmd(0,2,0,1,0x80);
  SCE_GS_SET_TEX1(0,0,1,1,1,0,0xff90);
  SCE_GS_SET_CLAMP(0,0,0,0,0,0);
  dVar20 = 0.0;
  dVar19 = 1.0;
  fVar2 = *(float *)(param_1 + 0xd4);
  fVar3 = *(float *)(param_1 + 0xd0);
  fVar4 = *(float *)(param_1 + 0xd8);
  fVar1 = SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
  if (fVar1 == 0.0) {
    fVar5 = *(float *)(param_1 + 0xdc);
    dVar28 = dVar20;
    dVar29 = dVar20;
    dVar30 = dVar20;
  }
  else {
    fVar1 = -1.0 / fVar1;
    fVar5 = *(float *)(param_1 + 0xdc);
    dVar30 = (double)(fVar3 * fVar1);
    dVar29 = (double)(fVar2 * fVar1);
    dVar28 = (double)(fVar4 * fVar1);
  }
  dVar27 = (double)fVar5;
  iVar8 = 0;
  iVar9 = 0;
  do {
    if (*(short *)((int)&DAT_00fb019c + iVar8) != 0) {
      dVar25 = (double)*(float *)((int)&DAT_00fb0194 + iVar8);
      fVar2 = -(float)((double)DAT_00969f78 * dVar30) -
              -(float)((double)g_heroGravityDir * dVar28);
      fVar3 = -(float)((double)g_heroGravityDir * dVar29) -
              -(float)((double)DAT_00969f74 * dVar30);
      fVar4 = -(float)((double)DAT_00969f74 * dVar28) - -(float)((double)DAT_00969f78 * dVar29);
      dVar24 = (double)DAT_00fb0220;
      dVar23 = (double)DAT_00fb0224;
      dVar22 = (double)DAT_00fb0228;
      dVar21 = (double)DAT_00fb022c;
      dVar11 = (double)(fVar3 * fVar3 + fVar4 * fVar4 + fVar2 * fVar2);
      dVar13 = dVar20;
      dVar17 = dVar20;
      dVar18 = dVar20;
      if ((double)(float)SQRT(dVar11) != dVar20) {
        dVar13 = 1.0 / SQRT(dVar11);
        dVar13 = (double)(float)(-(double)(float)((double)(float)(dVar11 * dVar13) * dVar13 - dVar19
                                                 ) * (double)(float)(dVar13 * 0.5) + dVar13);
        dVar13 = (double)(float)(-(double)(float)((double)(float)(dVar11 * dVar13) * dVar13 - dVar19
                                                 ) * (double)(float)(dVar13 * 0.5) + dVar13);
        fVar1 = (float)(-(double)(float)((double)(float)(dVar11 * dVar13) * dVar13 - dVar19) *
                        (double)(float)(dVar13 * 0.5) + dVar13);
        dVar13 = (double)(fVar4 * fVar1);
        dVar17 = (double)(fVar2 * fVar1);
        dVar18 = (double)(fVar3 * fVar1);
      }
      dVar16 = (double)(float)(dVar17 * dVar28);
      dVar15 = (double)(float)(dVar18 * dVar30);
      dVar14 = (double)(float)(dVar13 * dVar29);
      dVar12 = (double)FastIntToDouble(*(undefined2 *)((int)&DAT_00fb0198 + iVar8));
      dVar11 = (double)(float)(dVar12 * (double)DAT_00fb0218);
      if (dVar19 - (double)(float)(dVar12 * (double)DAT_00fb0218) < 0.0) {
        dVar11 = dVar19;
      }
      dVar26 = (double)(float)((double)(float)((double)DAT_007b7530 - (double)DAT_007b7534) * dVar11
                              + (double)DAT_007b7534);
      dVar12 = (double)FastIntToDouble(DAT_007b74dc);
      FastDoubleToInt((double)(float)(dVar12 * dVar11));
      pfVar7 = local_140;
      lVar10 = 4;
      pfVar6 = (float *)&DAT_007b74f0;
      dVar19 = (double)(float)dVar19;
      do {
        fVar3 = *pfVar6;
        fVar4 = pfVar6[1];
        dVar11 = (double)(float)((double)fVar3 * dVar26);
        dVar12 = (double)pfVar6[3];
        fVar2 = (float)((double)pfVar6[2] * dVar26);
        pfVar6 = pfVar6 + 4;
        pfVar7[3] = (float)(dVar12 * dVar21 +
                           (double)(float)((double)fVar3 * (double)(float)(dVar26 * dVar27)));
        *pfVar7 = (float)((double)(float)(dVar25 * dVar30 + dVar24) * dVar12 +
                         (double)((float)(dVar18 * dVar29 - dVar16) * fVar2 +
                                 (float)(dVar11 * dVar30 +
                                        (double)(fVar4 * (float)(dVar26 * dVar13)))));
        pfVar7[1] = (float)((double)(float)(dVar25 * dVar29 + dVar23) * dVar12 +
                           (double)((float)(dVar13 * dVar28 - dVar15) * fVar2 +
                                   (float)(dVar11 * dVar29 +
                                          (double)(fVar4 * (float)(dVar26 * dVar17)))));
        pfVar7[2] = (float)((double)(float)(dVar25 * dVar28 + dVar22) * dVar12 +
                           (double)((float)(dVar17 * dVar30 - dVar14) * fVar2 +
                                   (float)(dVar11 * dVar28 +
                                          (double)(fVar4 * (float)(dVar26 * dVar18)))));
        pfVar7 = pfVar7 + 4;
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
      FastDrawQuad(local_140,0,0,EffectTexHeaders,9);
    }
    iVar9 = iVar9 + 1;
    iVar8 = iVar8 + 0xc;
  } while (iVar9 < 10);
  return;
}


// 0x02b1d84 (0x14 bytes)
void M1750_002b1d84(void)

{
  DAT_007b7584 = 0x10000;
  return;
}


// 0x02b1d98 (0x2c bytes)
/* Moby 1750 */

void UpdateMoby_1750(MobyInstance *moby)

{
  MakeWholeSaveWithMode(&DAT_00fb0230);
  return;
}


// 0x02b1de0 (0x494 bytes)
// inlined: FastRSqrt @0x2b1eac
void M176_002b1de0(int param_1)

{
  char *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  GPiece<16> local_100;
  GPiece<16> auStack_f0;
  GPiece<16> local_e0;
  GPiece<72> auStack_d0;
  
  iVar9 = 0;
  iVar10 = *(int *)(param_1 + 0x78);
  do {
    pcVar1 = *(char **)(iVar10 + 4);
    if (pcVar1 != (char *)0x0) {
      if ((*pcVar1 == '\f') && ((byte)pcVar1[1] < 0x80)) {
        dVar14 = 0.0;
        dVar13 = (double)(*(float *)(pcVar1 + 0xc) * 4.7619046e-06 * 0.5);
        dVar12 = 1.0;
        dVar11 = (double)FastIntToDouble(g_goldWeaponsArray.pyrocitor);
        SetCollDamIn((double)(float)(dVar11 + dVar12),auStack_d0,param_1,0x10000);
        CollMobySphere(dVar13,pcVar1 + 0x10,5,0,param_1,auStack_d0);
        if (*(short *)(pcVar1 + 10) == 10) {
          iVar8 = 0;
          if (0 < DAT_007b761c) {
            dVar11 = (double)(float)(dVar13 * 2.0);
            do {
              MB_randSphere
                        (dVar14,(double)(DAT_007b75f8 * g_FrameTime),auStack_f0);
              uVar3 = DAT_007b7608;
              uVar2 = DAT_007b7604;
              MB_randRangeFloat((float)dVar14,(float)dVar12);
              uVar4 = FastLerpColor(uVar2,uVar3);
              ReorderRGB((int)uVar4,(uint)g_goldWeaponsArray.pyrocitor);
              uVar3 = DAT_007b7610;
              uVar2 = DAT_007b760c;
              MB_randRangeFloat((float)dVar14,(float)dVar12);
              uVar5 = FastLerpColor(uVar2,uVar3);
              ReorderRGB((int)uVar5,(uint)g_goldWeaponsArray.pyrocitor);
              dVar13 = (double)MB_randRangeFloat
                                         ((float)(longlong)DAT_007b7614,
                                          (float)(longlong)DAT_007b7618);
              uVar6 = FastDoubleToInt((double)(float)(dVar13 * (double)animationSpeed));
              dVar13 = (double)MB_randRangeFloat
                                         ((float)(longlong)DAT_007b7614,
                                          (float)(longlong)DAT_007b7618);
              uVar7 = FastDoubleToInt((double)(float)(dVar13 * (double)animationSpeed));
              MB_randSphere(dVar14,dVar11,local_e0);
              SpawnPart_2(local_e0,local_100,auStack_f0,uVar4,uVar5,10,uVar6,uVar7);
              iVar8 = iVar8 + 1;
            } while (iVar8 < DAT_007b761c);
          }
        }
        else if (*(short *)(pcVar1 + 10) < 2) {
          *(undefined4 *)(iVar10 + 4) = 0;
        }
      }
      else {
        *(undefined4 *)(iVar10 + 4) = 0;
      }
    }
    iVar9 = iVar9 + 1;
    iVar10 = iVar10 + 4;
  } while (iVar9 < 0xf);
  return;
}


