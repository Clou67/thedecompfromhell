// sdk/tUnk.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 54 functions, 0x5e3c04-0x5e659c
#include <stdlib.h>
#include "sdk/tUnk.h"
#include "sdk/libc/xfdnorm.h"
#include "sdk/libcgc/libcgc_cell_localize.h"
#include "sdk/libstdc++/throw.h"
#include "sdk/mUnk3.h"
#include "sdk/xUnk.h"

// 0x05e3c04 (0x94 bytes)
void FUN_005e3c04(int *param_1)

{
  if (*(undefined4 **)PTR_DAT_0071c7a0 != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)PTR_DAT_0071c7a0)(param_1);
  }
  (*(code *)**(undefined4 **)(*param_1 + 0xc))(param_1);
  FUN_005e3b94(param_1);
  return;
}


// 0x05e3c98 (0x30 bytes)
void FUN_005e3c98(undefined4 *param_1)

{
  *param_1 = PTR_PTR_0071c7a8;
  FUN_005e387c();
  return;
}


// 0x05e3cc8 (0xc bytes)
void FUN_005e3cc8(undefined4 *param_1)

{
  *param_1 = PTR_PTR_0071c7a8;
  return;
}


// 0x05e3cd4 (0xc bytes)
void FUN_005e3cd4(undefined4 *param_1)

{
  *param_1 = PTR_PTR_0071c7a8;
  return;
}


// 0x05e3ce0 (0x58 bytes)
undefined4 FUN_005e3ce0(undefined4 param_1)

{
  undefined4 uVar1;
  
  FUN_005cbbec(1);
  uVar1 = *(undefined4 *)PTR_DAT_0071c7ac;
  *(undefined4 *)PTR_DAT_0071c7ac = param_1;
  FUN_005cbb70(1);
  return uVar1;
}


// 0x05e3d38 (0x10 bytes)
void FUN_005e3d38(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005e6980();
}


// 0x05e3d54 (0x8 bytes)
undefined8 FUN_005e3d54(void)

{
  return 0;
}


// 0x05e3d5c (0x8 bytes)
undefined8 FUN_005e3d5c(void)

{
  return 0;
}


// SDK libcgc.a(libcgc_cell_localize.o): __cxxabiv1::__class_type_info::__do_upcast(__cxxabiv1::__class_type_info const*, void**) const  [exact match]
// 0x05e3d64 (0x8c bytes)
/* WARNING: Removing unreachable block (ram,0x005e3dcc) */

undefined1 FUN_005e3d64(int *param_1,undefined8 param_2,undefined4 *param_3)

{
  GPiece<24> local_20;
  
  (*(code *)**(undefined4 **)(*param_1 + 0x18))(param_1,param_2,*param_3,local_20);
  return 0;
}


// SDK libcgc.a(libcgc_cell_localize.o): __cxxabiv1::__class_type_info::__do_find_public_src(int, void const*, __cxxabiv1::__class_type_info const*, void const*) const  [exact match]
// 0x05e3df0 (0x28 bytes)
ulonglong FUN_005e3df0(undefined8 param_1,undefined8 param_2,uint param_3,undefined8 param_4,
                      uint param_5)

{
  uint uVar1;
  
  uVar1 = (int)(param_5 ^ param_3) >> 0x1f;
  uVar1 = (int)(uVar1 - (uVar1 ^ param_5 ^ param_3)) >> 0x1f;
  return ((ulonglong)(uVar1 >> 3) << 3 | (ulonglong)uVar1 & 3) + 6 & 0xffffffff;
}


// SDK libcgc.a(libcgc_cell_localize.o): __cxxabiv1::__class_type_info::__do_catch(std::type_info const*, void**, unsigned int) const  [exact match]
// 0x05e3e18 (0x108 bytes)
undefined1 FUN_005e3e18(int *param_1,int *param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  undefined1 uVar2;
  
  if (param_1 != param_2) {
    iVar1 = FUN_005cc784(param_1[1],param_2[1]);
    if (iVar1 != 0) {
      if (3 < param_4) {
        return 0;
      }
      uVar2 = (*(code *)**(undefined4 **)(*param_2 + 0x14))(param_2,param_1,param_3);
      return uVar2;
    }
  }
  return 1;
}


// 0x05e3f20 (0x30 bytes)
void FUN_005e3f20(undefined4 *param_1)

{
  *param_1 = PTR_PTR_0071c7b0;
  FUN_005e387c();
  return;
}


// 0x05e3f50 (0xc bytes)
void FUN_005e3f50(undefined4 *param_1)

{
  *param_1 = PTR_PTR_0071c7b0;
  return;
}


// 0x05e3f5c (0xc bytes)
void FUN_005e3f5c(undefined4 *param_1)

{
  *param_1 = PTR_PTR_0071c7b0;
  return;
}


// 0x05e3f68 (0x40 bytes)
void FUN_005e3f68(undefined4 *param_1)

{
  *param_1 = PTR_PTR_0071c7b4;
  FUN_005e3f5c();
  FUN_005e387c(param_1);
  return;
}


// 0x05e3fa8 (0x10 bytes)
void FUN_005e3fa8(undefined4 *param_1)

{
  *param_1 = PTR_PTR_0071c7b4;
  FUN_005e3f5c();
  return;
}


// 0x05e3fb8 (0x10 bytes)
void FUN_005e3fb8(undefined4 *param_1)

