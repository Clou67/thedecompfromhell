// game/mission.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 19 functions, 0xea378-0xeb288
#include "game/mission.h"
#include "game/draw.h"
#include "game/hero.h"
#include "game/map.h"
#include "game/mobyutil.h"
#include "game/pause.h"
#include "game/space.h"
#include "game/update/moby1118.h"
#include "idol/mUnk.h"
#include "idol/mathfunc.h"

// 0x00ea378 (0x54 bytes)
void ResetMissionState(void)

{
  undefined4 *puVar1;
  longlong lVar2;
  
  puVar1 = &DAT_00a245a8;
  lVar2 = 3;
  do {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1 = puVar1 + 8;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  DAT_00a24608 = 0;
  DAT_00a2460c = 0;
  DAT_00a24610 = 0;
  return;
}


// 0x00ea3d0 (0x1e0 bytes)
// strings: 0096c165: 'None'

ulonglong CheckMission(short type,longlong arg)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)arg;
  if (type < 5) {
    if (1 < type) {
      if (type < 3) {
        return (ulonglong)(LZCOUNT((uint)*(byte *)(puVar1 + 0x25b050)) << 0x20) >> 0x25 ^ 1;
      }
      if (3 < type) {
        if (0x78 < (int)puVar1) {
          return 0;
        }
        return (ulonglong)
               (LZCOUNT(*(undefined4 *)(g_KeyLevelFlags + (int)(arg << 4) + 0xc)) << 0x20) >> 0x25 ^
               1;
      }
      return (ulonglong)(LZCOUNT((uint)*(byte *)((int)puVar1 + 0x96c165)) << 0x20) >> 0x25 ^ 1;
    }
    if (-1 < type) {
      if (0 < type) {
        return (ulonglong)(LZCOUNT((uint)*(byte *)(puVar1 + 0x25b283)) << 0x20) >> 0x25 ^ 1;
      }
      return 1;
    }
  }
  else {
    if (type < 8) {
      if (type < 6) {
        if (0x78 < (int)puVar1) {
          return 0;
        }
        return (longlong)*(int *)(g_KeyLevelFlags + (int)(arg << 4) + 0xc) - 2U >> 0x3f ^ 1;
      }
      if (6 < type) {
        uVar2 = (*(code *)*puVar1)();
        return (ulonglong)(LZCOUNT(uVar2) << 0x20) >> 0x25 ^ 1;
      }
      return (ulonglong)(LZCOUNT((uint)*(byte *)(puVar1 + 0x25affc)) << 0x20) >> 0x25 ^ 1;
    }
    if (type < 9) {
      return (ulonglong)
             (LZCOUNT((uint)(byte)g_CollectedGoldBolts
                                  [(int)((longlong)((int)puVar1 >> 0x10) << 2) +
                                   ((uint)puVar1 & 0xffff)]) << 0x20) >> 0x25 ^ 1;
    }
    if (type < 10) {
      return 0;
    }
  }
  return 0;
}


// 0x00ea5b0 (0x1f8 bytes)
ulonglong RefreshLevelMissionStatus(void)

