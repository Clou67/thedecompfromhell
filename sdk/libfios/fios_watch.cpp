// sdk/libfios/fios_watch.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 25 functions, 0x5260ac-0x527e54
#include "sdk/libfios/fios_watch.h"
#include "sdk/libfios/fios_platform_ps3ppu.h"
#include "sdk/sys.h"

// SDK libfios.a(fios_watch.ppu.o): cell::fios::watch::ReportEventCacheFlush(char const*, long long, long long, int, char const*)  [exact match]
// 0x05260ac (0x118 bytes)
// strings: 00667e50: '%09.4f: %14s               off=$%016llX, len=$%08llX, cacheID=%s, index=$%08X\n'

void FUN_005260ac(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  longlong lVar1;
  ulonglong uVar2;
  double dVar3;
  ulonglong uVar4;
  
  do {
    lVar1 = TBLr;
  } while ((int)lVar1 == 0);
  dVar3 = (double)lVar1 / *(double *)PTR_DAT_0071abf4;
  if ((double)DAT_0071abf8 <= dVar3) {
    uVar4 = (longlong)(dVar3 - (double)DAT_0071abf8) ^ 0x8000000000000000;
  }
  else {
    uVar4 = (ulonglong)dVar3;
  }
  uVar4 = (longlong)(uVar4 + 999) / 1000;
  uVar2 = ((uVar4 & 0x7ff) + 0x7ff | uVar4) & 0xfffffffffffff800;
  if (((longlong)uVar4 >> 0x35) + 1U < 2) {
    uVar2 = uVar4;
  }
  _ZN4cell4fios8platform10FIOSprintfEPKcz((double)((float)(longlong)uVar2 / DAT_0071abfc),
                   PTR_s__09_4f___14s_off___016llX__len___0071abf0,
                   (double)((float)(longlong)uVar2 / DAT_0071abfc),param_5,param_2,param_3,param_1,
                   param_4);
  return;
}


// 0x05261c4 (0x120 bytes)
// strings: 00667ea0: '%09.4f: %14s op $%08X, %-14s off=$%016llX              %s\n'

void FUN_005261c4(int param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  double dVar4;
  ulonglong uVar5;
  
  do {
    lVar1 = TBLr;
  } while ((int)lVar1 == 0);
  uVar3 = 0xffffffff;
  if (param_1 != 0) {
    uVar3 = *(undefined4 *)(param_1 + 0x3c);
  }
  dVar4 = (double)lVar1 / *(double *)PTR_DAT_0071abf4;
  if ((double)DAT_0071abf8 <= dVar4) {
    uVar5 = (longlong)(dVar4 - (double)DAT_0071abf8) ^ 0x8000000000000000;
  }
  else {
    uVar5 = (ulonglong)dVar4;
  }
  uVar5 = (longlong)(uVar5 + 999) / 1000;
  uVar2 = ((uVar5 & 0x7ff) + 0x7ff | uVar5) & 0xfffffffffffff800;
  if (((longlong)uVar5 >> 0x35) + 1U < 2) {
    uVar2 = uVar5;
  }
  _ZN4cell4fios8platform10FIOSprintfEPKcz((double)((float)(longlong)uVar2 / DAT_0071abfc),
                   PTR_s__09_4f___14s_op___08X____14s_off_0071ac00,
                   (double)((float)(longlong)uVar2 / DAT_0071abfc),PTR_DAT_0071ac04,uVar3,param_2,
                   param_3,param_4);
  return;
}


// 0x05262e4 (0x120 bytes)
// strings: 00667ee8: '%09.4f: %14s op $%08X, %-14s len=$%08llX                      %s\n'

void FUN_005262e4(int param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  double dVar4;
  ulonglong uVar5;
  
  do {
    lVar1 = TBLr;
  } while ((int)lVar1 == 0);
  uVar3 = 0xffffffff;
  if (param_1 != 0) {
    uVar3 = *(undefined4 *)(param_1 + 0x3c);
  }
  dVar4 = (double)lVar1 / *(double *)PTR_DAT_0071abf4;
  if ((double)DAT_0071abf8 <= dVar4) {
    uVar5 = (longlong)(dVar4 - (double)DAT_0071abf8) ^ 0x8000000000000000;
  }
  else {
    uVar5 = (ulonglong)dVar4;
  }
  uVar5 = (longlong)(uVar5 + 999) / 1000;
  uVar2 = ((uVar5 & 0x7ff) + 0x7ff | uVar5) & 0xfffffffffffff800;
  if (((longlong)uVar5 >> 0x35) + 1U < 2) {
    uVar2 = uVar5;
  }
  _ZN4cell4fios8platform10FIOSprintfEPKcz((double)((float)(longlong)uVar2 / DAT_0071abfc),
                   PTR_s__09_4f___14s_op___08X____14s_len_0071ac08,
                   (double)((float)(longlong)uVar2 / DAT_0071abfc),PTR_DAT_0071ac04,uVar3,param_2,
                   param_3,param_4);
  return;
}


// SDK libfios.a(fios_watch.ppu.o): cell::fios::watch::ReportEventMediaAccess(cell::fios::op const*, char const*, char const*)  [exact match]
// 0x0526404 (0x118 bytes)
// strings: 00667f30: '%09.4f: %14s op $%08X, %-49s %s\n'

