// sdk/xUnk5.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 54 functions, 0x5e6a10-0x5e7e0c
#include <string.h>
#include "sdk/xUnk5.h"
#include "game/boot.h"
#include "idol/mathfunc.h"
#include "sdk/cUnk.h"
#include "sdk/cell.h"
#include "sdk/libc/malloc.h"
#include "sdk/libc/xfdnorm.h"
#include "sdk/libcgb/cgb.h"
#include "sdk/libcgc/libcgc_cell_localize.h"
#include "sdk/mUnk3.h"
#include "sdk/xUnk.h"

// 0x05e6a10 (0x58 bytes)
undefined4 FUN_005e6a10(undefined4 param_1)

{
  undefined4 uVar1;
  
  FUN_005cbbec(1);
  uVar1 = *(undefined4 *)PTR_PTR_0071c7d0;
  *(undefined4 *)PTR_PTR_0071c7d0 = param_1;
  FUN_005cbb70(1);
  return uVar1;
}


// 0x05e6a68 (0x58 bytes)
undefined4 FUN_005e6a68(undefined4 param_1)

{
  undefined4 uVar1;
  
  FUN_005cbbec(1);
  uVar1 = *(undefined4 *)PTR_PTR_0071c7d4;
  *(undefined4 *)PTR_PTR_0071c7d4 = param_1;
  FUN_005cbb70(1);
  return uVar1;
}


// 0x05e6ac0 (0x10 bytes)
void FUN_005e6ac0(undefined4 *param_1)

{
  *param_1 = &PTR_PTR_00661748;
  return;
}


// 0x05e6ad0 (0x10 bytes)
void FUN_005e6ad0(undefined4 *param_1)

{
  *param_1 = &PTR_PTR_00666410;
  return;
}


// 0x05e6ae0 (0x10 bytes)
void FUN_005e6ae0(undefined4 *param_1)

{
  *param_1 = &PTR_PTR_00661710;
  return;
}


// 0x05e6af0 (0x320 bytes)
// strings: 006617cc: 'edgeDecompressorTaskset'

void FUN_005e6af0(u8 *param_1,u8 *param_2)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  GPiece<16> local_230;
  GPiece<520> auStack_220;
  
  piVar2 = (int *)0x0;
  uVar3 = param_1[5];
  iVar4 = (int)param_2;
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[0xb00] = 0;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined1 *)((int)param_1 + 0x15) = 0;
  *param_1 = (int)&PTR_PTR_006617ec;
  param_1[5] = uVar3 & 0xabff | 0xa800;
  param_1[1] = 0x6c7a6d61;
  if (iVar4 != 0) {
    param_1[3] = 0x10000;
    param_1[2] = 0x10000;
    *(undefined1 *)(param_1 + 0xbb6) = 0;
    param_1[0xbb5] = -1;
    param_1[0xbb4] = 0;
    param_1[0xbb3] = 0;
    param_1[0xbb2] = 0;
    param_1[0xbb1] = 0;
    iVar1 = _cellSpursTasksetAttributeInitialize(auStack_220,1,0x330000,0,local_230,8);
    if (iVar1 == 0) {
      iVar1 = cellSpursTasksetAttributeSetName(auStack_220,"edgeDecompressorTaskset");
      if (iVar1 == 0) {
        piVar2 = param_1 + 0x420;
        iVar1 = cellSpursCreateTasksetWithAttribute(param_2,piVar2,auStack_220);
        if (iVar1 != 0) {
          piVar2 = (int *)0x0;
        }
      }
      else {
        piVar2 = (int *)0x0;
      }
    }
    else {
      piVar2 = (int *)0x0;
    }
  }
  uVar3 = param_1[5];
  param_1[0xb00] = 0;
  param_1[0xbb1] = iVar4;
  param_1[0xbb2] = (int)piVar2;
  param_1[0xbb3] = 0;
  param_1[0xbb4] = 0;
  param_1[0xbb5] = -1;
  *(undefined1 *)(param_1 + 0xbb6) = 0;
  param_1[2] = 0x10000;
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[3] = 0x10000;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined1 *)((int)param_1 + 0x15) = 0;
  param_1[5] = uVar3 & 0xabff | 0xa800;
  if ((piVar2 != (int *)0x0 && iVar4 != 0) &&
     (uVar3 = (*(code *)**(undefined4 **)(*param_1 + 0x18))(param_1), uVar3 < 0x1001)) {
    iVar4 = _cellSpursEventFlagInitialize(param_1[0xbb1],0,param_1 + 0xa60,0,1);
    if ((iVar4 == 0) &&
       (iVar4 = cellSpursEventFlagAttachLv2EventQueue(param_1 + 0xa60), iVar4 == 0)) {
      do {
        iVar4 = param_1[0xbb4];
        param_1[0xbb4] = iVar4 + 1;
        uVar3 = (*(code *)**(undefined4 **)(*param_1 + 0x1c))(param_1,iVar4 + 1);
      } while (uVar3 < 0x201);
      param_1[0xbb4] = param_1[0xbb4] + -1;
      iVar4 = (*(code *)**(undefined4 **)(*param_1 + 0x20))(param_1);
      param_1[0xbb3] = iVar4;
      if (iVar4 != 0) {
        iVar4 = (*(code *)**(undefined4 **)(*param_1 + 0x24))(param_1);
        param_1[0xbb5] = iVar4;
        if (iVar4 != -1) {
          memset(param_1 + 0xb01,0,0x2c0);
          *(undefined1 *)(param_1 + 0xbb6) = 1;
        }
      }
    }
  }
  return;
}