{
  short *psVar1;
  ulonglong uVar2;
  int iVar3;
  short sVar4;
  short *psVar5;
  
  DAT_00a24624 = (short *)(&PTR_DAT_00728d84)[g_SelectedLevel];
  if (DAT_00a24624 == (short *)0x0) {
    uVar2 = 0;
  }
  else {
    sVar4 = *DAT_00a24624;
    psVar5 = DAT_00a24624;
    while (sVar4 != 0) {
      if (((psVar5[8] & 4U) == 0) || ((&VisitedPlanets.Veldin)[g_SelectedLevel] != '\0')) {
        sVar4 = 0;
        iVar3 = CheckMission(psVar5[1],*(undefined4 *)(psVar5 + 2));
        if (iVar3 != 0) {
          iVar3 = CheckMission(psVar5[4],*(undefined4 *)(psVar5 + 6));
          sVar4 = (short)(ZERO_MASK(iVar3)) + 2;
        }
      }
      else {
        sVar4 = 0;
      }
      psVar5[0x12] = sVar4;
      psVar1 = psVar5 + 0x14;
      psVar5 = psVar5 + 0x14;
      sVar4 = *psVar1;
    }
    sVar4 = *DAT_00a24624;
    psVar5 = DAT_00a24624;
    while (sVar4 != 0) {
      if (*(undefined4 **)(psVar5 + 0xe) != (undefined4 *)0x0) {
        sVar4 = (*(code *)**(undefined4 **)(psVar5 + 0xe))(*(undefined4 *)(psVar5 + 0x10));
        psVar5[0x13] = sVar4;
      }
      psVar1 = psVar5 + 0x14;
      psVar5 = psVar5 + 0x14;
      sVar4 = *psVar1;
    }
    iVar3 = 0;
    DAT_00a24620 = 0;
    sVar4 = *DAT_00a24624;
    psVar5 = DAT_00a24624;
    while (sVar4 != 0) {
      if ((psVar5[0x12] == 1) && ((psVar5[8] & 2U) == 0)) {
        iVar3 = iVar3 + 1;
        DAT_00a24620 = iVar3;
      }
      sVar4 = psVar5[0x14];
      psVar5 = psVar5 + 0x14;
    }
    uVar2 = (ulonglong)(LZCOUNT(iVar3) << 0x20) >> 0x25;
  }
  return uVar2;
}


// 0x00ea7a8 (0x1a4 bytes)
longlong BuildMissionList(int *outTextIds,uint *outCompleteMask,int *outDesc,char useStep)

{
  short sVar1;
  int iVar2;
  short *psVar3;
  bool bVar4;
  longlong lVar5;
  short *psVar6;
  int iVar7;
  
  psVar6 = DAT_00a24624;
  bVar4 = true;
  *outTextIds = 0;
  if (outCompleteMask != (uint *)0x0) {
    *outCompleteMask = 0;
  }
  if (outDesc != (int *)0x0) {
    *outDesc = -1;
  }
  if (psVar6 == (short *)0x0) {
    lVar5 = 0;
  }
  else {
    lVar5 = 0;
    if (*psVar6 != 0) {
      lVar5 = 0;
      bVar4 = true;
      do {
        sVar1 = psVar6[0x12];
        if ((sVar1 != 2) && ((psVar6[8] & 2U) == 0)) {
          bVar4 = false;
        }
        if ((((psVar6[8] & 2U) == 0) && (sVar1 != 0)) && (((psVar6[8] & 1U) == 0 || (sVar1 != 2))))
        {
          iVar2 = (int)(lVar5 << 2);
          *(int *)((int)outTextIds + iVar2) = (int)*psVar6;
          if (useStep != '\0') {
            iVar7 = 0x523e;
            if (psVar6[0x12] != 2) {
              iVar7 = (int)*(short *)((int)psVar6 + (int)((longlong)psVar6[0x13] << 1) + 0x14);
            }
            *(int *)((int)outTextIds + iVar2) = iVar7;
          }
          if ((outCompleteMask != (uint *)0x0) && (psVar6[0x12] == 2)) {
            *outCompleteMask = *outCompleteMask | 1 << ((uint)lVar5 & 0x3f);
          }
          if (outDesc != (int *)0x0) {
            *outDesc = (int)psVar6[9] + (int)psVar6[0x13];
            outDesc = outDesc + 1;
          }
          lVar5 = (longlong)(int)((uint)lVar5 + 1);
        }
        psVar3 = psVar6 + 0x14;
        psVar6 = psVar6 + 0x14;
      } while (*psVar3 != 0);
    }
    if (bVar4 && outCompleteMask != (uint *)0x0) {
      *outCompleteMask = *outCompleteMask | 0x80000000;
    }
  }
  return lVar5;
}


// 0x00ea958 (0x618 bytes)
// strings: 0096c24c: 'None'

/* WARNING: Removing unreachable block (ram,0x000eaad8) */

void UpdateMissionDisplay(longlong param_1,char param_2)

