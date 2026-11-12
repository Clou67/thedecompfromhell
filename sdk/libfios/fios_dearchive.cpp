// sdk/libfios/fios_dearchive.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 55 functions, 0x5109bc-0x518fe4
#include <string.h>
#include "sdk/libfios/fios_dearchive.h"
#include "game/hero.h"
#include "sdk/lUnk.h"
#include "sdk/libc/qsort.h"
#include "sdk/libfios/fios_base.h"
#include "sdk/libfios/fios_caching.h"
#include "sdk/libfios/fios_internal.h"
#include "sdk/libfios/fios_media.h"
#include "sdk/libfios/fios_paths.h"
#include "sdk/libfios/fios_platform_ps3ppu.h"
#include "sdk/libfios/fios_watch.h"
#include "sdk/libfios/psarclib_parser.h"
#include "sdk/sce.h"
#include "sdk/sys.h"

// SDK libfios.a(fios_dearchive.ppu.o): cell::fios::dearchiver::getVariableName(unsigned int) const  [fuzzy 1.000 match]
// 0x05109bc (0xc4 bytes)
// strings: 00667058: 'PSARC_DECOMPRESS1_64K' | 00667040: 'PSARC_DECOMPRESS4_64K' | 00667070: 'PSARC_DECOMPRESS2_64K' | 00667028: 'PSARC_DECOMPRESS3_64K'

undefined * FUN_005109bc(int param_1,int param_2)

{
  int iVar1;
  undefined *puVar2;
  
  iVar1 = param_2 - *(int *)(param_1 + 0x168);
  if (iVar1 == 1) {
    return PTR_s_PSARC_DECOMPRESS2_64K_0071a9d0;
  }
  puVar2 = PTR_s_PSARC_DECOMPRESS1_64K_0071a9cc;
  if (param_2 != *(int *)(param_1 + 0x168)) {
    if (iVar1 == 2) {
      return PTR_s_PSARC_DECOMPRESS3_64K_0071a9c4;
    }
    puVar2 = PTR_s_PSARC_DECOMPRESS4_64K_0071a9c8;
    if (iVar1 != 3) {
      puVar2 = (undefined *)
               (*(code *)**(undefined4 **)(**(int **)(param_1 + 0x40) + 0xc))
                         (*(int **)(param_1 + 0x40),param_2);
      return puVar2;
    }
  }
  return puVar2;
}


// SDK libfios.a(fios_dearchive.ppu.o): cell::fios::dearchiver::speculateIOP(cell::fios::mediaioparams*)  [fuzzy 1.000 match]
// 0x0510a80 (0x44 bytes)
void FUN_00510a80(int param_1)

{
  (*(code *)**(undefined4 **)(**(int **)(param_1 + 0x40) + 8))(*(int **)(param_1 + 0x40));
  return;
}


// 0x0510ac4 (0xc8 bytes)
int FUN_00510ac4(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  
  bVar2 = PTR_DAT_0071a9d4[*(byte *)*param_1];
  bVar3 = PTR_DAT_0071a9d4[*(byte *)*param_2];
  if (bVar2 != 0) {
    if (bVar3 == 0) {
      return 1;
    }
    iVar1 = 0;
    if (bVar2 == bVar3) {
      do {
        iVar1 = iVar1 + 1;
        bVar2 = PTR_DAT_0071a9d4[((byte *)*param_1)[iVar1]];
        bVar3 = PTR_DAT_0071a9d4[((byte *)*param_2)[iVar1]];
        if (bVar2 == 0) goto LAB_00510b54;
        if (bVar3 == 0) {
          return 1;
        }
      } while (bVar2 == bVar3);
    }
    return (int)(char)bVar2 - (int)(char)bVar3;
  }
LAB_00510b54:
  return (int)-(uint)bVar3 >> 0x1f;
}


// SDK libfios.a(fios_dearchive.ppu.o): cell::fios::dearchiver::bufferMalloc(unsigned char*, unsigned int)  [fuzzy 1.000 match]
// 0x0510b8c (0x160 bytes)
// strings: 00667088: 'fios dearchiver: allocator did not return a buffer with the required alignment!\n'

uint FUN_00510b8c(int param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined *puVar3;
  uint uVar4;
  uint uVar5;
  
  puVar3 = PTR_DAT_0071a9d8;
  if (param_2 != 0) {
    (*(code *)**(undefined4 **)(**(int **)(PTR_DAT_0071a9d8 + 8) + 4))
              (*(int **)(PTR_DAT_0071a9d8 + 8),param_2,*(uint *)(param_1 + 0x1b0) | 0x10640100,0,0);
  }
  puVar1 = *(undefined4 **)(puVar3 + 8);
  uVar4 = (*(code *)**(undefined4 **)*puVar1)
                    (puVar1,param_3,*(uint *)(param_1 + 0x1b0) | 0x10640100,0,0);
  uVar5 = 0;
  if ((uVar4 != 0) &&
     (uVar5 = uVar4, ((1 << (*(uint *)(param_1 + 0x1b0) & 0x3f)) - 1U & uVar4) != 0)) {
    _ZN4cell4fios8platform10FIOSprintfEPKcz(PTR_s_fios_dearchiver__allocator_did_n_0071a9dc);
    piVar2 = *(int **)(puVar3 + 8);
    uVar5 = 0;
    (*(code *)**(undefined4 **)(*piVar2 + 4))
              (piVar2,uVar4,*(uint *)(param_1 + 0x1b0) | 0x10640100,0,0);
  }
  return uVar5;
}


// SDK libfios.a(fios_dearchive.ppu.o): cell::fios::dearchiver::manifestEntryPath(int, char*)  [fuzzy 1.000 match]
// 0x0510cec (0x68 bytes)
undefined4 FUN_00510cec(int param_1,ulonglong param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = 0;
  if ((param_2 & 0xffffffff) < (ulonglong)*(uint *)(param_1 + 0x238)) {
    iVar1 = (int)((param_2 & 0x3fffffff) << 2);
  }
  FUN_005193cc(param_3,*(undefined4 *)(iVar1 + *(int *)(param_1 + 0x230)),0x100);
  return param_3;
}


// SDK libfios.a(fios_dearchive.ppu.o): cell::fios::dearchiver::pathIsArchiveAsFolder(char const*, cell::fios::stat_t*)  [fuzzy 1.000 match]
// 0x0510d54 (0x118 bytes)
undefined4 FUN_00510d54(int param_1,undefined8 param_2,void *param_3)

{
  int *piVar1;
  size_t sVar2;
  int iVar3;
  byte in_cr0;
  byte in_cr1;
  byte in_cr2;
  byte in_cr3;
  byte unaff_cr4;
  byte in_cr5;
  byte in_cr6;
  byte in_cr7;
  uint uStack00000008;
  
  uStack00000008 =
       (uint)(in_cr0 & 0xf) << 0x1c | (uint)(in_cr1 & 0xf) << 0x18 | (uint)(in_cr2 & 0xf) << 0x14 |
       (uint)(in_cr3 & 0xf) << 0x10 | (uint)(unaff_cr4 & 0xf) << 0xc | (uint)(in_cr5 & 0xf) << 8 |
       (uint)(in_cr6 & 0xf) << 4 | (uint)(in_cr7 & 0xf);
  sVar2 = strlen((char *)param_2);
  piVar1 = *(int **)(param_1 + 0x164);
  if (piVar1 != (int *)0x0) {
    do {
      if ((piVar1[99] == sVar2) && (iVar3 = FUN_005ccb28(piVar1 + 0x23,param_2,sVar2), iVar3 == 0))
      {
        if (param_3 != (void *)0x0) {
          memcpy(param_3,piVar1 + 100,0x58);
        }
        return 1;
      }
      piVar1 = (int *)*piVar1;
    } while (piVar1 != (int *)0x0);
  }
  return 0;
}


// SDK libfios.a(fios_dearchive.ppu.o): cell::fios::dearchiver::lengthWithoutArchiveExtension(char const*)  [fuzzy 1.000 match]
// 0x0510e6c (0xcc bytes)
size_t FUN_00510e6c(int param_1,char *param_2)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  size_t sVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  
  sVar4 = strlen(param_2);
  iVar1 = *(int *)(param_1 + 0x120);
  if (iVar1 != 0) {
    puVar7 = (uint *)(param_1 + 0x144);
    iVar6 = 0;
    do {
      puVar3 = puVar7 + -8;
      iVar6 = iVar6 + 1;
      uVar2 = *puVar7;
      puVar7 = puVar7 + 1;
      if ((uVar2 < sVar4) &&
         (iVar5 = FUN_005ccb28(*puVar3,param_2 + (sVar4 - uVar2),uVar2), iVar5 == 0)) {
        return sVar4 - uVar2;
      }
    } while (iVar6 != iVar1);
  }
  return sVar4;
}


// SDK libfios.a(fios_dearchive.ppu.o): cell::fios::dearchiver::manifestEntryIsDirectoryDescendant(int, char const*, char*)  [fuzzy 1.000 match]
// 0x0510f38 (0x1a0 bytes)
undefined4 FUN_00510f38(int param_1,ulonglong param_2,undefined8 param_3,int param_4)

{
  uint uVar1;
  size_t sVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  char *__s;
  
  sVar2 = strlen((char *)param_3);
  uVar1 = (int)(sVar2 ^ 1) >> 0x1f;
  iVar3 = 0;
  uVar1 = sVar2 & (int)(uVar1 - (uVar1 ^ sVar2 ^ 1)) >> 0x1f;
  if ((param_2 & 0xffffffff) < (ulonglong)*(uint *)(param_1 + 0x238)) {
    iVar3 = (int)((param_2 & 0x3fffffff) << 2);
  }
  iVar3 = *(int *)(iVar3 + *(int *)(param_1 + 0x230));
  pcVar5 = (char *)(iVar3 + uVar1);
  iVar3 = FUN_005ccb28(param_3,iVar3,uVar1);
  uVar4 = 0;
  if (iVar3 == 0) {
    if (*pcVar5 == '/') {
      if (param_4 != 0) {
        FUN_005193cc(param_4,param_3,0x100);
        __s = (char *)(param_4 + uVar1 + 1);
        *(undefined1 *)(param_4 + uVar1) = 0x2f;
        FUN_005193cc(__s,pcVar5 + 1,0x100 - (uVar1 + 1));
        pcVar5 = strchr(__s,0x2f);
        if (pcVar5 != (char *)0x0) {
          *pcVar5 = '\0';
          return 1;
        }
      }
      uVar4 = 1;
    }
  }
  return uVar4;
}


// SDK libfios.a(fios_dearchive.ppu.o): cell::fios::dearchiver::manifestEntryIsDirectoryChild(int, char const*)  [fuzzy 1.000 match]
// 0x05110d8 (0x10c bytes)
uint FUN_005110d8(int param_1,ulonglong param_2,char *param_3)

{
  int iVar1;
  size_t sVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = 0;
  if ((param_2 & 0xffffffff) < (ulonglong)*(uint *)(param_1 + 0x238)) {
    iVar4 = (int)((param_2 & 0x3fffffff) << 2);
  }
  iVar4 = *(int *)(iVar4 + *(int *)(param_1 + 0x230));
  iVar1 = FUN_005c85b4(iVar4,0x2f);
  sVar2 = strlen(param_3);
  uVar3 = (int)(sVar2 ^ 1) >> 0x1f;
  if (iVar1 - iVar4 != (sVar2 & (int)(uVar3 - (uVar3 ^ sVar2 ^ 1)) >> 0x1f)) {
    return 0;
  }
  uVar3 = FUN_005ccb28(param_3,iVar4,iVar1 - iVar4);
  return (((int)uVar3 >> 0x1f ^ uVar3) - ((int)uVar3 >> 0x1f)) - 1 >> 0x1f;
}


// SDK libfios.a(fios_dearchive.ppu.o): cell::fios::dearchiver::searchManifestPathTable(char const*)  [fuzzy 1.000 match]
// 0x05111e4 (0x1d0 bytes)
int FUN_005111e4(int param_1,undefined4 param_2)

{
  uint uVar1;
  ulonglong uVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  size_t sVar6;
  char cVar7;
  ulonglong uVar8;
  int iVar9;
  char cStack_160;
  char local_15f;
  
  if (*(int *)(param_1 + 0x238) == 0) {
    return -1;
  }
  FUN_005193cc(&cStack_160,param_2,0x100);
  if (local_15f != '\0') {
    FUN_00519310(&cStack_160,PTR_DAT_0071a9e0,0x100);
  }
  uVar8 = 0;
  sVar6 = strlen(&cStack_160);
  uVar1 = *(uint *)(param_1 + 0x238);
  uVar2 = (ulonglong)uVar1;
  do {
    iVar3 = (int)uVar2 + -1;
    iVar9 = (int)uVar8;
    iVar5 = iVar3 - iVar9;
    uVar4 = (longlong)(iVar5 >> 1) + uVar8 + 1;
    while( true ) {
      uVar2 = uVar4;
      if (iVar5 < 1) {
        cVar7 = FUN_00510f38(param_1,iVar9,param_2,0);
        if (cVar7 != '\0') {
          return iVar9;
        }
        if (iVar9 < *(int *)(param_1 + 0x238) + -1) {
          cVar7 = FUN_00510f38(param_1,iVar9 + 1,param_2,0);
          if (cVar7 != '\0') {
            return iVar9 + 1;
          }
        }
        return -1;
      }
      iVar9 = (int)uVar2;
      iVar5 = 0;
      if ((uVar2 & 0xffffffff) < (ulonglong)uVar1) {
        iVar5 = (int)((uVar2 & 0x3fffffff) << 2);
      }
      iVar5 = FUN_005ccb28(&cStack_160,*(undefined4 *)(iVar5 + *(int *)(param_1 + 0x230)),sVar6);
      if (iVar5 < 1) break;
      iVar5 = iVar3 - iVar9;
      uVar4 = (longlong)(iVar5 >> 1) + uVar2 + 1;
      uVar8 = uVar2;
    }
  } while( true );
}


// SDK libfios.a(fios_dearchive.ppu.o): cell::fios::dearchiver::getSpecialOffset(cell::fios::mediarequest*, cell::fios::PSArc::TOCEntry const*, cell::fios::dearchiver::ArchiveTracker*)  [exact match]
// 0x05113b4 (0x170 bytes)
// strings: 006670e8: "fios read archive problem: can't load special '%s' from non-PSARC-MSELF archive\n" | 00667140: "fios read archive problem: lookup of block %lu in file '%s' in archive '%s' failed!\n" | 00667198: "FIOS dearchiver open file '%s' because it's compressed!\n"

longlong FUN_005113b4(undefined8 param_1,int param_2,undefined4 param_3,int param_4)

{
  undefined *puVar1;
  undefined4 uVar2;
  bool bVar3;
  int iVar4;
  char cVar6;
  undefined8 uVar5;
  longlong lVar7;
  char local_50 [8];
  longlong local_48;
  GPiece<24> auStack_40;
  
  if (*(longlong *)(param_4 + 0x70) == 0) {
    uVar2 = *(undefined4 *)(param_2 + 8);
    puVar1 = PTR_s_fios_read_archive_problem__can_t_0071a9e4;
    goto LAB_005114cc;
  }
  iVar4 = param_4 + 8;
  cVar6 = FUN_0052fd8c(iVar4,*(undefined4 *)(param_4 + 0x80),param_3,
                       *(undefined4 *)(param_4 + 0x1ec),0,auStack_40,&local_48,local_50);
  if (cVar6 == '\0') {
    _ZN4cell4fios8platform10FIOSprintfEPKcz(PTR_s_fios_read_archive_problem__looku_0071a9e8,0,*(undefined4 *)(param_2 + 8),
                     param_4 + 0x8c);
    *(undefined4 *)(param_2 + 4) = 0x8001070f;
    return -1;
  }
  lVar7 = *(longlong *)(param_4 + 0x70);
  if (local_50[0] == '\0') {
    uVar2 = *(undefined4 *)(param_4 + 0x80);
    uVar5 = FUN_0052fcbc(iVar4,uVar2,param_3);
    cVar6 = FUN_005300ac(iVar4,uVar2,param_3,0,uVar5);
    bVar3 = true;
    if (cVar6 == '\0') goto LAB_00511444;
  }
  else {
LAB_00511444:
    bVar3 = false;
  }
  if (bVar3) {
    return local_48 + lVar7;
  }
  uVar2 = *(undefined4 *)(param_2 + 8);
  puVar1 = PTR_s_FIOS_dearchiver_open_file___s__b_0071a9ec;
LAB_005114cc:
  _ZN4cell4fios8platform10FIOSprintfEPKcz(puVar1,uVar2);
  *(undefined4 *)(param_2 + 4) = 0x8001070f;
  return -1;
}


// SDK libfios.a(fios_dearchive.ppu.o): cell::fios::dearchiver::init(unsigned int, cell::fios::Compression::AsyncDecompressor**, unsigned int, char const**)  [fuzzy 1.000 match]
// 0x0511524 (0x278 bytes)
void FUN_00511524(int param_1,uint param_2,int param_3,uint param_4,int param_5)

