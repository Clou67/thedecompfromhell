// sdk/libfios/fios_op.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 16 functions, 0x51b750-0x51c858
#include <string.h>
#include "sdk/libfios/fios_op.h"
#include "sdk/lUnk.h"
#include "sdk/libfios/fios_platform_ps3ppu.h"
#include "sdk/libfios/fios_scheduler.h"
#include "sdk/mUnk4.h"

// SDK libfios.a(fios_op.ppu.o): cell::fios::op::timeoutToDeadline(long long)  [exact match]
// 0x051b750 (0x34 bytes)
longlong FUN_0051b750(longlong param_1)

{
  longlong lVar1;
  
  if (param_1 < 1) {
    return 0;
  }
  do {
    lVar1 = TBLr;
  } while ((int)lVar1 == 0);
  if (lVar1 < param_1 + lVar1) {
    return param_1 + lVar1;
  }
  return 0x7fffffffffffffff;
}


// SDK libfios.a(fios_op.ppu.o): cell::fios::op::addOrRemoveWaitData(cell::fios::op* const*, unsigned int, cell::fios::opWaitData*, bool)  [exact match]
// 0x051b784 (0x140 bytes)
// strings: 0051b858: '} Kxy)' (raw)

void FUN_0051b784(int *param_1,int param_2,undefined4 *param_3,char param_4)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  
  if (param_2 != 0) {
    bVar1 = param_3 != (undefined4 *)0x0;
    iVar7 = 0;
    do {
      while (iVar2 = *param_1, iVar2 != 0) {
        if (param_4 == '\0') {
          if (bVar1) {
            puVar5 = *(undefined4 **)(iVar2 + 0xd8);
            puVar4 = (undefined4 *)(iVar2 + 0xd8);
            while (puVar3 = puVar5, param_3 != puVar3) {
              if (puVar3 == (undefined4 *)0x0) goto joined_r0x0051b890;
              puVar4 = puVar3;
              puVar5 = (undefined4 *)*puVar3;
            }
            if (bVar1) {
              *puVar4 = *param_3;
              *param_3 = 0;
            }
          }
          break;
        }
        instructionSynchronize();
        if (*(int *)(iVar2 + 0x98) == 0) {
          if (bVar1) {
            *param_3 = *(undefined4 *)(iVar2 + 0xd8);
            *(undefined4 *)(iVar2 + 0xd8) = param_3;
            goto joined_r0x0051b8bc;
          }
          break;
        }
        param_3[1] = param_3[1] + 1;
        iVar6 = *(int *)(iVar2 + 0xd4);
        if ((iVar6 == 0) && (iVar6 = *(int *)(iVar2 + 0x44), iVar6 == 0)) break;
        param_3[3] = iVar6;
joined_r0x0051b8bc:
        param_1 = param_1 + 1;
        iVar7 = iVar7 + 1;
        if (param_2 == iVar7) {
          return;
        }
      }
joined_r0x0051b890:
      param_1 = param_1 + 1;
      iVar7 = iVar7 + 1;
    } while (param_2 != iVar7);
  }
  return;
}


