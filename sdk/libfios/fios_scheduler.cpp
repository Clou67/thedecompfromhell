// sdk/libfios/fios_scheduler.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 66 functions, 0x51cb74-0x5260ac
#include <string.h>
#include "sdk/libfios/fios_scheduler.h"
#include "game/hero.h"
#include "sdk/cUnk.h"
#include "sdk/fUnk2.h"
#include "sdk/libfios/fios_base.h"
#include "sdk/libfios/fios_caching.h"
#include "sdk/libfios/fios_dearchive.h"
#include "sdk/libfios/fios_filehandle.h"
#include "sdk/libfios/fios_internal.h"
#include "sdk/libfios/fios_media.h"
#include "sdk/libfios/fios_op.h"
#include "sdk/libfios/fios_paths.h"
#include "sdk/libfios/fios_platform_ps3ppu.h"
#include "sdk/libfios/fios_watch.h"
#include "sdk/mUnk4.h"
#include "sdk/sce.h"
#include "sdk/sys.h"

// SDK libfios.a(fios_scheduler.ppu.o): cell::fios::countBitsSet(unsigned int)  [exact match]
// 0x051cb74 (0x30 bytes)
int FUN_0051cb74(uint param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_1 != 0) {
    iVar1 = 0;
    do {
      iVar1 = iVar1 + 1;
      param_1 = param_1 & param_1 - 1;
    } while (param_1 != 0);
  }
  return iVar1;
}


// SDK libfios.a(fios_scheduler.ppu.o): cell::fios::scheduler::getEffectiveAllocator() const  [exact match]
// 0x051cba4 (0x24 bytes)
int FUN_0051cba4(int param_1)

{
  if (*(int *)(param_1 + 0x174) != 0) {
    return *(int *)(param_1 + 0x174);
  }
  return *(int *)(PTR_DAT_0071ab10 + 8);
}


// SDK libfios.a(fios_scheduler.ppu.o): cell::fios::scheduler::isIdle() const  [exact match]
// 0x051cbc8 (0x24 bytes)
uint FUN_0051cbc8(int param_1)

{
  uint uVar1;
  
  instructionSynchronize();
  uVar1 = (int)*(uint *)(param_1 + 0x220) >> 0x1f;
  return ((uVar1 ^ *(uint *)(param_1 + 0x220)) - uVar1) - 1 >> 0x1f;
}


// SDK libfios.a(fios_scheduler.ppu.o): cell::fios::scheduler::schedulerShouldRun()  [exact match]
// 0x051cbec (0x60 bytes)
uint FUN_0051cbec(int param_1)

{
  uint uVar1;
  
  instructionSynchronize();
  uVar1 = 0;
  if (*(int *)(param_1 + 0x180) == 0) {
    instructionSynchronize();
    uVar1 = 1;
    if ((*(int *)(param_1 + 0x20c) == 0) && (*(char *)(param_1 + 0x17c) == '\0')) {
      instructionSynchronize();
      uVar1 = (int)*(uint *)(param_1 + 0x184) >> 0x1f;
      return ((uVar1 ^ *(uint *)(param_1 + 0x184)) - uVar1) - 1 >> 0x1f;
    }
  }
  return uVar1;
}


// 0x051cc4c (0x14 bytes)
undefined4 get_default_fs(void)

{
  instructionSynchronize();
  return *(undefined4 *)PTR_DAT_0071ab14;
}


// SDK libfios.a(fios_scheduler.ppu.o): cell::fios::scheduler::accumulatePCECoefficients(int const*, long long)  [exact match]
// 0x051cc60 (0x144 bytes)
void FUN_0051cc60(longlong param_1,int *param_2,longlong param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  uint *puVar6;
  longlong lVar7;
  longlong lVar8;
  int *piVar9;
  ulonglong *puVar10;
  ulonglong uVar11;
  char in_RESERVE;
  byte in_cr0;
  ulonglong uVar12;
  
  do {
    puVar6 = (uint *)(param_1 + 0x228U);
    uVar1 = *puVar6;
    instructionSynchronize();
    while (uVar1 == *puVar6) {
      if (in_RESERVE != '\0') {
        uVar3 = storeWordConditionalIndexed((ulonglong)uVar1 + 1,0,param_1 + 0x228U & 0xffffffff);
        *puVar6 = uVar3;
        in_cr0 = 2;
      }
      if ((in_cr0 & 2) != 0) {
        iVar4 = (int)param_1;
        uVar1 = *(uint *)(*(int *)(iVar4 + 0x160) + 0x8c);
        if (uVar1 != 0) {
          uVar12 = (ulonglong)uVar1;
          lVar8 = 0;
          lVar7 = 0;
          piVar9 = param_2;
          puVar10 = *(ulonglong **)(iVar4 + 0x1ec);
          do {
            iVar2 = *piVar9;
            piVar9 = piVar9 + 1;
            lVar8 = lVar8 + iVar2;
            lVar7 = lVar7 + (longlong)iVar2 * *puVar10;
            uVar12 = uVar12 - 1;
            puVar10 = puVar10 + 1;
          } while (uVar12 != 0);
          if (lVar8 != 0) {
            uVar12 = (ulonglong)uVar1;
            uVar5 = (param_3 - lVar7) / 10;
            puVar10 = *(ulonglong **)(iVar4 + 0x1ec);
            do {
              iVar2 = *param_2;
              param_2 = param_2 + 1;
              uVar11 = ((longlong)uVar5 / lVar8) * (longlong)iVar2 + *puVar10;
              *puVar10 = uVar11 & (longlong)~uVar11 >> 0x3f;
              uVar12 = uVar12 - 1;
              puVar10 = puVar10 + 1;
            } while (uVar12 != 0);
            instructionSynchronize();
            if ((1000 < *puVar6) &&
               (lVar7 = ((longlong)uVar5 >> 0x3f ^ uVar5) - ((longlong)uVar5 >> 0x3f),
               *(longlong *)(iVar4 + 0x1f0) < lVar7)) {
              *(longlong *)(iVar4 + 0x1f0) = lVar7;
            }
          }
        }
        return;
      }
    }
  } while( true );
}


// SDK libfios.a(fios_scheduler.ppu.o): cell::fios::scheduler::cancelOp(cell::fios::op*)  [exact match]
// 0x051cda4 (0x88 bytes)
void FUN_0051cda4(undefined8 param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  uint *puVar4;
  char in_RESERVE;
  byte in_cr0;
  
  cVar3 = FUN_00604788();
  if (cVar3 != '\0') {
    cVar3 = check_magic(param_2);
    puVar4 = (uint *)(param_2 + 0x30);
    if (cVar3 != '\0') {
      do {
        uVar1 = *puVar4;
        instructionSynchronize();
        while (uVar1 == *puVar4) {
          if (in_RESERVE != '\0') {
            uVar2 = storeWordConditionalIndexed((ulonglong)uVar1 | 0x200,0,ZEXT48(puVar4));
            *puVar4 = uVar2;
            in_cr0 = 2;
          }
          if ((in_cr0 & 2) != 0) {
            return;
          }
        }
      } while( true );
    }
  }
  return;
}


// SDK libfios.a(fios_scheduler.ppu.o): cell::fios::scheduler::cancelOpAction(void*, cell::fios::op*)  [exact match]
// 0x051ce2c (0x30 bytes)
void FUN_0051ce2c(int param_1,int param_2)

{
  if (param_1 != 0) {
    FUN_0051cda4(*(undefined4 *)(param_2 + 0x9c),param_2);
    return;
  }
  if (*(int *)(param_2 + 0x40) == 0xd) {
    return;
  }
  FUN_0051cda4(*(undefined4 *)(param_2 + 0x9c),param_2);
  return;
}


// SDK libfios.a(fios_scheduler.ppu.o): cell::fios::scheduler::suspend(char const*)  [exact match]
// 0x051ce5c (0x78 bytes)
void FUN_0051ce5c(int param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  char cVar4;
  uint *puVar3;
  char in_RESERVE;
  byte in_cr0;
  undefined4 uStack00000038;
  
  uStack00000038 = param_2;
  cVar4 = FUN_00604788(param_1);
  if (cVar4 == '\0') {
    return;
  }
  puVar3 = (uint *)(param_1 + 0x180);
  do {
    uVar1 = *puVar3;
    instructionSynchronize();
    while (uVar1 == *puVar3) {
      if (in_RESERVE != '\0') {
        uVar2 = storeWordConditionalIndexed((ulonglong)uVar1 + 1,0,ZEXT48(puVar3));
        *puVar3 = uVar2;
        in_cr0 = 2;
      }
      if ((in_cr0 & 2) != 0) {
        return;
      }
    }
  } while( true );
}


// SDK libfios.a(fios_scheduler.ppu.o): cell::fios::scheduler::setDefaultScheduler(cell::fios::scheduler*)  [exact match]
// 0x051ced4 (0x54 bytes)
void FUN_0051ced4(int param_1)

{
  char cVar1;
  
  if ((param_1 == 0) || (cVar1 = FUN_00604788(param_1), cVar1 != '\0')) {
    sync(1);
    *(int *)PTR_DAT_0071ab14 = param_1;
  }
  return;
}


// SDK libfios.a(fios_scheduler.ppu.o): cell::fios::scheduler::seekFileSync(cell::fios::opattr_t const*, cell::fios::filehandle*, long long, unsigned char, long long*)  [exact match]
// 0x051cf28 (0xb0 bytes)
undefined4
FUN_0051cf28(int param_1,undefined4 param_2,int param_3,undefined8 param_4,undefined1 param_5,
            undefined4 param_6)

{
  char cVar2;
  undefined4 uVar1;
  undefined4 uStack00000038;
  
  uStack00000038 = param_2;
  cVar2 = check_magic(param_3);
  uVar1 = 0x80010706;
  if (cVar2 != '\0') {
    if (*(int *)(param_3 + 8) == param_1) {
      uVar1 = FUN_00539358(param_3,param_4,param_5,param_6);
    }
  }
  return uVar1;
}


// SDK libfios.a(fios_scheduler.ppu.o): cell::fios::scheduler::allocateOp(cell::fios::opattr_t const*)  [exact match]
// 0x051cfd8 (0x328 bytes)
// strings: 006679d0: 'Invalid opattr_t.opflags: 0x%08X     Valid mask: 0x%08X\n'

uint * _ZN4cell4fios9scheduler10allocateOpEPKNS0_8opattr_tE(uint param_1,undefined8 *param_2)

{
  bool bVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined *puVar5;
  uint *puVar7;
  undefined8 uVar6;
  char cVar10;
  undefined4 *puVar8;
  uint *puVar9;
  ulonglong uVar11;
  undefined8 uVar12;
  uint uVar13;
  undefined8 uVar14;
  char in_RESERVE;
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
  cVar10 = FUN_00604788(param_1);
  if ((cVar10 == '\0') || (instructionSynchronize(), *(int *)(param_1 + 0x184) == 0)) {
    return (uint *)0x0;
  }
  if (param_2 == (undefined8 *)0x0) {
    uVar13 = 0;
  }
  else {
    uVar2 = *(uint *)((int)param_2 + 0x14);
    uVar13 = uVar2 >> 0xb & 1;
    bVar1 = (uVar2 & 0xffffc700) == 0;
    in_cr0 = bVar1 << 1;
    if (!bVar1) {
      print_tty4(PTR_s_Invalid_fios_opattr_t_opflags__0_0071ab18,uVar2,0x38ff);
    }
    if (uVar13 != 0) {
LAB_0051d258:
      puVar8 = (undefined4 *)FUN_0051cba4(param_1);
      puVar9 = (uint *)(*(code *)**(undefined4 **)*puVar8)
                                 (puVar8,(ulonglong)*(ushort *)(PTR_DAT_0071ab10 + 0xc) + 0xe8,
                                  0x10400303,0,0);
      if (puVar9 == (uint *)0x0) {
        return (uint *)0x0;
      }
      uVar13 = 1;
      FUN_0051be00(puVar9,puVar9 + 0x3a);
      goto LAB_0051d0c4;
    }
  }
  puVar8 = (undefined4 *)(param_1 + 0x208);
  do {
    puVar9 = (uint *)*puVar8;
    instructionSynchronize();
    if (puVar9 == (uint *)0x0) goto LAB_0051d258;
    uVar2 = *puVar9;
    do {
      puVar7 = (uint *)*puVar8;
      if (puVar9 != (uint *)*puVar8) break;
      if (in_RESERVE != '\0') {
        uVar3 = storeWordConditionalIndexed((ulonglong)uVar2,0,ZEXT48(puVar8));
        *puVar8 = uVar3;
        in_cr0 = 2;
      }
      puVar7 = puVar9;
    } while ((in_cr0 & 2) == 0);
  } while (puVar9 != puVar7);
  *puVar9 = 0;
LAB_0051d0c4:
  op_reset(puVar9);
  puVar9[0x27] = param_1;
  if (param_2 != (undefined8 *)0x0) {
    uVar6 = param_2[1];
    uVar14 = param_2[2];
    uVar12 = param_2[3];
    *(undefined8 *)(puVar9 + 2) = *param_2;
    *(undefined8 *)(puVar9 + 4) = uVar6;
    *(undefined8 *)(puVar9 + 6) = uVar14;
    *(undefined8 *)(puVar9 + 8) = uVar12;
    *(undefined8 *)(puVar9 + 10) = param_2[4];
  }
  puVar5 = PTR_DAT_0071ab14;
  puVar7 = (uint *)(PTR_DAT_0071ab14 + 4);
  do {
    uVar2 = *(uint *)(puVar5 + 4);
    instructionSynchronize();
    while (uVar2 == *puVar7) {
      if (in_RESERVE != '\0') {
        uVar4 = storeWordConditionalIndexed((ulonglong)uVar2 + 1,0,ZEXT48(puVar7));
        *puVar7 = uVar4;
        in_cr0 = 2;
      }
      if ((in_cr0 & 2) != 0) {
        puVar9[0xf] = uVar2;
        uVar11 = ((ulonglong)puVar9[7] & 0x7ff) << 0x14 | (ulonglong)(puVar9[7] >> 0xc);
        uVar2 = (uint)(uVar11 << 0xc) | (uint)uVar11 >> 0x14;
        puVar9[7] = uVar2;
        if (uVar13 != 0) {
          puVar9[7] = uVar2 | 0x800;
        }
        puVar7 = (uint *)(param_1 + 0x220);
        do {
          uVar13 = *puVar7;
          instructionSynchronize();
          while (uVar13 == *puVar7) {
            if (in_RESERVE != '\0') {
              uVar2 = storeWordConditionalIndexed((ulonglong)uVar13 + 1,0,ZEXT48(puVar7));
              *puVar7 = uVar2;
              in_cr0 = 2;
            }
            if ((in_cr0 & 2) != 0) {
              uVar11 = (ulonglong)*puVar7;
              instructionSynchronize();
              puVar7 = (uint *)(param_1 + 0x22c);
              uVar13 = *puVar7;
              instructionSynchronize();
              if (uVar11 <= uVar13) {
                return puVar9;
              }
              do {
                while (*puVar7 != uVar13) {
                  uVar13 = *puVar7;
                  instructionSynchronize();
                  if (uVar11 <= uVar13) {
                    return puVar9;
                  }
                }
                if (in_RESERVE != '\0') {
                  uVar2 = storeWordConditionalIndexed(uVar11,0,ZEXT48(puVar7));
                  *puVar7 = uVar2;
                  in_cr0 = 2;
                }
              } while ((in_cr0 & 2) == 0);
              return puVar9;
            }
          }
        } while( true );
      }
    }
  } while( true );
}


// 0x051d300 (0x2c bytes)
void FUN_0051d300(int param_1,int param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_0071ab14;
  if (param_1 != 1) {
    return;
  }
  if (param_2 != 0xffff) {
    return;
  }
  *(undefined4 *)PTR_DAT_0071ab14 = 0;
  *(undefined4 *)(puVar1 + 4) = 0;
  return;
}


// 0x051d32c (0x10 bytes)
void FUN_0051d32c(void)

{
  FUN_0051d300(1,0xffff);
  return;
}


// 0x051d33c (0x24c bytes)
undefined4
FUN_0051d33c(int param_1,int param_2,char *param_3,int *param_4,longlong *param_5,undefined4 param_6
            )

{
  char cVar1;
  uint uVar2;
  code *pcVar3;
  int iVar4;
  ulonglong *puVar5;
  ulonglong *puVar6;
  ulonglong uVar7;
  longlong *plVar8;
  int *piVar9;
  longlong lVar10;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  ulonglong uVar11;
  
  uVar11 = ZEXT48(&stack0x00000000);
  puVar5 = (ulonglong *)(uVar11 - 0x100);
  *puVar5 = uVar11;
  puVar5[0x17] = unaff_r23;
  puVar5[0x22] = in_LR;
  uVar2 = *(uint *)(param_2 + 0x30);
  puVar5[0x18] = unaff_r24;
  puVar5[0x19] = unaff_r25;
  puVar5[0x1a] = unaff_r26;
  puVar5[0x1b] = unaff_r27;
  puVar5[0x1c] = unaff_r28;
  puVar5[0x1e] = unaff_r30;
  puVar5[0x1f] = unaff_r31;
  puVar5[0x1d] = unaff_r29;
  if (((uVar2 & 0x200) == 0) &&
     ((*(longlong *)(param_2 + 0x80) != 0 ||
      ((((iVar4 = *(int *)(param_2 + 0x40), 1 < iVar4 - 10U && (iVar4 != 6)) && (iVar4 != 7)) &&
       (iVar4 != 0x11)))))) {
    uVar2 = *(uint *)(*(int *)(param_1 + 0x160) + 0x8c);
    *(undefined1 (*) [16])(puVar5 + 0x14) = (GPiece<16>)0x0;
    *(undefined4 *)(puVar5 + 0x14) = param_6;
    *(undefined1 (*) [16])(puVar5 + 0x12) = (GPiece<16>)0x0;
    *(undefined1 (*) [16])(puVar5 + 0xe) = (GPiece<16>)0x0;
    *(int *)((int)puVar5 + 0x94) = param_2 + 0x40;
    *(undefined1 (*) [16])(puVar5 + 0x10) = (GPiece<16>)0x0;
    lVar10 = (uVar11 - 0x100) - (((ulonglong)uVar2 & 0x3fffffff) * 4 + 0x1e & 0xfffffffffffffff0);
    puVar6 = (ulonglong *)lVar10;
    *puVar6 = *puVar5;
    uVar7 = lVar10 + 0x7fU & 0xfffffff0;
    *(int *)((int)puVar5 + 0xa4) = (int)uVar7;
    memset(uVar7,0);
    piVar9 = *(int **)(param_1 + 0x160);
    pcVar3 = (code *)**(undefined4 **)(*piVar9 + 8);
    puVar6[5] = ZEXT48(&TOC_BASE);
    (*pcVar3)(piVar9,uVar11 - 0x90);
    if (uVar2 != 0) {
      uVar11 = (ulonglong)uVar2;
      lVar10 = *param_5;
      piVar9 = *(int **)((int)puVar5 + 0xa4);
      plVar8 = *(longlong **)(param_1 + 0x1ec);
      do {
        lVar10 = lVar10 + (longlong)*piVar9 * *plVar8;
        *param_5 = lVar10;
        uVar11 = uVar11 - 1;
        piVar9 = piVar9 + 1;
        plVar8 = plVar8 + 1;
      } while (uVar11 != 0);
    }
    if (((param_3 != (char *)0x0) && (param_4 != (int *)0x0)) &&
       (*(longlong *)(param_2 + 8) < *param_5)) {
      cVar1 = *(char *)(param_2 + 0x10);
      if (*param_3 < cVar1) {
        *param_3 = cVar1;
        *param_4 = 1;
        return 1;
      }
      if (cVar1 != *param_3) {
        return 1;
      }
      *param_4 = *param_4 + 1;
      return 1;
    }
  }
  return 0;
}


// 0x051d588 (0x4ac bytes)
// strings: 0051d628: '}+Kxy)' (raw) | 0071ab20: 'BQvY.'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0051d588(int param_1,uint *param_2)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  ulonglong *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  void *__dest;
  void *pvVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong unaff_r14;
  uint *puVar18;
  ulonglong unaff_r15;
  char cVar19;
  ulonglong unaff_r16;
  ulonglong unaff_r17;
  uint uVar20;
  ulonglong unaff_r18;
  ulonglong unaff_r19;
  ulonglong unaff_r20;
  ulonglong unaff_r21;
  ulonglong unaff_r22;
  ulonglong unaff_r23;
  ulonglong uVar21;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  uint *puVar22;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  uint *puVar23;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  byte in_cr0;
  byte in_cr1;
  byte in_cr2;
  byte in_cr3;
  byte bVar24;
  byte unaff_cr4;
  byte in_cr5;
  byte in_cr6;
  byte in_cr7;
  ulonglong in_LR;
  double dVar25;
  
  uVar12 = ZEXT48(&stack0x00000000);
  puVar5 = (ulonglong *)(uVar12 - 0x150);
  *puVar5 = uVar12;
  puVar5[0x29] = unaff_r31;
  puVar5[0x1e] = unaff_r20;
  puVar5[0x27] = unaff_r29;
  puVar5[0x28] = unaff_r30;
  puVar5[0x18] = unaff_r14;
  puVar5[0x19] = unaff_r15;
  puVar5[0x1a] = unaff_r16;
  puVar5[0x1b] = unaff_r17;
  puVar5[0x1c] = unaff_r18;
  puVar5[0x1d] = unaff_r19;
  puVar5[0x1f] = unaff_r21;
  puVar5[0x20] = unaff_r22;
  puVar5[0x21] = unaff_r23;
  puVar5[0x22] = unaff_r24;
  puVar5[0x23] = unaff_r25;
  puVar5[0x24] = unaff_r26;
  puVar5[0x25] = unaff_r27;
  puVar5[0x26] = unaff_r28;
  *(uint **)(puVar5 + 0x12) = param_2;
  *(uint *)(puVar5 + 0x2b) =
       (uint)(in_cr0 & 0xf) << 0x1c | (uint)(in_cr1 & 0xf) << 0x18 | (uint)(in_cr2 & 0xf) << 0x14 |
       (uint)(in_cr3 & 0xf) << 0x10 | (uint)(unaff_cr4 & 0xf) << 0xc | (uint)(in_cr5 & 0xf) << 8 |
       (uint)(in_cr6 & 0xf) << 4 | (uint)(in_cr7 & 0xf);
  puVar5[0x2c] = in_LR;
  lVar9 = *(longlong *)(param_2 + 2);
  if (lVar9 < 1) {
    do {
      lVar9 = TBLr;
    } while ((int)lVar9 == 0);
    dVar25 = *(double *)PTR_DAT_0071ab1c * _s_BQvY__0071ab20;
    if ((double)DAT_0071ab28 <= dVar25) {
      puVar5[0x14] = (longlong)(dVar25 - (double)DAT_0071ab28);
      lVar9 = lVar9 + (puVar5[0x14] ^ 0x8000000000000000);
    }
    else {
      puVar5[0x14] = (longlong)dVar25;
      lVar9 = lVar9 + puVar5[0x14];
    }
  }
  *(longlong *)(param_2 + 2) = lVar9;
  if (param_2[0x34] - 9 < 3) {
    puVar8 = *(undefined4 **)(param_1 + 0x214);
    puVar7 = (undefined4 *)(param_1 + 0x214);
    while (puVar6 = puVar8, puVar6 != (undefined4 *)0x0) {
      puVar7 = puVar6;
      puVar8 = (undefined4 *)*puVar6;
    }
    *puVar7 = *(undefined4 *)(puVar5 + 0x12);
  }
  else if ((*(uint *)(*(int *)(puVar5 + 0x12) + 0x30) & 0x200) == 0) {
    uVar15 = *puVar5;
    pvVar13 = *(void **)(param_1 + 0x1fc);
    uVar3 = *(uint *)(*(int *)(param_1 + 0x160) + 0x88);
    lVar10 = -((ulonglong)uVar3 + 0x1e & 0xfffffffffffffff0);
    lVar9 = (uVar12 - 0x150) + lVar10;
    *(ulonglong *)lVar9 = uVar15;
    lVar10 = lVar9 + lVar10;
    *(ulonglong *)lVar10 = uVar15;
    uVar11 = lVar10 + 0x70;
    uVar15 = uVar11 & 0xffffffff;
    __dest = (void *)(lVar9 + 0x70U);
    memcpy(__dest,pvVar13,uVar3);
    pvVar13 = (void *)uVar11;
    memcpy(pvVar13,*(void **)(param_1 + 0x1fc),uVar3);
    uVar11 = *(longlong *)(param_1 + 0x200) + *(longlong *)(param_1 + 0x1f0);
    *(undefined1 *)(puVar5 + 0xe) = 0x80;
    *(undefined4 *)((int)puVar5 + 0x74) = 0;
    puVar5[0x10] = uVar11;
    if (uVar11 == 0) {
      do {
        lVar10 = TBLr;
      } while ((int)lVar10 == 0);
      dVar25 = *(double *)PTR_DAT_0071ab1c * (double)DAT_0071ab2c;
      if ((double)DAT_0071ab28 <= dVar25) {
        puVar5[0x14] = (longlong)(dVar25 - (double)DAT_0071ab28);
        uVar11 = puVar5[0x14] ^ 0x8000000000000000;
      }
      else {
        puVar5[0x14] = (longlong)dVar25;
        uVar11 = puVar5[0x14];
      }
      puVar5[0x10] = lVar10 + uVar11;
    }
    uVar20 = param_2[0x10];
    puVar22 = (uint *)(param_1 + 0x210);
    *(undefined4 *)(puVar5 + 0xf) = 0;
    puVar5[0x11] = puVar5[0x10];
    *(undefined1 *)((int)puVar5 + 0x71) = 0x80;
    if (((((ulonglong)uVar20 - 10 & 0xffffffff) < 2) || (uVar20 == 6)) ||
       (uVar11 = (ulonglong)uVar20 ^ 0x11, uVar16 = (ulonglong)((int)uVar11 >> 0x1f),
       uVar11 = (((uVar16 ^ uVar11) - uVar16) + -1 << 0x20) >> 0x3f, uVar20 == 7)) {
      uVar11 = 1;
    }
    uVar4 = *(undefined4 *)(puVar5 + 0x12);
    bVar24 = (uVar11 == 0) << 1;
    uVar11 = 0x7fffffffffffffff;
    cVar19 = '\x7f';
    uVar20 = 0;
    puVar5[0x15] = uVar12 - 0xe0;
    puVar5[0x16] = uVar12 - 0xdc;
    puVar5[0x17] = uVar12 - 0xd0;
    puVar18 = puVar22;
    do {
      puVar23 = (uint *)*puVar22;
      memcpy(pvVar13,__dest,uVar3);
      *(undefined4 *)(puVar5 + 0xf) = *(undefined4 *)((int)puVar5 + 0x74);
      puVar5[0x11] = puVar5[0x10];
      *(undefined1 *)((int)puVar5 + 0x71) = *(undefined1 *)(puVar5 + 0xe);
      bVar1 = (int)(((int)puVar23 >> 0x1f) - ((int)puVar23 >> 0x1f ^ (uint)puVar23)) < 0;
      if (bVar1) {
        FUN_0051d33c(param_1,puVar23,puVar5[0x15] & 0xffffffff,puVar5[0x16] & 0xffffffff,
                     puVar5[0x17] & 0xffffffff,lVar9 + 0x70U & 0xffffffff);
      }
      uVar16 = puVar5[0x11];
      FUN_0051d33c(param_1,uVar4,uVar12 - 0xdf & 0xffffffff,uVar12 - 0xd8 & 0xffffffff,
                   uVar12 - 200 & 0xffffffff,uVar15);
      uVar21 = puVar5[0x11];
      if (bVar1) {
        do {
          FUN_0051d33c(param_1,puVar23,uVar12 - 0xdf & 0xffffffff,uVar12 - 0xd8 & 0xffffffff,
                       uVar12 - 200 & 0xffffffff,uVar15);
          puVar23 = (uint *)*puVar23;
        } while (puVar23 != (uint *)0x0);
      }
      cVar2 = *(char *)((int)puVar5 + 0x71);
      if (cVar2 < cVar19) {
        uVar17 = puVar5[0x11];
        uVar14 = *(uint *)(puVar5 + 0xf);
LAB_0051d948:
        cVar19 = cVar2;
        puVar23 = (uint *)*puVar22;
        uVar11 = uVar17;
        uVar20 = uVar14;
        puVar18 = puVar22;
      }
      else {
        if (cVar19 == cVar2) {
          uVar14 = *(uint *)(puVar5 + 0xf);
          if (uVar14 < uVar20) {
            uVar17 = puVar5[0x11];
            goto LAB_0051d948;
          }
          if (uVar20 == uVar14) {
            uVar17 = puVar5[0x11];
            if (((longlong)uVar17 < (longlong)uVar11) ||
               ((uVar11 == uVar17 &&
                ((!(bool)(bVar24 >> 1 & 1) || ((longlong)uVar16 < (longlong)uVar21))))))
            goto LAB_0051d948;
          }
        }
        puVar23 = (uint *)*puVar22;
      }
      puVar22 = puVar23;
    } while (puVar22 != (uint *)0x0);
    uVar3 = *(uint *)(puVar5 + 0x12);
    *param_2 = *puVar18;
    *puVar18 = uVar3;
  }
  else {
    uVar3 = *(uint *)(puVar5 + 0x12);
    *param_2 = *(uint *)(param_1 + 0x210);
    *(uint *)(param_1 + 0x210) = uVar3;
  }
  return;
}