// 0x05e6e10 (0x10 bytes)
void FUN_005e6e10(undefined4 *param_1)

{
  *param_1 = &PTR_PTR_00661748;
  return;
}


// 0x05e6e20 (0x10 bytes)
void FUN_005e6e20(undefined4 *param_1)

{
  *param_1 = &PTR_PTR_0066177c;
  return;
}


// 0x05e6e30 (0x10 bytes)
void FUN_005e6e30(undefined4 *param_1)

{
  *param_1 = &PTR_PTR_0066177c;
  return;
}


// 0x05e6e40 (0x10 bytes)
void FUN_005e6e40(undefined4 *param_1)

{
  *param_1 = &PTR_PTR_00661710;
  return;
}


// 0x05e6e50 (0x4 bytes)
void FUN_005e6e50(void)

{
  return;
}


// 0x05e6e54 (0x10 bytes)
void FUN_005e6e54(undefined4 *param_1)

{
  *param_1 = &PTR_PTR_00661760;
  return;
}


// 0x05e6e64 (0x10 bytes)
void FUN_005e6e64(undefined4 *param_1)

{
  *param_1 = &PTR_PTR_00661760;
  return;
}


// 0x05e6e74 (0x10 bytes)
void FUN_005e6e74(undefined4 *param_1)

{
  *param_1 = &PTR_PTR_00661790;
  return;
}


// 0x05e6e84 (0x40 bytes)
void FUN_005e6e84(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &PTR_PTR_00661710;
    FUN_005e387c();
  }
  return;
}


// 0x05e6ec4 (0x40 bytes)
void FUN_005e6ec4(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &PTR_PTR_00661748;
    FUN_005e387c();
  }
  return;
}


// 0x05e6f04 (0x40 bytes)
void FUN_005e6f04(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &PTR_PTR_00661760;
    FUN_005e387c();
  }
  return;
}


// 0x05e6f44 (0x40 bytes)
void FUN_005e6f44(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &PTR_PTR_0066177c;
    FUN_005e387c();
  }
  return;
}


// 0x05e6f84 (0x40 bytes)
void FUN_005e6f84(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &PTR_PTR_00661790;
    FUN_005e387c();
  }
  return;
}


// 0x05e6fc4 (0x10 bytes)
void FUN_005e6fc4(undefined4 *param_1)

{
  *param_1 = &PTR_PTR_006616b0;
  return;
}


// 0x05e6fd4 (0x10 bytes)
void FUN_005e6fd4(undefined4 *param_1)

{
  *param_1 = &PTR_PTR_006616b0;
  return;
}


// 0x05e6fe4 (0x40 bytes)
void FUN_005e6fe4(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &PTR_PTR_006616b0;
    FUN_005e387c();
  }
  return;
}


