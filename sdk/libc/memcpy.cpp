// sdk/libc/memcpy.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x5c5ad0-0x5c6094
#include <string.h>
#include "sdk/libc/memcpy.h"

// SDK libc.a(memcpy.o): memcpy  [fuzzy 1.000 match]
// 0x05c5ad0 (0x5c4 bytes)
void * memcpy(void *__dest,void *__src,size_t __n)

{
  int iVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined4 *puVar4;
  undefined8 *puVar7;
  ulonglong uVar5;
  undefined1 *puVar8;
  ulonglong uVar6;
  undefined8 *puVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  longlong lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  longlong lVar20;
  longlong lVar21;
  ulonglong uVar22;
  
  uVar10 = (ulonglong)(int)__n;
  uVar17 = ZEXT48(__dest);
  uVar5 = ZEXT48(__src);
  if (uVar10 < 8) {
    uVar22 = uVar10;
    uVar16 = uVar17;
    if (uVar10 == 0) {
      return __dest;
    }
  }
  else {
    dataCacheBlockTouch(uVar5);
    if ((uVar5 & 0xfff) < (uVar17 & 0xfff)) {
      uVar5 = uVar5 + uVar10;
      uVar17 = uVar17 + uVar10;
      dataCacheBlockTouch(uVar5 - 0x80);
      for (uVar22 = uVar5 & 7; uVar22 != 0; uVar22 = uVar22 - 1) {
        uVar5 = uVar5 - 1;
        uVar10 = uVar10 - 1;
        uVar17 = uVar17 - 1;
        *(undefined1 *)uVar17 = *(undefined1 *)uVar5;
      }
      if (uVar10 == 0) {
        return __dest;
      }
      uVar22 = uVar17 & 3;
      if (uVar22 == 1) {
        if (0xf < uVar10) {
          uVar22 = uVar10 >> 4;
          uVar6 = uVar5;
          uVar16 = uVar17;
          do {
            uVar5 = uVar6 - 0x10;
            uVar17 = uVar16 - 0x10;
            uVar10 = uVar10 - 0x10;
            lVar21 = *(longlong *)uVar5;
            uVar11 = *(undefined8 *)((int)uVar6 + -8);
            iVar1 = (int)uVar16;
            *(char *)(iVar1 + -1) = (char)uVar11;
            dataCacheBlockTouch(uVar6 - 0x90);
            *(undefined1 *)uVar17 = (char)((ulonglong)lVar21 >> 0x38);
            *(uint *)(iVar1 + -9) = (uint)((ulonglong)uVar11 >> 0x28) | (uint)(lVar21 << 0x18);
            *(int *)(iVar1 + -5) = (int)((ulonglong)uVar11 >> 8);
            *(int *)(iVar1 + -0xd) = (int)((ulonglong)lVar21 >> 8);
            *(short *)(iVar1 + -0xf) = (short)((ulonglong)lVar21 >> 0x28);
            uVar22 = uVar22 - 1;
            uVar6 = uVar5;
            uVar16 = uVar17;
          } while (uVar22 != 0);
        }
      }
      else if (uVar22 == 2) {
        if (0xf < uVar10) {
          uVar22 = uVar10 >> 4;
          uVar6 = uVar5;
          uVar16 = uVar17;
          do {
            uVar5 = uVar6 - 0x10;
            uVar17 = uVar16 - 0x10;
            uVar10 = uVar10 - 0x10;
            uVar11 = *(undefined8 *)((int)uVar6 + -8);
            lVar21 = *(longlong *)uVar5;
            iVar1 = (int)uVar16;
            *(short *)(iVar1 + -2) = (short)uVar11;
            dataCacheBlockTouch(uVar6 - 0x90);
            *(undefined2 *)uVar17 = (short)((ulonglong)lVar21 >> 0x30);
            *(uint *)(iVar1 + -10) =
                 (uint)(ushort)((ulonglong)uVar11 >> 0x30) | (uint)(lVar21 << 0x10);
            *(int *)(iVar1 + -6) = (int)((ulonglong)uVar11 >> 0x10);
            *(int *)(iVar1 + -0xe) = (int)((ulonglong)lVar21 >> 0x10);
            uVar22 = uVar22 - 1;
            uVar6 = uVar5;
            uVar16 = uVar17;
          } while (uVar22 != 0);
        }
      }
      else if (uVar22 == 3) {
        if (0xf < uVar10) {
          uVar22 = uVar10 >> 4;
          uVar6 = uVar5;
          uVar16 = uVar17;
          do {
            uVar5 = uVar6 - 0x10;
            uVar17 = uVar16 - 0x10;
            uVar10 = uVar10 - 0x10;
            uVar11 = *(undefined8 *)((int)uVar6 + -8);
            lVar21 = *(longlong *)uVar5;
            iVar1 = (int)uVar16;
            *(char *)(iVar1 + -1) = (char)uVar11;
            dataCacheBlockTouch(uVar6 - 0x90);
            *(undefined1 *)uVar17 = (char)((ulonglong)lVar21 >> 0x38);
            *(uint *)(iVar1 + -0xb) = (uint)(byte)((ulonglong)uVar11 >> 0x38) | (uint)(lVar21 << 8);
            *(short *)(iVar1 + -3) = (short)((ulonglong)uVar11 >> 8);
            *(int *)(iVar1 + -7) = (int)((ulonglong)uVar11 >> 0x18);
            *(int *)(iVar1 + -0xf) = (int)((ulonglong)lVar21 >> 0x18);
            uVar22 = uVar22 - 1;
            uVar6 = uVar5;
            uVar16 = uVar17;
          } while (uVar22 != 0);
        }
      }
      else {
        uVar22 = uVar5;
        uVar6 = uVar10;
        uVar16 = uVar17;
        if ((uVar17 & 7) == 0) {
          while (uVar5 = uVar22, uVar10 = uVar6, uVar17 = uVar16, 0x2f < uVar6) {
            uVar5 = uVar22 - 0x30;
            uVar10 = uVar6 - 0x30;
            uVar17 = uVar16 - 0x30;
            iVar1 = (int)uVar22;
            uVar14 = *(undefined8 *)(iVar1 + -0x10);
            uVar19 = *(undefined8 *)(iVar1 + -0x18);
            uVar15 = *(undefined8 *)(iVar1 + -0x20);
            uVar12 = *(undefined8 *)(iVar1 + -0x28);
            uVar11 = *(undefined8 *)uVar5;
            iVar2 = (int)uVar16;
            *(undefined8 *)(iVar2 + -8) = *(undefined8 *)(iVar1 + -8);
            *(undefined8 *)(iVar2 + -0x10) = uVar14;
            *(undefined8 *)(iVar2 + -0x18) = uVar19;
            *(undefined8 *)(iVar2 + -0x20) = uVar15;
            *(undefined8 *)(iVar2 + -0x28) = uVar12;
            *(undefined8 *)uVar17 = uVar11;
            if (uVar10 < 0x30) break;
            uVar14 = *(undefined8 *)(iVar1 + -0x40);
            uVar19 = *(undefined8 *)(iVar1 + -0x48);
            uVar15 = *(undefined8 *)(iVar1 + -0x50);
            uVar12 = *(undefined8 *)(iVar1 + -0x58);
            uVar11 = *(undefined8 *)(uVar22 - 0x60);
            *(undefined8 *)(iVar2 + -0x38) = *(undefined8 *)(iVar1 + -0x38);
            *(undefined8 *)(iVar2 + -0x40) = uVar14;
            *(undefined8 *)(iVar2 + -0x48) = uVar19;
            *(undefined8 *)(iVar2 + -0x50) = uVar15;
            *(undefined8 *)(iVar2 + -0x58) = uVar12;
            *(undefined8 *)(uVar16 - 0x60) = uVar11;
            dataCacheBlockTouch(uVar22 - 0x160);
            uVar22 = uVar22 - 0x60;
            uVar6 = uVar6 - 0x60;
            uVar16 = uVar16 - 0x60;
          }
          if (7 < uVar10) {
            uVar22 = uVar10 >> 3;
            do {
              uVar5 = uVar5 - 8;
              uVar10 = uVar10 - 8;
              uVar17 = uVar17 - 8;
              *(undefined8 *)uVar17 = *(undefined8 *)uVar5;
              uVar22 = uVar22 - 1;
            } while (uVar22 != 0);
          }
        }
        else {
          while (0x17 < uVar10) {
            uVar10 = uVar10 - 0x18;
            uVar14 = *(undefined8 *)((int)uVar5 + -8);
            uVar12 = *(undefined8 *)((int)uVar5 + -0x10);
            uVar11 = *(undefined8 *)(uVar5 - 0x18);
            dataCacheBlockTouch(uVar5 - 0x118);
            iVar1 = (int)uVar17;
            *(int *)(iVar1 + -4) = (int)uVar14;
            *(int *)(iVar1 + -8) = (int)((ulonglong)uVar14 >> 0x20);
            *(int *)(iVar1 + -0x10) = (int)((ulonglong)uVar12 >> 0x20);
            *(undefined4 *)(uVar17 - 0x18) = (int)((ulonglong)uVar11 >> 0x20);
            *(int *)(iVar1 + -0xc) = (int)uVar12;
            *(int *)(iVar1 + -0x14) = (int)uVar11;
            uVar5 = uVar5 - 0x18;
            uVar17 = uVar17 - 0x18;
          }
        }
      }
      if (uVar10 != 0) {
        do {
          uVar5 = uVar5 - 1;
          uVar17 = uVar17 - 1;
          *(undefined1 *)uVar17 = *(undefined1 *)uVar5;
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
        return __dest;
      }
      return __dest;
    }
    dataCacheBlockTouch(uVar5 + 0x80);
    if (((uint)__src & 7) != 0) {
      lVar21 = 8 - (uVar5 & 7);
      do {
        puVar8 = (undefined1 *)uVar5;
        uVar10 = uVar10 - 1;
        uVar5 = uVar5 + 1;
        *(undefined1 *)uVar17 = *puVar8;
        uVar17 = uVar17 + 1;
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
    }
    if (uVar10 == 0) {
      return __dest;
    }
    uVar22 = uVar17 & 3;
    if (uVar22 == 1) {
      if (0xf < uVar10) {
        uVar22 = uVar10 >> 4;
        do {
          lVar20 = *(longlong *)uVar5;
          lVar21 = uVar5 + 0x80;
          uVar10 = uVar10 - 0x10;
          lVar13 = ((longlong *)uVar5)[1];
          uVar5 = uVar5 + 0x10;
          dataCacheBlockTouch(lVar21);
          puVar8 = (undefined1 *)uVar17;
          puVar8[0xf] = (char)lVar13;
          *puVar8 = (char)((ulonglong)lVar20 >> 0x38);
          *(uint *)(puVar8 + 7) = (uint)((ulonglong)lVar13 >> 0x28) | (uint)(lVar20 << 0x18);
          *(short *)(puVar8 + 1) = (short)((ulonglong)lVar20 >> 0x28);
          *(int *)(puVar8 + 3) = (int)((ulonglong)lVar20 >> 8);
          *(int *)(puVar8 + 0xb) = (int)((ulonglong)lVar13 >> 8);
          uVar17 = uVar17 + 0x10;
          uVar22 = uVar22 - 1;
        } while (uVar22 != 0);
      }
      goto LAB_005c5b14;
    }
    if (uVar22 == 2) {
      if (0xf < uVar10) {
        uVar22 = uVar10 >> 4;
        do {
          lVar20 = *(longlong *)uVar5;
          lVar13 = uVar5 + 0x80;
          uVar10 = uVar10 - 0x10;
          lVar21 = ((longlong *)uVar5)[1];
          uVar5 = uVar5 + 0x10;
          dataCacheBlockTouch(lVar13);
          puVar3 = (undefined2 *)uVar17;
          puVar3[7] = (short)lVar21;
          *puVar3 = (short)((ulonglong)lVar20 >> 0x30);
          *(uint *)(puVar3 + 3) = (uint)(ushort)((ulonglong)lVar21 >> 0x30) | (uint)(lVar20 << 0x10)
          ;
          *(int *)(puVar3 + 1) = (int)((ulonglong)lVar20 >> 0x10);
          *(int *)(puVar3 + 5) = (int)((ulonglong)lVar21 >> 0x10);
          uVar17 = uVar17 + 0x10;
          uVar22 = uVar22 - 1;
        } while (uVar22 != 0);
      }
      goto LAB_005c5b14;
    }
    if (uVar22 == 3) {
      if (0xf < uVar10) {
        uVar22 = uVar10 >> 4;
        do {
          lVar21 = *(longlong *)uVar5;
          lVar13 = uVar5 + 0x80;
          uVar10 = uVar10 - 0x10;
          lVar20 = ((longlong *)uVar5)[1];
          uVar5 = uVar5 + 0x10;
          dataCacheBlockTouch(lVar13);
          puVar8 = (undefined1 *)uVar17;
          puVar8[0xf] = (char)lVar20;
          *puVar8 = (char)((ulonglong)lVar21 >> 0x38);
          *(uint *)(puVar8 + 5) = (uint)(byte)((ulonglong)lVar20 >> 0x38) | (uint)(lVar21 << 8);
          *(int *)(puVar8 + 1) = (int)((ulonglong)lVar21 >> 0x18);
          *(int *)(puVar8 + 9) = (int)((ulonglong)lVar20 >> 0x18);
          *(short *)(puVar8 + 0xd) = (short)((ulonglong)lVar20 >> 8);
          uVar17 = uVar17 + 0x10;
          uVar22 = uVar22 - 1;
        } while (uVar22 != 0);
      }
      goto LAB_005c5b14;
    }
    if ((uVar17 & 7) != 0) {
      while (0x17 < uVar10) {
        puVar7 = (undefined8 *)uVar5;
        uVar12 = *puVar7;
        uVar10 = uVar10 - 0x18;
        uVar11 = puVar7[1];
        uVar14 = puVar7[2];
        dataCacheBlockTouch(uVar5 + 0x100);
        puVar4 = (undefined4 *)uVar17;
        puVar4[1] = (int)uVar12;
        *puVar4 = (int)((ulonglong)uVar12 >> 0x20);
        puVar4[2] = (int)((ulonglong)uVar11 >> 0x20);
        puVar4[3] = (int)uVar11;
        uVar5 = uVar5 + 0x18;
        puVar4[4] = (int)((ulonglong)uVar14 >> 0x20);
        puVar4[5] = (int)uVar14;
        uVar17 = uVar17 + 0x18;
      }
      goto LAB_005c5b14;
    }
    uVar6 = uVar5;
    uVar22 = uVar10;
    uVar16 = uVar17;
    if (0x100 < uVar10) {
      do {
        puVar7 = (undefined8 *)uVar6;
        uVar11 = puVar7[1];
        uVar15 = puVar7[2];
        uVar12 = puVar7[3];
        uVar19 = puVar7[4];
        uVar14 = puVar7[5];
        uVar5 = uVar6 + 0x30;
        puVar18 = (undefined8 *)uVar17;
        *puVar18 = *puVar7;
        puVar18[1] = uVar11;
        puVar18[2] = uVar15;
        puVar18[3] = uVar12;
        puVar18[4] = uVar19;
        puVar18[5] = uVar14;
        uVar22 = uVar10 - 0x30;
        uVar16 = uVar17 + 0x30;
        if (uVar10 - 0x30 < 0x30) break;
        puVar9 = (undefined8 *)uVar5;
        uVar10 = uVar10 - 0x60;
        uVar15 = puVar7[7];
        uVar11 = puVar7[8];
        uVar19 = puVar7[9];
        uVar14 = puVar7[10];
        uVar12 = puVar7[0xb];
        uVar5 = uVar6 + 0x60;
        *(undefined8 *)(uVar17 + 0x30) = *puVar9;
        puVar18[7] = uVar15;
        puVar18[8] = uVar11;
        puVar18[9] = uVar19;
        puVar18[10] = uVar14;
        puVar18[0xb] = uVar12;
        uVar17 = uVar17 + 0x60;
        dataCacheBlockTouch(uVar6 + 0x160);
        uVar6 = uVar5;
        uVar22 = uVar10;
        uVar16 = uVar17;
      } while (0x2f < uVar10);
    }
  }
  uVar10 = uVar22;
  uVar17 = uVar16;
  if (0xf < uVar22) {
    uVar22 = uVar22 >> 3;
    do {
      puVar7 = (undefined8 *)uVar5;
      uVar10 = uVar10 - 8;
      uVar5 = uVar5 + 8;
      *(undefined8 *)uVar17 = *puVar7;
      uVar17 = uVar17 + 8;
      uVar22 = uVar22 - 1;
    } while (uVar22 != 0);
  }
LAB_005c5b14:
  if (uVar10 != 0) {
    do {
      puVar8 = (undefined1 *)uVar5;
      uVar5 = uVar5 + 1;
      *(undefined1 *)uVar17 = *puVar8;
      uVar17 = uVar17 + 1;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
    return __dest;
  }
  return __dest;
}