// SDK libfios.a(fios_scheduler.ppu.o): cell::fios::scheduler::suspendPrefetch(char const*)  [exact match]
// 0x051da34 (0x78 bytes)
void FUN_0051da34(int param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  char cVar4;
  uint *puVar3;
  char in_RESERVE;
  byte in_cr0;
  undefined4 uStack00000038;
  
  uStack00000038 = param_2;
  cVar4 = FUN_00604788(param_1);
  if (cVar4 == '\0') {
    return;
  }
  puVar3 = (uint *)(param_1 + 0x1c8);
  do {
    uVar1 = *puVar3;
    instructionSynchronize();
    while (uVar1 == *puVar3) {
      if (in_RESERVE != '\0') {
        uVar2 = storeWordConditionalIndexed((ulonglong)uVar1 + 1,0,ZEXT48(puVar3));
        *puVar3 = uVar2;
        in_cr0 = 2;
      }
      if ((in_cr0 & 2) != 0) {
        return;
      }
    }
  } while( true );
}


// 0x051daac (0x218 bytes)
undefined4 FUN_0051daac(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  GPiece<16> auVar3;
  undefined4 uVar4;
  char cVar5;
  GPiece<64> auStack_1e0;
  GPiece<12> local_1a0;
  undefined4 local_194;
  GPiece<8> local_190;
  undefined4 local_188;
  undefined4 uStack_184;
  GPiece<16> local_180;
  GPiece<16> local_170;
  GPiece<16> local_160;
  undefined1 *local_150;
  undefined2 local_14c;
  GPiece<256> auStack_148;
  undefined8 local_48;
  undefined8 local_40;
  
  if ((*(int *)(param_2 + 0x40) == 10) && (**(char **)(param_2 + 0x34) != '\0')) {
    FUN_005193cc(auStack_148,*(char **)(param_2 + 0x34),0x100);
    local_40 = *(undefined8 *)(param_2 + 0xa8);
    local_48 = *(undefined8 *)(param_2 + 0xb8);
    local_160 = (GPiece<16>)0x0;
    _local_1a0 = ZEXT816(0);
    local_150 = (undefined1 *)0x0;
    local_14c = 0;
    _local_190 = (GPiece<16>)0x0;
    local_180 = (GPiece<16>)0x0;
    local_170 = (GPiece<16>)0x0;
    uVar4 = _ZN4cell4fios8pathhashEPKc(0);
    auVar3 = _local_190;
    local_194 = uVar4;
    local_190.piece<4,4>() = *(undefined4 *)(PTR_DAT_0071ab30 + 4);
    local_190.piece<0,4>() = *(undefined4 *)PTR_DAT_0071ab30;
    uStack_184 = auVar3.piece<12,4>();
    local_188 = *(undefined4 *)(PTR_DAT_0071ab30 + 8);
    local_180.piece<8,4>() = *(undefined4 *)(PTR_DAT_0071ab30 + 0x18);
    local_180.piece<0,8>() = *(undefined8 *)(PTR_DAT_0071ab30 + 0x10);
    local_1a0.piece<0,4>() = 10;
    piVar1 = *(int **)(param_1 + 0x160);
    while (piVar2 = piVar1, piVar2 != (int *)0x0) {
      if ((piVar2[2] == 0x63616368) && (cVar5 = FUN_00532660(piVar2,auStack_148), cVar5 != '\0')) {
        return 1;
      }
      auVar3 = _local_1a0;
      piVar1 = (int *)piVar2[0x10];
      if (piVar1 != (int *)0x0) {
        local_1a0.piece<0,4>() = 0x10;
        local_194 = auVar3.piece<12,4>();
        local_1a0.piece<8,4>() = auStack_148;
        local_150 = auStack_148;
        uVar4 = _ZN4cell4fios8pathhashEPKc(auStack_148);
        local_194 = uVar4;
        local_160.piece<0,8>() = local_40;
        local_190.piece<4,4>() = piVar1;
        local_170.piece<0,8>() = local_48;
        (*(code *)**(undefined4 **)(*piVar2 + 0x14))(piVar2,auStack_1e0);
        if (local_1a0.piece<4,4>() != 0) {
          return 0;
        }
        piVar1 = (int *)piVar2[0x10];
      }
    }
  }
  return 0;
}


// 0x051dcc4 (0x8c0 bytes)
// strings: 00667a10: 'scheduler.m_objectLock' | 00667a28: 'scheduler.m_opLock' | 00667a40: 'scheduler.m_opCallbackLock' | 00667a60: 'scheduler.m_completedLock' | 00667a80: 'fios scheduler' | 00667a90: 'scheduler.m_ioLock' | 00667aa8: 'scheduler.m_ioCond' | 00667ac8: 'scheduler.m_idleCond' | 00667ae0: 'scheduler.m_fhLock' | 00667af8: 'scheduler.m_workerLock' | 0051e250: '}@Sx9J' (raw) | 00667b10: 'fios worker cond' | 00667b28: 'fios mediathread'

void FUN_0051dcc4(undefined4 *param_1,undefined4 param_2,undefined4 *param_3)

{
  ushort uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  longlong lVar9;
  undefined4 *puVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined8 uVar14;
  int iVar15;
  int *piVar16;
  int *piVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  uint uVar20;
  uint uVar21;
  char in_RESERVE;
  byte in_cr0;
  uint local_84;
  
  FUN_005106cc(param_1 + 1);
  puVar5 = PTR_s_scheduler_m_objectLock_0071ab38;
  *param_1 = PTR_PTR_0071ab34;
  FUN_0052d370(param_1 + 4,puVar5);
  FUN_0052d370(param_1 + 0xe,PTR_s_scheduler_m_opLock_0071ab3c);
  FUN_0052e1dc(param_1 + 0x18,PTR_s_scheduler_m_opCallbackLock_0071ab40);
  puVar10 = param_1 + 0x38;
  FUN_0052d370(param_1 + 0x1e,PTR_s_scheduler_m_completedLock_0071ab44);
  FUN_0052e828(param_1 + 0x28,PTR_s_fios_scheduler_0071ab48,0,PTR_PTR_0071ab4c,param_1,0);
  FUN_0052d370(puVar10,PTR_s_scheduler_m_ioLock_0071ab50);
  puVar5 = PTR_DAT_0071ab58;
  FUN_0052d19c(param_1 + 0x42,PTR_s_scheduler_m_ioCond_0071ab54,PTR_DAT_0071ab58,puVar10);
  FUN_0052d19c(param_1 + 0x48,PTR_s_scheduler_m_idleCond_0071ab5c,puVar5,puVar10);
  FUN_0052d370(param_1 + 0x4e,PTR_s_scheduler_m_fhLock_0071ab60);
  uVar2 = *param_3;
  param_1[0x59] = param_3[1];
  puVar6 = PTR_s_scheduler_m_workerLock_0071ab64;
  piVar17 = param_1 + 0x8e;
  param_1[0x5a] = param_3[2];
  param_1[0x5d] = uVar2;
  param_1[0x60] = 0;
  param_1[0x58] = param_2;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x5e] = 1;
  *(undefined1 *)(param_1 + 0x5f) = 0;
  param_1[0x61] = 1;
  FUN_0052d370(param_1 + 0x62,puVar6);
  param_1[0x6f] = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  piVar16 = param_1 + 0x82;
  *(undefined8 *)(param_1 + 0x74) = *(undefined8 *)(param_3 + 4);
  uVar14 = *(undefined8 *)(param_3 + 6);
  param_1[0x72] = 0;
  param_1[0x6d] = 0xffffffff;
  param_1[0x78] = 0;
  *(undefined8 *)(param_1 + 0x76) = uVar14;
  param_1[0x79] = 0;
  param_1[0x8d] = 0;
  param_1[0x6e] = 0;
  param_1[0x7a] = 0;
  *piVar17 = 0;
  *piVar16 = 0;
  *(undefined1 *)(param_1 + 0x6c) = 1;
  param_1[0x83] = 0;
  param_1[0x7b] = 0;
  param_1[0x88] = 0;
  *(undefined8 *)(param_1 + 0x7c) = 0;
  param_1[0x89] = 0;
  param_1[0x7e] = 0;
  param_1[0x8a] = 0;
  param_1[0x7f] = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  param_1[0x84] = 0;
  param_1[0x85] = 0;
  param_1[0x86] = 0;
  param_1[0x87] = 0;
  param_1[0x8b] = 0;
  param_1[0x8c] = 0;
  param_1[0x8f] = 0;
  param_1[0x90] = 0;
  param_1[0x91] = 0;
  param_1[0x92] = 0;
  FUN_00604788(param_1);
  FUN_00604710(param_2);
  uVar20 = param_1[0x59];
  param_1[2] = 0x73636864;
  if (uVar20 != 0) {
    uVar1 = *(ushort *)(PTR_DAT_0071ab10 + 0xc);
    puVar10 = (undefined4 *)FUN_0051cba4(param_1);
    uVar18 = (longlong)(int)uVar20 * (longlong)(int)(uint)uVar1 + (ulonglong)uVar20 * 0xe8 &
             0xffffffff;
    iVar11 = (*(code *)**(undefined4 **)*puVar10)(puVar10,uVar18,0x10130103,0,0);
    param_1[0x5b] = iVar11;
    if (iVar11 != 0) {
      memset(iVar11,0,uVar18);
    }
    if (param_1[0x5b] == 0) {
      param_1[0x59] = 0;
    }
    else if (param_1[0x59] != 0) {
      uVar18 = (ulonglong)(uint)param_1[0x5b] + (ulonglong)uVar20 * 0xe8;
      uVar21 = 0;
      uVar19 = (uVar18 + (longlong)(int)uVar20 * (longlong)(int)(uint)uVar1) - (ulonglong)uVar1;
      do {
        uVar18 = uVar18 - 0xe8;
        FUN_0051be00(uVar18 & 0xffffffff,uVar19 & 0xffffffff);
        if ((int *)uVar18 != (int *)0x0) {
          do {
            iVar11 = *piVar16;
            instructionSynchronize();
            *(int *)uVar18 = iVar11;
            do {
              iVar13 = *piVar16;
              if (iVar11 != *piVar16) break;
              if (in_RESERVE != '\0') {
                iVar13 = storeWordConditionalIndexed(uVar18,0,ZEXT48(piVar16));
                *piVar16 = iVar13;
                in_cr0 = 2;
              }
              iVar13 = iVar11;
            } while ((in_cr0 & 2) == 0);
          } while (iVar11 != iVar13);
        }
        uVar21 = uVar21 + 1;
        uVar19 = uVar19 - uVar1;
      } while (uVar21 < (uint)param_1[0x59]);
    }
  }
  iVar11 = param_1[0x5a];
  if (iVar11 != 0) {
    uVar1 = *(ushort *)(PTR_DAT_0071ab10 + 0xc);
    puVar10 = (undefined4 *)FUN_0051cba4(param_1);
    iVar13 = iVar11 * (uint)uVar1 + iVar11 * 0x58;
    iVar12 = (*(code *)**(undefined4 **)*puVar10)(puVar10,iVar13,0x10140103,0,0);
    param_1[0x5c] = iVar12;
    if (iVar12 != 0) {
      memset(iVar12,0,iVar13);
    }
    if (param_1[0x5c] == 0) {
      param_1[0x5a] = 0;
    }
    else if (param_1[0x5a] != 0) {
      iVar13 = param_1[0x5c] + iVar11 * 0x58;
      uVar20 = 0;
      iVar11 = (iVar13 + iVar11 * (uint)uVar1) - (uint)uVar1;
      do {
        iVar12 = iVar13 + -0x58;
        uVar20 = uVar20 + 1;
        FUN_00539124(iVar12,iVar11);
        if (iVar12 != 0) {
          *(int *)(iVar13 + -0x4c) = *piVar17;
          *piVar17 = iVar12;
        }
        iVar13 = iVar12;
        iVar11 = iVar11 - (uint)uVar1;
      } while (uVar20 < (uint)param_1[0x5a]);
    }
  }
  FUN_0051b070(param_1[0x58]);
  iVar11 = *(int *)(param_1[0x58] + 0x90);
  param_1[0x5e] = iVar11;
  iVar13 = *(int *)(param_1[0x58] + 0x8c);
  puVar10 = (undefined4 *)FUN_0051cba4(param_1);
  iVar11 = iVar11 * (iVar13 * 4 + 0x98);
  iVar13 = (*(code *)**(undefined4 **)*puVar10)(puVar10,iVar11,local_84 | 0x10160100,0,0);
  param_1[0x8d] = iVar13;
  if (iVar13 != 0) {
    memset(iVar13,0,iVar11);
  }
  iVar11 = param_1[0x8d];
  if (iVar11 == 0) {
    return;
  }
  uVar20 = param_1[0x5e];
  iVar13 = iVar11 + uVar20 * 0x40;
  iVar12 = iVar13 + uVar20 * 0x20 + (uVar20 & 0x1fffffff) * -8;
  if (uVar20 != 0) {
    iVar3 = param_1[0x58];
    uVar18 = (ulonglong)uVar20;
    iVar15 = 0;
    iVar4 = *(int *)(iVar3 + 0x8c);
    if (uVar20 == 0) {
      uVar18 = 1;
    }
    do {
      *(uint *)(iVar15 * 0x40 + iVar11 + 0x34) = uVar20 * 0x40 + iVar12 + iVar4 * 4 * iVar15;
      puVar6 = PTR_s_fios_worker_cond_0071ab68;
      uVar18 = uVar18 - 1;
      iVar15 = iVar15 + 1;
    } while (uVar18 != 0);
    if (uVar20 == 0) goto LAB_0051e348;
    uVar20 = 0;
    while( true ) {
      iVar4 = uVar20 * 0x40;
      uVar20 = uVar20 + 1;
      FUN_0052d19c(iVar13,puVar6,puVar5,param_1 + 0x62);
      uVar21 = param_1[0x5e];
      *(int *)(iVar4 + iVar11 + 8) = iVar13;
      puVar8 = PTR_PTR_0071ab70;
      puVar7 = PTR_s_fios_mediathread_0071ab6c;
      iVar13 = iVar13 + 0x18;
      if (uVar21 <= uVar20) break;
      iVar11 = param_1[0x8d];
    }
    if (uVar21 != 0) {
      uVar18 = 0;
      do {
        iVar11 = param_1[0x8d];
        iVar4 = (int)((uVar18 & 0xffffffff) << 6);
        FUN_0052e828(iVar12,puVar7,1,puVar8,param_1,0);
        iVar13 = param_1[0x8d];
        uVar18 = uVar18 + 1;
        *(int *)(iVar4 + iVar11 + 4) = iVar12;
        iVar12 = iVar12 + 0x40;
        FUN_0052d814(*(undefined4 *)(iVar4 + iVar13 + 4));
      } while ((uVar18 & 0xffffffff) < (ulonglong)(uint)param_1[0x5e]);
    }
  }
  iVar3 = param_1[0x58];
LAB_0051e348:
  puVar10 = (undefined4 *)FUN_0051cba4(param_1);
  iVar11 = (*(code *)**(undefined4 **)*puVar10)
                     (puVar10,((ulonglong)*(uint *)(iVar3 + 0x8c) & 0x1fffffff) << 3,0x10170103,0,0)
  ;
  param_1[0x7b] = iVar11;
  if (iVar11 != 0) {
    memset(iVar11,0,((ulonglong)*(uint *)(param_1[0x58] + 0x8c) & 0x1fffffff) << 3);
  }
  if (param_1[0x7b] != 0) {
    FUN_0051a124(param_1[0x58],param_1[0x7b]);
    iVar11 = -0x90;
    if (*(uint *)(param_1[0x58] + 0x88) < 2) {
      iVar11 = -0x8c;
    }
    uVar20 = *(uint *)(&stack0x00000000 + iVar11);
    puVar10 = (undefined4 *)FUN_0051cba4(param_1);
    lVar9 = ((ulonglong)uVar20 & 0x7fffffff) << 1;
    iVar11 = (*(code *)**(undefined4 **)*puVar10)(puVar10,lVar9,0x10180103,0,0);
    param_1[0x7e] = iVar11;
    if (iVar11 != 0) {
      memset(iVar11,0,lVar9);
    }
    if (param_1[0x7e] != 0) {
      param_1[0x7f] = param_1[0x7e] + uVar20;
      FUN_0052d814(param_1 + 0x28);
      if (*(char *)(param_1 + 0x33) != '\0') {
        if ((uint)param_1[0x5e] < 2) {
          iVar11 = param_1[0x58];
        }
        else {
          iVar11 = param_1[0x58];
          if (iVar11 != 0) {
            iVar13 = *(int *)(iVar11 + 0x40);
            iVar12 = *(int *)(iVar11 + 8);
            while (iVar12 != 0x63616368) {
              if (iVar13 == 0) goto LAB_0051e54c;
              piVar16 = (int *)(iVar13 + 8);
              iVar13 = *(int *)(iVar13 + 0x40);
              iVar12 = *piVar16;
            }
            param_1[0x6d] = 1;
          }
        }
LAB_0051e54c:
        FUN_0051b318(iVar11,param_1);
      }
    }
  }
  return;
}


// SDK libfios.a(fios_scheduler.ppu.o): cell::fios::scheduler::deallocateOp(cell::fios::op*)  [exact match]
// 0x051e584 (0x148 bytes)
void FUN_0051e584(int param_1,ulonglong param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  int *piVar6;
  uint *puVar7;
  int *piVar8;
  char in_RESERVE;
  byte in_cr0;
  
  uVar4 = param_2 & 0xffffffff;
  _ZN4cell4fios2op8callbackEhPv(uVar4,2,0);
  puVar7 = (uint *)(param_1 + 0x220);
  do {
    uVar1 = *puVar7;
    instructionSynchronize();
    while (uVar1 == *puVar7) {
      if (in_RESERVE != '\0') {
        uVar3 = storeWordConditionalIndexed((ulonglong)uVar1 - 1,0,ZEXT48(puVar7));
        *puVar7 = uVar3;
        in_cr0 = 2;
      }
      if ((in_cr0 & 2) != 0) {
        piVar6 = (int *)param_2;
        if ((piVar6[7] & 0x800U) != 0) {
          piVar6[0x37] = 0x66696f53;
          piVar6 = (int *)FUN_0051cba4(param_1);
          (*(code *)**(undefined4 **)(*piVar6 + 4))(piVar6,uVar4,0x10400303,0,0);
          return;
        }
        _ZN4cell4fios2op5resetEv(uVar4);
        piVar8 = (int *)(param_1 + 0x208);
        piVar6[0x27] = param_1;
        goto LAB_0051e620;
      }
    }
  } while( true );
LAB_0051e620:
  iVar2 = *piVar8;
  instructionSynchronize();
  *piVar6 = iVar2;
  do {
    iVar5 = *piVar8;
    if (iVar2 != *piVar8) break;
    if (in_RESERVE != '\0') {
      iVar5 = storeWordConditionalIndexed(param_2,0,ZEXT48(piVar8));
      *piVar8 = iVar5;
      in_cr0 = 2;
    }
    iVar5 = iVar2;
  } while ((in_cr0 & 2) == 0);
  if (iVar2 == iVar5) {
    return;
  }
  goto LAB_0051e620;
}


// 0x051e6cc (0x8c0 bytes)
// strings: 00667a10: 'scheduler.m_objectLock' | 00667a28: 'scheduler.m_opLock' | 00667a40: 'scheduler.m_opCallbackLock' | 00667a60: 'scheduler.m_completedLock' | 00667a80: 'fios scheduler' | 00667a90: 'scheduler.m_ioLock' | 00667aa8: 'scheduler.m_ioCond' | 00667ac8: 'scheduler.m_idleCond' | 00667ae0: 'scheduler.m_fhLock' | 00667af8: 'scheduler.m_workerLock' | 0051ec58: '}@Sx9J' (raw) | 00667b10: 'fios worker cond' | 00667b28: 'fios mediathread'

void FUN_0051e6cc(undefined4 *param_1,undefined4 param_2,undefined4 *param_3)

