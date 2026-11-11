// sdk/libc/xgetfloa.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x5d6d30-0x5d83c0
#include <string.h>
#include "sdk/libc/xgetfloa.h"
#include "sdk/libc/xgetstr.h"
#include "sdk/libc/xstoll.h"
#include "sdk/libc/xstoull.h"
#include "sdk/xUnk4.h"

// SDK libc.a(xgetfloa.o): _Getfloat  [fuzzy 1.000 match]
// 0x05d6d30 (0x1018 bytes)
// strings: 006614d8: '0123456789abcdefABCDEF'

undefined4 FUN_005d6d30(undefined4 *param_1)

{
  bool bVar1;
  ushort uVar2;
  bool bVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  ulonglong uVar7;
  int iVar11;
  uint uVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  int iVar16;
  byte in_cr0;
  byte in_cr1;
  byte in_cr2;
  byte in_cr3;
  byte unaff_cr4;
  byte in_cr5;
  byte in_cr6;
  byte in_cr7;
  uint uStack00000008;
  double local_a0;
  undefined1 local_98;
  GPiece<71> auStack_97;
  
  uStack00000008 =
       (uint)(in_cr0 & 0xf) << 0x1c | (uint)(in_cr1 & 0xf) << 0x18 | (uint)(in_cr2 & 0xf) << 0x14 |
       (uint)(in_cr3 & 0xf) << 0x10 | (uint)(unaff_cr4 & 0xf) << 0xc | (uint)(in_cr5 & 0xf) << 8 |
       (uint)(in_cr6 & 0xf) << 4 | (uint)(in_cr7 & 0xf);
  if ((int)param_1[6] < 1) {
    param_1[5] = 0x7ffffffe;
LAB_005d6d90:
    param_1[4] = param_1[4] + 1;
    iVar8 = (**(code **)*param_1)(param_1[1],0,1);
    if ((iVar8 == 0x2b) || (puVar13 = &local_98, iVar8 == 0x2d)) {
      iVar11 = param_1[5];
      local_98 = (undefined1)iVar8;
      param_1[5] = iVar11 + -1;
      if (iVar11 + -1 < 0) {
        iVar8 = -1;
        puVar13 = auStack_97;
        param_1[4] = param_1[4] + 1;
      }
      else {
        puVar13 = auStack_97;
        param_1[4] = param_1[4] + 1;
        iVar8 = (**(code **)*param_1)(param_1[1],0,1);
        if (iVar8 == 0x30) goto LAB_005d6e70;
LAB_005d6de4:
        if ((iVar8 == 0x6e) || (iVar8 == 0x4e)) {
          puVar15 = puVar13 + 1;
          *puVar13 = 0x6e;
          iVar8 = param_1[5];
          param_1[5] = iVar8 + -1;
          puVar14 = puVar15;
          if (iVar8 + -1 < 0) {
LAB_005d70e0:
            iVar11 = param_1[4] + 1;
            param_1[4] = iVar11;
LAB_005d70ec:
            bVar3 = false;
            iVar8 = -1;
            param_1[4] = iVar11 + -1;
          }
          else {
            param_1[4] = param_1[4] + 1;
            iVar8 = (**(code **)*param_1)(param_1[1],0,1);
            if ((iVar8 == 0x61) || (iVar8 == 0x41)) {
              puVar14 = puVar13 + 2;
              *puVar15 = 0x61;
              iVar8 = param_1[5];
              param_1[5] = iVar8 + -1;
              if (iVar8 + -1 < 0) goto LAB_005d70e0;
              param_1[4] = param_1[4] + 1;
              iVar8 = (**(code **)*param_1)(param_1[1],0,1);
              if ((iVar8 != 0x6e) && (iVar8 != 0x4e)) goto LAB_005d7018;
              iVar8 = param_1[5];
              param_1[5] = iVar8 + -1;
              if (iVar8 + -1 < 0) {
                iVar8 = -1;
                iVar11 = param_1[4] + 1;
                param_1[4] = iVar11;
LAB_005d7adc:
                param_1[4] = iVar11 + -1;
              }
              else {
                param_1[4] = param_1[4] + 1;
                iVar8 = (**(code **)*param_1)(param_1[1],0,1);
                puVar5 = PTR_PTR_0071c514;
                if (iVar8 == 0x28) {
                  do {
                    iVar11 = param_1[5];
                    iVar8 = -1;
                    iVar16 = -2;
                    param_1[5] = iVar11 + -1;
                    if (iVar11 + -1 < 0) {
                      param_1[4] = param_1[4] + 1;
                    }
                    else {
                      param_1[4] = param_1[4] + 1;
                      uVar7 = (**(code **)*param_1)(param_1[1],0,1);
                      iVar8 = (int)uVar7;
                      iVar16 = (int)((uVar7 & 0x7fffffff) << 1);
                    }
                  } while (((*(ushort *)(iVar16 + *(int *)puVar5) & 0x232) != 0) || (iVar8 == 0x5f))
                  ;
                  if (iVar8 != 0x29) {
                    if (iVar8 == -1) {
                      bVar3 = false;
                      param_1[4] = param_1[4] + -1;
                      goto LAB_005d7058;
                    }
                    goto LAB_005d7020;
                  }
                }
                else {
                  if (iVar8 == -1) {
                    iVar11 = param_1[4];
                    goto LAB_005d7adc;
                  }
                  param_1[4] = param_1[4] + -1;
                  (**(code **)*param_1)(param_1[1],iVar8,0);
                }
              }
              bVar3 = true;
              *puVar14 = 0x6e;
              puVar14 = puVar13 + 3;
            }
            else {
LAB_005d7018:
              if (iVar8 == -1) {
                iVar11 = param_1[4];
                goto LAB_005d70ec;
              }
LAB_005d7020:
              bVar3 = false;
              param_1[4] = param_1[4] + -1;
              (**(code **)*param_1)(param_1[1],iVar8,0);
            }
          }
LAB_005d7058:
          iVar11 = 0;
          uVar12 = 0;
          goto joined_r0x005d7068;
        }
        if ((iVar8 == 0x69) || (iVar8 == 0x49)) {
          puVar14 = puVar13 + 1;
          *puVar13 = 0x69;
          iVar8 = param_1[5];
          param_1[5] = iVar8 + -1;
          if (iVar8 + -1 < 0) goto LAB_005d70e0;
          param_1[4] = param_1[4] + 1;
          iVar8 = (**(code **)*param_1)(param_1[1],0,1);
          if ((iVar8 != 0x6e) && (iVar8 != 0x4e)) goto LAB_005d7018;
          puVar15 = puVar13 + 2;
          *puVar14 = 0x6e;
          iVar8 = param_1[5];
          param_1[5] = iVar8 + -1;
          puVar14 = puVar15;
          if (iVar8 + -1 < 0) goto LAB_005d70e0;
          param_1[4] = param_1[4] + 1;
          iVar8 = (**(code **)*param_1)(param_1[1],0,1);
          if ((iVar8 != 0x66) && (iVar8 != 0x46)) goto LAB_005d7018;
          iVar8 = param_1[5];
          param_1[5] = iVar8 + -1;
          if (iVar8 + -1 < 0) {
            iVar8 = -1;
            iVar11 = param_1[4] + 1;
            param_1[4] = iVar11;
LAB_005d7bb8:
            param_1[4] = iVar11 + -1;
          }
          else {
            param_1[4] = param_1[4] + 1;
            iVar8 = (**(code **)*param_1)(param_1[1],0,1);
            if ((iVar8 == 0x69) || (iVar8 == 0x49)) {
              iVar8 = param_1[5];
              param_1[5] = iVar8 + -1;
              if (iVar8 + -1 < 0) goto LAB_005d70e0;
              param_1[4] = param_1[4] + 1;
              iVar8 = (**(code **)*param_1)(param_1[1],0,1);
              if ((iVar8 == 0x6e) || (iVar8 == 0x4e)) {
                iVar8 = param_1[5];
                param_1[5] = iVar8 + -1;
                if (iVar8 + -1 < 0) goto LAB_005d70e0;
                param_1[4] = param_1[4] + 1;
                iVar8 = (**(code **)*param_1)(param_1[1],0,1);
                if ((iVar8 == 0x69) || (iVar8 == 0x49)) {
                  iVar8 = param_1[5];
                  param_1[5] = iVar8 + -1;
                  if (iVar8 + -1 < 0) goto LAB_005d70e0;
                  param_1[4] = param_1[4] + 1;
                  iVar8 = (**(code **)*param_1)(param_1[1],0,1);
                  if ((iVar8 == 0x74) || (iVar8 == 0x54)) {
                    iVar8 = param_1[5];
                    param_1[5] = iVar8 + -1;
                    if (iVar8 + -1 < 0) goto LAB_005d70e0;
                    param_1[4] = param_1[4] + 1;
                    iVar8 = (**(code **)*param_1)(param_1[1],0,1);
                    if ((iVar8 == 0x79) || (iVar8 == 0x59)) goto LAB_005d7938;
                  }
                }
              }
              goto LAB_005d7018;
            }
            if (iVar8 == -1) {
              iVar11 = param_1[4];
              goto LAB_005d7bb8;
            }
            param_1[4] = param_1[4] + -1;
            (**(code **)*param_1)(param_1[1],iVar8,0);
          }
LAB_005d7938:
          bVar3 = true;
          *puVar15 = 0x66;
          puVar14 = puVar13 + 3;
          goto LAB_005d7058;
        }
      }
      goto LAB_005d6e04;
    }
    if (iVar8 != 0x30) goto LAB_005d6de4;
LAB_005d6e70:
    iVar8 = param_1[5];
    param_1[5] = iVar8 + -1;
    puVar15 = puVar13;
    if (-1 < iVar8 + -1) {
      param_1[4] = param_1[4] + 1;
      iVar8 = (**(code **)*param_1)(param_1[1],0,1);
      if (iVar8 == 0x78) {
LAB_005d6ed4:
        puVar15 = puVar13 + 2;
        *puVar13 = 0x30;
        puVar13[1] = 0x78;
        iVar8 = param_1[5];
        param_1[5] = iVar8 + -1;
        if (iVar8 + -1 < 0) {
          bVar3 = false;
          uVar12 = 0x16;
          param_1[4] = param_1[4] + 1;
          goto LAB_005d7114;
        }
        bVar3 = false;
        param_1[4] = param_1[4] + 1;
        uVar12 = 0x16;
        iVar8 = (**(code **)*param_1)(param_1[1],0,1);
      }
      else {
        bVar3 = true;
        uVar12 = 10;
        if (iVar8 == 0x58) goto LAB_005d6ed4;
      }
      goto LAB_005d6e0c;
    }
    bVar3 = true;
    uVar12 = 10;
    param_1[4] = param_1[4] + 1;
LAB_005d7114:
    iVar8 = -1;
LAB_005d7118:
    if (bVar3) goto LAB_005d76c0;
  }
  else {
    iVar8 = param_1[6] + -1;
    param_1[5] = iVar8;
    if (-1 < iVar8) goto LAB_005d6d90;
    iVar8 = -1;
    puVar13 = &local_98;
    param_1[4] = param_1[4] + 1;
LAB_005d6e04:
    bVar3 = false;
    uVar12 = 10;
    puVar15 = puVar13;
LAB_005d6e0c:
    if (iVar8 != 0x30) goto LAB_005d7118;
    do {
      iVar8 = param_1[5];
      param_1[5] = iVar8 + -1;
      if (iVar8 + -1 < 0) {
        bVar3 = true;
        iVar8 = -1;
        param_1[4] = param_1[4] + 1;
        goto LAB_005d76c0;
      }
      param_1[4] = param_1[4] + 1;
      iVar8 = (**(code **)*param_1)(param_1[1],0,1);
    } while (iVar8 == 0x30);
    bVar3 = true;
LAB_005d76c0:
    *puVar15 = 0x30;
    puVar15 = puVar15 + 1;
  }
  puVar5 = PTR_s_0123456789abcdefABCDEF_0071c518;
  iVar16 = 0;
  iVar11 = 0;
  if (iVar8 != -1) {
    iVar16 = 0;
    iVar11 = 0;
    do {
      iVar9 = FUN_005c5984(puVar5,iVar8,uVar12);
      if (iVar9 == 0) break;
      if (iVar16 < 0x24) {
        *puVar15 = (char)iVar8;
        puVar15 = puVar15 + 1;
        iVar16 = iVar16 + 1;
        iVar8 = param_1[5] + -1;
        param_1[5] = iVar8;
      }
      else {
        iVar11 = iVar11 + 1;
        iVar8 = param_1[5] + -1;
        param_1[5] = iVar8;
      }
      puVar6 = PTR_PTR_0071c51c;
      if (iVar8 < 0) {
        iVar8 = -1;
        bVar3 = true;
        param_1[4] = param_1[4] + 1;
        puVar13 = puVar15;
        if (**(char **)(puVar6 + 0x2c) == -1) goto LAB_005d7444;
        goto LAB_005d71e8;
      }
      bVar3 = true;
      param_1[4] = param_1[4] + 1;
      iVar8 = (**(code **)*param_1)(param_1[1],0,1);
    } while (iVar8 != -1);
  }
  puVar13 = puVar15;
  if (**(char **)(PTR_PTR_0071c51c + 0x2c) == iVar8) {
LAB_005d7444:
    puVar15 = puVar13 + 1;
    *puVar13 = (char)iVar8;
    iVar8 = param_1[5];
    param_1[5] = iVar8 + -1;
    if (iVar8 + -1 < 0) {
      iVar8 = -1;
      param_1[4] = param_1[4] + 1;
    }
    else {
      param_1[4] = param_1[4] + 1;
      iVar8 = (**(code **)*param_1)(param_1[1],0,1);
    }
  }
LAB_005d71e8:
  puVar14 = puVar15;
  if (iVar16 == 0) {
    if (iVar8 == 0x30) {
      do {
        iVar8 = param_1[5];
        iVar11 = iVar11 + -1;
        param_1[5] = iVar8 + -1;
        if (iVar8 + -1 < 0) {
          bVar3 = true;
          iVar8 = -1;
          param_1[4] = param_1[4] + 1;
          goto LAB_005d7254;
        }
        param_1[4] = param_1[4] + 1;
        iVar8 = (**(code **)*param_1)(param_1[1],0,1);
      } while (iVar8 == 0x30);
      bVar3 = true;
    }
LAB_005d7254:
    if (iVar11 < 0) {
      puVar14 = puVar15 + 1;
      iVar11 = iVar11 + 1;
      *puVar15 = 0x30;
    }
  }
  puVar5 = PTR_s_0123456789abcdefABCDEF_0071c518;
  bVar1 = iVar8 == -1;
  if (bVar1) {
LAB_005d77b8:
    if (bVar3) goto LAB_005d730c;
  }
  else {
    do {
      iVar9 = FUN_005c5984(puVar5,iVar8,uVar12);
      if (iVar9 == 0) goto LAB_005d77b8;
      if (iVar16 < 0x24) {
        iVar16 = iVar16 + 1;
        *puVar14 = (char)iVar8;
        puVar14 = puVar14 + 1;
      }
      iVar8 = param_1[5];
      bVar3 = true;
      param_1[5] = iVar8 + -1;
      if (iVar8 + -1 < 0) {
        bVar3 = true;
        iVar8 = -1;
        param_1[4] = param_1[4] + 1;
        break;
      }
      param_1[4] = param_1[4] + 1;
      iVar8 = (**(code **)*param_1)(param_1[1],0,1);
      bVar1 = iVar8 == -1;
    } while (!bVar1);
LAB_005d730c:
    if (uVar12 == 10) {
      if ((iVar8 == 0x65) || (bVar1 = iVar8 == -1, iVar8 == 0x45)) goto LAB_005d74b8;
    }
    else if ((iVar8 == 0x70) || (bVar1 = iVar8 == -1, iVar8 == 0x50)) {
LAB_005d74b8:
      puVar15 = puVar14 + 1;
      *puVar14 = (char)iVar8;
      iVar8 = param_1[5];
      param_1[5] = iVar8 + -1;
      puVar13 = puVar15;
      if (iVar8 + -1 < 0) {
LAB_005d77a4:
        uVar7 = 0xffffffffffffffff;
        param_1[4] = param_1[4] + 1;
      }
      else {
        param_1[4] = param_1[4] + 1;
        uVar7 = (**(code **)*param_1)(param_1[1],0,1);
        if (((int)uVar7 == 0x2b) || ((int)uVar7 == 0x2d)) {
          puVar13 = puVar14 + 2;
          *puVar15 = (char)uVar7;
          iVar8 = param_1[5];
          param_1[5] = iVar8 + -1;
          if (iVar8 + -1 < 0) goto LAB_005d77a4;
          param_1[4] = param_1[4] + 1;
          uVar7 = (**(code **)*param_1)(param_1[1],0,1);
        }
        if ((int)uVar7 == 0x30) {
          iVar8 = param_1[5] + -1;
          param_1[5] = iVar8;
          while (-1 < iVar8) {
            param_1[4] = param_1[4] + 1;
            uVar7 = (**(code **)*param_1)(param_1[1],0,1);
            if ((int)uVar7 != 0x30) goto LAB_005d75a8;
            iVar8 = param_1[5] + -1;
            param_1[5] = iVar8;
          }
          uVar7 = 0xffffffffffffffff;
          param_1[4] = param_1[4] + 1;
LAB_005d75a8:
          *puVar13 = 0x30;
          puVar13 = puVar13 + 1;
        }
      }
      puVar5 = PTR_PTR_0071c514;
      iVar16 = 0;
      do {
        iVar8 = (int)uVar7;
        uVar2 = *(ushort *)(((uint)((uVar7 & 0xffffffff) << 1) & 0x1fe) + *(int *)puVar5);
        puVar14 = puVar13;
        while( true ) {
          if ((uVar2 & 0x20) == 0) {
            bVar3 = true;
            bVar4 = true;
            if (iVar8 == -1) goto LAB_005d7684;
            goto LAB_005d7330;
          }
          puVar13 = puVar14;
          if (iVar16 < 8) {
            puVar13 = puVar14 + 1;
            iVar16 = iVar16 + 1;
            *puVar14 = (char)uVar7;
          }
          iVar8 = param_1[5];
          uVar7 = 0xffffffffffffffff;
          param_1[5] = iVar8 + -1;
          if (iVar8 + -1 < 0) break;
          param_1[4] = param_1[4] + 1;
          uVar7 = (**(code **)*param_1)(param_1[1],0,1);
          iVar8 = (int)uVar7;
          uVar2 = *(ushort *)(((uint)((uVar7 & 0xffffffff) << 1) & 0x1fe) + *(int *)puVar5);
          puVar14 = puVar13;
        }
        param_1[4] = param_1[4] + 1;
      } while( true );
    }
  }
  bVar4 = bVar3;
  if (bVar1) {
LAB_005d7684:
    param_1[4] = param_1[4] + -1;
  }
  else {
LAB_005d7330:
    param_1[4] = param_1[4] + -1;
    (**(code **)*param_1)(param_1[1],iVar8,0);
    bVar3 = bVar4;
  }
joined_r0x005d7068:
  if (bVar3) {
    uVar10 = 1;
    *puVar14 = 0;
    if (*(char *)(param_1 + 7) == '\0') {
      if (uVar12 < 0xb) {
        local_a0 = (double)FUN_005da554(&local_98,0,iVar11);
      }
      else {
        local_a0 = (double)FUN_005da554(&local_98,0,0);
        FUN_005d8b80(&local_a0,iVar11 << 2);
      }
      *(undefined1 *)((int)param_1 + 0x1e) = 1;
      if ((*(char *)((int)param_1 + 0x1d) == 'l') || (*(char *)((int)param_1 + 0x1d) == 'L')) {
        uVar10 = 1;
        iVar8 = param_1[2];
        param_1[2] = iVar8 + 8;
        **(double **)(iVar8 + 4) = local_a0;
      }
      else {
        uVar10 = 1;
        iVar8 = param_1[2];
        param_1[2] = iVar8 + 8;
        **(float **)(iVar8 + 4) = (float)local_a0;
      }
    }
  }
  else if ((puVar14 != &local_98) || (uVar10 = 0xffffffff, iVar8 != -1)) {
    uVar10 = 0;
  }
  return uVar10;
}