void FUN_00526404(int param_1,undefined4 param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  double dVar4;
  ulonglong uVar5;
  
  do {
    lVar1 = TBLr;
  } while ((int)lVar1 == 0);
  uVar2 = 0xffffffff;
  if (param_1 != 0) {
    uVar2 = *(undefined4 *)(param_1 + 0x3c);
  }
  dVar4 = (double)lVar1 / *(double *)PTR_DAT_0071abf4;
  if ((double)DAT_0071abf8 <= dVar4) {
    uVar5 = (longlong)(dVar4 - (double)DAT_0071abf8) ^ 0x8000000000000000;
  }
  else {
    uVar5 = (ulonglong)dVar4;
  }
  uVar5 = (longlong)(uVar5 + 999) / 1000;
  uVar3 = ((uVar5 & 0x7ff) + 0x7ff | uVar5) & 0xfffffffffffff800;
  if (((longlong)uVar5 >> 0x35) + 1U < 2) {
    uVar3 = uVar5;
  }
  _ZN4cell4fios8platform10FIOSprintfEPKcz((double)((float)(longlong)uVar3 / DAT_0071abfc),
                   PTR_s__09_4f___14s_op___08X____49s__s_0071ac0c,
                   (double)((float)(longlong)uVar3 / DAT_0071abfc),PTR_DAT_0071ac04,uVar2,param_2,
                   param_3);
  return;
}


// SDK libfios.a(fios_watch.ppu.o): cell::fios::watch::ReportEventOverlay(cell::fios::op const*, char const*, char const*, char const*)  [exact match]
// 0x052651c (0x120 bytes)
// strings: 00667f58: '%09.4f: %14s op $%08X, %-49s %-30s\n'

void FUN_0052651c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  double dVar4;
  ulonglong uVar5;
  
  do {
    lVar1 = TBLr;
  } while ((int)lVar1 == 0);
  uVar2 = 0xffffffff;
  if (param_1 != 0) {
    uVar2 = *(undefined4 *)(param_1 + 0x3c);
  }
  dVar4 = (double)lVar1 / *(double *)PTR_DAT_0071abf4;
  if ((double)DAT_0071abf8 <= dVar4) {
    uVar5 = (longlong)(dVar4 - (double)DAT_0071abf8) ^ 0x8000000000000000;
  }
  else {
    uVar5 = (ulonglong)dVar4;
  }
  uVar5 = (longlong)(uVar5 + 999) / 1000;
  uVar3 = ((uVar5 & 0x7ff) + 0x7ff | uVar5) & 0xfffffffffffff800;
  if (((longlong)uVar5 >> 0x35) + 1U < 2) {
    uVar3 = uVar5;
  }
  _ZN4cell4fios8platform10FIOSprintfEPKcz((double)((float)(longlong)uVar3 / DAT_0071abfc),
                   PTR_s__09_4f___14s_op___08X____49s___3_0071ac10,
                   (double)((float)(longlong)uVar3 / DAT_0071abfc),param_2,uVar2,param_3,param_4);
  return;
}


// 0x052663c (0x138 bytes)
// strings: 00667f88: '%09.4f: %14s op $%08X,                                                   %s\n' | 00667fd8: 'psarc-dend'

void FUN_0052663c(int param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  char *pcVar3;
  ulonglong uVar4;
  double dVar5;
  ulonglong uVar6;
  
  do {
    lVar1 = TBLr;
  } while ((int)lVar1 == 0);
  uVar2 = 0xffffffff;
  pcVar3 = PTR_DAT_0071ac14;
  if (param_1 != 0) {
    uVar2 = *(undefined4 *)(param_1 + 0x3c);
    pcVar3 = (char *)0x0;
    if (**(char **)(param_1 + 0x34) != '\0') {
      pcVar3 = *(char **)(param_1 + 0x34);
    }
  }
  dVar5 = (double)lVar1 / *(double *)PTR_DAT_0071abf4;
  if ((double)DAT_0071abf8 <= dVar5) {
    uVar6 = (longlong)(dVar5 - (double)DAT_0071abf8) ^ 0x8000000000000000;
  }
  else {
    uVar6 = (ulonglong)dVar5;
  }
  uVar6 = (longlong)(uVar6 + 999) / 1000;
  uVar4 = ((uVar6 & 0x7ff) + 0x7ff | uVar6) & 0xfffffffffffff800;
  if (((longlong)uVar6 >> 0x35) + 1U < 2) {
    uVar4 = uVar6;
  }
  _ZN4cell4fios8platform10FIOSprintfEPKcz((double)((float)(longlong)uVar4 / DAT_0071abfc),
                   PTR_s__09_4f___14s_op___08X___s_0071ac18,
                   (double)((float)(longlong)uVar4 / DAT_0071abfc),PTR_s_psarc_dend_0071ac1c,uVar2,
                   pcVar3);
  return;
}


// 0x0526774 (0x140 bytes)
// strings: 00667fe8: '%09.4f: %14s op $%08X, off=$%016llX, len=$%08llX,             %s\n' | 00668030: 'psarc-dstart'

void FUN_00526774(int param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  char *pcVar4;
  double dVar5;
  ulonglong uVar6;
  
  do {
    lVar1 = TBLr;
  } while ((int)lVar1 == 0);
  uVar3 = 0xffffffff;
  pcVar4 = PTR_DAT_0071ac14;
  if (param_1 != 0) {
    uVar3 = *(undefined4 *)(param_1 + 0x3c);
    pcVar4 = (char *)0x0;
    if (**(char **)(param_1 + 0x34) != '\0') {
      pcVar4 = *(char **)(param_1 + 0x34);
    }
  }
  dVar5 = (double)lVar1 / *(double *)PTR_DAT_0071abf4;
  if ((double)DAT_0071abf8 <= dVar5) {
    uVar6 = (longlong)(dVar5 - (double)DAT_0071abf8) ^ 0x8000000000000000;
  }
  else {
    uVar6 = (ulonglong)dVar5;
  }
  uVar6 = (longlong)(uVar6 + 999) / 1000;
  uVar2 = ((uVar6 & 0x7ff) + 0x7ff | uVar6) & 0xfffffffffffff800;
  if (((longlong)uVar6 >> 0x35) + 1U < 2) {
    uVar2 = uVar6;
  }
  _ZN4cell4fios8platform10FIOSprintfEPKcz((double)((float)(longlong)uVar2 / DAT_0071abfc),
                   PTR_s__09_4f___14s_op___08X__off___016_0071ac20,
                   (double)((float)(longlong)uVar2 / DAT_0071abfc),PTR_s_psarc_dstart_0071ac24,uVar3
                   ,param_2,param_3,pcVar4);
  return;
}


