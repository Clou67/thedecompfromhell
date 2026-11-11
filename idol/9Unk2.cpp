// idol/9Unk2.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 91 functions, 0x648b10-0x64eda4
#include <string.h>
#include "idol/9Unk2.h"
#include "game/crt0.h"
#include "idol/idol_draw.h"
#include "idol/mUnk2.h"
#include "sdk/9Unk.h"
#include "sdk/cell.h"
#include "sdk/libcgc/libcgc_cell_localize.h"
#include "sdk/libstdc++/throw.h"
#include "sdk/sce.h"
#include "sdk/sys.h"
#include "sdk/tUnk.h"

// 0x0648b10 (0x27c bytes)
// strings: 00674f28: 'ConnectPort(): DESTINATION PORT IS INVALID!' | 00674e30: 'ConnectPort(): CANNOT CONNECT TO A SYNTH VOICE!' | 00674ee0: 'ConnectPort(): OUTPUT MUST BE FROM SAME OR LATER STAGE RACK!' | 00674e70: 'ConnectPort(): CHANNEL CONFIG OF SOURCE VOICE PORT IS INCOMPATIBLE WITH INPUT PORT OF TARGET VOICE!'

undefined4 idol::brbVoice_ConnectPort(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined *puVar4;
  undefined4 uVar5;
  char cVar6;
  undefined1 uVar7;
  byte local_70;
  GPiece<4> local_6c;
  byte local_68;
  char cStack_67;
  ushort uStack_66;
  GPiece<4> local_64;
  byte local_60;
  undefined8 local_58 [2];
  
  puVar4 = PTR_PTR_0071b08c;
  if (param_3 == 1) {
    param_3 = **(int **)(PTR_PTR_0071b08c + -0x7fdc);
  }
  else if (param_3 == 2) {
    param_3 = **(int **)(PTR_PTR_0071b08c + -0x7fd8);
  }
  uVar5 = *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x10);
  iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 0x18) + 0x18) + param_2 * 8 + 0x248);
  local_70 = (byte)((uint)*(undefined4 *)(*(int *)(param_3 + 0x18) + 0x10) >> 0x18);
  if (local_70 == 0) {
    FUN_00641910(1,*(undefined4 *)(PTR_PTR_0071b08c + -0x7fd4));
    uVar5 = 0xfffffff5;
  }
  else {
    uVar2 = *(undefined4 *)(*(int *)(*(int *)(param_3 + 0x18) + 0x18) + 0x24c);
    local_68 = (byte)((uint)uVar2 >> 0x18);
    if (((local_68 < 5) &&
        (cStack_67 = (char)((uint)uVar2 >> 0x10), 0xe8 < (byte)(cStack_67 - 0x16U))) &&
       (uStack_66 = (ushort)uVar2, uStack_66 < 0xbb81)) {
      cVar6 = FUN_0064eb50(local_6c,**(undefined4 **)(PTR_PTR_0071b08c + -0x7fd0),&local_68);
      if (cVar6 == '\0') {
        FUN_00641910(1,*(undefined4 *)(puVar4 + -0x7fcc));
        uVar5 = 0xfffffff5;
      }
      else {
        local_60 = (byte)((uint)uVar5 >> 0x18);
        if (local_70 < local_60) {
          FUN_00641910(1,*(undefined4 *)(puVar4 + -0x7fc8));
          uVar5 = 0xfffffff5;
        }
        else {
          FUN_006425f4(local_60,local_64);
          if (local_70 == local_60) {
            uVar7 = FUN_00643fe8(0);
            iVar3 = *(int *)(param_1 + 0x10);
            FUN_00647d94(local_58,param_3);
            *(int *)(param_1 + param_2 * 4 + 0x1c) = param_3;
            *(undefined8 *)(iVar3 + iVar1 * 8 + 0x18) = local_58[0];
            FUN_00644028(0,uVar7);
            uVar5 = 0;
          }
          else {
            iVar3 = *(int *)(param_1 + 0x10);
            FUN_00647d94(local_58,param_3);
            uVar5 = 0;
            *(int *)(param_1 + param_2 * 4 + 0x1c) = param_3;
            *(undefined8 *)(iVar3 + iVar1 * 8 + 0x18) = local_58[0];
          }
        }
      }
    }
    else {
      FUN_00641910(1,*(undefined4 *)(PTR_PTR_0071b08c + -0x7fc4));
      uVar5 = 0xfffffff5;
    }
  }
  return uVar5;
}


// 0x0648d8c (0x94 bytes)
undefined8
FUN_00648d8c(int param_1,int param_2,int param_3,int param_4,undefined8 param_5,undefined4 param_6,
            undefined4 param_7,longlong param_8)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined4 in_stack_00000074;
  char local_20;
  
  *(undefined4 *)(param_1 + 0x1c) = 0;
  puVar4 = PTR_PTR_0071b08c;
  *(int *)(param_1 + 0x18) = param_2;
  *(int *)(param_1 + 0x10) = param_3;
  *(int *)(param_1 + 0x14) = param_4;
  if (param_8 != 0) {
    *(undefined4 *)(param_3 + 8) = param_7;
    *(int *)(param_4 + 0x1c) = (int)param_8;
  }
  iVar2 = *(int *)(param_2 + 0x18);
  *(int *)(param_4 + 8) = param_4;
  *(undefined4 *)(param_4 + 4) = in_stack_00000074;
  uVar1 = *(undefined4 *)(puVar4 + -0x8000);
  *(undefined4 *)(param_4 + 0xc) = 0;
  uVar3 = *(undefined4 *)(iVar2 + 0x220);
  *(undefined4 *)(param_3 + 0xc) = uVar1;
  local_20 = (char)((uint)uVar3 >> 0x18);
  if (local_20 != '\0') {
    uVar1 = *(undefined4 *)(iVar2 + 0x24c);
    param_3 = *(int *)(iVar2 + 0x248) * 8 + param_3;
    *(undefined4 *)(param_3 + 0x18) = param_6;
    *(undefined4 *)(param_3 + 0x1c) = uVar1;
  }
  return 0;
}


// 0x0648e20 (0x78 bytes)
undefined8
FUN_00648e20(undefined4 *param_1,undefined4 param_2,undefined4 param_3,longlong param_4,
            longlong param_5,longlong param_6)

{
  float fVar1;
  undefined *puVar2;
  double dVar3;
  
  puVar2 = PTR_PTR_0071b090;
  fVar1 = *(float *)(PTR_PTR_0071b090 + -0x8000);
  *param_1 = 1;
  param_1[0xf] = param_2;
  param_1[0xe] = param_3;
  *(undefined8 *)(param_1 + 10) = *(undefined8 *)(puVar2 + -0x7ff8);
  param_1[0xc] = (int)param_5;
  param_1[0xd] = (int)param_4;
  param_1[5] = (int)param_6;
  dVar3 = ((double)param_5 * (double)fVar1) / (double)param_6;
  *(double *)(param_1 + 8) = dVar3;
  *(double *)(param_1 + 6) = dVar3 * (double)param_4;
  return 0;
}


// 0x0648e98 (0x28 bytes)
undefined8 FUN_00648e98(uint *param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  param_1[1] = param_2;
  param_1[3] = param_3;
  *param_1 = *param_1 | 2;
  param_1[2] = param_4;
  param_1[4] = param_5;
  return 0;
}


// 0x0648ec0 (0x1c bytes)
undefined8 FUN_00648ec0(uint *param_1)

{
  ulonglong uVar1;
  
  uVar1 = ((ulonglong)*param_1 & 1) << 0x1e | (ulonglong)(*param_1 >> 2);
  *param_1 = (uint)(uVar1 << 2) | (uint)uVar1 >> 0x1e;
  return 0;
}


// 0x0648edc (0x50 bytes)
undefined8 FUN_00648edc(undefined4 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(PTR_PTR_0071b090 + -0x7ff8);
  param_1[5] = 0;
  *(undefined8 *)(param_1 + 8) = uVar1;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[4] = 0;
  *param_1 = 0;
  *(undefined8 *)(param_1 + 6) = uVar1;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0xf] = 0;
  param_1[0xc] = 0;
  return 0;
}


