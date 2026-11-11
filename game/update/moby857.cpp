// game/update/moby857.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 14 functions, 0x490188-0x4951f8
#include <math.h>
#include "game/update/moby857.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/debug.h"
#include "game/draw.h"
#include "game/hero.h"
#include "game/hud.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/sound.h"
#include "game/update.h"
#include "game/update/moby303.h"
#include "idol/fastfunc.h"
#include "idol/mathfunc.h"
#include "idol/xUnk.h"

// 0x0490188 (0x2f0 bytes)
undefined8
M857_00490188
          (longlong param_1,float *param_2,float *param_3,undefined8 param_4,undefined8 param_5)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int *piVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  int iVar11;
  int iVar12;
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
  
  fVar1 = param_2[1];
  fVar2 = *param_2;
  fVar5 = param_3[1] - fVar1;
  fVar6 = *param_3 - fVar2;
  dVar19 = 1.0;
  iVar8 = (int)(param_1 << 2);
  dVar18 = 0.0;
  fVar7 = (param_3[2] - param_2[2]) * (param_3[2] - param_2[2]) + fVar6 * fVar6 + fVar5 * fVar5;
  piVar4 = *(int **)((int)Splines + iVar8);
  iVar11 = 0;
  fVar10 = 1.0 / SQRT(fVar7);
  fVar9 = SQRT(fVar7);
  fVar10 = -(fVar7 * fVar10 * fVar10 - 1.0) * fVar10 * 0.5 + fVar10;
  fVar10 = -(fVar7 * fVar10 * fVar10 - 1.0) * fVar10 * 0.5 + fVar10;
  fVar7 = (-(fVar7 * fVar10 * fVar10 - 1.0) * fVar10 * 0.5 + fVar10) / fVar9;
  dVar17 = (double)((float)(piVar4 + *piVar4 * 4)[1] - fVar1);
  dVar22 = (double)((float)piVar4[*piVar4 * 4] - fVar2);
  dVar14 = (double)(fVar7 * fVar6);
  dVar13 = (double)(fVar7 * fVar5);
  dVar15 = dVar18;
  if (0.0 - fVar9 < 0.0) {
    dVar15 = dVar14;
  }
  dVar16 = dVar18;
  if (0.0 - fVar9 < 0.0) {
    dVar16 = dVar13;
  }
  if (fVar9 - 0.0 < 0.0) {
    dVar15 = dVar14;
  }
  if (fVar9 - 0.0 < 0.0) {
    dVar16 = dVar13;
  }
  if (0 < *piVar4) {
    iVar12 = 0;
    dVar20 = 0.3330000042915344;
    dVar13 = (double)(float)(dVar16 * dVar22 + -(double)(float)(dVar15 * dVar17));
    dVar14 = (double)(float)(dVar15 * dVar22 + (double)(float)(dVar16 * dVar17));
    do {
      dVar17 = (double)(*(float *)((int)piVar4 + iVar12 + 0x14) - fVar1);
      dVar22 = (double)(*(float *)((int)piVar4 + iVar12 + 0x10) - fVar2);
      dVar21 = (double)(float)(dVar15 * dVar22 + (double)(float)(dVar16 * dVar17));
      dVar17 = (double)(float)(dVar16 * dVar22 + -(double)(float)(dVar15 * dVar17));
      if ((double)(float)(dVar17 * dVar13) < dVar18) {
        if (DAT_010e03c4 != 0) {
          SpawnPart_41
                    ((float)dVar20,(int)piVar4 + iVar12 + 0x10,g_heroMobyPtr,2,0x800000ff,param_5,
                     0x7f,2,0xff);
          iVar3 = **(int **)((int)Splines + iVar8);
          SpawnPart_41
                    ((float)dVar20,
                     *(int **)((int)Splines + iVar8) +
                     ((iVar11 + 1) - ((iVar11 + 1) / iVar3) * iVar3) * 4 + 4,g_heroMobyPtr,2,
                     0x800000ff,param_5,0x7f,2,0xff);
          fVar2 = *param_2;
          fVar1 = param_2[1];
        }
        dVar13 = (double)(float)(-(double)(float)((double)((float)(dVar14 - dVar21) /
                                                          (float)(dVar13 - dVar17)) * dVar17) +
                                dVar21);
        if (dVar13 < dVar19 && dVar18 < dVar13) {
          return 1;
        }
      }
      piVar4 = *(int **)((int)Splines + iVar8);
      iVar11 = iVar11 + 1;
      iVar12 = iVar12 + 0x10;
      dVar13 = dVar17;
      dVar14 = dVar21;
    } while (iVar11 < *piVar4);
  }
  return 0;
}


// 0x0490480 (0x260 bytes)
uint M857_00490480
               (double param_1,undefined4 *param_2,int param_3,undefined8 param_4,longlong param_5,
               undefined4 param_6)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  int *piVar8;
  double dVar9;
  GPiece<16> local_a0;
  GPiece<24> local_90;
  
  uVar5 = 0;
  piVar1 = *(int **)((int)Splines + (int)(param_5 << 2));
  uVar4 = 0;
  if (0 < *piVar1) {
    dVar9 = 0.0;
    piVar8 = piVar1;
    do {
      piVar8 = piVar8 + 4;
      iVar6 = 0;
      bVar2 = false;
      puVar7 = param_2;
      if (0 < param_3) {
        do {
          if (param_1 == dVar9) {
            iVar3 = M857_00490188(*puVar7,param_6,piVar8);
            if (iVar3 != 0) {
              bVar2 = true;
            }
          }
          else {
            iVar3 = M857_00490188(*puVar7,local_a0,piVar8);
            if (iVar3 == 0) {
              iVar3 = M857_00490188(*puVar7,local_90,piVar8);
              if (iVar3 != 0) {
                bVar2 = true;
              }
            }
            else {
              bVar2 = true;
            }
          }
          if (bVar2) goto LAB_00490678;
          iVar6 = iVar6 + 1;
          puVar7 = puVar7 + 1;
        } while (iVar6 < param_3);
      }
      uVar4 = uVar4 | 1 << (uVar5 & 0x3f);
LAB_00490678:
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < *piVar1);
  }
  return uVar4;
}


// 0x04906e0 (0x84 bytes)
uint M857_004906e0(longlong param_1,uint param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  iVar1 = 0;
  do {
    if ((param_3 & param_2) != 0) {
      return param_3 & param_2;
    }
    uVar3 = 0;
    uVar4 = param_3;
    iVar2 = *(int *)((int)Splines + (int)(param_1 << 2));
    do {
      if ((1 << (uVar3 & 0x3f) & param_3) != 0) {
        uVar4 = uVar4 | *(uint *)(iVar2 + 0x1c);
      }
      uVar3 = uVar3 + 1;
      iVar2 = iVar2 + 0x10;
    } while ((int)uVar3 < 0x10);
    iVar1 = iVar1 + 1;
    param_3 = uVar4;
  } while (iVar1 < 0x10);
  return 0;
}


// 0x0490764 (0x1c0 bytes)
void M857_00490764(undefined4 *param_1,int param_2,longlong param_3)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  uint *puVar10;
  undefined4 *puVar11;
  uint uVar12;
  uint uVar13;
  
  iVar4 = 0;
  piVar1 = *(int **)((int)Splines + (int)(param_3 << 2));
  iVar6 = *piVar1;
  piVar5 = piVar1;
  if (0 < iVar6) {
    do {
      iVar4 = iVar4 + 1;
      iVar6 = *piVar1;
      piVar5[7] = 0;
      piVar5 = piVar5 + 4;
    } while (iVar4 < iVar6);
  }
  if (0 < iVar6) {
    piVar7 = piVar1 + 4;
    puVar10 = (uint *)(piVar1 + 7);
    uVar3 = 0;
    piVar5 = piVar1;
    piVar8 = piVar7;
    do {
      uVar12 = uVar3 + 1;
      piVar8 = piVar8 + 4;
      if ((int)uVar12 < iVar6) {
        uVar13 = uVar12;
        piVar2 = piVar5;
        piVar9 = piVar8;
        do {
          iVar6 = 0;
          puVar11 = param_1;
          if (0 < param_2) {
            do {
              iVar4 = M857_00490188(*puVar11,piVar7,piVar9);
              if (iVar4 != 0) goto LAB_004908a0;
              iVar6 = iVar6 + 1;
              puVar11 = puVar11 + 1;
            } while (iVar6 < param_2);
          }
          *puVar10 = *puVar10 | 1 << (uVar13 & 0x3f);
          piVar2[0xb] = piVar2[0xb] | 1 << (uVar3 & 0x3f);
LAB_004908a0:
          iVar6 = *piVar1;
          uVar13 = uVar13 + 1;
          piVar9 = piVar9 + 4;
          piVar2 = piVar2 + 4;
        } while ((int)uVar13 < iVar6);
      }
      puVar10 = puVar10 + 4;
      piVar5 = piVar5 + 4;
      piVar7 = piVar7 + 4;
      uVar3 = uVar12;
    } while ((int)uVar12 < iVar6);
  }
  return;
}


// 0x0490928 (0x34c bytes)
undefined8
M857_00490928
          (double param_1,undefined4 *param_2,undefined8 param_3,longlong param_4,undefined8 param_5
          ,undefined4 param_6,undefined4 *param_7,undefined4 *param_8)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  ulonglong uVar9;
  int iVar10;
  double dVar11;
  GPiece<16> local_90;
  GPiece<24> local_80;
  
  iVar10 = 0;
  uVar9 = 0;
  bVar2 = false;
  if ((int)param_3 < 1) {
LAB_00490c0c:
    *param_8 = *param_7;
    param_8[1] = param_7[1];
    param_8[2] = param_7[2];
    param_8[3] = param_7[3];
    return 1;
  }
  dVar11 = 0.0;
  puVar8 = param_2;
  while( true ) {
    if (param_1 == dVar11) {
      iVar3 = M857_00490188(*puVar8,param_6,param_7);
      if (iVar3 != 0) {
        bVar2 = true;
      }
    }
    else {
      iVar3 = M857_00490188(*puVar8,local_90,param_7);
      if (iVar3 == 0) {
        iVar3 = M857_00490188(*puVar8,local_80,param_7);
        if (iVar3 != 0) {
          bVar2 = true;
        }
      }
      else {
        bVar2 = true;
      }
    }
    if (bVar2) break;
    iVar10 = iVar10 + 1;
    puVar8 = puVar8 + 1;
    if ((int)param_3 <= iVar10) goto LAB_00490c0c;
  }
  iVar10 = (int)(param_4 << 2);
  piVar1 = *(int **)((int)Splines + iVar10);
  DAT_010e03c8 = M857_00490480(param_1,param_2,param_3);
  DAT_010e03cc = M857_00490480(param_1,param_2,param_3);
  iVar3 = 0;
  uVar4 = DAT_010e03cc;
  while ((uVar4 & DAT_010e03c8) == 0) {
    uVar6 = 0;
    iVar7 = *(int *)((int)Splines + iVar10);
    uVar5 = uVar4;
    do {
      if ((1 << (uVar6 & 0x3f) & uVar4) != 0) {
        uVar5 = uVar5 | *(uint *)(iVar7 + 0x1c);
      }
      uVar6 = uVar6 + 1;
      iVar7 = iVar7 + 0x10;
    } while ((int)uVar6 < 0x10);
    iVar3 = iVar3 + 1;
    uVar4 = uVar5;
    if (0xf < iVar3) {
      return 0;
    }
  }
  if (0 < *piVar1) {
    do {
      if ((uVar4 & DAT_010e03c8 & 1 << ((uint)uVar9 & 0x3f)) != 0) break;
      uVar9 = uVar9 + 1;
    } while ((int)uVar9 < *piVar1);
  }
  iVar10 = (int)((uVar9 & 0xffffffff) << 4);
  *param_8 = *(undefined4 *)((int)piVar1 + iVar10 + 0x10);
  param_8[1] = *(undefined4 *)((int)piVar1 + iVar10 + 0x14);
  param_8[2] = *(undefined4 *)((int)piVar1 + iVar10 + 0x18);
  param_8[3] = *(undefined4 *)((int)piVar1 + iVar10 + 0x1c);
  return 1;
}


// 0x0490c78 (0x14 bytes)
void M857_00490c78(void)

{
  DAT_008c7c4c = 0x10000;
  return;
}


// 0x0490cb8 (0x2ac bytes)
void M857_00490cb8(MobyInstance *param_1)

{
  u8 uVar1;
  void *pvVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  void *pvVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  if (param_1->group != -1) {
    uVar1 = param_1->state;
    pvVar2 = param_1->pVar;
    uVar6 = 0x3228aaaa;
    if ((uVar1 == '\x03') || (uVar1 == '\x06')) {
      uVar6 = 0x3228aa28;
    }
    else if ((uVar1 == '\x05') || (uVar1 == '\t')) {
      uVar6 = 0x322828aa;
    }
    else if (uVar1 == '\a') {
      uVar6 = 0x32aa2828;
    }
    dVar9 = (double)FastWrapRot
                              (*(float *)((int)pvVar2 + 0x28c),g_FrameTime * 2.9670596);
    dVar11 = (double)(float)(3.141592502593994 - dVar9);
    if (dVar9 - (double)(float)(3.141592502593994 - dVar9) < 0.0) {
      dVar11 = dVar9;
    }
    dVar10 = (double)(float)(-3.141592502593994 - dVar9);
    if ((double)(float)(-3.141592502593994 - dVar9) - dVar11 < 0.0) {
      dVar10 = dVar11;
    }
    *(float *)((int)pvVar2 + 0x28c) = (float)dVar9;
    dVar11 = (double)(float)(dVar10 * dVar10);
    dVar12 = (double)(float)(dVar11 * (double)(float)(dVar11 * dVar10));
    dVar9 = (double)(float)(dVar11 * dVar12);
    dVar11 = (double)(((float)(dVar11 * dVar9) * 2.601887e-06 +
                      (float)(dVar9 * -0.0001980741071747616 +
                             (double)(float)(dVar12 * 0.008333025500178337 +
                                            (double)(float)((double)(float)(dVar11 * dVar10) *
                                                            -0.16666656732559204 + dVar10)))) * 0.5
                     + 1.0);
    lVar3 = FastDoubleToInt
                      ((double)(float)((double)(longlong)(int)(uVar6 & 0xff) * dVar11));
    lVar4 = FastDoubleToInt
                      ((double)(float)((double)(longlong)(int)(uVar6 >> 8 & 0xff) * dVar11));
    lVar5 = FastDoubleToInt
                      ((double)(float)((double)(longlong)(int)(uVar6 >> 0x10 & 0xff) * dVar11));
    uVar6 = FastLerpColor
                      (0x3fb99999a0000000,param_1->field60_0x90,
                       uVar6 & 0xff000000 |
                       (uint)((lVar5 + (0xff - lVar5 >> 0x3f & 0xffU - lVar5) & 0xffffffff) << 0x10)
                       | (uint)((lVar4 + (0xff - lVar4 >> 0x3f & 0xffU - lVar4) & 0xffffffff) << 8)
                         | (int)lVar3 + ((uint)(0xff - lVar3 >> 0x3f) & 0xffU - (int)lVar3));
    param_1->field60_0x90 = uVar6;
    iVar7 = 0;
    pvVar8 = pvVar2;
    do {
      iVar7 = iVar7 + 1;
      GetBonePosition(param_1,iVar7,(int)pvVar8 + 0x140);
      pvVar8 = (void *)((int)pvVar8 + 0x10);
    } while (iVar7 < 3);
    *(uint *)((int)pvVar2 + 0x290) = param_1->field60_0x90;
    if ((worldUpdateTime != 0) && (worldUpdateTime != **(int **)((int)pvVar2 + 0x294))) {
      **(int **)((int)pvVar2 + 0x294) = worldUpdateTime;
      RegisterFuncForMoby(&PTR_M859_00495620_0070f208,param_1);
    }
  }
  return;
}


