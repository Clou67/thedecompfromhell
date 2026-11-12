// idol/idol.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 94 functions, 0x503494-0x505f54
#include <stdio.h>
#include <string.h>
#include "idol/idol.h"
#include "game/water.h"
#include "idol/idol_draw.h"
#include "idol/mUnk.h"
#include "idol/tiefunc.h"
#include "sdk/cell.h"
#include "sdk/libcgc/libcgc_cell_localize.h"
#include "sdk/libfios/fios_op.h"
#include "sdk/libfios/fios_scheduler.h"
#include "sdk/libscream/989snd.h"
#include "sdk/mUnk4.h"
#include "sdk/sce.h"
#include "sdk/sys.h"

// 0x0503494 (0x30 bytes)
// strings: 0065f6e0: 'm_LoadGameFileS %s\n'

undefined8 idol::m_LoadGameFileS(uint arg1,char *str)

{
  printf("m_LoadGameFileS %s\n",str);
  return 0;
}


// 0x05034c4 (0x30 bytes)
// strings: 0065f6f4: 'm_LoadGameFile %s\n'

undefined8 idol::PRINT_m_LoadGameFile(uint arg2,char *arg1)

{
  printf("m_LoadGameFile %s\n",arg1);
  return 0;
}


// 0x05034f4 (0x30 bytes)
// strings: 0065f708: 'm_LoadGameFileB %s\n'

void *idol::m_LoadGameFileB(void *param_1,const char *param_2)

{
  printf("m_LoadGameFileB %s\n");
  return 0;
}


// 0x0503524 (0x30 bytes)
// strings: 0065f71c: 'm_LoadSceneFile %s\n'

undefined8 FUN_00503524(void)

{
  printf("m_LoadSceneFile %s\n");
  return 0;
}


// 0x0503554 (0x94 bytes)
uint FUN_00503554(byte *param_1)

{
  byte bVar1;
  size_t sVar2;
  uint uVar3;
  int iVar4;
  
  sVar2 = strlen((char *)param_1);
  if ((param_1 == (byte *)0x0) || (sVar2 == 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0x811c9dc5;
    for (iVar4 = 0; bVar1 = *param_1, iVar4 < (int)sVar2 && bVar1 != 0; iVar4 = iVar4 + 1) {
      param_1 = param_1 + 1;
      uVar3 = uVar3 * 0x1000193 ^ (uint)bVar1;
    }
  }
  return uVar3;
}


// 0x05035e8 (0x68 bytes)
uint FUN_005035e8(byte *param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  if ((param_1 == (byte *)0x0) || (param_2 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0x811c9dc5;
    for (iVar3 = 0; bVar1 = *param_1, iVar3 < param_2 && bVar1 != 0; iVar3 = iVar3 + 1) {
      param_1 = param_1 + 1;
      uVar2 = uVar2 * 0x1000193 ^ (uint)bVar1;
    }
  }
  return uVar2;
}


// 0x0503650 (0xa0 bytes)
undefined8 FUN_00503650(char *param_1,char *param_2)

{
  size_t sVar2;
  size_t sVar3;
  undefined8 uVar1;
  uint uVar4;
  
  sVar2 = strlen(param_2);
  sVar3 = strlen(param_1);
  if (sVar3 < sVar2) {
    uVar1 = 0;
  }
  else {
    uVar4 = 0;
    if (sVar2 != 0) {
      do {
        if (param_1[uVar4] != param_2[uVar4]) {
          return 0;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < sVar2);
    }
    uVar1 = 1;
  }
  return uVar1;
}


// 0x05036f0 (0xb0 bytes)
undefined8 FUN_005036f0(char *param_1,char *param_2)

{
  size_t sVar2;
  size_t sVar3;
  undefined8 uVar1;
  uint uVar4;
  
  sVar2 = strlen(param_2);
  sVar3 = strlen(param_1);
  if (sVar3 < sVar2) {
    uVar1 = 0;
  }
  else {
    uVar4 = 0;
    if (sVar2 != 0) {
      do {
        if (param_1[(sVar3 - sVar2) + uVar4] != param_2[uVar4]) {
          return 0;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < sVar2);
    }
    uVar1 = 1;
  }
  return uVar1;
}


// 0x05037a0 (0x70 bytes)
char * FUN_005037a0(char *param_1)

{
  size_t sVar1;
  size_t sVar2;
  
  sVar2 = strlen(param_1);
  do {
    sVar1 = sVar2;
    sVar2 = sVar1 - 1;
    if ((int)sVar2 < 0) {
      return (char *)0x0;
    }
  } while (param_1[sVar2] != '.');
  return param_1 + sVar1;
}


// 0x0503810 (0xb4 bytes)
char * FUN_00503810(char *param_1,undefined8 param_2,char *param_3)

{
  size_t sVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  
  sVar1 = strlen(param_1);
  for (iVar2 = sVar1 - 1; (iVar4 = sVar1 - 1, -1 < iVar2 && (iVar4 = iVar2, param_1[iVar2] != '.'));
      iVar2 = iVar2 + -1) {
  }
  if (*param_3 != '.') {
    strcpy(param_1 + iVar4,".");
    iVar4 = iVar4 + 1;
  }
  pcVar3 = strcpy(param_1 + iVar4,param_3);
  return pcVar3;
}


// 0x05038c4 (0x1c bytes)
void FUN_005038c4(int param_1)

{
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  return;
}


// 0x05038e0 (0x70 bytes)
int FUN_005038e0(void)

{
  int iVar1;
  
  if (DAT_00902ec4 == 0) {
    iVar1 = FUN_005e38b0(0x1c);
    DAT_00902ec4 = 0;
    if (iVar1 != 0) {
      *(undefined4 *)(iVar1 + 4) = 0;
      *(undefined4 *)(iVar1 + 0xc) = 0;
      *(undefined4 *)(iVar1 + 0x10) = 0;
      *(undefined4 *)(iVar1 + 8) = 0;
      *(undefined1 *)(iVar1 + 0x14) = 0;
      DAT_00902ec4 = iVar1;
    }
  }
  return DAT_00902ec4;
}


// 0x0503950 (0x1c bytes)
void FUN_00503950(int param_1)

{
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  return;
}


// 0x050396c (0xd0 bytes)
void FUN_0050396c(int param_1,char *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char acStack_90 [128];
  
  snprintf(acStack_90,param_2,*(undefined4 *)(param_1 + 0xc));
  iVar3 = LoadAssetFromFile(acStack_90,*(undefined4 *)(param_1 + 0x10),0x2800);
  if (iVar3 != 0) {
    puVar1 = *(undefined4 **)(param_1 + 0x10);
    *(undefined4 *)(param_1 + 8) = *puVar1;
    iVar3 = puVar1[1];
    *(undefined4 **)(param_1 + 0x18) = puVar1 + 2;
    memcpy(puVar1 + 2,puVar1 + 2,(iVar3 + 3U & 0xfffffffc) - 8);
    iVar3 = *(int *)(param_1 + 8);
    if (0 < iVar3) {
      iVar4 = *(int *)(param_1 + 0x18);
      iVar2 = iVar4 + -8;
      do {
        iVar3 = iVar3 + -1;
        *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + iVar2;
        iVar4 = iVar4 + 0xc;
      } while (0 < iVar3);
    }
    *(undefined1 *)(param_1 + 0x14) = 1;
  }
  return;
}


// 0x0503a3c (0x84 bytes)
void FUN_00503a3c(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined8 param_5)

{
  cellSysutilCheckCallback();
  if (*(char *)(param_1 + 5) == '\0') {
    param_1[4] = param_2;
    param_1[3] = param_3;
    *param_1 = param_4;
    FUN_0050396c(param_1,param_5);
  }
  return;
}


// 0x0503ac0 (0x50 bytes)
int FUN_00503ac0(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 8)) {
    do {
      if (param_2 == *(int *)(*(int *)(param_1 + 0x18) + iVar1 * 0xc)) {
        return iVar1;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_1 + 8));
  }
  return -1;
}


// 0x0503b10 (0xc0 bytes)
undefined8 FUN_00503b10(undefined4 *param_1,int param_2)

{
  undefined8 uVar1;
  int iVar2;
  
  uVar1 = (**(code **)*param_1)();
  iVar2 = *(int *)((int)g_pHWSystem + 0xc0);
  if (5999 < param_2) {
    if (iVar2 == 1) {
      return 2;
    }
    if (iVar2 == 0) {
      return 1;
    }
    if (iVar2 == 3) {
      return 0;
    }
  }
  iVar2 = (int)uVar1;
  if (iVar2 < 2) {
    if (-1 < iVar2) {
      return 1;
    }
  }
  else if (iVar2 < 6) {
    return uVar1;
  }
  return 0;
}


// 0x0503bd0 (0xa0 bytes)
int FUN_00503bd0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = FUN_00503b10();
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 8)) {
    piVar3 = *(int **)(param_1 + 0x18);
    do {
      if (param_2 + iVar1 == *piVar3) {
        if (iVar2 < 0) {
          return 0;
        }
        return (*(int **)(param_1 + 0x18))[iVar2 * 3 + 2];
      }
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 3;
    } while (iVar2 < *(int *)(param_1 + 8));
  }
  return 0;
}


