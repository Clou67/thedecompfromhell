// sdk/libfios/fios_internal.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 11 functions, 0x518fec-0x5198dc
#include <string.h>
#include "sdk/libfios/fios_internal.h"
#include "sdk/libfios/fios_media.h"
#include "sdk/libfios/fios_media_ps3ppu.h"
#include "sdk/libfios/fios_op.h"
#include "sdk/libfios/fios_platform_ps3ppu.h"
#include "sdk/libfios/fios_ps3ppu.h"

// SDK libfios.a(fios_internal.ppu.o): cell::fios::getDataHash(char const*, unsigned int)  [exact match]
// 0x0518fec (0x164 bytes)
ulonglong _ZN4cell4fios11getDataHashEPKcj(byte *param_1,uint param_2)

{
  byte *pbVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  if ((param_2 != 0) && (param_1 != (byte *)0x0)) {
    uVar3 = ((ulonglong)param_2 << 0x20) >> 0x22;
    uVar2 = (ulonglong)param_2;
    pbVar1 = param_1;
    if (param_2 >> 2 != 0) {
      do {
        uVar2 = (ulonglong)pbVar1[1] * 0x100 + (ulonglong)*pbVar1 + uVar2;
        uVar2 = uVar2 ^ ((ulonglong)pbVar1[3] * 0x100 + (ulonglong)pbVar1[2]) * 0x800 ^
                (uVar2 & 0xffff) << 0x10;
        uVar2 = uVar2 + ((uVar2 << 0x20) >> 0x2b);
        uVar3 = uVar3 - 1;
        pbVar1 = pbVar1 + 4;
      } while (uVar3 != 0);
      param_1 = param_1 + (param_2 & 0xfffffffc);
    }
    param_2 = param_2 & 3;
    if (param_2 == 2) {
      uVar2 = (ulonglong)param_1[1] * 0x100 + (ulonglong)*param_1 + uVar2;
      uVar2 = uVar2 ^ (uVar2 & 0x1fffff) << 0xb;
      uVar2 = uVar2 + ((uVar2 << 0x20) >> 0x31);
    }
    else if (param_2 == 3) {
      uVar2 = (ulonglong)param_1[1] * 0x100 + (ulonglong)*param_1 + uVar2;
      uVar2 = (uVar2 & 0xffff) << 0x10 ^ uVar2 ^ ((longlong)(char)param_1[2] & 0x3fffU) << 0x12;
      uVar2 = uVar2 + ((uVar2 << 0x20) >> 0x2b);
    }
    else if (param_2 == 1) {
      uVar2 = (longlong)(char)*param_1 + uVar2 ^ ((longlong)(char)*param_1 + uVar2 & 0x3fffff) << 10
      ;
      uVar2 = uVar2 + ((uVar2 << 0x20) >> 0x21);
    }
    uVar2 = uVar2 ^ (uVar2 & 0x1fffffff) << 3;
    uVar2 = uVar2 + ((uVar2 << 0x20) >> 0x25);
    uVar2 = uVar2 ^ (uVar2 & 0x3fffffff) << 2;
    uVar2 = uVar2 + ((uVar2 << 0x20) >> 0x2f);
    return (uVar2 ^ (uVar2 & 0x3fffff) << 10) & 0xffffffff;
  }
  return 0;
}


// SDK libfios.a(fios_internal.ppu.o): cell::fios::getPrintableSize(long long, float*, char const**)  [exact match]
// 0x0519150 (0xb4 bytes)
void FUN_00519150(ulonglong param_1,float *param_2,undefined4 *param_3)