{
  ushort uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  longlong lVar9;
  undefined4 *puVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined8 uVar14;
  int iVar15;
  int *piVar16;
  int *piVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  uint uVar20;
  uint uVar21;
  char in_RESERVE;
  byte in_cr0;
  uint local_84;
  
  FUN_005106cc(param_1 + 1);
  puVar5 = PTR_s_scheduler_m_objectLock_0071ab38;
  *param_1 = PTR_PTR_0071ab34;
  FUN_0052d370(param_1 + 4,puVar5);
  FUN_0052d370(param_1 + 0xe,PTR_s_scheduler_m_opLock_0071ab3c);
  FUN_0052e1dc(param_1 + 0x18,PTR_s_scheduler_m_opCallbackLock_0071ab40);
  puVar10 = param_1 + 0x38;
  FUN_0052d370(param_1 + 0x1e,PTR_s_scheduler_m_completedLock_0071ab44);
  FUN_0052e828(param_1 + 0x28,PTR_s_fios_scheduler_0071ab48,0,PTR_PTR_0071ab4c,param_1,0);
  FUN_0052d370(puVar10,PTR_s_scheduler_m_ioLock_0071ab50);
  puVar5 = PTR_DAT_0071ab58;
  FUN_0052d19c(param_1 + 0x42,PTR_s_scheduler_m_ioCond_0071ab54,PTR_DAT_0071ab58,puVar10);
  FUN_0052d19c(param_1 + 0x48,PTR_s_scheduler_m_idleCond_0071ab5c,puVar5,puVar10);
  FUN_0052d370(param_1 + 0x4e,PTR_s_scheduler_m_fhLock_0071ab60);
  uVar2 = *param_3;
  param_1[0x59] = param_3[1];
  puVar6 = PTR_s_scheduler_m_workerLock_0071ab64;
  piVar17 = param_1 + 0x8e;
  param_1[0x5a] = param_3[2];
  param_1[0x5d] = uVar2;
  param_1[0x60] = 0;
  param_1[0x58] = param_2;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x5e] = 1;
  *(undefined1 *)(param_1 + 0x5f) = 0;
  param_1[0x61] = 1;
  FUN_0052d370(param_1 + 0x62,puVar6);
  param_1[0x6f] = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  piVar16 = param_1 + 0x82;
  *(undefined8 *)(param_1 + 0x74) = *(undefined8 *)(param_3 + 4);
  uVar14 = *(undefined8 *)(param_3 + 6);
  param_1[0x72] = 0;
  param_1[0x6d] = 0xffffffff;
  param_1[0x78] = 0;
  *(undefined8 *)(param_1 + 0x76) = uVar14;
  param_1[0x79] = 0;
  param_1[0x8d] = 0;
  param_1[0x6e] = 0;
  param_1[0x7a] = 0;
  *piVar17 = 0;
  *piVar16 = 0;
  *(undefined1 *)(param_1 + 0x6c) = 1;
  param_1[0x83] = 0;
  param_1[0x7b] = 0;
  param_1[0x88] = 0;
  *(undefined8 *)(param_1 + 0x7c) = 0;
  param_1[0x89] = 0;
  param_1[0x7e] = 0;
  param_1[0x8a] = 0;
  param_1[0x7f] = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  param_1[0x84] = 0;
  param_1[0x85] = 0;
  param_1[0x86] = 0;
  param_1[0x87] = 0;
  param_1[0x8b] = 0;
  param_1[0x8c] = 0;
  param_1[0x8f] = 0;
  param_1[0x90] = 0;
  param_1[0x91] = 0;
  param_1[0x92] = 0;
  FUN_00604788(param_1);
  FUN_00604710(param_2);
  uVar20 = param_1[0x59];
  param_1[2] = 0x73636864;
  if (uVar20 != 0) {
    uVar1 = *(ushort *)(PTR_DAT_0071ab10 + 0xc);
    puVar10 = (undefined4 *)FUN_0051cba4(param_1);
    uVar18 = (longlong)(int)uVar20 * (longlong)(int)(uint)uVar1 + (ulonglong)uVar20 * 0xe8 &
             0xffffffff;
    iVar11 = (*(code *)**(undefined4 **)*puVar10)(puVar10,uVar18,0x10130103,0,0);
    param_1[0x5b] = iVar11;
    if (iVar11 != 0) {
      memset(iVar11,0,uVar18);
    }
    if (param_1[0x5b] == 0) {
      param_1[0x59] = 0;
    }
    else if (param_1[0x59] != 0) {
      uVar18 = (ulonglong)(uint)param_1[0x5b] + (ulonglong)uVar20 * 0xe8;
      uVar21 = 0;
      uVar19 = (uVar18 + (longlong)(int)uVar20 * (longlong)(int)(uint)uVar1) - (ulonglong)uVar1;
      do {
        uVar18 = uVar18 - 0xe8;
        FUN_0051be00(uVar18 & 0xffffffff,uVar19 & 0xffffffff);
        if ((int *)uVar18 != (int *)0x0) {
          do {
            iVar11 = *piVar16;
            instructionSynchronize();
            *(int *)uVar18 = iVar11;
            do {
              iVar13 = *piVar16;
              if (iVar11 != *piVar16) break;
              if (in_RESERVE != '\0') {
                iVar13 = storeWordConditionalIndexed(uVar18,0,ZEXT48(piVar16));
                *piVar16 = iVar13;
                in_cr0 = 2;
              }
              iVar13 = iVar11;
            } while ((in_cr0 & 2) == 0);
          } while (iVar11 != iVar13);
        }
        uVar21 = uVar21 + 1;
        uVar19 = uVar19 - uVar1;
      } while (uVar21 < (uint)param_1[0x59]);
    }
  }
  iVar11 = param_1[0x5a];
  if (iVar11 != 0) {
    uVar1 = *(ushort *)(PTR_DAT_0071ab10 + 0xc);
    puVar10 = (undefined4 *)FUN_0051cba4(param_1);
    iVar13 = iVar11 * (uint)uVar1 + iVar11 * 0x58;
    iVar12 = (*(code *)**(undefined4 **)*puVar10)(puVar10,iVar13,0x10140103,0,0);
    param_1[0x5c] = iVar12;
    if (iVar12 != 0) {
      memset(iVar12,0,iVar13);
    }
    if (param_1[0x5c] == 0) {
      param_1[0x5a] = 0;
    }
    else if (param_1[0x5a] != 0) {
      iVar13 = param_1[0x5c] + iVar11 * 0x58;
      uVar20 = 0;
      iVar11 = (iVar13 + iVar11 * (uint)uVar1) - (uint)uVar1;
      do {
        iVar12 = iVar13 + -0x58;
        uVar20 = uVar20 + 1;
        FUN_00539124(iVar12,iVar11);
        if (iVar12 != 0) {
          *(int *)(iVar13 + -0x4c) = *piVar17;
          *piVar17 = iVar12;
        }
        iVar13 = iVar12;
        iVar11 = iVar11 - (uint)uVar1;
      } while (uVar20 < (uint)param_1[0x5a]);
    }
  }
  FUN_0051b070(param_1[0x58]);
  iVar11 = *(int *)(param_1[0x58] + 0x90);
  param_1[0x5e] = iVar11;
  iVar13 = *(int *)(param_1[0x58] + 0x8c);
  puVar10 = (undefined4 *)FUN_0051cba4(param_1);
  iVar11 = iVar11 * (iVar13 * 4 + 0x98);
  iVar13 = (*(code *)**(undefined4 **)*puVar10)(puVar10,iVar11,local_84 | 0x10160100,0,0);
  param_1[0x8d] = iVar13;
  if (iVar13 != 0) {
    memset(iVar13,0,iVar11);
  }
  iVar11 = param_1[0x8d];
  if (iVar11 == 0) {
    return;
  }
  uVar20 = param_1[0x5e];
  iVar13 = iVar11 + uVar20 * 0x40;
  iVar12 = iVar13 + uVar20 * 0x20 + (uVar20 & 0x1fffffff) * -8;
  if (uVar20 != 0) {
    iVar3 = param_1[0x58];
    uVar18 = (ulonglong)uVar20;
    iVar15 = 0;
    iVar4 = *(int *)(iVar3 + 0x8c);
    if (uVar20 == 0) {
      uVar18 = 1;
    }
    do {
      *(uint *)(iVar15 * 0x40 + iVar11 + 0x34) = uVar20 * 0x40 + iVar12 + iVar4 * 4 * iVar15;
      puVar6 = PTR_s_fios_worker_cond_0071ab68;
      uVar18 = uVar18 - 1;
      iVar15 = iVar15 + 1;
    } while (uVar18 != 0);
    if (uVar20 == 0) goto LAB_0051ed50;
    uVar20 = 0;
    while( true ) {
      iVar4 = uVar20 * 0x40;
      uVar20 = uVar20 + 1;
      FUN_0052d19c(iVar13,puVar6,puVar5,param_1 + 0x62);
      uVar21 = param_1[0x5e];
      *(int *)(iVar4 + iVar11 + 8) = iVar13;
      puVar8 = PTR_PTR_0071ab70;
      puVar7 = PTR_s_fios_mediathread_0071ab6c;
      iVar13 = iVar13 + 0x18;
      if (uVar21 <= uVar20) break;
      iVar11 = param_1[0x8d];
    }
    if (uVar21 != 0) {
      uVar18 = 0;
      do {
        iVar11 = param_1[0x8d];
        iVar4 = (int)((uVar18 & 0xffffffff) << 6);
        FUN_0052e828(iVar12,puVar7,1,puVar8,param_1,0);
        iVar13 = param_1[0x8d];
        uVar18 = uVar18 + 1;
        *(int *)(iVar4 + iVar11 + 4) = iVar12;
        iVar12 = iVar12 + 0x40;
        FUN_0052d814(*(undefined4 *)(iVar4 + iVar13 + 4));
      } while ((uVar18 & 0xffffffff) < (ulonglong)(uint)param_1[0x5e]);
    }
  }
  iVar3 = param_1[0x58];
LAB_0051ed50:
  puVar10 = (undefined4 *)FUN_0051cba4(param_1);
  iVar11 = (*(code *)**(undefined4 **)*puVar10)
                     (puVar10,((ulonglong)*(uint *)(iVar3 + 0x8c) & 0x1fffffff) << 3,0x10170103,0,0)
  ;
  param_1[0x7b] = iVar11;
  if (iVar11 != 0) {
    memset(iVar11,0,((ulonglong)*(uint *)(param_1[0x58] + 0x8c) & 0x1fffffff) << 3);
  }
  if (param_1[0x7b] != 0) {
    FUN_0051a124(param_1[0x58],param_1[0x7b]);
    iVar11 = -0x90;
    if (*(uint *)(param_1[0x58] + 0x88) < 2) {
      iVar11 = -0x8c;
    }
    uVar20 = *(uint *)(&stack0x00000000 + iVar11);
    puVar10 = (undefined4 *)FUN_0051cba4(param_1);
    lVar9 = ((ulonglong)uVar20 & 0x7fffffff) << 1;
    iVar11 = (*(code *)**(undefined4 **)*puVar10)(puVar10,lVar9,0x10180103,0,0);
    param_1[0x7e] = iVar11;
    if (iVar11 != 0) {
      memset(iVar11,0,lVar9);
    }
    if (param_1[0x7e] != 0) {
      param_1[0x7f] = param_1[0x7e] + uVar20;
      FUN_0052d814(param_1 + 0x28);
      if (*(char *)(param_1 + 0x33) != '\0') {
        if ((uint)param_1[0x5e] < 2) {
          iVar11 = param_1[0x58];
        }
        else {
          iVar11 = param_1[0x58];
          if (iVar11 != 0) {
            iVar13 = *(int *)(iVar11 + 0x40);
            iVar12 = *(int *)(iVar11 + 8);
            while (iVar12 != 0x63616368) {
              if (iVar13 == 0) goto LAB_0051ef54;
              piVar16 = (int *)(iVar13 + 8);
              iVar13 = *(int *)(iVar13 + 0x40);
              iVar12 = *piVar16;
            }
            param_1[0x6d] = 1;
          }
        }
LAB_0051ef54:
        FUN_0051b318(iVar11,param_1);
      }
    }
  }
  return;
}


// SDK libfios.a(fios_scheduler.ppu.o): cell::fios::scheduler::createSchedulerForMedia(cell::fios::media*, cell::fios::scheduler_attr const*)  [exact match]
// 0x051ef8c (0x220 bytes)
// strings: 00667b40: 'Must call FIOSInit before createSchedulerForMedia!\n'

undefined4 * FUN_0051ef8c(undefined4 param_1,undefined8 *param_2)

{
  char cVar3;
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar4;
  int *local_40 [8];
  
  cVar3 = FUN_00518fcc();
  if (cVar3 == '\0') {
    _ZN4cell4fios8platform10FIOSprintfEPKcz(PTR_s_Must_call_FIOSInit_before_fios__0071ab74);
    return (undefined4 *)0x0;
  }
  cVar3 = FUN_00604710(param_1);
  if ((cVar3 != '\0') && (iVar1 = FUN_0051a480(param_1), iVar1 == 0)) {
    FUN_0051b070(param_1);
    if ((param_2 == (undefined8 *)0x0) ||
       (local_40[0] = (int *)((ulonglong)*param_2 >> 0x20), local_40[0] == (int *)0x0)) {
      local_40[0] = *(int **)(PTR_DAT_0071ab10 + 8);
    }
    puVar2 = (undefined4 *)
             (*(code *)**(undefined4 **)*local_40[0])(local_40[0],0x250,0x10100103,0,0);
    puVar4 = (undefined4 *)0x0;
    if (puVar2 != (undefined4 *)0x0) {
      FUN_0051e6cc(puVar2,param_1,local_40);
      puVar4 = puVar2;
    }
    puVar2 = (undefined4 *)FUN_0051a480(param_1);
    if (puVar4 != puVar2) {
      if (puVar4 != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)*puVar4)(puVar4);
        (*(code *)**(undefined4 **)(*local_40[0] + 4))(local_40[0],puVar4,0x10100103,0,0);
      }
      puVar4 = (undefined4 *)0x0;
      FUN_0051a480(param_1);
    }
    return puVar4;
  }
  return (undefined4 *)0x0;
}


// SDK libfios.a(fios_scheduler.ppu.o): cell::fios::scheduler::createSchedulerForMedia(cell::fios::media*, cell::fios::allocator*, unsigned int, unsigned int, unsigned int, unsigned int)  [exact match]
// 0x051f1ac (0x48 bytes)
undefined4
FUN_0051f1ac(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
            undefined8 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  undefined4 uStack00000040;
  undefined4 uStack00000058;
  GPiece<32> local_20;
  
  uStack00000040 = param_3;
  uStack00000058 = param_6;
  uVar1 = FUN_0051ef8c(param_1,local_20);
  return uVar1;
}


// 0x051f1f4 (0x1ec bytes)
void FUN_0051f1f4(undefined4 *param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined *puVar3;
  undefined4 *puVar4;
  char cVar6;
  int *piVar5;
  ulonglong uVar7;
  char in_RESERVE;
  byte in_cr0;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  
  cVar6 = FUN_00604788(param_1);
  puVar3 = PTR_DAT_0071ab14;
  if (cVar6 != '\0') {
    uVar7 = ZEXT48(PTR_DAT_0071ab14);
    do {
      if (param_1 != *(undefined4 **)puVar3) break;
      if (in_RESERVE != '\0') {
        uVar1 = storeWordConditionalIndexed(0,0,uVar7);
        *(undefined4 *)puVar3 = uVar1;
        in_cr0 = 2;
      }
    } while ((in_cr0 & 2) == 0);
    puVar4 = param_1 + 0x38;
    lwmutex_lock_checked(puVar4);
    sync(1);
    param_1[0x61] = 0;
    FUN_0052dcf0(param_1 + 0x42);
    dVar9 = (double)DAT_0071ab78;
    dVar10 = (double)DAT_0071ab28;
    dVar11 = *(double *)PTR_DAT_0071ab1c;
    while( true ) {
      cVar6 = FUN_0051cbc8(param_1);
      if (cVar6 != '\0') break;
      do {
        lVar2 = TBLr;
      } while ((int)lVar2 == 0);
      dVar8 = dVar11 * dVar9;
      if (dVar8 < dVar10) {
        uVar7 = (ulonglong)dVar8;
      }
      else {
        uVar7 = (longlong)(dVar8 - dVar10) ^ 0x8000000000000000;
      }
      FUN_0052e49c(param_1 + 0x48,puVar4,lVar2 + uVar7);
    }
    lwmutex_unlock_checked(puVar4);
    FUN_0051b1ec(param_1[0x58]);
    piVar5 = (int *)FUN_0051cba4(param_1);
    (*(code *)**(undefined4 **)*param_1)(param_1);
    (*(code *)**(undefined4 **)(*piVar5 + 4))(piVar5,param_1,0x10100103,0,0);
  }
  return;
}


// 0x051f3e0 (0x67c bytes)
// strings: 00667b88: 'Scheduler shutting down\n' | 00667ba8: '  Total ops completed: %d\n' | 00667bc8: '  Ops completed by overlap: %d\n' | 00667be8: '  Emax = %lld ms\n' | 00667c00: '  Variables:\n' | 00667c10: '  %s = %lld us\n'

void FUN_0051f3e0(undefined4 *param_1)

{
  int iVar1;
  undefined *puVar2;
  char cVar6;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 uVar5;
  ulonglong uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  double dVar12;
  ulonglong uVar13;
  double dVar14;
  double dVar15;
  
  *param_1 = PTR_PTR_0071ab34;
  FUN_00604788(param_1);
  if (*PTR_PTR_0071ab7c == '\0') {
    _ZN4cell4fios8platform10FIOSprintfEPKcz(PTR_s_Scheduler_shutting_down_0071ab80);
    instructionSynchronize();
    _ZN4cell4fios8platform10FIOSprintfEPKcz(PTR_s_Total_ops_completed___d_0071ab84,param_1[0x8a]);
    _ZN4cell4fios8platform10FIOSprintfEPKcz(PTR_s_Ops_completed_by_overlap___d_0071ab88,param_1[0x8c]);
    dVar15 = *(double *)PTR_DAT_0071ab1c;
    dVar12 = (double)*(longlong *)(param_1 + 0x7c) / dVar15;
    if ((double)DAT_0071ab28 <= dVar12) {
      uVar13 = (longlong)(dVar12 - (double)DAT_0071ab28) ^ 0x8000000000000000;
    }
    else {
      uVar13 = (ulonglong)dVar12;
    }
    _ZN4cell4fios8platform10FIOSprintfEPKcz(PTR_s_Emax____lld_ms_0071ab8c,(longlong)(uVar13 + 999999) / 1000000);
    _ZN4cell4fios8platform10FIOSprintfEPKcz(PTR_s_Variables__0071ab90);
    puVar2 = PTR_s__s____lld_us_0071ab94;
    piVar4 = (int *)param_1[0x58];
    if (piVar4[0x23] != 0) {
      dVar12 = (double)DAT_0071ab28;
      uVar13 = 0;
      do {
        uVar5 = (*(code *)**(undefined4 **)(*piVar4 + 0xc))(piVar4,uVar13 & 0xffffffff);
        dVar14 = (double)*(longlong *)((int)((uVar13 & 0xffffffff) << 3) + param_1[0x7b]) / dVar15;
        if (dVar14 < dVar12) {
          uVar7 = (ulonglong)dVar14;
        }
        else {
          uVar7 = (longlong)(dVar14 - dVar12) ^ 0x8000000000000000;
        }
        _ZN4cell4fios8platform10FIOSprintfEPKcz(puVar2,uVar5,(longlong)(uVar7 + 999) / 1000);
        piVar4 = (int *)param_1[0x58];
        uVar7 = uVar13 + 1;
        uVar13 = uVar13 + 1;
      } while ((uVar7 & 0xffffffff) < (ulonglong)(uint)piVar4[0x23]);
    }
  }
  else {
    piVar4 = (int *)param_1[0x58];
  }
  cVar6 = FUN_00604710(piVar4);
  if ((cVar6 != '\0') && (puVar3 = (undefined4 *)FUN_0051a480(param_1[0x58]), param_1 == puVar3)) {
    FUN_0051b318(param_1[0x58],0);
  }
  if (*(char *)(param_1 + 0x33) != '\0') {
    FUN_0052ced8(param_1 + 0x28);
  }
  iVar9 = param_1[0x7e];
  if (iVar9 != 0) {
    piVar4 = (int *)FUN_0051cba4(param_1);
    (*(code *)**(undefined4 **)(*piVar4 + 4))(piVar4,iVar9,0x10180103,0,0);
  }
  iVar9 = param_1[0x7b];
  if (iVar9 != 0) {
    piVar4 = (int *)FUN_0051cba4(param_1);
    (*(code *)**(undefined4 **)(*piVar4 + 4))(piVar4,iVar9,0x10170103,0,0);
  }
  puVar3 = param_1 + 0x62;
  if (param_1[0x8d] != 0) {
    lwmutex_lock_checked(puVar3);
    iVar9 = param_1[0x5e];
    *(undefined1 *)(param_1 + 0x6c) = 0;
    if (iVar9 != 0) {
      iVar11 = 0;
      do {
        iVar1 = iVar11 * 0x40;
        iVar11 = iVar11 + 1;
        FUN_0052dcf0(*(undefined4 *)(iVar1 + param_1[0x8d] + 8));
      } while (iVar9 != iVar11);
    }
    lwmutex_unlock_checked(puVar3);
    uVar10 = param_1[0x5e];
    if (uVar10 == 0) {
      iVar9 = param_1[0x8d];
    }
    else {
      uVar8 = 0;
      iVar9 = param_1[0x8d];
      do {
        uVar13 = (ulonglong)uVar8;
        uVar8 = uVar8 + 1;
        iVar1 = (int)((uVar13 & 0x3ffffff) << 6);
        iVar11 = *(int *)(iVar1 + iVar9 + 4);
        if (iVar11 != 0) {
          FUN_0052ced8(iVar11);
          FUN_0052d018(*(undefined4 *)(iVar1 + param_1[0x8d] + 4));
          FUN_0052d0e8(*(undefined4 *)(iVar1 + param_1[0x8d] + 8));
          iVar9 = param_1[0x8d];
        }
      } while (uVar10 != uVar8);
    }
    piVar4 = (int *)FUN_0051cba4(param_1);
    (*(code *)**(undefined4 **)(*piVar4 + 4))(piVar4,iVar9,0x10160103,0,0);
  }
  iVar9 = param_1[0x5c];
  if (iVar9 != 0) {
    if (param_1[0x5a] != 0) {
      uVar10 = 0;
      do {
        uVar10 = uVar10 + 1;
        check_magic(iVar9);
        handle_destroy(iVar9);
        iVar9 = iVar9 + 0x58;
      } while (uVar10 < (uint)param_1[0x5a]);
      iVar9 = param_1[0x5c];
    }
    piVar4 = (int *)FUN_0051cba4(param_1);
    (*(code *)**(undefined4 **)(*piVar4 + 4))(piVar4,iVar9,0x10140103,0,0);
  }
  iVar9 = param_1[0x5b];
  if (iVar9 != 0) {
    if (param_1[0x59] != 0) {
      uVar10 = 0;
      do {
        uVar10 = uVar10 + 1;
        check_magic(iVar9);
        iVar9 = iVar9 + 0xe8;
      } while (uVar10 < (uint)param_1[0x59]);
      iVar9 = param_1[0x5b];
    }
    piVar4 = (int *)FUN_0051cba4(param_1);
    (*(code *)**(undefined4 **)(*piVar4 + 4))(piVar4,iVar9,0x10130103,0,0);
  }
  FUN_0052df14(puVar3);
  FUN_0052df14(param_1 + 0x4e);
  FUN_0052d0e8(param_1 + 0x48);
  FUN_0052d0e8(param_1 + 0x42);
  FUN_0052df14(param_1 + 0x38);
  FUN_0052d018(param_1 + 0x28);
  FUN_0052df14(param_1 + 0x1e);
  FUN_0052e5f8(param_1 + 0x18);
  FUN_0052df14(param_1 + 0xe);
  FUN_0052df14(param_1 + 4);
  handle_invalidate_magic(param_1 + 1);
  return;
}


// SDK libfios.a(fios_scheduler.ppu.o): cell::fios::scheduler::allocateFH(unsigned int, char const*)  [exact match]
// 0x051fa5c (0x2c8 bytes)
// strings: 00667c20: "Filehandle path too long or invalid: '%s'\n"

int FUN_0051fa5c(int param_1,uint param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  bool bVar4;
  undefined *puVar5;
  char cVar9;
  undefined4 *puVar6;
  int iVar7;
  int *piVar8;
  undefined8 uVar10;
  uint uVar11;
  int iVar12;
  GPiece<256> auStack_150;
  
  cVar9 = FUN_00604788(param_1);
  if (cVar9 == '\0') {
    return 0;
  }
  lwmutex_lock_checked(param_1 + 0x10);
  if ((param_2 & 0x80) == 0) {
    iVar7 = *(int *)(param_1 + 0x238);
    if (iVar7 == 0) goto LAB_0051fae0;
    bVar4 = false;
    *(int *)(param_1 + 0x238) = *(int *)(iVar7 + 0xc);
    *(undefined4 *)(iVar7 + 0xc) = 0;
  }
  else {
LAB_0051fae0:
    puVar6 = (undefined4 *)FUN_0051cba4(param_1);
    iVar7 = (*(code *)**(undefined4 **)*puVar6)
                      (puVar6,(ulonglong)*(ushort *)(PTR_DAT_0071ab10 + 0xc) + 0x58,0x10300003,0,0);
    iVar12 = 0;
    if (iVar7 == 0) goto LAB_0051fc1c;
    bVar4 = true;
    FUN_00539124(iVar7,iVar7 + 0x58);
  }
  puVar5 = PTR_DAT_0071ab30;
  *(undefined8 *)(iVar7 + 0x48) = 0;
  *(undefined8 *)(iVar7 + 0x38) = 0;
  *(undefined8 *)(iVar7 + 0x40) = 0;
  uVar1 = *(undefined4 *)puVar5;
  uVar2 = *(undefined4 *)(puVar5 + 4);
  uVar3 = *(undefined4 *)(puVar5 + 8);
  uVar10 = *(undefined8 *)(puVar5 + 0x10);
  *(undefined4 *)(iVar7 + 0x28) = *(undefined4 *)(puVar5 + 0x18);
  *(undefined4 *)(iVar7 + 0x54) = 0;
  *(uint *)(iVar7 + 0x50) = param_2;
  *(undefined4 *)(iVar7 + 0x10) = uVar1;
  *(undefined4 *)(iVar7 + 0x14) = uVar2;
  *(undefined4 *)(iVar7 + 0x18) = uVar3;
  *(undefined8 *)(iVar7 + 0x20) = uVar10;
  *(int *)(iVar7 + 8) = param_1;
  cVar9 = FUN_00519f24(param_3,auStack_150);
  if (cVar9 == '\0') {
    _ZN4cell4fios8platform10FIOSprintfEPKcz(PTR_s_Filehandle_path_too_long_or_inva_0071ab98,param_3);
    if (bVar4) {
      handle_destroy(iVar7);
      piVar8 = (int *)FUN_0051cba4(param_1);
      iVar12 = 0;
      (*(code *)**(undefined4 **)(*piVar8 + 4))(piVar8,iVar7,0x10300003,0,0);
    }
    else {
      *(int *)(iVar7 + 0xc) = *(int *)(param_1 + 0x238);
      iVar12 = 0;
      *(int *)(param_1 + 0x238) = iVar7;
    }
  }
  else {
    FUN_0051cb08(iVar7 + 0x30,auStack_150);
    if (bVar4) {
      *(uint *)(iVar7 + 0x50) = *(uint *)(iVar7 + 0x50) | 0x80;
    }
    uVar11 = *(int *)(param_1 + 0x240) + 1;
    *(uint *)(param_1 + 0x240) = uVar11;
    if (*(uint *)(param_1 + 0x248) < uVar11) {
      *(uint *)(param_1 + 0x248) = uVar11;
    }
    *(int *)(iVar7 + 0xc) = *(int *)(param_1 + 0x23c);
    *(int *)(param_1 + 0x23c) = iVar7;
    iVar12 = iVar7;
  }
LAB_0051fc1c:
  lwmutex_unlock_checked(param_1 + 0x10);
  return iVar12;
}


// SDK libfios.a(fios_scheduler.ppu.o): cell::fios::scheduler::deleteOp(cell::fios::op*)  [exact match]
// 0x051fd24 (0x178 bytes)
// strings: 0051fdfc: '}+Kxy)' (raw)

void FUN_0051fd24(int param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  char cVar7;
  uint *puVar8;
  char in_RESERVE;
  byte in_cr0;
  
  cVar7 = FUN_00604788(param_1);
  if (cVar7 == '\0') {
    return;
  }
  cVar7 = check_magic(param_2);
  puVar8 = param_2 + 0xc;
  if (cVar7 == '\0') {
    return;
  }
  do {
    uVar1 = *puVar8;
    instructionSynchronize();
    while (uVar1 == *puVar8) {
      if (in_RESERVE != '\0') {
        uVar2 = storeWordConditionalIndexed((ulonglong)uVar1 | 0x300,0,ZEXT48(puVar8));
        *puVar8 = uVar2;
        in_cr0 = 2;
      }
      if ((in_cr0 & 2) != 0) {
        iVar6 = param_1 + 0x78;
        lwmutex_lock_checked(iVar6);
        if (param_2 == (undefined4 *)0x0) goto LAB_0051fe68;
        puVar5 = *(undefined4 **)(param_1 + 0x21c);
        puVar4 = (undefined4 *)(param_1 + 0x21c);
        goto joined_r0x0051fde8;
      }
    }
  } while( true );
joined_r0x0051fde8:
  puVar3 = puVar5;
  if (param_2 == puVar3) {
    if (param_2 != (undefined4 *)0x0) {
      *puVar4 = *param_2;
      *param_2 = 0;
      lwmutex_unlock_checked(iVar6);
      FUN_0051e584(param_1,param_2);
      return;
    }
LAB_0051fe68:
    lwmutex_unlock_checked(iVar6);
    return;
  }
  if (puVar3 == (undefined4 *)0x0) goto LAB_0051fe68;
  puVar5 = (undefined4 *)*puVar3;
  puVar4 = puVar3;
  goto joined_r0x0051fde8;
}