// 0x0503c70 (0x5c bytes)
int FUN_00503c70(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 8)) {
    piVar1 = *(int **)(param_1 + 0x18);
    do {
      if (param_2 == *piVar1) {
        return (*(int **)(param_1 + 0x18))[iVar2 * 3 + 1];
      }
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 3;
    } while (iVar2 < *(int *)(param_1 + 8));
  }
  return -1;
}


// 0x0503ccc (0x12c bytes)
// strings: 0065f73c: 'Failed to convert string into UTF8! Illegal conversion\n' | 0065f774: 'Failed to convert string into UTF8! Destination buffer overrun!!!!\n' | 0065f7bc: "Failed to convert string into UTF8! CellSDK can't figure its shit out!\n"

undefined8
FUN_00503ccc(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined4 param_5,undefined4 *param_6)

{
  int iVar1;
  GPiece<4> local_30;
  GPiece<4> local_2c;
  
  iVar1 = (**(code **)*param_1)();
  iVar1 = L10nConvertStr
                    ((ZERO_MASK((6 - iVar1)) & 0xfffffffffffffffcU) + 5,param_2,
                     local_30,0,param_4,local_2c);
  if (iVar1 == 0) {
    *param_6 = param_5;
  }
  else {
    if (iVar1 == 1) {
      print_tty2("Failed to convert string into UTF8! Illegal conversion\n");
    }
    else if (iVar1 == 2) {
      print_tty2("Failed to convert string into UTF8! Destination buffer overrun!!!!\n");
    }
    else if (iVar1 == 3) {
      print_tty2("Failed to convert string into UTF8! CellSDK can\'t figure its shit out!\n");
    }
    param_4 = 0;
  }
  return param_4;
}


// 0x0503df8 (0x4 bytes)
void FUN_00503df8(void)

{
  return;
}


// 0x0503dfc (0x4 bytes)
void FUN_00503dfc(void)

{
  return;
}