{
  uint uVar1;
  char *__s;
  int iVar2;
  undefined4 *puVar3;
  uint *puVar4;
  size_t sVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uStack00000038;
  uint uStack00000048;
  
  *(undefined4 *)(param_1 + 0x1b0) = 7;
  *(undefined1 *)(param_1 + 0x114) = 0;
  *(undefined4 *)(param_1 + 0x168) = 0;
  uStack00000038 = param_2;
  uStack00000048 = param_4;
  memset(param_1 + 0x1b4,0,0x60);
  memset(param_1 + 0x268,0,0x860);
  *(undefined4 *)(param_1 + 0xac8) = 0;
  iVar7 = 0x38;
  if (3 < uStack00000038) {
    iVar7 = -0x48;
  }
  uStack00000038 = *(uint *)(&stack0x00000000 + iVar7);
  piVar6 = (int *)(param_1 + 0x104);
  *piVar6 = 0;
  *(undefined4 *)(param_1 + 0x110) = 0;
  *(undefined4 *)(param_1 + 0x108) = 0;
  *(undefined4 *)(param_1 + 0x10c) = 0;
  *(uint *)(param_1 + 0x100) = uStack00000038;
  if (uStack00000038 != 0) {
    uVar9 = (ulonglong)uStack00000038;
    iVar7 = 0;
    if (uStack00000038 == 0) {
      uVar9 = 1;
    }
    do {
      puVar3 = (undefined4 *)(iVar7 + param_3);
      iVar2 = iVar7 + param_1;
      iVar7 = iVar7 + 4;
      *(undefined4 *)(iVar2 + 0x104) = *puVar3;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  iVar7 = 0x48;
  if (7 < uStack00000048) {
    iVar7 = -0x44;
  }
  uVar1 = *(uint *)(&stack0x00000000 + iVar7);
  *(undefined4 *)(param_1 + 0x124) = 0;
  *(undefined4 *)(param_1 + 0x140) = 0;
  *(undefined4 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 300) = 0;
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined4 *)(param_1 + 0x134) = 0;
  *(undefined4 *)(param_1 + 0x138) = 0;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  *(uint *)(param_1 + 0x120) = uVar1;
  if (uVar1 != 0) {
    uVar8 = 0;
    iVar7 = 0;
    uStack00000048 = uVar1;
    do {
      puVar3 = (undefined4 *)(iVar7 + param_5);
      iVar2 = param_1 + iVar7;
      uVar8 = uVar8 + 1;
      iVar7 = iVar7 + 4;
      __s = (char *)*puVar3;
      *(char **)(iVar2 + 0x124) = __s;
      sVar5 = strlen(__s);
      *(size_t *)(iVar2 + 0x144) = sVar5;
    } while (uVar8 < uVar1);
  }
  uVar1 = *(uint *)(param_1 + 0x100);
  if (uVar1 != 0) {
    uVar9 = (ulonglong)uVar1;
    if (uVar1 == 0) {
      uVar9 = 1;
    }
    do {
      iVar7 = *piVar6;
      piVar6 = piVar6 + 1;
      iVar2 = -0x50;
      if (*(byte *)(iVar7 + 0x15) <= *(byte *)(iVar7 + 0x14)) {
        iVar2 = -0x4c;
      }
      puVar4 = (uint *)(&stack0x00000000 + iVar2);
      if (*(uint *)(&stack0x00000000 + iVar2) <= *(uint *)(param_1 + 0x1b0)) {
        puVar4 = (uint *)(param_1 + 0x1b0);
      }
      *(uint *)(param_1 + 0x1b0) = *puVar4;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  return;
}


// 0x051179c (0x14c bytes)
undefined4 FUN_0051179c(int param_1,uint param_2,int param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  do {
    iVar1 = 0;
    iVar2 = param_1 + 0x1b0;
    piVar3 = (int *)(param_1 + 0x1c8);
    while( true ) {
      iVar1 = iVar1 + 1;
      if ((((piVar3[-5] != 0) && (piVar3[-4] == param_3)) && (*piVar3 == param_4)) &&
         (((piVar3[1] == param_5 && (piVar3[2] == param_6)) && (*(byte *)(piVar3 + -1) == param_2)))
         ) break;
      iVar2 = iVar2 + 0x20;
      piVar3 = piVar3 + 8;
      if (2 < iVar1) {
        return 0;
      }
    }
    if (*(int *)(iVar2 + 0x10) == 0) {
      *(int *)(iVar2 + 0xc) = *(int *)(iVar2 + 0xc) + 1;
      return *(undefined4 *)(iVar2 + 4);
    }
    FUN_0052e49c(param_1 + 0x198,param_1 + 0x170,0);
  } while( true );
}


// 0x05118e8 (0x198 bytes)
// strings: 006671d8: 'dearchiver' | 006671e8: 'dearchiver_rwlock' | 00667200: 'dearchiver_manifests_lock' | 00667220: 'dearchiver_readgroup' | 00667238: 'dearchiver_bufferLock' | 00667250: 'dearchiver_bufferCond' | 00667270: 'dearchiver_lookupCacheLock'

void FUN_005118e8(undefined4 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                 uint param_5,undefined4 param_6)

{
  undefined *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  undefined4 uStack00000040;
  undefined4 uStack00000058;
  
  uStack00000040 = param_3;
  uStack00000058 = param_6;
  FUN_00519ecc(param_1,PTR_s_dearchiver_0071a9f0,param_2);
  puVar1 = PTR_s_dearchiver_rwlock_0071a9f8;
  *param_1 = PTR_PTR_0071a9f4;
  FUN_0052e1dc(param_1 + 0x26,puVar1);
  FUN_0052d370(param_1 + 0x2c,PTR_s_dearchiver_manifests_lock_0071a9fc);
  FUN_0052d370(param_1 + 0x36,PTR_s_dearchiver_readgroup_0071aa00);
  puVar1 = PTR_s_dearchiver_bufferLock_0071aa04;
  param_1[0x46] = param_4;
  param_1[0x47] = param_5 & 0xff;
  param_1[0x59] = 0;
  FUN_0052d370(param_1 + 0x5c,puVar1);
  FUN_0052d19c(param_1 + 0x66,PTR_s_dearchiver_bufferCond_0071aa08,PTR_DAT_0071aa0c,param_1 + 0x5c);
  puVar1 = PTR_s_dearchiver_lookupCacheLock_0071aa10;
  param_1[0x85] = *(undefined4 *)(PTR_DAT_0071a9d8 + 8);
  param_1[0x6c] = 7;
  param_1[0x8e] = 0;
  param_1[0x8d] = 4;
  param_1[0x86] = 0x10630102;
  param_1[0x8c] = param_1 + 0x88;
  param_1[0x87] = param_1 + 0x88;
  FUN_0052d370(param_1 + 0x90,puVar1);
  lVar3 = 8;
  puVar2 = param_1 + 0x9a;
  do {
    *(undefined1 *)(puVar2 + 1) = 0;
    *puVar2 = 0;
    lVar3 = lVar3 + -1;
    puVar2 = puVar2 + 0x43;
  } while (lVar3 != 0);
  FUN_00511524(param_1,1,&stack0x00000040,1,&stack0x00000058);
  return;
}


// 0x0511a80 (0x1b4 bytes)
// strings: 006671d8: 'dearchiver' | 006671e8: 'dearchiver_rwlock' | 00667200: 'dearchiver_manifests_lock' | 00667220: 'dearchiver_readgroup' | 00667238: 'dearchiver_bufferLock' | 00667250: 'dearchiver_bufferCond' | 00667270: 'dearchiver_lookupCacheLock'

void FUN_00511a80(u8 *param_1,u8 *param_2,int param_3,u8 *param_4,int param_5,int param_6,int param_7,u8 *param_8)

{
  undefined *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  
  FUN_00519ecc(param_1,PTR_s_dearchiver_0071a9f0,param_2);
  puVar1 = PTR_s_dearchiver_rwlock_0071a9f8;
  *param_1 = PTR_PTR_0071a9f4;
  FUN_0052e1dc(param_1 + 0x26,puVar1);
  FUN_0052d370(param_1 + 0x2c,PTR_s_dearchiver_manifests_lock_0071a9fc);
  FUN_0052d370(param_1 + 0x36,PTR_s_dearchiver_readgroup_0071aa00);
  puVar1 = PTR_s_dearchiver_bufferLock_0071aa04;
  param_1[0x46] = param_5;
  param_1[0x47] = param_6 & 0xff;
  param_1[0x59] = 0;
  FUN_0052d370(param_1 + 0x5c,puVar1);
  FUN_0052d19c(param_1 + 0x66,PTR_s_dearchiver_bufferCond_0071aa08,PTR_DAT_0071aa0c,param_1 + 0x5c);
  puVar1 = PTR_s_dearchiver_lookupCacheLock_0071aa10;
  param_1[0x85] = *(undefined4 *)(PTR_DAT_0071a9d8 + 8);
  param_1[0x8d] = 4;
  param_1[0x8e] = 0;
  param_1[0x86] = 0x10630102;
  param_1[0x8c] = param_1 + 0x88;
  param_1[0x87] = param_1 + 0x88;
  FUN_0052d370(param_1 + 0x90,puVar1);
  lVar3 = 8;
  puVar2 = param_1 + 0x9a;
  do {
    *(undefined1 *)(puVar2 + 1) = 0;
    *puVar2 = 0;
    lVar3 = lVar3 + -1;
    puVar2 = puVar2 + 0x43;
  } while (lVar3 != 0);
  FUN_00511524(param_1,param_3,param_4,param_7,param_8);
  return;
}


// 0x0511c34 (0x1b4 bytes)
// strings: 006671d8: 'dearchiver' | 006671e8: 'dearchiver_rwlock' | 00667200: 'dearchiver_manifests_lock' | 00667220: 'dearchiver_readgroup' | 00667238: 'dearchiver_bufferLock' | 00667250: 'dearchiver_bufferCond' | 00667270: 'dearchiver_lookupCacheLock'

void FUN_00511c34(undefined4 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,uint param_6,undefined4 param_7,undefined4 param_8)

{
  undefined *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  
  FUN_00519ecc(param_1,PTR_s_dearchiver_0071a9f0,param_2);
  puVar1 = PTR_s_dearchiver_rwlock_0071a9f8;
  *param_1 = PTR_PTR_0071a9f4;
  FUN_0052e1dc(param_1 + 0x26,puVar1);
  FUN_0052d370(param_1 + 0x2c,PTR_s_dearchiver_manifests_lock_0071a9fc);
  FUN_0052d370(param_1 + 0x36,PTR_s_dearchiver_readgroup_0071aa00);
  puVar1 = PTR_s_dearchiver_bufferLock_0071aa04;
  param_1[0x46] = param_5;
  param_1[0x47] = param_6 & 0xff;
  param_1[0x59] = 0;
  FUN_0052d370(param_1 + 0x5c,puVar1);
  FUN_0052d19c(param_1 + 0x66,PTR_s_dearchiver_bufferCond_0071aa08,PTR_DAT_0071aa0c,param_1 + 0x5c);
  puVar1 = PTR_s_dearchiver_lookupCacheLock_0071aa10;
  param_1[0x85] = *(undefined4 *)(PTR_DAT_0071a9d8 + 8);
  param_1[0x8d] = 4;
  param_1[0x8e] = 0;
  param_1[0x86] = 0x10630102;
  param_1[0x8c] = param_1 + 0x88;
  param_1[0x87] = param_1 + 0x88;
  FUN_0052d370(param_1 + 0x90,puVar1);
  lVar3 = 8;
  puVar2 = param_1 + 0x9a;
  do {
    *(undefined1 *)(puVar2 + 1) = 0;
    *puVar2 = 0;
    lVar3 = lVar3 + -1;
    puVar2 = puVar2 + 0x43;
  } while (lVar3 != 0);
  FUN_00511524(param_1,param_3,param_4,param_7,param_8);
  return;
}


// 0x0511de8 (0x1a4 bytes)
// strings: 006671d8: 'dearchiver' | 006671e8: 'dearchiver_rwlock' | 00667200: 'dearchiver_manifests_lock' | 00667220: 'dearchiver_readgroup' | 00667238: 'dearchiver_bufferLock' | 00667250: 'dearchiver_bufferCond' | 00667270: 'dearchiver_lookupCacheLock'

void FUN_00511de8(undefined4 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,uint param_6,undefined4 param_7)

{
  undefined *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  undefined4 uStack00000060;
  
  uStack00000060 = param_7;
  FUN_00519ecc(param_1,PTR_s_dearchiver_0071a9f0,param_2);
  puVar1 = PTR_s_dearchiver_rwlock_0071a9f8;
  *param_1 = PTR_PTR_0071a9f4;
  FUN_0052e1dc(param_1 + 0x26,puVar1);
  FUN_0052d370(param_1 + 0x2c,PTR_s_dearchiver_manifests_lock_0071a9fc);
  FUN_0052d370(param_1 + 0x36,PTR_s_dearchiver_readgroup_0071aa00);
  puVar1 = PTR_s_dearchiver_bufferLock_0071aa04;
  param_1[0x46] = param_5;
  param_1[0x47] = param_6 & 0xff;
  param_1[0x59] = 0;
  FUN_0052d370(param_1 + 0x5c,puVar1);
  FUN_0052d19c(param_1 + 0x66,PTR_s_dearchiver_bufferCond_0071aa08,PTR_DAT_0071aa0c,param_1 + 0x5c);
  puVar1 = PTR_s_dearchiver_lookupCacheLock_0071aa10;
  param_1[0x85] = *(undefined4 *)(PTR_DAT_0071a9d8 + 8);
  param_1[0x8d] = 4;
  param_1[0x8e] = 0;
  param_1[0x86] = 0x10630102;
  param_1[0x8c] = param_1 + 0x88;
  param_1[0x87] = param_1 + 0x88;
  FUN_0052d370(param_1 + 0x90,puVar1);
  lVar3 = 8;
  puVar2 = param_1 + 0x9a;
  do {
    *(undefined1 *)(puVar2 + 1) = 0;
    *puVar2 = 0;
    lVar3 = lVar3 + -1;
    puVar2 = puVar2 + 0x43;
  } while (lVar3 != 0);
  FUN_00511524(param_1,param_3,param_4,1,&stack0x00000060);
  return;
}


// 0x0511f8c (0x1a4 bytes)
// strings: 006671d8: 'dearchiver' | 006671e8: 'dearchiver_rwlock' | 00667200: 'dearchiver_manifests_lock' | 00667220: 'dearchiver_readgroup' | 00667238: 'dearchiver_bufferLock' | 00667250: 'dearchiver_bufferCond' | 00667270: 'dearchiver_lookupCacheLock'

void FUN_00511f8c(undefined4 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,uint param_6,undefined4 param_7)

{
  undefined *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  undefined4 uStack00000060;
  
  uStack00000060 = param_7;
  FUN_00519ecc(param_1,PTR_s_dearchiver_0071a9f0,param_2);
  puVar1 = PTR_s_dearchiver_rwlock_0071a9f8;
  *param_1 = PTR_PTR_0071a9f4;
  FUN_0052e1dc(param_1 + 0x26,puVar1);
  FUN_0052d370(param_1 + 0x2c,PTR_s_dearchiver_manifests_lock_0071a9fc);
  FUN_0052d370(param_1 + 0x36,PTR_s_dearchiver_readgroup_0071aa00);
  puVar1 = PTR_s_dearchiver_bufferLock_0071aa04;
  param_1[0x46] = param_5;
  param_1[0x47] = param_6 & 0xff;
  param_1[0x59] = 0;
  FUN_0052d370(param_1 + 0x5c,puVar1);
  FUN_0052d19c(param_1 + 0x66,PTR_s_dearchiver_bufferCond_0071aa08,PTR_DAT_0071aa0c,param_1 + 0x5c);
  puVar1 = PTR_s_dearchiver_lookupCacheLock_0071aa10;
  param_1[0x85] = *(undefined4 *)(PTR_DAT_0071a9d8 + 8);
  param_1[0x8d] = 4;
  param_1[0x8e] = 0;
  param_1[0x86] = 0x10630102;
  param_1[0x8c] = param_1 + 0x88;
  param_1[0x87] = param_1 + 0x88;
  FUN_0052d370(param_1 + 0x90,puVar1);
  lVar3 = 8;
  puVar2 = param_1 + 0x9a;
  do {
    *(undefined1 *)(puVar2 + 1) = 0;
    *puVar2 = 0;
    lVar3 = lVar3 + -1;
    puVar2 = puVar2 + 0x43;
  } while (lVar3 != 0);
  FUN_00511524(param_1,param_3,param_4,1,&stack0x00000060);
  return;
}


// 0x0512130 (0x198 bytes)
// strings: 006671d8: 'dearchiver' | 006671e8: 'dearchiver_rwlock' | 00667200: 'dearchiver_manifests_lock' | 00667220: 'dearchiver_readgroup' | 00667238: 'dearchiver_bufferLock' | 00667250: 'dearchiver_bufferCond' | 00667270: 'dearchiver_lookupCacheLock'

void FUN_00512130(undefined4 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                 uint param_5,undefined4 param_6)

{
  undefined *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  undefined4 uStack00000040;
  undefined4 uStack00000058;
  
  uStack00000040 = param_3;
  uStack00000058 = param_6;
  FUN_00519ecc(param_1,PTR_s_dearchiver_0071a9f0,param_2);
  puVar1 = PTR_s_dearchiver_rwlock_0071a9f8;
  *param_1 = PTR_PTR_0071a9f4;
  FUN_0052e1dc(param_1 + 0x26,puVar1);
  FUN_0052d370(param_1 + 0x2c,PTR_s_dearchiver_manifests_lock_0071a9fc);
  FUN_0052d370(param_1 + 0x36,PTR_s_dearchiver_readgroup_0071aa00);
  puVar1 = PTR_s_dearchiver_bufferLock_0071aa04;
  param_1[0x46] = param_4;
  param_1[0x47] = param_5 & 0xff;
  param_1[0x59] = 0;
  FUN_0052d370(param_1 + 0x5c,puVar1);
  FUN_0052d19c(param_1 + 0x66,PTR_s_dearchiver_bufferCond_0071aa08,PTR_DAT_0071aa0c,param_1 + 0x5c);
  puVar1 = PTR_s_dearchiver_lookupCacheLock_0071aa10;
  param_1[0x85] = *(undefined4 *)(PTR_DAT_0071a9d8 + 8);
  param_1[0x6c] = 7;
  param_1[0x8e] = 0;
  param_1[0x8d] = 4;
  param_1[0x86] = 0x10630102;
  param_1[0x8c] = param_1 + 0x88;
  param_1[0x87] = param_1 + 0x88;
  FUN_0052d370(param_1 + 0x90,puVar1);
  lVar3 = 8;
  puVar2 = param_1 + 0x9a;
  do {
    *(undefined1 *)(puVar2 + 1) = 0;
    *puVar2 = 0;
    lVar3 = lVar3 + -1;
    puVar2 = puVar2 + 0x43;
  } while (lVar3 != 0);
  FUN_00511524(param_1,1,&stack0x00000040,1,&stack0x00000058);
  return;
}


// SDK libfios.a(fios_dearchive.ppu.o): cell::fios::dearchiver::pathIsArchive(char const*)  [fuzzy 1.000 match]
// 0x05122c8 (0xf0 bytes)
undefined4 FUN_005122c8(int param_1,char *param_2)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  size_t sVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  
  sVar4 = strlen(param_2);
  iVar1 = *(int *)(param_1 + 0x120);
  if (iVar1 != 0) {
    puVar6 = (uint *)(param_1 + 0x144);
    iVar7 = 0;
    do {
      uVar2 = *puVar6;
      puVar3 = puVar6 + -8;
      iVar7 = iVar7 + 1;
      puVar6 = puVar6 + 1;
      if ((uVar2 < sVar4) &&
         (iVar5 = FUN_005ccb28(*puVar3,param_2 + (sVar4 - uVar2),uVar2), iVar5 == 0)) {
        return 1;
      }
    } while (iVar7 != iVar1);
  }
  return 0;
}


// SDK libfios.a(fios_dearchive.ppu.o): cell::fios::dearchiver::rebuildManifestPathTable()  [fuzzy 1.000 match]
// 0x05123b8 (0x310 bytes)
undefined4 FUN_005123b8(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  undefined4 *puVar6;
  bool bVar7;
  size_t sVar8;
  int iVar9;
  int iVar10;
  int iVar12;
  longlong lVar11;
  char *pcVar13;
  ulonglong uVar14;
  uint uVar15;
  char *__s;
  ulonglong uVar16;
  
  puVar1 = *(undefined4 **)(param_1 + 0x164);
  *(undefined4 *)(param_1 + 0x238) = 0;
  do {
    if (puVar1 == (undefined4 *)0x0) {
      FUN_005c8308(*(undefined4 *)(param_1 + 0x230),*(undefined4 *)(param_1 + 0x238),4,
                   PTR_PTR_0071aa14);
      uVar15 = *(uint *)(param_1 + 0x238);
      if (1 < uVar15) {
        uVar14 = 0;
        uVar5 = *(uint *)(param_1 + 0x230);
        do {
          iVar10 = 0;
          if ((uVar14 & 0xffffffff) < (ulonglong)uVar15) {
            iVar10 = (int)((uVar14 & 0x3fffffff) << 2);
          }
          uVar16 = uVar14 + 1;
          iVar9 = 0;
          if ((uVar16 & 0xffffffff) < (ulonglong)uVar15) {
            iVar9 = (int)((uVar16 & 0x3fffffff) << 2);
          }
          iVar10 = FUN_005cc784(*(undefined4 *)(iVar10 + uVar5),*(undefined4 *)(uVar5 + iVar9));
          if (iVar10 == 0) {
            lVar11 = (ulonglong)uVar5 + (uVar14 & 0x3fffffff) * 4 + 4;
            iVar10 = (int)lVar11;
            while (uVar5 + uVar15 * 4 != iVar10) {
              puVar1 = (undefined4 *)lVar11;
              lVar11 = lVar11 + 4;
              puVar1[-1] = *puVar1;
              iVar10 = (int)lVar11;
            }
            uVar15 = uVar15 - 1;
            *(uint *)(param_1 + 0x238) = uVar15;
            uVar16 = uVar14;
          }
          uVar14 = uVar16;
        } while ((uVar14 & 0xffffffff) < (ulonglong)(uVar15 - 1));
      }
      return 1;
    }
    __s = (char *)puVar1[0x21];
    if (__s != (char *)0x0) {
      pcVar13 = __s + puVar1[0x22];
      for (; __s < pcVar13; __s = __s + sVar8 + 1) {
        uVar15 = *(uint *)(param_1 + 0x238);
        if (*(uint *)(param_1 + 0x234) == uVar15) {
          puVar2 = *(undefined4 **)(param_1 + 0x214);
          iVar10 = uVar15 << 1;
          iVar9 = (*(code *)**(undefined4 **)*puVar2)
                            (puVar2,((ulonglong)uVar15 & 0x1fffffff) << 3,
                             *(undefined4 *)(param_1 + 0x218),0,0);
          bVar7 = false;
          if (iVar9 != 0) {
            uVar15 = *(uint *)(param_1 + 0x238);
            if (uVar15 == 0) {
              iVar3 = *(int *)(param_1 + 0x230);
            }
            else {
              iVar3 = *(int *)(param_1 + 0x230);
              uVar14 = (ulonglong)uVar15;
              iVar12 = 0;
              if (uVar15 == 0) {
                uVar14 = 1;
              }
              do {
                puVar2 = (undefined4 *)(iVar12 + iVar3);
                puVar6 = (undefined4 *)(iVar12 + iVar9);
                iVar12 = iVar12 + 4;
                *puVar6 = *puVar2;
                uVar14 = uVar14 - 1;
              } while (uVar14 != 0);
            }
            if (*(int *)(param_1 + 0x21c) != iVar3) {
              piVar4 = *(int **)(param_1 + 0x214);
              (*(code *)**(undefined4 **)(*piVar4 + 4))
                        (piVar4,iVar3,*(undefined4 *)(param_1 + 0x218),0,0);
              uVar15 = *(uint *)(param_1 + 0x238);
            }
            *(int *)(param_1 + 0x230) = iVar9;
            *(int *)(param_1 + 0x234) = iVar10;
            goto LAB_00512420;
          }
        }
        else {
LAB_00512420:
          bVar7 = true;
          *(uint *)(param_1 + 0x238) = uVar15 + 1;
          *(char **)(uVar15 * 4 + *(int *)(param_1 + 0x230)) = __s;
        }
        if (!bVar7) {
          return 0;
        }
        sVar8 = strlen(__s);
      }
    }
    puVar1 = (undefined4 *)*puVar1;
  } while( true );
}


// 0x05126c8 (0x88 bytes)
void FUN_005126c8(int param_1,uint param_2)

{
  lwmutex_lock_checked(param_1 + 0x240);
  memset(param_1 + 0x268,0,0x860);
  sync(1);
  *(uint *)(param_1 + 0x11c) = param_2 & 0xff;
  lwmutex_unlock_checked(param_1 + 0x240);
  return;
}


// SDK libfios.a(fios_dearchive.ppu.o): cell::fios::dearchiver::countOpenFilesInArchive(char const*) const  [fuzzy 1.000 match]
// 0x0512750 (0xd0 bytes)
undefined4 FUN_00512750(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  byte in_cr0;
  byte in_cr1;
  byte in_cr2;
  byte in_cr3;
  byte unaff_cr4;
  byte in_cr5;
  byte in_cr6;
  byte in_cr7;
  uint uStack00000008;
  
  uStack00000008 =
       (uint)(in_cr0 & 0xf) << 0x1c | (uint)(in_cr1 & 0xf) << 0x18 | (uint)(in_cr2 & 0xf) << 0x14 |
       (uint)(in_cr3 & 0xf) << 0x10 | (uint)(unaff_cr4 & 0xf) << 0xc | (uint)(in_cr5 & 0xf) << 8 |
       (uint)(in_cr6 & 0xf) << 4 | (uint)(in_cr7 & 0xf);
  FUN_0052ce28(param_1 + 0x98);
  puVar1 = *(undefined4 **)(param_1 + 0x164);
  do {
    if (puVar1 == (undefined4 *)0x0) {
LAB_005127d0:
      uVar3 = 0;
LAB_005127d4:
      FUN_0052cd7c(param_1 + 0x98);
      return uVar3;
    }
    iVar2 = FUN_005cc784(puVar1 + 0x23,param_2);
    if (iVar2 == 0) {
      if (puVar1 != (undefined4 *)0x0) {
        uVar3 = puVar1[0x1f];
        instructionSynchronize();
        goto LAB_005127d4;
      }
      goto LAB_005127d0;
    }
    puVar1 = (undefined4 *)*puVar1;
  } while( true );
}


// SDK libfios.a(fios_dearchive.ppu.o): cell::fios::dearchiver::bufferInvalidateArchive(cell::fios::dearchiver::ArchiveTracker*)  [fuzzy 1.000 match]
// 0x0512820 (0xd4 bytes)
void FUN_00512820(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1 + 0x170;
  lwmutex_lock_checked(iVar2);
  if (*(int *)(param_1 + 0x1c8) == param_2) {
    *(undefined4 *)(param_1 + 0x1c8) = 0;
    iVar1 = *(int *)(param_1 + 0x1e8);
  }
  else {
    iVar1 = *(int *)(param_1 + 0x1e8);
  }
  if (iVar1 == param_2) {
    *(undefined4 *)(param_1 + 0x1e8) = 0;
    iVar1 = *(int *)(param_1 + 0x208);
  }
  else {
    iVar1 = *(int *)(param_1 + 0x208);
  }
  if (iVar1 != param_2) {
    lwmutex_unlock_checked(iVar2);
    return;
  }
  *(undefined4 *)(param_1 + 0x208) = 0;
  lwmutex_unlock_checked(iVar2);
  return;
}


// SDK libfios.a(fios_dearchive.ppu.o): cell::fios::dearchiver::bufferRelease(unsigned char*, bool)  [fuzzy 1.000 match]
// 0x05128f4 (0x140 bytes)
void FUN_005128f4(int param_1,int param_2,char param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  
  if (param_2 == 0) {
    return;
  }
  iVar2 = param_1 + 0x170;
  lwmutex_lock_checked(iVar2);
  lVar3 = 0;
  if ((*(int *)(param_1 + 0x1b4) != param_2) && (lVar3 = 1, *(int *)(param_1 + 0x1d4) != param_2)) {
    if (*(int *)(param_1 + 500) != param_2) {
      lwmutex_unlock_checked(iVar2);
      return;
    }
    lVar3 = 2;
  }
  iVar1 = (int)(lVar3 << 5);
  iVar4 = param_1 + iVar1 + 0x1b0;
  if (*(int *)(iVar4 + 0x10) == 0) {
    *(int *)(iVar4 + 0xc) = *(int *)(iVar4 + 0xc) + -1;
  }
  else {
    *(int *)(iVar4 + 0x10) = *(int *)(iVar4 + 0x10) + -1;
  }
  if (param_3 == '\0') {
    *(undefined4 *)(param_1 + iVar1 + 0x1c8) = 0;
  }
  FUN_0052dc40(param_1 + 0x198);
  lwmutex_unlock_checked(iVar2);
  return;
}


// 0x0512a34 (0x7c bytes)
void FUN_00512a34(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  FUN_005128f4(param_1,*param_2);
  *param_2 = 0;
  FUN_005128f4(param_1,param_2[1],param_3);
  param_2[1] = 0;
  return;
}


// SDK libfios.a(fios_dearchive.ppu.o): cell::fios::dearchiver::bufferFilled(unsigned char*)  [fuzzy 1.000 match]
// 0x0512ab0 (0xfc bytes)
// strings: 00512b58: 'U)(48' (raw)

void FUN_00512ab0(int param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  
  iVar1 = param_1 + 0x170;
  if (param_2 != 0) {
    lwmutex_lock_checked(iVar1);
    lVar2 = 0;
    if (((*(int *)(param_1 + 0x1b4) == param_2) || (lVar2 = 1, *(int *)(param_1 + 0x1d4) == param_2)
        ) || (lVar2 = 2, *(int *)(param_1 + 500) == param_2)) {
      iVar3 = param_1 + (int)(lVar2 << 5) + 0x1b0;
      *(undefined4 *)(iVar3 + 0xc) = 1;
      *(undefined4 *)(iVar3 + 0x10) = 0;
      FUN_0052dc40(param_1 + 0x198);
      lwmutex_unlock_checked(iVar1);
      return;
    }
    lwmutex_unlock_checked(iVar1);
  }
  return;
}


// 0x0512bac (0x264 bytes)
int FUN_00512bac(int param_1,char param_2,char param_3,uint param_4,undefined4 param_5,
                undefined4 param_6,undefined4 param_7,undefined1 *param_8)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  
  iVar2 = param_1 + 0x170;
  lwmutex_lock_checked(iVar2);
  *param_8 = 0;
  do {
    if ((param_3 == '\0') &&
       (iVar5 = FUN_0051179c(param_1,param_2,param_4,param_5,param_6,param_7), iVar5 != 0)) {
      *param_8 = 1;
      goto LAB_00512d94;
    }
    lVar7 = 0;
    iVar5 = 0;
    do {
      iVar3 = param_1 + iVar5;
      bVar1 = iVar5 != 0x40;
      iVar5 = iVar5 + 0x20;
      if (0 < *(int *)(iVar3 + 0x1bc) + *(int *)(iVar3 + 0x1c0)) {
        lVar7 = lVar7 - ((longlong)(-(ulonglong)*(byte *)(iVar3 + 0x1c4) << 0x20) >> 0x3f);
      }
    } while (bVar1);
    if ((param_2 == '\0') || ((int)lVar7 < 2)) {
      if ((*(int *)(param_1 + 0x1bc) == 0) && (uVar4 = *(uint *)(param_1 + 0x1c0), uVar4 == 0))
      goto LAB_00512d2c;
      if ((*(int *)(param_1 + 0x1dc) == 0) && (*(int *)(param_1 + 0x1e0) == 0)) {
        uVar4 = 1;
        goto LAB_00512d2c;
      }
      if ((*(int *)(param_1 + 0x1fc) == 0) && (*(int *)(param_1 + 0x200) == 0)) break;
    }
    FUN_0052e49c(param_1 + 0x198,iVar2,0);
  } while( true );
  uVar4 = 2;
LAB_00512d2c:
  iVar3 = (int)(((ulonglong)uVar4 & 0x7ffffff) << 5);
  iVar8 = param_1 + iVar3 + 0x1b0;
  if ((*(int *)(iVar8 + 4) == 0) || (*(uint *)(iVar8 + 8) < param_4)) {
    iVar5 = 0;
    iVar6 = FUN_00510b8c(param_1,*(int *)(iVar8 + 4),param_4);
    *(int *)(iVar8 + 4) = iVar6;
    if (iVar6 == 0) goto LAB_00512d94;
  }
  iVar8 = param_1 + iVar3 + 0x1b0;
  param_1 = param_1 + iVar3 + 0x1c0;
  iVar5 = *(int *)(iVar8 + 4);
  *(undefined4 *)(param_1 + 0x10) = param_7;
  *(undefined4 *)(iVar8 + 0xc) = 0;
  *(undefined4 *)(iVar8 + 0x10) = 1;
  *(char *)(param_1 + 4) = param_2;
  *(uint *)(iVar8 + 8) = param_4;
  *(undefined4 *)(param_1 + 8) = param_5;
  *(undefined4 *)(param_1 + 0xc) = param_6;
LAB_00512d94:
  lwmutex_unlock_checked(iVar2);
  return iVar5;
}


// 0x0512e10 (0xb0 bytes)
undefined4
FUN_00512e10(int param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6)

{
  undefined4 uVar1;
  
  lwmutex_lock_checked(param_1 + 0x170);
  uVar1 = FUN_0051179c(param_1,param_2,param_3,param_4,param_5,param_6);
  lwmutex_unlock_checked(param_1 + 0x170);
  return uVar1;
}


// SDK libfios.a(fios_dearchive.ppu.o): cell::fios::dearchiver::freeReadBuffers()  [fuzzy 1.000 match]
// 0x0512ec0 (0xf4 bytes)
void FUN_00512ec0(int param_1)

{
  bool bVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  
  lwmutex_lock_checked(param_1 + 0x170);
  puVar2 = PTR_DAT_0071a9d8;
  iVar4 = 0;
  do {
    iVar3 = iVar4 + param_1;
    if (*(int *)(iVar3 + 0x1b4) != 0) {
      (*(code *)**(undefined4 **)(**(int **)(puVar2 + 8) + 4))
                (*(int **)(puVar2 + 8),*(int *)(iVar3 + 0x1b4),
                 *(uint *)(param_1 + 0x1b0) | 0x10640100,0,0);
    }
    bVar1 = iVar4 != 0x40;
    *(undefined4 *)(iVar3 + 0x1c8) = 0;
    *(undefined4 *)(iVar3 + 0x1b4) = 0;
    iVar4 = iVar4 + 0x20;
  } while (bVar1);
  lwmutex_unlock_checked(param_1 + 0x170);
  return;
}


// SDK libfios.a(fios_dearchive.ppu.o): cell::fios::dearchiver::freeTOCs()  [fuzzy 1.000 match]
// 0x0512fb4 (0x118 bytes)
void FUN_00512fb4(int param_1)

{
  undefined4 *puVar1;
  undefined *puVar2;
  
  _ZN4cell4fios8platform6rwlock9writeLockEv(param_1 + 0x98);
  puVar2 = PTR_DAT_0071a9d8;
  puVar1 = *(undefined4 **)(param_1 + 0x164);
  while (puVar1 != (undefined4 *)0x0) {
    if (puVar1[0x20] != 0) {
      (*(code *)**(undefined4 **)(**(int **)(puVar2 + 8) + 4))
                (*(int **)(puVar2 + 8),puVar1[0x20],0x10610200,0,0);
    }
    puVar1[0x20] = 0;
    puVar1[0x7b] = 0;
    puVar1 = (undefined4 *)*puVar1;
  }
  lwmutex_lock_checked(param_1 + 0x240);
  memset(param_1 + 0x268,0,0x860);
  lwmutex_unlock_checked(param_1 + 0x240);
  FUN_0052cc20(param_1 + 0x98);
  return;
}


// 0x05130cc (0x154 bytes)
void FUN_005130cc(int *param_1)

{
  *param_1 = (int)PTR_PTR_0071a9f4;
  FUN_00512fb4(param_1);
  FUN_00512ec0(param_1);
  (*(code *)**(undefined4 **)(*param_1 + 0x1c))(param_1);
  FUN_0052df14(param_1 + 0x90);
  param_1[0x8e] = 0;
  if (param_1[0x87] != param_1[0x8c]) {
    (*(code *)**(undefined4 **)(*(int *)param_1[0x85] + 4))
              ((int *)param_1[0x85],param_1[0x8c],param_1[0x86],0,0);
  }
  FUN_0052d0e8(param_1 + 0x66);
  FUN_0052df14(param_1 + 0x5c);
  FUN_0052df14(param_1 + 0x36);
  FUN_0052df14(param_1 + 0x2c);
  FUN_0052e5f8(param_1 + 0x26);
  FUN_0051ad6c(param_1);
  FUN_00510704(param_1,0x10000100,3);
  return;
}


// SDK libfios.a(fios_dearchive.ppu.o): cell::fios::dearchiver::freeManifests()  [fuzzy 1.000 match]
// 0x0513220 (0x100 bytes)
void FUN_00513220(int param_1)

{
  undefined4 *puVar1;
  undefined *puVar2;
  
  FUN_0052ce28(param_1 + 0x98);
  lwmutex_lock_checked(param_1 + 0xb0);
  *(undefined4 *)(param_1 + 0x238) = 0;
  puVar2 = PTR_DAT_0071a9d8;
  puVar1 = *(undefined4 **)(param_1 + 0x164);
  while (puVar1 != (undefined4 *)0x0) {
    if (puVar1[0x21] != 0) {
      (*(code *)**(undefined4 **)(**(int **)(puVar2 + 8) + 4))
                (*(int **)(puVar2 + 8),puVar1[0x21],0x10620200,0,0);
    }
    puVar1[0x21] = 0;
    puVar1 = (undefined4 *)*puVar1;
  }
  lwmutex_unlock_checked(param_1 + 0xb0);
  FUN_0052cd7c(param_1 + 0x98);
  return;
}


// 0x0513320 (0x13c bytes)
void FUN_00513320(int *param_1)

{
  *param_1 = (int)PTR_PTR_0071a9f4;
  FUN_00512fb4(param_1);
  FUN_00512ec0(param_1);
  (*(code *)**(undefined4 **)(*param_1 + 0x1c))(param_1);
  FUN_0052df14(param_1 + 0x90);
  param_1[0x8e] = 0;
  if (param_1[0x87] != param_1[0x8c]) {
    (*(code *)**(undefined4 **)(*(int *)param_1[0x85] + 4))
              ((int *)param_1[0x85],param_1[0x8c],param_1[0x86],0,0);
  }
  FUN_0052d0e8(param_1 + 0x66);
  FUN_0052df14(param_1 + 0x5c);
  FUN_0052df14(param_1 + 0x36);
  FUN_0052df14(param_1 + 0x2c);
  FUN_0052e5f8(param_1 + 0x26);
  FUN_0051ad6c(param_1);
  return;
}


// 0x051345c (0x13c bytes)
void FUN_0051345c(int *param_1)

{
  *param_1 = (int)PTR_PTR_0071a9f4;
  FUN_00512fb4(param_1);
  FUN_00512ec0(param_1);
  (*(code *)**(undefined4 **)(*param_1 + 0x1c))(param_1);
  FUN_0052df14(param_1 + 0x90);
  param_1[0x8e] = 0;
  if (param_1[0x87] != param_1[0x8c]) {
    (*(code *)**(undefined4 **)(*(int *)param_1[0x85] + 4))
              ((int *)param_1[0x85],param_1[0x8c],param_1[0x86],0,0);
  }
  FUN_0052d0e8(param_1 + 0x66);
  FUN_0052df14(param_1 + 0x5c);
  FUN_0052df14(param_1 + 0x36);
  FUN_0052df14(param_1 + 0x2c);
  FUN_0052e5f8(param_1 + 0x26);
  FUN_0051ad6c(param_1);
  return;
}


// SDK libfios.a(fios_dearchive.ppu.o): cell::fios::dearchiver::executeReadSpecialFromArchive(cell::fios::mediaioparams*, cell::fios::dearchiver::ArchiveTracker*, unsigned int)  [exact match]
// 0x0513598 (0x404 bytes)
// strings: 00667290: 'FIOS dearchiver: unrecognized mediarequest %d in executeReadSpecialFromArchive\n'

void FUN_00513598(int param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  bool bVar7;
  GPiece<16> auVar8;
  GPiece<16> auVar9;
  int *piVar10;
  int *piVar11;
  undefined4 uVar12;
  int iVar13;
  undefined8 uVar14;
  int *piVar15;
  GPiece<16> local_c0;
  GPiece<16> local_b0;
  GPiece<16> local_a0;
  GPiece<16> local_90;
  GPiece<16> auStack_80;
  undefined4 local_70;
  undefined2 local_6c;
  
  piVar1 = *(int **)(param_2 + 0x24);
  iVar2 = *piVar1;
  if ((1 < iVar2 - 0x12U) && (iVar2 != 10)) {
    _ZN4cell4fios8platform10FIOSprintfEPKcz(PTR_s_FIOS_dearchiver__unrecognized_me_0071aa18,iVar2);
    piVar1[1] = -0x7ffef8f3;
    return;
  }
  iVar2 = *(int *)(param_3 + 0x20);
  piVar10 = piVar1 + 4;
  iVar3 = *(int *)(param_3 + 0x80);
  iVar6 = *(int *)(param_3 + 0x50);
  iVar13 = *(int *)(param_3 + 0x68);
  iVar4 = *(int *)(param_3 + 0x58);
  uVar14 = *(undefined8 *)(param_3 + 0x60);
  piVar1[5] = *(int *)(param_3 + 0x54);
  *piVar10 = iVar6;
  piVar1[6] = iVar4;
  *(undefined8 *)(piVar1 + 8) = uVar14;
  piVar1[10] = iVar13;
  uVar14 = FUN_005113b4(param_1,piVar1,param_4 * iVar2 + iVar3,param_3);
  *(undefined8 *)(piVar1 + 0xe) = uVar14;
  piVar15 = (int *)PTR_DAT_0071aa1c;
  if (piVar1[1] == -0x7ffef8ff) {
    local_c0 = ZEXT816(0);
    auStack_80 = (GPiece<16>)0x0;
    local_70 = 0;
    local_6c = 0;
    local_b0 = (GPiece<16>)0x0;
    bVar7 = false;
    local_a0 = (GPiece<16>)0x0;
    param_3 = param_3 + 0x8c;
    local_90 = (GPiece<16>)0x0;
    uVar12 = _ZN4cell4fios8pathhashEPKc(0);
    auVar9 = local_b0;
    auVar8 = local_c0;
    piVar15 = (int *)PTR_DAT_0071aa1c;
    local_c0.piece<12,4>() = uVar12;
    local_b0.piece<4,4>() = *(undefined4 *)(PTR_DAT_0071aa1c + 4);
    local_b0.piece<0,4>() = *(undefined4 *)PTR_DAT_0071aa1c;
    local_b0.piece<12,4>() = auVar9.piece<12,4>();
    local_b0.piece<8,4>() = *(undefined4 *)(PTR_DAT_0071aa1c + 8);
    local_a0.piece<8,4>() = *(undefined4 *)(PTR_DAT_0071aa1c + 0x18);
    local_a0.piece<0,8>() = *(undefined8 *)(PTR_DAT_0071aa1c + 0x10);
    if (*piVar1 == 10) {
      local_90 = *(undefined1 (*) [16])(piVar1 + 0xc);
      local_b0.piece<4,4>() = piVar1[5];
      local_b0.piece<0,4>() = *piVar10;
      local_b0.piece<8,4>() = piVar1[6];
      local_a0.piece<8,4>() = piVar1[10];
      local_a0.piece<0,8>() = *(undefined8 *)(piVar1 + 8);
      local_c0.piece<0,8>() = auVar8.piece<0,8>();
      local_c0.piece<8,4>() = param_3;
      uVar12 = _ZN4cell4fios8pathhashEPKc(param_3);
      piVar5 = *(int **)(param_1 + 0x40);
      local_c0.piece<0,4>() = 9;
      local_c0.piece<12,4>() = uVar12;
      local_6c = 0x201;
      *(undefined1 **)(param_2 + 0x24) = local_c0;
      if (piVar5 != (int *)0x0) {
        (*(code *)**(undefined4 **)(*piVar5 + 0x14))(piVar5,param_2);
      }
      *(int **)(param_2 + 0x24) = piVar1;
      if (local_c0.piece<4,4>() != 0) {
        piVar1[1] = local_c0.piece<4,4>();
        return;
      }
      bVar7 = true;
      *piVar10 = local_b0.piece<0,4>();
      piVar1[5] = local_b0.piece<4,4>();
      piVar1[6] = local_b0.piece<8,4>();
      *(undefined8 *)(piVar1 + 8) = local_a0.piece<0,8>();
      piVar1[10] = local_a0.piece<8,4>();
    }
    piVar11 = piVar1 + 2;
    iVar2 = *piVar11;
    *piVar11 = param_3;
    iVar13 = _ZN4cell4fios8pathhashEPKc(param_3);
    piVar5 = *(int **)(param_2 + 0x24);
    iVar3 = piVar1[3];
    piVar1[3] = iVar13;
    if (((*piVar5 == 0x10) && (piVar5[4] == 0)) && (piVar5[5] == param_1)) {
      piVar5[1] = 0;
    }
    else {
      piVar5 = *(int **)(param_1 + 0x40);
      if (piVar5 != (int *)0x0) {
        (*(code *)**(undefined4 **)(*piVar5 + 0x14))(piVar5,param_2);
      }
    }
    piVar1[3] = iVar3;
    *piVar11 = iVar2;
    if (bVar7) {
      piVar5 = *(int **)(param_1 + 0x40);
      local_c0.piece<0,4>() = 0xd;
      *(undefined1 **)(param_2 + 0x24) = local_c0;
      if (piVar5 != (int *)0x0) {
        (*(code *)**(undefined4 **)(*piVar5 + 0x14))(piVar5,param_2);
      }
      *(int **)(param_2 + 0x24) = piVar1;
    }
  }
  iVar2 = *piVar15;
  iVar3 = piVar15[1];
  iVar13 = piVar15[2];
  uVar14 = *(undefined8 *)(piVar15 + 4);
  piVar1[10] = piVar15[6];
  *piVar10 = iVar2;
  piVar1[5] = iVar3;
  piVar1[6] = iVar13;
  *(undefined8 *)(piVar1 + 8) = uVar14;
  return;
}


// 0x051399c (0x328 bytes)
// strings: 006672e0: "fios read archive failed: archive containing '%s' is already closed!\n"

void FUN_0051399c(uint param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  ulonglong uVar4;
  uint *puVar5;
  ulonglong uVar6;
  int *local_50;
  GPiece<20> local_4c;
  
  puVar5 = *(uint **)(param_2 + 0x24);
  local_50 = (int *)0x0;
  iVar2 = param_1 + 0x98;
  if ((((puVar5[4] == *(uint *)PTR_DAT_0071aa1c) && (puVar5[5] == *(uint *)(PTR_DAT_0071aa1c + 4)))
      && (puVar5[6] == *(uint *)(PTR_DAT_0071aa1c + 8))) &&
     ((*(longlong *)(puVar5 + 8) == *(longlong *)(PTR_DAT_0071aa1c + 0x10) &&
      (puVar5[10] == *(uint *)(PTR_DAT_0071aa1c + 0x18))))) {
    if ((puVar5[0x15] & 0x10000000) != 0) {
      puVar5[1] = 0x80010707;
      return;
    }
    if (((puVar5[0x15] & 0x20000000) != 0) ||
       (uVar4 = (ulonglong)*puVar5 ^ 0x13, uVar6 = (ulonglong)((int)uVar4 >> 0x1f),
       uVar6 = (((uVar6 ^ uVar4) - uVar6) + -1 << 0x20) >> 0x3f, *puVar5 == 0x12)) {
      uVar6 = 1;
    }
    FUN_0052ce28(iVar2);
    cVar3 = FUN_005155c4(param_1,param_2,&local_50,local_4c);
    uVar4 = 0;
    if (cVar3 == '\0') {
LAB_00513b58:
      if (local_50 == (int *)0x0) {
        FUN_0052cd7c(iVar2);
        puVar5 = *(uint **)(param_2 + 0x24);
LAB_00513a10:
        if (((*puVar5 == 0x10) && (puVar5[4] == 0)) && (puVar5[5] == param_1)) {
          puVar5[1] = 0;
          return;
        }
        piVar1 = *(int **)(param_1 + 0x40);
        if (piVar1 == (int *)0x0) {
          return;
        }
        (*(code *)**(undefined4 **)(*piVar1 + 0x14))(piVar1,param_2);
        return;
      }
    }
    else {
      uVar4 = (-(ulonglong)uRam00000080 & 0xffffffff) / (ulonglong)uRam00000020;
    }
    if (uVar6 == 0) {
      FUN_00514124(param_1,param_2,local_50,uVar4);
    }
    else {
      FUN_00513598(param_1,param_2,local_50,uVar4);
    }
  }
  else {
    if (puVar5[4] != param_1) goto LAB_00513a10;
    FUN_0052ce28(iVar2);
    local_50 = (int *)puVar5[5];
    if (local_50 != (int *)0x0) {
      for (piVar1 = *(int **)(param_1 + 0x164); (piVar1 != local_50 && (piVar1 != (int *)0x0));
          piVar1 = (int *)*piVar1) {
      }
      if (local_50 == piVar1) {
        if ((local_50[0x20] == 0) && (cVar3 = FUN_00513cc4(param_1,param_2), cVar3 == '\0')) {
          puVar5[1] = 0x8001070a;
          goto LAB_00513b8c;
        }
        uVar4 = (ulonglong)puVar5[9];
        uVar6 = 0;
        goto LAB_00513b58;
      }
    }
    _ZN4cell4fios8platform10FIOSprintfEPKcz(PTR_s_fios_read_archive_failed__archiv_0071aa20,puVar5[2]);
    puVar5[1] = 0x80010706;
  }
LAB_00513b8c:
  FUN_0052cd7c(iVar2);
  return;
}


// SDK libfios.a(fios_dearchive.ppu.o): cell::fios::dearchiver::loadArchiveTOC(cell::fios::mediaioparams*, cell::fios::dearchiver::ArchiveTracker*)  [exact match]
// 0x0513cc4 (0x2e4 bytes)
// strings: 00667328: 'Allocation of %lu bytes for archive TOC failed!\n' | 00667360: "Reading TOC of '%s' failed! err = %d\n"

undefined4 FUN_00513cc4(undefined4 param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 local_c0;
  int local_bc;
  int local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  longlong local_90;
  ulonglong local_80;
  undefined8 local_78;
  int local_70;
  undefined2 local_6c;
  
  puVar3 = PTR_DAT_0071a9d8;
  uVar4 = 0;
  if (param_3 != 0) {
    uVar4 = 1;
    if (*(int *)(param_3 + 0x80) == 0) {
      uVar1 = *(uint *)(param_3 + 0x1c);
      iVar5 = (*(code *)**(undefined4 **)**(undefined4 **)(PTR_DAT_0071a9d8 + 8))
                        (*(undefined4 **)(PTR_DAT_0071a9d8 + 8),
                         (ulonglong)uVar1 +
                         ((((ulonglong)uVar1 -
                           ((longlong)*(int *)(param_3 + 0x24) * (longlong)*(int *)(param_3 + 0x20)
                           & 0xffffffffU)) / (ulonglong)*(byte *)(param_3 + 0x40) + 0x1f << 0x20) >>
                         0x25) * 5 & 0xffffffff,0x10610200,0,0);
      *(int *)(param_3 + 0x80) = iVar5;
      if (iVar5 == 0) {
        _ZN4cell4fios8platform10FIOSprintfEPKcz(PTR_s_Allocation_of__lu_bytes_for_arch_0071aa24,uVar1);
        uVar4 = 0;
        *(undefined4 *)(param_3 + 0x1ec) = 0;
      }
      else {
        iVar2 = *(int *)(param_2 + 0x24);
        local_b8 = param_3 + 0x8c;
        *(uint *)(param_3 + 0x1ec) = iVar5 + uVar1;
        local_c0 = 10;
        local_bc = -0x7ffef8ff;
        local_a8 = 0;
        local_b4 = 0;
        local_b0 = 0;
        local_ac = 0;
        local_a0 = 0;
        local_98 = 0;
        local_b4 = _ZN4cell4fios8pathhashEPKc(local_b8);
        local_80 = (ulonglong)uVar1;
        local_b0 = *(undefined4 *)(param_3 + 0x50);
        local_a0 = *(undefined8 *)(param_3 + 0x60);
        local_ac = *(undefined4 *)(param_3 + 0x54);
        local_98 = *(undefined4 *)(param_3 + 0x68);
        local_a8 = *(undefined4 *)(param_3 + 0x58);
        local_90 = *(longlong *)(param_3 + 0x70) + *(longlong *)(param_3 + 0x30);
        local_78 = 0;
        if ((*(ushort *)(iVar2 + 0x54) & 0x300) == 0) {
          local_6c = 0xc;
        }
        else {
          local_6c = 0xe;
        }
        *(undefined4 **)(param_2 + 0x24) = &local_c0;
        local_70 = iVar5;
        FUN_0051399c(param_1,param_2);
        *(int *)(param_2 + 0x24) = iVar2;
        if (local_bc == 0) {
          FUN_00530480(param_3 + 8,*(undefined4 *)(param_3 + 0x80),*(undefined4 *)(param_3 + 0x1ec))
          ;
          FUN_0053087c(param_3 + 8,*(undefined4 *)(param_3 + 0x80));
          uVar4 = 1;
        }
        else {
          _ZN4cell4fios8platform10FIOSprintfEPKcz(PTR_s_Reading_TOC_of___s__failed__err___0071aa28,local_b8,local_bc);
          if (*(int *)(param_3 + 0x80) != 0) {
            (*(code *)**(undefined4 **)(**(int **)(puVar3 + 8) + 4))
                      (*(int **)(puVar3 + 8),*(int *)(param_3 + 0x80),0x10610200,0,0);
          }
          uVar4 = 0;
          *(undefined4 *)(param_3 + 0x1ec) = 0;
          *(undefined4 *)(param_3 + 0x80) = 0;
        }
      }
    }
  }
  return uVar4;
}


// SDK libfios.a(fios_dearchive.ppu.o): cell::fios::dearchiver::resolveEmbeds(cell::fios::mediaioparams*, cell::fios::mediarequest*)  [exact match]
// 0x0513fa8 (0x17c bytes)
void FUN_00513fa8(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar7;
  longlong lVar6;
  char cVar8;
  longlong lVar9;
  
  iVar1 = *(int *)(param_3 + 0x10);
  if (param_1 == iVar1) {
    do {
      iVar4 = *(int *)(param_3 + 0x14);
      if ((*(int *)(iVar4 + 0x80) == 0) &&
         (cVar8 = FUN_00513cc4(param_1,param_2,iVar4), cVar8 == '\0')) {
        return;
      }
      iVar5 = *(int *)(iVar4 + 0x20) * (int)*(undefined8 *)(param_3 + 0x20) + *(int *)(iVar4 + 0x80)
      ;
      cVar8 = FUN_005300ac(iVar4 + 8,*(int *)(iVar4 + 0x80),iVar5,*(undefined8 *)(param_3 + 0x30),
                           *(undefined8 *)(param_3 + 0x40));
      if (cVar8 == '\0') {
        return;
      }
      *(int *)(param_3 + 8) = iVar4 + 0x8c;
      uVar7 = _ZN4cell4fios8pathhashEPKc(iVar4 + 0x8c);
      *(undefined4 *)(param_3 + 0xc) = uVar7;
      uVar7 = *(undefined4 *)(iVar4 + 0x58);
      *(undefined4 *)(param_3 + 0x14) = *(undefined4 *)(iVar4 + 0x54);
      *(undefined4 *)(param_3 + 0x18) = uVar7;
      uVar7 = *(undefined4 *)(iVar4 + 0x68);
      uVar2 = *(undefined4 *)(iVar4 + 0x50);
      uVar3 = *(undefined4 *)(iVar4 + 0x80);
      *(undefined8 *)(param_3 + 0x20) = *(undefined8 *)(iVar4 + 0x60);
      *(undefined4 *)(param_3 + 0x10) = uVar2;
      *(undefined4 *)(param_3 + 0x28) = uVar7;
      lVar9 = *(longlong *)(param_3 + 0x30);
      lVar6 = FUN_0052fcec(iVar4 + 8,uVar3,iVar5);
      *(longlong *)(param_3 + 0x30) = lVar9 + lVar6;
    } while (*(int *)(param_3 + 0x10) == iVar1);
  }
  return;
}


// 0x0514124 (0x1028 bytes)
/* WARNING: Removing unreachable block (ram,0x005146b4) */
/* WARNING: Removing unreachable block (ram,0x00514ca0) */
/* WARNING: Removing unreachable block (ram,0x00514cb4) */
/* WARNING: Removing unreachable block (ram,0x00514d54) */
/* WARNING: Removing unreachable block (ram,0x00515118) */
/* WARNING: Removing unreachable block (ram,0x00514d68) */
/* WARNING: Removing unreachable block (ram,0x00515134) */
/* WARNING: Removing unreachable block (ram,0x00514d90) */
/* WARNING: Removing unreachable block (ram,0x00514dbc) */
/* WARNING: Removing unreachable block (ram,0x005150c8) */
/* WARNING: Removing unreachable block (ram,0x005150d0) */
/* WARNING: Removing unreachable block (ram,0x005150dc) */
/* WARNING: Removing unreachable block (ram,0x00514a98) */
/* WARNING: Removing unreachable block (ram,0x00514aa8) */
/* WARNING: Removing unreachable block (ram,0x00515090) */
/* WARNING: Removing unreachable block (ram,0x00514af0) */
/* WARNING: Removing unreachable block (ram,0x00514ff0) */
/* WARNING: Removing unreachable block (ram,0x00514af8) */
/* WARNING: Removing unreachable block (ram,0x00514b18) */
/* WARNING: Removing unreachable block (ram,0x00514b34) */
/* WARNING: Removing unreachable block (ram,0x00514b40) */
/* WARNING: Removing unreachable block (ram,0x00514b4c) */
/* WARNING: Removing unreachable block (ram,0x00514b58) */
/* WARNING: Removing unreachable block (ram,0x00514b64) */
/* WARNING: Removing unreachable block (ram,0x00514c44) */
/* WARNING: Removing unreachable block (ram,0x00514f54) */
/* WARNING: Removing unreachable block (ram,0x00514c74) */
/* WARNING: Removing unreachable block (ram,0x00514b70) */
/* WARNING: Removing unreachable block (ram,0x00514b74) */
/* WARNING: Removing unreachable block (ram,0x00514b88) */
/* WARNING: Removing unreachable block (ram,0x00514e2c) */
/* WARNING: Removing unreachable block (ram,0x00514b8c) */
/* WARNING: Removing unreachable block (ram,0x00514f98) */
/* WARNING: Removing unreachable block (ram,0x00514bd8) */
/* WARNING: Removing unreachable block (ram,0x00514fa8) */
/* WARNING: Removing unreachable block (ram,0x00514c10) */
/* WARNING: Removing unreachable block (ram,0x0051493c) */
/* WARNING: Removing unreachable block (ram,0x005146e8) */
/* WARNING: Removing unreachable block (ram,0x005146f4) */
/* WARNING: Removing unreachable block (ram,0x00514720) */
/* WARNING: Removing unreachable block (ram,0x005150e4) */
/* WARNING: Removing unreachable block (ram,0x00514768) */
/* WARNING: Removing unreachable block (ram,0x005150f4) */
/* WARNING: Removing unreachable block (ram,0x00514770) */
/* WARNING: Removing unreachable block (ram,0x00514780) */

void FUN_00514124(int param_1,int param_2,int param_3,int param_4)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar8;
  ulonglong uVar7;
  undefined *puVar9;
  int iVar11;
  char cVar12;
  ulonglong uVar10;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  ulonglong uVar18;
  longlong lVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  longlong lVar23;
  byte in_cr0;
  byte in_cr1;
  byte in_cr2;
  byte in_cr3;
  byte unaff_cr4;
  byte in_cr5;
  byte in_cr6;
  byte in_cr7;
  uint uStack00000008;
  undefined *puStack_254;
  undefined1 local_210;
  char local_20f [3];
  GPiece<12> local_20c;
  GPiece<8> local_200;
  GPiece<4> local_1f8;
  uint uStack_1f4;
  longlong local_1e8;
  longlong local_1c8;
  longlong local_1b8;
  GPiece<119> local_188;
  byte local_111;
  byte local_101;
  
  uStack00000008 =
       (uint)(in_cr0 & 0xf) << 0x1c | (uint)(in_cr1 & 0xf) << 0x18 | (uint)(in_cr2 & 0xf) << 0x14 |
       (uint)(in_cr3 & 0xf) << 0x10 | (uint)(unaff_cr4 & 0xf) << 0xc | (uint)(in_cr5 & 0xf) << 8 |
       (uint)(in_cr6 & 0xf) << 4 | (uint)(in_cr7 & 0xf);
  iVar2 = *(int *)(param_2 + 0x24);
  iVar8 = param_4 * *(int *)(param_3 + 0x20) + *(int *)(param_3 + 0x80);
  iVar3 = *(int *)(param_1 + *(int *)(param_3 + 0x48) * 4 + 0x104);
  local_1e8 = FUN_0052fcbc(param_3 + 8,*(int *)(param_3 + 0x80),iVar8);
  if (0x7fffffffffffffff - local_1e8 < 0) {
    local_1e8 = 0x7fffffffffffffff;
  }
  lVar14 = *(longlong *)(iVar2 + 0x30);
  local_1b8 = lVar14 + *(longlong *)(iVar2 + 0x40);
  if (0x7fffffffffffffff - *(longlong *)(iVar2 + 0x40) < lVar14) {
    local_1b8 = 0x7fffffffffffffff;
  }
  puVar9 = &TOC_BASE;
  if (((*(ushort *)(iVar2 + 0x54) & 0x40) == 0) &&
     (iVar11 = sys_process_is_stack(*(undefined4 *)(iVar2 + 0x50)), puVar9 = puStack_254,
     iVar11 != 0)) {
    *(ushort *)(iVar2 + 0x54) = *(ushort *)(iVar2 + 0x54) | 0x40;
  }
  iVar11 = -0x1f0;
  if (-1 < lVar14) {
    iVar11 = -0x1c0;
  }
  iVar5 = -0x1e8;
  lVar14 = *(longlong *)(&stack0x00000000 + iVar11);
  if (local_1b8 < local_1e8) {
    iVar5 = -0x1b8;
  }
  lVar15 = *(longlong *)(&stack0x00000000 + iVar5);
  if (lVar14 < lVar15) {
    uVar22 = (ulonglong)*(uint *)(param_3 + 0x28);
    uVar1 = *(ushort *)(iVar2 + 0x54);
    uVar18 = lVar14 / (longlong)uVar22;
    if ((uVar1 >> 6 & 1) == 0) {
      local_111 = (byte)(*(uint *)(iVar3 + 0x14) >> 0xf);
      local_101 = (byte)(*(uint *)(iVar3 + 0x14) >> 0xb);
    }
    else {
      local_111 = (byte)(*(uint *)(iVar3 + 0x14) >> 0xe);
      local_101 = (byte)(*(uint *)(iVar3 + 0x14) >> 10);
    }
    local_101 = local_101 & 1;
    local_111 = local_111 & 1;
    iVar11 = param_1 + 0xd8;
    if ((uVar18 & 0xffffffff) <= (lVar15 / (longlong)uVar22 & 0xffffffffU)) {
      do {
        if ((*(int *)(param_2 + 0xc) != 0) &&
           ((*(uint *)(*(int *)(param_2 + 0xc) + 0x30) >> 9 & 1) != 0)) {
          *(undefined4 *)(iVar2 + 4) = 0x80010708;
          break;
        }
        uVar7 = uVar18 & 0xffffffff;
        local_1c8 = uVar22 * (uVar7 + 1);
        if ((longlong)(0x7fffffffffffffff - uVar22) < (longlong)(uVar22 * uVar7)) {
          local_1c8 = 0x7fffffffffffffff;
        }
        iVar5 = -0x1f0;
        if (-1 < (longlong)(uVar22 * uVar7)) {
          iVar5 = -0x1d0;
        }
        iVar6 = -0x1e8;
        lVar16 = *(longlong *)(&stack0x00000000 + iVar5);
        if (local_1c8 < local_1e8) {
          iVar6 = -0x1c8;
        }
        iVar5 = -0x1c0;
        lVar17 = *(longlong *)(&stack0x00000000 + iVar6);
        if (lVar14 <= lVar16) {
          iVar5 = -0x1e0;
        }
        iVar6 = -0x1d8;
        lVar23 = *(longlong *)(&stack0x00000000 + iVar5);
        if (lVar15 <= lVar17) {
          iVar6 = -0x1b8;
        }
        lVar19 = *(longlong *)(&stack0x00000000 + iVar6);
        if (lVar23 < lVar19) {
          cVar12 = FUN_0052fd8c(param_3 + 8,*(undefined4 *)(param_3 + 0x80),iVar8,
                                *(undefined4 *)(param_3 + 0x1ec),uVar7,local_1f8,local_200,local_20f
                               );
          if (cVar12 == '\0') {
            _ZN4cell4fios8platform10FIOSprintfEPKcz(*(undefined4 *)(puVar9 + -0x7940),uVar7,*(undefined4 *)(iVar2 + 8),
                             param_3 + 0x8c);
          }
          else {
            uVar20 = (lVar23 - lVar14) + (ulonglong)*(uint *)(iVar2 + 0x50);
            if (((lVar23 == lVar16) && (lVar19 == lVar17)) || (uVar21 = 0, local_101 != 0)) {
              if (((((ulonglong)uVar1 << 0x20) >> 0x25 & 1) == 0) && (local_111 != 0)) {
                uVar13 = (lVar19 - lVar23) + uVar20;
                uVar21 = uVar13 - uStack_1f4 &
                         (ulonglong)(uint)(-1 << (*(byte *)(iVar3 + 0x14) & 0x3f));
                if (((int)uVar21 == 0) ||
                   (((uVar20 & 0xffffffff) <= uVar21 &&
                    ((uStack_1f4 + uVar21 & 0xffffffff) <= (uVar13 & 0xffffffff)))))
                goto joined_r0x00514854;
              }
              uVar21 = 0;
            }
joined_r0x00514854:
            if (local_20f[0] == '\0') {
              _ZN4cell4fios8pathhashEPKc(param_3 + 0x8c);
              iVar3 = *(int *)(param_3 + 0x50);
              if (iVar3 == param_1) {
                FUN_00513fa8(param_1,param_2,local_188);
              }
              lwmutex_lock_checked(iVar11);
              iVar8 = *(int *)(puVar9 + -0x7950);
              *(undefined1 **)(param_2 + 0x24) = local_188;
              if ((*(uint *)(iVar8 + 0x18) & 4) != 0) {
                FUN_005268b4(*(undefined4 *)(param_2 + 0xc),*(undefined8 *)(iVar2 + 0x30),
                             *(undefined8 *)(iVar2 + 0x40));
              }
              if (iVar3 == param_1) {
                FUN_0051399c(param_1,param_2);
              }
              else {
                piVar4 = *(int **)(param_2 + 0x24);
                if (((*piVar4 == 0x10) && (piVar4[4] == 0)) && (piVar4[5] == param_1)) {
                  piVar4[1] = 0;
                }
                else {
                  piVar4 = *(int **)(param_1 + 0x40);
                  if (piVar4 != (int *)0x0) {
                    (*(code *)**(undefined4 **)(*piVar4 + 0x14))(piVar4,param_2);
                  }
                }
              }
              *(undefined8 *)(iVar2 + 0x48) = *(undefined8 *)(iVar2 + 0x48);
              *(int *)(param_2 + 0x24) = iVar2;
              _ZN4cell4fios8platform10FIOSprintfEPKcz(*(undefined4 *)(puVar9 + -0x78fc),*(undefined4 *)(puVar9 + -0x78f8),
                               uVar7,*(undefined4 *)(iVar2 + 8),param_3 + 0x8c,0x80010701);
              *(undefined4 *)(iVar2 + 4) = 0x80010701;
            }
            else {
              uVar13 = ((ulonglong)*(ushort *)(iVar2 + 0x54) << 0x20) >> 0x21 & 1;
              if (((int)uVar13 == 0) &&
                 (uVar10 = FUN_00512e10(param_1,0,uVar22,param_3,param_4,uVar7), (int)uVar10 != 0))
              {
                iVar5 = *(int *)(puVar9 + -0x7950);
                if ((*(uint *)(iVar5 + 0x18) & 4) != 0) {
                  FUN_005276cc(*(undefined4 *)(param_2 + 0xc),lVar23,lVar19 - lVar23);
                }
                uVar21 = (lVar23 - lVar16) + uVar10;
                uVar7 = lVar19 - lVar23;
                if ((uVar7 & 0xffffffff) < 0x1000) {
                  memcpy((void *)uVar20,(void *)uVar21,(size_t)uVar7);
                }
                else {
                  (*(code *)**(undefined4 **)(iVar5 + 0x10))
                            (uVar20 & 0xffffffff,uVar21 & 0xffffffff,uVar7 & 0xffffffff);
                }
                *(longlong *)(iVar2 + 0x48) = *(longlong *)(iVar2 + 0x48) + (lVar19 - lVar23);
                FUN_005128f4(param_1,uVar10 & 0xffffffff,1);
                goto LAB_0051435c;
              }
              lwmutex_lock_checked(iVar11);
              if (((int)uVar21 == 0) &&
                 (uVar21 = FUN_00512bac(param_1,1,uVar13,uVar22,param_3,param_4,uVar7,&local_210),
                 (int)uVar21 == 0)) {
                _ZN4cell4fios8platform10FIOSprintfEPKcz(*(undefined4 *)(puVar9 + -0x78f4),*(undefined4 *)(iVar2 + 8),
                                 param_3 + 0x8c);
                *(undefined4 *)(iVar2 + 4) = 0x8001070a;
              }
              else {
                if ((*(uint *)(*(int *)(puVar9 + -0x7950) + 0x18) & 4) != 0) {
                  FUN_005269f4(*(undefined4 *)(param_2 + 0xc),lVar23,lVar19 - lVar23);
                }
                _ZN4cell4fios8pathhashEPKc(param_3 + 0x8c);
                iVar3 = *(int *)(param_3 + 0x50);
                if (iVar3 == param_1) {
                  FUN_00513fa8(param_1,param_2,local_188);
                }
                *(undefined1 **)(param_2 + 0x24) = local_188;
                if (param_1 == iVar3) {
                  FUN_0051399c(param_1,param_2);
                }
                else {
                  piVar4 = *(int **)(param_1 + 0x40);
                  if (piVar4 != (int *)0x0) {
                    (*(code *)**(undefined4 **)(*piVar4 + 0x14))(piVar4,param_2);
                  }
                }
                *(int *)(param_2 + 0x24) = iVar2;
                _ZN4cell4fios8platform10FIOSprintfEPKcz(*(undefined4 *)(puVar9 + -0x78fc),*(undefined4 *)(puVar9 + -0x78f0)
                                 ,uVar7,*(undefined4 *)(iVar2 + 8),param_3 + 0x8c,0x80010701);
                *(undefined4 *)(iVar2 + 4) = 0x80010701;
                FUN_005128f4(param_1,uVar21 & 0xffffffff,0);
              }
            }
            lwmutex_unlock_checked(iVar11);
          }
          break;
        }
LAB_0051435c:
        uVar18 = uVar18 + 1;
      } while ((uVar18 & 0xffffffff) <= (lVar15 / (longlong)uVar22 & 0xffffffffU));
    }
    FUN_00512a34(param_1,local_20c,0);
    if (*(int *)(iVar2 + 4) == -0x7ffef8ff) {
      if (*(longlong *)(iVar2 + 0x48) == *(longlong *)(iVar2 + 0x40)) {
        *(undefined4 *)(iVar2 + 4) = 0;
      }
      else {
        *(undefined4 *)(iVar2 + 4) = 0x80010709;
      }
    }
  }
  else {
    uVar18 = (longlong)*(ulonglong *)(iVar2 + 0x40) >> 0x3f;
    *(uint *)(iVar2 + 4) =
         (uint)((longlong)(uVar18 - (uVar18 ^ *(ulonglong *)(iVar2 + 0x40))) >> 0x3f) & 0x8001070b;
  }
  return;
}