// 0x0648f2c (0x50 bytes)
int FUN_00648f2c(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  
  if (*param_1 != 0) {
    param_1 = param_1 + 0x82;
    iVar2 = 0;
    lVar3 = 0x80;
    do {
      iVar1 = *param_1;
      param_1 = param_1 + 1;
      if (iVar1 == *param_2) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return -1;
}


// 0x0648f7c (0x34 bytes)
void FUN_00648f7c(int *param_1,int param_2,ulonglong param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = (int)((param_3 & 0xffffffff) << 2);
  uVar1 = *(undefined4 *)(param_2 + 0x220);
  *(int *)((int)param_1 + iVar2 + 8) = param_2;
  *(undefined4 *)((int)param_1 + iVar2 + 0x208) = uVar1;
  *param_1 = *param_1 + 1;
  return;
}


// 0x0648fb0 (0x34 bytes)
void FUN_00648fb0(int *param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)((param_2 & 0xffffffff) << 2);
  *(undefined4 *)((int)param_1 + iVar1 + 8) = 0;
  *(undefined4 *)((int)param_1 + iVar1 + 0x208) = 0;
  *param_1 = *param_1 + -1;
  return;
}


// 0x0648fe4 (0x98 bytes)
// strings: 00674f60: 'UnregisterPluginClass() called with bad index! (%d)' | 00674fa8: "UnregisterPluginClass() Can't unregister, slot %d is empty!"

undefined4 FUN_00648fe4(int param_1,uint param_2)

{
  undefined4 uVar1;
  
  if (param_2 < 0x81) {
    if (*(int *)(param_1 + param_2 * 4 + 8) == 0) {
      FUN_00641910(1,*(undefined4 *)(PTR_PTR_0071b094 + -0x7ffc));
      uVar1 = 0xffffffff;
    }
    else {
      FUN_00648fb0(param_1,param_2);
      uVar1 = 0;
    }
  }
  else {
    FUN_00641910(1,*(undefined4 *)(PTR_PTR_0071b094 + -0x8000),param_2);
    uVar1 = 0xffffffff;
  }
  return uVar1;
}


// 0x064907c (0x94 bytes)
// strings: 00674ff8: 'FindFreeSlot(): No available slots!'

int FUN_0064907c(int param_1)

{
  byte *pbVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = 0;
  lVar3 = 0x80;
  pbVar1 = (byte *)(param_1 + 0x208);
  while( true ) {
    if ((*(int *)pbVar1 == 0) || (3 < *pbVar1)) break;
    iVar2 = iVar2 + 1;
    lVar3 = lVar3 + -1;
    pbVar1 = pbVar1 + 4;
    if (lVar3 == 0) {
      FUN_00641910(2,*(undefined4 *)(PTR_PTR_0071b094 + -0x7ff8));
      return -1;
    }
  }
  return iVar2;
}


// 0x0649110 (0x194 bytes)
// strings: 00675070: 'RegisterPluginClass( %s ): ALREADY REGISTERED!' | 006750b8: "RegisterPluginClass( %s ): ALREADY REGISTERED AS '%s'!" | 00675030: 'RegisterPluginClass(): Plugin registry full!'

undefined4 FUN_00649110(int *param_1,void *param_2,int *param_3)

{
  void *__s1;
  int iVar1;
  undefined *puVar2;
  ulonglong uVar3;
  int iVar5;
  undefined4 uVar6;
  undefined8 uVar4;
  GPiece<16> local_50;
  
  puVar2 = PTR_PTR_0071b094;
  if (*param_1 == 0x80) {
    FUN_00641910(1,*(undefined4 *)(PTR_PTR_0071b094 + -0x7ff4));
    uVar6 = 0xffffffff;
  }
  else {
    uVar3 = FUN_00648f2c(param_1,local_50);
    if ((int)uVar3 == -1) {
LAB_0064921c:
      uVar4 = FUN_0064907c(param_1);
      FUN_00648f7c(param_1,param_2,uVar4);
      *param_3 = (int)uVar4;
      return 0;
    }
    __s1 = *(void **)((int)param_1 + (int)((uVar3 & 0xffffffff) << 2) + 8);
    iVar5 = memcmp(__s1,param_2,0x284);
    iVar1 = (int)__s1 + 8;
    if (iVar5 == 0) {
      FUN_00641910(2,*(undefined4 *)(puVar2 + -0x7ff0),(int)param_2 + 8,iVar1);
      uVar6 = 0;
      if (param_3 == (int *)0x0) goto LAB_0064921c;
      *param_3 = (int)uVar3;
    }
    else {
      FUN_00641910(1,*(undefined4 *)(puVar2 + -0x7fec),(int)param_2 + 8,iVar1);
      uVar6 = 0xffffffff;
    }
  }
  return uVar6;
}


// 0x06492a4 (0x2c bytes)
void FUN_006492a4(undefined8 param_1)

{
  memset(param_1,0,0x40c);
  return;
}


// 0x06492d0 (0x5c bytes)
undefined8 FUN_006492d0(int param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  memset(param_1,0,0x40c);
  *(undefined4 *)(param_1 + 0x408) = param_4;
  *(undefined4 *)(param_1 + 4) = param_3;
  return 0;
}


// 0x064932c (0x94 bytes)
// strings: 00675108: 'UnregisterPluginClass( %s ): CLASS NOT CURRENTLY REGISTERED!.'

undefined4 FUN_0064932c(undefined8 param_1,int param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  GPiece<24> local_30;
  
  puVar1 = PTR_PTR_0071b094;
  iVar2 = FUN_00648f2c(param_1,local_30);
  if (iVar2 == -1) {
    FUN_00641910(1,*(undefined4 *)(puVar1 + -0x7fe8),param_2 + 8);
    uVar3 = 0xffffffff;
  }
  else {
    FUN_00648fb0(param_1,iVar2);
    uVar3 = 0;
  }
  return uVar3;
}


// 0x06493c0 (0x69c bytes)
// strings: 00675620: '****  CheckPluginClass( %s ) ****\n\nINVALID PADDING FOR MODULE PARAMS OFFSET FOR UNUSED SLOT INDEX %d' | 00675ac0: '****  CheckPluginClass( %s ) ****\n\nINVALID SID!' | 00675b00: '****  CheckPluginClass( %s ) ****\n\nINVALID INPUT BUSS FORMAT FOR A NON SYNTH PLUGIN!' | 006751b8: '****  CheckPluginClass( %s ) ****\n\nINVALID PROC ADDRESS!' | 00675910: '****  CheckPluginClass( %s ) ****\n\nINVALID PADDING FOR MODULE STATES OFFSET FOR UNUSED SLOT INDEX %d' | 00675750: '****  CheckPluginClass( %s ) ****\n\nBAD PARAMS TOTAL SIZE!\nMISSING 1 OR MORE PARAMS PADDINGS IN PLUGIN CLASS' | 00675470: "****  CheckPluginClass( %s ) ****\n\nFOUND TOTAL STATES SIZE == 0!\nTHIS PLUGIN DOESN'T DO ANYTHING_q" | 00675158: '****  CheckPluginClass( %s ) ****\n\nBRB VERSION MISMATCH (0x%0X SHOULD BE 0x%0X)!' | 00675a40: '****  CheckPluginClass( %s ) ****\n\nBAD STATES TOTAL SIZE!\nMISSING 1 OR MORE STATES PADDINGS IN PLUGIN CLASS' | 006754e0: '****  CheckPluginClass( %s ) ****\n\nPARAM MODULE ID INDEX (%d) DOES NOT MATCH THE SLOT INDEX (%d)!' | 00675550: '****  CheckPluginClass( %s ) ****\n\nEXPECTED VALID PARAMS OFFSET FOR MODULE INDEX %d, BUT FOUND PADDING!' | 006755c8: '****  CheckPluginClass( %s ) ****\n\nBAD PARAMS OFFSET FOR MODULE INDEX %d!' | 00675260: '****  CheckPluginClass( %s ) ****\n\nNUM PORTS (%d) DOES NOT MATCH NUMBER OF VALID PORTS IN PORT MAP (%d)' | 006758b8: '****  CheckPluginClass( %s ) ****\n\nBAD STATES OFFSET FOR MODULE INDEX %d!' | 00675390: '****  CheckPluginClass( %s ) ****\n\nNUM VOICES PER PACKET %d MUST BE A POWER OF 2' | 00675840: '****  CheckPluginClass( %s ) ****\n\nEXPECTED VALID STATES OFFSET FOR MODULE INDEX %d, BUT FOUND PADDING!' | 006757d0: '****  CheckPluginClass( %s ) ****\n\nSTATES MODULE ID INDEX (%d) DOES NOT MATCH THE SLOT INDEX (%d)!' | 00675200: '****  CheckPluginClass( %s ) ****\n\nBAD NUMBER OF BUSS PORTS %d (MIN %d, MAX %d)' | 006752d8: '****  CheckPluginClass( %s ) ****\n\nBAD WORK AREA SIZE %d (MIN %d, MAX %d)' | 00675330: '****  CheckPluginClass( %s ) ****\n\nTOO MANY VOICES PER PACKET %d (BRB_MAX %d)' | 006753f0: '****  CheckPluginClass( %s ) ****\n\nFOUND TOTAL PARAMS SIZE == 0!\nHOW DO YOU PLAN ON CONTROLLING THIS PLUGIN_q' | 00675698: '****  CheckPluginClass( %s ) ****\n\nPARAMS MODULE COUNT %d SHOULD BE %d!' | 006756f0: '****  CheckPluginClass( %s ) ****\n\nPARAMS MODULE PADDING COUNT %d SHOULD BE %d!' | 006759e0: '****  CheckPluginClass( %s ) ****\n\nSTATES MODULE PADDING COUNT %d SHOULD BE %d!' | 00675988: '****  CheckPluginClass( %s ) ****\n\nSTATES MODULE COUNT %d SHOULD BE %d!'

undefined4 FUN_006493c0(undefined8 param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  byte local_3c;
  byte local_38;
  byte local_34;
  char cStack_33;
  ushort uStack_32;
  byte local_30;
  
  if (*(int *)(param_2 + 0x280) == 0x10022) {
    if ((*(int *)(param_2 + 0x220) == 0) ||
       (local_38 = (byte)((uint)*(int *)(param_2 + 0x220) >> 0x18), 3 < local_38)) {
      FUN_00641910(1,*(undefined4 *)(PTR_PTR_0071b094 + -0x7f88),param_2 + 8);
      uVar4 = 0xffffffff;
    }
    else if ((*(int *)(param_2 + 0x228) == 0) || (*(int *)(param_2 + 0x22c) == 0)) {
      FUN_00641910(1,*(undefined4 *)(PTR_PTR_0071b094 + -0x7fe0),param_2 + 8);
      uVar4 = 0xffffffff;
    }
    else {
      iVar3 = *(int *)(param_2 + 0x244);
      uVar5 = 0;
      iVar9 = 0;
      lVar11 = 5;
      if (iVar3 - 1U < 5) {
        do {
          iVar1 = iVar9 + param_2;
          iVar9 = iVar9 + 8;
          uVar2 = ~*(uint *)(iVar1 + 0x248);
          uVar8 = (int)uVar2 >> 0x1f;
          uVar5 = uVar5 - ((longlong)((ulonglong)(uVar8 - (uVar8 ^ uVar2)) << 0x20) >> 0x3f);
          lVar11 = lVar11 + -1;
        } while (lVar11 != 0);
        if ((int)uVar5 == iVar3) {
          uVar8 = *(int *)(param_2 + 0x270) + 0x7fU & 0xffffff80;
          if (uVar8 < 0x100001) {
            if (local_38 != 0) {
              uVar4 = *(undefined4 *)(param_2 + 0x24c);
              local_34 = (byte)((uint)uVar4 >> 0x18);
              if (((4 < local_34) ||
                  (cStack_33 = (char)((uint)uVar4 >> 0x10), (byte)(cStack_33 - 0x16U) < 0xe9)) ||
                 (uStack_32 = (ushort)uVar4, 48000 < uStack_32)) {
                FUN_00641910(1,*(undefined4 *)(PTR_PTR_0071b094 + -0x7f84),param_2 + 8);
                return 0xffffffff;
              }
            }
            uVar8 = *(uint *)(param_2 + 0x230);
            if (uVar8 - 1 < 4) {
              if ((uVar8 & -uVar8) == uVar8) {
                uVar8 = *(uint *)(param_2 + 0xa4);
                uVar2 = *(uint *)(param_2 + 0x124);
                if (uVar8 == 0) {
                  FUN_00641910(1,*(undefined4 *)(PTR_PTR_0071b094 + -0x7fc8),param_2 + 8);
                  uVar4 = 0xffffffff;
                }
                else if (uVar2 == 0) {
                  FUN_00641910(1,*(undefined4 *)(PTR_PTR_0071b094 + -0x7fc4),param_2 + 8);
                  uVar4 = 0xffffffff;
                }
                else {
                  puVar6 = (uint *)(param_2 + 0x28);
                  lVar11 = 0x1f;
                  iVar9 = 0;
                  iVar3 = 0;
                  uVar7 = 0;
                  uVar10 = 0;
                  do {
                    if (puVar6[0x40] == 0) {
                      iVar9 = iVar9 + 1;
                      if ((*puVar6 < uVar7) || (uVar8 < *puVar6)) {
                        FUN_00641910(1,*(undefined4 *)(PTR_PTR_0071b094 + -0x7fb4),param_2 + 8,
                                     uVar10);
                        return 0xffffffff;
                      }
                    }
                    else {
                      local_3c = (byte)(puVar6[0x40] >> 0x18);
                      iVar3 = iVar3 + 1;
                      uVar7 = *puVar6;
                      if (local_3c != uVar10) {
                        FUN_00641910(1,*(undefined4 *)(PTR_PTR_0071b094 + -0x7fc0),param_2 + 8,
                                     local_3c,uVar10);
                        return 0xffffffff;
                      }
                      if (uVar8 == uVar7) {
                        FUN_00641910(1,*(undefined4 *)(PTR_PTR_0071b094 + -0x7fbc),param_2 + 8,
                                     uVar10);
                        return 0xffffffff;
                      }
                      if (0x19000 < uVar7) {
                        FUN_00641910(1,*(undefined4 *)(PTR_PTR_0071b094 + -0x7fb8),param_2 + 8,
                                     uVar10);
                        return 0xffffffff;
                      }
                    }
                    uVar10 = uVar10 + 1;
                    puVar6 = puVar6 + 1;
                    lVar11 = lVar11 + -1;
                  } while (lVar11 != 0);
                  if (iVar3 == *(int *)(param_2 + 0x234)) {
                    if (iVar9 == 0x1f - iVar3) {
                      if ((uVar7 == 0) || (uVar7 < uVar8)) {
                        puVar6 = (uint *)(param_2 + 0xa8);
                        iVar9 = 0;
                        lVar11 = 0x1f;
                        iVar3 = 0;
                        uVar8 = 0;
                        uVar7 = 0;
                        do {
                          if (puVar6[0x3f] == 0) {
                            iVar9 = iVar9 + 1;
                            if ((*puVar6 < uVar8) || (uVar2 < *puVar6)) {
                              FUN_00641910(1,*(undefined4 *)(PTR_PTR_0071b094 + -0x7f98),param_2 + 8
                                           ,uVar7);
                              return 0xffffffff;
                            }
                          }
                          else {
                            local_30 = (byte)(puVar6[0x3f] >> 0x18);
                            iVar3 = iVar3 + 1;
                            uVar8 = *puVar6;
                            if (uVar7 != local_30) {
                              FUN_00641910(1,*(undefined4 *)(PTR_PTR_0071b094 + -0x7fa4),param_2 + 8
                                           ,local_30,uVar7);
                              return 0xffffffff;
                            }
                            if (uVar2 == uVar8) {
                              FUN_00641910(1,*(undefined4 *)(PTR_PTR_0071b094 + -0x7fa0),param_2 + 8
                                           ,uVar7);
                              return 0xffffffff;
                            }
                            if (((uVar8 & 0xf) != 0) || (0x19000 < uVar8)) {
                              FUN_00641910(1,*(undefined4 *)(PTR_PTR_0071b094 + -0x7f9c),param_2 + 8
                                           ,uVar7);
                              return 0xffffffff;
                            }
                          }
                          uVar7 = uVar7 + 1;
                          puVar6 = puVar6 + 1;
                          lVar11 = lVar11 + -1;
                        } while (lVar11 != 0);
                        if (iVar3 == *(int *)(param_2 + 0x238)) {
                          if (iVar9 == 0x1f - iVar3) {
                            if ((uVar8 == 0) || (uVar8 < uVar2)) {
                              uVar4 = 0;
                            }
                            else {
                              FUN_00641910(1,*(undefined4 *)(PTR_PTR_0071b094 + -0x7f8c),param_2 + 8
                                          );
                              uVar4 = 0xffffffff;
                            }
                          }
                          else {
                            FUN_00641910(1,*(undefined4 *)(PTR_PTR_0071b094 + -0x7f90),param_2 + 8,
                                         iVar9,0x1f - iVar3);
                            uVar4 = 0xffffffff;
                          }
                        }
                        else {
                          FUN_00641910(1,*(undefined4 *)(PTR_PTR_0071b094 + -0x7f94),param_2 + 8,
                                       *(int *)(param_2 + 0x238),iVar3);
                          uVar4 = 0xffffffff;
                        }
                      }
                      else {
                        FUN_00641910(1,*(undefined4 *)(PTR_PTR_0071b094 + -0x7fa8),param_2 + 8);
                        uVar4 = 0xffffffff;
                      }
                    }
                    else {
                      FUN_00641910(1,*(undefined4 *)(PTR_PTR_0071b094 + -0x7fac),param_2 + 8,iVar9,
                                   0x1f - iVar3);
                      uVar4 = 0xffffffff;
                    }
                  }
                  else {
                    FUN_00641910(1,*(undefined4 *)(PTR_PTR_0071b094 + -0x7fb0),param_2 + 8,
                                 *(int *)(param_2 + 0x234),iVar3);
                    uVar4 = 0xffffffff;
                  }
                }
              }
              else {
                FUN_00641910(1,*(undefined4 *)(PTR_PTR_0071b094 + -0x7fcc),param_2 + 8,uVar8);
                uVar4 = 0xffffffff;
              }
            }
            else {
              FUN_00641910(1,*(undefined4 *)(PTR_PTR_0071b094 + -0x7fd0),param_2 + 8,uVar8,4);
              uVar4 = 0xffffffff;
            }
          }
          else {
            FUN_00641910(1,*(undefined4 *)(PTR_PTR_0071b094 + -0x7fd4),param_2 + 8,uVar8,0,0x100000)
            ;
            uVar4 = 0xffffffff;
          }
        }
        else {
          FUN_00641910(1,*(undefined4 *)(PTR_PTR_0071b094 + -0x7fd8),param_2 + 8,iVar3,
                       uVar5 & 0xffffffff);
          uVar4 = 0xffffffff;
        }
      }
      else {
        FUN_00641910(1,*(undefined4 *)(PTR_PTR_0071b094 + -0x7fdc),param_2 + 8,iVar3,1,5);
        uVar4 = 0xffffffff;
      }
    }
  }
  else {
    FUN_00641910(1,*(undefined4 *)(PTR_PTR_0071b094 + -0x7fe4),param_2 + 8,*(int *)(param_2 + 0x280)
                 ,0x10022);
    uVar4 = 0xffffffff;
  }
  return uVar4;
}


// 0x0649a5c (0xd8 bytes)
void FUN_00649a5c(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined *puVar2;
  ulonglong uVar3;
  
  puVar2 = PTR_PTR_0071b098;
  if ((param_1 == 1) && (param_2 == 0xffff)) {
    uVar3 = FUN_004fa5b4(*(undefined4 *)(PTR_PTR_0071b098 + -0x8000));
    puVar1 = *(undefined4 **)(puVar2 + -0x7ffc);
    puVar1[0x10] = 0;
    puVar1[10] = 0;
    syscall();
    puVar1[0xe] = 0;
    *(undefined8 *)(puVar1 + 2) = 0;
    *(undefined8 *)(puVar1 + 4) = 0;
    *(undefined8 *)(puVar1 + 6) = 0;
    *(undefined8 *)(puVar1 + 8) = 0;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    puVar1[0xd] = 0;
    puVar1[1] = 0;
    *puVar1 = 0;
    puVar1[0xf] = (int)(3200000000 / uVar3);
    return;
  }
  return;
}


// 0x0649b34 (0x10 bytes)
void FUN_00649b34(void)

{
  FUN_00649a5c(1,0xffff);
  return;
}


// 0x0649b44 (0x104 bytes)
// strings: 00675c38: 'Warning: Did you forget to use BRB_MULTI_TRACE_END()?!?!'

undefined8 FUN_00649b44(undefined8 param_1,undefined8 param_2,uint param_3)

{
  undefined8 uVar1;
  
  if (**(char **)(PTR_PTR_0071b098 + -0x7ff4) != '\0') {
    if (param_3 < 7) {
                    /* WARNING: Could not recover jumptable at 0x00649c04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)(*(int *)((param_3 & 0xffff) * 4 + *(int *)(PTR_PTR_0071b098 + -0x7ff0)) +
                        *(int *)(PTR_PTR_0071b098 + -0x7ff0)))();
      return uVar1;
    }
    if (0x20 < **(int **)(PTR_PTR_0071b098 + -0x7fdc)) {
      FUN_005c756c(*(undefined4 *)(PTR_PTR_0071b098 + -0x7f98));
      return 0;
    }
  }
  return 0;
}


// 0x064a104 (0x258 bytes)
void FUN_0064a104(int param_1,undefined4 param_2,int param_3)

{
  bool bVar1;
  char cVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  int iVar10;
  int iVar11;
  float *pfVar12;
  float fVar13;
  float fVar14;
  undefined *puVar15;
  int iVar17;
  ulonglong uVar16;
  uint uVar18;
  int iVar19;
  GPiece<40> local_50;
  
  puVar15 = PTR_PTR_0071b098;
  if (**(char **)(PTR_PTR_0071b098 + -0x7ff4) != '\0') {
    uVar5 = *(undefined4 *)(PTR_PTR_0071b098 + -0x8000);
    FUN_004f9c74(uVar5,param_2,*(undefined4 *)(PTR_PTR_0071b098 + -0x7f94),0,local_50);
    FUN_004f9e90(uVar5,param_2);
    puVar6 = *(uint **)(puVar15 + -0x7f90);
    cVar2 = **(char **)(puVar15 + -0x7f8c);
    uVar18 = param_3 + *puVar6;
    *puVar6 = uVar18;
    if ((cVar2 != '\0') && (*(uint *)(param_1 + 0xc) <= uVar18)) {
      uVar7 = *(uint *)(param_1 + 4);
      uVar8 = *(uint *)(param_1 + 8);
      puVar9 = *(undefined4 **)(puVar15 + -0x7ffc);
      iVar10 = *(int *)(param_1 + 0x10);
      iVar19 = 0;
      fVar3 = *(float *)(puVar15 + -0x7f88);
      puVar9[1] = 0;
      puVar9[0xe] = 0;
      *puVar9 = 0;
      *(undefined8 *)(puVar9 + 2) = 0;
      *(undefined8 *)(puVar9 + 4) = 0;
      *(undefined8 *)(puVar9 + 6) = 0;
      *(undefined8 *)(puVar9 + 8) = 0;
      puVar9[0xb] = 0;
      puVar9[0xc] = 0;
      puVar9[0xd] = 0;
      fVar4 = *(float *)(puVar15 + -0x7f7c);
      fVar13 = *(float *)(puVar15 + -0x7f74) / ((float)uVar18 * ((float)uVar7 / (float)uVar8));
      do {
        iVar17 = *(int *)(iVar19 + iVar10);
        while (iVar17 != 0) {
          while( true ) {
            uVar16 = (ulonglong)(uint)puVar9[0xf] * *(longlong *)(iVar17 + 0x68);
            if (-1 < (longlong)uVar16) break;
            iVar11 = *(int *)(iVar17 + 4);
            *(undefined8 *)(iVar17 + 0x68) = 0;
            *(undefined4 *)(*(int *)(iVar17 + 0x84) + 0x10) = 0;
            fVar14 = (float)uVar16 * fVar13;
            fVar4 = fVar4 + fVar14;
            *(float *)(iVar17 + 0x70) = fVar14 * fVar3;
            iVar17 = iVar11;
            if (iVar11 == 0) goto LAB_0064a318;
          }
          fVar14 = (float)(longlong)uVar16 * fVar13;
          iVar11 = *(int *)(iVar17 + 4);
          *(undefined8 *)(iVar17 + 0x68) = 0;
          *(undefined4 *)(*(int *)(iVar17 + 0x84) + 0x10) = 0;
          fVar4 = fVar4 + fVar14;
          *(float *)(iVar17 + 0x70) = fVar14 * fVar3;
          iVar17 = iVar11;
        }
LAB_0064a318:
        bVar1 = iVar19 == 0x690;
        iVar19 = iVar19 + 0x230;
        if (bVar1) {
          pfVar12 = *(float **)(puVar15 + -0x7f80);
          *puVar6 = 0;
          *pfVar12 = fVar4 * fVar3;
          return;
        }
      } while( true );
    }
  }
  return;
}


// 0x064a35c (0x104 bytes)
void FUN_0064a35c(int param_1,int *param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined *puVar4;
  
  puVar4 = PTR_PTR_0071b098;
  pcVar1 = *(char **)(PTR_PTR_0071b098 + -0x7ff4);
  if (*pcVar1 != '\0') {
    uVar2 = *(undefined4 *)(PTR_PTR_0071b098 + -0x8000);
    FUN_004f95dc(uVar2,0);
    FUN_004f95e8(uVar2,0);
    FUN_004f9e90(uVar2,0);
    FUN_004f9e90(uVar2,1);
    FUN_004fa73c(uVar2);
    puVar3 = *(undefined4 **)(puVar4 + -0x7f6c);
    (*(code *)**(undefined4 **)(*param_2 + 4))(param_2,*puVar3,0xfff0147,0,0);
    *pcVar1 = '\0';
    *puVar3 = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  return;
}


// 0x064a460 (0x50 bytes)
// strings: 00675c78: 'Initialize(): Rounding requested auditBufferSize (%d bytes) to %d bytes!'

undefined8 FUN_0064a460(undefined8 param_1,undefined8 param_2,int param_3)

{
  if (param_3 - 1U < 0xffff) {
    FUN_00641910(3,*(undefined4 *)(PTR_PTR_0071b098 + -0x7f68),param_3,0x10000);
  }
  return 0;
}


// 0x064a4b0 (0xc8 bytes)
uint FUN_0064a4b0(undefined4 param_1,undefined4 param_2,ulonglong param_3,undefined4 param_4,
                 undefined1 param_5,undefined2 param_6,undefined2 param_7,undefined4 param_8)

{
  uint uVar1;
  undefined4 *in_stack_00000074;
  
  uVar1 = 0;
  if (**(char **)(PTR_PTR_0071b098 + -0x7ff4) != '\0') {
    if ((param_3 & 0xffffffff) < 0x11) {
                    /* WARNING: Could not recover jumptable at 0x0064a574. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)(*(int *)(((uint)((param_3 & 0xffffffff) << 2) & 0x3fffc) +
                                 *(int *)(PTR_PTR_0071b098 + -0x7f64)) +
                        *(int *)(PTR_PTR_0071b098 + -0x7f64)))();
      return uVar1;
    }
    uVar1 = FUN_00649b44(param_1,param_2,param_3 - *(uint *)*in_stack_00000074 & 0xffff,param_4,
                         param_5,param_6,param_7,param_8);
    uVar1 = uVar1 & 0xff;
  }
  return uVar1;
}


// 0x064a780 (0x2e8 bytes)
// strings: 00675d10: 'cellAudioOutConfigure() FAILED!' | 00675d30: '*******************************************************************' | 00675dc8: 'Audio output: %d channels of %s @ 48kHz sample rate' | 00675d78: 'Maximum detected channel count (%d) overridden to %d!'

uint FUN_0064a780(undefined8 param_1,int param_2,uint param_3,uint param_4)

{
  undefined4 uVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined *puVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  GPiece<24> local_60;
  
  puVar5 = PTR_PTR_0071b09c;
  uVar6 = cellAudioOutGetSoundAvailability(0,0,4,0);
  uVar9 = 0;
  if ((param_3 & 0x20) == 0) {
    uVar9 = cellAudioOutGetSoundAvailability(0,1,4,0);
  }
  uVar8 = 0;
  if ((param_3 & 0x40) == 0) {
    uVar8 = cellAudioOutGetSoundAvailability(0,6,4,0);
  }
  if (uVar9 <= uVar6) {
    bVar3 = false;
    bVar4 = false;
    if (uVar8 <= uVar6) goto joined_r0x0064a8b4;
  }
  bVar3 = true;
  bVar4 = true;
  uVar6 = uVar8;
  if (uVar8 < uVar9) {
    bVar4 = false;
    uVar6 = uVar9;
  }
joined_r0x0064a8b4:
  if (((param_4 == 2) || (param_4 == 6)) || (param_4 == 8)) {
    bVar2 = true;
  }
  else {
    if (bVar3) {
      iVar7 = cellAudioOutConfigure(0,local_60,0,0);
    }
    else {
      iVar7 = cellAudioOutConfigure(0,local_60,0,0);
    }
    bVar2 = false;
    param_4 = uVar6;
    if (iVar7 != 0) {
      bVar2 = false;
      FUN_00641910(3,*(undefined4 *)(puVar5 + -0x8000));
    }
  }
  if ((param_3 & 8) == 0) {
    uVar1 = *(undefined4 *)(puVar5 + -0x7ffc);
    FUN_00641910(3,uVar1);
    if ((bVar2) && (param_2 == 0)) {
      FUN_00641910(3,*(undefined4 *)(puVar5 + -0x7ff8),uVar6,param_4);
    }
    else {
      if (bVar3) {
        if (bVar4) {
          uVar10 = *(undefined4 *)(puVar5 + -0x7ff0);
        }
        else {
          uVar10 = *(undefined4 *)(puVar5 + -0x7fec);
        }
      }
      else {
        uVar10 = *(undefined4 *)(puVar5 + -0x7ff4);
      }
      FUN_00641910(3,*(undefined4 *)(puVar5 + -0x7fe8),param_4,uVar10);
    }
    FUN_00641910(3,uVar1);
    return param_4;
  }
  return param_4;
}


// 0x064aa68 (0x158 bytes)
undefined8 FUN_0064aa68(uint *param_1)

{
  if ((*param_1 & 3) == 3) {
    FUN_00648ec0(param_1);
    if (*(longlong *)(param_1 + 0x10) != 0xffffffff) {
      syscall();
      param_1[0x10] = 0;
      param_1[0x11] = 0xffffffff;
    }
    if (param_1[0x14] != 0xffffffff) {
      syscall();
      syscall();
      syscall();
      param_1[0x14] = 0xffffffff;
    }
    if (param_1[0x15] != 0xffffffff) {
      syscall();
      param_1[0x15] = 0xffffffff;
    }
    if (*(longlong *)(param_1 + 0x12) != 0xffffffff) {
      syscall();
      param_1[0x12] = 0;
      param_1[0x13] = 0xffffffff;
      if (param_1[0x16] != 0xffffffff) {
        syscall();
        syscall();
        param_1[0x16] = 0xffffffff;
      }
      if (param_1[0x17] != 0xffffffff) {
        syscall();
        param_1[0x17] = 0xffffffff;
        return 0;
      }
    }
  }
  return 0;
}


// 0x064abc0 (0xfc bytes)
undefined4 FUN_0064abc0(int param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  puVar1 = PTR_PTR_0071b09c;
  FUN_0064aa68();
  if (*(int *)(param_1 + 0x60) != -1) {
    cellAudioPortStop(*(int *)(param_1 + 0x60));
    cellAudioPortClose(*(undefined4 *)(param_1 + 0x60));
    *(undefined4 *)(param_1 + 0x60) = 0xffffffff;
  }
  if (*(int *)(param_1 + 100) != -1) {
    cellAudioPortStop(*(int *)(param_1 + 100));
    cellAudioPortClose(*(undefined4 *)(param_1 + 100));
    *(undefined4 *)(param_1 + 100) = 0xffffffff;
  }
  if (*(char *)(param_1 + 0x9c) == '\0') {
    cellAudioQuit();
  }
  *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(puVar1 + -0x7fe0);
  *(undefined1 *)(param_1 + 0x9c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  uVar2 = FUN_00648edc(param_1);
  return uVar2;
}


// 0x064acbc (0x468 bytes)
// strings: 00675e00: 'BRB DRIVER: ! EVENT QUEUE FULL -> CLIENT THREAD FALLING BEHIND !'

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0064acbc(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined *puVar6;
  ulonglong uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  byte in_cr0;
  byte in_cr1;
  byte in_cr2;
  byte in_cr3;
  byte unaff_cr4;
  byte in_cr5;
  byte in_cr6;
  byte in_cr7;
  double dVar15;
  ulonglong uVar16;
  double dVar17;
  uint uStack00000008;
  
  puVar6 = PTR_PTR_0071b09c;
  uStack00000008 =
       (uint)(in_cr0 & 0xf) << 0x1c | (uint)(in_cr1 & 0xf) << 0x18 | (uint)(in_cr2 & 0xf) << 0x14 |
       (uint)(in_cr3 & 0xf) << 0x10 | (uint)(unaff_cr4 & 0xf) << 0xc | (uint)(in_cr5 & 0xf) << 8 |
       (uint)(in_cr6 & 0xf) << 4 | (uint)(in_cr7 & 0xf);
  uVar7 = (ulonglong)((int)param_1[0x1d] >> 0x1f);
  uVar1 = param_1[0x1e];
  uVar2 = param_1[0xf];
  *(undefined8 *)(param_1 + 10) = *(undefined8 *)(PTR_PTR_0071b09c + -0x7fe0);
  lVar4 = uVar7 - (uVar7 ^ param_1[0x1d]) << 0x20;
  uVar3 = param_1[0x15];
  dVar15 = (double)param_1[0x1f] * *(double *)(param_1 + 0x22);
  uVar7 = syscall_sys_time_get_timebase_frequency();
  dVar15 = (double)uVar7 * dVar15 * *(double *)(puVar6 + -0x7fd8);
  uVar7 = (ulonglong)dVar15;
  if (*(double *)(puVar6 + -0x7fc8) <= dVar15) {
    uVar7 = (longlong)(dVar15 - *(double *)(puVar6 + -0x7fc8)) ^ 0x8000000000000000;
  }
  uVar10 = 0xffffffff;
  uVar9 = 0xffffffff;
  do {
    uVar14 = *param_1;
    while( true ) {
      if ((uVar14 & 3) != 3) {
        sys_ppu_thread_exit(1);
        return;
      }
      syscall_sys_time_get_timebase_frequency(uVar3);
      dVar17 = (double)(float)param_1[0x24];
      dVar15 = (double)FUN_005dc924((double)(float)((double)*(ulonglong *)param_1[0x1c] * dVar17));
      uVar14 = (uint)dVar15;
      iVar8 = 0;
      if (lVar4 < 0) {
        dVar15 = (double)FUN_005dc924((double)(float)(dVar17 * (double)*(ulonglong *)param_1[0x1d]))
        ;
        iVar8 = (int)dVar15;
      }
      if (uVar10 == 0xffffffff) {
        uVar9 = param_1[0x20] - 1 & iVar8 + param_1[0x1f];
        uVar10 = uVar14 + param_1[0x1f] & param_1[0x20] - 1;
      }
      iVar8 = -uVar10;
      if (uVar14 <= uVar10) {
        iVar8 = param_1[0x20] - uVar10;
      }
      uVar14 = uVar14 + iVar8;
      dVar15 = *(double *)(param_1 + 10);
      if (uVar14 < param_1[0x20]) {
        if (uVar14 != 0) {
          uVar11 = 1;
          uVar13 = 0;
          do {
            iVar8 = 0;
            uVar12 = uVar11;
            if (uVar14 - 1 == uVar13) {
              uVar12 = uVar11 | 2;
            }
            if (lVar4 < 0) {
              iVar8 = uVar9 * uVar1 * 8 + param_1[0x1b];
            }
            do {
              lVar5 = TBLr;
            } while ((int)lVar5 == 0);
            dVar17 = *(double *)(param_1 + 10);
            uVar16 = (ulonglong)dVar17;
            uVar13 = uVar13 + 1;
            uVar11 = uVar12 & 0xfffffffe;
            if (*(double *)(puVar6 + -0x7fc8) <= dVar17) {
              uVar16 = (longlong)(dVar17 - *(double *)(puVar6 + -0x7fc8)) ^ 0x8000000000000000;
            }
            (**(code **)param_1[1])
                      (param_1[0x1a] + uVar1 * uVar2 * 4 * uVar10,iVar8,param_1[0x1e],uVar16,
                       param_1[3],uVar12,uVar7 + lVar5);
            uVar10 = uVar10 + 1 & param_1[0x20] - 1;
            uVar9 = param_1[0x20] - 1 & uVar9 + 1;
            *(double *)(param_1 + 10) = *(double *)(param_1 + 10) + *(double *)(param_1 + 0x22);
          } while (uVar14 != uVar13);
        }
      }
      else {
        uVar14 = 0;
      }
      if ((param_1[0x16] == 0xffffffff) || (uVar14 == 0)) break;
      uVar11 = (ulonglong)dVar15;
      if (*(double *)(puVar6 + -0x7fc8) <= dVar15) {
        uVar11 = (longlong)(dVar15 - *(double *)(puVar6 + -0x7fc8)) ^ 0x8000000000000000;
      }
      iVar8 = syscall_sys_time_get_timebase_frequency(param_1[0x16],uVar14,uVar11);
      if (iVar8 == 0) break;
      FUN_00641910(2,*(undefined4 *)(puVar6 + -0x7fd0));
      uVar14 = *param_1;
    }
  } while( true );
}


// 0x064b124 (0x52c bytes)
// strings: 00675f50: 'brbDriver_Initialize(): HARD CODED SAMPLERATE ( %d Hz ).' | 00675f10: 'brbDriver_Initialize(): NUM CHANNELS ( %d ) CLAMPED TO %d.' | 00675f90: 'Initialize(): cellAudioInit() has already been called!' | 00675e90: 'brbDriver_Initialize(): YOUR RECEIVER MIGHT CURRENTLY BE OFF!' | 00675fd8: 'Initialize(): cellAudioInit failed with error 0x%X' | 00675e48: 'cellSysmoduleLoadModule(CELL_SYSMODULE_AUDIO) failed with error 0x%x' | 00675ed0: 'brbDriver_Initialize() INSUFFICIENT NUM CHANNELS ( %d )!.'

undefined4 FUN_0064b124(int param_1,undefined8 param_2,uint *param_3)

{
  double dVar1;
  float fVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  float fVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  ulonglong uVar12;
  undefined4 *puVar13;
  byte in_cr0;
  byte in_cr1;
  byte in_cr2;
  byte in_cr3;
  byte unaff_cr4;
  byte in_cr5;
  byte in_cr6;
  byte in_cr7;
  longlong lVar14;
  double dVar15;
  double dVar16;
  uint uStack00000008;
  GPiece<32> local_f0;
  undefined4 local_d0 [7];
  undefined4 local_b4;
  
  puVar3 = PTR_PTR_0071b09c;
  uStack00000008 =
       (uint)(in_cr0 & 0xf) << 0x1c | (uint)(in_cr1 & 0xf) << 0x18 | (uint)(in_cr2 & 0xf) << 0x14 |
       (uint)(in_cr3 & 0xf) << 0x10 | (uint)(unaff_cr4 & 0xf) << 0xc | (uint)(in_cr5 & 0xf) << 8 |
       (uint)(in_cr6 & 0xf) << 4 | (uint)(in_cr7 & 0xf);
  iVar4 = cellSysmoduleLoadModule(0x11);
  if (iVar4 != 0) {
    FUN_00641910(1,*(undefined4 *)(puVar3 + -0x7fc0),iVar4);
    return 0xffffffff;
  }
  uVar5 = FUN_0064a780(param_1,param_3[7] & 1,param_3[7],param_3[1]);
  if (uVar5 == 0) {
    FUN_00641910(2,*(undefined4 *)(puVar3 + -0x7fbc));
  }
  uVar7 = *param_3;
  if (uVar7 < 2) {
    FUN_00641910(1,*(undefined4 *)(puVar3 + -0x7fb8),uVar7);
    return 0xffffffff;
  }
  if ((uVar5 == 0) || (uVar7 <= uVar5)) {
    uVar5 = param_3[4];
    if (uVar5 != 48000) goto LAB_0064b1f8;
  }
  else {
    FUN_00641910(2,*(undefined4 *)(puVar3 + -0x7fb4),uVar7,uVar5);
    *param_3 = uVar5;
    if (param_3[4] == 48000) {
      uVar5 = 48000;
    }
    else {
LAB_0064b1f8:
      uVar5 = 48000;
      FUN_00641910(2,*(undefined4 *)(puVar3 + -0x7fb0),48000);
      param_3[4] = 48000;
    }
  }
  uVar7 = param_3[3];
  uVar6 = (ulonglong)uVar7;
  uVar12 = uVar6;
  if ((uVar7 & -uVar7) == uVar7) {
LAB_0064b420:
    fVar9 = *(float *)(puVar3 + -0x7f9c);
    param_3[3] = (uint)uVar12;
    fVar2 = *(float *)(puVar3 + -0x7f94);
    if (0x7f < uVar12) {
      if (0x200 < uVar12) {
        uVar12 = 0x200;
      }
      param_3[3] = (uint)uVar12;
      dVar15 = (double)uVar12;
      dVar16 = (double)(float)(dVar15 * (double)*(float *)(puVar3 + -0x7f8c));
      dVar1 = (double)param_3[2] * dVar16;
      goto joined_r0x0064b498;
    }
  }
  else {
    uVar8 = 2;
    lVar14 = 0x1f;
    if (uVar7 == 0) goto LAB_0064b420;
    do {
      if (uVar6 < uVar8) {
        uVar12 = (uVar8 << 0x20) >> 0x21;
        if ((uVar8 - uVar6 & 0xffffffff) <= (uVar8 << 0x20) >> 0x22) {
          uVar12 = uVar8;
        }
        goto LAB_0064b420;
      }
      uVar8 = (uVar8 & 0x7fffffff) << 1;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
    fVar9 = *(float *)(puVar3 + -0x7f9c);
    fVar2 = *(float *)(puVar3 + -0x7f94);
    param_3[3] = (uint)uVar8;
  }
  dVar16 = (double)fVar2;
  dVar15 = (double)fVar9;
  param_3[3] = 0x80;
  dVar1 = (double)param_3[2] * dVar16;
joined_r0x0064b498:
  if (((longlong)dVar1 & 0xffffffffU) < 9) {
    fVar9 = 2048.0;
    FUN_00648e20(param_1,8,*param_3,8,0x100,uVar5);
    iVar4 = cellAudioInit();
  }
  else {
    fVar9 = 8192.0;
    FUN_00648e20(param_1,8,*param_3,0x20,0x100,uVar5);
    iVar4 = cellAudioInit();
  }
  if (iVar4 != 0) {
    if (iVar4 != -0x7fcef8ff) {
      FUN_00641910(1,*(undefined4 *)(puVar3 + -0x7fa8),iVar4);
      return 0xfffffffb;
    }
    FUN_00641910(2,*(undefined4 *)(puVar3 + -0x7fac));
    *(undefined1 *)(param_1 + 0x9c) = 1;
  }
  uVar5 = param_3[7];
  uVar12 = 0;
  puVar13 = (undefined4 *)(param_1 + 0x60);
  puVar10 = (undefined4 *)(param_1 + 0x68);
  puVar11 = (undefined4 *)(param_1 + 0x70);
  do {
    uVar12 = uVar12 + 1;
    iVar4 = cellAudioPortOpen(local_f0,puVar13);
    if ((iVar4 != 0) || (iVar4 = cellAudioGetPortConfig(*puVar13,local_d0), iVar4 != 0)) {
      return 0xfffffffb;
    }
    iVar4 = cellAudioPortStart(*puVar13);
    if (iVar4 != 0) {
      return 0xfffffffb;
    }
    *puVar10 = local_b4;
    *puVar11 = local_d0[0];
    puVar13 = (undefined4 *)(param_1 + 100);
    puVar10 = (undefined4 *)(param_1 + 0x6c);
    puVar11 = (undefined4 *)(param_1 + 0x74);
  } while ((uVar12 & 0xffffffff) <
           (2 - ((ulonglong)(LZCOUNT(uVar5 & 0x10) << 0x20) >> 0x25) & 0xffffffff));
  *(uint *)(param_1 + 0x78) = param_3[3];
  *(int *)(param_1 + 0x80) = (int)(longlong)((double)fVar9 / dVar15);
  uVar5 = param_3[2];
  uVar7 = 1;
  if ((uVar5 != 0) &&
     (uVar12 = (longlong)((double)fVar9 / dVar15) - 1, uVar7 = uVar5,
     (uVar12 & 0xffffffff) < (ulonglong)uVar5)) {
    uVar7 = (uint)uVar12;
  }
  fVar9 = *(float *)(puVar3 + -0x7fa4);
  fVar2 = *(float *)(puVar3 + -0x7f84);
  *(uint *)(param_1 + 0x7c) = uVar7;
  *(uint *)(param_1 + 0x94) = param_3[5];
  *(uint *)(param_1 + 0x98) = param_3[6];
  *(float *)(param_1 + 0x90) = (float)((double)fVar2 / dVar16);
  *(double *)(param_1 + 0x88) =
       ((double)*(uint *)(param_1 + 0x78) * (double)fVar9) / (double)*(uint *)(param_1 + 0x14);
  return 0;
}


// 0x064b650 (0x2d4 bytes)
// strings: 00676018: 'brbdq' (raw) | 00676019: 'rbdq' (raw) | 00676020: 'brbDriver' | 00676030: 'brbcq' (raw) | 00676031: 'rbcq' (raw) | 00676038: 'brbClient'

int FUN_0064b650(int param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  byte in_cr0;
  byte in_cr1;
  byte in_cr2;
  byte in_cr3;
  byte unaff_cr4;
  byte in_cr5;
  byte in_cr6;
  byte in_cr7;
  double dVar5;
  ulonglong uVar6;
  uint uStack00000008;
  GPiece<40> local_60;
  
  puVar1 = PTR_PTR_0071b09c;
  uStack00000008 =
       (uint)(in_cr0 & 0xf) << 0x1c | (uint)(in_cr1 & 0xf) << 0x18 | (uint)(in_cr2 & 0xf) << 0x14 |
       (uint)(in_cr3 & 0xf) << 0x10 | (uint)(unaff_cr4 & 0xf) << 0xc | (uint)(in_cr5 & 0xf) << 8 |
       (uint)(in_cr6 & 0xf) << 4 | (uint)(in_cr7 & 0xf);
  FUN_00648e98(param_1,param_2,param_3,param_4);
  iVar2 = syscall_sys_event_queue_create(param_1 + 0x50);
  iVar4 = -9;
  if (iVar2 == 0) {
    iVar2 = syscall_sys_event_queue_create(param_1 + 0x54,local_60,0,4);
    iVar4 = -9;
    if (iVar2 == 0) {
      iVar2 = syscall_sys_event_queue_create
                        (*(undefined4 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x54),0,0,0);
      iVar4 = -9;
      if (iVar2 == 0) {
        iVar2 = sys_ppu_thread_create
                          (param_1 + 0x40,*(undefined4 *)(puVar1 + -0x7f78),param_1,
                           *(undefined4 *)(param_1 + 0x94),*(undefined4 *)(param_1 + 0x98),1,
                           *(undefined4 *)(puVar1 + -0x7f74));
        iVar4 = -9;
        if (iVar2 == 0) {
          if (param_4 != 0) {
            iVar2 = syscall_sys_event_queue_create(param_1 + 0x58,1,0xb00bb00b);
            if (iVar2 != 0) {
              return -9;
            }
            iVar2 = syscall_sys_event_queue_create(param_1 + 0x5c,local_60,0,4);
            if (iVar2 != 0) {
              return -9;
            }
            iVar2 = syscall_sys_event_queue_create
                              (*(undefined4 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x5c));
            if (iVar2 != 0) {
              return -9;
            }
            iVar2 = sys_ppu_thread_create
                              (param_1 + 0x48,*(undefined4 *)(puVar1 + -0x7f6c),param_1,
                               *(undefined4 *)(param_1 + 0x94),*(undefined4 *)(param_1 + 0x98),1,
                               *(undefined4 *)(puVar1 + -0x7f68));
            if (iVar2 != 0) {
              return -9;
            }
          }
          dVar5 = *(double *)(param_1 + 0x88);
          uVar6 = (ulonglong)dVar5;
          if (*(double *)(puVar1 + -0x7fc8) <= dVar5) {
            uVar6 = (longlong)(dVar5 - *(double *)(puVar1 + -0x7fc8)) ^ 0x8000000000000000;
          }
          uVar3 = syscall_sys_event_queue_create(*(undefined4 *)(param_1 + 0x50),0,uVar6);
          iVar4 = ((int)((((int)uVar3 >> 0x1f ^ uVar3) - ((int)uVar3 >> 0x1f)) + -1) >> 0x1f & 9U) -
                  9;
        }
      }
    }
  }
  return iVar4;
}


// 0x064b924 (0xfc bytes)
void FUN_0064b924(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = param_1[4];
  uVar2 = param_1[0x1e];
  uVar3 = param_1[0x17];
  while ((*param_1 & 3) == 3) {
    iVar4 = 0;
    syscall_sys_event_queue_receive(uVar3);
    if (iVar4 != 0) {
      iVar5 = 0;
      do {
        iVar5 = iVar5 + 1;
        (**(code **)param_1[2])(uVar2,uVar1);
      } while (iVar4 != iVar5);
    }
  }
  sys_ppu_thread_exit(1);
  return;
}


// 0x064ba20 (0x80 bytes)
undefined8 FUN_0064ba20(int param_1,int *param_2,int param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  longlong lVar5;
  
  piVar3 = (int *)(param_1 + 0x40c);
  lVar5 = 0x20;
  iVar4 = 0;
  iVar2 = 0;
  do {
    if (*piVar3 != 0) {
      if (iVar4 == param_3) break;
      iVar1 = piVar3[1];
      iVar4 = iVar4 + 1;
      *param_2 = *piVar3;
      param_2[1] = iVar1;
      param_2[2] = iVar2 * 0x2c + param_1 + 0x418;
      param_2 = param_2 + 3;
    }
    piVar3 = piVar3 + 0xb;
    lVar5 = lVar5 + -1;
    iVar2 = iVar2 + 1;
  } while (lVar5 != 0);
  if (param_4 != (int *)0x0) {
    *param_4 = iVar4;
  }
  return 0;
}


// 0x064baa0 (0x38 bytes)
ulonglong FUN_0064baa0(uint *param_1)

{
  return (((ulonglong)*param_1 & 0x1fffe00) << 7 | (ulonglong)(param_1[1] >> 9) & 0xffff) << 0x20 |
         ((ulonglong)param_1[2] & 0x1fffe00) << 7 | (ulonglong)(param_1[3] >> 9) & 0xffff;
}


// 0x064bad8 (0x38 bytes)
int * FUN_0064bad8(int *param_1,int param_2)

{
  longlong lVar1;
  
  lVar1 = 0x20;
  do {
    if (*param_1 == param_2) {
      return param_1;
    }
    lVar1 = lVar1 + -1;
    param_1 = param_1 + 0xb;
  } while (lVar1 != 0);
  return (int *)0x0;
}


// 0x064bb10 (0xa4 bytes)
int * FUN_0064bb10(int *param_1,longlong param_2)

{
  longlong lVar1;
  int *piVar2;
  int *piVar3;
  
  piVar2 = param_1;
  while( true ) {
    piVar3 = piVar2 + 0xb;
    if ((*piVar2 != 0) && (lVar1 = FUN_0064baa0(*piVar2), lVar1 == param_2)) break;
    piVar2 = piVar3;
    if (piVar3 == param_1 + 0x160) {
      return (int *)0x0;
    }
  }
  return piVar2;
}


// 0x064bbb4 (0x3c bytes)
uint FUN_0064bbb4(int param_1)

{
  uint uVar1;
  
  uVar1 = FUN_0064bb10(param_1 + 0x40c);
  return ((int)uVar1 >> 0x1f) - ((int)uVar1 >> 0x1f ^ uVar1) >> 0x1f;
}


// 0x064bbf0 (0x8 bytes)
void FUN_0064bbf0(undefined8 param_1)

{
  FUN_0064bad8(param_1,0);
  return;
}


// 0x064bbf8 (0x64 bytes)
void FUN_0064bbf8(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  
  if (param_2 != 0) {
    uVar2 = FUN_0064baa0(param_2);
    puVar3 = (undefined4 *)FUN_0064bb10(param_1,uVar2);
    if (puVar3 != (undefined4 *)0x0) {
      iVar1 = puVar3[2];
      puVar3[2] = iVar1 + -1;
      if (iVar1 + -1 == 0) {
        *puVar3 = 0;
      }
    }
  }
  return;
}


// 0x064bc5c (0x50 bytes)
uint FUN_0064bc5c(undefined4 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  uint uVar2;
  
  uVar1 = FUN_0064baa0(param_2);
  uVar2 = FUN_0064bb10(param_1,uVar1);
  return ((int)uVar2 >> 0x1f) - ((int)uVar2 >> 0x1f ^ uVar2) >> 0x1f;
}


// 0x064bcac (0x34 bytes)
undefined4 FUN_0064bcac(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)FUN_0064bb10();
  uVar1 = 0;
  if (puVar2 != (undefined4 *)0x0) {
    uVar1 = *puVar2;
  }
  return uVar1;
}


// 0x064bce0 (0x84 bytes)
undefined4
FUN_0064bce0(undefined8 param_1,undefined8 param_2,undefined1 *param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_0064bb10();
  if (iVar1 != 0) {
    strcpy(param_3,iVar1 + 0xc,param_4);
    return 1;
  }
  *param_3 = 0;
  return 0;
}


// 0x064bd64 (0x88 bytes)
// strings: 00676048: 'FindFreeFileSlot(): Unable to find a free slot.  Maximum (%d) already reached!'

int FUN_0064bd64(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  
  piVar2 = (int *)(param_1 + 0x990);
  iVar3 = 0;
  lVar4 = 0x20;
  do {
    iVar1 = *piVar2;
    piVar2 = piVar2 + 6;
    if (iVar1 == 0) {
      return iVar3;
    }
    iVar3 = iVar3 + 1;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  FUN_00641910(1,*(undefined4 *)(PTR_PTR_0071b0a0 + -0x8000),0x20);
  return -1;
}


// 0x064bdec (0x1d0 bytes)
// strings: 00676180: '[RegisterPluginPack]: "%s" is not a valid SPU module' | 006761c8: '[RegisterPluginPack]: module at 0x%08X is not a valid SPU module' | 006760b0: 'No name' | 006760b8: '[RegisterPluginPack] Unable to register module: %s.  No remaining slots!!' | 00676118: '[RegisterPluginPack] Unable to register module at 0x%08X.  No remaining slots!!'

undefined4 FUN_0064bdec(undefined4 param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  undefined *puVar1;
  char cVar5;
  undefined8 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar6;
  GPiece<24> auStack_60;
  
  puVar1 = PTR_PTR_0071b0a0;
  FUN_004f5898(auStack_60,param_2,param_4,param_3);
  cVar5 = FUN_004f4e78(auStack_60);
  if (cVar5 == '\0') {
    FUN_004f4f84(auStack_60);
    if (param_3 == 0) {
      uVar6 = 0;
      FUN_00641910(0,*(undefined4 *)(puVar1 + -0x7fec),param_2);
    }
    else {
      uVar6 = 0;
      FUN_00641910(0,*(undefined4 *)(puVar1 + -0x7ff0),param_3);
    }
  }
  else {
    uVar2 = FUN_0064baa0(param_2);
    iVar3 = FUN_0064bb10(param_1,uVar2);
    if (iVar3 == 0) {
      puVar4 = (undefined4 *)FUN_0064bbf0(param_1);
      if (puVar4 == (undefined4 *)0x0) {
        if (param_3 == 0) {
          uVar6 = 0;
          FUN_00641910(1,*(undefined4 *)(puVar1 + -0x7ff4),param_2);
        }
        else {
          uVar6 = 0;
          FUN_00641910(1,*(undefined4 *)(puVar1 + -0x7ff8),param_3);
        }
      }
      else {
        puVar4[1] = (int)param_4;
        puVar4[2] = 1;
        *puVar4 = (int)param_2;
        if (param_3 == 0) {
          param_3 = *(int *)(puVar1 + -0x7ffc);
        }
        uVar6 = 1;
        strcpy(puVar4 + 3,param_3,0x20);
      }
    }
    else {
      uVar6 = 1;
      *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 1;
    }
  }
  FUN_004f539c(auStack_60);
  return uVar6;
}


// 0x064bfbc (0xd4 bytes)
undefined4
FUN_0064bfbc(int param_1,undefined8 param_2,undefined4 *param_3,undefined4 *param_4,
            undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  GPiece<24> local_40;
  
  uVar5 = 0xfffffff8;
  if (**(char **)(PTR_PTR_0071b0a0 + -0x7fe8) != '\0') {
    uVar4 = FUN_00648f2c(param_1,local_40);
    iVar3 = (int)((uVar4 & 0x3fffffff) << 2);
    uVar5 = 0xffffffff;
    if ((int)uVar4 != -1) {
      uVar5 = 0;
      uVar1 = *(undefined4 *)(param_1 + iVar3 + 0xc90);
      *param_4 = *(undefined4 *)(param_1 + iVar3 + 0xe90);
      uVar2 = *(undefined4 *)(param_1 + iVar3 + 0x1090);
      *param_3 = uVar1;
      *param_5 = uVar2;
    }
  }
  return uVar5;
}


// 0x064c090 (0xd8 bytes)
int FUN_0064c090(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = -8;
  if (**(char **)(PTR_PTR_0071b0a0 + -0x7fe8) != '\0') {
    iVar1 = FUN_006493c0(param_1,param_2,param_3,param_4);
    if (-1 < iVar1) {
      iVar1 = FUN_0064e408(*(undefined4 *)(param_1 + 4),param_2,param_3,param_4);
      return iVar1;
    }
  }
  return iVar1;
}


// 0x064c168 (0x218 bytes)
undefined4 FUN_0064c168(int param_1,char *param_2)

{
  bool bVar1;
  char cVar3;
  longlong lVar2;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  longlong *plVar7;
  
  uVar4 = 0xfffffff8;
  if (**(char **)(PTR_PTR_0071b0a0 + -0x7fe8) != '\0') {
    if ((((*param_2 == '\x7f') && (param_2[1] == 'E')) && (param_2[2] == 'L')) &&
       (param_2[3] == 'F')) {
      param_2 = param_2 + 0x80;
    }
    iVar5 = param_1 + 0x40c;
    cVar3 = FUN_0064bc5c(iVar5,param_2);
    uVar4 = 0xfffffff9;
    if (cVar3 != '\0') {
      FUN_0064bbf8(iVar5,param_2);
      cVar3 = FUN_0064bc5c(iVar5,param_2);
      if (cVar3 == '\0') {
        plVar7 = (longlong *)(param_1 + 0x998);
        lVar2 = FUN_0064baa0(param_2);
        iVar5 = 0;
        puVar6 = (undefined4 *)(param_1 + 0x990);
        do {
          if (*plVar7 == lVar2) {
            if (*(char *)(plVar7 + 1) != '\0') {
              (*(code *)**(undefined4 **)(**(int **)(param_1 + 0x1290) + 4))
                        (*(int **)(param_1 + 0x1290),*(undefined4 *)(plVar7 + -1),0xfff0107,0,0);
            }
            *(undefined8 *)(puVar6 + 2) = 0;
            *puVar6 = 0;
            *(undefined1 *)(puVar6 + 4) = 0;
          }
          bVar1 = iVar5 != 0x1f;
          puVar6 = puVar6 + 6;
          plVar7 = plVar7 + 3;
          iVar5 = iVar5 + 1;
        } while (bVar1);
        puVar6 = (undefined4 *)(param_1 + 0xc90);
        iVar5 = 0;
        do {
          if ((char *)*puVar6 == param_2) {
            FUN_00648fb0(param_1,iVar5);
            puVar6[0x100] = 0;
            *puVar6 = 0;
            puVar6[0x80] = 0;
          }
          bVar1 = iVar5 != 0x7f;
          puVar6 = puVar6 + 1;
          iVar5 = iVar5 + 1;
        } while (bVar1);
      }
      uVar4 = 0;
    }
  }
  return uVar4;
}


// 0x064c380 (0xa8 bytes)
undefined4 FUN_0064c380(int param_1,uint param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  
  uVar1 = 0xfffffff8;
  iVar3 = param_2 * 0x20 + (param_2 & 0x1fffffff) * -8 + 0x990;
  if (**(char **)(PTR_PTR_0071b0a0 + -0x7fe8) != '\0') {
    uVar1 = FUN_0064c168(param_1,*(undefined4 *)(param_1 + iVar3));
    puVar2 = (undefined4 *)(param_1 + iVar3);
    *(int *)(param_1 + 0x1294) = *(int *)(param_1 + 0x1294) + -1;
    *(undefined8 *)(puVar2 + 2) = 0;
    *(undefined1 *)(puVar2 + 4) = 0;
    *puVar2 = 0;
  }
  return uVar1;
}


// 0x064c428 (0x33c bytes)
// strings: 006762c8: 'BRBPLUG' | 0064c5e8: '}<Kx9J' (raw) | 0064c634: '}XSx{7' (raw) | 00676290: "brbPluginRegistry: No plugin classes found in '%s'" | 00676220: "[RegisterPluginPackFromMem]: Failed to register plugin class '%s' in plugin pack '%s'!"

/* WARNING: Type propagation algorithm not settling */

int FUN_0064c428(int param_1,ulonglong param_2,ulonglong param_3,undefined4 param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  int iVar3;
  undefined *puVar4;
  int iVar6;
  longlong lVar5;
  char cVar8;
  char cVar9;
  int iVar7;
  char *pcVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  int iVar13;
  int *piVar14;
  int iVar15;
  ulonglong uVar16;
  int local_d0 [20];
  
  puVar4 = PTR_PTR_0071b0a0;
  iVar15 = -8;
  if (**(char **)(PTR_PTR_0071b0a0 + -0x7fe8) != '\0') {
    pcVar10 = (char *)param_2;
    if ((((*pcVar10 == '\x7f') && (pcVar10[1] == 'E')) && (pcVar10[2] == 'L')) &&
       (pcVar10[3] == 'F')) {
      param_2 = param_2 + 0x80;
      param_3 = param_3 - 0x80;
    }
    iVar6 = param_1 + 0x40c;
    uVar2 = param_2 & 0xffffffff;
    cVar8 = FUN_0064bc5c(iVar6,uVar2);
    iVar15 = -1;
    cVar9 = FUN_0064bdec(iVar6,uVar2,param_4,param_3 & 0xffffffff);
    if (cVar9 != '\0') {
      if (cVar8 == '\0') {
        uVar1 = (param_3 << 0x20) >> 0x23;
        iVar15 = 0;
        iVar13 = 0;
        local_d0[0x10] = 0;
        local_d0[1] = 0;
        local_d0[2] = 0;
        local_d0[3] = 0;
        local_d0[4] = 0;
        local_d0[5] = 0;
        local_d0[6] = 0;
        local_d0[7] = 0;
        local_d0[8] = 0;
        local_d0[9] = 0;
        local_d0[10] = 0;
        local_d0[0xb] = 0;
        local_d0[0xc] = 0;
        local_d0[0xd] = 0;
        local_d0[0xe] = 0;
        local_d0[0xf] = 0;
        for (uVar11 = 0; (uVar11 & 0xffffffff) < uVar1; uVar11 = uVar11 + 1) {
          uVar12 = param_2 + (uVar11 & 0x1fffffff) * 8;
          uVar16 = uVar1 - uVar11 & 0xffffffff;
          lVar5 = *(longlong *)uVar12;
          while (lVar5 != **(longlong **)(puVar4 + -0x7fe0)) {
            uVar12 = uVar12 + 8;
            uVar11 = uVar11 + 1;
            uVar16 = uVar16 - 1;
            if (uVar16 == 0) goto LAB_0064c5fc;
            lVar5 = *(longlong *)uVar12;
          }
          iVar7 = FUN_0064c090(param_1,uVar12 & 0xffffffff,uVar2,param_3 & 0xffffffff);
          if ((iVar7 < 0) || (iVar7 = FUN_00649110(param_1,uVar12 & 0xffffffff,local_d0), iVar7 < 0)
             ) {
            FUN_00641910(1,*(undefined4 *)(puVar4 + -0x7fe4),uVar12 + 8 & 0xffffffff,param_4);
            if (0 < iVar15) {
              iVar13 = 0;
              piVar14 = local_d0;
              do {
                piVar14 = piVar14 + 1;
                iVar13 = iVar13 + 1;
                FUN_00648fb0(param_1,*piVar14);
              } while (iVar13 != iVar15);
            }
            FUN_0064bbf8(iVar6,uVar2);
            return iVar7;
          }
          iVar7 = local_d0[0] * 4;
          iVar3 = iVar13 + 4;
          iVar15 = iVar15 + 1;
          iVar13 = iVar13 + 4;
          *(int *)((int)local_d0 + iVar3) = local_d0[0];
          *(int *)(param_1 + iVar7 + 0xc90) = (int)param_2;
          *(int *)(param_1 + iVar7 + 0x1090) = ((int)uVar12 - (int)param_2) + 0x4000;
          *(int *)(param_1 + iVar7 + 0xe90) = (int)param_3;
        }
LAB_0064c5fc:
        if (iVar15 == 0) {
          FUN_00641910(1,*(undefined4 *)(puVar4 + -0x7fdc),param_4);
          FUN_0064bbf8(iVar6,uVar2);
          return -1;
        }
      }
      iVar15 = 0;
    }
  }
  return iVar15;
}


// 0x064c764 (0x3fc bytes)
// strings: 006762d0: '.elf' (raw) | 006762e0: '%s/%s%s' | 006762e8: '%s%s' (raw) | 006762f8: "[RegisterPluginPackFromFile] Unable to open file '%s'."

int FUN_0064c764(int param_1,int param_2,undefined4 param_3,int *param_4)

{
  int *piVar1;
  undefined *puVar2;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  char cVar10;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined4 uVar9;
  int iVar11;
  GPiece<136> auStack_e0;
  
  puVar2 = PTR_PTR_0071b0a0;
  cVar10 = **(char **)(PTR_PTR_0071b0a0 + -0x7fe8);
  *param_4 = -1;
  if (cVar10 == '\0') {
    return -8;
  }
  if (0x1f < *(uint *)(param_1 + 0x1294)) {
    return -1;
  }
  uVar5 = FUN_005c8700(param_3,*(undefined4 *)(puVar2 + -0x7fd8));
  iVar6 = (((int)uVar5 >> 0x1f ^ uVar5) - ((int)uVar5 >> 0x1f)) + -1;
  if (param_2 == 0) {
    param_2 = *(int *)(param_1 + 0x408);
    if (param_2 == 0) {
      if (iVar6 < 0) {
        uVar9 = *(undefined4 *)(puVar2 + -0x7fd8);
      }
      else {
        uVar9 = *(undefined4 *)(puVar2 + -0x7fd4);
      }
      FUN_005cd198(auStack_e0,0x80,*(undefined4 *)(puVar2 + -0x7fcc),param_3,uVar9);
      goto LAB_0064c87c;
    }
    if (iVar6 < 0) {
      uVar9 = *(undefined4 *)(puVar2 + -0x7fd8);
    }
    else {
      uVar9 = *(undefined4 *)(puVar2 + -0x7fd4);
    }
  }
  else if (iVar6 < 0) {
    uVar9 = *(undefined4 *)(puVar2 + -0x7fd8);
  }
  else {
    uVar9 = *(undefined4 *)(puVar2 + -0x7fd4);
  }
  FUN_005cd198(auStack_e0,0x80,*(undefined4 *)(puVar2 + -0x7fd0),param_2,param_3,uVar9);
LAB_0064c87c:
  iVar6 = FUN_005c52f0(auStack_e0,*(undefined4 *)(puVar2 + -0x7fc8));
  if (iVar6 == 0) {
    iVar7 = -1;
    FUN_00641910(1,*(undefined4 *)(puVar2 + -0x7fc4),auStack_e0);
  }
  else {
    FUN_005c5568(iVar6,0,2);
    iVar7 = FUN_005c55dc(iVar6);
    FUN_005c5568(iVar6,0x80,0);
    iVar8 = (*(code *)**(undefined4 **)**(undefined4 **)(param_1 + 0x1290))
                      (*(undefined4 **)(param_1 + 0x1290),iVar7 + 0x37fU & 0xfffffc00,0xfff0107,0,0)
    ;
    if (iVar8 == 0) {
      iVar7 = -6;
      FUN_005c4f10(iVar6);
    }
    else {
      FUN_005c5364(iVar8,1,iVar7 + -0x80,iVar6);
      FUN_005c4f10(iVar6);
      cVar10 = FUN_0064bc5c(param_1 + 0x40c,iVar8);
      iVar7 = FUN_0064c428(param_1,iVar8,iVar7 + -0x80,param_3);
      uVar3 = FUN_0064bd64(param_1);
      if ((int)uVar3 == -1) {
        iVar7 = -1;
      }
      else if (-1 < iVar7) {
        *param_4 = (int)uVar3;
        uVar4 = FUN_0064baa0(iVar8);
        if (cVar10 == '\0') {
          iVar6 = (int)((uVar3 & 0x7ffffff) << 5);
          iVar11 = (int)((uVar3 & 0x1fffffff) << 3);
          *(undefined1 *)(param_1 + (iVar6 - iVar11) + 0x9a0) = 1;
          *(int *)(param_1 + (iVar6 - iVar11) + 0x990) = iVar8;
        }
        else {
          iVar6 = (int)((uVar3 & 0x7ffffff) << 5);
          iVar11 = (int)((uVar3 & 0x1fffffff) << 3);
          uVar9 = FUN_0064bcac(param_1 + 0x40c,uVar4);
          piVar1 = *(int **)(param_1 + 0x1290);
          *(undefined1 *)(param_1 + (iVar6 - iVar11) + 0x9a0) = 0;
          *(undefined4 *)(param_1 + (iVar6 - iVar11) + 0x990) = uVar9;
          (*(code *)**(undefined4 **)(*piVar1 + 4))(piVar1,iVar8,0xfff0107,0,0);
        }
        *(int *)(param_1 + 0x1294) = *(int *)(param_1 + 0x1294) + 1;
        *(undefined8 *)(param_1 + (iVar6 - iVar11) + 0x998) = uVar4;
        return iVar7;
      }
      (*(code *)**(undefined4 **)(**(int **)(param_1 + 0x1290) + 4))
                (*(int **)(param_1 + 0x1290),iVar8,0xfff0107,0,0);
    }
  }
  return iVar7;
}


// 0x064cb60 (0x5c bytes)
undefined8 FUN_0064cb60(int param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_0071b0a0;
  FUN_006492d0();
  puVar1 = *(undefined1 **)(puVar2 + -0x7fe8);
  *(undefined4 *)(param_1 + 0x1290) = param_2;
  *puVar1 = 1;
  return 0;
}


// 0x064cbbc (0x130 bytes)
void FUN_0064cbbc(int param_1)

{
  bool bVar1;
  char cVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  undefined4 *puVar6;
  char *pcVar7;
  
  pcVar3 = *(char **)(PTR_PTR_0071b0a0 + -0x7fe8);
  if (*pcVar3 != '\0') {
    pcVar7 = (char *)(param_1 + 0x9a0);
    iVar5 = 0;
    puVar6 = (undefined4 *)(param_1 + 0x990);
    do {
      while( true ) {
        pcVar4 = pcVar7 + -0x10;
        cVar2 = *pcVar7;
        pcVar7 = pcVar7 + 0x18;
        if (cVar2 == '\0') break;
        (*(code *)**(undefined4 **)(**(int **)(param_1 + 0x1290) + 4))
                  (*(int **)(param_1 + 0x1290),*(undefined4 *)pcVar4,0xfff0107,0,0);
        bVar1 = iVar5 == 0x1f;
        iVar5 = iVar5 + 1;
        *(undefined8 *)(puVar6 + 2) = 0;
        *puVar6 = 0;
        *(undefined1 *)(puVar6 + 4) = 0;
        puVar6 = puVar6 + 6;
        if (bVar1) goto LAB_0064cca4;
      }
      bVar1 = iVar5 != 0x1f;
      puVar6 = puVar6 + 6;
      iVar5 = iVar5 + 1;
    } while (bVar1);
LAB_0064cca4:
    *pcVar3 = '\0';
  }
  FUN_006492a4(param_1);
  return;
}


// 0x064ccec (0x9c bytes)
void FUN_0064ccec(undefined4 *param_1)

{
  param_1[0xd] = 0;
  param_1[1] = 0xffffffff;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x4d] = 0;
  param_1[0x43] = 0xffffffff;
  *param_1 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0xffffffff;
  param_1[0x48] = 0;
  param_1[0x52] = 0;
  param_1[0x55] = 0;
  return;
}


// 0x064cd88 (0x28 bytes)
uint FUN_0064cd88(int param_1)

{
  uint uVar1;
  
  uVar1 = 0x100;
  if (1 < *(uint *)(param_1 + 0x230)) {
    uVar1 = (*(uint *)(param_1 + 0x230) + 1 & 0xffffffe) * 0x10 + 0x11f & 0xffffff80;
  }
  return uVar1;
}


// 0x064cdb0 (0xb4 bytes)
int FUN_0064cdb0(int param_1,uint param_2,int param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  
  if (param_4 != 0) {
    param_2 = (uint)(longlong)((float)param_2 * *(float *)(PTR_PTR_0071b0a4 + -0x8000));
  }
  uVar1 = *(uint *)(param_1 + 0x230);
  iVar2 = FUN_0064cd88(param_1);
  return ((int)(((longlong)(int)((param_2 + uVar1) - 1 & -uVar1) * (longlong)param_3 & 0xffffffffU)
               / (ulonglong)uVar1) * iVar2 + 0x3ffU & 0x7ffffc00) * 2 + 0x80;
}


// 0x064ce64 (0x14 bytes)
longlong FUN_0064ce64(int param_1,int param_2)

{
  return ((longlong)param_2 * (longlong)(param_1 << 3) + 0x3ffU & 0x7ffffc00) << 1;
}


// 0x064ce78 (0x10 bytes)
int FUN_0064ce78(int param_1,int param_2)

{
  return param_2 * param_1 * 8;
}


// 0x064ce88 (0xc bytes)
undefined8 FUN_0064ce88(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x1c) = param_2;
  return 0;
}


// 0x064ce94 (0x10 bytes)
undefined8 FUN_0064ce94(int param_1)

{
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return 0;
}


// 0x064cea4 (0x30 bytes)
undefined8 FUN_0064cea4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + (int)(((ulonglong)*(uint *)(param_1 + 0x60) ^ 1) << 2) + 0x40);
  *(undefined4 *)(iVar1 + 0x28) = param_4;
  *(undefined4 *)(iVar1 + 0x20) = param_3;
  *(undefined4 *)(iVar1 + 0x24) = param_2;
  return 0;
}