// 0x05e7024 (0x34 bytes)
void FUN_005e7024(undefined8 param_1,undefined8 param_2,uint param_3)

{
  FUN_005d5764(1 << (param_3 & 0x1f));
  return;
}


// 0x05e7058 (0x28 bytes)
void FUN_005e7058(undefined8 param_1,undefined8 param_2)

{
  FUN_005d580c(param_2);
  return;
}


// 0x05e7080 (0x8 bytes)
undefined8 FUN_005e7080(void)

{
  return 0;
}


// 0x05e7088 (0x40 bytes)
void FUN_005e7088(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &PTR_PTR_006616b0;
    FUN_005e387c();
  }
  return;
}


// 0x05e70c8 (0x10 bytes)
void FUN_005e70c8(undefined4 *param_1)

{
  *param_1 = &PTR_PTR_006616cc;
  return;
}


// 0x05e70d8 (0x40 bytes)
void FUN_005e70d8(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &PTR_PTR_006616cc;
    FUN_005e387c();
  }
  return;
}


// 0x05e7118 (0x10 bytes)
void FUN_005e7118(undefined4 *param_1)

{
  *param_1 = &PTR_PTR_006616cc;
  return;
}


// 0x05e7128 (0x40 bytes)
void FUN_005e7128(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &PTR_PTR_006616cc;
    FUN_005e387c();
  }
  return;
}


// 0x05e7168 (0x10 bytes)
void FUN_005e7168(undefined4 *param_1)

{
  *param_1 = &PTR_PTR_006616cc;
  return;
}


// 0x05e7178 (0x40 bytes)
void FUN_005e7178(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &PTR_PTR_006616cc;
    FUN_005e387c();
  }
  return;
}


// 0x05e71b8 (0x80 bytes)
void FUN_005e71b8(int *param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = (*(code *)**(undefined4 **)(*param_1 + 0xc))();
  (*(code *)**(undefined4 **)(*param_1 + 0x14))(param_1,uVar1,param_2 + 0x18);
  return;
}


// 0x05e7238 (0x94 bytes)
void FUN_005e7238(undefined4 *param_1)

{
  *param_1 = &PTR_PTR_006617a0;
  *(undefined1 *)(param_1 + 0xbb6) = 0;
  if (param_1[0xbb1] != 0) {
    cellSpursEventFlagDetachLv2EventQueue(param_1 + 0xa60);
  }
  if (param_1[0xbb2] != 0) {
    cellSpursShutdownTaskset(param_1[0xbb2]);
    cellSpursJoinTaskset(param_1[0xbb2]);
    param_1[0xbb2] = 0;
  }
  *param_1 = &PTR_PTR_006616cc;
  return;
}


// 0x05e72cc (0xb4 bytes)
void FUN_005e72cc(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &PTR_PTR_006617a0;
    *(undefined1 *)(param_1 + 0xbb6) = 0;
    if (param_1[0xbb1] != 0) {
      cellSpursEventFlagDetachLv2EventQueue(param_1 + 0xa60);
    }
    if (param_1[0xbb2] != 0) {
      cellSpursShutdownTaskset(param_1[0xbb2]);
      cellSpursJoinTaskset(param_1[0xbb2]);
      param_1[0xbb2] = 0;
    }
    *param_1 = &PTR_PTR_006616cc;
    FUN_005e387c();
  }
  return;
}


// 0x05e7380 (0x274 bytes)
// strings: 005e7420: '}GH(|\nX' (raw)