// SDK libfios.a(fios_dearchive.ppu.o): cell::fios::dearchiver::loadArchiveManifest(cell::fios::mediaioparams*, cell::fios::dearchiver::ArchiveTracker*)  [exact match]
// 0x051514c (0x478 bytes)
// strings: 00667578: 'loadArchiveManifest - allocation of manifest failed!\n' | 006675c0: "Reading manifest of '%s' failed! err = %d\n"

undefined4 FUN_0051514c(undefined4 param_1,int param_2,int param_3)

{
  uint uVar1;
  undefined *puVar2;
  GPiece<16> auVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  char *pcVar9;
  int iVar10;
  char *pcVar11;
  char *pcVar12;
  int iVar13;
  char *pcVar14;
  GPiece<12> local_f0;
  undefined4 local_e4;
  GPiece<8> local_e0;
  undefined4 local_d8;
  uint uStack_d4;
  GPiece<16> local_d0;
  GPiece<16> local_c0;
  GPiece<16> local_b0;
  char *local_a0;
  undefined2 local_9c;
  
  iVar4 = FUN_005303c0(param_3 + 8,*(undefined4 *)(param_3 + 0x80));
  uVar7 = 0;
  if (iVar4 != 0) {
    iVar10 = *(int *)(param_3 + 0x80);
    uVar1 = *(uint *)(param_3 + 0x20);
    uVar5 = FUN_0052fcbc(param_3 + 8,iVar10,iVar4);
    puVar2 = PTR_DAT_0071a9d8;
    iVar13 = uVar5 + 1;
    if ((*(uint *)(param_3 + 0x2c) & 2) == 0) {
      iVar13 = iVar13 + (*(int *)(param_3 + 0x24) + -1) * (*(int *)(param_3 + 0x18c) + 1);
    }
    pcVar6 = (char *)(*(code *)**(undefined4 **)**(undefined4 **)(PTR_DAT_0071a9d8 + 8))
                               (*(undefined4 **)(PTR_DAT_0071a9d8 + 8),iVar13,0x10620200,0,0);
    if (pcVar6 == (char *)0x0) {
      _ZN4cell4fios8platform10FIOSprintfEPKcz(PTR_s_dearchiver_loadArchiveManifest___0071aa48);
      uVar7 = 0;
    }
    else {
      local_a0 = (char *)0x0;
      local_b0 = (GPiece<16>)0x0;
      local_9c = 0;
      _local_f0 = ZEXT816(0);
      _local_e0 = (GPiece<16>)0x0;
      pcVar14 = (char *)(param_3 + 0x8c);
      local_d0 = (GPiece<16>)0x0;
      local_c0 = (GPiece<16>)0x0;
      uVar7 = _ZN4cell4fios8pathhashEPKc(0);
      auVar3 = _local_e0;
      local_e4 = uVar7;
      local_e0.piece<4,4>() = *(undefined4 *)(PTR_DAT_0071aa1c + 4);
      local_e0.piece<0,4>() = *(undefined4 *)PTR_DAT_0071aa1c;
      uStack_d4 = auVar3.piece<12,4>();
      local_d8 = *(undefined4 *)(PTR_DAT_0071aa1c + 8);
      local_d0.piece<8,4>() = *(undefined4 *)(PTR_DAT_0071aa1c + 0x18);
      local_d0.piece<0,8>() = *(undefined8 *)(PTR_DAT_0071aa1c + 0x10);
      local_f0.piece<4,4>() = 0x80010701;
      local_f0.piece<0,4>() = 10;
      local_f0.piece<8,4>() = pcVar14;
      uVar8 = _ZN4cell4fios8pathhashEPKc(pcVar14);
      uVar7 = *(undefined4 *)(param_2 + 0x24);
      local_e4 = uVar8;
      *(undefined1 **)(param_2 + 0x24) = local_f0;
      local_9c = 0xc;
      stack0xffffff24 = 0;
      local_e0.piece<0,4>() = param_1;
      local_b0 = ZEXT416(uVar5) << 0x40;
      local_d0.piece<8,8>() = local_d0.piece<8,8>() & 0xffffffff;
      local_d0.piece<0,8>() = 0;
      local_c0.piece<0,8>() = 0;
      local_a0 = pcVar6;
      FUN_00514124(param_1,param_2,param_3,(ulonglong)(uint)(iVar4 - iVar10) / (ulonglong)uVar1);
      *(undefined4 *)(param_2 + 0x24) = uVar7;
      if (local_f0.piece<4,4>() == 0) {
        pcVar12 = pcVar6 + uVar5 + 1;
        pcVar9 = pcVar6 + iVar13;
        pcVar6[uVar5] = '\0';
        if (pcVar6 < pcVar12) {
          do {
            while( true ) {
              pcVar12 = pcVar12 + -1;
              if (*pcVar12 != '\n') break;
              if ((*(uint *)(param_3 + 0x2c) & 2) == 0) {
                pcVar9 = pcVar9 + -1;
                *pcVar9 = '/';
                iVar4 = param_3 + *(int *)(param_3 + 0x18c) + 0x80;
                pcVar11 = (char *)(iVar4 + 0xc);
                if (pcVar14 < pcVar11) {
                  iVar10 = (int)pcVar11 - (int)pcVar14;
                  if ((char *)(iVar4 + 0xb) < pcVar14) {
                    iVar10 = 1;
                  }
                  do {
                    pcVar11 = pcVar11 + -1;
                    pcVar9 = pcVar9 + -1;
                    *pcVar9 = *pcVar11;
                    iVar10 = iVar10 + -1;
                  } while (iVar10 != 0);
                }
              }
              pcVar9 = pcVar9 + -1;
              *pcVar9 = '\0';
              if (pcVar6 == pcVar12) goto LAB_0051544c;
            }
            pcVar9 = pcVar9 + -1;
            *pcVar9 = *pcVar12;
          } while (pcVar6 != pcVar12);
        }
LAB_0051544c:
        if ((*(uint *)(param_3 + 0x2c) & 2) == 0) {
          pcVar9 = pcVar9 + -1;
          *pcVar9 = '/';
          iVar4 = param_3 + *(int *)(param_3 + 0x18c) + 0x80;
          pcVar12 = (char *)(iVar4 + 0xc);
          if (pcVar14 < pcVar12) {
            iVar10 = (int)pcVar12 - (int)pcVar14;
            if ((char *)(iVar4 + 0xb) < pcVar14) {
              iVar10 = 1;
            }
            do {
              pcVar12 = pcVar12 + -1;
              pcVar9 = pcVar9 + -1;
              *pcVar9 = *pcVar12;
              iVar10 = iVar10 + -1;
            } while (iVar10 != 0);
          }
        }
        uVar7 = 1;
        *(int *)(param_3 + 0x88) = iVar13;
        *(char **)(param_3 + 0x84) = pcVar6;
      }
      else {
        _ZN4cell4fios8platform10FIOSprintfEPKcz(PTR_s_Reading_manifest_of___s__failed__0071aa4c,local_f0.piece<8,4>(),
                         local_f0.piece<4,4>());
        (*(code *)**(undefined4 **)(**(int **)(puVar2 + 8) + 4))
                  (*(int **)(puVar2 + 8),pcVar6,0x10620200,0,0);
        uVar7 = 0;
      }
    }
  }
  return uVar7;
}


