// game/update/moby669.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 4 functions, 0x40ac0c-0x40b684
#include <stdlib.h>
#include "game/update/moby669.h"
#include "game/collproc.h"
#include "game/draw.h"
#include "game/hero.h"
#include "game/hud.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/update.h"
#include "idol/fastfunc.h"

// 0x040ac0c (0x14 bytes)
void M669_0040ac0c(void)

{
  DAT_00854f1c = 0x10000;
  return;
}


// 0x040ac50 (0x6a4 bytes)
// strings: 0040ac44: '?fffA ' (raw)

/* Moby 669 */

void UpdateMoby_669(MobyInstance *moby)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  longlong lVar6;
  int iVar8;
  int iVar9;
  uint uVar10;
  longlong lVar7;
  int iVar11;
  longlong lVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  float local_1b0 [4];
  GPiece<16> local_1a0;
  GPiece<16> auStack_190;
  GPiece<16> local_180;
  GPiece<16> local_170;
  float local_160;
  float local_15c;
  float local_158;
  GPiece<16> auStack_150;
  GPiece<48> auStack_140;
  GPiece<48> auStack_110;
  GPiece<64> local_e0;
  
  lVar6 = (longlong)(int)moby;
  pfVar1 = (float *)moby->pVar;
  iVar8 = Hero_IsSwimming();
  if (iVar8 != 0) {
    if (moby->state == 0) {
      moby->updateDistance = -1;
      moby->state = '\x01';
      pfVar1[1] = *pfVar1 * DAT_00854f40 * 0.017453292 * g_FrameTime;
    }
    else if (moby->state < 2) {
      dVar18 = (double)FastWrapRot((moby->rotation).x,pfVar1[1]);
      (moby->rotation).x = (float)dVar18;
      RegisterFuncForMoby(&PTR_M669_0040b310_0070df38,moby);
    }
    dVar18 = 0.0;
    dVar19 = 1.0;
    FastEulerToMtx(auStack_110,lVar6 + 0x40);
    MB_NormalizeMtx3Columns(auStack_110);
    FastMtxCopyNoTranslate(local_e0,auStack_110);
    iVar8 = 0;
    do {
      iVar11 = 0;
      do {
        dVar13 = (double)FastIntToDouble(iVar11);
        dVar17 = 0.01745329238474369;
        dVar20 = 0.5;
        dVar13 = (double)FastAddRots
                                   ((float)((double)(DAT_00854f48 * 0.017453292) * dVar13) * 0.5);
        dVar16 = -(double)(float)((double)DAT_00854f48 * dVar17 - dVar13);
        dVar17 = (double)(float)((double)DAT_00854f44 * dVar17);
        dVar13 = (double)FastIntToDouble(iVar8);
        dVar13 = (double)FastAddRots((float)(dVar13 * 2.094395160675049));
        dVar13 = (double)FastWrapRot((float)dVar17,(float)dVar13);
        dVar13 = (double)FastWrapRot((float)dVar13,(float)dVar16);
        MB_SphericalToVector(DAT_00854f4c,1.5707964,(float)dVar13,local_1b0);
        lVar12 = lVar6 + 0x10;
        FastVecAddSelf(auStack_190,local_1b0,lVar12);
        fVar2 = (moby->pos).y - g_heroPosition.y;
        fVar3 = (moby->pos).x - g_heroPosition.x;
        fVar4 = (moby->pos).z - g_heroPosition.z;
        if (SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2) < 30.0) {
          CollLine(lVar12,local_1b0,9,lVar6,auStack_140);
        }
        iVar9 = FastCheckBsphereInView(0x4034000000000000,local_1a0);
        if ((iVar9 != -1) && (((iVar11 == 0 || (iVar11 == 4)) && (iVar9 = 0, 0 < DAT_00854f50)))) {
          dVar13 = 0.8999999761581421;
          dVar16 = 10.0;
          do {
            uVar10 = rand();
            dVar17 = -1.0;
            if ((uVar10 & 1) != 0) {
              dVar17 = dVar19;
            }
            dVar14 = (double)MB_randRangeFloat
                                       ((float)((double)DAT_00854f58 * dVar20),DAT_00854f58);
            lVar7 = FastDoubleToInt((double)(float)(dVar14 * (double)animationSpeed));
            FastVecSub(&local_160,local_1b0,lVar12);
            dVar15 = (double)SQRT((float)((double)local_158 * dVar17) *
                                  (float)((double)local_158 * dVar17) +
                                  (float)((double)local_160 * dVar17) *
                                  (float)((double)local_160 * dVar17) +
                                  (float)((double)local_15c * dVar17) *
                                  (float)((double)local_15c * dVar17));
            MB_randRangeFloat((float)dVar18,(float)dVar13);
            FastVecAddSelf(auStack_150,local_180,local_170);
            dVar14 = (double)(float)((double)g_FrameTime * dVar16);
            dVar17 = (double)FastIntToDouble
                                       ((int)(lVar7 + (lVar7 + -1 >> 0x3f & 1U - lVar7)) * 4);
            MB_randRangeFloat((float)dVar14,(float)(dVar15 / dVar17));
            uVar5 = DAT_00854f5c;
            dVar17 = (double)DAT_00854f54;
            MB_randInt(0xff);
            SpawnPart_60(dVar17,local_180,local_170,uVar5);
            iVar9 = iVar9 + 1;
          } while (iVar9 < DAT_00854f50);
        }
        iVar11 = iVar11 + 1;
      } while (iVar11 < 5);
      iVar8 = iVar8 + 1;
    } while (iVar8 < 3);
  }
  return;
}