// 0x0490fb0 (0x9e8 bytes)
// strings: 00490fa0: '?333Ap' (raw)

undefined8
M857_00490fb0
          (int param_1,int param_2,MobyInstance *param_3,int param_4,undefined4 *param_5)

{
  float fVar1;
  float fVar2;
  f32 fVar3;
  MOBY_OCLASSES MVar4;
  int *piVar5;
  MobyInstance *pMVar6;
  uint uVar9;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  int iVar14;
  int iVar15;
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
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  float local_170;
  float local_16c;
  float local_168;
  GPiece<16> local_160;
  GPiece<16> auStack_150;
  float local_140;
  float local_13c;
  float local_138;
  GPiece<16> local_130;
  GPiece<40> auStack_120;
  
  MVar4 = param_3->oClass;
  fVar1 = (param_3->pos).x;
  fVar2 = (param_3->pos).y;
  if (MVar4 != GADGEBOT_TELEPOT_PAD && MVar4 != GADGEBOT_TELEPORTER_ENTRANCE) {
    fVar1 = fVar1 + (param_3->transform).v0.x;
    fVar2 = fVar2 + (param_3->transform).v0.y;
  }
  if (MVar4 == GADGEBOT_ENTRANCE) {
LAB_004918a0:
    if (((param_4 == 0) && (param_3->state != '\x02')) &&
       (fVar2 = *(float *)(param_1 + 0x14) - fVar2, fVar1 = *(float *)(param_1 + 0x10) - fVar1,
       SQRT(fVar1 * fVar1 + fVar2 * fVar2) < 1.0)) {
      *(undefined1 *)(param_1 + 0x20) = 8;
      *(MobyInstance **)(param_2 + 0x304) = param_3;
      *param_5 = 2;
    }
  }
  else {
    if (MVar4 != GADGEBOT_TELEPORTER_ENTRANCE) {
      if (MVar4 == 0x400) goto LAB_004918a0;
      if ((MVar4 != 0x3b1) && (MVar4 != GADGEBOT_TELEPOT_PAD)) {
        return 0;
      }
    }
    fVar2 = *(float *)(param_1 + 0x14) - fVar2;
    fVar1 = *(float *)(param_1 + 0x10) - fVar1;
    dVar38 = 1.0;
    if ((SQRT(fVar1 * fVar1 + fVar2 * fVar2) < 1.0) && (piVar5 = (int *)param_3->pVar, -1 < *piVar5)
       ) {
      iVar15 = 0;
      iVar14 = 0;
      if (MVar4 == 0x3b1) {
        iVar15 = piVar5[1];
        piVar5[1] = iVar15 + 1;
      }
      else if ((MVar4 == GADGEBOT_TELEPORTER_ENTRANCE) || (MVar4 == GADGEBOT_TELEPOT_PAD)) {
        iVar15 = piVar5[1];
        piVar5[1] = iVar15 + 1;
      }
      if (param_3->oClass == GADGEBOT_TELEPORTER_ENTRANCE) {
        sound_MobyPlay_oClass(0,0,param_3,0x515);
      }
      iVar11 = 0;
      dVar37 = 0.10000000149011612;
      dVar36 = 1.570796251296997;
      dVar35 = 3.141592502593994;
      dVar34 = -3.141592502593994;
      dVar33 = -0.16666656732559204;
      dVar32 = 0.008333025500178337;
      dVar31 = -0.0001980741071747616;
      dVar30 = 2.601886990305502e-06;
      dVar29 = 0.0;
      dVar28 = 0.25;
      dVar27 = 0.5;
      dVar26 = 2.5;
      dVar25 = 5.0;
      dVar24 = 0.07000000029802322;
      dVar23 = 0.699999988079071;
      dVar22 = 15.0;
      do {
        dVar16 = (double)MB_randRangeFloat((float)dVar37,(float)dVar38);
        uVar9 = MB_randRange(0x40,0xff);
        uVar7 = MB_randRange(0x40,0xff);
        uVar8 = MB_randRange(0x40,0xff);
        MB_randRot();
        MB_randRangeFloat((float)dVar29,(float)dVar28);
        MB_randRot();
        MB_randRangeFloat((float)dVar29,(float)dVar28);
        MB_randRangeFloat((float)dVar29,(float)dVar27);
        FastVecAddSelf(auStack_150,local_160,param_1 + 0x10);
        dVar17 = (double)MB_randRangeFloat((float)dVar29,g_FrameTime);
        dVar21 = (double)SQRT(local_168 * local_168 + local_170 * local_170 + local_16c * local_16c)
        ;
        dVar20 = (double)(local_170 * (float)(dVar17 / dVar21));
        dVar18 = (double)(local_16c * (float)(dVar17 / dVar21));
        dVar17 = dVar29;
        if (dVar29 - dVar21 < 0.0) {
          dVar17 = dVar20;
        }
        dVar19 = dVar29;
        if (dVar29 - dVar21 < 0.0) {
          dVar19 = dVar18;
        }
        if (dVar21 - dVar29 < 0.0) {
          dVar17 = dVar20;
        }
        if (dVar21 - dVar29 < 0.0) {
          dVar19 = dVar18;
        }
        local_170 = (float)dVar17;
        local_16c = (float)dVar19;
        dVar17 = (double)MB_randRangeFloat
                                   ((float)((double)g_FrameTime * dVar26),
                                    (float)((double)g_FrameTime * dVar25));
        local_168 = (float)dVar17;
        iVar10 = MB_randRange(0xf,0x1e);
        dVar18 = (double)(float)(dVar16 * dVar24);
        dVar17 = (double)(float)(dVar16 * dVar23);
        fVar1 = animationSpeed * (float)((double)(longlong)iVar10 + dVar27);
        iVar10 = MB_randInt(2);
        uVar13 = ZERO_MASK(iVar10);
        uVar12 = uVar13 & 0xfffffffffffffffe;
        SpawnPart_53
                  (dVar18,dVar17,(double)(float)((double)DAT_0071f418 * dVar22),local_160,(int)fVar1
                   ,uVar12,uVar13,
                   (uint)((uVar7 & 0xffffffff) << 8) | uVar9 | (uint)((uVar8 & 0xffffffff) << 0x10)
                   | 0x7f000000,0,uVar12 + 1,&local_170);
        pMVar6 = g_MobyInstance;
        iVar11 = iVar11 + 1;
        dVar36 = (double)(float)dVar36;
      } while (iVar11 < 10);
      iVar11 = *piVar5;
      dVar17 = (double)FastIntToDouble(iVar15);
      dVar17 = (double)FastAddRots((float)(dVar17 * 60.0) * 0.017453292);
      dVar16 = (double)FastWrapRot(pMVar6[iVar11].rotation.z,(float)dVar17);
      dVar16 = (double)(float)(dVar16 + dVar36);
      dVar36 = (double)(float)(dVar35 - dVar16);
      if (dVar16 - (double)(float)(dVar35 - dVar16) < 0.0) {
        dVar36 = dVar16;
      }
      dVar18 = (double)(float)(dVar34 - dVar16);
      if ((double)(float)(dVar34 - dVar16) - dVar36 < 0.0) {
        dVar18 = dVar36;
      }
      dVar36 = (double)(float)(dVar18 * dVar18);
      dVar20 = (double)(float)(dVar36 * (double)(float)(dVar36 * dVar18));
      dVar16 = (double)(float)(dVar36 * dVar20);
      dVar16 = (double)(float)((double)(float)(dVar36 * dVar16) * dVar30 +
                              (double)(float)(dVar16 * dVar31 +
                                             (double)(float)(dVar20 * dVar32 +
                                                            (double)(float)((double)(float)(dVar36 *
                                                                                           dVar18) *
                                                                            dVar33 + dVar18))));
      dVar17 = (double)FastWrapRot(pMVar6[iVar11].rotation.z,(float)dVar17);
      dVar36 = (double)(float)(dVar35 - dVar17);
      if (dVar17 - (double)(float)(dVar35 - dVar17) < 0.0) {
        dVar36 = dVar17;
      }
      dVar35 = (double)(float)(dVar34 - dVar17) - dVar36;
      dVar34 = (double)(float)(dVar34 - dVar17);
      if (dVar35 < 0.0) {
        dVar34 = dVar36;
      }
      dVar36 = (double)(float)(dVar34 * dVar34);
      fVar1 = (float)(dVar16 + (double)pMVar6[iVar11].pos.x);
      iVar15 = 0;
      *(float *)(param_1 + 0x10) = fVar1;
      dVar17 = (double)(float)(dVar36 * (double)(float)(dVar36 * dVar34));
      dVar16 = (double)(float)(dVar36 * dVar17);
      fVar2 = (float)((double)(float)(dVar36 * dVar16) * dVar30 +
                     (double)(float)(dVar16 * dVar31 +
                                    (double)(float)(dVar17 * dVar32 +
                                                   (double)(float)((double)(float)(dVar36 * dVar34)
                                                                   * dVar33 + dVar34)))) +
              pMVar6[iVar11].pos.y;
      *(float *)(param_1 + 0x14) = fVar2;
      fVar3 = pMVar6[iVar11].pos.z;
      *(float *)(param_1 + 0x1c) = (float)dVar35;
      *(f32 *)(param_1 + 0x18) = fVar3;
      *(float *)(param_2 + 0x2e0) = fVar1;
      *(float *)(param_2 + 0x2e4) = fVar2;
      *(f32 *)(param_2 + 0x2e8) = fVar3;
      *(float *)(param_2 + 0x2ec) = (float)dVar35;
      *(float *)(param_2 + 0x2f0) = fVar1;
      *(float *)(param_2 + 0x2f4) = fVar2;
      *(f32 *)(param_2 + 0x2f8) = fVar3;
      *(float *)(param_2 + 0x2fc) = (float)dVar35;
      do {
        dVar31 = (double)MB_randRangeFloat((float)dVar37,(float)dVar38);
        MB_randRange(0x40,0xff);
        MB_randRange(0x40,0xff);
        MB_randRange(0x40,0xff);
        MB_randRot();
        MB_randRangeFloat((float)dVar29,(float)dVar28);
        MB_randRot();
        MB_randRangeFloat((float)dVar29,(float)dVar28);
        MB_randRangeFloat((float)dVar29,(float)dVar27);
        FastVecAddSelf(auStack_120,local_130,param_1 + 0x10);
        dVar30 = (double)MB_randRangeFloat((float)dVar29,g_FrameTime);
        dVar34 = (double)SQRT(local_138 * local_138 + local_140 * local_140 + local_13c * local_13c)
        ;
        dVar33 = (double)(local_140 * (float)(dVar30 / dVar34));
        dVar32 = (double)(local_13c * (float)(dVar30 / dVar34));
        dVar30 = dVar29;
        if (dVar29 - dVar34 < 0.0) {
          dVar30 = dVar33;
        }
        dVar35 = dVar29;
        if (dVar29 - dVar34 < 0.0) {
          dVar35 = dVar32;
        }
        if (dVar34 - dVar29 < 0.0) {
          dVar30 = dVar33;
        }
        if (dVar34 - dVar29 < 0.0) {
          dVar35 = dVar32;
        }
        local_140 = (float)dVar30;
        local_13c = (float)dVar35;
        dVar30 = (double)MB_randRangeFloat
                                   ((float)((double)g_FrameTime * dVar26),
                                    (float)((double)g_FrameTime * dVar25));
        local_138 = (float)dVar30;
        iVar11 = MB_randRange(0xf,0x1e);
        dVar32 = (double)(float)(dVar31 * dVar24);
        dVar30 = (double)(float)(dVar31 * dVar23);
        fVar1 = animationSpeed * (float)((double)(longlong)iVar11 + dVar27);
        MB_randInt(2);
        SpawnPart_53
                  (dVar32,dVar30,(double)(float)((double)DAT_0071f418 * dVar22),local_130,(int)fVar1
                  );
        iVar15 = iVar15 + 1;
      } while (iVar15 < 10);
      *(undefined1 *)(param_1 + 0x20) = 4;
      *param_5 = 1;
      iVar15 = param_2;
      if (1 < *(int *)(param_2 + 0x310)) {
        do {
          if ((-1 < *(int *)(iVar15 + 0x1e0)) &&
             (iVar11 = MB_SplineCrossCheck(dVar29,iVar15 + 0x1e0,1), iVar11 != 0)) {
            *(int *)(param_2 + 0x27c) = iVar14;
          }
          iVar14 = iVar14 + 1;
          iVar15 = iVar15 + 4;
        } while (iVar14 < 0x10);
      }
    }
  }
  return 0;
}


// 0x0491998 (0x140 bytes)
undefined4 M857_00491998(int param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  GPiece<4> local_30;
  MobyInstance *local_2c;
  
  iVar1 = *(int *)(param_1 + 0x78);
  if (*(int *)(iVar1 + 0x30c) == -1) {
    if (DAT_00a49344 != 0) {
      iVar3 = 0;
      iVar2 = DAT_00a49344;
      do {
        iVar2 = M857_00490fb0(param_1,iVar1,iVar2,param_2,local_30);
        if (iVar2 != 0) {
          return 0;
        }
        iVar2 = *(int *)((int)&DAT_00a49348 + iVar3);
        iVar3 = iVar3 + 4;
      } while (iVar2 != 0);
    }
  }
  else {
    MB_GetFirstMobyInGroup(&local_2c,*(int *)(iVar1 + 0x30c),'\0','\0');
    while ((local_2c != (MobyInstance *)0x0 &&
           (iVar2 = M857_00490fb0(param_1,iVar1,local_2c,param_2,local_30), iVar2 == 0))) {
      MB_GetNextMobyInGroup(&local_2c,local_2c,'\0','\0');
    }
  }
  return 0;
}


// 0x0491ae8 (0x268 bytes)
void M857_00491ae8(int param_1)