// 0x05155c4 (0x458 bytes)
uint FUN_005155c4(int param_1,int param_2,uint *param_3,int *param_4)

{
  bool bVar1;
  int iVar2;
  uint *puVar3;
  undefined4 uVar4;
  uint uVar5;
  GPiece<16> auVar6;
  undefined4 *puVar7;
  int iVar8;
  size_t sVar9;
  int iVar10;
  int iVar11;
  char cVar12;
  char *pcVar13;
  uint uVar14;
  int iVar15;
  int *piVar16;
  int iVar17;
  char *pcVar18;
  int iVar19;
  GPiece<16> local_e0;
  GPiece<16> local_d0;
  GPiece<16> local_c0;
  GPiece<16> auStack_b0;
  GPiece<16> auStack_a0;
  undefined4 local_90;
  undefined2 local_8c;
  
  iVar2 = *(int *)(param_2 + 0x24);
  puVar7 = (undefined4 *)(iVar2 + 8);
  sVar9 = strlen((char *)*puVar7);
  iVar8 = param_1 + 0x240;
  lwmutex_lock_checked(iVar8);
  iVar11 = *(int *)(iVar2 + 0xc);
  if (iVar11 != 0) {
    piVar16 = (int *)(param_1 + 0x268);
    iVar19 = 0;
    iVar17 = param_1 + 0x260;
    iVar15 = 0;
    do {
      iVar10 = *piVar16;
      piVar16 = piVar16 + 0x43;
      if ((iVar10 == iVar11) && (*(int *)(iVar17 + 8) == iVar11)) {
        if (*(char *)(iVar17 + 0xc) == '\0') {
          iVar10 = FUN_005cc784(*puVar7,0);
        }
        else {
          iVar10 = FUN_005cc784(*puVar7,iVar17 + 0xc);
        }
        if (iVar10 == 0) {
          param_1 = param_1 + iVar15 + 0x360;
          uVar14 = *(uint *)(param_1 + 0xc);
          *param_4 = *(int *)(param_1 + 0x10);
          *param_3 = uVar14;
          uVar14 = ((int)uVar14 >> 0x1f) - ((int)uVar14 >> 0x1f ^ uVar14);
          lwmutex_unlock_checked(iVar8);
          goto LAB_00515888;
        }
      }
      bVar1 = iVar19 != 7;
      iVar15 = iVar15 + 0x10c;
      iVar17 = iVar17 + 0x10c;
      iVar19 = iVar19 + 1;
    } while (bVar1);
  }
  lwmutex_unlock_checked(iVar8);
  instructionSynchronize();
  if (*(int *)(param_1 + 0x11c) != 0) {
    if (*(int *)(param_1 + 0x164) == 0) goto LAB_005157fc;
    local_e0 = ZEXT816(0);
    auStack_a0 = (GPiece<16>)0x0;
    local_90 = 0;
    local_8c = 0;
    local_d0 = (GPiece<16>)0x0;
    local_c0 = (GPiece<16>)0x0;
    auStack_b0 = (GPiece<16>)0x0;
    _ZN4cell4fios8pathhashEPKc(0);
    auVar6 = local_d0;
    piVar16 = *(int **)(param_1 + 0x40);
    local_e0.piece<8,8>() = local_e0.piece<4,8>() << 0x20;
    local_e0.piece<4,4>() = 0x80010701;
    local_e0.piece<0,4>() = 8;
    local_d0.piece<4,4>() = *(undefined4 *)(PTR_DAT_0071aa1c + 4);
    local_d0.piece<0,4>() = *(undefined4 *)PTR_DAT_0071aa1c;
    local_d0.piece<12,4>() = auVar6.piece<12,4>();
    local_d0.piece<8,4>() = *(undefined4 *)(PTR_DAT_0071aa1c + 8);
    local_c0.piece<8,4>() = *(undefined4 *)(PTR_DAT_0071aa1c + 0x18);
    local_c0.piece<0,8>() = *(undefined8 *)(PTR_DAT_0071aa1c + 0x10);
    local_e0.piece<8,4>() = *puVar7;
    local_e0.piece<12,4>() = *(undefined4 *)(iVar2 + 0xc);
    *(undefined1 **)(param_2 + 0x24) = local_e0;
    if (piVar16 != (int *)0x0) {
      (*(code *)**(undefined4 **)(*piVar16 + 0x14))(piVar16,param_2);
    }
    *(int *)(param_2 + 0x24) = iVar2;
    if (local_e0.piece<4,4>() == 0) goto LAB_005157fc;
  }
  for (puVar3 = *(uint **)(param_1 + 0x164); puVar3 != (uint *)0x0; puVar3 = (uint *)*puVar3) {
    pcVar18 = (char *)*puVar7;
    if ((((puVar3[0xb] & 2) != 0) ||
        (((uVar14 = puVar3[99], uVar14 <= sVar9 &&
          (iVar11 = FUN_005ccb28(puVar3 + 0x23,pcVar18,uVar14), iVar11 == 0)) &&
         (pcVar13 = pcVar18 + uVar14, pcVar18 = pcVar13 + 1, *pcVar13 == '/')))) &&
       ((puVar3[0x20] != 0 || (cVar12 = FUN_00513cc4(param_1,param_2,puVar3), cVar12 != '\0')))) {
      iVar11 = FUN_00530420(puVar3 + 2,puVar3[0x20],pcVar18);
      *param_4 = iVar11;
      if (iVar11 != 0) {
        *param_3 = (uint)puVar3;
        goto LAB_00515808;
      }
    }
  }
LAB_005157fc:
  *param_4 = 0;
  *param_3 = 0;
LAB_00515808:
  lwmutex_lock_checked(iVar8);
  uVar4 = *puVar7;
  iVar11 = (*(uint *)(param_1 + 0xac8) & 7) * 0x10c;
  puVar7 = (undefined4 *)(iVar11 + param_1 + 0x268);
  iVar15 = param_1 + iVar11 + 0x360;
  *(uint *)(param_1 + 0xac8) = *(uint *)(param_1 + 0xac8) + 1;
  FUN_0051ca84(puVar7,uVar4);
  iVar11 = *param_4;
  *(uint *)(iVar15 + 0xc) = *param_3;
  uVar5 = *param_3;
  uVar4 = *(undefined4 *)(iVar2 + 0xc);
  *(int *)(iVar15 + 0x10) = iVar11;
  uVar14 = (int)uVar5 >> 0x1f;
  *puVar7 = uVar4;
  uVar14 = uVar14 - (uVar14 ^ uVar5);
  lwmutex_unlock_checked(iVar8);
LAB_00515888:
  return uVar14 >> 0x1f;
}


