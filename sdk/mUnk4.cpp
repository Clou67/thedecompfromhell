// sdk/mUnk4.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 290 functions, 0x604574-0x6169e4
#include <string.h>
#include "sdk/mUnk4.h"
#include "sdk/lUnk2.h"
#include "sdk/libfios/fios_media.h"
#include "sdk/libscream/989snd.h"
#include "sdk/libscream/LFO.h"

// 0x0604574 (0x28 bytes)
uint check_magic2(uint *param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != (uint *)0x0) {
    uVar1 = (*param_1 == 0x46494f53);
  }
  return uVar1;
}


// SDK libfios.a(fios_caching.ppu.o): cell::fios::mediafilter::readIdentifier()  [fuzzy 1.000 match]
// 0x060459c (0x5c bytes)
undefined8 FUN_0060459c(int param_1)

{
  int *piVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  piVar1 = *(int **)(param_1 + 0x40);
  if (piVar1 != (int *)0x0) {
    uVar2 = (*(code *)**(undefined4 **)(*piVar1 + 0x10))(piVar1);
  }
  return uVar2;
}


// SDK libfios.a(fios_caching.ppu.o): cell::fios::mediafilter::registerMedia()  [fuzzy 1.000 match]
// 0x06045f8 (0x68 bytes)
void FUN_006045f8(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x40);
  if (piVar1 != (int *)0x0) {
    (*(code *)**(undefined4 **)(*piVar1 + 0x18))(piVar1);
  }
  FUN_0051ad94(param_1);
  return;
}


// SDK libfios.a(fios_media.ppu.o): cell::fios::media::speculateIOP(cell::fios::mediaioparams*)  [fuzzy 1.000 match]
// 0x0604660 (0x50 bytes)
void FUN_00604660(int *param_1,int param_2)

{
  *(ushort *)(param_2 + 0x28) = *(ushort *)(param_2 + 0x28) | 1;
  (*(code *)**(undefined4 **)(*param_1 + 0x14))();
  return;
}


// SDK libfios.a(fios_caching.ppu.o): cell::fios::mediafilter::getVariableName(unsigned int) const  [fuzzy 1.000 match]
// 0x06046b0 (0x60 bytes)
undefined4 FUN_006046b0(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = *(int **)(param_1 + 0x40);
  uVar2 = 0;
  if (piVar1 != (int *)0x0) {
    uVar2 = (*(code *)**(undefined4 **)(*piVar1 + 0xc))(piVar1,param_2);
  }
  return uVar2;
}


// 0x0604710 (0x28 bytes)
uint FUN_00604710(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = (*(uint *)(param_1 + 4) == 0x46494f53);
  }
  return uVar1;
}


// 0x0604738 (0x28 bytes)
uint check_magic(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = (*(uint *)(param_1 + 0xdc) == 0x46494f53);
  }
  return uVar1;
}


// 0x0604760 (0x28 bytes)
uint check_magic(uint *param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != (uint *)0x0) {
    uVar1 = (*param_1 == 0x46494f53);
  }
  return uVar1;
}


// 0x0604788 (0x28 bytes)
uint FUN_00604788(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = (*(uint *)(param_1 + 4) == 0x46494f53);
  }
  return uVar1;
}


// 0x06047b0 (0x28 bytes)
uint FUN_006047b0(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = (*(uint *)(param_1 + 4) == 0x46494f53);
  }
  return uVar1;
}


// 0x06047d8 (0x28 bytes)
uint FUN_006047d8(uint *param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != (uint *)0x0) {
    uVar1 = (*param_1 == 0x46494f53);
  }
  return uVar1;
}


// 0x0604800 (0x28 bytes)
uint FUN_00604800(uint *param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != (uint *)0x0) {
    uVar1 = (*param_1 == 0x46494f53);
  }
  return uVar1;
}


// 0x0604828 (0x28 bytes)
uint FUN_00604828(uint *param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != (uint *)0x0) {
    uVar1 = (*param_1 == 0x46494f53);
  }
  return uVar1;
}


// 0x0604850 (0x28 bytes)
uint FUN_00604850(uint *param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != (uint *)0x0) {
    uVar1 = (*param_1 == 0x46494f53);
  }
  return uVar1;
}


// SDK libfios.a(fios_caching.ppu.o): cell::fios::cache::flushFile(char const*)  [fuzzy 1.000 match]
// 0x0604878 (0x4c bytes)
void FUN_00604878(int *param_1,undefined8 param_2)

{
  (*(code *)**(undefined4 **)(*param_1 + 0x28))(param_1,param_2,0,0x7fffffffffffffff);
  return;
}


// 0x06048c4 (0x4 bytes)
void FUN_006048c4(void)

{
  return;
}


// 0x06048c8 (0x4 bytes)
void FUN_006048c8(void)

{
  return;
}


// 0x06048cc (0x8 bytes)
void FUN_006048cc(void)

{
  return;
}


// 0x06048d4 (0x8 bytes)
void FUN_006048d4(void)

{
  return;
}


// 0x06048dc (0xc bytes)
void FUN_006048dc(void)

{
  return;
}


// 0x06048e8 (0x30 bytes)
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_006048e8(void)

{
  uint uVar1;
  
  uVar1 = (int)~**(uint **)(_DAT_0071afe8 + -0x8000) >> 0x1f;
  return uVar1 - (uVar1 ^ ~**(uint **)(_DAT_0071afe8 + -0x8000)) >> 0x1f;
}


// 0x0604918 (0x18 bytes)
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00604918(void)

{
  return **(undefined4 **)(_DAT_0071afe8 + -0x7ffc);
}


// 0x0604930 (0xc bytes)
undefined8 FUN_00604930(void)

{
  return 0x70033;
}


// 0x060493c (0x18 bytes)
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0060493c(void)

{
  return **(undefined4 **)(_DAT_0071afe8 + -0x7ff8);
}


// 0x0604954 (0x18 bytes)
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00604954(void)

{
  return **(undefined4 **)(_DAT_0071afe8 + -0x7ff8);
}


// 0x060496c (0x18 bytes)
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0060496c(void)

{
  return **(undefined4 **)(_DAT_0071afe8 + -0x7ff4);
}


// 0x0604984 (0x1c bytes)
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 FUN_00604984(void)

{
  return **(undefined2 **)(_DAT_0071afe8 + -0x7ff0);
}


// 0x06049a0 (0x40 bytes)
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006049a0(double param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((double)*(float *)(_DAT_0071afe8 + -0x7fe0) < param_1) {
    uVar1 = (undefined4)(longlong)(param_1 * (double)*(float *)(_DAT_0071afe8 + -0x7fec));
  }
  **(undefined4 **)(_DAT_0071afe8 + -0x7fe4) = uVar1;
  return;
}


// 0x06049e0 (0x2c bytes)
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_006049e0(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = _DAT_0071afe8;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = **(undefined4 **)(_DAT_0071afe8 + -0x7fd8);
  }
  return (double)**(float **)(iVar1 + -0x7fd4);
}


// 0x0604a0c (0x1c bytes)
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00604a0c(void)

{
  return **(undefined4 **)(_DAT_0071afe8 + -0x7fd0);
}


// 0x0604a28 (0x28 bytes)
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00604a28(uint param_1)

{
  **(byte **)(_DAT_0071afe8 + -0x7fcc) =
       (byte)((longlong)((int)param_1 >> 0x1f) -
              ((longlong)((int)param_1 >> 0x1f) ^ (ulonglong)param_1) >> 0x18) >> 7;
  return;
}


// 0x0604a50 (0x28 bytes)
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00604a50(uint param_1)

{
  **(byte **)(_DAT_0071afe8 + -0x7fc8) =
       (byte)((longlong)((int)param_1 >> 0x1f) -
              ((longlong)((int)param_1 >> 0x1f) ^ (ulonglong)param_1) >> 0x18) >> 7;
  return;
}


// 0x0604a78 (0x3c bytes)
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_00604a78(void)

{
  bool bVar1;
  undefined4 *puVar2;
  
  bVar1 = **(int **)(_DAT_0071afe8 + -0x7fc4) == 0;
  if (bVar1) {
    puVar2 = *(undefined4 **)(_DAT_0071afe8 + -0x7fc0);
    **(int **)(_DAT_0071afe8 + -0x7fc4) = 1;
    *puVar2 = 0;
  }
  return bVar1;
}


// 0x0604ab4 (0x34 bytes)
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_00604ab4(void)

{
  bool bVar1;
  
  bVar1 = **(int **)(_DAT_0071afe8 + -0x7fc4) == 1;
  if (bVar1) {
    **(int **)(_DAT_0071afe8 + -0x7fc4) = 0;
  }
  return bVar1;
}


// 0x0604ae8 (0x18 bytes)
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00604ae8(void)

{
  return **(undefined4 **)(_DAT_0071afe8 + -0x7fc4);
}


// 0x0604b00 (0x84 bytes)
undefined4 FUN_00604b00(undefined4 param_1,undefined1 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  snd_SynthLock();
  iVar1 = FUN_0061a790(param_1);
  uVar2 = 0;
  if (iVar1 != 0) {
    *param_2 = *(undefined1 *)(iVar1 + 0x164);
    param_2[1] = *(undefined1 *)(iVar1 + 0x165);
    param_2[2] = *(undefined1 *)(iVar1 + 0x166);
    param_2[3] = *(undefined1 *)(iVar1 + 0x167);
    uVar2 = param_1;
  }
  return uVar2;
}


// 0x0604b84 (0xa0 bytes)
void FUN_00604b84(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  snd_SynthLock();
  iVar2 = FUN_0061a790(param_1);
  if (iVar2 != 0) {
    for (puVar1 = *(undefined4 **)(iVar2 + 0x22c); puVar1 != (undefined4 *)0x0;
        puVar1 = (undefined4 *)puVar1[0x8c]) {
      FUN_00604b84(*puVar1);
    }
    snd_SynthLock();
    FUN_00621460(iVar2);
    snd_SynthUnlock();
    *(undefined2 *)(iVar2 + 0x236) = 0xffff;
  }
  snd_SynthUnlock();
  return;
}


// 0x0604c24 (0x88 bytes)
int FUN_00604c24(undefined4 param_1)

{
  byte *pbVar1;
  int iVar2;
  
  snd_SynthLock();
  iVar2 = -1;
  pbVar1 = (byte *)FUN_0061a790(param_1);
  if (((pbVar1 != (byte *)0x0) && ((*pbVar1 & 0x1f) != 4)) &&
     (iVar2 = (int)*(short *)(pbVar1 + 0x236),
     (int)(*(byte *)(*(int *)(pbVar1 + 0x244) + 4) - 1) < iVar2)) {
    iVar2 = -1;
  }
  snd_SynthUnlock();
  return iVar2;
}


// 0x0604cac (0x5c bytes)
undefined1 FUN_00604cac(undefined4 param_1)

{
  int iVar1;
  undefined1 uVar2;
  
  snd_SynthLock();
  uVar2 = 0xff;
  iVar1 = FUN_0061a790(param_1);
  if (iVar1 != 0) {
    uVar2 = *(undefined1 *)(iVar1 + 0x10);
  }
  snd_SynthUnlock();
  return uVar2;
}


// 0x0604d08 (0x9c bytes)
ushort FUN_00604d08(ulonglong param_1)

{
  ushort uVar1;
  int iVar2;
  
  snd_SynthLock();
  iVar2 = FUN_0061a790(param_1 & 0xffffffff);
  if ((iVar2 != 0) && (((uint)(param_1 >> 0x18) & 0x1f) == 5)) {
    uVar1 = *(ushort *)(*(int *)(iVar2 + 0x54) + 6);
    snd_SynthUnlock();
    return uVar1 & 1;
  }
  snd_SynthUnlock();
  return 0;
}


// 0x0604da4 (0x74 bytes)
undefined4 FUN_00604da4(undefined4 param_1)

{
  int iVar1;
  
  snd_SynthLock();
  iVar1 = FUN_0061a790(param_1);
  if (iVar1 != 0) {
    snd_SynthUnlock();
    return param_1;
  }
  snd_SynthUnlock();
  return 0;
}


// 0x0604e18 (0x80 bytes)
undefined4 FUN_00604e18(undefined4 param_1,undefined1 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0061a790();
  uVar2 = 0;
  if (iVar1 != 0) {
    *(undefined1 *)(iVar1 + 0x164) = *param_2;
    *(undefined1 *)(iVar1 + 0x165) = param_2[1];
    *(undefined1 *)(iVar1 + 0x166) = param_2[2];
    *(undefined1 *)(iVar1 + 0x167) = param_2[3];
    uVar2 = param_1;
  }
  snd_SynthUnlock();
  return uVar2;
}


// 0x0604e98 (0x244 bytes)
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00604e98(undefined4 param_1,uint param_2,undefined2 param_3,undefined1 *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  
  iVar4 = _DAT_0071afe8;
  iVar1 = FUN_0060dcd8();
  puVar5 = (undefined1 *)(iVar1 + param_2 * 0x10 + (param_2 & 0x3fffffff) * -4);
  if (puVar5[4] != '\0') {
    uVar6 = FUN_0060fabc(*puVar5,0);
    FUN_0060fb74(*(undefined2 *)(puVar5 + 2));
    snd_SynthLock();
    puVar2 = (undefined4 *)FUN_0060f5cc(uVar6,puVar5);
    if (puVar2 != (undefined4 *)0x0) {
      uVar3 = FUN_00604918();
      puVar2[3] = uVar3;
      snd_SynthUnlock();
      puVar2[0x91] = puVar5;
      *(undefined2 *)(puVar2 + 0x8d) = 0;
      *(undefined2 *)((int)puVar2 + 0x236) = param_3;
      puVar2[0x90] = param_1;
      *(undefined1 *)(puVar2 + 0x59) = *param_4;
      *(undefined1 *)((int)puVar2 + 0x165) = param_4[1];
      *(undefined1 *)((int)puVar2 + 0x166) = param_4[2];
      *(undefined1 *)((int)puVar2 + 0x167) = param_4[3];
      puVar2[0x87] = 0xfffffffe;
      FUN_006104e8(puVar2);
      *(undefined2 *)((int)puVar2 + 0x236) = 0xffff;
      if (*(short *)(puVar2 + 0x8d) == 0) {
        if (((**(int **)(iVar4 + -0x7fc4) == 0) && (iVar4 = FUN_00619860(puVar2), iVar4 == 0)) &&
           (puVar2[0x8b] == 0)) {
          FUN_0061b218(puVar2,0);
          return 0;
        }
        FUN_0061aa54(puVar2);
        uVar3 = *puVar2;
      }
      else {
        FUN_0061aa54(puVar2);
        uVar3 = *puVar2;
      }
      return uVar3;
    }
    snd_SynthUnlock();
  }
  return 0;
}


// 0x06050dc (0x68 bytes)
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_006050dc(void)

{
  int iVar1;
  
  iVar1 = _DAT_0071afe8;
  if (**(int **)(_DAT_0071afe8 + -0x7fc4) != 0) {
    snd_SynthLock();
    **(undefined4 **)(iVar1 + -0x7fc0) = 1;
    FUN_0061bb5c(0xffffffff);
    snd_SynthUnlock();
  }
  return 1;
}


// 0x0605144 (0x34 bytes)
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00605144(undefined8 param_1)

{
  FUN_006187c8(param_1,*(undefined4 *)(_DAT_0071afe8 + -0x7fbc));
  return;
}


// 0x0605178 (0x34 bytes)
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00605178(undefined8 param_1)

{
  FUN_00617ea8(param_1,*(undefined4 *)(_DAT_0071afe8 + -0x7fbc));
  return;
}


// 0x06051ac (0xa8 bytes)
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

int FUN_006051ac(double param_1,undefined8 param_2)

{
  int iVar1;
  double dVar2;
  
  iVar1 = _DAT_0071afe8;
  dVar2 = (double)*(float *)(_DAT_0071afe8 + -0x7fb8);
  if (dVar2 <= param_1) {
    dVar2 = (double)FUN_005dd718(dVar2,param_2,0xffffffffffffffff);
    return (int)(dVar2 * (double)*(float *)(iVar1 + -0x7fb0));
  }
  dVar2 = (double)FUN_005dd718((double)(float)(dVar2 / (double)(float)(dVar2 - param_1)),param_2,
                               0xffffffffffffffff);
  return (int)(dVar2 * (double)*(float *)(iVar1 + -0x7fb0));
}


// 0x0605254 (0xd0 bytes)
// strings: 00669c28: '%s(%d) : Invalid parameter.\n' | 00669c48: 'common/api.cpp'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00605254(undefined4 *param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = _DAT_0071afe8;
  if (param_1 == (undefined4 *)0x0) {
    snd_Printf((char)*(undefined4 *)(_DAT_0071afe8 + -0x7fa8));
    if (**(char **)(iVar1 + -0x7fa0) == '\0') {
      trapWord(0x18,(ulonglong)**(byte **)(iVar1 + -0x7f9c),0);
      return;
    }
  }
  else {
    (*(code *)**(undefined4 **)*param_1)(param_1,param_2,0x1ce4);
    (**(code **)**(undefined4 **)(iVar1 + -0x7f98))(param_1);
  }
  return;
}


// 0x0605324 (0x134 bytes)
// strings: 00669c28: '%s(%d) : Invalid parameter.\n' | 00669c48: 'common/api.cpp'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_00605324(ulonglong param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  undefined1 uVar3;
  ulonglong uVar4;
  
  iVar2 = _DAT_0071afe8;
  if (((int)param_1 == 0) || (param_2 == (undefined1 *)0x0)) {
    uVar4 = 0;
    snd_Printf((char)*(undefined4 *)(_DAT_0071afe8 + -0x7fa8));
    if (**(char **)(iVar2 + -0x7fa0) != '\0') goto LAB_00605398;
    trapWord(0x18,(ulonglong)**(byte **)(iVar2 + -0x7f9c),0);
  }
  snd_SynthLock();
  iVar2 = FUN_0061a790(param_1 & 0xffffffff);
  if (iVar2 == 0) {
    uVar4 = 0;
    snd_SynthUnlock();
  }
  else {
    uVar4 = 0;
    if ((((uint)(param_1 >> 0x18) & 0x1f) == 5) &&
       (puVar1 = *(undefined1 **)(iVar2 + 0x54), uVar4 = param_1, param_2 != (undefined1 *)0x0)) {
      uVar3 = 0xff;
      *param_2 = *puVar1;
      param_2[1] = puVar1[1];
      *(undefined2 *)(param_2 + 2) = *(undefined2 *)(puVar1 + 2);
      if ((*(ushort *)(puVar1 + 6) & 8) != 0) {
        uVar3 = puVar1[5];
      }
      param_2[4] = uVar3;
    }
    snd_SynthUnlock();
  }
LAB_00605398:
  return uVar4 & 0xffffffff;
}


// 0x0605458 (0x158 bytes)
// strings: 00669c28: '%s(%d) : Invalid parameter.\n' | 00669c48: 'common/api.cpp'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00605458(int param_1,short param_2,undefined1 *param_3)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  
  iVar1 = _DAT_0071afe8;
  if (((param_1 == 0) || (param_2 < 0)) || (param_3 == (undefined1 *)0x0)) {
    snd_Printf((char)*(undefined4 *)(_DAT_0071afe8 + -0x7fa8));
    if (**(char **)(iVar1 + -0x7fa0) != '\0') {
      return 0;
    }
    trapWord(0x18,(ulonglong)**(byte **)(iVar1 + -0x7f9c),0);
  }
  if ((param_2 < *(short *)(param_1 + 0x16)) && (param_3 != (undefined1 *)0x0)) {
    iVar1 = FUN_0060dcd8(param_1);
    uVar3 = 0xff;
    puVar2 = (undefined1 *)(iVar1 + param_2 * 0x10 + ((int)param_2 & 0x3fffffffU) * -4);
    *param_3 = *puVar2;
    param_3[1] = puVar2[1];
    *(undefined2 *)(param_3 + 2) = *(undefined2 *)(puVar2 + 2);
    if ((*(ushort *)(puVar2 + 6) & 8) != 0) {
      uVar3 = puVar2[5];
    }
    param_3[4] = uVar3;
    return 1;
  }
  return 0;
}


// 0x06055b0 (0xf0 bytes)
// strings: 00669c28: '%s(%d) : Invalid parameter.\n' | 00669c48: 'common/api.cpp'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_006055b0(int param_1,short param_2)

{
  int iVar1;
  
  iVar1 = _DAT_0071afe8;
  if ((param_1 == 0) || (param_2 < 0)) {
    snd_Printf((char)*(undefined4 *)(_DAT_0071afe8 + -0x7fa8));
    if (**(char **)(iVar1 + -0x7fa0) != '\0') {
      return 0xff;
    }
    trapWord(0x18,(ulonglong)**(byte **)(iVar1 + -0x7f9c),0);
  }
  if (*(short *)(param_1 + 0x16) <= param_2) {
    return 0xff;
  }
  iVar1 = FUN_0060dcd8(param_1);
  return *(undefined1 *)(param_2 * 0xc + iVar1 + 1);
}


// 0x06056a0 (0x80 bytes)
// strings: 00669c28: '%s(%d) : Invalid parameter.\n' | 00669c48: 'common/api.cpp'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 FUN_006056a0(int param_1)

{
  int iVar1;
  
  iVar1 = _DAT_0071afe8;
  if (param_1 == 0) {
    snd_Printf((char)*(undefined4 *)(_DAT_0071afe8 + -0x7fa8));
    if (**(char **)(iVar1 + -0x7fa0) != '\0') {
      return 0;
    }
    trapWord(0x18,(ulonglong)**(byte **)(iVar1 + -0x7f9c),0);
  }
  return *(undefined2 *)(param_1 + 0x16);
}


// 0x0605720 (0x138 bytes)
// strings: 00669c28: '%s(%d) : Invalid parameter.\n' | 00669c48: 'common/api.cpp'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_00605720(double param_1,uint param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  double dVar5;
  
  iVar3 = _DAT_0071afe8;
  dVar5 = param_1;
  if (param_1 <= (double)*(float *)(_DAT_0071afe8 + -0x7fe0)) {
    param_1 = (double)*(float *)(_DAT_0071afe8 + -0x7fe0);
    snd_Printf((char)*(undefined4 *)(_DAT_0071afe8 + -0x7fa8));
    if (**(char **)(iVar3 + -0x7fa0) != '\0') {
      return param_1;
    }
    trapWord(0x18,(ulonglong)**(byte **)(iVar3 + -0x7f9c),0);
  }
  if (0x1f < param_2) {
    snd_Printf((char)*(undefined4 *)(iVar3 + -0x7fa8));
    param_1 = (double)*(float *)(iVar3 + -0x7fe0);
    if (**(char **)(iVar3 + -0x7fa0) != '\0') {
      return param_1;
    }
    trapWord(0x18,(ulonglong)**(byte **)(iVar3 + -0x7f9c),0);
  }
  if (dVar5 <= (double)*(float *)(iVar3 + -0x7fe0)) {
    iVar1 = *(int *)(iVar3 + -0x7f94);
    iVar4 = param_2 << 2;
  }
  else {
    iVar4 = param_2 * 4;
    snd_SynthLock(param_1);
    iVar1 = *(int *)(iVar3 + -0x7f94);
    puVar2 = *(undefined4 **)(iVar3 + -0x7f8c);
    iVar3 = *(int *)(iVar3 + -0x7f90);
    *(float *)(iVar1 + iVar4) = (float)dVar5;
    *puVar2 = 1;
    *(undefined4 *)(iVar3 + iVar4) = param_4;
    snd_SynthUnlock();
  }
  return (double)*(float *)(iVar1 + iVar4);
}


// 0x0605858 (0xb4 bytes)
// strings: 00669c28: '%s(%d) : Invalid parameter.\n' | 00669c48: 'common/api.cpp'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_00605858(uint param_1,undefined4 *param_2)

{
  float fVar1;
  int iVar2;
  
  iVar2 = _DAT_0071afe8;
  if (0x1f < param_1) {
    snd_Printf((char)*(undefined4 *)(_DAT_0071afe8 + -0x7fa8));
    fVar1 = *(float *)(iVar2 + -0x7fe0);
    if (**(char **)(iVar2 + -0x7fa0) != '\0') goto LAB_006058b8;
    trapWord(0x18,(ulonglong)**(byte **)(iVar2 + -0x7f9c),0);
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)(*(int *)(iVar2 + -0x7f90) + param_1 * 4);
  }
  fVar1 = *(float *)(*(int *)(iVar2 + -0x7f94) + param_1 * 4);
LAB_006058b8:
  return (double)fVar1;
}


// 0x060590c (0xac bytes)
// strings: 00669c28: '%s(%d) : Invalid parameter.\n' | 00669c48: 'common/api.cpp'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0060590c(uint param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = _DAT_0071afe8;
  if ((0x10 < param_1) || (param_2 == 0)) {
    snd_Printf((char)*(undefined4 *)(_DAT_0071afe8 + -0x7fa8));
    if (**(char **)(iVar1 + -0x7fa0) != '\0') {
      return 0;
    }
    trapWord(0x18,(ulonglong)**(byte **)(iVar1 + -0x7f9c),0);
  }
  uVar2 = 0xffffffff;
  if (param_1 < 0x10) {
    uVar2 = 1;
    *(int *)(*(int *)(iVar1 + -0x7f88) + param_1 * 4) = param_2;
  }
  return uVar2;
}


// 0x06059b8 (0x98 bytes)
// strings: 00669c28: '%s(%d) : Invalid parameter.\n' | 00669c48: 'common/api.cpp'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_006059b8(uint param_1)

{
  int iVar1;
  
  iVar1 = _DAT_0071afe8;
  if (param_1 < 0x11) {
    if (param_1 != 0x10) {
      return *(undefined4 *)(*(int *)(_DAT_0071afe8 + -0x7f88) + param_1 * 4);
    }
  }
  else {
    snd_Printf((char)*(undefined4 *)(_DAT_0071afe8 + -0x7fa8));
    if (**(char **)(iVar1 + -0x7fa0) == '\0') {
      trapWord(0x18,(ulonglong)**(byte **)(iVar1 + -0x7f9c),0);
    }
  }
  return 0;
}


// 0x0605a50 (0xdc bytes)
// strings: 00669c28: '%s(%d) : Invalid parameter.\n' | 00669c48: 'common/api.cpp'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_00605a50(double param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  float *pfVar4;
  double dVar5;
  
  iVar3 = _DAT_0071afe8;
  dVar5 = param_1;
  if (param_1 <= (double)*(float *)(_DAT_0071afe8 + -0x7fe0)) {
    param_1 = (double)*(float *)(_DAT_0071afe8 + -0x7fe0);
    snd_Printf((char)*(undefined4 *)(_DAT_0071afe8 + -0x7fa8));
    if (**(char **)(iVar3 + -0x7fa0) != '\0') {
      return param_1;
    }
    trapWord(0x18,(ulonglong)**(byte **)(iVar3 + -0x7f9c),0);
  }
  if (dVar5 <= (double)*(float *)(iVar3 + -0x7fe0)) {
    pfVar4 = *(float **)(iVar3 + -0x7fd4);
  }
  else {
    snd_SynthLock(param_1);
    pfVar4 = *(float **)(iVar3 + -0x7fd4);
    puVar1 = *(undefined4 **)(iVar3 + -0x7f8c);
    puVar2 = *(undefined4 **)(iVar3 + -0x7fd8);
    *pfVar4 = (float)dVar5;
    *puVar1 = 1;
    *puVar2 = param_3;
    snd_SynthUnlock();
  }
  return (double)*pfVar4;
}


// 0x0605b2c (0xd8 bytes)
// strings: 00669c28: '%s(%d) : Invalid parameter.\n' | 00669c48: 'common/api.cpp'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00605b2c(undefined4 param_1,undefined1 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = _DAT_0071afe8;
  if (param_2 == (undefined1 *)0x0) {
    snd_Printf((char)*(undefined4 *)(_DAT_0071afe8 + -0x7fa8));
    if (**(char **)(iVar1 + -0x7fa0) != '\0') {
      return 0;
    }
    trapWord(0x18,(ulonglong)**(byte **)(iVar1 + -0x7f9c),0);
  }
  snd_SynthLock();
  iVar1 = FUN_0061a790(param_1);
  uVar2 = 0;
  if (iVar1 != 0) {
    *(undefined1 *)(iVar1 + 0x164) = *param_2;
    *(undefined1 *)(iVar1 + 0x165) = param_2[1];
    *(undefined1 *)(iVar1 + 0x166) = param_2[2];
    *(undefined1 *)(iVar1 + 0x167) = param_2[3];
    uVar2 = param_1;
  }
  snd_SynthUnlock();
  return uVar2;
}


// 0x0605c04 (0xd8 bytes)
// strings: 00669c28: '%s(%d) : Invalid parameter.\n' | 00669c48: 'common/api.cpp'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00605c04(undefined4 param_1,undefined1 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = _DAT_0071afe8;
  if (param_2 == (undefined1 *)0x0) {
    snd_Printf((char)*(undefined4 *)(_DAT_0071afe8 + -0x7fa8));
    if (**(char **)(iVar1 + -0x7fa0) != '\0') {
      return 0;
    }
    trapWord(0x18,(ulonglong)**(byte **)(iVar1 + -0x7f9c),0);
  }
  snd_SynthLock();
  iVar1 = FUN_0061a790(param_1);
  uVar2 = 0;
  if (iVar1 != 0) {
    *param_2 = *(undefined1 *)(iVar1 + 0x164);
    param_2[1] = *(undefined1 *)(iVar1 + 0x165);
    param_2[2] = *(undefined1 *)(iVar1 + 0x166);
    param_2[3] = *(undefined1 *)(iVar1 + 0x167);
    uVar2 = param_1;
  }
  snd_SynthUnlock();
  return uVar2;
}


// 0x0605cdc (0xd8 bytes)
// strings: 00669c28: '%s(%d) : Invalid parameter.\n' | 00669c48: 'common/api.cpp'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00605cdc(undefined4 param_1,int param_2,undefined1 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = _DAT_0071afe8;
  if (3 < param_2 - 1U) {
    snd_Printf((char)*(undefined4 *)(_DAT_0071afe8 + -0x7fa8));
    if (**(char **)(iVar1 + -0x7fa0) != '\0') {
      return 0;
    }
    trapWord(0x18,(ulonglong)**(byte **)(iVar1 + -0x7f9c),0);
  }
  snd_SynthLock();
  iVar1 = FUN_0061a790(param_1);
  uVar2 = 0;
  if (iVar1 != 0) {
    *(undefined1 *)(iVar1 + param_2 + 0x163) = param_3;
    uVar2 = param_1;
  }
  snd_SynthUnlock();
  return uVar2;
}


// 0x0605db4 (0xe8 bytes)
// strings: 00669c28: '%s(%d) : Invalid parameter.\n' | 00669c48: 'common/api.cpp'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00605db4(undefined4 param_1,int param_2,undefined1 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = _DAT_0071afe8;
  if ((3 < param_2 - 1U) || (param_3 == (undefined1 *)0x0)) {
    snd_Printf((char)*(undefined4 *)(_DAT_0071afe8 + -0x7fa8));
    if (**(char **)(iVar1 + -0x7fa0) != '\0') {
      return 0;
    }
    trapWord(0x18,(ulonglong)**(byte **)(iVar1 + -0x7f9c),0);
  }
  snd_SynthLock();
  iVar1 = FUN_0061a790(param_1);
  uVar2 = 0;
  if (iVar1 != 0) {
    *param_3 = *(undefined1 *)(iVar1 + param_2 + 0x163);
    uVar2 = param_1;
  }
  snd_SynthUnlock();
  return uVar2;
}


// 0x0605e9c (0x84 bytes)
// strings: 00669c28: '%s(%d) : Invalid parameter.\n' | 00669c48: 'common/api.cpp'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00605e9c(int param_1,undefined1 param_2)

{
  int iVar1;
  
  iVar1 = _DAT_0071afe8;
  if (param_1 - 1U < 0x40) {
    *(undefined1 *)(*(int *)(_DAT_0071afe8 + -0x7f84) + (param_1 - 1U)) = param_2;
  }
  else {
    snd_Printf((char)*(undefined4 *)(_DAT_0071afe8 + -0x7fa8));
    if (**(char **)(iVar1 + -0x7fa0) == '\0') {
      trapWord(0x18,(ulonglong)**(byte **)(iVar1 + -0x7f9c),0);
      return;
    }
  }
  return;
}


// 0x0605f20 (0x94 bytes)
// strings: 00669c28: '%s(%d) : Invalid parameter.\n' | 00669c48: 'common/api.cpp'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_00605f20(int param_1)

{
  int iVar1;
  
  iVar1 = _DAT_0071afe8;
  if (param_1 - 1U < 0x40) {
    return *(undefined1 *)(*(int *)(_DAT_0071afe8 + -0x7f84) + (param_1 - 1U));
  }
  snd_Printf((char)*(undefined4 *)(_DAT_0071afe8 + -0x7fa8));
  if (**(char **)(iVar1 + -0x7fa0) == '\0') {
    trapWord(0x18,(ulonglong)**(byte **)(iVar1 + -0x7f9c),0);
  }
  return 0;
}


// 0x0605fb4 (0xac bytes)
// strings: 00669c28: '%s(%d) : Invalid parameter.\n' | 00669c48: 'common/api.cpp'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00605fb4(ulonglong param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = _DAT_0071afe8;
  if ((param_1 & 0xffff) < 0xfa) {
    snd_SynthLock(param_1,param_2,0x416);
    **(undefined2 **)(iVar1 + -0x7ff0) = (short)param_1;
    snd_SynthUnlock();
    uVar2 = 0;
  }
  else {
    snd_Printf((char)*(undefined4 *)(_DAT_0071afe8 + -0x7fa8));
    uVar2 = 0xffffffff;
    if (**(char **)(iVar1 + -0x7fa0) == '\0') {
      trapWord(0x18,(ulonglong)**(byte **)(iVar1 + -0x7f9c),0);
      snd_SynthLock();
      snd_SynthUnlock();
      uVar2 = 0xffffffff;
    }
  }
  return uVar2;
}


// 0x0606060 (0x90 bytes)
// strings: 00669c28: '%s(%d) : Invalid parameter.\n' | 00669c48: 'common/api.cpp'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00606060(int param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = _DAT_0071afe8;
  if (param_1 != 0) {
    uVar2 = FUN_00622a48(param_1,param_2,0x1d0f);
    return uVar2;
  }
  snd_Printf((char)*(undefined4 *)(_DAT_0071afe8 + -0x7fa8));
  if (**(char **)(iVar1 + -0x7fa0) == '\0') {
    trapWord(0x18,(ulonglong)**(byte **)(iVar1 + -0x7f9c),0);
  }
  return 0;
}


// 0x06060f0 (0x144 bytes)
// strings: 00669c48: 'common/api.cpp' | 00669c28: '%s(%d) : Invalid parameter.\n' | 00669c58: 'snd_PresetFileGetPresetName(): presetIndex out of range.\n'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void snd_PresetFileGetPresetName(int param_1,ulonglong param_2,int param_3,int param_4)

{
  int iVar1;
  ulonglong uVar2;
  byte in_cr0;
  byte in_cr1;
  byte in_cr2;
  byte in_cr3;
  byte unaff_cr4;
  byte in_cr5;
  byte in_cr6;
  byte in_cr7;
  uint uStack00000008;
  
  iVar1 = _DAT_0071afe8;
  uStack00000008 =
       (uint)(in_cr0 & 0xf) << 0x1c | (uint)(in_cr1 & 0xf) << 0x18 | (uint)(in_cr2 & 0xf) << 0x14 |
       (uint)(in_cr3 & 0xf) << 0x10 | (uint)(unaff_cr4 & 0xf) << 0xc | (uint)(in_cr5 & 0xf) << 8 |
       (uint)(in_cr6 & 0xf) << 4 | (uint)(in_cr7 & 0xf);
  if (((param_1 == 0) || (param_3 == 0)) || (param_4 == 0)) {
    snd_Printf((char)*(undefined4 *)(_DAT_0071afe8 + -0x7fa8));
    if (**(char **)(iVar1 + -0x7fa0) != '\0') {
      return;
    }
    trapWord(0x18,(ulonglong)**(byte **)(iVar1 + -0x7f9c),0);
    if (param_1 == 0) {
      return;
    }
    uVar2 = FUN_00622a48(param_1);
    if ((uVar2 & 0xffffffff) <= (param_2 & 0xffffffff)) goto LAB_006061fc;
  }
  else {
    uVar2 = FUN_00622a48(param_1,param_2,0x1d3e);
    if ((uVar2 & 0xffffffff) <= (param_2 & 0xffffffff)) {
LAB_006061fc:
      snd_Printf((char)*(undefined4 *)(iVar1 + -0x7f80));
      return;
    }
  }
  FUN_00622b2c(param_1,(int)param_2,param_3,param_4);
  return;
}


// 0x0606234 (0x128 bytes)
// strings: 00669c28: '%s(%d) : Invalid parameter.\n' | 00669c48: 'common/api.cpp'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00606234(int param_1,int param_2)

{
  int iVar1;
  byte in_cr0;
  byte in_cr1;
  byte in_cr2;
  byte in_cr3;
  byte unaff_cr4;
  byte in_cr5;
  byte in_cr6;
  byte in_cr7;
  uint uStack00000008;
  
  iVar1 = _DAT_0071afe8;
  uStack00000008 =
       (uint)(in_cr0 & 0xf) << 0x1c | (uint)(in_cr1 & 0xf) << 0x18 | (uint)(in_cr2 & 0xf) << 0x14 |
       (uint)(in_cr3 & 0xf) << 0x10 | (uint)(unaff_cr4 & 0xf) << 0xc | (uint)(in_cr5 & 0xf) << 8 |
       (uint)(in_cr6 & 0xf) << 4 | (uint)(in_cr7 & 0xf);
  if ((param_1 == 0) || (param_2 == 0)) {
    snd_Printf((char)*(undefined4 *)(_DAT_0071afe8 + -0x7fa8));
    if (**(char **)(iVar1 + -0x7fa0) != '\0') {
      return 0;
    }
    trapWord(0x18,(ulonglong)**(byte **)(iVar1 + -0x7f9c),0);
    if (param_1 == 0) {
      return 0;
    }
    if (param_2 == 0) {
      return 0;
    }
  }
  iVar1 = (**(code **)**(undefined4 **)(iVar1 + -0x7f7c))(0x10,3);
  if (iVar1 == 0) {
    return 0;
  }
  FUN_006223a0(iVar1);
  FUN_00622f28(iVar1,param_1,param_2);
  return iVar1;
}


// 0x060637c (0x8c bytes)
// strings: 00669c28: '%s(%d) : Invalid parameter.\n' | 00669c48: 'common/api.cpp'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0060637c(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = _DAT_0071afe8;
  if (param_2 == 0) {
    snd_Printf((char)*(undefined4 *)(_DAT_0071afe8 + -0x7fa8));
    if (**(char **)(iVar1 + -0x7fa0) != '\0') {
      return;
    }
    trapWord(0x18,(ulonglong)**(byte **)(iVar1 + -0x7f9c),0);
  }
  FUN_00626884(param_1,param_2);
  return;
}


// 0x0606408 (0x128 bytes)
// strings: 00669c98: 'snd_PremasterSubmixSetCustomPreset(): presetIndex out of range.\n' | 00669c28: '%s(%d) : Invalid parameter.\n' | 00669c48: 'common/api.cpp'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void snd_PremasterSubmixSetCustomPreset(undefined4 param_1,ulonglong param_2,uint param_3)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  GPiece<264> auStack_130;
  
  iVar2 = _DAT_0071afe8;
  uVar1 = param_2 & 0xffffffff;
  if ((int)param_2 == 0) {
    snd_Printf((char)*(undefined4 *)(_DAT_0071afe8 + -0x7fa8));
    if (**(char **)(iVar2 + -0x7fa0) == '\0') {
      trapWord(0x18,(ulonglong)**(byte **)(iVar2 + -0x7f9c),0);
      return;
    }
  }
  else {
    uVar3 = FUN_00622a48(uVar1,param_2,0x1c18);
    if (param_3 < uVar3) {
      FUN_00622b2c(uVar1,param_3,auStack_130,0x100);
      FUN_00623834(param_1,uVar1,auStack_130);
      return;
    }
    snd_Printf((char)*(undefined4 *)(iVar2 + -0x7f78));
  }
  return;
}


// 0x0606530 (0xac bytes)
// strings: 00669c28: '%s(%d) : Invalid parameter.\n' | 00669c48: 'common/api.cpp'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00606530(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = _DAT_0071afe8;
  if (((param_1 == 0) || (param_2 == 0)) || (param_3 == 0)) {
    snd_Printf((char)*(undefined4 *)(_DAT_0071afe8 + -0x7fa8));
    if (**(char **)(iVar1 + -0x7fa0) != '\0') {
      return;
    }
    trapWord(0x18,(ulonglong)**(byte **)(iVar1 + -0x7f9c),0);
  }
  FUN_00624044(param_1,param_2,param_3);
  return;
}


// 0x06065dc (0x15c bytes)
// strings: 00669ce0: 'snd_ReverbSetCustomPreset(): presetIndex out of range.\n' | 00669c48: 'common/api.cpp' | 00669c28: '%s(%d) : Invalid parameter.\n'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void snd_ReverbSetCustomPreset(int param_1,int param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  byte in_cr0;
  byte in_cr1;
  byte in_cr2;
  byte in_cr3;
  byte unaff_cr4;
  byte in_cr5;
  byte in_cr6;
  byte in_cr7;
  uint uStack00000008;
  GPiece<264> auStack_130;
  
  iVar1 = _DAT_0071afe8;
  uStack00000008 =
       (uint)(in_cr0 & 0xf) << 0x1c | (uint)(in_cr1 & 0xf) << 0x18 | (uint)(in_cr2 & 0xf) << 0x14 |
       (uint)(in_cr3 & 0xf) << 0x10 | (uint)(unaff_cr4 & 0xf) << 0xc | (uint)(in_cr5 & 0xf) << 8 |
       (uint)(in_cr6 & 0xf) << 4 | (uint)(in_cr7 & 0xf);
  if ((param_1 == 0) || (param_2 == 0)) {
    snd_Printf((char)*(undefined4 *)(_DAT_0071afe8 + -0x7fa8));
    if (**(char **)(iVar1 + -0x7fa0) != '\0') {
      return;
    }
    trapWord(0x18,(ulonglong)**(byte **)(iVar1 + -0x7f9c),0);
    if (param_1 == 0) {
      return;
    }
    if (param_2 == 0) {
      return;
    }
  }
  uVar2 = FUN_00622a48(param_2);
  if (uVar2 <= param_3) {
    snd_Printf((char)*(undefined4 *)(iVar1 + -0x7f74));
    return;
  }
  FUN_00622b2c(param_2,param_3,auStack_130,0x100);
  FUN_00606530(param_1,param_2,auStack_130);
  return;
}


// 0x0606738 (0x24 bytes)
void FUN_00606738(void)

{
  FUN_0062524c();
  return;
}


// 0x060675c (0x24 bytes)
void FUN_0060675c(void)

{
  FUN_006252e0();
  return;
}


// 0x0606780 (0x80 bytes)
// strings: 00669c28: '%s(%d) : Invalid parameter.\n' | 00669c48: 'common/api.cpp'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00606780(uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = _DAT_0071afe8;
  if (8 < param_1) {
    snd_Printf((char)*(undefined4 *)(_DAT_0071afe8 + -0x7fa8));
    if (**(char **)(iVar1 + -0x7fa0) != '\0') {
      return 0;
    }
    trapWord(0x18,(ulonglong)**(byte **)(iVar1 + -0x7f9c),0);
  }
  uVar2 = FUN_00625374(param_1);
  return uVar2;
}


// 0x0606800 (0x94 bytes)
// strings: 00669c28: '%s(%d) : Invalid parameter.\n' | 00669c48: 'common/api.cpp'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00606800(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = _DAT_0071afe8;
  if ((param_2 < -1) || (param_1 == 0)) {
    snd_Printf((char)*(undefined4 *)(_DAT_0071afe8 + -0x7fa8));
    if (**(char **)(iVar1 + -0x7fa0) != '\0') {
      return;
    }
    trapWord(0x18,(ulonglong)**(byte **)(iVar1 + -0x7f9c),0);
  }
  FUN_0062a394(param_1,param_2);
  return;
}


// 0x0606894 (0x10c bytes)
// strings: 00669c28: '%s(%d) : Invalid parameter.\n' | 00669c48: 'common/api.cpp'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00606894(double param_1,double param_2,undefined4 param_3,undefined8 param_4,
                 undefined8 param_5,uint param_6,uint param_7)

{
  int iVar1;
  
  iVar1 = _DAT_0071afe8;
  if ((((param_1 < (double)*(float *)(_DAT_0071afe8 + -0x7fe0)) ||
       ((double)*(float *)(_DAT_0071afe8 + -0x7f70) < param_1)) ||
      (param_2 < (double)*(float *)(_DAT_0071afe8 + -0x7fe0))) ||
     ((((double)*(float *)(_DAT_0071afe8 + -0x7f70) < param_2 || (0x167 < param_6)) ||
      (0x168 < param_7)))) {
    snd_Printf((char)*(undefined4 *)(_DAT_0071afe8 + -0x7fa8));
    if (**(char **)(iVar1 + -0x7fa0) != '\0') {
      return;
    }
    trapWord(0x18,(ulonglong)**(byte **)(iVar1 + -0x7f9c),0);
  }
  FUN_00626844(param_1,param_2,param_3);
  return;
}


// 0x06069a0 (0x24 bytes)
void FUN_006069a0(void)

{
  FUN_00626a3c();
  return;
}


// 0x06069c4 (0x9c bytes)
undefined4 FUN_006069c4(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  snd_SynthLock();
  iVar1 = FUN_0061a790(param_1);
  uVar2 = 0;
  uVar3 = 0;
  if (iVar1 != 0) {
    uVar2 = FUN_0061a6e0(iVar1,1);
    uVar3 = param_1;
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = uVar2;
  }
  snd_SynthUnlock();
  return uVar3;
}


// 0x0606a60 (0x3cc bytes)
// strings: 00669c28: '%s(%d) : Invalid parameter.\n' | 00669c48: 'common/api.cpp'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00606a60(undefined4 param_1,byte *param_2)

{
  byte bVar1;
  float fVar2;
  uint uVar3;
  byte *pbVar4;
  ulonglong uVar5;
  char asdf;
  byte *pbVar6;
  int iVar7;
  undefined2 uVar8;
  ulonglong uVar9;
  undefined4 uVar10;
  GPiece<32> local_50;
  
  iVar7 = _DAT_0071afe8;
  if (((param_2 == (byte *)0x0) || (*param_2 == 0)) || (4 < *param_2)) {
    asdf = (char)*(undefined4 *)(_DAT_0071afe8 + -0x7fa8);
    snd_Printf(asdf);
    snd_Printf(asdf);
    if (**(char **)(iVar7 + -0x7fa0) != '\0') {
      return 0;
    }
    trapWord(0x18,(ulonglong)**(byte **)(iVar7 + -0x7f9c),0);
  }
  snd_SynthLock();
  pbVar6 = (byte *)FUN_0061a790(param_1);
  if ((pbVar6 != (byte *)0x0) && ((*pbVar6 & 0x1f) == 5)) {
    pbVar4 = pbVar6 + (uint)*param_2 * 0x30;
    if (*(short *)(pbVar4 + 0x2c) == 0) {
      uVar3 = *(uint *)(param_2 + 0xc);
      uVar9 = (ulonglong)uVar3;
      if ((uVar3 & 0x1d) != 0x1d) {
        snd_SynthUnlock();
        return 0;
      }
      if ((((byte)(param_2[1] - 5) < 2) &&
          ((((uVar3 & 2) == 0 || (bVar1 = param_2[2], bVar1 == 0)) ||
           ((4 < bVar1 || (*param_2 == bVar1)))))) || ((param_2[4] == 2 && ((uVar3 & 0x40) == 0))))
      goto LAB_00606b28;
    }
    else {
      uVar9 = (ulonglong)*(uint *)(param_2 + 0xc);
    }
    fVar2 = *(float *)(param_2 + 8);
    uVar10 = 0;
    if ((*(float *)(iVar7 + -0x7fe0) <= fVar2) &&
       (uVar10 = 0x1aaaaaa, fVar2 <= *(float *)(iVar7 + -0x7f68))) {
      uVar10 = (undefined4)
               (longlong)
               (((fVar2 * *(float *)(iVar7 + -0x7f60)) / *(float *)(iVar7 + -0x7fec)) *
               *(float *)(iVar7 + -0x7f58));
    }
    bVar1 = param_2[5];
    uVar8 = 0;
    if ((-1 < (char)bVar1) && (uVar8 = 0x400, (char)bVar1 < 'e')) {
      uVar8 = (undefined2)
              ((ulonglong)((longlong)(int)(((int)(char)bVar1 & 0xffffU) << 10) * 0x51eb851f) >> 0x25
              );
    }
    if (((*(short *)(pbVar4 + 0x2c) != 0) && ((uVar9 & 0x18) != 0)) &&
       (uVar5 = (uVar9 & 7) << 0x1b | (uVar9 << 0x20) >> 0x25,
       (int)(uVar5 << 5) == 0 && (uint)uVar5 >> 0x1b == 0)) {
      if ((uVar9 & 8) != 0) {
        *(undefined4 *)(pbVar4 + 0x3c) = uVar10;
        uVar9 = (ulonglong)*(uint *)(param_2 + 0xc);
      }
      if ((uVar9 & 0x10) != 0) {
        *(undefined2 *)(pbVar4 + 0x32) = uVar8;
      }
      goto LAB_00606b2c;
    }
    iVar7 = FUN_006174b0(pbVar6,local_50);
    if (iVar7 == 0) goto LAB_00606b2c;
  }
LAB_00606b28:
  param_1 = 0;
LAB_00606b2c:
  snd_SynthUnlock();
  return param_1;
}


// 0x0606e2c (0x184 bytes)
// strings: 00669c48: 'common/api.cpp' | 00669d18: '%s(%d) : update to set size member.\n' | 00669c28: '%s(%d) : Invalid parameter.\n'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00606e2c(undefined4 param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  
  iVar3 = _DAT_0071afe8;
  if (param_2 == (int *)0x0) {
    snd_Printf((char)*(undefined4 *)(_DAT_0071afe8 + -0x7fa8));
    if (**(char **)(iVar3 + -0x7fa0) != '\0') {
      return 0;
    }
    trapWord(0x18,(ulonglong)**(byte **)(iVar3 + -0x7f9c),0);
  }
  if (*param_2 != 0xdc) {
    snd_Printf((char)*(undefined4 *)(iVar3 + -0x7f50));
  }
  memset(param_2,0,0xdc);
  *param_2 = 0xdc;
  snd_SynthLock();
  iVar3 = FUN_0061a790(param_1);
  if (iVar3 == 0) {
    param_1 = 0;
    snd_SynthUnlock();
  }
  else {
    iVar1 = *(int *)(iVar3 + 0x120);
    param_2[5] = *(int *)(iVar3 + 300);
    iVar2 = *(int *)(iVar3 + 0x13c);
    param_2[4] = iVar1;
    param_2[6] = iVar2;
    iVar2 = *(int *)(iVar3 + 8);
    iVar1 = *(int *)(iVar3 + 0x154);
    param_2[7] = *(int *)(iVar3 + 0x144);
    param_2[8] = iVar1;
    param_2[3] = iVar2;
    *(undefined1 *)(param_2 + 9) = *(undefined1 *)(iVar3 + 0x164);
    *(undefined1 *)((int)param_2 + 0x25) = *(undefined1 *)(iVar3 + 0x165);
    *(undefined1 *)((int)param_2 + 0x26) = *(undefined1 *)(iVar3 + 0x166);
    *(undefined1 *)((int)param_2 + 0x27) = *(undefined1 *)(iVar3 + 0x167);
    pvVar4 = memcpy(param_2 + 10,(void *)(iVar3 + 0x168),0xb4);
    param_2[1] = 0xf007f;
    snd_SynthUnlock(pvVar4);
  }
  return param_1;
}


// 0x0606fb0 (0xec bytes)
// strings: 00669c28: '%s(%d) : Invalid parameter.\n' | 00669c48: 'common/api.cpp'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00606fb0(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  GPiece<16> local_30;
  
  iVar1 = _DAT_0071afe8;
  if ((param_2 == 0) || (param_3 == 0)) {
    snd_Printf((char)*(undefined4 *)(_DAT_0071afe8 + -0x7fa8));
    if (**(char **)(iVar1 + -0x7fa0) != '\0') {
      return 0;
    }
    trapWord(0x18,(ulonglong)**(byte **)(iVar1 + -0x7f9c),0);
  }
  iVar1 = FUN_0061838c(param_1,param_2,local_30);
  if (iVar1 < 0) {
    return 0;
  }
  uVar2 = FUN_00605458(param_1,(short)iVar1,param_3);
  return uVar2;
}


// 0x060709c (0xc0 bytes)
// strings: 00669c28: '%s(%d) : Invalid parameter.\n' | 00669c48: 'common/api.cpp'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0060709c(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  GPiece<24> local_30;
  
  iVar1 = _DAT_0071afe8;
  if ((param_1 == 0) || (param_2 == 0)) {
    snd_Printf((char)*(undefined4 *)(_DAT_0071afe8 + -0x7fa8));
    if (**(char **)(iVar1 + -0x7fa0) != '\0') {
      return 0xffffffff;
    }
    trapWord(0x18,(ulonglong)**(byte **)(iVar1 + -0x7f9c),0);
  }
  iVar1 = FUN_0061838c(param_1,param_2,local_30);
  uVar2 = 0xffffffff;
  if (-1 < iVar1) {
    uVar2 = FUN_006055b0(param_1,(short)iVar1);
  }
  return uVar2;
}


// 0x060715c (0xf0 bytes)
// strings: 00669c28: '%s(%d) : Invalid parameter.\n' | 00669c48: 'common/api.cpp'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0060715c(undefined4 param_1,int param_2,ushort *param_3,undefined4 *param_4)

{
  int iVar1;
  ushort uVar2;
  GPiece<16> local_40;
  
  iVar1 = _DAT_0071afe8;
  if ((param_2 == 0) || (param_3 == (ushort *)0x0)) {
    snd_Printf((char)*(undefined4 *)(_DAT_0071afe8 + -0x7fa8));
    if (**(char **)(iVar1 + -0x7fa0) != '\0') {
      return 0;
    }
    trapWord(0x18,(ulonglong)**(byte **)(iVar1 + -0x7f9c),0);
  }
  uVar2 = FUN_0061838c(param_1,param_2,local_40);
  *param_3 = uVar2;
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = 0;
  }
  return (uint)(-(ulonglong)(ushort)~uVar2 >> 0x3f);
}


// 0x060724c (0xe8 bytes)
// strings: 00669c28: '%s(%d) : Invalid parameter.\n' | 00669c48: 'common/api.cpp'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0060724c(int *param_1,short param_2)

{
  int iVar1;
  
  iVar1 = _DAT_0071afe8;
  if ((param_1 == (int *)0x0) || (param_2 < 0)) {
    snd_Printf((char)*(undefined4 *)(_DAT_0071afe8 + -0x7fa8));
    if (**(char **)(iVar1 + -0x7fa0) != '\0') {
      return 0;
    }
    trapWord(0x18,(ulonglong)**(byte **)(iVar1 + -0x7f9c),0);
  }
  if (((*param_1 == 0x6b6c4253) && (param_2 < *(short *)((int)param_1 + 0x16))) &&
     ((param_1[2] & 0x200U) != 0)) {
    iVar1 = FUN_0060d798(param_1);
    return iVar1 + param_2 * 0x40 + ((int)param_2 & 0xfffffffU) * -0x10;
  }
  return 0;
}


// 0x0607334 (0xf0 bytes)
// strings: 00669c48: 'common/api.cpp' | 00669c28: '%s(%d) : Invalid parameter.\n'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00607334(ulonglong param_1)

{
  uint uVar1;
  int iVar3;
  longlong lVar2;
  undefined4 uVar4;
  
  iVar3 = _DAT_0071afe8;
  if ((int)param_1 == 0) {
    snd_Printf((char)*(undefined4 *)(_DAT_0071afe8 + -0x7fa8));
    if (**(char **)(iVar3 + -0x7fa0) != '\0') {
      return 0;
    }
    trapWord(0x18,(ulonglong)**(byte **)(iVar3 + -0x7f9c),0);
  }
  snd_SynthLock();
  iVar3 = FUN_0061a790(param_1 & 0xffffffff);
  uVar4 = 0;
  if ((iVar3 != 0) && (((uint)(param_1 >> 0x18) & 0x1f) == 5)) {
    uVar4 = *(undefined4 *)(iVar3 + 0x240);
    uVar1 = *(uint *)(iVar3 + 0x54);
    lVar2 = FUN_0060dcd8(uVar4);
    uVar4 = FUN_0060724c(uVar4,(short)(((ulonglong)uVar1 - lVar2 & 0xffffffff) / 0xc));
  }
  snd_SynthUnlock();
  return uVar4;
}


// 0x0607424 (0xe0 bytes)
// strings: 00669c28: '%s(%d) : Invalid parameter.\n' | 00669c48: 'common/api.cpp'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00607424(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  GPiece<16> local_30;
  
  iVar1 = _DAT_0071afe8;
  if (param_2 == 0) {
    snd_Printf((char)*(undefined4 *)(_DAT_0071afe8 + -0x7fa8));
    if (**(char **)(iVar1 + -0x7fa0) != '\0') {
      return 0;
    }
    trapWord(0x18,(ulonglong)**(byte **)(iVar1 + -0x7f9c),0);
  }
  iVar1 = FUN_0061838c(param_1,param_2,local_30);
  if (iVar1 < 0) {
    return 0;
  }
  uVar2 = FUN_0060724c(param_1,(short)iVar1);
  return uVar2;
}


// 0x0607504 (0xa8 bytes)
undefined4 FUN_00607504(ulonglong param_1)

{
  int iVar1;
  
  snd_SynthLock();
  iVar1 = FUN_0061a790(param_1 & 0xffffffff);
  if (((iVar1 != 0) && (((uint)(param_1 >> 0x18) & 0x1f) == 5)) &&
     (iVar1 = FUN_0060e084(iVar1), -1 < iVar1)) {
    snd_SynthUnlock();
    return 1;
  }
  snd_SynthUnlock();
  return 0;
}


// 0x06075ac (0x11c bytes)
// strings: 00669c28: '%s(%d) : Invalid parameter.\n' | 00669c48: 'common/api.cpp'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_006075ac(int *param_1,short param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = _DAT_0071afe8;
  if ((param_1 == (int *)0x0) || (param_2 < 0)) {
    snd_Printf((char)*(undefined4 *)(_DAT_0071afe8 + -0x7fa8));
    if (**(char **)(iVar1 + -0x7fa0) != '\0') {
      return 0;
    }
    trapWord(0x18,(ulonglong)**(byte **)(iVar1 + -0x7f9c),0);
  }
  if ((*param_1 == 0x6b6c4253) && (param_2 < *(short *)((int)param_1 + 0x16))) {
    iVar1 = FUN_0060dcd8(param_1);
    uVar2 = FUN_0060df5c(param_1,iVar1 + param_2 * 0x10 + ((int)param_2 & 0x3fffffffU) * -4);
    return ~uVar2 >> 0x1f;
  }
  return 0;
}


// 0x06076c8 (0xe4 bytes)
// strings: 00669c28: '%s(%d) : Invalid parameter.\n' | 00669c48: 'common/api.cpp'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_006076c8(undefined4 param_1,int param_2)

{
  int iVar1;
  short sVar3;
  undefined4 uVar2;
  GPiece<16> local_30;
  
  iVar1 = _DAT_0071afe8;
  if (param_2 == 0) {
    snd_Printf((char)*(undefined4 *)(_DAT_0071afe8 + -0x7fa8));
    if (**(char **)(iVar1 + -0x7fa0) != '\0') {
      return 0;
    }
    trapWord(0x18,(ulonglong)**(byte **)(iVar1 + -0x7f9c),0);
  }
  sVar3 = FUN_0061838c(param_1,param_2,local_30);
  if (sVar3 < 0) {
    return 0;
  }
  uVar2 = FUN_006075ac(param_1,sVar3);
  return uVar2;
}


// 0x06077ac (0xa8 bytes)
undefined4 FUN_006077ac(ulonglong param_1)

{
  int iVar1;
  
  snd_SynthLock();
  iVar1 = FUN_0061a790(param_1 & 0xffffffff);
  if (((iVar1 != 0) && (((uint)(param_1 >> 0x18) & 0x1f) == 5)) &&
     (iVar1 = FUN_0060debc(iVar1), -1 < iVar1)) {
    snd_SynthUnlock();
    return 1;
  }
  snd_SynthUnlock();
  return 0;
}


// 0x0607854 (0x11c bytes)
// strings: 00669c28: '%s(%d) : Invalid parameter.\n' | 00669c48: 'common/api.cpp'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00607854(int *param_1,short param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = _DAT_0071afe8;
  if ((param_1 == (int *)0x0) || (param_2 < 0)) {
    snd_Printf((char)*(undefined4 *)(_DAT_0071afe8 + -0x7fa8));
    if (**(char **)(iVar1 + -0x7fa0) != '\0') {
      return 0;
    }
    trapWord(0x18,(ulonglong)**(byte **)(iVar1 + -0x7f9c),0);
  }
  if ((*param_1 == 0x6b6c4253) && (param_2 < *(short *)((int)param_1 + 0x16))) {
    iVar1 = FUN_0060dcd8(param_1);
    uVar2 = FUN_0060ddac(param_1,iVar1 + param_2 * 0x10 + ((int)param_2 & 0x3fffffffU) * -4);
    return ~uVar2 >> 0x1f;
  }
  return 0;
}


// 0x0607970 (0xe0 bytes)
// strings: 00669c28: '%s(%d) : Invalid parameter.\n' | 00669c48: 'common/api.cpp'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00607970(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  GPiece<4> local_30;
  GPiece<20> local_2c;
  
  iVar1 = _DAT_0071afe8;
  if (param_2 == 0) {
    snd_Printf((char)*(undefined4 *)(_DAT_0071afe8 + -0x7fa8));
    if (**(char **)(iVar1 + -0x7fa0) != '\0') {
      return 0;
    }
    trapWord(0x18,(ulonglong)**(byte **)(iVar1 + -0x7f9c),0);
  }
  iVar1 = FUN_0060715c(param_1,param_2,local_30,local_2c);
  if (iVar1 == 0) {
    return 0;
  }
  uVar2 = FUN_00607854(0,0);
  return uVar2;
}


// 0x0607a50 (0xe4 bytes)
// strings: 00669c48: 'common/api.cpp' | 00669c28: '%s(%d) : Invalid parameter.\n'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00607a50(undefined4 param_1,short param_2)

{
  int iVar1;
  byte *pbVar2;
  undefined4 uVar3;
  
  iVar1 = _DAT_0071afe8;
  if (param_2 < 0) {
    snd_Printf((char)*(undefined4 *)(_DAT_0071afe8 + -0x7fa8));
    if (**(char **)(iVar1 + -0x7fa0) != '\0') {
      return 0;
    }
    trapWord(0x18,(ulonglong)**(byte **)(iVar1 + -0x7f9c),0);
  }
  snd_SynthLock();
  pbVar2 = (byte *)FUN_0061a790(param_1);
  uVar3 = 0;
  if ((pbVar2 != (byte *)0x0) && ((*pbVar2 & 0x1f) == 5)) {
    uVar3 = FUN_00619794(pbVar2,param_2);
  }
  snd_SynthUnlock();
  return uVar3;
}


// 0x0607b34 (0x64 bytes)
undefined4 FUN_00607b34(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  snd_SynthLock();
  uVar2 = 0;
  iVar1 = FUN_0061a790(param_1);
  if (iVar1 != 0) {
    uVar2 = FUN_00619718(iVar1);
  }
  snd_SynthUnlock();
  return uVar2;
}


// 0x0607b98 (0x150 bytes)
// strings: 00669c28: '%s(%d) : Invalid parameter.\n' | 00669c48: 'common/api.cpp'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00607b98(int *param_1,short param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = _DAT_0071afe8;
  if ((param_1 == (int *)0x0) || (param_2 < 0)) {
    snd_Printf((char)*(undefined4 *)(_DAT_0071afe8 + -0x7fa8));
    if (**(char **)(iVar1 + -0x7fa0) != '\0') {
      return 0;
    }
    trapWord(0x18,(ulonglong)**(byte **)(iVar1 + -0x7f9c),0);
  }
  if (*param_1 != 0x6b6c4253) {
    iVar1 = FUN_00619914(*param_1);
    if ((iVar1 != 0) && (*(undefined4 **)(iVar1 + 0x14) != (undefined4 *)0x0)) {
      uVar2 = (*(code *)**(undefined4 **)(iVar1 + 0x14))(param_1,param_2);
      return uVar2;
    }
    return 0;
  }
  uVar2 = FUN_0060dd64(param_1,param_2);
  return uVar2;
}


// 0x0607ce8 (0xe4 bytes)
// strings: 00669c28: '%s(%d) : Invalid parameter.\n' | 00669c48: 'common/api.cpp'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00607ce8(undefined4 param_1,int param_2)

{
  int iVar1;
  short sVar3;
  undefined4 uVar2;
  GPiece<16> local_30;
  
  iVar1 = _DAT_0071afe8;
  if (param_2 == 0) {
    snd_Printf((char)*(undefined4 *)(_DAT_0071afe8 + -0x7fa8));
    if (**(char **)(iVar1 + -0x7fa0) != '\0') {
      return 0;
    }
    trapWord(0x18,(ulonglong)**(byte **)(iVar1 + -0x7f9c),0);
  }
  sVar3 = FUN_0061838c(param_1,param_2,local_30);
  if (sVar3 < 0) {
    return 0;
  }
  uVar2 = FUN_00607b98(param_1,sVar3);
  return uVar2;
}


// 0x0607dcc (0x2e0 bytes)
// strings: 00669c48: 'common/api.cpp' | 00669d18: '%s(%d) : update to set size member.\n' | 00669c28: '%s(%d) : Invalid parameter.\n'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00607dcc(undefined4 param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = _DAT_0071afe8;
  if (param_2 == (int *)0x0) {
    snd_Printf((char)*(undefined4 *)(_DAT_0071afe8 + -0x7fa8));
    if (**(char **)(iVar1 + -0x7fa0) != '\0') {
      return 0;
    }
    trapWord(0x18,(ulonglong)**(byte **)(iVar1 + -0x7f9c),0);
  }
  if (*param_2 != 0xdc) {
    snd_Printf((char)*(undefined4 *)(iVar1 + -0x7f50));
  }
  snd_SynthLock();
  iVar1 = FUN_0061a790(param_1);
  if (iVar1 != 0) {
    FUN_0061c628(iVar1,param_2);
    uVar3 = param_2[1];
    if ((uVar3 & 4) != 0) {
      iVar2 = FUN_00619b68(iVar1,2);
      if ((iVar2 != 0) && ((*(uint *)(iVar2 + 0x20) & 0x20) == 0)) {
        FUN_0061a34c(iVar1,2);
      }
      FUN_0061ae90(iVar1);
      if ((*(uint *)(iVar1 + 4) & 0x10000) == 0) {
        uVar3 = param_2[1];
      }
      else {
        FUN_0061addc(iVar1);
        uVar3 = param_2[1];
      }
    }
    if ((uVar3 & 0x18) != 0) {
      iVar2 = FUN_00619b68(iVar1,4);
      if ((iVar2 != 0) && ((*(uint *)(iVar2 + 0x24) & 0x20) == 0)) {
        FUN_0061a34c(iVar1,4);
      }
      FUN_0061addc(iVar1);
      uVar3 = param_2[1];
    }
    if ((uVar3 & 1) != 0) {
      iVar2 = FUN_00619b68(iVar1,8);
      if ((iVar2 != 0) && ((*(uint *)(iVar2 + 0x20) & 0x20) == 0)) {
        FUN_0061a34c(iVar1,8);
      }
      FUN_0061ad24(iVar1);
      uVar3 = param_2[1];
    }
    if ((uVar3 & 2) != 0) {
      iVar2 = FUN_00619b68(iVar1,0x10);
      if ((iVar2 != 0) && ((*(uint *)(iVar2 + 0x20) & 0x20) == 0)) {
        FUN_0061a34c(iVar1,0x10);
      }
      FUN_0061ad24(iVar1);
      uVar3 = param_2[1];
    }
    if ((uVar3 & 0x20) != 0) {
      FUN_0061ac6c(iVar1);
    }
    snd_SynthUnlock();
    return param_1;
  }
  snd_SynthUnlock();
  return 0;
}


// 0x06080ac (0x128 bytes)
// strings: 00669c48: 'common/api.cpp' | 00669d40: '%s(%d) : Unsupported bank format.\n'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006080ac(int *param_1,short param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = _DAT_0071afe8;
  snd_SynthLock();
  if (*param_1 != 0x6b6c4253) {
    snd_Printf((char)*(undefined4 *)(iVar2 + -0x7f4c));
    snd_SynthUnlock();
    return;
  }
  if (param_2 < *(short *)((int)param_1 + 0x16)) {
    iVar3 = FUN_0060dcd8(param_1);
    for (puVar1 = (undefined4 *)**(undefined4 **)(iVar2 + -0x7f48); puVar1 != (undefined4 *)0x0;
        puVar1 = (undefined4 *)puVar1[0x89]) {
      if ((puVar1[0x8a] == 0) && (puVar1[0x15] == iVar3 + param_2 * 0xc)) {
        FUN_00607dcc(*puVar1,param_3);
      }
    }
  }
  snd_SynthUnlock();
  return;
}


// 0x06081d4 (0xc8 bytes)
// strings: 00669c48: 'common/api.cpp' | 00669c28: '%s(%d) : Invalid parameter.\n'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_006081d4(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = _DAT_0071afe8;
  if (param_2 == 0) {
    snd_Printf((char)*(undefined4 *)(_DAT_0071afe8 + -0x7fa8));
    if (**(char **)(iVar1 + -0x7fa0) != '\0') {
      return 0;
    }
    trapWord(0x18,(ulonglong)**(byte **)(iVar1 + -0x7f9c),0);
  }
  snd_SynthLock();
  iVar1 = FUN_0061a790(param_1);
  uVar2 = 0;
  if (iVar1 != 0) {
    FUN_006199d8(iVar1,param_2);
    uVar2 = param_1;
  }
  snd_SynthUnlock();
  return uVar2;
}


// 0x060829c (0xc8 bytes)
// strings: 00669c48: 'common/api.cpp' | 00669c28: '%s(%d) : Invalid parameter.\n'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0060829c(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = _DAT_0071afe8;
  if (param_2 == 0) {
    snd_Printf((char)*(undefined4 *)(_DAT_0071afe8 + -0x7fa8));
    if (**(char **)(iVar1 + -0x7fa0) != '\0') {
      return 0;
    }
    trapWord(0x18,(ulonglong)**(byte **)(iVar1 + -0x7f9c),0);
  }
  snd_SynthLock();
  iVar1 = FUN_0061a790(param_1);
  uVar2 = 0;
  if (iVar1 != 0) {
    FUN_006199b4(iVar1,param_2);
    uVar2 = param_1;
  }
  snd_SynthUnlock();
  return uVar2;
}


// 0x0608364 (0xc8 bytes)
// strings: 00669c48: 'common/api.cpp' | 00669c28: '%s(%d) : Invalid parameter.\n'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00608364(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = _DAT_0071afe8;
  if (param_2 == 0) {
    snd_Printf((char)*(undefined4 *)(_DAT_0071afe8 + -0x7fa8));
    if (**(char **)(iVar1 + -0x7fa0) != '\0') {
      return 0;
    }
    trapWord(0x18,(ulonglong)**(byte **)(iVar1 + -0x7f9c),0);
  }
  snd_SynthLock();
  iVar1 = FUN_0061a790(param_1);
  uVar2 = 0;
  if (iVar1 != 0) {
    FUN_00619990(iVar1,param_2);
    uVar2 = param_1;
  }
  snd_SynthUnlock();
  return uVar2;
}


// 0x060842c (0xc8 bytes)
// strings: 00669c48: 'common/api.cpp' | 00669c28: '%s(%d) : Invalid parameter.\n'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0060842c(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = _DAT_0071afe8;
  if (param_2 == 0) {
    snd_Printf((char)*(undefined4 *)(_DAT_0071afe8 + -0x7fa8));
    if (**(char **)(iVar1 + -0x7fa0) != '\0') {
      return 0;
    }
    trapWord(0x18,(ulonglong)**(byte **)(iVar1 + -0x7f9c),0);
  }
  snd_SynthLock();
  iVar1 = FUN_0061a790(param_1);
  uVar2 = 0;
  if (iVar1 != 0) {
    FUN_006199fc(iVar1,param_2);
    uVar2 = param_1;
  }
  snd_SynthUnlock();
  return uVar2;
}


// 0x06084f4 (0x84 bytes)
undefined4 FUN_006084f4(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  snd_SynthLock();
  iVar1 = FUN_0061a790(param_1);
  uVar2 = 0;
  if (iVar1 != 0) {
    FUN_0061b86c(iVar1,1,param_2,0);
    uVar2 = param_1;
  }
  snd_SynthUnlock();
  return uVar2;
}


// 0x0608578 (0x3ac bytes)
// strings: 00669c28: '%s(%d) : Invalid parameter.\n' | 00669c48: 'common/api.cpp' | 00669d68: '%s(%d) : Insufficient effect resources.\n'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_00608578(double param_1,double param_2,undefined4 param_3,undefined8 param_4,undefined8 param_5,
            uint param_6)

{
  uint uVar1;
  char asdf;
  int iVar2;
  uint *puVar3;
  int iVar4;
  GPiece<232> local_130;
  
  iVar4 = _DAT_0071afe8;
  if ((param_1 < (double)*(float *)(_DAT_0071afe8 + -0x7fe0)) ||
     ((double)*(float *)(_DAT_0071afe8 + -0x7f70) < param_1)) {
    asdf = (char)*(undefined4 *)(_DAT_0071afe8 + -0x7fa8);
    snd_Printf(asdf);
    snd_Printf(asdf);
    if (**(char **)(iVar4 + -0x7fa0) != '\0') {
      return 0;
    }
    trapWord(0x18,(ulonglong)**(byte **)(iVar4 + -0x7f9c),0);
  }
  snd_SynthLock();
  iVar2 = FUN_0061a790(param_3);
  if (iVar2 == 0) {
    snd_SynthUnlock();
    param_3 = 0;
  }
  else {
    if (param_2 <= (double)*(float *)(iVar4 + -0x7fe0)) {
      iVar4 = FUN_00619b68(iVar2,2);
      if (iVar4 != 0) {
        FUN_0061a34c(iVar2,2);
      }
      if ((param_6 & 0x20) == 0) {
        memset(local_130,0,0xdc);
        FUN_00607dcc(param_3,local_130);
      }
      else {
        FUN_0060d3cc(param_1,iVar2);
        FUN_0061ae90(iVar2);
      }
      if ((param_6 & 1) != 0) {
        FUN_006084f4(param_3,0);
      }
    }
    else {
      puVar3 = (uint *)FUN_00619b68(iVar2,2);
      if (puVar3 == (uint *)0x0) {
        puVar3 = (uint *)FUN_0061a418(*(undefined4 *)(iVar4 + -0x7f44),0x40,0x24);
        if (puVar3 == (uint *)0x0) {
          if ((param_6 & 0x20) == 0) {
            memset(local_130,0,0xdc);
            FUN_00607dcc(param_3,local_130);
          }
          else {
            FUN_0060d3cc(param_1,iVar2);
            FUN_0061ae90(iVar2);
          }
          if ((param_6 & 1) != 0) {
            FUN_006084f4(param_3,0);
          }
          snd_Printf((char)*(undefined4 *)(iVar4 + -0x7f40));
          snd_SynthUnlock();
          return param_3;
        }
        FUN_00619a90(iVar2,puVar3);
      }
      else if ((param_6 & 2) != 0) {
        uVar1 = puVar3[7];
        puVar3[7] = puVar3[6];
        puVar3[6] = uVar1;
        puVar3[5] = (uint)-(float)puVar3[5];
        snd_SynthUnlock();
        return param_3;
      }
      *puVar3 = *puVar3 | 2;
      if ((param_6 & 0x20) == 0) {
        puVar3[5] = (uint)((float)(param_1 - (double)*(float *)(iVar2 + 0x120)) /
                          (float)(param_2 * (double)*(float *)(iVar4 + -0x7fec)));
        uVar1 = *(uint *)(iVar2 + 0x120);
      }
      else {
        puVar3[5] = (uint)((float)(param_1 - (double)*(float *)(iVar2 + 0x128)) /
                          (float)(param_2 * (double)*(float *)(iVar4 + -0x7fec)));
        uVar1 = *(uint *)(iVar2 + 0x128);
      }
      puVar3[8] = param_6;
      puVar3[6] = uVar1;
      puVar3[7] = (uint)(float)param_1;
    }
    snd_SynthUnlock();
  }
  return param_3;
}


// 0x0608924 (0x394 bytes)
// strings: 00669c28: '%s(%d) : Invalid parameter.\n' | 00669c48: 'common/api.cpp' | 00669d68: '%s(%d) : Insufficient effect resources.\n'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_00608924(double param_1,double param_2,undefined4 param_3,undefined8 param_4,undefined8 param_5,
            uint param_6)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  char asdf;
  int iVar4;
  uint *puVar5;
  int iVar6;
  GPiece<232> local_130;
  
  iVar6 = _DAT_0071afe8;
  if (((double)*(float *)(_DAT_0071afe8 + -0x7f70) < param_1) ||
     (param_1 < (double)*(float *)(_DAT_0071afe8 + -0x7f3c))) {
    asdf = (char)*(undefined4 *)(_DAT_0071afe8 + -0x7fa8);
    snd_Printf(asdf);
    snd_Printf(asdf);
    if (**(char **)(iVar6 + -0x7fa0) != '\0') {
      return 0;
    }
    trapWord(0x18,(ulonglong)**(byte **)(iVar6 + -0x7f9c),0);
  }
  snd_SynthLock();
  iVar4 = FUN_0061a790(param_3);
  if (iVar4 == 0) {
    snd_SynthUnlock();
    param_3 = 0;
  }
  else {
    if (param_2 <= (double)*(float *)(iVar6 + -0x7fe0)) {
      iVar6 = FUN_00619b68(iVar4,0x10);
      if (iVar6 != 0) {
        FUN_0061a34c(iVar4,0x10);
      }
      if ((param_6 & 0x20) == 0) {
        memset(local_130,0,0xdc);
        FUN_00607dcc(param_3,local_130);
      }
      else {
        FUN_0060cf34(param_1,iVar4);
        FUN_0061ad24(iVar4);
      }
      if ((param_6 & 1) != 0) {
        FUN_006084f4(param_3,0);
      }
    }
    else {
      puVar5 = (uint *)FUN_00619b68(iVar4,0x10);
      if (puVar5 == (uint *)0x0) {
        puVar5 = (uint *)FUN_0061a418(*(undefined4 *)(iVar6 + -0x7f34),0x40,0x24);
        if (puVar5 == (uint *)0x0) {
          if ((param_6 & 0x20) == 0) {
            memset(local_130,0,0xdc);
            FUN_00607dcc(param_3,local_130);
          }
          else {
            FUN_0060cf34(param_1,iVar4);
            FUN_0061ad24(iVar4);
          }
          if ((param_6 & 1) != 0) {
            FUN_006084f4(param_3,0);
          }
          snd_Printf((char)*(undefined4 *)(iVar6 + -0x7f40));
          snd_SynthUnlock();
          return param_3;
        }
        FUN_00619a90(iVar4,puVar5);
      }
      else if ((param_6 & 2) != 0) {
        uVar3 = puVar5[7];
        puVar5[7] = puVar5[6];
        puVar5[6] = uVar3;
        puVar5[5] = (uint)-(float)puVar5[5];
        snd_SynthUnlock();
        return param_3;
      }
      if ((param_6 & 0x20) == 0) {
        fVar1 = *(float *)(iVar4 + 0x154);
      }
      else {
        fVar1 = *(float *)(iVar4 + 0x160);
      }
      fVar2 = *(float *)(iVar6 + -0x7fec);
      puVar5[8] = param_6;
      puVar5[6] = (uint)fVar1;
      puVar5[7] = (uint)(float)param_1;
      *puVar5 = *puVar5 | 0x10;
      puVar5[5] = (uint)((float)(param_1 - (double)fVar1) / (float)(param_2 * (double)fVar2));
    }
    snd_SynthUnlock();
  }
  return param_3;
}


// 0x0608cb8 (0x3c0 bytes)
// strings: 00669c28: '%s(%d) : Invalid parameter.\n' | 00669c48: 'common/api.cpp' | 00669d68: '%s(%d) : Insufficient effect resources.\n'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_00608cb8(double param_1,undefined4 param_2,int param_3,undefined8 param_4,uint param_5)

{
  float fVar1;
  uint uVar2;
  char asdf;
  int iVar3;
  uint *puVar4;
  int iVar5;
  GPiece<248> local_140;
  
  iVar5 = _DAT_0071afe8;
  if (0x3c00 < param_3 + 0x1e00U) {
    asdf = (char)*(undefined4 *)(_DAT_0071afe8 + -0x7fa8);
    snd_Printf(asdf);
    snd_Printf(asdf);
    if (**(char **)(iVar5 + -0x7fa0) != '\0') {
      return 0;
    }
    trapWord(0x18,(ulonglong)**(byte **)(iVar5 + -0x7f9c),0);
  }
  snd_SynthLock();
  iVar3 = FUN_0061a790(param_2);
  if (iVar3 == 0) {
    snd_SynthUnlock();
    param_2 = 0;
  }
  else {
    if (param_1 <= (double)*(float *)(iVar5 + -0x7fe0)) {
      iVar5 = FUN_00619b68(iVar3,8);
      if (iVar5 != 0) {
        FUN_0061a34c(iVar3,8);
      }
      if ((param_5 & 0x20) == 0) {
        memset(local_140,0,0xdc);
        FUN_00607dcc(param_2,local_140);
      }
      else {
        FUN_0060d154(iVar3,param_3);
        FUN_0061ad24(iVar3);
      }
      if ((param_5 & 1) != 0) {
        FUN_006084f4(param_2,0);
      }
    }
    else {
      puVar4 = (uint *)FUN_00619b68(iVar3,8);
      if (puVar4 == (uint *)0x0) {
        puVar4 = (uint *)FUN_0061a418(*(undefined4 *)(iVar5 + -0x7f30),0x40,0x24);
        if (puVar4 == (uint *)0x0) {
          if ((param_5 & 0x20) == 0) {
            memset(local_140,0,0xdc);
            FUN_00607dcc(param_2,local_140);
          }
          else {
            FUN_0060d154(iVar3,param_3);
            FUN_0061ad24(iVar3);
          }
          if ((param_5 & 1) != 0) {
            FUN_006084f4(param_2,0);
          }
          snd_Printf((char)*(undefined4 *)(iVar5 + -0x7f40));
          snd_SynthUnlock();
          return param_2;
        }
        FUN_00619a90(iVar3,puVar4);
      }
      else if ((param_5 & 2) != 0) {
        uVar2 = puVar4[7];
        puVar4[7] = puVar4[6];
        puVar4[6] = uVar2;
        puVar4[5] = (uint)-(float)puVar4[5];
        snd_SynthUnlock();
        return param_2;
      }
      if ((param_5 & 0x20) == 0) {
        iVar3 = *(int *)(iVar3 + 0x144);
      }
      else {
        iVar3 = *(int *)(iVar3 + 0x150);
      }
      fVar1 = *(float *)(iVar5 + -0x7fec);
      puVar4[8] = param_5;
      *puVar4 = *puVar4 | 8;
      puVar4[6] = (uint)(float)(longlong)iVar3;
      puVar4[5] = (uint)((float)(longlong)(param_3 - iVar3) / (float)(param_1 * (double)fVar1));
      puVar4[7] = (uint)(float)(longlong)param_3;
    }
    snd_SynthUnlock();
  }
  return param_2;
}


// 0x0609078 (0x428 bytes)
// strings: 00669c28: '%s(%d) : Invalid parameter.\n' | 00669c48: 'common/api.cpp' | 00669d98: '%s(%d) : Unable to pan from SND_PAN_TO_SPEAKER.\n' | 00669d68: '%s(%d) : Insufficient effect resources.\n'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_00609078(double param_1,undefined4 param_2,uint param_3,undefined8 param_4,uint param_5)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  char asdf;
  uint uVar7;
  GPiece<248> local_140;
  
  iVar2 = _DAT_0071afe8;
  if ((0x167 < param_3) || ((param_5 & 0xc) == 0xc)) {
    asdf = (char)*(undefined4 *)(_DAT_0071afe8 + -0x7fa8);
    snd_Printf(asdf);
    snd_Printf(asdf);
    if (**(char **)(iVar2 + -0x7fa0) != '\0') {
      return 0;
    }
    trapWord(0x18,(ulonglong)**(byte **)(iVar2 + -0x7f9c),0);
  }
  snd_SynthLock();
  iVar5 = FUN_0061a790(param_2);
  if (iVar5 == 0) {
    snd_SynthUnlock();
    return 0;
  }
  if (*(int *)(iVar5 + 300) < 0) {
    snd_Printf((char)*(undefined4 *)(iVar2 + -0x7f2c));
    snd_SynthUnlock();
    return param_2;
  }
  if (param_1 <= (double)*(float *)(iVar2 + -0x7fe0)) {
    if ((param_5 & 0x20) == 0) {
      memset(local_140,0,0xdc);
      FUN_00607dcc(param_2,local_140);
    }
    else {
      FUN_0060cc50(iVar5,param_3);
      FUN_0061addc(iVar5);
    }
    if ((param_5 & 1) != 0) {
      FUN_006084f4(param_2,0);
    }
  }
  else {
    puVar6 = (uint *)FUN_00619b68(iVar5,4);
    if (puVar6 == (uint *)0x0) {
      puVar6 = (uint *)FUN_0061a418(*(undefined4 *)(iVar2 + -0x7f28),0x40,0x28);
      if (puVar6 == (uint *)0x0) {
        if ((param_5 & 0x20) == 0) {
          memset(local_140,0,0xdc);
          FUN_00607dcc(param_2,local_140);
        }
        else {
          FUN_0060cc50(iVar5,param_3);
          FUN_0061addc(iVar5);
        }
        if ((param_5 & 1) != 0) {
          FUN_006084f4(param_2,0);
        }
        snd_Printf((char)*(undefined4 *)(iVar2 + -0x7f40));
        snd_SynthUnlock();
        return param_2;
      }
      FUN_00619a90(iVar5,puVar6);
    }
    else if ((param_5 & 2) != 0) {
      uVar1 = puVar6[9];
      puVar6[7] = puVar6[6];
      puVar6[6] = puVar6[8];
      puVar6[5] = (uint)-(float)puVar6[5];
      if ((uVar1 & 4) == 0) {
        puVar6[9] = uVar1 | 4;
      }
      else {
        uVar3 = ((ulonglong)uVar1 & 3) << 0x1d | (ulonglong)(uVar1 >> 3);
        puVar6[9] = (uint)(uVar3 << 3) | (uint)uVar3 >> 0x1d;
      }
      goto LAB_00609174;
    }
    if ((param_5 & 0x20) == 0) {
      uVar1 = *(uint *)(iVar5 + 300);
    }
    else {
      uVar1 = *(uint *)(iVar5 + 0x138);
    }
    if ((param_5 & 8) != 0) {
      uVar4 = uVar1 - param_3;
      uVar7 = 0x168 - uVar4;
      if ((uVar1 <= param_3) && (uVar7 = param_3 - uVar1, uVar1 < param_3)) {
        uVar4 = 0x168 - uVar7;
      }
      if (uVar4 < uVar7) {
        param_5 = param_5 | 4;
      }
    }
    puVar6[9] = param_5;
    *puVar6 = *puVar6 | 4;
    puVar6[8] = (uint)(float)uVar1;
    puVar6[6] = (uint)(float)uVar1;
    puVar6[7] = (uint)(float)param_3;
    if ((param_5 & 4) == 0) {
      iVar5 = 0x168 - (uVar1 - param_3);
      if (uVar1 <= param_3) {
        iVar5 = param_3 - uVar1;
      }
    }
    else {
      iVar5 = uVar1 - param_3;
      if (uVar1 < param_3) {
        iVar5 = 0x168 - (param_3 - uVar1);
      }
      iVar5 = -iVar5;
    }
    puVar6[5] = (uint)((float)(longlong)iVar5 /
                      (float)(param_1 * (double)*(float *)(iVar2 + -0x7fec)));
  }
LAB_00609174:
  snd_SynthUnlock();
  return param_2;
}


// 0x06094a0 (0x128 bytes)
// strings: 00669c48: 'common/api.cpp' | 00669d40: '%s(%d) : Unsupported bank format.\n'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006094a0(int *param_1,short param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = _DAT_0071afe8;
  snd_SynthLock();
  if (*param_1 != 0x6b6c4253) {
    snd_Printf((char)*(undefined4 *)(iVar2 + -0x7f4c));
    snd_SynthUnlock();
    return;
  }
  if (param_2 < *(short *)((int)param_1 + 0x16)) {
    iVar3 = FUN_0060dcd8(param_1);
    for (puVar1 = (undefined4 *)**(undefined4 **)(iVar2 + -0x7f48); puVar1 != (undefined4 *)0x0;
        puVar1 = (undefined4 *)puVar1[0x89]) {
      if ((puVar1[0x8a] == 0) && (puVar1[0x15] == iVar3 + param_2 * 0xc)) {
        FUN_006084f4(*puVar1,param_3);
      }
    }
  }
  snd_SynthUnlock();
  return;
}


// 0x06095c8 (0x24c bytes)
// strings: 00669d18: '%s(%d) : update to set size member.\n' | 00669c48: 'common/api.cpp' | 00669d40: '%s(%d) : Unsupported bank format.\n' | 00669c28: '%s(%d) : Invalid parameter.\n'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_006095c8(int *param_1,int param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  GPiece<24> local_60;
  
  iVar2 = _DAT_0071afe8;
  if ((param_2 == 0) || (param_3 == (int *)0x0)) {
    snd_Printf((char)*(undefined4 *)(_DAT_0071afe8 + -0x7fa8));
    if (**(char **)(iVar2 + -0x7fa0) != '\0') {
      return 0;
    }
    trapWord(0x18,(ulonglong)**(byte **)(iVar2 + -0x7f9c),0);
  }
  if (*param_3 != 0xdc) {
    snd_Printf((char)*(undefined4 *)(iVar2 + -0x7f50));
  }
  snd_SynthLock();
  if ((param_1 != (int *)0x0) && (*param_1 != 0x6b6c4253)) {
    snd_Printf((char)*(undefined4 *)(iVar2 + -0x7f4c));
    snd_SynthUnlock();
    return 0;
  }
  uVar1 = FUN_0061838c(param_1,param_2,local_60);
  if ((int)uVar1 < 0) {
    snd_SynthUnlock();
    return 0;
  }
  iVar2 = FUN_0060dcd8(param_1);
  puVar4 = (undefined1 *)(iVar2 + uVar1 * 0x10 + (uVar1 & 0x3fffffff) * -4);
  uVar5 = FUN_0060fabc(*puVar4,0);
  FUN_0060fb74(*(undefined2 *)(puVar4 + 2));
  uVar3 = FUN_0060f728(uVar5,param_1,uVar1,puVar4[1]);
  snd_SynthUnlock();
  return uVar3;
}


// 0x0609814 (0x248 bytes)
// strings: 00669d18: '%s(%d) : update to set size member.\n' | 00669c48: 'common/api.cpp' | 00669d40: '%s(%d) : Unsupported bank format.\n' | 00669c28: '%s(%d) : Invalid parameter.\n'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00609814(int *param_1,short param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  
  iVar1 = _DAT_0071afe8;
  if (((param_1 == (int *)0x0) || (param_2 < 0)) || (param_3 == (int *)0x0)) {
    snd_Printf((char)*(undefined4 *)(_DAT_0071afe8 + -0x7fa8));
    if (**(char **)(iVar1 + -0x7fa0) != '\0') {
      return 0;
    }
    trapWord(0x18,(ulonglong)**(byte **)(iVar1 + -0x7f9c),0);
  }
  if (*param_3 != 0xdc) {
    snd_Printf((char)*(undefined4 *)(iVar1 + -0x7f50));
  }
  snd_SynthLock();
  if (*param_1 != 0x6b6c4253) {
    snd_Printf((char)*(undefined4 *)(iVar1 + -0x7f4c));
    snd_SynthUnlock();
    return 0;
  }
  if (param_2 < *(short *)((int)param_1 + 0x16)) {
    iVar1 = FUN_0060dcd8(param_1);
    puVar3 = (undefined1 *)(iVar1 + param_2 * 0x10 + ((int)param_2 & 0x3fffffffU) * -4);
    uVar4 = FUN_0060fabc(*puVar3,0);
    FUN_0060fb74(*(undefined2 *)(puVar3 + 2));
    uVar2 = FUN_0060f728(uVar4,param_1,param_2,puVar3[1]);
    snd_SynthUnlock();
    return uVar2;
  }
  snd_SynthUnlock();
  return 0;
}


// 0x0609a5c (0x74 bytes)
undefined4 FUN_00609a5c(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  snd_SynthLock();
  iVar1 = FUN_0061a790(param_1);
  uVar2 = 0;
  if (iVar1 != 0) {
    FUN_0061b0c8(iVar1,1,2);
    uVar2 = param_1;
  }
  snd_SynthUnlock();
  return uVar2;
}


// 0x0609ad0 (0x74 bytes)
undefined4 FUN_00609ad0(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  snd_SynthLock();
  iVar1 = FUN_0061a790(param_1);
  uVar2 = 0;
  if (iVar1 != 0) {
    FUN_0061af44(iVar1,1,2);
    uVar2 = param_1;
  }
  snd_SynthUnlock();
  return uVar2;
}


// 0x0609b44 (0x1b0 bytes)
// strings: 00609c80: '}<KxB' (raw) | 00669c28: '%s(%d) : Invalid parameter.\n' | 00669c48: 'common/api.cpp'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00609b44(int *param_1,short param_2,int param_3)

{
  short sVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  
  iVar2 = _DAT_0071afe8;
  if ((param_1 == (int *)0x0) || (param_3 == 0)) {
    snd_Printf((char)*(undefined4 *)(_DAT_0071afe8 + -0x7fa8));
    if (**(char **)(iVar2 + -0x7fa0) != '\0') {
      return 0;
    }
    trapWord(0x18,(ulonglong)**(byte **)(iVar2 + -0x7f9c),0);
  }
  if (((*param_1 == 0x6b6c4253) && ((param_1[2] & 0x100U) != 0)) &&
     (param_2 <= *(short *)((int)param_1 + 0x16))) {
    piVar3 = (int *)FUN_0060d8b0(param_1);
    iVar4 = FUN_0060d824(param_1);
    iVar5 = FUN_0060d824(param_1);
    if (0 < *(short *)((int)param_1 + 0x16)) {
      sVar1 = *(short *)(piVar3 + 3);
      uVar6 = (longlong)*(short *)((int)param_1 + 0x16) & 0xffffffff;
      while( true ) {
        if (sVar1 == param_2) {
          FUN_005cd198(param_3,0x7f,*(undefined4 *)(iVar2 + -0x7f24),
                       iVar4 + *(int *)(iVar5 + 0xc) + *piVar3);
          *(undefined1 *)(param_3 + 0x7f) = 0;
          return 1;
        }
        uVar6 = uVar6 - 1;
        if (uVar6 == 0) break;
        sVar1 = *(short *)(piVar3 + 7);
        piVar3 = piVar3 + 4;
      }
    }
  }
  return 0;
}


// 0x0609cf4 (0xaec bytes)
// strings: 0065fdf8: 'fioscachUnknown' | 0066a0a0: '\n---------- Handler Voices -----------\n' | 0066a0d8: '\nVoice index %d...\n' | 0066a0f0: '\tpriority               = %d\n' | 0066a110: '\tscaledPriority         = %d\n' | 0066a130: '\tvolGroup               = %d\n' | 0066a170: '\tpriorityReductionScale = %f\n' | 0066a190: '\tstatus                 = %d\n' | 0066a1b0: '\tstartTick              = %d\n' | 0066a1d0: '\tvoiceFlags             = %d\n' | 0066a2d8: '\tpanAzimuth             = %d\n' | 0066a318: '\tbakedPanAzimuth        = %d\n' | 0066a338: '\tpanFocus               = %d\n' | 0066a358: '\tbakedPanFocus          = %d\n' | 0066a378: '\tsampleRate             = %f\n' | 0066a398: '\tbakedSampleRate        = %f\n' | 0066a3b8: '\tBank_ID                = %d\n' | 0066a3d8: '\tsynVoiceCtx            = 0x%X\n' | 0066a3f8: '\tuserCtx                = %d\n' | 0066a418: '\n\tVoice context 0x%X...\n' | 0066a150: '\tsynthVoiceType         = %d\n' | 0066a1f0: '\ttransposeUpRange       = %d\n' | 0066a210: '\ttransposeDownRange     = %d\n' | 0066a230: '\towner                  = 0x%X\n' | 0066a278: '\tvolume                 = %f\n' | 0066a298: '\tbakedVolume            = %f\n' | 0066a2b8: '\tpanAzimuth             = 0x%X\n' | 0066a2f8: '\tbakedPanAzimuth        = 0x%X\n' | 00669e80: '\n--- Streaming Grain 0x%X of SCREAM handle 0x%X ---\n' | 00669ee0: 'Flags = '

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00609cf4(undefined4 param_1,ulonglong param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 *puVar24;
  int iVar25;
  int iVar26;
  byte *pbVar28;
  int iVar29;
  longlong lVar27;
  undefined4 uVar30;
  uint uVar31;
  GPiece<12> local_1a0;
  GPiece<36> auStack_194;
  GPiece<8> local_170;
  GPiece<216> auStack_168;
  
  iVar26 = _DAT_0071afe8;
  snd_SynthLock();
  pbVar28 = (byte *)FUN_0061a790(param_1);
  uVar30 = 0;
  if (pbVar28 == (byte *)0x0) goto LAB_00609e6c;
  bVar1 = *pbVar28;
  uVar31 = (uint)((ulonglong)bVar1 & 0x1f);
  if (*(int *)(pbVar28 + 0x228) == 0) {
    if (uVar31 == 5) {
      snd_Printf((char)*(undefined4 *)(iVar26 + -0x7f20));
      goto LAB_0060a6d0;
    }
    snd_Printf((char)*(undefined4 *)(iVar26 + -0x7f1c));
LAB_00609da4:
    memset(auStack_168,0,0x78);
    if (uVar31 < 8) goto LAB_0060a348;
LAB_00609dd8:
    snd_Printf((char)*(undefined4 *)(iVar26 + -0x7f00));
    if ((param_2 & 1) == 0) goto LAB_00609df0;
LAB_0060a3a4:
    snd_Printf((char)*(undefined4 *)(iVar26 + -0x7efc));
    uVar31 = *(uint *)(pbVar28 + 4);
    if ((uVar31 & 2) != 0) {
      snd_Printf((char)*(undefined4 *)(iVar26 + -0x7ef8));
      uVar31 = *(uint *)(pbVar28 + 4);
    }
    if ((uVar31 & 4) != 0) {
      snd_Printf((char)*(undefined4 *)(iVar26 + -0x7ef4));
      uVar31 = *(uint *)(pbVar28 + 4);
    }
    if ((uVar31 & 8) != 0) {
      snd_Printf((char)*(undefined4 *)(iVar26 + -0x7ef0));
      uVar31 = *(uint *)(pbVar28 + 4);
    }
    if ((uVar31 & 0x80) != 0) {
      snd_Printf((char)*(undefined4 *)(iVar26 + -0x7eec));
      uVar31 = *(uint *)(pbVar28 + 4);
    }
    if ((uVar31 & 0x10000) != 0) {
      snd_Printf((char)*(undefined4 *)(iVar26 + -0x7ee8));
      uVar31 = *(uint *)(pbVar28 + 4);
    }
    if ((uVar31 & 0x20000) != 0) {
      snd_Printf((char)*(undefined4 *)(iVar26 + -0x7ee4));
    }
    snd_Printf((char)*(undefined4 *)(iVar26 + -0x7f00));
    FUN_0060842c(param_1,auStack_194);
  }
  else {
    if (uVar31 == 5) {
      snd_Printf((char)*(undefined4 *)(iVar26 + -0x7f18));
LAB_0060a6d0:
      memset(auStack_168,0,0x78);
      if ((*(int *)(pbVar28 + 0x240) != 0) &&
         ((*(uint *)(*(int *)(pbVar28 + 0x240) + 8) & 0x100) != 0)) {
        uVar31 = *(uint *)(pbVar28 + 0x244);
        lVar27 = FUN_0060dcd8();
        uVar30 = FUN_0060d824(*(undefined4 *)(pbVar28 + 0x240));
        FUN_005cd198(local_1a0,8,*(undefined4 *)(iVar26 + -0x7f24),uVar30);
        FUN_00609b44(*(undefined4 *)(pbVar28 + 0x240),
                     (short)(((ulonglong)uVar31 - lVar27 & 0xffffffff) / 0xc),local_170);
      }
      snd_Printf((char)*(undefined4 *)(iVar26 + -0x7f0c));
      snd_Printf((char)*(undefined4 *)(iVar26 + -0x7f08));
      goto LAB_00609dd8;
    }
    if (uVar31 != 4) goto LAB_00609da4;
    snd_Printf((char)*(undefined4 *)(iVar26 + -0x7f14));
    memset(auStack_168,0,0x78);
LAB_0060a348:
    iVar29 = *(int *)(*(int *)(iVar26 + -0x7f04) + (int)(((ulonglong)bVar1 & 0x1f) << 2));
    if ((iVar29 == 0) || (puVar24 = *(undefined4 **)(iVar29 + 0x28), puVar24 == (undefined4 *)0x0))
    goto LAB_00609dd8;
    (*(code *)*puVar24)(pbVar28);
    snd_Printf((char)*(undefined4 *)(iVar26 + -0x7f00));
    if ((param_2 & 1) != 0) goto LAB_0060a3a4;
LAB_00609df0:
    FUN_0060842c(param_1,auStack_194);
  }
  if ((param_2 & 2) != 0) {
    snd_Printf((char)*(undefined4 *)(iVar26 + -0x7ee0));
  }
  if ((param_2 & 4) != 0) {
    snd_Printf((char)*(undefined4 *)(iVar26 + -0x7edc));
  }
  if ((param_2 & 8) != 0) {
    snd_Printf((char)*(undefined4 *)(iVar26 + -0x7ed8));
  }
  if ((param_2 & 0x10) != 0) {
    snd_Printf((char)*(undefined4 *)(iVar26 + -0x7ed4));
  }
  if ((param_2 & 0x20) != 0) {
    snd_Printf((char)*(undefined4 *)(iVar26 + -0x7ed0));
  }
  if ((param_2 & 0x40) != 0) {
    snd_Printf((char)*(undefined4 *)(iVar26 + -0x7ecc));
  }
  if ((param_2 & 0x80) != 0) {
    snd_Printf((char)*(undefined4 *)(iVar26 + -0x7ec8));
  }
  if ((param_2 & 0x100) != 0) {
    iVar29 = 0;
    snd_Printf((char)*(undefined4 *)(iVar26 + -0x7ec4));
    uVar30 = *(undefined4 *)(iVar26 + -0x7ec0);
    do {
      iVar29 = iVar29 + 1;
      snd_Printf((char)uVar30);
    } while (iVar29 != 4);
    snd_Printf((char)*(undefined4 *)(iVar26 + -0x7f00));
  }
  uVar30 = param_1;
  if ((param_2 & 0x200) != 0) {
    iVar29 = FUN_0061a5b8(pbVar28,0);
    if (iVar29 < 0) {
      snd_Printf((char)*(undefined4 *)(iVar26 + -0x7eb8));
    }
    else {
      snd_Printf((char)*(undefined4 *)(iVar26 + -0x7ebc));
      uVar2 = *(undefined4 *)(iVar26 + -0x7eb4);
      piVar3 = *(int **)(iVar26 + -0x7eac);
      uVar4 = *(undefined4 *)(iVar26 + -0x7eb0);
      uVar5 = *(undefined4 *)(iVar26 + -0x7ea0);
      uVar6 = *(undefined4 *)(iVar26 + -0x7ea8);
      uVar7 = *(undefined4 *)(iVar26 + -0x7e8c);
      uVar8 = *(undefined4 *)(iVar26 + -0x7ea4);
      uVar9 = *(undefined4 *)(iVar26 + -0x7e88);
      uVar10 = *(undefined4 *)(iVar26 + -0x7e9c);
      uVar11 = *(undefined4 *)(iVar26 + -0x7e7c);
      uVar12 = *(undefined4 *)(iVar26 + -0x7e98);
      uVar13 = *(undefined4 *)(iVar26 + -0x7e78);
      uVar14 = *(undefined4 *)(iVar26 + -0x7e94);
      uVar15 = *(undefined4 *)(iVar26 + -0x7e64);
      uVar16 = *(undefined4 *)(iVar26 + -0x7e60);
      uVar17 = *(undefined4 *)(iVar26 + -0x7e90);
      uVar18 = *(undefined4 *)(iVar26 + -0x7e5c);
      uVar19 = *(undefined4 *)(iVar26 + -0x7e58);
      uVar20 = *(undefined4 *)(iVar26 + -0x7e54);
      uVar21 = *(undefined4 *)(iVar26 + -0x7e50);
      uVar22 = *(undefined4 *)(iVar26 + -0x7e4c);
      uVar23 = *(undefined4 *)(iVar26 + -0x7e48);
      do {
        iVar25 = iVar29 * 0x68;
        snd_Printf((char)uVar2);
        snd_Printf((char)uVar4);
        snd_Printf((char)uVar6);
        snd_Printf((char)uVar8);
        snd_Printf((char)uVar5);
        snd_Printf((char)uVar10);
        snd_Printf((char)uVar12);
        snd_Printf((char)uVar14);
        snd_Printf((char)uVar17);
        snd_Printf((char)uVar7);
        snd_Printf((char)uVar9);
        if (*(int *)(iVar25 + *piVar3 + 0x28) == 0) {
          snd_Printf((char)*(undefined4 *)(iVar26 + -0x7e80));
        }
        else {
          snd_Printf((char)*(undefined4 *)(iVar26 + -0x7e84));
        }
        snd_Printf((char)uVar11);
        snd_Printf((char)uVar13);
        if (*(int *)(iVar25 + *piVar3 + 0x38) < 0) {
          snd_Printf((char)*(undefined4 *)(iVar26 + -0x7e74));
          if (-1 < *(int *)(iVar25 + *piVar3 + 0x3c)) goto LAB_00609fa0;
LAB_0060a2f0:
          snd_Printf((char)*(undefined4 *)(iVar26 + -0x7e6c));
        }
        else {
          snd_Printf((char)*(undefined4 *)(iVar26 + -0x7e70));
          if (*(int *)(iVar25 + *piVar3 + 0x3c) < 0) goto LAB_0060a2f0;
LAB_00609fa0:
          snd_Printf((char)*(undefined4 *)(iVar26 + -0x7e68));
        }
        snd_Printf((char)uVar15);
        snd_Printf((char)uVar16);
        snd_Printf((char)uVar18);
        snd_Printf((char)uVar19);
        snd_Printf((char)uVar20);
        snd_Printf((char)uVar21);
        snd_Printf((char)uVar22);
        snd_Printf((char)uVar23);
        FUN_0062be38(*(undefined4 *)(iVar25 + *piVar3 + 0x60));
        snd_Printf((char)*(undefined4 *)(iVar26 + -0x7f00));
        iVar29 = FUN_0061a5b8(pbVar28,iVar29 + 1);
      } while (-1 < iVar29);
    }
  }
LAB_00609e6c:
  snd_SynthUnlock();
  return uVar30;
}


// 0x060a7e0 (0xb0 bytes)
// strings: 0066a438: '\n-----***-----***------ ACTIVE SCREAM SOUNDS ------***-----***-----\n' | 0066a480: '\n------ tick %d had %d sounds playing --------------------\n'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0060a7e0(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = _DAT_0071afe8;
  snd_SynthLock();
  puVar1 = (undefined4 *)**(undefined4 **)(iVar2 + -0x7f48);
  snd_Printf((char)*(undefined4 *)(iVar2 + -0x7e44));
  for (; puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)puVar1[0x89]) {
    FUN_00609cf4(*puVar1,param_1);
  }
  FUN_00604918();
  snd_Printf((char)*(undefined4 *)(iVar2 + -0x7e40));
  snd_SynthUnlock();
  return;
}


// 0x060a890 (0x124 bytes)
// strings: 00669c28: '%s(%d) : Invalid parameter.\n' | 00669c48: 'common/api.cpp' | 0066a4c0: '%s(%d) : Invalid bank handle %x.\n'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0060a890(int *param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = _DAT_0071afe8;
  if ((int)param_1 - 1U < 0xfffffffe) {
    if ((*param_1 == 0x6b6c4253) && ((param_1[2] & 0x20U) != 0)) {
      uVar2 = FUN_00617d50(param_1,param_2,0xd8d);
      return uVar2;
    }
  }
  else {
    snd_Printf((char)*(undefined4 *)(_DAT_0071afe8 + -0x7fa8));
    if (**(char **)(iVar1 + -0x7fa0) == '\0') {
      trapWord(0x18,(ulonglong)**(byte **)(iVar1 + -0x7f9c),0);
      snd_Printf((char)*(undefined4 *)(iVar1 + -0x7e3c));
      return 0;
    }
  }
  return 0;
}


// 0x060a9b4 (0x214 bytes)
// strings: 00669c28: '%s(%d) : Invalid parameter.\n' | 00669c48: 'common/api.cpp' | 0066a580: '%s(%d) : Attempt to unload invalid bank handle %x.\n' | 0066a4e8: 'snd_UnloadBank(): Banks cannot be loaded or unloaded when a bank relocation is in progress!\n' | 0066a548: '%s(%d) : Attempt to unload unloaded bank handle %x.\n'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 snd_UnloadBank(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = _DAT_0071afe8;
  if (0xfffffffd < (int)param_1 - 1U) {
    snd_Printf((char)*(undefined4 *)(_DAT_0071afe8 + -0x7fa8));
    if (**(char **)(iVar2 + -0x7fa0) == '\0') {
      trapWord(0x18,(ulonglong)**(byte **)(iVar2 + -0x7f9c),0);
      snd_Printf((char)*(undefined4 *)(iVar2 + -0x7e30));
    }
    return 0;
  }
  iVar1 = FUN_00623288();
  if (iVar1 != 0) {
    snd_Printf((char)*(undefined4 *)(iVar2 + -0x7e38));
    return 0;
  }
  if (*param_1 == 0x6b6c4253) {
    FUN_00618938(param_1);
    if (param_2 != 0) {
      while (iVar2 = FUN_00617d50(param_1), iVar2 == 0) {
        syscall();
      }
    }
    return 1;
  }
  iVar1 = FUN_00617e14(param_1);
  if (iVar1 == 0) {
    snd_Printf((char)*(undefined4 *)(iVar2 + -0x7e34));
    return 0;
  }
  snd_SynthLock();
  FUN_00618aa8(param_1);
  snd_SynthUnlock();
  return 1;
}


// 0x060abc8 (0x17c bytes)
// strings: 00669c28: '%s(%d) : Invalid parameter.\n' | 00669c48: 'common/api.cpp'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0060abc8(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = _DAT_0071afe8;
  if (param_1 == (int *)0x0) {
    snd_Printf((char)*(undefined4 *)(_DAT_0071afe8 + -0x7fa8));
    if (**(char **)(iVar2 + -0x7fa0) != '\0') {
      return;
    }
    trapWord(0x18,(ulonglong)**(byte **)(iVar2 + -0x7f9c),0);
  }
  snd_SynthLock();
  if (*param_1 == 0x6b6c4253) {
    if (0 < *(short *)((int)param_1 + 0x16)) {
      iVar2 = 0;
      iVar3 = 0;
      do {
        iVar2 = iVar2 + 1;
        iVar1 = FUN_0060dcd8(param_1);
        iVar1 = iVar1 + iVar3;
        iVar3 = iVar3 + 0xc;
        FUN_0061bfb0(iVar1,param_2,0);
      } while (iVar2 < *(short *)((int)param_1 + 0x16));
    }
  }
  else {
    iVar2 = 0;
    iVar3 = 0;
    if (0 < *(short *)((int)param_1 + 0x16)) {
      do {
        iVar2 = iVar2 + 1;
        iVar1 = FUN_0060dcd8(param_1);
        iVar1 = iVar1 + iVar3;
        iVar3 = iVar3 + 0xc;
        FUN_0061bfb0(iVar1,param_2,0);
      } while (iVar2 < *(short *)((int)param_1 + 0x16));
    }
  }
  snd_SynthUnlock();
  return;
}


// 0x060ad44 (0x28 bytes)
undefined4 FUN_0060ad44(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00617870();
  return uVar1;
}


// 0x060ad6c (0x9c bytes)
// strings: 00669c28: '%s(%d) : Invalid parameter.\n' | 00669c48: 'common/api.cpp'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0060ad6c(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = _DAT_0071afe8;
  if ((param_1 == 0) || (param_2 == 0)) {
    snd_Printf((char)*(undefined4 *)(_DAT_0071afe8 + -0x7fa8));
    if (**(char **)(iVar1 + -0x7fa0) != '\0') {
      return 0;
    }
    trapWord(0x18,(ulonglong)**(byte **)(iVar1 + -0x7f9c),0);
  }
  uVar2 = FUN_006183e4(param_1,param_2);
  return uVar2;
}


// 0x060ae08 (0x84 bytes)
// strings: 00669c28: '%s(%d) : Invalid parameter.\n' | 00669c48: 'common/api.cpp'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0060ae08(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = _DAT_0071afe8;
  if (param_1 == 0) {
    snd_Printf((char)*(undefined4 *)(_DAT_0071afe8 + -0x7fa8));
    if (**(char **)(iVar1 + -0x7fa0) != '\0') {
      return 0;
    }
    trapWord(0x18,(ulonglong)**(byte **)(iVar1 + -0x7f9c),0);
  }
  uVar2 = FUN_00618548(param_1);
  return uVar2;
}


// 0x060ae8c (0xe8 bytes)
// strings: 0066a620: 'snd_BankLoadFromMemEx(): Bank address (0x%p) is not 16-byte aligned!\n' | 0066a5b8: 'snd_BankLoadFromMemEx(): Banks cannot be loaded or unloaded when a bank relocation is in progress!\n' | 00669c28: '%s(%d) : Invalid parameter.\n' | 00669c48: 'common/api.cpp'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 snd_BankLoadFromMemEx(uint param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar2 = _DAT_0071afe8;
  if (param_1 == 0) {
    snd_Printf((char)*(undefined4 *)(_DAT_0071afe8 + -0x7fa8));
    if (**(char **)(iVar2 + -0x7fa0) != '\0') {
      return 0;
    }
    trapWord(0x18,(ulonglong)**(byte **)(iVar2 + -0x7f9c),0);
  }
  iVar3 = FUN_00623288();
  if (iVar3 == 0) {
    puVar1 = *(undefined4 **)(iVar2 + -0x7fd0);
    *puVar1 = 0;
    if ((param_1 & 1) == 0) {
      uVar4 = FUN_00617fb0(param_1);
    }
    else {
      snd_Printf((char)*(undefined4 *)(iVar2 + -0x7e28));
      uVar4 = 0;
      *puVar1 = 0x103;
    }
  }
  else {
    snd_Printf((char)*(undefined4 *)(iVar2 + -0x7e2c));
    uVar4 = 0;
  }
  return uVar4;
}


// 0x060af74 (0x128 bytes)
// strings: 0066a668: 'snd_BankLoadEx(): Banks cannot be loaded or unloaded when a bank relocation is in progress!\n' | 00669c48: 'common/api.cpp' | 00669c28: '%s(%d) : Invalid parameter.\n'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 snd_BankLoadEx(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = _DAT_0071afe8;
  if (param_1 == 0) {
    snd_Printf((char)*(undefined4 *)(_DAT_0071afe8 + -0x7fa8));
    if (**(char **)(iVar1 + -0x7fa0) != '\0') {
      return 0;
    }
    trapWord(0x18,(ulonglong)**(byte **)(iVar1 + -0x7f9c),0);
  }
  iVar2 = FUN_00623288();
  uVar3 = 0;
  if (iVar2 == 0) {
    iVar2 = FUN_00619000(param_1,param_2);
    if (iVar2 == 0) {
      **(undefined4 **)(iVar1 + -0x7fd0) = 0x100;
      return 0;
    }
    **(undefined4 **)(iVar1 + -0x7fd0) = 0;
    uVar3 = FUN_00618e78();
    FUN_00618fac();
  }
  else {
    snd_Printf((char)*(undefined4 *)(iVar1 + -0x7e24));
  }
  return uVar3;
}


// 0x060b09c (0x40 bytes)
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0060b09c(void)

{
  if (**(char **)(_DAT_0071afe8 + -0x7fcc) == '\0') {
    FUN_00615ef4();
  }
  return;
}


// 0x060b0dc (0xb0 bytes)
// strings: 00669c28: '%s(%d) : Invalid parameter.\n' | 00669c48: 'common/api.cpp'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0060b0dc(int param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = _DAT_0071afe8;
  if ((param_1 == 0) || (param_2 == (uint *)0x0)) {
    snd_Printf((char)*(undefined4 *)(_DAT_0071afe8 + -0x7fa8));
    if (**(char **)(iVar2 + -0x7fa0) != '\0') {
      return 0;
    }
    trapWord(0x18,(ulonglong)**(byte **)(iVar2 + -0x7f9c),0);
  }
  uVar3 = FUN_00616608(param_1);
  *param_2 = uVar3;
  uVar1 = (int)~uVar3 >> 0x1f;
  return uVar1 - (uVar1 ^ ~uVar3) >> 0x1f;
}


// 0x060b18c (0x28 bytes)
undefined4 FUN_0060b18c(void)

{
  undefined4 uVar1;
  
  uVar1 = snd_gmxGetActiveSnapshotCount();
  return uVar1;
}


// 0x060b1b4 (0x84 bytes)
// strings: 00669c28: '%s(%d) : Invalid parameter.\n' | 00669c48: 'common/api.cpp'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0060b1b4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = _DAT_0071afe8;
  if (param_1 == 0) {
    snd_Printf((char)*(undefined4 *)(_DAT_0071afe8 + -0x7fa8));
    if (**(char **)(iVar1 + -0x7fa0) != '\0') {
      return 0;
    }
    trapWord(0x18,(ulonglong)**(byte **)(iVar1 + -0x7f9c),0);
  }
  uVar2 = FUN_006166f4(param_1);
  return uVar2;
}


// 0x060b238 (0xb8 bytes)
// strings: 00669c28: '%s(%d) : Invalid parameter.\n' | 00669c48: 'common/api.cpp'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0060b238(double param_1)

{
  int iVar1;
  byte in_cr0;
  byte in_cr1;
  byte in_cr2;
  byte in_cr3;
  byte unaff_cr4;
  byte in_cr5;
  byte in_cr6;
  byte in_cr7;
  double dVar2;
  double dVar3;
  double dVar4;
  uint uStack00000008;
  
  iVar1 = _DAT_0071afe8;
  uStack00000008 =
       (uint)(in_cr0 & 0xf) << 0x1c | (uint)(in_cr1 & 0xf) << 0x18 | (uint)(in_cr2 & 0xf) << 0x14 |
       (uint)(in_cr3 & 0xf) << 0x10 | (uint)(unaff_cr4 & 0xf) << 0xc | (uint)(in_cr5 & 0xf) << 8 |
       (uint)(in_cr6 & 0xf) << 4 | (uint)(in_cr7 & 0xf);
  dVar2 = (double)*(float *)(_DAT_0071afe8 + -0x7fe0);
  dVar3 = dVar2;
  dVar4 = param_1;
  if (param_1 < dVar2) {
    snd_Printf((char)*(undefined4 *)(_DAT_0071afe8 + -0x7fa8));
    if (**(char **)(iVar1 + -0x7fa0) != '\0') {
      return;
    }
    trapWord(0x18,(ulonglong)**(byte **)(iVar1 + -0x7f9c),0);
  }
  if (**(char **)(iVar1 + -0x7fcc) == '\0') {
    if (param_1 < dVar2) {
      dVar4 = dVar3;
    }
    snd_gmxDeactivateAllSnapshots(dVar4);
  }
  return;
}


// 0x060b2f0 (0xac bytes)
// strings: 00669c28: '%s(%d) : Invalid parameter.\n' | 00669c48: 'common/api.cpp'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0060b2f0(undefined8 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = _DAT_0071afe8;
  if (param_2 == 0) {
    snd_Printf((char)*(undefined4 *)(_DAT_0071afe8 + -0x7fa8));
    if (**(char **)(iVar1 + -0x7fa0) != '\0') {
      return 0;
    }
    trapWord(0x18,(ulonglong)**(byte **)(iVar1 + -0x7f9c),0);
  }
  uVar2 = 1;
  if (**(char **)(iVar1 + -0x7fcc) == '\0') {
    uVar2 = snd_gmxDeactivateSnapshotByName(param_1,param_2);
  }
  return uVar2;
}


// 0x060b39c (0xf8 bytes)
// strings: 00669c28: '%s(%d) : Invalid parameter.\n' | 00669c48: 'common/api.cpp'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0060b39c(double param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = _DAT_0071afe8;
  if (((param_3 == 0) || (param_1 <= (double)*(float *)(_DAT_0071afe8 + -0x7fe0))) ||
     ((double)*(float *)(_DAT_0071afe8 + -0x7f70) < param_1)) {
    snd_Printf((char)*(undefined4 *)(_DAT_0071afe8 + -0x7fa8));
    if (**(char **)(iVar1 + -0x7fa0) != '\0') {
      return 0;
    }
    trapWord(0x18,(ulonglong)**(byte **)(iVar1 + -0x7f9c),0);
  }
  if (**(char **)(iVar1 + -0x7fcc) != '\0') {
    return 1;
  }
  uVar2 = snd_gmxActivateSnapshotByName(param_1,param_2,param_3);
  return uVar2;
}


// 0x060b494 (0x80 bytes)
// strings: 00669c28: '%s(%d) : Invalid parameter.\n' | 00669c48: 'common/api.cpp'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0060b494(uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = _DAT_0071afe8;
  if (0x1f < param_1) {
    snd_Printf((char)*(undefined4 *)(_DAT_0071afe8 + -0x7fa8));
    if (**(char **)(iVar1 + -0x7fa0) != '\0') {
      return 0;
    }
    trapWord(0x18,(ulonglong)**(byte **)(iVar1 + -0x7f9c),0);
  }
  uVar2 = FUN_0061cf18(param_1);
  return uVar2;
}


// 0x060b514 (0x80 bytes)
// strings: 00669c28: '%s(%d) : Invalid parameter.\n' | 00669c48: 'common/api.cpp'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0060b514(uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = _DAT_0071afe8;
  if (0x1f < param_1) {
    snd_Printf((char)*(undefined4 *)(_DAT_0071afe8 + -0x7fa8));
    if (**(char **)(iVar1 + -0x7fa0) != '\0') {
      return 0;
    }
    trapWord(0x18,(ulonglong)**(byte **)(iVar1 + -0x7f9c),0);
  }
  uVar2 = FUN_0061cef8(param_1);
  return uVar2;
}


// 0x060b594 (0x120 bytes)
// strings: 0066a6c8: 'snd_SetMasterVolumeDucker():  Invalid ducking amount -- the ducking amount will be clamped.\n' | 0066a780: 'snd_SetMasterVolumeDucker():  Invalid release time -- the release time will be clamped.\n' | 0066a728: 'snd_SetMasterVolumeDucker():  Invalid attack time -- the attack time will be clamped.\n' | 00669c28: '%s(%d) : Invalid parameter.\n' | 00669c48: 'common/api.cpp'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void snd_SetMasterVolumeDucker(uint param_1,int param_2)

{
  int iVar1;
  
  iVar1 = _DAT_0071afe8;
  if (0x1f < param_1) {
    snd_Printf((char)*(undefined4 *)(_DAT_0071afe8 + -0x7fa8));
    if (**(char **)(iVar1 + -0x7fa0) != '\0') {
      return;
    }
    trapWord(0x18,(ulonglong)**(byte **)(iVar1 + -0x7f9c),0);
  }
  if (param_2 != 0) {
    if ((*(float *)(param_2 + 8) < *(float *)(iVar1 + -0x7fe0)) ||
       (*(float *)(iVar1 + -0x7f70) < *(float *)(param_2 + 8))) {
      snd_Printf((char)*(undefined4 *)(iVar1 + -0x7e20));
    }
    if ((*(float *)(param_2 + 0xc) < *(float *)(iVar1 + -0x7fe0)) ||
       (*(float *)(iVar1 + -0x7e1c) < *(float *)(param_2 + 0xc))) {
      snd_Printf((char)*(undefined4 *)(iVar1 + -0x7e14));
    }
    if ((*(float *)(param_2 + 0x10) < *(float *)(iVar1 + -0x7fe0)) ||
       (*(float *)(iVar1 + -0x7e1c) < *(float *)(param_2 + 0x10))) {
      snd_Printf((char)*(undefined4 *)(iVar1 + -0x7e10));
    }
  }
  FUN_0061e448(param_1,param_2);
  return;
}


// 0x060b6b4 (0x12c bytes)
// strings: 00669c28: '%s(%d) : Invalid parameter.\n' | 00669c48: 'common/api.cpp' | 0066a7e0: '%s(%d) : Setting MASTER_VOLUME_EXTERNAL has no effect.\n'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void snd_SetMasterVolume(double param_1,uint param_2)

{
  int iVar1;
  double dVar2;
  
  iVar1 = _DAT_0071afe8;
  if ((((0x20 < param_2) || (param_2 == 0x1f)) ||
      (param_1 < (double)*(float *)(_DAT_0071afe8 + -0x7fe0))) ||
     (dVar2 = (double)*(float *)(_DAT_0071afe8 + -0x7f70), dVar2 < param_1)) {
    snd_Printf((char)*(undefined4 *)(_DAT_0071afe8 + -0x7fa8));
    if (**(char **)(iVar1 + -0x7fa0) != '\0') {
      return;
    }
    trapWord(0x18,(ulonglong)**(byte **)(iVar1 + -0x7f9c),0);
    dVar2 = (double)*(float *)(iVar1 + -0x7f70);
  }
  if ((param_1 <= dVar2) && (dVar2 = (double)*(float *)(iVar1 + -0x7fe0), dVar2 <= param_1)) {
    dVar2 = param_1;
  }
  if (param_2 != 0x1f) {
    if (**(char **)(iVar1 + -0x7fc8) != '\0') {
      return;
    }
    snd_UpdateGroupOrMasterVolume(dVar2,param_2);
    return;
  }
  snd_Printf((char)*(undefined4 *)(iVar1 + -0x7e0c));
  return;
}


// 0x060b7e0 (0x7c bytes)
// strings: 00669c28: '%s(%d) : Invalid parameter.\n' | 00669c48: 'common/api.cpp'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0060b7e0(double param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = _DAT_0071afe8;
  if (0x20 < param_2) {
    snd_Printf((char)*(undefined4 *)(_DAT_0071afe8 + -0x7fa8));
    param_1 = (double)*(float *)(iVar1 + -0x7fe0);
    if (**(char **)(iVar1 + -0x7fa0) != '\0') {
      return;
    }
    trapWord(0x18,(ulonglong)**(byte **)(iVar1 + -0x7f9c),0);
  }
  FUN_0061db74(param_1,param_2);
  return;
}


// 0x060b85c (0x44 bytes)
void FUN_0060b85c(undefined4 param_1)

{
  snd_SynthLock();
  FUN_0061ecdc(param_1);
  snd_SynthUnlock();
  return;
}


// 0x060b8a0 (0x44 bytes)
void FUN_0060b8a0(undefined4 param_1)

{
  snd_SynthLock();
  FUN_0061ec2c(param_1);
  snd_SynthUnlock();
  return;
}


// 0x060b8e4 (0x44 bytes)
void FUN_0060b8e4(undefined4 param_1)

{
  snd_SynthLock();
  FUN_0061ed8c(param_1);
  snd_SynthUnlock();
  return;
}


// 0x060b928 (0xa4 bytes)
// strings: 00669c28: '%s(%d) : Invalid parameter.\n' | 00669c48: 'common/api.cpp'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0060b928(uint param_1,int param_2)

{
  int iVar1;
  
  iVar1 = _DAT_0071afe8;
  if (((0x1f < param_1) || (param_2 < -1)) || (**(int **)(_DAT_0071afe8 + -0x7e08) <= param_2)) {
    snd_Printf((char)*(undefined4 *)(_DAT_0071afe8 + -0x7fa8));
    if (**(char **)(iVar1 + -0x7fa0) != '\0') {
      return;
    }
    trapWord(0x18,(ulonglong)**(byte **)(iVar1 + -0x7f9c),0);
  }
  FUN_0061ef28(param_1,param_2);
  return;
}


// 0x060b9cc (0xbc bytes)
// strings: 00669c28: '%s(%d) : Invalid parameter.\n' | 00669c48: 'common/api.cpp'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void snd_SetGroupVoiceRange(uint param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = _DAT_0071afe8;
  if ((((0x1f < param_1) || (param_2 < 0)) || (**(int **)(_DAT_0071afe8 + -0x7ff8) <= param_3)) ||
     (param_3 < param_2)) {
    snd_Printf((char)*(undefined4 *)(_DAT_0071afe8 + -0x7fa8));
    if (**(char **)(iVar1 + -0x7fa0) != '\0') {
      return;
    }
    trapWord(0x18,(ulonglong)**(byte **)(iVar1 + -0x7f9c),0);
  }
  FUN_0061ef88(param_1,param_2,param_3);
  return;
}


// 0x060ba88 (0x108 bytes)
// strings: 00669c28: '%s(%d) : Invalid parameter.\n' | 00669c48: 'common/api.cpp'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0060ba88(uint param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = _DAT_0071afe8;
  if (param_1 == 0) {
    snd_Printf((char)*(undefined4 *)(_DAT_0071afe8 + -0x7fa8));
    if (**(char **)(iVar1 + -0x7fa0) != '\0') {
      return;
    }
    trapWord(0x18,(ulonglong)**(byte **)(iVar1 + -0x7f9c),0);
  }
  snd_SynthLock();
  for (piVar2 = (int *)FUN_00619848(); piVar2 != (int *)0x0; piVar2 = (int *)piVar2[0x89]) {
    while (((1 << ((int)*(char *)(piVar2 + 4) & 0x3fU) & param_1) != 0 && (*piVar2 < 0))) {
      FUN_0061b86c(piVar2,1,param_2,0);
      piVar2 = (int *)piVar2[0x89];
      if (piVar2 == (int *)0x0) goto LAB_0060bb64;
    }
  }
LAB_0060bb64:
  snd_SynthUnlock();
  return;
}


// 0x060bb90 (0xfc bytes)
// strings: 00669c28: '%s(%d) : Invalid parameter.\n' | 00669c48: 'common/api.cpp'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0060bb90(uint param_1)

{
  int iVar1;
  
  iVar1 = _DAT_0071afe8;
  if (param_1 == 0) {
    snd_Printf((char)*(undefined4 *)(_DAT_0071afe8 + -0x7fa8));
    if (**(char **)(iVar1 + -0x7fa0) != '\0') {
      return;
    }
    trapWord(0x18,(ulonglong)**(byte **)(iVar1 + -0x7f9c),0);
  }
  snd_SynthLock();
  for (iVar1 = FUN_00619848(); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x224)) {
    while (((1 << ((int)*(char *)(iVar1 + 0x10) & 0x3fU) & param_1) != 0 &&
           ((*(uint *)(iVar1 + 4) & 2) != 0))) {
      FUN_0061af44(iVar1,1,2);
      iVar1 = *(int *)(iVar1 + 0x224);
      if (iVar1 == 0) goto LAB_0060bc64;
    }
  }
LAB_0060bc64:
  snd_SynthUnlock();
  return;
}


// 0x060bc8c (0xfc bytes)
// strings: 00669c28: '%s(%d) : Invalid parameter.\n' | 00669c48: 'common/api.cpp'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0060bc8c(uint param_1)

{
  int iVar1;
  
  iVar1 = _DAT_0071afe8;
  if (param_1 == 0) {
    snd_Printf((char)*(undefined4 *)(_DAT_0071afe8 + -0x7fa8));
    if (**(char **)(iVar1 + -0x7fa0) != '\0') {
      return;
    }
    trapWord(0x18,(ulonglong)**(byte **)(iVar1 + -0x7f9c),0);
  }
  snd_SynthLock();
  for (iVar1 = FUN_00619848(); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x224)) {
    while (((1 << ((int)*(char *)(iVar1 + 0x10) & 0x3fU) & param_1) != 0 &&
           ((*(uint *)(iVar1 + 4) & 2) == 0))) {
      FUN_0061b0c8(iVar1,1,2);
      iVar1 = *(int *)(iVar1 + 0x224);
      if (iVar1 == 0) goto LAB_0060bd60;
    }
  }
LAB_0060bd60:
  snd_SynthUnlock();
  return;
}


// 0x060bd88 (0xac bytes)
// strings: 00669c48: 'common/api.cpp' | 00669c28: '%s(%d) : Invalid parameter.\n'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0060bd88(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = _DAT_0071afe8;
  if (param_1 == 0) {
    snd_Printf((char)*(undefined4 *)(_DAT_0071afe8 + -0x7fa8));
    if (**(char **)(iVar1 + -0x7fa0) != '\0') {
      return;
    }
    trapWord(0x18,(ulonglong)**(byte **)(iVar1 + -0x7f9c),0);
  }
  snd_SynthLock();
  if (param_2 == 0) {
    FUN_0061e788(param_1);
  }
  else {
    FUN_0061e854(param_1);
  }
  snd_SynthUnlock();
  return;
}


// 0x060be34 (0xac bytes)
// strings: 00669c48: 'common/api.cpp' | 00669c28: '%s(%d) : Invalid parameter.\n'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0060be34(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = _DAT_0071afe8;
  if (param_1 == 0) {
    snd_Printf((char)*(undefined4 *)(_DAT_0071afe8 + -0x7fa8));
    if (**(char **)(iVar1 + -0x7fa0) != '\0') {
      return;
    }
    trapWord(0x18,(ulonglong)**(byte **)(iVar1 + -0x7f9c),0);
  }
  snd_SynthLock();
  if (param_2 == 0) {
    FUN_0061e91c(param_1);
  }
  else {
    FUN_0061e9e8(param_1);
  }
  snd_SynthUnlock();
  return;
}


// 0x060bee0 (0xf8 bytes)
// strings: 00669c28: '%s(%d) : Invalid parameter.\n' | 00669c48: 'common/api.cpp'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0060bee0(uint param_1)

{
  int iVar1;
  
  iVar1 = _DAT_0071afe8;
  if (param_1 == 0) {
    snd_Printf((char)*(undefined4 *)(_DAT_0071afe8 + -0x7fa8));
    if (**(char **)(iVar1 + -0x7fa0) != '\0') {
      return;
    }
    trapWord(0x18,(ulonglong)**(byte **)(iVar1 + -0x7f9c),0);
  }
  snd_SynthLock();
  FUN_0061eab0(param_1);
  for (iVar1 = FUN_00619848(); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x224)) {
    while ((1 << ((int)*(char *)(iVar1 + 0x10) & 0x3fU) & param_1) != 0) {
      FUN_0061af44(iVar1,1,4);
      iVar1 = *(int *)(iVar1 + 0x224);
      if (iVar1 == 0) goto LAB_0060bfb0;
    }
  }
LAB_0060bfb0:
  snd_SynthUnlock();
  return;
}


// 0x060bfd8 (0xf8 bytes)
// strings: 00669c28: '%s(%d) : Invalid parameter.\n' | 00669c48: 'common/api.cpp'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0060bfd8(uint param_1)

{
  int iVar1;
  
  iVar1 = _DAT_0071afe8;
  if (param_1 == 0) {
    snd_Printf((char)*(undefined4 *)(_DAT_0071afe8 + -0x7fa8));
    if (**(char **)(iVar1 + -0x7fa0) != '\0') {
      return;
    }
    trapWord(0x18,(ulonglong)**(byte **)(iVar1 + -0x7f9c),0);
  }
  snd_SynthLock();
  FUN_0061eb70(param_1);
  for (iVar1 = FUN_00619848(); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x224)) {
    while ((1 << ((int)*(char *)(iVar1 + 0x10) & 0x3fU) & param_1) != 0) {
      FUN_0061b0c8(iVar1,1,4);
      iVar1 = *(int *)(iVar1 + 0x224);
      if (iVar1 == 0) goto LAB_0060c0a8;
    }
  }
LAB_0060c0a8:
  snd_SynthUnlock();
  return;
}


// 0x060c0d0 (0x24 bytes)
void FUN_0060c0d0(void)

{
  FUN_0061c114();
  return;
}


// 0x060c0f4 (0x24 bytes)
void FUN_0060c0f4(void)

{
  FUN_00619180();
  return;
}


// 0x060c118 (0x1d4 bytes)
// strings: 00669c28: '%s(%d) : Invalid parameter.\n' | 00669c48: 'common/api.cpp'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0060c118(uint param_1,int param_2)

{
  byte bVar1;
  char *pcVar2;
  byte *pbVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  char asdf;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  
  iVar6 = _DAT_0071afe8;
  if (param_1 == 6) {
    asdf = (char)*(undefined4 *)(_DAT_0071afe8 + -0x7fa8);
  }
  else {
    if (param_1 < 5) {
      if (param_2 != 0) {
        pcVar2 = *(char **)(_DAT_0071afe8 + -0x7fa0);
        uVar8 = 0x168;
        pbVar3 = *(byte **)(_DAT_0071afe8 + -0x7f9c);
        uVar10 = 1;
        iVar9 = 0;
        do {
          uVar4 = *(uint *)((int)((uVar10 & 0xffffffff) << 2) + param_2);
          if (uVar4 < uVar8) {
            if (uVar4 != 0) {
              uVar8 = uVar4;
            }
          }
          else {
            snd_Printf((char)*(undefined4 *)(iVar6 + -0x7fa8));
            if (*pcVar2 != '\0') goto LAB_0060c29c;
            bVar1 = *pbVar3;
            if (bVar1 != 0) {
              trapWord(0x1f,(ulonglong)bVar1,(ulonglong)bVar1);
              goto LAB_0060c218;
            }
          }
          if (iVar9 == 6) break;
          uVar10 = uVar10 + 1;
          iVar9 = iVar9 + 1;
          uVar5 = (uVar10 & 0xffffffff) * 0x24924925 >> 0x20;
          uVar5 = (uVar5 + ((uVar10 - uVar5 << 0x20) >> 0x21) << 0x20) >> 0x22;
          uVar10 = uVar10 - ((uVar5 & 0x1fffffff) * 8 - uVar5);
        } while ((uVar10 & 0xffffffff) < 7);
      }
      goto LAB_0060c248;
    }
LAB_0060c218:
    asdf = (char)*(undefined4 *)(iVar6 + -0x7fa8);
  }
  snd_Printf(asdf);
  if (**(char **)(iVar6 + -0x7fa0) != '\0') {
LAB_0060c29c:
    return **(undefined4 **)(iVar6 + -0x7ff4);
  }
  trapWord(0x18,(ulonglong)**(byte **)(iVar6 + -0x7f9c),0);
LAB_0060c248:
  uVar7 = snd_SynthSetSpeakerMode(param_1,param_2);
  **(undefined4 **)(iVar6 + -0x7ff4) = uVar7;
  return uVar7;
}


// 0x060c2ec (0x28 bytes)
undefined4 FUN_0060c2ec(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_006246c4();
  return uVar1;
}


// 0x060c314 (0x80 bytes)
// strings: 00669c28: '%s(%d) : Invalid parameter.\n' | 00669c48: 'common/api.cpp'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0060c314(uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = _DAT_0071afe8;
  if (4 < param_1) {
    snd_Printf((char)*(undefined4 *)(_DAT_0071afe8 + -0x7fa8));
    if (**(char **)(iVar1 + -0x7fa0) != '\0') {
      return 0;
    }
    trapWord(0x18,(ulonglong)**(byte **)(iVar1 + -0x7f9c),0);
  }
  uVar2 = FUN_0061cf38(param_1);
  return uVar2;
}


// 0x060c394 (0xb4 bytes)
// strings: 00669c28: '%s(%d) : Invalid parameter.\n' | 00669c48: 'common/api.cpp'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0060c394(double param_1,uint param_2,ulonglong param_3,ulonglong param_4)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  iVar1 = _DAT_0071afe8;
  if (7 < param_2) {
    snd_Printf((char)*(undefined4 *)(_DAT_0071afe8 + -0x7fa8));
    param_1 = (double)*(float *)(iVar1 + -0x7fe0);
    if (**(char **)(iVar1 + -0x7fa0) != '\0') {
      return;
    }
    trapWord(0x18,(ulonglong)**(byte **)(iVar1 + -0x7f9c),0);
  }
  uVar2 = (ulonglong)((int)param_3 >> 0x1f);
  uVar3 = (ulonglong)((int)param_4 >> 0x1f);
  FUN_0062f048(param_1,param_2,uVar2 - (uVar2 ^ param_3) >> 0x1f & 1,
               uVar3 - (uVar3 ^ param_4) >> 0x1f & 1);
  return;
}


// 0x060c448 (0xd0 bytes)
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0060c448(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar3 = _DAT_0071afe8;
  uVar4 = 0xfffffffe;
  piVar1 = *(int **)(_DAT_0071afe8 + -0x8000);
  if (*piVar1 != -1) {
    FUN_00618a28();
    FUN_00627448();
    snd_SetMasterVolume((double)*(float *)(iVar3 + -0x7fe0),0x20);
    FUN_006176ec();
    *piVar1 = -1;
    FUN_00616540();
    FUN_00627334();
    FUN_0061cdc8();
    piVar1 = *(int **)(iVar3 + -0x7e04);
    uVar4 = 0;
    iVar2 = *piVar1;
    if (iVar2 != 0) {
      (**(code **)**(undefined4 **)(iVar3 + -0x7f98))(iVar2);
      uVar4 = 0;
      *piVar1 = 0;
    }
  }
  return uVar4;
}


// 0x060c518 (0x520 bytes)
// strings: 0066a818: '%s(%d) : External memory functions are required for this platform.\n' | 00669c48: 'common/api.cpp' | 00669c28: '%s(%d) : Invalid parameter.\n' | 0066a860: 'SCREAM Version %d.%d.%d ' | 0066a8a8: '12:14:27' | 0066a880: 'Built on %s at %s\n' | 0066a898: 'Mar  6 2012'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0060c518(uint *param_1)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  int *piVar4;
  undefined1 *puVar5;
  uint uVar6;
  uint *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  uint *puVar12;
  byte *pbVar13;
  byte *pbVar14;
  int iVar15;
  int iVar16;
  undefined4 uVar17;
  char cVar18;
  int iVar19;
  float *pfVar21;
  ulonglong uVar20;
  int iVar22;
  longlong lVar23;
  ulonglong uVar24;
  double dVar25;
  
  iVar15 = _DAT_0071afe8;
  if ((param_1 == (uint *)0x0) || (param_1[0xb] == 0)) {
    snd_Printf((char)*(undefined4 *)(_DAT_0071afe8 + -0x7fa8));
    if (**(char **)(iVar15 + -0x7fa0) != '\0') {
      return 0xfffffffc;
    }
    trapWord(0x18,(ulonglong)**(byte **)(iVar15 + -0x7f9c),0);
    if (param_1[0xb] == 0) {
      return 0xfffffffd;
    }
  }
  piVar4 = *(int **)(iVar15 + -0x8000);
  uVar17 = 0xffffffff;
  if (*piVar4 == -1) {
    puVar5 = *(undefined1 **)(iVar15 + -0x7fc8);
    uVar6 = param_1[7];
    **(undefined1 **)(iVar15 + -0x7fcc) = 0;
    *puVar5 = 0;
    if ((uVar6 == 0) || (param_1[8] == 0)) {
      snd_Printf((char)*(undefined4 *)(iVar15 + -0x7dfc));
      return 0xffffffff;
    }
    puVar7 = *(uint **)(iVar15 + -0x7f7c);
    puVar8 = *(undefined4 **)(iVar15 + -0x7e00);
    iVar19 = 0;
    puVar9 = *(undefined4 **)(iVar15 + -0x7fc4);
    lVar23 = 0x20;
    puVar10 = *(undefined4 **)(iVar15 + -0x7fc0);
    pfVar21 = *(float **)(iVar15 + -0x7fd4);
    puVar11 = *(undefined4 **)(iVar15 + -0x7fd8);
    fVar2 = *(float *)(iVar15 + -0x7f70);
    dVar25 = (double)fVar2;
    iVar22 = *(int *)(iVar15 + -0x7f94);
    iVar16 = *(int *)(iVar15 + -0x7f90);
    **(uint **)(iVar15 + -0x7f98) = param_1[8];
    *puVar11 = 0;
    *puVar7 = uVar6;
    *puVar8 = 0;
    *puVar9 = 0;
    *puVar10 = 0;
    *pfVar21 = fVar2;
    do {
      pfVar21 = (float *)(iVar19 + iVar22);
      puVar8 = (undefined4 *)(iVar19 + iVar16);
      iVar19 = iVar19 + 4;
      *pfVar21 = fVar2;
      *puVar8 = 0;
      lVar23 = lVar23 + -1;
    } while (lVar23 != 0);
    FUN_0061c97c(0);
    fVar2 = (float)param_1[6];
    fVar3 = *(float *)(iVar15 + -0x7fe0);
    puVar12 = *(uint **)(iVar15 + -0x7df8);
    pbVar13 = *(byte **)(iVar15 + -0x7fa0);
    pbVar14 = *(byte **)(iVar15 + -0x7f9c);
    uVar6 = *param_1;
    **(uint **)(iVar15 + -0x7df4) = param_1[2];
    *puVar12 = uVar6 >> 1 & 1;
    *pbVar13 = (byte)(uVar6 >> 2) & 1;
    *pbVar14 = (byte)(uVar6 >> 3) & 1;
    uVar17 = 0;
    if (fVar3 < fVar2) {
      uVar17 = (undefined4)(longlong)(fVar2 * *(float *)(iVar15 + -0x7fec));
    }
    puVar12 = *(uint **)(iVar15 + -0x7df0);
    puVar8 = *(undefined4 **)(iVar15 + -0x7fe4);
    puVar9 = (undefined4 *)*puVar7;
    uVar6 = param_1[0x17];
    *puVar12 = uVar6;
    *puVar8 = uVar17;
    uVar17 = (*(code *)*puVar9)(uVar6 << 2,0);
    uVar6 = *puVar12;
    **(undefined4 **)(iVar15 + -0x7e04) = uVar17;
    memset(uVar17,0,((ulonglong)uVar6 & 0x3fffffff) << 2);
    if ((float)param_1[3] <= *(float *)(iVar15 + -0x7fe0)) {
      **(undefined4 **)(iVar15 + -0x7dec) = 0;
    }
    else {
      uVar24 = (ulonglong)((float)param_1[3] * *(float *)(iVar15 + -0x7fec));
      iVar16 = (int)uVar24;
      iVar22 = 1;
      if ((iVar16 != 0) && (iVar22 = iVar16, 0xf0 < (uVar24 & 0xffffffff))) {
        iVar22 = 0xf0;
      }
      **(int **)(iVar15 + -0x7dec) = iVar22;
    }
    if ((float)param_1[4] <= *(float *)(iVar15 + -0x7fe0)) {
      **(undefined4 **)(iVar15 + -0x7de8) = 0;
    }
    else {
      uVar24 = (ulonglong)((float)param_1[4] * *(float *)(iVar15 + -0x7fec));
      iVar16 = (int)uVar24;
      iVar22 = 1;
      if ((iVar16 != 0) && (iVar22 = iVar16, 0xf0 < (uVar24 & 0xffffffff))) {
        iVar22 = 0xf0;
      }
      **(int **)(iVar15 + -0x7de8) = iVar22;
    }
    if ((float)param_1[5] <= *(float *)(iVar15 + -0x7fe0)) {
      **(undefined4 **)(iVar15 + -0x7de4) = 0;
    }
    else {
      uVar24 = (ulonglong)((float)param_1[5] * *(float *)(iVar15 + -0x7fec));
      iVar16 = (int)uVar24;
      iVar22 = 1;
      if ((iVar16 != 0) && (iVar22 = iVar16, 0xf0 < (uVar24 & 0xffffffff))) {
        iVar22 = 0xf0;
      }
      **(int **)(iVar15 + -0x7de4) = iVar22;
    }
    uVar6 = *param_1;
    **(uint **)(iVar15 + -0x7de0) = param_1[9];
    cVar18 = snd_SynthInit(uVar6,param_1 + 10);
    uVar17 = 0xfffffffc;
    if (cVar18 != '\0') {
      FUN_0061768c();
      uVar24 = ~(ulonglong)param_1[0x1a];
      uVar20 = (ulonglong)((int)uVar24 >> 0x1f);
      snd_InitGroupMixer
                (param_1[0x1a],param_1[0x19],((uVar20 ^ uVar24) - uVar20) - 1 >> 0x1f & 1);
      cVar18 = snd_InitVoiceAllocator(param_1);
      uVar17 = 0xfffffffc;
      if (cVar18 != '\0') {
        FUN_00619f60();
        FUN_0060d390();
        FUN_0060cc14();
        FUN_0060cef8();
        FUN_0060d118();
        cVar18 = FUN_0062c52c();
        if (cVar18 == '\0') {
          FUN_00616540();
          FUN_0061cdc8();
          FUN_006176ec();
          uVar17 = 0xfffffffc;
        }
        else {
          uVar6 = param_1[1];
          *piVar4 = 1;
          if (uVar6 == 6) {
            snd_SynthSetSpeakerMode(**(undefined4 **)(iVar15 + -0x7ff4),0);
          }
          else {
            FUN_0060c118(uVar6,0);
          }
          iVar22 = 0;
          do {
            snd_SetMasterVolume(dVar25,iVar22);
            bVar1 = iVar22 != 0x1e;
            iVar22 = iVar22 + 1;
          } while (bVar1);
          snd_SetMasterVolume(dVar25,0x20);
          snd_Printf((char)*(undefined4 *)(iVar15 + -0x7ddc));
          snd_Printf((char)*(undefined4 *)(iVar15 + -0x7dd8));
          uVar17 = 0;
        }
      }
    }
  }
  return uVar17;
}


// 0x060ca38 (0xd0 bytes)
// strings: 00669c48: 'common/api.cpp' | 00669c28: '%s(%d) : Invalid parameter.\n'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0060ca38(undefined4 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = _DAT_0071afe8;
  if (param_1 != (undefined4 *)0x0) {
    uVar1 = *(undefined4 *)(_DAT_0071afe8 + -0x7dc4);
    uVar2 = *(undefined4 *)(_DAT_0071afe8 + -0x7f70);
    *param_1 = 4;
    param_1[1] = 6;
    param_1[3] = *(undefined4 *)(iVar3 + -0x7dcc);
    param_1[2] = 10;
    param_1[0x17] = 0x400;
    param_1[5] = uVar1;
    param_1[6] = uVar2;
    param_1[0x18] = 0xc0;
    param_1[0x1b] = 0;
    param_1[0x19] = 0x20;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[0x1a] = 0;
    param_1[4] = uVar1;
    FUN_006246d8(param_1 + 10,param_2,0x14c);
    return;
  }
  snd_Printf((char)*(undefined4 *)(_DAT_0071afe8 + -0x7fa8));
  return;
}


// 0x060cb08 (0xec bytes)
// strings: 00669c28: '%s(%d) : Invalid parameter.\n' | 00669c48: 'common/api.cpp'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0060cb08(int param_1)

{
  int iVar1;
  
  iVar1 = _DAT_0071afe8;
  if (param_1 == 0) {
    snd_Printf((char)*(undefined4 *)(_DAT_0071afe8 + -0x7fa8));
    if (**(char **)(iVar1 + -0x7fa0) != '\0') {
      return 0;
    }
    trapWord(0x18,(ulonglong)**(byte **)(iVar1 + -0x7f9c),0);
  }
  iVar1 = (**(code **)**(undefined4 **)(iVar1 + -0x7f7c))(0x10,3);
  if (iVar1 != 0) {
    FUN_006223a0(iVar1);
    FUN_00622fbc(iVar1,param_1);
  }
  return iVar1;
}


// 0x060cc14 (0x3c bytes)
void FUN_0060cc14(void)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  
  lVar3 = 0x40;
  uVar1 = *(undefined4 *)(PTR_PTR_0071afec + -0x7ffc);
  iVar2 = *(int *)(PTR_PTR_0071afec + -0x8000);
  do {
    *(undefined4 *)(iVar2 + 4) = 0;
    *(undefined4 *)(iVar2 + 0x10) = uVar1;
    *(undefined4 *)(iVar2 + 8) = 0;
    lVar3 = lVar3 + -1;
    iVar2 = iVar2 + 0x28;
  } while (lVar3 != 0);
  return;
}


// 0x060cc50 (0x74 bytes)
void FUN_0060cc50(int param_1,undefined4 param_2)

{
  int iVar1;
  
  for (iVar1 = *(int *)(param_1 + 0x22c); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x230)) {
    FUN_0060cc50(iVar1,param_2);
  }
  *(undefined4 *)(param_1 + 0x138) = param_2;
  return;
}


// 0x060ccc4 (0x234 bytes)
// strings: 0066a8b8: '%s(%d) : Invalid parameter.\n' | 0066a8d8: 'common/autopan.cpp'

uint FUN_0060ccc4(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  float fVar5;
  undefined *puVar6;
  GPiece<240> auStack_110;
  
  puVar6 = PTR_PTR_0071afec;
  if ((param_1 == 0) || (param_2 == 0)) {
    snd_Printf((char)*(undefined4 *)(PTR_PTR_0071afec + -0x7ff8));
    if (**(char **)(puVar6 + -0x7ff0) != '\0') {
      return 0;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar6 + -0x7fec),0);
  }
  uVar4 = *(uint *)(param_1 + 0x24);
  if ((uVar4 & 4) == 0) {
    fVar1 = *(float *)(param_1 + 0x20);
    fVar2 = *(float *)(param_1 + 0x18);
    if (fVar1 < fVar2) {
      fVar5 = *(float *)(puVar6 + -0x7fe8) - (fVar2 - fVar1);
    }
    else {
      fVar5 = fVar1 - fVar2;
    }
    fVar3 = *(float *)(param_1 + 0x1c);
    if (fVar3 < fVar2) {
      fVar3 = *(float *)(puVar6 + -0x7fe8) - (fVar2 - fVar3);
    }
    else {
      fVar3 = fVar3 - fVar2;
    }
  }
  else {
    fVar1 = *(float *)(param_1 + 0x20);
    fVar3 = *(float *)(param_1 + 0x18);
    if (fVar1 <= fVar3) {
      fVar5 = fVar3 - fVar1;
    }
    else {
      fVar5 = *(float *)(puVar6 + -0x7fe8) - (fVar1 - fVar3);
    }
    fVar2 = *(float *)(param_1 + 0x1c);
    if (fVar3 < fVar2) {
      if (fVar5 < *(float *)(puVar6 + -0x7fe8) - (fVar2 - fVar3)) goto LAB_0060cdc4;
      goto LAB_0060cd4c;
    }
    fVar3 = fVar3 - fVar2;
  }
  if (fVar5 < fVar3) {
LAB_0060cdc4:
    fVar1 = fVar1 + *(float *)(param_1 + 0x14);
    fVar3 = *(float *)(puVar6 + -0x7fe8);
    *(float *)(param_1 + 0x20) = fVar1;
    if (fVar3 <= fVar1) {
      *(float *)(param_1 + 0x20) = fVar1 - fVar3;
    }
    if (*(float *)(param_1 + 0x20) < *(float *)(puVar6 + -0x7fe0)) {
      *(float *)(param_1 + 0x20) = *(float *)(param_1 + 0x20) + fVar3;
    }
    if ((uVar4 & 0x20) == 0) {
      FUN_0061c628(param_2,auStack_110);
    }
    else {
      FUN_0060cc50(param_2,(longlong)*(float *)(param_1 + 0x20) & 0xffffffff);
    }
    FUN_0061addc(param_2);
    return 0;
  }
LAB_0060cd4c:
  FUN_0061a34c(param_2,4);
  return uVar4 & 1;
}


// 0x060cef8 (0x3c bytes)
void FUN_0060cef8(void)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  
  lVar3 = 0x40;
  uVar1 = *(undefined4 *)(PTR_PTR_0071aff0 + -0x8000);
  iVar2 = *(int *)(PTR_PTR_0071aff0 + -0x7ffc);
  do {
    *(undefined4 *)(iVar2 + 4) = 0;
    *(undefined4 *)(iVar2 + 0x10) = uVar1;
    *(undefined4 *)(iVar2 + 8) = 0;
    lVar3 = lVar3 + -1;
    iVar2 = iVar2 + 0x24;
  } while (lVar3 != 0);
  return;
}


// 0x060cf34 (0x68 bytes)
void FUN_0060cf34(double param_1,int param_2)

{
  int iVar1;
  
  for (iVar1 = *(int *)(param_2 + 0x22c); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x230)) {
    FUN_0060cf34(param_1,iVar1);
  }
  *(float *)(param_2 + 0x160) = (float)param_1;
  return;
}


// 0x060cf9c (0x17c bytes)
// strings: 0066a8f0: '%s(%d) : Invalid parameter.\n' | 0066a910: 'common/autopb.cpp'

uint FUN_0060cf9c(int param_1,int param_2)

{
  bool bVar1;
  uint uVar2;
  undefined *puVar3;
  bool bVar4;
  GPiece<232> auStack_110;
  
  puVar3 = PTR_PTR_0071aff0;
  if ((param_1 == 0) || (param_2 == 0)) {
    snd_Printf((char)*(undefined4 *)(PTR_PTR_0071aff0 + -0x7ff8));
    if (**(char **)(puVar3 + -0x7ff0) != '\0') {
      return 0;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar3 + -0x7fec),0);
  }
  uVar2 = *(uint *)(param_1 + 0x20);
  bVar1 = (uVar2 & 0x20) == 0;
  if (bVar1) {
    bVar4 = *(float *)(param_1 + 0x1c) < *(float *)(param_2 + 0x154);
    if (*(float *)(param_2 + 0x154) < *(float *)(param_1 + 0x1c)) goto joined_r0x0060d090;
  }
  else {
    bVar4 = *(float *)(param_1 + 0x1c) < *(float *)(param_2 + 0x160);
    if (*(float *)(param_2 + 0x160) < *(float *)(param_1 + 0x1c)) goto joined_r0x0060d090;
  }
  if (!bVar4) {
    FUN_0061a34c(param_2,0x10);
    return uVar2 & 1;
  }
joined_r0x0060d090:
  if (bVar1) {
    FUN_0061c628(param_2,auStack_110);
  }
  else {
    FUN_0060cf34(param_2);
  }
  FUN_0061ad24(param_2);
  return 0;
}


// 0x060d118 (0x3c bytes)
void FUN_0060d118(void)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  
  lVar3 = 0x40;
  uVar1 = *(undefined4 *)(PTR_PTR_0071aff4 + -0x8000);
  iVar2 = *(int *)(PTR_PTR_0071aff4 + -0x7ffc);
  do {
    *(undefined4 *)(iVar2 + 4) = 0;
    *(undefined4 *)(iVar2 + 0x10) = uVar1;
    *(undefined4 *)(iVar2 + 8) = 0;
    lVar3 = lVar3 + -1;
    iVar2 = iVar2 + 0x24;
  } while (lVar3 != 0);
  return;
}


// 0x060d154 (0x74 bytes)
void FUN_0060d154(int param_1,undefined4 param_2)

{
  int iVar1;
  
  for (iVar1 = *(int *)(param_1 + 0x22c); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x230)) {
    FUN_0060d154(iVar1,param_2);
  }
  *(undefined4 *)(param_1 + 0x150) = param_2;
  return;
}


// 0x060d1c8 (0x1c8 bytes)
// strings: 0066a928: '%s(%d) : Invalid parameter.\n' | 0066a948: 'common/autoptch.cpp'

uint FUN_0060d1c8(int param_1,int param_2)

{
  bool bVar1;
  float fVar2;
  uint uVar3;
  float fVar4;
  undefined *puVar5;
  bool bVar6;
  GPiece<264> auStack_130;
  
  puVar5 = PTR_PTR_0071aff4;
  if ((param_1 == 0) || (param_2 == 0)) {
    snd_Printf((char)*(undefined4 *)(PTR_PTR_0071aff4 + -0x7ff8));
    if (**(char **)(puVar5 + -0x7ff0) != '\0') {
      return 0;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar5 + -0x7fec),0);
  }
  uVar3 = *(uint *)(param_1 + 0x20);
  bVar1 = (uVar3 & 0x20) == 0;
  if (bVar1) {
    fVar2 = *(float *)(param_1 + 0x1c);
    fVar4 = (float)(longlong)*(int *)(param_2 + 0x144);
    bVar6 = fVar2 < fVar4;
    if (fVar4 < fVar2) goto LAB_0060d244;
LAB_0060d2d8:
    if (!bVar6) {
      FUN_0061a34c(param_2,0x10);
      return uVar3 & 1;
    }
    fVar4 = fVar4 + *(float *)(param_1 + 0x14);
    if (fVar2 <= fVar4) goto joined_r0x0060d2f0;
  }
  else {
    fVar2 = *(float *)(param_1 + 0x1c);
    fVar4 = (float)(longlong)*(int *)(param_2 + 0x150);
    bVar6 = fVar2 < fVar4;
    if (fVar2 <= fVar4) goto LAB_0060d2d8;
LAB_0060d244:
    fVar4 = fVar4 + *(float *)(param_1 + 0x14);
    if (fVar4 <= fVar2) goto joined_r0x0060d2f0;
  }
  fVar4 = fVar2;
joined_r0x0060d2f0:
  if (bVar1) {
    FUN_0061c628(param_2,auStack_130);
  }
  else {
    FUN_0060d154(param_2,(int)fVar4);
  }
  FUN_0061ad24(param_2);
  return 0;
}


// 0x060d390 (0x3c bytes)
void FUN_0060d390(void)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  
  lVar3 = 0x40;
  uVar1 = *(undefined4 *)(PTR_PTR_0071aff8 + -0x7ffc);
  iVar2 = *(int *)(PTR_PTR_0071aff8 + -0x8000);
  do {
    *(undefined4 *)(iVar2 + 4) = 0;
    *(undefined4 *)(iVar2 + 0x10) = uVar1;
    *(undefined4 *)(iVar2 + 8) = 0;
    lVar3 = lVar3 + -1;
    iVar2 = iVar2 + 0x24;
  } while (lVar3 != 0);
  return;
}


// 0x060d3cc (0x68 bytes)
void FUN_0060d3cc(double param_1,int param_2)

{
  int iVar1;
  
  for (iVar1 = *(int *)(param_2 + 0x22c); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x230)) {
    FUN_0060d3cc(param_1,iVar1);
  }
  *(float *)(param_2 + 0x128) = (float)param_1;
  return;
}


// 0x060d434 (0x17c bytes)
// strings: 0066a960: '%s(%d) : Invalid parameter.\n' | 0066a980: 'common/autovol.cpp'

uint FUN_0060d434(int param_1,int param_2)

{
  uint uVar1;
  bool bVar2;
  undefined *puVar3;
  bool bVar4;
  GPiece<232> auStack_110;
  
  puVar3 = PTR_PTR_0071aff8;
  if ((param_1 == 0) || (param_2 == 0)) {
    snd_Printf((char)*(undefined4 *)(PTR_PTR_0071aff8 + -0x7ff8));
    if (**(char **)(puVar3 + -0x7ff0) != '\0') {
      return 0;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar3 + -0x7fec),0);
  }
  uVar1 = *(uint *)(param_1 + 0x20);
  bVar2 = (uVar1 & 0x20) == 0;
  if (bVar2) {
    bVar4 = *(float *)(param_1 + 0x1c) < *(float *)(param_2 + 0x120);
    if (*(float *)(param_2 + 0x120) < *(float *)(param_1 + 0x1c)) goto joined_r0x0060d528;
  }
  else {
    bVar4 = *(float *)(param_1 + 0x1c) < *(float *)(param_2 + 0x128);
    if (*(float *)(param_2 + 0x128) < *(float *)(param_1 + 0x1c)) goto joined_r0x0060d528;
  }
  if (!bVar4) {
    FUN_0061a34c(param_2,2);
    return uVar1 & 1;
  }
joined_r0x0060d528:
  if (bVar2) {
    FUN_0061c628(param_2,auStack_110);
  }
  else {
    FUN_0060d3cc(param_2);
  }
  FUN_0061ae90(param_2);
  return 0;
}


// 0x060d5b0 (0x144 bytes)
// strings: 0066a9b8: 'common/blocksnd.cpp' | 0066a998: '%s(%d) : Invalid type id %d.\n' | 0066a9d0: '%s(%d) : Invalid voice callback type %d.\n'

void FUN_0060d5b0(undefined8 param_1,byte *param_2,int param_3)

{
  int iVar1;
  
  if (param_2 != (byte *)0x0) {
    if ((*param_2 & 0x1f) == 5) {
      if ((param_3 != 3) && (param_3 != 5)) {
        if ((1 < param_3 - 1U) && (param_3 != 4)) {
          snd_Printf((char)*(undefined4 *)(PTR_PTR_0071affc + -0x7ff8));
          return;
        }
        iVar1 = FUN_00619860(param_2);
        if ((((iVar1 == 0) && (*(short *)(param_2 + 0x236) == -1)) &&
            ((*(int *)(param_2 + 0x228) != 0 || (*(int *)(param_2 + 0x22c) == 0)))) &&
           (FUN_00616c14(param_2), *(int *)param_2 < 0)) {
          FUN_0061b218(param_2,0);
        }
      }
    }
    else {
      snd_Printf((char)*(undefined4 *)(PTR_PTR_0071affc + -0x8000));
    }
  }
  return;
}


// 0x060d6f4 (0xa4 bytes)
// strings: 0066aa00: '%s(%d) : Invalid parameter.\n' | 0066a9b8: 'common/blocksnd.cpp'

undefined4 FUN_0060d6f4(int param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  puVar1 = PTR_PTR_0071affc;
  if (param_1 == 0) {
    snd_Printf((char)*(undefined4 *)(PTR_PTR_0071affc + -0x7ff4));
    if (**(char **)(puVar1 + -0x7ff0) != '\0') {
      return 0;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar1 + -0x7fec),0);
  }
  uVar2 = 0;
  if (*(int *)(param_1 + 0x30) != 0) {
    uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x30) * 4 + **(int **)(puVar1 + -0x7fe8) + -4);
  }
  return uVar2;
}


// 0x060d798 (0x8c bytes)
// strings: 0066aa00: '%s(%d) : Invalid parameter.\n' | 0066a9b8: 'common/blocksnd.cpp'

int FUN_0060d798(int param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_0071affc;
  if (param_1 == 0) {
    snd_Printf((char)*(undefined4 *)(PTR_PTR_0071affc + -0x7ff4));
    if (**(char **)(puVar1 + -0x7ff0) != '\0') {
      return 0;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar1 + -0x7fec),0);
  }
  return param_1 + *(int *)(param_1 + 0x3c);
}


// 0x060d824 (0x8c bytes)
// strings: 0066aa00: '%s(%d) : Invalid parameter.\n' | 0066a9b8: 'common/blocksnd.cpp'

int FUN_0060d824(int param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_0071affc;
  if (param_1 == 0) {
    snd_Printf((char)*(undefined4 *)(PTR_PTR_0071affc + -0x7ff4));
    if (**(char **)(puVar1 + -0x7ff0) != '\0') {
      return 0;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar1 + -0x7fec),0);
  }
  return param_1 + *(int *)(param_1 + 0x38);
}


// 0x060d8b0 (0x88 bytes)
// strings: 0066aa00: '%s(%d) : Invalid parameter.\n' | 0066a9b8: 'common/blocksnd.cpp'

int FUN_0060d8b0(int param_1)

{
  undefined *puVar1;
  int iVar2;
  
  puVar1 = PTR_PTR_0071affc;
  if (param_1 == 0) {
    snd_Printf((char)*(undefined4 *)(PTR_PTR_0071affc + -0x7ff4));
    if (**(char **)(puVar1 + -0x7ff0) != '\0') {
      return 0;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar1 + -0x7fec),0);
  }
  iVar2 = FUN_0060d824(param_1);
  return iVar2 + *(int *)(iVar2 + 8);
}


// 0x060d938 (0x8c bytes)
// strings: 0066aa00: '%s(%d) : Invalid parameter.\n' | 0066a9b8: 'common/blocksnd.cpp'

int FUN_0060d938(int param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_0071affc;
  if (param_1 == 0) {
    snd_Printf((char)*(undefined4 *)(PTR_PTR_0071affc + -0x7ff4));
    if (**(char **)(puVar1 + -0x7ff0) != '\0') {
      return 0;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar1 + -0x7fec),0);
  }
  return param_1 + *(int *)(param_1 + 0x34);
}


// 0x060d9c4 (0x8c bytes)
// strings: 0066aa00: '%s(%d) : Invalid parameter.\n' | 0066a9b8: 'common/blocksnd.cpp'

int FUN_0060d9c4(int param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_0071affc;
  if (param_1 == 0) {
    snd_Printf((char)*(undefined4 *)(PTR_PTR_0071affc + -0x7ff4));
    if (**(char **)(puVar1 + -0x7ff0) != '\0') {
      return 0;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar1 + -0x7fec),0);
  }
  return param_1 + *(int *)(param_1 + 0x24);
}


// 0x060da50 (0x94 bytes)
// strings: 0066aa00: '%s(%d) : Invalid parameter.\n' | 0066a9b8: 'common/blocksnd.cpp'

int FUN_0060da50(undefined4 param_1,int param_2)

{
  undefined *puVar1;
  int iVar2;
  
  puVar1 = PTR_PTR_0071affc;
  if (param_2 == 0) {
    snd_Printf((char)*(undefined4 *)(PTR_PTR_0071affc + -0x7ff4));
    if (**(char **)(puVar1 + -0x7ff0) != '\0') {
      return 0;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar1 + -0x7fec),0);
  }
  iVar2 = FUN_0060d9c4(param_1);
  return iVar2 + *(int *)(param_2 + 0x10);
}


// 0x060dae4 (0x94 bytes)
// strings: 0066aa00: '%s(%d) : Invalid parameter.\n' | 0066a9b8: 'common/blocksnd.cpp'

int FUN_0060dae4(undefined4 param_1,int param_2)

{
  undefined *puVar1;
  int iVar2;
  
  puVar1 = PTR_PTR_0071affc;
  if (param_2 == 0) {
    snd_Printf((char)*(undefined4 *)(PTR_PTR_0071affc + -0x7ff4));
    if (**(char **)(puVar1 + -0x7ff0) != '\0') {
      return 0;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar1 + -0x7fec),0);
  }
  iVar2 = FUN_0060d9c4(param_1);
  return iVar2 + *(int *)(param_2 + 0x10);
}


// 0x060db78 (0x8c bytes)
// strings: 0066aa00: '%s(%d) : Invalid parameter.\n' | 0066a9b8: 'common/blocksnd.cpp'

int FUN_0060db78(int param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_0071affc;
  if (param_1 == 0) {
    snd_Printf((char)*(undefined4 *)(PTR_PTR_0071affc + -0x7ff4));
    if (**(char **)(puVar1 + -0x7ff0) != '\0') {
      return 0;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar1 + -0x7fec),0);
  }
  return param_1 + *(int *)(param_1 + 0x20);
}


// 0x060dc04 (0x94 bytes)
// strings: 0066aa00: '%s(%d) : Invalid parameter.\n' | 0066a9b8: 'common/blocksnd.cpp'

int FUN_0060dc04(undefined4 param_1,int param_2)

{
  undefined *puVar1;
  int iVar2;
  
  puVar1 = PTR_PTR_0071affc;
  if (param_2 == 0) {
    snd_Printf((char)*(undefined4 *)(PTR_PTR_0071affc + -0x7ff4));
    if (**(char **)(puVar1 + -0x7ff0) != '\0') {
      return 0;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar1 + -0x7fec),0);
  }
  iVar2 = FUN_0060db78(param_1);
  return iVar2 + *(int *)(param_2 + 8);
}


// 0x060dc98 (0x40 bytes)
int FUN_0060dc98(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_0060dc04(*(undefined4 *)(param_1 + 0x240),*(undefined4 *)(param_1 + 0x54));
  return iVar1 + param_2 * 8;
}


// 0x060dcd8 (0x8c bytes)
// strings: 0066aa00: '%s(%d) : Invalid parameter.\n' | 0066a9b8: 'common/blocksnd.cpp'

int FUN_0060dcd8(int param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_0071affc;
  if (param_1 == 0) {
    snd_Printf((char)*(undefined4 *)(PTR_PTR_0071affc + -0x7ff4));
    if (**(char **)(puVar1 + -0x7ff0) != '\0') {
      return 0;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar1 + -0x7fec),0);
  }
  return param_1 + *(int *)(param_1 + 0x1c);
}


// 0x060dd64 (0x48 bytes)
ushort FUN_0060dd64(undefined8 param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = FUN_0060dcd8();
  return *(ushort *)
          (((int)((param_2 & 0xffffffff) << 4) - (int)((param_2 & 0xffffffff) << 2)) + iVar1 + 6) &
         1;
}


// 0x060ddac (0x110 bytes)
// strings: 0066aa00: '%s(%d) : Invalid parameter.\n' | 0066a9b8: 'common/blocksnd.cpp'

int FUN_0060ddac(undefined4 param_1,int param_2)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  
  puVar1 = PTR_PTR_0071affc;
  if (param_2 == 0) {
    snd_Printf((char)*(undefined4 *)(PTR_PTR_0071affc + -0x7ff4));
    if (**(char **)(puVar1 + -0x7ff0) != '\0') {
      return 0;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar1 + -0x7fec),0);
  }
  if (*(char *)(param_2 + 4) != '\0') {
    iVar3 = 0;
    do {
      iVar2 = FUN_0060dc04(param_1,param_2);
      if (*(char *)(iVar3 * 8 + iVar2) == '-') {
        return iVar3;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)(uint)*(byte *)(param_2 + 4));
  }
  return -1;
}


// 0x060debc (0xa0 bytes)
// strings: 0066aa00: '%s(%d) : Invalid parameter.\n' | 0066a9b8: 'common/blocksnd.cpp'

undefined8 FUN_0060debc(byte *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_0071affc;
  if ((param_1 == (byte *)0x0) || ((*param_1 & 0x1f) != 5)) {
    snd_Printf((char)*(undefined4 *)(PTR_PTR_0071affc + -0x7ff4));
    if (**(char **)(puVar1 + -0x7ff0) != '\0') {
      return 0;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar1 + -0x7fec),0);
  }
  uVar2 = FUN_0060ddac(*(undefined4 *)(param_1 + 0x240),*(undefined4 *)(param_1 + 0x54));
  return uVar2;
}


// 0x060df5c (0x128 bytes)
// strings: 0066aa00: '%s(%d) : Invalid parameter.\n' | 0066a9b8: 'common/blocksnd.cpp'

int FUN_0060df5c(int param_1,int param_2)

{
  byte bVar1;
  undefined *puVar2;
  char *pcVar3;
  int iVar4;
  ulonglong uVar5;
  
  puVar2 = PTR_PTR_0071affc;
  if ((param_1 == 0) || (param_2 == 0)) {
    snd_Printf((char)*(undefined4 *)(PTR_PTR_0071affc + -0x7ff4));
    if (**(char **)(puVar2 + -0x7ff0) != '\0') {
      return 0;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar2 + -0x7fec),0);
  }
  pcVar3 = (char *)FUN_0060dc04(param_1,param_2);
  bVar1 = *(byte *)(param_2 + 4);
  if (bVar1 != 0) {
    iVar4 = 0;
    if (*pcVar3 != '+') {
      uVar5 = (ulonglong)bVar1;
      iVar4 = 0;
      do {
        iVar4 = iVar4 + 1;
        uVar5 = uVar5 - 1;
        if (uVar5 == 0) {
          return -1;
        }
      } while (pcVar3[iVar4 * 8] != '+');
    }
    if (bVar1 - 1 != iVar4) {
      return iVar4;
    }
  }
  return -1;
}


// 0x060e084 (0xdc bytes)
// strings: 0066aa00: '%s(%d) : Invalid parameter.\n' | 0066a9b8: 'common/blocksnd.cpp'

undefined4 FUN_0060e084(byte *param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  
  puVar1 = PTR_PTR_0071affc;
  if ((param_1 == (byte *)0x0) || ((*param_1 & 0x1f) != 5)) {
    snd_Printf((char)*(undefined4 *)(PTR_PTR_0071affc + -0x7ff4));
    if (**(char **)(puVar1 + -0x7ff0) != '\0') {
      return 0;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar1 + -0x7fec),0);
  }
  if ((*(short *)(param_1 + 0x236) < 0) && (iVar3 = FUN_00619860(param_1), iVar3 == 0)) {
    return 0xffffffff;
  }
  uVar2 = FUN_0060df5c(*(undefined4 *)(param_1 + 0x240),*(undefined4 *)(param_1 + 0x54));
  return uVar2;
}


// 0x060e160 (0x1bc bytes)
// strings: 0066aa00: '%s(%d) : Invalid parameter.\n' | 0066a9b8: 'common/blocksnd.cpp'

uint FUN_0060e160(uint *param_1,int param_2)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  puVar1 = PTR_PTR_0071affc;
  if (((param_1 == (uint *)0x0) || (-1 < (int)*param_1)) || ((*param_1 >> 0x18 & 0x1f) != 5)) {
    snd_Printf((char)*(undefined4 *)(PTR_PTR_0071affc + -0x7ff4));
    if (**(char **)(puVar1 + -0x7ff0) != '\0') {
      return 0;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar1 + -0x7fec),0);
    snd_SynthLock();
    iVar2 = FUN_00619860(param_1);
    if (iVar2 == 0) goto LAB_0060e288;
joined_r0x0060e29c:
    if ((param_2 == 0) && (iVar2 = FUN_0060e084(param_1), -1 < iVar2)) {
      *(short *)((int)param_1 + 0x236) = (short)(iVar2 + 1);
      iVar3 = FUN_0060dc98(param_1,iVar2);
      *(short *)(param_1 + 0x8d) = (short)*(undefined4 *)(iVar3 + 4);
      iVar2 = FUN_0060dc98(param_1,iVar2 + 1);
      *(short *)(param_1 + 0x8d) =
           (short)*(undefined4 *)(iVar2 + 4) + *(short *)(param_1 + 0x8d) + 1;
      goto LAB_0060e208;
    }
  }
  else {
    snd_SynthLock();
    iVar2 = FUN_00619860(param_1);
    if (iVar2 != 0) goto joined_r0x0060e29c;
LAB_0060e288:
    if ((*(ushort *)((int)param_1 + 0x23e) & 1) == 0) goto joined_r0x0060e29c;
  }
  *(undefined2 *)((int)param_1 + 0x236) = 0xffff;
LAB_0060e208:
  uVar4 = 1;
  if (param_1[0x8b] == 0) {
    uVar4 = FUN_00619860(param_1);
  }
  uVar5 = 0;
  if (*(short *)((int)param_1 + 0x236) == -1) {
    uVar5 = (((int)uVar4 >> 0x1f ^ uVar4) - ((int)uVar4 >> 0x1f)) - 1 >> 0x1f;
  }
  snd_SynthUnlock();
  return uVar5;
}


// 0x060e31c (0x260 bytes)
// strings: 0066aa00: '%s(%d) : Invalid parameter.\n' | 0066a9b8: 'common/blocksnd.cpp'

uint FUN_0060e31c(uint *param_1)

{
  char cVar1;
  short sVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined *puVar5;
  uint uVar6;
  undefined4 uVar7;
  int *piVar8;
  
  puVar5 = PTR_PTR_0071affc;
  if ((param_1 == (uint *)0x0) || (-1 < (int)*param_1)) {
    snd_Printf((char)*(undefined4 *)(PTR_PTR_0071affc + -0x7ff4));
    cVar1 = **(char **)(puVar5 + -0x7ff0);
  }
  else {
    if ((*param_1 >> 0x18 & 0x1f) == 5) goto LAB_0060e394;
    snd_Printf((char)*(undefined4 *)(PTR_PTR_0071affc + -0x7ff4));
    cVar1 = **(char **)(puVar5 + -0x7ff0);
  }
  if (cVar1 != '\0') {
    return 0;
  }
  trapWord(0x18,(ulonglong)**(byte **)(puVar5 + -0x7fec),0);
LAB_0060e394:
  if (*(short *)((int)param_1 + 0x236) == -1) {
    if (param_1[0x8b] != 0) {
      return 0;
    }
    uVar7 = FUN_00619860(param_1);
    return (uVar7 == 0);
  }
  puVar3 = *(undefined4 **)(puVar5 + -0x7fe4);
  uVar6 = 0;
  sVar2 = *(short *)(param_1 + 0x8d);
  piVar4 = *(int **)(puVar5 + -0x7fdc);
  param_1[1] = param_1[1] & 0xffffffaf;
  *puVar3 = 0;
  *(short *)(param_1 + 0x8d) = sVar2 + -1;
LAB_0060e3dc:
  if (uVar6 != 0) goto LAB_0060e464;
  do {
    if (*(short *)((int)param_1 + 0x236) == -1) goto LAB_0060e464;
    if (*(short *)(param_1 + 0x8d) != 0) goto LAB_0060e464;
    piVar8 = *(int **)(puVar5 + -0x7fe0);
    if (*piVar8 != 0) goto LAB_0060e464;
    while( true ) {
      if ((param_1[1] & 2) != 0) {
        *(short *)(param_1 + 0x8d) = *(short *)(param_1 + 0x8d) + 1;
        return uVar6;
      }
      uVar6 = FUN_006104e8(param_1);
      if (*(short *)(param_1 + 0x8d) < 0) {
        *(undefined2 *)(param_1 + 0x8d) = 0;
      }
      if ((*piVar8 == 0) || (*piVar4 < 1)) goto LAB_0060e3dc;
      *piVar4 = *piVar4 + -1;
      if (uVar6 == 0) break;
LAB_0060e464:
      if (*piVar4 < 1) {
        return uVar6;
      }
      piVar8 = *(int **)(puVar5 + -0x7fe0);
      if (*piVar8 == 0) {
        return uVar6;
      }
    }
  } while( true );
}


// 0x060e57c (0x19c bytes)
// strings: 0066aa88: 'handle %x started (stream)\n' | 0066aa58: 'handle %x started (index %i in bank at %p)\n' | 0066aa28: 'handle %x started ("%s" (%i) from bank "%s")\n'

void FUN_0060e57c(uint *param_1)

{
  uint uVar1;
  undefined *puVar2;
  longlong lVar3;
  undefined4 uVar4;
  GPiece<2> local_130;
  GPiece<126> auStack_12e;
  GPiece<2> local_b0;
  GPiece<134> auStack_ae;
  
  puVar2 = PTR_PTR_0071affc;
  if (**(int **)(PTR_PTR_0071affc + -0x7fd8) != 0) {
    uVar1 = *param_1 >> 0x18 & 0x1f;
    if (uVar1 == 5) {
      uVar1 = param_1[0x91];
      lVar3 = FUN_0060dcd8(param_1[0x90]);
      if ((*(uint *)(param_1[0x90] + 8) & 0x100) == 0) {
        snd_Printf((char)*(undefined4 *)(puVar2 + -0x7fc8));
      }
      else {
        memset(auStack_12e,0,0x7e);
        memset(auStack_ae,0,0x7e);
        uVar4 = FUN_0060d824(param_1[0x90]);
        FUN_005cd198(local_130,0x7f,*(undefined4 *)(puVar2 + -0x7fd0),uVar4);
        FUN_00609b44(param_1[0x90],(short)(((ulonglong)uVar1 - lVar3 & 0xffffffff) / 0xc),local_b0);
        snd_Printf((char)*(undefined4 *)(puVar2 + -0x7fcc));
      }
    }
    else if (uVar1 == 4) {
      snd_Printf((char)*(undefined4 *)(PTR_PTR_0071affc + -0x7fc4));
      return;
    }
  }
  return;
}


// 0x060e718 (0xf8 bytes)
void FUN_0060e718(int param_1,ulonglong param_2)

{
  bool bVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  
  puVar2 = PTR_PTR_0071affc;
  iVar3 = FUN_0060dcd8(param_1);
  piVar6 = *(int **)(puVar2 + -0x7fc0);
  iVar4 = 0;
  piVar5 = piVar6 + -0x36;
  do {
    while ((((piVar6[-0x90] < 0 && (piVar6[-0x7b] != 0)) && (*piVar6 == param_1)) &&
           (piVar6[1] ==
            iVar3 + ((int)((param_2 & 0xffffffff) << 4) - (int)((param_2 & 0xffffffff) << 2))))) {
      FUN_006247e0(piVar5);
      bVar1 = iVar4 == 0xff;
      piVar5 = piVar5 + 0x93;
      piVar6 = piVar6 + 0x93;
      iVar4 = iVar4 + 1;
      if (bVar1) {
        return;
      }
    }
    bVar1 = iVar4 != 0xff;
    piVar5 = piVar5 + 0x93;
    piVar6 = piVar6 + 0x93;
    iVar4 = iVar4 + 1;
  } while (bVar1);
  return;
}


// 0x060e810 (0x5b4 bytes)
void FUN_0060e810(int param_1,uint param_2,int param_3)

{
  bool bVar1;
  ushort uVar2;
  short sVar3;
  int *piVar4;
  uint uVar5;
  undefined1 *puVar6;
  int iVar7;
  undefined *puVar8;
  int iVar10;
  int iVar11;
  longlong lVar9;
  undefined1 uVar15;
  undefined4 uVar12;
  int iVar13;
  int iVar14;
  uint *puVar16;
  ulonglong uVar17;
  undefined1 *puVar18;
  int iVar19;
  ulonglong uVar20;
  int *piVar21;
  double dVar22;
  GPiece<88> auStack_f0;
  
  puVar8 = PTR_PTR_0071affc;
  iVar10 = FUN_0060dcd8(param_1);
  piVar21 = *(int **)(puVar8 + -0x7fc0);
  iVar19 = 0;
  puVar18 = (undefined1 *)(iVar10 + param_2 * 0x10 + (param_2 & 0x3fffffff) * -4);
  do {
    if ((((piVar21[-0x90] < 0) && (piVar21[-0x7b] != 0)) && (*piVar21 == param_1)) &&
       ((undefined1 *)piVar21[1] == puVar18)) {
      dVar22 = (double)FUN_0060fabc(*puVar18,0);
      iVar10 = FUN_0060fb74(*(undefined2 *)(puVar18 + 2));
      *(undefined1 *)(piVar21 + -0x8c) = puVar18[1];
      piVar21[-0x49] = (int)(float)dVar22;
      piVar21[-0x44] = iVar10;
      if (param_3 != -1) {
        iVar10 = FUN_0060dc04(param_1,puVar18);
        puVar16 = (uint *)(iVar10 + param_3 * 8);
        if ((*(char *)puVar16 == '\x01') || (*(char *)puVar16 == '-')) {
          iVar10 = iVar19 * 0x24c + *(int *)(puVar8 + -0x7fbc);
          iVar11 = FUN_0061a5b8(iVar10,0);
          if (iVar11 != -1) {
            piVar4 = *(int **)(puVar8 + -0x7fb8);
            do {
              iVar7 = iVar11 * 0x68;
              if (*(uint **)(iVar7 + *piVar4 + 100) == puVar16) {
                lVar9 = FUN_0060d938(param_1);
                iVar14 = iVar7 + *piVar4;
                uVar17 = lVar9 + ((ulonglong)*puVar16 & 0xffffff);
                uVar5 = *(uint *)(*(int *)(puVar8 + -0x7fb4) + (char)puVar18[1] * 4);
                puVar6 = (undefined1 *)uVar17;
                uVar2 = *(ushort *)(puVar6 + 0xe);
                *(uint *)(iVar14 + 0x18) =
                     (uVar5 & 1) << 5 | uVar2 >> 5 & 1 | (uint)(((ulonglong)uVar2 & 1 ^ 1) << 3) |
                     (uint)(((ulonglong)(uVar5 >> 2) & 1) << 6) |
                     (uint)(((ulonglong)(uVar2 >> 4) & 1) << 2) |
                     (uint)(((ulonglong)(uVar2 >> 9) & 1) << 4);
                *(int *)(iVar14 + 0x20) = (int)(char)puVar6[9] << 7;
                *(int *)(iVar14 + 0x24) = (int)(((longlong)(char)puVar6[8] & 0xffffffffU) << 7);
                uVar15 = FUN_00610bb4(iVar10,puVar6[1]);
                dVar22 = (double)FUN_0060fabc(uVar15,0);
                iVar13 = *piVar4;
                *(float *)(iVar14 + 0x30) = (float)dVar22;
                uVar12 = FUN_0061085c(iVar10,uVar17 & 0xffffffff);
                iVar14 = *piVar4;
                *(undefined4 *)(iVar7 + iVar13 + 0x38) = uVar12;
                dVar22 = (double)snd_NoteToSampleRate(puVar6[2],puVar6[3]);
                uVar2 = *(ushort *)(puVar6 + 0xe);
                iVar13 = *piVar4;
                *(float *)(iVar7 + iVar14 + 0x48) = (float)dVar22;
                if ((uVar2 & 0x4000) == 0) {
                  uVar12 = *(undefined4 *)(puVar8 + -0x7fb0);
                }
                else {
                  uVar12 = *(undefined4 *)(puVar6 + 0x18);
                }
                sVar3 = *(short *)(puVar6 + 0xe);
                iVar14 = *piVar4;
                *(undefined4 *)(iVar7 + iVar13 + 0x50) = uVar12;
                if (sVar3 < 0) {
                  uVar12 = *(undefined4 *)(puVar6 + 0x1c);
                }
                else {
                  uVar12 = *(undefined4 *)(puVar8 + -0x7fb0);
                }
                sVar3 = *(short *)(puVar6 + 0xe);
                iVar13 = *piVar4;
                *(undefined4 *)(iVar7 + iVar14 + 0x54) = uVar12;
                if (sVar3 < 0) {
                  uVar12 = *(undefined4 *)(puVar6 + 0x20);
                }
                else {
                  uVar12 = *(undefined4 *)(puVar8 + -0x7fb0);
                }
                iVar14 = *piVar4;
                uVar20 = 0;
                *(undefined4 *)(iVar7 + iVar13 + 0x58) = uVar12;
                *(undefined1 *)(iVar7 + iVar14 + 8) = *puVar6;
                iVar13 = *piVar4;
                dVar22 = (double)FUN_0060fa5c(uVar17 & 0xffffffff);
                uVar2 = *(ushort *)(puVar6 + 0xe);
                *(float *)(iVar7 + iVar13 + 0xc) = (float)dVar22;
                if ((uVar2 & 0x100) != 0) {
                  uVar20 = (longlong)((ulonglong)uVar2 << 0x31 | (ulonglong)(uVar2 >> 0xf)) >> 0x3f
                           & 4;
                  lVar9 = uVar20 + 0x20;
                  if (-1 < (short)uVar2) {
                    lVar9 = uVar20 + 0x18;
                  }
                  uVar20 = 0;
                  if ((int)(uVar17 + lVar9) != 0) {
                    uVar20 = uVar17 + lVar9 & 0xffffffff;
                    FUN_00620290(iVar11,uVar20,iVar10);
                  }
                }
                iVar13 = FUN_00610494(uVar20,4);
                iVar14 = FUN_00610494(uVar20,10);
                if (iVar14 == 0) {
                  if (iVar13 == 0) {
                    FUN_0060fec8(*(undefined2 *)(puVar6 + 10),*(undefined2 *)(puVar6 + 0xc),
                                 auStack_f0);
                  }
                  else {
                    FUN_00610224(iVar13,auStack_f0);
                  }
                }
                else {
                  FUN_006102b0(iVar14,auStack_f0);
                }
                FUN_006299b8(*(undefined4 *)(iVar7 + *piVar4 + 0x60),auStack_f0);
              }
              iVar11 = FUN_0061a5b8(iVar10,iVar11 + 1);
            } while (iVar11 != -1);
          }
        }
      }
      iVar10 = iVar19 * 0x24c + *(int *)(puVar8 + -0x7fbc);
      FUN_0061f128(iVar10);
      FUN_0061f114(iVar10);
      FUN_0061f100(iVar10);
      puVar16 = (uint *)piVar21[-5];
      if (puVar16 != (uint *)0x0) {
        piVar4 = *(int **)(puVar8 + -0x7fa8);
        do {
          if ((*puVar16 >> 0x18 & 0x1f) == 4) {
            (*(code *)**(undefined4 **)(*piVar4 + 4))(*puVar16,iVar10,puVar18);
          }
          puVar16 = (uint *)puVar16[0x8c];
        } while (puVar16 != (uint *)0x0);
      }
    }
    bVar1 = iVar19 != 0xff;
    piVar21 = piVar21 + 0x93;
    iVar19 = iVar19 + 1;
  } while (bVar1);
  return;
}


// 0x060edc4 (0x1f0 bytes)
void FUN_0060edc4(int param_1,uint param_2,int param_3)

{
  undefined *puVar1;
  ulonglong uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  bool bVar6;
  int iVar7;
  byte in_cr0;
  byte in_cr1;
  byte in_cr2;
  byte in_cr3;
  byte unaff_cr4;
  byte in_cr5;
  byte in_cr6;
  byte in_cr7;
  longlong lVar8;
  uint uStack00000008;
  
  puVar1 = PTR_PTR_0071affc;
  uStack00000008 =
       (uint)(in_cr0 & 0xf) << 0x1c | (uint)(in_cr1 & 0xf) << 0x18 | (uint)(in_cr2 & 0xf) << 0x14 |
       (uint)(in_cr3 & 0xf) << 0x10 | (uint)(unaff_cr4 & 0xf) << 0xc | (uint)(in_cr5 & 0xf) << 8 |
       (uint)(in_cr6 & 0xf) << 4 | (uint)(in_cr7 & 0xf);
  if (param_3 == 0) {
    iVar3 = FUN_0060dcd8(param_1);
    iVar7 = param_2 * 0x10 + (param_2 & 0x3fffffff) * -4;
    if ((*(ushort *)(iVar3 + iVar7 + 6) & 0x4000) == 0) {
      return;
    }
    iVar3 = FUN_0060dcd8(param_1);
    uVar2 = (ulonglong)*(ushort *)(iVar7 + iVar3 + 6);
    *(ushort *)(iVar7 + iVar3 + 6) =
         (ushort)(((uVar2 << 0x20) >> 0x2f) << 0xf) |
         (ushort)(((uVar2 & 0x3fff) << 0x11) >> 0x10) >> 1;
    FUN_0061cff0();
  }
  else {
    iVar3 = FUN_0060dcd8(param_1);
    iVar7 = param_2 * 0x10 + (param_2 & 0x3fffffff) * -4;
    if ((*(ushort *)(iVar3 + iVar7 + 6) & 0x4000) != 0) {
      return;
    }
    iVar3 = FUN_0060dcd8(param_1);
    *(ushort *)(iVar7 + iVar3 + 6) = *(ushort *)(iVar7 + iVar3 + 6) | 0x4000;
    FUN_0061cfd0();
  }
  iVar3 = FUN_0060dcd8(param_1);
  bVar6 = false;
  lVar8 = 0x100;
  piVar4 = *(int **)(puVar1 + -0x7fbc) + 0x90;
  piVar5 = *(int **)(puVar1 + -0x7fbc);
  do {
    while ((((-1 < *piVar5 || (piVar5[0x15] == 0)) || (*piVar4 != param_1)) ||
           ((piVar4[1] != iVar7 + iVar3 && (piVar5[0x15] != iVar7 + iVar3))))) {
LAB_0060eed0:
      piVar5 = piVar5 + 0x93;
      piVar4 = piVar4 + 0x93;
      lVar8 = lVar8 + -1;
      if (lVar8 == 0) goto LAB_0060ef3c;
    }
    bVar6 = true;
    if (param_3 == 0) {
      bVar6 = true;
      uVar2 = ((ulonglong)(uint)piVar5[1] & 0xfffff) << 0xb | (ulonglong)((uint)piVar5[1] >> 0x15);
      piVar5[1] = (uint)(uVar2 << 0x15) | (uint)uVar2 >> 0xb;
      goto LAB_0060eed0;
    }
    piVar4 = piVar4 + 0x93;
    piVar5[1] = piVar5[1] | 0x100000;
    lVar8 = lVar8 + -1;
    piVar5 = piVar5 + 0x93;
  } while (lVar8 != 0);
LAB_0060ef3c:
  if (!bVar6) {
    return;
  }
  FUN_0061ceac();
  return;
}


// 0x060efb4 (0x174 bytes)
undefined4 FUN_0060efb4(int param_1,int param_2)

{
  bool bVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (0 < *(short *)(param_1 + 0x16)) {
    bVar1 = false;
    iVar4 = 0;
    iVar5 = 0;
    do {
      while( true ) {
        iVar4 = iVar4 + 1;
        iVar3 = FUN_0060dcd8(param_1);
        if ((*(ushort *)(iVar3 + iVar5 + 6) & 0x2000) == 0) break;
        iVar3 = FUN_0060dcd8(param_1);
        bVar1 = true;
        iVar3 = iVar3 + iVar5;
        iVar5 = iVar5 + 0xc;
        uVar2 = (ulonglong)*(ushort *)(iVar3 + 6);
        *(ushort *)(iVar3 + 6) =
             (ushort)(((uVar2 << 0x20) >> 0x2e) << 0xe) |
             (ushort)(((uVar2 & 0x1fff) << 0x12) >> 0x10) >> 2;
        FUN_0061cfa8();
        if (*(short *)(param_1 + 0x16) <= iVar4) goto LAB_0060f07c;
      }
      iVar5 = iVar5 + 0xc;
    } while (iVar4 < *(short *)(param_1 + 0x16));
LAB_0060f07c:
    if (bVar1) {
      if (param_2 == 0) {
        return 1;
      }
      FUN_0061ceac();
      return 1;
    }
  }
  return 0;
}


// 0x060f128 (0x88 bytes)
void FUN_0060f128(void)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = **(int **)(PTR_PTR_0071affc + -0x7fa4);
  if (iVar3 != 0) {
    bVar1 = false;
    do {
      iVar2 = FUN_0060efb4(iVar3,0);
      if (iVar2 != 0) {
        bVar1 = true;
      }
      iVar3 = FUN_0060d6f4(iVar3);
    } while (iVar3 != 0);
    if (bVar1) {
      FUN_0061ceac();
    }
  }
  return;
}


// 0x060f1b0 (0x1dc bytes)
void FUN_0060f1b0(int param_1,uint param_2,int param_3)

{
  undefined *puVar1;
  ulonglong uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  byte in_cr0;
  byte in_cr1;
  byte in_cr2;
  byte in_cr3;
  byte unaff_cr4;
  byte in_cr5;
  byte in_cr6;
  byte in_cr7;
  longlong lVar7;
  uint uStack00000008;
  
  puVar1 = PTR_PTR_0071affc;
  uStack00000008 =
       (uint)(in_cr0 & 0xf) << 0x1c | (uint)(in_cr1 & 0xf) << 0x18 | (uint)(in_cr2 & 0xf) << 0x14 |
       (uint)(in_cr3 & 0xf) << 0x10 | (uint)(unaff_cr4 & 0xf) << 0xc | (uint)(in_cr5 & 0xf) << 8 |
       (uint)(in_cr6 & 0xf) << 4 | (uint)(in_cr7 & 0xf);
  if (param_3 == 0) {
    iVar3 = FUN_0060dcd8(param_1);
    iVar6 = param_2 * 0x10 + (param_2 & 0x3fffffff) * -4;
    if ((*(ushort *)(iVar3 + iVar6 + 6) & 0x2000) != 0) {
      iVar3 = FUN_0060dcd8(param_1);
      uVar2 = (ulonglong)*(ushort *)(iVar6 + iVar3 + 6);
      *(ushort *)(iVar6 + iVar3 + 6) =
           (ushort)(((uVar2 << 0x20) >> 0x2e) << 0xe) |
           (ushort)(((uVar2 & 0x1fff) << 0x12) >> 0x10) >> 2;
      FUN_0061cfa8();
      goto LAB_0060f298;
    }
  }
  else {
    iVar3 = FUN_0060dcd8(param_1);
    iVar6 = param_2 * 0x10 + (param_2 & 0x3fffffff) * -4;
    if ((*(ushort *)(iVar3 + iVar6 + 6) & 0x2000) == 0) {
      iVar3 = FUN_0060dcd8(param_1);
      *(ushort *)(iVar6 + iVar3 + 6) = *(ushort *)(iVar6 + iVar3 + 6) | 0x2000;
      FUN_0061cf88();
LAB_0060f298:
      iVar3 = FUN_0060dcd8(param_1);
      piVar5 = *(int **)(puVar1 + -0x7fbc);
      piVar4 = piVar5 + 0x90;
      lVar7 = 0x100;
      do {
        if ((((*piVar5 < 0) && (piVar5[0x15] != 0)) && (*piVar4 == param_1)) &&
           ((piVar4[1] == iVar3 + iVar6 || (piVar5[0x15] == iVar3 + iVar6)))) {
          if (param_3 == 0) {
            uVar2 = ((ulonglong)(uint)piVar5[1] & 0x7ffff) << 0xc |
                    (ulonglong)((uint)piVar5[1] >> 0x14);
            piVar5[1] = (uint)(uVar2 << 0x14) | (uint)uVar2 >> 0xc;
          }
          else {
            piVar5[1] = piVar5[1] | 0x80000;
          }
        }
        piVar4 = piVar4 + 0x93;
        piVar5 = piVar5 + 0x93;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
      FUN_0061ceac();
      return;
    }
  }
  return;
}


// 0x060f38c (0x240 bytes)
// strings: 0066aa00: '%s(%d) : Invalid parameter.\n' | 0066a9b8: 'common/blocksnd.cpp'

uint FUN_0060f38c(int param_1,int param_2,undefined4 *param_3)

{
  ushort uVar1;
  undefined *puVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  
  puVar2 = PTR_PTR_0071affc;
  if ((param_1 == 0) || (param_3 == (undefined4 *)0x0)) {
    snd_Printf((char)*(undefined4 *)(PTR_PTR_0071affc + -0x7ff4));
    if (**(char **)(puVar2 + -0x7ff0) != '\0') {
      return 0;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar2 + -0x7fec),0);
    if (param_3 == (undefined4 *)0x0) goto LAB_0060f3e0;
  }
  *param_3 = 0;
LAB_0060f3e0:
  if (((*(ushort *)(param_1 + 6) & 0x38) == 0) || (*(char *)(param_1 + 5) == '\0')) {
    return 0;
  }
  snd_SynthLock();
  pbVar5 = (byte *)0x0;
  pbVar3 = (byte *)FUN_00619848();
  iVar4 = 0;
  if (pbVar3 != (byte *)0x0) {
    iVar4 = 0;
    pbVar5 = (byte *)0x0;
    do {
      if ((((*pbVar3 & 0x1f) == 5) &&
          (((param_2 != 0 && (*(int *)(pbVar3 + 0x244) == param_1)) ||
           (*(int *)(pbVar3 + 0x54) == param_1)))) && ((*(uint *)(pbVar3 + 4) & 0x80) == 0)) {
        uVar1 = *(ushort *)(param_1 + 6);
        iVar4 = iVar4 + 1;
        if (((uVar1 & 0x30) != 0) &&
           (((pbVar5 == (byte *)0x0 ||
             (((uVar1 & 0x10) != 0 &&
              (*(float *)(pbVar3 + 0x120) * *(float *)(pbVar3 + 0x128) * *(float *)(pbVar3 + 0x1d0)
               < *(float *)(pbVar5 + 0x120) * *(float *)(pbVar5 + 0x128) *
                 *(float *)(pbVar5 + 0x1d0))))) ||
            (((uVar1 & 0x20) != 0 && (*(uint *)(pbVar3 + 0xc) < *(uint *)(pbVar5 + 0xc))))))) {
          pbVar5 = pbVar3;
        }
      }
      pbVar3 = *(byte **)(pbVar3 + 0x224);
    } while (pbVar3 != (byte *)0x0);
  }
  if (*(char *)(param_1 + 5) <= iVar4) {
    if (pbVar5 != (byte *)0x0) {
      *param_3 = pbVar5;
    }
    snd_SynthUnlock();
    return ((int)pbVar5 >> 0x1f) - ((int)pbVar5 >> 0x1f ^ (uint)pbVar5) >> 0x1f;
  }
  snd_SynthUnlock();
  return 1;
}


// 0x060f5cc (0x15c bytes)
// strings: 0066aa00: '%s(%d) : Invalid parameter.\n' | 0066a9b8: 'common/blocksnd.cpp'

int FUN_0060f5cc(undefined8 param_1,int param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined4 in_r8;
  int local_50 [4];
  
  puVar1 = PTR_PTR_0071affc;
  if (param_2 == 0) {
    snd_Printf((char)*(undefined4 *)(PTR_PTR_0071affc + -0x7ff4));
    if (**(char **)(puVar1 + -0x7ff0) == '\0') {
      trapWord(0x18,(ulonglong)**(byte **)(puVar1 + -0x7fec),0);
      goto LAB_0060f620;
    }
LAB_0060f6ec:
    iVar2 = 0;
  }
  else {
LAB_0060f620:
    if ((*(ushort *)(param_2 + 6) & 8) != 0) {
      iVar2 = FUN_0060f38c(param_2,in_r8,local_50);
      if (iVar2 == 0) goto LAB_0060f6ec;
      if (local_50[0] != 0) {
        FUN_0061b86c(local_50[0],1,0,1);
      }
    }
    iVar2 = FUN_0061c280(param_1,*(undefined4 *)(puVar1 + -0x7fbc),0x100,5,0x24c,param_2);
    if (iVar2 != 0) {
      *(undefined2 *)(iVar2 + 0x23e) = 0;
    }
  }
  return iVar2;
}


// 0x060f728 (0x334 bytes)
// strings: 0066aa00: '%s(%d) : Invalid parameter.\n' | 0066a9b8: 'common/blocksnd.cpp' | 0065fe90: 'Unknown' | 0066aaa8: '%s(%d) : Attempt to play sound with no grains. (Bank: "%s", Sound: "%s")\n'

undefined4
FUN_0060f728(double param_1,int param_2,uint param_3,undefined8 param_4,undefined8 param_5,
            uint param_6,int param_7,undefined4 param_8)

{
  ushort uVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  GPiece<16> local_100;
  GPiece<8> local_f0;
  GPiece<120> auStack_e8;
  
  puVar2 = PTR_PTR_0071affc;
  if ((((param_2 == 0) || ((int)param_3 < 0)) || ((int)*(short *)(param_2 + 0x16) <= (int)param_3))
     || ((((double)*(float *)(PTR_PTR_0071affc + -0x7fb0) < param_1 ||
          (param_1 < (double)*(float *)(PTR_PTR_0071affc + -0x7f9c))) ||
         ((0x167 < param_6 || (param_7 == 0)))))) {
    snd_Printf((char)*(undefined4 *)(PTR_PTR_0071affc + -0x7ff4));
    if (**(char **)(puVar2 + -0x7ff0) != '\0') {
      return 0;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar2 + -0x7fec),0);
  }
  iVar3 = FUN_0060dcd8(param_2);
  iVar3 = iVar3 + param_3 * 0x10 + (param_3 & 0x3fffffff) * -4;
  if (*(char *)(iVar3 + 4) == '\0') {
    memset(auStack_e8,0,0x78);
    if ((*(uint *)(param_2 + 8) & 0x100) != 0) {
      uVar6 = FUN_0060d824(param_2);
      FUN_005cd198(local_100,8,*(undefined4 *)(puVar2 + -0x7fd0),uVar6);
    }
    FUN_00609b44(param_2,(short)param_3,local_f0);
    snd_Printf((char)*(undefined4 *)(puVar2 + -0x7fa0));
  }
  else {
    snd_SynthLock();
    if ((*(uint *)(param_2 + 8) & 0x400) == 0) {
      if ((*(ushort *)(iVar3 + 6) & 2) != 0) {
        FUN_0061bfb0(iVar3,0,1);
      }
      puVar4 = (undefined4 *)FUN_0060f5cc(param_1,iVar3);
      if (puVar4 != (undefined4 *)0x0) {
        FUN_0061c628(puVar4,param_7);
        iVar5 = FUN_0060dc04(param_2,iVar3);
        *(undefined2 *)((int)puVar4 + 0x236) = 0;
        uVar6 = *(undefined4 *)(iVar5 + 4);
        *(undefined2 *)(puVar4 + 0x8e) = 0;
        *(undefined2 *)((int)puVar4 + 0x23a) = 0;
        *(short *)(puVar4 + 0x8d) = (short)uVar6 + 1;
        *(undefined2 *)(puVar4 + 0x8f) = 0;
        uVar1 = *(ushort *)(iVar3 + 6);
        puVar4[0x90] = param_2;
        puVar4[0x91] = iVar3;
        puVar4[0x92] = 0;
        if ((uVar1 & 0x2000) != 0) {
          puVar4[1] = puVar4[1] | 0x80000;
        }
        if ((uVar1 & 0x4000) != 0) {
          puVar4[1] = puVar4[1] | 0x100000;
        }
        puVar4[0x87] = param_8;
        FUN_0061aa54(puVar4);
        uVar6 = *puVar4;
        snd_SynthUnlock();
        return uVar6;
      }
    }
    snd_SynthUnlock();
  }
  return 0;
}


// 0x060fa5c (0x60 bytes)
double FUN_0060fa5c(int param_1)

{
  ushort uVar1;
  
  if (param_1 != 0) {
    uVar1 = *(ushort *)(param_1 + 0xe) >> 1 & 3;
    if (uVar1 == 2) {
      return (double)*(float *)(PTR_PTR_0071b000 + -0x7ff0);
    }
    if (uVar1 == 3) {
      return (double)*(float *)(PTR_PTR_0071b000 + -0x8000);
    }
    if (uVar1 == 1) {
      return (double)*(float *)(PTR_PTR_0071b000 + -0x7ff8);
    }
  }
  return (double)*(float *)(PTR_PTR_0071b000 + -0x7fe8);
}


// 0x060fabc (0xb8 bytes)
double FUN_0060fabc(longlong param_1,char param_2)

{
  float fVar1;
  float fVar2;
  
  fVar2 = (float)param_1;
  if ((int)fVar2 < 0) {
    fVar2 = *(float *)(PTR_PTR_0071b000 + -0x7fe8);
  }
  else {
    fVar1 = *(float *)(PTR_PTR_0071b000 + -0x7fe0);
    if (fVar1 < fVar2) goto joined_r0x0060fb30;
  }
  fVar1 = fVar2;
joined_r0x0060fb30:
  if (param_2 == '\x02') {
    return (double)((fVar1 * fVar1) / *(float *)(PTR_PTR_0071b000 + -0x7fd8));
  }
  if (param_2 != '\x01') {
    return (double)(fVar1 / *(float *)(PTR_PTR_0071b000 + -0x7fe0));
  }
  return (double)(((*(float *)(PTR_PTR_0071b000 + -0x7fe0) - fVar1) *
                  (*(float *)(PTR_PTR_0071b000 + -0x7fe0) - fVar1)) /
                  *(float *)(PTR_PTR_0071b000 + -0x7fd0) + *(float *)(PTR_PTR_0071b000 + -0x8000));
}


// 0x060fb74 (0x40 bytes)
short FUN_0060fb74(int param_1)

{
  short sVar1;
  
  sVar1 = (short)param_1 +
          ((short)((ulonglong)((longlong)param_1 * 0xb60b60b7) >> 0x28) - (short)(param_1 >> 0x1f))
          * -0x168;
  if (sVar1 < 0) {
    sVar1 = sVar1 + 0x168;
  }
  return sVar1;
}


// 0x060fbb4 (0x218 bytes)
double snd_NoteToSampleRate(char param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar4 = (ulonglong)param_2 - 0x7f;
  lVar3 = 0x3c;
  if ((int)uVar4 < 0) {
    uVar6 = (~uVar4 & 0xffffffff) * 0x2040811 >> 0x20;
    lVar5 = ((((~uVar4 - uVar6 << 0x20) >> 0x21) + uVar6 << 0x20) >> 0x26) + 1;
    if (0x7e < (int)param_2) {
      lVar5 = 1;
    }
    do {
      lVar3 = lVar3 + -1;
      uVar4 = uVar4 + 0x7f;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  uVar4 = uVar4 & 0x7f;
  lVar3 = lVar3 - (((longlong)((int)param_1 >> 0x1f) ^ (longlong)param_1) -
                  (longlong)((int)param_1 >> 0x1f));
  iVar2 = (int)lVar3;
  iVar1 = iVar2 >> 0x1f;
  if (iVar2 < 0) {
    uVar7 = (longlong)iVar1 - (longlong)(iVar2 / 0xc + iVar1);
    uVar6 = lVar3 + (uVar7 & 0xfffffff) * 0x10 + (uVar7 & 0x3fffffff) * -4;
    if ((int)uVar6 == 0) {
      iVar1 = ((0x1000 >> ((uint)uVar7 & 0x3f)) *
               *(int *)(*(int *)(PTR_PTR_0071b000 + -0x7fc8) + (int)((uVar6 & 0xffffffff) << 2)) >>
              0xf) * *(int *)(*(int *)(PTR_PTR_0071b000 + -0x7fc4) + (int)(uVar4 << 2));
    }
    else {
      iVar1 = ((0x1000 >> ((uint)uVar7 + 1 & 0x3f)) *
               *(int *)(*(int *)(PTR_PTR_0071b000 + -0x7fc8) +
                       (int)((uVar6 + 0xc & 0xffffffff) << 2)) >> 0xf) *
              *(int *)(*(int *)(PTR_PTR_0071b000 + -0x7fc4) + (int)(uVar4 << 2));
    }
    return (double)((float)(longlong)(iVar1 >> 0xf) * *(float *)(PTR_PTR_0071b000 + -0x7fc0) *
                    *(float *)(PTR_PTR_0071b000 + -0x7fb8) * *(float *)(PTR_PTR_0071b000 + -0x7fb0)
                   * *(float *)(PTR_PTR_0071b000 + -0x7fa8));
  }
  uVar6 = (longlong)(iVar2 / 0xc + iVar1) - (longlong)iVar1;
  return (double)((float)(longlong)
                         (((0x1000 << ((uint)uVar6 & 0x3f)) *
                           *(int *)(*(int *)(PTR_PTR_0071b000 + -0x7fc8) +
                                   (int)((lVar3 - ((uVar6 & 0xfffffff) * 0x10 +
                                                  (uVar6 & 0x3fffffff) * -4) & 0xffffffff) << 2)) >>
                          0xf) * *(int *)(*(int *)(PTR_PTR_0071b000 + -0x7fc4) + (int)(uVar4 << 2))
                         >> 0xf) * *(float *)(PTR_PTR_0071b000 + -0x7fc0) *
                  *(float *)(PTR_PTR_0071b000 + -0x7fb8) * *(float *)(PTR_PTR_0071b000 + -0x7fb0) *
                 *(float *)(PTR_PTR_0071b000 + -0x7fa8));
}


// 0x060fdcc (0x3c bytes)
undefined8 FUN_0060fdcc(int param_1)

{
  undefined8 uVar1;
  
  uVar1 = 1;
  if ((param_1 != 0x8000) && (uVar1 = 0, param_1 == 0xc000)) {
    return 2;
  }
  return uVar1;
}


// 0x060fe08 (0xc0 bytes)
double FUN_0060fe08(uint param_1,int param_2)

{
  float fVar1;
  
  if (param_1 == 0x4000) {
    return (double)(*(float *)(*(int *)(PTR_PTR_0071b000 + -0x7f90) + param_2 * 4) *
                   *(float *)(PTR_PTR_0071b000 + -0x7f9c));
  }
  if (param_1 < 0x4001) {
    if (param_1 == 0) {
      return (double)(*(float *)(*(int *)(PTR_PTR_0071b000 + -0x7f8c) + param_2 * 4) *
                     *(float *)(PTR_PTR_0071b000 + -0x7f9c));
    }
  }
  else {
    if (param_1 == 0x8000) {
      return (double)(*(float *)(*(int *)(PTR_PTR_0071b000 + -0x7f94) + param_2 * 4) *
                     *(float *)(PTR_PTR_0071b000 + -0x7f9c));
    }
    if (param_1 == 0xc000) {
      fVar1 = *(float *)(*(int *)(PTR_PTR_0071b000 + -0x7fa0) + param_2 * 4) *
              *(float *)(PTR_PTR_0071b000 + -0x7f9c);
      goto LAB_0060fe3c;
    }
  }
  fVar1 = *(float *)(PTR_PTR_0071b000 + -0x7fe8);
LAB_0060fe3c:
  return (double)fVar1;
}


// 0x060fec8 (0x35c bytes)
void FUN_0060fec8(ulonglong param_1,ulonglong param_2,float *param_3)

{
  float fVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined *puVar4;
  float fVar5;
  ulonglong uVar6;
  uint uVar7;
  int iVar8;
  double dVar9;
  double dVar10;
  
  puVar4 = PTR_PTR_0071b000;
  uVar7 = (uint)param_1 & 0xf;
  uVar3 = param_2 & 0xe000;
  uVar6 = (param_1 & 0xffff) >> 8 & 0x7f;
  uVar2 = (uint)(param_2 >> 6) & 0x7f;
  if ((short)param_1 < 0) {
    iVar8 = *(int *)(PTR_PTR_0071b000 + -0x7f94);
    dVar10 = (double)*(float *)(PTR_PTR_0071b000 + -0x7f9c);
    param_3[1] = 1.4013e-45;
    dVar9 = (double)*(float *)(iVar8 + (int)(uVar6 << 2)) * dVar10;
  }
  else {
    iVar8 = *(int *)(PTR_PTR_0071b000 + -0x7f90);
    dVar10 = (double)*(float *)(PTR_PTR_0071b000 + -0x7f9c);
    param_3[1] = 0.0;
    dVar9 = (double)*(float *)(iVar8 + (int)(uVar6 << 2) + 4) * dVar10;
  }
  *param_3 = (float)dVar9;
  param_3[3] = 2.8026e-45;
  fVar5 = (float)FUN_0060fdcc(param_2 & 0xffff);
  param_3[7] = fVar5;
  iVar8 = (int)uVar3;
  if (uVar7 < 0xf) {
    uVar6 = (param_1 & 0xffff) >> 4 & 0xf;
    if ((iVar8 == 0x8000) || (iVar8 == 0)) {
      fVar5 = *(float *)(puVar4 + -0x7f88);
      fVar1 = *(float *)(*(int *)(puVar4 + -0x7f80) + (int)(uVar6 << 2));
      param_3[5] = *(float *)(puVar4 + -0x8000);
      param_3[2] = (float)((double)fVar1 * dVar10);
      param_3[4] = (float)(longlong)(int)(uVar7 + 1) * fVar5;
      dVar9 = (double)FUN_0060fe08(uVar3,uVar2);
      param_3[6] = (float)dVar9;
      *(undefined1 *)(param_3 + 8) = 1;
    }
    else if (uVar2 < 0x7f) {
      fVar5 = *(float *)(puVar4 + -0x7f88);
      fVar1 = *(float *)(*(int *)(puVar4 + -0x7f80) + (int)(uVar6 << 2));
      param_3[5] = 0.0;
      param_3[2] = (float)((double)fVar1 * dVar10);
      param_3[4] = (float)(longlong)(int)(uVar7 + 1) * fVar5;
      dVar9 = (double)FUN_0060fe08(uVar3,uVar2);
      param_3[6] = (float)dVar9;
      *(undefined1 *)(param_3 + 8) = 0;
    }
    else {
      fVar5 = *(float *)(puVar4 + -0x7f88);
      fVar1 = *(float *)(*(int *)(puVar4 + -0x7f80) + (int)(uVar6 << 2));
      param_3[6] = *(float *)(puVar4 + -0x8000);
      *(undefined1 *)(param_3 + 8) = 1;
      param_3[2] = (float)((double)fVar1 * dVar10);
      fVar5 = (float)(longlong)(int)(uVar7 + 1) * fVar5;
      param_3[5] = fVar5;
      param_3[4] = fVar5;
    }
  }
  else if ((iVar8 == 0x8000) || (iVar8 == 0)) {
    fVar5 = *(float *)(puVar4 + -0x8000);
    param_3[6] = fVar5;
    param_3[2] = 0.0;
    param_3[4] = fVar5;
    param_3[5] = fVar5;
    *(undefined1 *)(param_3 + 8) = 1;
  }
  else if (uVar2 < 0x7f) {
    dVar9 = (double)FUN_0060fe08(uVar3,uVar2);
    param_3[2] = (float)dVar9;
    fVar5 = (float)FUN_0060fdcc(uVar3);
    param_3[3] = fVar5;
    param_3[6] = 0.0;
    *(undefined1 *)(param_3 + 8) = 0;
    param_3[4] = 0.0;
    param_3[5] = 0.0;
  }
  else {
    fVar5 = *(float *)(puVar4 + -0x7f88);
    fVar1 = *(float *)(puVar4 + -0x8000);
    param_3[6] = fVar1;
    param_3[2] = 0.0;
    param_3[5] = fVar1;
    *(undefined1 *)(param_3 + 8) = 1;
    param_3[4] = (float)(longlong)(int)(uVar7 + 1) * fVar5;
  }
  if ((param_2 & 0x20) == 0) {
    iVar8 = *(int *)(puVar4 + -0x7f90);
    param_3[10] = (float)((uint)param_2 & 0x20);
    param_3[9] = (float)((double)*(float *)(iVar8 + (int)((param_2 & 0x1f) << 4)) * dVar10);
    return;
  }
  iVar8 = *(int *)(puVar4 + -0x7fa0);
  param_3[10] = 2.8026e-45;
  param_3[9] = (float)((double)*(float *)(iVar8 + (int)((param_2 & 0x1f) << 4)) * dVar10);
  return;
}


// 0x0610224 (0x8c bytes)
void FUN_00610224(int param_1,undefined4 *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined *puVar6;
  
  *param_2 = *(undefined4 *)(param_1 + 8);
  puVar6 = PTR_PTR_0071b000;
  param_2[2] = *(undefined4 *)(param_1 + 0x10);
  fVar1 = *(float *)(param_1 + 0x18);
  uVar4 = *(undefined4 *)(param_1 + 0xc);
  param_2[4] = fVar1;
  fVar2 = *(float *)(puVar6 + -0x7f7c);
  fVar3 = *(float *)(param_1 + 0x1c);
  param_2[1] = uVar4;
  param_2[3] = *(undefined4 *)(param_1 + 0x14);
  if (fVar3 == fVar2) {
    fVar3 = *(float *)(puVar6 + -0x8000);
    param_2[5] = fVar1;
  }
  else {
    param_2[5] = 0;
  }
  uVar4 = *(undefined4 *)(param_1 + 0x20);
  param_2[6] = fVar3;
  param_2[7] = uVar4;
  uVar4 = *(undefined4 *)(param_1 + 0x24);
  uVar5 = *(undefined4 *)(param_1 + 0x28);
  *(bool *)(param_2 + 8) = fVar1 == fVar2;
  param_2[9] = uVar4;
  param_2[10] = uVar5;
  return;
}


// 0x06102b0 (0x6c bytes)
void FUN_006102b0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar1 = *(undefined4 *)(param_1 + 8);
  param_2[1] = *(undefined4 *)(param_1 + 0xc);
  uVar2 = *(undefined4 *)(param_1 + 0x14);
  *param_2 = uVar1;
  param_2[3] = uVar2;
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  param_2[7] = *(undefined4 *)(param_1 + 0x24);
  uVar3 = *(uint *)(param_1 + 0x28);
  param_2[2] = uVar1;
  uVar4 = (ulonglong)((int)uVar3 >> 0x1f);
  param_2[4] = *(undefined4 *)(param_1 + 0x18);
  param_2[6] = *(undefined4 *)(param_1 + 0x20);
  param_2[5] = *(undefined4 *)(param_1 + 0x1c);
  uVar1 = *(undefined4 *)(param_1 + 0x30);
  param_2[9] = *(undefined4 *)(param_1 + 0x2c);
  *(byte *)(param_2 + 8) = (byte)(uVar4 - (uVar4 ^ uVar3) >> 0x18) >> 7;
  param_2[10] = uVar1;
  return;
}


// 0x061031c (0x178 bytes)
void FUN_0061031c(int param_1,uint param_2,int param_3,uint *param_4,int *param_5,uint *param_6)

{
  byte bVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  
  if (param_3 == -0x80000000) {
    piVar2 = (int *)*param_4;
    piVar5 = piVar2 + 4;
    *param_4 = (uint)piVar5;
    if (param_1 != 0) {
      iVar4 = *piVar2;
      *param_5 = piVar2[1] << 1;
      *param_6 = (int)piVar5 + iVar4 * 2;
      return;
    }
    if (param_2 != 0) {
      iVar4 = *param_5;
      *param_6 = (uint)piVar5;
      *param_5 = iVar4 + -0x10;
      return;
    }
  }
  else {
    if (param_3 != -0x7fffffff) {
      if (param_3 != -0x7ffffffe) {
        return;
      }
      if ((param_1 == 0) && (param_2 == 0)) {
        *param_6 = 0;
        return;
      }
      *param_6 = 1;
      return;
    }
    if (param_1 != 0) {
      uVar3 = *param_4;
      uVar6 = uVar3 + *param_5;
      if (*(int *)(uVar6 - 0x10) == -1) {
        uVar6 = *(uint *)(uVar6 - 0xc);
        *param_5 = *param_5 + -0x10;
        *param_6 = uVar3 + (int)((ulonglong)(uVar6 >> 2) / 7 << 4);
        return;
      }
      if (uVar3 < uVar6) {
        bVar1 = *(byte *)(uVar3 + 1);
        while ((bVar1 & 6) != 6) {
          if (uVar6 <= uVar3 + 0x10) goto LAB_006103f0;
          bVar1 = *(byte *)(uVar3 + 0x11);
          uVar3 = uVar3 + 0x10;
        }
        *param_6 = uVar3;
      }
LAB_006103f0:
      *param_6 = 0;
      return;
    }
    if (param_2 != 0) {
      iVar4 = *param_5;
      *param_6 = *param_4;
      *param_5 = iVar4 + -0x10;
      return;
    }
  }
  iVar4 = *param_5;
  *param_6 = param_2;
  *param_5 = iVar4 + -0x10;
  return;
}


// 0x0610494 (0x54 bytes)
int * FUN_00610494(int *param_1,int param_2)

{
  if (param_1 != (int *)0x0) {
    if (*param_1 != 0) {
      if (*param_1 == param_2) {
        return param_1;
      }
      while( true ) {
        param_1 = (int *)((int)param_1 + param_1[1]);
        if (*param_1 == 0) break;
        if (*param_1 == param_2) {
          return param_1;
        }
      }
    }
  }
  return (int *)0x0;
}


// 0x06104e8 (0x26c bytes)
// strings: 0066b378: 'common/grains.cpp' | 0066b390: '%s(%d) : Invalid next grain index in handler.\n' | 0066b3c0: '%s(%d) : Invalid Opcode type of %x.\n' | 0066b348: '%s(%d) : Invalid Sound pointer in handler.\n'

uint FUN_006104e8(int param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  char asdf;
  short sVar6;
  
  puVar3 = PTR_PTR_0071b000;
  iVar5 = *(int *)(param_1 + 0x54);
  if (iVar5 == 0) {
    asdf = (char)*(undefined4 *)(PTR_PTR_0071b000 + -0x7f74);
  }
  else {
    if (*(short *)(param_1 + 0x236) < (short)(ushort)*(byte *)(iVar5 + 4)) {
      iVar4 = FUN_0060dc04(*(undefined4 *)(param_1 + 0x240),iVar5);
      bVar1 = *(byte *)(iVar4 + (int)(((longlong)*(short *)(param_1 + 0x236) & 0xffffffffU) << 3));
      if (0x33 < bVar1) {
        snd_Printf((char)*(undefined4 *)(puVar3 + -0x7f68));
        return 1;
      }
      puVar2 = *(undefined4 **)(*(int *)(puVar3 + -0x7f64) + (uint)bVar1 * 4);
      if (puVar2 == (undefined4 *)0x0) {
        snd_Printf((char)*(undefined4 *)(puVar3 + -0x7f68));
        return 1;
      }
      iVar4 = (*(code *)*puVar2)(param_1,iVar5);
      if (-1 < iVar4) {
        if ((*(short *)(param_1 + 0x238) == 0) ||
           (sVar6 = *(short *)(param_1 + 0x23a) + -1, *(short *)(param_1 + 0x23a) = sVar6,
           sVar6 != 0)) {
          sVar6 = *(short *)(param_1 + 0x236);
        }
        else {
          *(undefined2 *)(param_1 + 0x238) = 0;
          sVar6 = *(short *)(param_1 + 0x236) + *(short *)(param_1 + 0x23c);
          *(short *)(param_1 + 0x236) = sVar6;
        }
        *(short *)(param_1 + 0x236) = sVar6 + 1;
        if ((int)(*(byte *)(iVar5 + 4) - 1) < (int)(short)(sVar6 + 1)) {
          *(undefined2 *)(param_1 + 0x236) = 0xffff;
          iVar5 = FUN_00619860(param_1);
          if (iVar5 != 0) {
            return 0;
          }
          return (*(undefined4 *)(param_1 + 0x22c) == 0);
        }
        iVar5 = FUN_0060dc04(*(undefined4 *)(param_1 + 0x240),iVar5);
        *(short *)(param_1 + 0x234) =
             (short)*(undefined4 *)(*(short *)(param_1 + 0x236) * 8 + iVar5 + 4) + (short)iVar4;
        return 0;
      }
      goto LAB_0061061c;
    }
    asdf = (char)*(undefined4 *)(PTR_PTR_0071b000 + -0x7f6c);
  }
  snd_Printf(asdf);
LAB_0061061c:
  *(undefined2 *)(param_1 + 0x236) = 0xffff;
  return 1;
}


// 0x0610754 (0x3c bytes)
undefined8 FUN_00610754(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  FUN_006194f4(0x5f,*param_3,0,0,0);
  return 0xffffffffffffffff;
}


// 0x0610790 (0xcc bytes)
int FUN_00610790(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (0 < *(short *)(param_1 + 0x16)) {
    iVar2 = 0;
    iVar3 = 0;
    do {
      iVar1 = FUN_0060dcd8(param_1);
      iVar1 = iVar1 + iVar3;
      iVar3 = iVar3 + 0xc;
      if (iVar1 == param_2) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(short *)(param_1 + 0x16));
  }
  return -1;
}


// 0x061085c (0x20c bytes)
ulonglong FUN_0061085c(int param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  
  if ((*(ushort *)(param_2 + 0xe) & 0x400) != 0) {
    return 0x80000005;
  }
  uVar1 = *(ushort *)(param_2 + 4);
  if ((uVar1 + 0x4e27 & 0xffff) < 8) {
                    /* WARNING: Could not recover jumptable at 0x006108f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*(code *)(*(int *)(((uVar1 + 0x4e27) * 4 & 0x3fffc) +
                               *(int *)(PTR_PTR_0071b000 + -0x7f60)) +
                      *(int *)(PTR_PTR_0071b000 + -0x7f60)))();
    return uVar3;
  }
  uVar3 = (ulonglong)(short)uVar1;
  if ((short)uVar1 < 0) {
    uVar3 = -uVar3;
    if ((uVar3 & 0xffffffff) < 5) {
      iVar4 = *(char *)(param_1 + (int)uVar3 + 0x163) * 0x168;
      iVar2 = iVar4 >> 0x1f;
      uVar3 = (longlong)(iVar4 / 0x7f + iVar2) - (longlong)iVar2;
      if ((int)uVar3 < 0) {
        lVar5 = (~uVar3 << 0x20) / 0x16800000000 + 1;
        if (0x167 < (int)uVar3 + 0x168) {
          lVar5 = 1;
        }
        do {
          uVar3 = uVar3 + 0x168;
          lVar5 = lVar5 + -1;
        } while (lVar5 != 0);
      }
    }
    else if ((uVar3 - 6 & 0xffffffff) < 0x40) {
      iVar4 = *(char *)(*(int *)(PTR_PTR_0071b000 + -0x7f5c) + (int)(uVar3 - 6)) * 0x168;
      iVar2 = iVar4 >> 0x1f;
      uVar3 = (longlong)(iVar4 / 0x7f + iVar2) - (longlong)iVar2;
      if ((int)uVar3 < 0) {
        lVar5 = (~uVar3 << 0x20) / 0x16800000000 + 1;
        if (0x167 < (int)uVar3 + 0x168) {
          lVar5 = 1;
        }
        do {
          uVar3 = uVar3 + 0x168;
          lVar5 = lVar5 + -1;
        } while (lVar5 != 0);
      }
    }
    else {
      uVar3 = FUN_006190b8();
      uVar3 = (uVar3 & 0xffff) + (((uVar3 & 0xffff) << 0x20) / 0x16800000000) * -0x168 & 0xffff;
    }
  }
  return uVar3 + ((uVar3 << 0x20) / 0x16800000000) * -0x168 & 0xffffffff;
}


// 0x0610adc (0xd8 bytes)
char FUN_00610adc(int param_1,char param_2)

{
  char cVar1;
  ulonglong uVar2;
  
  cVar1 = -param_2;
  if (param_2 < '\0') {
    if (cVar1 < '\x05') {
      cVar1 = *(char *)(param_1 + cVar1 + 0x163);
    }
    else if ((byte)(cVar1 - 6U) < 0x40) {
      cVar1 = *(char *)(*(int *)(PTR_PTR_0071b000 + -0x7f5c) + cVar1 + -6);
    }
    else {
      uVar2 = FUN_006190b8();
      cVar1 = (char)(uVar2 & 0xffff) + (char)((uVar2 & 0xffff) / 100) * -100;
    }
    param_2 = '\0';
    if (-1 < cVar1) {
      return cVar1;
    }
  }
  return param_2;
}


// 0x0610bb4 (0xc0 bytes)
byte FUN_00610bb4(int param_1,byte param_2)

{
  byte bVar1;
  char cVar2;
  
  cVar2 = -param_2;
  if ((char)param_2 < '\0') {
    if (cVar2 < '\x05') {
      bVar1 = *(byte *)(param_1 + cVar2 + 0x163);
    }
    else if ((byte)(cVar2 - 6U) < 0x40) {
      bVar1 = *(byte *)(*(int *)(PTR_PTR_0071b000 + -0x7f5c) + cVar2 + -6);
    }
    else {
      bVar1 = FUN_006190b8();
      bVar1 = bVar1 & 0x7f;
    }
    param_2 = 0;
    if (-1 < (char)bVar1) {
      return bVar1;
    }
  }
  return param_2;
}


// 0x0610c74 (0x5b8 bytes)
// strings: 0066b3e8: '%s/%s' | 00904508: '/app_home'

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00610c74(int param_1,int param_2,uint *param_3,int *param_4)

{
  bool bVar1;
  float fVar2;
  ushort uVar3;
  undefined2 uVar4;
  uint uVar5;
  uint uVar6;
  undefined *puVar7;
  ulonglong uVar8;
  int iVar9;
  undefined1 uVar14;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  uint uVar13;
  uint uVar15;
  uint uVar16;
  undefined1 *puVar17;
  int iVar18;
  float *pfVar19;
  int *piVar20;
  longlong lVar21;
  double dVar22;
  double dVar23;
  double extraout_f1;
  double extraout_f1_00;
  double dVar24;
  
  puVar7 = PTR_PTR_0071b000;
  iVar9 = FUN_0060d938(*(undefined4 *)(param_1 + 0x240));
  puVar17 = (undefined1 *)(iVar9 + (*param_3 & 0xffffff));
  uVar13 = (uint)((longlong)((ulonglong)*(ushort *)(puVar17 + 0xe) << 0x31) >> 0x3f) & 4;
  iVar9 = uVar13 + 0x2c;
  if (-1 < (short)*(ushort *)(puVar17 + 0xe)) {
    iVar9 = uVar13 + 0x24;
  }
  uVar13 = *(uint *)(puVar17 + 0x14);
  param_4[1] = (int)param_3;
  *param_4 = param_1;
  param_4[0x77] = uVar13;
  param_4[0x7d] = (int)puVar17;
  if ((uVar13 & 0x40) == 0) {
    param_4[0x7e] = 0;
    uVar3 = *(ushort *)(puVar17 + 0xe);
  }
  else {
    param_4[0x7e] = (int)(puVar17 + iVar9);
    uVar3 = *(ushort *)(puVar17 + 0xe);
  }
  if ((uVar3 & 0x100) == 0) {
    iVar9 = 0;
    param_4[0x7f] = uVar3 & 0x100;
  }
  else {
    if ((param_4[0x77] & 0x40U) == 0) {
      param_4[0x7f] = (int)(puVar17 + iVar9);
    }
    else {
      param_4[0x7f] = (int)(puVar17 + iVar9 + 0x24);
    }
    iVar9 = FUN_00610494(param_4[0x7f],8);
  }
  uVar3 = *(ushort *)(puVar17 + 0xe);
  param_4[0x76] =
       (uint)(((ulonglong)(uVar3 >> 9) & 1) << 4) |
       (uint)(((ulonglong)(uVar3 >> 4) & 1) << 2) | (uint)(((ulonglong)uVar3 & 1 ^ 1) << 3);
  param_4[0x7c] = *(int *)(param_1 + 0x21c);
  uVar14 = FUN_00610bb4(param_1,puVar17[1]);
  dVar22 = (double)FUN_0060fabc(uVar14,0);
  param_4[0x78] = (int)(float)dVar22;
  iVar10 = FUN_0061085c(param_1,puVar17);
  param_4[0x79] = iVar10;
  if ((*(uint *)(puVar17 + 0x20) < 0x10) &&
     (iVar10 = *(int *)(*(int *)(puVar7 + -0x7f58) + *(uint *)(puVar17 + 0x20) * 4), iVar10 != 0)) {
    uVar11 = FUN_0060da50(*(undefined4 *)(param_1 + 0x240),puVar17);
    FUN_006193e0(param_4 + 0x81,0x100,*(undefined4 *)(puVar7 + -0x7f54),iVar10,uVar11);
  }
  else {
    uVar11 = *(undefined4 *)(puVar7 + -0x7f50);
    uVar12 = FUN_0060da50(*(undefined4 *)(param_1 + 0x240),puVar17);
    FUN_006193e0(param_4 + 0x81,0x100,*(undefined4 *)(puVar7 + -0x7f54),uVar11,uVar12);
  }
  uVar13 = param_4[0x77];
  uVar3 = *(ushort *)(puVar17 + 0xe);
  param_4[4] = uVar13 >> 4 & 1;
  iVar10 = *(int *)(param_1 + 8);
  param_4[5] = *(int *)(puVar17 + 0x18);
  uVar16 = *(uint *)(puVar17 + 0x1c);
  param_4[2] = (int)(param_4 + 0x81);
  param_4[3] = 0;
  *(ulonglong *)(param_4 + 6) = (ulonglong)uVar16;
  param_4[9] = iVar10;
  if (((uVar13 & 0x20) == 0) || (uVar16 = 8, (uVar13 & 0x10) == 0)) {
    uVar16 = 0;
  }
  if ((iVar9 == 0) || (uVar13 = 0x20, *(int *)(iVar9 + 8) == 0)) {
    uVar5 = *(uint *)(param_1 + 4);
    uVar13 = 0;
    uVar6 = (uint)(((ulonglong)(uVar5 >> 0x16) & 1) << 4);
  }
  else {
    uVar5 = *(uint *)(param_1 + 4);
    uVar6 = (uint)(((ulonglong)(uVar5 >> 0x16) & 1) << 4);
  }
  if ((iVar9 == 0) || (uVar15 = 0x20, *(int *)(iVar9 + 8) == 0)) {
    uVar15 = 0;
  }
  param_4[10] = uVar6 | uVar16 | uVar13 |
                uVar15 | (uint)(((ulonglong)(uVar3 >> 5) & 1) << 1) | uVar5 >> 0x15 & 1;
  *(undefined1 *)((int)param_4 + 0x2d) = *puVar17;
  dVar22 = (double)FUN_0060fa5c(puVar17);
  param_4[0xc] = (int)(float)dVar22;
  uVar14 = *(undefined1 *)(param_2 + 1);
  param_4[0x3f] = 0xdc;
  *(undefined1 *)(param_4 + 0xb) = uVar14;
  uVar4 = *(undefined2 *)(puVar17 + 10);
  iVar9 = *(int *)(param_1 + 0x120);
  param_4[0x40] = 0x3c;
  iVar10 = *(int *)(param_1 + 300);
  *(undefined2 *)(param_4 + 0xd) = uVar4;
  param_4[0x44] = iVar10;
  iVar10 = *(int *)(param_1 + 0x13c);
  uVar4 = *(undefined2 *)(puVar17 + 0xc);
  param_4[0x43] = iVar9;
  param_4[0x45] = iVar10;
  *(undefined2 *)((int)param_4 + 0x36) = uVar4;
  memcpy(param_4 + 0x49,(void *)(param_1 + 0x168),0xb4);
  uVar11 = *(undefined4 *)(puVar7 + -0x8000);
  lVar21 = 0x10;
  param_4[0xe] = 0xc;
  iVar9 = 0;
  do {
    *(undefined4 *)((int)param_4 + iVar9 + 0x7c) = *(undefined4 *)(param_1 + 0x130);
    *(undefined4 *)((int)param_4 + iVar9 + 0x3c) = uVar11;
    lVar21 = lVar21 + -1;
    iVar9 = iVar9 + 4;
  } while (lVar21 != 0);
  iVar9 = FUN_00610494(param_4[0x7f],9);
  uVar13 = FUN_00610494(param_4[0x7f],3);
  if (iVar9 == 0) {
    if (uVar13 != 0) {
      pfVar19 = (float *)(param_4 + 0xf);
      iVar9 = 0;
      if (*(char *)(uVar13 + 10) == '\0') {
LAB_006111e4:
        iVar10 = 0x10 - iVar9;
        piVar20 = param_4 + iVar9 + 0xf;
        if (0x10 < iVar9 + 1) {
          iVar10 = 1;
        }
        do {
          *piVar20 = 0;
          iVar10 = iVar10 + -1;
          piVar20 = piVar20 + 1;
        } while (iVar10 != 0);
      }
      else {
        do {
          iVar10 = uVar13 + iVar9;
          iVar9 = iVar9 + 1;
          uVar14 = FUN_00610bb4(param_1,*(undefined1 *)(iVar10 + 0xc));
          dVar22 = (double)FUN_0060fabc(uVar14,0);
          *pfVar19 = (float)dVar22;
          pfVar19 = pfVar19 + 1;
          if ((int)(uint)*(byte *)(uVar13 + 10) <= iVar9) {
            if (iVar9 < 0x10) goto LAB_006111e4;
            break;
          }
        } while (iVar9 != 0x10);
      }
    }
  }
  else {
    iVar10 = *(int *)(puVar7 + -0x7f5c);
    dVar22 = (double)*(float *)(puVar7 + -0x7fb8);
    dVar24 = (double)*(float *)(puVar7 + -0x7fe8);
    iVar18 = 0;
    do {
      while( true ) {
        fVar2 = *(float *)(iVar9 + iVar18 + 8);
        dVar23 = (double)fVar2;
        if (dVar23 < dVar24) break;
LAB_00611014:
        bVar1 = iVar18 == 0x3c;
        *(float *)((int)param_4 + iVar18 + 0x3c) = (float)dVar23;
        iVar18 = iVar18 + 4;
        if (bVar1) goto LAB_006110a8;
      }
      uVar16 = -(int)fVar2;
      if (uVar16 < 5) {
        uVar13 = FUN_0060fabc(*(undefined1 *)(param_1 + uVar16 + 0x163),0);
        dVar23 = extraout_f1_00;
        goto LAB_00611014;
      }
      if (0x3f < uVar16 - 6) {
        uVar13 = FUN_006190b8(uVar13,0);
        uVar13 = uVar13 & 0xffff;
        dVar23 = (double)(float)((double)uVar13 * dVar22);
        goto LAB_00611014;
      }
      uVar13 = FUN_0060fabc(*(undefined1 *)(iVar10 + (uVar16 - 6)));
      bVar1 = iVar18 != 0x3c;
      *(float *)((int)param_4 + iVar18 + 0x3c) = (float)extraout_f1;
      iVar18 = iVar18 + 4;
    } while (bVar1);
  }
LAB_006110a8:
  iVar9 = *(int *)(param_1 + 0x248);
  param_4[0x80] = iVar9;
  if (iVar9 == 0) {
    uVar8 = ((ulonglong)(uint)param_4[0x77] & 1) << 0x1c | (ulonglong)((uint)param_4[0x77] >> 4);
    param_4[0x77] = (uint)(uVar8 << 4) | (uint)uVar8 >> 0x1c;
  }
  return;
}


// 0x061122c (0x78 bytes)
// strings: 0066b3f0: '%d: handle %x, grain %i: %s\n'

void FUN_0061122c(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_0071b000;
  if (**(int **)(PTR_PTR_0071b000 + -0x7f4c) != 0) {
    FUN_00604918();
    snd_Printf((char)*(undefined4 *)(puVar1 + -0x7f48));
  }
  return;
}


// 0x06112a4 (0x34 bytes)
// strings: 0066b410: 'Reverb'

undefined8 FUN_006112a4(undefined8 param_1)

{
  FUN_0061122c(param_1,*(undefined4 *)(PTR_PTR_0071b000 + -0x7f44));
  return 0;
}


// 0x06112d8 (0x10c bytes)
// strings: 0066b418: 'Ducker'

undefined8 FUN_006112d8(int param_1,undefined8 param_2,uint *param_3)

{
  ushort uVar1;
  int iVar2;
  undefined1 *puVar3;
  GPiece<48> local_50;
  
  FUN_0061122c(param_1,*(undefined4 *)(PTR_PTR_0071b000 + -0x7f40));
  iVar2 = FUN_0060d938(*(undefined4 *)(param_1 + 0x240));
  puVar3 = local_50;
  uVar1 = *(ushort *)(iVar2 + (*param_3 & 0xffffff));
  if ((short)uVar1 < 0) {
    puVar3 = (undefined1 *)0x0;
  }
  snd_SetMasterVolumeDucker(uVar1 & 0xff,puVar3);
  return 0;
}


// 0x06113e4 (0x220 bytes)
// strings: 0066b420: 'Stop Child Sound' | 0066b480: '  by index: %i\n' | 0066b438: '  by name: %.16s\n' | 0066b450: "SCREAM: Didn't find child sound named -> %s\n"

undefined8 FUN_006113e4(int param_1,undefined8 param_2,uint *param_3)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 local_50 [6];
  
  puVar1 = PTR_PTR_0071b000;
  FUN_0061122c(param_1,*(undefined4 *)(PTR_PTR_0071b000 + -0x7f3c));
  iVar2 = FUN_0060d938(*(undefined4 *)(param_1 + 0x240));
  iVar2 = iVar2 + (*param_3 & 0xffffff);
  uVar4 = *(uint *)(iVar2 + 0xc);
  if ((int)uVar4 < 0) {
    if (*(uint *)(*(int *)(param_1 + 0x240) + 4) < 4) {
      iVar2 = iVar2 + 0x10;
      FUN_0061838c(0,iVar2,local_50);
      FUN_00619424(*(undefined4 *)(puVar1 + -0x7f38),iVar2);
      uVar4 = FUN_0061838c(*(undefined4 *)(param_1 + 0x240),iVar2,local_50);
      if ((int)uVar4 < 0) {
        snd_Printf((char)*(undefined4 *)(puVar1 + -0x7f34));
        return 0;
      }
    }
    else {
      iVar3 = iVar2 + 0x14;
      FUN_00618098(0,iVar3,*(undefined4 *)(iVar2 + 0x10),local_50);
      FUN_00619424(*(undefined4 *)(puVar1 + -0x7f38),iVar3);
      uVar4 = FUN_00618098(*(undefined4 *)(param_1 + 0x240),iVar3,*(undefined4 *)(iVar2 + 0x10),
                           local_50);
      if ((int)uVar4 < 0) {
        snd_Printf((char)*(undefined4 *)(puVar1 + -0x7f34));
        return 0;
      }
    }
    local_50[0] = 0;
  }
  else {
    local_50[0] = *(undefined4 *)(param_1 + 0x240);
    FUN_00619424(*(undefined4 *)(puVar1 + -0x7f30),uVar4);
  }
  iVar2 = FUN_0060dcd8(local_50[0]);
  do {
    iVar3 = FUN_0061be80(param_1,iVar2 + uVar4 * 0x10 + (uVar4 & 0x3fffffff) * -4);
  } while (iVar3 != 0);
  return 0;
}


// 0x0611604 (0x238 bytes)
// strings: 0066b490: 'Wait For Sync Event'

undefined4 FUN_00611604(int param_1,undefined8 param_2,uint *param_3)

{
  int *piVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  int iVar7;
  
  puVar2 = PTR_PTR_0071b000;
  FUN_0061122c(param_1,*(undefined4 *)(PTR_PTR_0071b000 + -0x7f2c));
  piVar1 = *(int **)(puVar2 + -0x7f28);
  if (*piVar1 == 0) {
    return 0;
  }
  if (**(int **)(puVar2 + -0x7f24) != 0) {
    return 0;
  }
  iVar3 = FUN_0060d938(*(undefined4 *)(param_1 + 0x240));
  iVar3 = iVar3 + (*param_3 & 0xffffff);
  iVar4 = (*(code *)**(undefined4 **)(*piVar1 + 0x14))();
  if (iVar4 == 0) {
    if ((*(uint *)(iVar3 + 4) & 1) != 0) {
      return 0;
    }
    return 0xffffffff;
  }
  uVar6 = *(uint *)(iVar3 + 8);
  if (uVar6 == 2) {
    if ((*(uint *)(iVar4 + 0x54) & 2) != 0) {
      uVar6 = *(int *)(iVar4 + 0x48) + 1;
      iVar7 = uVar6 - (uVar6 / *(uint *)(iVar3 + 0xc)) * *(uint *)(iVar3 + 0xc);
      goto LAB_006116ec;
    }
  }
  else if (uVar6 < 3) {
    if ((uVar6 == 1) && ((*(uint *)(iVar4 + 0x54) & 1) != 0)) {
      uVar5 = (((ulonglong)*(uint *)(iVar4 + 0x44) & 0x7ffffff) * 0x20 +
               ((ulonglong)*(uint *)(iVar4 + 0x44) & 0x1fffffff) * -8 & 0xffffffff) /
              (ulonglong)*(uint *)(iVar4 + 0x3c) + 1;
      iVar7 = (int)uVar5 -
              (int)((uVar5 & 0xffffffff) / (ulonglong)*(uint *)(iVar3 + 0xc)) *
              *(uint *)(iVar3 + 0xc);
      goto LAB_006116ec;
    }
  }
  else if (uVar6 == 3) {
    if ((*(uint *)(iVar4 + 0x54) & 4) != 0) {
      iVar7 = *(uint *)(iVar4 + 0x4c) -
              (*(uint *)(iVar4 + 0x4c) / *(uint *)(iVar3 + 0xc)) * *(uint *)(iVar3 + 0xc);
      goto LAB_006116ec;
    }
  }
  else if ((uVar6 == 4) && ((*(uint *)(iVar4 + 0x54) & 0x100) != 0)) {
    iVar7 = *(uint *)(iVar4 + 0x50) -
            (*(uint *)(iVar4 + 0x50) / *(uint *)(iVar3 + 0xc)) * *(uint *)(iVar3 + 0xc);
    goto LAB_006116ec;
  }
  iVar7 = 1;
LAB_006116ec:
  if ((((*(uint *)(iVar4 + 0x54) & 0x40) == 0) || ((*(uint *)(iVar3 + 4) & 2) == 0)) && (iVar7 != 0)
     ) {
    *(short *)(param_1 + 0x236) = *(short *)(param_1 + 0x236) + -1;
    return 1;
  }
  return 0;
}


// 0x061183c (0x50c bytes)
// strings: 0066b4a8: 'Start Child Sound' | 0066b480: '  by index: %i\n' | 0066b438: '  by name: %.16s\n'

undefined8 FUN_0061183c(int param_1,undefined8 param_2,uint *param_3)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  undefined *puVar4;
  int *piVar5;
  short sVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  byte bVar12;
  ushort uVar11;
  int *piVar13;
  undefined1 *puVar14;
  undefined1 uVar15;
  double dVar16;
  double dVar17;
  undefined4 local_130;
  GPiece<40> local_12c;
  GPiece<180> auStack_104;
  
  puVar4 = PTR_PTR_0071b000;
  FUN_0061122c(param_1,*(undefined4 *)(PTR_PTR_0071b000 + -0x7f20));
  if ((*(uint *)(param_1 + 4) & 0x20) == 0) {
    iVar7 = FUN_0060d938(*(undefined4 *)(param_1 + 0x240));
    fVar1 = *(float *)(param_1 + 0x11c);
    fVar2 = *(float *)(puVar4 + -0x7fe8);
    piVar13 = (int *)(iVar7 + (*param_3 & 0xffffff));
    *piVar13 = (int)(char)*piVar13;
    piVar13[1] = (int)(short)piVar13[1];
    if ((fVar1 != fVar2) ||
       (((*(byte *)(piVar13 + 2) & 0xf) != 0 && ((*(byte *)(piVar13 + 2) & 0xf) != 2)))) {
      uVar10 = piVar13[3];
      if ((int)uVar10 < 0) {
        if (*(uint *)(*(int *)(param_1 + 0x240) + 4) < 4) {
          piVar5 = piVar13 + 4;
          FUN_0061838c(0,piVar5,&local_130);
          FUN_00619424(*(undefined4 *)(puVar4 + -0x7f38),piVar5);
          uVar10 = FUN_0061838c(*(undefined4 *)(param_1 + 0x240),piVar5,&local_130);
        }
        else {
          piVar5 = piVar13 + 5;
          FUN_00618098(0,piVar5,piVar13[4],&local_130);
          FUN_00619424(*(undefined4 *)(puVar4 + -0x7f38),piVar5);
          uVar10 = FUN_00618098(*(undefined4 *)(param_1 + 0x240),piVar5,piVar13[4],&local_130);
        }
        local_130 = 0;
        if ((int)uVar10 < 0) {
          return 0;
        }
      }
      else {
        local_130 = *(undefined4 *)(param_1 + 0x240);
        FUN_00619424(*(undefined4 *)(puVar4 + -0x7f30),uVar10);
      }
      iVar8 = FUN_0060dcd8(local_130);
      iVar7 = *piVar13;
      bVar12 = (byte)iVar7;
      puVar14 = (undefined1 *)(iVar8 + uVar10 * 0x10 + (uVar10 & 0x3fffffff) * -4);
      if (iVar7 < 0) {
        if (iVar7 < -4) {
          if (iVar7 == -5) {
            bVar12 = FUN_006190b8();
            bVar12 = bVar12 & 0x7f;
          }
          else {
            bVar12 = *(byte *)(*(int *)(puVar4 + -0x7f5c) + (-6 - iVar7));
          }
        }
        else {
          bVar12 = *(byte *)((param_1 - iVar7) + 0x163);
        }
      }
      dVar16 = (double)FUN_0060fabc(bVar12,0);
      iVar7 = piVar13[1];
      sVar6 = (short)iVar7;
      uVar15 = *puVar14;
      if (iVar7 < 0) {
        if (iVar7 < -4) {
          if (iVar7 == -5) {
            uVar11 = FUN_006190b8();
            sVar6 = uVar11 + (short)(((ulonglong)uVar11 << 0x20) / 0x16800000000) * -0x168;
          }
          else {
            sVar6 = (short)*(char *)(*(int *)(puVar4 + -0x7f5c) + (-6 - iVar7));
          }
        }
        else {
          sVar6 = (short)*(char *)((param_1 - iVar7) + 0x163);
        }
      }
      uVar9 = FUN_0060fb74(sVar6);
      bVar12 = *(byte *)(piVar13 + 2);
      if ((bVar12 & 0xf) == 0) {
        dVar16 = (double)(float)(dVar16 * (double)*(float *)(param_1 + 0x11c));
      }
      else {
        dVar17 = (double)FUN_0060fabc(uVar15,0);
        if ((bVar12 & 0xf) == 1) {
          dVar16 = (double)(float)(dVar16 * dVar17);
        }
        else if ((bVar12 & 0xf) == 2) {
          dVar16 = (double)(float)(dVar16 * (double)(float)(dVar17 * (double)*(float *)(param_1 +
                                                                                       0x11c)));
        }
      }
      uVar3 = (uint)((ulonglong)(longlong)(char)bVar12 >> 4) & 7;
      if (((ulonglong)(longlong)(char)bVar12 >> 4 & 7) == 0) {
        uVar9 = uVar9 + *(int *)(param_1 + 0x130);
      }
      else if (uVar3 == 1) {
        uVar9 = uVar9 + (int)*(short *)(puVar14 + 2);
      }
      else if (uVar3 == 2) {
        uVar9 = (int)*(short *)(puVar14 + 2) + uVar9 + *(int *)(param_1 + 0x130);
      }
      if ((char)bVar12 < '\0') {
        uVar15 = *(undefined1 *)(param_1 + 0x10);
      }
      else {
        uVar15 = puVar14[1];
      }
      memcpy(auStack_104,(void *)(param_1 + 0x168),0xb4);
      iVar7 = FUN_0060f728(dVar16,local_130,uVar10,uVar15,*(undefined1 *)(param_1 + 0x164),
                           (short)uVar9 +
                           (short)(((ulonglong)uVar9 << 0x20) / 0x16800000000) * -0x168,local_12c,
                           *(undefined4 *)(param_1 + 0x21c));
      if (iVar7 != 0) {
        FUN_0061a8d0(param_1,iVar7);
        return 0;
      }
    }
  }
  return 0;
}


// 0x0611d48 (0x240 bytes)
// strings: 0066b4c0: 'Stream MultiTrack Volumes Ex'

/* WARNING: Removing unreachable block (ram,0x00611e88) */
/* WARNING: Removing unreachable block (ram,0x00611e48) */
/* WARNING: Removing unreachable block (ram,0x00611e9c) */

undefined8 FUN_00611d48(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined *puVar3;
  int iVar4;
  GPiece<4> local_1d0;
  GPiece<64> auStack_1cc;
  GPiece<64> auStack_18c;
  GPiece<220> local_14c;
  
  puVar3 = PTR_PTR_0071b000;
  FUN_0061122c(param_1,*(undefined4 *)(PTR_PTR_0071b000 + -0x7f1c));
  piVar1 = *(int **)(puVar3 + -0x7f28);
  if ((*piVar1 != 0) && (*(undefined4 **)(param_1 + 0x248) != (undefined4 *)0x0)) {
    uVar2 = **(undefined4 **)(param_1 + 0x248);
    FUN_0060d938(*(undefined4 *)(param_1 + 0x240));
    iVar4 = (*(code *)**(undefined4 **)(*piVar1 + 0xc))(uVar2,local_14c,local_1d0);
    if (iVar4 != 0) {
      (*(code *)**(undefined4 **)(*piVar1 + 0x10))(uVar2,local_14c,0,auStack_1cc,auStack_18c);
    }
  }
  return 0;
}


// 0x0611f88 (0x48 bytes)
// strings: 0066b4e0: 'Stream MultiTrack Volumes' | 0066b500: '%s(%d) : snd_SFX_GRAIN_TYPE_STREAM_MULTITRACK_VOLUMES deprecated.\n' | 0066b378: 'common/grains.cpp'

undefined8 FUN_00611f88(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_0071b000;
  FUN_0061122c(param_1,*(undefined4 *)(PTR_PTR_0071b000 + -0x7f18));
  snd_Printf((char)*(undefined4 *)(puVar1 + -0x7f14));
  return 0;
}


// 0x0611fd0 (0x160 bytes)
// strings: 0066b548: 'Stream'

undefined8 FUN_00611fd0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  GPiece<40> auStack_350;
  uint local_328;
  
  piVar1 = *(int **)(PTR_PTR_0071b000 + -0x7f28);
  if (*piVar1 != 0) {
    FUN_0061122c(param_1,*(undefined4 *)(PTR_PTR_0071b000 + -0x7f10));
    if ((param_1[1] & 0x20) == 0) {
      param_1[1] = param_1[1] | 0x10;
      FUN_00610c74(param_1,param_2,param_3,auStack_350);
      iVar2 = (*(code *)**(undefined4 **)*piVar1)(auStack_350);
      if (iVar2 != 0) {
        FUN_0061a8d0(param_1,iVar2);
      }
      if ((local_328 & 1) != 0) {
        do {
          puVar3 = param_1;
          param_1 = (undefined4 *)puVar3[0x8a];
        } while (param_1 != (undefined4 *)0x0);
        FUN_00609a5c(*puVar3);
        return 0;
      }
    }
  }
  return 0;
}


// 0x0612130 (0x4b4 bytes)
// strings: 0066b550: 'Branch To Child Sound' | 0066b480: '  by index: %i\n' | 0066b5a0: '%s(%d) : Unable to branch sound.\n' | 0066b378: 'common/grains.cpp' | 0066b590: '  by name: %s\n' | 0066b438: '  by name: %.16s\n' | 0066b568: '%s(%d) : Missing sound name %s.\n' | 0066b5c8: '%s(%d) : Attempt to branch sound with no grains.\n'

/* WARNING: Removing unreachable block (ram,0x006125a4) */
/* WARNING: Removing unreachable block (ram,0x006125ac) */

undefined4 FUN_00612130(int param_1,undefined8 param_2,uint *param_3)

{
  char cVar1;
  undefined2 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  uint uVar12;
  undefined1 *puVar13;
  double dVar14;
  int local_60;
  GPiece<20> local_5c;
  
  puVar7 = PTR_PTR_0071b000;
  FUN_0061122c(param_1,*(undefined4 *)(PTR_PTR_0071b000 + -0x7f0c));
  iVar9 = FUN_0060d938(*(undefined4 *)(param_1 + 0x240));
  iVar9 = iVar9 + (*param_3 & 0xffffff);
  if (*(int *)(iVar9 + 0xc) < 0) {
    if (*(uint *)(*(int *)(param_1 + 0x240) + 4) < 4) {
      iVar8 = iVar9 + 0x10;
      FUN_00619424(*(undefined4 *)(puVar7 + -0x7f38),iVar8);
      FUN_0061838c(0,iVar8,&local_60);
      uVar12 = FUN_0061838c(*(undefined4 *)(param_1 + 0x240),iVar8,&local_60);
      if ((int)uVar12 < 0) {
        snd_Printf((char)*(undefined4 *)(puVar7 + -0x7f08));
        return 0xffffffff;
      }
    }
    else {
      iVar8 = iVar9 + 0x14;
      FUN_00619424(*(undefined4 *)(puVar7 + -0x7f04),iVar8);
      FUN_00618098(0,iVar8,*(undefined4 *)(iVar9 + 0x10),&local_60);
      uVar12 = FUN_00618098(*(undefined4 *)(param_1 + 0x240),iVar8,*(undefined4 *)(iVar9 + 0x10),
                            &local_60);
      if ((int)uVar12 < 0) {
        snd_Printf((char)*(undefined4 *)(puVar7 + -0x7f08));
        return 0xffffffff;
      }
    }
    local_60 = 0;
    if ((int)uVar12 < (int)sRam00000016) goto LAB_006121e8;
  }
  else {
    FUN_00619424(*(undefined4 *)(puVar7 + -0x7f30),*(int *)(iVar9 + 0xc));
    uVar12 = *(uint *)(iVar9 + 0xc);
    local_60 = *(int *)(param_1 + 0x240);
    if ((-1 < (int)uVar12) && ((int)uVar12 < (int)*(short *)(local_60 + 0x16))) {
LAB_006121e8:
      if (*(char *)(iVar9 + 9) == '\0') {
        FUN_0062112c(param_1);
      }
      iVar9 = FUN_0060dcd8(local_60);
      puVar13 = (undefined1 *)(iVar9 + uVar12 * 0x10 + (uVar12 & 0x3fffffff) * -4);
      if (((*(ushort *)(puVar13 + 6) & 8) != 0) &&
         (iVar9 = FUN_0060f38c(puVar13,0,local_5c), iVar9 == 0)) {
        return 0xffffffff;
      }
      if (puVar13[4] == '\0') {
        snd_Printf((char)*(undefined4 *)(puVar7 + -0x7efc));
        return 0xffffffff;
      }
      iVar9 = *(int *)(puVar7 + -0x7ef8);
      iVar10 = *(char *)(param_1 + 0x10) * 4;
      iVar8 = *(int *)(iVar9 + iVar10);
      if (iVar8 != 0) {
        *(int *)(iVar9 + iVar10) = iVar8 + -1;
      }
      iVar8 = *(int *)(puVar7 + -0x7ef0);
      iVar10 = -1;
      piVar3 = *(int **)(puVar7 + -0x7ef4);
      while (iVar10 = FUN_0061a5b8(param_1,iVar10 + 1), -1 < iVar10) {
        iVar6 = iVar10 * 0x68 + *piVar3;
        iVar5 = *(char *)(iVar6 + 10) * 4;
        iVar4 = *(int *)(iVar8 + iVar5);
        if (iVar4 != 0) {
          *(int *)(iVar8 + iVar5) = iVar4 + -1;
        }
        *(undefined1 *)(iVar6 + 10) = puVar13[1];
        iVar4 = *(char *)(iVar10 * 0x68 + *piVar3 + 10) * 4;
        *(int *)(iVar8 + iVar4) = *(int *)(iVar8 + iVar4) + 1;
      }
      *(undefined1 **)(param_1 + 0x54) = puVar13;
      dVar14 = (double)FUN_0060fabc(*puVar13,0);
      uVar2 = *(undefined2 *)(puVar13 + 2);
      *(float *)(param_1 + 0x11c) = (float)dVar14;
      uVar11 = FUN_0060fb74(uVar2);
      *(undefined4 *)(param_1 + 0x130) = uVar11;
      cVar1 = puVar13[1];
      *(undefined2 *)(param_1 + 0x23c) = 0;
      *(char *)(param_1 + 0x10) = cVar1;
      iVar10 = cVar1 * 4;
      *(undefined2 *)(param_1 + 0x236) = 0xffff;
      *(undefined2 *)(param_1 + 0x234) = 0;
      *(int *)(param_1 + 0x240) = local_60;
      iVar8 = *(int *)(iVar9 + iVar10);
      *(undefined2 *)(param_1 + 0x238) = 0;
      *(undefined2 *)(param_1 + 0x23a) = 0;
      *(int *)(iVar9 + iVar10) = iVar8 + 1;
      FUN_0061ae90(param_1);
      FUN_0061addc(param_1);
      iVar9 = FUN_0060dc04(*(undefined4 *)(param_1 + 0x240),puVar13);
      return *(undefined4 *)(iVar9 + 4);
    }
  }
  snd_Printf((char)*(undefined4 *)(puVar7 + -0x7f00));
  return 0xffffffff;
}


// 0x06125e4 (0xa4 bytes)
// strings: 0066b600: 'Plugin'

undefined4 FUN_006125e4(undefined4 *param_1,undefined8 param_2,uint *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  FUN_0061122c(param_1,*(undefined4 *)(PTR_PTR_0071b000 + -0x7eec));
  iVar2 = FUN_0060d938(param_1[0x90]);
  puVar1 = (undefined4 *)(iVar2 + (*param_3 & 0xffffff));
  uVar3 = FUN_006308e4(*puVar1,puVar1[1],*param_1,puVar1 + 2,param_1,0,0);
  return uVar3;
}


// 0x0612688 (0x16c bytes)
// strings: 0066b608: 'Copy Register' | 0066b618: '  copy from local reg %i\n' | 0066b658: '  copy to local reg %i\n' | 0066b690: '  value: %i\n' | 0066b638: '  copy from global reg %i\n' | 0066b670: '  copy to global reg %i\n'

undefined8 FUN_00612688(int param_1,undefined8 param_2,int param_3)

{
  char cVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  
  puVar4 = PTR_PTR_0071b000;
  FUN_0061122c(param_1,*(undefined4 *)(PTR_PTR_0071b000 + -0x7ee8));
  cVar1 = *(char *)(param_3 + 1);
  if (cVar1 < '\0') {
    uVar2 = *(undefined1 *)(*(int *)(puVar4 + -0x7f5c) + ~(int)cVar1);
    FUN_00619424(*(undefined4 *)(puVar4 + -0x7ee0),~(int)cVar1 + 1);
    cVar1 = *(char *)(param_3 + 2);
  }
  else {
    uVar2 = *(undefined1 *)(param_1 + cVar1 + 0x164);
    FUN_00619424(*(undefined4 *)(puVar4 + -0x7ee4),cVar1);
    cVar1 = *(char *)(param_3 + 2);
  }
  if (-1 < cVar1) {
    uVar3 = *(undefined4 *)(puVar4 + -0x7edc);
    *(undefined1 *)(param_1 + cVar1 + 0x164) = uVar2;
    FUN_00619424(uVar3,cVar1);
    FUN_00619424(*(undefined4 *)(puVar4 + -0x7ed4),uVar2);
    return 0;
  }
  uVar3 = *(undefined4 *)(puVar4 + -0x7ed8);
  *(undefined1 *)(*(int *)(puVar4 + -0x7f5c) + ~(int)cVar1) = uVar2;
  FUN_00619424(uVar3,~(int)cVar1 + 1);
  FUN_00619424(*(undefined4 *)(puVar4 + -0x7ed4),uVar2);
  return 0;
}


// 0x06127f4 (0x64 bytes)
// strings: 0066b6a0: 'On Stop Marker'

undefined8 FUN_006127f4(int param_1,int param_2)

{
  byte bVar1;
  
  FUN_0061122c(param_1,*(undefined4 *)(PTR_PTR_0071b000 + -0x7ed0));
  bVar1 = *(byte *)(param_2 + 4);
  *(ushort *)(param_1 + 0x23e) = *(ushort *)(param_1 + 0x23e) | 1;
  *(ushort *)(param_1 + 0x236) = bVar1 - 1;
  return 0;
}


// 0x0612858 (0x94 bytes)
// strings: 0066b6b0: 'Silence Voices'

undefined8 FUN_00612858(int param_1)

{
  byte *pbVar1;
  
  FUN_0061122c(param_1,*(undefined4 *)(PTR_PTR_0071b000 + -0x7ecc));
  FUN_0062112c(param_1);
  pbVar1 = *(byte **)(param_1 + 0x22c);
  do {
    if (pbVar1 == (byte *)0x0) {
      return 0;
    }
    while ((*pbVar1 & 0x1f) != 4) {
      pbVar1 = *(byte **)(pbVar1 + 0x230);
      if (pbVar1 == (byte *)0x0) {
        return 0;
      }
    }
    FUN_0062112c(pbVar1);
    pbVar1 = *(byte **)(pbVar1 + 0x230);
  } while( true );
}


// 0x06128ec (0x94 bytes)
// strings: 0066b6c0: 'Key Off Voices'

undefined8 FUN_006128ec(int param_1)

{
  byte *pbVar1;
  
  FUN_0061122c(param_1,*(undefined4 *)(PTR_PTR_0071b000 + -0x7ec8));
  FUN_00621460(param_1);
  pbVar1 = *(byte **)(param_1 + 0x22c);
  do {
    if (pbVar1 == (byte *)0x0) {
      return 0;
    }
    while ((*pbVar1 & 0x1f) != 4) {
      pbVar1 = *(byte **)(pbVar1 + 0x230);
      if (pbVar1 == (byte *)0x0) {
        return 0;
      }
    }
    FUN_00621460(pbVar1);
    pbVar1 = *(byte **)(pbVar1 + 0x230);
  } while( true );
}


// 0x0612980 (0x144 bytes)
// strings: 0066b6d0: 'Add Register' | 0066b6e0: '  setting local reg %i to %i\n' | 0066b700: '  setting global reg %i to %i\n'

undefined8 FUN_00612980(int param_1,undefined8 param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  
  puVar3 = PTR_PTR_0071b000;
  FUN_0061122c(param_1,*(undefined4 *)(PTR_PTR_0071b000 + -0x7ec4));
  cVar1 = *(char *)(param_3 + 2);
  if (-1 < cVar1) {
    iVar4 = (int)*(char *)(param_1 + cVar1 + 0x160 + 4) + (int)*(char *)(param_3 + 1);
    if (iVar4 < 0x80) {
      if (iVar4 < -0x80) {
        iVar4 = -0x80;
      }
    }
    else {
      iVar4 = 0x7f;
    }
    uVar2 = *(undefined4 *)(puVar3 + -0x7ec0);
    *(char *)(param_1 + cVar1 + 0x160 + 4) = (char)iVar4;
    FUN_00619424(uVar2,cVar1,iVar4);
    return 0;
  }
  uVar5 = ~(int)cVar1;
  iVar4 = (int)*(char *)(*(int *)(puVar3 + -0x7f5c) + uVar5) + (int)*(char *)(param_3 + 1);
  if (iVar4 < 0x80) {
    if (iVar4 < -0x80) {
      iVar4 = -0x80;
    }
  }
  else {
    iVar4 = 0x7f;
  }
  uVar2 = *(undefined4 *)(puVar3 + -0x7ebc);
  *(char *)(*(int *)(puVar3 + -0x7f5c) + uVar5) = (char)iVar4;
  FUN_00619424(uVar2,uVar5 + 1,iVar4);
  return 0;
}


// 0x0612ac4 (0x100 bytes)
// strings: 0066b720: 'Play Cycle'

undefined4 FUN_00612ac4(int param_1,undefined8 param_2,int param_3)

{
  char cVar1;
  char cVar2;
  char cVar3;
  undefined4 uVar4;
  
  FUN_0061122c(param_1,*(undefined4 *)(PTR_PTR_0071b000 + -0x7eb8));
  uVar4 = 0;
  if (*(short *)(param_1 + 0x238) == 0) {
    cVar1 = *(char *)(param_3 + 3);
    *(char *)(param_3 + 3) = cVar1 + '\x01';
    if (*(char *)(param_3 + 1) == (char)(cVar1 + '\x01')) {
      *(undefined1 *)(param_3 + 3) = 0;
    }
    *(short *)(param_1 + 0x236) =
         (short)cVar1 * (short)*(char *)(param_3 + 2) + *(short *)(param_1 + 0x236);
    *(short *)(param_1 + 0x23a) = *(char *)(param_3 + 2) + 1;
    cVar2 = *(char *)(param_3 + 1);
    cVar3 = *(char *)(param_3 + 2);
    *(undefined2 *)(param_1 + 0x238) = 1;
    *(short *)(param_1 + 0x23c) = (((short)cVar2 - (short)cVar1) + -1) * (short)cVar3;
  }
  else {
    FUN_006194f4(0xd,0,0,0,0);
    uVar4 = 0xffffffff;
  }
  return uVar4;
}


// 0x0612bc4 (0x98 bytes)
// strings: 0066b730: 'Wait For Voices'

undefined4 FUN_00612bc4(int param_1)

{
  int iVar1;
  
  FUN_0061122c(param_1,*(undefined4 *)(PTR_PTR_0071b000 + -0x7eb4));
  iVar1 = FUN_00619860(param_1);
  if (((iVar1 == 0) && ((*(uint *)(param_1 + 4) & 0x10) == 0)) &&
     (iVar1 = FUN_006198d0(param_1), iVar1 == 0)) {
    return 0;
  }
  *(short *)(param_1 + 0x236) = *(short *)(param_1 + 0x236) + -1;
  return 1;
}


// 0x0612c5c (0x5a0 bytes)
// strings: 0066b740: 'Goto Random Marker Ex' | 0066b758: '  marker %i\n'

undefined4 FUN_00612c5c(int param_1,int param_2,uint *param_3)

{
  byte bVar1;
  int *piVar2;
  bool bVar3;
  char *pcVar4;
  bool bVar5;
  undefined *puVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  char cVar12;
  char cVar13;
  int iVar14;
  char cVar15;
  int iVar16;
  ulonglong uVar17;
  
  puVar6 = PTR_PTR_0071b000;
  FUN_0061122c(param_1,*(undefined4 *)(PTR_PTR_0071b000 + -0x7eb0));
  piVar2 = *(int **)(puVar6 + -0x7eac);
  iVar7 = *piVar2 + 1;
  *piVar2 = iVar7;
  if (8 < iVar7) {
    FUN_006194f4(0x84,8,0,0,0);
    *(short *)(param_1 + 0x236) = *(short *)(param_1 + 0x236) + -1;
    return 1;
  }
  iVar7 = FUN_0060d938(*(undefined4 *)(param_1 + 0x240));
  pcVar4 = (char *)(iVar7 + (*param_3 & 0xffffff));
  cVar15 = pcVar4[3];
  if (cVar15 < '\x10') {
    iVar16 = (int)(char)((pcVar4[1] - *pcVar4) + '\x01');
    iVar7 = iVar16 + -1;
    cVar12 = pcVar4[1] - *pcVar4;
    if (iVar7 < cVar15) goto LAB_00612f6c;
LAB_00612d7c:
    cVar12 = pcVar4[0x15];
    if (cVar12 == '\0') goto LAB_00612f34;
LAB_00612d8c:
    cVar12 = pcVar4[2];
  }
  else {
    cVar15 = '\x10';
    iVar16 = (int)(char)((pcVar4[1] - *pcVar4) + '\x01');
    iVar7 = iVar16 + -1;
    cVar12 = pcVar4[1] - *pcVar4;
    if (0xf < iVar7) goto LAB_00612d7c;
LAB_00612f6c:
    cVar15 = cVar12;
    if (pcVar4[0x15] != '\0') goto LAB_00612d8c;
    cVar12 = '\0';
LAB_00612f34:
    if (pcVar4[cVar15 + 4] == -1) {
      pcVar4[0x15] = cVar12;
      goto LAB_00612d8c;
    }
    pcVar4[0x15] = '\x01';
    cVar12 = pcVar4[2];
  }
  if (cVar12 == '\0') {
    cVar15 = *pcVar4;
    uVar8 = FUN_006190b8();
    iVar7 = (int)cVar15 + ((uVar8 & 0xffff) - ((int)(uVar8 & 0xffff) / iVar16) * iVar16);
  }
  else if (cVar12 == '\x01') {
    if (pcVar4[0x15] == '\x01') {
      if (iVar7 == cVar15) {
        iVar7 = 0;
        cVar12 = '\0';
        cVar13 = '\0';
        if (0 < cVar15) {
          cVar13 = '\0';
          uVar17 = (ulonglong)(iVar16 - 1);
          iVar16 = 0;
          iVar9 = 1;
          do {
            iVar7 = iVar7 + *pcVar4 + iVar16;
            cVar12 = (char)iVar7;
            cVar13 = cVar13 + pcVar4[iVar16 + 5];
            uVar17 = uVar17 - 1;
            iVar16 = iVar9;
            iVar9 = iVar9 + 1;
          } while (uVar17 != 0);
        }
        pcVar4[0x15] = '\x02';
        iVar7 = (int)(char)((pcVar4[1] + cVar12) - cVar13);
        goto LAB_00612dc0;
      }
    }
    else if (pcVar4[0x15] == '\x02') {
      uVar8 = ((int)pcVar4[4] - (int)cVar15) + 0xf;
      iVar7 = (int)pcVar4[uVar8 + (((int)uVar8 >> 4) + (uint)((int)uVar8 < 0 && (uVar8 & 0xf) != 0))
                                  * -0x10 + 5];
      goto LAB_00612dc0;
    }
    cVar12 = *pcVar4;
    uVar8 = ((int)pcVar4[4] - (int)cVar15) + 0x10;
    iVar14 = uVar8 + (((int)uVar8 >> 4) + (uint)((int)uVar8 < 0 && (uVar8 & 0xf) != 0) & 0xfffffff)
                     * -0x10;
    uVar8 = FUN_006190b8();
    bVar1 = pcVar4[4];
    uVar10 = (uint)bVar1;
    cVar15 = (char)iVar14;
    iVar9 = (int)(char)bVar1;
    iVar7 = (int)cVar12 + ((uVar8 & 0xffff) - ((int)(uVar8 & 0xffff) / iVar16) * iVar16);
    if ((int)cVar15 <= (int)(char)bVar1) goto LAB_006130d4;
LAB_00613024:
    iVar9 = iVar9 + 0x10;
    if (cVar15 < iVar9) {
      bVar3 = true;
      uVar8 = (uint)cVar15;
      iVar11 = iVar14;
      do {
        while (pcVar4[(char)((char)uVar8 -
                            (char)(((longlong)((int)uVar8 >> 4) +
                                    (ulonglong)((int)uVar8 < 0 && (uVar8 & 0xf) != 0) & 0xffffffff)
                                  << 4)) + 5] == iVar7) {
          bVar3 = false;
          iVar11 = uVar10 + 0x11;
          uVar8 = (uint)(char)iVar11;
          if (iVar9 <= (char)iVar11) goto LAB_00613094;
        }
        iVar11 = iVar11 + 1;
        uVar8 = (uint)(char)iVar11;
      } while ((char)iVar11 < iVar9);
LAB_00613094:
      do {
        if (bVar3) break;
        cVar12 = *pcVar4;
        uVar8 = FUN_006190b8();
        bVar1 = pcVar4[4];
        uVar10 = (uint)bVar1;
        iVar9 = (int)(char)bVar1;
        iVar7 = (int)cVar12 + ((uVar8 & 0xffff) - ((int)(uVar8 & 0xffff) / iVar16) * iVar16);
        if ((int)(char)bVar1 < (int)cVar15) goto LAB_00613024;
LAB_006130d4:
        if (iVar9 + 1 <= (int)cVar15) break;
        bVar3 = true;
        cVar12 = cVar15;
        iVar11 = iVar14;
        do {
          uVar8 = (uint)cVar12;
          if (pcVar4[(char)(cVar12 - (char)(((longlong)((int)uVar8 >> 4) +
                                             (ulonglong)((int)uVar8 < 0 && (uVar8 & 0xf) != 0) &
                                            0xffffffff) << 4)) + 5] == iVar7) {
            bVar3 = false;
            iVar11 = uVar10 + 1;
          }
          iVar11 = iVar11 + 1;
          cVar12 = (char)iVar11;
        } while ((int)cVar12 < iVar9 + 1);
      } while( true );
    }
  }
  else {
    iVar7 = 0;
    FUN_006194f4(0xc,cVar12,0,0,0);
  }
LAB_00612dc0:
  FUN_00619424(*(undefined4 *)(puVar6 + -0x7ea8),iVar7);
  if (*(char *)(param_2 + 4) == '\0') {
LAB_00612f10:
    FUN_006194f4(0xc,iVar7,0,0,0);
    return 0xffffffff;
  }
  iVar16 = 0;
  do {
    iVar9 = FUN_0060dc04(*(undefined4 *)(param_1 + 0x240),param_2);
    if (*(char *)(iVar9 + iVar16 * 8) == '#') {
      iVar9 = FUN_0060dc04(*(undefined4 *)(param_1 + 0x240),param_2);
      bVar3 = true;
      if (*(char *)(iVar9 + iVar16 * 8 + 1) != iVar7) goto LAB_00612e10;
      *(short *)(param_1 + 0x236) = (short)iVar16 + -1;
      bVar5 = false;
      uVar8 = (int)pcVar4[4] + 1;
      pcVar4[pcVar4[4] + 5] = (char)iVar7;
      pcVar4[4] = (char)uVar8 -
                  (char)(((longlong)((int)uVar8 >> 4) +
                          (ulonglong)((int)uVar8 < 0 && (uVar8 & 0xf) != 0) & 0xffffffff) << 4);
      if ((int)(uint)*(byte *)(param_2 + 4) <= iVar16 + 1) goto LAB_00612f08;
    }
    else {
LAB_00612e10:
      bVar3 = false;
      bVar5 = true;
      if ((int)(uint)*(byte *)(param_2 + 4) <= iVar16 + 1) {
LAB_00612f08:
        if (bVar3) {
          return 0;
        }
        goto LAB_00612f10;
      }
    }
    iVar16 = iVar16 + 1;
    if (!bVar5) {
      return 0;
    }
  } while( true );
}


// 0x06131fc (0x200 bytes)
// strings: 0066b768: 'Goto Random Marker' | 0066b758: '  marker %i\n'

undefined4 FUN_006131fc(int param_1,int param_2,int param_3)

{
  char cVar1;
  char cVar2;
  int *piVar3;
  bool bVar4;
  bool bVar5;
  undefined *puVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  
  puVar6 = PTR_PTR_0071b000;
  FUN_0061122c(param_1,*(undefined4 *)(PTR_PTR_0071b000 + -0x7ea4));
  piVar3 = *(int **)(puVar6 + -0x7eac);
  iVar10 = *piVar3 + 1;
  *piVar3 = iVar10;
  if (iVar10 < 9) {
    cVar1 = *(char *)(param_3 + 2);
    cVar2 = *(char *)(param_3 + 1);
    uVar8 = FUN_006190b8();
    iVar10 = ((int)cVar1 - (int)cVar2) + 1;
    iVar10 = ((uVar8 & 0xffff) - ((int)(uVar8 & 0xffff) / iVar10) * iVar10) +
             (int)*(char *)(param_3 + 1);
    FUN_00619424(*(undefined4 *)(puVar6 + -0x7ea8),iVar10);
    if (*(char *)(param_2 + 4) != '\0') {
      iVar11 = 0;
      do {
        iVar9 = FUN_0060dc04(*(undefined4 *)(param_1 + 0x240),param_2);
        if (*(char *)(iVar9 + iVar11 * 8) == '#') {
          iVar9 = FUN_0060dc04(*(undefined4 *)(param_1 + 0x240),param_2);
          bVar4 = true;
          if (*(char *)(iVar9 + iVar11 * 8 + 1) != iVar10) goto LAB_0061333c;
          *(short *)(param_1 + 0x236) = (short)iVar11 + -1;
          bVar5 = false;
          if ((int)(uint)*(byte *)(param_2 + 4) <= iVar11 + 1) goto LAB_006133d0;
        }
        else {
LAB_0061333c:
          bVar4 = false;
          bVar5 = true;
          if ((int)(uint)*(byte *)(param_2 + 4) <= iVar11 + 1) {
LAB_006133d0:
            if (bVar4) {
              return 0;
            }
            break;
          }
        }
        iVar11 = iVar11 + 1;
        if (!bVar5) {
          return 0;
        }
      } while( true );
    }
    FUN_006194f4(0xc,iVar10,0,0,0);
    uVar7 = 0xffffffff;
  }
  else {
    FUN_006194f4(0x84,8,0,0,0);
    uVar7 = 1;
    *(short *)(param_1 + 0x236) = *(short *)(param_1 + 0x236) + -1;
  }
  return uVar7;
}


// 0x06133fc (0x1cc bytes)
// strings: 0066b780: 'Goto Marker' | 0066b758: '  marker %i\n'

undefined4 FUN_006133fc(int param_1,int param_2,int param_3)

{
  char cVar1;
  int *piVar2;
  bool bVar3;
  bool bVar4;
  undefined *puVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  
  puVar5 = PTR_PTR_0071b000;
  FUN_0061122c(param_1,*(undefined4 *)(PTR_PTR_0071b000 + -0x7ea0));
  piVar2 = *(int **)(puVar5 + -0x7eac);
  iVar8 = *piVar2 + 1;
  *piVar2 = iVar8;
  if (iVar8 < 9) {
    cVar1 = *(char *)(param_3 + 1);
    FUN_00619424(*(undefined4 *)(puVar5 + -0x7ea8),cVar1);
    if (*(char *)(param_2 + 4) != '\0') {
      iVar8 = 0;
      do {
        iVar7 = FUN_0060dc04(*(undefined4 *)(param_1 + 0x240),param_2);
        if (*(char *)(iVar7 + iVar8 * 8) == '#') {
          iVar7 = FUN_0060dc04(*(undefined4 *)(param_1 + 0x240),param_2);
          bVar3 = true;
          if (*(char *)(iVar7 + iVar8 * 8 + 1) != cVar1) goto LAB_00613508;
          *(short *)(param_1 + 0x236) = (short)iVar8 + -1;
          bVar4 = false;
          if ((int)(uint)*(byte *)(param_2 + 4) <= iVar8 + 1) goto LAB_0061359c;
        }
        else {
LAB_00613508:
          bVar3 = false;
          bVar4 = true;
          if ((int)(uint)*(byte *)(param_2 + 4) <= iVar8 + 1) {
LAB_0061359c:
            if (bVar3) {
              return 0;
            }
            break;
          }
        }
        iVar8 = iVar8 + 1;
        if (!bVar4) {
          return 0;
        }
      } while( true );
    }
    FUN_006194f4(0xb,0,0,0,0);
    uVar6 = 0xffffffff;
  }
  else {
    FUN_006194f4(0x84,8,0,0,0);
    uVar6 = 1;
    *(short *)(param_1 + 0x236) = *(short *)(param_1 + 0x236) + -1;
  }
  return uVar6;
}


// 0x06135c8 (0x34 bytes)
// strings: 0066b790: 'Marker'

undefined8 FUN_006135c8(undefined8 param_1)

{
  FUN_0061122c(param_1,*(undefined4 *)(PTR_PTR_0071b000 + -0x7e9c));
  return 0;
}


// 0x06135fc (0x140 bytes)
// strings: 0066b798: 'Test Register'

undefined8 FUN_006135fc(int param_1,undefined8 param_2,int param_3)

{
  char cVar1;
  undefined *puVar2;
  char cVar3;
  
  puVar2 = PTR_PTR_0071b000;
  FUN_0061122c(param_1,*(undefined4 *)(PTR_PTR_0071b000 + -0x7e98));
  cVar3 = *(char *)(param_3 + 1);
  if (cVar3 < '\0') {
    cVar3 = *(char *)(*(int *)(puVar2 + -0x7f5c) + ~(int)cVar3);
  }
  else {
    cVar3 = *(char *)(param_1 + cVar3 + 0x164);
  }
  cVar1 = *(char *)(param_3 + 2);
  if (cVar1 == '\x01') {
    if (*(char *)(param_3 + 3) != cVar3) goto LAB_006136a8;
  }
  else if (cVar1 < '\x02') {
    if ((cVar1 == '\0') && (*(char *)(param_3 + 3) <= cVar3)) goto LAB_006136a8;
  }
  else if (cVar1 == '\x02') {
    if (cVar3 <= *(char *)(param_3 + 3)) goto LAB_006136a8;
  }
  else if ((cVar1 == '\x03') && (*(char *)(param_3 + 3) == cVar3)) {
LAB_006136a8:
    *(short *)(param_1 + 0x236) = *(short *)(param_1 + 0x236) + 1;
    return 0;
  }
  return 0;
}


// 0x061373c (0x114 bytes)
// strings: 0066b7a8: 'Decrement Register' | 0066b7c0: '  set local reg %i to %i\n' | 0066b7e0: '  set global reg %i to %i\n'

undefined8 FUN_0061373c(int param_1,undefined8 param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  puVar3 = PTR_PTR_0071b000;
  FUN_0061122c(param_1,*(undefined4 *)(PTR_PTR_0071b000 + -0x7e94));
  cVar1 = *(char *)(param_3 + 1);
  uVar6 = ~(int)cVar1;
  param_1 = param_1 + cVar1 + 0x160;
  if (-1 < cVar1) {
    iVar4 = *(char *)(param_1 + 4) + -1;
    if (iVar4 < -0x80) {
      iVar4 = -0x80;
    }
    uVar2 = *(undefined4 *)(puVar3 + -0x7e90);
    *(char *)(param_1 + 4) = (char)iVar4;
    FUN_00619424(uVar2,cVar1,iVar4);
    return 0;
  }
  iVar4 = *(int *)(puVar3 + -0x7f5c);
  iVar5 = *(char *)(iVar4 + uVar6) + -1;
  if (iVar5 < -0x80) {
    uVar2 = *(undefined4 *)(puVar3 + -0x7e8c);
    *(undefined1 *)(iVar4 + uVar6) = 0x80;
    FUN_00619424(uVar2,uVar6 + 1,0xffffffffffffff80);
  }
  else {
    uVar2 = *(undefined4 *)(puVar3 + -0x7e8c);
    *(char *)(iVar4 + uVar6) = (char)iVar5;
    FUN_00619424(uVar2,uVar6 + 1,iVar5);
  }
  return 0;
}


// 0x0613850 (0x114 bytes)
// strings: 0066b800: 'Increment Register' | 0066b7c0: '  set local reg %i to %i\n' | 0066b7e0: '  set global reg %i to %i\n'

undefined8 FUN_00613850(int param_1,undefined8 param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  puVar3 = PTR_PTR_0071b000;
  FUN_0061122c(param_1,*(undefined4 *)(PTR_PTR_0071b000 + -0x7e88));
  cVar1 = *(char *)(param_3 + 1);
  uVar6 = ~(int)cVar1;
  param_1 = param_1 + cVar1 + 0x160;
  if (-1 < cVar1) {
    iVar4 = *(char *)(param_1 + 4) + 1;
    if (0x7f < iVar4) {
      iVar4 = 0x7f;
    }
    uVar2 = *(undefined4 *)(puVar3 + -0x7e90);
    *(char *)(param_1 + 4) = (char)iVar4;
    FUN_00619424(uVar2,cVar1,iVar4);
    return 0;
  }
  iVar4 = *(int *)(puVar3 + -0x7f5c);
  iVar5 = *(char *)(iVar4 + uVar6) + 1;
  if (iVar5 < 0x80) {
    uVar2 = *(undefined4 *)(puVar3 + -0x7e8c);
    *(char *)(iVar4 + uVar6) = (char)iVar5;
    FUN_00619424(uVar2,uVar6 + 1,iVar5);
  }
  else {
    uVar2 = *(undefined4 *)(puVar3 + -0x7e8c);
    *(undefined1 *)(iVar4 + uVar6) = 0x7f;
    FUN_00619424(uVar2,uVar6 + 1,0x7f);
  }
  return 0;
}


// 0x0613964 (0x110 bytes)
// strings: 0066b818: 'Set Register Random' | 0066b7c0: '  set local reg %i to %i\n' | 0066b7e0: '  set global reg %i to %i\n'

undefined8 FUN_00613964(int param_1,undefined8 param_2,int param_3)

{
  char cVar1;
  char cVar2;
  char cVar3;
  undefined4 uVar4;
  undefined *puVar5;
  uint uVar6;
  int iVar7;
  
  puVar5 = PTR_PTR_0071b000;
  FUN_0061122c(param_1,*(undefined4 *)(PTR_PTR_0071b000 + -0x7e84));
  cVar1 = *(char *)(param_3 + 3);
  cVar2 = *(char *)(param_3 + 2);
  uVar6 = FUN_006190b8();
  cVar3 = *(char *)(param_3 + 1);
  iVar7 = ((int)cVar1 - (int)cVar2) + 1;
  iVar7 = ((uVar6 & 0xffff) - ((int)(uVar6 & 0xffff) / iVar7) * iVar7) + (int)*(char *)(param_3 + 2)
  ;
  if (-1 < cVar3) {
    uVar4 = *(undefined4 *)(puVar5 + -0x7e90);
    *(char *)(param_1 + cVar3 + 0x164) = (char)iVar7;
    FUN_00619424(uVar4,cVar3,iVar7);
    return 0;
  }
  uVar4 = *(undefined4 *)(puVar5 + -0x7e8c);
  *(char *)(*(int *)(puVar5 + -0x7f5c) + ~(int)cVar3) = (char)iVar7;
  FUN_00619424(uVar4,~(int)cVar3 + 1,iVar7);
  return 0;
}


// 0x0613a74 (0xd8 bytes)
// strings: 0066b830: 'Set Register' | 0066b7c0: '  set local reg %i to %i\n' | 0066b7e0: '  set global reg %i to %i\n'

undefined8 FUN_00613a74(int param_1,undefined8 param_2,int param_3)

{
  char cVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  
  puVar4 = PTR_PTR_0071b000;
  FUN_0061122c(param_1,*(undefined4 *)(PTR_PTR_0071b000 + -0x7e80));
  cVar1 = *(char *)(param_3 + 1);
  if (-1 < cVar1) {
    uVar2 = *(undefined1 *)(param_3 + 2);
    uVar3 = *(undefined4 *)(puVar4 + -0x7e90);
    *(undefined1 *)(param_1 + cVar1 + 0x164) = uVar2;
    FUN_00619424(uVar3,cVar1,uVar2);
    return 0;
  }
  uVar2 = *(undefined1 *)(param_3 + 2);
  uVar3 = *(undefined4 *)(puVar4 + -0x7e8c);
  *(undefined1 *)(*(int *)(puVar4 + -0x7f5c) + ~(int)cVar1) = uVar2;
  FUN_00619424(uVar3,~(int)cVar1 + 1,uVar2);
  return 0;
}


// 0x0613b4c (0x134 bytes)
// strings: 0066b840: 'Add Pitchbend' | 0066b850: '  pitchbend: %i\n'

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_00613b4c(int param_1,undefined8 param_2,int param_3)

{
  float fVar1;
  undefined *puVar2;
  int iVar3;
  
  puVar2 = PTR_PTR_0071b000;
  FUN_0061122c(param_1,*(undefined4 *)(PTR_PTR_0071b000 + -0x7e7c));
  iVar3 = (int)*(char *)(param_3 + 1);
  if (iVar3 < 0) {
    *(float *)(param_1 + 0x158) =
         (float)(longlong)iVar3 * *(float *)(puVar2 + -0x7e78) + *(float *)(param_1 + 0x158);
    fVar1 = *(float *)(param_1 + 0x158);
  }
  else {
    *(float *)(param_1 + 0x158) =
         *(float *)(param_1 + 0x158) + (float)(longlong)iVar3 / *(float *)(puVar2 + -0x7fe0);
    fVar1 = *(float *)(param_1 + 0x158);
  }
  if ((int)fVar1 < -1) {
    *(undefined4 *)(param_1 + 0x158) = *(undefined4 *)(puVar2 + -0x7e70);
  }
  else if (*(float *)(puVar2 + -0x8000) < fVar1) {
    *(float *)(param_1 + 0x158) = *(float *)(puVar2 + -0x8000);
  }
  FUN_0061f100(param_1);
  FUN_00619424((double)*(float *)(param_1 + 0x158),*(undefined4 *)(puVar2 + -0x7e68),
               (double)*(float *)(param_1 + 0x158));
  return 0;
}


// 0x0613c80 (0x128 bytes)
// strings: 0066b868: 'Set Pitchbend' | 0066b878: '  pitchbend: %f\n'

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_00613c80(int param_1,undefined8 param_2,int param_3)

{
  float fVar1;
  undefined *puVar2;
  int iVar3;
  
  puVar2 = PTR_PTR_0071b000;
  FUN_0061122c(param_1,*(undefined4 *)(PTR_PTR_0071b000 + -0x7e64));
  iVar3 = (int)*(char *)(param_3 + 1);
  if (iVar3 < 0) {
    *(float *)(param_1 + 0x158) = (float)(longlong)iVar3 * *(float *)(puVar2 + -0x7e78);
    fVar1 = *(float *)(param_1 + 0x158);
  }
  else {
    *(float *)(param_1 + 0x158) = (float)(longlong)iVar3 / *(float *)(puVar2 + -0x7fe0);
    fVar1 = *(float *)(param_1 + 0x158);
  }
  if ((int)fVar1 < -1) {
    *(undefined4 *)(param_1 + 0x158) = *(undefined4 *)(puVar2 + -0x7e70);
  }
  else if (*(float *)(puVar2 + -0x8000) < fVar1) {
    *(float *)(param_1 + 0x158) = *(float *)(puVar2 + -0x8000);
  }
  FUN_0061f100(param_1);
  FUN_00619424((double)*(float *)(param_1 + 0x158),*(undefined4 *)(puVar2 + -0x7e60),
               (double)*(float *)(param_1 + 0x158));
  return 0;
}


// 0x0613da8 (0x110 bytes)
// strings: 0066b890: 'Random Pitchbend' | 0066b878: '  pitchbend: %f\n'

undefined8 FUN_00613da8(int param_1,undefined8 param_2,int param_3)

{
  float fVar1;
  float fVar2;
  undefined *puVar3;
  ulonglong uVar4;
  
  puVar3 = PTR_PTR_0071b000;
  FUN_0061122c(param_1,*(undefined4 *)(PTR_PTR_0071b000 + -0x7e5c));
  uVar4 = FUN_006190b8();
  fVar1 = *(float *)(puVar3 + -0x8000);
  fVar2 = (float)((uVar4 & 0xffff) << 1) / *(float *)(puVar3 + -0x7e58) - fVar1;
  *(float *)(param_1 + 0x158) = fVar2;
  if ((int)fVar2 < -1) {
    *(undefined4 *)(param_1 + 0x158) = *(undefined4 *)(puVar3 + -0x7e70);
  }
  else if (fVar1 < fVar2) {
    *(float *)(param_1 + 0x158) = fVar1;
  }
  *(float *)(param_1 + 0x158) =
       *(float *)(param_1 + 0x158) *
       ((float)(longlong)*(char *)(param_3 + 1) / *(float *)(puVar3 + -0x7e50));
  FUN_0061f100(param_1);
  FUN_00619424((double)*(float *)(param_1 + 0x158),*(undefined4 *)(puVar3 + -0x7e60),
               (double)*(float *)(param_1 + 0x158));
  return 0;
}


// 0x0613eb8 (0x208 bytes)
// strings: 0066b8a8: 'Delay' | 0066b8b0: '  delay: %i\n'

int FUN_00613eb8(int param_1,undefined8 param_2,uint *param_3)

{
  byte bVar1;
  undefined *puVar2;
  int iVar5;
  ulonglong uVar3;
  ulonglong uVar4;
  byte *pbVar6;
  
  puVar2 = PTR_PTR_0071b000;
  FUN_0061122c(param_1,*(undefined4 *)(PTR_PTR_0071b000 + -0x7e48));
  iVar5 = **(int **)(puVar2 + -0x7eac) + 1;
  **(int **)(puVar2 + -0x7eac) = iVar5;
  if (8 < iVar5) {
    FUN_006194f4(0x84,8,0,0,0);
    *(short *)(param_1 + 0x236) = *(short *)(param_1 + 0x236) + -1;
    return 1;
  }
  iVar5 = FUN_0060d938(*(undefined4 *)(param_1 + 0x240));
  pbVar6 = (byte *)(iVar5 + (*param_3 & 0xffffff));
  bVar1 = *pbVar6;
  if (bVar1 != 1) {
    if ((bVar1 & 2) != 0) {
      if ((bVar1 & 4) == 0) {
        uVar4 = FUN_006190b8();
        iVar5 = (int)(uVar4 & 0xffff) -
                (int)((uVar4 & 0xffff) / (ulonglong)*(ushort *)(pbVar6 + 2)) *
                (uint)*(ushort *)(pbVar6 + 2);
      }
      else if ((char)pbVar6[1] < '\0') {
        uVar3 = FUN_006190b8();
        uVar4 = (longlong)*(char *)(*(int *)(puVar2 + -0x7f5c) + ~(int)(char)pbVar6[1]) & 0xffff;
        iVar5 = (int)(uVar3 & 0xffff) - (int)((uVar3 & 0xffff) / uVar4) * (int)uVar4;
      }
      else {
        uVar3 = FUN_006190b8();
        uVar4 = (longlong)*(char *)(param_1 + (char)pbVar6[1] + 0x164) & 0xffff;
        iVar5 = (int)(uVar3 & 0xffff) - (int)((uVar3 & 0xffff) / uVar4) * (int)uVar4;
      }
      goto LAB_00613fe4;
    }
    if (bVar1 == 4) {
      bVar1 = pbVar6[1];
      if ((char)bVar1 < '\0') {
        iVar5 = (int)*(char *)(*(int *)(puVar2 + -0x7f5c) + ~(int)(char)bVar1);
      }
      else {
        iVar5 = (int)*(char *)(param_1 + (char)bVar1 + 0x164);
      }
      goto LAB_00613fe4;
    }
  }
  iVar5 = 0;
LAB_00613fe4:
  FUN_00619424(*(undefined4 *)(puVar2 + -0x7e44),iVar5);
  return iVar5;
}


// 0x06140c0 (0x80 bytes)
// strings: 0066b8c0: 'Random Delay' | 0066b8b0: '  delay: %i\n'

int FUN_006140c0(undefined8 param_1,undefined8 param_2,uint *param_3)

{
  undefined *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  
  puVar1 = PTR_PTR_0071b000;
  FUN_0061122c(param_1,*(undefined4 *)(PTR_PTR_0071b000 + -0x7e40));
  uVar2 = FUN_006190b8();
  uVar3 = ((ulonglong)*param_3 & 0xffffff) + 1;
  iVar4 = (int)(uVar2 & 0xffff) - (int)((uVar2 & 0xffff) / uVar3) * (int)uVar3;
  FUN_00619424(*(undefined4 *)(puVar1 + -0x7e44),iVar4);
  return iVar4;
}


// 0x0614140 (0x4c8 bytes)
// strings: 0066b8d0: 'Random Play Ex'

undefined4 FUN_00614140(int param_1,undefined4 param_2,uint *param_3)

{
  byte bVar1;
  undefined4 uVar2;
  bool bVar3;
  char *pcVar4;
  undefined *puVar5;
  int iVar6;
  short sVar9;
  uint uVar7;
  undefined4 uVar8;
  char cVar10;
  int iVar11;
  char cVar13;
  int iVar12;
  int iVar14;
  char cVar15;
  longlong lVar16;
  ulonglong uVar17;
  
  puVar5 = PTR_PTR_0071b000;
  FUN_0061122c(param_1,*(undefined4 *)(PTR_PTR_0071b000 + -0x7e3c));
  if (*(short *)(param_1 + 0x238) != 0) {
    uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x240) + 0xc);
    uVar8 = FUN_00610790(*(int *)(param_1 + 0x240),param_2);
    FUN_006194f4(10,uVar2,uVar8,*(short *)(param_1 + 0x236) + 1,0);
    return 0xffffffff;
  }
  iVar6 = **(int **)(puVar5 + -0x7eac) + 1;
  **(int **)(puVar5 + -0x7eac) = iVar6;
  if (8 < iVar6) {
    FUN_006194f4(0x84,8,0,0,0);
    *(short *)(param_1 + 0x236) = *(short *)(param_1 + 0x236) + -1;
    return 1;
  }
  iVar6 = FUN_0060d938(*(undefined4 *)(param_1 + 0x240));
  pcVar4 = (char *)(iVar6 + (*param_3 & 0xffffff));
  cVar15 = pcVar4[3];
  iVar6 = (int)cVar15;
  if ('\x0f' < cVar15) {
    cVar15 = '\x10';
    iVar6 = 0x10;
  }
  if (*pcVar4 + -1 < iVar6) {
    cVar15 = *pcVar4 + -1;
  }
  if (pcVar4[0x15] == '\0') {
    if (pcVar4[cVar15 + 4] == -1) {
      pcVar4[0x15] = '\0';
    }
    else {
      pcVar4[0x15] = '\x01';
    }
  }
  cVar13 = pcVar4[2];
  if (cVar13 == '\0') {
LAB_006142b8:
    uVar7 = FUN_006190b8();
    iVar6 = (uVar7 & 0xffff) - ((int)(uVar7 & 0xffff) / (int)*pcVar4) * (int)*pcVar4;
  }
  else {
    if (cVar13 != '\x01') {
      FUN_006194f4(0xc,cVar13,0,0,0);
      sVar9 = 0;
      iVar6 = 0;
      goto LAB_006142dc;
    }
    if (pcVar4[0x15] == '\x01') {
      if (*pcVar4 + -1 == (int)cVar15) {
        iVar6 = 0;
        cVar13 = '\0';
        cVar10 = '\0';
        if (0 < cVar15) {
          uVar17 = (longlong)cVar15 & 0xffffffff;
          cVar10 = '\0';
          iVar14 = 0;
          iVar11 = 1;
          do {
            iVar6 = iVar6 + iVar14;
            cVar13 = (char)iVar6;
            cVar10 = cVar10 + pcVar4[iVar14 + 5];
            uVar17 = uVar17 - 1;
            iVar14 = iVar11;
            iVar11 = iVar11 + 1;
          } while (uVar17 != 0);
        }
        pcVar4[0x15] = '\x02';
        cVar10 = (*pcVar4 + cVar13 + -1) - cVar10;
        iVar6 = (int)cVar10;
        sVar9 = (short)cVar10;
        goto LAB_006142dc;
      }
    }
    else if (pcVar4[0x15] == '\x02') {
      uVar7 = FUN_006190b8();
      lVar16 = 0x10;
      pcVar4[0x15] = '\0';
      pcVar4[4] = '\0';
      iVar6 = (uVar7 & 0xffff) - ((int)(uVar7 & 0xffff) / (int)*pcVar4) * (int)*pcVar4;
      iVar14 = 0;
      do {
        pcVar4[iVar14 + 5] = -1;
        lVar16 = lVar16 + -1;
        iVar14 = iVar14 + 1;
      } while (lVar16 != 0);
      goto LAB_006142d8;
    }
    iVar14 = 0;
    uVar7 = ((int)pcVar4[4] - (int)cVar15) + 0x10;
    iVar11 = uVar7 + (((int)uVar7 >> 4) + (uint)((int)uVar7 < 0 && (uVar7 & 0xf) != 0) & 0xfffffff)
                     * -0x10;
    cVar15 = (char)iVar11;
    do {
      uVar7 = FUN_006190b8();
      bVar1 = pcVar4[4];
      iVar14 = iVar14 + 1;
      iVar6 = (uVar7 & 0xffff) - ((int)(uVar7 & 0xffff) / (int)*pcVar4) * (int)*pcVar4;
      if ((int)(char)bVar1 < (int)cVar15) {
        bVar3 = true;
        cVar13 = cVar15;
        iVar12 = iVar11;
        if ((int)cVar15 < (char)bVar1 + 0x10) {
          do {
            uVar7 = (uint)cVar13;
            if (pcVar4[(char)(cVar13 - (char)(((longlong)((int)uVar7 >> 4) +
                                               (ulonglong)((int)uVar7 < 0 && (uVar7 & 0xf) != 0) &
                                              0xffffffff) << 4)) + 5] == iVar6) {
              bVar3 = false;
              iVar12 = bVar1 + 0x10;
            }
            iVar12 = iVar12 + 1;
            cVar13 = (char)iVar12;
          } while ((int)cVar13 < (char)bVar1 + 0x10);
        }
        else {
LAB_0061446c:
          bVar3 = true;
        }
      }
      else {
        bVar3 = true;
        cVar13 = cVar15;
        iVar12 = iVar11;
        if ((char)bVar1 + 1 <= (int)cVar15) goto LAB_0061446c;
        do {
          uVar7 = (uint)cVar13;
          if (pcVar4[(char)(cVar13 - (char)(((longlong)((int)uVar7 >> 4) +
                                             (ulonglong)((int)uVar7 < 0 && (uVar7 & 0xf) != 0) &
                                            0xffffffff) << 4)) + 5] == iVar6) {
            bVar3 = false;
            iVar12 = bVar1 + 1;
          }
          iVar12 = iVar12 + 1;
          cVar13 = (char)iVar12;
        } while ((int)cVar13 < (char)bVar1 + 1);
      }
      if (iVar14 == 0x20) goto LAB_006142b8;
    } while (!bVar3);
  }
LAB_006142d8:
  sVar9 = (short)iVar6;
LAB_006142dc:
  *(short *)(param_1 + 0x236) = sVar9 * pcVar4[1] + *(short *)(param_1 + 0x236);
  *(short *)(param_1 + 0x23a) = pcVar4[1] + 1;
  cVar15 = *pcVar4;
  cVar13 = pcVar4[1];
  *(undefined2 *)(param_1 + 0x238) = 1;
  *(short *)(param_1 + 0x23c) = ((cVar15 - sVar9) + -1) * (short)cVar13;
  uVar7 = (int)pcVar4[4] + 1;
  pcVar4[pcVar4[4] + 5] = (char)iVar6;
  pcVar4[4] = (char)uVar7 -
              (char)(((longlong)((int)uVar7 >> 4) +
                      (ulonglong)((int)uVar7 < 0 && (uVar7 & 0xf) != 0) & 0xffffffff) << 4);
  return 0;
}


// 0x0614608 (0x190 bytes)
// strings: 0066b8e0: 'Random Play'

undefined4 FUN_00614608(int param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  FUN_0061122c(param_1,*(undefined4 *)(PTR_PTR_0071b000 + -0x7e38));
  if (*(short *)(param_1 + 0x238) == 0) {
    uVar6 = 0;
    if ((*(char *)(param_3 + 1) != '\0') && (*(char *)(param_3 + 2) != '\0')) {
      uVar3 = FUN_006190b8();
      cVar1 = *(char *)(param_3 + 1);
      iVar4 = (uVar3 & 0xffff) - ((int)(uVar3 & 0xffff) / (int)cVar1) * (int)cVar1;
      if (*(char *)(param_3 + 3) == iVar4) {
        iVar4 = iVar4 + 1;
        if (cVar1 == iVar4) {
          iVar4 = 0;
        }
      }
      *(char *)(param_3 + 3) = (char)iVar4;
      *(short *)(param_1 + 0x236) =
           (short)iVar4 * (short)*(char *)(param_3 + 2) + *(short *)(param_1 + 0x236);
      *(short *)(param_1 + 0x23a) = *(char *)(param_3 + 2) + 1;
      cVar1 = *(char *)(param_3 + 1);
      cVar2 = *(char *)(param_3 + 2);
      *(undefined2 *)(param_1 + 0x238) = 1;
      *(short *)(param_1 + 0x23c) = (((short)cVar1 - (short)iVar4) + -1) * (short)cVar2;
      return 0;
    }
  }
  else {
    uVar6 = *(undefined4 *)(*(int *)(param_1 + 0x240) + 0xc);
    uVar5 = FUN_00610790(*(int *)(param_1 + 0x240),param_2);
    FUN_006194f4(10,uVar6,uVar5,*(short *)(param_1 + 0x236) + 1,0);
    uVar6 = 0xffffffff;
  }
  return uVar6;
}


// 0x0614798 (0x34 bytes)
// strings: 0066b8f0: 'Stop Sound'

undefined8 FUN_00614798(undefined8 param_1)

{
  FUN_0061122c(param_1,*(undefined4 *)(PTR_PTR_0071b000 + -0x7e34));
  return 0xffffffffffffffff;
}


// 0x06147cc (0x110 bytes)
// strings: 0066b900: 'Loop Continue' | 0066b910: '%s(%d) : Loop Continue grain with no Loop End.\n' | 0066b378: 'common/grains.cpp'

undefined4 FUN_006147cc(int param_1,int param_2)

{
  undefined *puVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  
  puVar1 = PTR_PTR_0071b000;
  FUN_0061122c(param_1,*(undefined4 *)(PTR_PTR_0071b000 + -0x7e30));
  iVar4 = (int)*(short *)(param_1 + 0x236) + 1;
  if (iVar4 < (int)(uint)*(byte *)(param_2 + 4)) {
    lVar3 = ((ulonglong)(uint)(int)*(short *)(param_1 + 0x236) & 0x1fffffff) << 3;
    do {
      lVar3 = lVar3 + 8;
      iVar2 = FUN_0060dc04(*(undefined4 *)(param_1 + 0x240),param_2);
      if (*(char *)(iVar2 + (int)lVar3) == '\x16') {
        *(short *)(param_1 + 0x236) = (short)iVar4;
        return 0;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)(uint)*(byte *)(param_2 + 4));
  }
  snd_Printf((char)*(undefined4 *)(puVar1 + -0x7e2c));
  return 0xffffffff;
}


// 0x06148dc (0x11c bytes)
// strings: 0066b940: 'Loop End' | 0066b950: '%s(%d) : Loop End grain with no Loop Start.\n' | 0066b378: 'common/grains.cpp'

undefined4 FUN_006148dc(int param_1,undefined4 param_2)

{
  bool bVar1;
  undefined *puVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  
  puVar2 = PTR_PTR_0071b000;
  FUN_0061122c(param_1,*(undefined4 *)(PTR_PTR_0071b000 + -0x7e28));
  iVar5 = (int)*(short *)(param_1 + 0x236) - 1;
  if (-1 < iVar5) {
    lVar4 = ((ulonglong)(uint)(int)*(short *)(param_1 + 0x236) & 0x1fffffff) << 3;
    do {
      lVar4 = lVar4 + -8;
      iVar3 = FUN_0060dc04(*(undefined4 *)(param_1 + 0x240),param_2);
      bVar1 = iVar5 != 0;
      if (*(char *)(iVar3 + (int)lVar4) == '\x15') {
        *(short *)(param_1 + 0x236) = (short)iVar5 + -1;
        if ((*(uint *)(param_1 + 4) & 0x40) != 0) {
          return 1;
        }
        *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x40;
        return 0;
      }
      iVar5 = iVar5 + -1;
    } while (bVar1);
  }
  snd_Printf((char)*(undefined4 *)(puVar2 + -0x7e24));
  return 0xffffffff;
}


// 0x06149f8 (0x34 bytes)
// strings: 0066b980: 'Loop Start'

undefined8 FUN_006149f8(undefined8 param_1)

{
  FUN_0061122c(param_1,*(undefined4 *)(PTR_PTR_0071b000 + -0x7e20));
  return 0;
}


// 0x0614a2c (0x74 bytes)
undefined8 FUN_00614a2c(int param_1,undefined8 param_2,uint *param_3)

{
  int iVar1;
  
  FUN_0061122c(param_1,*(undefined4 *)(PTR_PTR_0071b000 + -0x7e1c));
  iVar1 = FUN_0060d938(*(undefined4 *)(param_1 + 0x240));
  FUN_006174b0(param_1,iVar1 + (*param_3 & 0xffffff));
  return 0;
}


// 0x0614aa0 (0x554 bytes)
// strings: 0066b998: 'Noise voices are not currently supported.' | 0066b9c8: 'Start tone grain' | 0066b9e0: ' volume: %f pan: %d, sample rate: %f'

undefined8 FUN_00614aa0(int param_1,undefined8 param_2,uint *param_3)

{
  undefined1 uVar1;
  char cVar2;
  ushort uVar3;
  short sVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  undefined *puVar8;
  int iVar9;
  int *piVar10;
  undefined1 uVar14;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  undefined1 *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  int local_110;
  GPiece<4> local_10c;
  GPiece<4> local_108;
  GPiece<56> auStack_104;
  undefined1 *local_cc;
  
  puVar8 = PTR_PTR_0071b000;
  iVar9 = FUN_0060d938(*(undefined4 *)(param_1 + 0x240));
  puVar15 = (undefined1 *)(iVar9 + (*param_3 & 0xffffff));
  if ((*(ushort *)(puVar15 + 0xe) & 8) != 0) {
    FUN_0061122c(param_1,*(undefined4 *)(puVar8 + -0x7e18));
    return 0;
  }
  FUN_0061122c(param_1,*(undefined4 *)(puVar8 + -0x7e14));
  if ((*(uint *)(param_1 + 4) & 0x20) != 0) {
    return 0;
  }
  local_110 = *(int *)(puVar15 + 0x14);
  piVar10 = (int *)FUN_0060dae4(*(undefined4 *)(param_1 + 0x240),puVar15);
  uVar3 = *(ushort *)(puVar15 + 0xe);
  if ((uVar3 & 0x800) == 0) {
    iVar9 = -0x80000000;
    if ((uVar3 & 0x80) != 0) goto LAB_00614c48;
    if ((uVar3 & 0x1000) == 0) {
      iVar9 = -0x7fffffff;
      goto LAB_00614c48;
    }
    iVar9 = -0x7ffffffe;
  }
  else {
    iVar9 = *piVar10;
    local_110 = (local_110 - piVar10[1]) + -8;
    if (iVar9 != -0x7ffffffe) goto LAB_00614c48;
  }
  local_110 = local_110 + -0x80;
LAB_00614c48:
  local_cc = (undefined1 *)0x0;
  FUN_0061031c(*(ushort *)(puVar15 + 0xe) & 0x40,*(ushort *)(puVar15 + 0xe) & 0x2000,iVar9,local_10c
               ,&local_110,local_108);
  uVar3 = *(ushort *)(puVar15 + 0xe);
  if ((uVar3 & 0x100) != 0) {
    uVar7 = (uint)((longlong)((ulonglong)uVar3 << 0x31) >> 0x3f) & 4;
    iVar9 = uVar7 + 0x20;
    if (-1 < (short)uVar3) {
      iVar9 = uVar7 + 0x18;
    }
    local_cc = puVar15 + iVar9;
  }
  iVar9 = FUN_00610494(local_cc,7);
  uVar14 = FUN_00610bb4(param_1,puVar15[1]);
  uVar16 = FUN_0060fabc(uVar14,0);
  uVar11 = FUN_0061085c(param_1,puVar15);
  uVar14 = *(undefined1 *)(param_1 + 0x10);
  uVar17 = FUN_0060fa5c(puVar15);
  uVar1 = *puVar15;
  cVar2 = puVar15[8];
  if (iVar9 != 0) {
    FUN_00610adc(param_1,*(undefined1 *)(iVar9 + 8));
  }
  iVar9 = FUN_006218e0(uVar17,uVar16,uVar14,uVar1,local_110,((longlong)cVar2 & 0x1ffffffU) << 7,
                       uVar11,0,0,0);
  if (-1 < iVar9) {
    piVar10 = *(int **)(puVar8 + -0x7ef4);
    uVar3 = *(ushort *)(puVar15 + 0xe);
    uVar5 = *(undefined4 *)(param_1 + 0x240);
    iVar13 = iVar9 * 0x68;
    iVar12 = iVar13 + *piVar10;
    *(uint **)(iVar12 + 100) = param_3;
    *(undefined4 *)(iVar12 + 0x5c) = uVar5;
    if ((uVar3 & 0x4000) == 0) {
      uVar5 = *(undefined4 *)(puVar8 + -0x8000);
    }
    else {
      uVar5 = *(undefined4 *)(puVar15 + 0x18);
    }
    sVar4 = *(short *)(puVar15 + 0xe);
    iVar6 = *piVar10;
    *(undefined4 *)(iVar12 + 0x50) = uVar5;
    if (sVar4 < 0) {
      uVar5 = *(undefined4 *)(puVar15 + 0x1c);
    }
    else {
      uVar5 = *(undefined4 *)(puVar8 + -0x8000);
    }
    sVar4 = *(short *)(puVar15 + 0xe);
    iVar12 = *piVar10;
    *(undefined4 *)(iVar13 + iVar6 + 0x54) = uVar5;
    if (sVar4 < 0) {
      uVar5 = *(undefined4 *)(puVar15 + 0x20);
    }
    else {
      uVar5 = *(undefined4 *)(puVar8 + -0x8000);
    }
    *(undefined4 *)(iVar13 + iVar12 + 0x58) = uVar5;
    if (local_cc != (undefined1 *)0x0) {
      FUN_00620290(iVar9,local_cc,param_1);
    }
    uVar17 = snd_NoteToSampleRate(puVar15[2],puVar15[3]);
    FUN_00619424(uVar16,uVar17,*(undefined4 *)(puVar8 + -0x7e0c),uVar16,uVar11,uVar17);
    iVar12 = FUN_00610494(local_cc,4);
    iVar13 = FUN_00610494(local_cc,10);
    if (iVar13 == 0) {
      if (iVar12 == 0) {
        FUN_0060fec8(*(undefined2 *)(puVar15 + 10),*(undefined2 *)(puVar15 + 0xc),auStack_104);
      }
      else {
        FUN_00610224(iVar12,auStack_104);
      }
    }
    else {
      FUN_006102b0(iVar13,auStack_104);
    }
    FUN_006209e4(uVar17,iVar9,auStack_104);
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x10;
  }
  return 0;
}


// 0x0614ff4 (0x34 bytes)
// strings: 0066ba08: 'Null' (raw)

undefined8 FUN_00614ff4(undefined8 param_1)

{
  FUN_0061122c(param_1,*(undefined4 *)(PTR_PTR_0071b000 + -0x7e08));
  return 0;
}


// 0x0615028 (0x34 bytes)
// strings: 0066ba10: 'XREF Num'

undefined8 FUN_00615028(undefined8 param_1)

{
  FUN_0061122c(param_1,*(undefined4 *)(PTR_PTR_0071b000 + -0x7e04));
  return 0;
}


// 0x061505c (0x34 bytes)
// strings: 0066ba20: 'XREF ID'

undefined8 FUN_0061505c(undefined8 param_1)

{
  FUN_0061122c(param_1,*(undefined4 *)(PTR_PTR_0071b000 + -0x7e00));
  return 0;
}


// 0x0615090 (0x34 bytes)
// strings: 0066ba28: 'NULL' (raw)

undefined8 FUN_00615090(undefined8 param_1)

{
  FUN_0061122c(param_1,*(undefined4 *)(PTR_PTR_0071b000 + -0x7dfc));
  return 0;
}


// 0x06150c4 (0x74 bytes)
int FUN_006150c4(void)

{
  int iVar1;
  ulonglong uVar2;
  
  if (**(uint **)(PTR_PTR_0071b004 + -0x8000) == 0) {
LAB_00615128:
    iVar1 = -1;
  }
  else {
    iVar1 = 0;
    if (*(char *)**(undefined4 **)(PTR_PTR_0071b004 + -0x7ffc) != '\0') {
      uVar2 = (ulonglong)**(uint **)(PTR_PTR_0071b004 + -0x8000);
      iVar1 = 0;
      do {
        iVar1 = iVar1 + 1;
        uVar2 = uVar2 - 1;
        if (uVar2 == 0) goto LAB_00615128;
      } while (((char *)**(undefined4 **)(PTR_PTR_0071b004 + -0x7ffc))[iVar1 * 0x10] != '\0');
    }
  }
  return iVar1;
}


// 0x0615138 (0x78 bytes)
undefined4 FUN_00615138(uint param_1,int *param_2)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = **(int **)(PTR_PTR_0071b004 + -0x7ff8);
  if (iVar2 == 0) {
LAB_00615184:
    uVar3 = 0;
  }
  else {
    uVar1 = *(ushort *)(iVar2 + 2);
    while (uVar1 != param_1) {
      iVar2 = *(int *)(iVar2 + 0xc);
      if (iVar2 == 0) goto LAB_00615184;
      uVar1 = *(ushort *)(iVar2 + 2);
    }
    uVar3 = 1;
    if (param_2 != (int *)0x0) {
      *param_2 = iVar2;
      return 1;
    }
  }
  return uVar3;
}


// 0x06151b0 (0x68 bytes)
int FUN_006151b0(int param_1)

{
  int iVar1;
  
  if ((**(int **)(PTR_PTR_0071b004 + -0x7ff4) != 0) && (-1 < param_1)) {
    iVar1 = 0x40;
    if (**(int **)(PTR_PTR_0071b004 + -0x7ff0) != 0) {
      iVar1 = *(int *)(**(int **)(PTR_PTR_0071b004 + -0x7ff0) + 0x1c);
    }
    if (param_1 < iVar1) {
      return **(int **)(PTR_PTR_0071b004 + -0x7ff4) + param_1 * 0x110;
    }
  }
  return 0;
}


// 0x0615218 (0x40 bytes)
void FUN_00615218(void)

{
  if ((**(int **)(PTR_PTR_0071b004 + -0x7fec) != 0) &&
     ((**(uint **)(PTR_PTR_0071b004 + -0x7fe8) & 1) == 0)) {
    FUN_006151b0(0);
    return;
  }
  return;
}


// 0x0615258 (0x4c bytes)
void FUN_00615258(double param_1,float *param_2,float *param_3)

{
  double dVar1;
  
  dVar1 = (double)*param_2;
  if (dVar1 == (double)*param_3) {
    return;
  }
  if (dVar1 < (double)*param_3) {
    *param_2 = (float)(dVar1 + param_1);
    if ((float)(dVar1 + param_1) <= *param_3) {
      return;
    }
    *param_2 = *param_3;
    return;
  }
  *param_2 = (float)(dVar1 - param_1);
  if (*param_3 <= (float)(dVar1 - param_1)) {
    return;
  }
  *param_2 = *param_3;
  return;
}


// 0x06152a4 (0x140 bytes)
void FUN_006152a4(void)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  
  puVar6 = PTR_PTR_0071b004;
  if (**(int **)(PTR_PTR_0071b004 + -0x7fec) != 0) {
    if (**(float **)(PTR_PTR_0071b004 + -0x7fd8) != **(float **)(PTR_PTR_0071b004 + -0x7fd4)) {
      FUN_00615258((double)**(float **)(PTR_PTR_0071b004 + -0x7fd0));
      **(undefined4 **)(puVar6 + -0x7fcc) = 0xffffffff;
    }
    puVar2 = *(uint **)(puVar6 + -0x7fcc);
    iVar8 = 0;
    iVar3 = *(int *)(puVar6 + -0x7fe4);
    iVar4 = *(int *)(puVar6 + -0x7fe0);
    iVar5 = *(int *)(puVar6 + -0x7fdc);
    uVar7 = 0;
    do {
      while( true ) {
        if (*(float *)(iVar8 + iVar3) == *(float *)(iVar8 + iVar4)) break;
        FUN_00615258((double)*(float *)(iVar8 + iVar5),uVar7 * 4 + iVar3,uVar7 * 4 + iVar4);
        bVar1 = iVar8 == 0x7c;
        iVar8 = iVar8 + 4;
        *puVar2 = 1 << (uVar7 & 0x3f) | *puVar2;
        uVar7 = uVar7 + 1;
        if (bVar1) {
          return;
        }
      }
      bVar1 = iVar8 != 0x7c;
      iVar8 = iVar8 + 4;
      uVar7 = uVar7 + 1;
    } while (bVar1);
  }
  return;
}


// 0x06153e4 (0x18 bytes)
double FUN_006153e4(void)

{
  return (double)**(float **)(PTR_PTR_0071b004 + -0x7fd8);
}


// 0x06153fc (0x40 bytes)
void FUN_006153fc(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong lVar5;
  
  iVar4 = 0;
  lVar5 = 0x20;
  iVar1 = *(int *)(PTR_PTR_0071b004 + -0x7fe4);
  do {
    puVar2 = (undefined4 *)(iVar4 + iVar1);
    puVar3 = (undefined4 *)(iVar4 + param_1);
    iVar4 = iVar4 + 4;
    *puVar3 = *puVar2;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  return;
}


// 0x061543c (0x6c bytes)
// strings: 0066ba30: 'snd_gmxGetActiveSnapshotCount(): Group mixer is not initialized!\n'

undefined4 snd_gmxGetActiveSnapshotCount(void)

{
  if (**(int **)(PTR_PTR_0071b004 + -0x7fec) != 0) {
    return **(undefined4 **)(PTR_PTR_0071b004 + -0x7fc4);
  }
  snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b004 + -0x7fc8));
  return 0;
}


// 0x06154a8 (0x480 bytes)
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_006154a8(double param_1)

{
  char cVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  uint uVar5;
  char *pcVar6;
  bool bVar7;
  undefined *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined4 *puVar13;
  float *pfVar14;
  float *pfVar15;
  float *pfVar16;
  int iVar17;
  int iVar18;
  longlong lVar19;
  double extraout_f1;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  char acStack_240 [32];
  float afStack_220 [32];
  GPiece<16> auStack_1a0;
  GPiece<16> auStack_190;
  GPiece<16> auStack_180;
  GPiece<16> auStack_170;
  GPiece<16> auStack_160;
  GPiece<16> auStack_150;
  GPiece<16> auStack_140;
  GPiece<16> auStack_130;
  GPiece<16> auStack_120;
  GPiece<16> auStack_110;
  GPiece<16> auStack_100;
  GPiece<16> auStack_f0;
  GPiece<16> auStack_e0;
  GPiece<16> auStack_d0;
  GPiece<16> auStack_c0;
  GPiece<16> auStack_b0;
  int local_a0;
  longlong local_90;
  
  puVar8 = PTR_PTR_0071b004;
  if (**(int **)(PTR_PTR_0071b004 + -0x7fec) != 0) {
    if (param_1 < (double)*(float *)(PTR_PTR_0071b004 + -0x7f90)) {
      param_1 = (double)*(float *)(PTR_PTR_0071b004 + -0x7f90);
    }
    snd_SynthLock();
    puVar13 = *(undefined4 **)(puVar8 + -0x7fc0);
    iVar10 = 0;
    fVar2 = **(float **)(puVar8 + -0x7fbc);
    lVar19 = 0x20;
    pfVar14 = afStack_220;
    do {
      pcVar6 = acStack_240 + iVar10;
      iVar10 = iVar10 + 1;
      uVar4 = *puVar13;
      puVar13 = puVar13 + 1;
      *pfVar14 = fVar2;
      *pcVar6 = (char)uVar4;
      lVar19 = lVar19 + -1;
      pfVar14 = pfVar14 + 1;
    } while (lVar19 != 0);
    iVar10 = **(int **)(puVar8 + -0x7ff8);
    if (iVar10 == 0) {
      fVar2 = *(float *)(puVar8 + -0x7f90);
      dVar22 = (double)*(float *)(puVar8 + -0x7fb8);
    }
    else {
      dVar21 = (double)*(float *)(puVar8 + -0x7f90);
      bVar7 = false;
      auStack_b0 = (GPiece<16>)0x0;
      auStack_1a0 = (GPiece<16>)0x0;
      auStack_190 = (GPiece<16>)0x0;
      auStack_180 = (GPiece<16>)0x0;
      auStack_170 = (GPiece<16>)0x0;
      auStack_160 = (GPiece<16>)0x0;
      auStack_150 = (GPiece<16>)0x0;
      auStack_140 = (GPiece<16>)0x0;
      auStack_130 = (GPiece<16>)0x0;
      auStack_120 = (GPiece<16>)0x0;
      auStack_110 = (GPiece<16>)0x0;
      auStack_100 = (GPiece<16>)0x0;
      auStack_f0 = (GPiece<16>)0x0;
      auStack_e0 = (GPiece<16>)0x0;
      auStack_d0 = (GPiece<16>)0x0;
      auStack_c0 = (GPiece<16>)0x0;
      do {
        pfVar14 = *(float **)(iVar10 + 8);
        if ((!bVar7) && (pfVar14[1] != 0.0)) {
          if (pfVar14[1] == 1.4013e-45) {
            bVar7 = true;
            dVar21 = (double)(*pfVar14 * *(float *)(iVar10 + 4));
          }
          else {
            dVar21 = (double)(float)((double)*pfVar14 * (double)*(float *)(iVar10 + 4) + dVar21);
          }
        }
        pfVar14 = pfVar14 + 4;
        iVar11 = 0;
        lVar19 = 0x20;
        iVar12 = 0;
        do {
          if (*(int *)(auStack_1a0 + iVar12) == 0) {
            if (*(char *)pfVar14 != '\0') {
              pfVar16 = (float *)(iVar12 + (int)afStack_220);
              if (*(char *)pfVar14 == '\x01') {
                fVar2 = pfVar14[1];
                fVar3 = *(float *)(iVar10 + 4);
                *(int *)(auStack_1a0 + iVar12) = 1;
                *pfVar16 = fVar2 * fVar3;
              }
              else {
                *pfVar16 = pfVar14[1] * *(float *)(iVar10 + 4) + *pfVar16;
              }
              if (*(int *)(auStack_120 + iVar12) == 0) {
                cVar1 = *(char *)((int)pfVar14 + 1);
                *(int *)(auStack_120 + iVar12) = 1;
                acStack_240[iVar11] = cVar1;
              }
            }
          }
          iVar11 = iVar11 + 1;
          iVar12 = iVar12 + 4;
          pfVar14 = pfVar14 + 2;
          lVar19 = lVar19 + -1;
        } while (lVar19 != 0);
        iVar10 = *(int *)(iVar10 + 0xc);
      } while (iVar10 != 0);
      dVar22 = (double)*(float *)(puVar8 + -0x7fb8);
      fVar2 = (float)(dVar21 / dVar22);
    }
    dVar21 = (double)*(float *)(puVar8 + -0x7f90);
    uVar5 = **(uint **)(puVar8 + -0x7fb0);
    if (param_1 <= dVar21) {
      param_1 = (double)*(float *)(puVar8 + -0x7fac);
    }
    dVar23 = (double)*(float *)(puVar8 + -0x7fa4);
    iVar10 = FUN_005dcbd8(dVar23,(double)fVar2);
    pfVar14 = *(float **)(puVar8 + -0x7fd4);
    *pfVar14 = (float)extraout_f1;
    local_a0 = (int)extraout_f1;
    if (local_a0 < 0) {
      *pfVar14 = (float)dVar21;
    }
    else if ((double)*(float *)(puVar8 + -0x7f9c) < extraout_f1) {
      *pfVar14 = *(float *)(puVar8 + -0x7f9c);
    }
    iVar18 = 0;
    pfVar16 = *(float **)(puVar8 + -0x7fe0);
    iVar11 = *(int *)(puVar8 + -0x7fdc);
    iVar12 = *(int *)(puVar8 + -0x7fe4);
    puVar13 = *(undefined4 **)(puVar8 + -0x7f94);
    dVar21 = (double)*(float *)(puVar8 + -0x7f9c);
    local_90 = (longlong)(int)(0xf0 / (ulonglong)uVar5);
    dVar24 = (double)(float)(param_1 * (double)local_90);
    **(float **)(puVar8 + -0x7fd0) =
         (float)(ABS((double)(*pfVar14 - **(float **)(puVar8 + -0x7fd8))) / dVar24);
    iVar9 = 0;
    do {
      while( true ) {
        iVar17 = iVar9;
        dVar20 = (double)FUN_005dcbd8(dVar23,(double)(float)((double)*(float *)(iVar18 + (int)
                                                  afStack_220) / dVar22),iVar10);
        *pfVar16 = (float)dVar20;
        local_a0 = (int)dVar20;
        if (local_a0 < 0) {
          *pfVar16 = 0.0;
        }
        else if (dVar21 < dVar20) {
          *pfVar16 = (float)dVar21;
        }
        pfVar15 = (float *)(iVar18 + iVar12);
        fVar2 = *pfVar16;
        uVar4 = *puVar13;
        pfVar14 = (float *)(iVar18 + iVar11);
        cVar1 = acStack_240[iVar17];
        iVar18 = iVar18 + 4;
        pfVar16 = pfVar16 + 1;
        *pfVar14 = (float)(ABS((double)(fVar2 - *pfVar15)) / dVar24);
        if ((char)uVar4 <= cVar1) break;
        iVar10 = FUN_0061ef28(iVar17,cVar1);
        iVar9 = iVar17 + 1;
        if (iVar17 == 0x1f) goto LAB_00615894;
      }
      iVar9 = iVar17 + 1;
      iVar10 = iVar17;
    } while (iVar17 != 0x1f);
LAB_00615894:
    snd_SynthUnlock();
  }
  return;
}


// 0x0615928 (0xf0 bytes)
void FUN_00615928(undefined4 param_1,int param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  int iVar6;
  
  puVar5 = PTR_PTR_0071b004;
  if (**(int **)(PTR_PTR_0071b004 + -0x7fec) == 0) {
    return;
  }
  snd_SynthLock();
  iVar6 = FUN_006151b0(param_1);
  puVar4 = (undefined1 *)(iVar6 + param_2 * 8 + 0x10);
  if (iVar6 != 0) {
    uVar1 = *param_3;
    uVar2 = param_3[1];
    uVar3 = *(undefined4 *)(param_3 + 4);
    *(undefined2 *)(puVar4 + 2) = *(undefined2 *)(param_3 + 2);
    *(undefined4 *)(puVar4 + 4) = uVar3;
    *puVar4 = uVar1;
    puVar4[1] = uVar2;
  }
  iVar6 = FUN_00615138(param_1,0);
  if (iVar6 != 0) {
    FUN_006154a8((double)*(float *)(puVar5 + -0x7f90));
  }
  snd_SynthUnlock();
  return;
}


// 0x0615a18 (0xf0 bytes)
void FUN_00615a18(double param_1,double param_2,double param_3,undefined4 param_4,undefined8 param_5
                 ,float param_6)

{
  undefined *puVar1;
  float *pfVar2;
  int iVar3;
  
  puVar1 = PTR_PTR_0071b004;
  if (**(int **)(PTR_PTR_0071b004 + -0x7fec) == 0) {
    return;
  }
  snd_SynthLock();
  pfVar2 = (float *)FUN_006151b0(param_4);
  if (pfVar2 != (float *)0x0) {
    pfVar2[3] = (float)param_3;
    *pfVar2 = (float)param_1;
    pfVar2[1] = param_6;
    pfVar2[2] = (float)param_2;
  }
  iVar3 = FUN_00615138(param_4,0);
  if (iVar3 != 0) {
    FUN_006154a8((double)*(float *)(puVar1 + -0x7f90));
  }
  snd_SynthUnlock();
  return;
}


// 0x0615b08 (0x1e8 bytes)
// strings: 0066ba78: 'snd_gmxDeactivateSnapshotByIndex(): Group mixer is not initialized!\n' | 0066bac0: 'snd_gmxDeactivateSnapshotByIndex(): Cannot deactivate snapshot %d as there are no snapshots active!\n' | 0066bb28: 'snd_gmxDeactivateSnapshotByIndex(): Unable to find snapshot index %d on the active list!\n'

undefined4 snd_gmxDeactivateSnapshotByIndex(double param_1,uint param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined *puVar3;
  undefined4 *puVar4;
  
  puVar3 = PTR_PTR_0071b004;
  if (**(int **)(PTR_PTR_0071b004 + -0x7fec) == 0) {
    snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b004 + -0x7f88));
    return 0;
  }
  piVar1 = *(int **)(PTR_PTR_0071b004 + -0x7ff8);
  if (*piVar1 == 0) {
    snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b004 + -0x7f84));
    return 0;
  }
  snd_SynthLock();
  puVar2 = (undefined4 *)*piVar1;
  if (*(ushort *)((int)puVar2 + 2) == param_2) {
    if (param_1 < (double)*(float *)(puVar3 + -0x7f90)) {
      param_1 = (double)*(float *)(puVar2[2] + 0xc);
    }
    puVar2[3] = 0;
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    *piVar1 = *(int *)(*piVar1 + 0xc);
  }
  else {
    do {
      puVar4 = puVar2;
      puVar2 = (undefined4 *)puVar4[3];
      if (puVar2 == (undefined4 *)0x0) {
        snd_Printf((char)*(undefined4 *)(puVar3 + -0x7f80));
        snd_SynthUnlock();
        return 0;
      }
    } while (*(ushort *)((int)puVar2 + 2) != param_2);
    if (param_1 < (double)*(float *)(puVar3 + -0x7f90)) {
      param_1 = (double)*(float *)(puVar2[2] + 0xc);
    }
    puVar2[3] = 0;
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar4[3] = *(undefined4 *)(puVar4[3] + 0xc);
  }
  **(int **)(puVar3 + -0x7fc4) = **(int **)(puVar3 + -0x7fc4) + -1;
  FUN_006154a8(param_1);
  snd_SynthUnlock();
  return 1;
}


// 0x0615cf0 (0x204 bytes)
// strings: 0066bb88: 'snd_gmxActivateSnapshotByIndex(): Group mixer is not initialized!\n' | 0066bbd0: 'Unable to activate snapshot index %d. Maximum number of active snapshots (%d) exceeded!\n'

undefined4 snd_gmxActivateSnapshotByIndex(double param_1,double param_2,int param_3)

{
  float fVar1;
  int *piVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  undefined1 *puVar9;
  GPiece<16> local_40;
  
  puVar4 = PTR_PTR_0071b004;
  if (**(int **)(PTR_PTR_0071b004 + -0x7fec) == 0) {
    snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b004 + -0x7f7c));
    return 0;
  }
  snd_SynthLock();
  iVar6 = FUN_00615138(param_3,local_40);
  if (iVar6 == 0) {
    iVar6 = FUN_006150c4();
    if (iVar6 == -1) {
      snd_Printf((char)*(undefined4 *)(puVar4 + -0x7f78));
      snd_SynthUnlock();
      return 0;
    }
    puVar9 = (undefined1 *)(iVar6 * 0x10 + **(int **)(puVar4 + -0x7ffc));
    *puVar9 = 1;
    *(float *)(puVar9 + 4) = (float)param_1;
    *(short *)(puVar9 + 2) = (short)param_3;
    uVar7 = FUN_006151b0(param_3);
    piVar2 = *(int **)(puVar4 + -0x7ff8);
    *(undefined4 *)(puVar9 + 8) = uVar7;
    iVar6 = *piVar2;
    iVar5 = iVar6;
    iVar8 = 0;
    if (iVar6 == 0) {
LAB_00615ee4:
      *piVar2 = (int)puVar9;
    }
    else {
      do {
        iVar3 = iVar5;
        if (param_3 < (int)(uint)*(ushort *)(iVar3 + 2)) {
          iVar5 = iVar3;
          if (iVar8 == 0) {
            *(int *)(puVar9 + 0xc) = iVar6;
            goto LAB_00615ee4;
          }
          break;
        }
        iVar5 = *(int *)(iVar3 + 0xc);
        iVar8 = iVar3;
      } while (iVar5 != 0);
      *(undefined1 **)(iVar8 + 0xc) = puVar9;
      *(int *)(puVar9 + 0xc) = iVar5;
    }
    fVar1 = *(float *)(puVar4 + -0x7f90);
    **(int **)(puVar4 + -0x7fc4) = **(int **)(puVar4 + -0x7fc4) + 1;
    if (param_2 < (double)fVar1) {
      param_2 = (double)*(float *)(*(int *)(puVar9 + 8) + 8);
    }
  }
  else {
    if ((double)fRam00000004 == param_1) goto LAB_00615dc0;
    fRam00000004 = (float)param_1;
    if (param_2 < (double)*(float *)(puVar4 + -0x7f90)) {
      param_2 = (double)*(float *)(iRam00000008 + 8);
    }
  }
  FUN_006154a8(param_2);
LAB_00615dc0:
  snd_SynthUnlock();
  return 1;
}


// 0x0615ef4 (0x2c bytes)
void FUN_00615ef4(double param_1,double param_2)

{
  float fVar1;
  
  fVar1 = *(float *)(PTR_PTR_0071b004 + -0x7f90);
  **(float **)(PTR_PTR_0071b004 + -0x7fbc) = (float)param_1;
  if (param_2 < (double)fVar1) {
    param_2 = (double)fVar1;
  }
  FUN_006154a8(param_2);
  return;
}


// 0x0615f20 (0xd4 bytes)
// strings: 0066bc30: 'snd_gmxDeactivateAllSnapshots(): Group mixer is not initialized!\n'

void snd_gmxDeactivateAllSnapshots(double param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  
  puVar3 = PTR_PTR_0071b004;
  if (**(int **)(PTR_PTR_0071b004 + -0x7fec) != 0) {
    if (param_1 < (double)*(float *)(PTR_PTR_0071b004 + -0x7f90)) {
      param_1 = (double)*(float *)(PTR_PTR_0071b004 + -0x7f90);
    }
    snd_SynthLock();
    uVar1 = **(uint **)(puVar3 + -0x8000);
    uVar2 = **(undefined4 **)(puVar3 + -0x7ffc);
    **(undefined4 **)(puVar3 + -0x7ff8) = 0;
    memset(uVar2,0,((ulonglong)uVar1 & 0xfffffff) << 4);
    **(undefined4 **)(puVar3 + -0x7fc4) = 0;
    FUN_006154a8(param_1);
    snd_SynthUnlock();
    return;
  }
  snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b004 + -0x7f74));
  return;
}


// 0x0615ff4 (0x74 bytes)
void FUN_00615ff4(void)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  
  puVar3 = PTR_PTR_0071b004;
  snd_gmxDeactivateAllSnapshots((double)*(float *)(PTR_PTR_0071b004 + -0x7f90));
  piVar1 = *(int **)(puVar3 + -0x7ff4);
  iVar2 = *piVar1;
  if (iVar2 != 0) {
    (**(code **)**(undefined4 **)(puVar3 + -0x7f70))(iVar2);
  }
  *piVar1 = 0;
  return;
}


// 0x0616068 (0x188 bytes)
// strings: 0066bc78: 'snd_gmxLoadServerDummyFile(): Group mixer is not initialized!\n'

undefined4 snd_gmxLoadServerDummyFile(void)

{
  bool bVar1;
  float fVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  float *pfVar9;
  longlong lVar10;
  
  puVar6 = PTR_PTR_0071b004;
  if (**(int **)(PTR_PTR_0071b004 + -0x7fec) == 0) {
    snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b004 + -0x7f6c));
  }
  else {
    snd_gmxDeactivateAllSnapshots((double)*(float *)(PTR_PTR_0071b004 + -0x7f90));
    snd_SynthLock();
    puVar3 = *(undefined4 **)(puVar6 + -0x7f68);
    puVar4 = (undefined4 *)**(undefined4 **)(puVar6 + -0x7f64);
    **(undefined4 **)(puVar6 + -0x7ff0) = 0;
    *puVar3 = 0;
    iVar7 = (*(code *)*puVar4)(0x4400,1);
    piVar5 = *(int **)(puVar6 + -0x7ff4);
    *piVar5 = iVar7;
    if (iVar7 != 0) {
      memset(iVar7,0,0x4400);
      fVar2 = *(float *)(puVar6 + -0x7f90);
      iVar7 = *piVar5;
      iVar8 = 0;
      do {
        pfVar9 = (float *)(iVar8 + iVar7);
        lVar10 = 0x20;
        pfVar9[1] = 0.0;
        pfVar9[2] = fVar2;
        pfVar9[3] = fVar2;
        *pfVar9 = fVar2;
        pfVar9 = pfVar9 + 5;
        do {
          *pfVar9 = fVar2;
          *(undefined1 *)(pfVar9 + -1) = 0;
          *(undefined1 *)((int)pfVar9 + -3) = 0xff;
          *(undefined2 *)((int)pfVar9 + -2) = 0xffff;
          lVar10 = lVar10 + -1;
          pfVar9 = pfVar9 + 2;
        } while (lVar10 != 0);
        bVar1 = iVar8 != 0x42f0;
        iVar8 = iVar8 + 0x110;
      } while (bVar1);
      FUN_00615ef4((double)fVar2,(double)fVar2);
      snd_SynthUnlock();
      return 1;
    }
    snd_SynthUnlock();
  }
  return 0;
}


// 0x06161f0 (0x188 bytes)
// strings: 0066bd38: "snd_gmxLoadFileFromMem(): Invalid GMX file. Fourcc = '%02X''%02X''%02X''%02X'\n" | 0066bcb8: 'snd_gmxLoadFileFromMem(): Group mixer is not initialized!\n' | 0066bcf8: 'snd_gmxLoadFileFromMem(): No group mixer data provided.\n'

undefined4 snd_gmxLoadFileFromMem(char *param_1)

{
  float fVar1;
  float fVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  undefined *puVar7;
  undefined4 uVar8;
  
  puVar7 = PTR_PTR_0071b004;
  if (**(int **)(PTR_PTR_0071b004 + -0x7fec) == 0) {
    snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b004 + -0x7f60));
    return 0;
  }
  if (param_1 != (char *)0x0) {
    snd_gmxDeactivateAllSnapshots((double)*(float *)(PTR_PTR_0071b004 + -0x7f90));
    if ((((*param_1 == 'G') && (param_1[1] == 'M')) && (param_1[2] == 'X')) && (param_1[3] == 'F'))
    {
      snd_SynthLock();
      puVar3 = *(undefined4 **)(puVar7 + -0x7ff4);
      puVar4 = *(undefined4 **)(puVar7 + -0x7f68);
      iVar5 = *(int *)(param_1 + 0x10);
      iVar6 = *(int *)(param_1 + 0x18);
      fVar1 = *(float *)(puVar7 + -0x7f90);
      fVar2 = *(float *)(param_1 + 8);
      **(undefined4 **)(puVar7 + -0x7ff0) = param_1;
      *puVar4 = param_1 + iVar5 + 0x10;
      *puVar3 = param_1 + iVar6 + 0x18;
      FUN_00615ef4((double)fVar2,(double)fVar1);
      snd_SynthUnlock();
      uVar8 = 1;
    }
    else {
      snd_Printf((char)*(undefined4 *)(puVar7 + -0x7f58));
      uVar8 = 0;
    }
    return uVar8;
  }
  snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b004 + -0x7f5c));
  return 0;
}


// 0x0616378 (0x1c8 bytes)
// strings: 0066bd88: 'snd_InitGroupMixer(): Unable to allocate %d bytes for %d max active snapshots!\n'

undefined4 snd_InitGroupMixer(undefined4 param_1,uint param_2,uint param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  longlong lVar8;
  
  puVar3 = PTR_PTR_0071b004;
  lVar8 = 0x20;
  puVar7 = *(undefined4 **)(PTR_PTR_0071b004 + -0x7fd8);
  puVar1 = *(undefined4 **)(PTR_PTR_0071b004 + -0x7fd4);
  uVar5 = *(undefined4 *)(PTR_PTR_0071b004 + -0x7f9c);
  iVar6 = 0;
  iVar4 = *(int *)(PTR_PTR_0071b004 + -0x7fe4);
  iVar2 = *(int *)(PTR_PTR_0071b004 + -0x7fe0);
  **(uint **)(PTR_PTR_0071b004 + -0x7fe8) = param_3;
  *puVar7 = uVar5;
  *puVar1 = uVar5;
  do {
    puVar7 = (undefined4 *)(iVar6 + iVar4);
    puVar1 = (undefined4 *)(iVar6 + iVar2);
    iVar6 = iVar6 + 4;
    *puVar7 = uVar5;
    *puVar1 = uVar5;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  if ((param_2 == 0) || (**(int **)(puVar3 + -0x7fb0) == 0)) {
    uVar5 = 1;
  }
  else {
    lVar8 = ((ulonglong)param_2 & 0xfffffff) << 4;
    iVar4 = (**(code **)**(undefined4 **)(puVar3 + -0x7f64))((int)lVar8,1);
    **(int **)(puVar3 + -0x7ffc) = iVar4;
    if (iVar4 != 0) {
      **(uint **)(puVar3 + -0x8000) = param_2;
      memset(iVar4,0,lVar8);
      uVar5 = *(undefined4 *)(puVar3 + -0x7f90);
      puVar7 = *(undefined4 **)(puVar3 + -0x7fdc);
      lVar8 = 0x20;
      **(undefined4 **)(puVar3 + -0x7fd0) = uVar5;
      do {
        *puVar7 = uVar5;
        lVar8 = lVar8 + -1;
        puVar7 = puVar7 + 1;
      } while (lVar8 != 0);
      **(undefined4 **)(puVar3 + -0x7fec) = 1;
      if ((param_3 & 1) == 0) {
        uVar5 = snd_gmxLoadFileFromMem(param_1);
        return uVar5;
      }
      uVar5 = snd_gmxLoadServerDummyFile();
      return uVar5;
    }
    snd_Printf((char)*(undefined4 *)(puVar3 + -0x7f54));
    uVar5 = 0;
  }
  return uVar5;
}


// 0x0616540 (0xc8 bytes)
void FUN_00616540(void)

{
  int *piVar1;
  int iVar2;
  uint *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined *puVar10;
  
  puVar10 = PTR_PTR_0071b004;
  snd_gmxDeactivateAllSnapshots((double)*(float *)(PTR_PTR_0071b004 + -0x7f90));
  piVar1 = *(int **)(puVar10 + -0x7ffc);
  iVar2 = *piVar1;
  if (iVar2 != 0) {
    (**(code **)**(undefined4 **)(puVar10 + -0x7f70))(iVar2);
  }
  puVar3 = *(uint **)(puVar10 + -0x7fe8);
  puVar4 = *(undefined4 **)(puVar10 + -0x7ff8);
  puVar5 = *(undefined4 **)(puVar10 + -0x7ff0);
  puVar6 = *(undefined4 **)(puVar10 + -0x7f68);
  puVar7 = *(undefined4 **)(puVar10 + -0x7ff4);
  uVar8 = *puVar3;
  puVar9 = *(undefined4 **)(puVar10 + -0x7fec);
  *piVar1 = 0;
  *puVar4 = 0;
  *puVar5 = 0;
  *puVar6 = 0;
  *puVar7 = 0;
  *puVar9 = 0;
  if ((uVar8 & 1) != 0) {
    FUN_00615ff4();
  }
  *puVar3 = 0;
  return;
}


// 0x0616608 (0xec bytes)
uint FUN_00616608(undefined4 param_1)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  
  piVar1 = *(int **)(PTR_PTR_0071b004 + -0x7ff0);
  if ((*piVar1 != 0) && (piVar2 = *(int **)(PTR_PTR_0071b004 + -0x7f68), *piVar2 != 0)) {
    uVar4 = FUN_006168e8(param_1,0x811c9dc5);
    uVar8 = *(int *)(*piVar1 + 0x14) - 1;
    if (-1 < (int)uVar8) {
      iVar7 = ((int)uVar8 >> 1) + (uint)((int)uVar8 < 0 && (uVar8 & 1) != 0);
      iVar6 = 0;
      do {
        puVar5 = (uint *)(*piVar2 + iVar7 * 8);
        uVar3 = *puVar5;
        if (uVar4 == uVar3) {
          return puVar5[1];
        }
        if (uVar4 < uVar3) {
          uVar8 = iVar7 - 1;
        }
        else {
          iVar6 = iVar7 + 1;
        }
        uVar3 = iVar6 + uVar8;
        iVar7 = ((int)uVar3 >> 1) + (uint)((int)uVar3 < 0 && (uVar3 & 1) != 0);
      } while (iVar6 <= (int)uVar8);
    }
  }
  return 0xffffffff;
}


// 0x06166f4 (0x54 bytes)
undefined8 FUN_006166f4(void)

{
  int iVar2;
  undefined8 uVar1;
  
  iVar2 = FUN_00616608();
  if (iVar2 != -1) {
    uVar1 = FUN_00615138(iVar2,0);
    return uVar1;
  }
  return 0;
}


// 0x0616748 (0x94 bytes)
// strings: 0066bdd8: 'snd_gmxDeactivateSnapshotByName(): Group mixer is not initialized!\n'

undefined8 snd_gmxDeactivateSnapshotByName(undefined8 param_1,undefined4 param_2)

{
  int iVar2;
  undefined8 uVar1;
  
  if (**(int **)(PTR_PTR_0071b004 + -0x7fec) == 0) {
    snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b004 + -0x7f50));
  }
  else {
    iVar2 = FUN_00616608(param_2);
    if (iVar2 != -1) {
      uVar1 = snd_gmxDeactivateSnapshotByIndex(param_1,iVar2);
      return uVar1;
    }
  }
  return 0;
}


// 0x06167dc (0xa8 bytes)
// strings: 0066be20: 'snd_gmxActivateSnapshotByName(): Group mixer is not initialized!\n'

undefined8
snd_gmxActivateSnapshotByName(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar2;
  undefined8 uVar1;
  
  if (**(int **)(PTR_PTR_0071b004 + -0x7fec) == 0) {
    snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b004 + -0x7f4c));
  }
  else {
    iVar2 = FUN_00616608(param_3);
    if (iVar2 != -1) {
      uVar1 = snd_gmxActivateSnapshotByIndex(param_1,param_2,iVar2);
      return uVar1;
    }
  }
  return 0;
}


// 0x0616884 (0x64 bytes)
ulonglong FUN_00616884(uint param_1,int param_2,ulonglong param_3)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 < param_1 + param_2) {
    iVar2 = (param_1 + param_2) - param_1;
    iVar3 = 0;
    do {
      pbVar1 = (byte *)(iVar3 + param_1);
      iVar3 = iVar3 + 1;
      param_3 = (param_3 & 0x7fffffff) * 2 + (param_3 & 0xfffffff) * 0x10 +
                (param_3 & 0xff) * 0x1000000 +
                (param_3 & 0x1ffffff) * 0x80 + (param_3 & 0xffffff) * 0x100 + param_3 ^
                (ulonglong)*pbVar1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return param_3 & 0xffffffff;
}


// 0x06168e8 (0x4c bytes)
uint FUN_006168e8(byte *param_1,uint param_2)

{
  byte bVar1;
  
  bVar1 = *param_1;
  while (bVar1 != 0) {
    param_2 = param_2 * 0x1000193 ^ (uint)bVar1;
    param_1 = param_1 + 1;
    bVar1 = *param_1;
  }
  return param_2;
}


// 0x0616934 (0x8 bytes)
undefined8 FUN_00616934(void)

{
  return 0;
}


// 0x061693c (0xa8 bytes)
int FUN_0061693c(undefined8 param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2;
  if (0x200 < iVar1) {
    if (iVar1 < 0x401) {
      return -(int)*(short *)(*(int *)(PTR_PTR_0071b00c + -0x8000) +
                             (int)((0x400 - param_2 & 0xffffffff) << 1));
    }
    if (iVar1 < 0x601) {
      return -(int)*(short *)(*(int *)(PTR_PTR_0071b00c + -0x8000) +
                             (int)((param_2 - 0x400 & 0xffffffff) << 1));
    }
    param_2 = 0x800 - param_2;
  }
  return (int)*(short *)(*(int *)(PTR_PTR_0071b00c + -0x8000) + (int)((param_2 & 0xffffffff) << 1));
}