// SDK libfios.a(fios_scheduler.ppu.o): cell::fios::scheduler::completeOp(cell::fios::op*)  [exact match]
// 0x051fe9c (0xbc bytes)
undefined4 * _ZN4cell4fios9scheduler10completeOpEPNS0_2opE(int param_1,undefined4 *param_2)

{
  if ((*(uint *)(PTR_DAT_0071ab10 + 0x18) & 1) != 0) {
    op_trace_complete(param_2);
  }
  param_2[0x34] = 1;
  lwmutex_lock_checked(param_1 + 0x78);
  *param_2 = *(undefined4 *)(param_1 + 0x21c);
  *(undefined4 *)(param_1 + 0x21c) = param_2;
  lwmutex_unlock_checked(param_1 + 0x78);
  op_event_dispatch(param_2,1,0);
  return param_2;
}


// 0x051ff58 (0x370 bytes)
ulonglong FUN_0051ff58(int param_1,ulonglong param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  int *piVar5;
  int iVar6;
  int iVar8;
  char cVar9;
  ulonglong uVar7;
  char *pcVar10;
  int *piVar11;
  char in_RESERVE;
  byte bVar12;
  int iStack_1c4;
  GPiece<64> auStack_180;
  GPiece<264> auStack_140;
  
  piVar5 = (int *)param_2;
  uVar2 = piVar5[7];
  bVar1 = (uVar2 & 0xffffc700) == 0;
  bVar12 = bVar1 << 1;
  uVar7 = param_2 & 0xffffffff;
  if (bVar1) {
    uVar3 = piVar5[0x30];
    if ((uVar3 + 0x40000000 < 0x10000001) || (0xdfffffff < uVar3)) {
      piVar5[7] = uVar2 | 0x20;
    }
    iVar8 = sys_process_is_stack(uVar3);
    if (iVar8 != 0) {
      piVar5[7] = piVar5[7] | 0x40;
    }
    piVar11 = piVar5 + 0x12;
    if (*piVar11 == 0) {
      FUN_0051cb08(param_2 + 0x34 & 0xffffffff,0);
    }
    else {
      cVar9 = FUN_00519f24(*piVar11,auStack_140);
      if (cVar9 == '\0') {
        _ZN4cell4fios8platform10FIOSprintfEPKcz(*(undefined4 *)(iStack_1c4 + -0x778c),*piVar11);
        piVar5[0x11] = -0x7ffef8fb;
        uVar7 = _ZN4cell4fios9scheduler10completeOpEPNS0_2opE(param_1,uVar7);
        return uVar7 & 0xffffffff;
      }
      FUN_0051cb08(param_2 + 0x34 & 0xffffffff,auStack_140);
      pcVar4 = (char *)*(undefined4 *)(param_2 + 0x34);
      pcVar10 = (char *)0x0;
      if (*pcVar4 != '\0') {
        pcVar10 = pcVar4;
      }
      *piVar11 = (int)pcVar10;
      piVar5[0x13] = piVar5[0xe];
    }
    iVar8 = *(int *)(iStack_1c4 + -0x7818);
    if ((*(uint *)(iVar8 + 0x18) & 1) != 0) {
      FUN_00527584(uVar7);
    }
    piVar11 = (int *)(param_1 + 0x20c);
    if ((piVar5[7] & 0x80U) == 0) {
      do {
        iVar8 = *piVar11;
        instructionSynchronize();
        *piVar5 = iVar8;
        do {
          iVar6 = *piVar11;
          if (iVar8 != *piVar11) break;
          if (in_RESERVE != '\0') {
            iVar6 = storeWordConditionalIndexed(param_2,0,ZEXT48(piVar11));
            *piVar11 = iVar6;
            bVar12 = 2;
          }
          iVar6 = iVar8;
        } while ((bVar12 & 2) == 0);
        if (iVar8 == iVar6) {
          lwmutex_lock_checked(param_1 + 0xe0);
          FUN_0052dcf0(param_1 + 0x108);
          lwmutex_unlock_checked(param_1 + 0xe0);
          return uVar7;
        }
      } while( true );
    }
    iVar6 = piVar5[0x10];
    if ((((iVar6 - 10U < 2) || (iVar6 == 6)) || (iVar6 == 7)) || (iVar6 == 0x11)) {
      *(ushort *)(piVar5 + 0x25) = (ushort)piVar5[7] & 0x30fe | *(ushort *)(piVar5 + 0x25);
    }
    if ((*(uint *)(iVar8 + 0x18) & 1) != 0) {
      FUN_0052757c(uVar7);
    }
    (*(code *)**(undefined4 **)(**(int **)(param_1 + 0x160) + 0x14))
              (*(int **)(param_1 + 0x160),auStack_180);
    uVar7 = _ZN4cell4fios9scheduler10completeOpEPNS0_2opE(param_1,uVar7);
  }
  else {
    piVar5[0x11] = -0x7ffef8f9;
    piVar5[7] = uVar2 & 0x38ff;
    uVar7 = _ZN4cell4fios9scheduler10completeOpEPNS0_2opE(param_1,uVar7);
  }
  return uVar7 & 0xffffffff;
}


// SDK libfios.a(fios_scheduler.ppu.o): cell::fios::scheduler::loadPRX(cell::fios::opattr_t const*, char const*, unsigned int, unsigned long long, sys_prx_load_module_option_t*, int*)  [exact match]
// 0x05202c8 (0x1a4 bytes)
undefined8
FUN_005202c8(undefined8 param_1,int param_2,int param_3,ulonglong param_4,undefined8 param_5,
            ulonglong param_6,int param_7)

{
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar1;
  
  iVar2 = _ZN4cell4fios9scheduler10allocateOpEPKNS0_8opattr_tE(param_1,param_2);
  if (iVar2 == 0) {
    return 0;
  }
  if ((param_2 == 0) || ((*(uint *)(param_2 + 0x14) & 0xfffff77f) == 0)) {
    if ((param_3 != 0) && (param_7 != 0)) {
      *(int *)(iVar2 + 0x48) = param_3;
      uVar3 = _ZN4cell4fios8pathhashEPKc(param_3);
      *(undefined4 *)(iVar2 + 0x4c) = uVar3;
      *(undefined4 *)(iVar2 + 0x40) = 0x13;
      *(undefined4 *)(iVar2 + 0xd0) = 1;
      *(undefined8 *)(iVar2 + 0x80) = param_5;
      *(int *)(iVar2 + 0x90) = param_7;
      *(ulonglong *)(iVar2 + 0x70) = param_4 & 0xffffffff;
      *(ulonglong *)(iVar2 + 0x88) = param_6 & 0xffffffff;
      uVar1 = FUN_0051ff58(param_1,iVar2);
      return uVar1;
    }
    *(undefined4 *)(iVar2 + 0x44) = 0x80010707;
  }
  else {
    *(undefined4 *)(iVar2 + 0x44) = 0x80010707;
  }
  uVar1 = _ZN4cell4fios9scheduler10completeOpEPNS0_2opE(param_1,iVar2);
  return uVar1;
}


// SDK libfios.a(fios_scheduler.ppu.o): cell::fios::scheduler::loadSPUImage(cell::fios::opattr_t const*, char const*, sys_spu_image*)  [exact match]
// 0x052046c (0x148 bytes)
undefined8 FUN_0052046c(undefined8 param_1,int param_2,int param_3,int param_4)

{
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar1;
  
  iVar2 = _ZN4cell4fios9scheduler10allocateOpEPKNS0_8opattr_tE(param_1,param_2);
  if (iVar2 == 0) {
    return 0;
  }
  if ((param_2 == 0) || ((*(uint *)(param_2 + 0x14) & 0xfffff77f) == 0)) {
    if ((param_3 != 0) && (param_4 != 0)) {
      *(int *)(iVar2 + 0x90) = param_4;
      *(int *)(iVar2 + 0x48) = param_3;
      uVar3 = _ZN4cell4fios8pathhashEPKc(param_3);
      *(undefined4 *)(iVar2 + 0x4c) = uVar3;
      *(undefined4 *)(iVar2 + 0x40) = 0x12;
      *(undefined4 *)(iVar2 + 0xd0) = 1;
      uVar1 = FUN_0051ff58(param_1,iVar2);
      return uVar1;
    }
    *(undefined4 *)(iVar2 + 0x44) = 0x80010707;
  }
  else {
    *(undefined4 *)(iVar2 + 0x44) = 0x80010707;
  }
  uVar1 = _ZN4cell4fios9scheduler10completeOpEPNS0_2opE(param_1,iVar2);
  return uVar1;
}


// SDK libfios.a(fios_scheduler.ppu.o): cell::fios::scheduler::syncFile(cell::fios::opattr_t const*, cell::fios::filehandle*)  [exact match]
// 0x05205b4 (0x1ec bytes)
undefined8 FUN_005205b4(int param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  int iVar8;
  char cVar9;
  undefined8 uVar7;
  char *pcVar10;
  longlong lVar11;
  
  iVar8 = _ZN4cell4fios9scheduler10allocateOpEPKNS0_8opattr_tE(param_1);
  if (iVar8 == 0) {
    return 0;
  }
  cVar9 = check_magic(param_3);
  if ((cVar9 == '\0') || (*(int *)(param_3 + 8) != param_1)) {
    uVar6 = 0x80010706;
  }
  else {
    iVar4 = *(int *)(param_3 + 0x10);
    iVar1 = *(int *)(param_3 + 0x28);
    iVar2 = *(int *)(param_3 + 0x14);
    iVar3 = *(int *)(param_3 + 0x18);
    lVar11 = *(longlong *)(param_3 + 0x20);
    if (((((*(int *)PTR_DAT_0071ab30 != iVar4) || (*(int *)(PTR_DAT_0071ab30 + 4) != iVar2)) ||
         (*(int *)(PTR_DAT_0071ab30 + 8) != iVar3)) ||
        ((*(longlong *)(PTR_DAT_0071ab30 + 0x10) != lVar11 ||
         (*(int *)(PTR_DAT_0071ab30 + 0x18) != iVar1)))) && ((*(uint *)(param_3 + 0x50) & 2) != 0))
    {
      pcVar5 = *(char **)(param_3 + 0x30);
      *(undefined4 *)(iVar8 + 0x40) = 0xc;
      *(undefined4 *)(iVar8 + 0xd0) = 1;
      pcVar10 = (char *)0x0;
      if (*pcVar5 != '\0') {
        pcVar10 = pcVar5;
      }
      uVar6 = *(undefined4 *)(param_3 + 0x34);
      *(int *)(iVar8 + 0xa0) = param_3;
      *(undefined4 *)(iVar8 + 0x4c) = uVar6;
      *(int *)(iVar8 + 0x50) = iVar4;
      *(int *)(iVar8 + 0x68) = iVar1;
      *(int *)(iVar8 + 0x58) = iVar3;
      *(char **)(iVar8 + 0x48) = pcVar10;
      *(int *)(iVar8 + 0x54) = iVar2;
      *(longlong *)(iVar8 + 0x60) = lVar11;
      uVar7 = FUN_0051ff58(param_1,iVar8);
      return uVar7;
    }
    uVar6 = 0;
  }
  *(undefined4 *)(iVar8 + 0x44) = uVar6;
  uVar7 = _ZN4cell4fios9scheduler10completeOpEPNS0_2opE(param_1,iVar8);
  return uVar7;
}


// SDK libfios.a(fios_scheduler.ppu.o): cell::fios::scheduler::openFile(cell::fios::opattr_t const*, char const*, unsigned int, cell::fios::filehandle**)  [exact match]
// 0x05207a0 (0x288 bytes)
undefined8
_ZN4cell4fios9scheduler8openFileEPKNS0_8opattr_tEPKcjPPNS0_10filehandleE(undefined4 param_1,int param_2,byte *param_3,ulonglong param_4,int *param_5)

{
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar1;
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
  if (param_5 != (int *)0x0) {
    *param_5 = 0;
  }
  iVar2 = op_alloc(param_1,param_2);
  if (iVar2 == 0) {
    return 0;
  }
  if (param_5 != (int *)0x0) {
    if ((param_3 == (byte *)0x0) || ((longlong)((ulonglong)*param_3 - 1) < 0)) {
      uVar4 = 0x80010705;
      goto LAB_0052094c;
    }
    if (((((int)param_4 != 0) && ((param_2 == 0 || ((*(uint *)(param_2 + 0x14) & 0xfffff77f) == 0)))
         ) && (((param_4 & 0x1c) == 0 || ((param_4 >> 1 & 1) != 0)))) &&
       (((int)(param_4 & 0x300) == 0 ||
        ((((param_4 & 0xfffffc7e) == 0 && (iVar3 = FUN_0051cb74(param_4 & 0x300), iVar3 < 2)) &&
         (((param_4 & 0x100) == 0 || ((param_2 != 0 && (*(int *)(param_2 + 0x20) != 0)))))))))) {
      iVar3 = FUN_0051fa5c(param_1,param_4 & 0xffffffff,param_3);
      uVar4 = 0x8001070a;
      *param_5 = iVar3;
      if (iVar3 != 0) {
        *(undefined8 *)(iVar2 + 0xa8) = 4;
        *(byte **)(iVar2 + 0x48) = param_3;
        *(int **)(iVar2 + 0xc0) = param_5;
        *(undefined4 *)(iVar2 + 0x40) = 9;
        *(short *)(iVar2 + 0x94) = (short)param_4;
        *(undefined4 *)(iVar2 + 0xd0) = 7;
        uVar4 = hash_path_string(param_3);
        *(undefined4 *)(iVar2 + 0x4c) = uVar4;
        *(int *)(iVar2 + 0xa0) = iVar3;
        uVar1 = FUN_0051ff58(param_1,iVar2);
        return uVar1;
      }
      goto LAB_0052094c;
    }
  }
  uVar4 = 0x80010707;
LAB_0052094c:
  *(undefined4 *)(iVar2 + 0x44) = uVar4;
  uVar1 = op_complete_immediate(param_1,iVar2);
  return uVar1;
}


// SDK libfios.a(fios_scheduler.ppu.o): cell::fios::scheduler::readDirectory(cell::fios::opattr_t const*, char const*, long long, cell::fios::direntry_t*)  [exact match]
// 0x0520a28 (0x1b0 bytes)
undefined8
FUN_00520a28(undefined8 param_1,int param_2,byte *param_3,longlong param_4,undefined4 param_5)

{
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar1;
  
  iVar2 = _ZN4cell4fios9scheduler10allocateOpEPKNS0_8opattr_tE(param_1,param_2);
  if (iVar2 == 0) {
    return 0;
  }
  *(undefined4 *)(iVar2 + 0xc0) = param_5;
  *(undefined4 *)(iVar2 + 0x90) = param_5;
  *(byte **)(iVar2 + 0x48) = param_3;
  *(undefined8 *)(iVar2 + 0xa8) = 0x120;
  *(undefined4 *)(iVar2 + 0xd0) = 1;
  *(undefined4 *)(iVar2 + 0x40) = 5;
  *(undefined8 *)(iVar2 + 0x80) = 0x120;
  *(longlong *)(iVar2 + 0x70) = param_4;
  *(longlong *)(iVar2 + 0xb8) = param_4;
  uVar3 = _ZN4cell4fios8pathhashEPKc(param_3);
  *(undefined4 *)(iVar2 + 0x4c) = uVar3;
  if ((param_3 == (byte *)0x0) || ((longlong)((ulonglong)*param_3 - 1) < 0)) {
    uVar3 = 0x80010705;
  }
  else {
    if (-1 < param_4) {
      if (param_2 != 0) {
        uVar3 = 0x80010707;
        if ((*(uint *)(param_2 + 0x14) & 0xfffff77f) != 0) goto LAB_00520b54;
      }
      uVar1 = FUN_0051ff58(param_1,iVar2);
      return uVar1;
    }
    uVar3 = 0x8001070b;
  }
LAB_00520b54:
  *(undefined4 *)(iVar2 + 0x44) = uVar3;
  uVar1 = _ZN4cell4fios9scheduler10completeOpEPNS0_2opE(param_1,iVar2);
  return uVar1;
}


// SDK libfios.a(fios_scheduler.ppu.o): cell::fios::scheduler::resolve(cell::fios::opattr_t const*, cell::fios::filerange_t*, cell::fios::media*)  [exact match]
// 0x0520bd8 (0x1a8 bytes)
undefined8 FUN_00520bd8(undefined8 param_1,int param_2,int param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  int iVar5;
  
  iVar2 = _ZN4cell4fios9scheduler10allocateOpEPKNS0_8opattr_tE(param_1,param_2);
  if (iVar2 == 0) {
    return 0;
  }
  *(undefined4 *)(iVar2 + 0x40) = 0x10;
  *(undefined4 *)(iVar2 + 0xd0) = 1;
  *(undefined8 *)(iVar2 + 0xa8) = 0x110;
  *(int *)(iVar2 + 0x90) = param_3;
  if (param_3 != 0) {
    iVar5 = 0;
    if (param_2 != 0) {
      uVar1 = (int)*(uint *)(param_2 + 0x14) >> 0x1f;
      iVar5 = -((int)(uVar1 - (uVar1 ^ *(uint *)(param_2 + 0x14) & 0xfffff77f)) >> 0x1f);
      if (iVar5 != 0) {
        *(undefined4 *)(iVar2 + 0x44) = 0x80010707;
        goto LAB_00520d44;
      }
    }
    *(int *)(iVar2 + 0x48) = param_3;
    uVar3 = _ZN4cell4fios8pathhashEPKc(param_3);
    *(undefined8 *)(iVar2 + 0x70) = *(undefined8 *)(param_3 + 0x100);
    uVar4 = *(undefined8 *)(param_3 + 0x108);
    *(undefined4 *)(iVar2 + 0x4c) = uVar3;
    *(undefined4 *)(iVar2 + 0x54) = param_4;
    *(int *)(iVar2 + 0x50) = iVar5;
    *(undefined8 *)(iVar2 + 0x80) = uVar4;
    uVar4 = FUN_0051ff58(param_1,iVar2);
    return uVar4;
  }
  *(undefined4 *)(iVar2 + 0x44) = 0x80010707;
LAB_00520d44:
  uVar4 = _ZN4cell4fios9scheduler10completeOpEPNS0_2opE(param_1,iVar2);
  return uVar4;
}


// 0x0520d80 (0xf8 bytes)
undefined1
FUN_00520d80(undefined4 param_1,undefined4 param_2,char *param_3,undefined8 param_4,
            undefined8 param_5)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 uVar3;
  GPiece<40> auStack_170;
  GPiece<288> auStack_148;
  
  if (*param_3 != '\0') {
    FUN_005193cc(auStack_148,param_3,0x100);
    uVar1 = FUN_00520bd8(param_1,auStack_170,auStack_148,param_2);
    iVar2 = _ZN4cell4fios2op8syncWaitEPx(uVar1,0);
    if (iVar2 == 0) {
      uVar3 = FUN_00532848(param_2,auStack_148,param_4,param_5);
      return uVar3;
    }
  }
  return 0;
}


// SDK libfios.a(fios_scheduler.ppu.o): cell::fios::scheduler::prefetchFile(cell::fios::opattr_t const*, char const*, long long, long long)  [exact match]
// 0x0520e78 (0x24c bytes)
undefined8
FUN_00520e78(undefined8 param_1,int param_2,byte *param_3,longlong param_4,longlong param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  ushort uVar8;
  
  iVar4 = _ZN4cell4fios9scheduler10allocateOpEPKNS0_8opattr_tE(param_1,param_2);
  if (iVar4 == 0) {
    return 0;
  }
  if ((param_3 == (byte *)0x0) || ((longlong)((ulonglong)*param_3 - 1) < 0)) {
    uVar6 = 0x80010705;
  }
  else if (((param_5 < 0) || (param_4 < 0)) ||
          ((param_2 != 0 &&
           (((*(uint *)(param_2 + 0x14) & 0x3000) != 0 || ((*(uint *)(param_2 + 0x14) & 0xc) != 0)))
           ))) {
    uVar6 = 0x80010707;
  }
  else {
    uVar8 = ((ushort)((int)((*(uint *)(iVar4 + 0x1c) & 0x2000) - 1) >> 0x1f) & 0xfe00) + 0x201;
    if ((*(uint *)(iVar4 + 0x1c) & 0x1000) != 0) {
      uVar8 = uVar8 | 0x100;
    }
    iVar5 = FUN_0051fa5c(param_1,1,param_3);
    uVar6 = 0x8001070a;
    if (iVar5 != 0) {
      *(int *)(iVar4 + 0xa0) = iVar5;
      *(undefined1 *)(iVar4 + 0x10) = 0x80;
      *(undefined4 *)(iVar4 + 0xd0) = 9;
      *(byte **)(iVar4 + 0x48) = param_3;
      *(undefined8 *)(iVar4 + 8) = 0x7fffffffffffffff;
      *(longlong *)(iVar4 + 0xb8) = param_4;
      *(longlong *)(iVar4 + 0xa8) = param_5;
      *(undefined4 *)(iVar4 + 0x40) = 9;
      *(longlong *)(iVar4 + 0x70) = param_4;
      *(longlong *)(iVar4 + 0x80) = param_5;
      uVar6 = _ZN4cell4fios8pathhashEPKc(param_3);
      puVar3 = PTR_DAT_0071ab30;
      *(undefined4 *)(iVar4 + 0x4c) = uVar6;
      *(ushort *)(iVar4 + 0x94) = uVar8;
      uVar6 = *(undefined4 *)(puVar3 + 0x18);
      *(undefined4 *)(iVar4 + 0x50) = *(undefined4 *)puVar3;
      uVar1 = *(undefined4 *)(puVar3 + 4);
      uVar2 = *(undefined4 *)(puVar3 + 8);
      uVar7 = *(undefined8 *)(puVar3 + 0x10);
      *(undefined4 *)(iVar4 + 0x68) = uVar6;
      *(undefined4 *)(iVar4 + 0x54) = uVar1;
      *(undefined4 *)(iVar4 + 0x58) = uVar2;
      *(undefined8 *)(iVar4 + 0x60) = uVar7;
      uVar7 = FUN_0051ff58(param_1,iVar4);
      return uVar7;
    }
  }
  *(undefined4 *)(iVar4 + 0x44) = uVar6;
  uVar7 = _ZN4cell4fios9scheduler10completeOpEPNS0_2opE(param_1,iVar4);
  return uVar7;
}


// SDK libfios.a(fios_scheduler.ppu.o): cell::fios::scheduler::unlink(cell::fios::opattr_t const*, char const*)  [exact match]
// 0x05210c4 (0x164 bytes)
undefined8 FUN_005210c4(undefined8 param_1,int param_2,byte *param_3)

{
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar1;
  
  iVar2 = _ZN4cell4fios9scheduler10allocateOpEPKNS0_8opattr_tE(param_1,param_2);
  if (iVar2 == 0) {
    return 0;
  }
  *(undefined4 *)(iVar2 + 0x40) = 0xf;
  *(undefined4 *)(iVar2 + 0xd0) = 1;
  *(byte **)(iVar2 + 0x48) = param_3;
  uVar3 = _ZN4cell4fios8pathhashEPKc(param_3);
  *(undefined4 *)(iVar2 + 0x4c) = uVar3;
  if (param_3 != (byte *)0x0) {
    if (-1 < (longlong)((ulonglong)*param_3 - 1)) {
      if (param_2 == 0) {
LAB_00521188:
        uVar1 = FUN_0051ff58();
        return uVar1;
      }
      if ((*(uint *)(param_2 + 0x14) & 0xfffff77f) == 0) goto LAB_00521188;
      *(undefined4 *)(iVar2 + 0x44) = 0x80010707;
      goto LAB_005211bc;
    }
  }
  *(undefined4 *)(iVar2 + 0x44) = 0x80010705;
LAB_005211bc:
  uVar1 = _ZN4cell4fios9scheduler10completeOpEPNS0_2opE(param_1,iVar2);
  return uVar1;
}


// SDK libfios.a(fios_scheduler.ppu.o): cell::fios::scheduler::createDirectory(cell::fios::opattr_t const*, char const*)  [exact match]
// 0x0521228 (0x164 bytes)
undefined8 FUN_00521228(undefined8 param_1,int param_2,byte *param_3)

{
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar1;
  
  iVar2 = _ZN4cell4fios9scheduler10allocateOpEPKNS0_8opattr_tE(param_1,param_2);
  if (iVar2 == 0) {
    return 0;
  }
  *(undefined4 *)(iVar2 + 0x40) = 0xe;
  *(undefined4 *)(iVar2 + 0xd0) = 1;
  *(byte **)(iVar2 + 0x48) = param_3;
  uVar3 = _ZN4cell4fios8pathhashEPKc(param_3);
  *(undefined4 *)(iVar2 + 0x4c) = uVar3;
  if (param_3 != (byte *)0x0) {
    if (-1 < (longlong)((ulonglong)*param_3 - 1)) {
      if (param_2 == 0) {
LAB_005212ec:
        uVar1 = FUN_0051ff58();
        return uVar1;
      }
      if ((*(uint *)(param_2 + 0x14) & 0xfffff77f) == 0) goto LAB_005212ec;
      *(undefined4 *)(iVar2 + 0x44) = 0x80010707;
      goto LAB_00521320;
    }
  }
  *(undefined4 *)(iVar2 + 0x44) = 0x80010705;
LAB_00521320:
  uVar1 = _ZN4cell4fios9scheduler10completeOpEPNS0_2opE(param_1,iVar2);
  return uVar1;
}


