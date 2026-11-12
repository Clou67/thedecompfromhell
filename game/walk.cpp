// game/walk.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 15 functions, 0x175558-0x17b214
#include <math.h>
#include <stdio.h>
#include "game/walk.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "idol/fastfunc.h"
#include "idol/mathfunc.h"
#include "idol/xUnk.h"

// 0x0175558 (0x14 bytes)
void SECTION_HEADER_WALK(void)

{
  DAT_0073a82c = 0x10000;
  return;
}


// 0x0175580 (0xc4 bytes)
double GetGroundZ_Unused(void)

{
  float fVar1;
  int iVar2;
  GPiece<16> local_30;
  GPiece<24> local_20;
  
  iVar2 = CollLine(local_20,local_30,2,0,0);
  fVar1 = 0.0;
  if (iVar2 != 0) {
    fVar1 = g_CollOutput.ip.z;
  }
  return (double)fVar1;
}


// 0x0175644 (0x34 bytes)
void walk_SetupTwistVals(MobyInstance *param_1,w_2legData *pLD)

{
  pLD->legs[0].twistLow = -0.19634955;
  pLD->legs[1].twistHigh = 0.19634955;
  pLD->legs[0].twistHigh = 1.5707964;
  pLD->legs[1].twistLow = -1.5707964;
  return;
}


// 0x0175688 (0x488 bytes)
// inlined: FastAtan2 @0x175940
// strings: 0065405c: '\n\nInvalid anim detected on pLD->anims[%d]->anim in walk_init2LegAnim.\nSee walk.h and check your initialization function for moby class %d\n' | 006540ec: 'sizeof(w_2legData) = %d bytes \n'

int32_t walk_init2LegAnim(MobyInstance *moby,w_2legData *pLD)

{
  longlong lVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  uint uVar9;
  ulonglong *puVar10;
  int *piVar11;
  ulonglong uVar12;
  int *piVar14;
  int iVar15;
  longlong lVar13;
  int32_t iVar16;
  int iVar18;
  longlong lVar17;
  float *pfVar19;
  longlong lVar20;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  w_2legData *pwVar21;
  ulonglong unaff_r29;
  ulonglong uVar22;
  int iVar23;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar24;
  double dVar25;
  double dVar26;
  ulonglong in_f30;
  double dVar27;
  ulonglong in_f31;
  double dVar28;
  float fVar29;
  
  uVar12 = ZEXT48(&stack0x00000000);
  lVar1 = uVar12 - 0x140;
  puVar10 = (ulonglong *)lVar1;
  *puVar10 = uVar12;
  puVar10[0x2a] = in_LR;
  puVar10[0x26] = in_f30;
  puVar10[0x27] = in_f31;
  puVar10[0x23] = unaff_r29;
  uVar22 = 0;
  puVar10[0x1f] = unaff_r25;
  puVar10[0x25] = unaff_r31;
  puVar10[0x21] = unaff_r27;
  puVar10[0x24] = unaff_r30;
  puVar10[0x20] = unaff_r26;
  dVar28 = 0.0;
  puVar10[0x22] = unaff_r28;
  dVar27 = 2.0;
  do {
    piVar11 = (int *)((int)pLD->anims + (int)((uVar22 & 0xffffffff) << 2));
    piVar14 = (int *)*piVar11;
    if (*piVar14 < 0) {
      printf("\n\nInvalid anim detected on pLD->anims[%d]->anim in walk_init2LegAnim.\nSee walk.h and check your initialization function for moby class %d\n"
                   ,uVar22,moby->oClass);
      trapWord(0x1f,in_LR,in_LR);
      piVar14 = (int *)*piVar11;
    }
    fVar29 = MB_GetAnimSeqLength((uint)moby->mClass,*piVar14);
    piVar14 = (int *)*piVar11;
    piVar14[3] = (int)fVar29;
    fVar29 = MB_GetAnimSeqTriggerLength((uint)moby->mClass,*piVar14);
    iVar23 = *piVar11;
    fVar29 = fVar29 - *(float *)(iVar23 + 0xc);
    *(float *)(iVar23 + 0x10) = fVar29;
    if ((double)fVar29 != dVar28) {
      iVar18 = 0;
      iVar15 = iVar23;
      do {
        uVar8 = (int)*(uint *)(iVar15 + 0x40) >> 0x1f;
        uVar9 = (int)*(uint *)(iVar15 + 0x48) >> 0x1f;
        fVar29 = *(float *)(iVar15 + 0x48);
        if ((int)((uVar9 >> 1 ^ *(uint *)(iVar15 + 0x48)) - uVar9) <
            (int)((uVar8 >> 1 ^ *(uint *)(iVar15 + 0x40)) - uVar8)) {
          fVar29 = fVar29 + *(float *)(iVar23 + 0x10);
        }
        uVar8 = (int)*(uint *)(iVar15 + 0x28) >> 0x1f;
        uVar9 = (int)*(uint *)(iVar15 + 0x30) >> 0x1f;
        *(float *)(iVar15 + 0x38) = fVar29 - *(float *)(iVar15 + 0x40);
        fVar29 = *(float *)(iVar15 + 0x30);
        if ((int)((uVar9 >> 1 ^ *(uint *)(iVar15 + 0x30)) - uVar9) <
            (int)((uVar8 >> 1 ^ *(uint *)(iVar15 + 0x28)) - uVar8)) {
          fVar29 = fVar29 + *(float *)(iVar23 + 0x10);
        }
        iVar18 = iVar18 + 1;
        *(float *)(iVar15 + 0x20) = fVar29 - *(float *)(iVar15 + 0x28);
        iVar15 = iVar15 + 4;
      } while (iVar18 < 2);
      *(float *)(iVar23 + 8) =
           *(float *)(iVar23 + 4) /
           (animationSpeed * (float)((double)*(float *)(iVar23 + 0x10) * dVar27));
    }
    iVar23 = (int)uVar22 + 1;
    uVar22 = (ulonglong)iVar23;
  } while (iVar23 < 0xd);
  bVar2 = pLD->legs[0].jiHeel;
  *(uint *)((int)puVar10 + 0xb4) = (uint)(byte)pLD->legs[0].jiFoot;
  bVar3 = pLD->legs[1].jiFoot;
  *(uint *)(puVar10 + 0x17) = (uint)bVar2;
  bVar2 = pLD->legs[1].jiHeel;
  *(uint *)((int)puVar10 + 0xbc) = (uint)bVar3;
  bVar3 = pLD->moveJoint1;
  *(uint *)(puVar10 + 0x18) = (uint)bVar2;
  bVar2 = pLD->moveJoint2;
  *(uint *)((int)puVar10 + 0xc4) = (uint)bVar3;
  *(uint *)(puVar10 + 0x19) = (uint)bVar2;
  GetMobyJointsWorldPos(moby,6,uVar12 - 0x8c,pLD);
  iVar23 = 0;
  pwVar21 = pLD;
  do {
    GetBoneTransformations(moby,pwVar21->legs[0].jiFoot,uVar12 - 0xd0);
    uVar8 = *(uint *)(puVar10 + 0x10);
    uVar9 = *(uint *)((int)puVar10 + 0x84);
    fVar29 = *(float *)((int)puVar10 + 0x84);
    dVar25 = ABS((double)*(float *)(puVar10 + 0x10));
    pwVar21->legs[0].hrAct = 0.0;
    dVar27 = ABS((double)fVar29);
    pwVar21->legs[0].arAct = 0.0;
    *(float *)(puVar10 + 0x16) = (float)(dVar25 - dVar27);
    cVar4 = pwVar21->legs[0].MHip.state;
    uVar22 = (ulonglong)(uVar8 >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar10 + 0x16) >> 0x1e) & 2 | (ulonglong)(uVar9 >> 0x1d) & 4;
    dVar26 = dVar25;
    if ((double)*(float *)(puVar10 + 0x16) - dVar28 < 0.0) {
      dVar26 = dVar27;
    }
    fVar7 = *(float *)(&g_atanQuadrantTable + (int)(uVar22 << 2));
    fVar29 = *(float *)(((uint)(uVar22 << 2) | 0x735900) + 4);
    if ((double)*(float *)(puVar10 + 0x16) - dVar28 < 0.0) {
      dVar27 = dVar25;
    }
    dVar25 = dVar28;
    if (dVar28 < dVar26) {
      lVar13 = uVar12 - 0x130;
      lVar17 = uVar12 - 0x74;
      lVar20 = uVar12 - 100;
      lVar24 = 2;
      fVar5 = (float)(dVar27 - dVar26) / (float)(dVar27 + dVar26);
      fVar6 = fVar5 * fVar5;
      *(float *)(puVar10 + 0x1b) = fVar5;
      *(float *)(puVar10 + 0x1a) = fVar5;
      *(float *)((int)puVar10 + 0xd4) = fVar5;
      *(float *)((int)puVar10 + 0xcc) = fVar5;
      fVar5 = fVar6 * fVar6;
      *(float *)(puVar10 + 0x1a) = *(float *)(puVar10 + 0x1a) * fVar6;
      *(float *)((int)puVar10 + 0xd4) = *(float *)((int)puVar10 + 0xd4) * fVar5;
      *(float *)(puVar10 + 0x1b) = *(float *)(puVar10 + 0x1b) * fVar5 * fVar6;
      do {
        *(float *)((int)lVar13 + 0xcc) = *(float *)((int)lVar13 + 0xbc) * fVar5 * fVar5;
        iVar15 = (int)lVar17;
        lVar13 = lVar13 + 8;
        lVar17 = lVar17 + 8;
        *(float *)((int)lVar20 + 4) = *(float *)(iVar15 + 4) * fVar5 * fVar5;
        lVar20 = lVar20 + 8;
        lVar24 = lVar24 + -1;
      } while (lVar24 != 0);
      lVar24 = 4;
      lVar20 = uVar12 - 0x74;
      pfVar19 = (float *)&DAT_007358e0;
      lVar13 = lVar1;
      lVar17 = lVar20;
      do {
        fVar5 = *pfVar19;
        fVar6 = pfVar19[1];
        pfVar19 = pfVar19 + 2;
        *(float *)((int)lVar13 + 0xcc) = *(float *)((int)lVar13 + 0xcc) * fVar5;
        lVar13 = lVar13 + 8;
        *(float *)((int)lVar17 + 4) = *(float *)((int)lVar17 + 4) * fVar6;
        lVar17 = lVar17 + 8;
        lVar24 = lVar24 + -1;
      } while (lVar24 != 0);
      lVar17 = 2;
      lVar13 = lVar1;
      dVar27 = dVar28;
      do {
        iVar15 = (int)lVar13;
        lVar13 = lVar13 + 0x10;
        iVar18 = (int)lVar20;
        lVar20 = lVar20 + 0x10;
        dVar27 = (double)((float)(dVar27 + (double)*(float *)(iVar15 + 0xcc)) +
                          *(float *)(iVar18 + 4) + *(float *)(iVar18 + 8) + *(float *)(iVar18 + 0xc)
                         );
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
      dVar25 = (double)((float)(dVar27 + 0.7853981852531433) * fVar7 + fVar29);
    }
    pwVar21->legs[0].frDest = (float)dVar25;
    if (cVar4 == '\0') {
      AttachManipulator(moby,(uint)(byte)pwVar21->legs[0].jiHip,&pwVar21->legs[0].MHip);
    }
    if (pwVar21->legs[0].MAnkle.state == '\0') {
      AttachManipulator
                (moby,(uint)(byte)pwVar21->legs[0].jiAnkle,&pwVar21->legs[0].MAnkle);
    }
    iVar23 = iVar23 + 1;
    pwVar21 = (w_2legData *)&pwVar21->idle;
  } while (iVar23 < 2);
  pLD->onground = '\x05';
  pLD->state = '\0';
  pLD->yrot = 0.0;
  pLD->yrSpeed = 0.0;
  pLD->speed = 0.0;
  pLD->angVel = 0.0;
  pLD->collZAdj = 0.0;
  pLD->zVel = 0.0;
  pLD->stepZ = 0.0;
  pLD->counter = 0;
  pLD->flags = 0;
  iVar16 = printf("sizeof(w_2legData) = %d bytes \n",0x250);
  return iVar16;
}


// 0x0175b18 (0x188 bytes)
uint Walk_GetLegRangeMask(double height,w_2legAnim *pLA)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  w_2legAnim *pwVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  bool bVar9;
  bool bVar10;
  
  uVar6 = 0;
  iVar5 = 0;
  uVar8 = 1;
  pwVar4 = pLA;
  do {
    uVar7 = uVar8;
    uVar1 = (int)pwVar4->footDown[0] >> 0x1f;
    uVar2 = (int)pwVar4->footUp[0] >> 0x1f;
    bVar10 = (double)pwVar4->footDown[0] <= height;
    bVar9 = height <= (double)pwVar4->footUp[0];
    if ((int)((uVar2 >> 1 ^ (uint)pwVar4->footUp[0]) - uVar2) <
        (int)((uVar1 >> 1 ^ (uint)pwVar4->footDown[0]) - uVar1)) {
      if ((bVar10) || (bVar9)) {
        uVar6 = (uint)uVar7 | uVar6;
      }
    }
    else if ((bVar10) && (bVar9)) {
      uVar6 = (uint)uVar7 | uVar6;
    }
    uVar1 = (int)pwVar4->heelDown[0] >> 0x1f;
    uVar2 = (int)pwVar4->heelUp[0] >> 0x1f;
    bVar10 = (double)pwVar4->heelDown[0] <= height;
    bVar9 = height <= (double)pwVar4->heelUp[0];
    uVar3 = (uint)(uVar7 << 1);
    if ((int)((uVar2 >> 1 ^ (uint)pwVar4->heelUp[0]) - uVar2) <
        (int)((uVar1 >> 1 ^ (uint)pwVar4->heelDown[0]) - uVar1)) {
      if ((bVar10) || (bVar9)) {
        uVar6 = uVar3 | uVar6;
      }
    }
    else if ((bVar10) && (bVar9)) {
      uVar6 = uVar3 | uVar6;
    }
    iVar5 = iVar5 + 1;
    uVar8 = (uVar7 & 0x3fffffff) << 2;
    pwVar4 = (w_2legAnim *)&pwVar4->stride;
  } while (iVar5 < 2);
  if (uVar6 == 0) {
    if ((height < (double)pLA->move1Reset) ||
       ((double)(float)((double)pLA->move1Reset + 1.0) < height)) {
      uVar6 = (uint)uVar8;
    }
    if ((height < (double)pLA->move2Reset) ||
       ((double)(float)((double)pLA->move2Reset + 1.0) < height)) {
      uVar6 = uVar6 | (uint)(uVar7 << 3);
    }
  }
  return uVar6;
}


// 0x0175ca0 (0x74 bytes)
ulonglong Walk_GetLegRangeMaskForAnim(undefined8 param_1,int param_2,int param_3)