// 0x064ced4 (0x48 bytes)
void FUN_0064ced4(int param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  
  uVar1 = *(undefined4 *)(param_1 + 0x5c);
  *(undefined1 *)(param_1 + 0x70) = 1;
  puVar2 = (undefined8 *)
           (*(int *)(param_1 + 0x58) * 0x80 +
           *(int *)(param_1 + *(int *)(param_1 + 0x60) * 4 + 0x40));
  *(undefined4 *)(puVar2 + 3) = param_3;
  *puVar2 = param_4;
  *(undefined4 *)(puVar2 + 2) = uVar1;
  puVar2[1] = param_5;
  *(undefined4 *)((int)puVar2 + 0x14) = param_2;
  return;
}


// 0x064cf1c (0x28 bytes)
void FUN_0064cf1c(int param_1)

{
  *(undefined1 *)(param_1 + 0x70) = 0;
  *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 1;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 1;
  *(undefined4 *)(param_1 + 0x68) = 0;
  return;
}


// 0x064cf44 (0x14c bytes)
void FUN_0064cf44(int param_1,undefined4 param_2)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  char cVar5;
  longlong lVar6;
  
  uVar4 = *(uint *)(param_1 + 0x54) & 1;
  cVar5 = FUN_004f234c(param_1 + 0x100,uVar4);
  if (cVar5 == '\0') {
    uVar4 = uVar4 ^ 1;
  }
  idol_draw::CmdQueue_ZeroCacheLines(param_1 + uVar4 * 0x14 + 0x120);
  idol_draw::CmdQueue_ResetCounters(param_1 + 0x100,uVar4);
  iVar1 = *(int *)(param_1 + 0x38);
  lVar6 = 0;
  *(undefined4 *)(param_1 + 0x68) = param_2;
  *(uint *)(param_1 + 0x60) = uVar4;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  do {
    for (iVar3 = *(int *)(iVar1 + (int)lVar6 * 0x230); iVar3 != 0; iVar3 = *(int *)(iVar3 + 4)) {
      puVar2 = *(uint **)(iVar3 + 0x84);
      uVar4 = (*puVar2 >> 1) + puVar2[2];
      puVar2[3] = 0;
      puVar2[2] = uVar4;
      if ((int)(puVar2 + 0x20) + *puVar2 <= uVar4) {
        puVar2[2] = (uint)(puVar2 + 0x20);
      }
    }
    lVar6 = lVar6 + 1;
  } while (lVar6 != 4);
  return;
}