// SDK libfios.a(fios_scheduler.ppu.o): cell::fios::scheduler::writeFile(cell::fios::opattr_t const*, char const*, void const*, long long, long long)  [exact match]
// 0x052138c (0x1f0 bytes)
undefined8
FUN_0052138c(undefined8 param_1,int param_2,undefined4 param_3,undefined4 param_4,longlong param_5,
            longlong param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  iVar4 = _ZN4cell4fios9scheduler10allocateOpEPKNS0_8opattr_tE(param_1,param_2);
  if (iVar4 == 0) {
    return 0;
  }
  *(undefined4 *)(iVar4 + 0xd0) = 1;
  *(undefined4 *)(iVar4 + 0x40) = 0xb;
  *(undefined4 *)(iVar4 + 0xc0) = param_4;
  *(undefined4 *)(iVar4 + 0x90) = param_4;
  *(longlong *)(iVar4 + 0x80) = param_6;
  *(undefined4 *)(iVar4 + 0x48) = param_3;
  *(longlong *)(iVar4 + 0xa8) = param_6;
  *(longlong *)(iVar4 + 0x70) = param_5;
  *(longlong *)(iVar4 + 0xb8) = param_5;
  uVar5 = _ZN4cell4fios8pathhashEPKc(param_3);
  puVar3 = PTR_DAT_0071ab30;
  *(undefined4 *)(iVar4 + 0x4c) = uVar5;
  uVar5 = *(undefined4 *)(puVar3 + 0x18);
  uVar1 = *(undefined4 *)(puVar3 + 4);
  uVar2 = *(undefined4 *)(puVar3 + 8);
  uVar6 = *(undefined8 *)(puVar3 + 0x10);
  *(undefined4 *)(iVar4 + 0x50) = *(undefined4 *)puVar3;
  *(undefined4 *)(iVar4 + 0x68) = uVar5;
  *(undefined4 *)(iVar4 + 0x54) = uVar1;
  *(undefined4 *)(iVar4 + 0x58) = uVar2;
  *(undefined8 *)(iVar4 + 0x60) = uVar6;
  if (param_6 < 0) {
    *(undefined4 *)(iVar4 + 0x44) = 0x80010707;
  }
  else if (param_5 < 0) {
    *(undefined4 *)(iVar4 + 0x44) = 0x80010707;
  }
  else {
    if ((param_2 == 0) || ((*(uint *)(param_2 + 0x14) & 0x3000) == 0)) {
      uVar6 = FUN_0051ff58();
      return uVar6;
    }
    *(undefined4 *)(iVar4 + 0x44) = 0x80010707;
  }
  uVar6 = _ZN4cell4fios9scheduler10completeOpEPNS0_2opE(param_1,iVar4);
  return uVar6;
}


// SDK libfios.a(fios_scheduler.ppu.o): cell::fios::scheduler::readFile(cell::fios::opattr_t const*, char const*, void*, long long, long long)  [exact match]
// 0x052157c (0x218 bytes)
undefined8
FUN_0052157c(undefined8 param_1,int param_2,byte *param_3,undefined4 param_4,longlong param_5,
            longlong param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined *puVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 uVar8;
  
  iVar5 = _ZN4cell4fios9scheduler10allocateOpEPKNS0_8opattr_tE(param_1,param_2);
  if (iVar5 == 0) {
    return 0;
  }
  *(undefined4 *)(iVar5 + 0xc0) = param_4;
  *(undefined4 *)(iVar5 + 0x90) = param_4;
  *(undefined4 *)(iVar5 + 0x40) = 10;
  *(undefined4 *)(iVar5 + 0xd0) = 1;
  *(byte **)(iVar5 + 0x48) = param_3;
  *(longlong *)(iVar5 + 0x80) = param_6;
  *(longlong *)(iVar5 + 0xa8) = param_6;
  *(longlong *)(iVar5 + 0x70) = param_5;
  *(longlong *)(iVar5 + 0xb8) = param_5;
  uVar6 = _ZN4cell4fios8pathhashEPKc(param_3);
  puVar4 = PTR_DAT_0071ab30;
  *(undefined4 *)(iVar5 + 0x4c) = uVar6;
  uVar6 = *(undefined4 *)(puVar4 + 0x18);
  uVar1 = *(undefined4 *)(puVar4 + 4);
  uVar2 = *(undefined4 *)(puVar4 + 8);
  uVar8 = *(undefined8 *)(puVar4 + 0x10);
  *(undefined4 *)(iVar5 + 0x50) = *(undefined4 *)puVar4;
  *(undefined4 *)(iVar5 + 0x68) = uVar6;
  *(undefined4 *)(iVar5 + 0x54) = uVar1;
  *(undefined4 *)(iVar5 + 0x58) = uVar2;
  *(undefined8 *)(iVar5 + 0x60) = uVar8;
  if ((((param_3 != (byte *)0x0) && (-1 < (longlong)((ulonglong)*param_3 - 1))) && (-1 < param_6))
     && (-1 < param_5)) {
    if ((param_2 != 0) && (uVar3 = *(uint *)(param_2 + 0x14) & 0x3000, uVar3 != 0)) {
      iVar7 = FUN_0051cb74(uVar3);
      if ((1 < iVar7) ||
         (((*(uint *)(param_2 + 0x14) & 0x1000) != 0 && (*(int *)(param_2 + 0x20) == 0))))
      goto LAB_005216dc;
      *(uint *)(iVar5 + 0x1c) = *(uint *)(iVar5 + 0x1c) | 0xe;
    }
    uVar8 = FUN_0051ff58(param_1,iVar5);
    return uVar8;
  }
LAB_005216dc:
  *(undefined4 *)(iVar5 + 0x44) = 0x80010707;
  uVar8 = _ZN4cell4fios9scheduler10completeOpEPNS0_2opE(param_1,iVar5);
  return uVar8;
}


// SDK libfios.a(fios_scheduler.ppu.o): cell::fios::scheduler::statCommon(cell::fios::opattr_t const*, char const*, void*, cell::fios::op::e_OPSTAGES)  [exact match]
// 0x0521794 (0x21c bytes)
undefined8 _ZN4cell4fios9scheduler10statCommonEPKNS0_8opattr_tEPKcPvNS0_2op10e_OPSTAGESE(undefined8 param_1,int param_2,byte *param_3,int param_4,uint param_5)

{
  uint uVar1;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar2;
  int iVar5;
  
  iVar3 = op_alloc(param_1,param_2);
  if (iVar3 == 0) {
    return 0;
  }
  *(uint *)(iVar3 + 0xd0) = param_5;
  *(undefined4 *)(iVar3 + 0x40) = 8;
  *(byte **)(iVar3 + 0x48) = param_3;
  uVar4 = hash_path_string(param_3);
  *(undefined4 *)(iVar3 + 0x4c) = uVar4;
  if (param_5 == 1) {
    *(int *)(iVar3 + 0x90) = param_4;
    *(undefined8 *)(iVar3 + 0x80) = 0x58;
    *(undefined8 *)(iVar3 + 0xa8) = 0x58;
    *(int *)(iVar3 + 0xc0) = param_4;
  }
  else {
    *(int *)(iVar3 + 0xc0) = param_4;
    uVar1 = (int)(param_5 ^ 3) >> 0x1f;
    *(ulonglong *)(iVar3 + 0xa8) =
         ((longlong)((int)(uVar1 - (uVar1 ^ param_5 ^ 3)) >> 0x1f) & 0xfffffffffffffff9U) + 8;
  }
  if ((((param_3 != (byte *)0x0) && (-1 < (longlong)((ulonglong)*param_3 - 1))) && (param_4 != 0))
     && (((param_2 == 0 || (uVar1 = *(uint *)(param_2 + 0x14) & 0x3000, uVar1 == 0)) ||
         ((iVar5 = FUN_0051cb74(uVar1), iVar5 < 2 &&
          (((*(uint *)(param_2 + 0x14) & 0x1000) == 0 || (*(int *)(param_2 + 0x20) != 0)))))))) {
    uVar2 = FUN_0051ff58(param_1,iVar3);
    return uVar2;
  }
  *(undefined4 *)(iVar3 + 0x44) = 0x80010707;
  uVar2 = op_complete_immediate(param_1,iVar3);
  return uVar2;
}


// 0x05219b0 (0x1a8 bytes)
void filehandle_release(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  bool bVar3;
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
  if (param_2 != 0) {
    lwmutex_lock_checked(param_1 + 0x10);
    piVar2 = (int *)(param_1 + 0x23c);
    iVar1 = *piVar2;
    while (param_2 != iVar1) {
      if (iVar1 == 0) goto LAB_00521a64;
      piVar2 = (int *)(iVar1 + 0xc);
      iVar1 = *piVar2;
    }
    if (param_2 == 0) {
LAB_00521a64:
      bVar3 = false;
    }
    else {
      bVar3 = true;
      *piVar2 = *(int *)(param_2 + 0xc);
      *(undefined4 *)(param_2 + 0xc) = 0;
    }
    if (bVar3) {
      FUN_0051cb08(param_2 + 0x30,0);
      *(int *)(param_1 + 0x240) = *(int *)(param_1 + 0x240) + -1;
      if ((*(uint *)(param_2 + 0x50) & 0x80) == 0) {
        *(undefined4 *)(param_2 + 0x54) = 0;
        iVar1 = *(int *)(param_1 + 0x238);
        *(int *)(param_2 + 8) = param_1;
        *(int *)(param_2 + 0xc) = iVar1;
        *(int *)(param_1 + 0x238) = param_2;
      }
      else {
        handle_destroy(param_2);
        piVar2 = (int *)FUN_0051cba4(param_1);
        (*(code *)**(undefined4 **)(*piVar2 + 4))(piVar2,param_2,0x10300003,0,0);
      }
    }
    lwmutex_unlock_checked(param_1 + 0x10);
  }
  return;
}


// 0x0521b58 (0x234 bytes)
undefined8 filehandle_close_setup(int param_1,undefined8 param_2,int param_3)

{
  undefined4 uVar1;
  char *pcVar2;
  undefined *puVar3;
  int iVar5;
  char cVar6;
  undefined8 uVar4;
  int iVar7;
  int iVar8;
  char *pcVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  
  iVar5 = op_alloc(param_1);
  if (iVar5 == 0) {
    return 0;
  }
  cVar6 = check_magic(param_3);
  puVar3 = PTR_DAT_0071ab30;
  if ((cVar6 == '\0') || (*(int *)(param_3 + 8) != param_1)) {
    *(undefined4 *)(iVar5 + 0x44) = 0x80010706;
  }
  else {
    if ((*(uint *)(param_3 + 0x50) & 0x200) == 0) {
      iVar8 = *(int *)(param_3 + 0x10);
      iVar10 = *(int *)(param_3 + 0x28);
      iVar7 = *(int *)(param_3 + 0x14);
      iVar12 = *(int *)(param_3 + 0x18);
      lVar11 = *(longlong *)(param_3 + 0x20);
      if (*(int *)PTR_DAT_0071ab30 != iVar8) goto LAB_00521c08;
    }
    else {
      iVar8 = *(int *)(param_3 + 0x10);
      iVar10 = *(int *)(param_3 + 0x28);
      *(uint *)(iVar5 + 0x1c) = *(uint *)(iVar5 + 0x1c) | 0x2000;
      iVar7 = *(int *)(param_3 + 0x14);
      iVar12 = *(int *)(param_3 + 0x18);
      lVar11 = *(longlong *)(param_3 + 0x20);
      if (*(int *)puVar3 != iVar8) goto LAB_00521c08;
    }
    if ((((*(int *)(puVar3 + 4) != iVar7) || (*(int *)(puVar3 + 8) != iVar12)) ||
        (*(longlong *)(puVar3 + 0x10) != lVar11)) || (*(int *)(puVar3 + 0x18) != iVar10)) {
LAB_00521c08:
      pcVar2 = *(char **)(param_3 + 0x30);
      *(undefined4 *)(iVar5 + 0x40) = 0xd;
      *(undefined4 *)(iVar5 + 0xd0) = 8;
      pcVar9 = (char *)0x0;
      if (*pcVar2 != '\0') {
        pcVar9 = pcVar2;
      }
      uVar1 = *(undefined4 *)(param_3 + 0x34);
      *(int *)(iVar5 + 0xa0) = param_3;
      *(undefined4 *)(iVar5 + 0x4c) = uVar1;
      *(int *)(iVar5 + 0x50) = iVar8;
      *(int *)(iVar5 + 0x58) = iVar12;
      *(int *)(iVar5 + 0x54) = iVar7;
      *(longlong *)(iVar5 + 0x60) = lVar11;
      *(int *)(iVar5 + 0xc0) = param_3;
      *(int *)(iVar5 + 0x68) = iVar10;
      *(char **)(iVar5 + 0x48) = pcVar9;
      uVar4 = FUN_0051ff58(param_1,iVar5);
      return uVar4;
    }
    filehandle_release(param_1,param_3);
  }
  uVar4 = op_complete_immediate(param_1,iVar5);
  return uVar4;
}


// 0x0521d8c (0x378 bytes)
void FUN_00521d8c(int param_1,undefined4 *param_2,int param_3)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  longlong lVar9;
  undefined *puVar10;
  int iVar11;
  ulonglong uVar12;
  char *pcVar14;
  undefined8 uVar13;
  uint *puVar15;
  char in_RESERVE;
  byte in_cr0;
  
  do {
    lVar9 = TBLr;
  } while ((int)lVar9 == 0);
  if (*(longlong *)(param_1 + 0x200) < lVar9) {
    *(longlong *)(param_1 + 0x200) = lVar9;
  }
  FUN_0051d33c(param_1,param_2,0,0,param_1 + 0x200,*(undefined4 *)(param_1 + 0x1fc));
  iVar11 = *(int *)(param_1 + 0x160);
  uVar1 = *(undefined4 *)(param_3 + 0x34);
  *(undefined4 **)(param_3 + 0x24) = param_2 + 0x10;
  param_2[0x11] = 0x80010701;
  uVar2 = *(uint *)(iVar11 + 0x8c);
  *(undefined4 **)(param_3 + 0xc) = param_2;
  memset(uVar1,0,((ulonglong)uVar2 & 0x3fffffff) << 2);
  puVar10 = PTR_PTR_0071aba0;
  iVar11 = param_2[0x10];
  uVar2 = (uint)param_2[0xc] >> 9 & 1;
  if ((((iVar11 - 10U < 2) || (iVar11 == 6)) || (iVar11 == 7)) || (uVar12 = 0, iVar11 == 0x11)) {
    uVar12 = (longlong)*(ulonglong *)(param_2 + 0x20) >> 0x3f;
    uVar12 = ((uVar12 ^ *(ulonglong *)(param_2 + 0x20)) - uVar12) - 1 >> 0x3f;
  }
  puVar15 = (uint *)(param_1 + 0x224);
  *(int *)(param_3 + 0x3c) = param_1;
  *(undefined **)(param_3 + 0x38) = puVar10;
  do {
    uVar3 = *puVar15;
    instructionSynchronize();
    while (uVar3 == *puVar15) {
      if (in_RESERVE != '\0') {
        uVar8 = storeWordConditionalIndexed((ulonglong)uVar3 + 1,0,ZEXT48(puVar15));
        *puVar15 = uVar8;
        in_cr0 = 2;
      }
      if ((in_cr0 & 2) != 0) {
        if (param_2 != (undefined4 *)0x0) {
          *param_2 = *(undefined4 *)(param_1 + 0x218);
          *(undefined4 *)(param_1 + 0x218) = param_2;
        }
        if (uVar2 == 0) {
LAB_00521ef4:
          if (uVar2 != 0) goto LAB_00521efc;
        }
        else {
          iVar11 = param_2[0x34];
          if (iVar11 == 10) {
            iVar5 = param_2[0x28];
            if (iVar5 == 0) goto LAB_00521ef4;
            param_2[0x34] = 0xb;
            param_2[0x10] = 0xd;
            pcVar14 = (char *)0x0;
            if (**(char **)(iVar5 + 0x30) != '\0') {
              pcVar14 = *(char **)(iVar5 + 0x30);
            }
            iVar11 = param_2[0x34];
            param_2[0x13] = *(undefined4 *)(iVar5 + 0x34);
            param_2[0x12] = pcVar14;
            uVar1 = *(undefined4 *)(iVar5 + 0x28);
            uVar6 = *(undefined4 *)(iVar5 + 0x14);
            uVar7 = *(undefined4 *)(iVar5 + 0x18);
            uVar13 = *(undefined8 *)(iVar5 + 0x20);
            param_2[0x14] = *(undefined4 *)(iVar5 + 0x10);
            param_2[0x1a] = uVar1;
            param_2[0x15] = uVar6;
            param_2[0x16] = uVar7;
            *(undefined8 *)(param_2 + 0x18) = uVar13;
          }
          if (iVar11 != 0xb) goto LAB_00521ef4;
        }
        if (uVar12 == 0) {
          lwmutex_lock_checked(param_1 + 0x188);
          iVar11 = *(int *)(param_1 + 0x1b8);
          *(int *)(param_3 + 0x2c) = iVar11;
          *(undefined1 *)(param_3 + 0x20) = 1;
          *(int *)(param_1 + 0x1b8) = iVar11 + 1;
          do {
            uVar13 = TBLr;
          } while ((int)uVar13 == 0);
          *(undefined8 *)(param_3 + 0x10) = uVar13;
          lwmutex_unlock_checked(param_1 + 0x188);
          return;
        }
LAB_00521efc:
        if (uVar12 == 0) {
          puVar4 = *(undefined4 **)(param_3 + 0x38);
          uVar1 = *(undefined4 *)(param_1 + 0x160);
          *(undefined4 *)(*(int *)(param_3 + 0x24) + 4) = 0x80010708;
          (*(code *)*puVar4)(param_1,uVar1,3,param_3);
        }
        else {
          puVar4 = *(undefined4 **)(param_3 + 0x38);
          uVar1 = *(undefined4 *)(param_1 + 0x160);
          *(undefined4 *)(*(int *)(param_3 + 0x24) + 4) = 0;
          (*(code *)*puVar4)(param_1,uVar1,2,param_3);
          (*(code *)**(undefined4 **)(param_3 + 0x38))
                    (param_1,*(undefined4 *)(param_1 + 0x160),3,param_3);
        }
        return;
      }
    }
  } while( true );
}


// 0x0522104 (0x3a0 bytes)
// strings: 00522214: '}+Kxy)' (raw)

void FUN_00522104(int param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  bool bVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  char cVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined4 *puVar14;
  int iVar15;
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
  bVar6 = false;
  iVar15 = 0;
  iVar2 = *(int *)(param_1 + 0x178);
  if (iVar2 != 0) {
    iVar12 = 0;
    iVar11 = 0;
    iVar15 = 0;
    do {
      while( true ) {
        iVar13 = *(int *)(param_1 + 0x1b4);
        if (*(int *)(iVar11 * 0x40 + *(int *)(param_1 + 0x234) + 0xc) == 0) break;
        iVar15 = iVar15 + 1;
LAB_00522184:
        iVar12 = iVar12 + 1;
        iVar11 = iVar11 + 1;
        if (iVar2 == iVar12) goto LAB_00522274;
      }
      puVar5 = (undefined4 *)(param_1 + 0x210);
      puVar14 = (undefined4 *)*puVar5;
      bVar1 = puVar14 == (undefined4 *)0x0;
      if (bVar1) break;
      if (puVar14[0x10] == 0xd) {
        iVar9 = param_1 + 0x138;
        while (iVar4 = puVar14[0x28], lwmutex_lock_checked(iVar9), *(int *)(iVar4 + 0x54) != 0
              ) {
          puVar14 = (undefined4 *)*puVar14;
          bVar1 = puVar14 == (undefined4 *)0x0;
          if (bVar1) {
            lwmutex_unlock_checked(iVar9);
            goto LAB_005221e4;
          }
          if (puVar14[0x10] != 0xd) break;
          lwmutex_unlock_checked(iVar9);
        }
        lwmutex_unlock_checked(iVar9);
      }
      do {
        if ((puVar14[0xc] & 0x200) == 0) break;
        puVar14 = (undefined4 *)*puVar14;
        bVar1 = puVar14 == (undefined4 *)0x0;
      } while (!bVar1);
LAB_005221e4:
      if (iVar13 == iVar12) {
        if (!bVar1) {
          iVar13 = 0;
          uVar3 = puVar14[7];
          while( true ) {
            if ((((uVar3 & 2) == 0) && (cVar10 = FUN_0051daac(param_1,puVar14), cVar10 != '\0')) &&
               ((puVar14[0xc] & 0x200) == 0)) goto LAB_005221ec;
            bVar1 = iVar13 == 0xf;
            iVar13 = iVar13 + 1;
            if (bVar1) break;
            puVar14 = (undefined4 *)*puVar14;
            bVar1 = puVar14 == (undefined4 *)0x0;
            if (bVar1) break;
            uVar3 = puVar14[7];
          }
        }
        goto LAB_00522184;
      }
LAB_005221ec:
      if (bVar1) goto LAB_00522184;
      puVar8 = (undefined4 *)*puVar5;
      while (puVar7 = puVar8, puVar14 != puVar7) {
        if (puVar7 == (undefined4 *)0x0) goto LAB_00522244;
        puVar5 = puVar7;
        puVar8 = (undefined4 *)*puVar7;
      }
      *puVar5 = *puVar14;
      *puVar14 = 0;
LAB_00522244:
      iVar12 = iVar12 + 1;
      iVar15 = iVar15 + 1;
      FUN_00521d8c(param_1,puVar14,iVar11 * 0x40 + *(int *)(param_1 + 0x234));
      bVar6 = true;
      iVar11 = iVar11 + 1;
    } while (iVar2 != iVar12);
  }
LAB_00522274:
  instructionSynchronize();
  if (((*(int *)(param_1 + 0x1c8) == 0) && (iVar15 == 0)) && (*(int *)(param_1 + 0x214) != 0)) {
    puVar5 = *(undefined4 **)(param_1 + 0x214);
    puVar14 = (undefined4 *)0x0;
    if (puVar5 != (undefined4 *)0x0) {
      *(undefined4 *)(param_1 + 0x214) = *puVar5;
      *puVar5 = 0;
      puVar14 = puVar5;
    }
    FUN_00521d8c(param_1,puVar14,*(undefined4 *)(param_1 + 0x234));
  }
  else if (!bVar6) {
    return;
  }
  lwmutex_lock_checked(param_1 + 0x188);
  iVar2 = *(int *)(param_1 + 0x178);
  if (iVar2 != 0) {
    iVar15 = 0;
    do {
      while( true ) {
        iVar11 = iVar15 * 0x40;
        iVar15 = iVar15 + 1;
        iVar11 = iVar11 + *(int *)(param_1 + 0x234);
        if (*(char *)(iVar11 + 0x20) == '\0') break;
        FUN_0052dcf0(*(undefined4 *)(iVar11 + 8));
        if (iVar2 == iVar15) goto LAB_005222f4;
      }
    } while (iVar2 != iVar15);
  }
LAB_005222f4:
  lwmutex_unlock_checked(param_1 + 0x188);
  return;
}


// 0x05224a4 (0x23c bytes)
// strings: 0052250c: '}+Kxy)' (raw)

/* WARNING: Removing unreachable block (ram,0x00522abc) */
/* WARNING: Removing unreachable block (ram,0x00522ae4) */
/* WARNING: Removing unreachable block (ram,0x00522ae8) */
/* WARNING: Removing unreachable block (ram,0x00522acc) */
/* WARNING: Removing unreachable block (ram,0x00522ad0) */

void FUN_005224a4(int param_1,undefined4 *param_2,int *param_3)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
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
  bVar1 = -1 < (int)((((int)param_2 >> 0x1f ^ (uint)param_2) - ((int)param_2 >> 0x1f)) + -1);
  if (bVar1) {
    puVar5 = *(undefined4 **)(param_1 + 0x218);
    puVar4 = (undefined4 *)(param_1 + 0x218);
    while (puVar3 = puVar5, param_2 != puVar3) {
      if (puVar3 == (undefined4 *)0x0) goto LAB_00522528;
      puVar4 = puVar3;
      puVar5 = (undefined4 *)*puVar3;
    }
    if (param_2 != (undefined4 *)0x0) {
      *puVar4 = *param_2;
      *param_2 = 0;
    }
  }
LAB_00522528:
  iVar2 = param_2[0x10];
  if ((((iVar2 - 10U < 2) || (iVar2 == 6)) || (iVar2 == 7)) || (iVar2 == 0x11)) {
    *(longlong *)(param_2 + 0x2c) = *(longlong *)(param_2 + 0x2c) + *(longlong *)(param_2 + 0x22);
  }
  if ((param_2[0x28] != 0) && (*param_3 - 10U < 2)) {
    lwmutex_lock_checked(param_1 + 0x138);
    *(int *)(param_2[0x28] + 0x54) = *(int *)(param_2[0x28] + 0x54) + -1;
    lwmutex_unlock_checked(param_1 + 0x138);
  }
  if (0xb < (uint)param_2[0x34]) {
    param_2[7] = param_2[7] | 0x400;
    if ((*(uint *)(PTR_DAT_0071ab10 + 0x18) & 1) != 0) {
      _ZN4cell4fios5watch22ReportEventOpCompletedEPKNS0_2opE(param_2);
    }
    param_2[0x34] = 1;
    lwmutex_lock_checked(param_1 + 0x78);
    if (bVar1) {
      *param_2 = *(undefined4 *)(param_1 + 0x21c);
      *(undefined4 *)(param_1 + 0x21c) = param_2;
    }
    lwmutex_unlock_checked(param_1 + 0x78);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x005225a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(PTR_DAT_0071aba4 + *(int *)(PTR_DAT_0071aba4 + param_2[0x34] * 4)))(param_3[1]);
  return;
}