// 0x040b310 (0x360 bytes)
void M669_0040b310(int param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  ulonglong *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  float *pfVar9;
  longlong lVar10;
  ulonglong unaff_r19;
  int iVar11;
  ulonglong unaff_r20;
  int iVar12;
  ulonglong unaff_r21;
  ulonglong unaff_r22;
  ulonglong unaff_r23;
  longlong lVar13;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  longlong lVar14;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  int iVar15;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  longlong lVar16;
  ulonglong in_LR;
  longlong lVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  ulonglong in_f24;
  ulonglong in_f25;
  double dVar21;
  ulonglong in_f26;
  ulonglong in_f27;
  double dVar22;
  ulonglong in_f28;
  double dVar23;
  ulonglong in_f29;
  double dVar24;
  ulonglong in_f30;
  double dVar25;
  ulonglong in_f31;
  double dVar26;
  
  uVar7 = ZEXT48(&stack0x00000000);
  lVar1 = uVar7 - 0x210;
  puVar6 = (ulonglong *)lVar1;
  *puVar6 = uVar7;
  puVar6[0x44] = in_LR;
  puVar6[0x3a] = in_f24;
  puVar6[0x3b] = in_f25;
  puVar6[0x3c] = in_f26;
  puVar6[0x3d] = in_f27;
  puVar6[0x3e] = in_f28;
  puVar6[0x3f] = in_f29;
  puVar6[0x40] = in_f30;
  puVar6[0x41] = in_f31;
  puVar6[0x39] = unaff_r31;
  puVar6[0x36] = unaff_r28;
  uVar2 = worldUpdateTime;
  puVar6[0x38] = unaff_r30;
  puVar6[0x37] = unaff_r29;
  puVar6[0x35] = unaff_r27;
  puVar6[0x34] = unaff_r26;
  puVar6[0x33] = unaff_r25;
  puVar6[0x32] = unaff_r24;
  puVar6[0x31] = unaff_r23;
  puVar6[0x30] = unaff_r22;
  puVar6[0x2f] = unaff_r21;
  puVar6[0x2e] = unaff_r20;
  puVar6[0x2d] = unaff_r19;
  dVar18 = (double)FastIntToDouble(uVar2);
  dVar18 = (double)FastFMod((double)(float)((double)(DAT_00855014 * g_FrameTime)
                                                     * dVar18),0x3ff0000000000000);
  FastEulerToMtx1(uVar7 - 0x1a0,param_1 + 0x40);
  uVar2 = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(puVar6 + 0x14) = *(undefined4 *)(param_1 + 0x10);
  uVar3 = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((int)puVar6 + 0xa4) = uVar2;
  *(undefined4 *)(puVar6 + 0x15) = uVar3;
  *(undefined4 *)((int)puVar6 + 0xac) = 0x3f800000;
  uVar8 = GetEffectTex(0x28);
  puVar6[0x25] = uVar8;
  uVar8 = SCE_GS_SET_TEX1(0,0,1,1,1,0,0xff90);
  puVar6[0x26] = uVar8;
  uVar8 = SCE_GS_SET_CLAMP(0,0,0,0,0,0);
  puVar6[0x24] = uVar8;
  uVar8 = idol_draw::PackCmd(DAT_010cc1f0,DAT_00854f60,DAT_010cc1f4,DAT_00854f64,0x80);
  iVar15 = 0;
  puVar6[0x27] = uVar8;
  lVar16 = lVar1;
  do {
    pfVar9 = (float *)&DAT_00854f74;
    lVar17 = 4;
    lVar10 = lVar1;
    do {
      *(undefined4 *)(puVar6 + 0x28) = 0x3f800000;
      *(undefined4 *)((int)puVar6 + 0x144) = 0xbf20d97c;
      fVar4 = *pfVar9;
      pfVar9 = pfVar9 + 2;
      *(float *)((int)lVar10 + 0x104) =
           (float)((double)*(float *)((int)lVar16 + 0x140) * dVar18 + (double)fVar4);
      lVar10 = lVar10 + 8;
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
    dVar23 = -0.01745329238474369;
    dVar24 = 0.01745329238474369;
    dVar25 = 1.5707963705062866;
    iVar11 = 0;
    dVar26 = 2.094395160675049;
    do {
      iVar12 = 0;
      lVar14 = uVar7 - 0x160;
      pfVar9 = (float *)&DAT_00854f70;
      lVar10 = lVar1;
      lVar17 = lVar1;
      lVar13 = lVar1;
      do {
        *(undefined4 *)(puVar6 + 0x29) = 0x3f800000;
        *(undefined4 *)((int)puVar6 + 0x14c) = 0x3f20d97c;
        dVar19 = (double)DAT_00854f48;
        fVar4 = *pfVar9;
        fVar5 = *(float *)((int)lVar16 + 0x148);
        *(undefined4 *)(puVar6 + 0x2a) = 0;
        *(undefined4 *)((int)puVar6 + 0x15c) = 0;
        *(float *)((int)puVar6 + 0x154) = (float)(dVar19 * dVar23);
        *(float *)(puVar6 + 0x2b) = (float)(dVar19 * dVar24);
        *(float *)((int)lVar10 + 0x100) = (float)((double)fVar5 * dVar18 + (double)fVar4);
        dVar19 = (double)DAT_00854f44;
        dVar22 = (double)*(float *)((int)lVar17 + 0x150);
        fVar4 = 0.0;
        if (iVar12 != 0) {
          fVar4 = DAT_00854f4c;
        }
        dVar21 = (double)fVar4;
        dVar20 = (double)FastIntToDouble(iVar11);
        dVar19 = (double)FastAddRots
                                   ((float)(dVar20 * dVar26 +
                                           (double)(float)(dVar19 * dVar24 + dVar22)));
        MB_SphericalToVector((float)dVar21,(float)dVar25,(float)dVar19,(float *)lVar14);
        iVar12 = iVar12 + 1;
        *(undefined4 *)((int)lVar13 + 0xbc) = 0x3f800000;
        uVar3 = EffectTexHeaders;
        uVar2 = DAT_00855010;
        pfVar9 = pfVar9 + 2;
        lVar14 = lVar14 + 0x10;
        lVar10 = lVar10 + 8;
        lVar17 = lVar17 + 4;
        lVar13 = lVar13 + 0x10;
      } while (iVar12 < 4);
      *(undefined4 *)((int)puVar6 + 0xfc) = DAT_00855010;
      *(undefined4 *)(puVar6 + 0x1f) = uVar2;
      *(undefined4 *)((int)puVar6 + 0xf4) = uVar2;
      *(undefined4 *)(puVar6 + 0x1e) = uVar2;
      FastDrawQuad(uVar7 - 0x160,uVar7 - 0x1a0,0,uVar3,9);
      iVar11 = iVar11 + 1;
    } while (iVar11 < 3);
    iVar15 = iVar15 + 1;
    lVar16 = lVar16 + 4;
  } while (iVar15 < 2);
  return;
}


// 0x040b670 (0x14 bytes)
void M669_0040b670(void)

{
  DAT_00855064 = 0x10000;
  return;
}