// SDK libfios.a(fios_op.ppu.o): cell::fios::op::terminateStatics()  [exact match]
// 0x051b8c4 (0x180 bytes)
/* WARNING: Heritage AFTER dead removal. Example location: r0x0071aae8 : 0x0051b984 */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_0051b8c4(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulonglong uVar8;
  char in_RESERVE;
  byte in_cr0;
  
  puVar7 = PTR_DAT_0071aaf0;
  puVar5 = PTR_DAT_0071aaec;
  puVar3 = PTR_DAT_0071aae8;
  uVar8 = ZEXT48(PTR_DAT_0071aaf0);
LAB_0051b8f4:
  iVar1 = *(int *)(puVar3 + 4);
  instructionSynchronize();
  while (puVar6 = PTR_DAT_0071aaec, puVar4 = PTR_DAT_0071aae8, iVar1 != 0) {
    do {
      if (iVar1 != *(int *)puVar7) goto LAB_0051b8f4;
      if (in_RESERVE != '\0') {
        uVar2 = storeWordConditionalIndexed(0,0,uVar8);
        *(undefined4 *)puVar7 = uVar2;
        in_cr0 = 2;
      }
    } while ((in_cr0 & 2) == 0);
    FUN_0052d0e8(iVar1);
    (*(code *)**(undefined4 **)(**(int **)(puVar5 + 8) + 4))
              (*(int **)(puVar5 + 8),iVar1,0x10340102,0,0);
    iVar1 = *(int *)(puVar3 + 4);
    instructionSynchronize();
  }
  uVar8 = ZEXT48(PTR_DAT_0071aae8);
LAB_0051b990:
  iVar1 = *(int *)puVar3;
  instructionSynchronize();
  do {
    if (iVar1 == 0) {
      return;
    }
    do {
      if (iVar1 != *(int *)puVar4) goto LAB_0051b990;
      if (in_RESERVE != '\0') {
        uVar2 = storeWordConditionalIndexed(0,0,uVar8);
        *(undefined4 *)puVar4 = uVar2;
        in_cr0 = 2;
      }
    } while ((in_cr0 & 2) == 0);
    FUN_0052df14(iVar1);
    (*(code *)**(undefined4 **)(**(int **)(puVar6 + 8) + 4))
              (*(int **)(puVar6 + 8),iVar1,0x10330103,0,0);
    iVar1 = *(int *)puVar3;
    instructionSynchronize();
  } while( true );
}


// SDK libfios.a(fios_op.ppu.o): cell::fios::op::initializeStatics(cell::fios::platform::mutex**, cell::fios::platform::cond**)  [exact match]
// 0x051ba44 (0x2bc bytes)
// strings: 006679b0: 'opWait'

/* WARNING: Removing unreachable block (ram,0x0051bcb0) */

void _ZN4cell4fios2op17initializeStaticsEPPNS0_8platform5mutexEPPNS2_4condE(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  int *piVar10;
  ulonglong uVar11;
  char in_RESERVE;
  byte in_cr0;
  
  puVar5 = PTR_DAT_0071aae8;
  uVar11 = ZEXT48(PTR_DAT_0071aae8);
  do {
    do {
      do {
        puVar6 = PTR_DAT_0071aaec;
        iVar3 = *(int *)puVar5;
        instructionSynchronize();
        if (iVar3 != 0) {
          do {
            do {
              do {
                puVar6 = PTR_DAT_0071aaec;
                iVar1 = *(int *)(puVar5 + 4);
                instructionSynchronize();
                if (iVar1 != 0) {
                  if (param_1 != (int *)0x0) {
                    *param_1 = iVar3;
                  }
                  if (param_2 != (int *)0x0) {
                    *param_2 = iVar1;
                  }
                  return;
                }
                uVar8 = (*(code *)**(undefined4 **)**(undefined4 **)(PTR_DAT_0071aaec + 8))
                                  (*(undefined4 **)(PTR_DAT_0071aaec + 8),0x18,0x10340102,0,0);
                uVar9 = (uint)uVar8;
              } while (uVar9 == 0);
              FUN_0052d19c(uVar8 & 0xffffffff,PTR_s_opWait_0071aaf4,PTR_DAT_0071aaf8,iVar3);
              iVar1 = ((int)uVar9 >> 0x1f) - ((int)uVar9 >> 0x1f ^ uVar9);
            } while (-1 < iVar1);
            uVar7 = uVar11 + 4;
            do {
              piVar10 = (int *)uVar7;
              iVar2 = *piVar10;
              if (iVar2 != 0) {
                if ((iVar2 != 0) && (iVar1 < 0)) {
                  FUN_0052d0e8(uVar8 & 0xffffffff);
                  (*(code *)**(undefined4 **)(**(int **)(puVar6 + 8) + 4))
                            (*(int **)(puVar6 + 8),uVar8 & 0xffffffff,0x10340102,0,0);
                }
                break;
              }
              if (in_RESERVE != '\0') {
                iVar2 = storeWordConditionalIndexed(uVar8,0,uVar7 & 0xffffffff);
                *piVar10 = iVar2;
                in_cr0 = 2;
              }
            } while ((in_cr0 & 2) == 0);
          } while( true );
        }
        uVar8 = (*(code *)**(undefined4 **)**(undefined4 **)(PTR_DAT_0071aaec + 8))
                          (*(undefined4 **)(PTR_DAT_0071aaec + 8),0x28,0x10330103,0,0);
        uVar9 = (uint)uVar8;
      } while (uVar9 == 0);
      FUN_0052d370(uVar8 & 0xffffffff,PTR_s_opWait_0071aaf4);
      iVar3 = ((int)uVar9 >> 0x1f) - ((int)uVar9 >> 0x1f ^ uVar9);
    } while (-1 < iVar3);
    do {
      iVar1 = *(int *)puVar5;
      if (iVar1 != 0) break;
      if (in_RESERVE != '\0') {
        uVar4 = storeWordConditionalIndexed(uVar8,0,uVar11);
        *(undefined4 *)puVar5 = uVar4;
        in_cr0 = 2;
      }
    } while ((in_cr0 & 2) == 0);
    if ((iVar1 != 0) && (iVar3 < 0)) {
      FUN_0052df14(uVar8 & 0xffffffff);
      (*(code *)**(undefined4 **)(**(int **)(puVar6 + 8) + 4))
                (*(int **)(puVar6 + 8),uVar8 & 0xffffffff,0x10330103,0,0);
    }
  } while( true );
}


