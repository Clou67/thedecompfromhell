// sdk/libc/memmove.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x5c6094-0x5c7368
#include "sdk/libc/memmove.h"

// SDK libc.a(memmove.o): memmove  [fuzzy 1.000 match]
// 0x05c6094 (0x12d4 bytes)
/* WARNING: Type propagation algorithm not settling */

undefined8 * FUN_005c6094(undefined8 *param_1,undefined8 *param_2,uint param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  int iVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  longlong lVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  uint uVar19;
  undefined4 *puVar20;
  undefined2 *puVar21;
  undefined2 *puVar22;
  undefined4 *puVar23;
  undefined8 *puVar24;
  undefined1 *puVar25;
  undefined4 *puVar26;
  undefined2 *puVar27;
  int iVar28;
  undefined8 *puVar29;
  undefined1 *puVar30;
  undefined4 *puVar31;
  undefined2 *puVar32;
  undefined8 *puVar33;
  undefined8 *puVar34;
  undefined8 *puVar35;
  undefined8 *puVar36;
  undefined8 *puVar37;
  
  if (param_1 == param_2) {
    return param_1;
  }
  if ((param_2 < param_1) && (puVar11 = (undefined8 *)((int)param_2 + param_3), param_1 < puVar11))
  {
    puVar34 = (undefined8 *)((int)param_1 + param_3);
    if (param_3 < 0x21) {
LAB_005c61c0:
      if (param_3 < 4) goto joined_r0x005c6248;
    }
    else {
      uVar19 = (uint)puVar34 & 7;
      uVar10 = (uint)puVar11 & 7;
      iVar28 = uVar19 - uVar10;
      if (uVar19 <= uVar10) {
        iVar28 = uVar10 - uVar19;
      }
      uVar19 = uVar19 | uVar10;
      if (uVar19 == 0) {
        lVar16 = (((ulonglong)(param_3 - 0x20) << 0x20) >> 0x25) + 1;
        do {
          uVar10 = param_3;
          puVar35 = puVar11 + -1;
          puVar33 = puVar11 + -2;
          puVar37 = puVar11 + -3;
          puVar11 = puVar11 + -4;
          puVar36 = puVar34 + -1;
          puVar29 = puVar34 + -2;
          puVar24 = puVar34 + -3;
          puVar34 = puVar34 + -4;
          uVar12 = *puVar33;
          uVar15 = *puVar37;
          uVar14 = *puVar11;
          param_3 = uVar10 - 0x20;
          *puVar36 = *puVar35;
          *puVar29 = uVar12;
          *puVar24 = uVar15;
          *puVar34 = uVar14;
          lVar16 = lVar16 + -1;
        } while (lVar16 != 0);
        if (7 < param_3) {
          lVar16 = (((ulonglong)(uVar10 - 0x28) << 0x20) >> 0x23) + 1;
          do {
            puVar11 = puVar11 + -1;
            puVar34 = puVar34 + -1;
            param_3 = param_3 - 8;
            *puVar34 = *puVar11;
            lVar16 = lVar16 + -1;
          } while (lVar16 != 0);
        }
        goto LAB_005c61c0;
      }
      if ((uVar19 & 3) == 0) {
        lVar16 = (((ulonglong)(param_3 - 0x10) << 0x20) >> 0x24) + 1;
        if (iVar28 == 0) {
          puVar11 = (undefined8 *)((int)puVar11 + -4);
          puVar34 = (undefined8 *)((int)puVar34 + -4);
          uVar10 = param_3 - 4;
          *(undefined4 *)puVar34 = *(undefined4 *)puVar11;
          if (0x1f < uVar10) {
            lVar16 = (((ulonglong)(param_3 - 0x24) << 0x20) >> 0x25) + 1;
            do {
              puVar35 = puVar11 + -1;
              puVar33 = puVar11 + -2;
              puVar37 = puVar11 + -3;
              puVar11 = puVar11 + -4;
              puVar36 = puVar34 + -1;
              puVar29 = puVar34 + -2;
              puVar24 = puVar34 + -3;
              puVar34 = puVar34 + -4;
              uVar12 = *puVar33;
              uVar15 = *puVar37;
              uVar14 = *puVar11;
              uVar10 = uVar10 - 0x20;
              *puVar36 = *puVar35;
              *puVar29 = uVar12;
              *puVar24 = uVar15;
              *puVar34 = uVar14;
              lVar16 = lVar16 + -1;
            } while (lVar16 != 0);
          }
          param_3 = uVar10;
          if (7 < param_3) {
            lVar16 = (((ulonglong)(param_3 - 8) << 0x20) >> 0x23) + 1;
            do {
              puVar11 = puVar11 + -1;
              puVar34 = puVar34 + -1;
              param_3 = param_3 - 8;
              *puVar34 = *puVar11;
              lVar16 = lVar16 + -1;
            } while (lVar16 != 0);
          }
        }
        else {
          do {
            uVar10 = param_3;
            puVar31 = (undefined4 *)((int)puVar11 + -4);
            puVar37 = puVar11 + -1;
            puVar23 = (undefined4 *)((int)puVar11 + -0xc);
            puVar11 = puVar11 + -2;
            puVar20 = (undefined4 *)((int)puVar34 + -4);
            puVar33 = puVar34 + -1;
            puVar26 = (undefined4 *)((int)puVar34 + -0xc);
            puVar34 = puVar34 + -2;
            uVar7 = *(undefined4 *)puVar37;
            uVar8 = *puVar23;
            uVar9 = *(undefined4 *)puVar11;
            param_3 = uVar10 - 0x10;
            *puVar20 = *puVar31;
            *(undefined4 *)puVar33 = uVar7;
            *puVar26 = uVar8;
            *(undefined4 *)puVar34 = uVar9;
            lVar16 = lVar16 + -1;
          } while (lVar16 != 0);
          if (3 < param_3) {
            lVar16 = (((ulonglong)(uVar10 - 0x14) << 0x20) >> 0x22) + 1;
            do {
              puVar11 = (undefined8 *)((int)puVar11 + -4);
              puVar34 = (undefined8 *)((int)puVar34 + -4);
              param_3 = param_3 - 4;
              *(undefined4 *)puVar34 = *(undefined4 *)puVar11;
              lVar16 = lVar16 + -1;
            } while (lVar16 != 0);
          }
        }
        goto LAB_005c61c0;
      }
      if ((uVar19 & 1) == 0) {
        if (iVar28 == 0) {
          puVar33 = (undefined8 *)((int)puVar11 + -2);
          puVar37 = (undefined8 *)((int)puVar34 + -2);
          *(undefined2 *)puVar37 = *(undefined2 *)puVar33;
          uVar10 = param_3 - 2;
          if (((uint)puVar37 & 7) != 0) {
            puVar33 = (undefined8 *)((int)puVar11 + -6);
            puVar37 = (undefined8 *)((int)puVar34 + -6);
            *(undefined4 *)puVar37 = *(undefined4 *)puVar33;
            uVar10 = param_3 - 6;
          }
          param_3 = uVar10;
          puVar11 = puVar33;
          puVar34 = puVar37;
          if (0x1f < param_3) {
            lVar16 = (((ulonglong)(param_3 - 0x20) << 0x20) >> 0x25) + 1;
            do {
              puVar35 = puVar33 + -1;
              puVar34 = puVar33 + -2;
              puVar11 = puVar33 + -3;
              puVar33 = puVar33 + -4;
              puVar36 = puVar37 + -1;
              puVar29 = puVar37 + -2;
              puVar24 = puVar37 + -3;
              puVar37 = puVar37 + -4;
              uVar12 = *puVar34;
              uVar15 = *puVar11;
              uVar14 = *puVar33;
              param_3 = param_3 - 0x20;
              *puVar36 = *puVar35;
              *puVar29 = uVar12;
              *puVar24 = uVar15;
              *puVar37 = uVar14;
              lVar16 = lVar16 + -1;
              puVar11 = puVar33;
              puVar34 = puVar37;
            } while (lVar16 != 0);
          }
          if (7 < param_3) {
            lVar16 = (((ulonglong)(param_3 - 8) << 0x20) >> 0x23) + 1;
            do {
              puVar11 = puVar11 + -1;
              puVar34 = puVar34 + -1;
              param_3 = param_3 - 8;
              *puVar34 = *puVar11;
              lVar16 = lVar16 + -1;
            } while (lVar16 != 0);
          }
        }
        else {
          lVar16 = (((ulonglong)(param_3 - 8) << 0x20) >> 0x23) + 1;
          if (iVar28 == 4) {
            puVar11 = (undefined8 *)((int)puVar11 + -2);
            puVar34 = (undefined8 *)((int)puVar34 + -2);
            uVar10 = param_3 - 2;
            *(undefined2 *)puVar34 = *(undefined2 *)puVar11;
            if (0xf < uVar10) {
              lVar16 = (((ulonglong)(param_3 - 0x12) << 0x20) >> 0x24) + 1;
              do {
                puVar31 = (undefined4 *)((int)puVar11 + -4);
                puVar37 = puVar11 + -1;
                puVar23 = (undefined4 *)((int)puVar11 + -0xc);
                puVar11 = puVar11 + -2;
                puVar20 = (undefined4 *)((int)puVar34 + -4);
                puVar33 = puVar34 + -1;
                puVar26 = (undefined4 *)((int)puVar34 + -0xc);
                puVar34 = puVar34 + -2;
                uVar7 = *(undefined4 *)puVar37;
                uVar8 = *puVar23;
                uVar9 = *(undefined4 *)puVar11;
                uVar10 = uVar10 - 0x10;
                *puVar20 = *puVar31;
                *(undefined4 *)puVar33 = uVar7;
                *puVar26 = uVar8;
                *(undefined4 *)puVar34 = uVar9;
                lVar16 = lVar16 + -1;
              } while (lVar16 != 0);
            }
            param_3 = uVar10;
            if (3 < param_3) {
              lVar16 = (((ulonglong)(param_3 - 4) << 0x20) >> 0x22) + 1;
              do {
                puVar11 = (undefined8 *)((int)puVar11 + -4);
                puVar34 = (undefined8 *)((int)puVar34 + -4);
                param_3 = param_3 - 4;
                *(undefined4 *)puVar34 = *(undefined4 *)puVar11;
                lVar16 = lVar16 + -1;
              } while (lVar16 != 0);
            }
          }
          else {
            do {
              uVar10 = param_3;
              puVar32 = (undefined2 *)((int)puVar11 + -2);
              puVar23 = (undefined4 *)((int)puVar11 + -4);
              puVar21 = (undefined2 *)((int)puVar11 + -6);
              puVar11 = puVar11 + -1;
              puVar22 = (undefined2 *)((int)puVar34 + -2);
              puVar31 = (undefined4 *)((int)puVar34 + -4);
              puVar27 = (undefined2 *)((int)puVar34 + -6);
              puVar34 = puVar34 + -1;
              uVar4 = *(undefined2 *)puVar23;
              uVar5 = *puVar21;
              uVar6 = *(undefined2 *)puVar11;
              param_3 = uVar10 - 8;
              *puVar22 = *puVar32;
              *(undefined2 *)puVar31 = uVar4;
              *puVar27 = uVar5;
              *(undefined2 *)puVar34 = uVar6;
              lVar16 = lVar16 + -1;
            } while (lVar16 != 0);
            if (1 < param_3) {
              lVar16 = (((ulonglong)(uVar10 - 10) << 0x20) >> 0x21) + 1;
              do {
                puVar11 = (undefined8 *)((int)puVar11 + -2);
                puVar34 = (undefined8 *)((int)puVar34 + -2);
                param_3 = param_3 - 2;
                *(undefined2 *)puVar34 = *(undefined2 *)puVar11;
                lVar16 = lVar16 + -1;
              } while (lVar16 != 0);
            }
          }
        }
        goto LAB_005c61c0;
      }
      if (iVar28 == 0) {
        puVar37 = (undefined8 *)((int)puVar11 + -1);
        puVar33 = (undefined8 *)((int)puVar34 + -1);
        uVar10 = (uint)puVar33 & 7;
        uVar19 = param_3 - 1;
        *(undefined1 *)puVar33 = *(undefined1 *)puVar37;
        if (uVar10 == 4) {
LAB_005c7110:
          uVar19 = uVar19 - 4;
          *(undefined4 *)((int)puVar33 + -4) = *(undefined4 *)((int)puVar37 + -4);
          puVar37 = (undefined8 *)((int)puVar37 + -4);
          puVar33 = (undefined8 *)((int)puVar33 + -4);
        }
        else if (uVar10 == 6) {
          uVar19 = param_3 - 3;
          *(undefined2 *)((int)puVar34 + -3) = *(undefined2 *)((int)puVar11 + -3);
          puVar37 = (undefined8 *)((int)puVar11 + -3);
          puVar33 = (undefined8 *)((int)puVar34 + -3);
        }
        else if (uVar10 == 2) {
          puVar37 = (undefined8 *)((int)puVar11 + -3);
          puVar33 = (undefined8 *)((int)puVar34 + -3);
          uVar19 = param_3 - 3;
          *(undefined2 *)puVar33 = *(undefined2 *)puVar37;
          goto LAB_005c7110;
        }
        puVar34 = puVar33;
        puVar11 = puVar37;
        param_3 = uVar19;
        if (0x1f < uVar19) {
          lVar16 = (((ulonglong)(uVar19 - 0x20) << 0x20) >> 0x25) + 1;
          do {
            puVar35 = puVar11 + -1;
            puVar33 = puVar11 + -2;
            puVar37 = puVar11 + -3;
            puVar11 = puVar11 + -4;
            puVar36 = puVar34 + -1;
            puVar29 = puVar34 + -2;
            puVar24 = puVar34 + -3;
            puVar34 = puVar34 + -4;
            uVar12 = *puVar33;
            uVar15 = *puVar37;
            uVar14 = *puVar11;
            param_3 = param_3 - 0x20;
            *puVar36 = *puVar35;
            *puVar29 = uVar12;
            *puVar24 = uVar15;
            *puVar34 = uVar14;
            lVar16 = lVar16 + -1;
          } while (lVar16 != 0);
        }
        if (7 < param_3) {
          lVar16 = (((ulonglong)(param_3 - 8) << 0x20) >> 0x23) + 1;
          do {
            puVar11 = puVar11 + -1;
            puVar34 = puVar34 + -1;
            param_3 = param_3 - 8;
            *puVar34 = *puVar11;
            lVar16 = lVar16 + -1;
          } while (lVar16 != 0);
        }
        goto LAB_005c61c0;
      }
      if (iVar28 == 4) {
        puVar33 = (undefined8 *)((int)puVar34 + -1);
        *(undefined1 *)puVar33 = *(undefined1 *)((int)puVar11 + -1);
        puVar37 = (undefined8 *)((int)puVar11 + -1);
        uVar10 = param_3 - 1;
        if (((uint)puVar33 & 3) != 0) {
          *(undefined2 *)((int)puVar34 + -3) = *(undefined2 *)((int)puVar11 + -3);
          puVar37 = (undefined8 *)((int)puVar11 + -3);
          uVar10 = param_3 - 3;
          puVar33 = (undefined8 *)((int)puVar34 + -3);
        }
        puVar34 = puVar33;
        param_3 = uVar10;
        puVar11 = puVar37;
        if (0xf < param_3) {
          lVar16 = (((ulonglong)(param_3 - 0x10) << 0x20) >> 0x24) + 1;
          do {
            puVar31 = (undefined4 *)((int)puVar11 + -4);
            puVar37 = puVar11 + -1;
            puVar23 = (undefined4 *)((int)puVar11 + -0xc);
            puVar11 = puVar11 + -2;
            puVar20 = (undefined4 *)((int)puVar34 + -4);
            puVar33 = puVar34 + -1;
            puVar26 = (undefined4 *)((int)puVar34 + -0xc);
            puVar34 = puVar34 + -2;
            uVar7 = *(undefined4 *)puVar37;
            uVar8 = *puVar23;
            uVar9 = *(undefined4 *)puVar11;
            param_3 = param_3 - 0x10;
            *puVar20 = *puVar31;
            *(undefined4 *)puVar33 = uVar7;
            *puVar26 = uVar8;
            *(undefined4 *)puVar34 = uVar9;
            lVar16 = lVar16 + -1;
          } while (lVar16 != 0);
        }
        if (3 < param_3) {
          lVar16 = (((ulonglong)(param_3 - 4) << 0x20) >> 0x22) + 1;
          do {
            puVar11 = (undefined8 *)((int)puVar11 + -4);
            puVar34 = (undefined8 *)((int)puVar34 + -4);
            param_3 = param_3 - 4;
            *(undefined4 *)puVar34 = *(undefined4 *)puVar11;
            lVar16 = lVar16 + -1;
          } while (lVar16 != 0);
        }
        goto LAB_005c61c0;
      }
      if (iVar28 == 2) {
        puVar11 = (undefined8 *)((int)puVar11 + -1);
        puVar34 = (undefined8 *)((int)puVar34 + -1);
        uVar10 = param_3 - 1;
        *(undefined1 *)puVar34 = *(undefined1 *)puVar11;
        if (7 < uVar10) {
          lVar16 = (((ulonglong)(param_3 - 9) << 0x20) >> 0x23) + 1;
          do {
            puVar32 = (undefined2 *)((int)puVar11 + -2);
            puVar23 = (undefined4 *)((int)puVar11 + -4);
            puVar21 = (undefined2 *)((int)puVar11 + -6);
            puVar11 = puVar11 + -1;
            puVar22 = (undefined2 *)((int)puVar34 + -2);
            puVar31 = (undefined4 *)((int)puVar34 + -4);
            puVar27 = (undefined2 *)((int)puVar34 + -6);
            puVar34 = puVar34 + -1;
            uVar4 = *(undefined2 *)puVar23;
            uVar5 = *puVar21;
            uVar6 = *(undefined2 *)puVar11;
            uVar10 = uVar10 - 8;
            *puVar22 = *puVar32;
            *(undefined2 *)puVar31 = uVar4;
            *puVar27 = uVar5;
            *(undefined2 *)puVar34 = uVar6;
            lVar16 = lVar16 + -1;
          } while (lVar16 != 0);
        }
        param_3 = uVar10;
        if (1 < param_3) {
          lVar16 = (((ulonglong)(param_3 - 2) << 0x20) >> 0x21) + 1;
          do {
            puVar11 = (undefined8 *)((int)puVar11 + -2);
            puVar34 = (undefined8 *)((int)puVar34 + -2);
            param_3 = param_3 - 2;
            *(undefined2 *)puVar34 = *(undefined2 *)puVar11;
            lVar16 = lVar16 + -1;
          } while (lVar16 != 0);
        }
        goto LAB_005c61c0;
      }
    }
    lVar16 = (((ulonglong)(param_3 - 4) << 0x20) >> 0x22) + 1;
    do {
      puVar30 = (undefined1 *)((int)puVar11 + -1);
      puVar21 = (undefined2 *)((int)puVar11 + -2);
      puVar18 = (undefined1 *)((int)puVar11 + -3);
      puVar11 = (undefined8 *)((int)puVar11 + -4);
      puVar17 = (undefined1 *)((int)puVar34 + -1);
      puVar32 = (undefined2 *)((int)puVar34 + -2);
      puVar25 = (undefined1 *)((int)puVar34 + -3);
      puVar34 = (undefined8 *)((int)puVar34 + -4);
      uVar1 = *(undefined1 *)puVar21;
      uVar2 = *puVar18;
      uVar3 = *(undefined1 *)puVar11;
      param_3 = param_3 - 4;
      *puVar17 = *puVar30;
      *(undefined1 *)puVar32 = uVar1;
      *puVar25 = uVar2;
      *(undefined1 *)puVar34 = uVar3;
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
joined_r0x005c6248:
    for (; param_3 != 0; param_3 = param_3 - 1) {
      puVar11 = (undefined8 *)((int)puVar11 + -1);
      puVar34 = (undefined8 *)((int)puVar34 + -1);
      *(undefined1 *)puVar34 = *(undefined1 *)puVar11;
    }
    return param_1;
  }
  puVar11 = param_1;
  if (param_3 < 0x21) {
LAB_005c6298:
    if (param_3 < 4) goto LAB_005c62fc;
  }
  else {
    uVar19 = (uint)param_1 & 7;
    uVar10 = (uint)param_2 & 7;
    iVar28 = uVar19 - uVar10;
    if (uVar10 < uVar19) {
      if (uVar19 != 0 || uVar10 != 0) goto LAB_005c6364;
LAB_005c644c:
      iVar28 = 0;
      lVar16 = (((ulonglong)(param_3 - 0x20) << 0x20) >> 0x25) + 1;
      do {
        uVar10 = param_3;
        puVar11 = (undefined8 *)(iVar28 + (int)param_2);
        puVar34 = (undefined8 *)(iVar28 + (int)param_1);
        param_3 = uVar10 - 0x20;
        iVar28 = iVar28 + 0x20;
        uVar15 = puVar11[1];
        uVar14 = puVar11[2];
        uVar12 = puVar11[3];
        *puVar34 = *puVar11;
        puVar34[3] = uVar12;
        puVar34[1] = uVar15;
        puVar34[2] = uVar14;
        lVar16 = lVar16 + -1;
      } while (lVar16 != 0);
      param_2 = (undefined8 *)(iVar28 + (int)param_2);
      puVar11 = (undefined8 *)((int)param_1 + iVar28);
      if (param_3 < 8) goto LAB_005c6298;
      iVar28 = 0;
      lVar16 = (((ulonglong)(uVar10 - 0x28) << 0x20) >> 0x23) + 1;
      do {
        puVar34 = (undefined8 *)(iVar28 + (int)param_2);
        puVar37 = (undefined8 *)(iVar28 + (int)puVar11);
        param_3 = param_3 - 8;
        iVar28 = iVar28 + 8;
        *puVar37 = *puVar34;
        lVar16 = lVar16 + -1;
      } while (lVar16 != 0);
LAB_005c64f0:
      param_2 = (undefined8 *)((int)param_2 + iVar28);
      puVar11 = (undefined8 *)((int)puVar11 + iVar28);
      goto LAB_005c6298;
    }
    iVar28 = uVar10 - uVar19;
    if (uVar19 == 0 && uVar10 == 0) goto LAB_005c644c;
LAB_005c6364:
    if (((uVar19 | uVar10) & 3) == 0) {
      lVar16 = (((ulonglong)(param_3 - 0x10) << 0x20) >> 0x24) + 1;
      iVar13 = 0;
      if (iVar28 == 0) {
        uVar10 = param_3 - 4;
        uVar7 = *(undefined4 *)param_2;
        param_2 = (undefined8 *)((int)param_2 + 4);
        *(undefined4 *)param_1 = uVar7;
        puVar11 = (undefined8 *)((int)param_1 + 4);
        if (0x1f < uVar10) {
          lVar16 = (((ulonglong)(param_3 - 0x24) << 0x20) >> 0x25) + 1;
          puVar34 = param_2;
          puVar37 = puVar11;
          do {
            param_2 = puVar34 + 4;
            puVar11 = puVar37 + 4;
            uVar10 = uVar10 - 0x20;
            uVar15 = *puVar34;
            uVar14 = puVar34[1];
            uVar12 = puVar34[2];
            puVar37[3] = puVar34[3];
            *puVar37 = uVar15;
            puVar37[1] = uVar14;
            puVar37[2] = uVar12;
            lVar16 = lVar16 + -1;
            puVar34 = param_2;
            puVar37 = puVar11;
          } while (lVar16 != 0);
        }
        param_3 = uVar10;
        if (7 < param_3) {
          iVar28 = 0;
          lVar16 = (((ulonglong)(param_3 - 8) << 0x20) >> 0x23) + 1;
          do {
            puVar34 = (undefined8 *)(iVar28 + (int)param_2);
            puVar37 = (undefined8 *)(iVar28 + (int)puVar11);
            param_3 = param_3 - 8;
            iVar28 = iVar28 + 8;
            *puVar37 = *puVar34;
            lVar16 = lVar16 + -1;
          } while (lVar16 != 0);
LAB_005c6440:
          param_2 = (undefined8 *)((int)param_2 + iVar28);
          puVar11 = (undefined8 *)((int)puVar11 + iVar28);
        }
      }
      else {
        do {
          uVar10 = param_3;
          puVar23 = (undefined4 *)((int)param_2 + iVar13);
          puVar31 = (undefined4 *)(iVar13 + (int)param_1);
          param_3 = uVar10 - 0x10;
          iVar13 = iVar13 + 0x10;
          uVar7 = puVar23[1];
          uVar8 = puVar23[2];
          uVar9 = puVar23[3];
          *puVar31 = *puVar23;
          puVar31[3] = uVar9;
          puVar31[1] = uVar7;
          puVar31[2] = uVar8;
          lVar16 = lVar16 + -1;
        } while (lVar16 != 0);
        param_2 = (undefined8 *)(iVar13 + (int)param_2);
        puVar11 = (undefined8 *)((int)param_1 + iVar13);
        if (3 < param_3) {
          iVar28 = 0;
          lVar16 = (((ulonglong)(uVar10 - 0x14) << 0x20) >> 0x22) + 1;
          do {
            puVar23 = (undefined4 *)(iVar28 + (int)param_2);
            puVar31 = (undefined4 *)(iVar28 + (int)puVar11);
            param_3 = param_3 - 4;
            iVar28 = iVar28 + 4;
            *puVar31 = *puVar23;
            lVar16 = lVar16 + -1;
          } while (lVar16 != 0);
          goto LAB_005c64f0;
        }
      }
      goto LAB_005c6298;
    }
    if (((uVar19 | uVar10) & 1) == 0) {
      if (iVar28 == 0) {
        puVar11 = (undefined8 *)((int)param_1 + 2);
        puVar34 = (undefined8 *)((int)param_2 + 2);
        *(undefined2 *)param_1 = *(undefined2 *)param_2;
        uVar10 = param_3 - 2;
        if (((uint)puVar11 & 7) != 0) {
          uVar7 = *(undefined4 *)puVar34;
          puVar34 = (undefined8 *)((int)param_2 + 6);
          *(undefined4 *)puVar11 = uVar7;
          puVar11 = (undefined8 *)((int)param_1 + 6);
          uVar10 = param_3 - 6;
        }
        param_3 = uVar10;
        param_2 = puVar34;
        if (0x1f < param_3) {
          iVar28 = 0;
          lVar16 = (((ulonglong)(param_3 - 0x20) << 0x20) >> 0x25) + 1;
          do {
            puVar37 = (undefined8 *)(iVar28 + (int)puVar34);
            puVar33 = (undefined8 *)(iVar28 + (int)puVar11);
            param_3 = param_3 - 0x20;
            iVar28 = iVar28 + 0x20;
            uVar15 = puVar37[1];
            uVar14 = puVar37[2];
            uVar12 = puVar37[3];
            *puVar33 = *puVar37;
            puVar33[3] = uVar12;
            puVar33[1] = uVar15;
            puVar33[2] = uVar14;
            lVar16 = lVar16 + -1;
          } while (lVar16 != 0);
          puVar11 = (undefined8 *)((int)puVar11 + iVar28);
          param_2 = (undefined8 *)((int)puVar34 + iVar28);
        }
        if (7 < param_3) {
          iVar28 = 0;
          lVar16 = (((ulonglong)(param_3 - 8) << 0x20) >> 0x23) + 1;
          do {
            puVar34 = (undefined8 *)(iVar28 + (int)param_2);
            puVar37 = (undefined8 *)(iVar28 + (int)puVar11);
            param_3 = param_3 - 8;
            iVar28 = iVar28 + 8;
            *puVar37 = *puVar34;
            lVar16 = lVar16 + -1;
          } while (lVar16 != 0);
          goto LAB_005c64f0;
        }
      }
      else {
        lVar16 = (((ulonglong)(param_3 - 8) << 0x20) >> 0x23) + 1;
        iVar13 = 0;
        if (iVar28 == 4) {
          uVar10 = param_3 - 2;
          uVar4 = *(undefined2 *)param_2;
          param_2 = (undefined8 *)((int)param_2 + 2);
          *(undefined2 *)param_1 = uVar4;
          puVar11 = (undefined8 *)((int)param_1 + 2);
          if (0xf < uVar10) {
            lVar16 = (((ulonglong)(param_3 - 0x12) << 0x20) >> 0x24) + 1;
            puVar34 = puVar11;
            puVar37 = param_2;
            do {
              param_2 = puVar37 + 2;
              puVar11 = puVar34 + 2;
              uVar10 = uVar10 - 0x10;
              uVar7 = *(undefined4 *)puVar37;
              uVar8 = *(undefined4 *)((int)puVar37 + 4);
              uVar9 = *(undefined4 *)(puVar37 + 1);
              *(undefined4 *)((int)puVar34 + 0xc) = *(undefined4 *)((int)puVar37 + 0xc);
              *(undefined4 *)puVar34 = uVar7;
              *(undefined4 *)((int)puVar34 + 4) = uVar8;
              *(undefined4 *)(puVar34 + 1) = uVar9;
              lVar16 = lVar16 + -1;
              puVar34 = puVar11;
              puVar37 = param_2;
            } while (lVar16 != 0);
          }
          param_3 = uVar10;
          if (3 < param_3) {
            iVar28 = 0;
            lVar16 = (((ulonglong)(param_3 - 4) << 0x20) >> 0x22) + 1;
            do {
              puVar23 = (undefined4 *)(iVar28 + (int)param_2);
              puVar31 = (undefined4 *)(iVar28 + (int)puVar11);
              param_3 = param_3 - 4;
              iVar28 = iVar28 + 4;
              *puVar31 = *puVar23;
              lVar16 = lVar16 + -1;
            } while (lVar16 != 0);
            goto LAB_005c6440;
          }
        }
        else {
          do {
            uVar10 = param_3;
            puVar21 = (undefined2 *)(iVar13 + (int)param_2);
            puVar32 = (undefined2 *)(iVar13 + (int)param_1);
            param_3 = uVar10 - 8;
            iVar13 = iVar13 + 8;
            uVar4 = puVar21[1];
            uVar5 = puVar21[2];
            uVar6 = puVar21[3];
            *puVar32 = *puVar21;
            puVar32[3] = uVar6;
            puVar32[1] = uVar4;
            puVar32[2] = uVar5;
            lVar16 = lVar16 + -1;
          } while (lVar16 != 0);
          param_2 = (undefined8 *)((int)param_2 + iVar13);
          puVar11 = (undefined8 *)(iVar13 + (int)param_1);
          if (1 < param_3) {
            iVar28 = 0;
            lVar16 = (((ulonglong)(uVar10 - 10) << 0x20) >> 0x21) + 1;
            do {
              puVar21 = (undefined2 *)(iVar28 + (int)param_2);
              puVar32 = (undefined2 *)(iVar28 + (int)puVar11);
              param_3 = param_3 - 2;
              iVar28 = iVar28 + 2;
              *puVar32 = *puVar21;
              lVar16 = lVar16 + -1;
            } while (lVar16 != 0);
            goto LAB_005c64f0;
          }
        }
      }
      goto LAB_005c6298;
    }
    if (iVar28 == 0) {
      puVar33 = (undefined8 *)((int)param_1 + 1);
      uVar10 = (uint)puVar33 & 7;
      puVar35 = (undefined8 *)((int)param_2 + 1);
      uVar19 = param_3 - 1;
      *(undefined1 *)param_1 = *(undefined1 *)param_2;
      puVar34 = puVar35;
      puVar37 = puVar33;
      if (uVar10 == 4) {
LAB_005c6d3c:
        uVar19 = uVar19 - 4;
        puVar11 = (undefined8 *)((int)puVar37 + 4);
        puVar36 = (undefined8 *)((int)puVar34 + 4);
        *(undefined4 *)puVar37 = *(undefined4 *)puVar34;
      }
      else if (uVar10 == 6) {
        uVar19 = param_3 - 3;
        puVar11 = (undefined8 *)((int)param_1 + 3);
        puVar36 = (undefined8 *)((int)param_2 + 3);
        *(undefined2 *)puVar33 = *(undefined2 *)puVar35;
      }
      else {
        puVar36 = puVar35;
        puVar11 = puVar33;
        if (uVar10 == 2) {
          uVar19 = param_3 - 3;
          puVar37 = (undefined8 *)((int)param_1 + 3);
          puVar34 = (undefined8 *)((int)param_2 + 3);
          *(undefined2 *)puVar33 = *(undefined2 *)puVar35;
          goto LAB_005c6d3c;
        }
      }
      param_2 = puVar36;
      param_3 = uVar19;
      if (0x1f < uVar19) {
        iVar28 = 0;
        lVar16 = (((ulonglong)(uVar19 - 0x20) << 0x20) >> 0x25) + 1;
        do {
          puVar34 = (undefined8 *)(iVar28 + (int)puVar36);
          puVar37 = (undefined8 *)(iVar28 + (int)puVar11);
          param_3 = param_3 - 0x20;
          iVar28 = iVar28 + 0x20;
          uVar15 = puVar34[1];
          uVar14 = puVar34[2];
          uVar12 = puVar34[3];
          *puVar37 = *puVar34;
          puVar37[3] = uVar12;
          puVar37[1] = uVar15;
          puVar37[2] = uVar14;
          lVar16 = lVar16 + -1;
        } while (lVar16 != 0);
        puVar11 = (undefined8 *)((int)puVar11 + iVar28);
        param_2 = (undefined8 *)((int)puVar36 + iVar28);
      }
      if (7 < param_3) {
        iVar28 = 0;
        lVar16 = (((ulonglong)(param_3 - 8) << 0x20) >> 0x23) + 1;
        do {
          puVar34 = (undefined8 *)(iVar28 + (int)param_2);
          puVar37 = (undefined8 *)(iVar28 + (int)puVar11);
          param_3 = param_3 - 8;
          iVar28 = iVar28 + 8;
          *puVar37 = *puVar34;
          lVar16 = lVar16 + -1;
        } while (lVar16 != 0);
        goto LAB_005c64f0;
      }
      goto LAB_005c6298;
    }
    if (iVar28 == 4) {
      puVar37 = (undefined8 *)((int)param_1 + 1);
      *(undefined1 *)param_1 = *(undefined1 *)param_2;
      puVar34 = (undefined8 *)((int)param_2 + 1);
      puVar11 = puVar37;
      uVar10 = param_3 - 1;
      if (((uint)puVar37 & 3) != 0) {
        puVar11 = (undefined8 *)((int)param_1 + 3);
        puVar34 = (undefined8 *)((int)param_2 + 3);
        *(undefined2 *)puVar37 = *(undefined2 *)((int)param_2 + 1);
        uVar10 = param_3 - 3;
      }
      param_3 = uVar10;
      param_2 = puVar34;
      if (0xf < param_3) {
        iVar28 = 0;
        lVar16 = (((ulonglong)(param_3 - 0x10) << 0x20) >> 0x24) + 1;
        do {
          puVar23 = (undefined4 *)(iVar28 + (int)puVar34);
          puVar31 = (undefined4 *)(iVar28 + (int)puVar11);
          param_3 = param_3 - 0x10;
          iVar28 = iVar28 + 0x10;
          uVar7 = puVar23[1];
          uVar8 = puVar23[2];
          uVar9 = puVar23[3];
          *puVar31 = *puVar23;
          puVar31[3] = uVar9;
          puVar31[1] = uVar7;
          puVar31[2] = uVar8;
          lVar16 = lVar16 + -1;
        } while (lVar16 != 0);
        puVar11 = (undefined8 *)((int)puVar11 + iVar28);
        param_2 = (undefined8 *)((int)puVar34 + iVar28);
      }
      if (3 < param_3) {
        iVar28 = 0;
        lVar16 = (((ulonglong)(param_3 - 4) << 0x20) >> 0x22) + 1;
        do {
          puVar23 = (undefined4 *)(iVar28 + (int)param_2);
          puVar31 = (undefined4 *)(iVar28 + (int)puVar11);
          param_3 = param_3 - 4;
          iVar28 = iVar28 + 4;
          *puVar31 = *puVar23;
          lVar16 = lVar16 + -1;
        } while (lVar16 != 0);
        goto LAB_005c64f0;
      }
      goto LAB_005c6298;
    }
    if (iVar28 == 2) {
      uVar10 = param_3 - 1;
      puVar11 = (undefined8 *)((int)param_1 + 1);
      uVar1 = *(undefined1 *)param_2;
      param_2 = (undefined8 *)((int)param_2 + 1);
      *(undefined1 *)param_1 = uVar1;
      if (7 < uVar10) {
        lVar16 = (((ulonglong)(param_3 - 9) << 0x20) >> 0x23) + 1;
        puVar34 = param_2;
        puVar37 = puVar11;
        do {
          param_2 = puVar34 + 1;
          puVar11 = puVar37 + 1;
          uVar10 = uVar10 - 8;
          uVar4 = *(undefined2 *)puVar34;
          uVar5 = *(undefined2 *)((int)puVar34 + 2);
          uVar6 = *(undefined2 *)((int)puVar34 + 4);
          *(undefined2 *)((int)puVar37 + 6) = *(undefined2 *)((int)puVar34 + 6);
          *(undefined2 *)puVar37 = uVar4;
          *(undefined2 *)((int)puVar37 + 2) = uVar5;
          *(undefined2 *)((int)puVar37 + 4) = uVar6;
          lVar16 = lVar16 + -1;
          puVar34 = param_2;
          puVar37 = puVar11;
        } while (lVar16 != 0);
      }
      param_3 = uVar10;
      if (1 < param_3) {
        iVar28 = 0;
        lVar16 = (((ulonglong)(param_3 - 2) << 0x20) >> 0x21) + 1;
        do {
          puVar21 = (undefined2 *)(iVar28 + (int)param_2);
          puVar32 = (undefined2 *)(iVar28 + (int)puVar11);
          param_3 = param_3 - 2;
          iVar28 = iVar28 + 2;
          *puVar32 = *puVar21;
          lVar16 = lVar16 + -1;
        } while (lVar16 != 0);
        goto LAB_005c6440;
      }
      goto LAB_005c6298;
    }
  }
  iVar28 = 0;
  lVar16 = (((ulonglong)(param_3 - 4) << 0x20) >> 0x22) + 1;
  do {
    puVar18 = (undefined1 *)(iVar28 + (int)param_2);
    puVar30 = (undefined1 *)(iVar28 + (int)puVar11);
    param_3 = param_3 - 4;
    iVar28 = iVar28 + 4;
    uVar1 = puVar18[1];
    uVar2 = puVar18[2];
    uVar3 = puVar18[3];
    *puVar30 = *puVar18;
    puVar30[3] = uVar3;
    puVar30[1] = uVar1;
    puVar30[2] = uVar2;
    lVar16 = lVar16 + -1;
  } while (lVar16 != 0);
  puVar11 = (undefined8 *)((int)puVar11 + iVar28);
  param_2 = (undefined8 *)((int)param_2 + iVar28);
LAB_005c62fc:
  if (param_3 == 0) {
    return param_1;
  }
  do {
    *(undefined1 *)puVar11 = *(undefined1 *)param_2;
    param_3 = param_3 - 1;
    param_2 = (undefined8 *)((int)param_2 + 1);
    puVar11 = (undefined8 *)((int)puVar11 + 1);
  } while (param_3 != 0);
  return param_1;
}


