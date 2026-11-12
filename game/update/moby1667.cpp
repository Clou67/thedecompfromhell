// game/update/moby1667.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 5 functions, 0x2a8af0-0x2aa928
// shared update function UpdateMoby_a_lot_0; registered for oClasses 1667, 1668, 1669, 1670, 1671
#include "game/update/moby1667.h"
#include "game/camera.h"
#include "game/draw.h"
#include "game/hero.h"
#include "game/hud.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/sound.h"
#include "game/update.h"
#include "game/update/moby1422.h"
#include "game/vuchain.h"
#include "idol/fastfunc.h"

// 0x02a8af0 (0x274 bytes)
void M1671_002a8af0
               (int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined8 uStack00000040;
  undefined8 uStack00000048;
  GPiece<16> local_70;
  float local_60 [8];
  
  if (((*(char *)(param_1 + 0x31) != '\0') && (((worldUpdateTime ^ param_1 >> 8) & 1) == 0)) &&
     (fVar1 = *(float *)(param_1 + 0x14) - GameCamera.posY,
     fVar2 = *(float *)(param_1 + 0x10) - GameCamera.posX,
     fVar3 = *(float *)(param_1 + 0x18) - GameCamera.posZ,
     SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1) < 75.0)) {
    dVar6 = (double)(DAT_007b5abc * g_FrameTime);
    uStack00000040 = param_3;
    uStack00000048 = param_4;
    dVar4 = (double)MB_randRot();
    dVar5 = (double)MB_randRot();
    MB_SphericalToVector((float)dVar6,(float)dVar4,(float)dVar5,local_60);
    SpawnPart_22
              ((double)(DAT_007b5ac0 * 210000.0),local_70,local_60,DAT_007b5ab0,PTR_DAT_007b5ab4,
               &DAT_007b0000,(int)(animationSpeed * 35.5));
  }
  return;
}


// 0x02a8d68 (0x298 bytes)
void M1671_002a8d68(int param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  MobyInstance *pMVar8;
  longlong lVar9;
  undefined4 *puVar10;
  ushort *puVar12;
  longlong lVar11;
  int iVar13;
  int iVar14;
  longlong lVar15;
  short sVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  GPiece<16> auVar20;
  undefined4 in_vr31_32_0;
  undefined4 in_vr31_32_1;
  undefined4 in_vr31_32_2;
  undefined4 in_vr31_32_3;
  GPiece<16> auVar21;
  int aiStack_c4 [17];
  longlong local_80;
  
  lVar9 = ZEXT48(&stack0x00000000) - 0x70;
  puVar10 = (undefined4 *)lVar9;
  puVar10[3] = in_vr31_32_3;
  puVar10[2] = in_vr31_32_2;
  puVar10[1] = in_vr31_32_1;
  *puVar10 = in_vr31_32_0;
  pMVar8 = g_MobyInstance;
  puVar12 = (ushort *)(&g_MobyGroups)[*(byte *)(param_1 + 0x21)];
  if ((puVar12 != (ushort *)0x0) && (**(int **)(param_1 + 0x78) != -1)) {
    lVar15 = 0;
    local_80 = (longlong)Splines[**(int **)(param_1 + 0x78)]->cnt;
    auVar20 = loadVectorLeftIndexed(lVar9,ZEXT48(Splines[**(int **)(param_1 + 0x78)]));
    auVar21 = vectorConvertFromSignedFixedPointWord(auVar20,0);
    auVar20 = loadVectorLeftIndexed(lVar9,0x2a8d64);
    auVar20 = auVar20 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar20 = vectorSubtractFloatingPoint
                        (auVar21,auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60);
    dVar19 = (double)((float)local_80 - 1.0);
    do {
      uVar1 = *puVar12;
      sVar16 = (short)lVar15 + 1;
      puVar12 = puVar12 + 1;
      *(MobyInstance **)((int)aiStack_c4 + (int)(lVar15 << 2) + 4) = pMVar8 + (uVar1 & 0x7fff);
      lVar15 = (longlong)sVar16;
    } while (-1 < (short)uVar1);
    iVar6 = (int)(lVar15 << 2);
    iVar13 = 0;
    if (0 < sVar16) {
      auVar20 = auVar20 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar20 = auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60;
      lVar9 = lVar15;
      iVar2 = *(int *)((int)aiStack_c4 + iVar6);
      do {
        iVar14 = (int)(lVar15 + -1);
        if (iVar13 == iVar14) {
          iVar3 = *(int *)((int)aiStack_c4 + iVar6);
        }
        else {
          lVar11 = MB_randInt(lVar15 + -1);
          while( true ) {
            iVar7 = (int)(lVar11 << 2);
            iVar3 = *(int *)((int)aiStack_c4 + iVar7 + 4);
            if (iVar3 != 0) break;
            iVar3 = (int)(lVar11 + 1) / iVar14;
            lVar11 = (lVar11 + 1) - ((longlong)iVar3 * (longlong)(int)sVar16 - (longlong)iVar3);
          }
          *(undefined4 *)((int)aiStack_c4 + iVar7 + 4) = 0;
        }
        *(undefined4 *)(iVar3 + 0x94) = 0;
        uVar5 = DAT_007b5aa8;
        local_80 = (longlong)(int)lVar9;
        *(undefined1 *)(iVar3 + 0x30) = 0xff;
        *(short *)(iVar3 + 0x32) = (short)uVar5;
        uVar4 = *(uint *)(iVar3 + 0x78);
        *(float *)(iVar3 + 0x2c) = *(float *)(iVar3 + 0x2c) * DAT_007b5aac;
        dVar18 = (double)local_80;
        dVar17 = (double)FastIntToDouble(lVar15);
        *(float *)(uVar4 + 4) = (float)(dVar18 * (double)(float)(dVar19 / dVar17));
        uVar5 = storeVectorElementWordIndexed(auVar20,0xc,(ulonglong)uVar4);
        *(undefined4 *)(uVar4 + 0xc & 0xfffffffc) = uVar5;
        *(int *)(uVar4 + 0x10) = iVar2;
        dVar17 = (double)MB_randRangeFloat(DAT_007b5a94,DAT_007b5a98);
        *(float *)(uVar4 + 0x14) = (float)dVar17;
        dVar17 = (double)MB_randRangeFloat(DAT_007b5a88,DAT_007b5a8c);
        iVar13 = iVar13 + 1;
        dVar18 = (double)g_FrameTime;
        lVar9 = (longlong)(short)((short)lVar9 + -1);
        *(float *)(uVar4 + 8) = (float)(dVar17 * dVar18);
        *(float *)(uVar4 + 0x18) = (float)(dVar17 * dVar18);
        *(undefined1 *)(iVar3 + 0x20) = 1;
        iVar2 = iVar3;
      } while (iVar13 < sVar16);
    }
  }
  return;
}


// shared update function, registered for oClasses 1667, 1668, 1669, 1670, 1671
// 0x02a9010 (0x48c bytes)
/* Moby 1667
   Moby 1668
   Moby 1669
   Moby 1670
   Moby 1671 */