{
  short sVar1;
  ushort uVar2;
  undefined4 uVar3;
  ulonglong *puVar4;
  float *outU;
  uint unused1;
  int iVar5;
  ulonglong uVar6;
  LevelId level;
  int iVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  longlong lVar11;
  ulonglong unaff_r28;
  longlong lVar12;
  ulonglong unaff_r29;
  int iVar13;
  ulonglong unaff_r30;
  short *psVar14;
  ulonglong unaff_r31;
  ulonglong in_LR;
  ulonglong in_f31;
  undefined8 uVar15;
  GPiece<16> auVar16;
  GPiece<16> auVar17;
  GPiece<16> auVar18;
  GPiece<16> auVar19;
  GPiece<16> auVar20;
  
  uVar6 = ZEXT48(&stack0x00000000);
  lVar8 = uVar6 - 0x160;
  puVar4 = (ulonglong *)lVar8;
  *puVar4 = uVar6;
  puVar4[0x2e] = in_LR;
  puVar4[0x2b] = in_f31;
  puVar4[0x24] = unaff_r25;
  puVar4[0x23] = unaff_r24;
  level = (LevelId)param_1;
  puVar4[0x2a] = unaff_r31;
  puVar4[0x29] = unaff_r30;
  puVar4[0x28] = unaff_r29;
  puVar4[0x27] = unaff_r28;
  puVar4[0x26] = unaff_r27;
  puVar4[0x25] = unaff_r26;
  puVar4[0x22] = unaff_r23;
  if (((int)level < 0x13) && ((&VisitedPlanets.Veldin)[level] != '\0')) {
    g_MapIcons = *(int *)((int)&PTR_DAT_00728dd0 + (int)(param_1 << 2));
  }
  else {
    g_MapIcons = 0;
  }
  if (((g_heroPosition.z != 0.0) && (Level == level)) && (param_2 != '\0')) {
    unused1 = level - (level + 100);
    uVar10 = (uint)(ZERO_MASK(DAT_00a20820)) & unused1;
    Map_WorldToMapCoords
              (g_heroPosition.x,g_heroPosition.y,uVar10,unused1,(float *)(puVar4 + 0xe),
               (float *)((int)puVar4 + 0x74),level + 100 + uVar10);
    auVar16 = ZEXT416(0xffffffff);
    auVar17 = auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60;
    auVar16 = ZEXT416(0xffffffff);
    auVar18 = auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60;
    auVar16 = loadVectorLeftIndexed(in_LR,0xea94c);
    auVar16 = auVar16 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar16 = auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60;
    auVar17 = vectorShiftLeftIntegerWord(auVar17,auVar17);
    auVar19 = vectorShiftLeftIntegerWord(auVar18,auVar18);
    auVar18 = loadVectorLeftIndexed(0x70,lVar8);
    auVar20 = loadVectorLeftIndexed(0x74,lVar8);
    auVar18 = vectorMultiplyAddFloatingPoint(auVar18,auVar16,auVar17);
    auVar17 = vectorMultiplyAddFloatingPoint(auVar20,auVar16,auVar19);
    auVar16 = loadVectorLeftIndexed(4,0xea94c);
    lVar8 = ZEXT48(&DAT_00a204c0) + (longlong)(int)(param_1 << 2);
    auVar16 = auVar16 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar19 = auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60;
    auVar18 = vectorConvertToSignedFixedPointWordSaturate(auVar18,0);
    auVar16 = vectorConvertToSignedFixedPointWordSaturate(auVar17,0);
    auVar18 = vectorShiftLeftIntegerWord(auVar18,auVar19);
    auVar17 = vectorShiftLeftIntegerWord(auVar16,auVar19);
    auVar16 = auVar18 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar17 = auVar17 >> 0x60 & (GPiece<16>)0xffffffff;
    uVar3 = storeVectorElementWordIndexed
                      (auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60,0x104,lVar8);
    *(undefined4 *)((int)lVar8 + 0x104) = uVar3;
    uVar3 = storeVectorElementWordIndexed
                      (auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60,0x154,lVar8);
    *(undefined4 *)((int)lVar8 + 0x154) = uVar3;
  }
  if (g_MapIcons != 0) {
    iVar9 = g_MapIcons;
    iVar7 = g_MapIcons;
    if ((*(ushort *)(g_MapIcons + 4) & 4) == 0) {
      iVar13 = 0;
      do {
        psVar14 = (short *)(iVar9 + iVar13);
        sVar1 = *psVar14;
        if (sVar1 == -1) {
          psVar14[0xc] = 0x3e70;
          psVar14[0xd] = 0;
          psVar14[0xe] = 0x3e9a;
          psVar14[0xf] = 0;
        }
        else if (sVar1 == -2) {
          psVar14[0xc] = 0x3f0a;
          psVar14[0xd] = 0;
          psVar14[0xe] = 0x3ebb;
          psVar14[0xf] = 0;
        }
        else if (sVar1 == -3) {
          psVar14[0xc] = 0x3f15;
          psVar14[0xd] = 0;
          psVar14[0xe] = 0x3f30;
          psVar14[0xf] = 0;
        }
        else if (sVar1 == -4) {
          psVar14[0xc] = 0x3f38;
          psVar14[0xd] = -0x8000;
          psVar14[0xe] = 0x3f3a;
          psVar14[0xf] = -0x8000;
        }
        else if (sVar1 == -5) {
          psVar14[0xc] = 0x3ec5;
          psVar14[0xd] = 0;
          psVar14[0xe] = 0x3ecb;
          psVar14[0xf] = 0;
        }
        else if (sVar1 == -7) {
          psVar14[0xc] = 0x3f5e;
          psVar14[0xd] = 0;
          psVar14[0xe] = 0x3e6c;
          psVar14[0xf] = 0;
        }
        else if (sVar1 == -8) {
          psVar14[0xc] = 0x3ef6;
          psVar14[0xd] = 0;
          psVar14[0xe] = 0x3f12;
          psVar14[0xf] = 0;
        }
        else if (sVar1 == -9) {
          psVar14[0xc] = 0x3f20;
          psVar14[0xd] = 0;
          psVar14[0xe] = 0x3f39;
          psVar14[0xf] = 0;
        }
        else {
          outU = (float *)(psVar14 + 0xc);
          if (Level == level) {
            iVar5 = (int)((longlong)sVar1 << 2);
            if (*(int *)(&DAT_00a15d40 + iVar5) != 0) {
              iVar7 = *(int *)(&DAT_00a15d40 + iVar5);
              Map_WorldToMapCoords
                        (*(float *)(iVar7 + 0x10),*(float *)(iVar7 + 0x14),iVar7,(int)outU,outU,
                         (float *)(psVar14 + 0xe),level);
              iVar7 = g_MapIcons;
              *(undefined4 *)(g_MapIcons + iVar13 + 0x20) =
                   *(undefined4 *)(*(int *)(&DAT_00a15d40 + (int)((longlong)*psVar14 << 2)) + 0x48);
              iVar9 = iVar7;
            }
          }
          else {
            iVar7 = (int)((longlong)sVar1 << 4);
            Map_WorldToMapCoords
                      (*(float *)(g_KeyLevelFlags + iVar7),*(float *)(g_KeyLevelFlags + iVar7 + 4),
                       iVar7,(int)(g_KeyLevelFlags + iVar7),outU,(float *)(psVar14 + 0xe),level);
            iVar7 = g_MapIcons;
            *(undefined4 *)(g_MapIcons + iVar13 + 0x20) =
                 *(undefined4 *)(g_KeyLevelFlags + (int)((longlong)*psVar14 << 4) + 8);
            iVar9 = iVar7;
          }
        }
        iVar13 = iVar13 + 0x28;
      } while ((*(ushort *)(iVar9 + iVar13 + 4) & 4) == 0);
    }
    lVar8 = 0;
    uVar2 = *(ushort *)(iVar9 + 4);
    while ((uVar2 & 4) == 0) {
      uVar10 = 1;
      psVar14 = (short *)(iVar7 + (int)(lVar8 << 5) + (int)(lVar8 << 3));
      uVar2 = psVar14[2];
      sVar1 = psVar14[1];
      psVar14[2] = uVar2 & 0xffef;
      if (sVar1 != -1) {
        uVar10 = (*(ushort *)
                                (DAT_00a24624 +
                                 (int)((longlong)sVar1 << 5) + (int)((longlong)sVar1 << 3) + 0x24) -
                               1 == 0);
      }
      *(uint *)(psVar14 + 0x12) = uVar10;
      if (((uVar2 & 0x1000) != 0) &&
         ((*(uint *)(g_KeyLevelFlags + (int)((longlong)*psVar14 << 4) + 0xc) & 1) == 0)) {
        psVar14[0x12] = 0;
        psVar14[0x13] = 0;
      }
      if (psVar14[5] != 0) {
        lVar11 = uVar6 - 0xd0;
        psVar14[2] = uVar2 & 0xffef | 0x10;
        Map_GetIconLabel((int)lVar8,(char *)lVar11);
        *(undefined2 *)(puVar4 + 0xf) = 0;
        *(undefined2 *)((int)puVar4 + 0x7c) = 0;
        *(undefined2 *)((int)puVar4 + 0x84) = 0;
        *(undefined2 *)(puVar4 + 0x10) = 4;
        *(undefined2 *)((int)puVar4 + 0x82) = 4;
        *(undefined2 *)((int)puVar4 + 0x86) = 0;
        *(undefined2 *)(puVar4 + 0x11) = 0xf;
        *(undefined2 *)((int)puVar4 + 0x8a) = 4;
        *(undefined2 *)((int)puVar4 + 0x8c) = 0;
        *(undefined2 *)((int)puVar4 + 0x8e) = 0;
        *(short *)((int)puVar4 + 0x7a) = psVar14[8];
        *(short *)((int)puVar4 + 0x7e) = psVar14[7];
        uVar15 = 0x3ff0000000000000;
        FontPrintOpt(0x3ff0000000000000,uVar6 - 0xe8,0x80ffa888,lVar11,0xffffffffffffffff);
        sVar1 = *(short *)((int)puVar4 + 0x86);
        lVar12 = 0;
        psVar14[8] = sVar1 + 8;
        do {
          *(short *)((int)puVar4 + 0x7e) = *(short *)((int)puVar4 + 0x7e) + -4;
          FontPrintOpt(uVar15,uVar6 - 0xe8,0x80ffa888,lVar11,0xffffffffffffffff);
          iVar7 = g_MapIcons;
          lVar12 = (ZERO_MASK(((int)sVar1 - (int)*(short *)((int)puVar4 + 0x86))) &
                   lVar12 - 1U) + 1;
        } while ((int)lVar12 == 0);
        psVar14[7] = *(short *)((int)puVar4 + 0x7e) + 4;
      }
      lVar8 = (longlong)((int)lVar8 + 1);
      uVar2 = *(ushort *)(iVar7 + (int)(lVar8 << 5) + (int)(lVar8 << 3) + 4);
    }
  }
  return;
}