// 0x0503e00 (0x18c bytes)
longlong LoadAssetFromFile(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong local_30;
  int local_28 [2];
  
  cellSysutilCheckCallback();
  uVar1 = get_default_fs();
  uVar2 = stat_setup(uVar1,0,param_1,1,local_28);
  op_wait_result(uVar2,0);
  if (local_28[0] == 0) {
    do {
      cellSysutilCheckCallback(local_28[0]);
      local_28[0] = 100;
      syscall();
    } while( true );
  }
  uVar2 = read_setup(uVar1,0,param_1,&local_30,3);
  op_wait_result(uVar2,0);
  if ((param_3 != -1) && (param_3 < local_30)) {
    do {
      cellSysutilCheckCallback(local_28[0]);
      local_28[0] = 100;
      syscall();
    } while( true );
  }
  uVar2 = read_req_setup(uVar1,0,local_28[0],param_2,local_30,0xffffffffffffffff);
  uVar2 = op_wait_result(uVar2,0);
  if ((int)uVar2 != 0) {
    do {
      cellSysutilCheckCallback(uVar2);
      uVar2 = 100;
      syscall();
    } while( true );
  }
  uVar1 = filehandle_close_setup(uVar1,0,local_28[0]);
  uVar1 = op_wait_result(uVar1,0);
  if ((int)uVar1 != 0) {
    do {
      cellSysutilCheckCallback(uVar1);
      uVar1 = 100;
      syscall();
    } while( true );
  }
  return local_30;
}


// 0x0503f8c (0x168 bytes)
void FUN_00503f8c(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  GPiece<40> local_80;
  GPiece<40> local_58;
  int local_30 [4];
  
  cellSysutilCheckCallback();
  uVar1 = get_default_fs();
  uVar2 = _ZN4cell4fios9scheduler8openFileEPKNS0_8opattr_tEPKcjPPNS0_10filehandleE(uVar1,local_80,param_1,1,local_30);
  _ZN4cell4fios2op8syncWaitEPx(uVar2,0);
  if (local_30[0] == 0) {
    do {
      cellSysutilCheckCallback(local_30[0]);
      local_30[0] = 100;
      syscall();
    } while( true );
  }
  if (param_3 < *(longlong *)(local_30[0] + 0x48) && param_3 != -1) {
    do {
      cellSysutilCheckCallback(local_30[0]);
      local_30[0] = 100;
      syscall();
    } while( true );
  }
  uVar1 = read_req_setup
                    (uVar1,local_58,local_30[0],param_2,*(longlong *)(local_30[0] + 0x48),
                     0xffffffffffffffff);
  if ((int)uVar1 == 0) {
    do {
      cellSysutilCheckCallback(uVar1);
      uVar1 = 100;
      syscall();
    } while( true );
  }
  return;
}


// 0x05040f4 (0x84 bytes)
void FUN_005040f4(int param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  GPiece<16> local_20;
  
  uVar1 = *(undefined4 *)(param_1 + 0x9c);
  _ZN4cell4fios2op16waitListDeadlineEjPKPS1_x(1,local_20,0);
  uVar2 = filehandle_close_setup(uVar1,0,*(undefined4 *)(param_1 + 0x24));
  _ZN4cell4fios2op8syncWaitEPx(uVar2,0);
  if (param_1 != 0) {
    FUN_0051fd24(*(undefined4 *)(param_1 + 0x9c),param_1);
  }
  return;
}


// 0x0504178 (0xa0 bytes)
undefined8 GetFileSize(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int local_20 [4];
  
  uVar1 = get_default_fs();
  uVar2 = stat_setup(uVar1,0,param_1,1,local_20);
  op_wait_result(uVar2,0);
  if (local_20[0] == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(local_20[0] + 0x48);
    uVar1 = filehandle_close_setup(uVar1,0,local_20[0]);
    op_wait_result(uVar1,0);
  }
  return uVar2;
}


// 0x0504218 (0x154 bytes)
void FUN_00504218(undefined8 param_1,undefined8 param_2,int param_3,int param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 local_40;
  GPiece<20> local_3c;
  
  uVar1 = get_default_fs();
  uVar2 = _ZN4cell4fios9scheduler8openFileEPKNS0_8opattr_tEPKcjPPNS0_10filehandleE(uVar1,0,param_1,10,&local_40);
  _ZN4cell4fios2op8syncWaitEPx(uVar2,0);
  uVar2 = FUN_00525524(uVar1,0,local_40,local_3c,0x12,0xffffffffffffffff);
  _ZN4cell4fios2op8syncWaitEPx(uVar2,0);
  uVar2 = FUN_00525524(uVar1,0,local_40,param_2,
                       ((longlong)param_4 * (longlong)param_3 & 0x3fffffffU) << 2,0xffffffffffffffff
                      );
  _ZN4cell4fios2op8syncWaitEPx(uVar2,0);
  uVar1 = filehandle_close_setup(uVar1,0,local_40);
  _ZN4cell4fios2op8syncWaitEPx(uVar1,0);
  return;
}


// 0x050436c (0x8 bytes)
void *FUN_0050436c(void *param_1)

{
  return param_1 + 0x58;
}


// 0x0504374 (0x3c bytes)
// strings: 0065f804: 'Video Memory'

void FUN_00504374(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_004fe39c(param_1 + 0x7c,param_2,param_3,"Video Memory",2,0);
  return;
}


// 0x05043b0 (0x74 bytes)
// strings: 0065f814: 'Scratch Memory'

void FUN_005043b0(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = idol::AllocateMemAlign(param_1 + 0x58,0x4000,0x10);
  FUN_004fe39c(param_1 + 0xa0,uVar1,0x4000,"Scratch Memory",2,0);
  g_ScratchBuf = FUN_004fe5ec(param_1 + 0xa0);
  return;
}


// 0x0504424 (0x44 bytes)
void idol::InitGameGraphics(int param_1)

{
  (*(code *)**(undefined4 **)(**(int **)(param_1 + 0xc4) + 8))
            (*(int **)(param_1 + 0xc4),param_1 + 0x58);
  return;
}


// 0x0504468 (0x248 bytes)
// strings: 0065f824: 'Common/UI/DialogMessages.chl' | 0065f844: 'LoadDialogMessages() error\n'