// 0x05d7d48 (0x678 bytes)
// strings: 006614f0: 'diouxXp' | 00661500: '0123456789abcdefABCDEF' | 005d804c: '|\tX.|' (raw)

/* WARNING: Heritage AFTER dead removal. Example location: r0x0071c520 : 0x005d7dec */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

undefined4 FUN_005d7d48(undefined4 *param_1)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  undefined1 *puVar8;
  char cVar9;
  undefined8 uVar10;
  undefined1 local_70;
  GPiece<30> auStack_6f;
  GPiece<9> auStack_51;
  
  if ((int)param_1[6] < 1) {
    param_1[5] = 0x7ffffffe;
LAB_005d7d9c:
    param_1[4] = param_1[4] + 1;
    iVar3 = (**(code **)*param_1)(param_1[1],0,1);
    if ((iVar3 == 0x2b) || (puVar8 = &local_70, iVar3 == 0x2d)) {
      iVar5 = param_1[5];
      local_70 = (undefined1)iVar3;
      param_1[5] = iVar5 + -1;
      pcVar4 = PTR_s_diouxXp_0071c520;
      if (iVar5 + -1 < 0) {
        puVar8 = auStack_6f;
        param_1[4] = param_1[4] + 1;
        cVar9 = *(char *)param_1[3];
        goto LAB_005d8308;
      }
      puVar8 = auStack_6f;
      param_1[4] = param_1[4] + 1;
      iVar3 = (**(code **)*param_1)(param_1[1],0,1);
      uVar7 = ZEXT48(PTR_s_diouxXp_0071c520);
      pcVar4 = strchr(PTR_s_diouxXp_0071c520,(int)*(char *)param_1[3]);
      bVar1 = iVar3 == 0x30;
      cVar9 = pcVar4[8];
      if (bVar1) goto LAB_005d8108;
      goto joined_r0x005d7e2c;
    }
    uVar7 = ZEXT48(PTR_s_diouxXp_0071c520);
    pcVar4 = strchr(PTR_s_diouxXp_0071c520,(int)*(char *)param_1[3]);
    bVar1 = iVar3 == 0x30;
    cVar9 = pcVar4[8];
    if (!bVar1) goto joined_r0x005d7e2c;
LAB_005d8108:
    iVar3 = param_1[5];
    param_1[5] = iVar3 + -1;
    if (-1 < iVar3 + -1) {
      param_1[4] = param_1[4] + 1;
      iVar3 = (**(code **)*param_1)(param_1[1],0,1);
      if ((iVar3 != 0x78) && (iVar3 != 0x58)) goto LAB_005d8164;
      if ((cVar9 != '\0') && (cVar9 != '\x10')) goto LAB_005d80d4;
      iVar3 = param_1[5];
      param_1[5] = iVar3 + -1;
      if (iVar3 + -1 < 0) {
        iVar3 = -1;
        bVar2 = false;
        bVar1 = false;
        cVar9 = '\x10';
        param_1[4] = param_1[4] + 1;
      }
      else {
        bVar2 = false;
        param_1[4] = param_1[4] + 1;
        cVar9 = '\x10';
        iVar3 = (**(code **)*param_1)(param_1[1],0,1);
        bVar1 = iVar3 == 0x30;
      }
      goto LAB_005d80f4;
    }
    iVar3 = -1;
    param_1[4] = param_1[4] + 1;
LAB_005d8164:
    if (cVar9 != '\0') {
LAB_005d80d4:
      bVar2 = true;
      bVar1 = iVar3 == 0x30;
      goto LAB_005d80dc;
    }
    bVar2 = true;
    cVar9 = '\b';
    bVar1 = iVar3 == 0x30;
LAB_005d8178:
    uVar10 = 8;
LAB_005d7e30:
    if (!bVar1) goto LAB_005d80f8;
LAB_005d7e34:
    do {
      iVar3 = param_1[5];
      param_1[5] = iVar3 + -1;
      if (iVar3 + -1 < 0) {
        iVar3 = -1;
        bVar2 = true;
        param_1[4] = param_1[4] + 1;
        goto LAB_005d7ea4;
      }
      param_1[4] = param_1[4] + 1;
      iVar3 = (**(code **)*param_1)(param_1[1],0,1);
    } while (iVar3 == 0x30);
    bVar2 = true;
LAB_005d7ea4:
    *puVar8 = 0x30;
    puVar8 = puVar8 + 1;
  }
  else {
    iVar3 = param_1[6] + -1;
    param_1[5] = iVar3;
    pcVar4 = PTR_s_diouxXp_0071c520;
    if (-1 < iVar3) goto LAB_005d7d9c;
    puVar8 = &local_70;
    param_1[4] = param_1[4] + 1;
    cVar9 = *(char *)param_1[3];
LAB_005d8308:
    uVar7 = ZEXT48(pcVar4);
    iVar3 = -1;
    pcVar4 = strchr(pcVar4,(int)cVar9);
    bVar1 = false;
    cVar9 = pcVar4[8];
joined_r0x005d7e2c:
    bVar2 = false;
    uVar10 = 10;
    if (cVar9 == '\0') goto LAB_005d7e30;
LAB_005d80dc:
    uVar10 = 10;
    if (cVar9 == '\n') goto LAB_005d7e30;
    if (cVar9 == '\b') goto LAB_005d8178;
LAB_005d80f4:
    uVar10 = 0x16;
    if (bVar1) goto LAB_005d7e34;
LAB_005d80f8:
    if (bVar2) goto LAB_005d7ea4;
  }
  while (iVar3 != -1) {
    iVar5 = FUN_005c5984(uVar7 + 0x10,iVar3,uVar10);
    if (iVar5 == 0) {
      param_1[4] = param_1[4] + -1;
      (**(code **)*param_1)(param_1[1],iVar3,0);
      goto LAB_005d7f74;
    }
    if (puVar8 < auStack_51) {
      *puVar8 = (char)iVar3;
      puVar8 = puVar8 + 1;
    }
    iVar3 = param_1[5];
    param_1[5] = iVar3 + -1;
    if (iVar3 + -1 < 0) {
      bVar2 = true;
      iVar5 = param_1[4] + 1;
      param_1[4] = iVar5;
      goto LAB_005d7f6c;
    }
    bVar2 = true;
    param_1[4] = param_1[4] + 1;
    iVar3 = (**(code **)*param_1)(param_1[1],0,1);
  }
  iVar5 = param_1[4];
