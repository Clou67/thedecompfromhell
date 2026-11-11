// sdk/libfios/psarclib_parser.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 19 functions, 0x52fba8-0x5309c8
#include <string.h>
#include "sdk/libfios/psarclib_parser.h"
#include "sdk/libc/qsort.h"
#include "sdk/libcgc/libcgc_cell_localize.h"
#include "sdk/libfios/psarclib_md5.h"

// SDK libfios.a(psarclib_parser.ppu.o): cell::fios::PSArc::readSizedInt(unsigned char const*, int)  [exact match]
// 0x052fba8 (0x30 bytes)
ulonglong FUN_0052fba8(byte *param_1,uint param_2)

{
  byte bVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar2 = 0;
  if (0 < (int)param_2) {
    uVar3 = (ulonglong)param_2;
    do {
      bVar1 = *param_1;
      param_1 = param_1 + 1;
      uVar2 = uVar2 << 8 | (ulonglong)bVar1;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return uVar2;
}


// SDK libfios.a(psarclib_parser.ppu.o): cell::fios::PSArc::readBlockIndex(cell::fios::PSArc::TOCEntry const*)  [exact match]
// 0x052fbd8 (0x30 bytes)
undefined4 FUN_0052fbd8(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0052fba8(param_1 + 0x10,4);
  return uVar1;
}


// SDK libfios.a(psarclib_parser.ppu.o): cell::fios::PSArc::ArchiveParser::isReadable() const  [exact match]
// 0x052fc08 (0xb4 bytes)
undefined4 FUN_0052fc08(int param_1)

{
  uint uVar1;
  bool bVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  uint uVar5;
  
  uVar4 = 1;
  if (*(ushort *)(param_1 + 0xc) != 3) {
    uVar4 = (((ulonglong)*(ushort *)(param_1 + 0xc) ^ 1) - 1 << 0x20) >> 0x3f;
  }
  if (*(uint *)(param_1 + 0x14) == 0) {
    bVar2 = false;
    uVar5 = *(uint *)(param_1 + 0x18);
  }
  else {
    uVar5 = *(uint *)(param_1 + 0x18);
    bVar2 = true;
    if (*(uint *)(param_1 + 0x14) < uVar5 * *(int *)(param_1 + 0x1c)) {
      uVar1 = *(uint *)(param_1 + 0x20);
      bVar2 = false;
      goto joined_r0x0052fc88;
    }
  }
  uVar1 = *(uint *)(param_1 + 0x20);
joined_r0x0052fc88:
  if ((((*(int *)(param_1 + 8) != 0x50534152) || (uVar4 == 0)) || (!bVar2)) ||
     ((uVar5 < 0x1e || (uVar3 = 1, uVar1 < 0x100)))) {
    uVar3 = 0;
  }
  return uVar3;
}


// SDK libfios.a(psarclib_parser.ppu.o): cell::fios::PSArc::ArchiveParser::getFileSize(void const*, cell::fios::PSArc::TOCEntry const*) const  [exact match]
// 0x052fcbc (0x30 bytes)
void FUN_0052fcbc(undefined8 param_1,undefined4 param_2,int param_3)

{
  undefined4 uStack00000038;
  
  uStack00000038 = param_2;
  FUN_0052fba8(param_3 + 0x14,5);
  return;
}


// SDK libfios.a(psarclib_parser.ppu.o): cell::fios::PSArc::ArchiveParser::getFileOffset(void const*, cell::fios::PSArc::TOCEntry const*) const  [exact match]
// 0x052fcec (0x30 bytes)
void FUN_0052fcec(undefined8 param_1,undefined4 param_2,int param_3)

{
  undefined4 uStack00000038;
  
  uStack00000038 = param_2;
  FUN_0052fba8(param_3 + 0x19,5);
  return;
}


// SDK libfios.a(psarclib_parser.ppu.o): cell::fios::PSArc::ArchiveParser::fileIsUncompressed(void const*, cell::fios::PSArc::TOCEntry const*) const  [exact match]
// 0x052fd1c (0x70 bytes)
uint FUN_0052fd1c(int param_1,undefined4 param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined4 uStack00000038;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  uVar2 = (int)uVar1 >> 0x1f;
  uStack00000038 = param_2;
  uVar4 = FUN_0052fbd8(param_3);
  uVar5 = (longlong)~uVar4 >> 0x3f;
  uVar3 = 1;
  if (-1 < (int)(((uVar2 ^ uVar1) - uVar2) + -1)) {
    uVar3 = (uint)(((uVar5 ^ ~uVar4) - uVar5) + -1 >> 0x3f);
  }
  return uVar3;
}


// 0x052fd8c (0x320 bytes)
undefined8
FUN_0052fd8c(int param_1,longlong param_2,int param_3,longlong param_4,uint param_5,
            ulonglong *param_6,longlong *param_7,undefined1 *param_8)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  int iVar10;
  ulonglong uVar9;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  
  uVar2 = FUN_0052fbd8(param_3);
  if (uVar2 == 0xffffffffffffffff) {
    uVar1 = *(uint *)(param_1 + 0x20);
    *param_8 = 0;
    *param_6 = (ulonglong)uVar1;
    lVar4 = FUN_0052fba8(param_3 + 0x19,5);
    *param_7 = lVar4 + ((longlong)(int)param_5 * (longlong)*(int *)(param_1 + 0x20) & 0xffffffffU);
    return 1;
  }
  uVar3 = FUN_0052fba8(param_3 + 0x14,5);
  if (uVar3 == 0) {
    iVar8 = *(int *)(param_1 + 0x1c);
    iVar10 = *(int *)(param_1 + 0x18);
    uVar7 = uVar2 + param_5;
    uVar9 = (uVar7 + 0x10 << 0x20) >> 0x25;
    uVar11 = uVar9 << 5;
    uVar6 = uVar2;
    if ((longlong)uVar11 <= (longlong)uVar2) goto LAB_0052fe50;
  }
  else {
    iVar8 = *(int *)(param_1 + 0x1c);
    iVar10 = *(int *)(param_1 + 0x18);
    uVar6 = uVar2 + ((uVar3 - 1) / (ulonglong)*(uint *)(param_1 + 0x20) & 0xffffffff);
    uVar7 = uVar2 + param_5;
    uVar9 = (uVar7 + 0x10 << 0x20) >> 0x25;
    uVar11 = uVar9 << 5;
    if ((longlong)uVar11 <= (longlong)uVar6) goto LAB_0052fe50;
  }
  uVar11 = uVar11 - 0x20;
  uVar9 = uVar9 - 1;
LAB_0052fe50:
  if (((int)param_4 == 0) || (uVar11 = uVar11 & 0xffffffff, (longlong)uVar11 <= (longlong)uVar2)) {
    lVar4 = FUN_0052fba8(param_3 + 0x19,5);
    uVar11 = uVar2;
  }
  else {
    lVar4 = FUN_0052fba8(param_4 + (uVar9 & 0x3fffffff) * 4 + uVar9 & 0xffffffff,5);
  }
  uVar2 = (ulonglong)*(byte *)(param_1 + 0x38);
  uVar9 = 1L << ((uVar2 & 0xf) << 3);
  uVar13 = (longlong)iVar8 * (longlong)iVar10 + param_2 + uVar11 * *(byte *)(param_1 + 0x38);
  if ((longlong)uVar11 < (longlong)uVar7) {
    lVar12 = 0;
    do {
      lVar12 = lVar12 + 1;
      uVar5 = FUN_0052fba8(uVar13 & 0xffffffff,uVar2);
      uVar2 = (ulonglong)*(byte *)(param_1 + 0x38);
      uVar13 = uVar13 + uVar2;
      lVar4 = uVar9 * -((longlong)
                        ((((longlong)uVar5 >> 0x3f ^ uVar5) - ((longlong)uVar5 >> 0x3f)) + -1) >>
                       0x3f) + uVar5 + lVar4;
    } while (uVar7 - uVar11 != lVar12);
    uVar11 = uVar11 + (uVar7 - uVar11);
  }
  if ((longlong)uVar7 < (longlong)uVar11) {
    while( true ) {
      uVar11 = uVar11 - 1;
      uVar13 = uVar13 - uVar2;
      uVar5 = uVar13 & 0xffffffff;
      uVar2 = FUN_0052fba8(uVar5,(int)uVar2);
      lVar4 = lVar4 - (uVar2 + uVar9 * -((longlong)
                                         ((((longlong)uVar2 >> 0x3f ^ uVar2) -
                                          ((longlong)uVar2 >> 0x3f)) + -1) >> 0x3f));
      if ((longlong)uVar11 <= (longlong)uVar7) break;
      uVar2 = (ulonglong)*(byte *)(param_1 + 0x38);
    }
    uVar2 = (ulonglong)*(byte *)(param_1 + 0x38);
  }
  else {
    uVar5 = uVar13 & 0xffffffff;
  }
  uVar2 = FUN_0052fba8(uVar5,uVar2);
  if (uVar2 == 0) {
    *param_8 = 0;
    uVar2 = uVar9;
  }
  else if ((uVar6 == uVar7) &&
          ((uVar3 - (uVar3 / *(uint *)(param_1 + 0x20)) * (ulonglong)*(uint *)(param_1 + 0x20) &
           0xffffffff) == uVar2)) {
    *param_8 = 0;
  }
  else {
    *param_8 = 1;
  }
  *param_6 = uVar2;
  *param_7 = lVar4;
  return 1;
}


// SDK libfios.a(psarclib_parser.ppu.o): cell::fios::PSArc::ArchiveParser::fileRegionIsUncompressed(void const*, cell::fios::PSArc::TOCEntry const*, unsigned long long, unsigned long long) const  [exact match]
// 0x05300ac (0x180 bytes)
/* WARNING: Removing unreachable block (ram,0x00530180) */

undefined4
FUN_005300ac(int param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4,longlong param_5)

{
  ulonglong uVar1;
  ulonglong uVar2;
  char cVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  GPiece<8> local_60;
  GPiece<8> auStack_58;
  GPiece<16> auStack_50;
  
  uVar2 = FUN_0052fcbc();
  if ((param_4 <= uVar2) && (uVar5 = param_4 + param_5, uVar5 <= uVar2)) {
    cVar3 = FUN_0052fd1c(param_1,param_2,param_3);
    if (cVar3 == '\0') {
      uVar2 = (ulonglong)*(uint *)(param_1 + 0x20);
      uVar1 = uVar5 - (uVar5 / uVar2) * uVar2;
      uVar4 = (longlong)uVar1 >> 0x3f;
      if ((param_4 / uVar2 & 0xffffffff) <=
          (uVar5 / uVar2 + ((longlong)(((uVar4 ^ uVar1) - uVar4) + -1) >> 0x3f) & 0xffffffff)) {
        FUN_0052fd8c(param_1,param_2,param_3,0,param_4 / uVar2 & 0xffffffff,auStack_50,auStack_58,
                     local_60);
        return 0;
      }
    }
    return 1;
  }
  return 0;
}


// SDK libfios.a(psarclib_parser.ppu.o): cell::fios::PSArc::ArchiveParser::lookupFileEntry(void const*, unsigned char const*) const  [exact match]
// 0x053022c (0x194 bytes)
void * FUN_0053022c(int param_1,void *param_2,void *param_3)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  GPiece<40> local_90;
  
  if (param_2 != (void *)0x0) {
    if (*(char *)(param_1 + 0x39) != '\0') {
      pvVar2 = (void *)FUN_005c4d8c(local_90,param_2,*(undefined4 *)(param_1 + 0x1c),
                                    *(undefined4 *)(param_1 + 0x18),PTR_PTR_0071aed0);
      return pvVar2;
    }
    iVar1 = *(int *)(param_1 + 0x1c);
    if (iVar1 != 0) {
      iVar4 = 0;
      while( true ) {
        iVar4 = iVar4 + 1;
        iVar3 = memcmp(param_2,param_3,0x10);
        if (iVar3 == 0) {
          return param_2;
        }
        if (iVar1 == iVar4) break;
        param_2 = (void *)((int)param_2 + *(int *)(param_1 + 0x18));
      }
    }
  }
  return (void *)0x0;
}