void FUN_00504468(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 local_40;
  int local_38;
  GPiece<20> auStack_34;
  
  param_1 = param_1 + 0x58;
  FUN_004eaddc(param_1);
  uVar1 = FUN_004fe5f4(param_1,0x80);
  cellSysutilCheckCallback();
  uVar2 = get_default_fs();
  uVar3 = _ZN4cell4fios9scheduler8openFileEPKNS0_8opattr_tEPKcjPPNS0_10filehandleE(uVar2,0,"Common/UI/DialogMessages.chl",1,&local_38);
  _ZN4cell4fios2op8syncWaitEPx(uVar3,0);
  if (local_38 == 0) {
    do {
      cellSysutilCheckCallback(local_38);
      local_38 = 100;
      syscall();
    } while( true );
  }
  uVar3 = _ZN4cell4fios9scheduler10statCommonEPKNS0_8opattr_tEPKcPvNS0_2op10e_OPSTAGESE(uVar2,0,"Common/UI/DialogMessages.chl",&local_40,3);
  _ZN4cell4fios2op8syncWaitEPx(uVar3,0);
  uVar3 = read_req_setup(uVar2,0,local_38,uVar1,local_40,0xffffffffffffffff);
  uVar3 = _ZN4cell4fios2op8syncWaitEPx(uVar3,0);
  if ((int)uVar3 == 0) {
    uVar2 = filehandle_close_setup(uVar2,0,local_38);
    uVar2 = _ZN4cell4fios2op8syncWaitEPx(uVar2,0);
    if ((int)uVar2 == 0) {
      FUN_004fe6ec(param_1,(int)local_40);
      FUN_0050e574(auStack_34);
      uVar1 = FUN_0050e594(auStack_34,uVar1);
      iVar4 = (int)uVar1;
      while ((iVar4 != 0 && (iVar4 = FUN_0050e4f8(uVar1), iVar4 != 0))) {
        iVar4 = FUN_0050e52c(uVar1);
        if (iVar4 == 0x2a) {
          uVar1 = FUN_0050e4c4(uVar1);
          (*(code *)**(undefined4 **)(*g_pMsgDialog + 0x18))(g_pMsgDialog,uVar1);
        }
        else {
          print_tty("LoadDialogMessages() error\n");
        }
        uVar1 = FUN_0050e5f4(auStack_34);
        iVar4 = (int)uVar1;
      }
      return;
    }
    do {
      cellSysutilCheckCallback(uVar2);
      uVar2 = 100;
      syscall();
    } while( true );
  }
  do {
    cellSysutilCheckCallback(uVar3);
    uVar3 = 100;
    syscall();
  } while( true );
}


// 0x05046b0 (0xbc bytes)
// strings: 0065f860: 'GameAuthenticate' | 0065f878: 'ERROR authentication thread create failed\n'

void idol::GameAuthenticate(int param_1,char *param_2,char *param_3)

{
  int iVar1;
  GPiece<8> auStack_20;
  
  iVar1 = FUN_00504d90(g_pHWSystem);
  if (iVar1 == 0) {
    strcpy((char *)(param_1 + 5),param_2);
    strcpy((char *)(param_1 + 0x45),param_3);
    iVar1 = sys_ppu_thread_create
                      (auStack_20,&PTR_FUN_00711e30,0,0x3e9,0x4000,0,"GameAuthenticate");
    if (iVar1 != 0) {
      print_tty("ERROR authentication thread create failed\n");
    }
  }
  return;
}


// 0x050476c (0x188 bytes)
void FUN_0050476c(void)

{
  int iVar3;
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 local_80;
  GPiece<40> local_78;
  int local_50 [2];
  GPiece<40> auStack_48;
  
  uVar5 = ZEXT48(g_pGame);
  iVar3 = FUN_00504d90(g_pHWSystem);
  if (iVar3 != 0) {
    return;
  }
  lVar4 = uVar5 + 5;
  uVar1 = get_default_fs();
  uVar2 = _ZN4cell4fios9scheduler8openFileEPKNS0_8opattr_tEPKcjPPNS0_10filehandleE(uVar1,local_78,lVar4,0x101,local_50);
  _ZN4cell4fios2op8syncWaitEPx(uVar2,0);
  if (local_50[0] != 0) {
    uVar2 = _ZN4cell4fios9scheduler10statCommonEPKNS0_8opattr_tEPKcPvNS0_2op10e_OPSTAGESE(uVar1,0,lVar4,&local_80,3);
    _ZN4cell4fios2op8syncWaitEPx(uVar2,0);
    uVar2 = read_req_setup(uVar1,0,local_50[0],auStack_48,local_80,0xffffffffffffffff);
    _ZN4cell4fios2op8syncWaitEPx(uVar2,0);
    uVar1 = filehandle_close_setup(uVar1,0,local_50[0]);
    _ZN4cell4fios2op8syncWaitEPx(uVar1,0);
    iVar3 = FUN_005ccb28(uVar5 + 0x45,auStack_48,0x10);
    if (iVar3 == 0) goto LAB_005048c8;
  }
  cellGameContentErrorDialog(0x65,0,0);
LAB_005048c8:
  sys_ppu_thread_exit(0);
  return;
}


// 0x05048f4 (0x4 bytes)
void FUN_005048f4(void)

{
  return;
}


// 0x05048f8 (0x44 bytes)
void FUN_005048f8(void)

{
  (*(code *)**(undefined4 **)(*DAT_00902ebc + 8))();
  return;
}


// 0x050493c (0x4c bytes)
void FUN_0050493c(undefined8 param_1,int param_2)

{
  (*(code *)**(undefined4 **)(*DAT_00902ebc + 8))(DAT_00902ebc,param_2 * 1000);
  return;
}


// 0x0504988 (0x278 bytes)
// strings: 0065f8a4: '\n\nApp Name %s\n' | 0065f8b4: '/app_home' | 0065f8c4: 'Activating SKU %s\n' | 0065f8dc: 'NPUA' (raw) | 0065f8e4: 'BCUS' (raw) | 0065f8ec: 'NPEA' (raw) | 0065f8f4: 'BCES' (raw) | 0065f8fc: 'NPHA' (raw) | 0065f904: 'NPJA' (raw) | 0065f90c: 'Registered SKU %d  Region is %d\n\n' | 0065f934: '/dev_bdvd'