// 0x051bd00 (0x64 bytes)
void FUN_0051bd00(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0xdc) = 0x46494f53;
  *(undefined4 *)(param_1 + 0xe0) = 0x6f626a20;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x34) = param_2;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0;
  return;
}


// SDK libfios.a(fios_op.ppu.o): cell::fios::op::reset()  [exact match]
// 0x051bd64 (0x9c bytes)
void _ZN4cell4fios2op5resetEv(int param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  sync(1);
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  memset(param_1 + 0x40,0,0x58);
  sync(1);
  *(undefined4 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined4 *)(param_1 + 0xd0) = 0;
  *(undefined4 *)(param_1 + 0xd4) = 0;
  return;
}


// 0x051be00 (0x64 bytes)
void FUN_0051be00(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0xdc) = 0x46494f53;
  *(undefined4 *)(param_1 + 0xe0) = 0x6f626a20;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x34) = param_2;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0;
  return;
}


// SDK libfios.a(fios_op.ppu.o): cell::fios::op::waitListDeadline(unsigned int, cell::fios::op* const*, long long)  [exact match]
// 0x051be64 (0x1cc bytes)
int _ZN4cell4fios2op16waitListDeadlineEjPKPS1_x(int param_1,int *param_2,longlong param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  GPiece<4> local_60;
  GPiece<4> local_5c;
  GPiece<32> local_58;
  
  if (param_2 == (int *)0x0) {
LAB_0051c00c:
    iVar2 = -0x7ffef8f6;
  }
  else {
    if (param_1 == 1) {
      if (*param_2 == 0) goto LAB_0051c00c;
      instructionSynchronize();
      if (*(int *)(*param_2 + 0x98) != 0) {
        iVar2 = *(int *)(*param_2 + 0xd4);
        if (iVar2 != 0) {
          return iVar2;
        }
        return *(int *)(*param_2 + 0x44);
      }
    }
    trace_markers_alloc(local_60,local_5c);
    lwmutex_lock_checked(0);
    FUN_0051b784(param_2,param_1,local_58,1);
    lVar3 = 0x7fffffffffffffff;
    if (param_3 != 0) {
      lVar3 = param_3;
    }
    while (param_1 != 0) {
      do {
        lVar1 = TBLr;
      } while ((int)lVar1 == 0);
      if (lVar3 <= lVar1) break;
      FUN_0052e49c(0,0,param_3);
    }
    if (param_1 != 0) {
      FUN_0051b784(param_2,param_1,local_58,0);
    }
    lwmutex_unlock_checked(0);
    iVar2 = -0x7ffef8fc;
    if (param_1 == 0) {
      return 0;
    }
  }
  return iVar2;
}