LAB_005d7f6c:
  iVar3 = -1;
  param_1[4] = iVar5 + -1;
LAB_005d7f74:
  if (!bVar2) {
    if (puVar8 == &local_70) {
      uVar6 = 0xffffffff;
      if (iVar3 != -1) {
        uVar6 = 0;
      }
    }
    else {
      uVar6 = 0;
    }
    return uVar6;
  }
  *puVar8 = 0;
  if (*(char *)(param_1 + 7) != '\0') {
    return 1;
  }
  if ((*(char *)param_1[3] == 'd') || (*(char *)param_1[3] == 'i')) {
    uVar6 = FUN_005da74c(&local_70,0,cVar9);
    cVar9 = *(char *)((int)param_1 + 0x1d);
    *(undefined1 *)((int)param_1 + 0x1e) = 1;
  }
  else {
    uVar6 = FUN_005daaa8(&local_70,0,cVar9);
    *(undefined1 *)((int)param_1 + 0x1e) = 1;
    if (*(char *)param_1[3] == 'p') goto LAB_005d8288;
    cVar9 = *(char *)((int)param_1 + 0x1d);
  }
  if ((byte)(cVar9 + 0x9eU) < 0x19) {
                    /* WARNING: Could not recover jumptable at 0x005d805c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar6 = (*(code *)(PTR_DAT_0071c524 +
                      *(int *)(PTR_DAT_0071c524 + (uint)(byte)(cVar9 + 0x9e) * 4)))();
    return uVar6;
  }
LAB_005d8288:
  iVar3 = param_1[2];
  param_1[2] = iVar3 + 8;
  **(undefined4 **)(iVar3 + 4) = uVar6;
  return 1;
}