// 0x0515a1c (0x4b8 bytes)
uint FUN_00515a1c(int param_1,int param_2,undefined4 param_3,longlong *param_4,longlong *param_5)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  char cVar7;
  undefined4 uVar6;
  longlong *plVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  longlong local_120;
  longlong local_118;
  longlong local_100;
  longlong local_f8;
  longlong local_f0;
  longlong local_e8;
  longlong local_e0;
  longlong local_d8;
  longlong local_d0;
  longlong local_c8;
  longlong local_c0;
  longlong local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  ulonglong local_a8;
  ulonglong local_a0;
  ulonglong local_98;
  
  uVar5 = ZEXT48(&stack0x00000000);
  local_a8 = (ulonglong)(param_1 + 0x98);
  local_ac = *(undefined4 *)(*(int *)(param_2 + 0x24) + 0xc);
  local_b0 = *(undefined4 *)(*(int *)(param_2 + 0x24) + 8);
  FUN_0052ce28(local_a8);
  cVar7 = FUN_00510d54(param_1,param_3,0);
  if (cVar7 == '\0') {
    iVar1 = *(int *)(param_2 + 0x24);
    local_a0 = uVar5 - 300;
    local_98 = uVar5 - 0x128;
    *(undefined4 *)(iVar1 + 8) = param_3;
    uVar6 = _ZN4cell4fios8pathhashEPKc(param_3);
    *(undefined4 *)(iVar1 + 0xc) = uVar6;
    cVar7 = FUN_005155c4(param_1,param_2,local_a0 & 0xffffffff,local_98 & 0xffffffff);
    while (cVar7 != '\0') {
      local_e8 = FUN_0052fcbc(8,uRam00000080,0);
      local_f0 = 0;
      if (0x7fffffffffffffff - local_e8 < 0) {
        local_e8 = 0x7fffffffffffffff;
      }
      lVar9 = *param_4;
      local_b8 = lVar9 + *param_5;
      if (0x7fffffffffffffff - *param_5 < lVar9) {
        local_b8 = 0x7fffffffffffffff;
      }
      plVar8 = &local_f0;
      if (-1 < lVar9) {
        plVar8 = &local_c0;
      }
      local_c0 = *plVar8;
      plVar8 = &local_e8;
      if (local_b8 < local_e8) {
        plVar8 = &local_b8;
      }
      local_b8 = *plVar8;
      local_f8 = -0x8000000000000000;
      uVar11 = (ulonglong)uRam00000028;
      uVar10 = local_b8 / (longlong)uVar11;
      local_100 = 0x7fffffffffffffff;
      uVar4 = local_c0 / (longlong)uVar11;
      if ((uVar4 & 0xffffffff) <= (uVar10 & 0xffffffff)) {
        do {
          uVar2 = uVar4 & 0xffffffff;
          local_c8 = uVar11 * (uVar2 + 1);
          if ((longlong)(0x7fffffffffffffff - uVar11) < (longlong)(uVar11 * uVar2)) {
            local_c8 = 0x7fffffffffffffff;
          }
          plVar8 = &local_f0;
          if (local_f0 <= (longlong)(uVar11 * uVar2)) {
            plVar8 = &local_d0;
          }
          local_d0 = *plVar8;
          plVar8 = &local_e8;
          if (local_c8 < local_e8) {
            plVar8 = &local_c8;
          }
          local_c8 = *plVar8;
          plVar8 = &local_c0;
          if (local_c0 <= local_d0) {
            plVar8 = &local_e0;
          }
          local_e0 = *plVar8;
          plVar8 = &local_d8;
          if (local_b8 <= local_c8) {
            plVar8 = &local_b8;
          }
          local_d8 = *plVar8;
          if (local_e0 < local_d8) {
            cVar7 = FUN_0052fd8c(8,uRam00000080,0,uRam000001ec,uVar2,uVar5 - 0x118 & 0xffffffff,
                                 uVar5 - 0x120 & 0xffffffff,uVar5 - 0x130 & 0xffffffff);
            if (cVar7 == '\0') break;
            iVar1 = -0x100;
            if (local_120 <= local_100) {
              iVar1 = -0x108;
            }
            iVar3 = -0x110;
            local_100 = *(longlong *)(&stack0x00000000 + iVar1);
            if (local_120 + local_118 <= local_f8) {
              iVar3 = -0xf8;
            }
            local_f8 = *(longlong *)(&stack0x00000000 + iVar3);
            if ((uVar10 & 0xffffffff) < (uVar4 + 1 & 0xffffffff)) break;
          }
          else if ((uVar10 & 0xffffffff) < (uVar4 + 1 & 0xffffffff)) break;
          uVar4 = uVar4 + 1;
        } while( true );
      }
      FUN_005193cc(param_3,0x8c,0x100);
      uVar6 = _ZN4cell4fios8pathhashEPKc(param_3);
      iVar1 = *(int *)(param_2 + 0x24);
      *param_4 = local_100;
      *param_5 = local_f8 - local_100;
      *(undefined4 *)(iVar1 + 0xc) = uVar6;
      *(undefined4 *)(iVar1 + 8) = param_3;
      cVar7 = FUN_005155c4(param_1,param_2,local_a0 & 0xffffffff,local_98 & 0xffffffff);
    }
    iVar1 = *(int *)(param_2 + 0x24);
    uVar12 = 1;
    *(undefined4 *)(iVar1 + 0xc) = local_ac;
    *(undefined4 *)(iVar1 + 8) = local_b0;
  }
  else {
    instructionSynchronize();
    uVar12 = (int)*(uint *)(param_1 + 0x11c) >> 0x1f;
    uVar12 = uVar12 - (uVar12 ^ *(uint *)(param_1 + 0x11c)) >> 0x1f;
  }
  FUN_0052cd7c(local_a8);
  return uVar12;
}