{
  *param_1 = PTR_PTR_0071c7b4;
  FUN_005e3f5c();
  return;
}


// 0x05e3fc8 (0x40 bytes)
void FUN_005e3fc8(undefined4 *param_1)

{
  *param_1 = PTR_PTR_0071c7b8;
  FUN_005e3fb8();
  FUN_005e387c(param_1);
  return;
}


// 0x05e4008 (0x10 bytes)
void FUN_005e4008(undefined4 *param_1)

{
  *param_1 = PTR_PTR_0071c7b8;
  FUN_005e3fb8();
  return;
}


// 0x05e4018 (0x10 bytes)
void FUN_005e4018(undefined4 *param_1)

{
  *param_1 = PTR_PTR_0071c7b8;
  FUN_005e3fb8();
  return;
}


// 0x05e4028 (0x40 bytes)
void FUN_005e4028(undefined4 *param_1)

{
  *param_1 = PTR_PTR_0071c7bc;
  FUN_005e3fb8();
  FUN_005e387c(param_1);
  return;
}


// 0x05e4068 (0x10 bytes)
void FUN_005e4068(undefined4 *param_1)

{
  *param_1 = PTR_PTR_0071c7bc;
  FUN_005e3fb8();
  return;
}


// 0x05e4078 (0x10 bytes)
void FUN_005e4078(undefined4 *param_1)

{
  *param_1 = PTR_PTR_0071c7bc;
  FUN_005e3fb8();
  return;
}


// SDK libcgc.a(libcgc_cell_localize.o): __dynamic_cast  [exact match]
// 0x05e4088 (0x1cc bytes)
/* WARNING: Removing unreachable block (ram,0x005e4144) */
/* WARNING: Removing unreachable block (ram,0x005e4188) */
/* WARNING: Removing unreachable block (ram,0x005e41a0) */
/* WARNING: Removing unreachable block (ram,0x005e41b0) */
/* WARNING: Removing unreachable block (ram,0x005e41b8) */
/* WARNING: Removing unreachable block (ram,0x005e4200) */
/* WARNING: Removing unreachable block (ram,0x005e4208) */
/* WARNING: Removing unreachable block (ram,0x005e4248) */
/* WARNING: Removing unreachable block (ram,0x005e41c0) */
/* WARNING: Removing unreachable block (ram,0x005e424c) */
/* WARNING: Removing unreachable block (ram,0x005e4158) */

undefined4 FUN_005e4088(int *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  GPiece<40> local_60;
  
  piVar1 = *(int **)(*param_1 + -4);
  (*(code *)**(undefined4 **)(*piVar1 + 0x1c))
            (piVar1,param_4,6,param_3,(int)param_1 + *(int *)(*param_1 + -8),param_2,param_1,
             local_60);
  return 0;
}


// SDK libcgc.a(libcgc_cell_localize.o): std::type_info::__do_catch(std::type_info const*, void**, unsigned int) const  [exact match]
// 0x05e4254 (0x50 bytes)
uint FUN_005e4254(int param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = 1;
  if (param_2 != param_1) {
    uVar1 = FUN_005cc784(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_2 + 4));
    uVar1 = (((int)uVar1 >> 0x1f ^ uVar1) - ((int)uVar1 >> 0x1f)) - 1 >> 0x1f;
  }
  return uVar1;
}


// SDK libcgc.a(libcgc_cell_localize.o): __cxxabiv1::__class_type_info::__do_upcast(__cxxabiv1::__class_type_info const*, void const*, __cxxabiv1::__class_type_info::__upcast_result&) const  [exact match]
// 0x05e42a4 (0x74 bytes)
undefined4 FUN_005e42a4(int param_1,int param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  
  if ((param_1 != param_2) &&
     (iVar1 = FUN_005cc784(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_2 + 4)), iVar1 != 0))
  {
    return 0;
  }
  *param_4 = param_3;
  param_4[1] = 6;
  param_4[3] = 8;
  return 1;
}


// SDK libcgc.a(libcgc_cell_localize.o): __cxxabiv1::__vmi_class_type_info::__do_upcast(__cxxabiv1::__class_type_info const*, void const*, __cxxabiv1::__class_type_info::__upcast_result&) const  [exact match]
// 0x05e4318 (0x2fc bytes)
/* WARNING: Removing unreachable block (ram,0x005e44e4) */
/* WARNING: Removing unreachable block (ram,0x005e44ec) */
/* WARNING: Removing unreachable block (ram,0x005e4478) */
/* WARNING: Removing unreachable block (ram,0x005e4480) */
/* WARNING: Removing unreachable block (ram,0x005e4520) */
/* WARNING: Removing unreachable block (ram,0x005e45d4) */
/* WARNING: Removing unreachable block (ram,0x005e45e0) */
/* WARNING: Removing unreachable block (ram,0x005e45f0) */
/* WARNING: Removing unreachable block (ram,0x005e452c) */

uint FUN_005e4318(int param_1,undefined8 param_2,int *param_3,int *param_4)