// SDK libfios.a(psarclib_parser.ppu.o): cell::fios::PSArc::ArchiveParser::getManifestEntry(void const*) const  [exact match]
// 0x05303c0 (0x34 bytes)
undefined4 FUN_005303c0(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  GPiece<16> auStack_10;
  
  uVar1 = FUN_0053022c(param_1,param_2,auStack_10);
  return uVar1;
}


// 0x05303f4 (0x2c bytes)
int FUN_005303f4(void *param_1,void *param_2)

{
  int iVar1;
  
  iVar1 = memcmp(param_1,param_2,0x10);
  return iVar1;
}


// SDK libfios.a(psarclib_parser.ppu.o): cell::fios::PSArc::ArchiveParser::lookupFileEntry(void const*, char const*) const  [exact match]
// 0x0530420 (0x60 bytes)
undefined4 FUN_00530420(int param_1,undefined4 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  GPiece<88> auStack_90;
  GPiece<24> auStack_38;
  
  FUN_0052faf8(auStack_90,param_3,*(uint *)(param_1 + 0x24) & 1);
  uVar1 = FUN_0053022c(param_1,param_2,auStack_38);
  return uVar1;
}


// 0x0530480 (0x2c0 bytes)
void FUN_00530480(int param_1,ulonglong param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined *__s2;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar10;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  int iVar14;
  ulonglong uVar15;
  int iVar16;
  
  memset(param_3,0,
               ((((ulonglong)*(uint *)(param_1 + 0x14) -
                 ((longlong)*(int *)(param_1 + 0x1c) * (longlong)*(int *)(param_1 + 0x18) &
                 0xffffffffU)) / (ulonglong)*(byte *)(param_1 + 0x38) + 0x1f << 0x20) >> 0x25) * 5);
  iVar2 = *(int *)(param_1 + 0x1c);
  uVar12 = 1L << (((ulonglong)*(byte *)(param_1 + 0x38) & 0xf) << 3);
  if (iVar2 != 0) {
    iVar14 = 0;
    uVar15 = param_2;
    while( true ) {
      uVar6 = FUN_0052fba8(uVar15 + 0x14 & 0xffffffff,5);
      uVar7 = FUN_0052fbd8(uVar15 & 0xffffffff);
      __s2 = PTR_DAT_0071aed4;
      uVar11 = 0;
      if (uVar6 != 0) {
        uVar11 = (uVar6 - 1) / (ulonglong)*(uint *)(param_1 + 0x20) & 0xffffffff;
      }
      if ((uVar7 != 0xffffffffffffffff) && (uVar12 <= uVar6)) {
        uVar6 = ((longlong)uVar7 >> 5) + (ulonglong)((longlong)uVar7 < 0 && (uVar7 & 0x1f) != 0);
        uVar11 = uVar11 + uVar7;
        iVar10 = memcmp((void *)(param_3 + (int)((uVar6 & 0xffffffff) << 2) + (int)uVar6),
                              PTR_DAT_0071aed4,5);
        if ((iVar10 == 0) ||
           (uVar6 = ((longlong)uVar11 >> 5) +
                    (ulonglong)((longlong)uVar11 < 0 && (uVar11 & 0x1f) != 0),
           iVar10 = memcmp((void *)(param_3 + (int)((uVar6 & 0xffffffff) << 2) + (int)uVar6),
                                 __s2,5), iVar10 == 0)) {
          iVar10 = *(int *)(param_1 + 0x1c);
          iVar3 = *(int *)(param_1 + 0x18);
          bVar1 = *(byte *)(param_1 + 0x38);
          lVar8 = FUN_0052fcec(param_1,param_2 & 0xffffffff,uVar15 & 0xffffffff);
          iVar16 = (int)uVar7;
          if ((longlong)iVar16 <= (longlong)uVar11) {
            lVar13 = 0;
            uVar6 = param_2 + (longlong)iVar10 * (longlong)iVar3 + uVar7 * bVar1;
            do {
              puVar4 = (undefined1 *)
                       (param_3 +
                       (((int)uVar7 >> 5) + (uint)((int)uVar7 < 0 && (uVar7 & 0x1f) != 0)) * 5);
              if ((uVar7 & 0x1f) == 0) {
                puVar4[4] = (char)lVar8;
                *puVar4 = (char)((ulonglong)lVar8 >> 0x20);
                puVar4[1] = (char)((ulonglong)lVar8 >> 0x18);
                puVar4[2] = (char)((ulonglong)lVar8 >> 0x10);
                puVar4[3] = (char)((ulonglong)lVar8 >> 8);
              }
              uVar9 = FUN_0052fba8(uVar6 & 0xffffffff,*(undefined1 *)(param_1 + 0x38));
              if (uVar9 == 0) {
                uVar9 = uVar12;
              }
              lVar8 = lVar8 + uVar9;
              lVar5 = (iVar16 + 1) + lVar13;
              uVar7 = uVar7 + 1;
              lVar13 = lVar13 + 1;
              uVar6 = uVar6 + *(byte *)(param_1 + 0x38);
            } while (lVar5 <= (longlong)uVar11);
          }
        }
      }
      iVar14 = iVar14 + 1;
      if (iVar2 == iVar14) break;
      uVar15 = uVar15 + *(uint *)(param_1 + 0x18);
    }
  }
  return;
}