// 0x0515ed4 (0x760 bytes)
void FUN_00515ed4(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int *piVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  char cVar11;
  longlong *plVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong local_2a0;
  longlong local_298;
  longlong local_270;
  longlong local_268;
  longlong local_260;
  longlong local_258;
  longlong local_250;
  longlong local_248;
  longlong local_240;
  longlong local_238;
  longlong local_230;
  longlong local_228;
  undefined4 local_220;
  int local_21c;
  char *local_218;
  undefined4 local_214;
  undefined4 local_210;
  undefined4 local_20c;
  undefined4 local_208;
  undefined8 local_200;
  undefined4 local_1f8;
  longlong local_1f0;
  undefined8 local_1e8;
  longlong local_1e0;
  longlong local_1d8;
  undefined4 local_1d0;
  undefined2 local_1cc;
  undefined4 local_1c8;
  char local_1c4 [260];
  longlong local_c0;
  ulonglong local_b8;
  ulonglong local_b0;
  ulonglong local_a8;
  ulonglong local_a0;
  
  uVar10 = ZEXT48(&stack0x00000000);
  puVar1 = *(undefined4 **)(param_2 + 0x24);
  local_b0 = uVar10 - 0x1c8;
  uVar2 = puVar1[2];
  local_a8 = uVar10 - 0x2a8;
  local_1c8 = 0;
  local_a0 = uVar10 - 0x2ac;
  FUN_0051ca84(local_b0,uVar2);
  local_1c8 = _ZN4cell4fios8pathhashEPKc(uVar2);
  local_1f0 = *(longlong *)(puVar1 + 0xc);
  local_1d8 = *(longlong *)(puVar1 + 0x12);
  local_1d0 = puVar1[0x14];
  local_220 = *puVar1;
  local_21c = puVar1[1];
  local_218 = (char *)puVar1[2];
  local_200 = *(undefined8 *)(puVar1 + 8);
  local_b8 = (ulonglong)(param_1 + 0x98);
  local_20c = puVar1[5];
  local_208 = puVar1[6];
  local_214 = puVar1[3];
  local_1f8 = puVar1[10];
  local_210 = puVar1[4];
  local_1cc = *(undefined2 *)(puVar1 + 0x15);
  local_1e8 = *(undefined8 *)(puVar1 + 0xe);
  local_1e0 = *(longlong *)(puVar1 + 0x10);
  *(undefined4 **)(param_2 + 0x24) = &local_220;
  lVar7 = *(longlong *)(puVar1 + 0x10);
  local_c0 = lVar7;
  FUN_0052ce28(local_b8);
  while (cVar11 = FUN_005155c4(param_1,param_2,local_a8 & 0xffffffff,local_a0 & 0xffffffff),
        cVar11 != '\0') {
    local_268 = FUN_0052fcbc(8,uRam00000080,0);
    local_270 = 0;
    if (0x7fffffffffffffff - local_268 < 0) {
      local_268 = 0x7fffffffffffffff;
    }
    local_258 = local_1f0 + local_1e0;
    if (0x7fffffffffffffff - local_1e0 < local_1f0) {
      local_258 = 0x7fffffffffffffff;
    }
    plVar12 = &local_270;
    if (-1 < local_1f0) {
      plVar12 = &local_260;
    }
    local_260 = *plVar12;
    plVar12 = &local_268;
    if (local_258 < local_268) {
      plVar12 = &local_258;
    }
    local_258 = *plVar12;
    if (lVar7 == 0x7fffffffffffffff) {
      lVar7 = local_258 - local_260;
    }
    local_230 = 0x7fffffffffffffff;
    local_228 = -0x8000000000000000;
    uVar14 = (ulonglong)uRam00000028;
    uVar13 = local_258 / (longlong)uVar14;
    uVar8 = local_260 / (longlong)uVar14;
    if ((uVar8 & 0xffffffff) <= (uVar13 & 0xffffffff)) {
      do {
        uVar5 = uVar8 & 0xffffffff;
        local_238 = uVar14 * (uVar5 + 1);
        if ((longlong)(0x7fffffffffffffff - uVar14) < (longlong)(uVar14 * uVar5)) {
          local_238 = 0x7fffffffffffffff;
        }
        plVar12 = &local_270;
        if (local_270 <= (longlong)(uVar14 * uVar5)) {
          plVar12 = &local_240;
        }
        local_240 = *plVar12;
        plVar12 = &local_268;
        if (local_238 < local_268) {
          plVar12 = &local_238;
        }
        local_238 = *plVar12;
        plVar12 = &local_260;
        if (local_260 <= local_240) {
          plVar12 = &local_250;
        }
        local_250 = *plVar12;
        plVar12 = &local_248;
        if (local_258 <= local_238) {
          plVar12 = &local_258;
        }
        local_248 = *plVar12;
        if (local_250 < local_248) {
          cVar11 = FUN_0052fd8c(8,uRam00000080,0,uRam000001ec,uVar5,uVar10 - 0x298,uVar10 - 0x2a0,
                                uVar10 - 0x2b0);
          if (cVar11 == '\0') break;
          iVar9 = -0x230;
          if (local_2a0 <= local_230) {
            iVar9 = -0x278;
          }
          iVar6 = -0x280;
          local_230 = *(longlong *)(&stack0x00000000 + iVar9);
          if (local_2a0 + local_298 <= local_228) {
            iVar6 = -0x228;
          }
          local_228 = *(longlong *)(&stack0x00000000 + iVar6);
          if ((uVar13 & 0xffffffff) < (uVar8 + 1 & 0xffffffff)) break;
        }
        else if ((uVar13 & 0xffffffff) < (uVar8 + 1 & 0xffffffff)) break;
        uVar8 = uVar8 + 1;
      } while( true );
    }
    FUN_0051ca84(local_b0 & 0xffffffff,0x8c);
    local_214 = _ZN4cell4fios8pathhashEPKc(0x8c);
    local_218 = local_1c4;
    if (local_1c4[0] == '\0') {
      local_218 = (char *)0x0;
    }
    local_1f0 = local_230;
    local_1e0 = local_228 - local_230;
    local_1f8 = uRam00000068;
    local_210 = uRam00000050;
    local_20c = uRam00000054;
    local_208 = uRam00000058;
    local_200 = uRam00000060;
    local_1c8 = local_214;
    if ((uRam000001e8 & 0x300) != 0) {
      *(undefined4 **)(param_2 + 0x24) = puVar1;
      puVar1[1] = 0x80010707;
      FUN_0052cd7c(local_b8);
      return;
    }
  }
  piVar3 = *(int **)(param_2 + 0x24);
  if (((*piVar3 == 0x10) && (piVar3[4] == 0)) && (piVar3[5] == param_1)) {
    piVar3[1] = 0;
  }
  else {
    piVar3 = *(int **)(param_1 + 0x40);
    if (piVar3 != (int *)0x0) {
      (*(code *)**(undefined4 **)(*piVar3 + 0x14))(piVar3,param_2);
    }
  }
  *(undefined4 **)(param_2 + 0x24) = puVar1;
  if (local_1d8 < local_1e0) {
    if (((local_21c == 0) && (local_1d8 != 0)) &&
       (cVar11 = FUN_005155c4(param_1,param_2,uVar10 - 0x2a8,uVar10 - 0x2ac), cVar11 != '\0')) {
      uVar13 = (ulonglong)uRam00000028;
      iVar9 = -0x290;
      uVar8 = *(longlong *)(puVar1 + 0xc) / (longlong)uVar13;
      if (0xffffffff <
          (*(longlong *)(puVar1 + 0xc) + *(longlong *)(puVar1 + 0x10)) / (longlong)uVar13) {
        iVar9 = -0x288;
      }
      lVar7 = 0;
      uVar4 = *(uint *)(&stack0x00000004 + iVar9);
      if ((uVar8 & 0xffffffff) <= (ulonglong)uVar4) {
        lVar15 = 0;
        do {
          uVar14 = uVar8 & 0xffffffff;
          uVar8 = uVar8 + 1;
          cVar11 = FUN_0052fd8c(8,uRam00000080,0,uRam000001ec,uVar14,uVar10 - 0x2a0 & 0xffffffff,
                                uVar10 - 0x298 & 0xffffffff,uVar10 - 0x2b0 & 0xffffffff);
          if ((cVar11 == '\0') || (lVar15 = local_2a0 + lVar15, local_1d8 < lVar15)) break;
          lVar7 = lVar7 + uVar13;
        } while ((uVar8 & 0xffffffff) <= (ulonglong)uVar4);
      }
      *(longlong *)(puVar1 + 0x12) = lVar7;
      plVar12 = (longlong *)(puVar1 + 0x12);
      if (*(longlong *)(puVar1 + 0x10) <= *(longlong *)(puVar1 + 0x12)) {
        plVar12 = (longlong *)(puVar1 + 0x10);
      }
      *(longlong *)(puVar1 + 0x12) = *plVar12;
      puVar1[1] = 0;
      goto LAB_005164a4;
    }
    *(longlong *)(puVar1 + 0x12) = local_1d8;
    iVar9 = local_21c;
  }
  else {
    *(longlong *)(puVar1 + 0x12) = lVar7;
    iVar9 = -0x7ffef8f7;
    if (local_c0 <= lVar7) {
      iVar9 = 0;
    }
  }
  puVar1[1] = iVar9;
LAB_005164a4:
  FUN_0052cd7c(local_b8);
  return;
}


// 0x0516634 (0x274 bytes)
// strings: 006675f0: "fios dearchiver: closing file '%s' has bad archive ptr in filehandle!\n"

void FUN_00516634(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  char cVar6;
  uint *puVar7;
  ulonglong uVar8;
  char in_RESERVE;
  byte in_cr0;
  int *local_30;
  GPiece<12> local_2c;
  
  piVar1 = *(int **)(param_2 + 0x24);
  local_30 = (int *)0x0;
  if (piVar1[4] == param_1) {
    local_30 = (int *)piVar1[5];
  }
  else if (((*piVar1 == 0x10) && (piVar1[4] == 0)) && (piVar1[5] == param_1)) {
    piVar1[1] = 0;
  }
  else {
    piVar2 = *(int **)(param_1 + 0x40);
    if (piVar2 != (int *)0x0) {
      (*(code *)**(undefined4 **)(*piVar2 + 0x14))(piVar2,param_2);
    }
  }
  if ((piVar1[4] != param_1) &&
     ((((*(ushort *)(piVar1 + 0x15) & 0x3000) == 0 ||
       (cVar6 = FUN_005155c4(param_1,param_2,&local_30,local_2c), cVar6 == '\0')) ||
      ((local_30[0x7a] & 0x800U) == 0)))) {
    return;
  }
  FUN_0052ce28(param_1 + 0x98);
  iVar5 = (((int)local_30 >> 0x1f ^ (uint)local_30) - ((int)local_30 >> 0x1f)) + -1;
  if (iVar5 < 0) {
    if (iVar5 < 0) goto LAB_0051686c;
  }
  else {
    for (piVar2 = *(int **)(param_1 + 0x164); (local_30 != piVar2 && (piVar2 != (int *)0x0));
        piVar2 = (int *)*piVar2) {
    }
  }
  if (iVar5 >= 0) {
    for (piVar2 = *(int **)(param_1 + 0x164); (local_30 != piVar2 && (piVar2 != (int *)0x0));
        piVar2 = (int *)*piVar2) {
    }
    uVar8 = (ulonglong)((int)((uint)local_30 ^ (uint)piVar2) >> 0x1f);
    if ((((uVar8 ^ ((uint)local_30 ^ (uint)piVar2)) - uVar8) - 1 >> 0x1f & 1) != 0) {
      do {
        puVar7 = (uint *)(ZEXT48(local_30) + 0x7c);
        uVar3 = *puVar7;
        instructionSynchronize();
        while (uVar3 == *puVar7) {
          if (in_RESERVE != '\0') {
            uVar4 = storeWordConditionalIndexed
                              ((ulonglong)uVar3 - 1,0,ZEXT48(local_30) + 0x7c & 0xffffffff);
            *puVar7 = uVar4;
            in_cr0 = 2;
          }
          if ((in_cr0 & 2) != 0) {
            piVar1[1] = 0;
            goto LAB_0051682c;
          }
        }
      } while( true );
    }
  }
LAB_0051686c:
  _ZN4cell4fios8platform10FIOSprintfEPKcz(PTR_s_fios_dearchiver__closing_file____0071aa50,piVar1[2]);
  piVar1[1] = -0x7ffef8fa;
LAB_0051682c:
  FUN_0052cd7c(param_1 + 0x98);
  return;
}


// 0x05168a8 (0x324 bytes)
// strings: 00667638: "fios close archive ... '%s' is not in our list of open archives!\n" | 00516ab0: '}+Kxy)' (raw)

void FUN_005168a8(int *param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined *puVar5;
  int *piVar6;
  int *piVar7;
  
  puVar5 = PTR_DAT_0071a9d8;
  if ((*(uint *)(PTR_DAT_0071a9d8 + 0x18) & 4) != 0) {
    FUN_0052780c(*(undefined4 *)(param_2 + 0xc));
  }
  (*(code *)**(undefined4 **)(*param_1 + 0x1c))(param_1);
  piVar6 = param_1 + 0x26;
  _ZN4cell4fios8platform6rwlock9writeLockEv(piVar6);
  piVar7 = param_1 + 0x59;
  piVar4 = (int *)*piVar7;
  bVar1 = piVar4 == (int *)0x0;
  if (!bVar1) {
    iVar2 = *(int *)(param_2 + 0x24);
    do {
      if ((((piVar4[0x14] == *(int *)(iVar2 + 0x10)) && (piVar4[0x15] == *(int *)(iVar2 + 0x14))) &&
          (piVar4[0x16] == *(int *)(iVar2 + 0x18))) &&
         ((*(longlong *)(piVar4 + 0x18) == *(longlong *)(iVar2 + 0x20) &&
          (piVar4[0x1a] == *(int *)(iVar2 + 0x28))))) {
        if (!bVar1) {
          iVar2 = piVar4[0x1e];
          piVar4[0x1e] = iVar2 + -1;
          if (0 < iVar2 + -1) {
            *(undefined4 *)(*(int *)(param_2 + 0x24) + 4) = 0;
            FUN_0052cc20(piVar6);
            return;
          }
          instructionSynchronize();
          piVar3 = (int *)*piVar7;
          if (piVar4 == piVar3) goto LAB_00516ad0;
          piVar7 = piVar3;
          if (piVar3 == (int *)0x0) goto LAB_00516ae4;
          goto LAB_00516ab0;
        }
        break;
      }
      piVar4 = (int *)*piVar4;
      bVar1 = piVar4 == (int *)0x0;
    } while (!bVar1);
  }
  _ZN4cell4fios8platform10FIOSprintfEPKcz(PTR_s_fios_close_archive_______s__is_n_0071aa54,
                   *(undefined4 *)(*(int *)(param_2 + 0x24) + 8));
  goto LAB_00516a34;
LAB_00516ad0:
  *piVar7 = *piVar4;
  *piVar4 = 0;
  goto LAB_00516ae4;
  while (piVar7 = piVar3, piVar3 != (int *)0x0) {
LAB_00516ab0:
    piVar3 = (int *)*piVar7;
    if (piVar4 == piVar3) goto LAB_00516ad0;
  }
LAB_00516ae4:
  if (piVar4[0x20] != 0) {
    piVar7 = *(int **)(puVar5 + 8);
    (*(code *)**(undefined4 **)(*piVar7 + 4))(piVar7,piVar4[0x20],0x10610200,0,0);
  }
  piVar4[0x7b] = 0;
  piVar4[0x20] = 0;
  FUN_00512820(param_1,piVar4);
  FUN_00530770(piVar4 + 2);
  piVar7 = *(int **)(puVar5 + 8);
  (*(code *)**(undefined4 **)(*piVar7 + 4))(piVar7,piVar4,0x10600103,0,0);
  lwmutex_lock_checked(param_1 + 0x90);
  memset(param_1 + 0x9a,0,0x860);
  lwmutex_unlock_checked(param_1 + 0x90);
LAB_00516a34:
  FUN_0052cc20(piVar6);
  FUN_00516634(param_1,param_2);
  return;
}


// 0x0516bcc (0x3ec bytes)
// strings: 00667680: '.sdat'

void FUN_00516bcc(int param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  char *__s;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  uint uVar6;
  undefined4 *puVar7;
  char cVar12;
  undefined8 uVar8;
  size_t sVar9;
  int iVar10;
  undefined4 uVar11;
  ulonglong uVar13;
  char in_RESERVE;
  byte in_cr0;
  GPiece<4> local_60;
  GPiece<12> local_5c;
  
  FUN_0052ce28(param_1 + 0x98);
  iVar2 = *(int *)(param_2 + 0x24);
  cVar12 = FUN_005155c4(param_1,param_2,local_60,local_5c);
  if (cVar12 == '\0') {
    piVar5 = *(int **)(param_2 + 0x24);
    if (((*piVar5 == 0x10) && (piVar5[4] == 0)) && (piVar5[5] == param_1)) {
      piVar5[1] = 0;
    }
    else {
      piVar5 = *(int **)(param_1 + 0x40);
      if (piVar5 != (int *)0x0) {
        (*(code *)**(undefined4 **)(*piVar5 + 0x14))(piVar5,param_2);
      }
    }
    goto LAB_00516dac;
  }
  uVar1 = *(ushort *)(*(int *)(param_2 + 0x24) + 0x54);
  if ((uVar1 & 3) != 1) {
    *(undefined4 *)(iVar2 + 4) = 0x80010710;
    goto LAB_00516dac;
  }
  if ((*(ushort *)(iVar2 + 0x54) & 0x200) == 0) {
    if ((uVar1 & 0x300) == 0) {
LAB_00516c90:
      uVar11 = uRam00000068;
      uVar8 = uRam00000060;
      uVar4 = uRam00000058;
      uVar3 = uRam00000054;
      if (((uRam000001e8 & 0x800) == 0) || ((uVar1 & 0x300) == 0)) {
        *(undefined4 *)(iVar2 + 0x18) = 0;
        *(undefined4 *)(iVar2 + 0x14) = 0;
        *(int *)(iVar2 + 0x10) = param_1;
        *(undefined4 *)(iVar2 + 0x28) = 0;
        *(undefined8 *)(iVar2 + 0x20) = 0;
        uVar8 = FUN_0052fcbc(8,0,0);
        *(undefined4 *)(iVar2 + 0x14) = 0;
        *(undefined4 *)(iVar2 + 4) = 0;
        *(undefined8 *)(iVar2 + 0x48) = uVar8;
        *(ulonglong *)(iVar2 + 0x20) =
             (-(ulonglong)uRam00000080 & 0xffffffff) / (ulonglong)uRam00000020;
      }
      else {
        *(undefined4 *)(iVar2 + 0x10) = uRam00000050;
        *(undefined4 *)(iVar2 + 0x14) = uVar3;
        *(undefined4 *)(iVar2 + 0x18) = uVar4;
        *(undefined8 *)(iVar2 + 0x20) = uVar8;
        *(undefined4 *)(iVar2 + 0x28) = uVar11;
        uVar8 = FUN_005113b4(param_1,iVar2,0,0);
        *(undefined8 *)(iVar2 + 0x38) = uVar8;
        if (*(int *)(iVar2 + 4) != -0x7ffef8ff) {
          uVar3 = *(undefined4 *)PTR_DAT_0071aa1c;
          uVar4 = *(undefined4 *)(PTR_DAT_0071aa1c + 4);
          uVar11 = *(undefined4 *)(PTR_DAT_0071aa1c + 8);
          uVar8 = *(undefined8 *)(PTR_DAT_0071aa1c + 0x10);
          *(undefined4 *)(iVar2 + 0x28) = *(undefined4 *)(PTR_DAT_0071aa1c + 0x18);
          *(undefined4 *)(iVar2 + 0x10) = uVar3;
          *(undefined4 *)(iVar2 + 0x14) = uVar4;
          *(undefined4 *)(iVar2 + 0x18) = uVar11;
          *(undefined8 *)(iVar2 + 0x20) = uVar8;
          goto LAB_00516dac;
        }
        puVar7 = (undefined4 *)(iVar2 + 8);
        uVar3 = *puVar7;
        *puVar7 = 0x8c;
        uVar11 = _ZN4cell4fios8pathhashEPKc(0x8c);
        piVar5 = *(int **)(param_2 + 0x24);
        uVar4 = *(undefined4 *)(iVar2 + 0xc);
        *(undefined4 *)(iVar2 + 0xc) = uVar11;
        if (((*piVar5 == 0x10) && (piVar5[4] == 0)) && (piVar5[5] == param_1)) {
          piVar5[1] = 0;
        }
        else {
          piVar5 = *(int **)(param_1 + 0x40);
          if (piVar5 != (int *)0x0) {
            (*(code *)**(undefined4 **)(*piVar5 + 0x14))(piVar5,param_2);
          }
        }
        *(undefined4 *)(iVar2 + 0xc) = uVar4;
        *puVar7 = uVar3;
      }
      if (*(int *)(iVar2 + 4) == 0) {
        do {
          uVar6 = uRam0000007c;
          uVar13 = (ulonglong)uRam0000007c;
          instructionSynchronize();
          while (uVar6 == uRam0000007c) {
            if (in_RESERVE != '\0') {
              uRam0000007c = storeWordConditionalIndexed(uVar13 + 1,0,0x7c);
              in_cr0 = 2;
            }
            if ((in_cr0 & 2) != 0) goto LAB_00516dac;
          }
        } while( true );
      }
      goto LAB_00516dac;
    }
  }
  else {
    __s = *(char **)(iVar2 + 8);
    sVar9 = strlen(__s);
    if (((lRam00000070 != 0) && (4 < sVar9)) &&
       (iVar10 = FUN_005197dc(__s + (sVar9 - 5),PTR_s__sdat_0071aa58), iVar10 == 0))
    goto LAB_00516c90;
  }
  *(undefined4 *)(iVar2 + 4) = 0x80010707;
LAB_00516dac:
  FUN_0052cd7c(param_1 + 0x98);
  return;
}