// SDK libfios.a(fios_op.ppu.o): cell::fios::op::syncWait(long long*)  [exact match]
// 0x051c030 (0xbc bytes)
undefined4 _ZN4cell4fios2op8syncWaitEPx(int param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  GPiece<16> local_40;
  
  uVar1 = 0x8001070a;
  if (param_1 != 0) {
    check_magic(param_1);
    uVar1 = op_wait(1,local_40,0);
    instructionSynchronize();
    if (param_2 != (undefined8 *)0x0) {
      *param_2 = *(undefined8 *)(param_1 + 0xb0);
    }
    FUN_0051fd24(*(undefined4 *)(param_1 + 0x9c),param_1);
  }
  return uVar1;
}


// SDK libfios.a(fios_op.ppu.o): cell::fios::op::vwaitMultipleDeadline(long long, cell::fios::op*, char*)  [exact match]
// 0x051c0ec (0x120 bytes)
int FUN_0051c0ec(undefined8 param_1,int param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  GPiece<24> local_50;
  
  iVar3 = 0;
  if (param_2 != 0) {
    piVar4 = (int *)(param_3 + 4);
    bVar1 = false;
    iVar3 = 0;
    do {
      while( true ) {
        check_magic(param_2);
        iVar2 = _ZN4cell4fios2op16waitListDeadlineEjPKPS1_x(1,local_50,param_1);
        if (iVar2 != -0x7ffef8fc) break;
        param_2 = *piVar4;
        bVar1 = true;
        piVar4 = piVar4 + 2;
        if (param_2 == 0) goto LAB_0051c198;
      }
      if (iVar2 != 0) {
        iVar3 = iVar2;
      }
      param_2 = *piVar4;
      piVar4 = piVar4 + 2;
    } while (param_2 != 0);
LAB_0051c198:
    if (bVar1) {
      return -0x7ffef8fc;
    }
  }
  return iVar3;
}


// SDK libfios.a(fios_op.ppu.o): cell::fios::op::waitMultiple(cell::fios::op*, ...)  [exact match]
// 0x051c20c (0x54 bytes)
undefined4
FUN_0051c20c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined4 uVar1;
  undefined8 uStack00000038;
  undefined8 uStack00000040;
  undefined8 uStack00000048;
  undefined8 uStack00000050;
  undefined8 uStack00000058;
  undefined8 uStack00000060;
  undefined8 uStack00000068;
  
  uStack00000038 = param_2;
  uStack00000040 = param_3;
  uStack00000048 = param_4;
  uStack00000050 = param_5;
  uStack00000058 = param_6;
  uStack00000060 = param_7;
  uStack00000068 = param_8;
  uVar1 = FUN_0051c0ec(0,param_1,&stack0x00000038);
  return uVar1;
}


// SDK libfios.a(fios_op.ppu.o): cell::fios::op::waitMultipleTimeout(long long, cell::fios::op*, ...)  [exact match]
// 0x051c260 (0x5c bytes)
undefined4
FUN_0051c260(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined8 uStack00000040;
  undefined8 uStack00000048;
  undefined8 uStack00000050;
  undefined8 uStack00000058;
  undefined8 uStack00000060;
  undefined8 uStack00000068;
  
  uStack00000040 = param_3;
  uStack00000048 = param_4;
  uStack00000050 = param_5;
  uStack00000058 = param_6;
  uStack00000060 = param_7;
  uStack00000068 = param_8;
  uVar1 = FUN_0051b750();
  uVar2 = FUN_0051c0ec(uVar1,param_2,&stack0x00000040);
  return uVar2;
}