{
  uint *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  
  lVar2 = 0;
  lVar5 = 0xd;
  iVar4 = param_3;
  do {
    puVar1 = (uint *)(iVar4 + 0x70);
    iVar4 = iVar4 + 4;
    lVar2 = lVar2 + (ZERO_MASK(((uint)*(byte *)(param_2 + 0x52) - *(int *)*puVar1)) &
                    ZEXT48((int *)*puVar1) - lVar2);
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  if ((w_2legAnim *)lVar2 == (w_2legAnim *)0x0) {
    uVar3 = (ulonglong)*(byte *)(param_3 + 0xb6);
  }
  else {
    uVar3 = Walk_GetLegRangeMask(param_1,(w_2legAnim *)lVar2);
  }
  return uVar3;
}


// 0x0175d68 (0x8a8 bytes)
// inlined: FastAtan2 @0x176190, FastAtan2 @0x1763a4
undefined8 Walk_SolveLegGroundContact(MobyInstance *moby,w_2legData *pLd)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  ushort uVar5;
  uint uVar6;
  ulonglong *puVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  bool bVar12;
  ulonglong uVar13;
  int iVar15;
  longlong lVar14;
  float *pfVar17;
  longlong lVar16;
  longlong lVar18;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  w_2legData *pwVar19;
  ulonglong unaff_r26;
  int iVar20;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  undefined8 uVar21;
  ulonglong unaff_r29;
  ulonglong uVar22;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar23;
  longlong lVar24;
  double dVar25;
  double dVar26;
  ulonglong in_f21;
  double dVar27;
  ulonglong in_f22;
  double dVar28;
  ulonglong in_f23;
  double dVar29;
  ulonglong in_f24;
  double dVar30;
  ulonglong in_f25;
  double dVar31;
  ulonglong in_f26;
  double dVar32;
  ulonglong in_f27;
  ulonglong in_f28;
  double dVar33;
  ulonglong in_f29;
  double dVar34;
  ulonglong in_f30;
  double dVar35;
  ulonglong in_f31;
  double dVar36;
  
  uVar13 = ZEXT48(&stack0x00000000);
  lVar24 = uVar13 - 400;
  puVar7 = (ulonglong *)lVar24;
  *puVar7 = uVar13;
  puVar7[0x34] = in_LR;
  puVar7[0x27] = in_f21;
  puVar7[0x28] = in_f22;
  puVar7[0x29] = in_f23;
  puVar7[0x2a] = in_f24;
  puVar7[0x2b] = in_f25;
  puVar7[0x2c] = in_f26;
  puVar7[0x2d] = in_f27;
  puVar7[0x2e] = in_f28;
  puVar7[0x2f] = in_f29;
  puVar7[0x30] = in_f30;
  puVar7[0x31] = in_f31;
  puVar7[0x24] = unaff_r29;
  uVar22 = 1;
  puVar7[0x23] = unaff_r28;
  puVar7[0x22] = unaff_r27;
  puVar7[0x1f] = unaff_r24;
  uVar21 = 0;
  puVar7[0x26] = unaff_r31;
  bVar12 = false;
  puVar7[0x25] = unaff_r30;
  dVar27 = 0.0;
  uVar5 = pLd->flags;
  puVar7[0x21] = unaff_r26;
  puVar7[0x20] = unaff_r25;
  puVar7[0x1e] = unaff_r23;
  dVar32 = dVar27;
  dVar36 = dVar27;
  if ((uVar5 & 4) == 0) {
    iVar20 = 0;
    dVar31 = 2.5;
    dVar30 = 0.10000000149011612;
    dVar29 = 0.75;
    dVar28 = 4.0;
    dVar25 = dVar27;
    dVar33 = dVar27;
    dVar34 = dVar27;
    dVar35 = dVar27;
    pwVar19 = pLd;
    do {
      if (((uint)(byte)pLd->onground & (uint)uVar22) != 0) {
        fVar1 = pwVar19->fpos[0].m.x;
        *(float *)(puVar7 + 0xe) = fVar1;
        fVar2 = pwVar19->fpos[0].m.y;
        *(float *)((int)puVar7 + 0x74) = fVar2;
        dVar26 = (double)pwVar19->fpos[0].m.z;
        fVar3 = pwVar19->fpos[0].m.w;
        fVar4 = (float)(dVar26 - dVar31);
        *(float *)((int)puVar7 + 0x7c) = fVar3;
        *(float *)(puVar7 + 0xf) = fVar4;
        if ((double)fVar4 < dVar30) {
          *(undefined4 *)(puVar7 + 0xf) = 0x3dcccccd;
        }
        *(float *)(puVar7 + 0x10) = fVar1;
        *(float *)((int)puVar7 + 0x84) = fVar2;
        *(float *)((int)puVar7 + 0x8c) = fVar3;
        *(float *)(puVar7 + 0x11) = (float)(dVar26 + dVar29);
        iVar15 = CollLine(uVar13 - 0x110,uVar13 - 0x120,2,0,0);
        dVar26 = dVar32;
        if (iVar15 != 0) {
          dVar26 = (double)g_CollOutput.ip.z;
        }
        dVar25 = (double)(float)(dVar26 + dVar25);
        if ((dVar32 < dVar26) &&
           ((double)(float)(ABS((double)g_CollOutput.normal.x) + ABS((double)g_CollOutput.normal.y)) <
            ABS((double)g_CollOutput.normal.z))) {
          dVar33 = (double)(float)(dVar33 + (double)g_CollOutput.normal.x);
          dVar34 = (double)(float)(dVar34 + (double)g_CollOutput.normal.y);
          dVar35 = (double)(float)(dVar35 + (double)g_CollOutput.normal.z);
          dVar36 = (double)(float)(dVar36 + dVar28);
          dVar27 = (double)(float)(dVar27 + (double)(float)(dVar26 - (double)pwVar19->fpos[0].m.z));
        }
      }
      iVar20 = iVar20 + 2;
      uVar22 = (uVar22 & 0x3fffffff) << 2;
      pwVar19 = (w_2legData *)(pwVar19->fpos + 2);
    } while (iVar20 < 4);
    if ((dVar25 == dVar32) &&
       (dVar25 = (double)GetGroundZ(0x3fe0000000000000,(longlong)(int)moby + 0x10,0),
       dVar32 < dVar25)) {
      dVar36 = (double)(float)(dVar36 + dVar28);
      dVar27 = (double)(float)(dVar27 + (double)(float)(dVar25 - (double)(moby->pos).z));
    }
    dVar25 = dVar32;
    if (((dVar33 != dVar32) || (dVar34 != dVar32)) || (dVar35 != dVar32)) {
      fVar4 = (moby->rotation).z;
      fVar1 = fVar4 + 1.5707963;
      fVar2 = 3.1415925 - fVar4;
      if (fVar4 - (3.1415925 - fVar4) < 0.0) {
        fVar2 = fVar4;
      }
      fVar3 = 3.1415925 - fVar1;
      if (fVar1 - (3.1415925 - fVar1) < 0.0) {
        fVar3 = fVar1;
      }
      fVar8 = -3.1415925 - fVar4;
      if ((-3.1415925 - fVar4) - fVar2 < 0.0) {
        fVar8 = fVar2;
      }
      fVar4 = -3.1415925 - fVar1;
      if ((-3.1415925 - fVar1) - fVar3 < 0.0) {
        fVar4 = fVar3;
      }
      fVar1 = fVar8 * fVar8;
      fVar2 = fVar4 * fVar4;
      fVar10 = fVar1 * fVar1 * fVar8;
      fVar3 = fVar2 * fVar2 * fVar4;
      fVar11 = fVar1 * fVar10;
      fVar9 = fVar2 * fVar3;
      dVar29 = (double)(fVar1 * fVar11 * 2.601887e-06 +
                       fVar11 * -0.0001980741 +
                       fVar10 * 0.0083330255 + fVar1 * fVar8 * -0.16666657 + fVar8);
      dVar30 = (double)(fVar2 * fVar9 * 2.601887e-06 +
                       fVar9 * -0.0001980741 +
                       fVar3 * 0.0083330255 + fVar2 * fVar4 * -0.16666657 + fVar4);
      dVar31 = (double)(float)(dVar35 * dVar30 - (double)(float)(dVar33 * dVar32));
      dVar26 = (double)(float)(dVar34 * dVar32 - (double)(float)(dVar35 * dVar29));
      dVar29 = (double)(float)(dVar33 * dVar29 - (double)(float)(dVar34 * dVar30));
      fVar4 = (float)(dVar34 * dVar29 - (double)(float)(dVar35 * dVar31));
      fVar1 = (float)(dVar35 * dVar26 - (double)(float)(dVar33 * dVar29));
      fVar2 = (float)(dVar33 * dVar31 - (double)(float)(dVar34 * dVar26));
      dVar34 = ABS((double)fVar2);
      *(float *)((int)puVar7 + 0x9c) = fVar2;
      fVar4 = SQRT(fVar4 * fVar4 + fVar1 * fVar1);
      dVar35 = ABS((double)fVar4);
      *(float *)(puVar7 + 0x13) = fVar4;
      *(float *)(puVar7 + 0x14) = (float)(dVar35 - dVar34);
      uVar22 = (ulonglong)(*(uint *)(puVar7 + 0x13) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar7 + 0x14) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar7 + 0x9c) >> 0x1d) & 4;
      dVar33 = ABS((double)*(float *)(puVar7 + 0x13));
      if ((double)*(float *)(puVar7 + 0x14) - dVar32 < 0.0) {
        dVar33 = dVar34;
      }
      fVar1 = *(float *)(&g_atanQuadrantTable + (int)(uVar22 << 2));
      fVar4 = *(float *)(((uint)(uVar22 << 2) | 0x735900) + 4);
      dVar34 = ABS((double)*(float *)((int)puVar7 + 0x9c));
      if ((double)*(float *)(puVar7 + 0x14) - dVar32 < 0.0) {
        dVar34 = dVar35;
      }
      if (dVar32 < dVar33) {
        lVar14 = uVar13 - 0x180;
        lVar16 = uVar13 - 0xcc;
        lVar18 = uVar13 - 0xbc;
        lVar23 = 2;
        fVar2 = (float)(dVar34 - dVar33) / (float)(dVar34 + dVar33);
        fVar3 = fVar2 * fVar2;
        *(float *)(puVar7 + 0x1a) = fVar2;
        *(float *)(puVar7 + 0x19) = fVar2;
        *(float *)((int)puVar7 + 0xcc) = fVar2;
        *(float *)((int)puVar7 + 0xc4) = fVar2;
        fVar2 = fVar3 * fVar3;
        *(float *)(puVar7 + 0x19) = *(float *)(puVar7 + 0x19) * fVar3;
        *(float *)((int)puVar7 + 0xcc) = *(float *)((int)puVar7 + 0xcc) * fVar2;
        *(float *)(puVar7 + 0x1a) = *(float *)(puVar7 + 0x1a) * fVar2 * fVar3;
        do {
          *(float *)((int)lVar14 + 0xc4) = *(float *)((int)lVar14 + 0xb4) * fVar2 * fVar2;
          iVar20 = (int)lVar16;
          lVar14 = lVar14 + 8;
          lVar16 = lVar16 + 8;
          *(float *)((int)lVar18 + 4) = *(float *)(iVar20 + 4) * fVar2 * fVar2;
          lVar18 = lVar18 + 8;
          lVar23 = lVar23 + -1;
        } while (lVar23 != 0);
        lVar23 = 4;
        lVar18 = uVar13 - 0xcc;
        pfVar17 = (float *)&DAT_007358e0;
        lVar14 = lVar24;
        lVar16 = lVar18;
        do {
          fVar2 = *pfVar17;
          fVar3 = pfVar17[1];
          pfVar17 = pfVar17 + 2;
          *(float *)((int)lVar14 + 0xc4) = *(float *)((int)lVar14 + 0xc4) * fVar2;
          lVar14 = lVar14 + 8;
          *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar3;
          lVar16 = lVar16 + 8;
          lVar23 = lVar23 + -1;
        } while (lVar23 != 0);
        lVar16 = 2;
        lVar14 = lVar24;
        do {
          iVar20 = (int)lVar14;
          lVar14 = lVar14 + 0x10;
          iVar15 = (int)lVar18;
          lVar18 = lVar18 + 0x10;
          dVar25 = (double)((float)(dVar25 + (double)*(float *)(iVar20 + 0xc4)) +
                            *(float *)(iVar15 + 4) + *(float *)(iVar15 + 8) +
                           *(float *)(iVar15 + 0xc));
          lVar16 = lVar16 + -1;
        } while (lVar16 != 0);
        dVar25 = (double)((float)(dVar25 + 0.7853981852531433) * fVar1 + fVar4);
      }
    }
    pLd->yrot = (float)dVar25;
    if (0.785398006439209 < ABS(dVar25)) {
      uVar21 = 2;
    }
    if (((pLd->state == '\r') &&
        (uVar6 = (int)pLd->stepZ >> 0x1f, 0 < (int)((uVar6 >> 1 ^ (uint)pLd->stepZ) - uVar6))) &&
       ((pLd->onground & 0xfU) == 0)) {
      fVar1 = pLd->stepZ - (moby->pos).z;
      dVar34 = (double)fVar1;
      fVar4 = pLd->anims[7]->stride;
      dVar33 = ABS((double)pLd->anims[7]->stride);
      dVar35 = ABS(dVar34);
      *(float *)(puVar7 + 0x12) = fVar1;
      *(float *)((int)puVar7 + 0x94) = (float)(dVar33 - dVar35);
      uVar22 = (ulonglong)((uint)fVar4 >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar7 + 0x94) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar7 + 0x12) >> 0x1d) & 4;
      dVar25 = dVar33;
      if ((double)*(float *)((int)puVar7 + 0x94) - dVar32 < 0.0) {
        dVar25 = dVar35;
      }
      fVar4 = *(float *)(&g_atanQuadrantTable + (int)(uVar22 << 2));
      dVar35 = ABS((double)*(float *)(puVar7 + 0x12));
      if ((double)*(float *)((int)puVar7 + 0x94) - dVar32 < 0.0) {
        dVar35 = dVar33;
      }
      fVar1 = *(float *)(((uint)(uVar22 << 2) | 0x735900) + 4);
      dVar33 = dVar32;
      if (dVar32 < dVar25) {
        lVar14 = uVar13 - 0x180;
        lVar18 = uVar13 - 0xdc;
        lVar16 = uVar13 - 0xec;
        lVar23 = 2;
        fVar2 = (float)(dVar35 - dVar25) / (float)(dVar35 + dVar25);
        fVar3 = fVar2 * fVar2;
        *(float *)(puVar7 + 0x16) = fVar2;
        *(float *)(puVar7 + 0x15) = fVar2;
        *(float *)((int)puVar7 + 0xac) = fVar2;
        *(float *)((int)puVar7 + 0xa4) = fVar2;
        fVar2 = fVar3 * fVar3;
        *(float *)(puVar7 + 0x15) = *(float *)(puVar7 + 0x15) * fVar3;
        *(float *)((int)puVar7 + 0xac) = *(float *)((int)puVar7 + 0xac) * fVar2;
        *(float *)(puVar7 + 0x16) = *(float *)(puVar7 + 0x16) * fVar2 * fVar3;
        do {
          *(float *)((int)lVar14 + 0xa4) = *(float *)((int)lVar14 + 0x94) * fVar2 * fVar2;
          iVar20 = (int)lVar16;
          lVar16 = lVar16 + 8;
          lVar14 = lVar14 + 8;
          *(float *)((int)lVar18 + 4) = *(float *)(iVar20 + 4) * fVar2 * fVar2;
          lVar18 = lVar18 + 8;
          lVar23 = lVar23 + -1;
        } while (lVar23 != 0);
        lVar23 = 4;
        lVar18 = uVar13 - 0xec;
        pfVar17 = (float *)&DAT_007358e0;
        lVar14 = lVar24;
        lVar16 = lVar18;
        do {
          fVar2 = *pfVar17;
          fVar3 = pfVar17[1];
          pfVar17 = pfVar17 + 2;
          *(float *)((int)lVar14 + 0xa4) = *(float *)((int)lVar14 + 0xa4) * fVar2;
          lVar14 = lVar14 + 8;
          *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar3;
          lVar16 = lVar16 + 8;
          lVar23 = lVar23 + -1;
        } while (lVar23 != 0);
        lVar14 = 2;
        dVar25 = dVar32;
        do {
          iVar20 = (int)lVar24;
          iVar15 = (int)lVar18;
          lVar24 = lVar24 + 0x10;
          lVar18 = lVar18 + 0x10;
          dVar25 = (double)((float)(dVar25 + (double)*(float *)(iVar20 + 0xa4)) +
                            *(float *)(iVar15 + 4) + *(float *)(iVar15 + 8) +
                           *(float *)(iVar15 + 0xc));
          lVar14 = lVar14 + -1;
        } while (lVar14 != 0);
        dVar33 = (double)((float)(dVar25 + 0.7853981852531433) * fVar4 + fVar1);
      }
      if (ABS(-dVar33) < 0.5235987901687622) {
        bVar12 = true;
        dVar27 = (double)(float)(dVar27 + dVar34);
        dVar36 = (double)(float)(dVar36 + dVar28);
        pLd->yrot = (float)-dVar33;
      }
    }
  }
  else {
    dVar27 = (double)GetGroundZ(0x3fe0000000000000,(longlong)(int)moby + 0x10,0);
    dVar25 = (double)(moby->pos).z;
    if ((double)(float)(dVar27 - 0.05000000074505806) <= dVar25) {
      if ((-1 < (int)pLd->zVel) ||
         ((double)((float)(dVar27 + 0.10000000149011612) - pLd->zVel) <= dVar25)) {
        dVar27 = -1.0;
      }
      else {
        dVar27 = (double)(float)(dVar27 - dVar25);
      }
    }
    else {
      dVar27 = (double)(float)(dVar25 - dVar27);
    }
    pLd->yrot = (float)dVar32;
  }
  dVar25 = dVar27;
  if (dVar32 - dVar36 < 0.0) {
    dVar25 = (double)(float)(dVar27 / dVar36);
  }
  if (dVar36 - dVar32 < 0.0) {
    dVar25 = (double)(float)(dVar27 / dVar36);
  }
  if ((pLd->flags & 8U) == 0) {
    if (dVar25 <= -0.02500000037252903) {
      fVar4 = pLd->zVel - pLd->grav;
      pLd->zVel = fVar4;
      dVar25 = (double)fVar4;
    }
    else {
      if ((0.02500000037252903 < dVar25) && (!bVar12)) {
        dVar25 = dVar32;
      }
      pLd->zVel = (float)dVar32;
    }
  }
  else {
    pLd->zVel = (float)dVar32;
    if (dVar25 - -0.02500000037252903 < 0.0) {
      dVar25 = dVar32;
    }
  }
  lVar24 = 3;
  do {
    fVar4 = pLd->fpos[1].m.z;
    pLd->fpos[0].m.z = (float)((double)pLd->fpos[0].m.z + dVar25);
    pLd->fpos[1].m.z = (float)((double)fVar4 + dVar25);
    pLd = (w_2legData *)(pLd->fpos + 2);
    lVar24 = lVar24 + -1;
  } while (lVar24 != 0);
  (moby->pos).z = (float)((double)(moby->pos).z + dVar25);
  return uVar21;
}