// 0x00eaf70 (0x38 bytes)
// strings: 0096c24c: 'None'


int MissionCond_eaf70(void)

{
  int iVar1;
  
  if ((g_KeyLevelFlags.piece<396,4>() == 0) || (g_MiscLevelFlags.field24_0x18 == 0)) {
    iVar1 = 0;
  }
  else {
    iVar1 = 1;
  }
  return iVar1;
}


// 0x00eafa8 (0x44 bytes)
// strings: 0096c24c: 'None'


int MissionCond_eafa8(void)

{
  int iVar1;
  
  if (((g_KeyLevelFlags.piece<764,4>() == 0) || (g_MiscLevelFlags.field32_0x20 == 0)) ||
     (g_MiscLevelFlags.field33_0x21 == 0)) {
    iVar1 = 0;
  }
  else {
    iVar1 = 1;
  }
  return iVar1;
}


// 0x00eafec (0x30 bytes)
// strings: 0096c24c: 'None'


int MissionCond_eafec(void)

{
  int iVar1;
  
  if ((g_KeyLevelFlags.piece<1036,4>() == 0) || (g_KeyLevelFlags.piece<1020,4>() == 0)) {
    iVar1 = 0;
  }
  else {
    iVar1 = 1;
  }
  return iVar1;
}