void FUN_00504988(int param_1,undefined8 param_2,char param_3)

{
  undefined4 uVar1;
  size_t sVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  
  *(int *)(param_1 + 0xc) = (int)param_2;
  *(undefined1 *)(param_1 + 0x10) = 1;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  print_tty2("\n\nApp Name %s\n",param_2);
  sVar2 = strlen("/app_home");
  iVar3 = FUN_005ccb28(param_2,"/app_home",sVar2);
  if (iVar3 == 0) {
    *(undefined1 *)(param_1 + 0x10) = 0;
  }
  if (param_3 != '\0') {
    *(undefined1 *)(param_1 + 0x10) = 1;
  }
  if (0 < *(int *)(param_1 + 0xb8)) {
    lVar5 = 0;
    iVar3 = param_1;
    do {
      iVar4 = FUN_005c8700(param_2,*(undefined4 *)(iVar3 + 0x18));
      if (iVar4 != 0) {
        iVar3 = param_1 + (int)(lVar5 << 4) + (int)(lVar5 << 2);
        print_tty2("Activating SKU %s\n",(ulonglong)*(uint *)(iVar3 + 0x20));
        uVar1 = *(undefined4 *)(iVar3 + 0x18);
        *(int *)(param_1 + 0xbc) = (int)lVar5;
        iVar4 = FUN_005cc784(uVar1,&DAT_0065f8dc);
        if ((iVar4 == 0) ||
           (iVar4 = FUN_005cc784(*(undefined4 *)(iVar3 + 0x18),&DAT_0065f8e4), iVar4 == 0)) {
          *(undefined4 *)(param_1 + 0xc0) = 0;
        }
        else {
          iVar4 = FUN_005cc784(*(undefined4 *)(iVar3 + 0x18),&DAT_0065f8ec);
          if ((iVar4 == 0) ||
             (iVar4 = FUN_005cc784(*(undefined4 *)(iVar3 + 0x18),&DAT_0065f8f4), iVar4 == 0)) {
            *(undefined4 *)(param_1 + 0xc0) = 1;
          }
          else {
            iVar4 = FUN_005cc784(*(undefined4 *)(iVar3 + 0x18),&DAT_0065f8fc);
            if (iVar4 == 0) {
              *(undefined4 *)(param_1 + 0xc0) = 2;
            }
            else {
              iVar3 = FUN_005cc784(*(undefined4 *)(iVar3 + 0x18),&DAT_0065f904);
              if (iVar3 == 0) {
                *(undefined4 *)(param_1 + 0xc0) = 3;
              }
            }
          }
        }
        break;
      }
      lVar5 = lVar5 + 1;
      iVar3 = iVar3 + 0x14;
    } while ((int)lVar5 < *(int *)(param_1 + 0xb8));
  }
  print_tty2("Registered SKU %d  Region is %d\n\n",*(undefined4 *)(param_1 + 0xbc),
             *(undefined4 *)(param_1 + 0xc0));
  sVar2 = strlen("/dev_bdvd");
  iVar3 = FUN_005ccb28(param_2,"/dev_bdvd",sVar2);
  if (iVar3 == 0) {
    *(undefined1 *)(param_1 + *(int *)(param_1 + 0xbc) * 0x14 + 0x24) = 1;
  }
  return;
}


// 0x0504c00 (0x38 bytes)
void idol::CheckLicense(int *unk1,int unk_ptr,char *gameId,char *gameIdExt,bool isDisc,int param_6)

{
  int iVar1;
  
  iVar1 = unk1[0x2e];
  unk1[0x2e] = iVar1 + 1;
  unk1[iVar1 * 5 + 6] = unk_ptr;
  unk1[iVar1 * 5 + 7] = (int)gameId;
  unk1[iVar1 * 5 + 8] = (int)gameIdExt;
  *(bool *)(unk1 + iVar1 * 5 + 9) = isDisc;
  unk1[iVar1 * 5 + 10] = param_6;
  return;
}


// 0x0504c38 (0x20 bytes)
undefined4 FUN_00504c38(int param_1)

{
  return *(undefined4 *)(param_1 + *(int *)(param_1 + 0xbc) * 0x14 + 0x18);
}


// 0x0504c58 (0x20 bytes)
undefined4 FUN_00504c58(int param_1)

{
  return *(undefined4 *)(param_1 + *(int *)(param_1 + 0xbc) * 0x14 + 0x1c);
}


// 0x0504c78 (0x20 bytes)
undefined4 FUN_00504c78(int param_1)

{
  return *(undefined4 *)(param_1 + *(int *)(param_1 + 0xbc) * 0x14 + 0x20);
}


// 0x0504c98 (0x48 bytes)
undefined4 FUN_00504c98(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = param_1 + *(int *)(param_1 + 0xbc) * 0x14;
  iVar1 = *(int *)(iVar3 + 0x28);
  if (iVar1 < 0) {
    uVar2 = *(undefined4 *)(iVar3 + 0x1c);
  }
  else {
    uVar2 = *(undefined4 *)(param_1 + iVar1 * 0x14 + 0x1c);
  }
  return uVar2;
}


// 0x0504ce0 (0x48 bytes)
undefined4 FUN_00504ce0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = param_1 + *(int *)(param_1 + 0xbc) * 0x14;
  iVar1 = *(int *)(iVar3 + 0x28);
  if (iVar1 < 0) {
    uVar2 = *(undefined4 *)(iVar3 + 0x20);
  }
  else {
    uVar2 = *(undefined4 *)(param_1 + iVar1 * 0x14 + 0x20);
  }
  return uVar2;
}


// 0x0504d28 (0x20 bytes)
int FUN_00504d28(int param_1)