// SDK libfios.a(fios_scheduler.ppu.o): cell::fios::scheduler::cancelImmediately(cell::fios::op*)  [exact match]
// 0x0522b14 (0x13c bytes)
void FUN_00522b14(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  puVar4 = param_2 + 0x10;
  if (param_2 != (undefined4 *)0x0) {
    do {
      puVar1 = (undefined4 *)*param_2;
      *param_2 = 0;
      uVar2 = *(undefined4 *)(param_1 + 0x218);
      param_2[0x11] = 0x80010708;
      *param_2 = uVar2;
      *(undefined4 *)(param_1 + 0x218) = param_2;
      FUN_005224a4(param_1,param_2,puVar4);
      if ((param_2[7] & 0x400) != 0) {
        lwmutex_unlock_checked(param_1 + 0x38);
        uVar3 = param_2[0xc];
        instructionSynchronize();
        _ZN4cell4fios2op8callbackEhPv(param_2,1,0);
        if ((uVar3 & 0x100) != 0) {
          FUN_0051fd24(param_1,param_2);
        }
        lwmutex_lock_checked(param_1 + 0x38);
      }
      puVar4 = puVar1 + 0x10;
      param_2 = puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  return;
}


// 0x0522c50 (0x228 bytes)
void * FUN_00522c50(void *param_1)

{
  char cVar1;
  int iVar2;
  uint *puVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  void *pvVar6;
  uint uVar7;
  uint *puVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong unaff_r23;
  longlong lVar13;
  ulonglong unaff_r24;
  ulonglong uVar14;
  ulonglong unaff_r25;
  uint *puVar15;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  uint *puVar16;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  
  uVar5 = ZEXT48(&stack0x00000000);
  puVar4 = (ulonglong *)(uVar5 - 0xd0);
  *puVar4 = uVar5;
  puVar4[0x1c] = in_LR;
  iVar2 = *(int *)((int)param_1 + 0x160);
  puVar4[0x11] = unaff_r23;
  puVar4[0x12] = unaff_r24;
  puVar4[0x13] = unaff_r25;
  puVar4[0x14] = unaff_r26;
  uVar7 = *(uint *)(iVar2 + 0x88);
  puVar15 = (uint *)0x0;
  puVar4[0x15] = unaff_r27;
  pvVar6 = *(void **)((int)param_1 + 0x1fc);
  puVar4[0x16] = unaff_r28;
  puVar4[0x17] = unaff_r29;
  puVar4[0x18] = unaff_r30;
  puVar4[0x19] = unaff_r31;
  lVar13 = (uVar5 - 0xd0) - ((ulonglong)uVar7 + 0x1e & 0xfffffffffffffff0);
  *(ulonglong *)lVar13 = *puVar4;
  uVar9 = lVar13 + 0x70;
  lVar13 = 0;
  pvVar6 = memcpy((void *)uVar9,pvVar6,uVar7);
  lVar10 = *(longlong *)((int)param_1 + 0x1f0);
  lVar12 = *(longlong *)((int)param_1 + 0x200);
  *(undefined1 *)(puVar4 + 0xe) = 0x80;
  puVar3 = (uint *)((int)param_1 + 0x210);
  uVar7 = *puVar3;
  puVar4[0xf] = lVar12 + lVar10;
  *(undefined4 *)((int)puVar4 + 0x74) = 0;
  uVar14 = 0;
  puVar16 = puVar3;
  if (uVar7 == 0) {
    puVar15 = (uint *)0x0;
    uVar14 = 0;
    uVar5 = 1;
  }
  else {
    do {
      while( true ) {
        puVar8 = (uint *)*puVar16;
        pvVar6 = param_1;
        if (puVar8 == (uint *)0x0) goto LAB_00522d98;
        if ((puVar8[0xc] & 0x200) == 0) break;
        *puVar16 = *puVar8;
        *puVar8 = (int)uVar14;
        uVar14 = ZEXT48(puVar8);
      }
      cVar1 = *(char *)(puVar4 + 0xe);
      uVar7 = FUN_0051d33c(param_1,puVar8,uVar5 - 0x60,uVar5 - 0x5c,uVar5 - 0x58,uVar9 & 0xffffffff)
      ;
      pvVar6 = (void *)(uVar7 & 0xff);
      if (pvVar6 == (void *)0x0) {
        puVar8 = (uint *)*puVar16;
        uVar11 = puVar4[0xf];
      }
      else {
        puVar8 = (uint *)*puVar16;
        uVar11 = puVar4[0xf];
        if (((cVar1 != *(char *)(puVar4 + 0xe)) ||
            (lVar13 < (longlong)(uVar11 - *(longlong *)(puVar8 + 2)))) || (puVar3 == puVar15)) {
          lVar13 = uVar11 - *(longlong *)(puVar8 + 2);
          puVar15 = puVar16;
        }
      }
      *(ulonglong *)(puVar8 + 0x32) = uVar11;
      puVar16 = puVar8;
    } while (*puVar8 != 0);
LAB_00522d98:
    uVar5 = (ulonglong)((int)uVar14 >> 0x1f);
    uVar5 = (((uVar5 ^ uVar14) - uVar5) + -1 << 0x20) >> 0x3f;
  }
  if ((puVar15 != puVar3) && (puVar15 != (uint *)0x0)) {
    puVar3 = (uint *)*puVar15;
    *puVar15 = *puVar3;
    *puVar3 = 0;
    pvVar6 = (void *)FUN_0051d588(param_1,puVar3);
  }
  if (uVar5 == 0) {
    pvVar6 = (void *)FUN_00522b14(param_1,uVar14);
  }
  return pvVar6;
}


// SDK libfios.a(fios_scheduler.ppu.o): cell::fios::scheduler::iterateOps(void (*)(void*, cell::fios::op*), void*)  [exact match]
// 0x0522e78 (0x354 bytes)
// strings: 005231a8: '} Kxy)' (raw)

void FUN_00522e78(int param_1,undefined4 *param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  uint *puVar3;
  ulonglong uVar4;
  uint ****ppppuVar5;
  uint ****ppppuVar6;
  uint uVar7;
  uint ****ppppuVar8;
  char cVar9;
  uint *puVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  char in_RESERVE;
  byte in_cr0;
  byte in_cr1;
  byte in_cr2;
  byte in_cr3;
  byte unaff_cr4;
  byte in_cr5;
  byte in_cr6;
  byte in_cr7;
  uint uStack00000008;
  uint ***local_70 [6];
  
  uStack00000008 =
       (uint)(in_cr0 & 0xf) << 0x1c | (uint)(in_cr1 & 0xf) << 0x18 | (uint)(in_cr2 & 0xf) << 0x14 |
       (uint)(in_cr3 & 0xf) << 0x10 | (uint)(unaff_cr4 & 0xf) << 0xc | (uint)(in_cr5 & 0xf) << 8 |
       (uint)(in_cr6 & 0xf) << 4 | (uint)(in_cr7 & 0xf);
  cVar9 = FUN_00604788(param_1);
  if (cVar9 != '\0') {
    puVar10 = (uint *)(param_1 + 0x20c);
    uVar4 = ZEXT48(puVar10);
    lwmutex_lock_checked(param_1 + 0x38);
    lwmutex_lock_checked(param_1 + 0x78);
    do {
      uVar1 = *puVar10;
      uVar11 = (ulonglong)uVar1;
      instructionSynchronize();
      do {
        uVar7 = *puVar10;
        if (uVar1 != *puVar10) break;
        if (in_RESERVE != '\0') {
          uVar7 = storeWordConditionalIndexed(0,0,uVar4);
          *puVar10 = uVar7;
          in_cr0 = 2;
        }
        uVar7 = uVar1;
      } while ((in_cr0 & 2) == 0);
    } while (uVar1 != uVar7);
    uVar12 = uVar11;
    if (uVar1 != 0) {
      do {
        puVar3 = (uint *)uVar12;
        check_magic(uVar12);
        (*(code *)*param_2)(param_3,uVar12);
        uVar12 = (ulonglong)*puVar3;
      } while (*puVar3 != 0);
      if (uVar1 != 0) {
        do {
          while (*puVar10 != 0) {
            do {
              local_70[0] = (uint ***)*puVar10;
              instructionSynchronize();
              do {
                ppppuVar8 = (uint ****)*puVar10;
                if ((uint ****)local_70[0] != (uint ****)*puVar10) break;
                if (in_RESERVE != '\0') {
                  uVar1 = storeWordConditionalIndexed(0,0,uVar4);
                  *puVar10 = uVar1;
                  in_cr0 = 2;
                }
                ppppuVar8 = (uint ****)local_70[0];
              } while ((in_cr0 & 2) == 0);
            } while ((uint ****)local_70[0] != ppppuVar8);
            if ((uint ***)uVar11 != (uint ***)0x0) {
              ppppuVar6 = (uint ****)local_70[0];
              ppppuVar8 = local_70;
              while (ppppuVar5 = ppppuVar6, ppppuVar5 != (uint ****)0x0) {
                ppppuVar8 = ppppuVar5;
                ppppuVar6 = (uint ****)*ppppuVar5;
              }
              *ppppuVar8 = (uint ***)uVar11;
            }
            uVar11 = ZEXT48(local_70[0]);
          }
          if (in_RESERVE != '\0') {
            uVar1 = storeWordConditionalIndexed(uVar11,0,uVar4);
            *puVar10 = uVar1;
            in_cr0 = 2;
          }
        } while ((in_cr0 & 2) == 0);
      }
    }
    for (puVar2 = *(undefined4 **)(param_1 + 0x210); puVar2 != (undefined4 *)0x0;
        puVar2 = (undefined4 *)*puVar2) {
      check_magic(puVar2);
      (*(code *)*param_2)(param_3,puVar2);
    }
    for (puVar2 = *(undefined4 **)(param_1 + 0x214); puVar2 != (undefined4 *)0x0;
        puVar2 = (undefined4 *)*puVar2) {
      check_magic(puVar2);
      (*(code *)*param_2)(param_3,puVar2);
    }
    for (puVar2 = *(undefined4 **)(param_1 + 0x218); puVar2 != (undefined4 *)0x0;
        puVar2 = (undefined4 *)*puVar2) {
      check_magic(puVar2);
      (*(code *)*param_2)(param_3,puVar2);
    }
    for (puVar2 = *(undefined4 **)(param_1 + 0x21c); puVar2 != (undefined4 *)0x0;
        puVar2 = (undefined4 *)*puVar2) {
      check_magic(puVar2);
      (*(code *)*param_2)(param_3,puVar2);
    }
    lwmutex_unlock_checked(param_1 + 0x78);
    lwmutex_unlock_checked(param_1 + 0x38);
  }
  return;
}


// SDK libfios.a(fios_scheduler.ppu.o): cell::fios::scheduler::cancelAllOps(bool)  [exact match]
// 0x05231cc (0x6c bytes)
void FUN_005231cc(undefined8 param_1,undefined1 param_2)

{
  char cVar1;
  
  cVar1 = FUN_00604788();
  if (cVar1 != '\0') {
    FUN_00522e78(param_1,PTR_PTR_0071aba8,param_2);
    return;
  }
  return;
}


// 0x0523238 (0x594 bytes)
void FUN_00523238(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  longlong lVar9;
  int iVar10;
  int iVar12;
  longlong lVar11;
  uint *puVar13;
  char in_RESERVE;
  byte in_cr0;
  double dVar14;
  ulonglong uVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  
  FUN_00604788(param_1);
  iVar12 = *(int *)(param_1 + 0x234);
  if (*(uint *)(param_1 + 0x178) != 0) {
    uVar15 = (ulonglong)*(uint *)(param_1 + 0x178);
    iVar10 = *(int *)(iVar12 + 4);
    iVar2 = iVar12;
    while (iVar12 = iVar2, iVar10 != param_2) {
      iVar12 = iVar2 + 0x40;
      uVar15 = uVar15 - 1;
      if (uVar15 == 0) break;
      iVar10 = *(int *)(iVar2 + 0x44);
      iVar2 = iVar12;
    }
  }
  iVar10 = param_1 + 0x188;
  dVar16 = (double)DAT_0071ab28;
  dVar18 = *(double *)PTR_DAT_0071ab1c;
  dVar17 = dVar16;
  while( true ) {
    lwmutex_lock_checked(iVar10);
    while ((*(char *)(param_1 + 0x1b0) != '\0' && (*(char *)(iVar12 + 0x20) == '\0'))) {
      FUN_0052e49c(*(undefined4 *)(iVar12 + 8),iVar10,0);
      FUN_00604788(param_1);
    }
    lwmutex_unlock_checked(iVar10);
    piVar1 = *(int **)(iVar12 + 0x24);
    if ((piVar1 != (int *)0x0) && (*(char *)(iVar12 + 0x20) != '\0')) break;
LAB_00523568:
    if (*(char *)(param_1 + 0x1b0) == '\0') {
      return;
    }
  }
  iVar2 = *(int *)(iVar12 + 0xc);
  if (*(int *)(iVar12 + 0x34) != 0) {
    memset(*(int *)(iVar12 + 0x34),0,
                 ((ulonglong)*(uint *)(*(int *)(param_1 + 0x160) + 0x8c) & 0x3fffffff) << 2);
    piVar1 = *(int **)(iVar12 + 0x24);
  }
  iVar3 = *piVar1;
  if ((((iVar3 - 10U < 2) || (iVar3 == 6)) || (iVar3 == 7)) ||
     (((iVar3 == 0x11 || (iVar3 == 8)) || (iVar3 == 0xd)))) {
    iVar3 = *(int *)(iVar12 + 0x2c);
    *(ushort *)(piVar1 + 0x15) =
         (ushort)*(undefined4 *)(iVar2 + 0x1c) & 0x30fe | *(ushort *)(piVar1 + 0x15);
    instructionSynchronize();
    if (iVar3 != *(int *)(param_1 + 0x1bc)) goto LAB_005235f8;
  }
  else {
    while (instructionSynchronize(), *(int *)(iVar12 + 0x2c) != *(int *)(param_1 + 0x1bc)) {
LAB_005235f8:
      do {
        lVar11 = TBLr;
      } while ((int)lVar11 == 0);
      dVar14 = dVar18 * (double)DAT_0071abac;
      if (dVar16 <= dVar14) {
        uVar15 = (longlong)(dVar14 - dVar16) ^ 0x8000000000000000;
      }
      else {
        uVar15 = (ulonglong)dVar14;
      }
      FUN_0052e984(lVar11 + uVar15);
    }
  }
  puVar13 = (uint *)(param_1 + 0x1bc);
  if (1 < *(uint *)(param_1 + 0x178)) {
    do {
      lVar11 = TBLr;
    } while ((int)lVar11 == 0);
    dVar14 = dVar18 * (double)DAT_0071abb0;
    if (dVar17 <= dVar14) {
      uVar15 = (longlong)(dVar14 - dVar17) ^ 0x8000000000000000;
    }
    else {
      uVar15 = (ulonglong)dVar14;
    }
    iVar2 = -0x98;
    if (0 < (longlong)uVar15) {
      iVar2 = -0xa0;
    }
    instructionSynchronize();
    if (lVar11 <= *(longlong *)(param_1 + 0x1c0) + *(longlong *)(&stack0x00000000 + iVar2)) {
      FUN_0052e984();
      iVar2 = **(int **)(iVar12 + 0x24);
      goto joined_r0x00523648;
    }
  }
  iVar2 = **(int **)(iVar12 + 0x24);
joined_r0x00523648:
  if (iVar2 == 0x11) {
    instructionSynchronize();
    if (*(int *)(param_1 + 0x1e0) == 0) {
      lVar11 = *(longlong *)(param_1 + 0x1d0);
    }
    else {
      lVar11 = *(longlong *)(param_1 + 0x1d8);
    }
    if (lVar11 != 0) {
      instructionSynchronize();
      if (((*(int *)(param_1 + 0x224) == 1) &&
          (instructionSynchronize(), *(int *)(param_1 + 0x20c) == 0)) &&
         (*(int *)(param_1 + 0x210) == 0)) {
        do {
          lVar9 = TBLr;
        } while ((int)lVar9 == 0);
        FUN_0052e984(lVar11 + lVar9);
      }
      instructionSynchronize();
      if (((*(int *)(param_1 + 0x224) != 1) ||
          (instructionSynchronize(), *(int *)(param_1 + 0x20c) != 0)) ||
         (*(int *)(param_1 + 0x210) != 0)) {
        do {
          uVar4 = *puVar13;
          instructionSynchronize();
          while (uVar4 == *puVar13) {
            if (in_RESERVE != '\0') {
              uVar8 = storeWordConditionalIndexed((ulonglong)uVar4 + 1,0,ZEXT48(puVar13));
              *puVar13 = uVar8;
              in_cr0 = 2;
            }
            if ((in_cr0 & 2) != 0) {
              *(undefined1 *)(iVar12 + 0x20) = 0;
              (*(code *)**(undefined4 **)(iVar12 + 0x38))
                        (*(undefined4 *)(iVar12 + 0x3c),*(undefined4 *)(param_1 + 0x160),2,iVar12);
              iVar2 = *(int *)(iVar12 + 0x24);
              puVar5 = *(undefined4 **)(iVar12 + 0x38);
              uVar6 = *(undefined4 *)(iVar12 + 0x3c);
              uVar7 = *(undefined4 *)(param_1 + 0x160);
              *(undefined4 *)(iVar2 + 4) = 0;
              *(undefined8 *)(iVar2 + 0x48) = 0;
              (*(code *)*puVar5)(uVar6,uVar7,3,iVar12);
              goto LAB_00523568;
            }
          }
        } while( true );
      }
    }
    sync(1);
    *(int *)(param_1 + 0x1e0) = 1;
  }
  else {
    sync(1);
    *(undefined4 *)(param_1 + 0x1e0) = 0;
  }
  do {
    lVar11 = TBLr;
  } while ((int)lVar11 == 0);
  sync(1);
  *(longlong *)(param_1 + 0x1c0) = lVar11;
  do {
    uVar4 = *puVar13;
    instructionSynchronize();
    while (uVar4 == *puVar13) {
      if (in_RESERVE != '\0') {
        uVar8 = storeWordConditionalIndexed((ulonglong)uVar4 + 1,0,ZEXT48(puVar13));
        *puVar13 = uVar8;
        in_cr0 = 2;
      }
      if ((in_cr0 & 2) != 0) {
        *(undefined1 *)(iVar12 + 0x20) = 0;
        (*(code *)**(undefined4 **)(iVar12 + 0x38))
                  (*(undefined4 *)(iVar12 + 0x3c),*(undefined4 *)(param_1 + 0x160),2,iVar12);
        (*(code *)**(undefined4 **)(**(int **)(param_1 + 0x160) + 0x14))
                  (*(int **)(param_1 + 0x160),iVar12);
        (*(code *)**(undefined4 **)(iVar12 + 0x38))
                  (*(undefined4 *)(iVar12 + 0x3c),*(undefined4 *)(param_1 + 0x160),3,iVar12);
        goto LAB_00523568;
      }
    }
  } while( true );
}


// 0x05237cc (0x10 bytes)
void FUN_005237cc(undefined8 param_1,undefined8 param_2)

{
  FUN_00523238(param_2,param_1);
  return;
}


// SDK libfios.a(fios_scheduler.ppu.o): cell::fios::scheduler::resume(char const*)  [exact match]
// 0x05237dc (0xe4 bytes)
void FUN_005237dc(int param_1,undefined4 param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  char in_RESERVE;
  byte in_cr0;
  undefined4 uStack00000038;
  
  uStack00000038 = param_2;
  cVar4 = FUN_00604788(param_1);
  if (cVar4 != '\0') {
    puVar1 = (uint *)(param_1 + 0x180);
    instructionSynchronize();
    if (*puVar1 != 0) {
      lwmutex_lock_checked(param_1 + 0xe0);
      do {
        uVar2 = *puVar1;
        instructionSynchronize();
        while (uVar2 == *puVar1) {
          if (in_RESERVE != '\0') {
            uVar3 = storeWordConditionalIndexed((ulonglong)uVar2 - 1,0,ZEXT48(puVar1));
            *puVar1 = uVar3;
            in_cr0 = 2;
          }
          if ((in_cr0 & 2) != 0) {
            FUN_0052dcf0(param_1 + 0x108);
            lwmutex_unlock_checked(param_1 + 0xe0);
            return;
          }
        }
      } while( true );
    }
  }
  return;
}


// 0x05238c0 (0x694 bytes)
// strings: 00667b88: 'Scheduler shutting down\n' | 00667ba8: '  Total ops completed: %d\n' | 00667bc8: '  Ops completed by overlap: %d\n' | 00667be8: '  Emax = %lld ms\n' | 00667c00: '  Variables:\n' | 00667c10: '  %s = %lld us\n'

void FUN_005238c0(undefined4 *param_1)

{
  int iVar1;
  undefined *puVar2;
  char cVar6;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 uVar5;
  ulonglong uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  double dVar12;
  ulonglong uVar13;
  double dVar14;
  double dVar15;
  
  *param_1 = PTR_PTR_0071ab34;
  FUN_00604788(param_1);
  if (*PTR_PTR_0071ab7c == '\0') {
    _ZN4cell4fios8platform10FIOSprintfEPKcz(PTR_s_Scheduler_shutting_down_0071ab80);
    instructionSynchronize();
    _ZN4cell4fios8platform10FIOSprintfEPKcz(PTR_s_Total_ops_completed___d_0071ab84,param_1[0x8a]);
    _ZN4cell4fios8platform10FIOSprintfEPKcz(PTR_s_Ops_completed_by_overlap___d_0071ab88,param_1[0x8c]);
    dVar15 = *(double *)PTR_DAT_0071ab1c;
    dVar12 = (double)*(longlong *)(param_1 + 0x7c) / dVar15;
    if ((double)DAT_0071ab28 <= dVar12) {
      uVar13 = (longlong)(dVar12 - (double)DAT_0071ab28) ^ 0x8000000000000000;
    }
    else {
      uVar13 = (ulonglong)dVar12;
    }
    _ZN4cell4fios8platform10FIOSprintfEPKcz(PTR_s_Emax____lld_ms_0071ab8c,(longlong)(uVar13 + 999999) / 1000000);
    _ZN4cell4fios8platform10FIOSprintfEPKcz(PTR_s_Variables__0071ab90);
    puVar2 = PTR_s__s____lld_us_0071ab94;
    piVar4 = (int *)param_1[0x58];
    if (piVar4[0x23] != 0) {
      dVar12 = (double)DAT_0071ab28;
      uVar13 = 0;
      do {
        uVar5 = (*(code *)**(undefined4 **)(*piVar4 + 0xc))(piVar4,uVar13 & 0xffffffff);
        dVar14 = (double)*(longlong *)((int)((uVar13 & 0xffffffff) << 3) + param_1[0x7b]) / dVar15;
        if (dVar14 < dVar12) {
          uVar7 = (ulonglong)dVar14;
        }
        else {
          uVar7 = (longlong)(dVar14 - dVar12) ^ 0x8000000000000000;
        }
        _ZN4cell4fios8platform10FIOSprintfEPKcz(puVar2,uVar5,(longlong)(uVar7 + 999) / 1000);
        piVar4 = (int *)param_1[0x58];
        uVar7 = uVar13 + 1;
        uVar13 = uVar13 + 1;
      } while ((uVar7 & 0xffffffff) < (ulonglong)(uint)piVar4[0x23]);
    }
  }
  else {
    piVar4 = (int *)param_1[0x58];
  }
  cVar6 = FUN_00604710(piVar4);
  if ((cVar6 != '\0') && (puVar3 = (undefined4 *)FUN_0051a480(param_1[0x58]), param_1 == puVar3)) {
    FUN_0051b318(param_1[0x58],0);
  }
  if (*(char *)(param_1 + 0x33) != '\0') {
    FUN_0052ced8(param_1 + 0x28);
  }
  iVar9 = param_1[0x7e];
  if (iVar9 != 0) {
    piVar4 = (int *)FUN_0051cba4(param_1);
    (*(code *)**(undefined4 **)(*piVar4 + 4))(piVar4,iVar9,0x10180103,0,0);
  }
  iVar9 = param_1[0x7b];
  if (iVar9 != 0) {
    piVar4 = (int *)FUN_0051cba4(param_1);
    (*(code *)**(undefined4 **)(*piVar4 + 4))(piVar4,iVar9,0x10170103,0,0);
  }
  puVar3 = param_1 + 0x62;
  if (param_1[0x8d] != 0) {
    lwmutex_lock_checked(puVar3);
    iVar9 = param_1[0x5e];
    *(undefined1 *)(param_1 + 0x6c) = 0;
    if (iVar9 != 0) {
      iVar11 = 0;
      do {
        iVar1 = iVar11 * 0x40;
        iVar11 = iVar11 + 1;
        FUN_0052dcf0(*(undefined4 *)(iVar1 + param_1[0x8d] + 8));
      } while (iVar9 != iVar11);
    }
    lwmutex_unlock_checked(puVar3);
    uVar10 = param_1[0x5e];
    if (uVar10 == 0) {
      iVar9 = param_1[0x8d];
    }
    else {
      uVar8 = 0;
      iVar9 = param_1[0x8d];
      do {
        uVar13 = (ulonglong)uVar8;
        uVar8 = uVar8 + 1;
        iVar1 = (int)((uVar13 & 0x3ffffff) << 6);
        iVar11 = *(int *)(iVar1 + iVar9 + 4);
        if (iVar11 != 0) {
          FUN_0052ced8(iVar11);
          FUN_0052d018(*(undefined4 *)(iVar1 + param_1[0x8d] + 4));
          FUN_0052d0e8(*(undefined4 *)(iVar1 + param_1[0x8d] + 8));
          iVar9 = param_1[0x8d];
        }
      } while (uVar10 != uVar8);
    }
    piVar4 = (int *)FUN_0051cba4(param_1);
    (*(code *)**(undefined4 **)(*piVar4 + 4))(piVar4,iVar9,0x10160103,0,0);
  }
  iVar9 = param_1[0x5c];
  if (iVar9 != 0) {
    if (param_1[0x5a] != 0) {
      uVar10 = 0;
      do {
        uVar10 = uVar10 + 1;
        check_magic(iVar9);
        handle_destroy(iVar9);
        iVar9 = iVar9 + 0x58;
      } while (uVar10 < (uint)param_1[0x5a]);
      iVar9 = param_1[0x5c];
    }
    piVar4 = (int *)FUN_0051cba4(param_1);
    (*(code *)**(undefined4 **)(*piVar4 + 4))(piVar4,iVar9,0x10140103,0,0);
  }
  iVar9 = param_1[0x5b];
  if (iVar9 != 0) {
    if (param_1[0x59] != 0) {
      uVar10 = 0;
      do {
        uVar10 = uVar10 + 1;
        check_magic(iVar9);
        iVar9 = iVar9 + 0xe8;
      } while (uVar10 < (uint)param_1[0x59]);
      iVar9 = param_1[0x5b];
    }
    piVar4 = (int *)FUN_0051cba4(param_1);
    (*(code *)**(undefined4 **)(*piVar4 + 4))(piVar4,iVar9,0x10130103,0,0);
  }
  FUN_0052df14(puVar3);
  FUN_0052df14(param_1 + 0x4e);
  FUN_0052d0e8(param_1 + 0x48);
  FUN_0052d0e8(param_1 + 0x42);
  FUN_0052df14(param_1 + 0x38);
  FUN_0052d018(param_1 + 0x28);
  FUN_0052df14(param_1 + 0x1e);
  FUN_0052e5f8(param_1 + 0x18);
  FUN_0052df14(param_1 + 0xe);
  FUN_0052df14(param_1 + 4);
  handle_invalidate_magic(param_1 + 1);
  FUN_00510704(param_1,0x10100100,3);
  return;
}


// 0x0523f54 (0x190 bytes)
undefined4 FUN_00523f54(int param_1,undefined8 param_2,int param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  uint *puVar5;
  undefined4 uVar6;
  char in_RESERVE;
  byte in_cr0;
  
  uVar6 = 0x80010707;
  if ((param_3 - 2U & 0xff) < 2) {
    check_magic(*(undefined4 *)(param_4 + 0xc));
    puVar4 = PTR_DAT_0071ab10;
    if (param_3 != 2) {
      FUN_00604788(param_1);
      puVar5 = (uint *)(param_1 + 0x1e4);
      do {
        uVar1 = *puVar5;
        instructionSynchronize();
        while (uVar1 == *puVar5) {
          if (in_RESERVE != '\0') {
            uVar2 = storeWordConditionalIndexed((ulonglong)uVar1 + 1,0,ZEXT48(puVar5));
            *puVar5 = uVar2;
            in_cr0 = 2;
          }
          if ((in_cr0 & 2) != 0) {
            lwmutex_lock_checked(param_1 + 0x38);
            do {
              uVar3 = TBLr;
            } while ((int)uVar3 == 0);
            *(undefined8 *)(param_4 + 0x18) = uVar3;
            lwmutex_lock_checked(param_1 + 0xe0);
            *(undefined1 *)(param_1 + 0x17c) = 1;
            FUN_0052dcf0(param_1 + 0x108);
            lwmutex_unlock_checked(param_1 + 0xe0);
            lwmutex_unlock_checked(param_1 + 0x38);
            return 0;
          }
        }
      } while( true );
    }
    do {
      uVar3 = TBLr;
    } while ((int)uVar3 == 0);
    uVar6 = 0;
    *(undefined8 *)(param_4 + 0x10) = uVar3;
    if ((*(uint *)(puVar4 + 0x18) & 1) != 0) {
      FUN_0052757c(*(undefined4 *)(param_4 + 0xc));
      uVar6 = 0;
    }
  }
  return uVar6;
}


// SDK libfios.a(fios_scheduler.ppu.o): cell::fios::scheduler::closeAllFiles()  [exact match]
// 0x05240e4 (0xd4 bytes)
void FUN_005240e4(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar3 = param_1 + 0x10;
  lwmutex_lock_checked(iVar3);
  piVar1 = (int *)(param_1 + 0x23c);
  iVar2 = *piVar1;
  while (iVar2 != 0) {
    *piVar1 = *(int *)(iVar2 + 0xc);
    *(undefined4 *)(iVar2 + 0xc) = 0;
    lwmutex_unlock_checked(iVar3);
    uVar4 = filehandle_close_setup(param_1,0,iVar2);
    _ZN4cell4fios2op8syncWaitEPx(uVar4,0);
    lwmutex_lock_checked(iVar3);
    iVar2 = *piVar1;
  }
  lwmutex_unlock_checked(iVar3);
  return;
}


// 0x05241b8 (0xe90 bytes)
// strings: 00667e10: "Scheduler thread can't shut down. Resources still allocated:\n" | 00667cd8: '  %d ops still in prefetch queue (cancelling)\n' | 00667d08: '  access paths for prefetch ops: ' | 00667cc8: "'%s' " | 00667d30: '  %d ops still executing\n' | 00667d50: '  access paths for executing ops: ' | 00667d78: '  %d open filehandles\n' | 00667d90: '  files currently open: ' | 00667db0: '  %d ops complete but not yet deleted (might be leaks)\n' | 00667de8: '  access paths for completed ops: ' | 00524dcc: '}`[xx\t' (raw) | 00524e6c: '} Kxy)' (raw) | 00667c78: '  %d ops still in schedule queue\n' | 00667ca0: '  access paths for scheduled ops: '

void FUN_005241b8(int param_1)

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  void *__src;
  undefined4 *puVar5;
  ulonglong *puVar6;
  int iVar7;
  uint *puVar8;
  undefined *puVar9;
  int *piVar10;
  int *piVar11;
  undefined *puVar12;
  int *piVar13;
  int iVar14;
  uint uVar15;
  uint *puVar16;
  char cVar17;
  int iVar18;
  char *pcVar19;
  uint *puVar20;
  uint uVar21;
  int iVar22;
  int *piVar23;
  int iVar26;
  ulonglong uVar24;
  uint uVar28;
  uint uVar29;
  ulonglong uVar25;
  ulonglong unaff_r14;
  longlong lVar30;
  ulonglong unaff_r15;
  ulonglong uVar31;
  ulonglong unaff_r16;
  ulonglong unaff_r17;
  ulonglong unaff_r18;
  ulonglong unaff_r19;
  ulonglong unaff_r20;
  int *piVar32;
  ulonglong unaff_r21;
  ulonglong unaff_r22;
  ulonglong unaff_r23;
  int *piVar33;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong uVar34;
  ulonglong unaff_r27;
  uint uVar35;
  ulonglong unaff_r28;
  longlong lVar36;
  ulonglong uVar37;
  ulonglong unaff_r29;
  longlong lVar38;
  uint uVar40;
  ulonglong uVar39;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  char in_RESERVE;
  byte in_cr0;
  byte in_cr1;
  byte in_cr2;
  byte in_cr3;
  byte bVar41;
  byte unaff_cr4;
  byte in_cr5;
  byte in_cr6;
  byte in_cr7;
  ulonglong in_LR;
  double dVar42;
  double dVar43;
  double dVar44;
  uint local_100 [64];
  uint *puVar27;
  
  lVar1 = ZEXT48(&stack0x00000000) - 0x170;
  puVar6 = (ulonglong *)lVar1;
  *puVar6 = ZEXT48(&stack0x00000000);
  puVar6[0x26] = unaff_r24;
  puVar6[0x21] = unaff_r19;
  puVar6[0x27] = unaff_r25;
  puVar6[0x2d] = unaff_r31;
  puVar6[0x1c] = unaff_r14;
  puVar6[0x1d] = unaff_r15;
  puVar6[0x1e] = unaff_r16;
  puVar6[0x1f] = unaff_r17;
  puVar6[0x20] = unaff_r18;
  puVar6[0x22] = unaff_r20;
  puVar6[0x23] = unaff_r21;
  puVar6[0x24] = unaff_r22;
  puVar6[0x25] = unaff_r23;
  puVar6[0x28] = unaff_r26;
  puVar6[0x29] = unaff_r27;
  puVar6[0x2a] = unaff_r28;
  puVar6[0x2b] = unaff_r29;
  puVar6[0x2c] = unaff_r30;
  *(uint *)(puVar6 + 0x2f) =
       (uint)(in_cr0 & 0xf) << 0x1c | (uint)(in_cr1 & 0xf) << 0x18 | (uint)(in_cr2 & 0xf) << 0x14 |
       (uint)(in_cr3 & 0xf) << 0x10 | (uint)(unaff_cr4 & 0xf) << 0xc | (uint)(in_cr5 & 0xf) << 8 |
       (uint)(in_cr6 & 0xf) << 4 | (uint)(in_cr7 & 0xf);
  puVar6[0x30] = in_LR;
  FUN_00604788(param_1);
  do {
    lVar30 = TBLr;
  } while ((int)lVar30 == 0);
  dVar43 = (double)DAT_0071ab28;
  uVar4 = *(uint *)(param_1 + 0x178);
  dVar44 = *(double *)PTR_DAT_0071ab1c;
  dVar42 = dVar44 * (double)DAT_0071abb4;
  if (dVar43 <= dVar42) {
    puVar6[0x12] = (longlong)(dVar42 - dVar43);
    puVar6[0x12] = puVar6[0x12] ^ 0x8000000000000000;
  }
  else {
    puVar6[0x12] = (longlong)dVar42;
  }
  dVar44 = dVar44 * (double)DAT_0071abb8;
  if (dVar43 <= dVar44) {
    puVar6[0x1a] = (longlong)(dVar44 - dVar43);
    puVar6[0xf] = puVar6[0x1a] ^ 0x8000000000000000;
  }
  else {
    puVar6[0xf] = (longlong)dVar44;
  }
  lVar36 = ((ulonglong)uVar4 & 0x3fffffff) * 4;
  lVar38 = -(lVar36 + 0x1eU & 0xfffffffffffffff0);
  *(int *)((int)puVar6 + 0x9c) = param_1 + 0x214;
  *(int *)(puVar6 + 0x14) = param_1 + 0x218;
  lVar1 = lVar1 + lVar38;
  *(ulonglong *)lVar1 = *puVar6;
  *(int *)(puVar6 + 0x15) = param_1 + 0x23c;
  *(int *)((int)puVar6 + 0xa4) = param_1 + 0x21c;
  memset(lVar1 + 0x70U & 0xffffffff,0,lVar36);
  lVar38 = lVar1 + lVar38;
  *(ulonglong *)lVar38 = *(ulonglong *)lVar1;
  uVar31 = lVar38 + 0x70;
  *(int *)(puVar6 + 0x17) = param_1 + 0x20c;
  memset(uVar31 & 0xffffffff,0,lVar36);
  iVar14 = param_1 + 0xe0;
  lVar38 = 0;
  piVar32 = (int *)(param_1 + 0x210);
  puVar6[0x16] = (ulonglong)(param_1 + 0x38);
  puVar6[0x18] = (ulonglong)(param_1 + 0x78);
  bVar41 = (uVar4 == 0) << 1;
  do {
    bVar2 = lVar38 < lVar30;
    bVar3 = lVar30 < lVar38;
    FUN_00604788(param_1);
    lwmutex_lock_checked(iVar14);
    cVar17 = FUN_0051cbc8(param_1);
    if (cVar17 == '\0') goto LAB_0052439c;
LAB_005247d0:
    FUN_0052dcf0(param_1 + 0x120);
LAB_0052439c:
    while (cVar17 = FUN_0051cbec(param_1), cVar17 == '\0') {
      if (bVar2) {
        do {
          lVar38 = TBLr;
        } while ((int)lVar38 == 0);
        bVar2 = lVar38 < lVar30;
        bVar3 = lVar30 < lVar38;
      }
      FUN_0052e49c(param_1 + 0x108,iVar14,0);
      FUN_00604788(param_1);
    }
    lwmutex_unlock_checked(iVar14);
    if (bVar3) {
      do {
        lVar30 = TBLr;
      } while ((int)lVar30 == 0);
    }
    lwmutex_lock_checked(puVar6[0x16]);
    *(undefined1 *)(param_1 + 0x17c) = 0;
    instructionSynchronize();
    *(undefined4 *)(param_1 + 0x1e8) = *(undefined4 *)(param_1 + 0x1e4);
    iVar18 = (int)(lVar1 + 0x70U);
    if ((bool)(bVar41 >> 1 & 1)) {
      FUN_00522104(param_1);
LAB_00524d30:
      lwmutex_unlock_checked(puVar6[0x16]);
      if (!(bool)(bVar41 >> 1 & 1)) {
LAB_00524660:
        uVar40 = 0;
        iVar22 = 0;
        do {
          piVar23 = (int *)(iVar22 + iVar18);
          iVar26 = *piVar23;
          if (iVar26 != 0) {
            uVar15 = *(uint *)(iVar26 + 0x30);
            instructionSynchronize();
            _ZN4cell4fios2op8callbackEhPv(iVar26,1,0);
            if ((uVar15 & 0x100) != 0) {
              FUN_0051fd24(param_1,iVar26);
            }
            *piVar23 = 0;
          }
          uVar40 = uVar40 + 1;
          iVar22 = iVar22 + 4;
        } while (uVar40 < uVar4);
      }
    }
    else {
      uVar40 = 0;
      bVar2 = false;
      lVar36 = 0;
      iVar22 = 0;
      do {
        iVar7 = (int)(((ulonglong)uVar40 & 0x3ffffff) << 6);
        iVar26 = iVar7 + *(int *)(param_1 + 0x234);
        if (((*(int *)(iVar26 + 0xc) != 0) && (*(int *)(iVar26 + 0x24) != 0)) &&
           (*(longlong *)(iVar26 + 0x18) != 0)) {
          FUN_0051cc60(param_1,*(undefined4 *)(iVar26 + 0x34),
                       *(longlong *)(iVar26 + 0x18) - *(longlong *)(iVar26 + 0x10));
          iVar26 = *(int *)(param_1 + 0x234);
          __src = *(void **)(iVar7 + iVar26 + 0x30);
          if ((__src != (void *)0x0) && (lVar36 < *(longlong *)(iVar7 + iVar26 + 0x18))) {
            memcpy(*(void **)(param_1 + 0x1f8),__src,
                         *(size_t *)(*(int *)(param_1 + 0x160) + 0x88));
            iVar26 = iVar7 + *(int *)(param_1 + 0x234);
            lVar36 = *(longlong *)(iVar26 + 0x18);
            memcpy(*(void **)(param_1 + 0x1fc),*(void **)(iVar26 + 0x30),
                         *(size_t *)(*(int *)(param_1 + 0x160) + 0x88));
            iVar26 = *(int *)(param_1 + 0x234);
          }
          piVar23 = *(int **)(iVar7 + iVar26 + 0x24);
          if (((piVar23[1] == 0) && ((*piVar23 == 10 || (*piVar23 == 6)))) &&
             ((*(ushort *)(piVar23 + 0x15) & 0x20) == 0)) {
            bVar2 = true;
            *(undefined4 *)(iVar22 + (int)uVar31) = *(undefined4 *)(iVar7 + iVar26 + 0xc);
          }
          FUN_005224a4(param_1,*(undefined4 *)(iVar7 + iVar26 + 0xc),
                       *(undefined4 *)(iVar7 + iVar26 + 0x24));
          iVar7 = iVar7 + *(int *)(param_1 + 0x234);
          if ((*(uint *)(*(int *)(iVar7 + 0xc) + 0x1c) & 0x400) != 0) {
            *(int *)(iVar22 + iVar18) = *(int *)(iVar7 + 0xc);
          }
          puVar20 = (uint *)(param_1 + 0x224);
          *(undefined8 *)(iVar7 + 0x18) = 0;
          *(undefined4 *)(iVar7 + 0xc) = 0;
          *(undefined4 *)(iVar7 + 0x24) = 0;
          *(undefined8 *)(iVar7 + 0x10) = 0;
          do {
            uVar15 = *puVar20;
            instructionSynchronize();
            while (uVar15 == *puVar20) {
              if (in_RESERVE != '\0') {
                uVar35 = storeWordConditionalIndexed((ulonglong)uVar15 - 1,0,ZEXT48(puVar20));
                *puVar20 = uVar35;
                in_cr0 = 2;
              }
              if ((in_cr0 & 2) != 0) goto joined_r0x00524548;
            }
          } while( true );
        }
joined_r0x00524548:
        iVar22 = iVar22 + 4;
        uVar40 = uVar40 + 1;
      } while (uVar4 != uVar40);
      FUN_00522104(param_1);
      if (!bVar2) goto LAB_00524d30;
      piVar23 = (int *)*piVar32;
      iVar22 = 1;
      piVar33 = piVar32;
      if (piVar23 != (int *)0x0) {
        do {
          if (!(bool)(bVar41 >> 1 & 1)) {
            uVar40 = 0;
            uVar37 = uVar31;
            do {
              if ((*(int *)uVar37 != 0) &&
                 (cVar17 = FUN_0051c554(piVar23,*(int *)uVar37), cVar17 != '\0')) {
                *(int *)(param_1 + 0x230) = *(int *)(param_1 + 0x230) + 1;
                piVar13 = (int *)*piVar32;
                piVar11 = piVar32;
                while( true ) {
                  piVar10 = piVar13;
                  if (piVar10 == piVar23) {
                    *piVar11 = *piVar23;
                    *piVar23 = 0;
                    *piVar23 = *piVar33;
                    *piVar33 = (int)piVar23;
                    piVar33 = piVar23;
                    goto LAB_00524618;
                  }
                  if (piVar10 == (int *)0x0) break;
                  piVar13 = (int *)*piVar10;
                  piVar11 = piVar10;
                }
              }
              uVar40 = uVar40 + 1;
              uVar37 = uVar37 + 4;
            } while (uVar4 != uVar40);
          }
LAB_00524618:
          piVar23 = (int *)*piVar23;
        } while ((piVar23 != (int *)0x0) && (bVar2 = iVar22 != 0x20, iVar22 = iVar22 + 1, bVar2));
      }
      if (!(bool)(bVar41 >> 1 & 1)) {
        uVar37 = (ulonglong)uVar4;
        uVar24 = uVar31;
        do {
          *(undefined4 *)uVar24 = 0;
          uVar37 = uVar37 - 1;
          uVar24 = uVar24 + 4;
        } while (uVar37 != 0);
        lwmutex_unlock_checked(puVar6[0x16]);
        goto LAB_00524660;
      }
      lwmutex_unlock_checked(puVar6[0x16]);
    }
    lwmutex_lock_checked(puVar6[0x16]);
    FUN_00604788(param_1);
    if (*(int *)(param_1 + 0x1e8) == *(int *)(param_1 + 0x1e4)) {
      puVar20 = *(uint **)(puVar6 + 0x17);
      uVar37 = ZEXT48(puVar20);
      do {
        uVar40 = *puVar20;
        instructionSynchronize();
        do {
          uVar15 = *puVar20;
          if (uVar40 != *puVar20) break;
          if (in_RESERVE != '\0') {
            uVar15 = storeWordConditionalIndexed(0,0,uVar37);
            *puVar20 = uVar15;
            in_cr0 = 2;
          }
          uVar15 = uVar40;
        } while ((in_cr0 & 2) == 0);
      } while (uVar40 != uVar15);
      uVar24 = 0;
      uVar34 = 0;
      uVar39 = (ulonglong)uVar40;
      if (uVar40 == 0) goto LAB_00524744;
      while( true ) {
        puVar27 = (uint *)uVar39;
        if (puVar27 == (uint *)0x0) break;
        uVar40 = *puVar27;
        *puVar27 = 0;
        if ((puVar27[0xc] & 0x200) == 0) {
          *puVar27 = (uint)uVar24;
          uVar24 = uVar39;
          uVar39 = (ulonglong)uVar40;
        }
        else {
          *puVar27 = (uint)uVar34;
          uVar34 = uVar39;
          uVar39 = (ulonglong)uVar40;
        }
      }
      do {
        puVar27 = (uint *)uVar24;
        if (puVar27 == (uint *)0x0) goto LAB_00524860;
        uVar40 = *puVar27;
        *puVar27 = 0;
        FUN_0051d588(param_1,uVar24);
        uVar24 = (ulonglong)uVar40;
      } while (*(int *)(param_1 + 0x1e8) == *(int *)(param_1 + 0x1e4));
      if (uVar40 != 0) {
        do {
          uVar25 = uVar24;
          uVar40 = *(uint *)uVar25;
          *(uint *)uVar25 = (uint)uVar39;
          uVar24 = (ulonglong)uVar40;
          uVar39 = uVar25;
        } while (uVar40 != 0);
        do {
          uVar40 = *puVar20;
          while (uVar40 == 0) {
            if (in_RESERVE != '\0') {
              uVar40 = storeWordConditionalIndexed(uVar25,0,uVar37);
              *puVar20 = uVar40;
              in_cr0 = 2;
            }
            if ((in_cr0 & 2) != 0) goto LAB_00524860;
            uVar40 = *puVar20;
          }
          do {
            puVar27 = (uint *)*puVar20;
            instructionSynchronize();
            do {
              puVar16 = (uint *)*puVar20;
              if (puVar27 != (uint *)*puVar20) break;
              if (in_RESERVE != '\0') {
                uVar40 = storeWordConditionalIndexed(0,0,uVar37);
                *puVar20 = uVar40;
                in_cr0 = 2;
              }
              puVar16 = puVar27;
            } while ((in_cr0 & 2) == 0);
          } while (puVar27 != puVar16);
          *(uint **)(puVar6 + 0xe) = puVar27;
          if ((uint)uVar25 != 0) {
            puVar16 = local_100;
            while (puVar8 = puVar27, puVar8 != (uint *)0x0) {
              puVar16 = puVar8;
              puVar27 = (uint *)*puVar8;
            }
            *puVar16 = (uint)uVar25;
          }
          uVar25 = (ulonglong)*(uint *)(puVar6 + 0xe);
        } while( true );
      }
LAB_00524860:
      if ((uint)uVar34 == 0) goto LAB_00524744;
      FUN_00522b14(param_1,uVar34);
      FUN_00522104(param_1);
      FUN_00522c50(param_1);
      lwmutex_lock_checked(iVar14);
      lwmutex_lock_checked(puVar6[0x18]);
      iVar18 = *(int *)(param_1 + 0x184);
      instructionSynchronize();
    }
    else {
LAB_00524744:
      FUN_00522104(param_1);
      FUN_00522c50(param_1);
      lwmutex_lock_checked(iVar14);
      lwmutex_lock_checked(puVar6[0x18]);
      iVar18 = *(int *)(param_1 + 0x184);
      instructionSynchronize();
    }
    if (iVar18 != 0) {
      bVar2 = lVar38 < lVar30;
      bVar3 = lVar30 < lVar38;
      lwmutex_unlock_checked(puVar6[0x18]);
      lwmutex_unlock_checked(iVar14);
      lwmutex_unlock_checked(puVar6[0x16]);
      FUN_00604788(param_1);
      lwmutex_lock_checked(iVar14);
      cVar17 = FUN_0051cbc8(param_1);
      if (cVar17 != '\0') goto LAB_005247d0;
      goto LAB_0052439c;
    }
    iVar18 = *(int *)(param_1 + 0x20c);
    uVar37 = (ulonglong)((int)**(uint **)((int)puVar6 + 0x9c) >> 0x1f);
    uVar40 = (int)**(uint **)(puVar6 + 0x14) >> 0x1f;
    lVar36 = ((uVar37 ^ **(uint **)((int)puVar6 + 0x9c)) - uVar37) + -1 << 0x20;
    uVar28 = ((uVar40 ^ **(uint **)(puVar6 + 0x14)) - uVar40) - 1;
    instructionSynchronize();
    uVar40 = (int)**(uint **)(puVar6 + 0x15) >> 0x1f;
    uVar15 = (int)**(uint **)((int)puVar6 + 0xa4) >> 0x1f;
    uVar21 = ((uVar40 ^ **(uint **)(puVar6 + 0x15)) - uVar40) - 1;
    uVar29 = ((uVar15 ^ **(uint **)((int)puVar6 + 0xa4)) - uVar15) - 1;
    uVar15 = uVar28 >> 0x1f;
    uVar40 = uVar29 >> 0x1f;
    uVar35 = uVar21 >> 0x1f;
    if (*piVar32 == 0) {
      if (lVar36 < 0) {
        uVar15 = -((int)uVar28 >> 0x1f);
        iVar22 = -((int)uVar29 >> 0x1f);
        *(int *)(puVar6 + 0x13) = iVar22;
        uVar35 = -((int)uVar21 >> 0x1f);
        if ((((uVar15 != 0) && (iVar22 != 0)) && (iVar18 == 0)) && (uVar35 != 0)) {
          lwmutex_unlock_checked(puVar6[0x18]);
          lwmutex_unlock_checked(iVar14);
          lwmutex_unlock_checked(puVar6[0x16]);
          return;
        }
      }
      else {
        *(uint *)(puVar6 + 0x13) = uVar40;
      }
      _ZN4cell4fios8platform10FIOSprintfEPKcz(PTR_s_Scheduler_thread_can_t_shut_down_0071abec);
    }
    else {
      _ZN4cell4fios8platform10FIOSprintfEPKcz(PTR_s_Scheduler_thread_can_t_shut_down_0071abec);
      piVar23 = (int *)*piVar32;
      iVar18 = 0;
      if (piVar23 != (int *)0x0) {
        iVar18 = 0;
        do {
          iVar18 = iVar18 + 1;
          piVar23 = (int *)*piVar23;
        } while (piVar23 != (int *)0x0);
      }
      _ZN4cell4fios8platform10FIOSprintfEPKcz(PTR_s__d_ops_still_in_schedule_queue_0071abbc,iVar18);
      puVar5 = (undefined4 *)*piVar32;
      _ZN4cell4fios8platform10FIOSprintfEPKcz(PTR_s_access_paths_for_scheduled_ops__0071abc0);
      puVar12 = PTR_s___s__0071abc4;
      puVar9 = PTR_DAT_0071abc8;
      for (; PTR_DAT_0071abc8 = puVar9, puVar5 != (undefined4 *)0x0; puVar5 = (undefined4 *)*puVar5)
      {
        pcVar19 = (char *)0x0;
        if (*(char *)puVar5[0xd] != '\0') {
          pcVar19 = (char *)puVar5[0xd];
        }
        _ZN4cell4fios8platform10FIOSprintfEPKcz(puVar12,pcVar19);
        puVar9 = PTR_DAT_0071abc8;
      }
      *(uint *)(puVar6 + 0x13) = uVar40;
      _ZN4cell4fios8platform10FIOSprintfEPKcz(puVar9);
    }
    if (-1 < lVar36) {
      iVar18 = 0;
      for (puVar5 = (undefined4 *)**(undefined4 **)((int)puVar6 + 0x9c); puVar5 != (undefined4 *)0x0
          ; puVar5 = (undefined4 *)*puVar5) {
        iVar18 = iVar18 + 1;
      }
      _ZN4cell4fios8platform10FIOSprintfEPKcz(PTR_s__d_ops_still_in_prefetch_queue___0071abcc,iVar18);
      puVar5 = (undefined4 *)**(undefined4 **)((int)puVar6 + 0x9c);
      _ZN4cell4fios8platform10FIOSprintfEPKcz(PTR_s_access_paths_for_prefetch_ops__0071abd0);
      puVar9 = PTR_s___s__0071abc4;
      for (; puVar5 != (undefined4 *)0x0; puVar5 = (undefined4 *)*puVar5) {
        pcVar19 = (char *)0x0;
        if (*(char *)puVar5[0xd] != '\0') {
          pcVar19 = (char *)puVar5[0xd];
        }
        _ZN4cell4fios8platform10FIOSprintfEPKcz(puVar9,pcVar19);
      }
      _ZN4cell4fios8platform10FIOSprintfEPKcz(PTR_DAT_0071abc8);
    }
    if (uVar15 == 0) {
      iVar18 = 0;
      for (puVar5 = (undefined4 *)**(undefined4 **)(puVar6 + 0x14); puVar5 != (undefined4 *)0x0;
          puVar5 = (undefined4 *)*puVar5) {
        iVar18 = iVar18 + 1;
      }
      _ZN4cell4fios8platform10FIOSprintfEPKcz(PTR_s__d_ops_still_executing_0071abd4,iVar18);
      puVar5 = (undefined4 *)**(undefined4 **)(puVar6 + 0x14);
      _ZN4cell4fios8platform10FIOSprintfEPKcz(PTR_s_access_paths_for_executing_ops__0071abd8);
      puVar9 = PTR_s___s__0071abc4;
      for (; puVar5 != (undefined4 *)0x0; puVar5 = (undefined4 *)*puVar5) {
        pcVar19 = (char *)0x0;
        if (*(char *)puVar5[0xd] != '\0') {
          pcVar19 = (char *)puVar5[0xd];
        }
        _ZN4cell4fios8platform10FIOSprintfEPKcz(puVar9,pcVar19);
      }
      _ZN4cell4fios8platform10FIOSprintfEPKcz(PTR_DAT_0071abc8);
    }
    if (uVar35 == 0) {
      iVar22 = 0;
      for (iVar18 = **(int **)(puVar6 + 0x15); iVar18 != 0; iVar18 = *(int *)(iVar18 + 0xc)) {
        iVar22 = iVar22 + 1;
      }
      _ZN4cell4fios8platform10FIOSprintfEPKcz(PTR_s__d_open_filehandles_0071abdc,iVar22);
      iVar18 = **(int **)(puVar6 + 0x15);
      _ZN4cell4fios8platform10FIOSprintfEPKcz(PTR_s_files_currently_open__0071abe0);
      puVar9 = PTR_s___s__0071abc4;
      for (; iVar18 != 0; iVar18 = *(int *)(iVar18 + 0xc)) {
        pcVar19 = (char *)0x0;
        if (**(char **)(iVar18 + 0x30) != '\0') {
          pcVar19 = *(char **)(iVar18 + 0x30);
        }
        _ZN4cell4fios8platform10FIOSprintfEPKcz(puVar9,pcVar19);
      }
      _ZN4cell4fios8platform10FIOSprintfEPKcz(PTR_DAT_0071abc8);
    }
    if (*(int *)(puVar6 + 0x13) == 0) {
      iVar18 = 0;
      for (puVar5 = (undefined4 *)**(undefined4 **)((int)puVar6 + 0xa4); puVar5 != (undefined4 *)0x0
          ; puVar5 = (undefined4 *)*puVar5) {
        iVar18 = iVar18 + 1;
      }
      _ZN4cell4fios8platform10FIOSprintfEPKcz(PTR_s__d_ops_complete_but_not_yet_dele_0071abe4,iVar18);
      puVar5 = (undefined4 *)**(undefined4 **)((int)puVar6 + 0xa4);
      _ZN4cell4fios8platform10FIOSprintfEPKcz(PTR_s_access_paths_for_completed_ops__0071abe8);
      puVar9 = PTR_s___s__0071abc4;
      for (; puVar5 != (undefined4 *)0x0; puVar5 = (undefined4 *)*puVar5) {
        pcVar19 = (char *)0x0;
        if (*(char *)puVar5[0xd] != '\0') {
          pcVar19 = (char *)puVar5[0xd];
        }
        _ZN4cell4fios8platform10FIOSprintfEPKcz(puVar9,pcVar19);
      }
      _ZN4cell4fios8platform10FIOSprintfEPKcz(PTR_DAT_0071abc8);
    }
    piVar23 = (int *)**(undefined4 **)((int)puVar6 + 0x9c);
joined_r0x00524c28:
    if (piVar23 != (int *)0x0) {
      puVar20 = (uint *)(piVar23 + 0xc);
      **(int **)((int)puVar6 + 0x9c) = *piVar23;
      *piVar23 = 0;
      do {
        uVar40 = *puVar20;
        instructionSynchronize();
        while (uVar40 == *puVar20) {
          if (in_RESERVE != '\0') {
            uVar15 = storeWordConditionalIndexed((ulonglong)uVar40 | 0x200,0,ZEXT48(puVar20));
            *puVar20 = uVar15;
            in_cr0 = 2;
          }
          if ((in_cr0 & 2) != 0) {
            puVar5 = *(undefined4 **)((int)puVar6 + 0x9c);
            *piVar23 = *piVar32;
            *piVar32 = (int)piVar23;
            piVar23 = (int *)*puVar5;
            goto joined_r0x00524c28;
          }
        }
      } while( true );
    }
    lwmutex_unlock_checked(puVar6[0x18]);
    lwmutex_unlock_checked(iVar14);
    lwmutex_unlock_checked(puVar6[0x16]);
    do {
      lVar36 = TBLr;
    } while ((int)lVar36 == 0);
    FUN_0052e984(puVar6[0x12] + lVar36);
    iVar18 = -0xf0;
    uVar37 = puVar6[0x12] * 3;
    uVar37 = ((longlong)uVar37 >> 1) + (ulonglong)((longlong)uVar37 < 0 && (uVar37 & 1) != 0);
    puVar6[0x10] = uVar37;
    if ((longlong)puVar6[0xf] <= (longlong)uVar37) {
      iVar18 = -0xf8;
    }
    puVar6[0x12] = *(ulonglong *)(&stack0x00000000 + iVar18);
  } while( true );
}


// 0x0525048 (0x8 bytes)
void FUN_00525048(undefined8 param_1,undefined8 param_2)

{
  FUN_005241b8(param_2);
  return;
}


// SDK libfios.a(fios_scheduler.ppu.o): cell::fios::scheduler::rescheduleOp(cell::fios::op*, long long, signed char)  [exact match]
// 0x0525050 (0x134 bytes)
// strings: 00525104: '}+Kxy)' (raw)

void FUN_00525050(int param_1,undefined4 *param_2,undefined8 param_3,undefined1 param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  char cVar4;
  
  cVar4 = FUN_00604788(param_1);
  if ((cVar4 != '\0') && (cVar4 = check_magic(param_2), cVar4 != '\0')) {
    lwmutex_lock_checked(param_1 + 0x38);
    if (param_2 != (undefined4 *)0x0) {
      puVar3 = *(undefined4 **)(param_1 + 0x210);
      puVar2 = (undefined4 *)(param_1 + 0x210);
      while (puVar1 = puVar3, param_2 != puVar1) {
        if (puVar1 == (undefined4 *)0x0) goto LAB_00525148;
        puVar2 = puVar1;
        puVar3 = (undefined4 *)*puVar1;
      }
      if (param_2 != (undefined4 *)0x0) {
        *(undefined8 *)(param_2 + 2) = param_3;
        *puVar2 = *param_2;
        *(undefined1 *)(param_2 + 4) = param_4;
        *param_2 = 0;
        FUN_0051ff58(param_1,param_2);
      }
    }
LAB_00525148:
    lwmutex_unlock_checked(param_1 + 0x38);
  }
  return;
}


// SDK libfios.a(fios_scheduler.ppu.o): cell::fios::scheduler::getEstimatedCompletion(cell::fios::op const*) const  [exact match]
// 0x0525184 (0x98 bytes)
undefined8 FUN_00525184(int param_1,int param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_00604788(param_1);
  uVar2 = 0;
  if (cVar1 != '\0') {
    cVar1 = check_magic(param_2);
    if (cVar1 != '\0') {
      lwmutex_lock_checked(param_1 + 0x38);
      uVar2 = *(undefined8 *)(param_2 + 200);
      lwmutex_unlock_checked(param_1 + 0x38);
    }
  }
  return uVar2;
}


// 0x052521c (0x308 bytes)
undefined4
read_req_setup
          (int param_1,int param_2,int param_3,undefined4 param_4,longlong param_5,longlong param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  char cVar7;
  undefined4 uVar6;
  char *pcVar8;
  undefined8 uVar9;
  byte in_cr0;
  byte in_cr1;
  byte in_cr2;
  byte in_cr3;
  byte unaff_cr4;
  byte in_cr5;
  byte in_cr6;
  byte in_cr7;
  uint uStack00000008;
  undefined8 local_70;
  
  uStack00000008 =
       (uint)(in_cr0 & 0xf) << 0x1c | (uint)(in_cr1 & 0xf) << 0x18 | (uint)(in_cr2 & 0xf) << 0x14 |
       (uint)(in_cr3 & 0xf) << 0x10 | (uint)(unaff_cr4 & 0xf) << 0xc | (uint)(in_cr5 & 0xf) << 8 |
       (uint)(in_cr6 & 0xf) << 4 | (uint)(in_cr7 & 0xf);
  iVar5 = op_alloc(param_1,param_2);
  uVar6 = 0;
  if (iVar5 != 0) {
    *(undefined4 *)(iVar5 + 0xc0) = param_4;
    *(undefined4 *)(iVar5 + 0x90) = param_4;
    *(longlong *)(iVar5 + 0x80) = param_5;
    *(longlong *)(iVar5 + 0xa8) = param_5;
    *(longlong *)(iVar5 + 0x70) = param_6;
    *(longlong *)(iVar5 + 0xb8) = param_6;
    cVar7 = check_magic(param_3);
    if ((cVar7 == '\0') || (*(int *)(param_3 + 8) != param_1)) {
      *(undefined4 *)(iVar5 + 0x44) = 0x80010706;
      uVar6 = op_complete_immediate(param_1,iVar5);
    }
    else if ((*(uint *)(param_3 + 0x50) & 1) == 0) {
      *(undefined4 *)(iVar5 + 0x44) = 0x8001070e;
      uVar6 = op_complete_immediate(param_1,iVar5);
    }
    else if (param_6 < -1) {
      *(undefined4 *)(iVar5 + 0x44) = 0x8001070b;
      uVar6 = op_complete_immediate(param_1,iVar5);
    }
    else if ((param_5 < 0) || ((param_2 != 0 && ((*(uint *)(param_2 + 0x14) & 0x3000) != 0)))) {
      *(undefined4 *)(iVar5 + 0x44) = 0x80010707;
      uVar6 = op_complete_immediate(param_1,iVar5);
    }
    else {
      lwmutex_lock_checked(param_1 + 0x138);
      if (param_6 == -1) {
        param_6 = *(longlong *)(param_3 + 0x40);
        if (param_5 + param_6 < *(longlong *)(param_3 + 0x48)) {
          *(undefined8 *)(param_3 + 0x40) = local_70;
        }
        else {
          *(longlong *)(param_3 + 0x40) = *(longlong *)(param_3 + 0x48);
        }
      }
      uVar3 = *(undefined4 *)(param_3 + 0x10);
      *(int *)(param_3 + 0x54) = *(int *)(param_3 + 0x54) + 1;
      uVar6 = *(undefined4 *)(param_3 + 0x28);
      uVar1 = *(undefined4 *)(param_3 + 0x14);
      uVar2 = *(undefined4 *)(param_3 + 0x18);
      uVar9 = *(undefined8 *)(param_3 + 0x20);
      lwmutex_unlock_checked(param_1 + 0x138);
      if ((*(uint *)(param_3 + 0x50) & 0x300) == 0) {
        pcVar4 = *(char **)(param_3 + 0x30);
        *(undefined4 *)(iVar5 + 0x40) = 10;
        *(undefined4 *)(iVar5 + 0xd0) = 1;
        cVar7 = *pcVar4;
      }
      else {
        pcVar4 = *(char **)(param_3 + 0x30);
        *(uint *)(iVar5 + 0x1c) = *(uint *)(iVar5 + 0x1c) | 0xe;
        *(undefined4 *)(iVar5 + 0xd0) = 1;
        *(undefined4 *)(iVar5 + 0x40) = 10;
        cVar7 = *pcVar4;
      }
      pcVar8 = (char *)0x0;
      if (cVar7 != '\0') {
        pcVar8 = pcVar4;
      }
      *(undefined4 *)(iVar5 + 0x4c) = *(undefined4 *)(param_3 + 0x34);
      *(int *)(iVar5 + 0xa0) = param_3;
      *(undefined4 *)(iVar5 + 0x50) = uVar3;
      *(undefined8 *)(iVar5 + 0x60) = uVar9;
      *(undefined4 *)(iVar5 + 0x68) = uVar6;
      *(char **)(iVar5 + 0x48) = pcVar8;
      *(undefined4 *)(iVar5 + 0x54) = uVar1;
      *(undefined4 *)(iVar5 + 0x58) = uVar2;
      *(longlong *)(iVar5 + 0xb8) = param_6;
      *(longlong *)(iVar5 + 0x70) = param_6;
      uVar6 = FUN_0051ff58(param_1,iVar5);
    }
  }
  return uVar6;
}


// SDK libfios.a(fios_scheduler.ppu.o): cell::fios::scheduler::writeFile(cell::fios::opattr_t const*, cell::fios::filehandle*, void const*, long long, long long)  [exact match]
// 0x0525524 (0x2d4 bytes)
undefined4
FUN_00525524(int param_1,undefined8 param_2,int param_3,undefined4 param_4,longlong param_5,
            longlong param_6)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  char cVar7;
  undefined4 uVar6;
  char *pcVar8;
  longlong *plVar9;
  undefined8 uVar10;
  longlong local_80 [2];
  
  iVar5 = _ZN4cell4fios9scheduler10allocateOpEPKNS0_8opattr_tE(param_1);
  uVar6 = 0;
  if (iVar5 != 0) {
    *(undefined4 *)(iVar5 + 0xc0) = param_4;
    *(undefined4 *)(iVar5 + 0x90) = param_4;
    *(longlong *)(iVar5 + 0x80) = param_5;
    *(longlong *)(iVar5 + 0xa8) = param_5;
    *(longlong *)(iVar5 + 0x70) = param_6;
    *(longlong *)(iVar5 + 0xb8) = param_6;
    cVar7 = check_magic(param_3);
    if ((cVar7 == '\0') || (*(int *)(param_3 + 8) != param_1)) {
      *(undefined4 *)(iVar5 + 0x44) = 0x80010706;
      uVar6 = _ZN4cell4fios9scheduler10completeOpEPNS0_2opE(param_1,iVar5);
    }
    else if (((((*(int *)(param_3 + 0x10) == *(int *)PTR_DAT_0071ab30) &&
               (*(int *)(param_3 + 0x14) == *(int *)(PTR_DAT_0071ab30 + 4))) &&
              (*(int *)(param_3 + 0x18) == *(int *)(PTR_DAT_0071ab30 + 8))) &&
             ((*(longlong *)(param_3 + 0x20) == *(longlong *)(PTR_DAT_0071ab30 + 0x10) &&
              (*(int *)(param_3 + 0x28) == *(int *)(PTR_DAT_0071ab30 + 0x18))))) ||
            ((*(uint *)(param_3 + 0x50) & 2) == 0)) {
      *(undefined4 *)(iVar5 + 0x44) = 0x80010710;
      uVar6 = _ZN4cell4fios9scheduler10completeOpEPNS0_2opE(param_1,iVar5);
    }
    else if (param_5 < 0) {
      *(undefined4 *)(iVar5 + 0x44) = 0x80010707;
      uVar6 = _ZN4cell4fios9scheduler10completeOpEPNS0_2opE(param_1,iVar5);
    }
    else {
      lwmutex_lock_checked(param_1 + 0x138);
      if (param_6 == -1) {
        param_6 = *(longlong *)(param_3 + 0x40);
        *(longlong *)(param_3 + 0x40) = param_5 + param_6;
      }
      uVar6 = *(undefined4 *)(param_3 + 0x28);
      iVar1 = *(int *)(param_3 + 0x10);
      uVar2 = *(undefined4 *)(param_3 + 0x14);
      uVar3 = *(undefined4 *)(param_3 + 0x18);
      uVar10 = *(undefined8 *)(param_3 + 0x20);
      if ((*(uint *)(param_3 + 0x50) & 2) != 0) {
        plVar9 = (longlong *)(param_3 + 0x48);
        local_80[0] = param_6 + param_5;
        if (*plVar9 < local_80[0]) {
          plVar9 = local_80;
        }
        *(longlong *)(param_3 + 0x48) = *plVar9;
      }
      *(int *)(param_3 + 0x54) = *(int *)(param_3 + 0x54) + 1;
      lwmutex_unlock_checked(param_1 + 0x138);
      pcVar4 = *(char **)(param_3 + 0x30);
      *(undefined4 *)(iVar5 + 0x40) = 0xb;
      pcVar8 = (char *)0x0;
      if (*pcVar4 != '\0') {
        pcVar8 = pcVar4;
      }
      *(undefined4 *)(iVar5 + 0x4c) = *(undefined4 *)(param_3 + 0x34);
      *(int *)(iVar5 + 0x50) = iVar1;
      *(undefined8 *)(iVar5 + 0x60) = uVar10;
      *(undefined4 *)(iVar5 + 0x68) = uVar6;
      *(int *)(iVar5 + 0xa0) = param_3;
      *(char **)(iVar5 + 0x48) = pcVar8;
      *(undefined4 *)(iVar5 + 0xd0) = 1;
      *(undefined4 *)(iVar5 + 0x54) = uVar2;
      *(undefined4 *)(iVar5 + 0x58) = uVar3;
      *(longlong *)(iVar5 + 0xb8) = param_6;
      *(longlong *)(iVar5 + 0x70) = param_6;
      uVar6 = FUN_0051ff58(param_1,iVar5);
    }
  }
  return uVar6;
}


