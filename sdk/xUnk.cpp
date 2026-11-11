// sdk/xUnk.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 5 functions, 0x5cb4fc-0x5cbc68
#include <string.h>
#include "sdk/xUnk.h"
#include "sdk/libc/xlv2mtx.h"
#include "sdk/libc/xsyslock.h"

// 0x05cb4fc (0x674 bytes)
// strings: 0067ec60: 'error 0xxxxxxxxx' | 0067eaf8: 'no locks available' | 0067ea78: 'filename too long' | 0067e850: 'no error' | 0067eb88: 'not supported' | 0067eb70: 'directory not empty' | 0067ebb8: 'no such device or address' | 0067eb60: 'not a directory' | 0067e9b8: 'operation in progress' | 0067e8d0: 'bad message' | 0067e840: 'improper link' | 0067ea58: 'bad message buffer length' | 0067e878: 'permission denied' | 0067e860: 'argument list too long' | 0067ea30: 'too many open files' | 0067ea08: 'input/output error' | 0067e8b8: 'bad file descriptor' | 0067eb28: 'no space left on device' | 0067ea90: 'too many files open in system' | 0067ec10: 'read-only file system' | 0067ebf0: 'broken pipe' | 0067eb98: 'bad I/O control operation' | 0067ec28: 'invalid seek' | 0067e908: 'no child processes' | 0067e960: 'bad address' | 0067e950: 'file exists' | 0067e8f0: 'operation canceled' | 0067ea20: 'is a directory' | 0067e998: 'multibyte encoding error' | 0067ec00: 'range error'