// 0x05268b4 (0x140 bytes)
// strings: 00667fe8: '%09.4f: %14s op $%08X, off=$%016llX, len=$%08llX,             %s\n' | 00668040: 'psarc-uread'

void FUN_005268b4(int param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  char *pcVar4;
  double dVar5;
  ulonglong uVar6;
  
  do {
    lVar1 = TBLr;
  } while ((int)lVar1 == 0);
  uVar3 = 0xffffffff;
  pcVar4 = PTR_DAT_0071ac14;
  if (param_1 != 0) {
    uVar3 = *(undefined4 *)(param_1 + 0x3c);
    pcVar4 = (char *)0x0;
    if (**(char **)(param_1 + 0x34) != '\0') {
      pcVar4 = *(char **)(param_1 + 0x34);
    }
  }
  dVar5 = (double)lVar1 / *(double *)PTR_DAT_0071abf4;
  if ((double)DAT_0071abf8 <= dVar5) {
    uVar6 = (longlong)(dVar5 - (double)DAT_0071abf8) ^ 0x8000000000000000;
  }
  else {
    uVar6 = (ulonglong)dVar5;
  }
  uVar6 = (longlong)(uVar6 + 999) / 1000;
  uVar2 = ((uVar6 & 0x7ff) + 0x7ff | uVar6) & 0xfffffffffffff800;
  if (((longlong)uVar6 >> 0x35) + 1U < 2) {
    uVar2 = uVar6;
  }
  _ZN4cell4fios8platform10FIOSprintfEPKcz((double)((float)(longlong)uVar2 / DAT_0071abfc),
                   PTR_s__09_4f___14s_op___08X__off___016_0071ac20,
                   (double)((float)(longlong)uVar2 / DAT_0071abfc),PTR_s_psarc_uread_0071ac28,uVar3,
                   param_2,param_3,pcVar4);
  return;
}


// 0x05269f4 (0x140 bytes)
// strings: 00667fe8: '%09.4f: %14s op $%08X, off=$%016llX, len=$%08llX,             %s\n' | 00668050: 'psarc-cread'

void FUN_005269f4(int param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  char *pcVar4;
  double dVar5;
  ulonglong uVar6;
  
  do {
    lVar1 = TBLr;
  } while ((int)lVar1 == 0);
  uVar3 = 0xffffffff;
  pcVar4 = PTR_DAT_0071ac14;
  if (param_1 != 0) {
    uVar3 = *(undefined4 *)(param_1 + 0x3c);
    pcVar4 = (char *)0x0;
    if (**(char **)(param_1 + 0x34) != '\0') {
      pcVar4 = *(char **)(param_1 + 0x34);
    }
  }
  dVar5 = (double)lVar1 / *(double *)PTR_DAT_0071abf4;
  if ((double)DAT_0071abf8 <= dVar5) {
    uVar6 = (longlong)(dVar5 - (double)DAT_0071abf8) ^ 0x8000000000000000;
  }
  else {
    uVar6 = (ulonglong)dVar5;
  }
  uVar6 = (longlong)(uVar6 + 999) / 1000;
  uVar2 = ((uVar6 & 0x7ff) + 0x7ff | uVar6) & 0xfffffffffffff800;
  if (((longlong)uVar6 >> 0x35) + 1U < 2) {
    uVar2 = uVar6;
  }
  _ZN4cell4fios8platform10FIOSprintfEPKcz((double)((float)(longlong)uVar2 / DAT_0071abfc),
                   PTR_s__09_4f___14s_op___08X__off___016_0071ac20,
                   (double)((float)(longlong)uVar2 / DAT_0071abfc),PTR_s_psarc_cread_0071ac2c,uVar3,
                   param_2,param_3,pcVar4);
  return;
}


// SDK libfios.a(fios_watch.ppu.o): cell::fios::watch::ReportEventMediaRetry(cell::fios::op const*)  [exact match]
// 0x0526b34 (0x110 bytes)
// strings: 00668060: '%09.4f: %14s op $%08X, RETRY\n'

void FUN_00526b34(int param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  double dVar4;
  ulonglong uVar5;
  
  do {
    lVar1 = TBLr;
  } while ((int)lVar1 == 0);
  uVar2 = 0xffffffff;
  if (param_1 != 0) {
    uVar2 = *(undefined4 *)(param_1 + 0x3c);
  }
  dVar4 = (double)lVar1 / *(double *)PTR_DAT_0071abf4;
  if ((double)DAT_0071abf8 <= dVar4) {
    uVar5 = (longlong)(dVar4 - (double)DAT_0071abf8) ^ 0x8000000000000000;
  }
  else {
    uVar5 = (ulonglong)dVar4;
  }
  uVar5 = (longlong)(uVar5 + 999) / 1000;
  uVar3 = ((uVar5 & 0x7ff) + 0x7ff | uVar5) & 0xfffffffffffff800;
  if (((longlong)uVar5 >> 0x35) + 1U < 2) {
    uVar3 = uVar5;
  }
  _ZN4cell4fios8platform10FIOSprintfEPKcz((double)((float)(longlong)uVar3 / DAT_0071abfc),
                   PTR_s__09_4f___14s_op___08X__RETRY_0071ac30,
                   (double)((float)(longlong)uVar3 / DAT_0071abfc),PTR_DAT_0071ac04,uVar2);
  return;
}


