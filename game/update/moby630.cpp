// game/update/moby630.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 7 functions, 0x3efa94-0x3f0074
#include "game/update/moby630.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/sound.h"
#include "game/update/moby849.h"
#include "idol/fastfunc.h"

// 0x03efa94 (0x58 bytes)
void M630_003efa94(MobyInstance *param_1)

{
  undefined8 uVar1;
  
  uVar1 = M849_MB_Sucking(param_1);
  if ((int)uVar1 == 0) {
    if (param_1->state == '\a') {
      param_1->state = '\x01';
    }
  }
  else {
    param_1->state = '\a';
  }
  return;
}


// 0x03efaec (0x58 bytes)
void M630_003efaec(int param_1)

{
  int iVar1;
  
  iVar1 = M849_0048aa70();
  if (iVar1 == 0) {
    if (*(char *)(param_1 + 0x20) == '\a') {
      *(undefined1 *)(param_1 + 0x20) = 1;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x20) = 7;
  }
  return;
}


// 0x03efb44 (0xd0 bytes)
undefined8
M630_003efb44
          (undefined8 param_1,MobyInstance *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar2;
  undefined8 uVar1;
  
  iVar2 = FUN_00486828();
  uVar1 = M849_0048acb8(param_1,param_2,param_3,param_4);
  if ((int)uVar1 == 0) {
    if (param_2->state == '\a') {
      param_2->state = '\x01';
    }
  }
  else {
    param_2->state = '\a';
  }
  if ((iVar2 != 0) && (*(short *)(iVar2 + 0x68) == 6)) {
    PlayMobySound(2,0,param_2);
  }
  return uVar1;
}


// 0x03efc14 (0x38 bytes)
void M630_003efc14(int param_1)

{
  M849_0048afe8();
  *(undefined1 *)(param_1 + 0x20) = 7;
  return;
}


// 0x03efc4c (0x40 bytes)
longlong M630_003efc4c(int param_1)

{
  longlong lVar1;
  
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = (ulonglong)*(uint *)(param_1 + 0x78) + 0x60;
    lVar1 = lVar1 + (ZERO_MASK(*(uint *)(param_1 + 0x78)) & -lVar1);
  }
  return lVar1;
}


// 0x03efc8c (0x14 bytes)
void M630_003efc8c(void)

{
  DAT_00854310 = 0x10000;
  return;
}


// 0x03efce0 (0x394 bytes)
/* Moby 630 */

void UpdateMoby_630(MobyInstance *moby)