{
  uint uVar1;
  int *piVar2;
  char cVar4;
  int iVar3;
  uint uVar5;
  int iVar6;
  GPiece<24> local_80;
  
  cVar4 = FUN_005e42a4(param_1,param_2,param_3);
  if (cVar4 == '\0') {
    uVar5 = param_4[2];
    if ((uVar5 & 0x10) != 0) {
      uVar5 = *(uint *)(param_1 + 8);
    }
    iVar6 = *(int *)(param_1 + 0xc);
    while (iVar6 != 0) {
      iVar6 = iVar6 + -1;
      uVar1 = *(uint *)(param_1 + iVar6 * 8 + 0x14);
      if (((uVar1 >> 1 & 1) != 0) || ((uVar5 & 1) != 0)) {
        iVar3 = 0;
        if (param_3 != (int *)0x0) {
          iVar3 = (int)uVar1 >> 8;
          if ((uVar1 & 1) != 0) {
            iVar3 = *(int *)(iVar3 + *param_3);
          }
          iVar3 = (int)param_3 + iVar3;
        }
        piVar2 = *(int **)(param_1 + iVar6 * 8 + 0x10);
        cVar4 = (*(code *)**(undefined4 **)(*piVar2 + 0x18))(piVar2,param_2,iVar3,local_80);
        if (cVar4 != '\0') {
          iVar3 = param_4[3];
          if (iVar3 == 0) {
            param_4[2] = uVar5;
            *param_4 = 0;
            param_4[3] = 0;
            param_4[1] = 0;
            goto LAB_005e453c;
          }
          if (*param_4 != 0) {
            param_4[1] = 2;
            *param_4 = 0;
            return 1;
          }
          if ((iVar3 == 8) ||
             ((iVar3 != 0 &&
              (iVar3 = FUN_005cc784(uRam00000004,*(undefined4 *)(iVar3 + 4)), iVar3 != 0)))) {
            param_4[1] = 2;
            return 1;
          }
          param_4[1] = param_4[1];
        }
      }
    }
    uVar5 = param_4[1] >> 0x1f;
    uVar5 = uVar5 - (uVar5 ^ param_4[1]) >> 0x1f;
  }
  else {
LAB_005e453c:
    uVar5 = 1;
  }
  return uVar5;
}


// SDK libcgc.a(libcgc_cell_localize.o): __cxxabiv1::__si_class_type_info::__do_upcast(__cxxabiv1::__class_type_info const*, void const*, __cxxabiv1::__class_type_info::__upcast_result&) const  [exact match]
// 0x05e4614 (0x9c bytes)
undefined1 FUN_005e4614(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined1 uVar2;
  
  cVar1 = FUN_005e42a4();
  uVar2 = 1;
  if (cVar1 == '\0') {
    uVar2 = (*(code *)**(undefined4 **)(**(int **)(param_1 + 8) + 0x18))
                      (*(int **)(param_1 + 8),param_2,param_3,param_4);
  }
  return uVar2;
}


// SDK libcgc.a(libcgc_cell_localize.o): __cxxabiv1::__vmi_class_type_info::__do_dyncast(int, __cxxabiv1::__class_type_info::__sub_kind, __cxxabiv1::__class_type_info const*, void const*, __cxxabiv1::__class_type_info const*, void const*, __cxxabiv1::__class_type_info::__dyncast_result&) const  [exact match]
// 0x05e46b0 (0x628 bytes)
/* WARNING: Removing unreachable block (ram,0x005e4b24) */
/* WARNING: Removing unreachable block (ram,0x005e4b2c) */
/* WARNING: Removing unreachable block (ram,0x005e4b94) */
/* WARNING: Removing unreachable block (ram,0x005e4cb8) */
/* WARNING: Removing unreachable block (ram,0x005e4b40) */
/* WARNING: Removing unreachable block (ram,0x005e4b4c) */
/* WARNING: Removing unreachable block (ram,0x005e4b60) */
/* WARNING: Removing unreachable block (ram,0x005e4c04) */