// SDK libfios.a(fios_watch.ppu.o): cell::fios::watch::ReportEventMediaCheck(cell::fios::op const*, int)  [exact match]
// 0x0526c44 (0x114 bytes)
// strings: 00668080: '%09.4f: %14s op $%08X, MEDIA CHECK caused by err = 0x%08X\n'

void FUN_00526c44(int param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  double dVar4;
  ulonglong uVar5;
  
  do {
    lVar1 = TBLr;
  } while ((int)lVar1 == 0);
  uVar2 = 0xffffffff;
  if (param_1 != 0) {
    uVar2 = *(undefined4 *)(param_1 + 0x3c);
  }
  dVar4 = (double)lVar1 / *(double *)PTR_DAT_0071abf4;
  if ((double)DAT_0071abf8 <= dVar4) {
    uVar5 = (longlong)(dVar4 - (double)DAT_0071abf8) ^ 0x8000000000000000;
  }
  else {
    uVar5 = (ulonglong)dVar4;
  }
  uVar5 = (longlong)(uVar5 + 999) / 1000;
  uVar3 = ((uVar5 & 0x7ff) + 0x7ff | uVar5) & 0xfffffffffffff800;
  if (((longlong)uVar5 >> 0x35) + 1U < 2) {
    uVar3 = uVar5;
  }
  _ZN4cell4fios8platform10FIOSprintfEPKcz((double)((float)(longlong)uVar3 / DAT_0071abfc),
                   PTR_s__09_4f___14s_op___08X__MEDIA_CHE_0071ac34,
                   (double)((float)(longlong)uVar3 / DAT_0071abfc),PTR_DAT_0071ac04,uVar2,param_2);
  return;
}


// 0x0526d58 (0x128 bytes)
// strings: 006680c0: '%09.4f: %14s op $%08X, off=$%016llX, len=$%08llX, cacheID=%s, index=$%08X\n' | 00668110: 'cache-evict'

void FUN_00526d58(int param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 param_5)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  double dVar4;
  ulonglong uVar5;
  
  do {
    lVar1 = TBLr;
  } while ((int)lVar1 == 0);
  uVar3 = 0xffffffff;
  if (param_1 != 0) {
    uVar3 = *(undefined4 *)(param_1 + 0x3c);
  }
  dVar4 = (double)lVar1 / *(double *)PTR_DAT_0071abf4;
  if ((double)DAT_0071abf8 <= dVar4) {
    uVar5 = (longlong)(dVar4 - (double)DAT_0071abf8) ^ 0x8000000000000000;
  }
  else {
    uVar5 = (ulonglong)dVar4;
  }
  uVar5 = (longlong)(uVar5 + 999) / 1000;
  uVar2 = ((uVar5 & 0x7ff) + 0x7ff | uVar5) & 0xfffffffffffff800;
  if (((longlong)uVar5 >> 0x35) + 1U < 2) {
    uVar2 = uVar5;
  }
  _ZN4cell4fios8platform10FIOSprintfEPKcz((double)((float)(longlong)uVar2 / DAT_0071abfc),
                   PTR_s__09_4f___14s_op___08X__off___016_0071ac38,
                   (double)((float)(longlong)uVar2 / DAT_0071abfc),PTR_s_cache_evict_0071ac3c,uVar3,
                   param_3,param_4,param_2,param_5);
  return;
}


// 0x0526e80 (0x128 bytes)
// strings: 006680c0: '%09.4f: %14s op $%08X, off=$%016llX, len=$%08llX, cacheID=%s, index=$%08X\n' | 00668120: 'cache-hit'

void FUN_00526e80(int param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 param_5)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  double dVar4;
  ulonglong uVar5;
  
  do {
    lVar1 = TBLr;
  } while ((int)lVar1 == 0);
  uVar3 = 0xffffffff;
  if (param_1 != 0) {
    uVar3 = *(undefined4 *)(param_1 + 0x3c);
  }
  dVar4 = (double)lVar1 / *(double *)PTR_DAT_0071abf4;
  if ((double)DAT_0071abf8 <= dVar4) {
    uVar5 = (longlong)(dVar4 - (double)DAT_0071abf8) ^ 0x8000000000000000;
  }
  else {
    uVar5 = (ulonglong)dVar4;
  }
  uVar5 = (longlong)(uVar5 + 999) / 1000;
  uVar2 = ((uVar5 & 0x7ff) + 0x7ff | uVar5) & 0xfffffffffffff800;
  if (((longlong)uVar5 >> 0x35) + 1U < 2) {
    uVar2 = uVar5;
  }
  _ZN4cell4fios8platform10FIOSprintfEPKcz((double)((float)(longlong)uVar2 / DAT_0071abfc),
                   PTR_s__09_4f___14s_op___08X__off___016_0071ac38,
                   (double)((float)(longlong)uVar2 / DAT_0071abfc),PTR_s_cache_hit_0071ac40,uVar3,
                   param_3,param_4,param_2,param_5);
  return;
}


// SDK libfios.a(fios_watch.ppu.o): cell::fios::watch::ReportEventOpCompleted(cell::fios::op const*)  [exact match]
// 0x0526fa8 (0x33c bytes)
// strings: 006683b0: '%09.4f: %14s op $%08X, err = $%08X / %-26s      %s\n' | 006683e8: 'completed' | 00668160: 'CELL_FIOS_NOERROR'