// 0x064d090 (0x2b0 bytes)
undefined8 FUN_0064d090(int *param_1)

{
  int *piVar1;
  
  piVar1 = param_1 + 0x40;
  FUN_004f19e8(piVar1);
  FUN_004f2a10(piVar1,0,param_1 + 0x48);
  FUN_004f2a10(piVar1,1,param_1 + 0x4d);
  FUN_004f2cd0(param_1 + 0x48);
  FUN_004f2cd0(param_1 + 0x4d);
  FUN_004f13c8(piVar1);
  piVar1 = (int *)param_1[2];
  if (piVar1 != (int *)0x0) {
    if (param_1[0x12] != 0) {
      (*(code *)**(undefined4 **)(*piVar1 + 4))(piVar1,param_1[0x12],0xfff0147,0,0);
      param_1[0x12] = 0;
    }
    if (param_1[0x55] != 0) {
      (*(code *)**(undefined4 **)(*(int *)param_1[2] + 4))
                ((int *)param_1[2],param_1[0x55],0xfff0147,0,0);
      param_1[0x55] = 0;
    }
    if (param_1[0xf] != 0) {
      (*(code *)**(undefined4 **)(*(int *)param_1[2] + 4))
                ((int *)param_1[2],param_1[0xf],0xfff0147,0,0);
      param_1[0xf] = 0;
    }
    if (param_1[0x52] != 0) {
      (*(code *)**(undefined4 **)(*(int *)param_1[2] + 4))
                ((int *)param_1[2],param_1[0x52],0xfff0147,0,0);
      param_1[0x52] = 0;
    }
    if (*param_1 != 0) {
      (*(code *)**(undefined4 **)(*(int *)param_1[2] + 4))((int *)param_1[2],*param_1,0xfff0147,0,0)
      ;
      *param_1 = 0;
    }
    param_1[2] = 0;
  }
  param_1[0x1b] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x52] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x1a] = 0;
  param_1[1] = -1;
  return 0;
}