ulonglong FUN_005e7380(longlong param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  int *piVar7;
  uint *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  char in_RESERVE;
  
  piVar7 = (int *)param_1;
  if (*(char *)(piVar7 + 0xbb6) == '\0') {
    uVar9 = 0;
  }
  else {
    uVar10 = 0;
    uVar9 = 0;
    do {
      sync(1);
      uVar2 = piVar7[0xb00];
      if (uVar2 != 0xffff) {
        iVar11 = (int)uVar10;
        while ((uVar2 & 1 << iVar11) != 0) {
          uVar10 = uVar10 + 1 & 0xf;
          iVar11 = (int)uVar10;
        }
        uVar9 = (ulonglong)(uVar2 | 1 << (int)uVar10);
      }
      do {
        puVar8 = (uint *)(param_1 + 0x2c00);
        uVar1 = *puVar8;
        if (uVar1 != uVar2) break;
        if (in_RESERVE != '\0') {
          uVar6 = storeWordConditionalIndexed(uVar9,param_1 + 0x2c00,0);
          *puVar8 = uVar6;
        }
      } while (in_RESERVE == '\0' && uVar1 != uVar2);
    } while (uVar1 != uVar2);
    lVar12 = param_1 + uVar10 * 0x2c;
    uVar3 = param_2[1];
    uVar4 = param_2[2];
    uVar5 = param_2[3];
    iVar11 = (int)lVar12;
    *(undefined4 *)(iVar11 + 0x2c04) = *param_2;
    *(undefined4 *)(iVar11 + 0x2c08) = uVar3;
    *(undefined4 *)(iVar11 + 0x2c0c) = uVar4;
    *(undefined4 *)(iVar11 + 0x2c10) = uVar5;
    uVar3 = param_2[5];
    uVar4 = param_2[6];
    uVar5 = param_2[7];
    *(undefined4 *)(iVar11 + 0x2c14) = param_2[4];
    *(undefined4 *)(iVar11 + 0x2c18) = uVar3;
    *(undefined4 *)(iVar11 + 0x2c1c) = uVar4;
    *(undefined4 *)(iVar11 + 0x2c20) = uVar5;
    uVar3 = param_2[9];
    *(undefined4 *)(iVar11 + 0x2c24) = param_2[8];
    *(undefined4 *)(iVar11 + 0x2c28) = uVar3;
    *(undefined4 *)(iVar11 + 0x2c2c) = 1;
    cellSpursEventFlagClear(param_1 + 0x2980,1 << (int)uVar10 & 0xffff);
    uVar9 = lVar12 + 0x2c2cU & 0xffffffff;
    if ((param_2[7] == 0) || (param_2[5] != 0)) {
      (*(code *)**(undefined4 **)(*piVar7 + 0x28))
                (param_1,param_2[3],param_2[4],param_2[5],0,param_2[6],0,uVar9);
    }
    else {
      (*(code *)**(undefined4 **)(*piVar7 + 0x28))
                (param_1,param_2[3],param_2[4],param_2[7],param_2[8],param_2[9],
                 param_2[6] - (param_2[8] + param_2[9]),uVar9);
    }
    uVar9 = lVar12 + 0x2c04U & 0xffffffff;
  }
  return uVar9;
}


// 0x05e75f4 (0x14 bytes)
ulonglong FUN_005e75f4(undefined8 param_1,int param_2)

{
  sync(1);
  return (ulonglong)(LZCOUNT(*(undefined4 *)(param_2 + 0x28)) << 0x20) >> 0x25;
}


// 0x05e7608 (0x168 bytes)
undefined8 FUN_005e7608(longlong param_1,int param_2,undefined4 *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  undefined8 uVar6;
  void *__dest;
  char in_RESERVE;
  GPiece<16> local_30;
  
  if (param_2 == 0) {
    uVar6 = 0xffffffffffffffff;
  }
  else {
    if (*(int *)(param_2 + 0x28) != 0) {
      do {
        cellSpursEventFlagWait(param_1 + 0x2980,local_30,1);
      } while (*(int *)(param_2 + 0x28) != 0);
    }
    __dest = *(void **)(param_2 + 0x1c);
    if ((__dest != (void *)0x0) && (*(int *)(param_2 + 0x14) != 0)) {
      memcpy(__dest,(void *)(*(int *)(param_2 + 0x14) + *(int *)(param_2 + 0x20)),
                   *(size_t *)(param_2 + 0x24));
      __dest = *(void **)(param_2 + 0x1c);
    }
    if (__dest == (void *)0x0) {
      uVar2 = *(undefined4 *)(param_2 + 0x18);
    }
    else {
      uVar2 = *(undefined4 *)(param_2 + 0x24);
    }
    *param_3 = uVar2;
    memset(param_2,0,0x2c);
    uVar6 = 0;
    do {
      sync(1);
      uVar3 = *(uint *)((int)param_1 + 0x2c00);
      do {
        puVar5 = (uint *)(param_1 + 0x2c00);
        uVar1 = *puVar5;
        if (uVar1 != uVar3) break;
        if (in_RESERVE != '\0') {
          uVar4 = storeWordConditionalIndexed
                            ((ulonglong)uVar3 &
                             ~(ulonglong)
                              (uint)(1 << ((param_2 - ((int)param_1 + 0x2c04)) / 0x2c & 0x3fU)),
                             param_1 + 0x2c00,0);
          *puVar5 = uVar4;
        }
      } while (in_RESERVE == '\0' && uVar1 != uVar3);
    } while (uVar1 != uVar3);
  }
  return uVar6;
}