uint FUN_005e46b0(int *param_1,int *param_2,ulonglong param_3,int *param_4,int *param_5,int *param_6
                 ,int *param_7,uint *param_8)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar7;
  ulonglong uVar6;
  int iVar8;
  GPiece<64> local_d0;
  
  if ((param_8[4] & 0x10) != 0) {
    param_8[4] = param_1[2];
  }
  if ((param_5 == param_7) &&
     ((param_1 == param_6 || (iVar2 = FUN_005cc784(param_1[1],param_6[1]), iVar2 == 0)))) {
    uVar4 = 0;
    param_8[2] = (uint)param_3;
  }
  else if ((param_1 == param_4) || (iVar2 = FUN_005cc784(param_1[1],param_4[1]), iVar2 == 0)) {
    param_8[1] = (uint)param_3;
    *param_8 = (uint)param_5;
    if ((int)param_2 < 0) {
      if (param_2 == (int *)0xfffffffe) {
        uVar4 = 0;
        param_8[3] = 1;
      }
      else {
LAB_005e4bb8:
        uVar4 = 0;
      }
    }
    else {
      uVar4 = 0;
      uVar3 = (int)param_5 + (int)param_2 ^ (uint)param_7;
      uVar5 = (int)uVar3 >> 0x1f;
      uVar5 = (int)(uVar5 - (uVar5 ^ uVar3)) >> 0x1f;
      uVar6 = ((ulonglong)uVar5 & 3) << 0x1d | (ulonglong)(uVar5 >> 3);
      param_8[3] = ((uint)(uVar6 << 3) | (uint)uVar6 >> 0x1d) + 6;
    }
  }
  else {
    uVar4 = 0;
    iVar2 = param_1[3];
LAB_005e4884:
    do {
      bVar1 = iVar2 == 0;
      iVar2 = iVar2 + -1;
      if (bVar1) break;
      uVar5 = param_1[iVar2 * 2 + 5];
      iVar8 = (int)uVar5 >> 8;
      uVar6 = param_3;
      if ((uVar5 & 1) != 0) {
        uVar6 = param_3 | 1;
        iVar8 = *(int *)(iVar8 + *param_5);
      }
      if ((uVar5 & 2) == 0) {
        if ((param_2 == (int *)0xfffffffe) && ((param_8[4] & 3) == 0)) goto LAB_005e4884;
        uVar6 = ((uVar6 << 0x20) >> 0x22) << 2 | uVar6 & 1;
      }
      uVar3 = (*(code *)**(undefined4 **)(*(int *)param_1[iVar2 * 2 + 4] + 0x1c))
                        ((int *)param_1[iVar2 * 2 + 4],param_2,uVar6 & 0xffffffff,param_4,
                         (int)param_5 + iVar8,param_6,param_7,local_d0);
      uVar5 = param_8[2];
      param_8[2] = uVar5;
      if ((uVar4 & 0xff) == 0) {
        uVar7 = *param_8;
        if (uVar7 != 0) goto LAB_005e4790;
        param_8[1] = 0;
        *param_8 = 0;
        uVar4 = uVar3;
      }
      else {
        uVar7 = *param_8;
        if (uVar7 != 0) {
LAB_005e4790:
          if (uVar7 == 0) {
            param_8[1] = param_8[1];
          }
          else if ((((int)uVar7 >> 0x1f) - ((int)uVar7 >> 0x1f ^ uVar7) >> 0x1f & uVar3) != 0) {
            uVar3 = param_8[3];
            if (((int)uVar5 < 4) || (((uVar5 & 1) != 0 && ((param_8[4] & 2) != 0)))) {
              if ((int)uVar3 < 1) {
                if ((int)param_2 < 0) {
                  if (param_2 == (int *)0xfffffffe) goto LAB_005e4b88;
                  uVar3 = (*(code *)**(undefined4 **)(*param_4 + 0x20))
                                    (param_4,param_2,uVar7,param_6,param_7);
                }
                else {
                  uVar3 = 6;
                  if ((int *)(uVar7 + (int)param_2) != param_7) {
LAB_005e4b88:
                    uVar3 = 1;
                  }
                }
              }
              if ((3 < (int)uVar3) && (((uVar3 & 1) == 0 || ((param_1[2] & 2U) == 0))))
              goto LAB_005e4824;
              if ((int)param_2 < 0) {
                if (param_2 == (int *)0xfffffffe) goto LAB_005e4824;
                uVar5 = (*(code *)**(undefined4 **)(*param_4 + 0x20))
                                  (param_4,param_2,0,param_6,param_7);
              }
              else {
                uVar5 = 6;
                if (param_2 != param_7) goto LAB_005e4824;
              }
            }
            else {
              if (uVar3 == 0) {
                uVar3 = 1;
              }
LAB_005e4824:
              uVar5 = 1;
            }
            if ((int)(uVar5 ^ uVar3) < 4) {
              if (3 < (int)(uVar5 & uVar3)) {
                param_8[3] = 2;
                *param_8 = 0;
                return 1;
              }
              uVar5 = param_8[2];
              *param_8 = 0;
              param_8[3] = 1;
              uVar4 = 1;
            }
            else {
              if (3 < (int)uVar5) {
                uVar4 = 0;
                *param_8 = 0;
                param_8[1] = 0;
                uVar3 = uVar5;
              }
              param_8[3] = uVar3;
              if (((uVar3 & 2) != 0) || ((uVar3 & 1) == 0)) goto LAB_005e4bb8;
              uVar5 = param_8[2];
            }
          }
        }
      }
    } while (uVar5 != 4);
    uVar4 = uVar4 & 0xff;
  }
  return uVar4;
}


// SDK libcgc.a(libcgc_cell_localize.o): __cxxabiv1::__si_class_type_info::__do_dyncast(int, __cxxabiv1::__class_type_info::__sub_kind, __cxxabiv1::__class_type_info const*, void const*, __cxxabiv1::__class_type_info const*, void const*, __cxxabiv1::__class_type_info::__dyncast_result&) const  [exact match]
// 0x05e4cd8 (0x1b0 bytes)
undefined1
FUN_005e4cd8(int param_1,int param_2,uint param_3,int param_4,uint param_5,int param_6,uint param_7,
            uint *param_8)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined1 uVar4;
  ulonglong uVar5;
  
  if (param_1 != param_4) {
    uVar1 = *(undefined4 *)(param_1 + 4);
    iVar3 = FUN_005cc784(uVar1,*(undefined4 *)(param_4 + 4));
    if (iVar3 != 0) {
      if ((param_5 == param_7) &&
         ((param_1 == param_6 ||
          (iVar3 = FUN_005cc784(uVar1,*(undefined4 *)(param_6 + 4)), iVar3 == 0)))) {
        param_8[2] = param_3;
        return 0;
      }
      uVar4 = (*(code *)**(undefined4 **)(**(int **)(param_1 + 8) + 0x1c))
                        (*(int **)(param_1 + 8),param_2,param_3,param_4,param_5,param_6,param_7,
                         param_8);
      return uVar4;
    }
  }
  *param_8 = param_5;
  param_8[1] = param_3;
  if (param_2 < 0) {
    if (param_2 == -2) {
      param_8[3] = 1;
    }
  }
  else {
    param_7 = param_5 + param_2 ^ param_7;
    uVar2 = (int)param_7 >> 0x1f;
    uVar2 = (int)(uVar2 - (uVar2 ^ param_7)) >> 0x1f;
    uVar5 = ((ulonglong)uVar2 & 3) << 0x1d | (ulonglong)(uVar2 >> 3);
    param_8[3] = ((uint)(uVar5 << 3) | (uint)uVar5 >> 0x1d) + 6;
  }
  return 0;
}