// 0x064d340 (0x57c bytes)
// strings: 006763b0: 'BrBDblBufWrkld' | 00676378: 'Initialize(): RACK UNIT/JOB LIST ALLOC ERROR!' | 006763c0: 'Initialize(): PROC CTX DATA ALLOC ERROR!' | 006763f8: 'Initialize(): USER DATA ALLOC ERROR!' | 00676348: 'Initialize(): JOB LIST ALLOC ERROR!' | 00676428: 'Initialize(): GLOBAL DMA LIST ALLOC ERROR!'

undefined4
FUN_0064d340(uint *param_1,undefined4 *param_2,undefined4 *param_3,uint param_4,uint param_5,
            uint param_6,uint param_7,uint param_8)

{
  undefined *puVar1;
  uint *puVar2;
  ulonglong uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined1 *puVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  uint in_stack_00000074;
  undefined8 local_b0 [2];
  longlong local_a0;
  
  puVar1 = PTR_PTR_0071b0a4;
  local_a0 = (longlong)((float)(uint)param_2[1] * *(float *)(PTR_PTR_0071b0a4 + -0x8000));
  param_1[0x53] = (uint)(local_a0 + 2U);
  uVar3 = FUN_0064ce64(local_a0 + 2U & 0xffffffff,*(undefined4 *)(param_7 + 0x80));
  uVar4 = (*(code *)**(undefined4 **)*param_3)(param_3,uVar3 & 0xffffffff,0xfff0147,0,0);
  *param_1 = uVar4;
  if (uVar4 == 0) {
    FUN_00641910(1,*(undefined4 *)(puVar1 + -0x7ff8));
    return 0xfffffffa;
  }
  if (**(char **)(puVar1 + -0x7ff4) != '\0') {
    uVar6 = FUN_0064ce78(param_1[0x53],*(undefined4 *)(param_7 + 0x80));
    uVar4 = (*(code *)**(undefined4 **)*param_3)(param_3,uVar6,0xfff0147,0,0);
    param_1[0x52] = uVar4;
    if (uVar4 == 0) {
      FUN_00641910(1,*(undefined4 *)(puVar1 + -0x7ff0));
      return 0xfffffffa;
    }
  }
  uVar4 = param_2[3];
  local_b0[0] = 0;
  uVar8 = 1;
  if ((uVar4 == 0) || (uVar8 = uVar4, uVar4 < 0x10)) {
    iVar9 = param_2[2];
    param_2[3] = uVar8;
  }
  else {
    iVar9 = param_2[2];
    uVar8 = 0xf;
    param_2[3] = 0xf;
  }
  if (iVar9 == -1) {
    iVar9 = 0;
    lVar10 = 8;
    do {
      puVar7 = (undefined1 *)((int)local_b0 + iVar9);
      iVar9 = iVar9 + 1;
      *puVar7 = (char)param_2[3];
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  else {
    if (5 < iVar9) {
      iVar9 = 5;
    }
    param_2[2] = iVar9;
    *(char *)((int)local_b0 + iVar9) = (char)uVar8;
  }
  puVar2 = param_1 + 0x40;
  uVar3 = (uVar3 << 0x20) >> 0x21;
  FUN_004f20b4(puVar2,param_1 + 0x20,*(undefined4 *)(puVar1 + -0x7fec));
  FUN_004f33f8(param_1 + 0x48,*param_1,uVar3);
  FUN_004f33f8(param_1 + 0x4d,uVar3 + *param_1 & 0xffffffff,uVar3);
  FUN_004f1f60(puVar2,0,param_1 + 0x48);
  FUN_004f1f60(puVar2,1,param_1 + 0x4d);
  uVar4 = param_1[9];
  if (uVar4 == 0) {
    uVar4 = *(uint *)(puVar1 + -0x7fe8);
  }
  FUN_004f1c18(puVar2,*param_2,local_b0,1,0x10,uVar4);
  lVar10 = ((ulonglong)*(uint *)(param_7 + 0x80) & 0xffffff) << 8;
  uVar4 = (*(code *)**(undefined4 **)*param_3)(param_3,lVar10,0xfff0147,0,0);
  param_1[0xf] = uVar4;
  if (uVar4 == 0) {
    FUN_00641910(1,*(undefined4 *)(puVar1 + -0x7fe4));
    uVar6 = 0xfffffffa;
  }
  else {
    uVar4 = (*(code *)**(undefined4 **)*param_3)(param_3,0x400,0xfff0147,0,0);
    param_1[0x55] = uVar4;
    if (uVar4 == 0) {
      FUN_00641910(1,*(undefined4 *)(puVar1 + -0x7fe0));
      uVar6 = 0xfffffffa;
    }
    else {
      puVar5 = (undefined4 *)(*(code *)**(undefined4 **)*param_3)(param_3,0x80,0xfff0147,0,0);
      param_1[0x12] = (uint)puVar5;
      if (puVar5 == (undefined4 *)0x0) {
        FUN_00641910(1,*(undefined4 *)(puVar1 + -0x7fdc));
        uVar6 = 0xfffffffa;
      }
      else {
        uVar4 = param_1[0x55];
        *puVar5 = 0xb00;
        puVar5[2] = 0x80;
        puVar5[4] = 0x80;
        puVar5[6] = 0x400;
        puVar5[1] = param_6;
        puVar5[3] = param_8;
        puVar5[5] = in_stack_00000074;
        puVar5[7] = uVar4;
        param_1[1] = param_2[2];
        iVar9 = *(int *)(param_7 + 0x80);
        param_1[0x54] = 0;
        param_1[0x11] = param_1[0xf] + ((uint)lVar10 >> 1);
        param_1[0x14] = 0;
        param_1[0x15] = 0;
        param_1[0x16] = 0;
        param_1[0x17] = 0;
        param_1[0x18] = 0;
        param_1[0x1a] = 0;
        param_1[0x1b] = 0;
        param_1[2] = (uint)param_3;
        param_1[0xe] = param_4;
        param_1[3] = param_5;
        param_1[4] = param_6;
        param_1[5] = param_7;
        param_1[8] = in_stack_00000074;
        param_1[6] = param_8;
        param_1[0x10] = param_1[0xf];
        param_1[0xb] = 0;
        param_1[0xc] = 0;
        param_1[0x13] = param_1[0x53] * iVar9;
        uVar4 = param_2[5];
        if ((uVar4 & 2) != 0) {
          param_1[0x1b] = 2;
          uVar4 = param_2[5];
        }
        uVar6 = 0;
        if ((uVar4 & 4) != 0) {
          param_1[0x1b] = param_1[0x1b] | 4;
        }
      }
    }
  }
  return uVar6;
}


// 0x064d8bc (0x20c bytes)
void FUN_0064d8bc(int param_1,undefined4 param_2)

{
  char *pcVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined *puVar5;
  char cVar6;
  int *piVar7;
  
  puVar5 = PTR_PTR_0071b0a4;
  piVar7 = (int *)(param_1 + 0x100);
  while( true ) {
    cVar6 = FUN_004f234c(piVar7,*(uint *)(param_1 + 0x60) ^ 1);
    if (cVar6 != '\0') break;
    syscall_sys_timer_usleep(1000);
  }
  pcVar1 = *(char **)(puVar5 + -0x7ff4);
  if (*pcVar1 == '\0') {
    if (*(int *)(param_1 + 0x24) != 0) {
      FUN_004f95f4(*(int *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x60));
    }
  }
  else {
    FUN_004f95f4(*(undefined4 *)(puVar5 + -0x7fe8),*(undefined4 *)(param_1 + 0x60));
  }
  puVar2 = *(undefined4 **)(param_1 + 0x2c);
  if (puVar2 != (undefined4 *)0x0) {
    if (*(int *)(param_1 + 0x34) == 0) {
      uVar4 = *(undefined4 *)(param_1 + 0x30);
      *(undefined4 *)(param_1 + 0x2c) = 0;
      *(undefined4 *)(param_1 + 0x30) = 0;
      *(undefined4 *)
       (*(int *)(param_1 + (int)(((ulonglong)*(uint *)(param_1 + 0x60) ^ 1) << 2) + 0x40) + 0x20) =
           0;
      (*(code *)*puVar2)(uVar4);
    }
    else {
      *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + -1;
    }
  }
  iVar3 = *piVar7;
  *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(param_1 + 0x60);
  *(int *)(iVar3 + 0xc) = *(int *)(iVar3 + 0xc) + -1;
  idol_draw::CmdQueue_Submit(piVar7,1);
  if (*pcVar1 == '\0') {
    if (*(undefined4 **)(param_1 + 0x28) != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)(param_1 + 0x28))(*(uint *)(param_1 + 0x60) ^ 1);
    }
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 1;
    return;
  }
  FUN_0064a104(*(undefined4 *)(param_1 + 0x20),*(uint *)(param_1 + 0x60) ^ 1,param_2);
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 1;
  return;
}