// 0x00eb01c (0x38 bytes)
// strings: 0096c24c: 'None'


int MissionCond_eb01c(void)

{
  int iVar1;
  
  if ((g_KeyLevelFlags.piece<1068,4>() == 0) || (g_MiscLevelFlags.field85_0x55 == 0)) {
    iVar1 = 0;
  }
  else {
    iVar1 = 1;
  }
  return iVar1;
}


// 0x00eb054 (0x38 bytes)
// strings: 0096c24c: 'None'


int MissionCond_eb054(void)

{
  int iVar1;
  
  if ((g_KeyLevelFlags.piece<1132,4>() == 0) || (g_MiscLevelFlags.field97_0x61 == 0)) {
    iVar1 = 0;
  }
  else {
    iVar1 = 1;
  }
  return iVar1;
}


// 0x00eb08c (0x38 bytes)
// strings: 0096c24c: 'None'


int MissionCond_eb08c(void)

{
  int iVar1;
  
  if ((g_KeyLevelFlags.piece<1404,4>() == 0) || (CHAR_ARRAY_0096c165[0x15] == '\0')) {
    iVar1 = 0;
  }
  else {
    iVar1 = 1;
  }
  return iVar1;
}


// 0x00eb0c4 (0x30 bytes)
int CheckIfMapOMaticAndHologuiseUnlocked(void)