void _ZN4cell4fios5watch22ReportEventOpCompletedEPKNS0_2opE(int param_1)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  undefined *puVar4;
  ulonglong uVar5;
  double dVar6;
  ulonglong uVar7;
  
  do {
    lVar2 = TBLr;
  } while ((int)lVar2 == 0);
  iVar1 = *(int *)(param_1 + 0x44);
  puVar4 = PTR_s_CELL_FIOS_ERROR_BADOFFSET_0071ac78;
  if (iVar1 == -0x7ffef8f5) {
LAB_005270d4:
    pcVar3 = *(char **)(param_1 + 0x34);
    if (*pcVar3 != '\0') goto LAB_005270ec;
LAB_00527088:
    dVar6 = (double)lVar2 / *(double *)PTR_DAT_0071abf4;
    pcVar3 = PTR_DAT_0071ac9c;
    if ((double)DAT_0071abf8 <= dVar6) goto LAB_005270b0;
  }
  else {
    if (-0x7ffef8f5 < iVar1) {
      puVar4 = PTR_s_CELL_FIOS_ERROR_READONLY_0071ac8c;
      if (iVar1 != -0x7ffef8f0) {
        if (iVar1 < -0x7ffef8ef) {
          puVar4 = PTR_s_CELL_FIOS_ERROR_PLATFORM_0071ac80;
          if ((((iVar1 != -0x7ffef8f3) &&
               (puVar4 = PTR_s_CELL_FIOS_ERROR_BADCALLBACK_0071ac7c, -0x7ffef8f4 < iVar1)) &&
              (puVar4 = PTR_s_CELL_FIOS_ERROR_ACCESS_0071ac84, iVar1 != -0x7ffef8f2)) &&
             (puVar4 = PTR_s_CELL_FIOS_ERROR_DECOMPRESSION_0071ac88, iVar1 != -0x7ffef8f1))
          goto LAB_0052706c;
        }
        else {
          puVar4 = PTR_s_CELL_FIOS_ERROR_MEDIAGONE_0071ac98;
          if (iVar1 != -0x7ffef8ed) {
            if (iVar1 < -0x7ffef8ec) {
              puVar4 = PTR_s_CELL_FIOS_ERROR_NOBLOCK_0071ac90;
              if ((iVar1 == -0x7ffef8ef) ||
                 (puVar4 = PTR_s_CELL_FIOS_ERROR_NOPATH_0071ac94, iVar1 == -0x7ffef8ee))
              goto LAB_005270d4;
            }
            else {
              puVar4 = PTR_s_CELL_FIOS_ERROR_CANTIMMED_0071ac44;
              if ((iVar1 == -0x7ffef8ec) || (puVar4 = PTR_s_CELL_FIOS_NOERROR_0071ac4c, iVar1 == 0))
              goto LAB_005270d4;
            }
            goto LAB_0052706c;
          }
        }
      }
      goto LAB_005270d4;
    }
    puVar4 = PTR_s_CELL_FIOS_ERROR_BADPATH_0071ac60;
    if (iVar1 == -0x7ffef8fb) goto LAB_005270d4;
    if (-0x7ffef8fb < iVar1) {
      puVar4 = PTR_s_CELL_FIOS_ERROR_CANCELLED_0071ac6c;
      if (iVar1 != -0x7ffef8f8) {
        if (iVar1 < -0x7ffef8f7) {
          puVar4 = PTR_s_CELL_FIOS_ERROR_BADHANDLE_0071ac64;
          if ((iVar1 == -0x7ffef8fa) ||
             (puVar4 = PTR_s_CELL_FIOS_ERROR_BADPARAM_0071ac68, iVar1 == -0x7ffef8f9))
          goto LAB_005270d4;
        }
        else {
          puVar4 = PTR_s_CELL_FIOS_ERROR_EOF_0071ac70;
          if ((iVar1 == -0x7ffef8f7) ||
             (puVar4 = PTR_s_CELL_FIOS_ERROR_NOMEM_0071ac74, iVar1 == -0x7ffef8f6))
          goto LAB_005270d4;
        }
        goto LAB_0052706c;
      }
      goto LAB_005270d4;
    }
    puVar4 = PTR_s_CELL_FIOS_ERROR_UNKNOWNCALLBACKE_0071ac54;
    if (iVar1 == -0x7ffef8fe) goto LAB_005270d4;
    if (iVar1 < -0x7ffef8fd) {
      puVar4 = PTR_s_CELL_FIOS_ERROR_INPROGRESS_0071ac50;
      if (iVar1 == -0x7ffef8ff) goto LAB_005270d4;
    }
    else {
      puVar4 = PTR_s_CELL_FIOS_ERROR_NOTREADY_0071ac58;
      if ((iVar1 == -0x7ffef8fd) ||
         (puVar4 = PTR_s_CELL_FIOS_ERROR_TIMEOUT_0071ac5c, iVar1 == -0x7ffef8fc)) goto LAB_005270d4;
    }
LAB_0052706c:
    pcVar3 = *(char **)(param_1 + 0x34);
    puVar4 = PTR_s_UNKNOWN_ERROR_0071ac48;
    if (*pcVar3 == '\0') goto LAB_00527088;
LAB_005270ec:
    dVar6 = (double)lVar2 / *(double *)PTR_DAT_0071abf4;
    if ((double)DAT_0071abf8 <= dVar6) {
LAB_005270b0:
      uVar7 = (longlong)(dVar6 - (double)DAT_0071abf8) ^ 0x8000000000000000;
      goto LAB_0052711c;
    }
  }
  uVar7 = (ulonglong)dVar6;
LAB_0052711c:
  uVar7 = (longlong)(uVar7 + 999) / 1000;
  uVar5 = ((uVar7 & 0x7ff) + 0x7ff | uVar7) & 0xfffffffffffff800;
  if (((longlong)uVar7 >> 0x35) + 1U < 2) {
    uVar5 = uVar7;
  }
  print_tty4((double)((float)(longlong)uVar5 / DAT_0071abfc),
             PTR_s__09_4f___14s_op___08X__err_____0_0071aca0,
             (double)((float)(longlong)uVar5 / DAT_0071abfc),PTR_s_completed_0071aca4,
             *(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x44),puVar4,pcVar3);
  return;
}