// 0x0176618 (0xac bytes)
void Walk_ApplyLegQuatToEuler(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = 0;
  uVar2 = 0;
  do {
    if (*(char *)(param_1 + 0x161) != '\0') {
      FastQuaternionToEuler(uVar2,param_1 + 0x170,2);
    }
    if (*(char *)(param_1 + 0x121) != '\0') {
      FastQuaternionToEuler(uVar2,param_1 + 0x130,2);
    }
    iVar1 = iVar1 + 1;
    *(undefined4 *)(param_1 + 0x104) = 0;
    *(undefined4 *)(param_1 + 0xfc) = 0;
    param_1 = param_1 + 0xb0;
  } while (iVar1 < 2);
  return;
}


// 0x01766d8 (0x4f4 bytes)
// inlined: FastAtan2 @0x1767ec
void Walk_UpdateLegRotations(MobyInstance *moby,w_2legData *pLd,uint flags)

{
  longlong lVar1;
  char cVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  uint uVar9;
  ulonglong *puVar10;
  int iVar11;
  int iVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong lVar16;
  float *pfVar17;
  longlong lVar18;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  w_2legData *pwVar19;
  ulonglong unaff_r26;
  quat *pqVar20;
  ulonglong unaff_r27;
  int iVar21;
  ulonglong unaff_r28;
  ulonglong uVar22;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  ulonglong in_f27;
  double dVar27;
  ulonglong in_f28;
  double dVar28;
  ulonglong in_f29;
  undefined8 uVar29;
  ulonglong in_f30;
  ulonglong in_f31;
  
  uVar13 = ZEXT48(&stack0x00000000);
  lVar1 = uVar13 - 0x160;
  puVar10 = (ulonglong *)lVar1;
  *puVar10 = uVar13;
  puVar10[0x2e] = in_LR;
  puVar10[0x27] = in_f27;
  puVar10[0x28] = in_f28;
  puVar10[0x29] = in_f29;
  puVar10[0x2a] = in_f30;
  puVar10[0x2b] = in_f31;
  puVar10[0x22] = unaff_r27;
  puVar10[0x23] = unaff_r28;
  iVar21 = 0;
  puVar10[0x24] = unaff_r29;
  uVar22 = 3;
  puVar10[0x20] = unaff_r25;
  puVar10[0x1f] = unaff_r24;
  puVar10[0x26] = unaff_r31;
  puVar10[0x25] = unaff_r30;
  puVar10[0x21] = unaff_r26;
  puVar10[0x1e] = unaff_r23;
  pwVar19 = pLd;
  do {
    GetBoneTransformations(moby,pwVar19->legs[0].jiFoot,uVar13 - 0xe0);
    fVar4 = ABS(*(float *)(puVar10 + 0x12));
    fVar7 = ABS(*(float *)((int)puVar10 + 0x94));
    *(float *)(puVar10 + 0x18) = fVar4 - fVar7;
    dVar27 = 0.0;
    fVar3 = pwVar19->legs[0].frDest;
    uVar15 = (ulonglong)(*(uint *)(puVar10 + 0x12) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar10 + 0x18) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar10 + 0x94) >> 0x1d) & 4;
    fVar6 = fVar4;
    if (*(float *)(puVar10 + 0x18) - 0.0 < 0.0) {
      fVar6 = fVar7;
    }
    fVar5 = *(float *)(&g_atanQuadrantTable + (int)(uVar15 << 2));
    if (*(float *)(puVar10 + 0x18) - 0.0 < 0.0) {
      fVar7 = fVar4;
    }
    fVar4 = *(float *)(((uint)(uVar15 << 2) | 0x735900) + 4);
    dVar25 = dVar27;
    if (0.0 < fVar6) {
      lVar14 = uVar13 - 0x150;
      lVar16 = uVar13 - 0x9c;
      lVar18 = uVar13 - 0x8c;
      lVar23 = 2;
      fVar6 = (fVar7 - fVar6) / (fVar7 + fVar6);
      fVar7 = fVar6 * fVar6;
      *(float *)(puVar10 + 0x1a) = fVar6;
      *(float *)(puVar10 + 0x19) = fVar6;
      *(float *)((int)puVar10 + 0xcc) = fVar6;
      *(float *)((int)puVar10 + 0xc4) = fVar6;
      fVar6 = fVar7 * fVar7;
      *(float *)(puVar10 + 0x19) = *(float *)(puVar10 + 0x19) * fVar7;
      *(float *)((int)puVar10 + 0xcc) = *(float *)((int)puVar10 + 0xcc) * fVar6;
      *(float *)(puVar10 + 0x1a) = *(float *)(puVar10 + 0x1a) * fVar6 * fVar7;
      do {
        *(float *)((int)lVar14 + 0xc4) = *(float *)((int)lVar14 + 0xb4) * fVar6 * fVar6;
        iVar11 = (int)lVar16;
        lVar14 = lVar14 + 8;
        lVar16 = lVar16 + 8;
        *(float *)((int)lVar18 + 4) = *(float *)(iVar11 + 4) * fVar6 * fVar6;
        lVar18 = lVar18 + 8;
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
      lVar23 = 4;
      lVar18 = uVar13 - 0x9c;
      pfVar17 = (float *)&DAT_007358e0;
      lVar14 = lVar1;
      lVar16 = lVar18;
      do {
        fVar6 = *pfVar17;
        fVar7 = pfVar17[1];
        pfVar17 = pfVar17 + 2;
        *(float *)((int)lVar14 + 0xc4) = *(float *)((int)lVar14 + 0xc4) * fVar6;
        lVar14 = lVar14 + 8;
        *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar7;
        lVar16 = lVar16 + 8;
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
      lVar16 = 2;
      lVar14 = lVar1;
      do {
        iVar11 = (int)lVar14;
        lVar14 = lVar14 + 0x10;
        iVar12 = (int)lVar18;
        lVar18 = lVar18 + 0x10;
        dVar25 = (double)((float)(dVar25 + (double)*(float *)(iVar11 + 0xc4)) +
                          *(float *)(iVar12 + 4) + *(float *)(iVar12 + 8) + *(float *)(iVar12 + 0xc)
                         );
        lVar16 = lVar16 + -1;
      } while (lVar16 != 0);
      dVar25 = (double)((float)(dVar25 + 0.7853981852531433) * fVar5 + fVar4);
    }
    dVar24 = (double)FastDiffRots((double)fVar3,dVar25);
    dVar24 = (double)FastWrapRot((float)dVar24,pwVar19->legs[0].hrAct);
    dVar24 = (double)FastWrapRot((float)dVar24,pwVar19->legs[0].arAct);
    dVar25 = (double)FastDiffRots(dVar25,dVar24);
    cVar2 = pLd->state;
    pfVar17 = &pwVar19->legs[0].hrSpeed;
    dVar28 = 0.03490658476948738;
    uVar29 = 0x3fb99999a0000000;
    dVar26 = (double)(DAT_0071f408 * 0.034906585);
    if ((cVar2 == '\0') || (((uint)uVar22 & flags) == 0)) {
      dVar24 = (double)MB_DeltAngSpeed
                                 ((double)pwVar19->legs[0].hrAct,dVar27,0x3fb99999a0000000,
                                  0x3fb99999a0000000,dVar26,pfVar17,cVar2,pfVar17);
      pwVar19->legs[0].hrAct = (float)dVar24;
      dVar27 = (double)MB_DeltAngSpeed
                                 ((double)pwVar19->legs[0].arAct,dVar27,uVar29,uVar29,
                                  (double)(float)((double)DAT_0071f408 * dVar28));
    }
    else {
      if (cVar2 == '\r') {
        dVar27 = (double)MB_DeltAngSpeed
                                   ((double)pwVar19->legs[0].hrAct,dVar27,0x3fb99999a0000000,
                                    0x3fb99999a0000000,dVar26,pfVar17,0xd,pfVar17);
      }
      else {
        dVar27 = (double)MB_DeltAngSpeed
                                   ((double)pwVar19->legs[0].hrAct,(double)(float)(dVar24 * 0.5),
                                    0x3fb99999a0000000,0x3fb99999a0000000,dVar26,pfVar17,
                                    &DAT_001766c4,pfVar17);
      }
      pwVar19->legs[0].hrAct = (float)dVar27;
      dVar27 = (double)FastDiffRots(dVar24,dVar27);
      pwVar19->legs[0].arSpeed = 0.0;
    }
    fVar6 = pwVar19->legs[0].hrAct;
    fVar7 = pwVar19->legs[0].twistLow;
    uVar8 = (int)fVar6 >> 0x1f;
    uVar9 = (int)fVar7 >> 0x1f;
    pwVar19->legs[0].arAct = (float)dVar27;
    fVar3 = pwVar19->legs[0].twistLow;
    dVar26 = (double)fVar3;
    dVar24 = (double)pwVar19->legs[0].hrAct;
    if ((int)((uVar8 >> 1 ^ (uint)fVar6) - uVar8) < (int)((uVar9 >> 1 ^ (uint)fVar7) - uVar9)) {
      pwVar19->legs[0].hrAct = fVar3;
      dVar24 = dVar26;
    }
    fVar6 = pwVar19->legs[0].twistHigh;
    dVar28 = (double)fVar6;
    if (dVar28 < dVar24) {
      pwVar19->legs[0].hrAct = fVar6;
      dVar24 = dVar28;
    }
    if (dVar27 < dVar26) {
      pwVar19->legs[0].arAct = fVar3;
      dVar27 = dVar26;
    }
    if (dVar28 < dVar27) {
      pwVar19->legs[0].arAct = fVar6;
    }
    dVar27 = (double)FastWrapRot((float)dVar24,(float)dVar25);
    pwVar19->legs[0].frDest = (float)dVar27;
    dVar27 = (double)FastWrapRot(pwVar19->legs[0].arAct,(float)dVar27);
    cVar2 = pwVar19->legs[0].MHip.state;
    pwVar19->legs[0].frDest = (float)dVar27;
    if (cVar2 != '\0') {
      FastQuaternionToEuler((double)pwVar19->legs[0].hrAct,&pwVar19->legs[0].MHip.q,2);
    }
    if (pwVar19->legs[0].MAnkle.state != '\0') {
      pqVar20 = &pwVar19->legs[0].MAnkle.q;
      FastQuaternionToEuler((double)pwVar19->legs[0].arAct,pqVar20,2);
      if (((uint)uVar22 & flags) != 0) {
        FastQuaternionToEuler(-(double)(moby->rotation).x,uVar13 - 0xf0,0);
        FastQuaternionMult(pqVar20,pqVar20,uVar13 - 0xf0);
      }
    }
    iVar21 = iVar21 + 1;
    uVar22 = (uVar22 & 0x3fffffff) << 2;
    pwVar19 = (w_2legData *)&pwVar19->idle;
  } while (iVar21 < 2);
  return;
}


// 0x0176be0 (0x60 bytes)
double Walk_SolveStepTiming(MobyInstance *moby,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar1 = *(float *)(param_2 + 0xdc);
  fVar3 = fVar1 * 0.5 + *(float *)(param_2 + 0xd8);
  fVar4 = fVar3 * fVar3 + fVar1 * 2.0 * ((moby->pos).z - *(float *)(param_2 + 0x68));
  fVar5 = SQRT(fVar4);
  fVar2 = fVar3 - fVar5;
  if (fVar3 - fVar5 < 0.0) {
    fVar2 = fVar3 + fVar5;
  }
  fVar3 = 100000.0;
  if (0.0 - fVar4 < 0.0) {
    fVar3 = fVar2 / fVar1;
  }
  return (double)fVar3;
}


// 0x0176c90 (0x3558 bytes)
// strings: 0065410c: 'jumpdist = %f\n'