{
  float fVar1;
  int *piVar2;
  MobyInstance *pMVar3;
  longlong lVar4;
  int iVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
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
  GPiece<24> local_b0;
  
  pMVar3 = g_MobyInstance;
  lVar4 = (longlong)(int)moby;
  piVar2 = (int *)moby->pVar;
  iVar5 = *piVar2;
  if (iVar5 != -1) {
    fVar1 = (float)piVar2[3];
    if (moby->state == '\0') {
      moby->state = '\x01';
      fVar1 = (float)piVar2[1] * 0.017453292;
      piVar2[3] = (int)fVar1;
    }
    dVar6 = (double)FastWrapRot
                              (fVar1,(float)piVar2[2] * 0.017453292 * g_FrameTime);
    piVar2[3] = (int)(float)dVar6;
    dVar24 = 3.141592502593994;
    dVar23 = -3.141592502593994;
    dVar22 = -0.16666656732559204;
    dVar21 = 0.008333025500178337;
    dVar20 = -0.0001980741071747616;
    dVar19 = 2.601886990305502e-06;
    dVar9 = (double)(float)(3.141592502593994 - dVar6);
    if (dVar6 - (double)(float)(3.141592502593994 - dVar6) < 0.0) {
      dVar9 = dVar6;
    }
    dVar18 = (double)pMVar3[iVar5].pos.x;
    dVar17 = (double)pMVar3[iVar5].pos.y;
    dVar7 = (double)(float)(-3.141592502593994 - dVar6);
    if ((double)(float)(-3.141592502593994 - dVar6) - dVar9 < 0.0) {
      dVar7 = dVar9;
    }
    dVar9 = (double)(float)(dVar7 * dVar7);
    dVar10 = (double)(float)(dVar9 * (double)(float)(dVar9 * dVar7));
    dVar6 = (double)(float)(dVar9 * dVar10);
    dVar6 = (double)(((float)(dVar9 * dVar6) * 2.601887e-06 +
                     (float)(dVar6 * -0.0001980741071747616 +
                            (double)(float)(dVar10 * 0.008333025500178337 +
                                           (double)(float)((double)(float)(dVar9 * dVar7) *
                                                           -0.16666656732559204 + dVar7)))) *
                    0.7853982);
    dVar9 = (double)(float)(3.141592502593994 - dVar6);
    if (dVar6 - (double)(float)(3.141592502593994 - dVar6) < 0.0) {
      dVar9 = dVar6;
    }
    dVar7 = (double)(float)(-3.141592502593994 - dVar6);
    if ((double)(float)(-3.141592502593994 - dVar6) - dVar9 < 0.0) {
      dVar7 = dVar9;
    }
    dVar16 = (double)pMVar3[iVar5].pos.z;
    dVar15 = (double)pMVar3[iVar5].pos.w;
    dVar14 = 1.5707963705062866;
    dVar10 = (double)(float)(dVar7 * dVar7);
    dVar11 = (double)(float)(dVar10 * (double)(float)(dVar10 * dVar7));
    dVar9 = (double)(float)(dVar10 * dVar11);
    dVar13 = (double)((float)(dVar10 * dVar9) * 2.601887e-06 +
                     (float)(dVar9 * -0.0001980741071747616 +
                            (double)(float)(dVar11 * 0.008333025500178337 +
                                           (double)(float)((double)(float)(dVar10 * dVar7) *
                                                           -0.16666656732559204 + dVar7))));
    dVar9 = (double)FastWrapRot(pMVar3[iVar5].rotation.z,1.5707964);
    dVar11 = 1.570796251296997;
    dVar7 = (double)(float)(dVar9 + 1.570796251296997);
    dVar10 = 7.0;
    dVar9 = (double)(float)(dVar24 - dVar7);
    if (dVar7 - (double)(float)(dVar24 - dVar7) < 0.0) {
      dVar9 = dVar7;
    }
    dVar8 = (double)(float)(dVar23 - dVar7);
    if ((double)(float)(dVar23 - dVar7) - dVar9 < 0.0) {
      dVar8 = dVar9;
    }
    dVar9 = (double)(float)(dVar8 * dVar8);
    dVar7 = (double)(float)(dVar9 * (double)(float)(dVar9 * dVar8));
    dVar12 = (double)(float)(dVar9 * dVar7);
    dVar9 = (double)(float)((double)((float)((double)(float)(dVar9 * dVar12) * dVar19 +
                                            (double)(float)(dVar12 * dVar20 +
                                                           (double)(float)(dVar7 * dVar21 +
                                                                          (double)(float)((double)(
                                                  float)(dVar9 * dVar8) * dVar22 + dVar8)))) * 7.0)
                            * dVar13 + dVar18);
    dVar7 = (double)FastWrapRot(pMVar3[iVar5].rotation.z,(float)dVar14);
    dVar6 = (double)(float)(dVar6 + dVar11);
    (moby->pos).x = (float)dVar9;
    (moby->pos).w = (float)dVar15;
    dVar9 = (double)(float)(dVar24 - dVar7);
    if (dVar7 - (double)(float)(dVar24 - dVar7) < 0.0) {
      dVar9 = dVar7;
    }
    dVar18 = (double)(float)(dVar24 - dVar6);
    if (dVar6 - (double)(float)(dVar24 - dVar6) < 0.0) {
      dVar18 = dVar6;
    }
    dVar24 = (double)(float)(dVar23 - dVar7);
    if ((double)(float)(dVar23 - dVar7) - dVar9 < 0.0) {
      dVar24 = dVar9;
    }
    dVar7 = (double)(float)(dVar24 * dVar24);
    dVar9 = (double)(float)(dVar23 - dVar6);
    if ((double)(float)(dVar23 - dVar6) - dVar18 < 0.0) {
      dVar9 = dVar18;
    }
    dVar23 = (double)(float)(dVar9 * dVar9);
    dVar18 = (double)(float)(dVar7 * (double)(float)(dVar7 * dVar24));
    dVar14 = (double)(float)(dVar7 * dVar18);
    dVar11 = (double)(float)(dVar23 * (double)(float)(dVar23 * dVar9));
    dVar6 = (double)(float)(dVar23 * dVar11);
    (moby->pos).y =
         (float)((double)(float)((double)(float)((double)(float)(dVar7 * dVar14) * dVar19 +
                                                (double)(float)(dVar14 * dVar20 +
                                                               (double)(float)(dVar18 * dVar21 +
                                                                              (double)(float)((
                                                  double)(float)(dVar7 * dVar24) * dVar22 + dVar24))
                                                  )) * dVar10) * dVar13 + dVar17);
    (moby->pos).z =
         -(float)((double)(float)((double)(float)(dVar23 * dVar6) * dVar19 +
                                 (double)(float)(dVar6 * dVar20 +
                                                (double)(float)(dVar11 * dVar21 +
                                                               (double)(float)((double)(float)(
                                                  dVar23 * dVar9) * dVar22 + dVar9)))) * dVar10 -
                 dVar16);
    iVar5 = STUB_00055ac0_RET_0(lVar4 + 0x10,0x400,1,lVar4,0);
    if (iVar5 != 0) {
      MB_genericExplosion
                (0x4008000000000000,0x3ff0000000000000,0x4000000000000000,0x3ff0000000000000,
                 0x4022000000000000,0x3ff0000000000000,0x402e000000000000,lVar4,local_b0,
                 lVar4 + 0x10,0,0xffffffffffffffff,5,2,4);
      DeleteMoby(moby);
    }
  }
  return;
}


