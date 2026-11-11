// sdk/vUnk2.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 3 functions, 0x5cd5c4-0x5cede8
#include <stdio.h>
#include <string.h>
#include "sdk/vUnk2.h"
#include "sdk/libc/vfscanf.h"
#include "sdk/libc/xputtxt.h"
#include "sdk/sys.h"
#include "sdk/xUnk2.h"
#include "sdk/xUnk3.h"

// 0x05cd5c4 (0x6c4 bytes)
// strings: 00661178: ' +-#0,;:_' | 0067ec78: 'hjltzLv'

int vsnprintf(char *__s,size_t __maxlen,char *__format,__gnuc_va_list __arg)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  undefined *__s_00;
  size_t sVar5;
  longlong lVar4;
  char *pcVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  byte *pbVar11;
  ulonglong uVar12;
  wchar_t local_f0 [2];
  int local_ec;
  mbstate_t local_e8;
  GPiece<64> auStack_e0;
  GPiece<32> auStack_a0;
  char *local_80;
  size_t local_7c;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  int local_5c;
  int local_58;
  int local_54;
  ushort local_50;
  byte local_4e;
  
  uVar12 = (ulonglong)(int)__format;
  local_e8.__count = 0;
  local_e8.__value.__wch.piece<0,2>() = 0;
  local_e8.__value.__wch.piece<2,2>() = 0;
  memcpy4(&local_ec,__arg);
  local_58 = 0;
  local_80 = __s;
  local_7c = __maxlen;
  uVar10 = uVar12;
  do {
    while( true ) {
      local_f0[0] = L'\0';
      sVar5 = mbrtowc(local_f0,(char *)(byte *)uVar12,0x7fffffff,&local_e8);
      uVar9 = (ulonglong)(ushort)local_f0[0];
      if ((int)sVar5 < 1) {
        lVar4 = ((longlong)((uVar9 ^ 0x25) - 1 << 0x20) >> 0x3f) -
                ((longlong)-(ulonglong)*(byte *)uVar12 >> 0x3f);
        iVar7 = (int)lVar4;
      }
      else {
        lVar4 = (longlong)(int)sVar5 + ((longlong)((uVar9 ^ 0x25) - 1 << 0x20) >> 0x3f);
        iVar7 = (int)lVar4;
      }
      if (iVar7 == 0) break;
      uVar12 = uVar12 + lVar4;
    }
    iVar7 = (int)(uVar12 - uVar10);
    if (0 < iVar7) {
      local_7c = (**(code **)local_80)(local_7c,uVar10 & 0xffffffff,uVar12 - uVar10 & 0xffffffff);
      if (local_7c == 0) {
        return -1;
      }
      uVar9 = (ulonglong)(ushort)local_f0[0];
    }
    __s_00 = PTR_s____0_____0071c3e4;
    local_58 = iVar7 + local_58;
    if (uVar9 == 0) {
      return local_58;
    }
    uVar10 = ZEXT48(PTR_s____0_____0071c3e4);
    local_50 = 0;
    local_60 = 0;
    local_64 = 0;
    local_68 = 0;
    local_6c = 0;
    local_70 = 0;
    local_74 = 0;
    while( true ) {
      uVar9 = uVar12 + 1;
      pbVar11 = (byte *)uVar9;
      pcVar6 = strchr(__s_00,(int)(char)*pbVar11);
      if (pcVar6 == (char *)0x0) break;
      local_50 = (ushort)*(undefined4 *)
                          (__s_00 + (int)(((longlong)(int)pcVar6 - uVar10 & 0xffffffff) << 2) + 0xc)
                 | local_50;
      uVar12 = uVar9;
    }
    if (*pbVar11 == 0x2a) {
      local_54 = *(int *)(local_ec + 4);
      if (local_54 < 0) {
        local_54 = -local_54;
        local_50 = local_50 | 4;
      }
      uVar9 = uVar12 + 2;
      local_ec = local_ec + 8;
      pbVar11 = (byte *)uVar9;
    }
    else {
      local_54 = 0;
      bVar1 = *pbVar11;
      iVar7 = 0;
      if ((*(ushort *)((uint)bVar1 * 2 + *(int *)PTR_PTR_0071c3e8) & 0x20) != 0) {
        do {
          local_54 = iVar7 * 10 + (uint)bVar1 + -0x30;
          do {
            uVar9 = uVar9 + 1;
            pbVar11 = (byte *)uVar9;
            bVar1 = *pbVar11;
            if ((*(ushort *)((uint)bVar1 * 2 + *(int *)PTR_PTR_0071c3e8) & 0x20) == 0)
            goto LAB_005cd7d4;
            iVar7 = local_54;
          } while (local_54 == 0x7fffffff);
        } while( true );
      }
    }
LAB_005cd7d4:
    if (*pbVar11 == 0x2e) {
      uVar10 = uVar9 + 1;
      pbVar11 = (byte *)uVar10;
      if (*pbVar11 == 0x2a) {
        uVar10 = uVar9 + 2;
        pbVar11 = (byte *)uVar10;
        local_5c = *(int *)(local_ec + 4);
        local_ec = local_ec + 8;
      }
      else {
        local_5c = 0;
        bVar1 = *pbVar11;
        iVar7 = 0;
        if ((*(ushort *)((uint)bVar1 * 2 + *(int *)PTR_PTR_0071c3e8) & 0x20) != 0) {
          do {
            local_5c = iVar7 * 10 + (uint)bVar1 + -0x30;
            do {
              uVar10 = uVar10 + 1;
              pbVar11 = (byte *)uVar10;
              bVar1 = *pbVar11;
              if ((*(ushort *)((uint)bVar1 * 2 + *(int *)PTR_PTR_0071c3e8) & 0x20) == 0) {
                pcVar6 = strchr(PTR_s_hjltzLv_0071c3ec,(int)(char)*pbVar11);
                goto joined_r0x005cda08;
              }
              iVar7 = local_5c;
            } while (local_5c == 0x7fffffff);
          } while( true );
        }
      }
    }
    else {
      local_5c = -1;
      uVar10 = uVar9;
    }
    pcVar6 = strchr(PTR_s_hjltzLv_0071c3ec,(int)(char)*pbVar11);
joined_r0x005cda08:
    if (pcVar6 == (char *)0x0) {
      local_4e = 0;
      uVar8 = uVar10 + 1;
      uVar9 = uVar10;
LAB_005cd854:
      uVar12 = uVar8;
      if (local_4e != 0x76) goto LAB_005cd864;
LAB_005cd8dc:
      uVar12 = uVar8;
      if ((local_50 & 0x781) != 0) goto LAB_005cd890;
      local_50 = local_50 | 1;
      iVar7 = vprintf_format_dispatch(auStack_a0,&local_ec,*pbVar11,auStack_e0);
    }
    else {
      uVar9 = uVar10 + 1;
      local_4e = *pbVar11;
      uVar8 = uVar10 + 2;
      pbVar3 = (byte *)uVar8;
      bVar1 = *pbVar3;
      pbVar11 = (byte *)uVar9;
      if (local_4e == 0x68) {
        if (*pbVar11 == 0x68) {
          if (bVar1 == 0x76) {
            uVar9 = uVar10 + 3;
            local_4e = 0x67;
          }
          else {
            local_4e = 0x62;
            uVar9 = uVar8;
          }
        }
        else {
          if (*pbVar11 != 0x76) goto LAB_005cd848;
LAB_005cda84:
          local_4e = 99;
          uVar9 = uVar8;
        }
LAB_005cda8c:
        uVar8 = uVar9 + 1;
        pbVar11 = (byte *)uVar9;
        goto LAB_005cd854;
      }
      if (local_4e != 0x76) {
        if (local_4e == 0x6c) {
          if (*pbVar11 == 0x6c) {
            if (bVar1 == 0x76) {
LAB_005cdc54:
              local_4e = 0x61;
              uVar9 = uVar10 + 3;
            }
            else {
              local_4e = 0x71;
              uVar9 = uVar8;
            }
          }
          else {
            if (*pbVar11 != 0x76) goto LAB_005cd848;
            local_4e = 0x76;
            uVar9 = uVar8;
          }
        }
        else {
          if ((local_4e != 0x4c) || (*pbVar11 != 0x76)) {
LAB_005cd848:
            if (local_4e != 0x66) goto LAB_005cd854;
            goto LAB_005cda24;
          }
LAB_005cdb28:
          local_4e = 0x65;
          uVar9 = uVar8;
        }
        goto LAB_005cda8c;
      }
      bVar2 = *pbVar11;
      if (bVar2 != 99) {
        if (bVar2 == 0x68) {
          if (bVar1 != 0x68) goto LAB_005cda84;
          local_4e = 0x67;
          uVar9 = uVar10 + 3;
        }
        else if (bVar2 == 0x6c) {
          if (bVar1 == 0x6c) goto LAB_005cdc54;
          local_4e = 0x76;
          uVar9 = uVar8;
        }
        else {
          if (bVar2 == 0x4c) goto LAB_005cdb28;
          if (((((bVar2 == 0x75) || (bVar2 == 0x6f)) || (bVar2 == 0x78)) || (bVar2 == 0x58)) &&
             (bVar1 == 99)) {
            local_4e = 100;
          }
        }
        goto LAB_005cda8c;
      }
      local_4e = 0x66;
LAB_005cda24:
      uVar12 = uVar8;
      if ((*pbVar11 == 99) &&
         (((bVar1 = *pbVar3, bVar1 == 0x75 || (bVar1 == 0x6f)) ||
          ((bVar1 == 0x78 || (bVar1 == 0x58)))))) {
        uVar12 = uVar10 + 3;
        local_4e = 100;
        uVar9 = uVar8;
        pbVar11 = pbVar3;
      }
LAB_005cd864:
      if (((local_4e == 0x61) || (local_4e == 99)) || ((local_4e == 0x67 || (local_4e == 100)))) {
        uVar8 = uVar9 + 1;
        goto LAB_005cd8dc;
      }
      uVar8 = uVar9 + 1;
      if (local_4e == 0x65) goto LAB_005cd8dc;
LAB_005cd890:
      iVar7 = vprintf_format_dispatch(auStack_a0,&local_ec,*pbVar11,auStack_e0);
    }
    if (iVar7 < 0) {
      return -1;
    }
    uVar10 = uVar12;
    if ((*(char *)uVar12 == 'c') && (local_4e == 100)) {
      uVar12 = uVar12 + 1;
      uVar10 = uVar12;
    }
  } while( true );
}