// SDK libfios.a(fios_watch.ppu.o): cell::fios::watch::ReportEventOp(cell::fios::op const*, char const*)  [exact match]
// 0x05272e4 (0x298 bytes)
// strings: 00668460: '%09.4f: %14s op $%08X, %-10s %-39s%s\n' | 00668418: 'off=$%016llX, len=$%08llX' | 006683f8: 'off=$%016llX, len=max,       ' | 00668438: 'off=$%016llX,                '

void FUN_005272e4(int param_1,undefined4 param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  undefined *puVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  double dVar8;
  double dVar9;
  GPiece<96> local_80;
  
  uVar7 = 0x11;
  if ((((*(int *)(param_1 + 0xd0) - 9U < 3) || (uVar7 = *(uint *)(param_1 + 0x40), uVar7 == 0x11))
      || (uVar7 == 10)) || (uVar7 == 0xb)) {
    if (*(longlong *)(param_1 + 0x80) == 0x7fffffffffffffff) {
      FUN_005cd198(local_80,0x50,PTR_s_off___016llX__len_max__0071aca8,
                   *(undefined8 *)(param_1 + 0x70));
    }
    else {
      FUN_005cd198(local_80,0x50,PTR_s_off___016llX__len___08llX_0071acac,
                   *(undefined8 *)(param_1 + 0x70));
    }
LAB_0052741c:
    do {
      lVar5 = TBLr;
    } while ((int)lVar5 == 0);
    uVar2 = *(undefined4 *)(param_1 + 0x3c);
    dVar8 = *(double *)PTR_DAT_0071abf4;
    if (uVar7 < 0x14) goto LAB_00527378;
LAB_0052743c:
    pcVar1 = *(char **)(param_1 + 0x34);
    puVar3 = PTR_s_UNKNOWN_0071acb4;
    if (*pcVar1 == '\0') goto LAB_005273a0;
LAB_00527458:
    dVar9 = (double)DAT_0071abf8;
    dVar8 = (double)lVar5 / dVar8;
    if (dVar8 < dVar9) {
LAB_0052747c:
      uVar4 = (ulonglong)dVar8;
      goto LAB_00527488;
    }
  }
  else {
    if (uVar7 == 5) {
      FUN_005cd198(local_80,0x50,PTR_s_off___016llX__0071acb0,*(undefined8 *)(param_1 + 0x70));
      uVar7 = 5;
      goto LAB_0052741c;
    }
    do {
      lVar5 = TBLr;
    } while ((int)lVar5 == 0);
    uVar2 = *(undefined4 *)(param_1 + 0x3c);
    dVar8 = *(double *)PTR_DAT_0071abf4;
    if (0x13 < uVar7) goto LAB_0052743c;
LAB_00527378:
    pcVar1 = *(char **)(param_1 + 0x34);
    puVar3 = *(undefined **)(PTR_PTR_0071acb8 + uVar7 * 4);
    if (*pcVar1 != '\0') goto LAB_00527458;
LAB_005273a0:
    dVar9 = (double)DAT_0071abf8;
    dVar8 = (double)lVar5 / dVar8;
    pcVar1 = PTR_DAT_0071ac14;
    if (dVar8 < dVar9) goto LAB_0052747c;
  }
  uVar4 = (longlong)(dVar8 - dVar9) ^ 0x8000000000000000;
LAB_00527488:
  uVar4 = (longlong)(uVar4 + 999) / 1000;
  uVar6 = ((uVar4 & 0x7ff) + 0x7ff | uVar4) & 0xfffffffffffff800;
  if (((longlong)uVar4 >> 0x35) + 1U < 2) {
    uVar6 = uVar4;
  }
  _ZN4cell4fios8platform10FIOSprintfEPKcz((double)((float)(longlong)uVar6 / DAT_0071abfc),
                   PTR_s__09_4f___14s_op___08X____10s___3_0071acbc,
                   (double)((float)(longlong)uVar6 / DAT_0071abfc),param_2,uVar2,puVar3,local_80,
                   pcVar1);
  return;
}


// 0x052757c (0x8 bytes)
// strings: 00668488: 'execute'

void FUN_0052757c(undefined8 param_1)

{
  FUN_005272e4(param_1,PTR_s_execute_0071acc0);
  return;
}


// 0x0527584 (0x8 bytes)
// strings: 00668490: 'accept'

void FUN_00527584(undefined8 param_1)

{
  FUN_005272e4(param_1,PTR_s_accept_0071acc4);
  return;
}


// 0x052758c (0x140 bytes)
// strings: 00667fe8: '%09.4f: %14s op $%08X, off=$%016llX, len=$%08llX,             %s\n' | 00668498: 'psarc-cchit'

void FUN_0052758c(int param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  char *pcVar4;
  double dVar5;
  ulonglong uVar6;
  
  do {
    lVar1 = TBLr;
  } while ((int)lVar1 == 0);
  uVar3 = 0xffffffff;
  pcVar4 = PTR_DAT_0071ac14;
  if (param_1 != 0) {
    uVar3 = *(undefined4 *)(param_1 + 0x3c);
    pcVar4 = (char *)0x0;
    if (**(char **)(param_1 + 0x34) != '\0') {
      pcVar4 = *(char **)(param_1 + 0x34);
    }
  }
  dVar5 = (double)lVar1 / *(double *)PTR_DAT_0071abf4;
  if ((double)DAT_0071abf8 <= dVar5) {
    uVar6 = (longlong)(dVar5 - (double)DAT_0071abf8) ^ 0x8000000000000000;
  }
  else {
    uVar6 = (ulonglong)dVar5;
  }
  uVar6 = (longlong)(uVar6 + 999) / 1000;
  uVar2 = ((uVar6 & 0x7ff) + 0x7ff | uVar6) & 0xfffffffffffff800;
  if (((longlong)uVar6 >> 0x35) + 1U < 2) {
    uVar2 = uVar6;
  }
  _ZN4cell4fios8platform10FIOSprintfEPKcz((double)((float)(longlong)uVar2 / DAT_0071abfc),
                   PTR_s__09_4f___14s_op___08X__off___016_0071ac20,
                   (double)((float)(longlong)uVar2 / DAT_0071abfc),PTR_s_psarc_cchit_0071acc8,uVar3,
                   param_2,param_3,pcVar4);
  return;
}