void Walk_UpdateStateMachine(double x,double y,double z,MobyInstance *moby,w_2legData *pLd)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  w_2legAnim *pwVar5;
  w_2legAnim *pwVar6;
  w_2legAnim *pwVar7;
  uint uVar8;
  float fVar9;
  longlong lVar10;
  char cVar19;
  short sVar18;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  undefined8 uVar11;
  undefined8 uVar12;
  longlong lVar13;
  longlong lVar20;
  ulonglong in_r8;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  GPiece<16> local_a0;
  GPiece<16> local_90;
  GPiece<16> local_80;
  GPiece<32> local_70;
  
  lVar20 = (longlong)(int)pLd;
  lVar10 = (longlong)(int)moby;
  bVar1 = pLd->state;
  pwVar5 = pLd->anims[0xb];
  pwVar6 = pLd->anims[9];
  if (bVar1 < 0xf) {
    if (bVar1 < 7) {
      if (bVar1 == 0) {
        pLd->stepZ = 0.0;
        if ((0.0007999999797903001 < z) && ((double)(pLd->anims[0]->speed * 1.35) < x)) {
          iVar17 = pLd->anims[7]->anim;
          uVar11 = MB_FindNearestAnimTrigger
                             ((double)(longlong)pLd->anims[7]->fromIdle,
                              *(undefined4 *)(&moby->pClass->type + iVar17 * 4));
          MB_SetAnimation(lVar10,iVar17,uVar11,10);
          Walk_ApplyLegQuatToEuler(lVar20);
          pwVar5 = pLd->anims[7];
          pLd->state = '\r';
          cVar19 = Walk_GetLegRangeMask((double)(longlong)pwVar5->fromIdle,pwVar5);
          pLd->onground = cVar19;
          pLd->counter = 0;
          return;
        }
        if ((x <= (double)(g_FrameTime * 0.21)) &&
           (dVar25 = (double)FastSubRots((moby->rotation).z,(float)y),
           dVar25 <= 0.10471975803375244)) {
          return;
        }
        sVar18 = pLd->counter + 1;
        pLd->counter = sVar18;
        if (sVar18 < 4) {
          return;
        }
        iVar17 = pLd->anims[0]->anim;
        uVar11 = MB_FindNearestAnimTrigger
                           ((double)(longlong)pLd->anims[0]->fromIdle,
                            *(undefined4 *)(&moby->pClass->type + iVar17 * 4));
        MB_SetAnimation(lVar10,iVar17,uVar11,10);
        Walk_ApplyLegQuatToEuler(lVar20);
        pLd->state = '\x01';
        cVar19 = Walk_GetLegRangeMask((double)(longlong)pLd->anims[0]->fromIdle,pLd->anims[0]);
        pLd->onground = cVar19;
        pLd->counter = 0;
        return;
      }
      if ((in_r8 & 5) != 0) {
        pLd->flags = pLd->flags & 0xfff7;
      }
    }
    else {
      if (0xc < bVar1) {
        if (bVar1 < 0xe) {
          pwVar7 = pLd->anims[0];
          dVar25 = (double)((pLd->anims[7]->speed + pwVar7->speed) * 0.35);
          if (((uint)moby->updateId == pLd->anims[7]->anim) && ((pLd->onground & 0x30U) == 0)) {
            if ((dVar25 <= x) || (dVar25 < (double)pLd->speed)) {
              if ((in_r8 & 5) != 0) {
                if ((pLd->flags & 1U) == 0) {
                  cosf((float)y);
                  uVar11 = 0x3fe0000000000000;
                  FUN_005e8128(y);
                  if ((in_r8 & 1) == 0) {
                    FUN_005e7f54(local_90,local_90,lVar20 + 0x30);
                  }
                  else {
                    FUN_005e7f54(local_90,local_90,lVar20 + 0x10);
                  }
                  dVar21 = (double)GetGroundZ(uVar11,local_90,0);
                  pLd->stepZ = (float)dVar21;
                }
                else {
                  pLd->stepZ = (moby->pos).z;
                  pLd->flags = pLd->flags & 0xfffeU | 2;
                  if ((in_r8 & 1) == 0) {
                    uVar11 = FastDoubleToInt
                                       ((double)((pwVar6->footRange[1] * 0.25) /
                                                (float)(x / (double)pwVar6->speed)));
                    pwVar5 = pLd->anims[9];
                    iVar14 = FastDoubleToInt
                                       ((double)((pwVar5->footRange[1] * 0.125 + pwVar5->footDown[1]
                                                 ) - pwVar5->frame0));
                    iVar15 = FastDoubleToInt((double)pLd->anims[9]->frames);
                    iVar17 = pLd->anims[9]->anim;
                    uVar12 = MB_FindNearestAnimTrigger
                                       ((double)(longlong)(iVar14 - (iVar14 / iVar15) * iVar15),
                                        *(undefined4 *)(&moby->pClass->type + iVar17 * 4));
                    MB_SetAnimation(lVar10,iVar17,uVar12,uVar11);
                    Walk_ApplyLegQuatToEuler(lVar20);
                    pLd->state = '\x0e';
                  }
                  else {
                    uVar11 = FastDoubleToInt
                                       ((double)((pwVar5->footRange[0] * 0.25) /
                                                (float)(x / (double)pwVar5->speed)));
                    pwVar5 = pLd->anims[0xb];
                    iVar14 = FastDoubleToInt
                                       ((double)((pwVar5->footRange[0] * 0.125 + pwVar5->footDown[0]
                                                 ) - pwVar5->frame0));
                    iVar15 = FastDoubleToInt((double)pLd->anims[0xb]->frames);
                    iVar17 = pLd->anims[0xb]->anim;
                    uVar12 = MB_FindNearestAnimTrigger
                                       ((double)(longlong)(iVar14 - (iVar14 / iVar15) * iVar15),
                                        *(undefined4 *)(&moby->pClass->type + iVar17 * 4));
                    MB_SetAnimation(lVar10,iVar17,uVar12,uVar11);
                    Walk_ApplyLegQuatToEuler(lVar20);
                    pLd->state = '\x0f';
                  }
                }
              }
            }
            else {
              if ((pLd->onground & 3U) == 0) {
                iVar17 = FastDoubleToInt
                                   ((double)((pwVar7->footRange[1] * 2.0 * 0.33333334 +
                                             pwVar7->footDown[1]) - pwVar7->frame0));
                iVar14 = FastDoubleToInt((double)pLd->anims[0]->frames);
              }
              else {
                iVar17 = FastDoubleToInt
                                   ((double)((pwVar7->footRange[0] * 2.0 * 0.33333334 +
                                             pwVar7->footDown[0]) - pwVar7->frame0));
                iVar14 = FastDoubleToInt((double)pLd->anims[0]->frames);
              }
              iVar15 = pLd->anims[0]->anim;
              uVar11 = MB_FindNearestAnimTrigger
                                 ((double)(longlong)(iVar17 - (iVar17 / iVar14) * iVar14),
                                  *(undefined4 *)(&moby->pClass->type + iVar15 * 4));
              MB_SetAnimation(lVar10,iVar15,uVar11,10);
              Walk_ApplyLegQuatToEuler(lVar20);
              pLd->state = '\x01';
            }
          }
          if (dVar25 <= (double)pLd->speed) {
            return;
          }
          pLd->speed = (float)dVar25;
          return;
        }
        if ((in_r8 & 0x30) != 0) {
          uVar11 = FUN_005e8548(lVar10 + 0x10,lVar20 + 0x60);
          printf("jumpdist = %f\n",uVar11);
          dVar25 = (double)MB_computeLobVelocity
                                     ((double)pLd->speed,-(double)pLd->grav,lVar10 + 0x10,
                                      lVar20 + 0x60);
          pLd->zVel = (float)dVar25;
          fVar2 = (pLd->jumpPos).m.x;
          fVar3 = (moby->pos).x;
          fVar4 = (pLd->jumpPos).m.y;
          pLd->flags = pLd->flags | 4;
          dVar25 = (double)FUN_005e8338((double)(fVar2 - fVar3),(double)(fVar4 - (moby->pos).y));
          (pLd->jumpPos).m.w = (float)dVar25;
        }
        dVar25 = (double)BlendAnimFrame(moby);
        if ((double)((pLd->anims[9]->frame0 + pLd->anims[9]->frames) - moby->unk58) <= dVar25) {
          MB_SetAnimation(lVar10,pLd->rjumpc,0,10);
          Walk_ApplyLegQuatToEuler(lVar20);
          pLd->state = '\x10';
          return;
        }
        if ((pLd->flags & 4U) == 0) {
          return;
        }
        uVar11 = 0;
        if (-1 < (int)pLd->zVel) {
          return;
        }
        dVar25 = (double)Walk_SolveStepTiming(moby,pLd);
        dVar21 = (double)(pLd->anims[10]->footDown[1] - pLd->anims[10]->frame0);
        if ((double)(float)(dVar21 * 2.0 + 15.0) <= dVar25) {
          return;
        }
        iVar17 = FastDoubleToInt(-(double)(float)(dVar21 * 2.0 - dVar25));
        lVar13 = (longlong)(iVar17 >> 1);
        iVar17 = pLd->anims[10]->anim;
        uVar11 = MB_FindNearestAnimTrigger
                           (uVar11,*(undefined4 *)(&moby->pClass->type + iVar17 * 4));
        MB_SetAnimation(lVar10,iVar17,uVar11,lVar13 + (lVar13 >> 0x3f & -lVar13));
        Walk_ApplyLegQuatToEuler(lVar20);
        pLd->state = '\x11';
        return;
      }
      if (0xb < bVar1) {
        MB_SetAnimation(lVar10,pLd->idle,0,10);
        Walk_ApplyLegQuatToEuler(lVar20);
        pLd->state = '\0';
        return;
      }
    }
    uVar8 = (int)moby->unk58 >> 0x1f;
    iVar17 = *(int *)(&DAT_0073a850 + (uint)bVar1 * 4);
    dVar25 = 0.25;
    if (((0x3e7fffff < (int)((uVar8 >> 1 ^ (uint)moby->unk58) - uVar8)) ||
        (dVar21 = (double)FastSubRots((moby->rotation).z,(float)y),
        0.09239978343248367 <= dVar21)) || ((double)(g_FrameTime * 0.19) <= x)) {
      if ((uint)moby->updateId == pLd->anims[iVar17]->anim) {
        dVar21 = (double)((pLd->anims[7]->speed + pLd->anims[0]->speed) * 0.375);
        if (((x <= dVar21) || ((double)pLd->speed <= dVar21)) || ((pLd->onground & 0x3aU) != 0)) {
          if ((in_r8 & 5) != 0) {
            if ((pLd->flags & 1U) == 0) {
              cosf((float)y);
              dVar21 = 0.5;
              FUN_005e8128(y);
              if ((in_r8 & 1) == 0) {
                FUN_005e7f54(local_a0,local_a0,lVar20 + 0x30);
              }
              else {
                FUN_005e7f54(local_a0,local_a0,lVar20 + 0x10);
              }
              dVar22 = (double)GetGroundZ(dVar21,local_a0,0);
              bVar1 = pLd->state;
              pLd->stepZ = (float)dVar22;
              if (bVar1 < 6) {
                if (bVar1 < 3) {
                  if (bVar1 != 0) {
                    if (bVar1 < 2) {
                      dVar24 = (double)(float)(dVar22 - 0.0);
                      dVar23 = (double)FUN_005e8128((double)pLd->yrot);
                      if ((float)((double)(float)((double)pLd->anims[iVar17]->stride * dVar21) *
                                  dVar23 + dVar24) <= pLd->stepHeight * 0.75) {
                        dVar23 = (double)(float)(dVar22 - 0.0);
                        dVar22 = (double)FUN_005e8128((double)pLd->yrot);
                        if ((float)((double)(float)((double)pLd->anims[iVar17]->stride * dVar21) *
                                    dVar22 + dVar23) < pLd->stepHeight * -0.75) {
                          pLd->flags = pLd->flags | 8;
                          if ((in_r8 & 1) == 0) {
                            uVar11 = FastDoubleToInt
                                               ((double)((float)((double)pLd->anims[4]->footRange[1]
                                                                * dVar25) /
                                                        (float)(x / (double)pLd->anims[4]->speed)));
                            pwVar5 = pLd->anims[4];
                            iVar14 = FastDoubleToInt
                                               ((double)((pwVar5->footRange[1] * 0.125 +
                                                         pwVar5->footDown[1]) - pwVar5->frame0));
                            iVar15 = FastDoubleToInt((double)pLd->anims[4]->frames);
                            iVar17 = pLd->anims[4]->anim;
                            uVar12 = MB_FindNearestAnimTrigger
                                               ((double)(longlong)
                                                        (iVar14 - (iVar14 / iVar15) * iVar15),
                                                *(undefined4 *)(&moby->pClass->type + iVar17 * 4));
                            MB_SetAnimation(lVar10,iVar17,uVar12,uVar11);
                            Walk_ApplyLegQuatToEuler(lVar20);
                            pLd->state = '\a';
                          }
                          else {
                            uVar11 = FastDoubleToInt
                                               ((double)((float)((double)pLd->anims[5]->footRange[0]
                                                                * dVar25) /
                                                        (float)(x / (double)pLd->anims[5]->speed)));
                            pwVar5 = pLd->anims[5];
                            iVar14 = FastDoubleToInt
                                               ((double)((pwVar5->footRange[0] * 0.125 +
                                                         pwVar5->footDown[0]) - pwVar5->frame0));
                            iVar15 = FastDoubleToInt((double)pLd->anims[5]->frames);
                            iVar17 = pLd->anims[5]->anim;
                            uVar12 = MB_FindNearestAnimTrigger
                                               ((double)(longlong)
                                                        (iVar14 - (iVar14 / iVar15) * iVar15),
                                                *(undefined4 *)(&moby->pClass->type + iVar17 * 4));
                            MB_SetAnimation(lVar10,iVar17,uVar12,uVar11);
                            Walk_ApplyLegQuatToEuler(lVar20);
                            pLd->state = '\b';
                          }
                        }
                      }
                      else if ((in_r8 & 1) == 0) {
                        uVar11 = FastDoubleToInt
                                           ((double)((float)((double)pLd->anims[1]->footRange[1] *
                                                            dVar25) /
                                                    (float)(x / (double)pLd->anims[1]->speed)));
                        pwVar5 = pLd->anims[1];
                        iVar14 = FastDoubleToInt
                                           ((double)((pwVar5->footRange[1] * 0.125 +
                                                     pwVar5->footDown[1]) - pwVar5->frame0));
                        iVar15 = FastDoubleToInt((double)pLd->anims[1]->frames);
                        iVar17 = pLd->anims[1]->anim;
                        uVar12 = MB_FindNearestAnimTrigger
                                           ((double)(longlong)(iVar14 - (iVar14 / iVar15) * iVar15),
                                            *(undefined4 *)(&moby->pClass->type + iVar17 * 4));
                        MB_SetAnimation(lVar10,iVar17,uVar12,uVar11);
                        Walk_ApplyLegQuatToEuler(lVar20);
                        pLd->state = '\x02';
                      }
                      else {
                        uVar11 = FastDoubleToInt
                                           ((double)((float)((double)pLd->anims[2]->footRange[0] *
                                                            dVar25) /
                                                    (float)(x / (double)pLd->anims[2]->speed)));
                        pwVar5 = pLd->anims[2];
                        iVar14 = FastDoubleToInt
                                           ((double)((pwVar5->footRange[0] * 0.125 +
                                                     pwVar5->footDown[0]) - pwVar5->frame0));
                        iVar15 = FastDoubleToInt((double)pLd->anims[2]->frames);
                        iVar17 = pLd->anims[2]->anim;
                        uVar12 = MB_FindNearestAnimTrigger
                                           ((double)(longlong)(iVar14 - (iVar14 / iVar15) * iVar15),
                                            *(undefined4 *)(&moby->pClass->type + iVar17 * 4));
                        MB_SetAnimation(lVar10,iVar17,uVar12,uVar11);
                        Walk_ApplyLegQuatToEuler(lVar20);
                        pLd->state = '\x03';
                      }
                    }
                    else {
                      dVar24 = (double)(float)(dVar22 - 0.0);
                      dVar23 = (double)FUN_005e8128((double)pLd->yrot);
                      if (pLd->stepHeight * -0.75 <=
                          (float)((double)(float)((double)pLd->anims[iVar17]->stride * dVar21) *
                                  dVar23 + dVar24)) {
                        dVar23 = (double)(float)(dVar22 - 0.0);
                        dVar22 = (double)FUN_005e8128((double)pLd->yrot);
                        if (pLd->stepHeight * 0.75 <=
                            (float)((double)(float)((double)pLd->anims[iVar17]->stride * dVar21) *
                                    dVar22 + dVar23)) {
                          uVar11 = FastDoubleToInt
                                             ((double)((float)((double)pLd->anims[3]->footRange[0] *
                                                              dVar25) /
                                                      (float)(x / (double)pLd->anims[3]->speed)));
                          pwVar5 = pLd->anims[3];
                          iVar14 = FastDoubleToInt
                                             ((double)((pwVar5->footRange[0] * 0.125 +
                                                       pwVar5->footDown[0]) - pwVar5->frame0));
                          iVar15 = FastDoubleToInt((double)pLd->anims[3]->frames);
                          iVar17 = pLd->anims[3]->anim;
                          uVar12 = MB_FindNearestAnimTrigger
                                             ((double)(longlong)
                                                      (iVar14 - (iVar14 / iVar15) * iVar15),
                                              *(undefined4 *)(&moby->pClass->type + iVar17 * 4));
                          MB_SetAnimation(lVar10,iVar17,uVar12,uVar11);
                          Walk_ApplyLegQuatToEuler(lVar20);
                          pLd->state = '\x04';
                        }
                        else {
                          pLd->state = '\x05';
                        }
                      }
                      else {
                        pwVar5 = pLd->anims[5];
                        pLd->flags = pLd->flags | 8;
                        uVar11 = FastDoubleToInt
                                           ((double)((float)((double)pwVar5->footRange[0] * dVar25)
                                                    / (float)(x / (double)pwVar5->speed)));
                        pwVar5 = pLd->anims[5];
                        iVar14 = FastDoubleToInt
                                           ((double)((pwVar5->footRange[0] * 0.125 +
                                                     pwVar5->footDown[0]) - pwVar5->frame0));
                        iVar15 = FastDoubleToInt((double)pLd->anims[5]->frames);
                        iVar17 = pLd->anims[5]->anim;
                        uVar12 = MB_FindNearestAnimTrigger
                                           ((double)(longlong)(iVar14 - (iVar14 / iVar15) * iVar15),
                                            *(undefined4 *)(&moby->pClass->type + iVar17 * 4));
                        MB_SetAnimation(lVar10,iVar17,uVar12,uVar11);
                        Walk_ApplyLegQuatToEuler(lVar20);
                        pLd->state = '\b';
                      }
                    }
                  }
                }
                else if (bVar1 < 4) {
                  dVar24 = (double)(float)(dVar22 - 0.0);
                  dVar23 = (double)FUN_005e8128((double)pLd->yrot);
                  if (pLd->stepHeight * -0.75 <=
                      (float)((double)(float)((double)pLd->anims[iVar17]->stride * dVar21) * dVar23
                             + dVar24)) {
                    dVar23 = (double)(float)(dVar22 - 0.0);
                    dVar22 = (double)FUN_005e8128((double)pLd->yrot);
                    if (pLd->stepHeight * 0.75 <=
                        (float)((double)(float)((double)pLd->anims[iVar17]->stride * dVar21) *
                                dVar22 + dVar23)) {
                      uVar11 = FastDoubleToInt
                                         ((double)((float)((double)pLd->anims[3]->footRange[1] *
                                                          dVar25) /
                                                  (float)(x / (double)pLd->anims[3]->speed)));
                      pwVar5 = pLd->anims[3];
                      iVar14 = FastDoubleToInt
                                         ((double)((pwVar5->footRange[1] * 0.125 +
                                                   pwVar5->footDown[1]) - pwVar5->frame0));
                      iVar15 = FastDoubleToInt((double)pLd->anims[3]->frames);
                      iVar17 = pLd->anims[3]->anim;
                      uVar12 = MB_FindNearestAnimTrigger
                                         ((double)(longlong)(iVar14 - (iVar14 / iVar15) * iVar15),
                                          *(undefined4 *)(&moby->pClass->type + iVar17 * 4));
                      MB_SetAnimation(lVar10,iVar17,uVar12,uVar11);
                      Walk_ApplyLegQuatToEuler(lVar20);
                      pLd->state = '\x04';
                    }
                    else {
                      pLd->state = '\x06';
                    }
                  }
                  else {
                    pwVar5 = pLd->anims[4];
                    pLd->flags = pLd->flags | 8;
                    uVar11 = FastDoubleToInt
                                       ((double)((float)((double)pwVar5->footRange[1] * dVar25) /
                                                (float)(x / (double)pwVar5->speed)));
                    pwVar5 = pLd->anims[4];
                    iVar14 = FastDoubleToInt
                                       ((double)((pwVar5->footRange[1] * 0.125 + pwVar5->footDown[1]
                                                 ) - pwVar5->frame0));
                    iVar15 = FastDoubleToInt((double)pLd->anims[4]->frames);
                    iVar17 = pLd->anims[4]->anim;
                    uVar12 = MB_FindNearestAnimTrigger
                                       ((double)(longlong)(iVar14 - (iVar14 / iVar15) * iVar15),
                                        *(undefined4 *)(&moby->pClass->type + iVar17 * 4));
                    MB_SetAnimation(lVar10,iVar17,uVar12,uVar11);
                    Walk_ApplyLegQuatToEuler(lVar20);
                    pLd->state = '\a';
                  }
                }
                else if (bVar1 < 5) {
                  dVar24 = (double)(float)(dVar22 - 0.0);
                  dVar23 = (double)FUN_005e8128((double)pLd->yrot);
                  if (pLd->stepHeight * -0.75 <=
                      (float)((double)(float)((double)pLd->anims[iVar17]->stride * dVar21) * dVar23
                             + dVar24)) {
                    dVar23 = (double)(float)(dVar22 - 0.0);
                    dVar22 = (double)FUN_005e8128((double)pLd->yrot);
                    if ((float)((double)(float)((double)pLd->anims[iVar17]->stride * dVar21) *
                                dVar22 + dVar23) < pLd->stepHeight * 0.75) {
                      if ((in_r8 & 1) == 0) {
                        uVar11 = FastDoubleToInt
                                           ((double)((float)((double)pLd->anims[2]->footRange[1] *
                                                            dVar25) /
                                                    (float)(x / (double)pLd->anims[2]->speed)));
                        pwVar5 = pLd->anims[2];
                        iVar14 = FastDoubleToInt
                                           ((double)((pwVar5->footRange[1] * 0.125 +
                                                     pwVar5->footDown[1]) - pwVar5->frame0));
                        iVar15 = FastDoubleToInt((double)pLd->anims[2]->frames);
                        iVar17 = pLd->anims[2]->anim;
                        uVar12 = MB_FindNearestAnimTrigger
                                           ((double)(longlong)(iVar14 - (iVar14 / iVar15) * iVar15),
                                            *(undefined4 *)(&moby->pClass->type + iVar17 * 4));
                        MB_SetAnimation(lVar10,iVar17,uVar12,uVar11);
                        Walk_ApplyLegQuatToEuler(lVar20);
                        pLd->state = '\x06';
                      }
                      else {
                        uVar11 = FastDoubleToInt
                                           ((double)((float)((double)pLd->anims[1]->footRange[0] *
                                                            dVar25) /
                                                    (float)(x / (double)pLd->anims[1]->speed)));
                        pwVar5 = pLd->anims[1];
                        iVar14 = FastDoubleToInt
                                           ((double)((pwVar5->footRange[0] * 0.125 +
                                                     pwVar5->footDown[0]) - pwVar5->frame0));
                        iVar15 = FastDoubleToInt((double)pLd->anims[1]->frames);
                        iVar17 = pLd->anims[1]->anim;
                        uVar12 = MB_FindNearestAnimTrigger
                                           ((double)(longlong)(iVar14 - (iVar14 / iVar15) * iVar15),
                                            *(undefined4 *)(&moby->pClass->type + iVar17 * 4));
                        MB_SetAnimation(lVar10,iVar17,uVar12,uVar11);
                        Walk_ApplyLegQuatToEuler(lVar20);
                        pLd->state = '\x05';
                      }
                    }
                  }
                  else {
                    pLd->flags = pLd->flags | 8;
                    if ((in_r8 & 1) == 0) {
                      uVar11 = FastDoubleToInt
                                         ((double)((float)((double)pLd->anims[4]->footRange[1] *
                                                          dVar25) /
                                                  (float)(x / (double)pLd->anims[4]->speed)));
                      pwVar5 = pLd->anims[4];
                      iVar14 = FastDoubleToInt
                                         ((double)((pwVar5->footRange[1] * 0.125 +
                                                   pwVar5->footDown[1]) - pwVar5->frame0));
                      iVar15 = FastDoubleToInt((double)pLd->anims[4]->frames);
                      iVar17 = pLd->anims[4]->anim;
                      uVar12 = MB_FindNearestAnimTrigger
                                         ((double)(longlong)(iVar14 - (iVar14 / iVar15) * iVar15),
                                          *(undefined4 *)(&moby->pClass->type + iVar17 * 4));
                      MB_SetAnimation(lVar10,iVar17,uVar12,uVar11);
                      Walk_ApplyLegQuatToEuler(lVar20);
                      pLd->state = '\a';
                    }
                    else {
                      uVar11 = FastDoubleToInt
                                         ((double)((float)((double)pLd->anims[5]->footRange[0] *
                                                          dVar25) /
                                                  (float)(x / (double)pLd->anims[5]->speed)));
                      pwVar5 = pLd->anims[5];
                      iVar14 = FastDoubleToInt
                                         ((double)((pwVar5->footRange[0] * 0.125 +
                                                   pwVar5->footDown[0]) - pwVar5->frame0));
                      iVar15 = FastDoubleToInt((double)pLd->anims[5]->frames);
                      iVar17 = pLd->anims[5]->anim;
                      uVar12 = MB_FindNearestAnimTrigger
                                         ((double)(longlong)(iVar14 - (iVar14 / iVar15) * iVar15),
                                          *(undefined4 *)(&moby->pClass->type + iVar17 * 4));
                      MB_SetAnimation(lVar10,iVar17,uVar12,uVar11);
                      Walk_ApplyLegQuatToEuler(lVar20);
                      pLd->state = '\b';
                    }
                  }
                }
                else {
                  dVar24 = (double)(float)(dVar22 - 0.0);
                  dVar23 = (double)FUN_005e8128((double)pLd->yrot);
                  if (pLd->stepHeight * -0.75 <=
                      (float)((double)(float)((double)pLd->anims[iVar17]->stride * dVar21) * dVar23
                             + dVar24)) {
                    dVar23 = (double)(float)(dVar22 - 0.0);
                    dVar22 = (double)FUN_005e8128((double)pLd->yrot);
                    if ((float)((double)(float)((double)pLd->anims[iVar17]->stride * dVar21) *
                                dVar22 + dVar23) <= pLd->stepHeight * 0.75) {
                      uVar11 = FastDoubleToInt
                                         ((double)((float)((double)pLd->anims[0]->footRange[1] *
                                                          dVar25) /
                                                  (float)(x / (double)pLd->anims[0]->speed)));
                      pwVar5 = pLd->anims[0];
                      iVar14 = FastDoubleToInt
                                         ((double)((pwVar5->footRange[1] * 0.125 +
                                                   pwVar5->footDown[1]) - pwVar5->frame0));
                      iVar15 = FastDoubleToInt((double)pLd->anims[0]->frames);
                      iVar17 = pLd->anims[0]->anim;
                      uVar12 = MB_FindNearestAnimTrigger
                                         ((double)(longlong)(iVar14 - (iVar14 / iVar15) * iVar15),
                                          *(undefined4 *)(&moby->pClass->type + iVar17 * 4));
                      MB_SetAnimation(lVar10,iVar17,uVar12,uVar11);
                      Walk_ApplyLegQuatToEuler(lVar20);
                      pLd->state = '\x01';
                    }
                    else {
                      pLd->state = '\x02';
                    }
                  }
                  else {
                    pwVar5 = pLd->anims[4];
                    pLd->flags = pLd->flags | 8;
                    uVar11 = FastDoubleToInt
                                       ((double)((float)((double)pwVar5->footRange[1] * dVar25) /
                                                (float)(x / (double)pwVar5->speed)));
                    pwVar5 = pLd->anims[4];
                    iVar14 = FastDoubleToInt
                                       ((double)((pwVar5->footRange[1] * 0.125 + pwVar5->footDown[1]
                                                 ) - pwVar5->frame0));
                    iVar15 = FastDoubleToInt((double)pLd->anims[4]->frames);
                    iVar17 = pLd->anims[4]->anim;
                    uVar12 = MB_FindNearestAnimTrigger
                                       ((double)(longlong)(iVar14 - (iVar14 / iVar15) * iVar15),
                                        *(undefined4 *)(&moby->pClass->type + iVar17 * 4));
                    MB_SetAnimation(lVar10,iVar17,uVar12,uVar11);
                    Walk_ApplyLegQuatToEuler(lVar20);
                    pLd->state = '\a';
                  }
                }
              }
              else if (bVar1 == 0xb) {
                dVar24 = (double)(float)(dVar22 - 0.0);
                dVar23 = (double)FUN_005e8128((double)pLd->yrot);
                if ((float)((double)(float)((double)pLd->anims[iVar17]->stride * dVar21) * dVar23 +
                           dVar24) <= pLd->stepHeight * 0.75) {
                  dVar22 = (double)(float)(dVar22 - 0.0);
                  dVar25 = (double)FUN_005e8128((double)pLd->yrot);
                  if (pLd->stepHeight * -0.75 <=
                      (float)((double)(float)((double)pLd->anims[iVar17]->stride * dVar21) * dVar25
                             + dVar22)) {
                    uVar11 = FastDoubleToInt
                                       ((double)(pLd->anims[0]->footRange[0] /
                                                (float)(x / (double)pLd->anims[0]->speed)));
                    pwVar5 = pLd->anims[0];
                    iVar14 = FastDoubleToInt
                                       ((double)((float)((double)pwVar5->footRange[0] * dVar21 +
                                                        (double)pwVar5->footDown[0]) -
                                                pwVar5->frame0));
                    iVar15 = FastDoubleToInt((double)pLd->anims[0]->frames);
                    iVar17 = pLd->anims[0]->anim;
                    uVar12 = MB_FindNearestAnimTrigger
                                       ((double)(longlong)(iVar14 - (iVar14 / iVar15) * iVar15),
                                        *(undefined4 *)(&moby->pClass->type + iVar17 * 4));
                    MB_SetAnimation(lVar10,iVar17,uVar12,uVar11);
                    Walk_ApplyLegQuatToEuler(lVar20);
                    pLd->state = '\x01';
                  }
                  else {
                    pLd->state = '\b';
                  }
                }
                else {
                  uVar11 = FastDoubleToInt
                                     ((double)((float)((double)pLd->anims[2]->footRange[0] * dVar25)
                                              / (float)(x / (double)pLd->anims[2]->speed)));
                  pwVar5 = pLd->anims[2];
                  iVar14 = FastDoubleToInt
                                     ((double)((pwVar5->footRange[0] * 0.125 + pwVar5->footDown[0])
                                              - pwVar5->frame0));
                  iVar15 = FastDoubleToInt((double)pLd->anims[2]->frames);
                  iVar17 = pLd->anims[2]->anim;
                  uVar12 = MB_FindNearestAnimTrigger
                                     ((double)(longlong)(iVar14 - (iVar14 / iVar15) * iVar15),
                                      *(undefined4 *)(&moby->pClass->type + iVar17 * 4));
                  MB_SetAnimation(lVar10,iVar17,uVar12,uVar11);
                  Walk_ApplyLegQuatToEuler(lVar20);
                  pLd->state = '\x03';
                }
              }
              else if (bVar1 == 10) {
                dVar24 = (double)(float)(dVar22 - 0.0);
                dVar23 = (double)FUN_005e8128((double)pLd->yrot);
                if ((float)((double)(float)((double)pLd->anims[iVar17]->stride * dVar21) * dVar23 +
                           dVar24) <= pLd->stepHeight * 0.75) {
                  dVar22 = (double)(float)(dVar22 - 0.0);
                  dVar25 = (double)FUN_005e8128((double)pLd->yrot);
                  if (pLd->stepHeight * -0.75 <=
                      (float)((double)(float)((double)pLd->anims[iVar17]->stride * dVar21) * dVar25
                             + dVar22)) {
                    uVar11 = FastDoubleToInt
                                       ((double)(pLd->anims[0]->footRange[1] /
                                                (float)(x / (double)pLd->anims[0]->speed)));
                    pwVar5 = pLd->anims[0];
                    iVar14 = FastDoubleToInt
                                       ((double)((float)((double)pwVar5->footRange[1] * dVar21 +
                                                        (double)pwVar5->footDown[1]) -
                                                pwVar5->frame0));
                    iVar15 = FastDoubleToInt((double)pLd->anims[0]->frames);
                    iVar17 = pLd->anims[0]->anim;
                    uVar12 = MB_FindNearestAnimTrigger
                                       ((double)(longlong)(iVar14 - (iVar14 / iVar15) * iVar15),
                                        *(undefined4 *)(&moby->pClass->type + iVar17 * 4));
                    MB_SetAnimation(lVar10,iVar17,uVar12,uVar11);
                    Walk_ApplyLegQuatToEuler(lVar20);
                    pLd->state = '\x01';
                  }
                  else {
                    pLd->state = '\a';
                  }
                }
                else {
                  uVar11 = FastDoubleToInt
                                     ((double)((float)((double)pLd->anims[1]->footRange[1] * dVar25)
                                              / (float)(x / (double)pLd->anims[1]->speed)));
                  pwVar5 = pLd->anims[1];
                  iVar14 = FastDoubleToInt
                                     ((double)((pwVar5->footRange[1] * 0.125 + pwVar5->footDown[1])
                                              - pwVar5->frame0));
                  iVar15 = FastDoubleToInt((double)pLd->anims[1]->frames);
                  iVar17 = pLd->anims[1]->anim;
                  uVar12 = MB_FindNearestAnimTrigger
                                     ((double)(longlong)(iVar14 - (iVar14 / iVar15) * iVar15),
                                      *(undefined4 *)(&moby->pClass->type + iVar17 * 4));
                  MB_SetAnimation(lVar10,iVar17,uVar12,uVar11);
                  Walk_ApplyLegQuatToEuler(lVar20);
                  pLd->state = '\x02';
                }
              }
              else if (bVar1 == 9) {
                dVar24 = (double)(float)(dVar22 - 0.0);
                dVar23 = (double)FUN_005e8128((double)pLd->yrot);
                if ((float)((double)(float)((double)pLd->anims[iVar17]->stride * dVar21) * dVar23 +
                           dVar24) <= pLd->stepHeight * 0.75) {
                  dVar23 = (double)(float)(dVar22 - 0.0);
                  dVar22 = (double)FUN_005e8128((double)pLd->yrot);
                  if (pLd->stepHeight * -0.75 <
                      (float)((double)(float)((double)pLd->anims[iVar17]->stride * dVar21) * dVar22
                             + dVar23)) {
                    if ((in_r8 & 1) == 0) {
                      uVar11 = FastDoubleToInt
                                         ((double)((float)((double)pLd->anims[5]->footRange[1] *
                                                          dVar25) /
                                                  (float)(x / (double)pLd->anims[5]->speed)));
                      pwVar5 = pLd->anims[5];
                      iVar14 = FastDoubleToInt
                                         ((double)((pwVar5->footRange[1] * 0.125 +
                                                   pwVar5->footDown[1]) - pwVar5->frame0));
                      iVar15 = FastDoubleToInt((double)pLd->anims[5]->frames);
                      iVar17 = pLd->anims[5]->anim;
                      uVar12 = MB_FindNearestAnimTrigger
                                         ((double)(longlong)(iVar14 - (iVar14 / iVar15) * iVar15),
                                          *(undefined4 *)(&moby->pClass->type + iVar17 * 4));
                      MB_SetAnimation(lVar10,iVar17,uVar12,uVar11);
                      Walk_ApplyLegQuatToEuler(lVar20);
                      pLd->state = '\v';
                    }
                    else {
                      uVar11 = FastDoubleToInt
                                         ((double)((float)((double)pLd->anims[4]->footRange[0] *
                                                          dVar25) /
                                                  (float)(x / (double)pLd->anims[4]->speed)));
                      pwVar5 = pLd->anims[4];
                      iVar14 = FastDoubleToInt
                                         ((double)((pwVar5->footRange[0] * 0.125 +
                                                   pwVar5->footDown[0]) - pwVar5->frame0));
                      iVar15 = FastDoubleToInt((double)pLd->anims[4]->frames);
                      iVar17 = pLd->anims[4]->anim;
                      uVar12 = MB_FindNearestAnimTrigger
                                         ((double)(longlong)(iVar14 - (iVar14 / iVar15) * iVar15),
                                          *(undefined4 *)(&moby->pClass->type + iVar17 * 4));
                      MB_SetAnimation(lVar10,iVar17,uVar12,uVar11);
                      Walk_ApplyLegQuatToEuler(lVar20);
                      pLd->state = '\n';
                    }
                  }
                }
                else if ((in_r8 & 1) == 0) {
                  uVar11 = FastDoubleToInt
                                     ((double)((float)((double)pLd->anims[1]->footRange[1] * dVar25)
                                              / (float)(x / (double)pLd->anims[1]->speed)));
                  pwVar5 = pLd->anims[1];
                  iVar14 = FastDoubleToInt
                                     ((double)((pwVar5->footRange[1] * 0.125 + pwVar5->footDown[1])
                                              - pwVar5->frame0));
                  iVar15 = FastDoubleToInt((double)pLd->anims[1]->frames);
                  iVar17 = pLd->anims[1]->anim;
                  uVar12 = MB_FindNearestAnimTrigger
                                     ((double)(longlong)(iVar14 - (iVar14 / iVar15) * iVar15),
                                      *(undefined4 *)(&moby->pClass->type + iVar17 * 4));
                  MB_SetAnimation(lVar10,iVar17,uVar12,uVar11);
                  Walk_ApplyLegQuatToEuler(lVar20);
                  pLd->state = '\x02';
                }
                else {
                  uVar11 = FastDoubleToInt
                                     ((double)((float)((double)pLd->anims[2]->footRange[0] * dVar25)
                                              / (float)(x / (double)pLd->anims[2]->speed)));
                  pwVar5 = pLd->anims[2];
                  iVar14 = FastDoubleToInt
                                     ((double)((pwVar5->footRange[0] * 0.125 + pwVar5->footDown[0])
                                              - pwVar5->frame0));
                  iVar15 = FastDoubleToInt((double)pLd->anims[2]->frames);
                  iVar17 = pLd->anims[2]->anim;
                  uVar12 = MB_FindNearestAnimTrigger
                                     ((double)(longlong)(iVar14 - (iVar14 / iVar15) * iVar15),
                                      *(undefined4 *)(&moby->pClass->type + iVar17 * 4));
                  MB_SetAnimation(lVar10,iVar17,uVar12,uVar11);
                  Walk_ApplyLegQuatToEuler(lVar20);
                  pLd->state = '\x03';
                }
              }
              else if (bVar1 == 8) {
                dVar24 = (double)(float)(dVar22 - 0.0);
                dVar23 = (double)FUN_005e8128((double)pLd->yrot);
                if ((float)((double)(float)((double)pLd->anims[iVar17]->stride * dVar21) * dVar23 +
                           dVar24) <= pLd->stepHeight * 0.75) {
                  dVar23 = (double)(float)(dVar22 - 0.0);
                  dVar22 = (double)FUN_005e8128((double)pLd->yrot);
                  if ((float)((double)(float)((double)pLd->anims[iVar17]->stride * dVar21) * dVar22
                             + dVar23) <= pLd->stepHeight * -0.75) {
                    uVar11 = FastDoubleToInt
                                       ((double)((float)((double)pLd->anims[6]->footRange[1] *
                                                        dVar25) /
                                                (float)(x / (double)pLd->anims[6]->speed)));
                    pwVar5 = pLd->anims[6];
                    iVar14 = FastDoubleToInt
                                       ((double)((pwVar5->footRange[1] * 0.125 + pwVar5->footDown[1]
                                                 ) - pwVar5->frame0));
                    iVar15 = FastDoubleToInt((double)pLd->anims[6]->frames);
                    iVar17 = pLd->anims[6]->anim;
                    uVar12 = MB_FindNearestAnimTrigger
                                       ((double)(longlong)(iVar14 - (iVar14 / iVar15) * iVar15),
                                        *(undefined4 *)(&moby->pClass->type + iVar17 * 4));
                    MB_SetAnimation(lVar10,iVar17,uVar12,uVar11);
                    Walk_ApplyLegQuatToEuler(lVar20);
                    pLd->state = '\t';
                  }
                  else {
                    pLd->state = '\v';
                  }
                }
                else {
                  uVar11 = FastDoubleToInt
                                     ((double)((float)((double)pLd->anims[1]->footRange[1] * dVar25)
                                              / (float)(x / (double)pLd->anims[1]->speed)));
                  pwVar5 = pLd->anims[1];
                  iVar14 = FastDoubleToInt
                                     ((double)((pwVar5->footRange[1] * 0.125 + pwVar5->footDown[1])
                                              - pwVar5->frame0));
                  iVar15 = FastDoubleToInt((double)pLd->anims[1]->frames);
                  iVar17 = pLd->anims[1]->anim;
                  uVar12 = MB_FindNearestAnimTrigger
                                     ((double)(longlong)(iVar14 - (iVar14 / iVar15) * iVar15),
                                      *(undefined4 *)(&moby->pClass->type + iVar17 * 4));
                  MB_SetAnimation(lVar10,iVar17,uVar12,uVar11);
                  Walk_ApplyLegQuatToEuler(lVar20);
                  pLd->state = '\x02';
                }
              }
              else if (bVar1 == 7) {
                dVar24 = (double)(float)(dVar22 - 0.0);
                dVar23 = (double)FUN_005e8128((double)pLd->yrot);
                if ((float)((double)(float)((double)pLd->anims[iVar17]->stride * dVar21) * dVar23 +
                           dVar24) <= pLd->stepHeight * 0.75) {
                  dVar23 = (double)(float)(dVar22 - 0.0);
                  dVar22 = (double)FUN_005e8128((double)pLd->yrot);
                  if ((float)((double)(float)((double)pLd->anims[iVar17]->stride * dVar21) * dVar22
                             + dVar23) <= pLd->stepHeight * -0.75) {
                    uVar11 = FastDoubleToInt
                                       ((double)((float)((double)pLd->anims[6]->footRange[0] *
                                                        dVar25) /
                                                (float)(x / (double)pLd->anims[6]->speed)));
                    pwVar5 = pLd->anims[6];
                    iVar14 = FastDoubleToInt
                                       ((double)((pwVar5->footRange[0] * 0.125 + pwVar5->footDown[0]
                                                 ) - pwVar5->frame0));
                    iVar15 = FastDoubleToInt((double)pLd->anims[6]->frames);
                    iVar17 = pLd->anims[6]->anim;
                    uVar12 = MB_FindNearestAnimTrigger
                                       ((double)(longlong)(iVar14 - (iVar14 / iVar15) * iVar15),
                                        *(undefined4 *)(&moby->pClass->type + iVar17 * 4));
                    MB_SetAnimation(lVar10,iVar17,uVar12,uVar11);
                    Walk_ApplyLegQuatToEuler(lVar20);
                    pLd->state = '\t';
                  }
                  else {
                    pLd->state = '\n';
                  }
                }
                else {
                  uVar11 = FastDoubleToInt
                                     ((double)((float)((double)pLd->anims[2]->footRange[0] * dVar25)
                                              / (float)(x / (double)pLd->anims[2]->speed)));
                  pwVar5 = pLd->anims[2];
                  iVar14 = FastDoubleToInt
                                     ((double)((pwVar5->footRange[0] * 0.125 + pwVar5->footDown[0])
                                              - pwVar5->frame0));
                  iVar15 = FastDoubleToInt((double)pLd->anims[2]->frames);
                  iVar17 = pLd->anims[2]->anim;
                  uVar12 = MB_FindNearestAnimTrigger
                                     ((double)(longlong)(iVar14 - (iVar14 / iVar15) * iVar15),
                                      *(undefined4 *)(&moby->pClass->type + iVar17 * 4));
                  MB_SetAnimation(lVar10,iVar17,uVar12,uVar11);
                  Walk_ApplyLegQuatToEuler(lVar20);
                  pLd->state = '\x03';
                }
              }
              else if (bVar1 == 6) {
                dVar24 = (double)(float)(dVar22 - 0.0);
                dVar23 = (double)FUN_005e8128((double)pLd->yrot);
                if (pLd->stepHeight * -0.75 <=
                    (float)((double)(float)((double)pLd->anims[iVar17]->stride * dVar21) * dVar23 +
                           dVar24)) {
                  dVar23 = (double)(float)(dVar22 - 0.0);
                  dVar22 = (double)FUN_005e8128((double)pLd->yrot);
                  if ((float)((double)(float)((double)pLd->anims[iVar17]->stride * dVar21) * dVar22
                             + dVar23) <= pLd->stepHeight * 0.75) {
                    uVar11 = FastDoubleToInt
                                       ((double)((float)((double)pLd->anims[0]->footRange[0] *
                                                        dVar25) /
                                                (float)(x / (double)pLd->anims[0]->speed)));
                    pwVar5 = pLd->anims[0];
                    iVar14 = FastDoubleToInt
                                       ((double)((pwVar5->footRange[0] * 0.125 + pwVar5->footDown[0]
                                                 ) - pwVar5->frame0));
                    iVar15 = FastDoubleToInt((double)pLd->anims[0]->frames);
                    iVar17 = pLd->anims[0]->anim;
                    uVar12 = MB_FindNearestAnimTrigger
                                       ((double)(longlong)(iVar14 - (iVar14 / iVar15) * iVar15),
                                        *(undefined4 *)(&moby->pClass->type + iVar17 * 4));
                    MB_SetAnimation(lVar10,iVar17,uVar12,uVar11);
                    Walk_ApplyLegQuatToEuler(lVar20);
                    pLd->state = '\x01';
                  }
                  else {
                    pLd->state = '\x03';
                  }
                }
                else {
                  pwVar5 = pLd->anims[5];
                  pLd->flags = pLd->flags | 8;
                  uVar11 = FastDoubleToInt
                                     ((double)((float)((double)pwVar5->footRange[0] * dVar25) /
                                              (float)(x / (double)pwVar5->speed)));
                  pwVar5 = pLd->anims[5];
                  iVar14 = FastDoubleToInt
                                     ((double)((pwVar5->footRange[0] * 0.125 + pwVar5->footDown[0])
                                              - pwVar5->frame0));
                  iVar15 = FastDoubleToInt((double)pLd->anims[5]->frames);
                  iVar17 = pLd->anims[5]->anim;
                  uVar12 = MB_FindNearestAnimTrigger
                                     ((double)(longlong)(iVar14 - (iVar14 / iVar15) * iVar15),
                                      *(undefined4 *)(&moby->pClass->type + iVar17 * 4));
                  MB_SetAnimation(lVar10,iVar17,uVar12,uVar11);
                  Walk_ApplyLegQuatToEuler(lVar20);
                  pLd->state = '\b';
                }
              }
            }
            else {
              pLd->stepZ = (moby->pos).z;
              pLd->flags = pLd->flags & 0xfffeU | 2;
              if ((in_r8 & 1) == 0) {
                uVar11 = FastDoubleToInt
                                   ((double)((float)((double)pLd->anims[9]->footRange[1] * dVar25) /
                                            (float)(x / (double)pLd->anims[9]->speed)));
                pwVar5 = pLd->anims[9];
                iVar14 = FastDoubleToInt
                                   ((double)((pwVar5->footRange[1] * 0.125 + pwVar5->footDown[1]) -
                                            pwVar5->frame0));
                iVar15 = FastDoubleToInt((double)pLd->anims[9]->frames);
                iVar17 = pLd->anims[9]->anim;
                uVar12 = MB_FindNearestAnimTrigger
                                   ((double)(longlong)(iVar14 - (iVar14 / iVar15) * iVar15),
                                    *(undefined4 *)(&moby->pClass->type + iVar17 * 4));
                MB_SetAnimation(lVar10,iVar17,uVar12,uVar11);
                Walk_ApplyLegQuatToEuler(lVar20);
                pLd->state = '\x0e';
              }
              else {
                uVar11 = FastDoubleToInt
                                   ((double)((float)((double)pLd->anims[0xb]->footRange[0] * dVar25)
                                            / (float)(x / (double)pLd->anims[0xb]->speed)));
                pwVar5 = pLd->anims[0xb];
                iVar14 = FastDoubleToInt
                                   ((double)((pwVar5->footRange[0] * 0.125 + pwVar5->footDown[0]) -
                                            pwVar5->frame0));
                iVar15 = FastDoubleToInt((double)pLd->anims[0xb]->frames);
                iVar17 = pLd->anims[0xb]->anim;
                uVar12 = MB_FindNearestAnimTrigger
                                   ((double)(longlong)(iVar14 - (iVar14 / iVar15) * iVar15),
                                    *(undefined4 *)(&moby->pClass->type + iVar17 * 4));
                MB_SetAnimation(lVar10,iVar17,uVar12,uVar11);
                Walk_ApplyLegQuatToEuler(lVar20);
                pLd->state = '\x0f';
              }
            }
          }
        }
        else {
          dVar25 = (double)BlendAnimFrame(moby);
          iVar14 = FastDoubleToInt
                             ((double)((float)((double)pLd->anims[iVar17]->footUp[0] - dVar25) +
                                      pLd->anims[iVar17]->frames));
          iVar15 = FastDoubleToInt((double)pLd->anims[iVar17]->frames);
          iVar16 = FastDoubleToInt
                             ((double)((float)((double)pLd->anims[iVar17]->footUp[1] - dVar25) +
                                      pLd->anims[iVar17]->frames));
          iVar17 = FastDoubleToInt((double)pLd->anims[iVar17]->frames);
          if (iVar14 - (iVar14 / iVar15) * iVar15 < iVar16 - (iVar16 / iVar17) * iVar17) {
            iVar17 = FastDoubleToInt
                               ((double)(pLd->anims[7]->footUp[0] - pLd->anims[7]->frame0));
          }
          else {
            iVar17 = FastDoubleToInt
                               ((double)(pLd->anims[7]->footUp[1] - pLd->anims[7]->frame0));
          }
          iVar15 = FastDoubleToInt((double)pLd->anims[7]->frames);
          iVar16 = FastDoubleToInt((double)pLd->anims[7]->frames);
          uVar11 = FastDoubleToInt
                             ((double)(10.0 / (float)(x / (double)pLd->anims[7]->speed)));
          iVar14 = pLd->anims[7]->anim;
          uVar12 = MB_FindNearestAnimTrigger
                             ((double)(longlong)
                                      ((iVar17 + iVar15) - ((iVar17 + iVar15) / iVar16) * iVar16),
                              *(undefined4 *)(&moby->pClass->type + iVar14 * 4));
          MB_SetAnimation(lVar10,iVar14,uVar12,uVar11);
          Walk_ApplyLegQuatToEuler(lVar20);
          pLd->state = '\r';
        }
      }
    }
    else {
      MB_SetAnimation(lVar10,pLd->idle,0,10);
      Walk_ApplyLegQuatToEuler(lVar20);
      pLd->state = '\0';
    }
    return;
  }
  if (bVar1 == 0x14) {
    if ((in_r8 & 1) == 0) {
      return;
    }
    uVar11 = FastDoubleToInt
                       ((double)((pLd->anims[7]->footRange[0] * 0.25 + 2.0) /
                                (float)(x / (double)pLd->anims[7]->speed)));
    pwVar5 = pLd->anims[7];
    iVar14 = FastDoubleToInt
                       ((double)((pwVar5->footRange[0] * 0.125 + pwVar5->footDown[0] + 1.0) -
                                pwVar5->frame0));
    iVar15 = FastDoubleToInt((double)pLd->anims[7]->frames);
    iVar17 = pLd->anims[7]->anim;
    uVar12 = MB_FindNearestAnimTrigger
                       ((double)(longlong)(iVar14 - (iVar14 / iVar15) * iVar15),
                        *(undefined4 *)(&moby->pClass->type + iVar17 * 4));
    MB_SetAnimation(lVar10,iVar17,uVar12,uVar11);
    Walk_ApplyLegQuatToEuler(lVar20);
    pLd->onground = '\x01';
    pLd->state = '\r';
    pLd->zVel = 0.0;
    pLd->flags = pLd->flags & 0xfffd;
    cosf((float)y);
    uVar11 = 0x3fe0000000000000;
    FUN_005e8128(y);
    FUN_005e7f54(local_80,local_80,lVar20 + 0x10);
    dVar25 = (double)GetGroundZ(uVar11,local_80,0);
    pLd->stepZ = (float)dVar25;
    return;
  }
  if (bVar1 == 0x13) {
    if ((in_r8 & 1) == 0) {
      return;
    }
    uVar11 = FastDoubleToInt
                       ((double)((pLd->anims[7]->footRange[1] * 0.25 + 2.0) /
                                (float)(x / (double)pLd->anims[7]->speed)));
    pwVar5 = pLd->anims[7];
    iVar14 = FastDoubleToInt
                       ((double)((pwVar5->footRange[0] * 0.125 + pwVar5->footDown[1] + 1.0) -
                                pwVar5->frame0));
    iVar15 = FastDoubleToInt((double)pLd->anims[7]->frames);
    iVar17 = pLd->anims[7]->anim;
    uVar12 = MB_FindNearestAnimTrigger
                       ((double)(longlong)(iVar14 - (iVar14 / iVar15) * iVar15),
                        *(undefined4 *)(&moby->pClass->type + iVar17 * 4));
    MB_SetAnimation(lVar10,iVar17,uVar12,uVar11);
    Walk_ApplyLegQuatToEuler(lVar20);
    pLd->onground = '\x01';
    pLd->state = '\r';
    pLd->zVel = 0.0;
    pLd->flags = pLd->flags & 0xfffd;
    cosf((float)y);
    uVar11 = 0x3fe0000000000000;
    FUN_005e8128(y);
    FUN_005e7f54(local_70,local_70,lVar20 + 0x10);
    dVar25 = (double)GetGroundZ(uVar11,local_70,0);
    pLd->stepZ = (float)dVar25;
    return;
  }
  if (bVar1 == 0x12) {
    if ((uint)moby->updateId != pLd->anims[0xc]->anim) {
      return;
    }
    dVar25 = (double)Walk_SolveStepTiming(moby,pLd);
    if (1.0 < dVar25) {
      dVar21 = (double)FastIntToDouble(moby->previousAnimationFrame);
      fVar2 = (float)(dVar21 + (double)moby->animationBlend);
      fVar3 = fVar2 + 0.1;
      fVar4 = -(float)(dVar25 * 0.5 - (double)(pLd->anims[0xc]->footDown[1] + 2.0)) -
              pLd->anims[0xc]->frame0;
      if (fVar4 - fVar3 < 0.0) {
        fVar4 = fVar3;
      }
      moby->unk58 = animationSpeed * (fVar4 - fVar2);
      return;
    }
    dVar25 = (double)FastIntToDouble(moby->previousAnimationFrame);
    fVar9 = animationSpeed;
    fVar2 = (float)(dVar25 + (double)moby->animationBlend);
    fVar4 = pLd->anims[0xc]->footDown[1] - pLd->anims[0xc]->frame0;
    fVar3 = fVar2 + 0.1;
    pLd->flags = pLd->flags & 0xfffb;
    if (fVar4 - fVar3 < 0.0) {
      fVar4 = fVar3;
    }
    moby->unk58 = fVar9 * (fVar4 - fVar2);
    pLd->state = '\x14';
    pLd->onground = '\x04';
    return;
  }
  if (bVar1 == 0x11) {
    if ((uint)moby->updateId != pLd->anims[10]->anim) {
      return;
    }
    dVar25 = (double)Walk_SolveStepTiming(moby,pLd);
    if (1.0 < dVar25) {
      dVar21 = (double)FastIntToDouble(moby->previousAnimationFrame);
      fVar2 = (float)(dVar21 + (double)moby->animationBlend);
      fVar3 = fVar2 + 0.1;
      fVar4 = -(float)(dVar25 * 0.5 - (double)(pLd->anims[10]->footDown[1] + 2.0)) -
              pLd->anims[10]->frame0;
      if (fVar4 - fVar3 < 0.0) {
        fVar4 = fVar3;
      }
      moby->unk58 = animationSpeed * (fVar4 - fVar2);
      return;
    }
    dVar25 = (double)FastIntToDouble(moby->previousAnimationFrame);
    fVar9 = animationSpeed;
    fVar2 = (float)(dVar25 + (double)moby->animationBlend);
    fVar4 = pLd->anims[10]->footDown[1] - pLd->anims[10]->frame0;
    fVar3 = fVar2 + 0.1;
    pLd->flags = pLd->flags & 0xfffb;
    if (fVar4 - fVar3 < 0.0) {
      fVar4 = fVar3;
    }
    moby->unk58 = fVar9 * (fVar4 - fVar2);
    pLd->state = '\x13';
    pLd->onground = '\x04';
    return;
  }
  if (bVar1 == 0x10) {
    if (moby->updateId != pLd->rjumpc) {
      return;
    }
    dVar25 = (double)Walk_SolveStepTiming(moby,pLd);
    dVar21 = (double)(pLd->anims[0xc]->footDown[1] - pLd->anims[0xc]->frame0);
    if ((double)(float)(dVar21 * 2.0 + 15.0) <= dVar25) {
      return;
    }
    iVar14 = FastDoubleToInt(-(double)(float)(dVar21 * 2.0 - dVar25));
    iVar17 = pLd->anims[0xc]->anim;
    uVar11 = MB_FindNearestAnimTrigger
                       (0,*(undefined4 *)(&moby->pClass->type + iVar17 * 4));
    MB_SetAnimation(lVar10,iVar17,uVar11,iVar14 >> 1);
    Walk_ApplyLegQuatToEuler(lVar20);
    pLd->state = '\x12';
    return;
  }
  if (bVar1 != 0xf) {
    return;
  }
  if ((in_r8 & 0x30) != 0) {
    uVar11 = FUN_005e8588(lVar10 + 0x10,lVar20 + 0x60);
    printf("jumpdist = %f\n",uVar11);
    dVar25 = (double)MB_computeLobVelocity
                               ((double)pLd->speed,-(double)pLd->grav,lVar10 + 0x10,lVar20 + 0x60);
    pLd->zVel = (float)dVar25;
    fVar2 = (pLd->jumpPos).m.x;
    fVar3 = (moby->pos).x;
    fVar4 = (pLd->jumpPos).m.y;
    pLd->flags = pLd->flags | 4;
    dVar25 = (double)FUN_005e8338((double)(fVar2 - fVar3),(double)(fVar4 - (moby->pos).y));
    (pLd->jumpPos).m.w = (float)dVar25;
  }
  dVar25 = (double)BlendAnimFrame(moby);
  if ((double)((pLd->anims[0xb]->frame0 + pLd->anims[0xb]->frames) - moby->unk58) <= dVar25) {
    MB_SetAnimation(lVar10,pLd->rjumpc,0,10);
    Walk_ApplyLegQuatToEuler(lVar20);
    pLd->state = '\x10';
    return;
  }
  if ((pLd->flags & 4U) == 0) {
    return;
  }
  uVar11 = 0;
  if (-1 < (int)pLd->zVel) {
    return;
  }
  dVar25 = (double)Walk_SolveStepTiming(moby,pLd);
  dVar21 = (double)(pLd->anims[0xc]->footDown[1] - pLd->anims[0xc]->frame0);
  if ((double)(float)(dVar21 * 2.0 + 15.0) <= dVar25) {
    return;
  }
  iVar17 = FastDoubleToInt(-(double)(float)(dVar21 * 2.0 - dVar25));
  lVar13 = (longlong)(iVar17 >> 1);
  iVar17 = pLd->anims[0xc]->anim;
  uVar11 = MB_FindNearestAnimTrigger
                     (uVar11,*(undefined4 *)(&moby->pClass->type + iVar17 * 4));
  MB_SetAnimation(lVar10,iVar17,uVar11,lVar13 + (lVar13 >> 0x3f & -lVar13));
  Walk_ApplyLegQuatToEuler(lVar20);
  pLd->state = '\x12';
  return;
}