{
  float fVar1;
  undefined *puVar2;
  int iVar3;
  ulonglong uVar4;
  bool bVar5;
  longlong lVar6;
  
  puVar2 = PTR_PTR_0071aab0;
  uVar4 = ((param_1 & 0x7ff) + 0x7ff | param_1) & 0xfffffffffffff800;
  if (((longlong)param_1 >> 0x35) + 1U < 2) {
    uVar4 = param_1;
  }
  fVar1 = (float)(longlong)uVar4;
  bVar5 = fVar1 < DAT_0071aab4;
  if (bVar5) {
    fVar1 = -fVar1;
  }
  iVar3 = 0;
  if (DAT_0071aaa8 <= fVar1) {
    lVar6 = 8;
    do {
      fVar1 = fVar1 * DAT_0071aaac;
      iVar3 = iVar3 + 1;
      if (fVar1 < DAT_0071aaa8) break;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  if (bVar5) {
    fVar1 = -fVar1;
  }
  *param_2 = fVar1;
  *param_3 = *(undefined4 *)(puVar2 + iVar3 * 4);
  return;
}


// SDK libfios.a(fios_internal.ppu.o): cell::fios::getStringHash(char const*)  [exact match]
// 0x0519204 (0x38 bytes)
void FUN_00519204(undefined8 param_1)

{
  size_t sVar1;
  
  sVar1 = strlen((char *)param_1);
  _ZN4cell4fios11getDataHashEPKcj(param_1,sVar1);
  return;
}


// SDK libfios.a(fios_internal.ppu.o): cell::fios::strnstr(char const*, char const*, unsigned int)  [exact match]
// 0x051923c (0xd4 bytes)
char * FUN_0051923c(char *param_1,char *param_2,uint param_3)

{
  char cVar1;
  size_t sVar2;
  int iVar3;
  
  sVar2 = strlen(param_2);
  cVar1 = *param_2;
  if (cVar1 != '\0') {
    while (sVar2 < param_3) {
      param_3 = param_3 - 1;
      if (*param_1 == '\0') break;
      if ((cVar1 == *param_1) && (iVar3 = FUN_005ccb28(param_1,param_2,sVar2), iVar3 == 0)) {
        return param_1;
      }
      param_1 = param_1 + 1;
    }
    param_1 = (char *)0x0;
  }
  return param_1;
}


// SDK libfios.a(fios_internal.ppu.o): cell::fios::strlcat(char*, char const*, unsigned int)  [exact match]
// 0x0519310 (0xbc bytes)
int FUN_00519310(char *param_1,char *param_2,uint param_3)

{
  size_t sVar1;
  int iVar2;
  size_t sVar3;
  int iVar4;
  
  sVar1 = strlen(param_1);
  iVar4 = param_3 - (sVar1 + 1);
  if (sVar1 + 1 < param_3) {
    iVar2 = strcpy(param_1 + sVar1,param_2,iVar4);
    *(undefined1 *)(iVar2 + iVar4) = 0;
  }
  sVar3 = strlen(param_2);
  return sVar1 + 1 + sVar3 + -1;
}


// SDK libfios.a(fios_internal.ppu.o): cell::fios::strlcpy(char*, char const*, unsigned int)  [exact match]
// 0x05193cc (0x78 bytes)
size_t FUN_005193cc(undefined4 param_1,char *param_2,int param_3)

{
  int iVar1;
  size_t sVar2;
  
  if (param_3 != 0) {
    iVar1 = strcpy(param_1,param_2,param_3 + -1);
    *(undefined1 *)(iVar1 + param_3 + -1) = 0;
  }
  sVar2 = strlen(param_2);
  return sVar2;
}


// 0x0519444 (0xac bytes)
// strings: 00667888: '1.3.2' | 00667870: 'FIOS %s terminated\n'

void FUN_00519444(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_DAT_0071aaa0;
  if (*PTR_DAT_0071aaa0 == '\0') {
    return;
  }
  FUN_0051a26c();
  FUN_0051b8c4();
  FUN_00528b98();
  puVar2 = PTR_DAT_0071aaa4;
  if (PTR_DAT_0071aaa4[0x44] == '\0') {
    _ZN4cell4fios8platform10FIOSprintfEPKcz(PTR_s_FIOS__s_terminated_0071aab8,PTR_s_1_3_2_0071aabc);
  }
  memset(puVar2,0,0x44);
  *puVar1 = 0;
  return;
}


// SDK libfios.a(fios_internal.ppu.o): cell::fios::FIOSInit(cell::fios::fios_parameters const*)  [fuzzy 0.948 match]
// 0x05194f0 (0x1c0 bytes)
// strings: 00667890: 'FIOSInit: invalid version/size in parameters! Header may not match the compiled library. Initialization failed.\n' | 00667888: '1.3.2' | 00667908: 'FIOS %s initialized\n'

void FUN_005194f0(int *param_1)

{
  bool bVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  void *pvVar5;
  int iVar6;
  ushort uVar8;
  int *piVar7;
  int iVar9;
  longlong lVar10;
  undefined *local_20 [4];
  
  puVar4 = PTR_DAT_0071aaa4;
  puVar3 = PTR_DAT_0071aaa0;
  if ((*PTR_DAT_0071aaa0 == '\0') && (param_1[2] != 0)) {
    if ((param_1[1] == 0x1324000) && (*param_1 == 0x44)) {
      pvVar5 = memcpy(PTR_DAT_0071aaa4,param_1,0x44);
      uVar8 = *(ushort *)(puVar4 + 0xc);
      if (0xff < (ushort)(uVar8 - 1)) {
        uVar8 = 0x100;
        *(undefined2 *)(puVar4 + 0xc) = 0x100;
      }
      if ((uVar8 & 1) != 0) {
        *(ushort *)(puVar4 + 0xc) = uVar8 + 1;
      }
      if (*(int *)(puVar4 + 0x10) == 0) {
        *(undefined **)(puVar4 + 0x10) = PTR_PTR_0071aac4;
      }
      local_20[0] = puVar4 + 100;
      local_20[1] = puVar4 + 0x78;
      local_20[2] = puVar4 + 0x1c;
      local_20[3] = puVar4 + 0x30;
      iVar6 = 0;
      do {
        iVar9 = 0;
        lVar10 = 5;
        iVar2 = *(int *)((int)local_20 + iVar6 + 8);
        do {
          piVar7 = (int *)(iVar9 + iVar2);
          if (*piVar7 == 0) {
            *piVar7 = *(int *)(iVar9 + *(int *)((int)local_20 + iVar6));
          }
          iVar9 = iVar9 + 4;
          lVar10 = lVar10 + -1;
        } while (lVar10 != 0);
        bVar1 = iVar6 != 4;
        iVar6 = iVar6 + 4;
      } while (bVar1);
      FUN_0052ea40(pvVar5);
      _ZN4cell4fios2op17initializeStaticsEPPNS0_8platform5mutexEPPNS2_4condE(0,0);
      FUN_0051a2f4();
      if (puVar4[0x44] == '\0') {
        _ZN4cell4fios8platform10FIOSprintfEPKcz(PTR_s_FIOS__s_initialized_0071aac8,PTR_s_1_3_2_0071aabc);
      }
      *puVar3 = 1;
      return;
    }
    _ZN4cell4fios8platform10FIOSprintfEPKcz(PTR_s_FIOSInit__invalid_version_size_i_0071aac0);
  }
  return;
}


// SDK libfios.a(fios_internal.ppu.o): cell::fios::FIOSInit(cell::fios::allocator*)  [fuzzy 1.000 match]
// 0x05196b0 (0x5c bytes)
void FUN_005196b0(void)

{
  GPiece<80> auStack_70;
  
  memcpy(auStack_70,PTR_DAT_0071aaa4 + 0x48,0x44);
  FUN_005194f0(auStack_70);
  return;
}


// SDK libfios.a(fios_internal.ppu.o): cell::fios::strncasecmp(char const*, char const*, unsigned int)  [fuzzy 0.980 match]
// 0x051970c (0xd0 bytes)
int FUN_0051970c(char *param_1,char *param_2,longlong param_3)

{
  char cVar1;
  char cVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar8;
  int iVar7;
  
  iVar3 = *(int *)PTR_PTR_0071aacc;
  while( true ) {
    cVar1 = *param_1;
    iVar6 = (int)cVar1;
    iVar7 = (int)cVar1;
    bVar4 = (*(ushort *)(iVar6 * 2 + iVar3) & 2) != 0;
    iVar5 = iVar7;
    if (bVar4) {
      iVar5 = iVar6 + 0x20;
    }
    cVar2 = *param_2;
    param_1 = param_1 + 1;
    iVar8 = (int)cVar2;
    if ((*(ushort *)(cVar2 * 2 + iVar3) & 2) != 0) {
      iVar8 = cVar2 + 0x20;
    }
    if (iVar8 != iVar5) break;
    if ((cVar1 == '\0') || (param_3 = param_3 + -1, param_2 = param_2 + 1, param_3 == 0)) {
      return 0;
    }
  }
  if (bVar4) {
    iVar7 = iVar6 + 0x20;
  }
  cVar1 = *param_2;
  iVar5 = (int)cVar1;
  if ((*(ushort *)(cVar1 * 2 + iVar3) & 2) != 0) {
    iVar5 = cVar1 + 0x20;
  }
  return iVar7 - iVar5;
}


// SDK libfios.a(fios_internal.ppu.o): cell::fios::strcasecmp(char const*, char const*)  [exact match]
// 0x05197dc (0x100 bytes)
int FUN_005197dc(char *param_1,char *param_2)

{
  char cVar1;
  char cVar2;
  ushort uVar3;
  bool bVar4;
  int iVar5;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar6;
  
  iVar7 = *(int *)PTR_PTR_0071aacc;
  while( true ) {
    cVar1 = *param_1;
    iVar5 = (int)cVar1;
    iVar6 = (int)cVar1;
    bVar4 = (*(ushort *)(iVar5 * 2 + iVar7) & 2) != 0;
    iVar8 = iVar6;
    if (bVar4) {
      iVar8 = iVar5 + 0x20;
    }
    cVar2 = *param_2;
    param_1 = param_1 + 1;
    iVar9 = (int)cVar2;
    if ((*(ushort *)(cVar2 * 2 + iVar7) & 2) != 0) {
      iVar9 = cVar2 + 0x20;
    }
    if (iVar8 != iVar9) break;
    param_2 = param_2 + 1;
    if (cVar1 == '\0') {
      return 0;
    }
  }
  if (bVar4) {
    iVar6 = iVar5 + 0x20;
    cVar1 = *param_2;
    uVar3 = *(ushort *)(cVar1 * 2 + iVar7);
  }
  else {
    cVar1 = *param_2;
    uVar3 = *(ushort *)(cVar1 * 2 + iVar7);
  }
  if ((uVar3 & 2) == 0) {
    iVar7 = (int)cVar1;
  }
  else {
    iVar7 = cVar1 + 0x20;
  }
  return iVar6 - iVar7;
}