{
  return param_1 + *(int *)(param_1 + 0xbc) * 0x14 + 0x18;
}


// 0x0504d48 (0x48 bytes)
int FUN_00504d48(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + *(int *)(param_1 + 0xbc) * 0x14 + 0x28);
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = param_1 + iVar1 * 0x14 + 0x18;
  }
  return iVar1;
}


// 0x0504d90 (0x20 bytes)
undefined1 FUN_00504d90(int param_1)

{
  return *(undefined1 *)(param_1 + *(int *)(param_1 + 0xbc) * 0x14 + 0x24);
}


// 0x0504db0 (0x14 bytes)
ulonglong FUN_00504db0(int param_1,int param_2)

{
  return (ulonglong)(LZCOUNT(*(int *)(param_1 + 0xc0) - param_2) << 0x20) >> 0x25;
}


// 0x0504dc8 (0x58 bytes)
void FUN_00504dc8(int param_1)

{
  longlong lVar1;
  
  memset(param_1,0,0xc0);
  lVar1 = 0xb;
  do {
    *(undefined1 *)(param_1 + 0x4c0) = 0;
    *(undefined1 *)(param_1 + 0x4ff) = 0;
    param_1 = param_1 + 0x40;
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  return;
}


// 0x0504e20 (0x58 bytes)
void FUN_00504e20(int param_1)

{
  longlong lVar1;
  
  memset(param_1,0,0xc0);
  lVar1 = 0xb;
  do {
    *(undefined1 *)(param_1 + 0x4c0) = 0;
    *(undefined1 *)(param_1 + 0x4ff) = 0;
    param_1 = param_1 + 0x40;
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  return;
}


// 0x0504e78 (0x150 bytes)
// strings: 0065f940: '*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-Error, unrecognized escape command %i *-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n'

byte * FUN_00504e78(undefined8 param_1,int param_2,undefined1 *param_3)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  
  iVar3 = 0;
  pbVar2 = (byte *)(param_2 + 5);
  *param_3 = *(undefined1 *)(param_2 + 3);
  param_3[1] = *(char *)(param_2 + 1) + -2;
  param_3[2] = *(char *)(param_2 + 4) + -2;
  if (0 < (int)(*(byte *)(param_2 + 1) - 2)) {
    do {
      iVar4 = 0;
      pbVar5 = pbVar2;
      do {
        if (*pbVar2 == 0xfd) {
          pbVar5 = pbVar5 + 1;
          bVar1 = *pbVar5;
          pbVar2 = pbVar5;
          if (bVar1 == 2) {
            param_3[iVar4 + 4] = 0xfd;
          }
          else if ((bVar1 < 0x40) || (0x60 < bVar1)) {
            param_3[iVar4 + 4] = 0;
            print_tty2(
                      "*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-Error, unrecognized escape command %i *-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n"
                      );
          }
          else {
            param_3[iVar4 + 4] = bVar1 - 0x40;
          }
        }
        else {
          param_3[iVar4 + 4] = *pbVar2;
        }
        iVar4 = iVar4 + 1;
        pbVar2 = pbVar2 + 1;
        pbVar5 = pbVar5 + 1;
      } while (iVar4 < 4);
      iVar3 = iVar3 + 1;
      param_3 = param_3 + 4;
    } while (iVar3 < (int)(*(byte *)(param_2 + 1) - 2));
  }
  return pbVar2;
}


// 0x0504fc8 (0x14 bytes)
ulonglong FUN_00504fc8(undefined8 param_1,byte *param_2)

{
  return (ulonglong)(LZCOUNT(*param_2 - 1) << 0x20) >> 0x25;
}


// 0x0504fdc (0x68 bytes)
undefined8 FUN_00504fdc(undefined8 param_1,char *param_2)

{
  size_t sVar2;
  undefined8 uVar1;
  
  if (*param_2 == '\x01') {
    sVar2 = strlen(param_2);
    if ((sVar2 < 5) || (sVar2 < (byte)param_2[2])) {
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


// 0x0505044 (0x70 bytes)
undefined8 FUN_00505044(undefined8 param_1,char *param_2,char param_3)

{
  undefined8 uVar1;
  char local_20 [24];
  
  if ((*param_2 == '\x01') && (FUN_00504e78(param_1,param_2,local_20), local_20[0] == param_3)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


// 0x05050b4 (0x60 bytes)
undefined8 FUN_005050b4(undefined8 param_1,char *param_2)

{
  undefined8 uVar1;
  char local_20 [32];
  
  if ((*param_2 == '\x01') && (FUN_00504e78(param_1,param_2,local_20), local_20[0] == '\x04')) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


// 0x0505114 (0xc4 bytes)
longlong FUN_00505114(longlong param_1,longlong param_2,int param_3,int param_4,longlong param_5)

{
  int iVar1;
  size_t __n;
  int iVar2;
  longlong lVar3;
  
  __n = param_4 - (int)(char *)param_2;
  iVar1 = *(int *)(param_3 + 4);
  iVar2 = (int)param_1;
  strcpy((char *)(iVar2 + 0xc0),(char *)param_2);
  lVar3 = param_1 + 0x2c0;
  memcpy((void *)lVar3,(char *)(iVar2 + 0xc0),__n);
  strcpy((char *)(iVar2 + __n + 0x2c0),(char *)(iVar2 + iVar1 * 0x40 + 0x4c0));
  FUN_005cc44c(lVar3,(param_1 + (param_5 - param_2) & 0xffffffffU) + 0xc0);
  return lVar3;
}


// 0x05051d8 (0x15c bytes)
char * FUN_005051d8(int param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  char *__dest;
  GPiece<2> auStack_50;
  byte local_4e;
  int local_4c;
  
  iVar2 = 0;
  __dest = (char *)(param_1 + 0x2c0);
  do {
    if (param_2 == (char *)0x0) {
      return (char *)0x0;
    }
    while( true ) {
      if (param_2[iVar2] == '\0') {
        return param_2;
      }
      pcVar3 = param_2 + iVar2;
      if (*pcVar3 != '\x01') break;
      iVar1 = FUN_00504e78(param_1,pcVar3,auStack_50);
      if ((local_4e & 0x20) == 0) {
        iVar2 = iVar2 + (iVar1 - (int)pcVar3);
      }
      else {
        strcpy((char *)(param_1 + 0xc0),param_2);
        memcpy(__dest,(char *)(param_1 + 0xc0),(int)pcVar3 - (int)param_2);
        strcpy((char *)(param_1 + ((int)pcVar3 - (int)param_2) + 0x2c0),
                     (char *)(param_1 + local_4c * 0x40 + 0x4c0));
        FUN_005cc44c(__dest,param_1 + (iVar1 - (int)param_2) + 0xc0);
        iVar2 = iVar2 + 1;
        param_2 = __dest;
        if (__dest == (char *)0x0) {
          return (char *)0x0;
        }
      }
    }
    iVar2 = iVar2 + 1;
  } while( true );
}


// 0x0505338 (0x6c bytes)
undefined8 FUN_00505338(int param_1,byte *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  
  if ((*param_2 < 0x30) && (piVar1 = *(int **)(param_1 + (uint)*param_2 * 4), piVar1 != (int *)0x0))
  {
    uVar2 = (*(code *)**(undefined4 **)(*piVar1 + 8))(piVar1);
    return uVar2;
  }
  return 0;
}


// 0x05053a8 (0xa4 bytes)
undefined8 FUN_005053a8(int param_1,undefined8 param_2,float *param_3)

{
  int *piVar1;
  undefined8 uVar2;
  double dVar3;
  byte local_30 [24];
  
  uVar2 = FUN_00504e78(param_1,param_2,local_30);
  if (local_30[0] < 0x30) {
    piVar1 = *(int **)(param_1 + (uint)local_30[0] * 4);
    if (piVar1 != (int *)0x0) {
      dVar3 = (double)(*(code *)**(undefined4 **)(*piVar1 + 8))(piVar1,local_30);
      goto LAB_00505428;
    }
  }
  dVar3 = 0.0;
LAB_00505428:
  *param_3 = (float)dVar3;
  return uVar2;
}


// 0x050544c (0x58 bytes)
void FUN_0050544c(int param_1,uint param_2,undefined8 param_3)

{
  if (param_2 < 0xb) {
    strcpy(param_1 + param_2 * 0x40 + 0x4c0,param_3,0x3f);
  }
  return;
}


// 0x05054a4 (0xdc bytes)
void FUN_005054a4(int param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 < 0xb) {
    iVar4 = param_1 + param_2 * 0x40 + 0x4c0;
    iVar2 = 0x3f;
    do {
      iVar3 = iVar2;
      iVar1 = param_3 / 10;
      *(char *)(iVar4 + iVar3) = (char)param_3 + (char)(param_3 / 10) * -10 + '0';
      param_3 = iVar1;
      iVar2 = iVar3 + -1;
    } while (0 < iVar3 + -1 && iVar1 != 0);
    if (iVar3 != 0) {
      FUN_005c6094(iVar4,iVar4 + iVar3,0x40 - iVar3);
    }
    *(undefined1 *)(iVar4 + (0x40 - iVar3)) = 0;
  }
  return;
}


// 0x0505580 (0x68 bytes)
void FUN_00505580(void)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  longlong lVar3;
  
  memset(&DAT_0159b38c,0,0xc0);
  puVar2 = &DAT_0159b84c;
  puVar1 = &DAT_0159b88b;
  lVar3 = 0xb;
  do {
    *puVar2 = 0;
    *puVar1 = 0;
    puVar2 = puVar2 + 0x40;
    puVar1 = puVar1 + 0x40;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  return;
}


// 0x05055e8 (0x74 bytes)
void FUN_005055e8(undefined8 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  
  param_2[0x2c] = 0;
  lVar2 = 4;
  param_2[0x28] = 0;
  param_2[0x29] = 0;
  param_2[0x2a] = 0;
  param_2[0x34] = 1;
  param_2[0x35] = 1;
  param_2[0x2d] = 0;
  param_2[0x2e] = 0;
  param_2[0x30] = 0;
  param_2[0x31] = 0;
  param_2[0x32] = 0;
  param_2[0x36] = 0;
  puVar1 = param_2;
  do {
    *puVar1 = 0;
    puVar1[0x10] = 0;
    puVar1[1] = 0;
    puVar1[0x11] = 0;
    puVar1[2] = 0;
    puVar1[0x12] = 0;
    puVar1[3] = 0;
    puVar1[0x13] = 0;
    puVar1 = puVar1 + 4;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  *(undefined1 *)(param_2 + 0x158) = 0;
  return;
}


// 0x050565c (0x144 bytes)
// strings: 0065f9a8: 'Dolby Digital' | 0065f9b8: 'Linear PCM' | 0065f9c8: 'cellAudioOutConfigure failed with error 0x%x\n' | 0065f9f8: 'cellAudioInit failed with error 0x%x\n'

void FUN_0050565c(undefined4 param_1)

{
  int iVar2;
  int iVar3;
  undefined8 uVar1;
  byte local_40 [16];
  char acStack_30 [24];
  
  iVar2 = cellAudioOutGetSoundAvailability(0,0,4,0);
  iVar3 = cellAudioOutGetSoundAvailability(0,1,4,0);
  if (iVar2 < iVar3) {
    local_40[0] = (byte)iVar3;
    snprintf(acStack_30,"Dolby Digital");
  }
  else {
    local_40[0] = (byte)iVar2;
    snprintf(acStack_30,"Linear PCM");
  }
  DAT_0159bb10 = (uint)local_40[0];
  iVar2 = cellAudioOutConfigure(0,local_40,0,0);
  if (iVar2 != 0) {
    iVar2 = printf("cellAudioOutConfigure failed with error 0x%x\n",iVar2);
  }
  uVar1 = cellAudioInit(iVar2);
  if ((int)uVar1 != 0) {
    printf("cellAudioInit failed with error 0x%x\n",uVar1);
  }
  DAT_0159bb0c = param_1;
  return;
}


// 0x05057a0 (0x24 bytes)
void FUN_005057a0(void)

{
  FUN_0060c448();
  return;
}


// 0x05057c4 (0x10 bytes)
undefined4 FUN_005057c4(void)

{
  return DAT_0159bb10;
}


// 0x05057d4 (0x34 bytes)
void FUN_005057d4(undefined4 param_1)

{
  FUN_004fe30c(param_1,DAT_0159bb0c,0x10);
  return;
}


// 0x0505808 (0x4 bytes)
void FUN_00505808(void)

{
  return;
}


// 0x0505810 (0x90 bytes)
void FUN_00505810(void)

{
  GPiece<120> local_80;
  
  FUN_0060ca38(local_80);
  FUN_0060c518(local_80);
  return;
}


// 0x05058a0 (0xb4 bytes)
void FUN_005058a0(void)

{
  GPiece<48> local_30;
  
  FUN_006343bc(local_30);
  return;
}


// 0x0505954 (0x178 bytes)
// strings: 0065fac8: 'Scream Initialization called already!'

undefined8 FUN_00505954(undefined4 param_1)

{
  GPiece<40> local_70;
  GPiece<56> local_48;
  
  FUN_00632180(local_70);
  if (DAT_0159c320 == '\0') {
    DAT_0159c328 = FUN_006367dc(param_1,0x40000,local_70);
    DAT_0159c320 = '\x01';
  }
  if (DAT_0159c328 == -5) {
    print_tty2("Scream Initialization called already!");
  }
  FUN_006343bc(local_48);
  return 1;
}


// 0x0505acc (0x24 bytes)
void FUN_00505acc(void)

{
  FUN_00636718();
  return;
}


// 0x0505af0 (0x8 bytes)
undefined8 FUN_00505af0(void)

{
  return 0;
}


// 0x0505af8 (0x4 bytes)
void FUN_00505af8(void)

{
  return;
}


// 0x0505afc (0x8 bytes)
undefined8 FUN_00505afc(void)

{
  return 0;
}


// 0x0505b04 (0x8 bytes)
undefined8 FUN_00505b04(void)

{
  return 0;
}


// 0x0505b0c (0x24 bytes)
void FUN_00505b0c(void)

{
  snd_BankLoadFromMemEx();
  return;
}


// 0x0505b30 (0x7c bytes)
void FUN_00505b30(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = snd_BankLoadFromMemEx();
  (*(code *)*param_2)(lVar1 + (ZERO_MASK((int)lVar1) & -lVar1 - 1U),param_3);
  return;
}


// 0x0505bac (0xc0 bytes)
void FUN_00505bac(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  GPiece<72> auStack_70;
  
  uVar1 = FUN_004ef34c();
  FUN_004ef4d0(uVar1,param_1,auStack_70);
  lVar2 = snd_BankLoadEx(auStack_70,param_2);
  (*(code *)*param_3)(lVar2 + (ZERO_MASK((int)lVar2) & -lVar2 - 1U),param_4);
  return;
}


// 0x0505c6c (0x8c bytes)
longlong FUN_00505c6c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  GPiece<72> auStack_60;
  
  uVar1 = FUN_004ef34c();
  FUN_004ef4d0(uVar1,param_1,auStack_60);
  lVar2 = snd_BankLoadEx(auStack_60,param_2);
  return lVar2 + (ZERO_MASK((int)lVar2) & -lVar2 - 1U);
}


// 0x0505cf8 (0x4 bytes)
void FUN_00505cf8(void)

{
  return;
}


// 0x0505cfc (0x24 bytes)
void FUN_00505cfc(void)

{
  FUN_00609ad0();
  return;
}


// 0x0505d20 (0x8 bytes)
undefined8 STUB_00505d20(...)

{
  return 0;
}


// 0x0505d30 (0x48 bytes)
void FUN_00505d30(int param_1)

{
  FUN_006051ac((double)((float)(longlong)param_1 * 0.44704));
  return;
}


// 0x0505d78 (0x6c bytes)
void FUN_00505d78(undefined4 param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined4 local_20 [4];
  
  FUN_0063511c(param_1,local_20);
  if (param_2 != (undefined4 *)0x0) {
    (*(code *)*param_2)(local_20[0],param_3);
  }
  return;
}


// 0x0505e08 (0x90 bytes)
void FUN_00505e08(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  GPiece<24> local_30;
  
  FUN_006356dc(param_1,local_30,0);
  (*(code *)*param_2)(0,param_3);
  return;
}


// 0x0505e98 (0x80 bytes)
void FUN_00505e98(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  GPiece<4> local_20;
  GPiece<4> local_1c;
  GPiece<4> local_18;
  GPiece<4> local_14;
  
  FUN_00635204(param_1,local_20,local_1c,local_18,local_14);
  (*(code *)*param_2)(0,param_3);
  return;
}


// 0x0505f18 (0x24 bytes)
void FUN_00505f18(void)

{
  FUN_00609a5c();
  return;
}


// 0x0505f3c (0x4 bytes)
void STUB_00505f3c(...)

{
  return;
}


// 0x0505f40 (0x4 bytes)
void STUB_00505f40(...)

{
  return;
}


// 0x0505f44 (0x4 bytes)
void STUB_00505f44(...)

{
  return;
}


// 0x0505f48 (0x4 bytes)
void STUB_00505f48(...)

{
  return;
}


// 0x0505f4c (0x4 bytes)
void STUB_00505f4c(...)

{
  return;
}


// 0x0505f50 (0x4 bytes)
void STUB_00505f50(...)

{
  return;
}