// SDK libcgc.a(libcgc_cell_localize.o): __cxxabiv1::__class_type_info::__do_dyncast(int, __cxxabiv1::__class_type_info::__sub_kind, __cxxabiv1::__class_type_info const*, void const*, __cxxabiv1::__class_type_info const*, void const*, __cxxabiv1::__class_type_info::__dyncast_result&) const  [exact match]
// 0x05e4e88 (0xf0 bytes)
undefined8
FUN_005e4e88(int param_1,undefined8 param_2,int param_3,int param_4,int param_5,int param_6,
            int param_7,int *param_8)

{
  int iVar1;
  
  if ((param_5 == param_7) &&
     ((param_1 == param_6 ||
      (iVar1 = FUN_005cc784(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_6 + 4)), iVar1 == 0))
     )) {
    param_8[2] = param_3;
    return 0;
  }
  if ((param_1 == param_4) ||
     (iVar1 = FUN_005cc784(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_4 + 4)), iVar1 == 0))
  {
    *param_8 = param_5;
    param_8[3] = 1;
    param_8[1] = param_3;
  }
  return 0;
}


// SDK libcgc.a(libcgc_cell_localize.o): __cxxabiv1::__vmi_class_type_info::__do_find_public_src(int, void const*, __cxxabiv1::__class_type_info const*, void const*) const  [exact match]
// 0x05e4f78 (0x1ec bytes)
uint FUN_005e4f78(int param_1,int param_2,int *param_3,int param_4,int *param_5)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  byte in_cr0;
  byte in_cr1;
  byte in_cr2;
  byte in_cr3;
  byte bVar6;
  byte unaff_cr4;
  byte in_cr5;
  byte in_cr6;
  byte in_cr7;
  uint uStack00000008;
  
  uStack00000008 =
       (uint)(in_cr0 & 0xf) << 0x1c | (uint)(in_cr1 & 0xf) << 0x18 | (uint)(in_cr2 & 0xf) << 0x14 |
       (uint)(in_cr3 & 0xf) << 0x10 | (uint)(unaff_cr4 & 0xf) << 0xc | (uint)(in_cr5 & 0xf) << 8 |
       (uint)(in_cr6 & 0xf) << 4 | (uint)(in_cr7 & 0xf);
  if ((param_3 == param_5) &&
     ((param_1 == param_4 ||
      (iVar3 = FUN_005cc784(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_4 + 4)), iVar3 == 0))
     )) {
    return 6;
  }
  iVar3 = *(int *)(param_1 + 0xc);
  bVar6 = (param_2 == -3) << 1;
  iVar5 = iVar3 * 8 + 0x10;
LAB_005e5004:
  do {
    do {
      bVar1 = iVar3 == 0;
      iVar5 = iVar5 + -8;
      iVar3 = iVar3 + -1;
      if (bVar1) {
        return 1;
      }
      uVar4 = *(uint *)(param_1 + iVar5 + 4);
      bVar1 = (uVar4 & 1) != 0;
      iVar2 = (int)uVar4 >> 8;
    } while ((uVar4 & 2) == 0);
    if (bVar1) {
      if ((bool)(bVar6 >> 1 & 1)) goto LAB_005e5004;
      iVar2 = *(int *)(iVar2 + *param_3);
    }
    uVar4 = (*(code *)**(undefined4 **)(**(int **)(param_1 + iVar5) + 0x20))
                      (*(int **)(param_1 + iVar5),param_2,(int)param_3 + iVar2,param_4,param_5);
    if (3 < (int)uVar4) {
      if (!bVar1) {
        return uVar4;
      }
      return uVar4 | 1;
    }
  } while( true );
}


// SDK libcgc.a(libcgc_cell_localize.o): __cxxabiv1::__si_class_type_info::__do_find_public_src(int, void const*, __cxxabiv1::__class_type_info const*, void const*) const  [exact match]
// 0x05e5164 (0xe8 bytes)
undefined4 FUN_005e5164(int param_1,undefined4 param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((param_5 == param_3) &&
     ((param_1 == param_4 ||
      (iVar1 = FUN_005cc784(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_4 + 4)), iVar1 == 0))
     )) {
    return 6;
  }
  uVar2 = (*(code *)**(undefined4 **)(**(int **)(param_1 + 8) + 0x20))
                    (*(int **)(param_1 + 8),param_2,param_3,param_4,param_5);
  return uVar2;
}


// SDK libcgc.a(libcgc_cell_localize.o): read_uleb128(unsigned char const*, unsigned long long*)  [exact match]
// 0x05e524c (0x38 bytes)
byte * FUN_005e524c(byte *param_1,ulonglong *param_2)

{
  byte bVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar4 = 0;
  uVar3 = 0;
  do {
    bVar1 = *param_1;
    param_1 = param_1 + 1;
    uVar2 = uVar4 & 0x7f;
    uVar4 = uVar4 + 7;
    uVar3 = uVar3 | ((ulonglong)bVar1 & 0x7f) << uVar2;
  } while ((char)bVar1 < '\0');
  *param_2 = uVar3;
  return param_1;
}