// SDK libfios.a(fios_scheduler.ppu.o): cell::fios::scheduler::resumePrefetch(char const*)  [exact match]
// 0x05257f8 (0xd4 bytes)
void FUN_005257f8(int param_1,undefined4 param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  char in_RESERVE;
  byte in_cr0;
  undefined4 uStack00000038;
  
  uStack00000038 = param_2;
  cVar4 = FUN_00604788(param_1);
  if (cVar4 != '\0') {
    lwmutex_lock_checked(param_1 + 0xe0);
    puVar1 = (uint *)(param_1 + 0x1c8);
    instructionSynchronize();
    if (*puVar1 != 0) {
      do {
        uVar2 = *puVar1;
        instructionSynchronize();
        while (uVar2 == *puVar1) {
          if (in_RESERVE != '\0') {
            uVar3 = storeWordConditionalIndexed((ulonglong)uVar2 - 1,0,ZEXT48(puVar1));
            *puVar1 = uVar3;
            in_cr0 = 2;
          }
          if ((in_cr0 & 2) != 0) {
            *(undefined1 *)(param_1 + 0x17c) = 1;
            FUN_0052dcf0(param_1 + 0x108);
            goto LAB_005258a4;
          }
        }
      } while( true );
    }
LAB_005258a4:
    lwmutex_unlock_checked(param_1 + 0xe0);
  }
  return;
}