// 0x017a230 (0x810 bytes)
// strings: 0017a21c: '?fff_q' (raw)

ulonglong walk_Update(double x,double y,double z,MobyInstance *moby,w_2legData *pLD)

{
  byte bVar1;
  char cVar2;
  float fVar3;
  float fVar4;
  w_2legAnim **ppwVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float *pfVar13;
  ushort uVar14;
  w_2legData *pwVar15;
  uint flags;
  int iVar16;
  ulonglong uVar17;
  float *pfVar18;
  int iVar19;
  int iVar20;
  longlong lVar21;
  longlong lVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  float fVar26;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100 [24];
  float local_a0;
  float local_9c;
  GPiece<4> auStack_98;
  GPiece<24> local_94;
  GPiece<36> local_7c;
  
  if (moby->updateId == 0xff) {
    dVar23 = (double)FastIntToDouble(moby->animationFrame);
    fVar26 = MB_GetAnimSeqLength((uint)moby->mClass,(uint)moby->animationId);
    dVar23 = (double)(float)(dVar23 + (double)fVar26);
  }
  else {
    dVar23 = (double)BlendAnimFrame(moby);
  }
  iVar20 = 0;
  lVar21 = 0;
  lVar22 = 0xd;
  pwVar15 = pLD;
  do {
    ppwVar5 = pwVar15->anims;
    pwVar15 = (w_2legData *)&pwVar15->fpos[0].m.y;
    lVar21 = lVar21 + (ZERO_MASK(((uint)moby->updateId - (*ppwVar5)->anim)) &
                      ZEXT48(*ppwVar5) - lVar21);
    lVar22 = lVar22 + -1;
  } while (lVar22 != 0);
  if ((w_2legAnim *)lVar21 == (w_2legAnim *)0x0) {
    flags = (uint)(byte)pLD->onground;
  }
  else {
    flags = Walk_GetLegRangeMask(dVar23,(w_2legAnim *)lVar21);
  }
  pfVar18 = &pLD->angVel;
  uVar14 = pLD->flags & 4;
  if (uVar14 == 0) {
    if ((flags & 0xf) == 0) {
      dVar23 = (double)MB_DeltAngSpeed
                                 ((double)(moby->rotation).z,y,0,(double)(pLD->angDamp * 2.0),
                                  (double)pLD->angLimit,pfVar18,&DAT_0017a1e8,pfVar18);
    }
    else {
      dVar23 = (double)MB_DeltAngSpeed
                                 ((double)(moby->rotation).z,y,(double)pLD->angGain,
                                  (double)pLD->angDamp,(double)pLD->angLimit,pfVar18,flags & 0xf,
                                  pfVar18);
    }
  }
  else {
    dVar23 = (double)MB_DeltAngSpeed
                               ((double)(moby->rotation).z,(double)(pLD->jumpPos).m.w,
                                (double)pLD->angGain,(double)pLD->angDamp,(double)pLD->angLimit,
                                pfVar18,uVar14,pfVar18);
  }
  (moby->rotation).z = (float)dVar23;
  Walk_UpdateLegRotations(moby,pLD,flags);
  dVar23 = (double)MB_DeltAngSpeed
                             ((double)(moby->rotation).y,(double)pLD->yrot,0x3f747ae140000000,
                              0x3f847ae140000000,(double)(DAT_0071f408 * 0.017453292),&DAT_0017a1e8,
                              &DAT_00720000,&pLD->yrSpeed);
  (moby->rotation).y = (float)dVar23;
  GetMobyJointsWorldPos(moby,6,local_94,local_100);
  fVar26 = pLD->speed;
  if ((pLD->flags & 4U) == 0) {
    iVar19 = 0;
    pfVar18 = local_100;
    fVar3 = 0.0;
    uVar17 = 1;
    fVar26 = fVar3;
    fVar4 = fVar3;
    fVar6 = fVar3;
    pwVar15 = pLD;
    do {
      if (((uint)uVar17 & (flags | (byte)pLD->onground & 0x30)) != 0) {
        fVar6 = fVar6 + 1.0;
        fVar3 = (fVar3 + pwVar15->fpos[0].m.x) - *pfVar18;
        fVar26 = (fVar26 + pwVar15->fpos[0].m.y) - pfVar18[1];
        fVar4 = (fVar4 + pwVar15->fpos[0].m.z) - pfVar18[2];
      }
      iVar19 = iVar19 + 1;
      uVar17 = (uVar17 & 0x7fffffff) << 1;
      pfVar18 = pfVar18 + 4;
      pwVar15 = (w_2legData *)(pwVar15->fpos + 1);
    } while (iVar19 < 6);
    fVar6 = 1.0 / fVar6;
    fVar4 = fVar6 * fVar4;
    fVar7 = fVar6;
  }
  else {
    fVar3 = (pLD->jumpPos).m.w;
    fVar4 = fVar3 + 1.5707963;
    fVar6 = 3.1415925 - fVar3;
    if (fVar3 - (3.1415925 - fVar3) < 0.0) {
      fVar6 = fVar3;
    }
    fVar7 = 3.1415925 - fVar4;
    if (fVar4 - (3.1415925 - fVar4) < 0.0) {
      fVar7 = fVar4;
    }
    fVar8 = -3.1415925 - fVar3;
    if ((-3.1415925 - fVar3) - fVar6 < 0.0) {
      fVar8 = fVar6;
    }
    fVar3 = -3.1415925 - fVar4;
    if ((-3.1415925 - fVar4) - fVar7 < 0.0) {
      fVar3 = fVar7;
    }
    fVar6 = fVar8 * fVar8;
    fVar7 = fVar3 * fVar3;
    fVar11 = fVar6 * fVar6 * fVar8;
    fVar4 = 0.0;
    fVar9 = fVar7 * fVar7 * fVar3;
    fVar12 = fVar6 * fVar11;
    fVar10 = fVar7 * fVar9;
    fVar6 = fVar6 * fVar12 * 2.601887e-06 +
            fVar12 * -0.0001980741 + fVar11 * 0.0083330255 + fVar6 * fVar8 * -0.16666657 + fVar8;
    fVar7 = fVar7 * fVar10 * 2.601887e-06 +
            fVar10 * -0.0001980741 + fVar9 * 0.0083330255 + fVar7 * fVar3 * -0.16666657 + fVar3;
    fVar3 = fVar26;
  }
  pfVar18 = local_100;
  lVar21 = 6;
  pwVar15 = pLD;
  do {
    pwVar15->fpos[0].m.x = fVar7 * fVar3 + *pfVar18;
    pwVar15->fpos[0].m.y = fVar6 * fVar26 + pfVar18[1];
    pwVar15->fpos[0].m.z = pfVar18[2] + fVar4;
    pfVar13 = pfVar18 + 3;
    pfVar18 = pfVar18 + 4;
    pwVar15->fpos[0].m.w = *pfVar13;
    pwVar15 = (w_2legData *)(pwVar15->fpos + 1);
    lVar21 = lVar21 + -1;
  } while (lVar21 != 0);
  dVar23 = (double)pLD->speed;
  (moby->pos).x = fVar7 * fVar3 + (moby->pos).x;
  (moby->pos).y = fVar6 * fVar26 + (moby->pos).y;
  (moby->pos).z = (moby->pos).z + fVar4;
  pLD->onground = (char)flags;
  if ((double)pLD->acc - z < 0.0) {
    z = (double)pLD->acc;
  }
  if (x <= dVar23) {
    if ((x < dVar23) && (pLD->speed = (float)(dVar23 - z), (double)(float)(dVar23 - z) < x)) {
      pLD->speed = (float)x;
    }
  }
  else {
    pLD->speed = (float)(dVar23 + z);
    if (x < (double)(float)(dVar23 + z)) {
      pLD->speed = (float)x;
    }
  }
  uVar17 = Walk_SolveLegGroundContact(moby,pLD);
  Walk_UpdateStateMachine(x,y,z,moby,pLD);
  if ((pLD->flags & 4U) == 0) {
    MB_GetCollPrimWorld(moby,0,auStack_98,&local_110,&local_a0,&local_9c);
    bVar1 = moby->animationId;
    fVar26 = pLD->collZAdj;
    if ((((uint)bVar1 == pLD->anims[3]->anim) || ((uint)bVar1 == pLD->anims[1]->anim)) ||
       ((uint)bVar1 == pLD->anims[2]->anim)) {
      fVar26 = pLD->stepHeight * 2.0;
      pLD->collZAdj = fVar26;
    }
    else if (((uint)bVar1 == pLD->anims[7]->anim) && ((pLD->onground & 0xfU) != 0)) {
      fVar26 = pLD->stepHeight * 2.0;
      pLD->collZAdj = fVar26;
    }
    else if (bVar1 == moby->updateId) {
      fVar26 = fVar26 * 0.9;
      pLD->collZAdj = fVar26;
    }
    iVar19 = 0;
    local_108 = local_108 + fVar26;
    dVar25 = (double)((moby->pos).x - local_110);
    dVar24 = (double)((moby->pos).y - local_10c);
    dVar23 = (double)((moby->pos).z - local_108);
    do {
      iVar16 = CollPill((double)local_a0,(double)(local_9c - fVar26),&local_110);
      if (iVar16 == 0) break;
      iVar19 = iVar19 + 1;
      uVar17 = uVar17 | 1;
      local_110 = g_CollOutput.push.x;
      local_10c = g_CollOutput.push.y;
      local_108 = g_CollOutput.push.z;
      local_104 = g_CollOutput.push.w;
    } while (iVar19 < 8);
    fVar26 = (float)((double)local_10c - (double)(moby->pos).y);
    fVar3 = (float)((double)local_110 - (double)(moby->pos).x);
    (moby->pos).w = local_104;
    (moby->pos).x = (float)((double)local_110 + dVar25);
    (moby->pos).y = (float)((double)local_10c + dVar24);
    (moby->pos).z = (float)((double)local_108 + dVar23);
    if (SQRT(fVar3 * fVar3 + fVar26 * fVar26) < pLD->speed * 0.5) {
      uVar17 = uVar17 | 2;
    }
  }
  GetMobyJointsWorldPos(moby,6,local_7c,pLD);
  cVar2 = pLD->state;
  fVar26 = pLD->speed;
  fVar3 = (moby->rotation).z;
  if (((cVar2 != '\x12') || ((uint)moby->updateId != pLD->anims[0xc]->anim)) &&
     (moby->unk58 = 1.0, pwVar15 = pLD, cVar2 != '\0')) {
    do {
      if (pwVar15->anims[0]->anim == (uint)moby->updateId) {
        dVar23 = 0.1899999976158142;
        if (((g_FrameTime * 0.19 <= fVar26) ||
            (dVar24 = (double)FastSubRots(fVar3,(float)y), dVar24 <= 0.09239978343248367))
           || (dVar23 = (double)(float)((double)g_FrameTime * dVar23), dVar23 <= x)) {
          dVar23 = (double)pLD->speed;
          fVar26 = pLD->anims[iVar20]->speed;
        }
        else {
          fVar26 = pLD->anims[iVar20]->speed;
        }
        moby->unk58 = animationSpeed * ABS((float)(dVar23 / (double)fVar26));
        return uVar17;
      }
      iVar20 = iVar20 + 1;
      pwVar15 = (w_2legData *)&pwVar15->fpos[0].m.y;
    } while (iVar20 < 0xd);
  }
  return uVar17;
}