// 0x05e5284 (0x58 bytes)
byte * FUN_005e5284(byte *param_1,ulonglong *param_2)

{
  byte bVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar4 = 0;
  uVar3 = 0;
  do {
    bVar1 = *param_1;
    param_1 = param_1 + 1;
    uVar2 = uVar4 & 0x7f;
    uVar4 = uVar4 + 7;
    uVar3 = uVar3 | ((ulonglong)bVar1 & 0x7f) << uVar2;
  } while ((char)bVar1 < '\0');
  if (((uVar4 & 0xffffffff) < 0x40) && ((bVar1 & 0x40) != 0)) {
    uVar3 = uVar3 | -1L << (uVar4 & 0x7f);
  }
  *param_2 = uVar3;
  return param_1;
}


// SDK libcgc.a(libcgc_cell_localize.o): get_adjusted_ptr(std::type_info const*, std::type_info const*, void**)  [exact match]
// 0x05e52dc (0xdc bytes)
bool FUN_005e52dc(int *param_1,int *param_2,undefined4 *param_3)

{
  char cVar1;
  undefined4 *local_30 [4];
  
  local_30[0] = (undefined4 *)*param_3;
  cVar1 = (*(code *)**(undefined4 **)(*param_2 + 8))(param_2);
  if (cVar1 != '\0') {
    local_30[0] = (undefined4 *)*local_30[0];
  }
  cVar1 = (*(code *)**(undefined4 **)(*param_1 + 0x10))(param_1,param_2,local_30,1);
  if (cVar1 != '\0') {
    *param_3 = local_30[0];
  }
  return cVar1 != '\0';
}


// 0x05e53b8 (0xa8 bytes)
undefined4 * FUN_005e53b8(ulonglong param_1,undefined8 param_2,int param_3,undefined4 *param_4)

{
  int unaff_r2;
  undefined4 *puVar1;
  
  if (((uint)param_1 & 0xff) == 0x50) {
    puVar1 = (undefined4 *)(param_3 + 3U & 0xfffffffc);
    *param_4 = *puVar1;
    return puVar1 + 1;
  }
  if (0xc < (param_1 & 0xf)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
                    /* WARNING: Could not recover jumptable at 0x005e5420. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  puVar1 = (undefined4 *)
           (*(code *)(*(int *)((int)((param_1 & 0xf) << 2) + *(int *)(unaff_r2 + -0x5b68)) +
                     *(int *)(unaff_r2 + -0x5b68)))();
  return puVar1;
}


// SDK libcgc.a(libcgc_cell_localize.o): get_ttype_entry(lsda_header_info*, unsigned long long)  [fuzzy 0.980 match]
// 0x05e55bc (0xc8 bytes)
undefined4 FUN_005e55bc(int param_1,ulonglong param_2)

{
  byte bVar1;
  byte bVar2;
  longlong lVar3;
  undefined4 local_10 [4];
  
  bVar1 = *(byte *)(param_1 + 0x14);
  if (bVar1 == 0xff) {
    lVar3 = 0;
  }
  else {
    bVar2 = bVar1 & 7;
    if (bVar2 == 2) {
      FUN_005e53b8(bVar1,*(undefined4 *)(param_1 + 8),
                   (ulonglong)*(uint *)(param_1 + 0xc) + (param_2 & 0x7fffffff) * -2 & 0xffffffff,
                   local_10);
      return local_10[0];
    }
    if (bVar2 < 3) {
      lVar3 = (param_2 & 0x3fffffff) << 2;
      if ((bVar1 & 7) != 0) {
LAB_005e5600:
                    /* WARNING: Subroutine does not return */
        abort();
      }
    }
    else if (bVar2 == 3) {
      lVar3 = (param_2 & 0x3fffffff) << 2;
    }
    else {
      lVar3 = (param_2 & 0x1fffffff) << 3;
      if (bVar2 != 4) goto LAB_005e5600;
    }
  }
  FUN_005e53b8(bVar1,*(undefined4 *)(param_1 + 8),
               (ulonglong)*(uint *)(param_1 + 0xc) - lVar3 & 0xffffffff,local_10);
  return local_10[0];
}


// 0x05e5688 (0xac bytes)
undefined4 FUN_005e5688(uint param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (param_1 != 0xff) {
    param_1 = param_1 & 0x70;
    if (param_1 == 0x20) {
      uVar1 = FUN_005ddd28(param_2);
      return uVar1;
    }
    if (param_1 < 0x21) {
      if ((param_1 != 0) && (param_1 != 0x10)) goto LAB_005e56c4;
    }
    else {
      if (param_1 == 0x40) {
        uVar1 = FUN_005ddd18(param_2);
        return uVar1;
      }
      if (param_1 != 0x50) {
        if (param_1 == 0x30) {
          uVar1 = FUN_005ddd20(param_2);
          return uVar1;
        }
LAB_005e56c4:
                    /* WARNING: Subroutine does not return */
        abort();
      }
    }
  }
  return 0;
}


// SDK libcgc.a(libcgc_cell_localize.o): parse_lsda_header(_Unwind_Context*, unsigned char const*, lsda_header_info*)  [exact match]
// 0x05e5738 (0x144 bytes)
int FUN_005e5738(int param_1,char *param_2,undefined4 *param_3)