// 0x064dac8 (0x9c bytes)
void FUN_0064dac8(undefined4 *param_1)

{
  param_1[0xd] = 0;
  param_1[1] = 0xffffffff;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x4d] = 0;
  param_1[0x43] = 0xffffffff;
  *param_1 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0xffffffff;
  param_1[0x48] = 0;
  param_1[0x52] = 0;
  param_1[0x55] = 0;
  return;
}


// 0x064db64 (0x500 bytes)
void FUN_0064db64(int param_1,int param_2,int *param_3,ulonglong param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  uint *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  int iVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  int iVar14;
  ulonglong uVar15;
  int *piVar16;
  double dVar17;
  double dVar18;
  
  iVar1 = *(int *)(param_2 + 0x84);
  iVar11 = *(int *)(param_2 + 0x18);
  uVar2 = *(uint *)(iVar1 + 0xc);
  *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
  *(uint *)(iVar1 + 0xc) = uVar2 + *(int *)(iVar1 + 4);
  puVar9 = PTR_PTR_0071b0a4;
  uVar13 = (ulonglong)uVar2 + (ulonglong)*(uint *)(iVar1 + 8);
  uVar15 = uVar13 + 0xa0;
  uVar12 = uVar15 + ((ulonglong)*(uint *)(iVar11 + 0x230) + 1 & 0x1ffffffe) * 8;
  uVar2 = *(uint *)(param_1 + 0x50) & 1;
  iVar1 = (int)uVar13;
  if ((param_4 & 0xffffffff) < 2) {
    *(ulonglong *)(iVar1 + 0x18) =
         (ulonglong)uVar2 << 0x20 | 0x2000000000 |
         (ulonglong)*(uint *)(*param_3 + 0x10) & 0xfffffff0 |
         (((ulonglong)*(uint *)(iVar11 + 0x244) & 0x1fffffff | 1) * 8 +
          (ulonglong)*(uint *)(iVar11 + 0xa4) + 0x97 & 0x3ff80) << 0x2e | 0x840000000000;
    *(ulonglong *)(iVar1 + 0x28) =
         (ulonglong)uVar2 << 0x20 | 0x4000000000 |
         (ulonglong)*(uint *)(*param_3 + 0x14) & 0xfffffff0 |
         (((ulonglong)*(uint *)(iVar11 + 0x244) & 0x1fffffff | 1) * 8 +
          (ulonglong)*(uint *)(iVar11 + 0x124) + 0xa7 & 0x3ff80) << 0x2e | 0x840000000000;
    *(ulonglong *)(iVar1 + 0x48) =
         ((ulonglong)*(uint *)(param_1 + 0x58) & 0x1ffffff) * 0x80 +
         (ulonglong)*(uint *)(param_1 + *(int *)(param_1 + 0x60) * 4 + 0x40) & 0xfffffff0 |
         0x20848000000000;
    if ((int)param_4 == 0) goto LAB_0064dde8;
  }
  else {
    memset(uVar15 & 0xffffffff,0,(param_4 + 1 & 0xffffffe) << 4);
    uVar6 = (param_4 + 1 & 0x1ffffffe) << 0x31;
    *(ulonglong *)(iVar1 + 0x18) =
         uVar15 & 0xfffffff0 | (ulonglong)uVar2 << 0x20 | 0x2000000000 | uVar6 | 0xc40000000000;
    *(ulonglong *)(iVar1 + 0x28) =
         uVar12 & 0xfffffff0 | uVar6 | (ulonglong)uVar2 << 0x20 | 0x4000000000 | 0xc40000000000;
    *(ulonglong *)(iVar1 + 0x48) =
         ((ulonglong)*(uint *)(param_1 + 0x58) & 0x1ffffff) * 0x80 +
         (ulonglong)*(uint *)(param_1 + *(int *)(param_1 + 0x60) * 4 + 0x40) & 0xfffffff0 |
         0x20848000000000;
  }
  iVar14 = 0;
  uVar15 = 0;
  dVar18 = (double)**(float **)(puVar9 + -0x7fd8);
  piVar16 = param_3;
  do {
    iVar7 = iVar14 + iVar1;
    puVar8 = (uint *)((int)uVar12 + iVar14);
    iVar14 = iVar14 + 8;
    uVar6 = uVar15 & 0xffffffff;
    if (1 < (param_4 & 0xffffffff)) {
      uVar3 = *(uint *)(*piVar16 + 0x14);
      *(undefined4 *)(iVar7 + 0xa4) = *(undefined4 *)(*piVar16 + 0x10);
      uVar4 = *(uint *)(iVar11 + 0x244);
      iVar5 = *(int *)(iVar11 + 0xa4);
      puVar8[1] = uVar3;
      *(uint *)(iVar7 + 0xa0) = (int)(((ulonglong)uVar4 | 1) << 3) + iVar5 + 0x97 & 0xffffff80;
      *puVar8 = (int)(((ulonglong)*(uint *)(iVar11 + 0x244) | 1) << 3) +
                *(int *)(iVar11 + 0x124) + 0xa7 & 0xffffff80;
    }
    uVar15 = uVar15 + 1;
    uVar10 = FUN_00647b94(*(undefined4 *)(*piVar16 + 0x10),*(uint *)(param_1 + 0x68) >> 1 & 1,
                          *(uint *)(param_2 + 0x74) >> 1 & 1);
    iVar5 = iVar1 + 0x70 + (int)(uVar6 << 3);
    iVar7 = *(int *)(*piVar16 + 0x10);
    *(int *)(iVar5 + 0x10) = (int)((ulonglong)uVar10 >> 0x20);
    dVar17 = (double)*(float *)(iVar7 + 0xc);
    *(int *)(iVar5 + 0x14) = (int)uVar10;
    if (dVar17 != dVar18) {
      *(float *)(iVar7 + 0xc) =
           (float)(*(double *)(*(int *)(param_1 + 0x14) + 0x20) * *(double *)(puVar9 + -0x7fd0) +
                  dVar17);
    }
    piVar16 = piVar16 + 1;
  } while ((uVar15 & 0xffffffff) < (param_4 & 0xffffffff));
LAB_0064dde8:
  uVar13 = uVar13 & 0xffffffff;
  puVar8 = (uint *)(iVar1 + 0x78);
  *(int *)(iVar1 + 0x74) = (int)param_4;
  *puVar8 = uVar2;
  if (*(int *)(param_1 + 0x50) == 0) {
    *puVar8 = uVar2 | 8;
  }
  if (*param_3 == *(int *)(param_1 + 0x1c)) {
    *puVar8 = *puVar8 | 4;
  }
  uVar2 = *(uint *)(param_2 + 0x78);
  if ((uVar2 & 4) != 0) {
    FUN_004fb500(uVar13,0x14,0xf,1);
    uVar2 = *(uint *)(param_2 + 0x78);
  }
  if (((uVar2 & 1) == 0) && (((uVar2 & 2) == 0 || (*(int *)(param_1 + 0x50) != 0)))) {
    FUN_004f2f88(param_1 + *(int *)(param_1 + 0x60) * 0x14 + 0x120,uVar13,0xa0);
    iVar1 = *(int *)(param_1 + 0x148);
  }
  else {
    FUN_004f3080(param_1 + *(int *)(param_1 + 0x60) * 0x14 + 0x120,uVar13,0xa0);
    iVar1 = *(int *)(param_1 + 0x148);
  }
  if (iVar1 == 0) {
    iVar11 = *(int *)(param_1 + 0x50);
  }
  else {
    iVar11 = *(int *)(param_1 + 0x50);
    *(int *)(iVar11 * 8 + iVar1 + *(int *)(param_1 + 0x60) * 4) = param_2;
  }
  *(int *)(param_1 + 0x50) = iVar11 + 1;
  return;
}