char * strerror(ulonglong param_1,char *param_2)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  char cVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  char cVar11;
  int in_r13;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  char *pcVar15;
  char *pcVar16;
  char *pcVar17;
  char *pcVar18;
  char *pcVar19;
  
  uVar3 = (uint)param_1;
  if (uVar3 == 0x80010021) {
    return PTR_s_too_many_links_0071c344;
  }
  if ((int)uVar3 < -0x7ffeffde) {
    if (uVar3 == 0x8001000b) {
      return PTR_s_operation_timed_out_0071c39c;
    }
    if ((int)uVar3 < -0x7ffefff4) {
      pcVar12 = PTR_s_no_such_process_0071c398;
      if (uVar3 != 0x80010005) {
        if ((int)uVar3 < -0x7ffefffa) {
          pcVar12 = PTR_s_invalid_argument_0071c334;
          if (uVar3 != 0x80010002) {
            if ((int)uVar3 < -0x7ffefffd) {
              pcVar12 = PTR_s_resource_temporarily_unavailable_0071c2f8;
              if (uVar3 != 0x80010001) goto LAB_005cb5f8;
            }
            else {
              pcVar12 = PTR_s_function_not_implemented_0071c36c;
              if ((uVar3 != 0x80010003) &&
                 (pcVar12 = PTR_s_not_enough_space_0071c364, uVar3 != 0x80010004))
              goto LAB_005cb5f8;
            }
          }
        }
        else {
          pcVar12 = PTR_s_resource_deadlock_avoided_0071c310;
          if (uVar3 != 0x80010008) {
            if ((int)uVar3 < -0x7ffefff7) {
              pcVar12 = PTR_s_no_such_file_or_directory_0071c358;
              if ((uVar3 != 0x80010006) &&
                 (pcVar12 = PTR_s_exec_format_error_0071c35c, uVar3 != 0x80010007))
              goto LAB_005cb5f8;
            }
            else {
              pcVar12 = PTR_s_operation_not_permitted_0071c384;
              if ((uVar3 != 0x80010009) &&
                 (pcVar12 = PTR_s_resource_busy_0071c304, uVar3 != 0x8001000a)) goto LAB_005cb5f8;
            }
          }
        }
      }
    }
    else {
      pcVar12 = PTR_s_domain_error_0071c314;
      if (uVar3 != 0x8001001b) {
        if ((int)uVar3 < -0x7ffeffe4) {
          pcVar12 = PTR_s_is_a_directory_0071c33c;
          if (uVar3 != 0x80010012) {
            if ((int)uVar3 < -0x7ffeffed) {
              pcVar12 = PTR_s_bad_address_0071c31c;
              if ((uVar3 != 0x8001000d) &&
                 (pcVar12 = PTR_s_no_child_processes_0071c30c, uVar3 != 0x8001000e))
              goto LAB_005cb5f8;
            }
            else {
              pcVar12 = PTR_s_operation_canceled_0071c308;
              if ((uVar3 != 0x80010013) &&
                 (pcVar12 = PTR_s_file_exists_0071c318, uVar3 != 0x80010014)) goto LAB_005cb5f8;
            }
          }
        }
        else {
          pcVar12 = PTR_s_file_positioning_error_0071c324;
          if (uVar3 != 0x8001001e) {
            if ((int)uVar3 < -0x7ffeffe1) {
              pcVar12 = PTR_s_range_error_0071c38c;
              if ((uVar3 != 0x8001001c) &&
                 (pcVar12 = PTR_s_multibyte_encoding_error_0071c328, uVar3 != 0x8001001d))
              goto LAB_005cb5f8;
            }
            else {
              pcVar12 = PTR_s_interrupted_function_call_0071c330;
              if ((uVar3 != 0x8001001f) &&
                 (pcVar12 = PTR_s_file_too_large_0071c320, uVar3 != 0x80010020)) goto LAB_005cb5f8;
            }
          }
        }
      }
    }
  }
  else {
    if (uVar3 == 0x8001002d) {
      return PTR_s_no_such_device_0071c354;
    }
    if ((int)uVar3 < -0x7ffeffd2) {
      pcVar12 = PTR_s_invalid_seek_0071c394;
      if (uVar3 != 0x80010027) {
        if ((int)uVar3 < -0x7ffeffd8) {
          pcVar12 = PTR_s_bad_I_O_control_operation_0071c37c;
          if (uVar3 != 0x80010024) {
            if ((int)uVar3 < -0x7ffeffdb) {
              pcVar12 = PTR_s_too_many_files_open_in_system_0071c350;
              if ((uVar3 != 0x80010022) &&
                 (pcVar12 = PTR_s_no_space_left_on_device_0071c368, uVar3 != 0x80010023))
              goto LAB_005cb5f8;
            }
            else {
              pcVar12 = PTR_s_broken_pipe_0071c388;
              if ((uVar3 != 0x80010025) &&
                 (pcVar12 = PTR_s_read_only_file_system_0071c390, uVar3 != 0x80010026))
              goto LAB_005cb5f8;
            }
          }
        }
        else {
          pcVar12 = PTR_s_bad_file_descriptor_0071c2fc;
          if (uVar3 != 0x8001002a) {
            if ((int)uVar3 < -0x7ffeffd5) {
              pcVar12 = PTR_s_argument_list_too_long_0071c2f0;
              if ((uVar3 != 0x80010028) &&
                 (pcVar12 = PTR_s_permission_denied_0071c2f4, uVar3 != 0x80010029))
              goto LAB_005cb5f8;
            }
            else {
              pcVar12 = PTR_s_input_output_error_0071c338;
              if ((uVar3 != 0x8001002b) &&
                 (pcVar12 = PTR_s_too_many_open_files_0071c340, uVar3 != 0x8001002c))
              goto LAB_005cb5f8;
            }
          }
        }
      }
    }
    else {
      pcVar12 = PTR_s_bad_message_buffer_length_0071c348;
      if (uVar3 != 0x80010033) {
        if ((int)uVar3 < -0x7ffeffcc) {
          pcVar12 = PTR_s_improper_link_0071c2e8;
          if (uVar3 != 0x80010030) {
            if ((int)uVar3 < -0x7ffeffcf) {
              pcVar12 = PTR_s_not_a_directory_0071c370;
              if ((uVar3 != 0x8001002e) &&
                 (pcVar12 = PTR_s_no_such_device_or_address_0071c380, uVar3 != 0x8001002f))
              goto LAB_005cb5f8;
            }
            else {
              pcVar12 = PTR_s_bad_message_0071c300;
              if ((uVar3 != 0x80010031) &&
                 (pcVar12 = PTR_s_operation_in_progress_0071c32c, uVar3 != 0x80010032))
              goto LAB_005cb5f8;
            }
          }
        }
        else {
          pcVar12 = PTR_s_directory_not_empty_0071c374;
          if (uVar3 != 0x80010036) {
            if ((int)uVar3 < -0x7ffeffc9) {
              pcVar12 = PTR_s_filename_too_long_0071c34c;
              if ((uVar3 != 0x80010034) &&
                 (pcVar12 = PTR_s_no_locks_available_0071c360, uVar3 != 0x80010035)) {
LAB_005cb5f8:
                if (param_2 == (char *)0x0) {
                  param_2 = (char *)(in_r13 + -0x6f70);
                  pcVar12 = (char *)(in_r13 + -0x6f61);
                  pcVar19 = (char *)(in_r13 + -0x6f68);
                  pcVar18 = (char *)(in_r13 + -0x6f67);
                  pcVar17 = (char *)(in_r13 + -0x6f66);
                  pcVar16 = (char *)(in_r13 + -0x6f65);
                  pcVar15 = (char *)(in_r13 + -0x6f64);
                  pcVar14 = (char *)(in_r13 + -0x6f63);
                  pcVar13 = (char *)(in_r13 + -0x6f62);
                }
                else {
                  pcVar19 = param_2 + 8;
                  pcVar18 = param_2 + 9;
                  pcVar17 = param_2 + 10;
                  pcVar16 = param_2 + 0xb;
                  pcVar15 = param_2 + 0xc;
                  pcVar14 = param_2 + 0xd;
                  pcVar13 = param_2 + 0xe;
                  pcVar12 = param_2 + 0xf;
                }
                strcpy(param_2,PTR_s_error_0xxxxxxxxx_0071c3a0);
                uVar10 = param_1 >> 0x18 & 0xf;
                uVar9 = param_1 >> 0x14 & 0xf;
                uVar7 = param_1 >> 0x10 & 0xf;
                uVar6 = param_1 >> 0xc & 0xf;
                uVar5 = param_1 >> 8 & 0xf;
                uVar4 = param_1 >> 4 & 0xf;
                bVar1 = (byte)(param_1 >> 0x18) >> 4;
                cVar2 = bVar1 + 0x57;
                if (uVar3 >> 0x1c < 10) {
                  cVar2 = bVar1 + 0x30;
                }
                cVar11 = (char)uVar10;
                cVar8 = cVar11 + 'W';
                *pcVar19 = cVar2;
                if ((uint)uVar10 < 10) {
                  cVar8 = cVar11 + '0';
                }
                cVar2 = (char)uVar9;
                cVar11 = cVar2 + 'W';
                *pcVar18 = cVar8;
                if ((uint)uVar9 < 10) {
                  cVar11 = cVar2 + '0';
                }
                cVar2 = (char)uVar7;
                cVar8 = cVar2 + 'W';
                *pcVar17 = cVar11;
                if ((uint)uVar7 < 10) {
                  cVar8 = cVar2 + '0';
                }
                cVar2 = (char)uVar6;
                cVar11 = cVar2 + 'W';
                *pcVar16 = cVar8;
                if ((uint)uVar6 < 10) {
                  cVar11 = cVar2 + '0';
                }
                cVar2 = (char)uVar5;
                cVar8 = cVar2 + 'W';
                *pcVar15 = cVar11;
                if ((uint)uVar5 < 10) {
                  cVar8 = cVar2 + '0';
                }
                cVar2 = (char)uVar4;
                cVar11 = cVar2 + 'W';
                *pcVar14 = cVar8;
                if ((uint)uVar4 < 10) {
                  cVar11 = cVar2 + '0';
                }
                cVar2 = (char)(param_1 & 0xf);
                cVar8 = cVar2 + 'W';
                *pcVar13 = cVar11;
                if ((uint)(param_1 & 0xf) < 10) {
                  cVar8 = cVar2 + '0';
                }
                *pcVar12 = cVar8;
                return param_2;
              }
            }
            else {
              pcVar12 = PTR_s_not_supported_0071c378;
              if ((uVar3 != 0x80010037) && (pcVar12 = PTR_s_no_error_0071c2ec, uVar3 != 0))
              goto LAB_005cb5f8;
            }
          }
        }
      }
    }
  }
  return pcVar12;
}


// 0x05cbb70 (0x4c bytes)
void FUN_005cbb70(int param_1)

{
  if (param_1 < *(int *)PTR_DAT_0071c3a4) {
    FUN_005d0370(PTR_DAT_0071c3a4 + param_1 * 0x28 + 8);
  }
  return;
}


// 0x05cbbbc (0x30 bytes)
void FUN_005cbbbc(int param_1)

{
  if (param_1 != 0) {
    FUN_005d0370(*(undefined4 *)(param_1 + 0x44));
  }
  return;
}


// 0x05cbbec (0x4c bytes)
void FUN_005cbbec(int param_1)

{
  if (param_1 < *(int *)PTR_DAT_0071c3a4) {
    FUN_005d03b4(PTR_DAT_0071c3a4 + param_1 * 0x28 + 8);
  }
  return;
}


// 0x05cbc38 (0x30 bytes)
void FUN_005cbc38(int param_1)

{
  if (param_1 != 0) {
    FUN_005d03b4(*(undefined4 *)(param_1 + 0x44));
  }
  return;
}