// 0x05e7770 (0xb0 bytes)
void FUN_005e7770(undefined4 *param_1)

{
  if (param_1[0xbb3] != 0) {
    *param_1 = &PTR_PTR_006617ec;
    FUN_0050fb74();
    param_1[0xbb3] = 0;
  }
  *param_1 = &PTR_PTR_006617a0;
  *(undefined1 *)(param_1 + 0xbb6) = 0;
  if (param_1[0xbb1] != 0) {
    cellSpursEventFlagDetachLv2EventQueue(param_1 + 0xa60);
  }
  if (param_1[0xbb2] != 0) {
    cellSpursShutdownTaskset();
    cellSpursJoinTaskset(param_1[0xbb2]);
    param_1[0xbb2] = 0;
  }
  *param_1 = &PTR_PTR_006616cc;
  return;
}


// 0x05e7820 (0xc4 bytes)
void FUN_005e7820(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    if (param_1[0xbb3] != 0) {
      *param_1 = &PTR_PTR_006617ec;
      FUN_0050fb74();
      param_1[0xbb3] = 0;
    }
    *param_1 = &PTR_PTR_006617a0;
    *(undefined1 *)(param_1 + 0xbb6) = 0;
    if (param_1[0xbb1] != 0) {
      cellSpursEventFlagDetachLv2EventQueue(param_1 + 0xa60);
    }
    if (param_1[0xbb2] != 0) {
      cellSpursShutdownTaskset();
      cellSpursJoinTaskset(param_1[0xbb2]);
      param_1[0xbb2] = 0;
    }
    *param_1 = &PTR_PTR_006616cc;
    FUN_005e387c(param_1);
  }
  return;
}


// 0x05e78e4 (0x24 bytes)
void FUN_005e78e4(void)

{
  FUN_0050fb6c();
  return;
}


// 0x05e7908 (0x28 bytes)
void FUN_005e7908(undefined8 param_1,undefined8 param_2)

{
  FUN_0050fbb0(param_2);
  return;
}


// 0x05e7930 (0x38 bytes)
void FUN_005e7930(int param_1)

{
  FUN_005104d4(*(undefined4 *)(param_1 + 0x2ec4),*(undefined4 *)(param_1 + 0x2ed0),param_1 + 0x2a00,
               0x200);
  return;
}


// 0x05e7968 (0x34 bytes)
void FUN_005e7968(int param_1)

{
  FUN_00510638(*(undefined4 *)(param_1 + 0x2ec8),param_1 + 0x80,*(undefined4 *)(param_1 + 0x2ecc));
  return;
}


// 0x05e799c (0xd0 bytes)
void FUN_005e799c(int param_1,longlong param_2,longlong param_3,undefined8 param_4,
                 undefined2 param_5,undefined8 param_6)

{
  FUN_0051007c(*(undefined4 *)(param_1 + 0x2ecc),param_2,5,0xd - param_3 >> 0x3f & param_2 + 0xdU,
               0xd - param_3 >> 0x3f & param_3 - 0xdU & 0xffffffff,param_4,param_5,param_6);
  return;
}


// 0x05e7a78 (0x60 bytes)
void FUN_005e7a78(undefined4 *param_1)

{
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0x3f800000;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  return;
}


