// sdk/libc/fread.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x5c5364-0x5c5568
#include <string.h>
#include "sdk/libc/fread.h"
#include "sdk/libc/xfrprep.h"
#include "sdk/xUnk.h"

// SDK libc.a(fread.o): fread  [fuzzy 1.000 match]
// 0x05c5364 (0x204 bytes)
ulonglong FUN_005c5364(longlong param_1,uint param_2,int param_3,ushort *param_4)

{
  uint uVar1;
  undefined1 *puVar2;
  void *__dest;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar5 = (longlong)(int)param_2 * (longlong)param_3;
  if ((int)uVar5 == 0) {
    return 0;
  }
  FUN_005cbc38(param_4);
  uVar4 = uVar5 & 0xffffffff;
  uVar6 = uVar5;
  if ((*param_4 & 0x4000) == 0) {
    uVar4 = *(ulonglong *)(param_4 + 0x24);
LAB_005c5418:
    do {
      if (*(int *)(param_4 + 0x14) != 0) {
        *(int *)(param_4 + 10) = *(int *)(param_4 + 0x14);
        param_4[0x14] = 0;
        param_4[0x15] = 0;
      }
      uVar1 = *(uint *)(param_4 + 0x30);
      if ((uVar4 < (ulonglong)uVar1 - *(longlong *)(param_4 + 0x28)) || (uVar1 <= uVar4)) {
        iVar3 = FUN_005c91f4(param_4);
        if (iVar3 < 1) break;
        uVar4 = *(ulonglong *)(param_4 + 0x24);
        uVar1 = *(uint *)(param_4 + 0x30);
      }
      __dest = (void *)param_1;
      uVar7 = uVar1 - uVar4;
      if ((uVar6 & 0xffffffff) < (uVar1 - uVar4 & 0xffffffff)) {
        uVar7 = uVar6;
      }
      uVar6 = uVar6 - uVar7;
      param_1 = param_1 + uVar7;
      memcpy(__dest,*(void **)(param_4 + 8),(size_t)uVar7);
      uVar4 = (uVar7 & 0xffffffff) + *(longlong *)(param_4 + 0x24);
      *(size_t *)(param_4 + 8) = (size_t)uVar7 + *(int *)(param_4 + 8);
      *(ulonglong *)(param_4 + 0x2c) = *(longlong *)(param_4 + 0x2c) + (uVar7 & 0xffffffff);
      *(ulonglong *)(param_4 + 0x24) = uVar4;
    } while ((int)uVar6 != 0);
LAB_005c54c8:
    FUN_005cbbbc(param_4);
    uVar5 = (uVar5 - uVar6 & 0xffffffff) / (ulonglong)param_2;
  }
  else {
    do {
      puVar2 = *(undefined1 **)(param_4 + 0xe);
      if ((undefined1 *)((int)param_4 + 0x43) <= puVar2) {
        if ((int)uVar6 == 0) goto LAB_005c54c8;
        uVar4 = *(ulonglong *)(param_4 + 0x24);
        goto LAB_005c5418;
      }
      uVar6 = uVar6 - 1;
      *(undefined1 *)param_1 = *puVar2;
      *(undefined1 **)(param_4 + 0xe) = puVar2 + 1;
      uVar4 = uVar4 - 1;
      param_1 = param_1 + 1;
    } while (uVar4 != 0);
    FUN_005cbbbc(param_4);
    uVar5 = (uVar5 - uVar6 & 0xffffffff) / (ulonglong)param_2;
  }
  return uVar5;
}