{
  char cVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  GPiece<4> local_40;
  int iStack_3c;
  
  uVar2 = 0;
  if (param_1 != 0) {
    uVar2 = FUN_005ddd18(param_1);
  }
  *param_3 = uVar2;
  cVar1 = *param_2;
  if (cVar1 == -1) {
    param_3[1] = uVar2;
    cVar1 = param_2[1];
    param_2 = param_2 + 2;
    *(char *)(param_3 + 5) = cVar1;
  }
  else {
    uVar2 = FUN_005e5688(cVar1,param_1);
    pcVar3 = (char *)FUN_005e53b8(cVar1,uVar2,param_2 + 1,param_3 + 1);
    param_2 = pcVar3 + 1;
    cVar1 = *pcVar3;
    *(char *)(param_3 + 5) = cVar1;
  }
  if (cVar1 == -1) {
    param_3[3] = 0;
  }
  else {
    param_2 = (char *)FUN_005e524c(param_2,local_40);
    param_3[3] = param_2 + iStack_3c;
  }
  *(char *)((int)param_3 + 0x15) = *param_2;
  iVar4 = FUN_005e524c(param_2 + 1,local_40);
  param_3[4] = iVar4 + iStack_3c;
  return iVar4;
}


// 0x05e587c (0x30 bytes)
void FUN_005e587c(int param_1)

{
  FUN_005e5fcc(param_1);
                    /* WARNING: Subroutine does not return */
  FUN_005e5e38(*(undefined4 *)(param_1 + -0x28));
}


// 0x05e5e38 (0x28 bytes)
void FUN_005e5e38(undefined4 *param_1)

{
  (*(code *)*param_1)();
                    /* WARNING: Subroutine does not return */
  FUN_005e6980();
}


// 0x05e5e64 (0x28 bytes)
void FUN_005e5e64(undefined4 *param_1)

{
  (*(code *)*param_1)();
                    /* WARNING: Subroutine does not return */
  abort();
}


// SDK libcgc.a(libcgc_cell_localize.o): std::uncaught_exception()  [exact match]
// 0x05e5e90 (0x3c bytes)
uint FUN_005e5e90(void)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = FUN_005e6280();
  uVar1 = (int)*(uint *)(iVar2 + 4) >> 0x1f;
  return uVar1 - (uVar1 ^ *(uint *)(iVar2 + 4)) >> 0x1f;
}


// SDK libcgc.a(libcgc_cell_localize.o): __cxa_end_catch  [fuzzy 0.984 match]
// 0x05e5ecc (0xfc bytes)
void FUN_005e5ecc(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = (int *)FUN_005e6238();
  iVar1 = *piVar2;
  if (iVar1 == 0) {
    return;
  }
  if (*(longlong *)(iVar1 + 0x30) != 0x474e5543432b2b00) {
    *piVar2 = 0;
    FUN_005ddd30(iVar1 + 0x30);
    return;
  }
  iVar3 = *(int *)(iVar1 + 0x14);
  if (iVar3 < 0) {
    iVar3 = iVar3 + 1;
    if (iVar3 == 0) {
      *(undefined4 *)(iVar1 + 0x14) = 0;
      *piVar2 = *(int *)(iVar1 + 0x10);
      return;
    }
  }
  else {
    iVar3 = iVar3 + -1;
    if (iVar3 == 0) {
      *piVar2 = *(int *)(iVar1 + 0x10);
      FUN_005ddd30(iVar1 + 0x30);
      if (*piVar2 != 0) {
        return;
      }
      FUN_005e61fc();
      return;
    }
    if (iVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_005e6980();
    }
  }
  *(int *)(iVar1 + 0x14) = iVar3;
  return;
}


// 0x05e5fcc (0xc8 bytes)
undefined4 FUN_005e5fcc(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  longlong *plVar5;
  
  piVar4 = (int *)FUN_005e6280();
  plVar5 = param_1 + -6;
  plVar1 = (longlong *)*piVar4;
  if (*param_1 == 0x474e5543432b2b00) {
    iVar2 = *(int *)((int)param_1 + -0x1c);
    iVar3 = -iVar2;
    if (-1 < iVar2) {
      iVar3 = iVar2;
    }
    *(int *)((int)param_1 + -0x1c) = iVar3 + 1;
    piVar4[1] = piVar4[1] + -1;
    if (plVar1 != plVar5) {
      *(longlong **)(param_1 + -4) = plVar1;
      *piVar4 = (int)plVar5;
    }
    return *(undefined4 *)(param_1 + -1);
  }
  if (plVar1 == (longlong *)0x0) {
    *piVar4 = (int)plVar5;
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_005e6980();
}


// SDK libcgc.a(libcgc_cell_localize.o): eh_globals_dtor(void*)  [exact match]
// 0x05e60a8 (0x70 bytes)
void FUN_005e60a8(int *param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1 != (int *)0x0) {
    iVar1 = *param_1;
    while (iVar1 != 0) {
      iVar2 = iVar1 + 0x30;
      iVar1 = *(int *)(iVar1 + 0x10);
      FUN_005ddd30(iVar2);
    }
    FUN_005d580c(param_1);
  }
  return;
}