// 0x05276cc (0x140 bytes)
// strings: 00667fe8: '%09.4f: %14s op $%08X, off=$%016llX, len=$%08llX,             %s\n' | 006684a8: 'psarc-dchit'

void FUN_005276cc(int param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  char *pcVar4;
  double dVar5;
  ulonglong uVar6;
  
  do {
    lVar1 = TBLr;
  } while ((int)lVar1 == 0);
  uVar3 = 0xffffffff;
  pcVar4 = PTR_DAT_0071ac14;
  if (param_1 != 0) {
    uVar3 = *(undefined4 *)(param_1 + 0x3c);
    pcVar4 = (char *)0x0;
    if (**(char **)(param_1 + 0x34) != '\0') {
      pcVar4 = *(char **)(param_1 + 0x34);
    }
  }
  dVar5 = (double)lVar1 / *(double *)PTR_DAT_0071abf4;
  if ((double)DAT_0071abf8 <= dVar5) {
    uVar6 = (longlong)(dVar5 - (double)DAT_0071abf8) ^ 0x8000000000000000;
  }
  else {
    uVar6 = (ulonglong)dVar5;
  }
  uVar6 = (longlong)(uVar6 + 999) / 1000;
  uVar2 = ((uVar6 & 0x7ff) + 0x7ff | uVar6) & 0xfffffffffffff800;
  if (((longlong)uVar6 >> 0x35) + 1U < 2) {
    uVar2 = uVar6;
  }
  _ZN4cell4fios8platform10FIOSprintfEPKcz((double)((float)(longlong)uVar2 / DAT_0071abfc),
                   PTR_s__09_4f___14s_op___08X__off___016_0071ac20,
                   (double)((float)(longlong)uVar2 / DAT_0071abfc),PTR_s_psarc_dchit_0071accc,uVar3,
                   param_2,param_3,pcVar4);
  return;
}


// 0x052780c (0x138 bytes)
// strings: 00667f88: '%09.4f: %14s op $%08X,                                                   %s\n' | 006684b8: 'psarc-close'

void FUN_0052780c(int param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  char *pcVar3;
  ulonglong uVar4;
  double dVar5;
  ulonglong uVar6;
  
  do {
    lVar1 = TBLr;
  } while ((int)lVar1 == 0);
  uVar2 = 0xffffffff;
  pcVar3 = PTR_DAT_0071ac14;
  if (param_1 != 0) {
    uVar2 = *(undefined4 *)(param_1 + 0x3c);
    pcVar3 = (char *)0x0;
    if (**(char **)(param_1 + 0x34) != '\0') {
      pcVar3 = *(char **)(param_1 + 0x34);
    }
  }
  dVar5 = (double)lVar1 / *(double *)PTR_DAT_0071abf4;
  if ((double)DAT_0071abf8 <= dVar5) {
    uVar6 = (longlong)(dVar5 - (double)DAT_0071abf8) ^ 0x8000000000000000;
  }
  else {
    uVar6 = (ulonglong)dVar5;
  }
  uVar6 = (longlong)(uVar6 + 999) / 1000;
  uVar4 = ((uVar6 & 0x7ff) + 0x7ff | uVar6) & 0xfffffffffffff800;
  if (((longlong)uVar6 >> 0x35) + 1U < 2) {
    uVar4 = uVar6;
  }
  _ZN4cell4fios8platform10FIOSprintfEPKcz((double)((float)(longlong)uVar4 / DAT_0071abfc),
                   PTR_s__09_4f___14s_op___08X___s_0071ac18,
                   (double)((float)(longlong)uVar4 / DAT_0071abfc),PTR_s_psarc_close_0071acd0,uVar2,
                   pcVar3);
  return;
}


// 0x0527944 (0x138 bytes)
// strings: 00667f88: '%09.4f: %14s op $%08X,                                                   %s\n' | 006684c8: 'psarc-open'

void FUN_00527944(int param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  char *pcVar3;
  ulonglong uVar4;
  double dVar5;
  ulonglong uVar6;
  
  do {
    lVar1 = TBLr;
  } while ((int)lVar1 == 0);
  uVar2 = 0xffffffff;
  pcVar3 = PTR_DAT_0071ac14;
  if (param_1 != 0) {
    uVar2 = *(undefined4 *)(param_1 + 0x3c);
    pcVar3 = (char *)0x0;
    if (**(char **)(param_1 + 0x34) != '\0') {
      pcVar3 = *(char **)(param_1 + 0x34);
    }
  }
  dVar5 = (double)lVar1 / *(double *)PTR_DAT_0071abf4;
  if ((double)DAT_0071abf8 <= dVar5) {
    uVar6 = (longlong)(dVar5 - (double)DAT_0071abf8) ^ 0x8000000000000000;
  }
  else {
    uVar6 = (ulonglong)dVar5;
  }
  uVar6 = (longlong)(uVar6 + 999) / 1000;
  uVar4 = ((uVar6 & 0x7ff) + 0x7ff | uVar6) & 0xfffffffffffff800;
  if (((longlong)uVar6 >> 0x35) + 1U < 2) {
    uVar4 = uVar6;
  }
  _ZN4cell4fios8platform10FIOSprintfEPKcz((double)((float)(longlong)uVar4 / DAT_0071abfc),
                   PTR_s__09_4f___14s_op___08X___s_0071ac18,
                   (double)((float)(longlong)uVar4 / DAT_0071abfc),PTR_s_psarc_open_0071acd4,uVar2,
                   pcVar3);
  return;
}