// 0x0530740 (0x30 bytes)
void FUN_00530740(undefined4 *param_1)

{
  *param_1 = PTR_PTR_0071aed8;
  FUN_005e387c();
  return;
}


// 0x0530770 (0xc bytes)
void FUN_00530770(undefined4 *param_1)

{
  *param_1 = PTR_PTR_0071aed8;
  return;
}


// 0x053077c (0xc bytes)
void FUN_0053077c(undefined4 *param_1)

{
  *param_1 = PTR_PTR_0071aed8;
  return;
}


// 0x0530788 (0xf4 bytes)
void FUN_00530788(undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  
  *param_1 = PTR_PTR_0071aed8;
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  uVar4 = param_2[5];
  uVar5 = param_2[4];
  uVar6 = param_2[6];
  uVar7 = param_2[7];
  param_1[2] = *param_2;
  param_1[4] = uVar2;
  param_1[6] = uVar5;
  param_1[7] = uVar4;
  param_1[8] = uVar6;
  param_1[9] = uVar7;
  param_1[3] = uVar1;
  param_1[5] = uVar3;
  if (uVar1 >> 0x10 < 3) {
    if (uVar3 < 0x21) {
      param_1[5] = 0;
    }
    else {
      param_1[5] = uVar3 - 0x20;
    }
    *(ulonglong *)(param_1 + 0xc) = (ulonglong)(uint)param_1[5];
    *(undefined8 *)(param_1 + 10) = 0x20;
  }
  else {
    uVar8 = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 10);
    *(undefined8 *)(param_1 + 10) = uVar8;
  }
  uVar1 = param_1[8];
  if (uVar1 < 0x101) {
    *(undefined1 *)(param_1 + 0xe) = 1;
  }
  else if (uVar1 < 0x10001) {
    *(undefined1 *)(param_1 + 0xe) = 2;
  }
  else if (uVar1 < 0x1000001) {
    *(undefined1 *)(param_1 + 0xe) = 3;
  }
  else {
    *(undefined1 *)(param_1 + 0xe) = 4;
  }
  *(byte *)((int)param_1 + 0x39) = (byte)((uint)param_1[9] >> 2) & 1;
  return;
}