{
  MOBY_OCLASSES MVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  MobyInstance *local_30 [2];
  
  iVar3 = *(int *)(param_1 + 0x78);
  *(undefined4 *)(iVar3 + 0x174) = 0;
  dVar12 = 12.0;
  if (*(int *)(iVar3 + 0x30c) == -1) {
    if (DAT_00a49344 != 0) {
      iVar7 = 0;
      iVar4 = DAT_00a49344;
      do {
        sVar2 = *(short *)(iVar4 + 0xa6);
        if (((((sVar2 == 0x400 || sVar2 == 0x3b1) || (sVar2 == 0x515)) || (sVar2 == 0x516)) &&
            ((fVar5 = *(float *)(param_1 + 0x14) - *(float *)(iVar4 + 0x14),
             fVar6 = *(float *)(param_1 + 0x10) - *(float *)(iVar4 + 0x10),
             dVar10 = (double)SQRT(fVar6 * fVar6 + fVar5 * fVar5), dVar10 <= dVar12 &&
             (fVar5 = ABS(*(float *)(param_1 + 0x18) - *(float *)(iVar4 + 0x18)),
             fVar5 <= 1.5 && fVar5 <= 0.2)))) &&
           ((((sVar2 != 0x400 && (sVar2 != 0x516)) || (*(char *)(iVar4 + 0x20) != '\x02')) &&
            ((sVar2 != 0x515 || (**(int **)(iVar4 + 0x78) != -1)))))) {
          *(int *)(iVar3 + 0x174) = iVar4;
          dVar12 = dVar10;
        }
        iVar4 = *(int *)((int)&DAT_00a49348 + iVar7);
        iVar7 = iVar7 + 4;
      } while (iVar4 != 0);
    }
  }
  else {
    MB_GetFirstMobyInGroup(local_30,*(int *)(iVar3 + 0x30c),'\0','\0');
    if (local_30[0] != (MobyInstance *)0x0) {
      dVar10 = 0.20000000298023224;
      dVar11 = 1.5;
      do {
        MVar1 = local_30[0]->oClass;
                    /* WARNING: Load size is inaccurate */
        if (((((MVar1 == 0x400 || MVar1 == 0x3b1) || (MVar1 == GADGEBOT_TELEPORTER_ENTRANCE)) ||
             (MVar1 == GADGEBOT_ENTRANCE)) &&
            ((fVar5 = *(float *)(param_1 + 0x14) - (local_30[0]->pos).y,
             fVar6 = *(float *)(param_1 + 0x10) - (local_30[0]->pos).x,
             dVar8 = (double)SQRT(fVar6 * fVar6 + fVar5 * fVar5), dVar8 <= dVar12 &&
             (dVar9 = ABS((double)(*(float *)(param_1 + 0x18) - (local_30[0]->pos).z)),
             dVar9 <= dVar11 && dVar9 <= dVar10)))) &&
           ((((MVar1 != 0x400 && (MVar1 != GADGEBOT_ENTRANCE)) || (local_30[0]->state != '\x02')) &&
            ((MVar1 != GADGEBOT_TELEPORTER_ENTRANCE || (*local_30[0]->pVar != -1)))))) {
          *(MobyInstance **)(iVar3 + 0x174) = local_30[0];
          dVar12 = dVar8;
        }
        MB_GetNextMobyInGroup(local_30,local_30[0],'\0','\0');
      } while (local_30[0] != (MobyInstance *)0x0);
    }
  }
  *(undefined2 *)(iVar3 + 0x19a) = 1;
  return;
}


// 0x0491d68 (0x454 bytes)
// inlined: FastAtan2 @0x491e88, FastAtan2 @0x492048
double M857_00491d68(int param_1,int param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  ulonglong *puVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  float *pfVar16;
  longlong lVar15;
  longlong lVar17;
  ulonglong uVar18;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  ulonglong in_f28;
  double dVar24;
  ulonglong in_f29;
  ulonglong in_f30;
  double dVar25;
  ulonglong in_f31;
  double dVar26;
  
  uVar12 = ZEXT48(&stack0x00000000);
  lVar14 = uVar12 - 0x110;
  puVar6 = (ulonglong *)lVar14;
  *puVar6 = uVar12;
  puVar6[0x24] = in_LR;
  puVar6[0x1e] = in_f28;
  puVar6[0x1f] = in_f29;
  puVar6[0x20] = in_f30;
  puVar6[0x21] = in_f31;
  fVar1 = *(float *)(param_1 + 0x14);
  fVar2 = *(float *)(param_2 + 0x14);
  fVar4 = *(float *)(param_2 + 0x10) - *(float *)(param_1 + 0x10);
  fVar3 = *(float *)(param_1 + 0x10) - *(float *)(param_2 + 0x10);
  fVar5 = fVar2 - fVar1;
  puVar6[0x1d] = unaff_r31;
  fVar1 = fVar1 - fVar2;
  puVar6[0x1a] = unaff_r28;
  fVar11 = GameCamera.rot.radius;
  fVar10 = ABS(fVar4);
  fVar9 = ABS(fVar5);
  *(float *)((int)puVar6 + 0x7c) = fVar4;
  puVar6[0x1c] = unaff_r30;
  *(float *)(puVar6 + 0x10) = fVar5;
  puVar6[0x1b] = unaff_r29;
  *(float *)((int)puVar6 + 0x84) = fVar10 - fVar9;
  dVar24 = 0.0;
  dVar25 = 0.7853981852531433;
  uVar18 = (ulonglong)(*(uint *)((int)puVar6 + 0x7c) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)((int)puVar6 + 0x84) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)(puVar6 + 0x10) >> 0x1d) & 4;
  dVar26 = (double)SQRT(fVar3 * fVar3 + fVar1 * fVar1);
  fVar1 = *(float *)(&g_atanQuadrantTable + (int)(uVar18 << 2));
  fVar2 = ABS(*(float *)((int)puVar6 + 0x7c));
  if (*(float *)((int)puVar6 + 0x84) - 0.0 < 0.0) {
    fVar2 = fVar9;
  }
  fVar4 = ABS(*(float *)(puVar6 + 0x10));
  if (*(float *)((int)puVar6 + 0x84) - 0.0 < 0.0) {
    fVar4 = fVar10;
  }
  fVar3 = *(float *)(((uint)(uVar18 << 2) | 0x735900) + 4);
  dVar21 = dVar24;
  if (0.0 < fVar2) {
    lVar13 = uVar12 - 0x100;
    lVar17 = uVar12 - 0x58;
    lVar15 = uVar12 - 0x68;
    lVar19 = 2;
    fVar2 = (fVar4 - fVar2) / (fVar4 + fVar2);
    fVar4 = fVar2 * fVar2;
    *(float *)((int)puVar6 + 0xb4) = fVar2;
    *(float *)((int)puVar6 + 0xac) = fVar2;
    *(float *)(puVar6 + 0x16) = fVar2;
    *(float *)(puVar6 + 0x15) = fVar2;
    fVar2 = fVar4 * fVar4;
    *(float *)((int)puVar6 + 0xac) = *(float *)((int)puVar6 + 0xac) * fVar4;
    *(float *)(puVar6 + 0x16) = *(float *)(puVar6 + 0x16) * fVar2;
    *(float *)((int)puVar6 + 0xb4) = *(float *)((int)puVar6 + 0xb4) * fVar2 * fVar4;
    do {
      *(float *)((int)lVar13 + 0xa8) = *(float *)((int)lVar13 + 0x98) * fVar2 * fVar2;
      iVar7 = (int)lVar15;
      lVar15 = lVar15 + 8;
      lVar13 = lVar13 + 8;
      *(float *)((int)lVar17 + 4) = *(float *)(iVar7 + 4) * fVar2 * fVar2;
      lVar17 = lVar17 + 8;
      lVar19 = lVar19 + -1;
    } while (lVar19 != 0);
    lVar19 = 4;
    lVar17 = uVar12 - 0x68;
    pfVar16 = (float *)&DAT_007358e0;
    lVar13 = lVar14;
    lVar15 = lVar17;
    do {
      fVar2 = *pfVar16;
      fVar4 = pfVar16[1];
      pfVar16 = pfVar16 + 2;
      *(float *)((int)lVar13 + 0xa8) = *(float *)((int)lVar13 + 0xa8) * fVar2;
      lVar13 = lVar13 + 8;
      *(float *)((int)lVar15 + 4) = *(float *)((int)lVar15 + 4) * fVar4;
      lVar15 = lVar15 + 8;
      lVar19 = lVar19 + -1;
    } while (lVar19 != 0);
    lVar15 = 2;
    lVar13 = lVar14;
    do {
      iVar7 = (int)lVar13;
      iVar8 = (int)lVar17;
      lVar13 = lVar13 + 0x10;
      lVar17 = lVar17 + 0x10;
      dVar21 = (double)((float)(dVar21 + (double)*(float *)(iVar7 + 0xa8)) + *(float *)(iVar8 + 4) +
                        *(float *)(iVar8 + 8) + *(float *)(iVar8 + 0xc));
      lVar15 = lVar15 + -1;
    } while (lVar15 != 0);
    dVar21 = (double)((float)(dVar21 + 0.7853981852531433) * fVar1 + fVar3);
  }
  dVar20 = (double)FastSubRots(fVar11,(float)dVar21);
  fVar1 = *(float *)(param_2 + 0x10) - *(float *)(param_1 + 0x10);
  fVar2 = *(float *)(param_2 + 0x14) - *(float *)(param_1 + 0x14);
  dVar22 = ABS((double)fVar1);
  dVar23 = ABS((double)fVar2);
  *(float *)(puVar6 + 0xe) = fVar1;
  *(float *)((int)puVar6 + 0x74) = fVar2;
  fVar1 = *(float *)(param_1 + 0x48);
  *(float *)(puVar6 + 0xf) = (float)(dVar22 - dVar23);
  uVar18 = (ulonglong)(*(uint *)(puVar6 + 0xe) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar6 + 0xf) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar6 + 0x74) >> 0x1d) & 4;
  dVar21 = ABS((double)*(float *)(puVar6 + 0xe));
  if ((double)*(float *)(puVar6 + 0xf) - dVar24 < 0.0) {
    dVar21 = dVar23;
  }
  fVar2 = *(float *)(&g_atanQuadrantTable + (int)(uVar18 << 2));
  dVar23 = ABS((double)*(float *)((int)puVar6 + 0x74));
  if ((double)*(float *)(puVar6 + 0xf) - dVar24 < 0.0) {
    dVar23 = dVar22;
  }
  fVar4 = *(float *)(((uint)(uVar18 << 2) | 0x735900) + 4);
  if (dVar24 < dVar21) {
    lVar13 = uVar12 - 0x100;
    lVar17 = uVar12 - 0x78;
    lVar15 = uVar12 - 0x88;
    lVar19 = 2;
    fVar3 = (float)(dVar23 - dVar21) / (float)(dVar23 + dVar21);
    fVar5 = fVar3 * fVar3;
    *(float *)((int)puVar6 + 0x94) = fVar3;
    *(float *)((int)puVar6 + 0x8c) = fVar3;
    *(float *)(puVar6 + 0x12) = fVar3;
    *(float *)(puVar6 + 0x11) = fVar3;
    fVar3 = fVar5 * fVar5;
    *(float *)((int)puVar6 + 0x8c) = *(float *)((int)puVar6 + 0x8c) * fVar5;
    *(float *)(puVar6 + 0x12) = *(float *)(puVar6 + 0x12) * fVar3;
    *(float *)((int)puVar6 + 0x94) = *(float *)((int)puVar6 + 0x94) * fVar3 * fVar5;
    do {
      *(float *)((int)lVar13 + 0x88) = *(float *)((int)lVar13 + 0x78) * fVar3 * fVar3;
      iVar7 = (int)lVar15;
      lVar15 = lVar15 + 8;
      lVar13 = lVar13 + 8;
      *(float *)((int)lVar17 + 4) = *(float *)(iVar7 + 4) * fVar3 * fVar3;
      lVar17 = lVar17 + 8;
      lVar19 = lVar19 + -1;
    } while (lVar19 != 0);
    lVar19 = 4;
    lVar17 = uVar12 - 0x88;
    pfVar16 = (float *)&DAT_007358e0;
    lVar13 = lVar14;
    lVar15 = lVar17;
    do {
      fVar3 = *pfVar16;
      fVar5 = pfVar16[1];
      pfVar16 = pfVar16 + 2;
      *(float *)((int)lVar13 + 0x88) = *(float *)((int)lVar13 + 0x88) * fVar3;
      lVar13 = lVar13 + 8;
      *(float *)((int)lVar15 + 4) = *(float *)((int)lVar15 + 4) * fVar5;
      lVar15 = lVar15 + 8;
      lVar19 = lVar19 + -1;
    } while (lVar19 != 0);
    lVar13 = 2;
    do {
      iVar7 = (int)lVar14;
      iVar8 = (int)lVar17;
      lVar14 = lVar14 + 0x10;
      lVar17 = lVar17 + 0x10;
      dVar24 = (double)((float)(dVar24 + (double)*(float *)(iVar7 + 0x88)) + *(float *)(iVar8 + 4) +
                        *(float *)(iVar8 + 8) + *(float *)(iVar8 + 0xc));
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
    dVar24 = (double)((float)(dVar24 + dVar25) * fVar2 + fVar4);
  }
  dVar24 = (double)FastSubRots(fVar1,(float)dVar24);
  dVar24 = (double)(float)(dVar20 * 3.0 + (double)(float)(dVar24 * 10.0 + dVar26));
  if (*(char *)(param_2 + 0x31) == '\0') {
    dVar24 = (double)(float)(dVar24 + 10.0);
  }
  if (param_3 == 9) {
    dVar24 = (double)(float)(dVar24 + 100.0);
  }
  return dVar24;
}


