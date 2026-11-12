// game/mobyutil.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 260 functions, 0xfbf40-0x11b944
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "game/mobyutil.h"
#include "game/boot.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/debug.h"
#include "game/draw.h"
#include "game/help.h"
#include "game/hero.h"
#include "game/hud.h"
#include "game/lights.h"
#include "game/loaders.h"
#include "game/mUnk.h"
#include "game/main.h"
#include "game/mesh.h"
#include "game/mission.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/pad.h"
#include "game/partproc.h"
#include "game/partupd.h"
#include "game/path.h"
#include "game/pause.h"
#include "game/respawn.h"
#include "game/sound.h"
#include "game/space.h"
#include "game/update.h"
#include "game/update/moby112.h"
#include "game/update/moby122.h"
#include "game/update/moby1300.h"
#include "game/update/moby639.h"
#include "game/update/moby775.h"
#include "game/vendor.h"
#include "game/water.h"
#include "idol/fastfunc.h"
#include "idol/idol_draw.h"
#include "idol/mUnk.h"
#include "idol/mUnk2.h"
#include "sdk/lUnk.h"

// 0x00fbf40 (0x14 bytes)
void SECTION_HEADER_MOBYUTIL(void)

{
  DAT_00729180 = 0x10000;
  return;
}


// 0x00fbf60 (0x40 bytes)
void ____Unused_MB_CallVtbl74(int param_1)

{
  if (*(undefined4 **)(param_1 + 0x74) != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)(param_1 + 0x74))();
  }
  return;
}


// 0x00fbfa0 (0x84 bytes)
void GetMobyFunction(MOBY_OCLASSES oClass)

{
  MobyClass **ppMVar1;
  int iVar2;
  MobyVTable *pMVar3;
  
  iVar2 = 0;
  ppMVar1 = MobyClasses + oClass_to_mClass_lookup;
  for (pMVar3 = g_MobyVTable; pMVar3->idx != (int)(short)oClass && pMVar3->idx != 0xffffffff;
      pMVar3 = pMVar3 + 1) {
    iVar2 = iVar2 + 1;
  }
  MobyClasses[oClass_to_mClass_lookup + 0xe0] = (MobyClass *)g_MobyVTable[iVar2].update;
  if (*ppMVar1 != (MobyClass *)0x0) {
    *(void ***)&(*ppMVar1)->bangles = g_MobyVTable[iVar2].exit;
  }
  return;
}


// 0x00fc024 (0x144 bytes)
void UpdateMobysInitial(void)

{
  MobyInstance *pMVar1;
  MobyInstance *pMVar2;
  MobyInstance *pMVar3;
  MobyInstance *pMVar4;
  
  DAT_00a49344 = 0;
  MobyUpdateChainStart = (MobyInstance *)0x0;
  pMVar2 = MobyUpdateChainStart;
  if (g_MobyInstance->state != 0xff) {
    pMVar2 = g_MobyInstance;
    pMVar3 = (MobyInstance *)0x0;
    do {
      pMVar4 = pMVar3;
      pMVar1 = MobyUpdateChainStart;
      if ((((pMVar2->state & 0x80) == 0) && ((pMVar2->modeBits & NO_UPDATE) == NONE)) &&
         (pMVar4 = pMVar2, pMVar1 = pMVar2, pMVar3 != (MobyInstance *)0x0)) {
        pMVar3->pChain = pMVar2;
        pMVar1 = MobyUpdateChainStart;
      }
      MobyUpdateChainStart = pMVar1;
      pMVar1 = pMVar2 + 1;
      pMVar2 = pMVar2 + 1;
      pMVar3 = pMVar4;
    } while (pMVar1->state != 0xff);
    pMVar2 = MobyUpdateChainStart;
    if (pMVar4 != (MobyInstance *)0x0) {
      pMVar4->pChain = (void *)0x0;
      pMVar2 = MobyUpdateChainStart;
    }
  }
  for (; pMVar2 != (MobyInstance *)0x0; pMVar2 = (MobyInstance *)pMVar2->pChain) {
    if (pMVar2->state < 0x80) {
      if ((pMVar2->modeBits & UNK_40) == NONE) {
        UpdateMobyAnimFrame(pMVar2);
      }
      if ((undefined4 *)pMVar2->pUpdate != (undefined4 *)0x0) {
                    /* WARNING: Load size is inaccurate */
        (**pMVar2->pUpdate)(pMVar2);
      }
      if ((pMVar2->modeBits & NO_POST_UPDATE) == NONE) {
        UpdateMobyTransform(pMVar2);
      }
      STUB_00065464(pMVar2);
    }
  }
  return;
}


// 0x00fc168 (0xc8 bytes)
void UpdateMobys(void)

{
  MobyInstance *pMVar1;
  
  MobyUpdateChainStart = (MobyInstance *)FindMobysCloseToUpdate();
  for (pMVar1 = MobyUpdateChainStart; pMVar1 != (MobyInstance *)0x0;
      pMVar1 = (MobyInstance *)pMVar1->pChain) {
    if (pMVar1->state < 0x80) {
      if ((pMVar1->modeBits & UNK_40) == NONE) {
        UpdateMobyAnimFrame(pMVar1);
      }
      if ((undefined4 *)pMVar1->pUpdate != (undefined4 *)0x0) {
                    /* WARNING: Load size is inaccurate */
        (**pMVar1->pUpdate)(pMVar1);
      }
      if ((pMVar1->modeBits & NO_POST_UPDATE) == NONE) {
        UpdateMobyTransform(pMVar1);
      }
      STUB_00065464(pMVar1);
    }
  }
  return;
}


// 0x00fc238 (0x3e4 bytes)
// strings: 00652ed0: '*** frame %d ***\n' | 00652ee8: 'class: %d\tcount: %d\tcycles: %d\tPercent: %f\n'

/* Appears to be unused debug code */

ulonglong UpdateMobysDebug(void)

{
  MobyModeBit MVar1;
  undefined2 uVar2;
  MobyInstance *pMVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int32_t iVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  undefined2 *puVar12;
  int *piVar13;
  double dVar14;
  double dVar15;
  GPiece<16> auVar16;
  GPiece<16> auVar17;
  GPiece<16> auVar18;
  
  if (((g_Pad.downButtons & (L1|R2|L2)) == (L1|R2|L2)) && ((g_Pad.buttonsPressedThisFrame & R1) != 0)) {
    printf("\n");
    printf("*** frame %d ***\n",g_MainLoopFrames);
    printf("\n");
    *g_pDebugCounterMode = 0x81;
    FastMemSet(&g_PartProfile,0,0x700);
    MobyUpdateChainStart = (MobyInstance *)FindMobysCloseToUpdate();
    for (pMVar3 = MobyUpdateChainStart; pMVar3 != (MobyInstance *)0x0;
        pMVar3 = (MobyInstance *)pMVar3->pChain) {
      if (pMVar3->state < 0x80) {
        MVar1 = pMVar3->modeBits;
        *DAT_009271f8 = 0;
        if ((MVar1 & UNK_40) == NONE) {
          UpdateMobyAnimFrame(pMVar3);
        }
        if ((undefined4 *)pMVar3->pUpdate != (undefined4 *)0x0) {
                    /* WARNING: Load size is inaccurate */
          (**pMVar3->pUpdate)(pMVar3);
        }
        if ((pMVar3->modeBits & NO_POST_UPDATE) == NONE) {
          UpdateMobyTransform(pMVar3);
        }
        iVar4 = (uint)pMVar3->mClass * 8;
        iVar9 = *DAT_009271f8;
        *(int *)(&g_PartProfile + iVar4) = *(int *)(&g_PartProfile + iVar4) + 1;
        *(int *)(&DAT_11004004 + iVar4) = *(int *)(&DAT_11004004 + iVar4) + iVar9;
      }
    }
    auVar16 = ZEXT416(0);
    auVar16 = auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60;
    iVar9 = 0;
    uVar6 = ZEXT48(&g_PartProfile);
    do {
      auVar16 = auVar16 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar16 = auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60;
      if (*(int *)uVar6 != 0) {
        auVar17 = loadVectorLeftIndexed(4,uVar6);
        auVar18 = loadVectorRightIndexed(0x14,uVar6);
        auVar17 = vectorConvertFromSignedFixedPointWord(auVar17 | auVar18,0);
        auVar16 = vectorAddFloatingPoint(auVar16,auVar17);
      }
      iVar9 = iVar9 + 1;
      uVar6 = uVar6 + 8 & 0xffffffff;
    } while (iVar9 < 0xe0);
    uVar7 = ZEXT48(&DAT_000fc230);
    dVar15 = (double)((1.0 / auVar16.piece<0,4>()) * 100.0);
    lVar11 = 100000000;
    do {
      iVar9 = 0;
      lVar10 = 0;
      puVar12 = &mClass_to_oClass;
      uVar6 = ZEXT48(&g_PartProfile);
      do {
        piVar13 = (int *)uVar6;
        iVar4 = *piVar13;
        if (iVar4 != 0) {
          uVar5 = piVar13[1];
          if (uVar5 == (uint)lVar11) {
            uVar2 = *puVar12;
            dVar14 = (double)FastIntToDouble();
            iVar8 = printf("class: %d\tcount: %d\tcycles: %d\tPercent: %f\n",uVar2,iVar4,
                                 (int)(uVar5 << 5) / iVar4,(double)(float)(dVar14 * dVar15));
            uVar7 = (ulonglong)iVar8;
            *piVar13 = 0;
          }
          else {
            uVar7 = (longlong)(int)lVar10 - (longlong)(int)uVar5 >> 0x3f & (ulonglong)uVar5 - lVar10
            ;
            lVar10 = lVar10 + uVar7;
          }
        }
        iVar9 = iVar9 + 1;
        uVar6 = uVar6 + 8 & 0xffffffff;
        puVar12 = puVar12 + 1;
      } while (iVar9 < 0xe0);
      lVar11 = lVar10;
    } while ((int)lVar10 != 0);
  }
  else {
    uVar6 = FindMobysCloseToUpdate();
    MobyUpdateChainStart = (MobyInstance *)uVar6;
    uVar7 = uVar6;
    pMVar3 = MobyUpdateChainStart;
    while (pMVar3 != (MobyInstance *)0x0) {
      pMVar3 = (MobyInstance *)uVar6;
      uVar7 = (ulonglong)pMVar3->state;
      if (pMVar3->state < 0x80) {
        if ((pMVar3->modeBits & UNK_40) == NONE) {
          UpdateMobyAnimFrame(uVar6);
        }
        if ((undefined4 *)pMVar3->pUpdate != (undefined4 *)0x0) {
                    /* WARNING: Load size is inaccurate */
          (**pMVar3->pUpdate)(uVar6);
        }
        if ((pMVar3->modeBits & NO_POST_UPDATE) == NONE) {
          UpdateMobyTransform(pMVar3);
        }
        uVar7 = STUB_00065464(uVar6);
      }
      pMVar3 = (MobyInstance *)pMVar3->pChain;
      uVar6 = ZEXT48(pMVar3);
    }
  }
  return uVar7;
}


// 0x00fc620 (0x48 bytes)
int MB_randInt(int param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = rand();
  uVar1 = iVar2 >> 0xf & 0x7fff;
  return uVar1 - ((int)uVar1 / param_1) * param_1;
}


// 0x00fc668 (0x2d0 bytes)
// strings: 0071fb2c: '������������' | 0096c165: 'None'

longlong MB_DropAmmo(int param_1,uint *param_2)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  
  iVar7 = 0;
  iVar6 = 0;
  lVar8 = 0;
  if (((int)*param_2 < 1) ||
     ((param_1 != 0 &&
      ((*(uint *)(&g_LevelObjBits +
                 Level * 0x100 +
                 (int)((longlong)((int)(short)*(ushort *)(param_1 + 0xb2) >> 5) << 2)) &
       1 << (*(ushort *)(param_1 + 0xb2) & 0x1f)) != 0)))) {
    iVar5 = 0;
    do {
      iVar9 = (int)lVar8;
      bVar1 = g_purchasableVendorItems[iVar5];
      if (bVar1 == 0xff) break;
      if ((&UnlockableItems.field0_0x0)[(int)((ulonglong)bVar1 & 0x3f)] != '\0') {
        iVar6 = iVar6 + 1;
        uVar2 = *(ushort *)((int)&DAT_00737d3e + (int)(((ulonglong)bVar1 & 0x3f) << 3) * 3);
        lVar8 = lVar8 + 1 + (ZERO_MASK((uint)uVar2) & lVar8 - (lVar8 + 1));
        if ((int)(&currentAmmoArray.field0_0x0)[bVar1 & 0x3f] < (int)(uint)uVar2) {
          iVar7 = iVar7 + 1;
        }
      }
      iVar9 = (int)lVar8;
      iVar5 = iVar5 + 1;
    } while (iVar5 < 0xc);
    if (iVar7 == 0) {
      if (iVar6 == 0) {
        *param_2 = 10;
      }
      else {
        iVar6 = rand();
        uVar3 = iVar6 >> 0xf & 0x7fff;
        iVar7 = uVar3 - ((int)uVar3 / iVar9) * iVar9;
        iVar6 = -1;
        while (-1 < iVar7) {
          iVar9 = iVar6 + 1;
          iVar5 = iVar6 + 1;
          iVar6 = iVar9;
          if (((&UnlockableItems.field0_0x0)
               [(int)((ulonglong)(byte)g_purchasableVendorItems[iVar5] & 0x3f)] != '\0') &&
             (*(short *)((int)&DAT_00737d3e +
                        (int)(((ulonglong)(byte)g_purchasableVendorItems[iVar5] & 0x3f) << 3) * 3)
              != 0)) {
            iVar7 = iVar7 + -1;
          }
        }
        *param_2 = (byte)g_purchasableVendorItems[iVar6] & 0x3f;
      }
    }
    else {
      iVar6 = rand();
      uVar3 = iVar6 >> 0xf & 0x7fff;
      iVar7 = uVar3 - ((int)uVar3 / iVar7) * iVar7;
      iVar6 = -1;
      while (-1 < iVar7) {
        iVar9 = iVar6 + 1;
        iVar5 = iVar6 + 1;
        uVar4 = (ulonglong)(byte)g_purchasableVendorItems[iVar5] & 0x3f;
        iVar6 = iVar9;
        if (((&UnlockableItems.field0_0x0)[(int)uVar4] != '\0') &&
           ((int)(&currentAmmoArray.field0_0x0)[(byte)g_purchasableVendorItems[iVar5] & 0x3f] <
            (int)(uint)*(ushort *)((int)&DAT_00737d3e + (int)(uVar4 << 3) * 3))) {
          iVar7 = iVar7 + -1;
        }
      }
      *param_2 = (byte)g_purchasableVendorItems[iVar6] & 0x3f;
    }
  }
  iVar6 = rand();
  uVar4 = (ulonglong)(uint)(iVar6 >> 0xf) & 0x7fff;
  lVar8 = (uVar4 + 1) * 0x3333;
  return (ZERO_MASK(((int)uVar4 -
                    ((uint)(ushort)((ulonglong)lVar8 >> 0x10) +
                    (int)(((ulonglong)(lVar8 << 0x20) >> 0x30) << 2)))) & 1U) + 1;
}


// 0x00fc948 (0x1ec bytes)
// inlined: FastRSqrt @0xfc9ac
undefined8
MB_SplineIntersect(longlong param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  int *piVar17;
  int iVar18;
  undefined8 uVar19;
  bool bVar20;
  
  fVar1 = param_2[1];
  fVar9 = param_3[1] - fVar1;
  fVar2 = *param_2;
  fVar10 = *param_3 - fVar2;
  fVar3 = 1.0;
  fVar7 = fVar10 * fVar10 + fVar9 * fVar9;
  fVar4 = param_3[3];
  fVar5 = param_3[2];
  iVar18 = 1;
  fVar12 = 1.0 / SQRT(fVar7);
  fVar15 = SQRT(fVar7);
  uVar19 = 0;
  fVar12 = -(fVar7 * fVar12 * fVar12 - 1.0) * fVar12 * 0.5 + fVar12;
  fVar12 = -(fVar7 * fVar12 * fVar12 - 1.0) * fVar12 * 0.5 + fVar12;
  fVar6 = param_2[2];
  piVar17 = *(int **)((int)Splines + (int)(param_1 << 2));
  fVar11 = (-(fVar7 * fVar12 * fVar12 - 1.0) * fVar12 * 0.5 + fVar12) / fVar15;
  fVar7 = (float)piVar17[4] - fVar2;
  iVar8 = *piVar17;
  fVar13 = fVar4 * fVar7 + (float)piVar17[7];
  fVar12 = fVar11 * fVar10;
  fVar11 = fVar11 * fVar9;
  fVar16 = 0.0;
  if (0.0 - fVar15 < 0.0) {
    fVar16 = fVar12;
  }
  fVar14 = 0.0;
  if (0.0 - fVar15 < 0.0) {
    fVar14 = fVar11;
  }
  if (fVar15 - 0.0 < 0.0) {
    fVar16 = fVar12;
  }
  if (fVar15 - 0.0 < 0.0) {
    fVar14 = fVar11;
  }
  fVar12 = fVar16 * fVar7 + fVar14 * ((float)piVar17[5] - fVar1);
  fVar7 = fVar14 * fVar7 + -(fVar16 * ((float)piVar17[5] - fVar1));
  if (1 < iVar8) {
    do {
      bVar20 = fVar13 != 0.0;
      fVar11 = (float)piVar17[8] - fVar2;
      fVar13 = fVar11 * fVar4 + (float)piVar17[0xb];
      fVar15 = fVar11 * fVar16 + ((float)piVar17[9] - fVar1) * fVar14;
      fVar11 = fVar11 * fVar14 + -(((float)piVar17[9] - fVar1) * fVar16);
      if ((((bVar20) || (fVar13 != 0.0)) && (fVar11 * fVar7 < 0.0)) &&
         (fVar7 = -(((fVar12 - fVar15) / (fVar7 - fVar11)) * fVar11) + fVar15,
         0.0 < fVar7 && fVar7 < fVar3)) {
        uVar19 = 1;
        fVar3 = fVar7;
      }
      iVar18 = iVar18 + 1;
      fVar12 = fVar15;
      fVar7 = fVar11;
      piVar17 = piVar17 + 4;
    } while (iVar18 < iVar8);
  }
  fVar1 = param_2[1];
  fVar7 = param_2[2];
  param_4[3] = fVar4;
  *param_4 = fVar3 * fVar10 + fVar2;
  param_4[1] = fVar3 * fVar9 + fVar1;
  param_4[2] = fVar3 * (fVar5 - fVar6) + fVar7;
  return uVar19;
}


// 0x00fcb40 (0xa4 bytes)
undefined8 MB_SolveQuad(double param_1,double param_2,double param_3)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  float *in_r6;
  float *in_r7;
  
  fVar1 = (float)(param_2 * param_2 - (double)(float)((double)(float)(param_1 * 4.0) * param_3));
  if (fVar1 == 0.0) {
    uVar3 = 1;
    *in_r6 = (float)(-param_2 / (double)(float)(param_1 * 2.0));
  }
  else {
    fVar2 = (float)(-param_2 - (double)SQRT(ABS(fVar1))) / (float)(param_1 * 2.0);
    *in_r6 = (float)((double)SQRT(ABS(fVar1)) - param_2) / (float)(param_1 * 2.0);
    *in_r7 = fVar2;
    if (*in_r6 < fVar2) {
      *in_r7 = *in_r6;
      *in_r6 = fVar2;
    }
    uVar3 = 0;
    if (0.0 < fVar1) {
      uVar3 = 2;
    }
  }
  return uVar3;
}


// 0x00fcbe8 (0x78 bytes)
double MB_randRangeFloat(float param_1,float param_2)

{
  int iVar1;
  double dVar2;
  double dVar3;
  
  dVar3 = (double)param_2;
  dVar2 = (double)param_1;
  iVar1 = rand();
  return (double)(float)((double)((float)(longlong)(int)(iVar1 >> 0xf & 0x7fff) *
                                 (float)(dVar3 - dVar2)) * 3.0517578125e-05 + dVar2);
}


// 0x00fcc68 (0x64 bytes)
double MB_randRot(void)

{
  int iVar1;
  
  iVar1 = rand();
  return (double)((float)(longlong)(int)((iVar1 >> 0xf & 0xfffU) - 0x800) * 3.1415927 *
                 0.00048828125);
}


// 0x00fcccc (0x34 bytes)
undefined4 MB_GetPvarsIfMobyHasThem(MobyInstance *moby)

{
  undefined4 ret;
  
  if (moby == (MobyInstance *)0x0) {
    ret = 0;
  }
  else if ((moby->modeBits & HAS_SPECIAL_VARS) == NONE) {
    ret = 0;
  }
  else {
                    /* WARNING: Load size is inaccurate */
    ret = *moby->pVar;
  }
  return ret;
}


// 0x00fcd60 (0xb54 bytes)
// strings: 00652f34: ' Scale: 5' | 00652f44: ' Scale: %d' | 00652f54: ' Scale: %4f'

void MB_DistributeBolts
               (int param_1,longlong param_2,int param_3,uint param_4,longlong param_5)

{
  bool bVar1;
  ulonglong uVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar8;
  longlong lVar7;
  int iVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  longlong lVar16;
  int iVar17;
  int iVar18;
  longlong lVar19;
  int iVar20;
  int iVar22;
  int iVar23;
  longlong lVar21;
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
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  double dVar48;
  Vec4 local_160;
  float local_150;
  float local_14c;
  float local_148;
  undefined4 local_144;
  float local_140;
  float local_13c;
  float local_138;
  undefined4 local_134;
  float local_130;
  float local_12c;
  undefined4 local_124;
  float local_120;
  float local_118;
  float local_114;
  float local_110;
  longlong local_108;
  float local_f8;
  
  dVar44 = 0.0;
  bVar1 = (param_4 & 0x20) == 0;
  if (((bVar1) && (*(byte *)(param_1 + 0xb0) != 0xff)) &&
     ((*(short *)(param_1 + 0xa6) < 500 || (0x21c < *(short *)(param_1 + 0xa6))))) {
    g_boltMiningActive = ((byte)(&DAT_00a202c0)[*(byte *)(param_1 + 0xb0)] == 0xff)
    ;
  }
  bVar3 = false;
  if ((g_boltMiningActive != 0) && (bVar3 = false, bVar1)) {
    bVar3 = true;
  }
  if ((param_4 != 0) && (param_3 != 0 || (int)param_2 != 0)) {
    dVar42 = dVar44;
    dVar45 = dVar44;
    dVar47 = dVar44;
    if (((param_4 & 4) != 0) &&
       (((param_1 != 0 && ((*(ushort *)(param_1 + 0x34) & 0x20) != 0)) &&
        (iVar4 = **(int **)(param_1 + 0x78), iVar4 != 0)))) {
      dVar42 = (double)*(float *)(iVar4 + 0x20);
      dVar47 = (double)*(float *)(iVar4 + 0x24);
      dVar45 = (double)*(float *)(iVar4 + 0x28);
    }
    param_2 = param_2 + (param_2 + -1 >> 0x3f & 1U - param_2);
    param_3 = param_3 - (int)param_2;
    iVar4 = rand();
    uVar2 = (ulonglong)(uint)(iVar4 >> 0xf) & 0x7fff;
    iVar4 = (int)uVar2 / (param_3 + 1);
    param_2 = (uVar2 - ((longlong)iVar4 * (longlong)param_3 + (longlong)iVar4)) + param_2;
    lVar19 = param_2 * 2 +
             (ZERO_MASK((g_ChallengeMode | g_goodiesMenuActive)) & -param_2);
    uVar5 = (uint)lVar19;
    if ((((int)uVar5 < 500) && (bVar3)) && (g_boltMiningTimer != 0)) {
      iVar4 = (int)((float)(longlong)(animationSpeed * 60.5) * 60.0);
      local_108 = (longlong)iVar4;
      uVar8 = (iVar4 * g_boltsMined) / g_boltMiningTimer;
      if ((g_ChallengeMode | g_goodiesMenuActive) != 0) {
        uVar8 = ((int)uVar8 >> 1) + (uint)((int)uVar8 < 0 && (uVar8 & 1) != 0);
      }
      if ((int)uVar8 < 0x96) {
        if ((int)uVar8 < 0x5b) {
          printf(" Scale: 5");
          lVar7 = lVar19 * 5;
        }
        else {
          printf(" Scale: %d",(int)(0xbe - uVar8) / 0x14);
          lVar7 = (longlong)(int)uVar5 * (longlong)((int)(0xbe - uVar8) / 0x14);
        }
        lVar19 = lVar7 + (1000 - (longlong)(int)lVar7 >> 0x3f & 1000U - lVar7);
        lVar19 = lVar19 + (ZERO_MASK(g_goodiesMenuActive) &
                          (lVar7 + (500 - (longlong)(int)lVar7 >> 0x3f & 500U - lVar7)) - lVar19);
      }
      else if (300 < (int)uVar8) {
        if ((int)uVar8 < 0x160) {
          dVar31 = (double)FastIntToDouble(0x168 - uVar8);
          printf(" Scale: %4f",(double)(float)(dVar31 * 0.05000000074505806));
          lVar19 = (longlong)(int)uVar5 * (longlong)((int)(0x168 - uVar8) / 0x50);
        }
        else {
          printf(" Scale: %4f",0x3fb99999a0000000);
          lVar19 = (longlong)((int)uVar5 / 10 + ((int)uVar5 >> 0x1f)) + (ulonglong)(uVar5 >> 0x1f);
        }
        lVar19 = lVar19 + ((longlong)(int)lVar19 + -1 >> 0x3f & 1U - lVar19);
      }
    }
    iVar4 = 0;
    iVar6 = (int)lVar19;
    iVar22 = iVar6;
    while (299 < iVar22) {
      lVar19 = lVar19 + -0x32;
      iVar4 = iVar4 + 1;
      iVar22 = (int)lVar19;
    }
    iVar22 = 0;
    iVar23 = (int)lVar19;
    while (199 < iVar23) {
      lVar19 = lVar19 + -0x14;
      iVar22 = iVar22 + 1;
      iVar23 = (int)lVar19;
    }
    iVar23 = 0;
    iVar13 = (int)lVar19;
    while (0x1d < iVar13) {
      lVar19 = lVar19 + -0x19;
      iVar23 = iVar23 + 1;
      iVar22 = iVar22 + 1;
      iVar13 = (int)lVar19;
    }
    iVar13 = (int)lVar19;
    while (6 < iVar13) {
      lVar19 = lVar19 + -5;
      iVar23 = iVar23 + 1;
      iVar13 = (int)lVar19;
    }
    if ((3 < iVar4 + iVar22 + iVar23 + (int)lVar19) && ((param_4 & 8) != 0)) {
      lVar21 = 0;
      iVar20 = 0;
      iVar17 = 3;
      iVar18 = 0;
      iVar9 = 0;
      lVar7 = 3;
      iVar10 = 0;
      lVar12 = 0x96;
      iVar13 = 0x96;
      iVar14 = 3;
      iVar11 = 0;
      if (3 < iVar23 + (int)lVar19 + iVar22 + iVar4) {
        lVar15 = 0;
        lVar19 = 0x96;
        lVar16 = 0;
        iVar13 = 0x96;
        if (iVar6 < 0x96) {
          do {
            iVar13 = (int)lVar12;
            if (iVar13 < 4) break;
            if (iVar17 == 0) {
              if (iVar18 == 0) {
                if (iVar20 != 0) {
                  lVar16 = lVar16 + -5;
                  iVar20 = iVar20 + -1;
                  lVar21 = lVar21 + 1;
                }
              }
              else {
                lVar15 = lVar15 + -0x14;
                iVar18 = iVar18 + -1;
                lVar16 = lVar16 + 5;
                iVar20 = iVar20 + 1;
              }
            }
            else {
              lVar19 = lVar19 + -0x32;
              iVar17 = iVar17 + -1;
              lVar15 = lVar15 + 0x14;
              iVar18 = iVar18 + 1;
            }
            lVar12 = lVar19 + lVar15 + lVar16 + lVar21;
            iVar13 = (int)lVar12;
          } while (iVar6 < iVar13);
        }
        lVar19 = 3;
        iVar14 = 3;
        lVar12 = 0;
        lVar15 = 0;
        lVar16 = 0;
        if (3 < iVar6) {
          do {
            iVar14 = (int)lVar19;
            if (0x95 < iVar14) break;
            if ((int)lVar7 == 0) {
              if (iVar9 == 0) {
                if (iVar10 != 0) {
                  lVar15 = lVar15 + -0x14;
                  iVar10 = iVar10 + -1;
                  lVar12 = lVar12 + 0x32;
                  iVar11 = iVar11 + 1;
                }
              }
              else {
                lVar16 = lVar16 + -5;
                iVar9 = iVar9 + -1;
                lVar15 = lVar15 + 0x14;
                iVar10 = iVar10 + 1;
              }
            }
            else {
              lVar7 = lVar7 + -1;
              lVar16 = lVar16 + 5;
              iVar9 = iVar9 + 1;
            }
            lVar19 = lVar12 + lVar15 + lVar16 + lVar7;
            iVar14 = (int)lVar19;
          } while (iVar14 < iVar6);
        }
      }
      lVar19 = lVar21;
      iVar23 = iVar20;
      iVar4 = iVar17;
      iVar22 = iVar18;
      if (iVar6 - iVar14 <= iVar13 - iVar6) {
        lVar19 = lVar7;
        iVar23 = iVar9;
        iVar4 = iVar11;
        iVar22 = iVar10;
      }
    }
    local_110 = (float)dVar42;
    local_114 = (float)dVar45;
    if (((iVar4 != 0 || iVar22 != 0) || iVar23 != 0) || (int)lVar19 != 0) {
      local_118 = (float)dVar47;
      dVar35 = 0.5;
      dVar42 = 1.570796251296997;
      dVar36 = 3.141592502593994;
      dVar37 = -3.141592502593994;
      dVar38 = -0.16666656732559204;
      dVar39 = 0.008333025500178337;
      dVar40 = -0.0001980741071747616;
      dVar41 = 2.601886990305502e-06;
      dVar45 = 3.700000047683716;
      dVar43 = 1.0;
      dVar47 = 120.0;
      dVar31 = 0.25;
      dVar32 = 0.0015339808305725455;
      dVar46 = 9.1552734375e-05;
      dVar33 = 7.019042823230848e-05;
      dVar34 = -5.400000095367432;
      do {
        local_f8 = (float)dVar34;
        local_160.x = *(float *)(param_1 + 0x10);
        local_160.z = (float)((double)*(float *)(param_1 + 0x18) + dVar35);
        local_160.y = *(float *)(param_1 + 0x14);
        local_160.w = *(float *)(param_1 + 0x1c);
        iVar6 = rand();
        local_108 = (longlong)(int)((iVar6 >> 0xf & 0xfffU) - 0x800);
        dVar48 = (double)(float)((double)local_108 * dVar32);
        dVar24 = (double)(float)(dVar48 + dVar42);
        dVar34 = (double)(float)(dVar36 - dVar24);
        if (dVar24 - (double)(float)(dVar36 - dVar24) < 0.0) {
          dVar34 = dVar24;
        }
        dVar29 = (double)(float)(dVar37 - dVar24);
        if ((double)(float)(dVar37 - dVar24) - dVar34 < 0.0) {
          dVar29 = dVar34;
        }
        dVar34 = (double)(float)(dVar29 * dVar29);
        dVar25 = (double)(float)(dVar34 * (double)(float)(dVar34 * dVar29));
        dVar24 = (double)(float)(dVar34 * dVar25);
        dVar24 = (double)(float)((double)(float)(dVar34 * dVar24) * dVar41 +
                                (double)(float)(dVar24 * dVar40 +
                                               (double)(float)(dVar25 * dVar39 +
                                                              (double)(float)((double)(float)(dVar34
                                                                                             * 
                                                  dVar29) * dVar38 + dVar29))));
        iVar6 = rand();
        local_108 = (longlong)(int)(iVar6 >> 0xf & 0x7fff);
        dVar34 = (double)(float)(dVar36 - dVar48);
        if (dVar48 - (double)(float)(dVar36 - dVar48) < 0.0) {
          dVar34 = dVar48;
        }
        dVar29 = (double)(float)(dVar37 - dVar48);
        if ((double)(float)(dVar37 - dVar48) - dVar34 < 0.0) {
          dVar29 = dVar34;
        }
        dVar48 = (double)(float)(dVar29 * dVar29);
        dVar34 = (double)(float)(dVar48 * (double)(float)(dVar48 * dVar29));
        local_150 = (float)((double)((float)((double)local_108 * dVar46) * g_FrameTime) * dVar24);
        dVar24 = (double)(float)(dVar48 * dVar34);
        dVar34 = (double)(float)((double)(float)(dVar48 * dVar24) * dVar41 +
                                (double)(float)(dVar24 * dVar40 +
                                               (double)(float)(dVar34 * dVar39 +
                                                              (double)(float)((double)(float)(dVar48
                                                                                             * 
                                                  dVar29) * dVar38 + dVar29))));
        iVar6 = rand();
        local_108 = (longlong)(int)(iVar6 >> 0xf & 0x7fff);
        local_148 = (float)dVar44;
        local_14c = (float)((double)((float)((double)local_108 * dVar46) * g_FrameTime) * dVar34);
        iVar6 = rand();
        local_108 = (longlong)(int)(iVar6 >> 0xf & 0x7fff);
        dVar24 = (double)SQRT(local_150 * local_150 + local_14c * local_14c);
        local_160.z = (float)((double)local_160.z + dVar44);
        local_148 = (float)((double)local_108 * dVar33 + dVar45) * g_FrameTime;
        dVar48 = (double)local_148;
        dVar29 = (double)(local_14c * (float)(dVar35 / dVar24));
        dVar25 = (double)(local_150 * (float)(dVar35 / dVar24));
        dVar34 = dVar44;
        if (dVar44 - dVar24 < 0.0) {
          dVar34 = dVar29;
        }
        dVar26 = dVar44;
        if (dVar44 - dVar24 < 0.0) {
          dVar26 = dVar25;
        }
        if (dVar24 - dVar44 < 0.0) {
          dVar34 = dVar29;
        }
        if (dVar24 - dVar44 < 0.0) {
          dVar26 = dVar25;
        }
        local_160.y = (float)((double)local_160.y + dVar34);
        local_160.x = (float)((double)local_160.x + dVar26);
        dVar34 = (double)local_f8;
        if (-1 < (int)param_5) {
          iVar6 = MB_SolveQuad((double)(float)((double)DAT_0071f418 * dVar34),
                               (double)(float)(dVar48 - (double)(float)((double)DAT_0071f418 *
                                                                       dVar34)),
                               (double)(local_160.z -
                                       *(float *)(*(int *)((int)Splines + (int)(param_5 << 2)) +
                                                 0x18)));
          local_108 = (longlong)iVar6;
          dVar24 = dVar47;
          if ((dVar43 <= (double)local_108) &&
             (iVar6 = FLOAT_ORDER(local_120), 0 < iVar6 && iVar6 < 0x42f00000)) {
            dVar24 = (double)local_120;
          }
          local_140 = (float)((double)local_150 * dVar24 + (double)*(float *)(param_1 + 0x10));
          local_13c = (float)((double)local_14c * dVar24 + (double)*(float *)(param_1 + 0x14));
          local_138 = (float)((double)local_148 * dVar24 + (double)*(float *)(param_1 + 0x18));
          local_134 = local_144;
          MB_SplineIntersect(param_5,param_1 + 0x10,&local_140,&local_130);
          dVar29 = (double)(local_12c - local_160.y);
          dVar25 = (double)(local_130 - local_160.x);
          local_150 = (float)(dVar43 / dVar24);
          dVar26 = (double)SQRT((float)(dVar44 * dVar44 +
                                       (double)(float)(dVar25 * dVar25 +
                                                      (double)(float)(dVar29 * dVar29))));
          dVar48 = (double)local_148;
          local_134 = local_124;
          dVar28 = (double)(float)(dVar31 / dVar26);
          dVar24 = dVar44;
          if (dVar44 - dVar26 < 0.0) {
            dVar24 = (double)(float)(dVar28 * dVar44);
          }
          dVar30 = dVar44;
          if (dVar44 - dVar26 < 0.0) {
            dVar30 = (double)(float)(dVar29 * dVar28);
          }
          dVar27 = dVar44;
          if (dVar44 - dVar26 < 0.0) {
            dVar27 = (double)(float)(dVar25 * dVar28);
          }
          if (dVar26 - dVar44 < 0.0) {
            dVar24 = (double)(float)(dVar28 * dVar44);
          }
          if (dVar26 - dVar44 < 0.0) {
            dVar30 = (double)(float)(dVar29 * dVar28);
          }
          if (dVar26 - dVar44 < 0.0) {
            dVar27 = (double)(float)(dVar25 * dVar28);
          }
          local_138 = (float)(dVar44 - dVar24) * local_150;
          local_14c = (float)(dVar29 - dVar30) * local_150;
          local_150 = (float)(dVar25 - dVar27) * local_150;
          local_140 = local_150;
          local_13c = local_14c;
        }
        local_150 = local_150 + local_110;
        local_14c = local_14c + local_118;
        local_148 = (float)(dVar48 + (double)local_114);
        if (iVar4 == 0) {
          if (iVar22 == 0) {
            if (iVar23 == 0) {
              MB_SpawnBolts(param_1,&local_160,&local_150,param_4,1,bVar3);
              lVar19 = lVar19 + -1;
            }
            else {
              MB_SpawnBolts(param_1,&local_160,&local_150,param_4,5,bVar3);
              iVar23 = iVar23 + -1;
            }
          }
          else {
            MB_SpawnBolts(param_1,&local_160,&local_150,param_4,0x14,bVar3);
            iVar22 = iVar22 + -1;
          }
        }
        else {
          MB_SpawnBolts(param_1,&local_160,&local_150,param_4,0x32,bVar3);
          iVar4 = iVar4 + -1;
        }
      } while (((iVar4 != 0 || iVar22 != 0) || iVar23 != 0) || (int)lVar19 != 0);
    }
  }
  return;
}


// 0x00fd8d0 (0x420 bytes)
void MB_SpawnBoltsFromCrate(undefined8 param_1,uint param_2,undefined8 param_3)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  GPiece<16> auVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  LevelId LVar10;
  int iVar12;
  ulonglong uVar11;
  undefined4 *puVar13;
  int iVar14;
  longlong lVar15;
  uint uVar17;
  ulonglong uVar16;
  undefined4 *puVar18;
  byte in_cr6;
  undefined8 in_LR;
  double dVar19;
  GPiece<16> auVar20;
  GPiece<16> auVar21;
  GPiece<16> auVar22;
  GPiece<16> auVar23;
  
  LVar10 = Level;
  iVar14 = (int)param_1;
  auVar21 = ZEXT416(0xfffffff0);
  auVar20 = loadVectorLeftIndexed(0xb4,param_1);
  auVar21 = vectorShiftRightAlgebraicWord
                      (auVar20,auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60);
  auVar21 = vectorConvertFromSignedFixedPointWord(auVar21,0);
  dVar19 = (double)(longlong)(int)*(short *)(iVar14 + 0xb4);
  if (*(char *)(iVar14 + 0xb1) != -2) {
    uVar2 = *(ushort *)(iVar14 + 0xb2);
    if (-1 < (short)uVar2) {
      iVar8 = (int)((longlong)((int)(short)uVar2 >> 5) << 2);
      uVar3 = *(ushort *)(iVar14 + 0xb2);
      iVar12 = Level * 0x100;
      iVar7 = (int)((longlong)((int)(short)uVar3 >> 5) << 2);
      uVar17 = *(uint *)(&g_CheckpointBits + iVar7);
      *(uint *)(&g_LevelObjBits + iVar12 + iVar8) =
           *(uint *)(&g_LevelObjBits + iVar12 + iVar8) | 1 << (uVar2 & 0x1f);
      *(uint *)(&g_CheckpointBits + iVar7) = uVar17 | 1 << (uVar3 & 0x1f);
      bVar1 = *(byte *)(iVar14 + 0xb0);
      (&g_CheckpointLive.objState[0])[(short)uVar3] = bVar1 + 2;
      if ((bVar1 == 0xff) || (((&DAT_00a202c0)[bVar1] != -1 && (g_LevelFlags[LVar10][bVar1] == -1)))
         ) {
        (&g_Checkpoint.objState[0])[(short)uVar3] = bVar1 + 2;
      }
      if (*(byte *)(iVar14 + 0xb1) < 0x80) {
        auVar20 = ZEXT416(0xfffffff0);
        lVar15 = (ulonglong)*(byte *)(iVar14 + 0xb1) * 4 + 0xa0e11e;
        auVar22 = loadVectorLeftIndexed(0xb6,param_1);
        uVar17 = (int)*(short *)(iVar14 + 0xb6) + 1;
        auVar23 = vectorShiftRightAlgebraicWord
                            (auVar22,auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60);
        auVar22 = loadVectorLeftIndexed((longlong)iVar12,lVar15);
        auVar20 = loadVectorRightIndexed((longlong)iVar12 + 0x10,lVar15);
        iVar12 = (int)*(short *)(iVar14 + 0xb6) - (int)*(short *)((int)lVar15 + iVar12);
        if ((int)(((int)uVar17 >> 1) + (uint)((int)uVar17 < 0 && (uVar17 & 1) != 0)) < iVar12) {
          auVar4 = ZEXT416(0xfffffff0);
          auVar20 = vectorShiftRightAlgebraicWord
                              (auVar22 | auVar20,
                               auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60);
          auVar20 = vectorSubtractUnsignedWordModulo(auVar23,auVar20);
          if (iVar12 != 0) {
            auVar21 = vectorConvertFromSignedFixedPointWord(auVar20,0);
            dVar19 = (double)(longlong)iVar12;
          }
        }
        auVar21 = auVar21 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar21 = auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60;
        auVar20 = loadVectorLeftIndexed(in_LR,0xfd8b4);
        auVar20 = auVar20 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar20 = auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60;
        vectorCompareGreaterThanOrEqualToFloatingPoint(auVar21,auVar20);
        if ((bool)(in_cr6 >> 1 & 1)) {
          dVar19 = 1.0;
          auVar21 = auVar20;
        }
      }
      auVar21 = auVar21 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar21 = auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60;
      uVar11 = (ZERO_MASK((param_2 & 0x100)) & 0xfffffffffffffffcU) + 5;
      uVar16 = uVar11 | 2;
      uVar16 = uVar16 + (ZERO_MASK(((uint)DAT_0096bd92 | param_2 & 0x200)) &
                        uVar11 - uVar16);
      if (g_heroState == THRUSTER_PACK_FORWARD_JUMP) {
        fVar5 = g_heroPosition.y - *(float *)(iVar14 + 0x14);
        fVar6 = g_heroPosition.x - *(float *)(iVar14 + 0x10);
        fVar9 = g_heroPosition.z - *(float *)(iVar14 + 0x18);
        if (SQRT(fVar9 * fVar9 + fVar6 * fVar6 + fVar5 * fVar5) < 4.0) {
          uVar16 = uVar16 | 2;
        }
      }
      uVar11 = (uVar16 | 0x10) +
               (ZERO_MASK((param_2 & 0x400)) & uVar16 - (uVar16 | 0x10));
      if ((numSpawnableMobys < 100) || ((param_2 & 0x800) != 0)) {
        uVar11 = uVar11 | 8;
      }
      auVar20 = ZEXT416(0);
      auVar20 = auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60;
      auVar22 = vectorCompareGreaterThanFloatingPoint(auVar20,auVar21);
      lVar15 = (longlong)numSpawnableMobys;
      auVar21 = vectorLogicalAndWithComplement(auVar21,auVar22);
      vectorCompareGreaterThanFloatingPoint(auVar21,auVar20);
      if (dVar19 - 0.0 < 0.0) {
        dVar19 = 0.0;
      }
      if (!(bool)(in_cr6 >> 1 & 1)) {
        puVar18 = (undefined4 *)0x0;
        auVar20 = loadVectorLeftIndexed(0xc,0xfd8b4);
        auVar20 = auVar20 >> 0x60 & (GPiece<16>)0xffffffff;
        vectorCompareGreaterThanOrEqualToFloatingPoint
                  (auVar21,auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60);
        if ((bool)(in_cr6 >> 1 & 1)) {
          puVar13 = &DAT_000fd8b4;
          auVar20 = loadVectorLeftIndexed(0x14,0xfd8b4);
          auVar20 = auVar20 >> 0x60 & (GPiece<16>)0xffffffff;
          vectorCompareGreaterThanOrEqualToFloatingPoint
                    (auVar21,auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60);
          if (!(bool)(in_cr6 >> 1 & 1)) {
            puVar18 = (undefined4 *)0x1;
          }
        }
        else {
          puVar13 = (undefined4 *)
                    FastDoubleToInt((double)(float)(dVar19 * 0.25),&DAT_000fd8b4,0xc);
          puVar18 = puVar13;
        }
        iVar14 = FastDoubleToInt(dVar19,puVar13);
        MB_DistributeBolts(param_1,iVar14 - (int)puVar18,iVar14 + (int)puVar18,
                           uVar11 + (lVar15 + -0x32 >> 0x3f & (uVar11 | 2) - uVar11),param_3);
      }
    }
  }
  return;
}


// 0x00fdcf0 (0xc8 bytes)
void MB_SetAnimationNoBlend(MobyInstance *param_1,longlong param_2,longlong param_3)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  
  iVar2 = *(int *)(&param_1->pClass->type + (int)(param_2 << 2));
  bVar1 = *(byte *)(iVar2 + 0x10);
  param_1->updateId = (u8)param_2;
  lVar6 = (ulonglong)bVar1 - 1;
  lVar6 = lVar6 + ((longlong)(param_3 - (ulonglong)bVar1) >> 0x3f & param_3 - lVar6);
  lVar3 = lVar6 + 1;
  param_1->previousAnimationFrame = (char)lVar6;
  uVar4 = (uint)lVar3;
  param_1->animationFrame = (char)lVar3;
  uVar5 = *(byte *)(iVar2 + 0x10) - 1;
  if ((int)uVar5 < (int)(uVar4 & 0xff)) {
    param_1->animationFrame = (char)uVar5;
    uVar4 = uVar5;
  }
  param_1->animationId = (u8)param_2;
  if ((uint)*(byte *)(iVar2 + 0x10) <= (uVar4 & 0xff)) {
    param_1->animationFrame = '\0';
  }
  UpdateMobyFrameData(param_1);
                    /* WARNING: Load size is inaccurate */
  param_1->frameSpeed = *param_1->pPreviousAnimationData;
  param_1->field43_0x70 = param_1->field43_0x70 & 0xfd;
  return;
}


// 0x00fddc0 (0x1b8 bytes)
void MB_SetAnimation
               (MobyInstance *param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  float fVar1;
  byte bVar2;
  uint uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  double dVar8;
  double dVar9;
  
  iVar5 = (int)(param_2 << 2);
  uVar3 = (int)param_1->animationBlend >> 0x1f;
  bVar2 = *(byte *)(*(int *)(&param_1->pClass->type + iVar5) + 0x10);
  cVar4 = bVar2 - 1;
  if (((0x3ccccccd < (int)((uVar3 >> 1 ^ (uint)param_1->animationBlend) - uVar3)) ||
      (param_1->pAnimationLayers != (void *)0x0)) || (param_1->pManipulators != (Manipulator *)0x0))
  {
    iVar7 = AnimCache_Register((int)param_1);
    if (-1 < iVar7) {
      InterpolateAnimation(param_1,(longlong)iVar7 | 0x300);
      iVar6 = (int)((longlong)iVar7 << 4);
      *(float *)(iVar6 + 0xa34600) = (param_1->transform).v3.x;
      *(float *)(iVar6 + 0xa34604) = (param_1->transform).v3.y;
      *(float *)(iVar6 + 0xa34608) = (param_1->transform).v3.z;
      *(float *)(iVar6 + 0xa3460c) = (param_1->transform).v3.w;
      if (param_1->updateId != 0xff) {
        param_1->previousAnimationId = param_1->updateId;
      }
      param_1->updateId = 0xff;
      param_1->previousAnimationFrame = (char)iVar7;
    }
  }
  param_1->animationFrame =
       cVar4 + ((byte)((longlong)(param_3 - (ulonglong)bVar2) >> 0x3f) & (char)param_3 - cVar4);
  param_1->animationId = (u8)param_2;
  UpdateMobyFrameData(param_1);
  dVar9 = 1.0;
  param_1->unk58 = 1.0;
  fVar1 = 1e+07;
  if ((int)param_4 != 0) {
    dVar8 = (double)FastIntToDouble(param_4);
    fVar1 = (float)(dVar9 / dVar8);
  }
  param_1->frameSpeed = fVar1;
  param_1->animationBlend = 0.0;
  param_1->field43_0x70 = param_1->field43_0x70 & 0xfd;
  param_1->unk7c = *(char *)(*(int *)(&param_1->pClass->type + iVar5) + 0x11);
  return;
}


// 0x00fdf80 (0x1ec bytes)
void MB_SetAnimationFrame(MobyInstance *moby,int anim,int frame,int blendFrames,int flags)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar7;
  double dVar8;
  double dVar9;
  int iVar6;
  
  uVar2 = (int)moby->animationBlend >> 0x1f;
  if ((((0x3ccccccd < (int)((uVar2 >> 1 ^ (uint)moby->animationBlend) - uVar2)) ||
       (moby->pAnimationLayers != (void *)0x0)) || (moby->pManipulators != (Manipulator *)0x0)) ||
     ((flags & 4U) != 0)) {
    iVar6 = AnimCache_Register((int)moby);
    uVar4 = (ulonglong)iVar6;
    if (-1 < iVar6) {
      uVar5 = (uVar4 | 0x100) + (ZERO_MASK((flags & 1U)) & uVar4 - (uVar4 | 0x100))
      ;
      uVar7 = uVar5 | 0x200;
      InterpolateAnimation
                (moby,uVar7 + (ZERO_MASK((flags & 2U)) & uVar5 - uVar7));
      iVar3 = (int)(uVar4 << 4);
      *(float *)(iVar3 + 0xa34600) = (moby->transform).v3.x;
      *(float *)(iVar3 + 0xa34604) = (moby->transform).v3.y;
      *(float *)(iVar3 + 0xa34608) = (moby->transform).v3.z;
      *(float *)(iVar3 + 0xa3460c) = (moby->transform).v3.w;
      if (moby->updateId != 0xff) {
        moby->previousAnimationId = moby->updateId;
      }
      moby->updateId = 0xff;
      moby->previousAnimationFrame = (char)iVar6;
    }
  }
  moby->animationFrame = (char)frame;
  moby->animationId = (u8)anim;
  UpdateMobyFrameData(moby);
  dVar9 = 1.0;
  moby->unk58 = 1.0;
  fVar1 = 1e+07;
  if (blendFrames != 0) {
    dVar8 = (double)FastIntToDouble(blendFrames);
    fVar1 = (float)(dVar9 / dVar8);
  }
  moby->frameSpeed = fVar1;
  moby->field43_0x70 = moby->field43_0x70 & 0xfd;
  moby->animationBlend = 0.0;
  moby->unk7c = *(char *)(*(int *)(&moby->pClass->type + (int)((longlong)anim << 2)) + 0x11);
  return;
}


// 0x00fe178 (0x1d0 bytes)
// inlined: FastAtan2 @0xfe22c
double ____Unused_MB_GetBoneAngle(undefined8 param_1,undefined8 param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  ulonglong *puVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  float *pfVar15;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar16;
  double dVar17;
  
  uVar9 = ZEXT48(&stack0x00000000);
  lVar10 = uVar9 - 0xe0;
  puVar5 = (ulonglong *)lVar10;
  *puVar5 = uVar9;
  puVar5[0x1e] = in_LR;
  puVar5[0x1b] = unaff_r31;
  GetBoneTransformations(param_1,param_2,uVar9 - 0x70);
  fVar8 = ABS(*(float *)(puVar5 + 0xe));
  fVar3 = ABS(*(float *)((int)puVar5 + 0x74));
  dVar17 = 0.0;
  *(float *)(puVar5 + 0x16) = fVar8 - fVar3;
  uVar11 = (ulonglong)(*(uint *)(puVar5 + 0xe) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar5 + 0x16) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar5 + 0x74) >> 0x1d) & 4;
  fVar2 = fVar8;
  if (*(float *)(puVar5 + 0x16) - 0.0 < 0.0) {
    fVar2 = fVar3;
  }
  fVar4 = *(float *)(&g_atanQuadrantTable + (int)(uVar11 << 2));
  fVar1 = *(float *)(((uint)(uVar11 << 2) | 0x735900) + 4);
  if (*(float *)(puVar5 + 0x16) - 0.0 < 0.0) {
    fVar3 = fVar8;
  }
  if (0.0 < fVar2) {
    lVar14 = uVar9 - 0xd0;
    lVar12 = uVar9 - 0x1c;
    lVar13 = uVar9 - 0x2c;
    lVar16 = 2;
    fVar2 = (fVar3 - fVar2) / (fVar3 + fVar2);
    fVar3 = fVar2 * fVar2;
    *(float *)(puVar5 + 0x18) = fVar2;
    *(float *)(puVar5 + 0x17) = fVar2;
    *(float *)((int)puVar5 + 0xbc) = fVar2;
    *(float *)((int)puVar5 + 0xb4) = fVar2;
    fVar2 = fVar3 * fVar3;
    *(float *)(puVar5 + 0x17) = *(float *)(puVar5 + 0x17) * fVar3;
    *(float *)((int)puVar5 + 0xbc) = *(float *)((int)puVar5 + 0xbc) * fVar2;
    *(float *)(puVar5 + 0x18) = *(float *)(puVar5 + 0x18) * fVar2 * fVar3;
    do {
      *(float *)((int)lVar14 + 0xb4) = *(float *)((int)lVar14 + 0xa4) * fVar2 * fVar2;
      iVar6 = (int)lVar13;
      lVar13 = lVar13 + 8;
      lVar14 = lVar14 + 8;
      *(float *)((int)lVar12 + 4) = *(float *)(iVar6 + 4) * fVar2 * fVar2;
      lVar12 = lVar12 + 8;
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
    lVar14 = uVar9 - 0x2c;
    lVar16 = 4;
    pfVar15 = (float *)&DAT_007358e0;
    lVar12 = lVar14;
    lVar13 = lVar10;
    do {
      fVar2 = *pfVar15;
      fVar3 = pfVar15[1];
      pfVar15 = pfVar15 + 2;
      *(float *)((int)lVar13 + 0xb4) = *(float *)((int)lVar13 + 0xb4) * fVar2;
      lVar13 = lVar13 + 8;
      *(float *)((int)lVar12 + 4) = *(float *)((int)lVar12 + 4) * fVar3;
      lVar12 = lVar12 + 8;
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
    lVar12 = 2;
    do {
      iVar6 = (int)lVar10;
      iVar7 = (int)lVar14;
      lVar10 = lVar10 + 0x10;
      lVar14 = lVar14 + 0x10;
      dVar17 = (double)((float)(dVar17 + (double)*(float *)(iVar6 + 0xb4)) + *(float *)(iVar7 + 4) +
                        *(float *)(iVar7 + 8) + *(float *)(iVar7 + 0xc));
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
    dVar17 = (double)((float)(dVar17 + 0.7853981852531433) * fVar4 + fVar1);
  }
  return dVar17;
}


// 0x00fe350 (0x18 bytes)
float MB_EaseOutQuad(float t)

{
  return -((1.0 - t) * (1.0 - t) - 1.0);
}


// 0x00fe368 (0x2c bytes)
float MB_EaseInPow(float t,int n)

{
  float fVar1;
  int iVar2;
  int in_r4;
  
  fVar1 = t;
  if (1 < in_r4) {
    iVar2 = in_r4 + -1;
    do {
      iVar2 = iVar2 + -1;
      fVar1 = fVar1 * t;
    } while (0 < iVar2);
  }
  return fVar1;
}


// 0x00fe398 (0x40 bytes)
float MB_EaseOutPow(float t,int n)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int in_r4;
  
  fVar1 = 1.0 - t;
  fVar2 = fVar1;
  if (1 < in_r4) {
    iVar3 = in_r4 + -1;
    do {
      iVar3 = iVar3 + -1;
      fVar2 = fVar2 * fVar1;
    } while (0 < iVar3);
  }
  return 1.0 - fVar2;
}


// 0x00fe3d8 (0x10 bytes)
float MB_EaseInQuadRange(float t,float range)

{
  return (t / range) * (t / range) * range;
}


// 0x00fe3f0 (0x20 bytes)
float MB_EaseOutQuadRange(float t,float range)

{
  float fVar1;
  
  fVar1 = 1.0 - t / range;
  return range * -(fVar1 * fVar1 - 1.0);
}


// 0x00fe410 (0x2c bytes)
float MB_EaseInPowRange(float t,float range,int n)

{
  float fVar1;
  int iVar2;
  int in_r4;
  
  fVar1 = t / range;
  if (1 < in_r4) {
    iVar2 = in_r4 + -1;
    do {
      iVar2 = iVar2 + -1;
      fVar1 = fVar1 * t;
    } while (0 < iVar2);
  }
  return range * fVar1;
}


// 0x00fe440 (0x44 bytes)
float MB_EaseOutPowRange(float t,float range,int n)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int in_r4;
  
  fVar1 = 1.0 - t / range;
  fVar2 = fVar1;
  if (1 < in_r4) {
    iVar3 = in_r4 + -1;
    do {
      iVar3 = iVar3 + -1;
      fVar2 = fVar2 * fVar1;
    } while (0 < iVar3);
  }
  return range * (1.0 - fVar2);
}


// 0x00fe484 (0x64 bytes)
int MB_randRange(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = rand();
  uVar1 = iVar2 >> 0xf & 0x7fff;
  iVar2 = (int)uVar1 / ((param_2 - param_1) + 1);
  return (uVar1 - (iVar2 * (param_2 - param_1) + iVar2)) + param_1;
}


// 0x00fe4f0 (0x88 bytes)
double MB_randRangeSigned(double param_1,double param_2)

{
  uint uVar1;
  double dVar2;
  double dVar3;
  
  uVar1 = rand();
  dVar3 = (double)((float)(longlong)(int)((int)uVar1 >> 0xf & 0xfff) * (float)(param_2 - param_1));
  dVar2 = (double)(float)(dVar3 * 0.000244140625 + param_1);
  if ((uVar1 >> 0xf & 1) != 0) {
    dVar2 = -(double)(float)(dVar3 * 0.000244140625 + param_1);
  }
  return dVar2;
}


// 0x00fe580 (0x70 bytes)
double MB_randFalloff(double param_1)

{
  float fVar1;
  int iVar2;
  
  iVar2 = rand();
  fVar1 = (float)(longlong)(int)(iVar2 >> 0xf & 0xfff) * 0.00024414062;
  return (double)(float)(param_1 * -(double)(fVar1 * fVar1 - 1.0));
}


// 0x00fe610 (0x16c bytes)
void MB_SphericalToVector(float radius,float ang1,float ang2,float *out)

{
  float fVar1;
  float fVar2;
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
  float fVar14;
  float fVar15;
  float fVar16;
  
  fVar13 = ang2 + 1.5707963;
  fVar1 = ang1 + 1.5707963;
  fVar2 = 3.1415925 - ang1;
  if (ang1 - (3.1415925 - ang1) < 0.0) {
    fVar2 = ang1;
  }
  fVar4 = 3.1415925 - fVar13;
  if (fVar13 - (3.1415925 - fVar13) < 0.0) {
    fVar4 = fVar13;
  }
  fVar12 = 3.1415925 - fVar1;
  if (fVar1 - (3.1415925 - fVar1) < 0.0) {
    fVar12 = fVar1;
  }
  fVar5 = 3.1415925 - ang2;
  if (ang2 - (3.1415925 - ang2) < 0.0) {
    fVar5 = ang2;
  }
  fVar3 = -3.1415925 - ang1;
  if ((-3.1415925 - ang1) - fVar2 < 0.0) {
    fVar3 = fVar2;
  }
  fVar2 = -3.1415925 - fVar13;
  if ((-3.1415925 - fVar13) - fVar4 < 0.0) {
    fVar2 = fVar4;
  }
  fVar13 = -3.1415925 - fVar1;
  if ((-3.1415925 - fVar1) - fVar12 < 0.0) {
    fVar13 = fVar12;
  }
  fVar1 = fVar3 * fVar3;
  fVar12 = fVar2 * fVar2;
  fVar14 = fVar13 * fVar13;
  fVar4 = -3.1415925 - ang2;
  if ((-3.1415925 - ang2) - fVar5 < 0.0) {
    fVar4 = fVar5;
  }
  fVar5 = fVar4 * fVar4;
  fVar16 = fVar1 * fVar1 * fVar3;
  fVar11 = fVar12 * fVar12 * fVar2;
  fVar8 = fVar14 * fVar14 * fVar13;
  fVar15 = fVar1 * fVar16;
  fVar10 = fVar12 * fVar11;
  fVar9 = fVar14 * fVar8;
  fVar6 = fVar5 * fVar5 * fVar4;
  fVar7 = fVar5 * fVar6;
  fVar2 = fVar12 * fVar10 * 2.601887e-06 +
          fVar10 * -0.0001980741 + fVar11 * 0.0083330255 + fVar12 * fVar2 * -0.16666657 + fVar2;
  out[1] = (fVar1 * fVar15 * 2.601887e-06 +
           fVar15 * -0.0001980741 + fVar16 * 0.0083330255 + fVar1 * fVar3 * -0.16666657 + fVar3) *
           radius * fVar2;
  *out = (fVar14 * fVar9 * 2.601887e-06 +
         fVar9 * -0.0001980741 + fVar8 * 0.0083330255 + fVar14 * fVar13 * -0.16666657 + fVar13) *
         radius * fVar2;
  out[2] = (fVar5 * fVar7 * 2.601887e-06 +
           fVar7 * -0.0001980741 + fVar6 * 0.0083330255 + fVar5 * fVar4 * -0.16666657 + fVar4) *
           radius;
  return;
}


// 0x00fe788 (0x114 bytes)
void MB_randVector(double minRadius,double maxRadius,Vec4 *outPos)

{
  int iVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  iVar1 = rand();
  dVar4 = 3.1415927410125732;
  dVar3 = 0.00048828125;
  dVar2 = (double)((float)((double)(longlong)(int)((iVar1 >> 0xf & 0xfffU) - 0x800) *
                          3.1415927410125732) * 0.00048828125);
  iVar1 = rand();
  dVar3 = (double)(float)((double)(float)((double)(longlong)(int)((iVar1 >> 0xf & 0xfffU) - 0x800) *
                                         dVar4) * dVar3);
  iVar1 = rand();
  MB_SphericalToVector
            ((float)((double)((float)(longlong)(int)(iVar1 >> 0xf & 0x7fff) *
                             (float)(maxRadius - minRadius)) * 3.0517578125e-05 + minRadius),
             (float)dVar2,(float)dVar3,&outPos->x);
  return;
}


// 0x00fe8c8 (0x170 bytes)
void MB_randCircle(double param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  iVar6 = rand();
  dVar10 = (double)((float)(longlong)(int)((iVar6 >> 0xf & 0xfffU) - 0x800) * 3.1415927 *
                   0.00048828125);
  iVar6 = rand();
  param_2[3] = 0.0;
  param_2[2] = 0.0;
  fVar1 = (float)(dVar10 + 1.570796251296997);
  dVar8 = (double)(float)(3.141592502593994 - dVar10);
  if (dVar10 - (double)(float)(3.141592502593994 - dVar10) < 0.0) {
    dVar8 = dVar10;
  }
  fVar2 = (float)(longlong)(int)(iVar6 >> 0xf & 0xfff) * 0.00024414062;
  fVar3 = 3.1415925 - fVar1;
  if (fVar1 - (3.1415925 - fVar1) < 0.0) {
    fVar3 = fVar1;
  }
  dVar7 = (double)(float)(-3.141592502593994 - dVar10);
  if ((double)(float)(-3.141592502593994 - dVar10) - dVar8 < 0.0) {
    dVar7 = dVar8;
  }
  fVar2 = (float)(param_1 * -(double)(fVar2 * fVar2 - 1.0));
  fVar4 = -3.1415925 - fVar1;
  if ((-3.1415925 - fVar1) - fVar3 < 0.0) {
    fVar4 = fVar3;
  }
  dVar8 = (double)(float)(dVar7 * dVar7);
  fVar5 = fVar4 * fVar4;
  dVar9 = (double)(float)(dVar8 * (double)(float)(dVar8 * dVar7));
  fVar1 = fVar5 * fVar5 * fVar4;
  dVar10 = (double)(float)(dVar8 * dVar9);
  fVar3 = fVar5 * fVar1;
  param_2[1] = ((float)(dVar8 * dVar10) * 2.601887e-06 +
               (float)(dVar10 * -0.0001980741071747616 +
                      (double)(float)(dVar9 * 0.008333025500178337 +
                                     (double)(float)((double)(float)(dVar8 * dVar7) *
                                                     -0.16666656732559204 + dVar7)))) * fVar2;
  *param_2 = (fVar5 * fVar3 * 2.601887e-06 +
             fVar3 * -0.0001980741 + fVar1 * 0.0083330255 + fVar5 * fVar4 * -0.16666657 + fVar4) *
             fVar2;
  return;
}


// 0x00fea60 (0x234 bytes)
void MB_randSphere(double param_1,double param_2,float *param_3)

{
  float fVar1;
  float fVar2;
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
  int iVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  
  iVar13 = rand();
  dVar18 = (double)(float)((double)((float)(longlong)(int)(iVar13 >> 0xf & 0x7fff) *
                                   (float)(param_2 - param_1)) * 3.0517578125e-05 + param_1);
  iVar13 = rand();
  dVar17 = 3.1415927410125732;
  dVar16 = 0.00048828125;
  dVar15 = (double)((float)((double)(longlong)(int)((iVar13 >> 0xf & 0xfffU) - 0x800) *
                           3.1415927410125732) * 0.00048828125);
  iVar13 = rand();
  fVar1 = (float)(dVar15 + 1.570796251296997);
  fVar5 = 3.1415925 - fVar1;
  if (fVar1 - (3.1415925 - fVar1) < 0.0) {
    fVar5 = fVar1;
  }
  fVar2 = (float)((double)(float)((double)(longlong)(int)((iVar13 >> 0xf & 0xfffU) - 0x800) * dVar17
                                 ) * dVar16);
  fVar3 = fVar2 + 1.5707963;
  fVar6 = -3.1415925 - fVar1;
  if ((-3.1415925 - fVar1) - fVar5 < 0.0) {
    fVar6 = fVar5;
  }
  dVar16 = (double)(float)(3.141592502593994 - dVar15);
  if (dVar15 - (double)(float)(3.141592502593994 - dVar15) < 0.0) {
    dVar16 = dVar15;
  }
  fVar1 = fVar6 * fVar6;
  fVar5 = 3.1415925 - fVar2;
  if (fVar2 - (3.1415925 - fVar2) < 0.0) {
    fVar5 = fVar2;
  }
  dVar17 = (double)(float)(-3.141592502593994 - dVar15);
  if ((double)(float)(-3.141592502593994 - dVar15) - dVar16 < 0.0) {
    dVar17 = dVar16;
  }
  fVar7 = 3.1415925 - fVar3;
  if (fVar3 - (3.1415925 - fVar3) < 0.0) {
    fVar7 = fVar3;
  }
  fVar4 = fVar1 * fVar1 * fVar6;
  dVar15 = (double)(float)(dVar17 * dVar17);
  fVar11 = -3.1415925 - fVar2;
  if ((-3.1415925 - fVar2) - fVar5 < 0.0) {
    fVar11 = fVar5;
  }
  fVar5 = fVar1 * fVar4;
  fVar12 = fVar11 * fVar11;
  fVar2 = -3.1415925 - fVar3;
  if ((-3.1415925 - fVar3) - fVar7 < 0.0) {
    fVar2 = fVar7;
  }
  dVar14 = (double)(float)(dVar15 * (double)(float)(dVar15 * dVar17));
  fVar9 = fVar2 * fVar2;
  dVar16 = (double)(float)(dVar15 * dVar14);
  fVar3 = fVar12 * fVar12 * fVar11;
  fVar10 = fVar12 * fVar3;
  fVar7 = fVar9 * fVar9 * fVar2;
  fVar8 = fVar9 * fVar7;
  fVar3 = fVar12 * fVar10 * 2.601887e-06 +
          fVar10 * -0.0001980741 + fVar3 * 0.0083330255 + fVar12 * fVar11 * -0.16666657 + fVar11;
  *param_3 = (float)((double)((fVar1 * fVar5 * 2.601887e-06 +
                              fVar5 * -0.0001980741 +
                              fVar4 * 0.0083330255 + fVar1 * fVar6 * -0.16666657 + fVar6) * fVar3) *
                    dVar18);
  param_3[1] = (float)((double)(((float)(dVar15 * dVar16) * 2.601887e-06 +
                                (float)(dVar16 * -0.0001980741071747616 +
                                       (double)(float)(dVar14 * 0.008333025500178337 +
                                                      (double)(float)((double)(float)(dVar15 * 
                                                  dVar17) * -0.16666656732559204 + dVar17)))) *
                               fVar3) * dVar18);
  param_3[2] = (float)((double)(fVar9 * fVar8 * 2.601887e-06 +
                               fVar8 * -0.0001980741 +
                               fVar7 * 0.0083330255 + fVar9 * fVar2 * -0.16666657 + fVar2) * dVar18)
  ;
  return;
}


// 0x00fec94 (0x2c bytes)
double MB_catmullRom
                 (double param_1,double param_2,double param_3,double param_4,double param_5)

{
  double dVar1;
  
  dVar1 = (double)(float)((double)(float)(param_4 - param_3) - (double)(float)(param_1 - param_2));
  return (double)(float)((double)(float)(param_5 * param_5) *
                         (double)(float)((double)(float)(param_1 - param_2) - dVar1) +
                        (double)(float)((double)(float)(param_3 - param_1) * param_5 +
                                       (double)(float)((double)(float)((double)(float)(param_5 *
                                                                                      param_5) *
                                                                      param_5) * dVar1 + param_2)));
}


// 0x00fecf0 (0xb4 bytes)
double MB_CosineInterpolate(double param_1,double param_2,double param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  
  dVar5 = param_1;
  if ((param_3 != 0.0) && (dVar5 = param_2, param_3 != 1.0)) {
    fVar1 = (float)(param_3 * 3.1415927410125732 + 1.570796251296997);
    fVar2 = 3.1415925 - fVar1;
    if (fVar1 - (3.1415925 - fVar1) < 0.0) {
      fVar2 = fVar1;
    }
    fVar3 = -3.1415925 - fVar1;
    if ((-3.1415925 - fVar1) - fVar2 < 0.0) {
      fVar3 = fVar2;
    }
    fVar1 = fVar3 * fVar3;
    fVar2 = fVar1 * fVar1 * fVar3;
    fVar4 = fVar1 * fVar2;
    dVar5 = (double)(float)((double)(float)(param_2 - param_1) *
                            (double)((1.0 - (fVar1 * fVar4 * 2.601887e-06 +
                                            fVar4 * -0.0001980741 +
                                            fVar2 * 0.0083330255 +
                                            fVar1 * fVar3 * -0.16666657 + fVar3)) * 0.5) + param_1);
  }
  return dVar5;
}


// 0x00fedd0 (0xd8 bytes)
void MB_lerpRotCosine(double param_1,undefined8 param_2,double param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  
  dVar5 = (double)FastDiffRots(param_2,param_1);
  fVar1 = (float)(param_3 * 3.1415927410125732 + 1.570796251296997);
  fVar2 = 3.1415925 - fVar1;
  if (fVar1 - (3.1415925 - fVar1) < 0.0) {
    fVar2 = fVar1;
  }
  fVar3 = -3.1415925 - fVar1;
  if ((-3.1415925 - fVar1) - fVar2 < 0.0) {
    fVar3 = fVar2;
  }
  fVar1 = fVar3 * fVar3;
  fVar2 = fVar1 * fVar1 * fVar3;
  fVar4 = fVar1 * fVar2;
  FastWrapRot
            ((float)param_1,
             (float)((double)((1.0 - (fVar1 * fVar4 * 2.601887e-06 +
                                     fVar4 * -0.0001980741 +
                                     fVar2 * 0.0083330255 + fVar1 * fVar3 * -0.16666657 + fVar3)) *
                             0.5) * dVar5));
  return;
}


// 0x00feed8 (0x12c bytes)
void MB_CosineInterpolateUnitVec
               (double param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  if (param_1 == 0.0) {
    *param_2 = *param_3;
    param_2[1] = param_3[1];
    param_2[2] = param_3[2];
    param_2[3] = param_3[3];
  }
  else if (param_1 == 1.0) {
    *param_2 = *param_4;
    param_2[1] = param_4[1];
    param_2[2] = param_4[2];
    param_2[3] = param_4[3];
  }
  else {
    fVar1 = (float)(param_1 * 3.1415927410125732 + 1.570796251296997);
    fVar2 = 3.1415925 - fVar1;
    if (fVar1 - (3.1415925 - fVar1) < 0.0) {
      fVar2 = fVar1;
    }
    fVar7 = -3.1415925 - fVar1;
    if ((-3.1415925 - fVar1) - fVar2 < 0.0) {
      fVar7 = fVar2;
    }
    fVar8 = fVar7 * fVar7;
    fVar9 = fVar8 * fVar8 * fVar7;
    fVar1 = *param_4;
    fVar2 = *param_3;
    fVar10 = fVar8 * fVar9;
    fVar3 = param_4[1];
    fVar4 = param_3[1];
    fVar5 = param_4[2];
    fVar6 = param_3[2];
    param_2[3] = param_3[3];
    fVar7 = (1.0 - (fVar8 * fVar10 * 2.601887e-06 +
                   fVar10 * -0.0001980741 +
                   fVar9 * 0.0083330255 + fVar8 * fVar7 * -0.16666657 + fVar7)) * 0.5;
    *param_2 = fVar7 * (fVar1 - fVar2) + fVar2;
    param_2[1] = fVar7 * (fVar3 - fVar4) + fVar4;
    param_2[2] = fVar7 * (fVar5 - fVar6) + fVar6;
  }
  return;
}


// 0x00ff030 (0x150 bytes)
void MB_CosineInterpolateAngVec
               (double param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  
  fVar1 = (float)(param_1 * 3.1415927410125732 + 1.570796251296997);
  fVar2 = 3.1415925 - fVar1;
  if (fVar1 - (3.1415925 - fVar1) < 0.0) {
    fVar2 = fVar1;
  }
  fVar3 = -3.1415925 - fVar1;
  if ((-3.1415925 - fVar1) - fVar2 < 0.0) {
    fVar3 = fVar2;
  }
  fVar1 = fVar3 * fVar3;
  fVar2 = fVar1 * fVar1 * fVar3;
  fVar4 = fVar1 * fVar2;
  dVar6 = (double)((1.0 - (fVar1 * fVar4 * 2.601887e-06 +
                          fVar4 * -0.0001980741 +
                          fVar2 * 0.0083330255 + fVar1 * fVar3 * -0.16666657 + fVar3)) * 0.5);
  dVar5 = (double)FastDiffRots((double)*param_4,(double)*param_3);
  dVar5 = (double)FastWrapRot(*param_3,(float)(dVar5 * dVar6));
  fVar1 = param_4[1];
  *param_2 = (float)dVar5;
  dVar5 = (double)FastDiffRots((double)fVar1,(double)param_3[1]);
  dVar5 = (double)FastWrapRot(param_3[1],(float)(dVar5 * dVar6));
  fVar1 = param_4[2];
  param_2[1] = (float)dVar5;
  dVar5 = (double)FastDiffRots((double)fVar1,(double)param_3[2]);
  dVar5 = (double)FastWrapRot(param_3[2],(float)(dVar5 * dVar6));
  param_2[2] = (float)dVar5;
  return;
}


// 0x00ff190 (0x148 bytes)
void MB_DeltAngSpeed
               (double param_1,undefined8 param_2,double param_3,double param_4,double param_5,
               undefined8 param_6,undefined8 param_7,float *param_8)

{
  float fVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar2 = (double)FastDiffRots(param_2,param_1);
  dVar4 = 1.0;
  dVar3 = (double)(float)(dVar2 * 6.36619758605957);
  if ((dVar3 <= 1.0) && (dVar4 = dVar3, dVar3 < -1.0)) {
    dVar4 = -1.0;
  }
  fVar1 = (float)((double)*param_8 +
                 (double)(float)(param_3 * dVar4 - (double)(float)(param_4 * (double)*param_8)));
  dVar4 = (double)fVar1;
  *param_8 = fVar1;
  if (param_5 != 0.0) {
    if (dVar4 <= param_5) {
      param_5 = -param_5;
      if (dVar4 < param_5) {
        *param_8 = (float)param_5;
        dVar4 = param_5;
      }
    }
    else {
      *param_8 = (float)param_5;
      dVar4 = param_5;
    }
  }
  dVar2 = ABS(dVar2);
  if (dVar4 <= dVar2) {
    dVar2 = -dVar2;
    if (dVar4 < dVar2) {
      *param_8 = (float)dVar2;
      dVar4 = dVar2;
    }
  }
  else {
    *param_8 = (float)dVar2;
    dVar4 = dVar2;
  }
  FastWrapRot((float)param_1,(float)dVar4);
  return;
}


// 0x00ff2e8 (0x148 bytes)
void OrganicDeltAngSpeed
               (undefined8 param_1,double param_2,double param_3,double param_4,int param_5,
               undefined8 param_6,float *param_7)

{
  float fVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar2 = (double)FastDiffRots(param_1,(double)*(float *)(param_5 + 0x48));
  dVar4 = 1.0;
  dVar3 = (double)(float)(dVar2 * 6.36619758605957);
  if ((dVar3 <= 1.0) && (dVar4 = dVar3, dVar3 < -1.0)) {
    dVar4 = -1.0;
  }
  fVar1 = (float)((double)*param_7 +
                 (double)(float)(param_2 * dVar4 - (double)(float)(param_3 * (double)*param_7)));
  dVar4 = (double)fVar1;
  *param_7 = fVar1;
  if (param_4 != 0.0) {
    if (dVar4 <= param_4) {
      param_4 = -param_4;
      if (dVar4 < param_4) {
        *param_7 = (float)param_4;
        dVar4 = param_4;
      }
    }
    else {
      *param_7 = (float)param_4;
      dVar4 = param_4;
    }
  }
  dVar2 = ABS(dVar2);
  if (dVar4 <= dVar2) {
    dVar2 = -dVar2;
    if (dVar4 < dVar2) {
      *param_7 = (float)dVar2;
      dVar4 = dVar2;
    }
  }
  else {
    *param_7 = (float)dVar2;
    dVar4 = dVar2;
  }
  dVar4 = (double)FastWrapRot(*(float *)(param_5 + 0x48),(float)dVar4);
  *(float *)(param_5 + 0x48) = (float)dVar4;
  return;
}


// 0x00ff438 (0x21c bytes)
// inlined: FastAtan2 @0xff518
void MB_FaceDeltAngSpeed
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4,int param_5,
               undefined8 param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  ulonglong *puVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  float *pfVar14;
  ulonglong in_LR;
  longlong lVar15;
  double dVar16;
  
  uVar8 = ZEXT48(&stack0x00000000);
  lVar9 = uVar8 - 0xa0;
  puVar5 = (ulonglong *)lVar9;
  *puVar5 = uVar8;
  puVar5[0x16] = in_LR;
  fVar2 = *(float *)(param_5 + 0x10) - *(float *)(param_4 + 0x10);
  fVar4 = *(float *)(param_5 + 0x14) - *(float *)(param_4 + 0x14);
  fVar1 = ABS(fVar2);
  fVar3 = ABS(fVar4);
  *(float *)(puVar5 + 0xe) = fVar2;
  *(float *)((int)puVar5 + 0x74) = fVar4;
  *(float *)(puVar5 + 0xf) = fVar1 - fVar3;
  dVar16 = 0.0;
  uVar12 = (ulonglong)(*(uint *)(puVar5 + 0xe) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar5 + 0xf) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar5 + 0x74) >> 0x1d) & 4;
  fVar2 = ABS(*(float *)(puVar5 + 0xe));
  if (*(float *)(puVar5 + 0xf) - 0.0 < 0.0) {
    fVar2 = fVar3;
  }
  fVar4 = *(float *)(&g_atanQuadrantTable + (int)(uVar12 << 2));
  fVar3 = ABS(*(float *)((int)puVar5 + 0x74));
  if (*(float *)(puVar5 + 0xf) - 0.0 < 0.0) {
    fVar3 = fVar1;
  }
  fVar1 = *(float *)(((uint)(uVar12 << 2) | 0x735900) + 4);
  if (0.0 < fVar2) {
    lVar13 = uVar8 - 0x90;
    lVar10 = uVar8 - 0x14;
    lVar11 = uVar8 - 0x24;
    lVar15 = 2;
    fVar2 = (fVar3 - fVar2) / (fVar3 + fVar2);
    fVar3 = fVar2 * fVar2;
    *(float *)(puVar5 + 0x11) = fVar2;
    *(float *)(puVar5 + 0x10) = fVar2;
    *(float *)((int)puVar5 + 0x84) = fVar2;
    *(float *)((int)puVar5 + 0x7c) = fVar2;
    fVar2 = fVar3 * fVar3;
    *(float *)(puVar5 + 0x10) = *(float *)(puVar5 + 0x10) * fVar3;
    *(float *)((int)puVar5 + 0x84) = *(float *)((int)puVar5 + 0x84) * fVar2;
    *(float *)(puVar5 + 0x11) = *(float *)(puVar5 + 0x11) * fVar2 * fVar3;
    do {
      *(float *)((int)lVar13 + 0x7c) = *(float *)((int)lVar13 + 0x6c) * fVar2 * fVar2;
      iVar6 = (int)lVar11;
      lVar11 = lVar11 + 8;
      lVar13 = lVar13 + 8;
      *(float *)((int)lVar10 + 4) = *(float *)(iVar6 + 4) * fVar2 * fVar2;
      lVar10 = lVar10 + 8;
      lVar15 = lVar15 + -1;
    } while (lVar15 != 0);
    lVar13 = uVar8 - 0x24;
    lVar15 = 4;
    pfVar14 = (float *)&DAT_007358e0;
    lVar10 = lVar13;
    lVar11 = lVar9;
    do {
      fVar2 = *pfVar14;
      fVar3 = pfVar14[1];
      pfVar14 = pfVar14 + 2;
      *(float *)((int)lVar11 + 0x7c) = *(float *)((int)lVar11 + 0x7c) * fVar2;
      lVar11 = lVar11 + 8;
      *(float *)((int)lVar10 + 4) = *(float *)((int)lVar10 + 4) * fVar3;
      lVar10 = lVar10 + 8;
      lVar15 = lVar15 + -1;
    } while (lVar15 != 0);
    lVar10 = 2;
    do {
      iVar6 = (int)lVar9;
      iVar7 = (int)lVar13;
      lVar9 = lVar9 + 0x10;
      lVar13 = lVar13 + 0x10;
      dVar16 = (double)((float)(dVar16 + (double)*(float *)(iVar6 + 0x7c)) + *(float *)(iVar7 + 4) +
                        *(float *)(iVar7 + 8) + *(float *)(iVar7 + 0xc));
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
    dVar16 = (double)((float)(dVar16 + 0.7853981852531433) * fVar4 + fVar1);
  }
  OrganicDeltAngSpeed(dVar16,param_1,param_2,param_3,param_4,param_4,param_6);
  return;
}


// 0x00ff654 (0x28 bytes)
double MB_Dist2D(MobyInstance *param_1,MobyInstance *param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (param_2->pos).y - (param_1->pos).y;
  fVar2 = (param_2->pos).x - (param_1->pos).x;
  return (double)SQRT(fVar2 * fVar2 + fVar1 * fVar1);
}


// 0x00ff67c (0x38 bytes)
double MB_DistBetweenMobys(MobyInstance *param_1,MobyInstance *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = (param_2->pos).y - (param_1->pos).y;
  fVar2 = (param_2->pos).x - (param_1->pos).x;
  fVar3 = (param_2->pos).z - (param_1->pos).z;
  return (double)SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
}


// 0x00ff6b8 (0xec bytes)
longlong CollLineValidate(void)

{
  longlong lVar1;
  undefined8 in_r6;
  int in_r7;
  GPiece<16> local_30;
  GPiece<24> local_20;
  
  lVar1 = CollLine(local_30,local_20,0x22,in_r6,0);
  lVar1 = lVar1 + ((longlong)g_CollOutput.poly >> 0x3f & -lVar1);
  if ((in_r7 != 0) && (g_CollOutput.pMoby != (MobyInstance *)0x0)) {
    lVar1 = 0;
  }
  return lVar1;
}


// 0x00ff7a8 (0xc0 bytes)
undefined8 MB_CheckLineOfSight(undefined4 param_1,MobyInstance *param_2)

{
  int iVar2;
  undefined8 uVar1;
  GPiece<16> local_30;
  GPiece<24> local_20;
  
  iVar2 = CollLine(local_30,local_20,0,param_1,0);
  if ((iVar2 == 0) || (g_CollOutput.pMoby == param_2)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


// 0x00ff878 (0x2f4 bytes)
// inlined: FastAtan2 @0xff9b4
undefined8 MB_IsSteepGround(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  ulonglong *puVar9;
  int iVar10;
  ulonglong uVar11;
  int iVar14;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  float *pfVar18;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar19;
  double dVar20;
  ulonglong in_f31;
  double dVar21;
  
  uVar11 = ZEXT48(&stack0x00000000);
  lVar13 = uVar11 - 0xf0;
  puVar9 = (ulonglong *)lVar13;
  *puVar9 = uVar11;
  puVar9[0x20] = in_LR;
  puVar9[0x1d] = in_f31;
  uVar1 = *param_2;
  *(undefined4 *)(puVar9 + 0xe) = uVar1;
  uVar2 = param_2[1];
  puVar9[0x1c] = unaff_r31;
  *(undefined4 *)((int)puVar9 + 0x74) = uVar2;
  uVar3 = param_2[3];
  fVar4 = (float)param_2[2];
  *(undefined4 *)((int)puVar9 + 0x7c) = uVar3;
  dVar21 = 1.0;
  *(undefined4 *)(puVar9 + 0x10) = uVar1;
  *(undefined4 *)((int)puVar9 + 0x84) = uVar2;
  *(undefined4 *)((int)puVar9 + 0x8c) = uVar3;
  *(float *)(puVar9 + 0xf) = fVar4 + 1.0;
  *(float *)(puVar9 + 0x11) = fVar4 - 1.0;
  iVar14 = CollLine(uVar11 - 0x80,uVar11 - 0x70,2,param_1,0);
  fVar4 = g_CollOutput.normal.z;
  if (iVar14 != 0) {
    fVar5 = ABS(g_CollOutput.normal.z);
    fVar7 = SQRT(g_CollOutput.normal.x * g_CollOutput.normal.x +
                 g_CollOutput.normal.y * g_CollOutput.normal.y);
    fVar6 = ABS(fVar7);
    *(float *)(puVar9 + 0x16) = fVar7;
    *(float *)((int)puVar9 + 0xb4) = fVar5 - fVar6;
    fVar7 = 0.0;
    uVar12 = (ulonglong)((uint)fVar4 >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar9 + 0xb4) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar9 + 0x16) >> 0x1d) & 4;
    fVar4 = fVar5;
    if (*(float *)((int)puVar9 + 0xb4) - 0.0 < 0.0) {
      fVar4 = fVar6;
    }
    fVar6 = ABS(*(float *)(puVar9 + 0x16));
    if (*(float *)((int)puVar9 + 0xb4) - 0.0 < 0.0) {
      fVar6 = fVar5;
    }
    fVar8 = *(float *)(&g_atanQuadrantTable + (int)(uVar12 << 2));
    fVar5 = *(float *)(((uint)(uVar12 << 2) | 0x735900) + 4);
    if (0.0 < fVar4) {
      lVar17 = uVar11 - 0xe0;
      lVar16 = uVar11 - 0x38;
      lVar15 = uVar11 - 0x28;
      lVar19 = 2;
      fVar4 = (fVar6 - fVar4) / (fVar6 + fVar4);
      fVar6 = fVar4 * fVar4;
      *(float *)((int)puVar9 + 0xc4) = fVar4;
      *(float *)((int)puVar9 + 0xbc) = fVar4;
      *(float *)(puVar9 + 0x18) = fVar4;
      *(float *)(puVar9 + 0x17) = fVar4;
      fVar4 = fVar6 * fVar6;
      *(float *)((int)puVar9 + 0xbc) = *(float *)((int)puVar9 + 0xbc) * fVar6;
      *(float *)(puVar9 + 0x18) = *(float *)(puVar9 + 0x18) * fVar4;
      *(float *)((int)puVar9 + 0xc4) = *(float *)((int)puVar9 + 0xc4) * fVar4 * fVar6;
      do {
        *(float *)((int)lVar17 + 0xb8) = *(float *)((int)lVar17 + 0xa8) * fVar4 * fVar4;
        iVar14 = (int)lVar16;
        lVar17 = lVar17 + 8;
        lVar16 = lVar16 + 8;
        *(float *)((int)lVar15 + 4) = *(float *)(iVar14 + 4) * fVar4 * fVar4;
        lVar15 = lVar15 + 8;
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
      lVar17 = uVar11 - 0x38;
      pfVar18 = (float *)&DAT_007358e0;
      lVar19 = 4;
      lVar15 = lVar17;
      lVar16 = lVar13;
      do {
        fVar4 = *pfVar18;
        fVar6 = pfVar18[1];
        pfVar18 = pfVar18 + 2;
        *(float *)((int)lVar16 + 0xb8) = *(float *)((int)lVar16 + 0xb8) * fVar4;
        lVar16 = lVar16 + 8;
        *(float *)((int)lVar15 + 4) = *(float *)((int)lVar15 + 4) * fVar6;
        lVar15 = lVar15 + 8;
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
      lVar15 = 2;
      do {
        iVar14 = (int)lVar13;
        lVar13 = lVar13 + 0x10;
        iVar10 = (int)lVar17;
        lVar17 = lVar17 + 0x10;
        fVar7 = fVar7 + *(float *)(iVar14 + 0xb8) + *(float *)(iVar10 + 4) + *(float *)(iVar10 + 8)
                + *(float *)(iVar10 + 0xc);
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
      fVar7 = (fVar7 + 0.7853982) * fVar8 + fVar5;
    }
    fVar4 = g_CollOutput.ip.z;
    if (fVar7 < 0.5) {
      fVar7 = *(float *)(param_1 + 0x18);
      dVar20 = (double)g_CollOutput.ip.z;
      uVar1 = *(undefined4 *)(param_1 + 0x14);
      *(undefined4 *)(puVar9 + 0x12) = *(undefined4 *)(param_1 + 0x10);
      uVar2 = *(undefined4 *)(param_1 + 0x1c);
      *(undefined4 *)((int)puVar9 + 0x94) = uVar1;
      *(undefined4 *)((int)puVar9 + 0x9c) = uVar2;
      fVar5 = g_CollOutput.ip.y;
      *(float *)(puVar9 + 0x14) = g_CollOutput.ip.x;
      *(float *)((int)puVar9 + 0xa4) = fVar5;
      fVar5 = g_CollOutput.ip.w;
      *(float *)(puVar9 + 0x15) = fVar4;
      *(float *)(puVar9 + 0x13) = (float)((double)fVar7 + dVar21);
      *(float *)((int)puVar9 + 0xac) = fVar5;
      *(float *)(puVar9 + 0x15) = (float)(dVar20 + dVar21);
      iVar14 = CollLine(uVar11 - 0x60,uVar11 - 0x50,0,param_1,0);
      if (iVar14 == 0) {
        return 1;
      }
    }
  }
  return 0;
}


// 0x00ffb70 (0xa0 bytes)
double GetGroundZ(undefined8 param_1,ulonglong param_2)

{
  float fVar1;
  int iVar2;
  GPiece<16> local_30;
  GPiece<24> local_20;
  
  iVar2 = CollLine(local_20,local_30,param_2 | 2,0,0);
  fVar1 = 0.0;
  if (iVar2 != 0) {
    fVar1 = g_CollOutput.ip.z;
  }
  return (double)fVar1;
}


// 0x00ffc18 (0xa0 bytes)
double GetGroundZNoWater(void)

{
  float fVar1;
  int iVar2;
  GPiece<16> local_30;
  GPiece<24> local_20;
  
  iVar2 = CollLine(local_20,local_30,0x22,0,0);
  fVar1 = 0.0;
  if (iVar2 != 0) {
    fVar1 = g_CollOutput.ip.z;
  }
  return (double)fVar1;
}


// 0x00ffcd0 (0x8c8 bytes)
// inlined: FastAtan2 @0x10000c, FastRSqrt @0x10011c, FastAtan2 @0x100300
int CollMovingSphere
              (double param_1,double param_2,double param_3,double param_4,undefined8 param_5,
              float *param_6,float *param_7)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  ulonglong *puVar6;
  int iVar7;
  ulonglong uVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  float *pfVar13;
  longlong lVar12;
  ulonglong uVar14;
  longlong lVar15;
  uint in_r10;
  ulonglong unaff_r22;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  int iVar16;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  ulonglong in_f23;
  ulonglong in_f24;
  double dVar25;
  ulonglong in_f25;
  double dVar26;
  ulonglong in_f26;
  double dVar27;
  double dVar28;
  ulonglong in_f27;
  double dVar29;
  ulonglong in_f28;
  ulonglong in_f29;
  ulonglong in_f30;
  ulonglong in_f31;
  
  uVar8 = ZEXT48(&stack0x00000000);
  lVar1 = uVar8 - 0x1d0;
  puVar6 = (ulonglong *)lVar1;
  *puVar6 = uVar8;
  puVar6[0x3c] = in_LR;
  puVar6[0x31] = in_f23;
  puVar6[0x32] = in_f24;
  puVar6[0x33] = in_f25;
  puVar6[0x34] = in_f26;
  puVar6[0x35] = in_f27;
  puVar6[0x36] = in_f28;
  puVar6[0x37] = in_f29;
  puVar6[0x38] = in_f30;
  puVar6[0x39] = in_f31;
  puVar6[0x2e] = unaff_r29;
  puVar6[0x29] = unaff_r24;
  puVar6[0x2d] = unaff_r28;
  fVar2 = param_7[2];
  fVar3 = *param_7;
  puVar6[0x2a] = unaff_r25;
  fVar4 = param_7[1];
  puVar6[0x30] = unaff_r31;
  fVar5 = param_7[3];
  *(float *)(puVar6 + 0x18) = fVar3;
  *(float *)((int)puVar6 + 0xc4) = fVar4;
  puVar6[0x2f] = unaff_r30;
  *(float *)((int)puVar6 + 0xcc) = fVar5;
  *(float *)(puVar6 + 0x1a) = fVar3;
  *(undefined4 *)(puVar6 + 0x19) = 0x3c23d70a;
  *(float *)((int)puVar6 + 0xd4) = fVar4;
  puVar6[0x28] = unaff_r23;
  *(float *)((int)puVar6 + 0xdc) = fVar5;
  puVar6[0x27] = unaff_r22;
  puVar6[0x2c] = unaff_r27;
  iVar16 = 1;
  param_7[2] = (float)((double)fVar2 + param_1);
  dVar25 = 0.5;
  puVar6[0x2b] = unaff_r26;
  *(float *)(puVar6 + 0x1b) = (float)((double)fVar2 + param_1) + 0.5;
  iVar9 = CollLine(uVar8 - 0x100,uVar8 - 0x110,0x22,0,0);
  dVar18 = 0.0;
  dVar29 = (double)*param_7;
  dVar27 = (double)param_7[1];
  dVar19 = dVar18;
  if (iVar9 != 0) {
    dVar19 = (double)g_CollOutput.ip.z;
  }
  dVar21 = (double)(float)((double)param_7[2] - param_1);
  param_7[2] = (float)((double)param_7[2] - param_1);
  dVar22 = (double)param_6[2];
  if ((param_3 < ABS((double)(float)(dVar19 - dVar22))) &&
     ((((in_r10 & 1) == 0 && (dVar19 < dVar22)) || (dVar22 < dVar19)))) {
    dVar29 = (double)*param_6;
    iVar16 = 0;
    *param_7 = *param_6;
    dVar27 = (double)param_6[1];
    param_7[1] = param_6[1];
    dVar21 = (double)param_6[2];
    param_7[2] = param_6[2];
    param_7[3] = param_6[3];
    dVar22 = (double)param_6[2];
  }
  fVar2 = param_6[1];
  dVar20 = (double)fVar2;
  dVar26 = (double)(float)(dVar21 - dVar22);
  dVar21 = (double)*param_6;
  dVar28 = (double)(float)(dVar27 - dVar20);
  dVar29 = (double)(float)(dVar29 - dVar21);
  *(float *)(puVar6 + 0xe) = *param_6;
  fVar3 = param_6[3];
  *(float *)((int)puVar6 + 0x74) = fVar2;
  *(float *)((int)puVar6 + 0x7c) = fVar3;
  *(float *)((int)puVar6 + 0x8c) = fVar3;
  *(float *)(puVar6 + 0xf) = (float)(dVar22 + param_1);
  fVar2 = SQRT((float)(dVar26 * dVar26 +
                      (double)(float)(dVar29 * dVar29 + (double)(float)(dVar28 * dVar28))));
  dVar27 = (double)((float)(param_2 * 1.2000000476837158) / fVar2);
  dVar19 = dVar18;
  if (0.0 - fVar2 < 0.0) {
    dVar19 = (double)(float)(dVar27 * dVar26);
  }
  dVar23 = dVar18;
  if (0.0 - fVar2 < 0.0) {
    dVar23 = (double)(float)(dVar27 * dVar28);
  }
  dVar24 = dVar18;
  if (0.0 - fVar2 < 0.0) {
    dVar24 = (double)(float)(dVar27 * dVar29);
  }
  if (fVar2 - 0.0 < 0.0) {
    dVar19 = (double)(float)(dVar27 * dVar26);
  }
  if (fVar2 - 0.0 < 0.0) {
    dVar23 = (double)(float)(dVar27 * dVar28);
  }
  if (fVar2 - 0.0 < 0.0) {
    dVar24 = (double)(float)(dVar27 * dVar29);
  }
  *(float *)(puVar6 + 0x11) = (float)((double)(float)(dVar22 + param_1) + dVar19);
  *(float *)((int)puVar6 + 0x84) = (float)(dVar20 + dVar23);
  *(float *)(puVar6 + 0x10) = (float)(dVar21 + dVar24);
  if (((iVar16 != 0) &&
      (iVar9 = CollLine(uVar8 - 0x160,uVar8 - 0x150,
                                  (ZERO_MASK((in_r10 & 2)) & 0xfffffffffffffffeU) +
                                  2 | 0x24,param_5,0), fVar2 = g_CollOutput.normal.z, iVar9 != 0)) &&
     (0 < g_CollOutput.poly)) {
    dVar23 = (double)g_CollOutput.normal.y;
    dVar20 = (double)g_CollOutput.normal.x;
    dVar22 = ABS((double)g_CollOutput.normal.z);
    dVar27 = (double)(float)(dVar20 * dVar20 + (double)(float)(dVar23 * dVar23));
    dVar21 = (double)(float)SQRT(dVar27);
    dVar24 = ABS(dVar21);
    *(float *)((int)puVar6 + 0xec) = (float)SQRT(dVar27);
    *(float *)(puVar6 + 0x1e) = (float)(dVar22 - dVar24);
    uVar14 = (ulonglong)((uint)fVar2 >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar6 + 0x1e) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar6 + 0xec) >> 0x1d) & 4;
    dVar19 = dVar22;
    if ((double)*(float *)(puVar6 + 0x1e) - dVar18 < 0.0) {
      dVar19 = dVar24;
    }
    dVar24 = ABS((double)*(float *)((int)puVar6 + 0xec));
    if ((double)*(float *)(puVar6 + 0x1e) - dVar18 < 0.0) {
      dVar24 = dVar22;
    }
    fVar3 = *(float *)(&g_atanQuadrantTable + (int)(uVar14 << 2));
    fVar2 = *(float *)(((uint)(uVar14 << 2) | 0x735900) + 4);
    dVar22 = dVar18;
    if (dVar18 < dVar19) {
      lVar11 = uVar8 - 0x1c0;
      lVar15 = uVar8 - 0xac;
      lVar12 = uVar8 - 0xbc;
      lVar17 = 2;
      fVar4 = (float)(dVar24 - dVar19) / (float)(dVar24 + dVar19);
      fVar5 = fVar4 * fVar4;
      *(float *)((int)puVar6 + 0x114) = fVar4;
      *(float *)(puVar6 + 0x23) = fVar4;
      *(float *)((int)puVar6 + 0x11c) = fVar4;
      *(float *)(puVar6 + 0x24) = fVar4;
      fVar4 = fVar5 * fVar5;
      *(float *)(puVar6 + 0x23) = *(float *)(puVar6 + 0x23) * fVar5;
      *(float *)((int)puVar6 + 0x11c) = *(float *)((int)puVar6 + 0x11c) * fVar4;
      *(float *)(puVar6 + 0x24) = *(float *)(puVar6 + 0x24) * fVar4 * fVar5;
      do {
        *(float *)((int)lVar11 + 0x114) = *(float *)((int)lVar11 + 0x104) * fVar4 * fVar4;
        iVar9 = (int)lVar12;
        lVar12 = lVar12 + 8;
        lVar11 = lVar11 + 8;
        *(float *)((int)lVar15 + 4) = *(float *)(iVar9 + 4) * fVar4 * fVar4;
        lVar15 = lVar15 + 8;
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
      lVar17 = 4;
      lVar15 = uVar8 - 0xbc;
      pfVar13 = (float *)&DAT_007358e0;
      lVar11 = lVar1;
      lVar12 = lVar15;
      do {
        fVar4 = *pfVar13;
        fVar5 = pfVar13[1];
        pfVar13 = pfVar13 + 2;
        *(float *)((int)lVar11 + 0x114) = *(float *)((int)lVar11 + 0x114) * fVar4;
        lVar11 = lVar11 + 8;
        *(float *)((int)lVar12 + 4) = *(float *)((int)lVar12 + 4) * fVar5;
        lVar12 = lVar12 + 8;
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
      lVar12 = 2;
      lVar11 = lVar1;
      dVar19 = dVar18;
      do {
        iVar9 = (int)lVar11;
        iVar10 = (int)lVar15;
        lVar11 = lVar11 + 0x10;
        lVar15 = lVar15 + 0x10;
        dVar19 = (double)((float)(dVar19 + (double)*(float *)(iVar9 + 0x114)) +
                          *(float *)(iVar10 + 4) + *(float *)(iVar10 + 8) + *(float *)(iVar10 + 0xc)
                         );
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
      dVar22 = (double)((float)(dVar19 + 0.7853981852531433) * fVar3 + fVar2);
    }
    if (param_4 <= dVar22) {
      dVar19 = 1.0;
      if (dVar21 != dVar18) {
        dVar19 = 1.0 / SQRT(dVar27);
        dVar19 = (double)(float)(-(double)(float)((double)(float)(dVar27 * dVar19) * dVar19 - 1.0) *
                                 (double)(float)(dVar25 * dVar19) + dVar19);
        dVar19 = (double)(float)(-(double)(float)((double)(float)(dVar27 * dVar19) * dVar19 - 1.0) *
                                 (double)(float)(dVar25 * dVar19) + dVar19);
        dVar19 = (double)(float)(-(double)(float)((double)(float)(dVar27 * dVar19) * dVar19 - 1.0) *
                                 (double)(float)(dVar25 * dVar19) + dVar19);
      }
      g_CollOutput.normal.x = (float)(dVar20 * dVar19);
      g_CollOutput.normal.y = (float)(dVar23 * dVar19);
      g_CollOutput.normal.z = (float)(dVar18 * dVar19);
      dVar19 = -(double)(float)(dVar28 * (double)g_CollOutput.normal.y -
                               -(double)(float)(dVar29 * (double)g_CollOutput.normal.x));
      if (dVar18 < dVar19) {
        g_CollOutput.normal.x = (float)((double)g_CollOutput.normal.x * dVar19);
        g_CollOutput.normal.y = (float)((double)g_CollOutput.normal.y * dVar19);
        iVar16 = 0;
        g_CollOutput.normal.z = (float)((double)g_CollOutput.normal.z * dVar19);
        dVar29 = (double)(float)(dVar29 + (double)g_CollOutput.normal.x);
        dVar28 = (double)(float)(dVar28 + (double)g_CollOutput.normal.y);
        dVar26 = (double)(float)(dVar26 + (double)g_CollOutput.normal.z);
      }
    }
    fVar2 = *param_6;
    fVar3 = param_6[1];
    fVar4 = param_6[2];
    param_7[3] = param_6[3];
    *param_7 = (float)((double)fVar2 + dVar29);
    param_7[1] = (float)((double)fVar3 + dVar28);
    param_7[2] = (float)((double)fVar4 + dVar26);
  }
  if ((in_r10 & 2) == 0) {
    iVar9 = 0;
    do {
      dVar19 = (double)(float)(param_2 + param_1);
      *(float *)(puVar6 + 0x12) = *param_7;
      *(float *)((int)puVar6 + 0x94) = param_7[1];
      fVar2 = param_7[2];
      *(float *)((int)puVar6 + 0x9c) = param_7[3];
      *(float *)(puVar6 + 0x13) = (float)(dVar19 + (double)fVar2);
      iVar10 = CollSphere(param_2,uVar8 - 0x140);
      if (iVar10 == 0) break;
      fVar3 = g_CollOutput.ip.z - param_7[2];
      fVar2 = SQRT((*param_7 - g_CollOutput.ip.x) * (*param_7 - g_CollOutput.ip.x) +
                   (param_7[1] - g_CollOutput.ip.y) * (param_7[1] - g_CollOutput.ip.y));
      *(float *)((int)puVar6 + 0xe4) = fVar3;
      dVar21 = ABS((double)fVar3);
      dVar29 = ABS((double)fVar2);
      *(float *)(puVar6 + 0x1c) = fVar2;
      *(float *)(puVar6 + 0x1d) = (float)(dVar29 - dVar21);
      uVar14 = (ulonglong)(*(uint *)(puVar6 + 0x1c) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar6 + 0x1d) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar6 + 0xe4) >> 0x1d) & 4;
      dVar27 = ABS((double)*(float *)(puVar6 + 0x1c));
      if ((double)*(float *)(puVar6 + 0x1d) - dVar18 < 0.0) {
        dVar27 = dVar21;
      }
      fVar2 = *(float *)(&g_atanQuadrantTable + (int)(uVar14 << 2));
      dVar21 = ABS((double)*(float *)((int)puVar6 + 0xe4));
      if ((double)*(float *)(puVar6 + 0x1d) - dVar18 < 0.0) {
        dVar21 = dVar29;
      }
      fVar3 = *(float *)(((uint)(uVar14 << 2) | 0x735900) + 4);
      dVar29 = dVar18;
      if (dVar18 < dVar27) {
        lVar11 = uVar8 - 0x1c0;
        lVar12 = uVar8 - 0xdc;
        lVar15 = uVar8 - 0xcc;
        lVar17 = 2;
        fVar4 = (float)(dVar21 - dVar27) / (float)(dVar21 + dVar27);
        fVar5 = fVar4 * fVar4;
        *(float *)((int)puVar6 + 0xf4) = fVar4;
        *(float *)(puVar6 + 0x1f) = fVar4;
        *(float *)((int)puVar6 + 0xfc) = fVar4;
        *(float *)(puVar6 + 0x20) = fVar4;
        fVar4 = fVar5 * fVar5;
        *(float *)(puVar6 + 0x1f) = *(float *)(puVar6 + 0x1f) * fVar5;
        *(float *)((int)puVar6 + 0xfc) = *(float *)((int)puVar6 + 0xfc) * fVar4;
        *(float *)(puVar6 + 0x20) = *(float *)(puVar6 + 0x20) * fVar4 * fVar5;
        do {
          *(float *)((int)lVar11 + 0xf4) = *(float *)((int)lVar11 + 0xe4) * fVar4 * fVar4;
          iVar10 = (int)lVar12;
          lVar11 = lVar11 + 8;
          lVar12 = lVar12 + 8;
          *(float *)((int)lVar15 + 4) = *(float *)(iVar10 + 4) * fVar4 * fVar4;
          lVar15 = lVar15 + 8;
          lVar17 = lVar17 + -1;
        } while (lVar17 != 0);
        lVar17 = 4;
        lVar15 = uVar8 - 0xdc;
        pfVar13 = (float *)&DAT_007358e0;
        lVar11 = lVar1;
        lVar12 = lVar15;
        do {
          fVar4 = *pfVar13;
          fVar5 = pfVar13[1];
          pfVar13 = pfVar13 + 2;
          *(float *)((int)lVar11 + 0xf4) = *(float *)((int)lVar11 + 0xf4) * fVar4;
          lVar11 = lVar11 + 8;
          *(float *)((int)lVar12 + 4) = *(float *)((int)lVar12 + 4) * fVar5;
          lVar12 = lVar12 + 8;
          lVar17 = lVar17 + -1;
        } while (lVar17 != 0);
        lVar12 = 2;
        lVar11 = lVar1;
        dVar27 = dVar18;
        do {
          iVar10 = (int)lVar11;
          lVar11 = lVar11 + 0x10;
          iVar7 = (int)lVar15;
          lVar15 = lVar15 + 0x10;
          dVar27 = (double)((float)(dVar27 + (double)*(float *)(iVar10 + 0xf4)) +
                            *(float *)(iVar7 + 4) + *(float *)(iVar7 + 8) + *(float *)(iVar7 + 0xc))
          ;
          lVar12 = lVar12 + -1;
        } while (lVar12 != 0);
        dVar29 = (double)((float)(dVar27 + 0.7853981852531433) * fVar2 + fVar3);
      }
      if ((g_CollOutput.pMoby != (MobyInstance *)0x0) || (param_4 < dVar29)) {
        iVar16 = 0;
        *param_7 = g_CollOutput.push.x;
        param_7[1] = g_CollOutput.push.y;
        dVar27 = (double)g_CollOutput.push.z;
        param_7[2] = g_CollOutput.push.z;
        param_7[3] = g_CollOutput.push.w;
        param_7[2] = (float)(dVar27 - dVar19);
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < 6);
  }
  fVar2 = param_7[2];
  fVar3 = *param_7;
  *(float *)(puVar6 + 0x14) = fVar3;
  fVar4 = param_7[1];
  *(float *)((int)puVar6 + 0xa4) = fVar4;
  fVar5 = param_7[3];
  *(undefined4 *)(puVar6 + 0x15) = 0x3c23d70a;
  *(float *)((int)puVar6 + 0xac) = fVar5;
  param_7[2] = (float)((double)fVar2 + param_1);
  *(float *)(puVar6 + 0x16) = fVar3;
  *(float *)((int)puVar6 + 0xb4) = fVar4;
  *(float *)((int)puVar6 + 0xbc) = fVar5;
  *(float *)(puVar6 + 0x17) = (float)((double)(float)((double)fVar2 + param_1) + dVar25);
  iVar9 = CollLine(uVar8 - 0x120,uVar8 - 0x130,0x22,0,0);
  fVar2 = *param_7;
  if (iVar9 != 0) {
    dVar18 = (double)g_CollOutput.ip.z;
  }
  param_7[2] = (float)((double)param_7[2] - param_1);
  dVar19 = (double)param_6[2];
  if ((param_3 < ABS((double)(float)(dVar18 - dVar19))) &&
     ((((in_r10 & 1) == 0 && (dVar18 < dVar19)) || (dVar19 < dVar18)))) {
    fVar2 = *param_6;
    iVar16 = 0;
    *param_7 = fVar2;
    param_7[1] = param_6[1];
    param_7[2] = param_6[2];
    param_7[3] = param_6[3];
  }
  fVar3 = param_7[1];
  *param_6 = fVar2;
  param_6[1] = fVar3;
  return iVar16;
}


// 0x01005a8 (0x368 bytes)
// inlined: FastAtan2 @0x100750
undefined4
MB_PushOutOfWalls
          (double param_1,undefined8 param_2,MobyInstance *param_3,CollOutput *param_4,
          undefined8 param_5,undefined8 param_6,uint param_7)

{
  longlong lVar1;
  void *pvVar2;
  float fVar3;
  f32 fVar4;
  f32 fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  ulonglong *puVar10;
  float fVar11;
  int iVar12;
  ulonglong uVar13;
  int iVar15;
  ulonglong uVar14;
  CollOutput *pCVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  float *pfVar20;
  ulonglong unaff_r27;
  undefined4 uVar21;
  ulonglong unaff_r28;
  int iVar22;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar23;
  double dVar24;
  ulonglong in_f27;
  double dVar25;
  ulonglong in_f28;
  double dVar26;
  ulonglong in_f29;
  double dVar27;
  ulonglong in_f30;
  ulonglong in_f31;
  
  uVar13 = ZEXT48(&stack0x00000000);
  lVar1 = uVar13 - 0x100;
  puVar10 = (ulonglong *)lVar1;
  *puVar10 = uVar13;
  puVar10[0x22] = in_LR;
  puVar10[0x1b] = in_f27;
  puVar10[0x1c] = in_f28;
  puVar10[0x1d] = in_f29;
  puVar10[0x1e] = in_f30;
  puVar10[0x1f] = in_f31;
  dVar25 = (double)(param_3->pos).x;
  pvVar2 = param_4->grid;
  dVar26 = (double)(param_3->pos).y;
  dVar27 = (double)(param_3->pos).z;
  puVar10[0x18] = unaff_r29;
  puVar10[0x16] = unaff_r27;
  uVar21 = 0;
  (param_3->pos).x = (float)(dVar25 + (double)(float)pvVar2);
  puVar10[0x17] = unaff_r28;
  fVar3 = (float)param_4->padding[0];
  puVar10[0x19] = unaff_r30;
  iVar22 = 0;
  puVar10[0x1a] = unaff_r31;
  (param_3->pos).y = (float)(dVar26 + (double)fVar3);
  (param_3->pos).z = (float)(dVar27 + (double)(float)param_4->padding[1]);
  pCVar16 = param_4;
  do {
    fVar3 = (param_3->pos).z;
    fVar4 = (param_3->pos).y;
    *(f32 *)(puVar10 + 0xe) = (param_3->pos).x;
    fVar5 = (param_3->pos).w;
    *(f32 *)((int)puVar10 + 0x74) = fVar4;
    *(f32 *)((int)puVar10 + 0x7c) = fVar5;
    *(float *)(puVar10 + 0xf) = (float)((double)fVar3 + param_1);
    iVar15 = CollSphere
                       (param_2,uVar13 - 0x90,pCVar16,
                        (ZERO_MASK((param_7 & 0x10)) & 0xffffffffffffffe0U) + 0x20
                        | 4,param_3);
    fVar3 = g_CollOutput.normal.z;
    if (iVar15 == 0) break;
    pCVar16 = &g_CollOutput;
    fVar8 = ABS(g_CollOutput.normal.z);
    fVar6 = SQRT(g_CollOutput.normal.x * g_CollOutput.normal.x +
                 g_CollOutput.normal.y * g_CollOutput.normal.y);
    fVar7 = ABS(fVar6);
    *(float *)(puVar10 + 0x10) = fVar6;
    *(float *)((int)puVar10 + 0x84) = fVar8 - fVar7;
    fVar6 = 0.0;
    uVar14 = (ulonglong)((uint)fVar3 >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar10 + 0x84) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar10 + 0x10) >> 0x1d) & 4;
    fVar3 = fVar8;
    if (*(float *)((int)puVar10 + 0x84) - 0.0 < 0.0) {
      fVar3 = fVar7;
    }
    fVar9 = *(float *)(&g_atanQuadrantTable + (int)(uVar14 << 2));
    fVar7 = *(float *)(((uint)(uVar14 << 2) | 0x735900) + 4);
    fVar11 = ABS(*(float *)(puVar10 + 0x10));
    if (*(float *)((int)puVar10 + 0x84) - 0.0 < 0.0) {
      fVar11 = fVar8;
    }
    if (0.0 < fVar3) {
      lVar19 = uVar13 - 0xf0;
      lVar17 = uVar13 - 0x68;
      lVar18 = uVar13 - 0x78;
      lVar23 = 2;
      fVar3 = (fVar11 - fVar3) / (fVar11 + fVar3);
      fVar8 = fVar3 * fVar3;
      *(float *)((int)puVar10 + 0x94) = fVar3;
      *(float *)((int)puVar10 + 0x8c) = fVar3;
      *(float *)(puVar10 + 0x12) = fVar3;
      *(float *)(puVar10 + 0x11) = fVar3;
      fVar3 = fVar8 * fVar8;
      *(float *)((int)puVar10 + 0x8c) = *(float *)((int)puVar10 + 0x8c) * fVar8;
      *(float *)(puVar10 + 0x12) = *(float *)(puVar10 + 0x12) * fVar3;
      *(float *)((int)puVar10 + 0x94) = *(float *)((int)puVar10 + 0x94) * fVar3 * fVar8;
      do {
        *(float *)((int)lVar19 + 0x88) = *(float *)((int)lVar19 + 0x78) * fVar3 * fVar3;
        iVar15 = (int)lVar18;
        lVar18 = lVar18 + 8;
        lVar19 = lVar19 + 8;
        *(float *)((int)lVar17 + 4) = *(float *)(iVar15 + 4) * fVar3 * fVar3;
        lVar17 = lVar17 + 8;
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
      lVar19 = uVar13 - 0x78;
      lVar23 = 4;
      pfVar20 = (float *)&DAT_007358e0;
      lVar17 = lVar19;
      lVar18 = lVar1;
      do {
        fVar3 = *pfVar20;
        fVar8 = pfVar20[1];
        pfVar20 = pfVar20 + 2;
        *(float *)((int)lVar18 + 0x88) = *(float *)((int)lVar18 + 0x88) * fVar3;
        lVar18 = lVar18 + 8;
        *(float *)((int)lVar17 + 4) = *(float *)((int)lVar17 + 4) * fVar8;
        lVar17 = lVar17 + 8;
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
      lVar18 = 2;
      lVar17 = lVar1;
      do {
        iVar15 = (int)lVar17;
        iVar12 = (int)lVar19;
        lVar17 = lVar17 + 0x10;
        lVar19 = lVar19 + 0x10;
        fVar6 = fVar6 + *(float *)(iVar15 + 0x88) + *(float *)(iVar12 + 4) + *(float *)(iVar12 + 8)
                + *(float *)(iVar12 + 0xc);
        lVar18 = lVar18 + -1;
      } while (lVar18 != 0);
      fVar6 = (fVar6 + 0.7853982) * fVar9 + fVar7;
    }
    if (0.5235988 < fVar6) {
      (param_3->pos).x = g_CollOutput.push.x;
      uVar21 = 1;
      (param_3->pos).y = g_CollOutput.push.y;
      dVar24 = (double)g_CollOutput.push.z;
      (param_3->pos).w = g_CollOutput.push.w;
      (param_3->pos).z = (float)(dVar24 - param_1);
    }
    iVar22 = iVar22 + 1;
  } while (iVar22 < 6);
  param_4->grid = (void *)(float)((double)(param_3->pos).x - dVar25);
  param_4->padding[0] = (int)(float)((double)(param_3->pos).y - dVar26);
  param_4->padding[1] = (int)(float)((double)(param_3->pos).z - dVar27);
  param_4->padding[2] = (int)(param_3->pos).w;
  return uVar21;
}


// 0x0100918 (0x84 bytes)
void MB_PushMobyOutOfWalls
               (undefined8 param_1,MobyInstance *param_2,undefined4 param_3,undefined8 param_4,
               undefined8 param_5,undefined4 param_6)

{
  undefined8 uVar1;
  double dVar2;
  
  uVar1 = 0x100000;
  dVar2 = (double)FastIntToDouble(param_5);
  MB_PushOutOfWalls(param_1,(double)(float)(dVar2 * 0.0009765625),param_2,param_3,uVar1,param_5,
                    param_6);
  return;
}


// 0x01009b0 (0x544 bytes)
// inlined: FastAtan2 @0x100d30
ulonglong MB_MoveAndCollide
                    (double param_1,double param_2,double param_3,int param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  ulonglong *puVar10;
  float fVar11;
  ulonglong uVar12;
  int iVar16;
  int iVar17;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar18;
  float *pfVar19;
  longlong lVar20;
  uint in_r8;
  ulonglong unaff_r25;
  ulonglong uVar21;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong uVar22;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  ulonglong in_f23;
  double dVar28;
  ulonglong in_f24;
  double dVar29;
  ulonglong in_f25;
  double dVar30;
  ulonglong in_f26;
  ulonglong in_f27;
  ulonglong in_f28;
  double dVar31;
  double dVar32;
  ulonglong in_f29;
  ulonglong in_f30;
  ulonglong in_f31;
  
  uVar12 = ZEXT48(&stack0x00000000);
  lVar15 = uVar12 - 0x170;
  puVar10 = (ulonglong *)lVar15;
  *puVar10 = uVar12;
  puVar10[0x30] = in_LR;
  puVar10[0x25] = in_f23;
  puVar10[0x26] = in_f24;
  puVar10[0x27] = in_f25;
  puVar10[0x28] = in_f26;
  puVar10[0x29] = in_f27;
  puVar10[0x2a] = in_f28;
  puVar10[0x2b] = in_f29;
  puVar10[0x2c] = in_f30;
  puVar10[0x2d] = in_f31;
  fVar1 = *(float *)(param_4 + 0x10);
  dVar30 = (double)fVar1;
  fVar2 = *param_5;
  fVar3 = *(float *)(param_4 + 0x14);
  dVar29 = (double)fVar3;
  dVar24 = (double)(float)(dVar30 + (double)fVar2);
  dVar28 = (double)*(float *)(param_4 + 0x18);
  puVar10[0x1e] = unaff_r25;
  *(float *)(param_4 + 0x10) = (float)(dVar30 + (double)fVar2);
  fVar2 = param_5[1];
  dVar25 = (double)(float)(dVar29 + (double)fVar2);
  puVar10[0x22] = unaff_r29;
  uVar22 = 0;
  puVar10[0x21] = unaff_r28;
  iVar17 = 0;
  puVar10[0x24] = unaff_r31;
  puVar10[0x23] = unaff_r30;
  uVar21 = (ZERO_MASK((in_r8 & 0x10)) & 0xffffffffffffffe0U) + 0x20;
  *(float *)(param_4 + 0x14) = (float)(dVar29 + (double)fVar2);
  dVar26 = (double)(float)(dVar28 + (double)param_5[2]);
  *(float *)(param_4 + 0x18) = (float)(dVar28 + (double)param_5[2]);
  fVar2 = param_5[1];
  fVar4 = *param_5;
  fVar5 = param_5[2];
  fVar6 = *(float *)(param_4 + 0x1c);
  dVar31 = (double)SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar2 * fVar2);
  puVar10[0x20] = unaff_r27;
  puVar10[0x1f] = unaff_r26;
  if (param_2 < dVar31) {
    *(float *)(puVar10 + 0xe) = fVar1;
    *(float *)((int)puVar10 + 0x74) = fVar3;
    *(float *)((int)puVar10 + 0x7c) = fVar6;
    *(float *)(puVar10 + 0xf) = (float)(dVar28 + param_1);
    dVar27 = 0.0;
    if (dVar31 == 0.0) {
      fVar3 = param_5[3];
      dVar31 = dVar27;
      dVar32 = dVar27;
    }
    else {
      fVar1 = (float)(param_2 / dVar31);
      dVar32 = (double)(fVar4 * fVar1);
      fVar3 = param_5[3];
      dVar31 = (double)(fVar2 * fVar1);
      dVar27 = (double)(fVar5 * fVar1);
    }
    *(float *)((int)puVar10 + 0x8c) = fVar3;
    *(float *)(puVar10 + 0x10) = (float)(dVar32 + dVar24);
    *(float *)((int)puVar10 + 0x84) = (float)(dVar31 + dVar25);
    *(float *)(puVar10 + 0x11) = (float)((double)(float)(dVar27 + dVar26) + param_1);
    iVar16 = CollLine(uVar12 - 0x100,uVar12 - 0xf0,uVar21,param_4,0);
    dVar24 = (double)*(float *)(param_4 + 0x10);
    dVar25 = (double)*(float *)(param_4 + 0x14);
    dVar26 = (double)*(float *)(param_4 + 0x18);
    fVar6 = *(float *)(param_4 + 0x1c);
    if (iVar16 != 0) {
      uVar22 = 1;
      dVar24 = (double)(float)((double)g_CollOutput.ip.x - dVar32);
      *(float *)(param_4 + 0x10) = (float)((double)g_CollOutput.ip.x - dVar32);
      dVar25 = (double)(float)((double)g_CollOutput.ip.y - dVar31);
      *(float *)(param_4 + 0x14) = (float)((double)g_CollOutput.ip.y - dVar31);
      fVar6 = g_CollOutput.ip.w;
      dVar26 = (double)g_CollOutput.ip.z;
      *(float *)(param_4 + 0x1c) = g_CollOutput.ip.w;
      fVar1 = (float)((double)(float)(dVar26 - dVar27) - param_1);
      dVar26 = (double)fVar1;
      *(float *)(param_4 + 0x18) = fVar1;
    }
  }
  do {
    *(float *)(puVar10 + 0x12) = (float)dVar24;
    *(float *)((int)puVar10 + 0x94) = (float)dVar25;
    *(float *)((int)puVar10 + 0x9c) = fVar6;
    *(float *)(puVar10 + 0x13) = (float)(dVar26 + param_1);
    iVar16 = CollSphere(param_2,uVar12 - 0xe0);
    if (iVar16 == 0) break;
    dVar24 = (double)g_CollOutput.push.x;
    iVar17 = iVar17 + 1;
    uVar22 = 1;
    *(float *)(param_4 + 0x10) = g_CollOutput.push.x;
    dVar25 = (double)g_CollOutput.push.y;
    *(float *)(param_4 + 0x14) = g_CollOutput.push.y;
    fVar6 = g_CollOutput.push.w;
    dVar31 = (double)g_CollOutput.push.z;
    dVar26 = (double)(float)(dVar31 - param_1);
    *(float *)(param_4 + 0x1c) = g_CollOutput.push.w;
    *(float *)(param_4 + 0x18) = (float)(dVar31 - param_1);
  } while (iVar17 < 6);
  fVar1 = *(float *)(param_4 + 0x18);
  uVar7 = *(undefined4 *)(param_4 + 0x10);
  uVar8 = *(undefined4 *)(param_4 + 0x14);
  dVar25 = (double)(float)((double)fVar1 - param_3);
  *(undefined4 *)(puVar10 + 0x14) = uVar7;
  uVar9 = *(undefined4 *)(param_4 + 0x1c);
  *(undefined4 *)((int)puVar10 + 0xa4) = uVar8;
  *(undefined4 *)((int)puVar10 + 0xac) = uVar9;
  *(undefined4 *)(puVar10 + 0x16) = uVar7;
  *(undefined4 *)((int)puVar10 + 0xb4) = uVar8;
  *(undefined4 *)((int)puVar10 + 0xbc) = uVar9;
  *(float *)(puVar10 + 0x15) = (float)((double)fVar1 + param_1);
  *(float *)(puVar10 + 0x17) = (float)(dVar25 - 0.05000000074505806);
  iVar17 = CollLine(uVar12 - 0xd0,uVar12 - 0xc0,uVar21 | 2,param_4,0);
  fVar2 = g_CollOutput.normal.z;
  fVar1 = *(float *)(param_4 + 0x18);
  dVar24 = (double)g_CollOutput.ip.z;
  uVar21 = uVar22;
  if ((iVar17 != 0) && (0 < g_CollOutput.poly)) {
    uVar21 = uVar22 | 2;
    fVar4 = ABS(g_CollOutput.normal.z);
    fVar3 = SQRT(g_CollOutput.normal.x * g_CollOutput.normal.x +
                 g_CollOutput.normal.y * g_CollOutput.normal.y);
    fVar5 = ABS(fVar3);
    *(float *)(puVar10 + 0x18) = fVar3;
    *(float *)((int)puVar10 + 0xc4) = fVar4 - fVar5;
    fVar3 = 0.0;
    uVar13 = (ulonglong)((uint)fVar2 >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar10 + 0xc4) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar10 + 0x18) >> 0x1d) & 4;
    fVar2 = fVar4;
    if (*(float *)((int)puVar10 + 0xc4) - 0.0 < 0.0) {
      fVar2 = fVar5;
    }
    fVar6 = *(float *)(&g_atanQuadrantTable + (int)(uVar13 << 2));
    fVar5 = *(float *)(((uint)(uVar13 << 2) | 0x735900) + 4);
    fVar11 = ABS(*(float *)(puVar10 + 0x18));
    if (*(float *)((int)puVar10 + 0xc4) - 0.0 < 0.0) {
      fVar11 = fVar4;
    }
    if (0.0 < fVar2) {
      lVar14 = uVar12 - 0x160;
      lVar20 = uVar12 - 0x98;
      lVar18 = uVar12 - 0xa8;
      lVar23 = 2;
      fVar2 = (fVar11 - fVar2) / (fVar11 + fVar2);
      fVar4 = fVar2 * fVar2;
      *(float *)((int)puVar10 + 0xd4) = fVar2;
      *(float *)((int)puVar10 + 0xcc) = fVar2;
      *(float *)(puVar10 + 0x1a) = fVar2;
      *(float *)(puVar10 + 0x19) = fVar2;
      fVar2 = fVar4 * fVar4;
      *(float *)((int)puVar10 + 0xcc) = *(float *)((int)puVar10 + 0xcc) * fVar4;
      *(float *)(puVar10 + 0x1a) = *(float *)(puVar10 + 0x1a) * fVar2;
      *(float *)((int)puVar10 + 0xd4) = *(float *)((int)puVar10 + 0xd4) * fVar2 * fVar4;
      do {
        *(float *)((int)lVar14 + 200) = *(float *)((int)lVar14 + 0xb8) * fVar2 * fVar2;
        iVar17 = (int)lVar18;
        lVar18 = lVar18 + 8;
        lVar14 = lVar14 + 8;
        *(float *)((int)lVar20 + 4) = *(float *)(iVar17 + 4) * fVar2 * fVar2;
        lVar20 = lVar20 + 8;
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
      lVar23 = 4;
      lVar20 = uVar12 - 0xa8;
      pfVar19 = (float *)&DAT_007358e0;
      lVar14 = lVar15;
      lVar18 = lVar20;
      do {
        fVar2 = *pfVar19;
        fVar4 = pfVar19[1];
        pfVar19 = pfVar19 + 2;
        *(float *)((int)lVar14 + 200) = *(float *)((int)lVar14 + 200) * fVar2;
        lVar14 = lVar14 + 8;
        *(float *)((int)lVar18 + 4) = *(float *)((int)lVar18 + 4) * fVar4;
        lVar18 = lVar18 + 8;
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
      lVar14 = 2;
      do {
        iVar17 = (int)lVar15;
        lVar15 = lVar15 + 0x10;
        iVar16 = (int)lVar20;
        lVar20 = lVar20 + 0x10;
        fVar3 = fVar3 + *(float *)(iVar17 + 200) + *(float *)(iVar16 + 4) + *(float *)(iVar16 + 8) +
                *(float *)(iVar16 + 0xc);
        lVar14 = lVar14 + -1;
      } while (lVar14 != 0);
      fVar3 = (fVar3 + 0.7853982) * fVar6 + fVar5;
    }
    if (0.5 < fVar3) {
      uVar21 = uVar22 | 6;
    }
    if (dVar25 < dVar24) {
      *(float *)(param_4 + 0x18) = (float)(dVar24 - dVar25) * 0.3 + fVar1;
    }
  }
  *param_5 = (float)((double)*(float *)(param_4 + 0x10) - dVar30);
  param_5[1] = (float)((double)*(float *)(param_4 + 0x14) - dVar29);
  param_5[2] = (float)((double)*(float *)(param_4 + 0x18) - dVar28);
  param_5[3] = *(float *)(param_4 + 0x1c);
  return uVar21;
}


// 0x0100ef8 (0x94 bytes)
void MB_MoveAndCollide2
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6)

{
  double dVar1;
  
  dVar1 = (double)FastIntToDouble(param_6);
  MB_MoveAndCollide(param_1,(double)(float)(dVar1 * 0.0009765625),param_2,param_3,param_4);
  return;
}


// 0x0100f8c (0x64 bytes)
/* [p2_mobyutil] fills 12-float param block with defaults (1.0,0.5,0.5,..,0.3,2.7,1.57,0.1) */

void MB_InitDefaultParams(float *param_1)

{
  *param_1 = 8.96831e-43;
  param_1[1] = 1.0;
  param_1[2] = 0.5;
  param_1[3] = 0.5;
  param_1[5] = 0.0;
  param_1[4] = 0.0;
  param_1[6] = 0.0;
  param_1[8] = 0.3;
  param_1[9] = 2.7;
  param_1[7] = 0.3;
  param_1[10] = 1.57;
  param_1[0xb] = 0.1;
  return;
}


// 0x0100ff0 (0x1c bytes)
void ____Unused_MB_SetPosWAndClass(double param_1,double param_2,MobyInstance *param_3)

{
  (param_3->pos).y = 0.0;
  (param_3->pos).x = 0.0;
  (param_3->pos).z = 0.0;
  (param_3->pos).w = (float)param_1;
  param_3->pClass = (MobyClass *)(float)param_2;
  return;
}


// 0x0101058 (0xb2c bytes)
// inlined: FastAtan2 @0x101488, FastAtan2 @0x101768, FastRSqrt @0x101930
ulonglong MB_UpdateNavMove
                    (double param_1,MobyInstance *param_2,MobyInstance *param_3,float *param_4,
                    float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  MobyClass *pMVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  f32 fVar14;
  f32 fVar15;
  f32 fVar16;
  float fVar17;
  uint uVar18;
  ulonglong *puVar19;
  int iVar20;
  float fVar21;
  float fVar22;
  ulonglong uVar23;
  int iVar24;
  uint uVar25;
  longlong lVar26;
  longlong lVar27;
  float *pfVar29;
  longlong lVar28;
  ulonglong uVar30;
  longlong lVar31;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong uVar32;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  ulonglong in_f19;
  ulonglong in_f20;
  ulonglong in_f21;
  double dVar39;
  ulonglong in_f22;
  double dVar40;
  ulonglong in_f23;
  double dVar41;
  ulonglong in_f24;
  double dVar42;
  ulonglong in_f25;
  double dVar43;
  ulonglong in_f26;
  double dVar44;
  ulonglong in_f27;
  double dVar45;
  ulonglong in_f28;
  ulonglong in_f29;
  double dVar46;
  ulonglong in_f30;
  double dVar47;
  ulonglong in_f31;
  double dVar48;
  
  uVar23 = ZEXT48(&stack0x00000000);
  lVar27 = uVar23 - 0x1e0;
  puVar19 = (ulonglong *)lVar27;
  *puVar19 = uVar23;
  puVar19[0x3e] = in_LR;
  puVar19[0x2f] = in_f19;
  puVar19[0x30] = in_f20;
  puVar19[0x31] = in_f21;
  puVar19[0x32] = in_f22;
  puVar19[0x33] = in_f23;
  puVar19[0x34] = in_f24;
  puVar19[0x35] = in_f25;
  puVar19[0x36] = in_f26;
  puVar19[0x37] = in_f27;
  puVar19[0x38] = in_f28;
  puVar19[0x39] = in_f29;
  puVar19[0x3a] = in_f30;
  puVar19[0x3b] = in_f31;
  fVar1 = param_4[1];
  dVar43 = (double)(param_2->pos).y;
  fVar2 = *param_4;
  dVar44 = (double)(param_2->pos).x;
  puVar19[0x2b] = unaff_r28;
  puVar19[0x2e] = unaff_r31;
  uVar32 = 0;
  puVar19[0x2d] = unaff_r30;
  puVar19[0x2c] = unaff_r29;
  fVar3 = (param_3->pos).x;
  dVar34 = (double)(float)((double)(param_3->pos).w * param_1);
  dVar42 = (double)(param_2->pos).z;
  *(float *)((int)puVar19 + 0x7c) = param_4[3];
  fVar4 = (param_2->pos).w;
  dVar47 = (double)fVar4;
  dVar48 = (double)SQRT((float)((double)fVar2 - dVar44) * (float)((double)fVar2 - dVar44) +
                        (float)((double)fVar1 - dVar43) * (float)((double)fVar1 - dVar43));
  pMVar5 = param_3->pClass;
  fVar2 = *(float *)&param_3->state;
  fVar6 = (param_3->pos).z;
  fVar7 = *(float *)&param_3->updateDistance;
  fVar8 = (param_3->bSphere).z;
  fVar9 = (param_3->bSphere).rad;
  puVar19[0x2a] = unaff_r27;
  fVar1 = (float)((double)(float)pMVar5 * param_1);
  uVar18 = param_3->color;
  dVar41 = (double)(float)(dVar48 * dVar34);
  if (dVar34 - (double)(float)(dVar48 * dVar34) < 0.0) {
    dVar41 = dVar34;
  }
  fVar3 = (float)((double)fVar3 + dVar41);
  (param_3->pos).x = fVar3;
  puVar19[0x29] = unaff_r26;
  puVar19[0x28] = unaff_r25;
  puVar19[0x27] = unaff_r24;
  if (dVar48 < (double)(fVar3 * 10.0)) {
    fVar3 = -(fVar2 * fVar3 - fVar3);
    (param_3->pos).x = fVar3;
  }
  if (fVar3 <= fVar1) {
    fVar1 = -fVar1;
    if (fVar3 < fVar1) {
      (param_3->pos).x = fVar1;
      fVar3 = fVar1;
    }
  }
  else {
    (param_3->pos).x = fVar1;
    fVar3 = fVar1;
  }
  if ((uVar18 & 4) == 0) {
    fVar1 = (param_2->rotation).z;
    fVar2 = fVar1 + 1.5707963;
    fVar17 = 3.1415925 - fVar1;
    if (fVar1 - (3.1415925 - fVar1) < 0.0) {
      fVar17 = fVar1;
    }
    fVar11 = 3.1415925 - fVar2;
    if (fVar2 - (3.1415925 - fVar2) < 0.0) {
      fVar11 = fVar2;
    }
    fVar12 = -3.1415925 - fVar1;
    if ((-3.1415925 - fVar1) - fVar17 < 0.0) {
      fVar12 = fVar17;
    }
    fVar1 = -3.1415925 - fVar2;
    if ((-3.1415925 - fVar2) - fVar11 < 0.0) {
      fVar1 = fVar11;
    }
    fVar2 = fVar1 * fVar1;
    fVar17 = fVar2 * fVar1;
    fVar11 = fVar2 * fVar17;
  }
  else {
    fVar1 = (param_3->rotation).w;
    fVar2 = fVar1 + 1.5707963;
    fVar17 = 3.1415925 - fVar1;
    if (fVar1 - (3.1415925 - fVar1) < 0.0) {
      fVar17 = fVar1;
    }
    fVar11 = 3.1415925 - fVar2;
    if (fVar2 - (3.1415925 - fVar2) < 0.0) {
      fVar11 = fVar2;
    }
    fVar12 = -3.1415925 - fVar1;
    if ((-3.1415925 - fVar1) - fVar17 < 0.0) {
      fVar12 = fVar17;
    }
    fVar1 = -3.1415925 - fVar2;
    if ((-3.1415925 - fVar2) - fVar11 < 0.0) {
      fVar1 = fVar11;
    }
    fVar2 = fVar1 * fVar1;
    fVar17 = fVar2 * fVar1;
    fVar11 = fVar2 * fVar17;
  }
  fVar13 = fVar12 * fVar12;
  fVar21 = fVar13 * fVar13 * fVar12;
  fVar22 = fVar13 * fVar21;
  fVar1 = (fVar2 * fVar2 * fVar11 * 2.601887e-06 +
          fVar2 * fVar11 * -0.0001980741 + fVar11 * 0.0083330255 + fVar17 * -0.16666657 + fVar1) *
          fVar3;
  *(float *)(puVar19 + 0xe) = fVar1;
  fVar3 = (fVar13 * fVar22 * 2.601887e-06 +
          fVar22 * -0.0001980741 + fVar21 * 0.0083330255 + fVar13 * fVar12 * -0.16666657 + fVar12) *
          fVar3;
  *(float *)((int)puVar19 + 0x74) = fVar3;
  if ((uVar18 & 1) == 0) {
    *(float *)(puVar19 + 0xf) = fVar6;
    (param_3->pos).z = -(DAT_0071f418 * 9.0 - fVar6);
  }
  else {
    *(undefined4 *)(puVar19 + 0xf) = 0;
  }
  fVar6 = (float)(dVar42 - (double)fVar7);
  fVar1 = (float)(dVar44 + (double)fVar1);
  fVar2 = (float)(dVar43 + (double)fVar3);
  *(float *)((int)puVar19 + 0xcc) = fVar4;
  *(float *)((int)puVar19 + 0xdc) = fVar4;
  dVar34 = (double)(float)(dVar42 + 0.03999999910593033);
  fVar9 = fVar6 - fVar9;
  *(float *)(puVar19 + 0x18) = fVar1;
  *(float *)(puVar19 + 0x1a) = fVar1;
  *(float *)((int)puVar19 + 0xc4) = fVar2;
  *(float *)((int)puVar19 + 0xd4) = fVar2;
  *(float *)(puVar19 + 0x19) = fVar6 + fVar8;
  *(float *)(puVar19 + 0x1b) = fVar9;
  dVar41 = 0.0;
  if (fVar9 < 0.0) {
    *(undefined4 *)(puVar19 + 0x1b) = 0;
  }
  iVar24 = CollLine(uVar23 - 0x120,uVar23 - 0x110,0x22,param_2,0);
  fVar17 = g_CollOutput.normal.z;
  uVar10 = *(undefined4 *)((int)puVar19 + 0x7c);
  dVar46 = (double)*(float *)&param_3->updateDistance;
  dVar39 = (double)g_CollOutput.ip.z;
  fVar1 = (param_2->pos).x;
  fVar2 = (param_2->pos).y;
  uVar25 = param_3->color;
  fVar3 = (param_3->bSphere).z;
  fVar4 = (param_3->bSphere).rad;
  fVar6 = *(float *)(puVar19 + 0xe);
  fVar7 = *(float *)((int)puVar19 + 0x74);
  fVar8 = *(float *)(puVar19 + 0xf);
  fVar9 = (param_2->pos).z;
  if ((((uVar18 & 0x20) == 0) || (g_CollOutput.pMoby == (MobyInstance *)0x0)) &&
     (iVar24 + (g_CollOutput.poly >> 0x1f & -iVar24) != 0)) {
    dVar37 = ABS((double)g_CollOutput.normal.z);
    fVar11 = SQRT(g_CollOutput.normal.x * g_CollOutput.normal.x +
                  g_CollOutput.normal.y * g_CollOutput.normal.y);
    dVar38 = ABS((double)fVar11);
    *(float *)(puVar19 + 0x1d) = fVar11;
    *(float *)((int)puVar19 + 0xec) = (float)(dVar37 - dVar38);
    dVar45 = 0.7853981852531433;
    uVar30 = (ulonglong)((uint)fVar17 >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar19 + 0xec) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar19 + 0x1d) >> 0x1d) & 4;
    fVar17 = *(float *)(&g_atanQuadrantTable + (int)(uVar30 << 2));
    dVar40 = dVar37;
    if ((double)*(float *)((int)puVar19 + 0xec) - dVar41 < 0.0) {
      dVar40 = dVar38;
    }
    dVar38 = ABS((double)*(float *)(puVar19 + 0x1d));
    if ((double)*(float *)((int)puVar19 + 0xec) - dVar41 < 0.0) {
      dVar38 = dVar37;
    }
    fVar11 = *(float *)(((uint)(uVar30 << 2) | 0x735900) + 4);
    dVar37 = dVar41;
    if (dVar41 < dVar40) {
      lVar26 = uVar23 - 0x1d0;
      lVar28 = uVar23 - 0xd0;
      lVar31 = uVar23 - 0xc0;
      lVar33 = 2;
      fVar12 = (float)(dVar38 - dVar40) / (float)(dVar38 + dVar40);
      fVar13 = fVar12 * fVar12;
      *(float *)((int)puVar19 + 0x11c) = fVar12;
      *(float *)((int)puVar19 + 0x114) = fVar12;
      *(float *)(puVar19 + 0x23) = fVar12;
      *(float *)(puVar19 + 0x22) = fVar12;
      fVar12 = fVar13 * fVar13;
      *(float *)((int)puVar19 + 0x114) = *(float *)((int)puVar19 + 0x114) * fVar13;
      *(float *)(puVar19 + 0x23) = *(float *)(puVar19 + 0x23) * fVar12;
      *(float *)((int)puVar19 + 0x11c) = *(float *)((int)puVar19 + 0x11c) * fVar12 * fVar13;
      do {
        *(float *)((int)lVar26 + 0x110) = *(float *)((int)lVar26 + 0x100) * fVar12 * fVar12;
        iVar24 = (int)lVar28;
        lVar26 = lVar26 + 8;
        lVar28 = lVar28 + 8;
        *(float *)((int)lVar31 + 4) = *(float *)(iVar24 + 4) * fVar12 * fVar12;
        lVar31 = lVar31 + 8;
        lVar33 = lVar33 + -1;
      } while (lVar33 != 0);
      lVar33 = 4;
      lVar31 = uVar23 - 0xd0;
      pfVar29 = (float *)&DAT_007358e0;
      lVar26 = lVar27;
      lVar28 = lVar31;
      do {
        fVar12 = *pfVar29;
        fVar13 = pfVar29[1];
        pfVar29 = pfVar29 + 2;
        *(float *)((int)lVar26 + 0x110) = *(float *)((int)lVar26 + 0x110) * fVar12;
        lVar26 = lVar26 + 8;
        *(float *)((int)lVar28 + 4) = *(float *)((int)lVar28 + 4) * fVar13;
        lVar28 = lVar28 + 8;
        lVar33 = lVar33 + -1;
      } while (lVar33 != 0);
      lVar28 = 2;
      lVar26 = lVar27;
      dVar40 = dVar41;
      do {
        iVar24 = (int)lVar26;
        lVar26 = lVar26 + 0x10;
        iVar20 = (int)lVar31;
        lVar31 = lVar31 + 0x10;
        dVar40 = (double)((float)(dVar40 + (double)*(float *)(iVar24 + 0x110)) +
                          *(float *)(iVar20 + 4) + *(float *)(iVar20 + 8) + *(float *)(iVar20 + 0xc)
                         );
        lVar28 = lVar28 + -1;
      } while (lVar28 != 0);
      dVar37 = (double)((float)(dVar40 + 0.7853981852531433) * fVar17 + fVar11);
    }
    dVar40 = 0.5;
    if ((0.5 < dVar37) && (fVar17 = fVar6 * fVar6 + fVar7 * fVar7, 0.1 < SQRT(fVar17))) {
      fVar9 = (float)((double)fVar9 - dVar46);
      dVar36 = (double)SQRT(fVar8 * fVar8 + fVar17);
      *(undefined4 *)((int)puVar19 + 0xac) = uVar10;
      *(undefined4 *)((int)puVar19 + 0xbc) = uVar10;
      uVar18 = uVar25 & 0x20;
      fVar4 = fVar9 - fVar4;
      *(float *)(puVar19 + 0x15) = fVar9 + fVar3;
      *(float *)(puVar19 + 0x17) = fVar4;
      dVar38 = (double)(fVar7 * (float)(0.5699999928474426 / dVar36));
      dVar37 = (double)(fVar6 * (float)(0.5699999928474426 / dVar36));
      dVar46 = dVar41;
      if (dVar41 - dVar36 < 0.0) {
        dVar46 = dVar38;
      }
      dVar35 = dVar41;
      if (dVar41 - dVar36 < 0.0) {
        dVar35 = dVar37;
      }
      if (dVar36 - dVar41 < 0.0) {
        dVar46 = dVar38;
      }
      if (dVar36 - dVar41 < 0.0) {
        dVar35 = dVar37;
      }
      fVar2 = (float)(dVar46 + (double)fVar2);
      fVar1 = (float)(dVar35 + (double)fVar1);
      *(float *)((int)puVar19 + 0xa4) = fVar2;
      *(float *)(puVar19 + 0x14) = fVar1;
      *(float *)(puVar19 + 0x16) = fVar1;
      *(float *)((int)puVar19 + 0xb4) = fVar2;
      if ((double)fVar4 < dVar41) {
        *(undefined4 *)(puVar19 + 0x17) = 0;
      }
      iVar24 = CollLine(uVar23 - 0x140,uVar23 - 0x130,0x22,param_2,0);
      fVar1 = g_CollOutput.normal.z;
      dVar37 = (double)g_CollOutput.ip.z;
      uVar25 = param_3->color;
      dVar46 = (double)*(float *)&param_3->updateDistance;
      fVar6 = *(float *)(puVar19 + 0xe);
      fVar7 = *(float *)((int)puVar19 + 0x74);
      if (((uVar18 == 0) || (g_CollOutput.pMoby == (MobyInstance *)0x0)) &&
         (iVar24 + (g_CollOutput.poly >> 0x1f & -iVar24) != 0)) {
        dVar36 = ABS((double)g_CollOutput.normal.z);
        fVar2 = SQRT(g_CollOutput.normal.x * g_CollOutput.normal.x +
                     g_CollOutput.normal.y * g_CollOutput.normal.y);
        dVar35 = ABS((double)fVar2);
        *(float *)(puVar19 + 0x1c) = fVar2;
        *(float *)((int)puVar19 + 0xe4) = (float)(dVar36 - dVar35);
        uVar30 = (ulonglong)((uint)fVar1 >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)((int)puVar19 + 0xe4) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)(puVar19 + 0x1c) >> 0x1d) & 4;
        dVar38 = dVar36;
        if ((double)*(float *)((int)puVar19 + 0xe4) - dVar41 < 0.0) {
          dVar38 = dVar35;
        }
        fVar1 = *(float *)(&g_atanQuadrantTable + (int)(uVar30 << 2));
        dVar35 = ABS((double)*(float *)(puVar19 + 0x1c));
        if ((double)*(float *)((int)puVar19 + 0xe4) - dVar41 < 0.0) {
          dVar35 = dVar36;
        }
        fVar2 = *(float *)(((uint)(uVar30 << 2) | 0x735900) + 4);
        dVar36 = dVar41;
        if (dVar41 < dVar38) {
          lVar26 = uVar23 - 0x1d0;
          lVar28 = uVar23 - 0xf0;
          lVar31 = uVar23 - 0xe0;
          lVar33 = 2;
          fVar3 = (float)(dVar35 - dVar38) / (float)(dVar35 + dVar38);
          fVar4 = fVar3 * fVar3;
          *(float *)((int)puVar19 + 0xfc) = fVar3;
          *(float *)((int)puVar19 + 0xf4) = fVar3;
          *(float *)(puVar19 + 0x1f) = fVar3;
          *(float *)(puVar19 + 0x1e) = fVar3;
          fVar3 = fVar4 * fVar4;
          *(float *)((int)puVar19 + 0xf4) = *(float *)((int)puVar19 + 0xf4) * fVar4;
          *(float *)(puVar19 + 0x1f) = *(float *)(puVar19 + 0x1f) * fVar3;
          *(float *)((int)puVar19 + 0xfc) = *(float *)((int)puVar19 + 0xfc) * fVar3 * fVar4;
          do {
            *(float *)((int)lVar26 + 0xf0) = *(float *)((int)lVar26 + 0xe0) * fVar3 * fVar3;
            iVar24 = (int)lVar28;
            lVar26 = lVar26 + 8;
            lVar28 = lVar28 + 8;
            *(float *)((int)lVar31 + 4) = *(float *)(iVar24 + 4) * fVar3 * fVar3;
            lVar31 = lVar31 + 8;
            lVar33 = lVar33 + -1;
          } while (lVar33 != 0);
          lVar33 = 4;
          lVar31 = uVar23 - 0xf0;
          pfVar29 = (float *)&DAT_007358e0;
          lVar26 = lVar27;
          lVar28 = lVar31;
          do {
            fVar3 = *pfVar29;
            fVar4 = pfVar29[1];
            pfVar29 = pfVar29 + 2;
            *(float *)((int)lVar26 + 0xf0) = *(float *)((int)lVar26 + 0xf0) * fVar3;
            lVar26 = lVar26 + 8;
            *(float *)((int)lVar28 + 4) = *(float *)((int)lVar28 + 4) * fVar4;
            lVar28 = lVar28 + 8;
            lVar33 = lVar33 + -1;
          } while (lVar33 != 0);
          lVar26 = 2;
          dVar38 = dVar41;
          do {
            iVar24 = (int)lVar27;
            lVar27 = lVar27 + 0x10;
            iVar20 = (int)lVar31;
            lVar31 = lVar31 + 0x10;
            dVar38 = (double)((float)(dVar38 + (double)*(float *)(iVar24 + 0xf0)) +
                              *(float *)(iVar20 + 4) + *(float *)(iVar20 + 8) +
                             *(float *)(iVar20 + 0xc));
            lVar26 = lVar26 + -1;
          } while (lVar26 != 0);
          dVar36 = (double)((float)(dVar38 + dVar45) * fVar1 + fVar2);
        }
        if (dVar40 <= dVar36) {
          if ((((uVar25 & 8) == 0) || (dVar34 <= dVar37)) || (dVar34 <= dVar39)) {
            uVar32 = 0x22;
          }
          else {
            uVar32 = 8;
          }
        }
      }
      else if (((uVar25 & 8) == 0) || (dVar34 <= dVar39)) {
        uVar32 = 0x22;
      }
      else {
        uVar32 = 8;
      }
    }
  }
  else {
    uVar32 = (ZERO_MASK((uVar25 & 8)) & 0x1aU) + 8;
  }
  if ((uVar32 & 2) == 0) {
    dVar40 = 0.5;
    fVar1 = fVar6 * fVar6 + fVar7 * fVar7;
    dVar39 = (double)(param_3->bSphere).y;
    fVar2 = 1.0 / SQRT(fVar1);
    dVar45 = (double)SQRT(fVar1);
    fVar2 = -(fVar1 * fVar2 * fVar2 - 1.0) * fVar2 * 0.5 + fVar2;
    fVar2 = -(fVar1 * fVar2 * fVar2 - 1.0) * fVar2 * 0.5 + fVar2;
    fVar2 = -(fVar1 * fVar2 * fVar2 - 1.0) * fVar2 * 0.5 + fVar2;
    dVar38 = (double)(fVar6 * fVar2);
    dVar37 = (double)(fVar7 * fVar2);
    dVar34 = (double)FastIntToDouble((param_3->bSphere).x);
    uVar30 = MB_MoveAndCollide(dVar39,(double)(float)(dVar34 * 0.0009765625),dVar46,param_2,
                               uVar23 - 0x170);
    dVar34 = (double)*(float *)(puVar19 + 0xe);
    dVar39 = (double)*(float *)((int)puVar19 + 0x74);
    fVar14 = (param_2->pos).x;
    fVar15 = (param_2->pos).y;
    fVar16 = (param_2->pos).w;
    fVar1 = (param_2->pos).z;
    if ((uVar30 & 2) != 0) {
      (param_3->pos).z = DAT_0071f408 * -0.01;
    }
    if ((uVar30 & 1) != 0) {
      uVar30 = uVar32 | 1;
      if ((float)(dVar34 * dVar38 + (double)(float)(dVar39 * dVar37)) <
          (float)(dVar45 * 0.20000000298023224)) {
        uVar30 = uVar32 | 3;
      }
      *(f32 *)(puVar19 + 0x10) = fVar14;
      *(f32 *)((int)puVar19 + 0x84) = fVar15;
      *(f32 *)((int)puVar19 + 0x8c) = fVar16;
      *(undefined4 *)(puVar19 + 0x11) = 0x3c23d70a;
      *(f32 *)(puVar19 + 0x12) = fVar14;
      *(f32 *)((int)puVar19 + 0x94) = fVar15;
      *(f32 *)((int)puVar19 + 0x9c) = fVar16;
      *(float *)(puVar19 + 0x13) = (float)((double)fVar1 + dVar40);
      iVar24 = CollLine(uVar23 - 0x150,uVar23 - 0x160,2,0,0);
      dVar34 = (double)*(float *)(puVar19 + 0xe);
      dVar39 = (double)*(float *)((int)puVar19 + 0x74);
      if (iVar24 != 0) {
        dVar41 = (double)g_CollOutput.ip.z;
      }
      if ((float)(dVar42 - dVar41) <= (param_3->bSphere).z) {
        uVar32 = uVar30;
        if ((param_3->bSphere).rad < (float)(dVar41 - dVar42)) {
          (param_2->pos).x = (float)dVar44;
          (param_2->pos).y = (float)dVar43;
          (param_2->pos).z = (float)dVar42;
          (param_2->pos).w = (float)dVar47;
          uVar32 = uVar30 | 0x22;
        }
      }
      else {
        (param_2->pos).x = (float)dVar44;
        (param_2->pos).y = (float)dVar43;
        (param_2->pos).z = (float)dVar42;
        (param_2->pos).w = (float)dVar47;
        uVar32 = uVar30 | 0x22;
      }
    }
    *param_5 = (float)dVar34;
    param_5[1] = (float)dVar39;
    param_5[2] = *(float *)(puVar19 + 0xf);
    param_5[3] = *(float *)((int)puVar19 + 0x7c);
  }
  else if ((uVar25 & 1) == 0) {
    (param_3->pos).z = DAT_0071f408 * -0.01;
  }
  if (dVar48 < (double)param_3->scale) {
    uVar32 = uVar32 | 4;
  }
  return uVar32;
}


// 0x0101ba8 (0x104 bytes)
void MB_MoveForward100(MobyInstance *param_1,MobyInstance *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float local_30;
  float local_2c;
  f32 local_28;
  f32 local_24;
  GPiece<32> auStack_20;
  
  fVar1 = (param_1->rotation).z;
  fVar2 = fVar1 + 1.5707963;
  fVar3 = 3.1415925 - fVar1;
  if (fVar1 - (3.1415925 - fVar1) < 0.0) {
    fVar3 = fVar1;
  }
  fVar5 = 3.1415925 - fVar2;
  if (fVar2 - (3.1415925 - fVar2) < 0.0) {
    fVar5 = fVar2;
  }
  fVar4 = -3.1415925 - fVar1;
  if ((-3.1415925 - fVar1) - fVar3 < 0.0) {
    fVar4 = fVar3;
  }
  fVar1 = -3.1415925 - fVar2;
  if ((-3.1415925 - fVar2) - fVar5 < 0.0) {
    fVar1 = fVar5;
  }
  fVar2 = fVar4 * fVar4;
  fVar3 = fVar1 * fVar1;
  fVar7 = fVar2 * fVar2 * fVar4;
  fVar5 = fVar3 * fVar3 * fVar1;
  fVar8 = fVar2 * fVar7;
  local_28 = (param_1->pos).z;
  local_24 = (param_1->pos).w;
  fVar6 = fVar3 * fVar5;
  local_2c = (fVar2 * fVar8 * 2.601887e-06 +
             fVar8 * -0.0001980741 + fVar7 * 0.0083330255 + fVar2 * fVar4 * -0.16666657 + fVar4) *
             100.0 + (param_1->pos).y;
  local_30 = (fVar3 * fVar6 * 2.601887e-06 +
             fVar6 * -0.0001980741 + fVar5 * 0.0083330255 + fVar3 * fVar1 * -0.16666657 + fVar1) *
             100.0 + (param_1->pos).x;
  MB_UpdateNavMove(0x3ff0000000000000,param_1,param_2,&local_30,auStack_20);
  return;
}


// 0x0101cc0 (0x39c bytes)
// inlined: FastAtan2 @0x101e14
uint MB_UpdateNavMoveTurning
               (MobyInstance *param_1,longlong param_2,float *param_3,undefined4 *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  f32 fVar9;
  undefined4 uVar10;
  ulonglong *puVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  MobyInstance *pMVar15;
  int iVar16;
  int iVar17;
  longlong lVar18;
  f32 fVar19;
  uint uVar20;
  ulonglong uVar21;
  longlong lVar22;
  ulonglong uVar23;
  longlong lVar24;
  ulonglong uVar25;
  longlong lVar26;
  float *pfVar27;
  ulonglong unaff_r26;
  uint uVar28;
  uint uVar29;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar30;
  double dVar31;
  ulonglong in_f31;
  double dVar32;
  GPiece<16> auVar33;
  GPiece<16> auVar34;
  GPiece<16> auVar35;
  
  uVar25 = ZEXT48(&stack0x00000000);
  lVar18 = uVar25 - 0xf0;
  puVar11 = (ulonglong *)lVar18;
  *puVar11 = uVar25;
  puVar11[0x20] = in_LR;
  puVar11[0x1d] = in_f31;
  puVar11[0x17] = unaff_r26;
  uVar28 = 0;
  puVar11[0x18] = unaff_r27;
  dVar32 = 0.0;
  param_4[3] = 0;
  param_4[2] = 0;
  param_4[1] = 0;
  *param_4 = 0;
  fVar1 = (param_1->pos).y;
  fVar2 = param_3[1];
  fVar3 = (param_1->pos).x;
  fVar12 = fVar1 - fVar2;
  fVar4 = *param_3;
  fVar13 = fVar3 - fVar4;
  fVar14 = (param_1->pos).z - param_3[2];
  puVar11[0x19] = unaff_r28;
  pMVar15 = (MobyInstance *)param_2;
  fVar5 = pMVar15->scale;
  puVar11[0x1b] = unaff_r30;
  puVar11[0x1a] = unaff_r29;
  puVar11[0x1c] = unaff_r31;
  fVar6 = (float)pMVar15->light;
  fVar7 = (pMVar15->rotation).x;
  fVar8 = (pMVar15->rotation).y;
  if (SQRT(fVar14 * fVar14 + fVar13 * fVar13 + fVar12 * fVar12) < fVar5) {
    uVar28 = 4;
  }
  fVar4 = fVar4 - fVar3;
  fVar2 = fVar2 - fVar1;
  fVar5 = ABS(fVar4);
  fVar3 = ABS(fVar2);
  *(float *)(puVar11 + 0xe) = fVar4;
  *(float *)((int)puVar11 + 0x74) = fVar2;
  *(float *)(puVar11 + 0xf) = fVar5 - fVar3;
  uVar23 = (ulonglong)(*(uint *)(puVar11 + 0xe) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar11 + 0xf) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar11 + 0x74) >> 0x1d) & 4;
  uVar21 = uVar23 << 2 | 0x735900;
  fVar1 = ABS(*(float *)(puVar11 + 0xe));
  if (*(float *)(puVar11 + 0xf) - 0.0 < 0.0) {
    fVar1 = fVar3;
  }
  fVar2 = *(float *)(&g_atanQuadrantTable + (int)(uVar23 << 2));
  fVar3 = ABS(*(float *)((int)puVar11 + 0x74));
  if (*(float *)(puVar11 + 0xf) - 0.0 < 0.0) {
    fVar3 = fVar5;
  }
  fVar4 = *(float *)((int)uVar21 + 4);
  if (0.0 < fVar1) {
    lVar26 = uVar25 - 0xe0;
    lVar22 = uVar25 - 100;
    lVar24 = uVar25 - 0x74;
    lVar30 = 2;
    fVar1 = (fVar3 - fVar1) / (fVar3 + fVar1);
    fVar3 = fVar1 * fVar1;
    *(float *)(puVar11 + 0x11) = fVar1;
    *(float *)(puVar11 + 0x10) = fVar1;
    *(float *)((int)puVar11 + 0x84) = fVar1;
    *(float *)((int)puVar11 + 0x7c) = fVar1;
    fVar1 = fVar3 * fVar3;
    *(float *)(puVar11 + 0x10) = *(float *)(puVar11 + 0x10) * fVar3;
    *(float *)((int)puVar11 + 0x84) = *(float *)((int)puVar11 + 0x84) * fVar1;
    *(float *)(puVar11 + 0x11) = *(float *)(puVar11 + 0x11) * fVar1 * fVar3;
    do {
      *(float *)((int)lVar26 + 0x7c) = *(float *)((int)lVar26 + 0x6c) * fVar1 * fVar1;
      iVar16 = (int)lVar24;
      lVar24 = lVar24 + 8;
      lVar26 = lVar26 + 8;
      *(float *)((int)lVar22 + 4) = *(float *)(iVar16 + 4) * fVar1 * fVar1;
      lVar22 = lVar22 + 8;
      lVar30 = lVar30 + -1;
    } while (lVar30 != 0);
    uVar21 = uVar25 - 0x74;
    lVar24 = 4;
    pfVar27 = (float *)&DAT_007358e0;
    uVar25 = uVar21;
    lVar22 = lVar18;
    do {
      fVar1 = *pfVar27;
      fVar3 = pfVar27[1];
      pfVar27 = pfVar27 + 2;
      *(float *)((int)lVar22 + 0x7c) = *(float *)((int)lVar22 + 0x7c) * fVar1;
      lVar22 = lVar22 + 8;
      *(float *)((int)uVar25 + 4) = *(float *)((int)uVar25 + 4) * fVar3;
      uVar25 = uVar25 + 8;
      lVar24 = lVar24 + -1;
    } while (lVar24 != 0);
    lVar22 = 2;
    do {
      iVar16 = (int)lVar18;
      iVar17 = (int)uVar21;
      lVar18 = lVar18 + 0x10;
      uVar21 = uVar21 + 0x10;
      dVar32 = (double)((float)(dVar32 + (double)*(float *)(iVar16 + 0x7c)) + *(float *)(iVar17 + 4)
                        + *(float *)(iVar17 + 8) + *(float *)(iVar17 + 0xc));
      lVar22 = lVar22 + -1;
    } while (lVar22 != 0);
    dVar32 = (double)((float)(dVar32 + 0.7853981852531433) * fVar2 + fVar4);
  }
  OrganicDeltAngSpeed(dVar32,(double)fVar6,(double)fVar7,(double)fVar8,param_1,uVar21,param_2 + 0x14
                     );
  dVar32 = (double)FastSubRots((float)dVar32,(param_1->rotation).z);
  if ((double)(float)pMVar15->pChain <= dVar32) {
    uVar28 = uVar28 | 0x10;
  }
  FastDecTimerS32(param_2 + 0x48);
  dVar31 = (double)(float)pMVar15->pChain;
  fVar19 = (pMVar15->rotation).z;
  if (dVar32 < dVar31) {
    auVar33 = ZEXT416(0xffffffff);
    auVar33 = auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60;
    auVar34 = vectorShiftLeftIntegerWord(auVar33,auVar33);
    auVar33 = loadVectorLeftIndexed(8,0x101cac);
    auVar33 = auVar33 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar35 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar33 = vectorMultiplyAddFloatingPoint
                        (auVar35,auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60,
                         auVar34);
    auVar33 = vectorConvertToSignedFixedPointWordSaturate(auVar33,0);
    puVar11[0x14] = (longlong)(int)(animationSpeed * 4.5);
    fVar9 = *(f32 *)((int)puVar11 + 0xa4);
    if ((int)fVar19 < (int)fVar9) {
      auVar33 = auVar33 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar10 = storeVectorElementWordIndexed
                         (auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60,0x48,param_2
                         );
      *(undefined4 *)((uint)&(pMVar15->rotation).z & 0xfffffffc) = uVar10;
      fVar19 = fVar9;
    }
  }
  uVar29 = uVar28;
  if (fVar19 != 0.0) {
    uVar20 = MB_UpdateNavMove((double)(float)((double)(float)(dVar31 - dVar32) / dVar31),param_1,
                              pMVar15,param_3,param_4);
    uVar29 = uVar28 | uVar20;
    if (0.10000000149011612 < dVar32) {
      uVar29 = uVar28 | uVar20 & 0xfffffffd;
    }
  }
  return uVar29;
}


// 0x0102060 (0x98 bytes)
void MB_Reset2LegData(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = 0;
  uVar2 = 0;
  do {
    if (*(int *)(param_1 + 0x1a0) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0x1a0) + 8) = 0;
    }
    if (*(char *)(param_1 + 0x161) != '\0') {
      FastQuaternionToEuler(uVar2,param_1 + 0x170,2);
    }
    iVar1 = iVar1 + 1;
    *(undefined4 *)(param_1 + 0x114) = 0;
    param_1 = param_1 + 0xa0;
  } while (iVar1 < 2);
  return;
}


// 0x0102168 (0x1590 bytes)
// inlined: FastAtan2 @0x1024a0, FastAtan2 @0x102c70
ulonglong MB_UpdateLegAnimState
                    (double param_1,double param_2,double param_3,MobyInstance *param_4,
                    MobyInstance *param_5,int param_6)

{
  bool bVar1;
  float fVar2;
  u8 uVar3;
  char cVar4;
  byte bVar5;
  byte bVar6;
  float fVar7;
  float fVar8;
  f32 fVar9;
  f32 fVar10;
  float fVar11;
  float fVar12;
  short sVar13;
  short sVar14;
  short sVar15;
  short sVar16;
  short sVar17;
  short sVar18;
  ushort uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  uint uVar23;
  ulonglong *puVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  longlong lVar30;
  int iVar31;
  f32 fVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  float *pfVar36;
  Manipulator **ppMVar38;
  ulonglong uVar37;
  longlong lVar39;
  ulonglong unaff_r16;
  uint uVar40;
  ulonglong unaff_r17;
  longlong lVar41;
  ulonglong unaff_r18;
  ulonglong unaff_r19;
  ulonglong unaff_r20;
  int iVar42;
  ulonglong unaff_r21;
  MobyInstance *pMVar43;
  ulonglong unaff_r22;
  char *pcVar44;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong uVar45;
  ulonglong unaff_r26;
  ulonglong uVar46;
  ulonglong unaff_r27;
  Manipulator **ppMVar47;
  ulonglong unaff_r28;
  ulonglong uVar48;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar49;
  longlong lVar50;
  double dVar51;
  double dVar52;
  double dVar53;
  double dVar54;
  double dVar55;
  double dVar56;
  double dVar57;
  double dVar58;
  double dVar59;
  double dVar60;
  ulonglong in_f14;
  ulonglong in_f15;
  ulonglong in_f16;
  ulonglong in_f17;
  ulonglong in_f18;
  double dVar61;
  ulonglong in_f19;
  double dVar62;
  double dVar63;
  ulonglong in_f20;
  double dVar64;
  ulonglong in_f21;
  ulonglong in_f22;
  ulonglong in_f23;
  double dVar65;
  ulonglong in_f24;
  double dVar66;
  ulonglong in_f25;
  ulonglong in_f26;
  ulonglong in_f27;
  double dVar67;
  ulonglong in_f28;
  double dVar68;
  ulonglong in_f29;
  double dVar69;
  double dVar70;
  ulonglong in_f30;
  double dVar71;
  double dVar72;
  ulonglong in_f31;
  double dVar73;
  double dVar74;
  
  uVar28 = ZEXT48(&stack0x00000000);
  lVar50 = uVar28 - 0x330;
  puVar24 = (ulonglong *)lVar50;
  *puVar24 = uVar28;
  puVar24[0x68] = in_LR;
  puVar24[0x54] = in_f14;
  puVar24[0x55] = in_f15;
  puVar24[0x56] = in_f16;
  puVar24[0x57] = in_f17;
  puVar24[0x58] = in_f18;
  puVar24[0x59] = in_f19;
  puVar24[0x5a] = in_f20;
  puVar24[0x5b] = in_f21;
  puVar24[0x5c] = in_f22;
  puVar24[0x5d] = in_f23;
  puVar24[0x5e] = in_f24;
  puVar24[0x5f] = in_f25;
  puVar24[0x60] = in_f26;
  puVar24[0x61] = in_f27;
  puVar24[0x62] = in_f28;
  puVar24[99] = in_f29;
  puVar24[100] = in_f30;
  puVar24[0x65] = in_f31;
  puVar24[0x4b] = unaff_r23;
  puVar24[0x50] = unaff_r28;
  puVar24[0x48] = unaff_r20;
  puVar24[0x45] = unaff_r17;
  uVar48 = 0;
  puVar24[0x53] = unaff_r31;
  iVar42 = 0;
  puVar24[0x52] = unaff_r30;
  puVar24[0x51] = unaff_r29;
  uVar3 = param_4->updateId;
  fVar8 = animationSpeed * 60.0;
  puVar24[0x4f] = unaff_r27;
  puVar24[0x4e] = unaff_r26;
  puVar24[0x4d] = unaff_r25;
  puVar24[0x4c] = unaff_r24;
  puVar24[0x4a] = unaff_r22;
  puVar24[0x49] = unaff_r21;
  puVar24[0x47] = unaff_r19;
  puVar24[0x46] = unaff_r18;
  puVar24[0x44] = unaff_r16;
  dVar64 = (double)(float)((double)fVar8 * param_1);
  if (uVar3 == 0xff) {
    dVar51 = (double)FastIntToDouble(param_4->animationFrame);
  }
  else {
    dVar51 = (double)BlendAnimFrame(param_4);
  }
  if (param_5->pAnimationLayers == (void *)(uint)param_4->updateId) {
    ppMVar47 = (Manipulator **)&param_5->pAnimationLayers;
LAB_0010229c:
    if (ppMVar47 != (Manipulator **)0x0) {
      uVar46 = 0;
      uVar29 = 1;
      iVar31 = 0;
      ppMVar38 = ppMVar47;
      do {
        uVar23 = (int)ppMVar38[0x10] >> 0x1f;
        uVar40 = (int)ppMVar38[0x12] >> 0x1f;
        if ((int)((uVar40 >> 1 ^ (uint)ppMVar38[0x12]) - uVar40) <
            (int)((uVar23 >> 1 ^ (uint)ppMVar38[0x10]) - uVar23)) {
          if (((double)(float)ppMVar38[0x10] <= dVar51) || (dVar51 <= (double)(float)ppMVar38[0x12])
             ) {
            uVar46 = uVar29 | uVar46;
          }
        }
        else if (dVar51 <= (double)(float)ppMVar38[0x12] && (double)(float)ppMVar38[0x10] <= dVar51)
        {
          uVar46 = uVar29 | uVar46;
        }
        uVar23 = (int)ppMVar38[10] >> 0x1f;
        uVar40 = (int)ppMVar38[0xc] >> 0x1f;
        if ((int)((uVar40 >> 1 ^ (uint)ppMVar38[0xc]) - uVar40) <
            (int)((uVar23 >> 1 ^ (uint)ppMVar38[10]) - uVar23)) {
          if (((double)(float)ppMVar38[10] <= dVar51) || (dVar51 <= (double)(float)ppMVar38[0xc])) {
            uVar46 = uVar29 << 1 | uVar46;
          }
        }
        else if (dVar51 <= (double)(float)ppMVar38[0xc] && (double)(float)ppMVar38[10] <= dVar51) {
          uVar46 = uVar29 << 1 | uVar46;
        }
        iVar31 = iVar31 + 1;
        uVar29 = (uVar29 & 0x3fffffff) << 2;
        ppMVar38 = ppMVar38 + 1;
      } while (iVar31 < 2);
      if ((int)uVar46 == 0) {
        uVar46 = uVar29 | uVar46;
      }
      goto LAB_001023ac;
    }
  }
  else {
    if (*(void **)&param_5->levelFlagIdx == (void *)(uint)param_4->updateId) {
      ppMVar47 = (Manipulator **)&param_5->levelFlagIdx;
      goto LAB_0010229c;
    }
    ppMVar47 = (Manipulator **)0x0;
  }
  sVar13.piece<0,1>() = param_5->previousAnimationFrame;
  sVar13.piece<1,1>() = param_5->animationFrame;
  uVar46 = (ulonglong)sVar13;
LAB_001023ac:
  sVar14.piece<0,1>() = param_5->updateId;
  sVar14.piece<1,1>() = param_5->animationId;
  if (sVar14 == 2) {
    dVar57 = (double)(param_4->rotation).x;
    dVar57 = (double)(float)(param_3 * 0.5 - dVar57) * 0.06666667014360428 + dVar57;
  }
  else {
    dVar57 = (double)(param_4->rotation).x * 0.800000011920929;
  }
  uVar45 = 3;
  iVar31 = 0;
  (param_4->rotation).x = (float)dVar57;
  uVar29 = 3;
  pMVar43 = param_5;
  do {
    GetBoneTransformations(param_4,*(undefined1 *)&pMVar43[1].pos.x,uVar28 - 0x240);
    fVar7 = ABS(*(float *)(puVar24 + 0x20));
    fVar2 = ABS(*(float *)((int)puVar24 + 0x104));
    *(float *)(puVar24 + 0x33) = fVar7 - fVar2;
    dVar57 = 0.0;
    dVar65 = 0.7853981852531433;
    sVar15.piece<0,1>() = param_5->updateId;
    sVar15.piece<1,1>() = param_5->animationId;
    uVar37 = (ulonglong)(*(uint *)(puVar24 + 0x20) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar24 + 0x33) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar24 + 0x104) >> 0x1d) & 4;
    fVar8 = fVar7;
    if (*(float *)(puVar24 + 0x33) - 0.0 < 0.0) {
      fVar8 = fVar2;
    }
    fVar12 = *(float *)(&g_atanQuadrantTable + (int)(uVar37 << 2));
    if (*(float *)(puVar24 + 0x33) - 0.0 < 0.0) {
      fVar2 = fVar7;
    }
    fVar7 = *(float *)(((uint)(uVar37 << 2) | 0x735900) + 4);
    dVar54 = dVar57;
    if (0.0 < fVar8) {
      lVar39 = uVar28 - 800;
      lVar41 = uVar28 - 0x13c;
      lVar30 = uVar28 - 0x14c;
      lVar49 = 2;
      fVar8 = (fVar2 - fVar8) / (fVar2 + fVar8);
      fVar2 = fVar8 * fVar8;
      *(float *)((int)puVar24 + 0x1e4) = fVar8;
      *(float *)(puVar24 + 0x3d) = fVar8;
      *(float *)((int)puVar24 + 0x1ec) = fVar8;
      *(float *)(puVar24 + 0x3e) = fVar8;
      fVar8 = fVar2 * fVar2;
      *(float *)(puVar24 + 0x3d) = *(float *)(puVar24 + 0x3d) * fVar2;
      *(float *)((int)puVar24 + 0x1ec) = *(float *)((int)puVar24 + 0x1ec) * fVar8;
      *(float *)(puVar24 + 0x3e) = *(float *)(puVar24 + 0x3e) * fVar8 * fVar2;
      do {
        *(float *)((int)lVar39 + 0x1e4) = *(float *)((int)lVar39 + 0x1d4) * fVar8 * fVar8;
        iVar33 = (int)lVar30;
        lVar30 = lVar30 + 8;
        lVar39 = lVar39 + 8;
        *(float *)((int)lVar41 + 4) = *(float *)(iVar33 + 4) * fVar8 * fVar8;
        lVar41 = lVar41 + 8;
        lVar49 = lVar49 + -1;
      } while (lVar49 != 0);
      lVar49 = 4;
      lVar41 = uVar28 - 0x14c;
      pfVar36 = (float *)&DAT_007358e0;
      lVar39 = lVar50;
      lVar30 = lVar41;
      do {
        fVar8 = *pfVar36;
        fVar2 = pfVar36[1];
        pfVar36 = pfVar36 + 2;
        *(float *)((int)lVar39 + 0x1e4) = *(float *)((int)lVar39 + 0x1e4) * fVar8;
        lVar39 = lVar39 + 8;
        *(float *)((int)lVar30 + 4) = *(float *)((int)lVar30 + 4) * fVar2;
        lVar30 = lVar30 + 8;
        lVar49 = lVar49 + -1;
      } while (lVar49 != 0);
      lVar30 = 2;
      lVar39 = lVar50;
      do {
        iVar33 = (int)lVar39;
        iVar34 = (int)lVar41;
        lVar39 = lVar39 + 0x10;
        lVar41 = lVar41 + 0x10;
        dVar54 = (double)((float)(dVar54 + (double)*(float *)(iVar33 + 0x1e4)) +
                          *(float *)(iVar34 + 4) + *(float *)(iVar34 + 8) + *(float *)(iVar34 + 0xc)
                         );
        lVar30 = lVar30 + -1;
      } while (lVar30 != 0);
      dVar54 = (double)((float)(dVar54 + 0.7853981852531433) * fVar12 + fVar7);
    }
    uVar23 = (uint)uVar46;
    if ((sVar15 == 1) && (((uint)uVar45 & uVar23) != 0)) {
      dVar52 = (double)FastDiffRots((double)pMVar43[1].pos.z,dVar54);
      pMVar43[1].pos.w = 0.0;
    }
    else {
      dVar52 = (double)MB_DeltAngSpeed((double)pMVar43[1].pos.y,0,0x3fb99999a0000000,
                                       0x3fb99999a0000000,(double)(DAT_0071f408 * 0.034906585),
                                       &DAT_00720000,sVar15,&pMVar43[1].pos.w);
    }
    pMVar43[1].pos.y = (float)dVar52;
    dVar53 = (double)*(float *)&pMVar43[1].damage;
    if (dVar52 < dVar53) {
      pMVar43[1].pos.y = *(float *)&pMVar43[1].damage;
      dVar52 = dVar53;
    }
    dVar53 = (double)(float)pMVar43[1].field71_0xa8;
    if (dVar53 < dVar52) {
      pMVar43[1].pos.y = (f32)pMVar43[1].field71_0xa8;
      dVar52 = dVar53;
    }
    dVar54 = (double)FastWrapRot((float)dVar52,(float)dVar54);
    sVar16.piece<0,1>() = param_5->updateId;
    sVar16.piece<1,1>() = param_5->animationId;
    pMVar43[1].pos.z = (float)dVar54;
    if (sVar16 == 2) {
      cVar4 = *(char *)((int)&pMVar43[1].pAnimationLayers + 1);
      if (cVar4 != '\0') {
        FastQuaternionToEuler(dVar57,&pMVar43[1].field43_0x70,2);
        cVar4 = *(char *)((int)&pMVar43[1].pAnimationLayers + 1);
      }
      pcVar44 = &pMVar43[1].updateDistance;
      if (cVar4 != '\0') {
        FastQuaternionToEuler((double)pMVar43[1].pos.y,pcVar44,2);
      }
      if (((uint)uVar45 & uVar23) != 0) {
        FastQuaternionToEuler(-(double)(param_4->rotation).x,uVar28 - 0x2b0,0);
        FastQuaternionMult(pcVar44,pcVar44,uVar28 - 0x2b0);
      }
    }
    else {
      cVar4 = *(char *)((int)&pMVar43[1].pAnimationLayers + 1);
      if (cVar4 != '\0') {
        FastQuaternionToEuler((double)pMVar43[1].pos.y,&pMVar43[1].field43_0x70,2);
        cVar4 = *(char *)((int)&pMVar43[1].pAnimationLayers + 1);
      }
      if (cVar4 != '\0') {
        FastQuaternionToEuler(dVar57,&pMVar43[1].updateDistance,2);
      }
    }
    iVar31 = iVar31 + 1;
    uVar45 = (uVar45 & 0x3fffffff) << 2;
    pMVar43 = (MobyInstance *)&pMVar43->collCount;
  } while (iVar31 < 2);
  sVar17.piece<0,1>() = param_5->updateId;
  sVar17.piece<1,1>() = param_5->animationId;
  if (sVar17 == 0) {
    uVar45 = (ulonglong)param_4->animationId;
    if ((ushort)param_4->animationId != *(ushort *)&param_5->frameSpeed) {
      iVar31 = 0;
      uVar45 = 0x3f800000;
      pMVar43 = param_5;
      do {
        if ((((uint)uVar29 & uVar23) == 0) && (uVar40 = pMVar43[1].collCount, uVar40 != 0)) {
          *(undefined4 *)(puVar24 + 0x41) = *(undefined4 *)(uVar40 + 8);
          fVar8 = *(float *)(puVar24 + 0x41);
          *(float *)(puVar24 + 0x41) = fVar8 + 0.2;
          *(undefined4 *)(uVar40 + 8) = *(undefined4 *)(puVar24 + 0x41);
          if (1.0 < fVar8 + 0.2) {
            *(undefined4 *)(uVar40 + 8) = 0x3f800000;
          }
        }
        iVar31 = iVar31 + 1;
        uVar29 = (uVar29 & 0x3fffffff) << 2;
        pMVar43 = (MobyInstance *)&pMVar43->collCount;
      } while (iVar31 < 2);
    }
  }
  else {
    uVar45 = 0;
    pMVar43 = param_5;
    do {
      if ((((uint)uVar29 & uVar23) == 0) && (uVar40 = pMVar43[1].collCount, uVar40 != 0)) {
        *(undefined4 *)(puVar24 + 0x41) = *(undefined4 *)(uVar40 + 8);
        fVar8 = *(float *)(puVar24 + 0x41);
        *(float *)(puVar24 + 0x41) = fVar8 - 0.2;
        *(undefined4 *)(uVar40 + 8) = *(undefined4 *)(puVar24 + 0x41);
        if ((double)(fVar8 - 0.2) < dVar57) {
          *(undefined4 *)(uVar40 + 8) = 0;
        }
      }
      uVar45 = uVar45 + 1;
      pMVar43 = (MobyInstance *)&pMVar43->collCount;
      uVar29 = (uVar29 & 0x3fffffff) << 2;
    } while ((int)uVar45 < 2);
  }
  dVar54 = (double)MB_DeltAngSpeed((double)(param_4->rotation).y,(double)param_5->animationBlend,
                                   0x3f747ae140000000,0x3f847ae140000000,
                                   (double)(DAT_0071f408 * 0.017453292),&DAT_00720000,uVar45,
                                   &param_5->unk58);
  (param_4->rotation).y = (float)dVar54;
  bVar5 = *(byte *)((int)&param_5[1].pos.x + 1);
  *(uint *)((int)puVar24 + 0x19c) = (uint)*(byte *)&param_5[1].pos.x;
  bVar6 = param_5[1].levelFlagIdx;
  *(uint *)(puVar24 + 0x34) = (uint)bVar5;
  bVar5 = param_5[1].field74_0xb1;
  *(uint *)((int)puVar24 + 0x1a4) = (uint)bVar6;
  fVar32 = param_5[1].bSphere.z;
  *(uint *)(puVar24 + 0x35) = (uint)bVar5;
  *(f32 *)((int)puVar24 + 0x1ac) = fVar32;
  GetMobyJointsWorldPos(param_4,5,uVar28 - 0x194,uVar28 - 0x200);
  uVar19.piece<0,1>() = param_5->previousAnimationFrame;
  uVar19.piece<1,1>() = param_5->animationFrame;
  uVar29 = 1;
  iVar31 = 0;
  lVar30 = uVar28 - 0x200;
  uVar45 = 1;
  lVar39 = lVar30;
  dVar54 = dVar57;
  dVar52 = dVar57;
  dVar53 = dVar57;
  pMVar43 = param_5;
  do {
    if (((uint)uVar29 &
        (uVar23 | 0x10) +
        ((uint)(ZERO_MASK((uVar19 & 0x10))) & uVar23 - (uVar23 | 0x10))) != 0) {
      dVar53 = (double)(float)(dVar53 + 1.0);
      dVar52 = (double)((float)(dVar52 + (double)(pMVar43->bSphere).x) - *(float *)lVar39);
      dVar54 = (double)((float)(dVar54 + (double)(pMVar43->bSphere).y) - ((float *)lVar39)[1]);
    }
    iVar31 = iVar31 + 1;
    uVar29 = (uVar29 & 0x7fffffff) << 1;
    lVar39 = lVar39 + 0x10;
    pMVar43 = (MobyInstance *)&pMVar43->pos;
  } while (iVar31 < 5);
  lVar39 = 5;
  dVar52 = (double)(float)((double)(float)(1.0 / dVar53) * dVar52);
  dVar54 = (double)(float)((double)(float)(1.0 / dVar53) * dVar54);
  pMVar43 = param_5;
  do {
    pfVar36 = (float *)lVar30;
    (pMVar43->bSphere).x = (float)((double)*pfVar36 + dVar52);
    (pMVar43->bSphere).y = (float)((double)pfVar36[1] + dVar54);
    (pMVar43->bSphere).z = pfVar36[2];
    lVar30 = lVar30 + 0x10;
    (pMVar43->bSphere).rad = pfVar36[3];
    pMVar43 = (MobyInstance *)&pMVar43->pos;
    lVar39 = lVar39 + -1;
  } while (lVar39 != 0);
  dVar66 = 0.5;
  uVar40 = 0;
  dVar62 = 4.0;
  uVar29 = 1;
  dVar53 = dVar57;
  dVar67 = dVar57;
  dVar68 = dVar57;
  dVar69 = dVar57;
  dVar71 = dVar57;
  dVar73 = dVar57;
  pMVar43 = param_5;
  do {
    if (((uint)uVar29 & uVar23) == 0) {
      if ((uVar40 & 1) != 0) {
        fVar32 = (pMVar43->bSphere).x;
        *(f32 *)(puVar24 + 0x16) = fVar32;
        fVar9 = (pMVar43->bSphere).y;
        *(f32 *)((int)puVar24 + 0xb4) = fVar9;
        fVar8 = (pMVar43->bSphere).z;
        fVar10 = (pMVar43->bSphere).rad;
        *(f32 *)((int)puVar24 + 0xbc) = fVar10;
        *(undefined4 *)(puVar24 + 0x17) = 0x3c23d70a;
        *(f32 *)(puVar24 + 0x18) = fVar32;
        *(f32 *)((int)puVar24 + 0xc4) = fVar9;
        *(f32 *)((int)puVar24 + 0xcc) = fVar10;
        *(float *)(puVar24 + 0x19) = (float)((double)fVar8 + dVar66);
        iVar31 = CollLine(uVar28 - 0x270,uVar28 - 0x280,2,0,0);
        dVar61 = (double)(pMVar43->bSphere).z;
        dVar55 = dVar53;
        if (iVar31 != 0) {
          dVar55 = (double)g_CollOutput.ip.z;
        }
        dVar69 = (double)(float)(dVar69 + (double)g_CollOutput.normal.x);
        dVar73 = (double)(float)(dVar73 + (double)g_CollOutput.normal.y);
        dVar71 = (double)(float)(dVar71 + (double)g_CollOutput.normal.z);
        if ((double)(float)(dVar61 + dVar68) < dVar55) {
          dVar67 = (double)(float)(dVar67 + dVar62);
          dVar68 = (double)(float)(dVar68 + (double)(float)(dVar55 - dVar61));
        }
      }
    }
    else {
      fVar32 = (pMVar43->bSphere).x;
      *(f32 *)(puVar24 + 0x1a) = fVar32;
      fVar9 = (pMVar43->bSphere).y;
      *(f32 *)((int)puVar24 + 0xd4) = fVar9;
      fVar8 = (pMVar43->bSphere).z;
      fVar10 = (pMVar43->bSphere).rad;
      *(f32 *)((int)puVar24 + 0xdc) = fVar10;
      *(undefined4 *)(puVar24 + 0x1b) = 0x3c23d70a;
      *(f32 *)(puVar24 + 0x1c) = fVar32;
      *(f32 *)((int)puVar24 + 0xe4) = fVar9;
      *(f32 *)((int)puVar24 + 0xec) = fVar10;
      *(float *)(puVar24 + 0x1d) = (float)((double)fVar8 + dVar66);
      iVar31 = CollLine(uVar28 - 0x250,uVar28 - 0x260,2,0,0);
      dVar55 = dVar53;
      if (iVar31 != 0) {
        dVar55 = (double)g_CollOutput.ip.z;
      }
      dVar69 = (double)(float)(dVar69 + (double)g_CollOutput.normal.x);
      dVar73 = (double)(float)(dVar73 + (double)g_CollOutput.normal.y);
      dVar71 = (double)(float)(dVar71 + (double)g_CollOutput.normal.z);
      dVar67 = (double)(float)(dVar67 + dVar62);
      dVar68 = (double)(float)(dVar68 + (double)(float)(dVar55 - (double)(pMVar43->bSphere).z));
    }
    uVar40 = uVar40 + 1;
    uVar29 = (uVar29 & 0x7fffffff) << 1;
    pMVar43 = (MobyInstance *)&pMVar43->pos;
  } while ((int)uVar40 < 4);
  dVar62 = 1.570796251296997;
  fVar8 = (param_4->rotation).z;
  dVar55 = 3.141592502593994;
  fVar7 = fVar8 + 1.5707963;
  dVar61 = -3.141592502593994;
  dVar63 = -0.16666656732559204;
  fVar2 = 3.1415925 - fVar8;
  if (fVar8 - (3.1415925 - fVar8) < 0.0) {
    fVar2 = fVar8;
  }
  dVar70 = 0.008333025500178337;
  fVar12 = 3.1415925 - fVar7;
  if (fVar7 - (3.1415925 - fVar7) < 0.0) {
    fVar12 = fVar7;
  }
  dVar72 = -0.0001980741071747616;
  fVar11 = -3.1415925 - fVar8;
  if ((-3.1415925 - fVar8) - fVar2 < 0.0) {
    fVar11 = fVar2;
  }
  dVar74 = 2.601886990305502e-06;
  fVar8 = -3.1415925 - fVar7;
  if ((-3.1415925 - fVar7) - fVar12 < 0.0) {
    fVar8 = fVar12;
  }
  fVar12 = fVar11 * fVar11;
  fVar27 = fVar8 * fVar8;
  fVar2 = fVar12 * fVar12 * fVar11;
  fVar25 = fVar27 * fVar27 * fVar8;
  fVar7 = fVar12 * fVar2;
  fVar26 = fVar27 * fVar25;
  dVar56 = (double)(fVar12 * fVar7 * 2.601887e-06 +
                   fVar7 * -0.0001980741 +
                   fVar2 * 0.0083330255 + fVar12 * fVar11 * -0.16666657 + fVar11);
  dVar58 = (double)(fVar27 * fVar26 * 2.601887e-06 +
                   fVar26 * -0.0001980741 +
                   fVar25 * 0.0083330255 + fVar27 * fVar8 * -0.16666657 + fVar8);
  dVar59 = (double)(float)(dVar71 * dVar58 - dVar53);
  dVar60 = (double)(float)(dVar73 * dVar53 - (double)(float)(dVar71 * dVar56));
  dVar56 = (double)(float)(dVar69 * dVar56 - (double)(float)(dVar73 * dVar58));
  fVar8 = (float)(dVar73 * dVar56 - (double)(float)(dVar71 * dVar59));
  fVar2 = (float)(dVar71 * dVar60 - (double)(float)(dVar69 * dVar56));
  fVar7 = (float)(dVar69 * dVar59 - (double)(float)(dVar73 * dVar60));
  dVar71 = ABS((double)fVar7);
  *(float *)(puVar24 + 0x32) = fVar7;
  fVar8 = SQRT(fVar8 * fVar8 + fVar2 * fVar2);
  dVar73 = ABS((double)fVar8);
  *(float *)((int)puVar24 + 0x18c) = fVar8;
  *(float *)((int)puVar24 + 0x194) = (float)(dVar73 - dVar71);
  uVar29 = (ulonglong)(*(uint *)((int)puVar24 + 0x18c) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)((int)puVar24 + 0x194) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)(puVar24 + 0x32) >> 0x1d) & 4;
  dVar69 = ABS((double)*(float *)((int)puVar24 + 0x18c));
  if ((double)*(float *)((int)puVar24 + 0x194) - dVar53 < 0.0) {
    dVar69 = dVar71;
  }
  fVar2 = *(float *)(&g_atanQuadrantTable + (int)(uVar29 << 2));
  fVar8 = *(float *)(((uint)(uVar29 << 2) | 0x735900) + 4);
  dVar71 = ABS((double)*(float *)(puVar24 + 0x32));
  if ((double)*(float *)((int)puVar24 + 0x194) - dVar53 < 0.0) {
    dVar71 = dVar73;
  }
  dVar73 = dVar53;
  if (dVar53 < dVar69) {
    lVar49 = 2;
    fVar7 = (float)(dVar71 - dVar69) / (float)(dVar71 + dVar69);
    fVar12 = fVar7 * fVar7;
    *(float *)((int)puVar24 + 0x1c4) = fVar7;
    *(float *)(puVar24 + 0x39) = fVar7;
    *(float *)((int)puVar24 + 0x1cc) = fVar7;
    *(float *)(puVar24 + 0x3a) = fVar7;
    lVar41 = uVar28 - 800;
    fVar7 = fVar12 * fVar12;
    lVar39 = uVar28 - 0x16c;
    lVar30 = uVar28 - 0x15c;
    *(float *)(puVar24 + 0x39) = *(float *)(puVar24 + 0x39) * fVar12;
    *(float *)((int)puVar24 + 0x1cc) = *(float *)((int)puVar24 + 0x1cc) * fVar7;
    *(float *)(puVar24 + 0x3a) = *(float *)(puVar24 + 0x3a) * fVar7 * fVar12;
    do {
      *(float *)((int)lVar41 + 0x1c4) = *(float *)((int)lVar41 + 0x1b4) * fVar7 * fVar7;
      iVar31 = (int)lVar39;
      lVar41 = lVar41 + 8;
      lVar39 = lVar39 + 8;
      *(float *)((int)lVar30 + 4) = *(float *)(iVar31 + 4) * fVar7 * fVar7;
      lVar30 = lVar30 + 8;
      lVar49 = lVar49 + -1;
    } while (lVar49 != 0);
    lVar49 = 4;
    lVar41 = uVar28 - 0x16c;
    pfVar36 = (float *)&DAT_007358e0;
    lVar39 = lVar50;
    lVar30 = lVar41;
    do {
      fVar7 = *pfVar36;
      fVar12 = pfVar36[1];
      pfVar36 = pfVar36 + 2;
      *(float *)((int)lVar39 + 0x1c4) = *(float *)((int)lVar39 + 0x1c4) * fVar7;
      lVar39 = lVar39 + 8;
      *(float *)((int)lVar30 + 4) = *(float *)((int)lVar30 + 4) * fVar12;
      lVar30 = lVar30 + 8;
      lVar49 = lVar49 + -1;
    } while (lVar49 != 0);
    lVar39 = 2;
    dVar69 = dVar53;
    do {
      iVar31 = (int)lVar50;
      lVar50 = lVar50 + 0x10;
      iVar33 = (int)lVar41;
      lVar41 = lVar41 + 0x10;
      dVar69 = (double)((float)(dVar69 + (double)*(float *)(iVar31 + 0x1c4)) +
                        *(float *)(iVar33 + 4) + *(float *)(iVar33 + 8) + *(float *)(iVar33 + 0xc));
      lVar39 = lVar39 + -1;
    } while (lVar39 != 0);
    dVar73 = (double)((float)(dVar69 + dVar65) * fVar2 + fVar8);
  }
  param_5->animationBlend = (float)dVar73;
  if (0.785398006439209 < ABS(dVar73)) {
    uVar48 = 2;
  }
  dVar65 = dVar68;
  if (dVar53 - dVar67 < 0.0) {
    dVar65 = (double)(float)(dVar68 / dVar67);
  }
  if (dVar67 - dVar53 < 0.0) {
    dVar65 = (double)(float)(dVar68 / dVar67);
  }
  if (dVar65 != dVar53) {
    lVar50 = 2;
    pMVar43 = param_5;
    do {
      (pMVar43->bSphere).z = (float)((double)(pMVar43->bSphere).z + dVar65);
      (pMVar43->pos).z = (float)((double)(pMVar43->pos).z + dVar65);
      pMVar43 = (MobyInstance *)&pMVar43->state;
      lVar50 = lVar50 + -1;
      dVar57 = dVar65;
    } while (lVar50 != 0);
  }
  sVar18.piece<0,1>() = param_5->updateId;
  sVar18.piece<1,1>() = param_5->animationId;
  param_5->previousAnimationFrame = (char)((ushort)(short)uVar46 >> 8);
  param_5->animationFrame = (char)(short)uVar46;
  if (sVar18 < 1) {
    if (-1 < sVar18) {
      if (param_2 <= 0.800000011920929) {
        if ((0.20999999344348907 < dVar64) || (param_6 != 0)) {
          fVar32 = (f32)((int)param_5[1].bSphere.y + 1);
          param_5[1].bSphere.y = fVar32;
          if (3 < (int)fVar32) {
            uVar21.piece<0,1>() = param_5->field43_0x70;
            uVar21.piece<1,1>() = param_5->field44_0x71;
            uVar21.piece<2,1>() = param_5->field45_0x72;
            uVar21.piece<3,1>() = param_5->field46_0x73;
            MB_SetAnimation(param_4,param_5->pAnimationLayers,uVar21,10);
            iVar31 = 0;
            pMVar43 = param_5;
            do {
              if (pMVar43[1].collCount != 0) {
                *(undefined4 *)(pMVar43[1].collCount + 8) = 0;
              }
              if (*(char *)((int)&pMVar43[1].pAnimationLayers + 1) != '\0') {
                FastQuaternionToEuler(dVar53,&pMVar43[1].field43_0x70,2);
              }
              iVar31 = iVar31 + 1;
              pMVar43[1].pos.y = 0.0;
              pMVar43 = (MobyInstance *)&pMVar43->collCount;
            } while (iVar31 < 2);
            param_5->updateId = '\0';
            param_5->animationId = '\x01';
            param_5[1].bSphere.y = 0.0;
          }
        }
        else {
          uVar19 = *(ushort *)&param_5->frameSpeed;
          bVar1 = param_4->updateId != uVar19;
          if (bVar1) {
            if (param_4->animationId != uVar19) {
              param_5[1].bSphere.y = 0.0;
              dVar51 = dVar53;
              if ((sVar18 == 0) && (bVar1)) {
                iVar31 = 0;
                pMVar43 = param_5;
                do {
                  if (((uint)uVar45 & uVar23) == 0) {
                    fVar32 = (pMVar43->bSphere).x;
                    *(f32 *)(puVar24 + 0x12) = fVar32;
                    fVar9 = (pMVar43->bSphere).y;
                    *(f32 *)((int)puVar24 + 0x94) = fVar9;
                    fVar8 = (pMVar43->bSphere).z;
                    fVar10 = (pMVar43->bSphere).rad;
                    *(f32 *)((int)puVar24 + 0x9c) = fVar10;
                    *(undefined4 *)(puVar24 + 0x13) = 0x3c23d70a;
                    *(f32 *)(puVar24 + 0x14) = fVar32;
                    *(f32 *)((int)puVar24 + 0xa4) = fVar9;
                    *(f32 *)((int)puVar24 + 0xac) = fVar10;
                    *(float *)(puVar24 + 0x15) = (float)((double)fVar8 + dVar66);
                    iVar33 = CollLine(uVar28 - 0x290,uVar28 - 0x2a0,2,0,0);
                    dVar65 = dVar53;
                    if (iVar33 != 0) {
                      dVar65 = (double)g_CollOutput.ip.z;
                    }
                    dVar65 = (double)(float)(dVar65 - (double)(pMVar43->bSphere).z);
                    if (dVar51 < dVar65) {
                      dVar51 = dVar65;
                    }
                  }
                  iVar31 = iVar31 + 2;
                  pMVar43 = (MobyInstance *)&pMVar43->state;
                  uVar45 = (uVar45 & 0x3fffffff) << 2;
                } while (iVar31 < 4);
              }
              if (dVar51 != dVar53) {
                MB_SetAnimation(param_4,*(undefined2 *)&param_5->frameSpeed,0,10);
                iVar31 = 0;
                pMVar43 = param_5;
                do {
                  if (pMVar43[1].collCount != 0) {
                    *(undefined4 *)(pMVar43[1].collCount + 8) = 0;
                  }
                  if (*(char *)((int)&pMVar43[1].pAnimationLayers + 1) != '\0') {
                    FastQuaternionToEuler(dVar53,&pMVar43[1].field43_0x70,2);
                  }
                  iVar31 = iVar31 + 1;
                  pMVar43[1].pos.y = 0.0;
                  pMVar43 = (MobyInstance *)&pMVar43->collCount;
                } while (iVar31 < 2);
                uVar46 = uVar46 & 0xf ^ 0xf;
              }
            }
          }
          else {
            uVar46 = 5;
            param_5[1].bSphere.y = 0.0;
          }
        }
      }
      else {
        uVar20.piece<0,1>() = param_5->levelFlagIdx;
        uVar20.piece<1,1>() = param_5->field74_0xb1;
        uVar20.piece<2,2>() = param_5->uid;
        MB_SetAnimation(param_4,uVar20,(param_5->transform).v0.x,10);
        iVar31 = 0;
        pMVar43 = param_5;
        do {
          if (pMVar43[1].collCount != 0) {
            *(undefined4 *)(pMVar43[1].collCount + 8) = 0;
          }
          if (*(char *)((int)&pMVar43[1].pAnimationLayers + 1) != '\0') {
            FastQuaternionToEuler(dVar53,&pMVar43[1].field43_0x70,2);
          }
          iVar31 = iVar31 + 1;
          pMVar43[1].pos.y = 0.0;
          pMVar43 = (MobyInstance *)&pMVar43->collCount;
        } while (iVar31 < 2);
        param_5->updateId = '\0';
        param_5->animationId = '\x02';
        param_5[1].bSphere.y = 0.0;
      }
    }
  }
  else if (sVar18 < 2) {
    if ((0.1899999976158142 <= dVar64) || (param_6 != 0)) {
      if (((void *)(uint)param_4->updateId == param_5->pAnimationLayers) &&
         (((double)((float)param_5->pManipulators * 1.35) < dVar64 && ((uVar46 & 10) == 0)))) {
        if ((uVar46 & 1) == 0) {
          fVar8 = (param_5->transform).v3.y;
          iVar31 = FastDoubleToInt
                             ((double)(((((float)(dVar51 - (double)*(float *)&param_5->damage) /
                                         (float)param_5->collQueryStamp) * (param_5->transform).v2.w
                                        + fVar8) - fVar8) - (float)param_5->field80_0xb8));
          iVar33 = FastDoubleToInt
                             ((double)((param_5->transform).v3.w - (float)param_5->field80_0xb8));
          iVar34 = FastDoubleToInt((double)(*(float *)&param_5->setByGroup * 0.1));
        }
        else {
          fVar8 = (param_5->transform).v3.x;
          iVar31 = FastDoubleToInt
                             ((double)(((((float)(dVar51 - (double)(float)param_5->collCount) /
                                         (float)param_5->collisionMesh) * (param_5->transform).v2.z
                                        + fVar8) - fVar8) - (float)param_5->field80_0xb8));
          iVar33 = FastDoubleToInt
                             ((double)((param_5->transform).v3.z - (float)param_5->field80_0xb8));
          iVar34 = FastDoubleToInt((double)(*(float *)&param_5->setByGroup * 0.1));
        }
        uVar46 = 0;
        iVar35 = FastDoubleToInt((double)*(float *)&param_5->setByGroup);
        iVar35 = iVar33 + iVar34 + iVar35;
        iVar33 = FastDoubleToInt((double)*(float *)&param_5->setByGroup);
        iVar35 = iVar35 - (iVar35 / iVar33) * iVar33;
        iVar33 = FastDoubleToInt((double)*(float *)&param_5->setByGroup);
        iVar33 = (iVar35 - iVar31) + iVar33;
        iVar31 = FastDoubleToInt((double)*(float *)&param_5->setByGroup);
        iVar34 = FastDoubleToInt((double)(*(float *)&param_5->setByGroup * 0.1));
        uVar22.piece<0,1>() = param_5->levelFlagIdx;
        uVar22.piece<1,1>() = param_5->field74_0xb1;
        uVar22.piece<2,2>() = param_5->uid;
        MB_SetAnimation(param_4,uVar22,iVar35,(iVar33 - (iVar33 / iVar31) * iVar31) + iVar34);
        iVar31 = 0;
        pMVar43 = param_5;
        do {
          if (pMVar43[1].collCount != 0) {
            *(undefined4 *)(pMVar43[1].collCount + 8) = 0;
          }
          if (*(char *)((int)&pMVar43[1].pAnimationLayers + 1) != '\0') {
            FastQuaternionToEuler(dVar53,&pMVar43[1].field43_0x70,2);
          }
          iVar31 = iVar31 + 1;
          pMVar43[1].pos.y = 0.0;
          pMVar43 = (MobyInstance *)&pMVar43->collCount;
        } while (iVar31 < 2);
        ppMVar47 = (Manipulator **)0x0;
        param_5->updateId = '\0';
        param_5->animationId = '\x02';
        dVar64 = (double)(float)((double)(float)(dVar64 / (double)(float)param_5->pManipulators) *
                                (double)*(float *)&param_5->field76_0xb4);
        param_4->unk58 = ABS((float)(dVar64 / (double)*(float *)&param_5->field76_0xb4));
      }
    }
    else {
      param_5->updateId = '\0';
      param_5->animationId = '\0';
    }
  }
  else if (((((sVar18 < 3) &&
             (uVar23.piece<0,1>() = param_5->levelFlagIdx, uVar23.piece<1,1>() = param_5->field74_0xb1,
             uVar23.piece<2,2>() = param_5->uid, param_4->updateId == uVar23)) &&
            (dVar64 < (double)((float)param_5->pManipulators * 1.15))) &&
           ((dVar64 < (double)((float)param_5->pManipulators * 1.05) || (param_6 == 0)))) &&
          (param_2 < dVar66)) {
    iVar31 = FastDoubleToInt
                       ((double)((((float)(dVar51 - (double)(param_5->transform).v3.x) /
                                  *(float *)&param_5->setByGroup) *
                                  (float)param_5->pCurrentAnimationData + (float)param_5->collCount)
                                - (float)param_5->pPreviousAnimationData));
    iVar33 = FastDoubleToInt((double)(float)param_5->pCurrentAnimationData);
    iVar33 = iVar31 + iVar33 + 4;
    iVar31 = FastDoubleToInt((double)(float)param_5->pCurrentAnimationData);
    MB_SetAnimation(param_4,param_5->pAnimationLayers,iVar33 - (iVar33 / iVar31) * iVar31,10);
    iVar31 = 0;
    pMVar43 = param_5;
    do {
      if (pMVar43[1].collCount != 0) {
        *(undefined4 *)(pMVar43[1].collCount + 8) = 0;
      }
      if (*(char *)((int)&pMVar43[1].pAnimationLayers + 1) != '\0') {
        FastQuaternionToEuler(dVar53,&pMVar43[1].field43_0x70,2);
      }
      iVar31 = iVar31 + 1;
      pMVar43[1].pos.y = 0.0;
      pMVar43 = (MobyInstance *)&pMVar43->collCount;
    } while (iVar31 < 2);
    ppMVar47 = (Manipulator **)0x0;
    param_5->updateId = '\0';
    param_5->animationId = '\x01';
    dVar64 = (double)(float)((double)(float)(dVar64 / (double)*(float *)&param_5->field76_0xb4) *
                            (double)(float)param_5->pManipulators);
    param_4->unk58 = ABS((float)(dVar64 / (double)(float)param_5->pManipulators));
  }
  (param_4->pos).x = (float)((double)(param_4->pos).x + dVar52);
  (param_4->pos).y = (float)((double)(param_4->pos).y + dVar54);
  (param_4->pos).z = (float)((double)(param_4->pos).z + dVar57);
  MB_GetCollPrimWorld
            (param_4,0,uVar28 - 0x1a8,uVar28 - 0x2c0,uVar28 - 0x1b0,uVar28 - 0x1ac);
  dVar51 = (double)((param_4->pos).x - *(float *)(puVar24 + 0xe));
  dVar65 = (double)((param_4->pos).y - *(float *)((int)puVar24 + 0x74));
  dVar57 = (double)((param_4->pos).z - *(float *)(puVar24 + 0xf));
  do {
    iVar31 = CollPill((double)*(float *)(puVar24 + 0x30),
                                (double)*(float *)((int)puVar24 + 0x184),uVar28 - 0x2c0);
    fVar8 = g_CollOutput.push.y;
    if (iVar31 == 0) break;
    iVar42 = iVar42 + 1;
    uVar48 = uVar48 | 1;
    *(float *)(puVar24 + 0xe) = g_CollOutput.push.x;
    fVar2 = g_CollOutput.push.z;
    *(float *)((int)puVar24 + 0x74) = fVar8;
    fVar8 = g_CollOutput.push.w;
    *(float *)(puVar24 + 0xf) = fVar2;
    *(float *)((int)puVar24 + 0x7c) = fVar8;
  } while (iVar42 < 8);
  fVar7 = *(float *)((int)puVar24 + 0x74);
  fVar12 = *(float *)(puVar24 + 0xe);
  fVar8 = (float)((double)fVar7 - (double)(param_4->pos).y);
  fVar2 = (float)((double)fVar12 - (double)(param_4->pos).x);
  fVar11 = *(float *)(puVar24 + 0xf);
  (param_4->pos).w = *(f32 *)((int)puVar24 + 0x7c);
  (param_4->pos).x = (float)((double)fVar12 + dVar51);
  (param_4->pos).y = (float)((double)fVar7 + dVar65);
  (param_4->pos).z = (float)((double)fVar11 + dVar57);
  if (SQRT(fVar2 * fVar2 + fVar8 * fVar8) <
      (float)((double)SQRT((float)(dVar52 * dVar52 + (double)(float)(dVar54 * dVar54))) * dVar66)) {
    uVar48 = uVar48 | 2;
  }
  bVar5 = *(byte *)((int)&param_5[1].pos.x + 1);
  *(uint *)(puVar24 + 0x36) = (uint)*(byte *)&param_5[1].pos.x;
  bVar6 = param_5[1].levelFlagIdx;
  *(uint *)((int)puVar24 + 0x1b4) = (uint)bVar5;
  bVar5 = param_5[1].field74_0xb1;
  *(uint *)(puVar24 + 0x37) = (uint)bVar6;
  fVar32 = param_5[1].bSphere.z;
  *(uint *)((int)puVar24 + 0x1bc) = (uint)bVar5;
  *(f32 *)(puVar24 + 0x38) = fVar32;
  GetMobyJointsWorldPos(param_4,5,uVar28 - 0x180,param_5);
  dVar51 = (double)param_5[1].bSphere.x;
  bVar5 = param_4->animationId;
  uVar19 = *(ushort *)&param_5->frameSpeed;
  if (((uVar46 & 0xf) != 0) && (param_4->unk58 != 0.0)) {
    dVar65 = (double)(param_4->rotation).z;
    dVar67 = (double)(float)(dVar65 + dVar62);
    dVar57 = (double)(float)(dVar55 - dVar65);
    if (dVar65 - (double)(float)(dVar55 - dVar65) < 0.0) {
      dVar57 = dVar65;
    }
    dVar68 = (double)(float)(dVar55 - dVar67);
    if (dVar67 - (double)(float)(dVar55 - dVar67) < 0.0) {
      dVar68 = dVar67;
    }
    dVar69 = (double)(float)(dVar61 - dVar65);
    if ((double)(float)(dVar61 - dVar65) - dVar57 < 0.0) {
      dVar69 = dVar57;
    }
    dVar57 = (double)(float)(dVar61 - dVar67);
    if ((double)(float)(dVar61 - dVar67) - dVar68 < 0.0) {
      dVar57 = dVar68;
    }
    dVar65 = (double)(float)(dVar69 * dVar69);
    dVar67 = (double)(float)(dVar57 * dVar57);
    dVar73 = (double)(float)(dVar65 * (double)(float)(dVar65 * dVar69));
    dVar68 = (double)(float)(dVar67 * (double)(float)(dVar67 * dVar57));
    dVar71 = (double)(float)(dVar65 * dVar73);
    dVar62 = (double)(float)(dVar67 * dVar68);
    if (dVar51 - dVar53 < 0.0) {
      dVar51 = dVar53;
    }
    param_5[1].bSphere.x =
         (float)((double)(float)(dVar51 + (double)((float)((double)(float)((double)(float)(dVar67 * 
                                                  dVar62) * dVar74 +
                                                  (double)(float)(dVar62 * dVar72 +
                                                                 (double)(float)(dVar68 * dVar70 +
                                                                                (double)(float)((
                                                  double)(float)(dVar67 * dVar57) * dVar63 + dVar57)
                                                  ))) * dVar52 +
                                                  (double)(float)((double)(float)((double)(float)(
                                                  dVar65 * dVar71) * dVar74 +
                                                  (double)(float)(dVar71 * dVar72 +
                                                                 (double)(float)(dVar73 * dVar70 +
                                                                                (double)(float)((
                                                  double)(float)(dVar65 * dVar69) * dVar63 + dVar69)
                                                  ))) * dVar54)) / param_4->unk58)) + dVar51) *
         0.33333334;
  }
  if (bVar5 == uVar19) {
    param_4->unk58 = 1.0;
  }
  else if (ppMVar47 != (Manipulator **)0x0) {
    param_4->unk58 = ABS((float)(dVar64 / (double)(float)ppMVar47[1]));
  }
  return uVar48;
}


// 0x0103710 (0x3a0 bytes)
// inlined: FastAtan2 @0x10382c
uint MB_UpdateLegAnimMoveTurning
               (undefined8 param_1,MobyInstance *param_2,ulonglong param_3,MobyInstance *param_4,
               Vec4 *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  undefined4 uVar8;
  ulonglong *puVar9;
  int iVar10;
  float fVar11;
  int iVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  uint uVar16;
  longlong lVar17;
  float *pfVar18;
  longlong lVar19;
  ulonglong uVar20;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  uint uVar21;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar22;
  double dVar23;
  ulonglong in_f29;
  double dVar24;
  ulonglong in_f30;
  ulonglong in_f31;
  GPiece<16> auVar25;
  GPiece<16> auVar26;
  GPiece<16> auVar27;
  
  uVar13 = ZEXT48(&stack0x00000000);
  lVar15 = uVar13 - 0x100;
  puVar9 = (ulonglong *)lVar15;
  *puVar9 = uVar13;
  puVar9[0x22] = in_LR;
  puVar9[0x1d] = in_f29;
  puVar9[0x1e] = in_f30;
  puVar9[0x1f] = in_f31;
  fVar1 = param_5->x - (param_2->pos).x;
  fVar2 = param_5->y - (param_2->pos).y;
  puVar9[0x18] = unaff_r27;
  puVar9[0x17] = unaff_r26;
  uVar21 = 0;
  puVar9[0x1c] = unaff_r31;
  fVar4 = ABS(fVar1);
  fVar3 = ABS(fVar2);
  *(float *)(puVar9 + 0xe) = fVar1;
  puVar9[0x1b] = unaff_r30;
  *(float *)((int)puVar9 + 0x74) = fVar2;
  puVar9[0x1a] = unaff_r29;
  puVar9[0x19] = unaff_r28;
  *(float *)(puVar9 + 0xf) = fVar4 - fVar3;
  dVar24 = 0.0;
  iVar10 = (int)param_3;
  fVar1 = *(float *)(iVar10 + 0x3c);
  fVar2 = *(float *)(iVar10 + 0x40);
  uVar20 = (ulonglong)(*(uint *)(puVar9 + 0xe) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar9 + 0xf) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar9 + 0x74) >> 0x1d) & 4;
  fVar5 = ABS(*(float *)(puVar9 + 0xe));
  if (*(float *)(puVar9 + 0xf) - 0.0 < 0.0) {
    fVar5 = fVar3;
  }
  fVar3 = *(float *)(iVar10 + 0x44);
  fVar6 = *(float *)(&g_atanQuadrantTable + (int)(uVar20 << 2));
  fVar11 = ABS(*(float *)((int)puVar9 + 0x74));
  if (*(float *)(puVar9 + 0xf) - 0.0 < 0.0) {
    fVar11 = fVar4;
  }
  fVar4 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
  uVar20 = param_3;
  dVar23 = dVar24;
  if (0.0 < fVar5) {
    lVar14 = uVar13 - 0xf0;
    lVar19 = uVar13 - 0x74;
    lVar17 = uVar13 - 0x84;
    lVar22 = 2;
    fVar5 = (fVar11 - fVar5) / (fVar11 + fVar5);
    fVar11 = fVar5 * fVar5;
    *(float *)(puVar9 + 0x11) = fVar5;
    *(float *)(puVar9 + 0x10) = fVar5;
    *(float *)((int)puVar9 + 0x84) = fVar5;
    *(float *)((int)puVar9 + 0x7c) = fVar5;
    fVar5 = fVar11 * fVar11;
    *(float *)(puVar9 + 0x10) = *(float *)(puVar9 + 0x10) * fVar11;
    *(float *)((int)puVar9 + 0x84) = *(float *)((int)puVar9 + 0x84) * fVar5;
    *(float *)(puVar9 + 0x11) = *(float *)(puVar9 + 0x11) * fVar5 * fVar11;
    do {
      *(float *)((int)lVar14 + 0x7c) = *(float *)((int)lVar14 + 0x6c) * fVar5 * fVar5;
      iVar7 = (int)lVar17;
      lVar17 = lVar17 + 8;
      lVar14 = lVar14 + 8;
      *(float *)((int)lVar19 + 4) = *(float *)(iVar7 + 4) * fVar5 * fVar5;
      lVar19 = lVar19 + 8;
      lVar22 = lVar22 + -1;
    } while (lVar22 != 0);
    lVar22 = 4;
    lVar19 = uVar13 - 0x84;
    uVar20 = ZEXT48(&DAT_007358e0);
    lVar14 = lVar15;
    lVar17 = lVar19;
    do {
      pfVar18 = (float *)uVar20;
      fVar5 = pfVar18[1];
      uVar20 = uVar20 + 8;
      *(float *)((int)lVar14 + 0x7c) = *(float *)((int)lVar14 + 0x7c) * *pfVar18;
      lVar14 = lVar14 + 8;
      *(float *)((int)lVar17 + 4) = *(float *)((int)lVar17 + 4) * fVar5;
      lVar17 = lVar17 + 8;
      lVar22 = lVar22 + -1;
    } while (lVar22 != 0);
    lVar14 = 2;
    do {
      iVar7 = (int)lVar15;
      iVar12 = (int)lVar19;
      lVar15 = lVar15 + 0x10;
      lVar19 = lVar19 + 0x10;
      dVar23 = (double)((float)(dVar23 + (double)*(float *)(iVar7 + 0x7c)) + *(float *)(iVar12 + 4)
                        + *(float *)(iVar12 + 8) + *(float *)(iVar12 + 0xc));
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
    dVar23 = (double)((float)(dVar23 + 0.7853981852531433) * fVar6 + fVar4);
  }
  OrganicDeltAngSpeed(dVar23,(double)fVar1,(double)fVar2,(double)fVar3,param_2,uVar20,param_3 + 0x14
                     );
  dVar23 = (double)FastSubRots((float)dVar23,(param_2->rotation).z);
  if ((double)*(float *)(iVar10 + 0x28) <= dVar23) {
    uVar21 = 0x10;
  }
  FastDecTimerS32(param_3 + 0x48);
  iVar7 = *(int *)(iVar10 + 0x48);
  if (dVar23 < (double)*(float *)(iVar10 + 0x28)) {
    auVar25 = ZEXT416(0xffffffff);
    auVar25 = auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60;
    auVar26 = vectorShiftLeftIntegerWord(auVar25,auVar25);
    auVar25 = loadVectorLeftIndexed(8,0x1036f8);
    auVar25 = auVar25 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar27 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar25 = vectorMultiplyAddFloatingPoint
                        (auVar27,auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60,
                         auVar26);
    auVar25 = vectorConvertToSignedFixedPointWordSaturate(auVar25,0);
    puVar9[0x14] = (longlong)(int)(animationSpeed * 4.5);
    if (iVar7 < *(int *)((int)puVar9 + 0xa4)) {
      auVar25 = auVar25 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar8 = storeVectorElementWordIndexed
                        (auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60,0x48,param_3)
      ;
      *(undefined4 *)(iVar10 + 0x48U & 0xfffffffc) = uVar8;
    }
  }
  uVar16 = MB_UpdateLegAnimState(param_1,0x3fd3333340000000,dVar24,param_2,param_4,1);
  if (0.10000000149011612 < dVar23) {
    uVar16 = uVar16 & 0xfffffffd;
  }
  uVar21 = uVar21 | uVar16;
  fVar2 = (param_2->pos).y - param_5->y;
  fVar1 = (param_2->pos).x - param_5->x;
  fVar5 = (param_2->pos).z - param_5->z;
  if (SQRT(fVar5 * fVar5 + fVar1 * fVar1 + fVar2 * fVar2) < *(float *)(iVar10 + 0x2c)) {
    uVar21 = uVar21 | 4;
  }
  return uVar21;
}


// 0x0103ab0 (0x54 bytes)
void MB_LerpRot(double param_1,undefined8 param_2,double param_3)

{
  double dVar1;
  
  dVar1 = (double)FastDiffRots(param_2,param_1);
  FastWrapRot((float)param_1,(float)(param_3 * dVar1));
  return;
}


// 0x0103b50 (0x6c4 bytes)
// inlined: FastAtan2 @0x103d44, FastAtan2 @0x103ee0
ulonglong MB_OrbitAndFaceTarget
                    (double param_1,double param_2,MobyInstance *param_3,MobyInstance *param_4,
                    float *param_5,undefined8 param_6,undefined8 param_7,Vec4 *param_8)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  ulonglong *puVar9;
  int iVar10;
  int iVar11;
  float fVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  float *pfVar18;
  longlong lVar17;
  ulonglong uVar19;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong uVar20;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  ulonglong in_f27;
  ulonglong in_f28;
  ulonglong in_f29;
  ulonglong in_f30;
  ulonglong in_f31;
  
  uVar13 = ZEXT48(&stack0x00000000);
  lVar15 = uVar13 - 0x140;
  puVar9 = (ulonglong *)lVar15;
  *puVar9 = uVar13;
  puVar9[0x2a] = in_LR;
  puVar9[0x23] = in_f27;
  puVar9[0x24] = in_f28;
  puVar9[0x25] = in_f29;
  puVar9[0x26] = in_f30;
  puVar9[0x27] = in_f31;
  fVar1 = (float)(param_1 + 1.570796251296997);
  puVar9[0x1e] = unaff_r27;
  puVar9[0x22] = unaff_r31;
  uVar20 = 0;
  puVar9[0x1c] = unaff_r25;
  puVar9[0x21] = unaff_r30;
  dVar24 = (double)(float)(3.141592502593994 - param_1);
  if (param_1 - (double)(float)(3.141592502593994 - param_1) < 0.0) {
    dVar24 = param_1;
  }
  puVar9[0x20] = unaff_r29;
  fVar2 = 3.1415925 - fVar1;
  if (fVar1 - (3.1415925 - fVar1) < 0.0) {
    fVar2 = fVar1;
  }
  puVar9[0x1f] = unaff_r28;
  dVar23 = (double)(float)(-3.141592502593994 - param_1);
  if ((double)(float)(-3.141592502593994 - param_1) - dVar24 < 0.0) {
    dVar23 = dVar24;
  }
  fVar5 = -3.1415925 - fVar1;
  if ((-3.1415925 - fVar1) - fVar2 < 0.0) {
    fVar5 = fVar2;
  }
  dVar24 = (double)(float)(dVar23 * dVar23);
  fVar7 = fVar5 * fVar5;
  dVar26 = (double)(float)(dVar24 * (double)(float)(dVar24 * dVar23));
  fVar3 = param_5[2];
  fVar4 = param_5[3];
  fVar2 = fVar7 * fVar7 * fVar5;
  dVar25 = (double)(float)(dVar24 * dVar26);
  fVar6 = fVar7 * fVar2;
  fVar1 = (float)((double)((float)(dVar24 * dVar25) * 2.601887e-06 +
                          (float)(dVar25 * -0.0001980741071747616 +
                                 (double)(float)(dVar26 * 0.008333025500178337 +
                                                (double)(float)((double)(float)(dVar24 * dVar23) *
                                                                -0.16666656732559204 + dVar23)))) *
                  param_2 + (double)param_5[1]);
  fVar2 = (float)((double)(fVar7 * fVar6 * 2.601887e-06 +
                          fVar6 * -0.0001980741 +
                          fVar2 * 0.0083330255 + fVar7 * fVar5 * -0.16666657 + fVar5) * param_2 +
                 (double)*param_5);
  *(float *)((int)puVar9 + 0x74) = fVar1;
  dVar24 = 0.0;
  param_8->w = 0.0;
  param_8->z = 0.0;
  param_8->y = 0.0;
  param_8->x = 0.0;
  fVar5 = (param_3->pos).x;
  fVar6 = (param_3->pos).y;
  fVar7 = fVar2 - fVar5;
  fVar1 = fVar1 - fVar6;
  fVar12 = ABS(fVar7);
  fVar8 = ABS(fVar1);
  *(float *)((int)puVar9 + 0x8c) = fVar7;
  *(float *)(puVar9 + 0x12) = fVar1;
  *(float *)(puVar9 + 0xe) = fVar2;
  *(float *)((int)puVar9 + 0x94) = fVar12 - fVar8;
  *(float *)((int)puVar9 + 0x7c) = fVar4;
  *(float *)(puVar9 + 0xf) = fVar3;
  fVar1 = *param_5;
  fVar2 = param_5[1];
  uVar19 = (ulonglong)(*(uint *)((int)puVar9 + 0x8c) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)((int)puVar9 + 0x94) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)(puVar9 + 0x12) >> 0x1d) & 4;
  fVar3 = *(float *)(&g_atanQuadrantTable + (int)(uVar19 << 2));
  fVar4 = ABS(*(float *)((int)puVar9 + 0x8c));
  if (*(float *)((int)puVar9 + 0x94) - 0.0 < 0.0) {
    fVar4 = fVar8;
  }
  fVar7 = *(float *)(((uint)(uVar19 << 2) | 0x735900) + 4);
  fVar8 = ABS(*(float *)(puVar9 + 0x12));
  if (*(float *)((int)puVar9 + 0x94) - 0.0 < 0.0) {
    fVar8 = fVar12;
  }
  puVar9[0x1d] = unaff_r26;
  dVar23 = dVar24;
  if (0.0 < fVar4) {
    lVar14 = uVar13 - 0x130;
    lVar16 = uVar13 - 0x88;
    lVar17 = uVar13 - 0x78;
    lVar21 = 2;
    fVar4 = (fVar8 - fVar4) / (fVar8 + fVar4);
    fVar8 = fVar4 * fVar4;
    *(float *)((int)puVar9 + 0xc4) = fVar4;
    *(float *)((int)puVar9 + 0xbc) = fVar4;
    *(float *)(puVar9 + 0x18) = fVar4;
    *(float *)(puVar9 + 0x17) = fVar4;
    fVar4 = fVar8 * fVar8;
    *(float *)((int)puVar9 + 0xbc) = *(float *)((int)puVar9 + 0xbc) * fVar8;
    *(float *)(puVar9 + 0x18) = *(float *)(puVar9 + 0x18) * fVar4;
    *(float *)((int)puVar9 + 0xc4) = *(float *)((int)puVar9 + 0xc4) * fVar4 * fVar8;
    do {
      *(float *)((int)lVar14 + 0xb8) = *(float *)((int)lVar14 + 0xa8) * fVar4 * fVar4;
      iVar10 = (int)lVar16;
      lVar14 = lVar14 + 8;
      lVar16 = lVar16 + 8;
      *(float *)((int)lVar17 + 4) = *(float *)(iVar10 + 4) * fVar4 * fVar4;
      lVar17 = lVar17 + 8;
      lVar21 = lVar21 + -1;
    } while (lVar21 != 0);
    lVar21 = 4;
    lVar17 = uVar13 - 0x88;
    pfVar18 = (float *)&DAT_007358e0;
    lVar14 = lVar15;
    lVar16 = lVar17;
    do {
      fVar4 = *pfVar18;
      fVar8 = pfVar18[1];
      pfVar18 = pfVar18 + 2;
      *(float *)((int)lVar14 + 0xb8) = *(float *)((int)lVar14 + 0xb8) * fVar4;
      lVar14 = lVar14 + 8;
      *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar8;
      lVar16 = lVar16 + 8;
      lVar21 = lVar21 + -1;
    } while (lVar21 != 0);
    lVar16 = 2;
    lVar14 = lVar15;
    do {
      iVar10 = (int)lVar14;
      lVar14 = lVar14 + 0x10;
      iVar11 = (int)lVar17;
      lVar17 = lVar17 + 0x10;
      dVar23 = (double)((float)(dVar23 + (double)*(float *)(iVar10 + 0xb8)) + *(float *)(iVar11 + 4)
                        + *(float *)(iVar11 + 8) + *(float *)(iVar11 + 0xc));
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
    dVar23 = (double)((float)(dVar23 + 0.7853981852531433) * fVar3 + fVar7);
  }
  fVar5 = fVar5 - fVar1;
  fVar6 = fVar6 - fVar2;
  fVar3 = ABS(fVar5);
  fVar2 = ABS(fVar6);
  *(float *)(puVar9 + 0x10) = fVar5;
  *(float *)((int)puVar9 + 0x84) = fVar6;
  *(float *)(puVar9 + 0x11) = fVar3 - fVar2;
  uVar19 = (ulonglong)(*(uint *)(puVar9 + 0x10) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar9 + 0x11) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar9 + 0x84) >> 0x1d) & 4;
  fVar1 = ABS(*(float *)(puVar9 + 0x10));
  if (*(float *)(puVar9 + 0x11) - 0.0 < 0.0) {
    fVar1 = fVar2;
  }
  fVar2 = *(float *)(&g_atanQuadrantTable + (int)(uVar19 << 2));
  fVar5 = ABS(*(float *)((int)puVar9 + 0x84));
  if (*(float *)(puVar9 + 0x11) - 0.0 < 0.0) {
    fVar5 = fVar3;
  }
  fVar3 = *(float *)(((uint)(uVar19 << 2) | 0x735900) + 4);
  dVar25 = dVar24;
  if (0.0 < fVar1) {
    lVar14 = uVar13 - 0x130;
    lVar17 = uVar13 - 0x98;
    lVar16 = uVar13 - 0xa8;
    lVar21 = 2;
    fVar1 = (fVar5 - fVar1) / (fVar5 + fVar1);
    fVar5 = fVar1 * fVar1;
    *(float *)((int)puVar9 + 0xa4) = fVar1;
    *(float *)((int)puVar9 + 0x9c) = fVar1;
    *(float *)(puVar9 + 0x14) = fVar1;
    *(float *)(puVar9 + 0x13) = fVar1;
    fVar1 = fVar5 * fVar5;
    *(float *)((int)puVar9 + 0x9c) = *(float *)((int)puVar9 + 0x9c) * fVar5;
    *(float *)(puVar9 + 0x14) = *(float *)(puVar9 + 0x14) * fVar1;
    *(float *)((int)puVar9 + 0xa4) = *(float *)((int)puVar9 + 0xa4) * fVar1 * fVar5;
    do {
      *(float *)((int)lVar14 + 0x98) = *(float *)((int)lVar14 + 0x88) * fVar1 * fVar1;
      iVar10 = (int)lVar16;
      lVar16 = lVar16 + 8;
      lVar14 = lVar14 + 8;
      *(float *)((int)lVar17 + 4) = *(float *)(iVar10 + 4) * fVar1 * fVar1;
      lVar17 = lVar17 + 8;
      lVar21 = lVar21 + -1;
    } while (lVar21 != 0);
    lVar21 = 4;
    lVar17 = uVar13 - 0xa8;
    pfVar18 = (float *)&DAT_007358e0;
    lVar14 = lVar15;
    lVar16 = lVar17;
    do {
      fVar1 = *pfVar18;
      fVar5 = pfVar18[1];
      pfVar18 = pfVar18 + 2;
      *(float *)((int)lVar14 + 0x98) = *(float *)((int)lVar14 + 0x98) * fVar1;
      lVar14 = lVar14 + 8;
      *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar5;
      lVar16 = lVar16 + 8;
      lVar21 = lVar21 + -1;
    } while (lVar21 != 0);
    lVar14 = 2;
    do {
      iVar10 = (int)lVar15;
      iVar11 = (int)lVar17;
      lVar15 = lVar15 + 0x10;
      lVar17 = lVar17 + 0x10;
      dVar25 = (double)((float)(dVar25 + (double)*(float *)(iVar10 + 0x98)) + *(float *)(iVar11 + 4)
                        + *(float *)(iVar11 + 8) + *(float *)(iVar11 + 0xc));
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
    dVar25 = (double)((float)(dVar25 + 0.7853981852531433) * fVar2 + fVar3);
  }
  dVar26 = (double)FastSubRots((float)param_1,(float)dVar25);
  fVar1 = (param_3->pos).x;
  fVar2 = *param_5;
  fVar5 = (param_3->pos).y;
  fVar3 = param_5[1];
  if (param_2 < (double)SQRT((fVar1 - fVar2) * (fVar1 - fVar2) + (fVar5 - fVar3) * (fVar5 - fVar3)))
  {
    dVar25 = (double)FastWrapRot((float)dVar25,3.1415927);
    fVar1 = (param_3->pos).x;
    fVar2 = *param_5;
    fVar5 = (param_3->pos).y;
    fVar3 = param_5[1];
  }
  dVar22 = ABS((double)(float)((double)(float)(param_2 -
                                              (double)SQRT((fVar1 - fVar2) * (fVar1 - fVar2) +
                                                           (fVar5 - fVar3) * (fVar5 - fVar3))) /
                              param_2));
  if (1.0 - dVar22 < 0.0) {
    dVar22 = 1.0;
  }
  if (dVar22 - dVar24 < 0.0) {
    dVar22 = dVar24;
  }
  if (0.3490658402442932 <= dVar26) {
    dVar23 = (double)FastDiffRots(param_1,dVar25);
    if (dVar23 <= dVar24) {
      dVar23 = (double)FastWrapRot((float)dVar25,-1.5707964);
      dVar24 = dVar22;
    }
    else {
      dVar23 = (double)FastWrapRot((float)dVar25,1.5707964);
      dVar24 = dVar22;
    }
  }
  dVar25 = (double)FastDiffRots(dVar25,dVar23);
  dVar24 = (double)FastWrapRot((float)dVar23,(float)(dVar24 * dVar25));
  OrganicDeltAngSpeed(dVar24,(double)(DAT_0071f40c * 0.02),(double)(DAT_0071f408 * 0.3),
                      (double)(DAT_0071f408 * 0.15),param_3,&DAT_00720000,
                      (longlong)(int)param_4 + 0x14);
  dVar24 = (double)FastSubRots((float)dVar24,(param_3->rotation).z);
  dVar23 = (double)(float)param_4->pChain;
  if ((dVar24 < dVar23) &&
     (uVar20 = MB_UpdateNavMove((double)(float)((double)(float)(dVar23 - dVar24) / dVar23),param_3,
                                param_4,puVar9 + 0xe,param_8), 0.10000000149011612 < dVar24)) {
    uVar20 = uVar20 & 0xfffffffffffffffd;
  }
  return uVar20;
}


// 0x0104214 (0x84 bytes)
int MB_CountActiveMobysByGroup(longlong group,uint state)

{
  ushort *mobyidx;
  int cnt;
  ushort next;
  
  mobyidx = *(ushort **)((int)&g_MobyGroups + (int)(group << 2));
  if (mobyidx == (ushort *)0x0) {
    cnt = 0;
  }
  else {
    cnt = 0;
    do {
      if ((g_MobyInstance[*mobyidx & 0x7fff].state < 0x80) &&
         ((state == 0xffffffff || (g_MobyInstance[*mobyidx & 0x7fff].state != state)))) {
        cnt = cnt + 1;
      }
      next = *mobyidx;
      mobyidx = mobyidx + 1;
    } while (-1 < (short)next);
  }
  return cnt;
}


// 0x0104298 (0x54 bytes)
void MB_SetGroupField(longlong group,char arg)

{
  ushort uVar1;
  ushort *puVar2;
  
  puVar2 = *(ushort **)((int)&g_MobyGroups + (int)(group << 2));
  if (puVar2 != (ushort *)0x0) {
    do {
      g_MobyInstance[*puVar2 & 0x7fff].setByGroup = arg;
      uVar1 = *puVar2;
      puVar2 = puVar2 + 1;
    } while (-1 < (short)uVar1);
  }
  return;
}


// 0x01042ec (0x60 bytes)
void MB_SetStateByGroup(longlong group,u8 state)

{
  ushort uVar1;
  ushort *puVar2;
  
  puVar2 = *(ushort **)((int)&g_MobyGroups + (int)(group << 2));
  if (puVar2 != (ushort *)0x0) {
    do {
      if (g_MobyInstance[*puVar2 & 0x7fff].state < 0x80) {
        g_MobyInstance[*puVar2 & 0x7fff].state = state;
      }
      uVar1 = *puVar2;
      puVar2 = puVar2 + 1;
    } while (-1 < (short)uVar1);
  }
  return;
}


// 0x010434c (0xe4 bytes)
void MB_SetGroupActive(int group,int update,int enable,int collision)

{
  ushort uVar1;
  uint uVar2;
  MobyInstance *pMVar3;
  ushort *puVar4;
  MobyModeBit MVar5;
  
  puVar4 = *(ushort **)((int)&g_MobyGroups + (int)((longlong)group << 2));
  if (puVar4 != (ushort *)0x0) {
    do {
      pMVar3 = g_MobyInstance;
      uVar2 = *puVar4 & 0x7fff;
      if (g_MobyInstance[uVar2].state < 0x80) {
        if (update != -1) {
          if (update == 0) {
            MVar5 = g_MobyInstance[uVar2].modeBits | NO_UPDATE;
          }
          else {
            MVar5 = g_MobyInstance[uVar2].modeBits &
                    (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|
                     DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|
                     HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|DISABLED);
          }
          g_MobyInstance[uVar2].modeBits = MVar5;
        }
        if (enable != -1) {
          if (enable == 0) {
            pMVar3[uVar2].enabled = '\0';
            pMVar3[uVar2].modeBits = pMVar3[uVar2].modeBits | DISABLED;
          }
          else {
            pMVar3[uVar2].enabled = '\x01';
            pMVar3[uVar2].modeBits =
                 pMVar3[uVar2].modeBits &
                 (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|
                  DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|
                  HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|NO_UPDATE);
          }
        }
        if (collision != -1) {
          if (collision == 0) {
            pMVar3[uVar2].collision = (ushort *)0x0;
          }
          else {
            pMVar3[uVar2].collision = (pMVar3[uVar2].pClass)->collision;
          }
        }
      }
      uVar1 = *puVar4;
      puVar4 = puVar4 + 1;
    } while (-1 < (short)uVar1);
  }
  return;
}


// 0x0104430 (0xd4 bytes)
void MB_SetClassActive(MOBY_OCLASSES oClass,int update,int enable,int collision)

{
  MobyInstance *pMVar1;
  MobyModeBit MVar2;
  
  pMVar1 = g_MobyInstance;
  if (g_MobyInstance <= MobyInstanceEnd) {
    do {
      if ((pMVar1->oClass == oClass) && (pMVar1->state < 0x80)) {
        if (update != -1) {
          if (update == 0) {
            MVar2 = pMVar1->modeBits | NO_UPDATE;
          }
          else {
            MVar2 = pMVar1->modeBits &
                    (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|
                     DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|
                     HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|DISABLED);
          }
          pMVar1->modeBits = MVar2;
        }
        if (enable != -1) {
          if (enable == 0) {
            pMVar1->enabled = '\0';
            pMVar1->modeBits = pMVar1->modeBits | DISABLED;
          }
          else {
            pMVar1->enabled = '\x01';
            pMVar1->modeBits =
                 pMVar1->modeBits &
                 (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|
                  DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|
                  HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|NO_UPDATE);
          }
        }
        if (collision != -1) {
          if (collision == 0) {
            pMVar1->collision = (ushort *)0x0;
          }
          else {
            pMVar1->collision = pMVar1->pClass->collision;
          }
        }
      }
      pMVar1 = pMVar1 + 1;
    } while (pMVar1 <= MobyInstanceEnd);
  }
  return;
}


// 0x0104504 (0x4c bytes)
void MB_SetStateForClass(MOBY_OCLASSES oClass,u8 state)

{
  MobyInstance *end;
  MobyInstance *pMoby;
  
  end = MobyInstanceEnd;
  pMoby = g_MobyInstance;
  if (g_MobyInstance <= MobyInstanceEnd) {
    do {
      if ((pMoby->oClass == oClass) && (pMoby->state < 0x80)) {
        pMoby->state = state;
        end = MobyInstanceEnd;
      }
      pMoby = pMoby + 1;
    } while (pMoby <= end);
  }
  return;
}


// 0x0104550 (0x11c bytes)
void MB_SetClassListActive(MOBY_OCLASSES *oClassList,int update,int enable,int collision)

{
  MOBY_OCLASSES MVar1;
  MOBY_OCLASSES *pMVar2;
  int iVar3;
  MobyInstance *pMVar4;
  MobyModeBit MVar5;
  
  pMVar4 = g_MobyInstance;
  if (g_MobyInstance <= MobyInstanceEnd) {
    do {
      iVar3 = 0;
      for (pMVar2 = oClassList;
          (MVar1 = *pMVar2, MVar1 != RATCHET && ((short)MVar1 < 0x800 && iVar3 < 0xe0));
          pMVar2 = pMVar2 + 1) {
        if ((pMVar4->oClass == MVar1) && (pMVar4->state < 0x80)) {
          if (update != -1) {
            if (update == 0) {
              MVar5 = pMVar4->modeBits | NO_UPDATE;
            }
            else {
              MVar5 = pMVar4->modeBits &
                      (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|
                       DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|
                       HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|DISABLED);
            }
            pMVar4->modeBits = MVar5;
          }
          if (enable != -1) {
            if (enable == 0) {
              pMVar4->enabled = '\0';
              pMVar4->modeBits = pMVar4->modeBits | DISABLED;
            }
            else {
              pMVar4->enabled = '\x01';
              pMVar4->modeBits =
                   pMVar4->modeBits &
                   (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|
                    DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS
                    |HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|NO_UPDATE);
            }
          }
          if (collision != -1) {
            if (collision == 0) {
              pMVar4->collision = (ushort *)0x0;
            }
            else {
              pMVar4->collision = pMVar4->pClass->collision;
            }
          }
        }
        iVar3 = iVar3 + 1;
      }
      pMVar4 = pMVar4 + 1;
    } while (pMVar4 <= MobyInstanceEnd);
  }
  return;
}


// 0x010466c (0x190 bytes)
int MB_GetNextMobyInGroup
              (MobyInstance **out,MobyInstance *cur,char includeDead,char deadOnly)

{
  bool bVar1;
  short *psVar2;
  
  *out = (MobyInstance *)0x0;
  if (cur == g_GroupIterMoby) {
    if (*g_GroupIterPtr < 0) {
      return -1;
    }
  }
  else {
    if (g_NumMobyGroups < (int)(uint)(byte)cur->group) {
      return -1;
    }
    if ((&g_MobyGroups)[(byte)cur->group] == 0) {
      g_GroupIterPtr = (short *)0x0;
      g_GroupIterMoby = (MobyInstance *)0x0;
      return -1;
    }
    psVar2 = (short *)((&g_MobyGroups)[(byte)cur->group] + -2);
    do {
      g_GroupIterPtr = psVar2 + 1;
      g_GroupIterIdx = psVar2[1] & 0x7fff;
      g_GroupIterMoby =
           (MobyInstance *)
           ((int)&(g_MobyInstance->bSphere).x + (int)((longlong)(short)g_GroupIterIdx << 8));
      if (psVar2[1] < 0) {
        return -1;
      }
      psVar2 = g_GroupIterPtr;
    } while (cur != g_GroupIterMoby);
  }
  while( true ) {
    g_GroupIterIdx = g_GroupIterPtr[1] & 0x7fff;
    g_GroupIterMoby =
         (MobyInstance *)
         ((int)&(g_MobyInstance->bSphere).x + (int)((longlong)(short)g_GroupIterIdx << 8));
    g_GroupIterPtr = g_GroupIterPtr + 1;
    *out = g_GroupIterMoby;
    bVar1 = g_GroupIterMoby->state < 0x80;
    if ((((includeDead == '\0') && (deadOnly == '\0')) && (bVar1)) ||
       ((includeDead != '\0' && ((deadOnly == '\0' || (!bVar1)))))) break;
    if (*g_GroupIterPtr < 0) {
      *out = (MobyInstance *)0x0;
      return -1;
    }
  }
  return 0;
}


// 0x0104800 (0x118 bytes)
int MB_GetFirstMobyInGroup(MobyInstance **out,int group,char includeDead,char deadOnly)

{
  bool bVar1;
  int iVar2;
  
  if (group < 0) {
    *out = (MobyInstance *)0x0;
    return -1;
  }
  if (g_NumMobyGroups < group) {
    *out = (MobyInstance *)0x0;
    return -1;
  }
  *out = (MobyInstance *)0x0;
  g_GroupIterPtr = *(ushort **)((int)&g_MobyGroups + (int)((longlong)group << 2));
  if (g_GroupIterPtr == (ushort *)0x0) {
    g_GroupIterMoby = (MobyInstance *)0x0;
    return -1;
  }
  g_GroupIterIdx = *g_GroupIterPtr & 0x7fff;
  g_GroupIterMoby =
       (MobyInstance *)
       ((int)&(g_MobyInstance->bSphere).x + (int)((longlong)(short)g_GroupIterIdx << 8));
  *out = g_GroupIterMoby;
  bVar1 = 0x7f < g_GroupIterMoby->state;
  if (includeDead == '\0') {
    if ((deadOnly != '\0') || (bVar1)) {
LAB_001048f0:
      iVar2 = MB_GetNextMobyInGroup(out,g_GroupIterMoby,includeDead,deadOnly);
      return iVar2;
    }
  }
  else if ((deadOnly != '\0') && (!bVar1)) goto LAB_001048f0;
  return 0;
}


// 0x010491c (0x10c bytes)
MobyInstance * MB_GetOtherMobyInGroup(MobyInstance *moby)

{
  int iVar1;
  MobyInstance *local_10 [2];
  
  if ((int)(uint)(byte)moby->group <= g_NumMobyGroups) {
    g_GroupIterPtr = (ushort *)(&g_MobyGroups)[(byte)moby->group];
    g_GroupIterMoby = (MobyInstance *)0x0;
    if (g_GroupIterPtr != (ushort *)0x0) {
      g_GroupIterIdx = *g_GroupIterPtr & 0x7fff;
      g_GroupIterMoby = g_MobyInstance + (short)g_GroupIterIdx;
      local_10[0] = g_GroupIterMoby;
      if ((g_GroupIterMoby->state < 0x80) ||
         (iVar1 = MB_GetNextMobyInGroup(local_10,g_GroupIterMoby,'\0','\0'), iVar1 != -1)) {
        if (local_10[0] != moby) {
          return local_10[0];
        }
        iVar1 = MB_GetNextMobyInGroup(local_10,local_10[0],'\0','\0');
        if (iVar1 != -1) {
          return local_10[0];
        }
      }
    }
  }
  return (MobyInstance *)0x0;
}


// 0x0104a28 (0x10c bytes)
int MB_IsFirstMobyInGroup(MobyInstance *moby,int group,char includeDead,char deadOnly)

{
  bool bVar1;
  MobyInstance *local_10 [2];
  
  if (group < 0) {
    local_10[0] = (MobyInstance *)0x0;
  }
  else if (g_NumMobyGroups < group) {
    local_10[0] = (MobyInstance *)0x0;
  }
  else {
    local_10[0] = (MobyInstance *)0x0;
    g_GroupIterMoby = (MobyInstance *)0x0;
    g_GroupIterPtr = *(ushort **)((int)&g_MobyGroups + (int)((longlong)group << 2));
    if (g_GroupIterPtr != (ushort *)0x0) {
      g_GroupIterIdx = *g_GroupIterPtr & 0x7fff;
      g_GroupIterMoby =
           (MobyInstance *)
           ((int)&(g_MobyInstance->bSphere).x + (int)((longlong)(short)g_GroupIterIdx << 8));
      bVar1 = 0x7f < g_GroupIterMoby->state;
      local_10[0] = g_GroupIterMoby;
      if (includeDead == '\0') {
        if ((deadOnly == '\0') && (!bVar1)) goto LAB_00104b10;
      }
      else if ((deadOnly == '\0') || (bVar1)) goto LAB_00104b10;
      MB_GetNextMobyInGroup(local_10,g_GroupIterMoby,includeDead,deadOnly);
    }
  }
LAB_00104b10:
  return (((int)local_10[0] - (int)moby) == 0);
}


// 0x0104b38 (0x44 bytes)
ulonglong DecAlpha(uint *param_1,longlong param_2)

{
  ulonglong uVar1;
  
  param_2 = ((int)*param_1 >> 0x18) - param_2;
  uVar1 = param_2 + ((longlong)(int)param_2 >> 0x3f & -param_2);
  *param_1 = (uint)((uVar1 & 0xffffffff) << 0x18) | *param_1 & 0xffffff;
  return (ulonglong)(LZCOUNT((int)uVar1) << 0x20) >> 0x25;
}


// 0x0104b7c (0xa8 bytes)
double MB_BallisticTicksToHeight
                 (double param_1,int param_2,int param_3,undefined8 param_4,int *param_5)

{
  int iVar1;
  double dVar2;
  double dVar3;
  
  iVar1 = FastDoubleToInt((double)(float)((double)*(float *)(param_3 + 8) / param_1));
  dVar3 = (double)*(float *)(param_2 + 8);
  dVar2 = (double)FastIntToDouble();
  dVar3 = (double)(float)((double)*(float *)(param_3 + 8) * dVar2 + dVar3);
  dVar2 = (double)FastIntToDouble
                            (dVar2,(double)*(float *)(param_3 + 8),iVar1 * iVar1 + iVar1 >> 1);
  if (param_5 != (int *)0x0) {
    *param_5 = iVar1;
  }
  return -(double)(float)(dVar2 * param_1 - dVar3);
}


// 0x0104c24 (0xdc bytes)
void MB_BallisticPosAtTicks
               (double param_1,float *param_2,float *param_3,float *param_4,undefined8 param_5,
               undefined8 param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  dVar5 = (double)FastIntToDouble(param_6);
  iVar4 = (int)param_6;
  dVar9 = (double)*param_4;
  dVar8 = (double)param_4[1];
  dVar7 = (double)param_4[2];
  dVar6 = (double)FastIntToDouble(iVar4 * iVar4 + iVar4 >> 1);
  fVar1 = *param_3;
  fVar2 = param_3[1];
  fVar3 = param_3[2];
  param_2[3] = param_3[3];
  *param_2 = (float)(dVar9 * dVar5 + (double)fVar1);
  param_2[1] = (float)(dVar8 * dVar5 + (double)fVar2);
  param_2[2] = fVar3 + (float)(dVar7 * dVar5 - (double)(float)(dVar6 * param_1));
  return;
}


// 0x0104d08 (0x9c bytes)
double MB_GetGroundZAboveBundle(int param_1)

{
  float fVar1;
  int iVar2;
  GPiece<16> local_20;
  GPiece<16> local_10;
  
  fVar1 = *(float *)(param_1 + 8) + 64.01;
  iVar2 = CollLine(local_10,local_20,0x12,0,0);
  if (iVar2 != 0) {
    fVar1 = g_CollOutput.ip.z;
  }
  return (double)fVar1;
}


// 0x0104da8 (0x9c bytes)
int PointOutsideConvexEdge(float *param_1,float *param_2,int param_3)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  if (0 < param_3) {
    pfVar1 = param_2;
    do {
      iVar2 = iVar2 + 1;
      iVar3 = iVar2 - (iVar2 / param_3) * param_3;
      if (0.0 < (param_2[iVar3 * 4] - *pfVar1) * (param_1[1] - pfVar1[1]) -
                (param_2[iVar3 * 4 + 1] - pfVar1[1]) * (*param_1 - *pfVar1)) {
        return iVar2;
      }
      pfVar1 = pfVar1 + 4;
    } while (iVar2 < param_3);
  }
  return 0;
}


// 0x0104e44 (0x14c bytes)
ulonglong PointInsideComplexPoly(Vec4 *point,Vec4 *poly,int n)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  Vec4 *pVVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  uVar7 = 0;
  iVar6 = 0;
  lVar8 = 0;
  if (0 < n) {
    uVar2 = (int)point->y >> 0x1f;
    iVar4 = (uVar2 >> 1 ^ (uint)point->y) - uVar2;
    pVVar5 = poly;
    do {
      lVar8 = lVar8 + 1;
      uVar2 = (int)pVVar5->y >> 0x1f;
      lVar8 = lVar8 + (ZERO_MASK(((int)lVar8 - n)) & -lVar8);
      bVar1 = (int)((uVar2 >> 1 ^ (uint)pVVar5->y) - uVar2) < iVar4;
      iVar3 = (int)lVar8;
      if ((((bVar1) &&
           (uVar2 = (int)poly[iVar3].y >> 0x1f,
           iVar4 <= (int)((uVar2 >> 1 ^ (uint)poly[iVar3].y) - uVar2))) ||
          ((uVar2 = (int)poly[iVar3].y >> 0x1f,
           (int)((uVar2 >> 1 ^ (uint)poly[iVar3].y) - uVar2) < iVar4 && (!bVar1)))) &&
         (((point->y - pVVar5->y) / (poly[iVar3].y - pVVar5->y)) * (poly[iVar3].x - pVVar5->x) +
          pVVar5->x < point->x)) {
        uVar7 = (ulonglong)(LZCOUNT((int)uVar7) << 0x20) >> 0x25;
      }
      iVar6 = iVar6 + 1;
      pVVar5 = pVVar5 + 1;
    } while (iVar6 < n);
  }
  return uVar7;
}


// 0x0104fa0 (0xdc bytes)
int SegmentIntersect2D(vec4 p1,vec4 p2,vec4 p3,vec4 p4,float *t)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  float *in_r4;
  float *in_r5;
  float *in_r6;
  float *in_r7;
  
  fVar1 = *in_r4 - *t;
  fVar4 = in_r5[1] - in_r6[1];
  fVar6 = in_r4[1] - t[1];
  fVar5 = t[1] - in_r5[1];
  fVar3 = *in_r5 - *in_r6;
  fVar2 = *t - *in_r5;
  fVar7 = fVar6 * fVar3 - fVar1 * fVar4;
  if (0.0001 <= ABS(fVar7)) {
    fVar7 = 1.0 / fVar7;
    fVar3 = (fVar4 * fVar2 - fVar3 * fVar5) * fVar7;
    fVar7 = (fVar1 * fVar5 - fVar6 * fVar2) * fVar7;
    *in_r7 = fVar3;
    if (0.0 < fVar3) {
      if (fVar3 < 1.0) {
        if (0.0 < fVar7) {
          if (fVar7 < 1.0) {
            iVar8 = 1;
          }
          else {
            iVar8 = 0;
          }
        }
        else {
          iVar8 = 0;
        }
      }
      else {
        iVar8 = 0;
      }
    }
    else {
      iVar8 = 0;
    }
  }
  else {
    iVar8 = 0;
  }
  return iVar8;
}


// 0x0105080 (0x198 bytes)
int ClipLineToPoly2D(float *param_1,float *param_2,int param_3,int param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  float *pfVar9;
  ulonglong uVar10;
  int iVar11;
  float *pfVar12;
  vec4 in_stack_ffffff48;
  vec4 in_stack_ffffff58;
  vec4 in_stack_ffffff68;
  vec4 in_stack_ffffff78;
  float local_50;
  
  uVar10 = 0;
  if (0 < param_4) {
    do {
      iVar11 = (int)(uVar10 + 1);
      pfVar12 = (float *)(param_3 + (iVar11 - (iVar11 / param_4) * param_4) * 0x10);
      iVar8 = SegmentIntersect2D(in_stack_ffffff48,in_stack_ffffff58,in_stack_ffffff68,
                                 in_stack_ffffff78,param_1);
      if (iVar8 != 0) {
        fVar1 = param_1[1];
        pfVar9 = (float *)(param_3 + (int)((uVar10 & 0xffffffff) << 4));
        fVar2 = *pfVar9;
        fVar3 = pfVar9[1];
        fVar4 = *param_1;
        fVar5 = param_2[1];
        fVar7 = param_2[2] - param_1[2];
        fVar6 = (*param_2 - fVar4) * local_50 + fVar4;
        if (0.0 <= (pfVar12[1] - fVar3) * (fVar4 - fVar2) - (*pfVar12 - fVar2) * (fVar1 - fVar3)) {
          fVar2 = param_1[1];
          fVar3 = param_1[2];
          *param_2 = fVar6;
          param_2[3] = param_1[3];
          param_2[1] = (fVar5 - fVar1) * local_50 + fVar2;
          param_2[2] = fVar7 * local_50 + fVar3;
        }
        else {
          *param_1 = fVar6;
          param_1[1] = (fVar5 - fVar1) * local_50 + fVar1;
          param_1[2] = fVar7 * local_50 + param_1[2];
        }
        return param_4 + 1;
      }
      uVar10 = uVar10 + 1;
    } while (iVar11 < param_4);
  }
  return 0;
}


// 0x0105228 (0x108 bytes)
float ClosestPointOnEdge2D(float *out,float *a,float *b,float *p)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  fVar1 = *a;
  fVar7 = *b - fVar1;
  fVar2 = a[1];
  fVar3 = p[1];
  fVar10 = b[1] - fVar2;
  fVar4 = *p;
  fVar5 = b[2];
  fVar6 = a[2];
  fVar8 = fVar4 - (fVar4 + fVar10);
  fVar9 = fVar3 - (fVar3 + -fVar7);
  fVar11 = fVar10 * fVar8 - fVar7 * fVar9;
  if (0.0001 <= ABS(fVar11)) {
    out[3] = b[3];
    fVar2 = (fVar9 * (fVar1 - fVar4) - fVar8 * (fVar2 - fVar3)) * (1.0 / fVar11);
    fVar1 = fVar2;
    if (fVar2 - 0.0 < 0.0) {
      fVar1 = 0.0;
    }
    if (1.0 - fVar1 < 0.0) {
      fVar1 = 1.0;
    }
    fVar5 = (fVar5 - fVar6) * fVar1;
    *out = fVar7 * fVar1;
    out[1] = fVar10 * fVar1;
    out[2] = fVar5;
    fVar3 = a[1];
    fVar4 = a[2];
    *out = fVar7 * fVar1 + *a;
    out[1] = fVar10 * fVar1 + fVar3;
    out[2] = fVar5 + fVar4;
  }
  else {
    *out = fVar1;
    out[1] = a[1];
    out[2] = a[2];
    out[3] = a[3];
    fVar2 = 0.0;
  }
  return fVar2;
}


// 0x0105338 (0x9c bytes)
void ClosestPointOnSegment(float *out,float *a,float *b,float *p)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar1 = a[1];
  fVar4 = b[1] - fVar1;
  fVar2 = *a;
  fVar7 = *b - fVar2;
  fVar3 = a[2];
  fVar6 = b[2] - fVar3;
  fVar5 = (fVar6 * (p[2] - fVar3) + fVar7 * (*p - fVar2) + fVar4 * (p[1] - fVar1)) /
          (fVar6 * fVar6 + fVar7 * fVar7 + fVar4 * fVar4);
  out[3] = a[3];
  if (fVar5 - 0.0 < 0.0) {
    fVar5 = 0.0;
  }
  if (1.0 - fVar5 < 0.0) {
    fVar5 = 1.0;
  }
  *out = fVar7 * fVar5 + fVar2;
  out[1] = fVar4 * fVar5 + fVar1;
  out[2] = fVar6 * fVar5 + fVar3;
  return;
}


// 0x01053d8 (0x168 bytes)
int ClosestPointInConvexPoly(float *out,float *p,float *poly,int nPnts)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  
  lVar3 = (longlong)(int)poly;
  iVar1 = PointOutsideConvexEdge(p,lVar3,nPnts);
  if (iVar1 == 0) {
    iVar1 = 0;
    *out = *p;
    out[1] = p[1];
    out[2] = p[2];
    out[3] = p[3];
  }
  else {
    iVar1 = 0;
    dVar5 = 0.0;
    if (0 < nPnts) {
      do {
        iVar2 = iVar1 + 1;
        ClosestPointOnEdge2D
                  (&local_50,(float *)lVar3,poly + (iVar2 - (iVar2 / nPnts) * nPnts) * 4,p);
        dVar4 = (double)SQRT((p[2] - local_48) * (p[2] - local_48) +
                             (*p - local_50) * (*p - local_50) +
                             (p[1] - local_4c) * (p[1] - local_4c));
        if ((iVar1 == 0) || (dVar4 < dVar5)) {
          *out = local_50;
          out[1] = local_4c;
          out[2] = local_48;
          out[3] = local_44;
          dVar5 = dVar4;
        }
        lVar3 = lVar3 + 0x10;
        iVar1 = iVar2;
      } while (iVar2 < nPnts);
    }
    iVar1 = 1;
  }
  return iVar1;
}


// 0x0105548 (0x168 bytes)
int ClosestPointOnConvexPolyEdge(float *out,float *p,float *poly,int nPnts)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  double dVar5;
  double dVar6;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  
  lVar4 = (longlong)(int)poly;
  iVar1 = PointOutsideConvexEdge(p,lVar4,nPnts);
  dVar6 = 0.0;
  iVar2 = 0;
  if (0 < nPnts) {
    do {
      iVar3 = iVar2 + 1;
      ClosestPointOnEdge2D(&local_60,(float *)lVar4,poly + (iVar3 - (iVar3 / nPnts) * nPnts) * 4,p);
      dVar5 = (double)SQRT((p[2] - local_58) * (p[2] - local_58) +
                           (*p - local_60) * (*p - local_60) + (p[1] - local_5c) * (p[1] - local_5c)
                          );
      if ((iVar2 == 0) || (dVar5 < dVar6)) {
        *out = local_60;
        out[1] = local_5c;
        out[2] = local_58;
        out[3] = local_54;
        dVar6 = dVar5;
      }
      lVar4 = lVar4 + 0x10;
      iVar2 = iVar3;
    } while (iVar3 < nPnts);
  }
  return (int)(ZERO_MASK(iVar1)) + 1;
}


// 0x01056b8 (0x78 bytes)
float DistOutsideConvexPoly2D(float *p,float *poly,int nPnts)

{
  float fVar1;
  int iVar2;
  float local_20;
  float local_1c;
  
  iVar2 = ClosestPointInConvexPoly(&local_20,p,poly,nPnts);
  if (iVar2 == 0) {
    fVar1 = 0.0;
  }
  else {
    fVar1 = SQRT((local_20 - *p) * (local_20 - *p) + (local_1c - p[1]) * (local_1c - p[1]));
  }
  return fVar1;
}


// 0x0105730 (0x4 bytes)
void STUB_00105730(...)

{
  return;
}


// 0x0105734 (0x8 bytes)
undefined8 STUB_00105734(...)

{
  return 0;
}


// 0x0105740 (0x8c bytes)
float DistPointToLine2D(float *a,float *b,float *p)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = a[1];
  fVar2 = *a;
  fVar3 = fVar1 - b[1];
  fVar4 = fVar2 - *b;
  fVar3 = SQRT(fVar4 * fVar4 + fVar3 * fVar3);
  if (fVar3 == 0.0) {
    fVar1 = (fVar2 - *p) * (fVar2 - *p) + (fVar1 - p[1]) * (fVar1 - p[1]);
  }
  else {
    fVar1 = (p[1] - fVar1) * (*b - fVar2) - (*p - fVar2) * (b[1] - fVar1);
    fVar1 = (fVar1 * fVar1) / (fVar3 * fVar3);
  }
  return SQRT(fVar1);
}


// 0x01057cc (0x28 bytes)
undefined8 MB_HasCollPrims(int param_1)

{
  undefined8 uVar1;
  
  if ((*(int *)(param_1 + 0x94) == 0) || (*(int *)(*(int *)(param_1 + 0x94) + 8) == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}


// 0x01057f4 (0x28 bytes)
/* [p2_mobyutil] overload without momentum (zeroed) */

void SetCollDamIn
               (double param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  param_2[4] = param_3;
  param_2[5] = param_4;
  param_2[7] = (float)param_1;
  param_2[8] = 0;
  param_2[3] = 0;
  param_2[2] = 0;
  param_2[1] = 0;
  *param_2 = 0;
  return;
}


// 0x010581c (0x38 bytes)
void SetCollDamIn
               (double param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
               undefined8 param_5,undefined4 *param_6)

{
  undefined4 uVar1;
  
  param_2[7] = (float)param_1;
  uVar1 = *param_6;
  param_2[4] = param_3;
  *param_2 = uVar1;
  uVar1 = param_6[1];
  param_2[5] = param_4;
  param_2[1] = uVar1;
  uVar1 = param_6[2];
  param_2[8] = 1;
  param_2[2] = uVar1;
  param_2[3] = param_6[3];
  return;
}


// 0x0105870 (0x180 bytes)
void DamageSphereAtPos(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  undefined8 in_r9;
  undefined4 in_stack_00000074;
  GPiece<48> local_40;
  
  CollMobySphere(param_1,param_3,in_r9,in_stack_00000074,param_2,local_40);
  return;
}


// 0x01059f0 (0xc4 bytes)
void DamageSphereAtBone
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,int param_7)

{
  GPiece<32> auStack_60;
  
  GetBonePosition(param_4,param_5,auStack_60);
  DamageSphereAtPos(param_1,(double)(longlong)param_7,param_3,param_4,auStack_60);
  return;
}


// 0x0105ab4 (0x150 bytes)
void CollDamageMobyDirect
               (MobyInstance *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  byte bVar1;
  uint uVar2;
  CollDamageOut *pCVar3;
  float fStack00000040;
  float fStack00000044;
  float fStack00000048;
  float fStack0000004c;
  float fStack0000005c;
  
  bVar1 = param_1->damage;
  fStack00000044 = (float)param_3;
  fStack0000004c = (float)param_4;
  fStack0000005c = (float)param_6;
  fStack00000040 = (float)((ulonglong)param_3 >> 0x20);
  fStack00000048 = (float)((ulonglong)param_4 >> 0x20);
  if (((bVar1 != 0xff) && (CollDamage[bVar1].pVictimMoby == param_1)) &&
     (uVar2 = (int)CollDamage[bVar1].damageHp >> 0x1f,
     (int)(FLOAT_ORDER(fStack0000005c)) <
     (int)((uVar2 >> 1 ^ (uint)CollDamage[bVar1].damageHp) - uVar2))) {
    return;
  }
  CollDamage[g_CollOutput.damageNext].ip_.w = 0.0;
  CollDamage[g_CollOutput.damageNext].ip_.z = 0.0;
  CollDamage[g_CollOutput.damageNext].ip_.y = 0.0;
  CollDamage[g_CollOutput.damageNext].ip_.x = 0.0;
  CollDamage[g_CollOutput.damageNext].impact.x = fStack00000040;
  CollDamage[g_CollOutput.damageNext].impact.y = fStack00000044;
  CollDamage[g_CollOutput.damageNext].impact.z = fStack00000048;
  CollDamage[g_CollOutput.damageNext].impact.w = fStack0000004c;
  CollDamage[g_CollOutput.damageNext].pDamager = (MobyInstance *)((ulonglong)param_5 >> 0x20);
  CollDamage[g_CollOutput.damageNext].damageFlags = (uint)param_5;
  CollDamage[g_CollOutput.damageNext].damageClass = (char)((ulonglong)param_6 >> 0x38);
  CollDamage[g_CollOutput.damageNext].damageStrength = (char)((ulonglong)param_6 >> 0x30);
  CollDamage[g_CollOutput.damageNext].damageIndex = (u16)((ulonglong)param_6 >> 0x20);
  CollDamage[g_CollOutput.damageNext].damageHp = fStack0000005c;
  CollDamage[g_CollOutput.damageNext].unk30_flags_ = (u32)((ulonglong)param_7 >> 0x20);
  CollDamage[g_CollOutput.damageNext].pVictimMoby = param_1;
  pCVar3 = CollDamage + g_CollOutput.damageNext;
  pCVar3->padding[0] = '\0';
  pCVar3->padding[1] = '\0';
  pCVar3->padding[2] = '\0';
  pCVar3->padding[3] = '\0';
  param_1->damage = (s8)g_CollOutput.damageNext;
  g_CollOutput.damageNext = g_CollOutput.damageNext + 1U & 0x3f;
  return;
}


// 0x0105c08 (0x124 bytes)
void CollDamageMobyDirect
               (float damage,MobyInstance *victim,MobyInstance *damager,int flags,int unused,
               float *ip,float *impact)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  CollDamageOut *pCVar5;
  
  bVar1 = victim->damage;
  if (((bVar1 == 0xff) || (CollDamage[bVar1].pVictimMoby != victim)) ||
     (CollDamage[bVar1].damageHp <= damage)) {
    CollDamage[g_CollOutput.damageNext].damageHp = damage;
    fVar2 = impact[1];
    fVar3 = *impact;
    fVar4 = impact[2];
    CollDamage[g_CollOutput.damageNext].pVictimMoby = victim;
    CollDamage[g_CollOutput.damageNext].pDamager = damager;
    CollDamage[g_CollOutput.damageNext].damageFlags = flags;
    pCVar5 = CollDamage + g_CollOutput.damageNext;
    pCVar5->padding[0] = '\0';
    pCVar5->padding[1] = '\0';
    pCVar5->padding[2] = '\0';
    pCVar5->padding[3] = '\0';
    CollDamage[g_CollOutput.damageNext].unk30_flags_ =
         (uint)(0.0001 < SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2));
    CollDamage[g_CollOutput.damageNext].ip_.x = *ip;
    CollDamage[g_CollOutput.damageNext].ip_.y = ip[1];
    CollDamage[g_CollOutput.damageNext].ip_.z = ip[2];
    CollDamage[g_CollOutput.damageNext].ip_.w = ip[3];
    CollDamage[g_CollOutput.damageNext].impact.x = *impact;
    CollDamage[g_CollOutput.damageNext].impact.y = impact[1];
    CollDamage[g_CollOutput.damageNext].impact.z = impact[2];
    CollDamage[g_CollOutput.damageNext].impact.w = impact[3];
    victim->damage = (s8)g_CollOutput.damageNext;
    g_CollOutput.damageNext = g_CollOutput.damageNext + 1U & 0x3f;
  }
  return;
}


// 0x0105d2c (0x28 bytes)
void CollDamageMobyDirect_wrap
               (double param_1,MobyInstance *param_2,MobyInstance *param_3,int param_4,int param_5,
               float *param_6)

{
  CollDamageMobyDirect
            ((float)param_1,param_2,param_3,param_4,param_5,param_6,(float *)&DAT_00a15d30);
  return;
}


// 0x0105d58 (0x1e0 bytes)
/* [p2_mobyutil] N CollLine probes, returns 1 on any hit
   [p2_mobyutil] N CollLine probes, returns 1 on any hit */

undefined8 MB_CollLineMulti(void)

{
  int iVar1;
  undefined8 in_r7;
  undefined8 in_r8;
  undefined8 in_r9;
  int iVar2;
  GPiece<16> local_c0;
  GPiece<24> local_b0;
  
  FastIntToDouble(in_r9);
  iVar2 = 0;
  if (0 < (int)in_r9) {
    do {
      iVar1 = CollLine(local_c0,local_b0,0,in_r7,in_r8);
      if (iVar1 != 0) {
        return 1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)in_r9);
  }
  return 0;
}


// 0x0105f40 (0x138 bytes)
float CollWaterHeight(float *pos,float *normal)

{
  float fVar1;
  int iVar2;
  
  if (WaterTileCnt != 0) {
    fVar1 = pos[2];
    iVar2 = WaterTileCnt;
    WaterTile_GetHeight(*pos,pos[1],fVar1);
    if (iVar2 != 0) {
      return fVar1;
    }
  }
  if (((WaterPlaneActive == 0) || (0.5 <= ABS(pos[2] - DAT_00e5aa98))) ||
     (DAT_00e5aa9c <=
      SQRT((*pos - DAT_00e5aa90) * (*pos - DAT_00e5aa90) +
           (pos[1] - DAT_00e5aa94) * (pos[1] - DAT_00e5aa94)))) {
    if (normal != (float *)0x0) {
      normal[3] = 0.0;
      normal[1] = 0.0;
      *normal = 0.0;
      normal[2] = 1.0;
    }
    fVar1 = pos[2];
  }
  else {
    fVar1 = DAT_00e5aa98;
    if (normal != (float *)0x0) {
      normal[3] = 0.0;
      normal[1] = 0.0;
      *normal = 0.0;
      normal[2] = 1.0;
      fVar1 = DAT_00e5aa98;
    }
  }
  return fVar1;
}


// 0x0106078 (0xbc bytes)
void MB_EulerToQuat(float *outQuat,Vec3 *rot)

{
  GPiece<16> auStack_60;
  GPiece<16> auStack_50;
  GPiece<24> auStack_40;
  
  FastQuaternionToEuler((double)rot->x,auStack_40,0);
  FastQuaternionToEuler((double)rot->y,auStack_50,1);
  FastQuaternionToEuler((double)rot->z,auStack_60,2);
  FastQuaternionMult(outQuat,auStack_40,auStack_50);
  FastQuaternionMult(outQuat,outQuat,auStack_60);
  return;
}


// 0x0106150 (0x1b0 bytes)
void MB_RegisterLameShadow(float size,MobyInstance *moby)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  GPiece<16> local_50;
  GPiece<24> local_40;
  
  uVar2 = g_NumLameShadows;
  dVar4 = (double)size;
  if ((moby->enabled != '\0') && ((int)g_NumLameShadows < 0x20)) {
    (&g_LameShadows)[g_NumLameShadows * 8] = (moby->pos).x;
    (&DAT_0095e5f4)[uVar2 * 8] = (moby->pos).y;
    (&DAT_0095e5f8)[uVar2 * 8] = (moby->pos).z;
    (&DAT_0095e5fc)[uVar2 * 8] = (moby->pos).w;
    iVar3 = CollLine(local_40,local_50,2,0,0);
    fVar1 = 0.0;
    if (iVar3 != 0) {
      fVar1 = g_CollOutput.ip.z;
    }
    dVar5 = (double)fVar1;
    iVar3 = CollHotspot();
    fVar1 = g_CollOutput.normal.x;
    if (iVar3 != 0) {
      iVar3 = (int)(((ulonglong)g_NumLameShadows & 0x7ffffff) << 5);
      *(float *)((int)&DAT_0095e5f8 + iVar3) = (float)(dVar5 + 0.02500000037252903);
      *(float *)((int)&DAT_0095e600 + iVar3) = fVar1;
      *(float *)((int)&DAT_0095e604 + iVar3) = g_CollOutput.normal.y;
      *(float *)((int)&DAT_0095e608 + iVar3) = g_CollOutput.normal.z;
      *(float *)(&DAT_0095e60c + iVar3) = g_CollOutput.normal.w;
      g_NumLameShadows = g_NumLameShadows + 1;
      dVar5 = (double)((8.0 - ABS((float)((double)(moby->pos).z - dVar5))) * 0.125);
      if (dVar5 - 0.25 < 0.0) {
        dVar5 = 0.25;
      }
      *(float *)((int)&DAT_0095e5fc + iVar3) = (float)(dVar5 * dVar4);
    }
  }
  return;
}


// 0x0106308 (0x24 bytes)
/* [p2_mobyutil] moby+0x84/0x88 = pos.z -/+ 0.2 */

void MB_SetZBoundsFromPos(int param_1)

{
  *(float *)(param_1 + 0x84) = *(float *)(param_1 + 0x18) - 0.2;
  *(float *)(param_1 + 0x88) = *(float *)(param_1 + 0x18) + 0.2;
  return;
}


// 0x0106330 (0x20 bytes)
void MB_SetZBounds(double param_1,int param_2)

{
  *(float *)(param_2 + 0x84) = (float)(param_1 - 0.20000000298023224);
  *(float *)(param_2 + 0x88) = (float)(param_1 + 0.20000000298023224);
  return;
}


// 0x0106360 (0xe0 bytes)
/* [p2_mobyutil] CollLine down; sets moby+0x84/0x88 = groundZ -/+ 0.2 */

void MB_SetZBoundsFromGround(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  GPiece<16> local_30;
  GPiece<24> local_20;
  
  iVar3 = CollLine(local_20,local_30,0x22,0,0);
  fVar1 = 0.0;
  fVar2 = fVar1;
  if (iVar3 != 0) {
    fVar2 = g_CollOutput.ip.z - 0.2;
    fVar1 = g_CollOutput.ip.z + 0.2;
  }
  *(float *)(param_1 + 0x84) = fVar2;
  *(float *)(param_1 + 0x88) = fVar1;
  return;
}


// 0x0106468 (0x2d0 bytes)
// inlined: FastRSqrt @0x1064f4
void MB_SetZBoundsFromFloorCeil(MobyInstance *param_1)

{
  float fVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  GPiece<16> local_80;
  GPiece<16> local_70;
  
  iVar2 = CollLine(local_80,local_70,0x22,0,0);
  if (iVar2 == 0) {
    param_1->unk84 = 0;
    param_1->unk88 = 0;
  }
  else {
    dVar4 = (double)g_CollOutput.ip.z;
    dVar5 = dVar4;
    iVar2 = CollLine(local_80,local_70,0x22,0,0);
    if (iVar2 != 0) {
      dVar5 = (double)g_CollOutput.ip.z;
    }
    dVar3 = dVar4;
    if (dVar5 - dVar4 < 0.0) {
      dVar3 = dVar5;
    }
    if (dVar4 - dVar5 < 0.0) {
      dVar4 = dVar5;
    }
    param_1->unk84 = (int)(float)(dVar3 - 0.25);
    param_1->unk88 = (int)(float)(dVar4 + 0.25);
    fVar1 = (float)(dVar3 - 0.25) + 4.0;
    if (fVar1 < (float)(dVar4 + 0.25)) {
      param_1->unk88 = (int)fVar1;
    }
  }
  return;
}


// 0x0106738 (0x24 bytes)
void TweenColor(float t,uint color1,uint color2)

{
  FastLerpColor((double)t,color1,color2);
  return;
}


// 0x010675c (0x68 bytes)
CollDamageOut * MB_damage(MobyInstance *moby,uint flags,int noClearDamage)

{
  CollDamageOut *damageEntry;
  byte damageIndex;
  
  damageIndex = moby->damage;
  if ((damageIndex == 0xff) || (CollDamage[damageIndex].pVictimMoby != moby)) {
    damageEntry = (CollDamageOut *)0x0;
  }
  else {
    damageEntry = CollDamage + damageIndex;
    if ((CollDamage[damageIndex].damageFlags & flags) == 0) {
      if (noClearDamage == 0) {
        moby->damage = -1;
      }
      damageEntry = (CollDamageOut *)0x0;
    }
  }
  return damageEntry;
}


// 0x01067c4 (0x34 bytes)
undefined4 ____Unused_MB_GetPVarsField10(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else if ((*(ushort *)(param_1 + 0x34) & 0x20) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x78) + 0x10);
  }
  return uVar1;
}


// 0x0106840 (0xd54 bytes)
// inlined: FastAtan2 @0x106b0c, FastAtan2 @0x106d28, FastRSqrt @0x106f48
/* [p2_mobyutil] processes incoming COLL_DAM_OUT for moby using react vars (pVar[0]); 147 callers */

ulonglong MB_HandleDamage
                    (MobyInstance *param_1,int param_2,ulonglong param_3,uint param_4,
                    undefined4 *param_5,undefined4 *param_6,uint *param_7,ulonglong param_8)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  short sVar10;
  undefined2 uVar11;
  ulonglong *puVar12;
  int iVar13;
  float fVar14;
  longlong lVar15;
  byte bVar17;
  int iVar16;
  longlong lVar18;
  longlong lVar19;
  float *pfVar20;
  ulonglong uVar21;
  ulonglong unaff_r23;
  int iVar22;
  ulonglong unaff_r24;
  longlong lVar23;
  uint uVar24;
  ulonglong unaff_r25;
  uint uVar25;
  ulonglong unaff_r26;
  ulonglong uVar26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  ulonglong in_f26;
  ulonglong in_f27;
  ulonglong in_f28;
  ulonglong in_f29;
  double dVar33;
  ulonglong in_f30;
  ulonglong in_f31;
  double dVar34;
  double dVar35;
  GPiece<16> auVar36;
  GPiece<16> auVar37;
  GPiece<16> auVar38;
  
  uVar26 = ZEXT48(&stack0x00000000);
  lVar23 = uVar26 - 0x160;
  puVar12 = (ulonglong *)lVar23;
  *puVar12 = uVar26;
  puVar12[0x2e] = in_LR;
  puVar12[0x26] = in_f26;
  puVar12[0x27] = in_f27;
  puVar12[0x28] = in_f28;
  puVar12[0x29] = in_f29;
  puVar12[0x2a] = in_f30;
  puVar12[0x2b] = in_f31;
  puVar12[0x1f] = unaff_r25;
  puVar12[0x23] = unaff_r29;
  puVar12[0x1d] = unaff_r23;
  puVar12[0x25] = unaff_r31;
  *param_5 = 0;
  puVar12[0x24] = unaff_r30;
  puVar12[0x22] = unaff_r28;
  puVar12[0x21] = unaff_r27;
  puVar12[0x20] = unaff_r26;
  puVar12[0x1e] = unaff_r24;
  if (param_7 != (uint *)0x0) {
    *param_7 = 0xffffffff;
  }
  iVar22 = (int)param_3;
  if ((((param_2 != 0) && (*(int *)(param_2 + 0x20) != 0)) &&
      ((sVar10 = *(short *)(*(int *)(param_2 + 0x20) + 0xa6), sVar10 == 0x131 || (sVar10 == 0xa8))))
     && (iVar22 != 0)) {
    *(undefined4 *)(param_2 + 0x2c) =
         *(undefined4 *)(&DAT_007291f8 + (uint)*(byte *)(iVar22 + 8) * 4);
  }
  if (param_1 == (MobyInstance *)0x0) {
    if (iVar22 != 0) {
      *(undefined2 *)(iVar22 + 0x1c) = 0;
      *(undefined2 *)(iVar22 + 0x14) = 0xffff;
    }
    *(undefined2 *)(iVar22 + 0x16) = 0xffff;
    *param_5 = 0;
    return 0;
  }
  if (iVar22 == 0) {
    if (param_1 == (MobyInstance *)0x0) {
      param_3 = 0;
    }
    else {
      param_3 = 0;
      if ((param_1->modeBits & HAS_SPECIAL_VARS) != NONE) {
                    /* WARNING: Load size is inaccurate */
        param_3 = (ulonglong)*param_1->pVar;
      }
    }
    if ((int)param_3 == 0) {
      *param_5 = 0;
      return 0;
    }
  }
  iVar22 = (int)param_3;
  if ((int)param_8 == 4) {
    param_8 = (ulonglong)*(byte *)(iVar22 + 8);
  }
  if (param_2 == 0) {
    FastDecTimerS16(param_3 + 0x1c);
    *(undefined2 *)(iVar22 + 0x16) = 0xffff;
    *param_5 = 1;
    if (param_6 != (undefined4 *)0x0) {
      *param_6 = 0;
    }
    return 0xb;
  }
  if (*(int *)(param_2 + 0x1c) == 0x45afdf66) {
    bVar17 = *(byte *)(param_2 + 0x28);
    uVar25 = (uint)*(ushort *)(param_2 + 0x2a);
    fVar8 = *(float *)((uint)bVar17 * 4 + 0x729208 + (int)(param_8 << 5));
    fVar7 = *(float *)(param_2 + 0x10) * fVar8;
    fVar2 = *(float *)(param_2 + 0x14) * fVar8;
    fVar8 = *(float *)(param_2 + 0x18) * fVar8;
    *(undefined4 *)(param_2 + 0x1c) = 0x45afdf66;
    *(float *)(param_2 + 0x10) = fVar7;
    *(float *)(param_2 + 0x14) = fVar2;
    *(float *)(param_2 + 0x18) = fVar8;
    if (*(ushort *)(param_2 + 0x2a) == 0x47) {
      fVar3 = (param_1->pos).x;
      fVar4 = (param_1->pos).y;
      fVar1 = fVar3 - g_heroPosition.x;
      fVar5 = fVar4 - g_heroPosition.y;
      fVar6 = ABS(fVar1);
      fVar9 = ABS(fVar5);
      *(float *)((int)puVar12 + 0x9c) = fVar1;
      *(float *)(puVar12 + 0x14) = fVar5;
      *(float *)((int)puVar12 + 0xa4) = fVar6 - fVar9;
      dVar34 = 0.0;
      uVar21 = (ulonglong)(*(uint *)((int)puVar12 + 0x9c) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar12 + 0xa4) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar12 + 0x14) >> 0x1d) & 4;
      fVar1 = ABS(*(float *)((int)puVar12 + 0x9c));
      if (*(float *)((int)puVar12 + 0xa4) - 0.0 < 0.0) {
        fVar1 = fVar9;
      }
      fVar9 = *(float *)(&g_atanQuadrantTable + (int)(uVar21 << 2));
      fVar5 = *(float *)(((uint)(uVar21 << 2) | 0x735900) + 4);
      fVar14 = ABS(*(float *)(puVar12 + 0x14));
      if (*(float *)((int)puVar12 + 0xa4) - 0.0 < 0.0) {
        fVar14 = fVar6;
      }
      dVar28 = dVar34;
      if (0.0 < fVar1) {
        lVar15 = uVar26 - 0x150;
        lVar18 = uVar26 - 0x98;
        lVar19 = uVar26 - 0x88;
        lVar27 = 2;
        fVar1 = (fVar14 - fVar1) / (fVar14 + fVar1);
        fVar6 = fVar1 * fVar1;
        *(float *)((int)puVar12 + 0xd4) = fVar1;
        *(float *)((int)puVar12 + 0xcc) = fVar1;
        *(float *)(puVar12 + 0x1a) = fVar1;
        *(float *)(puVar12 + 0x19) = fVar1;
        fVar1 = fVar6 * fVar6;
        *(float *)((int)puVar12 + 0xcc) = *(float *)((int)puVar12 + 0xcc) * fVar6;
        *(float *)(puVar12 + 0x1a) = *(float *)(puVar12 + 0x1a) * fVar1;
        *(float *)((int)puVar12 + 0xd4) = *(float *)((int)puVar12 + 0xd4) * fVar1 * fVar6;
        do {
          *(float *)((int)lVar15 + 200) = *(float *)((int)lVar15 + 0xb8) * fVar1 * fVar1;
          iVar16 = (int)lVar18;
          lVar15 = lVar15 + 8;
          lVar18 = lVar18 + 8;
          *(float *)((int)lVar19 + 4) = *(float *)(iVar16 + 4) * fVar1 * fVar1;
          lVar19 = lVar19 + 8;
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
        lVar27 = 4;
        lVar19 = uVar26 - 0x98;
        pfVar20 = (float *)&DAT_007358e0;
        lVar15 = lVar23;
        lVar18 = lVar19;
        do {
          fVar1 = *pfVar20;
          fVar6 = pfVar20[1];
          pfVar20 = pfVar20 + 2;
          *(float *)((int)lVar15 + 200) = *(float *)((int)lVar15 + 200) * fVar1;
          lVar15 = lVar15 + 8;
          *(float *)((int)lVar18 + 4) = *(float *)((int)lVar18 + 4) * fVar6;
          lVar18 = lVar18 + 8;
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
        lVar18 = 2;
        lVar15 = lVar23;
        do {
          iVar16 = (int)lVar15;
          lVar15 = lVar15 + 0x10;
          iVar13 = (int)lVar19;
          lVar19 = lVar19 + 0x10;
          dVar28 = (double)((float)(dVar28 + (double)*(float *)(iVar16 + 200)) +
                            *(float *)(iVar13 + 4) + *(float *)(iVar13 + 8) +
                           *(float *)(iVar13 + 0xc));
          lVar18 = lVar18 + -1;
        } while (lVar18 != 0);
        dVar28 = (double)((float)(dVar28 + 0.7853981852531433) * fVar9 + fVar5);
      }
      fVar1 = (float)(dVar28 + 1.570796251296997);
      fVar3 = fVar3 - g_heroPosition.x;
      fVar4 = fVar4 - g_heroPosition.y;
      fVar9 = ABS(fVar3);
      fVar5 = ABS(fVar4);
      fVar6 = 3.1415925 - fVar1;
      if (fVar1 - (3.1415925 - fVar1) < 0.0) {
        fVar6 = fVar1;
      }
      *(float *)(puVar12 + 0x12) = fVar3;
      *(float *)(puVar12 + 0x13) = fVar9 - fVar5;
      *(float *)((int)puVar12 + 0x94) = fVar4;
      fVar3 = -3.1415925 - fVar1;
      if ((-3.1415925 - fVar1) - fVar6 < 0.0) {
        fVar3 = fVar6;
      }
      uVar21 = (ulonglong)(*(uint *)(puVar12 + 0x12) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar12 + 0x13) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar12 + 0x94) >> 0x1d) & 4;
      fVar1 = fVar3 * fVar3;
      fVar4 = ABS(*(float *)(puVar12 + 0x12));
      if (*(float *)(puVar12 + 0x13) - 0.0 < 0.0) {
        fVar4 = fVar5;
      }
      fVar5 = fVar1 * fVar1 * fVar3;
      fVar6 = fVar1 * fVar5;
      fVar3 = fVar1 * fVar6 * 2.601887e-06 +
              fVar6 * -0.0001980741 + fVar5 * 0.0083330255 + fVar1 * fVar3 * -0.16666657 + fVar3;
      dVar28 = (double)fVar3;
      fVar1 = ABS(*(float *)((int)puVar12 + 0x94));
      if (*(float *)(puVar12 + 0x13) - 0.0 < 0.0) {
        fVar1 = fVar9;
      }
      *(float *)(puVar12 + 0xe) = fVar3;
      fVar5 = *(float *)(&g_atanQuadrantTable + (int)(uVar21 << 2));
      fVar3 = *(float *)(((uint)(uVar21 << 2) | 0x735900) + 4);
      dVar31 = dVar34;
      if (0.0 < fVar4) {
        lVar15 = uVar26 - 0x150;
        lVar19 = uVar26 - 0xa8;
        lVar18 = uVar26 - 0xb8;
        lVar27 = 2;
        fVar4 = (fVar1 - fVar4) / (fVar1 + fVar4);
        fVar1 = fVar4 * fVar4;
        *(float *)((int)puVar12 + 0xb4) = fVar4;
        *(float *)((int)puVar12 + 0xac) = fVar4;
        *(float *)(puVar12 + 0x16) = fVar4;
        *(float *)(puVar12 + 0x15) = fVar4;
        fVar4 = fVar1 * fVar1;
        *(float *)((int)puVar12 + 0xac) = *(float *)((int)puVar12 + 0xac) * fVar1;
        *(float *)(puVar12 + 0x16) = *(float *)(puVar12 + 0x16) * fVar4;
        *(float *)((int)puVar12 + 0xb4) = *(float *)((int)puVar12 + 0xb4) * fVar4 * fVar1;
        do {
          *(float *)((int)lVar15 + 0xa8) = *(float *)((int)lVar15 + 0x98) * fVar4 * fVar4;
          iVar16 = (int)lVar18;
          lVar18 = lVar18 + 8;
          lVar15 = lVar15 + 8;
          *(float *)((int)lVar19 + 4) = *(float *)(iVar16 + 4) * fVar4 * fVar4;
          lVar19 = lVar19 + 8;
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
        lVar27 = 4;
        lVar19 = uVar26 - 0xb8;
        pfVar20 = (float *)&DAT_007358e0;
        lVar15 = lVar23;
        lVar18 = lVar19;
        do {
          fVar4 = *pfVar20;
          fVar1 = pfVar20[1];
          pfVar20 = pfVar20 + 2;
          *(float *)((int)lVar15 + 0xa8) = *(float *)((int)lVar15 + 0xa8) * fVar4;
          lVar15 = lVar15 + 8;
          *(float *)((int)lVar18 + 4) = *(float *)((int)lVar18 + 4) * fVar1;
          lVar18 = lVar18 + 8;
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
        lVar15 = 2;
        do {
          iVar16 = (int)lVar23;
          iVar13 = (int)lVar19;
          lVar23 = lVar23 + 0x10;
          lVar19 = lVar19 + 0x10;
          dVar31 = (double)((float)(dVar31 + (double)*(float *)(iVar16 + 0xa8)) +
                            *(float *)(iVar13 + 4) + *(float *)(iVar13 + 8) +
                           *(float *)(iVar13 + 0xc));
          lVar15 = lVar15 + -1;
        } while (lVar15 != 0);
        dVar31 = (double)((float)(dVar31 + 0.7853981852531433) * fVar5 + fVar3);
      }
      dVar35 = 1.0;
      dVar32 = (double)(float)(3.141592502593994 - dVar31);
      if (dVar31 - (double)(float)(3.141592502593994 - dVar31) < 0.0) {
        dVar32 = dVar31;
      }
      dVar30 = (double)(float)(-3.141592502593994 - dVar31);
      if ((double)(float)(-3.141592502593994 - dVar31) - dVar32 < 0.0) {
        dVar30 = dVar32;
      }
      dVar32 = (double)(float)(dVar30 * dVar30);
      dVar33 = (double)(float)(dVar32 * (double)(float)(dVar32 * dVar30));
      dVar31 = (double)(float)(dVar32 * dVar33);
      dVar32 = (double)((float)(dVar32 * dVar31) * 2.601887e-06 +
                       (float)(dVar31 * -0.0001980741071747616 +
                              (double)(float)(dVar33 * 0.008333025500178337 +
                                             (double)(float)((double)(float)(dVar32 * dVar30) *
                                                             -0.16666656732559204 + dVar30))));
      fVar3 = SQRT((float)(dVar32 * dVar32 + (double)(float)(dVar28 * dVar28 + 1.0)));
      dVar30 = (double)((SQRT(fVar8 * fVar8 + fVar7 * fVar7 + fVar2 * fVar2) * 0.7) / fVar3);
      dVar31 = dVar34;
      if (0.0 - fVar3 < 0.0) {
        dVar31 = dVar30;
      }
      dVar33 = dVar34;
      if (0.0 - fVar3 < 0.0) {
        dVar33 = (double)(float)(dVar28 * dVar30);
      }
      dVar29 = dVar34;
      if (0.0 - fVar3 < 0.0) {
        dVar29 = (double)(float)(dVar32 * dVar30);
      }
      if (fVar3 - 0.0 < 0.0) {
        dVar31 = dVar30;
      }
      if (fVar3 - 0.0 < 0.0) {
        dVar33 = (double)(float)(dVar28 * dVar30);
      }
      if (fVar3 - 0.0 < 0.0) {
        dVar29 = (double)(float)(dVar32 * dVar30);
      }
      *(float *)(puVar12 + 0xf) = (float)dVar31;
      *(float *)(puVar12 + 0xe) = (float)dVar33;
      *(float *)((int)puVar12 + 0x74) = (float)dVar29;
      *(float *)(param_2 + 0x10) = fVar7 * 0.3;
      *(float *)(param_2 + 0x14) = fVar2 * 0.3;
      *(float *)(param_2 + 0x18) = fVar8 * 0.3;
      FastVecAdd(uVar26 - 0xe0,(longlong)param_2 + 0x10,uVar26 - 0xf0);
      fVar8 = *(float *)((int)puVar12 + 0x84);
      fVar7 = *(float *)(puVar12 + 0x10);
      *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(puVar12 + 0x11);
      *(undefined4 *)(param_2 + 0x1c) = *(undefined4 *)((int)puVar12 + 0x8c);
      bVar17 = *(byte *)(param_2 + 0x28);
      dVar31 = (double)(fVar7 * fVar7 + fVar8 * fVar8);
      dVar28 = dVar34;
      if ((double)(float)SQRT(dVar31) != dVar34) {
        dVar34 = 1.0 / SQRT(dVar31);
        dVar34 = (double)(float)(-(double)(float)((double)(float)(dVar31 * dVar34) * dVar34 - dVar35
                                                 ) * (double)(float)(dVar34 * 0.5) + dVar34);
        dVar34 = (double)(float)(-(double)(float)((double)(float)(dVar31 * dVar34) * dVar34 - dVar35
                                                 ) * (double)(float)(dVar34 * 0.5) + dVar34);
        fVar2 = (float)(-(double)(float)((double)(float)(dVar31 * dVar34) * dVar34 - dVar35) *
                        (double)(float)(dVar34 * 0.5) + dVar34);
        dVar28 = (double)(fVar7 * fVar2);
        dVar34 = (double)(fVar8 * fVar2);
      }
      *(float *)(param_2 + 0x10) = (float)dVar28;
      *(float *)(param_2 + 0x14) = (float)dVar34;
    }
  }
  else if (*(int *)(param_2 + 0x20) == 0) {
    bVar17 = 8;
    uVar25 = 0x47;
    *(undefined1 *)(param_2 + 0x28) = 8;
  }
  else {
    bVar17 = 8;
    uVar25 = (uint)*(short *)(*(int *)(param_2 + 0x20) + 0xa6);
    *(undefined1 *)(param_2 + 0x28) = 8;
  }
  if (bVar17 == 7) {
    if (*(byte *)(param_2 + 0x29) < 2) {
      lVar23 = 0xc;
      *param_5 = 2;
    }
    else {
      lVar23 = 0x11;
      *param_5 = 2;
    }
  }
  else if (bVar17 == 6) {
    lVar23 = 1;
    *param_5 = 2;
  }
  else if (bVar17 == 5) {
    if (*(byte *)(param_2 + 0x29) < 2) {
      lVar23 = 4;
      *param_5 = 3;
    }
    else {
      lVar23 = 7;
      *param_5 = 4;
    }
  }
  else if (bVar17 == 4) {
    lVar23 = 0xe;
    *param_5 = 2;
  }
  else if (bVar17 == 3) {
    if (*(byte *)(param_2 + 0x29) < 2) {
      lVar23 = 10;
      *param_5 = 2;
    }
    else if (*(byte *)(param_2 + 0x29) < 3) {
      lVar23 = 0xf;
      *param_5 = 2;
    }
    else {
      lVar23 = 0x10;
      *param_5 = 2;
      *(undefined2 *)(iVar22 + 0x14) = 0xffff;
      *(undefined2 *)(iVar22 + 0x1c) = 0;
    }
  }
  else if (bVar17 == 2) {
    if (*(byte *)(param_2 + 0x29) < 2) {
      lVar23 = 8;
      *param_5 = 2;
    }
    else {
      lVar23 = 0xd;
      *param_5 = 2;
    }
  }
  else if (bVar17 == 1) {
    if (*(byte *)(param_2 + 0x29) < 2) {
      lVar23 = 0xb;
      *param_5 = 2;
    }
    else if (*(byte *)(param_2 + 0x29) == 2) {
      lVar23 = 5;
      *param_5 = 2;
    }
    else {
      lVar23 = 9;
      *param_5 = 2;
    }
  }
  else if (bVar17 == 0) {
    if ((*(short *)(param_2 + 0x2a) == 1) || (*(short *)(param_2 + 0x2a) == 2)) {
      *param_5 = 2;
      lVar23 = 0;
    }
    else {
      lVar23 = 1;
      *param_5 = 2;
    }
  }
  else {
    lVar23 = 1;
    *param_5 = 2;
  }
  if (param_7 != (uint *)0x0) {
    *param_7 = uVar25;
  }
  uVar26 = (ulonglong)
           *(byte *)((int)&PTR_DAT_007291b0 + (int)(lVar23 << 2) + (uint)*(byte *)(iVar22 + 8));
  if ((int)*(short *)(iVar22 + 0x14) != uVar25) {
    *(undefined2 *)(iVar22 + 0x1c) = 0;
  }
  iVar16 = FastDecTimerS16(param_3 + 0x1c);
  uVar24 = (uint)lVar23;
  if (iVar16 != 0) {
    if (uVar24 == 0xb) {
      auVar36 = ZEXT416(0xffffffff);
      auVar36 = auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60;
      auVar38 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar37 = vectorShiftLeftIntegerWord(auVar36,auVar36);
      auVar36 = loadVectorLeftIndexed(0x3c,0x1067f8);
      auVar36 = auVar36 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar36 = vectorMultiplyAddFloatingPoint
                          (auVar38,auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60,
                           auVar37);
      auVar36 = vectorConvertToSignedFixedPointWordSaturate(auVar36,0);
      auVar36 = vectorSplatHalfWord(auVar36,1);
      uVar11 = storeVectorElementHalfWordIndexed(auVar36,0x1c,param_3);
      *(undefined2 *)(iVar22 + 0x1c) = uVar11;
    }
    else if (uVar24 == 7) {
      if (g_goldWeaponsArray.teslaClaw == '\0') {
        auVar37 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar36 = loadVectorLeftIndexed(0x3c,0x1067f8);
        auVar36 = auVar36 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar36 = auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60;
      }
      else {
        auVar37 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar36 = loadVectorLeftIndexed(0x40,0x1067f8);
        auVar36 = auVar36 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar36 = auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60;
      }
      auVar38 = ZEXT416(0xffffffff);
      auVar38 = auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60;
      auVar37 = auVar37 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar38 = vectorShiftLeftIntegerWord(auVar38,auVar38);
      auVar36 = vectorMultiplyAddFloatingPoint
                          (auVar37 | auVar37 << 0x20 | auVar37 << 0x40 | auVar37 << 0x60,auVar36,
                           auVar38);
      auVar36 = vectorConvertToSignedFixedPointWordSaturate(auVar36,0);
      auVar36 = vectorSplatHalfWord(auVar36,1);
      uVar11 = storeVectorElementHalfWordIndexed(auVar36,0x1c,param_3);
      *(undefined2 *)(iVar22 + 0x1c) = uVar11;
    }
    else if (uVar24 == 4) {
      auVar36 = ZEXT416(0xffffffff);
      auVar36 = auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60;
      auVar38 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar37 = vectorShiftLeftIntegerWord(auVar36,auVar36);
      auVar36 = loadVectorLeftIndexed(0x3c,0x1067f8);
      auVar36 = auVar36 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar36 = vectorMultiplyAddFloatingPoint
                          (auVar38,auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60,
                           auVar37);
      auVar36 = vectorConvertToSignedFixedPointWordSaturate(auVar36,0);
      auVar36 = vectorSplatHalfWord(auVar36,1);
      uVar11 = storeVectorElementHalfWordIndexed(auVar36,0x1c,param_3);
      *(undefined2 *)(iVar22 + 0x1c) = uVar11;
    }
    else if (uVar24 == 1) {
      auVar36 = ZEXT416(0xffffffff);
      auVar36 = auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60;
      auVar38 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar37 = vectorShiftLeftIntegerWord(auVar36,auVar36);
      auVar36 = loadVectorLeftIndexed(0x38,0x1067f8);
      auVar36 = auVar36 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar36 = vectorMultiplyAddFloatingPoint
                          (auVar38,auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60,
                           auVar37);
      auVar36 = vectorConvertToSignedFixedPointWordSaturate(auVar36,0);
      auVar36 = vectorSplatHalfWord(auVar36,1);
      uVar11 = storeVectorElementHalfWordIndexed(auVar36,0x1c,param_3);
      *(undefined2 *)(iVar22 + 0x1c) = uVar11;
    }
    else if (uVar24 == 0) {
      auVar36 = ZEXT416(0xffffffff);
      auVar36 = auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60;
      auVar38 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar37 = vectorShiftLeftIntegerWord(auVar36,auVar36);
      auVar36 = loadVectorLeftIndexed(0x34,0x1067f8);
      auVar36 = auVar36 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar36 = vectorMultiplyAddFloatingPoint
                          (auVar38,auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60,
                           auVar37);
      auVar36 = vectorConvertToSignedFixedPointWordSaturate(auVar36,0);
      auVar36 = vectorSplatHalfWord(auVar36,1);
      uVar11 = storeVectorElementHalfWordIndexed(auVar36,0x1c,param_3);
      *(undefined2 *)(iVar22 + 0x1c) = uVar11;
    }
    else {
      auVar36 = ZEXT416(0xffffffff);
      auVar36 = auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60;
      auVar38 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar37 = vectorShiftLeftIntegerWord(auVar36,auVar36);
      auVar36 = loadVectorLeftIndexed(0x44,0x1067f8);
      auVar36 = auVar36 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar36 = vectorMultiplyAddFloatingPoint
                          (auVar38,auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60,
                           auVar37);
      auVar36 = vectorConvertToSignedFixedPointWordSaturate(auVar36,0);
      auVar36 = vectorSplatHalfWord(auVar36,1);
      uVar11 = storeVectorElementHalfWordIndexed(auVar36,0x1c,param_3);
      *(undefined2 *)(iVar22 + 0x1c) = uVar11;
    }
    goto LAB_001074c0;
  }
  if (uVar24 < 5) {
    if (uVar24 < 2) {
      uVar26 = uVar26 + (ZERO_MASK((param_4 & 0x10)) & 0xb - uVar26);
      if ((param_4 & 0x20) == 0) {
        *param_5 = 1;
      }
      *(undefined4 *)(param_2 + 0x2c) = 0;
      goto LAB_001074c0;
    }
    if (3 < uVar24) {
      uVar26 = uVar26 + (ZERO_MASK((param_4 & 1)) & 0xb - uVar26);
      if ((param_4 & 2) == 0) {
        *param_5 = 1;
      }
      *(undefined4 *)(param_2 + 0x2c) = 0;
      goto LAB_001074c0;
    }
  }
  else if (uVar24 < 8) {
    if (6 < uVar24) {
      uVar26 = uVar26 + (ZERO_MASK((param_4 & 4)) & 0xb - uVar26);
      if ((param_4 & 8) == 0) {
        *param_5 = 1;
      }
      *(undefined4 *)(param_2 + 0x2c) = 0;
      goto LAB_001074c0;
    }
  }
  else if (uVar24 == 0xb) {
    uVar26 = 0xc;
    goto LAB_001074c0;
  }
  uVar26 = 0xd;
  *(undefined4 *)(param_2 + 0x2c) = 0;
LAB_001074c0:
  *(short *)(iVar22 + 0x14) = (short)uVar25;
  *(short *)(iVar22 + 0x16) = (short)uVar25;
  if (param_6 != (undefined4 *)0x0) {
    *param_6 = *(undefined4 *)(param_2 + 0x2c);
  }
  if (uVar24 == 4) {
    if (((param_1 != (MobyInstance *)0x0) && ((param_1->modeBits & HAS_SPECIAL_VARS) != NONE)) &&
       (iVar22 = *(int *)((int)param_1->pVar + 0x10), iVar22 != 0)) {
      *(undefined1 *)(iVar22 + 0x2e) = 1;
    }
  }
  else if (((param_1 != (MobyInstance *)0x0) && ((param_1->modeBits & HAS_SPECIAL_VARS) != NONE)) &&
          (iVar22 = *(int *)((int)param_1->pVar + 0x10), iVar22 != 0)) {
    *(undefined1 *)(iVar22 + 0x2e) = 0;
  }
  return uVar26;
}


// 0x01075b0 (0x230 bytes)
void MB_AnimBoneCollLines(MobyInstance *param_1,uint *param_2,int param_3)

{
  int iVar1;
  double dVar2;
  GPiece<16> auStack_c0;
  GPiece<16> auStack_b0;
  GPiece<48> local_a0;
  
  iVar1 = 0;
  if (param_3 != 0) {
    do {
      if (*param_2 == 0xffffffff) {
        return;
      }
      if ((((uint)param_1->updateId == *param_2) &&
          (dVar2 = (double)BlendAnimFrame(param_1), (double)(float)param_2[1] <= dVar2))
         && (dVar2 <= (double)(float)param_2[2])) {
        GetBonePosition(param_1,param_2[3],auStack_c0);
        GetBonePosition(param_1,param_2[4],auStack_b0);
        FastWrapRot((float)param_2[6],(param_1->rotation).z);
        CollLine(auStack_c0,auStack_b0,0,param_1,local_a0);
      }
      iVar1 = iVar1 + 1;
      param_2 = param_2 + 8;
    } while (iVar1 != param_3);
  }
  return;
}


// 0x0107860 (0x580 bytes)
// inlined: FastAtan2 @0x1079f0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [p2_mobyutil] iterates moby array (skip one), range test, CollDamageMobyDirect */

void MB_DamageMobyList
               (double param_1,double param_2,double param_3,int param_4,undefined8 param_5,
               undefined8 param_6,undefined8 param_7,int *param_8,int param_9,int param_10,
               undefined4 param_11)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  undefined2 uVar4;
  int iVar5;
  undefined4 uVar6;
  ulonglong *puVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  float *pfVar16;
  longlong lVar17;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  int iVar18;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar19;
  ulonglong in_f28;
  double dVar20;
  ulonglong in_f29;
  double dVar21;
  ulonglong in_f30;
  ulonglong in_f31;
  GPiece<16> auVar22;
  GPiece<16> auVar23;
  GPiece<16> auVar24;
  GPiece<16> auVar25;
  GPiece<16> auVar26;
  GPiece<16> auVar27;
  GPiece<16> auVar28;
  GPiece<16> auVar29;
  GPiece<16> auVar30;
  GPiece<16> auVar31;
  GPiece<16> auVar32;
  GPiece<16> auVar33;
  GPiece<16> auVar34;
  GPiece<16> auVar35;
  GPiece<16> auVar36;
  GPiece<16> auVar37;
  GPiece<16> auVar38;
  GPiece<16> auVar39;
  float fStack00000040;
  float fStack00000044;
  undefined1 in_stack_0000007f;
  undefined1 in_stack_00000087;
  
  uVar12 = ZEXT48(&stack0x00000000);
  lVar1 = uVar12 - 0x150;
  puVar7 = (ulonglong *)lVar1;
  *puVar7 = uVar12;
  puVar7[0x2c] = in_LR;
  puVar7[0x26] = in_f28;
  puVar7[0x27] = in_f29;
  puVar7[0x28] = in_f30;
  puVar7[0x29] = in_f31;
  puVar7[0x22] = unaff_r28;
  *(float *)(puVar7 + 0x1a) = (float)param_2;
  puVar7[0x20] = unaff_r26;
  *(float *)((int)puVar7 + 0xd4) = (float)param_2;
  iVar18 = 0;
  *(float *)(puVar7 + 0x1b) = (float)param_2;
  *(float *)((int)puVar7 + 0xdc) = (float)param_2;
  uVar11 = 0xd0;
  puVar7[0x23] = unaff_r29;
  puVar7[0x24] = unaff_r30;
  puVar7[0x1e] = unaff_r24;
  puVar7[0x25] = unaff_r31;
  puVar7[0x1f] = unaff_r25;
  puVar7[0x21] = unaff_r27;
  auVar39 = *(undefined1 (*) [16])(puVar7 + 0x1a);
  if (0 < param_9) {
    fStack00000044 = (float)param_6;
    dVar21 = (double)fStack00000044;
    fStack00000040 = (float)((ulonglong)param_6 >> 0x20);
    dVar20 = (double)fStack00000040;
    _fStack00000040 = param_6;
    do {
      iVar5 = *param_8;
      if (iVar5 != param_10) {
        fVar3 = *(float *)(iVar5 + 0x14);
        fVar2 = (float)((double)*(float *)(iVar5 + 0x10) - dVar20);
        *(int *)(puVar7 + 0x14) = param_4;
        fVar3 = (float)((double)fVar3 - dVar21);
        *(undefined4 *)((int)puVar7 + 0xa4) = param_11;
        *(float *)((int)puVar7 + 0xac) = (float)param_1;
        *(undefined4 *)(puVar7 + 0x16) = param_11;
        uVar4 = *(undefined2 *)(param_4 + 0xa6);
        *(undefined1 *)(puVar7 + 0x15) = in_stack_0000007f;
        fVar9 = ABS(fVar2);
        fVar10 = ABS(fVar3);
        *(float *)(puVar7 + 0x18) = fVar2;
        *(undefined1 *)((int)puVar7 + 0xa9) = in_stack_00000087;
        *(undefined2 *)((int)puVar7 + 0xaa) = uVar4;
        *(float *)((int)puVar7 + 0xc4) = fVar3;
        *(float *)(puVar7 + 0x19) = fVar9 - fVar10;
        uVar13 = (ulonglong)(*(uint *)(puVar7 + 0x18) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar7 + 0x19) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)((int)puVar7 + 0xc4) >> 0x1d) & 4;
        fVar2 = ABS(*(float *)(puVar7 + 0x18));
        if (*(float *)(puVar7 + 0x19) - 0.0 < 0.0) {
          fVar2 = fVar10;
        }
        auVar25 = loadVectorLeftIndexed(uVar13 << 2,0x735900);
        auVar22 = loadVectorLeftIndexed(4,uVar13 << 2 | 0x735900);
        fVar3 = ABS(*(float *)((int)puVar7 + 0xc4));
        if (*(float *)(puVar7 + 0x19) - 0.0 < 0.0) {
          fVar3 = fVar9;
        }
        if (0.0 < fVar2) {
          lVar17 = uVar12 - 0x140;
          lVar14 = uVar12 - 0xd0;
          lVar15 = uVar12 - 0xe0;
          lVar19 = 2;
          fVar2 = (fVar3 - fVar2) / (fVar3 + fVar2);
          fVar3 = fVar2 * fVar2;
          *(float *)((int)puVar7 + 0x7c) = fVar2;
          *(float *)((int)puVar7 + 0x74) = fVar2;
          *(float *)(puVar7 + 0xf) = fVar2;
          *(float *)(puVar7 + 0xe) = fVar2;
          fVar2 = fVar3 * fVar3;
          *(float *)((int)puVar7 + 0x74) = *(float *)((int)puVar7 + 0x74) * fVar3;
          *(float *)(puVar7 + 0xf) = *(float *)(puVar7 + 0xf) * fVar2;
          *(float *)((int)puVar7 + 0x7c) = *(float *)((int)puVar7 + 0x7c) * fVar2 * fVar3;
          do {
            *(float *)((int)lVar17 + 0x70) = *(float *)((int)lVar17 + 0x60) * fVar2 * fVar2;
            iVar8 = (int)lVar15;
            lVar15 = lVar15 + 8;
            lVar17 = lVar17 + 8;
            *(float *)((int)lVar14 + 4) = *(float *)(iVar8 + 4) * fVar2 * fVar2;
            lVar14 = lVar14 + 8;
            lVar19 = lVar19 + -1;
          } while (lVar19 != 0);
          pfVar16 = (float *)&DAT_007358e0;
          lVar15 = uVar12 - 0xe0;
          lVar17 = 4;
          lVar14 = lVar1;
          do {
            fVar2 = *pfVar16;
            fVar3 = pfVar16[1];
            pfVar16 = pfVar16 + 2;
            *(float *)((int)lVar14 + 0x70) = *(float *)((int)lVar14 + 0x70) * fVar2;
            lVar14 = lVar14 + 8;
            *(float *)((int)lVar15 + 4) = *(float *)((int)lVar15 + 4) * fVar3;
            lVar15 = lVar15 + 8;
            lVar17 = lVar17 + -1;
          } while (lVar17 != 0);
          auVar23 = ZEXT416(0);
          auVar23 = auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60;
          lVar15 = 4;
          lVar14 = uVar12 - 0xe0;
          do {
            auVar29 = loadVectorLeftIndexed(uVar11,lVar14);
            lVar17 = lVar14 + 4;
            auVar23 = auVar23 >> 0x60 & (GPiece<16>)0xffffffff;
            auVar24 = loadVectorRightIndexed(0x10,lVar14);
            lVar14 = lVar14 + 8;
            auVar26 = loadVectorLeftIndexed(uVar11,lVar17);
            auVar28 = loadVectorRightIndexed(0x10,lVar17);
            auVar23 = vectorAddFloatingPoint
                                (auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60,
                                 auVar29 | auVar24);
            auVar23 = vectorAddFloatingPoint(auVar23,auVar26 | auVar28);
            lVar15 = lVar15 + -1;
          } while (lVar15 != 0);
          auVar29 = loadVectorLeftIndexed(4,0x1077e0);
          auVar29 = auVar29 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar23 = vectorAddFloatingPoint
                              (auVar23,auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60
                              );
          auVar22 = vectorMultiplyAddFloatingPoint(auVar23,auVar25,auVar22);
        }
        else {
          auVar22 = ZEXT416(0);
          auVar22 = auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60;
        }
        auVar25 = auVar22 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar27 = auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60;
        auVar25 = ZEXT416(0xffffffff);
        auVar29 = auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60;
        auVar25 = ZEXT416(0xffffffff);
        auVar35 = auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60;
        auVar25 = loadVectorLeftIndexed(8,0x1077e0);
        auVar23 = loadVectorLeftIndexed(0xc,0x1077e0);
        auVar25 = auVar25 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar23 = auVar23 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar24 = auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60;
        auVar30 = vectorShiftLeftIntegerWord(auVar29,auVar29);
        auVar29 = vectorAddFloatingPoint
                            (auVar22,auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60);
        auVar28 = vectorSubtractFloatingPoint(auVar24,auVar22);
        auVar25 = loadVectorLeftIndexed(0x10,0x1077e0);
        auVar25 = auVar25 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar26 = auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60;
        auVar25 = ZEXT416(0xffffffff);
        auVar23 = auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60;
        auVar25 = ZEXT416(0xffffffff);
        auVar37 = auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60;
        auVar32 = vectorSubtractFloatingPoint(auVar26,auVar22);
        auVar25 = ZEXT416(0xffffffff);
        auVar38 = auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60;
        auVar25 = vectorSubtractFloatingPoint(auVar24,auVar29);
        auVar31 = vectorSubtractFloatingPoint(auVar26,auVar29);
        auVar34 = vectorCompareGreaterThanFloatingPoint(auVar28,auVar22);
        auVar24 = vectorSubtractFloatingPoint(auVar24,auVar27);
        auVar22 = vectorConditionalSelect(auVar28,auVar22,auVar34);
        auVar28 = vectorSubtractFloatingPoint(auVar26,auVar27);
        auVar26 = vectorCompareGreaterThanFloatingPoint(auVar22,auVar32);
        auVar26 = vectorConditionalSelect(auVar32,auVar22,auVar26);
        auVar22 = ZEXT416(0xffffffff);
        auVar32 = auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60;
        auVar22 = vectorCompareGreaterThanFloatingPoint(auVar25,auVar29);
        auVar29 = vectorConditionalSelect(auVar25,auVar29,auVar22);
        auVar25 = vectorCompareGreaterThanFloatingPoint(auVar24,auVar27);
        auVar34 = vectorShiftLeftIntegerWord(auVar32,auVar32);
        auVar22 = ZEXT416(0xffffffff);
        auVar32 = auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60;
        auVar22 = vectorCompareGreaterThanFloatingPoint(auVar29,auVar31);
        auVar24 = vectorConditionalSelect(auVar24,auVar27,auVar25);
        auVar33 = vectorMultiplyAddFloatingPoint(auVar26,auVar26,auVar34);
        auVar27 = vectorShiftLeftIntegerWord(auVar23,auVar23);
        auVar23 = vectorConditionalSelect(auVar31,auVar29,auVar22);
        auVar29 = vectorShiftLeftIntegerWord(auVar35,auVar35);
        auVar22 = loadVectorLeftIndexed(0x14,0x1077e0);
        auVar25 = vectorCompareGreaterThanFloatingPoint(auVar24,auVar28);
        auVar31 = vectorShiftLeftIntegerWord(auVar32,auVar32);
        auVar32 = vectorMultiplyAddFloatingPoint(auVar23,auVar23,auVar30);
        auVar22 = auVar22 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar34 = auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60;
        auVar22 = ZEXT416(0xffffffff);
        auVar30 = auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60;
        auVar24 = vectorConditionalSelect(auVar28,auVar24,auVar25);
        auVar22 = ZEXT416(0xffffffff);
        auVar25 = auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60;
        auVar22 = loadVectorLeftIndexed(0x18,0x1077e0);
        auVar35 = vectorShiftLeftIntegerWord(auVar30,auVar30);
        auVar22 = auVar22 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar36 = auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60;
        auVar27 = vectorMultiplyAddFloatingPoint(auVar33,auVar26,auVar27);
        auVar25 = vectorShiftLeftIntegerWord(auVar25,auVar25);
        auVar22 = loadVectorLeftIndexed(0x1c,0x1077e0);
        auVar29 = vectorMultiplyAddFloatingPoint(auVar32,auVar23,auVar29);
        auVar28 = vectorMultiplyAddFloatingPoint(auVar24,auVar24,auVar25);
        auVar22 = auVar22 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar25 = auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60;
        auVar26 = vectorMultiplyAddFloatingPoint(auVar27,auVar34,auVar26);
        auVar31 = vectorMultiplyAddFloatingPoint(auVar32,auVar29,auVar31);
        auVar29 = vectorMultiplyAddFloatingPoint(auVar29,auVar34,auVar23);
        auVar30 = vectorShiftLeftIntegerWord(auVar37,auVar37);
        auVar22 = ZEXT416(0xffffffff);
        auVar22 = auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60;
        auVar23 = vectorShiftLeftIntegerWord(auVar22,auVar22);
        auVar22 = ZEXT416(0xffffffff);
        auVar22 = auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60;
        auVar35 = vectorMultiplyAddFloatingPoint(auVar32,auVar31,auVar35);
        auVar29 = vectorMultiplyAddFloatingPoint(auVar31,auVar36,auVar29);
        auVar31 = vectorMultiplyAddFloatingPoint(auVar33,auVar27,auVar23);
        auVar27 = vectorShiftLeftIntegerWord(auVar22,auVar22);
        auVar23 = loadVectorLeftIndexed(0x20,0x1077e0);
        auVar22 = ZEXT416(0xffffffff);
        auVar37 = auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60;
        auVar22 = auVar23 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar23 = auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60;
        auVar27 = vectorMultiplyAddFloatingPoint(auVar28,auVar24,auVar27);
        auVar37 = vectorShiftLeftIntegerWord(auVar37,auVar37);
        auVar30 = vectorMultiplyAddFloatingPoint(auVar32,auVar35,auVar30);
        auVar29 = vectorMultiplyAddFloatingPoint(auVar35,auVar25,auVar29);
        auVar32 = vectorShiftLeftIntegerWord(auVar38,auVar38);
        auVar26 = vectorMultiplyAddFloatingPoint(auVar31,auVar36,auVar26);
        auVar22 = ZEXT416(0xffffffff);
        auVar35 = auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60;
        auVar32 = vectorMultiplyAddFloatingPoint(auVar33,auVar31,auVar32);
        auVar22 = ZEXT416(0xffffffff);
        auVar22 = auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60;
        auVar24 = vectorMultiplyAddFloatingPoint(auVar27,auVar34,auVar24);
        auVar35 = vectorShiftLeftIntegerWord(auVar35,auVar35);
        auVar29 = vectorMultiplyAddFloatingPoint(auVar30,auVar23,auVar29);
        auVar30 = vectorShiftLeftIntegerWord(auVar22,auVar22);
        auVar22 = ZEXT416(0xffffffff);
        auVar31 = auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60;
        auVar30 = vectorMultiplyAddFloatingPoint(auVar33,auVar32,auVar30);
        auVar26 = vectorMultiplyAddFloatingPoint(auVar32,auVar25,auVar26);
        auVar34 = vectorMultiplyAddFloatingPoint(auVar28,auVar27,auVar37);
        auVar22 = ZEXT416(0xffffffff);
        auVar32 = auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60;
        auVar27 = vectorShiftLeftIntegerWord(auVar31,auVar31);
        auVar22 = ZEXT416(0xffffffff);
        auVar22 = auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60;
        auVar29 = vectorMultiplyAddFloatingPoint(auVar29,auVar39,auVar35);
        auVar26 = vectorMultiplyAddFloatingPoint(auVar30,auVar23,auVar26);
        auVar27 = vectorMultiplyAddFloatingPoint(auVar28,auVar34,auVar27);
        auVar30 = vectorShiftLeftIntegerWord(auVar32,auVar32);
        auVar24 = vectorMultiplyAddFloatingPoint(auVar34,auVar36,auVar24);
        auVar32 = vectorShiftLeftIntegerWord(auVar22,auVar22);
        auVar31 = *(undefined1 (*) [16])(puVar7 + 0x12);
        auVar22 = auVar29 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar26 = vectorMultiplyAddFloatingPoint(auVar26,auVar39,auVar30);
        uVar6 = storeVectorElementWordIndexed
                          (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60,0x90,lVar1)
        ;
        *(undefined4 *)(puVar7 + 0x12) = uVar6;
        auVar28 = vectorMultiplyAddFloatingPoint(auVar28,auVar27,auVar32);
        auVar25 = vectorMultiplyAddFloatingPoint(auVar27,auVar25,auVar24);
        auVar22 = ZEXT416(0xffffffff);
        auVar27 = auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60;
        auVar24 = vectorPermute(auVar29,auVar31,_DAT_00107810);
        auVar22 = auVar26 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar26 = vectorMultiplyAddFloatingPoint(auVar28,auVar23,auVar25);
        auVar28 = vectorShiftLeftIntegerWord(auVar27,auVar27);
        uVar6 = storeVectorElementWordIndexed
                          (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60,0x94,lVar1)
        ;
        *(undefined4 *)((int)puVar7 + 0x94) = uVar6;
        *(float *)(puVar7 + 0x13) = (float)param_3;
        *(undefined4 *)((int)puVar7 + 0x9c) = 0x45afdf66;
        auVar22 = loadVectorLeftIndexed(0x40,0x1077e0);
        *(float *)(puVar7 + 0x1a) = (float)param_3;
        *(float *)((int)puVar7 + 0xd4) = (float)param_3;
        *(float *)(puVar7 + 0x1b) = (float)param_3;
        *(float *)((int)puVar7 + 0xdc) = (float)param_3;
        auVar29 = _DAT_00107850;
        auVar23 = _DAT_00107840;
        auVar25 = _DAT_00107830;
        auVar26 = vectorMultiplyAddFloatingPoint(auVar26,auVar39,auVar28);
        auVar22 = auVar22 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar11 = 0xd0;
        *(undefined4 *)((int)puVar7 + 0x5c) = *(undefined4 *)((int)puVar7 + 0xac);
        *(undefined4 *)(puVar7 + 0xb) = *(undefined4 *)(puVar7 + 0x15);
        *(undefined4 *)((int)puVar7 + 0x54) = *(undefined4 *)((int)puVar7 + 0xa4);
        *(undefined4 *)(puVar7 + 10) = *(undefined4 *)(puVar7 + 0x14);
        auVar25 = vectorPermute(*(undefined1 (*) [16])(puVar7 + 0x1a),auVar26,auVar25);
        *(undefined4 *)((int)puVar7 + 0x6c) = *(undefined4 *)((int)puVar7 + 0xbc);
        *(undefined4 *)(puVar7 + 0xd) = *(undefined4 *)(puVar7 + 0x17);
        *(undefined4 *)((int)puVar7 + 100) = *(undefined4 *)((int)puVar7 + 0xb4);
        *(undefined4 *)(puVar7 + 0xc) = *(undefined4 *)(puVar7 + 0x16);
        auVar22 = vectorPermute(auVar25,auVar22 | auVar22 << 0x20 | auVar22 << 0x40 |
                                        auVar22 << 0x60,auVar23);
        auVar22 = vectorPermute(auVar22,auVar24,auVar29);
        *(undefined1 (*) [16])(puVar7 + 8) = auVar22;
        CollDamageMobyDirect
                  (iVar5,0x50,puVar7[8],puVar7[9],puVar7[10],puVar7[0xb],puVar7[0xc],puVar7[0xd]);
      }
      iVar18 = iVar18 + 1;
      param_8 = param_8 + 1;
    } while (iVar18 < param_9);
  }
  return;
}


// 0x0107de8 (0x390 bytes)
// inlined: FastAtan2 @0x107eb4, FastAtan2 @0x10804c
/* [p2_mobyutil] polynomial atan2 with quadrant table 0x735900 on packed vec */

void MB_VecAtan2Angles
               (ulonglong param_1,undefined8 param_2,float *param_3,float *param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  ulonglong *puVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  float *pfVar16;
  longlong lVar17;
  float fStack00000030;
  float fStack00000034;
  float fStack00000038;
  
  uVar10 = ZEXT48(&stack0x00000000);
  lVar12 = uVar10 - 0x80;
  puVar7 = (ulonglong *)lVar12;
  *puVar7 = uVar10;
  fStack00000038 = (float)((ulonglong)param_2 >> 0x20);
  fStack00000034 = (float)param_1;
  fStack00000030 = (float)(param_1 >> 0x20);
  if ((int)param_2 == 0x45afdf66) {
    fVar2 = ABS(fStack00000030);
    fVar5 = ABS(fStack00000034);
    *(float *)(puVar7 + 6) = fVar2 - fVar5;
    fVar1 = 0.0;
    uVar11 = param_1 >> 0x3c & 8 |
             (ulonglong)(*(uint *)(puVar7 + 6) >> 0x1e) & 2 | (param_1 << 0x20) >> 0x3d & 4;
    fVar3 = fVar2;
    if (*(float *)(puVar7 + 6) - 0.0 < 0.0) {
      fVar3 = fVar5;
    }
    fVar6 = *(float *)(&g_atanQuadrantTable + (int)(uVar11 << 2));
    fVar4 = *(float *)(((uint)(uVar11 << 2) | 0x735900) + 4);
    if (*(float *)(puVar7 + 6) - 0.0 < 0.0) {
      fVar5 = fVar2;
    }
    if (0.0 < fVar3) {
      lVar15 = uVar10 - 0x70;
      lVar13 = uVar10 - 0x38;
      lVar14 = uVar10 - 0x48;
      lVar17 = 2;
      fVar3 = (fVar5 - fVar3) / (fVar5 + fVar3);
      fVar5 = fVar3 * fVar3;
      *(float *)((int)puVar7 + 0x44) = fVar3;
      *(float *)((int)puVar7 + 0x3c) = fVar3;
      *(float *)(puVar7 + 8) = fVar3;
      *(float *)(puVar7 + 7) = fVar3;
      fVar3 = fVar5 * fVar5;
      *(float *)((int)puVar7 + 0x3c) = *(float *)((int)puVar7 + 0x3c) * fVar5;
      *(float *)(puVar7 + 8) = *(float *)(puVar7 + 8) * fVar3;
      *(float *)((int)puVar7 + 0x44) = *(float *)((int)puVar7 + 0x44) * fVar3 * fVar5;
      do {
        *(float *)((int)lVar15 + 0x38) = *(float *)((int)lVar15 + 0x28) * fVar3 * fVar3;
        iVar8 = (int)lVar14;
        lVar14 = lVar14 + 8;
        lVar15 = lVar15 + 8;
        *(float *)((int)lVar13 + 4) = *(float *)(iVar8 + 4) * fVar3 * fVar3;
        lVar13 = lVar13 + 8;
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
      lVar15 = uVar10 - 0x48;
      lVar17 = 4;
      pfVar16 = (float *)&DAT_007358e0;
      lVar13 = lVar15;
      lVar14 = lVar12;
      do {
        fVar3 = *pfVar16;
        fVar5 = pfVar16[1];
        pfVar16 = pfVar16 + 2;
        *(float *)((int)lVar14 + 0x38) = *(float *)((int)lVar14 + 0x38) * fVar3;
        lVar14 = lVar14 + 8;
        *(float *)((int)lVar13 + 4) = *(float *)((int)lVar13 + 4) * fVar5;
        lVar13 = lVar13 + 8;
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
      lVar13 = 2;
      do {
        iVar8 = (int)lVar12;
        iVar9 = (int)lVar15;
        lVar12 = lVar12 + 0x10;
        lVar15 = lVar15 + 0x10;
        fVar1 = fVar1 + *(float *)(iVar8 + 0x38) + *(float *)(iVar9 + 4) + *(float *)(iVar9 + 8) +
                *(float *)(iVar9 + 0xc);
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
      fVar1 = (fVar1 + 0.7853982) * fVar6 + fVar4;
    }
    *param_3 = fVar1;
    *param_4 = *param_4 * SQRT(fStack00000030 * fStack00000030 + fStack00000034 * fStack00000034);
    *param_5 = *param_5 * fStack00000038;
  }
  else {
    fStack00000030 = ABS(fStack00000030);
    fStack00000034 = ABS(fStack00000034);
    *(float *)((int)puVar7 + 0x34) = fStack00000030 - fStack00000034;
    fVar1 = 0.0;
    uVar11 = param_1 >> 0x3c & 8 |
             (ulonglong)(*(uint *)((int)puVar7 + 0x34) >> 0x1e) & 2 | (param_1 << 0x20) >> 0x3d & 4;
    fVar3 = fStack00000030;
    if (*(float *)((int)puVar7 + 0x34) - 0.0 < 0.0) {
      fVar3 = fStack00000034;
    }
    fVar5 = *(float *)(&g_atanQuadrantTable + (int)(uVar11 << 2));
    if (*(float *)((int)puVar7 + 0x34) - 0.0 < 0.0) {
      fStack00000034 = fStack00000030;
    }
    fVar2 = *(float *)(((uint)(uVar11 << 2) | 0x735900) + 4);
    if (0.0 < fVar3) {
      lVar15 = uVar10 - 0x70;
      lVar14 = uVar10 - 0x28;
      lVar13 = uVar10 - 0x18;
      lVar17 = 2;
      fVar3 = (fStack00000034 - fVar3) / (fStack00000034 + fVar3);
      fVar4 = fVar3 * fVar3;
      *(float *)((int)puVar7 + 100) = fVar3;
      *(float *)((int)puVar7 + 0x5c) = fVar3;
      *(float *)(puVar7 + 0xc) = fVar3;
      *(float *)(puVar7 + 0xb) = fVar3;
      fVar3 = fVar4 * fVar4;
      *(float *)((int)puVar7 + 0x5c) = *(float *)((int)puVar7 + 0x5c) * fVar4;
      *(float *)(puVar7 + 0xc) = *(float *)(puVar7 + 0xc) * fVar3;
      *(float *)((int)puVar7 + 100) = *(float *)((int)puVar7 + 100) * fVar3 * fVar4;
      do {
        *(float *)((int)lVar15 + 0x58) = *(float *)((int)lVar15 + 0x48) * fVar3 * fVar3;
        iVar8 = (int)lVar14;
        lVar15 = lVar15 + 8;
        lVar14 = lVar14 + 8;
        *(float *)((int)lVar13 + 4) = *(float *)(iVar8 + 4) * fVar3 * fVar3;
        lVar13 = lVar13 + 8;
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
      lVar15 = uVar10 - 0x28;
      pfVar16 = (float *)&DAT_007358e0;
      lVar17 = 4;
      lVar13 = lVar15;
      lVar14 = lVar12;
      do {
        fVar3 = *pfVar16;
        fVar4 = pfVar16[1];
        pfVar16 = pfVar16 + 2;
        *(float *)((int)lVar14 + 0x58) = *(float *)((int)lVar14 + 0x58) * fVar3;
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
        fVar1 = fVar1 + *(float *)(iVar8 + 0x58) + *(float *)(iVar9 + 4) + *(float *)(iVar9 + 8) +
                *(float *)(iVar9 + 0xc);
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
      fVar1 = (fVar1 + 0.7853982) * fVar5 + fVar2;
    }
    *param_3 = fVar1;
  }
  return;
}


// 0x0108180 (0x80 bytes)
double MB_computeLobVelocity
                 (double param_1,double param_2,float *param_3,float *param_4,undefined8 param_5,
                 undefined8 param_6,float *param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  
  fVar2 = param_4[2];
  fVar3 = param_3[2];
  fVar1 = (float)((double)SQRT((*param_4 - *param_3) * (*param_4 - *param_3) +
                               (param_4[1] - param_3[1]) * (param_4[1] - param_3[1])) / param_1);
  if (param_7 != (float *)0x0) {
    *param_7 = fVar1;
    fVar3 = param_3[2];
    fVar2 = param_4[2];
  }
  dVar4 = (double)(-((float)((double)(fVar1 * fVar1) * param_2) * 0.5 + (fVar3 - fVar2)) / fVar1);
  dVar5 = 0.0;
  if (0.0 - fVar1 < 0.0) {
    dVar5 = dVar4;
  }
  if (fVar1 - 0.0 < 0.0) {
    dVar5 = dVar4;
  }
  return dVar5;
}


// 0x0108240 (0xba4 bytes)
longlong MB_randPrimPoints
                   (double param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4,
                   ulonglong param_5,uint param_6)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined2 uVar10;
  undefined2 uVar11;
  undefined2 uVar12;
  int iVar13;
  uint uVar14;
  uint *puVar15;
  undefined4 uVar16;
  ulonglong *puVar17;
  int iVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  longlong lVar22;
  int iVar23;
  float *pfVar24;
  float *pfVar25;
  longlong lVar26;
  longlong lVar27;
  undefined2 *puVar28;
  ulonglong unaff_r14;
  ulonglong unaff_r15;
  ulonglong unaff_r16;
  ulonglong unaff_r17;
  ulonglong unaff_r18;
  ulonglong unaff_r19;
  ulonglong unaff_r20;
  int iVar29;
  ulonglong unaff_r21;
  ulonglong unaff_r22;
  ulonglong unaff_r23;
  ulonglong uVar30;
  longlong lVar31;
  ulonglong unaff_r24;
  longlong lVar32;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  uint uVar33;
  int iVar34;
  ulonglong unaff_r27;
  longlong lVar35;
  ulonglong uVar36;
  float *pfVar37;
  ulonglong unaff_r28;
  int iVar38;
  ulonglong unaff_r29;
  longlong lVar39;
  undefined2 *puVar40;
  ulonglong unaff_r30;
  longlong lVar41;
  undefined2 *puVar42;
  ulonglong unaff_r31;
  ulonglong in_LR;
  double dVar43;
  ulonglong in_f18;
  double in_f19;
  ulonglong in_f20;
  double dVar44;
  ulonglong in_f21;
  double dVar45;
  ulonglong in_f22;
  double dVar46;
  ulonglong in_f23;
  double dVar47;
  ulonglong in_f24;
  double dVar48;
  ulonglong in_f25;
  double dVar49;
  ulonglong in_f26;
  double dVar50;
  ulonglong in_f27;
  double dVar51;
  ulonglong in_f28;
  double dVar52;
  ulonglong in_f29;
  double dVar53;
  ulonglong in_f30;
  double dVar54;
  double dVar55;
  ulonglong in_f31;
  double dVar56;
  GPiece<16> auVar57;
  GPiece<16> auVar58;
  GPiece<16> auVar59;
  GPiece<16> auVar60;
  GPiece<16> auVar61;
  GPiece<16> auVar62;
  GPiece<16> auVar63;
  GPiece<16> auVar64;
  GPiece<16> auVar65;
  GPiece<16> auVar66;
  GPiece<16> auVar67;
  GPiece<16> auVar68;
  GPiece<16> auVar69;
  GPiece<16> auVar70;
  
  uVar36 = ZEXT48(&stack0x00000000);
  lVar1 = uVar36 - 0xa70;
  puVar17 = (ulonglong *)lVar1;
  *puVar17 = uVar36;
  puVar17[0x150] = in_LR;
  puVar17[0x140] = in_f18;
  puVar17[0x141] = (ulonglong)in_f19;
  puVar17[0x142] = in_f20;
  puVar17[0x143] = in_f21;
  puVar17[0x144] = in_f22;
  puVar17[0x145] = in_f23;
  puVar17[0x146] = in_f24;
  puVar17[0x147] = in_f25;
  puVar17[0x148] = in_f26;
  puVar17[0x149] = in_f27;
  puVar17[0x14a] = in_f28;
  puVar17[0x14b] = in_f29;
  puVar17[0x14c] = in_f30;
  puVar17[0x14d] = in_f31;
  puVar17[0x137] = unaff_r23;
  puVar17[0x139] = unaff_r25;
  iVar18 = (int)param_2;
  iVar13 = *(int *)(iVar18 + 0x24);
  puVar17[0x12a] = param_4;
  puVar17[299] = param_5;
  puVar17[0x13f] = unaff_r31;
  puVar17[0x12f] = unaff_r15;
  uVar14 = *(uint *)(iVar13 + 0x10);
  uVar30 = (ulonglong)uVar14;
  puVar17[0x13e] = unaff_r30;
  puVar17[0x13d] = unaff_r29;
  puVar17[0x13c] = unaff_r28;
  puVar17[0x13b] = unaff_r27;
  puVar17[0x13a] = unaff_r26;
  puVar17[0x138] = unaff_r24;
  puVar17[0x136] = unaff_r22;
  puVar17[0x135] = unaff_r21;
  puVar17[0x134] = unaff_r20;
  puVar17[0x133] = unaff_r19;
  puVar17[0x132] = unaff_r18;
  puVar17[0x131] = unaff_r17;
  puVar17[0x130] = unaff_r16;
  puVar17[0x12e] = unaff_r14;
  if (uVar14 == 0) {
    lVar22 = 0;
  }
  else {
    if (*(short *)(uVar14 + 2) != 0) {
      Moby_BuildJointMatrices(param_2,*(short *)(uVar14 + 2),uVar36 - 0x9d0);
    }
    uVar14 = *(uint *)(uVar14 + 4);
    if ((int)uVar14 < 1) {
      lVar22 = 0;
    }
    else {
      dVar56 = 0.0;
      uVar33 = 0;
      iVar29 = ((int)uVar14 >> 5) + (uint)((int)uVar14 < 0 && (uVar14 & 0x1f) != 0);
      lVar22 = uVar30 + 0x10;
      iVar38 = 0;
      iVar13 = (int)(uVar36 - 0x9d0);
      if (0 < iVar29) {
        lVar39 = uVar30 + 0x22;
        auVar58 = loadVectorLeftIndexed(4,0x108200);
        lVar41 = uVar30 + 0x26;
        lVar27 = uVar30 + 0x2a;
        auVar62 = loadVectorLeftIndexed(8,0x108200);
        lVar35 = uVar30 + 0x2e;
        auVar58 = auVar58 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar59 = auVar58 | auVar58 << 0x20 | auVar58 << 0x40 | auVar58 << 0x60;
        auVar58 = auVar62 >> 0x60 & (GPiece<16>)0xffffffff;
        lVar31 = uVar30 + 0x1c;
        lVar32 = uVar36 - 0x1d0;
        lVar26 = lVar1;
        iVar38 = 0;
        do {
          puVar15 = (uint *)lVar22;
          uVar14 = *puVar15 & 0xff;
          if ((*puVar15 & 1) != 0 && (1 << (uVar33 & 0x3f) & param_6) != 0) {
            iVar23 = (int)lVar26;
            *(uint **)(iVar23 + 0x8f0) = puVar15;
            puVar40 = (undefined2 *)lVar39;
            puVar42 = (undefined2 *)lVar41;
            puVar28 = (undefined2 *)lVar27;
            if (uVar14 < 3) {
              if (uVar14 < 2) {
                uVar10 = *puVar40;
                uVar11 = *(undefined2 *)(puVar15 + 5);
                uVar12 = *puVar42;
                *(undefined2 *)(puVar17 + 0xe) = *(undefined2 *)(puVar15 + 4);
                *(undefined2 *)((int)puVar17 + 0x72) = uVar10;
                *(undefined2 *)((int)puVar17 + 0x74) = uVar11;
                *(undefined2 *)((int)puVar17 + 0x76) = uVar12;
                uVar10 = *puVar28;
                auVar62 = ZEXT416(0xffffffff);
                auVar62 = auVar62 | auVar62 << 0x20 | auVar62 << 0x40 | auVar62 << 0x60;
                uVar11 = *(undefined2 *)(puVar15 + 7);
                uVar12 = *(undefined2 *)lVar35;
                *(undefined2 *)(puVar17 + 0xf) = *(undefined2 *)(puVar15 + 6);
                *(undefined2 *)((int)puVar17 + 0x7a) = uVar10;
                *(undefined2 *)((int)puVar17 + 0x7c) = uVar11;
                auVar57 = vectorShiftLeftIntegerWord(auVar62,auVar62);
                *(undefined2 *)((int)puVar17 + 0x7e) = uVar12;
                auVar61 = loadVectorLeftIndexed(0x2c,param_2);
                auVar62 = ZEXT416(0xffffffff);
                auVar62 = auVar62 | auVar62 << 0x20 | auVar62 << 0x40 | auVar62 << 0x60;
                auVar63 = vectorMultiplyAddFloatingPoint(auVar61,auVar59,auVar57);
                auVar64 = loadVectorLeftIndexed(0x7c,lVar1);
                auVar60 = loadVectorLeftIndexed(0x70,lVar1);
                auVar66 = vectorShiftLeftIntegerWord(auVar62,auVar62);
                auVar57 = loadVectorLeftIndexed(0x74,lVar1);
                auVar62 = loadVectorLeftIndexed(0x78,lVar1);
                auVar63 = vectorMultiplyAddFloatingPoint(auVar64,auVar63,auVar66);
                auVar64 = auVar63 >> 0x60 & (GPiece<16>)0xffffffff;
                uVar16 = storeVectorElementWordIndexed
                                   (auVar64 | auVar64 << 0x20 | auVar64 << 0x40 | auVar64 << 0x60,
                                    0x7c,lVar1);
                *(undefined4 *)((int)puVar17 + 0x7c) = uVar16;
              }
              else {
                auVar62 = ZEXT416(0xffffffff);
                auVar62 = auVar62 | auVar62 << 0x20 | auVar62 << 0x40 | auVar62 << 0x60;
                auVar66 = vectorShiftLeftIntegerWord(auVar62,auVar62);
                auVar63 = *(undefined1 (*) [16])(puVar15[1] * 0x10 + iVar13);
                *(undefined1 (*) [16])(puVar17 + 0xe) = auVar63;
                uVar10 = *puVar40;
                uVar11 = *(undefined2 *)(puVar15 + 5);
                uVar12 = *puVar42;
                *(undefined2 *)(puVar17 + 0x10) = *(undefined2 *)(puVar15 + 4);
                *(undefined2 *)((int)puVar17 + 0x82) = uVar10;
                *(undefined2 *)((int)puVar17 + 0x84) = uVar11;
                *(undefined2 *)((int)puVar17 + 0x86) = uVar12;
                uVar10 = *puVar28;
                *(undefined2 *)(puVar17 + 0x11) = *(undefined2 *)(puVar15 + 6);
                *(undefined2 *)((int)puVar17 + 0x8a) = uVar10;
                auVar60 = loadVectorLeftIndexed(in_LR,lVar31);
                auVar64 = loadVectorRightIndexed(0x10,lVar31);
                auVar61 = loadVectorLeftIndexed(0x2c,param_2);
                auVar62 = auVar63 >> 0x60 & (GPiece<16>)0xffffffff;
                auVar65 = loadVectorLeftIndexed(0x80,lVar1);
                auVar57 = auVar63 >> 0x40 & (GPiece<16>)0xffffffff;
                auVar64 = vectorMultiplyAddFloatingPoint(auVar60 | auVar64,auVar61,auVar66);
                auVar63 = auVar63 >> 0x20 & (GPiece<16>)0xffffffff;
                auVar60 = vectorAddFloatingPoint
                                    (auVar62 | auVar62 << 0x20 | auVar62 << 0x40 | auVar62 << 0x60,
                                     auVar65);
                auVar62 = ZEXT416(0xffffffff);
                auVar66 = auVar62 | auVar62 << 0x20 | auVar62 << 0x40 | auVar62 << 0x60;
                auVar62 = loadVectorLeftIndexed(0x84,lVar1);
                auVar65 = loadVectorLeftIndexed(0x88,lVar1);
                auVar57 = vectorAddFloatingPoint
                                    (auVar57 | auVar57 << 0x20 | auVar57 << 0x40 | auVar57 << 0x60,
                                     auVar62);
                auVar66 = vectorShiftLeftIntegerWord(auVar66,auVar66);
                auVar62 = vectorAddFloatingPoint
                                    (auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60,
                                     auVar65);
                auVar63 = vectorMultiplyAddFloatingPoint(auVar64,auVar59,auVar66);
              }
              auVar64 = ZEXT416(0xffffffff);
              auVar65 = auVar64 | auVar64 << 0x20 | auVar64 << 0x40 | auVar64 << 0x60;
              auVar64 = ZEXT416(0xffffffff);
              auVar67 = auVar64 | auVar64 << 0x20 | auVar64 << 0x40 | auVar64 << 0x60;
              auVar63 = auVar63 >> 0x60 & (GPiece<16>)0xffffffff;
              auVar66 = auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60;
              auVar63 = ZEXT416(0xffffffff);
              auVar68 = auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60;
              auVar64 = vectorShiftLeftIntegerWord(auVar65,auVar65);
              auVar65 = vectorShiftLeftIntegerWord(auVar67,auVar67);
              auVar63 = ZEXT416(0xffffffff);
              auVar69 = auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60;
              auVar63 = ZEXT416(0xffffffff);
              auVar70 = auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60;
              auVar64 = vectorMultiplyAddFloatingPoint(auVar61,auVar59,auVar64);
              auVar57 = auVar57 >> 0x60 & (GPiece<16>)0xffffffff;
              auVar61 = vectorMultiplyAddFloatingPoint
                                  (auVar66,auVar58 | auVar58 << 0x20 | auVar58 << 0x40 |
                                           auVar58 << 0x60,auVar65);
              auVar63 = auVar62 >> 0x60 & (GPiece<16>)0xffffffff;
              auVar62 = ZEXT416(0xffffffff);
              auVar62 = auVar62 | auVar62 << 0x20 | auVar62 << 0x40 | auVar62 << 0x60;
              auVar60 = auVar60 >> 0x60 & (GPiece<16>)0xffffffff;
              auVar67 = vectorShiftLeftIntegerWord(auVar68,auVar68);
              auVar68 = vectorShiftLeftIntegerWord(auVar69,auVar69);
              auVar65 = vectorShiftLeftIntegerWord(auVar62,auVar62);
              auVar69 = vectorShiftLeftIntegerWord(auVar70,auVar70);
              auVar62 = auVar64 >> 0x60 & (GPiece<16>)0xffffffff;
              auVar64 = auVar62 | auVar62 << 0x20 | auVar62 << 0x40 | auVar62 << 0x60;
              auVar61 = vectorMultiplyAddFloatingPoint(auVar61,auVar66,auVar65);
              auVar62 = ZEXT416(0xffffffff);
              auVar65 = auVar62 | auVar62 << 0x20 | auVar62 << 0x40 | auVar62 << 0x60;
              auVar62 = vectorMultiplyAddFloatingPoint
                                  (auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60,
                                   auVar64,auVar67);
              auVar57 = vectorMultiplyAddFloatingPoint
                                  (auVar57 | auVar57 << 0x20 | auVar57 << 0x40 | auVar57 << 0x60,
                                   auVar64,auVar68);
              auVar63 = vectorMultiplyAddFloatingPoint
                                  (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60,
                                   auVar64,auVar69);
              auVar60 = vectorShiftLeftIntegerWord(auVar65,auVar65);
              auVar60 = vectorMultiplyAddFloatingPoint(auVar61,auVar66,auVar60);
              uVar16 = storeVectorElementWordIndexed(auVar63,0x70,lVar1);
              *(undefined4 *)(puVar17 + 0xe) = uVar16;
              uVar16 = storeVectorElementWordIndexed(auVar57,0x74,lVar1);
              *(undefined4 *)((int)puVar17 + 0x74) = uVar16;
              uVar16 = storeVectorElementWordIndexed(auVar62,0x78,lVar1);
              *(undefined4 *)(puVar17 + 0xf) = uVar16;
              uVar16 = storeVectorElementWordIndexed(auVar60,0,lVar32);
              *(undefined4 *)lVar32 = uVar16;
            }
            else if (uVar14 < 4) {
              uVar10 = *puVar40;
              uVar11 = *(undefined2 *)(puVar15 + 5);
              uVar12 = *puVar42;
              *(undefined2 *)(puVar17 + 0x12) = *(undefined2 *)(puVar15 + 4);
              *(undefined2 *)((int)puVar17 + 0x92) = uVar10;
              *(undefined2 *)((int)puVar17 + 0x94) = uVar11;
              *(undefined2 *)((int)puVar17 + 0x96) = uVar12;
              uVar10 = *(undefined2 *)(puVar15 + 6);
              uVar11 = *puVar28;
              uVar12 = *(undefined2 *)lVar35;
              *(undefined2 *)((int)puVar17 + 0x9c) = *(undefined2 *)(puVar15 + 7);
              *(undefined2 *)(puVar17 + 0x13) = uVar10;
              *(undefined2 *)((int)puVar17 + 0x9a) = uVar11;
              *(undefined2 *)((int)puVar17 + 0x9e) = uVar12;
              fVar3 = *(float *)(iVar18 + 0x2c);
              fVar4 = *(float *)((int)puVar17 + 0x9c) * fVar3;
              *(float *)(puVar17 + 0x12) = *(float *)(puVar17 + 0x12) * fVar3;
              *(float *)((int)puVar17 + 0x94) = *(float *)((int)puVar17 + 0x94) * fVar3;
              fVar2 = fVar4 * 0.0009765625;
              *(float *)(puVar17 + 0x13) = *(float *)(puVar17 + 0x13) * fVar3;
              *(float *)(iVar23 + 0x8a0) =
                   fVar4 * 0.004089593 * fVar2 * fVar2 +
                   fVar4 * 0.0015339808 * fVar2 * fVar3 * 0.0009765625 * (float)puVar15[1];
            }
            else if (uVar14 < 5) {
              fVar3 = *(float *)(iVar18 + 0x2c) * 0.0009765625;
              pfVar37 = (float *)(*(short *)((int)puVar15 + 6) * 0x10 + iVar13);
              pfVar24 = (float *)(*(short *)(puVar15 + 1) * 0x10 + iVar13);
              fVar5 = pfVar24[1] * fVar3 - pfVar37[1] * fVar3;
              fVar4 = *pfVar24 * fVar3 - *pfVar37 * fVar3;
              fVar2 = pfVar24[2] * fVar3 - pfVar37[2] * fVar3;
              fVar3 = (float)puVar15[3] * *(float *)(iVar18 + 0x2c);
              *(float *)(iVar23 + 0x8a0) =
                   fVar3 * 0.0015339808 * fVar3 * 0.0009765625 *
                   SQRT(fVar2 * fVar2 + fVar4 * fVar4 + fVar5 * fVar5);
            }
            lVar32 = lVar32 + 4;
            iVar38 = iVar38 + 1;
            lVar26 = lVar26 + 4;
            dVar56 = (double)(float)(dVar56 + (double)*(float *)(iVar23 + 0x8a0));
          }
          uVar33 = uVar33 + 1;
          lVar39 = lVar39 + 0x20;
          lVar41 = lVar41 + 0x20;
          lVar27 = lVar27 + 0x20;
          lVar35 = lVar35 + 0x20;
          lVar31 = lVar31 + 0x20;
          lVar22 = lVar22 + 0x20;
        } while ((int)uVar33 < iVar29);
      }
      iVar29 = 0;
      puVar17[300] = (longlong)(int)(param_1 * dVar56 + 0.5);
      lVar22 = (longlong)*(int *)((int)puVar17 + 0x964);
      lVar22 = lVar22 + ((longlong)(puVar17[0x12a] - lVar22) >> 0x3f & puVar17[0x12a] - lVar22);
      if (0 < (int)lVar22) {
        uVar36 = puVar17[299];
        dVar44 = in_f19;
        do {
          iVar23 = rand();
          iVar34 = 0;
          puVar17[300] = (longlong)(int)(iVar23 >> 0xf & 0x7fff);
          dVar48 = 3.0517578125e-05;
          fVar3 = (float)((double)(longlong)puVar17[300] * dVar56) * 3.0517578e-05;
          lVar26 = lVar1;
          if (0 < iVar38) {
            do {
              fVar2 = *(float *)((int)lVar26 + 0x8a0);
              if (fVar3 < fVar2) break;
              iVar34 = iVar34 + 1;
              fVar3 = fVar3 - fVar2;
              lVar26 = lVar26 + 4;
            } while (iVar34 < iVar38);
          }
          puVar15 = *(uint **)((int)puVar17 + iVar34 * 4 + 0x8f0);
          uVar14 = *puVar15 & 0xff;
          pfVar37 = (float *)uVar36;
          if (uVar14 < 3) {
            if (uVar14 < 2) {
              fVar3 = (float)puVar15[4];
              fVar2 = (float)puVar15[5];
              fVar4 = (float)puVar15[6];
              fVar5 = (float)puVar15[7];
              fVar6 = *(float *)(iVar18 + 0x2c);
            }
            else {
              auVar59 = *(undefined1 (*) [16])(puVar15[1] * 0x10 + iVar13);
              auVar58 = auVar59 >> 0x40 & (GPiece<16>)0xffffffff;
              *(undefined1 (*) [16])(puVar17 + 0x128) = auVar59;
              fVar7 = (float)puVar15[4];
              fVar2 = (float)puVar15[5];
              fVar4 = (float)puVar15[6];
              fVar6 = *(float *)(iVar18 + 0x2c);
              fVar5 = (float)puVar15[3];
              fVar3 = *(float *)(puVar17 + 0x128);
              auVar59 = auVar59 >> 0x20 & (GPiece<16>)0xffffffff;
              *(undefined1 (*) [16])(puVar17 + 0x128) =
                   auVar58 | auVar58 << 0x20 | auVar58 << 0x40 | auVar58 << 0x60;
              fVar3 = fVar3 + fVar7;
              fVar2 = *(float *)(puVar17 + 0x128) + fVar2;
              *(undefined1 (*) [16])(puVar17 + 0x128) =
                   auVar59 | auVar59 << 0x20 | auVar59 << 0x40 | auVar59 << 0x60;
              fVar4 = *(float *)(puVar17 + 0x128) + fVar4;
            }
            dVar51 = 0.0009765625;
            dVar47 = (double)(fVar4 * fVar6);
            dVar45 = (double)(fVar3 * fVar6);
            dVar46 = (double)(fVar2 * fVar6);
            dVar54 = (double)(fVar5 * fVar6 * 0.0009765625);
            dVar50 = -dVar54;
            dVar49 = (double)(float)(dVar54 - dVar50);
            do {
              iVar23 = rand();
              puVar17[300] = (longlong)(int)(iVar23 >> 0xf & 0x7fff);
              dVar53 = (double)(float)((double)(float)((double)(longlong)puVar17[300] * dVar49) *
                                       dVar48 + dVar50);
              iVar23 = rand();
              puVar17[300] = (longlong)(int)(iVar23 >> 0xf & 0x7fff);
              dVar52 = (double)(float)((double)(float)((double)(longlong)puVar17[300] * dVar49) *
                                       dVar48 + dVar50);
              iVar23 = rand();
              puVar17[300] = (longlong)(int)(iVar23 >> 0xf & 0x7fff);
              dVar43 = (double)(float)((double)(float)((double)(longlong)puVar17[300] * dVar49) *
                                       dVar48 + dVar50);
            } while (dVar54 < (double)SQRT((float)(dVar43 * dVar43 +
                                                  (double)(float)(dVar53 * dVar53 +
                                                                 (double)(float)(dVar52 * dVar52))))
                    );
            fVar3 = (float)(dVar46 * dVar51 + dVar52);
            dVar48 = (double)(float)(dVar45 * dVar51 + dVar53);
            fVar2 = (float)(dVar47 * dVar51 + dVar43);
            fVar4 = *(float *)(iVar18 + 0xd4);
            fVar5 = *(float *)(iVar18 + 0xc4);
            fVar6 = *(float *)(iVar18 + 0xd8);
            fVar7 = *(float *)(iVar18 + 0xe4);
            fVar8 = *(float *)(iVar18 + 200);
            fVar9 = *(float *)(iVar18 + 0xe8);
            fVar19 = *(float *)(iVar18 + 0xdc) * fVar3 +
                     *(float *)(iVar18 + 0xec) * fVar2 +
                     (float)((double)*(float *)(iVar18 + 0xcc) * dVar48 + in_f19);
            in_f19 = (double)fVar19;
            *pfVar37 = *(float *)(iVar18 + 0xe0) * fVar2 +
                       (float)((double)*(float *)(iVar18 + 0xc0) * dVar48 +
                              (double)(*(float *)(iVar18 + 0xd0) * fVar3)) +
                       *(float *)(iVar18 + 0x10);
            pfVar37[1] = fVar7 * fVar2 + (float)((double)fVar5 * dVar48 + (double)(fVar4 * fVar3)) +
                         *(float *)(iVar18 + 0x14);
            fVar4 = *(float *)(iVar18 + 0x18);
            pfVar37[3] = fVar19;
            pfVar37[2] = fVar9 * fVar2 + (float)((double)fVar8 * dVar48 + (double)(fVar6 * fVar3)) +
                         fVar4;
          }
          else if (uVar14 < 4) {
            dVar54 = (double)(float)puVar15[7];
            dVar45 = (double)*(float *)(iVar18 + 0x2c);
            dVar51 = 0.0009765625;
            dVar50 = (double)(float)((double)(float)puVar15[4] * dVar45);
            dVar49 = (double)(float)((double)(float)puVar15[5] * dVar45);
            dVar47 = (double)(float)((double)(float)puVar15[6] * dVar45);
            fVar3 = (float)(dVar54 * dVar45) * 0.0009765625;
            dVar46 = (double)((float)((double)(float)puVar15[1] * dVar45) * 0.0009765625);
            dVar45 = (double)(fVar3 * fVar3);
            iVar23 = rand();
            puVar17[300] = (longlong)(int)(iVar23 >> 0xf & 0x7fff);
            dVar45 = (double)SQRT((float)((double)(float)((double)(longlong)puVar17[300] * dVar45) *
                                         dVar48));
            iVar23 = rand();
            puVar17[300] = (longlong)(int)(iVar23 >> 0xf & 0x7fff);
            dVar46 = (double)(float)((double)(longlong)puVar17[300] * dVar46);
            iVar23 = rand();
            puVar17[300] = (longlong)(int)((iVar23 >> 0xf & 0xfffU) - 0x800);
            fVar3 = (float)(longlong)puVar17[300] * 3.1415927 * 0.00048828125;
            fVar2 = fVar3 + 1.5707963;
            fVar4 = 3.1415925 - fVar3;
            if (fVar3 - (3.1415925 - fVar3) < 0.0) {
              fVar4 = fVar3;
            }
            fVar5 = 3.1415925 - fVar2;
            if (fVar2 - (3.1415925 - fVar2) < 0.0) {
              fVar5 = fVar2;
            }
            fVar6 = -3.1415925 - fVar3;
            if ((-3.1415925 - fVar3) - fVar4 < 0.0) {
              fVar6 = fVar4;
            }
            fVar3 = *(float *)(iVar18 + 0x10);
            fVar4 = -3.1415925 - fVar2;
            if ((-3.1415925 - fVar2) - fVar5 < 0.0) {
              fVar4 = fVar5;
            }
            fVar7 = fVar6 * fVar6;
            fVar8 = fVar4 * fVar4;
            fVar20 = fVar7 * fVar7 * fVar6;
            fVar2 = *(float *)(iVar18 + 0x14);
            fVar5 = *(float *)(iVar18 + 0x18);
            pfVar37[3] = (float)dVar54;
            fVar9 = fVar8 * fVar8 * fVar4;
            fVar21 = fVar7 * fVar20;
            fVar19 = fVar8 * fVar9;
            pfVar37[2] = (float)(dVar47 * dVar51 + (double)(float)(dVar46 * dVar48 + (double)fVar5))
            ;
            pfVar37[1] = (float)(dVar49 * dVar51 +
                                (double)(float)((double)(fVar7 * fVar21 * 2.601887e-06 +
                                                        fVar21 * -0.0001980741 +
                                                        fVar20 * 0.0083330255 +
                                                        fVar7 * fVar6 * -0.16666657 + fVar6) *
                                                dVar45 + (double)fVar2));
            *pfVar37 = (float)(dVar50 * dVar51 +
                              (double)(float)((double)(fVar8 * fVar19 * 2.601887e-06 +
                                                      fVar19 * -0.0001980741 +
                                                      fVar9 * 0.0083330255 +
                                                      fVar8 * fVar4 * -0.16666657 + fVar4) * dVar45
                                             + (double)fVar3));
          }
          else if (uVar14 < 5) {
            dVar45 = (double)*(float *)(iVar18 + 0x2c);
            pfVar24 = (float *)(*(short *)(puVar15 + 1) * 0x10 + iVar13);
            pfVar25 = (float *)(*(short *)((int)puVar15 + 6) * 0x10 + iVar13);
            dVar55 = (double)(float)((double)*pfVar24 * dVar45);
            dVar53 = (double)(float)((double)pfVar24[1] * dVar45);
            dVar52 = (double)(float)((double)pfVar24[2] * dVar45);
            dVar54 = (double)(float)((double)*pfVar25 * dVar45 - dVar55);
            dVar51 = (double)(float)((double)pfVar25[1] * dVar45 - dVar53);
            dVar46 = (double)(float)((double)pfVar25[2] * dVar45 - dVar52);
            iVar23 = rand();
            puVar17[300] = (longlong)(int)(iVar23 >> 0xf & 0x7fff);
            dVar50 = 0.0009765625;
            dVar43 = (double)((float)puVar15[3] * *(float *)(iVar18 + 0x2c) * 0.0009765625);
            dVar49 = -dVar43;
            dVar45 = (double)(float)((double)(longlong)puVar17[300] * dVar48);
            dVar47 = (double)(float)(dVar43 - dVar49);
            dVar54 = (double)(float)(dVar54 * dVar45 + dVar55);
            dVar51 = (double)(float)(dVar51 * dVar45 + dVar53);
            dVar45 = (double)(float)(dVar46 * dVar45 + dVar52);
            do {
              iVar23 = rand();
              puVar17[300] = (longlong)(int)(iVar23 >> 0xf & 0x7fff);
              dVar53 = (double)(float)((double)(float)((double)(longlong)puVar17[300] * dVar47) *
                                       dVar48 + dVar49);
              iVar23 = rand();
              puVar17[300] = (longlong)(int)(iVar23 >> 0xf & 0x7fff);
              dVar52 = (double)(float)((double)(float)((double)(longlong)puVar17[300] * dVar47) *
                                       dVar48 + dVar49);
              iVar23 = rand();
              puVar17[300] = (longlong)(int)(iVar23 >> 0xf & 0x7fff);
              dVar46 = (double)(float)((double)(float)((double)(longlong)puVar17[300] * dVar47) *
                                       dVar48 + dVar49);
            } while (dVar43 < (double)SQRT((float)(dVar46 * dVar46 +
                                                  (double)(float)(dVar53 * dVar53 +
                                                                 (double)(float)(dVar52 * dVar52))))
                    );
            fVar3 = (float)(dVar51 * dVar50 + dVar52);
            dVar48 = (double)(float)(dVar54 * dVar50 + dVar53);
            fVar4 = *(float *)(iVar18 + 0xd4);
            fVar2 = (float)(dVar45 * dVar50 + dVar46);
            fVar5 = *(float *)(iVar18 + 0xc4);
            fVar6 = *(float *)(iVar18 + 0xd8);
            fVar7 = *(float *)(iVar18 + 0xe4);
            fVar8 = *(float *)(iVar18 + 200);
            fVar9 = *(float *)(iVar18 + 0xe8);
            fVar19 = *(float *)(iVar18 + 0xdc) * fVar3 +
                     *(float *)(iVar18 + 0xec) * fVar2 +
                     (float)((double)*(float *)(iVar18 + 0xcc) * dVar48 + dVar44);
            dVar44 = (double)fVar19;
            *pfVar37 = *(float *)(iVar18 + 0xe0) * fVar2 +
                       (float)((double)*(float *)(iVar18 + 0xc0) * dVar48 +
                              (double)(*(float *)(iVar18 + 0xd0) * fVar3)) +
                       *(float *)(iVar18 + 0x10);
            pfVar37[1] = fVar7 * fVar2 + (float)((double)fVar5 * dVar48 + (double)(fVar4 * fVar3)) +
                         *(float *)(iVar18 + 0x14);
            fVar4 = *(float *)(iVar18 + 0x18);
            pfVar37[3] = fVar19;
            pfVar37[2] = fVar9 * fVar2 + (float)((double)fVar8 * dVar48 + (double)(fVar6 * fVar3)) +
                         fVar4;
          }
          iVar29 = iVar29 + 1;
          uVar36 = uVar36 + 0x10;
        } while (iVar29 < (int)lVar22);
      }
    }
  }
  return lVar22;
}


// 0x0108df0 (0xfc bytes)
void MB_RandomizeAnimSpeed
               (double param_1,double param_2,int param_3,uint param_4,float *param_5)

{
  float fVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  
  if (*(byte *)(param_3 + 0x53) == param_4) {
    dVar3 = 1.0;
    if (*(int *)(param_3 + 0x58) == 0x3f800000) {
      iVar2 = rand();
      fVar1 = (float)((double)((float)(longlong)(int)(iVar2 >> 0xf & 0x7fff) *
                              (float)(param_2 - param_1)) * 3.0517578125e-05 + param_1);
      dVar4 = (double)fVar1;
      *(float *)(param_3 + 0x58) = fVar1;
      if (dVar4 == dVar3) {
        dVar4 = 1.0010000467300415;
        *(undefined4 *)(param_3 + 0x58) = 0x3f8020c5;
      }
      *param_5 = (float)dVar4;
    }
  }
  else if (*(float *)(param_3 + 0x58) == *param_5) {
    *(undefined4 *)(param_3 + 0x58) = 0x3f800000;
  }
  return;
}


// 0x0108ef8 (0x2b4 bytes)
// inlined: FastAtan2 @0x10901c
void MB_Update2LegIK(undefined8 param_1,int param_2)

{
  longlong lVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  ulonglong *puVar12;
  float fVar13;
  int iVar14;
  int iVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  float *pfVar21;
  ulonglong unaff_r27;
  int iVar22;
  ulonglong unaff_r28;
  int iVar23;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar24;
  
  uVar16 = ZEXT48(&stack0x00000000);
  lVar1 = uVar16 - 0x110;
  puVar12 = (ulonglong *)lVar1;
  *puVar12 = uVar16;
  puVar12[0x24] = in_LR;
  puVar12[0x21] = unaff_r31;
  puVar12[0x20] = unaff_r30;
  bVar2 = *(byte *)(param_2 + 0x111);
  *(uint *)((int)puVar12 + 0xb4) = (uint)*(byte *)(param_2 + 0x110);
  bVar3 = *(byte *)(param_2 + 0x1b0);
  *(uint *)(puVar12 + 0x17) = (uint)bVar2;
  bVar2 = *(byte *)(param_2 + 0x1b1);
  *(uint *)((int)puVar12 + 0xbc) = (uint)bVar3;
  uVar9 = *(undefined4 *)(param_2 + 0x108);
  *(uint *)(puVar12 + 0x18) = (uint)bVar2;
  puVar12[0x1f] = unaff_r29;
  puVar12[0x1e] = unaff_r28;
  puVar12[0x1d] = unaff_r27;
  *(undefined4 *)((int)puVar12 + 0xc4) = uVar9;
  GetMobyJointsWorldPos(param_1,5,uVar16 - 0x5c,param_2);
  iVar22 = 0;
  iVar23 = param_2;
  do {
    GetBoneTransformations(param_1,*(undefined1 *)(iVar23 + 0x110),uVar16 - 0xa0);
    uVar10 = *(uint *)(puVar12 + 0x10);
    uVar11 = *(uint *)((int)puVar12 + 0x84);
    fVar5 = ABS(*(float *)(puVar12 + 0x10));
    fVar7 = ABS(*(float *)((int)puVar12 + 0x84));
    fVar13 = 0.0;
    *(undefined4 *)(iVar23 + 0x114) = 0;
    *(float *)(puVar12 + 0x16) = fVar5 - fVar7;
    cVar4 = *(char *)(iVar23 + 0x161);
    uVar17 = (ulonglong)(uVar10 >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar12 + 0x16) >> 0x1e) & 2 | (ulonglong)(uVar11 >> 0x1d) & 4;
    fVar6 = fVar5;
    if (*(float *)(puVar12 + 0x16) - 0.0 < 0.0) {
      fVar6 = fVar7;
    }
    fVar8 = *(float *)(&g_atanQuadrantTable + (int)(uVar17 << 2));
    if (*(float *)(puVar12 + 0x16) - 0.0 < 0.0) {
      fVar7 = fVar5;
    }
    fVar5 = *(float *)(((uint)(uVar17 << 2) | 0x735900) + 4);
    if (0.0 < fVar6) {
      lVar20 = uVar16 - 0x100;
      lVar18 = uVar16 - 0x38;
      lVar19 = uVar16 - 0x48;
      lVar24 = 2;
      fVar6 = (fVar7 - fVar6) / (fVar7 + fVar6);
      fVar7 = fVar6 * fVar6;
      *(float *)((int)puVar12 + 0xd4) = fVar6;
      *(float *)((int)puVar12 + 0xcc) = fVar6;
      *(float *)(puVar12 + 0x1a) = fVar6;
      *(float *)(puVar12 + 0x19) = fVar6;
      fVar6 = fVar7 * fVar7;
      *(float *)((int)puVar12 + 0xcc) = *(float *)((int)puVar12 + 0xcc) * fVar7;
      *(float *)(puVar12 + 0x1a) = *(float *)(puVar12 + 0x1a) * fVar6;
      *(float *)((int)puVar12 + 0xd4) = *(float *)((int)puVar12 + 0xd4) * fVar6 * fVar7;
      do {
        *(float *)((int)lVar20 + 200) = *(float *)((int)lVar20 + 0xb8) * fVar6 * fVar6;
        iVar14 = (int)lVar19;
        lVar19 = lVar19 + 8;
        lVar20 = lVar20 + 8;
        *(float *)((int)lVar18 + 4) = *(float *)(iVar14 + 4) * fVar6 * fVar6;
        lVar18 = lVar18 + 8;
        lVar24 = lVar24 + -1;
      } while (lVar24 != 0);
      lVar20 = uVar16 - 0x48;
      lVar24 = 4;
      pfVar21 = (float *)&DAT_007358e0;
      lVar18 = lVar20;
      lVar19 = lVar1;
      do {
        fVar6 = *pfVar21;
        fVar7 = pfVar21[1];
        pfVar21 = pfVar21 + 2;
        *(float *)((int)lVar19 + 200) = *(float *)((int)lVar19 + 200) * fVar6;
        lVar19 = lVar19 + 8;
        *(float *)((int)lVar18 + 4) = *(float *)((int)lVar18 + 4) * fVar7;
        lVar18 = lVar18 + 8;
        lVar24 = lVar24 + -1;
      } while (lVar24 != 0);
      lVar19 = 2;
      lVar18 = lVar1;
      do {
        iVar14 = (int)lVar18;
        iVar15 = (int)lVar20;
        lVar18 = lVar18 + 0x10;
        lVar20 = lVar20 + 0x10;
        fVar13 = fVar13 + *(float *)(iVar14 + 200) + *(float *)(iVar15 + 4) + *(float *)(iVar15 + 8)
                 + *(float *)(iVar15 + 0xc);
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
      fVar13 = (fVar13 + 0.7853982) * fVar8 + fVar5;
    }
    *(float *)(iVar23 + 0x118) = fVar13;
    if (cVar4 == '\0') {
      AttachManipulator
                ((MobyInstance *)param_1,(uint)*(byte *)(iVar23 + 0x113),iVar23 + 0x160);
    }
    if (*(char *)(iVar23 + 0x121) == '\0') {
      AttachManipulator
                ((MobyInstance *)param_1,(uint)*(byte *)(iVar23 + 0x112),iVar23 + 0x120);
    }
    iVar22 = iVar22 + 1;
    iVar23 = iVar23 + 0xa0;
  } while (iVar22 < 2);
  *(undefined2 *)(param_2 + 0x50) = 5;
  *(undefined2 *)(param_2 + 0x52) = 0;
  *(undefined4 *)(param_2 + 0x54) = 0;
  *(undefined4 *)(param_2 + 0x58) = 0;
  return;
}


// 0x01091b0 (0xd0 bytes)
void MB_SetAnimAndReset2Leg(int param_1)

{
  int in_r7;
  undefined2 in_r8;
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  
  MB_SetAnimation();
  iVar1 = 0;
  uVar3 = 0;
  iVar2 = in_r7;
  do {
    if (*(int *)(iVar2 + 0x1a0) != 0) {
      *(undefined4 *)(*(int *)(iVar2 + 0x1a0) + 8) = 0;
    }
    if (*(char *)(iVar2 + 0x161) != '\0') {
      FastQuaternionToEuler(uVar3,iVar2 + 0x170,2);
    }
    iVar1 = iVar1 + 1;
    *(undefined4 *)(iVar2 + 0x114) = 0;
    iVar2 = iVar2 + 0xa0;
  } while (iVar1 < 2);
  *(undefined2 *)(in_r7 + 0x52) = in_r8;
  *(undefined4 *)(param_1 + 0x58) = 0x3f800000;
  *(undefined4 *)(in_r7 + 0x100) = 0;
  return;
}


// 0x0109298 (0x2f0 bytes)
// inlined: FastAtan2 @0x1093fc
void MB_initJump(int param_1,float *param_2,float *param_3)

{
  undefined1 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  ulonglong *puVar11;
  float fVar12;
  int iVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong lVar19;
  ulonglong uVar20;
  longlong lVar21;
  longlong lVar22;
  float *pfVar23;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar24;
  ulonglong in_f31;
  
  uVar17 = ZEXT48(&stack0x00000000);
  lVar18 = uVar17 - 0xb0;
  puVar11 = (ulonglong *)lVar18;
  *puVar11 = uVar17;
  puVar11[0x18] = in_LR;
  puVar11[0x15] = in_f31;
  puVar11[0x14] = unaff_r31;
  fVar15 = 0.0;
  param_2[0xc] = 0.0;
  fVar2 = *param_3;
  *param_2 = fVar2;
  fVar3 = param_3[1];
  param_2[1] = fVar3;
  fVar4 = param_3[2];
  param_2[2] = fVar4;
  param_2[3] = param_3[3];
  fVar5 = *(float *)(param_1 + 0x14);
  fVar6 = *(float *)(param_1 + 0x10);
  fVar10 = fVar5 - fVar3;
  fVar12 = fVar6 - fVar2;
  fVar7 = *(float *)(param_1 + 0x18);
  fVar8 = param_2[7];
  fVar9 = param_2[8];
  fVar12 = SQRT(fVar12 * fVar12 + fVar10 * fVar10);
  uVar1 = *(undefined1 *)(param_2 + 0xb);
  fVar12 = ((fVar8 * 35.0 * fVar9) / (ABS(fVar4 - fVar7) + 1.0)) * (fVar12 * fVar12 + 0.25);
  param_2[5] = fVar12;
  if (fVar9 < fVar12) {
    param_2[5] = fVar9;
    fVar12 = fVar9;
  }
  fVar2 = fVar2 - fVar6;
  fVar3 = fVar3 - fVar5;
  *(float *)(puVar11 + 0xe) = fVar2;
  *(float *)((int)puVar11 + 0x74) = fVar3;
  *(float *)(puVar11 + 0xf) = ABS(fVar2) - ABS(fVar3);
  uVar20 = (ulonglong)(*(uint *)(puVar11 + 0xe) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar11 + 0xf) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar11 + 0x74) >> 0x1d) & 4;
  fVar5 = ABS(*(float *)(puVar11 + 0xe));
  if (*(float *)(puVar11 + 0xf) - 0.0 < 0.0) {
    fVar5 = ABS(fVar3);
  }
  fVar6 = *(float *)(&g_atanQuadrantTable + (int)(uVar20 << 2));
  fVar9 = ABS(*(float *)((int)puVar11 + 0x74));
  if (*(float *)(puVar11 + 0xf) - 0.0 < 0.0) {
    fVar9 = ABS(fVar2);
  }
  fVar10 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
  fVar16 = fVar15;
  if (0.0 < fVar5) {
    lVar22 = uVar17 - 0xa0;
    lVar21 = uVar17 - 0x34;
    lVar19 = uVar17 - 0x24;
    lVar24 = 2;
    fVar5 = (fVar9 - fVar5) / (fVar9 + fVar5);
    fVar9 = fVar5 * fVar5;
    *(float *)(puVar11 + 0x11) = fVar5;
    *(float *)(puVar11 + 0x10) = fVar5;
    *(float *)((int)puVar11 + 0x84) = fVar5;
    *(float *)((int)puVar11 + 0x7c) = fVar5;
    fVar5 = fVar9 * fVar9;
    *(float *)(puVar11 + 0x10) = *(float *)(puVar11 + 0x10) * fVar9;
    *(float *)((int)puVar11 + 0x84) = *(float *)((int)puVar11 + 0x84) * fVar5;
    *(float *)(puVar11 + 0x11) = *(float *)(puVar11 + 0x11) * fVar5 * fVar9;
    do {
      *(float *)((int)lVar22 + 0x7c) = *(float *)((int)lVar22 + 0x6c) * fVar5 * fVar5;
      iVar13 = (int)lVar21;
      lVar22 = lVar22 + 8;
      lVar21 = lVar21 + 8;
      *(float *)((int)lVar19 + 4) = *(float *)(iVar13 + 4) * fVar5 * fVar5;
      lVar19 = lVar19 + 8;
      lVar24 = lVar24 + -1;
    } while (lVar24 != 0);
    lVar22 = uVar17 - 0x34;
    pfVar23 = (float *)&DAT_007358e0;
    lVar24 = 4;
    lVar19 = lVar22;
    lVar21 = lVar18;
    do {
      fVar5 = *pfVar23;
      fVar9 = pfVar23[1];
      pfVar23 = pfVar23 + 2;
      *(float *)((int)lVar21 + 0x7c) = *(float *)((int)lVar21 + 0x7c) * fVar5;
      lVar21 = lVar21 + 8;
      *(float *)((int)lVar19 + 4) = *(float *)((int)lVar19 + 4) * fVar9;
      lVar19 = lVar19 + 8;
      lVar24 = lVar24 + -1;
    } while (lVar24 != 0);
    lVar19 = 2;
    fVar5 = fVar15;
    do {
      iVar13 = (int)lVar18;
      iVar14 = (int)lVar22;
      lVar18 = lVar18 + 0x10;
      lVar22 = lVar22 + 0x10;
      fVar5 = fVar5 + *(float *)(iVar13 + 0x7c) + *(float *)(iVar14 + 4) + *(float *)(iVar14 + 8) +
              *(float *)(iVar14 + 0xc);
      lVar19 = lVar19 + -1;
    } while (lVar19 != 0);
    fVar16 = (fVar5 + 0.7853982) * fVar6 + fVar10;
  }
  param_2[6] = fVar16;
  fVar12 = SQRT(fVar2 * fVar2 + fVar3 * fVar3) / fVar12;
  fVar2 = -((fVar7 - fVar4) + -(fVar8 * fVar12 * fVar12 * 0.5)) / fVar12;
  if (0.0 - fVar12 < 0.0) {
    fVar15 = fVar2;
  }
  if (fVar12 - 0.0 < 0.0) {
    fVar15 = fVar2;
  }
  param_2[4] = fVar15;
  MB_SetAnimation(param_1,uVar1,0,10);
  *(undefined1 *)((int)param_2 + 0x2f) = 0;
  return;
}


// 0x01095b8 (0x3e0 bytes)
undefined1 MB_updateJump(MobyInstance *param_1,int param_2)

{
  byte bVar1;
  undefined1 uVar2;
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
  float fVar14;
  float fVar15;
  float fVar16;
  int iVar17;
  double dVar18;
  GPiece<16> local_50;
  GPiece<16> local_40;
  
  bVar1 = *(byte *)(param_2 + 0x2f);
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      if ((param_1->updateId != *(u8 *)(param_2 + 0x2c)) ||
         (dVar18 = (double)BlendAnimFrame(param_1),
         dVar18 <= (double)*(float *)(param_2 + 0x24))) goto LAB_0010996c;
      if ((param_1->field43_0x70 & 2U) != 0) {
        MB_SetAnimation(param_1,*(undefined1 *)(param_2 + 0x2d),0,10);
        *(undefined1 *)(param_2 + 0x2f) = 1;
      }
    }
    OrganicDeltAngSpeed((double)*(float *)(param_2 + 0x18),(double)*(float *)(param_2 + 0x34),
                        (double)*(float *)(param_2 + 0x38),(double)*(float *)(param_2 + 0x3c),
                        param_1);
    fVar3 = *(float *)(param_2 + 0x18);
    fVar4 = fVar3 + 1.5707963;
    fVar7 = 3.1415925 - fVar3;
    if (fVar3 - (3.1415925 - fVar3) < 0.0) {
      fVar7 = fVar3;
    }
    fVar5 = 3.1415925 - fVar4;
    if (fVar4 - (3.1415925 - fVar4) < 0.0) {
      fVar5 = fVar4;
    }
    fVar8 = -3.1415925 - fVar3;
    if ((-3.1415925 - fVar3) - fVar7 < 0.0) {
      fVar8 = fVar7;
    }
    fVar3 = *(float *)(param_2 + 0x14);
    fVar7 = -3.1415925 - fVar4;
    if ((-3.1415925 - fVar4) - fVar5 < 0.0) {
      fVar7 = fVar5;
    }
    fVar9 = fVar8 * fVar8;
    fVar10 = fVar7 * fVar7;
    fVar13 = fVar9 * fVar9 * fVar8;
    fVar11 = fVar10 * fVar10 * fVar7;
    fVar14 = fVar9 * fVar13;
    fVar4 = *(float *)(param_2 + 0x1c);
    fVar12 = fVar10 * fVar11;
    fVar5 = *(float *)(param_2 + 0x28);
    fVar6 = *(float *)(param_2 + 8);
    uVar2 = *(undefined1 *)(param_2 + 0x2e);
    fVar15 = (param_1->pos).z + *(float *)(param_2 + 0x10);
    fVar16 = *(float *)(param_2 + 0x10) - fVar4;
    (param_1->pos).z = fVar15;
    (param_1->pos).y =
         (fVar9 * fVar14 * 2.601887e-06 +
         fVar14 * -0.0001980741 + fVar13 * 0.0083330255 + fVar9 * fVar8 * -0.16666657 + fVar8) *
         fVar3 + (param_1->pos).y;
    (param_1->pos).x =
         (fVar10 * fVar12 * 2.601887e-06 +
         fVar12 * -0.0001980741 + fVar11 * 0.0083330255 + fVar10 * fVar7 * -0.16666657 + fVar7) *
         fVar3 + (param_1->pos).x;
    *(float *)(param_2 + 0x10) = fVar16;
    if ((fVar16 < 0.0) &&
       (fVar3 = animationSpeed * (fVar5 * 2.0 + 10.0),
       fVar15 <= fVar6 - (fVar16 * fVar3 - fVar4 * 0.5 * fVar3 * fVar3))) {
      MB_SetAnimation(param_1,uVar2,0,10);
      *(undefined1 *)(param_2 + 0x2f) = 2;
    }
  }
  else {
    if (bVar1 < 3) {
      fVar3 = *(float *)(param_2 + 0x10);
      (param_1->pos).z = (param_1->pos).z + fVar3;
      *(float *)(param_2 + 0x10) = fVar3 - *(float *)(param_2 + 0x1c);
      iVar17 = CollLine(local_40,local_50,2,0,0);
      fVar3 = *(float *)(param_2 + 0x18);
      fVar4 = *(float *)(param_2 + 0x14);
      fVar7 = 0.0;
      if (iVar17 != 0) {
        fVar7 = g_CollOutput.ip.z;
      }
      if (fVar7 < (param_1->pos).z) {
        fVar7 = fVar3 + 1.5707963;
        fVar5 = 3.1415925 - fVar3;
        if (fVar3 - (3.1415925 - fVar3) < 0.0) {
          fVar5 = fVar3;
        }
        fVar8 = 3.1415925 - fVar7;
        if (fVar7 - (3.1415925 - fVar7) < 0.0) {
          fVar8 = fVar7;
        }
        fVar6 = -3.1415925 - fVar3;
        if ((-3.1415925 - fVar3) - fVar5 < 0.0) {
          fVar6 = fVar5;
        }
        fVar3 = -3.1415925 - fVar7;
        if ((-3.1415925 - fVar7) - fVar8 < 0.0) {
          fVar3 = fVar8;
        }
        fVar7 = fVar6 * fVar6;
        fVar5 = fVar3 * fVar3;
        fVar10 = fVar7 * fVar7 * fVar6;
        fVar8 = fVar5 * fVar5 * fVar3;
        fVar11 = fVar7 * fVar10;
        fVar9 = fVar5 * fVar8;
        (param_1->pos).y =
             (fVar7 * fVar11 * 2.601887e-06 +
             fVar11 * -0.0001980741 + fVar10 * 0.0083330255 + fVar7 * fVar6 * -0.16666657 + fVar6) *
             fVar4 + (param_1->pos).y;
        (param_1->pos).x =
             (fVar5 * fVar9 * 2.601887e-06 +
             fVar9 * -0.0001980741 + fVar8 * 0.0083330255 + fVar5 * fVar3 * -0.16666657 + fVar3) *
             fVar4 + (param_1->pos).x;
      }
      else {
        (param_1->pos).z = fVar7;
        *(undefined1 *)(param_2 + 0x2f) = 3;
      }
    }
    else if (3 < bVar1) goto LAB_0010996c;
    if ((param_1->field43_0x70 & 2U) != 0) {
      *(undefined1 *)(param_2 + 0x2f) = 4;
    }
  }
LAB_0010996c:
  return *(undefined1 *)(param_2 + 0x2f);
}


// 0x0109998 (0x54 bytes)
int Lerp_int(float t,int a,int b)

{
  int iVar1;
  
  iVar1 = FastDoubleToInt((double)((float)(longlong)(b - a) * t));
  return a + iVar1;
}


// 0x01099ec (0xc bytes)
float Lerp(float a,float b,float t)

{
  return (b - a) * t + a;
}


// 0x01099f8 (0x6c bytes)
void Lerp_vec4(float alpha,float *out)

{
  undefined8 in_r5;
  undefined8 in_r6;
  undefined8 in_r7;
  undefined8 in_r8;
  float fStack00000040;
  float fStack00000044;
  float fStack00000048;
  float fStack0000004c;
  float fStack00000050;
  float fStack00000054;
  float fStack00000058;
  float fStack0000005c;
  
  fStack00000044 = (float)in_r5;
  fStack00000054 = (float)in_r7;
  fStack0000004c = (float)in_r6;
  fStack0000005c = (float)in_r8;
  fStack00000040 = (float)((ulonglong)in_r5 >> 0x20);
  fStack00000048 = (float)((ulonglong)in_r6 >> 0x20);
  fStack00000050 = (float)((ulonglong)in_r7 >> 0x20);
  fStack00000058 = (float)((ulonglong)in_r8 >> 0x20);
  out[1] = (fStack00000054 - fStack00000044) * alpha + fStack00000044;
  out[3] = (fStack0000005c - fStack0000004c) * alpha + fStack0000004c;
  *out = (fStack00000050 - fStack00000040) * alpha + fStack00000040;
  out[2] = (fStack00000058 - fStack00000048) * alpha + fStack00000048;
  return;
}


// 0x0109a68 (0x88 bytes)
void GainDampLimit(float distToTarget,float gain,float damp,float limit,float *speed)

{
  float fVar1;
  float fVar2;
  
  fVar1 = *speed + (distToTarget * gain - damp * *speed);
  *speed = fVar1;
  if (0.0 < limit) {
    if (fVar1 <= limit) {
      fVar2 = -limit;
      if (fVar1 < fVar2) {
        *speed = fVar2;
        fVar1 = fVar2;
      }
    }
    else {
      *speed = limit;
      fVar1 = limit;
    }
  }
  fVar2 = ABS(distToTarget);
  if (fVar1 <= fVar2) {
    if (fVar1 < -fVar2) {
      *speed = -fVar2;
    }
  }
  else {
    *speed = fVar2;
  }
  return;
}


// 0x0109af0 (0x44 bytes)
float Delt(float target,float speed,float *val)

{
  float fVar1;
  float fVar2;
  
  fVar1 = target - *val;
  if ((fVar1 <= speed) && (fVar2 = -speed, speed = fVar1, fVar1 < fVar2)) {
    speed = fVar2;
  }
  fVar1 = *val + speed;
  *val = fVar1;
  return ABS(target - fVar1);
}


// 0x0109b40 (0xe0 bytes)
float AccelDelt(float target,float gain,float damp,float limit,float *val,int unused,
                         float *speed)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = *val;
  fVar2 = *speed + ((target - fVar1) * gain - damp * *speed);
  *speed = fVar2;
  if (0.0 < limit) {
    if (fVar2 <= limit) {
      fVar3 = -limit;
      if (fVar2 < fVar3) {
        *speed = fVar3;
        fVar2 = fVar3;
      }
    }
    else {
      *speed = limit;
      fVar2 = limit;
    }
  }
  fVar1 = ABS(target - fVar1);
  if (fVar2 <= fVar1) {
    fVar1 = -fVar1;
    if (fVar2 < fVar1) {
      *speed = fVar1;
      fVar2 = fVar1;
    }
  }
  else {
    *speed = fVar1;
    fVar2 = fVar1;
  }
  fVar1 = target - (*val + fVar2);
  *val = *val + fVar2;
  if (ABS(fVar1) < limit * 0.01) {
    *val = target;
    *speed = 0.0;
    fVar1 = 0.0;
  }
  return fVar1;
}


// 0x0109c30 (0x1dc bytes)
float OrganicDelt
                (float target,float accel,float deccel,float limit,float *val,int unused,
                float *speed)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = *speed;
  fVar2 = target - *val;
  if (fVar2 == 0.0 || fVar1 * fVar2 < 0.0) {
    fVar2 = -fVar1;
    if ((fVar2 <= deccel) && (fVar3 = -deccel, deccel = fVar2, fVar2 < fVar3)) {
      deccel = fVar3;
    }
    *speed = fVar1 + deccel;
    *val = *val + fVar1 + deccel;
    fVar2 = *speed;
  }
  else {
    fVar3 = ABS(fVar2);
    fVar4 = ((fVar1 * fVar1) / deccel) * 0.5;
    if (fVar4 <= fVar3) {
      fVar4 = SQRT(deccel * 2.0 * fVar2);
      if (limit - fVar4 < 0.0) {
        fVar4 = limit;
      }
      if (0.0 <= fVar2) {
        fVar4 = fVar4 - fVar1;
        if ((fVar4 <= accel) && (fVar5 = -accel, accel = fVar4, fVar4 < fVar5)) {
          accel = fVar5;
        }
        fVar1 = fVar1 + accel;
        *speed = fVar1;
      }
      else {
        fVar4 = -fVar4 - fVar1;
        if ((fVar4 <= accel) && (fVar5 = -accel, accel = fVar4, fVar4 < fVar5)) {
          accel = fVar5;
        }
        fVar1 = fVar1 + accel;
        *speed = fVar1;
      }
    }
    else if (fVar3 + ABS(fVar1) <= fVar4) {
      fVar5 = -fVar1;
      fVar4 = deccel * 1.1;
      if ((fVar5 <= fVar4) && (fVar6 = -fVar4, fVar4 = fVar5, fVar5 < fVar6)) {
        fVar4 = fVar6;
      }
      fVar1 = fVar1 + fVar4;
      *speed = fVar1;
    }
    else {
      fVar4 = -fVar1;
      if ((fVar4 <= deccel) && (fVar5 = -deccel, deccel = fVar4, fVar4 < fVar5)) {
        deccel = fVar5;
      }
      fVar1 = fVar1 + deccel;
      *speed = fVar1;
    }
    if (fVar3 <= ABS(fVar1)) {
      *val = target;
    }
    else {
      *val = *val + fVar1;
      fVar2 = *speed;
    }
  }
  return fVar2;
}


// 0x0109e18 (0x98 bytes)
float SubRots(float rot1,float rot2,int turnDir)

{
  double dVar1;
  int in_r5;
  double dVar2;
  double dVar3;
  
  dVar2 = (double)FastDiffRots((double)rot1,(double)rot2,turnDir);
  if ((in_r5 != 0) && ((float)(dVar2 * (double)(longlong)in_r5) <= 0.0)) {
    dVar3 = ABS(dVar2);
    dVar1 = dVar2 + 6.2831854820251465;
    if (0.0 - dVar2 < 0.0) {
      dVar1 = dVar2 - 6.2831854820251465;
    }
    dVar2 = 0.0;
    if (0.001745329238474369 - dVar3 < 0.0) {
      dVar2 = (double)(float)dVar1;
    }
  }
  return (float)dVar2;
}


// 0x0109ec0 (0x17c bytes)
float DeltAng(float target,float speed,float *val,int unused1,int unused2,int turnDir)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar2 = (double)speed;
  dVar4 = (double)target;
  dVar1 = (double)FastDiffRots(dVar4,(double)*val,val,unused1,unused2);
  if ((turnDir != 0) && ((float)(dVar1 * (double)(longlong)turnDir) <= 0.0)) {
    dVar5 = ABS(dVar1);
    dVar3 = dVar1 + 6.2831854820251465;
    if (0.0 - dVar1 < 0.0) {
      dVar3 = dVar1 - 6.2831854820251465;
    }
    dVar1 = 0.0;
    if (0.001745329238474369 - dVar5 < 0.0) {
      dVar1 = (double)(float)dVar3;
    }
  }
  if ((dVar1 <= dVar2) && (dVar3 = -dVar2, dVar2 = dVar1, dVar1 < dVar3)) {
    dVar2 = dVar3;
  }
  dVar1 = (double)FastWrapRot(*val,(float)dVar2);
  *val = (float)dVar1;
  dVar1 = (double)FastDiffRots(dVar4);
  if ((turnDir != 0) && ((float)(dVar1 * (double)(longlong)turnDir) <= 0.0)) {
    dVar4 = ABS(dVar1);
    dVar2 = dVar1 + 6.2831854820251465;
    if (0.0 - dVar1 < 0.0) {
      dVar2 = dVar1 - 6.2831854820251465;
    }
    dVar1 = 0.0;
    if (0.001745329238474369 - dVar4 < 0.0) {
      dVar1 = (double)(float)dVar2;
    }
  }
  return (float)dVar1;
}


// 0x010a050 (0x280 bytes)
double AccelDeltAng
                 (double param_1,double param_2,double param_3,double param_4,float *param_5,
                 undefined8 param_6,float *param_7)

{
  float fVar1;
  int in_r9;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  if (in_r9 == 2) {
    in_r9 = 0;
    if ((((0.0 < param_1) && ((int)*param_5 < 0)) || ((param_1 < 0.0 && (0 < (int)*param_5)))) &&
       (in_r9 = 1, param_1 < 0.0)) {
      in_r9 = -1;
    }
  }
  dVar2 = (double)FastDiffRots(param_1,(double)*param_5);
  if ((in_r9 != 0) && ((float)(dVar2 * (double)(longlong)in_r9) <= 0.0)) {
    dVar5 = ABS(dVar2);
    dVar4 = dVar2 + 6.2831854820251465;
    if (0.0 - dVar2 < 0.0) {
      dVar4 = dVar2 - 6.2831854820251465;
    }
    dVar2 = 0.0;
    if (0.001745329238474369 - dVar5 < 0.0) {
      dVar2 = (double)(float)dVar4;
    }
  }
  fVar1 = (float)((double)*param_7 +
                 (double)(float)(dVar2 * param_2 - (double)(float)(param_3 * (double)*param_7)));
  dVar4 = (double)fVar1;
  *param_7 = fVar1;
  dVar5 = 0.0;
  if (0.0 < param_4) {
    if (dVar4 <= param_4) {
      dVar3 = -param_4;
      if (dVar4 < dVar3) {
        *param_7 = (float)dVar3;
        dVar4 = dVar3;
      }
    }
    else {
      *param_7 = (float)param_4;
      dVar4 = param_4;
    }
  }
  dVar2 = ABS(dVar2);
  if (dVar4 <= dVar2) {
    dVar2 = -dVar2;
    if (dVar4 < dVar2) {
      *param_7 = (float)dVar2;
      dVar4 = dVar2;
    }
  }
  else {
    *param_7 = (float)dVar2;
    dVar4 = dVar2;
  }
  dVar2 = (double)FastWrapRot(*param_5,(float)dVar4);
  *param_5 = (float)dVar2;
  dVar2 = (double)FastDiffRots(param_1);
  if ((in_r9 != 0) && ((double)(float)(dVar2 * (double)(longlong)in_r9) <= dVar5)) {
    dVar3 = ABS(dVar2);
    dVar4 = dVar2 + 6.2831854820251465;
    if (dVar5 - dVar2 < 0.0) {
      dVar4 = dVar2 - 6.2831854820251465;
    }
    dVar2 = dVar5;
    if (0.001745329238474369 - dVar3 < 0.0) {
      dVar2 = (double)(float)dVar4;
    }
  }
  if (ABS(dVar2) < (double)(float)(param_4 * 0.009999999776482582)) {
    *param_5 = (float)param_1;
    *param_7 = 0.0;
    dVar2 = dVar5;
  }
  return dVar2;
}


// 0x010a2e0 (0x228 bytes)
float OrganicDeltAng
                (float target,float accel,float deccel,float limit,float *val,int unused,
                float *speed)

{
  float *unused2;
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  dVar7 = (double)limit;
  dVar5 = (double)accel;
  dVar4 = (double)deccel;
  dVar1 = (double)target;
  unused2 = speed;
  dVar2 = (double)FastDiffRots(dVar1,(double)*val);
  dVar3 = (double)*speed;
  if (((float)(dVar3 * dVar2) < 0.0) || (dVar2 == 0.0)) {
    DeltAng(0.0,(float)dVar4,speed,unused,(int)unused2,0);
    dVar4 = (double)FastWrapRot(*speed,*val);
    *val = (float)dVar4;
    dVar2 = (double)*speed;
  }
  else {
    dVar8 = ABS(dVar2);
    dVar6 = (double)((float)((double)(float)(dVar3 * dVar3) / dVar4) * 0.5);
    if (dVar6 <= dVar8) {
      dVar4 = (double)SQRT((float)((double)(float)(dVar4 * 2.0) * dVar2));
      if (dVar7 - dVar4 < 0.0) {
        dVar4 = dVar7;
      }
      if (0.0 <= dVar2) {
        DeltAng((float)dVar4,(float)dVar5,speed,unused,(int)unused2,0);
      }
      else {
        DeltAng((float)-dVar4,(float)dVar5,speed,unused,(int)unused2,0);
      }
    }
    else if ((double)(float)(dVar8 + ABS(dVar3)) <= dVar6) {
      dVar4 = (double)(float)(dVar4 * 1.100000023841858);
      dVar5 = -dVar3;
      if ((dVar5 <= dVar4) && (dVar7 = -dVar4, dVar4 = dVar5, dVar5 < dVar7)) {
        dVar4 = dVar7;
      }
      *speed = (float)(dVar3 + dVar4);
    }
    else {
      dVar5 = -dVar3;
      if ((dVar5 <= dVar4) && (dVar7 = -dVar4, dVar4 = dVar5, dVar5 < dVar7)) {
        dVar4 = dVar7;
      }
      *speed = (float)(dVar3 + dVar4);
    }
    if (dVar8 <= ABS((double)*speed)) {
      *val = (float)dVar1;
    }
    else {
      dVar4 = (double)FastWrapRot(*speed,*val);
      *val = (float)dVar4;
      dVar2 = (double)*speed;
    }
  }
  return (float)dVar2;
}


// 0x010a508 (0x44 bytes)
void MatAdjoint(float *dm,float *sm)

{
  float *pfVar1;
  longlong lVar2;
  
  lVar2 = 3;
  do {
    *dm = *sm;
    dm[1] = sm[1];
    dm[2] = sm[2];
    pfVar1 = sm + 3;
    sm = sm + 4;
    dm[3] = *pfVar1;
    dm = dm + 4;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return;
}


// 0x010a550 (0xc0 bytes)
int Float_To_RGBA(float r,float g,float b,float alpha)

{
  uint uVar4;
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  dVar8 = (double)alpha;
  dVar5 = (double)g;
  dVar7 = (double)b;
  dVar6 = 255.0;
  uVar4 = FastDoubleToInt((double)(r * 255.0),0x406fe00000000000,dVar7,dVar8);
  uVar1 = FastDoubleToInt((double)(float)(dVar5 * dVar6));
  uVar2 = FastDoubleToInt((double)(float)(dVar7 * dVar6));
  uVar3 = FastDoubleToInt((double)(float)(dVar8 * dVar6));
  return (uint)((uVar3 & 0xffffffff) << 0x18) |
         (uint)((uVar2 & 0xffffffff) << 0x10) & 0xff0000 |
         (uint)((uVar1 & 0xffffffff) << 8) & 0xff00 | uVar4 & 0xff;
}


// 0x010a610 (0x58 bytes)
void ReorderRGB(int *r,int *g,int *b,int order)

{
  int iVar1;
  
  if ((order & 1U) != 0) {
    iVar1 = *r;
    *r = *g;
    *g = iVar1;
  }
  if ((order & 2U) != 0) {
    iVar1 = *g;
    *g = *b;
    *b = iVar1;
  }
  if ((order & 4U) != 0) {
    iVar1 = *b;
    *b = *r;
    *r = iVar1;
  }
  return;
}


// 0x010a668 (0x114 bytes)
int ReorderRGB(int rgb,int order)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if (order != 0) {
    uVar6 = (ulonglong)(uint)rgb & 0xff;
    uVar5 = (ulonglong)((uint)rgb >> 8) & 0xff;
    lVar3 = uVar6 + (ZERO_MASK((order & 1U)) & uVar5 - uVar6);
    lVar2 = uVar5 + (ZERO_MASK((order & 1U)) & uVar6 - uVar5);
    uVar6 = (ulonglong)((uint)rgb >> 0x10) & 0xff;
    lVar4 = lVar3 + (ZERO_MASK((order & 2U)) & uVar6 - lVar3);
    iVar1 = (int)lVar4;
    rgb = (uint)((lVar2 + (ZERO_MASK((order & 4U)) & lVar4 - lVar2) & 0xffffffffU)
                << 0x10) & 0xff0000 |
          (uint)((uVar6 + (ZERO_MASK((order & 2U)) & lVar3 - uVar6) & 0xffffffff)
                << 8) & 0xff00 |
          iVar1 + ((uint)(ZERO_MASK((order & 4U))) & (int)lVar2 - iVar1) &
          0xff0000ff | rgb & 0xff000000U;
  }
  return rgb;
}


// 0x010a788 (0xb4 bytes)
// inlined: FastRSqrt @0x10a7dc
void MB_NormalizeMtx3Columns(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float *pfVar9;
  int iVar10;
  int iVar11;
  
  iVar11 = 0;
  iVar10 = 0;
  fVar1 = 0.0;
  do {
    pfVar9 = (float *)(param_1 + iVar10);
    fVar2 = pfVar9[4];
    fVar3 = *pfVar9;
    fVar4 = pfVar9[8];
    fVar8 = fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2;
    fVar5 = fVar1;
    fVar6 = fVar1;
    fVar7 = fVar1;
    if (SQRT(fVar8) != 0.0) {
      fVar5 = 1.0 / SQRT(fVar8);
      fVar5 = -(fVar8 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
      fVar5 = -(fVar8 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
      fVar5 = -(fVar8 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
      fVar7 = fVar3 * fVar5;
      fVar6 = fVar2 * fVar5;
      fVar5 = fVar4 * fVar5;
    }
    iVar11 = iVar11 + 1;
    *pfVar9 = fVar7;
    iVar10 = iVar10 + 4;
    pfVar9[4] = fVar6;
    pfVar9[8] = fVar5;
  } while (iVar11 < 3);
  return;
}


// 0x010a83c (0x11c bytes)
double ____MB_GetNormalizedMtxElem(void)

{
  longlong in_r6;
  float local_80 [4];
  GPiece<72> local_70;
  
  FastNormalizeRMtx4(local_70);
  return (double)*(float *)((int)local_80 + (int)(in_r6 << 2));
}


// 0x010a968 (0xd0 bytes)
// inlined: FastRSqrt @0x10a9ac
void MB_RemoveVecComponent(float scale,float *out,float *v,float *n)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  fVar1 = n[1];
  fVar2 = *n;
  fVar3 = n[2];
  fVar4 = 0.0;
  fVar5 = *v;
  fVar6 = v[1];
  fVar7 = v[2];
  fVar10 = fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1;
  fVar9 = fVar4;
  fVar8 = fVar4;
  if (SQRT(fVar10) != 0.0) {
    fVar9 = 1.0 / SQRT(fVar10);
    fVar9 = -(fVar10 * fVar9 * fVar9 - 1.0) * fVar9 * 0.5 + fVar9;
    fVar9 = -(fVar10 * fVar9 * fVar9 - 1.0) * fVar9 * 0.5 + fVar9;
    fVar9 = -(fVar10 * fVar9 * fVar9 - 1.0) * fVar9 * 0.5 + fVar9;
    fVar4 = fVar2 * fVar9;
    fVar8 = fVar1 * fVar9;
    fVar9 = fVar3 * fVar9;
  }
  fVar1 = v[1];
  fVar2 = v[2];
  out[3] = v[3];
  fVar3 = scale * (fVar9 * fVar7 + fVar4 * fVar5 + fVar8 * fVar6);
  *out = -(fVar3 * fVar4 - fVar5);
  out[1] = -(fVar3 * fVar8 - fVar1);
  out[2] = -(fVar3 * fVar9 - fVar2);
  return;
}


// 0x010aa50 (0x308 bytes)
// strings: 0010aa40: '?fff_q' (raw)

void MB_MistDeathEffect(undefined8 param_1,float *param_2,undefined8 param_3)

{
  uint uVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 *puVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  float local_1c0;
  float local_1bc;
  float local_1b8;
  GPiece<320> auStack_1b0;
  longlong local_70;
  
  iVar3 = MB_randPrimPoints(0x402c000000000000,param_1,param_2,0x14,auStack_1b0,param_3);
  if (iVar3 != 0) {
    iVar6 = 0;
    if (0 < iVar3) {
      puVar7 = auStack_1b0;
      dVar9 = 1.7999999523162842;
      dVar10 = 0.8999999761581421;
      dVar11 = 0.5;
      dVar12 = 0.0015339808305725455;
      do {
        iVar4 = rand();
        local_70 = (longlong)(int)((iVar4 >> 0xf & 0xfffU) - 0x800);
        dVar8 = (double)(float)((double)local_70 * dVar12);
        iVar4 = rand();
        local_70 = (longlong)(int)((iVar4 >> 0xf & 0xfffU) - 0x800);
        MB_SphericalToVector
                  ((float)((double)g_FrameTime * dVar9),(float)dVar8,
                   (float)((double)local_70 * dVar12),&local_1c0);
        local_1c0 = local_1c0 + *param_2;
        local_1bc = local_1bc + param_2[1];
        local_1b8 = (float)((double)g_FrameTime * dVar10 + (double)(local_1b8 + param_2[2]));
        if (g_goldWeaponsArray.pyrocitor == '\0') {
          iVar4 = rand();
          uVar1 = iVar4 >> 0xf & 0x7fff;
          iVar4 = (int)(animationSpeed *
                       (float)((double)(longlong)(int)(uVar1 + ((int)uVar1 >> 4) * -0x10 + 0x14) +
                              dVar11));
          local_70 = (longlong)iVar4;
          iVar5 = rand();
          uVar2 = (ulonglong)(uint)(iVar5 >> 0xf) & 0x7fff;
          SpawnPart_4
                    (puVar7,&local_1c0,0x7000a0ff,0xff,iVar4,0x1e,
                     uVar2 + (((uVar2 + 1) * 0x30c3 << 0x20) >> 0x32) * -0x15 + 0x28,1);
        }
        else {
          iVar4 = rand();
          uVar1 = iVar4 >> 0xf & 0x7fff;
          iVar4 = (int)(animationSpeed *
                       (float)((double)(longlong)(int)(uVar1 + ((int)uVar1 >> 4) * -0x10 + 0x14) +
                              dVar11));
          local_70 = (longlong)iVar4;
          iVar5 = rand();
          uVar2 = (ulonglong)(uint)(iVar5 >> 0xf) & 0x7fff;
          SpawnPart_4
                    (puVar7,&local_1c0,0x7000ffa0,0xff00,iVar4,0x1e,
                     uVar2 + (((uVar2 + 1) * 0x30c3 << 0x20) >> 0x32) * -0x15 + 0x28,1);
        }
        iVar6 = iVar6 + 1;
        puVar7 = puVar7 + 0x10;
      } while (iVar6 < iVar3);
    }
  }
  return;
}


// 0x010ad80 (0x208 bytes)
/* [p2_mobyutil] init KickVars: kickVel from ang*xySpeed, zSpeed, faceAng=wrap(ang), kickActive=1,
   stage=0; then MB_SetAnimation/Frame */

void MB_StartKick
               (double param_1,MobyInstance *param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined2 uVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  GPiece<16> auVar11;
  GPiece<16> auVar12;
  GPiece<16> auVar13;
  
  fVar6 = (float)(param_1 + 1.570796251296997);
  dVar8 = (double)(float)(3.141592502593994 - param_1);
  if (param_1 - (double)(float)(3.141592502593994 - param_1) < 0.0) {
    dVar8 = param_1;
  }
  fVar3 = 3.1415925 - fVar6;
  if (fVar6 - (3.1415925 - fVar6) < 0.0) {
    fVar3 = fVar6;
  }
  dVar7 = (double)(float)(-3.141592502593994 - param_1);
  if ((double)(float)(-3.141592502593994 - param_1) - dVar8 < 0.0) {
    dVar7 = dVar8;
  }
  fVar4 = -3.1415925 - fVar6;
  if ((-3.1415925 - fVar6) - fVar3 < 0.0) {
    fVar4 = fVar3;
  }
  dVar8 = (double)(float)(dVar7 * dVar7);
  fVar5 = fVar4 * fVar4;
  dVar10 = (double)(float)(dVar8 * (double)(float)(dVar8 * dVar7));
  pfVar2 = (float *)param_3;
  fVar6 = fVar5 * fVar5 * fVar4;
  dVar9 = (double)(float)(dVar8 * dVar10);
  pfVar2[2] = pfVar2[7];
  pfVar2[3] = 1.0;
  fVar3 = fVar5 * fVar6;
  pfVar2[1] = ((float)(dVar8 * dVar9) * 2.601887e-06 +
              (float)(dVar9 * -0.0001980741071747616 +
                     (double)(float)(dVar10 * 0.008333025500178337 +
                                    (double)(float)((double)(float)(dVar8 * dVar7) *
                                                    -0.16666656732559204 + dVar7)))) * pfVar2[6];
  *pfVar2 = (fVar5 * fVar3 * 2.601887e-06 +
            fVar3 * -0.0001980741 + fVar6 * 0.0083330255 + fVar5 * fVar4 * -0.16666657 + fVar4) *
            pfVar2[6];
  dVar8 = (double)FastWrapRot((float)param_1,3.1415927);
  pfVar2[0x10] = (float)dVar8;
  auVar11 = ZEXT416(0xffffffff);
  auVar11 = auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60;
  pfVar2[0x11] = 0.0;
  auVar13 = loadVectorLeftIndexed(0x20,0x10ad58);
  auVar12 = vectorShiftLeftIntegerWord(auVar11,auVar11);
  auVar11 = auVar13 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar13 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
  fVar6 = pfVar2[9];
  auVar11 = vectorMultiplyAddFloatingPoint
                      (auVar13,auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60,auVar12
                      );
  auVar11 = vectorConvertToSignedFixedPointWordSaturate(auVar11,0);
  auVar11 = vectorSplatHalfWord(auVar11,1);
  uVar1 = storeVectorElementHalfWordIndexed(auVar11,0x2c,param_3);
  *(undefined2 *)(pfVar2 + 0xb) = uVar1;
  *(undefined1 *)(pfVar2 + 0xf) = 1;
  *(undefined2 *)((int)pfVar2 + 0x3e) = 0;
                    /* WARNING: Load size is inaccurate */
  if ((((param_2 != (MobyInstance *)0x0) && ((param_2->modeBits & HAS_SPECIAL_VARS) != NONE)) &&
      (*param_2->pVar != (int *)0x0)) && (**param_2->pVar == 0)) {
    fVar6 = (float)((uint)fVar6 | 0x20);
    pfVar2[9] = fVar6;
    param_2->collision = (ushort *)0x0;
  }
  if (((uint)fVar6 & 2) == 0) {
    MB_SetAnimation(param_2,param_5,param_7,param_6);
  }
  else {
    MB_SetAnimationFrame(param_2,(int)param_5,(int)param_7,(int)param_6,1);
  }
  return;
}


// 0x010af88 (0x60 bytes)
bool MB_isCrate(MobyInstance *moby)

{
  bool ret;
  
  if (moby == (MobyInstance *)0x0) {
    ret = false;
  }
  else if ((moby < g_MobyInstance) || (MobyInstanceEnd < moby)) {
    ret = false;
  }
  else if ((short)moby->oClass < 0x21d && 499 < (short)moby->oClass) {
    ret = true;
  }
  else {
    ret = false;
  }
  return ret;
}


// 0x010b030 (0xcb4 bytes)
// inlined: FastRSqrt @0x10ba44
/* [p2_mobyutil] per-frame kick physics: grav, MistDeathEffect on effectType 1, collisions, damage,
   bounces */

int MB_UpdateKick(MobyInstance *pMoby,KickVars *kv)

{
  float fVar1;
  char cVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  f32 fVar7;
  MobyInstance *victim;
  longlong lVar8;
  int iVar9;
  int iVar10;
  short sVar11;
  longlong lVar12;
  undefined4 *puVar13;
  ulonglong uVar14;
  longlong lVar15;
  uint uVar17;
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
  GPiece<16> local_110;
  GPiece<16> local_100;
  GPiece<16> local_f0;
  GPiece<16> local_e0;
  GPiece<16> local_d0;
  GPiece<16> local_c0;
  GPiece<16> local_b0;
  GPiece<16> local_a0;
  GPiece<16> local_90;
  GPiece<16> local_80;
  float local_70;
  uint uVar16;
  
  lVar8 = (longlong)(int)pMoby;
  cVar2 = kv->effectType;
  uVar14 = 0;
  fVar3 = kv->kickVel[2] - kv->grav;
  iVar10 = 0;
  kv->kickVel[2] = fVar3;
  if ((cVar2 == '\x01') && (kv->effectPrimMask != '\0')) {
    MB_MistDeathEffect(lVar8,(longlong)(int)kv,kv->effectPrimMask);
    fVar3 = kv->kickVel[2];
  }
  fVar4 = kv->kickVel[1];
  fVar5 = kv->kickVel[0];
  dVar19 = 0.0;
  dVar18 = (double)SQRT(fVar5 * fVar5 + fVar4 * fVar4);
  dVar20 = dVar19;
  if (kv->stage != 2) {
    dVar20 = (double)kv->minXySpeed;
  }
  dVar21 = (double)kv->drag;
  dVar20 = (double)(float)(dVar20 - dVar18);
  if ((dVar20 <= dVar21) && (dVar24 = -dVar21, dVar21 = dVar20, dVar20 < dVar24)) {
    dVar21 = dVar24;
  }
  fVar1 = (float)((double)(float)(dVar21 + dVar18) / dVar18);
  fVar6 = kv->zSpeed;
  dVar24 = (double)(fVar5 * fVar1);
  dVar21 = (double)(fVar4 * fVar1);
  dVar20 = dVar19;
  if (0.0 - dVar18 < 0.0) {
    dVar20 = dVar24;
  }
  dVar30 = dVar19;
  if (0.0 - dVar18 < 0.0) {
    dVar30 = dVar21;
  }
  if (dVar18 - 0.0 < 0.0) {
    dVar20 = dVar24;
  }
  if (dVar18 - 0.0 < 0.0) {
    dVar30 = dVar21;
  }
  kv->kickVel[0] = (float)dVar20;
  kv->kickVel[1] = (float)dVar30;
  if (fVar6 < fVar3) {
    kv->kickVel[2] = fVar6;
  }
  fVar3 = (pMoby->pos).z;
  fVar4 = kv->zOfs;
  dVar18 = 0.5;
  iVar9 = CollLine(local_80,local_90,2,0,0);
  dVar20 = dVar19;
  if (iVar9 != 0) {
    dVar20 = (double)g_CollOutput.ip.z;
  }
  iVar9 = CollHotspot();
  dVar21 = (double)kv->kickVel[0];
  dVar24 = (double)kv->kickVel[1];
  if (iVar9 == 0) {
    if (((*(int *)&kv->field_0x5c == 0) && (dVar21 = (double)(fVar3 + fVar4), dVar20 <= dVar21)) &&
       ((double)(float)(dVar21 + (double)kv->kickVel[2]) < dVar20)) {
      *(undefined4 *)&kv->field_0x5c = 0x3f800000;
      FUN_00456478(0x4008000000000000,local_100);
    }
    iVar9 = CollLine(local_a0,local_b0,0x22,0,0);
    dVar21 = (double)kv->kickVel[0];
    dVar24 = (double)kv->kickVel[1];
    dVar20 = dVar19;
    if (iVar9 != 0) {
      dVar20 = (double)g_CollOutput.ip.z;
    }
  }
  else if (((kv->flag & 0x10U) != 0) || (kv->stage == 2)) {
    iVar9 = CollLine(local_c0,local_d0,0x22,0,0);
    dVar21 = (double)kv->kickVel[0];
    dVar24 = (double)kv->kickVel[1];
    dVar30 = dVar19;
    if (iVar9 != 0) {
      dVar30 = (double)g_CollOutput.ip.z;
    }
    if (dVar30 < (double)(float)(dVar20 - 0.25)) {
      dVar30 = (double)SQRT((float)(dVar21 * dVar21 + (double)(float)(dVar24 * dVar24)));
      dVar27 = (double)(float)(dVar21 * (double)(float)(dVar19 / dVar30));
      dVar28 = (double)(float)(dVar24 * (double)(float)(dVar19 / dVar30));
      dVar21 = dVar19;
      if (dVar19 - dVar30 < 0.0) {
        dVar21 = dVar27;
      }
      dVar24 = dVar19;
      if (dVar19 - dVar30 < 0.0) {
        dVar24 = dVar28;
      }
      if (dVar30 - dVar19 < 0.0) {
        dVar21 = dVar27;
      }
      if (dVar30 - dVar19 < 0.0) {
        dVar24 = dVar28;
      }
      kv->kickVel[0] = (float)dVar21;
      kv->kickVel[1] = (float)dVar24;
    }
  }
  uVar16 = *(uint *)&kv->field_0x5c;
  fVar3 = *(float *)&kv->field_0x5c;
  iVar9 = FLOAT_ORDER(uVar16);
  if (uVar16 != 0) {
    if (iVar9 < 0x40800000) {
      fVar4 = kv->kickVel[2];
      kv->kickVel[0] = (float)(dVar21 * 0.699999988079071);
      kv->kickVel[1] = (float)(dVar24 * 0.699999988079071);
      kv->kickVel[2] = fVar4 * 0.7;
    }
    if (iVar9 < 0x40e00000) {
      *(float *)&kv->field_0x5c = fVar3 + 1.0;
      kv->grav = kv->grav * 0.75;
    }
  }
  fVar7 = (pMoby->pos).x;
  uVar16 = (int)fVar7 >> 0x1f;
  dVar21 = 2.0;
  iVar9 = (uVar16 >> 1 ^ (uint)fVar7) - uVar16;
  if (((iVar9 < 0x40000000) || (0x447f4000 < iVar9)) ||
     ((fVar7 = (pMoby->pos).y, uVar16 = (int)fVar7 >> 0x1f,
      iVar9 = (uVar16 >> 1 ^ (uint)fVar7) - uVar16, 0x447f4000 < iVar9 || iVar9 < 0x40000000 ||
      ((fVar7 = (pMoby->pos).z, uVar16 = (int)fVar7 >> 0x1f,
       iVar9 = (uVar16 >> 1 ^ (uint)fVar7) - uVar16, iVar9 < 0x40000000 || (0x447f4000 < iVar9))))))
  {
    uVar14 = 0x100;
  }
  if ((*(int *)&kv->field_0x54 != -0x40800000) && (kv->peakFrame != -1.0)) {
    sVar11 = kv->stage;
    if (sVar11 < 1) {
      if ((-1 < sVar11) && (dVar20 = ABS((double)(kv->kickVel[2] / kv->grav)), 2.0 < dVar20)) {
        dVar21 = (double)BlendAnimFrame(pMoby);
        dVar20 = (double)(float)((double)(float)((double)kv->peakFrame - dVar21) / dVar20);
        if (dVar19 < dVar20) {
          dVar21 = (double)(float)(dVar20 - (double)pMoby->unk58);
          dVar20 = (double)(DAT_0071f408 * 0.1);
          if ((dVar21 <= dVar20) && (dVar24 = -dVar20, dVar20 = dVar21, dVar21 < dVar24)) {
            dVar20 = dVar24;
          }
          pMoby->unk58 = (float)((double)pMoby->unk58 + dVar20);
        }
      }
    }
    else if (sVar11 < 2) {
      dVar24 = (double)BlendAnimFrame(pMoby);
      if ((double)*(float *)&kv->field_0x54 <= dVar24) {
        pMoby->unk58 = (float)dVar19;
      }
      else {
        dVar24 = (double)(kv->grav * -0.5);
        iVar9 = MB_SolveQuad(dVar24,(double)(float)((double)kv->kickVel[2] - dVar24),
                             (double)(float)((double)(pMoby->pos).z - dVar20));
        if (((iVar9 < 1) ||
            (iVar9 = FLOAT_ORDER(local_70)
            , iVar9 < 1)) || (0x426fffff < iVar9)) {
          local_70 = 60.0;
        }
        dVar20 = (double)local_70;
        if ((double)local_70 - 9.999999747378752e-05 < 0.0) {
          dVar20 = 9.999999747378752e-05;
        }
        dVar24 = (double)BlendAnimFrame(pMoby);
        dVar20 = (double)(float)((double)(float)((double)*(float *)&kv->field_0x54 - dVar24) /
                                dVar20);
        if ((dVar20 <= dVar21) && (dVar21 = dVar20, dVar20 < dVar19)) {
          dVar21 = dVar19;
        }
        dVar21 = (double)(float)(dVar21 - (double)pMoby->unk58);
        dVar20 = (double)(DAT_0071f408 * 0.1);
        if ((dVar21 <= dVar20) && (dVar24 = -dVar20, dVar20 = dVar21, dVar21 < dVar24)) {
          dVar20 = dVar24;
        }
        pMoby->unk58 = (float)((double)pMoby->unk58 + dVar20);
      }
    }
    else if (sVar11 < 3) {
      pMoby->unk58 = 1.0;
    }
  }
  lVar15 = (uVar14 | 0x40) +
           (ZERO_MASK(((byte)pMoby->field43_0x70 & 2)) & uVar14 - (uVar14 | 0x40));
  uVar16 = (uint)lVar15;
  if ((kv->flag & 4U) == 0) {
    OrganicDeltAngSpeed((double)kv->faceAng,0x3f947ae140000000,0x3fd3333340000000,
                        (double)kv->faceLimit,lVar8,&DAT_0010afe8,(longlong)(int)kv + 0x44);
  }
  (pMoby->pos).x = (pMoby->pos).x + kv->kickVel[0];
  (pMoby->pos).y = (pMoby->pos).y + kv->kickVel[1];
  iVar9 = kv->radius;
  (pMoby->pos).z = (pMoby->pos).z + kv->kickVel[2];
  dVar20 = (double)FastIntToDouble(iVar9);
  lVar12 = lVar8;
  iVar9 = CollMobySphere
                    ((double)(float)(dVar20 * 0.0010742187732830644),local_e0,&DAT_0010afe8,0x10,
                     lVar8,0);
  if (0 < iVar9) {
    puVar13 = &DAT_00a14a00;
    dVar20 = 1.0;
    do {
      victim = (MobyInstance *)*puVar13;
      if ((((victim == (MobyInstance *)0x0) || (victim < g_MobyInstance)) ||
          (MobyInstanceEnd < victim)) ||
         (0x21c < (short)victim->oClass || (short)victim->oClass < 500)) {
        if (((kv->flag & 0x20U) != 0) && (kv->stage == 2)) {
          lVar15 = (longlong)(int)((uint)lVar15 | 0x100);
        }
      }
      else {
        CollDamageMobyDirect
                  ((float)dVar20,victim,pMoby,0x10000,(int)lVar12,&(pMoby->pos).x,kv->kickVel);
      }
      uVar16 = (uint)lVar15;
      iVar10 = iVar10 + 1;
      puVar13 = puVar13 + 1;
    } while (iVar10 < iVar9);
  }
  dVar20 = 0.0009765625;
  if ((float)((double)(longlong)kv->radius * 0.0009765625) <
      SQRT(kv->kickVel[2] * kv->kickVel[2] +
           kv->kickVel[0] * kv->kickVel[0] + kv->kickVel[1] * kv->kickVel[1])) {
    CollLine(local_110,local_f0,0x24,lVar8,0);
  }
  dVar21 = (double)FastIntToDouble(kv->radius);
  iVar10 = CollSphere((double)(float)(dVar21 * dVar20),local_f0);
  dVar20 = (double)kv->kickVel[2];
  dVar30 = (double)kv->kickVel[0];
  dVar24 = (double)kv->kickVel[1];
  sVar11 = kv->stage;
  dVar21 = (double)kv->grav;
  fVar3 = kv->xyBounceDamp;
  uVar17 = uVar16;
  if (iVar10 != 0) {
    (pMoby->pos).x = g_CollOutput.push.x;
    (pMoby->pos).y = g_CollOutput.push.y;
    fVar4 = g_CollOutput.push.z;
    (pMoby->pos).w = g_CollOutput.push.w;
    uVar17 = uVar16 | 2;
    (pMoby->pos).z = fVar4 - kv->zOfs;
    dVar25 = (double)(g_CollOutput.normal.z * g_CollOutput.normal.z +
                     g_CollOutput.normal.x * g_CollOutput.normal.x +
                     g_CollOutput.normal.y * g_CollOutput.normal.y);
    dVar27 = dVar19;
    dVar28 = dVar19;
    dVar29 = dVar19;
    if ((double)(float)SQRT(dVar25) != dVar19) {
      dVar27 = 1.0 / SQRT(dVar25);
      dVar27 = (double)(float)(-(double)(float)((double)(float)(dVar25 * dVar27) * dVar27 - 1.0) *
                               (double)(float)(dVar18 * dVar27) + dVar27);
      dVar27 = (double)(float)(-(double)(float)((double)(float)(dVar25 * dVar27) * dVar27 - 1.0) *
                               (double)(float)(dVar18 * dVar27) + dVar27);
      fVar4 = (float)(-(double)(float)((double)(float)(dVar25 * dVar27) * dVar27 - 1.0) *
                      (double)(float)(dVar18 * dVar27) + dVar27);
      dVar27 = (double)(g_CollOutput.normal.x * fVar4);
      dVar28 = (double)(g_CollOutput.normal.y * fVar4);
      dVar29 = (double)(g_CollOutput.normal.z * fVar4);
    }
    if (dVar29 < 0.7070000171661377) {
      dVar18 = (double)(float)(dVar20 * dVar29 +
                              (double)(float)(dVar30 * dVar27 + (double)(float)(dVar24 * dVar28)));
      if (dVar18 < dVar19) {
        dVar25 = (double)SQRT((float)(dVar29 * dVar29 +
                                     (double)(float)(dVar27 * dVar27 +
                                                    (double)(float)(dVar28 * dVar28))));
        dVar21 = (double)(float)(-(double)(float)(dVar18 * (double)(fVar3 + 1.0)) / dVar25);
        dVar18 = dVar19;
        if (dVar19 - dVar25 < 0.0) {
          dVar18 = (double)(float)(dVar29 * dVar21);
        }
        dVar26 = dVar19;
        if (dVar19 - dVar25 < 0.0) {
          dVar26 = (double)(float)(dVar28 * dVar21);
        }
        dVar22 = dVar19;
        if (dVar19 - dVar25 < 0.0) {
          dVar22 = (double)(float)(dVar27 * dVar21);
        }
        if (dVar25 - dVar19 < 0.0) {
          dVar18 = (double)(float)(dVar29 * dVar21);
        }
        if (dVar25 - dVar19 < 0.0) {
          dVar26 = (double)(float)(dVar28 * dVar21);
        }
        if (dVar25 - dVar19 < 0.0) {
          dVar22 = (double)(float)(dVar27 * dVar21);
        }
        dVar18 = dVar20 + dVar18;
        dVar20 = (double)(float)dVar18;
        kv->kickVel[2] = (float)dVar18;
        kv->kickVel[1] = (float)(dVar24 + dVar26);
        kv->kickVel[0] = (float)(dVar30 + dVar22);
      }
    }
    else {
      dVar18 = (double)(float)(dVar20 * dVar29 +
                              (double)(float)(dVar30 * dVar27 + (double)(float)(dVar24 * dVar28)));
      if (dVar18 < dVar19) {
        if (g_CollOutput.pMoby == (MobyInstance *)0x0) {
          sVar11 = 2;
          kv->stage = 2;
          uVar17 = uVar16 | 3;
        }
        else if (0 < g_CollOutput.poly) {
          sVar11 = 2;
          kv->stage = 2;
          uVar17 = uVar16 | 3;
        }
        dVar26 = (double)SQRT((float)(dVar29 * dVar29 +
                                     (double)(float)(dVar27 * dVar27 +
                                                    (double)(float)(dVar28 * dVar28))));
        dVar25 = (double)(float)(dVar18 / dVar26);
        dVar18 = dVar19;
        if (dVar19 - dVar26 < 0.0) {
          dVar18 = (double)(float)(dVar29 * dVar25);
        }
        dVar22 = dVar19;
        if (dVar19 - dVar26 < 0.0) {
          dVar22 = (double)(float)(dVar28 * dVar25);
        }
        dVar23 = dVar19;
        if (dVar19 - dVar26 < 0.0) {
          dVar23 = (double)(float)(dVar27 * dVar25);
        }
        if (dVar26 - dVar19 < 0.0) {
          dVar18 = (double)(float)(dVar29 * dVar25);
        }
        if (dVar26 - dVar19 < 0.0) {
          dVar22 = (double)(float)(dVar28 * dVar25);
        }
        if (dVar26 - dVar19 < 0.0) {
          dVar23 = (double)(float)(dVar27 * dVar25);
        }
        dVar18 = dVar20 - dVar18;
        dVar20 = (double)(float)dVar18;
        dVar27 = (double)(float)(dVar24 - dVar22);
        dVar28 = (double)(float)(dVar30 - dVar23);
        kv->kickVel[2] = (float)dVar18;
        kv->kickVel[1] = (float)(dVar24 - dVar22);
        kv->kickVel[0] = (float)(dVar30 - dVar23);
        if (sVar11 == 2) {
          dVar18 = (double)SQRT((float)(dVar20 * dVar20 +
                                       (double)(float)(dVar28 * dVar28 +
                                                      (double)(float)(dVar27 * dVar27))));
          dVar24 = -dVar18;
          if ((dVar24 <= dVar21) && (dVar30 = -dVar21, dVar21 = dVar24, dVar24 < dVar30)) {
            dVar21 = dVar30;
          }
          dVar30 = (double)(float)((double)(float)(dVar21 + dVar18) / dVar18);
          dVar21 = dVar20 * dVar30;
          dVar24 = dVar19;
          if (dVar19 - dVar18 < 0.0) {
            dVar24 = (double)(float)(dVar28 * dVar30);
          }
          dVar29 = dVar19;
          if (dVar19 - dVar18 < 0.0) {
            dVar29 = (double)(float)(dVar27 * dVar30);
          }
          dVar20 = dVar19;
          if (dVar19 - dVar18 < 0.0) {
            dVar20 = (double)(float)dVar21;
          }
          if (dVar18 - dVar19 < 0.0) {
            dVar24 = (double)(float)(dVar28 * dVar30);
          }
          if (dVar18 - dVar19 < 0.0) {
            dVar29 = (double)(float)(dVar27 * dVar30);
          }
          if (dVar18 - dVar19 < 0.0) {
            dVar20 = (double)(float)dVar21;
          }
          kv->kickVel[0] = (float)dVar24;
          kv->kickVel[1] = (float)dVar29;
          kv->kickVel[2] = (float)dVar20;
        }
      }
    }
  }
  if (dVar20 < dVar19 && sVar11 == 0) {
    kv->stage = 1;
  }
  return uVar17;
}


// 0x010bcf0 (0x2a8 bytes)
void MB_MtxToQuat(float *outQuat,float *mtx)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  ulonglong uVar17;
  longlong lVar18;
  GPiece<48> local_70;
  uint local_40 [3];
  float local_34 [11];
  
  uVar7 = (int)*mtx >> 0x1f;
  uVar8 = (int)mtx[5] >> 0x1f;
  uVar9 = (int)mtx[10] >> 0x1f;
  fVar1 = *mtx + mtx[5] + mtx[10];
  if (fVar1 <= 0.0) {
    lVar18 = (longlong)(int)((uVar7 >> 1 ^ (uint)*mtx) - uVar7) -
             (longlong)(int)((uVar8 >> 1 ^ (uint)mtx[5]) - uVar8);
    lVar16 = lVar18 >> 0x3f;
    uVar7 = (int)local_34[(int)(lVar18 >> 0x3f) * -4] >> 0x1f;
    uVar17 = ((longlong)(int)((uVar7 >> 1 ^ (uint)local_34[(int)(lVar18 >> 0x3f) * -4]) - uVar7) -
              (longlong)(int)((uVar9 >> 1 ^ (uint)mtx[10]) - uVar9) >> 0x3f & lVar16 + 2U) - lVar16;
    uVar7 = *(uint *)(((uint)((uVar17 & 0xffffffff) << 2) & 0xc | (uint)local_70) + 0x30);
    iVar12 = (int)(((ulonglong)uVar7 & 0x3fffffff) << 2);
    iVar15 = (int)uVar17;
    uVar8 = *(uint *)((int)local_40 + iVar12);
    iVar13 = (int)((uVar17 & 0x3fffffff) << 2);
    iVar14 = (int)(((ulonglong)uVar8 & 0x3fffffff) << 2);
    fVar1 = *(float *)(local_70 + iVar12 + uVar8 * 0xc + 0x3c);
    fVar2 = *(float *)(local_70 + iVar13 + uVar7 * 0xc + 0x3c);
    fVar3 = *(float *)(local_70 + iVar14 + uVar7 * 0xc + 0x3c);
    fVar4 = *(float *)(local_70 + iVar12 + iVar15 * 0xc + 0x3c);
    fVar5 = *(float *)(local_70 + iVar14 + iVar15 * 0xc + 0x3c);
    fVar11 = SQRT((*(float *)(local_70 + iVar13 + iVar15 * 0xc + 0x3c) -
                  (*(float *)(local_70 + iVar12 + uVar7 * 0xc + 0x3c) +
                  *(float *)(local_70 + iVar14 + uVar8 * 0xc + 0x3c))) + 1.0);
    fVar6 = *(float *)(local_70 + iVar13 + uVar8 * 0xc + 0x3c);
    *(float *)((int)outQuat + iVar13) = fVar11 * 0.5;
    fVar10 = fVar11;
    if (0.0 - fVar11 < 0.0) {
      fVar10 = 0.5 / fVar11;
    }
    if (fVar11 - 0.0 < 0.0) {
      fVar10 = 0.5 / fVar11;
    }
    outQuat[3] = (fVar1 - fVar3) * fVar10;
    *(float *)((int)outQuat + iVar12) = (fVar2 + fVar4) * fVar10;
    *(float *)((int)outQuat + iVar14) = (fVar6 + fVar5) * fVar10;
  }
  else {
    fVar2 = SQRT(fVar1 + 1.0);
    fVar1 = 0.5 / fVar2;
    outQuat[3] = fVar2 * 0.5;
    *outQuat = (mtx[9] - mtx[6]) * fVar1;
    outQuat[1] = (mtx[2] - mtx[8]) * fVar1;
    outQuat[2] = (mtx[4] - mtx[1]) * fVar1;
  }
  return;
}


// 0x010bf98 (0x68 bytes)
void MB_TransformToQuat(float *param_1,Vec4 *param_2)

{
  Vec4 aVStack_60 [4];
  
  FastMtxCopyNoTranslate(aVStack_60);
  MB_MtxToQuat(param_1,&aVStack_60[0].x);
  FastApplyTransform(param_2,aVStack_60);
  return;
}


// 0x010c000 (0x18 bytes)
void MB_CopyHeroLights(int param_1)

{
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)&g_heroMobyPtr->color;
  return;
}


// 0x010c038 (0xd4 bytes)
void MB_AxisAngleToQuat(float angle,float *outQuat,float *axis)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar1 = angle * 0.5;
  fVar2 = 3.1415925 - fVar1;
  if (fVar1 - (3.1415925 - fVar1) < 0.0) {
    fVar2 = fVar1;
  }
  fVar3 = -3.1415925 - fVar1;
  if ((-3.1415925 - fVar1) - fVar2 < 0.0) {
    fVar3 = fVar2;
  }
  fVar2 = fVar3 * fVar3;
  fVar4 = fVar2 * fVar2 * fVar3;
  fVar5 = fVar2 * fVar4;
  fVar2 = fVar2 * fVar5 * 2.601887e-06 +
          fVar5 * -0.0001980741 + fVar4 * 0.0083330255 + fVar2 * fVar3 * -0.16666657 + fVar3;
  *outQuat = *axis * fVar2;
  outQuat[1] = axis[1] * fVar2;
  outQuat[2] = axis[2] * fVar2;
  fVar1 = fVar1 + 1.5707963;
  fVar2 = 3.1415925 - fVar1;
  if (fVar1 - (3.1415925 - fVar1) < 0.0) {
    fVar2 = fVar1;
  }
  fVar3 = -3.1415925 - fVar1;
  if ((-3.1415925 - fVar1) - fVar2 < 0.0) {
    fVar3 = fVar2;
  }
  fVar1 = fVar3 * fVar3;
  fVar2 = fVar1 * fVar1 * fVar3;
  fVar4 = fVar1 * fVar2;
  outQuat[3] = fVar1 * fVar4 * 2.601887e-06 +
               fVar4 * -0.0001980741 + fVar2 * 0.0083330255 + fVar1 * fVar3 * -0.16666657 + fVar3;
  return;
}


// 0x010c110 (0xd0 bytes)
void ____MB_ClampVecToPlanes(undefined8 param_1,undefined8 param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  int iVar6;
  float fStack00000030;
  float fStack00000034;
  float fStack00000038;
  float fStack0000003c;
  float local_10 [4];
  
  fStack00000034 = (float)param_1;
  iVar6 = 0;
  fStack0000003c = (float)param_2;
  fStack00000030 = (float)((ulonglong)param_1 >> 0x20);
  pfVar3 = local_10;
  pfVar4 = &stack0x00000030;
  fStack00000038 = (float)((ulonglong)param_2 >> 0x20);
  pfVar5 = param_3;
  do {
    if ((int)*pfVar5 < 0) {
      fVar1 = *pfVar4;
      fVar2 = *pfVar3;
      param_3[3] = fStack0000003c;
      fVar1 = ABS((fVar1 - 0.1) / fVar2);
      *param_3 = (*param_3 - fStack00000030) * fVar1 + fStack00000030;
      param_3[1] = (param_3[1] - fStack00000034) * fVar1 + fStack00000034;
      param_3[2] = (param_3[2] - fStack00000038) * fVar1 + fStack00000038;
    }
    iVar6 = iVar6 + 1;
    pfVar4 = pfVar4 + 1;
    pfVar3 = pfVar3 + 1;
    pfVar5 = pfVar5 + 1;
  } while (iVar6 < 3);
  return;
}


// 0x010c1e8 (0x618 bytes)
// inlined: FastAtan2 @0x10c344, FastAtan2 @0x10c514, FastAtan2 @0x10c6d0
void MB_MtxToEuler(int param_1,MobyInstance *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  GPiece<16> auVar5;
  GPiece<16> auVar6;
  ulonglong *puVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  float *pfVar16;
  longlong lVar15;
  longlong lVar17;
  ulonglong uVar18;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  ulonglong in_f28;
  double dVar25;
  ulonglong in_f29;
  ulonglong in_f30;
  double dVar26;
  ulonglong in_f31;
  GPiece<16> auVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  
  uVar12 = ZEXT48(&stack0x00000000);
  lVar14 = uVar12 - 0x1d0;
  puVar7 = (ulonglong *)lVar14;
  *puVar7 = uVar12;
  puVar7[0x3c] = in_LR;
  puVar7[0x36] = in_f28;
  puVar7[0x37] = in_f29;
  puVar7[0x38] = in_f30;
  puVar7[0x39] = in_f31;
  auVar27 = *(undefined1 (*) [16])(param_1 & 0xfffffff0);
  puVar8 = (undefined4 *)(param_1 + 0x10U & 0xfffffff0);
  uVar31 = puVar8[3];
  uVar30 = puVar8[2];
  uVar29 = puVar8[1];
  uVar28 = *puVar8;
  *(undefined1 (*) [16])(puVar7 + 0x30) = auVar27;
  puVar8 = (undefined4 *)(param_1 + 0x20U & 0xfffffff0);
  uVar35 = puVar8[3];
  uVar34 = puVar8[2];
  uVar33 = puVar8[1];
  uVar32 = *puVar8;
  puVar8 = (undefined4 *)(param_1 + 0x30U & 0xfffffff0);
  uVar39 = puVar8[3];
  uVar38 = puVar8[2];
  uVar37 = puVar8[1];
  uVar36 = *puVar8;
  *(undefined1 (*) [16])(puVar7 + 0x18) = auVar27;
  *(undefined4 *)((int)puVar7 + 0xdc) = uVar31;
  *(undefined4 *)(puVar7 + 0x1b) = uVar30;
  *(undefined4 *)((int)puVar7 + 0xd4) = uVar29;
  *(undefined4 *)(puVar7 + 0x1a) = uVar28;
  *(undefined4 *)((int)puVar7 + 0xec) = uVar35;
  *(undefined4 *)(puVar7 + 0x1d) = uVar34;
  *(undefined4 *)((int)puVar7 + 0xe4) = uVar33;
  *(undefined4 *)(puVar7 + 0x1c) = uVar32;
  auVar5 = auVar27 >> 0x40 & (GPiece<16>)0xffffffff;
  *(undefined4 *)((int)puVar7 + 0xfc) = uVar39;
  *(undefined4 *)(puVar7 + 0x1f) = uVar38;
  *(undefined4 *)((int)puVar7 + 0xf4) = uVar37;
  *(undefined4 *)(puVar7 + 0x1e) = uVar36;
  fVar1 = *(float *)(puVar7 + 0x30);
  auVar6 = auVar27 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar27 = auVar27 >> 0x40 & (GPiece<16>)0xffffffff;
  puVar7[0x34] = unaff_r30;
  *(undefined1 (*) [16])(puVar7 + 0x30) = auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60;
  dVar25 = 0.0;
  uVar28 = storeVectorElementWordIndexed
                     (auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60,0x10c,lVar14);
  *(undefined4 *)((int)puVar7 + 0x10c) = uVar28;
  uVar28 = storeVectorElementWordIndexed
                     (auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60,0x110,lVar14);
  *(undefined4 *)(puVar7 + 0x22) = uVar28;
  *(undefined4 *)(puVar7 + 0x1f) = 0;
  *(undefined4 *)((int)puVar7 + 0xf4) = 0;
  *(undefined4 *)(puVar7 + 0x1e) = 0;
  puVar7[0x35] = unaff_r31;
  *(undefined4 *)((int)puVar7 + 0xfc) = 0x3f800000;
  *(float *)((int)puVar7 + 0x114) = ABS(fVar1) - ABS(*(float *)(puVar7 + 0x30));
  dVar26 = 0.7853981852531433;
  uVar18 = (ulonglong)(*(uint *)((int)puVar7 + 0x10c) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)((int)puVar7 + 0x114) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)(puVar7 + 0x22) >> 0x1d) & 4;
  fVar4 = *(float *)(&g_atanQuadrantTable + (int)(uVar18 << 2));
  fVar3 = ABS(*(float *)((int)puVar7 + 0x10c));
  if (*(float *)((int)puVar7 + 0x114) - 0.0 < 0.0) {
    fVar3 = ABS(*(float *)(puVar7 + 0x30));
  }
  fVar2 = *(float *)(((uint)(uVar18 << 2) | 0x735900) + 4);
  fVar11 = ABS(*(float *)(puVar7 + 0x22));
  if (*(float *)((int)puVar7 + 0x114) - 0.0 < 0.0) {
    fVar11 = ABS(fVar1);
  }
  puVar7[0x33] = unaff_r29;
  dVar20 = dVar25;
  if (0.0 < fVar3) {
    lVar13 = uVar12 - 0x1c0;
    lVar17 = uVar12 - 0x68;
    lVar15 = uVar12 - 0x78;
    lVar19 = 2;
    fVar1 = (fVar11 - fVar3) / (fVar11 + fVar3);
    fVar3 = fVar1 * fVar1;
    *(float *)((int)puVar7 + 0x164) = fVar1;
    *(float *)((int)puVar7 + 0x15c) = fVar1;
    *(float *)(puVar7 + 0x2c) = fVar1;
    *(float *)(puVar7 + 0x2b) = fVar1;
    fVar1 = fVar3 * fVar3;
    *(float *)((int)puVar7 + 0x15c) = *(float *)((int)puVar7 + 0x15c) * fVar3;
    *(float *)(puVar7 + 0x2c) = *(float *)(puVar7 + 0x2c) * fVar1;
    *(float *)((int)puVar7 + 0x164) = *(float *)((int)puVar7 + 0x164) * fVar1 * fVar3;
    do {
      *(float *)((int)lVar13 + 0x158) = *(float *)((int)lVar13 + 0x148) * fVar1 * fVar1;
      iVar9 = (int)lVar15;
      lVar15 = lVar15 + 8;
      lVar13 = lVar13 + 8;
      *(float *)((int)lVar17 + 4) = *(float *)(iVar9 + 4) * fVar1 * fVar1;
      lVar17 = lVar17 + 8;
      lVar19 = lVar19 + -1;
    } while (lVar19 != 0);
    lVar19 = 4;
    lVar17 = uVar12 - 0x78;
    pfVar16 = (float *)&DAT_007358e0;
    lVar13 = lVar14;
    lVar15 = lVar17;
    do {
      fVar1 = *pfVar16;
      fVar3 = pfVar16[1];
      pfVar16 = pfVar16 + 2;
      *(float *)((int)lVar13 + 0x158) = *(float *)((int)lVar13 + 0x158) * fVar1;
      lVar13 = lVar13 + 8;
      *(float *)((int)lVar15 + 4) = *(float *)((int)lVar15 + 4) * fVar3;
      lVar15 = lVar15 + 8;
      lVar19 = lVar19 + -1;
    } while (lVar19 != 0);
    lVar15 = 2;
    lVar13 = lVar14;
    do {
      iVar9 = (int)lVar13;
      iVar10 = (int)lVar17;
      lVar13 = lVar13 + 0x10;
      lVar17 = lVar17 + 0x10;
      dVar20 = (double)((float)(dVar20 + (double)*(float *)(iVar9 + 0x158)) + *(float *)(iVar10 + 4)
                        + *(float *)(iVar10 + 8) + *(float *)(iVar10 + 0xc));
      lVar15 = lVar15 + -1;
    } while (lVar15 != 0);
    dVar20 = (double)((float)(dVar20 + 0.7853981852531433) * fVar4 + fVar2);
  }
  *(undefined4 *)(puVar7 + 0xe) = 0;
  *(undefined4 *)((int)puVar7 + 0x74) = 0;
  *(float *)(puVar7 + 0xf) = (float)-dVar20;
  FastEulerToMtx1(uVar12 - 0x150,uVar12 - 0x160);
  FastVecMtx4Mul(uVar12 - 0x110,uVar12 - 0x150,uVar12 - 0x110);
  dVar21 = ABS((double)*(float *)(puVar7 + 0x18));
  dVar22 = ABS(-(double)*(float *)(puVar7 + 0x19));
  *(float *)((int)puVar7 + 0x104) = (float)-(double)*(float *)(puVar7 + 0x19);
  *(float *)(puVar7 + 0x21) = (float)(dVar21 - dVar22);
  uVar18 = (ulonglong)(*(uint *)(puVar7 + 0x18) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar7 + 0x21) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar7 + 0x104) >> 0x1d) & 4;
  dVar24 = dVar21;
  if ((double)*(float *)(puVar7 + 0x21) - dVar25 < 0.0) {
    dVar24 = dVar22;
  }
  fVar1 = *(float *)(&g_atanQuadrantTable + (int)(uVar18 << 2));
  dVar22 = ABS((double)*(float *)((int)puVar7 + 0x104));
  if ((double)*(float *)(puVar7 + 0x21) - dVar25 < 0.0) {
    dVar22 = dVar21;
  }
  fVar4 = *(float *)(((uint)(uVar18 << 2) | 0x735900) + 4);
  dVar21 = dVar25;
  if (dVar25 < dVar24) {
    lVar13 = uVar12 - 0x1c0;
    lVar17 = uVar12 - 0x88;
    lVar15 = uVar12 - 0x98;
    lVar19 = 2;
    fVar3 = (float)(dVar22 - dVar24) / (float)(dVar22 + dVar24);
    fVar2 = fVar3 * fVar3;
    *(float *)((int)puVar7 + 0x144) = fVar3;
    *(float *)((int)puVar7 + 0x13c) = fVar3;
    *(float *)(puVar7 + 0x28) = fVar3;
    *(float *)(puVar7 + 0x27) = fVar3;
    fVar3 = fVar2 * fVar2;
    *(float *)((int)puVar7 + 0x13c) = *(float *)((int)puVar7 + 0x13c) * fVar2;
    *(float *)(puVar7 + 0x28) = *(float *)(puVar7 + 0x28) * fVar3;
    *(float *)((int)puVar7 + 0x144) = *(float *)((int)puVar7 + 0x144) * fVar3 * fVar2;
    do {
      *(float *)((int)lVar13 + 0x138) = *(float *)((int)lVar13 + 0x128) * fVar3 * fVar3;
      iVar9 = (int)lVar15;
      lVar15 = lVar15 + 8;
      lVar13 = lVar13 + 8;
      *(float *)((int)lVar17 + 4) = *(float *)(iVar9 + 4) * fVar3 * fVar3;
      lVar17 = lVar17 + 8;
      lVar19 = lVar19 + -1;
    } while (lVar19 != 0);
    lVar19 = 4;
    lVar17 = uVar12 - 0x98;
    pfVar16 = (float *)&DAT_007358e0;
    lVar13 = lVar14;
    lVar15 = lVar17;
    do {
      fVar3 = *pfVar16;
      fVar2 = pfVar16[1];
      pfVar16 = pfVar16 + 2;
      *(float *)((int)lVar13 + 0x138) = *(float *)((int)lVar13 + 0x138) * fVar3;
      lVar13 = lVar13 + 8;
      *(float *)((int)lVar15 + 4) = *(float *)((int)lVar15 + 4) * fVar2;
      lVar15 = lVar15 + 8;
      lVar19 = lVar19 + -1;
    } while (lVar19 != 0);
    lVar15 = 2;
    lVar13 = lVar14;
    dVar24 = dVar25;
    do {
      iVar9 = (int)lVar13;
      iVar10 = (int)lVar17;
      lVar13 = lVar13 + 0x10;
      lVar17 = lVar17 + 0x10;
      dVar24 = (double)((float)(dVar24 + (double)*(float *)(iVar9 + 0x138)) + *(float *)(iVar10 + 4)
                        + *(float *)(iVar10 + 8) + *(float *)(iVar10 + 0xc));
      lVar15 = lVar15 + -1;
    } while (lVar15 != 0);
    dVar21 = (double)((float)(dVar24 + dVar26) * fVar1 + fVar4);
  }
  *(undefined4 *)(puVar7 + 0xe) = 0;
  *(undefined4 *)(puVar7 + 0xf) = 0;
  *(float *)((int)puVar7 + 0x74) = (float)-dVar21;
  FastEulerToMtx2(uVar12 - 0x150,uVar12 - 0x160);
  FastVecMtx4Mul(uVar12 - 0x110,uVar12 - 0x150,uVar12 - 0x110);
  dVar23 = ABS((double)*(float *)((int)puVar7 + 0xd4));
  dVar24 = ABS((double)*(float *)(puVar7 + 0x1b));
  *(float *)(puVar7 + 0x20) = (float)(dVar23 - dVar24);
  uVar18 = (ulonglong)(*(uint *)((int)puVar7 + 0xd4) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar7 + 0x20) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)(puVar7 + 0x1b) >> 0x1d) & 4;
  dVar22 = dVar23;
  if ((double)*(float *)(puVar7 + 0x20) - dVar25 < 0.0) {
    dVar22 = dVar24;
  }
  fVar1 = *(float *)(&g_atanQuadrantTable + (int)(uVar18 << 2));
  if ((double)*(float *)(puVar7 + 0x20) - dVar25 < 0.0) {
    dVar24 = dVar23;
  }
  fVar4 = *(float *)(((uint)(uVar18 << 2) | 0x735900) + 4);
  if (dVar25 < dVar22) {
    lVar13 = uVar12 - 0x1c0;
    lVar15 = uVar12 - 0xb8;
    lVar17 = uVar12 - 0xa8;
    lVar19 = 2;
    fVar3 = (float)(dVar24 - dVar22) / (float)(dVar24 + dVar22);
    fVar2 = fVar3 * fVar3;
    *(float *)((int)puVar7 + 0x124) = fVar3;
    *(float *)((int)puVar7 + 0x11c) = fVar3;
    *(float *)(puVar7 + 0x24) = fVar3;
    *(float *)(puVar7 + 0x23) = fVar3;
    fVar3 = fVar2 * fVar2;
    *(float *)((int)puVar7 + 0x11c) = *(float *)((int)puVar7 + 0x11c) * fVar2;
    *(float *)(puVar7 + 0x24) = *(float *)(puVar7 + 0x24) * fVar3;
    *(float *)((int)puVar7 + 0x124) = *(float *)((int)puVar7 + 0x124) * fVar3 * fVar2;
    do {
      *(float *)((int)lVar13 + 0x118) = *(float *)((int)lVar13 + 0x108) * fVar3 * fVar3;
      iVar9 = (int)lVar15;
      lVar13 = lVar13 + 8;
      lVar15 = lVar15 + 8;
      *(float *)((int)lVar17 + 4) = *(float *)(iVar9 + 4) * fVar3 * fVar3;
      lVar17 = lVar17 + 8;
      lVar19 = lVar19 + -1;
    } while (lVar19 != 0);
    lVar19 = 4;
    lVar17 = uVar12 - 0xb8;
    pfVar16 = (float *)&DAT_007358e0;
    lVar13 = lVar14;
    lVar15 = lVar17;
    do {
      fVar3 = *pfVar16;
      fVar2 = pfVar16[1];
      pfVar16 = pfVar16 + 2;
      *(float *)((int)lVar13 + 0x118) = *(float *)((int)lVar13 + 0x118) * fVar3;
      lVar13 = lVar13 + 8;
      *(float *)((int)lVar15 + 4) = *(float *)((int)lVar15 + 4) * fVar2;
      lVar15 = lVar15 + 8;
      lVar19 = lVar19 + -1;
    } while (lVar19 != 0);
    lVar13 = 2;
    do {
      iVar9 = (int)lVar14;
      iVar10 = (int)lVar17;
      lVar14 = lVar14 + 0x10;
      lVar17 = lVar17 + 0x10;
      dVar25 = (double)((float)(dVar25 + (double)*(float *)(iVar9 + 0x118)) + *(float *)(iVar10 + 4)
                        + *(float *)(iVar10 + 8) + *(float *)(iVar10 + 0xc));
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
    dVar25 = (double)((float)(dVar25 + dVar26) * fVar1 + fVar4);
  }
  (param_2->bSphere).x = (float)dVar25;
  (param_2->bSphere).y = (float)dVar21;
  (param_2->bSphere).z = (float)dVar20;
  return;
}


// 0x010c808 (0x190 bytes)
/* [p2_mobyutil] timer-based color flash using short timer struct; calls MB_GetColor
   [p2_mobyutil] timer-based light blend; calls MB_GetLights */

void MB_UpdateLightsTransition(undefined8 param_1,undefined8 param_2)

{
  short sVar1;
  short *psVar2;
  int iVar3;
  undefined8 in_LR;
  double dVar4;
  double dVar5;
  GPiece<16> auVar6;
  GPiece<16> auVar7;
  GPiece<16> auVar8;
  GPiece<3> local_40;
  undefined1 uStack_3d;
  GPiece<3> local_3c;
  undefined1 uStack_39;
  GPiece<3> local_38;
  undefined1 uStack_35;
  
  psVar2 = (short *)param_2;
  iVar3 = (int)*psVar2;
  if ((iVar3 == 0) || (psVar2[1] != 0)) {
    auVar6 = ZEXT416(0xfffffff0);
    auVar7 = ZEXT416(0xffffffff);
    auVar8 = auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60;
    auVar7 = loadVectorLeftIndexed(0xc,param_2);
    auVar6 = vectorShiftRightAlgebraicWord
                       (auVar7,auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60);
    auVar7 = vectorConvertFromSignedFixedPointWord(auVar6,0);
    auVar6 = loadVectorLeftIndexed(in_LR,0x10c800);
    auVar6 = auVar6 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar6 = vectorAddFloatingPoint
                       (auVar7,auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60);
    auVar7 = vectorShiftLeftIntegerWord(auVar8,auVar8);
    auVar8 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar6 = vectorMultiplyAddFloatingPoint(auVar8,auVar6,auVar7);
    auVar6 = vectorConvertToSignedFixedPointWordSaturate(auVar6,0);
    auVar6 = vectorSplatHalfWord(auVar6,1);
    sVar1 = storeVectorElementHalfWordIndexed(auVar6,0,param_2);
    *psVar2 = sVar1;
    psVar2[1] = 0;
    if (iVar3 == 0) {
      MB_GetLights((double)((float)(longlong)(int)psVar2[6] + 0.5),param_1,local_40,local_3c,
                   local_38);
      *(undefined1 *)(psVar2 + 2) = uStack_3d;
      *(undefined1 *)((int)psVar2 + 5) = uStack_39;
      *(undefined1 *)(psVar2 + 3) = uStack_35;
    }
    else {
      dVar5 = (double)(longlong)
                      ((double)animationSpeed * (double)((float)(longlong)(int)psVar2[6] + 0.5));
      dVar4 = (double)FastIntToDouble
                                ((int)((double)animationSpeed *
                                      (double)((float)(longlong)(int)psVar2[7] + 0.5)));
      sVar1 = FastDoubleToInt
                        ((double)(float)(dVar5 * (double)(float)((double)(longlong)iVar3 / dVar4)));
      *psVar2 = sVar1;
      if (sVar1 < 1) {
        *psVar2 = 1;
      }
    }
  }
  return;
}


// 0x010c9a0 (0x3f4 bytes)
void MB_ColorDyingMoby(MobyInstance *param_1,undefined8 param_2)

{
  byte bVar1;
  short sVar2;
  int iVar6;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  short *psVar7;
  undefined8 in_LR;
  double dVar8;
  GPiece<16> auVar9;
  GPiece<16> auVar10;
  GPiece<16> auVar11;
  GPiece<16> auVar12;
  
  psVar7 = (short *)param_2;
  if (*psVar7 != 0) {
    iVar6 = FastDecTimerS16(param_2);
    if (iVar6 != 0) {
      if (psVar7[1] != 0) {
        SetColorOfMoby
                  (param_1,(ulonglong)*(byte *)(psVar7 + 2),(ulonglong)*(byte *)((int)psVar7 + 5),
                   (ulonglong)*(byte *)(psVar7 + 3));
        return;
      }
      auVar9 = ZEXT416(0xfffffff0);
      auVar10 = ZEXT416(0xffffffff);
      auVar11 = auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60;
      auVar10 = loadVectorLeftIndexed(0xe,param_2);
      psVar7[1] = 1;
      auVar9 = vectorShiftRightAlgebraicWord
                         (auVar10,auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60);
      auVar11 = vectorShiftLeftIntegerWord(auVar11,auVar11);
      auVar10 = vectorConvertFromSignedFixedPointWord(auVar9,0);
      auVar9 = loadVectorLeftIndexed(in_LR,0x10c998);
      auVar9 = auVar9 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar12 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar9 = vectorAddFloatingPoint
                         (auVar10,auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60);
      auVar9 = vectorMultiplyAddFloatingPoint(auVar12,auVar9,auVar11);
      auVar9 = vectorConvertToSignedFixedPointWordSaturate(auVar9,0);
      auVar9 = vectorSplatHalfWord(auVar9,1);
      sVar2 = storeVectorElementHalfWordIndexed(auVar9,0,param_2);
      *psVar7 = sVar2;
    }
    if (psVar7[1] == 0) {
      dVar8 = (double)FastIntToDouble
                                ((int)(animationSpeed * ((float)(longlong)(int)psVar7[6] + 0.5)));
      dVar8 = (double)(float)((double)(float)(dVar8 - (double)(longlong)(int)*psVar7) / dVar8);
      if (*(byte *)((int)psVar7 + 7) == 0) {
        uVar3 = (ulonglong)*(byte *)(psVar7 + 2);
      }
      else {
        uVar3 = FastDoubleToInt
                          ((double)(float)((double)(longlong)
                                                   (int)((uint)*(byte *)((int)psVar7 + 7) -
                                                        (uint)*(byte *)(psVar7 + 2)) * dVar8 +
                                          (double)*(byte *)(psVar7 + 2)));
      }
      if (*(byte *)(psVar7 + 4) == 0) {
        uVar4 = (ulonglong)*(byte *)((int)psVar7 + 5);
      }
      else {
        uVar4 = FastDoubleToInt
                          ((double)(float)((double)(longlong)
                                                   (int)((uint)*(byte *)(psVar7 + 4) -
                                                        (uint)*(byte *)((int)psVar7 + 5)) * dVar8 +
                                          (double)*(byte *)((int)psVar7 + 5)));
      }
      if (*(byte *)((int)psVar7 + 9) == 0) {
        uVar5 = (ulonglong)*(byte *)(psVar7 + 3);
      }
      else {
        uVar5 = FastDoubleToInt
                          ((double)(float)((double)(longlong)
                                                   (int)((uint)*(byte *)((int)psVar7 + 9) -
                                                        (uint)*(byte *)(psVar7 + 3)) * dVar8 +
                                          (double)*(byte *)(psVar7 + 3)));
      }
    }
    else {
      dVar8 = (double)FastIntToDouble
                                ((int)(animationSpeed * ((float)(longlong)(int)psVar7[7] + 0.5)));
      bVar1 = *(byte *)((int)psVar7 + 7);
      dVar8 = (double)(float)((double)(float)(dVar8 - (double)(longlong)(int)*psVar7) / dVar8);
      if (bVar1 == 0) {
        uVar3 = (ulonglong)*(byte *)(psVar7 + 2);
      }
      else {
        uVar3 = FastDoubleToInt
                          ((double)(float)((double)(longlong)
                                                   (int)((uint)*(byte *)(psVar7 + 2) - (uint)bVar1)
                                           * dVar8 + (double)bVar1));
      }
      bVar1 = *(byte *)(psVar7 + 4);
      if (bVar1 == 0) {
        uVar4 = (ulonglong)*(byte *)((int)psVar7 + 5);
      }
      else {
        uVar4 = FastDoubleToInt
                          ((double)(float)((double)(longlong)
                                                   (int)((uint)*(byte *)((int)psVar7 + 5) -
                                                        (uint)bVar1) * dVar8 + (double)bVar1));
      }
      bVar1 = *(byte *)((int)psVar7 + 9);
      if (bVar1 == 0) {
        uVar5 = (ulonglong)*(byte *)(psVar7 + 3);
      }
      else {
        uVar5 = FastDoubleToInt
                          ((double)(float)((double)(longlong)
                                                   (int)((uint)*(byte *)(psVar7 + 3) - (uint)bVar1)
                                           * dVar8 + (double)bVar1));
      }
    }
    SetColorOfMoby(param_1,uVar3,uVar4,uVar5);
  }
  return;
}


// 0x010cd94 (0x7c bytes)
/* [p2_mobyutil] idx+delta, wrapped modulo path->nPnts if wrap else clamped to [0,n-1] */

int MB_PathStepIndex(int *path,int idx,int delta,int wrap)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (wrap == 0) {
    iVar2 = idx + delta;
    uVar3 = iVar2 >> 0x1f & -iVar2;
    if (-1 < delta) {
      uVar3 = (uint)((longlong)(*path + -1) - (longlong)iVar2 >> 0x3f) & (*path + -1) - iVar2;
    }
    iVar2 = iVar2 + uVar3;
  }
  else {
    iVar1 = *path;
    iVar2 = idx + delta + iVar1;
    iVar2 = iVar2 - (iVar2 / iVar1) * iVar1;
  }
  return iVar2;
}


// 0x010ce18 (0x324 bytes)
/* [p2_mobyutil] advances (node,segT) along path by signed distance using per-segment length at
   node*16+0x1c; wrap flag param_7 */

undefined8
MB_PathMoveDist
          (double param_1,uint *param_2,float *param_3,uint *param_4,float *param_5,
          undefined8 param_6,int param_7)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  float fVar11;
  longlong lVar12;
  int iVar13;
  undefined8 uVar14;
  int iVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  
  lVar12 = 1;
  dVar18 = 0.0;
  uVar17 = (ulonglong)*param_4;
  if (param_1 < 0.0) {
    lVar12 = -1;
    param_1 = -param_1;
  }
  uVar14 = 0;
  iVar13 = (int)lVar12;
  uVar16 = uVar17;
  while (iVar15 = (int)uVar17, param_1 != 0.0) {
    uVar5 = *param_2;
    if (((int)uVar16 == uVar5 - 1) && (param_7 == 0)) break;
    if (iVar13 == 1) {
      dVar19 = (double)*param_5;
      bVar1 = *(float *)((int)param_2 + (int)((uVar16 & 0xffffffff) << 4) + 0x1c) <
              (float)(dVar19 + param_1);
      uVar16 = uVar17;
    }
    else {
      dVar19 = (double)*param_5;
      bVar1 = false;
      if (dVar19 < param_1) {
        bVar1 = true;
      }
    }
    if (bVar1) {
      uVar17 = uVar16 + lVar12;
      if (((int)uVar5 <= (int)uVar17) || ((int)uVar17 < 0)) {
        uVar17 = (uVar17 + uVar5) -
                 (longlong)((int)(uVar17 + uVar5) / (int)uVar5) * (longlong)(int)uVar5;
      }
      if (iVar13 == 1) {
        fVar2 = *(float *)((int)param_2 + (int)((uVar16 & 0xffffffff) << 4) + 0x1c);
        *param_5 = 0.0;
        param_1 = (double)(float)(param_1 - (double)(float)((double)fVar2 - dVar19));
        if (param_1 < 0.0) {
          param_1 = dVar18;
        }
      }
      else {
        param_1 = (double)(float)(param_1 - dVar19);
        *param_5 = *(float *)((int)param_2 + (int)(uVar17 << 4) + 0x1c);
      }
      if (((iVar13 == 1) && (iVar15 == *param_2 - 1)) || ((iVar13 == -1 && (iVar15 == 0)))) {
        uVar14 = 1;
      }
      *param_4 = (uint)uVar17;
      uVar16 = uVar17;
    }
    else {
      dVar20 = dVar19 - param_1;
      if (iVar13 == 1) {
        dVar20 = dVar19 + param_1;
      }
      *param_5 = (float)dVar20;
      param_1 = dVar18;
    }
  }
  iVar10 = (int)((uVar16 & 0xffffffff) << 4);
  fVar2 = *(float *)((int)param_2 + iVar10 + 0x10);
  *param_3 = fVar2;
  fVar3 = *(float *)((int)param_2 + iVar10 + 0x14);
  param_3[1] = fVar3;
  fVar4 = *(float *)((int)param_2 + iVar10 + 0x18);
  param_3[2] = fVar4;
  param_3[3] = *(float *)((int)param_2 + iVar10 + 0x1c);
  uVar5 = *param_2;
  if ((iVar15 == uVar5 - 1) && (param_7 == 0)) {
    if (iVar13 == -1) {
      *param_4 = 0;
      *param_3 = (float)param_2[4];
      param_3[1] = (float)param_2[5];
      param_3[2] = (float)param_2[6];
      param_3[3] = (float)param_2[7];
      *param_5 = 0.0;
    }
    uVar14 = 1;
  }
  else {
    lVar12 = uVar17 + 1;
    if ((int)uVar5 <= (int)lVar12) {
      lVar12 = lVar12 - (longlong)((int)lVar12 / (int)uVar5) * (longlong)(int)uVar5;
    }
    iVar13 = (int)(lVar12 << 4);
    iVar15 = (int)((uVar17 & 0xffffffff) << 4);
    fVar6 = *(float *)((int)param_2 + iVar13 + 0x14) - *(float *)((int)param_2 + iVar15 + 0x14);
    fVar7 = *(float *)((int)param_2 + iVar13 + 0x10) - *(float *)((int)param_2 + iVar15 + 0x10);
    fVar8 = *(float *)((int)param_2 + iVar13 + 0x18) - *(float *)((int)param_2 + iVar15 + 0x18);
    fVar9 = SQRT(fVar8 * fVar8 + fVar7 * fVar7 + fVar6 * fVar6);
    fVar11 = *param_5 / fVar9;
    dVar19 = dVar18;
    if (0.0 - fVar9 < 0.0) {
      dVar19 = (double)(fVar11 * fVar8);
    }
    dVar20 = dVar18;
    if (0.0 - fVar9 < 0.0) {
      dVar20 = (double)(fVar11 * fVar6);
    }
    if (0.0 - fVar9 < 0.0) {
      dVar18 = (double)(fVar11 * fVar7);
    }
    if (fVar9 - 0.0 < 0.0) {
      dVar19 = (double)(fVar11 * fVar8);
    }
    if (fVar9 - 0.0 < 0.0) {
      dVar20 = (double)(fVar11 * fVar6);
    }
    if (fVar9 - 0.0 < 0.0) {
      dVar18 = (double)(fVar11 * fVar7);
    }
    param_3[2] = (float)((double)fVar4 + dVar19);
    param_3[1] = (float)((double)fVar3 + dVar20);
    *param_3 = (float)((double)fVar2 + dVar18);
  }
  return uVar14;
}


// 0x010d140 (0x7c bytes)
double MB_DistIgnoreSmallZ
                 (double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  float fVar1;
  float fStack00000030;
  float fStack00000034;
  float fStack00000038;
  float fStack00000040;
  float fStack00000044;
  float fStack00000048;
  
  fStack00000034 = (float)param_2;
  fStack00000044 = (float)param_4;
  fStack00000030 = (float)((ulonglong)param_2 >> 0x20);
  fStack00000040 = (float)((ulonglong)param_4 >> 0x20);
  fStack00000038 = (float)((ulonglong)param_3 >> 0x20);
  fStack00000048 = (float)((ulonglong)param_5 >> 0x20);
  fVar1 = (fStack00000030 - fStack00000040) * (fStack00000030 - fStack00000040) +
          (fStack00000034 - fStack00000044) * (fStack00000034 - fStack00000044);
  if ((param_1 <= 0.0) || (param_1 <= ABS((double)(fStack00000038 - fStack00000048)))) {
    fVar1 = (fStack00000038 - fStack00000048) * (fStack00000038 - fStack00000048) + fVar1;
  }
  return (double)SQRT(fVar1);
}


// 0x010d1c8 (0x234 bytes)
// inlined: FastRSqrt @0x10d228
double MB_SegmentPushDist2D(float *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  int iVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  int iVar16;
  int iVar17;
  
  fVar1 = param_3[1];
  fVar2 = *param_3;
  fVar6 = fVar1 - param_4[1];
  fVar10 = fVar2 - *param_4;
  fVar3 = 0.0;
  fVar4 = *param_2;
  fVar5 = param_2[1];
  fVar11 = fVar10 * fVar10 + --(fVar6 * fVar6);
  fVar9 = fVar3;
  if (SQRT(fVar11) != 0.0) {
    fVar9 = 1.0 / SQRT(fVar11);
    fVar9 = -(fVar11 * fVar9 * fVar9 - 1.0) * fVar9 * 0.5 + fVar9;
    fVar9 = -(fVar11 * fVar9 * fVar9 - 1.0) * fVar9 * 0.5 + fVar9;
    fVar9 = -(fVar11 * fVar9 * fVar9 - 1.0) * fVar9 * 0.5 + fVar9;
    fVar3 = fVar10 * fVar9;
    fVar9 = -(fVar6 * fVar9);
  }
  fVar6 = param_2[1];
  iVar16 = 0;
  param_1[2] = 0.0;
  fVar1 = fVar3 * fVar5 + fVar9 * fVar4 + -(fVar9 * fVar2 + fVar3 * fVar1);
  fVar4 = -(fVar9 * fVar1 - fVar4);
  fVar3 = -(fVar3 * fVar1 - fVar6);
  *param_1 = fVar4;
  param_1[1] = fVar3;
  fVar1 = *param_3;
  fVar2 = *param_4;
  pfVar14 = param_3;
  pfVar13 = param_4;
  pfVar15 = param_1;
  do {
    uVar7 = (int)*pfVar15 >> 0x1f;
    uVar8 = (int)*pfVar14 >> 0x1f;
    iVar12 = (uVar7 >> 1 ^ (uint)*pfVar15) - uVar7;
    iVar17 = (uVar8 >> 1 ^ (uint)*pfVar14) - uVar8;
    if (((iVar17 < iVar12) &&
        (uVar7 = (int)*pfVar13 >> 0x1f, (int)((uVar7 >> 1 ^ (uint)*pfVar13) - uVar7) < iVar12)) ||
       ((iVar12 < iVar17 &&
        (uVar7 = (int)*pfVar13 >> 0x1f, iVar12 < (int)((uVar7 >> 1 ^ (uint)*pfVar13) - uVar7)))))
    break;
    iVar16 = iVar16 + 1;
    pfVar15 = pfVar15 + 1;
    pfVar14 = pfVar14 + 1;
    pfVar13 = pfVar13 + 1;
  } while (iVar16 < 2);
  if (iVar16 < 2) {
    if (SQRT((fVar4 - fVar2) * (fVar4 - fVar2) + (fVar3 - param_4[1]) * (fVar3 - param_4[1])) <=
        SQRT((fVar4 - fVar1) * (fVar4 - fVar1) + (fVar3 - param_3[1]) * (fVar3 - param_3[1]))) {
      *param_1 = fVar2;
      fVar3 = param_4[1];
      param_1[1] = fVar3;
      param_1[2] = param_4[2];
      fVar5 = param_4[3];
      fVar4 = fVar2;
    }
    else {
      *param_1 = fVar1;
      fVar3 = param_3[1];
      param_1[1] = fVar3;
      param_1[2] = param_3[2];
      fVar5 = param_3[3];
      fVar4 = fVar1;
    }
    param_1[3] = fVar5;
    param_1[2] = 0.0;
  }
  return (double)SQRT((*param_2 - fVar4) * (*param_2 - fVar4) +
                      (param_2[1] - fVar3) * (param_2[1] - fVar3));
}


// 0x010d408 (0x390 bytes)
// inlined: FastRSqrt @0x10d570
double MB_SegmentPush
                 (double param_1,float *param_2,float *param_3,float *param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  int iVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  int iVar16;
  int iVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  
  dVar18 = 0.0;
  if (((0.0 < param_1) && (ABS((double)(param_3[2] - param_4[2])) < param_1)) &&
     (ABS((double)(param_3[2] - param_5[2])) < param_1)) {
    dVar18 = (double)MB_SegmentPushDist2D(param_2,param_3,param_4,param_5);
    fVar1 = param_4[1];
    fVar2 = param_5[1];
    fVar10 = fVar1 - fVar2;
    fVar3 = *param_4;
    fVar11 = fVar3 - *param_5;
    fVar4 = param_4[2];
    fVar5 = param_4[3];
    fVar6 = param_5[2];
    fVar7 = param_5[3];
    fVar10 = SQRT((fVar3 - *param_2) * (fVar3 - *param_2) +
                  (fVar1 - param_2[1]) * (fVar1 - param_2[1])) /
             SQRT(fVar11 * fVar11 + fVar10 * fVar10);
    *param_2 = (*param_5 - fVar3) * fVar10 + fVar3;
    param_2[1] = (fVar2 - fVar1) * fVar10 + fVar1;
    param_2[2] = (fVar6 - fVar4) * fVar10 + fVar4;
    param_2[3] = (fVar7 - fVar5) * fVar10 + fVar5;
    return dVar18;
  }
  fVar4 = param_5[1] - param_4[1];
  fVar5 = *param_5 - *param_4;
  fVar7 = param_5[2] - param_4[2];
  fVar1 = *param_4;
  fVar2 = param_4[1];
  fVar3 = param_4[2];
  fVar6 = fVar7 * fVar7 + fVar5 * fVar5 + fVar4 * fVar4;
  dVar19 = dVar18;
  dVar20 = dVar18;
  if (SQRT(fVar6) != 0.0) {
    fVar10 = 1.0 / SQRT(fVar6);
    fVar10 = -(fVar6 * fVar10 * fVar10 - 1.0) * fVar10 * 0.5 + fVar10;
    fVar10 = -(fVar6 * fVar10 * fVar10 - 1.0) * fVar10 * 0.5 + fVar10;
    fVar10 = -(fVar6 * fVar10 * fVar10 - 1.0) * fVar10 * 0.5 + fVar10;
    dVar20 = (double)(fVar5 * fVar10);
    dVar19 = (double)(fVar4 * fVar10);
    dVar18 = (double)(fVar7 * fVar10);
  }
  fVar4 = param_3[1];
  fVar5 = *param_3;
  fVar6 = param_3[2];
  iVar16 = 0;
  param_2[3] = param_5[3];
  dVar21 = (double)(-(float)(dVar19 * (double)fVar2 +
                            (double)(float)(dVar18 * (double)fVar3 +
                                           (double)(float)(dVar20 * (double)fVar1 +
                                                          -(double)(float)((double)fVar6 * dVar18 +
                                                                          (double)(float)((double)
                                                  fVar5 * dVar20 +
                                                  (double)(float)((double)fVar4 * dVar19)))))) /
                   (float)(dVar18 * dVar18 +
                          (double)(float)(dVar20 * dVar20 + (double)(float)(dVar19 * dVar19))));
  fVar2 = (float)(dVar19 * dVar21 + (double)fVar2);
  fVar1 = (float)(dVar20 * dVar21 + (double)fVar1);
  fVar3 = (float)(dVar18 * dVar21 + (double)fVar3);
  param_2[1] = fVar2;
  *param_2 = fVar1;
  param_2[2] = fVar3;
  pfVar14 = param_4;
  pfVar13 = param_5;
  pfVar15 = param_2;
  do {
    uVar8 = (int)*pfVar15 >> 0x1f;
    uVar9 = (int)*pfVar14 >> 0x1f;
    iVar12 = (uVar8 >> 1 ^ (uint)*pfVar15) - uVar8;
    iVar17 = (uVar9 >> 1 ^ (uint)*pfVar14) - uVar9;
    if (((iVar17 < iVar12) &&
        (uVar8 = (int)*pfVar13 >> 0x1f, (int)((uVar8 >> 1 ^ (uint)*pfVar13) - uVar8) < iVar12)) ||
       ((iVar12 < iVar17 &&
        (uVar8 = (int)*pfVar13 >> 0x1f, iVar12 < (int)((uVar8 >> 1 ^ (uint)*pfVar13) - uVar8)))))
    break;
    iVar16 = iVar16 + 1;
    pfVar15 = pfVar15 + 1;
    pfVar14 = pfVar14 + 1;
    pfVar13 = pfVar13 + 1;
  } while (iVar16 < 3);
  if (iVar16 < 3) {
    fVar4 = fVar1 - *param_4;
    fVar1 = fVar1 - *param_5;
    if (SQRT((fVar3 - param_5[2]) * (fVar3 - param_5[2]) +
             fVar1 * fVar1 + (fVar2 - param_5[1]) * (fVar2 - param_5[1])) <=
        SQRT((fVar3 - param_4[2]) * (fVar3 - param_4[2]) +
             fVar4 * fVar4 + (fVar2 - param_4[1]) * (fVar2 - param_4[1]))) {
      *param_2 = *param_5;
      param_2[1] = param_5[1];
      param_2[2] = param_5[2];
      param_2[3] = param_5[3];
    }
    else {
      *param_2 = *param_4;
      param_2[1] = param_4[1];
      param_2[2] = param_4[2];
      param_2[3] = param_4[3];
    }
  }
  return (double)SQRT((param_3[2] - param_2[2]) * (param_3[2] - param_2[2]) +
                      (*param_3 - *param_2) * (*param_3 - *param_2) +
                      (param_3[1] - param_2[1]) * (param_3[1] - param_2[1]));
}


// 0x010d7a0 (0x4d0 bytes)
/* [p2_mobyutil] moves along path toward target using MB_PathMoveDist and 0x10d408 */

undefined8
MB_PathFollowToPos
          (double param_1,double param_2,double param_3,longlong param_4,float *param_5,
          float *param_6,int *param_7,float *param_8,undefined8 param_9,int param_10)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint *puVar5;
  float fVar6;
  int iVar7;
  undefined8 uVar8;
  int iVar11;
  ulonglong uVar9;
  longlong lVar10;
  uint uVar12;
  ulonglong uVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  GPiece<16> local_b0;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  GPiece<4> local_90;
  GPiece<4> local_8c;
  GPiece<4> local_88;
  GPiece<12> local_84;
  
  puVar5 = (uint *)param_4;
  fVar1 = (float)puVar5[4];
  dVar16 = 0.0;
  fVar2 = (float)puVar5[5];
  fVar3 = (float)puVar5[6];
  fVar6 = fVar2 - param_5[1];
  fVar4 = fVar1 - *param_5;
  fVar4 = fVar4 * fVar4 + fVar6 * fVar6;
  if ((param_3 <= 0.0) || (param_3 <= ABS((double)(fVar3 - param_5[2])))) {
    fVar6 = fVar3 - param_5[2];
    fVar4 = fVar6 * fVar6 + fVar4;
  }
  dVar15 = (double)SQRT(fVar4);
  if (*puVar5 == 0) {
    uVar8 = 0;
    param_6[3] = 0.0;
    param_6[2] = 0.0;
    param_6[1] = 0.0;
    *param_6 = 0.0;
  }
  else {
    do {
      iVar11 = MB_PathMoveDist(param_2,param_4,local_b0,local_90,local_8c);
      fVar4 = fVar2 - param_5[1];
      fVar6 = fVar1 - *param_5;
      fVar4 = fVar6 * fVar6 + fVar4 * fVar4;
      if ((param_3 <= dVar16) || (param_3 <= ABS((double)(fVar3 - param_5[2])))) {
        fVar6 = fVar3 - param_5[2];
        fVar4 = fVar6 * fVar6 + fVar4;
      }
      if ((double)SQRT(fVar4) < dVar15) {
        dVar15 = (double)SQRT(fVar4);
      }
      uVar9 = 0;
    } while (iVar11 == 0);
    if (dVar15 <= (double)(float)(param_1 + param_2)) {
      MB_PathMoveDist(-param_2,param_4,local_b0,local_88,local_8c);
      MB_PathMoveDist(param_2,param_4,local_b0,local_84,local_8c);
      if (param_10 == 0) {
        uVar12 = *puVar5;
        iVar11 = ((uint)((longlong)(int)(uVar12 - 1) + -1 >> 0x3f) & uVar12 - 2) + 1;
      }
      else {
        uVar12 = *puVar5;
        iVar11 = (uVar12 + 1) - ((int)(uVar12 + 1) / (int)uVar12) * uVar12;
      }
      dVar14 = 1000000000.0;
      uVar13 = uVar9;
      dVar15 = dVar14;
      while( true ) {
        iVar7 = (int)((uVar9 & 0xffffffff) << 4);
        fVar2 = *(float *)((int)puVar5 + iVar7 + 0x14) - param_5[1];
        fVar3 = *(float *)((int)puVar5 + iVar7 + 0x10) - *param_5;
        fVar1 = *(float *)((int)puVar5 + iVar7 + 0x18);
        fVar2 = fVar3 * fVar3 + fVar2 * fVar2;
        if ((param_3 <= dVar16) || (param_3 <= ABS((double)(fVar1 - param_5[2])))) {
          fVar1 = fVar1 - param_5[2];
          fVar2 = fVar1 * fVar1 + fVar2;
        }
        if ((double)SQRT(fVar2) < dVar15) {
          uVar13 = uVar9;
          dVar15 = (double)SQRT(fVar2);
        }
        if ((int)uVar9 == iVar11) break;
        uVar9 = (uVar9 + 1) - (longlong)((int)(uVar9 + 1) / (int)uVar12) * (longlong)(int)uVar12;
      }
      iVar11 = (int)uVar13;
      if ((0 < iVar11) || (param_10 != 0)) {
        lVar10 = uVar13 + uVar12 + -1;
        uVar9 = lVar10 - (longlong)((int)lVar10 / (int)uVar12) * (longlong)(int)uVar12;
        dVar14 = (double)MB_SegmentPush(param_3,param_6,param_5,
                                        param_4 + uVar9 * 0x10 + 0x10 & 0xffffffff,
                                        param_4 + uVar13 * 0x10 + 0x10 & 0xffffffff);
        iVar7 = (int)((uVar9 & 0xffffffff) << 4);
        *param_7 = (int)uVar9;
        fVar1 = *(float *)((int)puVar5 + iVar7 + 0x14) - param_6[1];
        fVar2 = *(float *)((int)puVar5 + iVar7 + 0x10) - *param_6;
        fVar3 = *(float *)((int)puVar5 + iVar7 + 0x18) - param_6[2];
        *param_8 = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
        uVar12 = *puVar5;
      }
      if (((iVar11 < (int)(uVar12 - 1)) || (param_10 != 0)) &&
         (dVar16 = (double)MB_SegmentPush(param_3,&local_a0,param_5,
                                          param_4 + uVar13 * 0x10 + 0x10 & 0xffffffff,
                                          param_4 + ((uVar13 + 1) -
                                                    (longlong)((int)(uVar13 + 1) / (int)uVar12) *
                                                    (longlong)(int)uVar12) * 0x10 + 0x10 &
                                          0xffffffff), dVar16 < dVar14)) {
        iVar7 = (int)((uVar13 & 0xffffffff) << 4);
        *param_6 = local_a0;
        param_6[1] = local_9c;
        param_6[2] = local_98;
        param_6[3] = local_94;
        *param_7 = iVar11;
        fVar2 = *(float *)((int)puVar5 + iVar7 + 0x10) - *param_6;
        fVar1 = *(float *)((int)puVar5 + iVar7 + 0x14) - param_6[1];
        fVar3 = *(float *)((int)puVar5 + iVar7 + 0x18) - param_6[2];
        *param_8 = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
      }
      uVar8 = 1;
    }
    else {
      uVar8 = 0;
    }
  }
  return uVar8;
}


// 0x010dc70 (0x1f8 bytes)
// strings: 00652f60: 'MB_CheckCollPill: No collision data for this moby... aborting\n' | 00652fa0: 'MB_CheckCollPill - Strange collision type %d\n'

undefined8
MB_CheckCollPill
          (MobyInstance *param_1,undefined8 param_2,undefined8 param_3,float *param_4)

{
  undefined8 uVar1;
  float local_50;
  float local_4c;
  float local_48;
  GPiece<16> local_40;
  float local_30;
  float local_2c;
  int local_28 [2];
  
  if (param_1->collision == (ushort *)0x0) {
    printf("MB_CheckCollPill: No collision data for this moby... aborting\n");
  }
  MB_GetCollPrimWorld(param_1,param_3,local_28,&local_50,&local_30,&local_2c);
  if (param_4 != (float *)0x0) {
    local_50 = *param_4 + (local_50 - (param_1->pos).x);
    local_4c = param_4[1] + (local_4c - (param_1->pos).y);
    local_48 = param_4[2] + (local_48 - (param_1->pos).z);
  }
  if (local_28[0] < 3) {
    if (local_28[0] < 0) {
LAB_0010ddb8:
      printf("MB_CheckCollPill - Strange collision type %d\n",local_28[0]);
      return 0;
    }
    uVar1 = CollSphere((double)local_30,local_40);
  }
  else {
    if (4 < local_28[0]) goto LAB_0010ddb8;
    uVar1 = CollPill((double)local_30,(double)local_2c,local_40);
  }
  if ((int)uVar1 != 0) {
    g_CollOutput.push.x = g_CollOutput.push.x + ((param_1->pos).x - local_50);
    g_CollOutput.push.y = g_CollOutput.push.y + ((param_1->pos).y - local_4c);
    g_CollOutput.push.z = g_CollOutput.push.z + ((param_1->pos).z - local_48);
  }
  return uVar1;
}


// 0x010de78 (0x58 bytes)
float MB_WrapRot(float ang)

{
  double dVar1;
  double dVar2;
  GPiece<16> auStack_20;
  
  dVar2 = 3.1415927410125732;
  dVar1 = (double)FastFrac((double)((ang + 3.1415927) * 0.15915494),0x110000,auStack_20);
  return (float)(dVar1 * 6.2831854820251465 - dVar2);
}


// 0x010ded0 (0x68 bytes)
ulonglong ____MB_IsInvalidOrClass502(MobyInstance *param_1)

{
  MOBY_OCLASSES MVar1;
  ulonglong uVar2;
  
  if (param_1 == (MobyInstance *)0x0) {
    uVar2 = 0;
  }
  else if ((((param_1 == (MobyInstance *)0x0) || (param_1 < g_MobyInstance)) ||
           (MobyInstanceEnd < param_1)) ||
          (MVar1 = param_1->oClass, 0x21c < (short)MVar1 || (short)MVar1 < 500)) {
    uVar2 = 1;
  }
  else {
    uVar2 = (ulonglong)(LZCOUNT(MVar1 - 0x1f6) << 0x20) >> 0x25;
  }
  return uVar2;
}


// 0x010df38 (0x54 bytes)
bool MB_isAmmo(MobyInstance *moby)

{
  bool bVar1;
  MOBY_OCLASSES oClass;
  
  oClass = moby->oClass;
  bVar1 = false;
  if ((((oClass == DEVESTATOR_AMMO || oClass == BOMB_GLOVE_AMMO) || (oClass == VISIBOMB_AMMO)) ||
      (oClass == BLASTER_AMMO)) ||
     (((oClass == PYROCITOR_AMMO || (oClass == MINE_GLOVE_AMMO)) ||
      ((oClass == TESLA_CLAW_AMMO || (oClass == GLOVE_OF_DOOM_AMMO)))))) {
    bVar1 = true;
  }
  return bVar1;
}


// 0x010e030 (0x1abc bytes)
/* WARNING: Heritage AFTER dead removal. Example location: r0x0071f414 : 0x0010e50c */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

void MB_genericExplosion
               (double param_1,undefined8 param_2,double param_3,double param_4,double param_5,
               double param_6,double param_7,longlong param_8,undefined8 param_9,longlong param_10,
               undefined8 param_11,undefined8 param_12,int param_13,longlong param_14,
               undefined8 param_15)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  int iVar13;
  int iVar14;
  uint uVar15;
  ulonglong uVar12;
  int iVar16;
  ulonglong uVar17;
  int iVar18;
  longlong lVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  longlong lVar22;
  ulonglong uVar23;
  MobyInstance *pMoby;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  undefined8 uVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  GPiece<16> auVar37;
  GPiece<16> auVar38;
  GPiece<16> auVar39;
  uint in_stack_00000094;
  uint in_stack_000000a4;
  int in_stack_000000ac;
  uint in_stack_000000b4;
  uint in_stack_000000bc;
  GPiece<16> local_280;
  float afStack_270 [4];
  GPiece<16> local_260;
  float afStack_250 [4];
  GPiece<16> local_240;
  GPiece<16> local_230;
  GPiece<16> local_220;
  GPiece<48> local_210;
  uint local_1e0 [24];
  double local_180;
  ulonglong local_178;
  ulonglong local_170;
  undefined8 local_168;
  longlong local_160;
  ulonglong local_158;
  ulonglong local_150;
  ulonglong local_148;
  ulonglong local_140;
  ulonglong local_138;
  longlong local_130;
  
  dVar35 = 0.0;
  dVar34 = 8.0;
  uVar23 = (ulonglong)in_stack_000000b4;
  local_148 = (ulonglong)in_stack_00000094;
  uVar12 = (ulonglong)in_stack_000000bc & 0xff;
  local_140 = (ulonglong)in_stack_000000a4;
  if (in_stack_000000b4 == 0xffffffff) {
    uVar23 = (ulonglong)(1.7 < g_PerfLoad + g_FrameLoad);
  }
  if ((int)param_10 == 0) {
    if ((int)param_8 == 0) {
      return;
    }
    param_10 = param_8 + 0x10;
  }
  local_180 = param_5;
  local_168 = param_15;
  local_160 = param_8;
  if (0.0 < param_1) {
    CollMobySphere(param_10,*(undefined2 *)((int)param_8 + 0xa6),0x10,param_8,local_210);
  }
  local_178 = uVar12;
  local_170 = (ulonglong)in_stack_000000bc;
  if (0 < param_13) {
    local_138 = ZEXT48(&DAT_00720000);
    uVar15 = in_stack_000000bc & 1;
    dVar36 = 0.2617993950843811;
    dVar32 = 7.0;
    dVar30 = 120.5;
    dVar29 = 3.462109452812001e-05;
    dVar28 = 0.0015339808305725455;
    uVar7 = in_stack_000000bc & 2;
    dVar27 = 0.0001068115234375;
    uVar10 = (ZERO_MASK(uVar15) & 0xffffffffffffff80U) + 0xff;
    in_stack_000000bc = in_stack_000000bc & 4;
    lVar22 = uVar10 + (ZERO_MASK(uVar7) & -uVar10);
    uVar21 = ZERO_MASK(uVar15) & 0x7f;
    lVar19 = (ZERO_MASK(uVar15) & 0x80U) + 0x7f;
    dVar31 = (double)(float)(param_6 * 40000.0);
    uVar17 = (ZERO_MASK(uVar15) & 0xffffffffffffff81U) + 0x7f;
    lVar11 = uVar17 + (ZERO_MASK(uVar7) & -uVar17);
    uVar20 = (lVar19 + (ZERO_MASK(in_stack_000000bc) & lVar22 - lVar19) & 0xffU) <<
             0x10 | (ZERO_MASK(uVar7) & uVar10 & 0xff) << 8 |
                    lVar22 + (ZERO_MASK(in_stack_000000bc) & lVar19 - lVar22) &
                    0xffffffffff0000ffU | 0x4f000000;
    uVar10 = (uVar21 + (ZERO_MASK(in_stack_000000bc) & lVar11 - uVar21) & 0x7f) <<
             0x10 | (ZERO_MASK(uVar7) & uVar17 & 0x7f) << 8 |
                    lVar11 + (ZERO_MASK(in_stack_000000bc) & uVar21 - lVar11) &
                    0xffffffffff8080ff | 0x1f000000;
    iVar14 = 0;
    do {
      iVar13 = rand();
      local_130 = (longlong)(int)(iVar13 >> 0xf & 0x7fff);
      dVar25 = (double)(float)((double)local_130 * dVar29 + dVar36);
      iVar13 = rand();
      local_130 = (longlong)(int)((iVar13 >> 0xf & 0xfffU) - 0x800);
      dVar24 = (double)(float)((double)local_130 * dVar28);
      iVar13 = rand();
      local_130 = (longlong)(int)(iVar13 >> 0xf & 0x7fff);
      MB_SphericalToVector
                ((float)((double)((float)((double)local_130 * dVar27 + dVar32) * g_FrameTime) *
                        param_6),(float)dVar24,(float)dVar25,afStack_270);
      local_130 = (longlong)(int)((double)animationSpeed * dVar30);
      rand();
      SpawnPart_15
                (dVar31,param_10,afStack_270,
                 uVar20 + (ZERO_MASK((int)uVar12) & 0x4f007fff - uVar20),
                 uVar10 + (ZERO_MASK((int)uVar12) & 0x1f00007f - uVar10));
      iVar14 = iVar14 + 1;
    } while (iVar14 < param_13);
  }
  pfVar4 = (float *)param_10;
  local_158 = ZEXT48(&GameCamera);
  dVar27 = (double)SQRT((GameCamera.posZ - pfVar4[2]) * (GameCamera.posZ - pfVar4[2]) +
                        (GameCamera.posX - *pfVar4) * (GameCamera.posX - *pfVar4) +
                        (GameCamera.posY - pfVar4[1]) * (GameCamera.posY - pfVar4[1]));
  if (in_stack_000000ac != 0) {
    iVar14 = rand();
    local_130 = (longlong)(int)(iVar14 >> 0xf & 0x7fff);
    iVar14 = rand();
    local_130 = (longlong)(int)(iVar14 >> 0xf & 0x7fff);
    iVar14 = rand();
    local_130 = (longlong)(int)(iVar14 >> 0xf & 0x7fff);
    if (dVar27 < 14.0) {
      fVar5 = animationSpeed * 60.5;
      fVar6 = animationSpeed * 90.5;
      local_130 = (longlong)(int)fVar6;
      iVar14 = rand();
      iVar13 = (int)fVar6 - (int)fVar5;
      uVar15 = iVar14 >> 0xf & 0x7fff;
      iVar14 = (int)uVar15 / (iVar13 + 1);
      FUN_0020bb70(param_10,local_260,(uVar15 - (iVar14 * iVar13 + iVar14)) + (int)fVar5,0,0);
    }
    in_stack_000000ac = in_stack_000000ac + -1;
    iVar14 = 0;
    uVar15 = (uint)(10 - (longlong)numSpawnableMobys >> 0x3f) &
             in_stack_000000ac +
             ((uint)((longlong)(numSpawnableMobys + -10) - (longlong)in_stack_000000ac >> 0x3f) &
             (numSpawnableMobys + -10) - in_stack_000000ac);
    if (0 < (int)uVar15) {
      dVar24 = 0.2617993950843811;
      dVar36 = 7.0;
      dVar32 = 60.5;
      dVar31 = 90.5;
      dVar30 = 3.1957933970261365e-05;
      dVar29 = 0.0015339808305725455;
      dVar28 = 0.0001068115234375;
      do {
        iVar13 = rand();
        local_130 = (longlong)(int)(iVar13 >> 0xf & 0x7fff);
        dVar26 = (double)(float)((double)local_130 * dVar30 + dVar24);
        iVar13 = rand();
        local_130 = (longlong)(int)((iVar13 >> 0xf & 0xfffU) - 0x800);
        dVar25 = (double)(float)((double)local_130 * dVar29);
        iVar13 = rand();
        local_130 = (longlong)(int)(iVar13 >> 0xf & 0x7fff);
        MB_SphericalToVector
                  ((float)((double)((float)((double)local_130 * dVar28 + dVar36) * g_FrameTime) *
                          param_6),(float)dVar25,(float)dVar26,afStack_250);
        iVar16 = (int)((double)animationSpeed * dVar32);
        iVar18 = (int)((double)animationSpeed * dVar31);
        local_130 = (longlong)iVar18;
        iVar13 = rand();
        iVar18 = iVar18 - iVar16;
        uVar7 = iVar13 >> 0xf & 0x7fff;
        iVar13 = (int)uVar7 / (iVar18 + 1);
        FUN_0020bb70(param_10,afStack_250,(uVar7 - (iVar13 * iVar18 + iVar13)) + iVar16,
                     ZERO_MASK((iVar14 % 3)) & 1,0);
        iVar14 = iVar14 + 1;
      } while (iVar14 < (int)uVar15);
    }
  }
  dVar28 = (double)FastIntToDouble(param_14);
  if (dVar27 < (double)(float)(dVar28 * 2.0)) {
    uVar15 = FastDoubleToInt(dVar27);
    param_14 = (longlong)((int)uVar15 >> 1) + (ulonglong)((int)uVar15 < 0 && (uVar15 & 1) != 0);
  }
  iVar14 = 0;
  dVar28 = dVar35;
  if (dVar27 - 7.0 < 0.0) {
    dVar28 = (double)(float)(7.0 - dVar27);
  }
  local_150 = uVar23;
  if (0 < (int)param_14) {
    uVar8 = (uint)local_170;
    uVar7 = uVar8 & 1;
    uVar15 = uVar8 & 2;
    uVar8 = uVar8 & 4;
    dVar24 = (double)(float)(param_6 * 400000.0);
    dVar36 = 20.5;
    dVar32 = 45.5;
    dVar31 = 10.5;
    dVar29 = (double)(float)(param_6 * 0.5);
    dVar30 = 6.103515625e-05;
    do {
      iVar13 = rand();
      local_130 = (longlong)(int)(iVar13 >> 0xf & 0x7fff);
      local_1e0[0] = 0x4f008fff;
      local_1e0[1] = 0x4f008fff;
      local_1e0[2] = 0x4f007fff;
      local_1e0[3] = 0x4f006fff;
      local_1e0[4] = 0x2fffffff;
      local_1e0[5] = 0x2fffffff;
      local_1e0[6] = 0x2f005f7f;
      local_1e0[7] = 0x2f004f7f;
      local_1e0[8] = 0x2f003f7f;
      local_1e0[9] = 0x2f00004f;
      local_1e0[10] = 0x2f000000;
      local_1e0[0xb] = 0x3f000000;
      dVar25 = (double)(float)((double)(float)((double)local_130 * dVar30 + dVar34) *
                               (double)g_FrameTime - (double)(float)((double)g_FrameTime * dVar28));
      iVar13 = rand();
      uVar12 = (ulonglong)(uint)(iVar13 >> 0xf) & 0x7fff;
      uVar1 = local_1e0[(int)(uVar12 + (((uVar12 + 1) * 0x5555 << 0x20) >> 0x31) * -6)];
      uVar12 = (ulonglong)uVar1;
      uVar2 = uVar1 & 0xff;
      uVar23 = (ulonglong)(uVar1 >> 8) & 0xff;
      uVar10 = (ulonglong)(uVar1 >> 0x10) & 0xff;
      iVar18 = (int)uVar23;
      iVar16 = uVar2 + ((uint)(ZERO_MASK(uVar7)) & iVar18 - uVar2);
      iVar16 = iVar16 + ((uint)(ZERO_MASK(uVar15)) & (int)uVar10 - iVar16);
      lVar19 = uVar12 + (ZERO_MASK(uVar7) & uVar23 - uVar12);
      lVar11 = uVar23 + (ZERO_MASK(uVar7) & uVar12 - uVar23);
      iVar13 = (int)local_178;
      lVar19 = (longlong)
               (int)((uint)((lVar11 + (ZERO_MASK(uVar8) &
                                      (lVar19 + (ZERO_MASK(uVar15) &
                                                uVar10 - lVar19)) - lVar11) & 0xffffffff) << 0x10) &
                     0xff0000 |
                    (uint)((uVar10 + (ZERO_MASK(uVar15) & lVar19 - uVar10) &
                           0xffffffff) << 8) & 0xff00 |
                    iVar16 + ((uint)(ZERO_MASK(uVar8)) &
                             (iVar18 + ((uint)(ZERO_MASK(uVar7)) & uVar2 - iVar18))
                             - iVar16) & 0xff0000ff | uVar1 & 0xff000000);
      iVar16 = rand();
      uVar12 = (ulonglong)(uint)(iVar16 >> 0xf) & 0x7fff;
      uVar2 = local_1e0[(int)(uVar12 + (((uVar12 + 1) * 0x5555 << 0x20) >> 0x31) * -6) + 6];
      uVar12 = (ulonglong)uVar2;
      uVar9 = uVar2 & 0xff;
      uVar23 = (ulonglong)(uVar2 >> 8) & 0xff;
      iVar18 = (int)uVar23;
      iVar16 = uVar9 + ((uint)(ZERO_MASK(uVar7)) & iVar18 - uVar9);
      uVar10 = (ulonglong)(uVar2 >> 0x10) & 0xff;
      iVar16 = iVar16 + ((uint)(ZERO_MASK(uVar15)) & (int)uVar10 - iVar16);
      local_130 = (longlong)(int)((double)animationSpeed * dVar36);
      lVar22 = uVar12 + (ZERO_MASK(uVar7) & uVar23 - uVar12);
      lVar11 = uVar23 + (ZERO_MASK(uVar7) & uVar12 - uVar23);
      lVar11 = (longlong)
               (int)((uint)((lVar11 + (ZERO_MASK(uVar8) &
                                      (lVar22 + (ZERO_MASK(uVar15) &
                                                uVar10 - lVar22)) - lVar11) & 0xffffffff) << 0x10) &
                     0xff0000 |
                    (uint)((uVar10 + (ZERO_MASK(uVar15) & lVar22 - uVar10) &
                           0xffffffff) << 8) & 0xff00 |
                    iVar16 + ((uint)(ZERO_MASK(uVar8)) &
                             (iVar18 + ((uint)(ZERO_MASK(uVar7)) & uVar9 - iVar18))
                             - iVar16) & 0xff0000ff | uVar2 & 0xff000000);
      rand();
      local_130 = (longlong)(int)((double)animationSpeed * dVar32);
      rand();
      SpawnPart_11
                (dVar24,(double)(float)(dVar25 * param_6),param_10,local_280,
                 lVar19 + (ZERO_MASK(iVar13) & (int)uVar1 - lVar19),
                 lVar11 + (ZERO_MASK(iVar13) & (int)uVar2 - lVar11));
      local_130 = (longlong)(int)((double)animationSpeed * dVar31);
      rand();
      local_130 = (longlong)(int)((double)animationSpeed * dVar36);
      rand();
      SpawnPart_11
                (dVar24,(double)(float)(dVar25 * dVar29),param_10,local_280,0x7fffffff,0xffffff);
      iVar14 = iVar14 + 1;
    } while (iVar14 < (int)param_14);
  }
  uVar12 = local_178;
  iVar13 = 0;
  iVar14 = (int)local_168;
  if (0 < iVar14) {
    uVar8 = (uint)local_170;
    uVar15 = uVar8 & 1;
    uVar7 = uVar8 & 2;
    uVar8 = uVar8 & 4;
    uVar33 = 0x41086a0000000000;
    dVar34 = 45.5;
    do {
      local_1e0[0xc] = 0x4f008fff;
      local_1e0[0xd] = 0x4f008fff;
      local_1e0[0x10] = 0x2fffffff;
      local_1e0[0x11] = 0x2fffffff;
      local_1e0[0xe] = 0x4f007fff;
      local_1e0[0xf] = 0x4f006fff;
      local_1e0[0x12] = 0x2f005f7f;
      local_1e0[0x13] = 0x2f004f7f;
      local_1e0[0x16] = 0x2f000000;
      local_1e0[0x14] = 0x2f003f7f;
      local_1e0[0x15] = 0x2f00004f;
      local_1e0[0x17] = 0x3f000000;
      iVar16 = rand();
      local_130 = (longlong)(int)(iVar16 >> 0xf & 0x7fff);
      iVar16 = rand();
      local_130 = (longlong)(int)(iVar16 >> 0xf & 0x7fff);
      iVar16 = rand();
      local_130 = (longlong)(int)(iVar16 >> 0xf & 0x7fff);
      iVar16 = rand();
      local_130 = (longlong)(int)(iVar16 >> 0xf & 0x7fff);
      iVar16 = rand();
      uVar23 = (ulonglong)(uint)(iVar16 >> 0xf) & 0x7fff;
      uVar1 = local_1e0[(int)(uVar23 + (((uVar23 + 1) * 0x5555 << 0x20) >> 0x31) * -6) + 0xc];
      uVar23 = (ulonglong)uVar1;
      uVar2 = uVar1 & 0xff;
      uVar10 = (ulonglong)(uVar1 >> 8) & 0xff;
      uVar17 = (ulonglong)(uVar1 >> 0x10) & 0xff;
      iVar18 = (int)uVar10;
      iVar16 = uVar2 + ((uint)(ZERO_MASK(uVar15)) & iVar18 - uVar2);
      iVar16 = iVar16 + ((uint)(ZERO_MASK(uVar7)) & (int)uVar17 - iVar16);
      lVar19 = uVar23 + (ZERO_MASK(uVar15) & uVar10 - uVar23);
      lVar11 = uVar10 + (ZERO_MASK(uVar15) & uVar23 - uVar10);
      lVar19 = (longlong)
               (int)((uint)((lVar11 + (ZERO_MASK(uVar8) &
                                      (lVar19 + (ZERO_MASK(uVar7) & uVar17 - lVar19
                                                )) - lVar11) & 0xffffffff) << 0x10) & 0xff0000 |
                    (uint)((uVar17 + (ZERO_MASK(uVar7) & lVar19 - uVar17) &
                           0xffffffff) << 8) & 0xff00 |
                    iVar16 + ((uint)(ZERO_MASK(uVar8)) &
                             (iVar18 + ((uint)(ZERO_MASK(uVar15)) & uVar2 - iVar18)
                             ) - iVar16) & 0xff0000ff | uVar1 & 0xff000000);
      iVar16 = rand();
      uVar23 = (ulonglong)(uint)(iVar16 >> 0xf) & 0x7fff;
      uVar2 = local_1e0[(int)(uVar23 + (((uVar23 + 1) * 0x5555 << 0x20) >> 0x31) * -6) + 0x12];
      uVar23 = (ulonglong)uVar2;
      uVar9 = uVar2 & 0xff;
      uVar10 = (ulonglong)(uVar2 >> 8) & 0xff;
      iVar18 = (int)uVar10;
      iVar16 = uVar9 + ((uint)(ZERO_MASK(uVar15)) & iVar18 - uVar9);
      uVar17 = (ulonglong)(uVar2 >> 0x10) & 0xff;
      iVar16 = iVar16 + ((uint)(ZERO_MASK(uVar7)) & (int)uVar17 - iVar16);
      local_130 = (longlong)(int)((double)animationSpeed * dVar34);
      lVar22 = uVar23 + (ZERO_MASK(uVar15) & uVar10 - uVar23);
      lVar11 = uVar10 + (ZERO_MASK(uVar15) & uVar23 - uVar10);
      lVar11 = (longlong)
               (int)((uint)((lVar11 + (ZERO_MASK(uVar8) &
                                      (lVar22 + (ZERO_MASK(uVar7) & uVar17 - lVar22
                                                )) - lVar11) & 0xffffffff) << 0x10) & 0xff0000 |
                    (uint)((uVar17 + (ZERO_MASK(uVar7) & lVar22 - uVar17) &
                           0xffffffff) << 8) & 0xff00 |
                    iVar16 + ((uint)(ZERO_MASK(uVar8)) &
                             (iVar18 + ((uint)(ZERO_MASK(uVar15)) & uVar9 - iVar18)
                             ) - iVar16) & 0xff0000ff | uVar2 & 0xff000000);
      rand();
      SpawnPart_8
                (uVar33,param_10,local_240,
                 lVar19 + (ZERO_MASK((int)uVar12) & (int)uVar1 - lVar19),
                 lVar11 + (ZERO_MASK((int)uVar12) & (int)uVar2 - lVar11));
      iVar13 = iVar13 + 1;
    } while (iVar13 < iVar14);
  }
  lVar11 = local_160;
  pMoby = (MobyInstance *)local_160;
  if ((pMoby != (MobyInstance *)0x0) && (dVar35 < param_3)) {
    iVar14 = (int)local_178;
    uVar12 = ZERO_MASK(iVar14) & 0x50;
    if (((int)(FLOAT_ORDER(g_FrameLoad)) < 0x3f733333) && (local_180 < dVar27)) {
      local_130 = (longlong)(int)(animationSpeed * 16.5);
      FUN_001d4d88(param_3,local_160,param_10,local_280,uVar12,(int)(animationSpeed * 16.5),
                   uVar12 + 0x46,0x96);
      local_130 = (longlong)(int)(animationSpeed * 22.5);
      FUN_001d4d88(param_3,lVar11,param_10,local_280);
    }
    local_130 = (longlong)(int)(animationSpeed * 30.5);
    FUN_001d4d88(param_3,lVar11,param_10,local_280,0x30,(int)(animationSpeed * 30.5),
                 (ZERO_MASK(iVar14) & 0x43U) + 0x3c,0x7f,0);
  }
  if ((pMoby != (MobyInstance *)0x0) && (dVar35 < param_4)) {
    local_130 = (longlong)(int)(animationSpeed * 27.5);
    FUN_001d4d88(param_4,lVar11,param_10,local_280,0x20,(int)(animationSpeed * 27.5),0xff,0xff,0xff)
    ;
  }
  if (((int)local_140 != 0) &&
     (iVar14 = FastCheckBsphereInView(0x4024000000000000,local_230), iVar14 != -1)) {
    auVar37 = ZEXT416(0xffffffff);
    auVar37 = auVar37 | auVar37 << 0x20 | auVar37 << 0x40 | auVar37 << 0x60;
    auVar37 = vectorShiftLeftIntegerWord(auVar37,auVar37);
    auVar38 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    fVar5 = 0.35;
    if (dVar27 - 20.0 < 0.0) {
      fVar5 = (float)(dVar27 * 0.017500000074505806);
    }
    *(float *)((int)local_158 + 0x160) = 0.4 - fVar5;
    auVar39 = loadVectorLeftIndexed(0x98,0x10df8c);
    auVar39 = auVar39 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar37 = vectorMultiplyAddFloatingPoint
                        (auVar38,auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60,
                         auVar37);
    auVar37 = vectorConvertToSignedFixedPointWordSaturate(auVar37,0);
    auVar37 = auVar37 >> 0x60 & (GPiece<16>)0xffffffff;
    uVar3 = storeVectorElementWordIndexed
                      (auVar37 | auVar37 << 0x20 | auVar37 << 0x40 | auVar37 << 0x60,0x168,local_158
                      );
    *(undefined4 *)((int)local_158 + 0x168U & 0xfffffffc) = uVar3;
  }
  if ((pMoby != (MobyInstance *)0x0) && ((int)local_148 != -1)) {
    PlayMobySound((int)local_148,0,pMoby);
  }
  if (((int)local_150 == 0 && param_7 != dVar35) &&
     (iVar14 = FastCheckBsphereInView(0x4059000000000000,local_220), iVar14 != -1)) {
    dVar34 = 15.0;
    if (dVar35 - param_7 < 0.0) {
      dVar34 = param_7;
    }
    DAT_007292b8 = (float)dVar34;
    DAT_007292b4 = (float)dVar34;
    DAT_007292b0 = (float)dVar34;
    if ((int)local_178 == 0) {
      FUN_003fda38(&DAT_00729290,param_10,0,0);
    }
    else {
      FUN_003fda38(&DAT_007292e0,param_10,0,0);
    }
  }
  return;
}


// 0x010fb28 (0x4e4 bytes)
undefined4 *
MB_SpawnExplosionSparks
          (double param_1,double param_2,MobyInstance *param_3,undefined4 param_4,undefined8 param_5
          ,int param_6)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  GPiece<16> auVar15;
  GPiece<16> auVar16;
  GPiece<16> auVar17;
  GPiece<16> local_110;
  GPiece<16> local_100;
  undefined4 local_f0 [12];
  longlong local_c0;
  
  iVar7 = 0;
  dVar9 = 0.0;
  dVar10 = 8.0;
  dVar11 = (double)(float)(param_1 * 400000.0);
  dVar12 = 20.5;
  dVar13 = 30.5;
  dVar14 = 6.103515625e-05;
  do {
    iVar5 = rand();
    local_c0 = (longlong)(int)(iVar5 >> 0xf & 0x7fff);
    local_f0[0] = 0x4f008fff;
    local_f0[1] = 0x4f008fff;
    local_f0[3] = 0x4f006fff;
    local_f0[4] = 0x2fffffff;
    local_f0[2] = 0x4f007fff;
    local_f0[5] = 0x2fffffff;
    local_f0[6] = 0x2f005f7f;
    local_f0[7] = 0x2f004f7f;
    local_f0[8] = 0x2f003f7f;
    local_f0[9] = 0x2f00004f;
    local_f0[10] = 0x2f000000;
    local_f0[0xb] = 0x3f000000;
    dVar8 = (double)((float)((double)local_c0 * dVar14 + dVar10) * g_FrameTime);
    iVar5 = rand();
    uVar4 = (ulonglong)(uint)(iVar5 >> 0xf) & 0x7fff;
    uVar2 = local_f0[(int)(uVar4 + (((uVar4 + 1) * 0x5555 << 0x20) >> 0x31) * -6)];
    iVar5 = rand();
    uVar4 = (ulonglong)(uint)(iVar5 >> 0xf) & 0x7fff;
    local_c0 = (longlong)(int)((double)animationSpeed * dVar12);
    uVar3 = local_f0[(int)(uVar4 + (((uVar4 + 1) * 0x5555 << 0x20) >> 0x31) * -6) + 6];
    rand();
    local_c0 = (longlong)(int)((double)animationSpeed * dVar13);
    rand();
    SpawnPart_11(dVar11,(double)(float)(dVar8 * param_1),param_4,local_110,uVar2,uVar3);
    iVar7 = iVar7 + 1;
  } while (iVar7 < 3);
  if (param_3 != (MobyInstance *)0x0) {
    local_c0 = (longlong)(int)((double)animationSpeed * dVar12);
    FUN_001d4d88((double)(float)(param_1 * 4.0),param_3,param_4,local_110,0x30,
                 (int)((double)animationSpeed * dVar12),0x7f,0x40,0);
    local_c0 = (longlong)(int)(animationSpeed * 29.5);
    FUN_001d4d88((double)(float)(param_1 * 3.0),param_3,param_4,local_110);
  }
  puVar6 = (undefined4 *)FastCheckBsphereInView(0x4024000000000000,local_100);
  if (puVar6 != (undefined4 *)0xffffffff) {
    auVar15 = ZEXT416(0xffffffff);
    auVar15 = auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60;
    puVar6 = &DAT_0010faec;
    auVar16 = vectorShiftLeftIntegerWord(auVar15,auVar15);
    auVar17 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    GameCamera.offset0.amp = (float)(param_1 * 0.10000000149011612);
    auVar15 = loadVectorLeftIndexed(0x10,0x10faec);
    auVar15 = auVar15 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar15 = vectorMultiplyAddFloatingPoint
                        (auVar17,auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60,
                         auVar16);
    auVar15 = vectorConvertToSignedFixedPointWordSaturate(auVar15,0);
    auVar15 = auVar15 >> 0x60 & (GPiece<16>)0xffffffff;
    GameCamera.offset0.total =
         storeVectorElementWordIndexed
                   (auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60,0x168,0x9513c0);
  }
  if (param_3 != (MobyInstance *)0x0) {
    bVar1 = param_3->state;
    puVar6 = (undefined4 *)(uint)bVar1;
    if ((bVar1 != 0xfd && bVar1 != 0xfe) && (param_6 != -1)) {
      puVar6 = (undefined4 *)PlayMobySound(param_6,0,param_3);
    }
  }
  if (param_2 != dVar9) {
    dVar10 = 13.0;
    if (dVar9 - param_2 < 0.0) {
      dVar10 = param_2;
    }
    DAT_00729354 = (float)dVar10;
    DAT_00729358 = (float)dVar10;
    DAT_00729350 = (float)dVar10;
    puVar6 = (undefined4 *)FUN_003fda38(&DAT_00729330,param_4,0,0);
  }
  return puVar6;
}


// 0x0110040 (0x444 bytes)
void MB_SpawnExplosionSparks2
               (double param_1,double param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
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
  GPiece<16> local_100;
  uint local_f0 [12];
  longlong local_c0;
  
  iVar12 = 0;
  dVar14 = 0.0;
  dVar15 = 8.0;
  dVar17 = 15.5;
  dVar18 = 20.5;
  dVar16 = (double)(float)(param_1 * 500000.0);
  dVar19 = 25.5;
  dVar20 = 30.5;
  dVar21 = 6.103515625e-05;
  do {
    iVar8 = rand();
    local_c0 = (longlong)(int)(iVar8 >> 0xf & 0x7fff);
    local_f0[0] = 0x4f008fff;
    local_f0[1] = 0x4f008fff;
    local_f0[2] = 0x4f007fff;
    local_f0[3] = 0x4f006fff;
    local_f0[4] = 0x2fffffff;
    local_f0[5] = 0x2fffffff;
    local_f0[6] = 0x2f005f7f;
    local_f0[7] = 0x2f004f7f;
    local_f0[8] = 0x2f003f7f;
    local_f0[9] = 0x2f00004f;
    local_f0[10] = 0x2f000000;
    local_f0[0xb] = 0x3f000000;
    dVar13 = (double)((float)((double)local_c0 * dVar21 + dVar15) * g_FrameTime);
    iVar8 = rand();
    uVar5 = (ulonglong)(uint)(iVar8 >> 0xf) & 0x7fff;
    uVar3 = local_f0[(int)(uVar5 + (((uVar5 + 1) * 0x5555 << 0x20) >> 0x31) * -6)];
    iVar8 = rand();
    uVar5 = (ulonglong)(uint)(iVar8 >> 0xf) & 0x7fff;
    iVar1 = (int)((double)animationSpeed * dVar17);
    iVar10 = (int)((double)animationSpeed * dVar18);
    local_c0 = (longlong)iVar10;
    uVar4 = local_f0[(int)(uVar5 + (((uVar5 + 1) * 0x5555 << 0x20) >> 0x31) * -6) + 6];
    iVar8 = rand();
    iVar10 = iVar10 - iVar1;
    uVar6 = iVar8 >> 0xf & 0x7fff;
    iVar8 = (int)uVar6 / (iVar10 + 1);
    iVar2 = (int)((double)animationSpeed * dVar19);
    iVar11 = (int)((double)animationSpeed * dVar20);
    local_c0 = (longlong)iVar11;
    iVar9 = rand();
    iVar11 = iVar11 - iVar2;
    uVar7 = iVar9 >> 0xf & 0x7fff;
    iVar9 = (int)uVar7 / (iVar11 + 1);
    SpawnPart_11
              (dVar16,(double)(float)(dVar13 * param_1),param_4,local_100,
               (uVar3 & 0xff) << 8 | uVar3 >> 8 & 0xff | uVar3 & 0xff000000 | uVar3 & 0xff0000,
               (uVar4 & 0xff) << 8 | uVar4 >> 8 & 0xff | uVar4 & 0xff000000 | uVar4 & 0xff0000,0,
               (uVar6 - (iVar8 * iVar10 + iVar8)) + iVar1,(uVar7 - (iVar9 * iVar11 + iVar9)) + iVar2
              );
    iVar12 = iVar12 + 1;
  } while (iVar12 < 3);
  if ((int)param_3 != 0) {
    local_c0 = (longlong)(int)((double)animationSpeed * dVar18);
    FUN_001d4d88((double)(float)(param_1 * 4.0),param_3,param_4,local_100,0x30,
                 (int)((double)animationSpeed * dVar18),0x40,0x7f,0);
    local_c0 = (longlong)(int)(animationSpeed * 29.5);
    FUN_001d4d88((double)(float)(param_1 * 3.0),param_3,param_4,local_100);
  }
  if (param_2 != dVar14) {
    dVar15 = 13.0;
    if (dVar14 - param_2 < 0.0) {
      dVar15 = param_2;
    }
    DAT_00729354 = (float)dVar15;
    DAT_00729358 = (float)dVar15;
    DAT_00729350 = (float)dVar15;
    FUN_003fda38(&DAT_00729330,param_4,0,0);
  }
  return;
}


// 0x0110488 (0x84 bytes)
void ClampVec3Magnitude(double param_1,Vec4 *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  double dVar8;
  
  fVar2 = param_2->y;
  fVar3 = param_2->x;
  fVar4 = param_2->z;
  dVar8 = (double)SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
  if (param_1 < dVar8) {
    fVar1 = (float)(param_1 / dVar8);
    fVar6 = 0.0;
    fVar5 = fVar6;
    if (0.0 - dVar8 < 0.0) {
      fVar5 = fVar3 * fVar1;
    }
    fVar7 = fVar6;
    if (0.0 - dVar8 < 0.0) {
      fVar7 = fVar2 * fVar1;
    }
    if (0.0 - dVar8 < 0.0) {
      fVar6 = fVar4 * fVar1;
    }
    if (dVar8 - 0.0 < 0.0) {
      fVar5 = fVar3 * fVar1;
    }
    if (dVar8 - 0.0 < 0.0) {
      fVar7 = fVar2 * fVar1;
    }
    if (dVar8 - 0.0 < 0.0) {
      fVar6 = fVar4 * fVar1;
    }
    param_2->x = fVar5;
    param_2->y = fVar7;
    param_2->z = fVar6;
  }
  return;
}


// 0x011050c (0x1b0 bytes)
int ____MB_PickMinAbsField2c_Of4(int param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  
  if (param_1 == 0) {
    if (param_2 == 0) {
      if (param_3 == 0) {
        param_3 = 0;
        if (param_4 != 0) {
          param_3 = param_4;
        }
      }
      else if (param_4 != 0) {
        uVar1 = (int)*(uint *)(param_3 + 0x2c) >> 0x1f;
        uVar2 = (int)*(uint *)(param_4 + 0x2c) >> 0x1f;
        if ((int)((uVar1 >> 1 ^ *(uint *)(param_3 + 0x2c)) - uVar1) <=
            (int)((uVar2 >> 1 ^ *(uint *)(param_4 + 0x2c)) - uVar2)) {
          param_3 = param_4;
        }
      }
    }
    else {
      if (param_3 != 0) {
        uVar1 = (int)*(uint *)(param_2 + 0x2c) >> 0x1f;
        uVar2 = (int)*(uint *)(param_3 + 0x2c) >> 0x1f;
        if ((int)((uVar1 >> 1 ^ *(uint *)(param_2 + 0x2c)) - uVar1) <=
            (int)((uVar2 >> 1 ^ *(uint *)(param_3 + 0x2c)) - uVar2)) {
          param_2 = param_3;
        }
      }
      param_3 = param_2;
      if (param_4 != 0) {
        uVar1 = (int)*(uint *)(param_2 + 0x2c) >> 0x1f;
        uVar2 = (int)*(uint *)(param_4 + 0x2c) >> 0x1f;
        if ((int)((uVar1 >> 1 ^ *(uint *)(param_2 + 0x2c)) - uVar1) <=
            (int)((uVar2 >> 1 ^ *(uint *)(param_4 + 0x2c)) - uVar2)) {
          param_3 = param_4;
        }
      }
    }
  }
  else {
    if (param_2 != 0) {
      uVar1 = (int)*(uint *)(param_1 + 0x2c) >> 0x1f;
      uVar2 = (int)*(uint *)(param_2 + 0x2c) >> 0x1f;
      if ((int)((uVar1 >> 1 ^ *(uint *)(param_1 + 0x2c)) - uVar1) <=
          (int)((uVar2 >> 1 ^ *(uint *)(param_2 + 0x2c)) - uVar2)) {
        param_1 = param_2;
      }
    }
    if (param_3 != 0) {
      uVar1 = (int)*(uint *)(param_1 + 0x2c) >> 0x1f;
      uVar2 = (int)*(uint *)(param_3 + 0x2c) >> 0x1f;
      if ((int)((uVar1 >> 1 ^ *(uint *)(param_1 + 0x2c)) - uVar1) <=
          (int)((uVar2 >> 1 ^ *(uint *)(param_3 + 0x2c)) - uVar2)) {
        param_1 = param_3;
      }
    }
    param_3 = param_1;
    if (param_4 != 0) {
      uVar1 = (int)*(uint *)(param_1 + 0x2c) >> 0x1f;
      uVar2 = (int)*(uint *)(param_4 + 0x2c) >> 0x1f;
      if ((int)((uVar1 >> 1 ^ *(uint *)(param_1 + 0x2c)) - uVar1) <=
          (int)((uVar2 >> 1 ^ *(uint *)(param_4 + 0x2c)) - uVar2)) {
        param_3 = param_4;
      }
    }
  }
  return param_3;
}


// 0x01106c0 (0x64 bytes)
double MB_computeLobVelocityClamped
                 (double param_1,double param_2,double param_3,double param_4,undefined8 param_5,
                 float *param_6,float *param_7)

{
  double dVar1;
  
  dVar1 = (double)(float)((double)SQRT((*param_6 - *param_7) * (*param_6 - *param_7) +
                                       (param_6[1] - param_7[1]) * (param_6[1] - param_7[1])) /
                         param_1);
  dVar1 = (double)(float)((double)((float)((double)(float)(param_4 * dVar1) * dVar1) * 0.5 +
                                  (param_7[2] - param_6[2])) / dVar1);
  if (param_3 - dVar1 < 0.0) {
    dVar1 = param_3;
  }
  if (dVar1 - param_2 < 0.0) {
    dVar1 = param_2;
  }
  return dVar1;
}


// 0x0110724 (0x74 bytes)
void MB_AddMobyToDynamicGroup(MobyInstance *pMoby,short *group,short maxSize)

{
  short sVar1;
  short *psVar2;
  uint uVar3;
  short sVar4;
  int iVar5;
  
  iVar5 = 1;
  sVar1 = *group;
  uVar3 = (int)pMoby - (int)g_MobyInstance;
  sVar4 = (short)(uVar3 >> 8) + (ushort)((int)uVar3 < 0 && (uVar3 & 0xff) != 0);
  psVar2 = group;
  if (0 < sVar1) {
    do {
      if (psVar2[1] == sVar4) {
        return;
      }
      iVar5 = iVar5 + 1;
      psVar2 = psVar2 + 1;
    } while (iVar5 <= sVar1);
  }
  if (sVar1 < maxSize) {
    *group = sVar1 + 1;
    *(short *)((int)group + (int)((longlong)(short)(sVar1 + 1) << 1)) = sVar4;
  }
  return;
}


// 0x0110798 (0x70 bytes)
void MB_DeleteMobyFromDynamicGroup(MobyInstance *pMoby,short *group)

{
  short sVar1;
  short *psVar2;
  int iVar3;
  
  sVar1 = *group;
  iVar3 = 1;
  psVar2 = group;
  if (0 < sVar1) {
    do {
      if ((MobyInstance *)((int)&(g_MobyInstance->bSphere).x + (int)((longlong)psVar2[1] << 8)) ==
          pMoby) {
        group[iVar3] = *(short *)((int)group + (int)((longlong)sVar1 << 1));
        *group = *group + -1;
        return;
      }
      iVar3 = iVar3 + 1;
      psVar2 = psVar2 + 1;
    } while (iVar3 <= sVar1);
  }
  return;
}


// 0x0110808 (0x88 bytes)
MobyInstance * MB_FindMobyByVarId(int param_1)

{
  short *psVar1;
  int iVar2;
  
  iVar2 = 1;
  if (0 < g_mobyIdListCount) {
    psVar1 = &g_mobyIdListCount;
    do {
      psVar1 = psVar1 + 1;
      if (*(int *)(*(int *)((int)&g_MobyInstance->pVar + (int)((longlong)*psVar1 << 8)) + 0x18) ==
          param_1) {
        return g_MobyInstance + (&g_mobyIdListCount)[iVar2];
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 <= g_mobyIdListCount);
  }
  return (MobyInstance *)0x0;
}


// 0x0110898 (0xb4 bytes)
MobyInstance * MB_FindNearestMobyInList(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  short *psVar5;
  int iVar6;
  MobyInstance *pMVar7;
  MobyInstance *pMVar8;
  
  pMVar7 = (MobyInstance *)0x0;
  iVar6 = 1;
  fVar1 = 1024.0;
  if (0 < DAT_00a51ee8) {
    psVar5 = &DAT_00a51eea;
    do {
      pMVar8 = g_MobyInstance + *psVar5;
      fVar3 = *(float *)(param_1 + 0x14) - (pMVar8->pos).y;
      fVar2 = *(float *)(param_1 + 0x10) - (pMVar8->pos).x;
      fVar4 = *(float *)(param_1 + 0x18) - (pMVar8->pos).z;
      fVar2 = SQRT(fVar4 * fVar4 + fVar2 * fVar2 + fVar3 * fVar3);
      if (fVar2 < fVar1) {
        fVar1 = fVar2;
        pMVar7 = pMVar8;
      }
      iVar6 = iVar6 + 1;
      psVar5 = psVar5 + 1;
    } while (iVar6 <= DAT_00a51ee8);
  }
  return pMVar7;
}


// 0x0110950 (0x108 bytes)
void MB_RandomizeVector(float range,float *v)

{
  int iVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar2 = (double)range;
  dVar3 = -dVar2;
  iVar1 = rand();
  dVar4 = (double)(float)(dVar2 - dVar3);
  dVar2 = 3.0517578125e-05;
  *v = *v + (float)((double)(float)((double)(longlong)(int)(iVar1 >> 0xf & 0x7fff) * dVar4) *
                    3.0517578125e-05 + dVar3);
  iVar1 = rand();
  v[1] = v[1] + (float)((double)(float)((double)(longlong)(int)(iVar1 >> 0xf & 0x7fff) * dVar4) *
                        dVar2 + dVar3);
  iVar1 = rand();
  v[2] = v[2] + (float)((double)(float)((double)(longlong)(int)(iVar1 >> 0xf & 0x7fff) * dVar4) *
                        dVar2 + dVar3);
  return;
}


// 0x0110a60 (0x108 bytes)
void MB_RandomizeVector(float range,float *v)

{
  int iVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar2 = (double)range;
  dVar3 = -dVar2;
  iVar1 = rand();
  dVar4 = (double)(float)(dVar2 - dVar3);
  dVar2 = 3.0517578125e-05;
  *v = *v + (float)((double)(float)((double)(longlong)(int)(iVar1 >> 0xf & 0x7fff) * dVar4) *
                    3.0517578125e-05 + dVar3);
  iVar1 = rand();
  v[1] = v[1] + (float)((double)(float)((double)(longlong)(int)(iVar1 >> 0xf & 0x7fff) * dVar4) *
                        dVar2 + dVar3);
  iVar1 = rand();
  v[2] = v[2] + (float)((double)(float)((double)(longlong)(int)(iVar1 >> 0xf & 0x7fff) * dVar4) *
                        dVar2 + dVar3);
  return;
}


// 0x0110b70 (0xe8 bytes)
int MB_IsPntInCuboid(Vec4 *point,longlong cuboidLink)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  
  if ((int)cuboidLink != -1) {
    iVar6 = (int)(cuboidLink << 7);
    fVar1 = point->y - *(float *)((int)&(Cuboids->pos).y + iVar6);
    fVar2 = point->x - *(float *)((int)&(Cuboids->pos).x + iVar6);
    fVar3 = point->z - *(float *)((int)&(Cuboids->pos).z + iVar6);
    fVar5 = *(float *)((int)&(Cuboids->imatrix).v2.x + iVar6) * fVar3 +
            *(float *)((int)&(Cuboids->imatrix).v0.x + iVar6) * fVar2 +
            *(float *)((int)&(Cuboids->imatrix).v1.x + iVar6) * fVar1;
    fVar4 = *(float *)((int)&(Cuboids->imatrix).v2.z + iVar6) * fVar3 +
            *(float *)((int)&(Cuboids->imatrix).v0.z + iVar6) * fVar2 +
            *(float *)((int)&(Cuboids->imatrix).v1.z + iVar6) * fVar1;
    fVar1 = *(float *)((int)&(Cuboids->imatrix).v2.y + iVar6) * fVar3 +
            *(float *)((int)&(Cuboids->imatrix).v0.y + iVar6) * fVar2 +
            *(float *)((int)&(Cuboids->imatrix).v1.y + iVar6) * fVar1;
    if (-1.0 <= fVar5) {
      if ((((fVar5 <= 1.0) && (-1.0 <= fVar1)) && (fVar1 <= 1.0)) &&
         ((-1.0 <= fVar4 && (fVar4 <= 1.0)))) {
        return 1;
      }
    }
  }
  return 0;
}


// 0x0110c60 (0xe0 bytes)
int MB_IsPntInCylinder(Vec4 *point,longlong cylinderLink)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  
  if ((int)cylinderLink < 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = (int)(cylinderLink << 7);
    fVar1 = point->y - *(float *)((int)&(Cylinders->pos).y + iVar6);
    fVar2 = point->x - *(float *)((int)&(Cylinders->pos).x + iVar6);
    fVar3 = point->z - *(float *)((int)&(Cylinders->pos).z + iVar6);
    fVar5 = *(float *)((int)&(Cylinders->imatrix).v2.y + iVar6) * fVar3 +
            *(float *)((int)&(Cylinders->imatrix).v0.y + iVar6) * fVar2 +
            *(float *)((int)&(Cylinders->imatrix).v1.y + iVar6) * fVar1;
    fVar4 = *(float *)((int)&(Cylinders->imatrix).v2.x + iVar6) * fVar3 +
            *(float *)((int)&(Cylinders->imatrix).v0.x + iVar6) * fVar2 +
            *(float *)((int)&(Cylinders->imatrix).v1.x + iVar6) * fVar1;
    fVar1 = *(float *)((int)&(Cylinders->imatrix).v2.z + iVar6) * fVar3 +
            *(float *)((int)&(Cylinders->imatrix).v0.z + iVar6) * fVar2 +
            *(float *)((int)&(Cylinders->imatrix).v1.z + iVar6) * fVar1;
    if (((1.0 <= SQRT(fVar4 * fVar4 + fVar5 * fVar5)) || (fVar1 < -1.0)) || (1.0 < fVar1)) {
      iVar6 = 0;
    }
    else {
      iVar6 = 1;
    }
  }
  return iVar6;
}


// 0x0110d48 (0xc8 bytes)
undefined8 MB_IsPntInSphere(Vec4 *point,longlong sphereLink)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  undefined8 uVar7;
  
  if ((int)sphereLink < 0) {
    uVar7 = 0;
  }
  else {
    iVar6 = (int)(sphereLink << 7);
    fVar1 = point->y - *(float *)((int)&(Spheres->pos).y + iVar6);
    fVar2 = point->x - *(float *)((int)&(Spheres->pos).x + iVar6);
    fVar3 = point->z - *(float *)((int)&(Spheres->pos).z + iVar6);
    fVar5 = *(float *)((int)&(Spheres->imatrix).v2.y + iVar6) * fVar3 +
            *(float *)((int)&(Spheres->imatrix).v0.y + iVar6) * fVar2 +
            *(float *)((int)&(Spheres->imatrix).v1.y + iVar6) * fVar1;
    fVar4 = *(float *)((int)&(Spheres->imatrix).v2.x + iVar6) * fVar3 +
            *(float *)((int)&(Spheres->imatrix).v0.x + iVar6) * fVar2 +
            *(float *)((int)&(Spheres->imatrix).v1.x + iVar6) * fVar1;
    fVar1 = *(float *)((int)&(Spheres->imatrix).v2.z + iVar6) * fVar3 +
            *(float *)((int)&(Spheres->imatrix).v0.z + iVar6) * fVar2 +
            *(float *)((int)&(Spheres->imatrix).v1.z + iVar6) * fVar1;
    if (1.0 <= SQRT(fVar1 * fVar1 + fVar4 * fVar4 + fVar5 * fVar5)) {
      uVar7 = 0;
    }
    else {
      uVar7 = 1;
    }
  }
  return uVar7;
}


// 0x0110e18 (0x50c bytes)
// inlined: FastAtan2 @0x110f10, FastAtan2 @0x111104
void MB_MtxFromDir(double param_1,Vec4 *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  ulonglong *puVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  float *pfVar10;
  longlong lVar11;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  longlong lVar12;
  ulonglong unaff_r29;
  longlong lVar13;
  ulonglong unaff_r30;
  longlong lVar14;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  ulonglong in_f25;
  double dVar19;
  ulonglong in_f26;
  double dVar20;
  ulonglong in_f27;
  double dVar21;
  ulonglong in_f28;
  double dVar22;
  ulonglong in_f29;
  double dVar23;
  ulonglong in_f30;
  double dVar24;
  ulonglong in_f31;
  
  uVar8 = ZEXT48(&stack0x00000000);
  lVar12 = uVar8 - 0x230;
  puVar5 = (ulonglong *)lVar12;
  *puVar5 = uVar8;
  puVar5[0x48] = in_LR;
  puVar5[0x3f] = in_f25;
  puVar5[0x40] = in_f26;
  puVar5[0x41] = in_f27;
  puVar5[0x42] = in_f28;
  puVar5[0x43] = in_f29;
  puVar5[0x44] = in_f30;
  puVar5[0x45] = in_f31;
  puVar5[0x3b] = unaff_r28;
  puVar5[0x3d] = unaff_r30;
  fVar3 = *param_3;
  fVar4 = param_3[1];
  puVar5[0x3e] = unaff_r31;
  dVar23 = (double)*param_3;
  dVar22 = (double)param_3[1];
  puVar5[0x3c] = unaff_r29;
  dVar21 = (double)param_3[2];
  puVar5[0x3a] = unaff_r27;
  dVar20 = (double)param_3[3];
  FastMtx4Identity((float *)(puVar5 + 0x10));
  dVar16 = ABS(dVar23);
  dVar18 = ABS(dVar22);
  *(float *)((int)puVar5 + 0x18c) = (float)(dVar16 - dVar18);
  dVar19 = 0.0;
  dVar24 = 0.7853981852531433;
  uVar9 = (ulonglong)((uint)fVar3 >> 0x1c) & 8 |
          (ulonglong)(*(uint *)((int)puVar5 + 0x18c) >> 0x1e) & 2 |
          (ulonglong)((uint)fVar4 >> 0x1d) & 4;
  fVar3 = *(float *)(&g_atanQuadrantTable + (int)(uVar9 << 2));
  dVar17 = dVar16;
  if (*(float *)((int)puVar5 + 0x18c) - 0.0 < 0.0) {
    dVar17 = dVar18;
  }
  fVar4 = *(float *)(((uint)(uVar9 << 2) | 0x735900) + 4);
  if (*(float *)((int)puVar5 + 0x18c) - 0.0 < 0.0) {
    dVar18 = dVar16;
  }
  dVar16 = dVar19;
  if (0.0 < dVar17) {
    lVar13 = uVar8 - 0x220;
    lVar11 = uVar8 - 0x70;
    lVar14 = uVar8 - 0x80;
    lVar15 = 2;
    fVar1 = (float)(dVar18 - dVar17) / (float)(dVar18 + dVar17);
    fVar2 = fVar1 * fVar1;
    *(float *)((int)puVar5 + 0x1bc) = fVar1;
    *(float *)((int)puVar5 + 0x1b4) = fVar1;
    *(float *)(puVar5 + 0x37) = fVar1;
    *(float *)(puVar5 + 0x36) = fVar1;
    fVar1 = fVar2 * fVar2;
    *(float *)((int)puVar5 + 0x1b4) = *(float *)((int)puVar5 + 0x1b4) * fVar2;
    *(float *)(puVar5 + 0x37) = *(float *)(puVar5 + 0x37) * fVar1;
    *(float *)((int)puVar5 + 0x1bc) = *(float *)((int)puVar5 + 0x1bc) * fVar1 * fVar2;
    do {
      *(float *)((int)lVar13 + 0x1b0) = *(float *)((int)lVar13 + 0x1a0) * fVar1 * fVar1;
      iVar6 = (int)lVar14;
      lVar14 = lVar14 + 8;
      lVar13 = lVar13 + 8;
      *(float *)((int)lVar11 + 4) = *(float *)(iVar6 + 4) * fVar1 * fVar1;
      lVar11 = lVar11 + 8;
      lVar15 = lVar15 + -1;
    } while (lVar15 != 0);
    lVar15 = 4;
    lVar11 = uVar8 - 0x80;
    pfVar10 = (float *)&DAT_007358e0;
    lVar13 = lVar12;
    lVar14 = lVar11;
    do {
      fVar1 = *pfVar10;
      fVar2 = pfVar10[1];
      pfVar10 = pfVar10 + 2;
      *(float *)((int)lVar13 + 0x1b0) = *(float *)((int)lVar13 + 0x1b0) * fVar1;
      lVar13 = lVar13 + 8;
      *(float *)((int)lVar14 + 4) = *(float *)((int)lVar14 + 4) * fVar2;
      lVar14 = lVar14 + 8;
      lVar15 = lVar15 + -1;
    } while (lVar15 != 0);
    lVar14 = 2;
    lVar13 = lVar12;
    dVar18 = dVar19;
    do {
      iVar6 = (int)lVar13;
      iVar7 = (int)lVar11;
      lVar13 = lVar13 + 0x10;
      lVar11 = lVar11 + 0x10;
      dVar18 = (double)((float)(dVar18 + (double)*(float *)(iVar6 + 0x1b0)) + *(float *)(iVar7 + 4)
                        + *(float *)(iVar7 + 8) + *(float *)(iVar7 + 0xc));
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
    dVar16 = (double)((float)(dVar18 + 0.7853981852531433) * fVar3 + fVar4);
  }
  *(undefined4 *)(puVar5 + 0xe) = 0;
  *(undefined4 *)((int)puVar5 + 0x74) = 0;
  *(float *)(puVar5 + 0xf) = (float)-dVar16;
  FastEulerToMtx1(uVar8 - 0x170,uVar8 - 0x1c0);
  fVar3 = (float)((double)*(float *)(puVar5 + 0x1e) * dVar20 +
                 (double)(float)((double)*(float *)(puVar5 + 0x1c) * dVar21 +
                                (double)(float)((double)*(float *)(puVar5 + 0x18) * dVar23 +
                                               (double)(float)((double)*(float *)(puVar5 + 0x1a) *
                                                              dVar22))));
  fVar4 = (float)((double)*(float *)(puVar5 + 0x1f) * dVar20 +
                 (double)(float)((double)*(float *)(puVar5 + 0x1d) * dVar21 +
                                (double)(float)((double)*(float *)(puVar5 + 0x19) * dVar23 +
                                               (double)(float)((double)*(float *)(puVar5 + 0x1b) *
                                                              dVar22))));
  dVar16 = ABS((double)fVar3);
  dVar17 = ABS((double)fVar4);
  *(float *)(puVar5 + 0x30) = fVar4;
  *(float *)((int)puVar5 + 0x184) = fVar3;
  *(float *)(puVar5 + 0x31) = (float)(dVar17 - dVar16);
  uVar9 = (ulonglong)(*(uint *)(puVar5 + 0x30) >> 0x1c) & 8 |
          (ulonglong)(*(uint *)(puVar5 + 0x31) >> 0x1e) & 2 |
          (ulonglong)(*(uint *)((int)puVar5 + 0x184) >> 0x1d) & 4;
  dVar18 = ABS((double)*(float *)(puVar5 + 0x30));
  if ((double)*(float *)(puVar5 + 0x31) - dVar19 < 0.0) {
    dVar18 = dVar16;
  }
  fVar3 = *(float *)(&g_atanQuadrantTable + (int)(uVar9 << 2));
  dVar16 = ABS((double)*(float *)((int)puVar5 + 0x184));
  if ((double)*(float *)(puVar5 + 0x31) - dVar19 < 0.0) {
    dVar16 = dVar17;
  }
  fVar4 = *(float *)(((uint)(uVar9 << 2) | 0x735900) + 4);
  if (dVar19 < dVar18) {
    lVar13 = uVar8 - 0x220;
    lVar14 = uVar8 - 0xa0;
    lVar11 = uVar8 - 0x90;
    lVar15 = 2;
    fVar1 = (float)(dVar16 - dVar18) / (float)(dVar16 + dVar18);
    fVar2 = fVar1 * fVar1;
    *(float *)((int)puVar5 + 0x19c) = fVar1;
    *(float *)((int)puVar5 + 0x194) = fVar1;
    *(float *)(puVar5 + 0x33) = fVar1;
    *(float *)(puVar5 + 0x32) = fVar1;
    fVar1 = fVar2 * fVar2;
    *(float *)((int)puVar5 + 0x194) = *(float *)((int)puVar5 + 0x194) * fVar2;
    *(float *)(puVar5 + 0x33) = *(float *)(puVar5 + 0x33) * fVar1;
    *(float *)((int)puVar5 + 0x19c) = *(float *)((int)puVar5 + 0x19c) * fVar1 * fVar2;
    do {
      *(float *)((int)lVar13 + 400) = *(float *)((int)lVar13 + 0x180) * fVar1 * fVar1;
      iVar6 = (int)lVar14;
      lVar13 = lVar13 + 8;
      lVar14 = lVar14 + 8;
      *(float *)((int)lVar11 + 4) = *(float *)(iVar6 + 4) * fVar1 * fVar1;
      lVar11 = lVar11 + 8;
      lVar15 = lVar15 + -1;
    } while (lVar15 != 0);
    lVar15 = 4;
    lVar11 = uVar8 - 0xa0;
    pfVar10 = (float *)&DAT_007358e0;
    lVar13 = lVar12;
    lVar14 = lVar11;
    do {
      fVar1 = *pfVar10;
      fVar2 = pfVar10[1];
      pfVar10 = pfVar10 + 2;
      *(float *)((int)lVar13 + 400) = *(float *)((int)lVar13 + 400) * fVar1;
      lVar13 = lVar13 + 8;
      *(float *)((int)lVar14 + 4) = *(float *)((int)lVar14 + 4) * fVar2;
      lVar14 = lVar14 + 8;
      lVar15 = lVar15 + -1;
    } while (lVar15 != 0);
    lVar13 = 2;
    do {
      iVar6 = (int)lVar12;
      iVar7 = (int)lVar11;
      lVar12 = lVar12 + 0x10;
      lVar11 = lVar11 + 0x10;
      dVar19 = (double)((float)(dVar19 + (double)*(float *)(iVar6 + 400)) + *(float *)(iVar7 + 4) +
                        *(float *)(iVar7 + 8) + *(float *)(iVar7 + 0xc));
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
    dVar19 = (double)((float)(dVar19 + dVar24) * fVar3 + fVar4);
  }
  lVar13 = uVar8 - 0x130;
  *(undefined4 *)(puVar5 + 0xe) = 0;
  *(undefined4 *)(puVar5 + 0xf) = 0;
  *(float *)((int)puVar5 + 0x74) = (float)-dVar19;
  FastEulerToMtx2(lVar13,uVar8 - 0x1c0);
  *(undefined4 *)(puVar5 + 0xe) = 0;
  *(undefined4 *)((int)puVar5 + 0x74) = 0;
  *(float *)(puVar5 + 0xf) = (float)param_1;
  FastEulerToMtx2(uVar8 - 0xf0,uVar8 - 0x1c0);
  lVar14 = uVar8 - 0x1b0;
  lVar12 = uVar8 - 0x170;
  FastVecMtx4Mul(lVar14,lVar12,lVar14);
  FastVecMtx4Mul(lVar14,lVar13,lVar14);
  FastVecMtx4Mul(lVar14,uVar8 - 0xf0,lVar14);
  FastNormalizeRMtx4(lVar13,lVar13);
  FastVecMtx4Mul(lVar14,lVar13,lVar14);
  FastNormalizeRMtx4(lVar12,lVar12);
  FastVecMtx4Mul(lVar14,lVar12,lVar14);
  FastApplyTransform(param_2,(Vec4 *)lVar14);
  return;
}


// 0x0111324 (0xac bytes)
void MB_QuatRotate(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  GPiece<16> local_40;
  GPiece<16> local_30;
  GPiece<16> auStack_20;
  
  FastQuaternionMult(auStack_20,param_3,local_30);
  FastQuaternionMult(param_1,auStack_20,local_40);
  return;
}


// 0x01113e0 (0x1b4 bytes)
// inlined: FastRSqrt @0x111484
void MB_RotateQuatAxisAngle(float angle,float *outQuat,float *inQuat,float *axis)

{
  float local_60 [4];
  GPiece<16> local_50;
  GPiece<16> local_40;
  GPiece<16> auStack_30;
  
  if (1e-05 <= ABS(angle)) {
    MB_AxisAngleToQuat(angle,local_60,local_60);
    FastQuaternionMult(auStack_30,local_60,local_40);
    FastQuaternionMult(outQuat,auStack_30,local_50);
  }
  else {
    *outQuat = *inQuat;
    outQuat[1] = inQuat[1];
    outQuat[2] = inQuat[2];
    outQuat[3] = inQuat[3];
  }
  return;
}


// 0x01115c8 (0x30c bytes)
// inlined: FastRSqrt @0x111660
void MB_QuatBetweenVecs
               (float *param_1,float *param_2,float *param_3,undefined8 param_4,int param_5)

{
  float fVar1;
  GPiece<16> local_80;
  GPiece<16> local_70;
  GPiece<16> local_60;
  GPiece<24> auStack_50;
  
  fVar1 = *param_2;
  if ((param_5 == 0) &&
     (SQRT(param_2[2] * param_2[2] + fVar1 * fVar1 + param_2[1] * param_2[1]) *
      SQRT(param_3[2] * param_3[2] + *param_3 * *param_3 + param_3[1] * param_3[1]) == 0.0)) {
    *param_1 = fVar1;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    param_1[3] = param_2[3];
  }
  else {
    FastQuaternionMult(auStack_50,local_80,local_60);
    FastQuaternionMult(param_1,auStack_50,local_70);
  }
  return;
}


// 0x01118d8 (0x2c4 bytes)
f32 MB_getTarget(double param_1,int param_2,undefined8 param_3,f32 *param_4)

{
  u8 uVar1;
  f32 fVar2;
  f32 fVar3;
  float fVar4;
  f32 fVar5;
  float fVar6;
  undefined4 *puVar7;
  f32 fVar8;
  MobyInstance *pMVar9;
  short *psVar10;
  int *piVar11;
  int iVar12;
  MobyInstance *pMVar13;
  double dVar14;
  
  fVar8 = 0.0;
  if ((g_heroStateType == 0x18) || (pMVar9 = g_heroMobyPtr, g_heroState == MOVEMENT_LOCKED)) {
    pMVar9 = (MobyInstance *)0x0;
    fVar8 = 2.8026e-45;
  }
  iVar12 = 1;
  if (0 < DAT_00a51f68) {
    psVar10 = &DAT_00a51f6a;
    do {
      pMVar13 = g_MobyInstance + *psVar10;
      if (pMVar13 != (MobyInstance *)0x0) {
        if (pMVar13->oClass == DECOY) {
          uVar1 = pMVar13->state;
          if ((uVar1 == 0xfe) || (uVar1 == 0xfd)) goto LAB_00111988;
LAB_001119a8:
          if ((uVar1 == '\x03') &&
             (fVar4 = *(float *)(param_2 + 0x14) - (pMVar13->pos).y,
             fVar6 = *(float *)(param_2 + 0x10) - (pMVar13->pos).x,
             dVar14 = (double)SQRT(fVar6 * fVar6 + fVar4 * fVar4), dVar14 < param_1)) {
            fVar8 = 1.4013e-45;
            param_1 = dVar14;
            pMVar9 = pMVar13;
          }
        }
        else {
LAB_00111988:
          if (pMVar13->oClass == GOLD_DECOY) {
            uVar1 = pMVar13->state;
            if ((uVar1 != 0xfe) && (uVar1 != 0xfd)) goto LAB_001119a8;
          }
        }
      }
      iVar12 = iVar12 + 1;
      psVar10 = psVar10 + 1;
    } while (iVar12 <= DAT_00a51f68);
  }
  iVar12 = 0;
  piVar11 = &DAT_010bb494;
  do {
    pMVar13 = (MobyInstance *)*piVar11;
    if ((pMVar13 != (MobyInstance *)0x0) && (pMVar13->oClass == MORPH_O_RAY_CHICKEN)) {
      if ((pMVar13->state != 0xfd && pMVar13->state != 0xfe) &&
         ((pMVar13->setByGroup != '\0' &&
          (fVar4 = *(float *)(param_2 + 0x14) - (pMVar13->pos).y,
          fVar6 = *(float *)(param_2 + 0x10) - (pMVar13->pos).x,
          dVar14 = (double)SQRT(fVar6 * fVar6 + fVar4 * fVar4), dVar14 < param_1)))) {
        fVar8 = 1.4013e-45;
        param_1 = dVar14;
        pMVar9 = pMVar13;
      }
    }
    iVar12 = iVar12 + 1;
    piVar11 = piVar11 + 1;
  } while (iVar12 < 0x14);
  if (pMVar9 == (MobyInstance *)0x0) {
    param_4[0x10] = 0.0;
    puVar7 = (undefined4 *)((uint)param_4 & 0xfffffff0);
    puVar7[3] = 0;
    puVar7[2] = 0;
    puVar7[1] = 0;
    *puVar7 = 0;
    puVar7 = (undefined4 *)((uint)(param_4 + 4) & 0xfffffff0);
    puVar7[3] = 0;
    puVar7[2] = 0;
    puVar7[1] = 0;
    *puVar7 = 0;
    puVar7 = (undefined4 *)((uint)(param_4 + 0xc) & 0xfffffff0);
    puVar7[3] = 0;
    puVar7[2] = 0;
    puVar7[1] = 0;
    *puVar7 = 0;
    puVar7 = (undefined4 *)((uint)(param_4 + 8) & 0xfffffff0);
    puVar7[3] = 0;
    puVar7[2] = 0;
    puVar7[1] = 0;
    *puVar7 = 0;
  }
  else {
    param_4[0x10] = (f32)pMVar9;
    fVar2 = (pMVar9->pos).x;
    *param_4 = fVar2;
    fVar3 = (pMVar9->pos).y;
    param_4[1] = fVar3;
    fVar4 = (pMVar9->pos).z;
    param_4[2] = fVar4;
    fVar5 = (pMVar9->pos).w;
    param_4[3] = fVar5;
    param_4[4] = (pMVar9->rotation).x;
    pMVar13 = g_heroMobyPtr;
    param_4[5] = (pMVar9->rotation).y;
    param_4[6] = (pMVar9->rotation).z;
    param_4[7] = (pMVar9->rotation).w;
    if (pMVar9 == pMVar13) {
      param_4[8] = DAT_00969da0;
      param_4[9] = DAT_00969da4;
      param_4[10] = DAT_00969da8;
      param_4[0xb] = DAT_00969dac;
      param_4[0xc] = g_heroCGPos;
      param_4[0xd] = DAT_00969db4;
      param_4[0xe] = DAT_00969db8;
      param_4[0xf] = DAT_00969dbc;
    }
    else {
      param_4[0xc] = fVar2;
      param_4[0xd] = fVar3;
      param_4[0xf] = fVar5;
      param_4[8] = fVar2;
      param_4[9] = fVar3;
      param_4[0xb] = fVar5;
      fVar4 = fVar4 + 0.6;
      param_4[0xe] = fVar4;
      param_4[10] = fVar4;
    }
  }
  param_4[0x11] = fVar8;
  return fVar8;
}


// 0x0111ba0 (0x510 bytes)
f32 MB_getTargetInArea
              (double param_1,int param_2,f32 *param_3,undefined8 param_4,int *param_5,int param_6,
              Vec4 *param_7,int param_8)

{
  u8 uVar1;
  f32 fVar2;
  f32 fVar3;
  float fVar4;
  f32 fVar5;
  float fVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  f32 fVar11;
  MobyInstance *pMVar12;
  int *piVar13;
  short *psVar14;
  int *piVar15;
  MobyInstance *pMVar16;
  double dVar17;
  
  pMVar12 = g_heroMobyPtr;
  fVar11 = 0.0;
  if ((g_heroStateType == 0x18) || (g_heroState == MOVEMENT_LOCKED)) {
    pMVar12 = (MobyInstance *)0x0;
    fVar11 = 2.8026e-45;
  }
  else if (param_6 < 1) {
    if (((param_7 != (Vec4 *)0x0) && (0 < param_8)) &&
       (iVar8 = PointInsideComplexPoly(&g_heroPosition,param_7,param_8), iVar8 == 0)) {
      pMVar12 = (MobyInstance *)0x0;
      fVar11 = 2.8026e-45;
    }
  }
  else {
    iVar8 = 0;
    piVar15 = param_5;
    if (0 < param_6 + -1) {
      do {
        iVar10 = MB_IsPntInCuboid(&g_heroPosition,(longlong)*piVar15);
        if (iVar10 != 0) {
          pMVar12 = (MobyInstance *)0x0;
          fVar11 = 2.8026e-45;
          break;
        }
        iVar8 = iVar8 + 1;
        piVar15 = piVar15 + 1;
      } while (iVar8 < param_6 + -1);
    }
  }
  iVar8 = 1;
  if (0 < DAT_00a51f68) {
    psVar14 = &DAT_00a51f6a;
    do {
      pMVar16 = g_MobyInstance + *psVar14;
      if (pMVar16 != (MobyInstance *)0x0) {
        if (pMVar16->oClass == DECOY) {
          uVar1 = pMVar16->state;
          if ((uVar1 == 0xfe) || (uVar1 == 0xfd)) goto LAB_00111d60;
LAB_00111d80:
          if ((uVar1 == '\x03') &&
             (fVar4 = *(float *)(param_2 + 0x14) - (pMVar16->pos).y,
             fVar6 = *(float *)(param_2 + 0x10) - (pMVar16->pos).x,
             dVar17 = (double)SQRT(fVar6 * fVar6 + fVar4 * fVar4), dVar17 < param_1)) {
            if (param_6 < 1) {
              if (((param_7 != (Vec4 *)0x0) && (0 < param_8)) &&
                 (iVar10 = PointInsideComplexPoly((Vec4 *)&pMVar16->pos,param_7,param_8),
                 iVar10 == 0)) goto LAB_00111e34;
            }
            else {
              iVar10 = 0;
              if (0 < param_6 + -1) {
                piVar15 = param_5;
                do {
                  iVar9 = MB_IsPntInCuboid((Vec4 *)&pMVar16->pos,(longlong)*piVar15);
                  if (iVar9 != 0) goto LAB_00111e34;
                  iVar10 = iVar10 + 1;
                  piVar15 = piVar15 + 1;
                } while (iVar10 < param_6 + -1);
              }
            }
            fVar11 = 1.4013e-45;
            param_1 = dVar17;
            pMVar12 = pMVar16;
          }
        }
        else {
LAB_00111d60:
          if (pMVar16->oClass == GOLD_DECOY) {
            uVar1 = pMVar16->state;
            if ((uVar1 != 0xfe) && (uVar1 != 0xfd)) goto LAB_00111d80;
          }
        }
      }
LAB_00111e34:
      iVar8 = iVar8 + 1;
      psVar14 = psVar14 + 1;
    } while (iVar8 <= DAT_00a51f68);
  }
  iVar8 = 0;
  piVar15 = &DAT_010bb494;
  do {
    pMVar16 = (MobyInstance *)*piVar15;
    if (((pMVar16 != (MobyInstance *)0x0) && (pMVar16->oClass == MORPH_O_RAY_CHICKEN)) &&
       ((pMVar16->state != 0xfd && pMVar16->state != 0xfe &&
        ((pMVar16->setByGroup != '\0' &&
         (fVar4 = *(float *)(param_2 + 0x14) - (pMVar16->pos).y,
         fVar6 = *(float *)(param_2 + 0x10) - (pMVar16->pos).x,
         dVar17 = (double)SQRT(fVar6 * fVar6 + fVar4 * fVar4), dVar17 < param_1)))))) {
      if (param_6 < 1) {
        if (((param_7 != (Vec4 *)0x0) && (0 < param_8)) &&
           (iVar10 = PointInsideComplexPoly((Vec4 *)&pMVar16->pos,param_7,param_8), iVar10 == 0))
        goto LAB_00111f40;
      }
      else {
        iVar10 = 0;
        if (0 < param_6 + -1) {
          piVar13 = param_5;
          do {
            iVar9 = MB_IsPntInCuboid((Vec4 *)&pMVar16->pos,(longlong)*piVar13);
            if (iVar9 != 0) goto LAB_00111f40;
            iVar10 = iVar10 + 1;
            piVar13 = piVar13 + 1;
          } while (iVar10 < param_6 + -1);
        }
      }
      fVar11 = 1.4013e-45;
      param_1 = dVar17;
      pMVar12 = pMVar16;
    }
LAB_00111f40:
    iVar8 = iVar8 + 1;
    piVar15 = piVar15 + 1;
    if (0x13 < iVar8) {
      if (pMVar12 == (MobyInstance *)0x0) {
        param_3[0x10] = 0.0;
        puVar7 = (undefined4 *)((uint)param_3 & 0xfffffff0);
        puVar7[3] = 0;
        puVar7[2] = 0;
        puVar7[1] = 0;
        *puVar7 = 0;
        puVar7 = (undefined4 *)((uint)(param_3 + 4) & 0xfffffff0);
        puVar7[3] = 0;
        puVar7[2] = 0;
        puVar7[1] = 0;
        *puVar7 = 0;
        puVar7 = (undefined4 *)((uint)(param_3 + 0xc) & 0xfffffff0);
        puVar7[3] = 0;
        puVar7[2] = 0;
        puVar7[1] = 0;
        *puVar7 = 0;
        puVar7 = (undefined4 *)((uint)(param_3 + 8) & 0xfffffff0);
        puVar7[3] = 0;
        puVar7[2] = 0;
        puVar7[1] = 0;
        *puVar7 = 0;
      }
      else {
        param_3[0x10] = (f32)pMVar12;
        fVar2 = (pMVar12->pos).x;
        *param_3 = fVar2;
        fVar3 = (pMVar12->pos).y;
        param_3[1] = fVar3;
        fVar4 = (pMVar12->pos).z;
        param_3[2] = fVar4;
        fVar5 = (pMVar12->pos).w;
        param_3[3] = fVar5;
        param_3[4] = (pMVar12->rotation).x;
        param_3[5] = (pMVar12->rotation).y;
        pMVar16 = g_heroMobyPtr;
        param_3[6] = (pMVar12->rotation).z;
        param_3[7] = (pMVar12->rotation).w;
        if (pMVar12 == pMVar16) {
          param_3[8] = DAT_00969da0;
          param_3[9] = DAT_00969da4;
          param_3[10] = DAT_00969da8;
          param_3[0xb] = DAT_00969dac;
          param_3[0xc] = g_heroCGPos;
          param_3[0xd] = DAT_00969db4;
          param_3[0xe] = DAT_00969db8;
          param_3[0xf] = DAT_00969dbc;
        }
        else {
          param_3[0xc] = fVar2;
          param_3[0xd] = fVar3;
          param_3[0xf] = fVar5;
          param_3[8] = fVar2;
          fVar4 = fVar4 + 0.6;
          param_3[9] = fVar3;
          param_3[0xb] = fVar5;
          param_3[0xe] = fVar4;
          param_3[10] = fVar4;
        }
      }
      param_3[0x11] = fVar11;
      return fVar11;
    }
  } while( true );
}


// 0x01120b0 (0x24 bytes)
void MB_CollLineWrapper(void)

{
  CollLine();
  return;
}


// 0x01120d4 (0x1d8 bytes)
void MB_TransformBetweenFrames
               (float *param_1,float *param_2,float *param_3,undefined8 param_4,undefined8 param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  
  FastEulerToMtx1(&local_c0,param_4);
  FastNormalizeRMtx4(&local_c0,&local_c0);
  FastEulerToMtx1(&local_80,param_5);
  fVar1 = param_3[1];
  fVar4 = param_1[1] - fVar1;
  fVar5 = *param_1 - *param_3;
  fVar2 = param_3[2];
  fVar6 = param_1[2] - fVar2;
  fVar3 = param_1[3];
  fVar9 = local_8c * fVar3 + local_9c * fVar6 + local_bc * fVar5 + local_ac * fVar4;
  fVar8 = local_90 * fVar3 + local_a0 * fVar6 + local_c0 * fVar5 + local_b0 * fVar4;
  fVar7 = local_88 * fVar3 + local_98 * fVar6 + local_b8 * fVar5 + local_a8 * fVar4;
  fVar3 = local_84 * fVar3 + local_94 * fVar6 + local_b4 * fVar5 + local_a4 * fVar4;
  *param_2 = local_70 * fVar9 + local_50 * fVar3 + local_60 * fVar7 + local_80 * fVar8 + *param_3;
  param_2[3] = local_44 * fVar3 + local_54 * fVar7 + local_74 * fVar8 + local_64 * fVar9;
  param_2[1] = local_4c * fVar3 + local_5c * fVar7 + local_7c * fVar8 + local_6c * fVar9 + fVar1;
  param_2[2] = local_48 * fVar3 + local_58 * fVar7 + local_78 * fVar8 + local_68 * fVar9 + fVar2;
  return;
}


// 0x01122ac (0x34 bytes)
/* [p2_mobyutil] if modeBits&0x20 returns pVar[2] (moby being stood on/attached)
   [p2_mobyutil] if modeBits&0x20 returns pVar[2] (moby being stood on/attached) */

undefined4 MB_GetPlatformParent(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else if ((*(ushort *)(param_1 + 0x34) & 0x20) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x78) + 8);
  }
  return uVar1;
}


// 0x01122e0 (0x1e0 bytes)
undefined8
MB_PlatformLocalToWorld
          (undefined8 param_1,int param_2,float *param_3,undefined8 param_4,float *param_5,
          MobyInstance *param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float fVar6;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  GPiece<72> auStack_80;
  
  if (((param_2 != 0) && ((*(ushort *)(param_2 + 0x34) & 0x20) != 0)) &&
     (iVar5 = *(int *)(*(int *)(param_2 + 0x78) + 8), iVar5 != 0)) {
    FastEulerToMtx1(&local_c0,iVar5);
    fVar6 = *param_3 + *(float *)(iVar5 + 0x10);
    fVar1 = param_3[1];
    fVar2 = param_3[2];
    fVar3 = param_3[3];
    *param_5 = fVar6;
    fVar1 = fVar1 + *(float *)(iVar5 + 0x14);
    param_5[1] = fVar1;
    fVar4 = *(float *)(iVar5 + 0x18);
    param_5[3] = fVar3;
    fVar2 = fVar2 + fVar4;
    param_5[2] = fVar2;
    fVar6 = fVar6 - *(float *)(param_2 + 0x10);
    *param_5 = fVar6;
    fVar1 = fVar1 - *(float *)(param_2 + 0x14);
    param_5[1] = fVar1;
    fVar2 = fVar2 - *(float *)(param_2 + 0x18);
    param_5[2] = fVar2;
    *param_5 = local_a0 * fVar2 + local_c0 * fVar6 + local_b0 * fVar1;
    param_5[1] = local_9c * fVar2 + local_bc * fVar6 + local_ac * fVar1;
    param_5[2] = local_98 * fVar2 + local_b8 * fVar6 + local_a8 * fVar1;
    param_5[3] = local_a4 * fVar1 + local_94 * fVar2 + local_b4 * fVar6 + fVar3;
    *param_5 = *param_5 + *(float *)(param_2 + 0x10);
    param_5[1] = param_5[1] + *(float *)(param_2 + 0x14);
    param_5[2] = param_5[2] + *(float *)(param_2 + 0x18);
    FastEulerToMtx1(auStack_80,param_4);
    FastVecMtx4Mul(auStack_80,&local_c0,auStack_80);
    MB_MtxToEuler((int)auStack_80,param_6);
    return 1;
  }
  return 0;
}


// 0x01124c0 (0x1b4 bytes)
undefined8
MB_PlatformWorldToLocal
          (undefined8 param_1,int param_2,float *param_3,undefined8 param_4,float *param_5,
          MobyInstance *param_6)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  GPiece<72> auStack_90;
  
  if (((param_2 == 0) || ((*(ushort *)(param_2 + 0x34) & 0x20) == 0)) ||
     (*(int *)(*(int *)(param_2 + 0x78) + 8) == 0)) {
    uVar1 = 0;
  }
  else {
    dVar5 = (double)(param_3[1] - *(float *)(param_2 + 0x14));
    dVar4 = (double)(*param_3 - *(float *)(param_2 + 0x10));
    dVar3 = (double)param_3[3];
    dVar2 = (double)(param_3[2] - *(float *)(param_2 + 0x18));
    FastNormalizeRMtx4(&local_d0,param_2 + 0xc0);
    *param_5 = (float)((double)local_a0 * dVar3 +
                      (double)(float)((double)local_b0 * dVar2 +
                                     (double)(float)((double)local_d0 * dVar4 +
                                                    (double)(float)((double)local_c0 * dVar5))));
    param_5[1] = (float)((double)local_9c * dVar3 +
                        (double)(float)((double)local_ac * dVar2 +
                                       (double)(float)((double)local_cc * dVar4 +
                                                      (double)(float)((double)local_bc * dVar5))));
    param_5[2] = (float)((double)local_98 * dVar3 +
                        (double)(float)((double)local_a8 * dVar2 +
                                       (double)(float)((double)local_c8 * dVar4 +
                                                      (double)(float)((double)local_b8 * dVar5))));
    param_5[3] = (float)((double)local_94 * dVar3 +
                        (double)(float)((double)local_a4 * dVar2 +
                                       (double)(float)((double)local_c4 * dVar4 +
                                                      (double)(float)((double)local_b4 * dVar5))));
    FastEulerToMtx1(auStack_90,param_4);
    FastVecMtx4Mul(auStack_90,&local_d0,auStack_90);
    MB_MtxToEuler((int)auStack_90,param_6);
    uVar1 = 1;
  }
  return uVar1;
}


// 0x0112678 (0x288 bytes)
undefined8
MB_PlatformGetDelta
          (int param_1,int param_2,float *param_3,undefined8 param_4,float *param_5,
          undefined8 param_6)

{
  float fVar1;
  float fVar2;
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
  int iVar14;
  undefined8 uVar15;
  Vec4 local_e0;
  GPiece<64> auStack_d0;
  GPiece<72> auStack_90;
  
  if (((param_2 == 0) || ((*(ushort *)(param_2 + 0x34) & 0x20) == 0)) ||
     (iVar14 = *(int *)(*(int *)(param_2 + 0x78) + 8), iVar14 == 0)) {
    uVar15 = 0;
  }
  else {
    fVar1 = param_3[1];
    fVar2 = *param_3;
    fVar3 = *(float *)(param_2 + 0xd4);
    fVar4 = param_3[2];
    fVar5 = *(float *)(param_2 + 0xdc);
    fVar6 = *(float *)(param_2 + 0xd8);
    fVar7 = *(float *)(param_2 + 0xc4);
    fVar8 = *(float *)(param_2 + 0xcc);
    fVar9 = *(float *)(param_2 + 200);
    fVar10 = *(float *)(param_2 + 0xe4);
    fVar11 = *(float *)(param_2 + 0xe8);
    fVar12 = *(float *)(param_2 + 0xec);
    fVar13 = param_3[3];
    *param_5 = *(float *)(param_2 + 0xe0) * fVar4 +
               *(float *)(param_2 + 0xc0) * fVar2 + *(float *)(param_2 + 0xd0) * fVar1;
    param_5[1] = fVar10 * fVar4 + fVar7 * fVar2 + fVar3 * fVar1;
    param_5[2] = fVar11 * fVar4 + fVar9 * fVar2 + fVar6 * fVar1;
    param_5[3] = fVar12 * fVar4 + fVar8 * fVar2 + fVar5 * fVar1 + fVar13;
    *param_5 = *param_5 + *(float *)(param_2 + 0x10);
    param_5[1] = param_5[1] + *(float *)(param_2 + 0x14);
    param_5[2] = param_5[2] + *(float *)(param_2 + 0x18);
    FastEulerToMtx1(auStack_90,param_4);
    FastMtxCopyNoTranslate(auStack_d0,param_2 + 0xc0);
    FastVecMtx4Mul(auStack_90,auStack_d0,auStack_90);
    MB_MtxToEuler((int)auStack_90,(MobyInstance *)param_6);
    if ((*(uint *)(iVar14 + 0x3c) & 4) == 0) {
      if ((*(byte *)(param_1 + 0x22) != 0) &&
         (*(byte *)(param_1 + 0x22) < *(byte *)(param_2 + 0x22))) {
        local_e0.x = *(float *)(iVar14 + 0x10);
        local_e0.y = *(float *)(iVar14 + 0x14);
        local_e0.z = *(float *)(iVar14 + 0x18);
        local_e0.w = *(float *)(iVar14 + 0x1c);
        ClampVec3Magnitude(0x3ff0000000000000,&local_e0);
        *param_5 = *param_5 + local_e0.x;
        param_5[1] = param_5[1] + local_e0.y;
        param_5[2] = param_5[2] + local_e0.z;
      }
    }
    else {
      *param_5 = *param_5 + *(float *)(iVar14 + 0x10);
      param_5[1] = param_5[1] + *(float *)(iVar14 + 0x14);
      param_5[2] = param_5[2] + *(float *)(iVar14 + 0x18);
      MB_PlatformWorldToLocal(param_1,param_2,param_5,param_6,param_3,param_4);
    }
    uVar15 = 1;
  }
  return uVar15;
}


// 0x0112900 (0xcc bytes)
void MB_GetOrientation
               (MobyInstance *param_1,Vec4 *param_2,undefined8 param_3,undefined8 param_4)

{
  GPiece<64> auStack_f0;
  GPiece<64> auStack_b0;
  GPiece<72> auStack_70;
  
  FastEulerToMtx1(auStack_f0,param_3);
  FastNormalizeRMtx4(auStack_f0,auStack_f0);
  FastEulerToMtx1(auStack_b0,param_4);
  FastVecMtx4Mul(auStack_70,auStack_f0,auStack_b0);
  MB_MtxToEuler((int)auStack_70,param_1);
  (param_1->pos).x = param_2->x;
  (param_1->pos).y = param_2->y;
  (param_1->pos).z = param_2->z;
  (param_1->pos).w = param_2->w;
  return;
}


// 0x01129d0 (0x64 bytes)
/* [p2_mobyutil] scales vec4 arg by constant at 0x1129cc and passes to 0x502910 */

void MB_ScaledVecWrapper(void)

{
  GPiece<16> local_10;
  
  FastCheckBsphereInView(local_10);
  return;
}


// 0x0112a38 (0xb0 bytes)
void MB_ToastMessage(StringId param_1,int param_2)

{
  char *__src;
  GPiece<16> auVar1;
  GPiece<16> auVar2;
  GPiece<16> auVar3;
  
  auVar1 = auRam00000000;
  if (param_2 == -1) {
    auVar1 = ZEXT416(0xffffffff);
    auVar1 = auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60;
    auVar2 = vectorShiftLeftIntegerWord(auVar1,auVar1);
    auVar1 = loadVectorLeftIndexed(0x70,0x112a34);
    auVar3 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar1 = auVar1 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar1 = vectorMultiplyAddFloatingPoint
                       (auVar3,auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60,auVar2);
    auVar1 = vectorConvertToSignedFixedPointWordSaturate(auVar1,0);
  }
  __src = (char *)help_msg_string_by_index(param_1);
  strcpy(&g_toastMsgBuff,__src);
  auVar1 = auVar1 >> 0x60 & (GPiece<16>)0xffffffff;
  g_toastMsgTimer =
       storeVectorElementWordIndexed
                 (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60,0x5c80,0xa10000);
  return;
}


// 0x0112af0 (0x128 bytes)
void MB_ToastMessageByIndex(int idx)

{
  longlong lVar1;
  undefined4 *puVar2;
  longlong lVar3;
  char *__src;
  GPiece<16> auVar4;
  GPiece<16> auVar5;
  GPiece<16> auVar6;
  GPiece<16> auVar7;
  GPiece<16> auVar8;
  undefined4 in_vr31_32_0;
  undefined4 in_vr31_32_1;
  undefined4 in_vr31_32_2;
  undefined4 in_vr31_32_3;
  StringId aSStack_70 [24];
  
  lVar3 = (longlong)idx;
  lVar1 = ZEXT48(&stack0x00000000) - 0x20;
  puVar2 = (undefined4 *)lVar1;
  puVar2[3] = in_vr31_32_3;
  puVar2[2] = in_vr31_32_2;
  puVar2[1] = in_vr31_32_1;
  *puVar2 = in_vr31_32_0;
  memcpy(aSStack_70,&DAT_00729578,0x4c);
  auVar7 = ZEXT416(0xffffffff);
  auVar5 = auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60;
  auVar4 = loadVectorLeftIndexed(lVar1,0x112ae8);
  auVar7 = ZEXT416(0xffffffff);
  auVar8 = auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60;
  auVar7 = auVar4 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar4 = vectorShiftLeftIntegerWord(auVar5,auVar5);
  auVar6 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
  auVar5 = loadVectorLeftIndexed(4,0x112ae8);
  auVar4 = vectorMultiplyAddFloatingPoint
                     (auVar6,auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60,auVar4);
  auVar7 = auVar5 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar5 = vectorShiftLeftIntegerWord(auVar8,auVar8);
  lVar3 = lVar3 + (lVar3 >> 0x3f & -lVar3);
  auVar5 = vectorMultiplyAddFloatingPoint
                     (auVar6,auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60,auVar5);
  auVar7 = ZEXT416(0xffffffff);
  auVar4 = vectorConvertToSignedFixedPointWordSaturate(auVar4,0);
  auVar5 = vectorConvertToSignedFixedPointWordSaturate(auVar5,0);
  auVar7 = vectorCompareEqualToUnsignedWord
                     (auVar4,auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60);
  auVar7 = vectorConditionalSelect(auVar4,auVar5,auVar7);
  __src = (char *)help_msg_string_by_index
                            (aSStack_70[(int)(lVar3 + (0x12 - lVar3 >> 0x3f & 0x12U - lVar3))]);
  strcpy(&g_toastMsgBuff,__src);
  auVar7 = auVar7 >> 0x60 & (GPiece<16>)0xffffffff;
  g_toastMsgTimer =
       storeVectorElementWordIndexed
                 (auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60,0x5c80,0xa10000);
  return;
}


// 0x0112c20 (0x1a0 bytes)
void MB_UnlockLevel(LevelId param_1)

{
  bool bVar1;
  longlong lVar2;
  undefined4 *puVar3;
  char *pcVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  GPiece<16> auVar8;
  GPiece<16> auVar9;
  GPiece<16> auVar10;
  GPiece<16> auVar11;
  GPiece<16> auVar12;
  undefined4 in_vr31_32_0;
  undefined4 in_vr31_32_1;
  undefined4 in_vr31_32_2;
  undefined4 in_vr31_32_3;
  StringId aSStack_70 [26];
  
  lVar5 = (longlong)(int)param_1;
  lVar2 = ZEXT48(&stack0x00000000) - 0x20;
  puVar3 = (undefined4 *)lVar2;
  puVar3[3] = in_vr31_32_3;
  puVar3[2] = in_vr31_32_2;
  puVar3[1] = in_vr31_32_1;
  *puVar3 = in_vr31_32_0;
  if ((&g_SeenPlanets.Veldin)[param_1] == '\0') {
    iVar7 = 0;
    lVar6 = 0;
    do {
      pcVar4 = &g_SeenPlanets.Veldin + iVar7;
      iVar7 = iVar7 + 1;
      lVar6 = lVar6 + 1 + (ZERO_MASK((uint)(byte)*pcVar4) & lVar6 - (lVar6 + 1));
    } while (iVar7 < 0x14);
    (&g_SeenPlanets.Veldin)[param_1] = '\x01';
    bVar1 = Level != param_1;
    GalacticMap[(int)lVar6] = param_1;
    if (bVar1) {
      memcpy(aSStack_70,&DAT_00729578,0x4c);
      auVar8 = ZEXT416(0xffffffff);
      auVar9 = auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60;
      auVar8 = ZEXT416(0xffffffff);
      auVar12 = auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60;
      auVar10 = vectorShiftLeftIntegerWord(auVar9,auVar9);
      auVar8 = loadVectorLeftIndexed(lVar2,0x112c18);
      auVar11 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar8 = auVar8 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar9 = loadVectorLeftIndexed(4,0x112c18);
      auVar9 = auVar9 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar10 = vectorMultiplyAddFloatingPoint
                          (auVar11,auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60,auVar10
                          );
      auVar8 = vectorShiftLeftIntegerWord(auVar12,auVar12);
      lVar5 = lVar5 + (lVar5 >> 0x3f & -lVar5);
      auVar11 = vectorMultiplyAddFloatingPoint
                          (auVar11,auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60,auVar8)
      ;
      auVar8 = ZEXT416(0xffffffff);
      auVar9 = vectorConvertToSignedFixedPointWordSaturate(auVar10,0);
      auVar10 = vectorConvertToSignedFixedPointWordSaturate(auVar11,0);
      auVar8 = vectorCompareEqualToUnsignedWord
                         (auVar9,auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60);
      auVar8 = vectorConditionalSelect(auVar9,auVar10,auVar8);
      pcVar4 = (char *)help_msg_string_by_index
                                 (aSStack_70[(int)(lVar5 + (0x12 - lVar5 >> 0x3f & 0x12U - lVar5))])
      ;
      strcpy(&g_toastMsgBuff,pcVar4);
      auVar8 = auVar8 >> 0x60 & (GPiece<16>)0xffffffff;
      g_toastMsgTimer =
           storeVectorElementWordIndexed
                     (auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60,0x5c80,0xa10000);
    }
  }
  return;
}


// 0x0112dc0 (0x50 bytes)
void MB_UnlockTrophy(TROPHIES_ENUM trophy)

{
  if (*(int *)(TrophyMgr + (int)((longlong)(char)trophy << 3) + 0xc) == 0) {
    idol::NPTrophyUnlock(TrophyMgr,trophy);
  }
  return;
}


// 0x0112e18 (0x360 bytes)
// strings: 0096c165: 'None' | 0071fb2c: '������������'

void MB_UnlockItem(longlong param_1,char param_2)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  char *__src;
  longlong lVar8;
  int iVar9;
  uint *puVar10;
  ulonglong uVar11;
  GPiece<16> auVar12;
  GPiece<16> auVar13;
  GPiece<16> auVar14;
  GPiece<16> auVar15;
  GPiece<16> auVar16;
  undefined4 in_vr31_32_0;
  undefined4 in_vr31_32_1;
  undefined4 in_vr31_32_2;
  undefined4 in_vr31_32_3;
  
  puVar7 = (undefined4 *)(ZEXT48(&stack0x00000000) - 0x40);
  puVar7[3] = in_vr31_32_3;
  puVar7[2] = in_vr31_32_2;
  puVar7[1] = in_vr31_32_1;
  *puVar7 = in_vr31_32_0;
  uVar3 = (uint)param_1;
  CHAR_ARRAY_0096c165[uVar3] = '\x01';
  bVar1 = (&UnlockableItems.field0_0x0)[uVar3];
  if (*(StringId *)
       (&DAT_00729380 +
       (int)(param_1 + 0x25 + (ZERO_MASK((uint)bVar1) & param_1 - (param_1 + 0x25))
            ) * 4) != ~STR_TO_USE_YOUR_BOMB_0x0000) {
    auVar13 = ZEXT416(0xffffffff);
    auVar12 = auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60;
    auVar13 = ZEXT416(0xffffffff);
    auVar16 = auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60;
    auVar12 = vectorShiftLeftIntegerWord(auVar12,auVar12);
    auVar13 = loadVectorLeftIndexed(ZEXT48(&stack0x00000000) - 0x40,0x112e10);
    auVar14 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar13 = auVar13 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar15 = loadVectorLeftIndexed(4,0x112e10);
    auVar12 = vectorMultiplyAddFloatingPoint
                        (auVar14,auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60,
                         auVar12);
    auVar13 = auVar15 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar15 = vectorShiftLeftIntegerWord(auVar16,auVar16);
    auVar14 = vectorMultiplyAddFloatingPoint
                        (auVar14,auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60,
                         auVar15);
    auVar13 = ZEXT416(0xffffffff);
    auVar12 = vectorConvertToSignedFixedPointWordSaturate(auVar12,0);
    auVar14 = vectorConvertToSignedFixedPointWordSaturate(auVar14,0);
    auVar13 = vectorCompareEqualToUnsignedWord
                        (auVar12,auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60);
    auVar13 = vectorConditionalSelect(auVar12,auVar14,auVar13);
    __src = (char *)help_msg_string_by_index
                              (*(StringId *)
                                (&DAT_00729380 +
                                (int)(param_1 + 0x25 +
                                     (ZERO_MASK((uint)bVar1) &
                                     param_1 - (param_1 + 0x25))) * 4));
    strcpy(&g_toastMsgBuff,__src);
    auVar13 = auVar13 >> 0x60 & (GPiece<16>)0xffffffff;
    bVar1 = (&UnlockableItems.field0_0x0)[uVar3];
    g_toastMsgTimer =
         storeVectorElementWordIndexed
                   (auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60,0x5c80,0xa10000);
  }
  if (bVar1 != 0) {
    return;
  }
  lVar8 = 0;
  iVar9 = 9;
  CHAR_ARRAY_0096c165[uVar3] = '\x01';
  uVar11 = 0;
  (&UnlockableItems.field0_0x0)[uVar3] = '\x01';
  do {
    if (iVar9 != 0x16 && iVar9 != 0xc) {
      lVar8 = lVar8 + ((ulonglong)
                       (LZCOUNT((uint)LZCOUNT((uint)(&UnlockableItems.field0_0x0)[iVar9]) >> 5 ^ 1)
                       << 0x20) >> 0x25 ^ 1);
    }
    iVar9 = iVar9 + 1;
  } while (iVar9 < 0x1a);
  if ((0xe < (int)lVar8) && (*(int *)(TrophyMgr + 100) == 0)) {
    idol::NPTrophyUnlock(TrophyMgr,GADGETEER);
  }
  iVar9 = (int)(param_1 << 3) * 3;
  if (*(short *)((int)&DAT_00737d38 + iVar9) != 0) {
    iVar4 = (int)(param_1 << 2);
    uVar2 = *(ushort *)(&DAT_00737d42 + iVar9);
    iVar9 = *(int *)((int)&currentAmmoArray.field0_0x0 + iVar4);
    *(uint *)((int)&currentAmmoArray.field0_0x0 + iVar4) =
         (uint)uVar2 +
         ((uint)((longlong)((ulonglong)uVar2 - (longlong)iVar9) >> 0x3f) & iVar9 - (uint)uVar2);
  }
  iVar9 = 0;
  puVar10 = &DAT_00737bf0;
  while ((uVar3 == 0 || (*puVar10 != uVar3))) {
    iVar9 = iVar9 + 1;
    puVar10 = puVar10 + 1;
    if (0x13 < iVar9) goto LAB_00113080;
  }
  for (iVar9 = 0;
      g_purchasableVendorItems[iVar9] != 0xff &&
      ((byte)g_purchasableVendorItems[iVar9] & 0x3f) != uVar3; iVar9 = iVar9 + 1) {
  }
  g_purchasableVendorItems[iVar9] = (byte)param_1 | 0x40;
LAB_00113080:
  uVar5 = DAT_0096bd98;
  uVar6 = DAT_0096bda4;
  if (param_2 != '\0') {
    iVar9 = (&DAT_00721008)[uVar3 * 4 - (int)(param_1 * -0xf)];
    uVar5 = uVar3;
    if (((iVar9 != 0) && (uVar5 = DAT_0096bd98, uVar6 = uVar3, iVar9 != 3)) &&
       (uVar6 = DAT_0096bda4, iVar9 == 2)) {
      DAT_0096bda0 = uVar3;
    }
  }
  DAT_0096bda4 = uVar6;
  DAT_0096bd98 = uVar5;
  if ((&DAT_00721008)[uVar3 * 4 - (int)(param_1 * -0xf)] != 0) {
    return;
  }
  puVar10 = UINT_ARRAY_0096c1dc;
  do {
    if (*puVar10 == 0) break;
    uVar11 = uVar11 + 1;
    puVar10 = puVar10 + 1;
  } while ((int)uVar11 < 8);
  if (7 < (int)uVar11) {
    return;
  }
  *(uint *)((int)UINT_ARRAY_0096c1dc + (int)((uVar11 & 0xffffffff) << 2)) = uVar3;
  return;
}


// 0x01131a8 (0xbc bytes)
void SetNtscPalTiming(void)

{
  bool bVar1;
  
  bVar1 = *(int *)(g_viewMtxPtr + 0x18) != 0x3c;
  if (bVar1) {
    DAT_0071f420 = 6;
    DAT_0071f408 = 1.2;
    DAT_0071f40c = 1.44;
    animationSpeed = 0.8333333;
    g_FrameTime = 0.020000001;
    DAT_0071f418 = 0x39d1b718;
    DAT_0071f41c = 0x370637bd;
    DAT_0071f424 = 0.02;
  }
  else {
    DAT_0071f420 = 5;
    animationSpeed = 1.0;
    DAT_0071f424 = 0.016666668;
    DAT_0071f418 = 0x3991a2b4;
    DAT_0071f41c = 0x369b5837;
    DAT_0071f408 = animationSpeed;
    DAT_0071f40c = animationSpeed;
    g_FrameTime = DAT_0071f424;
  }
  g_IsPal = (uint)bVar1;
  return;
}


// 0x0113288 (0x22c bytes)
void ____MB_BuildScaledRotMtx
               (double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined8 uStack00000030;
  undefined8 uStack00000038;
  undefined8 uStack00000050;
  undefined8 uStack00000058;
  GPiece<64> local_1a0;
  GPiece<64> auStack_160;
  GPiece<64> auStack_120;
  float afStack_e0 [16];
  GPiece<64> auStack_a0;
  
  uStack00000030 = param_2;
  uStack00000038 = param_3;
  uStack00000050 = param_6;
  uStack00000058 = param_7;
  FastVecMtx4Mul(auStack_160,local_1a0,local_1a0);
  dVar12 = 3.141592502593994;
  fVar1 = (float)(param_1 + 1.570796251296997);
  dVar11 = -3.141592502593994;
  dVar10 = -0.16666656732559204;
  dVar9 = 0.008333025500178337;
  dVar8 = -0.0001980741071747616;
  dVar7 = 2.601886990305502e-06;
  fVar2 = 3.1415925 - fVar1;
  if (fVar1 - (3.1415925 - fVar1) < 0.0) {
    fVar2 = fVar1;
  }
  fVar3 = -3.1415925 - fVar1;
  if ((-3.1415925 - fVar1) - fVar2 < 0.0) {
    fVar3 = fVar2;
  }
  fVar4 = fVar3 * fVar3;
  fVar1 = fVar4 * fVar4 * fVar3;
  fVar2 = fVar4 * fVar1;
  FastMtxScale
            ((double)(1.0 - (fVar4 * fVar2 * 2.601887e-06 +
                            fVar2 * -0.0001980741 +
                            fVar1 * 0.0083330255 + fVar4 * fVar3 * -0.16666657 + fVar3)),afStack_e0,
             auStack_160);
  dVar5 = (double)(float)(dVar12 - param_1);
  if (param_1 - (double)(float)(dVar12 - param_1) < 0.0) {
    dVar5 = param_1;
  }
  dVar12 = (double)(float)(dVar11 - param_1);
  if ((double)(float)(dVar11 - param_1) - dVar5 < 0.0) {
    dVar12 = dVar5;
  }
  dVar11 = (double)(float)(dVar12 * dVar12);
  dVar6 = (double)(float)(dVar11 * (double)(float)(dVar11 * dVar12));
  dVar5 = (double)(float)(dVar11 * dVar6);
  FastMtxScale
            ((double)(float)((double)(float)(dVar11 * dVar5) * dVar7 +
                            (double)(float)(dVar5 * dVar8 +
                                           (double)(float)(dVar6 * dVar9 +
                                                          (double)(float)((double)(float)(dVar11 * 
                                                  dVar12) * dVar10 + dVar12)))),auStack_120,
             local_1a0);
  FastVecAdd(auStack_120,auStack_120,afStack_e0);
  FastMtx4Identity(afStack_e0);
  FastVecAdd(auStack_a0,auStack_120,afStack_e0);
  MB_MtxToEuler((int)auStack_a0,(MobyInstance *)&stack0x00000050);
  return;
}


// 0x01134c8 (0x120 bytes)
void MB_compressVector(float *v,int *out)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  int iVar4;
  Vec4 local_40;
  longlong local_30;
  
  fVar1 = ABS(v[1]);
  if (ABS(v[1]) - ABS(*v) < 0.0) {
    fVar1 = ABS(*v);
  }
  fVar2 = ABS(v[2]);
  if (ABS(v[2]) - fVar1 < 0.0) {
    fVar2 = fVar1;
  }
  lVar3 = FastDoubleToInt((double)(fVar2 * 10000.0 * 0.015873017));
  lVar3 = lVar3 + (0xff - lVar3 >> 0x3f & 0xffU - lVar3);
  iVar4 = (int)lVar3;
  local_30 = (longlong)(int)(iVar4 + ((uint)(lVar3 + -1 >> 0x3f) & 1U - iVar4));
  local_40.w = (float)local_30;
  fVar1 = 1.0 / (local_40.w * 0.0001);
  local_40.x = *v * fVar1 + 127.0;
  local_40.y = v[1] * fVar1 + 127.0;
  local_40.z = v[2] * fVar1 + 127.0;
  iVar4 = FastVecToPackedChars(&local_40);
  *out = iVar4;
  return;
}


// 0x01135f0 (0x9c bytes)
void MB_decompressVector(float *out,int *in)

{
  float fVar1;
  double dVar2;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  
  dVar2 = 127.0;
  FastVecFromPackedBits(&local_30,*in);
  fVar1 = local_24 * 0.0001;
  out[3] = local_24;
  *out = (float)((double)local_30 - dVar2) * fVar1;
  out[1] = (float)((double)local_2c - dVar2) * fVar1;
  out[2] = (float)((double)local_28 - dVar2) * fVar1;
  return;
}


// 0x01136c8 (0x710 bytes)
// inlined: FastAtan2 @0x113a3c, FastAtan2 @0x113c88
/* [p2_mobyutil] random wander within MeanderVars (ang 0x24, timer 0x28, min/maxTimer 0x2c/0x2e),
   CollMovingSphere
   [p2_mobyutil] random wander within MeanderVars (ang 0x24, timer 0x28, min/maxTimer 0x2c/0x2e),
   CollMovingSphere */

void DoMeander(undefined8 param_1,undefined8 param_2,int param_3,float *param_4,
                        int param_5)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  short sVar9;
  short sVar10;
  ulonglong *puVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  ulonglong uVar17;
  uint uVar20;
  int iVar21;
  int iVar22;
  longlong lVar18;
  longlong lVar19;
  int iVar23;
  longlong lVar24;
  float *pfVar25;
  ulonglong uVar26;
  longlong lVar27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar28;
  double dVar29;
  double dVar30;
  ulonglong in_f30;
  ulonglong in_f31;
  double dVar31;
  float fVar32;
  
  uVar17 = ZEXT48(&stack0x00000000);
  lVar19 = uVar17 - 0x140;
  puVar11 = (ulonglong *)lVar19;
  *puVar11 = uVar17;
  puVar11[0x2a] = in_LR;
  puVar11[0x26] = in_f30;
  puVar11[0x27] = in_f31;
  puVar11[0x25] = unaff_r31;
  puVar11[0x24] = unaff_r30;
  sVar9 = *(short *)(param_4 + 10);
  puVar11[0x23] = unaff_r29;
  puVar11[0x22] = unaff_r28;
  if (sVar9 == 0) {
    uVar20 = rand();
    puVar11[0x1f] = (longlong)(int)((int)uVar20 >> 0xf & 0xfff);
    sVar9 = *(short *)(param_4 + 0xb);
    sVar10 = *(short *)((int)param_4 + 0x2e);
    fVar32 = (float)(longlong)puVar11[0x1f] * 1.8325956 * 0.00024414062 + 0.7853982;
    if ((uVar20 >> 0xf & 1) != 0) {
      fVar32 = -((float)(longlong)puVar11[0x1f] * 1.8325956 * 0.00024414062 + 0.7853982);
    }
    param_4[9] = param_4[9] + fVar32;
    iVar21 = rand();
    iVar22 = (int)sVar10 - (int)sVar9;
    uVar20 = iVar21 >> 0xf & 0x7fff;
    sVar10 = (short)((int)uVar20 / (iVar22 + 1));
    *(undefined2 *)(param_4 + 10) = 1;
    *(short *)((int)param_4 + 0x2a) = ((short)uVar20 - (sVar10 * (short)iVar22 + sVar10)) + sVar9;
  }
  else {
    fVar32 = DeltAng(param_4[9],param_4[6],(float *)(param_3 + 0x48),(int)param_4,param_5,0);
    iVar21 = FastDecTimerS16((double)fVar32,(int)param_4 + 0x2a);
    if (iVar21 != 0) {
      *(undefined2 *)(param_4 + 10) = 0;
    }
  }
  fVar32 = *(float *)(param_3 + 0x48);
  fVar1 = fVar32 + 1.5707963;
  fVar4 = 3.1415925 - fVar32;
  if (fVar32 - (3.1415925 - fVar32) < 0.0) {
    fVar4 = fVar32;
  }
  fVar5 = 3.1415925 - fVar1;
  if (fVar1 - (3.1415925 - fVar1) < 0.0) {
    fVar5 = fVar1;
  }
  fVar7 = -3.1415925 - fVar32;
  if ((-3.1415925 - fVar32) - fVar4 < 0.0) {
    fVar7 = fVar4;
  }
  fVar32 = -3.1415925 - fVar1;
  if ((-3.1415925 - fVar1) - fVar5 < 0.0) {
    fVar32 = fVar5;
  }
  fVar8 = fVar7 * fVar7;
  fVar12 = fVar32 * fVar32;
  fVar15 = fVar8 * fVar8 * fVar7;
  fVar1 = *(float *)(param_3 + 0x10);
  fVar13 = fVar12 * fVar12 * fVar32;
  fVar16 = fVar8 * fVar15;
  uVar2 = *(undefined4 *)(param_3 + 0x18);
  uVar3 = *(undefined4 *)(param_3 + 0x1c);
  fVar14 = fVar12 * fVar13;
  fVar4 = param_4[5];
  fVar5 = param_4[4];
  *(float *)((int)puVar11 + 0x74) =
       (fVar8 * fVar16 * 2.601887e-06 +
       fVar16 * -0.0001980741 + fVar15 * 0.0083330255 + fVar8 * fVar7 * -0.16666657 + fVar7) * fVar4
       + *(float *)(param_3 + 0x14);
  *(undefined4 *)((int)puVar11 + 0x7c) = uVar3;
  *(undefined4 *)(puVar11 + 0xf) = uVar2;
  *(float *)(puVar11 + 0xe) =
       (fVar12 * fVar14 * 2.601887e-06 +
       fVar14 * -0.0001980741 + fVar13 * 0.0083330255 + fVar12 * fVar32 * -0.16666657 + fVar32) *
       fVar4 + fVar1;
  iVar21 = CollMovingSphere(param_1,(double)fVar5,param_2,0x3fe0c15240000000,param_3,param_3 + 0x10,
                            uVar17 - 0xd0);
  uVar2 = *(undefined4 *)(param_3 + 0x10);
  uVar3 = *(undefined4 *)(param_3 + 0x14);
  *(undefined4 *)(puVar11 + 0x10) = uVar2;
  uVar6 = *(undefined4 *)(param_3 + 0x1c);
  *(undefined4 *)((int)puVar11 + 0x84) = uVar3;
  *(undefined4 *)((int)puVar11 + 0x8c) = uVar6;
  *(undefined4 *)(puVar11 + 0x11) = 0x3c23d70a;
  *(undefined4 *)(puVar11 + 0x12) = uVar2;
  *(undefined4 *)((int)puVar11 + 0x94) = uVar3;
  *(undefined4 *)((int)puVar11 + 0x9c) = uVar6;
  *(float *)(puVar11 + 0x13) = *(float *)(param_3 + 0x18) + 0.5;
  iVar22 = CollLine(uVar17 - 0xb0,uVar17 - 0xc0,2,0,0);
  dVar29 = 0.0;
  fVar32 = *(float *)(param_3 + 0x10);
  fVar1 = *param_4;
  fVar4 = *(float *)(param_3 + 0x14);
  fVar5 = param_4[1];
  fVar7 = param_4[7];
  fVar8 = param_4[8];
  dVar31 = (double)param_4[9];
  dVar30 = dVar29;
  if (iVar22 != 0) {
    dVar30 = (double)g_CollOutput.ip.z;
  }
  fVar13 = fVar4 - fVar5;
  fVar12 = fVar32 - fVar1;
  *(float *)(param_3 + 0x18) = (float)dVar30;
  if ((iVar21 == 0) || (fVar7 < SQRT(fVar12 * fVar12 + fVar13 * fVar13))) {
    fVar1 = fVar1 - fVar32;
    fVar5 = fVar5 - fVar4;
    fVar7 = ABS(fVar1);
    fVar4 = ABS(fVar5);
    *(float *)((int)puVar11 + 0xac) = fVar1;
    *(float *)(puVar11 + 0x16) = fVar5;
    *(float *)((int)puVar11 + 0xb4) = fVar7 - fVar4;
    uVar26 = (ulonglong)(*(uint *)((int)puVar11 + 0xac) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar11 + 0xb4) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar11 + 0x16) >> 0x1d) & 4;
    fVar32 = ABS(*(float *)((int)puVar11 + 0xac));
    if (*(float *)((int)puVar11 + 0xb4) - 0.0 < 0.0) {
      fVar32 = fVar4;
    }
    fVar1 = *(float *)(&g_atanQuadrantTable + (int)(uVar26 << 2));
    fVar4 = ABS(*(float *)(puVar11 + 0x16));
    if (*(float *)((int)puVar11 + 0xb4) - 0.0 < 0.0) {
      fVar4 = fVar7;
    }
    fVar5 = *(float *)(((uint)(uVar26 << 2) | 0x735900) + 4);
    if (0.0 < fVar32) {
      lVar18 = uVar17 - 0x130;
      lVar24 = uVar17 - 0x68;
      lVar27 = uVar17 - 0x58;
      lVar28 = 2;
      fVar32 = (fVar4 - fVar32) / (fVar4 + fVar32);
      fVar4 = fVar32 * fVar32;
      *(float *)((int)puVar11 + 0xe4) = fVar32;
      *(float *)((int)puVar11 + 0xdc) = fVar32;
      *(float *)(puVar11 + 0x1c) = fVar32;
      *(float *)(puVar11 + 0x1b) = fVar32;
      fVar32 = fVar4 * fVar4;
      *(float *)((int)puVar11 + 0xdc) = *(float *)((int)puVar11 + 0xdc) * fVar4;
      *(float *)(puVar11 + 0x1c) = *(float *)(puVar11 + 0x1c) * fVar32;
      *(float *)((int)puVar11 + 0xe4) = *(float *)((int)puVar11 + 0xe4) * fVar32 * fVar4;
      do {
        *(float *)((int)lVar18 + 0xd8) = *(float *)((int)lVar18 + 200) * fVar32 * fVar32;
        iVar21 = (int)lVar24;
        lVar18 = lVar18 + 8;
        lVar24 = lVar24 + 8;
        *(float *)((int)lVar27 + 4) = *(float *)(iVar21 + 4) * fVar32 * fVar32;
        lVar27 = lVar27 + 8;
        lVar28 = lVar28 + -1;
      } while (lVar28 != 0);
      lVar28 = 4;
      lVar27 = uVar17 - 0x68;
      pfVar25 = (float *)&DAT_007358e0;
      lVar18 = lVar19;
      lVar24 = lVar27;
      do {
        fVar32 = *pfVar25;
        fVar4 = pfVar25[1];
        pfVar25 = pfVar25 + 2;
        *(float *)((int)lVar18 + 0xd8) = *(float *)((int)lVar18 + 0xd8) * fVar32;
        lVar18 = lVar18 + 8;
        *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar4;
        lVar24 = lVar24 + 8;
        lVar28 = lVar28 + -1;
      } while (lVar28 != 0);
      lVar18 = 2;
      do {
        iVar21 = (int)lVar19;
        iVar22 = (int)lVar27;
        lVar19 = lVar19 + 0x10;
        lVar27 = lVar27 + 0x10;
        dVar29 = (double)((float)(dVar29 + (double)*(float *)(iVar21 + 0xd8)) +
                          *(float *)(iVar22 + 4) + *(float *)(iVar22 + 8) + *(float *)(iVar22 + 0xc)
                         );
        lVar18 = lVar18 + -1;
      } while (lVar18 != 0);
      dVar29 = (double)((float)(dVar29 + 0.7853981852531433) * fVar1 + fVar5);
    }
    param_4[9] = (float)dVar29;
    fVar32 = animationSpeed;
    puVar11[0x1f] = (longlong)(int)(animationSpeed * 30.5);
    iVar21 = *(int *)((int)puVar11 + 0xfc);
    puVar11[0x1f] = (longlong)(int)(fVar32 * 90.5);
    iVar22 = *(int *)((int)puVar11 + 0xfc);
    iVar23 = rand();
    iVar22 = iVar22 - iVar21;
    uVar20 = iVar23 >> 0xf & 0x7fff;
    sVar9 = (short)((int)uVar20 / (iVar22 + 1));
    *(undefined2 *)(param_4 + 10) = 1;
    *(short *)((int)param_4 + 0x2a) =
         ((short)uVar20 - (sVar9 * (short)iVar22 + sVar9)) + (short)iVar21;
  }
  else {
    fVar4 = fVar4 - g_heroPosition.y;
    fVar32 = fVar32 - g_heroPosition.x;
    fVar1 = SQRT(fVar32 * fVar32 + fVar4 * fVar4);
    if (fVar1 < fVar8) {
      *(float *)(puVar11 + 0x14) = fVar32;
      *(float *)((int)puVar11 + 0xa4) = fVar4;
      dVar30 = (double)(fVar1 / fVar8);
      *(float *)(puVar11 + 0x15) = ABS(fVar32) - ABS(fVar4);
      uVar26 = (ulonglong)(*(uint *)(puVar11 + 0x14) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar11 + 0x15) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar11 + 0xa4) >> 0x1d) & 4;
      fVar1 = ABS(*(float *)(puVar11 + 0x14));
      if (*(float *)(puVar11 + 0x15) - 0.0 < 0.0) {
        fVar1 = ABS(fVar4);
      }
      fVar5 = *(float *)(&g_atanQuadrantTable + (int)(uVar26 << 2));
      fVar4 = *(float *)(((uint)(uVar26 << 2) | 0x735900) + 4);
      fVar7 = ABS(*(float *)((int)puVar11 + 0xa4));
      if (*(float *)(puVar11 + 0x15) - 0.0 < 0.0) {
        fVar7 = ABS(fVar32);
      }
      if (0.0 < fVar1) {
        lVar18 = uVar17 - 0x130;
        lVar27 = uVar17 - 0x78;
        lVar24 = uVar17 - 0x88;
        lVar28 = 2;
        fVar32 = (fVar7 - fVar1) / (fVar7 + fVar1);
        fVar1 = fVar32 * fVar32;
        *(float *)((int)puVar11 + 0xc4) = fVar32;
        *(float *)((int)puVar11 + 0xbc) = fVar32;
        *(float *)(puVar11 + 0x18) = fVar32;
        *(float *)(puVar11 + 0x17) = fVar32;
        fVar32 = fVar1 * fVar1;
        *(float *)((int)puVar11 + 0xbc) = *(float *)((int)puVar11 + 0xbc) * fVar1;
        *(float *)(puVar11 + 0x18) = *(float *)(puVar11 + 0x18) * fVar32;
        *(float *)((int)puVar11 + 0xc4) = *(float *)((int)puVar11 + 0xc4) * fVar32 * fVar1;
        do {
          *(float *)((int)lVar18 + 0xb8) = *(float *)((int)lVar18 + 0xa8) * fVar32 * fVar32;
          iVar21 = (int)lVar24;
          lVar24 = lVar24 + 8;
          lVar18 = lVar18 + 8;
          *(float *)((int)lVar27 + 4) = *(float *)(iVar21 + 4) * fVar32 * fVar32;
          lVar27 = lVar27 + 8;
          lVar28 = lVar28 + -1;
        } while (lVar28 != 0);
        lVar28 = 4;
        lVar27 = uVar17 - 0x88;
        pfVar25 = (float *)&DAT_007358e0;
        lVar18 = lVar19;
        lVar24 = lVar27;
        do {
          fVar32 = *pfVar25;
          fVar1 = pfVar25[1];
          pfVar25 = pfVar25 + 2;
          *(float *)((int)lVar18 + 0xb8) = *(float *)((int)lVar18 + 0xb8) * fVar32;
          lVar18 = lVar18 + 8;
          *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar1;
          lVar24 = lVar24 + 8;
          lVar28 = lVar28 + -1;
        } while (lVar28 != 0);
        lVar18 = 2;
        do {
          iVar21 = (int)lVar19;
          lVar19 = lVar19 + 0x10;
          iVar22 = (int)lVar27;
          lVar27 = lVar27 + 0x10;
          dVar29 = (double)((float)(dVar29 + (double)*(float *)(iVar21 + 0xb8)) +
                            *(float *)(iVar22 + 4) + *(float *)(iVar22 + 8) +
                           *(float *)(iVar22 + 0xc));
          lVar18 = lVar18 + -1;
        } while (lVar18 != 0);
        dVar29 = (double)((float)(dVar29 + 0.7853981852531433) * fVar5 + fVar4);
      }
      dVar29 = (double)FastDiffRots(dVar29,dVar31);
      dVar30 = (double)FastWrapRot((float)dVar31,(float)(dVar30 * dVar29));
      param_4[9] = (float)dVar30;
    }
  }
  return;
}


// 0x0113de0 (0xa0 bytes)
float MB_RoundToDecimals(float val,int unused,int nDigits)

{
  int iVar1;
  int iVar2;
  double dVar3;
  
  iVar2 = 1;
  iVar1 = 1;
  if (0 < nDigits) {
    do {
      nDigits = nDigits + -1;
      iVar1 = iVar2 * 10;
      iVar2 = iVar1;
    } while (0 < nDigits);
  }
  dVar3 = (double)(longlong)iVar1;
  iVar1 = FastDoubleToInt
                    ((double)(float)((double)(1.0 / (float)(dVar3 * 2.0) + val) * dVar3));
  return (float)((double)(longlong)iVar1 / dVar3);
}


// 0x0113e88 (0x108 bytes)
int MB_MayaFrameTrigger(float frame,MobyInstance *pMoby)

{
  int iVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  dVar3 = (double)frame;
  dVar4 = (double)BlendAnimFrame(pMoby);
  dVar5 = 10000.0;
  dVar6 = 4.999999873689376e-05;
  iVar1 = FastDoubleToInt((double)(((float)(dVar4 - dVar3) + 5e-05) * 10000.0));
  dVar7 = (double)(float)((double)(longlong)iVar1 / dVar5);
  iVar1 = FastDoubleToInt
                    ((double)(float)((double)(float)((double)pMoby->unk58 *
                                                     (double)pMoby->frameSpeed + dVar6) * dVar5));
  iVar2 = 0;
  if ((dVar3 <= dVar4) && (dVar7 < (double)(float)((double)(longlong)iVar1 / dVar5))) {
    iVar2 = 1;
  }
  return iVar2;
}


// 0x0113fa0 (0x1a0 bytes)
// inlined: FastRSqrt @0x113fec
undefined8 MB_LineCrossesSpline(longlong param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  int *piVar11;
  int iVar12;
  bool bVar13;
  
  fVar1 = param_2[1];
  fVar4 = param_3[1] - fVar1;
  fVar2 = *param_2;
  fVar5 = *param_3 - fVar2;
  fVar6 = fVar5 * fVar5 + fVar4 * fVar4;
  fVar7 = 1.0 / SQRT(fVar6);
  fVar10 = SQRT(fVar6);
  iVar12 = 1;
  fVar7 = -(fVar6 * fVar7 * fVar7 - 1.0) * fVar7 * 0.5 + fVar7;
  fVar7 = -(fVar6 * fVar7 * fVar7 - 1.0) * fVar7 * 0.5 + fVar7;
  piVar11 = *(int **)((int)Splines + (int)(param_1 << 2));
  fVar7 = (-(fVar6 * fVar7 * fVar7 - 1.0) * fVar7 * 0.5 + fVar7) / fVar10;
  fVar6 = (float)piVar11[4] - fVar2;
  iVar3 = *piVar11;
  fVar8 = param_3[3] * fVar6 + (float)piVar11[7];
  fVar5 = fVar7 * fVar5;
  fVar7 = fVar7 * fVar4;
  fVar4 = 0.0;
  if (0.0 - fVar10 < 0.0) {
    fVar4 = fVar5;
  }
  fVar9 = 0.0;
  if (0.0 - fVar10 < 0.0) {
    fVar9 = fVar7;
  }
  if (fVar10 - 0.0 < 0.0) {
    fVar4 = fVar5;
  }
  if (fVar10 - 0.0 < 0.0) {
    fVar9 = fVar7;
  }
  fVar5 = fVar4 * fVar6 + fVar9 * ((float)piVar11[5] - fVar1);
  fVar6 = fVar9 * fVar6 + -(fVar4 * ((float)piVar11[5] - fVar1));
  if (1 < iVar3) {
    do {
      bVar13 = fVar8 != 0.0;
      fVar7 = (float)piVar11[8] - fVar2;
      fVar8 = param_3[3] * fVar7 + (float)piVar11[0xb];
      fVar10 = fVar4 * fVar7 + fVar9 * ((float)piVar11[9] - fVar1);
      fVar7 = fVar9 * fVar7 + -(fVar4 * ((float)piVar11[9] - fVar1));
      if ((((bVar13) || (fVar8 != 0.0)) && (fVar7 * fVar6 < 0.0)) &&
         (fVar5 = -(((fVar5 - fVar10) / (fVar6 - fVar7)) * fVar7) + fVar10,
         fVar5 < 1.0 && 0.0 < fVar5)) {
        return 1;
      }
      iVar12 = iVar12 + 1;
      fVar5 = fVar10;
      fVar6 = fVar7;
      piVar11 = piVar11 + 4;
    } while (iVar12 < iVar3);
  }
  return 0;
}


// 0x0114148 (0x240 bytes)
uint MB_SplineCrossCheck
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
            iVar3 = MB_LineCrossesSpline(*puVar7,param_6,piVar8);
            if (iVar3 != 0) {
              bVar2 = true;
            }
          }
          else {
            iVar3 = MB_LineCrossesSpline(*puVar7,local_a0,piVar8);
            if (iVar3 == 0) {
              iVar3 = MB_LineCrossesSpline(*puVar7,local_90,piVar8);
              if (iVar3 != 0) {
                bVar2 = true;
              }
            }
            else {
              bVar2 = true;
            }
          }
          if (bVar2) goto LAB_00114320;
          iVar6 = iVar6 + 1;
          puVar7 = puVar7 + 1;
        } while (iVar6 < param_3);
      }
      uVar4 = uVar4 | 1 << (uVar5 & 0x3f);
LAB_00114320:
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < *piVar1);
  }
  return uVar4;
}


// 0x0114388 (0x84 bytes)
uint MB_SplineSegmentsReachable(longlong param_1,uint param_2,uint param_3)

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
    } while ((int)uVar3 < 0x20);
    iVar1 = iVar1 + 1;
    param_3 = uVar4;
  } while (iVar1 < 0x20);
  return 0;
}


// 0x011440c (0x1c0 bytes)
void MB_SplineMarkCrossings(undefined4 *param_1,int param_2,longlong param_3)

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
              iVar4 = MB_LineCrossesSpline(*puVar11,piVar7,piVar9);
              if (iVar4 != 0) goto LAB_00114548;
              iVar6 = iVar6 + 1;
              puVar11 = puVar11 + 1;
            } while (iVar6 < param_2);
          }
          *puVar10 = *puVar10 | 1 << (uVar13 & 0x3f);
          piVar2[0xb] = piVar2[0xb] | 1 << (uVar3 & 0x3f);
LAB_00114548:
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


// 0x01145d8 (0x274 bytes)
// inlined: FastRSqrt @0x1146b0
int MB_PushOutOfSplineWalls
              (double param_1,longlong param_2,undefined8 param_3,float *param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int *piVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  int iVar9;
  int iVar10;
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
  
  dVar19 = (double)*param_4;
  dVar18 = (double)param_4[1];
  iVar8 = 0;
  iVar9 = 0;
  piVar5 = *(int **)((int)Splines + (int)(param_2 << 2));
  fVar3 = param_4[2];
  fVar4 = param_4[3];
  if (0 < *piVar5 + -1) {
    iVar10 = 0;
    dVar12 = 0.0;
    do {
      if ((*(int *)((int)piVar5 + iVar10 + 0x1c) != 0) ||
         (*(int *)((int)piVar5 + iVar10 + 0x2c) != 0)) {
        dVar14 = (double)*(float *)((int)piVar5 + iVar10 + 0x14);
        dVar17 = (double)*(float *)((int)piVar5 + iVar10 + 0x10);
        fVar1 = (float)((double)*(float *)((int)piVar5 + iVar10 + 0x24) - dVar14);
        fVar2 = (float)((double)*(float *)((int)piVar5 + iVar10 + 0x20) - dVar17);
        dVar15 = (double)(float)(dVar19 - dVar17);
        dVar13 = (double)(float)(dVar18 - dVar14);
        fVar7 = fVar2 * fVar2 + fVar1 * fVar1;
        dVar11 = dVar12;
        dVar20 = dVar12;
        if (SQRT(fVar7) != 0.0) {
          fVar6 = 1.0 / SQRT(fVar7);
          fVar6 = -(fVar7 * fVar6 * fVar6 - 1.0) * fVar6 * 0.5 + fVar6;
          fVar6 = -(fVar7 * fVar6 * fVar6 - 1.0) * fVar6 * 0.5 + fVar6;
          fVar6 = -(fVar7 * fVar6 * fVar6 - 1.0) * fVar6 * 0.5 + fVar6;
          dVar11 = (double)(fVar6 * fVar2);
          dVar20 = (double)(fVar6 * fVar1);
        }
        if (ABS((double)(float)(dVar13 * dVar11 - (double)(float)(dVar15 * dVar20))) <= param_1) {
          fVar1 = (float)(dVar15 * dVar11 + (double)(float)(dVar13 * dVar20));
          if ((SQRT(fVar7) < fVar1) || (fVar1 < 0.0)) {
            dVar11 = (double)SQRT((float)(dVar15 * dVar15 + (double)(float)(dVar13 * dVar13)));
            if (dVar11 < param_1) {
              iVar9 = 1;
              dVar19 = (double)(float)(dVar13 * (double)(float)(param_1 / dVar11));
              dVar20 = (double)(float)(dVar15 * (double)(float)(param_1 / dVar11));
              dVar18 = dVar12;
              if (0.0 - dVar11 < 0.0) {
                dVar18 = dVar19;
              }
              dVar13 = dVar12;
              if (0.0 - dVar11 < 0.0) {
                dVar13 = dVar20;
              }
              if (dVar11 - 0.0 < 0.0) {
                dVar18 = dVar19;
              }
              if (dVar11 - 0.0 < 0.0) {
                dVar13 = dVar20;
              }
              dVar18 = (double)(float)(dVar18 + dVar14);
              dVar19 = (double)(float)(dVar13 + dVar17);
            }
          }
          else {
            fVar2 = SQRT((float)(dVar11 * dVar11 + (double)(float)(dVar20 * dVar20)));
            iVar9 = 1;
            dVar20 = (double)(float)((double)(fVar1 / fVar2) * dVar20);
            dVar19 = (double)(float)((double)(fVar1 / fVar2) * dVar11);
            dVar18 = dVar12;
            if (0.0 - fVar2 < 0.0) {
              dVar18 = dVar20;
            }
            dVar11 = dVar12;
            if (0.0 - fVar2 < 0.0) {
              dVar11 = dVar19;
            }
            if (fVar2 - 0.0 < 0.0) {
              dVar18 = dVar20;
            }
            if (fVar2 - 0.0 < 0.0) {
              dVar11 = dVar19;
            }
            fVar1 = (float)(dVar13 - dVar18);
            fVar2 = (float)(dVar15 - dVar11);
            dVar15 = (double)SQRT(fVar2 * fVar2 + fVar1 * fVar1);
            dVar20 = (double)((float)(param_1 / dVar15) * fVar1);
            dVar13 = (double)((float)(param_1 / dVar15) * fVar2);
            dVar19 = dVar12;
            if (0.0 - dVar15 < 0.0) {
              dVar19 = dVar20;
            }
            dVar16 = dVar12;
            if (0.0 - dVar15 < 0.0) {
              dVar16 = dVar13;
            }
            if (dVar15 - 0.0 < 0.0) {
              dVar19 = dVar20;
            }
            if (dVar15 - 0.0 < 0.0) {
              dVar16 = dVar13;
            }
            dVar18 = (double)(float)((double)(float)(dVar18 + dVar19) + dVar14);
            dVar19 = (double)(float)((double)(float)(dVar11 + dVar16) + dVar17);
          }
        }
      }
      iVar8 = iVar8 + 1;
      iVar10 = iVar10 + 0x10;
    } while (iVar8 < *piVar5 + -1);
    if (iVar9 != 0) {
      *param_5 = (float)dVar19;
      param_5[1] = (float)dVar18;
      param_5[2] = fVar3;
      param_5[3] = fVar4;
    }
  }
  return iVar9;
}


// 0x0114858 (0x4f8 bytes)
// inlined: FastRSqrt @0x114928, FastRSqrt @0x114aa4
void MB_CollideSplineWall
               (double param_1,longlong param_2,undefined8 param_3,float *param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  bool bVar9;
  int *piVar10;
  int iVar11;
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
  double dVar31;
  double dVar32;
  float local_c0;
  
  dVar26 = (double)param_4[1];
  local_c0 = *param_4;
  dVar14 = (double)local_c0;
  dVar27 = (double)param_4[2];
  fVar5 = param_4[3];
  dVar29 = (double)DAT_00969f74;
  dVar28 = (double)g_heroGravityDir;
  dVar13 = dVar26 * dVar29;
  dVar30 = (double)DAT_00969f78;
  piVar10 = *(int **)((int)Splines + (int)(param_2 << 2));
  iVar11 = 0;
  bVar9 = false;
  iVar6 = *piVar10;
  dVar19 = dVar27 * dVar30;
  if (0 < iVar6 + -1) {
    fVar1 = (float)(dVar30 * dVar30 +
                   (double)(float)(dVar28 * dVar28 + (double)(float)(dVar29 * dVar29)));
    fVar2 = 1.0 / SQRT(fVar1);
    fVar8 = SQRT(fVar1);
    fVar2 = -(fVar1 * fVar2 * fVar2 - 1.0) * fVar2 * 0.5 + fVar2;
    dVar18 = 0.0;
    fVar2 = -(fVar1 * fVar2 * fVar2 - 1.0) * fVar2 * 0.5 + fVar2;
    dVar15 = (double)(-(fVar1 * fVar2 * fVar2 - 1.0) * fVar2 * 0.5 + fVar2);
    do {
      if ((piVar10[7] != 0) || (piVar10[0xb] != 0)) {
        dVar32 = (double)(float)piVar10[5];
        dVar31 = (double)(float)piVar10[4];
        dVar12 = (double)(float)piVar10[6];
        fVar1 = (float)((double)(float)((double)(float)piVar10[10] - dVar12) * dVar30 +
                       (double)(float)((double)(float)((double)(float)piVar10[8] - dVar31) * dVar28
                                      + (double)(float)((double)(float)((double)(float)piVar10[9] -
                                                                       dVar32) * dVar29)));
        dVar25 = (double)(fVar1 * (float)(dVar15 * dVar29));
        dVar24 = (double)(fVar1 * (float)(dVar15 * dVar28));
        dVar16 = (double)(fVar1 * (float)(dVar15 * dVar30));
        dVar21 = dVar18;
        if (0.0 - fVar8 < 0.0) {
          dVar21 = dVar25;
        }
        dVar22 = dVar18;
        if (0.0 - fVar8 < 0.0) {
          dVar22 = dVar24;
        }
        dVar23 = dVar18;
        if (0.0 - fVar8 < 0.0) {
          dVar23 = dVar16;
        }
        if (fVar8 - 0.0 < 0.0) {
          dVar21 = dVar25;
        }
        if (fVar8 - 0.0 < 0.0) {
          dVar22 = dVar24;
        }
        if (fVar8 - 0.0 < 0.0) {
          dVar23 = dVar16;
        }
        fVar2 = (float)((double)(float)((double)(float)piVar10[9] - dVar32) - dVar21);
        fVar3 = (float)((double)(float)((double)(float)piVar10[8] - dVar31) - dVar22);
        fVar4 = (float)((double)(float)((double)(float)piVar10[10] - dVar12) - dVar23);
        fVar1 = (float)((double)(float)(dVar27 - dVar12) * dVar30 +
                       (double)(float)((double)(float)((double)local_c0 - dVar31) * dVar28 +
                                      (double)(float)((double)(float)(dVar26 - dVar32) * dVar29)));
        dVar24 = (double)(fVar1 * (float)(dVar15 * dVar30));
        dVar25 = (double)(fVar1 * (float)(dVar15 * dVar28));
        dVar16 = (double)(fVar1 * (float)(dVar15 * dVar29));
        fVar1 = fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2;
        dVar21 = dVar18;
        if (0.0 - fVar8 < 0.0) {
          dVar21 = dVar24;
        }
        dVar22 = dVar18;
        if (0.0 - fVar8 < 0.0) {
          dVar22 = dVar16;
        }
        dVar23 = dVar18;
        if (0.0 - fVar8 < 0.0) {
          dVar23 = dVar25;
        }
        if (fVar8 - 0.0 < 0.0) {
          dVar21 = dVar24;
        }
        if (fVar8 - 0.0 < 0.0) {
          dVar22 = dVar16;
        }
        if (fVar8 - 0.0 < 0.0) {
          dVar23 = dVar25;
        }
        dVar25 = (double)(float)((double)(float)(dVar27 - dVar12) - dVar21);
        dVar22 = (double)(float)((double)(float)(dVar26 - dVar32) - dVar22);
        dVar23 = (double)(float)((double)(float)((double)local_c0 - dVar31) - dVar23);
        dVar21 = dVar18;
        dVar16 = dVar18;
        dVar24 = dVar18;
        if (SQRT(fVar1) != 0.0) {
          fVar7 = 1.0 / SQRT(fVar1);
          fVar7 = -(fVar1 * fVar7 * fVar7 - 1.0) * fVar7 * 0.5 + fVar7;
          fVar7 = -(fVar1 * fVar7 * fVar7 - 1.0) * fVar7 * 0.5 + fVar7;
          fVar7 = -(fVar1 * fVar7 * fVar7 - 1.0) * fVar7 * 0.5 + fVar7;
          dVar24 = (double)(fVar7 * fVar3);
          dVar16 = (double)(fVar7 * fVar2);
          dVar21 = (double)(fVar7 * fVar4);
        }
        if (ABS((double)(float)((double)(float)(dVar22 * dVar24 - (double)(float)(dVar23 * dVar16))
                                * dVar30 +
                               (double)(float)((double)(float)(dVar25 * dVar16 -
                                                              (double)(float)(dVar22 * dVar21)) *
                                               dVar28 + (double)(float)((double)(float)(dVar23 * 
                                                  dVar21 - (double)(float)(dVar25 * dVar24)) *
                                                  dVar29)))) <= param_1) {
          fVar2 = (float)(dVar25 * dVar21 +
                         (double)(float)(dVar23 * dVar24 + (double)(float)(dVar22 * dVar16)));
          if ((SQRT(fVar1) < fVar2) || (fVar2 < 0.0)) {
            dVar21 = (double)SQRT((float)(dVar25 * dVar25 +
                                         (double)(float)(dVar23 * dVar23 +
                                                        (double)(float)(dVar22 * dVar22))));
            if (dVar21 < param_1) {
              dVar27 = (double)(float)(param_1 / dVar21);
              bVar9 = true;
              dVar26 = dVar18;
              if (0.0 - dVar21 < 0.0) {
                dVar26 = (double)(float)(dVar23 * dVar27);
              }
              dVar16 = dVar18;
              if (0.0 - dVar21 < 0.0) {
                dVar16 = (double)(float)(dVar25 * dVar27);
              }
              dVar24 = dVar18;
              if (0.0 - dVar21 < 0.0) {
                dVar24 = (double)(float)(dVar22 * dVar27);
              }
              if (dVar21 - 0.0 < 0.0) {
                dVar26 = (double)(float)(dVar23 * dVar27);
              }
              if (dVar21 - 0.0 < 0.0) {
                dVar16 = (double)(float)(dVar25 * dVar27);
              }
              if (dVar21 - 0.0 < 0.0) {
                dVar24 = (double)(float)(dVar22 * dVar27);
              }
              local_c0 = (float)(dVar26 + dVar31);
              dVar27 = (double)(float)(dVar16 + dVar12);
              dVar26 = (double)(float)(dVar24 + dVar32);
            }
          }
          else {
            fVar1 = SQRT((float)(dVar21 * dVar21 +
                                (double)(float)(dVar24 * dVar24 + (double)(float)(dVar16 * dVar16)))
                        );
            bVar9 = true;
            dVar27 = (double)(fVar2 / fVar1);
            dVar26 = dVar18;
            if (0.0 - fVar1 < 0.0) {
              dVar26 = (double)(float)(dVar27 * dVar16);
            }
            dVar20 = dVar18;
            if (0.0 - fVar1 < 0.0) {
              dVar20 = (double)(float)(dVar27 * dVar24);
            }
            dVar17 = dVar18;
            if (0.0 - fVar1 < 0.0) {
              dVar17 = (double)(float)(dVar27 * dVar21);
            }
            if (fVar1 - 0.0 < 0.0) {
              dVar26 = (double)(float)(dVar27 * dVar16);
            }
            if (fVar1 - 0.0 < 0.0) {
              dVar20 = (double)(float)(dVar27 * dVar24);
            }
            if (fVar1 - 0.0 < 0.0) {
              dVar17 = (double)(float)(dVar27 * dVar21);
            }
            fVar2 = (float)(dVar22 - dVar26);
            fVar3 = (float)(dVar23 - dVar20);
            fVar4 = (float)(dVar25 - dVar17);
            dVar21 = (double)SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
            fVar1 = (float)(param_1 / dVar21);
            dVar27 = dVar18;
            if (0.0 - dVar21 < 0.0) {
              dVar27 = (double)(fVar1 * fVar3);
            }
            dVar16 = dVar18;
            if (0.0 - dVar21 < 0.0) {
              dVar16 = (double)(fVar1 * fVar4);
            }
            dVar24 = dVar18;
            if (0.0 - dVar21 < 0.0) {
              dVar24 = (double)(fVar1 * fVar2);
            }
            if (dVar21 - 0.0 < 0.0) {
              dVar27 = (double)(fVar1 * fVar3);
            }
            if (dVar21 - 0.0 < 0.0) {
              dVar16 = (double)(fVar1 * fVar4);
            }
            if (dVar21 - 0.0 < 0.0) {
              dVar24 = (double)(fVar1 * fVar2);
            }
            local_c0 = (float)((double)(float)(dVar20 + dVar27) + dVar31);
            dVar27 = (double)(float)((double)(float)(dVar17 + dVar16) + dVar12);
            dVar26 = (double)(float)((double)(float)(dVar26 + dVar24) + dVar32);
          }
        }
      }
      iVar11 = iVar11 + 1;
      piVar10 = piVar10 + 4;
    } while (iVar11 < iVar6 + -1);
    if (bVar9) {
      dVar13 = (double)(((float)(dVar19 + (double)(float)(dVar14 * dVar28 + (double)(float)dVar13))
                        - (float)(dVar27 * dVar30 +
                                 (double)(float)((double)local_c0 * dVar28 +
                                                (double)(float)(dVar26 * dVar29)))) / fVar8);
      dVar19 = dVar18;
      if (0.0 - fVar8 < 0.0) {
        dVar19 = (double)(float)(dVar28 * dVar13);
      }
      dVar14 = dVar18;
      if (0.0 - fVar8 < 0.0) {
        dVar14 = (double)(float)(dVar30 * dVar13);
      }
      if (0.0 - fVar8 < 0.0) {
        dVar18 = (double)(float)(dVar29 * dVar13);
      }
      if (fVar8 - 0.0 < 0.0) {
        dVar19 = (double)(float)(dVar28 * dVar13);
      }
      if (fVar8 - 0.0 < 0.0) {
        dVar14 = (double)(float)(dVar30 * dVar13);
      }
      if (fVar8 - 0.0 < 0.0) {
        dVar18 = (double)(float)(dVar29 * dVar13);
      }
      *param_5 = (float)((double)local_c0 + dVar19);
      param_5[1] = (float)(dVar26 + dVar18);
      param_5[2] = (float)(dVar27 + dVar14);
      param_5[3] = fVar5;
    }
  }
  return;
}


// 0x0114d58 (0x398 bytes)
undefined8
MB_SplineFindRouteNode
          (float param_1,undefined4 *param_2,undefined8 param_3,longlong param_4,undefined8 param_5,
          undefined4 param_6,float *param_7,float *param_8)

{
  float fVar1;
  int *piVar2;
  float fVar3;
  bool bVar4;
  int iVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar5;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  int *piVar12;
  int iVar13;
  undefined4 *puVar14;
  int iVar15;
  double dVar16;
  double dVar17;
  GPiece<16> local_90;
  GPiece<24> local_80;
  
  dVar16 = (double)param_1;
  iVar15 = 0;
  bVar4 = false;
  if (0 < (int)param_3) {
    dVar17 = 0.0;
    puVar14 = param_2;
    do {
      if (dVar16 == dVar17) {
        iVar6 = MB_LineCrossesSpline(*puVar14,param_6,param_7);
        if (iVar6 != 0) {
          bVar4 = true;
        }
      }
      else {
        iVar6 = MB_LineCrossesSpline(*puVar14,local_90,param_7);
        if (iVar6 == 0) {
          iVar6 = MB_LineCrossesSpline(*puVar14,local_80,param_7);
          if (iVar6 != 0) {
            bVar4 = true;
          }
        }
        else {
          bVar4 = true;
        }
      }
      if (bVar4) {
        iVar15 = (int)(param_4 << 2);
        piVar2 = *(int **)((int)Splines + iVar15);
        uVar7 = MB_SplineCrossCheck(dVar16,param_2,param_3);
        uVar8 = MB_SplineCrossCheck(dVar16,param_2,param_3);
        iVar6 = 0;
        while ((uVar7 & uVar8) == 0) {
          uVar11 = 0;
          iVar13 = *(int *)((int)Splines + iVar15);
          uVar10 = uVar8;
          do {
            if ((1 << (uVar11 & 0x3f) & uVar8) != 0) {
              uVar10 = uVar10 | *(uint *)(iVar13 + 0x1c);
            }
            uVar11 = uVar11 + 1;
            iVar13 = iVar13 + 0x10;
          } while ((int)uVar11 < 0x20);
          iVar6 = iVar6 + 1;
          uVar8 = uVar10;
          if (0x1f < iVar6) {
            return 0;
          }
        }
        lVar5 = -1;
        lVar9 = 0;
        fVar1 = 10000.0;
        piVar12 = piVar2;
        if (*piVar2 < 1) {
          return 0;
        }
        do {
          if (((1 << ((uint)lVar9 & 0x3f) & uVar7 & uVar8) != 0) &&
             (fVar3 = SQRT(((float)piVar12[4] - *param_7) * ((float)piVar12[4] - *param_7) +
                           ((float)piVar12[5] - param_7[1]) * ((float)piVar12[5] - param_7[1])),
             fVar3 < fVar1)) {
            lVar5 = lVar9;
            fVar1 = fVar3;
          }
          lVar9 = lVar9 + 1;
          piVar12 = piVar12 + 4;
        } while ((int)lVar9 < *piVar2);
        if ((int)lVar5 < 0) {
          return 0;
        }
        iVar15 = (int)(lVar5 << 4);
        *param_8 = *(float *)((int)piVar2 + iVar15 + 0x10);
        param_8[1] = *(float *)((int)piVar2 + iVar15 + 0x14);
        param_8[2] = *(float *)((int)piVar2 + iVar15 + 0x18);
        param_8[3] = *(float *)((int)piVar2 + iVar15 + 0x1c);
        return 1;
      }
      iVar15 = iVar15 + 1;
      puVar14 = puVar14 + 1;
    } while (iVar15 < (int)param_3);
  }
  *param_8 = *param_7;
  param_8[1] = param_7[1];
  param_8[2] = param_7[2];
  param_8[3] = param_7[3];
  return 1;
}


// 0x01150f8 (0x214 bytes)
void MB_PathPosAtDist
               (double param_1,double param_2,undefined8 param_3,undefined8 param_4,int *param_5,
               int *param_6,float *param_7,float *param_8)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  int iVar10;
  int iVar11;
  double dVar12;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  
  uVar9 = FastDoubleToInt((double)(float)(param_1 / param_2));
  iVar11 = (int)uVar9;
  *param_6 = iVar11;
  iVar10 = *param_5 + -1;
  if (iVar11 < iVar10) {
    if (iVar11 < 0) {
      *param_6 = 0;
      *param_7 = 0.0;
      *param_8 = (float)param_5[4];
      param_8[1] = (float)param_5[5];
      param_8[2] = (float)param_5[6];
      param_8[3] = (float)param_5[7];
    }
    else {
      dVar12 = (double)FastIntToDouble(uVar9);
      iVar10 = *param_6;
      *param_7 = -(float)(dVar12 * param_2 - param_1);
      FastVecSub(&local_50,param_5 + iVar10 * 4 + 8,param_5 + iVar10 * 4 + 4);
      *param_8 = local_50;
      param_8[1] = local_4c;
      param_8[2] = local_48;
      fVar1 = *param_8;
      fVar2 = param_8[1];
      fVar3 = param_8[2];
      param_8[3] = local_44;
      fVar4 = SQRT(fVar3 * fVar3 + fVar1 * fVar1 + fVar2 * fVar2);
      fVar6 = 0.0;
      iVar10 = *param_6;
      fVar5 = *param_7 / fVar4;
      fVar7 = fVar6;
      if (0.0 - fVar4 < 0.0) {
        fVar7 = fVar1 * fVar5;
      }
      fVar8 = fVar6;
      if (0.0 - fVar4 < 0.0) {
        fVar8 = fVar2 * fVar5;
      }
      if (0.0 - fVar4 < 0.0) {
        fVar6 = fVar3 * fVar5;
      }
      if (fVar4 - 0.0 < 0.0) {
        fVar7 = fVar1 * fVar5;
      }
      if (fVar4 - 0.0 < 0.0) {
        fVar8 = fVar2 * fVar5;
      }
      if (fVar4 - 0.0 < 0.0) {
        fVar6 = fVar3 * fVar5;
      }
      *param_8 = fVar7;
      param_8[1] = fVar8;
      param_8[2] = fVar6;
      FastVecAdd(&local_40,param_8,param_5 + iVar10 * 4 + 4);
      *param_8 = local_40;
      param_8[1] = local_3c;
      param_8[2] = local_38;
      param_8[3] = local_34;
    }
  }
  else {
    *param_6 = iVar10;
    *param_7 = 0.0;
    *param_8 = (float)param_5[iVar10 * 4 + 4];
    param_8[1] = (float)param_5[iVar10 * 4 + 5];
    param_8[2] = (float)param_5[iVar10 * 4 + 6];
    param_8[3] = (float)param_5[iVar10 * 4 + 7];
  }
  return;
}


// 0x011530c (0x90 bytes)
void MB_RotateMoby(longlong param_1)

{
  GPiece<16> local_b0;
  GPiece<64> auStack_a0;
  GPiece<72> auStack_60;
  
  FastEulerToMtx1(auStack_a0,local_b0);
  FastEulerToMtx1(auStack_60,param_1 + 0x40);
  FastVecMtx4Mul(auStack_60,auStack_60,auStack_a0);
  MB_MtxToEuler((int)auStack_60,(MobyInstance *)(param_1 + 0x40));
  return;
}


// 0x011539c (0x2c bytes)
void CreateMotionBlur(undefined4 param_1,int param_2)

{
  if (*(int *)(param_2 + 0x13c) == 0) {
    *(undefined4 *)(param_2 + 0x134) = param_1;
    *(undefined2 *)(param_2 + 0x130) = 0;
    *(undefined2 *)(param_2 + 0x132) = 0;
    *(undefined4 *)(param_2 + 0x138) = 0;
    *(undefined4 *)(param_2 + 0x13c) = 1;
  }
  return;
}


// 0x01153c8 (0x100 bytes)
void AddMotionBlurElem(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  MobyInstance *pMVar3;
  undefined8 uVar4;
  
  if (param_3 < 9 && *(int *)(param_1 + 0x138) != 4) {
    pMVar3 = CreateMoby(*(MOBY_OCLASSES *)(*(int *)(param_1 + 0x134) + 0xa6));
    iVar1 = *(int *)(param_1 + 0x138);
    if (pMVar3 != (MobyInstance *)0x0) {
      iVar2 = *(int *)(param_1 + 0x134);
      pMVar3->collision = (ushort *)0x0;
      uVar4 = *(undefined8 *)(iVar2 + 0x38);
      pMVar3->drawDistance = *(short *)(iVar2 + 0x32);
      pMVar3->color = (int)((ulonglong)uVar4 >> 0x20);
      pMVar3->light = (int)uVar4;
      pMVar3->enabled = '\x01';
      pMVar3->updateDistance = '\0';
      pMVar3->modeBits = DISABLE_Z_WRITE|TRANSPARENT|NO_UPDATE;
      if (pMVar3->oClass == RATCHET) {
        pMVar3->field45_0x72 = '\0';
      }
      pMVar3->alpha = (s8)param_2;
      *(int *)(param_1 + iVar1 * 4 + 0x110) = param_3;
      *(undefined4 *)(param_1 + *(int *)(param_1 + 0x138) * 4 + 0x100) = param_2;
      iVar1 = *(int *)(param_1 + 0x138);
      *(int *)(param_1 + 0x138) = iVar1 + 1;
      *(MobyInstance **)(param_1 + iVar1 * 4 + 0x120) = pMVar3;
    }
  }
  return;
}


// 0x01154c8 (0x98 bytes)
void DeleteMotionBlur(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x13c) != 0) {
    iVar1 = *(int *)(param_1 + 0x138);
    iVar2 = 0;
    iVar3 = param_1;
    if (0 < iVar1) {
      do {
        if (*(MobyInstance **)(iVar3 + 0x120) != (MobyInstance *)0x0) {
          DeleteMoby(*(MobyInstance **)(iVar3 + 0x120));
          *(undefined4 *)(iVar3 + 0x120) = 0;
          iVar1 = *(int *)(param_1 + 0x138);
        }
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + 4;
      } while (iVar2 < iVar1);
    }
    *(undefined4 *)(param_1 + 0x13c) = 0;
  }
  return;
}


// 0x0115560 (0x34c bytes)
void UpdateMotionBlur(int param_1,longlong param_2)

{
  MobyInstance *pMVar1;
  int iVar2;
  ulonglong uVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  f32 *pfVar7;
  short sVar9;
  f32 *pfVar8;
  undefined4 *puVar10;
  int iVar11;
  int iVar12;
  
  iVar5 = *(int *)(param_1 + 0x138);
  if (*(int *)(param_1 + 0x13c) != 0) {
    iVar11 = *(int *)(param_1 + 0x134);
    if (((iVar11 == 0) || (*(char *)(iVar11 + 0x20) == -2)) || (*(char *)(iVar11 + 0x20) == -3)) {
      iVar12 = 0;
      iVar11 = param_1;
      if (0 < iVar5) {
        do {
          if (*(MobyInstance **)(iVar11 + 0x120) != (MobyInstance *)0x0) {
            DeleteMoby(*(MobyInstance **)(iVar11 + 0x120));
            *(undefined4 *)(iVar11 + 0x120) = 0;
            iVar5 = *(int *)(param_1 + 0x138);
          }
          iVar12 = iVar12 + 1;
          iVar11 = iVar11 + 4;
        } while (iVar12 < iVar5);
      }
      *(undefined4 *)(param_1 + 0x13c) = 0;
    }
    else {
      sVar9 = *(short *)(param_1 + 0x130);
      iVar5 = *(int *)(param_1 + 0x134);
      puVar10 = (undefined4 *)(param_1 + (int)((longlong)sVar9 << 4));
      iVar12 = param_1 + (int)((longlong)sVar9 << 4);
      uVar6 = (int)sVar9 + 1;
      *puVar10 = *(undefined4 *)(iVar11 + 0x10);
      puVar10[1] = *(undefined4 *)(iVar11 + 0x14);
      puVar10[2] = *(undefined4 *)(iVar11 + 0x18);
      puVar10[3] = *(undefined4 *)(iVar11 + 0x1c);
      *(undefined4 *)(iVar12 + 0x80) = *(undefined4 *)(iVar5 + 0x40);
      *(undefined4 *)(iVar12 + 0x84) = *(undefined4 *)(iVar5 + 0x44);
      *(undefined4 *)(iVar12 + 0x88) = *(undefined4 *)(iVar5 + 0x48);
      sVar9 = *(short *)(param_1 + 0x132);
      *(undefined4 *)(iVar12 + 0x8c) = *(undefined4 *)(iVar5 + 0x4c);
      sVar9 = sVar9 + 1;
      *(ushort *)(param_1 + 0x130) =
           (short)uVar6 +
           ((short)((int)uVar6 >> 3) + (ushort)((int)uVar6 < 0 && (uVar6 & 7) != 0)) * -8;
      iVar5 = *(int *)(param_1 + 0x138);
      *(short *)(param_1 + 0x132) = sVar9;
      if (8 < sVar9) {
        sVar9 = 8;
        *(undefined2 *)(param_1 + 0x132) = 8;
      }
      iVar11 = 0;
      if (0 < iVar5) {
        iVar12 = param_1;
        do {
          if (*(int *)(iVar12 + 0x110) <= (int)sVar9) {
            pMVar1 = *(MobyInstance **)(iVar12 + 0x120);
            iVar5 = *(int *)(param_1 + 0x134);
            uVar6 = ((int)*(short *)(param_1 + 0x130) - *(int *)(iVar12 + 0x110)) + 8;
            pMVar1->updateId = *(u8 *)(iVar5 + 0x52);
            pMVar1->animationId = *(u8 *)(iVar5 + 0x53);
            pMVar1->previousAnimationFrame = *(char *)(iVar5 + 0x50);
            pMVar1->animationFrame = *(char *)(iVar5 + 0x51);
            pMVar1->animationBlend = *(float *)(iVar5 + 0x54);
            UpdateMobyFrameData(pMVar1);
            iVar5 = (uVar6 + (((int)uVar6 >> 3) + (uint)((int)uVar6 < 0 && (uVar6 & 7) != 0)) * -8)
                    * 0x10;
            pfVar8 = (f32 *)(iVar5 + param_1);
            pfVar7 = (f32 *)(iVar5 + param_1 + 0x80);
            (pMVar1->pos).x = *pfVar8;
            (pMVar1->pos).y = pfVar8[1];
            (pMVar1->pos).z = pfVar8[2];
            (pMVar1->pos).w = pfVar8[3];
            (pMVar1->rotation).x = *pfVar7;
            (pMVar1->rotation).y = pfVar7[1];
            (pMVar1->rotation).z = pfVar7[2];
            (pMVar1->rotation).w = pfVar7[3];
            UpdateMobyTransform(pMVar1);
            sVar9 = *(short *)(param_1 + 0x132);
            iVar5 = *(int *)(param_1 + 0x138);
          }
          iVar11 = iVar11 + 1;
          iVar12 = iVar12 + 4;
        } while (iVar11 < iVar5);
      }
      if ((int)param_2 != 0) {
        iVar12 = 0;
        bVar4 = true;
        iVar11 = param_1;
        if (0 < iVar5) {
          do {
            iVar2 = *(int *)(iVar11 + 0x120);
            if ((iVar2 != 0) &&
               (uVar3 = -((longlong)(param_2 - (ulonglong)*(byte *)(iVar2 + 0x23)) >> 0x3f &
                         param_2 - (ulonglong)*(byte *)(iVar2 + 0x23)),
               *(char *)(iVar2 + 0x23) = (char)uVar3, (uVar3 & 0xff) != 0)) {
              bVar4 = false;
            }
            iVar12 = iVar12 + 1;
            iVar11 = iVar11 + 4;
          } while (iVar12 < iVar5);
          if (!bVar4) {
            return;
          }
        }
        if (*(int *)(param_1 + 0x13c) != 0) {
          iVar12 = 0;
          iVar11 = param_1;
          if (0 < iVar5) {
            do {
              if (*(MobyInstance **)(iVar11 + 0x120) != (MobyInstance *)0x0) {
                DeleteMoby(*(MobyInstance **)(iVar11 + 0x120));
                *(undefined4 *)(iVar11 + 0x120) = 0;
                iVar5 = *(int *)(param_1 + 0x138);
              }
              iVar12 = iVar12 + 1;
              iVar11 = iVar11 + 4;
            } while (iVar12 < iVar5);
          }
          *(undefined4 *)(param_1 + 0x13c) = 0;
        }
      }
    }
  }
  return;
}


// 0x01158b0 (0x44 bytes)
/* [p2_mobyutil] computes speed/gravity params at +0x14/+0x18/+0x1c from distance and height */

void MB_SetupJumpArc
               (double param_1,double param_2,undefined8 param_3,undefined8 param_4,int param_5)

{
  float fVar1;
  
  fVar1 = SQRT((float)(param_2 * 2.0) * *(float *)(param_5 + 0x10));
  *(float *)(param_5 + 0x1c) = fVar1;
  fVar1 = (fVar1 * 2.0) / *(float *)(param_5 + 0x10);
  *(float *)(param_5 + 0x18) = (float)(param_1 * 2.0) / fVar1;
  *(float *)(param_5 + 0x14) = (float)(param_1 * 2.0) / (fVar1 * fVar1);
  return;
}


// 0x0115900 (0x2cc bytes)
double MB_TurnHeadJoint
                 (double param_1,double param_2,double param_3,double param_4,double param_5,
                 float *param_6,int param_7,float *param_8)

{
  float fVar1;
  float *unused2;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  dVar2 = (double)*param_6;
  if (dVar2 <= param_4) {
    dVar3 = -param_4;
    if (dVar2 < dVar3) {
      *param_6 = (float)dVar3;
      dVar2 = dVar3;
    }
  }
  else {
    *param_6 = (float)param_4;
    dVar2 = param_4;
  }
  unused2 = param_8;
  dVar3 = (double)FastDiffRots(param_1,dVar2);
  dVar6 = 0.0;
  dVar2 = -param_4;
  if (0.0 - *param_8 < 0.0) {
    dVar2 = param_4;
  }
  dVar4 = (double)FastDiffRots(dVar2,(double)*param_6);
  dVar5 = (double)*param_8;
  if ((double)((float)((double)(float)(dVar5 * dVar5) / param_2) * 0.5) <= ABS(dVar4)) {
    dVar2 = (double)(float)(dVar5 + param_5);
    dVar4 = dVar3;
    if (((double)(float)(dVar2 * dVar3) < dVar6) || (dVar3 == dVar6)) {
      dVar3 = -dVar2;
      if ((dVar3 <= param_2) && (dVar6 = -param_2, param_2 = dVar3, dVar3 < dVar6)) {
        param_2 = dVar6;
      }
      *param_8 = (float)((double)(float)(param_2 + dVar2) - param_5);
    }
    else if ((double)((float)((double)(float)(dVar2 * dVar2) / param_2) * 0.5) <= ABS(dVar3)) {
      dVar2 = (double)(float)((double)SQRT((float)((double)(float)(param_2 * 2.0) * dVar3)) -
                             param_5);
      if (param_3 - dVar2 < 0.0) {
        dVar2 = param_3;
      }
      if (dVar6 <= dVar3) {
        DeltAng((float)dVar2,(float)param_2,param_8,param_7,(int)unused2,0);
        dVar4 = dVar3;
      }
      else {
        DeltAng((float)-dVar2,(float)param_2,param_8,param_7,(int)unused2,0);
        dVar4 = dVar3;
      }
    }
    else {
      dVar3 = -dVar2;
      if ((dVar3 <= param_2) && (dVar6 = -param_2, param_2 = dVar3, dVar3 < dVar6)) {
        param_2 = dVar6;
      }
      *param_8 = (float)((double)(float)(param_2 + dVar2) - param_5);
    }
    if (ABS(dVar4) <= ABS((double)*param_8)) {
      *param_6 = (float)param_1;
    }
    else {
      dVar2 = (double)FastWrapRot(*param_8,*param_6);
      *param_6 = (float)dVar2;
      dVar4 = (double)*param_8;
    }
  }
  else {
    dVar3 = -dVar5;
    if ((dVar3 <= param_2) && (dVar6 = -param_2, param_2 = dVar3, dVar3 < dVar6)) {
      param_2 = dVar6;
    }
    fVar1 = (float)(dVar5 + param_2);
    *param_8 = fVar1;
    if (ABS(dVar4) <= ABS((double)fVar1)) {
      *param_6 = (float)dVar2;
    }
    else {
      dVar2 = (double)FastWrapRot(fVar1,*param_6);
      *param_6 = (float)dVar2;
      dVar4 = (double)*param_8;
    }
  }
  return dVar4;
}


// 0x0115bd8 (0x678 bytes)
// inlined: FastAtan2 @0x115d94, FastAtan2 @0x115fec
void MB_TurnHeads(MobyInstance *param_1,float *param_2)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  ulonglong *puVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  float *pfVar15;
  longlong lVar16;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  ulonglong in_f29;
  ulonglong in_f30;
  undefined8 uVar21;
  ulonglong in_f31;
  
  uVar10 = ZEXT48(&stack0x00000000);
  lVar13 = uVar10 - 0xf0;
  puVar6 = (ulonglong *)lVar13;
  *puVar6 = uVar10;
  puVar6[0x20] = in_LR;
  puVar6[0x1b] = in_f29;
  puVar6[0x1c] = in_f30;
  puVar6[0x1d] = in_f31;
  puVar6[0x19] = unaff_r30;
  puVar6[0x1a] = unaff_r31;
  dVar18 = (double)FastDiffRots((double)(param_1->rotation).z,(double)param_2[6]);
  param_2[6] = (param_1->rotation).z;
  if ((*(char *)((int)param_2 + 0x51) == '\0') && (*(byte *)(param_2 + 7) != 0xff)) {
    AttachManipulator(param_1,(uint)*(byte *)(param_2 + 7),param_2 + 0x14);
  }
  if ((*(char *)((int)param_2 + 0x91) == '\0') && (*(byte *)((int)param_2 + 0x1e) != 0xff)) {
    AttachManipulator(param_1,(uint)*(byte *)((int)param_2 + 0x1e),param_2 + 0x24);
  }
  if ((*(char *)((int)param_2 + 0xd1) == '\0') && (*(byte *)((int)param_2 + 0x1d) != 0xff)) {
    AttachManipulator(param_1,(uint)*(byte *)((int)param_2 + 0x1d),param_2 + 0x34);
  }
  bVar1 = *(byte *)((int)param_2 + 0x1f);
  if (bVar1 == 0) {
    uVar21 = 0;
    MB_TurnHeadJoint(0,(double)param_2[0x10],(double)param_2[0x11],(double)param_2[5],dVar18,
                     param_2 + 0x13,&DAT_00115bcc,param_2 + 0x12);
    MB_TurnHeadJoint(uVar21,(double)param_2[8],(double)param_2[9],(double)param_2[4],
                     (double)(float)(dVar18 + (double)param_2[0x12]),param_2 + 0xb);
    MB_TurnHeadJoint(uVar21,(double)param_2[8],(double)param_2[9],(double)param_2[4],
                     (double)(float)(dVar18 + (double)param_2[0x12]),param_2 + 0xf);
  }
  else if (bVar1 < 2) {
    fVar3 = *param_2 - (param_1->pos).x;
    fVar2 = param_2[1] - (param_1->pos).y;
    fVar4 = ABS(fVar3);
    fVar5 = ABS(fVar2);
    *(float *)(puVar6 + 0xe) = fVar3;
    *(float *)((int)puVar6 + 0x74) = fVar2;
    *(float *)(puVar6 + 0xf) = fVar4 - fVar5;
    dVar20 = 0.0;
    uVar11 = (ulonglong)(*(uint *)(puVar6 + 0xe) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar6 + 0xf) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar6 + 0x74) >> 0x1d) & 4;
    fVar3 = ABS(*(float *)(puVar6 + 0xe));
    if (*(float *)(puVar6 + 0xf) - 0.0 < 0.0) {
      fVar3 = fVar5;
    }
    fVar5 = *(float *)(&g_atanQuadrantTable + (int)(uVar11 << 2));
    fVar2 = *(float *)(((uint)(uVar11 << 2) | 0x735900) + 4);
    fVar9 = ABS(*(float *)((int)puVar6 + 0x74));
    if (*(float *)(puVar6 + 0xf) - 0.0 < 0.0) {
      fVar9 = fVar4;
    }
    dVar19 = dVar20;
    if (0.0 < fVar3) {
      lVar12 = uVar10 - 0xe0;
      lVar14 = uVar10 - 0x68;
      lVar16 = uVar10 - 0x58;
      lVar17 = 2;
      fVar3 = (fVar9 - fVar3) / (fVar9 + fVar3);
      fVar4 = fVar3 * fVar3;
      *(float *)((int)puVar6 + 0x94) = fVar3;
      *(float *)((int)puVar6 + 0x8c) = fVar3;
      *(float *)(puVar6 + 0x12) = fVar3;
      *(float *)(puVar6 + 0x11) = fVar3;
      fVar3 = fVar4 * fVar4;
      *(float *)((int)puVar6 + 0x8c) = *(float *)((int)puVar6 + 0x8c) * fVar4;
      *(float *)(puVar6 + 0x12) = *(float *)(puVar6 + 0x12) * fVar3;
      *(float *)((int)puVar6 + 0x94) = *(float *)((int)puVar6 + 0x94) * fVar3 * fVar4;
      do {
        *(float *)((int)lVar12 + 0x88) = *(float *)((int)lVar12 + 0x78) * fVar3 * fVar3;
        iVar7 = (int)lVar14;
        lVar12 = lVar12 + 8;
        lVar14 = lVar14 + 8;
        *(float *)((int)lVar16 + 4) = *(float *)(iVar7 + 4) * fVar3 * fVar3;
        lVar16 = lVar16 + 8;
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
      lVar17 = 4;
      lVar16 = uVar10 - 0x68;
      pfVar15 = (float *)&DAT_007358e0;
      lVar12 = lVar13;
      lVar14 = lVar16;
      do {
        fVar3 = *pfVar15;
        fVar4 = pfVar15[1];
        pfVar15 = pfVar15 + 2;
        *(float *)((int)lVar12 + 0x88) = *(float *)((int)lVar12 + 0x88) * fVar3;
        lVar12 = lVar12 + 8;
        *(float *)((int)lVar14 + 4) = *(float *)((int)lVar14 + 4) * fVar4;
        lVar14 = lVar14 + 8;
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
      lVar12 = 2;
      do {
        iVar7 = (int)lVar13;
        lVar13 = lVar13 + 0x10;
        iVar8 = (int)lVar16;
        lVar16 = lVar16 + 0x10;
        dVar19 = (double)((float)(dVar19 + (double)*(float *)(iVar7 + 0x88)) + *(float *)(iVar8 + 4)
                          + *(float *)(iVar8 + 8) + *(float *)(iVar8 + 0xc));
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
      dVar19 = (double)((float)(dVar19 + 0.7853981852531433) * fVar5 + fVar2);
    }
    dVar19 = (double)FastDiffRots(dVar19,(double)(param_1->rotation).z);
    MB_TurnHeadJoint((double)(float)(dVar19 * 0.5),(double)param_2[0x10],(double)param_2[0x11],
                     (double)param_2[5],dVar18,param_2 + 0x13,&DAT_00115bcc,param_2 + 0x12);
    uVar21 = FastDiffRots(dVar19,(double)param_2[0x13]);
    MB_TurnHeadJoint(uVar21,(double)param_2[8],(double)param_2[9],(double)param_2[4],
                     (double)(float)(dVar18 + (double)param_2[0x12]),param_2 + 0xb);
    MB_TurnHeadJoint(dVar20,(double)param_2[8],(double)param_2[9],(double)param_2[4],
                     (double)(float)(dVar18 + (double)param_2[0x12]),param_2 + 0xf);
  }
  else if (bVar1 < 3) {
    fVar3 = *param_2 - (param_1->pos).x;
    fVar2 = param_2[1] - (param_1->pos).y;
    fVar4 = ABS(fVar3);
    fVar5 = ABS(fVar2);
    *(float *)((int)puVar6 + 0x7c) = fVar3;
    *(float *)(puVar6 + 0x10) = fVar2;
    *(float *)((int)puVar6 + 0x84) = fVar4 - fVar5;
    dVar20 = 0.0;
    uVar11 = (ulonglong)(*(uint *)((int)puVar6 + 0x7c) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar6 + 0x84) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar6 + 0x10) >> 0x1d) & 4;
    fVar3 = ABS(*(float *)((int)puVar6 + 0x7c));
    if (*(float *)((int)puVar6 + 0x84) - 0.0 < 0.0) {
      fVar3 = fVar5;
    }
    fVar5 = *(float *)(&g_atanQuadrantTable + (int)(uVar11 << 2));
    fVar2 = *(float *)(((uint)(uVar11 << 2) | 0x735900) + 4);
    fVar9 = ABS(*(float *)(puVar6 + 0x10));
    if (*(float *)((int)puVar6 + 0x84) - 0.0 < 0.0) {
      fVar9 = fVar4;
    }
    if (0.0 < fVar3) {
      lVar12 = uVar10 - 0xe0;
      lVar16 = uVar10 - 0x38;
      lVar14 = uVar10 - 0x48;
      lVar17 = 2;
      fVar3 = (fVar9 - fVar3) / (fVar9 + fVar3);
      fVar4 = fVar3 * fVar3;
      *(float *)((int)puVar6 + 0xb4) = fVar3;
      *(float *)((int)puVar6 + 0xac) = fVar3;
      *(float *)(puVar6 + 0x16) = fVar3;
      *(float *)(puVar6 + 0x15) = fVar3;
      fVar3 = fVar4 * fVar4;
      *(float *)((int)puVar6 + 0xac) = *(float *)((int)puVar6 + 0xac) * fVar4;
      *(float *)(puVar6 + 0x16) = *(float *)(puVar6 + 0x16) * fVar3;
      *(float *)((int)puVar6 + 0xb4) = *(float *)((int)puVar6 + 0xb4) * fVar3 * fVar4;
      do {
        *(float *)((int)lVar12 + 0xa8) = *(float *)((int)lVar12 + 0x98) * fVar3 * fVar3;
        iVar7 = (int)lVar14;
        lVar14 = lVar14 + 8;
        lVar12 = lVar12 + 8;
        *(float *)((int)lVar16 + 4) = *(float *)(iVar7 + 4) * fVar3 * fVar3;
        lVar16 = lVar16 + 8;
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
      lVar17 = 4;
      lVar16 = uVar10 - 0x48;
      pfVar15 = (float *)&DAT_007358e0;
      lVar12 = lVar13;
      lVar14 = lVar16;
      do {
        fVar3 = *pfVar15;
        fVar4 = pfVar15[1];
        pfVar15 = pfVar15 + 2;
        *(float *)((int)lVar12 + 0xa8) = *(float *)((int)lVar12 + 0xa8) * fVar3;
        lVar12 = lVar12 + 8;
        *(float *)((int)lVar14 + 4) = *(float *)((int)lVar14 + 4) * fVar4;
        lVar14 = lVar14 + 8;
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
      lVar12 = 2;
      do {
        iVar7 = (int)lVar13;
        lVar13 = lVar13 + 0x10;
        iVar8 = (int)lVar16;
        lVar16 = lVar16 + 0x10;
        dVar20 = (double)((float)(dVar20 + (double)*(float *)(iVar7 + 0xa8)) + *(float *)(iVar8 + 4)
                          + *(float *)(iVar8 + 8) + *(float *)(iVar8 + 0xc));
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
      dVar20 = (double)((float)(dVar20 + 0.7853981852531433) * fVar5 + fVar2);
    }
    dVar20 = (double)FastDiffRots(dVar20,(double)(param_1->rotation).z);
    MB_TurnHeadJoint((double)(float)(dVar20 * 0.5),(double)param_2[0x10],(double)param_2[0x11],
                     (double)param_2[5],dVar18,param_2 + 0x13,&DAT_00115bcc,param_2 + 0x12);
    uVar21 = FastDiffRots(dVar20,(double)param_2[0x13]);
    MB_TurnHeadJoint(uVar21,(double)param_2[8],(double)param_2[9],(double)param_2[4],
                     (double)(float)(dVar18 + (double)param_2[0x12]),param_2 + 0xb);
    MB_TurnHeadJoint(uVar21,(double)param_2[8],(double)param_2[9],(double)param_2[4],
                     (double)(float)(dVar18 + (double)param_2[0x12]),param_2 + 0xf);
  }
  FastQuaternionToEuler((double)param_2[0xb],param_2 + 0x18,2);
  FastQuaternionToEuler((double)param_2[0x13],param_2 + 0x28,2);
  FastQuaternionToEuler((double)param_2[0xf],param_2 + 0x38,2);
  return;
}


// 0x01162a0 (0x524 bytes)
void ____MB_SpawnRingPartFx
               (int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  int iVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  undefined8 uVar26;
  undefined8 uStack00000040;
  undefined8 uStack00000048;
  float local_f0;
  float local_ec;
  float local_e8;
  GPiece<16> auStack_e0;
  GPiece<16> auStack_d0;
  longlong local_c0;
  
  iVar6 = 0;
  iVar8 = 0;
  uVar26 = 0x4038000000000000;
  dVar25 = 0.13089969754219055;
  dVar24 = 0.000244140625;
  dVar23 = 0.2617993950843811;
  dVar22 = 0.05000000074505806;
  dVar21 = 3.0517578125e-05;
  dVar20 = 0.0;
  dVar19 = 30.5;
  dVar18 = 90.5;
  uVar17 = 0x40ed4c0000000000;
  uVar16 = 0x40a7700000000000;
  uVar15 = 0xbf50624de0000000;
  uVar14 = 0x3feb333340000000;
  uStack00000040 = param_3;
  uStack00000048 = param_4;
  while( true ) {
    iVar4 = FastDoubleToInt(uVar26);
    if (iVar4 <= iVar6) break;
    uVar5 = rand();
    dVar10 = (double)(float)((double)(float)((double)(longlong)(int)((int)uVar5 >> 0xf & 0xfff) *
                                            dVar25) * dVar24);
    if ((uVar5 >> 0xf & 1) != 0) {
      dVar10 = -dVar10;
    }
    local_c0 = (longlong)iVar6;
    MB_RotateQuatAxisAngle
              ((float)((double)local_c0 * dVar23 + dVar10),&local_f0,(float *)(param_1 + 0xe0));
    iVar4 = rand();
    local_c0 = (longlong)(int)(iVar4 >> 0xf & 0x7fff);
    dVar12 = (double)SQRT(local_e8 * local_e8 + local_f0 * local_f0 + local_ec * local_ec);
    fVar2 = (float)((double)(float)((double)(float)((double)local_c0 * dVar22) * dVar21 + dVar22) /
                   dVar12);
    dVar10 = dVar20;
    if (dVar20 - dVar12 < 0.0) {
      dVar10 = (double)(local_f0 * fVar2);
    }
    dVar11 = dVar20;
    if (dVar20 - dVar12 < 0.0) {
      dVar11 = (double)(local_ec * fVar2);
    }
    dVar13 = dVar20;
    if (dVar20 - dVar12 < 0.0) {
      dVar13 = (double)(local_e8 * fVar2);
    }
    if (dVar12 - dVar20 < 0.0) {
      dVar10 = (double)(local_f0 * fVar2);
    }
    if (dVar12 - dVar20 < 0.0) {
      dVar11 = (double)(local_ec * fVar2);
    }
    if (dVar12 - dVar20 < 0.0) {
      dVar13 = (double)(local_e8 * fVar2);
    }
    local_f0 = (float)dVar10;
    local_ec = (float)dVar11;
    local_e8 = (float)dVar13;
    iVar4 = rand();
    uVar5 = iVar4 >> 0xf & 0x7fff;
    lVar9 = (longlong)(int)(uVar5 + ((int)uVar5 >> 2) * -4);
    iVar4 = rand();
    uVar5 = iVar4 >> 0xf & 0x7fff;
    iVar1 = (int)((double)animationSpeed * dVar19);
    iVar7 = (int)((double)animationSpeed * dVar18);
    local_c0 = (longlong)iVar7;
    iVar4 = rand();
    iVar7 = iVar7 - iVar1;
    uVar3 = iVar4 >> 0xf & 0x7fff;
    iVar4 = (int)uVar3 / (iVar7 + 1);
    if ((int)param_5 != 0) {
      FastVecAddSelf(auStack_e0,&local_f0,param_5);
    }
    SpawnPart_44
              (uVar17,uVar16,uVar14,uVar15,uVar14,&stack0x00000040,&local_f0,
               (uVar3 - (iVar4 * iVar7 + iVar4)) + iVar1,0x1e,0xffffff,
               (ZERO_MASK((uVar5 + ((int)uVar5 >> 1) * -2)) & lVar9 * 2) - lVar9);
    iVar6 = iVar6 + 1;
  }
  uVar15 = 0x4018000000000000;
  dVar23 = 0.7853981852531433;
  dVar19 = 1.0471975803375244;
  dVar18 = 60.5;
  uVar14 = 0x40c3880000000000;
  for (; iVar6 = FastDoubleToInt(uVar15), iVar8 < iVar6; iVar8 = iVar8 + 1) {
    iVar6 = rand();
    local_c0 = (longlong)iVar8;
    MB_RotateQuatAxisAngle
              ((float)((double)local_c0 * dVar19 +
                      (double)(float)((double)(float)((double)(longlong)(int)(iVar6 >> 0xf & 0x7fff)
                                                     * dVar23) * dVar21)),&local_f0,
               (float *)(param_1 + 0xe0));
    iVar6 = rand();
    dVar25 = (double)SQRT(local_e8 * local_e8 + local_f0 * local_f0 + local_ec * local_ec);
    local_c0 = (longlong)(int)((double)animationSpeed * dVar18);
    fVar2 = (float)((double)(float)((double)(float)((double)(longlong)(int)(iVar6 >> 0xf & 0x7fff) *
                                                   dVar22) * dVar21 + dVar22) / dVar25);
    dVar24 = dVar20;
    if (dVar20 - dVar25 < 0.0) {
      dVar24 = (double)(local_f0 * fVar2);
    }
    dVar10 = dVar20;
    if (dVar20 - dVar25 < 0.0) {
      dVar10 = (double)(local_ec * fVar2);
    }
    dVar12 = dVar20;
    if (dVar20 - dVar25 < 0.0) {
      dVar12 = (double)(local_e8 * fVar2);
    }
    if (dVar25 - dVar20 < 0.0) {
      dVar24 = (double)(local_f0 * fVar2);
    }
    if (dVar25 - dVar20 < 0.0) {
      dVar10 = (double)(local_ec * fVar2);
    }
    if (dVar25 - dVar20 < 0.0) {
      dVar12 = (double)(local_e8 * fVar2);
    }
    local_f0 = (float)dVar24;
    local_ec = (float)dVar10;
    local_e8 = (float)dVar12;
    rand();
    if ((int)param_5 != 0) {
      FastVecAddSelf(auStack_d0,&local_f0,param_5);
    }
    SpawnPart_21(uVar14,&stack0x00000040,&local_f0,0x4f007fff,0x1fffffff);
  }
  return;
}


// 0x01167c8 (0x284 bytes)
/* [p2_mobyutil] AccelDeltAng 3 axes, builds quaternion, attaches/detaches manipulator */

void MB_UpdateManipulatorRot
               (undefined8 param_1,undefined8 param_2,MobyInstance *param_3,int param_4,
               uint32_t param_5)

{
  undefined4 uVar1;
  MobyInstance *pMoby;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  GPiece<16> auStack_70;
  GPiece<16> auStack_60;
  GPiece<16> auStack_50;
  
  pMoby = *(MobyInstance **)(param_4 + 0x78);
  if (pMoby == (MobyInstance *)0x0) {
    *(MobyInstance **)(param_4 + 0x78) = param_3;
  }
  else if (pMoby != param_3) {
    if ((*(char *)(param_4 + 1) != '\0') && (pMoby->state < 0x7f)) {
      DetachManipulator(pMoby,param_4);
    }
    *(undefined1 *)(param_4 + 1) = 0;
    *(MobyInstance **)(param_4 + 0x78) = param_3;
  }
  uVar2 = *(uint *)(param_4 + 0x60);
  uVar4 = 0;
  if ((((uVar2 == 0) && (*(int *)(param_4 + 100) == 0)) && (*(int *)(param_4 + 0x68) == 0)) &&
     (((uVar2 = *(uint *)(param_4 + 0x70), uVar2 == 0x3f800000 &&
       (uVar2 = *(uint *)(param_4 + 0x40) & 0x7fffffff, uVar2 < 0x3ba3d70a)) &&
      ((uVar2 = *(uint *)(param_4 + 0x44) & 0x7fffffff, uVar2 < 0x3ba3d70a &&
       (uVar2 = *(uint *)(param_4 + 0x48) & 0x7fffffff, uVar2 < 0x3ba3d70a)))))) {
    if (*(char *)(param_4 + 1) != '\0') {
      DetachManipulator(param_3,param_4);
    }
  }
  else {
    AccelDeltAng((double)*(float *)(param_4 + 0x60),param_1,param_2,0,param_4 + 0x40,uVar2,
                 param_4 + 0x50);
    AccelDeltAng((double)*(float *)(param_4 + 100),param_1,param_2,uVar4,param_4 + 0x44);
    AccelDeltAng((double)*(float *)(param_4 + 0x68),param_1,param_2,uVar4,param_4 + 0x48);
    if (*(char *)(param_4 + 1) == '\0') {
      AttachManipulator(param_3,param_5,param_4);
    }
    FastQuaternionToEuler((double)*(float *)(param_4 + 0x40),auStack_50,0);
    FastQuaternionToEuler((double)*(float *)(param_4 + 0x44),auStack_60,1);
    FastQuaternionToEuler((double)*(float *)(param_4 + 0x48),auStack_70,2);
    iVar3 = param_4 + 0x10;
    FastQuaternionMult(iVar3,auStack_50,auStack_60);
    FastQuaternionMult(iVar3,iVar3,auStack_70);
    uVar1 = *(undefined4 *)(param_4 + 0x70);
    *(undefined4 *)(param_4 + 0x20) = uVar1;
    *(undefined4 *)(param_4 + 0x24) = uVar1;
    *(undefined4 *)(param_4 + 0x28) = uVar1;
    *(undefined4 *)(param_4 + 0x6c) = 0;
    *(undefined4 *)(param_4 + 0x68) = 0;
    *(undefined4 *)(param_4 + 100) = 0;
    *(undefined4 *)(param_4 + 0x60) = 0;
    *(undefined4 *)(param_4 + 0x70) = 0x3f800000;
  }
  return;
}


// 0x0116a68 (0xe8 bytes)
void MB_BobMotion
               (float amp,float speed,MobyInstance *pMoby,float *phase,float *prevOffset)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  
  dVar5 = (double)amp;
  dVar6 = (double)FastWrapRot(*phase,speed);
  *phase = (float)dVar6;
  (pMoby->pos).z = (pMoby->pos).z - *prevOffset;
  fVar1 = *phase;
  fVar2 = 3.1415925 - fVar1;
  if (fVar1 - (3.1415925 - fVar1) < 0.0) {
    fVar2 = fVar1;
  }
  fVar3 = -3.1415925 - fVar1;
  if ((-3.1415925 - fVar1) - fVar2 < 0.0) {
    fVar3 = fVar2;
  }
  fVar1 = fVar3 * fVar3;
  fVar2 = fVar1 * fVar1 * fVar3;
  fVar4 = fVar1 * fVar2;
  fVar1 = (float)((double)(fVar1 * fVar4 * 2.601887e-06 +
                          fVar4 * -0.0001980741 +
                          fVar2 * 0.0083330255 + fVar1 * fVar3 * -0.16666657 + fVar3) * dVar5);
  *prevOffset = fVar1;
  (pMoby->pos).z = (pMoby->pos).z + fVar1;
  return;
}


// 0x0116b70 (0x1ac bytes)
void MB_SwingMotion
               (double param_1,double param_2,double param_3,int param_4,float *param_5,
               float *param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  double dVar9;
  
  fVar1 = *param_5;
  fVar2 = *param_6;
  fVar4 = 3.1415925 - fVar1;
  if (fVar1 - (3.1415925 - fVar1) < 0.0) {
    fVar4 = fVar1;
  }
  fVar3 = 3.1415925 - fVar2;
  if (fVar2 - (3.1415925 - fVar2) < 0.0) {
    fVar3 = fVar2;
  }
  fVar5 = -3.1415925 - fVar1;
  if ((-3.1415925 - fVar1) - fVar4 < 0.0) {
    fVar5 = fVar4;
  }
  fVar1 = -3.1415925 - fVar2;
  if ((-3.1415925 - fVar2) - fVar3 < 0.0) {
    fVar1 = fVar3;
  }
  fVar3 = fVar5 * fVar5;
  fVar6 = fVar1 * fVar1;
  fVar7 = fVar6 * fVar6 * fVar1;
  fVar4 = fVar3 * fVar3 * fVar5;
  fVar8 = fVar6 * fVar7;
  fVar2 = fVar3 * fVar4;
  *(float *)(param_4 + 0x40) =
       (float)(param_1 *
              (double)(fVar3 * fVar2 * 2.601887e-06 +
                      fVar2 * -0.0001980741 +
                      fVar4 * 0.0083330255 + fVar3 * fVar5 * -0.16666657 + fVar5)) *
       (fVar6 * fVar8 * 2.601887e-06 +
       fVar8 * -0.0001980741 + fVar7 * 0.0083330255 + fVar6 * fVar1 * -0.16666657 + fVar1);
  fVar1 = *param_5;
  fVar4 = *param_6 + 1.5707963;
  fVar2 = 3.1415925 - fVar1;
  if (fVar1 - (3.1415925 - fVar1) < 0.0) {
    fVar2 = fVar1;
  }
  fVar3 = 3.1415925 - fVar4;
  if (fVar4 - (3.1415925 - fVar4) < 0.0) {
    fVar3 = fVar4;
  }
  fVar5 = -3.1415925 - fVar1;
  if ((-3.1415925 - fVar1) - fVar2 < 0.0) {
    fVar5 = fVar2;
  }
  fVar2 = fVar5 * fVar5;
  fVar1 = -3.1415925 - fVar4;
  if ((-3.1415925 - fVar4) - fVar3 < 0.0) {
    fVar1 = fVar3;
  }
  fVar4 = fVar1 * fVar1;
  fVar3 = fVar2 * fVar2 * fVar5;
  fVar6 = fVar2 * fVar3;
  fVar7 = fVar4 * fVar4 * fVar1;
  fVar8 = fVar4 * fVar7;
  *(float *)(param_4 + 0x44) =
       (float)(param_1 *
              (double)(fVar2 * fVar6 * 2.601887e-06 +
                      fVar6 * -0.0001980741 +
                      fVar3 * 0.0083330255 + fVar2 * fVar5 * -0.16666657 + fVar5)) *
       (fVar4 * fVar8 * 2.601887e-06 +
       fVar8 * -0.0001980741 + fVar7 * 0.0083330255 + fVar4 * fVar1 * -0.16666657 + fVar1);
  dVar9 = (double)FastWrapRot(*param_5,(float)param_2);
  *param_5 = (float)dVar9;
  dVar9 = (double)FastWrapRot(*param_6,(float)param_3);
  *param_6 = (float)dVar9;
  return;
}


// 0x0116d1c (0x19c bytes)
void MB_StoreChildOffsets(int param_1,float *param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  MobyInstance *pMVar6;
  int iVar7;
  GPiece<48> auStack_e0;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  GPiece<72> auStack_70;
  
  FastEulerToMtx(auStack_e0,param_1 + 0x40);
  FastNormalizeRMtx4(&local_b0,auStack_e0);
  iVar7 = 0;
  if (0 < param_3) {
    do {
      fVar2 = param_2[8];
      if (fVar2 != -NAN) {
        fVar3 = g_MobyInstance[(int)fVar2].pos.y - *(float *)(param_1 + 0x14);
        fVar4 = g_MobyInstance[(int)fVar2].pos.x - *(float *)(param_1 + 0x10);
        fVar5 = g_MobyInstance[(int)fVar2].pos.z - *(float *)(param_1 + 0x18);
        fVar1 = g_MobyInstance[(int)fVar2].pos.w;
        pMVar6 = g_MobyInstance + (int)fVar2;
        *param_2 = local_80 * fVar1 + local_90 * fVar5 + local_b0 * fVar4 + local_a0 * fVar3;
        param_2[1] = local_7c * fVar1 + local_8c * fVar5 + local_ac * fVar4 + local_9c * fVar3;
        param_2[2] = local_78 * fVar1 + local_88 * fVar5 + local_a8 * fVar4 + local_98 * fVar3;
        param_2[3] = local_74 * fVar1 + local_84 * fVar5 + local_a4 * fVar4 + local_94 * fVar3;
        FastEulerToMtx1(auStack_70,&pMVar6->rotation);
        FastVecMtx4Mul(auStack_70,&local_b0,auStack_70);
        MB_MtxToEuler((int)auStack_70,(MobyInstance *)(param_2 + 4));
      }
      iVar7 = iVar7 + 1;
      param_2 = param_2 + 0xc;
    } while (iVar7 < param_3);
  }
  return;
}


// 0x0116eb8 (0x180 bytes)
void MB_UpdateChildMobys(int param_1,float *param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  MobyInstance *pMVar5;
  int iVar6;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a0;
  float local_9c;
  float local_98;
  float local_90;
  float local_8c;
  float local_88;
  float local_80;
  float local_7c;
  float local_78;
  GPiece<64> auStack_70;
  
  FastEulerToMtx1(&local_b0,param_1 + 0x40);
  iVar6 = 0;
  if (0 < param_3) {
    do {
      if (param_2[8] != -NAN) {
        pMVar5 = g_MobyInstance + (int)param_2[8];
        FastEulerToMtx1(auStack_70,param_2 + 4);
        FastVecMtx4Mul(auStack_70,&local_b0,auStack_70);
        MB_MtxToEuler((int)auStack_70,(MobyInstance *)&pMVar5->rotation);
        fVar1 = param_2[1];
        fVar2 = *param_2;
        fVar3 = param_2[2];
        fVar4 = param_2[3];
        (pMVar5->pos).x =
             *(float *)(param_1 + 0x10) +
             local_80 * fVar4 + local_90 * fVar3 + local_b0 * fVar2 + local_a0 * fVar1;
        (pMVar5->pos).y =
             *(float *)(param_1 + 0x14) +
             local_7c * fVar4 + local_8c * fVar3 + local_ac * fVar2 + local_9c * fVar1;
        (pMVar5->pos).z =
             *(float *)(param_1 + 0x18) +
             local_78 * fVar4 + local_88 * fVar3 + local_a8 * fVar2 + local_98 * fVar1;
        (pMVar5->pos).w = *(f32 *)(param_1 + 0x1c);
        UpdateMobyTransform(pMVar5);
      }
      iVar6 = iVar6 + 1;
      param_2 = param_2 + 0xc;
    } while (iVar6 < param_3);
  }
  return;
}


// 0x0117038 (0x200 bytes)
void MB_RotateAboutPivot(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  GPiece<16> local_100;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c0;
  float local_bc;
  float local_b8;
  GPiece<72> auStack_b0;
  
  FastEulerToMtx1(&local_f0,(MobyInstance *)(param_1 + 0x40));
  fVar1 = param_2[1];
  fVar2 = *param_2;
  fVar3 = param_2[2];
  dVar9 = (double)param_2[3];
  dVar8 = (double)local_c0;
  dVar7 = (double)local_bc;
  dVar6 = (double)local_b8;
  dVar10 = (double)(local_d0 * fVar3 + local_f0 * fVar2 + local_e0 * fVar1);
  dVar5 = (double)(local_cc * fVar3 + local_ec * fVar2 + local_dc * fVar1);
  dVar11 = (double)(local_c8 * fVar3 + local_e8 * fVar2 + local_d8 * fVar1);
  FastEulerToMtx1(auStack_b0,local_100);
  FastVecMtx4Mul(&local_f0,&local_f0,auStack_b0);
  fVar1 = param_2[1];
  fVar2 = *param_2;
  fVar3 = param_2[2];
  fVar4 = param_2[3];
  *(float *)(param_1 + 0x10) =
       *(float *)(param_1 + 0x10) +
       ((float)(dVar8 * dVar9 + dVar10) -
       (local_c0 * fVar4 + local_d0 * fVar3 + local_f0 * fVar2 + local_e0 * fVar1));
  *(float *)(param_1 + 0x14) =
       *(float *)(param_1 + 0x14) +
       ((float)(dVar7 * dVar9 + dVar5) -
       (local_bc * fVar4 + local_cc * fVar3 + local_ec * fVar2 + local_dc * fVar1));
  *(float *)(param_1 + 0x18) =
       *(float *)(param_1 + 0x18) +
       ((float)(dVar6 * dVar9 + dVar11) -
       (local_b8 * fVar4 + local_c8 * fVar3 + local_e8 * fVar2 + local_d8 * fVar1));
  MB_MtxToEuler((int)&local_f0,(MobyInstance *)(param_1 + 0x40));
  return;
}


// 0x0117238 (0x74 bytes)
void MB_AddVectorSphere(float *out,float *base)

{
  float fVar1;
  float fVar2;
  float fVar3;
  double in_f1;
  double in_f2;
  double in_f3;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  MB_SphericalToVector((float)in_f1,(float)in_f2,(float)in_f3,&local_20);
  fVar1 = *base;
  fVar2 = base[1];
  fVar3 = base[2];
  out[3] = local_14;
  *out = local_20 + fVar1;
  out[1] = local_1c + fVar2;
  out[2] = local_18 + fVar3;
  return;
}


// 0x01172b0 (0xd0 bytes)
void MB_WorldToScreenCell(undefined8 param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  double dVar2;
  float local_50;
  float local_4c;
  
  ScreenPosFromWorldSpace(&local_50,param_1);
  dVar2 = 0.0625;
  uVar1 = FastDoubleToInt
                    ((double)((local_50 - (float)(longlong)SCREEN_PROJECTION_MAP_X) * 0.0625));
  *param_2 = uVar1;
  uVar1 = FastDoubleToInt
                    ((double)(float)((double)(local_4c - (float)(longlong)SCREEN_PROJECTION_MAP_Y) *
                                    dVar2));
  *param_3 = uVar1;
  return;
}


// 0x0117390 (0x8d0 bytes)
// inlined: FastAtan2 @0x11759c, FastAtan2 @0x11773c, FastAtan2 @0x11790c, FastAtan2 @0x117aa8
/* [p2_mobyutil] evaluates point/rotation on path at float node param (cubic between nodes, wrap) */

void MB_PathEvalSpline
               (double param_1,uint *param_2,undefined8 param_3,int param_4,float *param_5,
               undefined4 *param_6,ulonglong param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  ulonglong *puVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  float *pfVar18;
  ulonglong uVar19;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar20;
  longlong lVar21;
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
  ulonglong in_f26;
  ulonglong in_f27;
  double dVar32;
  ulonglong in_f28;
  ulonglong in_f29;
  ulonglong in_f30;
  double dVar33;
  ulonglong in_f31;
  double dVar34;
  
  uVar13 = ZEXT48(&stack0x00000000);
  lVar15 = uVar13 - 400;
  puVar9 = (ulonglong *)lVar15;
  *puVar9 = uVar13;
  puVar9[0x34] = in_LR;
  puVar9[0x2c] = in_f26;
  puVar9[0x2d] = in_f27;
  puVar9[0x2e] = in_f28;
  puVar9[0x2f] = in_f29;
  puVar9[0x30] = in_f30;
  puVar9[0x31] = in_f31;
  puVar9[0x2b] = unaff_r31;
  puVar9[0x26] = unaff_r26;
  puVar9[0x27] = unaff_r27;
  puVar9[0x29] = unaff_r29;
  puVar9[0x28] = unaff_r28;
  bVar12 = false;
  puVar9[0x2a] = unaff_r30;
  lVar14 = FastDoubleToInt();
  uVar8 = *param_2;
  if ((param_4 == 0) && ((int)((ulonglong)uVar8 - 2) <= (int)lVar14)) {
    bVar12 = true;
    lVar14 = (ulonglong)uVar8 - 2;
  }
  puVar9[0x24] = (longlong)(int)lVar14;
  dVar34 = (double)(float)(param_1 - (double)(longlong)puVar9[0x24]);
  if ((bVar12) && (1.0 < dVar34)) {
    dVar34 = 1.0;
  }
  lVar16 = lVar14 + 2;
  lVar17 = lVar14 + 1;
  if ((int)uVar8 <= (int)lVar16) {
    lVar17 = lVar17 - (longlong)((int)lVar17 / (int)uVar8) * (longlong)(int)uVar8;
    lVar16 = lVar16 - (longlong)((int)lVar16 / (int)uVar8) * (longlong)(int)uVar8;
  }
  iVar11 = (int)(lVar17 << 4);
  iVar10 = (int)(lVar14 << 4);
  dVar24 = (double)*(float *)((int)param_2 + iVar11 + 0x10);
  dVar23 = (double)*(float *)((int)param_2 + iVar10 + 0x10);
  dVar27 = (double)*(float *)((int)param_2 + iVar10 + 0x14);
  dVar28 = (double)*(float *)((int)param_2 + iVar10 + 0x18);
  fVar1 = (float)(dVar24 - dVar23);
  dVar29 = (double)fVar1;
  dVar25 = (double)*(float *)((int)param_2 + iVar11 + 0x14);
  dVar26 = (double)*(float *)((int)param_2 + iVar11 + 0x18);
  fVar2 = (float)(dVar25 - dVar27);
  dVar30 = (double)fVar2;
  dVar33 = 0.0;
  fVar3 = (float)(dVar26 - dVar28);
  dVar31 = (double)fVar3;
  dVar32 = (double)*(float *)((int)param_2 + iVar10 + 0x1c);
  fVar4 = *(float *)((int)param_2 + iVar11 + 0x1c);
  dVar22 = (double)fVar4;
  param_5[3] = fVar4;
  *param_5 = (float)(dVar34 * dVar29 + dVar23);
  param_5[1] = (float)(dVar34 * dVar30 + dVar27);
  param_5[2] = (float)(dVar34 * dVar31 + dVar28);
  if ((param_7 & 1) == 0) {
    *(float *)((int)puVar9 + 0x94) = fVar1;
    *(float *)(puVar9 + 0x13) = fVar2;
    *(float *)((int)puVar9 + 0x9c) = (float)(ABS(dVar29) - ABS(dVar30));
    uVar19 = (ulonglong)(*(uint *)((int)puVar9 + 0x94) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar9 + 0x9c) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar9 + 0x13) >> 0x1d) & 4;
    dVar23 = ABS((double)*(float *)((int)puVar9 + 0x94));
    if (*(float *)((int)puVar9 + 0x9c) - 0.0 < 0.0) {
      dVar23 = ABS(dVar30);
    }
    fVar2 = *(float *)(&g_atanQuadrantTable + (int)(uVar19 << 2));
    fVar1 = *(float *)(((uint)(uVar19 << 2) | 0x735900) + 4);
    dVar27 = ABS((double)*(float *)(puVar9 + 0x13));
    if (*(float *)((int)puVar9 + 0x9c) - 0.0 < 0.0) {
      dVar27 = ABS(dVar29);
    }
    dVar28 = dVar33;
    if (0.0 < dVar23) {
      lVar14 = uVar13 - 0x180;
      lVar17 = uVar13 - 0x90;
      lVar21 = uVar13 - 0x80;
      lVar20 = 2;
      fVar4 = (float)(dVar27 - dVar23) / (float)(dVar27 + dVar23);
      fVar7 = fVar4 * fVar4;
      *(float *)((int)puVar9 + 0x10c) = fVar4;
      *(float *)((int)puVar9 + 0x104) = fVar4;
      *(float *)(puVar9 + 0x21) = fVar4;
      *(float *)(puVar9 + 0x20) = fVar4;
      fVar4 = fVar7 * fVar7;
      *(float *)((int)puVar9 + 0x104) = *(float *)((int)puVar9 + 0x104) * fVar7;
      *(float *)(puVar9 + 0x21) = *(float *)(puVar9 + 0x21) * fVar4;
      *(float *)((int)puVar9 + 0x10c) = *(float *)((int)puVar9 + 0x10c) * fVar4 * fVar7;
      do {
        *(float *)((int)lVar14 + 0x100) = *(float *)((int)lVar14 + 0xf0) * fVar4 * fVar4;
        iVar10 = (int)lVar17;
        lVar14 = lVar14 + 8;
        lVar17 = lVar17 + 8;
        *(float *)((int)lVar21 + 4) = *(float *)(iVar10 + 4) * fVar4 * fVar4;
        lVar21 = lVar21 + 8;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      lVar20 = 4;
      lVar21 = uVar13 - 0x90;
      pfVar18 = (float *)&DAT_007358e0;
      lVar14 = lVar15;
      lVar17 = lVar21;
      do {
        fVar4 = *pfVar18;
        fVar7 = pfVar18[1];
        pfVar18 = pfVar18 + 2;
        *(float *)((int)lVar14 + 0x100) = *(float *)((int)lVar14 + 0x100) * fVar4;
        lVar14 = lVar14 + 8;
        *(float *)((int)lVar17 + 4) = *(float *)((int)lVar17 + 4) * fVar7;
        lVar17 = lVar17 + 8;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      lVar17 = 2;
      lVar14 = lVar15;
      dVar23 = dVar33;
      do {
        iVar10 = (int)lVar14;
        lVar14 = lVar14 + 0x10;
        iVar11 = (int)lVar21;
        lVar21 = lVar21 + 0x10;
        dVar23 = (double)((float)(dVar23 + (double)*(float *)(iVar10 + 0x100)) +
                          *(float *)(iVar11 + 4) + *(float *)(iVar11 + 8) + *(float *)(iVar11 + 0xc)
                         );
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
      dVar28 = (double)((float)(dVar23 + 0.7853981852531433) * fVar2 + fVar1);
    }
    *(float *)((int)puVar9 + 0x8c) = fVar3;
    dVar31 = ABS(dVar31);
    fVar1 = SQRT((float)(dVar29 * dVar29 + (double)(float)(dVar30 * dVar30)));
    dVar27 = ABS((double)fVar1);
    *(float *)(puVar9 + 0x11) = fVar1;
    *(float *)(puVar9 + 0x12) = (float)(dVar27 - dVar31);
    uVar19 = (ulonglong)(*(uint *)(puVar9 + 0x11) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar9 + 0x12) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar9 + 0x8c) >> 0x1d) & 4;
    dVar23 = ABS((double)*(float *)(puVar9 + 0x11));
    if (*(float *)(puVar9 + 0x12) - 0.0 < 0.0) {
      dVar23 = dVar31;
    }
    fVar1 = *(float *)(&g_atanQuadrantTable + (int)(uVar19 << 2));
    dVar29 = ABS((double)*(float *)((int)puVar9 + 0x8c));
    if (*(float *)(puVar9 + 0x12) - 0.0 < 0.0) {
      dVar29 = dVar27;
    }
    fVar2 = *(float *)(((uint)(uVar19 << 2) | 0x735900) + 4);
    dVar27 = dVar33;
    if (0.0 < dVar23) {
      lVar14 = uVar13 - 0x180;
      lVar17 = uVar13 - 0xb0;
      lVar21 = uVar13 - 0xa0;
      lVar20 = 2;
      fVar3 = (float)(dVar29 - dVar23) / (float)(dVar29 + dVar23);
      fVar4 = fVar3 * fVar3;
      *(float *)((int)puVar9 + 0xec) = fVar3;
      *(float *)((int)puVar9 + 0xe4) = fVar3;
      *(float *)(puVar9 + 0x1d) = fVar3;
      *(float *)(puVar9 + 0x1c) = fVar3;
      fVar3 = fVar4 * fVar4;
      *(float *)((int)puVar9 + 0xe4) = *(float *)((int)puVar9 + 0xe4) * fVar4;
      *(float *)(puVar9 + 0x1d) = *(float *)(puVar9 + 0x1d) * fVar3;
      *(float *)((int)puVar9 + 0xec) = *(float *)((int)puVar9 + 0xec) * fVar3 * fVar4;
      do {
        *(float *)((int)lVar14 + 0xe0) = *(float *)((int)lVar14 + 0xd0) * fVar3 * fVar3;
        iVar10 = (int)lVar17;
        lVar14 = lVar14 + 8;
        lVar17 = lVar17 + 8;
        *(float *)((int)lVar21 + 4) = *(float *)(iVar10 + 4) * fVar3 * fVar3;
        lVar21 = lVar21 + 8;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      lVar20 = 4;
      lVar21 = uVar13 - 0xb0;
      pfVar18 = (float *)&DAT_007358e0;
      lVar14 = lVar15;
      lVar17 = lVar21;
      do {
        fVar3 = *pfVar18;
        fVar4 = pfVar18[1];
        pfVar18 = pfVar18 + 2;
        *(float *)((int)lVar14 + 0xe0) = *(float *)((int)lVar14 + 0xe0) * fVar3;
        lVar14 = lVar14 + 8;
        *(float *)((int)lVar17 + 4) = *(float *)((int)lVar17 + 4) * fVar4;
        lVar17 = lVar17 + 8;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      lVar17 = 2;
      lVar14 = lVar15;
      dVar23 = dVar33;
      do {
        iVar10 = (int)lVar14;
        iVar11 = (int)lVar21;
        lVar14 = lVar14 + 0x10;
        lVar21 = lVar21 + 0x10;
        dVar23 = (double)((float)(dVar23 + (double)*(float *)(iVar10 + 0xe0)) +
                          *(float *)(iVar11 + 4) + *(float *)(iVar11 + 8) + *(float *)(iVar11 + 0xc)
                         );
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
      dVar27 = (double)((float)(dVar23 + 0.7853981852531433) * fVar1 + fVar2);
    }
    dVar23 = dVar27;
    dVar29 = dVar28;
    dVar30 = dVar33;
    dVar31 = dVar33;
    if (!bVar12) {
      iVar10 = (int)(lVar16 << 4);
      fVar1 = (float)((double)*(float *)((int)param_2 + iVar10 + 0x10) - dVar24);
      fVar2 = (float)((double)*(float *)((int)param_2 + iVar10 + 0x14) - dVar25);
      fVar3 = (float)((double)*(float *)((int)param_2 + iVar10 + 0x18) - dVar26);
      *(float *)((int)puVar9 + 0x7c) = fVar1;
      *(float *)(puVar9 + 0x10) = fVar2;
      *(float *)((int)puVar9 + 0x84) = ABS(fVar1) - ABS(fVar2);
      uVar19 = (ulonglong)(*(uint *)((int)puVar9 + 0x7c) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar9 + 0x84) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar9 + 0x10) >> 0x1d) & 4;
      fVar4 = ABS(*(float *)((int)puVar9 + 0x7c));
      if (*(float *)((int)puVar9 + 0x84) - 0.0 < 0.0) {
        fVar4 = ABS(fVar2);
      }
      fVar7 = *(float *)(&g_atanQuadrantTable + (int)(uVar19 << 2));
      fVar6 = ABS(*(float *)(puVar9 + 0x10));
      if (*(float *)((int)puVar9 + 0x84) - 0.0 < 0.0) {
        fVar6 = ABS(fVar1);
      }
      fVar5 = *(float *)(((uint)(uVar19 << 2) | 0x735900) + 4);
      dVar29 = dVar33;
      if (0.0 < fVar4) {
        lVar14 = uVar13 - 0x180;
        lVar16 = uVar13 - 0xd0;
        lVar17 = uVar13 - 0xc0;
        lVar21 = 2;
        fVar4 = (fVar6 - fVar4) / (fVar6 + fVar4);
        fVar6 = fVar4 * fVar4;
        *(float *)((int)puVar9 + 0xcc) = fVar4;
        *(float *)((int)puVar9 + 0xc4) = fVar4;
        *(float *)(puVar9 + 0x19) = fVar4;
        *(float *)(puVar9 + 0x18) = fVar4;
        fVar4 = fVar6 * fVar6;
        *(float *)((int)puVar9 + 0xc4) = *(float *)((int)puVar9 + 0xc4) * fVar6;
        *(float *)(puVar9 + 0x19) = *(float *)(puVar9 + 0x19) * fVar4;
        *(float *)((int)puVar9 + 0xcc) = *(float *)((int)puVar9 + 0xcc) * fVar4 * fVar6;
        do {
          *(float *)((int)lVar14 + 0xc0) = *(float *)((int)lVar14 + 0xb0) * fVar4 * fVar4;
          iVar10 = (int)lVar16;
          lVar14 = lVar14 + 8;
          lVar16 = lVar16 + 8;
          *(float *)((int)lVar17 + 4) = *(float *)(iVar10 + 4) * fVar4 * fVar4;
          lVar17 = lVar17 + 8;
          lVar21 = lVar21 + -1;
        } while (lVar21 != 0);
        lVar21 = 4;
        lVar17 = uVar13 - 0xd0;
        pfVar18 = (float *)&DAT_007358e0;
        lVar14 = lVar15;
        lVar16 = lVar17;
        do {
          fVar4 = *pfVar18;
          fVar6 = pfVar18[1];
          pfVar18 = pfVar18 + 2;
          *(float *)((int)lVar14 + 0xc0) = *(float *)((int)lVar14 + 0xc0) * fVar4;
          lVar14 = lVar14 + 8;
          *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar6;
          lVar16 = lVar16 + 8;
          lVar21 = lVar21 + -1;
        } while (lVar21 != 0);
        lVar16 = 2;
        lVar14 = lVar15;
        dVar23 = dVar33;
        do {
          iVar10 = (int)lVar14;
          iVar11 = (int)lVar17;
          lVar14 = lVar14 + 0x10;
          lVar17 = lVar17 + 0x10;
          dVar23 = (double)((float)(dVar23 + (double)*(float *)(iVar10 + 0xc0)) +
                            *(float *)(iVar11 + 4) + *(float *)(iVar11 + 8) +
                           *(float *)(iVar11 + 0xc));
          lVar16 = lVar16 + -1;
        } while (lVar16 != 0);
        dVar29 = (double)((float)(dVar23 + 0.7853981852531433) * fVar7 + fVar5);
      }
      *(float *)((int)puVar9 + 0x74) = fVar3;
      fVar3 = ABS(fVar3);
      fVar1 = SQRT(fVar1 * fVar1 + fVar2 * fVar2);
      fVar2 = ABS(fVar1);
      *(float *)(puVar9 + 0xe) = fVar1;
      *(float *)(puVar9 + 0xf) = fVar2 - fVar3;
      uVar19 = (ulonglong)(*(uint *)(puVar9 + 0xe) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar9 + 0xf) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar9 + 0x74) >> 0x1d) & 4;
      fVar1 = ABS(*(float *)(puVar9 + 0xe));
      if (*(float *)(puVar9 + 0xf) - 0.0 < 0.0) {
        fVar1 = fVar3;
      }
      fVar4 = *(float *)(&g_atanQuadrantTable + (int)(uVar19 << 2));
      fVar3 = *(float *)(((uint)(uVar19 << 2) | 0x735900) + 4);
      fVar7 = ABS(*(float *)((int)puVar9 + 0x74));
      if (*(float *)(puVar9 + 0xf) - 0.0 < 0.0) {
        fVar7 = fVar2;
      }
      dVar23 = dVar33;
      dVar30 = dVar32;
      dVar31 = dVar22;
      if (0.0 < fVar1) {
        lVar14 = uVar13 - 0x180;
        lVar17 = uVar13 - 0xe0;
        lVar16 = uVar13 - 0xf0;
        lVar21 = 2;
        fVar1 = (fVar7 - fVar1) / (fVar7 + fVar1);
        fVar2 = fVar1 * fVar1;
        *(float *)((int)puVar9 + 0xac) = fVar1;
        *(float *)((int)puVar9 + 0xa4) = fVar1;
        *(float *)(puVar9 + 0x15) = fVar1;
        *(float *)(puVar9 + 0x14) = fVar1;
        fVar1 = fVar2 * fVar2;
        *(float *)((int)puVar9 + 0xa4) = *(float *)((int)puVar9 + 0xa4) * fVar2;
        *(float *)(puVar9 + 0x15) = *(float *)(puVar9 + 0x15) * fVar1;
        *(float *)((int)puVar9 + 0xac) = *(float *)((int)puVar9 + 0xac) * fVar1 * fVar2;
        do {
          *(float *)((int)lVar14 + 0xa0) = *(float *)((int)lVar14 + 0x90) * fVar1 * fVar1;
          iVar10 = (int)lVar16;
          lVar16 = lVar16 + 8;
          lVar14 = lVar14 + 8;
          *(float *)((int)lVar17 + 4) = *(float *)(iVar10 + 4) * fVar1 * fVar1;
          lVar17 = lVar17 + 8;
          lVar21 = lVar21 + -1;
        } while (lVar21 != 0);
        lVar21 = 4;
        lVar17 = uVar13 - 0xf0;
        pfVar18 = (float *)&DAT_007358e0;
        lVar14 = lVar15;
        lVar16 = lVar17;
        do {
          fVar1 = *pfVar18;
          fVar2 = pfVar18[1];
          pfVar18 = pfVar18 + 2;
          *(float *)((int)lVar14 + 0xa0) = *(float *)((int)lVar14 + 0xa0) * fVar1;
          lVar14 = lVar14 + 8;
          *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar2;
          lVar16 = lVar16 + 8;
          lVar21 = lVar21 + -1;
        } while (lVar21 != 0);
        lVar14 = 2;
        do {
          iVar10 = (int)lVar15;
          iVar11 = (int)lVar17;
          lVar15 = lVar15 + 0x10;
          lVar17 = lVar17 + 0x10;
          dVar33 = (double)((float)(dVar33 + (double)*(float *)(iVar10 + 0xa0)) +
                            *(float *)(iVar11 + 4) + *(float *)(iVar11 + 8) +
                           *(float *)(iVar11 + 0xc));
          lVar14 = lVar14 + -1;
        } while (lVar14 != 0);
        dVar23 = (double)((float)(dVar33 + 0.7853981852531433) * fVar4 + fVar3);
      }
    }
    *param_6 = 0;
    dVar22 = (double)FastDiffRots(dVar23,dVar27);
    dVar22 = (double)FastWrapRot((float)(dVar22 * dVar34),(float)dVar27);
    param_6[1] = (float)-dVar22;
    dVar22 = (double)FastDiffRots(dVar29,dVar28);
    dVar22 = (double)FastWrapRot((float)(dVar22 * dVar34),(float)dVar28);
    param_6[2] = (float)dVar22;
    dVar22 = (double)FastDiffRots(dVar31,dVar30);
    dVar34 = (double)FastWrapRot((float)(dVar22 * dVar34),(float)dVar30);
    param_6[3] = (float)-dVar34;
  }
  return;
}


// 0x0117c60 (0x58 bytes)
uint32_t MB_HeroStandingOnMoby(MobyInstance *moby)

{
  if ((g_heroStateType == 3) || (g_heroState == EDGE_JUMP)) {
    if (DAT_0096a1d8 == moby) {
      return 1;
    }
  }
  else if ((g_framesNotGrounded == 0) && (g_standingOnMoby == moby)) {
    return 1;
  }
  return 0;
}


// 0x0117cc0 (0x278 bytes)
// inlined: FastAtan2 @0x117df4
undefined8
MB_IsPntInRangeAndArc
          (double param_1,double param_2,double param_3,int param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  ulonglong *puVar6;
  float fVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  float *pfVar18;
  ulonglong in_LR;
  longlong lVar19;
  double dVar20;
  ulonglong in_f31;
  
  uVar11 = ZEXT48(&stack0x00000000);
  lVar13 = uVar11 - 0xb0;
  puVar6 = (ulonglong *)lVar13;
  *puVar6 = uVar11;
  puVar6[0x18] = in_LR;
  puVar6[0x15] = in_f31;
  dVar20 = (double)(param_5[2] - *(float *)(param_4 + 0x18));
  if (ABS(dVar20) <= param_2) {
    fVar2 = param_5[1] - *(float *)(param_4 + 0x14);
    fVar3 = *param_5 - *(float *)(param_4 + 0x10);
    if ((double)SQRT((float)(dVar20 * dVar20 + (double)(fVar3 * fVar3 + fVar2 * fVar2))) <= param_1)
    {
      fVar7 = 0.0;
      if (0.0 < param_3) {
        *(float *)(puVar6 + 0xe) = fVar3;
        *(float *)((int)puVar6 + 0x74) = fVar2;
        fVar1 = *(float *)(param_4 + 0x48);
        *(float *)(puVar6 + 0xf) = ABS(fVar3) - ABS(fVar2);
        uVar15 = (ulonglong)(*(uint *)(puVar6 + 0xe) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar6 + 0xf) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)((int)puVar6 + 0x74) >> 0x1d) & 4;
        fVar4 = ABS(*(float *)(puVar6 + 0xe));
        if (*(float *)(puVar6 + 0xf) - 0.0 < 0.0) {
          fVar4 = ABS(fVar2);
        }
        fVar5 = *(float *)(&g_atanQuadrantTable + (int)(uVar15 << 2));
        fVar2 = *(float *)(((uint)(uVar15 << 2) | 0x735900) + 4);
        fVar10 = ABS(*(float *)((int)puVar6 + 0x74));
        if (*(float *)(puVar6 + 0xf) - 0.0 < 0.0) {
          fVar10 = ABS(fVar3);
        }
        if (0.0 < fVar4) {
          lVar17 = uVar11 - 0xa0;
          lVar14 = uVar11 - 0x24;
          lVar16 = uVar11 - 0x34;
          lVar19 = 2;
          fVar3 = (fVar10 - fVar4) / (fVar10 + fVar4);
          fVar4 = fVar3 * fVar3;
          *(float *)(puVar6 + 0x11) = fVar3;
          *(float *)(puVar6 + 0x10) = fVar3;
          *(float *)((int)puVar6 + 0x84) = fVar3;
          *(float *)((int)puVar6 + 0x7c) = fVar3;
          fVar3 = fVar4 * fVar4;
          *(float *)(puVar6 + 0x10) = *(float *)(puVar6 + 0x10) * fVar4;
          *(float *)((int)puVar6 + 0x84) = *(float *)((int)puVar6 + 0x84) * fVar3;
          *(float *)(puVar6 + 0x11) = *(float *)(puVar6 + 0x11) * fVar3 * fVar4;
          do {
            *(float *)((int)lVar17 + 0x7c) = *(float *)((int)lVar17 + 0x6c) * fVar3 * fVar3;
            iVar8 = (int)lVar16;
            lVar16 = lVar16 + 8;
            lVar17 = lVar17 + 8;
            *(float *)((int)lVar14 + 4) = *(float *)(iVar8 + 4) * fVar3 * fVar3;
            lVar14 = lVar14 + 8;
            lVar19 = lVar19 + -1;
          } while (lVar19 != 0);
          lVar17 = uVar11 - 0x34;
          lVar19 = 4;
          pfVar18 = (float *)&DAT_007358e0;
          lVar14 = lVar17;
          lVar16 = lVar13;
          do {
            fVar3 = *pfVar18;
            fVar4 = pfVar18[1];
            pfVar18 = pfVar18 + 2;
            *(float *)((int)lVar16 + 0x7c) = *(float *)((int)lVar16 + 0x7c) * fVar3;
            lVar16 = lVar16 + 8;
            *(float *)((int)lVar14 + 4) = *(float *)((int)lVar14 + 4) * fVar4;
            lVar14 = lVar14 + 8;
            lVar19 = lVar19 + -1;
          } while (lVar19 != 0);
          lVar14 = 2;
          do {
            iVar8 = (int)lVar13;
            iVar9 = (int)lVar17;
            lVar13 = lVar13 + 0x10;
            lVar17 = lVar17 + 0x10;
            fVar7 = fVar7 + *(float *)(iVar8 + 0x7c) + *(float *)(iVar9 + 4) + *(float *)(iVar9 + 8)
                    + *(float *)(iVar9 + 0xc);
            lVar14 = lVar14 + -1;
          } while (lVar14 != 0);
          fVar7 = (fVar7 + 0.7853982) * fVar5 + fVar2;
        }
        dVar20 = (double)FastSubRots(fVar1,fVar7);
        if (param_3 < dVar20) {
          return 0;
        }
      }
      uVar12 = 1;
    }
    else {
      uVar12 = 0;
    }
  }
  else {
    uVar12 = 0;
  }
  return uVar12;
}


// 0x0117f38 (0xe8 bytes)
void MB_AttachMobyToJoint(MobyInstance *parent,MobyInstance *child,int joint)

{
  MobyModeBit MVar1;
  longlong lVar2;
  Vec4 aVStack_60 [3];
  f32 local_30;
  f32 local_2c;
  f32 local_28;
  f32 local_24;
  
  GetBoneTransformations(parent,joint,aVStack_60);
  (child->pos).x = local_30;
  (child->pos).y = local_2c;
  (child->pos).z = local_28;
  (child->pos).w = local_24;
  UpdateMobyAnimFrame((longlong)(int)child);
  UpdateMobyTransform(child);
  lVar2 = (longlong)(int)child + 0xc0;
  FastApplyTransform((Vec4 *)lVar2,aVStack_60);
  MB_NormalizeMtx3Columns(lVar2);
  PostUpdateMobyLockTransform(child);
  if ((parent->modeBits & DISABLED) == NONE) {
    MVar1 = child->modeBits &
            (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
             DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|
             NO_POST_UPDATE|NO_UPDATE);
  }
  else {
    MVar1 = child->modeBits | (UNK_40|DISABLED);
  }
  child->modeBits = MVar1 | (NO_POST_UPDATE|NO_UPDATE);
  return;
}


// 0x0118020 (0xa4 bytes)
void Spline_ComputeSegmentLengths(longlong param_1)

{
  int *piVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
  int *piVar5;
  
  if ((int)param_1 != -1) {
    iVar4 = 0;
    piVar1 = *(int **)((int)Splines + (int)(param_1 << 2));
    iVar2 = *piVar1;
    piVar5 = piVar1;
    if (0 < iVar2 + -1) {
      do {
        iVar4 = iVar4 + 1;
        pfVar3 = (float *)(piVar1 + (iVar4 - (iVar4 / iVar2) * iVar2) * 4 + 4);
        iVar2 = *piVar1;
        piVar5[7] = (int)SQRT(((float)piVar5[6] - pfVar3[2]) * ((float)piVar5[6] - pfVar3[2]) +
                              ((float)piVar5[4] - *pfVar3) * ((float)piVar5[4] - *pfVar3) +
                              ((float)piVar5[5] - pfVar3[1]) * ((float)piVar5[5] - pfVar3[1]));
        piVar5 = piVar5 + 4;
      } while (iVar4 < iVar2 + -1);
    }
  }
  return;
}


// 0x01180f0 (0xc68 bytes)
// inlined: FastAtan2 @0x118248, FastAtan2 @0x1183dc, FastAtan2 @0x118634, FastAtan2 @0x1187e0, FastAtan2 @0x1189b8
int MB_ComputeRocketAim
              (double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              undefined8 param_5,ulonglong param_6,ulonglong param_7,float *param_8,float *param_9)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  ulonglong *puVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  float *pfVar15;
  longlong lVar14;
  ulonglong uVar16;
  ulonglong unaff_r20;
  ulonglong unaff_r21;
  ulonglong unaff_r22;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  int iVar17;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  int iVar18;
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
  double dVar24;
  double dVar25;
  double dVar26;
  ulonglong in_f17;
  double dVar27;
  ulonglong in_f18;
  double dVar28;
  ulonglong in_f19;
  double dVar29;
  ulonglong in_f20;
  double dVar30;
  ulonglong in_f21;
  double dVar31;
  ulonglong in_f22;
  double dVar32;
  ulonglong in_f23;
  double dVar33;
  ulonglong in_f24;
  ulonglong in_f25;
  double dVar34;
  ulonglong in_f26;
  double dVar35;
  ulonglong in_f27;
  ulonglong in_f28;
  ulonglong in_f29;
  double dVar36;
  ulonglong in_f30;
  double dVar37;
  ulonglong in_f31;
  float fStack00000040;
  float fStack00000044;
  float fStack00000048;
  float fStack00000050;
  float fStack00000054;
  float fStack00000058;
  float *in_stack_00000074;
  
  uVar10 = ZEXT48(&stack0x00000000);
  lVar1 = uVar10 - 0x240;
  puVar8 = (ulonglong *)lVar1;
  *puVar8 = uVar10;
  puVar8[0x4a] = in_LR;
  puVar8[0x39] = in_f17;
  puVar8[0x3a] = in_f18;
  puVar8[0x3b] = in_f19;
  puVar8[0x3c] = in_f20;
  puVar8[0x3d] = in_f21;
  puVar8[0x3e] = in_f22;
  puVar8[0x3f] = in_f23;
  puVar8[0x40] = in_f24;
  puVar8[0x41] = in_f25;
  puVar8[0x42] = in_f26;
  puVar8[0x43] = in_f27;
  puVar8[0x44] = in_f28;
  puVar8[0x45] = in_f29;
  puVar8[0x46] = in_f30;
  puVar8[0x47] = in_f31;
  puVar8[0x2f] = unaff_r22;
  puVar8[0x31] = unaff_r24;
  fStack00000054 = (float)param_6;
  fVar6 = ABS(fStack00000054);
  puVar8[0x35] = unaff_r28;
  fStack00000050 = (float)(param_6 >> 0x20);
  fVar4 = ABS(fStack00000050);
  puVar8[0x38] = unaff_r31;
  puVar8[0x2d] = unaff_r20;
  puVar8[0x37] = unaff_r30;
  puVar8[0x36] = unaff_r29;
  *(float *)((int)puVar8 + 0xbc) = fVar4 - fVar6;
  dVar33 = 0.0;
  fStack00000058 = (float)(param_7 >> 0x20);
  fStack00000040 = (float)((ulonglong)param_4 >> 0x20);
  dVar27 = (double)fStack00000040;
  fStack00000048 = (float)((ulonglong)param_5 >> 0x20);
  dVar30 = (double)fStack00000048;
  fStack00000044 = (float)param_4;
  dVar28 = (double)fStack00000044;
  dVar37 = 0.7853981852531433;
  uVar16 = param_6 >> 0x3c & 8 |
           (ulonglong)(*(uint *)((int)puVar8 + 0xbc) >> 0x1e) & 2 | (param_6 << 0x20) >> 0x3d & 4;
  fVar5 = *(float *)(&g_atanQuadrantTable + (int)(uVar16 << 2));
  fVar3 = fVar4;
  if (*(float *)((int)puVar8 + 0xbc) - 0.0 < 0.0) {
    fVar3 = fVar6;
  }
  fVar2 = *(float *)(((uint)(uVar16 << 2) | 0x735900) + 4);
  if (*(float *)((int)puVar8 + 0xbc) - 0.0 < 0.0) {
    fVar6 = fVar4;
  }
  puVar8[0x34] = unaff_r27;
  puVar8[0x33] = unaff_r26;
  puVar8[0x32] = unaff_r25;
  puVar8[0x30] = unaff_r23;
  puVar8[0x2e] = unaff_r21;
  dVar36 = dVar33;
  if (0.0 < fVar3) {
    lVar11 = uVar10 - 0x230;
    lVar14 = uVar10 - 0xf0;
    lVar13 = uVar10 - 0x100;
    lVar19 = 2;
    fVar3 = (fVar6 - fVar3) / (fVar6 + fVar3);
    fVar6 = fVar3 * fVar3;
    *(float *)(puVar8 + 0x28) = fVar3;
    *(float *)((int)puVar8 + 0x144) = fVar3;
    *(float *)(puVar8 + 0x29) = fVar3;
    *(float *)((int)puVar8 + 0x14c) = fVar3;
    fVar3 = fVar6 * fVar6;
    *(float *)((int)puVar8 + 0x144) = *(float *)((int)puVar8 + 0x144) * fVar6;
    *(float *)(puVar8 + 0x29) = *(float *)(puVar8 + 0x29) * fVar3;
    *(float *)((int)puVar8 + 0x14c) = *(float *)((int)puVar8 + 0x14c) * fVar3 * fVar6;
    do {
      *(float *)((int)lVar11 + 0x140) = *(float *)((int)lVar11 + 0x130) * fVar3 * fVar3;
      iVar7 = (int)lVar13;
      lVar13 = lVar13 + 8;
      lVar11 = lVar11 + 8;
      *(float *)((int)lVar14 + 4) = *(float *)(iVar7 + 4) * fVar3 * fVar3;
      lVar14 = lVar14 + 8;
      lVar19 = lVar19 + -1;
    } while (lVar19 != 0);
    lVar19 = 4;
    lVar14 = uVar10 - 0x100;
    pfVar15 = (float *)&DAT_007358e0;
    lVar11 = lVar1;
    lVar13 = lVar14;
    do {
      fVar3 = *pfVar15;
      fVar6 = pfVar15[1];
      pfVar15 = pfVar15 + 2;
      *(float *)((int)lVar11 + 0x140) = *(float *)((int)lVar11 + 0x140) * fVar3;
      lVar11 = lVar11 + 8;
      *(float *)((int)lVar13 + 4) = *(float *)((int)lVar13 + 4) * fVar6;
      lVar13 = lVar13 + 8;
      lVar19 = lVar19 + -1;
    } while (lVar19 != 0);
    lVar13 = 2;
    lVar11 = lVar1;
    do {
      iVar7 = (int)lVar11;
      iVar18 = (int)lVar14;
      lVar11 = lVar11 + 0x10;
      lVar14 = lVar14 + 0x10;
      dVar36 = (double)((float)(dVar36 + (double)*(float *)(iVar7 + 0x140)) + *(float *)(iVar18 + 4)
                        + *(float *)(iVar18 + 8) + *(float *)(iVar18 + 0xc));
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
    dVar36 = (double)((float)(dVar36 + 0.7853981852531433) * fVar5 + fVar2);
  }
  *param_8 = (float)dVar36;
  fStack00000058 = ABS(fStack00000058);
  fVar5 = SQRT(fStack00000050 * fStack00000050 + fStack00000054 * fStack00000054);
  fVar3 = ABS(fVar5);
  *(float *)((int)puVar8 + 0xb4) = fVar5;
  *(float *)(puVar8 + 0x17) = fVar3 - fStack00000058;
  uVar16 = (ulonglong)(*(uint *)((int)puVar8 + 0xb4) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar8 + 0x17) >> 0x1e) & 2 | param_7 >> 0x3d & 4;
  fVar5 = ABS(*(float *)((int)puVar8 + 0xb4));
  if (*(float *)(puVar8 + 0x17) - 0.0 < 0.0) {
    fVar5 = fStack00000058;
  }
  fVar6 = *(float *)(&g_atanQuadrantTable + (int)(uVar16 << 2));
  if (*(float *)(puVar8 + 0x17) - 0.0 < 0.0) {
    fStack00000058 = fVar3;
  }
  fVar3 = *(float *)(((uint)(uVar16 << 2) | 0x735900) + 4);
  dVar36 = dVar33;
  if (0.0 < fVar5) {
    lVar11 = uVar10 - 0x230;
    lVar13 = uVar10 - 0x120;
    lVar14 = uVar10 - 0x110;
    lVar19 = 2;
    fVar5 = (fStack00000058 - fVar5) / (fStack00000058 + fVar5);
    fVar4 = fVar5 * fVar5;
    *(float *)(puVar8 + 0x24) = fVar5;
    *(float *)((int)puVar8 + 0x124) = fVar5;
    *(float *)(puVar8 + 0x25) = fVar5;
    *(float *)((int)puVar8 + 300) = fVar5;
    fVar5 = fVar4 * fVar4;
    *(float *)((int)puVar8 + 0x124) = *(float *)((int)puVar8 + 0x124) * fVar4;
    *(float *)(puVar8 + 0x25) = *(float *)(puVar8 + 0x25) * fVar5;
    *(float *)((int)puVar8 + 300) = *(float *)((int)puVar8 + 300) * fVar5 * fVar4;
    do {
      *(float *)((int)lVar11 + 0x120) = *(float *)((int)lVar11 + 0x110) * fVar5 * fVar5;
      iVar7 = (int)lVar13;
      lVar11 = lVar11 + 8;
      lVar13 = lVar13 + 8;
      *(float *)((int)lVar14 + 4) = *(float *)(iVar7 + 4) * fVar5 * fVar5;
      lVar14 = lVar14 + 8;
      lVar19 = lVar19 + -1;
    } while (lVar19 != 0);
    lVar19 = 4;
    lVar14 = uVar10 - 0x120;
    pfVar15 = (float *)&DAT_007358e0;
    lVar11 = lVar1;
    lVar13 = lVar14;
    do {
      fVar5 = *pfVar15;
      fVar4 = pfVar15[1];
      pfVar15 = pfVar15 + 2;
      *(float *)((int)lVar11 + 0x120) = *(float *)((int)lVar11 + 0x120) * fVar5;
      lVar11 = lVar11 + 8;
      *(float *)((int)lVar13 + 4) = *(float *)((int)lVar13 + 4) * fVar4;
      lVar13 = lVar13 + 8;
      lVar19 = lVar19 + -1;
    } while (lVar19 != 0);
    lVar13 = 2;
    lVar11 = lVar1;
    do {
      iVar7 = (int)lVar11;
      lVar11 = lVar11 + 0x10;
      iVar18 = (int)lVar14;
      lVar14 = lVar14 + 0x10;
      dVar36 = (double)((float)(dVar36 + (double)*(float *)(iVar7 + 0x120)) + *(float *)(iVar18 + 4)
                        + *(float *)(iVar18 + 8) + *(float *)(iVar18 + 0xc));
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
    dVar36 = (double)((float)(dVar36 + 0.7853981852531433) * fVar6 + fVar3);
  }
  iVar7 = MobyUpdateChainStart;
  iVar18 = 0;
  *param_9 = (float)-dVar36;
  dVar36 = 10000.0;
  _fStack00000050 = param_6;
  _fStack00000040 = param_4;
  _fStack00000048 = param_5;
  _fStack00000058 = param_7;
  do {
    if (iVar7 == 0) {
      return iVar18;
    }
    if (*(byte *)(iVar7 + 0x20) < 0x80) {
      dVar35 = (double)*(float *)(iVar7 + 0x10);
      *(float *)(puVar8 + 0xe) = *(float *)(iVar7 + 0x10);
      dVar22 = (double)*(float *)(iVar7 + 0x14);
      *(float *)((int)puVar8 + 0x74) = *(float *)(iVar7 + 0x14);
      fVar5 = *(float *)(iVar7 + 0x18);
      *(float *)(puVar8 + 0xf) = fVar5;
      *(undefined4 *)((int)puVar8 + 0x7c) = *(undefined4 *)(iVar7 + 0x1c);
      if ((*(ushort *)(iVar7 + 0x34) & 0x20) == 0) {
        iVar17 = 0;
LAB_0011855c:
        fVar3 = 0.5;
      }
      else {
        iVar17 = **(int **)(iVar7 + 0x78);
        if (iVar17 == 0) goto LAB_0011855c;
        fVar3 = *(float *)(iVar17 + 0x10);
      }
      fVar5 = fVar5 + fVar3;
      dVar20 = (double)fVar5;
      *(float *)(puVar8 + 0xf) = fVar5;
      if ((((*(ushort *)(iVar7 + 0x34) & 0x1000) != 0) && (*(int *)(iVar7 + 0x24) != 0)) &&
         (*(short *)(*(int *)(iVar7 + 0x24) + 0x46) == 5)) {
        fVar5 = (float)(dVar35 - dVar27);
        fVar3 = (float)(dVar22 - dVar28);
        dVar26 = ABS((double)fVar5);
        dVar25 = ABS((double)fVar3);
        *(float *)(puVar8 + 0x15) = fVar5;
        *(float *)((int)puVar8 + 0xac) = fVar3;
        *(float *)(puVar8 + 0x16) = (float)(dVar26 - dVar25);
        uVar16 = (ulonglong)(*(uint *)(puVar8 + 0x15) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar8 + 0x16) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)((int)puVar8 + 0xac) >> 0x1d) & 4;
        dVar24 = ABS((double)*(float *)(puVar8 + 0x15));
        if ((double)*(float *)(puVar8 + 0x16) - dVar33 < 0.0) {
          dVar24 = dVar25;
        }
        fVar5 = *(float *)(&g_atanQuadrantTable + (int)(uVar16 << 2));
        dVar25 = ABS((double)*(float *)((int)puVar8 + 0xac));
        if ((double)*(float *)(puVar8 + 0x16) - dVar33 < 0.0) {
          dVar25 = dVar26;
        }
        fVar3 = *(float *)(((uint)(uVar16 << 2) | 0x735900) + 4);
        dVar26 = dVar33;
        if (dVar33 < dVar24) {
          lVar11 = uVar10 - 0x230;
          lVar13 = uVar10 - 0x140;
          lVar14 = uVar10 - 0x130;
          lVar19 = 2;
          fVar6 = (float)(dVar25 - dVar24) / (float)(dVar25 + dVar24);
          fVar4 = fVar6 * fVar6;
          *(float *)(puVar8 + 0x20) = fVar6;
          *(float *)((int)puVar8 + 0x104) = fVar6;
          *(float *)(puVar8 + 0x21) = fVar6;
          *(float *)((int)puVar8 + 0x10c) = fVar6;
          fVar6 = fVar4 * fVar4;
          *(float *)((int)puVar8 + 0x104) = *(float *)((int)puVar8 + 0x104) * fVar4;
          *(float *)(puVar8 + 0x21) = *(float *)(puVar8 + 0x21) * fVar6;
          *(float *)((int)puVar8 + 0x10c) = *(float *)((int)puVar8 + 0x10c) * fVar6 * fVar4;
          do {
            *(float *)((int)lVar11 + 0x100) = *(float *)((int)lVar11 + 0xf0) * fVar6 * fVar6;
            iVar12 = (int)lVar13;
            lVar11 = lVar11 + 8;
            lVar13 = lVar13 + 8;
            *(float *)((int)lVar14 + 4) = *(float *)(iVar12 + 4) * fVar6 * fVar6;
            lVar14 = lVar14 + 8;
            lVar19 = lVar19 + -1;
          } while (lVar19 != 0);
          lVar19 = 4;
          lVar14 = uVar10 - 0x140;
          pfVar15 = (float *)&DAT_007358e0;
          lVar11 = lVar1;
          lVar13 = lVar14;
          do {
            fVar6 = *pfVar15;
            fVar4 = pfVar15[1];
            pfVar15 = pfVar15 + 2;
            *(float *)((int)lVar11 + 0x100) = *(float *)((int)lVar11 + 0x100) * fVar6;
            lVar11 = lVar11 + 8;
            *(float *)((int)lVar13 + 4) = *(float *)((int)lVar13 + 4) * fVar4;
            lVar13 = lVar13 + 8;
            lVar19 = lVar19 + -1;
          } while (lVar19 != 0);
          lVar13 = 2;
          lVar11 = lVar1;
          dVar24 = dVar33;
          do {
            iVar12 = (int)lVar11;
            lVar11 = lVar11 + 0x10;
            iVar9 = (int)lVar14;
            lVar14 = lVar14 + 0x10;
            dVar24 = (double)((float)(dVar24 + (double)*(float *)(iVar12 + 0x100)) +
                              *(float *)(iVar9 + 4) + *(float *)(iVar9 + 8) +
                             *(float *)(iVar9 + 0xc));
            lVar13 = lVar13 + -1;
          } while (lVar13 != 0);
          dVar26 = (double)((float)(dVar24 + dVar37) * fVar5 + fVar3);
        }
        fVar5 = (float)(dVar28 - dVar22);
        fVar3 = (float)(dVar27 - dVar35);
        fVar6 = (float)(dVar20 - dVar30);
        dVar24 = ABS((double)fVar6);
        *(float *)(puVar8 + 0x14) = fVar6;
        fVar5 = fVar3 * fVar3 + fVar5 * fVar5;
        fVar3 = SQRT(fVar5);
        dVar35 = ABS((double)fVar3);
        *(float *)((int)puVar8 + 0x9c) = fVar3;
        *(float *)((int)puVar8 + 0xa4) = (float)(dVar35 - dVar24);
        uVar16 = (ulonglong)(*(uint *)((int)puVar8 + 0x9c) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)((int)puVar8 + 0xa4) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)(puVar8 + 0x14) >> 0x1d) & 4;
        dVar22 = ABS((double)*(float *)((int)puVar8 + 0x9c));
        if ((double)*(float *)((int)puVar8 + 0xa4) - dVar33 < 0.0) {
          dVar22 = dVar24;
        }
        fVar3 = *(float *)(&g_atanQuadrantTable + (int)(uVar16 << 2));
        dVar24 = ABS((double)*(float *)(puVar8 + 0x14));
        if ((double)*(float *)((int)puVar8 + 0xa4) - dVar33 < 0.0) {
          dVar24 = dVar35;
        }
        fVar6 = *(float *)(((uint)(uVar16 << 2) | 0x735900) + 4);
        dVar35 = dVar33;
        if (dVar33 < dVar22) {
          lVar11 = uVar10 - 0x230;
          lVar14 = uVar10 - 0x150;
          lVar13 = uVar10 - 0x160;
          lVar19 = 2;
          fVar4 = (float)(dVar24 - dVar22) / (float)(dVar24 + dVar22);
          fVar2 = fVar4 * fVar4;
          *(float *)(puVar8 + 0x1c) = fVar4;
          *(float *)((int)puVar8 + 0xe4) = fVar4;
          *(float *)(puVar8 + 0x1d) = fVar4;
          *(float *)((int)puVar8 + 0xec) = fVar4;
          fVar4 = fVar2 * fVar2;
          *(float *)((int)puVar8 + 0xe4) = *(float *)((int)puVar8 + 0xe4) * fVar2;
          *(float *)(puVar8 + 0x1d) = *(float *)(puVar8 + 0x1d) * fVar4;
          *(float *)((int)puVar8 + 0xec) = *(float *)((int)puVar8 + 0xec) * fVar4 * fVar2;
          do {
            *(float *)((int)lVar11 + 0xe0) = *(float *)((int)lVar11 + 0xd0) * fVar4 * fVar4;
            iVar12 = (int)lVar13;
            lVar13 = lVar13 + 8;
            lVar11 = lVar11 + 8;
            *(float *)((int)lVar14 + 4) = *(float *)(iVar12 + 4) * fVar4 * fVar4;
            lVar14 = lVar14 + 8;
            lVar19 = lVar19 + -1;
          } while (lVar19 != 0);
          lVar19 = 4;
          lVar14 = uVar10 - 0x160;
          pfVar15 = (float *)&DAT_007358e0;
          lVar11 = lVar1;
          lVar13 = lVar14;
          do {
            fVar4 = *pfVar15;
            fVar2 = pfVar15[1];
            pfVar15 = pfVar15 + 2;
            *(float *)((int)lVar11 + 0xe0) = *(float *)((int)lVar11 + 0xe0) * fVar4;
            lVar11 = lVar11 + 8;
            *(float *)((int)lVar13 + 4) = *(float *)((int)lVar13 + 4) * fVar2;
            lVar13 = lVar13 + 8;
            lVar19 = lVar19 + -1;
          } while (lVar19 != 0);
          lVar13 = 2;
          lVar11 = lVar1;
          dVar22 = dVar33;
          do {
            iVar12 = (int)lVar11;
            iVar9 = (int)lVar14;
            lVar11 = lVar11 + 0x10;
            lVar14 = lVar14 + 0x10;
            dVar22 = (double)((float)(dVar22 + (double)*(float *)(iVar12 + 0xe0)) +
                              *(float *)(iVar9 + 4) + *(float *)(iVar9 + 8) +
                             *(float *)(iVar9 + 0xc));
            lVar13 = lVar13 + -1;
          } while (lVar13 != 0);
          dVar35 = (double)((float)(dVar22 + dVar37) * fVar3 + fVar6);
        }
        fVar3 = (float)(dVar30 - dVar20);
        dVar22 = (double)SQRT(fVar3 * fVar3 + fVar5);
        if (dVar22 < 7.5) {
          fVar3 = *(float *)(iVar7 + 0x10) - g_heroPosition.x;
          fVar6 = *(float *)(iVar7 + 0x14) - g_heroPosition.y;
          fVar5 = (g_heroMobyPtr->rotation).z;
          dVar24 = ABS((double)fVar3);
          dVar25 = ABS((double)fVar6);
          *(float *)(puVar8 + 0x12) = fVar3;
          *(float *)((int)puVar8 + 0x94) = fVar6;
          *(float *)(puVar8 + 0x13) = (float)(dVar24 - dVar25);
          uVar16 = (ulonglong)(*(uint *)(puVar8 + 0x12) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)(puVar8 + 0x13) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)((int)puVar8 + 0x94) >> 0x1d) & 4;
          dVar20 = ABS((double)*(float *)(puVar8 + 0x12));
          if ((double)*(float *)(puVar8 + 0x13) - dVar33 < 0.0) {
            dVar20 = dVar25;
          }
          fVar3 = *(float *)(&g_atanQuadrantTable + (int)(uVar16 << 2));
          dVar25 = ABS((double)*(float *)((int)puVar8 + 0x94));
          if ((double)*(float *)(puVar8 + 0x13) - dVar33 < 0.0) {
            dVar25 = dVar24;
          }
          fVar6 = *(float *)(((uint)(uVar16 << 2) | 0x735900) + 4);
          dVar24 = dVar33;
          if (dVar33 < dVar20) {
            lVar11 = uVar10 - 0x230;
            lVar14 = uVar10 - 0x170;
            lVar13 = uVar10 - 0x180;
            lVar19 = 2;
            fVar4 = (float)(dVar25 - dVar20) / (float)(dVar25 + dVar20);
            fVar2 = fVar4 * fVar4;
            *(float *)(puVar8 + 0x18) = fVar4;
            *(float *)((int)puVar8 + 0xc4) = fVar4;
            *(float *)(puVar8 + 0x19) = fVar4;
            *(float *)((int)puVar8 + 0xcc) = fVar4;
            fVar4 = fVar2 * fVar2;
            *(float *)((int)puVar8 + 0xc4) = *(float *)((int)puVar8 + 0xc4) * fVar2;
            *(float *)(puVar8 + 0x19) = *(float *)(puVar8 + 0x19) * fVar4;
            *(float *)((int)puVar8 + 0xcc) = *(float *)((int)puVar8 + 0xcc) * fVar4 * fVar2;
            do {
              *(float *)((int)lVar11 + 0xc0) = *(float *)((int)lVar11 + 0xb0) * fVar4 * fVar4;
              iVar12 = (int)lVar13;
              lVar13 = lVar13 + 8;
              lVar11 = lVar11 + 8;
              *(float *)((int)lVar14 + 4) = *(float *)(iVar12 + 4) * fVar4 * fVar4;
              lVar14 = lVar14 + 8;
              lVar19 = lVar19 + -1;
            } while (lVar19 != 0);
            lVar19 = 4;
            lVar14 = uVar10 - 0x180;
            pfVar15 = (float *)&DAT_007358e0;
            lVar11 = lVar1;
            lVar13 = lVar14;
            do {
              fVar4 = *pfVar15;
              fVar2 = pfVar15[1];
              pfVar15 = pfVar15 + 2;
              *(float *)((int)lVar11 + 0xc0) = *(float *)((int)lVar11 + 0xc0) * fVar4;
              lVar11 = lVar11 + 8;
              *(float *)((int)lVar13 + 4) = *(float *)((int)lVar13 + 4) * fVar2;
              lVar13 = lVar13 + 8;
              lVar19 = lVar19 + -1;
            } while (lVar19 != 0);
            lVar13 = 2;
            lVar11 = lVar1;
            dVar20 = dVar33;
            do {
              iVar12 = (int)lVar11;
              iVar9 = (int)lVar14;
              lVar11 = lVar11 + 0x10;
              lVar14 = lVar14 + 0x10;
              dVar20 = (double)((float)(dVar20 + (double)*(float *)(iVar12 + 0xc0)) +
                                *(float *)(iVar9 + 4) + *(float *)(iVar9 + 8) +
                               *(float *)(iVar9 + 0xc));
              lVar13 = lVar13 + -1;
            } while (lVar13 != 0);
            dVar24 = (double)((float)(dVar20 + dVar37) * fVar3 + fVar6);
          }
          dVar20 = (double)FastSubRots(fVar5,(float)dVar24);
          if ((dVar20 < 1.0471975803375244) && (ABS(dVar35) < 1.0471975803375244)) {
            *param_9 = (float)-dVar35;
            *param_8 = (float)dVar26;
            return iVar7;
          }
        }
        if (dVar22 <= dVar36) {
          dVar32 = 0.5;
          MB_SphericalToVector
                    ((float)dVar22,*param_8,DAT_00969fc4 * 0.5 + *param_9,(float *)(puVar8 + 0x10));
          fVar5 = (float)((double)*(float *)((int)puVar8 + 0x84) + dVar28);
          fVar3 = fVar5 - *(float *)((int)puVar8 + 0x74);
          fVar6 = (float)((double)*(float *)(puVar8 + 0x10) + dVar27) - *(float *)(puVar8 + 0xe);
          *(float *)(puVar8 + 0x10) = (float)((double)*(float *)(puVar8 + 0x10) + dVar27);
          fVar4 = (float)((double)*(float *)(puVar8 + 0x11) + dVar30) - *(float *)(puVar8 + 0xf);
          *(float *)((int)puVar8 + 0x84) = fVar5;
          *(float *)(puVar8 + 0x11) = (float)((double)*(float *)(puVar8 + 0x11) + dVar30);
          dVar34 = 1.0;
          dVar25 = -1.0;
          dVar24 = (double)(SQRT(fVar4 * fVar4 + fVar6 * fVar6 + fVar3 * fVar3) /
                           (float)(dVar22 * 2.0));
          dVar31 = 1.5707963705062866;
          dVar20 = dVar24;
          if (dVar24 - dVar33 < 0.0) {
            dVar20 = ABS(dVar24);
          }
          dVar21 = dVar34;
          if (dVar24 - dVar33 < 0.0) {
            dVar21 = dVar25;
          }
          dVar24 = (double)(float)(1.0 - dVar20);
          if ((double)(float)(1.0 - dVar20) - dVar33 < 0.0) {
            dVar24 = dVar33;
          }
          dVar20 = (double)((float)(-(double)(((float)((double)(float)(dVar20 * dVar20) * dVar20) *
                                               DAT_007358cc +
                                              (float)((double)(float)(dVar20 * dVar20) *
                                                      (double)DAT_007358c8 +
                                                     (double)(float)(dVar20 * (double)DAT_007358c4 +
                                                                    (double)DAT_007358c0))) *
                                              (float)SQRT(dVar24) - 1.5707964) * dVar21) * 2.0);
          if ((param_1 < dVar20) && (iVar17 != 0)) {
            dVar21 = (double)FastIntToDouble((ulonglong)*(byte *)(iVar17 + 10) << 3);
            dVar23 = (double)(float)((double)(float)(dVar21 * 0.125) / dVar22);
            dVar24 = dVar23;
            if (dVar23 - dVar33 < 0.0) {
              dVar24 = ABS(dVar23);
            }
            dVar29 = dVar34;
            if (dVar23 - dVar33 < 0.0) {
              dVar29 = dVar25;
            }
            dVar25 = (double)(float)(dVar34 - dVar24);
            if ((double)(float)(dVar34 - dVar24) - dVar33 < 0.0) {
              dVar25 = dVar33;
            }
            if ((double)(float)(dVar21 * 0.125) < dVar22) {
              dVar20 = -(double)(float)(-(double)(float)((double)((float)((double)(float)(dVar24 * 
                                                  dVar24) * dVar24) * DAT_007358cc +
                                                  (float)((double)(float)(dVar24 * dVar24) *
                                                          (double)DAT_007358c8 +
                                                         (double)(float)(dVar24 * (double)
                                                  DAT_007358c4 + (double)DAT_007358c0))) *
                                                  (double)(float)SQRT(dVar25) - dVar31) * dVar29 -
                                       dVar20);
            }
          }
          if ((dVar20 < param_1) &&
             (iVar12 = CollLine(0x951500,uVar10 - 0x1d0,6,param_2,0), iVar12 == 0)) {
            *param_9 = (float)-dVar35;
            *param_8 = (float)dVar26;
            if (iVar17 != 0) {
              dVar32 = (double)*(float *)(iVar17 + 0x10);
            }
            *in_stack_00000074 = (float)dVar32;
            dVar36 = dVar22;
            iVar18 = iVar7;
          }
        }
      }
    }
    iVar7 = *(int *)(iVar7 + 0x28);
  } while( true );
}


// 0x0118d60 (0x9c bytes)
/* [p2_mobyutil] lerp(min,max) by byte value in 2D grid DAT_00a204a8 (stride DAT_00a20498)
   [p2_mobyutil] lerp(min,max) by byte value in 2D grid DAT_00a204a8 (stride DAT_00a20498) */

double MB_SampleByteGrid(undefined8 param_1)

{
  float fStack00000030;
  float fStack00000034;
  
  fStack00000034 = (float)param_1;
  fStack00000030 = (float)((ulonglong)param_1 >> 0x20);
  return (double)((DAT_00a204a4 - DAT_00a204a0) *
                  -((float)*(byte *)(g_byteGridData + g_byteGridStride * (int)fStack00000034 +
                                    (int)fStack00000030) * 0.003921569 - 1.0) + DAT_00a204a0);
}


// 0x0118e38 (0x1e4 bytes)
void MB_SpawnGridParticles(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong unaff_r31;
  byte in_cr6;
  ulonglong in_LR;
  GPiece<16> auVar6;
  GPiece<16> auVar7;
  GPiece<16> auVar8;
  GPiece<16> auVar9;
  GPiece<16> auVar10;
  GPiece<16> auVar11;
  GPiece<16> auVar12;
  GPiece<16> auVar13;
  float fStack00000030;
  float fStack00000034;
  undefined8 uStack00000038;
  
  uVar3 = ZEXT48(&stack0x00000000);
  puVar2 = (ulonglong *)(uVar3 - 0xb0);
  *puVar2 = uVar3;
  puVar2[0x18] = in_LR;
  iVar4 = g_byteGridStride;
  fStack00000034 = (float)param_1;
  auVar10 = ZEXT416(0xffffffff);
  auVar9 = auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60;
  auVar10 = ZEXT416(0xfffffff8);
  uVar5 = (ulonglong)g_byteGridData;
  fStack00000030 = (float)((ulonglong)param_1 >> 0x20);
  auVar6 = loadVectorLeftIndexed(0x4a4,0xa20000);
  auVar8 = loadVectorLeftIndexed(0x4a0,0xa20000);
  auVar11 = loadVectorLeftIndexed(in_LR,0x118e00);
  auVar7 = vectorSubtractFloatingPoint(auVar6,auVar8);
  auVar9 = vectorShiftLeftIntegerWord(auVar9,auVar9);
  auVar6 = auVar11 >> 0x60 & (GPiece<16>)0xffffffff;
  puVar2[0x12] = (longlong)(int)fStack00000030;
  puVar2[0x12] = (longlong)(int)fStack00000034;
  auVar11 = loadVectorLeftIndexed(4,0x118e00);
  auVar12 = loadVectorLeftIndexed
                      (in_LR,uVar5 + (longlong)iVar4 * (longlong)*(int *)((int)puVar2 + 0x94) +
                             (ulonglong)*(uint *)((int)puVar2 + 0x94) & 0xffffffff);
  auVar13 = loadVectorLeftIndexed(8,0x118e00);
  auVar12 = vectorShiftRightWord
                      (auVar12,auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60);
  auVar9 = vectorMultiplyAddFloatingPoint
                     (auVar7,auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60,auVar9);
  auVar10 = auVar11 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar6 = auVar13 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar11 = vectorConvertFromUnsignedFixedPointWord(auVar12,0);
  auVar10 = vectorNegativeMultiplySubtractFloatingPoint
                      (auVar11,auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60,
                       auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60);
  auVar11 = loadVectorLeftIndexed(0x148,0x9513c0);
  uStack00000038.piece<4,4>() = (undefined4)param_2;
  auVar10 = vectorMultiplyAddFloatingPoint(auVar7,auVar10,auVar8);
  auVar6 = vectorAddFloatingPoint(auVar10,auVar9);
  auVar10 = auVar6 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar7 = auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60;
  uVar1 = storeVectorElementWordIndexed(auVar7,0x38,uVar3);
  *(undefined4 *)(puVar2 + 0x1d) = uVar1;
  auVar10 = loadVectorLeftIndexed(0xc,0x118e00);
  auVar10 = auVar10 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar10 = vectorAddFloatingPoint
                      (auVar11,auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60);
  auVar10 = auVar10 >> 0x60 & (GPiece<16>)0xffffffff;
  vectorCompareGreaterThanOrEqualToFloatingPoint
            (auVar7,auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60);
  puVar2[0x15] = unaff_r31;
  if ((bool)(in_cr6 >> 1 & 1)) {
    *(float *)(puVar2 + 0xe) = fStack00000030;
    *(float *)((int)puVar2 + 0x74) = fStack00000034;
    *(undefined4 *)((int)puVar2 + 0x7c) = uStack00000038.piece<4,4>();
    auVar10 = loadVectorLeftIndexed(0x10,0x118e00);
    auVar10 = auVar10 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar10 = vectorNegativeMultiplySubtractFloatingPoint
                        (auVar9,auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60,auVar6
                        );
    auVar10 = auVar10 >> 0x60 & (GPiece<16>)0xffffffff;
    uVar1 = storeVectorElementWordIndexed
                      (auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60,0x78,
                       uVar3 - 0xb0);
    *(undefined4 *)(puVar2 + 0xf) = uVar1;
    _fStack00000030 = param_1;
    uStack00000038 = param_2;
    iVar4 = CollLine(uVar3 + 0x30 & 0xffffffff,uVar3 - 0x40,0x12,0,0,0x78,&GameCamera,
                               0x148);
    if (iVar4 != 0) {
      FastVecSub(uVar3 - 0x30,0xa10960,0x951500);
      puVar2[0x12] = (longlong)
                     (SQRT(*(float *)(puVar2 + 0x10) * *(float *)(puVar2 + 0x10) +
                           *(float *)((int)puVar2 + 0x84) * *(float *)((int)puVar2 + 0x84)) *
                      0.016666668 * 191.0 + 64.0);
      SpawnPart_1
                ((PartInstance *)&g_CollOutput.ip,(ulonglong)*(uint *)((int)puVar2 + 0x94) & 0xff);
    }
  }
  return;
}


// 0x0119028 (0x340 bytes)
// inlined: FastRSqrt @0x11917c, FastRSqrt @0x1191ec
void MB_DrawGlowFX(double param_1,double param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float *pfVar10;
  float *pfVar11;
  longlong lVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  float local_e0 [36];
  
  GetEffectTex(0xb);
  idol_draw::PackCmd(0,2,0,1,0x80);
  SCE_GS_SET_TEX1(0,0,1,1,1,0,0xff90);
  SCE_GS_SET_CLAMP(1,1,0,0,0,0);
  dVar14 = 0.0;
  fVar4 = param_3[1];
  fVar5 = *param_3;
  fVar1 = (float)((double)GameCamera.posY - (double)fVar4);
  fVar6 = param_3[2];
  fVar2 = (float)((double)GameCamera.posX - (double)fVar5);
  fVar3 = (float)((double)GameCamera.posZ - (double)fVar6);
  fVar7 = param_3[3];
  dVar13 = (double)(float)GameCamera.field8_0x14c;
  fVar9 = fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1;
  dVar15 = dVar14;
  dVar16 = dVar14;
  dVar17 = dVar14;
  if (SQRT(fVar9) != 0.0) {
    fVar8 = 1.0 / SQRT(fVar9);
    fVar8 = -(fVar9 * fVar8 * fVar8 - 1.0) * fVar8 * 0.5 + fVar8;
    fVar8 = -(fVar9 * fVar8 * fVar8 - 1.0) * fVar8 * 0.5 + fVar8;
    fVar8 = -(fVar9 * fVar8 * fVar8 - 1.0) * fVar8 * 0.5 + fVar8;
    dVar17 = (double)(fVar2 * fVar8);
    dVar16 = (double)(fVar1 * fVar8);
    dVar15 = (double)(fVar3 * fVar8);
  }
  fVar1 = (float)(dVar17 * dVar17 + --(double)(float)(dVar16 * dVar16));
  dVar18 = dVar14;
  if (SQRT(fVar1) != 0.0) {
    fVar2 = 1.0 / SQRT(fVar1);
    fVar2 = -(fVar1 * fVar2 * fVar2 - 1.0) * fVar2 * 0.5 + fVar2;
    fVar2 = -(fVar1 * fVar2 * fVar2 - 1.0) * fVar2 * 0.5 + fVar2;
    dVar18 = (double)(-(fVar1 * fVar2 * fVar2 - 1.0) * fVar2 * 0.5 + fVar2);
    dVar14 = (double)(float)(dVar17 * dVar18);
    dVar18 = -(double)(float)(dVar16 * dVar18);
  }
  pfVar10 = (float *)&DAT_007294b0;
  pfVar11 = local_e0;
  lVar12 = 4;
  do {
    fVar2 = *pfVar10;
    fVar1 = (float)((double)fVar2 * param_1);
    dVar20 = (double)fVar1;
    *pfVar11 = fVar1;
    dVar19 = (double)pfVar10[1];
    pfVar11[1] = (float)(dVar19 * param_1);
    fVar1 = (float)((double)pfVar10[2] * param_1);
    pfVar11[2] = fVar1;
    fVar3 = pfVar10[3];
    pfVar10 = pfVar10 + 4;
    pfVar11[3] = fVar3 * fVar7 + (float)((double)fVar2 * (double)(float)(param_1 * dVar13));
    *pfVar11 = fVar3 * (float)(dVar17 * param_2 + (double)fVar5) +
               fVar1 * (float)(dVar16 * 0.0 - (double)(float)(dVar15 * dVar14)) +
               (float)(dVar20 * dVar17 + (double)(float)(dVar19 * (double)(float)(param_1 * dVar18))
                      );
    pfVar11[1] = fVar3 * (float)(dVar16 * param_2 + (double)fVar4) +
                 fVar1 * (float)(dVar15 * dVar18 - 0.0) +
                 (float)(dVar20 * dVar16 +
                        (double)(float)(dVar19 * (double)(float)(param_1 * dVar14)));
    pfVar11[2] = fVar3 * (float)(dVar15 * param_2 + (double)fVar6) +
                 fVar1 * (float)(dVar17 * dVar14 - (double)(float)(dVar16 * dVar18)) +
                 (float)(dVar20 * dVar15 + 0.0);
    pfVar11 = pfVar11 + 4;
    lVar12 = lVar12 + -1;
  } while (lVar12 != 0);
  FastDrawQuad(local_e0,0,0,EffectTexHeaders,9);
  return;
}


// 0x0119370 (0xf4 bytes)
void ____MB_SetFadeByDistToHero(double param_1,int param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  float fVar5;
  int iVar6;
  
  if ((((param_2 != 0) && (param_2 != 0)) && ((*(ushort *)(param_2 + 0x34) & 0x20) != 0)) &&
     (iVar1 = **(int **)(param_2 + 0x78), iVar1 != 0)) {
    fVar2 = g_heroPosition.y - *(float *)(param_2 + 0x14);
    fVar3 = g_heroPosition.x - *(float *)(param_2 + 0x10);
    fVar5 = g_heroPosition.z - *(float *)(param_2 + 0x18);
    iVar6 = FastDoubleToInt
                      ((double)(float)((double)(SQRT(fVar5 * fVar5 + fVar3 * fVar3 + fVar2 * fVar2)
                                               * 8.0) * param_1));
    iVar6 = iVar6 + -1;
    cVar4 = (char)iVar6 + ((byte)(iVar6 >> 7) & -(char)iVar6);
    *(byte *)(iVar1 + 10) = cVar4 + ((byte)(0xff - (longlong)iVar6 >> 0x3f) & -cVar4 - 1U);
  }
  return;
}


// 0x0119488 (0x138 bytes)
void MB_SetPointAheadOfMoby(double param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  double dVar10;
  
  fVar1 = *(float *)(param_2 + 0x48);
  fVar2 = fVar1 + 1.5707963;
  fVar3 = 3.1415925 - fVar1;
  if (fVar1 - (3.1415925 - fVar1) < 0.0) {
    fVar3 = fVar1;
  }
  fVar5 = 3.1415925 - fVar2;
  if (fVar2 - (3.1415925 - fVar2) < 0.0) {
    fVar5 = fVar2;
  }
  fVar4 = -3.1415925 - fVar1;
  if ((-3.1415925 - fVar1) - fVar3 < 0.0) {
    fVar4 = fVar3;
  }
  fVar3 = -3.1415925 - fVar2;
  if ((-3.1415925 - fVar2) - fVar5 < 0.0) {
    fVar3 = fVar5;
  }
  fVar2 = fVar4 * fVar4;
  fVar5 = fVar3 * fVar3;
  fVar8 = fVar2 * fVar2 * fVar4;
  fVar6 = fVar5 * fVar5 * fVar3;
  fVar9 = fVar2 * fVar8;
  DAT_0095cd68 = *(undefined4 *)(param_2 + 0x18);
  DAT_0095cd6c = *(undefined4 *)(param_2 + 0x1c);
  fVar7 = fVar5 * fVar6;
  DAT_0095cd7c = 0;
  DAT_0095cd78 = 0.0;
  DAT_0095cd74 = 0;
  DAT_0095cd70 = 0;
  DAT_0095cd64 = (float)((double)(fVar2 * fVar9 * 2.601887e-06 +
                                 fVar9 * -0.0001980741 +
                                 fVar8 * 0.0083330255 + fVar2 * fVar4 * -0.16666657 + fVar4) *
                         param_1 + (double)*(float *)(param_2 + 0x14));
  DAT_0095cd60 = (float)((double)(fVar5 * fVar7 * 2.601887e-06 +
                                 fVar7 * -0.0001980741 +
                                 fVar6 * 0.0083330255 + fVar5 * fVar3 * -0.16666657 + fVar3) *
                         param_1 + (double)*(float *)(param_2 + 0x10));
  DAT_0095cd9a = 1;
  dVar10 = (double)FastWrapRot(fVar1,3.1415927);
  DAT_0095cd78 = (float)dVar10;
  return;
}


// 0x0119600 (0x418 bytes)
void MB_SpawnSparks_oClass2EE(int param_1)

{
  undefined1 uVar1;
  undefined2 uVar2;
  uint uVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  double dVar8;
  double dVar9;
  undefined8 uVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  GPiece<16> auVar14;
  GPiece<16> auVar15;
  GPiece<16> auVar16;
  GPiece<16> local_c0;
  float local_b0;
  float local_ac;
  float local_a8;
  
  if ((*(short *)(param_1 + 0xa6) == 0x2ee) && (param_1 != 0)) {
    GetBoneTransformations(param_1,0,&local_b0);
    dVar11 = 1.0;
    dVar12 = 0.009999999776482582;
    iVar6 = 0;
    iVar7 = 0;
    dVar13 = (double)(SQRT(local_a8 * local_a8 + local_b0 * local_b0 + local_ac * local_ac) *
                     0.97465885);
    if (1.0 - dVar13 < 0.0) {
      dVar13 = dVar11;
    }
    dVar8 = (double)(float)(dVar13 * 44000.0 + 6000.0);
    dVar9 = (double)(float)(dVar13 * 0.019999999552965164 + 0.009999999776482582);
    uVar10 = 0x3fe8000000000000;
    auVar16 = loadVectorLeftIndexed(0x24,0x1195c0);
    auVar16 = auVar16 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar16 = auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60;
    do {
      rand();
      rand();
      uVar4 = SpawnPart_23(dVar9,dVar11,uVar10,dVar8,local_c0);
      iVar5 = (int)uVar4;
      if (iVar5 != 0) {
        auVar14 = ZEXT416(0xffffffff);
        auVar14 = auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60;
        auVar14 = vectorShiftLeftIntegerWord(auVar14,auVar14);
        auVar15 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar14 = vectorMultiplyAddFloatingPoint(auVar15,auVar16,auVar14);
        auVar14 = vectorConvertToSignedFixedPointWordSaturate(auVar14,0);
        auVar15 = vectorSplatHalfWord(auVar14,1);
        auVar14 = auVar14 >> 0x60 & (GPiece<16>)0xff;
        uVar2 = storeVectorElementHalfWordIndexed(auVar15,10,uVar4);
        *(undefined2 *)(iVar5 + 10) = uVar2;
        *(undefined4 *)(iVar5 + 0x24) = 2;
        *(undefined1 *)(iVar5 + 0x2a) = 0x50;
        uVar1 = storeVectorElementByteIndexed
                          (auVar14 | auVar14 << 8 | auVar14 << 0x10 | auVar14 << 0x18 |
                           auVar14 << 0x20 | auVar14 << 0x28 | auVar14 << 0x30 | auVar14 << 0x38 |
                           auVar14 << 0x40 | auVar14 << 0x48 | auVar14 << 0x50 | auVar14 << 0x58 |
                           auVar14 << 0x60 | auVar14 << 0x68 | auVar14 << 0x70 | auVar14 << 0x78,
                           0x2b,uVar4);
        *(undefined1 *)(iVar5 + 0x2b) = uVar1;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < 2);
    dVar8 = (double)(float)(dVar13 * 25000.0 + 5000.0);
    dVar13 = (double)(float)(dVar13 * 0.015000000596046448 + dVar12);
    auVar16 = loadVectorLeftIndexed(0x3c,0x1195c0);
    auVar16 = auVar16 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar16 = auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60;
    do {
      uVar10 = SpawnPart_23(dVar13,dVar11,dVar11,dVar8,local_c0);
      iVar6 = (int)uVar10;
      if (iVar6 != 0) {
        auVar14 = ZEXT416(0xffffffff);
        auVar14 = auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60;
        auVar14 = vectorShiftLeftIntegerWord(auVar14,auVar14);
        auVar15 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar14 = vectorMultiplyAddFloatingPoint(auVar15,auVar16,auVar14);
        auVar14 = vectorConvertToSignedFixedPointWordSaturate(auVar14,0);
        auVar14 = vectorSplatHalfWord(auVar14,1);
        uVar2 = storeVectorElementHalfWordIndexed(auVar14,10,uVar10);
        *(undefined2 *)(iVar6 + 10) = uVar2;
        iVar5 = rand();
        uVar3 = iVar5 >> 0xf & 0x7fff;
        *(undefined4 *)(iVar6 + 0x24) = 2;
        *(undefined1 *)(iVar6 + 0x2a) = 0x7f;
        *(char *)(iVar6 + 0x2b) = (char)*(undefined2 *)(iVar6 + 10);
        *(char *)(iVar6 + 8) = (char)uVar3 + (char)((uVar3 + 1) * 0x101 >> 0x10);
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < 5);
  }
  return;
}


// 0x0119a18 (0xa4 bytes)
// strings: 0096c074: 'None'

void DoManipulator
               (double param_1,MobyInstance *pMoby,undefined8 param_3,Manipulator *manipulator)

{
  if (Cheats[7] == '\0') {
    if (manipulator->state != '\0') {
      DetachManipulator(pMoby,manipulator);
    }
  }
  else {
    if (manipulator->state == '\0') {
      AttachManipulator(pMoby,param_3.piece<4,4>(),manipulator);
    }
    (manipulator->scale).x = (float)param_1;
    (manipulator->scale).y = (float)param_1;
    (manipulator->scale).z = (float)param_1;
  }
  return;
}


// 0x0119ac0 (0x28 bytes)
// strings: 0096c074: 'None'

/* [p2_mobyutil] moby->scale = arg if Cheats[7] else 1.0 */

void MB_SetScaleCheat(double param_1,int param_2)

{
  if (Cheats[7] == '\0') {
    param_1 = 1.0;
  }
  *(float *)(param_2 + 0x70) = (float)param_1;
  return;
}


// 0x0119ae8 (0x24 bytes)
void MB_InitDebrisList(undefined4 *param_1)

{
  undefined4 *puVar1;
  longlong lVar2;
  
  lVar2 = 7;
  puVar1 = param_1;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  *(undefined2 *)(param_1 + 7) = 0;
  return;
}


// 0x0119b38 (0x4d8 bytes)
void MB_UpdateDebris(double param_1,int *param_2,float *param_3)

{
  bool bVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined2 uVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  GPiece<16> local_100;
  GPiece<16> local_f0;
  GPiece<16> local_e0;
  GPiece<16> local_d0;
  GPiece<16> local_c0;
  GPiece<16> local_b0;
  float local_a0;
  float local_9c;
  longlong local_98;
  
  uVar6 = worldUpdateTime;
  dVar14 = 0.0;
  local_a0 = 0.0;
  local_9c = 0.0;
  fVar3 = *param_3;
  fVar4 = param_3[1];
  fVar5 = param_3[2];
  dVar15 = 0.75;
  bVar1 = (int)worldUpdateTime < 0;
  uVar2 = worldUpdateTime & 3;
  iVar9 = (int)worldUpdateTime >> 2;
  iVar7 = CollLine(local_100,local_f0,2,0,0);
  dVar16 = param_1;
  if ((iVar7 != 0) &&
     (dVar16 = (double)(float)((double)SQRT((fVar5 - g_CollOutput.ip.z) * (fVar5 - g_CollOutput.ip.z) +
                                            (fVar3 - g_CollOutput.ip.x) * (fVar3 - g_CollOutput.ip.x) +
                                            (fVar4 - g_CollOutput.ip.y) * (fVar4 - g_CollOutput.ip.y)) -
                              dVar15), dVar16 < dVar14)) {
    dVar16 = dVar14;
  }
  dVar15 = 1.0;
  OrganicDelt((float)dVar16,1.0,DAT_0071f418 * 48.0,DAT_007294f4 * g_FrameTime,&local_9c,0x720000,
              &local_a0);
  iVar7 = DAT_007294f8;
  if (dVar16 < 4.0) {
    iVar7 = 1;
  }
  iVar7 = DAT_007294fc + iVar7;
  iVar13 = 0;
  if (0 < iVar7) {
    dVar15 = (double)(float)(dVar16 * (double)(float)(dVar15 / param_1));
    do {
      MB_randSphere(dVar14,(double)(g_FrameTime *
                                   (float)((double)(float)((double)DAT_00729500 -
                                                          (double)DAT_00729504) * dVar15 +
                                          (double)DAT_00729504)),local_d0);
      iVar8 = rand();
      local_98 = (longlong)(int)(iVar8 >> 0xf & 0x7fff);
      iVar8 = SpawnPart_12(dVar16,local_e0,local_d0);
      if ((iVar13 == 2) && (uVar6 == (iVar9 + (uint)(bVar1 && uVar2 != 0)) * 4)) {
        iVar11 = 0;
        piVar12 = param_2;
        do {
          if (*piVar12 == 0) {
            param_2[iVar11] = iVar8;
            break;
          }
          iVar11 = iVar11 + 1;
          piVar12 = piVar12 + 1;
        } while (iVar11 < 7);
      }
      iVar13 = iVar13 + 1;
    } while (iVar13 < iVar7);
  }
  iVar9 = FastDecTimerS16(param_2 + 7);
  if (iVar9 != 0) {
    iVar9 = rand();
    local_98 = (longlong)(int)(iVar9 >> 0xf & 0x7fff);
    uVar10 = FastDoubleToInt
                       ((double)(animationSpeed * ((float)local_98 * 20.0 * 3.0517578e-05 + 10.0)));
    *(undefined2 *)(param_2 + 7) = uVar10;
    MB_randSphere(dVar14,(double)(g_FrameTime * 2.0),local_b0);
    iVar9 = rand();
    local_98 = (longlong)(int)(iVar9 >> 0xf & 0x7fff);
    SpawnPart_25(param_3,local_c0,0);
  }
  return;
}


// 0x011a018 (0xe4 bytes)
void MB_DebrisCollide(undefined4 *param_1)

{
  char *pcVar1;
  int iVar2;
  double dVar3;
  
  iVar2 = 0;
  dVar3 = 1.1904761549885734e-06;
  do {
    pcVar1 = (char *)*param_1;
    if (pcVar1 != (char *)0x0) {
      if ((*pcVar1 == '\f') && ((byte)pcVar1[1] < 0x80)) {
        CollMobySphere
                  ((double)(float)((double)*(float *)(pcVar1 + 0xc) * dVar3),pcVar1 + 0x10);
        if (*(short *)(pcVar1 + 10) < 5) {
          *param_1 = 0;
        }
      }
      else {
        *param_1 = 0;
      }
    }
    iVar2 = iVar2 + 1;
    param_1 = param_1 + 1;
  } while (iVar2 < 7);
  return;
}


// 0x011a100 (0x7c bytes)
/* [p2_mobyutil] MB_DistributeBolts(m,4,7, hero<7m_q2:0,-1) */

void MB_DistributeBoltsNearHero(int param_1)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  
  fVar1 = *(float *)(param_1 + 0x14) - g_heroPosition.y;
  fVar2 = *(float *)(param_1 + 0x10) - g_heroPosition.x;
  uVar3 = 0;
  if (SQRT(fVar2 * fVar2 + fVar1 * fVar1) < 7.0) {
    uVar3 = 2;
  }
  MB_DistributeBolts(param_1,4,7,uVar3,0xffffffffffffffff);
  return;
}


// 0x011a1a0 (0x2b4 bytes)
void MB_SpawnSparksPair
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined2 uVar1;
  uint uVar2;
  undefined8 uVar3;
  char cVar5;
  int iVar4;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  GPiece<16> auVar12;
  GPiece<16> auVar13;
  GPiece<16> auVar14;
  
  iVar6 = 0;
  iVar7 = 0;
  uVar8 = 0x3fb99999a0000000;
  uVar10 = 0x3ff0000000000000;
  uVar9 = 0x3fecccccc0000000;
  auVar14 = loadVectorLeftIndexed(0xc,0x11a17c);
  uVar11 = 0x4010000000000000;
  auVar14 = auVar14 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar14 = auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60;
  do {
    rand();
    rand();
    uVar3 = SpawnPart_23(uVar8,uVar10,uVar9,param_1,param_3);
    iVar4 = (int)uVar3;
    if (iVar4 != 0) {
      auVar12 = ZEXT416(0xffffffff);
      auVar12 = auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60;
      auVar12 = vectorShiftLeftIntegerWord(auVar12,auVar12);
      auVar13 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar12 = vectorMultiplyAddFloatingPoint(auVar13,auVar14,auVar12);
      auVar12 = vectorConvertToSignedFixedPointWordSaturate(auVar12,0);
      auVar12 = vectorSplatHalfWord(auVar12,1);
      uVar1 = storeVectorElementHalfWordIndexed(auVar12,10,uVar3);
      *(undefined2 *)(iVar4 + 10) = uVar1;
      cVar5 = FastDoubleToInt(uVar11);
      *(char *)(iVar4 + 9) = cVar5 + '@';
      *(undefined4 *)(iVar4 + 0x24) = 2;
      *(undefined1 *)(iVar4 + 0x2a) = 0x7f;
      *(char *)(iVar4 + 0x2b) = (char)*(undefined2 *)(iVar4 + 10);
    }
    iVar6 = iVar6 + 1;
  } while (iVar6 < 2);
  uVar8 = 0x3fa99999a0000000;
  uVar9 = 0x3fef0a3d80000000;
  auVar14 = loadVectorLeftIndexed(0x1c,0x11a17c);
  auVar14 = auVar14 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar14 = auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60;
  do {
    uVar3 = SpawnPart_23(uVar8,uVar10,uVar9,param_2,param_4);
    iVar6 = (int)uVar3;
    if (iVar6 != 0) {
      cVar5 = FastDoubleToInt(uVar11);
      auVar12 = ZEXT416(0xffffffff);
      auVar12 = auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60;
      auVar12 = vectorShiftLeftIntegerWord(auVar12,auVar12);
      *(char *)(iVar6 + 9) = cVar5 + '@';
      auVar13 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar12 = vectorMultiplyAddFloatingPoint(auVar13,auVar14,auVar12);
      auVar12 = vectorConvertToSignedFixedPointWordSaturate(auVar12,0);
      auVar12 = vectorSplatHalfWord(auVar12,1);
      uVar1 = storeVectorElementHalfWordIndexed(auVar12,10,uVar3);
      *(undefined2 *)(iVar6 + 10) = uVar1;
      iVar4 = rand();
      uVar2 = iVar4 >> 0xf & 0x7fff;
      *(undefined4 *)(iVar6 + 0x24) = 2;
      *(undefined1 *)(iVar6 + 0x2a) = 0x7f;
      *(char *)(iVar6 + 0x2b) = (char)*(undefined2 *)(iVar6 + 10);
      *(char *)(iVar6 + 8) = (char)uVar2 + (char)((uVar2 + 1) * 0x101 >> 0x10);
    }
    iVar7 = iVar7 + 1;
  } while (iVar7 < 3);
  return;
}


// 0x011a458 (0xc0 bytes)
void MB_ToastMessageFmt(StringId msg,int arg,int time)

{
  char *__format;
  GPiece<16> auVar1;
  GPiece<16> auVar2;
  GPiece<16> auVar3;
  
  auVar1 = auRam00000000;
  if (time == -1) {
    auVar1 = ZEXT416(0xffffffff);
    auVar1 = auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60;
    auVar2 = vectorShiftLeftIntegerWord(auVar1,auVar1);
    auVar1 = loadVectorLeftIndexed(0x70,0x11a454);
    auVar3 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar1 = auVar1 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar1 = vectorMultiplyAddFloatingPoint
                       (auVar3,auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60,auVar2);
    auVar1 = vectorConvertToSignedFixedPointWordSaturate(auVar1,0);
  }
  __format = (char *)help_msg_string_by_index(msg);
  snprintf(&g_toastMsgBuff,__format,arg);
  auVar1 = auVar1 >> 0x60 & (GPiece<16>)0xffffffff;
  g_toastMsgTimer =
       storeVectorElementWordIndexed
                 (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60,0x5c80,0xa10000);
  return;
}


// 0x011a560 (0x508 bytes)
longlong MB_SpawnDebrisMoby
                   (double param_1,int param_2,MOBY_OCLASSES param_3,f32 *param_4,undefined8 param_5
                   ,float param_6,float param_7,undefined8 param_8,float *param_9)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  MobyClass *pMVar5;
  float fVar6;
  float fVar7;
  MobyInstance *pMVar8;
  int iVar9;
  undefined8 uVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  float *in_stack_00000074;
  float *in_stack_0000007c;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  
  pMVar8 = CreateMoby(param_3);
  if (pMVar8 != (MobyInstance *)0x0) {
    fVar1 = *(float *)(param_2 + 0x2c);
    fVar2 = *(float *)(*(int *)(param_2 + 0x24) + 0x24);
    uVar10 = *(undefined8 *)(param_2 + 0x38);
    fVar3 = pMVar8->pClass->gScale;
    pMVar8->enabled = '\x01';
    pMVar8->modeBits = pMVar8->modeBits | LOCK_ROTATION;
    pMVar8->color = (int)((ulonglong)uVar10 >> 0x20);
    pMVar8->light = (int)uVar10;
    pMVar8->state = '\x01';
    pfVar4 = (float *)pMVar8->pVar;
    pMVar8->scale = fVar3 * (fVar1 / fVar2);
    (pMVar8->pos).x = *param_4;
    (pMVar8->pos).y = param_4[1];
    (pMVar8->pos).z = param_4[2];
    (pMVar8->pos).w = param_4[3];
    FastEulerToMtx((longlong)(int)pMVar8 + 0xc0,param_5);
    pMVar8->updateDistance = -1;
    pMVar8->drawDistance = 0x80;
    pMVar8->collision = (ushort *)0x0;
    if (param_6 == 0.0) {
      iVar9 = rand();
      param_6 = (float)FastDoubleToInt
                                 ((double)(animationSpeed *
                                          ((float)(longlong)(int)(iVar9 >> 0xf & 0x7fff) * 60.0 *
                                           3.0517578e-05 + 60.0)));
    }
    pfVar4[0xc] = param_6;
    pfVar4[0xd] = param_7;
    dVar16 = 0.0;
    if (pfVar4[0xe] == 0.0) {
      iVar9 = rand();
      param_1 = (double)(((float)(longlong)(int)(iVar9 >> 0xf & 0x7fff) * 5.0 * 3.0517578e-05 + 10.0
                         ) * DAT_0071f418);
    }
    pfVar4[0xe] = (float)param_1;
    fVar1 = *param_9;
    if ((double)SQRT(param_9[2] * param_9[2] + fVar1 * fVar1 + param_9[1] * param_9[1]) == dVar16) {
      iVar9 = rand();
      dVar14 = (double)((float)(longlong)(int)((iVar9 >> 0xf & 0xfffU) - 0x800) * 3.1415927 *
                       0.00048828125);
      iVar9 = rand();
      fVar1 = (float)(dVar14 + 1.570796251296997);
      dVar12 = (double)(float)(3.141592502593994 - dVar14);
      if (dVar14 - (double)(float)(3.141592502593994 - dVar14) < 0.0) {
        dVar12 = dVar14;
      }
      fVar2 = 3.1415925 - fVar1;
      if (fVar1 - (3.1415925 - fVar1) < 0.0) {
        fVar2 = fVar1;
      }
      dVar15 = 3.0517578125e-05;
      dVar11 = (double)(float)(-3.141592502593994 - dVar14);
      if ((double)(float)(-3.141592502593994 - dVar14) - dVar12 < 0.0) {
        dVar11 = dVar12;
      }
      fVar3 = -3.1415925 - fVar1;
      if ((-3.1415925 - fVar1) - fVar2 < 0.0) {
        fVar3 = fVar2;
      }
      dVar12 = (double)(float)(dVar11 * dVar11);
      fVar7 = fVar3 * fVar3;
      fVar1 = ((float)((double)(longlong)(int)(iVar9 >> 0xf & 0x7fff) * 2.0) * 3.0517578e-05 + 2.0)
              * g_FrameTime;
      dVar13 = (double)(float)(dVar12 * (double)(float)(dVar12 * dVar11));
      fVar2 = fVar7 * fVar7 * fVar3;
      dVar14 = (double)(float)(dVar12 * dVar13);
      fVar6 = fVar7 * fVar2;
      dVar14 = (double)(((float)(dVar12 * dVar14) * 2.601887e-06 +
                        (float)(dVar14 * -0.0001980741071747616 +
                               (double)(float)(dVar13 * 0.008333025500178337 +
                                              (double)(float)((double)(float)(dVar12 * dVar11) *
                                                              -0.16666656732559204 + dVar11)))) *
                       fVar1);
      dVar12 = (double)((fVar7 * fVar6 * 2.601887e-06 +
                        fVar6 * -0.0001980741 +
                        fVar2 * 0.0083330255 + fVar7 * fVar3 * -0.16666657 + fVar3) * fVar1);
      iVar9 = rand();
      fVar1 = g_FrameTime;
      *pfVar4 = (float)dVar12;
      pfVar4[1] = (float)dVar14;
      fVar1 = (float)((double)((float)(longlong)(int)(iVar9 >> 0xf & 0x7fff) * 3.0) * dVar15 + 5.0)
              * fVar1;
      pfVar4[2] = fVar1;
    }
    else {
      *pfVar4 = fVar1;
      pfVar4[1] = param_9[1];
      pfVar4[2] = param_9[2];
      fVar1 = param_9[3];
    }
    pfVar4[3] = fVar1;
    fVar1 = *in_stack_00000074;
    if ((double)SQRT(in_stack_00000074[2] * in_stack_00000074[2] +
                     fVar1 * fVar1 + in_stack_00000074[1] * in_stack_00000074[1]) == dVar16) {
      MB_randSphere((double)(g_FrameTime * 3.1415927),(double)(g_FrameTime * 6.2831855),&local_90);
      pfVar4[4] = local_90;
      pfVar4[5] = local_8c;
      pfVar4[6] = local_88;
    }
    else {
      pfVar4[4] = fVar1;
      pfVar4[5] = in_stack_00000074[1];
      pfVar4[6] = in_stack_00000074[2];
      local_84 = in_stack_00000074[3];
    }
    pfVar4[7] = local_84;
    fVar1 = *in_stack_0000007c;
    if (((double)SQRT(in_stack_0000007c[2] * in_stack_0000007c[2] +
                      fVar1 * fVar1 + in_stack_0000007c[1] * in_stack_0000007c[1]) == dVar16) &&
       (in_stack_0000007c[3] == 0.0)) {
      pMVar5 = pMVar8->pClass;
      fVar6 = pMVar8->scale * 0.0009765625;
      fVar2 = *(float *)&pMVar5->field27_0x34;
      fVar3 = *(float *)&pMVar5->field31_0x38;
      fVar1 = *(float *)&pMVar5->field35_0x3c * fVar6;
      pfVar4[8] = *(float *)&pMVar5->field23_0x30 * fVar6;
      pfVar4[9] = fVar2 * fVar6;
      pfVar4[10] = fVar3 * fVar6;
    }
    else {
      pfVar4[8] = fVar1;
      pfVar4[9] = in_stack_0000007c[1];
      pfVar4[10] = in_stack_0000007c[2];
      fVar1 = in_stack_0000007c[3];
    }
    pfVar4[0xb] = fVar1;
    UpdateMobyTransform(pMVar8);
  }
  return (longlong)(int)pMVar8;
}


// 0x011aa78 (0x2d0 bytes)
void MB_SpawnDebris
               (longlong param_1,longlong param_2,int param_3,int param_4,int param_5,
               undefined8 param_6,int param_7)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  longlong lVar6;
  undefined8 uVar7;
  GPiece<16> local_1a0;
  GPiece<272> auStack_190;
  
  iVar2 = (int)param_2;
  lVar6 = (ZERO_MASK(param_7) & 0xfffffffffffffffeU) + 2;
  if (0 < iVar2) {
    if ((0 < param_3) && (iVar4 = 0, 0 < param_3)) {
      uVar7 = 0;
      do {
        MB_SpawnDebrisMoby(uVar7,param_1,param_2,param_1 + 0x10,param_1 + 0x40,0,lVar6);
        iVar4 = iVar4 + 1;
        param_2 = param_2 + 1;
      } while (iVar4 < param_3);
    }
    if (((0 < iVar2) && (0 < param_5)) &&
       (iVar2 = MB_randPrimPoints(0x408f400000000000,param_1,&DAT_0011aa68,param_6,auStack_190,
                                  0xffff), iVar2 != 0)) {
      iVar4 = 0;
      puVar5 = auStack_190;
      uVar7 = 0;
      if (0 < (int)param_6) {
        do {
          if (iVar2 <= iVar4) {
            return;
          }
          rand();
          rand();
          rand();
          iVar3 = rand();
          uVar1 = iVar3 >> 0xf & 0x7fff;
          MB_SpawnDebrisMoby(uVar7,param_1,param_4 + (uVar1 - ((int)uVar1 / param_5) * param_5),
                             puVar5,local_1a0,0,lVar6);
          iVar4 = iVar4 + 1;
          puVar5 = puVar5 + 0x10;
        } while (iVar4 < (int)param_6);
      }
    }
  }
  return;
}


// 0x011ad48 (0xcc bytes)
void MB_SpawnReplacementMoby(int param_1,MOBY_OCLASSES param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  f32 fVar4;
  f32 fVar5;
  int iVar6;
  MobyInstance *pMVar7;
  undefined8 uVar8;
  
  pMVar7 = CreateMoby(param_2);
  if (pMVar7 != (MobyInstance *)0x0) {
    iVar6 = *(int *)(param_1 + 0x24);
    pMVar7->drawDistance = 0xff;
    pMVar7->enabled = '\x01';
    fVar1 = *(float *)(param_1 + 0x2c);
    fVar2 = *(float *)(iVar6 + 0x24);
    fVar3 = pMVar7->scale;
    fVar4 = *(f32 *)(param_1 + 0x14);
    (pMVar7->pos).x = *(f32 *)(param_1 + 0x10);
    fVar5 = *(f32 *)(param_1 + 0x18);
    (pMVar7->pos).y = fVar4;
    fVar4 = *(f32 *)(param_1 + 0x1c);
    (pMVar7->pos).z = fVar5;
    fVar5 = *(f32 *)(param_1 + 0x40);
    (pMVar7->pos).w = fVar4;
    fVar4 = *(f32 *)(param_1 + 0x44);
    (pMVar7->rotation).x = fVar5;
    fVar5 = *(f32 *)(param_1 + 0x48);
    (pMVar7->rotation).y = fVar4;
    fVar4 = *(f32 *)(param_1 + 0x4c);
    (pMVar7->rotation).z = fVar5;
    (pMVar7->rotation).w = fVar4;
    uVar8 = *(undefined8 *)(param_1 + 0x38);
    pMVar7->updateDistance = '\0';
    pMVar7->color = (int)((ulonglong)uVar8 >> 0x20);
    pMVar7->light = (int)uVar8;
    pMVar7->modeBits = NONE;
    pMVar7->scale = fVar3 * (fVar1 / fVar2);
    UpdateMobyTransform(pMVar7);
  }
  return;
}


// 0x011ae14 (0xd8 bytes)
int MB_HandleGameplayHud(void)

{
  int iVar1;
  
  if ((DAT_00a15f24 != 0) && (DAT_00a15f24 = DAT_00a15f24 + -1, DAT_00a15f24 == 0)) {
    g_HelpMsgOwner = 0;
  }
  if ((g_HelpMsgOwner == 0) || (DAT_00a51fb8 == 0)) {
    iVar1 = 0xa50000;
    DAT_00a51fb4 = -1;
  }
  else if (DAT_00a51fb4 == -1) {
    iVar1 = RegisterHUDCallback
                      (0xc,0,&PTR_PromptHud_Init_00705750,&PTR_PromptHud_Update_00705758,
                       &PTR_Draw_PromptMsg_00705788,(int *)0x0,0);
    DAT_00a51fb4 = iVar1;
  }
  else {
    iVar1 = Hud_ShowEntryById(DAT_00a51fb4,10);
  }
  return iVar1;
}


// 0x011aeec (0xc0 bytes)
undefined8 MB_ShowPersistentMessage(int param_1,StringId param_2)

{
  undefined8 uVar1;
  
  if (param_1 == g_HelpMsgOwner) {
    if (param_2 != STR_TO_USE_YOUR_BOMB_0x0000) {
      help_msg_string_by_index(param_2);
      GetHelpLen();
    }
    uVar1 = 2;
    DAT_00a15f24 = 2;
    DAT_00a51fb8 = param_2;
  }
  else if (g_HelpMsgOwner == 0) {
    if (param_2 != STR_TO_USE_YOUR_BOMB_0x0000) {
      help_msg_string_by_index(param_2);
      GetHelpLen();
    }
    uVar1 = 1;
    DAT_00a15f24 = 2;
    g_HelpMsgOwner = param_1;
    DAT_00a51fb8 = param_2;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


// 0x011afac (0x104 bytes)
int MB_RequestHelpMessage(MobyInstance *owner,StringId msg)

{
  int iVar1;
  
  if (owner == g_HelpMsgOwner) {
    if (msg != STR_TO_USE_YOUR_BOMB_0x0000) {
      help_msg_string_by_index(msg);
      GetHelpLen();
    }
    iVar1 = 2;
    DAT_00a15f24 = 2;
    DAT_00a51fb8 = msg;
  }
  else if (g_HelpMsgOwner == (MobyInstance *)0x0) {
    if (msg != STR_TO_USE_YOUR_BOMB_0x0000) {
      help_msg_string_by_index(msg);
      GetHelpLen();
    }
    iVar1 = 1;
    DAT_00a15f24 = 2;
    g_HelpMsgOwner = owner;
    DAT_00a51fb8 = msg;
  }
  else {
    iVar1 = 0;
  }
  if (iVar1 == 0) {
    if (msg != STR_TO_USE_YOUR_BOMB_0x0000) {
      help_msg_string_by_index(msg);
      GetHelpLen();
    }
    iVar1 = 3;
    DAT_00a15f24 = 2;
    g_HelpMsgOwner = owner;
    DAT_00a51fb8 = msg;
  }
  return iVar1;
}


// 0x011b0b0 (0x74 bytes)
int MB_ClearHelpMessage(MobyInstance *owner)

{
  int iVar1;
  
  if ((owner == g_HelpMsgOwner) && (DAT_00a51fb4 != -1)) {
    DAT_00a15f24 = 0;
    g_HelpMsgOwner = (MobyInstance *)0x0;
    Hud_UnregisterById(DAT_00a51fb4);
    iVar1 = 1;
    DAT_00a51fb4 = -1;
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}


// 0x011b124 (0x90 bytes)
int MB_CountGoldWeapons(void)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  
  lVar2 = 0;
  iVar1 = 0;
  do {
    iVar4 = iVar1 + 1;
    lVar3 = (longlong)((int)lVar2 + 1);
    lVar2 = lVar3 + (ZERO_MASK((uint)(&g_goldWeaponsArray.field0_0x0)[iVar1]) &
                    lVar2 - lVar3);
    iVar1 = iVar4;
  } while (iVar4 < 0x25);
  iVar1 = (int)lVar2;
  iVar1 = iVar1 + (iVar1 >> 0x1f & -iVar1);
  return iVar1 + ((uint)(10 - (longlong)iVar1 >> 0x3f) & 10U - iVar1);
}


// 0x011b1b4 (0x110 bytes)
// strings: 00a0ca34: 'None'


int MB_CountGoldBolts(void)

{
  byte *pbVar1;
  char *pcVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar4 = 0;
  pcVar2 = g_CollectedGoldBolts;
  lVar6 = 0x14;
  do {
    lVar5 = (longlong)((int)lVar4 + 1);
    lVar5 = lVar5 + (ZERO_MASK((uint)(byte)*pcVar2) & lVar4 - lVar5);
    lVar4 = (longlong)((int)lVar5 + 1);
    lVar4 = lVar4 + (ZERO_MASK((uint)((byte *)pcVar2)[1]) & lVar5 - lVar4);
    pbVar1 = (byte *)pcVar2 + 3;
    lVar5 = (longlong)((int)lVar4 + 1);
    lVar5 = lVar5 + (ZERO_MASK((uint)((byte *)pcVar2)[2]) & lVar4 - lVar5);
    lVar4 = (longlong)((int)lVar5 + 1);
    pcVar2 = (char *)((byte *)pcVar2 + 4);
    lVar4 = lVar4 + (ZERO_MASK((uint)*pbVar1) & lVar5 - lVar4);
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  iVar3 = (int)lVar4;
  iVar3 = iVar3 + (iVar3 >> 0x1f & -iVar3);
  return iVar3 + ((uint)(0x28 - (longlong)iVar3 >> 0x3f) & 0x28U - iVar3);
}


// 0x011b2c4 (0x1d0 bytes)
// strings: 00a0ca34: 'None'


int MB_GetUnspentGoldBolts(void)

{
  byte *pbVar1;
  undefined *puVar2;
  longlong lVar3;
  int iVar4;
  char *pcVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  
  lVar3 = 0;
  pcVar5 = g_CollectedGoldBolts;
  lVar9 = 0x14;
  do {
    lVar3 = lVar3 + 1 + (ZERO_MASK((uint)(byte)*pcVar5) & lVar3 - (lVar3 + 1));
    lVar6 = lVar3 + 1;
    lVar6 = lVar6 + (ZERO_MASK((uint)((byte *)pcVar5)[1]) & lVar3 - lVar6);
    pbVar1 = (byte *)pcVar5 + 3;
    lVar7 = lVar6 + 1;
    lVar7 = lVar7 + (ZERO_MASK((uint)((byte *)pcVar5)[2]) & lVar6 - lVar7);
    lVar3 = lVar7 + 1;
    pcVar5 = (char *)((byte *)pcVar5 + 4);
    lVar3 = lVar3 + (ZERO_MASK((uint)*pbVar1) & lVar7 - lVar3);
    lVar9 = lVar9 + -1;
  } while (lVar9 != 0);
  iVar4 = (int)lVar3;
  iVar4 = iVar4 + (iVar4 >> 0x1f & -iVar4);
  iVar8 = 0;
  lVar3 = 0;
  do {
    puVar2 = &g_goldWeaponsArray.field0_0x0 + iVar8;
    iVar8 = iVar8 + 1;
    lVar3 = lVar3 + 1 + (ZERO_MASK((uint)*puVar2) & lVar3 - (lVar3 + 1));
  } while (iVar8 < 0x25);
  lVar3 = lVar3 + ((longlong)(int)lVar3 >> 0x3f & -lVar3);
  lVar3 = (longlong)
          (int)(iVar4 + ((uint)(0x28 - (longlong)iVar4 >> 0x3f) & 0x28U - iVar4) +
               (int)(lVar3 + (10 - (longlong)(int)lVar3 >> 0x3f & 10U - lVar3)) * -4);
  lVar3 = lVar3 + (lVar3 >> 0x3f & -lVar3);
  iVar4 = (int)lVar3;
  return iVar4 + ((uint)(0x28 - lVar3 >> 0x3f) & 0x28U - iVar4);
}


// 0x011b494 (0x90 bytes)
// strings: 0096c08c: 'None'


int MB_CountSkillPoints(void)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  
  lVar2 = 0;
  iVar1 = 0;
  do {
    iVar4 = iVar1 + 1;
    lVar3 = (longlong)((int)lVar2 + 1);
    lVar2 = lVar3 + (ZERO_MASK((uint)(byte)g_SkillPoints[iVar1]) & lVar2 - lVar3);
    iVar1 = iVar4;
  } while (iVar4 < 0x20);
  iVar1 = (int)lVar2;
  iVar1 = iVar1 + (iVar1 >> 0x1f & -iVar1);
  return iVar1 + ((uint)(0x1e - (longlong)iVar1 >> 0x3f) & 0x1eU - iVar1);
}


// 0x011b524 (0x1a0 bytes)
// strings: 00652fd0: 'Skill point does not map to trophy.. *poker face*\n'

TROPHIES_ENUM MB_TrophyFromSkillPoint(int skillPoint)

{
  if (skillPoint < 0xf) {
    if (skillPoint < 6) {
      if (skillPoint == 5) {
        return QWARKTASTIC;
      }
      if (skillPoint == 3) {
        return STRIKE_A_POSE;
      }
      if (skillPoint == 2) {
        return TRANSPORTED;
      }
      if (skillPoint == 0) {
        return TAKE_AIM;
      }
    }
    else {
      if (skillPoint == 0xe) {
        return DESTROYED;
      }
      if (skillPoint == 0xd) {
        return EAT_LEAD;
      }
      if (skillPoint == 10) {
        return GIRL_TROUBLE;
      }
      if (skillPoint == 9) {
        return SPEEDY;
      }
      if (skillPoint == 8) {
        return CLUCK_CLUCK;
      }
      if (skillPoint == 7) {
        return TWISTED_HOVERBOARD;
      }
      if (skillPoint == 6) {
        return VEHICLE_BOMBARDER;
      }
    }
  }
  else if (skillPoint < 0x16) {
    if (skillPoint == 0x14) {
      return PEST_CONTROL;
    }
    if (skillPoint == 0x13) {
      return BURIED_TREASURE;
    }
    if (skillPoint == 0x11) {
      return HEY_OVER_HERE;
    }
    if (skillPoint == 0x10) {
      return SNIPER;
    }
  }
  else {
    if (skillPoint == 0x1d) {
      return GOING_COMMANDO;
    }
    if (skillPoint == 0x1c) {
      return CAREFUL_CRUISE;
    }
    if (skillPoint == 0x1a) {
      return MAGICIAN;
    }
    if (skillPoint == 0x17) {
      return VANDAL;
    }
    if (skillPoint == 0x16) {
      return SITTING_DUCKS;
    }
  }
  print_tty2("Skill point does not map to trophy.. *poker face*\n");
  return ~GADGET_MASTER;
}


// 0x011b6c4 (0x5c bytes)
void MB_UnlockSkillPointTrophy(int SkillPoint)

{
  TROPHIES_ENUM trophy;
  
  trophy = MB_TrophyFromSkillPoint(SkillPoint);
  if (('\0' < (char)trophy) && (*(int *)(TrophyMgr + (int)((longlong)(char)trophy << 3) + 0xc) == 0)
     ) {
    idol::NPTrophyUnlock(TrophyMgr,trophy);
  }
  return;
}


// 0x011b728 (0x21c bytes)
// strings: 0096c08c: 'None'

void MB_UnlockSkillPoint(int skillPoint)

{
  byte *pbVar1;
  longlong lVar2;
  undefined4 *puVar3;
  TROPHIES_ENUM Trophy;
  char *__src;
  int iVar4;
  GPiece<16> auVar5;
  GPiece<16> auVar6;
  GPiece<16> auVar7;
  undefined4 in_vr31_32_0;
  undefined4 in_vr31_32_1;
  undefined4 in_vr31_32_2;
  undefined4 in_vr31_32_3;
  
  lVar2 = ZEXT48(&stack0x00000000) - 0x30;
  puVar3 = (undefined4 *)lVar2;
  puVar3[3] = in_vr31_32_3;
  puVar3[2] = in_vr31_32_2;
  puVar3[1] = in_vr31_32_1;
  *puVar3 = in_vr31_32_0;
  if (g_SkillPoints[skillPoint] != '\0') {
    Trophy = MB_TrophyFromSkillPoint(skillPoint);
    if (('\0' < (char)Trophy) &&
       (*(int *)(TrophyMgr + (int)((longlong)(char)Trophy << 3) + 0xc) == 0)) {
      idol::NPTrophyUnlock(TrophyMgr,Trophy);
    }
  }
  if (g_SkillPoints[skillPoint] == '\0') {
    g_SkillPoints[skillPoint] = '\x01';
    sound_CorePlay(1,0,(MobyInstance *)0x0);
    auVar5 = ZEXT416(0xffffffff);
    auVar5 = auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60;
    auVar6 = vectorShiftLeftIntegerWord(auVar5,auVar5);
    auVar5 = loadVectorLeftIndexed(lVar2,0x11b720);
    auVar7 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar5 = auVar5 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar5 = vectorMultiplyAddFloatingPoint
                       (auVar7,auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60,auVar6);
    auVar5 = vectorConvertToSignedFixedPointWordSaturate(auVar5,0);
    __src = (char *)help_msg_string_by_index(STR_YOU_JUST_EARNED_A_0x53D6);
    strcpy(&g_toastMsgBuff,__src);
    auVar5 = auVar5 >> 0x60 & (GPiece<16>)0xffffffff;
    g_toastMsgTimer =
         storeVectorElementWordIndexed
                   (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60,0x5c80,0xa10000);
    Trophy = MB_TrophyFromSkillPoint(skillPoint);
    if (('\0' < (char)Trophy) &&
       (*(int *)(TrophyMgr + (int)((longlong)(char)Trophy << 3) + 0xc) == 0)) {
      idol::NPTrophyUnlock(TrophyMgr,Trophy);
    }
  }
  iVar4 = 0;
  lVar2 = 0;
  do {
    pbVar1 = (byte *)(g_SkillPoints + iVar4);
    iVar4 = iVar4 + 1;
    lVar2 = lVar2 + 1 + (ZERO_MASK((uint)*pbVar1) & lVar2 - (lVar2 + 1));
  } while (iVar4 < 0x20);
  iVar4 = (int)lVar2;
  iVar4 = iVar4 + (iVar4 >> 0x1f & -iVar4);
  if (iVar4 < 0x1f) {
    if (iVar4 < 0x1e) goto LAB_0011b8f8;
  }
  else {
    iVar4 = 0x1e;
  }
  if (*(int *)(TrophyMgr + 0x1c) == 0) {
    idol::NPTrophyUnlock(TrophyMgr,SKILLFUL);
  }
LAB_0011b8f8:
  if ((0xe < iVar4) && (*(int *)(TrophyMgr + 0x4c) == 0)) {
    idol::NPTrophyUnlock(TrophyMgr,UNLOCK_SKETCHBOOK);
  }
  return;
}