// 0x05cdc88 (0x154 bytes)
undefined4
vprintf_format_dispatch(int param_1,undefined8 param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  if (0x53 < (param_3 - 0x25U & 0xff)) {
    iVar2 = *(int *)(param_1 + 0x2c);
    if ((char)param_3 == '\0') {
      *(undefined1 *)(iVar2 + param_4) = 0x25;
      *(int *)(param_1 + 0x2c) = iVar2 + 1;
      iVar2 = FUN_005d9d68(param_1,param_4,param_3,param_4,param_2);
    }
    else {
      *(char *)(iVar2 + param_4) = (char)param_3;
      *(int *)(param_1 + 0x2c) = iVar2 + 1;
      iVar2 = FUN_005d9d68(param_1,param_4,param_3,param_4,param_2);
    }
    if (iVar2 < 0) {
      uVar1 = 0xffffffff;
    }
    else {
      uVar1 = 0;
    }
    return uVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x005cdd10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)(PTR_DAT_0071c3f0 +
                    *(int *)(PTR_DAT_0071c3f0 +
                            ((uint)((param_3 - 0x25U & 0xffffffff) << 2) & 0x3fc))))();
  return uVar1;
}


// 0x05cedb8 (0x30 bytes)
longlong FUN_005cedb8(void)

{
  longlong lVar1;
  undefined4 uStack_44;
  
  lVar1 = sys_time_get_system_time();
  return lVar1 - **(longlong **)(uStack_44 + -0x5f28);
}


