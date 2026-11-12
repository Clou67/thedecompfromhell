// game/update/moby1238.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 6 functions, 0x21a074-0x21af94
#include "game/update/moby1238.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/pause.h"
#include "game/sound.h"
#include "game/water.h"
#include "idol/fastfunc.h"

// 0x021a074 (0x14 bytes)
void M1238_0021a074(void)

{
  DAT_00768864 = 0x10000;
  return;
}


// 0x021a098 (0x4d8 bytes)
// inlined: FastAtan2 @0x21a1c4, FastAtan2 @0x21a34c
MobyInstance * FUN_0021a098(double param_1,float *param_2,float *param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  ulonglong *puVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  ulonglong uVar10;
  MobyInstance *pMVar13;
  longlong lVar11;
  longlong lVar12;
  float fVar14;
  ulonglong uVar15;
  longlong lVar16;
  float *pfVar18;
  longlong lVar17;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar19;
  ulonglong in_f31;
  
  uVar10 = ZEXT48(&stack0x00000000);
  lVar12 = uVar10 - 0x100;
  puVar5 = (ulonglong *)lVar12;
  *puVar5 = uVar10;
  puVar5[0x22] = in_LR;
  puVar5[0x1f] = in_f31;
  puVar5[0x1e] = unaff_r31;
  puVar5[0x1c] = unaff_r29;
  puVar5[0x1d] = unaff_r30;
  puVar5[0x1b] = unaff_r28;
  puVar5[0x1a] = unaff_r27;
  pMVar13 = CreateMoby(0x4d6);
  if (pMVar13 != (MobyInstance *)0x0) {
    pMVar13->updateDistance = -1;
    pMVar13->drawDistance = 0x7f;
    pMVar13->enabled = '\x01';
    fVar8 = 0.0;
    (pMVar13->rotation).x = 0.0;
    fVar14 = param_3[2];
    pfVar4 = (float *)pMVar13->pVar;
    fVar2 = ABS(param_3[2]);
    fVar3 = SQRT(*param_3 * *param_3 + param_3[1] * param_3[1]);
    fVar1 = ABS(fVar3);
    *(float *)((int)puVar5 + 0x74) = fVar3;
    *(float *)(puVar5 + 0xf) = fVar1 - fVar2;
    uVar15 = (ulonglong)(*(uint *)((int)puVar5 + 0x74) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar5 + 0xf) >> 0x1e) & 2 |
             (ulonglong)((uint)fVar14 >> 0x1d) & 4;
    fVar14 = ABS(*(float *)((int)puVar5 + 0x74));
    if (*(float *)(puVar5 + 0xf) - 0.0 < 0.0) {
      fVar14 = fVar2;
    }
    fVar3 = *(float *)(&g_atanQuadrantTable + (int)(uVar15 << 2));
    if (*(float *)(puVar5 + 0xf) - 0.0 < 0.0) {
      fVar2 = fVar1;
    }
    fVar1 = *(float *)(((uint)(uVar15 << 2) | 0x735900) + 4);
    fVar9 = fVar8;
    if (0.0 < fVar14) {
      lVar11 = uVar10 - 0xf0;
      lVar16 = uVar10 - 100;
      lVar17 = uVar10 - 0x54;
      lVar19 = 2;
      fVar14 = (fVar2 - fVar14) / (fVar2 + fVar14);
      fVar2 = fVar14 * fVar14;
      *(float *)(puVar5 + 0x15) = fVar14;
      *(float *)(puVar5 + 0x14) = fVar14;
      *(float *)((int)puVar5 + 0xa4) = fVar14;
      *(float *)((int)puVar5 + 0x9c) = fVar14;
      fVar14 = fVar2 * fVar2;
      *(float *)(puVar5 + 0x14) = *(float *)(puVar5 + 0x14) * fVar2;
      *(float *)((int)puVar5 + 0xa4) = *(float *)((int)puVar5 + 0xa4) * fVar14;
      *(float *)(puVar5 + 0x15) = *(float *)(puVar5 + 0x15) * fVar14 * fVar2;
      do {
        *(float *)((int)lVar11 + 0x9c) = *(float *)((int)lVar11 + 0x8c) * fVar14 * fVar14;
        iVar6 = (int)lVar16;
        lVar11 = lVar11 + 8;
        lVar16 = lVar16 + 8;
        *(float *)((int)lVar17 + 4) = *(float *)(iVar6 + 4) * fVar14 * fVar14;
        lVar17 = lVar17 + 8;
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
      lVar17 = uVar10 - 100;
      pfVar18 = (float *)&DAT_007358e0;
      lVar19 = 4;
      lVar11 = lVar12;
      lVar16 = lVar17;
      do {
        fVar14 = *pfVar18;
        fVar2 = pfVar18[1];
        pfVar18 = pfVar18 + 2;
        *(float *)((int)lVar11 + 0x9c) = *(float *)((int)lVar11 + 0x9c) * fVar14;
        lVar11 = lVar11 + 8;
        *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar2;
        lVar16 = lVar16 + 8;
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
      lVar16 = 2;
      lVar11 = lVar12;
      fVar14 = fVar8;
      do {
        iVar6 = (int)lVar11;
        lVar11 = lVar11 + 0x10;
        iVar7 = (int)lVar17;
        lVar17 = lVar17 + 0x10;
        fVar14 = fVar14 + *(float *)(iVar6 + 0x9c) + *(float *)(iVar7 + 4) + *(float *)(iVar7 + 8) +
                 *(float *)(iVar7 + 0xc);
        lVar16 = lVar16 + -1;
      } while (lVar16 != 0);
      fVar9 = (fVar14 + 0.7853982) * fVar3 + fVar1;
    }
    (pMVar13->rotation).y = -fVar9;
    fVar14 = *param_3;
    fVar3 = param_3[1];
    fVar1 = ABS(*param_3);
    fVar2 = ABS(param_3[1]);
    *(float *)(puVar5 + 0xe) = fVar1 - fVar2;
    uVar15 = (ulonglong)((uint)fVar14 >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar5 + 0xe) >> 0x1e) & 2 | (ulonglong)((uint)fVar3 >> 0x1d) & 4
    ;
    fVar14 = fVar1;
    if (*(float *)(puVar5 + 0xe) - 0.0 < 0.0) {
      fVar14 = fVar2;
    }
    fVar3 = *(float *)(&g_atanQuadrantTable + (int)(uVar15 << 2));
    if (*(float *)(puVar5 + 0xe) - 0.0 < 0.0) {
      fVar2 = fVar1;
    }
    fVar1 = *(float *)(((uint)(uVar15 << 2) | 0x735900) + 4);
    if (0.0 < fVar14) {
      lVar11 = uVar10 - 0xf0;
      lVar16 = uVar10 - 0x84;
      lVar17 = uVar10 - 0x74;
      lVar19 = 2;
      fVar14 = (fVar2 - fVar14) / (fVar2 + fVar14);
      fVar2 = fVar14 * fVar14;
      *(float *)(puVar5 + 0x11) = fVar14;
      *(float *)(puVar5 + 0x10) = fVar14;
      *(float *)((int)puVar5 + 0x84) = fVar14;
      *(float *)((int)puVar5 + 0x7c) = fVar14;
      fVar14 = fVar2 * fVar2;
      *(float *)(puVar5 + 0x10) = *(float *)(puVar5 + 0x10) * fVar2;
      *(float *)((int)puVar5 + 0x84) = *(float *)((int)puVar5 + 0x84) * fVar14;
      *(float *)(puVar5 + 0x11) = *(float *)(puVar5 + 0x11) * fVar14 * fVar2;
      do {
        *(float *)((int)lVar11 + 0x7c) = *(float *)((int)lVar11 + 0x6c) * fVar14 * fVar14;
        iVar6 = (int)lVar16;
        lVar11 = lVar11 + 8;
        lVar16 = lVar16 + 8;
        *(float *)((int)lVar17 + 4) = *(float *)(iVar6 + 4) * fVar14 * fVar14;
        lVar17 = lVar17 + 8;
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
      lVar17 = uVar10 - 0x84;
      pfVar18 = (float *)&DAT_007358e0;
      lVar19 = 4;
      lVar11 = lVar12;
      lVar16 = lVar17;
      do {
        fVar14 = *pfVar18;
        fVar2 = pfVar18[1];
        pfVar18 = pfVar18 + 2;
        *(float *)((int)lVar11 + 0x7c) = *(float *)((int)lVar11 + 0x7c) * fVar14;
        lVar11 = lVar11 + 8;
        *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar2;
        lVar16 = lVar16 + 8;
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
      lVar11 = 2;
      do {
        iVar6 = (int)lVar12;
        iVar7 = (int)lVar17;
        lVar12 = lVar12 + 0x10;
        lVar17 = lVar17 + 0x10;
        fVar8 = fVar8 + *(float *)(iVar6 + 0x7c) + *(float *)(iVar7 + 4) + *(float *)(iVar7 + 8) +
                *(float *)(iVar7 + 0xc);
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
      fVar8 = (fVar8 + 0.7853982) * fVar3 + fVar1;
    }
    (pMVar13->rotation).z = fVar8;
    (pMVar13->pos).x = *param_2;
    (pMVar13->pos).y = param_2[1];
    (pMVar13->pos).z = param_2[2];
    (pMVar13->pos).w = param_2[3];
    pfVar4[4] = *param_2;
    pfVar4[5] = param_2[1];
    pfVar4[6] = param_2[2];
    pfVar4[7] = param_2[3];
    *pfVar4 = *param_3;
    pfVar4[1] = param_3[1];
    pfVar4[2] = param_3[2];
    pfVar4[3] = param_3[3];
    puVar5[0x18] = (longlong)(int)(animationSpeed * 5.5);
    MB_SetAnimation(pMVar13,1,0,*(undefined4 *)((int)puVar5 + 0xc4));
    pMVar13->modeBits = DRAW_TRANSPARENT_WEIRD|TRANSPARENT;
    pfVar4[8] = param_4;
    pfVar4[10] = (float)param_1;
    pfVar4[9] = 1.4013e-45;
    pMVar13->alpha = '\x10';
    fVar14 = (float)FastDoubleToInt
                              ((double)((float)(param_1 /
                                               (double)SQRT(pfVar4[2] * pfVar4[2] +
                                                            *pfVar4 * *pfVar4 +
                                                            pfVar4[1] * pfVar4[1])) + 1.0));
    pfVar4[0xb] = fVar14;
    UpdateMobyTransform(pMVar13);
  }
  return pMVar13;
}


// 0x021a5a0 (0x9a4 bytes)
// inlined: FastRSqrt @0x21a684
/* Moby 1238 */

void UpdateMoby_1238(MobyInstance *moby)

{
  byte bVar1;
  char cVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float *pfVar6;
  MobyInstance *pMVar7;
  f32 fVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  longlong lVar15;
  int iVar17;
  undefined8 uVar16;
  undefined4 *puVar18;
  undefined8 uVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  GPiece<16> local_120;
  GPiece<16> local_110;
  GPiece<16> local_100;
  GPiece<16> local_f0;
  undefined4 local_e0 [4];
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  
  lVar15 = (longlong)(int)moby;
  pfVar6 = (float *)moby->pVar;
  fVar3 = (moby->pos).x + *pfVar6;
  (moby->pos).x = fVar3;
  fVar4 = (moby->pos).y + pfVar6[1];
  (moby->pos).y = fVar4;
  fVar5 = (moby->pos).z + pfVar6[2];
  (moby->pos).z = fVar5;
  fVar13 = 0.0;
  puVar18 = &g_heroMtx;
  dVar25 = 1.0;
  if (((DAT_0096bcd6 != '\0') && (pfVar6[3] != 31337.602)) &&
     (fVar4 = fVar4 - g_heroPosition.y, fVar3 = fVar3 - g_heroPosition.x,
     fVar5 = fVar5 - g_heroPosition.z, SQRT(fVar5 * fVar5 + fVar3 * fVar3 + fVar4 * fVar4) < 2.0)) {
    fVar3 = pfVar6[1];
    fVar4 = *pfVar6;
    fVar5 = pfVar6[2];
    iVar17 = 0;
    fVar10 = SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3);
    fVar11 = 0.5 / fVar10;
    fVar12 = fVar13;
    if (0.0 - fVar10 < 0.0) {
      fVar12 = fVar3 * fVar11;
    }
    fVar14 = fVar13;
    if (0.0 - fVar10 < 0.0) {
      fVar14 = fVar4 * fVar11;
    }
    if (0.0 - fVar10 < 0.0) {
      fVar13 = fVar5 * fVar11;
    }
    if (fVar10 - 0.0 < 0.0) {
      fVar12 = fVar3 * fVar11;
    }
    if (fVar10 - 0.0 < 0.0) {
      fVar14 = fVar4 * fVar11;
    }
    if (fVar10 - 0.0 < 0.0) {
      fVar13 = fVar5 * fVar11;
    }
    pfVar6[1] = fVar12;
    *pfVar6 = fVar14;
    pfVar6[2] = fVar13;
    (moby->pos).x = (moby->pos).x - fVar14;
    (moby->pos).y = (moby->pos).y - pfVar6[1];
    (moby->pos).z = (moby->pos).z - pfVar6[2];
    *(undefined1 *)pfVar6 = 0;
    *(undefined1 *)((int)pfVar6 + 1) = 0;
    *(undefined1 *)((int)pfVar6 + 2) = 0;
    *(undefined1 *)((int)pfVar6 + 3) = 0;
    *(undefined1 *)(pfVar6 + 1) = 0;
    *(undefined1 *)((int)pfVar6 + 5) = 0;
    *(undefined1 *)((int)pfVar6 + 6) = 0;
    *(undefined1 *)((int)pfVar6 + 7) = 0;
    *(undefined1 *)(pfVar6 + 2) = 0;
    *(undefined1 *)((int)pfVar6 + 9) = 0;
    *(undefined1 *)((int)pfVar6 + 10) = 0;
    *(undefined1 *)(pfVar6 + 3) = 0;
    *(undefined1 *)((int)pfVar6 + 0xb) = 0;
    *(undefined1 *)((int)pfVar6 + 0xd) = 0;
    *(undefined1 *)((int)pfVar6 + 0xe) = 0;
    *(undefined1 *)((int)pfVar6 + 0xf) = 0;
    pfVar6[3] = 31337.602;
    pfVar6[0xb] = 7.00649e-45;
    do {
      pMVar7 = (MobyInstance *)puVar18[0x808];
      if (pMVar7 != (MobyInstance *)0x0) {
        SetCollDamIn(0x3ff0000000000000,&uStack_d0,lVar15,0x10001,0x46f4d334,local_110);
        local_b8 = CONCAT13(1,CONCAT12(1,moby->oClass));
        bVar1 = pMVar7->damage;
        if ((bVar1 == 0xff) || (CollDamage[bVar1].pVictimMoby != pMVar7)) {
          CollDamageMobyDirect
                    (pMVar7,0x40,CONCAT44(uStack_d0,uStack_cc),CONCAT44(uStack_c8,uStack_c4),
                     CONCAT44(uStack_c0,uStack_bc),CONCAT44(local_b8,uStack_b4),
                     CONCAT44(uStack_b0,uStack_ac),CONCAT44(uStack_a8,uStack_a4));
        }
        else {
          CollDamage[bVar1].damageHp = (float)((double)CollDamage[bVar1].damageHp + dVar25);
          CollDamage[(byte)pMVar7->damage].damageClass = '\x01';
          CollDamage[(byte)pMVar7->damage].damageStrength = '\x01';
          CollDamage[(byte)pMVar7->damage].damageIndex = moby->oClass;
          CollDamage[(byte)pMVar7->damage].damageFlags = 0x10001;
        }
        break;
      }
      iVar17 = iVar17 + 1;
      puVar18 = puVar18 + 1;
    } while (iVar17 < 6);
  }
  SetCollDamIn(dVar25,&uStack_d0,lVar15,0x10001);
  fVar4 = (moby->pos).y - pfVar6[5];
  fVar5 = (moby->pos).x - pfVar6[4];
  fVar3 = pfVar6[9];
  if ((pfVar6[10] < SQRT(fVar5 * fVar5 + fVar4 * fVar4)) ||
     (iVar17 = FastDecTimerS32(pfVar6 + 0xb), iVar17 != 0)) {
    if (moby->enabled != '\0') {
      iVar17 = 0;
      dVar23 = -1.0;
      dVar21 = 2.0;
      dVar20 = 4.0;
      do {
        MB_randRangeFloat((float)dVar23,(float)dVar25);
        MB_randRangeFloat((float)dVar23,(float)dVar25);
        MB_randRangeFloat((float)dVar23,(float)dVar25);
        MB_randRangeFloat
                  ((float)((double)g_FrameTime * dVar21),
                   (float)((double)g_FrameTime * dVar20));
        SpawnPart_51(lVar15 + 0x10,local_100);
        iVar17 = iVar17 + 1;
      } while (iVar17 < 3);
    }
    DeleteMoby(moby);
  }
  else {
    iVar17 = CollLine(local_120,lVar15 + 0x10,(ulonglong)(LZCOUNT(fVar3) << 0x20) >> 0x25,
                                pfVar6[8],&uStack_d0);
    if (iVar17 == 0) {
      fVar8 = (moby->pos).x;
      uVar9 = (int)fVar8 >> 0x1f;
      iVar17 = (uVar9 >> 1 ^ (uint)fVar8) - uVar9;
      if ((((iVar17 < 0x40000000) || (0x447f4000 < iVar17)) ||
          (fVar8 = (moby->pos).y, uVar9 = (int)fVar8 >> 0x1f,
          iVar17 = (uVar9 >> 1 ^ (uint)fVar8) - uVar9, 0x447f4000 < iVar17 || iVar17 < 0x40000000))
         || ((fVar8 = (moby->pos).z, uVar9 = (int)fVar8 >> 0x1f,
             iVar17 = (uVar9 >> 1 ^ (uint)fVar8) - uVar9, iVar17 < 0x40000000 ||
             (0x447f4000 < iVar17)))) {
        DeleteMoby(moby);
      }
    }
    else {
      (moby->pos).x = g_CollOutput.ip.x;
      cVar2 = moby->enabled;
      (moby->pos).y = g_CollOutput.ip.y;
      (moby->pos).z = g_CollOutput.ip.z;
      (moby->pos).w = g_CollOutput.ip.w;
      if (cVar2 != '\0') {
        iVar17 = 0;
        dVar24 = -1.0;
        dVar22 = 3.0;
        dVar23 = 6.0;
        dVar21 = 10.5;
        dVar20 = 15.5;
        uVar19 = 0x40dd4c0000000000;
        do {
          MB_randRangeFloat((float)dVar24,(float)dVar25);
          MB_randRangeFloat((float)dVar24,(float)dVar25);
          MB_randRangeFloat((float)dVar24,(float)dVar25);
          FastVecReflect(local_e0,pfVar6,0xa10980);
          MB_randRangeFloat
                    ((float)((double)g_FrameTime * dVar22),
                     (float)((double)g_FrameTime * dVar23));
          uVar16 = MB_randRange
                             ((int)((double)animationSpeed * dVar21),
                              (int)((double)animationSpeed * dVar20));
          SpawnPart_27(uVar19,lVar15 + 0x10,local_f0,0x7f2f4f6f,uVar16);
          iVar17 = iVar17 + 1;
        } while (iVar17 < 5);
      }
      if ((g_CollOutput.pMoby != (MobyInstance *)0x0) && ((g_CollOutput.pMoby)->oClass == RATCHET)) {
        PlayMobySound(0,0,moby);
      }
      DeleteMoby(moby);
    }
  }
  return;
}


// 0x021af44 (0x14 bytes)
void M1238_0021af44(void)

{
  DAT_007688d8 = 0x10000;
  return;
}


// 0x021af58 (0x10 bytes)
double M1238_0021af58(void)

{
  return (double)DAT_0076c528;
}


// 0x021af68 (0x2c bytes)
void M1238_0021af68(void)

{
  SubmitZone((OceanPlane *)&DAT_0076c520);
  return;
}