void UpdateMoby_1667(MobyInstance *moby)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  Spline *pSVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  int iVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  GPiece<32> auStack_90;
  
  piVar3 = (int *)moby->pVar;
  bVar7 = false;
  pSVar4 = Splines[*piVar3];
  if ((moby->oClass & 1) == RATCHET) {
    iVar8 = IsMobyPlayingSound(moby,(int)*(short *)((int)piVar3 + 0x1e));
    if (iVar8 == 0) {
      iVar8 = PlayMobySound(0,4,moby);
      *(short *)((int)piVar3 + 0x1e) = (short)iVar8;
    }
    else {
      bVar7 = true;
    }
  }
  if (moby->state == 0) {
    if (moby->group == -1) {
      DeleteMoby(moby);
      return;
    }
    M1671_002a8d68(moby);
  }
  else if (moby->state < 2) {
    iVar8 = *(int *)(piVar3[4] + 0x78);
    MB_PathEvalSpline((double)(float)piVar3[1],pSVar4);
    (moby->pos).z = (moby->pos).z + (float)piVar3[5];
    piVar3[1] = (int)((float)piVar3[1] + (float)piVar3[2]);
    Delt((float)piVar3[6],DAT_007b5a90 * DAT_0071f418,(float *)(piVar3 + 2));
    fVar1 = DAT_0071f418;
    dVar11 = (double)(*(float *)(iVar8 + 4) - (float)piVar3[1]);
    dVar12 = 0.0;
    if (dVar11 < 0.0) {
      dVar11 = (double)(float)(dVar11 + (double)(float)piVar3[3]);
    }
    if (dVar11 < (double)DAT_007b5a80) {
      uVar5 = piVar3[6] >> 0x1f;
      uVar6 = (int)*(uint *)(iVar8 + 0x18) >> 0x1f;
      iVar2 = *(int *)(iVar8 + 0x18);
      if ((int)((uVar6 >> 1 ^ *(uint *)(iVar8 + 0x18)) - uVar6) <
          (int)((uVar5 >> 1 ^ piVar3[6]) - uVar5)) {
        *(int *)(iVar8 + 0x18) = piVar3[6];
        piVar3[6] = iVar2;
      }
    }
    if (dVar11 < 1.5) {
      dVar10 = (double)(fVar1 * 50.0);
      Delt((float)piVar3[6],fVar1 * 50.0,(float *)(piVar3 + 2));
      Delt(*(float *)(iVar8 + 0x18),(float)dVar10,(float *)(iVar8 + 8));
    }
    if (moby->enabled != '\0' || bVar7) {
      *(undefined2 *)(piVar3 + 7) = 0x1e;
    }
    else if ((double)(DAT_007b5a84 + 1.0) < dVar11) {
      dVar11 = (double)MB_randRangeFloat(DAT_007b5a94,DAT_007b5a98);
      if ((*(char *)(piVar3[4] + 0x31) == '\0') || (*(short *)(piVar3 + 7) == 0)) {
        fVar1 = DAT_007b5aa4 * g_FrameTime + (float)piVar3[1];
      }
      else {
        dVar10 = (double)MB_randRangeFloat(DAT_007b5a80,DAT_007b5a84);
        fVar1 = (float)((double)*(float *)(iVar8 + 4) - dVar10);
        *(short *)(piVar3 + 7) = *(short *)(piVar3 + 7) + -1;
      }
      dVar10 = (double)fVar1;
      if (dVar10 < dVar12) {
        dVar10 = (double)(float)(dVar10 + (double)(float)piVar3[3]);
      }
      MB_PathEvalSpline(dVar10,pSVar4);
      iVar8 = FastCheckBsphereInView((double)(longlong)DAT_007b5aa8,auStack_90);
      if (iVar8 == -1) {
        dVar12 = (double)MB_randRangeFloat(DAT_007b5a88,DAT_007b5a8c);
        dVar9 = (double)g_FrameTime;
        piVar3[1] = (int)(float)dVar10;
        piVar3[5] = (int)(float)dVar11;
        piVar3[6] = (int)(float)(dVar12 * dVar9);
      }
    }
    uVar5 = piVar3[1] >> 0x1f;
    uVar6 = piVar3[3] >> 0x1f;
    if ((int)((uVar6 >> 1 ^ piVar3[3]) - uVar6) < (int)((uVar5 >> 1 ^ piVar3[1]) - uVar5)) {
      piVar3[1] = (int)((float)piVar3[1] - (float)piVar3[3]);
    }
  }
  if ((moby->oClass & 1) != RATCHET) {
    M1671_002a8af0(moby);
  }
  return;
}