// 0x064e064 (0x3a4 bytes)
// strings: 00676460: 'PrepareRackUnit(): SID 0x%X was not found in session!'

undefined4 FUN_0064e064(int param_1,int param_2,longlong param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  undefined *puVar4;
  ulonglong uVar5;
  int iVar6;
  undefined4 uVar7;
  uint *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  longlong lVar13;
  ulonglong *__src;
  ulonglong uVar14;
  int iVar15;
  GPiece<4> local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  uint local_a0 [6];
  
  puVar4 = PTR_PTR_0071b0a4;
  iVar15 = *(int *)(param_2 + 0x18);
  lVar13 = param_3 + 0x80;
  uVar12 = param_4 - 0x80;
  uVar5 = FUN_0064cd88(iVar15);
  uVar7 = *(undefined4 *)(param_1 + 0xc);
  puVar8 = (uint *)param_3;
  *puVar8 = uVar12;
  puVar8[4] = 0;
  puVar8[1] = (size_t)uVar5;
  __src = (ulonglong *)lVar13;
  puVar8[2] = (uint)__src;
  puVar8[3] = 0;
  iVar6 = FUN_0064bfbc(uVar7,local_b0,&local_a4,&local_ac,&local_a8);
  if (iVar6 < 0) {
    FUN_00641910(1,*(undefined4 *)(puVar4 + -0x7fc8),*(undefined4 *)(param_2 + 0x10));
    uVar7 = 0xffffffff;
  }
  else {
    FUN_004f5898(local_a0,local_a4,local_ac,iVar15 + 8);
    uVar3 = ((ulonglong)*(uint *)(local_a0[0] + 0x14) + 0x3ff +
             (ulonglong)*(uint *)(local_a0[0] + 0x18) << 0x20) >> 0x2a;
    __src[1] = (ulonglong)local_a0[0] & 0xfffffff0 | 0x200000000000 | uVar3 << 0x38 | 0x840000000000
    ;
    *__src = uVar3 << 0x10 | 0x20010000100;
    uVar1 = *(uint *)(iVar15 + 0x244);
    iVar6 = *(int *)(iVar15 + 0xa4);
    iVar2 = *(int *)(iVar15 + 0x230);
    __src[3] = 0;
    uVar14 = (ulonglong)uVar12 / ((uVar5 & 0x7fffffff) << 1);
    uVar11 = (ulonglong)
             ((longlong)(int)((int)(((ulonglong)uVar1 | 1) << 3) + iVar6 + 0x97 & 0xffffff80) *
              (longlong)iVar2 + 0x3ff << 0x20) >> 0x29 & 0x7ffffe;
    __src[2] = (uVar11 >> 1) << 0x10 | (uVar3 + 0x10) * 0x1000000 | 0x22000000200;
    uVar1 = *(uint *)(iVar15 + 0x244);
    iVar6 = *(int *)(iVar15 + 0x124);
    iVar15 = *(int *)(iVar15 + 0x230);
    __src[6] = 0x2a0f4040100;
    __src[5] = 0;
    uVar10 = (ulonglong)
             ((longlong)(int)((int)(((ulonglong)uVar1 | 1) << 3) + iVar6 + 0xa7 & 0xffffff80) *
              (longlong)iVar15 + 0x3ff << 0x20) >> 0x29 & 0x7ffffe;
    lVar9 = ((-uVar11 - uVar3) - uVar10) + 0xe3;
    __src[4] = (uVar10 >> 1) << 0x10 | (uVar3 + 0x10 + uVar11) * 0x1000000 | 0x24000000200;
    uVar1 = *(uint *)(param_1 + 0x48);
    __src[8] = 0x280f3010100;
    __src[7] = (ulonglong)uVar1 & 0xfffffff0 | 0x8e4a000000006;
    __src[9] = 0;
    __src[10] = lVar9 * 0x10000 & 0xffffffff0000U | 0x6000000000 |
                (0xf3 - lVar9) * 0x1000000 & 0xffffffff000000U | 0x20000000100;
    __src[0xb] = 0x46000000000;
    __src[0xc] = 0x6000000003f;
    __src[0xd] = 0xa0000000000;
    *(undefined4 *)(__src + 0xe) = local_a8;
    if (1 < uVar14) {
      iVar15 = 1;
      do {
        lVar13 = lVar13 + uVar5;
        iVar15 = iVar15 + 1;
        memcpy((void *)lVar13,__src,(size_t)uVar5);
      } while ((int)uVar14 != iVar15);
    }
    memcpy((void *)((int)__src + (uVar12 >> 1)),__src,uVar12 >> 1);
    *(uint **)(param_2 + 0x84) = puVar8;
    FUN_004f539c(local_a0);
    uVar7 = 0;
  }
  return uVar7;
}


// 0x064e408 (0x148 bytes)
// strings: 006764a0: '****  CheckPluginClassProcFootprint( %s ) ****\nOUT OF MEM FOR SCRATCH-PAD AND BUSS-CACHE!\nTry reducing code size, states size, params size or numVoices' | 00676550: '****  CheckPluginClassProcFootprint( %s ) ****\nscratch-pad size (%d bytes) should be at least %d bytes!\nTry reducing bussCacheSize or numVoicesPerJob i'

undefined4 FUN_0064e408(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined *puVar2;
  int iVar4;
  ulonglong uVar3;
  ulonglong uVar5;
  undefined4 uVar6;
  int local_40 [6];
  
  puVar2 = PTR_PTR_0071b0a4;
  iVar4 = param_2 + 8;
  FUN_004f5898(local_40,param_3,param_4,iVar4);
  iVar1 = (int)(((ulonglong)*(uint *)(param_2 + 0x244) | 1) << 3);
  uVar6 = 0xfffffffa;
  uVar5 = (((ulonglong)*(uint *)(local_40[0] + 0x14) + 0x3ff +
            (ulonglong)*(uint *)(local_40[0] + 0x18) << 0x20) >> 0x2a) +
          ((ulonglong)
           ((longlong)*(int *)(param_2 + 0x230) *
            (longlong)(int)(iVar1 + *(int *)(param_2 + 0xa4) + 0x97 & 0xffffff80) + 0x3ff << 0x20)
           >> 0x29 & 0x7ffffe) +
          ((ulonglong)
           ((longlong)*(int *)(param_2 + 0x230) *
            (longlong)(int)(iVar1 + *(int *)(param_2 + 0x124) + 0xa7 & 0xffffff80) + 0x3ff << 0x20)
           >> 0x29 & 0x7ffffe) + 5;
  uVar3 = (0xe8 - uVar5 & 0x3fffff) << 10;
  if (uVar5 < 0xe9) {
    uVar6 = 0;
    if (uVar3 < 0x801) {
      uVar6 = 0xfffffffa;
      FUN_00641910(1,*(undefined4 *)(puVar2 + -0x7fc0),iVar4,uVar3,0x800);
    }
  }
  else {
    FUN_00641910(1,*(undefined4 *)(puVar2 + -0x7fc4),iVar4);
  }
  FUN_004f539c(local_40);
  return uVar6;
}