// 0x0516fb8 (0x3e0 bytes)
void FUN_00516fb8(int param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  longlong *__dest;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  bool bVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  char cVar15;
  undefined8 uVar13;
  longlong lVar14;
  undefined8 uVar16;
  longlong lVar17;
  GPiece<4> local_70;
  GPiece<20> local_6c;
  
  FUN_0052ce28(param_1 + 0x98);
  iVar2 = *(int *)(param_2 + 0x24);
  __dest = *(longlong **)(iVar2 + 0x50);
  cVar15 = FUN_00510d54(param_1,*(undefined4 *)(iVar2 + 8),__dest);
  if (cVar15 == '\0') {
    instructionSynchronize();
    bVar8 = false;
    if (*(int *)(param_1 + 0x11c) != 0) {
      piVar3 = *(int **)(param_2 + 0x24);
      if (((*piVar3 == 0x10) && (piVar3[4] == 0)) && (piVar3[5] == param_1)) {
        piVar3[1] = 0;
      }
      else {
        piVar3 = *(int **)(param_1 + 0x40);
        if (piVar3 != (int *)0x0) {
          (*(code *)**(undefined4 **)(*piVar3 + 0x14))(piVar3,param_2);
        }
      }
      if (*(int *)(iVar2 + 4) == 0) goto LAB_0051706c;
      bVar8 = true;
    }
    cVar15 = FUN_005155c4(param_1,param_2,local_70,local_6c);
    uVar11 = uRam00000068;
    uVar13 = uRam00000060;
    uVar10 = uRam00000058;
    uVar9 = uRam00000054;
    if (cVar15 == '\0') {
      if (!bVar8) {
        piVar3 = *(int **)(param_2 + 0x24);
        if (((*piVar3 == 0x10) && (piVar3[4] == 0)) && (piVar3[5] == param_1)) {
          piVar3[1] = 0;
        }
        else {
          piVar3 = *(int **)(param_1 + 0x40);
          if (piVar3 != (int *)0x0) {
            (*(code *)**(undefined4 **)(*piVar3 + 0x14))(piVar3,param_2);
          }
        }
      }
    }
    else {
      uVar1 = *(ushort *)(iVar2 + 0x54);
      if ((uVar1 & 0x2000) == 0) {
        uVar13 = FUN_0052fcbc(8,uRam00000080,0);
        *(undefined8 *)(iVar2 + 0x48) = uVar13;
        *(undefined2 *)(iVar2 + 0x54) = 2;
        *(uint *)(iVar2 + 4) = uVar1 & 0x2000;
        if (__dest != (longlong *)0x0) {
          memcpy(__dest,(void *)0x190,0x58);
          lVar17 = *__dest;
          __dest[1] = *(longlong *)(iVar2 + 0x48);
          *(undefined4 *)(__dest + 5) = 2;
          if (lVar17 != 0) {
            lVar14 = FUN_0052fcec(8,uRam00000080,0);
            *__dest = lVar17 + lVar14;
          }
        }
      }
      else {
        puVar12 = (undefined4 *)(iVar2 + 0x10);
        uVar4 = *puVar12;
        *puVar12 = uRam00000050;
        uVar5 = *(undefined4 *)(iVar2 + 0x14);
        uVar6 = *(undefined4 *)(iVar2 + 0x18);
        uVar16 = *(undefined8 *)(iVar2 + 0x20);
        uVar7 = *(undefined4 *)(iVar2 + 0x28);
        *(undefined4 *)(iVar2 + 0x14) = uVar9;
        *(undefined4 *)(iVar2 + 0x18) = uVar10;
        *(undefined8 *)(iVar2 + 0x20) = uVar13;
        *(undefined4 *)(iVar2 + 0x28) = uVar11;
        uVar13 = FUN_005113b4(param_1,iVar2,0,0);
        *(undefined8 *)(iVar2 + 0x38) = uVar13;
        if (*(int *)(iVar2 + 4) == -0x7ffef8ff) {
          piVar3 = *(int **)(param_2 + 0x24);
          if (((*piVar3 == 0x10) && (piVar3[4] == 0)) && (piVar3[5] == param_1)) {
            piVar3[1] = 0;
          }
          else {
            piVar3 = *(int **)(param_1 + 0x40);
            if (piVar3 != (int *)0x0) {
              (*(code *)**(undefined4 **)(*piVar3 + 0x14))(piVar3,param_2);
            }
          }
        }
        *(undefined4 *)(iVar2 + 0x28) = uVar7;
        *puVar12 = uVar4;
        *(undefined4 *)(iVar2 + 0x14) = uVar5;
        *(undefined4 *)(iVar2 + 0x18) = uVar6;
        *(undefined8 *)(iVar2 + 0x20) = uVar16;
      }
    }
  }
  else {
    *(undefined4 *)(iVar2 + 4) = 0;
    *(undefined2 *)(iVar2 + 0x54) = 3;
    *(undefined8 *)(iVar2 + 0x48) = 0;
    if (__dest != (longlong *)0x0) {
      __dest[1] = 0;
      *(undefined4 *)(__dest + 5) = 3;
    }
  }
LAB_0051706c:
  FUN_0052cd7c(param_1 + 0x98);
  return;
}


// SDK libfios.a(fios_dearchive.ppu.o): cell::fios::dearchiver::fillDirEntryFromManifest(cell::fios::mediaioparams*, int)  [exact match]
// 0x0517398 (0x1c8 bytes)
// strings: 00667688: 'Unexpected error from stat(%s) in executeReadDirectory: %d\n'

void FUN_00517398(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  char *__s;
  short sVar4;
  size_t sVar3;
  undefined8 local_100;
  undefined8 local_f8;
  undefined4 local_d8;
  undefined4 local_a8;
  int local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_68;
  undefined8 *local_58;
  
  iVar1 = *(int *)(param_2 + 0x24);
  puVar2 = *(undefined8 **)(iVar1 + 0x50);
  memset(&local_a8,0,0x56);
  local_a0 = 0;
  local_9c = _ZN4cell4fios8pathhashEPKc(0);
  __s = (char *)((int)puVar2 + 0x1a);
  local_98 = *(undefined4 *)PTR_DAT_0071aa1c;
  local_80 = *(undefined4 *)(PTR_DAT_0071aa1c + 0x18);
  local_94 = *(undefined4 *)(PTR_DAT_0071aa1c + 4);
  local_90 = *(undefined4 *)(PTR_DAT_0071aa1c + 8);
  local_88 = *(undefined8 *)(PTR_DAT_0071aa1c + 0x10);
  local_a8 = 8;
  local_a0 = FUN_00510cec(param_1,param_3,__s);
  local_9c = _ZN4cell4fios8pathhashEPKc(local_a0);
  local_58 = &local_100;
  *(undefined4 **)(param_2 + 0x24) = &local_a8;
  local_68 = 0x58;
  FUN_00516fb8(param_1,param_2);
  *(int *)(param_2 + 0x24) = iVar1;
  if (local_a4 == 0) {
    sVar4 = FUN_005c85b4(__s,0x2f);
    *puVar2 = local_100;
    puVar2[1] = local_f8;
    *(undefined4 *)(puVar2 + 2) = local_d8;
    sVar4 = (sVar4 - (short)__s) + 1;
    sVar3 = strlen(__s);
    *(undefined4 *)(iVar1 + 4) = 0;
    *(undefined8 *)(iVar1 + 0x48) = 0x120;
    *(short *)((int)puVar2 + 0x14) = (short)sVar3 - sVar4;
    *(short *)((int)puVar2 + 0x16) = (short)sVar3;
    *(short *)(puVar2 + 3) = sVar4;
  }
  else {
    _ZN4cell4fios8platform10FIOSprintfEPKcz(PTR_s_Unexpected_error_from_stat__s__i_0071aa5c,__s,local_a4);
    *(int *)(iVar1 + 4) = local_a4;
  }
  return;
}


// SDK libfios.a(fios_dearchive.ppu.o): cell::fios::dearchiver::executeReadArchiveDirectory(cell::fios::mediaioparams*)  [fuzzy 1.000 match]
// 0x0517560 (0x278 bytes)
// strings: 006676d0: "fios archive readdir: couldn't rebuild manifest path table!\n" | 00667710: "fios archive readdir: couldn't load manifest for archive '%s'\n"

void FUN_00517560(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar8;
  int iVar9;
  longlong lVar7;
  int iVar10;
  char cVar11;
  int iVar12;
  ulonglong uVar13;
  int iVar14;
  byte in_cr0;
  byte in_cr1;
  byte in_cr2;
  byte in_cr3;
  byte unaff_cr4;
  byte in_cr5;
  byte in_cr6;
  byte in_cr7;
  ulonglong uVar15;
  uint uStack00000008;
  
  uStack00000008 =
       (uint)(in_cr0 & 0xf) << 0x1c | (uint)(in_cr1 & 0xf) << 0x18 | (uint)(in_cr2 & 0xf) << 0x14 |
       (uint)(in_cr3 & 0xf) << 0x10 | (uint)(unaff_cr4 & 0xf) << 0xc | (uint)(in_cr5 & 0xf) << 8 |
       (uint)(in_cr6 & 0xf) << 4 | (uint)(in_cr7 & 0xf);
  iVar8 = param_1 + 0x98;
  iVar1 = *(int *)(param_2 + 0x24);
  uVar2 = *(undefined4 *)(iVar1 + 8);
  FUN_0052ce28(iVar8);
  iVar9 = param_1 + 0xb0;
  lwmutex_lock_checked(iVar9);
  puVar3 = *(undefined4 **)(param_1 + 0x164);
  do {
    if (puVar3 == (undefined4 *)0x0) {
LAB_00517614:
      *(undefined4 *)(iVar1 + 4) = 0x80010706;
      lwmutex_unlock_checked(iVar9);
      FUN_0052cd7c(iVar8);
      return;
    }
    iVar10 = FUN_005cc784(puVar3 + 0x23,uVar2);
    if (iVar10 == 0) {
      if (puVar3 != (undefined4 *)0x0) {
        if (puVar3[0x21] == 0) {
          cVar11 = FUN_0051514c(param_1,param_2,puVar3);
          if (cVar11 == '\0') {
            _ZN4cell4fios8platform10FIOSprintfEPKcz(PTR_s_fios_archive_readdir__couldn_t_l_0071aa64,puVar3 + 0x23);
          }
          else {
            cVar11 = FUN_005123b8(param_1);
            if (cVar11 == '\0') {
              _ZN4cell4fios8platform10FIOSprintfEPKcz(PTR_s_fios_archive_readdir__couldn_t_r_0071aa60);
            }
          }
        }
        iVar10 = puVar3[0x22];
        uVar4 = puVar3[0x21];
        FUN_0052cd7c(iVar8);
        uVar5 = *(uint *)(param_1 + 0x238);
        if (0 < (int)uVar5) {
          uVar15 = (ulonglong)uVar5;
          iVar14 = 0;
          iVar8 = 0;
          uVar13 = 0;
          do {
            iVar12 = 0;
            if ((uVar13 & 0xffffffff) < (ulonglong)uVar5) {
              iVar12 = (int)((uVar13 & 0x3fffffff) << 2);
            }
            uVar6 = *(uint *)(iVar12 + *(int *)(param_1 + 0x230));
            if (((uVar4 <= uVar6) && (lVar7 = (longlong)iVar8, uVar6 <= (uVar4 + iVar10) - 1)) &&
               (iVar8 = iVar8 + 1, lVar7 == *(longlong *)(iVar1 + 0x30))) {
              lwmutex_unlock_checked(iVar9);
              FUN_00517398(param_1,param_2,iVar14);
              return;
            }
            iVar14 = iVar14 + 1;
            uVar13 = uVar13 + 1;
            uVar15 = uVar15 - 1;
          } while (uVar15 != 0);
        }
        *(undefined4 *)(iVar1 + 4) = 0x8001070b;
        lwmutex_unlock_checked(iVar9);
        return;
      }
      goto LAB_00517614;
    }
    puVar3 = (undefined4 *)*puVar3;
  } while( true );
}


// SDK libfios.a(fios_dearchive.ppu.o): cell::fios::dearchiver::executeReadDirectory(cell::fios::mediaioparams*)  [fuzzy 1.000 match]
// 0x05177d8 (0x574 bytes)
// strings: 00667710: "fios archive readdir: couldn't load manifest for archive '%s'\n" | 006676d0: "fios archive readdir: couldn't rebuild manifest path table!\n"

void FUN_005177d8(int *param_1,int param_2)

{
  bool bVar1;
  undefined8 *puVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  size_t sVar7;
  int iVar8;
  char cVar12;
  int iVar9;
  int iVar10;
  short sVar11;
  undefined4 *puVar13;
  char *pcVar14;
  undefined8 uVar15;
  longlong lVar16;
  byte in_cr0;
  byte in_cr1;
  byte in_cr2;
  byte in_cr3;
  byte unaff_cr4;
  byte in_cr5;
  byte in_cr6;
  byte in_cr7;
  uint uStack00000008;
  GPiece<256> local_290;
  GPiece<264> auStack_190;
  
  uStack00000008 =
       (uint)(in_cr0 & 0xf) << 0x1c | (uint)(in_cr1 & 0xf) << 0x18 | (uint)(in_cr2 & 0xf) << 0x14 |
       (uint)(in_cr3 & 0xf) << 0x10 | (uint)(unaff_cr4 & 0xf) << 0xc | (uint)(in_cr5 & 0xf) << 8 |
       (uint)(in_cr6 & 0xf) << 4 | (uint)(in_cr7 & 0xf);
  bVar1 = false;
  iVar10 = *(int *)(param_2 + 0x24);
  pcVar14 = *(char **)(iVar10 + 8);
  sVar7 = strlen(pcVar14);
  piVar5 = param_1 + 0x26;
  puVar2 = *(undefined8 **)(iVar10 + 0x50);
  FUN_0052ce28(piVar5);
  piVar6 = param_1 + 0x2c;
  lwmutex_lock_checked(piVar6);
  puVar13 = (undefined4 *)param_1[0x59];
joined_r0x0051789c:
  if (puVar13 != (undefined4 *)0x0) {
    do {
      if ((puVar13[0xb] & 2) == 0) {
        uVar3 = puVar13[99];
        if (sVar7 < uVar3) goto LAB_005178c0;
        iVar8 = FUN_005ccb28(puVar13 + 0x23,pcVar14,uVar3);
        if ((iVar8 != 0) || ((pcVar14[uVar3] != '\0' && (pcVar14[uVar3] != '/'))))
        goto LAB_005178c0;
      }
      if (puVar13[0x21] != 0) goto LAB_005178c0;
      cVar12 = FUN_0051514c(param_1,param_2,puVar13);
      bVar1 = true;
      if (cVar12 != '\0') goto LAB_005178c0;
      _ZN4cell4fios8platform10FIOSprintfEPKcz(PTR_s_fios_archive_readdir__couldn_t_l_0071aa64,puVar13 + 0x23);
      puVar13 = (undefined4 *)*puVar13;
      if (puVar13 == (undefined4 *)0x0) break;
    } while( true );
  }
  FUN_0052cd7c(piVar5);
  if ((bVar1) && (cVar12 = FUN_005123b8(param_1), cVar12 == '\0')) {
    _ZN4cell4fios8platform10FIOSprintfEPKcz(PTR_s_fios_archive_readdir__couldn_t_r_0071aa60);
  }
  lVar16 = *(longlong *)(iVar10 + 0x30);
  iVar8 = FUN_005111e4(param_1,pcVar14);
  bVar1 = iVar8 == -1;
  if ((!bVar1) && (iVar4 = param_1[0x8e], iVar8 < iVar4)) {
    do {
      while( true ) {
        cVar12 = FUN_005110d8(param_1,iVar8,pcVar14);
        bVar1 = lVar16 == 0;
        if (cVar12 == '\0') break;
        lVar16 = lVar16 + -1;
        iVar9 = iVar8 + 1;
        if (bVar1) {
          lwmutex_unlock_checked(piVar6,iVar8,pcVar14,auStack_190);
          FUN_00517398(param_1,param_2,iVar8);
          goto LAB_00517ab0;
        }
        iVar8 = iVar9;
        if (iVar4 <= iVar9) goto LAB_00517a24;
      }
      cVar12 = FUN_00510f38(param_1);
      iVar9 = iVar8;
      if (cVar12 == '\0') break;
      iVar9 = FUN_005cc784(auStack_190,local_290);
      if (iVar9 != 0) {
        if (lVar16 == 0) {
          pcVar14 = (char *)((int)puVar2 + 0x1a);
          lwmutex_unlock_checked(piVar6,auStack_190,0x100);
          FUN_005193cc(pcVar14,auStack_190,0x100);
          sVar11 = FUN_005c85b4(pcVar14,0x2f);
          *(undefined4 *)(puVar2 + 2) = 3;
          sVar11 = (sVar11 - (short)pcVar14) + 1;
          *puVar2 = 0;
          puVar2[1] = 0;
          sVar7 = strlen(pcVar14);
          *(undefined8 *)(iVar10 + 0x48) = 0x120;
          *(undefined4 *)(iVar10 + 4) = 0;
          *(short *)((int)puVar2 + 0x14) = (short)sVar7 - sVar11;
          *(short *)((int)puVar2 + 0x16) = (short)sVar7;
          *(short *)(puVar2 + 3) = sVar11;
          goto LAB_00517ab0;
        }
        lVar16 = lVar16 + -1;
        FUN_005193cc(local_290);
      }
      iVar9 = iVar8 + 1;
      iVar8 = iVar9;
    } while (iVar9 < iVar4);
LAB_00517a24:
    bVar1 = iVar9 == -1;
  }
  lwmutex_unlock_checked(piVar6);
  piVar6 = *(int **)(param_2 + 0x24);
  uVar15 = *(undefined8 *)(iVar10 + 0x30);
  *(longlong *)(iVar10 + 0x30) = lVar16;
  if (((*piVar6 == 0x10) && (piVar6[4] == 0)) && ((int *)piVar6[5] == param_1)) {
    piVar6[1] = 0;
  }
  else {
    piVar6 = (int *)param_1[0x10];
    if (piVar6 != (int *)0x0) {
      (*(code *)**(undefined4 **)(*piVar6 + 0x14))(piVar6,param_2);
    }
  }
  *(undefined8 *)(iVar10 + 0x30) = uVar15;
  if (((!bVar1) && (*(int *)(iVar10 + 4) != 0)) && (*(int *)(iVar10 + 4) != -0x7ffef8f5)) {
    *(undefined4 *)(iVar10 + 4) = 0x8001070b;
  }
LAB_00517ab0:
  if (*(int *)(iVar10 + 4) == 0) {
    cVar12 = (*(code *)**(undefined4 **)(*param_1 + 0x20))(param_1,(int)puVar2 + 0x1a);
    if (cVar12 != '\0') {
      FUN_0052ce28(piVar5);
      for (puVar13 = (undefined4 *)param_1[0x59]; puVar13 != (undefined4 *)0x0;
          puVar13 = (undefined4 *)*puVar13) {
        if (((puVar13[0xb] & 2) == 0) &&
           (iVar10 = FUN_005cc784(puVar13 + 0x23,(int)puVar2 + 0x1a), iVar10 == 0)) {
          puVar2[1] = 0;
          *puVar2 = 0;
          *(undefined4 *)(puVar2 + 2) = 3;
          sVar11 = (*(code *)**(undefined4 **)(*param_1 + 0x24))
                             (param_1,(int)puVar2 + *(ushort *)(puVar2 + 3) + 0x1a);
          *(short *)((int)puVar2 + 0x14) = sVar11;
          *(short *)((int)puVar2 + 0x16) = sVar11 + *(short *)(puVar2 + 3);
          *(undefined1 *)((int)puVar2 + (ushort)(sVar11 + *(short *)(puVar2 + 3)) + 0x1a) = 0;
          break;
        }
      }
      FUN_0052cd7c(piVar5);
    }
  }
  return;
LAB_005178c0:
  puVar13 = (undefined4 *)*puVar13;
  goto joined_r0x0051789c;
}


// SDK libfios.a(fios_dearchive.ppu.o): cell::fios::dearchiver::executeOpenArchive(cell::fios::mediaioparams*)  [fuzzy 1.000 match]
// 0x0517d4c (0xc5c bytes)
// strings: 00667798: "fios open archive '%s' failed %s: err = %d\n" | 006677f8: 'allocating tracker' | 006677c8: 'reading header' | 005187f4: '}+Kxy)' (raw) | 00667750: "fios open archive '%s' will not read contents: mode != kO_RDONLY\n" | 00667860: 'closing file' | 00667858: 'stat' (raw) | 006677d8: 'close for reopen' | 00667840: 'reading/allocating TOC' | 00667810: 'algorithm check - no matching decompressor' | 006677f0: 'reopen'