// 0x05258cc (0x67c bytes)
// strings: 00667b88: 'Scheduler shutting down\n' | 00667ba8: '  Total ops completed: %d\n' | 00667bc8: '  Ops completed by overlap: %d\n' | 00667be8: '  Emax = %lld ms\n' | 00667c00: '  Variables:\n' | 00667c10: '  %s = %lld us\n'

void FUN_005258cc(undefined4 *param_1)

{
  int iVar1;
  undefined *puVar2;
  char cVar6;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 uVar5;
  ulonglong uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  double dVar12;
  ulonglong uVar13;
  double dVar14;
  double dVar15;
  
  *param_1 = PTR_PTR_0071ab34;
  FUN_00604788(param_1);
  if (*PTR_PTR_0071ab7c == '\0') {
    _ZN4cell4fios8platform10FIOSprintfEPKcz(PTR_s_Scheduler_shutting_down_0071ab80);
    instructionSynchronize();
    _ZN4cell4fios8platform10FIOSprintfEPKcz(PTR_s_Total_ops_completed___d_0071ab84,param_1[0x8a]);
    _ZN4cell4fios8platform10FIOSprintfEPKcz(PTR_s_Ops_completed_by_overlap___d_0071ab88,param_1[0x8c]);
    dVar15 = *(double *)PTR_DAT_0071ab1c;
    dVar12 = (double)*(longlong *)(param_1 + 0x7c) / dVar15;
    if ((double)DAT_0071ab28 <= dVar12) {
      uVar13 = (longlong)(dVar12 - (double)DAT_0071ab28) ^ 0x8000000000000000;
    }
    else {
      uVar13 = (ulonglong)dVar12;
    }
    _ZN4cell4fios8platform10FIOSprintfEPKcz(PTR_s_Emax____lld_ms_0071ab8c,(longlong)(uVar13 + 999999) / 1000000);
    _ZN4cell4fios8platform10FIOSprintfEPKcz(PTR_s_Variables__0071ab90);
    puVar2 = PTR_s__s____lld_us_0071ab94;
    piVar4 = (int *)param_1[0x58];
    if (piVar4[0x23] != 0) {
      dVar12 = (double)DAT_0071ab28;
      uVar13 = 0;
      do {
        uVar5 = (*(code *)**(undefined4 **)(*piVar4 + 0xc))(piVar4,uVar13 & 0xffffffff);
        dVar14 = (double)*(longlong *)((int)((uVar13 & 0xffffffff) << 3) + param_1[0x7b]) / dVar15;
        if (dVar14 < dVar12) {
          uVar7 = (ulonglong)dVar14;
        }
        else {
          uVar7 = (longlong)(dVar14 - dVar12) ^ 0x8000000000000000;
        }
        _ZN4cell4fios8platform10FIOSprintfEPKcz(puVar2,uVar5,(longlong)(uVar7 + 999) / 1000);
        piVar4 = (int *)param_1[0x58];
        uVar7 = uVar13 + 1;
        uVar13 = uVar13 + 1;
      } while ((uVar7 & 0xffffffff) < (ulonglong)(uint)piVar4[0x23]);
    }
  }
  else {
    piVar4 = (int *)param_1[0x58];
  }
  cVar6 = FUN_00604710(piVar4);
  if ((cVar6 != '\0') && (puVar3 = (undefined4 *)FUN_0051a480(param_1[0x58]), param_1 == puVar3)) {
    FUN_0051b318(param_1[0x58],0);
  }
  if (*(char *)(param_1 + 0x33) != '\0') {
    FUN_0052ced8(param_1 + 0x28);
  }
  iVar9 = param_1[0x7e];
  if (iVar9 != 0) {
    piVar4 = (int *)FUN_0051cba4(param_1);
    (*(code *)**(undefined4 **)(*piVar4 + 4))(piVar4,iVar9,0x10180103,0,0);
  }
  iVar9 = param_1[0x7b];
  if (iVar9 != 0) {
    piVar4 = (int *)FUN_0051cba4(param_1);
    (*(code *)**(undefined4 **)(*piVar4 + 4))(piVar4,iVar9,0x10170103,0,0);
  }
  puVar3 = param_1 + 0x62;
  if (param_1[0x8d] != 0) {
    lwmutex_lock_checked(puVar3);
    iVar9 = param_1[0x5e];
    *(undefined1 *)(param_1 + 0x6c) = 0;
    if (iVar9 != 0) {
      iVar11 = 0;
      do {
        iVar1 = iVar11 * 0x40;
        iVar11 = iVar11 + 1;
        FUN_0052dcf0(*(undefined4 *)(iVar1 + param_1[0x8d] + 8));
      } while (iVar9 != iVar11);
    }
    lwmutex_unlock_checked(puVar3);
    uVar10 = param_1[0x5e];
    if (uVar10 == 0) {
      iVar9 = param_1[0x8d];
    }
    else {
      uVar8 = 0;
      iVar9 = param_1[0x8d];
      do {
        uVar13 = (ulonglong)uVar8;
        uVar8 = uVar8 + 1;
        iVar1 = (int)((uVar13 & 0x3ffffff) << 6);
        iVar11 = *(int *)(iVar1 + iVar9 + 4);
        if (iVar11 != 0) {
          FUN_0052ced8(iVar11);
          FUN_0052d018(*(undefined4 *)(iVar1 + param_1[0x8d] + 4));
          FUN_0052d0e8(*(undefined4 *)(iVar1 + param_1[0x8d] + 8));
          iVar9 = param_1[0x8d];
        }
      } while (uVar10 != uVar8);
    }
    piVar4 = (int *)FUN_0051cba4(param_1);
    (*(code *)**(undefined4 **)(*piVar4 + 4))(piVar4,iVar9,0x10160103,0,0);
  }
  iVar9 = param_1[0x5c];
  if (iVar9 != 0) {
    if (param_1[0x5a] != 0) {
      uVar10 = 0;
      do {
        uVar10 = uVar10 + 1;
        check_magic(iVar9);
        handle_destroy(iVar9);
        iVar9 = iVar9 + 0x58;
      } while (uVar10 < (uint)param_1[0x5a]);
      iVar9 = param_1[0x5c];
    }
    piVar4 = (int *)FUN_0051cba4(param_1);
    (*(code *)**(undefined4 **)(*piVar4 + 4))(piVar4,iVar9,0x10140103,0,0);
  }
  iVar9 = param_1[0x5b];
  if (iVar9 != 0) {
    if (param_1[0x59] != 0) {
      uVar10 = 0;
      do {
        uVar10 = uVar10 + 1;
        check_magic(iVar9);
        iVar9 = iVar9 + 0xe8;
      } while (uVar10 < (uint)param_1[0x59]);
      iVar9 = param_1[0x5b];
    }
    piVar4 = (int *)FUN_0051cba4(param_1);
    (*(code *)**(undefined4 **)(*piVar4 + 4))(piVar4,iVar9,0x10130103,0,0);
  }
  FUN_0052df14(puVar3);
  FUN_0052df14(param_1 + 0x4e);
  FUN_0052d0e8(param_1 + 0x48);
  FUN_0052d0e8(param_1 + 0x42);
  FUN_0052df14(param_1 + 0x38);
  FUN_0052d018(param_1 + 0x28);
  FUN_0052df14(param_1 + 0x1e);
  FUN_0052e5f8(param_1 + 0x18);
  FUN_0052df14(param_1 + 0xe);
  FUN_0052df14(param_1 + 4);
  handle_invalidate_magic(param_1 + 1);
  return;
}


// 0x0525f48 (0x164 bytes)
void FUN_00525f48(int param_1)

{
  longlong lVar1;
  int iVar3;
  ulonglong uVar2;
  char cVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  cVar4 = FUN_00604788(param_1);
  if (cVar4 != '\0') {
    iVar3 = param_1 + 0xe0;
    lwmutex_lock_checked(iVar3);
    sync(1);
    *(undefined4 *)(param_1 + 0x184) = 0;
    FUN_0052dcf0(param_1 + 0x108);
    lwmutex_unlock_checked(iVar3);
    FUN_005231cc(param_1,0);
    lwmutex_lock_checked(iVar3);
    dVar7 = (double)DAT_0071ab28;
    dVar6 = (double)DAT_0071ab78;
    dVar8 = *(double *)PTR_DAT_0071ab1c;
    while( true ) {
      cVar4 = FUN_0051cbc8(param_1);
      if (cVar4 != '\0') break;
      do {
        lVar1 = TBLr;
      } while ((int)lVar1 == 0);
      dVar5 = dVar8 * dVar6;
      if (dVar5 < dVar7) {
        uVar2 = (ulonglong)dVar5;
      }
      else {
        uVar2 = (longlong)(dVar5 - dVar7) ^ 0x8000000000000000;
      }
      FUN_0052e49c(param_1 + 0x120,iVar3,lVar1 + uVar2);
    }
    lwmutex_unlock_checked(iVar3);
  }
  return;
}