// 0x064e550 (0x3c bytes)
void FUN_0064e550(int param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  uint uVar1;
  ulonglong uVar2;
  uint *puVar3;
  char in_RESERVE;
  byte in_cr0;
  
  uVar2 = *(longlong *)(param_1 + 0x20) + 4;
  do {
    puVar3 = (uint *)uVar2;
    if (in_RESERVE != '\0') {
      uVar1 = storeWordConditionalIndexed((ulonglong)*puVar3 - 1,0,uVar2 & 0xffffffff);
      *puVar3 = uVar1;
      in_cr0 = 2;
    }
  } while ((in_cr0 & 2) == 0);
  *(undefined4 *)(param_1 + 0x28) = param_2;
  *(undefined4 *)(param_1 + 0x34) = 1;
  *(undefined4 *)(param_1 + 0x30) = param_4;
  return;
}


// 0x064e58c (0x40 bytes)
longlong FUN_0064e58c(undefined4 *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = cellFsClose(*param_1);
  uVar1 = (ulonglong)((int)uVar2 >> 0x1f);
  uVar1 = uVar1 - (uVar1 ^ uVar2);
  return (longlong)(uVar1 << 0x20 | uVar1 >> 0x20) >> 0x3f;
}


// 0x064e5cc (0xa4 bytes)
// strings: 0064e614: '} P(9)' (raw)

longlong FUN_0064e5cc(longlong param_1,undefined4 *param_2,undefined4 param_3,undefined8 param_4,
                     undefined8 param_5)

{
  uint uVar1;
  undefined *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint *puVar5;
  char in_RESERVE;
  byte in_cr0;
  
  puVar2 = PTR_PTR_0071b0a8;
  *param_2 = *(undefined4 *)param_1;
  *(undefined8 *)(param_2 + 2) = param_5;
  param_2[4] = param_3;
  *(undefined8 *)(param_2 + 6) = param_4;
  param_2[0xc] = 0;
  *(longlong *)(param_2 + 8) = param_1;
  param_2[10] = 0;
  param_2[0xd] = 0;
  do {
    puVar5 = (uint *)(param_1 + 4U);
    if (in_RESERVE != '\0') {
      uVar1 = storeWordConditionalIndexed((ulonglong)*puVar5 + 1,0,param_1 + 4U & 0xffffffff);
      *puVar5 = uVar1;
      in_cr0 = 2;
    }
  } while ((in_cr0 & 2) == 0);
  uVar4 = cellFsAioWrite(param_2,param_2 + 0xb,*(undefined4 *)(puVar2 + -0x8000));
  uVar3 = (ulonglong)((int)uVar4 >> 0x1f);
  uVar3 = uVar3 - (uVar3 ^ uVar4);
  return (longlong)(uVar3 << 0x20 | uVar3 >> 0x20) >> 0x3f;
}


// 0x064e670 (0x78 bytes)
longlong FUN_0064e670(int param_1,undefined4 param_2,uint param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  *(undefined4 *)(param_1 + 4) = 0;
  enforceInOrderExecutionIO();
  uVar2 = cellFsOpen(param_2,(int)((param_3 & 0xff) - 1) >> 0x1f & 0x241,param_1,0,0);
  uVar1 = (ulonglong)((int)uVar2 >> 0x1f);
  uVar1 = uVar1 - (uVar1 ^ uVar2);
  return (longlong)(uVar1 << 0x20 | uVar1 >> 0x20) >> 0x3f;
}


// 0x064e6e8 (0x38 bytes)
longlong FUN_0064e6e8(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = cellFsAioFinish();
  uVar1 = (ulonglong)((int)uVar2 >> 0x1f);
  uVar1 = uVar1 - (uVar1 ^ uVar2);
  return (longlong)(uVar1 << 0x20 | uVar1 >> 0x20) >> 0x3f;
}


// 0x064e720 (0x38 bytes)
longlong FUN_0064e720(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = cellFsAioInit();
  uVar1 = (ulonglong)((int)uVar2 >> 0x1f);
  uVar1 = uVar1 - (uVar1 ^ uVar2);
  return (longlong)(uVar1 << 0x20 | uVar1 >> 0x20) >> 0x3f;
}


// 0x064e758 (0xa4 bytes)
// strings: 0064e7a0: '} P(9)' (raw)

longlong FUN_0064e758(longlong param_1,undefined4 *param_2,undefined4 param_3,undefined8 param_4,
                     undefined8 param_5)

{
  uint uVar1;
  undefined *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint *puVar5;
  char in_RESERVE;
  byte in_cr0;
  
  puVar2 = PTR_PTR_0071b0a8;
  *param_2 = *(undefined4 *)param_1;
  *(undefined8 *)(param_2 + 2) = param_5;
  param_2[4] = param_3;
  *(undefined8 *)(param_2 + 6) = param_4;
  param_2[0xc] = 0;
  *(longlong *)(param_2 + 8) = param_1;
  param_2[10] = 0;
  param_2[0xd] = 0;
  do {
    puVar5 = (uint *)(param_1 + 4U);
    if (in_RESERVE != '\0') {
      uVar1 = storeWordConditionalIndexed((ulonglong)*puVar5 + 1,0,param_1 + 4U & 0xffffffff);
      *puVar5 = uVar1;
      in_cr0 = 2;
    }
  } while ((in_cr0 & 2) == 0);
  uVar4 = cellFsAioRead(param_2,param_2 + 0xb,*(undefined4 *)(puVar2 + -0x8000));
  uVar3 = (ulonglong)((int)uVar4 >> 0x1f);
  uVar3 = uVar3 - (uVar3 ^ uVar4);
  return (longlong)(uVar3 << 0x20 | uVar3 >> 0x20) >> 0x3f;
}


// 0x064e7fc (0x48 bytes)
undefined8 FUN_0064e7fc(uint *param_1,uint param_2)

{
  uint uVar1;
  uint *puVar2;
  ulonglong uVar3;
  
  uVar3 = ((ulonglong)param_2 + 0x1f << 0x20) >> 0x25;
  uVar1 = (uint)((ulonglong)param_2 + 0x1f) >> 5;
  puVar2 = param_1;
  if (uVar1 != 0) {
    do {
      puVar2[3] = 0;
      uVar3 = uVar3 - 1;
      puVar2 = puVar2 + 1;
    } while (uVar3 != 0);
  }
  *param_1 = param_2;
  param_1[2] = 0;
  param_1[1] = uVar1;
  return 0;
}


// 0x064e844 (0x54 bytes)
ulonglong FUN_0064e844(int param_1)

{
  int *piVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  piVar1 = (int *)(param_1 + 4);
  uVar5 = 0;
  if (*piVar1 != 0) {
    iVar4 = 0;
    do {
      uVar3 = (ulonglong)*(uint *)(param_1 + 0xc);
      if (*(uint *)(param_1 + 0xc) != 0) {
        lVar6 = 0x20;
        do {
          uVar2 = uVar3 & 1;
          uVar3 = (uVar3 << 0x20) >> 0x21;
          uVar5 = uVar5 + uVar2;
          lVar6 = lVar6 + -1;
        } while (lVar6 != 0);
      }
      iVar4 = iVar4 + 1;
      param_1 = param_1 + 4;
    } while (*piVar1 != iVar4);
  }
  return uVar5 & 0xffffffff;
}


// 0x064e898 (0x10c bytes)
uint FUN_0064e898(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  uint *puVar4;
  uint *puVar5;
  ulonglong uVar6;
  int iVar7;
  uint uVar9;
  ulonglong uVar8;
  uint *puVar10;
  uint uVar11;
  ulonglong uVar12;
  
  uVar3 = (ulonglong)*param_1;
  puVar10 = param_1 + 3;
  uVar1 = param_1[1];
  uVar11 = 0xffffffff;
  if (*param_1 != 0) {
    puVar5 = (uint *)((int)puVar10 + (param_1[2] >> 3 & 0x1ffffffc));
    do {
      puVar4 = puVar5 + 1;
      if ((puVar10 + uVar1 == puVar4) && (uVar6 = (ulonglong)*param_1 & 0x1f, (int)uVar6 != 0)) {
        uVar2 = *puVar5;
      }
      else {
        uVar6 = 0x20;
        uVar2 = *puVar5;
      }
      uVar9 = 1;
      iVar7 = 0;
      if ((uVar2 & 1) != 0) {
        uVar8 = 1;
        iVar7 = 0;
        uVar12 = uVar6;
        if (uVar6 == 0) {
          uVar12 = 1;
        }
        do {
          uVar8 = (uVar8 & 0x7fffffff) << 1;
          iVar7 = iVar7 + 1;
          uVar9 = (uint)uVar8;
          uVar12 = uVar12 - 1;
          if (uVar12 == 0) {
            uVar3 = uVar3 - uVar6;
            goto LAB_0064e934;
          }
        } while ((uVar2 & uVar9) != 0);
      }
      uVar3 = 0;
      uVar11 = ((int)puVar5 - (int)puVar10) * 8 + iVar7;
      *puVar5 = uVar2 | uVar9;
      param_1[2] = uVar11;
LAB_0064e934:
      puVar5 = puVar10;
      if (puVar4 < puVar10 + uVar1) {
        puVar5 = puVar4;
      }
    } while ((int)uVar3 != 0);
  }
  return uVar11;
}


// 0x064e9a4 (0x30 bytes)
void FUN_0064e9a4(uint *param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = param_2 >> 3 & 0x1ffffffc;
  if (*param_1 <= param_2) {
    return;
  }
  *(uint *)((int)param_1 + uVar1 + 0xc) =
       *(uint *)((int)param_1 + uVar1 + 0xc) &
       ((uint)(-0x100000002 << ((ulonglong)param_2 & 0x1f)) |
       (uint)(0xfffffffefffffffe >> 0x40 - ((ulonglong)param_2 & 0x1f)));
  return;
}


// 0x064e9d4 (0x114 bytes)
// strings: 0064ea34: '} X(} @89@' (raw)

uint FUN_0064e9d4(uint *param_1)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint *puVar10;
  uint uVar11;
  uint *puVar12;
  char in_RESERVE;
  
  puVar12 = param_1 + 3;
  uVar4 = *param_1;
  uVar2 = param_1[1];
  uVar11 = 0xffffffff;
  if (uVar4 != 0) {
    puVar5 = (uint *)((int)puVar12 + (param_1[2] >> 3 & 0x1ffffffc));
    do {
      puVar10 = puVar5 + 1;
      if ((puVar12 + uVar2 != puVar10) || (uVar6 = *param_1 & 0x1f, uVar6 == 0)) {
        uVar6 = 0x20;
      }
      uVar8 = 1;
      uVar7 = 0;
      while( true ) {
        do {
          uVar9 = (ulonglong)*puVar5;
          bVar1 = (*puVar5 & (uint)uVar8) == 0;
          if (bVar1) {
            uVar9 = uVar9 | uVar8;
          }
          if (in_RESERVE != '\0') {
            uVar3 = storeWordConditionalIndexed(uVar9,0,ZEXT48(puVar5));
            *puVar5 = uVar3;
          }
        } while (in_RESERVE == '\0' && !bVar1);
        if (bVar1) {
          uVar4 = 0;
          uVar11 = ((int)puVar5 - (int)puVar12) * 8 + uVar7;
          param_1[2] = uVar11;
          goto LAB_0064eab0;
        }
        uVar7 = uVar7 + 1;
        if (uVar6 <= uVar7) break;
        uVar8 = (uVar8 & 0x7fffffff) << 1;
      }
      uVar4 = uVar4 - uVar6;
LAB_0064eab0:
      puVar5 = puVar12;
      if (puVar10 < puVar12 + uVar2) {
        puVar5 = puVar10;
      }
    } while (uVar4 != 0);
  }
  return uVar11;
}


// 0x064eae8 (0x10 bytes)
longlong FUN_0064eae8(longlong param_1)

{
  return ((ulonglong)(param_1 + 0x1f << 0x20) >> 0x23 & 0x1ffffffc) + 0xc;
}


// 0x064eaf8 (0x48 bytes)
void FUN_0064eaf8(longlong param_1,ulonglong param_2)

{
  uint uVar1;
  uint *puVar2;
  ulonglong uVar3;
  char in_RESERVE;
  byte in_cr0;
  
  if ((ulonglong)*(uint *)param_1 <= (param_2 & 0xffffffff)) {
    return;
  }
  uVar3 = param_1 + ((param_2 << 0x20) >> 0x23 & 0x1ffffffc) + 0xc;
  do {
    puVar2 = (uint *)uVar3;
    if (in_RESERVE != '\0') {
      uVar1 = storeWordConditionalIndexed
                        ((ulonglong)*puVar2 &
                         (-0x100000002 << (param_2 & 0x1f) |
                         0xfffffffefffffffeU >> 0x40 - (param_2 & 0x1f)) & 0xffffffff,0,
                         uVar3 & 0xffffffff);
      *puVar2 = uVar1;
      in_cr0 = 2;
    }
  } while ((in_cr0 & 2) == 0);
  return;
}


// 0x064eb40 (0x10 bytes)
void FUN_0064eb40(undefined1 *param_1,undefined1 param_2,undefined1 param_3,undefined2 param_4)

{
  *(undefined2 *)(param_1 + 2) = param_4;
  *param_1 = param_2;
  param_1[1] = param_3;
  return;
}


// 0x064eb50 (0xfc bytes)
undefined4 FUN_0064eb50(int param_1,uint *param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  
  bVar1 = *(byte *)(param_1 + 1);
  uVar6 = (uint)bVar1;
  if (bVar1 == 0xff) {
    uVar6 = *param_2;
  }
  bVar2 = *(byte *)(param_3 + 1);
  uVar5 = (uint)bVar2;
  if (bVar2 == 0xff) {
    uVar5 = *param_2;
  }
  uVar4 = (uint)bVar1;
  if (bVar1 == 0xff) {
    uVar4 = *param_2;
  }
  uVar3 = (uint)bVar2;
  if (bVar2 == 0xff) {
    uVar3 = *param_2;
  }
  uVar7 = 0;
  if ((param_2[uVar4 * 8 + 0x209] <= param_2[uVar3 * 8 + 0x209]) &&
     (uVar7 = 1, param_2[uVar5 * 8 + 0x208] < param_2[uVar6 * 8 + 0x208])) {
    return 0;
  }
  return uVar7;
}


// 0x064ec4c (0x6c bytes)
undefined8 FUN_0064ec4c(int *param_1,longlong param_2,longlong param_3)

{
  float fVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_0071b0b4;
  param_1[5] = (int)param_2 << 2;
  *param_1 = (int)param_2;
  param_1[2] = (int)param_3;
  fVar1 = *(float *)(puVar2 + -0x7ffc);
  param_1[7] = *(int *)(puVar2 + -0x8000);
  param_1[1] = (int)(fVar1 / (float)param_2);
  fVar1 = fVar1 / (float)param_3;
  param_1[3] = (int)fVar1;
  param_1[4] = (int)((float)param_2 * fVar1);
  return 0;
}


// 0x064ecb8 (0x28 bytes)
void FUN_0064ecb8(undefined4 *param_1)

{
  param_1[7] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  return;
}


// 0x064ece0 (0x8 bytes)
// strings: 0067fde0: 'bad allocation'

undefined * FUN_0064ece0(void)

{
  return PTR_s_bad_allocation_0071c768;
}


// 0x064ece8 (0x24 bytes)
void FUN_0064ece8(void)

{
  FUN_005e3b94();
  return;
}


// 0x064ed0c (0x44 bytes)
void FUN_0064ed0c(undefined4 *param_1)

{
  *param_1 = PTR_PTR_0071c774;
  FUN_005e3cd4();
  FUN_005e387c(param_1);
  return;
}


// 0x064ed50 (0x30 bytes)
void FUN_0064ed50(undefined4 *param_1)

{
  *param_1 = PTR_PTR_0071c774;
  FUN_005e3cd4();
  return;
}


// 0x064ed80 (0x24 bytes)
void FUN_0064ed80(void)

{
  __do_global_dtors_aux();
  return;
}