// 0x051c2bc (0x48 bytes)
undefined4
FUN_0051c2bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined4 uVar1;
  undefined8 uStack00000040;
  undefined8 uStack00000048;
  undefined8 uStack00000050;
  undefined8 uStack00000058;
  undefined8 uStack00000060;
  undefined8 uStack00000068;
  
  uStack00000040 = param_3;
  uStack00000048 = param_4;
  uStack00000050 = param_5;
  uStack00000058 = param_6;
  uStack00000060 = param_7;
  uStack00000068 = param_8;
  uVar1 = FUN_0051c0ec(param_1,param_2,&stack0x00000040);
  return uVar1;
}


// SDK libfios.a(fios_op.ppu.o): cell::fios::op::getFulfilledSize() const  [exact match]
// 0x051c304 (0x8c bytes)
undefined8 FUN_0051c304(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  instructionSynchronize();
  iVar1 = *(int *)(param_1 + 0x9c) + 0x38;
  if (*(int *)(param_1 + 0x98) != 0) {
    return *(undefined8 *)(param_1 + 0xb0);
  }
  lwmutex_lock_checked(iVar1);
  uVar2 = *(undefined8 *)(param_1 + 0xb0);
  lwmutex_unlock_checked(iVar1);
  return uVar2;
}


// SDK libfios.a(fios_op.ppu.o): cell::fios::op::callback(unsigned char, void*)  [exact match]
// 0x051c390 (0x1c4 bytes)
undefined4 _ZN4cell4fios2op8callbackEhPv(int param_1,char param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  bool bVar6;
  int *piVar7;
  GPiece<4> local_60;
  GPiece<20> local_5c;
  
  iVar3 = *(int *)(param_1 + 0x9c) + 0x60;
  rwlock_wlock_checked(iVar3);
  puVar1 = *(undefined4 **)(param_1 + 0x14);
  uVar2 = *(undefined4 *)(param_1 + 0x18);
  if (param_2 == '\x01') {
    instructionSynchronize();
    sync(1);
    *(undefined4 *)(param_1 + 0x98) = 1;
    trace_markers_alloc(local_60,local_5c);
    lwmutex_lock_checked(0);
    piVar7 = *(int **)(param_1 + 0xd8);
    *(undefined4 *)(param_1 + 0xd8) = 0;
    if (piVar7 != (int *)0x0) {
      bVar6 = false;
      do {
        while( true ) {
          iVar4 = *(int *)(param_1 + 0xd4);
          if ((iVar4 != 0) || (iVar4 = *(int *)(param_1 + 0x44), iVar4 != 0)) {
            piVar7[3] = iVar4;
          }
          iVar4 = piVar7[1];
          piVar7[1] = iVar4 + 1;
          if (piVar7[2] != iVar4 + 1) break;
          piVar7 = (int *)*piVar7;
          bVar6 = true;
          if (piVar7 == (int *)0x0) goto LAB_0051c528;
        }
        piVar7 = (int *)*piVar7;
      } while (piVar7 != (int *)0x0);
LAB_0051c528:
      if (bVar6) {
        FUN_0052dc40(0);
      }
    }
    lwmutex_unlock_checked(0);
  }
  FUN_0052cc20(iVar3);
  uVar5 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    uVar5 = (*(code *)*puVar1)(uVar2,param_1,param_2,param_3);
  }
  return uVar5;
}


// SDK libfios.a(fios_op.ppu.o): cell::fios::op::copyDataFrom(cell::fios::op*)  [exact match]
// 0x051c554 (0x304 bytes)
uint FUN_0051c554(int param_1,int param_2)