// 0x04921e0 (0x6e4 bytes)
void M857_004921e0(void)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  MobyInstance *pMVar7;
  ulonglong *puVar8;
  float fVar9;
  short *psVar10;
  int iVar12;
  longlong lVar11;
  int iVar13;
  int iVar14;
  ulonglong uVar15;
  char cVar19;
  longlong lVar16;
  int iVar18;
  longlong lVar17;
  int iVar21;
  short sVar23;
  longlong lVar20;
  int iVar22;
  longlong lVar24;
  longlong lVar25;
  ulonglong uVar26;
  longlong lVar27;
  int iVar28;
  ulonglong unaff_r21;
  ulonglong unaff_r22;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  longlong lVar29;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  int iVar30;
  ulonglong unaff_r30;
  int iVar31;
  ulonglong unaff_r31;
  int iVar32;
  ulonglong in_LR;
  double dVar33;
  double dVar34;
  ulonglong in_f27;
  ulonglong in_f28;
  double dVar35;
  ulonglong in_f29;
  double dVar36;
  ulonglong in_f30;
  double dVar37;
  ulonglong in_f31;
  double dVar38;
  
  uVar26 = ZEXT48(&stack0x00000000);
  lVar17 = uVar26 - 0x330;
  puVar8 = (ulonglong *)lVar17;
  *puVar8 = uVar26;
  puVar8[0x68] = in_LR;
  puVar8[0x61] = in_f27;
  puVar8[0x62] = in_f28;
  puVar8[99] = in_f29;
  puVar8[100] = in_f30;
  puVar8[0x65] = in_f31;
  puVar8[0x59] = unaff_r24;
  puVar8[0x5b] = unaff_r26;
  puVar8[0x5f] = unaff_r30;
  iVar31 = 0;
  puVar8[0x60] = unaff_r31;
  pMVar7 = DAT_00a49344;
  iVar32 = 0;
  puVar8[0x5e] = unaff_r29;
  puVar8[0x5d] = unaff_r28;
  puVar8[0x5c] = unaff_r27;
  puVar8[0x5a] = unaff_r25;
  puVar8[0x58] = unaff_r23;
  puVar8[0x57] = unaff_r22;
  puVar8[0x56] = unaff_r21;
  if (pMVar7 != (MobyInstance *)0x0) {
    lVar20 = lVar17;
    iVar21 = 0;
    do {
      lVar25 = lVar20;
      if ((((pMVar7->oClass == GADGEBOT_0359) && (pMVar7->state == '\x05')) &&
          (iVar32 != 0x32 && pMVar7->setByGroup != '\x02')) &&
         (((iVar30 = *(int *)((int)pMVar7->pVar + 0x174), iVar30 == 0 ||
           (cVar19 = *(char *)(iVar30 + 0x20), cVar19 == -2)) || (cVar19 == -3)))) {
        lVar25 = lVar20 + 4;
        iVar32 = iVar32 + 1;
        *(MobyInstance **)((int)lVar20 + 0xd0) = pMVar7;
      }
      pMVar7 = *(MobyInstance **)((int)&DAT_00a49348 + iVar21);
      lVar20 = lVar25;
      iVar21 = iVar21 + 4;
    } while (pMVar7 != (MobyInstance *)0x0);
  }
  iVar21 = 0;
  lVar20 = lVar17;
  if (0 < iVar32) {
    do {
      pMVar7 = DAT_00a49344;
      iVar30 = *(int *)((int)lVar20 + 0xd0);
      bVar1 = DAT_00a49344 != (MobyInstance *)0x0;
      uVar4 = *(uint *)(iVar30 + 0x78);
      *(undefined2 *)(uVar4 + 0x192) = 0;
      if (bVar1) {
        iVar13 = 0;
        do {
          if ((pMVar7->pClass != (MobyClass *)0x0) && ((short)pMVar7->pClass->mode_bits == 5)) {
            fVar2 = 12.0;
            if (*(short *)(uVar4 + 0x198) != 0) {
              fVar2 = 5.0;
            }
            fVar3 = *(float *)(iVar30 + 0x14) - (pMVar7->pos).y;
            fVar9 = *(float *)(iVar30 + 0x10) - (pMVar7->pos).x;
            if ((SQRT(fVar9 * fVar9 + fVar3 * fVar3) <= fVar2) &&
               (ABS(*(float *)(iVar30 + 0x18) - (pMVar7->pos).z) <= 1.0)) {
              *(float *)(puVar8 + 0x10) = *(float *)(iVar30 + 0x10);
              *(undefined4 *)((int)puVar8 + 0x84) = *(undefined4 *)(iVar30 + 0x14);
              fVar2 = *(float *)(iVar30 + 0x18);
              *(float *)(puVar8 + 0x11) = fVar2;
              *(undefined4 *)((int)puVar8 + 0x8c) = *(undefined4 *)(iVar30 + 0x1c);
              *(f32 *)(puVar8 + 0xe) = (pMVar7->pos).x;
              *(f32 *)((int)puVar8 + 0x74) = (pMVar7->pos).y;
              fVar3 = (pMVar7->pos).z;
              *(float *)(puVar8 + 0xf) = fVar3;
              *(f32 *)((int)puVar8 + 0x7c) = (pMVar7->pos).w;
              *(float *)(puVar8 + 0x11) = fVar2 + 0.25;
              *(float *)(puVar8 + 0xf) = fVar3 + 0.25;
              iVar12 = CollLine(uVar26 - 0x2b0,uVar26 - 0x2c0,2,iVar30,0);
              if ((iVar12 == 0) || (g_CollOutput.pMoby == pMVar7)) {
                dVar33 = (double)M857_00491d68(iVar30,pMVar7,5);
                sVar23 = *(short *)(uVar4 + 0x192);
                iVar12 = 0;
                uVar15 = (ulonglong)uVar4;
                if (0 < sVar23) {
                  do {
                    if (dVar33 < (double)*(float *)((int)uVar15 + 0x1c0)) {
                      lVar25 = (longlong)sVar23 + -1;
                      lVar25 = lVar25 + (6 - lVar25 >> 0x3f & 6U - lVar25);
                      if (iVar12 <= (int)lVar25) {
                        uVar15 = lVar25 * 4 + (ulonglong)uVar4 & 0xffffffff;
                        do {
                          iVar14 = (int)uVar15;
                          lVar25 = lVar25 + -1;
                          *(undefined4 *)(iVar14 + 0x1a4) = *(undefined4 *)(iVar14 + 0x1a0);
                          *(undefined4 *)(iVar14 + 0x1c4) = *(undefined4 *)(iVar14 + 0x1c0);
                          uVar15 = uVar15 - 4;
                        } while (iVar12 <= (int)lVar25);
                      }
                      break;
                    }
                    iVar12 = iVar12 + 1;
                    uVar15 = uVar15 + 4;
                  } while (iVar12 < sVar23);
                  if (7 < iVar12) goto LAB_004924e8;
                }
                sVar23 = *(short *)(uVar4 + 0x192) + 1;
                *(MobyInstance **)(iVar12 * 4 + uVar4 + 0x1a0) = pMVar7;
                *(float *)(iVar12 * 4 + uVar4 + 0x1c0) = (float)dVar33;
                *(short *)(uVar4 + 0x192) = sVar23;
                if (8 < sVar23) {
                  *(undefined2 *)(uVar4 + 0x192) = 8;
                }
              }
            }
          }
LAB_004924e8:
          pMVar7 = *(MobyInstance **)((int)&DAT_00a49348 + iVar13);
          iVar13 = iVar13 + 4;
        } while (pMVar7 != (MobyInstance *)0x0);
      }
      iVar21 = iVar21 + 1;
      lVar20 = lVar20 + 4;
    } while (iVar21 < iVar32);
  }
  iVar21 = 0;
  lVar25 = 0;
  lVar20 = lVar17;
  if (0 < iVar32) {
    do {
      iVar13 = 0;
      iVar30 = *(int *)(*(int *)((int)lVar20 + 0xd0) + 0x78);
      sVar23 = *(short *)(iVar30 + 0x192);
      if (0 < sVar23) {
        uVar26 = lVar25 + lVar17 & 0xffffffff;
        uVar15 = lVar25 * 4 + lVar17 & 0xffffffff;
        do {
          iVar12 = (int)lVar25;
          if (iVar12 < 0x32) {
            cVar19 = '\b' - (char)iVar13;
            iVar14 = 0;
            lVar11 = lVar17;
            if (0 < iVar12) {
              do {
                if (*(int *)((int)lVar11 + 0x198) == *(int *)(iVar30 + 0x1a0)) {
                  *(char *)((int)puVar8 + iVar14 + 0x260) =
                       *(char *)((int)puVar8 + iVar14 + 0x260) + cVar19;
                  break;
                }
                iVar14 = iVar14 + 1;
                lVar11 = lVar11 + 4;
              } while (iVar14 < iVar12);
            }
            if (iVar12 == iVar14) {
              uVar5 = *(undefined4 *)(iVar30 + 0x1a0);
              *(char *)((int)uVar26 + 0x260) = cVar19;
              lVar25 = lVar25 + 1;
              *(undefined4 *)((int)uVar15 + 0x198) = uVar5;
              uVar26 = uVar26 + 1;
              uVar15 = uVar15 + 4;
            }
          }
          iVar13 = iVar13 + 1;
          iVar30 = iVar30 + 4;
        } while (iVar13 < sVar23);
      }
      iVar21 = iVar21 + 1;
      lVar20 = lVar20 + 4;
      lVar11 = lVar17;
      iVar30 = iVar32;
    } while (iVar21 < iVar32);
    for (; 0 < iVar30; iVar30 = iVar30 + -1) {
      *(undefined4 *)(*(int *)(*(int *)((int)lVar11 + 0xd0) + 0x78) + 0x178) = 0;
      lVar11 = lVar11 + 4;
    }
  }
  iVar30 = (int)lVar25;
  iVar21 = 0;
  if (0 < iVar30) {
    dVar36 = 0.5235987901687622;
    dVar35 = 1.7453292608261108;
    dVar33 = -0.5;
    do {
      lVar11 = 0;
      lVar16 = 0;
      lVar29 = 0;
      lVar20 = lVar17;
      lVar24 = lVar25;
      iVar13 = iVar30;
      while (0 < iVar13) {
        iVar13 = (int)lVar11;
        lVar27 = (longlong)*(char *)((int)lVar20 + 0x260);
        uVar26 = lVar16 - lVar29;
        lVar24 = lVar24 + -1;
        lVar16 = lVar16 + 1;
        lVar20 = lVar20 + 1;
        lVar11 = lVar11 + (iVar13 - lVar27 >> 0x3f & lVar27 - lVar11);
        lVar29 = lVar29 + (iVar13 - lVar27 >> 0x3f & uVar26);
        iVar13 = (int)lVar24;
      }
      iVar12 = 1;
      *(undefined1 *)((int)puVar8 + (int)lVar29 + 0x260) = 0xff;
      pMVar7 = *(MobyInstance **)((int)puVar8 + (int)(lVar29 << 2) + 0x198);
      iVar13 = MB_GetPvarsIfMobyHasThem(pMVar7);
      if (iVar13 != 0) {
        iVar12 = (int)*(short *)(iVar13 + 4);
      }
      iVar13 = 0;
      lVar20 = lVar17;
      if (0 < iVar12) {
        do {
          iVar14 = 0;
          fVar2 = 9999999.0;
          iVar28 = 0;
          lVar11 = lVar17;
          if (0 < iVar32) {
            do {
              iVar6 = *(int *)((int)lVar11 + 0xd0);
              iVar18 = *(int *)(iVar6 + 0x78);
              if (*(int *)(iVar18 + 0x178) == 0) {
                psVar10 = (short *)(iVar18 + 0x192);
                iVar22 = 0;
                if (0 < *psVar10) {
                  do {
                    if ((*(MobyInstance **)(iVar18 + 0x1a0) == pMVar7) &&
                       (*(float *)(iVar18 + 0x1c0) < fVar2)) {
                      fVar2 = *(float *)(iVar18 + 0x1c0);
                      iVar14 = iVar6;
                    }
                    iVar22 = iVar22 + 1;
                    iVar18 = iVar18 + 4;
                  } while (iVar22 < *psVar10);
                }
              }
              iVar28 = iVar28 + 1;
              lVar11 = lVar11 + 4;
            } while (iVar28 < iVar32);
          }
          if (iVar14 == 0) break;
          iVar28 = *(int *)(iVar14 + 0x78);
          iVar13 = iVar13 + 1;
          *(int *)((int)lVar20 + 0x90) = iVar14;
          *(MobyInstance **)(iVar28 + 0x178) = pMVar7;
          lVar20 = lVar20 + 4;
        } while (iVar13 < iVar12);
        if (iVar13 != 0) {
          puVar8[0x53] = (longlong)(iVar13 + -1);
          fVar2 = 0.0;
          dVar37 = (double)(float)((double)(longlong)puVar8[0x53] * dVar36);
          if (dVar35 - dVar37 < 0.0) {
            dVar37 = dVar35;
          }
          if (1 < iVar13) {
            fVar2 = (float)(dVar37 / (double)(longlong)puVar8[0x53]);
          }
          dVar38 = (double)fVar2;
          iVar12 = 0;
          dVar37 = (double)(float)(dVar37 * dVar33);
          lVar20 = lVar17;
          if (0 < iVar13) {
            do {
              puVar8[0x53] = (longlong)iVar12;
              iVar14 = *(int *)(*(int *)((int)lVar20 + 0x90) + 0x78);
              dVar34 = (double)FastWrapRot
                                         ((float)dVar37,
                                          (float)((double)(longlong)puVar8[0x53] * dVar38));
              iVar12 = iVar12 + 1;
              *(float *)(iVar14 + 0x17c) = (float)dVar34;
              lVar20 = lVar20 + 4;
            } while (iVar12 < iVar13);
          }
        }
      }
      iVar21 = iVar21 + 1;
    } while (iVar21 < iVar30);
  }
  if (0 < iVar32) {
    do {
      iVar21 = *(int *)(*(int *)((int)lVar17 + 0xd0) + 0x78);
      *(undefined4 *)(iVar21 + 0x18c) = worldUpdateTime;
      *(int *)(iVar21 + 0x174) = *(int *)(iVar21 + 0x178);
      *(undefined2 *)(iVar21 + 0x19a) = 1;
      if (*(int *)(iVar21 + 0x178) != 0) {
        *(undefined2 *)(iVar21 + 0x198) = 1;
      }
      iVar31 = iVar31 + 1;
      lVar17 = lVar17 + 4;
    } while (iVar31 < iVar32);
  }
  return;
}


// 0x04928e0 (0x3ec bytes)
// inlined: FastAtan2 @0x4929ec
void M857_004928e0(MobyInstance *param_1)