// 0x0527a7c (0x128 bytes)
// strings: 006680c0: '%09.4f: %14s op $%08X, off=$%016llX, len=$%08llX, cacheID=%s, index=$%08X\n' | 006684d8: 'cache-pref-hit'

void FUN_00527a7c(int param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 param_5)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  double dVar4;
  ulonglong uVar5;
  
  do {
    lVar1 = TBLr;
  } while ((int)lVar1 == 0);
  uVar3 = 0xffffffff;
  if (param_1 != 0) {
    uVar3 = *(undefined4 *)(param_1 + 0x3c);
  }
  dVar4 = (double)lVar1 / *(double *)PTR_DAT_0071abf4;
  if ((double)DAT_0071abf8 <= dVar4) {
    uVar5 = (longlong)(dVar4 - (double)DAT_0071abf8) ^ 0x8000000000000000;
  }
  else {
    uVar5 = (ulonglong)dVar4;
  }
  uVar5 = (longlong)(uVar5 + 999) / 1000;
  uVar2 = ((uVar5 & 0x7ff) + 0x7ff | uVar5) & 0xfffffffffffff800;
  if (((longlong)uVar5 >> 0x35) + 1U < 2) {
    uVar2 = uVar5;
  }
  _ZN4cell4fios8platform10FIOSprintfEPKcz((double)((float)(longlong)uVar2 / DAT_0071abfc),
                   PTR_s__09_4f___14s_op___08X__off___016_0071ac38,
                   (double)((float)(longlong)uVar2 / DAT_0071abfc),PTR_s_cache_pref_hit_0071acd8,
                   uVar3,param_3,param_4,param_2,param_5);
  return;
}


// 0x0527ba4 (0x128 bytes)
// strings: 006680c0: '%09.4f: %14s op $%08X, off=$%016llX, len=$%08llX, cacheID=%s, index=$%08X\n' | 006684e8: 'cache-rdthru'

void FUN_00527ba4(int param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 param_5)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  double dVar4;
  ulonglong uVar5;
  
  do {
    lVar1 = TBLr;
  } while ((int)lVar1 == 0);
  uVar3 = 0xffffffff;
  if (param_1 != 0) {
    uVar3 = *(undefined4 *)(param_1 + 0x3c);
  }
  dVar4 = (double)lVar1 / *(double *)PTR_DAT_0071abf4;
  if ((double)DAT_0071abf8 <= dVar4) {
    uVar5 = (longlong)(dVar4 - (double)DAT_0071abf8) ^ 0x8000000000000000;
  }
  else {
    uVar5 = (ulonglong)dVar4;
  }
  uVar5 = (longlong)(uVar5 + 999) / 1000;
  uVar2 = ((uVar5 & 0x7ff) + 0x7ff | uVar5) & 0xfffffffffffff800;
  if (((longlong)uVar5 >> 0x35) + 1U < 2) {
    uVar2 = uVar5;
  }
  _ZN4cell4fios8platform10FIOSprintfEPKcz((double)((float)(longlong)uVar2 / DAT_0071abfc),
                   PTR_s__09_4f___14s_op___08X__off___016_0071ac38,
                   (double)((float)(longlong)uVar2 / DAT_0071abfc),PTR_s_cache_rdthru_0071acdc,uVar3
                   ,param_3,param_4,param_2,param_5);
  return;
}


// SDK libfios.a(fios_watch.ppu.o): cell::fios::watch::ReportEventCacheFill(cell::fios::op const*, char const*, long long, long long, int)  [exact match]
// 0x0527ccc (0x170 bytes)
// strings: 006680c0: '%09.4f: %14s op $%08X, off=$%016llX, len=$%08llX, cacheID=%s, index=$%08X\n' | 006684f8: 'cache-pref-fil'

void FUN_00527ccc(int param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 param_5)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined *puVar3;
  double dVar4;
  ulonglong uVar5;
  
  do {
    lVar1 = TBLr;
  } while ((int)lVar1 == 0);
  if (*(int *)(param_1 + 0xd0) - 9U < 3) {
    dVar4 = (double)lVar1 / *(double *)PTR_DAT_0071abf4;
    puVar3 = PTR_s_cache_pref_fil_0071ace0;
    if ((double)DAT_0071abf8 <= dVar4) {
LAB_00527e24:
      uVar5 = (longlong)(dVar4 - (double)DAT_0071abf8) ^ 0x8000000000000000;
      goto LAB_00527d4c;
    }
  }
  else {
    dVar4 = (double)lVar1 / *(double *)PTR_DAT_0071abf4;
    puVar3 = PTR_s_cache_fill_0071ace4;
    if ((double)DAT_0071abf8 <= dVar4) goto LAB_00527e24;
  }
  uVar5 = (ulonglong)dVar4;
LAB_00527d4c:
  uVar5 = (longlong)(uVar5 + 999) / 1000;
  uVar2 = ((uVar5 & 0x7ff) + 0x7ff | uVar5) & 0xfffffffffffff800;
  if (((longlong)uVar5 >> 0x35) + 1U < 2) {
    uVar2 = uVar5;
  }
  _ZN4cell4fios8platform10FIOSprintfEPKcz((double)((float)(longlong)uVar2 / DAT_0071abfc),
                   PTR_s__09_4f___14s_op___08X__off___016_0071ac38,
                   (double)((float)(longlong)uVar2 / DAT_0071abfc),puVar3,
                   *(undefined4 *)(param_1 + 0x3c),param_3,param_4,param_2,param_5);
  return;
}


// 0x0527e3c (0x18 bytes)
void FUN_00527e3c(undefined8 *param_1)

{
  if (param_1 == (undefined8 *)0x0) {
    return;
  }
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = 0;
  return;
}