{
  int iVar1;
  
  if ((UnlockableItems.mapOMatic == '\0') || (UnlockableItems.hologuise == '\0')) {
    iVar1 = 0;
  }
  else {
    iVar1 = 1;
  }
  return iVar1;
}


// 0x00eb0f4 (0x24 bytes)
bool IsItemUnlocked(int param_1)

{
  return (&UnlockableItems.field0_0x0)[param_1] != '\0';
}


// 0x00eb118 (0x5c bytes)
// strings: 0096c24c: 'None'


int MissionCond_eb118(void)

{
  int iVar1;
  
  if (g_KeyLevelFlags.piece<396,4>() == 0 && g_KeyLevelFlags.piece<332,4>() != 0) {
    iVar1 = 1;
  }
  else if (((g_KeyLevelFlags.piece<396,4>() == 0) || (UnlockableItems.heliPack == '\0')) ||
          (g_KeyLevelFlags.piece<364,4>() != 0)) {
    iVar1 = 0;
  }
  else {
    iVar1 = 2;
  }
  return iVar1;
}


// 0x00eb174 (0x40 bytes)
// strings: 0096c24c: 'None'


int MissionCond_eb174(void)

{
  int iVar1;
  
  if (g_KeyLevelFlags.piece<764,4>() == 0) {
    iVar1 = 0;
  }
  else if (g_MiscLevelFlags.field32_0x20 == 0) {
    iVar1 = 1;
  }
  else {
    iVar1 = 2;
  }
  return iVar1;
}


// 0x00eb1b4 (0x38 bytes)
int MissionCond_eb1b4(void)

{
  int iVar1;
  
  if ((g_MiscLevelFlags.field97_0x61 == 0) || (g_SeenPlanets.Gemlik == 0)) {
    iVar1 = 0;
  }
  else {
    iVar1 = 1;
  }
  return iVar1;
}


// 0x00eb1ec (0x40 bytes)
// strings: 0096c24c: 'None'


int MissionCond_eb1ec(void)

{
  int iVar1;
  
  if (UnlockableItems.morphORay == '\0') {
    if (g_KeyLevelFlags.piece<1404,4>() == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = 1;
    }
  }
  else {
    iVar1 = 2;
  }
  return iVar1;
}


// 0x00eb22c (0x24 bytes)
bool CheckIfHologuiseUnlocked(void)

{
  return UnlockableItems.hologuise != '\0';
}


// 0x00eb250 (0x38 bytes)
undefined8 GetKaleboItemsUnlockStatus(void)

{
  undefined8 uVar1;
  
  if (UnlockableItems.hologuise == '\0') {
    if (UnlockableItems.mapOMatic == '\0') {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 2;
  }
  return uVar1;
}