{
  void *__src;
  void *__dest;
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if (((param_2 != param_1) &&
      ((((*(int *)(param_1 + 0x40) == 10 || (*(int *)(param_1 + 0x40) == 6)) &&
        (uVar6 = *(ulonglong *)(param_1 + 0x80), uVar6 != 0)) &&
       ((*(int *)(param_2 + 0x40) == 10 || (*(int *)(param_2 + 0x40) == 6)))))) &&
     ((((*(int *)PTR_DAT_0071aafc != *(int *)(param_1 + 0x50) ||
        (((*(int *)(param_1 + 0x54) != *(int *)(PTR_DAT_0071aafc + 4) ||
          (*(int *)(param_1 + 0x58) != *(int *)(PTR_DAT_0071aafc + 8))) ||
         ((*(longlong *)(param_1 + 0x60) != *(longlong *)(PTR_DAT_0071aafc + 0x10) ||
          (*(int *)(param_1 + 0x68) != *(int *)(PTR_DAT_0071aafc + 0x18))))))) &&
       ((((*(int *)(param_2 + 0x50) == *(int *)(param_1 + 0x50) &&
          (*(int *)(param_1 + 0x54) == *(int *)(param_2 + 0x54))) &&
         (*(int *)(param_1 + 0x58) == *(int *)(param_2 + 0x58))) &&
        ((*(longlong *)(param_1 + 0x60) == *(longlong *)(param_2 + 0x60) &&
         (*(int *)(param_1 + 0x68) == *(int *)(param_2 + 0x68))))))) ||
      ((*(int *)(param_1 + 0x48) != 0 &&
       ((*(int *)(param_2 + 0x48) != 0 &&
        (iVar2 = FUN_005cc784(*(int *)(param_1 + 0x48),*(int *)(param_2 + 0x48)), iVar2 == 0))))))))
  {
    lVar1 = *(longlong *)(param_2 + 0xb8);
    lVar4 = *(longlong *)(param_1 + 0x70);
    __src = *(void **)(param_2 + 0xc0);
    lVar3 = lVar1 + *(longlong *)(param_2 + 0xa8);
    __dest = *(void **)(param_1 + 0x90);
    if ((lVar4 < lVar1) || (lVar3 <= lVar4)) {
      if ((lVar1 < (longlong)(lVar4 + uVar6)) && ((longlong)(lVar4 + uVar6) < lVar3)) {
        uVar5 = uVar6 - (lVar1 - lVar4);
        uVar6 = ZEXT48(__dest) + (lVar1 - lVar4);
        if ((uVar5 & 0xffffffff) < 0x1000) {
          memcpy((void *)uVar6,__src,(size_t)uVar5);
        }
        else {
          (*(code *)**(undefined4 **)(PTR_DAT_0071aaec + 0x10))
                    (uVar6 & 0xffffffff,__src,uVar5 & 0xffffffff);
        }
        uVar6 = *(longlong *)(param_1 + 0x80) - uVar5;
        *(ulonglong *)(param_1 + 0x80) = uVar6;
        *(ulonglong *)(param_1 + 0xb0) = uVar5 + *(longlong *)(param_1 + 0xb0);
      }
    }
    else {
      uVar5 = *(longlong *)(param_2 + 0xa8) - (lVar4 - lVar1);
      if ((longlong)uVar6 < (longlong)uVar5) {
        uVar5 = uVar6;
      }
      uVar6 = ZEXT48(__src) + (lVar4 - lVar1);
      if ((uVar5 & 0xffffffff) < 0x1000) {
        memcpy(__dest,(void *)uVar6,(size_t)uVar5);
      }
      else {
        (*(code *)**(undefined4 **)(PTR_DAT_0071aaec + 0x10))
                  (__dest,uVar6 & 0xffffffff,uVar5 & 0xffffffff);
      }
      uVar6 = *(longlong *)(param_1 + 0x80) - uVar5;
      *(ulonglong *)(param_1 + 0x70) = *(longlong *)(param_1 + 0x70) + uVar5;
      *(ulonglong *)(param_1 + 0xb0) = *(longlong *)(param_1 + 0xb0) + uVar5;
      *(size_t *)(param_1 + 0x90) = (int)__dest + (size_t)uVar5;
      *(ulonglong *)(param_1 + 0x80) = uVar6;
    }
    return (uint)((((longlong)uVar6 >> 0x3f ^ uVar6) - ((longlong)uVar6 >> 0x3f)) + -1 >> 0x3f);
  }
  return 0;
}


