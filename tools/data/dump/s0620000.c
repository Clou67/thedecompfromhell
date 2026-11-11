//==== 00620150  ns=Global  size=0x140
// sig: undefined FUN_00620150(void)
// callers(0): 
// callees(2): 0061948c 989snd::snd_Printf; 0062b288 989snd::snd_SynthGetVoicePlaybackPosition
// strings: 0066c480: '%s(%d) : Invalid parameter.\n' | 0066c4a0: 'common/valloc.cpp'

undefined4 FUN_00620150(uint param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  uint uVar4;
  
  puVar1 = PTR_PTR_0071b024;
  if (((int)param_1 < 0) || (**(int **)(PTR_PTR_0071b024 + -0x7ff0) <= (int)param_1)) {
    989snd::snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b024 + -0x7fac));
    if (**(char **)(puVar1 + -0x7fa4) != '\0') {
      return 0;
    }
    uVar3 = (longlong)((int)param_1 >> 5) + (ulonglong)((int)param_1 < 0 && (param_1 & 0x1f) != 0);
    trapWord(0x18,(ulonglong)**(byte **)(puVar1 + -0x7fa0),0);
    uVar4 = 1 << (param_1 - (int)((uVar3 & 0xffffffff) << 5) & 0x3f) &
            *(uint *)(*(int *)(puVar1 + -0x7f64) + (int)((uVar3 & 0xffffffff) << 2));
  }
  else {
    uVar3 = (longlong)((int)param_1 >> 5) + (ulonglong)((int)param_1 < 0 && (param_1 & 0x1f) != 0);
    uVar4 = 1 << (param_1 - (int)((uVar3 & 0xffffffff) << 5) & 0x3f) &
            *(uint *)(*(int *)(PTR_PTR_0071b024 + -0x7f64) + (int)((uVar3 & 0xffffffff) << 2));
  }
  if (uVar4 != 0) {
    return 0;
  }
  uVar2 = 989snd::snd_SynthGetVoicePlaybackPosition
                    (*(undefined4 *)(param_1 * 0x68 + **(int **)(puVar1 + -0x8000) + 0x60),param_2);
  return uVar2;
}



//==== 00620290  ns=Global  size=0x154
// sig: undefined FUN_00620290(void)
// callers(3): 0060e810 FUN_0060e810; 00614aa0 FUN_00614aa0; 00638ea0 FUN_00638ea0
// callees(4): 0061948c 989snd::snd_Printf; 006271f4 989snd::snd_SynthUnlock; 006272e8 989snd::snd_SynthLock; 0062ee18 FUN_0062ee18
// strings: 0066c4a0: 'common/valloc.cpp' | 0066c570: '%s(%d) : Invlaid voice owner.\n' | 0066c480: '%s(%d) : Invalid parameter.\n'

void FUN_00620290(int param_1,ulonglong param_2,int param_3)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  
  puVar2 = PTR_PTR_0071b024;
  if (((param_1 < 0) || (**(int **)(PTR_PTR_0071b024 + -0x7ff0) <= param_1)) || ((int)param_2 == 0))
  {
    989snd::snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b024 + -0x7fac));
    if (**(char **)(puVar2 + -0x7fa4) != '\0') {
      return;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar2 + -0x7fa0),0);
    989snd::snd_SynthLock();
    iVar3 = param_1 * 0x68 + **(int **)(puVar2 + -0x8000);
    iVar1 = *(int *)(iVar3 + 0x28);
  }
  else {
    989snd::snd_SynthLock(param_1,param_2,0x3d9);
    iVar3 = param_1 * 0x68 + **(int **)(puVar2 + -0x8000);
    iVar1 = *(int *)(iVar3 + 0x28);
  }
  if (iVar1 != param_3) {
    989snd::snd_Printf((char)*(undefined4 *)(puVar2 + -0x7f10));
    989snd::snd_SynthUnlock();
    return;
  }
  FUN_0062ee18(*(undefined4 *)(iVar3 + 0x60),iVar1 + 0x168,param_2 & 0xffffffff);
  989snd::snd_SynthUnlock();
  return;
}



//==== 006203e4  ns=Global  size=0x388
// sig: undefined FUN_006203e4(void)
// callers(2): 0062076c FUN_0062076c; 006209e4 FUN_006209e4
// callees(2): 00604918 FUN_00604918; 0061948c 989snd::snd_Printf
// strings: 0066c4a0: 'common/valloc.cpp' | 0066c5c0: '%s(%d) : Voice index %d was already on the playing list.\n' | 0066c480: '%s(%d) : Invalid parameter.\n' | 0066c590: '%s(%d) : Voice index %d is already playing.\n' | 0066c600: '%s(%d) : Voice index %d has an invalid voice group.\n'

void FUN_006203e4(uint param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  undefined *puVar19;
  undefined4 uVar20;
  int iVar21;
  uint uVar22;
  undefined4 *puVar23;
  
  puVar19 = PTR_PTR_0071b024;
  if (((int)param_1 < 0) || (**(int **)(PTR_PTR_0071b024 + -0x7ff0) <= (int)param_1)) {
    989snd::snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b024 + -0x7fac));
    if (**(char **)(puVar19 + -0x7fa4) != '\0') {
      return;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar19 + -0x7fa0),0);
    puVar23 = (undefined4 *)(param_1 * 0x68 + **(int **)(puVar19 + -0x8000));
    iVar1 = puVar23[4];
  }
  else {
    puVar23 = (undefined4 *)(param_1 * 0x68 + **(int **)(PTR_PTR_0071b024 + -0x8000));
    iVar1 = puVar23[4];
  }
  if (iVar1 == 1) {
    989snd::snd_Printf((char)*(undefined4 *)(puVar19 + -0x7ee0));
    989snd::snd_Printf((char)*(undefined4 *)(puVar19 + -0x7fac));
    if (**(char **)(puVar19 + -0x7fa4) != '\0') {
      return;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar19 + -0x7fa0),0);
    puVar23[4] = 1;
    uVar20 = FUN_00604918();
    puVar2 = *(undefined4 **)(puVar19 + -0x7edc);
    puVar23[5] = uVar20;
    *puVar23 = 0;
    puVar3 = (undefined4 *)*puVar2;
  }
  else {
    puVar23[4] = 1;
    uVar20 = FUN_00604918();
    puVar2 = *(undefined4 **)(puVar19 + -0x7edc);
    puVar23[5] = uVar20;
    *puVar23 = 0;
    puVar3 = (undefined4 *)*puVar2;
  }
  if (puVar3 != (undefined4 *)0x0) {
    if (puVar23 == puVar3) {
      989snd::snd_Printf((char)*(undefined4 *)(puVar19 + -0x7ed8));
    }
    else {
      do {
        puVar2 = (undefined4 *)*puVar3;
        if (puVar2 == (undefined4 *)0x0) {
          *puVar3 = puVar23;
          goto LAB_006205d0;
        }
        puVar3 = puVar2;
      } while (puVar23 != puVar2);
      989snd::snd_Printf((char)*(undefined4 *)(puVar19 + -0x7ed8));
    }
    return;
  }
  *puVar2 = puVar23;
LAB_006205d0:
  if (*(byte *)((int)puVar23 + 10) < 0x20) {
    iVar1 = (char)*(byte *)((int)puVar23 + 10) * 4;
    *(int *)(*(int *)(puVar19 + -0x7fec) + iVar1) =
         *(int *)(*(int *)(puVar19 + -0x7fec) + iVar1) + 1;
  }
  else {
    989snd::snd_Printf((char)*(undefined4 *)(puVar19 + -0x7ed4));
  }
  iVar21 = ((int)param_1 >> 5) + (uint)((int)param_1 < 0 && (param_1 & 0x1f) != 0);
  iVar1 = *(int *)(puVar19 + -0x7f64);
  iVar4 = *(int *)(puVar19 + -0x7ff4);
  iVar5 = *(int *)(puVar19 + -0x7f4c);
  iVar18 = iVar21 * 4;
  iVar6 = *(int *)(puVar19 + -0x7f44);
  iVar7 = *(int *)(puVar19 + -0x7f60);
  iVar8 = *(int *)(puVar19 + -0x7f5c);
  iVar9 = *(int *)(puVar19 + -0x7f58);
  uVar17 = 1 << (param_1 + iVar21 * -0x20 & 0x3f);
  uVar10 = *(uint *)(iVar1 + iVar18);
  uVar22 = ~uVar17;
  uVar11 = *(uint *)(iVar4 + iVar18);
  uVar12 = *(uint *)(iVar5 + iVar18);
  uVar13 = *(uint *)(iVar6 + iVar18);
  uVar14 = *(uint *)(iVar7 + iVar18);
  uVar15 = *(uint *)(iVar8 + iVar18);
  uVar16 = *(uint *)(iVar9 + iVar18);
  *(uint *)(*(int *)(puVar19 + -0x7f48) + iVar18) =
       uVar17 | *(uint *)(*(int *)(puVar19 + -0x7f48) + iVar18);
  *(uint *)(iVar6 + iVar18) = uVar17 | uVar13;
  *(uint *)(iVar1 + iVar18) = uVar10 | uVar17;
  *(uint *)(iVar4 + iVar18) = uVar17 | uVar11;
  *(uint *)(iVar5 + iVar18) = uVar17 | uVar12;
  *(uint *)(iVar7 + iVar18) = uVar14 & uVar22;
  *(uint *)(iVar8 + iVar18) = uVar22 & uVar15;
  *(uint *)(iVar9 + iVar18) = uVar22 & uVar16;
  if ((*(uint *)(*(int *)(puVar19 + -0x7f8c) + *(char *)((int)puVar23 + 10) * 4) & 2) == 0) {
    *(uint *)(*(int *)(puVar19 + -0x7f54) + iVar18) =
         uVar22 & *(uint *)(*(int *)(puVar19 + -0x7f54) + iVar18);
  }
  else {
    *(uint *)(*(int *)(puVar19 + -0x7f54) + iVar18) =
         uVar17 | *(uint *)(*(int *)(puVar19 + -0x7f54) + iVar18);
  }
  *(uint *)(*(int *)(puVar19 + -0x7f50) + iVar18) =
       uVar22 & *(uint *)(*(int *)(puVar19 + -0x7f50) + iVar18);
  return;
}



//==== 0062076c  ns=Global  size=0x278
// sig: undefined FUN_0062076c(void)
// callers(0): 
// callees(4): 0061948c 989snd::snd_Printf; 006203e4 FUN_006203e4; 006271f4 989snd::snd_SynthUnlock; 006272e8 989snd::snd_SynthLock
// strings: 0066c550: '%s(%d) : Bad voice channel.\n' | 0066c4a0: 'common/valloc.cpp' | 0066c480: '%s(%d) : Invalid parameter.\n'

/* WARNING: Heritage AFTER dead removal. Example location: r0x0071b024 : 0x00620a10 */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_0062076c(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  byte bVar1;
  int *piVar2;
  char *pcVar3;
  byte *pbVar4;
  int *piVar5;
  uint uVar6;
  undefined *puVar7;
  undefined *puVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  uint *puVar15;
  uint uVar16;
  int iVar17;
  double dVar18;
  
  puVar7 = PTR_PTR_0071b024;
  dVar18 = (double)989snd::snd_SynthLock();
  piVar2 = *(int **)(puVar7 + -0x7ff0);
  if (0 < *piVar2) {
    puVar15 = (uint *)(param_1 + 0x14);
    pcVar3 = *(char **)(puVar7 + -0x7fa4);
    iVar14 = 0;
    pbVar4 = *(byte **)(puVar7 + -0x7fa0);
    piVar5 = *(int **)(puVar7 + -0x8000);
    iVar13 = 0;
    uVar9 = 0;
    do {
      uVar12 = *puVar15;
      uVar16 = uVar9 + 0x20;
      if ((uVar12 != 0) && ((int)uVar9 < *piVar2)) {
        uVar6 = *(uint *)(puVar7 + -0x7fa8);
        iVar17 = iVar13;
        do {
          if ((1 << (uVar9 + (((int)uVar9 >> 5) + (uint)((int)uVar9 < 0 && (uVar9 & 0x1f) != 0)) *
                             -0x20 & 0x3f) & uVar12) != 0) {
            iVar10 = iVar17 + *piVar5;
            if (((*(int *)(iVar10 + 0x10) == 0) || (*(int *)(iVar10 + 0x28) != param_1)) ||
               (*(int *)(iVar10 + 0x2c) == 0)) {
              989snd::snd_Printf((char)*(undefined4 *)(puVar7 + -0x7f14));
              iVar10 = *(int *)(puVar7 + -0x7fac);
              uVar11 = (ulonglong)uVar6;
              989snd::snd_Printf((char)iVar10);
              puVar8 = PTR_PTR_0071b024;
              if (*pcVar3 != '\0') {
                return;
              }
              bVar1 = *pbVar4;
              if (bVar1 != 0) {
                trapWord(0x1f,(ulonglong)bVar1,(ulonglong)bVar1);
                if (((iVar10 < 0) || (**(int **)(PTR_PTR_0071b024 + -0x7ff0) <= iVar10)) ||
                   (dVar18 < 0.0)) {
                  989snd::snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b024 + -0x7fac));
                  if (**(char **)(puVar8 + -0x7fa4) != '\0') {
                    return;
                  }
                  trapWord(0x18,(ulonglong)**(byte **)(puVar8 + -0x7fa0),0);
                  989snd::snd_SynthLock();
                  iVar14 = iVar10 * 0x68 + **(int **)(puVar8 + -0x8000);
                  iVar13 = *(int *)(iVar14 + 0x28);
                }
                else {
                  989snd::snd_SynthLock();
                  iVar14 = iVar10 * 0x68 + **(int **)(puVar8 + -0x8000);
                  iVar13 = *(int *)(iVar14 + 0x28);
                }
                if (iVar13 != (int)param_4) {
                  989snd::snd_Printf((char)*(undefined4 *)(puVar8 + -0x7f10));
                  989snd::snd_SynthUnlock();
                  return;
                }
                *(float *)(iVar14 + 0x48) = (float)dVar18;
                FUN_006299b8(*(undefined4 *)(iVar14 + 0x60),uVar11 & 0xffffffff,0x403);
                FUN_006203e4(iVar10);
                989snd::snd_SynthUnlock();
                return;
              }
              if (*(int *)(iVar17 + *piVar5 + 0x28) != param_1) goto joined_r0x00620840;
            }
            dVar18 = (double)FUN_006203e4(uVar9);
            iVar10 = iVar17 + *piVar5;
            if (*(undefined4 **)(iVar10 + 0x2c) != (undefined4 *)0x0) {
              dVar18 = (double)(*(code *)**(undefined4 **)(iVar10 + 0x2c))
                                         (iVar10,*(undefined4 *)(iVar10 + 0x28),5);
            }
          }
joined_r0x00620840:
          if ((int)uVar16 <= (int)(uVar9 + 1)) break;
          uVar9 = uVar9 + 1;
          iVar17 = iVar17 + 0x68;
          if (*piVar2 <= (int)uVar9) break;
          uVar12 = *puVar15;
        } while( true );
      }
      iVar14 = iVar14 + 1;
      puVar15 = puVar15 + 1;
      uVar12 = *piVar2 + 0x1f;
      iVar13 = iVar13 + 0xd00;
      uVar9 = uVar16;
    } while (iVar14 < (int)(((int)uVar12 >> 5) + (uint)((int)uVar12 < 0 && (uVar12 & 0x1f) != 0)));
  }
  989snd::snd_SynthUnlock();
  return;
}



//==== 006209e4  ns=Global  size=0x170
// sig: undefined FUN_006209e4(void)
// callers(1): 00614aa0 FUN_00614aa0
// callees(5): 0061948c 989snd::snd_Printf; 006203e4 FUN_006203e4; 006271f4 989snd::snd_SynthUnlock; 006272e8 989snd::snd_SynthLock; 006299b8 FUN_006299b8
// strings: 0066c4a0: 'common/valloc.cpp' | 0066c570: '%s(%d) : Invlaid voice owner.\n' | 0066c480: '%s(%d) : Invalid parameter.\n'

void FUN_006209e4(double param_1,int param_2,ulonglong param_3,undefined8 param_4,int param_5)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  
  puVar2 = PTR_PTR_0071b024;
  if (((param_2 < 0) || (**(int **)(PTR_PTR_0071b024 + -0x7ff0) <= param_2)) || (param_1 < 0.0)) {
    989snd::snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b024 + -0x7fac));
    if (**(char **)(puVar2 + -0x7fa4) != '\0') {
      return;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar2 + -0x7fa0),0);
    989snd::snd_SynthLock();
    iVar3 = param_2 * 0x68 + **(int **)(puVar2 + -0x8000);
    iVar1 = *(int *)(iVar3 + 0x28);
  }
  else {
    989snd::snd_SynthLock(param_2,param_3,0x3fb);
    iVar3 = param_2 * 0x68 + **(int **)(puVar2 + -0x8000);
    iVar1 = *(int *)(iVar3 + 0x28);
  }
  if (iVar1 != param_5) {
    989snd::snd_Printf((char)*(undefined4 *)(puVar2 + -0x7f10));
    989snd::snd_SynthUnlock();
    return;
  }
  *(float *)(iVar3 + 0x48) = (float)param_1;
  FUN_006299b8(*(undefined4 *)(iVar3 + 0x60),param_3 & 0xffffffff,0x403);
  FUN_006203e4(param_2);
  989snd::snd_SynthUnlock();
  return;
}



//==== 00620b54  ns=Global  size=0x314
// sig: undefined FUN_00620b54(void)
// callers(5): 00620e68 FUN_00620e68; 0062112c FUN_0062112c; 00621460 FUN_00621460; 006217c4 FUN_006217c4; 006218e0 FUN_006218e0
// callees(3): 0061948c 989snd::snd_Printf; 0061dc38 FUN_0061dc38; 0062a824 FUN_0062a824
// strings: 0066c480: '%s(%d) : Invalid parameter.\n' | 0066c4a0: 'common/valloc.cpp' | 0066c660: '%s(%d) : Invalid data type.\n' | 0066c638: '%s(%d) : Invalid playing group count.\n'

void FUN_00620b54(int param_1,int param_2)

{
  byte bVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined *puVar8;
  int *piVar9;
  int iVar10;
  
  puVar8 = PTR_PTR_0071b024;
  if ((param_1 < 0) || (**(int **)(PTR_PTR_0071b024 + -0x7ff0) <= param_1)) {
    989snd::snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b024 + -0x7fac));
    if (**(char **)(puVar8 + -0x7fa4) != '\0') {
      return;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar8 + -0x7fa0),0);
    piVar2 = *(int **)(puVar8 + -0x7edc);
    piVar3 = (int *)*piVar2;
    piVar9 = (int *)(param_1 * 0x68 + **(int **)(puVar8 + -0x8000));
    if (piVar9 != piVar3) goto LAB_00620bbc;
LAB_00620cb8:
    *piVar2 = *piVar9;
    bVar1 = *(byte *)((int)piVar9 + 10);
  }
  else {
    piVar2 = *(int **)(PTR_PTR_0071b024 + -0x7edc);
    piVar3 = (int *)*piVar2;
    piVar9 = (int *)(param_1 * 0x68 + **(int **)(PTR_PTR_0071b024 + -0x8000));
    if (piVar9 == piVar3) goto LAB_00620cb8;
LAB_00620bbc:
    if (piVar3 != (int *)0x0) {
      piVar2 = (int *)*piVar3;
      while (piVar7 = piVar2, piVar9 != piVar7) {
        if (piVar7 == (int *)0x0) {
          bVar1 = *(byte *)((int)piVar9 + 10);
          goto joined_r0x00620e58;
        }
        piVar3 = piVar7;
        piVar2 = (int *)*piVar7;
      }
      *piVar3 = *piVar9;
    }
    bVar1 = *(byte *)((int)piVar9 + 10);
  }
joined_r0x00620e58:
  if (0x1f < bVar1) goto LAB_00620c08;
  if (**(int **)(puVar8 + -0x7ff8) == 0) {
    iVar10 = *(int *)(puVar8 + -0x7fec);
LAB_00620db8:
    iVar6 = *(char *)((int)piVar9 + 10) * 4;
    iVar5 = *(int *)(iVar10 + iVar6);
    if (iVar5 == 0) goto LAB_00620c08;
    iVar4 = piVar9[4];
  }
  else {
    iVar10 = *(int *)(puVar8 + -0x7fec);
    iVar6 = (char)bVar1 * 4;
    iVar5 = *(int *)(iVar10 + iVar6);
    if (iVar5 == 0) {
      if (piVar9[4] != 1) goto LAB_00620c08;
      989snd::snd_Printf((char)*(undefined4 *)(puVar8 + -0x7ed0));
      989snd::snd_Printf((char)*(undefined4 *)(puVar8 + -0x7fac));
      if (**(char **)(puVar8 + -0x7fa4) != '\0') {
        return;
      }
      trapWord(0x18,(ulonglong)**(byte **)(puVar8 + -0x7fa0),0);
      goto LAB_00620db8;
    }
    iVar4 = piVar9[4];
  }
  if (iVar4 == 1) {
    *(int *)(iVar10 + iVar6) = iVar5 + -1;
  }
LAB_00620c08:
  if (4 < *(byte *)((int)piVar9 + 0xb)) {
    989snd::snd_Printf((char)*(undefined4 *)(puVar8 + -0x7ecc));
    989snd::snd_Printf((char)*(undefined4 *)(puVar8 + -0x7fac));
    if (**(char **)(puVar8 + -0x7fa4) != '\0') {
      return;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar8 + -0x7fa0),0);
  }
  iVar10 = *(char *)((int)piVar9 + 0xb) * 4;
  *(int *)(*(int *)(puVar8 + -0x7fe0) + iVar10) = *(int *)(*(int *)(puVar8 + -0x7fe0) + iVar10) + 1;
  if (param_2 == 0) {
    FUN_0062a824(piVar9[0x18]);
    FUN_0061dc38(param_1);
    return;
  }
  FUN_0061dc38(param_1);
  return;
}



//==== 00620e68  ns=Global  size=0x2c4
// sig: undefined FUN_00620e68(void)
// callers(1): 0061c994 FUN_0061c994
// callees(2): 0061948c 989snd::snd_Printf; 00620b54 FUN_00620b54
// strings: 0066c680: '%s(%d) : Invalid keyed states.\n' | 0066c4a0: 'common/valloc.cpp' | 0066c480: '%s(%d) : Invalid parameter.\n'

/* WARNING: Heritage AFTER dead removal. Example location: r0x0071b024 : 0x00621138 */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_00620e68(int param_1)

{
  byte bVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  ulonglong uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  uint *puVar20;
  uint *puVar21;
  uint *puVar22;
  int iVar23;
  longlong lVar24;
  uint uVar25;
  int iVar26;
  
  puVar7 = PTR_PTR_0071b024;
  piVar2 = *(int **)(PTR_PTR_0071b024 + -0x7ff0);
  if (0 < *piVar2) {
    iVar19 = 0;
    puVar21 = *(uint **)(PTR_PTR_0071b024 + -0x7f58);
    iVar23 = 0;
    puVar20 = *(uint **)(PTR_PTR_0071b024 + -0x7f5c);
    iVar12 = 0;
    piVar3 = *(int **)(PTR_PTR_0071b024 + -0x8000);
    uVar13 = 0;
    do {
      if ((*puVar21 & *puVar20) != 0) {
        989snd::snd_Printf((char)*(undefined4 *)(puVar7 + -0x7ec8));
        iVar26 = *(int *)(puVar7 + -0x7fac);
        989snd::snd_Printf((char)iVar26);
        puVar8 = PTR_PTR_0071b024;
        if (**(char **)(puVar7 + -0x7fa4) != '\0') {
          return;
        }
        bVar1 = **(byte **)(puVar7 + -0x7fa0);
        if (bVar1 != 0) {
          trapWord(0x1f,(ulonglong)bVar1,(ulonglong)bVar1);
          989snd::snd_SynthLock();
          piVar2 = *(int **)(puVar8 + -0x7ff0);
          if (0 < *piVar2) {
            puVar21 = *(uint **)(puVar8 + -0x7f68);
            iVar19 = 0;
            puVar20 = *(uint **)(puVar8 + -0x7f64);
            iVar23 = 0;
            iVar12 = 0;
            uVar13 = 0;
            do {
              uVar16 = uVar13 + 0x20;
              if ((*(int *)(iVar26 + iVar23 + 0x14) != 0) && ((int)uVar13 < *piVar2)) {
                iVar18 = *(int *)(puVar8 + -0x7f5c);
                iVar14 = *(int *)(puVar8 + -0x7f58);
                piVar3 = *(int **)(puVar8 + -0x8000);
                iVar10 = iVar12;
                do {
                  uVar15 = (longlong)((int)uVar13 >> 5) +
                           (ulonglong)((int)uVar13 < 0 && (uVar13 & 0x1f) != 0);
                  uVar17 = 1 << (uVar13 - (int)((uVar15 & 0xffffffff) << 5) & 0x3f);
                  if ((uVar17 & *(uint *)(iVar26 + iVar23 + 0x14)) != 0) {
                    iVar6 = iVar10 + *piVar3;
                    if (((*(int *)(iVar6 + 0x10) == 0) || (*(int *)(iVar6 + 0x28) != iVar26)) ||
                       (*(int *)(iVar6 + 0x2c) == 0)) {
                      989snd::snd_Printf((char)*(undefined4 *)(puVar8 + -0x7f14));
                      uVar11 = (ulonglong)*(uint *)(puVar8 + -0x7fac);
                      989snd::snd_Printf((char)*(uint *)(puVar8 + -0x7fac));
                      puVar7 = PTR_PTR_0071b024;
                      if (**(char **)(puVar8 + -0x7fa4) != '\0') {
                        return;
                      }
                      bVar1 = **(byte **)(puVar8 + -0x7fa0);
                      if (bVar1 != 0) {
                        trapWord(0x1f,(ulonglong)bVar1,(ulonglong)bVar1);
                        iVar12 = (int)uVar11;
                        if (iVar12 == 0) goto LAB_00621790;
                        goto LAB_006214c4;
                      }
                      if (*(int *)(iVar10 + *piVar3 + 0x28) != iVar26) goto joined_r0x0062122c;
                    }
                    if ((uVar17 & *puVar20) == 0) {
                      if (((uVar17 & *(uint *)(iVar23 + iVar18)) != 0) ||
                         ((uVar17 & *(uint *)(iVar23 + iVar14)) != 0)) {
                        *puVar21 = uVar17 | *puVar21;
                      }
                    }
                    else {
                      iVar9 = iVar10 + *piVar3;
                      iVar6 = iVar26 + (int)((uVar15 & 0xffffffff) << 2) + 0x10;
                      puVar4 = *(undefined4 **)(iVar9 + 0x2c);
                      *puVar20 = *puVar20 & ~uVar17;
                      *(uint *)(iVar6 + 4) = ~uVar17 & *(uint *)(iVar6 + 4);
                      if (puVar4 != (undefined4 *)0x0) {
                        (*(code *)*puVar4)(iVar9,*(undefined4 *)(iVar9 + 0x28),2);
                      }
                      FUN_00620b54(uVar13,0);
                    }
                  }
joined_r0x0062122c:
                  if ((int)uVar16 <= (int)(uVar13 + 1)) break;
                  uVar13 = uVar13 + 1;
                  iVar10 = iVar10 + 0x68;
                } while ((int)uVar13 < *piVar2);
              }
              iVar19 = iVar19 + 1;
              iVar23 = iVar23 + 4;
              uVar17 = *piVar2 + 0x1f;
              iVar12 = iVar12 + 0xd00;
              puVar21 = puVar21 + 1;
              puVar20 = puVar20 + 1;
              uVar13 = uVar16;
            } while (iVar19 < (int)(((int)uVar17 >> 5) +
                                   (uint)((int)uVar17 < 0 && (uVar17 & 0x1f) != 0)));
          }
          989snd::snd_SynthUnlock();
          return;
        }
      }
      uVar16 = *puVar20;
      uVar17 = *puVar21;
      uVar25 = uVar13 + 0x20;
      if ((((uVar17 | uVar16) & *(uint *)(iVar23 + param_1)) != 0) &&
         (iVar26 = iVar12, (int)uVar13 < *piVar2)) {
        do {
          uVar15 = (longlong)((int)uVar13 >> 5) +
                   (ulonglong)((int)uVar13 < 0 && (uVar13 & 0x1f) != 0);
          uVar5 = 1 << (uVar13 - (int)((uVar15 & 0xffffffff) << 5) & 0x3f);
          if (((uVar5 & *(uint *)(iVar23 + param_1) & (uVar17 | uVar16)) != 0) &&
             (iVar18 = iVar26 + *piVar3, *(int *)(iVar18 + 0x10) != 0)) {
            if ((*(int *)(iVar18 + 0x28) != 0) && ((*(uint *)(iVar18 + 0x18) & 3) != 3)) {
              iVar18 = *(int *)(iVar18 + 0x28) + (int)((uVar15 & 0xffffffff) << 2) + 0x10;
              *(uint *)(iVar18 + 4) = *(uint *)(iVar18 + 4) & ~uVar5;
            }
            iVar18 = *piVar3;
            iVar14 = iVar26 + iVar18;
            if (*(undefined4 **)(iVar14 + 0x2c) != (undefined4 *)0x0) {
              (*(code *)**(undefined4 **)(iVar14 + 0x2c))(iVar14,*(undefined4 *)(iVar14 + 0x28),2);
              iVar18 = *piVar3;
            }
            if ((*(uint *)(iVar26 + iVar18 + 0x18) & 3) != 3) {
              FUN_00620b54(uVar13,0);
            }
          }
          uVar13 = uVar13 + 1;
        } while (((int)uVar13 < (int)uVar25) && (iVar26 = iVar26 + 0x68, (int)uVar13 < *piVar2));
      }
      iVar19 = iVar19 + 1;
      puVar21 = puVar21 + 1;
      uVar16 = *piVar2 + 0x1f;
      iVar23 = iVar23 + 4;
      puVar20 = puVar20 + 1;
      iVar12 = iVar12 + 0xd00;
      uVar13 = uVar25;
    } while (iVar19 < (int)(((int)uVar16 >> 5) + (uint)((int)uVar16 < 0 && (uVar16 & 0x1f) != 0)));
  }
  return;
LAB_006214c4:
  989snd::snd_SynthLock();
  piVar2 = *(int **)(puVar7 + -0x7ff0);
  if (*piVar2 < 1) {
LAB_006216c4:
    989snd::snd_SynthUnlock();
    return;
  }
  lVar24 = uVar11 + 0x14;
  puVar21 = *(uint **)(puVar7 + -0x7f5c);
  iVar23 = 0;
  puVar20 = *(uint **)(puVar7 + -0x7f60);
  puVar22 = *(uint **)(puVar7 + -0x7f64);
  iVar19 = 0;
  uVar13 = 0;
  while( true ) {
    uVar16 = *(uint *)lVar24;
    uVar17 = uVar13 + 0x20;
    if ((uVar16 != 0) && ((int)uVar13 < *piVar2)) break;
LAB_00621690:
    iVar23 = iVar23 + 1;
    lVar24 = lVar24 + 4;
    uVar16 = *piVar2 + 0x1f;
    iVar19 = iVar19 + 0xd00;
    puVar21 = puVar21 + 1;
    puVar20 = puVar20 + 1;
    puVar22 = puVar22 + 1;
    uVar13 = uVar17;
    if ((int)(((int)uVar16 >> 5) + (uint)((int)uVar16 < 0 && (uVar16 & 0x1f) != 0)) <= iVar23)
    goto LAB_006216c4;
  }
  piVar3 = *(int **)(puVar7 + -0x8000);
  iVar26 = iVar19;
LAB_00621554:
  iVar18 = ((int)uVar13 >> 5) + (uint)((int)uVar13 < 0 && (uVar13 & 0x1f) != 0);
  uVar25 = 1 << (uVar13 + iVar18 * -0x20 & 0x3f);
  if ((uVar25 & uVar16) == 0) goto joined_r0x0062153c;
  iVar14 = iVar26 + *piVar3;
  if (((*(int *)(iVar14 + 0x10) != 0) && (*(int *)(iVar14 + 0x28) == iVar12)) &&
     (*(int *)(iVar14 + 0x2c) != 0)) {
LAB_00621600:
    if ((uVar25 & *puVar22) == 0) {
      if ((uVar25 & *puVar21) != 0) {
        puVar4 = *(undefined4 **)(iVar14 + 0x2c);
        *puVar20 = uVar25 | *puVar20;
        if (puVar4 != (undefined4 *)0x0) {
          (*(code *)*puVar4)(iVar14,*(undefined4 *)(iVar14 + 0x28),3);
        }
      }
    }
    else {
      iVar10 = iVar26 + *piVar3;
      iVar18 = *(int *)(iVar14 + 0x28) + iVar18 * 4 + 0x10;
      puVar4 = *(undefined4 **)(iVar10 + 0x2c);
      *puVar22 = *puVar22 & ~uVar25;
      *(uint *)(iVar18 + 4) = ~uVar25 & *(uint *)(iVar18 + 4);
      if (puVar4 != (undefined4 *)0x0) {
        (*(code *)*puVar4)(iVar10,*(undefined4 *)(iVar10 + 0x28),2);
      }
      FUN_00620b54(uVar13,0);
    }
joined_r0x0062153c:
    if ((int)uVar17 <= (int)(uVar13 + 1)) goto LAB_00621690;
    uVar13 = uVar13 + 1;
    iVar26 = iVar26 + 0x68;
    if (*piVar2 <= (int)uVar13) goto LAB_00621690;
    uVar16 = *(uint *)lVar24;
    goto LAB_00621554;
  }
  989snd::snd_Printf((char)*(undefined4 *)(puVar7 + -0x7f14));
  989snd::snd_Printf((char)*(undefined4 *)(puVar7 + -0x7fac));
  if (**(char **)(puVar7 + -0x7fa4) != '\0') {
    return;
  }
  bVar1 = **(byte **)(puVar7 + -0x7fa0);
  if (bVar1 == 0) {
    iVar14 = iVar26 + *piVar3;
    if (*(int *)(iVar14 + 0x28) != iVar12) goto joined_r0x0062153c;
    goto LAB_00621600;
  }
  trapWord(0x1f,(ulonglong)bVar1,(ulonglong)bVar1);
LAB_00621790:
  989snd::snd_Printf((char)*(undefined4 *)(puVar7 + -0x7fac));
  if (**(char **)(puVar7 + -0x7fa4) != '\0') {
    return;
  }
  trapWord(0x18,(ulonglong)**(byte **)(puVar7 + -0x7fa0),0);
  goto LAB_006214c4;
}



//==== 0062112c  ns=Global  size=0x334
// sig: undefined FUN_0062112c(void)
// callers(3): 00612130 FUN_00612130; 00612858 FUN_00612858; 0061b86c FUN_0061b86c
// callees(4): 0061948c 989snd::snd_Printf; 00620b54 FUN_00620b54; 006271f4 989snd::snd_SynthUnlock; 006272e8 989snd::snd_SynthLock
// strings: 0066c550: '%s(%d) : Bad voice channel.\n' | 0066c4a0: 'common/valloc.cpp' | 0066c480: '%s(%d) : Invalid parameter.\n'

/* WARNING: Heritage AFTER dead removal. Example location: r0x0071b024 : 0x006214b8 */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_0062112c(int param_1)

{
  byte bVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  uint *puVar17;
  uint *puVar18;
  uint *puVar19;
  int iVar20;
  longlong lVar21;
  ulonglong uVar22;
  int iVar23;
  int iVar24;
  
  puVar6 = PTR_PTR_0071b024;
  989snd::snd_SynthLock();
  piVar2 = *(int **)(puVar6 + -0x7ff0);
  if (0 < *piVar2) {
    puVar18 = *(uint **)(puVar6 + -0x7f68);
    iVar16 = 0;
    puVar17 = *(uint **)(puVar6 + -0x7f64);
    iVar20 = 0;
    iVar11 = 0;
    uVar12 = 0;
    do {
      uVar15 = uVar12 + 0x20;
      if ((*(int *)(param_1 + iVar20 + 0x14) != 0) && ((int)uVar12 < *piVar2)) {
        iVar24 = *(int *)(puVar6 + -0x7f5c);
        iVar23 = *(int *)(puVar6 + -0x7f58);
        piVar3 = *(int **)(puVar6 + -0x8000);
        iVar13 = iVar11;
        do {
          uVar22 = (longlong)((int)uVar12 >> 5) +
                   (ulonglong)((int)uVar12 < 0 && (uVar12 & 0x1f) != 0);
          uVar14 = 1 << (uVar12 - (int)((uVar22 & 0xffffffff) << 5) & 0x3f);
          if ((uVar14 & *(uint *)(param_1 + iVar20 + 0x14)) != 0) {
            iVar9 = iVar13 + *piVar3;
            if (((*(int *)(iVar9 + 0x10) == 0) || (*(int *)(iVar9 + 0x28) != param_1)) ||
               (*(int *)(iVar9 + 0x2c) == 0)) {
              989snd::snd_Printf((char)*(undefined4 *)(puVar6 + -0x7f14));
              uVar10 = (ulonglong)*(uint *)(puVar6 + -0x7fac);
              989snd::snd_Printf((char)*(uint *)(puVar6 + -0x7fac));
              puVar7 = PTR_PTR_0071b024;
              if (**(char **)(puVar6 + -0x7fa4) != '\0') {
                return;
              }
              bVar1 = **(byte **)(puVar6 + -0x7fa0);
              if (bVar1 != 0) {
                trapWord(0x1f,(ulonglong)bVar1,(ulonglong)bVar1);
                iVar11 = (int)uVar10;
                if (iVar11 == 0) goto LAB_00621790;
                goto LAB_006214c4;
              }
              if (*(int *)(iVar13 + *piVar3 + 0x28) != param_1) goto joined_r0x0062122c;
            }
            if ((uVar14 & *puVar17) == 0) {
              if (((uVar14 & *(uint *)(iVar20 + iVar24)) != 0) ||
                 ((uVar14 & *(uint *)(iVar20 + iVar23)) != 0)) {
                *puVar18 = uVar14 | *puVar18;
              }
            }
            else {
              iVar8 = iVar13 + *piVar3;
              iVar9 = param_1 + (int)((uVar22 & 0xffffffff) << 2) + 0x10;
              puVar4 = *(undefined4 **)(iVar8 + 0x2c);
              *puVar17 = *puVar17 & ~uVar14;
              *(uint *)(iVar9 + 4) = ~uVar14 & *(uint *)(iVar9 + 4);
              if (puVar4 != (undefined4 *)0x0) {
                (*(code *)*puVar4)(iVar8,*(undefined4 *)(iVar8 + 0x28),2);
              }
              FUN_00620b54(uVar12,0);
            }
          }
joined_r0x0062122c:
          if ((int)uVar15 <= (int)(uVar12 + 1)) break;
          uVar12 = uVar12 + 1;
          iVar13 = iVar13 + 0x68;
        } while ((int)uVar12 < *piVar2);
      }
      iVar16 = iVar16 + 1;
      iVar20 = iVar20 + 4;
      uVar14 = *piVar2 + 0x1f;
      iVar11 = iVar11 + 0xd00;
      puVar18 = puVar18 + 1;
      puVar17 = puVar17 + 1;
      uVar12 = uVar15;
    } while (iVar16 < (int)(((int)uVar14 >> 5) + (uint)((int)uVar14 < 0 && (uVar14 & 0x1f) != 0)));
  }
  989snd::snd_SynthUnlock();
  return;
LAB_006214c4:
  989snd::snd_SynthLock();
  piVar2 = *(int **)(puVar7 + -0x7ff0);
  if (*piVar2 < 1) {
LAB_006216c4:
    989snd::snd_SynthUnlock();
    return;
  }
  lVar21 = uVar10 + 0x14;
  puVar18 = *(uint **)(puVar7 + -0x7f5c);
  iVar20 = 0;
  puVar17 = *(uint **)(puVar7 + -0x7f60);
  puVar19 = *(uint **)(puVar7 + -0x7f64);
  iVar16 = 0;
  uVar12 = 0;
  while( true ) {
    uVar15 = *(uint *)lVar21;
    uVar14 = uVar12 + 0x20;
    if ((uVar15 != 0) && ((int)uVar12 < *piVar2)) break;
LAB_00621690:
    iVar20 = iVar20 + 1;
    lVar21 = lVar21 + 4;
    uVar15 = *piVar2 + 0x1f;
    iVar16 = iVar16 + 0xd00;
    puVar18 = puVar18 + 1;
    puVar17 = puVar17 + 1;
    puVar19 = puVar19 + 1;
    uVar12 = uVar14;
    if ((int)(((int)uVar15 >> 5) + (uint)((int)uVar15 < 0 && (uVar15 & 0x1f) != 0)) <= iVar20)
    goto LAB_006216c4;
  }
  piVar3 = *(int **)(puVar7 + -0x8000);
  iVar24 = iVar16;
LAB_00621554:
  iVar23 = ((int)uVar12 >> 5) + (uint)((int)uVar12 < 0 && (uVar12 & 0x1f) != 0);
  uVar5 = 1 << (uVar12 + iVar23 * -0x20 & 0x3f);
  if ((uVar5 & uVar15) == 0) goto joined_r0x0062153c;
  iVar13 = iVar24 + *piVar3;
  if (((*(int *)(iVar13 + 0x10) != 0) && (*(int *)(iVar13 + 0x28) == iVar11)) &&
     (*(int *)(iVar13 + 0x2c) != 0)) {
LAB_00621600:
    if ((uVar5 & *puVar19) == 0) {
      if ((uVar5 & *puVar18) != 0) {
        puVar4 = *(undefined4 **)(iVar13 + 0x2c);
        *puVar17 = uVar5 | *puVar17;
        if (puVar4 != (undefined4 *)0x0) {
          (*(code *)*puVar4)(iVar13,*(undefined4 *)(iVar13 + 0x28),3);
        }
      }
    }
    else {
      iVar9 = iVar24 + *piVar3;
      iVar23 = *(int *)(iVar13 + 0x28) + iVar23 * 4 + 0x10;
      puVar4 = *(undefined4 **)(iVar9 + 0x2c);
      *puVar19 = *puVar19 & ~uVar5;
      *(uint *)(iVar23 + 4) = ~uVar5 & *(uint *)(iVar23 + 4);
      if (puVar4 != (undefined4 *)0x0) {
        (*(code *)*puVar4)(iVar9,*(undefined4 *)(iVar9 + 0x28),2);
      }
      FUN_00620b54(uVar12,0);
    }
joined_r0x0062153c:
    if ((int)uVar14 <= (int)(uVar12 + 1)) goto LAB_00621690;
    uVar12 = uVar12 + 1;
    iVar24 = iVar24 + 0x68;
    if (*piVar2 <= (int)uVar12) goto LAB_00621690;
    uVar15 = *(uint *)lVar21;
    goto LAB_00621554;
  }
  989snd::snd_Printf((char)*(undefined4 *)(puVar7 + -0x7f14));
  989snd::snd_Printf((char)*(undefined4 *)(puVar7 + -0x7fac));
  if (**(char **)(puVar7 + -0x7fa4) != '\0') {
    return;
  }
  bVar1 = **(byte **)(puVar7 + -0x7fa0);
  if (bVar1 == 0) {
    iVar13 = iVar24 + *piVar3;
    if (*(int *)(iVar13 + 0x28) != iVar11) goto joined_r0x0062153c;
    goto LAB_00621600;
  }
  trapWord(0x1f,(ulonglong)bVar1,(ulonglong)bVar1);
LAB_00621790:
  989snd::snd_Printf((char)*(undefined4 *)(puVar7 + -0x7fac));
  if (**(char **)(puVar7 + -0x7fa4) != '\0') {
    return;
  }
  trapWord(0x18,(ulonglong)**(byte **)(puVar7 + -0x7fa0),0);
  goto LAB_006214c4;
}



//==== 00621460  ns=Global  size=0x364
// sig: undefined FUN_00621460(void)
// callers(3): 00604b84 FUN_00604b84; 006128ec FUN_006128ec; 0061b86c FUN_0061b86c
// callees(4): 0061948c 989snd::snd_Printf; 00620b54 FUN_00620b54; 006271f4 989snd::snd_SynthUnlock; 006272e8 989snd::snd_SynthLock
// strings: 0066c550: '%s(%d) : Bad voice channel.\n' | 0066c4a0: 'common/valloc.cpp' | 0066c480: '%s(%d) : Invalid parameter.\n'

void FUN_00621460(int param_1)

{
  byte bVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined *puVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint *puVar12;
  uint *puVar13;
  uint *puVar14;
  int iVar15;
  uint *puVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  
  puVar6 = PTR_PTR_0071b024;
  if (param_1 == 0) goto LAB_00621790;
  do {
    989snd::snd_SynthLock();
    piVar2 = *(int **)(puVar6 + -0x7ff0);
    if (*piVar2 < 1) {
LAB_006216c4:
      989snd::snd_SynthUnlock();
      return;
    }
    puVar16 = (uint *)(param_1 + 0x14);
    puVar12 = *(uint **)(puVar6 + -0x7f5c);
    iVar15 = 0;
    puVar13 = *(uint **)(puVar6 + -0x7f60);
    puVar14 = *(uint **)(puVar6 + -0x7f64);
    iVar11 = 0;
    uVar8 = 0;
    while( true ) {
      uVar10 = *puVar16;
      uVar17 = uVar8 + 0x20;
      if ((uVar10 != 0) && ((int)uVar8 < *piVar2)) break;
LAB_00621690:
      iVar15 = iVar15 + 1;
      puVar16 = puVar16 + 1;
      uVar10 = *piVar2 + 0x1f;
      iVar11 = iVar11 + 0xd00;
      puVar12 = puVar12 + 1;
      puVar13 = puVar13 + 1;
      puVar14 = puVar14 + 1;
      uVar8 = uVar17;
      if ((int)(((int)uVar10 >> 5) + (uint)((int)uVar10 < 0 && (uVar10 & 0x1f) != 0)) <= iVar15)
      goto LAB_006216c4;
    }
    piVar3 = *(int **)(puVar6 + -0x8000);
    iVar19 = iVar11;
LAB_00621554:
    iVar18 = ((int)uVar8 >> 5) + (uint)((int)uVar8 < 0 && (uVar8 & 0x1f) != 0);
    uVar5 = 1 << (uVar8 + iVar18 * -0x20 & 0x3f);
    if ((uVar5 & uVar10) == 0) goto joined_r0x0062153c;
    iVar9 = iVar19 + *piVar3;
    if (((*(int *)(iVar9 + 0x10) != 0) && (*(int *)(iVar9 + 0x28) == param_1)) &&
       (*(int *)(iVar9 + 0x2c) != 0)) {
LAB_00621600:
      if ((uVar5 & *puVar14) == 0) {
        if ((uVar5 & *puVar12) != 0) {
          puVar4 = *(undefined4 **)(iVar9 + 0x2c);
          *puVar13 = uVar5 | *puVar13;
          if (puVar4 != (undefined4 *)0x0) {
            (*(code *)*puVar4)(iVar9,*(undefined4 *)(iVar9 + 0x28),3);
          }
        }
      }
      else {
        iVar7 = iVar19 + *piVar3;
        iVar18 = *(int *)(iVar9 + 0x28) + iVar18 * 4 + 0x10;
        puVar4 = *(undefined4 **)(iVar7 + 0x2c);
        *puVar14 = *puVar14 & ~uVar5;
        *(uint *)(iVar18 + 4) = ~uVar5 & *(uint *)(iVar18 + 4);
        if (puVar4 != (undefined4 *)0x0) {
          (*(code *)*puVar4)(iVar7,*(undefined4 *)(iVar7 + 0x28),2);
        }
        FUN_00620b54(uVar8,0);
      }
joined_r0x0062153c:
      if ((int)uVar17 <= (int)(uVar8 + 1)) goto LAB_00621690;
      uVar8 = uVar8 + 1;
      iVar19 = iVar19 + 0x68;
      if (*piVar2 <= (int)uVar8) goto LAB_00621690;
      uVar10 = *puVar16;
      goto LAB_00621554;
    }
    989snd::snd_Printf((char)*(undefined4 *)(puVar6 + -0x7f14));
    989snd::snd_Printf((char)*(undefined4 *)(puVar6 + -0x7fac));
    if (**(char **)(puVar6 + -0x7fa4) != '\0') {
      return;
    }
    bVar1 = **(byte **)(puVar6 + -0x7fa0);
    if (bVar1 == 0) {
      iVar9 = iVar19 + *piVar3;
      if (*(int *)(iVar9 + 0x28) != param_1) goto joined_r0x0062153c;
      goto LAB_00621600;
    }
    trapWord(0x1f,(ulonglong)bVar1,(ulonglong)bVar1);
LAB_00621790:
    989snd::snd_Printf((char)*(undefined4 *)(puVar6 + -0x7fac));
    if (**(char **)(puVar6 + -0x7fa4) != '\0') {
      return;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar6 + -0x7fa0),0);
  } while( true );
}



//==== 006217c4  ns=Global  size=0x11c
// sig: undefined FUN_006217c4(void)
// callers(0): 
// callees(2): 0061948c 989snd::snd_Printf; 00620b54 FUN_00620b54
// strings: 0066c480: '%s(%d) : Invalid parameter.\n' | 0066c4a0: 'common/valloc.cpp'

void FUN_006217c4(ulonglong param_1,int param_2)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  
  puVar1 = PTR_PTR_0071b024;
  iVar2 = (int)param_1;
  if ((iVar2 < 0) || (**(int **)(PTR_PTR_0071b024 + -0x7ff0) <= iVar2)) {
    989snd::snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b024 + -0x7fac));
    if (**(char **)(puVar1 + -0x7fa4) != '\0') {
      return;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar1 + -0x7fa0),0);
  }
  iVar3 = iVar2 * 0x68 + **(int **)(puVar1 + -0x8000);
  if (*(int *)(iVar3 + 0x10) != 0) {
    iVar3 = *(int *)(iVar3 + 0x28);
    if (iVar3 == param_2) {
      if (iVar3 != 0) {
        iVar3 = iVar3 + (int)(((longlong)(iVar2 >> 5) +
                               (ulonglong)(iVar2 < 0 && (param_1 & 0x1f) != 0) & 0xffffffff) << 2) +
                        0x10;
        *(uint *)(iVar3 + 4) =
             *(uint *)(iVar3 + 4) &
             ((uint)(-0x100000002 << (param_1 & 0x1f)) |
             (uint)(0xfffffffefffffffe >> 0x40 - (param_1 & 0x1f)));
      }
      FUN_00620b54(iVar2,0);
      return;
    }
  }
  return;
}



//==== 006218e0  ns=Global  size=0x764
// sig: undefined FUN_006218e0(void)
// callers(1): 00614aa0 FUN_00614aa0
// callees(11): 00604918 FUN_00604918; 0061948c 989snd::snd_Printf; 0061d6d8 FUN_0061d6d8; 00620b54 FUN_00620b54; 00624730 FUN_00624730; 00624738 FUN_00624738; 006250a4 989snd::snd_SynthGetVoiceType; 006271f4 989snd::snd_SynthUnlock; 006272e8 989snd::snd_SynthLock; 0062a824 FUN_0062a824; 0062e140 989snd::snd_SynthSetVoiceData
// strings: 0066c480: '%s(%d) : Invalid parameter.\n' | 0066c4a0: 'common/valloc.cpp' | 0066c6a0: '%s(%d) : Stealing unowned voice channel.\n' | 0066c6d0: '%s(%d) : Mismanaged voice type count.\n'

uint FUN_006218e0(double param_1,double param_2,uint param_3,char param_4,undefined8 param_5,
                 undefined8 param_6,undefined4 param_7,undefined4 param_8)

{
  char cVar1;
  int *piVar2;
  uint *puVar3;
  undefined *puVar4;
  int iVar5;
  int iVar7;
  char cVar10;
  ulonglong uVar6;
  undefined4 uVar8;
  char cVar11;
  int iVar9;
  int iVar12;
  int iVar13;
  ulonglong uVar14;
  undefined1 uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  short sVar20;
  short sVar23;
  int iVar21;
  int iVar22;
  byte in_cr0;
  byte in_cr1;
  byte in_cr2;
  byte in_cr3;
  byte bVar24;
  byte unaff_cr4;
  byte in_cr5;
  byte in_cr6;
  byte in_cr7;
  uint uStack00000008;
  undefined4 in_stack_00000074;
  undefined4 in_stack_0000007c;
  uint in_stack_00000084;
  int in_stack_0000008c;
  undefined4 in_stack_00000094;
  undefined4 in_stack_0000009c;
  undefined1 in_stack_000000a7;
  undefined4 in_stack_000000ac;
  undefined4 in_stack_000000b4;
  undefined4 in_stack_000000bc;
  int in_stack_000000c4;
  undefined4 in_stack_000000cc;
  int local_ac;
  
  puVar4 = PTR_PTR_0071b024;
  uStack00000008 =
       (uint)(in_cr0 & 0xf) << 0x1c | (uint)(in_cr1 & 0xf) << 0x18 | (uint)(in_cr2 & 0xf) << 0x14 |
       (uint)(in_cr3 & 0xf) << 0x10 | (uint)(unaff_cr4 & 0xf) << 0xc | (uint)(in_cr5 & 0xf) << 8 |
       (uint)(in_cr6 & 0xf) << 4 | (uint)(in_cr7 & 0xf);
  if ((0x1e < param_3) || (param_4 < '\0')) {
    989snd::snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b024 + -0x7fac));
    if (**(char **)(puVar4 + -0x7fa4) != '\0') {
      return 0xffffffff;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar4 + -0x7fa0),0);
  }
  if ((int)param_3 < 0x20) {
    local_ac = param_3 * 4;
    bVar24 = (in_stack_000000c4 == 0) << 1;
    989snd::snd_SynthLock();
    sVar20 = *(short *)(*(int *)(puVar4 + -0x7f18) + local_ac);
    sVar23 = *(short *)(local_ac + *(int *)(puVar4 + -0x7f18) + 2);
    iVar7 = FUN_00604918();
    if ((bool)(bVar24 >> 1 & 1)) goto LAB_00621e9c;
LAB_006219c8:
    uVar15 = (undefined1)param_3;
    cVar10 = FUN_0061d6d8(param_2,param_1,in_stack_000000c4,param_4);
  }
  else {
    param_3 = 0x1f;
    bVar24 = (in_stack_000000c4 == 0) << 1;
    local_ac = 0x7c;
    989snd::snd_SynthLock();
    sVar20 = *(short *)(*(int *)(puVar4 + -0x7f18) + 0x7c);
    sVar23 = *(short *)(*(int *)(puVar4 + -0x7f18) + 0x7e);
    iVar7 = FUN_00604918();
    if (!(bool)(bVar24 >> 1 & 1)) goto LAB_006219c8;
LAB_00621e9c:
    uVar15 = (undefined1)param_3;
    cVar10 = param_4;
  }
  uVar6 = 989snd::snd_SynthGetVoiceType(in_stack_000000b4);
  if ((int)uVar6 == -1) goto LAB_00621bec;
  iVar13 = (int)((uVar6 & 0xffffffff) << 2);
  iVar9 = 0;
  if (*(int *)(*(int *)(puVar4 + -0x7fe0) + iVar13) != 0) {
    iVar9 = FUN_00624738(uVar6 & 0xffffffff);
  }
  uVar19 = (uint)sVar20;
  iVar18 = sVar23 + 1;
  if (sVar20 < iVar18) {
    piVar2 = *(int **)(puVar4 + -0x8000);
    puVar3 = *(uint **)(puVar4 + -0x7ec4);
    iVar21 = 0;
    iVar22 = uVar19 * 0x68;
    uVar17 = 0xffffffff;
    uVar16 = uVar19;
    do {
      while( true ) {
        iVar12 = *piVar2;
        iVar5 = iVar22 + iVar12;
        if (*(int *)(iVar5 + 0x10) != 0) break;
        if (iVar9 != 0) goto LAB_00621c14;
LAB_00621a54:
        iVar21 = iVar21 + 1;
        iVar22 = iVar22 + 0x68;
        uVar16 = uVar19 + iVar21;
        if (iVar18 <= (int)uVar16) goto LAB_00621b10;
      }
      if ((((*(int *)(iVar5 + 0x10) == 1) && ((uint)(iVar7 - *(int *)(iVar5 + 0x14)) < *puVar3)) ||
          ((bool)(bVar24 >> 1 & 1))) ||
         ((*(int *)(iVar5 + 0x28) == in_stack_000000c4 || ((*(uint *)(iVar5 + 0x18) & 1) != 0))))
      goto LAB_00621a54;
      if (iVar9 == 0) {
        if (((int)*(char *)(iVar5 + 0xb) != (int)uVar6) ||
           (cVar11 = FUN_00624730(*(undefined4 *)(iVar5 + 0x60)), cVar11 == '\0'))
        goto LAB_00621a54;
        iVar12 = **(int **)(puVar4 + -0x8000);
      }
      if ((int)uVar17 < 0) {
        if (*(char *)(iVar22 + iVar12 + 9) <= cVar10) goto LAB_00621afc;
        goto LAB_00621a54;
      }
      iVar5 = iVar12 + uVar17 * 0x68;
      cVar11 = *(char *)(iVar12 + iVar22 + 9);
      cVar1 = *(char *)(iVar5 + 9);
      if ((cVar1 <= cVar11) &&
         ((cVar11 != cVar1 || (*(uint *)(iVar5 + 0x14) <= *(uint *)(iVar12 + iVar22 + 0x14)))))
      goto LAB_00621a54;
LAB_00621afc:
      iVar21 = iVar21 + 1;
      iVar22 = iVar22 + 0x68;
      uVar17 = uVar16;
      uVar16 = uVar19 + iVar21;
    } while ((int)(uVar19 + iVar21) < iVar18);
LAB_00621b10:
    if (-1 < (int)uVar17) {
      iVar22 = uVar17 * 0x68;
      iVar7 = *(int *)(iVar22 + *piVar2 + 0x28);
      if ((iVar7 == 0) || (*(int *)(iVar22 + *piVar2 + 0x2c) == 0)) {
        989snd::snd_Printf((char)*(undefined4 *)(puVar4 + -0x7ec0));
        989snd::snd_Printf((char)*(undefined4 *)(puVar4 + -0x7fac));
        if (**(char **)(puVar4 + -0x7fa4) != '\0') {
          return 0xffffffff;
        }
        trapWord(0x18,(ulonglong)**(byte **)(puVar4 + -0x7fa0),0);
        iVar7 = *(int *)(iVar22 + *piVar2 + 0x28);
        if (iVar7 != 0) goto LAB_00621b40;
      }
      else {
LAB_00621b40:
        iVar7 = iVar7 + (((int)uVar17 >> 5) + (uint)((int)uVar17 < 0 && (uVar17 & 0x1f) != 0)) * 4 +
                        0x10;
        *(uint *)(iVar7 + 4) =
             *(uint *)(iVar7 + 4) &
             ((uint)(-0x100000002 << (uVar17 & 0x1f)) |
             (uint)(0xfffffffefffffffe >> 0x40 - (uVar17 & 0x1f)));
      }
      iVar7 = iVar22 + *piVar2;
      if (*(undefined4 **)(iVar7 + 0x2c) != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)(iVar7 + 0x2c))(iVar7,*(undefined4 *)(iVar7 + 0x28),1);
      }
      if (iVar9 == 0) {
        iVar9 = *(int *)(iVar22 + *piVar2 + 0x60);
        FUN_00620b54(uVar17,1);
      }
      else {
        FUN_00620b54(uVar17,0);
      }
      uVar16 = uVar17;
      if ((int)uVar17 < iVar18) {
LAB_00621c14:
        if (*(int *)(*(int *)(puVar4 + -0x7fe0) + iVar13) == 0) {
          989snd::snd_Printf((char)*(undefined4 *)(puVar4 + -0x7ebc));
          989snd::snd_Printf((char)*(undefined4 *)(puVar4 + -0x7fac));
          if (**(char **)(puVar4 + -0x7fa4) != '\0') {
            return 0xffffffff;
          }
          trapWord(0x18,(ulonglong)**(byte **)(puVar4 + -0x7fa0),0);
        }
        iVar7 = *piVar2;
        iVar22 = uVar16 * 0x68;
        *(int *)(*(int *)(puVar4 + -0x7fe0) + iVar13) =
             *(int *)(*(int *)(puVar4 + -0x7fe0) + iVar13) + -1;
        *(undefined4 *)(iVar22 + iVar7 + 0x10) = 2;
        uVar8 = FUN_00604918();
        iVar13 = *piVar2;
        iVar18 = *(int *)(puVar4 + -0x7f8c);
        *(undefined4 *)(iVar22 + iVar7 + 0x14) = uVar8;
        *(char *)(iVar22 + iVar13 + 8) = param_4;
        *(char *)(iVar22 + *piVar2 + 9) = cVar10;
        iVar7 = *piVar2;
        *(undefined1 *)(iVar22 + iVar7 + 10) = uVar15;
        iVar13 = *piVar2;
        *(float *)(iVar22 + iVar7 + 0xc) = (float)param_1;
        iVar13 = iVar22 + iVar13;
        *(char *)(iVar13 + 0xb) = (char)uVar6;
        iVar22 = iVar22 + *piVar2;
        uVar14 = ((ulonglong)*(uint *)(iVar18 + local_ac) & 1) << 5 | (ulonglong)in_stack_00000084;
        *(int *)(iVar13 + 0x28) = in_stack_000000c4;
        *(undefined4 *)(iVar13 + 0x2c) = in_stack_000000cc;
        *(int *)(iVar22 + 0x18) = (int)uVar14;
        uVar14 = ((ulonglong)(*(uint *)(iVar18 + local_ac) >> 2) & 1) << 6 | uVar14;
        *(int *)(iVar22 + 0x18) = (int)uVar14;
        if (in_stack_0000008c == -2) {
          in_stack_0000008c = *(int *)(*(int *)(puVar4 + -0x7f1c) + local_ac);
        }
        *(undefined4 *)(iVar22 + 0x38) = param_7;
        *(undefined4 *)(iVar22 + 0x40) = param_8;
        *(undefined4 *)(iVar22 + 0x20) = in_stack_00000074;
        uVar8 = *(undefined4 *)(puVar4 + -0x7fd0);
        *(undefined4 *)(iVar22 + 0x24) = in_stack_0000007c;
        *(float *)(iVar22 + 0x30) = (float)param_2;
        *(undefined4 *)(iVar22 + 0x58) = uVar8;
        *(int *)(iVar22 + 0x1c) = in_stack_0000008c;
        *(undefined4 *)(iVar22 + 0x50) = uVar8;
        *(undefined4 *)(iVar22 + 0x54) = uVar8;
        *(int *)(iVar22 + 0x60) = iVar9;
        if (*(int *)(iVar22 + 0x28) != 0) {
          iVar7 = ((int)uVar16 >> 5) + (uint)((int)uVar16 < 0 && (uVar16 & 0x1f) != 0);
          iVar13 = *(int *)(iVar22 + 0x28) + iVar7 * 4 + 0x10;
          *(uint *)(iVar13 + 4) = *(uint *)(iVar13 + 4) | 1 << (uVar16 + iVar7 * -0x20 & 0x3f);
          uVar14 = (ulonglong)*(uint *)(iVar22 + 0x18);
        }
        989snd::snd_SynthSetVoiceData
                  (iVar9,in_stack_00000094,in_stack_000000ac,uVar6 & 0xffffffff,in_stack_000000bc,
                   in_stack_0000009c,in_stack_000000a7,uVar14);
        989snd::snd_SynthUnlock();
        return uVar16;
      }
    }
  }
  if (iVar9 != 0) {
    FUN_0062a824(iVar9);
  }
LAB_00621bec:
  989snd::snd_SynthUnlock();
  return 0xffffffff;
}



//==== 00622044  ns=Global  size=0x50
// sig: undefined FUN_00622044(void)
// callers(0): 
// callees(2): 006272e8 989snd::snd_SynthLock; 0062730c FUN_0062730c

undefined4 FUN_00622044(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    uVar1 = FUN_0062730c();
    return uVar1;
  }
  989snd::snd_SynthLock();
  return 1;
}



//==== 00622094  ns=989snd  size=0x2e4
// sig: undefined snd_InitVoiceAllocator(void)
// callers(1): 0060c518 FUN_0060c518
// callees(5): 005d0140 libc::memset; 005dcbd8 FUN_005dcbd8; 00615218 FUN_00615218; 0061948c 989snd::snd_Printf; 0061dc38 FUN_0061dc38
// strings: 0066c6f8: 'snd_InitVoiceAllocator(): Unable to allocate %d bytes required for a polyphony of %d!\n'

undefined4 989snd::snd_InitVoiceAllocator(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  uint uVar3;
  uint *puVar4;
  undefined4 *puVar5;
  char *pcVar6;
  undefined *puVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  float *pfVar11;
  undefined2 *puVar12;
  int iVar13;
  undefined4 *puVar14;
  uint uVar15;
  undefined4 *puVar16;
  int iVar17;
  int iVar18;
  float *pfVar19;
  longlong lVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  
  puVar7 = PTR_PTR_0071b024;
  iVar18 = 0;
  lVar20 = 5;
  iVar8 = *(int *)(PTR_PTR_0071b024 + -0x7fe4);
  iVar9 = *(int *)(PTR_PTR_0071b024 + -0x7fe0);
  do {
    iVar13 = param_1 + iVar18;
    puVar5 = (undefined4 *)(iVar18 + iVar8);
    puVar14 = (undefined4 *)(iVar18 + iVar9);
    iVar18 = iVar18 + 4;
    uVar2 = *(undefined4 *)(iVar13 + 0x34);
    *puVar5 = uVar2;
    *puVar14 = uVar2;
    lVar20 = lVar20 + -1;
  } while (lVar20 != 0);
  uVar3 = *(uint *)(param_1 + 0x60);
  iVar8 = 0xd000;
  uVar15 = 0x200;
  if (uVar3 < 0x201) {
    iVar8 = uVar3 * 0x68;
    uVar15 = uVar3;
  }
  puVar4 = *(uint **)(puVar7 + -0x7ff0);
  puVar5 = (undefined4 *)**(undefined4 **)(puVar7 + -0x7eb8);
  *puVar4 = uVar15;
  iVar9 = (*(code *)*puVar5)(iVar8,0);
  piVar10 = *(int **)(puVar7 + -0x8000);
  *piVar10 = iVar9;
  if (iVar9 != 0) {
    iVar18 = 0;
    libc::memset(iVar9,0,iVar8);
    uVar3 = *puVar4;
    iVar8 = 0;
    if (0 < (int)uVar3) {
      do {
        FUN_0061dc38(iVar18);
        uVar3 = *puVar4;
        iVar9 = iVar8 + *piVar10;
        iVar8 = iVar8 + 0x68;
        *(int *)(iVar9 + 4) = iVar18;
        iVar18 = iVar18 + 1;
      } while (iVar18 < (int)uVar3);
    }
    piVar10 = *(int **)(puVar7 + -0x7f30);
    lVar20 = 0x20;
    iVar17 = 0;
    puVar12 = *(undefined2 **)(puVar7 + -0x7f18);
    iVar13 = 0;
    iVar8 = *(int *)(puVar7 + -0x7fec);
    iVar9 = *(int *)(puVar7 + -0x7fe8);
    iVar18 = *(int *)(puVar7 + -0x7fc4);
    **(undefined4 **)(puVar7 + -0x7edc) = 0;
    do {
      puVar14 = (undefined4 *)(iVar13 + iVar8);
      puVar5 = (undefined4 *)(iVar13 + iVar9);
      puVar16 = (undefined4 *)(iVar13 + iVar18);
      *piVar10 = iVar17;
      iVar13 = iVar13 + 4;
      piVar10[10] = 0;
      puVar12[1] = (short)uVar3 + -1;
      *puVar14 = 0;
      *puVar5 = 0;
      *puVar16 = 0;
      *puVar12 = 0;
      iVar17 = iVar17 + 1;
      lVar20 = lVar20 + -1;
      piVar10 = piVar10 + 0xb;
      puVar12 = puVar12 + 2;
    } while (lVar20 != 0);
    pfVar11 = (float *)FUN_00615218();
    if (pfVar11 != (float *)0x0) {
      pfVar19 = pfVar11 + 5;
      iVar8 = *(int *)(puVar7 + -0x7fb4);
      iVar18 = 0;
      iVar9 = *(int *)(puVar7 + -0x7f1c);
      dVar23 = (double)*(float *)(puVar7 + -0x7f24);
      dVar22 = (double)*(float *)(puVar7 + -0x7eb0);
      do {
        dVar21 = (double)FUN_005dcbd8(dVar23,(double)(float)((double)*pfVar19 / dVar22));
        pcVar6 = (char *)((int)pfVar19 + -3);
        piVar10 = (int *)(iVar18 + iVar9);
        bVar1 = iVar18 != 0x7c;
        *(float *)(iVar18 + iVar8) = (float)dVar21;
        pfVar19 = pfVar19 + 2;
        iVar18 = iVar18 + 4;
        *piVar10 = (int)*pcVar6;
      } while (bVar1);
      dVar22 = (double)FUN_005dcbd8(dVar23,(double)(float)((double)*pfVar11 / dVar22));
      **(float **)(puVar7 + -0x7fb0) = (float)dVar22;
    }
    **(undefined4 **)(puVar7 + -0x7ff8) = 1;
    return 1;
  }
  snd_Printf((char)*(undefined4 *)(puVar7 + -0x7eb4));
  return 0;
}



//==== 00622378  ns=Global  size=0x28
// sig: undefined FUN_00622378(void)
// callers(0): 
// callees(0): 

void FUN_00622378(undefined4 *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_0071b028;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = *(undefined4 *)(puVar1 + -0x8000);
  return;
}



//==== 006223a0  ns=Global  size=0x28
// sig: undefined FUN_006223a0(void)
// callers(2): 00606234 FUN_00606234; 0060cb08 FUN_0060cb08
// callees(0): 

void FUN_006223a0(undefined4 *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_0071b028;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = *(undefined4 *)(puVar1 + -0x8000);
  return;
}



//==== 006223c8  ns=Global  size=0x24
// sig: undefined FUN_006223c8(void)
// callers(2): 006223ec FUN_006223ec; 006226a4 FUN_006226a4
// callees(0): 

char FUN_006223c8(undefined8 param_1,char param_2)

{
  char cVar1;
  
  cVar1 = param_2 + -0x20;
  if (0x19 < (byte)(param_2 + 0x9fU)) {
    cVar1 = param_2;
  }
  return cVar1;
}



//==== 006223ec  ns=Global  size=0x2b8
// sig: undefined FUN_006223ec(void)
// callers(1): 00622db8 FUN_00622db8
// callees(1): 006223c8 FUN_006223c8

int FUN_006223ec(int param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  char cVar3;
  char cVar4;
  char *pcVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 4);
    if ((iVar2 != 0) && (0 < iVar2)) {
      iVar10 = 0;
      do {
        uVar11 = (ulonglong)(uint)(iVar2 - iVar10);
        pcVar7 = (char *)(iVar1 + iVar10);
        if ((iVar2 < iVar10 + 1) || (iVar2 == -0x80000000)) {
          uVar11 = 1;
        }
        while (*pcVar7 != '[') {
          iVar10 = iVar10 + 1;
          uVar11 = uVar11 - 1;
          pcVar7 = pcVar7 + 1;
          if (uVar11 == 0) {
            return -1;
          }
        }
        uVar11 = (ulonglong)(uint)(iVar2 - iVar10);
        pcVar7 = (char *)(iVar1 + iVar10 + 1);
        if ((iVar2 < iVar10 + 1) || (iVar2 == -0x80000000)) {
          uVar11 = 1;
        }
        while( true ) {
          iVar6 = iVar10 + 1;
          if ((' ' < *pcVar7) && (*pcVar7 != '\x7f')) break;
          uVar11 = uVar11 - 1;
          iVar10 = iVar6;
          pcVar7 = pcVar7 + 1;
          if (uVar11 == 0) {
            return -1;
          }
        }
        pcVar5 = (char *)(iVar1 + iVar6);
        uVar11 = (ulonglong)(uint)(iVar2 - iVar6);
        iVar9 = iVar6;
        pcVar7 = pcVar5;
        if ((iVar2 < iVar10 + 2) || (iVar10 = iVar6, iVar2 == -0x80000000)) {
          uVar11 = 1;
          iVar10 = iVar6;
        }
        while( true ) {
          if (*pcVar7 == ']') break;
          if (*pcVar7 != ' ') {
            iVar9 = iVar10;
          }
          uVar11 = uVar11 - 1;
          iVar10 = iVar10 + 1;
          pcVar7 = pcVar7 + 1;
          if (uVar11 == 0) {
            return -1;
          }
        }
        if ((iVar6 < iVar9) && (cVar3 = *param_2, cVar3 != '\0')) {
          iVar8 = 0;
          do {
            iVar6 = iVar6 + 1;
            cVar3 = FUN_006223c8(param_1,cVar3);
            cVar4 = FUN_006223c8(param_1,*pcVar5);
            if (cVar3 != cVar4) break;
            if (iVar9 < iVar6) {
              if (param_2[iVar8 + 1] == '\0') {
                pcVar7 = (char *)(iVar1 + iVar9);
                cVar3 = *pcVar7;
                while (cVar3 != '\n') {
                  pcVar7 = pcVar7 + 1;
                  iVar9 = iVar9 + 1;
                  cVar3 = *pcVar7;
                }
                return iVar9 + 1;
              }
              break;
            }
            iVar8 = iVar8 + 1;
            cVar3 = param_2[iVar8];
            pcVar5 = pcVar5 + 1;
          } while (cVar3 != '\0');
        }
      } while (iVar10 < iVar2);
    }
  }
  return -1;
}



//==== 006226a4  ns=Global  size=0x324
// sig: undefined FUN_006226a4(void)
// callers(1): 00622db8 FUN_00622db8
// callees(1): 006223c8 FUN_006223c8

int FUN_006226a4(int param_1,char *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 <= param_3) {
    return -1;
  }
  iVar2 = *(int *)(param_1 + 8);
  do {
    pcVar7 = (char *)(iVar2 + param_3);
    if (*pcVar7 == '[') {
      return -1;
    }
    uVar10 = (ulonglong)(uint)(iVar1 - param_3);
    iVar5 = param_3;
    if ((iVar1 < param_3 + 1) || (iVar1 == -0x80000000)) {
      uVar10 = 1;
    }
    while (0x5d < (byte)(*pcVar7 - 0x21U)) {
      uVar10 = uVar10 - 1;
      pcVar7 = pcVar7 + 1;
      iVar5 = iVar5 + 1;
      if (uVar10 == 0) {
        return -1;
      }
    }
    pcVar6 = (char *)(iVar2 + iVar5);
    uVar10 = (ulonglong)(uint)(iVar1 - iVar5);
    param_3 = iVar5;
    iVar8 = iVar5;
    pcVar7 = pcVar6;
    if ((iVar1 < iVar5 + 1) || (iVar1 == -0x80000000)) {
      uVar10 = 1;
    }
    while( true ) {
      if (*pcVar7 == '=') break;
      if (*pcVar7 != ' ') {
        iVar8 = param_3;
      }
      uVar10 = uVar10 - 1;
      param_3 = param_3 + 1;
      pcVar7 = pcVar7 + 1;
      if (uVar10 == 0) {
        return -1;
      }
    }
    if ((iVar5 < iVar8) && (cVar3 = *param_2, cVar3 != '\0')) {
      iVar9 = 0;
      do {
        iVar5 = iVar5 + 1;
        cVar3 = FUN_006223c8(param_1,cVar3);
        cVar4 = FUN_006223c8(param_1,*pcVar6);
        if (cVar3 != cVar4) break;
        if (iVar8 < iVar5) {
          if (param_2[iVar9 + 1] == '\0') {
            uVar10 = (ulonglong)(uint)(iVar1 - iVar8);
            pcVar7 = (char *)(iVar2 + iVar8);
            if ((iVar1 < iVar8 + 1) || (iVar1 == -0x80000000)) {
              uVar10 = 1;
            }
            do {
              if (*pcVar7 == '=') {
                uVar10 = (ulonglong)(uint)(iVar1 - param_3);
                pcVar7 = (char *)(iVar2 + param_3 + 1);
                if ((iVar1 < param_3 + 1) || (iVar1 == -0x80000000)) {
                  uVar10 = 1;
                }
                do {
                  param_3 = param_3 + 1;
                  if (*pcVar7 != ' ') {
                    return param_3;
                  }
                  uVar10 = uVar10 - 1;
                  pcVar7 = pcVar7 + 1;
                } while (uVar10 != 0);
                return -1;
              }
              uVar10 = uVar10 - 1;
              pcVar7 = pcVar7 + 1;
            } while (uVar10 != 0);
            return -1;
          }
          break;
        }
        iVar9 = iVar9 + 1;
        cVar3 = param_2[iVar9];
        pcVar6 = pcVar6 + 1;
      } while (cVar3 != '\0');
    }
    uVar10 = (ulonglong)(uint)(iVar1 - param_3);
    pcVar7 = (char *)(iVar2 + param_3 + 1);
    if ((iVar1 < param_3 + 1) || (iVar1 == -0x80000000)) {
      uVar10 = 1;
    }
    do {
      param_3 = param_3 + 1;
      uVar10 = uVar10 - 1;
      if (uVar10 == 0) {
        return -1;
      }
      cVar3 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar3 != '\n');
  } while( true );
}



//==== 006229c8  ns=Global  size=0x80
// sig: undefined FUN_006229c8(void)
// callers(3): 00623118 FUN_00623118; 00623164 FUN_00623164; 00623180 FUN_00623180
// callees(0): 

void FUN_006229c8(int param_1)

{
  if (*(int *)(param_1 + 8) != 0) {
    if (*(char *)(param_1 + 0xc) == '\0') {
      (**(code **)**(undefined4 **)(PTR_PTR_0071b028 + -0x7ffc))(*(int *)(param_1 + 8));
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}



//==== 00622a48  ns=Global  size=0xe4
// sig: undefined FUN_00622a48(void)
// callers(4): 00606060 FUN_00606060; 006060f0 989snd::snd_PresetFileGetPresetName; 00606408 989snd::snd_PremasterSubmixSetCustomPreset; 006065dc 989snd::snd_ReverbSetCustomPreset
// callees(0): 

int FUN_00622a48(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 != 0) {
    iVar3 = *(int *)(param_1 + 4);
    if ((iVar3 != 0) && (0 < iVar3)) {
      iVar6 = 0;
      iVar4 = 0;
      do {
        iVar5 = iVar3 - iVar6;
        pcVar7 = (char *)(iVar2 + iVar6);
        if ((iVar3 < iVar6 + 1) || (iVar3 == -0x80000000)) {
          iVar5 = 1;
        }
        while (*pcVar7 != '[') {
          iVar6 = iVar6 + 1;
          iVar5 = iVar5 + -1;
          pcVar7 = pcVar7 + 1;
          if (iVar5 == 0) {
            return iVar4;
          }
        }
        iVar5 = iVar3 - iVar6;
        pcVar7 = (char *)(iVar2 + iVar6 + 1);
        if ((iVar3 < iVar6 + 1) || (iVar3 == -0x80000000)) {
          iVar5 = 1;
        }
        do {
          iVar6 = iVar6 + 1;
          iVar5 = iVar5 + -1;
          if (iVar5 == 0) {
            return iVar4;
          }
          cVar1 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar1 != ']');
        iVar4 = iVar4 + 1;
      } while( true );
    }
  }
  return 0;
}



//==== 00622b2c  ns=Global  size=0x28c
// sig: undefined FUN_00622b2c(void)
// callers(3): 006060f0 989snd::snd_PresetFileGetPresetName; 00606408 989snd::snd_PremasterSubmixSetCustomPreset; 006065dc 989snd::snd_ReverbSetCustomPreset
// callees(0): 

void FUN_00622b2c(int param_1,int param_2,char *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  
  iVar6 = *(int *)(param_1 + 8);
  if (iVar6 == 0) {
    return;
  }
  iVar2 = *(int *)(param_1 + 4);
  if (iVar2 == 0) {
    return;
  }
  if (iVar2 < 1) {
    return;
  }
  iVar5 = 0;
  iVar10 = 0;
  do {
    iVar3 = iVar2 - iVar5;
    pcVar7 = (char *)(iVar6 + iVar5);
    if ((iVar2 < iVar5 + 1) || (iVar2 == -0x80000000)) {
      iVar3 = 1;
    }
    while (*pcVar7 != '[') {
      iVar5 = iVar5 + 1;
      iVar3 = iVar3 + -1;
      pcVar7 = pcVar7 + 1;
      if (iVar3 == 0) {
        return;
      }
    }
    if (param_2 == iVar10) {
      iVar9 = iVar2 - iVar5;
      pcVar8 = (char *)(iVar6 + iVar5);
      pcVar7 = pcVar8 + 1;
      iVar3 = iVar5;
      if ((iVar2 < iVar5 + 1) || (iVar2 == -0x80000000)) {
        iVar9 = 1;
      }
      while( true ) {
        iVar1 = iVar3 + 1;
        pcVar8 = pcVar8 + 1;
        if ((' ' < *pcVar7) && (*pcVar7 != '\x7f')) break;
        iVar9 = iVar9 + -1;
        iVar3 = iVar1;
        pcVar7 = pcVar7 + 1;
        if (iVar9 == 0) {
          return;
        }
      }
      iVar4 = iVar2 - iVar1;
      iVar5 = iVar1;
      iVar9 = iVar1;
      pcVar7 = pcVar8;
      if ((iVar2 < iVar3 + 2) || (iVar2 == -0x80000000)) {
        iVar4 = 1;
      }
      do {
        if (*pcVar7 == ']') break;
        if (*pcVar7 != ' ') {
          iVar9 = iVar5;
        }
        iVar5 = iVar5 + 1;
        iVar4 = iVar4 + -1;
        pcVar7 = pcVar7 + 1;
      } while (iVar4 != 0);
      if (iVar1 < iVar9) {
        iVar3 = iVar3 + 2;
        iVar6 = 1;
        *param_3 = *pcVar8;
        lVar11 = 0xfe;
        iVar2 = 1;
        if (param_4 != 2) break;
        goto LAB_00622d64;
      }
    }
    iVar3 = iVar2 - iVar5;
    pcVar7 = (char *)(iVar6 + iVar5);
    if ((iVar2 < iVar5 + 1) || (iVar2 == -0x80000000)) {
      iVar3 = 1;
    }
    while (*pcVar7 != ']') {
      iVar5 = iVar5 + 1;
      iVar3 = iVar3 + -1;
      pcVar7 = pcVar7 + 1;
      if (iVar3 == 0) {
        return;
      }
    }
    if (iVar2 <= iVar5) {
      return;
    }
    iVar10 = iVar10 + 1;
  } while( true );
  while( true ) {
    iVar2 = iVar6 + 1;
    pcVar7 = (char *)(iVar3 + *(int *)(param_1 + 8));
    iVar3 = iVar3 + 1;
    param_3[iVar6] = *pcVar7;
    lVar11 = lVar11 + -1;
    if (lVar11 == 0) {
      iVar6 = 0xff;
      break;
    }
    iVar6 = param_4 + -1;
    if (param_4 + -1 == iVar2) break;
    iVar6 = iVar2;
    if (iVar9 < iVar3) break;
  }
LAB_00622d64:
  param_3[iVar6] = '\0';
  return;
}



//==== 00622db8  ns=Global  size=0x170
// sig: undefined FUN_00622db8(void)
// callers(2): 00623834 FUN_00623834; 00624044 FUN_00624044
// callees(2): 006223ec FUN_006223ec; 006226a4 FUN_006226a4

undefined4 FUN_00622db8(int param_1,undefined8 param_2,undefined4 param_3,char *param_4)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  longlong lVar6;
  
  iVar1 = FUN_006223ec();
  if (0 < iVar1) {
    iVar1 = FUN_006226a4(param_1,param_3,iVar1);
    if (0 < iVar1) {
      pcVar2 = (char *)(*(int *)(param_1 + 8) + iVar1);
      iVar5 = iVar1;
      pcVar4 = pcVar2;
      do {
        iVar3 = iVar5 + 1;
        if (0x5e < (byte)(*pcVar4 - 0x20U)) break;
        iVar5 = iVar3;
        pcVar4 = pcVar4 + 1;
      } while (iVar3 < *(int *)(param_1 + 4));
      iVar3 = 0;
      if (iVar1 < iVar5) {
        iVar3 = iVar5 - iVar1;
        lVar6 = 0xfe;
        iVar5 = 1;
        *param_4 = *pcVar2;
        do {
          pcVar4 = param_4 + iVar5;
          if (iVar3 == iVar5) goto LAB_00622eb8;
          pcVar2 = (char *)(iVar1 + *(int *)(param_1 + 8) + iVar5);
          iVar5 = iVar5 + 1;
          *pcVar4 = *pcVar2;
          lVar6 = lVar6 + -1;
        } while (lVar6 != 0);
        iVar3 = 0xff;
      }
LAB_00622eb8:
      param_4[iVar3] = '\0';
      return 1;
    }
  }
  return 0;
}



//==== 00622f28  ns=Global  size=0x94
// sig: undefined FUN_00622f28(void)
// callers(1): 00606234 FUN_00606234
// callees(1): 0061948c 989snd::snd_Printf
// strings: 0066c798: 'Scream IniFile Load Error:  Size can not be NULL.\n' | 0066c760: 'Scream IniFile Load Error:  Location can not be NULL.\n'

void FUN_00622f28(int param_1,longlong param_2,int param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_0071b028;
  if (param_2 == 0) {
    989snd::snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b028 + -0x7ff8));
  }
  if (param_3 == 0) {
    989snd::snd_Printf((char)*(undefined4 *)(puVar1 + -0x7ff4));
  }
  *(int *)(param_1 + 8) = (int)param_2;
  *(undefined1 *)(param_1 + 0xc) = 1;
  *(int *)(param_1 + 4) = param_3;
  return;
}



//==== 00622fbc  ns=Global  size=0x15c
// sig: undefined FUN_00622fbc(void)
// callers(1): 0060cb08 FUN_0060cb08
// callees(7): 005c8700 FUN_005c8700; 006193e0 FUN_006193e0; 0061948c 989snd::snd_Printf; 00630754 FUN_00630754; 006307ac FUN_006307ac; 00630808 FUN_00630808; 0064f1c4 cell::cellFsClose
// strings: 0066c7d0: '/app_home' | 0066c7f8: '%s%s' (raw) | 0066c7e8: '/app_home/' | 0066c800: 'Scream IniFile Load Error:  File not found.\n'

void FUN_00622fbc(int param_1,undefined8 param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 auStack_420 [1032];
  
  puVar1 = PTR_PTR_0071b028;
  iVar2 = FUN_005c8700(param_2,*(undefined4 *)(PTR_PTR_0071b028 + -0x7ff0));
  if (iVar2 == 0) {
    uVar3 = *(undefined4 *)(puVar1 + -0x7fe8);
  }
  else {
    uVar3 = *(undefined4 *)(puVar1 + -0x7fec);
  }
  FUN_006193e0(auStack_420,0x400,*(undefined4 *)(puVar1 + -0x7fe4),uVar3,param_2);
  iVar2 = FUN_00630808(auStack_420,0);
  if (-1 < iVar2) {
    uVar3 = FUN_006307ac(iVar2,0,2);
    *(undefined4 *)(param_1 + 4) = uVar3;
    FUN_006307ac(iVar2,0,0);
    iVar4 = (**(code **)**(undefined4 **)(puVar1 + -0x7fe0))(*(undefined4 *)(param_1 + 4),3);
    *(int *)(param_1 + 8) = iVar4;
    if (iVar4 != 0) {
      FUN_00630754(iVar2,iVar4,*(undefined4 *)(param_1 + 4));
    }
    cell::cellFsClose(iVar2);
    return;
  }
  989snd::snd_Printf((char)*(undefined4 *)(puVar1 + -0x7fdc));
  return;
}



//==== 00623118  ns=Global  size=0x4c
// sig: undefined FUN_00623118(void)
// callers(0): 
// callees(2): 005e387c FUN_005e387c; 006229c8 FUN_006229c8

void FUN_00623118(undefined4 *param_1)

{
  *param_1 = *(undefined4 *)(PTR_PTR_0071b028 + -0x8000);
  FUN_006229c8();
  FUN_005e387c(param_1);
  return;
}



//==== 00623164  ns=Global  size=0x1c
// sig: undefined FUN_00623164(void)
// callers(0): 
// callees(1): 006229c8 FUN_006229c8

void FUN_00623164(undefined4 *param_1)

{
  *param_1 = *(undefined4 *)(PTR_PTR_0071b028 + -0x8000);
  FUN_006229c8();
  return;
}



//==== 00623180  ns=Global  size=0x1c
// sig: undefined FUN_00623180(void)
// callers(0): 
// callees(1): 006229c8 FUN_006229c8

void FUN_00623180(undefined4 *param_1)

{
  *param_1 = *(undefined4 *)(PTR_PTR_0071b028 + -0x8000);
  FUN_006229c8();
  return;
}



//==== 0062319c  ns=Global  size=0x3c
// sig: undefined FUN_0062319c(void)
// callers(0): 
// callees(0): 
// strings: 0066c840: 'INVALID!'

ulonglong FUN_0062319c(ulonglong param_1)

{
  ulonglong uVar1;
  
  if ((param_1 & 0xffffffff) < 5) {
                    /* WARNING: Could not recover jumptable at 0x006231c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)(*(int *)((int)(param_1 << 2) + *(int *)(PTR_PTR_0071b02c + -0x8000)) +
                      *(int *)(PTR_PTR_0071b02c + -0x8000)))();
    return uVar1;
  }
  return (ulonglong)*(uint *)(PTR_PTR_0071b02c + -0x7ff8);
}



//==== 0062323c  ns=Global  size=0x4c
// sig: undefined FUN_0062323c(void)
// callers(1): 006232d8 989snd::snd_RelocateBank
// callees(0): 

int FUN_0062323c(int *param_1)

{
  if ((*param_1 != 1) && (*param_1 != 3)) {
    return 0;
  }
  return param_1[(param_1[1] + -1) * 2 + 2] + param_1[(param_1[1] + -1) * 2 + 3];
}



//==== 00623288  ns=Global  size=0x28
// sig: undefined FUN_00623288(void)
// callers(4): 0060a9b4 989snd::snd_UnloadBank; 0060ae8c 989snd::snd_BankLoadFromMemEx; 0060af74 989snd::snd_BankLoadEx; 006232d8 989snd::snd_RelocateBank
// callees(1): 006247ec FUN_006247ec

undefined1 FUN_00623288(void)

{
  undefined1 uVar1;
  
  uVar1 = FUN_006247ec();
  return uVar1;
}



//==== 006232b0  ns=Global  size=0x28
// sig: undefined FUN_006232b0(void)
// callers(0): 
// callees(1): 006248a4 FUN_006248a4

undefined4 FUN_006232b0(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_006248a4();
  return uVar1;
}



//==== 006232d8  ns=989snd  size=0x21c
// sig: undefined snd_RelocateBank(void)
// callers(0): 
// callees(7): 00617cac FUN_00617cac; 0061948c 989snd::snd_Printf; 0062323c FUN_0062323c; 00623288 FUN_00623288; 00625b20 FUN_00625b20; 006271f4 989snd::snd_SynthUnlock; 006272e8 989snd::snd_SynthLock
// strings: 0066c890: 'snd_RelocateBank(): Only one relocation operation is permitted at a time!\n' | 0066c8e0: '%s(%d) : Attempt to relocate unloaded block handle %x.\n' | 0066c918: 'common/boomrang/api_brb.cpp' | 0066c938: '%s(%d) : Attempt to relocate block that is locked%x.\n'

undefined4 989snd::snd_RelocateBank(int *param_1,int param_2,int param_3)

{
  undefined *puVar1;
  ulonglong uVar2;
  int iVar3;
  undefined4 uVar4;
  char cVar5;
  
  puVar1 = PTR_PTR_0071b02c;
  iVar3 = FUN_00623288();
  if (iVar3 == 0) {
    iVar3 = FUN_00617cac(param_3);
    if (iVar3 == 0) {
      snd_Printf((char)*(undefined4 *)(puVar1 + -0x7fe0));
      return 0;
    }
    if ((*(uint *)(param_3 + 8) & 0x400) != 0) {
      snd_Printf((char)*(undefined4 *)(puVar1 + -0x7fd8));
      return 0;
    }
    if ((*param_1 != 3) || ((int)param_1 + param_1[2] != param_3)) {
      return 0;
    }
    snd_SynthLock();
    *(uint *)(param_3 + 8) = *(uint *)(param_3 + 8) | 0x400;
    snd_SynthUnlock();
    uVar4 = FUN_0062323c(param_1);
    cVar5 = FUN_00625b20(param_3,param_3 + (param_2 - (int)param_1),param_1,param_2,uVar4);
    uVar4 = 1;
    if (cVar5 == '\0') {
      snd_SynthLock();
      uVar2 = ((ulonglong)*(uint *)(param_3 + 8) & 0x3ff) << 0x15 |
              (ulonglong)(*(uint *)(param_3 + 8) >> 0xb);
      *(uint *)(param_3 + 8) = (uint)(uVar2 << 0xb) | (uint)uVar2 >> 0x15;
      snd_SynthUnlock();
      uVar4 = 0;
    }
  }
  else {
    snd_Printf((char)*(undefined4 *)(puVar1 + -0x7fe4));
    uVar4 = 0;
  }
  return uVar4;
}



//==== 006234f4  ns=Global  size=0x60
// sig: undefined FUN_006234f4(void)
// callers(0): 
// callees(3): 006259b8 989snd::snd_SynthSetMasterEQBand; 006271f4 989snd::snd_SynthUnlock; 006272e8 989snd::snd_SynthLock

void FUN_006234f4(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uStack00000038;
  float fStack0000003c;
  float fStack00000040;
  float fStack00000044;
  
  _uStack00000038 = param_2;
  _fStack00000040 = param_3;
  989snd::snd_SynthLock();
  989snd::snd_SynthSetMasterEQBand
            ((double)fStack0000003c,(double)fStack00000040,(double)fStack00000044,param_1,
             uStack00000038);
  989snd::snd_SynthUnlock();
  return;
}



//==== 00623554  ns=Global  size=0x24
// sig: undefined FUN_00623554(void)
// callers(0): 
// callees(1): 0062ae84 FUN_0062ae84

void FUN_00623554(void)

{
  FUN_0062ae84();
  return;
}



//==== 00623578  ns=Global  size=0x24
// sig: undefined FUN_00623578(void)
// callers(1): 00626844 FUN_00626844
// callees(1): 00627c40 FUN_00627c40

void FUN_00623578(void)

{
  FUN_00627c40();
  return;
}



//==== 0062359c  ns=Global  size=0x24
// sig: undefined FUN_0062359c(void)
// callers(0): 
// callees(1): 00626670 FUN_00626670

void FUN_0062359c(void)

{
  FUN_00626670();
  return;
}



//==== 006235c0  ns=Global  size=0x24
// sig: undefined FUN_006235c0(void)
// callers(0): 
// callees(1): 0062db94 FUN_0062db94

void FUN_006235c0(void)

{
  FUN_0062db94();
  return;
}



//==== 006235e4  ns=Global  size=0x24
// sig: undefined FUN_006235e4(void)
// callers(0): 
// callees(1): 00626bb4 FUN_00626bb4

void FUN_006235e4(void)

{
  FUN_00626bb4();
  return;
}



//==== 00623608  ns=Global  size=0x24
// sig: undefined FUN_00623608(void)
// callers(0): 
// callees(1): 00626cb4 989snd::snd_SynthLR1Insert

void FUN_00623608(void)

{
  989snd::snd_SynthLR1Insert();
  return;
}



//==== 0062362c  ns=Global  size=0x198
// sig: undefined FUN_0062362c(void)
// callers(1): 00623834 FUN_00623834
// callees(7): 00627e64 FUN_00627e64; 00627f54 FUN_00627f54; 00628050 FUN_00628050; 0062958c FUN_0062958c; 00629650 FUN_00629650; 006297b0 FUN_006297b0; 006298b4 FUN_006298b4

void FUN_0062362c(undefined8 param_1,float *param_2)

{
  ulonglong uVar1;
  
  FUN_00628050((double)*param_2);
  FUN_00627f54((double)param_2[5],(double)param_2[9],(double)param_2[0xd],param_1,0,param_2[1]);
  FUN_00627f54((double)param_2[6],(double)param_2[10],(double)param_2[0xe],param_1,1,param_2[2]);
  FUN_00627f54((double)param_2[7],(double)param_2[0xb],(double)param_2[0xf],param_1,2,param_2[3]);
  FUN_00627f54((double)param_2[8],(double)param_2[0xc],(double)param_2[0x10],param_1,3,param_2[4]);
  uVar1 = (ulonglong)((int)param_2[0x11] >> 0x1f);
  FUN_00627e64((double)param_2[0x14],param_1,uVar1 - (uVar1 ^ (uint)param_2[0x11]) >> 0x1f & 1);
  FUN_006298b4((double)param_2[0x15],(double)param_2[0x16],(double)param_2[0x17],
               (double)param_2[0x18],(double)param_2[0x19],(double)param_2[0x1a],param_1);
  FUN_006297b0((double)param_2[0x1b],(double)param_2[0x1c],(double)param_2[0x1d],
               (double)param_2[0x1e],(double)param_2[0x1f],(double)param_2[0x20],param_1);
  uVar1 = (ulonglong)((int)param_2[0x21] >> 0x1f);
  FUN_00629650(param_1,uVar1 - (uVar1 ^ (uint)param_2[0x21]) >> 0x1f & 1);
  FUN_0062958c((double)param_2[0x22],(double)param_2[0x23],param_1);
  return;
}



//==== 006237c4  ns=Global  size=0x24
// sig: undefined FUN_006237c4(void)
// callers(0): 
// callees(1): 00626e80 989snd::snd_SynthLR1Destroy

void FUN_006237c4(void)

{
  989snd::snd_SynthLR1Destroy();
  return;
}



//==== 006237e8  ns=Global  size=0x28
// sig: undefined FUN_006237e8(void)
// callers(0): 
// callees(1): 0062b660 989snd::snd_SynthLR1Create

undefined4 FUN_006237e8(void)

{
  undefined4 uVar1;
  
  uVar1 = 989snd::snd_SynthLR1Create();
  return uVar1;
}



//==== 00623810  ns=Global  size=0x24
// sig: undefined FUN_00623810(void)
// callers(0): 
// callees(1): 00625064 989snd::snd_DumpOutputCaptureBuffer

void FUN_00623810(void)

{
  989snd::snd_DumpOutputCaptureBuffer();
  return;
}



//==== 00623834  ns=Global  size=0x810
// sig: undefined FUN_00623834(void)
// callers(1): 00606408 989snd::snd_PremasterSubmixSetCustomPreset
// callees(4): 005ca498 FUN_005ca498; 005caf74 FUN_005caf74; 00622db8 FUN_00622db8; 0062362c FUN_0062362c
// strings: 0066c970: 'preAmpGainLinear' | 0066c988: 'peqBand0Mode' | 0066c998: 'peqBand0Gain' | 0066c9a8: 'peqBand0Freq' | 0066c9b8: 'peqBand0Q' | 0066c9c8: 'peqBand1Mode' | 0066c9d8: 'peqBand1Gain' | 0066c9e8: 'peqBand1Freq' | 0066c9f8: 'peqBand1Q' | 0066ca08: 'peqBand2Mode' | 0066ca18: 'peqBand2Gain' | 0066ca28: 'peqBand2Freq' | 0066ca38: 'peqBand2Q' | 0066ca48: 'peqBand3Mode' | 0066ca58: 'peqBand3Gain' | 0066ca68: 'peqBand3Freq' | 0066ca78: 'peqBand3Q' | 0066ca88: 'compEffectOn' | 0066ca98: 'compSideChaining' | 0066cab0: 'compLinkedChannels' | 0066cac8: 'compLookAheadMS' | 0066cad8: 'compFRSthresholdDB' | 0066caf0: 'compFRSratio' | 0066cb00: 'compFRSattackTimeMS' | 0066cb18: 'compFRSreleaseTimeMS' | 0066cb30: 'compFRSmakeupGainDB' | 0066cb48: 'compFRSpassthruGainDB' | 0066cb60: 'compLFEthresholdDB' | 0066cb78: 'compLFEratio' | 0066cb88: 'compLFEattackTimeMS'

void FUN_00623834(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined *puVar1;
  char cVar2;
  undefined1 local_1c0 [144];
  undefined1 auStack_130 [264];
  
  puVar1 = PTR_PTR_0071b02c;
  if (param_2 != 0) {
    cVar2 = FUN_00622db8(param_2,param_3,*(undefined4 *)(PTR_PTR_0071b02c + -0x7fd4),auStack_130);
    if (cVar2 != '\0') {
      FUN_005ca498(auStack_130,0,0);
      FUN_00622db8(param_2,param_3,*(undefined4 *)(puVar1 + -0x7fd0),auStack_130);
      FUN_005caf74(auStack_130,0,10);
      FUN_00622db8(param_2,param_3,*(undefined4 *)(puVar1 + -0x7fcc),auStack_130);
      FUN_005ca498(auStack_130,0,0);
      FUN_00622db8(param_2,param_3,*(undefined4 *)(puVar1 + -0x7fc8),auStack_130);
      FUN_005ca498(auStack_130,0,0);
      FUN_00622db8(param_2,param_3,*(undefined4 *)(puVar1 + -0x7fc4),auStack_130);
      FUN_005ca498(auStack_130,0,0);
      FUN_00622db8(param_2,param_3,*(undefined4 *)(puVar1 + -0x7fc0),auStack_130);
      FUN_005caf74(auStack_130,0,10);
      FUN_00622db8(param_2,param_3,*(undefined4 *)(puVar1 + -0x7fbc),auStack_130);
      FUN_005ca498(auStack_130,0,0);
      FUN_00622db8(param_2,param_3,*(undefined4 *)(puVar1 + -0x7fb8),auStack_130);
      FUN_005ca498(auStack_130,0,0);
      FUN_00622db8(param_2,param_3,*(undefined4 *)(puVar1 + -0x7fb4),auStack_130);
      FUN_005ca498(auStack_130,0,0);
      FUN_00622db8(param_2,param_3,*(undefined4 *)(puVar1 + -0x7fb0),auStack_130);
      FUN_005caf74(auStack_130,0,10);
      FUN_00622db8(param_2,param_3,*(undefined4 *)(puVar1 + -0x7fac),auStack_130);
      FUN_005ca498(auStack_130,0,0);
      FUN_00622db8(param_2,param_3,*(undefined4 *)(puVar1 + -0x7fa8),auStack_130);
      FUN_005ca498(auStack_130,0,0);
      FUN_00622db8(param_2,param_3,*(undefined4 *)(puVar1 + -0x7fa4),auStack_130);
      FUN_005ca498(auStack_130,0,0);
      FUN_00622db8(param_2,param_3,*(undefined4 *)(puVar1 + -0x7fa0),auStack_130);
      FUN_005caf74(auStack_130,0,10);
      FUN_00622db8(param_2,param_3,*(undefined4 *)(puVar1 + -0x7f9c),auStack_130);
      FUN_005ca498(auStack_130,0,0);
      FUN_00622db8(param_2,param_3,*(undefined4 *)(puVar1 + -0x7f98),auStack_130);
      FUN_005ca498(auStack_130,0,0);
      FUN_00622db8(param_2,param_3,*(undefined4 *)(puVar1 + -0x7f94),auStack_130);
      FUN_005ca498(auStack_130,0,0);
      FUN_00622db8(param_2,param_3,*(undefined4 *)(puVar1 + -0x7f90),auStack_130);
      FUN_005caf74(auStack_130,0,10);
      FUN_00622db8(param_2,param_3,*(undefined4 *)(puVar1 + -0x7f8c),auStack_130);
      FUN_005caf74(auStack_130,0,10);
      FUN_00622db8(param_2,param_3,*(undefined4 *)(puVar1 + -0x7f88),auStack_130);
      FUN_005caf74(auStack_130,0,10);
      FUN_00622db8(param_2,param_3,*(undefined4 *)(puVar1 + -0x7f84),auStack_130);
      FUN_005ca498(auStack_130,0,0);
      FUN_00622db8(param_2,param_3,*(undefined4 *)(puVar1 + -0x7f80),auStack_130);
      FUN_005ca498(auStack_130,0,0);
      FUN_00622db8(param_2,param_3,*(undefined4 *)(puVar1 + -0x7f7c),auStack_130);
      FUN_005ca498(auStack_130,0,0);
      FUN_00622db8(param_2,param_3,*(undefined4 *)(puVar1 + -0x7f78),auStack_130);
      FUN_005ca498(auStack_130,0,0);
      FUN_00622db8(param_2,param_3,*(undefined4 *)(puVar1 + -0x7f74),auStack_130);
      FUN_005ca498(auStack_130,0,0);
      FUN_00622db8(param_2,param_3,*(undefined4 *)(puVar1 + -0x7f70),auStack_130);
      FUN_005ca498(auStack_130,0,0);
      FUN_00622db8(param_2,param_3,*(undefined4 *)(puVar1 + -0x7f6c),auStack_130);
      FUN_005ca498(auStack_130,0,0);
      FUN_00622db8(param_2,param_3,*(undefined4 *)(puVar1 + -0x7f68),auStack_130);
      FUN_005ca498(auStack_130,0,0);
      FUN_00622db8(param_2,param_3,*(undefined4 *)(puVar1 + -0x7f64),auStack_130);
      FUN_005ca498(auStack_130,0,0);
      FUN_00622db8(param_2,param_3,*(undefined4 *)(puVar1 + -0x7f60),auStack_130);
      FUN_005ca498(auStack_130,0,0);
      FUN_00622db8(param_2,param_3,*(undefined4 *)(puVar1 + -0x7f5c),auStack_130);
      FUN_005ca498(auStack_130,0,0);
      FUN_00622db8(param_2,param_3,*(undefined4 *)(puVar1 + -0x7f58),auStack_130);
      FUN_005ca498(auStack_130,0,0);
      FUN_00622db8(param_2,param_3,*(undefined4 *)(puVar1 + -0x7f54),auStack_130);
      FUN_005ca498(auStack_130,0,0);
      FUN_00622db8(param_2,param_3,*(undefined4 *)(puVar1 + -0x7f50),auStack_130);
      FUN_005caf74(auStack_130,0,10);
      FUN_00622db8(param_2,param_3,*(undefined4 *)(puVar1 + -0x7f4c),auStack_130);
      FUN_005ca498(auStack_130,0,0);
      FUN_00622db8(param_2,param_3,*(undefined4 *)(puVar1 + -0x7f48),auStack_130);
      FUN_005ca498(auStack_130,0,0);
      FUN_0062362c(param_1,local_1c0);
      return;
    }
  }
  return;
}



//==== 00624044  ns=Global  size=0x34c
// sig: undefined FUN_00624044(void)
// callers(1): 00606530 FUN_00606530
// callees(4): 005ca498 FUN_005ca498; 005caf74 FUN_005caf74; 0060637c FUN_0060637c; 00622db8 FUN_00622db8
// strings: 0066cc20: 'EffectMode' | 0066cc30: 'EffectLevel' | 0066cc40: 'EarlyReflectionsDelay' | 0066cc58: 'EarlyReflectionsTimeFactor' | 0066cc78: 'EarlyReflectionsLevel' | 0066cc90: 'EarlyReflectionsSlapBack' | 0066ccb0: 'EarlyReflectionsHFRatio' | 0066ccc8: 'DecayTime' | 0066ccd8: 'DecayLevel' | 0066cce8: 'DecayHFRatio' | 0066ccf8: 'DecayDiffusion' | 0066cd08: 'EffectLowPassCutoff' | 0066cd20: 'EffectHighPassCutoff'

void FUN_00624044(int param_1,int param_2,undefined4 param_3)

{
  undefined *puVar1;
  char cVar2;
  undefined1 local_170 [56];
  undefined1 auStack_138 [272];
  
  puVar1 = PTR_PTR_0071b02c;
  if ((param_1 != 0) && (param_2 != 0)) {
    cVar2 = FUN_00622db8(param_2,param_3,*(undefined4 *)(PTR_PTR_0071b02c + -0x7f44),auStack_138);
    if (cVar2 != '\0') {
      FUN_005caf74(auStack_138,0,10);
      FUN_00622db8(param_2,param_3,*(undefined4 *)(puVar1 + -0x7f40),auStack_138);
      FUN_005ca498(auStack_138,0,0);
      FUN_00622db8(param_2,param_3,*(undefined4 *)(puVar1 + -0x7f3c),auStack_138);
      FUN_005ca498(auStack_138,0,0);
      FUN_00622db8(param_2,param_3,*(undefined4 *)(puVar1 + -0x7f38),auStack_138);
      FUN_005ca498(auStack_138,0,0);
      FUN_00622db8(param_2,param_3,*(undefined4 *)(puVar1 + -0x7f34),auStack_138);
      FUN_005ca498(auStack_138,0,0);
      FUN_00622db8(param_2,param_3,*(undefined4 *)(puVar1 + -0x7f30),auStack_138);
      FUN_005ca498(auStack_138,0,0);
      FUN_00622db8(param_2,param_3,*(undefined4 *)(puVar1 + -0x7f2c),auStack_138);
      FUN_005ca498(auStack_138,0,0);
      FUN_00622db8(param_2,param_3,*(undefined4 *)(puVar1 + -0x7f28),auStack_138);
      FUN_005ca498(auStack_138,0,0);
      FUN_00622db8(param_2,param_3,*(undefined4 *)(puVar1 + -0x7f24),auStack_138);
      FUN_005ca498(auStack_138,0,0);
      FUN_00622db8(param_2,param_3,*(undefined4 *)(puVar1 + -0x7f20),auStack_138);
      FUN_005ca498(auStack_138,0,0);
      FUN_00622db8(param_2,param_3,*(undefined4 *)(puVar1 + -0x7f1c),auStack_138);
      FUN_005ca498(auStack_138,0,0);
      FUN_00622db8(param_2,param_3,*(undefined4 *)(puVar1 + -0x7f18),auStack_138);
      FUN_005ca498(auStack_138,0,0);
      FUN_00622db8(param_2,param_3,*(undefined4 *)(puVar1 + -0x7f14),auStack_138);
      FUN_005ca498(auStack_138,0,0);
      FUN_0060637c(param_1,local_170);
      return;
    }
  }
  return;
}



//==== 00624390  ns=Global  size=0x19c
// sig: undefined FUN_00624390(void)
// callers(0): 
// callees(1): 006196f4 FUN_006196f4
// strings: 0066d518: 'BRB (CLIENT): ' | 0066d528: '\n********************************************\n\n' | 0066d4a0: '\n\n**********    BRB ERROR REPORT    **********\n\n' | 0066d510: 'BRB: ' | 0066d4d8: '\n\n**********   BRB WARNING REPORT   **********\n\n' | 0066d464: '<e`B\n\n*****   BRB !!!FATAL ERROR!!! REPORT   *****\n\n'

void FUN_00624390(undefined4 param_1,int param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  byte in_cr0;
  byte in_cr1;
  byte in_cr2;
  byte in_cr3;
  byte unaff_cr4;
  byte in_cr5;
  byte in_cr6;
  byte in_cr7;
  uint uStack00000008;
  
  puVar1 = PTR_PTR_0071b030;
  uStack00000008 =
       (uint)(in_cr0 & 0xf) << 0x1c | (uint)(in_cr1 & 0xf) << 0x18 | (uint)(in_cr2 & 0xf) << 0x14 |
       (uint)(in_cr3 & 0xf) << 0x10 | (uint)(unaff_cr4 & 0xf) << 0xc | (uint)(in_cr5 & 0xf) << 8 |
       (uint)(in_cr6 & 0xf) << 4 | (uint)(in_cr7 & 0xf);
  if (**(int **)(PTR_PTR_0071b030 + -0x8000) != 0) {
    return;
  }
  if (param_2 == 1) {
    puVar3 = *(undefined4 **)(PTR_PTR_0071b030 + -0x7ffc);
    uVar2 = *(undefined4 *)(PTR_PTR_0071b030 + -0x7ff4);
LAB_00624478:
    (**(code **)*puVar3)(uVar2);
    (**(code **)*puVar3)(param_1);
  }
  else {
    if (1 < param_2) {
      if (param_2 != 2) {
        if (param_2 != 3) goto LAB_006243e4;
        puVar3 = *(undefined4 **)(PTR_PTR_0071b030 + -0x7ffc);
        (**(code **)*puVar3)(*(undefined4 *)(PTR_PTR_0071b030 + -0x7fec));
        (**(code **)*puVar3)(param_1);
LAB_006244fc:
        puVar3 = (undefined4 *)*puVar3;
        uVar2 = *(undefined4 *)(puVar1 + -0x7fe0);
        goto LAB_00624434;
      }
      puVar3 = *(undefined4 **)(PTR_PTR_0071b030 + -0x7ffc);
      uVar2 = *(undefined4 *)(PTR_PTR_0071b030 + -0x7ff0);
      goto LAB_00624478;
    }
    if (param_2 == 0) {
      puVar3 = *(undefined4 **)(PTR_PTR_0071b030 + -0x7ffc);
      uVar2 = *(undefined4 *)(PTR_PTR_0071b030 + -0x7ff8);
      goto LAB_00624478;
    }
LAB_006243e4:
    puVar3 = *(undefined4 **)(PTR_PTR_0071b030 + -0x7ffc);
    (**(code **)*puVar3)(*(undefined4 *)(PTR_PTR_0071b030 + -0x7fe8));
    (**(code **)*puVar3)(param_1);
    if (2 < param_2) goto LAB_006244fc;
  }
  puVar3 = (undefined4 *)*puVar3;
  uVar2 = *(undefined4 *)(puVar1 + -0x7fe4);
LAB_00624434:
  (*(code *)*puVar3)(uVar2);
  return;
}



//==== 0062452c  ns=Global  size=0x5c
// sig: undefined FUN_0062452c(void)
// callers(0): 
// callees(0): 

void FUN_0062452c(undefined8 param_1,int param_2)

{
  (**(code **)**(undefined4 **)(PTR_PTR_0071b030 + -0x7fdc))(param_2 - *(int *)(param_2 + -8));
  return;
}



//==== 00624588  ns=Global  size=0x8
// sig: undefined FUN_00624588(void)
// callers(0): 
// callees(0): 

undefined8 FUN_00624588(void)

{
  return 0;
}



//==== 00624590  ns=Global  size=0x48
// sig: undefined FUN_00624590(void)
// callers(2): 00625374 FUN_00625374; 00626cb4 989snd::snd_SynthLR1Insert
// callees(0): 

int FUN_00624590(int param_1)

{
  int iVar1;
  int *piVar2;
  longlong lVar3;
  
  lVar3 = 8;
  iVar1 = 0;
  piVar2 = *(int **)(PTR_PTR_0071b030 + -0x7fd8);
  do {
    if (*piVar2 == param_1) {
      return iVar1;
    }
    iVar1 = iVar1 + 1;
    lVar3 = lVar3 + -1;
    piVar2 = piVar2 + 4;
  } while (lVar3 != 0);
  return -1;
}



//==== 006245d8  ns=Global  size=0xcc
// sig: undefined FUN_006245d8(void)
// callers(0): 
// callees(0): 

void FUN_006245d8(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  int *piVar5;
  longlong lVar6;
  
  lVar6 = 8;
  piVar1 = *(int **)(PTR_PTR_0071b030 + -0x7fcc);
  uVar4 = 0;
  piVar5 = *(int **)(PTR_PTR_0071b030 + -0x7fd4);
  do {
    iVar2 = *piVar5;
    if (iVar2 == param_1) {
      puVar3 = (undefined4 *)**(undefined4 **)(PTR_PTR_0071b030 + -0x7fd0);
      *(undefined4 *)(*(int *)(PTR_PTR_0071b030 + -0x7fd4) + (int)((uVar4 & 0xffffffff) << 4)) = 0;
      (*(code *)*puVar3)(iVar2,0,1);
      *piVar1 = *piVar1 + -1;
      return;
    }
    lVar6 = lVar6 + -1;
    uVar4 = uVar4 + 1;
    piVar5 = piVar5 + 4;
  } while (lVar6 != 0);
  return;
}



//==== 006246a4  ns=Global  size=0x18
// sig: undefined FUN_006246a4(void)
// callers(0): 
// callees(0): 

void FUN_006246a4(undefined4 param_1)

{
  **(undefined4 **)(PTR_PTR_0071b030 + -0x7fc8) = param_1;
  return;
}



//==== 006246bc  ns=Global  size=0x8
// sig: undefined FUN_006246bc(void)
// callers(2): 0061870c FUN_0061870c; 00627000 989snd::snd_SynthGetFreeVoiceBufferId
// callees(0): 

undefined8 FUN_006246bc(void)

{
  return 3;
}



//==== 006246c4  ns=Global  size=0x14
// sig: undefined FUN_006246c4(void)
// callers(1): 0060c2ec FUN_0060c2ec
// callees(0): 
// strings: 0066d560: 'BoomRangBuss'

undefined4 FUN_006246c4(void)

{
  return *(undefined4 *)(PTR_PTR_0071b030 + -0x7fc4);
}



//==== 006246d8  ns=Global  size=0x54
// sig: undefined FUN_006246d8(void)
// callers(1): 0060ca38 FUN_0060ca38
// callees(0): 

void FUN_006246d8(undefined4 *param_1)

{
  *param_1 = 100;
  *(undefined1 *)(param_1 + 2) = 0xff;
  *(undefined1 *)((int)param_1 + 9) = 1;
  param_1[7] = 0;
  param_1[3] = 0x80;
  param_1[4] = 0x20;
  param_1[1] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  return;
}



//==== 0062472c  ns=Global  size=0x4
// sig: undefined FUN_0062472c(void)
// callers(0): 
// callees(0): 

void FUN_0062472c(void)

{
  return;
}



//==== 00624730  ns=Global  size=0x8
// sig: undefined FUN_00624730(void)
// callers(1): 006218e0 FUN_006218e0
// callees(0): 

undefined8 FUN_00624730(void)

{
  return 1;
}



//==== 00624738  ns=Global  size=0x58
// sig: undefined FUN_00624738(void)
// callers(1): 006218e0 FUN_006218e0
// callees(0): 

undefined4 FUN_00624738(uint param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  piVar1 = (int *)(param_1 * 0x10 + (param_1 & 0x3fffffff) * -4 +
                  *(int *)(PTR_PTR_0071b030 + -0x7fc0));
  iVar2 = piVar1[1] + -1;
  if (piVar1[1] != 0) {
    piVar1[1] = iVar2;
    uVar3 = *(undefined4 *)(iVar2 * 4 + *piVar1);
  }
  return uVar3;
}



//==== 00624790  ns=Global  size=0x8
// sig: undefined FUN_00624790(void)
// callers(0): 
// callees(0): 

undefined8 FUN_00624790(void)

{
  return 2;
}



//==== 00624798  ns=Global  size=0x48
// sig: undefined FUN_00624798(void)
// callers(1): 006299b8 FUN_006299b8
// callees(0): 

double FUN_00624798(int param_1,int param_2)

{
  if (param_1 == 1) {
    if (param_2 != 0) goto LAB_006247c4;
  }
  else {
    if (param_1 != 2) {
      return (double)*(float *)(PTR_PTR_0071b030 + -0x7fac);
    }
    if (param_2 == 0) {
LAB_006247c4:
      return (double)*(float *)(PTR_PTR_0071b030 + -0x7fb4);
    }
  }
  return (double)*(float *)(PTR_PTR_0071b030 + -0x7fbc);
}



//==== 006247e0  ns=Global  size=0xc
// sig: undefined FUN_006247e0(void)
// callers(1): 0060e718 FUN_0060e718
// callees(0): 

void FUN_006247e0(undefined4 *param_1)

{
  *param_1 = 0;
  return;
}



//==== 006247ec  ns=Global  size=0x34
// sig: undefined FUN_006247ec(void)
// callers(1): 00623288 FUN_00623288
// callees(0): 

uint FUN_006247ec(void)

{
  uint uVar1;
  
  uVar1 = 0;
  if (**(char **)(PTR_PTR_0071b030 + -0x7fa4) != '\0') {
    uVar1 = (uint)((ulonglong)(byte)(*(char **)(PTR_PTR_0071b030 + -0x7fa4))[1] - 1 >> 0x3f);
  }
  return uVar1;
}



//==== 00624820  ns=Global  size=0x18
// sig: undefined FUN_00624820(void)
// callers(0): 
// callees(0): 

undefined4 FUN_00624820(void)

{
  return **(undefined4 **)(PTR_PTR_0071b030 + -0x7fa0);
}



//==== 00624838  ns=Global  size=0x3c
// sig: undefined FUN_00624838(void)
// callers(0): 
// callees(1): 005e387c FUN_005e387c

void FUN_00624838(undefined4 *param_1)

{
  *param_1 = *(undefined4 *)(PTR_PTR_0071b030 + -0x7f9c);
  FUN_005e387c();
  return;
}



//==== 00624874  ns=Global  size=0x18
// sig: undefined FUN_00624874(void)
// callers(0): 
// callees(0): 

void FUN_00624874(undefined4 *param_1)

{
  *param_1 = *(undefined4 *)(PTR_PTR_0071b030 + -0x7f9c);
  return;
}



//==== 0062488c  ns=Global  size=0x18
// sig: undefined FUN_0062488c(void)
// callers(0): 
// callees(0): 

void FUN_0062488c(undefined4 *param_1)

{
  *param_1 = *(undefined4 *)(PTR_PTR_0071b030 + -0x7f9c);
  return;
}



//==== 006248a4  ns=Global  size=0x4c
// sig: undefined FUN_006248a4(void)
// callers(1): 006232b0 FUN_006232b0
// callees(0): 

undefined4 FUN_006248a4(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  puVar1 = *(undefined4 **)(PTR_PTR_0071b030 + -0x7fa4);
  if (*(char *)((int)puVar1 + 1) != '\0') {
    uVar2 = puVar1[4];
    puVar1[6] = 0;
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[5] = 0;
    puVar1[4] = 0;
  }
  return uVar2;
}



//==== 006248f0  ns=Global  size=0x130
// sig: undefined FUN_006248f0(void)
// callers(0): 
// callees(1): 005d0140 libc::memset

int FUN_006248f0(undefined8 param_1,int param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = 1 << (param_3 & 0x1f);
  if (uVar4 < 8) {
    uVar4 = 8;
  }
  uVar1 = (**(code **)**(undefined4 **)(PTR_PTR_0071b030 + -0x7f98))
                    (uVar4 + param_2,**(undefined4 **)(PTR_PTR_0071b030 + -0x7f94));
  iVar2 = uVar4 + (-uVar4 & uVar1);
  iVar3 = 0;
  if (uVar1 != 0) {
    *(int *)(iVar2 + -4) = param_2;
    *(uint *)(iVar2 + -8) = iVar2 - uVar1;
    iVar3 = iVar2;
    if ((param_3 & 0x40) != 0) {
      libc::memset(iVar2,0,param_2);
      return iVar2;
    }
  }
  return iVar3;
}



//==== 00624a20  ns=Global  size=0xf0
// sig: undefined FUN_00624a20(void)
// callers(0): 
// callees(1): 006487c0 FUN_006487c0

uint FUN_00624a20(int param_1)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  undefined1 local_20 [4];
  int local_1c [3];
  
  puVar1 = PTR_PTR_0071b030;
  if (param_1 < 0) {
    if (param_1 == -1) {
      iVar3 = **(int **)(PTR_PTR_0071b030 + -0x7fa0);
    }
    else {
      iVar3 = **(int **)(PTR_PTR_0071b030 + -0x7f8c);
    }
  }
  else {
    iVar3 = *(int *)(*(int *)(PTR_PTR_0071b030 + -0x7f90) + param_1 * 4);
  }
  FUN_006487c0(iVar3,local_20,local_1c);
  uVar2 = 0;
  if (local_1c[0] != 0) {
    sync(1);
    if ((**(uint **)(iVar3 + 0x14) & 1) == 0) {
      uVar2 = 0;
      if (*(float *)(*(int *)(iVar3 + 0x10) + 0xc) < **(float **)(puVar1 + -0x7f88)) {
        uVar2 = *(uint *)(local_1c[0] + 0x2c) & 1;
      }
    }
    else {
      uVar2 = *(uint *)(local_1c[0] + 0x2c) & 1;
    }
  }
  return uVar2;
}



//==== 00624b18  ns=Global  size=0x9c
// sig: undefined FUN_00624b18(void)
// callers(0): 
// callees(1): 006487c0 FUN_006487c0

undefined4 FUN_00624b18(int param_1)

{
  undefined4 uVar1;
  undefined1 local_20 [4];
  int local_1c [3];
  
  if (param_1 < 0) {
    if (param_1 == -1) {
      uVar1 = **(undefined4 **)(PTR_PTR_0071b030 + -0x7fa0);
    }
    else {
      uVar1 = **(undefined4 **)(PTR_PTR_0071b030 + -0x7f8c);
    }
  }
  else {
    uVar1 = *(undefined4 *)(*(int *)(PTR_PTR_0071b030 + -0x7f90) + param_1 * 4);
  }
  FUN_006487c0(uVar1,local_20,local_1c);
  uVar1 = 0;
  if (local_1c[0] != 0) {
    uVar1 = *(undefined4 *)(local_1c[0] + 0x3c);
  }
  return uVar1;
}



//==== 00624bbc  ns=Global  size=0x114
// sig: undefined FUN_00624bbc(void)
// callers(0): 
// callees(1): 006487c0 FUN_006487c0

uint FUN_00624bbc(int param_1)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  undefined1 local_20 [4];
  int local_1c [3];
  
  puVar1 = PTR_PTR_0071b030;
  if (param_1 < 0) {
    if (param_1 == -1) {
      iVar2 = **(int **)(PTR_PTR_0071b030 + -0x7fa0);
    }
    else {
      iVar2 = **(int **)(PTR_PTR_0071b030 + -0x7f8c);
    }
  }
  else {
    iVar2 = *(int *)(*(int *)(PTR_PTR_0071b030 + -0x7f90) + param_1 * 4);
  }
  FUN_006487c0(iVar2,local_20,local_1c);
  uVar3 = 0;
  if (local_1c[0] != 0) {
    sync(1);
    if ((**(uint **)(iVar2 + 0x14) & 1) == 0) {
      uVar3 = 0;
      if (*(float *)(*(int *)(iVar2 + 0x10) + 0xc) < **(float **)(puVar1 + -0x7f88)) {
        uVar3 = (int)*(uint *)(local_1c[0] + 8) >> 0x1f;
        uVar3 = ((uVar3 ^ *(uint *)(local_1c[0] + 8)) - uVar3) - 1 >> 0x1f;
      }
    }
    else {
      uVar3 = (int)*(uint *)(local_1c[0] + 8) >> 0x1f;
      uVar3 = ((uVar3 ^ *(uint *)(local_1c[0] + 8)) - uVar3) - 1 >> 0x1f;
    }
  }
  return uVar3;
}



//==== 00624cd8  ns=Global  size=0xec
// sig: undefined FUN_00624cd8(void)
// callers(0): 
// callees(2): 006486f8 FUN_006486f8; 00648730 FUN_00648730

/* WARNING: Removing unreachable block (ram,0x00624d58) */

void FUN_00624cd8(int param_1)

{
  undefined4 uVar1;
  undefined1 local_40 [8];
  undefined1 local_38 [8];
  
  if (param_1 < 0) {
    if (param_1 == -1) {
      uVar1 = **(undefined4 **)(PTR_PTR_0071b030 + -0x7fa0);
    }
    else {
      uVar1 = **(undefined4 **)(PTR_PTR_0071b030 + -0x7f8c);
    }
  }
  else {
    uVar1 = *(undefined4 *)(*(int *)(PTR_PTR_0071b030 + -0x7f90) + param_1 * 4);
  }
  FUN_00648730(uVar1,local_40,local_38);
  return;
}



//==== 00624dcc  ns=Global  size=0xec
// sig: undefined FUN_00624dcc(void)
// callers(0): 
// callees(2): 006486f8 FUN_006486f8; 00648730 FUN_00648730

/* WARNING: Removing unreachable block (ram,0x00624e4c) */

void FUN_00624dcc(int param_1)

{
  undefined4 uVar1;
  undefined1 local_40 [8];
  undefined1 local_38 [8];
  
  if (param_1 < 0) {
    if (param_1 == -1) {
      uVar1 = **(undefined4 **)(PTR_PTR_0071b030 + -0x7fa0);
    }
    else {
      uVar1 = **(undefined4 **)(PTR_PTR_0071b030 + -0x7f8c);
    }
  }
  else {
    uVar1 = *(undefined4 *)(*(int *)(PTR_PTR_0071b030 + -0x7f90) + param_1 * 4);
  }
  FUN_00648730(uVar1,local_40,local_38);
  return;
}



//==== 00624ec0  ns=Global  size=0x19c
// sig: undefined FUN_00624ec0(void)
// callers(0): 
// callees(2): 006486f8 FUN_006486f8; 00648730 FUN_00648730

/* WARNING: Removing unreachable block (ram,0x00624fbc) */

void FUN_00624ec0(int param_1)

{
  undefined4 uVar1;
  undefined1 local_70 [8];
  undefined1 local_68 [8];
  
  if (param_1 < 0) {
    if (param_1 == -1) {
      uVar1 = **(undefined4 **)(PTR_PTR_0071b030 + -0x7fa0);
    }
    else {
      uVar1 = **(undefined4 **)(PTR_PTR_0071b030 + -0x7f8c);
    }
  }
  else {
    uVar1 = *(undefined4 *)(*(int *)(PTR_PTR_0071b030 + -0x7f90) + param_1 * 4);
  }
  FUN_00648730(uVar1,local_70,local_68);
  return;
}



//==== 00625064  ns=989snd  size=0x40
// sig: undefined snd_DumpOutputCaptureBuffer(void)
// callers(1): 00623810 FUN_00623810
// callees(1): 0061948c 989snd::snd_Printf
// strings: 0066d570: 'snd_DumpOutputCaptureBuffer() is deprecated.\n' | 0066d5a0: 'Please use snd_StartDebugD2Drecording() and snd_StopDebugD2Drecording() instead.\n'

void 989snd::snd_DumpOutputCaptureBuffer(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_0071b030;
  snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b030 + -0x7f84));
  snd_Printf((char)*(undefined4 *)(puVar1 + -0x7f80));
  return;
}



//==== 006250a4  ns=989snd  size=0xf8
// sig: undefined snd_SynthGetVoiceType(void)
// callers(1): 006218e0 FUN_006218e0
// callees(1): 0061948c 989snd::snd_Printf
// strings: 0066d5f8: 'snd_SynthGetVoiceType(): Data type %d is not recognized by this synthesizer (BRB)!\n'

undefined8 989snd::snd_SynthGetVoiceType(uint param_1)

{
  undefined8 uVar1;
  
  uVar1 = 3;
  if (param_1 != 3) {
    if (param_1 < 4) {
      if (param_1 == 1) {
        return 1;
      }
      if (param_1 < 2) {
        return 0;
      }
    }
    else {
      if (param_1 == 0x80000000) {
        return 1;
      }
      if (param_1 < 0x80000001) {
        if (param_1 == 4) {
          return 4;
        }
LAB_00625168:
        snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b030 + -0x7f7c));
        return 0xffffffff;
      }
      if (param_1 == 0x80000001) {
        return 0;
      }
      if (param_1 != 0x80000002) goto LAB_00625168;
    }
    uVar1 = 2;
  }
  return uVar1;
}



//==== 0062519c  ns=Global  size=0xb0
// sig: undefined FUN_0062519c(void)
// callers(12): 0062524c FUN_0062524c; 006252e0 FUN_006252e0; 00625bd0 FUN_00625bd0; 00626670 FUN_00626670; 00626884 FUN_00626884; 00626a3c FUN_00626a3c; 00626bb4 FUN_00626bb4; 00626cb4 989snd::snd_SynthLR1Insert; 00626e80 989snd::snd_SynthLR1Destroy; 00627c40 FUN_00627c40; 0062a394 FUN_0062a394; 0062db94 FUN_0062db94
// callees(1): 0061948c 989snd::snd_Printf
// strings: 0066d690: 'common/boomrang/snd_synth_interface.cpp' | 0066d650: '%s(%d) : s_FindEffectSlotByHandle(): LR1 instance not found!\n'

int FUN_0062519c(int param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = -1;
  if (param_1 != 0) {
    iVar2 = 0;
    lVar3 = 8;
    piVar1 = *(int **)(PTR_PTR_0071b030 + -0x7fd4);
    do {
      if (*piVar1 == param_1) {
        if (-1 < iVar2) {
          return iVar2;
        }
        goto LAB_006251f4;
      }
      iVar2 = iVar2 + 1;
      lVar3 = lVar3 + -1;
      piVar1 = piVar1 + 4;
    } while (lVar3 != 0);
    iVar2 = -1;
LAB_006251f4:
    989snd::snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b030 + -0x7f78));
  }
  return iVar2;
}



//==== 0062524c  ns=Global  size=0x94
// sig: undefined FUN_0062524c(void)
// callers(1): 00606738 FUN_00606738
// callees(2): 0061948c 989snd::snd_Printf; 0062519c FUN_0062519c
// strings: 0066d6b8: '%s(%d) : Invalid parameter.\n' | 0066d690: 'common/boomrang/snd_synth_interface.cpp'

void FUN_0062524c(int param_1)

{
  undefined *puVar1;
  ulonglong uVar2;
  
  puVar1 = PTR_PTR_0071b030;
  if (param_1 == 0) {
    989snd::snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b030 + -0x7f70));
    if (**(char **)(puVar1 + -0x7f6c) != '\0') {
      return;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar1 + -0x7f68),0);
  }
  uVar2 = FUN_0062519c(param_1);
  if (-1 < (int)uVar2) {
    *(undefined1 *)((int)((uVar2 & 0xffffffff) << 4) + *(int *)(puVar1 + -0x7fd4) + 0xd) = 1;
  }
  return;
}



//==== 006252e0  ns=Global  size=0x94
// sig: undefined FUN_006252e0(void)
// callers(1): 0060675c FUN_0060675c
// callees(2): 0061948c 989snd::snd_Printf; 0062519c FUN_0062519c
// strings: 0066d6b8: '%s(%d) : Invalid parameter.\n' | 0066d690: 'common/boomrang/snd_synth_interface.cpp'

void FUN_006252e0(int param_1)

{
  undefined *puVar1;
  ulonglong uVar2;
  
  puVar1 = PTR_PTR_0071b030;
  if (param_1 == 0) {
    989snd::snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b030 + -0x7f70));
    if (**(char **)(puVar1 + -0x7f6c) != '\0') {
      return;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar1 + -0x7f68),0);
  }
  uVar2 = FUN_0062519c(param_1);
  if (-1 < (int)uVar2) {
    *(undefined1 *)((int)((uVar2 & 0xffffffff) << 4) + *(int *)(puVar1 + -0x7fd4) + 0xc) = 1;
  }
  return;
}



//==== 00625374  ns=Global  size=0xb0
// sig: undefined FUN_00625374(void)
// callers(1): 00606780 FUN_00606780
// callees(2): 0061948c 989snd::snd_Printf; 00624590 FUN_00624590
// strings: 0066d6b8: '%s(%d) : Invalid parameter.\n' | 0066d690: 'common/boomrang/snd_synth_interface.cpp'

undefined4 FUN_00625374(uint param_1)

{
  undefined *puVar1;
  ulonglong uVar2;
  
  puVar1 = PTR_PTR_0071b030;
  if (8 < param_1) {
    989snd::snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b030 + -0x7f70));
    if (**(char **)(puVar1 + -0x7f6c) != '\0') {
      return 0;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar1 + -0x7f68),0);
  }
  uVar2 = FUN_00624590(param_1);
  if ((int)uVar2 < 0) {
    return 0;
  }
  return *(undefined4 *)(*(int *)(puVar1 + -0x7fd4) + (int)((uVar2 & 0xffffffff) << 4));
}



//==== 00625424  ns=Global  size=0x460
// sig: undefined FUN_00625424(void)
// callers(1): 0061c628 FUN_0061c628
// callees(1): 0061948c 989snd::snd_Printf
// strings: 0066d6b8: '%s(%d) : Invalid parameter.\n' | 0066d690: 'common/boomrang/snd_synth_interface.cpp'

/* WARNING: Type propagation algorithm not settling */

void FUN_00625424(uint *param_1,uint *param_2)

{
  bool bVar1;
  uint uVar2;
  bool bVar3;
  undefined *puVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  
  puVar4 = PTR_PTR_0071b030;
  if ((param_1 == (uint *)0x0) || (param_2 == (uint *)0x0)) {
    989snd::snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b030 + -0x7f70));
    if (**(char **)(puVar4 + -0x7f6c) != '\0') {
      return;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar4 + -0x7f68),0);
  }
  *param_1 = *param_1 | *param_2;
  uVar2 = *param_2;
  if ((uVar2 & 1) == 0) {
    param_1[1] = param_1[1];
    param_1[2] = param_1[2];
    param_1[3] = param_1[3];
    param_1[4] = param_1[4];
  }
  else {
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    param_1[3] = param_2[3];
    param_1[4] = param_2[4];
  }
  if ((uVar2 & 2) == 0) {
    param_1[5] = param_1[5];
    param_1[6] = param_1[6];
    param_1[7] = param_1[7];
    param_1[8] = param_1[8];
  }
  else {
    param_1[5] = param_2[5];
    param_1[6] = param_2[6];
    param_1[7] = param_2[7];
    param_1[8] = param_2[8];
  }
  if ((uVar2 & 4) == 0) {
    param_1[9] = param_1[9];
    param_1[10] = param_1[10];
    param_1[0xb] = param_1[0xb];
    param_1[0xc] = param_1[0xc];
  }
  else {
    param_1[9] = param_2[9];
    param_1[10] = param_2[10];
    param_1[0xb] = param_2[0xb];
    param_1[0xc] = param_2[0xc];
  }
  if ((uVar2 & 8) == 0) {
    param_1[0xd] = param_1[0xd];
    param_1[0xe] = param_1[0xe];
    param_1[0xf] = param_1[0xf];
    param_1[0x10] = param_1[0x10];
  }
  else {
    param_1[0xd] = param_2[0xd];
    param_1[0xe] = param_2[0xe];
    param_1[0xf] = param_2[0xf];
    param_1[0x10] = param_2[0x10];
  }
  if ((uVar2 & 0x10) == 0) {
    param_1[0x11] = param_1[0x11];
    param_1[0x12] = param_1[0x12];
    param_1[0x13] = param_1[0x13];
  }
  else {
    param_1[0x11] = param_2[0x11];
    param_1[0x12] = param_2[0x12];
    param_1[0x13] = param_2[0x13];
  }
  if ((uVar2 & 0x80) == 0) {
    uVar6 = param_1[0x1a];
  }
  else {
    uVar6 = param_2[0x1a];
  }
  param_1[0x1a] = uVar6;
  puVar8 = param_2 + 0x1b;
  if ((uVar2 & 0x100) == 0) {
    puVar8 = param_1 + 0x1b;
  }
  param_1[0x1b] = *puVar8;
  param_1[0x1c] = puVar8[1];
  param_1[0x1d] = puVar8[2];
  param_1[0x1e] = puVar8[3];
  if ((uVar2 & 0x200) == 0) {
    param_1[0x1f] = param_1[0x1f];
  }
  else {
    param_1[0x1f] = param_2[0x1f];
  }
  if ((uVar2 & 0x400) == 0) {
    uVar6 = param_1[0x20];
  }
  else {
    uVar6 = param_2[0x20];
  }
  puVar8 = param_1 + 0x24;
  param_1[0x20] = uVar6;
  bVar3 = (uVar2 & 0x400) == 0;
  iVar7 = 0;
  do {
    if (bVar3) {
      uVar6 = puVar8[3];
    }
    else {
      uVar6 = *(uint *)((int)param_2 + iVar7 + 0x9c);
    }
    puVar8[3] = uVar6;
    if (bVar3) {
      uVar5 = *(undefined4 *)((int)param_1 + iVar7 + 0x84);
    }
    else {
      uVar5 = *(undefined4 *)((int)param_2 + iVar7 + 0x84);
    }
    *(undefined4 *)((int)param_1 + iVar7 + 0x84) = uVar5;
    if (bVar3) {
      *puVar8 = *puVar8;
      if (bVar3) goto LAB_006257f0;
LAB_0062562c:
      uVar5 = *(undefined4 *)((int)param_2 + iVar7 + 0xa8);
    }
    else {
      *puVar8 = *(uint *)((int)param_2 + iVar7 + 0x90);
      if (!bVar3) goto LAB_0062562c;
LAB_006257f0:
      uVar5 = *(undefined4 *)((int)param_1 + iVar7 + 0xa8);
    }
    bVar1 = iVar7 != 8;
    puVar8 = puVar8 + 1;
    *(undefined4 *)((int)param_1 + iVar7 + 0xa8) = uVar5;
    iVar7 = iVar7 + 4;
  } while (bVar1);
  param_1 = param_1 + 0x17;
  iVar7 = 0;
  bVar3 = (uVar2 & 0x40) != 0;
  do {
    puVar8 = param_1 + -3;
    if ((uVar2 & 0x20) == 0) {
      *puVar8 = *puVar8;
      if (!bVar3) goto LAB_0062582c;
LAB_00625694:
      uVar6 = *(uint *)((int)param_2 + iVar7 + 0x5c);
    }
    else {
      *puVar8 = *(uint *)((int)param_2 + iVar7 + 0x50);
      if (bVar3) goto LAB_00625694;
LAB_0062582c:
      uVar6 = *param_1;
    }
    bVar1 = iVar7 == 8;
    *param_1 = uVar6;
    iVar7 = iVar7 + 4;
    param_1 = param_1 + 1;
    if (bVar1) {
      return;
    }
  } while( true );
}



//==== 00625884  ns=Global  size=0x134
// sig: undefined FUN_00625884(void)
// callers(1): 0061c280 FUN_0061c280
// callees(1): 0061948c 989snd::snd_Printf
// strings: 0066d6b8: '%s(%d) : Invalid parameter.\n' | 0066d690: 'common/boomrang/snd_synth_interface.cpp'

void FUN_00625884(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_0071b030;
  if (param_1 == (undefined4 *)0x0) {
    989snd::snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b030 + -0x7f70));
    if (**(char **)(puVar2 + -0x7f6c) != '\0') {
      return;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar2 + -0x7f68),0);
  }
  uVar1 = *(undefined4 *)(puVar2 + -0x7f64);
  param_1[1] = 0;
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
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *param_1 = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x1a] = uVar1;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = uVar1;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x2c] = uVar1;
  param_1[0x29] = 0;
  param_1[0x26] = 0;
  param_1[0x20] = 0;
  param_1[0x27] = 0;
  param_1[0x21] = 0;
  param_1[0x24] = 0;
  param_1[0x2a] = uVar1;
  param_1[0x28] = 0;
  param_1[0x22] = 0;
  param_1[0x25] = 0;
  param_1[0x2b] = uVar1;
  param_1[0x23] = 0;
  return;
}



//==== 006259b8  ns=989snd  size=0x6c
// sig: undefined snd_SynthSetMasterEQBand(void)
// callers(1): 006234f4 FUN_006234f4
// callees(1): 0061948c 989snd::snd_Printf
// strings: 0066d6b8: '%s(%d) : Invalid parameter.\n' | 0066d690: 'common/boomrang/snd_synth_interface.cpp' | 0066d6d8: 'snd_SynthSetMasterEQBand(BOOMRANG): This function is not yet implemented!\n'

void 989snd::snd_SynthSetMasterEQBand(uint param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_0071b030;
  if (3 < param_1) {
    snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b030 + -0x7f70));
    if (**(char **)(puVar1 + -0x7f6c) != '\0') {
      return;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar1 + -0x7f68),0);
  }
  snd_Printf((char)*(undefined4 *)(puVar1 + -0x7f5c));
  return;
}



//==== 00625a24  ns=Global  size=0x50
// sig: undefined FUN_00625a24(void)
// callers(0): 
// callees(1): 00648b10 idol::brbVoice_ConnectPort

void FUN_00625a24(int param_1,int param_2)

{
  idol::brbVoice_ConnectPort
            (*(undefined4 *)(*(int *)(PTR_PTR_0071b030 + -0x7f90) + param_1 * 4),2,
             *(undefined4 *)(*(int *)(PTR_PTR_0071b030 + -0x7f90) + param_2 * 4));
  return;
}



//==== 00625a74  ns=Global  size=0xac
// sig: undefined FUN_00625a74(void)
// callers(0): 
// callees(1): 00640d2c FUN_00640d2c

int FUN_00625a74(uint param_1,int param_2,uint param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  if (3 < param_1) {
    param_1 = 3;
  }
  uVar1 = *(uint *)(*(int *)(PTR_PTR_0071b030 + -0x7f58) + param_1 * 4);
  if ((uVar1 < 3) || (uVar3 = uVar1 + 3 & 0xfffffffc, param_4 == 0)) {
    uVar3 = uVar1;
  }
  iVar2 = FUN_00640d2c();
  return uVar3 * (((param_3 & 0xff) - 1 >> 0x1e & 2) + 2) * iVar2 * param_2;
}



//==== 00625b20  ns=Global  size=0xb0
// sig: undefined FUN_00625b20(void)
// callers(1): 006232d8 989snd::snd_RelocateBank
// callees(1): 006426c0 FUN_006426c0

undefined4
FUN_00625b20(undefined4 param_1,undefined4 param_2,uint param_3,uint param_4,undefined4 param_5)

{
  char *pcVar1;
  undefined *puVar2;
  undefined4 uVar3;
  char cVar4;
  
  puVar2 = PTR_PTR_0071b030;
  uVar3 = 0;
  pcVar1 = *(char **)(PTR_PTR_0071b030 + -0x7fa4);
  if (*pcVar1 == '\0') {
    *pcVar1 = '\x01';
    pcVar1[1] = '\0';
    *(uint *)(pcVar1 + 4) = param_3;
    *(uint *)(pcVar1 + 8) = param_4;
    *(undefined4 *)(pcVar1 + 0xc) = param_1;
    *(undefined4 *)(pcVar1 + 0x10) = param_2;
    *(undefined4 *)(pcVar1 + 0x18) = param_5;
    if (param_3 < param_4) {
      *(uint *)(pcVar1 + 0x14) = param_4 - param_3;
    }
    else {
      *(uint *)(pcVar1 + 0x14) = param_4 - param_3;
    }
    cVar4 = FUN_006426c0(*(undefined4 *)(puVar2 + -0x7f54),pcVar1,1);
    uVar3 = 1;
    if (cVar4 == '\0') {
      uVar3 = 0;
      *pcVar1 = '\0';
    }
  }
  return uVar3;
}



//==== 00625bd0  ns=Global  size=0xb8
// sig: undefined FUN_00625bd0(void)
// callers(1): 0062a4c8 989snd::snd_SynthSetSpeakerMode
// callees(3): 0062519c FUN_0062519c; 00647ed0 FUN_00647ed0; 00647f34 FUN_00647f34

/* WARNING: Removing unreachable block (ram,0x00625c2c) */
/* WARNING: Removing unreachable block (ram,0x00625c74) */
/* WARNING: Removing unreachable block (ram,0x00625c40) */
/* WARNING: Removing unreachable block (ram,0x00625c4c) */

void FUN_00625bd0(void)

{
  undefined *puVar1;
  ulonglong uVar2;
  undefined1 local_20 [16];
  
  puVar1 = PTR_PTR_0071b030;
  uVar2 = FUN_0062519c();
  if (-1 < (int)uVar2) {
    FUN_00647ed0(*(undefined4 *)(*(int *)(puVar1 + -0x7fd4) + (int)((uVar2 & 0xffffffff) << 4)),
                 local_20);
  }
  return;
}



//==== 00625c88  ns=Global  size=0xf0
// sig: undefined FUN_00625c88(void)
// callers(2): 0062de84 FUN_0062de84; 0062ee18 FUN_0062ee18
// callees(3): 005cd098 libc::printf; 006486f8 FUN_006486f8; 00648730 FUN_00648730
// strings: 0066d728: 'voice->LockModuleParams(iSampler::kMID_DISTORTION, &pparams) failed (returned %i)\n'

/* WARNING: Removing unreachable block (ram,0x00625d0c) */

int FUN_00625c88(int param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined1 local_3c [4];
  undefined1 local_38 [16];
  
  puVar1 = PTR_PTR_0071b030;
  iVar2 = *(int *)(param_1 + 0x70);
  if (iVar2 == 0) {
    iVar2 = *(int *)(param_1 + 0x6c);
  }
  iVar2 = FUN_00648730(iVar2,local_3c,local_38);
  if (iVar2 != 0) {
    iVar2 = libc::printf(*(char **)(puVar1 + -0x7f4c),iVar2);
  }
  return iVar2;
}



//==== 00625d80  ns=Global  size=0xd8
// sig: undefined FUN_00625d80(void)
// callers(1): 00625f8c FUN_00625f8c
// callees(3): 005cd098 libc::printf; 0061948c 989snd::snd_Printf; 00648b10 idol::brbVoice_ConnectPort
// strings: 0066d7a8: 'ERROR: illegal aux send destination: %i\n' | 0066d7d8: 'voice->ConnectPort(brbPluginClass::SidePort0 + sendIndex, s_auxBussVoices[dest]) failed (returned %i)\n' | 0066d780: 'ERROR: illegal aux send index: %i\n'

ulonglong FUN_00625d80(int param_1,uint param_2,uint param_3)

{
  int iVar1;
  undefined *puVar2;
  ulonglong uVar3;
  int32_t iVar4;
  
  puVar2 = PTR_PTR_0071b030;
  iVar1 = *(int *)(param_1 + 0x70);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x6c);
  }
  if (param_2 < 3) {
    if (param_3 < 8) {
      uVar3 = idol::brbVoice_ConnectPort
                        (iVar1,param_2 + 2,
                         *(undefined4 *)(*(int *)(PTR_PTR_0071b030 + -0x7f40) + param_3 * 4));
      if ((int)uVar3 != 0) {
        iVar4 = libc::printf(*(char **)(puVar2 + -0x7f3c),(int)uVar3);
        return (longlong)iVar4;
      }
    }
    else {
      uVar3 = (ulonglong)*(uint *)(PTR_PTR_0071b030 + -0x7f44);
      989snd::snd_Printf((char)*(uint *)(PTR_PTR_0071b030 + -0x7f44));
    }
    return uVar3;
  }
  uVar3 = (ulonglong)*(uint *)(PTR_PTR_0071b030 + -0x7f48);
  989snd::snd_Printf((char)*(uint *)(PTR_PTR_0071b030 + -0x7f48));
  return uVar3;
}



//==== 00625e58  ns=Global  size=0x12c
// sig: undefined FUN_00625e58(void)
// callers(1): 00625f8c FUN_00625f8c
// callees(4): 005cd098 libc::printf; 0061948c 989snd::snd_Printf; 006486f8 FUN_006486f8; 00648730 FUN_00648730
// strings: 0066d780: 'ERROR: illegal aux send index: %i\n' | 0066d840: 'voice->LockModuleParams(modID, &pparams) failed (returned %i)\n'

/* WARNING: Removing unreachable block (ram,0x00625f20) */

void FUN_00625e58(int param_1,uint param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined1 local_2c [8];
  undefined1 local_24 [4];
  
  puVar1 = PTR_PTR_0071b030;
  iVar2 = *(int *)(param_1 + 0x70);
  if (iVar2 == 0) {
    iVar2 = *(int *)(param_1 + 0x6c);
  }
  if (param_2 < 3) {
    iVar2 = FUN_00648730(iVar2,local_2c,local_24);
    if (iVar2 != 0) {
      libc::printf(*(char **)(puVar1 + -0x7f38),iVar2);
    }
  }
  else {
    989snd::snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b030 + -0x7f48));
  }
  return;
}



//==== 00625f8c  ns=Global  size=0x3c8
// sig: undefined FUN_00625f8c(void)
// callers(2): 0061fa5c FUN_0061fa5c; 0062de84 FUN_0062de84
// callees(3): 0061948c 989snd::snd_Printf; 00625d80 FUN_00625d80; 00625e58 FUN_00625e58
// strings: 0066d6b8: '%s(%d) : Invalid parameter.\n' | 0066d690: 'common/boomrang/snd_synth_interface.cpp'

void FUN_00625f8c(double param_1,double param_2,double param_3,double param_4,float *param_5)

{
  bool bVar1;
  float fVar2;
  undefined *puVar3;
  float fVar5;
  ulonglong uVar4;
  uint *in_r8;
  float fVar6;
  uint in_r9;
  int iVar7;
  ulonglong uVar8;
  int iVar9;
  float *pfVar10;
  byte in_cr0;
  byte in_cr1;
  byte in_cr2;
  byte in_cr3;
  byte bVar11;
  byte unaff_cr4;
  byte in_cr5;
  byte in_cr6;
  byte in_cr7;
  double dVar12;
  double dVar13;
  uint uStack00000008;
  
  puVar3 = PTR_PTR_0071b030;
  uStack00000008 =
       (uint)(in_cr0 & 0xf) << 0x1c | (uint)(in_cr1 & 0xf) << 0x18 | (uint)(in_cr2 & 0xf) << 0x14 |
       (uint)(in_cr3 & 0xf) << 0x10 | (uint)(unaff_cr4 & 0xf) << 0xc | (uint)(in_cr5 & 0xf) << 8 |
       (uint)(in_cr6 & 0xf) << 4 | (uint)(in_cr7 & 0xf);
  if ((((((param_5 == (float *)0x0) ||
         (dVar12 = (double)*(float *)(PTR_PTR_0071b030 + -0x7fac), param_1 < dVar12)) ||
        (dVar13 = (double)*(float *)(PTR_PTR_0071b030 + -0x7f64), dVar13 < param_1)) ||
       ((param_2 < dVar12 || (dVar13 < param_2)))) ||
      ((param_3 < dVar12 || ((dVar13 < param_3 || (param_4 < dVar12)))))) || (dVar13 < param_4)) {
    989snd::snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b030 + -0x7f70));
    if (**(char **)(puVar3 + -0x7f6c) != '\0') {
      return;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar3 + -0x7f68),0);
  }
  pfVar10 = (float *)(in_r8 + 0x14);
  uVar8 = 0;
  bVar11 = ((in_r9 & 8) == 0) << 1;
  bVar1 = in_r8 == (uint *)0x0;
  do {
    iVar9 = (int)uVar8;
    iVar7 = iVar9 >> 0x1f;
    if (bVar1) {
      uVar4 = ((longlong)iVar9 / 3 + ((longlong)iVar9 >> 0x3f) & 0xffffffffU) - (longlong)iVar7;
      iVar7 = (int)((uVar8 - ((uVar4 & 0x7fffffff) * 2 + uVar4) & 0xffffffff) << 2);
      fVar6 = *(float *)((int)param_5 + iVar7 + 0x14);
      dVar12 = (double)(float)((double)(float)(param_1 *
                                              (double)*(float *)((int)param_5 + iVar7 + 8)) *
                              param_4);
    }
    else {
      if ((*in_r8 & 0x40) == 0) {
        uVar4 = ((longlong)iVar9 / 3 + ((longlong)iVar9 >> 0x3f) & 0xffffffffU) - (longlong)iVar7;
        fVar6 = *(float *)((int)param_5 +
                          (int)((uVar8 - ((uVar4 & 0x7fffffff) * 2 + uVar4) & 0xffffffff) << 2) +
                          0x14);
      }
      else {
        fVar6 = pfVar10[3];
      }
      if ((bool)(bVar11 >> 1 & 1)) {
        if ((*in_r8 & 0x20) == 0) {
          uVar4 = ((longlong)iVar9 / 3 + ((longlong)iVar9 >> 0x3f) & 0xffffffffU) - (longlong)iVar7;
          dVar12 = (double)(float)(param_4 *
                                  (double)(float)(param_1 *
                                                 (double)*(float *)((int)param_5 +
                                                                   (int)((uVar8 - ((uVar4 & 
                                                  0x7fffffff) * 2 + uVar4) & 0xffffffff) << 2) + 8))
                                  );
        }
        else {
          dVar12 = (double)(float)(param_4 * (double)(float)(param_1 * (double)*pfVar10));
        }
      }
      else {
        dVar12 = (double)*(float *)(puVar3 + -0x7fac);
      }
    }
    uVar4 = uVar8 & 0xffffffff;
    uVar8 = uVar8 + 1;
    FUN_00625d80(param_5,uVar4,fVar6);
    pfVar10 = pfVar10 + 1;
    FUN_00625e58(dVar12,param_5,uVar4);
  } while (uVar8 != 3);
  if (bVar1) {
    fVar5 = (float)(param_1 * param_3);
    fVar6 = 0.0;
  }
  else {
    fVar5 = *(float *)(puVar3 + -0x7fac);
    if ((in_r9 & 4) == 0) {
      fVar5 = (float)(param_3 * (double)(float)(param_1 * (double)(float)in_r8[0x1a]));
    }
    fVar6 = 0.0;
    if ((in_r9 & 0x10) != 0) {
      fVar6 = (float)(param_2 * (double)(float)(param_1 * (double)(float)in_r8[0x1f]));
    }
  }
  fVar2 = param_5[0xb];
  *param_5 = fVar5;
  param_5[1] = fVar6;
  if (fVar2 != 0.0) {
    uVar8 = (ulonglong)(uint)fVar2;
    iVar7 = 0;
    if (fVar2 == 0.0) {
      uVar8 = 1;
    }
    do {
      while (bVar1) {
        *(undefined4 *)((int)param_5 + iVar7 + 0x54) = 0;
        *(float *)((int)param_5 + iVar7 + 0x48) = (float)(param_1 * param_3);
        uVar8 = uVar8 - 1;
        iVar7 = iVar7 + 4;
        if (uVar8 == 0) goto LAB_006261ac;
      }
      if ((in_r9 & 4) == 0) {
        fVar6 = (float)(param_3 *
                       (double)(float)(param_1 * (double)*(float *)((int)in_r8 + iVar7 + 0x9c)));
      }
      else {
        fVar6 = *(float *)(puVar3 + -0x7fac);
      }
      fVar5 = 0.0;
      if ((in_r9 & 0x10) != 0) {
        fVar5 = (float)((double)(float)(param_1 * (double)*(float *)((int)in_r8 + iVar7 + 0xa8)) *
                       param_2);
      }
      *(float *)((int)param_5 + iVar7 + 0x54) = fVar5;
      *(float *)((int)param_5 + iVar7 + 0x48) = fVar6;
      uVar8 = uVar8 - 1;
      iVar7 = iVar7 + 4;
    } while (uVar8 != 0);
  }
LAB_006261ac:
  *(undefined1 *)((int)param_5 + 0x6a) = 1;
  return;
}



//==== 00626354  ns=Global  size=0xd8
// sig: undefined FUN_00626354(void)
// callers(1): 00626434 FUN_00626434
// callees(3): 005cd098 libc::printf; 006486f8 FUN_006486f8; 00648730 FUN_00648730
// strings: 0066d880: 'voice->LockModuleParams(iSampler::kMID_PITCH, &pparams) failed (returned %i)\n'

/* WARNING: Removing unreachable block (ram,0x006263b8) */
/* WARNING: Removing unreachable block (ram,0x00626408) */
/* WARNING: Removing unreachable block (ram,0x00626414) */
/* WARNING: Removing unreachable block (ram,0x006263c4) */
/* WARNING: Removing unreachable block (ram,0x006263c8) */

int FUN_00626354(int param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined1 local_2c [4];
  undefined1 local_28 [16];
  
  puVar1 = PTR_PTR_0071b030;
  iVar2 = FUN_00648730(*(undefined4 *)(param_1 + 0x6c),local_2c,local_28);
  if (iVar2 != 0) {
    iVar2 = libc::printf(*(char **)(puVar1 + -0x7f34),iVar2);
  }
  return iVar2;
}



//==== 00626434  ns=Global  size=0xc8
// sig: undefined FUN_00626434(void)
// callers(1): 0061fa5c FUN_0061fa5c
// callees(2): 0061948c 989snd::snd_Printf; 00626354 FUN_00626354
// strings: 0066d6b8: '%s(%d) : Invalid parameter.\n' | 0066d690: 'common/boomrang/snd_synth_interface.cpp'

void FUN_00626434(double param_1,int param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_0071b030;
  if (param_2 != 0) {
    FUN_00626354((double)(float)(param_1 / (double)*(float *)(PTR_PTR_0071b030 + -0x7f20)),param_2,
                 param_3,0xfa6);
    return;
  }
  989snd::snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b030 + -0x7f70));
  if (**(char **)(puVar1 + -0x7f6c) == '\0') {
    trapWord(0x18,(ulonglong)**(byte **)(puVar1 + -0x7f68),0);
    FUN_00626354((double)(float)(param_1 / (double)*(float *)(puVar1 + -0x7f20)),0);
    return;
  }
  return;
}



//==== 006264fc  ns=Global  size=0x164
// sig: undefined FUN_006264fc(void)
// callers(1): 0062a4c8 989snd::snd_SynthSetSpeakerMode
// callees(3): 005cd098 libc::printf; 006486f8 FUN_006486f8; 00648730 FUN_00648730
// strings: 0066d8d0: 'voice->LockModuleParams( iSampler::kMID_OUTMIXER_SETUP, &pParams ) failed (returned %i)\n' | 0066d930: 'voice->LockModuleParams( iSampler::kMID_OUTMIXER_PAN, &pParams ) failed (returned %i)\n'

/* WARNING: Removing unreachable block (ram,0x0062656c) */
/* WARNING: Removing unreachable block (ram,0x00626618) */
/* WARNING: Removing unreachable block (ram,0x0062657c) */
/* WARNING: Removing unreachable block (ram,0x0062658c) */
/* WARNING: Removing unreachable block (ram,0x006265e0) */

int FUN_006264fc(int param_1)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  undefined1 local_3c [8];
  undefined1 local_34 [4];
  undefined1 local_30 [24];
  
  puVar1 = PTR_PTR_0071b030;
  iVar3 = *(int *)(param_1 + 0x70);
  if (iVar3 == 0) {
    iVar3 = *(int *)(param_1 + 0x6c);
  }
  iVar2 = FUN_00648730(iVar3,local_3c,local_30);
  if (iVar2 != 0) {
    libc::printf(*(char **)(puVar1 + -0x7f18),iVar2);
  }
  iVar3 = FUN_00648730(iVar3,local_34,local_30);
  if (iVar3 != 0) {
    iVar3 = libc::printf(*(char **)(puVar1 + -0x7f14),iVar3);
  }
  return iVar3;
}



//==== 00626670  ns=Global  size=0x1d4
// sig: undefined FUN_00626670(void)
// callers(1): 0062359c FUN_0062359c
// callees(6): 0061948c 989snd::snd_Printf; 0062519c FUN_0062519c; 00647ed0 FUN_00647ed0; 00647f34 FUN_00647f34; 0064842c FUN_0064842c; 00648b10 idol::brbVoice_ConnectPort
// strings: 0066d6b8: '%s(%d) : Invalid parameter.\n' | 0066d690: 'common/boomrang/snd_synth_interface.cpp'

/* WARNING: Removing unreachable block (ram,0x0062671c) */
/* WARNING: Removing unreachable block (ram,0x00626734) */
/* WARNING: Removing unreachable block (ram,0x0062682c) */
/* WARNING: Removing unreachable block (ram,0x00626768) */
/* WARNING: Removing unreachable block (ram,0x00626788) */
/* WARNING: Removing unreachable block (ram,0x006267a4) */

void FUN_00626670(int param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  undefined *puVar1;
  ulonglong uVar2;
  undefined1 local_80 [24];
  
  puVar1 = PTR_PTR_0071b030;
  if ((param_1 == 0) || (3 < param_4)) {
    989snd::snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b030 + -0x7f70));
    if (**(char **)(puVar1 + -0x7f6c) != '\0') {
      return;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar1 + -0x7f68),0);
  }
  uVar2 = FUN_0062519c(param_1);
  if (-1 < (int)uVar2) {
    FUN_00647ed0(*(undefined4 *)(*(int *)(puVar1 + -0x7fd4) + (int)((uVar2 & 0xffffffff) << 4)),
                 local_80);
  }
  return;
}



//==== 00626844  ns=Global  size=0x40
// sig: undefined FUN_00626844(void)
// callers(1): 00606894 FUN_00606894
// callees(1): 00623578 FUN_00623578

void FUN_00626844(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  FUN_00623578(param_1,0,param_3,param_4,param_4,param_5,param_6,param_7);
  return;
}



//==== 00626884  ns=Global  size=0x1b8
// sig: undefined FUN_00626884(void)
// callers(1): 0060637c FUN_0060637c
// callees(4): 0061948c 989snd::snd_Printf; 0062519c FUN_0062519c; 00647ed0 FUN_00647ed0; 00647f34 FUN_00647f34
// strings: 0066d690: 'common/boomrang/snd_synth_interface.cpp' | 0066d6b8: '%s(%d) : Invalid parameter.\n'

/* WARNING: Removing unreachable block (ram,0x00626980) */

void FUN_00626884(int param_1,int param_2)

{
  undefined *puVar1;
  ulonglong uVar2;
  undefined1 local_60 [72];
  
  puVar1 = PTR_PTR_0071b030;
  if ((param_1 == 0) || (param_2 == 0)) {
    989snd::snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b030 + -0x7f70));
    if (**(char **)(puVar1 + -0x7f6c) != '\0') {
      return;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar1 + -0x7f68),0);
  }
  uVar2 = FUN_0062519c(param_1);
  if (-1 < (int)uVar2) {
    FUN_00647ed0(*(undefined4 *)(*(int *)(puVar1 + -0x7fd4) + (int)((uVar2 & 0xffffffff) << 4)),
                 local_60);
  }
  return;
}



//==== 00626a3c  ns=Global  size=0x178
// sig: undefined FUN_00626a3c(void)
// callers(1): 006069a0 FUN_006069a0
// callees(4): 0061948c 989snd::snd_Printf; 0062519c FUN_0062519c; 00647ed0 FUN_00647ed0; 00647f34 FUN_00647f34
// strings: 0066d690: 'common/boomrang/snd_synth_interface.cpp' | 0066d6b8: '%s(%d) : Invalid parameter.\n'

/* WARNING: Removing unreachable block (ram,0x00626ad8) */

void FUN_00626a3c(int param_1,uint param_2)

{
  undefined *puVar1;
  ulonglong uVar2;
  undefined1 local_50 [16];
  
  puVar1 = PTR_PTR_0071b030;
  if ((param_1 == 0) || (0x21 < param_2)) {
    989snd::snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b030 + -0x7f70));
    if (**(char **)(puVar1 + -0x7f6c) != '\0') {
      return;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar1 + -0x7f68),0);
  }
  uVar2 = FUN_0062519c(param_1);
  if (-1 < (int)uVar2) {
    FUN_00647ed0(*(undefined4 *)(*(int *)(puVar1 + -0x7fd4) + (int)((uVar2 & 0xffffffff) << 4)),
                 local_50);
  }
  return;
}



//==== 00626bb4  ns=Global  size=0x100
// sig: undefined FUN_00626bb4(void)
// callers(2): 006235e4 FUN_006235e4; 00626e80 989snd::snd_SynthLR1Destroy
// callees(5): 0061948c 989snd::snd_Printf; 0062519c FUN_0062519c; 00647dd0 FUN_00647dd0; 0064842c FUN_0064842c; 00648588 FUN_00648588
// strings: 0066d690: 'common/boomrang/snd_synth_interface.cpp' | 0066d6b8: '%s(%d) : Invalid parameter.\n'

void FUN_00626bb4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined *puVar5;
  ulonglong uVar6;
  int iVar7;
  
  puVar5 = PTR_PTR_0071b030;
  if (param_1 == 0) {
    989snd::snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b030 + -0x7f70));
    if (**(char **)(puVar5 + -0x7f6c) != '\0') {
      return;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar5 + -0x7f68),0);
  }
  uVar6 = FUN_0062519c(param_1);
  iVar4 = (int)((uVar6 & 0xffffffff) << 4);
  if (-1 < (int)uVar6) {
    iVar7 = iVar4 + *(int *)(puVar5 + -0x7fd4);
    iVar1 = *(int *)(iVar7 + 8);
    if (-1 < iVar1) {
      uVar2 = *(undefined4 *)(*(int *)(puVar5 + -0x7fd4) + iVar4);
      uVar3 = *(undefined4 *)(*(int *)(puVar5 + -0x7f40) + iVar1 * 4);
      FUN_00647dd0(uVar3,0);
      FUN_0064842c(uVar3,1);
      FUN_00647dd0(uVar2,0);
      FUN_00648588(uVar2);
      *(undefined4 *)(iVar7 + 8) = 0xffffffff;
    }
  }
  return;
}



//==== 00626cb4  ns=989snd  size=0x1cc
// sig: undefined snd_SynthLR1Insert(void)
// callers(1): 00623608 FUN_00623608
// callees(6): 0061948c 989snd::snd_Printf; 00624590 FUN_00624590; 0062519c FUN_0062519c; 00647ed0 FUN_00647ed0; 00647fa0 FUN_00647fa0; 00648b10 idol::brbVoice_ConnectPort
// strings: 0066d988: 'snd_SynthLR1Insert(): Buss %d is already occupied!' | 0066d6b8: '%s(%d) : Invalid parameter.\n' | 0066d690: 'common/boomrang/snd_synth_interface.cpp'

/* WARNING: Removing unreachable block (ram,0x00626df8) */

void 989snd::snd_SynthLR1Insert(int param_1,ulonglong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  int iVar7;
  ulonglong uVar6;
  undefined1 local_40 [16];
  
  puVar5 = PTR_PTR_0071b030;
  if ((param_1 == 0) || (7 < (param_2 & 0xffffffff))) {
    snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b030 + -0x7f70));
    if (**(char **)(puVar5 + -0x7f6c) != '\0') {
      return;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar5 + -0x7f68),0);
    iVar7 = FUN_00624590(param_2 & 0xffffffff);
  }
  else {
    iVar7 = FUN_00624590(param_2 & 0xffffffff);
  }
  if (iVar7 < 0) {
    uVar6 = FUN_0062519c(param_1);
    if (-1 < (int)uVar6) {
      iVar3 = (int)((uVar6 & 0xffffffff) << 4);
      iVar4 = (int)((param_2 & 0xffffffff) << 2);
      iVar7 = *(int *)(puVar5 + -0x7f40);
      uVar1 = *(undefined4 *)(*(int *)(puVar5 + -0x7fd4) + iVar3);
      uVar2 = *(undefined4 *)(iVar7 + iVar4);
      *(int *)(iVar3 + *(int *)(puVar5 + -0x7fd4) + 8) = (int)param_2;
      idol::brbVoice_ConnectPort(uVar2,1,uVar1);
      FUN_00647ed0(*(undefined4 *)(iVar7 + iVar4),local_40);
      idol::brbVoice_ConnectPort(uVar1,1,**(undefined4 **)(puVar5 + -0x7fa0));
      FUN_00647ed0(uVar1,local_40);
      FUN_00647fa0(uVar1,0,0);
      return;
    }
  }
  else {
    snd_Printf((char)*(undefined4 *)(puVar5 + -0x7f0c));
  }
  return;
}



//==== 00626e80  ns=989snd  size=0x180
// sig: undefined snd_SynthLR1Destroy(void)
// callers(2): 006237c4 FUN_006237c4; 00627448 FUN_00627448
// callees(5): 005cd098 libc::printf; 0061948c 989snd::snd_Printf; 0062519c FUN_0062519c; 00626bb4 FUN_00626bb4; 00643884 FUN_00643884
// strings: 0066da28: 'brb_DestroyRackUnit( pru, synchronous, synchronous ? NULL : LR1DestroyedCB, g_effectList[slot].pVoice ) failed (returned %i)\n' | 0066d6b8: '%s(%d) : Invalid parameter.\n' | 0066d690: 'common/boomrang/snd_synth_interface.cpp' | 0066d9c0: 'snd_SynthLR1Destroy(): ERROR: A SndEventCallback must be set in order to use asynchronous destroy!\n'

void 989snd::snd_SynthLR1Destroy(int param_1,char param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined *puVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  
  puVar3 = PTR_PTR_0071b030;
  if (param_1 == 0) {
    snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b030 + -0x7f70));
    if (**(char **)(puVar3 + -0x7f6c) != '\0') {
      return;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar3 + -0x7f68),0);
  }
  if ((param_2 == '\0') && (**(int **)(puVar3 + -0x7fd0) == 0)) {
    snd_Printf((char)*(undefined4 *)(puVar3 + -0x7f08));
  }
  else {
    FUN_00626bb4(param_1);
    uVar4 = FUN_0062519c(param_1);
    if (-1 < (int)uVar4) {
      iVar2 = (int)((uVar4 & 0xffffffff) << 4);
      iVar5 = *(int *)(puVar3 + -0x7fd4);
      iVar6 = iVar2 + iVar5;
      uVar1 = *(undefined4 *)(iVar6 + 4);
      *(undefined4 *)(iVar6 + 8) = 0xffffffff;
      *(undefined1 *)(iVar6 + 0xc) = 0;
      *(undefined1 *)(iVar6 + 0xd) = 0;
      *(undefined4 *)(iVar6 + 4) = 0;
      if (param_2 == '\0') {
        iVar5 = FUN_00643884(uVar1,0,*(undefined4 *)(puVar3 + -0x7f04),
                             *(undefined4 *)(iVar5 + iVar2));
      }
      else {
        *(undefined4 *)(iVar5 + iVar2) = 0;
        iVar5 = FUN_00643884(uVar1,param_2,0,*(undefined4 *)(iVar5 + iVar2));
      }
      if (iVar5 != 0) {
        libc::printf(*(char **)(puVar3 + -0x7f00),iVar5);
      }
      if (param_2 != '\0') {
        **(int **)(puVar3 + -0x7fcc) = **(int **)(puVar3 + -0x7fcc) + -1;
      }
    }
  }
  return;
}



//==== 00627000  ns=989snd  size=0x1c0
// sig: undefined snd_SynthGetFreeVoiceBufferId(void)
// callers(1): 0062ba54 989snd::snd_SynthQueueVoiceBuffer
// callees(5): 005cd098 libc::printf; 0061948c 989snd::snd_Printf; 006246bc FUN_006246bc; 00640c9c FUN_00640c9c; 006487c0 FUN_006487c0
// strings: 0066daa8: 'snd_SynthGetFreeVoiceBufferId(): %s(%d) : Invalid voice context!\n' | 0066d690: 'common/boomrang/snd_synth_interface.cpp' | 0066db40: 'pv->GetModuleStates( SamplerMP3s::kMID_SAMPLER, &pStates ) failed (returned %i)\n' | 0066db98: 'pv->GetModuleStates( SamplerADPCM::kMID_SAMPLER, &pStates ) failed (returned %i)\n' | 0066daf0: 'pv->GetModuleStates( SamplerMP3::kMID_SAMPLER, &pStates ) failed (returned %i)\n'

undefined4 989snd::snd_SynthGetFreeVoiceBufferId(int param_1)

{
  char cVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 local_30 [4];
  undefined1 local_2c [4];
  undefined1 local_28 [4];
  undefined1 local_24 [4];
  
  puVar2 = PTR_PTR_0071b030;
  if (param_1 == 0) {
    snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b030 + -0x7efc));
  }
  iVar5 = *(int *)(param_1 + 0x6c);
  if (*(int *)(*(int *)(iVar5 + 0x14) + 0x24) == *(int *)(*(int *)(iVar5 + 0x10) + 0x10)) {
    iVar3 = FUN_00640c9c();
    iVar4 = FUN_006246bc();
    if (iVar4 <= iVar3 - *(int *)(param_1 + 100)) {
      cVar1 = *(char *)(param_1 + 0x68);
      if ((cVar1 == '\x02') || (cVar1 == '\x03')) {
        iVar5 = FUN_006487c0(iVar5,local_28,local_24);
        if (iVar5 != 0) {
          libc::printf(*(char **)(puVar2 + -0x7ef8),iVar5);
        }
      }
      else {
        if (cVar1 != '\x04') {
          iVar5 = FUN_006487c0(iVar5,local_30,local_24);
          if (iVar5 != 0) {
            libc::printf(*(char **)(puVar2 + -0x7ef0),iVar5);
          }
          if (iRam0000005c != 0) {
            return 0xffffffff;
          }
          return *(undefined4 *)(param_1 + 0x60);
        }
        iVar5 = FUN_006487c0(iVar5,local_2c,local_24);
        if (iVar5 != 0) {
          libc::printf(*(char **)(puVar2 + -0x7ef4),iVar5);
        }
      }
      if (iRam000001c4 == 0) {
        return *(undefined4 *)(param_1 + 0x60);
      }
    }
  }
  return 0xffffffff;
}



//==== 006271cc  ns=Global  size=0x28
// sig: undefined FUN_006271cc(void)
// callers(2): 0061870c FUN_0061870c; 006187c8 FUN_006187c8
// callees(1): 00640c9c FUN_00640c9c

undefined4 FUN_006271cc(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00640c9c();
  return uVar1;
}



//==== 006271f4  ns=989snd  size=0x24
// sig: undefined snd_SynthUnlock(void)
// callers(124): 00604b84 FUN_00604b84; 00604c24 FUN_00604c24; 00604cac FUN_00604cac; 00604d08 FUN_00604d08; 00604da4 FUN_00604da4; 00604e18 FUN_00604e18; 00604e98 FUN_00604e98; 006050dc FUN_006050dc; 00605324 FUN_00605324; 00605720 FUN_00605720; 00605a50 FUN_00605a50; 00605b2c FUN_00605b2c; 00605c04 FUN_00605c04; 00605cdc FUN_00605cdc; 00605db4 FUN_00605db4; 00605fb4 FUN_00605fb4; 006069c4 FUN_006069c4; 00606a60 FUN_00606a60; 00606e2c FUN_00606e2c; 00607334 FUN_00607334; 00607504 FUN_00607504; 006077ac FUN_006077ac; 00607a50 FUN_00607a50; 00607b34 FUN_00607b34; 00607dcc FUN_00607dcc
// callees(1): 0062fca0 FUN_0062fca0

void 989snd::snd_SynthUnlock(void)

{
  FUN_0062fca0();
  return;
}



//==== 00627218  ns=Global  size=0xd0
// sig: undefined FUN_00627218(void)
// callers(0): 
// callees(2): 00617938 FUN_00617938; 006271f4 989snd::snd_SynthUnlock

void FUN_00627218(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined *puVar5;
  ulonglong uVar6;
  
  puVar5 = PTR_PTR_0071b030;
  uVar1 = *(undefined4 *)(param_1 + 4);
  uVar2 = *(undefined4 *)(param_1 + 8);
  uVar3 = *(undefined4 *)(param_1 + 0x18);
  FUN_00617938(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),
               *(undefined4 *)(param_1 + 0x14));
  if (**(int **)(puVar5 + -0x7eec) != 0) {
    (*(code *)**(undefined4 **)(**(int **)(puVar5 + -0x7eec) + 8))
              (uVar1,uVar2,uVar3,*(undefined4 *)(param_1 + 0x14));
  }
  *(undefined1 *)(param_1 + 1) = 1;
  uVar4 = *(uint *)(*(int *)(param_1 + 0x10) + 8);
  uVar6 = ((ulonglong)uVar4 & 0x3ff) << 0x15 | (ulonglong)(uVar4 >> 0xb);
  *(uint *)(*(int *)(param_1 + 0x10) + 8) = (uint)(uVar6 << 0xb) | (uint)uVar6 >> 0x15;
  989snd::snd_SynthUnlock();
  return;
}



//==== 006272e8  ns=989snd  size=0x24
// sig: undefined snd_SynthLock(void)
// callers(123): 00604b00 FUN_00604b00; 00604b84 FUN_00604b84; 00604c24 FUN_00604c24; 00604cac FUN_00604cac; 00604d08 FUN_00604d08; 00604da4 FUN_00604da4; 00604e98 FUN_00604e98; 006050dc FUN_006050dc; 00605324 FUN_00605324; 00605720 FUN_00605720; 00605a50 FUN_00605a50; 00605b2c FUN_00605b2c; 00605c04 FUN_00605c04; 00605cdc FUN_00605cdc; 00605db4 FUN_00605db4; 00605fb4 FUN_00605fb4; 006069c4 FUN_006069c4; 00606a60 FUN_00606a60; 00606e2c FUN_00606e2c; 00607334 FUN_00607334; 00607504 FUN_00607504; 006077ac FUN_006077ac; 00607a50 FUN_00607a50; 00607b34 FUN_00607b34; 00607dcc FUN_00607dcc
// callees(1): 0062fcdc FUN_0062fcdc

void 989snd::snd_SynthLock(void)

{
  FUN_0062fcdc();
  return;
}



//==== 0062730c  ns=Global  size=0x28
// sig: undefined FUN_0062730c(void)
// callers(2): 0061c994 FUN_0061c994; 00622044 FUN_00622044
// callees(1): 0062fc4c FUN_0062fc4c

undefined4 FUN_0062730c(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0062fc4c();
  return uVar1;
}



//==== 00627334  ns=Global  size=0x114
// sig: undefined FUN_00627334(void)
// callers(1): 0060c448 FUN_0060c448
// callees(3): 0062fd18 FUN_0062fd18; 0063049c FUN_0063049c; 006427e8 FUN_006427e8

void FUN_00627334(void)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined *puVar4;
  longlong lVar5;
  int *piVar6;
  
  puVar4 = PTR_PTR_0071b030;
  piVar6 = *(int **)(PTR_PTR_0071b030 + -0x7ee8);
  iVar1 = *piVar6;
  if (iVar1 != 0) {
    (**(code **)**(undefined4 **)(PTR_PTR_0071b030 + -0x7fdc))(iVar1);
    *piVar6 = 0;
  }
  lVar5 = 0;
  iVar1 = *(int *)(puVar4 + -0x7fc0);
  puVar2 = *(undefined4 **)(puVar4 + -0x7fdc);
  do {
    uVar3 = (uint)lVar5;
    lVar5 = lVar5 + 1;
    piVar6 = (int *)(uVar3 * 0x10 + (uVar3 & 0x3fffffff) * -4 + iVar1);
    if (*piVar6 != 0) {
      (**(code **)*puVar2)(*piVar6);
    }
    piVar6[2] = 0;
    piVar6[1] = 0;
  } while (lVar5 != 5);
  FUN_0063049c(**(undefined4 **)(puVar4 + -0x7ee4));
  FUN_006427e8();
  FUN_0062fd18();
  return;
}



//==== 00627448  ns=Global  size=0x224
// sig: undefined FUN_00627448(void)
// callers(1): 0060c448 FUN_0060c448
// callees(5): 005cd098 libc::printf; 00626e80 989snd::snd_SynthLR1Destroy; 00642184 FUN_00642184; 00642354 FUN_00642354; 00643884 FUN_00643884
// strings: 0066ddb8: 'brb_UnregisterPluginPackFromMem(_binary_scream_plugin_pack_mp3_elf_start) failed (returned %i)\n' | 0066dc20: 'brb_DestroyRackUnit( s_rackUnits[i], i == kRackUnit_MasteringPrimary) failed (returned %i)\n' | 0066dbf0: 'brb_StopSession(NULL) failed (returned %i)\n' | 0066dc80: 'brb_UnregisterPluginPackFromMem(_binary_mp3_sampler_surround_elf_start) failed (returned %i)\n' | 0066dce0: 'brb_UnregisterPluginPackFromMem(_binary_scream_plugin_pack_aux_master_elf_start) failed (returned %i)\n' | 0066dd48: 'brb_UnregisterPluginPackFromMem(_binary_scream_plugin_pack_synth_submix_elf_start) failed (returned %i)\n'

int FUN_00627448(void)

{
  undefined4 uVar1;
  undefined *puVar2;
  ulonglong uVar3;
  int iVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  int *piVar7;
  int *piVar8;
  int *piVar10;
  ulonglong uVar9;
  longlong lVar11;
  
  puVar2 = PTR_PTR_0071b030;
  iVar4 = FUN_00642184(0);
  if (iVar4 != 0) {
    libc::printf(*(char **)(puVar2 + -0x7edc),iVar4);
  }
  if (**(int **)(puVar2 + -0x7fcc) != 0) {
    piVar8 = *(int **)(puVar2 + -0x7fd4) + 0x20;
    piVar7 = *(int **)(puVar2 + -0x7fd4);
    do {
      while( true ) {
        piVar10 = piVar7 + 4;
        if (*piVar7 == 0) break;
        989snd::snd_SynthLR1Destroy(*piVar7,1);
        piVar7 = piVar10;
        if (piVar10 == piVar8) goto LAB_006274cc;
      }
      piVar7 = piVar10;
    } while (piVar10 != piVar8);
  }
LAB_006274cc:
  uVar9 = 0;
  piVar7 = *(int **)(puVar2 + -0x7ee0);
  do {
    uVar3 = uVar9 ^ 9;
    uVar5 = (ulonglong)((int)uVar3 >> 0x1f);
    uVar9 = uVar9 + 1;
    if (*piVar7 != 0) {
      iVar4 = FUN_00643884(*piVar7,((uVar5 ^ uVar3) - uVar5) - 1 >> 0x1f & 1,0,0);
      if (iVar4 != 0) {
        libc::printf(*(char **)(puVar2 + -0x7ed8),iVar4);
      }
      *piVar7 = 0;
    }
    piVar7 = piVar7 + 1;
  } while (uVar9 != 10);
  lVar11 = 0x10;
  puVar6 = *(undefined4 **)(puVar2 + -0x7f90);
  do {
    *puVar6 = 0;
    lVar11 = lVar11 + -1;
    puVar6 = puVar6 + 1;
  } while (lVar11 != 0);
  puVar6 = *(undefined4 **)(puVar2 + -0x7f8c);
  uVar1 = *(undefined4 *)(puVar2 + -0x7ed4);
  **(undefined4 **)(puVar2 + -0x7fa0) = 0;
  *puVar6 = 0;
  iVar4 = FUN_00642354(uVar1);
  if (iVar4 == 0) {
    iVar4 = FUN_00642354(*(undefined4 *)(puVar2 + -0x7ecc));
  }
  else {
    libc::printf(*(char **)(puVar2 + -0x7ed0),iVar4);
    iVar4 = FUN_00642354(*(undefined4 *)(puVar2 + -0x7ecc));
  }
  if (iVar4 == 0) {
    iVar4 = FUN_00642354(*(undefined4 *)(puVar2 + -0x7ec4));
  }
  else {
    libc::printf(*(char **)(puVar2 + -0x7ec8),iVar4);
    iVar4 = FUN_00642354(*(undefined4 *)(puVar2 + -0x7ec4));
  }
  if (iVar4 != 0) {
    libc::printf(*(char **)(puVar2 + -0x7ec0),iVar4);
  }
  iVar4 = FUN_00642354(*(undefined4 *)(puVar2 + -0x7ebc));
  if (iVar4 != 0) {
    iVar4 = libc::printf(*(char **)(puVar2 + -0x7eb8),iVar4);
  }
  return iVar4;
}



//==== 0062766c  ns=Global  size=0x3c
// sig: undefined FUN_0062766c(void)
// callers(0): 
// callees(1): 00630388 FUN_00630388

void FUN_0062766c(void)

{
  FUN_00630388(**(undefined4 **)(PTR_PTR_0071b030 + -0x7ee4));
  return;
}



//==== 006276a8  ns=Global  size=0x3c
// sig: undefined FUN_006276a8(void)
// callers(0): 
// callees(1): 006303cc FUN_006303cc

void FUN_006276a8(void)

{
  FUN_006303cc(**(undefined4 **)(PTR_PTR_0071b030 + -0x7ee4));
  return;
}



//==== 006276e4  ns=Global  size=0x24
// sig: undefined FUN_006276e4(void)
// callers(0): 
// callees(1): 00641ec0 FUN_00641ec0

void FUN_006276e4(void)

{
  FUN_00641ec0();
  return;
}



//==== 00627708  ns=Global  size=0x74
// sig: undefined FUN_00627708(void)
// callers(0): 
// callees(1): 00641f84 FUN_00641f84

void FUN_00627708(int param_1)

{
  int iVar1;
  
  if (param_1 < 0) {
    if (param_1 == -1) {
      iVar1 = **(int **)(PTR_PTR_0071b030 + -0x7fa0);
    }
    else {
      iVar1 = **(int **)(PTR_PTR_0071b030 + -0x7f8c);
    }
  }
  else {
    iVar1 = *(int *)(*(int *)(PTR_PTR_0071b030 + -0x7f90) + param_1 * 4);
  }
  if (iVar1 != 0) {
    FUN_00641f84(iVar1);
  }
  return;
}



//==== 0062777c  ns=Global  size=0xb4
// sig: undefined FUN_0062777c(void)
// callers(4): 006279c8 FUN_006279c8; 00629ff8 FUN_00629ff8; 0062a9b4 989snd::snd_SynthKeyOnVoice; 0062e140 989snd::snd_SynthSetVoiceData
// callees(0): 

double FUN_0062777c(uint param_1)

{
  double dVar1;
  
  if (-1 < (int)param_1) {
    return (double)(*(float *)(PTR_PTR_0071b030 + -0x7e9c) -
                   (float)param_1 * *(float *)(PTR_PTR_0071b030 + -0x7ea4));
  }
  if (9 < param_1 + 0x7fffffff) {
    return (double)*(float *)(PTR_PTR_0071b030 + -0x7fac);
  }
                    /* WARNING: Could not recover jumptable at 0x0062782c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  dVar1 = (double)(*(code *)(*(int *)((param_1 + 0x7fffffff) * 4 +
                                     *(int *)(PTR_PTR_0071b030 + -0x7eb4)) +
                            *(int *)(PTR_PTR_0071b030 + -0x7eb4)))();
  return dVar1;
}



//==== 006279c8  ns=Global  size=0x270
// sig: undefined FUN_006279c8(void)
// callers(1): 00629ff8 FUN_00629ff8
// callees(4): 005cd098 libc::printf; 0062777c FUN_0062777c; 006486f8 FUN_006486f8; 00648730 FUN_00648730
// strings: 0066d930: 'voice->LockModuleParams( iSampler::kMID_OUTMIXER_PAN, &pParams ) failed (returned %i)\n'

/* WARNING: Removing unreachable block (ram,0x00627b34) */
/* WARNING: Removing unreachable block (ram,0x00627b44) */
/* WARNING: Removing unreachable block (ram,0x00627b64) */
/* WARNING: Removing unreachable block (ram,0x00627ba8) */
/* WARNING: Removing unreachable block (ram,0x00627bb4) */
/* WARNING: Removing unreachable block (ram,0x00627bc4) */

int FUN_006279c8(double param_1,double param_2,double param_3,double param_4,int param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  ulonglong uVar6;
  undefined4 *puVar7;
  double dVar8;
  double dVar9;
  undefined1 local_bc [4];
  undefined1 local_b8 [4];
  float local_b4 [17];
  ulonglong local_70;
  
  puVar4 = PTR_PTR_0071b030;
  iVar5 = *(int *)(param_5 + 0x70);
  if (iVar5 == 0) {
    iVar5 = *(int *)(param_5 + 0x6c);
  }
  local_b4[8] = (float)param_3;
  local_b4[4] = (float)param_4;
  local_b4[0] = (float)param_1;
  local_b4[0xf] = 0.0;
  local_b4[0xc] = (float)param_2;
  local_b4[9] = 0.0;
  local_b4[10] = 0.0;
  local_b4[0xb] = 0.0;
  local_b4[5] = 0.0;
  local_b4[6] = 0.0;
  local_b4[7] = 0.0;
  local_b4[1] = 0.0;
  local_b4[2] = 0.0;
  local_b4[3] = 0.0;
  local_b4[0xd] = 0.0;
  local_b4[0xe] = 0.0;
  if (*(int *)(param_5 + 0x2c) != 0) {
    dVar9 = (double)*(float *)(PTR_PTR_0071b030 + -0x7ea4);
    uVar6 = 0;
    puVar7 = (undefined4 *)(param_5 + 0x30);
    do {
      uVar6 = uVar6 + 1;
      dVar8 = (double)FUN_0062777c(*puVar7);
      uVar1 = puVar7[3];
      iVar3 = (int)((uVar6 & 0x3fffffff) << 2);
      uVar2 = *(uint *)(param_5 + 0x2c);
      local_70 = (ulonglong)uVar1;
      *(float *)((int)local_b4 + iVar3 + 0x20) = (float)dVar8;
      *(float *)((int)local_b4 + iVar3 + 0x10) = (float)((double)uVar1 * dVar9);
      *(undefined4 *)((int)local_b4 + iVar3) = puVar7[6];
      *(undefined4 *)((int)local_b4 + iVar3 + 0x30) = puVar7[9];
      puVar7 = puVar7 + 1;
    } while ((uVar6 & 0xffffffff) < (ulonglong)uVar2);
  }
  iVar5 = FUN_00648730(iVar5,local_bc,local_b8);
  if (iVar5 != 0) {
    iVar5 = libc::printf(*(char **)(puVar4 + -0x7f14),iVar5);
  }
  return iVar5;
}



//==== 00627c40  ns=Global  size=0x224
// sig: undefined FUN_00627c40(void)
// callers(1): 00623578 FUN_00623578
// callees(4): 0061948c 989snd::snd_Printf; 0062519c FUN_0062519c; 00647ed0 FUN_00647ed0; 00647f34 FUN_00647f34
// strings: 0066d6b8: '%s(%d) : Invalid parameter.\n' | 0066d690: 'common/boomrang/snd_synth_interface.cpp'

/* WARNING: Removing unreachable block (ram,0x00627d14) */
/* WARNING: Removing unreachable block (ram,0x00627e4c) */
/* WARNING: Removing unreachable block (ram,0x00627d20) */
/* WARNING: Removing unreachable block (ram,0x00627d30) */
/* WARNING: Removing unreachable block (ram,0x00627e38) */
/* WARNING: Removing unreachable block (ram,0x00627d3c) */
/* WARNING: Removing unreachable block (ram,0x00627d48) */
/* WARNING: Removing unreachable block (ram,0x00627e24) */
/* WARNING: Removing unreachable block (ram,0x00627d58) */
/* WARNING: Removing unreachable block (ram,0x00627d64) */

void FUN_00627c40(double param_1,double param_2,int param_3,uint param_4,undefined8 param_5,
                 undefined8 param_6,uint param_7,uint param_8)

{
  undefined *puVar1;
  ulonglong uVar2;
  undefined1 local_60 [32];
  
  puVar1 = PTR_PTR_0071b030;
  if ((((param_3 == 0) || (3 < param_4)) || (0x168 < param_8)) ||
     (((0x168 < param_7 || (param_1 < (double)*(float *)(PTR_PTR_0071b030 + -0x7fac))) ||
      (param_2 < (double)*(float *)(PTR_PTR_0071b030 + -0x7fac))))) {
    989snd::snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b030 + -0x7f70));
    if (**(char **)(puVar1 + -0x7f6c) != '\0') {
      return;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar1 + -0x7f68),0);
  }
  uVar2 = FUN_0062519c(param_3);
  if (-1 < (int)uVar2) {
    FUN_00647ed0(*(undefined4 *)(*(int *)(puVar1 + -0x7fd4) + (int)((uVar2 & 0xffffffff) << 4)),
                 local_60);
  }
  return;
}



//==== 00627e64  ns=Global  size=0xe8
// sig: undefined FUN_00627e64(void)
// callers(1): 0062362c FUN_0062362c
// callees(2): 006486f8 FUN_006486f8; 00648730 FUN_00648730

void FUN_00627e64(double param_1,int param_2,uint param_3,undefined8 param_4,uint param_5,
                 uint param_6)

{
  int iVar1;
  int iVar2;
  undefined1 local_50 [4];
  undefined1 local_4c [4];
  undefined1 local_48 [8];
  
  iVar1 = *(int *)(PTR_PTR_0071b030 + -0x7f90);
  iVar2 = FUN_00648730(*(undefined4 *)(iVar1 + param_2 * 4),local_4c,local_48);
  if (-1 < iVar2) {
    uRam00000000 = param_3 & 0xff;
    uRam00000004 = param_5 & 0xff;
    uRam00000008 = param_6 & 0xff;
    fRam0000000c = (float)param_1;
    FUN_006486f8(*(undefined4 *)(iVar1 + param_2 * 4),local_50);
  }
  return;
}



//==== 00627f54  ns=Global  size=0xf4
// sig: undefined FUN_00627f54(void)
// callers(1): 0062362c FUN_0062362c
// callees(2): 006486f8 FUN_006486f8; 00648730 FUN_00648730

void FUN_00627f54(double param_1,double param_2,double param_3,int param_4,int param_5,
                 undefined4 param_6)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined1 local_60 [4];
  undefined1 local_5c [4];
  undefined1 local_58 [16];
  
  iVar1 = *(int *)(PTR_PTR_0071b030 + -0x7f90);
  iVar4 = FUN_00648730(*(undefined4 *)(iVar1 + param_4 * 4),local_5c,local_58);
  if (-1 < iVar4) {
    puVar3 = (undefined4 *)(param_5 * 0x10);
    uVar2 = *(undefined4 *)(iVar1 + param_4 * 4);
    puVar3[3] = (float)param_3;
    *puVar3 = param_6;
    puVar3[1] = (float)param_1;
    puVar3[2] = (float)param_2;
    FUN_006486f8(uVar2,local_60);
  }
  return;
}



//==== 00628050  ns=Global  size=0xac
// sig: undefined FUN_00628050(void)
// callers(1): 0062362c FUN_0062362c
// callees(2): 006486f8 FUN_006486f8; 00648730 FUN_00648730

void FUN_00628050(double param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  undefined1 local_38 [16];
  
  iVar1 = *(int *)(PTR_PTR_0071b030 + -0x7f90);
  iVar2 = FUN_00648730(*(undefined4 *)(iVar1 + param_2 * 4),local_3c,local_38);
  if (-1 < iVar2) {
    fRam00000000 = (float)param_1;
    FUN_006486f8(*(undefined4 *)(iVar1 + param_2 * 4),local_40);
  }
  return;
}



//==== 00628104  ns=Global  size=0xa0
// sig: undefined FUN_00628104(void)
// callers(0): 
// callees(2): 006486f8 FUN_006486f8; 00648730 FUN_00648730

void FUN_00628104(uint param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined1 local_30 [4];
  undefined1 local_2c [4];
  undefined1 local_28 [8];
  
  puVar1 = *(undefined4 **)(PTR_PTR_0071b030 + -0x7f8c);
  iVar2 = FUN_00648730(*puVar1,local_2c,local_28);
  if (-1 < iVar2) {
    uRam00000000 = param_1 & 0xff;
    FUN_006486f8(*puVar1,local_30);
  }
  return;
}



//==== 006281ac  ns=Global  size=0x9c
// sig: undefined FUN_006281ac(void)
// callers(0): 
// callees(2): 006486f8 FUN_006486f8; 00648730 FUN_00648730

void FUN_006281ac(double param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined1 local_30 [4];
  undefined1 local_2c [4];
  undefined1 local_28 [8];
  
  puVar1 = *(undefined4 **)(PTR_PTR_0071b030 + -0x7f8c);
  iVar2 = FUN_00648730(*puVar1,local_2c,local_28);
  if (-1 < iVar2) {
    fRam00000000 = (float)param_1;
    FUN_006486f8(*puVar1,local_30);
  }
  return;
}



//==== 00628250  ns=Global  size=0xbc
// sig: undefined FUN_00628250(void)
// callers(0): 
// callees(2): 006486f8 FUN_006486f8; 00648730 FUN_00648730

void FUN_00628250(double param_1,double param_2,double param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  undefined1 local_38 [8];
  
  puVar1 = *(undefined4 **)(PTR_PTR_0071b030 + -0x7f8c);
  iVar2 = FUN_00648730(*puVar1,local_3c,local_38);
  if (-1 < iVar2) {
    fRam00000008 = (float)param_3;
    fRam00000000 = (float)param_1;
    fRam00000004 = (float)param_2;
    FUN_006486f8(*puVar1,local_40);
  }
  return;
}



//==== 00628314  ns=Global  size=0xb4
// sig: undefined FUN_00628314(void)
// callers(0): 
// callees(2): 006486f8 FUN_006486f8; 00648730 FUN_00648730

void FUN_00628314(uint param_1,uint param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  undefined1 local_38 [16];
  
  puVar1 = *(undefined4 **)(PTR_PTR_0071b030 + -0x7f8c);
  iVar2 = FUN_00648730(*puVar1,local_3c,local_38);
  if (-1 < iVar2) {
    uRam00000000 = param_1 & 0xff;
    uRam00000004 = param_2 & 0xff;
    FUN_006486f8(*puVar1,local_40);
  }
  return;
}



//==== 006283d0  ns=Global  size=0x9c
// sig: undefined FUN_006283d0(void)
// callers(0): 
// callees(2): 006486f8 FUN_006486f8; 00648730 FUN_00648730

void FUN_006283d0(double param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined1 local_30 [4];
  undefined1 local_2c [4];
  undefined1 local_28 [8];
  
  puVar1 = *(undefined4 **)(PTR_PTR_0071b030 + -0x7f8c);
  iVar2 = FUN_00648730(*puVar1,local_2c,local_28);
  if (-1 < iVar2) {
    fRam00000000 = (float)param_1;
    FUN_006486f8(*puVar1,local_30);
  }
  return;
}



//==== 00628474  ns=Global  size=0xa0
// sig: undefined FUN_00628474(void)
// callers(0): 
// callees(2): 006486f8 FUN_006486f8; 00648730 FUN_00648730

void FUN_00628474(uint param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined1 local_30 [4];
  undefined1 local_2c [4];
  undefined1 local_28 [8];
  
  puVar1 = *(undefined4 **)(PTR_PTR_0071b030 + -0x7fa0);
  iVar2 = FUN_00648730(*puVar1,local_2c,local_28);
  if (-1 < iVar2) {
    uRam00000000 = param_1 & 0xff;
    FUN_006486f8(*puVar1,local_30);
  }
  return;
}



//==== 0062851c  ns=Global  size=0xbc
// sig: undefined FUN_0062851c(void)
// callers(0): 
// callees(2): 006486f8 FUN_006486f8; 00648730 FUN_00648730

void FUN_0062851c(double param_1,double param_2)

{
  undefined4 *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  undefined1 local_38 [16];
  
  puVar2 = PTR_PTR_0071b030;
  puVar1 = *(undefined4 **)(PTR_PTR_0071b030 + -0x7fa0);
  iVar3 = FUN_00648730(*puVar1,local_3c,local_38);
  if (-1 < iVar3) {
    uRam00000004 = *(undefined4 *)(puVar2 + -0x7e94);
    fRam0000000c = (float)param_2;
    uRam00000000 = 0;
    fRam00000008 = (float)param_1;
    FUN_006486f8(*puVar1,local_40);
  }
  return;
}



//==== 006285e0  ns=Global  size=0xac
// sig: undefined FUN_006285e0(void)
// callers(0): 
// callees(2): 006486f8 FUN_006486f8; 00648730 FUN_00648730

void FUN_006285e0(double param_1,double param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  undefined1 local_38 [16];
  
  puVar1 = *(undefined4 **)(PTR_PTR_0071b030 + -0x7fa0);
  iVar2 = FUN_00648730(*puVar1,local_3c,local_38);
  if (-1 < iVar2) {
    fRam00000004 = (float)param_2;
    fRam00000000 = (float)param_1;
    FUN_006486f8(*puVar1,local_40);
  }
  return;
}



//==== 00628694  ns=Global  size=0xa0
// sig: undefined FUN_00628694(void)
// callers(0): 
// callees(2): 006486f8 FUN_006486f8; 00648730 FUN_00648730

void FUN_00628694(uint param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined1 local_30 [4];
  undefined1 local_2c [4];
  undefined1 local_28 [8];
  
  puVar1 = *(undefined4 **)(PTR_PTR_0071b030 + -0x7fa0);
  iVar2 = FUN_00648730(*puVar1,local_2c,local_28);
  if (-1 < iVar2) {
    uRam00000000 = param_1 & 0xff;
    FUN_006486f8(*puVar1,local_30);
  }
  return;
}



//==== 0062873c  ns=Global  size=0x98
// sig: undefined FUN_0062873c(void)
// callers(0): 
// callees(1): 006487c0 FUN_006487c0

void FUN_0062873c(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  undefined1 local_20 [4];
  int local_1c [3];
  
  iVar3 = FUN_006487c0(**(undefined4 **)(PTR_PTR_0071b030 + -0x7fa0),local_20,local_1c);
  if (-1 < iVar3) {
    iVar3 = 0;
    lVar4 = 8;
    do {
      puVar1 = (undefined4 *)(iVar3 + local_1c[0] + 0x140);
      puVar2 = (undefined4 *)(iVar3 + param_1);
      iVar3 = iVar3 + 4;
      *puVar2 = *puVar1;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return;
}



//==== 006287dc  ns=Global  size=0xbc
// sig: undefined FUN_006287dc(void)
// callers(0): 
// callees(2): 006486f8 FUN_006486f8; 00648730 FUN_00648730

void FUN_006287dc(double param_1,double param_2,double param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  undefined1 local_38 [8];
  
  puVar1 = *(undefined4 **)(PTR_PTR_0071b030 + -0x7fa0);
  iVar2 = FUN_00648730(*puVar1,local_3c,local_38);
  if (-1 < iVar2) {
    fRam00000008 = (float)param_3;
    fRam00000000 = (float)param_1;
    fRam00000004 = (float)param_2;
    FUN_006486f8(*puVar1,local_40);
  }
  return;
}



//==== 006288a0  ns=Global  size=0xbc
// sig: undefined FUN_006288a0(void)
// callers(0): 
// callees(2): 006486f8 FUN_006486f8; 00648730 FUN_00648730

void FUN_006288a0(double param_1,double param_2,double param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  undefined1 local_38 [8];
  
  puVar1 = *(undefined4 **)(PTR_PTR_0071b030 + -0x7fa0);
  iVar2 = FUN_00648730(*puVar1,local_3c,local_38);
  if (-1 < iVar2) {
    fRam00000008 = (float)param_3;
    fRam00000000 = (float)param_1;
    fRam00000004 = (float)param_2;
    FUN_006486f8(*puVar1,local_40);
  }
  return;
}



//==== 00628964  ns=Global  size=0xb4
// sig: undefined FUN_00628964(void)
// callers(0): 
// callees(2): 006486f8 FUN_006486f8; 00648730 FUN_00648730

void FUN_00628964(uint param_1,uint param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  undefined1 local_38 [16];
  
  puVar1 = *(undefined4 **)(PTR_PTR_0071b030 + -0x7fa0);
  iVar2 = FUN_00648730(*puVar1,local_3c,local_38);
  if (-1 < iVar2) {
    uRam00000000 = param_1 & 0xff;
    uRam00000004 = param_2 & 0xff;
    FUN_006486f8(*puVar1,local_40);
  }
  return;
}



//==== 00628a20  ns=Global  size=0xc8
// sig: undefined FUN_00628a20(void)
// callers(0): 
// callees(2): 006486f8 FUN_006486f8; 00648730 FUN_00648730

void FUN_00628a20(double param_1,ulonglong param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  undefined1 local_38 [16];
  
  puVar1 = *(undefined4 **)(PTR_PTR_0071b030 + -0x7fa0);
  iVar3 = FUN_00648730(*puVar1,local_3c,local_38);
  if (-1 < iVar3) {
    if (0x17 < (param_2 & 0xffffffff)) {
      param_2 = 0x17;
    }
    uVar2 = *puVar1;
    *(float *)((param_2 & 0xffffffff) << 2) = (float)param_1;
    FUN_006486f8(uVar2,local_40);
  }
  return;
}



//==== 00628af0  ns=Global  size=0xc4
// sig: undefined FUN_00628af0(void)
// callers(0): 
// callees(2): 006486f8 FUN_006486f8; 00648730 FUN_00648730

void FUN_00628af0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  longlong lVar4;
  undefined1 local_30 [4];
  undefined1 local_2c [4];
  undefined1 local_28 [16];
  
  puVar1 = *(undefined4 **)(PTR_PTR_0071b030 + -0x7fa0);
  iVar2 = FUN_00648730(*puVar1,local_2c,local_28);
  if (-1 < iVar2) {
    lVar4 = 0x18;
    puVar3 = (undefined4 *)0x0;
    do {
      *puVar3 = *(undefined4 *)((int)puVar3 + param_1);
      lVar4 = lVar4 + -1;
      puVar3 = puVar3 + 1;
    } while (lVar4 != 0);
    FUN_006486f8(*puVar1,local_30);
  }
  return;
}



//==== 00628bbc  ns=Global  size=0xa0
// sig: undefined FUN_00628bbc(void)
// callers(0): 
// callees(2): 006486f8 FUN_006486f8; 00648730 FUN_00648730

void FUN_00628bbc(uint param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined1 local_30 [4];
  undefined1 local_2c [4];
  undefined1 local_28 [8];
  
  puVar1 = *(undefined4 **)(PTR_PTR_0071b030 + -0x7fa0);
  iVar2 = FUN_00648730(*puVar1,local_2c,local_28);
  if (-1 < iVar2) {
    uRam00000000 = param_1 & 0xff;
    FUN_006486f8(*puVar1,local_30);
  }
  return;
}



//==== 00628c64  ns=Global  size=0xec
// sig: undefined FUN_00628c64(void)
// callers(0): 
// callees(2): 006486f8 FUN_006486f8; 00648730 FUN_00648730

void FUN_00628c64(double param_1,double param_2,double param_3,double param_4,double param_5,
                 double param_6)

{
  undefined4 *puVar1;
  int iVar2;
  undefined1 local_60 [4];
  undefined1 local_5c [4];
  undefined1 local_58 [16];
  
  puVar1 = *(undefined4 **)(PTR_PTR_0071b030 + -0x7fa0);
  iVar2 = FUN_00648730(*puVar1,local_5c,local_58);
  if (-1 < iVar2) {
    fRam00000014 = (float)param_6;
    fRam00000000 = (float)param_1;
    fRam00000004 = (float)param_2;
    fRam00000008 = (float)param_3;
    fRam0000000c = (float)param_4;
    fRam00000010 = (float)param_5;
    FUN_006486f8(*puVar1,local_60);
  }
  return;
}



//==== 00628d58  ns=Global  size=0xec
// sig: undefined FUN_00628d58(void)
// callers(0): 
// callees(2): 006486f8 FUN_006486f8; 00648730 FUN_00648730

void FUN_00628d58(double param_1,double param_2,double param_3,double param_4,double param_5,
                 double param_6)

{
  undefined4 *puVar1;
  int iVar2;
  undefined1 local_60 [4];
  undefined1 local_5c [4];
  undefined1 local_58 [16];
  
  puVar1 = *(undefined4 **)(PTR_PTR_0071b030 + -0x7fa0);
  iVar2 = FUN_00648730(*puVar1,local_5c,local_58);
  if (-1 < iVar2) {
    fRam00000014 = (float)param_6;
    fRam00000000 = (float)param_1;
    fRam00000004 = (float)param_2;
    fRam00000008 = (float)param_3;
    fRam0000000c = (float)param_4;
    fRam00000010 = (float)param_5;
    FUN_006486f8(*puVar1,local_60);
  }
  return;
}



//==== 00628e4c  ns=Global  size=0xd0
// sig: undefined FUN_00628e4c(void)
// callers(0): 
// callees(2): 006486f8 FUN_006486f8; 00648730 FUN_00648730

void FUN_00628e4c(double param_1,uint param_2,undefined8 param_3,uint param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined1 local_50 [4];
  undefined1 local_4c [4];
  undefined1 local_48 [16];
  
  puVar1 = *(undefined4 **)(PTR_PTR_0071b030 + -0x7fa0);
  iVar2 = FUN_00648730(*puVar1,local_4c,local_48);
  if (-1 < iVar2) {
    uRam00000000 = param_2 & 0xff;
    uRam00000008 = param_4 & 0xff;
    fRam0000000c = (float)param_1;
    uRam00000004 = 0;
    FUN_006486f8(*puVar1,local_50);
  }
  return;
}



//==== 00628f24  ns=Global  size=0xe4
// sig: undefined FUN_00628f24(void)
// callers(0): 
// callees(2): 006486f8 FUN_006486f8; 00648730 FUN_00648730

void FUN_00628f24(double param_1,double param_2,double param_3,int param_4,undefined4 param_5)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined1 local_50 [4];
  undefined1 local_4c [4];
  undefined1 local_48 [8];
  
  puVar1 = *(undefined4 **)(PTR_PTR_0071b030 + -0x7fa0);
  iVar4 = FUN_00648730(*puVar1,local_4c,local_48);
  if (-1 < iVar4) {
    puVar3 = (undefined4 *)(param_4 * 0x10);
    uVar2 = *puVar1;
    puVar3[3] = (float)param_3;
    *puVar3 = param_5;
    puVar3[1] = (float)param_1;
    puVar3[2] = (float)param_2;
    FUN_006486f8(uVar2,local_50);
  }
  return;
}



//==== 00629010  ns=Global  size=0xac
// sig: undefined FUN_00629010(void)
// callers(0): 
// callees(2): 006486f8 FUN_006486f8; 00648730 FUN_00648730

void FUN_00629010(double param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  undefined1 local_38 [16];
  
  puVar1 = *(undefined4 **)(PTR_PTR_0071b030 + -0x7fa0);
  iVar2 = FUN_00648730(*puVar1,local_3c,local_38);
  if (-1 < iVar2) {
    fRam00000000 = (float)param_1;
    uRam00000004 = param_2;
    FUN_006486f8(*puVar1,local_40);
  }
  return;
}



//==== 006290c4  ns=Global  size=0x104
// sig: undefined FUN_006290c4(void)
// callers(0): 
// callees(2): 006486f8 FUN_006486f8; 00648730 FUN_00648730

void FUN_006290c4(double param_1,undefined8 param_2,int param_3,int param_4)

{
  undefined4 *puVar1;
  ulonglong uVar2;
  int iVar3;
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  undefined1 local_38 [16];
  
  puVar1 = *(undefined4 **)(PTR_PTR_0071b030 + -0x7fa0);
  iVar3 = FUN_00648730(*puVar1,local_3c,local_38);
  if (-1 < iVar3) {
    fRam00000000 = (float)param_1;
    if (param_3 == 0) {
      uRam00000004 = uRam00000004 & 0xfffffffe;
    }
    else {
      uRam00000004 = uRam00000004 | 1;
    }
    if (param_4 == 0) {
      uVar2 = ((ulonglong)uRam00000004 & 1) << 0x1e | (ulonglong)(uRam00000004 >> 2);
      uRam00000004 = (uint)(uVar2 << 2) | (uint)uVar2 >> 0x1e;
    }
    else {
      uRam00000004 = uRam00000004 | 2;
    }
    FUN_006486f8(*puVar1,local_40);
    return;
  }
  return;
}



//==== 006291d0  ns=Global  size=0x9c
// sig: undefined FUN_006291d0(void)
// callers(0): 
// callees(2): 006486f8 FUN_006486f8; 00648730 FUN_00648730

void FUN_006291d0(double param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined1 local_30 [4];
  undefined1 local_2c [4];
  undefined1 local_28 [8];
  
  puVar1 = *(undefined4 **)(PTR_PTR_0071b030 + -0x7fa0);
  iVar2 = FUN_00648730(*puVar1,local_2c,local_28);
  if (-1 < iVar2) {
    fRam00000000 = (float)param_1;
    FUN_006486f8(*puVar1,local_30);
  }
  return;
}



//==== 00629274  ns=Global  size=0xd0
// sig: undefined FUN_00629274(void)
// callers(0): 
// callees(1): 006487c0 FUN_006487c0

void FUN_00629274(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined1 local_30 [4];
  int local_2c [5];
  
  iVar3 = FUN_006487c0(*(undefined4 *)(*(int *)(PTR_PTR_0071b030 + -0x7f90) + param_1 * 4),local_30,
                       local_2c);
  if (-1 < iVar3) {
    if (param_3 == 0) {
      iVar3 = local_2c[0] + 0x10 + *(int *)(local_2c[0] + 8) * 4;
    }
    else {
      iVar3 = local_2c[0] + 0x10;
    }
    iVar4 = 0;
    lVar5 = 8;
    do {
      puVar1 = (undefined4 *)(iVar4 + iVar3);
      puVar2 = (undefined4 *)(iVar4 + param_2);
      iVar4 = iVar4 + 4;
      *puVar2 = *puVar1;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  return;
}



//==== 0062934c  ns=Global  size=0xb0
// sig: undefined FUN_0062934c(void)
// callers(0): 
// callees(2): 006486f8 FUN_006486f8; 00648730 FUN_00648730

void FUN_0062934c(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  undefined1 local_38 [16];
  
  iVar1 = *(int *)(PTR_PTR_0071b030 + -0x7f90);
  iVar2 = FUN_00648730(*(undefined4 *)(iVar1 + param_1 * 4),local_3c,local_38);
  if (-1 < iVar2) {
    uRam00000000 = param_2 & 0xff;
    FUN_006486f8(*(undefined4 *)(iVar1 + param_1 * 4),local_40);
  }
  return;
}



//==== 00629404  ns=Global  size=0xac
// sig: undefined FUN_00629404(void)
// callers(0): 
// callees(2): 006486f8 FUN_006486f8; 00648730 FUN_00648730

void FUN_00629404(double param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  undefined1 local_38 [16];
  
  iVar1 = *(int *)(PTR_PTR_0071b030 + -0x7f90);
  iVar2 = FUN_00648730(*(undefined4 *)(iVar1 + param_2 * 4),local_3c,local_38);
  if (-1 < iVar2) {
    fRam00000000 = (float)param_1;
    FUN_006486f8(*(undefined4 *)(iVar1 + param_2 * 4),local_40);
  }
  return;
}



//==== 006294b8  ns=Global  size=0xcc
// sig: undefined FUN_006294b8(void)
// callers(0): 
// callees(2): 006486f8 FUN_006486f8; 00648730 FUN_00648730

void FUN_006294b8(double param_1,double param_2,int param_3)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  undefined1 local_38 [8];
  
  puVar2 = PTR_PTR_0071b030;
  iVar1 = *(int *)(PTR_PTR_0071b030 + -0x7f90);
  iVar3 = FUN_00648730(*(undefined4 *)(iVar1 + param_3 * 4),local_3c,local_38);
  if (-1 < iVar3) {
    uRam00000004 = *(undefined4 *)(puVar2 + -0x7e94);
    fRam0000000c = (float)param_2;
    uRam00000000 = 0;
    fRam00000008 = (float)param_1;
    FUN_006486f8(*(undefined4 *)(iVar1 + param_3 * 4),local_40);
  }
  return;
}



//==== 0062958c  ns=Global  size=0xbc
// sig: undefined FUN_0062958c(void)
// callers(1): 0062362c FUN_0062362c
// callees(2): 006486f8 FUN_006486f8; 00648730 FUN_00648730

void FUN_0062958c(double param_1,double param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  undefined1 local_38 [8];
  
  iVar1 = *(int *)(PTR_PTR_0071b030 + -0x7f90);
  iVar2 = FUN_00648730(*(undefined4 *)(iVar1 + param_3 * 4),local_3c,local_38);
  if (-1 < iVar2) {
    fRam00000004 = (float)param_2;
    fRam00000000 = (float)param_1;
    FUN_006486f8(*(undefined4 *)(iVar1 + param_3 * 4),local_40);
  }
  return;
}



//==== 00629650  ns=Global  size=0xb0
// sig: undefined FUN_00629650(void)
// callers(1): 0062362c FUN_0062362c
// callees(2): 006486f8 FUN_006486f8; 00648730 FUN_00648730

void FUN_00629650(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  undefined1 local_38 [16];
  
  iVar1 = *(int *)(PTR_PTR_0071b030 + -0x7f90);
  iVar2 = FUN_00648730(*(undefined4 *)(iVar1 + param_1 * 4),local_3c,local_38);
  if (-1 < iVar2) {
    uRam00000000 = param_2 & 0xff;
    FUN_006486f8(*(undefined4 *)(iVar1 + param_1 * 4),local_40);
  }
  return;
}



//==== 00629708  ns=Global  size=0xa0
// sig: undefined FUN_00629708(void)
// callers(0): 
// callees(1): 006487c0 FUN_006487c0

void FUN_00629708(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  undefined1 local_20 [4];
  int local_1c [3];
  
  iVar3 = FUN_006487c0(*(undefined4 *)(*(int *)(PTR_PTR_0071b030 + -0x7f90) + param_1 * 4),local_20,
                       local_1c);
  if (-1 < iVar3) {
    iVar3 = 0;
    lVar4 = 8;
    do {
      puVar1 = (undefined4 *)(iVar3 + local_1c[0] + 0x120);
      puVar2 = (undefined4 *)(iVar3 + param_2);
      iVar3 = iVar3 + 4;
      *puVar2 = *puVar1;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return;
}



//==== 006297b0  ns=Global  size=0xfc
// sig: undefined FUN_006297b0(void)
// callers(1): 0062362c FUN_0062362c
// callees(2): 006486f8 FUN_006486f8; 00648730 FUN_00648730

void FUN_006297b0(double param_1,double param_2,double param_3,double param_4,double param_5,
                 double param_6,int param_7)

{
  int iVar1;
  int iVar2;
  undefined1 local_60 [4];
  undefined1 local_5c [4];
  undefined1 local_58 [8];
  
  iVar1 = *(int *)(PTR_PTR_0071b030 + -0x7f90);
  iVar2 = FUN_00648730(*(undefined4 *)(iVar1 + param_7 * 4),local_5c,local_58);
  if (-1 < iVar2) {
    fRam00000014 = (float)param_6;
    fRam00000000 = (float)param_1;
    fRam00000004 = (float)param_2;
    fRam00000008 = (float)param_3;
    fRam0000000c = (float)param_4;
    fRam00000010 = (float)param_5;
    FUN_006486f8(*(undefined4 *)(iVar1 + param_7 * 4),local_60);
  }
  return;
}



//==== 006298b4  ns=Global  size=0xfc
// sig: undefined FUN_006298b4(void)
// callers(1): 0062362c FUN_0062362c
// callees(2): 006486f8 FUN_006486f8; 00648730 FUN_00648730

void FUN_006298b4(double param_1,double param_2,double param_3,double param_4,double param_5,
                 double param_6,int param_7)

{
  int iVar1;
  int iVar2;
  undefined1 local_60 [4];
  undefined1 local_5c [4];
  undefined1 local_58 [8];
  
  iVar1 = *(int *)(PTR_PTR_0071b030 + -0x7f90);
  iVar2 = FUN_00648730(*(undefined4 *)(iVar1 + param_7 * 4),local_5c,local_58);
  if (-1 < iVar2) {
    fRam00000014 = (float)param_6;
    fRam00000000 = (float)param_1;
    fRam00000004 = (float)param_2;
    fRam00000008 = (float)param_3;
    fRam0000000c = (float)param_4;
    fRam00000010 = (float)param_5;
    FUN_006486f8(*(undefined4 *)(iVar1 + param_7 * 4),local_60);
  }
  return;
}



//==== 006299b8  ns=Global  size=0x1f8
// sig: undefined FUN_006299b8(void)
// callers(3): 0060e810 FUN_0060e810; 006209e4 FUN_006209e4; 00638ea0 FUN_00638ea0
// callees(4): 005cd098 libc::printf; 00624798 FUN_00624798; 006486f8 FUN_006486f8; 00648730 FUN_00648730
// strings: 0066de68: 'pv->UnlockModuleParams(iSampler::kMID_ENVELOPE) failed (returned %i)\n' | 0066de18: 'pv->LockModuleParams(iSampler::kMID_ENVELOPE, &pparams) failed (returned %i)\n'

int FUN_006299b8(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  int iVar3;
  double dVar4;
  undefined1 local_50 [4];
  undefined1 local_4c [4];
  undefined1 local_48 [16];
  
  puVar2 = PTR_PTR_0071b030;
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  iVar3 = FUN_00648730(uVar1,local_4c,local_48);
  if (iVar3 == 0) {
    uRam00000010 = 1;
    if (*(float *)(puVar2 + -0x7fac) < (float)param_2[2]) goto LAB_00629a48;
  }
  else {
    libc::printf(*(char **)(puVar2 + -0x7e8c),iVar3);
    uRam00000010 = 1;
    if (*(float *)(puVar2 + -0x7fac) < (float)param_2[2]) goto LAB_00629a48;
  }
  uRam00000010 = 2;
LAB_00629a48:
  uRam00000000 = 4;
  uRam00000004 = *(undefined4 *)(puVar2 + -0x7f64);
  uRam0000000c = *param_2;
  dVar4 = (double)FUN_00624798(param_2[1],1);
  fRam00000008 = (float)dVar4;
  uRam00000014 = param_2[4];
  uRam00000020 = 2;
  uRam0000001c = param_2[2];
  dVar4 = (double)FUN_00624798(param_2[3],0);
  fRam00000018 = (float)dVar4;
  uRam00000024 = param_2[5];
  uRam0000002c = param_2[6];
  iRam00000030 = 2 - ((int)(*(byte *)(param_2 + 8) - 1) >> 0x1f);
  dVar4 = (double)FUN_00624798(param_2[7],0);
  fRam00000028 = (float)dVar4;
  uRam00000034 = 0;
  uRam00000040 = 4;
  uRam0000003c = param_2[9];
  dVar4 = (double)FUN_00624798(param_2[10],0);
  fRam00000038 = (float)dVar4;
  iVar3 = FUN_006486f8(uVar1,local_50);
  if (iVar3 != 0) {
    iVar3 = libc::printf(*(char **)(puVar2 + -0x7e88),iVar3);
  }
  return iVar3;
}



//==== 00629bb8  ns=989snd  size=0x80
// sig: undefined snd_SynthUnpauseVoice(void)
// callers(1): 0061de48 FUN_0061de48
// callees(2): 0061948c 989snd::snd_Printf; 00647e98 FUN_00647e98
// strings: 0066d690: 'common/boomrang/snd_synth_interface.cpp' | 0066deb0: 'snd_SynthUnpauseVoice(): %s(%d) : Invalid voice context.\n'

void 989snd::snd_SynthUnpauseVoice(int param_1,undefined8 param_2)

{
  if (param_1 != 0) {
    FUN_00647e98(*(undefined4 *)(param_1 + 0x6c),param_2,0xdc9);
    return;
  }
  snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b030 + -0x7e84));
  FUN_00647e98(uRam0000006c);
  return;
}



//==== 00629c38  ns=989snd  size=0x80
// sig: undefined snd_SynthPauseVoice(void)
// callers(1): 0061de48 FUN_0061de48
// callees(2): 0061948c 989snd::snd_Printf; 00647e74 FUN_00647e74
// strings: 0066d690: 'common/boomrang/snd_synth_interface.cpp' | 0066def0: 'snd_SynthPauseVoice(): %s(%d) : Invalid voice context.\n'

void 989snd::snd_SynthPauseVoice(int param_1,undefined8 param_2)

{
  if (param_1 != 0) {
    FUN_00647e74(*(undefined4 *)(param_1 + 0x6c),param_2,0xdb0);
    return;
  }
  snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b030 + -0x7e80));
  FUN_00647e74(uRam0000006c);
  return;
}



//==== 00629cb8  ns=Global  size=0x1f8
// sig: undefined FUN_00629cb8(void)
// callers(0): 
// callees(5): 006272e8 989snd::snd_SynthLock; 00642648 FUN_00642648; 006426c0 FUN_006426c0; 00647ed0 FUN_00647ed0; 00647f34 FUN_00647f34

/* WARNING: Removing unreachable block (ram,0x00629de0) */
/* WARNING: Removing unreachable block (ram,0x00629e04) */
/* WARNING: Removing unreachable block (ram,0x00629e14) */
/* WARNING: Removing unreachable block (ram,0x00629e1c) */
/* WARNING: Removing unreachable block (ram,0x00629dec) */
/* WARNING: Removing unreachable block (ram,0x00629d50) */
/* WARNING: Removing unreachable block (ram,0x00629dfc) */
/* WARNING: Removing unreachable block (ram,0x00629d58) */
/* WARNING: Removing unreachable block (ram,0x00629d74) */
/* WARNING: Removing unreachable block (ram,0x00629d78) */
/* WARNING: Removing unreachable block (ram,0x00629d88) */

void FUN_00629cb8(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint *puVar4;
  int *piVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  undefined1 local_90 [16];
  
  puVar6 = PTR_PTR_0071b030;
  uVar1 = *(undefined4 *)(param_1 + 4);
  uVar2 = *(undefined4 *)(param_1 + 8);
  iVar3 = *(int *)(param_1 + 0x18);
  989snd::snd_SynthLock();
  puVar4 = *(uint **)(puVar6 + -0x7e7c);
  if (*puVar4 != 0) {
    uVar7 = 0;
    piVar5 = *(int **)(puVar6 + -0x7ee8);
    iVar8 = 0;
    do {
      FUN_00647ed0(*(undefined4 *)(iVar8 + *piVar5 + 0x6c),local_90);
      uVar7 = uVar7 + 1;
      iVar8 = iVar8 + 0x74;
    } while (uVar7 < *puVar4);
  }
  FUN_00642648(uVar2,uVar1,iVar3 + 0xfU & 0xfffffff0);
  FUN_006426c0(*(undefined4 *)(puVar6 + -0x7e78),*(undefined4 *)(puVar6 + -0x7fa4),1);
  return;
}



//==== 00629eb0  ns=989snd  size=0xc8
// sig: undefined snd_SynthKeyOffVoice(void)
// callers(1): 0061de48 FUN_0061de48
// callees(2): 0061948c 989snd::snd_Printf; 00647dd0 FUN_00647dd0
// strings: 0066d690: 'common/boomrang/snd_synth_interface.cpp' | 0066df28: 'snd_SynthKeyOffVoice(): %s(%d) : Invalid voice context.\n'

void 989snd::snd_SynthKeyOffVoice(int param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (param_1 == 0) {
    snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b030 + -0x7e74));
  }
  iVar1 = *(int *)(param_1 + 0x6c);
  iVar2 = *(int *)(param_1 + 0x70);
  sync(1);
  if ((**(uint **)(iVar1 + 0x14) & 4) == 0) {
    sync(1);
    uVar3 = 0;
    if ((**(ulonglong **)(iVar1 + 0x10) & 8) == 0) goto LAB_00629f18;
  }
  uVar3 = 1;
LAB_00629f18:
  FUN_00647dd0(iVar1,uVar3);
  if (iVar2 != 0) {
    FUN_00647dd0(iVar2,uVar3);
  }
  return;
}



//==== 00629f78  ns=989snd  size=0x80
// sig: undefined snd_SynthSilenceVoice(void)
// callers(1): 0061de48 FUN_0061de48
// callees(2): 0061948c 989snd::snd_Printf; 00647dd0 FUN_00647dd0
// strings: 0066d690: 'common/boomrang/snd_synth_interface.cpp' | 0066df68: 'snd_SynthSilenceVoice(): %s(%d) : Invalid voice context.\n'

void 989snd::snd_SynthSilenceVoice(int param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b030 + -0x7e70));
  }
  iVar1 = *(int *)(param_1 + 0x70);
  FUN_00647dd0(*(undefined4 *)(param_1 + 0x6c),1);
  if (iVar1 != 0) {
    FUN_00647dd0(iVar1,1);
  }
  return;
}



//==== 00629ff8  ns=Global  size=0x26c
// sig: undefined FUN_00629ff8(void)
// callers(0): 
// callees(5): 0061c994 FUN_0061c994; 0062777c FUN_0062777c; 006279c8 FUN_006279c8; 00647e74 FUN_00647e74; 00647e98 FUN_00647e98

undefined4 FUN_00629ff8(undefined4 param_1)

{
  char cVar1;
  float fVar2;
  float fVar3;
  uint *puVar4;
  int iVar5;
  undefined *puVar6;
  float *pfVar7;
  int iVar8;
  int *piVar9;
  uint uVar10;
  int *piVar11;
  int *piVar12;
  int iVar13;
  ulonglong uVar14;
  undefined8 uVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  
  puVar6 = PTR_PTR_0071b030;
  puVar4 = *(uint **)(PTR_PTR_0071b030 + -0x7e7c);
  if (*puVar4 != 0) {
    uVar14 = (ulonglong)*puVar4;
    iVar8 = 0;
    iVar13 = **(int **)(PTR_PTR_0071b030 + -0x7ee8);
    do {
      iVar5 = iVar8 + iVar13;
      iVar8 = iVar8 + 0x74;
      *(undefined1 *)(iVar5 + 0x6a) = 0;
      uVar14 = uVar14 - 1;
    } while (uVar14 != 0);
  }
  piVar9 = *(int **)(puVar6 + -0x7e6c) + 0x20;
  piVar11 = *(int **)(puVar6 + -0x7e6c);
LAB_0062a0a4:
  do {
    if (*piVar11 != 0) {
      if (*(char *)(piVar11 + 2) == '\0') {
        cVar1 = *(char *)((int)piVar11 + 9);
      }
      else {
        FUN_00647e74(piVar11[-1]);
        cVar1 = *(char *)((int)piVar11 + 9);
        *(undefined1 *)(piVar11 + 2) = 0;
      }
      if (cVar1 != '\0') {
        piVar12 = piVar11 + 4;
        FUN_00647e98(piVar11[-1]);
        *(undefined1 *)((int)piVar11 + 9) = 0;
        piVar11 = piVar12;
        if (piVar12 == piVar9) break;
        goto LAB_0062a0a4;
      }
    }
    piVar11 = piVar11 + 4;
  } while (piVar11 != piVar9);
  FUN_0061c994(param_1);
  if (*puVar4 != 0) {
    uVar10 = 0;
    piVar11 = *(int **)(puVar6 + -0x7ee8);
    dVar16 = (double)*(float *)(puVar6 + -0x7ea4);
    iVar13 = 0;
    dVar17 = (double)**(float **)(puVar6 + -0x7f88);
    do {
      while( true ) {
        pfVar7 = (float *)(iVar13 + *piVar11);
        sync(1);
        if ((((**(uint **)((int)pfVar7[0x1b] + 0x14) & 1) != 0) ||
            ((double)*(float *)(*(int *)((int)pfVar7[0x1b] + 0x10) + 0xc) < dVar17)) &&
           (*(char *)((int)pfVar7 + 0x6a) != '\0')) break;
LAB_0062a148:
        uVar10 = uVar10 + 1;
        iVar13 = iVar13 + 0x74;
        if (*puVar4 <= uVar10) {
          return param_1;
        }
      }
      dVar18 = (double)(float)((double)(uint)pfVar7[9] * dVar16);
      uVar15 = FUN_0062777c(pfVar7[8]);
      if ((int)pfVar7[8] < 0) {
        if (pfVar7[8] == -8.40779e-45) {
          fVar3 = *pfVar7;
          fVar2 = *(float *)(puVar6 + -0x7fac);
        }
        else {
          fVar2 = *pfVar7;
          fVar3 = *(float *)(puVar6 + -0x7fac);
        }
        FUN_006279c8((double)fVar2,(double)fVar3,uVar15,dVar18,pfVar7);
        goto LAB_0062a148;
      }
      uVar10 = uVar10 + 1;
      iVar13 = iVar13 + 0x74;
      FUN_006279c8((double)*pfVar7,(double)pfVar7[1],uVar15,dVar18,pfVar7);
    } while (uVar10 < *puVar4);
  }
  return param_1;
}



//==== 0062a264  ns=Global  size=0x130
// sig: undefined FUN_0062a264(void)
// callers(0): 
// callees(2): 0061948c 989snd::snd_Printf; 00648b10 idol::brbVoice_ConnectPort
// strings: 0066d6b8: '%s(%d) : Invalid parameter.\n' | 0066d690: 'common/boomrang/snd_synth_interface.cpp'

void FUN_0062a264(uint param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  
  puVar3 = PTR_PTR_0071b030;
  if ((((param_1 == param_2) || (**(uint **)(PTR_PTR_0071b030 + -0x7e68) <= param_1)) ||
      ((int)param_2 < -1)) || ((int)**(uint **)(PTR_PTR_0071b030 + -0x7e68) < (int)(param_2 + 1))) {
    989snd::snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b030 + -0x7f70));
    if (**(char **)(puVar3 + -0x7f6c) != '\0') {
      return;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar3 + -0x7f68),0);
  }
  if (param_2 == 0xffffffff) {
    iVar1 = *(int *)(*(int *)(puVar3 + -0x7f90) + param_1 * 4);
    if (*(int *)(iVar1 + 0x24) != **(int **)(puVar3 + -0x7fa0)) {
      idol::brbVoice_ConnectPort(iVar1,1,**(int **)(puVar3 + -0x7fa0));
      return;
    }
  }
  else {
    iVar1 = *(int *)(*(int *)(puVar3 + -0x7f90) + param_1 * 4);
    iVar2 = *(int *)(*(int *)(puVar3 + -0x7f90) + param_2 * 4);
    if (*(int *)(iVar1 + 0x24) != iVar2) {
      idol::brbVoice_ConnectPort(iVar1,1,iVar2);
    }
  }
  return;
}



//==== 0062a394  ns=Global  size=0x134
// sig: undefined FUN_0062a394(void)
// callers(1): 00606800 FUN_00606800
// callees(3): 0061948c 989snd::snd_Printf; 0062519c FUN_0062519c; 00648b10 idol::brbVoice_ConnectPort
// strings: 0066d6b8: '%s(%d) : Invalid parameter.\n' | 0066d690: 'common/boomrang/snd_synth_interface.cpp'

void FUN_0062a394(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  ulonglong uVar4;
  
  puVar3 = PTR_PTR_0071b030;
  if (((param_1 == 0) || (param_2 < -1)) || (**(int **)(PTR_PTR_0071b030 + -0x7e68) < param_2 + 1))
  {
    989snd::snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b030 + -0x7f70));
    if (**(char **)(puVar3 + -0x7f6c) != '\0') {
      return;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar3 + -0x7f68),0);
  }
  uVar4 = FUN_0062519c(param_1);
  if (-1 < (int)uVar4) {
    iVar1 = *(int *)(*(int *)(puVar3 + -0x7fd4) + (int)((uVar4 & 0xffffffff) << 4));
    if (param_2 == -1) {
      if (*(int *)(iVar1 + 0x24) != **(int **)(puVar3 + -0x7fa0)) {
        idol::brbVoice_ConnectPort(iVar1,1,**(int **)(puVar3 + -0x7fa0));
        return;
      }
    }
    else {
      iVar2 = *(int *)(*(int *)(puVar3 + -0x7f90) + param_2 * 4);
      if (*(int *)(iVar1 + 0x24) != iVar2) {
        idol::brbVoice_ConnectPort(iVar1,1,iVar2);
      }
    }
  }
  return;
}



//==== 0062a4c8  ns=989snd  size=0x35c
// sig: undefined snd_SynthSetSpeakerMode(void)
// callers(2): 0060c118 FUN_0060c118; 0060c518 FUN_0060c518
// callees(7): 005cd098 libc::printf; 0061948c 989snd::snd_Printf; 00625bd0 FUN_00625bd0; 006264fc FUN_006264fc; 006420e4 FUN_006420e4; 00647ed0 FUN_00647ed0; 00647f34 FUN_00647f34
// strings: 0066e038: 's_masterVoicePrimary->UnlockPluginParams( 1L << iMasterStandard::kIndex_outMixer_pan ) failed (returned %i)\n' | 0066dfa8: 'snd_SynthSetSpeakerMode(): %s(%d) : Invalid speaker mode.\n' | 0066d690: 'common/boomrang/snd_synth_interface.cpp' | 0066dfe8: 's_masterVoicePrimary->LockPluginParams( &pparams ) failed (returned %i)\n'

uint 989snd::snd_SynthSetSpeakerMode(uint param_1,int param_2)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  uint *puVar4;
  uint *puVar5;
  int iVar6;
  undefined4 *puVar7;
  float fVar8;
  undefined *puVar9;
  int iVar10;
  float *pfVar11;
  uint uVar12;
  int *piVar13;
  int *piVar14;
  int *piVar15;
  double dVar16;
  int local_80;
  float afStack_7c [15];
  
  puVar9 = PTR_PTR_0071b030;
  pfVar11 = (float *)0x0;
  if (param_2 != 0) {
    iVar10 = 0;
    fVar2 = *(float *)(PTR_PTR_0071b030 + -0x7ea4);
    pfVar11 = afStack_7c;
    fVar3 = *(float *)(PTR_PTR_0071b030 + -0x7e9c);
    do {
      fVar8 = fVar3 - (float)*(uint *)(iVar10 + param_2) * fVar2;
      *(float *)((int)pfVar11 + iVar10) = fVar8;
      if (fVar3 <= fVar8) {
        do {
          fVar8 = fVar8 - fVar3;
        } while (fVar3 <= fVar8);
        *(float *)((int)pfVar11 + iVar10) = fVar8;
      }
      bVar1 = iVar10 != 0x1c;
      iVar10 = iVar10 + 4;
    } while (bVar1);
  }
  if (param_1 == 3) {
    iVar10 = FUN_006420e4(0xb,pfVar11);
    if (iVar10 < 0) goto LAB_0062a7a0;
    **(undefined4 **)(puVar9 + -0x7eb0) = 0xb;
  }
  else if (param_1 < 3) {
    iVar10 = FUN_006420e4(1,pfVar11);
    if (iVar10 < 0) {
LAB_0062a7a0:
      return **(uint **)(puVar9 + -0x7e64);
    }
    **(undefined4 **)(puVar9 + -0x7eb0) = 1;
    if (param_1 == 2) {
      **(undefined1 **)(puVar9 + -0x7f50) = 1;
      goto LAB_0062a5c8;
    }
  }
  else {
    if (param_1 != 4) {
      snd_Printf((char)*(undefined4 *)(puVar9 + -0x7e60));
      return **(uint **)(puVar9 + -0x7e64);
    }
    iVar10 = FUN_006420e4(0xd,pfVar11);
    if (iVar10 < 0) goto LAB_0062a7a0;
    **(undefined4 **)(puVar9 + -0x7eb0) = 0xd;
  }
  **(undefined1 **)(puVar9 + -0x7f50) = 0;
LAB_0062a5c8:
  puVar4 = *(uint **)(puVar9 + -0x7e64);
  if (param_1 != *puVar4) {
    puVar5 = *(uint **)(puVar9 + -0x7e7c);
    if (*puVar5 != 0) {
      uVar12 = 0;
      iVar10 = 0;
      piVar14 = *(int **)(puVar9 + -0x7ee8);
      dVar16 = (double)**(float **)(puVar9 + -0x7f88);
      do {
        while( true ) {
          iVar6 = *(int *)(iVar10 + *piVar14 + 0x6c);
          sync(1);
          uVar12 = uVar12 + 1;
          iVar10 = iVar10 + 0x74;
          if (((**(uint **)(iVar6 + 0x14) & 1) != 0) ||
             ((double)*(float *)(*(int *)(iVar6 + 0x10) + 0xc) < dVar16)) break;
          if (*puVar5 <= uVar12) goto LAB_0062a648;
        }
        FUN_006264fc();
      } while (uVar12 < *puVar5);
    }
LAB_0062a648:
    piVar13 = *(int **)(puVar9 + -0x7fd4) + 0x20;
    piVar14 = *(int **)(puVar9 + -0x7fd4);
    do {
      while( true ) {
        piVar15 = piVar14 + 4;
        if (*piVar14 == 0) break;
        FUN_00625bd0(*piVar14);
        piVar14 = piVar15;
        if (piVar15 == piVar13) goto LAB_0062a680;
      }
      piVar14 = piVar15;
    } while (piVar15 != piVar13);
LAB_0062a680:
    puVar7 = *(undefined4 **)(puVar9 + -0x7fa0);
    *puVar4 = param_1;
    iVar10 = FUN_00647ed0(*puVar7,&local_80);
    if (iVar10 != 0) {
      libc::printf(*(char **)(puVar9 + -0x7e5c),iVar10);
    }
    if ((local_80 != 0) && (iVar10 = FUN_00647f34(*puVar7,0x2000), iVar10 != 0)) {
      libc::printf(*(char **)(puVar9 + -0x7e58),iVar10);
      return param_1;
    }
  }
  return param_1;
}



//==== 0062a824  ns=Global  size=0xe8
// sig: undefined FUN_0062a824(void)
// callers(2): 00620b54 FUN_00620b54; 006218e0 FUN_006218e0
// callees(1): 00647dd0 FUN_00647dd0

void FUN_0062a824(int param_1)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  int *piVar4;
  
  puVar3 = PTR_PTR_0071b030;
  iVar1 = *(int *)(param_1 + 0x6c);
  iVar2 = *(int *)(param_1 + 0x70);
  sync(1);
  if ((**(uint **)(iVar1 + 0x14) & 1) == 0) {
    if (**(float **)(PTR_PTR_0071b030 + -0x7f88) <= *(float *)(*(int *)(iVar1 + 0x10) + 0xc))
    goto LAB_0062a884;
  }
  FUN_00647dd0(iVar1,1);
LAB_0062a884:
  if (iVar2 != 0) {
    FUN_00647dd0(iVar2,1);
  }
  piVar4 = (int *)((uint)*(byte *)(param_1 + 0x68) * 0xc + *(int *)(puVar3 + -0x7fc0));
  iVar1 = piVar4[1];
  if (piVar4[2] != iVar1) {
    piVar4[1] = iVar1 + 1;
    *(int *)(iVar1 * 4 + *piVar4) = param_1;
  }
  return;
}



//==== 0062a90c  ns=Global  size=0xa8
// sig: undefined FUN_0062a90c(void)
// callers(0): 
// callees(1): 0061948c 989snd::snd_Printf
// strings: 0066d6b8: '%s(%d) : Invalid parameter.\n' | 0066d690: 'common/boomrang/snd_synth_interface.cpp'

void FUN_0062a90c(double param_1,float *param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_0071b030;
  if (((param_2 == (float *)0x0) || ((double)*(float *)(PTR_PTR_0071b030 + -0x7f64) < param_1)) ||
     (param_1 < 0.0)) {
    989snd::snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b030 + -0x7f70));
    if (**(char **)(puVar1 + -0x7f6c) != '\0') {
      return;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar1 + -0x7f68),0);
  }
  *param_2 = (float)param_1;
  *(undefined1 *)((int)param_2 + 0x6a) = 1;
  return;
}



//==== 0062a9b4  ns=989snd  size=0x4d0
// sig: undefined snd_SynthKeyOnVoice(void)
// callers(1): 0061de48 FUN_0061de48
// callees(6): 005cd098 libc::printf; 0061948c 989snd::snd_Printf; 0062777c FUN_0062777c; 00647ed0 FUN_00647ed0; 00647f34 FUN_00647f34; 00647fa0 FUN_00647fa0
// strings: 0066e1b8: 'psynv->UnlockPluginParamsAndKeyOn( false ) failed (returned %i)\n' | 0066e180: 'psynv->LockPluginParams(&pparams) failed (returned %i)\n' | 0066e118: 'psubv->UnlockPluginParams(1L << iSubmixFatMultiMulti::kIndex_outMixer_pan) failed (returned %i)\n' | 0066e0a8: 'snd_SynthKeyOnVoice(): %s(%d) : Invalid voice context.\n' | 0066d690: 'common/boomrang/snd_synth_interface.cpp' | 0066e0e0: 'psubv->LockPluginParams(&pParams) failed (returned %i)\n'

/* WARNING: Removing unreachable block (ram,0x0062acdc) */
/* WARNING: Removing unreachable block (ram,0x0062ace4) */
/* WARNING: Removing unreachable block (ram,0x0062ad00) */
/* WARNING: Removing unreachable block (ram,0x0062ad48) */
/* WARNING: Removing unreachable block (ram,0x0062ad60) */
/* WARNING: Removing unreachable block (ram,0x0062ab6c) */
/* WARNING: Removing unreachable block (ram,0x0062ab74) */
/* WARNING: Removing unreachable block (ram,0x0062ab80) */
/* WARNING: Removing unreachable block (ram,0x0062ae28) */
/* WARNING: Removing unreachable block (ram,0x0062ab88) */
/* WARNING: Removing unreachable block (ram,0x0062abb8) */
/* WARNING: Removing unreachable block (ram,0x0062ad74) */
/* WARNING: Removing unreachable block (ram,0x0062ac18) */
/* WARNING: Removing unreachable block (ram,0x0062ada4) */
/* WARNING: Removing unreachable block (ram,0x0062ae04) */
/* WARNING: Removing unreachable block (ram,0x0062ae24) */
/* WARNING: Removing unreachable block (ram,0x0062ac84) */

int 989snd::snd_SynthKeyOnVoice(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  int iVar5;
  ulonglong uVar6;
  uint *puVar7;
  double dVar8;
  double dVar9;
  undefined1 local_e0 [4];
  undefined1 local_dc [4];
  uint local_d8 [4];
  longlong local_c8;
  undefined8 local_c0;
  float local_b8 [4];
  longlong local_a8;
  undefined8 local_a0;
  ulonglong local_90;
  
  puVar4 = PTR_PTR_0071b030;
  if (param_1 == (uint *)0x0) {
    snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b030 + -0x7e54));
  }
  local_90 = (ulonglong)param_1[9];
  uVar1 = param_1[0x1c];
  dVar9 = (double)*(float *)(puVar4 + -0x7ea4);
  local_d8[2] = 0;
  local_d8[3] = 0;
  local_c0 = 0;
  local_b8[0] = 0.0;
  local_b8[1] = 0.0;
  local_b8[2] = 0.0;
  local_b8[3] = 0.0;
  local_a0 = 0;
  local_d8[0] = 0;
  local_d8[1] = 0;
  local_c8 = (ulonglong)*param_1 << 0x20;
  uVar2 = param_1[0x1b];
  local_a8 = (ulonglong)(uint)(float)((double)local_90 * dVar9) << 0x20;
  dVar8 = (double)FUN_0062777c(param_1[8]);
  local_b8[0] = (float)dVar8;
  local_d8[0] = param_1[1];
  if (param_1[0xb] != 0) {
    uVar6 = 0;
    puVar7 = param_1 + 0xf;
    do {
      uVar6 = uVar6 + 1;
      local_90 = (ulonglong)*puVar7;
      iVar5 = (int)((uVar6 & 0x3fffffff) << 2);
      uVar3 = puVar7[-3];
      *(uint *)((int)&local_c8 + iVar5) = puVar7[3];
      *(float *)((int)&local_a8 + iVar5) = (float)((double)local_90 * dVar9);
      dVar8 = (double)FUN_0062777c(uVar3);
      uVar3 = param_1[0xb];
      *(float *)((int)local_b8 + iVar5) = (float)dVar8;
      *(uint *)((int)local_d8 + iVar5) = puVar7[6];
      puVar7 = puVar7 + 1;
    } while ((uVar6 & 0xffffffff) < (ulonglong)uVar3);
  }
  if (((longlong)
       ((longlong)((int)uVar1 >> 0x1f) - ((longlong)((int)uVar1 >> 0x1f) ^ (ulonglong)uVar1) << 0x20
       ) < 0) && (iVar5 = FUN_00647ed0(uVar1,local_e0), iVar5 != 0)) {
    libc::printf(*(char **)(puVar4 + -0x7e50),iVar5);
  }
  iVar5 = FUN_00647ed0(uVar2,local_dc);
  if (iVar5 != 0) {
    iVar5 = libc::printf(*(char **)(puVar4 + -0x7e48),iVar5);
  }
  return iVar5;
}



//==== 0062ae84  ns=Global  size=0x1a4
// sig: undefined FUN_0062ae84(void)
// callers(1): 00623554 FUN_00623554
// callees(1): 00640ccc FUN_00640ccc

double FUN_0062ae84(uint param_1)

{
  float fVar1;
  int iVar2;
  undefined *puVar3;
  int *piVar4;
  longlong lVar5;
  double dVar6;
  double dVar7;
  
  puVar3 = PTR_PTR_0071b030;
  fVar1 = *(float *)(PTR_PTR_0071b030 + -0x7fac);
  if ((param_1 & 1) != 0) {
    dVar7 = (double)FUN_00640ccc(*(undefined4 *)(*(int *)(PTR_PTR_0071b030 + -0x7ee0) + 4));
    fVar1 = (float)(dVar7 + (double)*(float *)(puVar3 + -0x7fac));
  }
  dVar7 = (double)fVar1;
  if ((param_1 & 2) != 0) {
    dVar6 = (double)FUN_00640ccc(**(undefined4 **)(puVar3 + -0x7ee0));
    dVar7 = (double)(float)(dVar7 + dVar6);
  }
  if ((param_1 & 4) != 0) {
    iVar2 = *(int *)(puVar3 + -0x7ee0);
    dVar6 = (double)FUN_00640ccc(*(undefined4 *)(iVar2 + 8));
    dVar6 = (double)(float)(dVar7 + dVar6);
    dVar7 = (double)FUN_00640ccc(*(undefined4 *)(iVar2 + 0xc));
    dVar6 = (double)(float)(dVar6 + dVar7);
    dVar7 = (double)FUN_00640ccc(*(undefined4 *)(iVar2 + 0x10));
    dVar6 = (double)(float)(dVar6 + dVar7);
    dVar7 = (double)FUN_00640ccc(*(undefined4 *)(iVar2 + 0x14));
    dVar7 = (double)(float)(dVar6 + dVar7);
  }
  if ((param_1 & 8) != 0) {
    dVar6 = (double)FUN_00640ccc(*(undefined4 *)(*(int *)(puVar3 + -0x7ee0) + 0x18));
    dVar7 = (double)(float)(dVar7 + dVar6);
    lVar5 = 8;
    piVar4 = *(int **)(puVar3 + -0x7fd4);
    do {
      if (*piVar4 != 0) {
        dVar7 = (double)(float)(dVar7 + (double)*(float *)(*(int *)(*piVar4 + 0x18) + 0x70));
      }
      lVar5 = lVar5 + -1;
      piVar4 = piVar4 + 4;
    } while (lVar5 != 0);
  }
  if ((param_1 & 0x10) != 0) {
    iVar2 = *(int *)(puVar3 + -0x7ee0);
    dVar6 = (double)FUN_00640ccc(*(undefined4 *)(iVar2 + 0x1c));
    dVar6 = (double)(float)(dVar7 + dVar6);
    dVar7 = (double)FUN_00640ccc(*(undefined4 *)(iVar2 + 0x24));
    dVar6 = (double)(float)(dVar6 + dVar7);
    dVar7 = (double)FUN_00640ccc(*(undefined4 *)(iVar2 + 0x20));
    dVar6 = (double)(float)(dVar6 + dVar7);
    dVar7 = (double)FUN_00640ccc(1);
    dVar6 = (double)(float)(dVar6 + dVar7);
    dVar7 = (double)FUN_00640ccc(2);
    dVar7 = (double)(float)(dVar6 + dVar7);
  }
  return dVar7;
}



//==== 0062b028  ns=989snd  size=0xe0
// sig: undefined snd_SynthIsVoiceContextFinished(void)
// callers(1): 0061c994 FUN_0061c994
// callees(1): 0061948c 989snd::snd_Printf
// strings: 0066e200: 'snd_SynthIsVoiceContextFinished(): %s(%d) : Invalid voice context!\n' | 0066d690: 'common/boomrang/snd_synth_interface.cpp'

uint 989snd::snd_SynthIsVoiceContextFinished(int param_1)

{
  int iVar1;
  uint *puVar2;
  undefined *puVar3;
  uint uVar4;
  
  puVar3 = PTR_PTR_0071b030;
  if (param_1 == 0) {
    snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b030 + -0x7e40));
  }
  iVar1 = *(int *)(param_1 + 0x6c);
  uVar4 = 0;
  if (iVar1 != 0) {
    puVar2 = *(uint **)(iVar1 + 0x14);
    if (puVar2[9] == *(uint *)(*(int *)(iVar1 + 0x10) + 0x10)) {
      sync(1);
      uVar4 = (*puVar2 ^ 1) & 1;
    }
    else {
      sync(1);
      if (((*puVar2 & 1) != 0) ||
         (*(float *)(*(int *)(iVar1 + 0x10) + 0xc) < **(float **)(puVar3 + -0x7f88))) {
        uVar4 = 0;
      }
      else {
        uVar4 = 1;
      }
    }
  }
  return uVar4;
}



//==== 0062b108  ns=Global  size=0xa8
// sig: undefined FUN_0062b108(void)
// callers(0): 
// callees(1): 006487c0 FUN_006487c0

void FUN_0062b108(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined1 local_30 [4];
  int local_2c [5];
  
  iVar1 = FUN_006487c0(**(undefined4 **)(PTR_PTR_0071b030 + -0x7f8c),local_30,local_2c);
  if (-1 < iVar1) {
    if (param_2 == 0) {
      puVar2 = (undefined4 *)(local_2c[0] + 0x10 + *(int *)(local_2c[0] + 8) * 4);
    }
    else {
      puVar2 = (undefined4 *)(local_2c[0] + 0x10);
    }
    *param_1 = *puVar2;
  }
  return;
}



//==== 0062b1b8  ns=Global  size=0xc8
// sig: undefined FUN_0062b1b8(void)
// callers(0): 
// callees(1): 006487c0 FUN_006487c0

void FUN_0062b1b8(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined1 local_30 [4];
  int local_2c [5];
  
  iVar3 = FUN_006487c0(**(undefined4 **)(PTR_PTR_0071b030 + -0x7fa0),local_30,local_2c);
  if (-1 < iVar3) {
    if (param_2 == 0) {
      iVar3 = local_2c[0] + 0x10 + *(int *)(local_2c[0] + 8) * 4;
    }
    else {
      iVar3 = local_2c[0] + 0x10;
    }
    iVar4 = 0;
    lVar5 = 8;
    do {
      puVar1 = (undefined4 *)(iVar4 + iVar3);
      puVar2 = (undefined4 *)(iVar4 + param_1);
      iVar4 = iVar4 + 4;
      *puVar2 = *puVar1;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  return;
}



//==== 0062b288  ns=989snd  size=0x1f0
// sig: undefined snd_SynthGetVoicePlaybackPosition(void)
// callers(1): 00620150 FUN_00620150
// callees(3): 005cd098 libc::printf; 0061948c 989snd::snd_Printf; 006487c0 FUN_006487c0
// strings: 0066e290: 'voice->GetModuleStates( SamplerMP3::kMID_SAMPLER, &pStates ) failed (returned %i)\n' | 0066e248: 'snd_SynthGetVoicePlaybackPosition(): %s(%d) : Invalid voice context!\n' | 0066d690: 'common/boomrang/snd_synth_interface.cpp' | 0066e2e8: 'voice->GetModuleStates( SamplerMP3s::kMID_SAMPLER, &pStates ) failed (returned %i)\n' | 0066e340: 'voice->GetModuleStates( SamplerFatMonoMulti::kMID_SAMPLER, &pStates ) failed (returned %i)\n'

int 989snd::snd_SynthGetVoicePlaybackPosition(int param_1,undefined4 *param_2)

{
  char cVar1;
  undefined *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined1 local_30 [4];
  undefined1 local_2c [4];
  undefined1 local_28 [4];
  undefined1 local_24 [4];
  
  puVar2 = PTR_PTR_0071b030;
  if (param_1 == 0) {
    snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b030 + -0x7e3c));
  }
  iVar4 = *(int *)(param_1 + 0x6c);
  if (((*(uint **)(iVar4 + 0x14))[9] != *(uint *)(*(int *)(iVar4 + 0x10) + 0x10)) ||
     ((sync(1), (**(uint **)(iVar4 + 0x14) & 1) == 0 &&
      (**(float **)(puVar2 + -0x7f88) <= *(float *)(*(int *)(iVar4 + 0x10) + 0xc))))) {
    uVar3 = 0;
    iVar4 = 0;
  }
  else {
    cVar1 = *(char *)(param_1 + 0x68);
    if ((cVar1 == '\x02') || (cVar1 == '\x03')) {
      iVar5 = FUN_006487c0(iVar4,local_28,local_24);
      uVar3 = uRam00000010;
      iVar4 = iRam00000014;
      if (iVar5 != 0) {
        libc::printf(*(char **)(puVar2 + -0x7e38),iVar5);
        uVar3 = uRam00000010;
        iVar4 = iRam00000014;
      }
    }
    else if (cVar1 == '\x04') {
      iVar5 = FUN_006487c0(iVar4,local_2c,local_24);
      uVar3 = uRam00000010;
      iVar4 = iRam00000014;
      if (iVar5 != 0) {
        libc::printf(*(char **)(puVar2 + -0x7e34),iVar5);
        uVar3 = uRam00000010;
        iVar4 = iRam00000014;
      }
    }
    else {
      iVar4 = FUN_006487c0(iVar4,local_30,local_24);
      if (iVar4 != 0) {
        libc::printf(*(char **)(puVar2 + -0x7e30),iVar4);
      }
      uVar3 = uRam00000038;
      iVar4 = iRam00000018;
      if (iRam00000000 == 0) {
        iVar4 = iRam0000001c - iRam0000000c;
      }
    }
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = uVar3;
  }
  return iVar4;
}



//==== 0062b484  ns=989snd  size=0x1d0
// sig: undefined snd_SynthGetVoicePlaybackLength(void)
// callers(0): 
// callees(3): 005cd098 libc::printf; 0061948c 989snd::snd_Printf; 006487c0 FUN_006487c0
// strings: 0066e3e8: 'voice->GetModuleStates( SamplerADPCM::kMID_SAMPLER, &pStates ) failed (returned %i)\n' | 0066e290: 'voice->GetModuleStates( SamplerMP3::kMID_SAMPLER, &pStates ) failed (returned %i)\n' | 0066e2e8: 'voice->GetModuleStates( SamplerMP3s::kMID_SAMPLER, &pStates ) failed (returned %i)\n' | 0066e3a0: 'snd_SynthGetVoicePlaybackLength(): %s(%d) : Invalid voice context!\n' | 0066d690: 'common/boomrang/snd_synth_interface.cpp'

undefined4 989snd::snd_SynthGetVoicePlaybackLength(int param_1)

{
  char cVar1;
  undefined *puVar2;
  int iVar3;
  undefined1 local_20 [4];
  undefined1 local_1c [4];
  undefined1 local_18 [4];
  undefined1 local_14 [4];
  
  puVar2 = PTR_PTR_0071b030;
  if (param_1 == 0) {
    snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b030 + -0x7e2c));
  }
  iVar3 = *(int *)(param_1 + 0x6c);
  if (((*(uint **)(iVar3 + 0x14))[9] == *(uint *)(*(int *)(iVar3 + 0x10) + 0x10)) &&
     ((sync(1), (**(uint **)(iVar3 + 0x14) & 1) != 0 ||
      (*(float *)(*(int *)(iVar3 + 0x10) + 0xc) < **(float **)(puVar2 + -0x7f88))))) {
    cVar1 = *(char *)(param_1 + 0x68);
    if ((cVar1 == '\x02') || (cVar1 == '\x03')) {
      iVar3 = FUN_006487c0(iVar3,local_18,local_14);
      if (iVar3 != 0) {
        libc::printf(*(char **)(puVar2 + -0x7e38),iVar3);
      }
    }
    else {
      if (cVar1 != '\x04') {
        iVar3 = FUN_006487c0(iVar3,local_20,local_14);
        if (iVar3 != 0) {
          libc::printf(*(char **)(puVar2 + -0x7e28),iVar3);
        }
        return uRam0000003c;
      }
      iVar3 = FUN_006487c0(iVar3,local_1c,local_14);
      if (iVar3 != 0) {
        libc::printf(*(char **)(puVar2 + -0x7e34),iVar3);
      }
    }
    return uRam00000018;
  }
  return 0;
}



//==== 0062b660  ns=989snd  size=0x3ec
// sig: undefined snd_SynthLR1Create(void)
// callers(1): 006237e8 FUN_006237e8
// callees(8): 005cd098 libc::printf; 005cd198 FUN_005cd198; 0061948c 989snd::snd_Printf; 00641a3c FUN_00641a3c; 00641b58 FUN_00641b58; 0064547c FUN_0064547c; 00647ed0 FUN_00647ed0; 00647f34 FUN_00647f34
// strings: 0066e440: '%s(%d) : snd_SynthLR1Create(BOOMRANG): Too many LR1 instances!\n' | 0066d690: 'common/boomrang/snd_synth_interface.cpp' | 0066e480: 'LR1:%d' | 0066e4c8: 'brb_InsertRackUnitLast( g_effectList[slot].pRackUnit ) failed (returned %i)\n' | 0066e590: 'pReverbVoice->LockPluginParams(&pParams) failed (returned %i)\n' | 0066e518: 'g_effectList[slot].pRackUnit->AllocVoice( brbVoice::MaxPriority, &g_effectList[slot].pVoice) failed (returned %i)\n' | 0066e488: 'snd_SynthLR1Create(BRB): Failed to create LR1 instance!\n'

/* WARNING: Removing unreachable block (ram,0x0062b824) */
/* WARNING: Removing unreachable block (ram,0x0062b9e4) */
/* WARNING: Removing unreachable block (ram,0x0062b8a4) */
/* WARNING: Removing unreachable block (ram,0x0062b8fc) */

undefined4 989snd::snd_SynthLR1Create(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  longlong lVar9;
  undefined1 local_70 [4];
  undefined1 local_6c [4];
  undefined1 auStack_68 [24];
  
  puVar3 = PTR_PTR_0071b030;
  iVar4 = 0;
  piVar7 = *(int **)(PTR_PTR_0071b030 + -0x7fd4);
  lVar9 = 8;
  piVar6 = piVar7;
  do {
    if (*piVar6 == 0) {
      if (-1 < iVar4) {
        iVar8 = iVar4 * 0x10;
        FUN_005cd198(auStack_68,0x10,*(undefined4 *)(PTR_PTR_0071b030 + -0x7e20),iVar4);
        puVar1 = *(undefined4 **)(puVar3 + -0x7f94);
        piVar7 = piVar7 + iVar4 * 4;
        uVar2 = *puVar1;
        *puVar1 = 2;
        iVar4 = FUN_00641b58(local_70,1,0,0,0,0,piVar7 + 1,auStack_68);
        *puVar1 = uVar2;
        if (iVar4 < 0) {
          snd_Printf((char)*(undefined4 *)(puVar3 + -0x7e1c));
          return 0;
        }
        iVar4 = *(int *)(puVar3 + -0x7fd4);
        iVar5 = FUN_00641a3c(*(undefined4 *)(iVar8 + iVar4 + 4),0,0);
        if (iVar5 != 0) {
          libc::printf(*(char **)(puVar3 + -0x7e18),iVar5);
        }
        iVar5 = FUN_0064547c(*(undefined4 *)(iVar8 + iVar4 + 4),100,piVar7,0);
        if (iVar5 != 0) {
          libc::printf(*(char **)(puVar3 + -0x7e14),iVar5);
        }
        iVar5 = FUN_00647ed0(*(undefined4 *)(iVar4 + iVar8),local_6c);
        if (iVar5 != 0) {
          libc::printf(*(char **)(puVar3 + -0x7e10),iVar5);
        }
        piVar7 = *(int **)(puVar3 + -0x7fcc);
        uVar2 = *(undefined4 *)(iVar4 + iVar8);
        iVar5 = *piVar7;
        *(undefined4 *)(iVar8 + iVar4 + 8) = 0xffffffff;
        *piVar7 = iVar5 + 1;
        return uVar2;
      }
      break;
    }
    iVar4 = iVar4 + 1;
    piVar6 = piVar6 + 4;
    lVar9 = lVar9 + -1;
  } while (lVar9 != 0);
  snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b030 + -0x7e24));
  return 0;
}



//==== 0062ba54  ns=989snd  size=0x2bc
// sig: undefined snd_SynthQueueVoiceBuffer(void)
// callers(0): 
// callees(5): 0061948c 989snd::snd_Printf; 00627000 989snd::snd_SynthGetFreeVoiceBufferId; 00640c9c FUN_00640c9c; 006486f8 FUN_006486f8; 00648730 FUN_00648730
// strings: 0066e610: 'snd_SynthQueueVoiceBuffer(): %s(%d) : Invalid buffer!\n' | 0066d690: 'common/boomrang/snd_synth_interface.cpp' | 0066d6b8: '%s(%d) : Invalid parameter.\n' | 0066e648: 'snd_SynthQueueVoiceBuffer(): No available buffer!\n' | 0066e5d0: 'snd_SynthQueueVoiceBuffer(): %s(%d) : Invalid voice context!\n'

undefined4
989snd::snd_SynthQueueVoiceBuffer
          (int param_1,int param_2,uint param_3,undefined4 param_4,undefined4 param_5)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined1 local_60 [4];
  undefined1 local_5c [4];
  undefined1 local_58 [4];
  undefined1 local_54 [4];
  undefined4 *local_50 [4];
  
  puVar1 = PTR_PTR_0071b030;
  if (param_1 == 0) {
    snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b030 + -0x7de4));
    snd_Printf((char)*(undefined4 *)(puVar1 + -0x7f70));
    if (**(char **)(puVar1 + -0x7f6c) != '\0') {
      return 0;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar1 + -0x7f68),0);
  }
  if (param_2 == 0) {
    snd_Printf((char)*(undefined4 *)(puVar1 + -0x7de0));
    snd_Printf((char)*(undefined4 *)(puVar1 + -0x7f70));
    if (**(char **)(puVar1 + -0x7f6c) != '\0') {
      return 0;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar1 + -0x7f68),0);
  }
  uVar2 = *(undefined4 *)(param_1 + 0x6c);
  iVar3 = snd_SynthGetFreeVoiceBufferId(param_1);
  if (iVar3 < 0) {
    snd_Printf((char)*(undefined4 *)(puVar1 + -0x7ddc));
    uVar2 = 0;
  }
  else {
    if (*(byte *)(param_1 + 0x68) - 2 < 3) {
      FUN_00648730(uVar2,local_5c,local_50);
      if (local_50[0] == (undefined4 *)0x0) {
        return 0;
      }
      local_50[0][0xb] = 2;
      local_50[0][1] = param_2;
      *local_50[0] = 0;
      local_50[0][2] = param_3;
      local_50[0][6] = param_4;
      local_50[0][7] = param_5;
      FUN_006486f8(uVar2,local_58);
    }
    else {
      uVar5 = param_3 >> 1;
      if (*(byte *)(param_1 + 0x68) != 1) {
        uVar5 = (param_3 >> 4) * 0x1c;
      }
      FUN_00648730(uVar2,local_54,local_50);
      if (local_50[0] == (undefined4 *)0x0) {
        return 0;
      }
      local_50[0][9] = 2;
      local_50[0][2] = 0xffffffff;
      local_50[0][3] = uVar5;
      local_50[0][7] = param_2;
      local_50[0][6] = 0;
      local_50[0][8] = param_3;
      local_50[0][1] = uVar5;
      local_50[0][5] = param_2;
      local_50[0][4] = 0;
      FUN_006486f8(uVar2,local_60);
    }
    *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) ^ 1;
    uVar4 = FUN_00640c9c();
    uVar2 = 1;
    *(undefined4 *)(param_1 + 100) = uVar4;
  }
  return uVar2;
}



//==== 0062bd20  ns=Global  size=0x98
// sig: undefined FUN_0062bd20(void)
// callers(0): 
// callees(1): 006487c0 FUN_006487c0

void FUN_0062bd20(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  undefined1 local_20 [4];
  int local_1c [3];
  
  iVar3 = FUN_006487c0(**(undefined4 **)(PTR_PTR_0071b030 + -0x7fa0),local_20,local_1c);
  if (-1 < iVar3) {
    iVar3 = 0;
    lVar4 = 8;
    do {
      puVar1 = (undefined4 *)(iVar3 + local_1c[0] + 0x120);
      puVar2 = (undefined4 *)(iVar3 + param_1);
      iVar3 = iVar3 + 4;
      *puVar2 = *puVar1;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return;
}



//==== 0062bdc0  ns=Global  size=0x70
// sig: undefined FUN_0062bdc0(void)
// callers(0): 
// callees(1): 006487c0 FUN_006487c0

void FUN_0062bdc0(undefined4 *param_1)

{
  int iVar1;
  undefined1 local_20 [4];
  int local_1c [3];
  
  iVar1 = FUN_006487c0(**(undefined4 **)(PTR_PTR_0071b030 + -0x7f8c),local_20,local_1c);
  if (-1 < iVar1) {
    *param_1 = *(undefined4 *)(local_1c[0] + 0x140);
  }
  return;
}



//==== 0062be38  ns=Global  size=0x4c0
// sig: undefined FUN_0062be38(void)
// callers(1): 00609cf4 FUN_00609cf4
// callees(3): 005cd198 FUN_005cd198; 0061948c 989snd::snd_Printf; 00648820 FUN_00648820
// strings: 0066e740: 'Unknown (%d)' | 0066e750: '\t\tm_dataType = %s\n' | 0066e768: '\t\tm_gain     = %f\n' | 0066e780: '\t\tm_lfeGain  = %f\n' | 0066e798: '\t\tm_azim     = %d\n' | 0066e7b0: '\t\tm_focus    = %d\n' | 0066e7c8: '\t\tm_flags    = 0x%X\n' | 0066e7e0: 'true' (raw) | 0066e7e8: 'false' | 0066e7f0: '\t\tm_dirty    = %s\n' | 0066e808: '\t\tm_pSynthVoice  = 0x%X\n' | 0066e828: '\t\tm_pSubmixVoice = 0x%X\n' | 0066e848: '\n\t\tSynth voice 0x%X PARAMS...\n' | 0066e868: '\t\t\teventBits = 0x%X\n' | 0066e880: '\t\t\teaWrkArea = 0x%X\n' | 0066e898: '\t\t\ttime      = %f\n' | 0066e8b0: '\t\t\tkeyOnCounter = %d\n' | 0066e8c8: '\t\t\tpitch.factor = %f\n' | 0066e8e0: '\n\t\tSynth voice 0x%X STATES...\n' | 0066e900: '\t\t\tstatusBits = 0x%X\n' | 0066e918: '\t\t\teaBase     = 0x%X\n' | 0066e930: '\t\t\tindex      = %d\n' | 0066e948: '\t\t\ttime       = %f\n' | 0066e960: '\t\t\tbadParamMID         = %d\n' | 0066e980: '\t\t\tbadParamModuleDepth = %d\n' | 0066e9a0: '\t\t\tbadContextualU32    = %d\n' | 0066e9c0: '\t\t\twrkAreaSize         = %d\n' | 0066e9e0: '\t\t\tkeyOnCounter        = %d\n' | 0066ea00: '\t\t\tsampler.m_pitch     = %f\n' | 0066ea20: '\n\t\tSubmix voice 0x%X PARAMS...\n'

/* WARNING: Removing unreachable block (ram,0x0062c020) */

void FUN_0062be38(int param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  undefined1 local_80 [4];
  undefined1 local_7c [4];
  undefined1 local_78 [64];
  
  puVar5 = PTR_PTR_0071b030;
  if (param_1 == 0) {
    989snd::snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b030 + -0x7dd8));
  }
  else {
    iVar3 = *(int *)(param_1 + 0x6c);
    iVar4 = *(int *)(param_1 + 0x70);
    bVar1 = *(byte *)(param_1 + 0x68);
    bVar2 = *(byte *)(param_1 + 0x68);
    if (bVar2 < 5) {
                    /* WARNING: Could not recover jumptable at 0x0062c2b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(*(int *)((uint)bVar2 * 4 + *(int *)(PTR_PTR_0071b030 + -0x7dd4)) +
                *(int *)(PTR_PTR_0071b030 + -0x7dd4)))();
      return;
    }
    FUN_005cd198(local_78,0x20,*(undefined4 *)(PTR_PTR_0071b030 + -0x7dbc),bVar2);
    989snd::snd_Printf((char)*(undefined4 *)(puVar5 + -0x7db8));
    989snd::snd_Printf((char)*(undefined4 *)(puVar5 + -0x7db4));
    989snd::snd_Printf((char)*(undefined4 *)(puVar5 + -0x7db0));
    989snd::snd_Printf((char)*(undefined4 *)(puVar5 + -0x7dac));
    989snd::snd_Printf((char)*(undefined4 *)(puVar5 + -0x7da8));
    989snd::snd_Printf((char)*(undefined4 *)(puVar5 + -0x7da4));
    989snd::snd_Printf((char)*(undefined4 *)(puVar5 + -0x7d98));
    989snd::snd_Printf((char)*(undefined4 *)(puVar5 + -0x7d94));
    989snd::snd_Printf((char)*(undefined4 *)(puVar5 + -0x7d90));
    if (iVar3 != 0) {
      989snd::snd_Printf((char)*(undefined4 *)(puVar5 + -0x7d8c));
      sync(1);
      989snd::snd_Printf((char)*(undefined4 *)(puVar5 + -0x7d88));
      989snd::snd_Printf((char)*(undefined4 *)(puVar5 + -0x7d84));
      989snd::snd_Printf((char)*(undefined4 *)(puVar5 + -0x7d80));
      989snd::snd_Printf((char)*(undefined4 *)(puVar5 + -0x7d7c));
      FUN_00648820(iVar3,local_80,local_7c);
      989snd::snd_Printf((char)*(undefined4 *)(puVar5 + -0x7d74));
      sync(1);
      989snd::snd_Printf((char)*(undefined4 *)(puVar5 + -0x7d70));
      989snd::snd_Printf((char)*(undefined4 *)(puVar5 + -0x7d6c));
      989snd::snd_Printf((char)*(undefined4 *)(puVar5 + -0x7d68));
      989snd::snd_Printf((char)*(undefined4 *)(puVar5 + -0x7d64));
      989snd::snd_Printf((char)*(undefined4 *)(puVar5 + -0x7d60));
      989snd::snd_Printf((char)*(undefined4 *)(puVar5 + -0x7d5c));
      989snd::snd_Printf((char)*(undefined4 *)(puVar5 + -0x7d58));
      989snd::snd_Printf((char)*(undefined4 *)(puVar5 + -0x7d54));
      989snd::snd_Printf((char)*(undefined4 *)(puVar5 + -0x7d50));
      if ((*(uint *)(*(int *)(*(int *)(iVar3 + 0x18) + 0x18) + 0x244) | 1) * 8 +
          *(int *)(iVar3 + 0x14) != -0x28) {
        if (bVar1 - 2 < 3) {
          989snd::snd_Printf((char)*(undefined4 *)(puVar5 + -0x7d4c));
        }
        else {
          989snd::snd_Printf((char)*(undefined4 *)(puVar5 + -0x7d4c));
        }
      }
    }
    if (iVar4 != 0) {
      989snd::snd_Printf((char)*(undefined4 *)(puVar5 + -0x7d48));
      sync(1);
      989snd::snd_Printf((char)*(undefined4 *)(puVar5 + -0x7d88));
      989snd::snd_Printf((char)*(undefined4 *)(puVar5 + -0x7d84));
      989snd::snd_Printf((char)*(undefined4 *)(puVar5 + -0x7d80));
      989snd::snd_Printf((char)*(undefined4 *)(puVar5 + -0x7d7c));
      989snd::snd_Printf((char)*(undefined4 *)(puVar5 + -0x7d44));
      sync(1);
      989snd::snd_Printf((char)*(undefined4 *)(puVar5 + -0x7d70));
      989snd::snd_Printf((char)*(undefined4 *)(puVar5 + -0x7d6c));
      989snd::snd_Printf((char)*(undefined4 *)(puVar5 + -0x7d68));
      989snd::snd_Printf((char)*(undefined4 *)(puVar5 + -0x7d64));
      989snd::snd_Printf((char)*(undefined4 *)(puVar5 + -0x7d60));
      989snd::snd_Printf((char)*(undefined4 *)(puVar5 + -0x7d5c));
      989snd::snd_Printf((char)*(undefined4 *)(puVar5 + -0x7d58));
      989snd::snd_Printf((char)*(undefined4 *)(puVar5 + -0x7d54));
      989snd::snd_Printf((char)*(undefined4 *)(puVar5 + -0x7d50));
    }
  }
  return;
}



//==== 0062c3a0  ns=Global  size=0x150
// sig: undefined FUN_0062c3a0(void)
// callers(1): 0061fa5c FUN_0061fa5c
// callees(1): 0061948c 989snd::snd_Printf
// strings: 0066d6b8: '%s(%d) : Invalid parameter.\n' | 0066d690: 'common/boomrang/snd_synth_interface.cpp'

void FUN_0062c3a0(int param_1,uint param_2,uint param_3,int param_4)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  
  puVar1 = PTR_PTR_0071b030;
  if (param_1 == 0) {
    989snd::snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b030 + -0x7f70));
    if (**(char **)(puVar1 + -0x7f6c) != '\0') {
      return;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar1 + -0x7f68),0);
  }
  uVar5 = *(uint *)(param_1 + 0x2c);
  *(uint *)(param_1 + 0x20) = param_2;
  *(uint *)(param_1 + 0x24) = param_3 & (int)~param_2 >> 0x1f;
  if (uVar5 != 0) {
    uVar6 = (ulonglong)uVar5;
    iVar3 = 0;
    if (uVar5 == 0) {
      uVar6 = 1;
    }
    do {
      iVar2 = iVar3 + param_4;
      iVar4 = param_1 + iVar3;
      iVar3 = iVar3 + 4;
      uVar5 = 0;
      *(uint *)(iVar4 + 0x30) = *(uint *)(iVar2 + 0x84) % 0x168;
      if (-1 < *(int *)(iVar2 + 0x84)) {
        uVar5 = *(uint *)(iVar2 + 0x90) % 0x168;
      }
      *(uint *)(iVar4 + 0x3c) = uVar5;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  *(undefined1 *)(param_1 + 0x6a) = 1;
  return;
}



//==== 0062c4f0  ns=Global  size=0x3c
// sig: undefined FUN_0062c4f0(void)
// callers(0): 
// callees(1): 005e387c FUN_005e387c

void FUN_0062c4f0(undefined4 *param_1)

{
  *param_1 = *(undefined4 *)(PTR_PTR_0071b030 + -0x7f9c);
  FUN_005e387c();
  return;
}



//==== 0062c52c  ns=Global  size=0x13ec
// sig: undefined FUN_0062c52c(void)
// callers(1): 0060c518 FUN_0060c518
// callees(12): 005cd098 libc::printf; 00640d14 FUN_00640d14; 00641a3c FUN_00641a3c; 00641b58 FUN_00641b58; 006423dc FUN_006423dc; 006425f4 FUN_006425f4; 00643520 FUN_00643520; 00643f38 FUN_00643f38; 0064547c FUN_0064547c; 00647ed0 FUN_00647ed0; 00647fa0 FUN_00647fa0; 00648b10 idol::brbVoice_ConnectPort
// strings: 0066ea60: 'scream_plugin_pack_mp3' | 0066eb20: 'scream_plugin_pack_synth_submix' | 0066ec08: 'scream_plugin_pack_aux_master' | 0066ece8: 'mp3_sampler_surround' | 0066eda8: 'Master Speakers' | 0066f2d8: 'Premaster Submixes' | 0066f410: 's_rackUnits[kRackUnit_PreMasteringGroupSubmix]->AllocVoice( brbVoice::MaxPriority, &s_premasterVoices[j] ) failed (returned %i)\n' | 0066f498: 's_premasterVoices[j]->ConnectPort( brbPluginClass::OutputPort, s_masterVoicePrimary ) failed (returned %i)\n' | 0066f610: 'Aux Busses' | 0066f738: 's_rackUnits[kRackUnit_AuxBusses]->AllocVoice(brbVoice::MaxPriority, &s_auxBussVoices[i]) failed (returned %i)\n' | 0066fc38: 'MP3 Stereo Sampler' | 0066fdb0: 's_rackUnits[kRackUnit_SamplerMp3Stereo]->AllocVoice(brbVoice::MaxPriority, s_voiceContexts[contextIndex].GetSynthVoiceAddr()) failed (returned %i)\n' | 0066fe48: 'MP3 Mono Sampler' | 0066ffb8: 's_rackUnits[kRackUnit_SamplerMp3Mono]->AllocVoice(brbVoice::MaxPriority, s_voiceContexts[contextIndex].GetSynthVoiceAddr()) failed (returned %i)\n' | 00670050: 'PCMI16 Sampler' | 006701b0: 's_rackUnits[kRackUnit_SamplerPcmI16]->AllocVoice(brbVoice::MaxPriority, s_voiceContexts[contextIndex].GetSynthVoiceAddr()) failed (returned %i)\n' | 00670248: 'ADPCM Sampler' | 006703a0: 's_rackUnits[kRackUnit_SamplerAdpcm]->AllocVoice(brbVoice::MaxPriority, s_voiceContexts[contextIndex].GetSynthVoiceAddr()) failed (returned %i)\n' | 0066f5c0: 's_premasterVoices[j]->UnlockPluginParamsAndKeyOn() failed (returned %i)\n' | 0066f578: 's_premasterVoices[j]->LockPluginParams( &pp ) failed (returned %i)\n' | 0066f508: 's_premasterVoices[j]->ConnectPort( brbPluginClass::SidePort1, s_masterVoiceSecondary ) failed (returned %i)\n' | 0066f620: 'brb_CreateRackUnit(brbSID(BRBSID_AUX_SINK_MONO_MONO), MAX_LR1_INSTANCES, 0L, NULL, NULL, NULL, &s_rackUnits[kRackUnit_AuxBusses], "Aux Busses") failed (returned' | 0066f6c8: 'brb_InsertRackUnit( s_rackUnits[kRackUnit_AuxBusses], NULL, brbRackUnit::InsertBefore ) failed (returned %i)\n' | 0066ed00: 'brb_RegisterPluginPackFromMem(_binary_mp3_sampler_surround_elf_start, (U32) _binary_mp3_sampler_surround_elf_size, "mp3_sampler_surround") failed (returned %i)\n' | 0066ec28: 'brb_RegisterPluginPackFromMem(_binary_scream_plugin_pack_aux_master_elf_start, (U32) _binary_scream_plugin_pack_aux_master_elf_size, "scream_plugin_pack_aux_mas' | 0066eb40: 'brb_RegisterPluginPackFromMem(_binary_scream_plugin_pack_synth_submix_elf_start, (U32) _binary_scream_plugin_pack_synth_submix_elf_size, "scream_plugin_pack_syn' | 0066ea78: 'brb_RegisterPluginPackFromMem(_binary_scream_plugin_pack_mp3_elf_start, (U32) _binary_scream_plugin_pack_mp3_elf_size, "scream_plugin_pack_mp3") failed (returne' | 0066f7a8: 'MP3 Surround Submix' | 0066f8f8: 's_rackUnits[kRackUnit_SubmixMp3Surround]->AllocVoice(brbVoice::MaxPriority, s_voiceContexts[contextIndex].GetSubmixVoiceAddr()) failed (returned %i)\n' | 0066f990: 'MP3 Surround Sampler'

uint FUN_0062c52c(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int *piVar8;
  int iVar9;
  int *piVar10;
  undefined *puVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  undefined4 uVar19;
  float fVar20;
  bool bVar21;
  float fVar22;
  float fVar23;
  undefined4 *puVar24;
  undefined4 *puVar25;
  ulonglong uVar26;
  longlong lVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  undefined1 local_f0 [4];
  undefined1 local_ec [4];
  float *local_e8;
  undefined1 local_e4 [4];
  undefined1 local_e0 [4];
  undefined1 local_dc [4];
  undefined1 local_d8 [4];
  undefined1 local_d4 [4];
  undefined1 local_d0 [4];
  undefined1 local_cc [4];
  undefined1 local_c8 [4];
  undefined1 local_c4 [12];
  
  puVar11 = PTR_PTR_0071b030;
  uVar13 = FUN_00640d14();
  iVar14 = FUN_006423dc(*(undefined4 *)(puVar11 + -0x7ebc),*(undefined4 *)(puVar11 + -0x7d40),
                        *(undefined4 *)(puVar11 + -0x7d3c));
  if (iVar14 != 0) {
    libc::printf(*(char **)(puVar11 + -0x7d38),iVar14);
  }
  iVar14 = FUN_006423dc(*(undefined4 *)(puVar11 + -0x7ec4),*(undefined4 *)(puVar11 + -0x7d34),
                        *(undefined4 *)(puVar11 + -0x7d30));
  if (iVar14 != 0) {
    libc::printf(*(char **)(puVar11 + -0x7d2c),iVar14);
  }
  iVar14 = FUN_006423dc(*(undefined4 *)(puVar11 + -0x7ecc),*(undefined4 *)(puVar11 + -0x7d28),
                        *(undefined4 *)(puVar11 + -0x7d24));
  if (iVar14 != 0) {
    libc::printf(*(char **)(puVar11 + -0x7d20),iVar14);
  }
  iVar14 = FUN_006423dc(*(undefined4 *)(puVar11 + -0x7ed4),*(undefined4 *)(puVar11 + -0x7d1c),
                        *(undefined4 *)(puVar11 + -0x7d18));
  if (iVar14 != 0) {
    libc::printf(*(char **)(puVar11 + -0x7d14),iVar14);
  }
  puVar5 = *(uint **)(puVar11 + -0x7e0c);
  uVar12 = *puVar5;
  iVar14 = FUN_00641b58(local_ec,1,0,0,0,0,*(undefined4 *)(puVar11 + -0x7d10),
                        *(undefined4 *)(puVar11 + -0x7d0c));
  if (iVar14 != 0) {
    libc::printf(*(char **)(puVar11 + -0x7d08),iVar14);
  }
  puVar6 = *(undefined4 **)(puVar11 + -0x7ee0);
  iVar14 = FUN_00641a3c(puVar6[9],0,1);
  if (iVar14 != 0) {
    libc::printf(*(char **)(puVar11 + -0x7d04),iVar14);
  }
  puVar7 = *(undefined4 **)(puVar11 + -0x7fa0);
  iVar14 = FUN_0064547c(puVar6[9],100,puVar7,0);
  if (iVar14 != 0) {
    libc::printf(*(char **)(puVar11 + -32000),iVar14);
  }
  iVar14 = idol::brbVoice_ConnectPort(*puVar7,1,1);
  if (iVar14 != 0) {
    libc::printf(*(char **)(puVar11 + -0x7cfc),iVar14);
  }
  iVar14 = FUN_00647ed0(*puVar7,&local_e8);
  if (iVar14 != 0) {
    libc::printf(*(char **)(puVar11 + -0x7cf8),iVar14);
  }
  fVar22 = (float)(uVar13 - (2 < uVar13));
  fVar23 = (float)(uint)(2 < uVar13);
  if (local_e8 != (float *)0x0) {
    fVar20 = 4.2039e-45;
    if ((uVar12 & 0x40) == 0) {
      fVar20 = (float)(uVar12 >> 5 & 1);
    }
    fVar1 = *(float *)(puVar11 + -0x7fac);
    fVar2 = *(float *)(puVar11 + -0x7f64);
    fVar3 = *(float *)(puVar11 + -0x7cec);
    fVar4 = *(float *)(puVar11 + -0x7ce4);
    *local_e8 = *(float *)(puVar11 + -0x7cf4);
    local_e8[3] = fVar20;
    local_e8[0x13] = fVar3;
    local_e8[1] = 1.12104e-44;
    local_e8[0x14] = fVar4;
    local_e8[2] = fVar2;
    iVar14 = 0;
    local_e8[4] = fVar2;
    lVar27 = 0x18;
    local_e8[5] = 0.0;
    local_e8[9] = 0.0;
    local_e8[0xd] = 0.0;
    local_e8[0x11] = 0.0;
    local_e8[6] = fVar2;
    local_e8[10] = fVar2;
    local_e8[0xe] = fVar2;
    local_e8[0x12] = fVar2;
    local_e8[7] = fVar3;
    local_e8[0xb] = fVar3;
    local_e8[0xf] = fVar3;
    local_e8[8] = fVar4;
    local_e8[0xc] = fVar4;
    local_e8[0x10] = fVar4;
    local_e8[0x15] = 0.0;
    local_e8[0x16] = 0.0;
    local_e8[0x17] = 0.0;
    local_e8[0x18] = fVar1;
    local_e8[0x19] = fVar1;
    local_e8[0x1a] = fVar2;
    local_e8[0x1b] = fVar1;
    local_e8[0x1c] = fVar1;
    fVar20 = *(float *)(puVar11 + -0x7cdc);
    local_e8[0x1d] = fVar1;
    local_e8[0x24] = fVar20;
    local_e8[0x39] = 0.0;
    local_e8[0x1e] = fVar20;
    local_e8[0x1f] = fVar1;
    local_e8[0x20] = fVar2;
    local_e8[0x21] = fVar1;
    local_e8[0x22] = fVar1;
    local_e8[0x23] = fVar1;
    do {
      iVar16 = iVar14 + 0xe8;
      iVar14 = iVar14 + 4;
      *(float *)((int)local_e8 + iVar16) = fVar1;
      lVar27 = lVar27 + -1;
    } while (lVar27 != 0);
    fVar20 = *(float *)(puVar11 + -0x7cd4);
    fVar3 = *(float *)(puVar11 + -0x7e9c);
    uVar19 = *puVar7;
    local_e8[0x2b] = fVar20;
    local_e8[0x55] = 0.0;
    local_e8[0x34] = fVar1;
    local_e8[0x35] = fVar3;
    local_e8[0x37] = fVar2;
    local_e8[0x38] = 1.4013e-45;
    local_e8[0x25] = 1.4013e-45;
    local_e8[0x26] = 1.4013e-45;
    local_e8[0x27] = fVar1;
    local_e8[0x28] = fVar20;
    local_e8[0x29] = fVar1;
    local_e8[0x2a] = fVar1;
    local_e8[0x2c] = fVar1;
    local_e8[0x2d] = 0.0;
    local_e8[0x2e] = fVar1;
    local_e8[0x2f] = fVar1;
    local_e8[0x30] = 0.0;
    local_e8[0x33] = 1.4013e-45;
    local_e8[0x31] = fVar22;
    local_e8[0x32] = fVar23;
    local_e8[0x36] = fVar2;
    iVar14 = FUN_00647fa0(uVar19,0,0);
    if (iVar14 != 0) {
      libc::printf(*(char **)(puVar11 + -0x7ccc),iVar14);
    }
  }
  if ((*puVar5 & 0x80) != 0) {
    iVar14 = FUN_00641b58(local_e4,1,0,0,0,0,*(undefined4 *)(puVar11 + -0x7cc8),
                          *(undefined4 *)(puVar11 + -0x7cc4));
    if (iVar14 != 0) {
      libc::printf(*(char **)(puVar11 + -0x7cc0),iVar14);
    }
    iVar14 = FUN_00641a3c(puVar6[8],0,1);
    if (iVar14 != 0) {
      libc::printf(*(char **)(puVar11 + -0x7cbc),iVar14);
    }
    puVar24 = *(undefined4 **)(puVar11 + -0x7f8c);
    iVar14 = FUN_0064547c(puVar6[8],100,puVar24,0);
    if (iVar14 != 0) {
      libc::printf(*(char **)(puVar11 + -0x7cb8),iVar14);
    }
    iVar14 = idol::brbVoice_ConnectPort(*puVar24,1,2);
    if (iVar14 != 0) {
      libc::printf(*(char **)(puVar11 + -0x7cb4),iVar14);
    }
    iVar14 = FUN_00647ed0(*puVar24,&local_e8);
    if (iVar14 != 0) {
      libc::printf(*(char **)(puVar11 + -0x7cb0),iVar14);
    }
    if (local_e8 != (float *)0x0) {
      fVar20 = *(float *)(puVar11 + -0x7f64);
      uVar19 = *puVar24;
      local_e8[3] = *(float *)(puVar11 + -0x7cd4);
      local_e8[0xb] = 0.0;
      local_e8[1] = 1.4013e-45;
      local_e8[4] = 0.0;
      local_e8[6] = fVar20;
      local_e8[5] = fVar20;
      *local_e8 = 1.4013e-45;
      local_e8[2] = 0.0;
      local_e8[7] = 0.0;
      iVar14 = FUN_00647fa0(uVar19,0,0);
      if (iVar14 != 0) {
        libc::printf(*(char **)(puVar11 + -0x7cac),iVar14);
      }
    }
  }
  puVar5 = *(uint **)(puVar11 + -0x7e68);
  uVar13 = *puVar5;
  if (uVar13 != 0) {
    if (0x10 < uVar13) {
      uVar13 = 0x10;
    }
    *puVar5 = uVar13;
    FUN_006425f4(3,local_c4);
    FUN_00643f38(0,1);
    iVar14 = FUN_00641b58(local_e0,*puVar5,0,0,0,0,*(undefined4 *)(puVar11 + -0x7ca8),
                          *(undefined4 *)(puVar11 + -0x7ca4));
    if (iVar14 == 0) {
      iVar14 = FUN_00641a3c(puVar6[7],0,1);
      if (iVar14 != 0) goto LAB_0062d71c;
LAB_0062c924:
      uVar13 = *puVar5;
    }
    else {
      libc::printf(*(char **)(puVar11 + -0x7ca0),iVar14);
      iVar14 = FUN_00641a3c(puVar6[7],0,1);
      if (iVar14 == 0) goto LAB_0062c924;
LAB_0062d71c:
      libc::printf(*(char **)(puVar11 + -0x7c9c),iVar14);
      uVar13 = *puVar5;
    }
    if (uVar13 != 0) {
      puVar24 = *(undefined4 **)(puVar11 + -0x7f90);
      uVar13 = 0;
      piVar8 = *(int **)(puVar11 + -0x7f8c);
      dVar33 = (double)*(float *)(puVar11 + -0x7f64);
      dVar35 = (double)*(float *)(puVar11 + -0x7cec);
      dVar34 = (double)*(float *)(puVar11 + -0x7ce4);
      dVar32 = (double)*(float *)(puVar11 + -0x7cdc);
      dVar28 = (double)*(float *)(puVar11 + -0x7e9c);
      dVar30 = (double)*(float *)(puVar11 + -0x7c88);
      dVar29 = (double)*(float *)(puVar11 + -0x7c80);
      dVar31 = (double)*(float *)(puVar11 + -0x7c78);
      puVar25 = puVar24;
      do {
        iVar14 = FUN_0064547c(puVar6[7],100,puVar25,0);
        if (iVar14 == 0) {
          iVar14 = idol::brbVoice_ConnectPort(*puVar24,1,*puVar7);
        }
        else {
          libc::printf(*(char **)(puVar11 + -0x7c98),iVar14);
          iVar14 = idol::brbVoice_ConnectPort(*puVar24,1,*puVar7);
        }
        if (iVar14 != 0) {
          libc::printf(*(char **)(puVar11 + -0x7c94),iVar14);
        }
        if ((*piVar8 != 0) && (iVar14 = idol::brbVoice_ConnectPort(*puVar24,3,*piVar8), iVar14 != 0)
           ) {
          libc::printf(*(char **)(puVar11 + -0x7c90),iVar14);
        }
        iVar14 = FUN_00647ed0(*puVar24,&local_e8);
        if (iVar14 != 0) {
          libc::printf(*(char **)(puVar11 + -0x7c8c),iVar14);
        }
        *local_e8 = (float)dVar33;
        local_e8[1] = 0.0;
        local_e8[5] = 0.0;
        local_e8[9] = 0.0;
        local_e8[0xd] = 0.0;
        local_e8[2] = (float)dVar33;
        local_e8[6] = (float)dVar33;
        local_e8[10] = (float)dVar33;
        local_e8[0xe] = (float)dVar33;
        local_e8[3] = (float)dVar35;
        local_e8[7] = (float)dVar35;
        local_e8[0xb] = (float)dVar35;
        local_e8[0xf] = (float)dVar35;
        local_e8[4] = (float)dVar34;
        local_e8[8] = (float)dVar34;
        local_e8[0xc] = (float)dVar34;
        local_e8[0x10] = (float)dVar34;
        local_e8[0x11] = 0.0;
        local_e8[0x12] = 0.0;
        local_e8[0x13] = 0.0;
        local_e8[0x14] = 0.0;
        local_e8[0x15] = (float)dVar30;
        local_e8[0x16] = (float)dVar29;
        local_e8[0x17] = 0.0;
        local_e8[0x18] = (float)dVar31;
        local_e8[0x19] = 0.0;
        local_e8[0x1a] = (float)dVar32;
        local_e8[0x1b] = (float)dVar30;
        local_e8[0x1c] = (float)dVar29;
        local_e8[0x1d] = 0.0;
        local_e8[0x1e] = (float)dVar31;
        local_e8[0x1f] = 0.0;
        local_e8[0x20] = (float)dVar32;
        uVar19 = *puVar24;
        local_e8[0x2e] = 3.57331e-43;
        local_e8[0x33] = 0.0;
        local_e8[0x21] = 0.0;
        local_e8[0x22] = 0.0;
        local_e8[0x23] = 0.0;
        local_e8[0x24] = 0.0;
        local_e8[0x27] = 1.4013e-45;
        local_e8[0x25] = fVar22;
        local_e8[0x26] = fVar23;
        local_e8[0x28] = 0.0;
        local_e8[0x29] = (float)dVar28;
        local_e8[0x2a] = (float)dVar33;
        local_e8[0x2b] = (float)dVar33;
        local_e8[0x2d] = 1.4013e-45;
        local_e8[0x2f] = 0.0;
        local_e8[0x2c] = 0.0;
        iVar14 = FUN_00647fa0(uVar19,0,0);
        if (iVar14 != 0) {
          libc::printf(*(char **)(puVar11 + -0x7c70),iVar14);
        }
        uVar13 = uVar13 + 1;
        puVar25 = puVar25 + 1;
        puVar24 = puVar24 + 1;
      } while (uVar13 < *puVar5);
    }
  }
  iVar14 = FUN_00641b58(local_dc,8,0,0,0,0,*(undefined4 *)(puVar11 + -0x7c6c),
                        *(undefined4 *)(puVar11 + -0x7c68));
  if (iVar14 == 0) {
    iVar14 = FUN_00641a3c(puVar6[6],0,0);
  }
  else {
    libc::printf(*(char **)(puVar11 + -0x7c64),iVar14);
    iVar14 = FUN_00641a3c(puVar6[6],0,0);
  }
  if (iVar14 != 0) {
    libc::printf(*(char **)(puVar11 + -0x7c60),iVar14);
  }
  FUN_006425f4(2,local_c4);
  uVar26 = 0;
  FUN_00643f38(0,1);
  uVar13 = *(uint *)(puVar11 + -0x7f40);
  uVar12 = *(uint *)(puVar11 + -0x7ee0);
  do {
    while (iVar14 = FUN_0064547c(puVar6[6],100,
                                 (uVar26 & 0x3fffffff) * 4 + (ulonglong)uVar13 & 0xffffffff,0),
          iVar14 == 0) {
      uVar26 = uVar26 + 1;
      if (uVar26 == 8) goto LAB_0062cc1c;
    }
    uVar26 = uVar26 + 1;
    libc::printf(*(char **)(puVar11 + -0x7c5c),iVar14);
  } while (uVar26 != 8);
LAB_0062cc1c:
  puVar5 = *(uint **)(puVar11 + -0x7c58);
  if (*puVar5 == 0) {
LAB_0062cc2c:
    bVar21 = false;
    uVar13 = 0;
  }
  else {
    iVar14 = FUN_00641b58(local_c8,*puVar5,0,0,0,0,(ulonglong)uVar12 + 0x14,
                          *(undefined4 *)(puVar11 + -0x7c54));
    if (iVar14 != 0) {
      libc::printf(*(char **)(puVar11 + -0x7c50),iVar14);
    }
    iVar14 = FUN_00641a3c(puVar6[5],0,0);
    if (iVar14 != 0) {
      libc::printf(*(char **)(puVar11 + -0x7c4c),iVar14);
    }
    if (*puVar5 == 0) goto LAB_0062cc2c;
    uVar12 = 0;
    piVar8 = *(int **)(puVar11 + -0x7ee8);
    iVar14 = 0;
    uVar13 = *(uint *)(puVar11 + -0x7ee0);
    do {
      while (iVar16 = FUN_0064547c(puVar6[5],100,iVar14 + *piVar8 + 0x70,0), iVar16 == 0) {
        uVar12 = uVar12 + 1;
        uVar18 = *puVar5;
        iVar14 = iVar14 + 0x74;
        if (uVar18 <= uVar12) goto LAB_0062d3c4;
      }
      uVar12 = uVar12 + 1;
      libc::printf(*(char **)(puVar11 + -0x7c48),iVar16);
      uVar18 = *puVar5;
      iVar14 = iVar14 + 0x74;
    } while (uVar12 < uVar18);
LAB_0062d3c4:
    if (uVar18 == 0) goto LAB_0062cc2c;
    iVar14 = FUN_00641b58(local_f0,uVar18,0,*(undefined4 *)(puVar11 + -0x7c44),0,0,
                          (ulonglong)uVar13 + 0x10,*(undefined4 *)(puVar11 + -0x7c40));
    if (iVar14 != 0) {
      libc::printf(*(char **)(puVar11 + -0x7c3c),iVar14);
    }
    iVar14 = FUN_00641a3c(puVar6[4],0,0);
    if (iVar14 != 0) {
      libc::printf(*(char **)(puVar11 + -0x7c38),iVar14);
    }
    bVar21 = true;
    uVar13 = 0;
    if (*puVar5 != 0) {
      iVar16 = 0;
      iVar14 = *(int *)(puVar11 + -0x7fc0);
      piVar10 = *(int **)(puVar11 + -0x7ee8);
      do {
        iVar17 = FUN_0064547c(puVar6[4],100,iVar16 + *piVar8 + 0x6c,0);
        if (iVar17 == 0) {
          iVar17 = idol::brbVoice_ConnectPort
                             (*(undefined4 *)(iVar16 + *piVar10 + 0x6c),1,
                              *(undefined4 *)(iVar16 + *piVar10 + 0x70));
        }
        else {
          libc::printf(*(char **)(puVar11 + -0x7c34),iVar17);
          iVar17 = idol::brbVoice_ConnectPort
                             (*(undefined4 *)(iVar16 + *piVar10 + 0x6c),1,
                              *(undefined4 *)(iVar16 + *piVar10 + 0x70));
        }
        if (iVar17 != 0) {
          libc::printf(*(char **)(puVar11 + -0x7c30),iVar17);
        }
        *(undefined1 *)(iVar16 + *piVar10 + 0x68) = 4;
        iVar17 = *(int *)(iVar14 + 0x34);
        iVar15 = *piVar10;
        if (*(int *)(iVar14 + 0x38) != iVar17) {
          *(int *)(iVar14 + 0x34) = iVar17 + 1;
          *(int *)(iVar17 * 4 + *(int *)(iVar14 + 0x30)) = iVar16 + iVar15;
        }
        uVar13 = uVar13 + 1;
        iVar16 = iVar16 + 0x74;
      } while (uVar13 < *puVar5);
      bVar21 = true;
    }
  }
  puVar5 = *(uint **)(puVar11 + -0x7c2c);
  if (*puVar5 != 0) {
    uVar19 = 0;
    if (!bVar21) {
      uVar19 = *(undefined4 *)(puVar11 + -0x7c44);
    }
    iVar14 = FUN_00641b58(local_d8,*puVar5,0,uVar19,0,0,*(undefined4 *)(puVar11 + -0x7c28),
                          *(undefined4 *)(puVar11 + -0x7c24));
    if (iVar14 == 0) {
      iVar14 = FUN_00641a3c(puVar6[3],0,0);
      if (iVar14 != 0) goto LAB_0062d838;
LAB_0062ccb4:
      uVar12 = *puVar5;
    }
    else {
      libc::printf(*(char **)(puVar11 + -0x7c20),iVar14);
      iVar14 = FUN_00641a3c(puVar6[3],0,0);
      if (iVar14 == 0) goto LAB_0062ccb4;
LAB_0062d838:
      libc::printf(*(char **)(puVar11 + -0x7c1c),iVar14);
      uVar12 = *puVar5;
    }
    bVar21 = true;
    if (uVar12 != 0) {
      piVar8 = *(int **)(puVar11 + -0x7ee8);
      iVar16 = 0;
      iVar14 = *(int *)(puVar11 + -0x7fc0);
      iVar17 = uVar13 * 0x74;
      do {
        iVar15 = FUN_0064547c(puVar6[3],100,iVar17 + *piVar8 + 0x6c,0);
        if (iVar15 != 0) {
          libc::printf(*(char **)(puVar11 + -0x7c18),iVar15);
        }
        *(undefined1 *)(iVar17 + *piVar8 + 0x68) = 3;
        iVar15 = *(int *)(iVar14 + 0x28);
        iVar9 = *piVar8;
        if (*(int *)(iVar14 + 0x2c) != iVar15) {
          *(int *)(iVar14 + 0x28) = iVar15 + 1;
          *(int *)(iVar15 * 4 + *(int *)(iVar14 + 0x24)) = iVar9 + iVar17;
        }
        uVar12 = iVar16 + 1;
        iVar16 = iVar16 + 1;
        iVar17 = iVar17 + 0x74;
      } while (uVar12 < *puVar5);
      uVar13 = uVar13 + iVar16;
      bVar21 = true;
    }
  }
  puVar5 = *(uint **)(puVar11 + -0x7c14);
  if (*puVar5 != 0) {
    uVar19 = 0;
    if (!bVar21) {
      uVar19 = *(undefined4 *)(puVar11 + -0x7c44);
    }
    iVar14 = FUN_00641b58(local_d4,*puVar5,0,uVar19,0,0,*(undefined4 *)(puVar11 + -0x7c10),
                          *(undefined4 *)(puVar11 + -0x7c0c));
    if (iVar14 == 0) {
      iVar14 = FUN_00641a3c(puVar6[2],0,0);
      if (iVar14 != 0) goto LAB_0062d798;
LAB_0062ce04:
      uVar12 = *puVar5;
    }
    else {
      libc::printf(*(char **)(puVar11 + -0x7c08),iVar14);
      iVar14 = FUN_00641a3c(puVar6[2],0,0);
      if (iVar14 == 0) goto LAB_0062ce04;
LAB_0062d798:
      libc::printf(*(char **)(puVar11 + -0x7c04),iVar14);
      uVar12 = *puVar5;
    }
    bVar21 = true;
    if (uVar12 != 0) {
      piVar8 = *(int **)(puVar11 + -0x7ee8);
      iVar16 = 0;
      iVar14 = *(int *)(puVar11 + -0x7fc0);
      iVar17 = uVar13 * 0x74;
      do {
        iVar15 = FUN_0064547c(puVar6[2],100,iVar17 + *piVar8 + 0x6c,0);
        if (iVar15 != 0) {
          libc::printf(*(char **)(puVar11 + -0x7c00),iVar15);
        }
        *(undefined1 *)(iVar17 + *piVar8 + 0x68) = 2;
        iVar15 = *(int *)(iVar14 + 0x1c);
        iVar9 = *piVar8;
        if (*(int *)(iVar14 + 0x20) != iVar15) {
          *(int *)(iVar14 + 0x1c) = iVar15 + 1;
          *(int *)(iVar15 * 4 + *(int *)(iVar14 + 0x18)) = iVar9 + iVar17;
        }
        uVar12 = iVar16 + 1;
        iVar16 = iVar16 + 1;
        iVar17 = iVar17 + 0x74;
      } while (uVar12 < *puVar5);
      uVar13 = uVar13 + iVar16;
      bVar21 = true;
    }
  }
  puVar5 = *(uint **)(puVar11 + -0x7bfc);
  if (*puVar5 == 0) goto LAB_0062d024;
  uVar19 = 0;
  if (!bVar21) {
    uVar19 = *(undefined4 *)(puVar11 + -0x7c44);
  }
  iVar14 = FUN_00641b58(local_d0,*puVar5,0,uVar19,0,0,*(undefined4 *)(puVar11 + -0x7bf8),
                        *(undefined4 *)(puVar11 + -0x7bf4));
  if (iVar14 == 0) {
    iVar14 = FUN_00641a3c(puVar6[1],0,0);
    if (iVar14 != 0) goto LAB_0062d7e8;
LAB_0062cf54:
    uVar12 = *puVar5;
  }
  else {
    libc::printf(*(char **)(puVar11 + -0x7bf0),iVar14);
    iVar14 = FUN_00641a3c(puVar6[1],0,0);
    if (iVar14 == 0) goto LAB_0062cf54;
LAB_0062d7e8:
    libc::printf(*(char **)(puVar11 + -0x7bec),iVar14);
    uVar12 = *puVar5;
  }
  bVar21 = true;
  if (uVar12 != 0) {
    piVar8 = *(int **)(puVar11 + -0x7ee8);
    iVar16 = 0;
    iVar14 = *(int *)(puVar11 + -0x7fc0);
    iVar17 = uVar13 * 0x74;
    do {
      iVar15 = FUN_0064547c(puVar6[1],100,iVar17 + *piVar8 + 0x6c,0);
      if (iVar15 != 0) {
        libc::printf(*(char **)(puVar11 + -0x7be8),iVar15);
      }
      *(undefined1 *)(iVar17 + *piVar8 + 0x68) = 1;
      iVar15 = *(int *)(iVar14 + 0x10);
      iVar9 = *piVar8;
      if (*(int *)(iVar14 + 0x14) != iVar15) {
        *(int *)(iVar14 + 0x10) = iVar15 + 1;
        *(int *)(iVar15 * 4 + *(int *)(iVar14 + 0xc)) = iVar9 + iVar17;
      }
      uVar12 = iVar16 + 1;
      iVar16 = iVar16 + 1;
      iVar17 = iVar17 + 0x74;
    } while (uVar12 < *puVar5);
    uVar13 = uVar13 + iVar16;
    bVar21 = true;
  }
LAB_0062d024:
  puVar5 = *(uint **)(puVar11 + -0x7be4);
  if (*puVar5 != 0) {
    uVar19 = 0;
    if (!bVar21) {
      uVar19 = *(undefined4 *)(puVar11 + -0x7c44);
    }
    iVar14 = FUN_00641b58(local_cc,*puVar5,0,uVar19,0,0,puVar6,*(undefined4 *)(puVar11 + -0x7be0));
    if (iVar14 != 0) {
      libc::printf(*(char **)(puVar11 + -0x7bdc),iVar14);
    }
    iVar14 = FUN_00641a3c(*puVar6,0,0);
    if (iVar14 != 0) {
      libc::printf(*(char **)(puVar11 + -0x7bd8),iVar14);
    }
    if (*puVar5 != 0) {
      uVar12 = 0;
      piVar8 = *(int **)(puVar11 + -0x7fc0);
      piVar10 = *(int **)(puVar11 + -0x7ee8);
      iVar14 = uVar13 * 0x74;
      do {
        iVar16 = FUN_0064547c(*puVar6,100,iVar14 + *piVar10 + 0x6c,0);
        if (iVar16 != 0) {
          libc::printf(*(char **)(puVar11 + -0x7bd4),iVar16);
        }
        *(undefined1 *)(iVar14 + *piVar10 + 0x68) = 0;
        iVar16 = piVar8[1];
        iVar17 = *piVar10;
        if (piVar8[2] != iVar16) {
          piVar8[1] = iVar16 + 1;
          *(int *)(iVar16 * 4 + *piVar8) = iVar17 + iVar14;
        }
        uVar12 = uVar12 + 1;
        iVar14 = iVar14 + 0x74;
      } while (uVar12 < *puVar5);
    }
  }
  uVar13 = FUN_00643520(0);
  return uVar13 >> 0x1f ^ 1;
}



//==== 0062d940  ns=Global  size=0x254
// sig: undefined FUN_0062d940(void)
// callers(2): 0062db94 FUN_0062db94; 0062dce0 FUN_0062dce0
// callees(2): 005dcbd8 FUN_005dcbd8; 005dd718 FUN_005dd718
// strings: 00702ab0: '?333' (raw)

void FUN_0062d940(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 float *param_5,float *param_6)

{
  float fVar1;
  float fVar2;
  undefined *puVar3;
  undefined8 uVar4;
  double extraout_f1;
  double extraout_f1_00;
  double extraout_f1_01;
  double extraout_f1_02;
  double extraout_f1_03;
  double extraout_f1_04;
  double extraout_f1_05;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  puVar3 = PTR_PTR_0071b030;
  uVar4 = FUN_005dd718(param_3,1);
  dVar8 = (double)*(float *)(puVar3 + -0x7bd0);
  dVar10 = (double)*(float *)(puVar3 + -0x7bc8);
  dVar9 = dVar10;
  if (dVar10 <= (double)(float)(extraout_f1 * dVar8)) {
    uVar4 = FUN_005dd718(param_1,uVar4,1);
    dVar10 = (double)*(float *)(puVar3 + -0x7fac);
    if ((double)(float)(extraout_f1_02 * dVar8) <= dVar10) {
      uVar4 = FUN_005dd718(param_1,uVar4,1);
      dVar5 = (double)*(float *)(puVar3 + -0x7bb8);
      dVar10 = (double)(float)(extraout_f1_05 * dVar8);
      fVar1 = (float)(dVar5 - dVar10);
      goto LAB_0062d9b8;
    }
    dVar5 = (double)*(float *)(puVar3 + -0x7bb8);
    dVar6 = dVar5;
    uVar4 = FUN_005dd718(param_2,uVar4,1);
    if ((double)(float)(extraout_f1_03 * dVar8) < dVar9) goto LAB_0062d9d4;
  }
  else {
    fVar1 = *(float *)(puVar3 + -0x7bc0);
    dVar5 = (double)*(float *)(puVar3 + -0x7bb8);
LAB_0062d9b8:
    dVar6 = (double)fVar1;
    uVar4 = FUN_005dd718(param_2,uVar4,1);
    if ((double)(float)(extraout_f1_00 * dVar8) < dVar9) {
LAB_0062d9d4:
      dVar7 = (double)*(float *)(puVar3 + -0x7bc0);
      goto LAB_0062d9dc;
    }
  }
  dVar7 = dVar5;
  uVar4 = FUN_005dd718(param_2,uVar4,1);
  dVar9 = (double)*(float *)(puVar3 + -0x7fac);
  if ((double)(float)(extraout_f1_04 * dVar8) <= dVar9) {
    dVar9 = (double)FUN_005dd718(param_2,uVar4,1);
    dVar9 = (double)(float)(dVar9 * dVar8);
    dVar7 = (double)(float)(dVar5 - dVar9);
  }
LAB_0062d9dc:
  if (dVar10 <= dVar5) {
    fVar1 = *(float *)(puVar3 + -0x7bb0);
  }
  else {
    fVar1 = *(float *)(puVar3 + -0x7f64);
  }
  if (dVar5 < dVar9) {
    dVar9 = -(double)((float)(dVar9 / dVar5) * *(float *)(puVar3 + -0x7ba0) +
                     *(float *)(puVar3 + -0x7b98));
  }
  else {
    dVar9 = (double)*(float *)(puVar3 + -0x7ba8);
  }
  dVar8 = (double)*(float *)(puVar3 + -0x7ce4);
  dVar10 = (double)FUN_005dcbd8(dVar8,(double)(float)(dVar6 / (double)fVar1));
  dVar10 = (double)(float)(dVar10 * (double)*(float *)(puVar3 + -0x7b90));
  uVar4 = FUN_005dcbd8(dVar8,(double)(float)(dVar7 / dVar9));
  dVar9 = (double)FUN_005dd718((double)(float)((double)(float)(extraout_f1_01 *
                                                              (double)*(float *)(puVar3 + -0x7b88))
                                              / dVar10),uVar4,0);
  fVar1 = (float)(dVar9 * (double)*(float *)(puVar3 + -0x7b80));
  fVar2 = *(float *)(puVar3 + -0x7b78);
  if (fVar1 < fVar2) {
    dVar9 = (double)*(float *)(puVar3 + -0x7b70);
  }
  else {
    fVar2 = *(float *)(puVar3 + -0x7b68);
    if (fVar2 < fVar1) {
      dVar9 = (double)*(float *)(puVar3 + -0x7b60);
    }
    else {
      dVar9 = (double)(fVar1 * *(float *)(puVar3 + -0x7eac));
      fVar2 = fVar1;
    }
  }
  *param_6 = fVar2;
  dVar9 = (double)FUN_005dcbd8(dVar8,dVar9);
  *param_5 = (float)(dVar10 * dVar9);
  return;
}



//==== 0062db94  ns=Global  size=0x14c
// sig: undefined FUN_0062db94(void)
// callers(1): 006235c0 FUN_006235c0
// callees(5): 0061948c 989snd::snd_Printf; 0062519c FUN_0062519c; 0062d940 FUN_0062d940; 00647ed0 FUN_00647ed0; 00647f34 FUN_00647f34
// strings: 0066d6b8: '%s(%d) : Invalid parameter.\n' | 0066d690: 'common/boomrang/snd_synth_interface.cpp'

/* WARNING: Removing unreachable block (ram,0x0062dc54) */
/* WARNING: Removing unreachable block (ram,0x0062dcbc) */
/* WARNING: Removing unreachable block (ram,0x0062dc60) */
/* WARNING: Removing unreachable block (ram,0x0062dc74) */

void FUN_0062db94(int param_1,int *param_2)

{
  undefined *puVar1;
  ulonglong uVar2;
  undefined1 local_30 [24];
  
  puVar1 = PTR_PTR_0071b030;
  if ((((param_1 == 0) || (param_2 == (int *)0x0)) || (*param_2 < 0)) || (9 < *param_2)) {
    989snd::snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b030 + -0x7f70));
    if (**(char **)(puVar1 + -0x7f6c) != '\0') {
      return;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar1 + -0x7f68),0);
  }
  uVar2 = FUN_0062519c(param_1);
  if (-1 < (int)uVar2) {
    FUN_00647ed0(*(undefined4 *)(*(int *)(puVar1 + -0x7fd4) + (int)((uVar2 & 0xffffffff) << 4)),
                 local_30);
  }
  return;
}



//==== 0062dce0  ns=Global  size=0x19c
// sig: undefined FUN_0062dce0(void)
// callers(2): 0062de84 FUN_0062de84; 0062ee18 FUN_0062ee18
// callees(5): 005cd098 libc::printf; 0061948c 989snd::snd_Printf; 0062d940 FUN_0062d940; 006486f8 FUN_006486f8; 00648730 FUN_00648730
// strings: 0066d840: 'voice->LockModuleParams(modID, &pparams) failed (returned %i)\n' | 00670430: 'ERROR: illegal filter index: %i\n'

/* WARNING: Removing unreachable block (ram,0x0062dd8c) */
/* WARNING: Removing unreachable block (ram,0x0062ddf4) */
/* WARNING: Removing unreachable block (ram,0x0062ddb8) */

ulonglong FUN_0062dce0(int param_1,ulonglong param_2,int *param_3)

{
  int iVar1;
  undefined *puVar2;
  ulonglong uVar3;
  int32_t iVar4;
  int local_4c;
  undefined1 local_48 [8];
  undefined1 local_40 [4];
  int local_3c [5];
  
  puVar2 = PTR_PTR_0071b030;
  iVar1 = *(int *)(param_1 + 0x70);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x6c);
  }
  if (4 < (param_2 & 0xffffffff)) {
    uVar3 = (ulonglong)*(uint *)(PTR_PTR_0071b030 + -0x7b58);
    989snd::snd_Printf((char)*(uint *)(PTR_PTR_0071b030 + -0x7b58));
    return uVar3;
  }
  if (*param_3 == 9) {
    FUN_0062d940((double)(float)param_3[1],(double)(float)param_3[2],iVar1,param_2,&local_4c,
                 local_3c);
    *param_3 = 4;
    param_3[2] = local_4c;
    param_3[3] = local_3c[0];
  }
  uVar3 = FUN_00648730(iVar1,local_40,local_48);
  if ((int)uVar3 != 0) {
    iVar4 = libc::printf(*(char **)(puVar2 + -0x7f38),(int)uVar3);
    uVar3 = (ulonglong)iVar4;
  }
  return uVar3;
}



//==== 0062de84  ns=Global  size=0x2bc
// sig: undefined FUN_0062de84(void)
// callers(2): 0061fa5c FUN_0061fa5c; 0062e140 989snd::snd_SynthSetVoiceData
// callees(4): 0061948c 989snd::snd_Printf; 00625c88 FUN_00625c88; 00625f8c FUN_00625f8c; 0062dce0 FUN_0062dce0
// strings: 0066d6b8: '%s(%d) : Invalid parameter.\n' | 0066d690: 'common/boomrang/snd_synth_interface.cpp'

void FUN_0062de84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 int param_5)

{
  uint uVar1;
  ulonglong uVar2;
  undefined *puVar3;
  uint *in_r8;
  ulonglong uVar4;
  undefined1 local_60 [16];
  
  puVar3 = PTR_PTR_0071b030;
  if (param_5 == 0) {
    989snd::snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b030 + -0x7f70));
    if (**(char **)(puVar3 + -0x7f6c) != '\0') {
      return;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar3 + -0x7f68),0);
  }
  if (in_r8 != (uint *)0x0) {
    uVar1 = *in_r8;
    if ((uVar1 & 1) != 0) {
      FUN_0062dce0(param_5,0,in_r8 + 1);
      uVar1 = *in_r8;
    }
    if ((uVar1 & 2) != 0) {
      FUN_0062dce0(param_5,1,in_r8 + 5);
      uVar1 = *in_r8;
    }
    if ((uVar1 & 4) != 0) {
      FUN_0062dce0(param_5,2,in_r8 + 9);
      uVar1 = *in_r8;
    }
    if ((uVar1 & 8) != 0) {
      FUN_0062dce0(param_5,3,in_r8 + 0xd);
      uVar1 = *in_r8;
    }
    if ((uVar1 & 0x10) != 0) {
      FUN_00625c88((double)(float)in_r8[0x11],(double)(float)in_r8[0x12],param_5);
      uVar1 = *in_r8;
    }
    if ((uVar1 & 0x100) != 0) {
      FUN_0062dce0(param_5,4,in_r8 + 0x1b);
      uVar1 = *in_r8;
    }
    if ((uVar1 & 0x2a0) == 0) {
      return;
    }
    FUN_00625f8c(param_1,param_2,param_3,param_4,param_5);
    return;
  }
  uVar4 = 0;
  do {
    uVar2 = uVar4 & 0xffffffff;
    uVar4 = uVar4 + 1;
    FUN_0062dce0(param_5,uVar2,local_60);
  } while (uVar4 != 5);
  FUN_00625c88((double)*(float *)(puVar3 + -0x7fac),(double)*(float *)(puVar3 + -0x7fac),param_5);
  return;
}



//==== 0062e140  ns=989snd  size=0xcd8
// sig: undefined snd_SynthSetVoiceData(void)
// callers(1): 006218e0 FUN_006218e0
// callees(10): 005cd098 libc::printf; 0061948c 989snd::snd_Printf; 0062777c FUN_0062777c; 0062de84 FUN_0062de84; 0063000c FUN_0063000c; 00640c9c FUN_00640c9c; 00647ed0 FUN_00647ed0; 00647f34 FUN_00647f34; 00647fa0 FUN_00647fa0; 00648b10 idol::brbVoice_ConnectPort
// strings: 00670640: 'psv->UnlockPluginParamsAndKeyOn( false ) failed (returned %i)\n' | 0066d6b8: '%s(%d) : Invalid parameter.\n' | 0066d690: 'common/boomrang/snd_synth_interface.cpp' | 00670560: 'pcv->ConnectPort( brbPluginClass::OutputPort, s_premasterVoices[voiceOutputDest] ) failed (returned %i)\n' | 00670458: 'SCREAM ERROR: THIS SYSTEM ONLY SUPPORTS ADPCM, MP3, AND PCMI16 VOICE DATA! (NOT %d)\n' | 00670608: 'pv->UnlockPluginParams( 0L ) failed (returned %i)\n' | 006705d0: 'pv->LockPluginParams(&pparams) failed (returned %i)\n' | 00670500: 'pcv->ConnectPort( brbPluginClass::OutputPort, s_masterVoicePrimary ) failed (returned %i)\n' | 006704b0: 'snd_SynthSetVoiceData(): Synth not initialized to play voices of type %d!\n'

undefined4
989snd::snd_SynthSetVoiceData
          (int param_1,int param_2,uint param_3,int param_4,int param_5,int param_6,char param_7,
          ulonglong param_8)

{
  bool bVar1;
  double dVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  undefined *puVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  int iVar13;
  int32_t iVar14;
  longlong lVar15;
  undefined4 *puVar16;
  ulonglong uVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  float *pfVar21;
  double dVar22;
  double dVar23;
  int in_stack_00000074;
  uint *in_stack_0000007c;
  char in_stack_00000087;
  int in_stack_0000008c;
  undefined1 local_f0 [4];
  undefined4 *local_ec;
  float local_e8 [10];
  char local_c0;
  longlong local_b0;
  
  puVar7 = PTR_PTR_0071b030;
  local_c0 = param_7;
  if (((param_1 == 0) || (param_2 == 0)) || (param_3 == 0)) {
    snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b030 + -0x7f70));
    if (**(char **)(puVar7 + -0x7f6c) != '\0') {
      return 0;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar7 + -0x7f68),0);
    param_2 = param_2 + **(int **)(puVar7 + -0x7fc8);
    iVar11 = param_2;
    if (param_4 != 1) goto LAB_0062e1fc;
LAB_0062e7c8:
    uVar20 = param_3 >> 1;
    lVar15 = 1;
    uVar12 = 1;
    iVar10 = -1;
    if (param_6 != 0) {
      uVar8 = param_6 - iVar11;
      iVar10 = ((int)uVar8 >> 1) + (uint)((int)uVar8 < 0 && (uVar8 & 1) != 0);
    }
  }
  else {
    param_2 = param_2 + **(int **)(PTR_PTR_0071b030 + -0x7fc8);
    iVar11 = param_2;
    if (param_4 == 1) goto LAB_0062e7c8;
LAB_0062e1fc:
    iVar11 = param_2;
    if (param_4 == 0) {
      lVar15 = 0;
      uVar20 = (param_3 >> 4) * 0x1c;
      uVar12 = 0;
      iVar10 = -1;
      if (param_6 != 0) {
        uVar8 = param_6 - param_2;
        iVar10 = (((int)uVar8 >> 4) + (uint)((int)uVar8 < 0 && (uVar8 & 0xf) != 0)) * 0x1c;
      }
    }
    else {
      if (2 < param_4 - 2U) {
        snd_Printf((char)*(undefined4 *)(puVar7 + -0x7b4c));
        return 0;
      }
      if (param_5 == 0) {
        param_3 = param_3 - 0x80;
        iVar11 = param_2 + 0x80;
        param_5 = param_2;
      }
      lVar15 = 2;
      uVar12 = 0;
      uVar20 = 0;
      iVar10 = -1;
      if ((*(int *)(param_5 + 0x18) != 1) && (lVar15 = 3, *(int *)(param_5 + 0x18) != 2)) {
        lVar15 = 4;
      }
    }
  }
  iVar5 = *(int *)(param_1 + 0x6c);
  iVar13 = *(int *)(param_1 + 0x70);
  if (*(int *)(*(int *)(puVar7 + -0x7ee0) + (int)(lVar15 << 2)) == 0) {
    snd_Printf((char)*(undefined4 *)(puVar7 + -0x7b48));
    return 0;
  }
  *(uint *)(param_1 + 0x28) = (uint)param_8;
  if (*(char *)(param_1 + 0x69) != in_stack_00000074) {
    iVar9 = iVar13;
    if (iVar13 == 0) {
      iVar9 = iVar5;
    }
    if (in_stack_00000074 == -1) {
      iVar9 = idol::brbVoice_ConnectPort(iVar9,1,**(undefined4 **)(puVar7 + -0x7fa0));
      if (iVar9 != 0) {
        libc::printf(*(char **)(puVar7 + -0x7b44),iVar9);
      }
    }
    else {
      iVar9 = idol::brbVoice_ConnectPort
                        (iVar9,1,*(undefined4 *)(*(int *)(puVar7 + -0x7f90) + in_stack_00000074 * 4)
                        );
      if (iVar9 != 0) {
        libc::printf(*(char **)(puVar7 + -0x7b40),iVar9);
      }
    }
    *(char *)(param_1 + 0x69) = (char)in_stack_00000074;
  }
  lVar15 = 0;
  do {
    iVar18 = (int)lVar15;
    uVar17 = ((longlong)iVar18 / 3 + ((longlong)iVar18 >> 0x3f) & 0xffffffffU) -
             (longlong)(iVar18 >> 0x1f);
    uVar17 = lVar15 - ((uVar17 & 0x7fffffff) * 2 + uVar17);
    lVar15 = lVar15 + 1;
    iVar9 = (int)((uVar17 & 0xffffffff) << 2);
    *(undefined4 *)(param_1 + iVar9 + 8) = 0;
    *(undefined4 *)(param_1 + iVar9 + 0x14) = 0;
  } while (iVar18 != 2);
  if ((in_stack_0000007c == (uint *)0x0) || ((*in_stack_0000007c & 0x400) == 0)) {
    uVar8 = 0;
    uVar19 = 1;
  }
  else {
    uVar8 = in_stack_0000007c[0x20];
    uVar19 = uVar8 + 1;
  }
  *(uint *)(param_1 + 0x2c) = uVar8;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (2 < param_4 - 2U) {
    iVar13 = FUN_00647ed0(iVar5,local_f0);
    if (iVar13 != 0) {
      libc::printf(*(char **)(puVar7 + -0x7b3c),iVar13);
    }
    uRam00000010 = 0;
    iRam0000001c = iVar11;
    if (param_6 != 0) {
      iRam0000001c = param_6;
    }
    fRam00000028 = *(float *)(puVar7 + -0x7f64);
    dVar23 = (double)fRam00000028;
    uRam0000002c = 4;
    uRam00000018 = 0;
    uRam00000024 = 0;
    uRam00000000 = uVar12;
    uRam00000004 = uVar20;
    iRam00000008 = iVar10;
    uRam0000000c = uVar20;
    iRam00000014 = iVar11;
    uRam00000020 = param_3;
    FUN_0063000c(0x80ff,0xdfe0,0x2c);
    uVar12 = *(undefined4 *)(puVar7 + -0x7cec);
    uVar4 = *(undefined4 *)(puVar7 + -0x7ce4);
    lVar15 = 5;
    uRam00000070 = 0;
    fRam00000074 = (float)dVar23;
    fRam00000078 = (float)dVar23;
    iVar11 = 0;
    do {
      *(undefined4 *)(iVar11 + 0x88) = uVar4;
      *(undefined4 *)(iVar11 + 0x7c) = 0;
      *(float *)(iVar11 + 0x80) = (float)dVar23;
      *(undefined4 *)(iVar11 + 0x84) = uVar12;
      lVar15 = lVar15 + -1;
      iVar11 = iVar11 + 0x10;
    } while (lVar15 != 0);
    uRam000000e4 = (uint)param_8 & 0x20;
    uRam000000d4 = 0;
    uRam000000cc = 0;
    uRam000000d0 = 0;
    uRam000000d8 = 0;
    uRam000000e0 = 0;
    if ((param_8 & 0x20) != 0) {
      uRam000000e4 = 2;
    }
    if ((param_8 & 0x40) == 0) {
      uRam000000e4 = uRam000000e4 | 0x40;
    }
    if (**(char **)(puVar7 + -0x7f50) == '\0') {
      uVar17 = ((ulonglong)uRam000000e4 & 0xf) << 0x1a | (ulonglong)(uRam000000e4 >> 6);
      uRam000000e4 = (uint)(uVar17 << 6) | (uint)uVar17 >> 0x1a;
    }
    else {
      uRam000000e4 = uRam000000e4 | 0x30;
    }
    lVar15 = 4;
    puVar16 = (undefined4 *)0xe8;
    uRam000000dc = uVar19;
    do {
      puVar16[3] = 0;
      *puVar16 = 0;
      puVar16[1] = 0;
      puVar16[2] = 0;
      lVar15 = lVar15 + -1;
      puVar16 = puVar16 + 4;
    } while (lVar15 != 0);
    uRam00000128 = (uint)(param_8 >> 7) & 1;
    iVar11 = FUN_00647f34(iVar5,0);
    if (iVar11 != 0) goto LAB_0062ec58;
    goto LAB_0062e6e0;
  }
  pfVar21 = (float *)0x0;
  local_e8[6] = 0.0;
  local_e8[7] = 0.0;
  local_e8[0] = 0.0;
  local_e8[1] = 0.0;
  local_e8[2] = 0.0;
  local_e8[3] = 0.0;
  local_e8[4] = 0.0;
  local_e8[5] = 0.0;
  if (in_stack_0000008c != 0) {
    iVar10 = 0;
    dVar23 = (double)*(float *)(puVar7 + -0x7e9c);
    pfVar21 = local_e8;
    do {
      dVar22 = (double)FUN_0062777c(*(undefined4 *)(iVar10 + in_stack_0000008c));
      *(float *)(iVar10 + (int)pfVar21) = (float)dVar22;
      if (dVar23 <= dVar22) {
        do {
          dVar2 = dVar22 - dVar23;
          dVar22 = (double)(float)dVar2;
        } while (dVar23 <= dVar22);
        *(float *)(iVar10 + (int)pfVar21) = (float)dVar2;
      }
      bVar1 = iVar10 != 0x1c;
      iVar10 = iVar10 + 4;
    } while (bVar1);
  }
  iVar10 = FUN_00647ed0(iVar5,local_f0);
  if (iVar10 != 0) {
    libc::printf(*(char **)(puVar7 + -0x7b3c),iVar10);
  }
  uRam00000010 = 0;
  uRam00000004 = iVar11 + *(int *)(param_5 + 0x30);
  uRam00000000 = 0;
  iRam00000008 = *(int *)(param_5 + 0x34);
  uRam0000000c = 0;
  if (param_6 != 0) {
    uRam00000010 = *(undefined4 *)(param_5 + 0x34);
  }
  iRam00000014 = *(int *)(param_5 + 0x1c);
  uRam00000024 = 6;
  uRam00000018 = *(undefined4 *)(param_5 + 0x20);
  iRam0000001c = *(int *)(param_5 + 0x24);
  fRam00000028 = *(float *)(param_5 + 0x2c);
  uRam00000020 = *(uint *)(param_5 + 0x18);
  if (**(int **)(puVar7 + -0x7eb0) < 0xb) {
    uRam00000024 = 2;
  }
  fRam00000030 = *(float *)(puVar7 + -0x7fac);
  uRam0000002c = 0;
  if (local_c0 < '\0') {
LAB_0062e4dc:
    fRam00000034 = *(float *)(puVar7 + -0x7f64);
    dVar23 = (double)fRam00000034;
    uRam00000038 = 4;
    FUN_0063000c(0x80ff,0xdfe0,0x38);
  }
  else {
    if (local_c0 < 'd') {
      local_b0 = (longlong)(int)local_c0;
      fRam00000030 = (float)local_b0 / *(float *)(puVar7 + -0x7b2c);
      goto LAB_0062e4dc;
    }
    fRam00000030 = *(float *)(puVar7 + -0x7b34);
    fRam00000034 = *(float *)(puVar7 + -0x7f64);
    dVar23 = (double)fRam00000034;
    uRam00000038 = 4;
    FUN_0063000c(0x80ff,0xdfe0,0x38);
  }
  if (iVar13 == 0) {
    uVar12 = *(undefined4 *)(puVar7 + -0x7cec);
    uVar4 = *(undefined4 *)(puVar7 + -0x7ce4);
    lVar15 = 5;
    fRam00000080 = (float)dVar23;
    fRam00000084 = (float)dVar23;
    uRam0000007c = 0;
    puVar16 = (undefined4 *)0x88;
    do {
      puVar16[3] = uVar4;
      *puVar16 = 0;
      puVar16[1] = (float)dVar23;
      puVar16[2] = uVar12;
      lVar15 = lVar15 + -1;
      puVar16 = puVar16 + 4;
    } while (lVar15 != 0);
    if (*(uint *)(param_5 + 0x14) < 2) {
      uRam00000138 = 2;
    }
    else {
      uRam00000138 = 0;
      uRam0000013c = 0xff;
    }
    uRam000000e4 = 0;
    uRam000000d8 = 0;
    uRam000000dc = 0;
    uRam000000e0 = 0;
    uRam000000e8 = *(uint *)(param_5 + 0x14);
    if (*(uint *)(param_5 + 0x14) < 2) {
      uRam000000e8 = uVar19;
    }
    uRam000000ec = 0;
    if ((in_stack_00000087 == '\0') || (*(uint *)(param_5 + 0x14) < 2)) {
      uVar17 = ((ulonglong)uRam000000f0 & 0xfff) << 0x13 |
               (((ulonglong)uRam000000f0 | 0x10000) << 0x20) >> 0x2d;
      uRam000000f0 = (uint)(uVar17 << 0xd) | (uint)uVar17 >> 0x13;
    }
    else {
      uVar17 = ((ulonglong)uRam000000f0 & 0xffff) << 0xf | (ulonglong)(uRam000000f0 >> 0x11);
      uRam000000f0 = (uint)(uVar17 << 0x11) | (uint)uVar17 >> 0xf | 0x1000;
      if (pfVar21 == (float *)0x0) {
        fRam00000140 = 0.0;
        dVar22 = (double)FUN_0062777c(0x80000001);
        fRam00000144 = (float)dVar22;
        fRam00000154 = 0.0;
        fRam00000148 = 0.0;
        fRam0000014c = 0.0;
        fRam00000150 = 0.0;
        dVar22 = (double)FUN_0062777c(0x80000002);
        fRam00000158 = (float)dVar22;
      }
      else {
        fRam00000140 = *pfVar21;
        fRam00000144 = pfVar21[1];
        fRam00000148 = pfVar21[2];
        fRam0000014c = pfVar21[3];
        fRam00000150 = pfVar21[4];
        fRam00000154 = pfVar21[5];
        fRam00000158 = pfVar21[6];
      }
    }
    if ((param_8 & 0x20) == 0) {
      uVar17 = ((ulonglong)uRam000000f0 & 1) << 0x1e | (ulonglong)(uRam000000f0 >> 2);
      uRam000000f0 = (uint)(uVar17 << 2) | (uint)uVar17 >> 0x1e;
    }
    else {
      uRam000000f0 = uRam000000f0 | 2;
    }
    if ((*(int *)(param_5 + 0x14) == 1) && ((param_8 & 0x40) == 0)) {
      uRam000000f0 = uRam000000f0 | 0x40;
    }
    else {
      uVar17 = ((ulonglong)uRam000000f0 & 0x3f) << 0x19 | (ulonglong)(uRam000000f0 >> 7);
      uRam000000f0 = (uint)(uVar17 << 7) | (uint)uVar17 >> 0x19;
    }
    if (**(char **)(puVar7 + -0x7f50) == '\0') {
      uVar17 = ((ulonglong)uRam000000f0 & 0xf) << 0x1a | (ulonglong)(uRam000000f0 >> 6);
      uRam000000f0 = (uint)(uVar17 << 6) | (uint)uVar17 >> 0x1a;
    }
    else {
      uRam000000f0 = uRam000000f0 | 0x30;
    }
    lVar15 = 4;
    puVar16 = (undefined4 *)0xf4;
    do {
      puVar16[3] = 0;
      *puVar16 = 0;
      puVar16[1] = 0;
      puVar16[2] = 0;
      lVar15 = lVar15 + -1;
      puVar16 = puVar16 + 4;
    } while (lVar15 != 0);
    uRam00000134 = (uint)(param_8 >> 7) & 1;
    iVar11 = FUN_00647f34(iVar5,0);
    if (iVar11 == 0) {
      uVar12 = FUN_00640c9c();
      *(undefined4 *)(param_1 + 100) = uVar12;
      FUN_0062de84(dVar23,dVar23,dVar23,dVar23,param_1);
      *(undefined4 *)(param_1 + 0x60) = 1;
      return 1;
    }
LAB_0062ec58:
    iVar14 = libc::printf(*(char **)(puVar7 + -0x7b38),iVar11);
    uVar12 = FUN_00640c9c(iVar14);
    *(undefined4 *)(param_1 + 100) = uVar12;
    FUN_0062de84(dVar23,dVar23,dVar23,dVar23,param_1);
    *(undefined4 *)(param_1 + 0x60) = 1;
    return 1;
  }
  iVar11 = FUN_00647f34(iVar5,0);
  if (iVar11 != 0) {
    libc::printf(*(char **)(puVar7 + -0x7b38),iVar11);
  }
  iVar11 = FUN_00647ed0(iVar13,&local_ec);
  if (local_ec == (undefined4 *)0x0) goto LAB_0062e6e0;
  uVar12 = *(undefined4 *)(puVar7 + -0x7cec);
  uVar4 = *(undefined4 *)(puVar7 + -0x7ce4);
  lVar15 = 5;
  *local_ec = 0;
  local_ec[1] = (float)dVar23;
  local_ec[2] = (float)dVar23;
  iVar11 = 0;
  do {
    *(undefined4 *)((int)local_ec + iVar11 + 0x18) = uVar4;
    *(undefined4 *)((int)local_ec + iVar11 + 0xc) = 0;
    *(float *)((int)local_ec + iVar11 + 0x10) = (float)dVar23;
    *(undefined4 *)((int)local_ec + iVar11 + 0x14) = uVar12;
    lVar15 = lVar15 + -1;
    iVar11 = iVar11 + 0x10;
  } while (lVar15 != 0);
  local_ec[0x30] = 0xff;
  local_ec[0x19] = 0;
  local_ec[0x1b] = 5;
  local_ec[0x1c] = 1;
  local_ec[0x1d] = 0;
  local_ec[0x2f] = 0;
  local_ec[0x17] = 0;
  local_ec[0x18] = 0;
  local_ec[0x1a] = 0;
  if ((param_8 & 0x20) == 0) {
    pcVar6 = *(char **)(puVar7 + -0x7f50);
    local_ec[0x1d] = 0;
    uVar20 = local_ec[0x1d];
    uVar17 = ((ulonglong)uVar20 & 0x3f) << 0x19 | (ulonglong)(uVar20 >> 7);
    cVar3 = *pcVar6;
    uVar8 = (uint)(uVar17 << 7) | (uint)uVar17 >> 0x19;
    local_ec[0x1d] = uVar8;
    if (cVar3 != '\0') goto LAB_0062e604;
LAB_0062ea78:
    uVar17 = ((ulonglong)uVar20 & 0xf) << 0x19 | ((ulonglong)uVar20 << 0x20) >> 0x27;
    local_ec[0x1d] = (uint)(uVar17 << 7) | (uint)uVar17 >> 0x19;
    if (in_stack_00000087 != '\0') goto LAB_0062e618;
LAB_0062ea90:
    local_ec[0x1d] = local_ec[0x1d] | 0x10000;
  }
  else {
    pcVar6 = *(char **)(puVar7 + -0x7f50);
    local_ec[0x1d] = 2;
    uVar20 = local_ec[0x1d];
    cVar3 = *pcVar6;
    uVar17 = ((ulonglong)uVar20 & 0x3f) << 0x19 | (ulonglong)(uVar20 >> 7);
    uVar8 = (uint)(uVar17 << 7) | (uint)uVar17 >> 0x19;
    local_ec[0x1d] = uVar8;
    if (cVar3 == '\0') goto LAB_0062ea78;
LAB_0062e604:
    local_ec[0x1d] = uVar8 | 0x30;
    if (in_stack_00000087 == '\0') goto LAB_0062ea90;
LAB_0062e618:
    uVar17 = ((ulonglong)(uint)local_ec[0x1d] & 0xffff) << 0xf |
             (ulonglong)((uint)local_ec[0x1d] >> 0x11);
    uVar20 = (uint)(uVar17 << 0x11) | (uint)uVar17 >> 0xf;
    local_ec[0x1d] = uVar20;
    if (pfVar21 != (float *)0x0) {
      local_ec[0x1d] = uVar20 | 0x1000;
      local_ec[0x31] = *pfVar21;
      local_ec[0x32] = pfVar21[1];
      local_ec[0x33] = pfVar21[2];
      local_ec[0x34] = pfVar21[3];
      local_ec[0x35] = pfVar21[4];
      local_ec[0x36] = pfVar21[5];
      local_ec[0x37] = pfVar21[6];
    }
  }
  uVar12 = *(undefined4 *)(puVar7 + -0x7e9c);
  lVar15 = 4;
  iVar11 = 0;
  do {
    *(undefined4 *)((int)local_ec + iVar11 + 0x84) = 0;
    *(undefined4 *)((int)local_ec + iVar11 + 0x78) = 0;
    *(undefined4 *)((int)local_ec + iVar11 + 0x7c) = uVar12;
    *(undefined4 *)((int)local_ec + iVar11 + 0x80) = 0;
    lVar15 = lVar15 + -1;
    iVar11 = iVar11 + 0x10;
  } while (lVar15 != 0);
  local_ec[0x2e] = (uint)(param_8 >> 7) & 1;
  iVar11 = FUN_00647fa0(iVar13,0,0);
  if (iVar11 != 0) {
    iVar11 = libc::printf(*(char **)(puVar7 + -0x7b24),iVar11);
  }
LAB_0062e6e0:
  uVar12 = FUN_00640c9c(iVar11);
  *(undefined4 *)(param_1 + 100) = uVar12;
  FUN_0062de84(dVar23,dVar23,dVar23,dVar23,param_1);
  *(undefined4 *)(param_1 + 0x60) = 1;
  return 1;
}



//==== 0062ee18  ns=Global  size=0x230
// sig: undefined FUN_0062ee18(void)
// callers(1): 00620290 FUN_00620290
// callees(3): 0061948c 989snd::snd_Printf; 00625c88 FUN_00625c88; 0062dce0 FUN_0062dce0
// strings: 0066d6b8: '%s(%d) : Invalid parameter.\n' | 0066d690: 'common/boomrang/snd_synth_interface.cpp'

void FUN_0062ee18(int param_1,uint *param_2,int *param_3)

{
  bool bVar1;
  ushort uVar2;
  undefined *puVar3;
  int iVar4;
  byte in_cr0;
  byte in_cr1;
  byte in_cr2;
  byte in_cr3;
  byte unaff_cr4;
  byte in_cr5;
  byte in_cr6;
  byte in_cr7;
  uint uStack00000008;
  undefined1 local_50 [16];
  
  puVar3 = PTR_PTR_0071b030;
  uStack00000008 =
       (uint)(in_cr0 & 0xf) << 0x1c | (uint)(in_cr1 & 0xf) << 0x18 | (uint)(in_cr2 & 0xf) << 0x14 |
       (uint)(in_cr3 & 0xf) << 0x10 | (uint)(unaff_cr4 & 0xf) << 0xc | (uint)(in_cr5 & 0xf) << 8 |
       (uint)(in_cr6 & 0xf) << 4 | (uint)(in_cr7 & 0xf);
  if ((param_1 == 0) || (param_3 == (int *)0x0)) {
    989snd::snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b030 + -0x7f70));
    if (**(char **)(puVar3 + -0x7f6c) != '\0') {
      return;
    }
    trapWord(0x18,(ulonglong)**(byte **)(puVar3 + -0x7f68),0);
  }
  iVar4 = *param_3;
  if (iVar4 != 0) {
    bVar1 = param_2 == (uint *)0x0;
    do {
      while (iVar4 == 2) {
        if ((!bVar1) && ((*param_2 & 0x10) != 0)) {
          FUN_00625c88((double)(float)param_2[0x11],(double)(float)param_2[0x12],param_1);
          goto LAB_0062eea8;
        }
        FUN_00625c88((double)(float)param_3[3],(double)(float)param_3[4],param_1);
        param_3 = (int *)((int)param_3 + param_3[1]);
        iVar4 = *param_3;
        if (iVar4 == 0) {
          return;
        }
      }
      if (iVar4 == 5) {
        if (!bVar1) {
          if (param_3[5] != -1) {
            iVar4 = param_3[2];
            *(int *)(param_1 + 0x14) = param_3[5];
            *(int *)(param_1 + 8) = iVar4;
          }
          if (param_3[6] != -1) {
            iVar4 = param_3[3];
            *(int *)(param_1 + 0x18) = param_3[6];
            *(int *)(param_1 + 0xc) = iVar4;
          }
          if (param_3[7] != -1) {
            iVar4 = param_3[4];
            *(int *)(param_1 + 0x1c) = param_3[7];
            *(int *)(param_1 + 0x10) = iVar4;
          }
        }
      }
      else if (iVar4 == 1) {
        uVar2 = *(ushort *)((int)param_3 + 10);
        if ((bVar1) || ((1 << (uVar2 & 0x3f) & *param_2) == 0)) {
          FUN_0062dce0(param_1,uVar2,local_50);
        }
        else {
          FUN_0062dce0(param_1,uVar2,param_2 + (uint)uVar2 * 4 + 1);
        }
      }
LAB_0062eea8:
      param_3 = (int *)((int)param_3 + param_3[1]);
      iVar4 = *param_3;
    } while (iVar4 != 0);
  }
  return;
}



//==== 0062f048  ns=Global  size=0x1a4
// sig: undefined FUN_0062f048(void)
// callers(1): 0060c394 FUN_0060c394
// callees(2): 005dd718 FUN_005dd718; 006487c0 FUN_006487c0

double FUN_0062f048(int param_1,int param_2,int param_3)

{
  undefined *puVar1;
  double dVar2;
  undefined1 local_30 [4];
  int local_2c [3];
  
  puVar1 = PTR_PTR_0071b030;
  if (**(int **)(PTR_PTR_0071b030 + -0x7fa0) != 0) {
    FUN_006487c0(**(int **)(PTR_PTR_0071b030 + -0x7fa0),local_30,local_2c);
    if (local_2c[0] != 0) {
      if (param_2 == 0) {
        if (param_3 != 0) {
          return (double)*(float *)(param_1 * 4 + local_2c[0] + 0x10);
        }
        dVar2 = (double)FUN_005dd718((double)*(float *)(param_1 * 4 + local_2c[0] + 0x10),
                                     local_2c[0],1);
        return (double)(float)(dVar2 * (double)*(float *)(puVar1 + -0x7c80));
      }
      if (param_3 != 0) {
        return (double)*(float *)((param_1 + *(int *)(local_2c[0] + 8)) * 4 + local_2c[0] + 0x10);
      }
      dVar2 = (double)FUN_005dd718((double)*(float *)((param_1 + *(int *)(local_2c[0] + 8)) * 4 +
                                                      local_2c[0] + 0x10),local_2c[0],1);
      return (double)(float)(dVar2 * (double)*(float *)(puVar1 + -0x7c80));
    }
  }
  return (double)*(float *)(puVar1 + -0x7fac);
}



//==== 0062f1f4  ns=989snd  size=0x2bc
// sig: undefined snd_SynthGetVoiceOutputLevel(void)
// callers(1): 0061fff8 FUN_0061fff8
// callees(3): 005dd718 FUN_005dd718; 0061948c 989snd::snd_Printf; 006487c0 FUN_006487c0
// strings: 0066d690: 'common/boomrang/snd_synth_interface.cpp' | 00670680: 'snd_SynthGetVoiceOutputLevel(): %s(%d) : Invalid voice context!\n'

double 989snd::snd_SynthGetVoiceOutputLevel(int param_1,int param_2,int param_3)

{
  float fVar1;
  int iVar2;
  undefined *puVar3;
  undefined8 uVar4;
  float *pfVar5;
  double dVar6;
  double extraout_f1;
  double dVar7;
  double extraout_f1_00;
  undefined1 local_40 [4];
  int local_3c [3];
  
  puVar3 = PTR_PTR_0071b030;
  if (param_1 == 0) {
    snd_Printf((char)*(undefined4 *)(PTR_PTR_0071b030 + -0x7b20));
    return (double)*(float *)(puVar3 + -0x7fac);
  }
  iVar2 = *(int *)(param_1 + 0x70);
  if (((iVar2 == 0) && (iVar2 = *(int *)(param_1 + 0x6c), iVar2 == 0)) ||
     (FUN_006487c0(iVar2,local_40,local_3c), local_3c[0] == 0)) {
    return (double)*(float *)(puVar3 + -0x7fac);
  }
  iVar2 = *(int *)(iVar2 + 0x18);
  if (*(int *)(*(int *)(puVar3 + -0x7ee0) + 0xc) != iVar2) {
    if (param_2 == 0) {
      if (param_3 == 0) {
        dVar6 = (double)FUN_005dd718((double)*(float *)(local_3c[0] + 0x10),iVar2,1);
        return (double)(float)(dVar6 * (double)*(float *)(puVar3 + -0x7c80));
      }
      return (double)*(float *)(local_3c[0] + 0x10);
    }
    if (param_3 != 0) {
      return (double)*(float *)(*(int *)(local_3c[0] + 8) * 4 + local_3c[0] + 0x10);
    }
    dVar6 = (double)FUN_005dd718((double)*(float *)(*(int *)(local_3c[0] + 8) * 4 + local_3c[0] +
                                                   0x10),iVar2,1);
    return (double)(float)(dVar6 * (double)*(float *)(puVar3 + -0x7c80));
  }
  if (param_2 == 0) {
    if (param_3 != 0) {
      pfVar5 = (float *)(local_3c[0] + 0x10);
      fVar1 = *(float *)(puVar3 + -0x7eac);
      goto LAB_0062f368;
    }
    uVar4 = FUN_005dd718((double)*(float *)(local_3c[0] + 0x10),iVar2,1);
    fVar1 = *(float *)(local_3c[0] + 0x14);
    dVar6 = extraout_f1_00;
  }
  else {
    if (param_3 != 0) {
      fVar1 = *(float *)(puVar3 + -0x7eac);
      pfVar5 = (float *)(local_3c[0] + 0x10 + *(int *)(local_3c[0] + 8) * 4);
LAB_0062f368:
      return (double)((*pfVar5 + pfVar5[1]) * fVar1);
    }
    uVar4 = FUN_005dd718((double)*(float *)(*(int *)(local_3c[0] + 8) * 4 + local_3c[0] + 0x10),
                         iVar2,1);
    fVar1 = *(float *)(*(int *)(local_3c[0] + 8) * 4 + local_3c[0] + 0x10 + 4);
    dVar6 = extraout_f1;
  }
  dVar7 = (double)FUN_005dd718((double)fVar1,uVar4,1);
  return (double)((float)(dVar6 * (double)*(float *)(puVar3 + -0x7c80) +
                         (double)(float)(dVar7 * (double)*(float *)(puVar3 + -0x7c80))) *
                 *(float *)(puVar3 + -0x7eac));
}



//==== 0062f4b8  ns=989snd  size=0x6e8
// sig: undefined snd_SynthInit(void)
// callers(1): 0060c518 FUN_0060c518
// callees(7): 005d0140 libc::memset; 0061948c 989snd::snd_Printf; 0062fd54 FUN_0062fd54; 00630554 FUN_00630554; 00640d14 FUN_00640d14; 00642a50 FUN_00642a50; 0064fa44 cell::cellSpursGetInfo
// strings: 006706c8: "snd_SynthInit(BRB): The spurs instance passed manages %d SPUs, but you're specifying spuIndex %d specifically.  This may cause problems!\n" | 00670758: 'snd_SynthInit(): %s(%d) : Unexpected max channel count (%d) from driver!\n' | 006707a8: 'libMp3' | 006707b0: 'snd_SynthInit(): %s(%d) : Attempted to initialize synthesizer with no voices of any type!\n'

undefined4 989snd::snd_SynthInit(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  uint *puVar9;
  undefined4 *puVar10;
  int *piVar11;
  undefined *puVar12;
  int iVar13;
  uint uVar14;
  undefined4 *puVar15;
  byte in_cr0;
  byte in_cr1;
  byte in_cr2;
  byte in_cr3;
  byte unaff_cr4;
  byte in_cr5;
  byte in_cr6;
  byte in_cr7;
  longlong lVar16;
  ulonglong uVar17;
  uint uStack00000008;
  undefined1 local_200 [144];
  int local_170 [74];
  
  puVar12 = PTR_PTR_0071b030;
  uStack00000008 =
       (uint)(in_cr0 & 0xf) << 0x1c | (uint)(in_cr1 & 0xf) << 0x18 | (uint)(in_cr2 & 0xf) << 0x14 |
       (uint)(in_cr3 & 0xf) << 0x10 | (uint)(unaff_cr4 & 0xf) << 0xc | (uint)(in_cr5 & 0xf) << 8 |
       (uint)(in_cr6 & 0xf) << 4 | (uint)(in_cr7 & 0xf);
  puVar15 = *(undefined4 **)(PTR_PTR_0071b030 + -0x7e0c);
  **(undefined4 **)(PTR_PTR_0071b030 + -0x7e68) = *(undefined4 *)(param_2 + 0x20);
  *puVar15 = param_1;
  iVar13 = cell::cellSpursGetInfo(*(undefined4 *)(param_2 + 4),local_170);
  if (iVar13 == 0) {
    if ((1 < local_170[0]) && (*(char *)(param_2 + 8) != -1)) {
      snd_Printf((char)*(undefined4 *)(puVar12 + -0x7b14));
    }
    iVar13 = FUN_00642a50(local_200);
    if (-1 < iVar13) {
      iVar13 = FUN_00640d14();
      if (iVar13 == 6) {
        puVar15 = *(undefined4 **)(puVar12 + -0x7b10);
        **(undefined4 **)(puVar12 + -0x7e64) = 3;
        *puVar15 = 3;
      }
      else if (iVar13 == 8) {
        puVar15 = *(undefined4 **)(puVar12 + -0x7b10);
        **(undefined4 **)(puVar12 + -0x7e64) = 4;
        *puVar15 = 4;
      }
      else {
        if (iVar13 != 2) {
          snd_Printf((char)*(undefined4 *)(puVar12 + -0x7b0c));
          return 0;
        }
        puVar15 = *(undefined4 **)(puVar12 + -0x7b10);
        **(undefined4 **)(puVar12 + -0x7e64) = 0;
        *puVar15 = 0;
      }
      iVar13 = FUN_00630554(*(undefined4 *)(puVar12 + -0x7b08),0);
      **(int **)(puVar12 + -0x7ee4) = iVar13;
      if (iVar13 != -1) {
        lVar16 = 8;
        puVar15 = *(undefined4 **)(puVar12 + -0x7fd4);
        do {
          puVar15[2] = 0xffffffff;
          *puVar15 = 0;
          puVar15[1] = 0;
          *(undefined1 *)(puVar15 + 3) = 0;
          *(undefined1 *)((int)puVar15 + 0xd) = 0;
          lVar16 = lVar16 + -1;
          puVar15 = puVar15 + 4;
        } while (lVar16 != 0);
        FUN_0062fd54();
        iVar13 = *(int *)(param_2 + 0xc);
        iVar1 = *(int *)(param_2 + 0x10);
        iVar2 = *(int *)(param_2 + 0x1c);
        iVar3 = *(int *)(param_2 + 0x14);
        iVar4 = *(int *)(param_2 + 0x18);
        piVar5 = *(int **)(puVar12 + -0x7bfc);
        piVar6 = *(int **)(puVar12 + -0x7c14);
        uVar14 = iVar3 + iVar4 + iVar2 + iVar13 + iVar1;
        piVar7 = *(int **)(puVar12 + -0x7c2c);
        piVar8 = *(int **)(puVar12 + -0x7c58);
        puVar9 = *(uint **)(puVar12 + -0x7e7c);
        **(int **)(puVar12 + -0x7be4) = iVar13;
        *piVar5 = iVar1;
        *piVar6 = iVar3;
        *piVar7 = iVar4;
        *piVar8 = iVar2;
        *puVar9 = uVar14;
        if (uVar14 == 0) {
          snd_Printf((char)*(undefined4 *)(puVar12 + -0x7b04));
        }
        else {
          if (iVar13 == 0) {
            puVar15 = *(undefined4 **)(puVar12 + -0x7f98);
          }
          else {
            puVar15 = *(undefined4 **)(puVar12 + -0x7f98);
            piVar11 = *(int **)(puVar12 + -0x7fc0);
            puVar10 = (undefined4 *)*puVar15;
            piVar11[2] = iVar13;
            piVar11[1] = 0;
            iVar13 = (*(code *)*puVar10)(iVar13 << 2,0);
            *piVar11 = iVar13;
            if (iVar13 == 0) {
              return 0;
            }
          }
          iVar13 = *piVar5;
          if (iVar13 != 0) {
            iVar1 = *(int *)(puVar12 + -0x7fc0);
            puVar10 = (undefined4 *)*puVar15;
            *(int *)(iVar1 + 0x14) = iVar13;
            *(undefined4 *)(iVar1 + 0x10) = 0;
            iVar13 = (*(code *)*puVar10)(iVar13 << 2,0);
            *(int *)(iVar1 + 0xc) = iVar13;
            if (iVar13 == 0) {
              return 0;
            }
          }
          iVar13 = *piVar6;
          if (iVar13 != 0) {
            iVar1 = *(int *)(puVar12 + -0x7fc0);
            puVar10 = (undefined4 *)*puVar15;
            *(int *)(iVar1 + 0x20) = iVar13;
            *(undefined4 *)(iVar1 + 0x1c) = 0;
            iVar13 = (*(code *)*puVar10)(iVar13 << 2,0);
            *(int *)(iVar1 + 0x18) = iVar13;
            if (iVar13 == 0) {
              return 0;
            }
          }
          iVar13 = *piVar7;
          if (iVar13 != 0) {
            iVar1 = *(int *)(puVar12 + -0x7fc0);
            puVar10 = (undefined4 *)*puVar15;
            *(int *)(iVar1 + 0x2c) = iVar13;
            *(undefined4 *)(iVar1 + 0x28) = 0;
            iVar13 = (*(code *)*puVar10)(iVar13 << 2,0);
            *(int *)(iVar1 + 0x24) = iVar13;
            if (iVar13 == 0) {
              return 0;
            }
          }
          iVar13 = *piVar8;
          if (iVar13 != 0) {
            iVar1 = *(int *)(puVar12 + -0x7fc0);
            puVar10 = (undefined4 *)*puVar15;
            *(undefined4 *)(iVar1 + 0x34) = 0;
            *(int *)(iVar1 + 0x38) = iVar13;
            iVar13 = (*(code *)*puVar10)(iVar13 << 2,0);
            *(int *)(iVar1 + 0x30) = iVar13;
            if (iVar13 == 0) {
              return 0;
            }
          }
          iVar13 = (**(code **)*puVar15)(*puVar9 * 0x74,0);
          piVar5 = *(int **)(puVar12 + -0x7ee8);
          *piVar5 = iVar13;
          if (iVar13 != 0) {
            libc::memset(iVar13,0,*puVar9 * 0x74);
            if (*puVar9 != 0) {
              uVar17 = (ulonglong)*puVar9;
              iVar13 = 0;
              do {
                iVar1 = iVar13 + *piVar5;
                iVar13 = iVar13 + 0x74;
                *(undefined1 *)(iVar1 + 0x69) = 0xf0;
                uVar17 = uVar17 - 1;
              } while (uVar17 != 0);
            }
            return 1;
          }
        }
      }
    }
  }
  return 0;
}



//==== 0062fba0  ns=Global  size=0x8c
// sig: undefined FUN_0062fba0(void)
// callers(2): 0062fc2c FUN_0062fc2c; 0062fc3c FUN_0062fc3c
// callees(0): 

void FUN_0062fba0(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  longlong lVar3;
  
  if (param_1 == 1) {
    if (param_2 == 0xffff) {
      puVar2 = *(undefined4 **)(PTR_PTR_0071b030 + -0x7fc0);
      lVar3 = 5;
      **(undefined4 **)(PTR_PTR_0071b030 + -0x7b1c) = *(undefined4 *)(PTR_PTR_0071b030 + -0x7b00);
      do {
        puVar2[2] = 0;
        *puVar2 = 0;
        puVar2[1] = 0;
        lVar3 = lVar3 + -1;
        puVar2 = puVar2 + 3;
      } while (lVar3 != 0);
      return;
    }
  }
  else if ((param_1 == 0) && (param_2 == 0xffff)) {
    puVar2 = *(undefined4 **)(PTR_PTR_0071b030 + -0x7b1c);
    uVar1 = *(undefined4 *)(PTR_PTR_0071b030 + -0x7f9c);
    **(undefined4 **)(PTR_PTR_0071b030 + -0x7b1c) = *(undefined4 *)(PTR_PTR_0071b030 + -0x7b00);
    *puVar2 = uVar1;
  }
  return;
}



//==== 0062fc2c  ns=Global  size=0x10
// sig: undefined FUN_0062fc2c(void)
// callers(0): 
// callees(1): 0062fba0 FUN_0062fba0

void FUN_0062fc2c(void)

{
  FUN_0062fba0(0,0xffff);
  return;
}



//==== 0062fc3c  ns=Global  size=0x10
// sig: undefined FUN_0062fc3c(void)
// callers(0): 
// callees(1): 0062fba0 FUN_0062fba0

void FUN_0062fc3c(void)

{
  FUN_0062fba0(1,0xffff);
  return;
}



//==== 0062fc4c  ns=Global  size=0x54
// sig: undefined FUN_0062fc4c(void)
// callers(1): 0062730c FUN_0062730c
// callees(1): 0063042c FUN_0063042c

uint FUN_0062fc4c(void)

{
  uint uVar1;
  
  uVar1 = FUN_0063042c(**(undefined4 **)(PTR_PTR_0071b034 + -0x8000));
  return (((int)uVar1 >> 0x1f ^ uVar1) - ((int)uVar1 >> 0x1f)) - 1 >> 0x1f;
}



//==== 0062fca0  ns=Global  size=0x3c
// sig: undefined FUN_0062fca0(void)
// callers(1): 006271f4 989snd::snd_SynthUnlock
// callees(1): 00630388 FUN_00630388

void FUN_0062fca0(void)

{
  FUN_00630388(**(undefined4 **)(PTR_PTR_0071b034 + -0x8000));
  return;
}



//==== 0062fcdc  ns=Global  size=0x3c
// sig: undefined FUN_0062fcdc(void)
// callers(1): 006272e8 989snd::snd_SynthLock
// callees(1): 006303cc FUN_006303cc

void FUN_0062fcdc(void)

{
  FUN_006303cc(**(undefined4 **)(PTR_PTR_0071b034 + -0x8000));
  return;
}



//==== 0062fd18  ns=Global  size=0x3c
// sig: undefined FUN_0062fd18(void)
// callers(1): 00627334 FUN_00627334
// callees(1): 0063049c FUN_0063049c

void FUN_0062fd18(void)

{
  FUN_0063049c(**(undefined4 **)(PTR_PTR_0071b034 + -0x8000));
  return;
}



//==== 0062fd54  ns=Global  size=0x40
// sig: undefined FUN_0062fd54(void)
// callers(1): 0062f4b8 989snd::snd_SynthInit
// callees(1): 00630554 FUN_00630554
// strings: 00670810: 'synth'

void FUN_0062fd54(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  puVar1 = PTR_PTR_0071b034;
  uVar2 = FUN_00630554(*(undefined4 *)(PTR_PTR_0071b034 + -0x7ffc),0);
  **(undefined4 **)(puVar1 + -0x8000) = uVar2;
  return;
}



//==== 0062fd94  ns=Global  size=0x278
// sig: undefined FUN_0062fd94(void)
// callers(1): 0063000c FUN_0063000c
// callees(0): 

void FUN_0062fd94(int param_1,int param_2,int param_3,int param_4,int param_5,ulonglong param_6,
                 undefined4 *param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined *puVar4;
  ulonglong uVar5;
  int iVar6;
  float *pfVar7;
  
  puVar4 = PTR_PTR_0071b038;
  *param_7 = 4;
  if (0xe < param_3) {
    fVar1 = *(float *)(puVar4 + -0x8000);
    param_7[1] = fVar1;
    param_7[4] = 2;
  }
  else {
    fVar1 = *(float *)(puVar4 + -0x8000);
    param_7[1] = fVar1;
    param_7[4] = 1;
  }
  if ((param_6 & 1) == 0) {
    iVar6 = *(int *)(puVar4 + -0x7ff8);
    fVar2 = *(float *)(puVar4 + -0x7ff4);
    param_7[2] = 0;
    param_7[3] = *(float *)(iVar6 + param_1 * 4) * fVar2;
    param_7[8] = 2;
  }
  else {
    iVar6 = *(int *)(puVar4 + -0x7fec);
    fVar2 = *(float *)(puVar4 + -0x7ff4);
    param_7[2] = *(undefined4 *)(puVar4 + -0x7fe8);
    param_7[3] = *(float *)(iVar6 + param_1 * 4) * fVar2;
    param_7[8] = 2;
  }
  if (0xe < param_3) {
    fVar3 = *(float *)(puVar4 + -0x7fe0);
    param_7[7] = 0;
    param_7[5] = fVar1;
    fVar3 = (float)(longlong)(param_3 + 1) * fVar3;
  }
  else {
    iVar6 = *(int *)(puVar4 + -0x7fd8);
    fVar3 = *(float *)(puVar4 + -0x7fe0);
    param_7[6] = *(undefined4 *)(puVar4 + -0x7fe8);
    fVar3 = (float)(longlong)(param_3 + 1) * fVar3;
    param_7[7] = *(float *)(iVar6 + param_2 * 4) * fVar2;
    param_7[5] = fVar3;
  }
  pfVar7 = (float *)(param_7 + 9);
  *pfVar7 = fVar3;
  param_7[0xc] = 2;
  param_7[10] = 0;
  if (param_4 == 0x7f) {
    param_7[0xb] = fVar1;
  }
  else {
    uVar5 = param_6 >> 1 & 3;
    iVar6 = (int)uVar5;
    if (iVar6 == 1) {
      iVar6 = *(int *)(puVar4 + -0x7fd0);
      *pfVar7 = 0.0;
      param_7[0xc] = 4;
      param_7[0xb] = *(float *)(iVar6 + param_4 * 4) * fVar2;
    }
    else if (uVar5 == 0) {
      iVar6 = *(int *)(puVar4 + -0x7fd4);
      *pfVar7 = 0.0;
      param_7[0xc] = 4;
      param_7[0xb] = *(float *)(iVar6 + param_4 * 4) * fVar2;
    }
    else if (iVar6 == 2) {
      iVar6 = *(int *)(puVar4 + -0x7fec);
      *pfVar7 = fVar1;
      param_7[0xb] = *(float *)(iVar6 + param_4 * 4) * fVar2;
    }
    else if (iVar6 == 3) {
      iVar6 = *(int *)(puVar4 + -0x7ff8);
      *pfVar7 = fVar1;
      param_7[0xb] = *(float *)(iVar6 + param_4 * 4) * fVar2;
    }
  }
  param_7[0xd] = 0;
  param_7[0x10] = 4;
  if ((param_6 & 8) == 0) {
    iVar6 = *(int *)(puVar4 + -0x7fd4);
    param_7[0xe] = 0;
    param_7[0xf] = *(float *)(iVar6 + param_5 * 0x10) * fVar2;
    return;
  }
  iVar6 = *(int *)(puVar4 + -0x7fd0);
  param_7[0xe] = *(undefined4 *)(puVar4 + -0x7fe8);
  param_7[0xf] = *(float *)(iVar6 + param_5 * 0x10) * fVar2;
  return;
}