void FUN_00517d4c(int *param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int *piVar9;
  int iVar10;
  int *piVar11;
  undefined *puVar12;
  undefined *puVar13;
  int *piVar14;
  undefined4 *puVar15;
  int iVar16;
  int *piVar17;
  char cVar18;
  undefined8 uVar19;
  uint uVar20;
  uint uVar21;
  int *piVar22;
  int *piVar23;
  longlong lVar24;
  int *piVar25;
  int local_220 [12];
  undefined4 local_1f0;
  int local_1ec;
  undefined4 local_1e8;
  undefined4 local_1e4;
  int local_1e0;
  undefined4 local_1dc;
  undefined4 local_1d8;
  undefined8 local_1d0;
  undefined4 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined2 local_19c;
  undefined4 local_198;
  int local_194;
  undefined4 local_190;
  undefined4 local_18c;
  int local_188;
  undefined4 local_184;
  undefined4 local_180;
  undefined8 local_178;
  undefined4 local_170;
  undefined8 local_168;
  undefined8 local_158;
  undefined8 local_150;
  int *local_148;
  undefined2 local_144;
  undefined4 local_140;
  int local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined8 local_120;
  undefined4 local_118;
  undefined8 local_110;
  undefined8 local_100;
  undefined8 local_f8;
  int *local_f0;
  undefined2 local_ec;
  undefined4 local_e8;
  int local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  int local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined2 local_94;
  
  iVar2 = *(int *)(param_2 + 0x24);
  local_118 = 0;
  local_180 = 0;
  local_190 = 0;
  local_18c = 0;
  local_188 = 0;
  local_184 = 0;
  local_178 = 0;
  local_170 = 0;
  local_138 = 0;
  local_134 = 0;
  local_130 = 0;
  local_12c = 0;
  local_128 = 0;
  local_120 = 0;
  if ((*(ushort *)(iVar2 + 0x54) & 3) != 1) {
    _ZN4cell4fios8platform10FIOSprintfEPKcz(PTR_s_fios_open_archive___s__will_not_r_0071aa68,*(undefined4 *)(iVar2 + 8));
    FUN_00516bcc(param_1,param_2);
    return;
  }
  if ((*(uint *)(PTR_DAT_0071a9d8 + 0x18) & 4) != 0) {
    FUN_00527944(*(undefined4 *)(param_2 + 0xc));
  }
  piVar14 = param_1 + 0x26;
  _ZN4cell4fios8platform6rwlock9writeLockEv(piVar14);
  piVar11 = param_1 + 0x59;
  piVar23 = (int *)*piVar11;
  if (piVar23 != (int *)0x0) {
    uVar3 = *(undefined4 *)(iVar2 + 8);
    do {
      iVar16 = FUN_005cc784(uVar3,piVar23 + 0x23);
      if (iVar16 == 0) {
        iVar16 = piVar23[0x1e];
        *(undefined8 *)(iVar2 + 0x20) = *(undefined8 *)(piVar23 + 0x18);
        uVar19 = *(undefined8 *)(piVar23 + 0x66);
        iVar4 = piVar23[0x14];
        iVar5 = piVar23[0x15];
        iVar6 = piVar23[0x16];
        piVar23[0x1e] = iVar16 + 1;
        *(int *)(iVar2 + 0x28) = piVar23[0x1a];
        *(undefined4 *)(iVar2 + 4) = 0;
        *(int *)(iVar2 + 0x10) = iVar4;
        *(int *)(iVar2 + 0x14) = iVar5;
        *(int *)(iVar2 + 0x18) = iVar6;
        *(undefined8 *)(iVar2 + 0x48) = uVar19;
        FUN_0052cc20(piVar14);
        return;
      }
      piVar23 = (int *)*piVar23;
    } while (piVar23 != (int *)0x0);
  }
  FUN_0052cc20(piVar14);
  FUN_00516bcc(param_1,param_2);
  if (*(int *)(iVar2 + 4) != 0) {
    return;
  }
  piVar23 = (int *)(iVar2 + 0x10);
  puVar15 = (undefined4 *)(iVar2 + 8);
  local_178 = *(undefined8 *)(iVar2 + 0x20);
  local_184 = *(undefined4 *)(iVar2 + 0x14);
  local_198 = 10;
  local_190 = *puVar15;
  local_194 = -0x7ffef8ff;
  local_180 = *(undefined4 *)(iVar2 + 0x18);
  local_18c = *(undefined4 *)(iVar2 + 0xc);
  local_188 = *piVar23;
  local_170 = *(undefined4 *)(iVar2 + 0x28);
  local_158 = 0x30;
  local_150 = 0;
  local_168 = 0;
  if ((*(ushort *)(iVar2 + 0x54) & 0x300) == 0) {
    local_144 = 0xc;
  }
  else {
    local_144 = 0xe;
  }
  *(undefined4 **)(param_2 + 0x24) = &local_198;
  local_148 = local_220;
  FUN_0051399c(param_1,param_2);
  *(int *)(param_2 + 0x24) = iVar2;
  if (local_194 != 0) {
LAB_005184a0:
    _ZN4cell4fios8platform10FIOSprintfEPKcz(PTR_s_fios_open_archive___s__failed__s_0071aa6c,local_190,
                     PTR_s_reading_header_0071aa70,local_194);
    *(int *)(iVar2 + 4) = local_194;
    goto LAB_005181d0;
  }
  lVar24 = 0;
  if (local_220[0] == 0x4d534600) {
    local_e8 = 0xd;
    local_c8 = *(undefined8 *)(iVar2 + 0x20);
    local_e4 = -0x7ffef8ff;
    local_d4 = *(undefined4 *)(iVar2 + 0x14);
    local_d0 = *(undefined4 *)(iVar2 + 0x18);
    local_e0 = *puVar15;
    local_dc = *(undefined4 *)(iVar2 + 0xc);
    local_d8 = *piVar23;
    local_c0 = *(undefined4 *)(iVar2 + 0x28);
    *(undefined4 **)(param_2 + 0x24) = &local_e8;
    local_94 = 0;
    local_a0 = 0;
    local_a8 = 0;
    local_b8 = 0;
    local_98 = 0;
    FUN_00516634(param_1,param_2);
    *(int *)(param_2 + 0x24) = iVar2;
    if (local_e4 != 0) {
      _ZN4cell4fios8platform10FIOSprintfEPKcz(PTR_s_fios_open_archive___s__failed__s_0071aa6c,local_e0,
                       PTR_s_close_for_reopen_0071aa74,local_e4);
      *(int *)(iVar2 + 4) = local_e4;
      return;
    }
    uVar3 = *(undefined4 *)(PTR_DAT_0071aa1c + 0x18);
    iVar16 = *(int *)PTR_DAT_0071aa1c;
    uVar7 = *(undefined4 *)(PTR_DAT_0071aa1c + 4);
    uVar8 = *(undefined4 *)(PTR_DAT_0071aa1c + 8);
    uVar19 = *(undefined8 *)(PTR_DAT_0071aa1c + 0x10);
    *(ushort *)(iVar2 + 0x54) = *(ushort *)(iVar2 + 0x54) | 0x800;
    *piVar23 = iVar16;
    *(undefined4 *)(iVar2 + 0x14) = uVar7;
    *(undefined4 *)(iVar2 + 0x18) = uVar8;
    *(undefined8 *)(iVar2 + 0x20) = uVar19;
    *(undefined4 *)(iVar2 + 0x28) = uVar3;
    FUN_00516bcc(param_1,param_2);
    *(ushort *)(iVar2 + 0x54) =
         (ushort)((((ulonglong)*(ushort *)(iVar2 + 0x54) << 0x20) >> 0x2c) << 0xc) |
         (ushort)((((ulonglong)*(ushort *)(iVar2 + 0x54) & 0x7ff) << 0x14) >> 0x10) >> 4;
    if (*(int *)(iVar2 + 4) != 0) {
      _ZN4cell4fios8platform10FIOSprintfEPKcz(PTR_s_fios_open_archive___s__failed__s_0071aa6c,*puVar15,
                       PTR_s_reopen_0071aa78,*(undefined4 *)(iVar2 + 4));
      return;
    }
    local_188 = *piVar23;
    local_178 = *(undefined8 *)(iVar2 + 0x20);
    local_184 = *(undefined4 *)(iVar2 + 0x14);
    lVar24 = 0x10000;
    local_180 = *(undefined4 *)(iVar2 + 0x18);
    local_170 = *(undefined4 *)(iVar2 + 0x28);
    *(undefined4 **)(param_2 + 0x24) = &local_198;
    local_168 = 0x10000;
    local_150 = 0;
    local_194 = -0x7ffef8ff;
    FUN_0051399c(param_1,param_2);
    *(int *)(param_2 + 0x24) = iVar2;
    if (local_194 != 0) goto LAB_005184a0;
  }
  piVar17 = (int *)(*(code *)**(undefined4 **)**(undefined4 **)(PTR_DAT_0071a9d8 + 8))
                             (*(undefined4 **)(PTR_DAT_0071a9d8 + 8),0x1f0,0x10600103,0,0);
  puVar13 = PTR_s_allocating_tracker_0071aa7c;
  puVar12 = PTR_s_fios_open_archive___s__failed__s_0071aa6c;
  if (piVar17 == (int *)0x0) {
    *(undefined4 *)(iVar2 + 4) = 0x8001070a;
    piVar17 = (int *)0x0;
    _ZN4cell4fios8platform10FIOSprintfEPKcz(puVar12,*puVar15,puVar13,0xffffffff8001070a);
LAB_00518128:
    if (piVar17 == (int *)0x0) goto LAB_005181d0;
    piVar25 = piVar17 + 2;
  }
  else {
    uVar3 = *puVar15;
    piVar25 = piVar17 + 2;
    *piVar17 = 0;
    FUN_005308d4(piVar25,local_220);
    iVar16 = *(int *)(iVar2 + 0x14);
    iVar4 = *(int *)(iVar2 + 0x18);
    uVar19 = *(undefined8 *)(iVar2 + 0x20);
    iVar5 = *piVar23;
    piVar17[0x1a] = *(int *)(iVar2 + 0x28);
    piVar17[0x12] = -1;
    piVar17[0x15] = iVar16;
    piVar17[0x16] = iVar4;
    *(undefined8 *)(piVar17 + 0x18) = uVar19;
    piVar17[0x14] = iVar5;
    piVar17[0x1e] = 1;
    piVar17[0x22] = 0;
    *(longlong *)(piVar17 + 0x1c) = lVar24;
    piVar17[0x1f] = 0;
    piVar17[0x20] = 0;
    piVar17[0x21] = 0;
    FUN_005193cc(piVar17 + 0x23,uVar3,0x100);
    cVar18 = FUN_0052fc08(piVar25);
    if ((cVar18 == '\0') ||
       (*(longlong *)(iVar2 + 0x48) <=
        (longlong)((ulonglong)(uint)piVar17[7] + *(longlong *)(piVar17 + 0xc)))) {
      *(undefined4 *)(iVar2 + 4) = 0x8001070f;
      goto LAB_00518128;
    }
    uVar20 = param_1[0x40];
    piVar22 = param_1 + 0x41;
    uVar21 = 0;
    if (uVar20 != 0) {
      do {
        iVar16 = *piVar22;
        piVar22 = piVar22 + 1;
        if (piVar17[6] == *(int *)(iVar16 + 4)) {
          piVar17[0x12] = uVar21;
          uVar20 = param_1[0x40];
        }
        uVar21 = uVar21 + 1;
      } while (uVar21 < uVar20);
    }
    puVar13 = PTR_s_algorithm_check___no_matching_de_0071aa80;
    puVar12 = PTR_s_fios_open_archive___s__failed__s_0071aa6c;
    if (piVar17[0x12] == -1) {
      *(undefined4 *)(iVar2 + 4) = 0x8001070f;
      _ZN4cell4fios8platform10FIOSprintfEPKcz(puVar12,*puVar15,puVar13,0xffffffff8001070f);
    }
    else {
      cVar18 = FUN_00513cc4(param_1,param_2,piVar17);
      puVar13 = PTR_s_reading_allocating_TOC_0071aa84;
      puVar12 = PTR_s_fios_open_archive___s__failed__s_0071aa6c;
      if (cVar18 == '\0') {
        *(undefined4 *)(iVar2 + 4) = 0x8001070a;
        _ZN4cell4fios8platform10FIOSprintfEPKcz(puVar12,*puVar15,puVar13,0xffffffff8001070a);
      }
      else {
        iVar16 = (*(code *)**(undefined4 **)(*param_1 + 0x24))(param_1,*puVar15);
        uVar1 = *(ushort *)(iVar2 + 0x54);
        piVar17[99] = iVar16;
        piVar17[0x7a] = (uint)uVar1;
        if (lVar24 != 0) {
          piVar17[0x7a] = uVar1 | 0x800;
        }
        local_140 = 8;
        local_13c = -0x7ffef8ff;
        local_134 = *(undefined4 *)(iVar2 + 0xc);
        local_f0 = piVar17 + 100;
        local_138 = *puVar15;
        local_118 = *(undefined4 *)(PTR_DAT_0071aa1c + 0x18);
        local_130 = *(undefined4 *)PTR_DAT_0071aa1c;
        local_12c = *(undefined4 *)(PTR_DAT_0071aa1c + 4);
        local_128 = *(undefined4 *)(PTR_DAT_0071aa1c + 8);
        local_120 = *(undefined8 *)(PTR_DAT_0071aa1c + 0x10);
        local_100 = 0x58;
        local_ec = 0;
        local_110 = 0;
        local_f8 = 0;
        if ((piVar17[0x7a] & 0x100U) == 0) {
          if ((piVar17[0x7a] & 0x200U) != 0) {
            local_ec = 0x2000;
          }
        }
        else {
          local_ec = 0x1000;
        }
        *(undefined4 **)(param_2 + 0x24) = &local_140;
        FUN_00516fb8(param_1,param_2);
        *(int *)(param_2 + 0x24) = iVar2;
        puVar12 = PTR_s_fios_open_archive___s__failed__s_0071aa6c;
        if (local_13c == 0) {
          _ZN4cell4fios8platform6rwlock9writeLockEv(piVar14);
          piVar22 = (int *)*piVar11;
          if (piVar22 != (int *)0x0) {
            uVar3 = *puVar15;
            piVar9 = piVar22;
            do {
              iVar16 = FUN_005cc784(uVar3,piVar9 + 0x23);
              if (iVar16 == 0) {
                if (piVar9 != (int *)0x0) {
                  (*(code *)**(undefined4 **)(**(int **)(PTR_DAT_0071a9d8 + 8) + 4))
                            (*(int **)(PTR_DAT_0071a9d8 + 8),piVar17[0x20],0x10610200,0,0);
                  FUN_00530770(piVar25);
                  (*(code *)**(undefined4 **)(**(int **)(PTR_DAT_0071a9d8 + 8) + 4))
                            (*(int **)(PTR_DAT_0071a9d8 + 8),piVar17,0x10600103,0,0);
                  local_e4 = -0x7ffef8ff;
                  local_e8 = 0xd;
                  local_c8 = *(undefined8 *)(iVar2 + 0x20);
                  local_d4 = *(undefined4 *)(iVar2 + 0x14);
                  local_d0 = *(undefined4 *)(iVar2 + 0x18);
                  local_dc = *(undefined4 *)(iVar2 + 0xc);
                  local_e0 = *puVar15;
                  local_d8 = *piVar23;
                  local_c0 = *(undefined4 *)(iVar2 + 0x28);
                  *(undefined4 **)(param_2 + 0x24) = &local_e8;
                  local_94 = 0;
                  local_a0 = 0;
                  local_a8 = 0;
                  local_b8 = 0;
                  local_98 = 0;
                  FUN_00516634(param_1,param_2);
                  *(int *)(param_2 + 0x24) = iVar2;
                  if (local_e4 != 0) {
                    _ZN4cell4fios8platform10FIOSprintfEPKcz(PTR_s_fios_open_archive___s__failed__s_0071aa6c,local_e0,
                                     PTR_s_closing_file_0071aa8c,local_e4);
                  }
                  iVar16 = piVar9[0x1e];
                  iVar4 = piVar9[0x1a];
                  *(undefined8 *)(iVar2 + 0x20) = *(undefined8 *)(piVar9 + 0x18);
                  uVar19 = *(undefined8 *)(piVar9 + 0x66);
                  iVar5 = piVar9[0x14];
                  iVar6 = piVar9[0x15];
                  iVar10 = piVar9[0x16];
                  piVar9[0x1e] = iVar16 + 1;
                  *(int *)(iVar2 + 0x28) = iVar4;
                  *(undefined4 *)(iVar2 + 4) = 0;
                  *piVar23 = iVar5;
                  *(int *)(iVar2 + 0x14) = iVar6;
                  *(int *)(iVar2 + 0x18) = iVar10;
                  *(undefined8 *)(iVar2 + 0x48) = uVar19;
                  FUN_0052cc20(piVar14);
                  return;
                }
                break;
              }
              piVar9 = (int *)*piVar9;
            } while (piVar9 != (int *)0x0);
          }
          if (param_1[0x46] == 0) {
            piVar23 = (int *)*piVar11;
            while (piVar25 = piVar23, piVar25 != (int *)0x0) {
              piVar11 = piVar25;
              piVar23 = (int *)*piVar25;
            }
            *piVar11 = (int)piVar17;
          }
          else {
            *piVar17 = (int)piVar22;
            *piVar11 = (int)piVar17;
          }
          lwmutex_lock_checked(param_1 + 0x90);
          memset(param_1 + 0x9a,0,0x860);
          lwmutex_unlock_checked(param_1 + 0x90);
          FUN_0052cc20(piVar14);
          return;
        }
        *(int *)(iVar2 + 4) = local_13c;
        _ZN4cell4fios8platform10FIOSprintfEPKcz(puVar12,local_138,PTR_DAT_0071aa88,local_13c);
      }
    }
  }
  if (piVar17[0x20] != 0) {
    (*(code *)**(undefined4 **)(**(int **)(PTR_DAT_0071a9d8 + 8) + 4))
              (*(int **)(PTR_DAT_0071a9d8 + 8),piVar17[0x20],0x10610200,0,0);
  }
  FUN_00530770(piVar25);
  (*(code *)**(undefined4 **)(**(int **)(PTR_DAT_0071a9d8 + 8) + 4))
            (*(int **)(PTR_DAT_0071a9d8 + 8),piVar17,0x10600103,0,0);
LAB_005181d0:
  local_1ec = -0x7ffef8ff;
  local_1f0 = 0xd;
  local_1d0 = *(undefined8 *)(iVar2 + 0x20);
  local_1dc = *(undefined4 *)(iVar2 + 0x14);
  local_1d8 = *(undefined4 *)(iVar2 + 0x18);
  local_1e4 = *(undefined4 *)(iVar2 + 0xc);
  local_1e8 = *puVar15;
  local_1e0 = *piVar23;
  local_1c8 = *(undefined4 *)(iVar2 + 0x28);
  *(undefined4 **)(param_2 + 0x24) = &local_1f0;
  local_19c = 0;
  local_1a8 = 0;
  local_1b0 = 0;
  local_1c0 = 0;
  local_1a0 = 0;
  FUN_00516634(param_1,param_2);
  *(int *)(param_2 + 0x24) = iVar2;
  if (local_1ec != 0) {
    _ZN4cell4fios8platform10FIOSprintfEPKcz(PTR_s_fios_open_archive___s__failed__s_0071aa6c,local_1e8,
                     PTR_s_closing_file_0071aa8c,local_1ec);
  }
  *(undefined4 *)(iVar2 + 0x28) = 0;
  *piVar23 = 0;
  *(undefined4 *)(iVar2 + 0x14) = 0;
  *(undefined4 *)(iVar2 + 0x18) = 0;
  *(undefined8 *)(iVar2 + 0x20) = 0;
  return;
}


// 0x05189a8 (0x1c4 bytes)
void FUN_005189a8(int *param_1,int param_2)

{
  uint *puVar1;
  int *piVar2;
  
  if (*(char *)(param_1 + 0x45) == '\0') {
    if ((*(ushort *)(param_2 + 0x28) & 1) != 0) {
      (*(code *)**(undefined4 **)(*param_1 + 8))(param_1,param_2);
      return;
    }
    puVar1 = *(uint **)(param_2 + 0x24);
    puVar1[1] = 0x80010701;
    puVar1[0x12] = 0;
    puVar1[0x13] = 0;
    if (*puVar1 < 0x14) {
                    /* WARNING: Could not recover jumptable at 0x00518a40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(PTR_DAT_0071aa90 + *(int *)(PTR_DAT_0071aa90 + *puVar1 * 4)))();
      return;
    }
    if (((*puVar1 == 0x10) && (puVar1[4] == 0)) && ((int *)puVar1[5] == param_1)) {
      puVar1[1] = 0;
      return;
    }
    piVar2 = (int *)param_1[0x10];
  }
  else {
    piVar2 = *(int **)(param_2 + 0x24);
    if (((*piVar2 == 0x10) && (piVar2[4] == 0)) && ((int *)piVar2[5] == param_1)) {
      piVar2[1] = 0;
      return;
    }
    piVar2 = (int *)param_1[0x10];
  }
  if (piVar2 == (int *)0x0) {
    return;
  }
  (*(code *)**(undefined4 **)(*piVar2 + 0x14))(piVar2,param_2);
  return;
}


// 0x0518fcc (0xc bytes)
undefined1 FUN_00518fcc(void)

{
  return *PTR_DAT_0071aaa0;
}


// 0x0518fd8 (0xc bytes)
undefined4 FUN_00518fd8(void)

{
  return *(undefined4 *)(PTR_DAT_0071aaa4 + 8);
}