{
  u8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  void *pvVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  ulonglong *puVar10;
  int iVar11;
  int iVar12;
  float fVar13;
  ulonglong uVar14;
  int iVar16;
  longlong lVar15;
  ulonglong uVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  float *pfVar21;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong uVar22;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar23;
  ulonglong in_f31;
  double dVar24;
  GPiece<16> auVar25;
  GPiece<16> auVar26;
  GPiece<16> auVar27;
  GPiece<16> auVar28;
  GPiece<16> auVar29;
  GPiece<16> auVar30;
  GPiece<16> auVar31;
  GPiece<16> auVar32;
  
  uVar14 = ZEXT48(&stack0x00000000);
  lVar15 = uVar14 - 0xd0;
  puVar10 = (ulonglong *)lVar15;
  *puVar10 = uVar14;
  puVar10[0x1c] = in_LR;
  puVar10[0x19] = in_f31;
  puVar10[0x18] = unaff_r31;
  uVar1 = param_1->state;
  puVar10[0x16] = unaff_r29;
  pvVar6 = param_1->pVar;
  uVar22 = ZEXT48(pvVar6);
  puVar10[0x17] = unaff_r30;
  puVar10[0x15] = unaff_r28;
  puVar10[0x14] = unaff_r27;
  if ((((uVar1 != '\t') && (param_1->updateId != '\x02')) && (param_1->animationId != '\x02')) &&
     (iVar16 = MB_damage(param_1,0x330001,0), iVar16 != 0)) {
    uVar7 = *(uint *)(iVar16 + 0x10);
    uVar8 = *(uint *)(iVar16 + 0x14);
    fVar2 = ABS(*(float *)(iVar16 + 0x10));
    fVar4 = ABS(*(float *)(iVar16 + 0x14));
    *(float *)((int)puVar10 + 0x74) = fVar2 - fVar4;
    fVar13 = 0.0;
    uVar17 = (ulonglong)(uVar7 >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar10 + 0x74) >> 0x1e) & 2 |
             (ulonglong)(uVar8 >> 0x1d) & 4;
    fVar3 = fVar2;
    if (*(float *)((int)puVar10 + 0x74) - 0.0 < 0.0) {
      fVar3 = fVar4;
    }
    fVar5 = *(float *)(&g_atanQuadrantTable + (int)(uVar17 << 2));
    if (*(float *)((int)puVar10 + 0x74) - 0.0 < 0.0) {
      fVar4 = fVar2;
    }
    fVar2 = *(float *)(((uint)(uVar17 << 2) | 0x735900) + 4);
    if (0.0 < fVar3) {
      lVar20 = uVar14 - 0xc0;
      lVar19 = uVar14 - 0x58;
      lVar18 = uVar14 - 0x48;
      lVar23 = 2;
      fVar3 = (fVar4 - fVar3) / (fVar4 + fVar3);
      fVar4 = fVar3 * fVar3;
      *(float *)((int)puVar10 + 0x84) = fVar3;
      *(float *)((int)puVar10 + 0x7c) = fVar3;
      *(float *)(puVar10 + 0x10) = fVar3;
      *(float *)(puVar10 + 0xf) = fVar3;
      fVar3 = fVar4 * fVar4;
      *(float *)((int)puVar10 + 0x7c) = *(float *)((int)puVar10 + 0x7c) * fVar4;
      *(float *)(puVar10 + 0x10) = *(float *)(puVar10 + 0x10) * fVar3;
      *(float *)((int)puVar10 + 0x84) = *(float *)((int)puVar10 + 0x84) * fVar3 * fVar4;
      do {
        *(float *)((int)lVar20 + 0x78) = *(float *)((int)lVar20 + 0x68) * fVar3 * fVar3;
        iVar11 = (int)lVar19;
        lVar20 = lVar20 + 8;
        lVar19 = lVar19 + 8;
        *(float *)((int)lVar18 + 4) = *(float *)(iVar11 + 4) * fVar3 * fVar3;
        lVar18 = lVar18 + 8;
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
      lVar20 = uVar14 - 0x58;
      pfVar21 = (float *)&DAT_007358e0;
      lVar23 = 4;
      lVar18 = lVar20;
      lVar19 = lVar15;
      do {
        fVar3 = *pfVar21;
        fVar4 = pfVar21[1];
        pfVar21 = pfVar21 + 2;
        *(float *)((int)lVar19 + 0x78) = *(float *)((int)lVar19 + 0x78) * fVar3;
        lVar19 = lVar19 + 8;
        *(float *)((int)lVar18 + 4) = *(float *)((int)lVar18 + 4) * fVar4;
        lVar18 = lVar18 + 8;
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
      lVar18 = 2;
      do {
        iVar11 = (int)lVar15;
        lVar15 = lVar15 + 0x10;
        iVar12 = (int)lVar20;
        lVar20 = lVar20 + 0x10;
        fVar13 = fVar13 + *(float *)(iVar11 + 0x78) + *(float *)(iVar12 + 4) +
                 *(float *)(iVar12 + 8) + *(float *)(iVar12 + 0xc);
        lVar18 = lVar18 + -1;
      } while (lVar18 != 0);
      fVar13 = (fVar13 + 0.7853982) * fVar5 + fVar2;
    }
    *(float *)(puVar10 + 0xe) = fVar13;
    if ((*(MobyInstance **)(iVar16 + 0x20) != g_heroMobyPtr) &&
       ((*(MobyInstance **)(iVar16 + 0x20))->oClass != param_1->oClass)) {
      auVar25 = ZEXT416(0xffffffff);
      auVar25 = auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60;
      auVar26 = vectorShiftLeftIntegerWord(auVar25,auVar25);
      auVar25 = loadVectorLeftIndexed(8,0x4928c8);
      auVar25 = auVar25 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar28 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar28 = vectorMultiplyAddFloatingPoint
                          (auVar28,auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60,
                           auVar26);
      auVar25 = ZEXT416(0xfffffff0);
      auVar27 = auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60;
      auVar25 = ZEXT416(0);
      auVar26 = loadVectorLeftIndexed(0x10,0x4928c8);
      auVar26 = auVar26 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar30 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
      auVar28 = vectorConvertToSignedFixedPointWordSaturate(auVar28,0);
      auVar26 = loadVectorLeftIndexed(0xc,0x4928c8);
      auVar26 = auVar26 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar31 = vectorRotateLeftIntegerWord(auVar28,auVar27);
      auVar32 = vectorMultiplyOddUnsignedHalfWord(auVar28,auVar28);
      auVar28 = vectorMultiplySumSignedHalfWordModulo
                          (auVar28,auVar31,
                           auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60);
      auVar25 = ZEXT416(0xffffffff);
      auVar25 = auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60;
      auVar28 = vectorShiftLeftIntegerWord(auVar28,auVar27);
      auVar31 = vectorShiftLeftIntegerWord(auVar25,auVar25);
      auVar25 = ZEXT416(0xffffffff);
      auVar29 = auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60;
      auVar25.piece<0,4>() = auVar28.piece<0,4>() + auVar32.piece<0,4>();
      auVar25.piece<8,8>() = auVar28.piece<8,8>();
      auVar25.piece<4,4>() = auVar28.piece<4,4>() + auVar32.piece<4,4>();
      auVar27.piece<0,8>() = auVar25.piece<0,8>();
      auVar27.piece<12,4>() = auVar28.piece<12,4>();
      auVar27.piece<8,4>() = auVar28.piece<8,4>() + auVar32.piece<8,4>();
      auVar28.piece<0,12>() = auVar27.piece<0,12>();
      auVar28.piece<12,4>() = auVar27.piece<12,4>() + auVar32.piece<12,4>();
      auVar25 = ZEXT416(0xffffffff);
      auVar25 = auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60;
      auVar29 = vectorShiftLeftIntegerWord(auVar29,auVar29);
      auVar28 = vectorConvertFromSignedFixedPointWord(auVar28,0);
      auVar32 = vectorShiftLeftIntegerWord(auVar25,auVar25);
      auVar25 = vectorReciprocalEstimateFloatingPoint(auVar28);
      auVar27 = vectorNegativeMultiplySubtractFloatingPoint(auVar25,auVar28,auVar30);
      auVar27 = vectorMultiplyAddFloatingPoint(auVar25,auVar27,auVar31);
      auVar25 = ZEXT416(0xffffffff);
      auVar25 = auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60;
      auVar31 = vectorShiftLeftIntegerWord(auVar25,auVar25);
      auVar25 = vectorNegativeMultiplySubtractFloatingPoint(auVar27,auVar28,auVar30);
      auVar27 = vectorMultiplyAddFloatingPoint(auVar27,auVar25,auVar29);
      auVar25 = vectorNegativeMultiplySubtractFloatingPoint(auVar27,auVar28,auVar30);
      auVar25 = vectorMultiplyAddFloatingPoint(auVar27,auVar25,auVar32);
      auVar25 = vectorMultiplyAddFloatingPoint
                          (auVar25,auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60,
                           auVar31);
      auVar25 = auVar25 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar9 = storeVectorElementWordIndexed
                        (auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60,0x90,uVar22);
      *(undefined4 *)((int)pvVar6 + 0x90U & 0xfffffffc) = uVar9;
      *(undefined1 *)((int)pvVar6 + 0xbd) = 0;
      *(undefined4 *)((int)pvVar6 + 0xa4) = 9;
      dVar24 = 2.0;
      MB_SetupJumpArc
                (0x4000000000000000,0x3fe0000000000000,&DAT_004928c8,0x90,uVar22 + 0x80);
      uVar9 = *(undefined4 *)(iVar16 + 0x18);
      *(undefined4 *)(puVar10 + 6) = *(undefined4 *)(iVar16 + 0x10);
      *(undefined4 *)(puVar10 + 7) = uVar9;
      uVar9 = *(undefined4 *)(iVar16 + 0x1c);
      *(undefined4 *)((int)puVar10 + 0x34) = *(undefined4 *)(iVar16 + 0x14);
      *(undefined4 *)((int)puVar10 + 0x3c) = uVar9;
      MB_VecAtan2Angles(puVar10[6],puVar10[7],uVar14 - 0x60,uVar22 + 0x98,uVar22 + 0x9c);
      MB_StartKick((double)*(float *)(puVar10 + 0xe),param_1,uVar22 + 0x80);
      *(undefined4 *)((int)pvVar6 + 0xd0) = 0x41200000;
      *(undefined4 *)((int)pvVar6 + 0xd4) = 0x41a00000;
      *(float *)((int)pvVar6 + 0xcc) = (float)((double)g_FrameTime * dVar24);
      PlayMobySound(2,0,param_1);
      param_1->state = '\t';
    }
  }
  param_1->damage = -1;
  return;
}


// 0x0492d98 (0x2460 bytes)
// strings: 0096c074: 'None'

/* Moby 857 */

void UpdateMoby_857(MobyInstance *moby)

{
  u8 uVar1;
  byte bVar2;
  MobyModeBit MVar3;
  void *pvVar4;
  u16 *puVar5;
  f32 fVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  longlong lVar10;
  undefined4 uVar13;
  int iVar14;
  float *val;
  uint uVar15;
  ulonglong uVar11;
  ulonglong uVar12;
  int iVar16;
  bool bVar17;
  void *pvVar18;
  undefined4 *in_r5;
  ulonglong uVar19;
  longlong in_r6;
  ulonglong uVar20;
  Vec4 *point;
  MobyInstance *pMVar21;
  longlong lVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  undefined8 uVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  float fVar37;
  GPiece<16> auStack_230;
  GPiece<8> auStack_220;
  float local_218;
  f32 local_210;
  f32 local_20c;
  float local_208;
  f32 local_204;
  f32 local_200;
  f32 local_1fc;
  float local_1f8;
  f32 local_1f4;
  f32 local_1f0;
  f32 local_1ec;
  f32 local_1e8;
  f32 local_1e4;
  float local_1e0;
  float local_1dc;
  Vec4 local_1d0;
  float local_1c0;
  float local_1bc;
  float local_1b0;
  float local_1ac;
  undefined4 local_1a8;
  Vec4 local_1a0;
  float local_190;
  float local_18c;
  float local_188;
  GPiece<16> auStack_180;
  float local_170;
  float local_16c;
  undefined4 local_168;
  float local_160;
  float local_15c;
  undefined4 local_158;
  undefined4 local_154;
  GPiece<8> auStack_150;
  float local_148;
  float local_140;
  float local_13c;
  float local_138;
  GPiece<16> auStack_130;
  GPiece<8> auStack_120;
  f32 local_118;
  GPiece<16> auStack_110;
  GPiece<8> auStack_100;
  float local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  float local_c0;
  float local_bc [3];
  
  lVar10 = (longlong)(int)moby;
  uVar15 = 0;
  lVar22 = lVar10 + 0x10;
  pvVar4 = moby->pVar;
  dVar23 = (double)FUN_005e8588(lVar22,&g_heroPosition);
  dVar28 = (double)(moby->pos).z;
  dVar36 = (double)(moby->pos).x;
  dVar35 = (double)(moby->pos).y;
  dVar34 = (double)(moby->pos).w;
  dVar30 = ABS((double)(float)(dVar28 - (double)DAT_00969f88));
  if (((moby->state != '\x01') && (M857_004928e0(lVar10), dVar23 < 16.0)) &&
     (ABS((moby->pos).z - g_heroPosition.z) < 1.5)) {
    uVar1 = moby->state;
    if (((uVar1 == '\x05' || uVar1 == '\x02') || (uVar1 == '\x03')) ||
       ((uVar1 == '\x06' || ((uVar1 == '\a' || (uVar1 == '\x04')))))) {
      in_r5 = &DAT_00a1bfc0;
      in_r6 = (ulonglong)DAT_00a1bfe4 + 1;
      DAT_00a1bfe4 = (uint)in_r6;
      if (DAT_0096bfa0 < 3) {
        if (0 < DAT_0096bfa0) {
          if (DAT_0096bfa0 < 2) {
            if (uVar1 != '\x03') {
              moby->state = '\x03';
              moby->setByGroup = '\0';
            }
          }
          else {
            moby->state = '\x04';
          }
        }
      }
      else if (DAT_0096bfa0 < 4) {
        if (uVar1 != '\x05') {
          moby->state = '\x05';
          moby->setByGroup = '\0';
        }
      }
      else if (DAT_0096bfa0 < 5) {
        moby->state = '\a';
        moby->setByGroup = '\0';
      }
    }
  }
  if (Cheats[3] == '\0') {
    if (*(char *)((int)pvVar4 + 0x101) != '\0') {
      DetachManipulator(moby,(int)pvVar4 + 0x100);
    }
  }
  else {
    if (*(char *)((int)pvVar4 + 0x101) == '\0') {
      AttachManipulator(moby,0,(int)pvVar4 + 0x100);
    }
    if (moby->state == '\x01') {
      in_r5 = (undefined4 *)&DAT_00720000;
      Delt(1.0,DAT_0071f408 * 0.1,(float *)((int)pvVar4 + 0x308));
    }
    else {
      in_r5 = (undefined4 *)&DAT_00720000;
      Delt(2.3,DAT_0071f408 * 0.1,(float *)((int)pvVar4 + 0x308));
    }
    uVar13 = *(undefined4 *)((int)pvVar4 + 0x308);
    *(undefined4 *)((int)pvVar4 + 0x120) = uVar13;
    *(undefined4 *)((int)pvVar4 + 0x124) = uVar13;
    *(undefined4 *)((int)pvVar4 + 0x128) = uVar13;
  }
  bVar2 = moby->state;
  point = (Vec4 *)lVar22;
  if (4 < bVar2) {
    if (bVar2 < 8) {
      if (bVar2 < 6) {
        if (Level != Blarg) {
          iVar14 = 0;
          *(undefined4 *)((int)pvVar4 + 0x27c) = 0xffffffff;
          pvVar18 = pvVar4;
          do {
            if (((-1 < *(int *)((int)pvVar18 + 0x1e0)) &&
                (iVar16 = PointInsideComplexPoly
                                    (&g_heroPosition,
                                     (Vec4 *)Splines[*(int *)((int)pvVar18 + 0x1e0)]->points,
                                     Splines[*(int *)((int)pvVar18 + 0x1e0)]->cnt), iVar16 != 0)) &&
               (iVar16 = PointInsideComplexPoly
                                   (point,(Vec4 *)Splines[*(int *)((int)pvVar18 + 0x1e0)]->points,
                                    Splines[*(int *)((int)pvVar18 + 0x1e0)]->cnt), iVar16 != 0)) {
              *(int *)((int)pvVar4 + 0x27c) = iVar14;
            }
            iVar14 = iVar14 + 1;
            pvVar18 = (void *)((int)pvVar18 + 4);
          } while (iVar14 < 0x10);
        }
        bVar2 = moby->setByGroup;
        if (bVar2 == 0) {
          moby->setByGroup = '\x01';
          *(undefined4 *)((int)pvVar4 + 0x174) = 0;
          *(undefined2 *)((int)pvVar4 + 0x198) = 0;
          *(undefined2 *)((int)pvVar4 + 0x19a) = 0;
          dVar23 = (double)MB_randRangeSigned(0x3fc1df46a0000000,0x3fd6571840000000);
          *(float *)((int)pvVar4 + 0x17c) = (float)dVar23;
          *(uint *)((int)pvVar4 + 0x18c) = worldUpdateTime;
          bVar2 = moby->setByGroup;
        }
        if (bVar2 < 3) {
          if (bVar2 != 0) {
            if (bVar2 < 2) {
              if (*(int *)((int)pvVar4 + 0x18c) < (int)worldUpdateTime) {
                M857_004921e0();
              }
              if (*(int *)((int)pvVar4 + 0x174) == 0) {
                if (*(short *)((int)pvVar4 + 0x19a) != 0) {
                  *(undefined2 *)((int)pvVar4 + 0x19a) = 0;
                  uVar13 = idol::GetAnimDuration(0x3c);
                  *(undefined4 *)((int)pvVar4 + 0x194) = uVar13;
                  moby->setByGroup = '\x04';
                }
              }
              else {
                if (moby->animationId != '\x05') {
                  in_r6 = idol::GetAnimDuration(7);
                  MB_SetAnimation(lVar10,5,0);
                }
                iVar14 = *(int *)((int)pvVar4 + 0x27c);
                if (iVar14 < 0) {
                  FUN_005e7e98(&local_1c0,(ulonglong)*(uint *)((int)pvVar4 + 0x174) + 0x10);
                }
                else {
                  iVar14 = MB_SplineFindRouteNode
                                     (0.1,(int)pvVar4 + iVar14 * 4 + 0x1e0,1,
                                      (longlong)*(int *)((int)pvVar4 + iVar14 * 4 + 0x220),in_r6,
                                      point,*(int *)((int)pvVar4 + 0x174) + 0x10,&local_1c0);
                  if (iVar14 == 0) {
                    FUN_005e7e98(&local_1c0,(ulonglong)*(uint *)((int)pvVar4 + 0x174) + 0x10);
                  }
                  local_1a0.x = (moby->pos).x;
                  local_1a0.y = (moby->pos).y;
                  local_1a0.z = (moby->pos).z;
                  local_1a0.w = (moby->pos).w;
                  uVar13 = *(undefined4 *)((int)pvVar4 + *(int *)((int)pvVar4 + 0x27c) * 4 + 0x1e0);
                  MB_PushOutOfSplineWalls
                            (0x3fc5c28f60000000,uVar13,uVar13,lVar22,&local_1a0);
                  iVar14 = PointInsideComplexPoly
                                     (&local_1a0,
                                      (Vec4 *)Splines[*(int *)((int)pvVar4 +
                                                              *(int *)((int)pvVar4 + 0x27c) * 4 +
                                                              0x1e0)]->points,
                                      Splines[*(int *)((int)pvVar4 +
                                                      *(int *)((int)pvVar4 + 0x27c) * 4 + 0x1e0)]->
                                      cnt);
                  if (iVar14 != 0) {
                    (moby->pos).x = local_1a0.x;
                    (moby->pos).y = local_1a0.y;
                    (moby->pos).z = local_1a0.z;
                    (moby->pos).w = local_1a0.w;
                  }
                }
                dVar23 = (double)FUN_005e8338((double)(local_1c0 - (moby->pos).x),
                                              (double)(local_1bc - (moby->pos).y));
                dVar23 = (double)FastWrapRot
                                           ((float)dVar23,*(float *)((int)pvVar4 + 0x17c));
                dVar30 = (double)cosf((float)dVar23);
                dVar33 = 3.0;
                local_1b0 = (float)(dVar30 * 3.0);
                dVar30 = (double)FUN_005e8128(dVar23);
                local_1ac = (float)(dVar30 * dVar33);
                dVar30 = 0.0;
                local_1a8 = 0;
                FUN_005e7f54(&local_1b0,&local_1b0,lVar22);
                if ((*(int *)((int)pvVar4 + 0x27c) != -1) &&
                   (iVar14 = MB_LineCrossesSpline
                                       (*(undefined4 *)
                                         ((int)pvVar4 + *(int *)((int)pvVar4 + 0x27c) * 4 + 0x1e0),
                                        lVar22,&local_1b0), iVar14 != 0)) {
                  DeltAng((float)dVar30,g_FrameTime * 1.5707964,
                                    (float *)((int)pvVar4 + 0x17c),0x492ccc,0x720000,0);
                }
                dVar30 = 0.30000001192092896;
                OrganicDeltAngSpeed
                          (dVar23,(double)(DAT_0071f40c * 0.07),(double)(DAT_0071f40c * 0.3),
                           (double)(g_FrameTime * 5.2359877),lVar10);
                *(float *)((int)pvVar4 + 0x54) = g_FrameTime * 4.5;
                uVar11 = MB_UpdateNavMove
                                   (0x3ff0000000000000,moby,(MobyInstance *)((int)pvVar4 + 0x30),
                                    *(int *)((int)pvVar4 + 0x174) + 0x10,auStack_230);
                if ((uVar11 & 0x20) != 0) {
                  (moby->pos).x = (float)dVar36;
                  (moby->pos).y = (float)dVar35;
                  (moby->pos).z = (float)dVar28;
                  (moby->pos).w = (float)dVar34;
                  moby->state = '\x04';
                }
                dVar23 = (double)FUN_005e8588(lVar22,(ulonglong)*(uint *)((int)pvVar4 + 0x174) +
                                                     0x10);
                if (dVar23 < 1.5) {
                  FUN_005e7e98(&local_190,lVar22);
                  dVar27 = (double)local_190;
                  dVar33 = 0.4000000059604645;
                  local_188 = local_188 + 0.4;
                  dVar23 = (double)cosf((moby->rotation).z);
                  local_190 = (float)(dVar23 * dVar33 + dVar27);
                  dVar27 = (double)local_18c;
                  dVar23 = (double)FUN_005e8128((double)(moby->rotation).z);
                  local_18c = (float)(dVar23 * dVar33 + dVar27);
                  FUN_005e7e98(auStack_180,&local_190);
                  dVar33 = (double)local_190;
                  dVar23 = (double)cosf((moby->rotation).z);
                  local_190 = (float)(dVar23 * dVar30 + dVar33);
                  dVar33 = (double)local_18c;
                  dVar23 = (double)FUN_005e8128((double)(moby->rotation).z);
                  local_18c = (float)(dVar23 * dVar30 + dVar33);
                  iVar14 = CollLine(&local_190,auStack_180,0,lVar10,0);
                  if ((iVar14 != 0) && (g_CollOutput.pMoby == *(MobyInstance **)((int)pvVar4 + 0x174))
                     ) {
                    moby->setByGroup = '\x02';
                  }
                }
              }
            }
            else {
              if (moby->animationId != '\x02') {
                uVar31 = idol::GetAnimDuration(7);
                MB_SetAnimation(lVar10,2,8,uVar31);
              }
              if (((*(int *)((int)pvVar4 + 0x174) != 0) &&
                  (dVar23 = (double)BlendAnimFrame(moby), 12.0 <= dVar23)) &&
                 (dVar23 <= 15.0)) {
                dVar23 = (double)cosf((moby->rotation).z);
                local_170 = (float)dVar23;
                dVar23 = (double)FUN_005e8128((double)(moby->rotation).z);
                local_16c = (float)dVar23;
                local_168 = 0;
                SetCollDamIn
                          (0x4000000000000000,&uStack_f0,lVar10,0x10000,&DAT_00492ccc,&local_170);
                CollDamageMobyDirect
                          (*(undefined4 *)((int)pvVar4 + 0x174),0x40,CONCAT44(uStack_f0,uStack_ec),
                           CONCAT44(uStack_e8,uStack_e4),CONCAT44(uStack_e0,uStack_dc),
                           CONCAT44(uStack_d8,uStack_d4),CONCAT44(uStack_d0,uStack_cc),
                           CONCAT44(uStack_c8,uStack_c4));
              }
              if ((moby->field43_0x70 & 2U) != 0) {
                *(undefined2 *)((int)pvVar4 + 0x19a) = 0;
                uVar13 = idol::GetAnimDuration(0x1e);
                *(undefined4 *)((int)pvVar4 + 0x194) = uVar13;
                moby->setByGroup = '\x03';
              }
            }
          }
        }
        else if (bVar2 < 4) {
          if (moby->animationId != '\0') {
            uVar31 = idol::GetAnimDuration(7);
            MB_SetAnimation(lVar10,0,0,uVar31);
          }
          if ((*(short *)((int)pvVar4 + 0x19a) != 0) && (*(int *)((int)pvVar4 + 0x174) == 0)) {
            *(undefined2 *)((int)pvVar4 + 0x19a) = 0;
            uVar13 = idol::GetAnimDuration(0x3c);
            *(undefined4 *)((int)pvVar4 + 0x194) = uVar13;
            moby->setByGroup = '\x04';
          }
          iVar14 = FastDecTimerS32((int)pvVar4 + 0x194);
          if ((iVar14 != 0) && (*(int *)((int)pvVar4 + 0x174) != 0)) {
            moby->setByGroup = '\x01';
          }
        }
        else if (bVar2 < 5) {
          if (*(int *)((int)pvVar4 + 0x18c) < (int)worldUpdateTime) {
            M857_004921e0();
          }
          if (moby->animationId != '\0') {
            uVar31 = idol::GetAnimDuration(7);
            MB_SetAnimation(lVar10,0,0,uVar31);
          }
          iVar14 = FastDecTimerS32((int)pvVar4 + 0x194);
          if (((iVar14 == 0) || (*(short *)((int)pvVar4 + 0x19a) == 0)) ||
             (*(int *)((int)pvVar4 + 0x174) != 0)) {
            if ((*(short *)((int)pvVar4 + 0x19a) != 0) && (*(int *)((int)pvVar4 + 0x174) == 0)) {
              *(undefined2 *)((int)pvVar4 + 0x19a) = 0;
            }
          }
          else {
            moby->state = '\x03';
            moby->setByGroup = '\0';
          }
          if (*(int *)((int)pvVar4 + 0x174) != 0) {
            moby->setByGroup = '\x01';
          }
        }
      }
      else if (6 < bVar2) {
        if (moby->setByGroup == 0) {
          moby->setByGroup = '\x01';
          M857_00491ae8(lVar10);
        }
        else if ((byte)moby->setByGroup < 2) {
          iVar14 = *(int *)((int)pvVar4 + 0x174);
          if (iVar14 == 0) {
            if (*(short *)((int)pvVar4 + 0x19a) != 0) {
              moby->state = '\x03';
              moby->setByGroup = '\0';
            }
          }
          else {
            if (moby->animationId != '\x01') {
              uVar31 = idol::GetAnimDuration(7);
              MB_SetAnimation(lVar10,1,0,uVar31);
              iVar14 = *(int *)((int)pvVar4 + 0x174);
            }
            if (*(short *)(iVar14 + 0xa6) == 0x15f || *(short *)(iVar14 + 0xa6) == 0x515) {
              local_160 = *(float *)(iVar14 + 0x10);
              local_15c = *(float *)(iVar14 + 0x14);
              local_158 = *(undefined4 *)(iVar14 + 0x18);
              local_154 = *(undefined4 *)(iVar14 + 0x1c);
            }
            else {
              FUN_005e7f54(&local_160,iVar14 + 0x10,iVar14 + 0xc0);
            }
            uVar31 = FUN_005e8338((double)(local_160 - (moby->pos).x),
                                  (double)(local_15c - (moby->pos).y));
            OrganicDeltAngSpeed
                      (uVar31,(double)(DAT_0071f40c * 0.07),(double)(DAT_0071f40c * 0.3),
                       (double)(g_FrameTime * 5.2359877),lVar10,&DAT_00720000,
                       (int)pvVar4 + 0x44);
            uVar11 = MB_UpdateNavMove
                               (0x3ff0000000000000,moby,(MobyInstance *)((int)pvVar4 + 0x30),
                                &local_160,auStack_230);
            if ((uVar11 & 0x20) != 0) {
              (moby->pos).x = (float)dVar36;
              (moby->pos).y = (float)dVar35;
              (moby->pos).z = (float)dVar28;
              (moby->pos).w = (float)dVar34;
              moby->state = '\x04';
            }
          }
        }
      }
    }
    else {
      if (bVar2 < 9) {
        dVar23 = (double)FUN_005e8338((double)((moby->pos).x -
                                              *(float *)(*(int *)((int)pvVar4 + 0x304) + 0x10)),
                                      (double)((moby->pos).y -
                                              *(float *)(*(int *)((int)pvVar4 + 0x304) + 0x14)));
        local_c0 = (float)dVar23;
        dVar23 = (double)FUN_005e8588((ulonglong)*(uint *)((int)pvVar4 + 0x304) + 0x10,lVar22);
        DeltAng(*(float *)(*(int *)((int)pvVar4 + 0x304) + 0x48),
                          g_FrameTime * 6.2831855,&local_c0,*(int *)((int)pvVar4 + 0x304),
                          (int)in_r5,0);
        dVar23 = -(double)(float)((double)g_FrameTime * 4.0 - dVar23);
        if (dVar23 <= 0.0) {
          iVar14 = *(int *)(*(int *)((int)pvVar4 + 0x304) + 0x78);
          iVar16 = *(int *)(iVar14 + 0x14);
          if (0 < iVar16) {
            iVar16 = iVar16 + -1;
            *(int *)(iVar14 + 0x14) = iVar16;
          }
          if (iVar16 == 0) {
            sound_MobyPlay_oClass(1,0,*(MobyInstance **)((int)pvVar4 + 0x304),0x516);
          }
          else {
            sound_MobyPlay_oClass(0,0,*(MobyInstance **)((int)pvVar4 + 0x304),0x516);
          }
          DeleteMoby(moby);
          return;
        }
        dVar28 = (double)cosf(local_c0);
        dVar30 = (double)FUN_005e8128((double)local_c0);
        iVar14 = *(int *)((int)pvVar4 + 0x304);
        (moby->pos).x = (float)(dVar28 * dVar23 + (double)*(float *)(iVar14 + 0x10));
        (moby->pos).y = (float)(dVar30 * dVar23 + (double)*(float *)(iVar14 + 0x14));
        if (dVar23 < 1.0) {
          moby->scale = (float)((double)moby->pClass->gScale * dVar23);
          dVar23 = (double)((float)(1.0 - dVar23) * 0.5);
          dVar28 = (double)(float)(dVar23 * 210000.0);
          idol::GetAnimDuration(dVar23,0x3fe0000000000000,0x4109a28000000000,2);
          SpawnPart_26(dVar28,lVar10);
        }
        if (moby->enabled != '\0') {
          M857_00490cb8(lVar10);
        }
        moby->collision = (ushort *)0x0;
        moby->modeBits =
             moby->modeBits &
             (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
              DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
              TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
        return;
      }
      if ((bVar2 < 10) &&
         (uVar15 = MB_UpdateKick(moby,(KickVars *)((int)pvVar4 + 0x80)),
         (uVar15 & 0x41) != 0)) {
        dVar24 = 0.5;
        MB_SpawnExplosionSparks(0x3fe0000000000000,0x402a000000000000,lVar10,lVar22);
        FUN_005e7e98(lVar22,(int)pvVar4 + 0xe0);
        moby->state = '\x04';
        dVar32 = 0.10000000149011612;
        iVar14 = 0;
        dVar27 = 1.0;
        dVar33 = 0.0;
        dVar36 = 0.25;
        dVar35 = 2.5;
        dVar34 = 5.0;
        dVar30 = 0.07000000029802322;
        dVar28 = 0.699999988079071;
        dVar23 = 15.0;
        do {
          dVar29 = (double)MB_randRangeFloat((float)dVar32,(float)dVar27);
          uVar15 = MB_randRange(0x40,0xff);
          uVar11 = MB_randRange(0x40,0xff);
          uVar12 = MB_randRange(0x40,0xff);
          dVar25 = (double)MB_randRot();
          dVar25 = (double)cosf((float)dVar25);
          dVar26 = (double)MB_randRangeFloat((float)dVar33,(float)dVar36);
          local_140 = (float)(dVar25 * dVar26);
          MB_randRot();
          dVar25 = (double)FUN_005e8128();
          dVar26 = (double)MB_randRangeFloat((float)dVar33,(float)dVar36);
          local_13c = (float)(dVar25 * dVar26);
          local_138 = 0.0;
          dVar25 = (double)MB_randRangeFloat((float)dVar33,(float)dVar24);
          local_138 = (float)((double)local_138 + dVar25);
          FastVecAddSelf(auStack_130,&local_140,lVar22);
          MB_randRangeFloat((float)dVar33,g_FrameTime);
          FUN_005e7f98(auStack_150,auStack_150);
          dVar25 = (double)MB_randRangeFloat
                                     ((float)((double)g_FrameTime * dVar35),
                                      (float)((double)g_FrameTime * dVar34));
          local_148 = (float)dVar25;
          MB_randRange(0xf,0x1e);
          uVar31 = idol::GetAnimDuration();
          dVar25 = (double)(float)(dVar29 * dVar30);
          dVar29 = (double)(float)(dVar29 * dVar28);
          iVar16 = MB_randInt(2);
          uVar20 = ZERO_MASK(iVar16);
          uVar19 = uVar20 & 0xfffffffffffffffe;
          SpawnPart_53
                    (dVar25,dVar29,(double)(float)((double)DAT_0071f418 * dVar23),&local_140,uVar31,
                     uVar19,uVar20,
                     (uint)((uVar11 & 0xffffffff) << 8) | uVar15 |
                     (uint)((uVar12 & 0xffffffff) << 0x10) | 0x7f000000,0,uVar19 + 1,auStack_150);
          iVar14 = iVar14 + 1;
        } while (iVar14 < 10);
        return;
      }
    }
    goto LAB_00494af4;
  }
  if (bVar2 < 2) {
    if (bVar2 == 0) {
      *(undefined4 *)((int)pvVar4 + 0x308) = 0x3f800000;
      uVar31 = 0x3fe0000000000000;
      dVar23 = (double)GetGroundZ(0x3fe0000000000000,lVar22,0);
      (moby->pos).z = (float)dVar23;
      FUN_00339910(lVar10);
      *(f32 *)((int)pvVar4 + 0x2e0) = (moby->pos).x;
      *(f32 *)((int)pvVar4 + 0x2e4) = (moby->pos).y;
      *(f32 *)((int)pvVar4 + 0x2e8) = (moby->pos).z;
      *(f32 *)((int)pvVar4 + 0x2ec) = (moby->pos).w;
      *(f32 *)((int)pvVar4 + 0x2f0) = (moby->pos).x;
      *(f32 *)((int)pvVar4 + 0x2f4) = (moby->pos).y;
      *(f32 *)((int)pvVar4 + 0x2f8) = (moby->pos).z;
      *(f32 *)((int)pvVar4 + 0x2fc) = (moby->pos).w;
      if (g_LevelFlags[Level][(byte)moby->levelFlagIdx] == -1) {
        DeleteMoby(moby);
        return;
      }
      uVar13 = FUN_00338ea8(lVar10);
      *(undefined4 *)((int)pvVar4 + 0x170) = uVar13;
      dVar23 = (double)GetGroundZ(uVar31,lVar22,0);
      (moby->pos).z = (float)dVar23;
      FUN_005e7e98(pvVar4,lVar22);
      FUN_005e7e98((int)pvVar4 + 0xe0,lVar22);
      fVar9 = g_FrameTime;
      *(float *)((int)pvVar4 + 0x14) = g_FrameTime * 2.0;
      *(undefined4 *)((int)pvVar4 + 0x30) = 300;
      *(undefined4 *)((int)pvVar4 + 0x34) = 0x3f028f5c;
      *(undefined4 *)((int)pvVar4 + 0x38) = *(undefined4 *)((int)pvVar4 + 0x300);
      *(undefined4 *)((int)pvVar4 + 0x3c) = *(undefined4 *)((int)pvVar4 + 0x300);
      *(float *)((int)pvVar4 + 0x18) = fVar9 * 2.6179938;
      fVar8 = DAT_0071f40c;
      fVar37 = DAT_0071f40c * 0.3;
      *(float *)((int)pvVar4 + 0x50) = fVar37;
      *(float *)((int)pvVar4 + 0x54) = fVar9 * 3.0 + fVar9 * 0.1;
      *(undefined4 *)((int)pvVar4 + 0x58) = 0x3f32b8c2;
      *(undefined4 *)((int)pvVar4 + 0x5c) = 0x3e4ccccd;
      *(float *)((int)pvVar4 + 0x4c) = fVar8 * 0.02;
      *(float *)((int)pvVar4 + 0x70) = fVar37;
      *(float *)((int)pvVar4 + 0x6c) = fVar8 * 0.03;
      *(float *)((int)pvVar4 + 0x74) = fVar9 * 3.1415927;
      uVar13 = idol::GetAnimDuration(4);
      *(undefined4 *)((int)pvVar4 + 0x78) = uVar13;
      *(uint *)((int)pvVar4 + 0x68) = *(uint *)((int)pvVar4 + 0x68) | 1;
      iVar14 = 0;
      pvVar18 = pvVar4;
      do {
        if (-1 < *(int *)((int)pvVar18 + 0x1e0)) {
          *(int *)((int)pvVar4 + 0x310) = *(int *)((int)pvVar4 + 0x310) + 1;
        }
        iVar14 = iVar14 + 1;
        pvVar18 = (void *)((int)pvVar18 + 4);
      } while (iVar14 < 0x10);
      dVar23 = (double)MB_randRot();
      *(float *)((int)pvVar4 + 0x28c) = (float)dVar23;
      moby->collision = (ushort *)0x0;
      *(undefined4 *)((int)pvVar4 + 0x27c) = 0xffffffff;
      moby->state = '\x01';
    }
    else {
      if (((*(int *)((int)pvVar4 + 0x170) != 0) &&
          (bVar2 = *(byte *)(*(int *)((int)pvVar4 + 0x170) + 0x20), bVar2 != 0xfd && bVar2 != 0xfe))
         && (bVar2 < 2)) {
        if (g_heroType == '\0') {
          iVar14 = *(int *)((int)pvVar4 + 0x170);
          moby->modeBits = moby->modeBits | (UNK_40|DISABLED);
          *(ushort *)(iVar14 + 0x34) = *(ushort *)(iVar14 + 0x34) | 0x41;
          iVar14 = *(int *)((int)pvVar4 + 0x170);
          moby->modeBits =
               moby->modeBits &
               (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
                DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
                TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
          *(ushort *)(iVar14 + 0x34) = *(ushort *)(iVar14 + 0x34) & 0xefff;
          *(undefined4 *)(*(int *)((int)pvVar4 + 0x170) + 0x94) = 0;
        }
        else {
          iVar14 = *(int *)((int)pvVar4 + 0x170);
          moby->modeBits =
               moby->modeBits &
               (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|
                DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|HAS_GLOW|
                TRANSPARENT|NO_POST_UPDATE|NO_UPDATE);
          *(ushort *)(iVar14 + 0x34) = *(ushort *)(iVar14 + 0x34) & 0xffbe;
          iVar14 = *(int *)((int)pvVar4 + 0x170);
          moby->modeBits = moby->modeBits | CAN_BE_AUTO_TARGETED;
          *(ushort *)(iVar14 + 0x34) = *(ushort *)(iVar14 + 0x34) | 0x1000;
          *(undefined4 *)(*(int *)((int)pvVar4 + 0x170) + 0x94) =
               *(undefined4 *)(*(int *)(*(int *)((int)pvVar4 + 0x170) + 0x24) + 0x10);
        }
        if (moby->enabled == '\0') {
          return;
        }
        M857_00490cb8(lVar10);
        return;
      }
      if (0 < *(int *)((int)pvVar4 + 0x310)) {
        uVar31 = 0;
        pvVar18 = pvVar4;
        do {
          if (-1 < *(int *)((int)pvVar18 + 0x1e0)) {
            MB_SplineMarkCrossings
                      ((int)pvVar18 + 0x1e0,1,*(undefined4 *)((int)pvVar18 + 0x220));
            iVar14 = MB_SplineCrossCheck(uVar31,(int)pvVar18 + 0x1e0,1);
            if (iVar14 != 0) {
              *(uint *)((int)pvVar4 + 0x27c) = uVar15;
            }
          }
          uVar15 = uVar15 + 1;
          pvVar18 = (void *)((int)pvVar18 + 4);
        } while ((int)uVar15 < 0x10);
      }
      if (Cheats[3] == '\0') {
        uVar13 = 300;
        DAT_008c7c70 = 0.27;
      }
      else {
        uVar13 = 0x177;
        DAT_008c7c70 = 0.35;
      }
      MVar3 = moby->modeBits;
      *(undefined4 *)((int)pvVar4 + 0x30) = uVar13;
      moby->modeBits =
           MVar3 & (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|
                    DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|
                    HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|NO_UPDATE) | CAN_BE_AUTO_TARGETED;
      puVar5 = moby->pClass->collision;
      moby->state = '\x03';
      moby->collision = puVar5;
    }
    goto LAB_00494af4;
  }
  if (bVar2 < 3) {
    if (moby->animationId != '\x01') {
      uVar31 = idol::GetAnimDuration(7);
      MB_SetAnimation(lVar10,1,0,uVar31);
    }
    DoMeander(0x3fd6666660000000,0x3fd0000000000000,lVar10,pvVar4);
    goto LAB_00494af4;
  }
  if (3 < bVar2) {
    if (moby->animationId != '\0') {
      uVar31 = idol::GetAnimDuration(7);
      MB_SetAnimation(lVar10,0,0,uVar31);
    }
    uVar31 = FUN_005e8338((double)(g_heroPosition.x - (moby->pos).x),
                          (double)(g_heroPosition.y - (moby->pos).y));
    OrganicDeltAngSpeed
              (uVar31,(double)(DAT_0071f40c * 0.05),(double)(DAT_0071f40c * 0.3),
               (double)(g_FrameTime * 3.4906585),lVar10,&DAT_00720000,(int)pvVar4 + 0x44);
    goto LAB_00494af4;
  }
  FUN_005e7e98(&local_1f0,lVar22);
  if ((Level != Blarg) &&
     (*(undefined4 *)((int)pvVar4 + 0x27c) = 0xffffffff, 1 < *(int *)((int)pvVar4 + 0x310))) {
    iVar14 = 0;
    pvVar18 = pvVar4;
    do {
      if (((-1 < *(int *)((int)pvVar18 + 0x1e0)) &&
          (iVar16 = PointInsideComplexPoly
                              (&g_heroPosition,
                               (Vec4 *)Splines[*(int *)((int)pvVar18 + 0x1e0)]->points,
                               Splines[*(int *)((int)pvVar18 + 0x1e0)]->cnt), iVar16 != 0)) &&
         (iVar16 = PointInsideComplexPoly
                             (point,(Vec4 *)Splines[*(int *)((int)pvVar18 + 0x1e0)]->points,
                              Splines[*(int *)((int)pvVar18 + 0x1e0)]->cnt), iVar16 != 0)) {
        *(int *)((int)pvVar4 + 0x27c) = iVar14;
      }
      iVar14 = iVar14 + 1;
      pvVar18 = (void *)((int)pvVar18 + 4);
    } while (iVar14 < 0x10);
  }
  iVar14 = 0;
  pvVar18 = pvVar4;
  do {
    iVar16 = *(int *)((int)pvVar18 + 0x2a0);
    if ((iVar16 == -1) || (*(int *)((int)pvVar18 + 0x2c0) == -1)) break;
    if ((g_MobyInstance[iVar16].oClass == DOOR_03F7) &&
       (((g_MobyInstance[iVar16].state != '\x04' &&
         (iVar16 = MB_IsPntInCuboid
                             ((Vec4 *)&g_heroMobyPtr->pos,(longlong)*(int *)((int)pvVar18 + 0x2c0)),
         iVar16 != 0)) &&
        (iVar16 = MB_IsPntInCuboid(point,(longlong)*(int *)((int)pvVar18 + 0x2c0)),
        iVar16 == 0)))) {
      (moby->pos).x = local_1f0;
      (moby->pos).y = local_1ec;
      moby->state = '\x04';
      (moby->pos).z = local_1e8;
      (moby->pos).w = local_1e4;
      break;
    }
    iVar14 = iVar14 + 1;
    pvVar18 = (void *)((int)pvVar18 + 4);
  } while (iVar14 < 8);
  if (moby->state == '\x04') goto LAB_00494af4;
  bVar2 = moby->setByGroup;
  if (bVar2 == 0) {
    moby->setByGroup = '\x01';
    *(undefined4 *)((int)pvVar4 + 0x184) = 0;
    *(undefined2 *)((int)pvVar4 + 400) = 0;
    FUN_005e7e98((int)pvVar4 + 0xf0,lVar22);
    dVar30 = (double)MB_randRangeSigned(0x3fc1df46a0000000,0x3fd6571840000000);
    *(float *)((int)pvVar4 + 0x17c) = (float)dVar30;
LAB_004936b8:
    if (moby->animationId != '\x01') {
      in_r6 = idol::GetAnimDuration(7);
      MB_SetAnimation(lVar10,1,0);
    }
    iVar14 = *(int *)((int)pvVar4 + 0x27c);
    dVar32 = (double)(moby->pos).x;
    dVar27 = (double)(moby->pos).y;
    dVar33 = (double)(moby->pos).z;
    dVar30 = (double)(moby->pos).w;
    if (iVar14 < 0) {
      FUN_005e7e98(&local_1e0,&g_heroPosition);
    }
    else {
      iVar14 = MB_SplineFindRouteNode
                         (0.1,(int)pvVar4 + iVar14 * 4 + 0x1e0,1,
                          (longlong)*(int *)((int)pvVar4 + iVar14 * 4 + 0x220),in_r6,point,
                          &g_heroPosition,&local_1e0);
      if (iVar14 == 0) {
        FUN_005e7e98(&local_1e0,&g_heroPosition);
      }
      local_1d0.x = (moby->pos).x;
      local_1d0.y = (moby->pos).y;
      local_1d0.z = (moby->pos).z;
      local_1d0.w = (moby->pos).w;
      uVar13 = *(undefined4 *)((int)pvVar4 + *(int *)((int)pvVar4 + 0x27c) * 4 + 0x1e0);
      MB_PushOutOfSplineWalls(0x3fc5c28f60000000,uVar13,uVar13,lVar22,&local_1d0);
      iVar14 = PointInsideComplexPoly
                         (&local_1d0,
                          (Vec4 *)Splines[*(int *)((int)pvVar4 +
                                                  *(int *)((int)pvVar4 + 0x27c) * 4 + 0x1e0)]->
                                  points,
                          Splines[*(int *)((int)pvVar4 + *(int *)((int)pvVar4 + 0x27c) * 4 + 0x1e0)]
                          ->cnt);
      if (iVar14 != 0) {
        (moby->pos).x = local_1d0.x;
        (moby->pos).y = local_1d0.y;
        (moby->pos).z = local_1d0.z;
        (moby->pos).w = local_1d0.w;
      }
    }
    dVar24 = (double)FUN_005e8338((double)(local_1e0 - (moby->pos).x),
                                  (double)(local_1dc - (moby->pos).y));
    uVar31 = FastWrapRot((float)dVar24,*(float *)((int)pvVar4 + 0x17c));
    OrganicDeltAngSpeed
              (uVar31,(double)(DAT_0071f40c * 0.07),(double)(DAT_0071f40c * 0.3),
               (double)(g_FrameTime * 5.2359877),lVar10,&DAT_00720000,(int)pvVar4 + 0x44);
    val = (float *)((int)pvVar4 + 0x54);
    if (dVar23 <= 2.299999952316284) {
      if (1.2000000476837158 <= dVar23) {
        Delt(g_FrameTime * 3.0 * 0.95,DAT_0071f418,val);
      }
      else {
        Delt(g_FrameTime * 3.0 * 0.77,DAT_0071f418 * 2.0,val);
      }
    }
    else {
      Delt(g_FrameTime * 3.0 * 1.35,DAT_0071f418,val);
    }
    fVar37 = g_FrameTime * 3.0 * 1.35;
    if (fVar37 < *(float *)((int)pvVar4 + 0x54)) {
      *(float *)((int)pvVar4 + 0x54) = fVar37;
    }
    dVar24 = 0.800000011920929;
    if (0.800000011920929 < dVar23) {
      uVar15 = MB_UpdateNavMove
                         (0x3ff0000000000000,moby,(MobyInstance *)((int)pvVar4 + 0x30),
                          &g_heroPosition,auStack_230);
    }
    uVar7 = (int)moby >> 8;
    if (worldUpdateTime +
        (((int)worldUpdateTime >> 3) +
        (uint)((int)worldUpdateTime < 0 && (worldUpdateTime & 7) != 0)) * -8 ==
        uVar7 + (((int)moby >> 0xb) + (uint)((int)uVar7 < 0 && (uVar7 & 7) != 0)) * -8) {
      DamageSphereAtPos
                (0x3fd99999a0000000,0x3ff0000000000000,0x3ff0000000000000,lVar10,lVar22,
                 &DAT_00492ccc,0x1000000);
    }
    dVar23 = (double)FUN_005e8588(lVar22,&g_heroPosition);
    dVar29 = ABS((double)((moby->pos).z - DAT_00969f88));
    GetGroundZ(0x3fe0000000000000,lVar22,0);
    if ((g_CollOutput.pMoby != (MobyInstance *)0x0) && ((g_CollOutput.pMoby)->oClass == 0x3b1)) {
      (moby->pos).x = (float)dVar32;
      (moby->pos).y = (float)dVar27;
      (moby->pos).z = (float)dVar33;
      (moby->pos).w = (float)dVar30;
    }
    bVar17 = false;
    if (((uVar15 & 1) != 0) &&
       (*(int *)((int)pvVar4 + 0x184) == (*(int *)((int)pvVar4 + 0x184) / 0xe) * 0xe)) {
      dVar25 = (double)FUN_005e8588((int)pvVar4 + 0xf0,lVar22);
      bVar17 = dVar25 < (double)*(float *)((int)pvVar4 + 0x40);
      if (bVar17) {
        dVar25 = (double)FUN_005e8588(&g_heroPosition,lVar22);
        *(float *)((int)pvVar4 + 0x188) = (float)dVar25;
      }
      FUN_005e7e98((int)pvVar4 + 0xf0,lVar22);
    }
    if ((uVar15 & 0x20) != 0) {
      (moby->pos).x = (float)dVar32;
      (moby->pos).y = (float)dVar27;
      (moby->pos).z = (float)dVar33;
      (moby->pos).w = (float)dVar30;
      moby->state = '\x04';
    }
    if ((bVar17 || dVar23 < dVar24) || (1.75 < dVar29)) {
      FUN_005e7e98(pvVar4,lVar22);
      moby->setByGroup = '\x02';
    }
  }
  else {
    if (bVar2 < 2) goto LAB_004936b8;
    if (bVar2 < 3) {
      dVar23 = (double)FUN_005e8588(pvVar4,&g_heroPosition);
      if ((((*(short *)((int)pvVar4 + 400) == 0) && (1.7999999523162842 < dVar23)) ||
          ((*(short *)((int)pvVar4 + 400) != 0 &&
           ((double)(*(float *)((int)pvVar4 + 0x188) + 0.5) < dVar23)))) && (dVar30 < 1.75)) {
        moby->setByGroup = '\0';
      }
      if (moby->animationId != '\0') {
        uVar31 = idol::GetAnimDuration(7);
        MB_SetAnimation(lVar10,0,0,uVar31);
      }
      uVar31 = FUN_005e8338((double)(g_heroPosition.x - (moby->pos).x),
                            (double)(g_heroPosition.y - (moby->pos).y));
      OrganicDeltAngSpeed
                (uVar31,(double)(DAT_0071f40c * 0.05),(double)(DAT_0071f40c * 0.3),
                 (double)(g_FrameTime * 3.4906585),lVar10,&DAT_00720000,(int)pvVar4 + 0x44
                );
    }
  }
  *(int *)((int)pvVar4 + 0x184) = *(int *)((int)pvVar4 + 0x184) + 1;
LAB_00494af4:
  iVar14 = M857_00491998
                     (lVar10,(ulonglong)(LZCOUNT(moby->state - 7) << 0x20) >> 0x25 ^ 1);
  if (iVar14 != 2) {
    if (moby->state != '\x01') {
      FUN_005e7e98(auStack_220,lVar22);
      local_218 = DAT_008c7c70 + 0.02 + local_218;
      FUN_005e7e98(auStack_120,lVar22);
      dVar30 = (double)*(float *)((int)pvVar4 + 0x40);
      dVar23 = (double)*(float *)((int)pvVar4 + 0x54);
      dVar33 = 0.0;
      *(undefined4 *)((int)pvVar4 + 0x40) = 0;
      *(undefined4 *)((int)pvVar4 + 0x54) = 0;
      MB_UpdateNavMove
                (0x3ff0000000000000,moby,(MobyInstance *)((int)pvVar4 + 0x30),point,auStack_230);
      *(float *)((int)pvVar4 + 0x40) = (float)dVar30;
      *(float *)((int)pvVar4 + 0x54) = (float)dVar23;
      (moby->pos).z = local_118;
      dVar23 = (double)FUN_005e8548(auStack_120,lVar22);
      if (dVar23 <= 0.004999999888241291) {
        *(undefined4 *)((int)pvVar4 + 0x284) = 0;
        FUN_005e7e98(lVar22,auStack_120);
      }
      else {
        FUN_005e81f0(auStack_110,lVar22,auStack_120);
        dVar23 = (double)FUN_005e8030(auStack_110);
        if (dVar23 < 0.25) {
          FUN_005e7f98(auStack_110,auStack_110);
        }
        FUN_005e7e98(lVar22,auStack_120);
        dVar30 = (double)(g_FrameTime * 3.0);
        dVar23 = (double)FUN_005e8030(auStack_110);
        local_bc[0] = (float)-dVar23;
        fVar37 = AccelDelt((float)dVar33,DAT_0071f40c * 0.025,DAT_0071f40c * 0.3,
                                     (float)dVar30,local_bc,0x720000,(float *)((int)pvVar4 + 0x284))
        ;
        dVar30 = (double)FUN_005e8030((double)fVar37,auStack_110);
        dVar23 = (double)*(float *)((int)pvVar4 + 0x284);
        if (dVar30 < (double)*(float *)((int)pvVar4 + 0x284)) {
          *(float *)((int)pvVar4 + 0x284) = (float)dVar30;
          dVar23 = dVar30;
        }
        if (dVar23 < dVar30) {
          FUN_005e7f98(auStack_110,auStack_110);
        }
        FUN_005e7f54(lVar22,lVar22,auStack_110);
      }
      if (moby->state != '\t') {
        if (iVar14 == 0) {
          dVar33 = (double)(moby->pos).z;
          iVar14 = 0;
          dVar30 = 0.0009765625;
          dVar23 = 0.5235987901687622;
          do {
            FUN_005e7e98(auStack_100,lVar22);
            local_f8 = local_f8 + *(float *)((int)pvVar4 + 0x34);
            dVar27 = (double)FastIntToDouble(*(undefined4 *)((int)pvVar4 + 0x30));
            iVar16 = CollSphere((double)(float)(dVar27 * dVar30),auStack_100);
            if (iVar16 == 0) break;
            dVar27 = (double)g_CollOutput.normal.z;
            uVar31 = FUN_005e7ebc(0xa10980);
            dVar27 = (double)FUN_005e8338(dVar27,uVar31);
            if (dVar23 < dVar27) {
              FUN_005e7e98(lVar22,0xa10970);
              (moby->pos).z = (moby->pos).z - *(float *)((int)pvVar4 + 0x34);
            }
            iVar14 = iVar14 + 1;
          } while (iVar14 < 6);
          (moby->pos).z = (float)dVar33;
          dVar23 = (double)GetGroundZ(0x3fe0000000000000,lVar22,0);
          if (*(float *)((int)pvVar4 + 0x3c) <= ABS((float)(dVar28 - dVar23))) {
            (moby->pos).x = (float)dVar36;
            (moby->pos).y = (float)dVar35;
            (moby->pos).z = (float)dVar28;
            (moby->pos).w = (float)dVar34;
            *(undefined4 *)((int)pvVar4 + 0x284) = 0;
          }
        }
        fVar37 = -(DAT_0071f418 * 7.0 - *(float *)((int)pvVar4 + 0x48));
        *(float *)((int)pvVar4 + 0x48) = fVar37;
        if (fVar37 < g_FrameTime * -8.0) {
          *(float *)((int)pvVar4 + 0x48) = g_FrameTime * -8.0;
        }
        dVar30 = 0.25;
        (moby->pos).z = (moby->pos).z + 0.25;
        dVar23 = (double)GetGroundZ(0x3fe0000000000000,lVar22,0);
        fVar37 = (float)((double)(moby->pos).z - dVar30);
        dVar30 = (double)fVar37;
        (moby->pos).z = fVar37;
        if (dVar23 <= dVar30) {
          if ((dVar23 < dVar30) &&
             (fVar37 = (float)(dVar30 + (double)*(float *)((int)pvVar4 + 0x48)),
             (moby->pos).z = fVar37, (double)fVar37 < dVar23)) {
            (moby->pos).z = (float)dVar23;
          }
        }
        else {
          AccelDelt((float)dVar23,DAT_0071f40c * 0.04,DAT_0071f40c * 0.3,
                              g_FrameTime * 1.5,&(moby->pos).z,0x492ccc,
                              (float *)((int)pvVar4 + 0x288));
          *(undefined4 *)((int)pvVar4 + 0x48) = 0;
        }
      }
      fVar6 = (moby->pos).z;
      uVar15 = (int)fVar6 >> 0x1f;
      iVar14 = (uVar15 >> 1 ^ (uint)fVar6) - uVar15;
      if ((((moby->pos).z < *(float *)((int)pvVar4 + 0xe8) - 5.0) ||
          (fVar6 = (moby->pos).x, uVar15 = (int)fVar6 >> 0x1f,
          iVar16 = (uVar15 >> 1 ^ (uint)fVar6) - uVar15, iVar16 < 0x40000000)) ||
         ((0x447f4000 < iVar16 ||
          (((fVar6 = (moby->pos).y, uVar15 = (int)fVar6 >> 0x1f,
            iVar16 = (uVar15 >> 1 ^ (uint)fVar6) - uVar15,
            0x447f4000 < iVar16 || iVar16 < 0x40000000 || (iVar14 < 0x40000000)) ||
           (0x447f4000 < iVar14)))))) {
        FUN_005e7e98(lVar22,(int)pvVar4 + 0xe0);
        moby->state = '\x04';
        return;
      }
    }
    pMVar21 = (MobyInstance *)0x0;
    if ((g_CollOutput.pMoby != (MobyInstance *)0x0) && (0 < g_CollOutput.poly)) {
      pMVar21 = g_CollOutput.pMoby;
    }
    *(MobyInstance **)((int)pvVar4 + 0x19c) = pMVar21;
    local_210 = (moby->pos).x;
    local_20c = (moby->pos).y;
    local_204 = (moby->pos).w;
    local_1f8 = (moby->pos).z;
    local_208 = local_1f8 - 2.0;
    if (local_208 < 0.5) {
      local_208 = 0.5;
    }
    local_1f8 = local_1f8 + 1.0;
    local_200 = local_210;
    local_1fc = local_20c;
    local_1f4 = local_204;
    iVar14 = CollLine(&local_200,&local_210,0,lVar10,0);
    if (((iVar14 != 0) && (g_CollOutput.pMoby != (MobyInstance *)0x0)) &&
       (((g_CollOutput.pMoby)->oClass == GADGEBOT_0359 || (g_CollOutput.pMoby)->oClass == PLATFORM_0409
        || (bVar17 = MB_isCrate(g_CollOutput.pMoby), bVar17)))) {
      (moby->pos).x = (float)dVar36;
      (moby->pos).y = (float)dVar35;
      (moby->pos).z = (float)dVar28;
      (moby->pos).w = (float)dVar34;
    }
    if ((moby->enabled != '\0') && (dVar23 = (double)FUN_005e8548(lVar22,0x951500), dVar23 < 17.0))
    {
      MB_SetZBoundsFromGround(lVar10);
      moby->shadow = '\r';
    }
    if (moby->enabled != '\0') {
      M857_00490cb8(lVar10);
    }
    *(undefined4 *)((int)pvVar4 + 0x2f0) = *(undefined4 *)((int)pvVar4 + 0x2e0);
    *(undefined4 *)((int)pvVar4 + 0x2f4) = *(undefined4 *)((int)pvVar4 + 0x2e4);
    *(undefined4 *)((int)pvVar4 + 0x2f8) = *(undefined4 *)((int)pvVar4 + 0x2e8);
    *(undefined4 *)((int)pvVar4 + 0x2fc) = *(undefined4 *)((int)pvVar4 + 0x2ec);
    *(f32 *)((int)pvVar4 + 0x2e0) = (moby->pos).x;
    *(f32 *)((int)pvVar4 + 0x2e4) = (moby->pos).y;
    *(f32 *)((int)pvVar4 + 0x2e8) = (moby->pos).z;
    *(f32 *)((int)pvVar4 + 0x2ec) = (moby->pos).w;
  }
  return;
}