// SDK libcgc.a(libcgc_cell_localize.o): __static_initialization_and_destruction_0(int, int)  [exact match]
// 0x05e6118 (0xc4 bytes)
void FUN_005e6118(int param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  puVar2 = PTR_PTR_0071c7c8;
  puVar1 = PTR_DAT_0071c7c4;
  if (param_1 == 1) {
    if (param_2 == 0xffff) {
      PTR_DAT_0071c7c4[4] = 0;
      uVar4 = FUN_005e31cc(puVar1,puVar2);
      uVar3 = (ulonglong)((int)uVar4 >> 0x1f);
      puVar1[4] = (byte)(((uVar3 ^ uVar4) - uVar3) + -1 >> 0x18) >> 7;
    }
  }
  else if (((param_1 == 0) && (param_2 == 0xffff)) && (PTR_DAT_0071c7c4[4] != '\0')) {
    FUN_005e2f70(*(undefined4 *)PTR_DAT_0071c7c4);
    return;
  }
  return;
}


// 0x05e61dc (0x10 bytes)
void FUN_005e61dc(void)

{
  FUN_005e6118(0,0xffff);
  return;
}


// 0x05e61ec (0x10 bytes)
void FUN_005e61ec(void)

{
  FUN_005e6118(1,0xffff);
  return;
}


// SDK libcgc.a(libcgc_cell_localize.o): __eh_thread_cleanup  [exact match]
// 0x05e61fc (0x3c bytes)
void FUN_005e61fc(void)

{
  if (PTR_DAT_0071c7c4[4] != '\0') {
    FUN_005e36ac(*(undefined4 *)PTR_DAT_0071c7c4);
  }
  return;
}


// 0x05e6238 (0x48 bytes)
undefined * FUN_005e6238(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_0071c7c4 + 8;
  if (PTR_DAT_0071c7c4[4] != '\0') {
    puVar1 = (undefined *)FUN_005e3314(*(undefined4 *)PTR_DAT_0071c7c4);
  }
  return puVar1;
}


// 0x05e6280 (0xac bytes)
undefined4 * FUN_005e6280(void)

{
  undefined *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  puVar1 = PTR_DAT_0071c7c4;
  if (PTR_DAT_0071c7c4[4] == '\0') {
    puVar2 = (undefined4 *)(PTR_DAT_0071c7c4 + 8);
  }
  else {
    puVar2 = (undefined4 *)FUN_005e3314(*(undefined4 *)PTR_DAT_0071c7c4);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)FUN_005d5838(8);
      if ((puVar2 != (undefined4 *)0x0) &&
         (iVar3 = FUN_005e3408(*(undefined4 *)puVar1,puVar2), iVar3 == 0)) {
        puVar2[1] = 0;
        *puVar2 = 0;
        return puVar2;
      }
                    /* WARNING: Subroutine does not return */
      FUN_005e6980();
    }
  }
  return puVar2;
}


// 0x05e6424 (0x178 bytes)
undefined8 * FUN_005e6424(undefined8 *param_1,undefined8 *param_2,uint param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  uint uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  uVar5 = param_3 & 3;
  uVar7 = param_3 & 0x10;
  uVar6 = param_3 & 0xc;
  uVar10 = param_3;
  puVar11 = param_2;
  puVar9 = param_1;
  puVar8 = param_1;
  if (0x1f < param_3) {
    do {
      uVar13 = puVar11[1];
      uVar12 = puVar11[2];
      param_2 = puVar11 + 4;
      uVar14 = puVar11[3];
      *puVar8 = *puVar11;
      puVar8[1] = uVar13;
      puVar8[2] = uVar12;
      puVar8[3] = uVar14;
      puVar9 = puVar8 + 4;
      if (uVar10 - 0x20 < 0x20) break;
      uVar15 = *param_2;
      uVar10 = uVar10 - 0x40;
      uVar14 = puVar11[5];
      puVar9 = puVar8 + 8;
      uVar13 = puVar11[6];
      param_2 = puVar11 + 8;
      uVar12 = puVar11[7];
      puVar8[4] = uVar15;
      puVar8[5] = uVar14;
      puVar8[6] = uVar13;
      puVar8[7] = uVar12;
      puVar11 = param_2;
      puVar8 = puVar9;
    } while (0x1f < uVar10);
  }
  puVar11 = puVar9;
  if (uVar7 != 0) {
    uVar12 = *param_2;
    puVar11 = (undefined8 *)((int)puVar9 + uVar7);
    uVar13 = param_2[1];
    param_2 = (undefined8 *)(uVar7 + (int)param_2);
    *puVar9 = uVar12;
    puVar9[1] = uVar13;
  }
  puVar9 = puVar11;
  puVar8 = param_2;
  if (uVar6 != 0) {
    puVar8 = (undefined8 *)(uVar6 + (int)param_2);
    uVar10 = param_3 >> 1 & 4;
    puVar9 = (undefined8 *)((int)puVar11 + uVar6);
    uVar4 = *(undefined4 *)(uVar10 + (int)param_2);
    uVar3 = *(undefined4 *)((int)puVar8 + -4);
    *(undefined4 *)puVar11 = *(undefined4 *)param_2;
    *(undefined4 *)(uVar10 + (int)puVar11) = uVar4;
    *(undefined4 *)((int)puVar9 + -4) = uVar3;
  }
  if (uVar5 != 0) {
    uVar10 = param_3 >> 1 & 1;
    uVar2 = *(undefined1 *)(uVar10 + (int)puVar8);
    uVar1 = *(undefined1 *)((int)puVar8 + (uVar5 - 1));
    *(undefined1 *)puVar9 = *(undefined1 *)puVar8;
    *(undefined1 *)(uVar10 + (int)puVar9) = uVar2;
    *(undefined1 *)((int)puVar9 + (uVar5 - 1)) = uVar1;
  }
  return param_1;
}