// SDK libfios.a(psarclib_parser.ppu.o): cell::fios::PSArc::ArchiveParser::sortTOC(void*)  [exact match]
// 0x053087c (0x58 bytes)
void FUN_0053087c(int param_1,undefined4 param_2)

{
  if ((*(uint *)(param_1 + 0x24) & 4) == 0) {
    FUN_005c8308(param_2,*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x18),
                 PTR_PTR_0071aed0);
  }
  *(undefined1 *)(param_1 + 0x39) = 1;
  return;
}


// 0x05308d4 (0xf4 bytes)
void FUN_005308d4(undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  
  *param_1 = PTR_PTR_0071aed8;
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  uVar4 = param_2[5];
  uVar5 = param_2[4];
  uVar6 = param_2[6];
  uVar7 = param_2[7];
  param_1[2] = *param_2;
  param_1[4] = uVar2;
  param_1[6] = uVar5;
  param_1[7] = uVar4;
  param_1[8] = uVar6;
  param_1[9] = uVar7;
  param_1[3] = uVar1;
  param_1[5] = uVar3;
  if (uVar1 >> 0x10 < 3) {
    if (uVar3 < 0x21) {
      param_1[5] = 0;
    }
    else {
      param_1[5] = uVar3 - 0x20;
    }
    *(ulonglong *)(param_1 + 0xc) = (ulonglong)(uint)param_1[5];
    *(undefined8 *)(param_1 + 10) = 0x20;
  }
  else {
    uVar8 = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 10);
    *(undefined8 *)(param_1 + 10) = uVar8;
  }
  uVar1 = param_1[8];
  if (uVar1 < 0x101) {
    *(undefined1 *)(param_1 + 0xe) = 1;
  }
  else if (uVar1 < 0x10001) {
    *(undefined1 *)(param_1 + 0xe) = 2;
  }
  else if (uVar1 < 0x1000001) {
    *(undefined1 *)(param_1 + 0xe) = 3;
  }
  else {
    *(undefined1 *)(param_1 + 0xe) = 4;
  }
  *(byte *)((int)param_1 + 0x39) = (byte)((uint)param_1[9] >> 2) & 1;
  return;
}