// 0x017aa48 (0x3cc bytes)
// inlined: FastAtan2 @0x17ab80
void Walk_ResetLegState(MobyInstance *moby,w_2legData *pLD)

{
  byte bVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  uint uVar8;
  ulonglong *puVar9;
  int iVar10;
  int iVar11;
  w_2legAnim **ppwVar12;
  ulonglong uVar13;
  longlong lVar14;
  char cVar15;
  ulonglong uVar16;
  longlong lVar17;
  float *pfVar18;
  longlong lVar19;
  undefined4 *puVar20;
  ulonglong unaff_r27;
  int iVar21;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  w_2legData *pwVar22;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar23;
  longlong lVar24;
  double dVar25;
  ulonglong in_f31;
  float fVar26;
  
  uVar13 = ZEXT48(&stack0x00000000);
  lVar14 = uVar13 - 0x120;
  puVar9 = (ulonglong *)lVar14;
  *puVar9 = uVar13;
  puVar9[0x26] = in_LR;
  puVar9[0x23] = in_f31;
  puVar9[0x21] = unaff_r30;
  puVar9[0x22] = unaff_r31;
  bVar1 = pLD->legs[0].jiHeel;
  *(uint *)((int)puVar9 + 0xb4) = (uint)(byte)pLD->legs[0].jiFoot;
  bVar2 = pLD->legs[1].jiFoot;
  *(uint *)(puVar9 + 0x17) = (uint)bVar1;
  bVar1 = pLD->legs[1].jiHeel;
  *(uint *)((int)puVar9 + 0xbc) = (uint)bVar2;
  bVar2 = pLD->moveJoint1;
  *(uint *)(puVar9 + 0x18) = (uint)bVar1;
  bVar1 = pLD->moveJoint2;
  *(uint *)((int)puVar9 + 0xc4) = (uint)bVar2;
  puVar9[0x20] = unaff_r29;
  puVar9[0x1f] = unaff_r28;
  puVar9[0x1e] = unaff_r27;
  *(uint *)(puVar9 + 0x19) = (uint)bVar1;
  GetMobyJointsWorldPos(moby,6,uVar13 - 0x6c,pLD);
  iVar21 = 0;
  pwVar22 = pLD;
  do {
    GetBoneTransformations(moby,pwVar22->legs[0].jiFoot,uVar13 - 0xb0);
    uVar7 = *(uint *)(puVar9 + 0x10);
    uVar8 = *(uint *)((int)puVar9 + 0x84);
    fVar3 = ABS(*(float *)(puVar9 + 0x10));
    fVar4 = ABS(*(float *)((int)puVar9 + 0x84));
    fVar26 = 0.0;
    pwVar22->legs[0].hrAct = 0.0;
    pwVar22->legs[0].arAct = 0.0;
    *(float *)(puVar9 + 0x16) = fVar3 - fVar4;
    cVar15 = pwVar22->legs[0].MHip.state;
    uVar16 = (ulonglong)(uVar7 >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar9 + 0x16) >> 0x1e) & 2 | (ulonglong)(uVar8 >> 0x1d) & 4;
    fVar5 = fVar3;
    if (*(float *)(puVar9 + 0x16) - 0.0 < 0.0) {
      fVar5 = fVar4;
    }
    fVar6 = *(float *)(&g_atanQuadrantTable + (int)(uVar16 << 2));
    if (*(float *)(puVar9 + 0x16) - 0.0 < 0.0) {
      fVar4 = fVar3;
    }
    fVar3 = *(float *)(((uint)(uVar16 << 2) | 0x735900) + 4);
    if (0.0 < fVar5) {
      lVar24 = uVar13 - 0x110;
      lVar19 = uVar13 - 0x44;
      lVar17 = uVar13 - 0x54;
      lVar23 = 2;
      fVar4 = (fVar4 - fVar5) / (fVar4 + fVar5);
      fVar5 = fVar4 * fVar4;
      *(float *)(puVar9 + 0x1b) = fVar4;
      *(float *)(puVar9 + 0x1a) = fVar4;
      *(float *)((int)puVar9 + 0xd4) = fVar4;
      *(float *)((int)puVar9 + 0xcc) = fVar4;
      fVar4 = fVar5 * fVar5;
      *(float *)(puVar9 + 0x1a) = *(float *)(puVar9 + 0x1a) * fVar5;
      *(float *)((int)puVar9 + 0xd4) = *(float *)((int)puVar9 + 0xd4) * fVar4;
      *(float *)(puVar9 + 0x1b) = *(float *)(puVar9 + 0x1b) * fVar4 * fVar5;
      do {
        *(float *)((int)lVar24 + 0xcc) = *(float *)((int)lVar24 + 0xbc) * fVar4 * fVar4;
        iVar10 = (int)lVar17;
        lVar17 = lVar17 + 8;
        lVar24 = lVar24 + 8;
        *(float *)((int)lVar19 + 4) = *(float *)(iVar10 + 4) * fVar4 * fVar4;
        lVar19 = lVar19 + 8;
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
      lVar23 = 4;
      lVar19 = uVar13 - 0x54;
      pfVar18 = (float *)&DAT_007358e0;
      lVar24 = lVar14;
      lVar17 = lVar19;
      do {
        fVar4 = *pfVar18;
        fVar5 = pfVar18[1];
        pfVar18 = pfVar18 + 2;
        *(float *)((int)lVar24 + 0xcc) = *(float *)((int)lVar24 + 0xcc) * fVar4;
        lVar24 = lVar24 + 8;
        *(float *)((int)lVar17 + 4) = *(float *)((int)lVar17 + 4) * fVar5;
        lVar17 = lVar17 + 8;
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
      lVar17 = 2;
      lVar24 = lVar14;
      do {
        iVar10 = (int)lVar24;
        lVar24 = lVar24 + 0x10;
        iVar11 = (int)lVar19;
        lVar19 = lVar19 + 0x10;
        fVar26 = fVar26 + *(float *)(iVar10 + 0xcc) + *(float *)(iVar11 + 4) +
                 *(float *)(iVar11 + 8) + *(float *)(iVar11 + 0xc);
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
      fVar26 = (fVar26 + 0.7853982) * fVar6 + fVar3;
    }
    pwVar22->legs[0].frDest = fVar26;
    if (cVar15 == '\0') {
      AttachManipulator(moby,(uint)(byte)pwVar22->legs[0].jiHip,&pwVar22->legs[0].MHip);
    }
    if (pwVar22->legs[0].MAnkle.state == '\0') {
      AttachManipulator
                (moby,(uint)(byte)pwVar22->legs[0].jiAnkle,&pwVar22->legs[0].MAnkle);
    }
    iVar21 = iVar21 + 1;
    pwVar22 = (w_2legData *)&pwVar22->idle;
  } while (iVar21 < 2);
  if (moby->updateId == 0xff) {
    dVar25 = (double)FastIntToDouble(moby->animationFrame);
    fVar26 = MB_GetAnimSeqLength((uint)moby->mClass,(uint)moby->animationId);
    dVar25 = (double)(float)(dVar25 + (double)fVar26);
  }
  else {
    dVar25 = (double)BlendAnimFrame(moby);
  }
  pLD->speed = 0.0;
  pLD->state = '\0';
  iVar21 = 0;
  puVar20 = &DAT_0073a8a4;
  pLD->onground = '\x05';
  pwVar22 = pLD;
  do {
    if (pwVar22->anims[0]->anim == (uint)moby->animationId) {
      fVar26 = moby->unk58;
      fVar3 = pwVar22->anims[0]->speed;
      pLD->state = (char)*puVar20;
      pLD->speed = ABS(fVar26 * fVar3);
    }
    iVar21 = iVar21 + 1;
    puVar20 = puVar20 + 1;
    pwVar22 = (w_2legData *)&pwVar22->fpos[0].m.y;
  } while (iVar21 < 0xd);
  lVar14 = 0;
  lVar24 = 0xd;
  pwVar22 = pLD;
  do {
    ppwVar12 = pwVar22->anims;
    pwVar22 = (w_2legData *)&pwVar22->fpos[0].m.y;
    lVar14 = lVar14 + (ZERO_MASK(((uint)moby->updateId - (*ppwVar12)->anim)) &
                      ZEXT48(*ppwVar12) - lVar14);
    lVar24 = lVar24 + -1;
  } while (lVar24 != 0);
  cVar15 = '\x05';
  if ((w_2legAnim *)lVar14 != (w_2legAnim *)0x0) {
    cVar15 = Walk_GetLegRangeMask(dVar25,(w_2legAnim *)lVar14);
  }
  pLD->onground = cVar15;
  pLD->yrot = 0.0;
  pLD->yrSpeed = 0.0;
  pLD->angVel = 0.0;
  pLD->collZAdj = 0.0;
  pLD->zVel = 0.0;
  pLD->stepZ = 0.0;
  pLD->counter = 0;
  return;
}


// 0x017ae30 (0x300 bytes)
// inlined: FastAtan2 @0x17af4c
undefined8 walk_WalkToPos(double x,MobyInstance *moby,float *param_3,w_2legData *pLD)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  ulonglong *puVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  float *pfVar16;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar17;
  double dVar18;
  ulonglong in_f31;
  
  uVar10 = ZEXT48(&stack0x00000000);
  lVar12 = uVar10 - 0xc0;
  puVar5 = (ulonglong *)lVar12;
  *puVar5 = uVar10;
  puVar5[0x1a] = in_LR;
  puVar5[0x17] = in_f31;
  fVar1 = (moby->pos).y;
  fVar2 = param_3[1];
  fVar3 = (moby->pos).x;
  fVar6 = fVar1 - fVar2;
  fVar4 = *param_3;
  fVar7 = fVar3 - fVar4;
  puVar5[0x15] = unaff_r30;
  puVar5[0x14] = unaff_r29;
  puVar5[0x16] = unaff_r31;
  if (SQRT(fVar7 * fVar7 + fVar6 * fVar6) <= (float)(x * 20.0)) {
    dVar18 = (double)FastSubRots(param_3[3],(moby->rotation).z);
    if ((0.03490658476948738 <= dVar18) &&
       (dVar18 = (double)FastSubRots(param_3[3],(moby->rotation).z),
       dVar18 <= -0.03490658476948738)) {
      return 1;
    }
    walk_Update((double)(float)(x * 0.25),(double)param_3[3],(double)(g_FrameTimeSq * 5.0),moby,pLD);
  }
  else {
    fVar4 = fVar4 - fVar3;
    fVar2 = fVar2 - fVar1;
    fVar6 = ABS(fVar4);
    fVar3 = ABS(fVar2);
    *(float *)(puVar5 + 0xe) = fVar4;
    *(float *)((int)puVar5 + 0x74) = fVar2;
    *(float *)(puVar5 + 0xf) = fVar6 - fVar3;
    dVar18 = 0.0;
    uVar11 = (ulonglong)(*(uint *)(puVar5 + 0xe) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar5 + 0xf) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar5 + 0x74) >> 0x1d) & 4;
    fVar1 = ABS(*(float *)(puVar5 + 0xe));
    if (*(float *)(puVar5 + 0xf) - 0.0 < 0.0) {
      fVar1 = fVar3;
    }
    fVar3 = *(float *)(&g_atanQuadrantTable + (int)(uVar11 << 2));
    fVar2 = *(float *)(((uint)(uVar11 << 2) | 0x735900) + 4);
    fVar4 = ABS(*(float *)((int)puVar5 + 0x74));
    if (*(float *)(puVar5 + 0xf) - 0.0 < 0.0) {
      fVar4 = fVar6;
    }
    if (0.0 < fVar1) {
      lVar15 = uVar10 - 0xb0;
      lVar14 = uVar10 - 0x44;
      lVar13 = uVar10 - 0x34;
      lVar17 = 2;
      fVar1 = (fVar4 - fVar1) / (fVar4 + fVar1);
      fVar4 = fVar1 * fVar1;
      *(float *)(puVar5 + 0x11) = fVar1;
      *(float *)(puVar5 + 0x10) = fVar1;
      *(float *)((int)puVar5 + 0x84) = fVar1;
      *(float *)((int)puVar5 + 0x7c) = fVar1;
      fVar1 = fVar4 * fVar4;
      *(float *)(puVar5 + 0x10) = *(float *)(puVar5 + 0x10) * fVar4;
      *(float *)((int)puVar5 + 0x84) = *(float *)((int)puVar5 + 0x84) * fVar1;
      *(float *)(puVar5 + 0x11) = *(float *)(puVar5 + 0x11) * fVar1 * fVar4;
      do {
        *(float *)((int)lVar15 + 0x7c) = *(float *)((int)lVar15 + 0x6c) * fVar1 * fVar1;
        iVar8 = (int)lVar14;
        lVar15 = lVar15 + 8;
        lVar14 = lVar14 + 8;
        *(float *)((int)lVar13 + 4) = *(float *)(iVar8 + 4) * fVar1 * fVar1;
        lVar13 = lVar13 + 8;
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
      lVar15 = uVar10 - 0x44;
      pfVar16 = (float *)&DAT_007358e0;
      lVar17 = 4;
      lVar13 = lVar15;
      lVar14 = lVar12;
      do {
        fVar1 = *pfVar16;
        fVar4 = pfVar16[1];
        pfVar16 = pfVar16 + 2;
        *(float *)((int)lVar14 + 0x7c) = *(float *)((int)lVar14 + 0x7c) * fVar1;
        lVar14 = lVar14 + 8;
        *(float *)((int)lVar13 + 4) = *(float *)((int)lVar13 + 4) * fVar4;
        lVar13 = lVar13 + 8;
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
      lVar13 = 2;
      do {
        iVar8 = (int)lVar12;
        lVar12 = lVar12 + 0x10;
        iVar9 = (int)lVar15;
        lVar15 = lVar15 + 0x10;
        dVar18 = (double)((float)(dVar18 + (double)*(float *)(iVar8 + 0x7c)) + *(float *)(iVar9 + 4)
                          + *(float *)(iVar9 + 8) + *(float *)(iVar9 + 0xc));
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
      dVar18 = (double)((float)(dVar18 + 0.7853981852531433) * fVar3 + fVar2);
    }
    walk_Update(x,dVar18,(double)(g_FrameTimeSq * 5.0),moby,pLD);
  }
  return 0;
}


// 0x017b140 (0xd4 bytes)
undefined8
walk_TurnToAngle
          (double param_1,undefined8 param_2,MobyInstance *moby,undefined8 param_4,w_2legData *pLD)

{
  undefined8 uVar1;
  double rotZ;
  
  rotZ = (double)FastSubRots((float)param_1,(moby->rotation).z);
  if ((rotZ < 0.03490658476948738) ||
     (rotZ = (double)FastSubRots((float)param_1,(moby->rotation).z),
     -0.03490658476948738 < rotZ)) {
    walk_Update(param_2,param_1,(double)(g_FrameTimeSq * 5.0),moby,pLD);
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}


