//==== 005f01d8  ns=Global  size=0x198
// sig: undefined FUN_005f01d8(void)
// callers(1): 005f0370 FUN_005f0370
// callees(2): 005d0140 libc::memset; 005efad8 FUN_005efad8

int FUN_005f01d8(int param_1,int param_2)

{
  int iVar1;
  
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x4ac) != *(int *)(param_1 + 0xc)) {
      if (*(int *)(param_1 + 0x1d0) != 0) {
        *(undefined4 *)(param_1 + 0x1c) = 1;
        return 0;
      }
      if (*(int *)(param_1 + 0x1c) == 0) {
        iVar1 = *(int *)(param_1 + 0x470);
        if (iVar1 - 1U < 0xfffffffe) {
          *(undefined4 *)(param_1 + 0x470) = 0;
          *(int *)(param_1 + 0x498) = *(int *)(param_1 + 0x498) + (param_2 - iVar1);
        }
        if (*(int *)(param_1 + 0x4b8) != 0) {
          *(undefined4 *)(param_1 + 0x4b8) = 0;
          if (*(int *)(param_1 + 0x110) != 0) {
            FUN_005efad8(param_1,0);
            FUN_005efad8(param_1,1);
          }
          *(undefined4 *)(param_1 + 0x4cc) = 0;
          *(undefined4 *)(param_1 + 0x474) = 0;
        }
        if (*(int *)(param_1 + 0x108) != 0) {
          *(undefined4 *)(param_1 + 0x4cc) = 0;
          *(undefined4 *)(param_1 + 0x474) = 0;
        }
        *(undefined4 *)(param_1 + 0x4bc) = 0;
        *(undefined4 *)(param_1 + 0x1dc) = 1;
        if ((((*(int *)(param_1 + 0x114) != 0) && (*(int *)(param_1 + 0xd0) != 0)) &&
            (*(int *)(param_1 + 0x4dc) != 0x6132424b)) &&
           ((*(int *)(param_1 + 0x10c) == 0 && (*(int *)(param_1 + 0xd8) != 0)))) {
          libc::memset(*(int *)(param_1 + 0xd8),0,*(undefined4 *)(param_1 + 0xf4));
        }
        *(undefined4 *)(param_1 + 0xdc) = *(undefined4 *)(param_1 + 0xd8);
        *(undefined4 *)(param_1 + 0x128) = 0;
        return param_1;
      }
    }
    param_1 = 0;
  }
  return param_1;
}



//==== 005f0370  ns=Global  size=0x728
// sig: undefined FUN_005f0370(void)
// callers(2): 005f0a98 FUN_005f0a98; 005f0aa0 FUN_005f0aa0
// callees(8): 005c6094 FUN_005c6094; 005eb450 FUN_005eb450; 005ee120 FUN_005ee120; 005f01d8 FUN_005f01d8; 005f5090 FUN_005f5090; 005f538c FUN_005f538c; 005f5398 FUN_005f5398; 005fb780 FUN_005fb780
// strings: 00661e78: 'Decompress' | 00661e40: 'C:\\devel\\projects\\bink\\src\\sdk\\decode\\/binkdoframe.inl' | 00661e88: 'Decompress audio' | 00661ea0: 'Decompress video'

undefined4 FUN_005f0370(uint param_1,ulonglong param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  ulonglong uVar5;
  ulonglong uVar9;
  uint uVar10;
  int *piVar12;
  ulonglong uVar11;
  longlong lVar13;
  int *piVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  uint *puVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  int iVar20;
  int *piVar21;
  uint local_415c;
  undefined1 auStack_4149 [16521];
  uint local_c0;
  int local_bc;
  int local_b8;
  undefined1 *local_b4;
  ulonglong local_b0;
  ulonglong local_a0;
  ulonglong local_98;
  
  if ((param_2 & 0x100) != 0) {
    uVar8 = FUN_005f5090();
    param_1 = FUN_005f01d8(param_1,uVar8);
    if (param_1 == 0) {
      return 0;
    }
  }
  local_b0 = (ulonglong)param_1;
  local_b8 = *(int *)(param_1 + 0xd0);
  piVar1 = *(int **)(param_1 + 0xec);
  piVar2 = *(int **)(param_1 + 0xe8);
  iVar6 = *(int *)(param_1 + 0x11c);
  if (((*(int *)(param_1 + 300) != 0) || (FUN_005eb450(local_b0), *(int *)(param_1 + 0x1c) != 0)) ||
     (*(int *)(param_1 + 300) != 0)) {
    return 0;
  }
  iVar7 = *(int *)PTR_DAT_0071a414;
  if (iVar7 != 0) {
    (*(code *)**(undefined4 **)(iVar7 + 0x50))
              (iVar7,0,0,0,0,PTR_s_C__devel_projects_bink_src_sdk_d_0071a4a4,0x1b9,
               ZEXT48(PTR_DAT_0071a40c) + 0x624);
  }
  local_bc = FUN_005f5090();
  iVar7 = *(int *)PTR_DAT_0071a414;
  if (iVar7 != 0) {
    (*(code *)**(undefined4 **)(iVar7 + 0x50))
              (iVar7,0,0,0,0,PTR_s_C__devel_projects_bink_src_sdk_d_0071a4a4,0x1c2,
               ZEXT48(PTR_DAT_0071a40c) + 0x628);
  }
  iVar7 = *(int *)(param_1 + 0x38);
  uVar4 = (param_2 << 0x20) >> 0x29 & 1;
  piVar14 = (int *)((int)piVar2 + iVar6);
  piVar21 = piVar2;
  if (0 < iVar7) {
    local_b4 = auStack_4149;
    local_98 = ZEXT48(&stack0x00000000) - 0x4160;
    local_a0 = ZEXT48(&stack0x00000000) - 0x415c;
    iVar6 = 0;
    piVar12 = piVar14;
    while (piVar2 <= piVar12) {
      iVar3 = *piVar21;
      iVar20 = iVar3;
      if ((uVar4 != 0) && (0 < (int)*(uint *)(param_1 + 0x124))) {
        uVar15 = (ulonglong)*(uint *)(param_1 + 0x124);
        uVar10 = 0;
        piVar12 = piVar1;
        if (*piVar1 == iVar6) {
          uVar10 = 0;
        }
        else {
          do {
            piVar12 = piVar12 + 1;
            uVar10 = uVar10 + 1;
            uVar15 = uVar15 - 1;
            if (uVar15 == 0) goto LAB_005f05e8;
          } while (*piVar12 != iVar6);
          if (uVar10 == 0xffffffff) goto LAB_005f05e8;
        }
        iVar20 = 0;
        if (iVar3 != 0) {
          piVar12 = piVar21 + 2;
          uVar15 = (ulonglong)(uint)piVar21[1] & 0xfffffff0;
          if ((int)uVar15 != 0) {
            puVar17 = (uint *)(uVar10 * 0x200 + (uVar10 & 0x1ffffff) * -0x80 +
                              *(int *)(param_1 + 0x154));
            local_c0 = puVar17[5];
            lVar13 = (ulonglong)*puVar17 - (ulonglong)puVar17[6];
            if ((int)lVar13 < 0) {
              lVar13 = lVar13 + (ulonglong)puVar17[2];
            }
            do {
              uVar10 = local_c0;
              if (((piVar14 < piVar12) || (piVar12 < piVar2)) ||
                 (piVar14 < (int *)((int)piVar12 + iVar3))) break;
              uVar18 = (ulonglong)puVar17[2] - lVar13 & 0xfffffff0;
              if (0x10 < uVar18) {
                uVar18 = uVar18 - 0x10;
              }
              uVar5 = FUN_005f538c(local_c0);
              local_415c = (uint)uVar5;
              uVar11 = (ulonglong)*puVar17;
              uVar19 = uVar18;
              if ((puVar17[4] - uVar11 & 0xffffffff) < (uVar18 & 0xffffffff)) {
                uVar19 = puVar17[4] - uVar11;
              }
              uVar9 = uVar11;
              uVar16 = uVar11;
              if (((uVar19 & 0xffffffff) < (uVar5 & 0x7fffffff) << 1) &&
                 (uVar9 = ZEXT48(local_b4) & 0xfffffff0, uVar16 = uVar9,
                 (uVar5 & 0xffffffff) <= (uVar19 & 0xffffffff))) {
                uVar16 = uVar11;
              }
              FUN_005f5398(uVar10,uVar16,local_a0 & 0xffffffff,piVar12,local_98 & 0xffffffff,
                           (int *)((int)piVar12 + iVar3),uVar9,0);
              uVar11 = uVar5 & 0xffffffff;
              if ((uVar15 & 0xffffffff) < (uVar5 & 0xffffffff)) {
                local_415c = (uint)uVar15;
                uVar11 = uVar15;
              }
              uVar15 = uVar15 - uVar11;
              if ((uVar18 & 0xffffffff) < (uVar11 & 0xffffffff)) {
                local_415c = (uint)uVar18;
                uVar11 = uVar18;
              }
              uVar10 = *puVar17;
              if ((uint)uVar16 == uVar10) {
                *puVar17 = uVar10 + (int)uVar11;
              }
              else if ((uVar19 & 0xffffffff) < (uVar11 & 0xffffffff)) {
                if ((int)uVar19 != 0) {
                  FUN_005c6094(uVar10,uVar16,uVar19 & 0xffffffff);
                  uVar16 = uVar16 + uVar19 & 0xffffffff;
                  uVar11 = local_415c - uVar19;
                  local_415c = (uint)uVar11;
                }
                FUN_005c6094(puVar17[3],uVar16,uVar11 & 0xffffffff);
                *puVar17 = puVar17[3] + local_415c;
              }
              else {
                FUN_005c6094(uVar10,uVar16,uVar11 & 0xffffffff);
                *puVar17 = *puVar17 + local_415c;
              }
            } while ((int)uVar15 != 0);
          }
          iVar7 = *(int *)(param_1 + 0x38);
          iVar20 = iVar3;
        }
      }
LAB_005f05e8:
      iVar6 = iVar6 + 1;
      piVar21 = (int *)((int)(piVar21 + 1) + iVar20);
      if ((iVar7 <= iVar6) || (piVar12 = piVar21, piVar14 < piVar21)) break;
    }
  }
  iVar6 = *(int *)PTR_DAT_0071a414;
  if (iVar6 != 0) {
    (*(code *)**(undefined4 **)(iVar6 + 0x54))
              (iVar6,0,0,PTR_s_C__devel_projects_bink_src_sdk_d_0071a4a4,0x1d6);
  }
  iVar6 = FUN_005f5090();
  if ((*(int *)(param_1 + 0x114) == 0) || (local_b8 == 0)) {
    uVar15 = 0;
  }
  else {
    uVar15 = (ulonglong)*(uint *)(param_1 + 0x20);
    if ((param_2 & 1) == 0) {
      uVar15 = uVar15 | 0x200;
    }
    if ((param_2 & 2) == 0) {
      uVar15 = ((uVar15 << 0x20) >> 0x35) << 0x15 | uVar15 & 0xfffff | 0x20000;
    }
    iVar7 = *(int *)PTR_DAT_0071a414;
    if (iVar7 != 0) {
      (*(code *)**(undefined4 **)(iVar7 + 0x50))
                (iVar7,0,0,0,0,PTR_s_C__devel_projects_bink_src_sdk_d_0071a4a4,0x204,
                 ZEXT48(PTR_DAT_0071a40c) + 0x62c);
    }
    if ((piVar21 <= piVar14) && (piVar2 <= piVar21)) {
      uVar15 = FUN_005fb780(local_b8,*(undefined4 *)(param_1 + 0xdc),*(undefined4 *)(param_1 + 0xf0)
                            ,piVar21,*(undefined4 *)(param_1 + 0x120),piVar14,param_1 + 0x130,uVar15
                           );
    }
    iVar7 = *(int *)PTR_DAT_0071a414;
    if (iVar7 == 0) goto LAB_005f0778;
    (*(code *)**(undefined4 **)(iVar7 + 0x54))
              (iVar7,0,0,PTR_s_C__devel_projects_bink_src_sdk_d_0071a4a4,0x22c);
  }
  iVar7 = *(int *)PTR_DAT_0071a414;
  if (iVar7 != 0) {
    (*(code *)**(undefined4 **)(iVar7 + 0x54))
              (iVar7,0,0,PTR_s_C__devel_projects_bink_src_sdk_d_0071a4a4,0x233);
  }
LAB_005f0778:
  *(int *)(param_1 + 0x494) = (iVar6 - local_bc) + *(int *)(param_1 + 0x494);
  iVar7 = FUN_005f5090();
  *(int *)(param_1 + 0x490) = (iVar7 - iVar6) + *(int *)(param_1 + 0x490);
  if ((ulonglong)*(uint *)(param_1 + 0x128) < (uVar15 & 0xffffffff)) {
    *(int *)(param_1 + 0x128) = (int)uVar15;
  }
  if (uVar4 != 0) {
    uVar8 = FUN_005ee120(local_b0,iVar7);
    return uVar8;
  }
  return 1;
}



//==== 005f0a98  ns=Global  size=0x8
// sig: undefined FUN_005f0a98(void)
// callers(2): 004d4dd0 FUN_004d4dd0; 004d59e8 FUN_004d59e8
// callees(1): 005f0370 FUN_005f0370

void FUN_005f0a98(undefined8 param_1)

{
  FUN_005f0370(param_1,0x303);
  return;
}



//==== 005f0aa0  ns=Global  size=0x494
// sig: undefined FUN_005f0aa0(void)
// callers(0): 
// callees(6): 005eb0f8 FUN_005eb0f8; 005eb2e0 FUN_005eb2e0; 005eda28 FUN_005eda28; 005efad8 FUN_005efad8; 005efeb0 FUN_005efeb0; 005f0370 FUN_005f0370
// strings: 00661c20: 'C:\\devel\\projects\\bink\\src\\sdk\\decode\\binkread.c' | 00661cb8: 'Bink instance sound mutex' | 00661c98: 'Bink instance priority io mutex'

void FUN_005f0aa0(int param_1,ulonglong param_2,uint param_3)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  int iVar10;
  uint uVar11;
  byte in_cr0;
  byte in_cr1;
  byte in_cr2;
  byte in_cr3;
  byte bVar12;
  byte unaff_cr4;
  byte in_cr5;
  byte in_cr6;
  byte in_cr7;
  ulonglong uVar13;
  uint uStack00000008;
  
  uStack00000008 =
       (uint)(in_cr0 & 0xf) << 0x1c | (uint)(in_cr1 & 0xf) << 0x18 | (uint)(in_cr2 & 0xf) << 0x14 |
       (uint)(in_cr3 & 0xf) << 0x10 | (uint)(unaff_cr4 & 0xf) << 0xc | (uint)(in_cr5 & 0xf) << 8 |
       (uint)(in_cr6 & 0xf) << 4 | (uint)(in_cr7 & 0xf);
  if (param_1 == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x100) != 0) {
    return;
  }
  if (*(int *)(param_1 + 0x104) != 0) {
    return;
  }
  if ((int)param_2 == 0) {
    param_2 = 1;
  }
  *(undefined4 *)(param_1 + 0x4bc) = 0;
  *(undefined4 *)(param_1 + 0x1dc) = 1;
  if ((ulonglong)*(uint *)(param_1 + 8) < (param_2 & 0xffffffff)) {
    param_2 = (ulonglong)*(uint *)(param_1 + 8);
  }
  uVar11 = (uint)param_2;
  uVar7 = param_2;
  if (((param_3 & 2) == 0) && (*(int *)(param_1 + 0x124) != 0)) {
    uVar9 = (ulonglong)((*(uint *)(param_1 + 0x18) + *(int *)(param_1 + 0x14)) - 1) /
            (ulonglong)*(uint *)(param_1 + 0x18);
    uVar7 = 1;
    if (uVar9 < (param_2 & 0xffffffff)) {
      uVar7 = param_2 - uVar9;
    }
  }
  uVar2 = *(uint *)(param_1 + 0xc);
  if (uVar2 == uVar11) goto LAB_005f0c70;
  if ((param_3 & 3) == 3) {
    FUN_005eda28(param_1,param_2 & 0xffffffff);
    goto LAB_005f0c70;
  }
  uVar9 = param_2;
  if ((param_3 & 1) == 0) {
    lVar8 = (ulonglong)*(uint *)(param_1 + 0x158) + (param_2 & 0x3fffffff) * 4;
    if ((*(uint *)((int)lVar8 + -4) & 1) == 0) {
      uVar9 = param_2 - 2;
      if ((0 < (int)uVar9) &&
         ((*(uint *)((int)((uVar9 & 0xffffffff) << 2) + *(uint *)(param_1 + 0x158)) & 1) == 0)) {
        lVar8 = lVar8 + -0xc;
        uVar13 = uVar9 & 0xffffffff;
        if ((int)(uVar11 - 3) < 0) {
          uVar13 = 1;
        }
        do {
          puVar4 = (uint *)lVar8;
          uVar9 = uVar9 - 1;
          lVar8 = lVar8 + -4;
          uVar13 = uVar13 - 1;
          if (uVar13 == 0) break;
        } while ((*puVar4 & 1) == 0);
      }
      uVar9 = uVar9 + 1;
    }
  }
  iVar10 = 0;
  uVar13 = uVar9;
  if ((uVar7 & 0xffffffff) < (uVar9 & 0xffffffff)) {
    uVar13 = uVar7;
    if (((param_2 & 0xffffffff) < (ulonglong)uVar2) || ((ulonglong)uVar2 < (uVar7 & 0xffffffff))) {
      iVar10 = *(int *)(param_1 + 0x114);
      *(undefined4 *)(param_1 + 0x114) = 0;
      goto LAB_005f0e44;
    }
LAB_005f0ce8:
    if ((ulonglong)uVar2 < (uVar13 & 0xffffffff)) goto LAB_005f0cf0;
  }
  else {
LAB_005f0e44:
    if ((ulonglong)uVar2 <= (param_2 & 0xffffffff)) goto LAB_005f0ce8;
LAB_005f0cf0:
    FUN_005eda28(param_1,uVar13 & 0xffffffff);
    if ((uint)uVar13 == uVar11) {
      *(undefined4 *)(param_1 + 0x1dc) = 0;
      if (*(int *)(param_1 + 0x110) == 0) {
        return;
      }
      FUN_005efad8(param_1,0);
      FUN_005efad8(param_1,1);
      return;
    }
  }
  if ((*(int *)(param_1 + 0x124) != 0) &&
     ((iVar3 = *(int *)(*(int *)(param_1 + 0x154) + 0x4c), iVar3 < 1 || (iVar3 == 2)))) {
    FUN_005eb0f8(param_1 + 0x3b0,PTR_s_Bink_instance_sound_mutex_0071a438,
                 PTR_s_C__devel_projects_bink_src_sdk_d_0071a424,0x287);
  }
  bVar1 = *(int *)(param_1 + 0x110) == 0;
  bVar12 = bVar1 << 1;
  if (!bVar1) {
    FUN_005efad8(param_1,0);
  }
  if (*(int *)(param_1 + 0xc) != *(int *)(param_1 + 0x4ac)) {
    FUN_005f0370(param_1,0x303);
    *(undefined4 *)(param_1 + 0x10c) = 1;
  }
  bVar1 = iVar10 == 0;
  FUN_005efeb0(param_1);
  puVar6 = PTR_s_Bink_instance_priority_io_mutex_0071a434;
  puVar5 = PTR_s_C__devel_projects_bink_src_sdk_d_0071a424;
  if (*(uint *)(param_1 + 0xc) != uVar11) {
    do {
      if (*(int *)(param_1 + 0x118) != 0) {
        FUN_005eb0f8(param_1 + 0x2b0,puVar6,puVar5,0xc87);
        if (*(int *)(param_1 + 0x118) != 0) {
          (*(code *)**(undefined4 **)(param_1 + 0x1a0))(param_1 + 400);
        }
        FUN_005eb2e0(param_1 + 0x2b0,puVar6,puVar5,0xc8c);
      }
      if ((!bVar1) && (*(int *)(param_1 + 0xc) == (int)uVar9)) {
        bVar1 = true;
        *(undefined4 *)(param_1 + 0x114) = 1;
      }
      FUN_005f0370(param_1,0x303);
      *(undefined4 *)(param_1 + 0x10c) = 1;
      FUN_005efeb0(param_1);
    } while (*(uint *)(param_1 + 0xc) != uVar11);
  }
  *(undefined4 *)(param_1 + 0x4cc) = 0;
  *(undefined4 *)(param_1 + 0x474) = 0;
  if (!bVar1) {
    *(undefined4 *)(param_1 + 0x114) = 1;
  }
  if ((*(int *)(param_1 + 0x124) != 0) &&
     ((iVar10 = *(int *)(*(int *)(param_1 + 0x154) + 0x4c), iVar10 < 1 || (iVar10 == 2)))) {
    FUN_005eb2e0(param_1 + 0x3b0,PTR_s_Bink_instance_sound_mutex_0071a438,
                 PTR_s_C__devel_projects_bink_src_sdk_d_0071a424,0x28d);
  }
  if (!(bool)(bVar12 >> 1 & 1)) {
    FUN_005efad8(param_1,1);
  }
LAB_005f0c70:
  *(undefined4 *)(param_1 + 0x1dc) = 0;
  return;
}



//==== 005f0f38  ns=Global  size=0x260
// sig: undefined FUN_005f0f38(void)
// callers(0): 
// callees(8): 005f516c FUN_005f516c; 005f533c FUN_005f533c; 005f538c FUN_005f538c; 005f5cd0 FUN_005f5cd0; 005fd6d0 FUN_005fd6d0; 005fd700 FUN_005fd700; 005fd778 FUN_005fd778; 005fd790 FUN_005fd790

uint * FUN_005f0f38(uint param_1,uint param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  undefined8 uVar8;
  uint uVar9;
  undefined4 local_c0 [2];
  undefined1 auStack_b8 [136];
  
  FUN_005fd6d0(auStack_b8,8);
  if ((param_1 != 0) && (param_2 < *(uint *)(param_1 + 0x38))) {
    uVar8 = 0;
    iVar3 = (int)(((ulonglong)param_2 & 0x3fffffff) << 2);
    uVar7 = *(uint *)(iVar3 + *(int *)(param_1 + 0x174));
    if (((int)uVar7 < 0) || (uVar8 = 1, (uVar7 & 0x10000000) != 0)) {
      uVar4 = FUN_005f533c(uVar7 & 0xffff,(uVar7 >> 0x1d & 1) + 1,uVar8);
      FUN_005fd700(auStack_b8,local_c0,uVar4);
      iVar2 = *(int *)(param_1 + 0x468);
      iVar5 = FUN_005fd778(auStack_b8);
      *(int *)(param_1 + 0x468) = iVar5 + iVar2 + 0x1c;
      puVar6 = (uint *)FUN_005fd790(auStack_b8,0x1c);
      uVar9 = 0;
      uVar7 = *(uint *)(iVar3 + *(int *)(param_1 + 0x174));
      if (-1 < (int)uVar7) {
        uVar9 = uVar7 >> 0x1c & 1;
      }
      uVar7 = FUN_005f5cd0(local_c0[0],uVar7 & 0xffff,(uVar7 >> 0x1d & 1) + 1,uVar9);
      if (uVar7 != 0) {
        puVar6[4] = param_1;
        *puVar6 = 0;
        puVar6[1] = 0;
        puVar6[2] = 0;
        puVar6[3] = 0;
        puVar6[5] = 0;
        puVar6[6] = 0;
        puVar6[5] = uVar7;
        uVar1 = *(ushort *)(iVar3 + *(int *)(param_1 + 0x174) + 2);
        puVar6[1] = 0x10;
        *puVar6 = (uint)uVar1;
        puVar6[2] = (*(uint *)(iVar3 + *(int *)(param_1 + 0x174)) >> 0x1d & 1) + 1;
        uVar9 = (*(int *)(iVar3 + *(int *)(param_1 + 0x170)) + 3U & 0xfffffffc) + 0x2000;
        puVar6[3] = uVar9;
        uVar7 = FUN_005f538c(uVar7);
        puVar6[6] = param_2;
        puVar6[3] = uVar9 + (uVar7 >> 4);
        return puVar6;
      }
      FUN_005f516c(puVar6);
    }
  }
  return (uint *)0x0;
}



//==== 005f1198  ns=Global  size=0x5ec
// sig: undefined FUN_005f1198(void)
// callers(0): 
// callees(4): 005ea708 FUN_005ea708; 005ea9b0 FUN_005ea9b0; 005fd778 FUN_005fd778; 005fd790 FUN_005fd790

uint FUN_005f1198(uint *param_1,ulonglong param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int *piVar14;
  int iVar15;
  ulonglong uVar16;
  int local_1f0 [8];
  uint auStack_1d0 [32];
  uint auStack_150 [32];
  uint local_d0 [32];
  
  if (((param_1 == (uint *)0x0) || ((param_2 & 0x4000000) != 0)) ||
     (((param_2 & 0x80000) == 0 && (((param_1[8] & 0x80000) == 0 && (param_1[0x12f] == 2)))))) {
    return 0;
  }
  if (param_1[0x35] == 0) {
    uVar9 = param_1[0x3d];
    uVar2 = param_1[0x11a];
    param_1[0xd] = 100;
    param_1[0x4a] = 100;
    iVar11 = FUN_005fd778(0);
    param_1[0x11a] = iVar11 + uVar9 + 0x10 + uVar2;
    uVar9 = FUN_005fd790(0,uVar9 + 0x10);
    param_1[0x35] = uVar9;
    param_1[0x36] = uVar9;
    *(undefined1 *)(param_1[0x3d] + uVar9) = 0;
  }
  if (param_1[0x38] == 0) {
    param_1[0xf] = 1;
    param_1[0x11] = 0;
    param_1[0x12] = *param_1;
    param_1[0x13] = param_1[1];
    param_1[0x10] = 0;
    return 1;
  }
  uVar9 = param_1[0xf];
  if (uVar9 == 0xffffffff) {
    puVar10 = param_1 + 0x10;
    local_d0[2] = *param_1 + 0xf & 0xfffffff0;
    local_d0[3] = param_1[1] + 0xf & 0xfffffff0;
    local_d0[0] = 0;
    local_d0[1] = 0;
    uVar9 = FUN_005ea708(puVar10,param_1[0x38],param_1[0x3c],local_d0);
    param_1[0xf] = uVar9;
    if ((param_2 & 0x8000000) == 0) {
      if (uVar9 == 0) {
        uVar9 = param_1[0xf];
      }
      else {
        local_d0[0] = param_1[0x10];
        local_d0[1] = param_1[0x11];
        local_d0[2] = param_1[0x12];
        local_d0[3] = param_1[0x13];
        local_1f0[0] = FUN_005ea9b0(auStack_1d0,auStack_150,local_d0,param_1[0x38],param_1[0x3c]);
        while (uVar9 = param_1[0xf], 0 < (int)uVar9) {
          uVar16 = (ulonglong)uVar9;
          iVar12 = 0;
          iVar15 = -1;
          iVar11 = 0;
          piVar14 = local_1f0;
          do {
            if (iVar11 < *piVar14) {
              iVar11 = *piVar14;
              iVar15 = iVar12;
            }
            iVar12 = iVar12 + 1;
            uVar16 = uVar16 - 1;
            piVar14 = piVar14 + 1;
          } while (uVar16 != 0);
          if (iVar15 == -1) {
            bVar1 = 0 < (int)uVar9;
            goto LAB_005f138c;
          }
          uVar2 = auStack_150[iVar15 * 4 + 3];
          uVar3 = auStack_1d0[iVar15 * 4 + 1];
          uVar4 = auStack_1d0[iVar15 * 4 + 2];
          uVar8 = auStack_1d0[iVar15 * 4 + 3];
          uVar7 = auStack_150[iVar15 * 4];
          uVar5 = auStack_150[iVar15 * 4 + 1];
          uVar6 = auStack_150[iVar15 * 4 + 2];
          local_d0[iVar15 * 4] = auStack_1d0[iVar15 * 4];
          local_d0[iVar15 * 4 + 1] = uVar3;
          local_d0[iVar15 * 4 + 2] = uVar4;
          local_d0[iVar15 * 4 + 3] = uVar8;
          local_d0[uVar9 * 4 + 3] = uVar2;
          local_d0[uVar9 * 4] = uVar7;
          local_d0[uVar9 * 4 + 1] = uVar5;
          local_d0[uVar9 * 4 + 2] = uVar6;
          param_1[0xf] = uVar9 + 1;
          if (uVar9 + 1 == 8) {
            bVar1 = true;
            uVar9 = 8;
            goto LAB_005f138c;
          }
          iVar11 = FUN_005ea9b0(auStack_1d0 + iVar15 * 4,auStack_150 + iVar15 * 4,
                                local_d0 + iVar15 * 4,param_1[0x38],param_1[0x3c]);
          uVar9 = param_1[0x3c];
          iVar12 = param_1[0xf] - 1;
          local_1f0[iVar15] = iVar11;
          iVar11 = FUN_005ea9b0(auStack_1d0 + iVar12 * 4,auStack_150 + iVar12 * 4,
                                local_d0 + iVar12 * 4,param_1[0x38],uVar9);
          local_1f0[iVar12] = iVar11;
        }
      }
    }
    else {
      uVar9 = param_1[0xf];
      bVar1 = 0 < (int)uVar9;
      if (bVar1) {
LAB_005f138c:
        uVar2 = param_1[0x12a];
        uVar3 = *param_1;
        iVar11 = 0;
        uVar4 = param_1[1];
        while( true ) {
          if (bVar1) {
            uVar16 = (ulonglong)uVar9;
            uVar8 = 0x7fff0000;
            iVar13 = 0;
            iVar15 = 0;
            iVar12 = 0;
            do {
              uVar7 = *(int *)((int)local_d0 + iVar12 + 4) * 0x10000 +
                      *(int *)((int)local_d0 + iVar12);
              if (uVar7 < uVar8) {
                iVar15 = iVar13;
                uVar8 = uVar7;
              }
              iVar13 = iVar13 + 1;
              uVar16 = uVar16 - 1;
              iVar12 = iVar12 + 0x10;
            } while (uVar16 != 0);
          }
          else {
            iVar15 = 0;
          }
          uVar8 = uVar2 & 0x70000000;
          if (uVar8 == 0x30000000) {
            iVar12 = iVar15 * 0x10;
            uVar8 = local_d0[iVar15 * 4 + 2];
            local_d0[iVar15 * 4] = local_d0[iVar15 * 4] << 1;
            local_d0[iVar15 * 4 + 2] = uVar8 << 1;
          }
          else if (uVar8 < 0x30000001) {
            if ((uVar8 == 0x10000000) || (iVar12 = iVar15 << 4, uVar8 == 0x20000000)) {
              iVar12 = iVar15 * 0x10;
              local_d0[iVar15 * 4 + 1] = local_d0[iVar15 * 4 + 1] << 1;
              local_d0[iVar15 * 4 + 3] = local_d0[iVar15 * 4 + 3] << 1;
            }
          }
          else if ((uVar8 == 0x40000000) || (iVar12 = iVar15 << 4, uVar8 == 0x50000000)) {
            iVar12 = iVar15 * 0x10;
            uVar8 = local_d0[iVar15 * 4 + 2];
            uVar7 = local_d0[iVar15 * 4 + 1];
            uVar5 = local_d0[iVar15 * 4 + 3];
            local_d0[iVar15 * 4] = local_d0[iVar15 * 4] << 1;
            local_d0[iVar15 * 4 + 3] = uVar5 << 1;
            local_d0[iVar15 * 4 + 2] = uVar8 << 1;
            local_d0[iVar15 * 4 + 1] = uVar7 << 1;
          }
          iVar15 = *(int *)((int)local_d0 + iVar12 + 8);
          uVar8 = iVar15 + *(int *)((int)local_d0 + iVar12);
          if (uVar3 < uVar8) {
            *(uint *)((int)local_d0 + iVar12 + 8) = iVar15 - (uVar8 - uVar3);
          }
          iVar15 = *(int *)((int)local_d0 + iVar12 + 0xc);
          uVar8 = iVar15 + *(int *)((int)local_d0 + iVar12 + 4);
          if (uVar4 < uVar8) {
            *(uint *)((int)local_d0 + iVar12 + 0xc) = iVar15 - (uVar8 - uVar4);
          }
          iVar11 = iVar11 + 1;
          *puVar10 = *(uint *)((int)local_d0 + iVar12);
          puVar10[1] = *(uint *)((int)local_d0 + iVar12 + 4);
          puVar10[2] = *(uint *)((int)local_d0 + iVar12 + 8);
          puVar10[3] = *(uint *)((int)local_d0 + iVar12 + 0xc);
          *(undefined4 *)((int)local_d0 + iVar12 + 4) = 0x7fffffff;
          *(undefined4 *)((int)local_d0 + iVar12) = 0;
          puVar10 = puVar10 + 4;
          if ((int)uVar9 <= iVar11) break;
          bVar1 = 0 < (int)uVar9;
        }
      }
    }
  }
  return uVar9;
}



//==== 005f1788  ns=Global  size=0x21f8
// sig: undefined FUN_005f1788(void)
// callers(1): 005f3984 FUN_005f3984
// callees(25): 005c5ad0 libc::memcpy; 005c6094 FUN_005c6094; 005d0140 libc::memset; 005eb0f8 FUN_005eb0f8; 005eb2e0 FUN_005eb2e0; 005ec3c8 FUN_005ec3c8; 005eda28 FUN_005eda28; 005f5090 FUN_005f5090; 005f516c FUN_005f516c; 005f533c FUN_005f533c; 005f5384 FUN_005f5384; 005f5cd0 FUN_005f5cd0; 005f8758 FUN_005f8758; 005fbef8 FUN_005fbef8; 005fbfd4 FUN_005fbfd4; 005fc098 FUN_005fc098; 005fc190 FUN_005fc190; 005fc490 FUN_005fc490; 005fc508 FUN_005fc508; 005fc620 FUN_005fc620; 005fccc8 FUN_005fccc8; 005fd6d0 FUN_005fd6d0; 005fd700 FUN_005fd700; 005fd778 FUN_005fd778; 005fd790 FUN_005fd790
// strings: 00661cd8: 'Bink global IO mutex' | 00661c20: 'C:\\devel\\projects\\bink\\src\\sdk\\decode\\binkread.c' | 00661eb8: 'Not a Bink file.' | 00661ed0: "The file doesn't contain any compressed frames yet." | 005f27dc: 'Vi80V`H,|\t' (raw) | 00661f08: 'The file has a corrupt header.' | 00661fa0: 'Error opening file.' | 00661f60: 'Error reading Bink header.' | 00661f28: 'Out of memory.' | 00661f38: 'This file has bad frame size data.' | 00661c98: 'Bink instance priority io mutex' | 00661cf0: 'Bink global sound mutex' | 00661cb8: 'Bink instance sound mutex' | 00661d08: 'Bink list mutex' | 00661d30: 'Bink Snd' | 00661c08: 'Bink instance io mutex' | 00661e08: 'Bink IO'

/* WARNING: Type propagation algorithm not settling */

void * FUN_005f1788(int param_1,ulonglong *param_2,ulonglong param_3)

{
  bool bVar1;
  char cVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  ulonglong *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  longlong lVar15;
  ulonglong uVar16;
  undefined4 uVar17;
  int iVar18;
  int iVar19;
  void *__dest;
  void *pvVar20;
  undefined4 uVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  ulonglong uVar25;
  uint uVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  uint uVar29;
  char *pcVar31;
  longlong lVar30;
  char *pcVar32;
  bool bVar33;
  uint uVar35;
  longlong lVar34;
  undefined4 *puVar36;
  char *pcVar37;
  char *pcVar38;
  ulonglong unaff_r14;
  ulonglong unaff_r15;
  ulonglong unaff_r16;
  ulonglong uVar39;
  ulonglong unaff_r17;
  ulonglong unaff_r18;
  ulonglong unaff_r19;
  uint uVar40;
  ulonglong unaff_r20;
  uint uVar41;
  ulonglong unaff_r21;
  ulonglong uVar42;
  ulonglong unaff_r22;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong uVar43;
  ulonglong unaff_r27;
  int *piVar44;
  ulonglong unaff_r28;
  int *piVar45;
  int iVar46;
  ulonglong unaff_r29;
  uint uVar47;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  byte in_cr0;
  byte in_cr1;
  byte in_cr2;
  byte in_cr3;
  byte bVar48;
  byte unaff_cr4;
  byte in_cr5;
  byte in_cr6;
  byte in_cr7;
  ulonglong in_LR;
  longlong lVar49;
  ulonglong uVar50;
  
  uVar43 = ZEXT48(&stack0x00000000);
  uVar16 = ZEXT48(&TOC_BASE);
  lVar49 = uVar43 - 0x890;
  puVar12 = (ulonglong *)lVar49;
  *puVar12 = uVar43;
  puVar12[0x107] = unaff_r21;
  uVar42 = uVar43 - 0x6f8;
  puVar12[0x10b] = unaff_r25;
  puVar12[0x10f] = unaff_r29;
  puVar12[0x110] = unaff_r30;
  puVar12[0x102] = unaff_r16;
  puVar12[0x105] = unaff_r19;
  puVar12[0x108] = unaff_r22;
  puVar12[0x100] = unaff_r14;
  puVar12[0x101] = unaff_r15;
  puVar12[0x103] = unaff_r17;
  puVar12[0x104] = unaff_r18;
  puVar12[0x106] = unaff_r20;
  puVar12[0x109] = unaff_r23;
  puVar12[0x10a] = unaff_r24;
  puVar12[0x10c] = unaff_r26;
  puVar12[0x10d] = unaff_r27;
  puVar12[0x10e] = unaff_r28;
  puVar12[0x111] = unaff_r31;
  uVar40 = 1;
  uVar39 = uVar43 - 0x820;
  *(uint *)(puVar12 + 0x113) =
       (uint)(in_cr0 & 0xf) << 0x1c | (uint)(in_cr1 & 0xf) << 0x18 | (uint)(in_cr2 & 0xf) << 0x14 |
       (uint)(in_cr3 & 0xf) << 0x10 | (uint)(unaff_cr4 & 0xf) << 0xc | (uint)(in_cr5 & 0xf) << 8 |
       (uint)(in_cr6 & 0xf) << 4 | (uint)(in_cr7 & 0xf);
  puVar12[0x114] = in_LR;
  *(undefined4 *)(puVar12 + 0xe) = 0;
  FUN_005fd6d0(uVar42,0x20);
  if ((param_3 & 0x4000) != 0) {
    uVar40 = *(uint *)(param_2 + 3);
    uVar39 = (ulonglong)*(uint *)((int)param_2 + 0x1c);
  }
  uVar41 = (uint)param_3 & 0x4000000;
  libc::memset(uVar43 - 0x5b8,0,0x4f0);
  uVar17 = FUN_005f5090();
  pcVar32 = PTR_DAT_0071a40c;
  bVar1 = (param_3 & 0x4000000) == 0;
  *(undefined4 *)((int)puVar12 + 0x774) = uVar17;
  *pcVar32 = 0;
  if (bVar1) {
    if (((param_3 & 0x2000000) == 0) ||
       (puVar36 = *(undefined4 **)(param_2 + 4), *(undefined4 **)(param_2 + 4) == (undefined4 *)0x0)
       ) {
      puVar36 = (undefined4 *)PTR_PTR_0071a4d0;
    }
    uVar16 = uVar43 - 0x428 & 0xffffffff;
    libc::memset(uVar16,0,0x120);
    puVar14 = PTR_PTR_0071a4dc;
    puVar13 = PTR_PTR_0071a4d8;
    *(undefined **)((int)puVar12 + 0x49c) = PTR_PTR_0071a4d4;
    *(undefined **)((int)puVar12 + 0x4a4) = puVar13;
    *(undefined **)(puVar12 + 0x94) = puVar14;
    FUN_005ec3c8();
    if ((param_3 & 0x20) != 0) {
      puVar12[0x73] = *param_2;
    }
    puVar14 = PTR_s_Bink_global_IO_mutex_0071a43c;
    puVar13 = PTR_s_C__devel_projects_bink_src_sdk_d_0071a424;
    FUN_005eb0f8(pcVar32 + 0x3f4,PTR_s_Bink_global_IO_mutex_0071a43c,
                 PTR_s_C__devel_projects_bink_src_sdk_d_0071a424,0x6e7);
    pcVar3 = (code *)*puVar36;
    puVar12[5] = ZEXT48(&TOC_BASE);
    iVar18 = (*pcVar3)(uVar16,param_1,param_3 & 0xffffffff);
    uVar16 = puVar12[5];
    if (iVar18 == 0) {
      FUN_005eb2e0(pcVar32 + 0x3f4,puVar14,puVar13,0x6f5);
      if (*pcVar32 != '\0') {
        return (void *)0x0;
      }
      pcVar37 = *(char **)((int)uVar16 + -0x7e5c);
      lVar49 = 0xfe;
      *pcVar32 = 0x45;
      do {
        cVar2 = *pcVar37;
        pcVar37 = pcVar37 + 1;
        pcVar32 = pcVar32 + 1;
        if (cVar2 == '\0') {
          return (void *)0x0;
        }
        *pcVar32 = *pcVar37;
        lVar49 = lVar49 + -1;
      } while (lVar49 != 0);
      *pcVar32 = '\0';
      return (void *)0x0;
    }
    FUN_005eb2e0(pcVar32 + 0x3f4,puVar14,puVar13,0x6fe);
    pcVar3 = (code *)**(undefined4 **)(puVar12 + 0x8d);
    puVar12[5] = uVar16;
    (*pcVar3)(uVar43 - 0x428,0,uVar43 - 0x81c,0x2c);
    uVar16 = puVar12[5];
  }
  iVar18 = *(int *)((int)puVar12 + 0x74);
  iVar19 = (int)uVar16;
  pcVar37 = pcVar32;
  if (((((iVar18 == 0x664b4942) || (iVar18 == 0x674b4942)) || (iVar18 == 0x684b4942)) ||
      (iVar18 == 0x694b4942)) && (*(int *)(puVar12 + 0x95) == 0)) {
    uVar4 = *(uint *)((int)puVar12 + 0x7c);
    if (uVar4 == 0) {
      pcVar31 = *(char **)(iVar19 + -0x7e70);
      lVar49 = 0xfe;
      *pcVar32 = 0x54;
      do {
        cVar2 = *pcVar31;
        pcVar31 = pcVar31 + 1;
        pcVar37 = pcVar37 + 1;
        if (cVar2 == '\0') goto joined_r0x005f19e4;
        *pcVar37 = *pcVar31;
        lVar49 = lVar49 + -1;
      } while (lVar49 != 0);
    }
    else {
      uVar26 = *(uint *)((int)puVar12 + 0x84);
      if ((uVar4 <= uVar26) && (uVar26 < 0xf4241)) {
        uVar47 = *(uint *)(puVar12 + 0xf);
        if ((((*(uint *)(puVar12 + 0x10) <= uVar47) &&
             ((uVar35 = *(uint *)((int)puVar12 + 0x9c), uVar35 < 0x101 &&
              (uVar26 * (uVar35 * 4 + 4) <= uVar47)))) &&
            (uVar29 = *(uint *)(puVar12 + 0x11), uVar29 < 0x8000)) &&
           (uVar5 = *(uint *)((int)puVar12 + 0x8c), uVar5 < 0x8000)) {
          uVar6 = *(uint *)(puVar12 + 0x12);
          if ((uVar6 != 0) && (uVar7 = *(uint *)((int)puVar12 + 0x94), uVar7 != 0)) {
            uVar8 = *(uint *)(puVar12 + 0x13);
            uVar28 = ((param_3 << 0x20) >> 0x3f) << 0x1f | param_3 & 0xfffffff |
                     (ulonglong)uVar8 & 0x20000;
            *(uint *)(puVar12 + 0x79) = (uVar29 + 0xf >> 4) + 0xf & 0xfffffff0;
            *(uint *)((int)puVar12 + 0x444) = uVar5;
            *(uint *)(puVar12 + 0x5b) = uVar29;
            *(uint *)((int)puVar12 + 0x2dc) = uVar5;
            *(uint *)(puVar12 + 0x88) = uVar29;
            *(int *)((int)puVar12 + 0x7b4) = iVar18;
            *(uint *)((int)puVar12 + 0x2fc) = uVar8;
            *(int *)(puVar12 + 0x5f) = (int)uVar28;
            if ((uVar8 & 0x100000) == 0) {
              uVar28 = (param_3 & 0xfffff | (ulonglong)uVar8 & 0x20000) << 0xb |
                       (uVar28 << 0x20) >> 0x35;
              *(uint *)(puVar12 + 0x5f) = (uint)(uVar28 << 0x15) | (uint)uVar28 >> 0xb;
            }
            iVar19 = (int)(param_3 & 0x70000000);
            if (iVar19 == 0x70000000) goto LAB_005f1d5c;
            if (iVar19 == 0) {
              uVar28 = (ulonglong)*(uint *)(puVar12 + 0x5f) | (ulonglong)uVar8 & 0x70000000;
              *(int *)(puVar12 + 0x5f) = (int)uVar28;
            }
            else {
              uVar28 = (ulonglong)*(uint *)(puVar12 + 0x5f) | param_3 & 0x70000000;
              *(int *)(puVar12 + 0x5f) = (int)uVar28;
            }
            iVar19 = (int)(uVar28 & 0x70000000);
            if (iVar19 == 0x30000000) {
              iVar19 = *(int *)((int)puVar12 + 0x2dc);
              *(int *)(puVar12 + 0x5b) = *(int *)(puVar12 + 0x5b) << 1;
            }
            else if ((uVar28 & 0x70000000) < 0x30000001) {
              if ((iVar19 == 0x10000000) || (iVar19 == 0x20000000)) {
                iVar19 = (int)(((ulonglong)*(uint *)((int)puVar12 + 0x2dc) & 0x7fffffff) << 1);
                *(int *)((int)puVar12 + 0x2dc) = iVar19;
              }
              else {
LAB_005f1d5c:
                iVar19 = *(int *)((int)puVar12 + 0x2dc);
              }
            }
            else {
              if ((iVar19 != 0x40000000) && (iVar19 != 0x50000000)) goto LAB_005f1d5c;
              iVar19 = (int)(((ulonglong)*(uint *)((int)puVar12 + 0x2dc) & 0x7fffffff) << 1);
              *(int *)((int)puVar12 + 0x2dc) = iVar19;
              *(int *)(puVar12 + 0x5b) = *(int *)(puVar12 + 0x5b) << 1;
            }
            if ((iVar18 == 0x664b4942) || (iVar18 == 0x674b4942)) {
              *(uint *)(puVar12 + 0x5f) = *(uint *)(puVar12 + 0x5f) | 0x18000;
            }
            else if (iVar18 == 0x684b4942) {
              *(uint *)(puVar12 + 0x5f) = *(uint *)(puVar12 + 0x5f) | 0x8000;
            }
            *(uint *)(puVar12 + 0x5c) = uVar4;
            *(uint *)((int)puVar12 + 0x3d4) = uVar26;
            if (((param_3 & 0x1000) == 0) || (*(int *)(param_2 + 1) == -1)) {
              *(uint *)((int)puVar12 + 0x2ec) = uVar6;
              *(uint *)(puVar12 + 0x5e) = uVar7;
            }
            else {
              uVar17 = *(undefined4 *)((int)param_2 + 0xc);
              *(int *)((int)puVar12 + 0x2ec) = *(int *)(param_2 + 1);
              *(undefined4 *)(puVar12 + 0x5e) = uVar17;
            }
            *(uint *)(puVar12 + 0x60) = uVar47;
            *(uint *)(puVar12 + 0x62) = uVar35;
            *(uint *)(puVar12 + 0x7a) = *(uint *)(puVar12 + 0x10);
            *(uint *)((int)puVar12 + 0x3cc) = *(int *)(puVar12 + 0x79) * (iVar19 + 0xfU >> 4);
            *(uint *)(puVar12 + 0xef) = uVar6;
            *(uint *)((int)puVar12 + 0x77c) = uVar7;
            iVar18 = (int)(((ulonglong)(uVar7 >> 1) + (ulonglong)uVar6 & 0xffffffff) /
                          (ulonglong)uVar7);
            *(int *)(puVar12 + 0xe5) = iVar18;
            if (iVar18 == 0) {
              *(undefined4 *)(puVar12 + 0xe5) = 1;
            }
            uVar28 = uVar42 & 0xffffffff;
            bVar48 = (uVar40 == 0) << 1;
            FUN_005fd700(uVar28,uVar43 - 0x184,
                         ((ulonglong)*(uint *)(puVar12 + 0xe5) & 0x3fffffff) << 2);
            FUN_005fd700(uVar28,uVar43 - 0x180,
                         ((ulonglong)*(uint *)(puVar12 + 0xe5) & 0x3fffffff) << 2);
            FUN_005fd700(uVar28,uVar43 - 0x17c,
                         ((ulonglong)*(uint *)(puVar12 + 0xe5) & 0x3fffffff) << 2);
            FUN_005fd700(uVar28,uVar43 - 0x178,
                         ((ulonglong)*(uint *)(puVar12 + 0xe5) & 0x3fffffff) << 2);
            FUN_005fd700(uVar28,uVar43 - 0x174,
                         ((ulonglong)*(uint *)(puVar12 + 0xe5) & 0x3fffffff) << 2);
            FUN_005fd700(uVar28,uVar43 - 0x170,
                         ((ulonglong)*(uint *)(puVar12 + 0xe5) & 0x3fffffff) << 2);
            FUN_005fd700(uVar28,uVar43 - 0x16c,
                         ((ulonglong)*(uint *)(puVar12 + 0xe5) & 0x3fffffff) << 2);
            if ((bool)(bVar48 >> 1 & 1)) {
              iVar18 = 0x180;
            }
            else {
              iVar18 = uVar40 * 0x200 + (uVar40 & 0x1ffffff) * -0x80;
            }
            uVar28 = uVar42 & 0xffffffff;
            FUN_005fd700(uVar28,uVar43 - 0x464,iVar18);
            FUN_005fd700(uVar28,uVar43 - 0x4cc,((ulonglong)uVar40 & 0x3fffffff) << 2);
            FUN_005f8758(uVar43 - 0x488,*(int *)(puVar12 + 0x5b) + 0xfU & 0xfffffff0);
            if (bVar1) {
              FUN_005fd700(uVar28,uVar43 - 0x448,
                           (*(int *)(puVar12 + 0x62) * 3 + *(int *)((int)puVar12 + 0x3d4)) * 4 +
                           0x104);
            }
            iVar18 = *(int *)(puVar12 + 0xe8);
            iVar19 = FUN_005fd778(uVar28);
            *(int *)(puVar12 + 0xe8) = iVar19 + iVar18 + 0x4f0;
            __dest = (void *)FUN_005fd790(uVar28,0x4f0);
            if (__dest != (void *)0x0) {
              libc::memcpy(__dest,(void *)(uVar43 - 0x5b8),0x4f0);
              *(void **)((int)__dest + 0x1ac) = __dest;
              **(undefined4 **)((int)__dest + 0x438) = 0;
              **(undefined4 **)((int)__dest + 0x43c) = 0;
              **(undefined4 **)((int)__dest + 0x440) = 0;
              **(undefined4 **)((int)__dest + 0x444) = 0;
              **(undefined4 **)((int)__dest + 0x448) = 0;
              **(undefined4 **)((int)__dest + 0x44c) = 0;
              pcVar31 = pcVar32;
              if (bVar1) {
                iVar18 = *(int *)(puVar12 + 0x62);
                iVar19 = *(int *)((int)puVar12 + 0x3d4);
                iVar23 = (*(int *)((int)__dest + 0x170) + 0x100U & 0xffffff80) - 0x54;
                *(int *)((int)__dest + 0x170) = iVar23;
                pcVar3 = (code *)**(undefined4 **)((int)__dest + 400);
                puVar12[5] = uVar16;
                (*pcVar3)((int)__dest + 400,0xffffffffffffffff,iVar23,(iVar18 * 3 + iVar19) * 4 + 4)
                ;
                uVar16 = puVar12[5];
                iVar19 = *(int *)(puVar12 + 0x62) * 4;
                iVar23 = *(int *)((int)__dest + 0x170) + iVar19;
                iVar18 = iVar23 + iVar19;
                *(int *)((int)__dest + 0x174) = iVar23;
                *(int *)((int)__dest + 0x178) = iVar18;
                *(int *)((int)__dest + 0x158) = iVar18 + iVar19;
                if (*(int *)((int)__dest + 0x1d0) == 0) goto LAB_005f2004;
                pcVar38 = *(char **)((int)uVar16 + -0x7e60);
                lVar49 = 0xfe;
                *pcVar32 = 0x45;
                do {
                  cVar2 = *pcVar38;
                  pcVar38 = pcVar38 + 1;
                  pcVar31 = pcVar31 + 1;
                  if (cVar2 == '\0') goto LAB_005f277c;
                  *pcVar31 = *pcVar38;
                  lVar49 = lVar49 + -1;
                } while (lVar49 != 0);
LAB_005f2774:
                *pcVar31 = '\0';
              }
              else {
                uVar4 = *(uint *)((int)__dest + 0x38);
                *(int *)((int)__dest + 0x170) = param_1 + 0x2c;
                *(uint *)((int)__dest + 0x174) = param_1 + (uVar4 & 0x3fffffff) * 4 + 0x2c;
                *(uint *)((int)__dest + 0x178) = param_1 + uVar4 * 8 + 0x2c;
                *(uint *)((int)__dest + 0x158) =
                     param_1 + uVar4 * 0x10 + (uVar4 & 0x3fffffff) * -4 + 0x2c;
LAB_005f2004:
                uVar4 = *(uint *)((int)__dest + 8);
                uVar28 = (ulonglong)uVar4;
                uVar26 = *(uint *)((int)__dest + 0x450);
                puVar9 = *(uint **)((int)__dest + 0x158);
                uVar27 = ZEXT48(puVar9);
                uVar25 = uVar28 - uVar26;
                if ((int)uVar25 < 0) {
                  uVar25 = 0;
LAB_005f22b4:
                  uVar47 = 1;
                  iVar18 = 0;
LAB_005f20d0:
                  uVar29 = (uint)((((ulonglong)puVar9[uVar4] - (ulonglong)*puVar9) *
                                  (ulonglong)uVar26) / (ulonglong)uVar4);
LAB_005f20f8:
                  if ((int)uVar25 < (int)uVar4) {
                    lVar34 = uVar27 + (uVar25 & 0x3fffffff) * 4;
                    uVar25 = uVar28 - uVar25 & 0xffffffff;
                    lVar30 = lVar34 + 4;
                    uVar4 = *(uint *)lVar34;
                    uVar47 = uVar47 & uVar4;
                    if (uVar4 < *(uint *)lVar30) {
                      do {
                        lVar34 = lVar30 + 4;
                        puVar9 = (uint *)lVar30;
                        uVar25 = uVar25 - 1;
                        if (uVar25 == 0) goto LAB_005f2164;
                        uVar47 = *puVar9 & uVar47;
                        lVar30 = lVar34;
                      } while (*puVar9 < *(uint *)lVar34);
                    }
                    goto LAB_005f22c4;
                  }
LAB_005f2164:
                  *(uint *)((int)__dest + 0x4d4) = uVar47;
                  *(int *)((int)__dest + 0xcc) = iVar18;
                }
                else {
                  if ((int)uVar25 < 1) goto LAB_005f22b4;
                  lVar30 = uVar27 + ((ulonglong)uVar26 & 0x3fffffff) * 4;
                  uVar35 = *puVar9;
                  if (uVar35 < *(uint *)(uVar27 + 4)) {
                    uVar50 = uVar25 & 0xffffffff;
                    uVar47 = uVar35 & 1;
                    uVar35 = *(int *)lVar30 - uVar35;
                    uVar29 = 0;
                    iVar18 = 0;
                    iVar19 = 0;
                    lVar34 = uVar27 + 4;
                    do {
                      lVar30 = lVar30 + 4;
                      lVar15 = lVar34 + 4;
                      if (uVar29 < uVar35) {
                        iVar18 = iVar19;
                        uVar29 = uVar35;
                      }
                      iVar19 = iVar19 + 1;
                      uVar50 = uVar50 - 1;
                      if (uVar50 == 0) {
                        if (uVar29 != 0) goto LAB_005f20f8;
                        goto LAB_005f20d0;
                      }
                      uVar5 = *(uint *)lVar34;
                      uVar47 = uVar5 & uVar47;
                      uVar35 = *(int *)lVar30 - uVar5;
                      lVar34 = lVar15;
                    } while (uVar5 < *(uint *)lVar15);
                  }
LAB_005f22c4:
                  uVar29 = 0xffffffff;
                }
                *(uint *)((int)__dest + 200) = uVar29;
                if (uVar29 == 0xffffffff) {
                  pcVar38 = *(char **)((int)uVar16 + -0x7e64);
                  lVar49 = 0xfe;
                  *pcVar32 = 0x54;
                  do {
                    cVar2 = *pcVar38;
                    pcVar38 = pcVar38 + 1;
                    pcVar31 = pcVar31 + 1;
                    if (cVar2 == '\0') goto LAB_005f277c;
                    *pcVar31 = *pcVar38;
                    lVar49 = lVar49 + -1;
                  } while (lVar49 != 0);
                  goto LAB_005f2774;
                }
                uVar4 = (uint)param_3 & 0x400;
                if ((param_3 & 0x400) != 0) {
LAB_005f2548:
                  if ((((param_3 & 0x1000000) == 0) ||
                      (iVar18 = *(int *)(param_2 + 2), iVar18 == -1)) || (iVar18 == 0)) {
                    iVar18 = *(int *)((int)__dest + 200);
                  }
                  *(int *)((int)__dest + 0x458) = iVar18;
                  if ((((param_3 & 0x400000) == 0) ||
                      (iVar18 = *(int *)((int)param_2 + 0x14), iVar18 == -1)) || (iVar18 == 0)) {
                    iVar18 = 0;
                  }
                  *(int *)((int)__dest + 0x180) = iVar18;
                  if (bVar1) {
                    iVar19 = (int)__dest + 400;
                    uVar17 = *(undefined4 *)((int)__dest + 0x458);
                    pcVar3 = (code *)**(undefined4 **)((int)__dest + 0x198);
                    puVar12[5] = uVar16;
                    uVar28 = (*pcVar3)(iVar19,uVar17);
                    uVar16 = puVar12[5];
                    uVar41 = *(uint *)((int)__dest + 0x28);
                    *(int *)((int)__dest + 0x458) = (int)uVar28;
                    if ((uVar28 + 0x20000 & 0xffffffff) < (ulonglong)uVar41) {
                      if ((((ulonglong)uVar41 / 10) * 9 & 0xffffffff) <= (uVar28 & 0xffffffff)) {
                        *(uint *)((int)__dest + 0x458) = uVar41 + 0x10;
                      }
                    }
                    else {
                      param_3 = param_3 | 0x2000;
                      *(uint *)((int)__dest + 0x20) = *(uint *)((int)__dest + 0x20) | 0x8002000;
                    }
                    if ((param_3 & 0x2000) == 0) {
                      uVar28 = uVar42 & 0xffffffff;
                      FUN_005fd700(uVar28,(int)__dest + 0x4e0,*(int *)((int)__dest + 0xf8) + 0x500);
                      iVar23 = *(int *)((int)__dest + 0x458);
                      iVar22 = *(int *)((int)__dest + 0x468);
                      iVar24 = FUN_005fd778(uVar28);
                      *(int *)((int)__dest + 0x468) = iVar24 + iVar23 + iVar22;
                      iVar23 = FUN_005fd790(uVar28,iVar23);
                      *(int *)((int)__dest + 0x430) = iVar23;
                      if (iVar23 == 0) goto LAB_005f3700;
                      iVar22 = *(int *)((int)__dest + 0x28);
                      uVar17 = *(undefined4 *)((int)__dest + 0x458);
                      pcVar3 = (code *)**(undefined4 **)((int)__dest + 0x19c);
                      puVar12[5] = uVar16;
                      uVar28 = (*pcVar3)(iVar19,iVar23,uVar17,iVar22 + 8,iVar18);
                      uVar16 = puVar12[5];
                    }
                    else {
                      iVar23 = *(int *)((int)__dest + 0x468);
                      iVar24 = *(int *)((int)__dest + 0x28) -
                               (**(uint **)((int)__dest + 0x158) & 0xfffffffe);
                      iVar46 = iVar24 + 0x408;
                      iVar22 = FUN_005fd778(uVar42 & 0xffffffff);
                      *(int *)((int)__dest + 0x468) = iVar22 + iVar46 + iVar23;
                      iVar23 = FUN_005fd790(uVar42 & 0xffffffff,iVar46);
                      *(int *)((int)__dest + 0x17c) = iVar23;
                      if (iVar23 == 0) {
LAB_005f3700:
                        uVar41 = (uint)param_3 & 0x4000000;
                        if (*(int *)((int)__dest + 0xd0) != 0) {
                          FUN_005f516c(*(int *)((int)__dest + 0xd0));
                        }
                        goto LAB_005f277c;
                      }
                      iVar23 = *(int *)((int)__dest + 0x28);
                      *(uint *)((int)__dest + 0x20) = *(uint *)((int)__dest + 0x20) | 0x8000000;
                      pcVar3 = (code *)**(undefined4 **)((int)__dest + 0x19c);
                      puVar12[5] = uVar16;
                      (*pcVar3)(iVar19,0,0,iVar23 + 8,iVar18);
                      uVar17 = *(undefined4 *)((int)__dest + 0x17c);
                      uVar41 = **(uint **)((int)__dest + 0x158);
                      pcVar3 = (code *)**(undefined4 **)((int)__dest + 0x194);
                      puVar12[5] = puVar12[5];
                      (*pcVar3)(iVar19,0,uVar41 & 0xfffffffe,uVar17,iVar24 + 8);
                      uVar43 = puVar12[5];
                      iVar18 = (int)uVar43;
                      uVar17 = *(undefined4 *)(iVar18 + -0x7eec);
                      uVar10 = *(undefined4 *)(iVar18 + -0x7f04);
                      FUN_005eb0f8(pcVar32 + 0x3f4,uVar17,uVar10,0x83b);
                      pcVar3 = (code *)**(undefined4 **)((int)__dest + 0x1a4);
                      puVar12[5] = uVar43;
                      (*pcVar3)(iVar19);
                      uVar16 = puVar12[5];
                      uVar28 = FUN_005eb2e0(pcVar32 + 0x3f4,uVar17,uVar10,0x841);
                      *(undefined4 *)((int)__dest + 0x1e4) = 0;
                    }
                  }
                  else {
                    uVar41 = **(uint **)((int)__dest + 0x158);
                    *(uint *)((int)__dest + 0x20) = *(uint *)((int)__dest + 0x20) | 0x8000000;
                    *(uint *)((int)__dest + 0x17c) = (uVar41 & 0xfffffffe) + param_1;
                  }
                  *(undefined4 *)((int)__dest + 0xc) = 0xffffffff;
                  if (*(uint *)((int)__dest + 0x14) == 0) {
                    *(undefined4 *)((int)__dest + 0x47c) = 2000;
                  }
                  else {
                    *(int *)((int)__dest + 0x47c) =
                         (int)(((ulonglong)*(uint *)((int)__dest + 0x18) * 2000) /
                              (ulonglong)*(uint *)((int)__dest + 0x14));
                  }
                  *(undefined4 *)((int)__dest + 0x114) = 1;
                  iVar18 = FUN_005f5090(uVar28);
                  *(int *)((int)__dest + 0x49c) = iVar18 - *(int *)((int)__dest + 0x49c);
                  *(undefined4 *)(*(int *)((int)__dest + 0x154) + 0x3c) = 0x10000;
                  *(undefined4 *)((int)__dest + 0x124) = 0;
                  if ((*(int *)((int)__dest + 0x38) == 0) || ((bool)(bVar48 >> 1 & 1))) {
LAB_005f2a30:
                    iVar18 = 0;
                  }
                  else {
                    uVar41 = 0;
                    uVar43 = 0;
                    do {
                      if (0 < *(int *)((int)__dest + 0x38)) {
                        iVar19 = 0;
                        iVar23 = 0;
                        iVar18 = 4;
                        if (**(int **)((int)__dest + 0x178) != *(int *)uVar39) {
                          do {
                            iVar23 = iVar18;
                            iVar19 = iVar19 + 1;
                            if (*(int *)((int)__dest + 0x38) <= iVar19) goto LAB_005f2a18;
                            iVar18 = iVar23 + 4;
                          } while (*(int *)(*(int *)((int)__dest + 0x178) + iVar23) !=
                                   *(int *)uVar39);
                        }
                        uVar26 = 0;
                        iVar18 = *(int *)((int)__dest + 0x124) * 4;
                        *(int *)((int)__dest + 0x124) = *(int *)((int)__dest + 0x124) + 1;
                        *(int *)(*(int *)((int)__dest + 0xec) + iVar18) = iVar19;
                        uVar4 = *(uint *)(iVar23 + *(int *)((int)__dest + 0x174));
                        if (-1 < (int)uVar4) {
                          uVar26 = uVar4 >> 0x1c & 1;
                        }
                        lVar30 = FUN_005f533c(uVar4 & 0xffff,(uVar4 >> 0x1d & 1) + 1,uVar26);
                        *(int *)((int)puVar12 + iVar18 + 0x118) = (int)lVar30;
                        uVar4 = *(uint *)(iVar23 + *(int *)((int)__dest + 0x170));
                        uVar43 = uVar43 + (((((ulonglong)uVar4 & 0x3fffffff) * 4 + (ulonglong)uVar4
                                            << 0x20) >> 0x22) + 0xff & 0xffffff00) + lVar30 + 0x10;
                      }
LAB_005f2a18:
                      uVar41 = uVar41 + 1;
                      uVar39 = uVar39 + 4;
                    } while (uVar40 != uVar41);
                    if ((int)uVar43 == 0) goto LAB_005f2a30;
                    iVar18 = *(int *)((int)__dest + 0x468);
                    iVar19 = FUN_005fd778(uVar42 & 0xffffffff);
                    *(int *)((int)__dest + 0x468) = (int)uVar43 + iVar18 + iVar19;
                    iVar18 = FUN_005fd790(uVar42 & 0xffffffff,uVar43 & 0xffffffff);
                    *(int *)((int)__dest + 0x15c) = iVar18;
                    if (iVar18 == 0) {
                      *(undefined4 *)((int)__dest + 0x124) = 0;
                    }
                  }
                  iVar19 = *(int *)((int)uVar16 + -0x7f18);
                  uVar43 = (ulonglong)*(uint *)((int)uVar16 + -0x7e2c);
                  uVar39 = 0;
                  iVar23 = 0;
                  puVar12[0xfd] = uVar43;
                  *(undefined4 *)(iVar19 + 0xc) = 1;
                  *(undefined4 *)(pcVar32 + 0x114) = 0;
                  while( true ) {
                    iVar22 = (int)uVar16;
                    if ((ulonglong)*(uint *)((int)__dest + 0x124) <= (uVar39 & 0xffffffff)) break;
                    iVar24 = *(int *)((int)__dest + 0x154);
                    iVar46 = (int)((uVar39 & 0xffffffff) << 2);
                    *(int *)(puVar12 + 0xfc) = iVar46;
                    *(undefined4 *)(iVar24 + iVar23 + 0xc) = 0;
                    iVar24 = *(int *)(*(int *)((int)__dest + 0xec) + iVar46) * 4;
                    uVar40 = *(uint *)(*(int *)((int)__dest + 0x174) + iVar24);
                    if ((((int)uVar40 < 0) || ((uVar40 & 0x10000000) != 0)) &&
                       (*(int *)(pcVar32 + 0x5e0) != 0)) {
                      uVar42 = (ulonglong)uVar40 & 0xffff;
                      if (uVar42 < 0x3e801) {
                        lVar30 = ((ulonglong)(uVar40 >> 0x1d) & 1) + 1;
                        uVar40 = *(uint *)(*(int *)((int)__dest + 0x170) + iVar24);
                        uVar28 = ((((ulonglong)uVar40 & 0x3fffffff) * 4 + (ulonglong)uVar40 << 0x20)
                                 >> 0x22) + 0xff & 0xffffff00;
                        uVar25 = uVar42;
                        if ((*(int *)((int)puVar12 + 0x2ec) != 0) && (*(int *)(puVar12 + 0x5e) != 0)
                           ) {
                          puVar12[0xfe] = (longlong)*(int *)((int)puVar12 + 0x2ec);
                          puVar12[0xfe] = (longlong)*(int *)((int)puVar12 + 0x77c);
                          puVar12[0xfe] = (longlong)*(int *)(puVar12 + 0x5e);
                          puVar12[0xfe] = (longlong)(int)uVar42;
                          puVar12[0xfe] = (longlong)*(int *)(puVar12 + 0xef);
                          uVar25 = (ulonglong)*(uint *)(puVar12 + 0xfa);
                          if (0x3e800 < (ulonglong)*(uint *)(puVar12 + 0xfa)) {
                            uVar25 = 0x3e800;
                          }
                        }
                        if (uVar28 <= (ulonglong)
                                      ((longlong)(int)lVar30 * (longlong)(int)(uVar42 << 5) << 0x20)
                                      >> 0x23) {
                          uVar17 = *(undefined4 *)(iVar22 + -0x7ee8);
                          uVar10 = *(undefined4 *)(iVar22 + -0x7f04);
                          FUN_005eb0f8(uVar43,uVar17,uVar10,0x8c4);
                          iVar22 = *(int *)((int)__dest + 0x154);
                          uVar21 = *(undefined4 *)((int)__dest + 0x20);
                          pcVar3 = (code *)**(undefined4 **)(pcVar32 + 0x5e0);
                          puVar12[5] = uVar16;
                          iVar22 = (*pcVar3)(iVar23 + iVar22,uVar25,0x10,(int)lVar30,uVar21,__dest);
                          uVar16 = puVar12[5];
                          FUN_005eb2e0(uVar43,uVar17,uVar10,0x8cc);
                          if (iVar22 != 0) {
                            *(int *)(iVar23 + *(int *)((int)__dest + 0x154) + 0x1c) = (int)uVar42;
                            iVar22 = *(int *)((int)__dest + 0x154);
                            if (*(int *)(iVar23 + iVar22 + 0x30) == 0) {
                              *(undefined4 *)(iVar23 + iVar22 + 0x30) = 0xffffffff;
                              iVar22 = *(int *)((int)__dest + 0x154);
                            }
                            *(int *)(iVar23 + iVar22 + 8) = (int)uVar28 + 0x10;
                            *(int *)(iVar23 + *(int *)((int)__dest + 0x154) + 0xc) = iVar18;
                            iVar22 = iVar23 + *(int *)((int)__dest + 0x154);
                            *(undefined4 *)(iVar22 + 0x54) = 0;
                            uVar40 = 0x2ee - *(int *)(iVar22 + 0x38);
                            iVar24 = iVar23 + *(int *)((int)__dest + 0x154);
                            iVar18 = iVar18 + *(int *)(iVar22 + 8);
                            *(int *)(iVar24 + 0x10) = *(int *)(iVar24 + 0xc) + *(int *)(iVar24 + 8);
                            puVar36 = (undefined4 *)(iVar23 + *(int *)((int)__dest + 0x154));
                            *puVar36 = puVar36[3];
                            iVar22 = iVar23 + *(int *)((int)__dest + 0x154);
                            *(undefined4 *)(iVar22 + 0x18) = *(undefined4 *)(iVar22 + 0xc);
                            *(uint *)(iVar23 + *(int *)((int)__dest + 0x154) + 0x48) =
                                 (uint)((uVar25 * (longlong)(int)(uVar40 & (int)~uVar40 >> 0x1f) *
                                        lVar30 * 2) / 1000) & 0xfffffffc;
                            iVar22 = *(int *)((int)__dest + 0x154);
                            iVar24 = iVar23 + iVar22;
                            if (*(int *)(iVar24 + 8) - *(int *)(iVar24 + 0x48) < 0x10) {
                              *(int *)(iVar24 + 0x48) = *(int *)(iVar24 + 8) + -0x10;
                              iVar22 = *(int *)((int)__dest + 0x154);
                            }
                            uVar41 = 0;
                            uVar40 = *(uint *)(*(int *)((int)__dest + 0x174) +
                                              *(int *)(*(int *)(puVar12 + 0xfc) +
                                                      *(int *)((int)__dest + 0xec)) * 4);
                            if (-1 < (int)uVar40) {
                              uVar41 = uVar40 >> 0x1c & 1;
                            }
                            uVar21 = FUN_005f5cd0(iVar18,uVar40 & 0xffff,lVar30,uVar41);
                            *(undefined4 *)(iVar23 + iVar22 + 0x14) = uVar21;
                            FUN_005eb0f8(puVar12[0xfd],uVar17,uVar10,0x8f5);
                            iVar22 = iVar23 + *(int *)((int)__dest + 0x154);
                            if (*(int *)(iVar22 + 0x14) == 0) {
                              pcVar3 = (code *)**(undefined4 **)(iVar22 + 0x178);
                              puVar12[5] = uVar16;
                              (*pcVar3)();
                              uVar16 = puVar12[5];
                              *(undefined4 *)(iVar23 + *(int *)((int)__dest + 0x154) + 0xc) = 0;
                            }
                            FUN_005eb2e0(puVar12[0xfd],uVar17,uVar10,0x900);
                            iVar22 = iVar23 + *(int *)((int)__dest + 0x154);
                            iVar18 = iVar18 + *(int *)((int)puVar12 +
                                                      *(int *)(puVar12 + 0xfc) + 0x118);
                            uVar17 = FUN_005f5384(*(undefined4 *)(iVar22 + 0x14));
                            *(undefined4 *)(iVar22 + 4) = uVar17;
                            *(int *)(iVar23 + *(int *)((int)__dest + 0x154) + 0x40) =
                                 *(int *)((int)__dest + 8) -
                                 (int)((((ulonglong)*(uint *)((int)__dest + 0x4a0) & 0x7fffffff) * 2
                                        + (ulonglong)*(uint *)((int)__dest + 0x4a0) & 0xffffffff) /
                                      (((ulonglong)*(uint *)((int)__dest + 0x4a4) & 0x3fffffff) << 2
                                      ));
                          }
                        }
                      }
                    }
                    iVar22 = *(int *)((int)__dest + 0x154);
                    if (*(int *)(iVar23 + iVar22 + 0x3c) == 0) {
                      *(undefined4 *)(iVar23 + iVar22 + 0x3c) = 0x10000;
                      iVar22 = *(int *)((int)__dest + 0x154);
                    }
                    if (*(int *)(iVar23 + iVar22 + 0xc) == 0) {
                      lVar30 = (ulonglong)*(uint *)((int)__dest + 0x124) - 1;
                      iVar22 = *(int *)(puVar12 + 0xfc) + *(int *)((int)__dest + 0xec);
                      *(int *)((int)__dest + 0x124) = (int)lVar30;
                      FUN_005c6094(iVar22,iVar22 + 4,(lVar30 - uVar39 & 0x3fffffff) << 2);
                    }
                    else {
                      uVar39 = uVar39 + 1;
                      iVar23 = iVar23 + 0x180;
                    }
                  }
                  if (*(uint *)((int)__dest + 0x124) == 0) {
LAB_005f2c00:
                    piVar44 = *(int **)(iVar22 + -0x7f14);
                  }
                  else {
                    uVar17 = *(undefined4 *)(iVar22 + -0x7ee8);
                    uVar10 = *(undefined4 *)(iVar22 + -0x7f04);
                    puVar13 = pcVar32 + 0x47c;
                    *(undefined4 *)((int)__dest + 0x110) = 1;
                    FUN_005eb0f8(puVar13,uVar17,uVar10,0x924);
                    *(int *)(pcVar32 + 0x5dc) =
                         *(int *)((int)__dest + 0x124) + *(int *)(pcVar32 + 0x5dc);
                    FUN_005eb2e0(puVar13,uVar17,uVar10,0x92a);
                    iVar18 = *(int *)(*(int *)((int)__dest + 0x154) + 0x4c);
                    if (iVar18 < 1) {
                      iVar23 = (int)__dest + 0x3b0;
                      iVar18 = FUN_005fc508(iVar23,1);
                      if (iVar18 == 0) {
                        piVar44 = *(int **)(iVar22 + -0x7f14);
                        *(undefined4 *)(*(int *)((int)__dest + 0x154) + 0x4c) = 1;
                      }
                      else {
                        piVar44 = *(int **)(iVar22 + -0x7f14);
                        iVar18 = *piVar44;
                        if (iVar18 != 0) {
                          uVar21 = *(undefined4 *)(iVar22 + -0x7ef0);
                          pcVar3 = (code *)**(undefined4 **)(iVar18 + 0x5c);
                          puVar12[5] = uVar16;
                          (*pcVar3)(iVar18,iVar23,pcVar32 + 0x630,uVar21);
                          uVar16 = puVar12[5];
                        }
                        if (*(int *)(pcVar32 + 0x5ec) == 0) {
                          *(undefined4 *)(iVar19 + 0x10) = 0xd;
                        }
                        FUN_005eb0f8(puVar13,uVar17,uVar10,0x22c);
                        iVar18 = (int)uVar16;
                        if (*(int *)(pcVar32 + 0x1f0) == 0) {
                          *(undefined4 *)(pcVar32 + 0x4fc) = 0;
                          iVar22 = FUN_005fbfd4(pcVar32 + 0x500,0,0x4000);
                          if (iVar22 != 0) {
                            puVar13 = pcVar32 + 500;
                            iVar22 = FUN_005fc620(puVar13,*(undefined4 *)(iVar18 + -0x7e48),0x8000,0
                                                  ,0,*(undefined4 *)(iVar18 + -0x7edc));
                            if (iVar22 != 0) {
                              *(int *)(pcVar32 + 0x540) = *(int *)(pcVar32 + 0x540) + 1;
                              *(undefined4 *)(pcVar32 + 0x1f0) = 1;
                              FUN_005fccc8(puVar13,0x10);
                              FUN_005fccc8(puVar13,0x10);
                              goto LAB_005f2fac;
                            }
                            FUN_005fc098(pcVar32 + 0x500);
                          }
                          FUN_005eb2e0(pcVar32 + 0x47c,uVar17,uVar10,0x251);
                          FUN_005fc490(iVar23);
                          *(undefined4 *)(*(int *)((int)__dest + 0x154) + 0x4c) = 1;
                        }
                        else {
                          *(int *)(pcVar32 + 0x540) = *(int *)(pcVar32 + 0x540) + 1;
LAB_005f2fac:
                          FUN_005eb2e0(pcVar32 + 0x47c,uVar17,uVar10,0x251);
                          FUN_005ec3c8();
                          uVar17 = *(undefined4 *)(iVar18 + -0x7ee4);
                          FUN_005eb0f8(pcVar32 + 0x54c,uVar17,uVar10,0x104);
                          for (pvVar20 = *(void **)(pcVar32 + 0x5ec); pvVar20 != (void *)0x0;
                              pvVar20 = *(void **)((int)pvVar20 + 0xe4)) {
                            if (__dest == pvVar20) goto LAB_005f3008;
                          }
                          *(undefined4 *)((int)__dest + 0xe4) = *(undefined4 *)(pcVar32 + 0x5ec);
                          *(void **)(pcVar32 + 0x5ec) = __dest;
LAB_005f3008:
                          FUN_005eb2e0(pcVar32 + 0x54c,uVar17,uVar10,0x115);
                          *(undefined4 *)((int)__dest + 0x164) = 1;
                        }
                        iVar18 = *(int *)(*(int *)((int)__dest + 0x154) + 0x4c);
                        if ((iVar18 < 0) && (uVar40 = -iVar18, uVar40 < *(uint *)(iVar19 + 0x10))) {
                          *(uint *)(iVar19 + 0x10) = uVar40;
                        }
                      }
                    }
                    else {
                      if (iVar18 != 2) goto LAB_005f2c00;
                      iVar18 = FUN_005fc508((int)__dest + 0x3b0,1);
                      if (iVar18 == 0) {
                        FUN_005ec3c8();
                        uVar17 = *(undefined4 *)(iVar22 + -0x7ee4);
                        FUN_005eb0f8(pcVar32 + 0x54c,uVar17,uVar10,0x104);
                        for (pvVar20 = *(void **)(pcVar32 + 0x5ec); pvVar20 != (void *)0x0;
                            pvVar20 = *(void **)((int)pvVar20 + 0xe4)) {
                          if (__dest == pvVar20) goto LAB_005f2ec8;
                        }
                        *(undefined4 *)((int)__dest + 0xe4) = *(undefined4 *)(pcVar32 + 0x5ec);
                        *(void **)(pcVar32 + 0x5ec) = __dest;
LAB_005f2ec8:
                        FUN_005eb2e0(pcVar32 + 0x54c,uVar17,uVar10,0x115);
                        piVar44 = *(int **)(iVar22 + -0x7f14);
                        *(undefined4 *)((int)__dest + 0x164) = 1;
                      }
                      else {
                        piVar44 = *(int **)(iVar22 + -0x7f14);
                        iVar18 = *piVar44;
                        if (iVar18 != 0) {
                          uVar17 = *(undefined4 *)(iVar22 + -0x7ef0);
                          pcVar3 = (code *)**(undefined4 **)(iVar18 + 0x5c);
                          puVar12[5] = uVar16;
                          (*pcVar3)(iVar18,(int)__dest + 0x3b0,pcVar32 + 0x634,uVar17);
                          uVar16 = puVar12[5];
                        }
                        FUN_005ec3c8();
                        uVar17 = *(undefined4 *)((int)uVar16 + -0x7ee4);
                        FUN_005eb0f8(pcVar32 + 0x54c,uVar17,uVar10,0x104);
                        for (pvVar20 = *(void **)(pcVar32 + 0x5ec); pvVar20 != (void *)0x0;
                            pvVar20 = *(void **)((int)pvVar20 + 0xe4)) {
                          if (__dest == pvVar20) goto LAB_005f2e60;
                        }
                        *(undefined4 *)((int)__dest + 0xe4) = *(undefined4 *)(pcVar32 + 0x5ec);
                        *(void **)(pcVar32 + 0x5ec) = __dest;
LAB_005f2e60:
                        FUN_005eb2e0(pcVar32 + 0x54c,uVar17,uVar10,0x115);
                        *(undefined4 *)((int)__dest + 0x164) = 1;
                      }
                    }
                  }
                  iVar18 = (int)uVar16;
                  uVar17 = *(undefined4 *)(iVar18 + -0x7e40);
                  uVar10 = *(undefined4 *)(iVar18 + -0x7e3c);
                  uVar21 = *(undefined4 *)(iVar18 + -0x7e34);
                  uVar11 = *(undefined4 *)(iVar18 + -0x7e38);
                  *(undefined4 *)((int)__dest + 0x1b4) = *(undefined4 *)(iVar18 + -0x7e44);
                  *(undefined4 *)((int)__dest + 0x1c0) = uVar17;
                  *(undefined4 *)((int)__dest + 0x1b0) = uVar10;
                  *(undefined4 *)((int)__dest + 0x1b8) = uVar11;
                  *(undefined4 *)((int)__dest + 0x1bc) = uVar21;
                  if (((*(uint *)((int)__dest + 0x20) & 0x8000000) != 0) ||
                     (*(int *)((int)__dest + 0x17c) != 0)) goto LAB_005f2c48;
                  iVar23 = (int)__dest + 0x330;
                  iVar19 = FUN_005fc508(iVar23,2);
                  if (iVar19 == 0) {
                    *(uint *)((int)__dest + 0x20) = *(uint *)((int)__dest + 0x20) | 0x8000000;
                  }
                  else {
                    uVar17 = *(undefined4 *)(iVar18 + -0x7eec);
                    uVar10 = *(undefined4 *)(iVar18 + -0x7f04);
                    FUN_005eb0f8(pcVar32 + 0x3f4,uVar17,uVar10,0x528);
                    if (*(int *)(pcVar32 + 0x1ac) == 0) {
                      *(undefined4 *)(pcVar32 + 0x474) = 0;
                      iVar19 = FUN_005fbfd4(pcVar32 + 0x1b0,0,0x4000);
                      if (iVar19 != 0) {
                        iVar19 = FUN_005fc620(pcVar32 + 0x2f4,*(undefined4 *)(iVar18 + -0x7e30),
                                              0x8000,0,0,*(undefined4 *)(iVar18 + -0x7e94));
                        if (iVar19 != 0) {
                          *(int *)(pcVar32 + 0x478) = *(int *)(pcVar32 + 0x478) + 1;
                          *(undefined4 *)(pcVar32 + 0x1ac) = 1;
                          FUN_005fccc8(pcVar32 + 0x2f4,0x10);
                          goto LAB_005f3830;
                        }
                        FUN_005fc098(pcVar32 + 0x1b0);
                      }
                      FUN_005eb2e0(pcVar32 + 0x3f4,uVar17,uVar10,0x54c);
                      FUN_005fc490(iVar23);
                      *(uint *)((int)__dest + 0x20) = *(uint *)((int)__dest + 0x20) | 0x8000000;
                    }
                    else {
                      *(int *)(pcVar32 + 0x478) = *(int *)(pcVar32 + 0x478) + 1;
LAB_005f3830:
                      FUN_005eb2e0(pcVar32 + 0x3f4,uVar17,uVar10,0x54c);
                      iVar19 = *piVar44;
                      if (iVar19 != 0) {
                        uVar17 = *(undefined4 *)(iVar18 + -0x7f08);
                        pcVar3 = (code *)**(undefined4 **)(iVar19 + 0x5c);
                        puVar12[5] = uVar16;
                        (*pcVar3)(iVar19,iVar23,pcVar32 + 0x638,uVar17);
                        uVar16 = puVar12[5];
                      }
                    }
                  }
                  if ((*(uint *)((int)__dest + 0x20) & 0x8000000) == 0) {
                    FUN_005ec3c8();
                    uVar17 = *(undefined4 *)((int)uVar16 + -0x7ee4);
                    uVar10 = *(undefined4 *)((int)uVar16 + -0x7f04);
                    FUN_005eb0f8(pcVar32 + 0x54c,uVar17,uVar10,0x104);
                    for (pvVar20 = *(void **)(pcVar32 + 0x5ec); pvVar20 != (void *)0x0;
                        pvVar20 = *(void **)((int)pvVar20 + 0xe4)) {
                      if (__dest == pvVar20) goto LAB_005f3118;
                    }
                    *(undefined4 *)((int)__dest + 0xe4) = *(undefined4 *)(pcVar32 + 0x5ec);
                    *(void **)(pcVar32 + 0x5ec) = __dest;
LAB_005f3118:
                    FUN_005eb2e0(pcVar32 + 0x54c,uVar17,uVar10,0x115);
                    *(undefined4 *)((int)__dest + 0x164) = 1;
                  }
LAB_005f2c48:
                  iVar18 = FUN_005fc508((int)__dest + 0x2b0,2);
                  if (iVar18 == 0) {
                    trapWord(0x1f,lVar49,lVar49);
                  }
                  iVar18 = *piVar44;
                  if (iVar18 != 0) {
                    uVar17 = *(undefined4 *)((int)uVar16 + -0x7ef4);
                    pcVar3 = (code *)**(undefined4 **)(iVar18 + 0x5c);
                    puVar12[5] = uVar16;
                    (*pcVar3)(iVar18,(int)__dest + 0x2b0,pcVar32 + 0x63c,uVar17);
                    uVar16 = puVar12[5];
                  }
                  if (*(int *)((int)__dest + 0x17c) == 0) {
                    if ((param_3 & 0x200000) == 0) {
                      pcVar3 = (code *)**(undefined4 **)((int)__dest + 0x1a0);
                      puVar12[5] = uVar16;
                      iVar18 = (*pcVar3)((int)__dest + 400);
                      uVar43 = puVar12[5];
                      if (iVar18 != 0) {
                        *(void **)(pcVar32 + 0x610) = __dest;
                        do {
                          pcVar3 = (code *)**(undefined4 **)((int)__dest + 0x1a0);
                          puVar12[5] = uVar43;
                          iVar18 = (*pcVar3)((int)__dest + 400);
                          uVar43 = puVar12[5];
                        } while (iVar18 != 0);
                      }
                    }
                    if (*(int *)(pcVar32 + 0x1ac) != 0) {
                      FUN_005fc190(pcVar32 + 0x1b0,1);
                    }
                  }
                  *(undefined4 *)((int)__dest + 0x4d8) = 0xf0000000;
                  FUN_005eda28(__dest,1);
                  if (((*(int *)((int)__dest + 0x124) != 0) && (*(int *)(pcVar32 + 0x1f0) != 0)) &&
                     (*(int *)(*(int *)((int)__dest + 0x154) + 0x4c) < 1)) {
                    FUN_005fc190(pcVar32 + 0x500,1);
                  }
                  uVar17 = FUN_005fbef8(pcVar32 + 0x640,1);
                  *(undefined4 *)((int)__dest + 0x160) = uVar17;
                  return __dest;
                }
                *(uint *)((int)puVar12 + 0xb4) = uVar4;
                *(uint *)((int)puVar12 + 0xa4) = *(int *)((int)__dest + 0x168) + 7U & 0xfffffff8;
                *(uint *)(puVar12 + 0x15) = *(int *)((int)__dest + 0x16c) + 7U & 0xfffffff8;
                *(uint *)((int)puVar12 + 0xac) =
                     (*(int *)((int)__dest + 0x168) + 1U >> 1) + 7 & 0xfffffff8;
                iVar18 = *(int *)((int)__dest + 0x16c);
                *(undefined4 *)(puVar12 + 0x1a) = 1;
                *(undefined4 *)(puVar12 + 0x17) = 1;
                *(undefined4 *)((int)puVar12 + 0xc4) = 1;
                *(uint *)(puVar12 + 0x16) = (iVar18 + 1U >> 1) + 7 & 0xfffffff8;
                uVar26 = *(uint *)((int)__dest + 0x20);
                *(uint *)((int)puVar12 + 0xe4) = uVar4;
                *(uint *)((int)puVar12 + 0xbc) = uVar4;
                *(uint *)((int)puVar12 + 0xdc) = uVar26 >> 0x14 & 1;
                *(uint *)(puVar12 + 0x19) = uVar4;
                *(uint *)((int)puVar12 + 0xd4) = uVar4;
                *(uint *)(puVar12 + 0x1c) = uVar4;
                *(uint *)(puVar12 + 0x18) = uVar4;
                *(uint *)((int)puVar12 + 0xcc) = uVar4;
                *(uint *)(puVar12 + 0x1b) = uVar4;
                if (*(int *)((int)__dest + 8) == 1) {
                  *(undefined4 *)(puVar12 + 0x14) = 1;
                }
                else {
                  *(undefined4 *)(puVar12 + 0x14) = 2;
                  puVar12[0x1d] = puVar12[0x17];
                  puVar12[0x1e] = puVar12[0x18];
                  puVar12[0x1f] = puVar12[0x19];
                  puVar12[0x20] = puVar12[0x1a];
                  puVar12[0x21] = puVar12[0x1b];
                  puVar12[0x22] = puVar12[0x1c];
                }
                bVar33 = false;
                lVar30 = uVar43 - 0x7d8;
                uVar27 = uVar43 - 0x7b4;
                lVar34 = uVar43 - 0x7c0;
                uVar25 = 0;
                do {
                  uVar50 = uVar25;
                  piVar44 = (int *)lVar34;
                  puVar12[0xfb] = uVar27 & 0xffffffff;
                  piVar45 = (int *)lVar30;
                  lVar30 = lVar30 + 0x30;
                  uVar27 = uVar27 + 0x30;
                  lVar34 = lVar34 + 0x30;
                  uVar4 = *(int *)((int)puVar12 + 0xac) + 0xfU & 0xfffffff0;
                  if (*piVar45 != 0) {
                    FUN_005fd700(uVar42,(uVar50 & 0x3ffffff) * 0x40 + (uVar50 & 0xfffffff) * -0x10 +
                                        lVar49 + 0xbc & 0xfffffffc,
                                 *(int *)((int)puVar12 + 0xa4) * *(int *)(puVar12 + 0x15));
                    bVar33 = true;
                    piVar45[2] = *(int *)((int)puVar12 + 0xa4);
                  }
                  if (piVar45[3] != 0) {
                    FUN_005fd700(uVar42,(uVar50 & 0x3ffffff) * 0x40 + (uVar50 & 0xfffffff) * -0x10 +
                                        lVar49 + 200 & 0xfffffff8,uVar4 * *(int *)(puVar12 + 0x16));
                    bVar33 = true;
                    piVar45[5] = uVar4;
                  }
                  if (*piVar44 != 0) {
                    FUN_005fd700(uVar42,(uVar50 & 0x3ffffff) * 0x40 + (uVar50 & 0xfffffff) * -0x10 +
                                        lVar49 + 0xd4 & 0xfffffffc,uVar4 * *(int *)(puVar12 + 0x16))
                    ;
                    bVar33 = true;
                    piVar44[2] = uVar4;
                  }
                  uVar25 = uVar50 + 1;
                  uVar28 = uVar42;
                  if (*(int *)puVar12[0xfb] != 0) {
                    uVar28 = FUN_005fd700(uVar42,(uVar50 & 0x3ffffff) * 0x40 +
                                                 (uVar50 & 0xfffffff) * -0x10 + lVar49 + 0xe0 &
                                                 0xfffffff0,
                                          *(int *)((int)puVar12 + 0xa4) * *(int *)(puVar12 + 0x15));
                    bVar33 = true;
                    *(undefined4 *)((int)puVar12[0xfb] + 8) = *(undefined4 *)((int)puVar12 + 0xa4);
                  }
                } while ((int)uVar25 < *(int *)(puVar12 + 0x14));
                if ((int)uVar25 < 2) {
                  uVar27 = 2 - uVar25 & 0xffffffff;
                  lVar30 = (uVar25 & 0x3ffffff) * 0x40 + (uVar25 & 0xfffffff) * -0x10 + lVar49 +
                           0xbc;
                  if (2 < (int)uVar50 + 2) {
                    uVar27 = 1;
                  }
                  do {
                    puVar36 = (undefined4 *)lVar30;
                    *puVar36 = 0;
                    puVar36[3] = 0;
                    puVar36[6] = 0;
                    uVar27 = uVar27 - 1;
                    lVar30 = lVar30 + 0x30;
                  } while (uVar27 != 0);
                }
                if (!bVar33) goto LAB_005f2548;
                iVar18 = *(int *)((int)__dest + 0x468);
                iVar19 = FUN_005fd778(uVar42 & 0xffffffff);
                *(int *)((int)__dest + 0x468) = iVar19 + iVar18 + 0x78;
                pvVar20 = (void *)FUN_005fd790(uVar42 & 0xffffffff,0x78);
                *(void **)((int)__dest + 0x4e4) = pvVar20;
                if (pvVar20 != (void *)0x0) {
                  *(void **)((int)__dest + 0xd0) = pvVar20;
                  pvVar20 = libc::memcpy(pvVar20,puVar12 + 0x14,0x78);
                  uVar28 = (ulonglong)(int)pvVar20;
                  goto LAB_005f2548;
                }
              }
LAB_005f277c:
              FUN_005f516c(__dest);
            }
            pcVar31 = *(char **)((int)uVar16 + -0x7e68);
            lVar49 = 0xfe;
            *pcVar32 = 0x4f;
            do {
              cVar2 = *pcVar31;
              pcVar31 = pcVar31 + 1;
              pcVar37 = pcVar37 + 1;
              if (cVar2 == '\0') {
                if (uVar41 != 0) {
                  return (void *)0x0;
                }
                goto LAB_005f2240;
              }
              *pcVar37 = *pcVar31;
              lVar49 = lVar49 + -1;
            } while (lVar49 != 0);
            bVar1 = uVar41 == 0;
            goto LAB_005f21c4;
          }
        }
      }
      pcVar31 = *(char **)(iVar19 + -0x7e6c);
      lVar49 = 0xfe;
      *pcVar32 = 0x54;
      do {
        cVar2 = *pcVar31;
        pcVar31 = pcVar31 + 1;
        pcVar37 = pcVar37 + 1;
        if (cVar2 == '\0') goto joined_r0x005f19e4;
        *pcVar37 = *pcVar31;
        lVar49 = lVar49 + -1;
      } while (lVar49 != 0);
    }
  }
  else {
    pcVar31 = *(char **)(iVar19 + -0x7e74);
    lVar49 = 0xfe;
    *pcVar32 = 0x4e;
    do {
      cVar2 = *pcVar31;
      pcVar31 = pcVar31 + 1;
      pcVar37 = pcVar37 + 1;
      if (cVar2 == '\0') goto joined_r0x005f19e4;
      *pcVar37 = *pcVar31;
      lVar49 = lVar49 + -1;
    } while (lVar49 != 0);
  }
LAB_005f21c4:
  *pcVar37 = '\0';
  if (!bVar1) {
    return (void *)0x0;
  }
LAB_005f2240:
  uVar17 = *(undefined4 *)((int)uVar16 + -0x7eec);
  uVar10 = *(undefined4 *)((int)uVar16 + -0x7f04);
  FUN_005eb0f8(pcVar32 + 0x3f4,uVar17,uVar10,0x70f);
  pcVar3 = (code *)**(undefined4 **)((int)puVar12 + 0x47c);
  puVar12[5] = uVar16;
  (*pcVar3)(uVar43 - 0x428);
  FUN_005eb2e0(pcVar32 + 0x3f4,uVar17,uVar10,0x715);
  return (void *)0x0;
joined_r0x005f19e4:
  if (!bVar1) {
    return (void *)0x0;
  }
  goto LAB_005f2240;
}



//==== 005f3980  ns=Global  size=0x4
// sig: undefined thunk_FUN_005f1788(void)
// callers(0): 
// callees(0): 

/* WARNING: Type propagation algorithm not settling */

void * thunk_FUN_005f1788(int param_1,ulonglong *param_2,ulonglong param_3)

{
  bool bVar1;
  char cVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  ulonglong *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  longlong lVar15;
  ulonglong uVar16;
  undefined4 uVar17;
  int iVar18;
  int iVar19;
  void *__dest;
  void *pvVar20;
  undefined4 uVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  ulonglong uVar25;
  uint uVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  uint uVar29;
  char *pcVar31;
  longlong lVar30;
  char *pcVar32;
  bool bVar33;
  uint uVar35;
  longlong lVar34;
  undefined4 *puVar36;
  char *pcVar37;
  char *pcVar38;
  ulonglong unaff_r14;
  ulonglong unaff_r15;
  ulonglong uVar39;
  ulonglong unaff_r16;
  ulonglong unaff_r17;
  ulonglong unaff_r18;
  uint uVar40;
  ulonglong unaff_r19;
  uint uVar41;
  ulonglong unaff_r20;
  ulonglong uVar42;
  ulonglong unaff_r21;
  ulonglong unaff_r22;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong uVar43;
  ulonglong unaff_r26;
  int *piVar44;
  ulonglong unaff_r27;
  int *piVar45;
  int iVar46;
  ulonglong unaff_r28;
  uint uVar47;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  byte in_cr0;
  byte in_cr1;
  byte in_cr2;
  byte bVar48;
  byte in_cr3;
  byte unaff_cr4;
  byte in_cr5;
  byte in_cr6;
  byte in_cr7;
  ulonglong in_LR;
  longlong lVar49;
  ulonglong uVar50;
  
  uVar43 = ZEXT48(&stack0x00000000);
  uVar16 = ZEXT48(&TOC_BASE);
  lVar49 = uVar43 - 0x890;
  puVar12 = (ulonglong *)lVar49;
  *puVar12 = uVar43;
  puVar12[0x107] = unaff_r21;
  uVar42 = uVar43 - 0x6f8;
  puVar12[0x10b] = unaff_r25;
  puVar12[0x10f] = unaff_r29;
  puVar12[0x110] = unaff_r30;
  puVar12[0x102] = unaff_r16;
  puVar12[0x105] = unaff_r19;
  puVar12[0x108] = unaff_r22;
  puVar12[0x100] = unaff_r14;
  puVar12[0x101] = unaff_r15;
  puVar12[0x103] = unaff_r17;
  puVar12[0x104] = unaff_r18;
  puVar12[0x106] = unaff_r20;
  puVar12[0x109] = unaff_r23;
  puVar12[0x10a] = unaff_r24;
  puVar12[0x10c] = unaff_r26;
  puVar12[0x10d] = unaff_r27;
  puVar12[0x10e] = unaff_r28;
  puVar12[0x111] = unaff_r31;
  uVar40 = 1;
  uVar39 = uVar43 - 0x820;
  *(uint *)(puVar12 + 0x113) =
       (uint)(in_cr0 & 0xf) << 0x1c | (uint)(in_cr1 & 0xf) << 0x18 | (uint)(in_cr2 & 0xf) << 0x14 |
       (uint)(in_cr3 & 0xf) << 0x10 | (uint)(unaff_cr4 & 0xf) << 0xc | (uint)(in_cr5 & 0xf) << 8 |
       (uint)(in_cr6 & 0xf) << 4 | (uint)(in_cr7 & 0xf);
  puVar12[0x114] = in_LR;
  *(undefined4 *)(puVar12 + 0xe) = 0;
  FUN_005fd6d0(uVar42,0x20);
  if ((param_3 & 0x4000) != 0) {
    uVar40 = *(uint *)(param_2 + 3);
    uVar39 = (ulonglong)*(uint *)((int)param_2 + 0x1c);
  }
  uVar41 = (uint)param_3 & 0x4000000;
  libc::memset(uVar43 - 0x5b8,0,0x4f0);
  uVar17 = FUN_005f5090();
  pcVar32 = PTR_DAT_0071a40c;
  bVar1 = (param_3 & 0x4000000) == 0;
  *(undefined4 *)((int)puVar12 + 0x774) = uVar17;
  *pcVar32 = 0;
  if (bVar1) {
    if (((param_3 & 0x2000000) == 0) ||
       (puVar36 = *(undefined4 **)(param_2 + 4), *(undefined4 **)(param_2 + 4) == (undefined4 *)0x0)
       ) {
      puVar36 = (undefined4 *)PTR_PTR_0071a4d0;
    }
    uVar16 = uVar43 - 0x428 & 0xffffffff;
    libc::memset(uVar16,0,0x120);
    puVar14 = PTR_PTR_0071a4dc;
    puVar13 = PTR_PTR_0071a4d8;
    *(undefined **)((int)puVar12 + 0x49c) = PTR_PTR_0071a4d4;
    *(undefined **)((int)puVar12 + 0x4a4) = puVar13;
    *(undefined **)(puVar12 + 0x94) = puVar14;
    FUN_005ec3c8();
    if ((param_3 & 0x20) != 0) {
      puVar12[0x73] = *param_2;
    }
    puVar14 = PTR_s_Bink_global_IO_mutex_0071a43c;
    puVar13 = PTR_s_C__devel_projects_bink_src_sdk_d_0071a424;
    FUN_005eb0f8(pcVar32 + 0x3f4,PTR_s_Bink_global_IO_mutex_0071a43c,
                 PTR_s_C__devel_projects_bink_src_sdk_d_0071a424,0x6e7);
    pcVar3 = (code *)*puVar36;
    puVar12[5] = ZEXT48(&TOC_BASE);
    iVar18 = (*pcVar3)(uVar16,param_1,param_3 & 0xffffffff);
    uVar16 = puVar12[5];
    if (iVar18 == 0) {
      FUN_005eb2e0(pcVar32 + 0x3f4,puVar14,puVar13,0x6f5);
      if (*pcVar32 != '\0') {
        return (void *)0x0;
      }
      pcVar37 = *(char **)((int)uVar16 + -0x7e5c);
      lVar49 = 0xfe;
      *pcVar32 = 0x45;
      do {
        cVar2 = *pcVar37;
        pcVar37 = pcVar37 + 1;
        pcVar32 = pcVar32 + 1;
        if (cVar2 == '\0') {
          return (void *)0x0;
        }
        *pcVar32 = *pcVar37;
        lVar49 = lVar49 + -1;
      } while (lVar49 != 0);
      *pcVar32 = '\0';
      return (void *)0x0;
    }
    FUN_005eb2e0(pcVar32 + 0x3f4,puVar14,puVar13,0x6fe);
    pcVar3 = (code *)**(undefined4 **)(puVar12 + 0x8d);
    puVar12[5] = uVar16;
    (*pcVar3)(uVar43 - 0x428,0,uVar43 - 0x81c,0x2c);
    uVar16 = puVar12[5];
  }
  iVar18 = *(int *)((int)puVar12 + 0x74);
  iVar19 = (int)uVar16;
  pcVar37 = pcVar32;
  if (((((iVar18 == 0x664b4942) || (iVar18 == 0x674b4942)) || (iVar18 == 0x684b4942)) ||
      (iVar18 == 0x694b4942)) && (*(int *)(puVar12 + 0x95) == 0)) {
    uVar4 = *(uint *)((int)puVar12 + 0x7c);
    if (uVar4 == 0) {
      pcVar31 = *(char **)(iVar19 + -0x7e70);
      lVar49 = 0xfe;
      *pcVar32 = 0x54;
      do {
        cVar2 = *pcVar31;
        pcVar31 = pcVar31 + 1;
        pcVar37 = pcVar37 + 1;
        if (cVar2 == '\0') goto joined_r0x005f19e4;
        *pcVar37 = *pcVar31;
        lVar49 = lVar49 + -1;
      } while (lVar49 != 0);
    }
    else {
      uVar26 = *(uint *)((int)puVar12 + 0x84);
      if ((uVar4 <= uVar26) && (uVar26 < 0xf4241)) {
        uVar47 = *(uint *)(puVar12 + 0xf);
        if ((((*(uint *)(puVar12 + 0x10) <= uVar47) &&
             ((uVar35 = *(uint *)((int)puVar12 + 0x9c), uVar35 < 0x101 &&
              (uVar26 * (uVar35 * 4 + 4) <= uVar47)))) &&
            (uVar29 = *(uint *)(puVar12 + 0x11), uVar29 < 0x8000)) &&
           (uVar5 = *(uint *)((int)puVar12 + 0x8c), uVar5 < 0x8000)) {
          uVar6 = *(uint *)(puVar12 + 0x12);
          if ((uVar6 != 0) && (uVar7 = *(uint *)((int)puVar12 + 0x94), uVar7 != 0)) {
            uVar8 = *(uint *)(puVar12 + 0x13);
            uVar28 = ((param_3 << 0x20) >> 0x3f) << 0x1f | param_3 & 0xfffffff |
                     (ulonglong)uVar8 & 0x20000;
            *(uint *)(puVar12 + 0x79) = (uVar29 + 0xf >> 4) + 0xf & 0xfffffff0;
            *(uint *)((int)puVar12 + 0x444) = uVar5;
            *(uint *)(puVar12 + 0x5b) = uVar29;
            *(uint *)((int)puVar12 + 0x2dc) = uVar5;
            *(uint *)(puVar12 + 0x88) = uVar29;
            *(int *)((int)puVar12 + 0x7b4) = iVar18;
            *(uint *)((int)puVar12 + 0x2fc) = uVar8;
            *(int *)(puVar12 + 0x5f) = (int)uVar28;
            if ((uVar8 & 0x100000) == 0) {
              uVar28 = (param_3 & 0xfffff | (ulonglong)uVar8 & 0x20000) << 0xb |
                       (uVar28 << 0x20) >> 0x35;
              *(uint *)(puVar12 + 0x5f) = (uint)(uVar28 << 0x15) | (uint)uVar28 >> 0xb;
            }
            iVar19 = (int)(param_3 & 0x70000000);
            if (iVar19 == 0x70000000) goto LAB_005f1d5c;
            if (iVar19 == 0) {
              uVar28 = (ulonglong)*(uint *)(puVar12 + 0x5f) | (ulonglong)uVar8 & 0x70000000;
              *(int *)(puVar12 + 0x5f) = (int)uVar28;
            }
            else {
              uVar28 = (ulonglong)*(uint *)(puVar12 + 0x5f) | param_3 & 0x70000000;
              *(int *)(puVar12 + 0x5f) = (int)uVar28;
            }
            iVar19 = (int)(uVar28 & 0x70000000);
            if (iVar19 == 0x30000000) {
              iVar19 = *(int *)((int)puVar12 + 0x2dc);
              *(int *)(puVar12 + 0x5b) = *(int *)(puVar12 + 0x5b) << 1;
            }
            else if ((uVar28 & 0x70000000) < 0x30000001) {
              if ((iVar19 == 0x10000000) || (iVar19 == 0x20000000)) {
                iVar19 = (int)(((ulonglong)*(uint *)((int)puVar12 + 0x2dc) & 0x7fffffff) << 1);
                *(int *)((int)puVar12 + 0x2dc) = iVar19;
              }
              else {
LAB_005f1d5c:
                iVar19 = *(int *)((int)puVar12 + 0x2dc);
              }
            }
            else {
              if ((iVar19 != 0x40000000) && (iVar19 != 0x50000000)) goto LAB_005f1d5c;
              iVar19 = (int)(((ulonglong)*(uint *)((int)puVar12 + 0x2dc) & 0x7fffffff) << 1);
              *(int *)((int)puVar12 + 0x2dc) = iVar19;
              *(int *)(puVar12 + 0x5b) = *(int *)(puVar12 + 0x5b) << 1;
            }
            if ((iVar18 == 0x664b4942) || (iVar18 == 0x674b4942)) {
              *(uint *)(puVar12 + 0x5f) = *(uint *)(puVar12 + 0x5f) | 0x18000;
            }
            else if (iVar18 == 0x684b4942) {
              *(uint *)(puVar12 + 0x5f) = *(uint *)(puVar12 + 0x5f) | 0x8000;
            }
            *(uint *)(puVar12 + 0x5c) = uVar4;
            *(uint *)((int)puVar12 + 0x3d4) = uVar26;
            if (((param_3 & 0x1000) == 0) || (*(int *)(param_2 + 1) == -1)) {
              *(uint *)((int)puVar12 + 0x2ec) = uVar6;
              *(uint *)(puVar12 + 0x5e) = uVar7;
            }
            else {
              uVar17 = *(undefined4 *)((int)param_2 + 0xc);
              *(int *)((int)puVar12 + 0x2ec) = *(int *)(param_2 + 1);
              *(undefined4 *)(puVar12 + 0x5e) = uVar17;
            }
            *(uint *)(puVar12 + 0x60) = uVar47;
            *(uint *)(puVar12 + 0x62) = uVar35;
            *(uint *)(puVar12 + 0x7a) = *(uint *)(puVar12 + 0x10);
            *(uint *)((int)puVar12 + 0x3cc) = *(int *)(puVar12 + 0x79) * (iVar19 + 0xfU >> 4);
            *(uint *)(puVar12 + 0xef) = uVar6;
            *(uint *)((int)puVar12 + 0x77c) = uVar7;
            iVar18 = (int)(((ulonglong)(uVar7 >> 1) + (ulonglong)uVar6 & 0xffffffff) /
                          (ulonglong)uVar7);
            *(int *)(puVar12 + 0xe5) = iVar18;
            if (iVar18 == 0) {
              *(undefined4 *)(puVar12 + 0xe5) = 1;
            }
            uVar28 = uVar42 & 0xffffffff;
            bVar48 = (uVar40 == 0) << 1;
            FUN_005fd700(uVar28,uVar43 - 0x184,
                         ((ulonglong)*(uint *)(puVar12 + 0xe5) & 0x3fffffff) << 2);
            FUN_005fd700(uVar28,uVar43 - 0x180,
                         ((ulonglong)*(uint *)(puVar12 + 0xe5) & 0x3fffffff) << 2);
            FUN_005fd700(uVar28,uVar43 - 0x17c,
                         ((ulonglong)*(uint *)(puVar12 + 0xe5) & 0x3fffffff) << 2);
            FUN_005fd700(uVar28,uVar43 - 0x178,
                         ((ulonglong)*(uint *)(puVar12 + 0xe5) & 0x3fffffff) << 2);
            FUN_005fd700(uVar28,uVar43 - 0x174,
                         ((ulonglong)*(uint *)(puVar12 + 0xe5) & 0x3fffffff) << 2);
            FUN_005fd700(uVar28,uVar43 - 0x170,
                         ((ulonglong)*(uint *)(puVar12 + 0xe5) & 0x3fffffff) << 2);
            FUN_005fd700(uVar28,uVar43 - 0x16c,
                         ((ulonglong)*(uint *)(puVar12 + 0xe5) & 0x3fffffff) << 2);
            if ((bool)(bVar48 >> 1 & 1)) {
              iVar18 = 0x180;
            }
            else {
              iVar18 = uVar40 * 0x200 + (uVar40 & 0x1ffffff) * -0x80;
            }
            uVar28 = uVar42 & 0xffffffff;
            FUN_005fd700(uVar28,uVar43 - 0x464,iVar18);
            FUN_005fd700(uVar28,uVar43 - 0x4cc,((ulonglong)uVar40 & 0x3fffffff) << 2);
            FUN_005f8758(uVar43 - 0x488,*(int *)(puVar12 + 0x5b) + 0xfU & 0xfffffff0);
            if (bVar1) {
              FUN_005fd700(uVar28,uVar43 - 0x448,
                           (*(int *)(puVar12 + 0x62) * 3 + *(int *)((int)puVar12 + 0x3d4)) * 4 +
                           0x104);
            }
            iVar18 = *(int *)(puVar12 + 0xe8);
            iVar19 = FUN_005fd778(uVar28);
            *(int *)(puVar12 + 0xe8) = iVar19 + iVar18 + 0x4f0;
            __dest = (void *)FUN_005fd790(uVar28,0x4f0);
            if (__dest != (void *)0x0) {
              libc::memcpy(__dest,(void *)(uVar43 - 0x5b8),0x4f0);
              *(void **)((int)__dest + 0x1ac) = __dest;
              **(undefined4 **)((int)__dest + 0x438) = 0;
              **(undefined4 **)((int)__dest + 0x43c) = 0;
              **(undefined4 **)((int)__dest + 0x440) = 0;
              **(undefined4 **)((int)__dest + 0x444) = 0;
              **(undefined4 **)((int)__dest + 0x448) = 0;
              **(undefined4 **)((int)__dest + 0x44c) = 0;
              pcVar31 = pcVar32;
              if (bVar1) {
                iVar18 = *(int *)(puVar12 + 0x62);
                iVar19 = *(int *)((int)puVar12 + 0x3d4);
                iVar23 = (*(int *)((int)__dest + 0x170) + 0x100U & 0xffffff80) - 0x54;
                *(int *)((int)__dest + 0x170) = iVar23;
                pcVar3 = (code *)**(undefined4 **)((int)__dest + 400);
                puVar12[5] = uVar16;
                (*pcVar3)((int)__dest + 400,0xffffffffffffffff,iVar23,(iVar18 * 3 + iVar19) * 4 + 4)
                ;
                uVar16 = puVar12[5];
                iVar19 = *(int *)(puVar12 + 0x62) * 4;
                iVar23 = *(int *)((int)__dest + 0x170) + iVar19;
                iVar18 = iVar23 + iVar19;
                *(int *)((int)__dest + 0x174) = iVar23;
                *(int *)((int)__dest + 0x178) = iVar18;
                *(int *)((int)__dest + 0x158) = iVar18 + iVar19;
                if (*(int *)((int)__dest + 0x1d0) == 0) goto LAB_005f2004;
                pcVar38 = *(char **)((int)uVar16 + -0x7e60);
                lVar49 = 0xfe;
                *pcVar32 = 0x45;
                do {
                  cVar2 = *pcVar38;
                  pcVar38 = pcVar38 + 1;
                  pcVar31 = pcVar31 + 1;
                  if (cVar2 == '\0') goto LAB_005f277c;
                  *pcVar31 = *pcVar38;
                  lVar49 = lVar49 + -1;
                } while (lVar49 != 0);
LAB_005f2774:
                *pcVar31 = '\0';
              }
              else {
                uVar4 = *(uint *)((int)__dest + 0x38);
                *(int *)((int)__dest + 0x170) = param_1 + 0x2c;
                *(uint *)((int)__dest + 0x174) = param_1 + (uVar4 & 0x3fffffff) * 4 + 0x2c;
                *(uint *)((int)__dest + 0x178) = param_1 + uVar4 * 8 + 0x2c;
                *(uint *)((int)__dest + 0x158) =
                     param_1 + uVar4 * 0x10 + (uVar4 & 0x3fffffff) * -4 + 0x2c;
LAB_005f2004:
                uVar4 = *(uint *)((int)__dest + 8);
                uVar28 = (ulonglong)uVar4;
                uVar26 = *(uint *)((int)__dest + 0x450);
                puVar9 = *(uint **)((int)__dest + 0x158);
                uVar27 = ZEXT48(puVar9);
                uVar25 = uVar28 - uVar26;
                if ((int)uVar25 < 0) {
                  uVar25 = 0;
LAB_005f22b4:
                  uVar47 = 1;
                  iVar18 = 0;
LAB_005f20d0:
                  uVar29 = (uint)((((ulonglong)puVar9[uVar4] - (ulonglong)*puVar9) *
                                  (ulonglong)uVar26) / (ulonglong)uVar4);
LAB_005f20f8:
                  if ((int)uVar25 < (int)uVar4) {
                    lVar34 = uVar27 + (uVar25 & 0x3fffffff) * 4;
                    uVar25 = uVar28 - uVar25 & 0xffffffff;
                    lVar30 = lVar34 + 4;
                    uVar4 = *(uint *)lVar34;
                    uVar47 = uVar47 & uVar4;
                    if (uVar4 < *(uint *)lVar30) {
                      do {
                        lVar34 = lVar30 + 4;
                        puVar9 = (uint *)lVar30;
                        uVar25 = uVar25 - 1;
                        if (uVar25 == 0) goto LAB_005f2164;
                        uVar47 = *puVar9 & uVar47;
                        lVar30 = lVar34;
                      } while (*puVar9 < *(uint *)lVar34);
                    }
                    goto LAB_005f22c4;
                  }
LAB_005f2164:
                  *(uint *)((int)__dest + 0x4d4) = uVar47;
                  *(int *)((int)__dest + 0xcc) = iVar18;
                }
                else {
                  if ((int)uVar25 < 1) goto LAB_005f22b4;
                  lVar30 = uVar27 + ((ulonglong)uVar26 & 0x3fffffff) * 4;
                  uVar35 = *puVar9;
                  if (uVar35 < *(uint *)(uVar27 + 4)) {
                    uVar50 = uVar25 & 0xffffffff;
                    uVar47 = uVar35 & 1;
                    uVar35 = *(int *)lVar30 - uVar35;
                    uVar29 = 0;
                    iVar18 = 0;
                    iVar19 = 0;
                    lVar34 = uVar27 + 4;
                    do {
                      lVar30 = lVar30 + 4;
                      lVar15 = lVar34 + 4;
                      if (uVar29 < uVar35) {
                        iVar18 = iVar19;
                        uVar29 = uVar35;
                      }
                      iVar19 = iVar19 + 1;
                      uVar50 = uVar50 - 1;
                      if (uVar50 == 0) {
                        if (uVar29 != 0) goto LAB_005f20f8;
                        goto LAB_005f20d0;
                      }
                      uVar5 = *(uint *)lVar34;
                      uVar47 = uVar5 & uVar47;
                      uVar35 = *(int *)lVar30 - uVar5;
                      lVar34 = lVar15;
                    } while (uVar5 < *(uint *)lVar15);
                  }
LAB_005f22c4:
                  uVar29 = 0xffffffff;
                }
                *(uint *)((int)__dest + 200) = uVar29;
                if (uVar29 == 0xffffffff) {
                  pcVar38 = *(char **)((int)uVar16 + -0x7e64);
                  lVar49 = 0xfe;
                  *pcVar32 = 0x54;
                  do {
                    cVar2 = *pcVar38;
                    pcVar38 = pcVar38 + 1;
                    pcVar31 = pcVar31 + 1;
                    if (cVar2 == '\0') goto LAB_005f277c;
                    *pcVar31 = *pcVar38;
                    lVar49 = lVar49 + -1;
                  } while (lVar49 != 0);
                  goto LAB_005f2774;
                }
                uVar4 = (uint)param_3 & 0x400;
                if ((param_3 & 0x400) != 0) {
LAB_005f2548:
                  if ((((param_3 & 0x1000000) == 0) ||
                      (iVar18 = *(int *)(param_2 + 2), iVar18 == -1)) || (iVar18 == 0)) {
                    iVar18 = *(int *)((int)__dest + 200);
                  }
                  *(int *)((int)__dest + 0x458) = iVar18;
                  if ((((param_3 & 0x400000) == 0) ||
                      (iVar18 = *(int *)((int)param_2 + 0x14), iVar18 == -1)) || (iVar18 == 0)) {
                    iVar18 = 0;
                  }
                  *(int *)((int)__dest + 0x180) = iVar18;
                  if (bVar1) {
                    iVar19 = (int)__dest + 400;
                    uVar17 = *(undefined4 *)((int)__dest + 0x458);
                    pcVar3 = (code *)**(undefined4 **)((int)__dest + 0x198);
                    puVar12[5] = uVar16;
                    uVar28 = (*pcVar3)(iVar19,uVar17);
                    uVar16 = puVar12[5];
                    uVar41 = *(uint *)((int)__dest + 0x28);
                    *(int *)((int)__dest + 0x458) = (int)uVar28;
                    if ((uVar28 + 0x20000 & 0xffffffff) < (ulonglong)uVar41) {
                      if ((((ulonglong)uVar41 / 10) * 9 & 0xffffffff) <= (uVar28 & 0xffffffff)) {
                        *(uint *)((int)__dest + 0x458) = uVar41 + 0x10;
                      }
                    }
                    else {
                      param_3 = param_3 | 0x2000;
                      *(uint *)((int)__dest + 0x20) = *(uint *)((int)__dest + 0x20) | 0x8002000;
                    }
                    if ((param_3 & 0x2000) == 0) {
                      uVar28 = uVar42 & 0xffffffff;
                      FUN_005fd700(uVar28,(int)__dest + 0x4e0,*(int *)((int)__dest + 0xf8) + 0x500);
                      iVar23 = *(int *)((int)__dest + 0x458);
                      iVar22 = *(int *)((int)__dest + 0x468);
                      iVar24 = FUN_005fd778(uVar28);
                      *(int *)((int)__dest + 0x468) = iVar24 + iVar23 + iVar22;
                      iVar23 = FUN_005fd790(uVar28,iVar23);
                      *(int *)((int)__dest + 0x430) = iVar23;
                      if (iVar23 == 0) goto LAB_005f3700;
                      iVar22 = *(int *)((int)__dest + 0x28);
                      uVar17 = *(undefined4 *)((int)__dest + 0x458);
                      pcVar3 = (code *)**(undefined4 **)((int)__dest + 0x19c);
                      puVar12[5] = uVar16;
                      uVar28 = (*pcVar3)(iVar19,iVar23,uVar17,iVar22 + 8,iVar18);
                      uVar16 = puVar12[5];
                    }
                    else {
                      iVar23 = *(int *)((int)__dest + 0x468);
                      iVar24 = *(int *)((int)__dest + 0x28) -
                               (**(uint **)((int)__dest + 0x158) & 0xfffffffe);
                      iVar46 = iVar24 + 0x408;
                      iVar22 = FUN_005fd778(uVar42 & 0xffffffff);
                      *(int *)((int)__dest + 0x468) = iVar22 + iVar46 + iVar23;
                      iVar23 = FUN_005fd790(uVar42 & 0xffffffff,iVar46);
                      *(int *)((int)__dest + 0x17c) = iVar23;
                      if (iVar23 == 0) {
LAB_005f3700:
                        uVar41 = (uint)param_3 & 0x4000000;
                        if (*(int *)((int)__dest + 0xd0) != 0) {
                          FUN_005f516c(*(int *)((int)__dest + 0xd0));
                        }
                        goto LAB_005f277c;
                      }
                      iVar23 = *(int *)((int)__dest + 0x28);
                      *(uint *)((int)__dest + 0x20) = *(uint *)((int)__dest + 0x20) | 0x8000000;
                      pcVar3 = (code *)**(undefined4 **)((int)__dest + 0x19c);
                      puVar12[5] = uVar16;
                      (*pcVar3)(iVar19,0,0,iVar23 + 8,iVar18);
                      uVar17 = *(undefined4 *)((int)__dest + 0x17c);
                      uVar41 = **(uint **)((int)__dest + 0x158);
                      pcVar3 = (code *)**(undefined4 **)((int)__dest + 0x194);
                      puVar12[5] = puVar12[5];
                      (*pcVar3)(iVar19,0,uVar41 & 0xfffffffe,uVar17,iVar24 + 8);
                      uVar43 = puVar12[5];
                      iVar18 = (int)uVar43;
                      uVar17 = *(undefined4 *)(iVar18 + -0x7eec);
                      uVar10 = *(undefined4 *)(iVar18 + -0x7f04);
                      FUN_005eb0f8(pcVar32 + 0x3f4,uVar17,uVar10,0x83b);
                      pcVar3 = (code *)**(undefined4 **)((int)__dest + 0x1a4);
                      puVar12[5] = uVar43;
                      (*pcVar3)(iVar19);
                      uVar16 = puVar12[5];
                      uVar28 = FUN_005eb2e0(pcVar32 + 0x3f4,uVar17,uVar10,0x841);
                      *(undefined4 *)((int)__dest + 0x1e4) = 0;
                    }
                  }
                  else {
                    uVar41 = **(uint **)((int)__dest + 0x158);
                    *(uint *)((int)__dest + 0x20) = *(uint *)((int)__dest + 0x20) | 0x8000000;
                    *(uint *)((int)__dest + 0x17c) = (uVar41 & 0xfffffffe) + param_1;
                  }
                  *(undefined4 *)((int)__dest + 0xc) = 0xffffffff;
                  if (*(uint *)((int)__dest + 0x14) == 0) {
                    *(undefined4 *)((int)__dest + 0x47c) = 2000;
                  }
                  else {
                    *(int *)((int)__dest + 0x47c) =
                         (int)(((ulonglong)*(uint *)((int)__dest + 0x18) * 2000) /
                              (ulonglong)*(uint *)((int)__dest + 0x14));
                  }
                  *(undefined4 *)((int)__dest + 0x114) = 1;
                  iVar18 = FUN_005f5090(uVar28);
                  *(int *)((int)__dest + 0x49c) = iVar18 - *(int *)((int)__dest + 0x49c);
                  *(undefined4 *)(*(int *)((int)__dest + 0x154) + 0x3c) = 0x10000;
                  *(undefined4 *)((int)__dest + 0x124) = 0;
                  if ((*(int *)((int)__dest + 0x38) == 0) || ((bool)(bVar48 >> 1 & 1))) {
LAB_005f2a30:
                    iVar18 = 0;
                  }
                  else {
                    uVar41 = 0;
                    uVar43 = 0;
                    do {
                      if (0 < *(int *)((int)__dest + 0x38)) {
                        iVar19 = 0;
                        iVar23 = 0;
                        iVar18 = 4;
                        if (**(int **)((int)__dest + 0x178) != *(int *)uVar39) {
                          do {
                            iVar23 = iVar18;
                            iVar19 = iVar19 + 1;
                            if (*(int *)((int)__dest + 0x38) <= iVar19) goto LAB_005f2a18;
                            iVar18 = iVar23 + 4;
                          } while (*(int *)(*(int *)((int)__dest + 0x178) + iVar23) !=
                                   *(int *)uVar39);
                        }
                        uVar26 = 0;
                        iVar18 = *(int *)((int)__dest + 0x124) * 4;
                        *(int *)((int)__dest + 0x124) = *(int *)((int)__dest + 0x124) + 1;
                        *(int *)(*(int *)((int)__dest + 0xec) + iVar18) = iVar19;
                        uVar4 = *(uint *)(iVar23 + *(int *)((int)__dest + 0x174));
                        if (-1 < (int)uVar4) {
                          uVar26 = uVar4 >> 0x1c & 1;
                        }
                        lVar30 = FUN_005f533c(uVar4 & 0xffff,(uVar4 >> 0x1d & 1) + 1,uVar26);
                        *(int *)((int)puVar12 + iVar18 + 0x118) = (int)lVar30;
                        uVar4 = *(uint *)(iVar23 + *(int *)((int)__dest + 0x170));
                        uVar43 = uVar43 + (((((ulonglong)uVar4 & 0x3fffffff) * 4 + (ulonglong)uVar4
                                            << 0x20) >> 0x22) + 0xff & 0xffffff00) + lVar30 + 0x10;
                      }
LAB_005f2a18:
                      uVar41 = uVar41 + 1;
                      uVar39 = uVar39 + 4;
                    } while (uVar40 != uVar41);
                    if ((int)uVar43 == 0) goto LAB_005f2a30;
                    iVar18 = *(int *)((int)__dest + 0x468);
                    iVar19 = FUN_005fd778(uVar42 & 0xffffffff);
                    *(int *)((int)__dest + 0x468) = (int)uVar43 + iVar18 + iVar19;
                    iVar18 = FUN_005fd790(uVar42 & 0xffffffff,uVar43 & 0xffffffff);
                    *(int *)((int)__dest + 0x15c) = iVar18;
                    if (iVar18 == 0) {
                      *(undefined4 *)((int)__dest + 0x124) = 0;
                    }
                  }
                  iVar19 = *(int *)((int)uVar16 + -0x7f18);
                  uVar43 = (ulonglong)*(uint *)((int)uVar16 + -0x7e2c);
                  uVar39 = 0;
                  iVar23 = 0;
                  puVar12[0xfd] = uVar43;
                  *(undefined4 *)(iVar19 + 0xc) = 1;
                  *(undefined4 *)(pcVar32 + 0x114) = 0;
                  while( true ) {
                    iVar22 = (int)uVar16;
                    if ((ulonglong)*(uint *)((int)__dest + 0x124) <= (uVar39 & 0xffffffff)) break;
                    iVar24 = *(int *)((int)__dest + 0x154);
                    iVar46 = (int)((uVar39 & 0xffffffff) << 2);
                    *(int *)(puVar12 + 0xfc) = iVar46;
                    *(undefined4 *)(iVar24 + iVar23 + 0xc) = 0;
                    iVar24 = *(int *)(*(int *)((int)__dest + 0xec) + iVar46) * 4;
                    uVar40 = *(uint *)(*(int *)((int)__dest + 0x174) + iVar24);
                    if ((((int)uVar40 < 0) || ((uVar40 & 0x10000000) != 0)) &&
                       (*(int *)(pcVar32 + 0x5e0) != 0)) {
                      uVar42 = (ulonglong)uVar40 & 0xffff;
                      if (uVar42 < 0x3e801) {
                        lVar30 = ((ulonglong)(uVar40 >> 0x1d) & 1) + 1;
                        uVar40 = *(uint *)(*(int *)((int)__dest + 0x170) + iVar24);
                        uVar28 = ((((ulonglong)uVar40 & 0x3fffffff) * 4 + (ulonglong)uVar40 << 0x20)
                                 >> 0x22) + 0xff & 0xffffff00;
                        uVar25 = uVar42;
                        if ((*(int *)((int)puVar12 + 0x2ec) != 0) && (*(int *)(puVar12 + 0x5e) != 0)
                           ) {
                          puVar12[0xfe] = (longlong)*(int *)((int)puVar12 + 0x2ec);
                          puVar12[0xfe] = (longlong)*(int *)((int)puVar12 + 0x77c);
                          puVar12[0xfe] = (longlong)*(int *)(puVar12 + 0x5e);
                          puVar12[0xfe] = (longlong)(int)uVar42;
                          puVar12[0xfe] = (longlong)*(int *)(puVar12 + 0xef);
                          uVar25 = (ulonglong)*(uint *)(puVar12 + 0xfa);
                          if (0x3e800 < (ulonglong)*(uint *)(puVar12 + 0xfa)) {
                            uVar25 = 0x3e800;
                          }
                        }
                        if (uVar28 <= (ulonglong)
                                      ((longlong)(int)lVar30 * (longlong)(int)(uVar42 << 5) << 0x20)
                                      >> 0x23) {
                          uVar17 = *(undefined4 *)(iVar22 + -0x7ee8);
                          uVar10 = *(undefined4 *)(iVar22 + -0x7f04);
                          FUN_005eb0f8(uVar43,uVar17,uVar10,0x8c4);
                          iVar22 = *(int *)((int)__dest + 0x154);
                          uVar21 = *(undefined4 *)((int)__dest + 0x20);
                          pcVar3 = (code *)**(undefined4 **)(pcVar32 + 0x5e0);
                          puVar12[5] = uVar16;
                          iVar22 = (*pcVar3)(iVar23 + iVar22,uVar25,0x10,(int)lVar30,uVar21,__dest);
                          uVar16 = puVar12[5];
                          FUN_005eb2e0(uVar43,uVar17,uVar10,0x8cc);
                          if (iVar22 != 0) {
                            *(int *)(iVar23 + *(int *)((int)__dest + 0x154) + 0x1c) = (int)uVar42;
                            iVar22 = *(int *)((int)__dest + 0x154);
                            if (*(int *)(iVar23 + iVar22 + 0x30) == 0) {
                              *(undefined4 *)(iVar23 + iVar22 + 0x30) = 0xffffffff;
                              iVar22 = *(int *)((int)__dest + 0x154);
                            }
                            *(int *)(iVar23 + iVar22 + 8) = (int)uVar28 + 0x10;
                            *(int *)(iVar23 + *(int *)((int)__dest + 0x154) + 0xc) = iVar18;
                            iVar22 = iVar23 + *(int *)((int)__dest + 0x154);
                            *(undefined4 *)(iVar22 + 0x54) = 0;
                            uVar40 = 0x2ee - *(int *)(iVar22 + 0x38);
                            iVar24 = iVar23 + *(int *)((int)__dest + 0x154);
                            iVar18 = iVar18 + *(int *)(iVar22 + 8);
                            *(int *)(iVar24 + 0x10) = *(int *)(iVar24 + 0xc) + *(int *)(iVar24 + 8);
                            puVar36 = (undefined4 *)(iVar23 + *(int *)((int)__dest + 0x154));
                            *puVar36 = puVar36[3];
                            iVar22 = iVar23 + *(int *)((int)__dest + 0x154);
                            *(undefined4 *)(iVar22 + 0x18) = *(undefined4 *)(iVar22 + 0xc);
                            *(uint *)(iVar23 + *(int *)((int)__dest + 0x154) + 0x48) =
                                 (uint)((uVar25 * (longlong)(int)(uVar40 & (int)~uVar40 >> 0x1f) *
                                        lVar30 * 2) / 1000) & 0xfffffffc;
                            iVar22 = *(int *)((int)__dest + 0x154);
                            iVar24 = iVar23 + iVar22;
                            if (*(int *)(iVar24 + 8) - *(int *)(iVar24 + 0x48) < 0x10) {
                              *(int *)(iVar24 + 0x48) = *(int *)(iVar24 + 8) + -0x10;
                              iVar22 = *(int *)((int)__dest + 0x154);
                            }
                            uVar41 = 0;
                            uVar40 = *(uint *)(*(int *)((int)__dest + 0x174) +
                                              *(int *)(*(int *)(puVar12 + 0xfc) +
                                                      *(int *)((int)__dest + 0xec)) * 4);
                            if (-1 < (int)uVar40) {
                              uVar41 = uVar40 >> 0x1c & 1;
                            }
                            uVar21 = FUN_005f5cd0(iVar18,uVar40 & 0xffff,lVar30,uVar41);
                            *(undefined4 *)(iVar23 + iVar22 + 0x14) = uVar21;
                            FUN_005eb0f8(puVar12[0xfd],uVar17,uVar10,0x8f5);
                            iVar22 = iVar23 + *(int *)((int)__dest + 0x154);
                            if (*(int *)(iVar22 + 0x14) == 0) {
                              pcVar3 = (code *)**(undefined4 **)(iVar22 + 0x178);
                              puVar12[5] = uVar16;
                              (*pcVar3)();
                              uVar16 = puVar12[5];
                              *(undefined4 *)(iVar23 + *(int *)((int)__dest + 0x154) + 0xc) = 0;
                            }
                            FUN_005eb2e0(puVar12[0xfd],uVar17,uVar10,0x900);
                            iVar22 = iVar23 + *(int *)((int)__dest + 0x154);
                            iVar18 = iVar18 + *(int *)((int)puVar12 +
                                                      *(int *)(puVar12 + 0xfc) + 0x118);
                            uVar17 = FUN_005f5384(*(undefined4 *)(iVar22 + 0x14));
                            *(undefined4 *)(iVar22 + 4) = uVar17;
                            *(int *)(iVar23 + *(int *)((int)__dest + 0x154) + 0x40) =
                                 *(int *)((int)__dest + 8) -
                                 (int)((((ulonglong)*(uint *)((int)__dest + 0x4a0) & 0x7fffffff) * 2
                                        + (ulonglong)*(uint *)((int)__dest + 0x4a0) & 0xffffffff) /
                                      (((ulonglong)*(uint *)((int)__dest + 0x4a4) & 0x3fffffff) << 2
                                      ));
                          }
                        }
                      }
                    }
                    iVar22 = *(int *)((int)__dest + 0x154);
                    if (*(int *)(iVar23 + iVar22 + 0x3c) == 0) {
                      *(undefined4 *)(iVar23 + iVar22 + 0x3c) = 0x10000;
                      iVar22 = *(int *)((int)__dest + 0x154);
                    }
                    if (*(int *)(iVar23 + iVar22 + 0xc) == 0) {
                      lVar30 = (ulonglong)*(uint *)((int)__dest + 0x124) - 1;
                      iVar22 = *(int *)(puVar12 + 0xfc) + *(int *)((int)__dest + 0xec);
                      *(int *)((int)__dest + 0x124) = (int)lVar30;
                      FUN_005c6094(iVar22,iVar22 + 4,(lVar30 - uVar39 & 0x3fffffff) << 2);
                    }
                    else {
                      uVar39 = uVar39 + 1;
                      iVar23 = iVar23 + 0x180;
                    }
                  }
                  if (*(uint *)((int)__dest + 0x124) == 0) {
LAB_005f2c00:
                    piVar44 = *(int **)(iVar22 + -0x7f14);
                  }
                  else {
                    uVar17 = *(undefined4 *)(iVar22 + -0x7ee8);
                    uVar10 = *(undefined4 *)(iVar22 + -0x7f04);
                    puVar13 = pcVar32 + 0x47c;
                    *(undefined4 *)((int)__dest + 0x110) = 1;
                    FUN_005eb0f8(puVar13,uVar17,uVar10,0x924);
                    *(int *)(pcVar32 + 0x5dc) =
                         *(int *)((int)__dest + 0x124) + *(int *)(pcVar32 + 0x5dc);
                    FUN_005eb2e0(puVar13,uVar17,uVar10,0x92a);
                    iVar18 = *(int *)(*(int *)((int)__dest + 0x154) + 0x4c);
                    if (iVar18 < 1) {
                      iVar23 = (int)__dest + 0x3b0;
                      iVar18 = FUN_005fc508(iVar23,1);
                      if (iVar18 == 0) {
                        piVar44 = *(int **)(iVar22 + -0x7f14);
                        *(undefined4 *)(*(int *)((int)__dest + 0x154) + 0x4c) = 1;
                      }
                      else {
                        piVar44 = *(int **)(iVar22 + -0x7f14);
                        iVar18 = *piVar44;
                        if (iVar18 != 0) {
                          uVar21 = *(undefined4 *)(iVar22 + -0x7ef0);
                          pcVar3 = (code *)**(undefined4 **)(iVar18 + 0x5c);
                          puVar12[5] = uVar16;
                          (*pcVar3)(iVar18,iVar23,pcVar32 + 0x630,uVar21);
                          uVar16 = puVar12[5];
                        }
                        if (*(int *)(pcVar32 + 0x5ec) == 0) {
                          *(undefined4 *)(iVar19 + 0x10) = 0xd;
                        }
                        FUN_005eb0f8(puVar13,uVar17,uVar10,0x22c);
                        iVar18 = (int)uVar16;
                        if (*(int *)(pcVar32 + 0x1f0) == 0) {
                          *(undefined4 *)(pcVar32 + 0x4fc) = 0;
                          iVar22 = FUN_005fbfd4(pcVar32 + 0x500,0,0x4000);
                          if (iVar22 != 0) {
                            puVar13 = pcVar32 + 500;
                            iVar22 = FUN_005fc620(puVar13,*(undefined4 *)(iVar18 + -0x7e48),0x8000,0
                                                  ,0,*(undefined4 *)(iVar18 + -0x7edc));
                            if (iVar22 != 0) {
                              *(int *)(pcVar32 + 0x540) = *(int *)(pcVar32 + 0x540) + 1;
                              *(undefined4 *)(pcVar32 + 0x1f0) = 1;
                              FUN_005fccc8(puVar13,0x10);
                              FUN_005fccc8(puVar13,0x10);
                              goto LAB_005f2fac;
                            }
                            FUN_005fc098(pcVar32 + 0x500);
                          }
                          FUN_005eb2e0(pcVar32 + 0x47c,uVar17,uVar10,0x251);
                          FUN_005fc490(iVar23);
                          *(undefined4 *)(*(int *)((int)__dest + 0x154) + 0x4c) = 1;
                        }
                        else {
                          *(int *)(pcVar32 + 0x540) = *(int *)(pcVar32 + 0x540) + 1;
LAB_005f2fac:
                          FUN_005eb2e0(pcVar32 + 0x47c,uVar17,uVar10,0x251);
                          FUN_005ec3c8();
                          uVar17 = *(undefined4 *)(iVar18 + -0x7ee4);
                          FUN_005eb0f8(pcVar32 + 0x54c,uVar17,uVar10,0x104);
                          for (pvVar20 = *(void **)(pcVar32 + 0x5ec); pvVar20 != (void *)0x0;
                              pvVar20 = *(void **)((int)pvVar20 + 0xe4)) {
                            if (__dest == pvVar20) goto LAB_005f3008;
                          }
                          *(undefined4 *)((int)__dest + 0xe4) = *(undefined4 *)(pcVar32 + 0x5ec);
                          *(void **)(pcVar32 + 0x5ec) = __dest;
LAB_005f3008:
                          FUN_005eb2e0(pcVar32 + 0x54c,uVar17,uVar10,0x115);
                          *(undefined4 *)((int)__dest + 0x164) = 1;
                        }
                        iVar18 = *(int *)(*(int *)((int)__dest + 0x154) + 0x4c);
                        if ((iVar18 < 0) && (uVar40 = -iVar18, uVar40 < *(uint *)(iVar19 + 0x10))) {
                          *(uint *)(iVar19 + 0x10) = uVar40;
                        }
                      }
                    }
                    else {
                      if (iVar18 != 2) goto LAB_005f2c00;
                      iVar18 = FUN_005fc508((int)__dest + 0x3b0,1);
                      if (iVar18 == 0) {
                        FUN_005ec3c8();
                        uVar17 = *(undefined4 *)(iVar22 + -0x7ee4);
                        FUN_005eb0f8(pcVar32 + 0x54c,uVar17,uVar10,0x104);
                        for (pvVar20 = *(void **)(pcVar32 + 0x5ec); pvVar20 != (void *)0x0;
                            pvVar20 = *(void **)((int)pvVar20 + 0xe4)) {
                          if (__dest == pvVar20) goto LAB_005f2ec8;
                        }
                        *(undefined4 *)((int)__dest + 0xe4) = *(undefined4 *)(pcVar32 + 0x5ec);
                        *(void **)(pcVar32 + 0x5ec) = __dest;
LAB_005f2ec8:
                        FUN_005eb2e0(pcVar32 + 0x54c,uVar17,uVar10,0x115);
                        piVar44 = *(int **)(iVar22 + -0x7f14);
                        *(undefined4 *)((int)__dest + 0x164) = 1;
                      }
                      else {
                        piVar44 = *(int **)(iVar22 + -0x7f14);
                        iVar18 = *piVar44;
                        if (iVar18 != 0) {
                          uVar17 = *(undefined4 *)(iVar22 + -0x7ef0);
                          pcVar3 = (code *)**(undefined4 **)(iVar18 + 0x5c);
                          puVar12[5] = uVar16;
                          (*pcVar3)(iVar18,(int)__dest + 0x3b0,pcVar32 + 0x634,uVar17);
                          uVar16 = puVar12[5];
                        }
                        FUN_005ec3c8();
                        uVar17 = *(undefined4 *)((int)uVar16 + -0x7ee4);
                        FUN_005eb0f8(pcVar32 + 0x54c,uVar17,uVar10,0x104);
                        for (pvVar20 = *(void **)(pcVar32 + 0x5ec); pvVar20 != (void *)0x0;
                            pvVar20 = *(void **)((int)pvVar20 + 0xe4)) {
                          if (__dest == pvVar20) goto LAB_005f2e60;
                        }
                        *(undefined4 *)((int)__dest + 0xe4) = *(undefined4 *)(pcVar32 + 0x5ec);
                        *(void **)(pcVar32 + 0x5ec) = __dest;
LAB_005f2e60:
                        FUN_005eb2e0(pcVar32 + 0x54c,uVar17,uVar10,0x115);
                        *(undefined4 *)((int)__dest + 0x164) = 1;
                      }
                    }
                  }
                  iVar18 = (int)uVar16;
                  uVar17 = *(undefined4 *)(iVar18 + -0x7e40);
                  uVar10 = *(undefined4 *)(iVar18 + -0x7e3c);
                  uVar21 = *(undefined4 *)(iVar18 + -0x7e34);
                  uVar11 = *(undefined4 *)(iVar18 + -0x7e38);
                  *(undefined4 *)((int)__dest + 0x1b4) = *(undefined4 *)(iVar18 + -0x7e44);
                  *(undefined4 *)((int)__dest + 0x1c0) = uVar17;
                  *(undefined4 *)((int)__dest + 0x1b0) = uVar10;
                  *(undefined4 *)((int)__dest + 0x1b8) = uVar11;
                  *(undefined4 *)((int)__dest + 0x1bc) = uVar21;
                  if (((*(uint *)((int)__dest + 0x20) & 0x8000000) != 0) ||
                     (*(int *)((int)__dest + 0x17c) != 0)) goto LAB_005f2c48;
                  iVar23 = (int)__dest + 0x330;
                  iVar19 = FUN_005fc508(iVar23,2);
                  if (iVar19 == 0) {
                    *(uint *)((int)__dest + 0x20) = *(uint *)((int)__dest + 0x20) | 0x8000000;
                  }
                  else {
                    uVar17 = *(undefined4 *)(iVar18 + -0x7eec);
                    uVar10 = *(undefined4 *)(iVar18 + -0x7f04);
                    FUN_005eb0f8(pcVar32 + 0x3f4,uVar17,uVar10,0x528);
                    if (*(int *)(pcVar32 + 0x1ac) == 0) {
                      *(undefined4 *)(pcVar32 + 0x474) = 0;
                      iVar19 = FUN_005fbfd4(pcVar32 + 0x1b0,0,0x4000);
                      if (iVar19 != 0) {
                        iVar19 = FUN_005fc620(pcVar32 + 0x2f4,*(undefined4 *)(iVar18 + -0x7e30),
                                              0x8000,0,0,*(undefined4 *)(iVar18 + -0x7e94));
                        if (iVar19 != 0) {
                          *(int *)(pcVar32 + 0x478) = *(int *)(pcVar32 + 0x478) + 1;
                          *(undefined4 *)(pcVar32 + 0x1ac) = 1;
                          FUN_005fccc8(pcVar32 + 0x2f4,0x10);
                          goto LAB_005f3830;
                        }
                        FUN_005fc098(pcVar32 + 0x1b0);
                      }
                      FUN_005eb2e0(pcVar32 + 0x3f4,uVar17,uVar10,0x54c);
                      FUN_005fc490(iVar23);
                      *(uint *)((int)__dest + 0x20) = *(uint *)((int)__dest + 0x20) | 0x8000000;
                    }
                    else {
                      *(int *)(pcVar32 + 0x478) = *(int *)(pcVar32 + 0x478) + 1;
LAB_005f3830:
                      FUN_005eb2e0(pcVar32 + 0x3f4,uVar17,uVar10,0x54c);
                      iVar19 = *piVar44;
                      if (iVar19 != 0) {
                        uVar17 = *(undefined4 *)(iVar18 + -0x7f08);
                        pcVar3 = (code *)**(undefined4 **)(iVar19 + 0x5c);
                        puVar12[5] = uVar16;
                        (*pcVar3)(iVar19,iVar23,pcVar32 + 0x638,uVar17);
                        uVar16 = puVar12[5];
                      }
                    }
                  }
                  if ((*(uint *)((int)__dest + 0x20) & 0x8000000) == 0) {
                    FUN_005ec3c8();
                    uVar17 = *(undefined4 *)((int)uVar16 + -0x7ee4);
                    uVar10 = *(undefined4 *)((int)uVar16 + -0x7f04);
                    FUN_005eb0f8(pcVar32 + 0x54c,uVar17,uVar10,0x104);
                    for (pvVar20 = *(void **)(pcVar32 + 0x5ec); pvVar20 != (void *)0x0;
                        pvVar20 = *(void **)((int)pvVar20 + 0xe4)) {
                      if (__dest == pvVar20) goto LAB_005f3118;
                    }
                    *(undefined4 *)((int)__dest + 0xe4) = *(undefined4 *)(pcVar32 + 0x5ec);
                    *(void **)(pcVar32 + 0x5ec) = __dest;
LAB_005f3118:
                    FUN_005eb2e0(pcVar32 + 0x54c,uVar17,uVar10,0x115);
                    *(undefined4 *)((int)__dest + 0x164) = 1;
                  }
LAB_005f2c48:
                  iVar18 = FUN_005fc508((int)__dest + 0x2b0,2);
                  if (iVar18 == 0) {
                    trapWord(0x1f,lVar49,lVar49);
                  }
                  iVar18 = *piVar44;
                  if (iVar18 != 0) {
                    uVar17 = *(undefined4 *)((int)uVar16 + -0x7ef4);
                    pcVar3 = (code *)**(undefined4 **)(iVar18 + 0x5c);
                    puVar12[5] = uVar16;
                    (*pcVar3)(iVar18,(int)__dest + 0x2b0,pcVar32 + 0x63c,uVar17);
                    uVar16 = puVar12[5];
                  }
                  if (*(int *)((int)__dest + 0x17c) == 0) {
                    if ((param_3 & 0x200000) == 0) {
                      pcVar3 = (code *)**(undefined4 **)((int)__dest + 0x1a0);
                      puVar12[5] = uVar16;
                      iVar18 = (*pcVar3)((int)__dest + 400);
                      uVar43 = puVar12[5];
                      if (iVar18 != 0) {
                        *(void **)(pcVar32 + 0x610) = __dest;
                        do {
                          pcVar3 = (code *)**(undefined4 **)((int)__dest + 0x1a0);
                          puVar12[5] = uVar43;
                          iVar18 = (*pcVar3)((int)__dest + 400);
                          uVar43 = puVar12[5];
                        } while (iVar18 != 0);
                      }
                    }
                    if (*(int *)(pcVar32 + 0x1ac) != 0) {
                      FUN_005fc190(pcVar32 + 0x1b0,1);
                    }
                  }
                  *(undefined4 *)((int)__dest + 0x4d8) = 0xf0000000;
                  FUN_005eda28(__dest,1);
                  if (((*(int *)((int)__dest + 0x124) != 0) && (*(int *)(pcVar32 + 0x1f0) != 0)) &&
                     (*(int *)(*(int *)((int)__dest + 0x154) + 0x4c) < 1)) {
                    FUN_005fc190(pcVar32 + 0x500,1);
                  }
                  uVar17 = FUN_005fbef8(pcVar32 + 0x640,1);
                  *(undefined4 *)((int)__dest + 0x160) = uVar17;
                  return __dest;
                }
                *(uint *)((int)puVar12 + 0xb4) = uVar4;
                *(uint *)((int)puVar12 + 0xa4) = *(int *)((int)__dest + 0x168) + 7U & 0xfffffff8;
                *(uint *)(puVar12 + 0x15) = *(int *)((int)__dest + 0x16c) + 7U & 0xfffffff8;
                *(uint *)((int)puVar12 + 0xac) =
                     (*(int *)((int)__dest + 0x168) + 1U >> 1) + 7 & 0xfffffff8;
                iVar18 = *(int *)((int)__dest + 0x16c);
                *(undefined4 *)(puVar12 + 0x1a) = 1;
                *(undefined4 *)(puVar12 + 0x17) = 1;
                *(undefined4 *)((int)puVar12 + 0xc4) = 1;
                *(uint *)(puVar12 + 0x16) = (iVar18 + 1U >> 1) + 7 & 0xfffffff8;
                uVar26 = *(uint *)((int)__dest + 0x20);
                *(uint *)((int)puVar12 + 0xe4) = uVar4;
                *(uint *)((int)puVar12 + 0xbc) = uVar4;
                *(uint *)((int)puVar12 + 0xdc) = uVar26 >> 0x14 & 1;
                *(uint *)(puVar12 + 0x19) = uVar4;
                *(uint *)((int)puVar12 + 0xd4) = uVar4;
                *(uint *)(puVar12 + 0x1c) = uVar4;
                *(uint *)(puVar12 + 0x18) = uVar4;
                *(uint *)((int)puVar12 + 0xcc) = uVar4;
                *(uint *)(puVar12 + 0x1b) = uVar4;
                if (*(int *)((int)__dest + 8) == 1) {
                  *(undefined4 *)(puVar12 + 0x14) = 1;
                }
                else {
                  *(undefined4 *)(puVar12 + 0x14) = 2;
                  puVar12[0x1d] = puVar12[0x17];
                  puVar12[0x1e] = puVar12[0x18];
                  puVar12[0x1f] = puVar12[0x19];
                  puVar12[0x20] = puVar12[0x1a];
                  puVar12[0x21] = puVar12[0x1b];
                  puVar12[0x22] = puVar12[0x1c];
                }
                bVar33 = false;
                lVar30 = uVar43 - 0x7d8;
                uVar27 = uVar43 - 0x7b4;
                lVar34 = uVar43 - 0x7c0;
                uVar25 = 0;
                do {
                  uVar50 = uVar25;
                  piVar44 = (int *)lVar34;
                  puVar12[0xfb] = uVar27 & 0xffffffff;
                  piVar45 = (int *)lVar30;
                  lVar30 = lVar30 + 0x30;
                  uVar27 = uVar27 + 0x30;
                  lVar34 = lVar34 + 0x30;
                  uVar4 = *(int *)((int)puVar12 + 0xac) + 0xfU & 0xfffffff0;
                  if (*piVar45 != 0) {
                    FUN_005fd700(uVar42,(uVar50 & 0x3ffffff) * 0x40 + (uVar50 & 0xfffffff) * -0x10 +
                                        lVar49 + 0xbc & 0xfffffffc,
                                 *(int *)((int)puVar12 + 0xa4) * *(int *)(puVar12 + 0x15));
                    bVar33 = true;
                    piVar45[2] = *(int *)((int)puVar12 + 0xa4);
                  }
                  if (piVar45[3] != 0) {
                    FUN_005fd700(uVar42,(uVar50 & 0x3ffffff) * 0x40 + (uVar50 & 0xfffffff) * -0x10 +
                                        lVar49 + 200 & 0xfffffff8,uVar4 * *(int *)(puVar12 + 0x16));
                    bVar33 = true;
                    piVar45[5] = uVar4;
                  }
                  if (*piVar44 != 0) {
                    FUN_005fd700(uVar42,(uVar50 & 0x3ffffff) * 0x40 + (uVar50 & 0xfffffff) * -0x10 +
                                        lVar49 + 0xd4 & 0xfffffffc,uVar4 * *(int *)(puVar12 + 0x16))
                    ;
                    bVar33 = true;
                    piVar44[2] = uVar4;
                  }
                  uVar25 = uVar50 + 1;
                  uVar28 = uVar42;
                  if (*(int *)puVar12[0xfb] != 0) {
                    uVar28 = FUN_005fd700(uVar42,(uVar50 & 0x3ffffff) * 0x40 +
                                                 (uVar50 & 0xfffffff) * -0x10 + lVar49 + 0xe0 &
                                                 0xfffffff0,
                                          *(int *)((int)puVar12 + 0xa4) * *(int *)(puVar12 + 0x15));
                    bVar33 = true;
                    *(undefined4 *)((int)puVar12[0xfb] + 8) = *(undefined4 *)((int)puVar12 + 0xa4);
                  }
                } while ((int)uVar25 < *(int *)(puVar12 + 0x14));
                if ((int)uVar25 < 2) {
                  uVar27 = 2 - uVar25 & 0xffffffff;
                  lVar30 = (uVar25 & 0x3ffffff) * 0x40 + (uVar25 & 0xfffffff) * -0x10 + lVar49 +
                           0xbc;
                  if (2 < (int)uVar50 + 2) {
                    uVar27 = 1;
                  }
                  do {
                    puVar36 = (undefined4 *)lVar30;
                    *puVar36 = 0;
                    puVar36[3] = 0;
                    puVar36[6] = 0;
                    uVar27 = uVar27 - 1;
                    lVar30 = lVar30 + 0x30;
                  } while (uVar27 != 0);
                }
                if (!bVar33) goto LAB_005f2548;
                iVar18 = *(int *)((int)__dest + 0x468);
                iVar19 = FUN_005fd778(uVar42 & 0xffffffff);
                *(int *)((int)__dest + 0x468) = iVar19 + iVar18 + 0x78;
                pvVar20 = (void *)FUN_005fd790(uVar42 & 0xffffffff,0x78);
                *(void **)((int)__dest + 0x4e4) = pvVar20;
                if (pvVar20 != (void *)0x0) {
                  *(void **)((int)__dest + 0xd0) = pvVar20;
                  pvVar20 = libc::memcpy(pvVar20,puVar12 + 0x14,0x78);
                  uVar28 = (ulonglong)(int)pvVar20;
                  goto LAB_005f2548;
                }
              }
LAB_005f277c:
              FUN_005f516c(__dest);
            }
            pcVar31 = *(char **)((int)uVar16 + -0x7e68);
            lVar49 = 0xfe;
            *pcVar32 = 0x4f;
            do {
              cVar2 = *pcVar31;
              pcVar31 = pcVar31 + 1;
              pcVar37 = pcVar37 + 1;
              if (cVar2 == '\0') {
                if (uVar41 != 0) {
                  return (void *)0x0;
                }
                goto LAB_005f2240;
              }
              *pcVar37 = *pcVar31;
              lVar49 = lVar49 + -1;
            } while (lVar49 != 0);
            bVar1 = uVar41 == 0;
            goto LAB_005f21c4;
          }
        }
      }
      pcVar31 = *(char **)(iVar19 + -0x7e6c);
      lVar49 = 0xfe;
      *pcVar32 = 0x54;
      do {
        cVar2 = *pcVar31;
        pcVar31 = pcVar31 + 1;
        pcVar37 = pcVar37 + 1;
        if (cVar2 == '\0') goto joined_r0x005f19e4;
        *pcVar37 = *pcVar31;
        lVar49 = lVar49 + -1;
      } while (lVar49 != 0);
    }
  }
  else {
    pcVar31 = *(char **)(iVar19 + -0x7e74);
    lVar49 = 0xfe;
    *pcVar32 = 0x4e;
    do {
      cVar2 = *pcVar31;
      pcVar31 = pcVar31 + 1;
      pcVar37 = pcVar37 + 1;
      if (cVar2 == '\0') goto joined_r0x005f19e4;
      *pcVar37 = *pcVar31;
      lVar49 = lVar49 + -1;
    } while (lVar49 != 0);
  }
LAB_005f21c4:
  *pcVar37 = '\0';
  if (!bVar1) {
    return (void *)0x0;
  }
LAB_005f2240:
  uVar17 = *(undefined4 *)((int)uVar16 + -0x7eec);
  uVar10 = *(undefined4 *)((int)uVar16 + -0x7f04);
  FUN_005eb0f8(pcVar32 + 0x3f4,uVar17,uVar10,0x70f);
  pcVar3 = (code *)**(undefined4 **)((int)puVar12 + 0x47c);
  puVar12[5] = uVar16;
  (*pcVar3)(uVar43 - 0x428);
  FUN_005eb2e0(pcVar32 + 0x3f4,uVar17,uVar10,0x715);
  return (void *)0x0;
joined_r0x005f19e4:
  if (!bVar1) {
    return (void *)0x0;
  }
  goto LAB_005f2240;
}



//==== 005f3984  ns=Global  size=0xb8
// sig: undefined FUN_005f3984(void)
// callers(1): 004d4dd0 FUN_004d4dd0
// callees(1): 005f1788 FUN_005f1788

undefined4 FUN_005f3984(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined1 local_70 [56];
  
  puVar2 = PTR_DAT_0071a410;
  puVar1 = PTR_DAT_0071a40c;
  *(undefined4 *)(PTR_DAT_0071a410 + 8) = 0xffffffff;
  *(undefined4 *)puVar2 = 0xffffffff;
  *(undefined4 *)(puVar2 + 4) = 0xffffffff;
  *(undefined4 *)(puVar1 + 0x110) = 0;
  *(undefined8 *)(puVar1 + 0x108) = 0;
  uVar3 = FUN_005f1788(param_1,local_70,param_2);
  return uVar3;
}



//==== 005f3a3c  ns=Global  size=0x38
// sig: undefined FUN_005f3a3c(void)
// callers(0): 
// callees(0): 

uint FUN_005f3a3c(undefined8 param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = (param_2 + 0x1ffffU & 0xfffe0000) + 0x1000;
  if (0x40fff < uVar1) {
    return uVar1;
  }
  return 0x41000;
}



//==== 005f3a74  ns=Global  size=0xf8
// sig: undefined FUN_005f3a74(void)
// callers(0): 
// callees(0): 

void FUN_005f3a74(int param_1,int param_2,int param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  
  if (*(undefined4 **)(param_1 + 0x20) != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)(param_1 + 0x20))(param_1);
  }
  uVar1 = param_2 + 0xfffU & 0xfffff000;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(uint *)(param_1 + 0xac) = uVar1;
  *(uint *)(param_1 + 0x90) = uVar1;
  uVar2 = param_3 - (uVar1 - param_2) & 0xfffe0000;
  *(uint *)(param_1 + 0x94) = uVar1 + uVar2;
  *(uint *)(param_1 + 0x60) = uVar2;
  *(uint *)(param_1 + 0xa8) = uVar2;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x9c) = param_4;
  if (*(undefined4 **)(param_1 + 0x28) != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)(param_1 + 0x28))(param_1);
  }
  return;
}



//==== 005f3b70  ns=Global  size=0x14c
// sig: undefined FUN_005f3b70(void)
// callers(0): 
// callees(2): 005cf4cc FUN_005cf4cc; 005cf5b8 FUN_005cf5b8

undefined4 FUN_005f3b70(undefined4 *param_1,undefined4 param_2,ulonglong param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  longlong lVar7;
  int iVar8;
  longlong *plVar9;
  
  plVar9 = (longlong *)(param_1 + 0x20);
  if ((param_3 & 0x800000) == 0) {
    iVar8 = FUN_005cf5b8(param_2,0);
    param_1[0x22] = iVar8;
    if (iVar8 == -1) {
      return 0;
    }
    if ((param_3 & 0x20) == 0) goto LAB_005f3bf0;
    lVar7 = *(longlong *)(param_1 + -0x34);
    *plVar9 = lVar7;
  }
  else {
    param_1[0x22] = param_2;
    param_1[0x26] = 1;
    if ((param_3 & 0x20) == 0) {
      lVar7 = FUN_005cf4cc(param_2,0,1);
      *plVar9 = lVar7;
      goto LAB_005f3bf0;
    }
    lVar7 = *(longlong *)(param_1 + -0x34);
    *plVar9 = lVar7;
  }
  if (lVar7 != 0) {
    FUN_005cf4cc(param_1[0x22],lVar7,0);
  }
LAB_005f3bf0:
  puVar6 = PTR_PTR_0071a514;
  puVar5 = PTR_PTR_0071a510;
  puVar4 = PTR_PTR_0071a50c;
  puVar3 = PTR_PTR_0071a508;
  puVar2 = PTR_PTR_0071a504;
  puVar1 = PTR_PTR_0071a500;
  param_1[6] = PTR_PTR_0071a518;
  *param_1 = puVar1;
  param_1[1] = puVar2;
  param_1[2] = puVar3;
  param_1[3] = puVar4;
  param_1[4] = puVar5;
  param_1[5] = puVar6;
  return 1;
}



//==== 005f3cc0  ns=Global  size=0xb8
// sig: undefined FUN_005f3cc0(void)
// callers(0): 
// callees(1): 005cf554 FUN_005cf554

void FUN_005f3cc0(int param_1)

{
  if (*(undefined4 **)(param_1 + 0x20) != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)(param_1 + 0x20))(param_1);
  }
  if (*(int *)(param_1 + 0x98) == 0) {
    FUN_005cf554(*(undefined4 *)(param_1 + 0x88));
  }
  if (*(undefined4 **)(param_1 + 0x28) != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)(param_1 + 0x28))(param_1);
  }
  return;
}



//==== 005f3d78  ns=Global  size=0x658
// sig: undefined FUN_005f3d78(void)
// callers(1): 005f43d0 FUN_005f43d0
// callees(2): 005cf4cc FUN_005cf4cc; 005cfc44 FUN_005cfc44
// strings: 00661fb8: 'Loop Seek Period' | 00661fd0: 'C:\\devel\\projects\\bink\\src\\sdk\\decode\\binkfile.c' | 00662010: 'Bink IO' | 00662018: 'seek to file start' | 00662008: '%s %s' | 00662030: 'doing background read'

int FUN_005f3d78(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  byte in_cr0;
  byte in_cr1;
  byte in_cr2;
  byte in_cr3;
  byte unaff_cr4;
  byte in_cr5;
  byte in_cr6;
  byte in_cr7;
  uint uStack00000008;
  undefined1 auStack_c0 [96];
  
  uStack00000008 =
       (uint)(in_cr0 & 0xf) << 0x1c | (uint)(in_cr1 & 0xf) << 0x18 | (uint)(in_cr2 & 0xf) << 0x14 |
       (uint)(in_cr3 & 0xf) << 0x10 | (uint)(unaff_cr4 & 0xf) << 0xc | (uint)(in_cr5 & 0xf) << 8 |
       (uint)(in_cr6 & 0xf) << 4 | (uint)(in_cr7 & 0xf);
  iVar1 = *(int *)(param_1 + 0x4c);
  if ((*(int *)(param_1 + 0x40) == 0) && (*(int *)(param_1 + 0x70) == 0)) {
    if ((*(undefined4 **)(param_1 + 0x24) == (undefined4 *)0x0) ||
       (iVar4 = (*(code *)**(undefined4 **)(param_1 + 0x24))(param_1), puVar3 = PTR_DAT_0071a51c,
       iVar4 == 0)) {
      puVar2 = *(undefined4 **)(param_1 + 0x2c);
      if (puVar2 == (undefined4 *)0x0) {
        return -1;
      }
      iVar4 = -1;
    }
    else {
      uVar7 = *(int *)(param_1 + 0x9c) - *(int *)(param_1 + 0xa4);
      if (((uVar7 == 0) && (*(int *)(param_1 + 0xb0) == 0)) &&
         ((*(uint *)(*(int *)(param_1 + 0x1c) + 0x20) & 0x80) != 0)) {
        *(undefined4 *)(param_1 + 0xb0) = 1;
        *(uint *)(*(int *)(param_1 + 0x1c) + 0x20) =
             *(uint *)(*(int *)(param_1 + 0x1c) + 0x20) & 0xffffff7f;
        *(undefined4 *)(param_1 + 0x44) = 1;
        iVar4 = *(int *)puVar3;
        if (iVar4 != 0) {
          uVar9 = ZEXT48(PTR_DAT_0071a520);
          (*(code *)**(undefined4 **)(iVar4 + 0x34))(iVar4,uVar9,PTR_s_Loop_Seek_Period_0071a524);
          iVar4 = *(int *)puVar3;
          if (iVar4 != 0) {
            (*(code *)**(undefined4 **)(iVar4 + 0x50))
                      (iVar4,0,0,0,0,PTR_s_C__devel_projects_bink_src_sdk_d_0071a528,0x19e,uVar9 + 4
                      );
          }
        }
        FUN_005cf4cc(*(undefined4 *)(param_1 + 0x88),
                     (((ulonglong)**(uint **)(*(int *)(param_1 + 0x1c) + 0x158) & 0xfffffffe) - 0x20
                     & 0xffffffff) + *(longlong *)(param_1 + 0x80),0);
        FUN_005cfc44(*(undefined4 *)(param_1 + 0x88),auStack_c0,0x20);
        iVar4 = *(int *)puVar3;
        if (iVar4 != 0) {
          (*(code *)**(undefined4 **)(iVar4 + 0x54))
                    (iVar4,0,0,PTR_s_C__devel_projects_bink_src_sdk_d_0071a528,0x1a5);
        }
        *(undefined4 *)(param_1 + 0x44) = 0;
      }
      if ((*(uint *)(param_1 + 0xa8) < 0x20000) || (uVar7 == 0)) {
        iVar4 = 0;
        *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x6c);
      }
      else {
        uVar8 = uVar7;
        if (0x1ffff < uVar7) {
          uVar8 = 0x20000;
        }
        iVar5 = 0;
        if (*(undefined4 **)(param_1 + 0x34) != (undefined4 *)0x0) {
          iVar5 = (*(code *)**(undefined4 **)(param_1 + 0x34))();
        }
        uVar10 = *(uint *)(param_1 + 0xa4) & 0x1ffff;
        if ((uVar8 < uVar10) || (uVar8 == uVar7)) {
          uVar10 = 0;
          uVar7 = 0;
        }
        else {
          uVar7 = 0;
          if (uVar10 != 0) {
            uVar7 = uVar10;
            if (*(undefined4 **)(param_1 + 0x3c) == (undefined4 *)0x0) {
              *(uint *)(param_1 + 0xa0) = uVar10 + *(int *)(param_1 + 0xa0);
            }
            else {
              (*(code *)**(undefined4 **)(param_1 + 0x3c))(param_1 + 0xa0,uVar10);
            }
          }
        }
        if (*(int *)(param_1 + 0xb0) != 0) {
          *(uint *)(*(int *)(param_1 + 0x1c) + 0x20) =
               *(uint *)(*(int *)(param_1 + 0x1c) + 0x20) & 0xffffff7f;
          *(undefined4 *)(param_1 + 0xb0) = 0;
        }
        puVar3 = PTR_DAT_0071a51c;
        iVar4 = *(int *)PTR_DAT_0071a51c;
        if (iVar4 != 0) {
          (*(code *)**(undefined4 **)(iVar4 + 0x50))
                    (iVar4,0,0,0,0,PTR_s_C__devel_projects_bink_src_sdk_d_0071a528,0x1cb,
                     ZEXT48(PTR_DAT_0071a520) + 8);
        }
        *(undefined4 *)(param_1 + 0x44) = 1;
        iVar4 = FUN_005cfc44(*(undefined4 *)(param_1 + 0x88),*(int *)(param_1 + 0xac) + uVar7,
                             uVar8 - uVar10);
        *(undefined4 *)(param_1 + 0x44) = 0;
        if (*(undefined4 **)(param_1 + 0x30) != (undefined4 *)0x0) {
          (*(code *)**(undefined4 **)(param_1 + 0x30))(param_1,iVar4,iVar5);
        }
        if (uVar8 - uVar10 != iVar4) {
          *(undefined4 *)(param_1 + 0x40) = 1;
        }
        if (iVar4 != 0) {
          *(int *)(param_1 + 0x48) = iVar4 + *(int *)(param_1 + 0x48);
          *(int *)(param_1 + 0xa4) = iVar4 + *(int *)(param_1 + 0xa4);
          *(int *)(param_1 + 0xac) = *(int *)(param_1 + 0xac) + 0x20000;
          if (*(uint *)(param_1 + 0x94) <= *(uint *)(param_1 + 0xac)) {
            *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)(param_1 + 0x90);
          }
          if (*(undefined4 **)(param_1 + 0x3c) == (undefined4 *)0x0) {
            *(int *)(param_1 + 0xa8) = *(int *)(param_1 + 0xa8) - iVar4;
          }
          else {
            (*(code *)**(undefined4 **)(param_1 + 0x3c))(param_1 + 0xa8,-iVar4);
          }
          if (*(undefined4 **)(param_1 + 0x3c) == (undefined4 *)0x0) {
            *(int *)(param_1 + 0x6c) = iVar4 + *(int *)(param_1 + 0x6c);
          }
          else {
            (*(code *)**(undefined4 **)(param_1 + 0x3c))(param_1 + 0x6c,iVar4);
          }
          if (*(uint *)(param_1 + 100) < *(uint *)(param_1 + 0x6c)) {
            *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x6c);
          }
          iVar6 = 0;
          if (*(undefined4 **)(param_1 + 0x34) != (undefined4 *)0x0) {
            iVar6 = (*(code *)**(undefined4 **)(param_1 + 0x34))();
          }
          iVar6 = iVar6 - iVar5;
          *(int *)(param_1 + 0x50) = iVar6 + *(int *)(param_1 + 0x50);
          if ((iVar1 == 0) && (*(int *)(param_1 + 0x4c) == 0)) {
            *(int *)(param_1 + 0x58) = iVar6 + *(int *)(param_1 + 0x58);
          }
          else {
            *(int *)(param_1 + 0x5c) = iVar6 + *(int *)(param_1 + 0x5c);
          }
        }
        iVar1 = *(int *)puVar3;
        if (iVar1 != 0) {
          (*(code *)**(undefined4 **)(iVar1 + 0x54))
                    (iVar1,0,0,PTR_s_C__devel_projects_bink_src_sdk_d_0071a528,499);
        }
      }
      puVar2 = *(undefined4 **)(param_1 + 0x28);
      if (puVar2 == (undefined4 *)0x0) {
        return iVar4;
      }
    }
    (*(code *)*puVar2)(param_1);
  }
  else {
    iVar4 = 0;
  }
  return iVar4;
}



//==== 005f43d0  ns=Global  size=0x11c
// sig: undefined FUN_005f43d0(void)
// callers(0): 
// callees(1): 005f3d78 FUN_005f3d78

undefined4 FUN_005f43d0(int param_1,uint param_2)

{
  if ((param_2 & 1) == 0) {
    if ((param_2 & 2) != 0) {
      if (*(int *)(param_1 + 0x70) == 1) {
        *(undefined4 *)(param_1 + 0x70) = 0;
      }
      if ((int)param_2 < 0) {
        FUN_005f3d78(param_1);
      }
    }
  }
  else {
    if (*(int *)(param_1 + 0x70) == 0) {
      *(undefined4 *)(param_1 + 0x70) = 1;
    }
    if ((int)param_2 < 0) {
      if (*(undefined4 **)(param_1 + 0x20) != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)(param_1 + 0x20))(param_1);
      }
      if (*(undefined4 **)(param_1 + 0x28) != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)(param_1 + 0x28))(param_1);
        return *(undefined4 *)(param_1 + 0x70);
      }
    }
  }
  return *(undefined4 *)(param_1 + 0x70);
}



//==== 005f44f0  ns=Global  size=0x244
// sig: undefined FUN_005f44f0(void)
// callers(0): 
// callees(2): 005cf4cc FUN_005cf4cc; 005cfc44 FUN_005cfc44
// strings: 00662010: 'Bink IO' | 00662008: '%s %s' | 00662048: 'read header' | 00661fd0: 'C:\\devel\\projects\\bink\\src\\sdk\\decode\\binkfile.c'

int FUN_005f44f0(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  
  if (*(undefined4 **)(param_1 + 0x20) != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)(param_1 + 0x20))(param_1);
  }
  if ((param_2 != -1) && (*(int *)(param_1 + 0xa4) != param_2)) {
    FUN_005cf4cc(*(undefined4 *)(param_1 + 0x88),(longlong)param_2 + *(longlong *)(param_1 + 0x80),0
                );
    *(int *)(param_1 + 0xa4) = param_2;
  }
  puVar2 = PTR_DAT_0071a51c;
  iVar1 = *(int *)PTR_DAT_0071a51c;
  if (iVar1 != 0) {
    (*(code *)**(undefined4 **)(iVar1 + 0x50))
              (iVar1,0,0,0,1,PTR_s_C__devel_projects_bink_src_sdk_d_0071a528,0x5e,
               ZEXT48(PTR_DAT_0071a520) + 0xc);
  }
  iVar3 = FUN_005cfc44(*(undefined4 *)(param_1 + 0x88),param_3,param_4);
  iVar1 = *(int *)puVar2;
  if (iVar1 != 0) {
    (*(code *)**(undefined4 **)(iVar1 + 0x54))
              (iVar1,0,0,PTR_s_C__devel_projects_bink_src_sdk_d_0071a528,0x67);
  }
  if (param_4 != iVar3) {
    *(undefined4 *)(param_1 + 0x40) = 1;
  }
  *(int *)(param_1 + 0xa4) = iVar3 + *(int *)(param_1 + 0xa4);
  *(int *)(param_1 + 0x8c) = *(int *)(param_1 + 0xa4);
  uVar4 = *(int *)(param_1 + 0x9c) - *(int *)(param_1 + 0xa4);
  if (*(uint *)(param_1 + 0x60) <= uVar4) {
    uVar4 = *(uint *)(param_1 + 0x60);
  }
  *(uint *)(param_1 + 0x68) = uVar4;
  if (*(undefined4 **)(param_1 + 0x28) != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)(param_1 + 0x28))(param_1);
  }
  if (*(undefined4 **)(param_1 + 0x38) != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)(param_1 + 0x38))(param_3,iVar3);
  }
  return iVar3;
}



//==== 005f4738  ns=Global  size=0x954
// sig: undefined FUN_005f4738(void)
// callers(0): 
// callees(3): 005c5ad0 libc::memcpy; 005cf4cc FUN_005cf4cc; 005cfc44 FUN_005cfc44
// strings: 00661fd0: 'C:\\devel\\projects\\bink\\src\\sdk\\decode\\binkfile.c' | 00662010: 'Bink IO' | 00662060: 'read frame' | 00662008: '%s %s' | 00662070: 'seek to new position' | 006620a0: 'blocking read' | 00662088: 'wait on background' | 00662058: 'Loop' (raw)

int FUN_005f4738(int param_1,uint param_2,uint param_3,void *param_4,uint param_5)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  void *pvVar10;
  void *__dest;
  size_t __n;
  uint __n_00;
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
  if (*(int *)(param_1 + 0x40) != 0) {
    return 0;
  }
  iVar5 = 0;
  if (*(undefined4 **)(param_1 + 0x34) != (undefined4 *)0x0) {
    iVar5 = (*(code *)**(undefined4 **)(param_1 + 0x34))();
  }
  puVar4 = PTR_DAT_0071a540;
  puVar3 = PTR_DAT_0071a520;
  puVar2 = PTR_DAT_0071a51c;
  iVar9 = *(int *)PTR_DAT_0071a51c;
  if (iVar9 != 0) {
    if (param_2 < *(uint *)PTR_DAT_0071a540) {
      (*(code *)**(undefined4 **)(iVar9 + 0x34))
                (iVar9,ZEXT48(PTR_DAT_0071a520) + 0x10,PTR_DAT_0071a544);
      iVar9 = *(int *)puVar2;
      *(uint *)puVar4 = param_2;
      if (iVar9 == 0) goto LAB_005f4864;
    }
    else {
      *(uint *)PTR_DAT_0071a540 = param_2;
    }
    (*(code *)**(undefined4 **)(iVar9 + 0x50))
              (iVar9,0,0,0,0,PTR_s_C__devel_projects_bink_src_sdk_d_0071a528,0x97,
               ZEXT48(puVar3) + 0x14);
  }
LAB_005f4864:
  if ((param_3 == 0xffffffff) || (*(uint *)(param_1 + 0x8c) == param_3)) {
    bVar1 = false;
  }
  else {
    iVar9 = *(int *)puVar2;
    if (iVar9 != 0) {
      (*(code *)**(undefined4 **)(iVar9 + 0x50))
                (iVar9,0,0,0,1,PTR_s_C__devel_projects_bink_src_sdk_d_0071a528,0xa2,
                 ZEXT48(PTR_DAT_0071a520) + 0x18);
    }
    if (*(undefined4 **)(param_1 + 0x20) != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)(param_1 + 0x20))(param_1);
    }
    if ((*(uint *)(param_1 + 0x8c) < param_3) && (param_3 <= *(uint *)(param_1 + 0xa4))) {
      iVar9 = param_3 - *(uint *)(param_1 + 0x8c);
      *(uint *)(param_1 + 0x8c) = param_3;
      *(int *)(param_1 + 0xa8) = iVar9 + *(int *)(param_1 + 0xa8);
      *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) - iVar9;
      *(int *)(param_1 + 0xa0) = iVar9 + *(int *)(param_1 + 0xa0);
      if (*(uint *)(param_1 + 0x60) <= *(uint *)(param_1 + 0xa0)) {
        *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) - *(int *)(param_1 + 0x60);
      }
    }
    else {
      FUN_005cf4cc(*(undefined4 *)(param_1 + 0x88),
                   (longlong)(int)param_3 + *(longlong *)(param_1 + 0x80),0);
      *(uint *)(param_1 + 0xa4) = param_3;
      *(uint *)(param_1 + 0x8c) = param_3;
      *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(param_1 + 0x60);
      *(undefined4 *)(param_1 + 0x6c) = 0;
      *(undefined4 *)(param_1 + 0xa0) = 0;
      *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)(param_1 + 0x90);
    }
    iVar9 = *(int *)puVar2;
    bVar1 = true;
    if (iVar9 != 0) {
      (*(code *)**(undefined4 **)(iVar9 + 0x54))
                (iVar9,0,0,PTR_s_C__devel_projects_bink_src_sdk_d_0071a528,0xc3);
    }
  }
  puVar3 = PTR_DAT_0071a558;
  iVar9 = 0;
  __dest = param_4;
  do {
    uVar7 = *(uint *)(param_1 + 0x6c);
    pvVar10 = __dest;
    if (uVar7 != 0) {
      __n_00 = param_5;
      if (uVar7 < param_5) {
        __n_00 = uVar7;
      }
      param_5 = param_5 - __n_00;
      iVar9 = iVar9 + __n_00;
      *(uint *)(param_1 + 0x8c) = *(int *)(param_1 + 0x8c) + __n_00;
      __n = *(int *)(param_1 + 0x60) - *(int *)(param_1 + 0xa0);
      if (__n <= __n_00) {
        pvVar10 = (void *)((int)__dest + __n);
        __n_00 = __n_00 - __n;
        libc::memcpy(__dest,(void *)(*(int *)(param_1 + 0x90) + *(int *)(param_1 + 0xa0)),__n);
        *(undefined4 *)(param_1 + 0xa0) = 0;
        if (*(undefined4 **)(param_1 + 0x3c) == (undefined4 *)0x0) {
          *(size_t *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) - __n;
LAB_005f4ea8:
          *(size_t *)(param_1 + 0xa8) = __n + *(int *)(param_1 + 0xa8);
        }
        else {
          (*(code *)**(undefined4 **)(param_1 + 0x3c))(param_1 + 0x6c,-__n);
          if (*(undefined4 **)(param_1 + 0x3c) == (undefined4 *)0x0) goto LAB_005f4ea8;
          (*(code *)**(undefined4 **)(param_1 + 0x3c))(param_1 + 0xa8,__n);
        }
        __dest = pvVar10;
        if (__n_00 == 0) goto LAB_005f4d2c;
      }
      pvVar10 = (void *)((int)__dest + __n_00);
      libc::memcpy(__dest,(void *)(*(int *)(param_1 + 0x90) + *(int *)(param_1 + 0xa0)),__n_00);
      if (*(undefined4 **)(param_1 + 0x3c) == (undefined4 *)0x0) {
        *(uint *)(param_1 + 0xa0) = __n_00 + *(int *)(param_1 + 0xa0);
      }
      else {
        (*(code *)**(undefined4 **)(param_1 + 0x3c))(param_1 + 0xa0,__n_00);
      }
      if (*(undefined4 **)(param_1 + 0x3c) == (undefined4 *)0x0) {
        *(uint *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) - __n_00;
      }
      else {
        (*(code *)**(undefined4 **)(param_1 + 0x3c))(param_1 + 0x6c,-__n_00);
        if (*(undefined4 **)(param_1 + 0x3c) != (undefined4 *)0x0) {
          (*(code *)**(undefined4 **)(param_1 + 0x3c))(param_1 + 0xa8,__n_00);
          goto LAB_005f4d2c;
        }
      }
      *(uint *)(param_1 + 0xa8) = __n_00 + *(int *)(param_1 + 0xa8);
    }
LAB_005f4d2c:
    if (param_5 == 0) {
      iVar8 = 0;
      iVar6 = *(int *)(param_1 + 0x54);
      if (*(undefined4 **)(param_1 + 0x34) != (undefined4 *)0x0) {
        iVar8 = (*(code *)**(undefined4 **)(param_1 + 0x34))();
      }
      bVar1 = !bVar1;
      *(int *)(param_1 + 0x54) = iVar6 + (iVar8 - iVar5);
      goto LAB_005f4b84;
    }
    bVar1 = !bVar1;
    if (!bVar1) goto LAB_005f49b4;
    iVar6 = *(int *)puVar2;
    if (iVar6 != 0) {
      (*(code *)**(undefined4 **)(iVar6 + 0x50))
                (iVar6,0,0,0,1,PTR_s_C__devel_projects_bink_src_sdk_d_0071a528,0xff,puVar3);
    }
    if (*(undefined4 **)(param_1 + 0x20) != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)(param_1 + 0x20))(param_1);
    }
    iVar6 = *(int *)puVar2;
    if (iVar6 != 0) {
      (*(code *)**(undefined4 **)(iVar6 + 0x54))
                (iVar6,0,0,PTR_s_C__devel_projects_bink_src_sdk_d_0071a528,0x105);
    }
    bVar1 = true;
    __dest = pvVar10;
  } while (*(int *)(param_1 + 0x6c) != 0);
  bVar1 = false;
LAB_005f49b4:
  iVar6 = *(int *)puVar2;
  if (iVar6 != 0) {
    (*(code *)**(undefined4 **)(iVar6 + 0x50))
              (iVar6,0,0,0,1,PTR_s_C__devel_projects_bink_src_sdk_d_0071a528,0x10e,
               ZEXT48(PTR_DAT_0071a520) + 0x20);
  }
  iVar6 = 0;
  if (*(undefined4 **)(param_1 + 0x34) != (undefined4 *)0x0) {
    iVar6 = (*(code *)**(undefined4 **)(param_1 + 0x34))();
  }
  if (*(int *)(param_1 + 0xb0) != 0) {
    *(uint *)(*(int *)(param_1 + 0x1c) + 0x20) =
         *(uint *)(*(int *)(param_1 + 0x1c) + 0x20) & 0xffffff7f;
    *(undefined4 *)(param_1 + 0xb0) = 0;
  }
  uVar7 = FUN_005cfc44(*(undefined4 *)(param_1 + 0x88),pvVar10,param_5);
  if (uVar7 < param_5) {
    *(undefined4 *)(param_1 + 0x40) = 1;
  }
  if (*(undefined4 **)(param_1 + 0x30) != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)(param_1 + 0x30))(param_1,uVar7,iVar6);
  }
  iVar9 = iVar9 + uVar7;
  iVar8 = 0;
  *(uint *)(param_1 + 0xa4) = uVar7 + *(int *)(param_1 + 0xa4);
  *(uint *)(param_1 + 0x8c) = uVar7 + *(int *)(param_1 + 0x8c);
  *(uint *)(param_1 + 0x48) = uVar7 + *(int *)(param_1 + 0x48);
  if (*(undefined4 **)(param_1 + 0x34) != (undefined4 *)0x0) {
    iVar8 = (*(code *)**(undefined4 **)(param_1 + 0x34))();
  }
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + (iVar8 - iVar6);
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + (iVar8 - iVar5);
  iVar5 = *(int *)puVar2;
  if (iVar5 != 0) {
    (*(code *)**(undefined4 **)(iVar5 + 0x54))
              (iVar5,0,0,PTR_s_C__devel_projects_bink_src_sdk_d_0071a528,0x129);
  }
LAB_005f4b84:
  uVar7 = *(int *)(param_1 + 0x9c) - *(int *)(param_1 + 0x8c);
  if (*(uint *)(param_1 + 0x60) <= uVar7) {
    uVar7 = *(uint *)(param_1 + 0x60);
  }
  *(uint *)(param_1 + 0x68) = uVar7;
  if (*(uint *)(param_1 + 0x68) < *(int *)(param_1 + 0x6c) + 0x20000U) {
    *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x6c);
  }
  if ((!bVar1) && (*(undefined4 **)(param_1 + 0x28) != (undefined4 *)0x0)) {
    (*(code *)**(undefined4 **)(param_1 + 0x28))(param_1);
  }
  if (*(undefined4 **)(param_1 + 0x38) != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)(param_1 + 0x38))(param_4,iVar9);
  }
  iVar5 = *(int *)puVar2;
  if (iVar5 != 0) {
    (*(code *)**(undefined4 **)(iVar5 + 0x54))
              (iVar5,0,0,PTR_s_C__devel_projects_bink_src_sdk_d_0071a528,0x140);
  }
  return iVar9;
}



//==== 005f5090  ns=Global  size=0xcc
// sig: undefined FUN_005f5090(void)
// callers(13): 005e99f8 FUN_005e99f8; 005ec00c FUN_005ec00c; 005ec2f0 FUN_005ec2f0; 005eced8 FUN_005eced8; 005ed184 FUN_005ed184; 005eda28 FUN_005eda28; 005edea0 FUN_005edea0; 005ee120 FUN_005ee120; 005ee3a8 FUN_005ee3a8; 005ef740 FUN_005ef740; 005efeb0 FUN_005efeb0; 005f0370 FUN_005f0370; 005f1788 FUN_005f1788
// callees(1): 00650684 sys::sys_time_get_system_time

ulonglong FUN_005f5090(void)

{
  undefined *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  puVar1 = PTR_DAT_0071a55c;
  if (*(longlong *)PTR_DAT_0071a55c == 0) {
    uVar3 = sys::sys_time_get_system_time();
    *(undefined8 *)puVar1 = uVar3;
  }
  lVar2 = sys::sys_time_get_system_time();
  lVar4 = *(longlong *)(puVar1 + 8);
  if (0xc000000000000000 < (ulonglong)(lVar2 - lVar4)) {
    *(longlong *)(puVar1 + 8) = lVar4;
    return (lVar4 - *(longlong *)puVar1) / 1000 & 0xffffffff;
  }
  *(longlong *)(puVar1 + 8) = lVar2;
  return (lVar2 - *(longlong *)puVar1) / 1000 & 0xffffffff;
}



//==== 005f515c  ns=Global  size=0x10
// sig: undefined FUN_005f515c(void)
// callers(1): 005eae04 FUN_005eae04
// callees(0): 

void FUN_005f515c(undefined4 param_1,undefined4 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_0071a560;
  *(undefined4 *)(PTR_DAT_0071a560 + 4) = param_2;
  *(undefined4 *)puVar1 = param_1;
  return;
}



//==== 005f516c  ns=Global  size=0x98
// sig: undefined FUN_005f516c(void)
// callers(4): 005eb970 FUN_005eb970; 005ee638 FUN_005ee638; 005f0f38 FUN_005f0f38; 005f1788 FUN_005f1788
// callees(1): 005d580c FUN_005d580c

void FUN_005f516c(int param_1)

{
  if (param_1 != 0) {
    if (*(char *)(param_1 + -2) == '\x03') {
      (*(code *)**(undefined4 **)(param_1 + -0xc))(param_1 - (uint)*(byte *)(param_1 + -1));
      return;
    }
    FUN_005d580c(param_1 - (uint)*(byte *)(param_1 + -1));
  }
  return;
}



//==== 005f5204  ns=Global  size=0x138
// sig: undefined FUN_005f5204(void)
// callers(1): 005fd790 FUN_005fd790
// callees(1): 005d5838 FUN_005d5838

int FUN_005f5204(int param_1)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  puVar1 = PTR_DAT_0071a560;
  if (param_1 - 1U < 0xfffffffe) {
    if ((*(undefined4 **)PTR_DAT_0071a560 == (undefined4 *)0x0) ||
       (uVar2 = (*(code *)**(undefined4 **)PTR_DAT_0071a560)(param_1 + 0x40), uVar2 == 0)) {
      uVar2 = FUN_005d5838(param_1 + 0x40);
      if (uVar2 != 0) {
        uVar4 = 0x40 - (uVar2 & 0x1f);
        iVar3 = uVar2 + (uVar4 & 0xff);
        *(char *)(iVar3 + -1) = (char)uVar4;
        *(undefined1 *)(iVar3 + -2) = 0;
        return iVar3;
      }
    }
    else if (uVar2 != 0xffffffff) {
      uVar4 = 0x40 - (uVar2 & 0x1f);
      iVar3 = (uVar4 & 0xff) + uVar2;
      *(char *)(iVar3 + -1) = (char)uVar4;
      *(undefined1 *)(iVar3 + -2) = 3;
      *(undefined4 *)(iVar3 + -0xc) = *(undefined4 *)(puVar1 + 4);
      return iVar3;
    }
  }
  return 0;
}



//==== 005f533c  ns=Global  size=0x48
// sig: undefined FUN_005f533c(void)
// callers(2): 005f0f38 FUN_005f0f38; 005f1788 FUN_005f1788
// callees(0): 

longlong FUN_005f533c(uint param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0x800;
  if ((param_1 < 0xac44) && (iVar1 = 0x400, param_1 < 0x5622)) {
    return ((ulonglong)((longlong)(param_2 << 1) << 0x29) >> 0x24) + 0xd0;
  }
  return ((ulonglong)((longlong)iVar1 * (longlong)(param_2 << 1) << 0x20) >> 0x24) + 0xd0;
}



//==== 005f5384  ns=Global  size=0x8
// sig: undefined FUN_005f5384(void)
// callers(1): 005f1788 FUN_005f1788
// callees(0): 

undefined4 FUN_005f5384(int param_1)

{
  return *(undefined4 *)(param_1 + 0x30);
}



//==== 005f538c  ns=Global  size=0x8
// sig: undefined FUN_005f538c(void)
// callers(2): 005f0370 FUN_005f0370; 005f0f38 FUN_005f0f38
// callees(0): 

undefined4 FUN_005f538c(int param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}



//==== 005f5398  ns=Global  size=0x934
// sig: undefined FUN_005f5398(void)
// callers(2): 005eb740 FUN_005eb740; 005f0370 FUN_005f0370
// callees(3): 005c6094 FUN_005c6094; 005d0140 libc::memset; 006019d8 FUN_006019d8

void FUN_005f5398(undefined4 *param_1,undefined4 param_2,ulonglong param_3,undefined4 param_4,
                 ulonglong param_5,uint *param_6,undefined4 param_7,ulonglong param_8)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  ulonglong *puVar7;
  float fVar8;
  int iVar9;
  undefined *puVar10;
  ulonglong uVar11;
  int iVar12;
  ulonglong uVar13;
  float *pfVar14;
  longlong lVar15;
  longlong lVar16;
  uint uVar17;
  uint uVar18;
  ulonglong unaff_r14;
  ulonglong unaff_r15;
  ulonglong unaff_r16;
  longlong lVar19;
  ulonglong unaff_r17;
  ulonglong unaff_r18;
  int iVar20;
  ulonglong unaff_r19;
  ulonglong unaff_r20;
  ulonglong uVar21;
  ulonglong unaff_r21;
  ulonglong unaff_r22;
  ulonglong uVar22;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  ulonglong unaff_r28;
  ulonglong uVar26;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  uint *puVar27;
  uint *puVar28;
  ulonglong unaff_r31;
  ulonglong uVar29;
  uint uVar30;
  uint uVar31;
  ulonglong in_LR;
  ulonglong uVar32;
  ulonglong uVar33;
  double dVar34;
  ulonglong in_f29;
  double dVar35;
  ulonglong in_f30;
  ulonglong in_f31;
  double dVar36;
  double dVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar47 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  float afStack_1a0 [104];
  undefined1 auVar42 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  
  uVar33 = ZEXT48(&stack0x00000000);
  lVar2 = uVar33 - 0x210;
  puVar7 = (ulonglong *)lVar2;
  *puVar7 = uVar33;
  puVar7[0x3f] = in_f29;
  puVar7[0x2d] = unaff_r14;
  puVar7[0x2e] = unaff_r15;
  puVar7[0x30] = unaff_r17;
  puVar7[0x32] = unaff_r19;
  puVar7[0x35] = unaff_r22;
  puVar7[0x37] = unaff_r24;
  puVar7[0x40] = in_f30;
  puVar7[0x41] = in_f31;
  puVar7[0x2f] = unaff_r16;
  puVar7[0x31] = unaff_r18;
  puVar7[0x33] = unaff_r20;
  puVar7[0x34] = unaff_r21;
  puVar7[0x36] = unaff_r23;
  puVar7[0x38] = unaff_r25;
  puVar7[0x39] = unaff_r26;
  puVar7[0x3a] = unaff_r27;
  puVar7[0x3b] = unaff_r28;
  puVar7[0x3c] = unaff_r29;
  puVar7[0x3d] = unaff_r30;
  puVar7[0x3e] = unaff_r31;
  puVar7[0x44] = in_LR;
  puVar7[0x24] = param_3;
  puVar7[0x26] = param_5;
  puVar7[0x28] = param_8;
  *(undefined4 *)(puVar7 + 0x23) = param_2;
  iVar20 = param_1[8];
  *(undefined4 *)(puVar7 + 0x27) = param_7;
  *(undefined4 *)(puVar7 + 0x25) = param_4;
  *(undefined4 **)((int)puVar7 + 0x114) = param_1;
  *(int *)((int)puVar7 + 0x11c) = (int)param_3;
  *(int *)((int)puVar7 + 300) = (int)param_5;
  *(int *)((int)puVar7 + 0x13c) = (int)param_8;
  uVar3 = param_1[2];
  uVar22 = (ulonglong)uVar3;
  dVar35 = (double)(float)param_1[3];
  iVar4 = param_1[7];
  uVar30 = param_1[0xb];
  *(undefined4 *)(puVar7 + 0x21) = param_1[10];
  *(undefined4 *)((int)puVar7 + 0x10c) = param_1[1];
  uVar18 = param_1[9];
  uVar31 = param_1[5];
  *(undefined4 *)(puVar7 + 0x22) = 0;
  if (iVar20 == 0) {
    *(undefined4 *)(puVar7 + 0x22) = param_1[6];
  }
  *(uint *)(puVar7 + 0x29) = uVar30 & 1;
  *(undefined4 *)((int)puVar7 + 0x104) = *param_1;
  if ((uVar30 & 1) == 0) {
    puVar27 = *(uint **)(puVar7 + 0x25);
    uVar23 = 0;
    uVar29 = 0;
  }
  else {
    puVar6 = *(uint **)(puVar7 + 0x25);
    uVar30 = 0;
    if (param_6 <= puVar6) goto LAB_005f5a90;
    puVar27 = puVar6 + 1;
    uVar29 = 0x1e;
    uVar23 = (ulonglong)(*puVar6 >> 2);
  }
  if (iVar4 != 0) {
    uVar21 = (ulonglong)*(uint *)(puVar7 + 0x27);
    lVar19 = ((ulonglong)uVar3 & 0x3fffffff) * 4;
    iVar20 = 0;
    puVar10 = PTR_DAT_0071a568;
    uVar24 = uVar29;
    do {
      PTR_DAT_0071a568 = puVar10;
      if (uVar24 < 0x1d) {
        if (puVar27 < param_6) {
          uVar30 = (uint)uVar29;
          uVar29 = uVar29 + 3;
          uVar23 = uVar23 | *puVar27 << (uVar30 & 0x3f);
          uVar24 = (ulonglong)(*puVar27 >> (0x1d - uVar30 & 0x3f));
          puVar27 = puVar27 + 1;
          goto LAB_005f54e0;
        }
LAB_005f561c:
        libc::memset(uVar21 & 0xffffffff,0,lVar19);
      }
      else {
        uVar29 = uVar29 - 0x1d;
        uVar24 = (uVar23 << 0x20) >> 0x3d;
LAB_005f54e0:
        puVar7[0x2a] = (uVar23 & 0x1fffffff) >> 5 & 0x7fffff;
        fVar8 = (float)(longlong)puVar7[0x2a] *
                *(float *)(puVar10 + ((uint)((uVar23 & 0x1fffffff) << 2) & 0x7c));
        if ((uVar23 & 0x10000000) != 0) {
          fVar8 = -fVar8;
        }
        *(float *)uVar21 = fVar8;
        if ((uVar29 & 0xffffffff) < 0x1d) {
          uVar23 = uVar24;
          if (param_6 <= puVar27) goto LAB_005f561c;
          uVar30 = (uint)uVar29;
          uVar29 = uVar29 + 3;
          uVar24 = uVar24 | *puVar27 << (uVar30 & 0x3f);
          uVar23 = (ulonglong)(*puVar27 >> (0x1d - uVar30 & 0x3f));
          puVar27 = puVar27 + 1;
        }
        else {
          uVar29 = uVar29 - 0x1d;
          uVar23 = (uVar24 << 0x20) >> 0x3d;
        }
        puVar7[0x2a] = (uVar24 & 0x1fffffff) >> 5 & 0x7fffff;
        fVar8 = (float)(longlong)puVar7[0x2a] *
                *(float *)(puVar10 + ((uint)((uVar24 & 0x1fffffff) << 2) & 0x7c));
        if ((uVar24 & 0x10000000) != 0) {
          fVar8 = -fVar8;
        }
        ((float *)uVar21)[1] = fVar8;
        if (uVar18 != 0) {
          uVar24 = (ulonglong)uVar18;
          iVar12 = 0;
          do {
            uVar30 = (uint)uVar29;
            if ((uVar29 & 0xffffffff) < 8) {
              if (param_6 <= puVar27) goto LAB_005f561c;
              uVar5 = *puVar27;
              puVar27 = puVar27 + 1;
              uVar29 = uVar29 + 0x18;
              uVar23 = uVar5 << (uVar30 & 0x3f) | uVar23;
              uVar11 = (ulonglong)(uVar5 >> (8 - uVar30 & 0x3f));
            }
            else {
              uVar11 = (uVar23 << 0x20) >> 0x28;
              uVar29 = uVar29 - 8;
            }
            uVar23 = uVar23 & 0xff;
            pfVar14 = afStack_1a0 + iVar12;
            iVar12 = iVar12 + 1;
            if (0x5f < uVar23) {
              uVar23 = 0x5f;
            }
            *pfVar14 = *(float *)(puVar10 + (int)(uVar23 << 2) + 0x60);
            uVar24 = uVar24 - 1;
            uVar23 = uVar11;
          } while (uVar24 != 0);
        }
        uVar24 = 0;
        dVar36 = (double)DAT_0071a574;
        lVar1 = (ulonglong)*(uint *)((int)puVar7 + 0x114) + 0x34;
        puVar6 = (uint *)lVar1;
        dVar37 = dVar36;
        if ((*puVar6 & 0x7fffffff) == 0) {
          lVar15 = 0;
          do {
            uVar24 = uVar24 + 1;
            iVar12 = (int)lVar15;
            lVar15 = (uVar24 & 0x3fffffff) << 2;
            dVar37 = (double)*(float *)((int)afStack_1a0 + iVar12);
            dVar36 = -dVar37;
          } while ((*(uint *)((int)lVar15 + (int)puVar6) & 0x7fffffff) == 0);
        }
        if (2 < uVar22) {
          uVar26 = uVar21 + 8;
          puVar7[0x2b] = uVar33 - 0x1a0;
          uVar11 = 2;
          do {
            while( true ) {
              if ((int)uVar29 == 0) {
                if (param_6 <= puVar27) goto LAB_005f561c;
                uVar29 = 0x1f;
                uVar23 = (ulonglong)*puVar27;
                puVar27 = puVar27 + 1;
              }
              else {
                uVar29 = uVar29 - 1;
              }
              uVar25 = (uVar23 << 0x20) >> 0x21;
              uVar13 = uVar11 + 8;
              if ((uVar23 & 1) != 0) {
                uVar30 = (uint)uVar23 >> 1;
                if ((uVar29 & 0xffffffff) < 4) {
                  uVar23 = uVar25;
                  if (param_6 <= puVar27) goto LAB_005f561c;
                  uVar5 = (uint)uVar29;
                  uVar29 = uVar29 + 0x1c;
                  uVar30 = uVar30 | *puVar27 << (uVar5 & 0x3f);
                  uVar25 = (ulonglong)(*puVar27 >> (4 - uVar5 & 0x3f));
                  puVar27 = puVar27 + 1;
                }
                else {
                  uVar29 = uVar29 - 4;
                  uVar25 = (uVar23 << 0x20) >> 0x25;
                }
                uVar13 = (ulonglong)(byte)puVar10[(uVar30 & 0xf) + 0x1e0] * 8 + uVar11;
              }
              uVar23 = uVar25;
              if ((uVar29 & 0xffffffff) < 4) {
                if (param_6 <= puVar27) goto LAB_005f561c;
                uVar30 = (uint)uVar29;
                uVar29 = uVar29 + 0x1c;
                uVar32 = (ulonglong)(*puVar27 >> (4 - uVar30 & 0x3f));
                uVar25 = uVar23 | *puVar27 << (uVar30 & 0x3f);
                puVar27 = puVar27 + 1;
              }
              else {
                uVar29 = uVar29 - 4;
                uVar32 = (uVar23 << 0x20) >> 0x24;
                uVar25 = uVar23;
              }
              uVar23 = uVar32;
              uVar25 = uVar25 & 0xf;
              if (uVar22 < (uVar13 & 0xffffffff)) {
                uVar13 = uVar22;
              }
              iVar12 = (int)uVar25;
              if (iVar12 == 0) break;
              uVar32 = uVar13 - uVar11 & 0xffffffff;
              uVar30 = 0xffffffff >> (0x20U - iVar12 & 0x3f);
              if ((uVar11 & 0xffffffff) < (uVar13 & 0xffffffff)) {
                do {
                  while( true ) {
                    iVar9 = (int)((uVar24 & 0xffffffff) << 2);
                    if (*(int *)(iVar9 + (int)puVar6) << 1 == (int)uVar11) {
                      uVar24 = uVar24 + 1;
                      dVar37 = (double)*(float *)((int)puVar7 + iVar9 + 0x70);
                      dVar36 = -dVar37;
                    }
                    uVar17 = (uint)uVar29;
                    pfVar14 = (float *)uVar26;
                    uVar5 = (uint)uVar23;
                    if ((uVar29 & 0xffffffff) < uVar25) break;
                    uVar17 = uVar30 & uVar5;
                    uVar29 = uVar29 - uVar25;
                    uVar23 = (ulonglong)(uVar5 >> iVar12);
                    puVar28 = puVar27;
                    if (uVar17 != 0) goto LAB_005f57f0;
LAB_005f5878:
                    uVar11 = uVar11 + 1;
                    uVar26 = uVar26 + 4;
                    *pfVar14 = 0.0;
                    uVar32 = uVar32 - 1;
                    if (uVar32 == 0) goto LAB_005f588c;
                  }
                  if (param_6 <= puVar27) goto LAB_005f561c;
                  puVar28 = puVar27 + 1;
                  uVar29 = (uVar29 - uVar25) + 0x20;
                  uVar23 = (ulonglong)(*puVar27 >> (iVar12 - uVar17 & 0x3f));
                  uVar17 = uVar30 & (*puVar27 << (uVar17 & 0x3f) | uVar5);
                  puVar27 = puVar28;
                  if (uVar17 == 0) goto LAB_005f5878;
LAB_005f57f0:
                  if ((int)uVar29 == 0) {
                    uVar29 = 0x1f;
                    puVar27 = puVar28 + 1;
                    uVar23 = (ulonglong)*puVar28;
                  }
                  else {
                    uVar29 = uVar29 - 1;
                    puVar27 = puVar28;
                  }
                  dVar34 = dVar36;
                  if ((uVar23 & 1) == 0) {
                    dVar34 = dVar37;
                  }
                  puVar7[0x2a] = (longlong)(int)uVar17;
                  uVar23 = (uVar23 << 0x20) >> 0x21;
                  uVar26 = uVar26 + 4;
                  uVar11 = uVar11 + 1;
                  *pfVar14 = (float)(dVar34 * (double)(longlong)puVar7[0x2a]);
                  uVar32 = uVar32 - 1;
                } while (uVar32 != 0);
              }
LAB_005f588c:
              if (uVar22 <= (uVar11 & 0xffffffff)) goto LAB_005f5894;
            }
            uVar25 = uVar26 & 0xffffffff;
            lVar15 = (uVar13 - uVar11 & 0x3fffffff) * 4;
            uVar26 = uVar26 + lVar15;
            libc::memset(uVar25,0,lVar15);
            lVar15 = (uVar24 & 0x3fffffff) * 4;
            lVar16 = lVar1 + lVar15;
            if (((ulonglong)*(uint *)lVar16 & 0x7fffffff) << 1 < (uVar13 & 0xffffffff)) {
              lVar15 = lVar15 + puVar7[0x2b];
              do {
                lVar16 = lVar16 + 4;
                pfVar14 = (float *)lVar15;
                uVar24 = uVar24 + 1;
                lVar15 = lVar15 + 4;
                dVar37 = (double)*pfVar14;
                dVar36 = -dVar37;
              } while (((ulonglong)*(uint *)lVar16 & 0x7fffffff) << 1 < (uVar13 & 0xffffffff));
            }
            uVar11 = uVar13;
          } while ((uVar13 & 0xffffffff) < uVar22);
        }
LAB_005f5894:
        if (*(int *)(puVar7 + 0x29) != 0) {
          FUN_006019d8(uVar3,uVar21 & 0xffffffff,*(undefined4 *)(puVar7 + 0x21),
                       *(undefined4 *)((int)puVar7 + 0x10c));
        }
      }
      iVar20 = iVar20 + 1;
      if (iVar4 == iVar20) goto LAB_005f59c4;
      uVar24 = uVar29 & 0xffffffff;
      uVar21 = uVar21 + lVar19;
      puVar10 = PTR_DAT_0071a568;
    } while( true );
  }
  lVar19 = ((ulonglong)uVar3 & 0x3fffffff) << 2;
LAB_005f59cc:
  *(float *)(puVar7 + 0x1e) = (float)dVar35;
  uVar33 = (ulonglong)(uVar3 >> 2);
  auVar38 = loadVectorElementWordIndexed(lVar2,0xf0);
  auVar38 = auVar38 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar38 = auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60;
  if (uVar3 >> 2 != 0) {
    uVar22 = (ulonglong)*(uint *)(puVar7 + 0x27);
    lVar19 = lVar19 + uVar22;
    auVar51 = *(undefined1 (*) [16])((uint)PTR_DAT_0071a56c & 0xfffffff0);
    uVar30 = *(uint *)(puVar7 + 0x23);
    do {
      uVar18 = (uint)uVar22;
      uVar5 = (uint)lVar19;
      lVar19 = lVar19 + 0x10;
      uVar22 = uVar22 + 0x10;
      auVar39 = vectorMultiplyAddFloatingPoint
                          (*(undefined1 (*) [16])(uVar18 & 0xfffffff0),auVar38,(undefined1  [16])0x0
                          );
      auVar43 = vectorMultiplyAddFloatingPoint
                          (*(undefined1 (*) [16])(uVar5 & 0xfffffff0),auVar38,(undefined1  [16])0x0)
      ;
      auVar43 = vectorConvertToSignedFixedPointWordSaturate(auVar43,0);
      auVar39 = vectorConvertToSignedFixedPointWordSaturate(auVar39,0);
      auVar39 = vectorPackSignedWordSignedSaturate(auVar39,auVar43);
      auVar39 = vectorPermute(auVar39,auVar39,auVar51);
      *(undefined1 (*) [16])(uVar30 & 0xfffffff0) = auVar39;
      uVar33 = uVar33 - 1;
      uVar30 = uVar30 + 0x10;
    } while (uVar33 != 0);
  }
LAB_005f5a4c:
  iVar20 = *(int *)(puVar7 + 0x22);
  iVar12 = *(int *)((int)puVar7 + 0x104);
joined_r0x005f5c8c:
  if (iVar20 != 0) {
    *(int *)(puVar7 + 0x1c) = iVar20;
    auVar38 = loadVectorElementWordIndexed(lVar2,0xe0);
    auVar38 = auVar38 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar38 = auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60;
    if (uVar31 != 0) {
      iVar20 = *(int *)(puVar7 + 0x23);
      auVar51 = vectorSplatImmediateSignedHalfWord(8);
      auVar39 = *(undefined1 (*) [16])((uint)PTR_DAT_0071a570 & 0xfffffff0);
      uVar30 = 0;
      do {
        uVar18 = uVar30 + 0x10;
        auVar53 = *(undefined1 (*) [16])(uVar30 + iVar12 & 0xfffffff0);
        auVar43 = *(undefined1 (*) [16])(uVar30 + iVar20 & 0xfffffff0);
        auVar52 = vectorUnpackLowSignedHalfWord(auVar53);
        auVar54._0_2_ = auVar43._0_2_ - auVar53._0_2_;
        auVar54._4_12_ = auVar43._4_12_;
        auVar54._2_2_ = auVar43._2_2_ - auVar53._2_2_;
        auVar40._0_4_ = auVar54._0_4_;
        auVar40._6_10_ = auVar43._6_10_;
        auVar40._4_2_ = auVar43._4_2_ - auVar53._4_2_;
        auVar56._0_6_ = auVar40._0_6_;
        auVar56._8_8_ = auVar43._8_8_;
        auVar56._6_2_ = auVar43._6_2_ - auVar53._6_2_;
        auVar55._0_8_ = auVar56._0_8_;
        auVar55._8_2_ = auVar43._8_2_ - auVar53._8_2_;
        auVar55._10_2_ = auVar43._10_2_ - auVar53._10_2_;
        auVar55._14_2_ = auVar43._14_2_;
        auVar55._12_2_ = auVar43._12_2_ - auVar53._12_2_;
        auVar43._0_14_ = auVar55._0_14_;
        auVar43._14_2_ = auVar55._14_2_ - auVar53._14_2_;
        auVar54 = vectorUnpackHighSignedHalfWord(auVar53);
        auVar55 = vectorMultiplyOddSignedHalfWord(auVar43,auVar39);
        auVar43 = vectorMultiplyEvenSignedHalfWord(auVar43,auVar39);
        auVar47._0_2_ = auVar39._0_2_ + auVar51._0_2_;
        auVar47._4_12_ = auVar39._4_12_;
        auVar47._2_2_ = auVar39._2_2_ + auVar51._2_2_;
        auVar48._0_4_ = auVar47._0_4_;
        auVar48._6_10_ = auVar39._6_10_;
        auVar48._4_2_ = auVar39._4_2_ + auVar51._4_2_;
        auVar49._0_6_ = auVar48._0_6_;
        auVar49._8_8_ = auVar39._8_8_;
        auVar49._6_2_ = auVar39._6_2_ + auVar51._6_2_;
        auVar50._0_8_ = auVar49._0_8_;
        auVar50._8_2_ = auVar39._8_2_ + auVar51._8_2_;
        auVar50._10_2_ = auVar39._10_2_ + auVar51._10_2_;
        auVar50._14_2_ = auVar39._14_2_;
        auVar50._12_2_ = auVar39._12_2_ + auVar51._12_2_;
        auVar39._0_14_ = auVar50._0_14_;
        auVar39._14_2_ = auVar50._14_2_ + auVar51._14_2_;
        auVar56 = vectorShiftRightAlgebraicWord(auVar55,auVar38);
        auVar43 = vectorShiftRightAlgebraicWord(auVar43,auVar38);
        auVar55 = vectorMergeHighWord(auVar43,auVar56);
        auVar43 = vectorMergeLowWord(auVar43,auVar56);
        auVar44._0_4_ = auVar55._0_4_ + auVar54._0_4_;
        auVar44._8_8_ = auVar55._8_8_;
        auVar44._4_4_ = auVar55._4_4_ + auVar54._4_4_;
        auVar45._0_8_ = auVar44._0_8_;
        auVar45._12_4_ = auVar55._12_4_;
        auVar45._8_4_ = auVar55._8_4_ + auVar54._8_4_;
        auVar46._0_12_ = auVar45._0_12_;
        auVar46._12_4_ = auVar45._12_4_ + auVar54._12_4_;
        auVar41._0_4_ = auVar43._0_4_ + auVar52._0_4_;
        auVar41._8_8_ = auVar43._8_8_;
        auVar41._4_4_ = auVar43._4_4_ + auVar52._4_4_;
        auVar42._0_8_ = auVar41._0_8_;
        auVar42._12_4_ = auVar43._12_4_;
        auVar42._8_4_ = auVar43._8_4_ + auVar52._8_4_;
        auVar53._0_12_ = auVar42._0_12_;
        auVar53._12_4_ = auVar42._12_4_ + auVar52._12_4_;
        auVar43 = vectorPackSignedWordSignedSaturate(auVar46,auVar53);
        *(undefined1 (*) [16])(uVar30 + iVar20 & 0xfffffff0) = auVar43;
        uVar30 = uVar18;
      } while (uVar18 < uVar31);
    }
  }
  FUN_005c6094(iVar12,(iVar4 * uVar3 * 2 - uVar31) + *(int *)(puVar7 + 0x23),uVar31);
  uVar31 = param_1[5];
  uVar30 = (int)puVar27 - *(int *)(puVar7 + 0x25) & 0x1fffffff;
LAB_005f5a90:
  iVar20 = *(int *)((int)puVar7 + 0x13c);
  param_1[8] = 0;
  uVar31 = param_1[4] - uVar31;
  if (iVar20 != 0) {
    iVar20 = *(int *)puVar7[0x28];
    if (iVar20 != 0) {
      uVar3 = iVar20 << (param_1[7] & 0x3f);
      if (uVar3 < uVar31) {
        uVar31 = uVar31 - (uVar3 & 0xfffffff0);
        FUN_005c6094(*(int *)(puVar7 + 0x23),*(int *)(puVar7 + 0x23) + (uVar3 & 0x7ffffff0) * 2,
                     uVar31);
        *(undefined4 *)puVar7[0x28] = 0;
      }
      else {
        uVar3 = uVar31 >> (param_1[7] & 0x3f);
        uVar31 = 0;
        *(int *)puVar7[0x28] = iVar20 - uVar3;
      }
    }
  }
  if (*(int *)((int)puVar7 + 0x11c) != 0) {
    *(uint *)puVar7[0x24] = uVar31;
  }
  if (*(int *)((int)puVar7 + 300) != 0) {
    *(int *)puVar7[0x26] = *(int *)(puVar7 + 0x25) + uVar30;
  }
  return;
LAB_005f59c4:
  if (iVar4 != 1) goto LAB_005f59cc;
  *(float *)(puVar7 + 0x20) = (float)dVar35;
  uVar33 = (ulonglong)(uVar3 >> 3);
  auVar38 = loadVectorElementWordIndexed(lVar2,0x100);
  auVar38 = auVar38 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar38 = auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60;
  if (uVar3 >> 3 == 0) goto LAB_005f5a4c;
  uVar30 = *(uint *)(puVar7 + 0x27);
  uVar18 = *(uint *)(puVar7 + 0x23);
  do {
    auVar39 = vectorMultiplyAddFloatingPoint
                        (*(undefined1 (*) [16])(uVar30 + 0x10 & 0xfffffff0),auVar38,
                         (undefined1  [16])0x0);
    auVar51 = vectorMultiplyAddFloatingPoint
                        (*(undefined1 (*) [16])(uVar30 & 0xfffffff0),auVar38,(undefined1  [16])0x0);
    auVar39 = vectorConvertToSignedFixedPointWordSaturate(auVar39,0);
    auVar51 = vectorConvertToSignedFixedPointWordSaturate(auVar51,0);
    auVar51 = vectorPackSignedWordSignedSaturate(auVar51,auVar39);
    *(undefined1 (*) [16])(uVar18 & 0xfffffff0) = auVar51;
    uVar33 = uVar33 - 1;
    uVar30 = uVar30 + 0x20;
    uVar18 = uVar18 + 0x10;
  } while (uVar33 != 0);
  iVar20 = *(int *)(puVar7 + 0x22);
  iVar12 = *(int *)((int)puVar7 + 0x104);
  goto joined_r0x005f5c8c;
}



//==== 005f5cd0  ns=Global  size=0x29c
// sig: undefined FUN_005f5cd0(void)
// callers(2): 005f0f38 FUN_005f0f38; 005f1788 FUN_005f1788
// callees(1): 005d0140 libc::memset

int * FUN_005f5cd0(int *param_1,ulonglong param_2,int param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  int *piVar7;
  ulonglong uVar8;
  uint uVar9;
  uint *puVar10;
  int *piVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  double dVar15;
  double dVar16;
  
  puVar4 = PTR_DAT_0071a568;
  uVar12 = 0x800;
  if (((param_2 & 0xffffffff) < 0xac44) && (uVar12 = 0x400, (param_2 & 0xffffffff) < 0x5622)) {
    uVar12 = 0x200;
  }
  uVar8 = (longlong)(int)uVar12 * (longlong)param_3;
  uVar3 = uVar8 & 0x7fffffff;
  if ((param_4 & 1) == 0) {
    param_2 = (longlong)(int)param_2 * (longlong)param_3;
    param_3 = 1;
    uVar12 = uVar8;
  }
  uVar1 = (uint)uVar12 >> 1;
  uVar8 = (param_2 + 1 << 0x20) >> 0x21;
  uVar13 = 0;
  lVar14 = 0x19;
  puVar10 = (uint *)(PTR_DAT_0071a568 + 0x1f0);
  do {
    if (uVar8 <= *puVar10) break;
    uVar13 = uVar13 + 1;
    lVar14 = lVar14 + -1;
    puVar10 = puVar10 + 1;
  } while (lVar14 != 0);
  libc::memset(param_1,0,0xa8);
  puVar5 = PTR_DAT_0071a578;
  uVar2 = (uint)(uVar3 << 1);
  *param_1 = (int)(param_1 + 0x2c);
  uVar9 = uVar2 >> 5;
  param_1[10] = 0x800;
  param_1[1] = (int)puVar5;
  param_1[0xc] = (uVar2 >> 4) + 0xb0;
  param_1[0xb] = param_4;
  param_1[7] = param_3;
  param_1[5] = uVar2 >> 4;
  param_1[6] = 0;
  param_1[9] = (int)uVar13;
  param_1[2] = (uint)uVar12;
  param_1[4] = uVar2;
  if (uVar9 == 0x40) {
    param_1[6] = 6;
  }
  else if ((uVar3 << 0x21) >> 0x25 < 0x41) {
    if (uVar9 == 0x20) {
      param_1[6] = 5;
    }
  }
  else if (uVar9 == 0x80) {
    param_1[6] = 7;
  }
  else if (uVar9 == 0x100) {
    param_1[6] = 8;
  }
  dVar15 = (double)(uVar12 & 0xffffffff);
  if ((double)DAT_0071a574 < dVar15) {
    dVar16 = 1.0 / SQRT(dVar15);
    dVar16 = -(dVar15 * dVar16 * dVar16 - DAT_0071a580) * dVar16 * DAT_0071a588;
    dVar16 = -(dVar15 * dVar16 * dVar16 - DAT_0071a580) * dVar16 * DAT_0071a588;
    dVar15 = (double)(float)(dVar16 * DAT_0071a588 *
                            dVar15 * -(dVar15 * dVar16 * dVar16 - DAT_0071a580));
  }
  param_1[3] = (int)(float)((double)DAT_0071a590 / dVar15);
  if ((int)uVar13 != 0) {
    uVar12 = uVar13 & 0xffffffff;
    piVar7 = (int *)(puVar4 + 0x1f0);
    piVar11 = param_1 + 0xd;
    do {
      iVar6 = (int)(((longlong)(int)uVar1 * (longlong)*piVar7 & 0xffffffffU) / uVar8);
      *piVar11 = iVar6;
      if (iVar6 == 0) {
        *piVar11 = 1;
      }
      uVar12 = uVar12 - 1;
      piVar7 = piVar7 + 1;
      piVar11 = piVar11 + 1;
    } while (uVar12 != 0);
  }
  param_1[8] = 1;
  *(uint *)((int)param_1 + (int)((uVar13 & 0xffffffff) << 2) + 0x34) = uVar1;
  return param_1;
}



//==== 005f5f70  ns=Global  size=0x2e8
// sig: undefined FUN_005f5f70(void)
// callers(1): 005f87d0 FUN_005f87d0
// callees(1): 005d0140 libc::memset

void FUN_005f5f70(int *param_1,uint *param_2,uint *param_3)

{
  byte bVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  char *pcVar9;
  char cVar10;
  uint *puVar11;
  uint *puVar12;
  longlong lVar13;
  int iVar14;
  uint uVar15;
  uint uVar17;
  ulonglong uVar16;
  
  if (*param_1 != param_1[1]) {
    return;
  }
  uVar7 = (ulonglong)param_2[2];
  uVar4 = param_1[10];
  uVar8 = (ulonglong)uVar4;
  puVar11 = (uint *)param_2[1];
  uVar6 = *param_2;
  if (uVar7 < uVar8) {
    uVar5 = (ulonglong)uVar6 | (ulonglong)*puVar11 << (uVar7 & 0x7f);
    lVar13 = (uVar7 + 0x20) - uVar8;
    uVar15 = (uint)lVar13;
    uVar7 = uVar5 >> (uVar8 & 0x7f);
    uVar17 = (uint)uVar7;
    uVar5 = 0xffffffff >> (0x20 - uVar4 & 0x3f) & uVar5;
    uVar6 = (uint)uVar5;
    puVar11 = puVar11 + 1;
  }
  else {
    lVar13 = uVar7 - uVar8;
    uVar15 = (uint)lVar13;
    uVar17 = uVar6 >> (uVar8 & 0x7f);
    uVar7 = (ulonglong)uVar17;
    uVar6 = 0xffffffffU >> (0x20 - uVar4 & 0x3f) & uVar6;
    uVar5 = (ulonglong)uVar6;
  }
  if (uVar6 != 0) {
    uVar17 = (uint)uVar7;
    uVar15 = (uint)lVar13;
    if (uVar5 <= (uint)param_1[0xb]) {
      pcVar9 = (char *)param_1[0xc];
      *param_1 = (int)pcVar9;
      param_1[1] = (int)(pcVar9 + (int)uVar5);
      if (uVar15 == 0) {
        uVar8 = 0x1f;
        puVar12 = puVar11 + 1;
        uVar7 = (ulonglong)*puVar11;
      }
      else {
        uVar8 = lVar13 - 1;
        puVar12 = puVar11;
      }
      iVar14 = (int)uVar8;
      uVar16 = (uVar7 << 0x20) >> 0x21;
      puVar11 = puVar12;
      if ((uVar7 & 1) == 0) {
        uVar4 = param_1[8];
        iVar14 = param_1[9];
        uVar6 = 0xffffffff >> (0x20 - uVar4 & 0x3f);
        while( true ) {
          uVar15 = (uint)uVar8;
          uVar17 = (uint)uVar16;
          if ((uVar8 & 0xffffffff) < (ulonglong)uVar4) {
            if (param_3 <= puVar11) goto LAB_005f6000;
            uVar2 = *puVar11;
            bVar1 = *(byte *)(iVar14 + ((uVar17 | uVar2 << (uVar15 & 0x3f)) & uVar6));
            bVar3 = bVar1 >> 4;
            uVar7 = (ulonglong)bVar3;
            cVar10 = *(char *)((int)param_1 + (bVar1 & 0xf) + 0x10);
            if ((uVar8 & 0xffffffff) < uVar7) {
              puVar11 = puVar11 + 1;
              uVar16 = (ulonglong)(uVar2 >> (bVar3 - uVar15 & 0x3f));
              uVar8 = (uVar8 - uVar7) + 0x20;
            }
            else {
              uVar8 = uVar8 - uVar7;
              uVar16 = (ulonglong)(uVar17 >> (uint)bVar3);
            }
          }
          else {
            bVar1 = *(byte *)(iVar14 + (uVar17 & uVar6));
            bVar3 = bVar1 >> 4;
            uVar8 = uVar8 - bVar3;
            uVar16 = (ulonglong)(uVar17 >> bVar3);
            cVar10 = *(char *)((int)param_1 + (bVar1 & 0xf) + 0x10);
          }
          if (cVar10 != '\0') {
            if ((int)uVar8 == 0) {
              uVar8 = 0x1f;
              puVar12 = puVar11 + 1;
              uVar16 = (ulonglong)*puVar11;
            }
            else {
              uVar8 = uVar8 - 1;
              puVar12 = puVar11;
            }
            uVar7 = uVar16 & 1;
            uVar16 = (uVar16 << 0x20) >> 0x21;
            puVar11 = puVar12;
            if (uVar7 != 0) {
              cVar10 = -cVar10;
            }
          }
          uVar17 = (uint)uVar16;
          uVar15 = (uint)uVar8;
          *pcVar9 = cVar10;
          uVar5 = uVar5 - 1;
          if (uVar5 == 0) break;
          pcVar9 = pcVar9 + 1;
        }
      }
      else {
        if ((uVar8 & 0xffffffff) < 4) {
          puVar11 = puVar12 + 1;
          iVar14 = iVar14 + 0x20;
          uVar16 = uVar16 | (ulonglong)*puVar12 << (uVar8 & 0x7f);
        }
        uVar4 = (uint)uVar16 & 0xf;
        uVar15 = iVar14 - 4;
        uVar7 = uVar16 >> 4;
        uVar17 = (uint)uVar7;
        if ((uVar16 & 0xf) != 0) {
          if (uVar15 == 0) {
            uVar15 = 0x1f;
            uVar7 = (ulonglong)*puVar11;
            puVar11 = puVar11 + 1;
          }
          else {
            uVar15 = iVar14 - 5;
          }
          uVar17 = (uint)uVar7 >> 1;
          if ((uVar7 & 1) != 0) {
            uVar4 = -uVar4;
            uVar17 = (uint)uVar7 >> 1;
          }
        }
        libc::memset(pcVar9,uVar4,uVar5);
      }
      goto LAB_005f6010;
    }
  }
LAB_005f6000:
  param_1[1] = param_1[0xc];
  *param_1 = param_1[0xc] + 4;
LAB_005f6010:
  param_2[2] = uVar15;
  param_2[1] = (uint)puVar11;
  *param_2 = uVar17;
  return;
}



//==== 005f6258  ns=Global  size=0x3c4
// sig: undefined FUN_005f6258(void)
// callers(0): 
// callees(1): 005d0140 libc::memset

void FUN_005f6258(int *param_1,uint *param_2,int param_3,uint *param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;
  uint uVar6;
  byte *pbVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  byte bVar12;
  uint *puVar13;
  uint uVar14;
  uint uVar15;
  longlong lVar16;
  uint uVar17;
  ulonglong uVar18;
  
  if (*param_1 != param_1[1]) {
    return;
  }
  uVar8 = (ulonglong)param_2[2];
  uVar1 = param_1[10];
  uVar9 = (ulonglong)uVar1;
  puVar13 = (uint *)param_2[1];
  uVar14 = *param_2;
  if (uVar8 < uVar9) {
    uVar10 = (ulonglong)uVar14 | (ulonglong)*puVar13 << (uVar8 & 0x7f);
    lVar16 = (uVar8 + 0x20) - uVar9;
    uVar17 = (uint)lVar16;
    uVar8 = uVar10 >> (uVar9 & 0x7f);
    uVar15 = (uint)uVar8;
    uVar10 = 0xffffffff >> (0x20 - uVar1 & 0x3f) & uVar10;
    uVar14 = (uint)uVar10;
    puVar13 = puVar13 + 1;
  }
  else {
    lVar16 = uVar8 - uVar9;
    uVar17 = (uint)lVar16;
    uVar15 = uVar14 >> (uVar9 & 0x7f);
    uVar8 = (ulonglong)uVar15;
    uVar14 = 0xffffffffU >> (0x20 - uVar1 & 0x3f) & uVar14;
    uVar10 = (ulonglong)uVar14;
  }
  if (uVar14 != 0) {
    uVar15 = (uint)uVar8;
    uVar17 = (uint)lVar16;
    if ((int)uVar10 <= param_1[0xb]) {
      pbVar7 = (byte *)param_1[0xc];
      uVar1 = param_1[8];
      iVar2 = param_1[9];
      *param_1 = (int)pbVar7;
      param_1[1] = (int)(pbVar7 + (int)uVar10);
      uVar14 = *(uint *)(param_3 + 0x180);
      if (uVar17 == 0) {
        uVar9 = 0x1f;
        uVar8 = (ulonglong)*puVar13;
        puVar13 = puVar13 + 1;
      }
      else {
        uVar9 = lVar16 - 1;
      }
      if ((uVar8 & 1) != 0) {
        uVar10 = -uVar10 - 0x14;
      }
      uVar8 = (uVar8 << 0x20) >> 0x21;
      uVar3 = 0xffffffff >> (0x20 - uVar1 & 0x3f);
      uVar18 = uVar10 & 0xffffffff;
      if ((int)uVar10 + -1 < 0) {
        uVar18 = 1;
      }
      do {
        uVar17 = (uint)uVar9;
        iVar4 = uVar14 * 4;
        uVar6 = *(uint *)(param_3 + iVar4 + 0x100);
        uVar15 = (uint)uVar8;
        if ((uVar9 & 0xffffffff) < (ulonglong)uVar6) {
          if (param_4 <= puVar13) break;
          bVar12 = *(byte *)(((uVar15 | *puVar13 << (uVar17 & 0x3f)) &
                             0xffffffffU >> (0x20 - uVar6 & 0x3f)) +
                            *(int *)(param_3 + iVar4 + 0x140));
          uVar8 = ((ulonglong)bVar12 << 0x20) >> 0x24;
          uVar6 = (uint)(bVar12 >> 4);
          uVar11 = uVar9 - uVar8;
          uVar14 = (uint)*(byte *)(param_3 + uVar14 * 0x10 + (bVar12 & 0xf));
          if (uVar8 <= (uVar9 & 0xffffffff)) goto LAB_005f6450;
          uVar11 = uVar11 + 0x20;
          uVar15 = *puVar13 >> (uVar6 - uVar17 & 0x3f);
          puVar13 = puVar13 + 1;
          if ((ulonglong)uVar1 <= (uVar11 & 0xffffffff)) goto LAB_005f6458;
LAB_005f6538:
          bVar12 = *(byte *)(iVar2 + ((uVar15 | *puVar13 << ((uint)uVar11 & 0x3f)) & uVar3));
          bVar5 = bVar12 >> 4;
          uVar8 = (ulonglong)(uVar15 >> (uint)bVar5);
          uVar9 = uVar11 - bVar5;
          bVar12 = *(byte *)((int)param_1 + (bVar12 & 0xf) + 0x10);
          if ((uVar11 & 0xffffffff) < (ulonglong)bVar5) {
            uVar9 = uVar9 + 0x20;
            uVar8 = (ulonglong)(*puVar13 >> ((uint)bVar5 - (uint)uVar11 & 0x3f));
            puVar13 = puVar13 + 1;
          }
        }
        else {
          bVar12 = *(byte *)((uVar15 & 0xffffffffU >> (0x20 - uVar6 & 0x3f)) +
                            *(int *)(param_3 + iVar4 + 0x140));
          uVar11 = uVar9 - (((ulonglong)bVar12 << 0x20) >> 0x24);
          uVar6 = (uint)(bVar12 >> 4);
          uVar14 = (uint)*(byte *)(param_3 + uVar14 * 0x10 + (bVar12 & 0xf));
LAB_005f6450:
          uVar15 = uVar15 >> uVar6;
          if ((uVar11 & 0xffffffff) < (ulonglong)uVar1) goto LAB_005f6538;
LAB_005f6458:
          bVar12 = *(byte *)(iVar2 + (uVar15 & uVar3));
          bVar5 = bVar12 >> 4;
          uVar9 = uVar11 - bVar5;
          uVar8 = (ulonglong)(uVar15 >> bVar5);
          bVar12 = *(byte *)((int)param_1 + (bVar12 & 0xf) + 0x10);
        }
        uVar15 = (uint)uVar8;
        uVar17 = (uint)uVar9;
        uVar10 = uVar10 - 1;
        *pbVar7 = (char)uVar14 << 4 | bVar12;
        uVar18 = uVar18 - 1;
        if (uVar18 == 0) goto LAB_005f65e0;
        pbVar7 = pbVar7 + 1;
      } while( true );
    }
  }
  param_1[1] = param_1[0xc];
  *param_1 = param_1[0xc] + 4;
LAB_005f6340:
  param_2[2] = uVar17;
  param_2[1] = (uint)puVar13;
  *param_2 = uVar15;
  return;
LAB_005f65e0:
  if ((int)uVar10 < -0x16) {
    libc::memset((undefined1 *)param_1[0xc],*(undefined1 *)param_1[0xc],-uVar10 - 0x15 & 0xffffffff)
    ;
    *(uint *)(param_3 + 0x180) = uVar14;
  }
  else {
    *(uint *)(param_3 + 0x180) = uVar14;
  }
  goto LAB_005f6340;
}



//==== 005f6620  ns=Global  size=0x3e4
// sig: undefined FUN_005f6620(void)
// callers(1): 005f87d0 FUN_005f87d0
// callees(1): 005d0140 libc::memset

void FUN_005f6620(int *param_1,uint *param_2,int param_3,uint *param_4)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  byte bVar6;
  uint uVar7;
  char *pcVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint *puVar14;
  uint uVar15;
  uint uVar16;
  longlong lVar17;
  uint uVar18;
  ulonglong uVar19;
  
  if (*param_1 != param_1[1]) {
    return;
  }
  uVar9 = (ulonglong)param_2[2];
  uVar2 = param_1[10];
  uVar10 = (ulonglong)uVar2;
  puVar14 = (uint *)param_2[1];
  uVar15 = *param_2;
  if (uVar9 < uVar10) {
    uVar11 = (ulonglong)uVar15 | (ulonglong)*puVar14 << (uVar9 & 0x7f);
    lVar17 = (uVar9 + 0x20) - uVar10;
    uVar18 = (uint)lVar17;
    uVar9 = uVar11 >> (uVar10 & 0x7f);
    uVar16 = (uint)uVar9;
    uVar11 = 0xffffffff >> (0x20 - uVar2 & 0x3f) & uVar11;
    uVar15 = (uint)uVar11;
    puVar14 = puVar14 + 1;
  }
  else {
    lVar17 = uVar9 - uVar10;
    uVar18 = (uint)lVar17;
    uVar16 = uVar15 >> (uVar10 & 0x7f);
    uVar9 = (ulonglong)uVar16;
    uVar15 = 0xffffffffU >> (0x20 - uVar2 & 0x3f) & uVar15;
    uVar11 = (ulonglong)uVar15;
  }
  if (uVar15 != 0) {
    uVar16 = (uint)uVar9;
    uVar18 = (uint)lVar17;
    if ((int)uVar11 <= param_1[0xb]) {
      pcVar8 = (char *)param_1[0xc];
      uVar2 = param_1[8];
      iVar3 = param_1[9];
      *param_1 = (int)pcVar8;
      param_1[1] = (int)(pcVar8 + (int)uVar11);
      uVar15 = *(uint *)(param_3 + 0x180);
      if (uVar18 == 0) {
        uVar10 = 0x1f;
        uVar9 = (ulonglong)*puVar14;
        puVar14 = puVar14 + 1;
      }
      else {
        uVar10 = lVar17 - 1;
      }
      if ((uVar9 & 1) != 0) {
        uVar11 = -uVar11 - 0x14;
      }
      uVar9 = (uVar9 << 0x20) >> 0x21;
      uVar4 = 0xffffffff >> (0x20 - uVar2 & 0x3f);
      uVar19 = uVar11 & 0xffffffff;
      if ((int)uVar11 + -1 < 0) {
        uVar19 = 1;
      }
      do {
        uVar18 = (uint)uVar10;
        iVar5 = uVar15 * 4;
        uVar7 = *(uint *)(param_3 + iVar5 + 0x100);
        uVar16 = (uint)uVar9;
        if ((uVar10 & 0xffffffff) < (ulonglong)uVar7) {
          if (param_4 <= puVar14) break;
          bVar1 = *(byte *)(((uVar16 | *puVar14 << (uVar18 & 0x3f)) &
                            0xffffffffU >> (0x20 - uVar7 & 0x3f)) +
                           *(int *)(param_3 + iVar5 + 0x140));
          uVar9 = ((ulonglong)bVar1 << 0x20) >> 0x24;
          uVar7 = (uint)(bVar1 >> 4);
          uVar12 = uVar10 - uVar9;
          uVar15 = (uint)*(byte *)(param_3 + uVar15 * 0x10 + (bVar1 & 0xf));
          if (uVar9 <= (uVar10 & 0xffffffff)) goto LAB_005f6818;
          uVar12 = uVar12 + 0x20;
          uVar16 = *puVar14 >> (uVar7 - uVar18 & 0x3f);
          puVar14 = puVar14 + 1;
          if ((ulonglong)uVar2 <= (uVar12 & 0xffffffff)) goto LAB_005f6820;
LAB_005f6920:
          bVar1 = *(byte *)(iVar3 + ((uVar16 | *puVar14 << ((uint)uVar12 & 0x3f)) & uVar4));
          bVar6 = bVar1 >> 4;
          uVar9 = (ulonglong)(uVar16 >> (uint)bVar6);
          uVar10 = uVar12 - bVar6;
          uVar13 = (ulonglong)*(byte *)((int)param_1 + (bVar1 & 0xf) + 0x10);
          if ((uVar12 & 0xffffffff) < (ulonglong)bVar6) {
            uVar10 = uVar10 + 0x20;
            uVar9 = (ulonglong)(*puVar14 >> ((uint)bVar6 - (uint)uVar12 & 0x3f));
            puVar14 = puVar14 + 1;
          }
        }
        else {
          bVar1 = *(byte *)((uVar16 & 0xffffffffU >> (0x20 - uVar7 & 0x3f)) +
                           *(int *)(param_3 + iVar5 + 0x140));
          uVar12 = uVar10 - (((ulonglong)bVar1 << 0x20) >> 0x24);
          uVar7 = (uint)(bVar1 >> 4);
          uVar15 = (uint)*(byte *)(param_3 + uVar15 * 0x10 + (bVar1 & 0xf));
LAB_005f6818:
          uVar16 = uVar16 >> uVar7;
          if ((uVar12 & 0xffffffff) < (ulonglong)uVar2) goto LAB_005f6920;
LAB_005f6820:
          bVar1 = *(byte *)(iVar3 + (uVar16 & uVar4));
          bVar6 = bVar1 >> 4;
          uVar10 = uVar12 - bVar6;
          uVar9 = (ulonglong)(uVar16 >> bVar6);
          uVar13 = (ulonglong)*(byte *)((int)param_1 + (bVar1 & 0xf) + 0x10);
        }
        uVar16 = (uint)uVar9;
        uVar18 = (uint)uVar10;
        uVar13 = uVar13 | (ulonglong)uVar15 << 4;
        bVar6 = (byte)uVar13;
        bVar1 = -(bVar6 & 0x7f);
        if ((uVar13 & 0x80) == 0) {
          bVar1 = bVar6 & 0x7f;
        }
        uVar11 = uVar11 - 1;
        *pcVar8 = bVar1 + 0x80;
        uVar19 = uVar19 - 1;
        if (uVar19 == 0) goto LAB_005f69c8;
        pcVar8 = pcVar8 + 1;
      } while( true );
    }
  }
  param_1[1] = param_1[0xc];
  *param_1 = param_1[0xc] + 4;
LAB_005f6708:
  param_2[2] = uVar18;
  param_2[1] = (uint)puVar14;
  *param_2 = uVar16;
  return;
LAB_005f69c8:
  if ((int)uVar11 < -0x16) {
    libc::memset((undefined1 *)param_1[0xc],*(undefined1 *)param_1[0xc],-uVar11 - 0x15 & 0xffffffff)
    ;
    *(uint *)(param_3 + 0x180) = uVar15;
  }
  else {
    *(uint *)(param_3 + 0x180) = uVar15;
  }
  goto LAB_005f6708;
}



//==== 005f6a08  ns=Global  size=0x384
// sig: undefined FUN_005f6a08(void)
// callers(1): 005f87d0 FUN_005f87d0
// callees(1): 005d0140 libc::memset

void FUN_005f6a08(uint *param_1,uint *param_2,uint *param_3)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  undefined1 *puVar4;
  byte bVar5;
  undefined *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint uVar14;
  ulonglong uVar13;
  uint *puVar15;
  uint *puVar16;
  ulonglong uVar17;
  uint uVar18;
  longlong lVar19;
  ulonglong uVar20;
  int iVar21;
  uint uVar22;
  
  if (*param_1 != param_1[1]) {
    return;
  }
  uVar10 = (ulonglong)param_2[2];
  uVar2 = param_1[10];
  uVar11 = (ulonglong)uVar2;
  puVar15 = (uint *)param_2[1];
  uVar9 = *param_2;
  if (uVar10 < uVar11) {
    uVar8 = (ulonglong)uVar9 | (ulonglong)*puVar15 << (uVar10 & 0x7f);
    lVar19 = (uVar10 + 0x20) - uVar11;
    uVar22 = (uint)lVar19;
    uVar10 = uVar8 >> (uVar11 & 0x7f);
    uVar18 = (uint)uVar10;
    uVar8 = 0xffffffff >> (0x20 - uVar2 & 0x3f) & uVar8;
    uVar9 = (uint)uVar8;
    puVar15 = puVar15 + 1;
  }
  else {
    lVar19 = uVar10 - uVar11;
    uVar22 = (uint)lVar19;
    uVar18 = uVar9 >> (uVar11 & 0x7f);
    uVar10 = (ulonglong)uVar18;
    uVar9 = 0xffffffffU >> (0x20 - uVar2 & 0x3f) & uVar9;
    uVar8 = (ulonglong)uVar9;
  }
  if (uVar9 != 0) {
    uVar18 = (uint)uVar10;
    uVar22 = (uint)lVar19;
    if (uVar8 <= param_1[0xb]) {
      uVar2 = param_1[0xc];
      uVar11 = (ulonglong)uVar2;
      *param_1 = uVar2;
      param_1[1] = uVar2 + (int)uVar8;
      puVar6 = PTR_DAT_0071a598;
      if (uVar22 == 0) {
        uVar20 = 0x1f;
        puVar16 = puVar15 + 1;
        uVar10 = (ulonglong)*puVar15;
      }
      else {
        uVar20 = lVar19 - 1;
        puVar16 = puVar15;
      }
      iVar21 = (int)uVar20;
      uVar17 = (uVar10 << 0x20) >> 0x21;
      uVar18 = (uint)uVar10 >> 1;
      puVar15 = puVar16;
      if ((uVar10 & 1) == 0) {
        uVar2 = param_1[8];
        uVar9 = param_1[9];
        uVar3 = 0xffffffff >> (0x20 - uVar2 & 0x3f);
        uVar10 = 0;
        if ((uVar20 & 0xffffffff) < (ulonglong)uVar2) goto LAB_005f6c34;
        do {
          bVar1 = *(byte *)(uVar9 + ((uint)uVar17 & uVar3));
          bVar5 = bVar1 >> 4;
          uVar20 = uVar20 - bVar5;
          uVar17 = (ulonglong)((uint)uVar17 >> bVar5);
          uVar12 = (ulonglong)*(byte *)((int)param_1 + (bVar1 & 0xf) + 0x10);
          puVar15 = puVar16;
LAB_005f6ba4:
          uVar18 = (uint)uVar17;
          uVar22 = (uint)uVar20;
          if (uVar12 < 0xc) {
            puVar4 = (undefined1 *)uVar11;
            uVar8 = uVar8 - 1;
            iVar21 = (int)uVar8;
            uVar11 = uVar11 + 1;
            *puVar4 = (char)uVar12;
            uVar10 = uVar12;
          }
          else {
            uVar12 = (ulonglong)(byte)puVar6[(int)uVar12 + -0xc];
            if ((uVar8 & 0xffffffff) < uVar12) goto LAB_005f6ad0;
            uVar7 = uVar10 << 8 | uVar10;
            uVar8 = uVar8 - uVar12;
            uVar14 = (uint)uVar7 | (uint)(uVar7 << 0x10);
            uVar7 = uVar11;
            uVar13 = uVar12;
            if ((uVar11 & 3) == 0) {
              do {
                uVar11 = uVar7 + 4;
                *(uint *)uVar7 = uVar14;
                if ((uVar12 - 4 & 0xff) == 0) break;
                uVar12 = uVar12 - 8;
                puVar16 = (uint *)uVar11;
                uVar11 = uVar7 + 8;
                *puVar16 = uVar14;
                uVar7 = uVar11;
              } while ((uVar12 & 0xff) != 0);
            }
            else {
              do {
                uVar13 = uVar13 - 1;
                *(undefined1 *)uVar7 = (char)uVar10;
                uVar7 = uVar7 + 1;
              } while ((uVar13 & 0xff) != 0);
              uVar11 = (uVar12 - 1 & 0xff) + uVar11 + 1;
            }
            iVar21 = (int)uVar8;
          }
          if (iVar21 == 0) goto LAB_005f6ad0;
          puVar16 = puVar15;
        } while ((ulonglong)uVar2 <= (uVar20 & 0xffffffff));
LAB_005f6c34:
        uVar22 = (uint)uVar20;
        if (param_3 <= puVar15) goto LAB_005f6ac0;
        uVar14 = *puVar15;
        bVar1 = *(byte *)(uVar9 + ((uVar18 | uVar14 << (uVar22 & 0x3f)) & uVar3));
        bVar5 = bVar1 >> 4;
        uVar7 = (ulonglong)bVar5;
        uVar12 = (ulonglong)*(byte *)((int)param_1 + (bVar1 & 0xf) + 0x10);
        if ((uVar20 & 0xffffffff) < uVar7) {
          puVar15 = puVar15 + 1;
          uVar17 = (ulonglong)(uVar14 >> (bVar5 - uVar22 & 0x3f));
          uVar20 = (uVar20 - uVar7) + 0x20;
        }
        else {
          uVar20 = uVar20 - uVar7;
          uVar17 = (ulonglong)(uVar18 >> (uint)bVar5);
        }
        goto LAB_005f6ba4;
      }
      if ((uVar20 & 0xffffffff) < 4) {
        puVar15 = puVar16 + 1;
        iVar21 = iVar21 + 0x20;
        uVar17 = uVar17 | (ulonglong)*puVar16 << (uVar20 & 0x7f);
      }
      uVar22 = iVar21 - 4;
      uVar18 = (uint)(uVar17 >> 4);
      libc::memset(uVar2,uVar17 & 0xf,uVar8);
      goto LAB_005f6ad0;
    }
  }
LAB_005f6ac0:
  param_1[1] = param_1[0xc];
  *param_1 = param_1[0xc] + 4;
LAB_005f6ad0:
  param_2[2] = uVar22;
  param_2[1] = (uint)puVar15;
  *param_2 = uVar18;
  return;
}



//==== 005f6d90  ns=Global  size=0x3ac
// sig: undefined FUN_005f6d90(void)
// callers(1): 005f87d0 FUN_005f87d0
// callees(1): 00604088 FUN_00604088

void FUN_005f6d90(int *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  undefined2 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  uint *puVar13;
  uint *puVar14;
  uint uVar15;
  uint uVar17;
  ulonglong uVar16;
  int iVar18;
  ulonglong uVar19;
  
  if (*param_1 != param_1[1]) {
    return;
  }
  uVar6 = (ulonglong)param_2[2];
  uVar1 = param_1[10];
  uVar8 = (ulonglong)uVar1;
  puVar13 = (uint *)param_2[1];
  uVar11 = *param_2;
  if (uVar6 < uVar8) {
    uVar9 = (ulonglong)uVar11 | (ulonglong)*puVar13 << (uVar6 & 0x7f);
    uVar6 = (uVar6 + 0x20) - uVar8;
    uVar17 = (uint)uVar6;
    uVar8 = uVar9 >> (uVar8 & 0x7f);
    uVar15 = (uint)uVar8;
    uVar9 = 0xffffffff >> (0x20 - uVar1 & 0x3f) & uVar9;
    uVar11 = (uint)uVar9;
    puVar13 = puVar13 + 1;
  }
  else {
    uVar6 = uVar6 - uVar8;
    uVar17 = (uint)uVar6;
    uVar15 = uVar11 >> (uVar8 & 0x7f);
    uVar8 = (ulonglong)uVar15;
    uVar11 = 0xffffffffU >> (0x20 - uVar1 & 0x3f) & uVar11;
    uVar9 = (ulonglong)uVar11;
  }
  if (uVar11 != 0) {
    uVar15 = (uint)uVar8;
    uVar17 = (uint)uVar6;
    if (uVar9 <= (uint)param_1[0xb] >> 1) {
      puVar2 = (undefined2 *)param_1[0xc];
      puVar14 = puVar13;
      if (param_1[3] == 0) {
        uVar4 = (ulonglong)(uint)param_1[2];
        uVar8 = uVar8 & 0xffffffff;
        if ((uVar6 & 0xffffffff) < uVar4) {
          puVar14 = puVar13 + 1;
          uVar16 = uVar6 & 0x7f;
          uVar6 = uVar6 + 0x20;
          uVar8 = uVar8 | (ulonglong)*puVar13 << uVar16;
        }
        uVar16 = uVar6 - uVar4;
        uVar4 = uVar8 >> (uVar4 & 0x7f);
        uVar8 = 0xffffffff >> (0x20U - param_1[2] & 0x3f) & uVar8;
      }
      else {
        uVar1 = param_1[2];
        uVar8 = uVar8 & 0xffffffff;
        uVar4 = (ulonglong)uVar1 - 1;
        if ((uVar6 & 0xffffffff) < (uVar4 & 0xffffffff)) {
          puVar14 = puVar13 + 1;
          uVar16 = uVar6 & 0x7f;
          uVar6 = uVar6 + 0x20;
          uVar8 = uVar8 | (ulonglong)*puVar13 << uVar16;
        }
        uVar6 = uVar6 - uVar1;
        uVar4 = uVar8 >> (uVar4 & 0x7f);
        uVar8 = 0xffffffff >> (0x21 - uVar1 & 0x3f) & uVar8;
        uVar16 = uVar6 + 1;
        if ((int)uVar8 != 0) {
          if ((int)(uVar6 + 1) == 0) {
            uVar6 = 0x1f;
            uVar4 = (ulonglong)*puVar14;
            puVar14 = puVar14 + 1;
          }
          uVar7 = uVar4 & 1;
          uVar4 = (uVar4 << 0x20) >> 0x21;
          uVar16 = uVar6;
          if (uVar7 != 0) {
            uVar8 = -uVar8;
          }
        }
      }
      uVar15 = (uint)uVar4;
      uVar17 = (uint)uVar16;
      uVar6 = uVar9 - 1;
      *puVar2 = (short)uVar8;
      *param_1 = param_1[0xc];
      param_1[1] = param_1[0xc] + (int)(uVar9 << 1);
      if ((int)uVar6 == 0) goto LAB_005f6e68;
      uVar9 = ZEXT48(puVar2) + 2;
      puVar13 = puVar14;
      if (3 < (uVar16 & 0xffffffff)) goto LAB_005f7084;
LAB_005f6f78:
      uVar15 = (uint)uVar4;
      uVar17 = (uint)uVar16;
      if (puVar13 < param_3) {
        puVar14 = puVar13 + 1;
        uVar16 = uVar16 + 0x1c;
        uVar7 = (ulonglong)(*puVar13 << (uVar17 & 0x3f)) | uVar4 & 0xffffffff;
        uVar4 = (ulonglong)(*puVar13 >> (4 - uVar17 & 0x3f));
        do {
          uVar7 = uVar7 & 0xf;
          uVar12 = uVar6;
          if (8 < (uVar6 & 0xffffffff)) {
            uVar12 = 8;
          }
          if ((int)uVar7 == 0) {
            FUN_00604088(uVar9 & 0xffffffff,uVar8 & 0xffff,uVar12 & 0xffffffff);
LAB_005f7064:
            uVar9 = (uVar12 & 0x7fffffff) * 2 + uVar9;
          }
          else if ((int)uVar12 != 0) {
            uVar19 = uVar12 & 0xffffffff;
            uVar10 = uVar9;
            do {
              uVar4 = uVar4 & 0xffffffff;
              if ((uVar16 & 0xffffffff) < uVar7) {
                uVar1 = *puVar14;
                puVar14 = puVar14 + 1;
                uVar5 = uVar16 & 0x7f;
                uVar16 = uVar16 + 0x20;
                uVar4 = uVar4 | (ulonglong)uVar1 << uVar5;
              }
              uVar5 = 0xffffffff >> (0x20U - (int)uVar7 & 0x3f) & uVar4;
              uVar16 = uVar16 - uVar7;
              uVar4 = uVar4 >> uVar7;
              iVar18 = (int)uVar16;
              if ((int)uVar5 != 0) {
                uVar16 = uVar16 - 1;
                puVar13 = puVar14;
                if (iVar18 == 0) {
                  puVar13 = puVar14 + 1;
                  uVar4 = (ulonglong)*puVar14;
                  uVar16 = 0x1f;
                }
                uVar3 = uVar4 & 1;
                uVar4 = (uVar4 << 0x20) >> 0x21;
                puVar14 = puVar13;
                if (uVar3 != 0) {
                  uVar5 = -uVar5;
                }
              }
              puVar2 = (undefined2 *)uVar10;
              uVar8 = uVar8 + uVar5;
              uVar10 = uVar10 + 2;
              *puVar2 = (short)uVar8;
              uVar19 = uVar19 - 1;
            } while (uVar19 != 0);
            goto LAB_005f7064;
          }
          uVar15 = (uint)uVar4;
          uVar17 = (uint)uVar16;
          uVar6 = uVar6 - uVar12;
          if ((int)uVar6 == 0) goto LAB_005f6e68;
          puVar13 = puVar14;
          if ((uVar16 & 0xffffffff) < 4) goto LAB_005f6f78;
LAB_005f7084:
          uVar7 = uVar4 & 0xffffffff;
          uVar16 = uVar16 - 4;
          uVar4 = (uVar4 << 0x20) >> 0x24;
        } while( true );
      }
    }
  }
  param_1[1] = param_1[0xc];
  *param_1 = param_1[0xc] + 4;
  puVar14 = puVar13;
LAB_005f6e68:
  param_2[2] = uVar17;
  param_2[1] = (uint)puVar14;
  *param_2 = uVar15;
  return;
}



//==== 005f7140  ns=Global  size=0x1618
// sig: undefined FUN_005f7140(void)
// callers(1): 005f87d0 FUN_005f87d0
// callees(0): 

void FUN_005f7140(uint *param_1,undefined4 *param_2,uint *param_3,undefined1 *param_4)

{
  byte bVar1;
  undefined1 uVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  uint uVar8;
  undefined1 *puVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  int iVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  ulonglong uVar16;
  longlong lVar17;
  longlong lVar18;
  int iVar19;
  undefined1 *puVar20;
  undefined1 *puVar21;
  ulonglong uVar22;
  char cVar24;
  ulonglong uVar23;
  ulonglong uVar25;
  uint uVar26;
  uint *puVar27;
  uint *puVar28;
  uint *puVar29;
  uint uVar30;
  undefined1 auStack_90 [4];
  undefined1 auStack_8c [4];
  undefined1 auStack_88 [4];
  undefined1 auStack_84 [4];
  undefined1 local_80 [16];
  
  uVar25 = (ulonglong)param_1[2];
  puVar28 = (uint *)param_1[1];
  uVar11 = (ulonglong)*param_1;
  puVar27 = puVar28;
  if (uVar25 < 4) {
    puVar27 = puVar28 + 1;
    uVar23 = uVar25 & 0x7f;
    uVar25 = uVar25 + 0x20;
    uVar11 = uVar11 | (ulonglong)*puVar28 << uVar23;
  }
  uVar23 = uVar11 & 0xf;
  uVar11 = uVar11 >> 4;
  uVar26 = (uint)uVar11;
  uVar10 = (int)uVar25 - 4;
  bVar1 = PTR_DAT_0071a598[(int)uVar23 + 0x430];
  *param_2 = PTR_DAT_0071a598 + *(int *)(PTR_DAT_0071a598 + (int)(uVar23 << 2) + 0x20) + 0x60;
  *param_3 = (uint)bVar1;
  if ((int)uVar23 == 0) {
    param_4[0xf] = 0xf;
    param_4[1] = 1;
    param_4[2] = 2;
    param_4[3] = 3;
    param_4[4] = 4;
    param_4[5] = 5;
    param_4[6] = 6;
    param_4[7] = 7;
    param_4[8] = 8;
    param_4[9] = 9;
    param_4[10] = 10;
    param_4[0xb] = 0xb;
    param_4[0xc] = 0xc;
    *param_4 = (char)uVar23;
    param_4[0xd] = 0xd;
    param_4[0xe] = 0xe;
    goto LAB_005f7270;
  }
  uVar25 = uVar25 - 5;
  if (uVar10 == 0) {
    uVar25 = 0x1f;
    puVar28 = puVar27 + 1;
    uVar23 = (ulonglong)(*puVar27 >> 1);
    if ((*puVar27 & 1) == 0) goto LAB_005f7390;
  }
  else {
    uVar23 = (uVar11 << 0x20) >> 0x21;
    puVar28 = puVar27;
    if ((uVar11 & 1) == 0) {
LAB_005f7390:
      puVar27 = puVar28;
      if ((uVar25 & 0xffffffff) < 2) {
        puVar27 = puVar28 + 1;
        uVar11 = uVar25 & 0x7f;
        uVar25 = uVar25 + 0x20;
        uVar23 = uVar23 | (ulonglong)*puVar28 << uVar11;
      }
      uVar10 = (uint)uVar23 & 3;
      uVar11 = uVar23 >> 2;
      iVar13 = (int)uVar25;
      if ((uVar23 & 3) == 0) {
        iVar19 = iVar13 + -3;
        puVar28 = puVar27;
        if (iVar13 == 2) {
          iVar19 = 0x1f;
          puVar28 = puVar27 + 1;
          uVar11 = (ulonglong)*puVar27;
        }
        uVar25 = (uVar11 << 0x20) >> 0x21;
        if ((int)(uVar11 & 1) == 0) {
          *param_4 = (char)(uVar11 & 1);
          param_4[1] = 1;
        }
        else {
          *param_4 = 1;
          param_4[1] = 0;
        }
        iVar13 = iVar19 + -1;
        puVar27 = puVar28;
        if (iVar19 == 0) {
          iVar13 = 0x1f;
          puVar27 = puVar28 + 1;
          uVar25 = (ulonglong)*puVar28;
        }
        uVar11 = (uVar25 << 0x20) >> 0x21;
        if ((uVar25 & 1) == 0) {
          param_4[2] = 2;
          param_4[3] = 3;
        }
        else {
          param_4[2] = 3;
          param_4[3] = 2;
        }
        iVar19 = iVar13 + -1;
        puVar28 = puVar27;
        if (iVar13 == 0) {
          iVar19 = 0x1f;
          puVar28 = puVar27 + 1;
          uVar11 = (ulonglong)*puVar27;
        }
        uVar25 = (uVar11 << 0x20) >> 0x21;
        if ((uVar11 & 1) == 0) {
          param_4[4] = 4;
          param_4[5] = 5;
        }
        else {
          param_4[4] = 5;
          param_4[5] = 4;
        }
        iVar13 = iVar19 + -1;
        puVar27 = puVar28;
        if (iVar19 == 0) {
          iVar13 = 0x1f;
          puVar27 = puVar28 + 1;
          uVar25 = (ulonglong)*puVar28;
        }
        uVar11 = (uVar25 << 0x20) >> 0x21;
        if ((uVar25 & 1) == 0) {
          param_4[6] = 6;
          param_4[7] = 7;
        }
        else {
          param_4[6] = 7;
          param_4[7] = 6;
        }
        iVar19 = iVar13 + -1;
        puVar28 = puVar27;
        if (iVar13 == 0) {
          iVar19 = 0x1f;
          puVar28 = puVar27 + 1;
          uVar11 = (ulonglong)*puVar27;
        }
        uVar25 = (uVar11 << 0x20) >> 0x21;
        if ((uVar11 & 1) == 0) {
          param_4[8] = 8;
          param_4[9] = 9;
        }
        else {
          param_4[8] = 9;
          param_4[9] = 8;
        }
        iVar13 = iVar19 + -1;
        puVar27 = puVar28;
        if (iVar19 == 0) {
          iVar13 = 0x1f;
          puVar27 = puVar28 + 1;
          uVar25 = (ulonglong)*puVar28;
        }
        uVar11 = (uVar25 << 0x20) >> 0x21;
        if ((uVar25 & 1) == 0) {
          param_4[10] = 10;
          param_4[0xb] = 0xb;
        }
        else {
          param_4[10] = 0xb;
          param_4[0xb] = 10;
        }
        iVar19 = iVar13 + -1;
        puVar28 = puVar27;
        if (iVar13 == 0) {
          iVar19 = 0x1f;
          puVar28 = puVar27 + 1;
          uVar11 = (ulonglong)*puVar27;
        }
        uVar25 = (uVar11 << 0x20) >> 0x21;
        if ((uVar11 & 1) == 0) {
          param_4[0xc] = 0xc;
          param_4[0xd] = 0xd;
        }
        else {
          param_4[0xc] = 0xd;
          param_4[0xd] = 0xc;
        }
        uVar10 = iVar19 - 1;
        puVar27 = puVar28;
        if (iVar19 == 0) {
          uVar10 = 0x1f;
          puVar27 = puVar28 + 1;
          uVar25 = (ulonglong)*puVar28;
        }
        uVar26 = (uint)uVar25 >> 1;
        if ((uVar25 & 1) == 0) {
          param_4[0xe] = 0xe;
          param_4[0xf] = 0xf;
        }
        else {
          param_4[0xe] = 0xf;
          param_4[0xf] = 0xe;
        }
      }
      else {
        lVar17 = uVar25 - 3;
        puVar28 = puVar27;
        if (iVar13 == 2) {
          lVar17 = 0x1f;
          puVar28 = puVar27 + 1;
          uVar11 = (ulonglong)*puVar27;
        }
        uVar25 = (uVar11 << 0x20) >> 0x21;
        if ((int)(uVar11 & 1) == 0) {
          local_80[0] = (char)(uVar11 & 1);
          local_80[1] = 1;
        }
        else {
          local_80[0] = 1;
          local_80[1] = 0;
        }
        lVar18 = lVar17 + -1;
        puVar27 = puVar28;
        if ((int)lVar17 == 0) {
          lVar18 = 0x1f;
          puVar27 = puVar28 + 1;
          uVar25 = (ulonglong)*puVar28;
        }
        uVar11 = (uVar25 << 0x20) >> 0x21;
        if ((uVar25 & 1) == 0) {
          local_80[2] = 2;
          local_80[3] = 3;
        }
        else {
          local_80[2] = 3;
          local_80[3] = 2;
        }
        lVar17 = lVar18 + -1;
        puVar28 = puVar27;
        if ((int)lVar18 == 0) {
          lVar17 = 0x1f;
          puVar28 = puVar27 + 1;
          uVar11 = (ulonglong)*puVar27;
        }
        uVar25 = (uVar11 << 0x20) >> 0x21;
        if ((uVar11 & 1) == 0) {
          local_80[4] = 4;
          local_80[5] = 5;
        }
        else {
          local_80[4] = 5;
          local_80[5] = 4;
        }
        lVar18 = lVar17 + -1;
        puVar27 = puVar28;
        if ((int)lVar17 == 0) {
          lVar18 = 0x1f;
          puVar27 = puVar28 + 1;
          uVar25 = (ulonglong)*puVar28;
        }
        uVar11 = (uVar25 << 0x20) >> 0x21;
        if ((uVar25 & 1) == 0) {
          local_80[6] = 6;
          local_80[7] = 7;
        }
        else {
          local_80[6] = 7;
          local_80[7] = 6;
        }
        lVar17 = lVar18 + -1;
        puVar28 = puVar27;
        if ((int)lVar18 == 0) {
          lVar17 = 0x1f;
          puVar28 = puVar27 + 1;
          uVar11 = (ulonglong)*puVar27;
        }
        uVar25 = (uVar11 << 0x20) >> 0x21;
        if ((uVar11 & 1) == 0) {
          local_80[8] = 8;
          local_80[9] = 9;
        }
        else {
          local_80[8] = 9;
          local_80[9] = 8;
        }
        lVar18 = lVar17 + -1;
        puVar27 = puVar28;
        if ((int)lVar17 == 0) {
          lVar18 = 0x1f;
          puVar27 = puVar28 + 1;
          uVar25 = (ulonglong)*puVar28;
        }
        uVar11 = (uVar25 << 0x20) >> 0x21;
        if ((uVar25 & 1) == 0) {
          local_80[10] = 10;
          local_80[0xb] = 0xb;
        }
        else {
          local_80[10] = 0xb;
          local_80[0xb] = 10;
        }
        lVar17 = lVar18 + -1;
        puVar28 = puVar27;
        if ((int)lVar18 == 0) {
          lVar17 = 0x1f;
          puVar28 = puVar27 + 1;
          uVar11 = (ulonglong)*puVar27;
        }
        uVar25 = (uVar11 << 0x20) >> 0x21;
        if ((uVar11 & 1) == 0) {
          local_80[0xc] = 0xc;
          local_80[0xd] = 0xd;
        }
        else {
          local_80[0xc] = 0xd;
          local_80[0xd] = 0xc;
        }
        uVar11 = lVar17 - 1;
        puVar27 = puVar28;
        if ((int)lVar17 == 0) {
          uVar11 = 0x1f;
          puVar27 = puVar28 + 1;
          uVar25 = (ulonglong)*puVar28;
        }
        uVar23 = (uVar25 << 0x20) >> 0x21;
        if ((uVar25 & 1) == 0) {
          local_80[0xe] = 0xe;
          local_80[0xf] = 0xf;
        }
        else {
          local_80[0xe] = 0xf;
          local_80[0xf] = 0xe;
        }
        uVar26 = (uint)uVar25 >> 1;
        uVar3 = (uint)uVar11;
        if (uVar10 == 1) {
          if ((uVar11 & 0xffffffff) < 3) {
            uVar23 = *puVar27 << (uVar3 & 0x3f) | uVar23;
          }
          uVar23 = uVar23 & 7;
          puVar7 = local_80;
          puVar4 = local_80 + 2;
          uVar8 = 2;
          uVar10 = 2;
          uVar25 = 0;
          puVar21 = param_4;
          do {
            uVar25 = uVar25 + 1;
            if ((uVar23 & 1) == 0) {
              uVar2 = *puVar7;
              uVar8 = uVar8 - 1;
              puVar7 = puVar7 + 1;
              *puVar21 = uVar2;
            }
            else {
              uVar2 = *puVar4;
              puVar4 = puVar4 + 1;
              uVar10 = uVar10 - 1;
              *puVar21 = uVar2;
            }
            puVar21 = puVar21 + 1;
            uVar23 = (uVar23 << 0x20) >> 0x21;
            if (uVar8 == 0) {
              if (uVar10 != 0) {
                uVar23 = (ulonglong)uVar10;
                do {
                  *puVar21 = *puVar4;
                  puVar21 = puVar21 + 1;
                  uVar23 = uVar23 - 1;
                  puVar4 = puVar4 + 1;
                } while (uVar23 != 0);
              }
              goto LAB_005f81dc;
            }
          } while (uVar10 != 0);
          uVar23 = (ulonglong)uVar8;
          do {
            *puVar21 = *puVar7;
            puVar21 = puVar21 + 1;
            uVar23 = uVar23 - 1;
            puVar7 = puVar7 + 1;
          } while (uVar23 != 0);
LAB_005f81dc:
          uVar26 = uVar26 >> ((uint)uVar25 & 0x3f);
          uVar23 = uVar11 - uVar25;
          puVar28 = puVar27;
          if ((uVar11 & 0xffffffff) < (uVar25 & 0xffffffff)) {
            uVar23 = uVar23 + 0x20;
            puVar28 = puVar27 + 1;
            uVar26 = *puVar27 >> ((uint)uVar25 - uVar3 & 0x3f);
          }
          uVar11 = CONCAT44(uVar26,uVar26);
          if ((uVar23 & 0xffffffff) < 3) {
            uVar10 = uVar26 | *puVar28 << ((uint)uVar23 & 0x3f);
            uVar11 = CONCAT44(uVar10,uVar10);
          }
          uVar11 = uVar11 & 7;
          puVar21 = param_4 + 4;
          puVar7 = local_80 + 4;
          puVar4 = local_80 + 6;
          uVar3 = 2;
          uVar10 = 2;
          uVar25 = 0;
          do {
            uVar25 = uVar25 + 1;
            if ((uVar11 & 1) == 0) {
              uVar2 = *puVar7;
              uVar3 = uVar3 - 1;
              puVar7 = puVar7 + 1;
              *puVar21 = uVar2;
            }
            else {
              uVar2 = *puVar4;
              puVar4 = puVar4 + 1;
              uVar10 = uVar10 - 1;
              *puVar21 = uVar2;
            }
            puVar21 = puVar21 + 1;
            uVar11 = (uVar11 << 0x20) >> 0x21;
            if (uVar3 == 0) {
              if (uVar10 != 0) {
                uVar11 = (ulonglong)uVar10;
                do {
                  *puVar21 = *puVar4;
                  puVar21 = puVar21 + 1;
                  uVar11 = uVar11 - 1;
                  puVar4 = puVar4 + 1;
                } while (uVar11 != 0);
              }
              goto LAB_005f82b8;
            }
          } while (uVar10 != 0);
          uVar11 = (ulonglong)uVar3;
          do {
            *puVar21 = *puVar7;
            puVar21 = puVar21 + 1;
            uVar11 = uVar11 - 1;
            puVar7 = puVar7 + 1;
          } while (uVar11 != 0);
LAB_005f82b8:
          uVar26 = uVar26 >> ((uint)uVar25 & 0x3f);
          uVar11 = uVar23 - uVar25;
          puVar27 = puVar28;
          if ((uVar23 & 0xffffffff) < (uVar25 & 0xffffffff)) {
            uVar11 = uVar11 + 0x20;
            puVar27 = puVar28 + 1;
            uVar26 = *puVar28 >> ((uint)uVar25 - (uint)uVar23 & 0x3f);
          }
          uVar25 = CONCAT44(uVar26,uVar26);
          if ((uVar11 & 0xffffffff) < 3) {
            uVar10 = uVar26 | *puVar27 << ((uint)uVar11 & 0x3f);
            uVar25 = CONCAT44(uVar10,uVar10);
          }
          uVar25 = uVar25 & 7;
          puVar21 = param_4 + 8;
          puVar7 = local_80 + 8;
          puVar4 = local_80 + 10;
          uVar3 = 2;
          uVar10 = 2;
          uVar23 = 0;
          do {
            uVar23 = uVar23 + 1;
            if ((uVar25 & 1) == 0) {
              uVar2 = *puVar7;
              uVar3 = uVar3 - 1;
              puVar7 = puVar7 + 1;
              *puVar21 = uVar2;
            }
            else {
              uVar2 = *puVar4;
              puVar4 = puVar4 + 1;
              uVar10 = uVar10 - 1;
              *puVar21 = uVar2;
            }
            puVar21 = puVar21 + 1;
            uVar25 = (uVar25 << 0x20) >> 0x21;
            if (uVar3 == 0) {
              if (uVar10 != 0) {
                uVar25 = (ulonglong)uVar10;
                do {
                  *puVar21 = *puVar4;
                  puVar21 = puVar21 + 1;
                  uVar25 = uVar25 - 1;
                  puVar4 = puVar4 + 1;
                } while (uVar25 != 0);
              }
              goto LAB_005f8394;
            }
          } while (uVar10 != 0);
          uVar25 = (ulonglong)uVar3;
          do {
            *puVar21 = *puVar7;
            puVar21 = puVar21 + 1;
            uVar25 = uVar25 - 1;
            puVar7 = puVar7 + 1;
          } while (uVar25 != 0);
LAB_005f8394:
          uVar26 = uVar26 >> ((uint)uVar23 & 0x3f);
          uVar25 = uVar11 - uVar23;
          puVar28 = puVar27;
          if ((uVar11 & 0xffffffff) < (uVar23 & 0xffffffff)) {
            uVar25 = uVar25 + 0x20;
            puVar28 = puVar27 + 1;
            uVar26 = *puVar27 >> ((uint)uVar23 - (uint)uVar11 & 0x3f);
          }
          uVar11 = CONCAT44(uVar26,uVar26);
          uVar3 = (uint)uVar25;
          if ((uVar25 & 0xffffffff) < 3) {
            uVar10 = uVar26 | *puVar28 << (uVar3 & 0x3f);
            uVar11 = CONCAT44(uVar10,uVar10);
          }
          uVar11 = uVar11 & 7;
          param_4 = param_4 + 0xc;
          puVar7 = local_80 + 0xc;
          puVar4 = local_80 + 0xe;
          uVar8 = 2;
          uVar10 = 2;
          uVar23 = 0;
          do {
            uVar23 = uVar23 + 1;
            if ((uVar11 & 1) == 0) {
              uVar2 = *puVar7;
              uVar8 = uVar8 - 1;
              puVar7 = puVar7 + 1;
              *param_4 = uVar2;
            }
            else {
              uVar2 = *puVar4;
              puVar4 = puVar4 + 1;
              uVar10 = uVar10 - 1;
              *param_4 = uVar2;
            }
            param_4 = param_4 + 1;
            uVar11 = (uVar11 << 0x20) >> 0x21;
            if (uVar8 == 0) {
              if (uVar10 != 0) {
                uVar11 = (ulonglong)uVar10;
                do {
                  *param_4 = *puVar4;
                  param_4 = param_4 + 1;
                  uVar11 = uVar11 - 1;
                  puVar4 = puVar4 + 1;
                } while (uVar11 != 0);
              }
              goto LAB_005f8470;
            }
          } while (uVar10 != 0);
          uVar11 = (ulonglong)uVar8;
          do {
            *param_4 = *puVar7;
            param_4 = param_4 + 1;
            uVar11 = uVar11 - 1;
            puVar7 = puVar7 + 1;
          } while (uVar11 != 0);
LAB_005f8470:
          uVar8 = (uint)uVar23;
          uVar26 = uVar26 >> (uVar8 & 0x3f);
          uVar10 = uVar3 - uVar8;
          puVar27 = puVar28;
          if ((uVar25 & 0xffffffff) < (uVar23 & 0xffffffff)) {
            uVar10 = uVar10 + 0x20;
            puVar27 = puVar28 + 1;
            uVar26 = *puVar28 >> (uVar8 - uVar3 & 0x3f);
          }
        }
        else {
          if ((uVar11 & 0xffffffff) < 3) {
            uVar23 = *puVar27 << (uVar3 & 0x3f) | uVar23;
          }
          uVar23 = uVar23 & 7;
          puVar14 = auStack_90;
          puVar21 = local_80;
          puVar4 = local_80 + 2;
          uVar30 = 2;
          uVar8 = 2;
          uVar25 = 0;
          puVar7 = puVar21;
          puVar9 = puVar14;
          do {
            uVar25 = uVar25 + 1;
            if ((uVar23 & 1) == 0) {
              uVar2 = *puVar7;
              uVar30 = uVar30 - 1;
              puVar7 = puVar7 + 1;
              *puVar9 = uVar2;
            }
            else {
              uVar2 = *puVar4;
              puVar4 = puVar4 + 1;
              uVar8 = uVar8 - 1;
              *puVar9 = uVar2;
            }
            puVar9 = puVar9 + 1;
            uVar23 = (uVar23 << 0x20) >> 0x21;
            if (uVar30 == 0) {
              if (uVar8 != 0) {
                uVar23 = (ulonglong)uVar8;
                do {
                  *puVar9 = *puVar4;
                  uVar23 = uVar23 - 1;
                  puVar4 = puVar4 + 1;
                  puVar9 = puVar9 + 1;
                } while (uVar23 != 0);
              }
              goto LAB_005f79fc;
            }
          } while (uVar8 != 0);
          uVar23 = (ulonglong)uVar30;
          do {
            *puVar9 = *puVar7;
            uVar23 = uVar23 - 1;
            puVar7 = puVar7 + 1;
            puVar9 = puVar9 + 1;
          } while (uVar23 != 0);
LAB_005f79fc:
          uVar26 = uVar26 >> ((uint)uVar25 & 0x3f);
          uVar23 = uVar11 - uVar25;
          puVar28 = puVar27;
          if ((uVar11 & 0xffffffff) < (uVar25 & 0xffffffff)) {
            uVar23 = uVar23 + 0x20;
            puVar28 = puVar27 + 1;
            uVar26 = *puVar27 >> ((uint)uVar25 - uVar3 & 0x3f);
          }
          uVar11 = CONCAT44(uVar26,uVar26);
          if ((uVar23 & 0xffffffff) < 3) {
            uVar3 = uVar26 | *puVar28 << ((uint)uVar23 & 0x3f);
            uVar11 = CONCAT44(uVar3,uVar3);
          }
          uVar11 = uVar11 & 7;
          puVar5 = auStack_8c;
          puVar7 = local_80 + 4;
          puVar4 = local_80 + 6;
          uVar8 = 2;
          uVar3 = 2;
          uVar25 = 0;
          puVar9 = puVar5;
          do {
            uVar25 = uVar25 + 1;
            if ((uVar11 & 1) == 0) {
              uVar2 = *puVar7;
              uVar8 = uVar8 - 1;
              puVar7 = puVar7 + 1;
              *puVar9 = uVar2;
            }
            else {
              uVar2 = *puVar4;
              puVar4 = puVar4 + 1;
              uVar3 = uVar3 - 1;
              *puVar9 = uVar2;
            }
            puVar9 = puVar9 + 1;
            uVar11 = (uVar11 << 0x20) >> 0x21;
            if (uVar8 == 0) {
              if (uVar3 != 0) {
                uVar11 = (ulonglong)uVar3;
                do {
                  *puVar9 = *puVar4;
                  uVar11 = uVar11 - 1;
                  puVar4 = puVar4 + 1;
                  puVar9 = puVar9 + 1;
                } while (uVar11 != 0);
              }
              goto LAB_005f7abc;
            }
          } while (uVar3 != 0);
          uVar11 = (ulonglong)uVar8;
          do {
            *puVar9 = *puVar7;
            uVar11 = uVar11 - 1;
            puVar7 = puVar7 + 1;
            puVar9 = puVar9 + 1;
          } while (uVar11 != 0);
LAB_005f7abc:
          uVar26 = uVar26 >> ((uint)uVar25 & 0x3f);
          uVar11 = uVar23 - uVar25;
          puVar27 = puVar28;
          if ((uVar23 & 0xffffffff) < (uVar25 & 0xffffffff)) {
            uVar11 = uVar11 + 0x20;
            puVar27 = puVar28 + 1;
            uVar26 = *puVar28 >> ((uint)uVar25 - (uint)uVar23 & 0x3f);
          }
          uVar25 = CONCAT44(uVar26,uVar26);
          if ((uVar11 & 0xffffffff) < 3) {
            uVar3 = uVar26 | *puVar27 << ((uint)uVar11 & 0x3f);
            uVar25 = CONCAT44(uVar3,uVar3);
          }
          uVar25 = uVar25 & 7;
          puVar15 = auStack_88;
          puVar9 = local_80 + 8;
          puVar4 = local_80 + 10;
          uVar8 = 2;
          uVar3 = 2;
          uVar23 = 0;
          puVar7 = puVar9;
          puVar20 = puVar15;
          do {
            uVar23 = uVar23 + 1;
            if ((uVar25 & 1) == 0) {
              uVar2 = *puVar7;
              uVar8 = uVar8 - 1;
              puVar7 = puVar7 + 1;
              *puVar20 = uVar2;
            }
            else {
              uVar2 = *puVar4;
              puVar4 = puVar4 + 1;
              uVar3 = uVar3 - 1;
              *puVar20 = uVar2;
            }
            puVar20 = puVar20 + 1;
            uVar25 = (uVar25 << 0x20) >> 0x21;
            if (uVar8 == 0) {
              if (uVar3 != 0) {
                uVar25 = (ulonglong)uVar3;
                do {
                  *puVar20 = *puVar4;
                  uVar25 = uVar25 - 1;
                  puVar4 = puVar4 + 1;
                  puVar20 = puVar20 + 1;
                } while (uVar25 != 0);
              }
              goto LAB_005f7b7c;
            }
          } while (uVar3 != 0);
          uVar25 = (ulonglong)uVar8;
          do {
            *puVar20 = *puVar7;
            uVar25 = uVar25 - 1;
            puVar7 = puVar7 + 1;
            puVar20 = puVar20 + 1;
          } while (uVar25 != 0);
LAB_005f7b7c:
          uVar26 = uVar26 >> ((uint)uVar23 & 0x3f);
          uVar25 = uVar11 - uVar23;
          puVar28 = puVar27;
          if ((uVar11 & 0xffffffff) < (uVar23 & 0xffffffff)) {
            uVar25 = uVar25 + 0x20;
            puVar28 = puVar27 + 1;
            uVar26 = *puVar27 >> ((uint)uVar23 - (uint)uVar11 & 0x3f);
          }
          uVar11 = CONCAT44(uVar26,uVar26);
          if ((uVar25 & 0xffffffff) < 3) {
            uVar3 = uVar26 | *puVar28 << ((uint)uVar25 & 0x3f);
            uVar11 = CONCAT44(uVar3,uVar3);
          }
          uVar11 = uVar11 & 7;
          puVar6 = auStack_84;
          puVar7 = local_80 + 0xc;
          puVar4 = local_80 + 0xe;
          uVar8 = 2;
          uVar3 = 2;
          uVar23 = 0;
          puVar20 = puVar6;
          do {
            uVar23 = uVar23 + 1;
            if ((uVar11 & 1) == 0) {
              uVar2 = *puVar7;
              uVar8 = uVar8 - 1;
              puVar7 = puVar7 + 1;
              *puVar20 = uVar2;
            }
            else {
              uVar2 = *puVar4;
              puVar4 = puVar4 + 1;
              uVar3 = uVar3 - 1;
              *puVar20 = uVar2;
            }
            puVar20 = puVar20 + 1;
            uVar11 = (uVar11 << 0x20) >> 0x21;
            if (uVar8 == 0) {
              if (uVar3 != 0) {
                uVar11 = (ulonglong)uVar3;
                do {
                  *puVar20 = *puVar4;
                  uVar11 = uVar11 - 1;
                  puVar4 = puVar4 + 1;
                  puVar20 = puVar20 + 1;
                } while (uVar11 != 0);
              }
              goto LAB_005f7c3c;
            }
          } while (uVar3 != 0);
          uVar11 = (ulonglong)uVar8;
          do {
            *puVar20 = *puVar7;
            uVar11 = uVar11 - 1;
            puVar7 = puVar7 + 1;
            puVar20 = puVar20 + 1;
          } while (uVar11 != 0);
LAB_005f7c3c:
          uVar26 = uVar26 >> ((uint)uVar23 & 0x3f);
          uVar11 = uVar25 - uVar23;
          puVar29 = puVar28;
          if ((uVar25 & 0xffffffff) < (uVar23 & 0xffffffff)) {
            uVar11 = uVar11 + 0x20;
            puVar29 = puVar28 + 1;
            uVar26 = *puVar28 >> ((uint)uVar23 - (uint)uVar25 & 0x3f);
          }
          uVar3 = (uint)uVar11;
          if (uVar10 == 2) {
            uVar25 = CONCAT44(uVar26,uVar26);
            if ((uVar11 & 0xffffffff) < 7) {
              uVar10 = uVar26 | *puVar29 << (uVar3 & 0x3f);
              uVar25 = CONCAT44(uVar10,uVar10);
            }
            uVar25 = uVar25 & 0x7f;
            uVar10 = 4;
            uVar8 = 4;
            uVar23 = 0;
            puVar4 = param_4;
            do {
              uVar23 = uVar23 + 1;
              if ((uVar25 & 1) == 0) {
                uVar2 = *puVar14;
                uVar10 = uVar10 - 1;
                puVar14 = puVar14 + 1;
                *puVar4 = uVar2;
              }
              else {
                uVar2 = *puVar5;
                puVar5 = puVar5 + 1;
                uVar8 = uVar8 - 1;
                *puVar4 = uVar2;
              }
              puVar4 = puVar4 + 1;
              uVar25 = (uVar25 << 0x20) >> 0x21;
              if (uVar10 == 0) {
                if (uVar8 != 0) {
                  uVar25 = (ulonglong)uVar8;
                  do {
                    *puVar4 = *puVar5;
                    puVar4 = puVar4 + 1;
                    uVar25 = uVar25 - 1;
                    puVar5 = puVar5 + 1;
                  } while (uVar25 != 0);
                }
                goto LAB_005f8548;
              }
            } while (uVar8 != 0);
            uVar25 = (ulonglong)uVar10;
            do {
              *puVar4 = *puVar14;
              puVar4 = puVar4 + 1;
              uVar25 = uVar25 - 1;
              puVar14 = puVar14 + 1;
            } while (uVar25 != 0);
LAB_005f8548:
            uVar26 = uVar26 >> ((uint)uVar23 & 0x3f);
            uVar25 = uVar11 - uVar23;
            puVar27 = puVar29;
            if ((uVar11 & 0xffffffff) < (uVar23 & 0xffffffff)) {
              uVar25 = uVar25 + 0x20;
              puVar27 = puVar29 + 1;
              uVar26 = *puVar29 >> ((uint)uVar23 - uVar3 & 0x3f);
            }
            uVar11 = CONCAT44(uVar26,uVar26);
            uVar3 = (uint)uVar25;
            if ((uVar25 & 0xffffffff) < 7) {
              uVar10 = uVar26 | *puVar27 << (uVar3 & 0x3f);
              uVar11 = CONCAT44(uVar10,uVar10);
            }
            uVar11 = uVar11 & 0x7f;
            param_4 = param_4 + 8;
            uVar10 = 4;
            uVar8 = 4;
            uVar23 = 0;
            do {
              uVar23 = uVar23 + 1;
              if ((uVar11 & 1) == 0) {
                uVar2 = *puVar15;
                uVar10 = uVar10 - 1;
                puVar15 = puVar15 + 1;
                *param_4 = uVar2;
              }
              else {
                uVar2 = *puVar6;
                puVar6 = puVar6 + 1;
                uVar8 = uVar8 - 1;
                *param_4 = uVar2;
              }
              param_4 = param_4 + 1;
              uVar11 = (uVar11 << 0x20) >> 0x21;
              if (uVar10 == 0) {
                if (uVar8 != 0) {
                  uVar11 = (ulonglong)uVar8;
                  do {
                    *param_4 = *puVar6;
                    param_4 = param_4 + 1;
                    uVar11 = uVar11 - 1;
                    puVar6 = puVar6 + 1;
                  } while (uVar11 != 0);
                }
                goto LAB_005f8624;
              }
            } while (uVar8 != 0);
            uVar11 = (ulonglong)uVar10;
            do {
              *param_4 = *puVar15;
              param_4 = param_4 + 1;
              uVar11 = uVar11 - 1;
              puVar15 = puVar15 + 1;
            } while (uVar11 != 0);
LAB_005f8624:
            uVar8 = (uint)uVar23;
            uVar26 = uVar26 >> (uVar8 & 0x3f);
            uVar10 = uVar3 - uVar8;
            if ((uVar25 & 0xffffffff) < (uVar23 & 0xffffffff)) {
              uVar10 = uVar10 + 0x20;
              uVar26 = *puVar27 >> (uVar8 - uVar3 & 0x3f);
              puVar27 = puVar27 + 1;
            }
          }
          else {
            uVar25 = CONCAT44(uVar26,uVar26);
            if ((uVar11 & 0xffffffff) < 7) {
              uVar10 = uVar26 | *puVar29 << (uVar3 & 0x3f);
              uVar25 = CONCAT44(uVar10,uVar10);
            }
            uVar25 = uVar25 & 0x7f;
            uVar8 = 4;
            uVar10 = 4;
            uVar23 = 0;
            puVar4 = puVar21;
            do {
              uVar23 = uVar23 + 1;
              if ((uVar25 & 1) == 0) {
                uVar2 = *puVar14;
                uVar8 = uVar8 - 1;
                puVar14 = puVar14 + 1;
                *puVar4 = uVar2;
              }
              else {
                uVar2 = *puVar5;
                puVar5 = puVar5 + 1;
                uVar10 = uVar10 - 1;
                *puVar4 = uVar2;
              }
              puVar4 = puVar4 + 1;
              uVar25 = (uVar25 << 0x20) >> 0x21;
              if (uVar8 == 0) {
                if (uVar10 != 0) {
                  uVar25 = (ulonglong)uVar10;
                  do {
                    *puVar4 = *puVar5;
                    uVar25 = uVar25 - 1;
                    puVar5 = puVar5 + 1;
                    puVar4 = puVar4 + 1;
                  } while (uVar25 != 0);
                }
                goto LAB_005f7de4;
              }
            } while (uVar10 != 0);
            uVar25 = (ulonglong)uVar8;
            do {
              *puVar4 = *puVar14;
              uVar25 = uVar25 - 1;
              puVar4 = puVar4 + 1;
              puVar14 = puVar14 + 1;
            } while (uVar25 != 0);
LAB_005f7de4:
            uVar26 = uVar26 >> ((uint)uVar23 & 0x3f);
            uVar25 = uVar11 - uVar23;
            puVar28 = puVar29;
            if ((uVar11 & 0xffffffff) < (uVar23 & 0xffffffff)) {
              uVar25 = uVar25 + 0x20;
              puVar28 = puVar29 + 1;
              uVar26 = *puVar29 >> ((uint)uVar23 - uVar3 & 0x3f);
            }
            uVar11 = CONCAT44(uVar26,uVar26);
            if ((uVar25 & 0xffffffff) < 7) {
              uVar10 = uVar26 | *puVar28 << ((uint)uVar25 & 0x3f);
              uVar11 = CONCAT44(uVar10,uVar10);
            }
            uVar11 = uVar11 & 0x7f;
            uVar3 = 4;
            uVar10 = 4;
            uVar23 = 0;
            puVar4 = puVar9;
            do {
              uVar23 = uVar23 + 1;
              if ((uVar11 & 1) == 0) {
                uVar2 = *puVar15;
                uVar3 = uVar3 - 1;
                puVar15 = puVar15 + 1;
                *puVar4 = uVar2;
              }
              else {
                uVar2 = *puVar6;
                puVar6 = puVar6 + 1;
                uVar10 = uVar10 - 1;
                *puVar4 = uVar2;
              }
              puVar4 = puVar4 + 1;
              uVar11 = (uVar11 << 0x20) >> 0x21;
              if (uVar3 == 0) {
                if (uVar10 != 0) {
                  uVar11 = (ulonglong)uVar10;
                  do {
                    *puVar4 = *puVar6;
                    uVar11 = uVar11 - 1;
                    puVar6 = puVar6 + 1;
                    puVar4 = puVar4 + 1;
                  } while (uVar11 != 0);
                }
                goto LAB_005f7ecc;
              }
            } while (uVar10 != 0);
            uVar11 = (ulonglong)uVar3;
            do {
              *puVar4 = *puVar15;
              uVar11 = uVar11 - 1;
              puVar4 = puVar4 + 1;
              puVar15 = puVar15 + 1;
            } while (uVar11 != 0);
LAB_005f7ecc:
            uVar26 = uVar26 >> ((uint)uVar23 & 0x3f);
            uVar11 = uVar25 - uVar23;
            puVar27 = puVar28;
            if ((uVar25 & 0xffffffff) < (uVar23 & 0xffffffff)) {
              uVar11 = uVar11 + 0x20;
              puVar27 = puVar28 + 1;
              uVar26 = *puVar28 >> ((uint)uVar23 - (uint)uVar25 & 0x3f);
            }
            uVar25 = CONCAT44(uVar26,uVar26);
            uVar3 = (uint)uVar11;
            if ((uVar11 & 0xffffffff) < 0xf) {
              uVar10 = uVar26 | *puVar27 << (uVar3 & 0x3f);
              uVar25 = CONCAT44(uVar10,uVar10);
            }
            uVar25 = uVar25 & 0x7fff;
            uVar10 = 8;
            uVar8 = 8;
            uVar23 = 0;
            do {
              uVar23 = uVar23 + 1;
              if ((uVar25 & 1) == 0) {
                uVar2 = *puVar21;
                uVar10 = uVar10 - 1;
                puVar21 = puVar21 + 1;
                *param_4 = uVar2;
              }
              else {
                uVar2 = *puVar9;
                puVar9 = puVar9 + 1;
                uVar8 = uVar8 - 1;
                *param_4 = uVar2;
              }
              param_4 = param_4 + 1;
              uVar25 = (uVar25 << 0x20) >> 0x21;
              if (uVar10 == 0) {
                if (uVar8 != 0) {
                  uVar25 = (ulonglong)uVar8;
                  do {
                    *param_4 = *puVar9;
                    param_4 = param_4 + 1;
                    uVar25 = uVar25 - 1;
                    puVar9 = puVar9 + 1;
                  } while (uVar25 != 0);
                }
                goto LAB_005f7fa8;
              }
            } while (uVar8 != 0);
            uVar25 = (ulonglong)uVar10;
            do {
              *param_4 = *puVar21;
              param_4 = param_4 + 1;
              uVar25 = uVar25 - 1;
              puVar21 = puVar21 + 1;
            } while (uVar25 != 0);
LAB_005f7fa8:
            uVar8 = (uint)uVar23;
            uVar26 = uVar26 >> (uVar8 & 0x3f);
            uVar10 = uVar3 - uVar8;
            if ((uVar11 & 0xffffffff) < (uVar23 & 0xffffffff)) {
              uVar10 = uVar10 + 0x20;
              uVar26 = *puVar27 >> (uVar8 - uVar3 & 0x3f);
              puVar27 = puVar27 + 1;
            }
          }
        }
      }
      goto LAB_005f7270;
    }
  }
  puVar27 = puVar28;
  if ((uVar25 & 0xffffffff) < 3) {
    puVar27 = puVar28 + 1;
    uVar11 = uVar25 & 0x7f;
    uVar25 = uVar25 + 0x20;
    uVar23 = uVar23 | (ulonglong)*puVar28 << uVar11;
  }
  uVar25 = uVar25 - 3;
  uVar11 = uVar23 & 7;
  uVar16 = 0xffff;
  uVar23 = uVar23 >> 3;
  uVar12 = 0;
  do {
    iVar13 = (int)uVar12;
    uVar12 = uVar12 + 1;
    uVar22 = uVar23 & 0xffffffff;
    if ((uVar25 & 0xffffffff) < 4) {
      uVar26 = *puVar27;
      puVar27 = puVar27 + 1;
      uVar23 = uVar25 & 0x7f;
      uVar25 = uVar25 + 0x20;
      uVar22 = uVar22 | (ulonglong)uVar26 << uVar23;
    }
    uVar25 = uVar25 - 4;
    uVar10 = (uint)uVar25;
    uVar23 = uVar22 >> 4;
    uVar26 = (uint)uVar23;
    param_4[iVar13] = (char)(uVar22 & 0xf);
    uVar16 = uVar16 & ~(ulonglong)(uint)(1 << (int)(uVar22 & 0xf));
  } while ((uVar12 & 0xffffffff) <= uVar11);
  cVar24 = '\0';
  do {
    uVar3 = (uint)uVar16;
    if ((uVar16 & 1) != 0) {
      uVar11 = uVar11 + 1;
      param_4[(int)uVar11] = cVar24;
      if ((int)uVar11 == 0xf) break;
    }
    cVar24 = cVar24 + '\x01';
    uVar16 = (uVar16 << 0x20) >> 0x21;
  } while (uVar3 >> 1 != 0);
LAB_005f7270:
  param_1[2] = uVar10;
  param_1[1] = (uint)puVar27;
  *param_1 = uVar26;
  return;
}



//==== 005f8758  ns=Global  size=0x78
// sig: undefined FUN_005f8758(void)
// callers(1): 005f1788 FUN_005f1788
// callees(0): 

void FUN_005f8758(uint *param_1,uint param_2)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = ((ulonglong)param_2 << 0x20) >> 0x23;
  uVar4 = (uint)((uVar1 & 0x7fffff) << 9);
  uVar2 = (param_2 >> 3) + 0x20f & 0xfffffff0;
  uVar3 = (int)((uVar1 & 0xfffffff) << 1) + 0x40fU & 0xfffffff0;
  param_1[1] = (param_2 >> 4) + 0x20f & 0xfffffff0;
  param_1[8] = (uVar4 - (int)(uVar1 << 7) >> 3) + 0x240;
  param_1[2] = (uVar4 >> 3) + 0x240;
  param_1[3] = ((int)((uVar1 & 0x3ffffff) << 3) + 0x20fU & 0xfffffff0) + 8;
  param_1[5] = uVar2;
  param_1[7] = uVar3;
  *param_1 = uVar2;
  param_1[4] = uVar2;
  param_1[6] = uVar3;
  return;
}



//==== 005f87d0  ns=Global  size=0xa50
// sig: undefined FUN_005f87d0(void)
// callers(1): 005fb780 FUN_005fb780
// callees(6): 005d0140 libc::memset; 005f5f70 FUN_005f5f70; 005f6620 FUN_005f6620; 005f6a08 FUN_005f6a08; 005f6d90 FUN_005f6d90; 005f7140 FUN_005f7140

uint * FUN_005f87d0(uint param_1,int param_2,uint param_3,uint param_4,int param_5,uint *param_6,
                   uint *param_7)

{
  byte bVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  uint uVar6;
  ulonglong uVar7;
  uint *puVar9;
  undefined1 *puVar10;
  ulonglong uVar8;
  ulonglong uVar11;
  ulonglong uVar12;
  uint *puVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  byte bVar16;
  ulonglong uVar17;
  uint uVar18;
  byte in_cr0;
  byte in_cr1;
  byte in_cr2;
  byte in_cr3;
  byte unaff_cr4;
  byte in_cr5;
  byte in_cr6;
  byte in_cr7;
  uint uStack00000008;
  int in_stack_00000074;
  int in_stack_0000007c;
  int in_stack_00000084;
  undefined4 *in_stack_0000008c;
  uint in_stack_00000094;
  undefined4 *in_stack_0000009c;
  uint local_540;
  uint *local_53c;
  uint local_538;
  undefined1 *local_530;
  undefined1 *local_52c;
  undefined1 auStack_520 [16];
  uint local_510;
  int local_50c;
  uint local_508;
  uint local_504;
  undefined1 *local_500;
  undefined4 local_4fc;
  undefined4 local_4f8;
  undefined4 local_4f4;
  undefined4 local_4f0;
  int local_4d4;
  uint local_4d0;
  undefined4 local_4cc;
  byte *local_4c8;
  byte *local_4c4;
  undefined4 local_4c0;
  undefined4 local_4bc;
  int local_4a0;
  uint local_49c;
  undefined4 local_498;
  int local_494;
  undefined4 local_490;
  undefined4 local_48c;
  undefined4 local_488;
  int local_46c;
  uint local_468;
  int local_464;
  int local_460;
  undefined4 local_45c;
  undefined4 local_458;
  undefined4 local_454;
  int local_438;
  uint local_434;
  int local_430;
  undefined4 local_42c;
  undefined4 local_428;
  undefined4 local_424;
  undefined4 local_420;
  int local_404;
  uint local_400;
  undefined4 local_3fc;
  undefined4 local_3f8;
  undefined4 local_3f4;
  undefined4 local_3f0;
  undefined4 local_3ec;
  int local_3d0;
  int local_3cc;
  undefined4 local_3c8;
  byte *local_3c4;
  byte *local_3c0;
  undefined4 local_3bc;
  undefined4 local_3b8;
  byte abStack_3b4 [16];
  uint local_3a4;
  int local_3a0;
  uint local_39c;
  uint local_398;
  byte *local_394;
  undefined4 local_390;
  undefined4 local_38c;
  undefined4 local_388;
  undefined4 local_384;
  int local_368;
  uint local_364;
  undefined4 local_360;
  undefined4 local_110;
  int local_100;
  undefined4 local_dc;
  int local_d8;
  int local_d4;
  uint local_d0;
  int local_cc;
  uint local_c8;
  uint local_c4;
  uint local_c0;
  uint local_bc;
  int local_b8;
  ulonglong local_b0;
  ulonglong local_a0;
  longlong local_98;
  
  uVar7 = ZEXT48(&stack0x00000000);
  uStack00000008 =
       (uint)(in_cr0 & 0xf) << 0x1c | (uint)(in_cr1 & 0xf) << 0x18 | (uint)(in_cr2 & 0xf) << 0x14 |
       (uint)(in_cr3 & 0xf) << 0x10 | (uint)(unaff_cr4 & 0xf) << 0xc | (uint)(in_cr5 & 0xf) << 8 |
       (uint)(in_cr6 & 0xf) << 4 | (uint)(in_cr7 & 0xf);
  local_540 = 0;
  local_538 = 0;
  local_d4 = param_5 * 8 - param_3;
  local_cc = param_2 + (param_4 - 8) * param_5 + param_3 + -8;
  puVar2 = PTR_PTR_0071a5a4;
  if ((in_stack_00000094 & 0x8000) != 0) {
    puVar2 = PTR_PTR_0071a5a0;
  }
  local_a0 = uVar7 - 0x540;
  uVar6 = param_3 >> 3;
  uVar3 = (uint)(((ulonglong)uVar6 & 0x3ffffff) << 6);
  local_498 = *in_stack_0000008c;
  local_3fc = in_stack_0000008c[1];
  uVar4 = (uint)(((ulonglong)uVar6 & 0xfffffff) << 4);
  uVar18 = uVar3 - uVar4;
  local_3c8 = in_stack_0000008c[2];
  local_49c = uVar6 + 0x20f & 0xfffffff0;
  local_394 = (byte *)in_stack_0000008c[3];
  local_400 = (param_3 >> 4) + 0x20f & 0xfffffff0;
  local_398 = (uVar3 >> 3) + 0x20f & 0xfffffff0;
  local_3cc = (uVar6 & 0x7fffff) * 0x40 + 0x200;
  local_39c = 0x20 - (int)LZCOUNT(uVar6 * 8 + 0x1ff);
  local_4d4 = 0x20 - (int)LZCOUNT(uVar6 + 0x1ff);
  local_404 = 0x20 - (int)LZCOUNT((param_3 >> 4) + 0x1ff);
  local_3d0 = 0x20 - (int)LZCOUNT(uVar3 + 0x1ff);
  local_420 = 0;
  local_3bc = 8;
  local_4c8 = (byte *)0x0;
  local_4c4 = (byte *)0x0;
  local_4bc = 0;
  local_42c = 0;
  local_428 = 0;
  local_3f8 = 0;
  local_3f4 = 0;
  local_3f0 = 8;
  local_4c0 = 4;
  local_424 = 4;
  local_3ec = 0;
  local_3c4 = (byte *)0x0;
  local_3c0 = (byte *)0x0;
  local_3b8 = 0;
  local_430 = in_stack_0000008c[4];
  uVar8 = local_a0 & 0xffffffff;
  local_500 = (undefined1 *)in_stack_0000008c[8];
  local_4d0 = (uVar4 >> 3) + 0x40f & 0xfffffff0;
  local_464 = in_stack_0000008c[5];
  local_360 = in_stack_0000008c[6];
  local_4cc = in_stack_0000008c[7];
  local_504 = (uVar18 & 0x1ffffff0) + 0x200;
  local_508 = 0x20 - (int)LZCOUNT(uVar18 + 0x1ff);
  local_4f0 = 0x400;
  local_48c = 5;
  local_488 = 0x10;
  local_460 = 0;
  local_45c = 0;
  local_458 = 5;
  local_454 = 0x10;
  local_494 = 0;
  local_490 = 0;
  local_390 = 0;
  local_38c = 0;
  local_4f4 = 0xb;
  local_388 = 0xb;
  local_384 = 0;
  local_4fc = 0;
  local_4f8 = 0;
  local_530 = (undefined1 *)0x0;
  local_52c = (undefined1 *)0x0;
  local_4a0 = local_4d4;
  local_46c = local_4d4;
  local_468 = local_49c;
  local_438 = local_4d4;
  local_434 = local_49c;
  local_368 = local_4d4;
  local_364 = local_4d0;
  local_100 = param_2;
  local_c4 = param_1;
  local_c0 = param_3;
  local_bc = param_4;
  local_b8 = param_5;
  FUN_005f7140(uVar8,uVar7 - 0x4a4,uVar7 - 0x4a8,uVar7 - 0x4b8);
  local_98 = uVar7 - 0x290;
  uVar14 = 0;
  uVar17 = uVar7 - 0x150;
  FUN_005f7140(uVar8,uVar7 - 0x408,uVar7 - 0x40c,uVar7 - 0x41c);
  do {
    uVar12 = uVar14 & 0xfffffff;
    uVar11 = uVar17 - 0x40;
    uVar15 = uVar17 & 0xffffffff;
    uVar14 = uVar14 + 1;
    uVar17 = uVar17 + 4;
    FUN_005f7140(uVar8,uVar15,uVar11 & 0xffffffff,uVar12 * 0x10 + local_98 & 0xfffffff0);
  } while (uVar14 != 0x10);
  local_dc = 0;
  FUN_005f7140(uVar8,uVar7 - 0x3d4,uVar7 - 0x3d8,uVar7 - 1000);
  local_110 = 0;
  FUN_005f7140(uVar8,uVar7 - 0x3a0,uVar7 - 0x3a4,uVar7 - 0x3b4);
  FUN_005f7140(uVar8,uVar7 - 0x43c,uVar7 - 0x440,uVar7 - 0x450);
  FUN_005f7140(uVar8,uVar7 - 0x470,uVar7 - 0x474,uVar7 - 0x484);
  FUN_005f7140(uVar8,uVar7 - 0x50c,uVar7 - 0x510,uVar7 - 0x520);
  local_53c = param_6;
  if (local_bc != 0) {
    local_b0 = ZEXT48(puVar2);
    local_d8 = in_stack_00000074;
    local_dc = 0;
    local_d0 = 0;
    do {
      uVar8 = local_a0 & 0xffffffff;
      FUN_005f6a08(uVar7 - 0x4c8,uVar8,param_7);
      FUN_005f6a08(uVar7 - 0x42c,uVar8,param_7);
      (*(code *)*(undefined4 *)local_b0)(uVar7 - 0x3f8,uVar8,uVar7 - 0x290,param_7);
      if (local_3c4 == local_3c0) {
        uVar8 = (ulonglong)local_538;
        uVar14 = (ulonglong)local_39c;
        uVar17 = (ulonglong)local_540;
        puVar9 = local_53c;
        if (uVar8 < uVar14) {
          puVar9 = local_53c + 1;
          uVar15 = uVar8 & 0x7f;
          uVar8 = uVar8 + 0x20;
          uVar17 = uVar17 | (ulonglong)*local_53c << uVar15;
        }
        uVar15 = uVar17 >> (uVar14 & 0x7f);
        local_540 = (uint)uVar15;
        uVar8 = uVar8 - uVar14;
        local_538 = (uint)uVar8;
        uVar17 = 0xffffffff >> (0x20 - local_39c & 0x3f) & uVar17;
        if (((int)uVar17 != 0) && (uVar17 <= local_398)) {
          local_3c0 = local_394 + (int)uVar17;
          uVar18 = 0xffffffff >> (0x20 - local_3a4 & 0x3f);
          local_3c4 = local_394;
          pbVar5 = local_394;
          do {
            local_538 = (uint)uVar8;
            local_540 = (uint)uVar15;
            if ((uVar8 & 0xffffffff) < (ulonglong)local_3a4) {
              if (param_7 <= puVar9) break;
              bVar16 = *(byte *)(local_3a0 + ((local_540 | *puVar9 << (local_538 & 0x3f)) & uVar18))
              ;
              uVar15 = ((ulonglong)bVar16 << 0x20) >> 0x24;
              uVar6 = (uint)(bVar16 >> 4);
              uVar14 = uVar8 - uVar15;
              bVar16 = abStack_3b4[bVar16 & 0xf];
              if (uVar15 <= (uVar8 & 0xffffffff)) goto LAB_005f9c94;
              uVar14 = uVar14 + 0x20;
              local_540 = *puVar9 >> (uVar6 - local_538 & 0x3f);
              puVar9 = puVar9 + 1;
              if ((ulonglong)local_3a4 <= (uVar14 & 0xffffffff)) goto LAB_005f9c9c;
LAB_005f9d50:
              bVar1 = *(byte *)(local_3a0 +
                               ((local_540 | *puVar9 << ((uint)uVar14 & 0x3f)) & uVar18));
              uVar11 = ((ulonglong)bVar1 << 0x20) >> 0x24;
              uVar15 = (ulonglong)(local_540 >> (uint)(bVar1 >> 4));
              uVar8 = uVar14 - uVar11;
              uVar12 = (ulonglong)abStack_3b4[bVar1 & 0xf];
              if ((uVar14 & 0xffffffff) < uVar11) {
                uVar8 = uVar8 + 0x20;
                uVar15 = (ulonglong)(*puVar9 >> ((uint)(bVar1 >> 4) - (uint)uVar14 & 0x3f));
                puVar9 = puVar9 + 1;
              }
            }
            else {
              bVar16 = *(byte *)(local_3a0 + (local_540 & uVar18));
              uVar14 = uVar8 - (((ulonglong)bVar16 << 0x20) >> 0x24);
              uVar6 = (uint)(bVar16 >> 4);
              bVar16 = abStack_3b4[bVar16 & 0xf];
LAB_005f9c94:
              local_540 = local_540 >> uVar6;
              if ((uVar14 & 0xffffffff) < (ulonglong)local_3a4) goto LAB_005f9d50;
LAB_005f9c9c:
              bVar1 = *(byte *)(local_3a0 + (local_540 & uVar18));
              uVar8 = uVar14 - (((ulonglong)bVar1 << 0x20) >> 0x24);
              uVar15 = (ulonglong)(local_540 >> (uint)(bVar1 >> 4));
              uVar12 = (ulonglong)abStack_3b4[bVar1 & 0xf];
            }
            local_540 = (uint)uVar15;
            local_538 = (uint)uVar8;
            *pbVar5 = (byte)(uVar12 << 4) | bVar16;
            uVar17 = uVar17 - 1;
            local_53c = puVar9;
            if (uVar17 == 0) goto LAB_005f8c18;
            pbVar5 = pbVar5 + 1;
          } while( true );
        }
        local_3c4 = local_394 + 4;
        local_3c0 = local_394;
        local_53c = puVar9;
      }
LAB_005f8c18:
      uVar8 = local_a0 & 0xffffffff;
      FUN_005f5f70(uVar7 - 0x460,uVar8,param_7);
      FUN_005f5f70(uVar7 - 0x494,uVar8,param_7);
      local_460 = local_430 + (local_494 - local_464);
      FUN_005f6d90(uVar7 - 0x390,uVar8,param_7);
      FUN_005f6d90(uVar7 - 0x4fc,uVar8,param_7);
      if (local_530 == local_52c) {
        uVar14 = (ulonglong)local_538;
        uVar17 = (ulonglong)local_508;
        uVar8 = (ulonglong)local_540;
        puVar9 = local_53c;
        if (uVar14 < uVar17) {
          puVar9 = local_53c + 1;
          uVar15 = uVar14 & 0x7f;
          uVar14 = uVar14 + 0x20;
          uVar8 = uVar8 | (ulonglong)*local_53c << uVar15;
        }
        local_538 = (uint)(uVar14 - uVar17);
        uVar15 = uVar8 >> (uVar17 & 0x7f);
        local_540 = (uint)uVar15;
        uVar8 = 0xffffffff >> (0x20 - local_508 & 0x3f) & uVar8;
        if (((int)uVar8 == 0) || (local_504 < uVar8)) {
LAB_005f9bb8:
          local_530 = local_500 + 4;
          local_52c = local_500;
          local_53c = puVar9;
        }
        else {
          local_52c = local_500 + (int)uVar8;
          local_530 = local_500;
          if (local_538 == 0) {
            uVar14 = 0x1f;
            puVar13 = puVar9 + 1;
            uVar15 = (ulonglong)*puVar9;
          }
          else {
            uVar14 = (uVar14 - uVar17) - 1;
            puVar13 = puVar9;
          }
          uVar17 = (uVar15 << 0x20) >> 0x21;
          local_540 = (uint)uVar15 >> 1;
          if ((uVar15 & 1) == 0) {
            uVar18 = 0xffffffff >> (0x20 - local_510 & 0x3f);
            puVar10 = local_500;
            puVar9 = puVar13;
            while( true ) {
              if ((uVar14 & 0xffffffff) < (ulonglong)local_510) {
                local_538 = (uint)uVar14;
                if (param_7 <= puVar9) goto LAB_005f9bb8;
                uVar6 = *puVar9;
                bVar16 = *(byte *)(local_50c + ((local_540 | uVar6 << (local_538 & 0x3f)) & uVar18))
                ;
                uVar17 = ((ulonglong)bVar16 << 0x20) >> 0x24;
                *puVar10 = auStack_520[bVar16 & 0xf];
                if ((uVar14 & 0xffffffff) < uVar17) {
                  puVar9 = puVar9 + 1;
                  local_540 = uVar6 >> ((bVar16 >> 4) - local_538 & 0x3f);
                  uVar14 = (uVar14 - uVar17) + 0x20;
                  local_538 = (uint)uVar14;
                }
                else {
                  uVar14 = uVar14 - uVar17;
                  local_538 = (uint)uVar14;
                  local_540 = local_540 >> (uint)(bVar16 >> 4);
                }
              }
              else {
                bVar16 = *(byte *)(local_50c + ((uint)uVar17 & uVar18));
                uVar14 = uVar14 - (((ulonglong)bVar16 << 0x20) >> 0x24);
                local_538 = (uint)uVar14;
                local_540 = (uint)uVar17 >> (uint)(bVar16 >> 4);
                *puVar10 = auStack_520[bVar16 & 0xf];
              }
              local_53c = puVar9;
              if (uVar8 == 1) break;
              uVar17 = (ulonglong)local_540;
              puVar10 = puVar10 + 1;
              uVar8 = uVar8 - 1;
            }
          }
          else if ((uVar14 & 0xffffffff) < 4) {
            local_53c = puVar13 + 1;
            uVar17 = uVar17 | (ulonglong)*puVar13 << (uVar14 & 0x7f);
            local_538 = (int)uVar14 + 0x1c;
            local_540 = (uint)(uVar17 >> 4);
            libc::memset(local_500,uVar17 & 0xf,uVar8);
          }
          else {
            local_538 = (int)uVar14 - 4;
            local_540 = (uint)uVar15 >> 5;
            libc::memset(local_500,uVar17 & 0xf,uVar8);
            local_53c = puVar13;
          }
        }
      }
      local_c8 = local_d0 & 8;
      uVar18 = local_c0;
      do {
        if ((local_53c < param_7) && (local_4c8 < local_4c4)) {
          pbVar5 = local_4c8 + 1;
          bVar16 = *local_4c8;
          local_4c8 = pbVar5;
          if (bVar16 < 10) {
                    /* WARNING: Could not recover jumptable at 0x005f8cec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            puVar9 = (uint *)(*(code *)(PTR_DAT_0071a5a8 +
                                       *(int *)(PTR_DAT_0071a5a8 + (uint)bVar16 * 4)))();
            return puVar9;
          }
        }
        uVar18 = uVar18 - 8;
      } while (uVar18 != 0);
      if ((in_stack_0000007c != 0) && ((in_stack_00000084 != 1 || (local_c8 != 0)))) {
        local_d8 = local_d8 + in_stack_0000007c;
      }
      if (local_bc <= local_d0 + 8) break;
      local_d0 = local_d0 + 8;
    } while( true );
  }
  uVar8 = (ulonglong)local_c4 & 0xffffff80;
  uVar7 = uVar8;
  while (uVar7 < ((longlong)(int)local_bc * (longlong)param_5 + (ulonglong)local_c4 + 0x7f &
                 0xffffff80)) {
    dataCacheBlockStore(uVar8);
    uVar8 = uVar8 + 0x80;
    uVar7 = uVar8 & 0xffffffff;
  }
  *in_stack_0000009c = local_dc;
  return local_53c;
}



//==== 005fb780  ns=Global  size=0x604
// sig: undefined FUN_005fb780(void)
// callers(1): 005f0370 FUN_005f0370
// callees(1): 005f87d0 FUN_005f87d0

/* WARNING: Type propagation algorithm not settling */

ulonglong FUN_005fb780(int param_1,ulonglong param_2,ulonglong param_3,int *param_4,int param_5,
                      int param_6,int *param_7,ulonglong param_8)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  ulonglong *puVar12;
  bool bVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  int *piVar16;
  int *piVar17;
  int iVar18;
  int iVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  int *piVar22;
  byte in_cr0;
  byte in_cr1;
  byte in_cr2;
  byte in_cr3;
  byte unaff_cr4;
  byte in_cr5;
  byte in_cr6;
  byte in_cr7;
  uint uStack00000008;
  uint in_stack_00000074;
  ulonglong local_170 [14];
  ulonglong auStack_100 [6];
  ulonglong local_d0;
  int local_c4;
  ulonglong *local_c0;
  ulonglong *local_bc;
  ulonglong *local_b8;
  ulonglong *local_b4;
  ulonglong *local_b0;
  ulonglong *local_ac;
  ulonglong *local_a8;
  ulonglong *local_a4;
  longlong local_a0;
  
  uVar15 = ZEXT48(&stack0x00000000);
  uStack00000008 =
       (uint)(in_cr0 & 0xf) << 0x1c | (uint)(in_cr1 & 0xf) << 0x18 | (uint)(in_cr2 & 0xf) << 0x14 |
       (uint)(in_cr3 & 0xf) << 0x10 | (uint)(unaff_cr4 & 0xf) << 0xc | (uint)(in_cr5 & 0xf) << 8 |
       (uint)(in_cr6 & 0xf) << 4 | (uint)(in_cr7 & 0xf);
  bVar1 = (int)param_2 == 0;
  piVar22 = (int *)(param_6 + 4);
  iVar18 = param_7[1];
  iVar2 = param_7[2];
  iVar19 = param_7[3];
  iVar3 = param_7[4];
  iVar4 = param_7[5];
  local_c4 = -(*param_7 + 0x2dU & 0xfffffff0);
  puVar12 = (ulonglong *)((int)local_170 + local_c4);
  *puVar12 = uVar15;
  iVar5 = param_7[6];
  local_c4 = (int)&local_d0 + local_c4;
  puVar12 = (ulonglong *)((int)puVar12 - (iVar18 + 0x2dU & 0xfffffff0));
  *puVar12 = uVar15;
  iVar18 = param_7[7];
  local_c0 = puVar12 + 0x14;
  puVar12 = (ulonglong *)((int)puVar12 - (iVar2 + 0x2dU & 0xfffffff0));
  *puVar12 = uVar15;
  iVar2 = param_7[8];
  local_bc = puVar12 + 0x14;
  puVar12 = (ulonglong *)((int)puVar12 - (iVar19 + 0x2dU & 0xfffffff0));
  *puVar12 = uVar15;
  local_b8 = puVar12 + 0x14;
  puVar12 = (ulonglong *)((int)puVar12 - (iVar3 + 0x2dU & 0xfffffff0));
  *puVar12 = uVar15;
  local_b4 = puVar12 + 0x14;
  puVar12 = (ulonglong *)((int)puVar12 - (iVar4 + 0x2dU & 0xfffffff0));
  *puVar12 = uVar15;
  local_b0 = puVar12 + 0x14;
  puVar12 = (ulonglong *)((int)puVar12 - (iVar5 + 0x2dU & 0xfffffff0));
  *puVar12 = uVar15;
  local_ac = puVar12 + 0x14;
  puVar12 = (ulonglong *)((int)puVar12 - (iVar18 + 0x2dU & 0xfffffff0));
  *puVar12 = uVar15;
  local_a8 = puVar12 + 0x14;
  puVar12 = (ulonglong *)((int)puVar12 - (iVar2 + 0x2dU & 0xfffffff0));
  *puVar12 = uVar15;
  local_a4 = puVar12 + 0x14;
  if (bVar1) {
    param_2 = uVar15 - 200;
    param_3 = 0;
  }
  bVar1 = !bVar1;
  uVar6 = *(uint *)(param_1 + 0x14);
  uVar21 = (ulonglong)uVar6 ^ 1;
  if (*(int *)(param_1 + ((int)(uVar21 << 6) - (int)(uVar21 << 4)) + 0x1c) == 0) {
    uVar21 = (ulonglong)uVar6;
  }
  uVar20 = 0xffffffffffffffff;
  local_170[0] = uVar15;
  piVar17 = param_4;
  if ((in_stack_00000074 & 0x100000) != 0) {
    if ((param_8 & 0x100000) == 0) {
      iVar18 = *param_4;
    }
    else {
      uVar7 = *(undefined4 *)(param_1 + 4);
      uVar8 = *(undefined4 *)(param_1 + 8);
      iVar18 = param_1 + uVar6 * 0x30 + 0x30;
      uVar9 = *(undefined4 *)(param_1 + ((int)(uVar21 << 6) - (int)(uVar21 << 4)) + 0x40);
      uVar10 = *(undefined4 *)(iVar18 + 0x14);
      uVar11 = *(undefined4 *)(iVar18 + 0x10);
      puVar12[0xe] = param_2 & 0xffffffff;
      puVar12[0x11] = uVar15 - 0xc4;
      puVar12[0x13] = uVar15 - 0xd0;
      puVar12[0xf] = param_3 & 0xffffffff;
      puVar12[0x10] = (ulonglong)bVar1;
      puVar12[0x12] = param_8 & 0xffffffff;
      FUN_005f87d0(uVar9,uVar11,uVar7,uVar8,uVar10,param_4 + 1,piVar22,param_5);
      iVar18 = *param_4;
      uVar20 = (ulonglong)local_d0._0_4_;
    }
    piVar17 = (int *)((int)param_4 + iVar18);
    if (piVar17 < param_4) goto LAB_005fba28;
  }
  if (piVar17 < piVar22) {
    bVar13 = (param_8 & 0x8000) == 0;
    if (bVar13) {
      piVar17 = piVar17 + 1;
    }
    piVar16 = piVar17;
    if ((param_8 & 0x200) == 0) {
      uVar7 = *(undefined4 *)(param_1 + 4);
      uVar8 = *(undefined4 *)(param_1 + 8);
      iVar18 = param_1 + uVar6 * 0x30 + 0x10;
      uVar9 = *(undefined4 *)(param_1 + ((int)(uVar21 << 6) - (int)(uVar21 << 4)) + 0x1c);
      uVar10 = *(undefined4 *)(iVar18 + 0x10);
      uVar11 = *(undefined4 *)(iVar18 + 0xc);
      puVar12[0xe] = param_2 & 0xffffffff;
      puVar12[0x11] = uVar15 - 0xc4;
      puVar12[0xf] = param_3 & 0xffffffff;
      puVar12[0x13] = uVar15 - 0xd0;
      puVar12[0x10] = (ulonglong)bVar1;
      puVar12[0x12] = param_8 & 0xffffffff;
      piVar16 = (int *)FUN_005f87d0(uVar9,uVar11,uVar7,uVar8,uVar10,piVar17,piVar22,param_5);
      if ((ulonglong)local_d0._0_4_ < (uVar20 & 0xffffffff)) {
        uVar20 = (ulonglong)local_d0._0_4_;
      }
    }
    if (bVar13) {
      piVar16 = (int *)((int)piVar17 + piVar17[-1] + -4);
    }
    if ((((param_8 & 0x20000) == 0) && (param_4 <= piVar16)) && (piVar16 < piVar22)) {
      iVar18 = uVar6 * 0x40 + (uVar6 & 0xfffffff) * -0x10;
      iVar2 = (int)(uVar21 << 6) - (int)(uVar21 << 4);
      iVar19 = param_1 + iVar18 + 0x10;
      local_a0 = (longlong)param_5;
      uVar7 = *(undefined4 *)(iVar19 + 0x1c);
      uVar8 = *(undefined4 *)(iVar19 + 0x18);
      uVar9 = *(undefined4 *)(param_1 + 0xc);
      uVar10 = *(undefined4 *)(param_1 + iVar2 + 0x28);
      uVar21 = uVar15 - 0xc4 & 0xffffffff;
      uVar11 = *(undefined4 *)(param_1 + 0x10);
      uVar15 = uVar15 - 0xd0 & 0xffffffff;
      puVar12[0xe] = param_2 & 0xffffffff;
      puVar12[0xf] = param_3 & 0xffffffff;
      puVar12[0x10] = (ulonglong)bVar1 << 1;
      puVar12[0x11] = uVar21;
      puVar12[0x12] = param_8 & 0xffffffff;
      puVar12[0x13] = uVar15;
      piVar17 = (int *)FUN_005f87d0(uVar10,uVar8,uVar9,uVar11,uVar7,piVar16,piVar22,local_a0);
      uVar14 = ((ulonglong)local_d0._0_4_ & 0x3fffffff) << 2;
      local_d0._0_4_ = (uint)uVar14;
      if (uVar14 < (uVar20 & 0xffffffff)) {
        uVar20 = uVar14;
      }
      if ((param_4 <= piVar17) && (piVar17 < piVar22)) {
        uVar7 = *(undefined4 *)(param_1 + 0xc);
        uVar8 = *(undefined4 *)(param_1 + 0x10);
        iVar18 = param_1 + iVar18 + 0x20;
        uVar9 = *(undefined4 *)(iVar18 + 0x18);
        uVar10 = *(undefined4 *)(iVar18 + 0x14);
        uVar11 = *(undefined4 *)(param_1 + iVar2 + 0x34);
        puVar12[0xe] = param_2 & 0xffffffff;
        puVar12[0xf] = param_3 & 0xffffffff;
        puVar12[0x10] = (ulonglong)bVar1 << 1;
        puVar12[0x11] = uVar21;
        puVar12[0x12] = param_8 & 0xffffffff;
        puVar12[0x13] = uVar15;
        FUN_005f87d0(uVar11,uVar10,uVar7,uVar8,uVar9,piVar17,piVar22,local_a0);
        uVar15 = ((ulonglong)local_d0._0_4_ & 0x3fffffff) << 2;
        if (uVar15 < (uVar20 & 0xffffffff)) {
          uVar20 = uVar15;
        }
      }
    }
  }
LAB_005fba28:
  uVar15 = (ulonglong)((longlong)*(int *)(param_1 + 4) * (longlong)*(int *)(param_1 + 8) << 0x20) >>
           0x26;
  return ((uVar15 - uVar20) * 100 & 0xffffffff) / uVar15;
}



//==== 005fbd88  ns=Global  size=0x8
// sig: undefined FUN_005fbd88(void)
// callers(2): 005fc508 FUN_005fc508; 005fc620 FUN_005fc620
// callees(0): 

void FUN_005fbd88(void)

{
  sync(0);
  return;
}



//==== 005fbd90  ns=Global  size=0x10
// sig: undefined FUN_005fbd90(void)
// callers(0): 
// callees(0): 

undefined4 FUN_005fbd90(undefined4 *param_1)

{
  sync(1);
  return *param_1;
}



//==== 005fbda0  ns=Global  size=0xc
// sig: undefined FUN_005fbda0(void)
// callers(0): 
// callees(0): 

undefined8 FUN_005fbda0(undefined8 *param_1)

{
  sync(1);
  return *param_1;
}



//==== 005fbdac  ns=Global  size=0xc
// sig: undefined FUN_005fbdac(void)
// callers(0): 
// callees(0): 

void FUN_005fbdac(undefined4 *param_1,undefined4 param_2)

{
  sync(1);
  *param_1 = param_2;
  return;
}



//==== 005fbdb8  ns=Global  size=0xc
// sig: undefined FUN_005fbdb8(void)
// callers(0): 
// callees(0): 

void FUN_005fbdb8(undefined8 *param_1,undefined8 param_2)

{
  sync(1);
  *param_1 = param_2;
  return;
}



//==== 005fbdc8  ns=Global  size=0x58
// sig: undefined FUN_005fbdc8(void)
// callers(0): 
// callees(0): 

undefined4 FUN_005fbdc8(ulonglong param_1,int *param_2,undefined8 param_3)

{
  int iVar1;
  char in_RESERVE;
  byte in_cr0;
  
  sync(0);
  do {
    iVar1 = *(int *)param_1;
    if (*param_2 != iVar1) {
      *param_2 = iVar1;
      sync(1);
      return 0;
    }
    if (in_RESERVE != '\0') {
      iVar1 = storeWordConditionalIndexed(param_3,0,param_1 & 0xffffffff);
      *(int *)param_1 = iVar1;
      in_cr0 = 2;
    }
  } while ((in_cr0 & 2) == 0);
  sync(1);
  return 1;
}



//==== 005fbe20  ns=Global  size=0x58
// sig: undefined FUN_005fbe20(void)
// callers(0): 
// callees(0): 

undefined4 FUN_005fbe20(ulonglong param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  
  sync(0);
  lVar1 = *(longlong *)param_1;
  if (*param_2 == lVar1) {
    lVar1 = storeDoubleWordConditionalIndexed(param_3,0,param_1 & 0xffffffff);
    *(longlong *)param_1 = lVar1;
    sync(1);
    return 1;
  }
  *param_2 = lVar1;
  sync(1);
  return 0;
}



//==== 005fbe78  ns=Global  size=0x2c
// sig: undefined FUN_005fbe78(void)
// callers(0): 
// callees(0): 

undefined4 FUN_005fbe78(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char in_RESERVE;
  byte in_cr0;
  
  sync(0);
  do {
    uVar1 = *(undefined4 *)param_1;
    if (in_RESERVE != '\0') {
      uVar2 = storeWordConditionalIndexed(param_2,0,param_1);
      *(undefined4 *)param_1 = uVar2;
      in_cr0 = 2;
    }
  } while ((in_cr0 & 2) == 0);
  sync(1);
  return uVar1;
}



//==== 005fbea8  ns=Global  size=0x2c
// sig: undefined FUN_005fbea8(void)
// callers(0): 
// callees(0): 

undefined8 FUN_005fbea8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  sync(0);
  uVar2 = *(undefined8 *)param_1;
  uVar1 = storeDoubleWordConditionalIndexed(param_2,0,param_1);
  *(undefined8 *)param_1 = uVar1;
  sync(1);
  return uVar2;
}



//==== 005fbed8  ns=Global  size=0x20
// sig: undefined FUN_005fbed8(void)
// callers(1): 005fc620 FUN_005fc620
// callees(0): 

longlong FUN_005fbed8(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  sync(0);
  lVar2 = *(longlong *)param_1;
  lVar1 = storeDoubleWordConditionalIndexed(lVar2 + param_2,0,param_1);
  *(longlong *)param_1 = lVar1;
  instructionSynchronize();
  return lVar2;
}



//==== 005fbef8  ns=Global  size=0x20
// sig: undefined FUN_005fbef8(void)
// callers(5): 005ec2c8 FUN_005ec2c8; 005ec3c8 FUN_005ec3c8; 005ef8f0 FUN_005ef8f0; 005f1788 FUN_005f1788; 005fd308 FUN_005fd308
// callees(0): 

uint FUN_005fbef8(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  uint uVar2;
  char in_RESERVE;
  byte in_cr0;
  
  sync(0);
  do {
    uVar1 = *(uint *)param_1;
    if (in_RESERVE != '\0') {
      uVar2 = storeWordConditionalIndexed((ulonglong)uVar1 + param_2,0,param_1);
      *(uint *)param_1 = uVar2;
      in_cr0 = 2;
    }
  } while (!(bool)(in_cr0 >> 1 & 1));
  instructionSynchronize();
  return uVar1;
}



//==== 005fbf18  ns=Global  size=0x24
// sig: undefined FUN_005fbf18(void)
// callers(1): 005fd308 FUN_005fd308
// callees(0): 

void FUN_005fbf18(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  
  sync(0);
  if (*(longlong *)param_1 == param_3) {
    lVar1 = storeDoubleWordConditionalIndexed(param_2,0,param_1);
    *(longlong *)param_1 = lVar1;
    instructionSynchronize();
    return;
  }
  return;
}



//==== 005fbf3c  ns=Global  size=0x28
// sig: undefined FUN_005fbf3c(void)
// callers(5): 005fc490 FUN_005fc490; 005fc620 FUN_005fc620; 005fd308 FUN_005fd308; 005fd4d0 FUN_005fd4d0; 005fd570 FUN_005fd570
// callees(0): 

int FUN_005fbf3c(undefined8 param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  char in_RESERVE;
  
  sync(0);
  do {
    iVar1 = *(int *)param_1;
    if (iVar1 != param_3) {
      return iVar1;
    }
    if (in_RESERVE != '\0') {
      iVar2 = storeWordConditionalIndexed(param_2,0,param_1);
      *(int *)param_1 = iVar2;
    }
  } while (in_RESERVE == '\0' && iVar1 != param_3);
  instructionSynchronize();
  return iVar1;
}



//==== 005fbf64  ns=Global  size=0xc
// sig: undefined FUN_005fbf64(void)
// callers(0): 
// callees(0): 

undefined4 FUN_005fbf64(void)

{
  return *(undefined4 *)PTR_DAT_0071a5b0;
}



//==== 005fbf70  ns=Global  size=0x4
// sig: undefined FUN_005fbf70(void)
// callers(0): 
// callees(0): 

void FUN_005fbf70(void)

{
  return;
}



//==== 005fbf74  ns=Global  size=0x38
// sig: undefined FUN_005fbf74(void)
// callers(3): 005ec2f0 FUN_005ec2f0; 005ec3c8 FUN_005ec3c8; 005ef8f0 FUN_005ef8f0
// callees(1): 0800008d syscall::syscall_sys_timer_usleep

void FUN_005fbf74(int param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_00989680;
  if (param_1 != -1) {
    puVar1 = (undefined *)(param_1 * 1000);
  }
  syscall::syscall_sys_timer_usleep(puVar1);
  return;
}



//==== 005fbfac  ns=Global  size=0x1c
// sig: undefined FUN_005fbfac(void)
// callers(2): 005ec3c8 FUN_005ec3c8; 005ef8f0 FUN_005ef8f0
// callees(1): 0800002b syscall::syscall_sys_ppu_thread_yield

void FUN_005fbfac(void)

{
  syscall::syscall_sys_ppu_thread_yield();
  return;
}



//==== 005fbfc8  ns=Global  size=0xc
// sig: undefined FUN_005fbfc8(void)
// callers(2): 005ec3c8 FUN_005ec3c8; 005ef8f0 FUN_005ef8f0
// callees(0): 

void FUN_005fbfc8(void)

{
  return;
}



//==== 005fbfd4  ns=Global  size=0xc4
// sig: undefined FUN_005fbfd4(void)
// callers(1): 005f1788 FUN_005f1788
// callees(1): 0800005a syscall::syscall_sys_semaphore_create
// strings: 006620d0: 'RADGAME'

bool FUN_005fbfd4(int param_1,undefined4 param_2,int param_3)

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
  undefined1 local_30 [40];
  
  uStack00000008 =
       (uint)(in_cr0 & 0xf) << 0x1c | (uint)(in_cr1 & 0xf) << 0x18 | (uint)(in_cr2 & 0xf) << 0x14 |
       (uint)(in_cr3 & 0xf) << 0x10 | (uint)(unaff_cr4 & 0xf) << 0xc | (uint)(in_cr5 & 0xf) << 8 |
       (uint)(in_cr6 & 0xf) << 4 | (uint)(in_cr7 & 0xf);
  *(uint *)(param_1 + 0x3c) = param_1 + 0xfU & 0xfffffff0;
  iVar1 = 0x20000000;
  if (0 < param_3) {
    iVar1 = param_3;
  }
  iVar1 = syscall::syscall_sys_semaphore_create
                    (*(undefined4 *)(param_1 + 0x3c),local_30,param_2,iVar1);
  if (iVar1 == 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x3c) + 4) = 0x231d;
  }
  return iVar1 == 0;
}



//==== 005fc098  ns=Global  size=0x60
// sig: undefined FUN_005fc098(void)
// callers(3): 005ec0e0 FUN_005ec0e0; 005ec1d4 FUN_005ec1d4; 005f1788 FUN_005f1788
// callees(0): 

int FUN_005fc098(int param_1)

{
  int iVar1;
  
  if ((param_1 != 0) && ((*(int **)(param_1 + 0x3c))[1] == 0x231d)) {
    iVar1 = **(int **)(param_1 + 0x3c);
    syscall();
    *(undefined4 *)(*(int *)(param_1 + 0x3c) + 4) = 0;
    return iVar1;
  }
  return param_1;
}



//==== 005fc0f8  ns=Global  size=0x98
// sig: undefined FUN_005fc0f8(void)
// callers(2): 005ec778 FUN_005ec778; 005eec10 FUN_005eec10
// callees(0): 

uint FUN_005fc0f8(int param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  
  if (param_1 != 0) {
    puVar1 = *(uint **)(param_1 + 0x3c);
    if (puVar1[1] == 0x231d) {
      if (param_2 == 0) {
        uVar2 = *puVar1;
        syscall();
      }
      else {
        uVar2 = *puVar1;
        syscall();
      }
      return (((int)uVar2 >> 0x1f ^ uVar2) - ((int)uVar2 >> 0x1f)) - 1 >> 0x1f;
    }
  }
  return 0;
}



//==== 005fc190  ns=Global  size=0x48
// sig: undefined FUN_005fc190(void)
// callers(7): 005eb450 FUN_005eb450; 005ec0e0 FUN_005ec0e0; 005ec1d4 FUN_005ec1d4; 005ed994 FUN_005ed994; 005eda28 FUN_005eda28; 005ee3a8 FUN_005ee3a8; 005f1788 FUN_005f1788
// callees(0): 

undefined4 * FUN_005fc190(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) && (param_1 = (undefined4 *)param_1[0xf], param_1[1] == 0x231d)
     ) {
    syscall();
    return (undefined4 *)*param_1;
  }
  return param_1;
}



//==== 005fc1d8  ns=Global  size=0x34
// sig: undefined FUN_005fc1d8(void)
// callers(1): 005eb0f8 FUN_005eb0f8
// callees(1): 006504c4 sys::sys_lwmutex_lock

void FUN_005fc1d8(int param_1)

{
  if (param_1 != 0) {
    sys::sys_lwmutex_lock(*(undefined4 *)(param_1 + 0x7c),0);
  }
  return;
}



//==== 005fc20c  ns=Global  size=0xb0
// sig: undefined FUN_005fc20c(void)
// callers(2): 005eae28 FUN_005eae28; 005eb0f8 FUN_005eb0f8
// callees(2): 006504c4 sys::sys_lwmutex_lock; 00650724 sys::sys_lwmutex_trylock

uint FUN_005fc20c(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = 0;
  if (param_1 != 0) {
    iVar2 = 0;
    if (param_2 != -1) {
      if (param_2 == 0) {
        uVar1 = sys::sys_lwmutex_trylock(*(undefined4 *)(param_1 + 0x7c),0);
        return (((int)uVar1 >> 0x1f ^ uVar1) - ((int)uVar1 >> 0x1f)) - 1 >> 0x1f;
      }
      iVar2 = param_2 * 1000;
    }
    uVar1 = sys::sys_lwmutex_lock(*(undefined4 *)(param_1 + 0x7c),iVar2);
    uVar1 = (((int)uVar1 >> 0x1f ^ uVar1) - ((int)uVar1 >> 0x1f)) - 1 >> 0x1f;
  }
  return uVar1;
}



//==== 005fc2bc  ns=Global  size=0x30
// sig: undefined FUN_005fc2bc(void)
// callers(1): 005eb2e0 FUN_005eb2e0
// callees(1): 006504e4 sys::sys_lwmutex_unlock

void FUN_005fc2bc(int param_1)

{
  if (param_1 != 0) {
    sys::sys_lwmutex_unlock(*(undefined4 *)(param_1 + 0x7c));
  }
  return;
}



//==== 005fc2ec  ns=Global  size=0x1a4
// sig: undefined FUN_005fc2ec(void)
// callers(2): 005ec0e0 FUN_005ec0e0; 005ec1d4 FUN_005ec1d4
// callees(3): 006504c4 sys::sys_lwmutex_lock; 006504e4 sys::sys_lwmutex_unlock; 00650724 sys::sys_lwmutex_trylock

undefined4 FUN_005fc2ec(int param_1,int param_2,uint *param_3)

{
  int iVar1;
  int iVar2;
  byte in_cr0;
  byte in_cr1;
  byte in_cr2;
  byte in_cr3;
  byte unaff_cr4;
  byte in_cr5;
  byte in_cr6;
  byte in_cr7;
  uint uStack00000008;
  uint uStack_3c;
  
  uStack00000008 =
       (uint)(in_cr0 & 0xf) << 0x1c | (uint)(in_cr1 & 0xf) << 0x18 | (uint)(in_cr2 & 0xf) << 0x14 |
       (uint)(in_cr3 & 0xf) << 0x10 | (uint)(unaff_cr4 & 0xf) << 0xc | (uint)(in_cr5 & 0xf) << 8 |
       (uint)(in_cr6 & 0xf) << 4 | (uint)(in_cr7 & 0xf);
  if (param_1 == 0) {
    return 0;
  }
  iVar1 = *(int *)(param_1 + 0xfc);
  if (*(uint *)(iVar1 + 0x5c) != 0) {
    if (param_3 == (uint *)0x0) {
      return 1;
    }
    *param_3 = *(uint *)(iVar1 + 0x5c);
    return 1;
  }
  if (param_2 != -1) {
    if (param_2 == 0) {
      iVar2 = sys::sys_lwmutex_trylock(iVar1 + 8);
      if (iVar2 == 0) {
        sys::sys_lwmutex_unlock(iVar1 + 8);
        goto LAB_005fc3fc;
      }
    }
    iVar2 = sys::sys_lwmutex_lock(iVar1 + 8,param_2 * 1000);
    if (iVar2 != 0) {
      return 0;
    }
    sys::sys_lwmutex_unlock(iVar1 + 8);
  }
LAB_005fc3fc:
  syscall();
  *(uint *)(iVar1 + 0x5c) = uStack_3c | 0x80000000;
  if (param_3 == (uint *)0x0) {
    return 1;
  }
  *param_3 = uStack_3c;
  return 1;
}



//==== 005fc490  ns=Global  size=0x78
// sig: undefined FUN_005fc490(void)
// callers(3): 005ee638 FUN_005ee638; 005ef8f0 FUN_005ef8f0; 005f1788 FUN_005f1788
// callees(2): 005fbf3c FUN_005fbf3c; 00650784 sys::sys_lwmutex_destroy

void FUN_005fc490(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + 0x7c);
    iVar2 = *(int *)(iVar1 + 0x18);
    iVar3 = FUN_005fbf3c(iVar1 + 0x18,0,iVar2);
    if ((iVar2 == iVar3) && (iVar2 == 1)) {
      sys::sys_lwmutex_destroy(iVar1);
    }
  }
  return;
}



//==== 005fc508  ns=Global  size=0xa0
// sig: undefined FUN_005fc508(void)
// callers(2): 005ec3c8 FUN_005ec3c8; 005f1788 FUN_005f1788
// callees(2): 005fbd88 FUN_005fbd88; 006505a4 sys::sys_lwmutex_create
// strings: 006620d0: 'RADGAME'

bool FUN_005fc508(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined1 local_20 [24];
  
  uVar1 = param_1 + 0xfU & 0xfffffff0;
  *(uint *)(param_1 + 0x7c) = uVar1;
  *(undefined4 *)(uVar1 + 0x18) = 0;
  iVar2 = sys::sys_lwmutex_create(uVar1,local_20);
  if (iVar2 == 0) {
    FUN_005fbd88();
    *(undefined4 *)(uVar1 + 0x18) = 1;
  }
  return iVar2 == 0;
}



//==== 005fc5a8  ns=Global  size=0x34
// sig: undefined FUN_005fc5a8(void)
// callers(0): 
// callees(1): 006505c4 sys::sys_ppu_thread_get_id

undefined8 FUN_005fc5a8(void)

{
  undefined1 local_10 [16];
  
  sys::sys_ppu_thread_get_id(local_10);
  return 0;
}



//==== 005fc5dc  ns=Global  size=0x1c
// sig: undefined FUN_005fc5dc(void)
// callers(0): 
// callees(1): 0800002f syscall::syscall_sys_ppu_thread_set_priority

void FUN_005fc5dc(void)

{
  syscall::syscall_sys_ppu_thread_set_priority();
  return;
}



//==== 005fc5f8  ns=Global  size=0x28
// sig: undefined FUN_005fc5f8(void)
// callers(0): 
// callees(1): 08000030 syscall::syscall_sys_ppu_thread_get_priority

undefined4 FUN_005fc5f8(undefined8 param_1)

{
  undefined4 local_10 [4];
  
  syscall::syscall_sys_ppu_thread_get_priority(param_1,local_10);
  return local_10[0];
}



//==== 005fc620  ns=Global  size=0x378
// sig: undefined FUN_005fc620(void)
// callers(1): 005f1788 FUN_005f1788
// callees(10): 005d0b80 FUN_005d0b80; 005fbd88 FUN_005fbd88; 005fbed8 FUN_005fbed8; 005fbf3c FUN_005fbf3c; 006504c4 sys::sys_lwmutex_lock; 006504e4 sys::sys_lwmutex_unlock; 00650524 sys::sys_ppu_thread_create; 006505a4 sys::sys_lwmutex_create; 006505c4 sys::sys_ppu_thread_get_id; 00650784 sys::sys_lwmutex_destroy
// strings: 006620d8: 'RGT_TCM'

undefined4
FUN_005fc620(int param_1,undefined4 param_2,int param_3,undefined4 param_4,ulonglong param_5,
            undefined4 param_6)

{
  longlong *plVar1;
  bool bVar2;
  undefined *puVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  int iVar11;
  byte in_cr0;
  byte in_cr1;
  byte in_cr2;
  byte in_cr3;
  byte unaff_cr4;
  byte in_cr5;
  byte in_cr6;
  byte in_cr7;
  longlong lVar12;
  uint uStack00000008;
  int iStack_d4;
  undefined1 local_88 [8];
  undefined1 local_80 [24];
  
  puVar3 = PTR_DAT_0071a5b0;
  uStack00000008 =
       (uint)(in_cr0 & 0xf) << 0x1c | (uint)(in_cr1 & 0xf) << 0x18 | (uint)(in_cr2 & 0xf) << 0x14 |
       (uint)(in_cr3 & 0xf) << 0x10 | (uint)(unaff_cr4 & 0xf) << 0xc | (uint)(in_cr5 & 0xf) << 8 |
       (uint)(in_cr6 & 0xf) << 4 | (uint)(in_cr7 & 0xf);
  uVar8 = ZEXT48(PTR_DAT_0071a5b0);
  plVar1 = (longlong *)(param_1 + 0xfU & 0xfffffff0);
  *(longlong **)(param_1 + 0xfc) = plVar1;
  lVar4 = FUN_005fbed8(uVar8 + 8 & 0xffffffff,1);
  if (lVar4 == 0) {
    FUN_005fbd88();
    FUN_005d0b80(PTR_DAT_0071a5b8,0);
  }
  else {
    lVar12 = 0x12d;
    do {
      if (*(int *)PTR_DAT_0071a5b8 != 0x12345677) goto LAB_005fc6e4;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
    do {
      syscall();
    } while (*(int *)PTR_DAT_0071a5b8 == 0x12345677);
  }
LAB_005fc6e4:
  uVar9 = 0;
  lVar12 = 0;
  do {
    while( true ) {
      uVar7 = *(uint *)(puVar3 + (int)lVar12 + 0x10);
      uVar5 = (uint)(0x1f - LZCOUNT(~uVar7));
      if (uVar5 != 0xffffffff) break;
      uVar9 = uVar9 + 1;
      lVar12 = ((ulonglong)uVar9 & 0x3fffffff) << 2;
      if (1 < (int)uVar9) {
        return 0;
      }
    }
    uVar5 = FUN_005fbf3c(lVar12 + uVar8 + 0x10 & 0xffffffff,uVar7 | 1 << (uVar5 & 0x3f),uVar7);
  } while (uVar7 != uVar5);
  bVar2 = (param_5 & 3) != 0;
  uVar10 = (0x1f - LZCOUNT(~uVar7)) + ((ulonglong)uVar9 & 0x7ffffff) * 0x20;
  iVar11 = (int)uVar10;
  if (bVar2) {
    iVar6 = sys::sys_lwmutex_create(plVar1 + 1,local_80);
    if (iVar6 != 0) goto LAB_005fc800;
    if ((param_5 & 1) != 0) {
      sys::sys_lwmutex_lock(plVar1 + 1,0);
    }
  }
  if (param_3 == 0) {
    param_3 = 0x8000;
  }
  *(undefined4 *)((int)plVar1 + 0x5c) = 0;
  *plVar1 = lVar4;
  *(undefined4 *)(plVar1 + 4) = param_2;
  *(undefined4 *)((int)plVar1 + 0x24) = param_4;
  *(int *)((int)plVar1 + 100) = iVar11;
  *(undefined4 *)(plVar1 + 5) = param_6;
  *(int *)(plVar1 + 0xb) = (int)param_5;
  *(undefined4 *)(plVar1 + 0xc) = 1;
  sys::sys_ppu_thread_get_id(local_88);
  syscall();
  iVar6 = sys::sys_ppu_thread_create
                    (plVar1 + 10,*(undefined4 *)(iStack_d4 + -0x7d68),param_1,0x3e9,param_3,
                     (param_5 ^ 4) >> 2 & 1,param_6);
  if (iVar6 == 0) {
    return 1;
  }
  *(undefined4 *)((int)plVar1 + 0x5c) = 1;
  *(undefined4 *)(plVar1 + 0xc) = 0;
  if (bVar2) {
    if ((param_5 & 1) != 0) {
      sys::sys_lwmutex_unlock(plVar1 + 1);
    }
    sys::sys_lwmutex_destroy(plVar1 + 1);
  }
LAB_005fc800:
  lVar4 = ((ulonglong)(uint)(iVar11 >> 5) & 0x3fffffff) * 4;
  uVar10 = uVar10 & 0x1f;
  do {
    uVar9 = *(uint *)(puVar3 + (int)lVar4 + 0x10);
    uVar7 = FUN_005fbf3c(lVar4 + uVar8 + 0x10 & 0xffffffff,
                         (ulonglong)uVar9 &
                         (-0x100000002 << uVar10 | 0xfffffffefffffffeU >> 0x40 - uVar10) &
                         0xffffffff,uVar9);
  } while (uVar9 != uVar7);
  return 0;
}



//==== 005fc998  ns=Global  size=0x48
// sig: undefined FUN_005fc998(void)
// callers(0): 
// callees(0): 

undefined4 * FUN_005fc998(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) && (param_1 = (undefined4 *)param_1[0xf], param_1[1] == 0x231d)
     ) {
    syscall();
    return (undefined4 *)*param_1;
  }
  return param_1;
}



//==== 005fc9e0  ns=Global  size=0x60
// sig: undefined FUN_005fc9e0(void)
// callers(0): 
// callees(0): 

int FUN_005fc9e0(int param_1)

{
  int iVar1;
  
  if ((param_1 != 0) && ((*(int **)(param_1 + 0x3c))[1] == 0x231d)) {
    iVar1 = **(int **)(param_1 + 0x3c);
    syscall();
    *(undefined4 *)(*(int *)(param_1 + 0x3c) + 4) = 0;
    return iVar1;
  }
  return param_1;
}



//==== 005fca40  ns=Global  size=0x60
// sig: undefined FUN_005fca40(void)
// callers(0): 
// callees(1): 005d0854 FUN_005d0854

undefined8 FUN_005fca40(int param_1)

{
  if ((param_1 == 0) &&
     ((*(int *)PTR_DAT_0071a5b8 == 0x12345677 ||
      (param_1 = FUN_005d0854(*(int *)PTR_DAT_0071a5b8), param_1 == 0)))) {
    return 0;
  }
  return *(undefined8 *)(*(int *)(param_1 + 0xfc) + 0x50);
}



//==== 005fcaa0  ns=Global  size=0xb4
// sig: undefined FUN_005fcaa0(void)
// callers(0): 
// callees(1): 0800005a syscall::syscall_sys_semaphore_create
// strings: 006620d0: 'RADGAME'

bool FUN_005fcaa0(int param_1)

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
  undefined1 local_30 [40];
  
  uStack00000008 =
       (uint)(in_cr0 & 0xf) << 0x1c | (uint)(in_cr1 & 0xf) << 0x18 | (uint)(in_cr2 & 0xf) << 0x14 |
       (uint)(in_cr3 & 0xf) << 0x10 | (uint)(unaff_cr4 & 0xf) << 0xc | (uint)(in_cr5 & 0xf) << 8 |
       (uint)(in_cr6 & 0xf) << 4 | (uint)(in_cr7 & 0xf);
  *(uint *)(param_1 + 0x3c) = param_1 + 0xfU & 0xfffffff0;
  iVar1 = syscall::syscall_sys_semaphore_create
                    (*(undefined4 *)(param_1 + 0x3c),local_30,0,0x20000000);
  if (iVar1 == 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x3c) + 4) = 0x231d;
  }
  return iVar1 == 0;
}



//==== 005fcb58  ns=Global  size=0x5c
// sig: undefined FUN_005fcb58(void)
// callers(0): 
// callees(0): 

void FUN_005fcb58(int param_1)

{
  if (param_1 != 0) {
    do {
      if ((*(int **)(param_1 + 0x3c))[1] != 0x231d) {
        return;
      }
      syscall();
    } while (**(int **)(param_1 + 0x3c) == 0);
  }
  return;
}



//==== 005fcbb8  ns=Global  size=0x98
// sig: undefined FUN_005fcbb8(void)
// callers(0): 
// callees(0): 

uint FUN_005fcbb8(int param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  
  if (param_1 != 0) {
    puVar1 = *(uint **)(param_1 + 0x3c);
    if (puVar1[1] == 0x231d) {
      if (param_2 == 0) {
        uVar2 = *puVar1;
        syscall();
      }
      else {
        uVar2 = *puVar1;
        syscall();
      }
      return (((int)uVar2 >> 0x1f ^ uVar2) - ((int)uVar2 >> 0x1f)) - 1 >> 0x1f;
    }
  }
  return 0;
}



//==== 005fcc50  ns=Global  size=0x78
// sig: undefined FUN_005fcc50(void)
// callers(1): 005ec034 FUN_005ec034
// callees(1): 005d0854 FUN_005d0854

undefined4 FUN_005fcc50(int param_1,undefined8 *param_2)

{
  if ((param_1 == 0) &&
     ((*(int *)PTR_DAT_0071a5b8 == 0x12345677 ||
      (param_1 = FUN_005d0854(*(int *)PTR_DAT_0071a5b8), param_1 == 0)))) {
    return 0;
  }
  *param_2 = *(undefined8 *)(*(int *)(param_1 + 0xfc) + 0x50);
  return 1;
}



//==== 005fccc8  ns=Global  size=0xac
// sig: undefined FUN_005fccc8(void)
// callers(1): 005f1788 FUN_005f1788
// callees(1): 005d0854 FUN_005d0854

void FUN_005fccc8(int param_1,int param_2)

{
  int iVar1;
  
  if (((param_1 != 0) ||
      ((*(int *)PTR_DAT_0071a5b8 != 0x12345677 &&
       (iVar1 = FUN_005d0854(*(int *)PTR_DAT_0071a5b8), iVar1 != 0)))) && (param_2 + 2U < 0x17)) {
                    /* WARNING: Could not recover jumptable at 0x005fcd3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(PTR_DAT_0071a5c4 + *(int *)(PTR_DAT_0071a5c4 + (param_2 + 2U) * 4)))();
    return;
  }
  return;
}



//==== 005fcf70  ns=Global  size=0x94
// sig: undefined FUN_005fcf70(void)
// callers(0): 
// callees(2): 005d0854 FUN_005d0854; 006504e4 sys::sys_lwmutex_unlock

void FUN_005fcf70(int param_1)

{
  int iVar1;
  
  if ((param_1 != 0) ||
     ((*(int *)PTR_DAT_0071a5b8 != 0x12345677 &&
      (param_1 = FUN_005d0854(*(int *)PTR_DAT_0071a5b8), param_1 != 0)))) {
    iVar1 = *(int *)(param_1 + 0xfc);
    if ((*(uint *)(iVar1 + 0x58) & 1) != 0) {
      *(uint *)(iVar1 + 0x58) = *(uint *)(iVar1 + 0x58) & 0xfffffffe;
      sys::sys_lwmutex_unlock(iVar1 + 8);
      return;
    }
  }
  return;
}



//==== 005fd004  ns=Global  size=0x4c
// sig: undefined FUN_005fd004(void)
// callers(0): 
// callees(1): 005d0854 FUN_005d0854

undefined4 FUN_005fd004(void)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(int *)PTR_DAT_0071a5b8 != 0x12345677) {
    uVar1 = FUN_005d0854(*(int *)PTR_DAT_0071a5b8);
  }
  return uVar1;
}



//==== 005fd050  ns=Global  size=0x6c
// sig: undefined FUN_005fd050(void)
// callers(0): 
// callees(1): 005d0854 FUN_005d0854

undefined4 FUN_005fd050(int param_1)

{
  if (param_1 == 0) {
    if (*(int *)PTR_DAT_0071a5b8 == 0x12345677) {
      return 0;
    }
    param_1 = FUN_005d0854(*(int *)PTR_DAT_0071a5b8);
    if (param_1 == 0) {
      return 0;
    }
  }
  return *(undefined4 *)(*(int *)(param_1 + 0xfc) + 0x28);
}



//==== 005fd0bc  ns=Global  size=0x60
// sig: undefined FUN_005fd0bc(void)
// callers(0): 
// callees(1): 005d0854 FUN_005d0854

undefined8 FUN_005fd0bc(int param_1)

{
  if ((param_1 == 0) &&
     ((*(int *)PTR_DAT_0071a5b8 == 0x12345677 ||
      (param_1 = FUN_005d0854(*(int *)PTR_DAT_0071a5b8), param_1 == 0)))) {
    return 0;
  }
  return **(undefined8 **)(param_1 + 0xfc);
}



//==== 005fd120  ns=Global  size=0xcc
// sig: undefined FUN_005fd120(void)
// callers(0): 
// callees(1): 005d0854 FUN_005d0854

undefined4 FUN_005fd120(int param_1,ulonglong param_2,undefined4 *param_3)

{
  if (7 < (int)param_2) {
    return 0;
  }
  if (param_1 == 0) {
    if (*(int *)PTR_DAT_0071a5b8 == 0x12345677) {
      return 0;
    }
    param_1 = FUN_005d0854(*(int *)PTR_DAT_0071a5b8);
    if (param_1 == 0) {
      return 0;
    }
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = *(undefined4 *)(*(int *)(param_1 + 0xfc) + (int)((param_2 & 0xffffffff) << 2) + 0x2c)
    ;
  }
  return 1;
}



//==== 005fd1f0  ns=Global  size=0xb0
// sig: undefined FUN_005fd1f0(void)
// callers(0): 
// callees(1): 005d0854 FUN_005d0854

undefined4 FUN_005fd1f0(int param_1,int param_2,undefined4 param_3)

{
  if (7 < param_2) {
    return 0;
  }
  if (param_1 == 0) {
    if (*(int *)PTR_DAT_0071a5b8 == 0x12345677) {
      return 0;
    }
    param_1 = FUN_005d0854(*(int *)PTR_DAT_0071a5b8);
    if (param_1 == 0) {
      return 0;
    }
  }
  *(undefined4 *)(*(int *)(param_1 + 0xfc) + param_2 * 4 + 0x2c) = param_3;
  return 1;
}



//==== 005fd2a0  ns=Global  size=0x64
// sig: undefined FUN_005fd2a0(void)
// callers(0): 
// callees(1): 005d0854 FUN_005d0854

undefined4 FUN_005fd2a0(int param_1)

{
  if ((param_1 == 0) &&
     ((*(int *)PTR_DAT_0071a5b8 == 0x12345677 ||
      (param_1 = FUN_005d0854(*(int *)PTR_DAT_0071a5b8), param_1 == 0)))) {
    return 0;
  }
  return *(undefined4 *)(*(int *)(param_1 + 0xfc) + 100);
}



//==== 005fd308  ns=Global  size=0x1c4
// sig: undefined FUN_005fd308(void)
// callers(2): 005fd4d0 FUN_005fd4d0; 005fd570 FUN_005fd570
// callees(6): 005d0854 FUN_005d0854; 005d0a3c FUN_005d0a3c; 005fbef8 FUN_005fbef8; 005fbf18 FUN_005fbf18; 005fbf3c FUN_005fbf3c; 00650784 sys::sys_lwmutex_destroy

ulonglong FUN_005fd308(int param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  
  uVar6 = *(ulonglong *)(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x5c) = 0xffffffff;
  uVar3 = FUN_005fbf18(param_1 + 0x50,0xffffffffffffffff,uVar6);
  puVar1 = PTR_DAT_0071a5b0;
  if (((uVar6 & 0xffffffff) == uVar3) && (uVar6 != 0xffffffffffffffff)) {
    FUN_005fbef8(PTR_DAT_0071a5b0,0xffffffffffffffff);
    do {
      uVar4 = *(uint *)(param_1 + 100) >> 3 & 0x1ffffffc;
      uVar5 = *(uint *)(puVar1 + uVar4 + 0x10);
      uVar4 = FUN_005fbf3c(puVar1 + uVar4 + 0x10,uVar5 & ~(1 << (*(uint *)(param_1 + 100) & 0x1f)),
                           uVar5);
      puVar2 = PTR_DAT_0071a5b8;
    } while (uVar5 != uVar4);
    uVar5 = *(uint *)PTR_DAT_0071a5b8;
    uVar3 = (ulonglong)uVar5;
    if (((uVar5 != 0x12345677) && (uVar3 = FUN_005d0854(uVar5), (int)uVar3 != 0)) &&
       (param_1 == *(int *)((int)uVar3 + 0xfc))) {
      uVar3 = FUN_005d0a3c(*(undefined4 *)puVar2,0);
    }
    uVar5 = *(uint *)(param_1 + 0x58);
    if (((uVar5 & 4) == 0) && (*(int *)(param_1 + 0x5c) == 0)) {
      uVar3 = *(ulonglong *)(param_1 + 0x50);
      syscall();
      uVar5 = *(uint *)(param_1 + 0x58);
      *(undefined4 *)(param_1 + 0x5c) = 1;
    }
    if (((uVar5 & 2) != 0) || ((uVar5 & 1) != 0)) {
      uVar3 = sys::sys_lwmutex_destroy(param_1 + 8);
      return uVar3;
    }
  }
  return uVar3;
}



//==== 005fd4d0  ns=Global  size=0x9c
// sig: undefined FUN_005fd4d0(void)
// callers(2): 005ec0e0 FUN_005ec0e0; 005ec1d4 FUN_005ec1d4
// callees(3): 005d0854 FUN_005d0854; 005fbf3c FUN_005fbf3c; 005fd308 FUN_005fd308

void FUN_005fd4d0(int param_1)

{
  int iVar1;
  
  if ((param_1 != 0) ||
     ((*(int *)PTR_DAT_0071a5b8 != 0x12345677 &&
      (param_1 = FUN_005d0854(*(int *)PTR_DAT_0071a5b8), param_1 != 0)))) {
    iVar1 = *(int *)(param_1 + 0xfc);
    FUN_005fbf3c(iVar1 + 0x60,3,1);
    if (*(int *)(iVar1 + 0x60) == 0) {
      FUN_005fd308(iVar1);
      return;
    }
  }
  return;
}



//==== 005fd570  ns=Global  size=0x160
// sig: undefined FUN_005fd570(void)
// callers(0): 
// callees(6): 005d0a3c FUN_005d0a3c; 005fbf3c FUN_005fbf3c; 005fd308 FUN_005fd308; 006504c4 sys::sys_lwmutex_lock; 006504e4 sys::sys_lwmutex_unlock; 00650744 sys::sys_ppu_thread_exit

void FUN_005fd570(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined4 uVar4;
  uint uVar5;
  
  puVar3 = PTR_DAT_0071a5b8;
  iVar1 = *(int *)(param_1 + 0xfc);
  FUN_005d0a3c(*(undefined4 *)PTR_DAT_0071a5b8,param_1);
  if (((*(uint *)(iVar1 + 0x58) & 2) == 0) && ((*(uint *)(iVar1 + 0x58) & 1) == 0)) {
    uVar4 = (*(code *)**(undefined4 **)(iVar1 + 0x20))(*(undefined4 *)(iVar1 + 0x24));
  }
  else {
    sys::sys_lwmutex_lock(iVar1 + 8,0);
    uVar4 = (*(code *)**(undefined4 **)(iVar1 + 0x20))(*(undefined4 *)(iVar1 + 0x24));
    sys::sys_lwmutex_unlock(iVar1 + 8);
  }
  do {
    uVar2 = *(uint *)(iVar1 + 0x60);
    uVar5 = FUN_005fbf3c(iVar1 + 0x60,uVar2 & 0xfffffffe,uVar2);
  } while (uVar2 != uVar5);
  if (uVar2 == 3) {
    syscall();
    FUN_005fd308(iVar1);
  }
  FUN_005d0a3c(*(undefined4 *)puVar3,0);
  sys::sys_ppu_thread_exit(uVar4);
  return;
}



//==== 005fd6d0  ns=Global  size=0x30
// sig: undefined FUN_005fd6d0(void)
// callers(2): 005f0f38 FUN_005f0f38; 005f1788 FUN_005f1788
// callees(0): 

void FUN_005fd6d0(int *param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = param_1 + 0x10;
  param_1[6] = param_2;
  param_1[5] = 0;
  param_1[1] = (int)piVar1;
  param_1[3] = (int)(piVar1 + param_2);
  *param_1 = (int)piVar1;
  param_1[2] = (int)(piVar1 + param_2);
  param_1[4] = 0;
  return;
}



//==== 005fd700  ns=Global  size=0x78
// sig: undefined FUN_005fd700(void)
// callers(2): 005f0f38 FUN_005f0f38; 005f1788 FUN_005f1788
// callees(0): 

void FUN_005fd700(int param_1,undefined4 param_2,longlong param_3)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x18) == *(int *)(param_1 + 0x14)) {
    trapWord(0x1f,ZEXT48(&stack0x00000000),ZEXT48(&stack0x00000000));
  }
  iVar1 = ((uint)(param_3 + 0x1fU) & 0xffffffe0) +
          ((uint)(((((ulonglong)(*(uint *)(param_1 + 0x10) >> 5) & 0x1f) -
                   ((param_3 + 0x1fU & 0x3e0) >> 5)) + 0x21 & 0xffffffff) << 5) & 0x3e0);
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) + iVar1;
  *(int *)(*(int *)(param_1 + 0x14) * 4 + *(int *)(param_1 + 0xc)) = iVar1;
  iVar1 = *(int *)(param_1 + 0x14);
  *(undefined4 *)(iVar1 * 4 + *(int *)(param_1 + 4)) = param_2;
  *(int *)(param_1 + 0x14) = iVar1 + 1;
  return;
}



//==== 005fd778  ns=Global  size=0x18
// sig: undefined FUN_005fd778(void)
// callers(4): 005ece64 FUN_005ece64; 005f0f38 FUN_005f0f38; 005f1198 FUN_005f1198; 005f1788 FUN_005f1788
// callees(0): 

undefined4 FUN_005fd778(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x10);
  }
  return uVar1;
}



//==== 005fd790  ns=Global  size=0xfc
// sig: undefined FUN_005fd790(void)
// callers(4): 005ece64 FUN_005ece64; 005f0f38 FUN_005f0f38; 005f1198 FUN_005f1198; 005f1788 FUN_005f1788
// callees(1): 005f5204 FUN_005f5204

int FUN_005fd790(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if (param_1 != 0) {
    uVar1 = param_2 + 0x1fU & 0xffffffe0;
    iVar3 = FUN_005f5204(uVar1 + *(int *)(param_1 + 0x10));
    *(undefined4 *)(param_1 + 0x10) = 0;
    if ((iVar3 != 0) && (*(int *)(param_1 + 0x14) != 0)) {
      iVar4 = iVar3 + uVar1;
      uVar5 = 0;
      do {
        iVar2 = (int)((uVar5 & 0xffffffff) << 2);
        uVar6 = uVar5 + 1;
        uVar5 = uVar5 + 1;
        **(int **)(iVar2 + *(int *)(param_1 + 4)) = iVar4;
        iVar4 = iVar4 + *(int *)(iVar2 + *(int *)(param_1 + 0xc));
      } while ((uVar6 & 0xffffffff) < (ulonglong)*(uint *)(param_1 + 0x14));
    }
    *(undefined4 *)(param_1 + 0x14) = 0;
    return iVar3;
  }
  iVar3 = FUN_005f5204(param_2 + 0x1fU & 0xffffffe0);
  return iVar3;
}



//==== 005fd890  ns=Global  size=0xc8
// sig: undefined FUN_005fd890(void)
// callers(0): 
// callees(1): 005ea300 FUN_005ea300
// strings: 006620e0: 'Mismatched Bink/Telemetry versions.'

void FUN_005fd890(uint param_1)

{
  undefined *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  puVar1 = PTR_DAT_0071a5c8;
  puVar2 = (undefined4 *)(param_1 ^ 0x87692345);
  if (param_1 == 0) {
    *(undefined4 *)PTR_DAT_0071a5c8 = 0;
    return;
  }
  *(undefined4 **)PTR_DAT_0071a5c8 = puVar2;
  if (puVar2 != (undefined4 *)0x0) {
    iVar3 = (**(code **)*puVar2)(puVar2,1,0,0xd,0);
    if (iVar3 != 0) {
      FUN_005ea300(PTR_s_Mismatched_Bink_Telemetry_versio_0071a5cc);
      *(undefined4 *)puVar1 = 0;
      return;
    }
  }
  return;
}



//==== 005fd958  ns=Global  size=0x9c
// sig: undefined FUN_005fd958(void)
// callers(0): 
// callees(1): 005ea300 FUN_005ea300
// strings: 006620e0: 'Mismatched Bink/Telemetry versions.'

void FUN_005fd958(undefined4 *param_1)

{
  undefined *puVar1;
  int iVar2;
  
  puVar1 = PTR_DAT_0071a5c8;
  *(undefined4 **)PTR_DAT_0071a5c8 = param_1;
  if (param_1 != (undefined4 *)0x0) {
    iVar2 = (**(code **)*param_1)(param_1,1,0,0xd,0);
    if (iVar2 != 0) {
      FUN_005ea300(PTR_s_Mismatched_Bink_Telemetry_versio_0071a5cc);
      *(undefined4 *)puVar1 = 0;
      return;
    }
  }
  return;
}



//==== 005fd9f8  ns=Global  size=0x490
// sig: undefined FUN_005fd9f8(void)
// callers(3): 005ffff0 FUN_005ffff0; 00600320 FUN_00600320; 00600458 FUN_00600458
// callees(0): 

void FUN_005fd9f8(int param_1,longlong param_2,int param_3)

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
  uint uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  float fVar20;
  float *pfVar21;
  float *pfVar22;
  float *pfVar23;
  float *pfVar24;
  float *pfVar25;
  float *pfVar27;
  longlong lVar26;
  int iVar28;
  longlong lVar29;
  int iVar30;
  int iVar31;
  longlong lVar32;
  longlong lVar33;
  longlong lVar34;
  ulonglong uVar35;
  longlong lVar36;
  longlong lVar37;
  float *pfVar38;
  longlong lVar39;
  longlong lVar40;
  
  uVar12 = param_1 >> 3;
  lVar29 = ((ulonglong)uVar12 & 0x7fffffff) * 2;
  uVar35 = lVar29 + ((ulonglong)uVar12 & 0x3fffffff) * 4;
  lVar36 = param_2 + ((ulonglong)uVar12 & 0xfffffff) * 0x10;
  lVar37 = param_2 + ((ulonglong)uVar12 & 0x1fffffff) * 8;
  lVar39 = param_2 + (uVar35 & 0x3fffffff) * 4;
  pfVar38 = (float *)lVar36;
  pfVar22 = (float *)lVar37;
  pfVar21 = (float *)lVar39;
  fVar1 = pfVar38[1];
  fVar2 = pfVar21[1];
  pfVar27 = (float *)param_2;
  fVar5 = *pfVar27 - *pfVar38;
  fVar3 = pfVar22[1];
  fVar7 = *pfVar22 - *pfVar21;
  fVar11 = pfVar27[1];
  fVar8 = fVar3 - fVar2;
  fVar4 = fVar11 - fVar1;
  fVar6 = *pfVar27 + *pfVar38;
  fVar11 = fVar11 + fVar1;
  fVar1 = *pfVar22 + *pfVar21;
  fVar3 = fVar3 + fVar2;
  *pfVar27 = fVar6 + fVar1;
  pfVar27[1] = fVar11 + fVar3;
  *pfVar22 = fVar6 - fVar1;
  pfVar22[1] = fVar11 - fVar3;
  *pfVar38 = fVar5 - fVar8;
  pfVar38[1] = fVar4 + fVar7;
  *pfVar21 = fVar5 + fVar8;
  pfVar21[1] = fVar4 - fVar7;
  fVar1 = *(float *)(param_3 + 4);
  if (2 < (int)uVar12) {
    lVar40 = param_2 + 8;
    lVar34 = param_2 + (lVar29 + uVar35 & 0x3fffffff) * 4;
    param_2 = param_2 + 0xc;
    iVar30 = 2;
    iVar31 = 0;
    pfVar38 = (float *)(param_3 + 0x10);
    lVar26 = lVar36;
    lVar32 = lVar39;
    lVar33 = lVar37;
    do {
      iVar18 = (int)lVar36;
      fVar2 = *(float *)lVar40;
      iVar17 = (int)lVar37;
      fVar3 = *(float *)param_2;
      iVar19 = (int)lVar39;
      iVar28 = iVar31 + param_3;
      fVar6 = fVar2 - *(float *)(iVar18 + 8);
      fVar7 = fVar3 - *(float *)(iVar18 + 0xc);
      fVar3 = fVar3 + *(float *)(iVar18 + 0xc);
      fVar2 = fVar2 + *(float *)(iVar18 + 8);
      fVar9 = *(float *)(iVar17 + 8) - *(float *)(iVar19 + 8);
      fVar14 = *(float *)(iVar17 + 0xc) - *(float *)(iVar19 + 0xc);
      fVar10 = *(float *)(iVar17 + 8) + *(float *)(iVar19 + 8);
      fVar11 = *(float *)(iVar28 + 0x14);
      fVar15 = *(float *)(iVar17 + 0xc) + *(float *)(iVar19 + 0xc);
      fVar4 = *pfVar38;
      fVar16 = -*(float *)(iVar28 + 0x1c);
      fVar5 = *(float *)(iVar28 + 0x18);
      pfVar23 = (float *)((int)lVar33 + -4);
      pfVar21 = (float *)((int)lVar32 + -4);
      pfVar25 = (float *)((int)lVar26 + -4);
      pfVar22 = (float *)((int)lVar34 + -4);
      fVar13 = fVar7 - fVar9;
      lVar33 = lVar33 + -8;
      fVar8 = fVar6 + fVar14;
      lVar32 = lVar32 + -8;
      fVar6 = fVar6 - fVar14;
      lVar34 = lVar34 + -8;
      fVar7 = fVar7 + fVar9;
      pfVar24 = (float *)(lVar26 + -8);
      iVar30 = iVar30 + 2;
      pfVar38 = pfVar38 + 4;
      iVar31 = iVar31 + 0x10;
      lVar36 = lVar36 + 8;
      *(float *)lVar40 = fVar2 + fVar10;
      lVar37 = lVar37 + 8;
      *(float *)param_2 = fVar3 + fVar15;
      lVar40 = lVar40 + 8;
      *(float *)(iVar17 + 0xc) = fVar3 - fVar15;
      param_2 = param_2 + 8;
      *(float *)(iVar17 + 8) = fVar2 - fVar10;
      lVar39 = lVar39 + 8;
      *(float *)(iVar18 + 0xc) = fVar4 * fVar7 + fVar11 * fVar6;
      *(float *)(iVar18 + 8) = fVar4 * fVar6 - fVar11 * fVar7;
      *(float *)(iVar19 + 0xc) = fVar5 * fVar13 - fVar16 * fVar8;
      *(float *)(iVar19 + 8) = fVar5 * fVar8 + fVar16 * fVar13;
      fVar2 = *(float *)lVar33;
      fVar3 = *(float *)lVar32;
      fVar6 = *pfVar21;
      fVar13 = fVar2 - fVar3;
      fVar7 = *(float *)lVar34;
      fVar2 = fVar2 + fVar3;
      fVar3 = *pfVar22;
      fVar8 = *pfVar23;
      fVar9 = *pfVar24;
      fVar14 = fVar8 - fVar6;
      fVar10 = *pfVar25;
      fVar15 = fVar9 - fVar7;
      fVar20 = fVar10 - fVar3;
      fVar9 = fVar9 + fVar7;
      fVar10 = fVar10 + fVar3;
      fVar8 = fVar8 + fVar6;
      fVar6 = fVar14 - fVar15;
      fVar3 = fVar13 + fVar20;
      fVar14 = fVar14 + fVar15;
      fVar13 = fVar13 - fVar20;
      *(float *)lVar33 = fVar2 + fVar9;
      *pfVar23 = fVar8 + fVar10;
      *pfVar24 = fVar2 - fVar9;
      *pfVar25 = fVar8 - fVar10;
      *(float *)lVar32 = fVar11 * fVar13 - fVar4 * fVar14;
      *pfVar21 = fVar11 * fVar14 + fVar4 * fVar13;
      *(float *)lVar34 = fVar16 * fVar3 + fVar5 * fVar6;
      *pfVar22 = fVar16 * fVar6 - fVar5 * fVar3;
      lVar26 = lVar26 + -8;
    } while (iVar30 < (int)uVar12);
  }
  uVar35 = lVar29 + (int)uVar12 + lVar29;
  pfVar38 = pfVar27 + uVar12;
  pfVar22 = (float *)((int)pfVar27 + (int)((lVar29 + uVar35 & 0xffffffff) << 2));
  pfVar21 = (float *)((int)pfVar27 + (int)((uVar35 & 0xffffffff) << 2));
  pfVar27 = (float *)((int)pfVar27 + (int)(((int)uVar12 + lVar29 & 0xffffffffU) << 2));
  fVar2 = pfVar38[1];
  fVar3 = pfVar21[1];
  fVar11 = pfVar27[1];
  fVar4 = pfVar22[1];
  fVar5 = fVar2 - fVar3;
  fVar6 = fVar11 - fVar4;
  fVar11 = fVar11 + fVar4;
  fVar4 = *pfVar38 - *pfVar21;
  fVar7 = *pfVar38 + *pfVar21;
  fVar9 = *pfVar27 - *pfVar22;
  fVar2 = fVar2 + fVar3;
  fVar10 = *pfVar27 + *pfVar22;
  fVar8 = fVar4 + fVar6;
  fVar4 = fVar4 - fVar6;
  fVar3 = fVar5 - fVar9;
  fVar5 = fVar5 + fVar9;
  *pfVar38 = fVar7 + fVar10;
  pfVar38[1] = fVar2 + fVar11;
  *pfVar27 = fVar7 - fVar10;
  pfVar27[1] = fVar2 - fVar11;
  *pfVar21 = fVar1 * (fVar4 - fVar5);
  pfVar21[1] = fVar1 * (fVar4 + fVar5);
  *pfVar22 = -fVar1 * (fVar8 + fVar3);
  pfVar22[1] = fVar1 * (fVar8 - fVar3);
  return;
}



//==== 005fde88  ns=Global  size=0x5d8
// sig: undefined FUN_005fde88(void)
// callers(2): 005ffff0 FUN_005ffff0; 00600458 FUN_00600458
// callees(0): 

void FUN_005fde88(int param_1,float *param_2,int param_3)

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
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  int iVar20;
  float *pfVar21;
  float *pfVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  float *pfVar25;
  int iVar26;
  int iVar27;
  float *pfVar28;
  float *pfVar29;
  float *pfVar30;
  float *pfVar31;
  float *pfVar32;
  float *pfVar33;
  float *pfVar34;
  float *pfVar35;
  float *pfVar36;
  float *pfVar37;
  float *pfVar38;
  float *pfVar39;
  
  param_1 = param_1 >> 3;
  pfVar30 = param_2 + param_1 * 6;
  pfVar37 = param_2 + param_1 * 2;
  fVar1 = pfVar30[1];
  fVar2 = pfVar37[1];
  pfVar39 = param_2 + param_1 * 4;
  fVar6 = fVar2 - *pfVar30;
  fVar5 = *pfVar37 + fVar1;
  fVar2 = fVar2 + *pfVar30;
  fVar1 = *pfVar37 - fVar1;
  fVar3 = *(float *)(param_3 + 4);
  fVar10 = param_2[1];
  fVar8 = fVar10 - *pfVar39;
  fVar10 = fVar10 + *pfVar39;
  fVar4 = pfVar39[1];
  fVar9 = *param_2 + fVar4;
  fVar4 = *param_2 - fVar4;
  fVar7 = fVar3 * (fVar5 + fVar6);
  fVar5 = fVar3 * (fVar5 - fVar6);
  fVar6 = fVar3 * (fVar1 + fVar2);
  fVar3 = fVar3 * (fVar1 - fVar2);
  *param_2 = fVar4 + fVar3;
  param_2[1] = fVar10 + fVar6;
  *pfVar37 = fVar4 - fVar3;
  pfVar37[1] = fVar10 - fVar6;
  *pfVar39 = fVar9 - fVar7;
  pfVar39[1] = fVar8 + fVar5;
  *pfVar30 = fVar9 + fVar7;
  pfVar30[1] = fVar8 - fVar5;
  if (2 < param_1) {
    pfVar32 = param_2 + 2;
    pfVar33 = param_2 + 3;
    iVar26 = 2;
    iVar27 = 0;
    pfVar31 = (float *)(param_3 + 0x10);
    pfVar34 = param_2 + param_1 * 8;
    pfVar28 = pfVar39;
    pfVar25 = (float *)(param_3 + param_1 * 0x10);
    pfVar29 = pfVar37;
    pfVar38 = pfVar30;
    do {
      iVar20 = param_3 + iVar27;
      fVar6 = *pfVar32 + pfVar28[3];
      fVar8 = *pfVar33 - pfVar28[2];
      fVar7 = *pfVar32 - pfVar28[3];
      fVar13 = pfVar29[2] + pfVar30[3];
      fVar11 = -*(float *)(iVar20 + 0x1c);
      fVar9 = *pfVar33 + pfVar28[2];
      fVar18 = pfVar29[3] - pfVar30[2];
      fVar19 = pfVar29[3] + pfVar30[2];
      fVar14 = pfVar29[2] - pfVar30[3];
      fVar1 = *(float *)(iVar20 + 0x14);
      fVar2 = *(float *)(iVar20 + 0x18);
      pfVar21 = pfVar37 + -1;
      pfVar36 = pfVar38 + -2;
      fVar3 = pfVar25[-2];
      fVar4 = pfVar25[-4];
      fVar16 = -pfVar25[-1];
      pfVar22 = pfVar39 + -1;
      fVar10 = *pfVar31;
      pfVar35 = pfVar34 + -2;
      pfVar39 = pfVar39 + -2;
      fVar15 = fVar10 * fVar9 + fVar1 * fVar7;
      pfVar37 = pfVar37 + -2;
      fVar12 = fVar2 * fVar8 - fVar11 * fVar6;
      fVar5 = pfVar25[-3];
      fVar17 = fVar16 * fVar18 - fVar3 * fVar13;
      fVar7 = fVar10 * fVar7 - fVar1 * fVar9;
      fVar9 = fVar5 * fVar19 + fVar4 * fVar14;
      fVar14 = fVar5 * fVar14 - fVar4 * fVar19;
      fVar6 = fVar2 * fVar6 + fVar11 * fVar8;
      fVar8 = fVar16 * fVar13 + fVar3 * fVar18;
      iVar26 = iVar26 + 2;
      pfVar31 = pfVar31 + 4;
      iVar27 = iVar27 + 0x10;
      *pfVar32 = fVar7 + fVar14;
      pfVar32 = pfVar32 + 2;
      *pfVar33 = fVar15 + fVar9;
      pfVar33 = pfVar33 + 2;
      pfVar29[3] = fVar15 - fVar9;
      pfVar29[2] = fVar7 - fVar14;
      pfVar28[2] = fVar6 + fVar8;
      pfVar28[3] = fVar12 + fVar17;
      pfVar30[3] = fVar12 - fVar17;
      pfVar30[2] = fVar6 - fVar8;
      fVar6 = pfVar38[-1];
      fVar7 = pfVar34[-1];
      fVar8 = *pfVar21;
      fVar13 = *pfVar37 + fVar6;
      fVar14 = fVar8 - *pfVar36;
      fVar9 = *pfVar22;
      fVar6 = *pfVar37 - fVar6;
      fVar17 = fVar9 - *pfVar35;
      fVar15 = *pfVar39 + fVar7;
      fVar8 = fVar8 + *pfVar36;
      fVar7 = *pfVar39 - fVar7;
      fVar9 = fVar9 + *pfVar35;
      fVar12 = fVar3 * fVar14 - fVar16 * fVar13;
      fVar13 = fVar3 * fVar13 + fVar16 * fVar14;
      fVar14 = fVar4 * fVar8 + fVar5 * fVar6;
      fVar3 = fVar11 * fVar17 - fVar2 * fVar15;
      fVar5 = fVar4 * fVar6 - fVar5 * fVar8;
      fVar4 = fVar1 * fVar9 + fVar10 * fVar7;
      fVar2 = fVar11 * fVar15 + fVar2 * fVar17;
      fVar1 = fVar1 * fVar7 - fVar10 * fVar9;
      *pfVar37 = fVar5 + fVar1;
      *pfVar21 = fVar14 + fVar4;
      *pfVar39 = fVar5 - fVar1;
      *pfVar22 = fVar14 - fVar4;
      *pfVar36 = fVar13 + fVar2;
      pfVar38[-1] = fVar12 + fVar3;
      *pfVar35 = fVar13 - fVar2;
      pfVar34[-1] = fVar12 - fVar3;
      pfVar34 = pfVar35;
      pfVar28 = pfVar28 + 2;
      pfVar25 = pfVar25 + -4;
      pfVar29 = pfVar29 + 2;
      pfVar30 = pfVar30 + 2;
      pfVar38 = pfVar36;
    } while (iVar26 < param_1);
  }
  uVar23 = (ulonglong)(uint)(param_1 * 2);
  uVar24 = uVar23 + (longlong)param_1 + uVar23;
  pfVar37 = param_2 + param_1;
  pfVar34 = (float *)((int)param_2 + (int)((uVar23 + uVar24 & 0xffffffff) << 2));
  pfVar39 = (float *)((int)param_2 + (int)((uVar24 & 0xffffffff) << 2));
  param_2 = (float *)((int)param_2 + (int)(((longlong)param_1 + uVar23 & 0xffffffff) << 2));
  fVar1 = pfVar39[1];
  fVar2 = pfVar37[1];
  fVar3 = pfVar34[1];
  fVar7 = fVar2 - *pfVar39;
  fVar4 = param_2[1];
  fVar2 = fVar2 + *pfVar39;
  pfVar30 = (float *)(param_3 + param_1 * 8);
  fVar14 = fVar4 - *pfVar34;
  fVar6 = *pfVar37 + fVar1;
  fVar8 = *param_2 + fVar3;
  fVar3 = *param_2 - fVar3;
  fVar4 = fVar4 + *pfVar34;
  fVar1 = *pfVar37 - fVar1;
  fVar10 = pfVar30[1];
  fVar5 = *pfVar30;
  fVar12 = fVar5 * fVar1 - fVar10 * fVar2;
  fVar9 = fVar10 * fVar7 + fVar5 * fVar6;
  fVar11 = fVar5 * fVar14 + fVar10 * fVar8;
  fVar13 = fVar10 * fVar4 + fVar5 * fVar3;
  fVar4 = fVar10 * fVar3 - fVar5 * fVar4;
  fVar3 = fVar5 * fVar2 + fVar10 * fVar1;
  fVar1 = fVar10 * fVar6 - fVar5 * fVar7;
  fVar2 = fVar5 * fVar8 - fVar10 * fVar14;
  *pfVar37 = fVar12 + fVar4;
  pfVar37[1] = fVar3 + fVar13;
  *param_2 = fVar12 - fVar4;
  param_2[1] = fVar3 - fVar13;
  *pfVar39 = fVar1 - fVar2;
  pfVar39[1] = fVar9 - fVar11;
  *pfVar34 = fVar1 + fVar2;
  pfVar34[1] = fVar9 + fVar11;
  return;
}



//==== 005fe460  ns=Global  size=0x990
// sig: undefined FUN_005fe460(void)
// callers(3): 005ffe10 FUN_005ffe10; 005fff00 FUN_005fff00; 00600860 FUN_00600860
// callees(0): 

void FUN_005fe460(float *param_1,int param_2)

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
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  
  fVar1 = *(float *)(param_2 + 4);
  fVar2 = param_1[0x1f];
  fVar3 = param_1[2];
  fVar4 = param_1[0x12];
  fVar5 = param_1[3];
  fVar6 = param_1[0x13];
  fVar7 = param_1[0x1a];
  fVar8 = param_1[10];
  fVar9 = param_1[4];
  fVar10 = param_1[0x1b];
  fVar11 = param_1[0xb];
  fVar12 = param_1[0x14];
  fVar28 = fVar11 - fVar10;
  fVar13 = param_1[5];
  fVar11 = fVar11 + fVar10;
  fVar10 = param_1[0x15];
  fVar14 = param_1[0xc];
  fVar15 = param_1[0x1c];
  fVar30 = fVar5 - fVar6;
  fVar32 = fVar14 - fVar15;
  fVar16 = param_1[0xd];
  fVar17 = param_1[0x1d];
  fVar18 = param_1[6];
  fVar19 = param_1[7];
  fVar20 = param_1[0x16];
  fVar21 = param_1[0x17];
  fVar22 = param_1[0xe];
  fVar23 = param_1[0x1e];
  fVar24 = param_1[0xf];
  fVar35 = fVar22 - fVar23;
  fVar22 = fVar22 + fVar23;
  fVar34 = fVar19 - fVar21;
  fVar27 = fVar3 - fVar4;
  fVar23 = fVar8 - fVar7;
  fVar37 = fVar9 - fVar12;
  fVar38 = fVar13 - fVar10;
  fVar29 = fVar16 - fVar17;
  fVar33 = fVar18 - fVar20;
  fVar3 = fVar3 + fVar4;
  fVar4 = fVar24 - fVar2;
  fVar25 = fVar1 * *(float *)(param_2 + 8);
  fVar31 = fVar30 - fVar23;
  fVar30 = fVar30 + fVar23;
  fVar19 = fVar19 + fVar21;
  fVar26 = *(float *)(param_2 + 8) + fVar25;
  fVar5 = fVar5 + fVar6;
  fVar18 = fVar18 + fVar20;
  fVar8 = fVar8 + fVar7;
  fVar40 = fVar38 - fVar32;
  fVar36 = fVar27 + fVar28;
  fVar39 = fVar37 + fVar29;
  fVar37 = fVar37 - fVar29;
  fVar24 = fVar24 + fVar2;
  fVar41 = fVar33 + fVar4;
  fVar29 = fVar5 - fVar11;
  fVar33 = fVar33 - fVar4;
  fVar42 = fVar3 - fVar8;
  fVar27 = fVar27 - fVar28;
  fVar38 = fVar38 + fVar32;
  fVar28 = fVar34 - fVar35;
  fVar34 = fVar34 + fVar35;
  fVar32 = fVar18 - fVar22;
  fVar35 = fVar19 - fVar24;
  fVar2 = param_1[0x10];
  fVar4 = param_1[0x11];
  fVar6 = param_1[1];
  fVar7 = param_1[0x19];
  fVar20 = param_1[8];
  fVar21 = param_1[9];
  fVar44 = *param_1 - fVar2;
  fVar47 = fVar21 - fVar7;
  fVar23 = param_1[0x18];
  fVar46 = fVar20 - fVar23;
  fVar45 = fVar6 - fVar4;
  fVar43 = fVar42 + fVar35;
  fVar20 = fVar20 + fVar23;
  fVar21 = fVar21 + fVar7;
  fVar42 = fVar42 - fVar35;
  fVar35 = fVar29 - fVar32;
  fVar2 = *param_1 + fVar2;
  fVar6 = fVar6 + fVar4;
  fVar9 = fVar9 + fVar12;
  fVar13 = fVar13 + fVar10;
  fVar14 = fVar14 + fVar15;
  fVar16 = fVar16 + fVar17;
  fVar29 = fVar29 + fVar32;
  fVar15 = fVar26 * fVar30 + fVar25 * fVar27;
  fVar32 = fVar44 + fVar47;
  fVar23 = fVar25 * fVar31 + fVar26 * fVar36;
  fVar49 = fVar2 - fVar20;
  fVar2 = fVar2 + fVar20;
  fVar51 = fVar9 - fVar14;
  fVar12 = fVar26 * fVar28 + fVar25 * fVar41;
  fVar48 = fVar45 - fVar46;
  fVar52 = fVar13 - fVar16;
  fVar20 = fVar25 * fVar34 + fVar26 * fVar33;
  fVar50 = fVar6 - fVar21;
  fVar6 = fVar6 + fVar21;
  fVar10 = fVar26 * fVar27 - fVar25 * fVar30;
  fVar21 = fVar1 * (fVar37 - fVar38);
  fVar7 = fVar1 * (fVar40 - fVar39);
  fVar17 = fVar25 * fVar36 - fVar26 * fVar31;
  fVar27 = fVar1 * (fVar39 + fVar40);
  fVar4 = fVar25 * fVar33 - fVar26 * fVar34;
  fVar31 = fVar48 + fVar7;
  fVar48 = fVar48 - fVar7;
  fVar30 = fVar1 * (fVar37 + fVar38);
  fVar7 = fVar26 * fVar41 - fVar25 * fVar28;
  fVar44 = fVar44 - fVar47;
  fVar5 = fVar5 + fVar11;
  fVar3 = fVar3 + fVar8;
  fVar45 = fVar45 + fVar46;
  fVar13 = fVar13 + fVar16;
  fVar18 = fVar18 + fVar22;
  fVar9 = fVar9 + fVar14;
  fVar19 = fVar19 + fVar24;
  fVar24 = fVar17 + fVar7;
  fVar26 = fVar23 + fVar12;
  fVar8 = fVar15 - fVar20;
  fVar25 = fVar45 - fVar30;
  fVar11 = fVar32 + fVar27;
  fVar22 = fVar44 - fVar21;
  fVar44 = fVar44 + fVar21;
  fVar16 = fVar10 - fVar4;
  fVar10 = fVar10 + fVar4;
  fVar28 = fVar1 * (fVar43 + fVar35);
  fVar4 = fVar2 - fVar9;
  fVar2 = fVar2 + fVar9;
  fVar21 = fVar49 + fVar52;
  fVar14 = fVar6 - fVar13;
  fVar6 = fVar6 + fVar13;
  fVar9 = fVar50 - fVar51;
  fVar15 = fVar15 + fVar20;
  fVar33 = fVar5 - fVar19;
  fVar20 = fVar3 - fVar18;
  fVar17 = fVar17 - fVar7;
  fVar32 = fVar32 - fVar27;
  fVar7 = fVar1 * (fVar42 + fVar29);
  fVar13 = fVar1 * (fVar43 - fVar35);
  fVar1 = fVar1 * (fVar42 - fVar29);
  fVar45 = fVar45 + fVar30;
  fVar49 = fVar49 - fVar52;
  fVar5 = fVar5 + fVar19;
  fVar23 = fVar23 - fVar12;
  fVar3 = fVar3 + fVar18;
  fVar50 = fVar50 + fVar51;
  param_1[0x18] = fVar32 + fVar17;
  param_1[0x19] = fVar48 + fVar23;
  param_1[0x1a] = fVar32 - fVar17;
  param_1[0x1b] = fVar48 - fVar23;
  param_1[0x1c] = fVar11 - fVar26;
  param_1[0x1d] = fVar31 + fVar24;
  param_1[0x1e] = fVar11 + fVar26;
  param_1[0x1f] = fVar31 - fVar24;
  param_1[0x10] = fVar44 + fVar10;
  param_1[0x11] = fVar45 + fVar15;
  param_1[0x12] = fVar44 - fVar10;
  param_1[0x13] = fVar45 - fVar15;
  param_1[0x14] = fVar22 - fVar8;
  param_1[0x15] = fVar25 + fVar16;
  param_1[0x16] = fVar22 + fVar8;
  param_1[0x17] = fVar25 - fVar16;
  param_1[8] = fVar1 + fVar49;
  param_1[9] = fVar7 + fVar50;
  param_1[10] = fVar49 - fVar1;
  param_1[0xb] = fVar50 - fVar7;
  param_1[0xc] = fVar21 - fVar28;
  param_1[0xd] = fVar13 + fVar9;
  param_1[0xe] = fVar28 + fVar21;
  param_1[0xf] = fVar9 - fVar13;
  *param_1 = fVar2 + fVar3;
  param_1[1] = fVar6 + fVar5;
  param_1[2] = fVar2 - fVar3;
  param_1[3] = fVar6 - fVar5;
  param_1[4] = fVar4 - fVar33;
  param_1[5] = fVar14 + fVar20;
  param_1[6] = fVar4 + fVar33;
  param_1[7] = fVar14 - fVar20;
  return;
}



//==== 005fedf0  ns=Global  size=0xb48
// sig: undefined FUN_005fedf0(void)
// callers(2): 005ffe10 FUN_005ffe10; 005fff00 FUN_005fff00
// callees(0): 

void FUN_005fedf0(float *param_1,int param_2)

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
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  
  fVar1 = param_1[0x1e];
  fVar2 = param_1[0x13];
  fVar3 = param_1[3];
  fVar4 = param_1[2];
  fVar5 = param_1[0x12];
  fVar23 = fVar4 + fVar2;
  fVar6 = param_1[0x1b];
  fVar4 = fVar4 - fVar2;
  fVar2 = param_1[10];
  fVar26 = fVar3 - fVar5;
  fVar25 = fVar2 + fVar6;
  fVar7 = param_1[0xb];
  fVar8 = param_1[0x1a];
  fVar9 = param_1[7];
  fVar10 = param_1[6];
  fVar11 = param_1[0x17];
  fVar12 = param_1[0xf];
  fVar13 = param_1[0x1f];
  fVar14 = param_1[0x16];
  fVar15 = param_1[0xe];
  fVar29 = fVar15 + fVar13;
  fVar28 = fVar10 + fVar11;
  fVar15 = fVar15 - fVar13;
  fVar10 = fVar10 - fVar11;
  fVar27 = fVar7 - fVar8;
  fVar30 = fVar9 - fVar14;
  fVar22 = fVar12 - fVar1;
  fVar12 = fVar12 + fVar1;
  fVar7 = fVar7 + fVar8;
  fVar2 = fVar2 - fVar6;
  fVar3 = fVar3 + fVar5;
  fVar9 = fVar9 + fVar14;
  fVar1 = *(float *)(param_2 + 0x14);
  fVar24 = fVar1 * fVar30 - *(float *)(param_2 + 0x10) * fVar28;
  fVar5 = param_1[0x19];
  fVar6 = param_1[0x18];
  fVar8 = param_1[0x15];
  fVar11 = param_1[0x14];
  fVar13 = param_1[0x1d];
  fVar14 = param_1[0x1c];
  fVar16 = param_1[8];
  fVar17 = param_1[9];
  fVar18 = param_1[4];
  fVar19 = param_1[5];
  fVar20 = param_1[0xc];
  fVar21 = param_1[0xd];
  fVar33 = fVar16 + fVar5;
  fVar16 = fVar16 - fVar5;
  fVar31 = *(float *)(param_2 + 0x1c) * fVar22 + *(float *)(param_2 + 0x18) * fVar29;
  fVar38 = *(float *)(param_2 + 0x10) * fVar3 + fVar1 * fVar4;
  fVar34 = fVar17 - fVar6;
  fVar17 = fVar17 + fVar6;
  fVar32 = *(float *)(param_2 + 0x1c) * fVar7 + *(float *)(param_2 + 0x18) * fVar2;
  fVar39 = *(float *)(param_2 + 0x18) * fVar26 + *(float *)(param_2 + 0x1c) * fVar23;
  fVar35 = fVar18 + fVar8;
  fVar18 = fVar18 - fVar8;
  fVar40 = *(float *)(param_2 + 0x10) * fVar27 - fVar1 * fVar25;
  fVar36 = fVar20 + fVar13;
  fVar37 = fVar21 - fVar14;
  fVar20 = fVar20 - fVar13;
  fVar21 = fVar21 + fVar14;
  fVar14 = fVar19 - fVar11;
  fVar19 = fVar19 + fVar11;
  fVar41 = *(float *)(param_2 + 0x18) * fVar9 + *(float *)(param_2 + 0x1c) * fVar10;
  fVar8 = *(float *)(param_2 + 0x10) * fVar4 - fVar1 * fVar3;
  fVar13 = fVar1 * fVar12 + *(float *)(param_2 + 0x10) * fVar15;
  fVar42 = *(float *)(param_2 + 0x1c) * fVar2 - *(float *)(param_2 + 0x18) * fVar7;
  fVar26 = *(float *)(param_2 + 0x18) * fVar23 - *(float *)(param_2 + 0x1c) * fVar26;
  fVar2 = *(float *)(param_2 + 0x20);
  fVar25 = *(float *)(param_2 + 0x10) * fVar25 + fVar1 * fVar27;
  fVar11 = fVar1 * fVar15 - *(float *)(param_2 + 0x10) * fVar12;
  fVar9 = *(float *)(param_2 + 0x18) * fVar10 - *(float *)(param_2 + 0x1c) * fVar9;
  fVar29 = *(float *)(param_2 + 0x1c) * fVar29 - *(float *)(param_2 + 0x18) * fVar22;
  fVar43 = fVar26 + fVar25;
  fVar7 = fVar1 * fVar28 + *(float *)(param_2 + 0x10) * fVar30;
  fVar23 = fVar8 - fVar42;
  fVar27 = fVar38 - fVar32;
  fVar44 = fVar9 - fVar11;
  fVar1 = *(float *)(param_2 + 0x24);
  fVar30 = fVar39 + fVar40;
  fVar45 = fVar41 - fVar13;
  fVar46 = fVar24 - fVar31;
  fVar28 = fVar7 - fVar29;
  fVar22 = fVar1 * fVar20 - fVar2 * fVar21;
  fVar10 = fVar2 * fVar18 - fVar1 * fVar19;
  fVar3 = *(float *)(param_2 + 4);
  fVar47 = fVar3 * (fVar33 - fVar34);
  fVar48 = fVar3 * (fVar16 - fVar17);
  fVar15 = fVar2 * fVar19 + fVar1 * fVar18;
  fVar12 = fVar2 * fVar37 + fVar1 * fVar36;
  fVar19 = fVar1 * fVar21 + fVar2 * fVar20;
  fVar20 = fVar23 + fVar45;
  fVar4 = param_1[0x11];
  fVar49 = *param_1 + fVar4;
  fVar18 = fVar1 * fVar14 + fVar2 * fVar35;
  fVar5 = param_1[0x10];
  fVar6 = param_1[1];
  fVar21 = fVar6 - fVar5;
  fVar6 = fVar6 + fVar5;
  fVar50 = fVar27 - fVar44;
  fVar51 = fVar43 - fVar46;
  fVar16 = fVar3 * (fVar16 + fVar17);
  fVar52 = fVar30 + fVar28;
  fVar5 = fVar1 * fVar35 - fVar2 * fVar14;
  fVar1 = fVar2 * fVar36 - fVar1 * fVar37;
  fVar23 = fVar23 - fVar45;
  fVar27 = fVar27 + fVar44;
  fVar30 = fVar30 - fVar28;
  fVar14 = fVar10 - fVar22;
  fVar28 = fVar15 - fVar19;
  fVar2 = fVar3 * (fVar33 + fVar34);
  fVar15 = fVar15 + fVar19;
  fVar10 = fVar10 + fVar22;
  fVar4 = *param_1 - fVar4;
  fVar43 = fVar43 + fVar46;
  fVar17 = fVar21 - fVar47;
  fVar36 = fVar18 + fVar12;
  fVar21 = fVar21 + fVar47;
  fVar19 = fVar4 - fVar48;
  fVar4 = fVar4 + fVar48;
  fVar22 = fVar49 + fVar2;
  fVar34 = fVar5 + fVar1;
  fVar5 = fVar5 - fVar1;
  fVar35 = fVar4 + fVar10;
  fVar33 = fVar6 - fVar16;
  fVar1 = fVar3 * (fVar23 - fVar27);
  fVar6 = fVar6 + fVar16;
  fVar8 = fVar8 + fVar42;
  fVar38 = fVar38 + fVar32;
  fVar49 = fVar49 - fVar2;
  fVar39 = fVar39 - fVar40;
  fVar26 = fVar26 - fVar25;
  fVar9 = fVar9 + fVar11;
  fVar16 = fVar49 - fVar5;
  fVar49 = fVar49 + fVar5;
  fVar18 = fVar18 - fVar12;
  fVar41 = fVar41 + fVar13;
  fVar7 = fVar7 + fVar29;
  fVar4 = fVar4 - fVar10;
  fVar13 = fVar21 - fVar18;
  fVar21 = fVar21 + fVar18;
  fVar24 = fVar24 + fVar31;
  fVar25 = fVar8 - fVar9;
  fVar12 = fVar6 - fVar15;
  fVar6 = fVar6 + fVar15;
  fVar29 = fVar38 - fVar41;
  fVar15 = fVar19 + fVar28;
  fVar8 = fVar8 + fVar9;
  fVar19 = fVar19 - fVar28;
  fVar32 = fVar22 - fVar36;
  fVar28 = fVar26 - fVar7;
  fVar18 = fVar33 - fVar14;
  fVar31 = fVar39 + fVar24;
  fVar26 = fVar26 + fVar7;
  fVar22 = fVar22 + fVar36;
  fVar36 = fVar17 - fVar34;
  fVar2 = fVar3 * (fVar23 + fVar27);
  fVar5 = fVar3 * (fVar51 + fVar52);
  fVar7 = fVar3 * (fVar20 - fVar50);
  fVar9 = fVar3 * (fVar20 + fVar50);
  fVar10 = fVar3 * (fVar43 - fVar30);
  fVar11 = fVar3 * (fVar43 + fVar30);
  fVar3 = fVar3 * (fVar51 - fVar52);
  fVar38 = fVar38 + fVar41;
  fVar39 = fVar39 - fVar24;
  fVar33 = fVar33 + fVar14;
  fVar17 = fVar17 + fVar34;
  *param_1 = fVar35 + fVar8;
  param_1[1] = fVar6 + fVar38;
  param_1[2] = fVar35 - fVar8;
  param_1[3] = fVar6 - fVar38;
  param_1[4] = fVar4 - fVar29;
  param_1[5] = fVar12 + fVar25;
  param_1[6] = fVar4 + fVar29;
  param_1[7] = fVar12 - fVar25;
  param_1[8] = fVar19 + fVar1;
  param_1[9] = fVar33 + fVar2;
  param_1[10] = fVar19 - fVar1;
  param_1[0xb] = fVar33 - fVar2;
  param_1[0xc] = fVar15 - fVar9;
  param_1[0xd] = fVar18 + fVar7;
  param_1[0xe] = fVar15 + fVar9;
  param_1[0xf] = fVar18 - fVar7;
  param_1[0x10] = fVar49 + fVar28;
  param_1[0x11] = fVar21 + fVar39;
  param_1[0x12] = fVar49 - fVar28;
  param_1[0x13] = fVar21 - fVar39;
  param_1[0x14] = fVar16 - fVar31;
  param_1[0x15] = fVar13 + fVar26;
  param_1[0x16] = fVar16 + fVar31;
  param_1[0x17] = fVar13 - fVar26;
  param_1[0x18] = fVar32 + fVar10;
  param_1[0x19] = fVar17 + fVar11;
  param_1[0x1a] = fVar32 - fVar10;
  param_1[0x1b] = fVar17 - fVar11;
  param_1[0x1c] = fVar22 - fVar5;
  param_1[0x1d] = fVar36 + fVar3;
  param_1[0x1e] = fVar22 + fVar5;
  param_1[0x1f] = fVar36 - fVar3;
  return;
}



//==== 005ff938  ns=Global  size=0x23c
// sig: undefined FUN_005ff938(void)
// callers(3): 005ffe10 FUN_005ffe10; 005fff00 FUN_005fff00; 00600860 FUN_00600860
// callees(0): 

void FUN_005ff938(float *param_1,int param_2)

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
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  
  fVar1 = *(float *)(param_2 + 4);
  fVar2 = param_1[0xf];
  fVar3 = param_1[10];
  fVar4 = param_1[0xe];
  fVar5 = param_1[2];
  fVar6 = param_1[3];
  fVar14 = fVar5 - fVar3;
  fVar7 = param_1[0xb];
  fVar5 = fVar5 + fVar3;
  fVar3 = param_1[6];
  fVar16 = fVar6 - fVar7;
  fVar8 = param_1[7];
  fVar15 = fVar3 - fVar4;
  fVar13 = fVar8 - fVar2;
  fVar9 = param_1[9];
  fVar8 = fVar8 + fVar2;
  fVar2 = param_1[0xd];
  fVar6 = fVar6 + fVar7;
  fVar7 = param_1[8];
  fVar3 = fVar3 + fVar4;
  fVar4 = param_1[0xc];
  fVar19 = *param_1 - fVar7;
  fVar10 = param_1[1];
  fVar7 = *param_1 + fVar7;
  fVar11 = param_1[4];
  fVar12 = param_1[5];
  fVar21 = fVar11 - fVar4;
  fVar18 = fVar16 - fVar15;
  fVar17 = fVar14 + fVar13;
  fVar16 = fVar16 + fVar15;
  fVar14 = fVar14 - fVar13;
  fVar20 = fVar12 - fVar2;
  fVar13 = fVar10 - fVar9;
  fVar11 = fVar11 + fVar4;
  fVar12 = fVar12 + fVar2;
  fVar10 = fVar10 + fVar9;
  fVar9 = fVar5 - fVar3;
  fVar5 = fVar5 + fVar3;
  fVar24 = fVar13 - fVar21;
  fVar23 = fVar7 - fVar11;
  fVar22 = fVar19 + fVar20;
  fVar25 = fVar10 - fVar12;
  fVar15 = fVar6 - fVar8;
  fVar7 = fVar7 + fVar11;
  fVar2 = fVar1 * (fVar17 + fVar18);
  fVar10 = fVar10 + fVar12;
  fVar3 = fVar1 * (fVar14 + fVar16);
  fVar4 = fVar1 * (fVar14 - fVar16);
  fVar19 = fVar19 - fVar20;
  fVar1 = fVar1 * (fVar17 - fVar18);
  fVar13 = fVar13 + fVar21;
  fVar6 = fVar6 + fVar8;
  param_1[8] = fVar19 + fVar4;
  param_1[9] = fVar13 + fVar3;
  param_1[10] = fVar19 - fVar4;
  param_1[0xb] = fVar13 - fVar3;
  param_1[0xc] = fVar22 - fVar2;
  param_1[0xd] = fVar24 + fVar1;
  param_1[0xe] = fVar22 + fVar2;
  param_1[0xf] = fVar24 - fVar1;
  *param_1 = fVar7 + fVar5;
  param_1[1] = fVar10 + fVar6;
  param_1[2] = fVar7 - fVar5;
  param_1[3] = fVar10 - fVar6;
  param_1[4] = fVar23 - fVar15;
  param_1[5] = fVar25 + fVar9;
  param_1[6] = fVar23 + fVar15;
  param_1[7] = fVar25 - fVar9;
  return;
}



//==== 005ffb74  ns=Global  size=0x29c
// sig: undefined FUN_005ffb74(void)
// callers(2): 005ffe10 FUN_005ffe10; 005fff00 FUN_005fff00
// callees(0): 

void FUN_005ffb74(float *param_1,int param_2)

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
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  
  fVar2 = param_1[0xe];
  fVar3 = param_1[0xf];
  fVar4 = param_1[0xd];
  fVar5 = param_1[0xc];
  fVar6 = param_1[0xb];
  fVar7 = param_1[10];
  fVar8 = param_1[4];
  fVar9 = param_1[5];
  fVar16 = fVar8 + fVar4;
  fVar10 = param_1[2];
  fVar17 = fVar9 - fVar5;
  fVar11 = param_1[3];
  fVar18 = fVar10 + fVar6;
  fVar12 = param_1[6];
  fVar19 = fVar11 - fVar7;
  fVar13 = param_1[7];
  fVar15 = fVar12 + fVar3;
  fVar14 = fVar13 - fVar2;
  fVar1 = *(float *)(param_2 + 0x14);
  fVar9 = fVar9 + fVar5;
  fVar12 = fVar12 - fVar3;
  fVar5 = param_1[9];
  fVar8 = fVar8 - fVar4;
  fVar10 = fVar10 - fVar6;
  fVar11 = fVar11 + fVar7;
  fVar3 = *(float *)(param_2 + 0x10);
  fVar13 = fVar13 + fVar2;
  fVar4 = param_1[1];
  fVar6 = param_1[8];
  fVar2 = *(float *)(param_2 + 4);
  fVar21 = fVar3 * fVar14 + fVar1 * fVar15;
  fVar24 = *param_1 + fVar5;
  fVar25 = fVar4 - fVar6;
  fVar23 = fVar1 * fVar13 + fVar3 * fVar12;
  fVar26 = fVar2 * (fVar16 + fVar17);
  fVar20 = fVar3 * fVar11 + fVar1 * fVar10;
  fVar22 = fVar1 * fVar19 + fVar3 * fVar18;
  fVar11 = fVar3 * fVar10 - fVar1 * fVar11;
  fVar27 = fVar2 * (fVar8 + fVar9);
  fVar10 = fVar3 * fVar15 - fVar1 * fVar14;
  fVar8 = fVar2 * (fVar8 - fVar9);
  fVar7 = fVar1 * fVar18 - fVar3 * fVar19;
  fVar2 = fVar2 * (fVar16 - fVar17);
  fVar1 = fVar1 * fVar12 - fVar3 * fVar13;
  fVar5 = *param_1 - fVar5;
  fVar4 = fVar4 + fVar6;
  fVar12 = fVar20 - fVar23;
  fVar3 = fVar22 + fVar21;
  fVar6 = fVar24 + fVar26;
  fVar20 = fVar20 + fVar23;
  fVar24 = fVar24 - fVar26;
  fVar22 = fVar22 - fVar21;
  fVar15 = fVar7 + fVar10;
  fVar13 = fVar11 - fVar1;
  fVar9 = fVar25 - fVar2;
  fVar16 = fVar5 - fVar8;
  fVar14 = fVar4 - fVar27;
  fVar5 = fVar5 + fVar8;
  fVar4 = fVar4 + fVar27;
  fVar11 = fVar11 + fVar1;
  fVar25 = fVar25 + fVar2;
  fVar7 = fVar7 - fVar10;
  *param_1 = fVar5 + fVar11;
  param_1[1] = fVar4 + fVar20;
  param_1[2] = fVar5 - fVar11;
  param_1[3] = fVar4 - fVar20;
  param_1[4] = fVar16 - fVar12;
  param_1[5] = fVar14 + fVar13;
  param_1[6] = fVar16 + fVar12;
  param_1[7] = fVar14 - fVar13;
  param_1[8] = fVar24 + fVar7;
  param_1[9] = fVar25 + fVar22;
  param_1[10] = fVar24 - fVar7;
  param_1[0xb] = fVar25 - fVar22;
  param_1[0xc] = fVar6 - fVar3;
  param_1[0xd] = fVar9 + fVar15;
  param_1[0xe] = fVar6 + fVar3;
  param_1[0xf] = fVar9 - fVar15;
  return;
}



//==== 005ffe10  ns=Global  size=0xf0
// sig: undefined FUN_005ffe10(void)
// callers(2): 005ffff0 FUN_005ffff0; 00600458 FUN_00600458
// callees(4): 005fe460 FUN_005fe460; 005fedf0 FUN_005fedf0; 005ff938 FUN_005ff938; 005ffb74 FUN_005ffb74

void FUN_005ffe10(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  
  if (param_1 != 0x80) {
    iVar1 = param_3 * 4 + param_4 + -0x40;
    FUN_005ff938(param_2,iVar1);
    FUN_005ffb74(param_2 + 0x40,iVar1);
    FUN_005ff938(param_2 + 0x80,iVar1);
    FUN_005ffb74(param_2 + 0xc0,iVar1);
    return;
  }
  param_4 = param_4 + param_3 * 4;
  iVar1 = param_4 + -0x20;
  param_4 = param_4 + -0x80;
  FUN_005fe460(param_2,iVar1);
  FUN_005fedf0(param_2 + 0x80,param_4);
  FUN_005fe460(param_2 + 0x100,iVar1);
  FUN_005fedf0(param_2 + 0x180,param_4);
  return;
}



//==== 005fff00  ns=Global  size=0xec
// sig: undefined FUN_005fff00(void)
// callers(3): 005ffff0 FUN_005ffff0; 00600458 FUN_00600458; 00600860 FUN_00600860
// callees(4): 005fe460 FUN_005fe460; 005fedf0 FUN_005fedf0; 005ff938 FUN_005ff938; 005ffb74 FUN_005ffb74

void FUN_005fff00(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  
  if (param_1 != 0x80) {
    iVar1 = param_3 * 4 + param_4 + -0x40;
    FUN_005ff938(param_2,iVar1);
    FUN_005ffb74(param_2 + 0x40,iVar1);
    FUN_005ff938(param_2 + 0x80,iVar1);
    FUN_005ff938(param_2 + 0xc0,iVar1);
    return;
  }
  param_4 = param_4 + param_3 * 4;
  iVar1 = param_4 + -0x20;
  FUN_005fe460(param_2,iVar1);
  FUN_005fedf0(param_2 + 0x80,param_4 + -0x80);
  FUN_005fe460(param_2 + 0x100,iVar1);
  FUN_005fe460(param_2 + 0x180,iVar1);
  return;
}



//==== 005ffff0  ns=Global  size=0x330
// sig: undefined FUN_005ffff0(void)
// callers(2): 00600320 FUN_00600320; 00600860 FUN_00600860
// callees(4): 005fd9f8 FUN_005fd9f8; 005fde88 FUN_005fde88; 005ffe10 FUN_005ffe10; 005fff00 FUN_005fff00

void FUN_005ffff0(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar2;
  
  iVar1 = param_1 >> 2;
  while( true ) {
    iVar2 = iVar1 >> 1;
    if (iVar1 < 0x81) break;
    if (iVar1 < param_1) {
      iVar4 = param_4 + (param_3 - iVar2) * 4;
      iVar3 = iVar1;
      do {
        iVar8 = iVar3 - iVar1;
        iVar5 = iVar3 * 4;
        if (iVar8 < param_1) {
          iVar7 = param_2 + (iVar3 + iVar8) * 4;
          iVar9 = param_2 + iVar8 * 4;
          iVar10 = param_2 + (iVar8 + iVar3 * 2) * 4;
          iVar8 = iVar5 + iVar8;
          iVar6 = iVar3 * 0x10;
          do {
            iVar8 = iVar8 + iVar5;
            FUN_005fd9f8(iVar1,iVar9,iVar4);
            iVar9 = iVar9 + iVar6;
            FUN_005fde88(iVar1,iVar7,param_4 + (param_3 - iVar1) * 4);
            iVar7 = iVar7 + iVar6;
            FUN_005fd9f8(iVar1,iVar10,iVar4);
            iVar10 = iVar10 + iVar6;
          } while (iVar8 + iVar3 * -4 < param_1);
        }
        iVar3 = iVar5;
      } while (iVar5 < param_1);
    }
    FUN_005fd9f8(iVar1,param_2 + (param_1 - iVar1) * 4,param_4 + (param_3 - iVar2) * 4);
    iVar1 = iVar1 >> 2;
  }
  if (iVar1 < param_1) {
    iVar4 = param_4 + (param_3 - iVar2) * 4;
    iVar3 = iVar1;
    do {
      iVar8 = iVar3 - iVar1;
      iVar5 = iVar3 * 4;
      if (iVar8 < param_1) {
        iVar7 = param_2 + (iVar8 + iVar3) * 4;
        iVar6 = param_2 + iVar8 * 4;
        iVar9 = iVar8 + iVar5;
        iVar10 = iVar3 * 0x10;
        iVar8 = param_2 + (iVar8 + iVar3 * 2) * 4;
        do {
          FUN_005fd9f8(iVar1,iVar6,iVar4);
          FUN_005fff00(iVar1,iVar6,param_3,param_4);
          iVar9 = iVar9 + iVar5;
          FUN_005fde88(iVar1,iVar7,param_4 + (param_3 - iVar1) * 4);
          iVar6 = iVar6 + iVar10;
          FUN_005ffe10(iVar1,iVar7,param_3,param_4);
          iVar7 = iVar7 + iVar10;
          FUN_005fd9f8(iVar1,iVar8,iVar4);
          FUN_005fff00(iVar1,iVar8,param_3,param_4);
          iVar8 = iVar8 + iVar10;
        } while (iVar9 + iVar3 * -4 < param_1);
      }
      iVar3 = iVar5;
    } while (iVar5 < param_1);
  }
  param_2 = (param_1 - iVar1) * 4 + param_2;
  FUN_005fd9f8(iVar1,param_2,(param_3 - iVar2) * 4 + param_4);
  FUN_005fff00(iVar1,param_2,param_3,param_4);
  return;
}



