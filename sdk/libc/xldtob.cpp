// sdk/libc/xldtob.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x5d8ba8-0x5d9584
#include <string.h>
#include "sdk/libc/xldtob.h"
#include "sdk/libc/xdunscal.h"
#include "sdk/libc/xfemu.h"
#include "sdk/libc/xgenld.h"
#include "sdk/libc/xgetstr.h"
#include "sdk/libc/xstrftim.h"

// SDK libc.a(xldtob.o): _Ldtob  [fuzzy 1.000 match]
// 0x05d8ba8 (0x9b4 bytes)
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void * FUN_005d8ba8(double *param_1,byte param_2)

{
  bool bVar1;
  byte *pbVar2;
  short sVar4;
  void *pvVar3;
  undefined *puVar5;
  byte *pbVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined1 uVar10;
  ulonglong uVar11;
  ushort uVar12;
  byte *pbVar13;
  undefined1 *puVar14;
  byte bVar17;
  byte *pbVar15;
  byte *pbVar16;
  int iVar18;
  byte in_cr0;
  byte in_cr1;
  byte in_cr2;
  byte in_cr3;
  byte unaff_cr4;
  byte in_cr5;
  byte in_cr6;
  byte in_cr7;
  longlong lVar19;
  double dVar20;
  double dVar21;
  uint uStack00000008;
  ushort local_170 [2];
  GPiece<4> auStack_16c;
  double local_168;
  int local_160;
  char cStack_159;
  undefined4 uStack_154;
  undefined8 local_148;
  undefined8 local_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined8 local_130;
  byte local_128 [56];
  undefined4 local_f0 [2];
  undefined8 local_e8;
  undefined4 local_e0 [2];
  undefined8 local_d8;
  undefined4 local_d0 [2];
  undefined8 local_c8;
  undefined4 local_c0 [2];
  undefined8 local_b8;
  longlong local_b0;
  
  uStack00000008 =
       (uint)(in_cr0 & 0xf) << 0x1c | (uint)(in_cr1 & 0xf) << 0x18 | (uint)(in_cr2 & 0xf) << 0x14 |
       (uint)(in_cr3 & 0xf) << 0x10 | (uint)(unaff_cr4 & 0xf) << 0xc | (uint)(in_cr5 & 0xf) << 8 |
       (uint)(in_cr6 & 0xf) << 4 | (uint)(in_cr7 & 0xf);
  dVar20 = *param_1;
  if ((param_2 != 0x61) && (param_2 != 0x41)) {
    if (*(int *)((int)param_1 + 0x44) < 0) {
      *(undefined4 *)((int)param_1 + 0x44) = 6;
    }
    else if ((*(int *)((int)param_1 + 0x44) == 0) && ((param_2 == 0x67 || (param_2 == 0x47)))) {
      *(undefined4 *)((int)param_1 + 0x44) = 1;
    }
  }
  sVar4 = FUN_005d955c(local_170,param_1);
  if (sVar4 == 2) {
    pvVar3 = *(void **)(param_1 + 5);
    puVar5 = PTR_DAT_0071c534;
    if ((((param_2 != 0x61) && (param_2 != 0x65)) && (param_2 != 0x66)) && (param_2 != 0x67)) {
      puVar5 = PTR_DAT_0071c530;
    }
LAB_005d8c94:
    *(undefined4 *)((int)param_1 + 0x34) = 3;
    pvVar3 = memcpy(pvVar3,puVar5,3);
    return pvVar3;
  }
  if (0 < sVar4) {
    pvVar3 = *(void **)(param_1 + 5);
    puVar5 = PTR_DAT_0071c53c;
    if ((((param_2 != 0x61) && (param_2 != 0x65)) && (param_2 != 0x66)) && (param_2 != 0x67)) {
      puVar5 = PTR_DAT_0071c538;
    }
    goto LAB_005d8c94;
  }
  if (param_2 == 0x61) {
    uVar10 = 0x78;
    puVar14 = *(undefined1 **)(param_1 + 5) + 1;
    **(undefined1 **)(param_1 + 5) = 0x30;
    *(undefined1 **)(param_1 + 5) = puVar14;
LAB_005d9434:
    *puVar14 = uVar10;
    *(undefined1 **)(param_1 + 5) = puVar14 + 1;
    *(int *)((int)param_1 + 0x2c) = *(int *)((int)param_1 + 0x2c) + 2;
  }
  else if (param_2 == 0x41) {
    uVar10 = 0x58;
    puVar14 = *(undefined1 **)(param_1 + 5) + 1;
    **(undefined1 **)(param_1 + 5) = 0x30;
    *(undefined1 **)(param_1 + 5) = puVar14;
    goto LAB_005d9434;
  }
  if (sVar4 == 0) {
    local_170[0] = 0;
    pbVar6 = local_128;
    sVar4 = 0;
  }
  else {
    puVar5 = PTR_s_0123456789abcdef_0071c540;
    if ((param_2 == 0x61) || (puVar5 = PTR_s_0123456789ABCDEF_0071c544, param_2 == 0x41)) {
      pbVar15 = (byte *)0x21;
      iVar18 = 0x21;
      iVar8 = 0x22;
      if (-1 < *(int *)((int)param_1 + 0x44)) {
        pbVar15 = (byte *)(*(int *)((int)param_1 + 0x44) + 1);
        iVar18 = (int)(short)pbVar15;
        iVar8 = iVar18 + 1;
      }
      if (dVar20 < DAT_0071c548) {
        local_168 = -*param_1;
      }
      else {
        local_168 = *param_1;
      }
      pbVar6 = local_128 + 1;
      dVar20 = DAT_0071c548;
      FUN_005d8b80(&local_168,0xfffffffffffffffd);
      pbVar13 = pbVar6;
      if ((0 < iVar8) && (dVar20 < local_168)) {
        do {
          iVar8 = iVar8 + -7;
          FUN_005d8b80(&local_168,0x1c);
          iVar7 = (int)local_168;
          if (0 < iVar8) {
            local_b0 = (longlong)iVar7;
            local_168 = local_168 - (double)local_b0;
          }
          pbVar16 = pbVar13 + 7;
          iVar9 = 6;
          if (iVar7 < 1) {
LAB_005d93ec:
            iVar7 = iVar9 + 1;
            if (iVar9 + -1 < -1) {
              iVar7 = 1;
            }
            do {
              pbVar16 = pbVar16 + -1;
              *pbVar16 = 0;
              iVar7 = iVar7 + -1;
            } while (iVar7 != 0);
          }
          else {
            iVar9 = 6;
            lVar19 = 7;
            do {
              pbVar16 = pbVar13 + iVar9;
              bVar17 = (byte)iVar7;
              iVar7 = iVar7 >> 4;
              *pbVar16 = bVar17 & 0xf;
              if (iVar7 < 1) {
                iVar9 = iVar9 + -1;
                if (-1 < iVar9) goto LAB_005d93ec;
                break;
              }
              iVar9 = iVar9 + -1;
              lVar19 = lVar19 + -1;
            } while (lVar19 != 0);
          }
          pbVar13 = pbVar16 + 7;
        } while ((0 < iVar8) && (dVar20 < local_168));
      }
      pbVar13 = pbVar13 + (-1 - (int)local_128);
      if ((int)pbVar13 < iVar18) {
        pbVar15 = pbVar13;
      }
      sVar4 = (short)pbVar15;
      iVar18 = (int)sVar4;
      uVar12 = local_170[0] - 1;
      if (-1 < sVar4) {
        if (((int)pbVar13 <= (int)sVar4) || (bVar17 = 0xf, (char)local_128[sVar4 + 1] < '\b')) {
          bVar17 = 0;
        }
        pbVar16 = (byte *)(sVar4 + -1);
        pbVar13 = pbVar6 + (int)pbVar16;
        if (*pbVar13 == bVar17) {
          pbVar15 = (byte *)(int)sVar4;
          pbVar2 = local_128 + (int)((byte *)(int)sVar4 + -1);
          do {
            pbVar13 = pbVar2;
            pbVar16 = pbVar15;
            pbVar15 = pbVar16 + -1;
            pbVar2 = pbVar13 + -1;
          } while (*pbVar13 == bVar17);
          pbVar16 = pbVar16 + -2;
        }
        sVar4 = (short)pbVar15;
        if (bVar17 == 0xf) {
          *pbVar13 = *pbVar13 + 1;
        }
        if ((int)pbVar16 < 0) {
          sVar4 = sVar4 + 1;
          uVar12 = local_170[0] + 3;
          pbVar6 = local_128;
        }
        local_170[0] = uVar12;
        iVar8 = (int)sVar4;
        iVar18 = (int)sVar4;
        uVar12 = local_170[0];
        if (-1 < sVar4 + -1) {
          pbVar15 = pbVar6 + iVar8;
          do {
            pbVar15 = pbVar15 + -1;
            *pbVar15 = puVar5[(char)*pbVar15];
            iVar8 = iVar8 + -1;
          } while (iVar8 != 0);
        }
      }
      local_170[0] = uVar12;
      if (*(int *)((int)param_1 + 0x44) < 0) {
        *(int *)((int)param_1 + 0x44) = iVar18 + -1;
      }
    }
    else {
      dVar20 = DAT_0071c548;
      FUN_005d60b0(&local_138);
      iVar18 = (short)local_170[0] * 0x7597 >> 0x1f;
      uVar11 = ((longlong)(((short)local_170[0] * 0x7597) / 100000 + iVar18) - (longlong)iVar18) - 4
      ;
      local_170[0] = (ushort)uVar11;
      if ((short)local_170[0] < 0) {
        local_170[0] = -(3 - local_170[0] & 0xfffc);
        FUN_005d6450(local_f0,CONCAT44(local_138,uStack_134),local_130,-(int)(short)local_170[0]);
        local_138 = local_f0[0];
        local_130 = local_e8;
      }
      else if (((uVar11 & 0xffff) != 0) &&
              (local_170[0] = local_170[0] & 0xfffc, 0 < (short)local_170[0])) {
        FUN_005d6450(local_e0,CONCAT44(local_138,uStack_134),local_130,-(int)(short)local_170[0]);
        local_138 = local_e0[0];
        local_130 = local_d8;
      }
      if ((param_2 == 0x66) || (iVar18 = 6, param_2 == 0x46)) {
        iVar18 = (short)local_170[0] + 10;
      }
      iVar18 = iVar18 + *(int *)((int)param_1 + 0x44);
      if (0x13 < iVar18) {
        iVar18 = 0x13;
      }
      pbVar15 = local_128 + 1;
      dVar21 = (double)FUN_005d6668(CONCAT44(local_138,uStack_134),local_130,auStack_16c);
      if ((0 < iVar18) && (pbVar15 = local_128 + 1, dVar20 < dVar21)) {
        do {
          iVar8 = (int)dVar21;
          iVar18 = iVar18 + -8;
          if (0 < iVar18) {
            local_b0 = (longlong)iVar8;
            FUN_005d60b0((double)local_b0,&local_148);
            FUN_005d6278(local_d0,CONCAT44(local_138,uStack_134),local_130,local_148,local_140);
            FUN_005d615c(local_c0,CONCAT44(local_d0[0],uStack_134),local_c8,
                         CONCAT44(0x4019,uStack_154),0xbebc200000000000);
            local_138 = local_c0[0];
            local_130 = local_b8;
            dVar21 = (double)FUN_005d6668(CONCAT44(local_c0[0],uStack_134),local_b8,auStack_16c);
          }
          pbVar6 = pbVar15 + 8;
          iVar7 = 7;
          if (iVar8 < 1) {
LAB_005d93b4:
            iVar8 = iVar7 + 1;
            if (iVar7 + -1 < -1) {
              iVar8 = 1;
            }
            do {
              pbVar6 = pbVar6 + -1;
              *pbVar6 = 0x30;
              iVar8 = iVar8 + -1;
            } while (iVar8 != 0);
          }
          else {
            iVar7 = 7;
            do {
              FUN_005dad5c(&local_160,iVar8,10);
              pbVar6 = pbVar15 + iVar7;
              bVar1 = iVar7 != 0;
              *pbVar6 = cStack_159 + 0x30;
              if (local_160 < 1) {
                iVar7 = iVar7 + -1;
                if (-1 < iVar7) goto LAB_005d93b4;
                break;
              }
              iVar7 = iVar7 + -1;
              iVar8 = local_160;
            } while (bVar1);
          }
          pbVar15 = pbVar6 + 8;
        } while ((0 < iVar18) && (dVar20 < dVar21));
      }
      pbVar13 = local_128 + 1;
      local_170[0] = local_170[0] + 7;
      iVar18 = -1 - (int)local_128;
      pbVar6 = pbVar13;
      if (local_128[1] == '0') {
        do {
          pbVar6 = pbVar6 + 1;
        } while (*pbVar6 == 0x30);
        local_170[0] = (local_170[0] + (short)pbVar13) - (short)pbVar6;
        iVar18 = -(int)pbVar6;
      }
      if ((param_2 == 0x66) || (param_2 == 0x46)) {
        uVar12 = local_170[0] + 1;
      }
      else {
        uVar12 = 1;
        if (param_2 != 0x65) {
          uVar12 = (ushort)((ulonglong)(param_2 ^ 0x45) - 1 >> 0x3f);
        }
      }
      sVar4 = (short)*(undefined4 *)((int)param_1 + 0x44) + uVar12;
      iVar8 = (int)sVar4;
      if (sVar4 < 0x12) {
        if (sVar4 < 0) goto LAB_005d8d98;
        iVar7 = sVar4 + -1;
      }
      else {
        sVar4 = 0x11;
        iVar8 = 0x11;
        iVar7 = 0x10;
      }
      if (((int)(pbVar15 + iVar18) <= iVar8) || (bVar17 = 0x39, (char)pbVar6[sVar4] < '5')) {
        bVar17 = 0x30;
      }
      pbVar15 = pbVar6 + iVar7;
      if (*pbVar15 == bVar17) {
        pbVar15 = pbVar6 + iVar7;
        iVar18 = 0;
        do {
          pbVar15 = pbVar15 + -1;
          iVar18 = iVar18 + 1;
        } while (*pbVar15 == bVar17);
        iVar7 = iVar7 - iVar18;
        sVar4 = sVar4 - (short)iVar18;
      }
      if (bVar17 == 0x39) {
        *pbVar15 = *pbVar15 + 1;
      }
      if (iVar7 < 0) {
        pbVar6 = pbVar6 + -1;
        sVar4 = sVar4 + 1;
        local_170[0] = local_170[0] + 1;
      }
    }
  }
LAB_005d8d98:
  pvVar3 = (void *)FUN_005db060(param_1,param_2,pbVar6,sVar4,local_170[0]);
  return pvVar3;
}


// 0x05d955c (0x28 bytes)
undefined2 FUN_005d955c(void)

{
  undefined2 uVar1;
  
  uVar1 = FUN_005daf40();
  return uVar1;
}