// 0x05e7ad8 (0x78 bytes)
void FUN_005e7ad8(double param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar1 = param_3[1];
  fVar2 = param_3[2];
  fVar3 = param_3[3];
  fVar4 = param_3[4];
  fVar5 = param_3[5];
  fVar6 = param_3[6];
  fVar7 = param_3[7];
  fVar8 = param_3[8];
  *param_2 = (float)((double)*param_3 * param_1);
  param_2[1] = (float)((double)fVar1 * param_1);
  param_2[2] = (float)((double)fVar2 * param_1);
  param_2[3] = (float)((double)fVar3 * param_1);
  param_2[4] = (float)((double)fVar4 * param_1);
  param_2[5] = (float)((double)fVar5 * param_1);
  param_2[6] = (float)((double)fVar6 * param_1);
  param_2[7] = (float)((double)fVar7 * param_1);
  param_2[8] = (float)((double)fVar8 * param_1);
  return;
}


// 0x05e7b50 (0xa0 bytes)
void FUN_005e7b50(float *param_1,float *param_2,undefined8 param_3,undefined8 param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fStack00000040;
  float fStack00000044;
  
  fVar7 = (float)((ulonglong)param_4 >> 0x20);
  fStack00000040 = (float)((ulonglong)param_3 >> 0x20);
  fStack00000044 = (float)param_3;
  fVar1 = param_2[1];
  fVar2 = param_2[4];
  fVar3 = param_2[2];
  fVar4 = param_2[5];
  fVar5 = param_2[7];
  fVar6 = param_2[8];
  *param_1 = *param_2 * fStack00000040 + param_2[3] * fStack00000044 + param_2[6] * fVar7;
  param_1[1] = fVar1 * fStack00000040 + fVar2 * fStack00000044 + fVar5 * fVar7;
  param_1[2] = fVar3 * fStack00000040 + fVar4 * fStack00000044 + fVar6 * fVar7;
  return;
}


// 0x05e7bf8 (0xa0 bytes)
void FUN_005e7bf8(float *param_1,undefined8 param_2,undefined8 param_3)

{
  float fVar1;
  float fVar2;
  float fStack00000038;
  float fStack0000003c;
  
  fVar1 = (float)((ulonglong)param_3 >> 0x20);
  fStack00000038 = (float)((ulonglong)param_2 >> 0x20);
  fStack0000003c = (float)param_2;
  fVar2 = SQRT(fStack00000038 * fStack00000038 + fStack0000003c * fStack0000003c + fVar1 * fVar1);
  if (fVar2 == 0.0) {
    *param_1 = fStack00000038;
    param_1[1] = fStack0000003c;
    param_1[2] = fVar1;
  }
  else {
    *param_1 = fStack00000038 / fVar2;
    param_1[1] = fStack0000003c / fVar2;
    param_1[2] = fVar1 / fVar2;
  }
  return;
}


// 0x05e7ca0 (0x20 bytes)
void FUN_005e7ca0(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


// 0x05e7cc8 (0x24 bytes)
void FUN_005e7cc8(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}


// 0x05e7cf8 (0x64 bytes)
void FUN_005e7cf8(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar2 = 0;
  iVar1 = 0x100;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  do {
    iVar1 = iVar1 + -1;
    puVar3 = (undefined4 *)(param_1 + 0x28 + iVar2);
    iVar2 = iVar2 + 0xc;
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
  } while (iVar1 != 0);
  return;
}


// 0x05e7d60 (0x4 bytes)
void STUB_005e7d60(...)

{
  return;
}


// 0x05e7d64 (0xa8 bytes)
void FUN_005e7d64(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  fVar4 = param_3[1];
  fVar5 = param_3[3];
  fVar6 = param_3[5];
  fVar7 = param_3[7];
  fVar8 = param_3[2];
  fVar9 = param_3[6];
  fVar10 = param_3[9];
  fVar11 = param_3[0xb];
  fVar12 = param_3[10];
  fVar13 = param_2[3];
  *param_1 = *param_3 * fVar1 + param_3[4] * fVar2 + param_3[8] * fVar3;
  param_1[1] = fVar4 * fVar1 + fVar6 * fVar2 + fVar10 * fVar3;
  param_1[2] = fVar8 * fVar1 + fVar9 * fVar2 + fVar12 * fVar3;
  param_1[3] = fVar5 * fVar1 + fVar7 * fVar2 + fVar11 * fVar3 + fVar13;
  return;
}