// 0x02a94c8 (0x9e8 bytes)
// inlined: FastRSqrt @0x2a9660, FastRSqrt @0x2a96e8, FastRSqrt @0x2a9ab0
void M1671_002a94c8(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  int iVar16;
  int iVar17;
  ulonglong *puVar18;
  float fVar19;
  float fVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  undefined8 uVar23;
  float *pfVar24;
  ulonglong unaff_r21;
  int iVar25;
  ulonglong unaff_r22;
  ulonglong unaff_r23;
  longlong lVar26;
  ulonglong unaff_r24;
  undefined4 *puVar27;
  ulonglong unaff_r25;
  undefined4 *puVar28;
  ulonglong unaff_r26;
  float *pfVar29;
  ulonglong unaff_r27;
  longlong lVar30;
  float *pfVar31;
  ulonglong unaff_r28;
  longlong lVar32;
  ulonglong unaff_r29;
  longlong lVar33;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  longlong lVar34;
  longlong lVar35;
  ulonglong in_LR;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  ulonglong in_f25;
  ulonglong in_f26;
  ulonglong in_f27;
  ulonglong in_f28;
  ulonglong in_f29;
  ulonglong in_f30;
  double dVar43;
  ulonglong in_f31;
  double dVar44;
  double dVar45;
  
  uVar21 = ZEXT48(&stack0x00000000);
  lVar35 = uVar21 - 0x280;
  puVar18 = (ulonglong *)lVar35;
  *puVar18 = uVar21;
  puVar18[0x52] = in_LR;
  puVar18[0x49] = in_f25;
  puVar18[0x4a] = in_f26;
  puVar18[0x4b] = in_f27;
  puVar18[0x4c] = in_f28;
  puVar18[0x4d] = in_f29;
  puVar18[0x4e] = in_f30;
  puVar18[0x4f] = in_f31;
  puVar18[0x47] = unaff_r30;
  puVar18[0x48] = unaff_r31;
  iVar16 = *(int *)(param_1 + 0x78);
  puVar18[0x46] = unaff_r29;
  iVar25 = *(int *)(iVar16 + 8);
  puVar18[0x45] = unaff_r28;
  puVar18[0x44] = unaff_r27;
  puVar18[0x43] = unaff_r26;
  puVar18[0x42] = unaff_r25;
  puVar18[0x41] = unaff_r24;
  puVar18[0x40] = unaff_r23;
  puVar18[0x3f] = unaff_r22;
  puVar18[0x3e] = unaff_r21;
  if ((iVar25 != 0) && (*(short *)(iVar25 + 0xa6) == 0x260)) {
    uVar22 = SCE_GS_SET_TEX1(0,0,1,1,1,0,0xff90);
    puVar18[0x3a] = uVar22;
    uVar22 = SCE_GS_SET_CLAMP(0,0,0,0,0,0);
    puVar18[0x38] = uVar22;
    uVar22 = idol_draw::PackCmd(0,2,0,1,0x80);
    iVar17 = *(int *)(iVar16 + 4);
    puVar18[0x3b] = uVar22;
    if (iVar17 == 0) {
      *(undefined4 *)(puVar18 + 0x3d) = 2;
      *(undefined4 *)((int)puVar18 + 0x1ec) = 3;
      GetMobyJointsWorldPos(iVar25,2,uVar21 - 0x98,uVar21 - 0x210);
    }
    else {
      *(undefined4 *)(puVar18 + 0x3c) = 0;
      *(undefined4 *)((int)puVar18 + 0x1e4) = 1;
      GetMobyJointsWorldPos(iVar25,2,uVar21 - 0xa0,uVar21 - 0x210);
    }
    fVar6 = *(float *)((int)puVar18 + 0x84);
    fVar1 = *(float *)((int)puVar18 + 0x74) - fVar6;
    fVar7 = *(float *)(puVar18 + 0x10);
    fVar3 = *(float *)(puVar18 + 0xe) - fVar7;
    fVar8 = *(float *)(puVar18 + 0x11);
    fVar5 = *(float *)(puVar18 + 0xf) - fVar8;
    dVar44 = 0.0;
    fVar4 = fVar5 * fVar5 + fVar3 * fVar3 + fVar1 * fVar1;
    dVar37 = dVar44;
    dVar38 = dVar44;
    dVar39 = dVar44;
    if (SQRT(fVar4) != 0.0) {
      fVar2 = 1.0 / SQRT(fVar4);
      fVar2 = -(fVar4 * fVar2 * fVar2 - 1.0) * fVar2 * 0.5 + fVar2;
      fVar2 = -(fVar4 * fVar2 * fVar2 - 1.0) * fVar2 * 0.5 + fVar2;
      fVar2 = -(fVar4 * fVar2 * fVar2 - 1.0) * fVar2 * 0.5 + fVar2;
      dVar39 = (double)(fVar3 * fVar2);
      dVar38 = (double)(fVar1 * fVar2);
      dVar37 = (double)(fVar5 * fVar2);
    }
    *(float *)(puVar18 + 0x16) = (float)dVar39;
    *(float *)((int)puVar18 + 0xb4) = (float)dVar38;
    *(float *)(puVar18 + 0x17) = (float)dVar37;
    *(undefined4 *)((int)puVar18 + 0xbc) = 0;
    fVar1 = (float)(dVar39 * dVar39 + --(double)(float)(dVar37 * dVar37));
    dVar41 = dVar44;
    dVar40 = dVar44;
    if (SQRT(fVar1) != 0.0) {
      fVar3 = 1.0 / SQRT(fVar1);
      fVar3 = -(fVar1 * fVar3 * fVar3 - 1.0) * fVar3 * 0.5 + fVar3;
      fVar3 = -(fVar1 * fVar3 * fVar3 - 1.0) * fVar3 * 0.5 + fVar3;
      dVar40 = (double)(-(fVar1 * fVar3 * fVar3 - 1.0) * fVar3 * 0.5 + fVar3);
      dVar41 = (double)(float)(dVar39 * dVar40);
      dVar40 = -(double)(float)(dVar37 * dVar40);
    }
    iVar25 = 0;
    *(float *)(puVar18 + 0x12) = (float)dVar40;
    fVar1 = (float)(dVar40 * dVar38 - 0.0);
    *(undefined4 *)((int)puVar18 + 0x94) = 0;
    *(float *)(puVar18 + 0x13) = (float)dVar41;
    *(undefined4 *)((int)puVar18 + 0x9c) = 0;
    *(undefined4 *)((int)puVar18 + 0xac) = 0;
    *(float *)(puVar18 + 0x18) = fVar7;
    fVar3 = (float)(dVar37 * 0.0 - (double)(float)(dVar41 * dVar38));
    fVar4 = (float)(dVar41 * dVar39 - (double)(float)(dVar40 * dVar37));
    *(float *)(puVar18 + 0x15) = fVar1;
    *(float *)((int)puVar18 + 0xc4) = fVar6;
    *(float *)(puVar18 + 0x19) = fVar8;
    *(float *)(puVar18 + 0x14) = fVar3;
    *(float *)((int)puVar18 + 0xa4) = fVar4;
    dVar43 = 1.0;
    *(undefined4 *)((int)puVar18 + 0xcc) = 0x3f800000;
    *(float *)(param_1 + 0xc0) = (float)dVar40;
    *(undefined4 *)(param_1 + 0xc4) = 0;
    *(float *)(param_1 + 200) = (float)dVar41;
    *(undefined4 *)(param_1 + 0xcc) = 0;
    *(float *)(param_1 + 0xd0) = fVar3;
    *(float *)(param_1 + 0xd4) = fVar4;
    *(float *)(param_1 + 0xd8) = fVar1;
    *(undefined4 *)(param_1 + 0xdc) = 0;
    *(float *)(param_1 + 0xe0) = (float)dVar39;
    *(float *)(param_1 + 0xe4) = (float)dVar38;
    *(float *)(param_1 + 0xe8) = (float)dVar37;
    *(undefined4 *)(param_1 + 0xec) = 0;
    *(float *)(param_1 + 0x10) = fVar7;
    *(float *)(param_1 + 0x14) = fVar6;
    *(float *)(param_1 + 0x18) = fVar8;
    *(undefined4 *)(param_1 + 0x1c) = 0x3f800000;
    FastMtx4Identity((float *)(uVar21 - 0x170));
    *(undefined4 *)(puVar18 + 0x28) = 0;
    *(undefined4 *)((int)puVar18 + 0x144) = 0;
    *(undefined4 *)((int)puVar18 + 0x14c) = 0x3f800000;
    *(undefined4 *)(puVar18 + 0x29) = 0xbd99999a;
    FastVecMtx4Mul(uVar21 - 0x1b0,uVar21 - 0x1f0,uVar21 - 0x170);
    uVar22 = GetEffectTex(0xc);
    puVar18[0x39] = uVar22;
    lVar30 = uVar21 - 0x130;
    dVar37 = 0.10000000149011612;
    pfVar29 = (float *)&DAT_007b7040;
    puVar27 = &DAT_007b70c4;
    puVar28 = &DAT_007b70c0;
    lVar26 = lVar30;
    lVar32 = lVar35;
    lVar33 = lVar35;
    lVar34 = lVar35;
    pfVar31 = pfVar29;
    do {
      *(undefined4 *)((int)lVar34 + 400) = 0x80808080;
      pfVar24 = (float *)lVar26;
      if ((iVar25 == 0) || (iVar25 == 2)) {
        fVar6 = *(float *)(iVar16 + 0x2c);
        *pfVar24 = *pfVar31 * fVar6;
        pfVar24[1] = pfVar31[1] * fVar6;
        pfVar24[2] = pfVar31[2] * fVar6;
        pfVar24[3] = pfVar31[3];
      }
      else {
        fVar6 = *(float *)(iVar16 + 0x2c);
        *pfVar24 = *pfVar31 * fVar6;
        pfVar24[1] = pfVar31[1] * fVar6;
        pfVar24[2] = pfVar31[2] * fVar6;
        pfVar24[3] = pfVar31[3];
        dVar38 = (double)MB_randRangeFloat((float)dVar44,(float)dVar37);
        *(float *)((int)lVar33 + 0x158) = (float)((double)*(float *)((int)lVar33 + 0x158) - dVar38);
      }
      iVar25 = iVar25 + 1;
      uVar9 = *puVar27;
      *(undefined4 *)((int)lVar32 + 0x1a0) = *puVar28;
      lVar26 = lVar26 + 0x10;
      *(undefined4 *)((int)lVar32 + 0x1a4) = uVar9;
      pfVar31 = pfVar31 + 4;
      lVar34 = lVar34 + 4;
      puVar28 = puVar28 + 2;
      puVar27 = puVar27 + 2;
      lVar33 = lVar33 + 0x10;
      lVar32 = lVar32 + 8;
    } while (iVar25 < 4);
    FastDrawQuad(uVar21 - 0x130,uVar21 - 0x1b0,0,EffectTexHeaders,9);
    iVar25 = 0;
    pfVar31 = (float *)&DAT_007b7080;
    lVar26 = lVar30;
    do {
      pfVar24 = (float *)lVar26;
      if ((iVar25 == 0) || (iVar25 == 2)) {
        fVar6 = *(float *)(iVar16 + 0x2c);
        *pfVar24 = *pfVar31 * fVar6;
        pfVar24[1] = pfVar31[1] * fVar6;
        pfVar24[2] = pfVar31[2] * fVar6;
        pfVar24[3] = pfVar31[3];
      }
      else {
        fVar6 = *(float *)(iVar16 + 0x2c);
        *pfVar24 = *pfVar31 * fVar6;
        pfVar24[1] = pfVar31[1] * fVar6;
        pfVar24[2] = pfVar31[2] * fVar6;
        pfVar24[3] = pfVar31[3];
        dVar38 = (double)MB_randRangeFloat((float)dVar44,(float)dVar37);
        *(float *)((int)lVar35 + 0x158) = (float)((double)*(float *)((int)lVar35 + 0x158) - dVar38);
      }
      iVar25 = iVar25 + 1;
      lVar26 = lVar26 + 0x10;
      pfVar31 = pfVar31 + 4;
      lVar35 = lVar35 + 0x10;
    } while (iVar25 < 4);
    FastDrawQuad(uVar21 - 0x130,uVar21 - 0x1b0,0,EffectTexHeaders,9);
    uVar22 = GetEffectTex(0xb);
    puVar18[0x39] = uVar22;
    uVar9 = EffectTexHeaders;
    fVar7 = *(float *)((int)puVar18 + 0xb4) * -0.13 + *(float *)((int)puVar18 + 0xc4);
    fVar1 = *(float *)(puVar18 + 0x16) * -0.13 + *(float *)(puVar18 + 0x18);
    fVar8 = *(float *)(puVar18 + 0x17) * -0.13 + *(float *)(puVar18 + 0x19);
    fVar3 = GameCamera.posY - fVar7;
    fVar5 = GameCamera.posX - fVar1;
    fVar6 = *(float *)((int)puVar18 + 0xbc);
    fVar4 = GameCamera.posZ - fVar8;
    dVar40 = (double)(float)GameCamera.field8_0x14c;
    dVar42 = (double)(fVar4 * fVar4 + fVar5 * fVar5 + fVar3 * fVar3);
    dVar38 = dVar44;
    dVar39 = dVar44;
    dVar41 = dVar44;
    if ((double)(float)SQRT(dVar42) != dVar44) {
      dVar38 = 1.0 / SQRT(dVar42);
      dVar38 = (double)(float)(-(double)(float)((double)(float)(dVar42 * dVar38) * dVar38 - dVar43)
                               * (double)(float)(dVar38 * 0.5) + dVar38);
      dVar38 = (double)(float)(-(double)(float)((double)(float)(dVar42 * dVar38) * dVar38 - dVar43)
                               * (double)(float)(dVar38 * 0.5) + dVar38);
      fVar2 = (float)(-(double)(float)((double)(float)(dVar42 * dVar38) * dVar38 - dVar43) *
                      (double)(float)(dVar38 * 0.5) + dVar38);
      dVar41 = (double)(fVar5 * fVar2);
      dVar39 = (double)(fVar3 * fVar2);
      dVar38 = (double)(fVar4 * fVar2);
    }
    fVar4 = (float)((double)DAT_00969f78 * dVar41 -
                   (double)(float)((double)g_heroGravityDir * dVar38));
    fVar5 = (float)((double)DAT_00969f74 * dVar38 - (double)(float)((double)DAT_00969f78 * dVar39));
    fVar2 = (float)((double)g_heroGravityDir * dVar39 -
                   (double)(float)((double)DAT_00969f74 * dVar41));
    lVar35 = 4;
    *(undefined4 *)((int)puVar18 + 0x19c) = 0x7f2020ff;
    *(undefined4 *)(puVar18 + 0x33) = 0x7f2020ff;
    *(undefined4 *)((int)puVar18 + 0x194) = 0x7f2020ff;
    *(undefined4 *)(puVar18 + 0x32) = 0x7f2020ff;
    dVar42 = (double)SQRT(fVar2 * fVar2 + fVar5 * fVar5 + fVar4 * fVar4);
    fVar3 = (float)(-1.0 / dVar42);
    dVar43 = dVar44;
    if (dVar44 - dVar42 < 0.0) {
      dVar43 = (double)(fVar5 * fVar3);
    }
    dVar36 = dVar44;
    if (dVar44 - dVar42 < 0.0) {
      dVar36 = (double)(fVar4 * fVar3);
    }
    dVar45 = dVar44;
    if (dVar44 - dVar42 < 0.0) {
      dVar45 = (double)(fVar2 * fVar3);
    }
    if (dVar42 - dVar44 < 0.0) {
      dVar43 = (double)(fVar5 * fVar3);
    }
    if (dVar42 - dVar44 < 0.0) {
      dVar36 = (double)(fVar4 * fVar3);
    }
    if (dVar42 - dVar44 < 0.0) {
      dVar45 = (double)(fVar2 * fVar3);
    }
    do {
      fVar4 = *pfVar29;
      fVar3 = (float)((double)fVar4 * dVar37);
      dVar42 = (double)fVar3;
      pfVar31 = (float *)lVar30;
      *pfVar31 = fVar3;
      dVar44 = (double)pfVar29[1];
      pfVar31[1] = (float)(dVar44 * dVar37);
      fVar3 = (float)((double)pfVar29[2] * dVar37);
      pfVar31[2] = fVar3;
      fVar5 = pfVar29[3];
      pfVar29 = pfVar29 + 4;
      pfVar31[3] = fVar5 * fVar6 + (float)((double)fVar4 * (double)(float)(dVar37 * dVar40));
      *pfVar31 = fVar5 * fVar1 +
                 fVar3 * (float)(dVar39 * dVar45 - (double)(float)(dVar38 * dVar36)) +
                 (float)(dVar42 * dVar41 +
                        (double)(float)(dVar44 * (double)(float)(dVar37 * dVar43)));
      pfVar31[1] = fVar5 * fVar7 +
                   fVar3 * (float)(dVar38 * dVar43 - (double)(float)(dVar41 * dVar45)) +
                   (float)(dVar42 * dVar39 +
                          (double)(float)(dVar44 * (double)(float)(dVar37 * dVar36)));
      pfVar31[2] = fVar5 * fVar8 +
                   fVar3 * (float)(dVar41 * dVar36 - (double)(float)(dVar39 * dVar43)) +
                   (float)(dVar42 * dVar38 +
                          (double)(float)(dVar44 * (double)(float)(dVar37 * dVar45)));
      lVar30 = lVar30 + 0x10;
      lVar35 = lVar35 + -1;
    } while (lVar35 != 0);
    FastDrawQuad(uVar21 - 0x130,0,0,uVar9,9);
    uVar23 = GetEffectTex(10);
    SetGSReg(0x18,uVar23);
    SetGSReg(3,puVar18[0x3b]);
    uVar23 = SCE_GS_SET_CLAMP(0,0,0,0,0,0);
    SetGSReg(6,uVar23);
    uVar23 = SCE_GS_SET_TEX1(0,0,1,1,1,0,0xff90);
    SetGSReg(0x1a,uVar23);
    uVar23 = FUN_00502e50(0);
    SetGSReg(8,uVar23);
    STUB_00071170();
    pfVar24 = (float *)&DAT_00faf858;
    iVar25 = 0;
    pfVar29 = (float *)&DAT_007b5ad0;
    fVar6 = *(float *)(puVar18 + 0x12);
    pfVar31 = (float *)&DAT_007b6714;
    fVar7 = *(float *)(puVar18 + 0x14);
    fVar8 = *(float *)(puVar18 + 0x16);
    fVar1 = *(float *)(puVar18 + 0x18);
    fVar3 = *(float *)((int)puVar18 + 0x94);
    fVar4 = *(float *)((int)puVar18 + 0xa4);
    fVar5 = *(float *)((int)puVar18 + 0xb4);
    fVar2 = *(float *)((int)puVar18 + 0xc4);
    fVar10 = *(float *)(puVar18 + 0x13);
    fVar11 = *(float *)(puVar18 + 0x15);
    fVar12 = *(float *)(puVar18 + 0x17);
    fVar13 = *(float *)(puVar18 + 0x19);
    do {
      fVar14 = *(float *)(iVar16 + 0x20);
      fVar19 = pfVar29[1] * fVar14;
      fVar20 = *pfVar29 * fVar14;
      fVar14 = pfVar29[2] * fVar14;
      fVar15 = pfVar29[3];
      *pfVar24 = fVar15 * fVar1 + fVar14 * fVar8 + fVar20 * fVar6 + fVar19 * fVar7;
      pfVar24[1] = fVar15 * fVar2 + fVar14 * fVar5 + fVar20 * fVar3 + fVar19 * fVar4;
      pfVar24[2] = fVar15 * fVar13 + fVar14 * fVar12 + fVar20 * fVar10 + fVar19 * fVar11;
      fVar14 = *pfVar31;
      fVar15 = fVar14 - 0.025;
      *pfVar31 = fVar15;
      if (fVar15 < -7.0) {
        *pfVar31 = fVar14 - -6.975;
      }
      iVar25 = iVar25 + 1;
      pfVar29 = pfVar29 + 4;
      pfVar24 = pfVar24 + 3;
      pfVar31 = pfVar31 + 2;
    } while (iVar25 < 0xc4);
    DrawMeshSet(0x94,&DAT_00faf858,&DAT_007b6d30,&DAT_007b6710,9);
    DrawMeshSet(0x32,&DAT_00faff30,&PTR_DAT_007b6f78,&DAT_007b6ba0,9);
  }
  return;
}


// 0x02a9f18 (0xa10 bytes)
void M167_002a9f18(int param_1)

{
  longlong lVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  undefined4 *puVar15;
  ulonglong *puVar16;
  PlayerState PVar17;
  ulonglong uVar18;
  undefined4 uVar19;
  PlayerState PVar20;
  int iVar21;
  int iVar22;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  int iVar23;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong uVar24;
  ulonglong unaff_r30;
  longlong lVar25;
  ulonglong unaff_r31;
  ulonglong in_LR;
  double dVar26;
  double dVar27;
  double dVar28;
  ulonglong in_f25;
  double dVar29;
  ulonglong in_f26;
  double dVar30;
  ulonglong in_f27;
  double dVar31;
  ulonglong in_f28;
  ulonglong in_f29;
  double dVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  ulonglong in_f30;
  double dVar35;
  ulonglong in_f31;
  double dVar36;
  GPiece<16> auVar37;
  GPiece<16> auVar38;
  GPiece<16> auVar39;
  GPiece<16> auVar40;
  GPiece<16> auVar41;
  GPiece<16> auVar42;
  GPiece<16> auVar43;
  GPiece<16> auVar44;
  GPiece<16> auVar45;
  GPiece<16> auVar46;
  GPiece<16> auVar47;
  GPiece<16> auVar48;
  GPiece<16> auVar49;
  GPiece<16> auVar50;
  GPiece<16> auVar51;
  GPiece<16> auVar52;
  GPiece<16> auVar53;
  GPiece<16> auVar54;
  GPiece<16> auVar55;
  GPiece<16> auVar56;
  
  uVar18 = ZEXT48(&stack0x00000000);
  lVar1 = uVar18 - 0x1a0;
  puVar16 = (ulonglong *)lVar1;
  *puVar16 = uVar18;
  puVar16[0x36] = in_LR;
  puVar16[0x2d] = in_f25;
  puVar16[0x2e] = in_f26;
  puVar16[0x2f] = in_f27;
  puVar16[0x30] = in_f28;
  puVar16[0x31] = in_f29;
  puVar16[0x32] = in_f30;
  puVar16[0x33] = in_f31;
  puVar16[0x2c] = unaff_r31;
  puVar16[0x2a] = unaff_r29;
  puVar16[0x28] = unaff_r27;
  puVar16[0x2b] = unaff_r30;
  puVar16[0x29] = unaff_r28;
  puVar16[0x27] = unaff_r26;
  puVar15 = *(undefined4 **)(param_1 + 0x78);
  uVar24 = ZEXT48(puVar15);
  dVar26 = (double)MB_randRot();
  dVar35 = 3.141592502593994;
  fVar3 = (float)(dVar26 + 1.570796251296997);
  dVar32 = -3.141592502593994;
  dVar26 = -0.16666656732559204;
  dVar31 = 0.008333025500178337;
  dVar30 = -0.0001980741071747616;
  dVar29 = 2.601886990305502e-06;
  dVar36 = 0.05000000074505806;
  fVar4 = 3.1415925 - fVar3;
  if (fVar3 - (3.1415925 - fVar3) < 0.0) {
    fVar4 = fVar3;
  }
  fVar5 = -3.1415925 - fVar3;
  if ((-3.1415925 - fVar3) - fVar4 < 0.0) {
    fVar5 = fVar4;
  }
  fVar6 = fVar5 * fVar5;
  fVar3 = fVar6 * fVar6 * fVar5;
  fVar4 = fVar6 * fVar3;
  *(float *)(puVar16 + 0xe) =
       (fVar6 * fVar4 * 2.601887e-06 +
       fVar4 * -0.0001980741 + fVar3 * 0.0083330255 + fVar6 * fVar5 * -0.16666657 + fVar5) * 0.05;
  dVar27 = (double)MB_randRot();
  *(undefined4 *)(puVar16 + 0xf) = 0;
  dVar28 = (double)(float)(dVar35 - dVar27);
  if (dVar27 - (double)(float)(dVar35 - dVar27) < 0.0) {
    dVar28 = dVar27;
  }
  dVar35 = (double)(float)(dVar32 - dVar27);
  if ((double)(float)(dVar32 - dVar27) - dVar28 < 0.0) {
    dVar35 = dVar28;
  }
  dVar32 = (double)(float)(dVar35 * dVar35);
  dVar27 = (double)(float)(dVar32 * (double)(float)(dVar32 * dVar35));
  dVar28 = (double)(float)(dVar32 * dVar27);
  *(float *)((int)puVar16 + 0x74) =
       (float)((double)(float)((double)(float)(dVar32 * dVar28) * dVar29 +
                              (double)(float)(dVar28 * dVar30 +
                                             (double)(float)(dVar27 * dVar31 +
                                                            (double)(float)((double)(float)(dVar32 *
                                                                                           dVar35) *
                                                                            dVar26 + dVar35)))) *
              dVar36);
  dVar26 = (double)MB_randRangeFloat(0.01,0.03);
  fVar3 = *(float *)((int)puVar16 + 0x74);
  fVar4 = *(float *)(puVar16 + 0xe);
  fVar5 = *(float *)(param_1 + 0xd4);
  fVar6 = *(float *)(param_1 + 0xdc);
  fVar7 = *(float *)(param_1 + 0xe4);
  fVar8 = *(float *)(param_1 + 0xec);
  fVar9 = *(float *)(param_1 + 0xd8);
  fVar10 = *(float *)(param_1 + 0xe8);
  fVar11 = *(float *)(param_1 + 0xc4);
  fVar12 = *(float *)(param_1 + 0xcc);
  fVar13 = *(float *)(param_1 + 200);
  lVar25 = uVar18 - 0x130;
  *(float *)(puVar16 + 0xe) =
       *(float *)(param_1 + 0xc0) * fVar4 + *(float *)(param_1 + 0xd0) * fVar3 +
       -(float)(dVar26 * (double)*(float *)(param_1 + 0xe0));
  *(float *)((int)puVar16 + 0x74) =
       fVar11 * fVar4 + fVar5 * fVar3 + -(float)(dVar26 * (double)fVar7);
  PVar20 = g_heroState;
  *(float *)(puVar16 + 0xf) = fVar13 * fVar4 + fVar9 * fVar3 + -(float)(dVar26 * (double)fVar10);
  *(float *)((int)puVar16 + 0x7c) =
       fVar12 * fVar4 + fVar6 * fVar3 + -(float)(dVar26 * (double)fVar8) +
       *(float *)((int)puVar16 + 0x7c);
  uVar19 = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(puVar16 + 0x10) = *(undefined4 *)(param_1 + 0x10);
  uVar14 = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((int)puVar16 + 0x84) = uVar19;
  uVar19 = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(puVar16 + 0x11) = uVar14;
  *(undefined4 *)((int)puVar16 + 0x8c) = uVar19;
  dVar26 = 10.5;
  uVar33 = 0x40c3880000000000;
  if (PVar20 == THRUSTER_PACK_HOVER) {
    if (worldUpdateTime % 3 == 0) {
      puVar16[0x18] = (longlong)(int)(animationSpeed * 10.5);
      SpawnPart_21(0x40c3880000000000,uVar18 - 0x120,lVar25,0x4f007fff,0x1fffffff);
    }
  }
  else {
    puVar16[0x18] = (longlong)(int)(animationSpeed * 10.5);
    SpawnPart_21(0x40c3880000000000,uVar18 - 0x120,lVar25,0x4f007fff,0x1fffffff);
  }
  if (puVar15[3] != 0) {
    fVar3 = (float)puVar15[5] - *(float *)((int)puVar16 + 0x84);
    auVar37 = loadVectorLeftIndexed(0x14,uVar24);
    auVar39 = loadVectorRightIndexed(0x24,uVar24);
    auVar40 = loadVectorLeftIndexed(0x10,uVar24);
    auVar41 = loadVectorRightIndexed(0x20,uVar24);
    auVar43 = loadVectorLeftIndexed(0x84,lVar1);
    auVar44 = ZEXT416(0xffffffff);
    auVar44 = auVar44 | auVar44 << 0x20 | auVar44 << 0x40 | auVar44 << 0x60;
    auVar38 = vectorSubtractFloatingPoint(auVar37 | auVar39,auVar43);
    auVar42 = loadVectorLeftIndexed(0x80,lVar1);
    auVar44 = vectorShiftLeftIntegerWord(auVar44,auVar44);
    auVar40 = vectorSubtractFloatingPoint(auVar40 | auVar41,auVar42);
    auVar37 = loadVectorLeftIndexed(0x18,uVar24);
    auVar41 = loadVectorRightIndexed(0x28,uVar24);
    auVar46 = loadVectorLeftIndexed(0x88,lVar1);
    auVar39 = vectorMultiplyAddFloatingPoint(auVar38,auVar38,auVar44);
    auVar45 = vectorSubtractFloatingPoint(auVar37 | auVar41,auVar46);
    auVar44 = ZEXT416(0xffffffff);
    auVar37 = auVar44 | auVar44 << 0x20 | auVar44 << 0x40 | auVar44 << 0x60;
    auVar44 = ZEXT416(0xffffffff);
    auVar41 = auVar44 | auVar44 << 0x20 | auVar44 << 0x40 | auVar44 << 0x60;
    auVar44 = ZEXT416(0xffffffff);
    auVar44 = auVar44 | auVar44 << 0x20 | auVar44 << 0x40 | auVar44 << 0x60;
    auVar47 = vectorShiftLeftIntegerWord(auVar37,auVar37);
    auVar48 = vectorShiftLeftIntegerWord(auVar41,auVar41);
    fVar3 = SQRT(((float)puVar15[6] - *(float *)(puVar16 + 0x11)) *
                 ((float)puVar15[6] - *(float *)(puVar16 + 0x11)) +
                 ((float)puVar15[4] - *(float *)(puVar16 + 0x10)) *
                 ((float)puVar15[4] - *(float *)(puVar16 + 0x10)) + fVar3 * fVar3);
    auVar49 = vectorShiftLeftIntegerWord(auVar44,auVar44);
    auVar44 = ZEXT416(0xffffffff);
    auVar41 = auVar44 | auVar44 << 0x20 | auVar44 << 0x40 | auVar44 << 0x60;
    auVar44 = ZEXT416(0xffffffff);
    auVar37 = auVar44 | auVar44 << 0x20 | auVar44 << 0x40 | auVar44 << 0x60;
    auVar44 = ZEXT416(0xffffffff);
    auVar53 = auVar44 | auVar44 << 0x20 | auVar44 << 0x40 | auVar44 << 0x60;
    auVar50 = vectorShiftLeftIntegerWord(auVar41,auVar41);
    auVar37 = vectorShiftLeftIntegerWord(auVar37,auVar37);
    auVar44 = ZEXT416(0xffffffff);
    auVar56 = auVar44 | auVar44 << 0x20 | auVar44 << 0x40 | auVar44 << 0x60;
    auVar44 = ZEXT416(0xffffffff);
    auVar55 = auVar44 | auVar44 << 0x20 | auVar44 << 0x40 | auVar44 << 0x60;
    auVar44 = ZEXT416(0xffffffff);
    auVar44 = auVar44 | auVar44 << 0x20 | auVar44 << 0x40 | auVar44 << 0x60;
    auVar54 = vectorShiftLeftIntegerWord(auVar44,auVar44);
    auVar44 = vectorMultiplyAddFloatingPoint(auVar40,auVar40,auVar39);
    auVar41 = vectorMultiplyAddFloatingPoint(auVar45,auVar45,auVar44);
    auVar51 = vectorReciprocalSquareRootEstimateFloatingPoint(auVar41);
    auVar47 = vectorMultiplyAddFloatingPoint(auVar41,auVar51,auVar47);
    *(float *)(puVar16 + 0x16) = fVar3;
    *(float *)((int)puVar16 + 0xb4) = fVar3;
    *(float *)(puVar16 + 0x17) = fVar3;
    *(float *)((int)puVar16 + 0xbc) = fVar3;
    auVar44 = loadVectorLeftIndexed(0x30,0x2a9eb0);
    auVar52 = loadVectorLeftIndexed(0x34,0x2a9eb0);
    auVar44 = auVar44 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar39 = auVar44 | auVar44 << 0x20 | auVar44 << 0x40 | auVar44 << 0x60;
    auVar44 = auVar52 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar52 = auVar44 | auVar44 << 0x20 | auVar44 << 0x40 | auVar44 << 0x60;
    auVar48 = vectorMultiplyAddFloatingPoint(auVar39,auVar51,auVar48);
    auVar44 = vectorNegativeMultiplySubtractFloatingPoint(auVar47,auVar51,auVar52);
    auVar47 = vectorMultiplyAddFloatingPoint(auVar44,auVar48,auVar51);
    auVar48 = vectorShiftLeftIntegerWord(auVar53,auVar53);
    auVar44 = ZEXT416(0xffffffff);
    auVar44 = auVar44 | auVar44 << 0x20 | auVar44 << 0x40 | auVar44 << 0x60;
    dVar29 = (double)animationSpeed;
    auVar51 = vectorShiftLeftIntegerWord(auVar44,auVar44);
    auVar44 = vectorMultiplyAddFloatingPoint(auVar41,auVar47,auVar49);
    auVar49 = vectorMultiplyAddFloatingPoint(auVar39,auVar47,auVar50);
    auVar51 = vectorMultiplyAddFloatingPoint(*(undefined1 (*) [16])(puVar16 + 0x16),auVar39,auVar51)
    ;
    auVar44 = vectorNegativeMultiplySubtractFloatingPoint(auVar44,auVar47,auVar52);
    auVar47 = vectorMultiplyAddFloatingPoint(auVar44,auVar49,auVar47);
    auVar50 = vectorShiftLeftIntegerWord(auVar56,auVar56);
    auVar49 = vectorShiftLeftIntegerWord(auVar55,auVar55);
    auVar44 = ZEXT416(0xffffffff);
    auVar53 = auVar44 | auVar44 << 0x20 | auVar44 << 0x40 | auVar44 << 0x60;
    auVar44 = ZEXT416(0xffffffff);
    auVar55 = auVar44 | auVar44 << 0x20 | auVar44 << 0x40 | auVar44 << 0x60;
    auVar41 = vectorMultiplyAddFloatingPoint(auVar41,auVar47,auVar37);
    auVar48 = vectorMultiplyAddFloatingPoint(auVar39,auVar47,auVar48);
    auVar44 = ZEXT416(0xffffffff);
    auVar44 = auVar44 | auVar44 << 0x20 | auVar44 << 0x40 | auVar44 << 0x60;
    auVar39 = vectorShiftLeftIntegerWord(auVar53,auVar53);
    auVar53 = vectorShiftLeftIntegerWord(auVar55,auVar55);
    auVar37 = vectorShiftLeftIntegerWord(auVar44,auVar44);
    auVar41 = vectorNegativeMultiplySubtractFloatingPoint(auVar41,auVar47,auVar52);
    auVar44 = ZEXT416(0);
    auVar41 = vectorMultiplyAddFloatingPoint(auVar41,auVar48,auVar47);
    auVar47 = vectorCompareEqualToFloatingPoint
                        (*(undefined1 (*) [16])(puVar16 + 0x16),
                         auVar44 | auVar44 << 0x20 | auVar44 << 0x40 | auVar44 << 0x60);
    auVar40 = vectorMultiplyAddFloatingPoint(auVar41,auVar40,auVar50);
    auVar44 = vectorMultiplyAddFloatingPoint(auVar41,auVar38,auVar49);
    auVar38 = vectorMultiplyAddFloatingPoint(auVar41,auVar45,auVar54);
    auVar37 = vectorMultiplyAddFloatingPoint(auVar51,auVar40,auVar37);
    auVar44 = vectorMultiplyAddFloatingPoint(auVar51,auVar44,auVar53);
    auVar39 = vectorMultiplyAddFloatingPoint(auVar51,auVar38,auVar39);
    auVar37 = vectorLogicalAndWithComplement(auVar37,auVar47);
    auVar44 = vectorLogicalAndWithComplement(auVar44,auVar47);
    auVar38 = vectorLogicalAndWithComplement(auVar39,auVar47);
    auVar39 = vectorAddFloatingPoint(auVar42,auVar37);
    auVar37 = vectorAddFloatingPoint(auVar43,auVar44);
    auVar38 = vectorAddFloatingPoint(auVar46,auVar38);
    auVar44 = auVar39 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar37 = auVar37 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar39 = auVar38 >> 0x60 & (GPiece<16>)0xffffffff;
    uVar19 = storeVectorElementWordIndexed
                       (auVar44 | auVar44 << 0x20 | auVar44 << 0x40 | auVar44 << 0x60,0x90,lVar1);
    *(undefined4 *)(puVar16 + 0x12) = uVar19;
    uVar19 = storeVectorElementWordIndexed
                       (auVar37 | auVar37 << 0x20 | auVar37 << 0x40 | auVar37 << 0x60,0x94,lVar1);
    *(undefined4 *)((int)puVar16 + 0x94) = uVar19;
    uVar19 = storeVectorElementWordIndexed
                       (auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60,0x98,lVar1);
    *(undefined4 *)(puVar16 + 0x13) = uVar19;
    *(undefined4 *)((int)puVar16 + 0x9c) = *(undefined4 *)((int)puVar16 + 0x8c);
    puVar16[0x18] = (longlong)(int)(dVar29 * dVar26);
    SpawnPart_21
              (uVar33,uVar18 - 0x110,lVar25,0x4f007fff,0x1fffffff,0x90,
               *(undefined4 *)((int)puVar16 + 0xc4),1);
  }
  puVar16[0x18] = (longlong)(int)((double)animationSpeed * dVar26);
  uVar19 = MB_randInt(*(undefined4 *)((int)puVar16 + 0xc4));
  *puVar15 = uVar19;
  fVar3 = *(float *)(param_1 + 0xe0);
  fVar4 = *(float *)(param_1 + 0xe4);
  fVar5 = *(float *)(param_1 + 0xe8);
  fVar6 = *(float *)(param_1 + 0x10);
  fVar7 = *(float *)(param_1 + 0x14);
  fVar8 = *(float *)(param_1 + 0x18);
  *(undefined4 *)((int)puVar16 + 0x8c) = *(undefined4 *)(param_1 + 0x1c);
  PVar20 = g_heroState;
  fVar9 = *(float *)(param_1 + 0xec);
  bVar2 = g_heroState == FALLING;
  *(float *)(puVar16 + 0x10) = fVar3 * -0.3 + fVar6;
  *(float *)((int)puVar16 + 0x84) = fVar4 * -0.3 + fVar7;
  *(float *)(puVar16 + 0x11) = fVar5 * -0.3 + fVar8;
  *(float *)(puVar16 + 0xe) = fVar3 * -0.075;
  *(float *)((int)puVar16 + 0x74) = fVar4 * -0.075;
  *(float *)((int)puVar16 + 0x7c) = fVar9 * -0.075 + 1.0;
  fVar3 = 0.025;
  *(undefined4 *)(puVar16 + 0xf) = 0x3ccccccd;
  PVar17 = g_heroState;
  fVar4 = 1.075;
  if (bVar2) {
    fVar4 = 1.0165;
    fVar3 = -(g_FrameTime * 5.0 - 0.025);
    *(float *)(puVar16 + 0xf) = fVar3;
    PVar20 = PVar17;
  }
  if (PVar20 == THRUSTER_PACK_HOVER) {
    fVar4 = 1.037;
    *(float *)(puVar16 + 0xf) = -(g_FrameTime * 3.0 - fVar3);
  }
  dVar26 = (double)fVar4;
  uVar33 = 0x3ff028f5c0000000;
  uVar34 = 0x40dd4c0000000000;
  iVar21 = SpawnPart_23(dVar36,0x3ff028f5c0000000,dVar26,0x40dd4c0000000000,uVar18 - 0x120)
  ;
  PVar20 = g_heroState;
  if (iVar21 != 0) {
    *(undefined1 *)(iVar21 + 3) = 0x44;
  }
  if (puVar15[3] != 0) {
    fVar3 = (float)puVar15[5] - *(float *)((int)puVar16 + 0x84);
    auVar37 = loadVectorLeftIndexed(0x14,uVar24);
    auVar39 = loadVectorRightIndexed(0x24,uVar24);
    auVar40 = loadVectorLeftIndexed(0x10,uVar24);
    auVar44 = ZEXT416(0xffffffff);
    auVar38 = auVar44 | auVar44 << 0x20 | auVar44 << 0x40 | auVar44 << 0x60;
    auVar44 = ZEXT416(1);
    auVar43 = auVar44 | auVar44 << 0x20 | auVar44 << 0x40 | auVar44 << 0x60;
    auVar38 = vectorShiftLeftIntegerWord(auVar38,auVar38);
    auVar44 = ZEXT416(0xffffffff);
    auVar44 = auVar44 | auVar44 << 0x20 | auVar44 << 0x40 | auVar44 << 0x60;
    auVar41 = vectorShiftLeftIntegerWord(auVar44,auVar44);
    auVar44 = loadVectorRightIndexed(0x20,uVar24);
    auVar42 = loadVectorLeftIndexed(0x84,lVar1);
    auVar37 = vectorSubtractFloatingPoint(auVar37 | auVar39,auVar42);
    auVar39 = loadVectorLeftIndexed(0x80,lVar1);
    auVar39 = vectorSubtractFloatingPoint(auVar40 | auVar44,auVar39);
    auVar44 = loadVectorLeftIndexed(0x18,uVar24);
    auVar42 = loadVectorRightIndexed(0x28,uVar24);
    fVar3 = SQRT(((float)puVar15[6] - *(float *)(puVar16 + 0x11)) *
                 ((float)puVar15[6] - *(float *)(puVar16 + 0x11)) +
                 ((float)puVar15[4] - *(float *)(puVar16 + 0x10)) *
                 ((float)puVar15[4] - *(float *)(puVar16 + 0x10)) + fVar3 * fVar3);
    iVar21 = ((uint)(ZERO_MASK((8 - PVar20))) & 0xfffffffe) + 4;
    iVar23 = 1;
    iVar21 = iVar21 + ((uint)(ZERO_MASK((0x81 - PVar20))) & 1U - iVar21);
    auVar40 = vectorMultiplyAddFloatingPoint(auVar37,auVar37,auVar38);
    auVar38 = loadVectorLeftIndexed(0x88,lVar1);
    auVar38 = vectorSubtractFloatingPoint(auVar44 | auVar42,auVar38);
    auVar44 = vectorMultiplyAddFloatingPoint(auVar39,auVar39,auVar40);
    auVar40 = vectorMultiplyAddFloatingPoint(auVar38,auVar38,auVar44);
    *(float *)(puVar16 + 0x16) = fVar3;
    *(float *)((int)puVar16 + 0xb4) = fVar3;
    *(float *)(puVar16 + 0x17) = fVar3;
    *(float *)((int)puVar16 + 0xbc) = fVar3;
    auVar44 = loadVectorLeftIndexed(0x60,0x2a9eb0);
    auVar44 = auVar44 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar44 = vectorMultiplyAddFloatingPoint
                        (*(undefined1 (*) [16])(puVar16 + 0x16),
                         auVar44 | auVar44 << 0x20 | auVar44 << 0x40 | auVar44 << 0x60,auVar41);
    if (1 < iVar21) {
      auVar46 = vectorReciprocalSquareRootEstimateFloatingPoint(auVar40);
      auVar41 = ZEXT416(0xffffffff);
      auVar42 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
      auVar41 = ZEXT416(0xffffffff);
      auVar45 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
      auVar41 = ZEXT416(0xffffffff);
      auVar41 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
      auVar42 = vectorShiftLeftIntegerWord(auVar42,auVar42);
      auVar45 = vectorShiftLeftIntegerWord(auVar45,auVar45);
      auVar51 = vectorShiftLeftIntegerWord(auVar41,auVar41);
      auVar41 = loadVectorLeftIndexed(0x30,0x2a9eb0);
      auVar47 = loadVectorLeftIndexed(0x34,0x2a9eb0);
      auVar41 = auVar41 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar49 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
      auVar41 = auVar47 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar50 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
      auVar41 = ZEXT416(0xffffffff);
      auVar52 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
      auVar47 = vectorMultiplyAddFloatingPoint(auVar40,auVar46,auVar42);
      auVar48 = vectorMultiplyAddFloatingPoint(auVar49,auVar46,auVar45);
      auVar41 = ZEXT416(0xffffffff);
      auVar53 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
      auVar52 = vectorShiftLeftIntegerWord(auVar52,auVar52);
      auVar41 = ZEXT416(0xffffffff);
      auVar42 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
      auVar41 = ZEXT416(0xffffffff);
      auVar45 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
      auVar41 = vectorNegativeMultiplySubtractFloatingPoint(auVar47,auVar46,auVar50);
      auVar46 = vectorMultiplyAddFloatingPoint(auVar41,auVar48,auVar46);
      auVar47 = vectorShiftLeftIntegerWord(auVar53,auVar53);
      auVar41 = ZEXT416(0xffffffff);
      auVar48 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
      auVar41 = ZEXT416(0xffffffff);
      auVar41 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
      auVar48 = vectorShiftLeftIntegerWord(auVar48,auVar48);
      auVar53 = vectorShiftLeftIntegerWord(auVar41,auVar41);
      auVar41 = vectorMultiplyAddFloatingPoint(auVar40,auVar46,auVar51);
      auVar51 = vectorMultiplyAddFloatingPoint(auVar49,auVar46,auVar52);
      auVar41 = vectorNegativeMultiplySubtractFloatingPoint(auVar41,auVar46,auVar50);
      auVar46 = vectorMultiplyAddFloatingPoint(auVar41,auVar51,auVar46);
      auVar51 = vectorShiftLeftIntegerWord(auVar42,auVar42);
      auVar52 = vectorShiftLeftIntegerWord(auVar45,auVar45);
      auVar41 = ZEXT416(0xffffffff);
      auVar42 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
      auVar41 = ZEXT416(0);
      auVar54 = vectorShiftLeftIntegerWord(auVar42,auVar42);
      auVar42 = ZEXT416(0xffffffff);
      auVar42 = auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60;
      auVar55 = vectorCompareEqualToFloatingPoint
                          (*(undefined1 (*) [16])(puVar16 + 0x16),
                           auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60);
      auVar41 = vectorMultiplyAddFloatingPoint(auVar40,auVar46,auVar47);
      auVar45 = vectorMultiplyAddFloatingPoint(auVar49,auVar46,auVar48);
      auVar40 = ZEXT416(0xffffffff);
      auVar40 = auVar40 | auVar40 << 0x20 | auVar40 << 0x40 | auVar40 << 0x60;
      auVar42 = vectorShiftLeftIntegerWord(auVar42,auVar42);
      auVar47 = vectorShiftLeftIntegerWord(auVar40,auVar40);
      auVar40 = vectorNegativeMultiplySubtractFloatingPoint(auVar41,auVar46,auVar50);
      auVar40 = vectorMultiplyAddFloatingPoint(auVar40,auVar45,auVar46);
      auVar38 = vectorMultiplyAddFloatingPoint(auVar40,auVar38,auVar53);
      auVar37 = vectorMultiplyAddFloatingPoint(auVar40,auVar37,auVar51);
      auVar39 = vectorMultiplyAddFloatingPoint(auVar40,auVar39,auVar52);
      auVar40 = vectorMultiplyAddFloatingPoint(auVar44,auVar38,auVar54);
      auVar38 = vectorMultiplyAddFloatingPoint(auVar44,auVar37,auVar47);
      auVar37 = vectorMultiplyAddFloatingPoint(auVar44,auVar39,auVar42);
      auVar44 = auVar43;
      do {
        auVar41 = vectorConvertFromSignedFixedPointWord(auVar43,0);
        auVar39 = ZEXT416(0xffffffff);
        auVar42 = auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60;
        auVar39 = ZEXT416(0xffffffff);
        auVar45 = auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60;
        auVar39 = ZEXT416(0xffffffff);
        auVar46 = auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60;
        auVar39 = vectorShiftLeftIntegerWord(auVar42,auVar42);
        auVar45 = vectorShiftLeftIntegerWord(auVar45,auVar45);
        auVar46 = vectorShiftLeftIntegerWord(auVar46,auVar46);
        auVar42 = vectorMultiplyAddFloatingPoint(auVar41,auVar40,auVar39);
        auVar45 = vectorMultiplyAddFloatingPoint(auVar41,auVar38,auVar45);
        auVar39 = vectorMultiplyAddFloatingPoint(auVar41,auVar37,auVar46);
        auVar46 = loadVectorLeftIndexed(0x80,lVar1);
        auVar47 = loadVectorLeftIndexed(0x88,lVar1);
        auVar48 = loadVectorLeftIndexed(0x84,lVar1);
        auVar41 = vectorLogicalAndWithComplement(auVar42,auVar55);
        auVar42 = vectorLogicalAndWithComplement(auVar45,auVar55);
        auVar39 = vectorLogicalAndWithComplement(auVar39,auVar55);
        auVar41 = vectorAddFloatingPoint(auVar47,auVar41);
        auVar45 = vectorAddFloatingPoint(auVar48,auVar42);
        auVar42 = vectorAddFloatingPoint(auVar46,auVar39);
        auVar39 = auVar41 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar41 = auVar45 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar42 = auVar42 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar19 = storeVectorElementWordIndexed
                           (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60,0xa0,lVar1
                           );
        *(undefined4 *)(puVar16 + 0x14) = uVar19;
        uVar19 = storeVectorElementWordIndexed
                           (auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60,0xa4,lVar1
                           );
        *(undefined4 *)((int)puVar16 + 0xa4) = uVar19;
        uVar19 = storeVectorElementWordIndexed
                           (auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60,0xa8,lVar1
                           );
        *(undefined4 *)(puVar16 + 0x15) = uVar19;
        *(undefined4 *)((int)puVar16 + 0xac) = *(undefined4 *)((int)puVar16 + 0x8c);
        iVar22 = SpawnPart_23(dVar36,uVar33,dVar26,uVar34,uVar18 - 0x100);
        if (iVar22 != 0) {
          *(undefined1 *)(iVar22 + 3) = 0x44;
        }
        iVar23 = iVar23 + 1;
        auVar39.piece<0,4>() = auVar43.piece<0,4>() + auVar44.piece<0,4>();
        auVar39.piece<8,8>() = auVar43.piece<8,8>();
        auVar39.piece<4,4>() = auVar43.piece<4,4>() + auVar44.piece<4,4>();
        auVar41.piece<0,8>() = auVar39.piece<0,8>();
        auVar41.piece<12,4>() = auVar43.piece<12,4>();
        auVar41.piece<8,4>() = auVar43.piece<8,4>() + auVar44.piece<8,4>();
        auVar43.piece<0,12>() = auVar41.piece<0,12>();
        auVar43.piece<12,4>() = auVar41.piece<12,4>() + auVar44.piece<12,4>();
      } while (iVar23 < iVar21);
    }
  }
  puVar15[4] = *(undefined4 *)(puVar16 + 0x10);
  puVar15[5] = *(undefined4 *)((int)puVar16 + 0x84);
  uVar19 = *(undefined4 *)(puVar16 + 0x11);
  puVar15[3] = 1;
  puVar15[6] = uVar19;
  puVar15[7] = *(undefined4 *)((int)puVar16 + 0x8c);
  return;
}


