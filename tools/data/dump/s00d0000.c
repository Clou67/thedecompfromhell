//==== 000d02a0  ns=hud  size=0xb8
// sig: undefined HealthHud_Init(void)
// callers(0): 
// callees(1): 000c8e10 hud::HudEntry_CalcNumberSize

void hud::HealthHud_Init(undefined8 param_1)

{
  undefined4 uVar1;
  int entry;
  undefined8 in_LR;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  auVar2 = ZEXT416(0xffffffff);
  auVar2 = auVar2 | auVar2 << 0x20 | auVar2 << 0x40 | auVar2 << 0x60;
  auVar3 = vectorShiftLeftIntegerWord(auVar2,auVar2);
  auVar2 = loadVectorLeftIndexed(in_LR,0xd0294);
  auVar4 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
  auVar2 = auVar2 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar2 = vectorMultiplyAddFloatingPoint
                     (auVar4,auVar2 | auVar2 << 0x20 | auVar2 << 0x40 | auVar2 << 0x60,auVar3);
  auVar3 = loadVectorLeftIndexed(4,0xd0294);
  auVar2 = vectorConvertToSignedFixedPointWordSaturate(auVar2,0);
  auVar2 = ZEXT416((uint)(auVar2._0_4_ + auVar3._0_4_)) & (undefined1  [16])0xffffffff;
  entry = (int)param_1;
  uVar1 = storeVectorElementWordIndexed
                    (auVar2 | auVar2 << 0x20 | auVar2 << 0x40 | auVar2 << 0x60,0x7c,param_1);
  *(undefined4 *)(entry + 0x7cU & 0xfffffffc) = uVar1;
  *(undefined4 *)(entry + 0x58) = 0x40;
  *(undefined4 *)(entry + 0x5c) = 0x40;
  *(undefined2 *)(entry + 0x48) = 0x20;
  *(undefined2 *)(entry + 0x4a) = 0;
  HudEntry_CalcNumberSize(entry);
  DAT_00a1c180 = 0;
  *(undefined2 **)(entry + 0x80) = &DAT_00a1c180;
  DAT_00a1c182 = 0;
  DAT_00a1c186 = 1;
  DAT_00a1c184 = 0;
  return;
}



//==== 000d0360  ns=hud  size=0x264
// sig: undefined HealthHud_Update(void)
// callers(0): 
// callees(1): 000c9138 hud::HudIcon_GetAnimFrame

void hud::HealthHud_Update(longlong param_1)

{
  short *psVar1;
  undefined4 uVar2;
  int iVar3;
  short sVar4;
  short sVar6;
  int iVar5;
  undefined8 in_LR;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  iVar3 = (int)param_1;
  iVar5 = *(int *)(iVar3 + 0x78);
  if (*(int **)(iVar3 + 0xc) != (int *)0x0) {
    iVar5 = **(int **)(iVar3 + 0xc);
    psVar1 = *(short **)(iVar3 + 0x80);
    *(int *)(iVar3 + 0x78) = iVar5 + (iVar5 >> 0x1f & -iVar5);
    sVar6 = psVar1[1] + psVar1[2];
    psVar1[1] = sVar6;
    sVar4 = psVar1[2] + psVar1[3];
    *psVar1 = (short)(*psVar1 + 1) + (short)((*psVar1 + 1) / 0x3c) * -0x3c;
    psVar1[2] = sVar4;
    if (sVar4 < 0x3d) {
      if (sVar4 < -0x3c) {
        sVar4 = -0x3c;
        psVar1[2] = -0x3c;
      }
    }
    else {
      sVar4 = 0x3c;
      psVar1[2] = 0x3c;
    }
    if ((0x7ff < sVar6) && (0 < sVar4)) {
      psVar1[3] = -1;
    }
    if (0xfff < sVar6) {
      sVar6 = 0xfff;
      psVar1[1] = 0xfff;
    }
    if ((sVar6 < 0x7ff) && (sVar4 < 0)) {
      psVar1[3] = 1;
    }
    if (sVar6 < 0) {
      psVar1[1] = 0;
    }
    iVar5 = *(int *)(iVar3 + 0x78);
    iVar5 = iVar5 + ((uint)((longlong)*(int *)(iVar3 + 8) - (longlong)iVar5 >> 0x3f) &
                    *(int *)(iVar3 + 8) - iVar5);
    *(int *)(iVar3 + 0x78) = iVar5;
  }
  if ((*(int *)(iVar3 + 0x74) != iVar5) || (*(int *)(iVar3 + 0x74) == 1)) {
    auVar7 = ZEXT416(0xffffffff);
    auVar7 = auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60;
    auVar8 = vectorShiftLeftIntegerWord(auVar7,auVar7);
    auVar7 = loadVectorLeftIndexed(in_LR,0xd0358);
    auVar9 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar7 = auVar7 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar7 = vectorMultiplyAddFloatingPoint
                       (auVar9,auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60,auVar8);
    auVar7 = vectorConvertToSignedFixedPointWordSaturate(auVar7,0);
    auVar7 = auVar7 >> 0x60 & (undefined1  [16])0xffffffff;
    uVar2 = storeVectorElementWordIndexed
                      (auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60,0x7c,param_1);
    *(undefined4 *)(iVar3 + 0x7cU & 0xfffffffc) = uVar2;
    *(int *)(iVar3 + 0x74) = iVar5;
  }
  if (*(int *)(iVar3 + 0x7c) < (int)(animationSpeed * 5.5)) {
    *(undefined4 *)(iVar3 + 0x6c) = 1;
    if (*(char *)(iVar3 + 0x71) == '\0') {
      if (*(char *)(iVar3 + 0x70) == '\0') {
        *(undefined4 *)(iVar3 + 0x6c) = 0xfffffffa;
      }
      else {
        *(char *)(iVar3 + 0x70) = *(char *)(iVar3 + 0x70) + -1;
      }
    }
    else {
      *(char *)(iVar3 + 0x71) = *(char *)(iVar3 + 0x71) + -1;
    }
  }
  else if ((int)(uint)*(byte *)(iVar3 + 0x70) < DAT_00724390) {
    *(byte *)(iVar3 + 0x70) = *(byte *)(iVar3 + 0x70) + 1;
  }
  else if ((int)(uint)*(byte *)(iVar3 + 0x71) < DAT_00724390) {
    *(byte *)(iVar3 + 0x71) = *(byte *)(iVar3 + 0x71) + 1;
  }
  HudIcon_GetAnimFrame(param_1 + 0x40);
  return;
}



//==== 000d05e0  ns=hud  size=0x898
// sig: undefined Draw_NanotechUI(void)
// callers(0): 
// callees(5): 000cbb98 hud::Hud_DrawTexQuad; 000cbe60 hud::Hud_DrawTexHeaderQuad; 000cdeb8 hud::HudEntry_DrawIcon; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt
// strings: 000d06cc: 'HC e`' (raw)

undefined4 hud::Draw_NanotechUI(int param_1)

{
  short sVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  short *psVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  undefined4 uVar12;
  IconTableEntries *pIVar13;
  uint uVar14;
  longlong lVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  ulonglong uVar19;
  longlong lVar20;
  short *psVar21;
  int iVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  
  if ((g_heroType == 2) || (g_heroState == TURRET_PLANE_UI)) {
    uVar12 = *(undefined4 *)(param_1 + 0x58);
  }
  else {
    iVar3 = *(int *)(param_1 + 0x50);
    iVar4 = *(int *)(param_1 + 0x78);
    iVar6 = DAT_007243d8 + ((uint)((LZCOUNT(-Cutscene) << 0x3a) >> 0x3f) & 8) + 10;
    if (*(char *)(param_1 + 0x70) == '\0') {
      uVar12 = *(undefined4 *)(param_1 + 0x58);
    }
    else {
      dVar23 = (double)fastfunc::FastIntToDouble();
      dVar24 = (double)fastfunc::FastIntToDouble(DAT_00724390);
      dVar26 = (double)(float)(dVar23 / dVar24);
      dVar23 = 1.0;
      dVar24 = dVar23;
      if ((dVar26 <= 1.0) && (dVar24 = dVar26, dVar26 < 0.0)) {
        dVar24 = 0.0;
      }
      dVar26 = (double)fastfunc::FastIntToDouble(*(undefined1 *)(param_1 + 0x71));
      dVar25 = (double)fastfunc::FastIntToDouble(DAT_00724390);
      dVar26 = (double)(float)(dVar26 / dVar25);
      if ((dVar26 <= dVar23) && (dVar23 = dVar26, dVar26 < 0.0)) {
        dVar23 = 0.0;
      }
      uVar7 = fastfunc::FastDoubleToInt((double)(float)(dVar23 * 128.0));
      uVar8 = fastfunc::FastDoubleToInt((double)(float)((double)(longlong)DAT_007243f0 * dVar24));
      psVar5 = *(short **)(param_1 + 0x80);
      lVar15 = (longlong)((int)*psVar5 >> 1);
      lVar15 = lVar15 + ((LZCOUNT(-iVar4) << 0x3a) >> 0x3f & 0x1eU - lVar15);
      iVar17 = g_heroMaxNanotech +
               ((uint)((LZCOUNT(1 - (uint)g_heroType) << 0x3a) >> 0x3f) &
               g_clankMaxNanotech - g_heroMaxNanotech);
      if (iVar17 == 8) {
        psVar21 = &DAT_007243b8;
        dVar24 = (double)(float)(dVar24 * 48.0);
        lVar9 = fastfunc::FastDoubleToInt(dVar24);
        lVar10 = fastfunc::FastDoubleToInt(dVar24);
      }
      else if (iVar17 == 5) {
        psVar21 = (short *)0x7243a4;
        lVar9 = fastfunc::FastDoubleToInt((double)(float)(dVar24 * 32.0));
        lVar10 = fastfunc::FastDoubleToInt((double)(float)(dVar24 * 16.0));
      }
      else {
        psVar21 = (short *)0x724394;
        lVar9 = fastfunc::FastDoubleToInt((double)(float)(dVar24 * 48.0));
        lVar10 = 0;
      }
      uVar19 = 0;
      iVar18 = DAT_007243e0 + iVar6;
      for (iVar11 = 0; sVar2 = *(short *)((int)&IconTableEntry->iconId + iVar11),
          sVar2 != 0x7580 && sVar2 != -1; iVar11 = iVar11 + 8) {
        uVar19 = uVar19 + 1;
      }
      iVar11 = (int)((uVar19 & 0x1fffffff) << 3);
      if (*(short *)((int)&IconTableEntry->iconId + iVar11) == -1) {
        lVar20 = 0;
      }
      else {
        lVar20 = 0;
        if (1 < *(ushort *)((int)&IconTableEntry->unknown + iVar11)) {
          lVar20 = (ulonglong)*(ushort *)((int)&IconTableEntry->variantsCnt + iVar11) + 1;
        }
      }
      uVar19 = 0;
      for (pIVar13 = IconTableEntry; pIVar13->iconId != 0x7580 && pIVar13->iconId != 0xffff;
          pIVar13 = pIVar13 + 1) {
        uVar19 = uVar19 + 1;
      }
      iVar11 = (int)((uVar19 & 0x1fffffff) << 3);
      if (*(short *)((int)&IconTableEntry->iconId + iVar11) == -1) {
        uVar19 = 0;
      }
      else {
        uVar19 = 0;
        if (*(short *)((int)&IconTableEntry->unknown + iVar11) != 0) {
          uVar19 = (ulonglong)*(ushort *)((int)&IconTableEntry->variantsCnt + iVar11);
        }
      }
      Hud_DrawTexQuad(lVar20,(int)lVar9 + iVar3,iVar18,DAT_007243ec,DAT_007243ec,uVar8);
      iVar11 = (int)(uVar19 << 2);
      iVar22 = iVar3 - (int)lVar9;
      Hud_DrawTexHeaderQuad
                (EffectTexHeaders + *(int *)(TexturePointerArray + iVar11) * 0x24,iVar22,iVar18,
                 (int)(lVar9 << 1),DAT_007243ec,uVar8);
      iVar16 = (int)(lVar20 << 2);
      Hud_DrawTexHeaderQuad
                (EffectTexHeaders + *(int *)(TexturePointerArray + iVar16) * 0x24,
                 iVar22 - DAT_007243ec,iVar18,DAT_007243ec,DAT_007243ec,uVar8);
      iVar22 = (int)lVar10;
      if (iVar22 != 0) {
        iVar18 = DAT_007243dc + iVar18;
        Hud_DrawTexQuad(lVar20,iVar22 + iVar3,iVar18,DAT_007243ec,DAT_007243ec,uVar8);
        Hud_DrawTexHeaderQuad
                  (EffectTexHeaders + *(int *)(TexturePointerArray + iVar11) * 0x24,iVar3 - iVar22,
                   iVar18,(int)(lVar10 << 1),DAT_007243ec,uVar8);
        Hud_DrawTexHeaderQuad
                  (EffectTexHeaders + *(int *)(TexturePointerArray + iVar16) * 0x24,
                   (iVar3 - iVar22) - DAT_007243ec,iVar18,DAT_007243ec,DAT_007243ec,uVar8);
      }
      iVar11 = 0;
      if (0 < iVar17) {
        do {
          uVar19 = 0;
          for (iVar18 = 0; sVar2 = *(short *)((int)&IconTableEntry->iconId + iVar18),
              sVar2 != 0x7536 && sVar2 != -1; iVar18 = iVar18 + 8) {
            uVar19 = uVar19 + 1;
          }
          iVar18 = (int)((uVar19 & 0x1fffffff) << 3);
          iVar16 = (int)lVar15;
          if (*(short *)((int)&IconTableEntry->iconId + iVar18) == -1) {
            iVar22 = 0;
          }
          else {
            iVar22 = 0;
            if (iVar16 < (int)(uint)*(ushort *)((int)&IconTableEntry->unknown + iVar18)) {
              iVar22 = (uint)*(ushort *)((int)&IconTableEntry->variantsCnt + iVar18) + iVar16;
            }
          }
          HudEntry_DrawIcon(param_1,iVar22,*psVar21 + iVar3,psVar21[1] + iVar6,1,uVar7);
          lVar9 = lVar15;
          if (iVar16 != 0x1e) {
            uVar19 = 0;
            for (pIVar13 = IconTableEntry; pIVar13->iconId != 0x7536 && pIVar13->iconId != 0xffff;
                pIVar13 = pIVar13 + 1) {
              uVar19 = uVar19 + 1;
            }
            iVar18 = (int)((uVar19 & 0x1fffffff) << 3);
            if (*(short *)((int)&IconTableEntry->iconId + iVar18) == -1) {
              lVar9 = 0;
            }
            else {
              lVar9 = 0;
              if (0x1e < *(ushort *)((int)&IconTableEntry->unknown + iVar18)) {
                lVar9 = (ulonglong)*(ushort *)((int)&IconTableEntry->variantsCnt + iVar18) + 0x1e;
              }
            }
            HudEntry_DrawIcon(param_1,lVar9,*psVar21 + iVar3,psVar21[1] + iVar6,1,uVar7);
            sVar2 = *psVar21;
            uVar19 = 0;
            sVar1 = psVar21[1];
            for (pIVar13 = IconTableEntry; pIVar13->iconId != 0x7536 && pIVar13->iconId != 0xffff;
                pIVar13 = pIVar13 + 1) {
              uVar19 = uVar19 + 1;
            }
            iVar18 = (int)((uVar19 & 0x1fffffff) << 3);
            if (*(short *)((int)&IconTableEntry->iconId + iVar18) == -1) {
              lVar9 = 0;
            }
            else {
              lVar9 = 0;
              if (0x1f < *(ushort *)((int)&IconTableEntry->unknown + iVar18)) {
                lVar9 = (ulonglong)*(ushort *)((int)&IconTableEntry->variantsCnt + iVar18) + 0x1f;
              }
            }
            uVar8 = fastfunc::FastDoubleToInt
                              ((double)(float)((double)(longlong)((int)psVar5[1] >> 4) * dVar23));
            Hud_DrawTexHeaderQuad
                      (EffectTexHeaders + *(int *)(TexturePointerArray + (int)(lVar9 << 2)) * 0x24,
                       (int)sVar2 + iVar3 + 0xe,sVar1 + iVar6 + -0x11,0x22,0x22,uVar8);
            lVar9 = 0x1e;
            if (iVar4 != iVar11 + 1) {
              uVar14 = (uint)(lVar15 + 6);
              lVar9 = lVar15 + 6 +
                      ((longlong)((int)uVar14 / 0x1e + ((int)uVar14 >> 0x1f)) +
                      (ulonglong)(uVar14 >> 0x1f)) * -0x1e;
            }
          }
          iVar11 = iVar11 + 1;
          psVar21 = psVar21 + 2;
          lVar15 = lVar9;
        } while (iVar11 < iVar17);
      }
      uVar12 = *(undefined4 *)(param_1 + 0x58);
    }
  }
  return uVar12;
}



//==== 000d0e80  ns=hud  size=0x74
// sig: undefined AmmoHud_Init(void)
// callers(0): 
// callees(1): 000c8e10 hud::HudEntry_CalcNumberSize

void hud::AmmoHud_Init(undefined8 param_1)

{
  undefined4 uVar1;
  int entry;
  undefined8 in_LR;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  entry = (int)param_1;
  auVar2 = ZEXT416(0xffffffff);
  auVar2 = auVar2 | auVar2 << 0x20 | auVar2 << 0x40 | auVar2 << 0x60;
  auVar3 = vectorShiftLeftIntegerWord(auVar2,auVar2);
  auVar2 = loadVectorLeftIndexed(in_LR,0xd0e78);
  auVar4 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
  auVar2 = auVar2 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar2 = vectorMultiplyAddFloatingPoint
                     (auVar4,auVar2 | auVar2 << 0x20 | auVar2 << 0x40 | auVar2 << 0x60,auVar3);
  auVar3 = loadVectorLeftIndexed(4,0xd0e78);
  auVar2 = vectorConvertToSignedFixedPointWordSaturate(auVar2,0);
  auVar2 = ZEXT416((uint)(auVar2._0_4_ + auVar3._0_4_)) & (undefined1  [16])0xffffffff;
  uVar1 = storeVectorElementWordIndexed
                    (auVar2 | auVar2 << 0x20 | auVar2 << 0x40 | auVar2 << 0x60,0x7c,param_1);
  *(undefined4 *)(entry + 0x7cU & 0xfffffffc) = uVar1;
  *(undefined4 *)(entry + 0x58) = 0x20;
  *(undefined4 *)(entry + 0x5c) = 0x20;
  HudEntry_CalcNumberSize(entry);
  return;
}



//==== 000d0f00  ns=hud  size=0x94
// sig: undefined BoltHud_Init(void)
// callers(0): 
// callees(1): 000c8e10 hud::HudEntry_CalcNumberSize

void hud::BoltHud_Init(undefined8 param_1)

{
  undefined4 uVar1;
  int entry;
  undefined8 in_LR;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  auVar2 = ZEXT416(0xffffffff);
  auVar2 = auVar2 | auVar2 << 0x20 | auVar2 << 0x40 | auVar2 << 0x60;
  auVar3 = vectorShiftLeftIntegerWord(auVar2,auVar2);
  auVar2 = loadVectorLeftIndexed(in_LR,0xd0ef4);
  auVar4 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
  auVar2 = auVar2 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar2 = vectorMultiplyAddFloatingPoint
                     (auVar4,auVar2 | auVar2 << 0x20 | auVar2 << 0x40 | auVar2 << 0x60,auVar3);
  auVar3 = loadVectorLeftIndexed(4,0xd0ef4);
  auVar2 = vectorConvertToSignedFixedPointWordSaturate(auVar2,0);
  auVar2 = ZEXT416((uint)(auVar2._0_4_ + auVar3._0_4_)) & (undefined1  [16])0xffffffff;
  entry = (int)param_1;
  uVar1 = storeVectorElementWordIndexed
                    (auVar2 | auVar2 << 0x20 | auVar2 << 0x40 | auVar2 << 0x60,0x7c,param_1);
  *(undefined4 *)(entry + 0x7cU & 0xfffffffc) = uVar1;
  *(undefined4 *)(entry + 0x58) = 0x20;
  *(undefined4 *)(entry + 0x5c) = 0x20;
  HudEntry_CalcNumberSize(entry);
  DAT_00a1c188 = 0;
  *(undefined2 **)(entry + 0x80) = &DAT_00a1c188;
  return;
}



//==== 000d0fa0  ns=hud  size=0x15c
// sig: undefined BoltHud_Update(void)
// callers(0): 
// callees(0): 

void hud::BoltHud_Update(undefined8 param_1)

{
  bool bVar1;
  byte bVar2;
  byte bVar3;
  undefined4 uVar4;
  int iVar5;
  short sVar6;
  int iVar7;
  undefined8 in_r0;
  int iVar8;
  int iVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  
  iVar7 = g_boltCount;
  iVar5 = (int)param_1;
  iVar8 = **(short **)(iVar5 + 0x80) + 1;
  bVar1 = *(int *)(iVar5 + 0x74) != g_boltCount;
  sVar6 = (short)(iVar8 >> 0x1f);
  iVar9 = *(int *)(iVar5 + 0x7c);
  **(short **)(iVar5 + 0x80) =
       (short)iVar8 +
       (((short)(iVar8 / 0x3c) + sVar6) - ((short)((short)(iVar8 / 0x3c0000) + sVar6) >> 0xf)) *
       -0x3c;
  bVar2 = *(byte *)(iVar5 + 0x70);
  bVar3 = *(byte *)(iVar5 + 0x71);
  if (bVar1) {
    auVar10 = ZEXT416(0xffffffff);
    auVar10 = auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60;
    *(int *)(iVar5 + 0x74) = iVar7;
    auVar11 = vectorShiftLeftIntegerWord(auVar10,auVar10);
    auVar10 = loadVectorLeftIndexed(in_r0,0xd0f94);
    auVar10 = auVar10 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar12 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar10 = vectorMultiplyAddFloatingPoint
                        (auVar12,auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60,
                         auVar11);
    iVar9 = (int)(animationSpeed * 90.5);
    auVar10 = vectorConvertToSignedFixedPointWordSaturate(auVar10,0);
    auVar10 = auVar10 >> 0x60 & (undefined1  [16])0xffffffff;
    uVar4 = storeVectorElementWordIndexed
                      (auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60,0x7c,param_1);
    *(undefined4 *)(iVar5 + 0x7cU & 0xfffffffc) = uVar4;
  }
  if (iVar9 < (int)(animationSpeed * 5.5)) {
    *(undefined4 *)(iVar5 + 0x6c) = 1;
    if (bVar3 == 0) {
      if (bVar2 == 0) {
        *(undefined4 *)(iVar5 + 0x6c) = 0xfffffffa;
      }
      else {
        *(byte *)(iVar5 + 0x70) = bVar2 - 1;
      }
    }
    else {
      *(byte *)(iVar5 + 0x71) = bVar3 - 1;
    }
  }
  else if ((int)(uint)bVar2 < DAT_007243f4) {
    *(byte *)(iVar5 + 0x70) = bVar2 + 1;
  }
  else if ((int)(uint)bVar3 < DAT_007243f8) {
    *(byte *)(iVar5 + 0x71) = bVar3 + 1;
  }
  return;
}



//==== 000d1110  ns=hud  size=0x6bc
// sig: undefined Draw_BoltCountUI(void)
// callers(0): 
// callees(8): 00070130 draw::FontPrintMediumRight; 000cbb98 hud::Hud_DrawTexQuad; 000cbe60 hud::Hud_DrawTexHeaderQuad; 000cdeb8 hud::HudEntry_DrawIcon; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt; 005027bc fastfunc::FastLerpColor; 005cd2a8 libc::snprintf
// strings: 000d1108: '?333`'

undefined4 hud::Draw_BoltCountUI(int param_1)

{
  short *psVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  int iVar9;
  undefined8 uVar5;
  ulonglong uVar6;
  int iVar10;
  longlong lVar7;
  undefined8 uVar8;
  undefined4 uVar11;
  IconTableEntries *pIVar12;
  longlong lVar13;
  char *__format;
  int iVar14;
  int iVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  char acStack_a0 [40];
  
  psVar1 = *(short **)(param_1 + 0x80);
  if (g_heroState == TURRET_PLANE_UI) {
    uVar11 = *(undefined4 *)(param_1 + 0x58);
  }
  else if (*(char *)(param_1 + 0x70) == '\0') {
    uVar11 = *(undefined4 *)(param_1 + 0x58);
  }
  else {
    iVar2 = *(int *)(param_1 + 0x50);
    lVar13 = ((LZCOUNT(-Cutscene) << 0x3a) >> 0x3f & 8U) + 10;
    dVar16 = (double)fastfunc::FastIntToDouble();
    dVar17 = (double)fastfunc::FastIntToDouble(DAT_007243f4);
    dVar19 = (double)(float)(dVar16 / dVar17);
    dVar16 = 1.0;
    dVar17 = dVar16;
    if ((dVar19 <= 1.0) && (dVar17 = dVar19, dVar19 < 0.0)) {
      dVar17 = 0.0;
    }
    dVar19 = (double)fastfunc::FastIntToDouble(*(undefined1 *)(param_1 + 0x71));
    dVar18 = (double)fastfunc::FastIntToDouble(DAT_007243f8);
    dVar19 = (double)(float)(dVar19 / dVar18);
    if ((dVar19 <= dVar16) && (dVar16 = dVar19, dVar19 < 0.0)) {
      dVar16 = 0.0;
    }
    iVar9 = fastfunc::FastDoubleToInt((double)(float)(dVar17 * 128.0));
    uVar5 = fastfunc::FastDoubleToInt((double)((float)(longlong)iVar9 * 0.7));
    iVar15 = 1;
    for (iVar9 = g_boltCount; 9 < iVar9; iVar9 = iVar9 / 10) {
      iVar15 = iVar15 + 1;
    }
    iVar9 = fastfunc::FastDoubleToInt
                      ((double)(float)((double)(longlong)(DAT_0072441c * iVar15) * dVar17));
    uVar6 = 0;
    bVar4 = false;
    for (pIVar12 = IconTableEntry; pIVar12->iconId != 0x7580 && pIVar12->iconId != 0xffff;
        pIVar12 = pIVar12 + 1) {
      uVar6 = uVar6 + 1;
    }
    iVar10 = (int)((uVar6 & 0x1fffffff) << 3);
    if (*(short *)((int)&IconTableEntry->iconId + iVar10) == -1) {
      lVar7 = 0;
    }
    else {
      lVar7 = 0;
      if (1 < *(ushort *)((int)&IconTableEntry->unknown + iVar10)) {
        lVar7 = (ulonglong)*(ushort *)((int)&IconTableEntry->variantsCnt + iVar10) + 1;
      }
    }
    Hud_DrawTexQuad(lVar7,iVar2 + -0xc,lVar13,0x20,0x20,uVar5);
    uVar6 = 0;
    for (pIVar12 = IconTableEntry; pIVar12->iconId != 0x7580 && pIVar12->iconId != 0xffff;
        pIVar12 = pIVar12 + 1) {
      uVar6 = uVar6 + 1;
    }
    iVar10 = (int)((uVar6 & 0x1fffffff) << 3);
    if (*(short *)((int)&IconTableEntry->iconId + iVar10) == -1) {
      uVar6 = 0;
    }
    else {
      uVar6 = 0;
      if (*(short *)((int)&IconTableEntry->unknown + iVar10) != 0) {
        uVar6 = (ulonglong)*(ushort *)((int)&IconTableEntry->variantsCnt + iVar10);
      }
    }
    Hud_DrawTexHeaderQuad
              (EffectTexHeaders + *(int *)(TexturePointerArray + (int)(uVar6 << 2)) * 0x24,
               (iVar2 - iVar9) + -0x1c,lVar13,iVar9 + 0x10,0x20,uVar5);
    uVar6 = 0;
    for (pIVar12 = IconTableEntry; pIVar12->iconId != 0x7580 && pIVar12->iconId != 0xffff;
        pIVar12 = pIVar12 + 1) {
      uVar6 = uVar6 + 1;
    }
    iVar10 = (int)((uVar6 & 0x1fffffff) << 3);
    if (*(short *)((int)&IconTableEntry->iconId + iVar10) == -1) {
      lVar7 = 0;
    }
    else {
      lVar7 = 0;
      if (1 < *(ushort *)((int)&IconTableEntry->unknown + iVar10)) {
        lVar7 = (ulonglong)*(ushort *)((int)&IconTableEntry->variantsCnt + iVar10) + 1;
      }
    }
    Hud_DrawTexHeaderQuad
              (EffectTexHeaders + *(int *)(TexturePointerArray + (int)(lVar7 << 2)) * 0x24,
               (iVar2 - iVar9) + -0x3c,lVar13,0x20,0x20,uVar5);
    uVar6 = 0;
    iVar9 = (int)*psVar1 >> 1;
    for (pIVar12 = IconTableEntry; pIVar12->iconId != 0x754f && pIVar12->iconId != 0xffff;
        pIVar12 = pIVar12 + 1) {
      uVar6 = uVar6 + 1;
    }
    iVar10 = (int)((uVar6 & 0x1fffffff) << 3);
    if (*(short *)((int)&IconTableEntry->iconId + iVar10) == -1) {
      lVar7 = 0;
    }
    else {
      lVar7 = 0;
      if (iVar9 < (int)(uint)*(ushort *)((int)&IconTableEntry->unknown + iVar10)) {
        lVar7 = (ulonglong)*(ushort *)((int)&IconTableEntry->variantsCnt + iVar10) + (longlong)iVar9
        ;
      }
    }
    HudEntry_DrawIcon(param_1,lVar7,iVar2 + -0x20,lVar13,0,0x80);
    uVar5 = fastfunc::FastLerpColor(dVar16,PTR_DAT_007243fc,DAT_00724400);
    uVar8 = fastfunc::FastLerpColor(dVar16,0,0xffffffff80000000);
    libc::snprintf(acStack_a0,"%d",g_boltCount);
    iVar9 = (int)lVar13;
    draw::FontPrintMediumRight
              (DAT_00724404 + iVar2 + 1,DAT_00724408 + iVar9 + 1,uVar8,acStack_a0,0xffffffffffffffff
              );
    draw::FontPrintMediumRight
              (DAT_00724404 + iVar2,DAT_00724408 + iVar9,uVar5,acStack_a0,0xffffffffffffffff);
    if ((g_Language == 3) || (g_Language == 5)) {
      __format = ".";
    }
    else {
      bVar4 = true;
      __format = "\'";
    }
    libc::snprintf(acStack_a0,__format);
    iVar10 = DAT_00724414;
    iVar3 = DAT_00724418;
    if (bVar4) {
      iVar10 = DAT_0072440c;
      iVar3 = DAT_00724410;
    }
    iVar14 = 3;
    if (3 < iVar15) {
      do {
        draw::FontPrintMediumRight
                  (((iVar10 + iVar2) - DAT_0072441c * iVar14) + 2,iVar3 + iVar9 + 2,uVar8,acStack_a0
                   ,0xffffffffffffffff);
        draw::FontPrintMediumRight
                  ((iVar10 + iVar2) - DAT_0072441c * iVar14,iVar3 + iVar9,uVar5,acStack_a0,
                   0xffffffffffffffff);
        iVar14 = iVar14 + 3;
      } while (iVar14 < iVar15);
    }
    uVar11 = *(undefined4 *)(param_1 + 0x58);
  }
  return uVar11;
}



//==== 000d17d8  ns=hud  size=0xb4
// sig: undefined UnusedIconHud_Init(void)
// callers(0): 
// callees(1): 000c8e10 hud::HudEntry_CalcNumberSize

void hud::UnusedIconHud_Init(undefined8 param_1)

{
  undefined4 uVar1;
  int entry;
  undefined8 in_LR;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  auVar2 = ZEXT416(0xffffffff);
  auVar2 = auVar2 | auVar2 << 0x20 | auVar2 << 0x40 | auVar2 << 0x60;
  auVar3 = vectorShiftLeftIntegerWord(auVar2,auVar2);
  auVar2 = loadVectorLeftIndexed(in_LR,0xd17cc);
  auVar4 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
  auVar2 = auVar2 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar2 = vectorMultiplyAddFloatingPoint
                     (auVar4,auVar2 | auVar2 << 0x20 | auVar2 << 0x40 | auVar2 << 0x60,auVar3);
  auVar3 = loadVectorLeftIndexed(4,0xd17cc);
  auVar2 = vectorConvertToSignedFixedPointWordSaturate(auVar2,0);
  auVar2 = ZEXT416((uint)(auVar2._0_4_ + auVar3._0_4_)) & (undefined1  [16])0xffffffff;
  entry = (int)param_1;
  uVar1 = storeVectorElementWordIndexed
                    (auVar2 | auVar2 << 0x20 | auVar2 << 0x40 | auVar2 << 0x60,0x7c,param_1);
  *(undefined4 *)(entry + 0x7cU & 0xfffffffc) = uVar1;
  *(undefined4 *)(entry + 0x58) = 0x40;
  *(undefined4 *)(entry + 0x5c) = 0x40;
  *(undefined2 *)(entry + 0x48) = 0x20;
  *(undefined2 *)(entry + 0x4a) = 0;
  HudEntry_CalcNumberSize(entry);
  DAT_00a1c170 = 0;
  *(undefined4 **)(entry + 0x80) = &DAT_00a1c170;
  DAT_00a1c17c = 0;
  DAT_00a1c174 = 0;
  DAT_00a1c178 = 0;
  return;
}



//==== 000d1898  ns=hud  size=0x2f4
// sig: undefined UnusedIconHud_Update(void)
// callers(0): 
// callees(1): 000c9138 hud::HudIcon_GetAnimFrame

void hud::UnusedIconHud_Update(longlong param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined8 in_LR;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  iVar4 = (int)param_1;
  piVar1 = *(int **)(iVar4 + 0x80);
  iVar7 = *(int *)(iVar4 + 0x78);
  iVar2 = *(int *)(iVar4 + 0x74);
  iVar5 = *(int *)(iVar4 + 0x6c);
  if (*(int **)(iVar4 + 0xc) != (int *)0x0) {
    iVar7 = **(int **)(iVar4 + 0xc);
    iVar7 = iVar7 + (iVar7 >> 0x1f & -iVar7);
    iVar7 = iVar7 + ((uint)((longlong)*(int *)(iVar4 + 8) - (longlong)iVar7 >> 0x3f) &
                    *(int *)(iVar4 + 8) - iVar7);
    *(int *)(iVar4 + 0x78) = iVar7;
  }
  if ((iVar2 != iVar7) && (piVar1[1] == 0)) {
    auVar9 = ZEXT416(0xffffffff);
    auVar8 = auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60;
    auVar9 = loadVectorLeftIndexed(in_LR,0xd188c);
    auVar9 = auVar9 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar8 = vectorShiftLeftIntegerWord(auVar8,auVar8);
    auVar10 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar9 = vectorMultiplyAddFloatingPoint
                       (auVar10,auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60,auVar8);
    auVar9 = vectorConvertToSignedFixedPointWordSaturate(auVar9,0);
    auVar9 = auVar9 >> 0x60 & (undefined1  [16])0xffffffff;
    uVar3 = storeVectorElementWordIndexed
                      (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60,0x7c,param_1);
    *(undefined4 *)(iVar4 + 0x7cU & 0xfffffffc) = uVar3;
    if (iVar5 < 0) {
      *piVar1 = iVar7 + ((uint)((longlong)iVar7 - (longlong)iVar2 >> 0x3f) & iVar2 - iVar7);
      *(undefined4 *)(iVar4 + 0x74) = *(undefined4 *)(iVar4 + 0x78);
      piVar1[2] = 0x80;
      iVar5 = *(int *)(iVar4 + 0x6c);
    }
    if (0x17 < iVar5) {
      piVar1[1] = 0x80;
      iVar7 = *(int *)(iVar4 + 0x78);
      *piVar1 = iVar7 + ((uint)((longlong)iVar7 - (longlong)*(int *)(iVar4 + 0x74) >> 0x3f) &
                        *(int *)(iVar4 + 0x74) - iVar7);
    }
  }
  piVar1[3] = piVar1[3] + DAT_00724424;
  if (piVar1[1] != 0) {
    auVar9 = ZEXT416(0xffffffff);
    auVar8 = auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60;
    auVar9 = loadVectorLeftIndexed(in_LR,0xd188c);
    auVar9 = auVar9 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar8 = vectorShiftLeftIntegerWord(auVar8,auVar8);
    auVar10 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar9 = vectorMultiplyAddFloatingPoint
                       (auVar10,auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60,auVar8);
    auVar9 = vectorConvertToSignedFixedPointWordSaturate(auVar9,0);
    auVar9 = auVar9 >> 0x60 & (undefined1  [16])0xffffffff;
    uVar3 = storeVectorElementWordIndexed
                      (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60,0x7c,param_1);
    *(undefined4 *)(iVar4 + 0x7cU & 0xfffffffc) = uVar3;
    iVar2 = DAT_00724420;
    iVar7 = piVar1[1];
    piVar1[2] = 0;
    piVar1[1] = iVar7 - iVar2;
    if (iVar7 - iVar2 < 1) {
      piVar1[1] = 0;
      piVar1[2] = 0x80;
      *(undefined4 *)(iVar4 + 0x74) = *(undefined4 *)(iVar4 + 0x78);
    }
  }
  if (piVar1[2] != 0) {
    auVar9 = ZEXT416(0xffffffff);
    auVar9 = auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60;
    auVar8 = vectorShiftLeftIntegerWord(auVar9,auVar9);
    auVar9 = loadVectorLeftIndexed(4,0xd188c);
    auVar9 = auVar9 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar10 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    iVar7 = *(int *)(iVar4 + 0x6c);
    auVar9 = vectorMultiplyAddFloatingPoint
                       (auVar10,auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60,auVar8);
    auVar9 = vectorConvertToSignedFixedPointWordSaturate(auVar9,0);
    auVar9 = auVar9 >> 0x60 & (undefined1  [16])0xffffffff;
    uVar3 = storeVectorElementWordIndexed
                      (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60,0x7c,param_1);
    *(undefined4 *)(iVar4 + 0x7cU & 0xfffffffc) = uVar3;
    uVar6 = piVar1[2];
    if (0x18 < iVar7) {
      uVar6 = uVar6 - DAT_00724420;
    }
    piVar1[2] = (uint)(-(longlong)(int)uVar6 >> 0x3f) & uVar6;
  }
  if (*(int *)(iVar4 + 0x7c) < (int)(animationSpeed * 5.5)) {
    if (*(char *)(iVar4 + 0x71) == '\0') {
      if (*(char *)(iVar4 + 0x70) == '\0') {
        *(undefined4 *)(iVar4 + 0x6c) = 0xfffffffa;
      }
      else {
        *(char *)(iVar4 + 0x70) = *(char *)(iVar4 + 0x70) + -1;
      }
    }
    else {
      *(char *)(iVar4 + 0x71) = *(char *)(iVar4 + 0x71) + -1;
    }
  }
  else if ((int)(uint)*(byte *)(iVar4 + 0x70) < DAT_007243f4) {
    *(byte *)(iVar4 + 0x70) = *(byte *)(iVar4 + 0x70) + 1;
  }
  else if ((int)(uint)*(byte *)(iVar4 + 0x71) < DAT_007243f8) {
    *(byte *)(iVar4 + 0x71) = *(byte *)(iVar4 + 0x71) + 1;
  }
  HudIcon_GetAnimFrame(param_1 + 0x40);
  return;
}



//==== 000d1b8c  ns=hud  size=0x268
// sig: undefined UnusedIconHud_Draw(void)
// callers(0): 
// callees(2): 000c8c08 hud::HudEntry_GetSlideOffset; 000cdeb8 hud::HudEntry_DrawIcon

undefined4 hud::UnusedIconHud_Draw(int param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  int local_30;
  int local_2c [3];
  
  iVar1 = *(int *)(param_1 + 0x74);
  local_30 = *(int *)(param_1 + 0x50);
  piVar2 = *(int **)(param_1 + 0x80);
  local_2c[0] = *(int *)(param_1 + 0x54);
  uVar3 = *(uint *)(param_1 + 0x60);
  iVar4 = *(int *)(param_1 + 0x58);
  if (((uVar3 & 1) == 0) && ((uVar3 & 2) == 0)) {
    local_2c[0] = local_2c[0] - (*(int *)(param_1 + 0x5c) >> 1);
  }
  if ((uVar3 & 4) == 0) {
    local_30 = local_30 -
               (iVar4 + ((uint)((LZCOUNT(-(uVar3 & 8)) << 0x3a) >> 0x3f) & (iVar4 >> 1) - iVar4));
  }
  HudEntry_GetSlideOffset(param_1,&local_30,local_2c,*(undefined4 *)(param_1 + 0x6c),0);
  iVar1 = (((uint)(1 - (longlong)iVar1 >> 0x3f) & iVar1 - 1U) + 1) * 3;
  HudEntry_DrawIcon(param_1,(uint)*(ushort *)
                                   ((int)&IconTableEntry->variantsCnt +
                                   (int)((longlong)*(short *)(param_1 + 0x40) << 3)) + iVar1 + -3,
                    local_30,local_2c[0],1,0x80);
  uVar3 = piVar2[3];
  lVar5 = (longlong)
          (int)(0x80 - (uVar3 + (((int)uVar3 >> 8) + (uint)((int)uVar3 < 0 && (uVar3 & 0xff) != 0))
                                * -0x100));
  HudEntry_DrawIcon(param_1,(uint)*(ushort *)
                                   ((int)&IconTableEntry->variantsCnt +
                                   (int)((longlong)*(short *)(param_1 + 0x40) << 3)) + iVar1 + -2,
                    local_30,local_2c[0],1,lVar5 + (lVar5 >> 0x3f & lVar5 * -2));
  iVar1 = piVar2[1];
  if ((iVar1 != 0) || (piVar2[2] != 0)) {
    iVar4 = 0x80 - iVar1;
    if (iVar1 == 0) {
      iVar4 = piVar2[2];
    }
    HudEntry_DrawIcon(param_1,*(int *)(param_1 + 0x44) +
                              (((uint)(1 - (longlong)*piVar2 >> 0x3f) & *piVar2 - 1U) + 1) * 3 + -1,
                      local_30,local_2c[0],1,iVar4);
  }
  return *(undefined4 *)(param_1 + 0x58);
}



//==== 000d1df4  ns=hud  size=0x1f4
// sig: undefined Draw_MobyMeterHud(void)
// callers(0): 
// callees(2): 000c8c08 hud::HudEntry_GetSlideOffset; 000ca72c hud::DrawFlatOverlay

undefined4 hud::Draw_MobyMeterHud(int param_1)

{
  uint uVar1;
  int local_20;
  int local_1c [3];
  
  local_20 = *(int *)(param_1 + 0x50);
  local_1c[0] = *(int *)(param_1 + 0x54);
  uVar1 = *(uint *)(param_1 + 0x60);
  *(undefined4 *)(param_1 + 0x58) = 200;
  *(undefined4 *)(param_1 + 0x5c) = 0x20;
  if (((uVar1 & 1) == 0) && ((uVar1 & 2) == 0)) {
    local_1c[0] = local_1c[0] + -0x10;
  }
  if ((uVar1 & 4) == 0) {
    local_20 = local_20 - (((uint)((LZCOUNT(-(uVar1 & 8)) << 0x3a) >> 0x3f) & 0xffffff9c) + 200);
  }
  HudEntry_GetSlideOffset(param_1,&local_20,local_1c,*(undefined4 *)(param_1 + 0x6c),0);
  DrawFlatOverlay(local_20,local_1c[0],
                  (*(int *)(param_1 + 0x58) * *(int *)(param_1 + 0x74)) / *(int *)(param_1 + 8) +
                  local_20 + 1,local_1c[0] + 0x12,0x803030f0,0);
  DrawFlatOverlay(local_20 + -1,local_1c[0] + -1,local_20 + 0xcb,local_1c[0],0x80ffffff,0);
  DrawFlatOverlay(local_20 + 0xcb,local_1c[0],local_20 + 0xca,local_1c[0] + 0x13,0x80ffffff,0);
  DrawFlatOverlay(local_20 + 0xcb,local_1c[0] + 0x12,local_20 + -1,local_1c[0] + 0x13,0x80ffffff,0);
  DrawFlatOverlay(local_20 + -1,local_1c[0] + 0x12,local_20,local_1c[0] + -1,0x80ffffff,0);
  return *(undefined4 *)(param_1 + 0x58);
}



//==== 000d1ff0  ns=hud  size=0x90
// sig: undefined TrickHud_Init(void)
// callers(0): 
// callees(1): 000c8e10 hud::HudEntry_CalcNumberSize

void hud::TrickHud_Init(undefined8 param_1)

{
  undefined4 uVar1;
  int entry;
  undefined8 in_LR;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  entry = (int)param_1;
  auVar2 = ZEXT416(0xffffffff);
  auVar2 = auVar2 | auVar2 << 0x20 | auVar2 << 0x40 | auVar2 << 0x60;
  auVar3 = vectorShiftLeftIntegerWord(auVar2,auVar2);
  auVar2 = loadVectorLeftIndexed(in_LR,0xd1fe8);
  auVar4 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
  auVar2 = auVar2 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar2 = vectorMultiplyAddFloatingPoint
                     (auVar4,auVar2 | auVar2 << 0x20 | auVar2 << 0x40 | auVar2 << 0x60,auVar3);
  auVar3 = loadVectorLeftIndexed(4,0xd1fe8);
  auVar2 = vectorConvertToSignedFixedPointWordSaturate(auVar2,0);
  auVar2 = ZEXT416((uint)(auVar2._0_4_ + auVar3._0_4_)) & (undefined1  [16])0xffffffff;
  uVar1 = storeVectorElementWordIndexed
                    (auVar2 | auVar2 << 0x20 | auVar2 << 0x40 | auVar2 << 0x60,0x7c,param_1);
  *(undefined4 *)(entry + 0x7cU & 0xfffffffc) = uVar1;
  *(undefined2 *)(entry + 0x48) = 0;
  *(undefined2 *)(entry + 0x4a) = 0;
  DAT_00a1c810 = 0xffffffff;
  DAT_00a1c80c = 0xffffffff;
  DAT_00a1c808 = 0xffffffff;
  DAT_00a1c804 = 0xffffffff;
  HudEntry_CalcNumberSize(entry);
  return;
}



//==== 000d20a0  ns=hud  size=0x44c
// sig: undefined TrickHud_Update(void)
// callers(0): 
// callees(2): 00109af0 mobyutil::Delt; 00502758 fastfunc::FastDoubleToInt

void hud::TrickHud_Update(undefined8 param_1)

{
  longlong lVar1;
  byte bVar2;
  int *piVar3;
  undefined1 uVar4;
  ulonglong *puVar5;
  int iVar6;
  float fVar7;
  undefined4 uVar8;
  byte bVar9;
  int iVar10;
  ulonglong unaff_r31;
  byte in_cr6;
  ulonglong in_LR;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  
  lVar1 = ZEXT48(&stack0x00000000) - 0x90;
  puVar5 = (ulonglong *)lVar1;
  *puVar5 = ZEXT48(&stack0x00000000);
  puVar5[0x14] = in_LR;
  puVar5[0x11] = unaff_r31;
  auVar11 = loadVectorLeftIndexed(0x74,param_1);
  iVar6 = (int)param_1;
  piVar3 = *(int **)(iVar6 + 0xc);
  auVar11 = vectorConvertFromSignedFixedPointWord(auVar11,0);
  auVar11 = auVar11 >> 0x60 & (undefined1  [16])0xffffffff;
  uVar8 = storeVectorElementWordIndexed
                    (auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60,0x70,lVar1);
  *(undefined4 *)(puVar5 + 0xe) = uVar8;
  puVar5[0xf] = (longlong)*piVar3;
  mobyutil::Delt((float)(longlong)puVar5[0xf],6.0,(float *)(puVar5 + 0xe));
  uVar8 = fastfunc::FastDoubleToInt((double)*(float *)(puVar5 + 0xe));
  bVar2 = *(byte *)(iVar6 + 0x72);
  *(undefined4 *)(iVar6 + 0x74) = uVar8;
  fVar7 = animationSpeed;
  if (bVar2 == 0) {
    if (5 < g_framesNotGrounded) {
      auVar12 = loadVectorLeftIndexed(0x70c,0x969ce0);
      auVar13 = vectorConvertFromSignedFixedPointWord(auVar12,0);
      auVar11 = loadVectorLeftIndexed(4,0xd2080);
      auVar11 = auVar11 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar13 = auVar13 >> 0x60 & (undefined1  [16])0xffffffff;
      vectorCompareGreaterThanOrEqualToFloatingPoint
                (auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60,
                 auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60);
      if (!(bool)(in_cr6 >> 1 & 1)) {
        auVar11 = auVar12 >> 0x60 & (undefined1  [16])0xffffffff;
        DAT_00a1c7f4 = 0;
        DAT_00a1c7ec = storeVectorElementWordIndexed
                                 (auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60,
                                  0xffffffffffffc7ec,0xa20000);
        DAT_00a1c7f0 = 0;
        DAT_00a1c7f8 = 0;
        DAT_00a1c7fc = 0;
        DAT_00a1c800 = 0;
        *(undefined1 *)(iVar6 + 0x72) = 1;
        uVar8 = DAT_00724428;
        *(undefined1 *)(iVar6 + 0x70) = 0;
        *(char *)(iVar6 + 0x71) = (char)uVar8;
      }
    }
  }
  else if (bVar2 < 2) {
    if (*(byte *)(iVar6 + 0x70) < 10) {
      *(byte *)(iVar6 + 0x70) = *(byte *)(iVar6 + 0x70) + 1;
    }
    if (*(char *)(iVar6 + 0x71) != '\0') {
      *(char *)(iVar6 + 0x71) = *(char *)(iVar6 + 0x71) + -1;
    }
    DAT_00a1c7f0 = DAT_0096a3d0;
    DAT_00a1c7f4 = DAT_0096a3c0;
    DAT_00a1c7f8 = DAT_0096a3c4;
    DAT_00a1c7fc = DAT_0096a3c8;
    DAT_00a1c800 = DAT_0096a3cc;
    if (DAT_00a1c7ec < DAT_0096a3ec) {
      DAT_00a1c7ec = DAT_0096a3ec;
      *(char *)(iVar6 + 0x71) = (char)DAT_00724428;
    }
    if ((g_framesGroundedCnt != 0) || ((0x6c < (int)g_heroState && ((int)g_heroState < 0x70)))) {
      DAT_00a1c814 = 0;
      DAT_0096a3d0 = 0;
      DAT_0096a3ec = 0;
      DAT_0096a3c0 = 0;
      DAT_0096a3c4 = 0;
      DAT_0096a3c8 = 0;
      DAT_0096a3cc = 0;
      DAT_0096a3e0 = 0;
      DAT_0096a3e4 = 0;
      DAT_0096a3e8 = 0;
      if (g_heroState == HOVERBOARD_RIDING) {
        if (2 < DAT_00a1c7f0) {
          DAT_00a1c810 = DAT_00a1c80c;
          DAT_00a1c80c = DAT_00a1c808;
          DAT_00a1c808 = DAT_00a1c804;
          DAT_00a1c804 = 0xffffffff;
        }
        *(undefined1 *)(iVar6 + 0x72) = 3;
        auVar11 = ZEXT416(0xffffffff);
        auVar11 = auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60;
        auVar13 = vectorShiftLeftIntegerWord(auVar11,auVar11);
        *(char *)(iVar6 + 0x71) = (char)DAT_00724428;
        auVar11 = loadVectorLeftIndexed(8,0xd2080);
        auVar11 = auVar11 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar12 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar11 = vectorMultiplyAddFloatingPoint
                            (auVar12,auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60,
                             auVar13);
        auVar11 = vectorConvertToSignedFixedPointWordSaturate(auVar11,0);
        auVar11 = auVar11 >> 0x60 & (undefined1  [16])0xff;
        uVar4 = storeVectorElementByteIndexed
                          (auVar11 | auVar11 << 8 | auVar11 << 0x10 | auVar11 << 0x18 |
                           auVar11 << 0x20 | auVar11 << 0x28 | auVar11 << 0x30 | auVar11 << 0x38 |
                           auVar11 << 0x40 | auVar11 << 0x48 | auVar11 << 0x50 | auVar11 << 0x58 |
                           auVar11 << 0x60 | auVar11 << 0x68 | auVar11 << 0x70 | auVar11 << 0x78,
                           0x70,param_1);
        *(undefined1 *)(iVar6 + 0x70) = uVar4;
      }
      else {
        *(undefined1 *)(iVar6 + 0x72) = 2;
        auVar11 = ZEXT416(0xffffffff);
        auVar11 = auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60;
        auVar13 = vectorShiftLeftIntegerWord(auVar11,auVar11);
        *(char *)(iVar6 + 0x71) = (char)DAT_00724428;
        auVar11 = loadVectorLeftIndexed(0xc,0xd2080);
        auVar11 = auVar11 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar12 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar11 = vectorMultiplyAddFloatingPoint
                            (auVar12,auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60,
                             auVar13);
        auVar11 = vectorConvertToSignedFixedPointWordSaturate(auVar11,0);
        auVar11 = auVar11 >> 0x60 & (undefined1  [16])0xff;
        uVar4 = storeVectorElementByteIndexed
                          (auVar11 | auVar11 << 8 | auVar11 << 0x10 | auVar11 << 0x18 |
                           auVar11 << 0x20 | auVar11 << 0x28 | auVar11 << 0x30 | auVar11 << 0x38 |
                           auVar11 << 0x40 | auVar11 << 0x48 | auVar11 << 0x50 | auVar11 << 0x58 |
                           auVar11 << 0x60 | auVar11 << 0x68 | auVar11 << 0x70 | auVar11 << 0x78,
                           0x70,param_1);
        *(undefined1 *)(iVar6 + 0x70) = uVar4;
      }
    }
  }
  else if (bVar2 < 4) {
    bVar9 = *(byte *)(iVar6 + 0x70);
    if (bVar9 == 0) {
      bVar9 = 0;
      DAT_00a1c814 = 0;
      DAT_00a1c7f4 = 0;
      DAT_00a1c7ec = 0;
      DAT_00a1c7f0 = 0;
      DAT_00a1c7f8 = 0;
      DAT_00a1c7fc = 0;
      DAT_00a1c800 = 0;
      *(undefined1 *)(iVar6 + 0x72) = 0;
    }
    else if (bVar2 == 3) {
      auVar11 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      puVar5[0xf] = (longlong)(int)(animationSpeed * 110.5);
      if ((uint)bVar9 == *(uint *)((int)puVar5 + 0x7c)) {
        auVar13 = ZEXT416(0xffffffff);
        auVar13 = auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60;
        auVar12 = vectorShiftLeftIntegerWord(auVar13,auVar13);
        g_RaceScore = g_RaceScore + DAT_00a1c814;
        iVar10 = DAT_0096a544 + DAT_00a1c814 * 5;
        auVar13 = loadVectorLeftIndexed(0x14,0xd2080);
        auVar13 = auVar13 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar13 = vectorMultiplyAddFloatingPoint
                            (auVar11,auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60,
                             auVar12);
        auVar11 = ZEXT416(0xffffffff);
        auVar11 = auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60;
        auVar14 = loadVectorLeftIndexed(0x18,0xd2080);
        auVar12 = vectorShiftLeftIntegerWord(auVar11,auVar11);
        auVar11 = auVar14 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar13 = vectorConvertToSignedFixedPointWordSaturate(auVar13,0);
        auVar13 = vectorConvertFromSignedFixedPointWord(auVar13,0);
        auVar11 = vectorMultiplyAddFloatingPoint
                            (auVar13,auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60,
                             auVar12);
        auVar11 = vectorConvertToSignedFixedPointWordSaturate(auVar11,0);
        DAT_0096a544 = iVar10;
        puVar5[0xf] = (longlong)(int)((float)(longlong)(fVar7 * 17.5) * 60.0);
        if (*(int *)((int)puVar5 + 0x7c) < iVar10) {
          auVar11 = auVar11 >> 0x60 & (undefined1  [16])0xffffffff;
          DAT_0096a544 = storeVectorElementWordIndexed
                                   (auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60,
                                    0x864,0x969ce0);
        }
      }
    }
    *(byte *)(iVar6 + 0x70) = bVar9 - 1;
  }
  return;
}



//==== 000d24ec  ns=hud  size=0x2d0
// sig: void Hud_DrawEffectTexQuad(int tex, int x, int y, int w, int h, int alpha)
// callers(2): 000d27f8 hud::Draw_HoverboardTrickHud; 000d44e4 hud::Draw_GiantClankHealthHUD
// callees(2): 004d6948 idol_draw::ResetPassState; 004d6d00 idol_draw::SetTextureUnitRegs

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void hud::Hud_DrawEffectTexQuad(int tex,int x,int y,int w,int h,int alpha)

{
  RsxCmd RVar1;
  RsxCmd RVar2;
  RenderingStep *pRVar3;
  int iVar4;
  
  iVar4 = EffectTexHeaders + *(int *)(TexturePointerArray + (int)((longlong)tex << 2)) * 0x24;
  idol_draw::SetTextureUnitRegs(HUD_Pass,0,iVar4);
  idol_draw::ResetPassState(HUD_Pass);
  pRVar3 = HUD_Pass;
  iVar4 = *(int *)(iVar4 + 0x18);
  *HUD_Pass->command = 0x41948;
  pRVar3->command[1] = alpha << 0x18 | 0x808080;
  pRVar3->command = pRVar3->command + 2;
  pRVar3 = HUD_Pass;
  *HUD_Pass->command = 0x400c1714;
  pRVar3->command[1] = 0;
  pRVar3->command[2] = 0;
  pRVar3->command[3] = 0;
  pRVar3->command[4] = NV4097_SET_BEGIN_END_x1;
  pRVar3->command[5] = 8;
  pRVar3->command = pRVar3->command + 6;
  pRVar3 = HUD_Pass;
  *HUD_Pass->command = 0x41904;
  pRVar3->command[1] = 0;
  pRVar3->command = pRVar3->command + 2;
  pRVar3 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_VERTEX_DATA2S_M_x1;
  pRVar3->command[1] = y << 0x10 | x & 0xffff;
  pRVar3->command = pRVar3->command + 2;
  pRVar3 = HUD_Pass;
  RVar1 = (RsxCmd)((longlong)w << 1) & 0xfffe;
  *HUD_Pass->command = 0x41904;
  pRVar3->command[1] = iVar4 << 0x10;
  pRVar3->command = pRVar3->command + 2;
  pRVar3 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_VERTEX_DATA2S_M_x1;
  pRVar3->command[1] = (RsxCmd)(((longlong)h + (longlong)y & 0xffffffffU) << 0x10) | x & 0xffff;
  pRVar3->command = pRVar3->command + 2;
  pRVar3 = HUD_Pass;
  RVar2 = w + x & 0xffff;
  *HUD_Pass->command = 0x41904;
  pRVar3->command[1] = iVar4 << 0x10 | RVar1;
  pRVar3->command = pRVar3->command + 2;
  pRVar3 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_VERTEX_DATA2S_M_x1;
  pRVar3->command[1] = (RsxCmd)(((longlong)h + (longlong)y & 0xffffffffU) << 0x10) | RVar2;
  pRVar3->command = pRVar3->command + 2;
  pRVar3 = HUD_Pass;
  *HUD_Pass->command = 0x41904;
  pRVar3->command[1] = RVar1;
  pRVar3->command = pRVar3->command + 2;
  pRVar3 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_VERTEX_DATA2S_M_x1;
  pRVar3->command[1] = y << 0x10 | RVar2;
  pRVar3->command = pRVar3->command + 2;
  pRVar3 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_BEGIN_END_x1;
  pRVar3->command[1] = 0;
  pRVar3->command = pRVar3->command + 2;
  return;
}



//==== 000d27f8  ns=hud  size=0xe00
// sig: undefined Draw_HoverboardTrickHud(void)
// callers(0): 
// callees(9): 00070998 draw::FontPrintLargeCenter; 0007b740 help::help_msg_string_by_index; 000cbe60 hud::Hud_DrawTexHeaderQuad; 000cc148 hud::Hud_DrawTextBox; 000d24ec hud::Hud_DrawEffectTexQuad; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt; 005027bc fastfunc::FastLerpColor; 005cd2a8 libc::snprintf
// strings: 00652124: 'x%d %s' | 00652134: '%s + %d %s' | 00652144: '%s + %s + %d Flips'

undefined4 hud::Draw_HoverboardTrickHud(int param_1)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  short sVar4;
  undefined4 uVar5;
  ulonglong *puVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  ulonglong uVar11;
  int iVar15;
  ulonglong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  char *__format;
  int iVar16;
  int iVar17;
  int iVar18;
  IconTableEntries *pIVar19;
  int *piVar20;
  ulonglong unaff_r21;
  ulonglong unaff_r22;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  longlong lVar21;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  longlong lVar22;
  ulonglong uVar23;
  ulonglong unaff_r29;
  longlong lVar24;
  ulonglong unaff_r30;
  uint uVar25;
  int iVar26;
  ulonglong unaff_r31;
  ulonglong in_LR;
  double dVar27;
  double dVar28;
  ulonglong in_f31;
  
  uVar11 = ZEXT48(&stack0x00000000);
  lVar21 = uVar11 - 0x1b0;
  puVar6 = (ulonglong *)lVar21;
  *puVar6 = uVar11;
  puVar6[0x38] = in_LR;
  puVar6[0x35] = in_f31;
  puVar6[0x34] = unaff_r31;
  puVar6[0x32] = unaff_r29;
  puVar6[0x27] = (ulonglong)*(byte *)(param_1 + 0x70);
  uVar5 = *(undefined4 *)(param_1 + 0x58);
  bVar1 = hero::g_heroStateType != 0x16;
  puVar6[0x33] = unaff_r30;
  puVar6[0x31] = unaff_r28;
  puVar6[0x30] = unaff_r27;
  puVar6[0x2f] = unaff_r26;
  puVar6[0x2e] = unaff_r25;
  puVar6[0x2d] = unaff_r24;
  puVar6[0x2c] = unaff_r23;
  puVar6[0x2b] = unaff_r22;
  puVar6[0x2a] = unaff_r21;
  dVar28 = (double)((float)(longlong)puVar6[0x27] * 0.1);
  if (1.0 - (double)((float)(longlong)puVar6[0x27] * 0.1) < 0.0) {
    dVar28 = 1.0;
  }
  if (bVar1) {
    return uVar5;
  }
  if (*(char *)(param_1 + 0x72) == '\0') goto LAB_000d316c;
  libc::snprintf((char *)(puVar6 + 0x17),"%d",DAT_00a1c7ec * 0x168);
  dVar27 = (double)fastfunc::FastIntToDouble(*(undefined1 *)(param_1 + 0x71));
  puVar6[0x27] = (longlong)DAT_00724428;
  bVar2 = *(byte *)(param_1 + 0x72);
  iVar15 = DAT_0072444c;
  if (bVar2 < 2) {
    if (bVar2 != 0) {
LAB_000d2944:
      iVar15 = fastfunc::FastLerpColor
                         ((double)(float)(dVar27 / (double)(longlong)
                                                           (animationSpeed *
                                                           ((float)(longlong)puVar6[0x27] + 0.5))),
                          PTR_DAT_00724440,PTR_DAT_00724444);
    }
  }
  else if (bVar2 == 3) goto LAB_000d2944;
  uVar12 = fastfunc::FastDoubleToInt((double)(float)(dVar28 * 128.0));
  iVar17 = DAT_00a1c7f0;
  iVar16 = DAT_00a1c7ec;
  iVar26 = (int)((uVar12 & 0xffffffff) << 0x18);
  cVar3 = *(char *)(param_1 + 0x72);
  uVar25 = iVar15 + iVar26;
  if ((cVar3 == '\x01') || (cVar3 == '\x02')) {
    lVar21 = uVar11 - 0xf8;
    draw::FontPrintLargeCenter(DAT_00724460 + 1,DAT_00724464 + 1,iVar26,lVar21,0xffffffffffffffff);
    draw::FontPrintLargeCenter(DAT_00724460,DAT_00724464,uVar25,lVar21,0xffffffffffffffff);
    iVar15 = DAT_00a1c7f0;
    uVar13 = help::help_msg_string_by_index
                       ((int)((LZCOUNT(1 - DAT_00a1c7f0) << 0x3a) >> 0x3f) + STR_POSES);
    libc::snprintf((char *)lVar21,"x%d %s",iVar15,uVar13);
    draw::FontPrintLargeCenter(DAT_00724468 + 1,DAT_0072446c + 1,iVar26,lVar21,0xffffffffffffffff);
    draw::FontPrintLargeCenter(DAT_00724468,DAT_0072446c,uVar25,lVar21,0xffffffffffffffff);
    goto LAB_000d316c;
  }
  if (cVar3 != '\x03') goto LAB_000d316c;
  bVar1 = DAT_00a1c7f0 == 1;
  iVar15 = (int)uVar25 >> 0x18;
  if (DAT_00a1c7f0 == 3) {
    iVar26 = (int)((LZCOUNT(-DAT_00a1c7f8) << 0x3a) >> 0x3f) + 3;
    iVar26 = iVar26 + ((uint)((LZCOUNT(-DAT_00a1c7fc) << 0x3a) >> 0x3f) & 1U - iVar26);
    iVar26 = iVar26 + ((uint)((LZCOUNT(-DAT_00a1c800) << 0x3a) >> 0x3f) & -iVar26);
    if (-1 < iVar26) {
LAB_000d2b88:
      lVar21 = 0;
      if (DAT_00a1c7ec < 4) {
        if (1 < DAT_00a1c7ec) {
          lVar21 = 1;
        }
      }
      else {
        lVar21 = 2;
      }
      iVar26 = iVar26 + (int)lVar21 + (int)(lVar21 << 2);
      lVar24 = uVar11 - 0xf8;
      DAT_00a1c814 = *(int *)(&DAT_00724478 + iVar26 * 4) /
                     (int)(((uint)((LZCOUNT(iVar26 - DAT_00a1c808) << 0x3a) >> 0x3f) & 1) + 1 +
                           ((uint)((LZCOUNT(iVar26 - DAT_00a1c80c) << 0x3a) >> 0x3f) & 1) +
                          ((uint)((LZCOUNT(iVar26 - DAT_00a1c810) << 0x3a) >> 0x3f) & 1));
      DAT_00a1c804 = iVar26;
      libc::snprintf((char *)lVar24,"%d",DAT_00a1c814);
      iVar17 = DAT_00724474;
      iVar16 = DAT_00724470;
      lVar21 = (longlong)iVar15;
      iVar18 = DAT_00724474 + -0x18;
      lVar21 = lVar21 + (0x50 - lVar21 >> 0x3f & 0x50U - lVar21);
      iVar15 = draw::FontPrintLargeCenter
                         (DAT_00724470 + 1,DAT_00724474 + -0x17,uVar25 & 0xff000000,lVar24,
                          0xffffffffffffffff);
      Hud_DrawTextBox(iVar15 + -0x20,iVar17 + -0x20,(iVar16 - (iVar15 + -0x20)) * 2,0x20,lVar21);
      draw::FontPrintLargeCenter(iVar16,iVar18,uVar25,lVar24,0xffffffffffffffff);
      uVar13 = help::help_msg_string_by_index(iVar26 + STR_CALL_ME_SALLY);
      libc::snprintf((char *)lVar24,"%s",uVar13);
      iVar15 = DAT_00724474;
      lVar22 = (longlong)DAT_00724470;
      iVar26 = draw::FontPrintLargeCenter
                         (DAT_00724470 + 1,DAT_00724474 + 1,uVar25 & 0xff000000,lVar24,
                          0xffffffffffffffff);
      Hud_DrawTextBox((longlong)(iVar26 + -0x20),iVar15 + -8,(int)(lVar22 - (iVar26 + -0x20)) * 2,
                      0x20,lVar21);
      draw::FontPrintLargeCenter(lVar22,iVar15,uVar25,lVar24,0xffffffffffffffff);
      goto LAB_000d316c;
    }
  }
  else if (DAT_00a1c7f0 == 4) {
    iVar26 = 4;
    goto LAB_000d2b88;
  }
  if (0 < DAT_00a1c7f0) {
    iVar18 = 0;
    piVar20 = &DAT_00a1c7f4;
    iVar26 = 0;
    do {
      if (iVar17 <= iVar26) break;
      if (*piVar20 != 0) {
        *(int *)((int)lVar21 + 0x70) = iVar18;
        iVar26 = iVar26 + 1;
        lVar21 = lVar21 + 4;
      }
      iVar18 = iVar18 + 1;
      piVar20 = piVar20 + 1;
    } while (iVar18 < 4);
    if (bVar1) {
      DAT_00a1c814 = iVar16 * 10;
      lVar22 = uVar11 - 0xf8;
      libc::snprintf((char *)lVar22,"%d",DAT_00a1c814);
      iVar26 = DAT_00724474;
      lVar21 = (longlong)iVar15;
      lVar24 = (longlong)DAT_00724470;
      iVar16 = DAT_00724474 + -0x18;
      lVar21 = lVar21 + (0x50 - lVar21 >> 0x3f & 0x50U - lVar21);
      iVar15 = draw::FontPrintLargeCenter
                         (DAT_00724470 + 1,DAT_00724474 + -0x17,uVar25 & 0xff000000,lVar22,
                          0xffffffffffffffff);
      Hud_DrawTextBox((longlong)(iVar15 + -0x20),iVar26 + -0x20,(int)(lVar24 - (iVar15 + -0x20)) * 2
                      ,0x20,lVar21);
      draw::FontPrintLargeCenter(lVar24,iVar16,uVar25,lVar22,0xffffffffffffffff);
      uVar13 = help::help_msg_string_by_index(*(int *)(puVar6 + 0xe) + STR_GONZO);
      iVar15 = DAT_00a1c7ec;
      uVar14 = help::help_msg_string_by_index
                         ((int)((LZCOUNT(0x168 - DAT_00a1c7ec) << 0x3a) >> 0x3f) + STR_FLIPS);
      libc::snprintf((char *)lVar22,"%s + %d %s",uVar13,iVar15,uVar14);
      iVar26 = DAT_00724474;
      iVar15 = DAT_00724470;
      iVar16 = draw::FontPrintLargeCenter
                         (DAT_00724470 + 1,DAT_00724474 + 1,uVar25 & 0xff000000,lVar22,
                          0xffffffffffffffff);
      Hud_DrawTextBox(iVar16 + -0x20,iVar26 + -8,(iVar15 - (iVar16 + -0x20)) * 2,0x20,lVar21);
      draw::FontPrintLargeCenter(iVar15,iVar26,uVar25,lVar22,0xffffffffffffffff);
    }
    else {
      DAT_00a1c814 = iVar16 * 0x14;
      lVar22 = uVar11 - 0xf8;
      libc::snprintf((char *)lVar22,"%d",DAT_00a1c814);
      iVar26 = DAT_00724474;
      lVar21 = (longlong)iVar15;
      lVar24 = (longlong)DAT_00724470;
      iVar16 = DAT_00724474 + -0x18;
      lVar21 = lVar21 + (0x50 - lVar21 >> 0x3f & 0x50U - lVar21);
      iVar15 = draw::FontPrintLargeCenter
                         (DAT_00724470 + 1,DAT_00724474 + -0x17,uVar25 & 0xff000000,lVar22,
                          0xffffffffffffffff);
      Hud_DrawTextBox((longlong)(iVar15 + -0x20),iVar26 + -0x20,(int)(lVar24 - (iVar15 + -0x20)) * 2
                      ,0x20,lVar21);
      draw::FontPrintLargeCenter(lVar24,iVar16,uVar25,lVar22,0xffffffffffffffff);
      uVar13 = help::help_msg_string_by_index(*(int *)(puVar6 + 0xe) + STR_GONZO);
      uVar14 = help::help_msg_string_by_index(*(int *)((int)puVar6 + 0x74) + STR_GONZO);
      libc::snprintf((char *)lVar22,"%s + %s + %d Flips",uVar13,uVar14,DAT_00a1c7ec);
      iVar26 = DAT_00724474;
      iVar15 = DAT_00724470;
      iVar16 = draw::FontPrintLargeCenter
                         (DAT_00724470 + 1,DAT_00724474 + 1,uVar25 & 0xff000000,lVar22,
                          0xffffffffffffffff);
      Hud_DrawTextBox(iVar16 + -0x20,iVar26 + -8,(iVar15 - (iVar16 + -0x20)) * 2,0x20,lVar21);
      draw::FontPrintLargeCenter(iVar15,iVar26,uVar25,lVar22,0xffffffffffffffff);
    }
  }
LAB_000d316c:
  iVar15 = *(int *)(param_1 + 0x50);
  iVar26 = *(int *)(param_1 + 0x54);
  uVar25 = *(uint *)(param_1 + 0x60);
  *(undefined4 *)(param_1 + 0x58) = 0x100;
  *(undefined4 *)(param_1 + 0x5c) = 0x40;
  if (((uVar25 & 1) == 0) && ((uVar25 & 2) == 0)) {
    iVar26 = iVar26 + -0x20;
  }
  uVar12 = 0;
  lVar21 = (longlong)iVar15 +
           ((LZCOUNT(-(uVar25 & 4)) << 0x3a) >> 0x3f &
           (longlong)
           (int)(iVar15 + -0x100 +
                ((uint)((LZCOUNT(-(uVar25 & 8)) << 0x3a) >> 0x3f) &
                (iVar15 + -0x80) - (iVar15 + -0x100))) - (longlong)iVar15);
  uVar23 = 0;
  for (iVar15 = 0; sVar4 = *(short *)((int)&IconTableEntry->iconId + iVar15),
      sVar4 != 0x7558 && sVar4 != -1; iVar15 = iVar15 + 8) {
    uVar12 = uVar12 + 1;
  }
  iVar15 = (int)((uVar12 & 0x1fffffff) << 3);
  if (*(short *)((int)&IconTableEntry->iconId + iVar15) == -1) {
    iVar16 = 0;
  }
  else {
    iVar16 = 0;
    if (1 < *(ushort *)((int)&IconTableEntry->unknown + iVar15)) {
      iVar16 = *(ushort *)((int)&IconTableEntry->variantsCnt + iVar15) + 1;
    }
  }
  Hud_DrawEffectTexQuad
            (iVar16,(int)lVar21,iVar26,
             (*(int *)(param_1 + 0x74) * 0xdd) / *(int *)(param_1 + 8) + 0x1b,0x40,0x80);
  uVar12 = 0;
  for (pIVar19 = IconTableEntry; pIVar19->iconId != 0x7558 && pIVar19->iconId != 0xffff;
      pIVar19 = pIVar19 + 1) {
    uVar12 = uVar12 + 1;
  }
  iVar15 = (int)((uVar12 & 0x1fffffff) << 3);
  if ((*(short *)((int)&IconTableEntry->iconId + iVar15) != -1) &&
     (*(short *)((int)&IconTableEntry->unknown + iVar15) != 0)) {
    uVar23 = (ulonglong)*(ushort *)((int)&IconTableEntry->variantsCnt + iVar15);
  }
  Hud_DrawTexHeaderQuad
            (EffectTexHeaders + *(int *)(TexturePointerArray + (int)(uVar23 << 2)) * 0x24,lVar21,
             iVar26,0x100,0x40,0x80);
  bVar2 = DAT_0096a58e;
  fVar7 = animationSpeed;
  puVar6[0x27] = (longlong)(int)(animationSpeed * 120.5);
  iVar15 = worldUpdateTime;
  if (*(int *)((int)puVar6 + 0x13c) < (int)(uint)bVar2) {
    lVar21 = (longlong)(fVar7 * 60.5);
    puVar6[0x27] = (longlong)(int)(fVar7 * 60.5);
    dVar28 = (double)fastfunc::FastIntToDouble
                               (iVar15 - (iVar15 / *(int *)((int)puVar6 + 0x13c)) *
                                         *(int *)((int)puVar6 + 0x13c));
    fVar7 = (float)(dVar28 / (double)lVar21) * 6.28318 - 3.14159;
    fVar8 = 3.1415925 - fVar7;
    if (fVar7 - (3.1415925 - fVar7) < 0.0) {
      fVar8 = fVar7;
    }
    fVar9 = -3.1415925 - fVar7;
    if ((-3.1415925 - fVar7) - fVar8 < 0.0) {
      fVar9 = fVar8;
    }
    fVar7 = fVar9 * fVar9;
    fVar8 = fVar7 * fVar7 * fVar9;
    fVar10 = fVar7 * fVar8;
    uVar12 = fastfunc::FastLerpColor
                       ((double)((fVar7 * fVar10 * 2.601887e-06 +
                                 fVar10 * -0.0001980741 +
                                 fVar8 * 0.0083330255 + fVar7 * fVar9 * -0.16666657 + fVar9) * 0.5 +
                                0.5),DAT_00724458,DAT_0072445c);
    lVar24 = uVar11 - 0x138;
    __format = (char *)help::help_msg_string_by_index(STR_WRONG_WAY_);
    libc::snprintf((char *)lVar24,__format);
    iVar15 = DAT_00724454;
    iVar26 = DAT_00724450 + 1;
    iVar17 = DAT_00724454 + 1;
    iVar16 = draw::FontPrintLargeCenter
                       (DAT_00724450 + 2,DAT_00724454 + 2,0xffffffff80000000,lVar24,
                        0xffffffffffffffff);
    Hud_DrawTextBox((longlong)(iVar16 + -0x20),iVar15 + -7,
                    (int)((longlong)iVar26 - (longlong)(iVar16 + -0x20)) * 2,0x20,0xffffffffffffff80
                   );
    draw::FontPrintLargeCenter((longlong)iVar26,iVar17,0xffffffff80000000,lVar24,0xffffffffffffffff)
    ;
    iVar26 = DAT_00724454;
    iVar15 = DAT_00724450;
    lVar21 = (longlong)((int)uVar12 >> 0x18);
    iVar16 = draw::FontPrintLargeCenter
                       (DAT_00724450 + 1,DAT_00724454 + 1,uVar12 & 0xff000000,lVar24,
                        0xffffffffffffffff);
    Hud_DrawTextBox(iVar16 + -0x20,iVar26 + -8,(iVar15 - (iVar16 + -0x20)) * 2,0x20,
                    lVar21 + (0x50 - lVar21 >> 0x3f & 0x50U - lVar21));
    draw::FontPrintLargeCenter(iVar15,iVar26,uVar12,lVar24,0xffffffffffffffff);
  }
  return *(undefined4 *)(param_1 + 0x58);
}



//==== 000d3610  ns=hud  size=0x6f8
// sig: undefined Draw_MobyHealthBarHud(void)
// callers(0): 
// callees(6): 000ca72c hud::DrawFlatOverlay; 000cbb98 hud::Hud_DrawTexQuad; 000cbe60 hud::Hud_DrawTexHeaderQuad; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt; 005027bc fastfunc::FastLerpColor
// strings: 007244bc: '?333?333' (raw) | 007244c0: '?333' (raw)

undefined4 hud::Draw_MobyHealthBarHud(int param_1)

{
  short sVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  IconTableEntries *pIVar12;
  longlong lVar13;
  int iVar14;
  ulonglong uVar15;
  longlong lVar16;
  ulonglong uVar17;
  int iVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  
  iVar18 = DAT_007244b4;
  uVar8 = *(undefined4 *)(param_1 + 0x58);
  lVar16 = 3;
  lVar11 = ((LZCOUNT(-Cutscene) << 0x3a) >> 0x3f & 8U) + 10;
  lVar13 = (longlong)((draw::g_ScreenHeight - (int)lVar11) + -0x20);
  if ((Level == Umbris) || (Level == Gemlik)) {
    lVar16 = 6;
  }
  uVar17 = lVar16 + ((LZCOUNT(0x12 - Level) << 0x3a) >> 0x3f & 7U - lVar16);
  if (*(char *)(param_1 + 0x70) != '\0') {
    lVar13 = lVar13 + ((LZCOUNT(0xd - Level) << 0x3a) >> 0x3f & lVar11 - lVar13);
    dVar19 = (double)fastfunc::FastIntToDouble(*(char *)(param_1 + 0x70));
    dVar21 = 1.0;
    dVar20 = (double)(float)(dVar19 * 0.125);
    dVar19 = dVar21;
    if ((dVar20 <= 1.0) && (dVar19 = dVar20, dVar20 < 0.0)) {
      dVar19 = 0.0;
    }
    dVar19 = (double)(float)(dVar19 * 128.0);
    uVar3 = fastfunc::FastDoubleToInt(dVar19);
    uVar4 = fastfunc::FastDoubleToInt(dVar19);
    iVar6 = 0;
    iVar18 = iVar18 - (int)((uVar17 & 0xffffffff) << 4);
    iVar7 = (int)uVar17;
    uVar15 = 0;
    iVar2 = (int)lVar13;
    if (0 < iVar7) {
      iVar14 = iVar18;
      do {
        uVar9 = 0;
        for (iVar10 = 0; sVar1 = *(short *)((int)&IconTableEntry->iconId + iVar10),
            sVar1 != 0x7562 && sVar1 != -1; iVar10 = iVar10 + 8) {
          uVar9 = uVar9 + 1;
        }
        iVar10 = (int)((uVar9 & 0x1fffffff) << 3);
        if (*(short *)((int)&IconTableEntry->iconId + iVar10) == -1) {
          lVar11 = 0;
        }
        else {
          lVar11 = 0;
          if (3 < *(ushort *)((int)&IconTableEntry->unknown + iVar10)) {
            lVar11 = (ulonglong)*(ushort *)((int)&IconTableEntry->variantsCnt + iVar10) + 3;
          }
        }
        Hud_DrawTexQuad(lVar11,iVar14,iVar2 + 6,0x20,0x12,uVar3);
        iVar6 = iVar6 + 1;
        iVar14 = iVar14 + 0x20;
      } while (iVar6 < iVar7);
    }
    iVar6 = 0;
    uVar5 = 0xffffffff800000ff;
    if (*(int *)(param_1 + 0x74) != 0) {
      dVar19 = (double)fastfunc::FastIntToDouble(*(undefined4 *)(param_1 + 8));
      dVar22 = (double)(float)((double)(longlong)*(int *)(param_1 + 0x74) / dVar19);
      dVar19 = (double)fastfunc::FastIntToDouble(uVar17);
      dVar19 = (double)(float)(dVar21 / dVar19);
      dVar20 = (double)(float)((double)(longlong)(iVar7 + -1) * dVar19);
      if (dVar22 <= dVar20) {
        if (dVar22 < dVar19) {
          dVar22 = (double)(float)((double)DAT_007244c0 * (double)(float)(dVar22 - dVar19) + dVar19)
          ;
        }
      }
      else {
        dVar22 = (double)(float)((double)DAT_007244bc * (double)(float)(dVar22 - dVar20) + dVar20);
      }
      iVar6 = fastfunc::FastDoubleToInt
                        ((double)(float)((double)(longlong)(int)((uVar17 & 0xffffffff) << 5) *
                                        dVar22));
      if (dVar22 <= 0.5) {
        uVar5 = fastfunc::FastLerpColor
                          ((double)(float)(dVar22 * 2.0),0xffffffff800000ff,0xffffffff8000ffff);
      }
      else {
        uVar5 = fastfunc::FastLerpColor
                          ((double)(float)((double)(float)(dVar22 * 2.0) - dVar21),
                           0xffffffff8000ffff,0xffffffff8000ff00);
      }
    }
    DrawFlatOverlay(iVar18,iVar2 + 8,iVar6 + iVar18,iVar2 + 0x1a,uVar5,0);
    iVar14 = 0;
    iVar6 = iVar18;
    if (0 < iVar7 + -1) {
      do {
        uVar17 = 0;
        for (iVar10 = 0; sVar1 = *(short *)((int)&IconTableEntry->iconId + iVar10),
            sVar1 != 0x7562 && sVar1 != -1; iVar10 = iVar10 + 8) {
          uVar17 = uVar17 + 1;
        }
        iVar10 = (int)((uVar17 & 0x1fffffff) << 3);
        if (*(short *)((int)&IconTableEntry->iconId + iVar10) == -1) {
          lVar11 = 0;
        }
        else {
          lVar11 = 0;
          if (1 < *(ushort *)((int)&IconTableEntry->unknown + iVar10)) {
            lVar11 = (ulonglong)*(ushort *)((int)&IconTableEntry->variantsCnt + iVar10) + 1;
          }
        }
        Hud_DrawTexHeaderQuad
                  (EffectTexHeaders + *(int *)(TexturePointerArray + (int)(lVar11 << 2)) * 0x24,
                   iVar6,lVar13,0x20,0x20,uVar4);
        iVar14 = iVar14 + 1;
        iVar6 = iVar6 + 0x20;
      } while (iVar14 < iVar7 + -1);
    }
    uVar17 = 0;
    for (iVar7 = 0; sVar1 = *(short *)((int)&IconTableEntry->iconId + iVar7),
        sVar1 != 0x7562 && sVar1 != -1; iVar7 = iVar7 + 8) {
      uVar17 = uVar17 + 1;
    }
    iVar7 = (int)((uVar17 & 0x1fffffff) << 3);
    if (*(short *)((int)&IconTableEntry->iconId + iVar7) == -1) {
      lVar11 = 0;
    }
    else {
      lVar11 = 0;
      if (2 < *(ushort *)((int)&IconTableEntry->unknown + iVar7)) {
        lVar11 = (ulonglong)*(ushort *)((int)&IconTableEntry->variantsCnt + iVar7) + 2;
      }
    }
    Hud_DrawTexHeaderQuad
              (EffectTexHeaders + *(int *)(TexturePointerArray + (int)(lVar11 << 2)) * 0x24,iVar6,
               lVar13,0x20,0x20,uVar4);
    uVar17 = 0;
    for (pIVar12 = IconTableEntry; pIVar12->iconId != 0x7562 && pIVar12->iconId != 0xffff;
        pIVar12 = pIVar12 + 1) {
      uVar17 = uVar17 + 1;
    }
    iVar7 = (int)((uVar17 & 0x1fffffff) << 3);
    if (*(short *)((int)&IconTableEntry->iconId + iVar7) == -1) {
      lVar11 = 0;
    }
    else {
      lVar11 = 0;
      if (4 < *(ushort *)((int)&IconTableEntry->unknown + iVar7)) {
        lVar11 = (ulonglong)*(ushort *)((int)&IconTableEntry->variantsCnt + iVar7) + 4;
      }
    }
    Hud_DrawTexHeaderQuad
              (EffectTexHeaders + *(int *)(TexturePointerArray + (int)(lVar11 << 2)) * 0x24,
               iVar18 + -0x28,iVar2 + -8,0x30,0x30,uVar3);
    uVar17 = 0;
    for (pIVar12 = IconTableEntry; pIVar12->iconId != 0x7562 && pIVar12->iconId != 0xffff;
        pIVar12 = pIVar12 + 1) {
      uVar17 = uVar17 + 1;
    }
    iVar7 = (int)((uVar17 & 0x1fffffff) << 3);
    if ((*(short *)((int)&IconTableEntry->iconId + iVar7) != -1) &&
       (*(short *)((int)&IconTableEntry->unknown + iVar7) != 0)) {
      uVar15 = (ulonglong)*(ushort *)((int)&IconTableEntry->variantsCnt + iVar7);
    }
    Hud_DrawTexHeaderQuad
              (EffectTexHeaders + *(int *)(TexturePointerArray + (int)(uVar15 << 2)) * 0x24,
               iVar18 + -0x28,iVar2 + -8,0x30,0x30,uVar3);
    uVar8 = *(undefined4 *)(param_1 + 0x58);
  }
  return uVar8;
}



//==== 000d3d10  ns=hud  size=0xd4
// sig: undefined MetalDetectorHud_Update(void)
// callers(0): 
// callees(0): 

void hud::MetalDetectorHud_Update(undefined8 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 in_r0;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  iVar2 = (int)param_1;
  if (g_MetalDetectorSpotIsClose == '\0') {
    *(undefined4 *)(iVar2 + 0x7c) = 0;
    *(undefined4 *)(iVar2 + 0x6c) = 1;
    if (*(char *)(iVar2 + 0x71) == '\0') {
      if (*(char *)(iVar2 + 0x70) == '\0') {
        *(undefined4 *)(iVar2 + 0x6c) = 0xfffffffa;
      }
      else {
        *(char *)(iVar2 + 0x70) = *(char *)(iVar2 + 0x70) + -1;
      }
    }
    else {
      *(char *)(iVar2 + 0x71) = *(char *)(iVar2 + 0x71) + -1;
    }
  }
  else {
    auVar3 = ZEXT416(0xffffffff);
    auVar3 = auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60;
    auVar4 = vectorShiftLeftIntegerWord(auVar3,auVar3);
    auVar3 = loadVectorLeftIndexed(in_r0,0xd3d08);
    auVar5 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar3 = auVar3 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar3 = vectorMultiplyAddFloatingPoint
                       (auVar5,auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60,auVar4);
    auVar3 = vectorConvertToSignedFixedPointWordSaturate(auVar3,0);
    auVar3 = auVar3 >> 0x60 & (undefined1  [16])0xffffffff;
    uVar1 = storeVectorElementWordIndexed
                      (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60,0x7c,param_1);
    *(undefined4 *)(iVar2 + 0x7cU & 0xfffffffc) = uVar1;
    if ((int)(uint)*(byte *)(iVar2 + 0x70) < DAT_00724390) {
      *(byte *)(iVar2 + 0x70) = *(byte *)(iVar2 + 0x70) + 1;
    }
    else if ((int)(uint)*(byte *)(iVar2 + 0x71) < DAT_00724390) {
      *(byte *)(iVar2 + 0x71) = *(byte *)(iVar2 + 0x71) + 1;
    }
  }
  return;
}



//==== 000d3e20  ns=hud  size=0x6c4
// sig: undefined Draw_MetalDetectorHud(void)
// callers(0): 
// callees(8): 0006fcfc draw::FontPrintLarge; 000cbb98 hud::Hud_DrawTexQuad; 000cbe60 hud::Hud_DrawTexHeaderQuad; 000cdeb8 hud::HudEntry_DrawIcon; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt; 005027bc fastfunc::FastLerpColor; 005cd2a8 libc::snprintf
// strings: 00652158: '!'

undefined4 hud::Draw_MetalDetectorHud(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar9;
  ulonglong uVar7;
  int iVar10;
  longlong lVar8;
  int iVar11;
  undefined4 uVar12;
  IconTableEntries *pIVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  char acStack_90 [32];
  
  iVar11 = *(int *)(param_1 + 0x50);
  iVar16 = (draw::g_ScreenHeight - (((uint)((LZCOUNT(-Cutscene) << 0x3a) >> 0x3f) & 8) + 10)) +
           -0x20;
  if ((g_heroType == '\x02') || (g_heroState == TURRET_PLANE_UI)) {
    uVar12 = *(undefined4 *)(param_1 + 0x58);
  }
  else if (*(char *)(param_1 + 0x70) == '\0') {
    uVar12 = *(undefined4 *)(param_1 + 0x58);
  }
  else {
    dVar17 = (double)fastfunc::FastIntToDouble();
    dVar18 = (double)fastfunc::FastIntToDouble(DAT_00724390);
    dVar20 = (double)(float)(dVar17 / dVar18);
    dVar17 = 1.0;
    dVar18 = dVar17;
    if ((dVar20 <= 1.0) && (dVar18 = dVar20, dVar20 < 0.0)) {
      dVar18 = 0.0;
    }
    dVar20 = (double)fastfunc::FastIntToDouble(*(undefined1 *)(param_1 + 0x71));
    dVar19 = (double)fastfunc::FastIntToDouble(DAT_00724390);
    dVar20 = (double)(float)(dVar20 / dVar19);
    if ((dVar20 <= dVar17) && (dVar17 = dVar20, dVar20 < 0.0)) {
      dVar17 = 0.0;
    }
    uVar5 = fastfunc::FastDoubleToInt((double)(float)(dVar17 * 128.0));
    uVar6 = fastfunc::FastDoubleToInt((double)(float)((double)(longlong)DAT_007244c4 * dVar18));
    iVar15 = DAT_007244cc + iVar11;
    iVar9 = fastfunc::FastDoubleToInt((double)(float)((double)(longlong)DAT_007244c8 * dVar18));
    uVar7 = 0;
    iVar14 = 0;
    for (pIVar13 = IconTableEntry; pIVar13->iconId != 0x7580 && pIVar13->iconId != 0xffff;
        pIVar13 = pIVar13 + 1) {
      uVar7 = uVar7 + 1;
    }
    iVar10 = (int)((uVar7 & 0x1fffffff) << 3);
    if (*(short *)((int)&IconTableEntry->iconId + iVar10) == -1) {
      lVar8 = 0;
    }
    else {
      lVar8 = 0;
      if (1 < *(ushort *)((int)&IconTableEntry->unknown + iVar10)) {
        lVar8 = (ulonglong)*(ushort *)((int)&IconTableEntry->variantsCnt + iVar10) + 1;
      }
    }
    Hud_DrawTexQuad(lVar8,iVar15 + 0x10,iVar16,0x20,0x20,uVar6);
    uVar7 = 0;
    for (pIVar13 = IconTableEntry; pIVar13->iconId != 0x7580 && pIVar13->iconId != 0xffff;
        pIVar13 = pIVar13 + 1) {
      uVar7 = uVar7 + 1;
    }
    iVar10 = (int)((uVar7 & 0x1fffffff) << 3);
    if (*(short *)((int)&IconTableEntry->iconId + iVar10) == -1) {
      uVar7 = 0;
    }
    else {
      uVar7 = 0;
      if (*(short *)((int)&IconTableEntry->unknown + iVar10) != 0) {
        uVar7 = (ulonglong)*(ushort *)((int)&IconTableEntry->variantsCnt + iVar10);
      }
    }
    iVar15 = iVar15 - iVar9;
    Hud_DrawTexHeaderQuad
              (EffectTexHeaders + *(int *)(TexturePointerArray + (int)(uVar7 << 2)) * 0x24,iVar15,
               iVar16,iVar9 + 0x10,0x20,uVar6);
    uVar7 = 0;
    for (pIVar13 = IconTableEntry; pIVar13->iconId != 0x7580 && pIVar13->iconId != 0xffff;
        pIVar13 = pIVar13 + 1) {
      uVar7 = uVar7 + 1;
    }
    iVar9 = (int)((uVar7 & 0x1fffffff) << 3);
    if (*(short *)((int)&IconTableEntry->iconId + iVar9) == -1) {
      lVar8 = 0;
    }
    else {
      lVar8 = 0;
      if (1 < *(ushort *)((int)&IconTableEntry->unknown + iVar9)) {
        lVar8 = (ulonglong)*(ushort *)((int)&IconTableEntry->variantsCnt + iVar9) + 1;
      }
    }
    Hud_DrawTexHeaderQuad
              (EffectTexHeaders + *(int *)(TexturePointerArray + (int)(lVar8 << 2)) * 0x24,
               iVar15 + -0x20,iVar16,0x20,0x20,uVar6);
    uVar7 = 0;
    iVar9 = worldUpdateTime % 0x3c >> 1;
    for (pIVar13 = IconTableEntry; pIVar13->iconId != 0x754f && pIVar13->iconId != 0xffff;
        pIVar13 = pIVar13 + 1) {
      uVar7 = uVar7 + 1;
    }
    iVar15 = (int)((uVar7 & 0x1fffffff) << 3);
    if ((*(short *)((int)&IconTableEntry->iconId + iVar15) != -1) &&
       (iVar9 < (int)(uint)*(ushort *)((int)&IconTableEntry->unknown + iVar15))) {
      iVar14 = (uint)*(ushort *)((int)&IconTableEntry->variantsCnt + iVar15) + iVar9;
    }
    HudEntry_DrawIcon(param_1,iVar14,iVar11 + -0x20,iVar16,0,uVar5);
    libc::snprintf(acStack_90,"!");
    iVar11 = DAT_007244d0 + iVar11;
    iVar16 = DAT_007244d4 + iVar16;
    iVar9 = (int)(animationSpeed * ((float)(longlong)DAT_007244e0 + 0.5));
    dVar18 = (double)fastfunc::FastIntToDouble(iVar9);
    fVar1 = (float)((double)(longlong)(worldUpdateTime - (worldUpdateTime / iVar9) * iVar9) / dVar18
                   ) * 6.28318 - 3.14159;
    fVar2 = 3.1415925 - fVar1;
    if (fVar1 - (3.1415925 - fVar1) < 0.0) {
      fVar2 = fVar1;
    }
    fVar3 = -3.1415925 - fVar1;
    if ((-3.1415925 - fVar1) - fVar2 < 0.0) {
      fVar3 = fVar2;
    }
    fVar1 = fVar3 * fVar3;
    fVar2 = fVar1 * fVar1 * fVar3;
    fVar4 = fVar1 * fVar2;
    dVar18 = (double)((fVar1 * fVar4 * 2.601887e-06 +
                      fVar4 * -0.0001980741 +
                      fVar2 * 0.0083330255 + fVar1 * fVar3 * -0.16666657 + fVar3) * 4.0 - 3.0);
    if (dVar18 - 0.0 < 0.0) {
      dVar18 = 0.0;
    }
    dVar17 = (double)(float)(dVar17 * dVar18);
    uVar5 = fastfunc::FastLerpColor(dVar17,0,0xffffffff80000000);
    uVar6 = fastfunc::FastLerpColor(dVar17,DAT_007244d8,DAT_007244dc);
    draw::FontPrintLarge(iVar11 + 1,iVar16 + 1,uVar5,acStack_90,0xffffffffffffffff);
    draw::FontPrintLarge(iVar11,iVar16,uVar6,acStack_90,0xffffffffffffffff);
    uVar12 = *(undefined4 *)(param_1 + 0x58);
  }
  return uVar12;
}



//==== 000d44e4  ns=hud  size=0x344
// sig: undefined Draw_GiantClankHealthHUD(void)
// callers(0): 
// callees(3): 000c8c08 hud::HudEntry_GetSlideOffset; 000cbe60 hud::Hud_DrawTexHeaderQuad; 000d24ec hud::Hud_DrawEffectTexQuad

undefined4 hud::Draw_GiantClankHealthHUD(int param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  int tex;
  IconTableEntries *pIVar4;
  longlong lVar5;
  int local_30;
  int local_2c;
  
  local_30 = *(int *)(param_1 + 0x50);
  local_2c = *(int *)(param_1 + 0x54);
  uVar1 = *(uint *)(param_1 + 0x60);
  *(undefined4 *)(param_1 + 0x58) = 0x100;
  *(undefined4 *)(param_1 + 0x5c) = 0x40;
  if (((uVar1 & 1) == 0) && ((uVar1 & 2) == 0)) {
    local_2c = local_2c + -0x20;
  }
  if ((uVar1 & 4) == 0) {
    local_30 = local_30 - (((uint)((LZCOUNT(-(uVar1 & 8)) << 0x3a) >> 0x3f) & 0xffffff80) + 0x100);
  }
  HudEntry_GetSlideOffset(param_1,&local_30,&local_2c,*(undefined4 *)(param_1 + 0x6c),0);
  uVar3 = 0;
  lVar5 = 0;
  for (pIVar4 = IconTableEntry; pIVar4->iconId != 0x7558 && pIVar4->iconId != 0xffff;
      pIVar4 = pIVar4 + 1) {
    uVar3 = uVar3 + 1;
  }
  iVar2 = (int)((uVar3 & 0x1fffffff) << 3);
  if (*(short *)((int)&IconTableEntry->iconId + iVar2) == -1) {
    tex = 0;
  }
  else {
    tex = 0;
    if (1 < *(ushort *)((int)&IconTableEntry->unknown + iVar2)) {
      tex = *(ushort *)((int)&IconTableEntry->variantsCnt + iVar2) + 1;
    }
  }
  Hud_DrawEffectTexQuad
            (tex,local_30,local_2c,(*(int *)(param_1 + 0x74) * 0xdd) / *(int *)(param_1 + 8) + 0x1b,
             0x40,0x80);
  uVar3 = 0;
  for (pIVar4 = IconTableEntry; pIVar4->iconId != 0x7558 && pIVar4->iconId != 0xffff;
      pIVar4 = pIVar4 + 1) {
    uVar3 = uVar3 + 1;
  }
  iVar2 = (int)((uVar3 & 0x1fffffff) << 3);
  if (*(short *)((int)&IconTableEntry->iconId + iVar2) == -1) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0;
    if (*(short *)((int)&IconTableEntry->unknown + iVar2) != 0) {
      uVar3 = (ulonglong)*(ushort *)((int)&IconTableEntry->variantsCnt + iVar2);
    }
  }
  Hud_DrawTexHeaderQuad
            (EffectTexHeaders + *(int *)(TexturePointerArray + (int)(uVar3 << 2)) * 0x24,local_30,
             local_2c,0x100,0x40,0x80);
  uVar3 = 0;
  for (pIVar4 = IconTableEntry; pIVar4->iconId != 0x7558 && pIVar4->iconId != 0xffff;
      pIVar4 = pIVar4 + 1) {
    uVar3 = uVar3 + 1;
  }
  iVar2 = (int)((uVar3 & 0x1fffffff) << 3);
  if ((*(short *)((int)&IconTableEntry->iconId + iVar2) != -1) &&
     (2 < *(ushort *)((int)&IconTableEntry->unknown + iVar2))) {
    lVar5 = (ulonglong)*(ushort *)((int)&IconTableEntry->variantsCnt + iVar2) + 2;
  }
  Hud_DrawTexHeaderQuad
            (EffectTexHeaders + *(int *)(TexturePointerArray + (int)(lVar5 << 2)) * 0x24,local_30,
             local_2c,0x20,0x20,
             ((LZCOUNT(-(uint)DAT_0096b316) << 0x3a) >> 0x3f & 0xffffffffffffff80U) + 0x80);
  return *(undefined4 *)(param_1 + 0x58);
}



//==== 000d4838  ns=hud  size=0x5c8
// sig: undefined Draw_AmmoCounter(void)
// callers(0): 
// callees(8): 00070130 draw::FontPrintMediumRight; 000cbb98 hud::Hud_DrawTexQuad; 000cbe60 hud::Hud_DrawTexHeaderQuad; 000cdeb8 hud::HudEntry_DrawIcon; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt; 005027bc fastfunc::FastLerpColor; 005cd2a8 libc::snprintf
// strings: 00652110: '%d/%d'

uint hud::Draw_AmmoCounter(uint *param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar7;
  ulonglong uVar5;
  int iVar8;
  longlong lVar6;
  uint uVar9;
  IconTableEntries *pIVar10;
  longlong lVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  char acStack_a0 [40];
  
  uVar1 = param_1[0x14];
  uVar9 = param_1[0x16];
  lVar11 = ((LZCOUNT(-Cutscene) << 0x3a) >> 0x3f & 8U) + 10;
  if (*(char *)(param_1 + 0x1c) != '\0') {
    dVar12 = (double)fastfunc::FastIntToDouble(*(char *)(param_1 + 0x1c),uVar9);
    dVar13 = (double)fastfunc::FastIntToDouble(DAT_007244e4);
    dVar15 = (double)(float)(dVar12 / dVar13);
    dVar12 = 1.0;
    dVar13 = dVar12;
    if ((dVar15 <= 1.0) && (dVar13 = dVar15, dVar15 < 0.0)) {
      dVar13 = 0.0;
    }
    dVar15 = (double)fastfunc::FastIntToDouble(*(undefined1 *)((int)param_1 + 0x71));
    dVar14 = (double)fastfunc::FastIntToDouble(DAT_007244e8);
    dVar15 = (double)(float)(dVar15 / dVar14);
    if ((dVar15 <= dVar12) && (dVar12 = dVar15, dVar15 < 0.0)) {
      dVar12 = 0.0;
    }
    uVar3 = fastfunc::FastDoubleToInt((double)(float)(dVar13 * 128.0));
    uVar4 = fastfunc::FastDoubleToInt((double)((float)(longlong)(int)uVar3 * 0.7));
    iVar2 = DAT_007244f0;
    if ((int)param_1[2] < 100) {
      iVar2 = DAT_007244ec;
    }
    iVar7 = fastfunc::FastDoubleToInt((double)(float)((double)(longlong)iVar2 * dVar13));
    uVar5 = 0;
    uVar9 = 0;
    for (pIVar10 = IconTableEntry; pIVar10->iconId != 0x7580 && pIVar10->iconId != 0xffff;
        pIVar10 = pIVar10 + 1) {
      uVar5 = uVar5 + 1;
    }
    iVar8 = (int)((uVar5 & 0x1fffffff) << 3);
    if (*(short *)((int)&IconTableEntry->iconId + iVar8) == -1) {
      lVar6 = 0;
    }
    else {
      lVar6 = 0;
      if (1 < *(ushort *)((int)&IconTableEntry->unknown + iVar8)) {
        lVar6 = (ulonglong)*(ushort *)((int)&IconTableEntry->variantsCnt + iVar8) + 1;
      }
    }
    Hud_DrawTexHeaderQuad
              (EffectTexHeaders + *(int *)(TexturePointerArray + (int)(lVar6 << 2)) * 0x24,
               uVar1 - 0x1c,lVar11,0x20,0x20,uVar4);
    uVar5 = 0;
    for (pIVar10 = IconTableEntry; pIVar10->iconId != 0x7580 && pIVar10->iconId != 0xffff;
        pIVar10 = pIVar10 + 1) {
      uVar5 = uVar5 + 1;
    }
    iVar8 = (int)((uVar5 & 0x1fffffff) << 3);
    if (*(short *)((int)&IconTableEntry->iconId + iVar8) == -1) {
      uVar5 = 0;
    }
    else {
      uVar5 = 0;
      if (*(short *)((int)&IconTableEntry->unknown + iVar8) != 0) {
        uVar5 = (ulonglong)*(ushort *)((int)&IconTableEntry->variantsCnt + iVar8);
      }
    }
    Hud_DrawTexHeaderQuad
              (EffectTexHeaders + *(int *)(TexturePointerArray + (int)(uVar5 << 2)) * 0x24,uVar1 + 4
               ,lVar11,uVar1 + iVar7,0x20,uVar4);
    uVar5 = 0;
    for (pIVar10 = IconTableEntry; pIVar10->iconId != 0x7580 && pIVar10->iconId != 0xffff;
        pIVar10 = pIVar10 + 1) {
      uVar5 = uVar5 + 1;
    }
    iVar8 = (int)((uVar5 & 0x1fffffff) << 3);
    if (*(short *)((int)&IconTableEntry->iconId + iVar8) == -1) {
      lVar6 = 0;
    }
    else {
      lVar6 = 0;
      if (1 < *(ushort *)((int)&IconTableEntry->unknown + iVar8)) {
        lVar6 = (ulonglong)*(ushort *)((int)&IconTableEntry->variantsCnt + iVar8) + 1;
      }
    }
    Hud_DrawTexQuad(lVar6,uVar1 + iVar7 + uVar1 + 4,lVar11,0x20,0x20,uVar4);
    uVar5 = 0;
    pIVar10 = IconTableEntry;
    while ((uint)pIVar10->iconId != *param_1 && pIVar10->iconId != 0xffff) {
      pIVar10 = pIVar10 + 1;
      uVar5 = uVar5 + 1;
    }
    iVar7 = (int)((uVar5 & 0x1fffffff) << 3);
    if ((*(short *)((int)&IconTableEntry->iconId + iVar7) != -1) &&
       (3 < *(ushort *)((int)&IconTableEntry->unknown + iVar7))) {
      uVar9 = *(ushort *)((int)&IconTableEntry->variantsCnt + iVar7) + 3;
    }
    param_1[0x11] = uVar9;
    HudEntry_DrawIcon(param_1,uVar9,uVar1,lVar11,0,uVar3);
    uVar9 = param_1[0x1d];
    libc::snprintf(acStack_a0,"%d/%d",uVar9,param_1[2]);
    if (uVar9 == 0) {
      uVar3 = fastfunc::FastLerpColor(dVar12,DAT_007244fc,DAT_00724500);
    }
    else {
      uVar3 = fastfunc::FastLerpColor(dVar12,PTR_DAT_007244f4,DAT_007244f8);
    }
    uVar4 = fastfunc::FastLerpColor(dVar12,0,0xffffffff80000000);
    draw::FontPrintMediumRight
              (DAT_00724504 + uVar1 + iVar2 + 1,DAT_00724508 + (int)lVar11 + 1,uVar4,acStack_a0,
               0xffffffffffffffff);
    draw::FontPrintMediumRight
              (DAT_00724504 + uVar1 + iVar2,DAT_00724508 + (int)lVar11,uVar3,acStack_a0,
               0xffffffffffffffff);
    uVar9 = param_1[0x16];
  }
  return uVar9;
}



//==== 000d4e08  ns=hud  size=0xd4
// sig: undefined MobyCounterHud_Init(void)
// callers(0): 
// callees(0): 

void hud::MobyCounterHud_Init(int param_1)

{
  char cVar1;
  char cVar2;
  
  if (*(int *)(param_1 + 0x7c) < (int)(animationSpeed * 5.5)) {
    cVar1 = *(char *)(param_1 + 0x71);
    cVar2 = *(char *)(param_1 + 0x70);
    if ((cVar1 != '\0') || (cVar2 != '\0')) {
      *(undefined4 *)(param_1 + 0x6c) = 1;
    }
    if (cVar1 == '\0') {
      if (cVar2 != '\0') {
        *(char *)(param_1 + 0x70) = cVar2 + -1;
      }
    }
    else {
      *(char *)(param_1 + 0x71) = cVar1 + -1;
    }
  }
  else if ((int)(uint)*(byte *)(param_1 + 0x70) < (int)(animationSpeed * 8.5)) {
    *(byte *)(param_1 + 0x70) = *(byte *)(param_1 + 0x70) + 1;
  }
  else if ((int)(uint)*(byte *)(param_1 + 0x71) < (int)(animationSpeed * 8.5)) {
    *(byte *)(param_1 + 0x71) = *(byte *)(param_1 + 0x71) + 1;
  }
  *(undefined4 *)(param_1 + 0x74) = **(undefined4 **)(param_1 + 0xc);
  return;
}



//==== 000d4ef0  ns=hud  size=0x7e4
// sig: undefined Draw_MobyCounterHud(void)
// callers(0): 
// callees(8): 00070130 draw::FontPrintMediumRight; 000cbb98 hud::Hud_DrawTexQuad; 000cbe60 hud::Hud_DrawTexHeaderQuad; 000cdeb8 hud::HudEntry_DrawIcon; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt; 005027bc fastfunc::FastLerpColor; 005cd2a8 libc::snprintf
// strings: 000d4ee8: '?333`'

undefined4 hud::Draw_MobyCounterHud(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar7;
  undefined8 uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined4 uVar8;
  IconTableEntries *pIVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  char acStack_a0 [40];
  
  if (*(char *)(param_1 + 0x70) == '\0') {
    uVar8 = *(undefined4 *)(param_1 + 0x58);
  }
  else {
    iVar12 = *(int *)(param_1 + 0x58);
    bVar1 = 0x100 < (int)(*(int *)(param_1 + 0x50) +
                         ((uint)((LZCOUNT(-(*(uint *)(param_1 + 0x60) & 4)) << 0x3a) >> 0x3f) &
                         -(iVar12 + ((uint)((LZCOUNT(-(*(uint *)(param_1 + 0x60) & 8)) << 0x3a) >>
                                           0x3f) & (iVar12 >> 1) - iVar12))));
    iVar12 = DAT_0072450c;
    if (bVar1) {
      iVar12 = DAT_00724510;
    }
    iVar2 = -(((uint)((LZCOUNT(-Cutscene) << 0x3a) >> 0x3f) & 8) + 10);
    iVar13 = iVar2 + 0x180;
    dVar14 = (double)fastfunc::FastIntToDouble();
    dVar15 = (double)fastfunc::FastIntToDouble(DAT_007244e4);
    dVar17 = (double)(float)(dVar14 / dVar15);
    dVar14 = 1.0;
    dVar15 = dVar14;
    if ((dVar17 <= 1.0) && (dVar15 = dVar17, dVar17 < 0.0)) {
      dVar15 = 0.0;
    }
    dVar17 = (double)fastfunc::FastIntToDouble(*(undefined1 *)(param_1 + 0x71));
    dVar16 = (double)fastfunc::FastIntToDouble(DAT_007244e8);
    dVar17 = (double)(float)(dVar17 / dVar16);
    if ((dVar17 <= dVar14) && (dVar14 = dVar17, dVar17 < 0.0)) {
      dVar14 = 0.0;
    }
    libc::snprintf(acStack_a0,"%d",*(undefined4 *)(param_1 + 0x74));
    iVar7 = fastfunc::FastDoubleToInt((double)(float)(dVar15 * 128.0));
    uVar3 = fastfunc::FastDoubleToInt((double)((float)(longlong)iVar7 * 0.7));
    iVar7 = DAT_00724520;
    if (9 < *(int *)(param_1 + 8)) {
      iVar7 = DAT_00724524;
    }
    iVar11 = iVar12 + 4;
    uVar4 = fastfunc::FastDoubleToInt((double)(float)((double)(longlong)iVar7 * dVar15));
    if (bVar1) {
      uVar5 = 0;
      lVar10 = 0;
      for (pIVar9 = IconTableEntry; pIVar9->iconId != 0x7580 && pIVar9->iconId != 0xffff;
          pIVar9 = pIVar9 + 1) {
        uVar5 = uVar5 + 1;
      }
      iVar7 = (int)((uVar5 & 0x1fffffff) << 3);
      if (*(short *)((int)&IconTableEntry->iconId + iVar7) == -1) {
        lVar6 = 0;
      }
      else {
        lVar6 = 0;
        if (1 < *(ushort *)((int)&IconTableEntry->unknown + iVar7)) {
          lVar6 = (ulonglong)*(ushort *)((int)&IconTableEntry->variantsCnt + iVar7) + 1;
        }
      }
      Hud_DrawTexQuad(lVar6,iVar11,iVar13,0x20,0x20,uVar3);
      uVar5 = 0;
      for (pIVar9 = IconTableEntry; pIVar9->iconId != 0x7580 && pIVar9->iconId != 0xffff;
          pIVar9 = pIVar9 + 1) {
        uVar5 = uVar5 + 1;
      }
      iVar7 = (int)((uVar5 & 0x1fffffff) << 3);
      if (*(short *)((int)&IconTableEntry->iconId + iVar7) == -1) {
        uVar5 = 0;
      }
      else {
        uVar5 = 0;
        if (*(short *)((int)&IconTableEntry->unknown + iVar7) != 0) {
          uVar5 = (ulonglong)*(ushort *)((int)&IconTableEntry->variantsCnt + iVar7);
        }
      }
      iVar11 = iVar11 - (int)uVar4;
      Hud_DrawTexHeaderQuad
                (EffectTexHeaders + *(int *)(TexturePointerArray + (int)(uVar5 << 2)) * 0x24,iVar11,
                 iVar13,uVar4,0x20,uVar3);
      uVar5 = 0;
      for (pIVar9 = IconTableEntry; pIVar9->iconId != 0x7580 && pIVar9->iconId != 0xffff;
          pIVar9 = pIVar9 + 1) {
        uVar5 = uVar5 + 1;
      }
      iVar7 = (int)((uVar5 & 0x1fffffff) << 3);
      if ((*(short *)((int)&IconTableEntry->iconId + iVar7) != -1) &&
         (1 < *(ushort *)((int)&IconTableEntry->unknown + iVar7))) {
        lVar10 = (ulonglong)*(ushort *)((int)&IconTableEntry->variantsCnt + iVar7) + 1;
      }
      Hud_DrawTexHeaderQuad
                (EffectTexHeaders + *(int *)(TexturePointerArray + (int)(lVar10 << 2)) * 0x24,
                 iVar11 + -0x20,iVar13,0x20,0x20,uVar3);
    }
    else {
      uVar5 = 0;
      lVar10 = 0;
      for (pIVar9 = IconTableEntry; pIVar9->iconId != 0x7580 && pIVar9->iconId != 0xffff;
          pIVar9 = pIVar9 + 1) {
        uVar5 = uVar5 + 1;
      }
      iVar7 = (int)((uVar5 & 0x1fffffff) << 3);
      if (*(short *)((int)&IconTableEntry->iconId + iVar7) == -1) {
        lVar6 = 0;
      }
      else {
        lVar6 = 0;
        if (1 < *(ushort *)((int)&IconTableEntry->unknown + iVar7)) {
          lVar6 = (ulonglong)*(ushort *)((int)&IconTableEntry->variantsCnt + iVar7) + 1;
        }
      }
      Hud_DrawTexHeaderQuad
                (EffectTexHeaders + *(int *)(TexturePointerArray + (int)(lVar6 << 2)) * 0x24,
                 iVar12 + -0x1c,iVar13,0x20,0x20,uVar3);
      uVar5 = 0;
      for (pIVar9 = IconTableEntry; pIVar9->iconId != 0x7580 && pIVar9->iconId != 0xffff;
          pIVar9 = pIVar9 + 1) {
        uVar5 = uVar5 + 1;
      }
      iVar7 = (int)((uVar5 & 0x1fffffff) << 3);
      if (*(short *)((int)&IconTableEntry->iconId + iVar7) == -1) {
        uVar5 = 0;
      }
      else {
        uVar5 = 0;
        if (*(short *)((int)&IconTableEntry->unknown + iVar7) != 0) {
          uVar5 = (ulonglong)*(ushort *)((int)&IconTableEntry->variantsCnt + iVar7);
        }
      }
      Hud_DrawTexHeaderQuad
                (EffectTexHeaders + *(int *)(TexturePointerArray + (int)(uVar5 << 2)) * 0x24,iVar11,
                 iVar13,uVar4,0x20,uVar3);
      uVar5 = 0;
      for (pIVar9 = IconTableEntry; pIVar9->iconId != 0x7580 && pIVar9->iconId != 0xffff;
          pIVar9 = pIVar9 + 1) {
        uVar5 = uVar5 + 1;
      }
      iVar7 = (int)((uVar5 & 0x1fffffff) << 3);
      if ((*(short *)((int)&IconTableEntry->iconId + iVar7) != -1) &&
         (1 < *(ushort *)((int)&IconTableEntry->unknown + iVar7))) {
        lVar10 = (ulonglong)*(ushort *)((int)&IconTableEntry->variantsCnt + iVar7) + 1;
      }
      Hud_DrawTexQuad(lVar10,(int)uVar4 + iVar11,iVar13,0x20,0x20,uVar3);
    }
    if (bVar1) {
      HudEntry_DrawIcon(param_1,*(undefined4 *)(param_1 + 0x44),iVar12 + -0x16,iVar13,0,0x80);
    }
    else {
      HudEntry_DrawIcon(param_1,*(undefined4 *)(param_1 + 0x44),iVar12,iVar13,0,0x80);
    }
    uVar3 = fastfunc::FastLerpColor(dVar14,PTR_DAT_00724518,DAT_0072451c);
    uVar4 = fastfunc::FastLerpColor(dVar14,0,0xffffffff80000000);
    if (bVar1) {
      draw::FontPrintMediumRight(iVar12 + -0x19,iVar2 + 0x189,uVar4,acStack_a0,0xffffffffffffffff);
      draw::FontPrintMediumRight(iVar12 + -0x1a,iVar2 + 0x188,uVar3,acStack_a0,0xffffffffffffffff);
    }
    else {
      draw::FontPrintMediumRight(iVar12 + 0x43,iVar2 + 0x189,uVar4,acStack_a0,0xffffffffffffffff);
      draw::FontPrintMediumRight(iVar12 + 0x42,iVar2 + 0x188,uVar3,acStack_a0,0xffffffffffffffff);
    }
    uVar8 = *(undefined4 *)(param_1 + 0x58);
  }
  return uVar8;
}



//==== 000d56d8  ns=hud  size=0x3c8
// sig: undefined UpdateAllGameplayHUD(void)
// callers(2): 00166fb0 update::UpdateGameplay; 0016da88 vendor::Vendor_PreUpdate
// callees(2): 000c833c hud::HudEntry_Reset; 000c8444 hud::RegisterHUDCallback

int hud::UpdateAllGameplayHUD(int param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  HudElement *pHVar9;
  int iVar10;
  double dVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined4 in_vr31_32_0;
  undefined4 in_vr31_32_1;
  undefined4 in_vr31_32_2;
  undefined4 in_vr31_32_3;
  undefined1 auVar14 [16];
  
  lVar2 = ZEXT48(&stack0x00000000) - 0x50;
  puVar3 = (undefined4 *)lVar2;
  puVar3[3] = in_vr31_32_3;
  puVar3[2] = in_vr31_32_2;
  puVar3[1] = in_vr31_32_1;
  *puVar3 = in_vr31_32_0;
  if (g_HudHideCounter == 0) {
    uVar4 = (ulonglong)g_CurrentWeapon +
            ((LZCOUNT(-(uint)(ushort)(&DAT_00737d38)[g_CurrentWeapon * 0xc]) << 0x3a) >> 0x3f &
            -(ulonglong)g_CurrentWeapon);
    iVar6 = (int)uVar4;
    if ((g_heroType == '\0') && (iVar6 != 0)) {
      DAT_0072452c = iVar6;
      g_HudAmmoEntryId =
           RegisterHUDCallback(0x10,iVar6 + 60000,&PTR_AmmoHud_Init_00705808,
                               &PTR_AmmoHud_Update_007058d8,&PTR_Draw_AmmoCounter_00705888,
                               (int *)((int)&currentAmmoArray.field0_0x0 +
                                      (int)((uVar4 & 0xffffffff) << 2)),
                               (uint)(ushort)(&DAT_00737d3e)[iVar6 * 0xc]);
    }
    else if (g_heroType == '\x02') {
      if (g_HudAmmoEntryId != -1) {
        lVar5 = 0;
        piVar8 = (int *)&HudEntries[0].field_0x64;
        do {
          if (*piVar8 == g_HudAmmoEntryId) break;
          lVar5 = lVar5 + 1;
          piVar8 = piVar8 + 0x24;
        } while ((int)lVar5 < 0xd);
        if ((int)lVar5 < 0xd) {
          iVar6 = (int)(lVar5 << 7) + (int)(lVar5 << 4);
          *(undefined4 *)((int)&HudEntries[0].regValue + iVar6) = 0;
          if (*(int *)((int)&HudEntries[0].locked + iVar6) == 0) {
            *(undefined4 *)((int)&HudEntries[0].value + iVar6) = 0;
          }
        }
        g_HudAmmoEntryId = -1;
      }
      iVar6 = RegisterHUDCallback(0x10,0xffff,&PTR_HudEntry_InitCounter_007056a0,
                                  &PTR_HudEntry_UpdateCounter_007056c8,
                                  &PTR_Draw_GiantClankHealthHUD_00705880,&g_GiantClankHealth,200);
      DAT_0096b314 = (undefined2)iVar6;
    }
    else if (g_HudAmmoEntryId != -1) {
      lVar5 = 0;
      piVar8 = (int *)&HudEntries[0].field_0x64;
      do {
        if (*piVar8 == g_HudAmmoEntryId) break;
        lVar5 = lVar5 + 1;
        piVar8 = piVar8 + 0x24;
      } while ((int)lVar5 < 0xd);
      if ((int)lVar5 < 0xd) {
        iVar6 = (int)(lVar5 << 7) + (int)(lVar5 << 4);
        *(undefined4 *)((int)&HudEntries[0].regValue + iVar6) = 0;
        if (*(int *)((int)&HudEntries[0].locked + iVar6) == 0) {
          *(undefined4 *)((int)&HudEntries[0].value + iVar6) = 0;
        }
      }
      g_HudAmmoEntryId = -1;
    }
  }
  iVar6 = 0;
  pHVar9 = HudEntries;
  iVar10 = 0;
  auVar14 = loadVectorLeftIndexed(lVar2,0xd56d4);
  dVar11 = 10.5;
  lVar2 = 0x723b8c;
  auVar14 = auVar14 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar14 = auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60;
  do {
    if ((pHVar9->value & 0x10U) != 0 || DAT_00a1bfc4 != 0) {
      auVar12 = ZEXT416(0xffffffff);
      auVar12 = auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60;
      auVar12 = vectorShiftLeftIntegerWord(auVar12,auVar12);
      auVar13 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar12 = vectorMultiplyAddFloatingPoint(auVar13,auVar14,auVar12);
      auVar12 = vectorConvertToSignedFixedPointWordSaturate(auVar12,0);
      if (pHVar9->showTimer < (int)((double)animationSpeed * dVar11)) {
        auVar12 = auVar12 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar1 = storeVectorElementWordIndexed
                          (auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60,0,lVar2);
        *(undefined4 *)lVar2 = uVar1;
      }
    }
    iVar7 = pHVar9->showTimer;
    if (0 < iVar7) {
      iVar7 = iVar7 + -1;
      pHVar9->showTimer = iVar7;
    }
    if (iVar7 < 1) {
      iVar7 = pHVar9->id;
      if (-6 < iVar7) {
        iVar7 = iVar7 + -1;
        pHVar9->id = iVar7;
      }
    }
    else {
      iVar7 = pHVar9->id;
      iVar10 = iVar10 + 1;
      if (iVar7 < 0x1e) {
        iVar7 = iVar7 + 1;
        pHVar9->id = iVar7;
      }
    }
    if (iVar7 == -6 && pHVar9->locked != 0) {
      HudEntry_Reset(pHVar9);
    }
    if (param_1 != 0) {
      if ((undefined4 *)pHVar9->updateCb != (undefined4 *)0x0) {
                    /* WARNING: Load size is inaccurate */
        (**pHVar9->updateCb)(pHVar9);
      }
    }
    iVar6 = iVar6 + 1;
    lVar2 = lVar2 + 0x90;
    pHVar9 = pHVar9 + 1;
  } while (iVar6 < 0xd);
  return iVar10;
}



//==== 000d5aa0  ns=hud  size=0x98
// sig: undefined Hud_ClearAmmoEntry(void)
// callers(1): 000b72b0 hero::TransitionMovement
// callees(0): 

void hud::Hud_ClearAmmoEntry(void)

{
  longlong lVar1;
  int iVar2;
  int *piVar3;
  
  if (g_HudAmmoEntryId != -1) {
    lVar1 = 0;
    piVar3 = (int *)&HudEntries[0].field_0x64;
    do {
      if (*piVar3 == g_HudAmmoEntryId) break;
      lVar1 = lVar1 + 1;
      piVar3 = piVar3 + 0x24;
    } while ((int)lVar1 < 0xd);
    if ((int)lVar1 < 0xd) {
      iVar2 = (int)(lVar1 << 7) + (int)(lVar1 << 4);
      *(undefined4 *)((int)&HudEntries[0].regValue + iVar2) = 0;
      if (*(int *)((int)&HudEntries[0].locked + iVar2) == 0) {
        *(undefined4 *)((int)&HudEntries[0].value + iVar2) = 0;
      }
    }
    g_HudAmmoEntryId = -1;
  }
  DAT_0072452c = 0;
  g_HudHideCounter = g_HudHideCounter + 1;
  return;
}



//==== 000d5b38  ns=hud  size=0xc0
// sig: undefined Hud_ResetAllEntriesHidden(void)
// callers(2): 0016a8f0 vendor::Spawn_Moby11_Vendor; 0016b650 vendor::StartGadgetPickupCutscene
// callees(2): 000c833c hud::HudEntry_Reset; 000c8444 hud::RegisterHUDCallback

void hud::Hud_ResetAllEntriesHidden(void)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    RegisterHUDCallback(uVar1,0xffff,(void *)0x0,(void *)0x0,(void *)0x0,(int *)0x0,1);
    HudEntries[uVar1].showTimer = 0;
    HudEntries[uVar1].id = -6;
    HudEntry_Reset(HudEntries + uVar1);
    uVar1 = uVar1 + 1;
  } while ((int)uVar1 < 0xd);
  g_HudHideCounter = 1;
  g_HudAmmoEntryId = -1;
  DAT_0072452c = 0;
  return;
}



//==== 000d5bf8  ns=hud  size=0x20
// sig: undefined Hud_DecHideCounter(void)
// callers(4): 00079b18 freeze::UpdateFreeze; 000a7968 hero::Hero_UpdateHoverboardRace; 0016b038 vendor::Vendor_EndWeaponCutscene; 0016ba38 vendor::Vendor_RestoreHero
// callees(0): 

void hud::Hud_DecHideCounter(void)

{
  if (g_HudHideCounter != 0) {
    g_HudHideCounter = g_HudHideCounter + -1;
  }
  return;
}



//==== 000d5c20  ns=hud  size=0x330
// sig: undefined DrawGameplayHud(void)
// callers(2): 0006bb78 draw::DefaultDraw; 001744f0 vendor::Vendor_PostUpdate
// callees(2): 00070998 draw::FontPrintLargeCenter; 000cc148 hud::Hud_DrawTextBox

void hud::DrawGameplayHud(void)

{
  int iVar1;
  int iVar2;
  int iter;
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  void **callback;
  HudElement *arg;
  
  if (DAT_00a1bfe8 == 0 && draw::LetterBoxOn == 0) {
    arg = HudEntries;
    callback = &HudEntries[0].drawCb;
    DAT_00a1bfcc = 0xfffff0;
    iter = 0;
    do {
      if ((undefined4 *)*callback != (undefined4 *)0x0) {
                    /* WARNING: Load size is inaccurate */
                    /* run HUD render cb */
        (***callback)(arg);
      }
      iVar1 = DAT_00a15c88;
      iter = iter + 1;
      callback = callback + 0x24;
      arg = arg + 1;
    } while (iter < 0xd);
    if ((DAT_00a15c84 == 0 && g_toastMsgTimer == 0) || (g_gameMode != GAME_MODE_NORMAL)) {
      DAT_00a15c88 = 100;
    }
    else {
      if (g_toastMsgTimer == 0) {
        lVar3 = (ulonglong)DAT_00a15c84 - (longlong)(0x80 / (int)(animationSpeed * 8.5));
        uVar4 = lVar3 + ((longlong)(int)lVar3 >> 0x3f & -lVar3);
      }
      else {
        lVar3 = (ulonglong)DAT_00a15c84 + (longlong)(0x80 / (int)(animationSpeed * 8.5));
        uVar4 = lVar3 + (0x80 - (longlong)(int)lVar3 >> 0x3f & 0x80U - lVar3);
      }
                    /* shows ammo toast message when collecting ammo */
      iter = (int)((uVar4 & 0xffffffff) << 0x18);
      DAT_00a15c84 = (uint)uVar4;
      iVar5 = iter + 0xf0f0f0;
      lVar3 = (longlong)(iVar5 >> 0x18);
      lVar3 = lVar3 + (0x50 - lVar3 >> 0x3f & 0x50U - lVar3);
      iVar2 = draw::FontPrintLargeCenter
                        (0x101,DAT_00a15c88 + 1,iter,&g_toastMsgBuff,0xffffffffffffffff);
      Hud_DrawTextBox((longlong)(iVar2 + -0x20),iVar1 + -8,
                      (int)(0x100 - (longlong)(iVar2 + -0x20)) * 2,0x20,lVar3);
      draw::FontPrintLargeCenter(0x100,iVar1,iVar5,&g_toastMsgBuff,0xffffffffffffffff);
      iVar1 = DAT_00a15c88;
      if ((DAT_00a15cdc != '\0') && (1000 < g_toastMsgTimer)) {
        iter = draw::FontPrintLargeCenter
                         (0x101,DAT_00a15c88 + 1,iter,&DAT_00a15cdc,0xffffffffffffffff);
        Hud_DrawTextBox((longlong)(iter + -0x20),iVar1 + -8,
                        (int)(0x100 - (longlong)(iter + -0x20)) * 2,0x20,lVar3);
        draw::FontPrintLargeCenter(0x100,iVar1,iVar5,&DAT_00a15cdc,0xffffffffffffffff);
      }
      if (g_toastMsgTimer != 0) {
        g_toastMsgTimer = g_toastMsgTimer + -1;
      }
      if (g_toastMsgTimer == 1000) {
        g_toastMsgTimer = 0;
      }
    }
  }
  else {
    DAT_00a1bfe8 = 0;
  }
  return;
}



//==== 000d5f58  ns=hud  size=0x64
// sig: undefined RaceHud_Init(void)
// callers(0): 
// callees(0): 

void hud::RaceHud_Init(undefined8 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 in_r0;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  auVar3 = ZEXT416(0xffffffff);
  auVar3 = auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60;
  auVar4 = vectorShiftLeftIntegerWord(auVar3,auVar3);
  auVar3 = loadVectorLeftIndexed(in_r0,0xd5f50);
  auVar5 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
  auVar3 = auVar3 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar3 = vectorMultiplyAddFloatingPoint
                     (auVar5,auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60,auVar4);
  auVar4 = loadVectorLeftIndexed(4,0xd5f50);
  auVar3 = vectorConvertToSignedFixedPointWordSaturate(auVar3,0);
  auVar3 = ZEXT416((uint)(auVar3._0_4_ + auVar4._0_4_)) & (undefined1  [16])0xffffffff;
  iVar2 = (int)param_1;
  uVar1 = storeVectorElementWordIndexed
                    (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60,0x7c,param_1);
  *(undefined4 *)(iVar2 + 0x7cU & 0xfffffffc) = uVar1;
  *(undefined4 *)(iVar2 + 0x58) = 0x80;
  *(undefined4 *)(iVar2 + 0x5c) = 0x80;
  *(undefined2 *)(iVar2 + 0x48) = 0;
  *(undefined2 *)(iVar2 + 0x4a) = 0;
  return;
}



//==== 000d5fc0  ns=hud  size=0x5c
// sig: undefined RaceHud_Update(void)
// callers(0): 
// callees(0): 

void hud::RaceHud_Update(undefined8 param_1)

{
  undefined4 uVar1;
  undefined8 in_r0;
  undefined4 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  uVar2 = 0xfffffffa;
  if (hero::g_heroStateType == 0x16) {
    auVar3 = ZEXT416(0xffffffff);
    auVar3 = auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60;
    auVar4 = vectorShiftLeftIntegerWord(auVar3,auVar3);
    auVar3 = loadVectorLeftIndexed(in_r0,0xd5fbc);
    auVar5 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar3 = auVar3 >> 0x60 & (undefined1  [16])0xffffffff;
    uVar2 = 5;
    auVar3 = vectorMultiplyAddFloatingPoint
                       (auVar5,auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60,auVar4);
    auVar3 = vectorConvertToSignedFixedPointWordSaturate(auVar3,0);
    auVar3 = auVar3 >> 0x60 & (undefined1  [16])0xffffffff;
    uVar1 = storeVectorElementWordIndexed
                      (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60,0x7c,param_1);
    *(undefined4 *)((int)param_1 + 0x7cU & 0xfffffffc) = uVar1;
  }
  *(undefined4 *)((int)param_1 + 0x6c) = uVar2;
  return;
}



//==== 000d6020  ns=hud  size=0x128
// sig: undefined AmmoHud_Update(void)
// callers(0): 
// callees(0): 

void hud::AmmoHud_Update(undefined8 param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined8 in_r0;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  iVar5 = (int)param_1;
  auVar7 = ZEXT416(0xffffffff);
  auVar7 = auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60;
  iVar3 = **(int **)(iVar5 + 0xc);
  auVar8 = vectorShiftLeftIntegerWord(auVar7,auVar7);
  iVar6 = iVar3 + (iVar3 >> 0x1f & -iVar3);
  *(uint *)(iVar5 + 0x74) =
       iVar6 + ((uint)((longlong)*(int *)(iVar5 + 8) - (longlong)iVar3 >> 0x3f) &
               *(int *)(iVar5 + 8) - iVar6);
  auVar7 = loadVectorLeftIndexed(in_r0,0xd601c);
  auVar7 = auVar7 >> 0x60 & (undefined1  [16])0xffffffff;
  bVar1 = *(byte *)(iVar5 + 0x70);
  bVar2 = *(byte *)(iVar5 + 0x71);
  auVar9 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
  auVar7 = vectorMultiplyAddFloatingPoint
                     (auVar9,auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60,auVar8);
  auVar7 = vectorConvertToSignedFixedPointWordSaturate(auVar7,0);
  if (*(int *)(iVar5 + 0x7c) < (int)(animationSpeed * 5.5)) {
    *(undefined4 *)(iVar5 + 0x6c) = 1;
    if (bVar2 == 0) {
      if (bVar1 == 0) {
        *(undefined4 *)(iVar5 + 0x6c) = 0xfffffffa;
      }
      else {
        *(byte *)(iVar5 + 0x70) = bVar1 - 1;
      }
    }
    else {
      *(byte *)(iVar5 + 0x71) = bVar2 - 1;
    }
  }
  else {
    auVar7 = auVar7 >> 0x60 & (undefined1  [16])0xffffffff;
    uVar4 = storeVectorElementWordIndexed
                      (auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60,0x7c,param_1);
    *(undefined4 *)(iVar5 + 0x7cU & 0xfffffffc) = uVar4;
    if ((int)(uint)bVar1 < DAT_007244e4) {
      *(byte *)(iVar5 + 0x70) = bVar1 + 1;
    }
    else if ((int)(uint)bVar2 < DAT_007244e8) {
      *(byte *)(iVar5 + 0x71) = bVar2 + 1;
    }
  }
  return;
}



//==== 000d6148  ns=hud  size=0x5c8
// sig: undefined Draw_RaceLapPlaceHud(void)
// callers(0): 
// callees(6): 0006cde8 draw::FontLen; 0006fcfc draw::FontPrintLarge; 0007b740 help::help_msg_string_by_index; 000cbe60 hud::Hud_DrawTexHeaderQuad; 000cc148 hud::Hud_DrawTextBox; 005cd2a8 libc::snprintf
// strings: 0065215c: '%s: ' | 00652164: ' %d/3' | 0065216c: ' %s:  '

undefined4 hud::Draw_RaceLapPlaceHud(int param_1)

{
  bool bVar1;
  undefined8 uVar2;
  int iVar4;
  ulonglong uVar3;
  undefined4 uVar5;
  int iVar6;
  longlong lVar7;
  IconTableEntries *pIVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  char acStack_a0 [8];
  char acStack_98 [64];
  
  bVar1 = false;
  lVar9 = 0;
  if ((*(char *)(g_viewMtxPtr + 0x11) == '\x04') || (*(char *)(g_viewMtxPtr + 0x11) == '\x05')) {
    bVar1 = true;
  }
  if (*(int *)(param_1 + 0x6c) < 1) {
    uVar5 = 0;
  }
  else {
    iVar11 = draw::g_ScreenHeight - (((uint)((LZCOUNT(-Cutscene) << 0x3a) >> 0x3f) & 8) + 10);
    iVar10 = iVar11 - DAT_00724534;
    iVar11 = iVar11 - DAT_00724550;
    if (bVar1) {
      iVar10 = iVar10 - DAT_00724580;
      iVar11 = iVar11 - DAT_00724580;
    }
    Hud_DrawTextBox(DAT_00a1c818,iVar10,DAT_00724538,DAT_0072453c,DAT_00724540);
    iVar10 = DAT_0072454c;
    uVar2 = help::help_msg_string_by_index(STR_LAP);
    libc::snprintf(acStack_98,"%s: ",uVar2);
    iVar6 = iVar11 + 1;
    draw::FontPrintLarge(iVar10 + -1,iVar6,0x80000000,acStack_98,0xffffffffffffffff);
    draw::FontPrintLarge(iVar10,iVar11,DAT_00724544,acStack_98,0xffffffffffffffff);
    iVar4 = draw::FontLen(acStack_98,-1);
    lVar7 = (longlong)DAT_0096a57a + 1;
    libc::snprintf(acStack_98," %d/3",lVar7 + (3 - lVar7 >> 0x3f & 3U - lVar7));
    draw::FontPrintLarge(iVar10 + iVar4 + -1,iVar11 + 2,0x80000000,acStack_98,0xffffffffffffffff);
    draw::FontPrintLarge(iVar10 + iVar4,iVar11,DAT_00724548,acStack_98,0xffffffffffffffff);
    iVar10 = DAT_0072455c;
    iVar4 = DAT_0096a5a0 + -1;
    uVar2 = help::help_msg_string_by_index
                      (iVar4 + ((uint)(4 - (longlong)iVar4 >> 0x3f) & 4U - iVar4) + STR_ST);
    libc::snprintf(acStack_98,"%s",uVar2);
    iVar4 = draw::FontLen(acStack_98,-1);
    iVar10 = iVar10 - iVar4;
    draw::FontPrintLarge(iVar10 + 1,iVar6,0x80000000,acStack_98,0xffffffffffffffff);
    draw::FontPrintLarge(iVar10,iVar11,DAT_00724548,acStack_98,0xffffffffffffffff);
    uVar2 = help::help_msg_string_by_index(STR_PLACE);
    libc::snprintf(acStack_98," %s:  ",uVar2);
    iVar4 = draw::FontLen(acStack_98,-1);
    draw::FontPrintLarge((iVar10 - iVar4) + 1,iVar6,0x80000000,acStack_98,0xffffffffffffffff);
    draw::FontPrintLarge(iVar10 - iVar4,iVar11,DAT_00724544,acStack_98,0xffffffffffffffff);
    if (Level == Kalebo) {
      libc::snprintf(acStack_a0,"%d",(ulonglong)DAT_0096a5ae);
      lVar7 = ((LZCOUNT(-Cutscene) << 0x3a) >> 0x3f & 8U) + 10;
      iVar11 = *(int *)(param_1 + 0x50);
      if (MiscLevelFlags.Zoomerator != false) {
        lVar7 = (longlong)DAT_00724570;
        iVar11 = DAT_0072456c;
      }
      Hud_DrawTextBox(iVar11 + -0x18,lVar7,DAT_00724574,0x20,0x60);
      uVar3 = 0;
      for (pIVar8 = IconTableEntry; pIVar8->iconId != 0x7558 && pIVar8->iconId != 0xffff;
          pIVar8 = pIVar8 + 1) {
        uVar3 = uVar3 + 1;
      }
      iVar10 = (int)((uVar3 & 0x1fffffff) << 3);
      if ((*(short *)((int)&IconTableEntry->iconId + iVar10) != -1) &&
         (2 < *(ushort *)((int)&IconTableEntry->unknown + iVar10))) {
        lVar9 = (ulonglong)*(ushort *)((int)&IconTableEntry->variantsCnt + iVar10) + 2;
      }
      Hud_DrawTexHeaderQuad
                (EffectTexHeaders + *(int *)(TexturePointerArray + (int)(lVar9 << 2)) * 0x24,iVar11,
                 lVar7,0x20,0x20,0x80);
      draw::FontPrintLarge(iVar11 + 0x29,(int)lVar7 + 8,0x80000000,acStack_a0,0xffffffffffffffff);
      iVar10 = (int)lVar7 + 7;
      if (DAT_0096a5ae == 0) {
        draw::FontPrintLarge(iVar11 + 0x28,iVar10,0x80202080,acStack_a0,0xffffffffffffffff);
      }
      else {
        draw::FontPrintLarge(iVar11 + 0x28,iVar10,0x80e08060,acStack_a0,0xffffffffffffffff);
      }
    }
    uVar5 = *(undefined4 *)(param_1 + 0x58);
  }
  return uVar5;
}



//==== 000d6710  ns=hud  size=0x4e8
// sig: undefined Draw_RaceTimeScoreHud(void)
// callers(0): 
// callees(5): 0006cde8 draw::FontLen; 0006fcfc draw::FontPrintLarge; 0007b740 help::help_msg_string_by_index; 000cc148 hud::Hud_DrawTextBox; 005cd2a8 libc::snprintf
// strings: 006520f4: '%s: %d' | 0065215c: '%s: ' | 00652174: ' %d' | 0065217c: '%s:  0:00:00' | 0065218c: '%s:  ' | 00652194: '%d:%02d:%02d'

undefined4 hud::Draw_RaceTimeScoreHud(int param_1)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  int iVar5;
  int iVar6;
  undefined8 uVar4;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar11;
  longlong lVar10;
  int iVar12;
  char acStack_a0 [72];
  
  bVar2 = false;
  uVar8 = 0;
  if ((*(char *)(g_viewMtxPtr + 0x11) == '\x04') || (*(char *)(g_viewMtxPtr + 0x11) == '\x05')) {
    bVar2 = true;
  }
  if (0 < *(int *)(param_1 + 0x6c)) {
    uVar3 = (uint)((LZCOUNT(-g_IsPal) << 0x3a) >> 0x3f) & 600;
    iVar5 = uVar3 + 3000;
    iVar1 = g_RaceTime / iVar5;
    iVar6 = g_RaceTime - iVar1 * iVar5;
    uVar3 = (uVar3 + 0xbb9) * 0x111 >> 0xe;
    iVar5 = iVar6 / (int)uVar3;
    iVar12 = draw::g_ScreenHeight - (((uint)((LZCOUNT(-Cutscene) << 0x3a) >> 0x3f) & 8) + 10);
    iVar9 = iVar12 - DAT_0072458c;
    iVar11 = iVar12 - DAT_007245a8;
    iVar12 = iVar12 - DAT_007245b8;
    if (bVar2) {
      iVar9 = (iVar9 - DAT_00724580) + -3;
      iVar11 = (iVar11 - DAT_00724580) + -3;
      iVar12 = (iVar12 - DAT_00724580) + -3;
    }
    if (MiscLevelFlags.Zoomerator) {
      Hud_DrawTextBox(DAT_00724588,iVar9,DAT_00724590,DAT_00724594,DAT_00724598);
      iVar9 = DAT_007245a4;
      uVar4 = help::help_msg_string_by_index(STR_SCORE);
      libc::snprintf(acStack_a0,"%s: %d",uVar4,g_RaceScore);
      iVar7 = draw::FontLen(acStack_a0,-1);
      iVar9 = iVar9 - (iVar7 >> 1);
      uVar4 = help::help_msg_string_by_index(STR_SCORE);
      libc::snprintf(acStack_a0,"%s: ",uVar4);
      draw::FontPrintLarge(iVar9 + 1,iVar11 + 1,0x80000000,acStack_a0,0xffffffffffffffff);
      draw::FontPrintLarge(iVar9,iVar11,DAT_0072459c,acStack_a0,0xffffffffffffffff);
      iVar7 = draw::FontLen(acStack_a0,-1);
      libc::snprintf(acStack_a0," %d",g_RaceScore);
      draw::FontPrintLarge(iVar9 + iVar7 + 1,iVar11 + 1,0x80000000,acStack_a0,0xffffffffffffffff);
      draw::FontPrintLarge(iVar9 + iVar7,iVar11,DAT_007245a0,acStack_a0,0xffffffffffffffff);
    }
    iVar9 = DAT_007245a4;
    uVar4 = help::help_msg_string_by_index(STR_TIME);
    libc::snprintf(acStack_a0,"%s:  0:00:00",uVar4);
    iVar11 = draw::FontLen(acStack_a0,-1);
    iVar9 = iVar9 - (iVar11 >> 1);
    lVar10 = (longlong)iVar9 +
             ((LZCOUNT(2 - g_Language) << 0x3a) >> 0x3f &
             (longlong)(iVar9 + -0x14) - (longlong)iVar9);
    uVar4 = help::help_msg_string_by_index(STR_TIME);
    libc::snprintf(acStack_a0,"%s:  ",uVar4);
    iVar9 = (int)lVar10;
    draw::FontPrintLarge(iVar9 + 1,iVar12 + 1,0x80000000,acStack_a0,0xffffffffffffffff);
    draw::FontPrintLarge(lVar10,iVar12,DAT_0072459c,acStack_a0,0xffffffffffffffff);
    iVar11 = draw::FontLen(acStack_a0,-1);
    iVar9 = iVar9 + iVar11;
    libc::snprintf(acStack_a0,"%d:%02d:%02d",iVar1,iVar5,
                   (int)((iVar6 - iVar5 * uVar3) * 100) / (int)uVar3);
    draw::FontPrintLarge(iVar9 + 1,iVar12 + 1,0x80000000,acStack_a0,0xffffffffffffffff);
    draw::FontPrintLarge(iVar9,iVar12,DAT_007245a0,acStack_a0,0xffffffffffffffff);
    uVar8 = *(undefined4 *)(param_1 + 0x58);
  }
  return uVar8;
}



//==== 000d6bf8  ns=hud  size=0x1c
// sig: int Hud_GetTexIndex(int idx)
// callers(4): 000e0e60 main::startLevel; 000e2e10 map::DrawMapFrame; 0014bf78 pause::MenuIconText_Draw; 0016f9a8 vendor::DrawVendorHintFrame
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int hud::Hud_GetTexIndex(int idx)

{
  return *(int *)(TexturePointerArray + (int)((longlong)idx << 2));
}



//==== 000d6c14  ns=hud  size=0x2c8
// sig: undefined Hud_DrawTexQuad4Pt(void)
// callers(1): 000d6edc hud::Hud_DrawEffectTexQuad4Pt
// callees(2): 004d6948 idol_draw::ResetPassState; 004d6d00 idol_draw::SetTextureUnitRegs

void hud::Hud_DrawTexQuad4Pt
               (undefined8 param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
               int param_7,int param_8)

{
  RsxCmd RVar1;
  RsxCmd RVar2;
  RenderingStep *pRVar3;
  int in_stack_00000074;
  int in_stack_0000007c;
  
  idol_draw::SetTextureUnitRegs(HUD_Pass,0,param_1);
  idol_draw::ResetPassState(HUD_Pass);
  pRVar3 = HUD_Pass;
  *HUD_Pass->command = 0x41948;
  pRVar3->command[1] = in_stack_0000007c << 0x18 | 0x808080;
  pRVar3->command = pRVar3->command + 2;
  pRVar3 = HUD_Pass;
  *HUD_Pass->command = 0x400c1714;
  pRVar3->command[1] = 0;
  pRVar3->command[2] = 0;
  pRVar3->command[3] = 0;
  pRVar3->command[4] = NV4097_SET_BEGIN_END_x1;
  pRVar3->command[5] = 8;
  RVar1 = param_6 >> 4 & 0xffff;
  pRVar3->command = pRVar3->command + 6;
  pRVar3 = HUD_Pass;
  *HUD_Pass->command = 0x41904;
  pRVar3->command[1] = (param_7 >> 4) << 0x10 | RVar1;
  RVar2 = param_2 >> 4 & 0xffff;
  pRVar3->command = pRVar3->command + 2;
  pRVar3 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_VERTEX_DATA2S_M_x1;
  pRVar3->command[1] = (param_3 >> 4) << 0x10 | RVar2;
  pRVar3->command = pRVar3->command + 2;
  pRVar3 = HUD_Pass;
  *HUD_Pass->command = 0x41904;
  pRVar3->command[1] = (in_stack_00000074 >> 4) << 0x10 | RVar1;
  pRVar3->command = pRVar3->command + 2;
  pRVar3 = HUD_Pass;
  RVar1 = param_8 >> 4 & 0xffff;
  *HUD_Pass->command = NV4097_SET_VERTEX_DATA2S_M_x1;
  pRVar3->command[1] = (param_5 >> 4) << 0x10 | RVar2;
  RVar2 = param_4 >> 4 & 0xffff;
  pRVar3->command = pRVar3->command + 2;
  pRVar3 = HUD_Pass;
  *HUD_Pass->command = 0x41904;
  pRVar3->command[1] = (in_stack_00000074 >> 4) << 0x10 | RVar1;
  pRVar3->command = pRVar3->command + 2;
  pRVar3 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_VERTEX_DATA2S_M_x1;
  pRVar3->command[1] = (param_5 >> 4) << 0x10 | RVar2;
  pRVar3->command = pRVar3->command + 2;
  pRVar3 = HUD_Pass;
  *HUD_Pass->command = 0x41904;
  pRVar3->command[1] = (param_7 >> 4) << 0x10 | RVar1;
  pRVar3->command = pRVar3->command + 2;
  pRVar3 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_VERTEX_DATA2S_M_x1;
  pRVar3->command[1] = (param_3 >> 4) << 0x10 | RVar2;
  pRVar3->command = pRVar3->command + 2;
  pRVar3 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_BEGIN_END_x1;
  pRVar3->command[1] = 0;
  pRVar3->command = pRVar3->command + 2;
  return;
}



//==== 000d6edc  ns=hud  size=0x80
// sig: undefined Hud_DrawEffectTexQuad4Pt(void)
// callers(0): 
// callees(1): 000d6c14 hud::Hud_DrawTexQuad4Pt

void hud::Hud_DrawEffectTexQuad4Pt(longlong param_1)

{
  Hud_DrawTexQuad4Pt(EffectTexHeaders + *(int *)(TexturePointerArray + (int)(param_1 << 2)) * 0x24);
  return;
}



//==== 000d6f5c  ns=hud  size=0x2c0
// sig: undefined Hud_DrawTexQuadF(void)
// callers(1): 000e2e10 map::DrawMapFrame
// callees(2): 004d6948 idol_draw::ResetPassState; 004d6d00 idol_draw::SetTextureUnitRegs

void hud::Hud_DrawTexQuadF
               (double param_1,double param_2,double param_3,double param_4,double param_5,
               double param_6,double param_7,double param_8,undefined8 param_9)

{
  RenderingStep *pRVar1;
  int in_stack_0000007c;
  
  idol_draw::SetTextureUnitRegs(HUD_Pass,0,param_9,0x13c);
  idol_draw::ResetPassState(HUD_Pass);
  pRVar1 = HUD_Pass;
  *HUD_Pass->command = 0x41948;
  pRVar1->command[1] = in_stack_0000007c << 0x18 | 0x808080;
  pRVar1->command = pRVar1->command + 2;
  pRVar1 = HUD_Pass;
  *HUD_Pass->command = 0x400c1714;
  pRVar1->command[1] = 0;
  pRVar1->command[2] = 0;
  pRVar1->command[3] = 0;
  pRVar1->command[4] = NV4097_SET_BEGIN_END_x1;
  pRVar1->command[5] = 8;
  pRVar1->command = pRVar1->command + 6;
  pRVar1 = HUD_Pass;
  *HUD_Pass->command = 0x81888;
  pRVar1->command[1] = (RsxCmd)(float)param_5;
  pRVar1->command[2] = (RsxCmd)(float)param_6;
  pRVar1->command = pRVar1->command + 3;
  pRVar1 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_VERTEX_DATA2F_M_x2;
  pRVar1->command[1] = (RsxCmd)(float)param_1;
  pRVar1->command[2] = (RsxCmd)(float)param_2;
  pRVar1->command = pRVar1->command + 3;
  pRVar1 = HUD_Pass;
  *HUD_Pass->command = 0x81888;
  pRVar1->command[1] = (RsxCmd)(float)param_5;
  pRVar1->command[2] = (RsxCmd)(float)param_8;
  pRVar1->command = pRVar1->command + 3;
  pRVar1 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_VERTEX_DATA2F_M_x2;
  pRVar1->command[1] = (RsxCmd)(float)param_1;
  pRVar1->command[2] = (RsxCmd)(float)param_4;
  pRVar1->command = pRVar1->command + 3;
  pRVar1 = HUD_Pass;
  *HUD_Pass->command = 0x81888;
  pRVar1->command[1] = (RsxCmd)(float)param_7;
  pRVar1->command[2] = (RsxCmd)(float)param_8;
  pRVar1->command = pRVar1->command + 3;
  pRVar1 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_VERTEX_DATA2F_M_x2;
  pRVar1->command[1] = (RsxCmd)(float)param_3;
  pRVar1->command[2] = (RsxCmd)(float)param_4;
  pRVar1->command = pRVar1->command + 3;
  pRVar1 = HUD_Pass;
  *HUD_Pass->command = 0x81888;
  pRVar1->command[1] = (RsxCmd)(float)param_7;
  pRVar1->command[2] = (RsxCmd)(float)param_6;
  pRVar1->command = pRVar1->command + 3;
  pRVar1 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_VERTEX_DATA2F_M_x2;
  pRVar1->command[1] = (RsxCmd)(float)param_3;
  pRVar1->command[2] = (RsxCmd)(float)param_2;
  pRVar1->command = pRVar1->command + 3;
  pRVar1 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_BEGIN_END_x1;
  pRVar1->command[1] = 0;
  pRVar1->command = pRVar1->command + 2;
  return;
}



//==== 000d721c  ns=hud  size=0x300
// sig: undefined Hud_DrawEffectTexQuadUV(void)
// callers(1): 004d27b0 idol_draw::DrawGalacticMapFrame
// callees(2): 004d6948 idol_draw::ResetPassState; 004d6d00 idol_draw::SetTextureUnitRegs

void hud::Hud_DrawEffectTexQuadUV
               (longlong param_1,RsxCmd param_2,ulonglong param_3,int param_4,longlong param_5,
               RsxCmd param_6,ulonglong param_7,int param_8)

{
  uint uVar1;
  RsxCmd RVar2;
  RsxCmd RVar3;
  RenderingStep *pRVar4;
  int iVar5;
  ulonglong uVar6;
  
  iVar5 = EffectTexHeaders + *(int *)(TexturePointerArray + (int)(param_1 << 2)) * 0x24;
  idol_draw::SetTextureUnitRegs(HUD_Pass,0,iVar5);
  idol_draw::ResetPassState(HUD_Pass);
  pRVar4 = HUD_Pass;
  uVar1 = *(uint *)(iVar5 + 0x18);
  *HUD_Pass->command = 0x41948;
  pRVar4->command[1] = param_8 << 0x18 | 0x808080;
  pRVar4->command = pRVar4->command + 2;
  pRVar4 = HUD_Pass;
  *HUD_Pass->command = 0x400c1714;
  pRVar4->command[1] = 0;
  uVar6 = param_7 + (uVar1 >> 0x10);
  pRVar4->command[2] = 0;
  pRVar4->command[3] = 0;
  pRVar4->command[4] = NV4097_SET_BEGIN_END_x1;
  RVar2 = param_6 + uVar1 & 0xffff;
  pRVar4->command[5] = 8;
  pRVar4->command = pRVar4->command + 6;
  pRVar4 = HUD_Pass;
  *HUD_Pass->command = 0x41904;
  pRVar4->command[1] = (RsxCmd)((param_7 & 0xffffffff) << 0x10) | param_6 & 0xffff;
  pRVar4->command = pRVar4->command + 2;
  pRVar4 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_VERTEX_DATA2S_M_x1;
  pRVar4->command[1] = (RsxCmd)((param_3 & 0xffffffff) << 0x10) | param_2 & 0xffff;
  pRVar4->command = pRVar4->command + 2;
  pRVar4 = HUD_Pass;
  *HUD_Pass->command = 0x41904;
  pRVar4->command[1] = (RsxCmd)((uVar6 & 0xffffffff) << 0x10) | param_6 & 0xffff;
  pRVar4->command = pRVar4->command + 2;
  pRVar4 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_VERTEX_DATA2S_M_x1;
  pRVar4->command[1] = (RsxCmd)((param_5 + param_3 & 0xffffffff) << 0x10) | param_2 & 0xffff;
  pRVar4->command = pRVar4->command + 2;
  pRVar4 = HUD_Pass;
  *HUD_Pass->command = 0x41904;
  pRVar4->command[1] = (RsxCmd)((uVar6 & 0xffffffff) << 0x10) | RVar2;
  RVar3 = param_4 + param_2 & 0xffff;
  pRVar4->command = pRVar4->command + 2;
  pRVar4 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_VERTEX_DATA2S_M_x1;
  pRVar4->command[1] = (RsxCmd)((param_5 + param_3 & 0xffffffff) << 0x10) | RVar3;
  pRVar4->command = pRVar4->command + 2;
  pRVar4 = HUD_Pass;
  *HUD_Pass->command = 0x41904;
  pRVar4->command[1] = (RsxCmd)((param_7 & 0xffffffff) << 0x10) | RVar2;
  pRVar4->command = pRVar4->command + 2;
  pRVar4 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_VERTEX_DATA2S_M_x1;
  pRVar4->command[1] = (RsxCmd)((param_3 & 0xffffffff) << 0x10) | RVar3;
  pRVar4->command = pRVar4->command + 2;
  pRVar4 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_BEGIN_END_x1;
  pRVar4->command[1] = 0;
  pRVar4->command = pRVar4->command + 2;
  return;
}



//==== 000d751c  ns=hud  size=0x2e0
// sig: undefined Hud_DrawTexQuadUV(void)
// callers(2): 000d77fc hud::Hud_DrawEffectTexHeaderQuadUV; 000d7864 hud::Hud_DrawTexQuadUV_Fixed
// callees(2): 004d6948 idol_draw::ResetPassState; 004d6d00 idol_draw::SetTextureUnitRegs

void hud::Hud_DrawTexQuadUV
               (undefined8 param_1,RsxCmd param_2,ulonglong param_3,uint param_4,uint param_5,
               int param_6,longlong param_7,RsxCmd param_8)

{
  RsxCmd RVar1;
  RsxCmd RVar2;
  RenderingStep *pRVar3;
  ulonglong uVar4;
  uint in_stack_00000074;
  int in_stack_0000007c;
  
  idol_draw::SetTextureUnitRegs(HUD_Pass,0,param_1);
  idol_draw::ResetPassState(HUD_Pass);
  pRVar3 = HUD_Pass;
  *HUD_Pass->command = 0x41948;
  pRVar3->command[1] = in_stack_0000007c << 0x18 | 0x808080;
  pRVar3->command = pRVar3->command + 2;
  pRVar3 = HUD_Pass;
  *HUD_Pass->command = 0x400c1714;
  pRVar3->command[1] = 0;
  uVar4 = (ulonglong)in_stack_00000074 + (ulonglong)(uint)(1 << (param_5 & 0x3f));
  pRVar3->command[2] = 0;
  pRVar3->command[3] = 0;
  pRVar3->command[4] = NV4097_SET_BEGIN_END_x1;
  pRVar3->command[5] = 8;
  pRVar3->command = pRVar3->command + 6;
  pRVar3 = HUD_Pass;
  *HUD_Pass->command = 0x41904;
  pRVar3->command[1] = in_stack_00000074 << 0x10 | param_8 & 0xffff;
  pRVar3->command = pRVar3->command + 2;
  pRVar3 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_VERTEX_DATA2S_M_x1;
  pRVar3->command[1] = (RsxCmd)((param_3 & 0xffffffff) << 0x10) | param_2 & 0xffff;
  pRVar3->command = pRVar3->command + 2;
  pRVar3 = HUD_Pass;
  *HUD_Pass->command = 0x41904;
  pRVar3->command[1] = (RsxCmd)((uVar4 & 0xffffffff) << 0x10) | param_8 & 0xffff;
  pRVar3->command = pRVar3->command + 2;
  pRVar3 = HUD_Pass;
  RVar1 = param_8 + (1 << (param_4 & 0x3f)) & 0xffff;
  *HUD_Pass->command = NV4097_SET_VERTEX_DATA2S_M_x1;
  pRVar3->command[1] = (RsxCmd)((param_7 + param_3 & 0xffffffff) << 0x10) | param_2 & 0xffff;
  pRVar3->command = pRVar3->command + 2;
  pRVar3 = HUD_Pass;
  *HUD_Pass->command = 0x41904;
  pRVar3->command[1] = (RsxCmd)((uVar4 & 0xffffffff) << 0x10) | RVar1;
  RVar2 = param_6 + param_2 & 0xffff;
  pRVar3->command = pRVar3->command + 2;
  pRVar3 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_VERTEX_DATA2S_M_x1;
  pRVar3->command[1] = (RsxCmd)((param_7 + param_3 & 0xffffffff) << 0x10) | RVar2;
  pRVar3->command = pRVar3->command + 2;
  pRVar3 = HUD_Pass;
  *HUD_Pass->command = 0x41904;
  pRVar3->command[1] = in_stack_00000074 << 0x10 | RVar1;
  pRVar3->command = pRVar3->command + 2;
  pRVar3 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_VERTEX_DATA2S_M_x1;
  pRVar3->command[1] = (RsxCmd)((param_3 & 0xffffffff) << 0x10) | RVar2;
  pRVar3->command = pRVar3->command + 2;
  pRVar3 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_BEGIN_END_x1;
  pRVar3->command[1] = 0;
  pRVar3->command = pRVar3->command + 2;
  return;
}



//==== 000d77fc  ns=hud  size=0x68
// sig: undefined Hud_DrawEffectTexHeaderQuadUV(void)
// callers(0): 
// callees(1): 000d751c hud::Hud_DrawTexQuadUV

void hud::Hud_DrawEffectTexHeaderQuadUV(int param_1)

{
  Hud_DrawTexQuadUV(EffectTexHeaders + param_1 * 0x24);
  return;
}



//==== 000d7864  ns=hud  size=0x40
// sig: undefined Hud_DrawTexQuadUV_Fixed(void)
// callers(0): 
// callees(1): 000d751c hud::Hud_DrawTexQuadUV

void hud::Hud_DrawTexQuadUV_Fixed(undefined8 param_1,int param_2,int param_3)

{
  Hud_DrawTexQuadUV(param_1,param_2 >> 4,param_3 >> 4);
  return;
}



//==== 000d78a4  ns=hud  size=0x378
// sig: undefined Hud_DrawTexQuadF_v2(void)
// callers(1): 00149b50 pause::MapPage_DrawOverlay
// callees(2): 004d6948 idol_draw::ResetPassState; 004d6d00 idol_draw::SetTextureUnitRegs

void hud::Hud_DrawTexQuadF_v2
               (double param_1,double param_2,double param_3,double param_4,double param_5,
               double param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
               undefined4 param_10,undefined4 param_11)

{
  undefined4 uVar1;
  RenderingStep *pRVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  int in_stack_0000007c;
  
  auVar4._0_4_ = param_10;
  auVar4._4_4_ = param_10;
  auVar4._8_4_ = param_10;
  auVar4._12_4_ = param_10;
  auVar7._0_4_ = (float)param_5;
  auVar7._4_4_ = (float)param_5;
  auVar7._8_4_ = (float)param_5;
  auVar7._12_4_ = (float)param_5;
  auVar5._0_4_ = param_11;
  auVar5._4_4_ = param_11;
  auVar5._8_4_ = param_11;
  auVar5._12_4_ = param_11;
  auVar6._0_4_ = (float)param_6;
  auVar6._4_4_ = (float)param_6;
  auVar6._8_4_ = (float)param_6;
  auVar6._12_4_ = (float)param_6;
  idol_draw::SetTextureUnitRegs(HUD_Pass,0,param_7);
  idol_draw::ResetPassState(HUD_Pass);
  pRVar2 = HUD_Pass;
  *HUD_Pass->command = 0x41948;
  pRVar2->command[1] = in_stack_0000007c << 0x18 | 0x808080;
  pRVar2->command = pRVar2->command + 2;
  pRVar2 = HUD_Pass;
  auVar3 = ZEXT416(1);
  auVar3 = auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60;
  auVar5 = vectorShiftLeftIntegerWord(auVar3,auVar5);
  *HUD_Pass->command = 0x400c1714;
  auVar5 = vectorConvertFromUnsignedFixedPointWord(auVar5,0);
  pRVar2->command[1] = 0;
  pRVar2->command[2] = 0;
  auVar5 = vectorAddFloatingPoint(auVar6,auVar5);
  pRVar2->command[3] = 0;
  auVar4 = vectorShiftLeftIntegerWord(auVar3,auVar4);
  pRVar2->command[4] = NV4097_SET_BEGIN_END_x1;
  auVar3 = auVar5 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar5 = auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60;
  auVar3 = vectorConvertFromUnsignedFixedPointWord(auVar4,0);
  pRVar2->command[5] = 8;
  pRVar2->command = pRVar2->command + 6;
  pRVar2 = HUD_Pass;
  auVar3 = vectorAddFloatingPoint(auVar7,auVar3);
  *HUD_Pass->command = 0x81888;
  pRVar2->command[1] = (RsxCmd)(float)param_5;
  auVar3 = auVar3 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar3 = auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60;
  pRVar2->command[2] = (RsxCmd)(float)param_6;
  pRVar2->command = pRVar2->command + 3;
  pRVar2 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_VERTEX_DATA2F_M_x2;
  pRVar2->command[1] = (RsxCmd)(float)param_1;
  pRVar2->command[2] = (RsxCmd)(float)param_2;
  pRVar2->command = pRVar2->command + 3;
  pRVar2 = HUD_Pass;
  *HUD_Pass->command = 0x81888;
  pRVar2->command[1] = (RsxCmd)(float)param_5;
  uVar1 = storeVectorElementWordIndexed(auVar5,8,ZEXT48(pRVar2->command));
  *(undefined4 *)((uint)(pRVar2->command + 2) & 0xfffffffc) = uVar1;
  pRVar2->command = pRVar2->command + 3;
  pRVar2 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_VERTEX_DATA2F_M_x2;
  pRVar2->command[1] = (RsxCmd)(float)param_1;
  pRVar2->command[2] = (RsxCmd)(float)(param_4 + param_2);
  pRVar2->command = pRVar2->command + 3;
  pRVar2 = HUD_Pass;
  *HUD_Pass->command = 0x81888;
  uVar1 = storeVectorElementWordIndexed(auVar3,4,ZEXT48(pRVar2->command));
  *(undefined4 *)((uint)(pRVar2->command + 1) & 0xfffffffc) = uVar1;
  uVar1 = storeVectorElementWordIndexed(auVar5,8,ZEXT48(pRVar2->command));
  *(undefined4 *)((uint)(pRVar2->command + 2) & 0xfffffffc) = uVar1;
  pRVar2->command = pRVar2->command + 3;
  pRVar2 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_VERTEX_DATA2F_M_x2;
  pRVar2->command[1] = (RsxCmd)(float)(param_3 + param_1);
  pRVar2->command[2] = (RsxCmd)(float)(param_4 + param_2);
  pRVar2->command = pRVar2->command + 3;
  pRVar2 = HUD_Pass;
  *HUD_Pass->command = 0x81888;
  uVar1 = storeVectorElementWordIndexed(auVar3,4,ZEXT48(pRVar2->command));
  *(undefined4 *)((uint)(pRVar2->command + 1) & 0xfffffffc) = uVar1;
  pRVar2->command[2] = (RsxCmd)(float)param_6;
  pRVar2->command = pRVar2->command + 3;
  pRVar2 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_VERTEX_DATA2F_M_x2;
  pRVar2->command[1] = (RsxCmd)(float)(param_3 + param_1);
  pRVar2->command[2] = (RsxCmd)(float)param_2;
  pRVar2->command = pRVar2->command + 3;
  pRVar2 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_BEGIN_END_x1;
  pRVar2->command[1] = 0;
  pRVar2->command = pRVar2->command + 2;
  return;
}



//==== 000d7c38  ns=hud  size=0x334
// sig: undefined Hud_DrawTexQuadF_v3(void)
// callers(0): 
// callees(2): 004d6948 idol_draw::ResetPassState; 004d6d00 idol_draw::SetTextureUnitRegs

void hud::Hud_DrawTexQuadF_v3
               (double param_1,double param_2,double param_3,double param_4,double param_5)

{
  float fVar1;
  RsxCmd *pRVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  RenderingStep *pRVar6;
  RsxCmd in_r8;
  ulonglong in_r9;
  undefined8 in_r10;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  fVar1 = (float)(param_5 + 1.570796251296997);
  dVar8 = (double)(float)(3.141592502593994 - param_5);
  if (param_5 - (double)(float)(3.141592502593994 - param_5) < 0.0) {
    dVar8 = param_5;
  }
  fVar3 = 3.1415925 - fVar1;
  if (fVar1 - (3.1415925 - fVar1) < 0.0) {
    fVar3 = fVar1;
  }
  dVar10 = (double)(float)(-3.141592502593994 - param_5);
  if ((double)(float)(-3.141592502593994 - param_5) - dVar8 < 0.0) {
    dVar10 = dVar8;
  }
  dVar8 = (double)(float)(dVar10 * dVar10);
  fVar4 = -3.1415925 - fVar1;
  if ((-3.1415925 - fVar1) - fVar3 < 0.0) {
    fVar4 = fVar3;
  }
  fVar5 = fVar4 * fVar4;
  dVar9 = (double)(float)(dVar8 * (double)(float)(dVar8 * dVar10));
  dVar7 = (double)(float)(dVar8 * dVar9);
  fVar1 = fVar5 * fVar5 * fVar4;
  fVar3 = fVar5 * fVar1;
  dVar12 = (double)((float)(dVar8 * dVar7) * 2.601887e-06 +
                   (float)(dVar7 * -0.0001980741071747616 +
                          (double)(float)(dVar9 * 0.008333025500178337 +
                                         (double)(float)((double)(float)(dVar8 * dVar10) *
                                                         -0.16666656732559204 + dVar10))));
  dVar8 = (double)(fVar5 * fVar3 * 2.601887e-06 +
                  fVar3 * -0.0001980741 + fVar1 * 0.0083330255 + fVar5 * fVar4 * -0.16666657 + fVar4
                  );
  dVar11 = (double)(float)(param_4 * dVar12 + param_1);
  dVar9 = -(double)(float)(param_4 * dVar12 - param_1);
  dVar7 = (double)(float)(param_4 * dVar8 + param_2);
  dVar10 = -(double)(float)(param_4 * dVar8 - param_2);
  dVar8 = -(double)(float)(param_3 * dVar8);
  idol_draw::SetTextureUnitRegs(HUD_Pass,0,in_r10);
  idol_draw::ResetPassState(HUD_Pass);
  pRVar6 = HUD_Pass;
  *HUD_Pass->command = 0x41948;
  pRVar2 = pRVar6->command;
  pRVar2[1] = 0x80808080;
  pRVar6->command = pRVar2 + 2;
  pRVar6 = HUD_Pass;
  *HUD_Pass->command = 0x400c1714;
  pRVar6->command[1] = 0;
  pRVar6->command[2] = 0;
  pRVar6->command[3] = 0;
  pRVar6->command[4] = NV4097_SET_BEGIN_END_x1;
  pRVar2 = pRVar6->command;
  pRVar2[5] = 8;
  pRVar6->command = pRVar2 + 6;
  pRVar6 = HUD_Pass;
  *HUD_Pass->command = 0x41904;
  pRVar2 = pRVar6->command;
  pRVar2[1] = 0;
  pRVar6->command = pRVar2 + 2;
  pRVar6 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_VERTEX_DATA2F_M_x2;
  pRVar6->command[1] = (RsxCmd)(float)(dVar11 - dVar8);
  pRVar2 = pRVar6->command;
  pRVar2[2] = (RsxCmd)-(float)(param_3 * dVar12 - dVar7);
  pRVar6->command = pRVar2 + 3;
  pRVar6 = HUD_Pass;
  *HUD_Pass->command = 0x41904;
  pRVar2 = pRVar6->command;
  pRVar2[1] = (RsxCmd)((in_r9 & 0xffffffff) << 0x10);
  pRVar6->command = pRVar2 + 2;
  pRVar6 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_VERTEX_DATA2F_M_x2;
  pRVar6->command[1] = (RsxCmd)(float)(dVar9 - dVar8);
  pRVar2 = pRVar6->command;
  pRVar2[2] = (RsxCmd)-(float)(param_3 * dVar12 - dVar10);
  pRVar6->command = pRVar2 + 3;
  pRVar6 = HUD_Pass;
  *HUD_Pass->command = 0x41904;
  pRVar2 = pRVar6->command;
  pRVar2[1] = (RsxCmd)((in_r9 & 0xffffffff) << 0x10) | in_r8 & 0xffff;
  pRVar6->command = pRVar2 + 2;
  pRVar6 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_VERTEX_DATA2F_M_x2;
  pRVar6->command[1] = (RsxCmd)(float)(dVar9 + dVar8);
  pRVar2 = pRVar6->command;
  pRVar2[2] = (RsxCmd)(float)(param_3 * dVar12 + dVar10);
  pRVar6->command = pRVar2 + 3;
  pRVar6 = HUD_Pass;
  *HUD_Pass->command = 0x41904;
  pRVar2 = pRVar6->command;
  pRVar2[1] = in_r8 & 0xffff;
  pRVar6->command = pRVar2 + 2;
  pRVar6 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_VERTEX_DATA2F_M_x2;
  pRVar6->command[1] = (RsxCmd)(float)(dVar11 + dVar8);
  pRVar2 = pRVar6->command;
  pRVar2[2] = (RsxCmd)(float)(param_3 * dVar12 + dVar7);
  pRVar6->command = pRVar2 + 3;
  pRVar6 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_BEGIN_END_x1;
  pRVar2 = pRVar6->command;
  pRVar2[1] = 0;
  pRVar6->command = pRVar2 + 2;
  return;
}



//==== 000d7f88  ns=hud  size=0x39c
// sig: undefined Hud_DrawTexQuadF_v4(void)
// callers(3): 000d8328 hud::Hud_DrawTexQuadF_v4_Fixed; 000e0e60 main::startLevel; 0014bf78 pause::MenuIconText_Draw
// callees(2): 004d6948 idol_draw::ResetPassState; 004d6d00 idol_draw::SetTextureUnitRegs

void hud::Hud_DrawTexQuadF_v4
               (double param_1,double param_2,double param_3,double param_4,double param_5)

{
  float fVar1;
  RsxCmd *pRVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  RenderingStep *pRVar6;
  RsxCmd in_r8;
  ulonglong in_r9;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 local_80 [48];
  
  fVar1 = (float)(param_5 + 1.570796251296997);
  dVar8 = (double)(float)(3.141592502593994 - param_5);
  if (param_5 - (double)(float)(3.141592502593994 - param_5) < 0.0) {
    dVar8 = param_5;
  }
  fVar3 = 3.1415925 - fVar1;
  if (fVar1 - (3.1415925 - fVar1) < 0.0) {
    fVar3 = fVar1;
  }
  dVar10 = (double)(float)(-3.141592502593994 - param_5);
  if ((double)(float)(-3.141592502593994 - param_5) - dVar8 < 0.0) {
    dVar10 = dVar8;
  }
  dVar8 = (double)(float)(dVar10 * dVar10);
  fVar4 = -3.1415925 - fVar1;
  if ((-3.1415925 - fVar1) - fVar3 < 0.0) {
    fVar4 = fVar3;
  }
  fVar5 = fVar4 * fVar4;
  dVar9 = (double)(float)(dVar8 * (double)(float)(dVar8 * dVar10));
  dVar7 = (double)(float)(dVar8 * dVar9);
  fVar1 = fVar5 * fVar5 * fVar4;
  fVar3 = fVar5 * fVar1;
  dVar12 = (double)((float)(dVar8 * dVar7) * 2.601887e-06 +
                   (float)(dVar7 * -0.0001980741071747616 +
                          (double)(float)(dVar9 * 0.008333025500178337 +
                                         (double)(float)((double)(float)(dVar8 * dVar10) *
                                                         -0.16666656732559204 + dVar10))));
  dVar8 = (double)(fVar5 * fVar3 * 2.601887e-06 +
                  fVar3 * -0.0001980741 + fVar1 * 0.0083330255 + fVar5 * fVar4 * -0.16666657 + fVar4
                  );
  dVar11 = (double)(float)(param_4 * dVar12 + param_1);
  dVar9 = -(double)(float)(param_4 * dVar12 - param_1);
  dVar7 = (double)(float)(param_4 * dVar8 + param_2);
  dVar10 = -(double)(float)(param_4 * dVar8 - param_2);
  dVar8 = -(double)(float)(param_3 * dVar8);
  idol_draw::SetTextureUnitRegs(HUD_Pass,0,local_80);
  idol_draw::ResetPassState(HUD_Pass);
  pRVar6 = HUD_Pass;
  *HUD_Pass->command = 0x41948;
  pRVar2 = pRVar6->command;
  pRVar2[1] = 0x80808080;
  pRVar6->command = pRVar2 + 2;
  pRVar6 = HUD_Pass;
  *HUD_Pass->command = 0x400c1714;
  pRVar6->command[1] = 0;
  pRVar6->command[2] = 0;
  pRVar6->command[3] = 0;
  pRVar6->command[4] = NV4097_SET_BEGIN_END_x1;
  pRVar2 = pRVar6->command;
  pRVar2[5] = 8;
  pRVar6->command = pRVar2 + 6;
  pRVar6 = HUD_Pass;
  *HUD_Pass->command = 0x41904;
  pRVar2 = pRVar6->command;
  pRVar2[1] = in_r8 & 0xffff;
  pRVar6->command = pRVar2 + 2;
  pRVar6 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_VERTEX_DATA2F_M_x2;
  pRVar6->command[1] = (RsxCmd)(float)(dVar11 - dVar8);
  pRVar2 = pRVar6->command;
  pRVar2[2] = (RsxCmd)-(float)(param_3 * dVar12 - dVar7);
  pRVar6->command = pRVar2 + 3;
  pRVar6 = HUD_Pass;
  *HUD_Pass->command = 0x41904;
  pRVar2 = pRVar6->command;
  pRVar2[1] = 0;
  pRVar6->command = pRVar2 + 2;
  pRVar6 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_VERTEX_DATA2F_M_x2;
  pRVar6->command[1] = (RsxCmd)(float)(dVar9 - dVar8);
  pRVar2 = pRVar6->command;
  pRVar2[2] = (RsxCmd)-(float)(param_3 * dVar12 - dVar10);
  pRVar6->command = pRVar2 + 3;
  pRVar6 = HUD_Pass;
  *HUD_Pass->command = 0x41904;
  pRVar2 = pRVar6->command;
  pRVar2[1] = (RsxCmd)((in_r9 & 0xffffffff) << 0x10);
  pRVar6->command = pRVar2 + 2;
  pRVar6 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_VERTEX_DATA2F_M_x2;
  pRVar6->command[1] = (RsxCmd)(float)(dVar9 + dVar8);
  pRVar2 = pRVar6->command;
  pRVar2[2] = (RsxCmd)(float)(param_3 * dVar12 + dVar10);
  pRVar6->command = pRVar2 + 3;
  pRVar6 = HUD_Pass;
  *HUD_Pass->command = 0x41904;
  pRVar2 = pRVar6->command;
  pRVar2[1] = (RsxCmd)((in_r9 & 0xffffffff) << 0x10) | in_r8 & 0xffff;
  pRVar6->command = pRVar2 + 2;
  pRVar6 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_VERTEX_DATA2F_M_x2;
  pRVar6->command[1] = (RsxCmd)(float)(dVar11 + dVar8);
  pRVar2 = pRVar6->command;
  pRVar2[2] = (RsxCmd)(float)(param_3 * dVar12 + dVar7);
  pRVar6->command = pRVar2 + 3;
  pRVar6 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_BEGIN_END_x1;
  pRVar2 = pRVar6->command;
  pRVar2[1] = 0;
  pRVar6->command = pRVar2 + 2;
  return;
}



//==== 000d8328  ns=hud  size=0x3c
// sig: undefined Hud_DrawTexQuadF_v4_Fixed(void)
// callers(1): 000e2e10 map::DrawMapFrame
// callees(1): 000d7f88 hud::Hud_DrawTexQuadF_v4

void hud::Hud_DrawTexQuadF_v4_Fixed(double param_1,double param_2,double param_3,double param_4)

{
  Hud_DrawTexQuadF_v4((double)(float)(param_1 * 0.0625),(double)(float)(param_2 * 0.0625),
                      (double)(float)(param_3 * 0.0625),(double)(float)(param_4 * 0.0625));
  return;
}



//==== 000d8364  ns=hud  size=0x2f4
// sig: undefined DrawSprite2(void)
// callers(2): 00144084 pause::DrawSoundOptionsFrame; 0014ad88 pause::DrawCameraSettingsFrame
// callees(2): 004d6948 idol_draw::ResetPassState; 004d6d00 idol_draw::SetTextureUnitRegs

void hud::DrawSprite2(longlong param_1,RsxCmd param_2,ulonglong param_3,RsxCmd param_4,
                     ulonglong param_5,RsxCmd param_6,ulonglong param_7,RsxCmd param_8)

{
  RenderingStep *pRVar1;
  int in_stack_00000074;
  int in_stack_0000007c;
  
  idol_draw::SetTextureUnitRegs
            (HUD_Pass,0,
             EffectTexHeaders + *(int *)(TexturePointerArray + (int)(param_1 << 2)) * 0x24);
  idol_draw::ResetPassState(HUD_Pass);
  pRVar1 = HUD_Pass;
  *HUD_Pass->command = 0x41948;
  pRVar1->command[1] = in_stack_0000007c << 0x18 | 0x808080;
  pRVar1->command = pRVar1->command + 2;
  pRVar1 = HUD_Pass;
  *HUD_Pass->command = 0x400c1714;
  pRVar1->command[1] = 0;
  pRVar1->command[2] = 0;
  pRVar1->command[3] = 0;
  pRVar1->command[4] = NV4097_SET_BEGIN_END_x1;
  pRVar1->command[5] = 8;
  pRVar1->command = pRVar1->command + 6;
  pRVar1 = HUD_Pass;
  *HUD_Pass->command = 0x41904;
  pRVar1->command[1] = (RsxCmd)((param_7 & 0xffffffff) << 0x10) | param_6 & 0xffff;
  pRVar1->command = pRVar1->command + 2;
  pRVar1 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_VERTEX_DATA2S_M_x1;
  pRVar1->command[1] = (RsxCmd)((param_3 & 0xffffffff) << 0x10) | param_2 & 0xffff;
  pRVar1->command = pRVar1->command + 2;
  pRVar1 = HUD_Pass;
  *HUD_Pass->command = 0x41904;
  pRVar1->command[1] = in_stack_00000074 << 0x10 | param_6 & 0xffff;
  pRVar1->command = pRVar1->command + 2;
  pRVar1 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_VERTEX_DATA2S_M_x1;
  pRVar1->command[1] = (RsxCmd)((param_5 & 0xffffffff) << 0x10) | param_2 & 0xffff;
  pRVar1->command = pRVar1->command + 2;
  pRVar1 = HUD_Pass;
  *HUD_Pass->command = 0x41904;
  pRVar1->command[1] = in_stack_00000074 << 0x10 | param_8 & 0xffff;
  pRVar1->command = pRVar1->command + 2;
  pRVar1 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_VERTEX_DATA2S_M_x1;
  pRVar1->command[1] = (RsxCmd)((param_5 & 0xffffffff) << 0x10) | param_4 & 0xffff;
  pRVar1->command = pRVar1->command + 2;
  pRVar1 = HUD_Pass;
  *HUD_Pass->command = 0x41904;
  pRVar1->command[1] = (RsxCmd)((param_7 & 0xffffffff) << 0x10) | param_8 & 0xffff;
  pRVar1->command = pRVar1->command + 2;
  pRVar1 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_VERTEX_DATA2S_M_x1;
  pRVar1->command[1] = (RsxCmd)((param_3 & 0xffffffff) << 0x10) | param_4 & 0xffff;
  pRVar1->command = pRVar1->command + 2;
  pRVar1 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_BEGIN_END_x1;
  pRVar1->command[1] = 0;
  pRVar1->command = pRVar1->command + 2;
  return;
}



//==== 000d8658  ns=stub  size=0x4
// sig: undefined STUB_000d8658(void)
// callers(0): 
// callees(0): 

void stub::STUB_000d8658(void)

{
  return;
}



//==== 000d865c  ns=hud  size=0x284
// sig: undefined Hud_DrawEffectTexLine(void)
// callers(1): 004d27b0 idol_draw::DrawGalacticMapFrame
// callees(3): 000685c4 draw::GetEffectTex; 004d6948 idol_draw::ResetPassState; 004d6d00 idol_draw::SetTextureUnitRegs

void hud::Hud_DrawEffectTexLine
               (RsxCmd param_1,ulonglong param_2,RsxCmd param_3,ulonglong param_4,ulonglong param_5,
               int param_6)

{
  RenderingStep *pRVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = EffectTexHeaders;
  iVar3 = draw::GetEffectTex(0x16);
  idol_draw::SetTextureUnitRegs(HUD_Pass,0,iVar2 + iVar3 * 0x24);
  idol_draw::ResetPassState(HUD_Pass);
  pRVar1 = HUD_Pass;
  *HUD_Pass->command = 0x41948;
  pRVar1->command[1] =
       (RsxCmd)((param_5 >> 8 & 0xff) << 8) |
       (RsxCmd)((param_5 >> 0x18 & 0xff) << 0x18) | (RsxCmd)((param_5 >> 0x10 & 0xff) << 0x10) |
       (RsxCmd)param_5 & 0xff;
  pRVar1->command = pRVar1->command + 2;
  pRVar1 = HUD_Pass;
  *HUD_Pass->command = 0x41904;
  pRVar1->command[1] = 0;
  pRVar1->command = pRVar1->command + 2;
  pRVar1 = HUD_Pass;
  *HUD_Pass->command = 0x400c1714;
  pRVar1->command[1] = 0;
  pRVar1->command[2] = 0;
  pRVar1->command[3] = 0;
  pRVar1->command[4] = NV4097_SET_BEGIN_END_x1;
  pRVar1->command[5] = 2;
  pRVar1->command = pRVar1->command + 6;
  pRVar1 = HUD_Pass;
  if (param_6 == 0) {
    *HUD_Pass->command = NV4097_SET_VERTEX_DATA2S_M_x1;
    pRVar1->command[1] = (RsxCmd)((param_2 - 8 & 0xffffffff) << 0x10) | param_1 - 8 & 0xffff;
    pRVar1->command = pRVar1->command + 2;
    pRVar1 = HUD_Pass;
    *HUD_Pass->command = NV4097_SET_VERTEX_DATA2S_M_x1;
    pRVar1->command[1] = (RsxCmd)((param_4 - 8 & 0xffffffff) << 0x10) | param_3 - 8 & 0xffff;
    pRVar1->command = pRVar1->command + 2;
  }
  else {
    *HUD_Pass->command = NV4097_SET_VERTEX_DATA2S_M_x1;
    pRVar1->command[1] = (RsxCmd)((param_2 & 0xffffffff) << 0x10) | param_1 & 0xffff;
    pRVar1->command = pRVar1->command + 2;
    pRVar1 = HUD_Pass;
    *HUD_Pass->command = NV4097_SET_VERTEX_DATA2S_M_x1;
    pRVar1->command[1] = (RsxCmd)((param_4 & 0xffffffff) << 0x10) | param_3 & 0xffff;
    pRVar1->command = pRVar1->command + 2;
  }
  pRVar1 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_BEGIN_END_x1;
  pRVar1->command[1] = 0;
  pRVar1->command = pRVar1->command + 2;
  return;
}



//==== 000d88e0  ns=stub  size=0x4
// sig: undefined STUB_000d88e0(void)
// callers(0): 
// callees(0): 

void stub::STUB_000d88e0(void)

{
  return;
}



//==== 000d88e4  ns=Global  size=0x14
// sig: undefined SECTION_HEADER_INITONCE(void)
// callers(0): 
// callees(0): 

void SECTION_HEADER_INITONCE(void)

{
  DAT_00724610 = 0x10000;
  return;
}



//==== 000d88f8  ns=stub  size=0x4
// sig: undefined STUB_000d88f8(void)
// callers(1): 00012ec8 boot::GameStart
// callees(0): 

void stub::STUB_000d88f8(void)

{
  return;
}



//==== 000d88fc  ns=initonce  size=0xd4
// sig: undefined ???_Unused_InitOnce_RunSysCallWait(void)
// callers(0): 
// callees(5): 0050315c stub::FUN_0050315c_RET_0; 00503164 FUN_00503164; 005031a8 FUN_005031a8; 005031bc FUN_005031bc; 00503214 FUN_00503214

ulonglong initonce::____Unused_InitOnce_RunSysCallWait(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  ulonglong uVar4;
  undefined1 local_30 [16];
  
  uVar4 = 1;
  uVar1 = FUN_005031a8(param_2);
  uVar2 = FUN_005031bc(local_30,1);
  if ((int)uVar2 != 0) {
    do {
      iVar3 = stub::FUN_0050315c_RET_0(uVar2);
    } while (-1 < iVar3);
    uVar4 = FUN_00503164(uVar1,0,0);
    FUN_00503214(uVar1);
    uVar4 = uVar4 >> 0x3f ^ 1;
  }
  return uVar4;
}



//==== 000d89d0  ns=initonce  size=0x218
// sig: undefined InitMemSlots(void)
// callers(3): 00011b74 boot::Load_Front_End; 00163aa0 space::SpaceTransition_LoadWad; 004d3044 FUN_004d3044
// callees(6): 004fe098 idol::AllocateMemAlign; 004fe27c FUN_004fe27c; 004fe39c FUN_004fe39c; 004fe5ec FUN_004fe5ec; 004fe61c FUN_004fe61c; 0050436c FUN_0050436c
// strings: 006521ac: 'MemSlots'

void initonce::InitMemSlots(void)

{
  void *pvVar1;
  undefined8 uVar2;
  undefined4 *puVar4;
  undefined8 uVar3;
  undefined4 *puVar5;
  
  pvVar1 = boot::g_pGame;
  if (DAT_00724634 == '\0') {
    uVar2 = FUN_0050436c(boot::g_pGame);
    puVar4 = (undefined4 *)FUN_004fe27c(0x24,uVar2,0x10);
    puVar5 = (undefined4 *)0x0;
    if (puVar4 != (undefined4 *)0x0) {
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4[2] = 0;
      puVar4[3] = 0;
      *(undefined1 *)(puVar4 + 4) = 0;
      *(undefined1 *)((int)puVar4 + 0x11) = 0;
      puVar4[5] = 0;
      puVar4[7] = 0;
      puVar4[6] = &DAT_0066173c;
      puVar4[8] = 0;
      puVar5 = puVar4;
    }
    MemSlots_IMSeqMem_descriptor = puVar5;
    uVar2 = idol::AllocateMemAlign(uVar2,&DAT_00ec4080,0x10);
    uVar3 = FUN_0050436c(pvVar1);
    FUN_004fe39c(puVar5,uVar2,&DAT_00ec4080,"MemSlots",0,uVar3);
    DAT_00724634 = '\x01';
  }
  FUN_004fe61c(MemSlots_IMSeqMem_descriptor,*MemSlots_IMSeqMem_descriptor);
  DAT_00a108d8 = FUN_004fe5ec(MemSlots_IMSeqMem_descriptor);
  DAT_00a108e4 = idol::AllocateMemAlign(MemSlots_IMSeqMem_descriptor,0x64000,0x80);
  DAT_00a108e8 = idol::AllocateMemAlign(MemSlots_IMSeqMem_descriptor,0x60000,0x80);
  DAT_00a108ec = idol::AllocateMemAlign(MemSlots_IMSeqMem_descriptor,0x200000,0x80);
  Gameplay = DAT_00a108ec;
  loaders::g_NpcBuffer = idol::AllocateMemAlign(MemSlots_IMSeqMem_descriptor,0x800000,0x80);
  DAT_00a1090c = idol::AllocateMemAlign(MemSlots_IMSeqMem_descriptor,0x100000,0x80);
  DAT_00a10910 = idol::AllocateMemAlign(MemSlots_IMSeqMem_descriptor,0x100000,0x80);
  DAT_00a10914 = idol::AllocateMemAlign(MemSlots_IMSeqMem_descriptor,0x100000,0x80);
  return;
}



//==== 000d8be8  ns=initonce  size=0x7c0
// sig: undefined InitOnce(void)
// callers(2): 00012ec8 boot::GameStart; 000e0e60 main::startLevel
// callees(43): 0004fdc0 bloaders::LoadDebugFont; 00065670 draw::ResetFrameBufferInfo; 000668d0 draw::UpdateViewContext; 00068160 draw::InitViewContext; 000720a0 draw::InitAlphaPal; 000e7ac8 memcard::memcard_InitSaveMsg; 000e9138 stub::STUB_000e9138; 000e9150 stub::STUB_000e9150; 0011e3c0 pad::pad_Init; 0013d22c pause::InitMenuTextIds; 0015bc00 sound::sound_Init; 001655a0 stub::STUB_001655a0; 00174bd8 stub::STUB_00174bd8; 00174c24 vuchain::VU1_initChain; 004d04c0 stub::STUB_004d04c0; 004d04c8 stub::STUB_004d04c8; 004d04d0 stub::STUB_004d04d0; 004fe098 idol::AllocateMemAlign; 004fe27c FUN_004fe27c; 004fe39c FUN_004fe39c; 004fe5ec FUN_004fe5ec; 004fe61c FUN_004fe61c; 005001fc fastfunc::FastMemSet; 0050306c stub::sceGsExecLoadImage; 00503070 stub::STUB_00503070; 00503074 stub::sceGsSyncPath; 0050307c stub::STUB_0050307c; 00503080 stub::STUB_00503080; 00503084 stub::sceGsSetDefLoadImage; 00503114 stub::STUB_00503114; 00503118 stub::STUB_00503118; 005031a4 stub::STUB_005031a4; 005031f8 stub::STUB_005031f8; 005031fc stub::STUB_005031fc; 00503204 stub::STUB_00503204; 00503208 stub::STUB_00503208; 00503218 stub::STUB_00503218; 0050321c stub::STUB_0050321c; 00503244 stub::FlushCache; 0050436c FUN_0050436c
// strings: 006521b8: 'loaded irx modules\n' | 006521ac: 'MemSlots' | 006521d0: 'Unsupported language.  Going to English\n'

void initonce::InitOnce(void)

{
  void *pvVar1;
  void *pvVar2;
  undefined8 uVar3;
  undefined4 *puVar5;
  undefined8 uVar4;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined1 auStack_30 [8];
  
  pvVar1 = boot::g_pGame;
  if (g_HasInited == 0) {
    return;
  }
  g_HasInited = 0;
  stub::STUB_00503080();
  stub::STUB_00503070(1);
  stub::STUB_005031a4(1);
  stub::STUB_0050321c(0);
  stub::STUB_00503114();
  stub::STUB_00503218();
  stub::STUB_00503118();
  stub::STUB_005031fc(6);
  stub::STUB_005031f8(0);
  stub::STUB_00503204();
  cell::cellSysutilCheckCallback();
  stub::STUB_0050307c(0,0xb,((LZCOUNT(-Cutscene) << 0x3a) >> 0x3f) + 0xd,9);
  stub::STUB_000e9138();
  draw::ResetFrameBufferInfo();
  stub::STUB_00174bd8(&DAT_00a10690);
  stub::STUB_004d04c8();
  iVar8 = (DAT_010ea104 & 0x1fffff) * -0x800 + 0x10000000;
  stub::STUB_004d04c0(DAT_010ea100,DAT_010ea104,iVar8);
  cell::cellSysutilCheckCallback();
  stub::FlushCache(0);
  stub::STUB_000e9150(iVar8,&DAT_00cd4000);
  stub::FlushCache(0);
  libc::printf("loaded irx modules\n");
  stub::STUB_005031f8(0);
  pad::pad_Init();
  stub::STUB_00503208(&PTR_____Unused_Respawn_IncCounter_a53504_00707950);
  pvVar2 = boot::g_pGame;
  DAT_00e5aa64 = 0x160000;
  if (DAT_00724634 == '\0') {
    uVar3 = FUN_0050436c(boot::g_pGame);
    puVar5 = (undefined4 *)FUN_004fe27c(0x24,uVar3,0x10);
    puVar7 = (undefined4 *)0x0;
    if (puVar5 != (undefined4 *)0x0) {
      *puVar5 = 0;
      puVar5[1] = 0;
      puVar5[2] = 0;
      puVar5[3] = 0;
      *(undefined1 *)(puVar5 + 4) = 0;
      *(undefined1 *)((int)puVar5 + 0x11) = 0;
      puVar5[5] = 0;
      puVar5[6] = &DAT_0066173c;
      puVar5[7] = 0;
      puVar5[8] = 0;
      puVar7 = puVar5;
    }
    MemSlots_IMSeqMem_descriptor = puVar7;
    uVar3 = idol::AllocateMemAlign(uVar3,&DAT_00ec4080,0x10);
    uVar4 = FUN_0050436c(pvVar2);
    FUN_004fe39c(puVar7,uVar3,&DAT_00ec4080,"MemSlots",0,uVar4);
    DAT_00724634 = '\x01';
  }
  FUN_004fe61c(MemSlots_IMSeqMem_descriptor,*MemSlots_IMSeqMem_descriptor);
  DAT_00a108d8 = FUN_004fe5ec(MemSlots_IMSeqMem_descriptor);
  DAT_00a108e4 = idol::AllocateMemAlign(MemSlots_IMSeqMem_descriptor,0x64000,0x80);
  DAT_00a108e8 = idol::AllocateMemAlign(MemSlots_IMSeqMem_descriptor,0x60000,0x80);
  DAT_00a108ec = idol::AllocateMemAlign(MemSlots_IMSeqMem_descriptor,0x200000,0x80);
  Gameplay = DAT_00a108ec;
  loaders::g_NpcBuffer = idol::AllocateMemAlign(MemSlots_IMSeqMem_descriptor,0x800000,0x80);
  DAT_00a1090c = idol::AllocateMemAlign(MemSlots_IMSeqMem_descriptor,0x100000,0x80);
  DAT_00a10910 = idol::AllocateMemAlign(MemSlots_IMSeqMem_descriptor,0x100000,0x80);
  DAT_00a10914 = idol::AllocateMemAlign(MemSlots_IMSeqMem_descriptor,0x100000,0x80);
  stub::STUB_005031f8(0);
  cell::cellSysutilCheckCallback();
  stub::STUB_004d04d0(Level);
  draw::InitViewContext();
  draw::UpdateViewContext();
  vuchain::VU1_initChain();
  stub::STUB_005031f8(0);
  sound::sound_Init();
  fastfunc::FastMemSet(&collproc::g_CollMobyJointCache,0xffffffff80808080,0x100);
  stub::sceGsSetDefLoadImage(auStack_30,0x3ffb,1,0x12,0,0,8,8);
  stub::FlushCache(0);
  stub::sceGsExecLoadImage(auStack_30,&collproc::g_CollMobyJointCache);
  stub::sceGsSyncPath(0,0);
  bloaders::LoadDebugFont();
  puVar7 = DAT_00927200;
  *DAT_00927204 = 0x82;
  *puVar7 = 0;
  stub::STUB_001655a0();
  draw::InitAlphaPal();
  cell::cellSysutilCheckCallback();
                    /* WARNING: Load size is inaccurate */
  iVar6 = (*(code *)**(undefined4 **)(*boot::g_pGame + 0xc))();
  iVar8 = *(int *)((int)boot::g_pHWSystem + 0xc0);
  if (iVar8 == 1) {
    if (iVar6 == 5) {
      g_Language = 5;
    }
    else if (iVar6 == 4) {
      g_Language = 3;
    }
    else if (iVar6 == 3) {
      g_Language = 4;
    }
    else if (iVar6 == 2) {
      g_Language = 2;
    }
    else {
      if (iVar6 != 1) {
        libc::printf("Unsupported language.  Going to English\n");
      }
      g_Language = 0;
      DAT_0159c350 = 0;
      g_JapaneseMode = false;
    }
  }
  if (iVar8 != 0) goto japanese_mode;
  if (iVar6 < 2) {
    if (iVar6 < 1) goto LAB_000d91dc;
  }
  else {
    if (iVar6 < 3) {
      g_Language = 2;
      goto japanese_mode;
    }
    if (iVar6 < 4) {
      g_Language = 4;
      goto japanese_mode;
    }
LAB_000d91dc:
    libc::printf("Unsupported language.  Going to English\n");
  }
  g_Language = 0;
  DAT_0159c350 = 0;
  g_JapaneseMode = false;
japanese_mode:
  if (iVar8 == 3) {
    g_Language = 6;
    DAT_0159c350 = 0;
    g_JapaneseMode = true;
  }
  cell::cellSysutilCheckCallback();
  uVar3 = FUN_0050436c(pvVar1);
  boot::g_pLocaleBuffer = (int *)idol::AllocateMemAlign(uVar3,0x40000,0x80);
  uVar3 = FUN_0050436c(pvVar1);
  DAT_00a10920 = idol::AllocateMemAlign(uVar3,0x300000,0x80);
  uVar3 = FUN_0050436c(pvVar1);
  SaveDataPtr = idol::AllocateMemAlign(uVar3,0x300000,0x80);
  iVar8 = (int)pvVar1 + 0x7c;
  DAT_00a10924 = idol::AllocateMemAlign(iVar8,0x300000,0x80);
  DAT_00a10930 = idol::AllocateMemAlign(iVar8,0x100000,0x80);
  DAT_00a2080c = 0;
  DAT_00a20810 = idol::AllocateMemAlign(iVar8,0x300000,0x80);
  DAT_00a20814 = idol::AllocateMemAlign(iVar8,0x40000,0x80);
  DAT_00a20818 = 0;
  DAT_00a2081c = 0;
  uVar3 = FUN_0050436c(pvVar1);
  map::g_MapRevealMask = idol::AllocateMemAlign(uVar3,0x8000,0x20);
  g_totalBoltsCollected = 0;
  DAT_0096ca08 = 0;
  uVar3 = FUN_0050436c(pvVar1);
  FUN_00508578(&TEX_BASE,uVar3,iVar8);
  memcard::memcard_InitSaveMsg();
  pause::InitMenuTextIds();
  return;
}



//==== 000d93a8  ns=Global  size=0x14
// sig: undefined SECTION_HEADER_INITSKY(void)
// callers(0): 
// callees(0): 

void SECTION_HEADER_INITSKY(void)

{
  DAT_00724684 = 0x10000;
  return;
}



//==== 000d93c0  ns=initsky  size=0x28c
// sig: undefined InitSky(void)
// callers(1): 0006bb78 draw::DefaultDraw
// callees(28): 00153c60 skyfunc::SkyLevelNone; 00153e00 skyfunc::SkyLevel_00; 00154208 skyfunc::SkyLevel_01; 001545b8 skyfunc::SkyLevel_02; 00154e28 skyfunc::SkyLevel_03; 00155198 skyfunc::SkyLevel_04; 001554a0 skyfunc::SkyLevel_05; 00155788 skyfunc::SkyLevel_06; 00156148 skyfunc::SkyLevel_07; 00156550 skyfunc::SkyLevel_08; 00156840 skyfunc::SkyLevel_09; 00156bd8 skyfunc::SkyLevel_10; 00157030 skyfunc::SkyLevel_11; 001573d0 skyfunc::SkyLevel_12; 0015774c skyfunc::SkyLevel_13; 00157a30 skyfunc::SkyLevel_14; 00157d98 skyfunc::SkyLevel_15; 001580b8 skyfunc::SkyLevel_16; 00158460 skyfunc::SkyLevel_17; 00158c70 skyfunc::SkyLevel_18; 00159118 skyfunc::SkyLevel_19; 00159e54 stub::DoSkyGifPaging; 00159e58 stub::SetupGifPaging; 00174f80 vuchain::SetGSReg; 00502f7c idol_draw::Blend; 00502ffc stub::VU1_addGSregister; 0050eaf8 idol_draw::RsxCmd_DebugStr_Marker; 0050ec5c idol_draw::RsxCmd_WritePass
// strings: 00652204: 'Sky'

void initsky::InitSky(void)

{
  undefined8 uVar1;
  
  idol_draw::RsxCmd_DebugStr_Marker(ForwardPass,"Sky");
  stub::SetupGifPaging();
  if ((int)Level < 10) {
    if (3 < (int)Level) {
      if ((int)Level < 7) {
        if ((int)Level < 5) {
          skyfunc::SkyLevel_04();
        }
        else if ((int)Level < 6) {
          skyfunc::SkyLevel_05();
        }
        else {
          skyfunc::SkyLevel_06();
        }
      }
      else if ((int)Level < 8) {
        skyfunc::SkyLevel_07();
      }
      else if ((int)Level < 9) {
        skyfunc::SkyLevel_08();
      }
      else {
        skyfunc::SkyLevel_09();
      }
      goto LAB_000d95bc;
    }
    if (0 < (int)Level) {
      if ((int)Level < 2) {
        skyfunc::SkyLevel_01();
      }
      else if ((int)Level < 3) {
        skyfunc::SkyLevel_02();
      }
      else {
        skyfunc::SkyLevel_03();
      }
      goto LAB_000d95bc;
    }
    if (-1 < (int)Level) {
      skyfunc::SkyLevel_00();
      goto LAB_000d95bc;
    }
  }
  else {
    if ((int)Level < 0xf) {
      if ((int)Level < 0xc) {
        if ((int)Level < 0xb) {
          skyfunc::SkyLevel_10();
        }
        else {
          skyfunc::SkyLevel_11();
        }
      }
      else if ((int)Level < 0xd) {
        skyfunc::SkyLevel_12();
      }
      else if ((int)Level < 0xe) {
        skyfunc::SkyLevel_13();
      }
      else {
        skyfunc::SkyLevel_14();
      }
      goto LAB_000d95bc;
    }
    if ((int)Level < 0x12) {
      if ((int)Level < 0x10) {
        skyfunc::SkyLevel_15();
      }
      else if ((int)Level < 0x11) {
        skyfunc::SkyLevel_16();
      }
      else {
        skyfunc::SkyLevel_17();
      }
      goto LAB_000d95bc;
    }
    if ((int)Level < 0x13) {
      skyfunc::SkyLevel_18();
      goto LAB_000d95bc;
    }
    if ((int)Level < 0x14) {
      skyfunc::SkyLevel_19();
      goto LAB_000d95bc;
    }
  }
  skyfunc::SkyLevelNone();
LAB_000d95bc:
  stub::DoSkyGifPaging();
  uVar1 = idol_draw::Blend(1,5,0x60,3,0,0,1,2);
  vuchain::SetGSReg(0x16,uVar1);
  uVar1 = stub::VU1_addGSregister(GSmem.zbuf >> 0xd,1,0);
  vuchain::SetGSReg(0x21,uVar1);
  idol_draw::RsxCmd_WritePass(ForwardPass);
  return;
}



//==== 000d9668  ns=initsky  size=0x558
// sig: undefined DrawSceneShipEffect(void)
// callers(0): 
// callees(7): 000685c4 draw::GetEffectTex; 00072280 draw::FastDrawQuad; 000f1038 mobyfunc::GetBoneTransformations; 001113e0 mobyutil::MB_RotateQuatAxisAngle; 00502ea8 idol_draw::PackCmd; 00502f08 FUN_00502f08; 00502fd4 stub::STUB_00502fd4_RET_0

void initsky::DrawSceneShipEffect(undefined8 param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  ulonglong *puVar6;
  int iVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  float *outQuat;
  longlong lVar14;
  longlong lVar15;
  int iVar16;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  ulonglong in_f24;
  ulonglong in_f25;
  double dVar22;
  ulonglong in_f26;
  ulonglong in_f27;
  ulonglong in_f28;
  double dVar23;
  ulonglong in_f29;
  double dVar24;
  ulonglong in_f30;
  ulonglong in_f31;
  double dVar25;
  
  uVar9 = ZEXT48(&stack0x00000000);
  lVar15 = uVar9 - 0x1b0;
  puVar6 = (ulonglong *)lVar15;
  *puVar6 = uVar9;
  puVar6[0x38] = in_LR;
  puVar6[0x2e] = in_f24;
  puVar6[0x2f] = in_f25;
  puVar6[0x30] = in_f26;
  puVar6[0x31] = in_f27;
  puVar6[0x32] = in_f28;
  puVar6[0x33] = in_f29;
  puVar6[0x34] = in_f30;
  puVar6[0x35] = in_f31;
  puVar6[0x2d] = unaff_r31;
  puVar6[0x2c] = unaff_r30;
  puVar6[0x2b] = unaff_r29;
  puVar6[0x2a] = unaff_r28;
  puVar6[0x29] = unaff_r27;
  puVar6[0x28] = unaff_r26;
  uVar10 = draw::GetEffectTex(0xe);
  uVar11 = stub::STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  uVar12 = FUN_00502f08(1,1,0,0,0,0);
  uVar13 = idol_draw::PackCmd(0,2,0,1,0x80);
  puVar6[0x25] = uVar10;
  *(undefined4 *)(puVar6 + 0x1e) = 0x3ff08080;
  *(undefined4 *)((int)puVar6 + 0xf4) = 0x3ff08080;
  *(undefined4 *)(puVar6 + 0x1f) = 0x3ff08030;
  *(undefined4 *)((int)puVar6 + 0xfc) = 0x3ff08030;
  puVar6[0x26] = uVar11;
  puVar6[0x24] = uVar12;
  puVar6[0x27] = uVar13;
  dVar17 = 0.0;
  *(undefined4 *)(puVar6 + 0x20) = 0;
  *(undefined4 *)((int)puVar6 + 0x104) = 0;
  dVar25 = 1.0;
  *(undefined4 *)(puVar6 + 0x21) = 0x3f800000;
  *(undefined4 *)((int)puVar6 + 0x10c) = 0;
  *(undefined4 *)(puVar6 + 0x22) = 0;
  *(undefined4 *)((int)puVar6 + 0x114) = 0x3f800000;
  *(undefined4 *)(puVar6 + 0x23) = 0x3f800000;
  *(undefined4 *)((int)puVar6 + 0x11c) = 0x3f800000;
  mobyfunc::GetBoneTransformations(param_1,0,uVar9 - 0x140);
  outQuat = (float *)(uVar9 - 0x140);
  mobyutil::MB_RotateQuatAxisAngle(-0.34906584,outQuat,outQuat);
  dVar22 = (double)*(float *)(puVar6 + 0xf);
  fVar5 = *(float *)((int)puVar6 + 0x74);
  dVar23 = (double)fVar5;
  dVar18 = (double)*(float *)(puVar6 + 0xe);
  *(undefined4 *)((int)puVar6 + 0x8c) = 0;
  fVar2 = (float)((double)*(float *)(puVar6 + 0x13) * dVar18 -
                 (double)(float)((double)*(float *)(puVar6 + 0x12) * dVar22));
  fVar3 = (float)((double)*(float *)((int)puVar6 + 0x94) * dVar22 -
                 (double)(float)((double)*(float *)(puVar6 + 0x13) * dVar23));
  fVar4 = (float)((double)*(float *)(puVar6 + 0x12) * dVar23 -
                 (double)(float)((double)*(float *)((int)puVar6 + 0x94) * dVar18));
  dVar21 = (double)(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
  dVar19 = dVar17;
  dVar20 = dVar17;
  if ((double)(float)SQRT(dVar21) != dVar17) {
    dVar19 = 1.0 / SQRT(dVar21);
    dVar19 = (double)(float)(-(double)(float)((double)(float)(dVar21 * dVar19) * dVar19 - dVar25) *
                             (double)(float)(dVar19 * 0.5) + dVar19);
    dVar19 = (double)(float)(-(double)(float)((double)(float)(dVar21 * dVar19) * dVar19 - dVar25) *
                             (double)(float)(dVar19 * 0.5) + dVar19);
    fVar1 = (float)(-(double)(float)((double)(float)(dVar21 * dVar19) * dVar19 - dVar25) *
                    (double)(float)(dVar19 * 0.5) + dVar19);
    dVar20 = (double)(fVar3 * fVar1);
    dVar19 = (double)(fVar2 * fVar1);
    dVar17 = (double)(fVar4 * fVar1);
  }
  *(float *)(puVar6 + 0x10) = (float)dVar20;
  *(float *)((int)puVar6 + 0x84) = (float)dVar19;
  *(float *)(puVar6 + 0x11) = (float)dVar17;
  dVar21 = (double)(float)(dVar22 + dVar22);
  dVar25 = (double)(float)(dVar23 + dVar23);
  *(undefined4 *)((int)puVar6 + 0x9c) = 0;
  *(undefined4 *)((int)puVar6 + 0xac) = 0x3f800000;
  *(float *)(puVar6 + 0x12) = (float)(dVar23 * dVar17 - (double)(float)(dVar22 * dVar19));
  *(float *)((int)puVar6 + 0x94) = (float)(dVar22 * dVar20 - (double)(float)(dVar18 * dVar17));
  *(float *)(puVar6 + 0x13) = (float)(dVar18 * dVar19 - (double)(float)(dVar23 * dVar20));
  dVar18 = 0.25;
  *(undefined4 *)((int)puVar6 + 0xb4) = 0;
  *(undefined4 *)(puVar6 + 0x16) = 0;
  *(undefined4 *)(puVar6 + 0x17) = 0;
  *(undefined4 *)((int)puVar6 + 0xbc) = 0x3f800000;
  *(float *)((int)puVar6 + 0xc4) = fVar5;
  *(undefined4 *)(puVar6 + 0x18) = 0x3f800000;
  dVar17 = -0.25;
  *(undefined4 *)((int)puVar6 + 0xcc) = 0x3f800000;
  dVar20 = (double)(float)(dVar22 + -0.25);
  *(undefined4 *)(puVar6 + 0x1a) = 0;
  dVar19 = (double)(float)(dVar22 + 0.25);
  *(undefined4 *)((int)puVar6 + 0xdc) = 0x3f800000;
  *(undefined4 *)((int)puVar6 + 0xd4) = 0;
  *(undefined4 *)(puVar6 + 0x1c) = 0x3f800000;
  *(undefined4 *)(puVar6 + 0x1b) = 0;
  *(undefined4 *)((int)puVar6 + 0xec) = 0x3f800000;
  *(float *)((int)puVar6 + 0xe4) = fVar5;
  uVar8 = EffectTexHeaders;
  *(float *)(puVar6 + 0x19) = (float)(dVar22 + -0.25);
  *(float *)(puVar6 + 0x1d) = (float)(dVar22 + 0.25);
  draw::FastDrawQuad(uVar9 - 0x100,uVar9 - 0x140,1,uVar8,9);
  uVar8 = EffectTexHeaders;
  iVar16 = 1;
  lVar14 = uVar9 - 0x1a0;
  do {
    iVar7 = (int)lVar14;
    if (iVar16 < 2) {
      fVar2 = *(float *)(iVar7 + 0xb4);
      fVar3 = *(float *)(iVar7 + 0xb8);
      dVar22 = dVar17;
      dVar24 = dVar18;
    }
    else {
      fVar2 = *(float *)(iVar7 + 0xb4);
      fVar3 = *(float *)(iVar7 + 0xb8);
      dVar22 = dVar18;
      dVar24 = dVar17;
    }
    iVar16 = iVar16 + 2;
    *(float *)(iVar7 + 0xb8) = (float)((double)fVar3 + dVar24);
    *(float *)(iVar7 + 0xb4) = (float)((double)fVar2 + dVar22);
    lVar14 = lVar14 + 0x20;
  } while (iVar16 < 4);
  draw::FastDrawQuad(uVar9 - 0x100,uVar9 - 0x140,1,uVar8,9);
  dVar24 = (double)(float)(dVar21 + dVar17);
  *(float *)((int)puVar6 + 0xb4) = (float)dVar23;
  *(float *)((int)puVar6 + 0xd4) = (float)dVar23;
  dVar22 = (double)(float)(dVar21 + dVar18);
  *(undefined4 *)(puVar6 + 0x16) = 0x3f800000;
  *(undefined4 *)((int)puVar6 + 0xbc) = 0x3f800000;
  *(undefined4 *)(puVar6 + 0x18) = 0x40000000;
  *(float *)(puVar6 + 0x17) = (float)dVar20;
  *(float *)((int)puVar6 + 0xc4) = (float)dVar25;
  *(undefined4 *)((int)puVar6 + 0xcc) = 0x3f800000;
  *(undefined4 *)(puVar6 + 0x1a) = 0x3f800000;
  *(undefined4 *)((int)puVar6 + 0xdc) = 0x3f800000;
  *(undefined4 *)(puVar6 + 0x1c) = 0x40000000;
  *(float *)(puVar6 + 0x19) = (float)(dVar21 + dVar17);
  *(float *)(puVar6 + 0x1b) = (float)dVar19;
  *(undefined4 *)((int)puVar6 + 0xec) = 0x3f800000;
  *(float *)((int)puVar6 + 0xe4) = (float)dVar25;
  uVar8 = EffectTexHeaders;
  *(float *)(puVar6 + 0x1d) = (float)(dVar21 + dVar18);
  draw::FastDrawQuad(uVar9 - 0x100,uVar9 - 0x140,1,uVar8,9);
  uVar8 = EffectTexHeaders;
  iVar16 = 0;
  lVar14 = lVar15;
  do {
    iVar7 = (int)lVar14;
    if (iVar16 < 2) {
      fVar2 = *(float *)(iVar7 + 0xb4);
      fVar3 = *(float *)(iVar7 + 0xb8);
      dVar19 = dVar17;
      dVar20 = dVar18;
    }
    else {
      fVar2 = *(float *)(iVar7 + 0xb4);
      fVar3 = *(float *)(iVar7 + 0xb8);
      dVar19 = dVar18;
      dVar20 = dVar17;
    }
    iVar16 = iVar16 + 1;
    *(float *)(iVar7 + 0xb8) = (float)((double)fVar3 + dVar20);
    *(float *)(iVar7 + 0xb4) = (float)((double)fVar2 + dVar19);
    lVar14 = lVar14 + 0x10;
  } while (iVar16 < 4);
  draw::FastDrawQuad(uVar9 - 0x100,uVar9 - 0x140,1,uVar8,9);
  *(undefined4 *)(puVar6 + 0x16) = 0x40000000;
  *(float *)((int)puVar6 + 0xb4) = (float)dVar25;
  *(undefined4 *)((int)puVar6 + 0xbc) = 0x3f800000;
  *(float *)(puVar6 + 0x17) = (float)dVar24;
  *(undefined4 *)(puVar6 + 0x18) = 0x40400000;
  *(undefined4 *)((int)puVar6 + 0xcc) = 0x3f800000;
  *(undefined4 *)(puVar6 + 0x19) = 0;
  *(undefined4 *)((int)puVar6 + 0xc4) = 0;
  *(undefined4 *)(puVar6 + 0x1a) = 0x40000000;
  *(undefined4 *)((int)puVar6 + 0xdc) = 0x3f800000;
  *(float *)((int)puVar6 + 0xd4) = (float)dVar25;
  *(undefined4 *)(puVar6 + 0x1c) = 0x40400000;
  *(float *)(puVar6 + 0x1b) = (float)dVar22;
  *(undefined4 *)((int)puVar6 + 0xec) = 0x3f800000;
  *(undefined4 *)((int)puVar6 + 0xe4) = 0;
  uVar8 = EffectTexHeaders;
  *(undefined4 *)(puVar6 + 0x1d) = 0;
  draw::FastDrawQuad(uVar9 - 0x100,uVar9 - 0x140,1,uVar8,9);
  uVar8 = EffectTexHeaders;
  iVar16 = 0;
  do {
    iVar7 = (int)lVar15;
    if (iVar16 < 2) {
      fVar2 = *(float *)(iVar7 + 0xb4);
      fVar3 = *(float *)(iVar7 + 0xb8);
      dVar19 = dVar17;
      dVar20 = dVar18;
    }
    else {
      fVar2 = *(float *)(iVar7 + 0xb4);
      fVar3 = *(float *)(iVar7 + 0xb8);
      dVar19 = dVar18;
      dVar20 = dVar17;
    }
    iVar16 = iVar16 + 2;
    *(float *)(iVar7 + 0xb8) = (float)((double)fVar3 + dVar20);
    *(float *)(iVar7 + 0xb4) = (float)((double)fVar2 + dVar19);
    lVar15 = lVar15 + 0x20;
  } while (iVar16 < 4);
  draw::FastDrawQuad(uVar9 - 0x100,uVar9 - 0x140,1,uVar8,9);
  return;
}



//==== 000d9bf8  ns=initsky  size=0x2d0
// sig: undefined SpawnSceneShipParticles(void)
// callers(1): 000d9ee8 initsky::UpdateSpaceSceneEffects
// callees(8): 000f1114 mobyfunc::GetBonePosition; 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 000fcc68 mobyutil::MB_randRot; 000fe4f0 mobyutil::MB_randRangeSigned; 000fe610 mobyutil::MB_SphericalToVector; 0012f8c0 partupd::SpawnPart_53; 00502758 fastfunc::FastDoubleToInt
// strings: 000d9bf0: '?333`'

void initsky::SpawnSceneShipParticles(undefined8 param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined8 uVar14;
  double dVar15;
  double dVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  double dVar19;
  double dVar20;
  float afStack_d0 [4];
  float local_c0;
  float local_bc;
  float local_b8;
  longlong local_b0;
  
  mobyfunc::GetBonePosition(param_1,0,&local_c0);
  dVar8 = 0.15000000596046448;
  dVar9 = 0.5;
  iVar3 = 0;
  dVar10 = 0.3490658402442932;
  dVar11 = 1.535889744758606;
  dVar12 = 0.05000000074505806;
  dVar13 = 0.20000000298023224;
  uVar14 = 0;
  dVar15 = 60.5;
  dVar16 = 0.10000000149011612;
  uVar17 = 0x3f826e9780000000;
  uVar18 = 0x4010000000000000;
  dVar19 = 0.07000000029802322;
  dVar20 = 0.699999988079071;
  do {
    dVar4 = (double)mobyutil::MB_randRangeFloat((float)dVar8,(float)dVar9);
    mobyutil::MB_randInt(2);
    dVar5 = (double)mobyutil::MB_randRot();
    dVar6 = (double)mobyutil::MB_randRangeFloat((float)dVar10,(float)dVar11);
    dVar7 = (double)mobyutil::MB_randRangeFloat((float)dVar12,(float)dVar13);
    mobyutil::MB_SphericalToVector
              ((float)(dVar7 * (double)DAT_0071f408),(float)dVar5,(float)dVar6,afStack_d0);
    dVar5 = (double)mobyutil::MB_randRangeSigned(uVar14,dVar8);
    local_c0 = (float)((double)local_c0 + dVar5);
    dVar5 = (double)mobyutil::MB_randRangeSigned(uVar14,dVar8);
    local_bc = (float)((double)local_bc + dVar5);
    dVar5 = (double)mobyutil::MB_randRangeSigned(uVar14,dVar8);
    local_b8 = (float)((double)local_b8 + dVar5);
    local_b0 = (longlong)(int)((double)animationSpeed * dVar15);
    iVar1 = partupd::SpawnPart_53
                      ((double)(float)(dVar4 * dVar16),dVar4,uVar17,&local_c0,
                       (int)((double)animationSpeed * dVar15));
    if (iVar1 != 0) {
      cVar2 = fastfunc::FastDoubleToInt(uVar18);
      *(char *)(iVar1 + 9) = cVar2 + 'p';
    }
    local_b0 = (longlong)(int)((double)animationSpeed * dVar15);
    iVar1 = partupd::SpawnPart_53
                      ((double)(float)(dVar4 * dVar19),(double)(float)(dVar4 * dVar20),uVar17,
                       &local_c0,(int)((double)animationSpeed * dVar15));
    if (iVar1 != 0) {
      cVar2 = fastfunc::FastDoubleToInt(uVar18);
      *(char *)(iVar1 + 9) = cVar2 + 'p';
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 4);
  return;
}



//==== 000d9ee8  ns=initsky  size=0x3f8
// sig: undefined UpdateSpaceSceneEffects(void)
// callers(1): 00168768 update::UpdateScene
// callees(9): 0006d720 RegisterFuncForMoby; 000d9bf8 initsky::SpawnSceneShipParticles; 000f1114 mobyfunc::GetBonePosition; 000fa3a8 mobyfunc::SetMobyLightFromBlender; 000fcbe8 mobyutil::MB_randRangeFloat; 000fcc68 mobyutil::MB_randRot; 000fe484 mobyutil::MB_randRange; 000fe610 mobyutil::MB_SphericalToVector; 00126dd8 partupd::SpawnPart_22

void initsky::UpdateSpaceSceneEffects(void)

{
  int iVar1;
  MobyInstance *moby;
  short sVar3;
  LevelId LVar2;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined8 uVar12;
  double dVar13;
  double dVar14;
  undefined1 auStack_90 [16];
  float local_80 [8];
  
  if (Level == Veldin) {
    iVar4 = 0;
    puVar6 = &DAT_0095cd50;
    sVar3 = boot::g_SpaceSceneMobyCnt._0_2_;
    if (0 < boot::g_SpaceSceneMobyCnt._0_2_) {
      do {
        if (((MobyInstance *)puVar6[0x5e])->oClass == VELDIN_SHIP) {
          RegisterFuncForMoby(&PTR_Space_DrawShipEffects_00707cd8,(MobyInstance *)puVar6[0x5e]);
          sVar3 = boot::g_SpaceSceneMobyCnt._0_2_;
        }
        iVar4 = iVar4 + 1;
        puVar6 = puVar6 + 1;
      } while (iVar4 < sVar3);
    }
  }
  LVar2 = Level;
  if (Level == Aridia) {
    iVar4 = 0;
    puVar6 = &DAT_0095cd50;
    sVar3 = boot::g_SpaceSceneMobyCnt._0_2_;
    if (0 < boot::g_SpaceSceneMobyCnt._0_2_) {
      do {
        iVar1 = puVar6[0x5e];
        if (*(short *)(iVar1 + 0xa6) == 0x1b1) {
          *(ushort *)(iVar1 + 0x34) = *(ushort *)(iVar1 + 0x34) | 0x800;
          sVar3 = boot::g_SpaceSceneMobyCnt._0_2_;
        }
        iVar4 = iVar4 + 1;
        puVar6 = puVar6 + 1;
      } while (iVar4 < sVar3);
    }
  }
  iVar4 = DAT_0095ced4;
  if ((((LVar2 == Kerwan) && (update::g_SceneId == 5)) &&
      ((int)(animationSpeed * 900.5) < boot::g_SpaceSceneFrame)) &&
     ((boot::g_SpaceSceneFrame < (int)(animationSpeed * 1100.5) && (DAT_0095ced4 != 0)))) {
    uVar5 = 0;
    dVar10 = 0.699999988079071;
    dVar11 = 2.200000047683716;
    uVar12 = 0x4101f1c000000000;
    dVar13 = 12.5;
    dVar14 = 35.5;
    do {
      mobyfunc::GetBonePosition
                (iVar4,uVar5 + (((int)uVar5 >> 1) + (uint)((int)uVar5 < 0 && (uVar5 & 1) != 0)) * -2
                 ,auStack_90);
      dVar7 = (double)mobyutil::MB_randRot();
      dVar8 = (double)mobyutil::MB_randRot();
      dVar9 = (double)mobyutil::MB_randRangeFloat
                                ((float)((double)mobyutil::g_FrameTime * dVar10),
                                 (float)((double)mobyutil::g_FrameTime * dVar11));
      mobyutil::MB_SphericalToVector((float)dVar9,(float)dVar7,(float)dVar8,local_80);
      mobyutil::MB_randRange
                ((int)((double)animationSpeed * dVar13),(int)((double)animationSpeed * dVar14));
      partupd::SpawnPart_22(uVar12,auStack_90,local_80,0xffffffff80808080,&DAT_00808080);
      uVar5 = uVar5 + 1;
      LVar2 = Level;
    } while ((int)uVar5 < 4);
  }
  if (((LVar2 == Umbris) && (update::g_SceneId == 4)) &&
     ((DAT_0095ced8 != (MobyInstance *)0x0 && (DAT_0095ced8->oClass == RED_SHIP)))) {
    RegisterFuncForMoby(&PTR_Space_DrawShipEffects_00707cd8,DAT_0095ced8);
    LVar2 = Level;
  }
  moby = DAT_0095cecc;
  if ((((LVar2 == Oltanis) && (update::g_SceneId == 0)) && (DAT_0095cecc != (MobyInstance *)0x0)) &&
     (boot::g_SpaceSceneFrame < 0x22 && 0x1b < boot::g_SpaceSceneFrame)) {
    SpawnSceneShipParticles(DAT_0095cecc);
    RegisterFuncForMoby(&PTR_DrawSceneShipEffect_007059a8,moby);
    LVar2 = Level;
  }
  if (LVar2 == Quartu) {
    puVar6 = &DAT_0095cd50;
    if (((update::g_SceneId == 3) || (update::g_SceneId == 4)) &&
       (iVar4 = 0, 0 < boot::g_SpaceSceneMobyCnt._0_2_)) {
      do {
        mobyfunc::SetMobyLightFromBlender((MobyInstance *)puVar6[0x5e]);
        iVar4 = iVar4 + 1;
        puVar6 = puVar6 + 1;
      } while (iVar4 < boot::g_SpaceSceneMobyCnt._0_2_);
    }
  }
  return;
}



//==== 000da2e0  ns=Global  size=0x14
// sig: undefined SECTION_HEADER_LIGHTS(void)
// callers(0): 
// callees(0): 

void SECTION_HEADER_LIGHTS(void)

{
  DAT_007246f4 = 0x10000;
  return;
}



//==== 000da2f8  ns=stub  size=0x8
// sig: undefined STUB_000da2f8_RET_0(void)
// callers(2): 000fa3a8 mobyfunc::SetMobyLightFromBlender; 000fa910 stub::STUB_000fa910
// callees(0): 

undefined8 stub::STUB_000da2f8_RET_0(void)

{
  return 0;
}



//==== 000da308  ns=lights  size=0x1a4
// sig: undefined CreatePointLight3(undefined8 param_1, undefined8 param_2, Vec4 * param_3, undefined8 param_4, undefined8 param_5, undefined4 param_6)
// callers(7): 000ec2d8 mobyattack::Spawn_Moby1523_Blueball2; 000ec418 mobyattack::Spawn_Moby1523_GC_Blueball; 000ec6f0 mobyattack::UpdateMoby_1523_GC_Blueball; 001bf8b0 mobyupdate_helpers::M1106_001bf8b0; 002b2590 mobyupdate_unsorted::UpdateMoby_176; 002b6630 mobyupdate_unsorted::UpdateMoby_177; 002c7328 mobyupdate_unsorted::UpdateMoby_185
// callees(2): 00500250 fastfunc::FastMemSetZero; 00502730 fastfunc::FastIntToDouble

ulonglong lights::CreatePointLight3
                    (double param_1,double param_2,Vec4 *param_3,undefined8 param_4,
                    undefined8 param_5,uint param_6)

{
  float fVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  double dVar5;
  double dVar6;
  
  if ((int)(((uint)((int)DAT_00a10718 >> 0x1f) >> 1 ^ DAT_00a10718) - ((int)DAT_00a10718 >> 0x1f)) <
      0x3f4cccce) {
    uVar2 = 0;
    do {
      if (*(int *)((int)&PointLightData.updatePos.x + (int)(uVar2 << 4) * 3) == 0) break;
      iVar4 = (int)uVar2 + 1;
      uVar2 = (ulonglong)iVar4;
    } while (iVar4 < 8);
    iVar4 = (int)uVar2;
    if (iVar4 == 8) {
      uVar2 = 0xffffffffffffffff;
    }
    else {
      PointLights[iVar4].pos.x = param_3->x;
      uVar3 = ZEXT48(&PointLightData) + uVar2 * 0x30;
      PointLights[iVar4].pos.y = param_3->y;
      fVar1 = param_3->z;
      PointLights[iVar4].pos.w = (float)param_1;
      PointLights[iVar4].pos.z = fVar1;
      dVar5 = (double)fastfunc::FastIntToDouble(param_6 & 0xff);
      dVar6 = 0.0078125;
      PointLights[iVar4].color.x = (float)(dVar5 * 0.0078125);
      dVar5 = (double)fastfunc::FastIntToDouble((int)param_6 >> 8 & 0xff);
      PointLights[iVar4].color.y = (float)(dVar5 * dVar6);
      dVar5 = (double)fastfunc::FastIntToDouble((int)param_6 >> 0x10 & 0xff);
      PointLights[iVar4].color.w = (float)param_2;
      PointLights[iVar4].color.z = (float)(dVar5 * dVar6);
      fastfunc::FastMemSetZero(uVar3 & 0xffffffff,0x30);
      iVar4 = (int)uVar3;
      *(undefined4 *)(iVar4 + 0x10) = 1;
      *(int *)(iVar4 + 0xc) = (int)((uVar2 & 0xffffffff) << 10) + 0xa1e280;
    }
  }
  else {
    uVar2 = 0xffffffffffffffff;
  }
  return uVar2;
}



//==== 000da4ac  ns=lights  size=0x14c
// sig: undefined CreatePointLight2(float param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, Vec4 * pos)
// callers(15): 001f9680 mobyupdate_unsorted::UpdateMoby_1201; 0024c380 mobyupdate_helpers::M1331_0024c380; 002877e8 mobyupdate_helpers::M1471_002877e8; 0028d9b0 mobyupdate_unsorted::UpdateMoby_1504; 0029ead8 mobyupdate_unsorted::UpdateMoby_157; 002ab988 mobyupdate_unsorted::UpdateMoby_168; 002ed768 mobyupdate_helpers::M211_002ed768; 002edb38 mobyupdate_helpers::M211_002edb38; 0035ffd8 mobyupdate_unsorted::UpdateMoby_388; 003fdc80 mobyupdate_unsorted::UpdateMoby_639; 00404d18 mobyupdate_unsorted::UpdateMoby_655; 00407868 mobyupdate_unsorted::UpdateMoby_658; 0040da20 mobyupdate_unsorted::UpdateMoby_671; 0046c660 mobyupdate_unsorted::UpdateMoby_{81_88}; 004c70d0 mobyupdate_unsorted::UpdateMoby_947
// callees(1): 00500250 fastfunc::FastMemSetZero

ulonglong lights::CreatePointLight2
                    (float param_1,double param_2,double param_3,double param_4,double param_5,
                    Vec4 *pos)

{
  float fVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  
  if ((int)(((uint)((int)DAT_00a10718 >> 0x1f) >> 1 ^ DAT_00a10718) - ((int)DAT_00a10718 >> 0x1f)) <
      0x3f4cccce) {
    uVar2 = 0;
    do {
      if (*(int *)((int)&PointLightData.updatePos.x + (int)(uVar2 << 4) * 3) == 0) break;
      iVar4 = (int)uVar2 + 1;
      uVar2 = (ulonglong)iVar4;
    } while (iVar4 < 8);
    iVar4 = (int)uVar2;
    if (iVar4 == 8) {
      uVar2 = 0xffffffffffffffff;
    }
    else {
      PointLights[iVar4].pos.x = pos->x;
      uVar3 = ZEXT48(&PointLightData) + uVar2 * 0x30;
      PointLights[iVar4].pos.y = pos->y;
      fVar1 = pos->z;
      PointLights[iVar4].pos.w = param_1;
      PointLights[iVar4].pos.z = fVar1;
      PointLights[iVar4].color.x = (float)param_3;
      PointLights[iVar4].color.y = (float)param_4;
      PointLights[iVar4].color.z = (float)param_5;
      PointLights[iVar4].color.w = (float)param_2;
      fastfunc::FastMemSetZero(uVar3 & 0xffffffff,0x30);
      iVar4 = (int)uVar3;
      *(undefined4 *)(iVar4 + 0x10) = 1;
      *(int *)(iVar4 + 0xc) = (int)((uVar2 & 0xffffffff) << 10) + 0xa1e280;
    }
  }
  else {
    uVar2 = 0xffffffffffffffff;
  }
  return uVar2;
}



//==== 000da5f8  ns=lights  size=0x3f0
// sig: undefined DetachPointLight(undefined8 idx)
// callers(3): 000da9e8 lights::DeletePointLight; 000daf58 lights::RefreshPointLight; 000dafb8 lights::UpdatePointLights
// callees(1): 005cd098 libc::printf
// strings: 00652210: 'screwed up point light on tie\n' | 00652230: 'screwed up point light on tfrag\n' | 00652258: 'screwed up point light on shrub\n'

void lights::DetachPointLight(ulonglong idx)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  ShrubInstance *pSVar4;
  Tfrag *pTVar5;
  TieInstance *pTVar6;
  uint uVar7;
  int iVar8;
  short *psVar9;
  short *psVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  short *psVar14;
  
  iVar3 = (int)(idx << 4) * 3;
  uVar2 = (uint)idx & 0xffff;
  uVar13 = (uint)((idx & 0xffffffff) << 4) & 0xfff0;
  psVar14 = (short *)((int)&PointLightData.tieOffset + iVar3);
  uVar12 = (uint)((idx & 0xffffffff) << 8) & 0xff00;
  uVar11 = (uint)((idx & 0xffffffff) << 0xc) & 0xf000;
  iVar8 = *(int *)((int)&PointLightData.list + iVar3);
  psVar10 = (short *)(iVar8 + *psVar14 * 2);
  psVar9 = (short *)((int)psVar10 +
                    (int)((longlong)*(short *)((int)&PointLightData.tieCnt + iVar3) << 1));
  if (psVar10 != psVar9) {
    do {
      pTVar6 = TieInstance;
      iVar8 = (int)((longlong)*psVar10 << 7) - (int)((longlong)*psVar10 << 4);
      uVar1 = *(ushort *)((int)TieInstance + iVar8 + 0x6a);
      uVar7 = (uint)uVar1;
      if ((uVar1 & 0xf) == uVar2) {
        uVar7 = uVar1 >> 4 | 0xf000;
      }
      else if ((uVar1 & 0xf0) == uVar13) {
        uVar7 = uVar1 >> 4 & 0xff0 | uVar1 & 0xf | 0xf000;
      }
      else if ((uVar1 & 0xf00) == uVar12) {
        uVar7 = uVar1 >> 4 & 0xf00 | uVar1 & 0xff | 0xf000;
      }
      else if ((uVar1 & 0xf000) == uVar11) {
        uVar7 = uVar1 & 0xfff | 0xf000;
      }
      else {
        libc::printf("screwed up point light on tie\n");
      }
      if (uVar7 == 0xffff) {
        *(undefined1 *)((int)pTVar6 + iVar8 + 0x5d) = 1;
      }
      psVar10 = psVar10 + 1;
      *(short *)((int)pTVar6 + iVar8 + 0x6a) = (short)uVar7;
    } while (psVar10 != psVar9);
    iVar8 = *(int *)((int)&PointLightData.list + iVar3);
  }
  *psVar14 = 0;
  psVar10 = (short *)(iVar8 + *(short *)((int)&PointLightData.tfragOffset + iVar3) * 2);
  *(undefined2 *)((int)&PointLightData.tieCnt + iVar3) = 0;
  psVar9 = (short *)((int)psVar10 +
                    (int)((longlong)*(short *)((int)&PointLightData.tfragCnt + iVar3) << 1));
  if (psVar10 != psVar9) {
    do {
      pTVar5 = Tfrags;
      iVar8 = (int)((longlong)*psVar10 << 4);
      uVar1 = *(ushort *)(Tfrags->occlIndex + iVar8 * 3 + -2);
      uVar7 = (uint)uVar1;
      if ((uVar1 & 0xf) == uVar2) {
        uVar7 = uVar1 >> 4 | 0xf000;
      }
      else if ((uVar1 & 0xf0) == uVar13) {
        uVar7 = uVar1 >> 4 & 0xff0 | uVar1 & 0xf | 0xf000;
      }
      else if ((uVar1 & 0xf00) == uVar12) {
        uVar7 = uVar1 >> 4 & 0xf00 | uVar1 & 0xff | 0xf000;
      }
      else if ((uVar1 & 0xf000) == uVar11) {
        uVar7 = uVar1 & 0xfff | 0xf000;
      }
      else {
        libc::printf("screwed up point light on tfrag\n");
      }
      if (uVar7 == 0xffff) {
        pTVar5->_unknown_22[iVar8 * 3 + -1] = '\x01';
      }
      psVar10 = psVar10 + 1;
      *(short *)(pTVar5->occlIndex + iVar8 * 3 + -2) = (short)uVar7;
    } while (psVar10 != psVar9);
    iVar8 = *(int *)((int)&PointLightData.list + iVar3);
  }
  psVar9 = (short *)(iVar8 + *(short *)((int)&PointLightData.shrubOffset + iVar3) * 2);
  *(undefined2 *)((int)&PointLightData.tfragOffset + iVar3) = 0;
  *(undefined2 *)((int)&PointLightData.tfragCnt + iVar3) = 0;
  psVar10 = (short *)((int)psVar9 +
                     (int)((longlong)*(short *)((int)&PointLightData.shrubCnt + iVar3) << 1));
  pSVar4 = ShrubInstance;
  for (; ShrubInstance = pSVar4, psVar9 != psVar10; psVar9 = psVar9 + 1) {
    iVar8 = (int)((longlong)*psVar9 << 7) - (int)((longlong)*psVar9 << 4);
    uVar1 = *(ushort *)((int)pSVar4 + iVar8 + 0x6a);
    uVar7 = (uint)uVar1;
    if ((uVar1 & 0xf) == uVar2) {
      uVar7 = uVar1 >> 4 | 0xf000;
    }
    else if ((uVar1 & 0xf0) == uVar13) {
      uVar7 = uVar1 >> 4 & 0xff0 | uVar1 & 0xf | 0xf000;
    }
    else if ((uVar1 & 0xf00) == uVar12) {
      uVar7 = uVar1 >> 4 & 0xf00 | uVar1 & 0xff | 0xf000;
    }
    else if ((uVar1 & 0xf000) == uVar11) {
      uVar7 = uVar1 & 0xfff | 0xf000;
    }
    else {
      libc::printf("screwed up point light on shrub\n");
    }
    if (uVar7 == 0xffff) {
      *(undefined1 *)((int)pSVar4 + iVar8 + 0x5d) = 1;
    }
    *(short *)((int)pSVar4 + iVar8 + 0x6a) = (short)uVar7;
    pSVar4 = ShrubInstance;
  }
  *(undefined2 *)((int)&PointLightData.shrubOffset + iVar3) = 0;
  *(undefined2 *)((int)&PointLightData.shrubCnt + iVar3) = 0;
  return;
}



//==== 000da9e8  ns=lights  size=0x74
// sig: undefined DeletePointLight(undefined4 idx)
// callers(29): 000ec5b8 mobyattack::M1523_Blueball_HandleDeletion; 000ec6f0 mobyattack::UpdateMoby_1523_GC_Blueball; 001bfbd8 mobyupdate_helpers::M1106_001bfbd8; 001c50b0 mobyupdate_unsorted::UpdateMoby_1106; 001f9680 mobyupdate_unsorted::UpdateMoby_1201; 0024d07c mobyupdate_helpers::M1331_0024d07c; 0024d11c mobyupdate_unsorted::UpdateMoby_1331; 0024d43c FUN_0024d43c; 002884e4 mobyupdate_helpers::M1471_002884e4; 00288584 mobyupdate_unsorted::UpdateMoby_1471; 00288888 FUN_00288888; 0028d9b0 mobyupdate_unsorted::UpdateMoby_1504; 0029ead8 mobyupdate_unsorted::UpdateMoby_157; 002ab988 mobyupdate_unsorted::UpdateMoby_168; 002b22c0 mobyupdate_helpers::M176_002b22c0; 002b2590 mobyupdate_unsorted::UpdateMoby_176; 002b6630 mobyupdate_unsorted::UpdateMoby_177; 002c7328 mobyupdate_unsorted::UpdateMoby_185; 002edb38 mobyupdate_helpers::M211_002edb38; 002ef9c8 mobyupdate_helpers::M1412_002ef9c8; 0035ffd8 mobyupdate_unsorted::UpdateMoby_388; 00364408 mobyupdate_unsorted::UpdateMoby_{404_405}; 003fdc80 mobyupdate_unsorted::UpdateMoby_639; 00404d18 mobyupdate_unsorted::UpdateMoby_655; 00407868 mobyupdate_unsorted::UpdateMoby_658
// callees(2): 000da5f8 lights::DetachPointLight; 00500250 fastfunc::FastMemSetZero

void lights::DeletePointLight(int idx)

{
  DetachPointLight();
  fastfunc::FastMemSetZero(PointLights + idx,0x20);
  fastfunc::FastMemSetZero((int)&PointLightData + idx * 0x30,0x30);
  return;
}



//==== 000daa60  ns=lights  size=0x4f8
// sig: undefined CreatePointLight(void)
// callers(2): 000daf58 lights::RefreshPointLight; 000dafb8 lights::UpdatePointLights
// callees(0): 

void lights::CreatePointLight(ulonglong param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  ushort uVar4;
  float fVar5;
  short *psVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  ushort uVar13;
  int iVar14;
  short *psVar15;
  int iVar16;
  short sVar20;
  Tfrag *pTVar17;
  short *psVar18;
  ShrubInstance *pSVar19;
  TieInstance *pTVar21;
  short *psVar22;
  
  pTVar21 = TieInstance;
  iVar16 = (int)(param_1 << 5);
  iVar14 = (int)(param_1 << 4) * 3;
  fVar1 = *(float *)((int)&PointLights[0].pos.x + iVar16);
  fVar2 = *(float *)((int)&PointLights[0].pos.y + iVar16);
  fVar5 = *(float *)((int)&PointLights[0].pos.x + iVar16);
  fVar3 = *(float *)((int)&PointLights[0].pos.z + iVar16);
  psVar6 = *(short **)((int)&PointLightData.list + iVar14);
  fVar7 = *(float *)((int)&PointLights[0].pos.y + iVar16);
  fVar8 = *(float *)((int)&PointLights[0].pos.z + iVar16);
  fVar12 = *(float *)((int)&PointLights[0].pos.w + iVar16) + 8.0;
  uVar13 = (ushort)param_1;
  psVar18 = psVar6;
  psVar15 = psVar6;
  if (psVar6 < psVar6 + 0x200) {
    sVar20 = 0;
    *(undefined2 *)((int)&PointLightData.tieOffset + iVar14) = 0;
    if (pTVar21 != TieInstanceEnd) {
      do {
        fVar10 = fVar2 - (pTVar21->bSphere).y;
        fVar9 = fVar1 - (pTVar21->bSphere).x;
        fVar11 = fVar3 - (pTVar21->bSphere).z;
        if (SQRT(fVar11 * fVar11 + fVar9 * fVar9 + fVar10 * fVar10) <
            fVar12 + (pTVar21->bSphere).rad) {
          *psVar15 = sVar20;
          uVar4 = pTVar21->point_lights;
          psVar18 = psVar15 + 1;
          if (uVar4 == 0xffff) {
            pTVar21->point_lights = uVar13 | 0xfff0;
            psVar15 = psVar18;
          }
          else if ((uVar4 & 0xfff0) == 0xfff0) {
            pTVar21->point_lights = uVar4 & 0xff0f | (ushort)((param_1 & 0xffffffff) << 4);
            psVar15 = psVar18;
          }
          else if ((uVar4 & 0xff00) == 0xff00) {
            pTVar21->point_lights = uVar4 & 0xf0ff | (ushort)((param_1 & 0xffffffff) << 8);
            psVar15 = psVar18;
          }
          else if ((uVar4 & 0xf000) == 0xf000) {
            pTVar21->point_lights = (ushort)((param_1 & 0xffffffff) << 0xc) | uVar4 & 0xfff;
            psVar15 = psVar18;
          }
          if (psVar6 + 0x200 <= psVar15) break;
        }
        pTVar21 = pTVar21 + 1;
        sVar20 = sVar20 + 1;
      } while (pTVar21 != TieInstanceEnd);
    }
    psVar18 = *(short **)((int)&PointLightData.list + iVar14);
    *(short *)((int)&PointLightData.tieCnt + iVar14) = (short)((int)psVar15 - (int)psVar18 >> 1);
  }
  pTVar17 = Tfrags;
  if (psVar15 < psVar6 + 0x200) {
    iVar16 = 0;
    *(short *)((int)&PointLightData.tfragOffset + iVar14) =
         (short)((int)psVar15 - (int)psVar18 >> 1);
    if (0 < TfragsCnt) {
      psVar18 = psVar15;
      do {
        fVar1 = fVar7 - (pTVar17->bSphere).y;
        fVar2 = fVar5 - (pTVar17->bSphere).x;
        fVar3 = fVar8 - (pTVar17->bSphere).z;
        if (SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1) < fVar12 + (pTVar17->bSphere).rad) {
          *psVar15 = (short)iVar16;
          uVar4 = pTVar17->point_lights;
          psVar15 = psVar18 + 1;
          if (uVar4 == 0xffff) {
            pTVar17->point_lights = uVar13 | 0xfff0;
            psVar18 = psVar15;
          }
          else if ((uVar4 & 0xfff0) == 0xfff0) {
            pTVar17->point_lights = uVar4 & 0xff0f | (ushort)((param_1 & 0xffffffff) << 4);
            psVar18 = psVar15;
          }
          else if ((uVar4 & 0xff00) == 0xff00) {
            pTVar17->point_lights = uVar4 & 0xf0ff | (ushort)((param_1 & 0xffffffff) << 8);
            psVar18 = psVar15;
          }
          else if ((uVar4 & 0xf000) == 0xf000) {
            pTVar17->point_lights = (ushort)((param_1 & 0xffffffff) << 0xc) | uVar4 & 0xfff;
            psVar18 = psVar15;
          }
          psVar15 = psVar18;
          if (psVar6 + 0x200 <= psVar18) break;
        }
        iVar16 = iVar16 + 1;
        pTVar17 = pTVar17 + 1;
      } while (iVar16 < TfragsCnt);
    }
    psVar18 = *(short **)((int)&PointLightData.list + iVar14);
    *(short *)((int)&PointLightData.tfragCnt + iVar14) =
         (short)((int)psVar15 - (int)psVar18 >> 1) -
         *(short *)((int)&PointLightData.tfragOffset + iVar14);
  }
  pSVar19 = ShrubInstance;
  if (psVar15 < psVar6 + 0x200) {
    sVar20 = 0;
    *(short *)((int)&PointLightData.shrubOffset + iVar14) =
         (short)((int)psVar15 - (int)psVar18 >> 1);
    if (pSVar19 != ShrubInstanceEnd) {
      psVar18 = psVar15;
      do {
        fVar1 = fVar7 - (pSVar19->bSphere).y;
        fVar2 = fVar5 - (pSVar19->bSphere).x;
        fVar3 = fVar8 - (pSVar19->bSphere).z;
        if (SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1) < fVar12 + (pSVar19->bSphere).rad) {
          *psVar15 = sVar20;
          psVar22 = psVar18 + 1;
          uVar4 = pSVar19->point_lights;
          psVar15 = psVar22;
          if (uVar4 == 0xffff) {
            pSVar19->point_lights = uVar13 | 0xfff0;
          }
          else if ((uVar4 & 0xfff0) == 0xfff0) {
            pSVar19->point_lights = uVar4 & 0xff0f | (ushort)((param_1 & 0xffffffff) << 4);
          }
          else if ((uVar4 & 0xff00) == 0xff00) {
            pSVar19->point_lights = uVar4 & 0xf0ff | (ushort)((param_1 & 0xffffffff) << 8);
          }
          else {
            psVar15 = psVar18;
            if ((uVar4 & 0xf000) == 0xf000) {
              pSVar19->point_lights = (ushort)((param_1 & 0xffffffff) << 0xc) | uVar4 & 0xfff;
              psVar15 = psVar22;
            }
          }
          psVar18 = psVar15;
          if (psVar6 + 0x200 <= psVar15) break;
        }
        pSVar19 = pSVar19 + 1;
        sVar20 = sVar20 + 1;
      } while (pSVar19 != ShrubInstanceEnd);
    }
    *(short *)((int)&PointLightData.shrubCnt + iVar14) =
         (short)((int)psVar15 - *(int *)((int)&PointLightData.list + iVar14) >> 1) -
         *(short *)((int)&PointLightData.shrubOffset + iVar14);
  }
  return;
}



//==== 000daf58  ns=lights  size=0x34
// sig: undefined RefreshPointLight(void)
// callers(0): 
// callees(2): 000da5f8 lights::DetachPointLight; 000daa60 lights::CreatePointLight

void lights::RefreshPointLight(undefined8 param_1)

{
  DetachPointLight();
  CreatePointLight(param_1);
  return;
}



//==== 000dafb8  ns=lights  size=0x228
// sig: void UpdatePointLights(void)
// callers(4): 00161788 space::UpdateSpace; 00166fb0 update::UpdateGameplay; 00168768 update::UpdateScene; 0016da88 vendor::Vendor_PreUpdate
// callees(3): 000da5f8 lights::DetachPointLight; 000daa60 lights::CreatePointLight; 00502578 fastfunc::FastWrapRot

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void lights::UpdatePointLights(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  
  DAT_00a1de4c = 0xbe99999a;
  DAT_00a1de40 = 0x3f4ccccd;
  DAT_00a1de44 = 0x3f4ccccd;
  DAT_00a1de48 = 0x3f4ccccd;
  dVar11 = (double)fastfunc::FastWrapRot(GameCamera.rot.radius,-0.8);
  fVar1 = (float)(dVar11 + 1.570796251296997);
  uVar9 = 0;
  dVar13 = (double)(float)(3.141592502593994 - dVar11);
  if (dVar11 - (double)(float)(3.141592502593994 - dVar11) < 0.0) {
    dVar13 = dVar11;
  }
  fVar2 = 3.1415925 - fVar1;
  if (fVar1 - (3.1415925 - fVar1) < 0.0) {
    fVar2 = fVar1;
  }
  dVar12 = (double)(float)(-3.141592502593994 - dVar11);
  if ((double)(float)(-3.141592502593994 - dVar11) - dVar13 < 0.0) {
    dVar12 = dVar13;
  }
  fVar3 = -3.1415925 - fVar1;
  if ((-3.1415925 - fVar1) - fVar2 < 0.0) {
    fVar3 = fVar2;
  }
  dVar11 = (double)(float)(dVar12 * dVar12);
  fVar4 = fVar3 * fVar3;
  dVar14 = (double)(float)(dVar11 * (double)(float)(dVar11 * dVar12));
  DAT_00a1de58 = 0xbf000000;
  DAT_00a1de5c = 0;
  fVar1 = fVar4 * fVar4 * fVar3;
  dVar13 = (double)(float)(dVar11 * dVar14);
  fVar2 = fVar4 * fVar1;
  DAT_00a1de54 = ((float)(dVar11 * dVar13) * 2.601887e-06 +
                 (float)(dVar13 * -0.0001980741071747616 +
                        (double)(float)(dVar14 * 0.008333025500178337 +
                                       (double)(float)((double)(float)(dVar11 * dVar12) *
                                                       -0.16666656732559204 + dVar12)))) * 0.866;
  DAT_00a1de50 = (fVar4 * fVar2 * 2.601887e-06 +
                 fVar2 * -0.0001980741 + fVar1 * 0.0083330255 + fVar4 * fVar3 * -0.16666657 + fVar3)
                 * 0.866;
  dVar13 = 8.0;
  do {
    iVar7 = (int)((uVar9 & 0xffffffff) << 5);
    iVar8 = (int)(uVar9 << 4) * 3;
    iVar10 = *(int *)((int)&PointLightData.updatePos.x + iVar8);
    if (iVar10 != 0) {
      fVar1 = *(float *)((int)&PointLights[0].pos.y + iVar7);
      fVar2 = *(float *)((int)&PointLights[0].pos.x + iVar7);
      fVar5 = fVar1 - *(float *)(&DAT_00a1e124 + iVar8);
      fVar6 = fVar2 - *(float *)((int)&PointLightData.state + iVar8);
      fVar3 = *(float *)((int)&PointLights[0].pos.z + iVar7);
      fVar4 = fVar3 - *(float *)(&DAT_00a1e128 + iVar8);
      if (dVar13 < (double)SQRT(fVar4 * fVar4 + fVar6 * fVar6 + fVar5 * fVar5)) {
        *(float *)((int)&PointLightData.state + iVar8) = fVar2;
        *(float *)(&DAT_00a1e124 + iVar8) = fVar1;
        *(float *)(&DAT_00a1e128 + iVar8) = fVar3;
        *(undefined4 *)(&DAT_00a1e12c + iVar8) = *(undefined4 *)((int)&PointLights[0].pos.w + iVar7)
        ;
        if (iVar10 == 1) {
          CreatePointLight(uVar9);
          *(undefined4 *)((int)&PointLightData.updatePos.x + iVar8) = 2;
        }
        else if (iVar10 == 2) {
          DetachPointLight(uVar9);
          CreatePointLight(uVar9);
        }
      }
    }
    iVar10 = (int)uVar9 + 1;
    uVar9 = (ulonglong)iVar10;
  } while (iVar10 < 8);
  return;
}



//==== 000db1e0  ns=Global  size=0x14
// sig: undefined SECTION_HEADER_LOADERS(void)
// callers(0): 
// callees(0): 

void SECTION_HEADER_LOADERS(void)

{
  DAT_0072479c = 0x10000;
  return;
}



//==== 000db200  ns=loaders  size=0x40
// sig: undefined LoadByteGrid(void)
// callers(0): 
// callees(0): 

void loaders::LoadByteGrid(undefined4 *param_1)

{
  mobyutil::g_byteGridStride = *param_1;
  DAT_00a2049c = param_1[1];
  DAT_00a204a0 = param_1[2];
  mobyutil::g_byteGridData = param_1 + 4;
  DAT_00a204a4 = param_1[3];
  return;
}



//==== 000db240  ns=loaders  size=0xac
// sig: undefined ???_Loaders_RelocEffectTable(void)
// callers(0): 
// callees(0): 

void loaders::____Loaders_RelocEffectTable(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar4 = *param_1;
  DAT_0095e9f4 = param_1 + 4;
  DAT_0095e9f8 = param_1 + iVar4 * 8 + 4;
  DAT_0095e9f0 = iVar4;
  if (0 < iVar4) {
    iVar6 = 0;
    iVar5 = iVar4;
    do {
      iVar5 = iVar5 + -1;
      *(int *)((int)DAT_0095e9f8 + iVar6) = *(int *)((int)DAT_0095e9f8 + iVar6) + (int)DAT_0095e9f8;
      piVar2 = DAT_0095e9f8;
      iVar6 = iVar6 + 4;
    } while (0 < iVar5);
    if (0 < iVar4) {
      iVar5 = 0;
      piVar3 = DAT_0095e9f8;
      do {
        iVar4 = iVar4 + -1;
        piVar1 = (int *)((int)piVar2 + iVar5);
        iVar6 = *piVar3;
        iVar5 = iVar5 + 4;
        piVar3 = piVar3 + 1;
        *(int *)(iVar6 + 4) = *(int *)(*piVar1 + 4) + (int)piVar2;
      } while (0 < iVar4);
    }
  }
  return;
}



//==== 000db2ec  ns=loaders  size=0x4b8
// sig: int ParsePif(void * pPif, longlong * tex_regs)
// callers(1): 000db7a4 loaders::LoadPifFile
// callees(9): 00500178 fastfunc::FastLog2; 005001fc fastfunc::FastMemSet; 00502f6c stub::STUB_00502f6c; 00502fbc stub::STUB_00502fbc_RET_0; 00502fd4 stub::STUB_00502fd4_RET_0; 0050306c stub::sceGsExecLoadImage; 00503074 stub::sceGsSyncPath; 00503084 stub::sceGsSetDefLoadImage; 00503244 stub::FlushCache

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int loaders::ParsePif(void *pPif,longlong *tex_regs)

{
  int iVar1;
  ulonglong *puVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  uint uVar11;
  ulonglong unaff_r27;
  uint uVar12;
  ulonglong unaff_r28;
  longlong lVar13;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  
  uVar5 = ZEXT48(&stack0x00000000);
  lVar13 = uVar5 - 0x130;
  puVar2 = (ulonglong *)lVar13;
  *puVar2 = uVar5;
  puVar2[0x28] = in_LR;
  puVar2[0x24] = unaff_r30;
  puVar2[0x25] = unaff_r31;
  puVar2[0x23] = unaff_r29;
  puVar2[0x22] = unaff_r28;
  puVar2[0x21] = unaff_r27;
  puVar2[0x20] = unaff_r26;
  puVar2[0x1f] = unaff_r25;
  puVar2[0x1e] = unaff_r24;
  fastfunc::FastMemSet(uVar5 - 0x98,0,0x54);
  iVar6 = *(int *)((int)pPif + 0x10);
  if (iVar6 == 0x27) {
LAB_000db368:
    *(int *)(puVar2 + 0x13) = (int)pPif + 0x20;
    if (iVar6 == 0x27) {
      iVar6 = ((uint)((LZCOUNT(0x12 - *(int *)((int)pPif + 0x14)) << 0x3a) >> 0x3f) & 0x20) + 0x20;
    }
    else {
      iVar6 = ((uint)((LZCOUNT(0x12 - *(int *)((int)pPif + 0x14)) << 0x3a) >> 0x3f) & 0x200) + 0x200
      ;
    }
    *(int *)((int)puVar2 + 0xac) = iVar6;
  }
  else {
    if (iVar6 != 0x26) {
      if (iVar6 == 0x13) goto LAB_000db368;
      if (iVar6 != 0x12) goto LAB_000db3d8;
    }
    *(undefined4 *)(puVar2 + 0x13) = 0;
    *(undefined4 *)((int)puVar2 + 0xac) = 0;
  }
LAB_000db3d8:
  uVar7 = fastfunc::FastLog2(*(undefined4 *)((int)pPif + 8));
  uVar8 = *(undefined4 *)((int)pPif + 0xc);
  *(undefined4 *)((int)puVar2 + 0xe4) = uVar7;
  uVar8 = fastfunc::FastLog2(uVar8);
  *(undefined4 *)(puVar2 + 0x1d) = uVar8;
  *(int *)((int)puVar2 + 0x9c) = (int)pPif + *(int *)((int)puVar2 + 0xac) + 0x20;
  iVar6 = *(int *)((int)pPif + 0x10);
  if (iVar6 == 0x27) {
    *(int *)(puVar2 + 0x16) = *(int *)((int)pPif + 8) * *(int *)((int)pPif + 0xc) >> 1;
  }
  else if (iVar6 == 0x26) {
    *(int *)(puVar2 + 0x16) = *(int *)((int)pPif + 8) * *(int *)((int)pPif + 0xc) * 2;
  }
  else if (iVar6 == 0x13) {
    *(int *)(puVar2 + 0x16) = *(int *)((int)pPif + 8) * *(int *)((int)pPif + 0xc);
  }
  else if (iVar6 == 0x12) {
    *(int *)(puVar2 + 0x16) = *(int *)((int)pPif + 8) * *(int *)((int)pPif + 0xc) * 4;
  }
  if ((iVar6 == 0x27) || (iVar6 == 0x13)) {
    *(int *)(puVar2 + 0x18) = g_GsRamAlloc >> 8;
    if (iVar6 == 0x27) {
      g_GsRamAlloc = g_GsRamAlloc + 0x100;
      stub::sceGsSetDefLoadImage
                (uVar5 - 0xa0,*(undefined4 *)(puVar2 + 0x18),1,*(undefined4 *)((int)pPif + 0x14),0,0
                 ,8,2);
    }
    else {
      g_GsRamAlloc = g_GsRamAlloc + *(int *)((int)puVar2 + 0xac);
      stub::sceGsSetDefLoadImage
                (uVar5 - 0xa0,*(undefined4 *)(puVar2 + 0x18),1,*(undefined4 *)((int)pPif + 0x14),0,0
                 ,0x10,0x10);
    }
    stub::FlushCache(0);
    stub::sceGsExecLoadImage(uVar5 - 0xa0,*(undefined4 *)(puVar2 + 0x13));
    stub::sceGsSyncPath(0,0);
  }
  iVar6 = *(int *)((int)pPif + 0x1c);
  if (1 < iVar6) {
    iVar9 = iVar6 + -1;
    lVar3 = lVar13;
    do {
      iVar10 = *(int *)((int)(lVar3 + 4) + 0xac);
      iVar9 = iVar9 + -1;
      iVar1 = (int)lVar3;
      *(int *)(iVar1 + 0xb4) = iVar10 >> 2;
      *(int *)(iVar1 + 0xa0) = *(int *)(iVar1 + 0x9c) + iVar10;
      lVar3 = lVar3 + 4;
    } while (0 < iVar9);
  }
  uVar11 = 0;
  if (0 < iVar6) {
    uVar12 = 0;
    do {
      iVar6 = *(int *)((int)pPif + 8);
      iVar10 = iVar6 >> (uVar11 + 6 & 0x3f);
      iVar1 = g_GsRamAlloc >> 8;
      iVar4 = (int)lVar13;
      *(int *)(iVar4 + 0xc4) = iVar1;
      iVar10 = iVar10 + ((uint)((longlong)iVar10 + -1 >> 0x3f) & 1U - iVar10);
      uVar8 = *(undefined4 *)((int)pPif + 0x10);
      iVar9 = *(int *)((int)pPif + 0xc);
      *(int *)(iVar4 + 0xd4) = iVar10;
      stub::sceGsSetDefLoadImage
                (uVar5 - 0x9c,iVar1,iVar10,uVar8,0,0,iVar6 >> (uVar11 & 0x3f),
                 iVar9 >> (uVar11 & 0x3f));
      stub::FlushCache(0);
      stub::sceGsExecLoadImage(uVar5 - 0x9c,*(undefined4 *)(iVar4 + 0x9c));
      stub::sceGsSyncPath(0,0);
      iVar6 = *(int *)(puVar2 + 0x16) >> (uVar12 & 0x3f);
      uVar11 = uVar11 + 1;
      uVar12 = uVar12 + 2;
      lVar13 = lVar13 + 4;
      g_GsRamAlloc = g_GsRamAlloc +
                     iVar6 + ((uint)((longlong)iVar6 + -0x100 >> 0x3f) & 0x100U - iVar6);
    } while ((int)uVar11 < *(int *)((int)pPif + 0x1c));
  }
  uVar8 = *(undefined4 *)((int)pPif + 0x10);
  iVar6 = *(int *)((int)pPif + 0x14);
  puVar2[0xf] = 0;
  puVar2[0xe] = (longlong)iVar6;
  puVar2[0x10] = 0;
  puVar2[0x11] = 4;
  lVar13 = stub::STUB_00502fbc_RET_0
                     (*(undefined4 *)((int)puVar2 + 0xc4),*(undefined4 *)((int)puVar2 + 0xd4),uVar8,
                      *(undefined4 *)((int)puVar2 + 0xe4),*(undefined4 *)(puVar2 + 0x1d),1,0,
                      *(undefined4 *)(puVar2 + 0x18));
  iVar6 = *(int *)((int)pPif + 0x1c);
  *tex_regs = lVar13;
  lVar13 = stub::STUB_00502fd4_RET_0(0,iVar6 + -1,1,3,0,0,0xffa0);
  uVar8 = *(undefined4 *)(puVar2 + 0x19);
  tex_regs[1] = lVar13;
  lVar13 = stub::STUB_00502f6c(uVar8,*(undefined4 *)(puVar2 + 0x1b),
                               *(undefined4 *)((int)puVar2 + 0xcc),
                               *(undefined4 *)((int)puVar2 + 0xdc),*(undefined4 *)(puVar2 + 0x1a),
                               *(undefined4 *)(puVar2 + 0x1c));
  tex_regs[2] = lVar13;
  return -1;
}



//==== 000db7a4  ns=loaders  size=0x134
// sig: int LoadPifFile(char * filename)
// callers(0): 
// callees(5): 000db2ec loaders::ParsePif; 00502dcc FUN_00502dcc; 00502dd4 stub::STUB_00502dd4; 00502ddc stub::STUB_00502ddc; 00502de0 stub::STUB_00502de0_RET_0

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int loaders::LoadPifFile(char *filename)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  longlong *tex_regs;
  
  piVar1 = DAT_00a10914;
  uVar2 = FUN_00502dcc(filename,0);
  if ((int)uVar2 < 0) {
    iVar4 = 0;
  }
  else {
    uVar3 = stub::STUB_00502de0_RET_0(uVar2,0,5);
    stub::STUB_00502de0_RET_0(uVar2,0,6);
    iVar4 = stub::STUB_00502dd4(uVar2,piVar1,uVar3);
    if (iVar4 == (int)uVar3) {
      stub::STUB_00502ddc(uVar2);
      if ((int)uVar3 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *piVar1;
        iVar6 = 0;
        if (0 < iVar4) {
          tex_regs = (longlong *)&DAT_00a202d0;
          piVar5 = piVar1;
          do {
            piVar5 = piVar5 + 1;
            ParsePif((void *)(*piVar5 + (int)piVar1),tex_regs);
            iVar6 = iVar6 + 1;
            tex_regs = tex_regs + 3;
          } while (iVar6 < iVar4);
        }
      }
    }
    else {
      stub::STUB_00502ddc(uVar2);
      iVar4 = 0;
    }
  }
  return iVar4;
}



//==== 000db8d8  ns=loaders  size=0x54
// sig: undefined ???_Loaders_RelocSpaceWadPtrs(void)
// callers(1): 00163aa0 space::SpaceTransition_LoadWad
// callees(0): 

void loaders::____Loaders_RelocSpaceWadPtrs(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  
  piVar3 = param_1 + 4;
  partproc::g_PartTexBaseIndex = param_1[1];
  iVar4 = *param_1;
  iVar1 = param_1[2];
  if (0 < iVar4) {
    piVar5 = &partproc::g_PartTexFrames;
    do {
      iVar2 = *piVar3;
      iVar4 = iVar4 + -1;
      piVar3 = piVar3 + 1;
      *piVar5 = (int)param_1 + iVar2 + iVar1;
      piVar5 = piVar5 + 1;
    } while (0 < iVar4);
  }
  return;
}



//==== 000db92c  ns=loaders  size=0x10c
// sig: void ParseEffectTexs(int * tex_defs, int tex_cnt)
// callers(0): 
// callees(1): 00500178 fastfunc::FastLog2

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void loaders::ParseEffectTexs(int *tex_defs,int tex_cnt)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined2 uVar6;
  int iVar5;
  
  iVar5 = 0;
  g_EffectTexCnt = 0;
  if (0 < tex_cnt) {
    do {
      iVar1 = *tex_defs;
      iVar2 = tex_defs[1];
      iVar3 = tex_defs[2];
      iVar4 = tex_defs[3];
      tex_defs = tex_defs + 4;
      *(short *)(&DAT_0095d6da + iVar5 * 0x10) = (short)(iVar1 >> 4);
      *(short *)(&DAT_0095d6d8 + iVar5 * 0x10) = (short)(iVar2 >> 4);
      uVar6 = fastfunc::FastLog2(iVar3);
      *(undefined2 *)(&DAT_0095d6dc + g_EffectTexCnt * 0x10) = uVar6;
      uVar6 = fastfunc::FastLog2(iVar4);
      iVar1 = g_EffectTexCnt * 0x10;
      iVar5 = g_EffectTexCnt + 1;
      *(undefined8 *)(&g_EffectTexs + iVar1) = 0;
      g_EffectTexCnt = iVar5;
      *(undefined2 *)(&DAT_0095d6de + iVar1) = uVar6;
    } while (iVar5 < tex_cnt);
  }
  return;
}



//==== 000dba38  ns=loaders  size=0x1fc
// sig: void ParseSky(char * data)
// callers(0): 
// callees(1): 00500178 fastfunc::FastLog2

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void loaders::ParseSky(char *data)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined2 uVar6;
  int iVar5;
  int iVar7;
  char *pcVar8;
  int iVar9;
  int *piVar10;
  int *piVar11;
  
  g_SkyData = data;
  data[4] = '\0';
  data[5] = '\x01';
  *(char **)(g_SkyData + 0x10) = data + *(int *)(g_SkyData + 0x10);
  *(char **)(g_SkyData + 0x14) = data + *(int *)(g_SkyData + 0x14);
  *(char **)(g_SkyData + 0x18) = data + *(int *)(g_SkyData + 0x18);
  if (*(int *)(g_SkyData + 0x1c) != 0) {
    *(char **)(g_SkyData + 0x1c) = data + *(int *)(g_SkyData + 0x1c);
  }
  iVar7 = 0;
  piVar11 = *(int **)(g_SkyData + 0x10);
  pcVar8 = g_SkyData;
  if (0 < *(short *)(g_SkyData + 0xc)) {
    iVar5 = 0;
    do {
      iVar9 = *piVar11;
      iVar1 = piVar11[1];
      iVar2 = *(int *)(pcVar8 + 0x10);
      iVar3 = piVar11[2];
      iVar4 = piVar11[3];
      piVar11 = piVar11 + 4;
      *(short *)(iVar2 + iVar5 + 10) = (short)(iVar9 >> 4);
      *(short *)(iVar2 + iVar5 + 8) = (short)(iVar1 >> 4);
      uVar6 = fastfunc::FastLog2(iVar3);
      *(undefined2 *)(*(int *)(g_SkyData + 0x10) + iVar5 + 0xc) = uVar6;
      uVar6 = fastfunc::FastLog2(iVar4);
      pcVar8 = g_SkyData;
      iVar7 = iVar7 + 1;
      iVar9 = *(int *)(g_SkyData + 0x10) + iVar5;
      *(undefined8 *)(*(int *)(g_SkyData + 0x10) + iVar5) = 0;
      iVar5 = iVar5 + 0x10;
      *(undefined2 *)(iVar9 + 0xe) = uVar6;
    } while (iVar7 < *(short *)(pcVar8 + 0xc));
  }
  iVar7 = 0;
  if (0 < *(short *)(pcVar8 + 6)) {
    iVar5 = 0;
    do {
      iVar9 = 0;
      piVar10 = (int *)(data + *(int *)(pcVar8 + iVar5 + 0x20));
      *(int **)(pcVar8 + iVar5 + 0x20) = piVar10;
      piVar11 = piVar10;
      if (0 < *piVar10) {
        do {
          iVar9 = iVar9 + 1;
          iVar1 = *piVar10;
          piVar11[8] = (int)(data + piVar11[8]);
          piVar11 = piVar11 + 8;
        } while (iVar9 < iVar1);
      }
      iVar7 = iVar7 + 1;
      iVar5 = iVar5 + 4;
      pcVar8 = g_SkyData;
    } while (iVar7 < *(short *)(g_SkyData + 6));
  }
  return;
}



//==== 000dbc38  ns=loaders  size=0x4b4
// sig: void LoadMobyModel(MobyClass * pClass, void * tex_regs, char * tex_refs, int oClass)
// callers(4): 000dc0ec loaders::LoadMobyPClasses; 000dc210 loaders::LoadSpaceshipModel; 000df408 loaders::LoadAllMobys; 000e0854 loaders::LoadGadgetModel
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void loaders::LoadMobyModel(MobyClass *pClass,void *tex_regs,char *tex_refs,int oClass)

{
  void *pvVar1;
  float *pfVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  int *piVar8;
  uint uVar9;
  int iVar10;
  int *piVar12;
  MobyClass *pMVar13;
  longlong lVar11;
  uint uVar15;
  ulonglong uVar14;
  int iVar17;
  ulonglong uVar16;
  
  if (pClass->packets != (void *)0x0) {
    puVar4 = (uint *)((int)&pClass->packets + (int)pClass->packets);
    pClass->packets = puVar4;
    piVar8 = (int *)puVar4[2];
    piVar12 = (int *)puVar4[3];
    uVar15 = *puVar4;
    if (piVar8 != (int *)0x0) {
      piVar8 = (int *)((int)&pClass->packets + (int)piVar8);
      puVar4[2] = (uint)piVar8;
    }
    if (piVar12 != (int *)0x0) {
      piVar12 = (int *)((int)&pClass->packets + (int)piVar12);
      puVar4[3] = (uint)piVar12;
    }
    uVar5 = 0;
    iVar6 = *(int *)(g_viewMtxPtr + 0x4a8);
    uVar9 = 0;
    puVar4[5] = (int)pClass + (puVar4[5] - iVar6);
    puVar4[4] = (int)pClass + (puVar4[4] - iVar6);
    if (uVar15 != 0) {
      do {
        iVar3 = EffectTexHeaders;
        iVar6 = *piVar8;
        if (iVar6 < 0) {
          if (iVar6 == -1) {
            *piVar8 = EffectTexHeaders;
            iVar6 = iVar3;
          }
          else if (iVar6 == -2) {
            *piVar8 = EffectTexHeaders;
            iVar6 = iVar3;
          }
          else if (iVar6 == -3) {
            iVar6 = EffectTexHeaders + 0x24;
            *piVar8 = iVar6;
          }
        }
        else {
          iVar6 = EffectTexHeaders + iVar6 * 0x24;
          *piVar8 = iVar6;
        }
        if (*(char *)(piVar8 + 3) == '\0') {
          *(byte *)(piVar8 + 3) =
               (byte)(*(uint *)(iVar6 + 8) >> 6) & 0xc | (byte)*(uint *)(iVar6 + 8) & 3;
        }
        uVar5 = uVar5 + 1;
        piVar8 = piVar8 + 4;
      } while (uVar5 < uVar15);
    }
    uVar15 = puVar4[1];
    if (uVar15 != 0) {
      do {
        iVar3 = EffectTexHeaders;
        iVar6 = *piVar12;
        if (iVar6 < 0) {
          if (iVar6 == -1) {
            *piVar12 = EffectTexHeaders;
            iVar6 = iVar3;
          }
          else if (iVar6 == -2) {
            *piVar12 = EffectTexHeaders;
            iVar6 = iVar3;
          }
          else if (iVar6 == -3) {
            iVar6 = EffectTexHeaders + 0x24;
            *piVar12 = iVar6;
          }
        }
        else {
          iVar6 = EffectTexHeaders + iVar6 * 0x24;
          *piVar12 = iVar6;
        }
        if (*(char *)(piVar12 + 3) == '\0') {
          *(byte *)(piVar12 + 3) =
               (byte)(*(uint *)(iVar6 + 8) >> 6) & 0xc | (byte)*(uint *)(iVar6 + 8) & 3;
        }
        uVar9 = uVar9 + 1;
        piVar12 = piVar12 + 4;
      } while (uVar9 < uVar15);
    }
  }
  if (pClass->collision != (u16 *)0x0) {
    pClass->collision = (u16 *)((int)&pClass->packets + (int)pClass->collision);
  }
  if (pClass->skeleton != (void *)0x0) {
    pvVar1 = (void *)((int)&pClass->packets + (int)pClass->skeleton);
    uVar15 = 0;
    pClass->skeleton = pvVar1;
    if (pClass->joint_cnt != '\0') {
      do {
        uVar15 = uVar15 + 1;
        *(undefined4 *)((int)pvVar1 + 0xc) = 0;
        *(undefined4 *)((int)pvVar1 + 0x1c) = 0;
        *(undefined4 *)((int)pvVar1 + 0x2c) = 0;
        *(undefined4 *)((int)pvVar1 + 0x3c) = 0x3f800000;
        *(float *)((int)pvVar1 + 0x30) = *(float *)((int)pvVar1 + 0x30) * 0.0009765625;
        *(float *)((int)pvVar1 + 0x34) = *(float *)((int)pvVar1 + 0x34) * 0.0009765625;
        *(float *)((int)pvVar1 + 0x38) = *(float *)((int)pvVar1 + 0x38) * 0.0009765625;
        pvVar1 = (void *)((int)pvVar1 + 0x40);
      } while (uVar15 < pClass->joint_cnt);
    }
  }
  if (pClass->common_trans != (void *)0x0) {
    pfVar2 = (float *)((int)&pClass->packets + (int)pClass->common_trans);
    uVar15 = 0;
    pClass->common_trans = pfVar2;
    if (pClass->joint_cnt != '\0') {
      do {
        uVar15 = uVar15 + 1;
        *pfVar2 = *pfVar2 * 0.0009765625;
        pfVar2[1] = pfVar2[1] * 0.0009765625;
        pfVar2[2] = pfVar2[2] * 0.0009765625;
        pfVar2 = pfVar2 + 4;
      } while (uVar15 < pClass->joint_cnt);
    }
  }
  if (pClass->anim_joints != (void *)0x0) {
    piVar8 = (int *)((int)&pClass->packets + (int)pClass->anim_joints);
    pClass->anim_joints = piVar8;
    iVar6 = *piVar8;
    if (0 < iVar6) {
      iVar3 = 0;
      do {
        iVar6 = iVar6 + -1;
        *(int *)((int)pClass->anim_joints + iVar3 + 4) =
             (int)&pClass->packets + *(int *)((int)pClass->anim_joints + iVar3 + 4);
        iVar3 = iVar3 + 4;
      } while (0 < iVar6);
    }
  }
  if (pClass->SoundDefs != (void *)0x0) {
    pClass->SoundDefs = (void *)((int)&pClass->packets + (int)pClass->SoundDefs);
  }
  uVar15 = (uint)pClass->seq_cnt;
  iVar6 = 0;
  pMVar13 = pClass;
  if (pClass->seq_cnt != 0) {
    do {
      if (*(int *)&pMVar13->type != 0) {
        iVar3 = (int)&pClass->packets + *(int *)&pMVar13->type;
        *(int *)&pMVar13->type = iVar3;
        uVar15 = (uint)pClass->seq_cnt;
        if (*(int *)(iVar3 + 0x14) != 0) {
          *(int *)(iVar3 + 0x14) = (int)&pClass->packets + *(int *)(iVar3 + 0x14);
        }
        iVar10 = 0;
        iVar17 = iVar3;
        if (*(char *)(iVar3 + 0x10) != '\0') {
          do {
            iVar10 = iVar10 + 1;
            *(int *)(iVar17 + 0x1c) = (int)&pClass->packets + *(int *)(iVar17 + 0x1c);
            iVar17 = iVar17 + 4;
          } while (iVar10 < (int)(uint)*(byte *)(iVar3 + 0x10));
        }
      }
      iVar6 = iVar6 + 1;
      pMVar13 = (MobyClass *)&pMVar13->pakcet_cnt_0;
    } while (iVar6 < (int)uVar15);
  }
  if ((oClass == 0x472) && (*(int *)(g_viewMtxPtr + 0xc) != 0)) {
    piVar8 = &DAT_00724864;
    uVar15 = 0;
    puVar4 = &DAT_00724870;
    puVar7 = &DAT_0072486c;
    do {
      uVar14 = (ulonglong)*puVar4;
      uVar5 = *puVar7;
      uVar16 = (ulonglong)*(byte *)(*(int *)(&pClass->type + *piVar8 * 4) + 0x10);
      uVar14 = uVar14 + ((longlong)(uVar16 - uVar14) >> 0x3f & uVar16 - uVar14);
      if ((ulonglong)uVar5 < (uVar14 & 0xffffffff)) {
        lVar11 = uVar14 - uVar5;
        iVar6 = *(int *)(&pClass->type + *piVar8 * 4) + uVar5 * 4;
        do {
          piVar12 = (int *)(iVar6 + 0x1c);
          lVar11 = lVar11 + -1;
          iVar6 = iVar6 + 4;
          iVar3 = *piVar12 + (uint)*(ushort *)(*piVar12 + 0xc);
          *(short *)(iVar3 + 0x12) = *(short *)(iVar3 + 0x12) + (short)piVar8[1];
        } while (0 < (int)lVar11);
      }
      uVar15 = uVar15 + 1;
      puVar4 = puVar4 + 4;
      puVar7 = puVar7 + 4;
      piVar8 = piVar8 + 4;
    } while (uVar15 < 0x21);
  }
  return;
}



//==== 000dc0ec  ns=loaders  size=0xf4
// sig: void LoadMobyPClasses(MobyClass * pClass, void * tex_regs, char * tex_refs, int oClass)
// callers(2): 00011b74 boot::Load_Front_End; 00163aa0 space::SpaceTransition_LoadWad
// callees(2): 000dbc38 loaders::LoadMobyModel; 000fbfa0 mobyfunc::GetMobyFunction

void loaders::LoadMobyPClasses(MobyClass *pClass,void *tex_regs,char *tex_refs,int oClass)

{
  int iVar1;
  int iVar2;
  MOBY_OCLASSES oClass_00;
  
  iVar2 = oClass_to_mClass_lookup;
  iVar1 = oClass_to_mClass_lookup * 4;
  (&MobyClassLookup)[oClass] = (char)oClass_to_mClass_lookup;
  oClass_00 = (MOBY_OCLASSES)oClass;
  (&mClass_to_oClass)[iVar2] = oClass_00;
  MobyClasses[iVar2] = pClass;
  if (pClass == (MobyClass *)0x0) {
    mobyfunc::GetMobyFunction(oClass_00);
    oClass_to_mClass_lookup = oClass_to_mClass_lookup + 1;
  }
  else {
    *(undefined4 *)(&MobyMipDists + iVar1) = *(undefined4 *)&pClass->bangles;
    mobyfunc::GetMobyFunction(oClass_00);
    oClass_to_mClass_lookup = oClass_to_mClass_lookup + 1;
    LoadMobyModel(pClass,tex_regs,tex_refs,oClass);
  }
  return;
}



//==== 000dc210  ns=loaders  size=0x5ec
// sig: int LoadSpaceshipModel(int * data, int * gs_addrs)
// callers(0): 
// callees(7): 000dbc38 loaders::LoadMobyModel; 000fbfa0 mobyfunc::GetMobyFunction; 005002cc fastfunc::FastMemCopy; 0050306c stub::sceGsExecLoadImage; 00503074 stub::sceGsSyncPath; 00503084 stub::sceGsSetDefLoadImage; 00503244 stub::FlushCache

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int loaders::LoadSpaceshipModel(int *data,int *gs_addrs)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  MobyClass *pMVar11;
  int iVar12;
  MOBY_OCLASSES MVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auStack_80 [16];
  
  lVar8 = (longlong)(int)gs_addrs;
  lVar6 = (longlong)(int)data;
  fastfunc::FastMemCopy
            (lVar6,DAT_0096456c,
             *(int *)(&DAT_010ea114 + (int)((longlong)g_SpaceshipVariant << 3)) << 0xb);
  iVar1 = *data;
  iVar12 = 0;
  uVar9 = (ulonglong)(uint)data[1];
  iVar2 = data[2];
  uVar3 = data[3];
  do {
    if (iVar12 == 0) {
      stub::sceGsSetDefLoadImage(auStack_80,GSmem.base + gs_addrs[0x2b] >> 8,1,0x13,0,0,0x40,0x40);
      lVar7 = uVar9 + 0x14430;
    }
    else if (iVar12 == 1) {
      stub::sceGsSetDefLoadImage(auStack_80,GSmem.base + gs_addrs[0x2c] >> 8,1,0x13,0,0,0x20,0x20);
      lVar7 = uVar9 + 0x15430;
    }
    else if (iVar12 == 2) {
      stub::sceGsSetDefLoadImage(auStack_80,GSmem.base + gs_addrs[0x2d] >> 8,1,0x12,0,0,0x10,0x10);
      lVar7 = uVar9 + 0x30;
    }
    else {
      stub::sceGsSetDefLoadImage(auStack_80,GSmem.base + gs_addrs[0x2e] >> 8,1,0x12,0,0,0x10,0x10);
      lVar7 = (ulonglong)uVar3 + 0x30;
    }
    stub::FlushCache(0);
    stub::sceGsExecLoadImage(auStack_80,lVar7 + lVar6 & 0xffffffff);
    stub::sceGsSyncPath(0,0);
    iVar12 = iVar12 + 1;
  } while (iVar12 < 4);
  auVar14 = ZEXT416(8);
  auVar14 = auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60;
  auVar15 = loadVectorLeftIndexed(0xb4,lVar8);
  auVar17 = loadVectorLeftIndexed(0xac,lVar8);
  auVar16 = vectorShiftRightAlgebraicWord(auVar15,auVar14);
  auVar15 = loadVectorLeftIndexed(0xb0,lVar8);
  auVar17 = vectorShiftRightAlgebraicWord(auVar17,auVar14);
  auVar15 = vectorShiftRightAlgebraicWord(auVar15,auVar14);
  auVar19 = vectorSplatHalfWord(auVar16,1);
  auVar14._0_10_ = _DAT_007247c0;
  auVar14._10_2_ = DAT_007247ca;
  auVar14._12_2_ = DAT_007247cc;
  auVar14._14_2_ = DAT_007247ce;
  auVar18 = vectorSplatHalfWord(auVar17,1);
  uVar10 = lVar6 + uVar9 & 0xffffffff;
  DAT_007247ca = storeVectorElementHalfWordIndexed(auVar19,10,0x7247c0);
  auVar19 = vectorSplatHalfWord(auVar15,1);
  DAT_007247cc = storeVectorElementHalfWordIndexed(auVar18,0xc,0x7247c0);
  DAT_007247ce = storeVectorElementHalfWordIndexed(auVar19,0xe,0x7247c0);
  auVar16 = vectorPermute(auVar14,auVar16,_DAT_000dc1e0);
  auVar14 = vectorPermute(auVar17,auVar15,_DAT_000dc1e0);
  iVar12 = DAT_00a37388 * 4;
  auVar14 = vectorPermute(auVar16,auVar14,_DAT_000dc1f0);
  *(undefined1 (*) [16])(DAT_00a37388 * 0x10 + 0xa4c540) = auVar14;
  *(int *)(&DAT_00a37390 + iVar12) = (int)(lVar6 + uVar9) + -0x80000000;
  fastfunc::FastMemCopy(uVar10,lVar6 + uVar9 + 0x430 & 0xffffffff,0x14000);
  iVar5 = oClass_to_mClass_lookup;
  iVar12 = (int)((longlong)g_SpaceshipVariant << 2);
  uVar10 = uVar10 + 0x14000;
  DAT_007247e0 = (undefined1)DAT_00a37388;
  if ((&MobyClassLookup)[*(int *)((int)OCLASSES_SPACESHIP + iVar12)] == -1) {
    iVar12 = *(int *)((int)OCLASSES_SPACESHIP + iVar12);
    pMVar11 = (MobyClass *)((int)data + iVar1);
    iVar4 = DAT_00a37388 * -0x10;
    iVar1 = oClass_to_mClass_lookup * 4;
    (&MobyClassLookup)[iVar12] = (char)oClass_to_mClass_lookup;
    MVar13 = (MOBY_OCLASSES)iVar12;
    (&mClass_to_oClass)[iVar5] = MVar13;
    MobyClasses[iVar5] = pMVar11;
    if (pMVar11 == (MobyClass *)0x0) {
      mobyfunc::GetMobyFunction(MVar13);
      oClass_to_mClass_lookup = oClass_to_mClass_lookup + 1;
    }
    else {
      *(undefined4 *)(&MobyMipDists + iVar1) = *(undefined4 *)&pMVar11->bangles;
      mobyfunc::GetMobyFunction(MVar13);
      oClass_to_mClass_lookup = oClass_to_mClass_lookup + 1;
      LoadMobyModel(pMVar11,&DAT_007247c0 + iVar4,&DAT_007247e0,iVar12);
    }
  }
  auVar14 = ZEXT416(8);
  DAT_00a37388 = DAT_00a37388 + 1;
  auVar15 = loadVectorLeftIndexed(0xb8,lVar8);
  auVar14 = vectorShiftRightAlgebraicWord
                      (auVar15,auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60);
  auVar15._0_10_ = _DAT_007247d0;
  auVar15._10_2_ = DAT_007247da;
  auVar15._12_4_ = uRam007247dc;
  auVar16 = vectorSplatHalfWord(auVar14,1);
  DAT_007247da = storeVectorElementHalfWordIndexed(auVar16,10,0x7247d0);
  iVar1 = DAT_00a37388 * 4;
  auVar14 = vectorPermute(auVar15,auVar14,_DAT_000dc200);
  iVar12 = (int)uVar10;
  *(undefined1 (*) [16])(DAT_00a37388 * 0x10 + 0xa4c540) = auVar14;
  *(int *)(&DAT_00a37390 + iVar1) = iVar12 + 0x70000000;
  fastfunc::FastMemCopy(uVar10 & 0xffffffff,lVar6 + (ulonglong)uVar3 + 0x430 & 0xffffffff,0x4000);
  iVar5 = oClass_to_mClass_lookup;
  iVar1 = (int)((longlong)g_SpaceshipVariant << 2);
  DAT_007247e0 = (undefined1)DAT_00a37388;
  if ((&MobyClassLookup)[*(int *)((int)OCLASSES_COCKPIT + iVar1)] == -1) {
    iVar1 = *(int *)((int)OCLASSES_COCKPIT + iVar1);
    pMVar11 = (MobyClass *)((int)data + iVar2);
    iVar4 = DAT_00a37388 * -0x10;
    iVar2 = oClass_to_mClass_lookup * 4;
    (&MobyClassLookup)[iVar1] = (char)oClass_to_mClass_lookup;
    MobyClasses[iVar5] = pMVar11;
    MVar13 = (MOBY_OCLASSES)iVar1;
    (&mClass_to_oClass)[iVar5] = MVar13;
    if (pMVar11 == (MobyClass *)0x0) {
      mobyfunc::GetMobyFunction(MVar13);
      oClass_to_mClass_lookup = oClass_to_mClass_lookup + 1;
    }
    else {
      *(undefined4 *)(&MobyMipDists + iVar2) = *(undefined4 *)&pMVar11->bangles;
      mobyfunc::GetMobyFunction(MVar13);
      oClass_to_mClass_lookup = oClass_to_mClass_lookup + 1;
      LoadMobyModel(pMVar11,&DAT_007247d0 + iVar4,&DAT_007247e0,iVar1);
    }
  }
  DAT_00731c90 = 1;
  DAT_00731c94 = 1;
  DAT_00a561c4 = 0;
  DAT_00a37388 = DAT_00a37388 + 1;
  return iVar12 + 0x4000;
}



//==== 000dc7fc  ns=loaders  size=0x360
// sig: void SetUpVisGif(longlong * pGif, short * tex_def, int mip_dist, int filter, int u_clamp, int v_clamp, int index)
// callers(0): 
// callees(5): 00500178 fastfunc::FastLog2; 00502f08 FUN_00502f08; 00502f6c stub::STUB_00502f6c; 00502fbc stub::STUB_00502fbc_RET_0; 00502fd4 stub::STUB_00502fd4_RET_0

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void loaders::SetUpVisGif
               (longlong *pGif,short *tex_def,int mip_dist,int filter,int u_clamp,int v_clamp,
               int index)

{
  short sVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  
  lVar9 = (longlong)((int)tex_def[2] >> 6);
  lVar10 = (longlong)((int)tex_def[2] >> 7);
  uVar6 = fastfunc::FastLog2();
  uVar7 = fastfunc::FastLog2(tex_def[3]);
  sVar1 = tex_def[5];
  sVar2 = tex_def[6];
  sVar3 = tex_def[7];
  iVar4 = GSmem.base >> 8;
  if (index < 0) {
    if (index < -1) {
      uVar5 = (uint)((LZCOUNT(-3 - index) << 0x3a) >> 0x3f) & 0x18;
      lVar9 = stub::STUB_00502fd4_RET_0(0,0,1,filter,0,0,mip_dist);
      *pGif = lVar9;
      lVar9 = FUN_00502f08(1,1,0,0,0,0);
      pGif[2] = lVar9;
      pGif[4] = *(longlong *)(&DAT_00a20450 + uVar5);
      pGif[6] = *(longlong *)(&DAT_00a20460 + uVar5);
    }
    else {
      lVar9 = stub::STUB_00502fd4_RET_0(0,0,1,filter,0,0,mip_dist);
      *pGif = lVar9;
      lVar9 = FUN_00502f08(1,1,0,0,0,0);
      pGif[2] = lVar9;
      lVar9 = stub::STUB_00502fbc_RET_0(0x3ffb,1,0x12,3,3,1,0,0);
      pGif[4] = lVar9;
      lVar9 = stub::STUB_00502f6c(0,0,0,0,0,0);
      pGif[6] = lVar9;
    }
  }
  else {
    lVar8 = stub::STUB_00502fd4_RET_0(0,(longlong)tex_def[4] + -1,1,filter,0,0,mip_dist);
    *pGif = lVar8;
    lVar8 = FUN_00502f08(u_clamp,v_clamp,0,0,index,0);
    pGif[2] = lVar8;
    lVar9 = stub::STUB_00502fbc_RET_0
                      (0,lVar9 + (lVar9 + -1 >> 0x3f & 1U - lVar9),0x13,uVar6,uVar7,1,0,
                       sVar1 + iVar4);
    pGif[4] = lVar9;
    lVar9 = stub::STUB_00502f6c(0,lVar10 + (lVar10 + -1 >> 0x3f & 1U - lVar10),sVar2 + iVar4,1,
                                sVar3 + iVar4,1);
    pGif[6] = lVar9;
  }
  return;
}



//==== 000dcb5c  ns=stub  size=0x4
// sig: undefined STUB_000dcb5c(void)
// callers(0): 
// callees(0): 

void stub::STUB_000dcb5c(void)

{
  return;
}



//==== 000dcb60  ns=stub  size=0x4
// sig: undefined STUB_000dcb60(void)
// callers(0): 
// callees(0): 

void stub::STUB_000dcb60(void)

{
  return;
}



//==== 000dcb64  ns=loaders  size=0x5c
// sig: void ParseMobySeq(MobyClass * pClass, int seq)
// callers(4): 0013ebb0 pause::LoadMenuRatchetModel; 001516c0 pause::M1957_Update_GirlwadOnGameComplete; 0016a5a4 vendor::Vendor_ParseMobySeqs; 0016da88 vendor::Vendor_PreUpdate
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void loaders::ParseMobySeq(MobyClass *pClass,int seq)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = *(int *)(&pClass->type + (int)((longlong)seq << 2));
  if (*(int *)(iVar2 + 0x14) != 0) {
    *(int *)(iVar2 + 0x14) = iVar2 + *(int *)(iVar2 + 0x14);
  }
  iVar4 = 0;
  iVar3 = iVar2;
  if (*(char *)(iVar2 + 0x10) != '\0') {
    do {
      iVar4 = iVar4 + 1;
      bVar1 = *(byte *)(iVar2 + 0x10);
      *(int *)(iVar3 + 0x1c) = *(int *)(iVar3 + 0x1c) + iVar2;
      iVar3 = iVar3 + 4;
    } while (iVar4 < (int)(uint)bVar1);
  }
  return;
}



//==== 000dcbc0  ns=stub  size=0x4
// sig: undefined STUB_000dcbc0(void)
// callers(0): 
// callees(0): 

void stub::STUB_000dcbc0(void)

{
  return;
}



//==== 000dcbc4  ns=stub  size=0x4
// sig: undefined STUB_000dcbc4(void)
// callers(0): 
// callees(0): 

void stub::STUB_000dcbc4(void)

{
  return;
}



//==== 000dcbc8  ns=stub  size=0x4
// sig: undefined STUB_000dcbc8(void)
// callers(0): 
// callees(0): 

void stub::STUB_000dcbc8(void)

{
  return;
}



//==== 000dcbcc  ns=loaders  size=0x7c
// sig: void ParseColl(char * data)
// callers(0): 
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void loaders::ParseColl(char *data)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)data != 0) {
    CollOutput.grid = data + *(int *)data;
  }
  if (*(int *)(data + 4) != 0) {
    collproc::g_HeroCollision = (HeroCollHeader *)(data + *(int *)(data + 4));
    iVar1 = 0;
    if (0 < collproc::g_HeroCollision->cellCount) {
      iVar2 = 0;
      do {
        iVar1 = iVar1 + 1;
        *(int *)((int)&collproc::g_HeroCollision->cells[0].data + iVar2) =
             (int)collproc::g_HeroCollision->pad +
             *(int *)((int)&collproc::g_HeroCollision->cells[0].data + iVar2) + -4;
        iVar2 = iVar2 + 0x10;
      } while (iVar1 < collproc::g_HeroCollision->cellCount);
    }
  }
  return;
}



//==== 000dcc50  ns=loaders  size=0x1ec
// sig: void PrintMobyMemory(int * classes, int cnt)
// callers(0): 
// callees(3): 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt; 005cd098 libc::printf
// strings: 00652290: 'moby %d:      %.1fK\n'

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void loaders::PrintMobyMemory(int *classes,int cnt)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  ulonglong *puVar7;
  int iVar8;
  bool bVar9;
  bool bVar10;
  ulonglong uVar11;
  longlong lVar12;
  undefined8 uVar13;
  int32_t iVar14;
  ulonglong unaff_r24;
  int iVar15;
  ulonglong unaff_r25;
  int *piVar17;
  longlong lVar16;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  longlong lVar18;
  ulonglong unaff_r28;
  longlong lVar19;
  longlong lVar20;
  ulonglong unaff_r29;
  longlong lVar21;
  ulonglong unaff_r30;
  int iVar22;
  ulonglong unaff_r31;
  ulonglong in_LR;
  double dVar23;
  ulonglong in_f31;
  double dVar24;
  undefined1 auVar25 [16];
  
  lVar12 = (longlong)(int)classes;
  uVar11 = ZEXT48(&stack0x00000000);
  lVar20 = uVar11 - 0x10c0;
  puVar7 = (ulonglong *)lVar20;
  *puVar7 = uVar11;
  puVar7[0x21a] = in_LR;
  puVar7[0x217] = in_f31;
  puVar7[0x211] = unaff_r26;
  puVar7[0x20f] = unaff_r24;
  iVar15 = 0;
  puVar7[0x215] = unaff_r30;
  puVar7[0x210] = unaff_r25;
  puVar7[0x216] = unaff_r31;
  iVar22 = 0;
  puVar7[0x214] = unaff_r29;
  puVar7[0x213] = unaff_r28;
  puVar7[0x212] = unaff_r27;
  if (0 < cnt) {
    dVar24 = 0.0009765625;
    lVar19 = lVar12 + 4;
    lVar21 = uVar11 - 0x1050;
    lVar16 = lVar12;
    lVar18 = lVar20;
    do {
      auVar25 = loadVectorLeftIndexed(in_LR,lVar19);
      piVar17 = (int *)lVar16;
      iVar3 = *piVar17;
      auVar25 = vectorConvertFromSignedFixedPointWord(auVar25,0);
      auVar25 = auVar25 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar6 = storeVectorElementWordIndexed
                        (auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60,0,lVar21);
      *(undefined4 *)lVar21 = uVar6;
      iVar8 = (int)lVar18;
      if (iVar3 == 0) {
        fVar1 = 0.0;
      }
      else {
        if (piVar17[8] == 0) {
          dVar23 = (double)fastfunc::FastIntToDouble(piVar17[0x10] - iVar3);
        }
        else {
          dVar23 = (double)fastfunc::FastIntToDouble(piVar17[8] - iVar3);
        }
        lVar12 = -0x40800000;
        fVar1 = (float)(dVar23 * dVar24);
        *(undefined4 *)(iVar8 + 0x78) = 0xbf800000;
        *(undefined4 *)(iVar8 + 0x7c) = 0;
      }
      iVar15 = iVar15 + 1;
      *(float *)(iVar8 + 0x74) = fVar1;
      lVar19 = lVar19 + 0x20;
      lVar16 = lVar16 + 0x20;
      lVar21 = lVar21 + 8;
      lVar18 = lVar18 + 8;
    } while (iVar15 < cnt);
  }
  do {
    iVar15 = 0;
    bVar9 = true;
    lVar16 = lVar20;
    bVar10 = true;
    if (0 < cnt) {
      do {
        bVar9 = bVar10;
        iVar3 = (int)lVar16;
        uVar4 = (int)*(uint *)(iVar3 + 0x74) >> 0x1f;
        uVar5 = (int)*(uint *)(iVar3 + 0x7c) >> 0x1f;
        uVar6 = *(undefined4 *)(iVar3 + 0x74);
        if ((int)((uVar4 >> 1 ^ *(uint *)(iVar3 + 0x74)) - uVar4) <
            (int)((uVar5 >> 1 ^ *(uint *)(iVar3 + 0x7c)) - uVar5)) {
          uVar2 = *(undefined4 *)(iVar3 + 0x70);
          bVar9 = false;
          *(undefined4 *)(iVar3 + 0x74) = *(undefined4 *)(iVar3 + 0x7c);
          *(undefined4 *)(iVar3 + 0x70) = *(undefined4 *)(iVar3 + 0x78);
          *(undefined4 *)(iVar3 + 0x78) = uVar2;
          *(undefined4 *)(iVar3 + 0x7c) = uVar6;
        }
        iVar15 = iVar15 + 1;
        lVar12 = lVar16 + 8;
        lVar16 = lVar12;
        bVar10 = bVar9;
      } while (iVar15 < cnt);
    }
  } while (!bVar9);
  if (0 < cnt) {
    do {
      uVar13 = fastfunc::FastDoubleToInt((double)*(float *)((int)lVar20 + 0x70),lVar12);
      puVar7[8] = (ulonglong)(double)*(float *)((int)lVar20 + 0x74);
      iVar14 = libc::printf("moby %d:      %.1fK\n",uVar13,puVar7[8]);
      lVar12 = (longlong)iVar14;
      iVar22 = iVar22 + 1;
      lVar20 = lVar20 + 8;
    } while (iVar22 < cnt);
  }
  return;
}



//==== 000dce3c  ns=stub  size=0x4
// sig: undefined STUB_000dce3c(void)
// callers(0): 
// callees(0): 

void stub::STUB_000dce3c(void)

{
  return;
}



//==== 000dce40  ns=loaders  size=0x10c
// sig: void LoadHelp(void)
// callers(0): 
// callees(4): 00010388 boot::GetLanguageNameByIdx; 0050027c fastfunc::FastMemCopy32; 00503e00 fios::LoadAssetFromFile; 005cd2a8 libc::snprintf
// strings: 006522a8: 'rc1/ps3data/global/locale/%s' | 006522c8: 'rc1/ps3data/global/locale/japanese'

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void loaders::LoadHelp(void)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  char acStack_90 [128];
  
  if (g_JapaneseMode) {
    libc::snprintf(acStack_90,"rc1/ps3data/global/locale/japanese");
  }
  else {
    uVar1 = boot::GetLanguageNameByIdx();
    libc::snprintf(acStack_90,"rc1/ps3data/global/locale/%s",uVar1);
  }
  fios::LoadAssetFromFile(acStack_90,boot::g_pLocaleBuffer,0x40000);
  Help = *boot::g_pLocaleBuffer;
  help::HelpMsgs = boot::g_pLocaleBuffer;
  fastfunc::FastMemCopy32
            (boot::g_pLocaleBuffer,boot::g_pLocaleBuffer + 2,
             (boot::g_pLocaleBuffer[1] + 3U & 0xfffffffc) - 8);
  if (0 < Help) {
    iVar2 = 0;
    iVar3 = Help;
    do {
      iVar3 = iVar3 + -1;
      *(int *)((int)help::HelpMsgs + iVar2) =
           (int)help::HelpMsgs + *(int *)((int)help::HelpMsgs + iVar2) + -8;
      iVar2 = iVar2 + 0x10;
    } while (0 < iVar3);
  }
  return;
}



//==== 000dcf58  ns=loaders  size=0x1fe0
// sig: undefined NAVG_LoadFile(void)
// callers(1): 000df408 loaders::LoadAllMobys
// callees(43): 00010388 boot::GetLanguageNameByIdx; 00053550 camera::UpdateCamera; 00053ae8 camera::InitCameras; 000678d8 draw::UpdateFog; 0006840c draw::ResetDrawGlobals; 0006c5dc draw::EnableFontColors; 000780f4 stub::STUB_000780f4; 0007f018 hero::Hero_ResetHero; 0007f398 hero::Hero_InitStuff; 000e5068 map::Map_RegisterLevelObject; 000e9150 stub::STUB_000e9150; 000ef810 mobyfunc::InitMobyInstance; 000efa28 mobyfunc::CreateMoby; 000f1ea0 mobyutil::MB_SetLights; 000f31a8 mobyfunc::UpdateMobyTransform; 000fdcf0 mobyutil::MB_SetAnimationNoBlend; 000ffb70 mobyutil::GetGroundZ; 001131a8 mobyutil::SetNtscPalTiming; 0011dfc8 pad::InitPadRing; 00151d98 respawn::???_NAVG_AllocSlot_a0e11c; 0015d758 sound::sound_SetupAmbientFunctions; 0015e2ec space::SetupSpaceShipVars; 00174bd8 stub::STUB_00174bd8; 004fe52c idol::kalloc; 005001fc fastfunc::FastMemSet; 00500250 fastfunc::FastMemSetZero; 0050027c fastfunc::FastMemCopy32; 005002cc fastfunc::FastMemCopy; 005002f4 fastfunc::FastMemCopyReverse16; 00500334 fastfunc::FastMemCopyReverse32; 00503244 stub::FlushCache; 00503e00 fios::LoadAssetFromFile; 0051c030 fios::op_wait_result; 0051cc4c fios::get_default_fs; 005207a0 fios::stat_setup; 00521794 fios::read_setup; 00521b58 fios::filehandle_close_setup; 0052521c fios::read_req_setup; 005c5ad0 libc::memcpy; 005c8420 seedRand
// strings: 006522ec: 'rc1/ps3data/level%d/gameplay_pal' | 00652314: 'rc1/ps3data/level%d/gameplay_ntsc' | 0065233c: '!!!! Too many directional lights !!!! - Lighting will look bogus as a penalty.\n' | 0065238c: '***\nocclusion out of date on mobys (%d / %d)\n***\n' | 006523c4: '***\nocclusion out of date on tfrag\n***\n' | 006523ec: '***\nno occlusion\n***\n' | 006522a8: 'rc1/ps3data/global/locale/%s' | 006522c8: 'rc1/ps3data/global/locale/japanese'

ulonglong loaders::NAVG_LoadFile(int param_1)

{
  u8 uVar1;
  f32 fVar2;
  ushort uVar3;
  MobyModeBit MVar4;
  uint uVar5;
  uint uVar6;
  void *pvVar7;
  MobyClass *pMVar8;
  bool bVar9;
  MobyInstance *pMVar10;
  char *pcVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  int iVar16;
  ulonglong uVar14;
  ulonglong uVar15;
  char cVar23;
  uint uVar17;
  int iVar18;
  Spline **ppSVar19;
  MobyInstance *pMVar20;
  TieInstance *pTVar21;
  undefined4 *puVar22;
  int iVar24;
  ABGR *pAVar25;
  ushort *puVar26;
  uint uVar27;
  ulonglong uVar28;
  undefined2 *puVar29;
  uint uVar30;
  ulonglong uVar31;
  uint *puVar32;
  uint uVar33;
  int *levelVarBlock;
  uint *puVar34;
  int iVar35;
  int iVar36;
  longlong lVar37;
  ABGR *pAVar39;
  longlong lVar38;
  undefined4 *puVar40;
  short *psVar41;
  int *piVar42;
  uint *puVar43;
  int iVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  char acStack_1d0 [128];
  undefined8 local_150;
  int local_148 [2];
  char acStack_140 [64];
  ulonglong local_100;
  ulonglong local_f8;
  ulonglong local_f0;
  uint *local_e8;
  ulonglong local_e0;
  ulonglong local_d8;
  ulonglong local_d0;
  ulonglong local_c8;
  ulonglong local_c0;
  ulonglong local_b8;
  
  uVar5 = Gameplay;
  uVar28 = (ulonglong)Gameplay;
  uVar31 = (ulonglong)DAT_00a108f4;
  uVar12 = fios::get_default_fs();
  if (g_IsPal == 0) {
    libc::snprintf(acStack_140,"rc1/ps3data/level%d/gameplay_ntsc",Level);
  }
  else {
    libc::snprintf(acStack_140,"rc1/ps3data/level%d/gameplay_pal",Level);
  }
  uVar13 = fios::stat_setup(uVar12,0,acStack_140,1,local_148);
  fios::op_wait_result(uVar13,0);
  if (local_148[0] == 0) {
    do {
      cell::cellSysutilCheckCallback(local_148[0]);
      local_148[0] = 100;
      syscall();
    } while( true );
  }
  uVar13 = fios::read_setup(uVar12,0,acStack_140,&local_150,3);
  fios::op_wait_result(uVar13,0);
  if ((DAT_00a108f4 == 0) || (local_c0 = ZEXT48(&DAT_00a108d8), param_1 != 0)) {
    local_c0 = ZEXT48(&DAT_00a108d8);
    uVar31 = idol::kalloc(TEX_BASE,(int)local_150);
    DAT_00a108f4 = (uint)uVar31;
  }
  uVar13 = fios::read_req_setup(uVar12,0,local_148[0],uVar31,local_150,0xffffffffffffffff);
  uVar13 = fios::op_wait_result(uVar13,0);
  if ((int)uVar13 != 0) {
    do {
      cell::cellSysutilCheckCallback(uVar13);
      uVar13 = 100;
      syscall();
    } while( true );
  }
  uVar12 = fios::filehandle_close_setup(uVar12,0,local_148[0]);
  uVar12 = fios::op_wait_result(uVar12,0);
  if ((int)uVar12 != 0) {
    do {
      cell::cellSysutilCheckCallback(uVar12);
      uVar12 = 100;
      syscall();
    } while( true );
  }
  stub::FlushCache(0);
  stub::STUB_000e9150(DAT_00964568,uVar31);
  stub::FlushCache(0);
  fastfunc::FastMemSet(&hero::g_heroMtx,0,0x2310);
  fastfunc::FastMemSet(&GameCamera,0,0x3a0);
  fastfunc::FastMemSet(&mobyfunc::g_AnimLayerPool,0,0x180);
  seedRand(0x4d2);
  mobyutil::SetNtscPalTiming();
  CollOutput.padding[0] = (int)&collproc::g_CollMobyJointCache;
  CollOutput.padding[1] = (int)&MobyClassRef;
  CollOutput.padding[2] = 0;
  CollOutput.collCount = 0;
  CollOutput.damageNext = 0;
  fastfunc::FastMemSetZero(collproc::g_MobyGrid,0x10000);
  fastfunc::FastMemSetZero(&MobyGridAlloc,0x60);
  puVar32 = (uint *)uVar31;
  uVar14 = uVar31 + *puVar32 & 0xffffffff;
  levelVarBlock = (int *)(uVar31 + *puVar32);
  ViewContext.occlColor0 = *levelVarBlock;
  ViewContext.occlColor1 = levelVarBlock[1];
  ViewContext.occlColor2 = levelVarBlock[2];
  levelFog.r = (u8)levelVarBlock[3];
  levelFog.g = (u8)levelVarBlock[4];
  levelFog.b = (u8)levelVarBlock[5];
  LevelFogNearDist = levelVarBlock[6];
  LevelFogFarDist = (float)levelVarBlock[7];
  LevelFogNearIntensity = (float)levelVarBlock[8];
  LevelFogFarIntensity = (float)levelVarBlock[9];
  HeroDeathHeight = levelVarBlock[10];
  g_shipSplinePath = levelVarBlock[0xf];
  g_shipCameraStartCuboid = levelVarBlock[0x10];
  g_shipCameraEndCuboid = levelVarBlock[0x11];
  draw::UpdateFog();
  TfragDrawDist = 512000.0;
  DAT_00a390b8 = 500;
  TieDrawDist = 720.0;
  ShrubDrawDist = 500.0;
  PartClipDist = 0x1f4000;
  stub::STUB_000780f4(ViewContext.occlColor0,ViewContext.occlColor1,ViewContext.occlColor2);
  stub::STUB_00174bd8(&DAT_00a10680);
  fastfunc::FastMemSetZero(PointLights,0x100);
  fastfunc::FastMemSetZero(&PointLightData,0x180);
  fastfunc::FastMemSetZero(DirectionalLights,0x400);
  local_c8 = ZEXT48(&g_SpaceshipPtr);
  local_b8 = ZEXT48(&hero::g_heroMtx);
  iVar16 = *(int *)(g_EngineData + 0x60);
  local_d0 = uVar14;
  if (iVar16 < 0xc) {
    if (iVar16 != 0) goto LAB_000dd3fc;
  }
  else {
    libc::printf("!!!! Too many directional lights !!!! - Lighting will look bogus as a penalty.\n")
    ;
    iVar16 = 0xc;
LAB_000dd3fc:
    fastfunc::FastMemCopy32(DirectionalLights,DAT_00a15f70,iVar16 << 6);
  }
  if (puVar32[0x20] == 0) {
    BlenderCnt = 0;
  }
  else {
    uVar14 = uVar31 + puVar32[0x20];
    lVar37 = (uVar14 & 0xffffffff) + 0x10;
    BlenderCnt = *(uint *)uVar14;
    if (BlenderCnt != 0) {
      fastfunc::FastMemCopy32(&DAT_00a1c900,lVar37,BlenderCnt << 4);
      fastfunc::FastMemCopy32
                (g_Blenders,lVar37 + ((ulonglong)BlenderCnt & 0xfffffff) * 0x10 & 0xffffffff,
                 BlenderCnt << 7);
      uVar27 = BlenderCnt;
      if (0 < (int)BlenderCnt) {
        pAVar25 = &g_Blenders[0].dLightA;
        iVar16 = 0;
        pAVar39 = &g_Blenders[0].dLightB;
        do {
          if ((int)*pAVar25 < 0) {
            pAVar25->A = '\0';
            pAVar25->B = '\0';
            pAVar25->G = '\0';
            pAVar25->R = '\v';
          }
          if ((int)*pAVar39 < 0) {
            pAVar39->A = '\0';
            pAVar39->B = '\0';
            pAVar39->G = '\0';
            pAVar39->R = '\v';
          }
          iVar16 = iVar16 + 1;
          pAVar25 = pAVar25 + 0x20;
          pAVar39 = pAVar39 + 0x20;
        } while (iVar16 < (int)uVar27);
      }
    }
  }
  if (puVar32[4] != 0) {
    levelVarBlock = (int *)(uVar31 + puVar32[g_Language + 4]);
    Help = *levelVarBlock;
    help::HelpMsgs = (int *)uVar5;
    lVar37 = (longlong)(int)((levelVarBlock[1] + 3U & 0xfffffffc) - 8);
    fastfunc::FastMemCopy32(uVar28,(uVar31 + puVar32[g_Language + 4] & 0xffffffff) + 8,lVar37);
    if (0 < Help) {
      iVar35 = 0;
      iVar16 = Help;
      do {
        iVar16 = iVar16 + -1;
        *(uint *)((int)help::HelpMsgs + iVar35) =
             *(int *)((int)help::HelpMsgs + iVar35) + ((int)help::HelpMsgs - 8U);
        iVar35 = iVar35 + 0x10;
      } while (0 < iVar16);
    }
    uVar28 = uVar28 + lVar37 + 0x3f & 0xffffffc0;
  }
  uVar5 = DAT_00a15f80;
  local_e0 = ZEXT48(&TEX_BASE);
  TieCnt = TieCntBase;
  TieInstance = TieInstanceBase;
  iVar16 = 0;
  TieInstanceEnd = TieInstanceBase + TieCntBase;
  DAT_00e583f0 = 0;
  if (DAT_00a15f80 != 0) {
    iVar35 = 0;
    levelVarBlock = &DAT_00e574f0;
    puVar26 = &DAT_00e576f0;
    do {
      iVar24 = DAT_00a15f7c + iVar35;
      uVar27 = iVar16 + 1;
      iVar35 = iVar35 + 0x40;
      uVar3 = *(ushort *)(iVar24 + 0x30);
      *levelVarBlock = iVar24;
      *puVar26 = uVar3;
      levelVarBlock = levelVarBlock + 1;
      puVar26 = puVar26 + 1;
      (&DAT_00e577f0)[uVar3] = (char)iVar16;
      iVar16 = iVar16 + 1;
      DAT_00e583f0 = iVar16;
    } while (uVar27 < uVar5);
  }
  ShrubInstanceCnt = ShrubInstanceCnt;
  ShrubInstance = ShrubInstanceBase;
  ShrubInstanceEnd = ShrubInstanceBase + ShrubInstanceCnt;
  if (puVar32[2] != 0) {
    uVar14 = uVar31 + puVar32[2];
    lVar38 = (uVar14 & 0xffffffff) + 0x10;
    camera::ImportCameraCnt = *(uint *)uVar14;
    camera::ImportCameras = (int)uVar28;
    lVar37 = ((ulonglong)(uint)camera::ImportCameraCnt & 0x7ffffff) * 0x20;
    if (camera::ImportCameraCnt != 0) {
      fastfunc::FastMemSet(uVar28,0,(int)lVar37);
    }
    uVar28 = uVar28 + lVar37 + 0x3f & 0xffffffc0;
    if (0 < camera::ImportCameraCnt) {
      iVar35 = 0;
      iVar16 = 0;
      do {
        iVar16 = iVar16 + 1;
        puVar40 = (undefined4 *)lVar38;
        puVar22 = (undefined4 *)(camera::ImportCameras + iVar35);
        iVar35 = iVar35 + 0x20;
        puVar22[3] = *puVar40;
        *puVar22 = puVar40[1];
        puVar22[1] = puVar40[2];
        puVar22[2] = puVar40[3];
        puVar22[4] = puVar40[4];
        puVar22[5] = puVar40[5];
        puVar22[6] = puVar40[6];
        lVar38 = lVar38 + 0x20;
        puVar22[7] = puVar40[7];
      } while (iVar16 < camera::ImportCameraCnt);
    }
  }
  uVar14 = uVar28;
  if (puVar32[3] != 0) {
    uVar15 = uVar31 + puVar32[3];
    lVar37 = (uVar15 & 0xffffffff) + 0x10;
    g_SoundCnt = *(uint *)uVar15;
    if (g_SoundCnt == 0) {
      sound::g_pSoundInstances = 0;
    }
    else {
      sound::g_pSoundInstances = (int)uVar28;
      uVar14 = uVar28 + (ulonglong)g_SoundCnt * 0x90 + 0x3f & 0xffffffc0;
      fastfunc::FastMemSet(uVar28,0,(int)((ulonglong)g_SoundCnt * 0x90));
      if (0 < (int)g_SoundCnt) {
        iVar16 = 0;
        iVar35 = 0;
        do {
          iVar24 = sound::g_pSoundInstances + iVar16;
          fastfunc::FastMemCopy32(iVar24,lVar37,0x90);
          sound::sound_SetupAmbientFunctions(iVar24);
          iVar35 = iVar35 + 1;
          iVar16 = iVar16 + 0x90;
          lVar37 = lVar37 + 0x90;
        } while (iVar35 < (int)g_SoundCnt);
      }
    }
  }
  puVar34 = (uint *)(uVar31 + puVar32[0x11]);
  uVar5 = *puVar34;
  local_100 = (ulonglong)uVar5;
  puVar29 = &____oClassInstanceList;
  MobyInstance = (MobyInstance *)uVar14;
  uVar28 = (uVar31 + puVar32[0x11] & 0xffffffff) + 0x10;
  uVar31 = (ulonglong)puVar34[1] + ((LZCOUNT(9 - Level) << 0x3a) >> 0x3f & 0x80U);
  local_e8 = puVar32;
  fastfunc::FastMemSet(uVar14,0,(int)((local_100 + uVar31 & 0xffffffff) << 8));
  lVar37 = 0;
  local_d8 = uVar31;
  if (0 < (int)uVar5) {
    iVar35 = 0;
    local_f0 = ZEXT48(&DAT_00a545c4);
    iVar16 = 0;
    uVar12 = 0x3fe0000000000000;
    local_f8 = ZEXT48(&DAT_00a202c0);
    lVar37 = 0;
    dVar46 = 0.0;
    do {
      puVar32 = (uint *)uVar28;
      cVar23 = -2;
      uVar5 = puVar32[1];
      uVar27 = puVar32[2];
      uVar30 = puVar32[4];
      uVar6 = puVar32[3];
      uVar28 = uVar28 + ((ulonglong)*puVar32 & 0xfffffffc) & 0xffffffff;
      uVar17 = puVar32[5];
      uVar33 = uVar30;
      if (uVar27 == 0) goto LAB_000ddaac;
      cVar23 = -1;
      if ((uVar27 & 0x10) != 0) {
        cVar23 = respawn::____NAVG_AllocSlot_a0e11c(Level,uVar6);
      }
      if (*(char *)((int)local_f0 + uVar6) == '\0') {
        iVar24 = (int)uVar6 >> 5;
        if ((uVar27 & 3) == 0) {
          if ((uVar27 & 8) == 0) {
            if ((uVar27 & 0xc) != 4) goto LAB_000ddaac;
            uVar27 = *(uint *)(&DAT_00a0cd1c + Level * 0x100 + iVar24 * 4) & 1 << (uVar6 & 0x1f);
          }
          else {
            uVar27 = *(uint *)(&DAT_00a54dd0 + iVar24 * 4) & 1 << (uVar6 & 0x1f);
          }
          if (uVar27 == 0) goto LAB_000ddaac;
          goto LAB_000ddaa0;
        }
        if (*(char *)((int)local_f8 + uVar5) == -1) {
          if ((uVar27 & 2) == 0) goto LAB_000ddaa0;
          uVar33 = uVar17;
          uVar30 = uVar17;
          if ((*(uint *)(&DAT_00a54dd0 + iVar24 * 4) & 1 << (uVar6 & 0x1f)) != 0) {
            uVar17 = uVar17 + 1;
            uVar33 = ((int)uVar17 >> 1) + (uint)((int)uVar17 < 0 && (uVar17 & 1) != 0);
          }
        }
        else {
          if ((uVar27 & 1) == 0) goto LAB_000ddaa0;
          if ((*(uint *)(&DAT_00a0cd1c + Level * 0x100 + iVar24 * 4) & 1 << (uVar6 & 0x1f)) != 0) {
            uVar27 = uVar30 + 1;
            uVar33 = ((int)uVar27 >> 1) + (uint)((int)uVar27 < 0 && (uVar27 & 1) != 0);
          }
        }
LAB_000ddaac:
        *puVar29 = (short)lVar37;
        pMVar20 = (MobyInstance *)((int)&(MobyInstance->bSphere).x + iVar35);
        mobyfunc::InitMobyInstance(pMVar20,puVar32[6]);
        pMVar20->field74_0xb1 = cVar23;
        pMVar20->uid = (ushort)uVar6;
        pMVar20->levelFlagIdx = (char)uVar5;
        pMVar20->field76_0xb4 = (char)((ushort)(short)uVar33 >> 8);
        pMVar20->field77_0xb5 = (char)(short)uVar33;
        pMVar20->field78_0xb6 = (char)((ushort)(short)uVar30 >> 8);
        pMVar20->field79_0xb7 = (char)(short)uVar30;
        if (pMVar20->pClass != (MobyClass *)0x0) {
          pMVar20->scale = pMVar20->pClass->gScale * (float)puVar32[7];
        }
        pMVar20->drawDistance = (short)puVar32[8];
        pMVar20->updateDistance = (char)puVar32[9];
        (pMVar20->pos).x = (f32)puVar32[0xc];
        (pMVar20->pos).y = (f32)puVar32[0xd];
        (pMVar20->pos).z = (f32)puVar32[0xe];
        (pMVar20->rotation).x = (f32)puVar32[0xf];
        (pMVar20->rotation).y = (f32)puVar32[0x10];
        (pMVar20->rotation).z = (f32)puVar32[0x11];
        pMVar20->group = (s8)puVar32[0x12];
        dVar47 = (double)(float)puVar32[0x14];
        if ((puVar32[0x13] != 0) &&
           (dVar45 = (double)mobyutil::GetGroundZ(uVar12,&pMVar20->pos,0), dVar46 < dVar45)) {
          (pMVar20->pos).z = (float)(dVar45 + dVar47);
        }
        pvVar7 = (void *)puVar32[0x16];
        pMVar20->occlIndex = 0x7f80;
        pMVar20->pVar = pvVar7;
        if (puVar32[0x17] == 0) {
          pMVar20->occlIndex = 0;
        }
        pMVar8 = pMVar20->pClass;
        if (pMVar8 != (MobyClass *)0x0) {
          *(ushort *)&pMVar8->mode_bits = *(ushort *)&pMVar8->mode_bits | (ushort)puVar32[0x18];
        }
        pMVar20->modeBits = pMVar20->modeBits | (MobyModeBit)puVar32[0x18];
        if (pMVar8 != (MobyClass *)0x0) {
          mobyfunc::UpdateMobyTransform(pMVar20);
        }
        uVar5 = puVar32[0x1c];
        iVar24 = puVar32[0x1b] * 0x10000 + puVar32[0x1a] * 0x100 + puVar32[0x19];
        pMVar20->colorManipulator = iVar24;
        mobyutil::MB_SetLights(pMVar20,iVar24,0,0,0);
        uVar31._0_4_ = pMVar20->color;
        uVar31._4_4_ = pMVar20->light;
        pMVar20->color = (int)((uVar31 | (longlong)(int)uVar5) >> 0x20);
        pMVar20->light = (int)(uVar31 | (longlong)(int)uVar5);
        if (puVar32[0x1d] != 0xffffffff) {
          map::Map_RegisterLevelObject(pMVar20,puVar32[0x1d]);
        }
        iVar35 = iVar35 + 0x100;
        lVar37 = lVar37 + 1;
      }
      else {
LAB_000ddaa0:
        *puVar29 = 0xffff;
      }
      iVar16 = iVar16 + 1;
      puVar29 = puVar29 + 1;
    } while (iVar16 < (int)local_100);
  }
  puVar32 = local_e8;
  MobyInstancePermEnd = (MobyInstance *)((int)&(MobyInstance->bSphere).x + (int)(lVar37 << 8));
  lVar38 = uVar14 + (local_d8 + lVar37 & 0xffffff) * 0x100;
  MobyInstancePermEnd->state = 0xff;
  MobyInstanceEnd = MobyInstance + (int)(local_d8 + lVar37) + -1;
  DAT_00a390b0 = (undefined4)lVar38;
  uVar5 = local_e8[0x16];
  uVar28 = lVar38 + (local_d8 & 0x1ffffff) * 0x80 + 0x3f & 0xffffffc0;
  uVar31 = uVar28;
  puVar34 = local_e8;
  if (uVar5 != 0) {
    uVar27 = local_e8[0x15];
    if (0 < camera::ImportCameraCnt) {
      iVar35 = 0;
      iVar16 = 0;
      do {
        iVar24 = camera::ImportCameras + iVar35;
        if (*(int *)(iVar24 + 0x1c) < 0) {
          *(undefined4 *)(iVar24 + 0x1c) = 0;
        }
        else {
          iVar44 = *(int *)(iVar24 + 0x1c) * 8;
          iVar36 = *(int *)((int)puVar32 + iVar44 + uVar27);
          lVar37 = (longlong)*(int *)((int)puVar32 + iVar44 + uVar27 + 4);
          *(int *)(iVar24 + 0x1c) = (int)uVar31;
          fastfunc::FastMemCopy(uVar31,(int)puVar32 + iVar36 + uVar5,lVar37);
          *(int *)((int)puVar32 + iVar44 + uVar27) = (int)uVar31;
          uVar31 = uVar31 + lVar37 & 0xffffffff;
        }
        iVar16 = iVar16 + 1;
        iVar35 = iVar35 + 0x20;
      } while (iVar16 < camera::ImportCameraCnt);
    }
    if (0 < (int)g_SoundCnt) {
      iVar35 = 0;
      iVar16 = 0;
      uVar30 = g_SoundCnt;
      do {
        iVar24 = sound::g_pSoundInstances + iVar35;
        if (*(int *)(iVar24 + 8) < 0) {
          *(undefined4 *)(iVar24 + 8) = 0;
        }
        else {
          iVar18 = *(int *)(iVar24 + 8) * 8;
          iVar44 = *(int *)((int)puVar32 + iVar18 + uVar27);
          iVar36 = *(int *)((int)puVar32 + iVar18 + uVar27 + 4);
          *(int *)(iVar24 + 8) = (int)uVar31;
          lVar37 = (longlong)iVar36;
          fastfunc::FastMemCopy(uVar31,(int)puVar32 + iVar44 + uVar5,lVar37);
          *(int *)((int)puVar32 + iVar18 + uVar27) = (int)uVar31;
          uVar31 = uVar31 + lVar37 & 0xffffffff;
          uVar30 = g_SoundCnt;
        }
        iVar16 = iVar16 + 1;
        iVar35 = iVar35 + 0x90;
      } while (iVar16 < (int)uVar30);
    }
    puVar34 = local_e8;
    if (MobyInstance != MobyInstancePermEnd) {
      pMVar20 = MobyInstance;
      do {
        if ((int)pMVar20->pVar < 0) {
          pMVar20->pVar = (void *)0x0;
        }
        else {
          iVar35 = (int)pMVar20->pVar * 8;
          iVar16 = *(int *)((int)puVar32 + iVar35 + uVar27);
          lVar37 = (longlong)*(int *)((int)puVar32 + iVar35 + uVar27 + 4);
          pMVar20->pVar = (void *)uVar31;
          fastfunc::FastMemCopy(uVar31,(int)puVar32 + iVar16 + uVar5,lVar37);
          *(void **)((int)puVar32 + iVar35 + uVar27) = (void *)uVar31;
          uVar31 = uVar31 + lVar37 & 0xffffffff;
        }
        pMVar20 = pMVar20 + 1;
      } while (pMVar20 != MobyInstancePermEnd);
    }
    uVar31 = uVar31 + 0x3f & 0xffffffc0;
  }
  iVar16 = (int)uVar28;
  if (puVar34[0x14] != 0) {
    levelVarBlock = (int *)((int)puVar34 + puVar34[0x14]);
    uVar5 = puVar34[0x15];
    iVar35 = *levelVarBlock;
    while (-1 < iVar35) {
      iVar35 = *(int *)((int)puVar34 + *levelVarBlock * 8 + uVar5);
      if (iVar16 <= iVar35) {
        piVar42 = (int *)(iVar35 + levelVarBlock[1]);
        iVar35 = *piVar42;
        if (-1 < iVar35) {
          *piVar42 = (int)(short)(&____oClassInstanceList)[iVar35];
        }
      }
      levelVarBlock = levelVarBlock + 2;
      iVar35 = *levelVarBlock;
    }
  }
  if (puVar34[0x17] != 0) {
    levelVarBlock = (int *)((int)puVar34 + puVar34[0x17]);
    uVar5 = puVar34[0x15];
    iVar35 = *levelVarBlock;
    while (-1 < iVar35) {
      iVar35 = *(int *)((int)puVar34 + *levelVarBlock * 8 + uVar5);
      if (iVar16 <= iVar35) {
        *(int *)(iVar35 + levelVarBlock[1]) = *(int *)(iVar35 + levelVarBlock[1]) + iVar35;
      }
      levelVarBlock = levelVarBlock + 2;
      iVar35 = *levelVarBlock;
    }
  }
  uVar28 = uVar31;
  if (puVar34[0x12] != 0) {
    levelVarBlock = (int *)((int)puVar34 + puVar34[0x12]);
    puVar32 = (uint *)(levelVarBlock + 4);
    iVar35 = *levelVarBlock;
    iVar24 = levelVarBlock[1];
    uVar28 = uVar31 + (longlong)iVar24 + 0x3f & 0xffffffc0;
    if (iVar24 != 0) {
      fastfunc::FastMemCopyReverse16(uVar31,levelVarBlock + iVar35 + 4,(longlong)iVar24);
    }
    levelVarBlock = &mobyutil::g_MobyGroups;
    fastfunc::FastMemSet(&mobyutil::g_MobyGroups,0,0x1c0);
    if (0 < iVar35) {
      iVar24 = 0;
      do {
        if (-1 < (int)*puVar32) {
          uVar15 = *puVar32 + uVar31;
          mobyutil::g_NumMobyGroups = iVar24 + 1;
          uVar14 = uVar15 & 0xffffffff;
          *levelVarBlock = (int)uVar15;
          uVar15 = uVar14;
          while( true ) {
            uVar3 = *(ushort *)uVar15;
            if (-1 < (short)(&____oClassInstanceList)[uVar3 & 0x7fff]) {
              *(short *)uVar14 = (&____oClassInstanceList)[uVar3 & 0x7fff];
              uVar14 = uVar14 + 2;
            }
            if ((uVar3 & 0x8000) != 0) break;
            uVar15 = uVar15 + 2;
          }
          iVar36 = (int)uVar14;
          if (*levelVarBlock < iVar36) {
            *(ushort *)(iVar36 + -2) = *(ushort *)(iVar36 + -2) | 0x8000;
          }
          else {
            *levelVarBlock = 0;
          }
        }
        iVar24 = iVar24 + 1;
        puVar32 = puVar32 + 1;
        levelVarBlock = levelVarBlock + 1;
      } while (iVar24 < iVar35);
    }
  }
  puVar32 = local_e8;
  uVar31 = uVar28;
  if (local_e8[0x13] != 0) {
    levelVarBlock = (int *)((int)local_e8 + local_e8[0x13]);
    iVar35 = levelVarBlock[1];
    lVar37 = (longlong)*levelVarBlock;
    uVar31 = uVar28 + lVar37 + 0x3f & 0xffffffc0;
    if (*levelVarBlock != 0) {
      fastfunc::FastMemCopyReverse32(uVar28,ZEXT48(levelVarBlock) + 0x10,lVar37);
    }
    uVar5 = puVar32[0x15];
    uVar14 = ZEXT48(levelVarBlock) + 0x10 + lVar37 & 0xffffffff;
    if (0 < iVar35) {
      iVar24 = 0;
      do {
        psVar41 = (short *)uVar14;
        iVar36 = (int)((longlong)*psVar41 << 3);
        if (iVar16 <= *(int *)((int)puVar32 + iVar36 + uVar5)) {
          *(int *)(*(int *)((int)puVar32 + iVar36 + uVar5) + (int)psVar41[1]) =
               *(int *)(psVar41 + 2) + (int)uVar28;
        }
        iVar24 = iVar24 + 1;
        uVar14 = uVar14 + 8;
      } while (iVar24 < iVar35);
    }
  }
  uVar28 = uVar31;
  if (puVar32[0x1c] != 0) {
    levelVarBlock = (int *)((int)puVar32 + puVar32[0x1c]);
    piVar42 = levelVarBlock + 4;
    SplineCnt = *levelVarBlock;
    iVar16 = levelVarBlock[2];
    uVar28 = uVar31 + (longlong)iVar16 + 0x3f & 0xffffffc0;
    SplineOfs = (void *)uVar31;
    if (iVar16 != 0) {
      fastfunc::FastMemCopy(uVar31,(int)levelVarBlock + levelVarBlock[1],(longlong)iVar16);
    }
    pvVar7 = SplineOfs;
    if (0 < SplineCnt) {
      ppSVar19 = Splines;
      iVar16 = SplineCnt;
      do {
        iVar35 = *piVar42;
        iVar16 = iVar16 + -1;
        piVar42 = piVar42 + 1;
        *ppSVar19 = (Spline *)(iVar35 + (int)pvVar7);
        ppSVar19 = ppSVar19 + 1;
      } while (0 < iVar16);
    }
  }
  if (puVar32[0x1d] != 0) {
    puVar32 = (uint *)((int)local_e8 + puVar32[0x1d]);
    puVar34 = puVar32 + 4;
    DAT_00a1a860 = *puVar32;
    uVar5 = puVar32[1];
    uVar27 = puVar32[2];
    DAT_00a1a85c = (int)uVar28;
    uVar31 = uVar28 + ((ulonglong)DAT_00a1a860 & 0x7ffffff) * 0x20 + 0x3f & 0xffffffc0;
    if (0 < (int)DAT_00a1a860) {
      iVar35 = 0;
      iVar16 = 0;
      do {
        libc::memcpy((void *)(DAT_00a1a85c + iVar35),puVar34,0x10);
        puVar43 = puVar34 + 4;
        iVar16 = iVar16 + 1;
        iVar24 = DAT_00a1a85c + iVar35;
        puVar34 = puVar34 + 8;
        iVar35 = iVar35 + 0x20;
        *(uint *)(iVar24 + 0x14) = *puVar43;
      } while (iVar16 < (int)DAT_00a1a860);
    }
    uVar28 = uVar31 + (longlong)(int)uVar27 + 0x3f & 0xffffffc0;
    if (uVar27 != 0) {
      fastfunc::FastMemCopy(uVar31,(int)puVar32 + uVar5,(longlong)(int)uVar27);
    }
    if (0 < (int)DAT_00a1a860) {
      iVar35 = 0;
      iVar16 = 0;
      do {
        iVar16 = iVar16 + 1;
        uVar5 = *puVar34;
        iVar24 = DAT_00a1a85c + iVar35;
        iVar35 = iVar35 + 0x20;
        puVar34 = puVar34 + 1;
        *(uint *)(iVar24 + 0x10) = uVar5 + (int)uVar31;
      } while (iVar16 < (int)DAT_00a1a860);
    }
  }
  puVar32 = local_e8;
  uVar31 = uVar28;
  if (local_e8[0x1b] != 0) {
    puVar34 = (uint *)((int)local_e8 + local_e8[0x1b]);
    puVar43 = puVar34 + 4;
    DAT_00a51bc4 = *puVar34;
    DAT_00a51bc0 = (int)uVar28;
    uVar31 = uVar28 + (ulonglong)DAT_00a51bc4 * 0x90 + 0x3f & 0xffffffc0;
    if (DAT_00a51bc4 != 0) {
      fastfunc::FastMemSet(uVar28,0,(int)((ulonglong)DAT_00a51bc4 * 0x90));
    }
    if (0 < (int)DAT_00a51bc4) {
      iVar16 = 0;
      iVar35 = 0;
      do {
        fastfunc::FastMemCopy32(DAT_00a51bc0 + iVar16,puVar43,0x90);
        iVar35 = iVar35 + 1;
        iVar16 = iVar16 + 0x90;
        puVar43 = puVar43 + 0x20;
      } while (iVar35 < (int)DAT_00a51bc4);
    }
  }
  uVar28 = uVar31;
  if (puVar32[0x18] != 0) {
    puVar34 = (uint *)((int)puVar32 + puVar32[0x18]);
    puVar43 = puVar34 + 4;
    CuboidCnt = *puVar34;
    lVar37 = ((ulonglong)(uint)CuboidCnt & 0x1ffffff) * 0x80;
    Cuboids = (Cuboid *)uVar31;
    uVar28 = uVar31 + lVar37 + 0x3f & 0xffffffc0;
    if (CuboidCnt != 0) {
      fastfunc::FastMemSet(uVar31,0,(int)lVar37);
    }
    if (0 < CuboidCnt) {
      iVar16 = 0;
      iVar35 = 0;
      do {
        fastfunc::FastMemCopy32((int)&(Cuboids->matrix).v0.x + iVar16,puVar43,0x80);
        iVar35 = iVar35 + 1;
        iVar16 = iVar16 + 0x80;
        puVar43 = puVar43 + 0x20;
      } while (iVar35 < CuboidCnt);
    }
  }
  uVar31 = uVar28;
  if (puVar32[0x19] != 0) {
    puVar34 = (uint *)((int)puVar32 + puVar32[0x19]);
    puVar43 = puVar34 + 4;
    SphereCnt = *puVar34;
    lVar37 = ((ulonglong)(uint)SphereCnt & 0x1ffffff) * 0x80;
    Spheres = (Sphere *)uVar28;
    uVar31 = uVar28 + lVar37 + 0x3f & 0xffffffc0;
    if (SphereCnt != 0) {
      fastfunc::FastMemSet(uVar28,0,(int)lVar37);
    }
    if (0 < SphereCnt) {
      iVar16 = 0;
      iVar35 = 0;
      do {
        fastfunc::FastMemCopy32((int)&(Spheres->matrix).v0.x + iVar16,puVar43,0x80);
        iVar35 = iVar35 + 1;
        iVar16 = iVar16 + 0x80;
        puVar43 = puVar43 + 0x20;
      } while (iVar35 < SphereCnt);
    }
  }
  uVar28 = uVar31;
  if (puVar32[0x1a] != 0) {
    puVar34 = (uint *)((int)puVar32 + puVar32[0x1a]);
    puVar43 = puVar34 + 4;
    CylinderCnt = *puVar34;
    lVar37 = ((ulonglong)(uint)CylinderCnt & 0x1ffffff) * 0x80;
    Cylinders = (Cylinder *)uVar31;
    uVar28 = uVar31 + lVar37 + 0x3f & 0xffffffc0;
    if (CylinderCnt != 0) {
      fastfunc::FastMemSet(uVar31,0,(int)lVar37);
    }
    if (0 < CylinderCnt) {
      iVar16 = 0;
      iVar35 = 0;
      do {
        fastfunc::FastMemCopy32((int)&(Cylinders->matrix).v0.x + iVar16,puVar43,0x80);
        iVar35 = iVar35 + 1;
        iVar16 = iVar16 + 0x80;
        puVar43 = puVar43 + 0x20;
      } while (iVar35 < CylinderCnt);
    }
  }
  if (puVar32[0x21] != 0) {
    puVar34 = (uint *)((int)puVar32 + puVar32[0x21]);
    uVar5 = *puVar34;
    camera::CamCollGrid = (undefined4)uVar28;
    fastfunc::FastMemCopy32(uVar28,puVar34 + 4,uVar5 + 0x4000);
    uVar28 = uVar28 + uVar5 + 0x403f & 0xffffffc0;
  }
  if (puVar32[0x1e] != 0) {
    puVar34 = (uint *)((int)puVar32 + puVar32[0x1e]);
    uVar5 = *puVar34;
    Blenders = (Blender *)uVar28;
    fastfunc::FastMemCopy32(uVar28,puVar34 + 4,uVar5 + 0x4000);
    uVar28 = uVar28 + uVar5 + 0x403f & 0xffffffc0;
  }
  uVar31 = uVar28;
  if (puVar32[0x1f] != 0) {
    puVar34 = (uint *)((int)puVar32 + puVar32[0x1f]);
    DAT_00a1c840 = *puVar34;
    lVar37 = ((ulonglong)DAT_00a1c840 & 0x7ffffff) * 0x20;
    DAT_00a1c880 = (undefined4)uVar28;
    uVar31 = uVar28 + lVar37 + 0x3f & 0xffffffc0;
    if (DAT_00a1c840 != 0) {
      fastfunc::FastMemCopy32(uVar28,puVar34 + 4,(int)lVar37);
    }
  }
  uVar28 = uVar31;
  if (puVar32[0x22] != 0) {
    puVar34 = (uint *)((int)puVar32 + puVar32[0x22]);
    DAT_00a4daf4 = *puVar34;
    DAT_00a4db00 = (undefined4)uVar31;
    uVar28 = uVar31 + (ulonglong)DAT_00a4daf4 * 0x30 + 0x3f & 0xffffffc0;
    if (DAT_00a4daf4 != 0) {
      fastfunc::FastMemCopy32(uVar31,puVar34 + 4,(int)((ulonglong)DAT_00a4daf4 * 0x30));
    }
  }
  PartInstances = (void *)uVar28;
  PartIndexNext = 0;
  PartActiveCnt = 0;
  PartIndexTop = 0xffffffff;
  fastfunc::FastMemSetZero(&DAT_00a52000,0x200);
  g_SpaceshipPtr = (MobyInstance *)0x0;
  iVar16 = (int)local_d0;
  if (0 < *(int *)(iVar16 + 0x2c)) {
    if (((Level == Gemlik) && (*(short *)((int)local_c8 + 0x26) == 2)) && (DAT_00a561c0 != 0)) {
      uVar1 = MobyInstance->state;
      pMVar20 = MobyInstance;
      while (uVar1 != 0xff) {
        if ((short)pMVar20->oClass == OCLASSES_SPACESHIP[2]) {
          space::SetupSpaceShipVars(pMVar20);
          mobyutil::MB_SetAnimationNoBlend(pMVar20,1,0);
          if (g_SpaceshipPtr != (MobyInstance *)0x0) goto LAB_000de924;
          break;
        }
        uVar1 = pMVar20[1].state;
        pMVar20 = pMVar20 + 1;
      }
    }
    pMVar20 = mobyfunc::CreateMoby
                        ((MOBY_OCLASSES)
                         *(undefined4 *)
                          ((int)OCLASSES_SPACESHIP +
                          (int)((longlong)*(short *)((int)local_c8 + 0x26) << 2)));
    (pMVar20->pos).x = *(f32 *)(iVar16 + 0x2c);
    (pMVar20->pos).y = *(f32 *)(iVar16 + 0x30);
    MVar4 = pMVar20->modeBits;
    (pMVar20->pos).z = *(f32 *)(iVar16 + 0x34);
    fVar2 = *(f32 *)(iVar16 + 0x38);
    pMVar20->drawDistance = 0xff;
    (pMVar20->rotation).z = fVar2;
    pMVar20->updateDistance = '\x10';
    pMVar20->pUpdate = &PTR_UpdateMoby_Spaceship_00707c58;
    pMVar20->modeBits =
         MVar4 & (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|
                  DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|
                  HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|DISABLED);
    mobyutil::MB_SetAnimationNoBlend(pMVar20,1,0);
    mobyfunc::UpdateMobyTransform(pMVar20);
    g_SpaceshipPtr = pMVar20;
    map::Map_RegisterLevelObject(pMVar20,0);
  }
LAB_000de924:
  iVar16 = TfragsCnt;
  if ((OcclGrid == (void *)0x0) || (puVar32[0x23] == 0)) {
    libc::printf("***\nno occlusion\n***\n");
    pMVar20 = MobyInstance;
    if (MobyInstance != MobyInstanceEnd) {
      do {
        pMVar20->occlIndex = 0x7f80;
        pMVar20 = pMVar20 + 1;
      } while (pMVar20 != MobyInstanceEnd);
    }
    pTVar21 = TieInstance;
    if (TieInstance != TieInstanceEnd) {
      do {
        pTVar21->occlIndex[0] = '\0';
        pTVar21->occlIndex[1] = '\0';
        pTVar21->occlIndex[2] = '\x7f';
        pTVar21->occlIndex[3] = -0x80;
        pTVar21 = pTVar21 + 1;
      } while (pTVar21 != TieInstanceEnd);
    }
    if (0 < TfragsCnt) {
      iVar35 = 0;
      iVar16 = 0;
      do {
        iVar35 = iVar35 + 1;
        pcVar11 = Tfrags->occlIndex;
        (pcVar11 + iVar16)[0] = '\x7f';
        (pcVar11 + iVar16)[1] = -0x80;
        iVar16 = iVar16 + 0x30;
      } while (iVar35 < TfragsCnt);
    }
    OcclUpdate = 0;
  }
  else {
    levelVarBlock = (int *)((int)local_e8 + puVar32[0x23]);
    puVar34 = (uint *)(levelVarBlock + 4);
    iVar35 = *levelVarBlock;
    iVar24 = levelVarBlock[1];
    uVar5 = levelVarBlock[2];
    puVar32 = puVar34 + iVar35 * 2;
    if (((int)TieInstanceEnd - (int)TieInstance) / 0x70 == iVar24) {
      if (0 < iVar24) {
        iVar36 = 0;
        do {
          iVar36 = iVar36 + 1;
          puVar32 = puVar32 + 2;
        } while (iVar36 < iVar24);
      }
    }
    else {
      puVar32 = puVar32 + iVar24 * 2;
    }
    if (MobyInstance->state != 0xff) {
      bVar9 = false;
      iVar44 = 0;
      iVar36 = 0;
      pMVar20 = MobyInstance;
      do {
        if (pMVar20->occlIndex != 0x7f80) {
          iVar44 = iVar44 + 1;
          uVar27 = 0;
          if (0 < (int)uVar5) {
            uVar27 = 0;
            puVar43 = puVar32;
            do {
              uVar30 = puVar43[1];
              if ((uVar30 >> 0x18 | uVar30 >> 8 & 0xff00 | (uVar30 & 0xff00) << 8 | uVar30 << 0x18)
                  == (int)(short)pMVar20->uid) break;
              uVar27 = uVar27 + 1;
              puVar43 = puVar43 + 2;
            } while ((int)uVar27 < (int)uVar5);
          }
          if (uVar27 == uVar5) {
            iVar36 = iVar36 + 1;
            bVar9 = true;
            pMVar20->occlIndex = 0x7f80;
          }
          else {
            uVar27 = *(uint *)((int)(((ulonglong)uVar27 & 0x7fffffff) << 3) + (int)puVar32);
            pMVar20->occlIndex =
                 (short)((int)(uVar27 >> 0x18 | uVar27 >> 8 & 0xff00 |
                              (uVar27 & 0xff00) << 8 | uVar27 << 0x18) >> 3) << 8 |
                 (ushort)(1 << (uVar27 >> 0x18 & 7));
          }
        }
        pMVar10 = pMVar20 + 1;
        pMVar20 = pMVar20 + 1;
      } while (pMVar10->state != 0xff);
      if (bVar9) {
        libc::printf("***\nocclusion out of date on mobys (%d / %d)\n***\n",iVar36,iVar44);
      }
    }
    if (iVar16 == iVar35) {
      if (0 < iVar35) {
        iVar36 = 0;
        iVar16 = iVar35;
        do {
          uVar5 = *puVar34;
          iVar16 = iVar16 + -1;
          puVar34 = puVar34 + 2;
          iVar44 = **(int **)((int)local_e0 + 0x28) + iVar36;
          iVar36 = iVar36 + 0x30;
          *(ushort *)(iVar44 + 0x1e) =
               (short)((int)(uVar5 >> 0x18 | uVar5 >> 8 & 0xff00 |
                            (uVar5 & 0xff00) << 8 | uVar5 << 0x18) >> 3) << 8 |
               (ushort)(1 << (uVar5 >> 0x18 & 7));
        } while (0 < iVar16);
      }
    }
    else {
      libc::printf("***\nocclusion out of date on tfrag\n***\n");
      if (0 < TfragsCnt) {
        iVar36 = 0;
        iVar16 = 0;
        do {
          iVar36 = iVar36 + 1;
          pcVar11 = Tfrags->occlIndex;
          (pcVar11 + iVar16)[0] = '\x7f';
          (pcVar11 + iVar16)[1] = -0x80;
          iVar16 = iVar16 + 0x30;
        } while (iVar36 < TfragsCnt);
      }
    }
    puVar32 = (uint *)(levelVarBlock + iVar35 * 2 + 4);
    if (0 < iVar24) {
      iVar16 = 0;
      do {
        uVar5 = *puVar32;
        iVar24 = iVar24 + -1;
        puVar32 = puVar32 + 2;
        *(int *)(TieInstance->occlIndex + iVar16) =
             ((int)(uVar5 >> 0x18 | uVar5 >> 8 & 0xff00 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18) >>
             3) << 8 | 1 << (uVar5 >> 0x18 & 7);
        iVar16 = iVar16 + 0x70;
      } while (0 < iVar24);
    }
    OcclUpdate = 2;
  }
  uVar31 = local_b8;
  draw::ResetDrawGlobals();
  hero::Hero_ResetHero();
  hero::Hero_InitStuff();
  camera::InitCameras();
  camera::UpdateCamera();
  pad::InitPadRing();
  draw::EnableFontColors();
  pMVar20 = g_SpaceshipPtr;
  mobyutil::g_mobyIdListCount = 0;
  DAT_00a51ee8 = 0;
  DAT_00a51f68 = 0;
  iVar16 = *(int *)((int)uVar31 + 0x2080);
  worldUpdateTime = 0;
  puVar22 = &DAT_007ff23c;
  DAT_00a15c7c = 0;
  lVar37 = 5;
  do {
    *puVar22 = 0;
    puVar22[1] = 0;
    puVar22[2] = 0;
    puVar22[3] = 0;
    puVar22 = puVar22 + 4;
    lVar37 = lVar37 + -1;
  } while (lVar37 != 0);
  DAT_010bb478 = 0;
  if (pMVar20 != (MobyInstance *)0x0) {
    uVar12 = *(undefined8 *)(iVar16 + 0x38);
    pMVar20->color = (int)((ulonglong)uVar12 >> 0x20);
    pMVar20->light = (int)uVar12;
  }
  if ((int)Level < 5) {
    if (Level == Aridia) goto LAB_000dedbc;
  }
  else if ((int)Level < 10) {
    if ((int)Level < 9) {
LAB_000dedbc:
      draw::ScreenColorEffectLevel = &DAT_0071ef00;
      goto LAB_000dede0;
    }
  }
  else if ((int)Level < 0xb) goto LAB_000dedbc;
  draw::ScreenColorEffectLevel = &DAT_0071eed0;
LAB_000dede0:
  draw::ScreenColorEffectNow = draw::ScreenColorEffectLevel;
  if (g_JapaneseMode == false) {
    uVar12 = boot::GetLanguageNameByIdx();
    libc::snprintf(acStack_1d0,"rc1/ps3data/global/locale/%s",uVar12);
  }
  else {
    libc::snprintf(acStack_1d0,"rc1/ps3data/global/locale/japanese");
  }
  iVar16 = (int)local_c0;
  fios::LoadAssetFromFile(acStack_1d0,*(undefined4 *)(iVar16 + 0x54),0x40000);
  help::HelpMsgs = *(int **)(iVar16 + 0x54);
  Help = *help::HelpMsgs;
  fastfunc::FastMemCopy32
            (help::HelpMsgs,help::HelpMsgs + 2,(help::HelpMsgs[1] + 3U & 0xfffffffc) - 8);
  if (0 < Help) {
    iVar35 = 0;
    iVar16 = Help;
    do {
      iVar16 = iVar16 + -1;
      *(int *)((int)help::HelpMsgs + iVar35) =
           (int)help::HelpMsgs + *(int *)((int)help::HelpMsgs + iVar35) + -8;
      iVar35 = iVar35 + 0x10;
    } while (0 < iVar16);
  }
  return uVar28 + 0x40000 & 0xffffffff;
}



//==== 000def38  ns=stub  size=0x8
// sig: undefined STUB_000def38_RET_1(void)
// callers(1): 00164c58 space::DoSpaceTransition
// callees(0): 

undefined8 stub::STUB_000def38_RET_1(void)

{
  return 1;
}



//==== 000def40  ns=loaders  size=0x14
// sig: undefined ???_Unused_IncCounter_a204ac(void)
// callers(0): 
// callees(0): 

void loaders::____Unused_IncCounter_a204ac(void)

{
  DAT_00a204ac = DAT_00a204ac + 1;
  return;
}



//==== 000def54  ns=loaders  size=0x24
// sig: undefined AdvanceLoadingStage(void)
// callers(0): 
// callees(0): 

void loaders::AdvanceLoadingStage(void)

{
  g_LoadingStage = g_LoadingStage + 1;
  DAT_00a204b0 = DAT_00a204b0 + 1;
  return;
}



//==== 000def78  ns=loaders  size=0x488
// sig: undefined LoadLevelFiles(void)
// callers(3): 000e0e60 main::startLevel; 00164760 space::PlaySpacePlate; 00164c58 space::DoSpaceTransition
// callees(14): 004fe5c8 FUN_004fe5c8; 004fe5ec FUN_004fe5ec; 004fe6ec FUN_004fe6ec; 00503128 stub::FUN_00503128_RET_0; 00503404 FUN_00503404; 00503494 idol::m_LoadGameFileS; 00503e00 fios::LoadAssetFromFile; 00505b30 FUN_00505b30; 00505d20 stub::STUB_00505d20; 00505f48 stub::STUB_00505f48; 005085cc fios::LoadAssetAsync; 005cd2a8 libc::snprintf; 0060a9b4 989snd::snd_UnloadBank; 0060c0d0 FUN_0060c0d0
// strings: 000df3ac: 'HBiu`' (raw) | 000df2f8: 'HBj)`' (raw) | 000df2cc: 'HBjU`' (raw) | 00652404: 'rc1/ps3data/level%d/engine.ps3' | 00652424: 'rc1/ps3data/level%d/vram.ps3' | 00652444: 'space_ships' | 00652454: 'rc1/ps3data/japan_font.ps3' | 00652474: 'rc1/ps3data/japan_font.vram' | 00652494: 'gameplay_pal' | 006524a4: 'gameplay_ntsc' | 006524b4: 'rc1/ps3data/level%d/sound.bnk'

undefined8 loaders::LoadLevelFiles(void)

{
  short sVar1;
  int iVar3;
  undefined8 uVar2;
  undefined4 uVar4;
  int iVar5;
  char acStack_160 [64];
  char acStack_120 [128];
  char acStack_a0 [128];
  
  iVar5 = (int)g_SpaceshipVariant;
  iVar3 = stub::FUN_00503128_RET_0(1);
  sVar1 = g_LoadingStage;
  if (iVar3 == 0) {
    if (g_LoadingStage == 7) {
      iVar3 = stub::STUB_00505d20();
      sVar1 = g_LoadingStage;
      if ((iVar3 == 0) && (DAT_0071f404 != -1)) {
        stub::STUB_00505f48();
        return 1;
      }
    }
    else if (g_LoadingStage == 6) {
      iVar3 = stub::STUB_00505d20();
      sVar1 = g_LoadingStage;
      if (iVar3 == 0) {
        DAT_0071f404 = -1;
        libc::snprintf(acStack_160,"rc1/ps3data/level%d/sound.bnk",Level);
        FUN_004fe5c8(TEX_BASE,0x10);
        uVar2 = FUN_004fe5ec(TEX_BASE);
        uVar4 = fios::LoadAssetFromFile(acStack_160,uVar2,0xffffffffffffffff);
        FUN_004fe6ec(TEX_BASE,uVar4);
        FUN_00505b30(uVar2,&PTR_sound_BasicCB_00707c38,&DAT_0071f404);
        sVar1 = g_LoadingStage + 1;
      }
    }
    else if (g_LoadingStage == 5) {
      iVar3 = stub::STUB_00505d20();
      sVar1 = g_LoadingStage;
      if (iVar3 == 0) {
        stub::STUB_00505f48();
        sVar1 = g_LoadingStage + 1;
      }
    }
    else if (g_LoadingStage == 4) {
      iVar3 = stub::STUB_00505d20();
      sVar1 = g_LoadingStage;
      if (iVar3 == 0) {
        989snd::snd_UnloadBank(DAT_0071f404,1);
        DAT_0071f404 = 0;
        sVar1 = g_LoadingStage + 1;
      }
    }
    else if (g_LoadingStage == 3) {
      if (DAT_00964562 == 0) {
        FUN_0060c0d0();
        sVar1 = 6;
        if (DAT_0071f404 != 0) {
          sVar1 = g_LoadingStage + 1;
        }
      }
    }
    else if (g_LoadingStage == 2) {
      if (Cutscene == 0) {
        FUN_00503404(DAT_00964568,"gameplay_ntsc");
      }
      else {
        FUN_00503404(DAT_00964568,"gameplay_pal");
      }
      sVar1 = g_LoadingStage + 1;
    }
    else if (g_LoadingStage == 1) {
      if (DAT_00a204b0 == 2) {
        DAT_00a204b0 = 0;
      }
      idol::m_LoadGameFileS(DAT_0096456c,"space_ships");
      fios::LoadAssetFromFile("rc1/ps3data/japan_font.ps3",&boot::g_JapanFontTex,0x24);
      fios::LoadAssetFromFile("rc1/ps3data/japan_font.vram",DAT_00a10930,0x80000);
      boot::g_JapanFontTex = boot::g_JapanFontTex + (DAT_00a10930 - *(int *)(g_viewMtxPtr + 0x4ac));
      sVar1 = g_LoadingStage + 1;
    }
    else if ((g_LoadingStage == 0) && (DAT_00a204b0 == 0)) {
      iVar3 = DAT_010ea644 * 0x800 + 0xfff;
      DAT_00964568 = 0x10000000 -
                     (iVar3 + ((uint)((LZCOUNT(-Cutscene) << 0x3a) >> 0x3f) &
                              (DAT_010ea63c * 0x800 + 0xfff) - iVar3) & 0xfffff000);
      DAT_0096456c = DAT_00964568 -
                     (*(int *)(&DAT_010ea10c + (iVar5 + 1) * 8) * 0x800 + 0xfffU & 0xfffff000);
      DAT_00964564 = DAT_0096456c - (DAT_010ea634 * 0x800 + 0xfffU & 0xfffff000);
      libc::snprintf(acStack_120,"rc1/ps3data/level%d/engine.ps3",Level);
      libc::snprintf(acStack_a0,"rc1/ps3data/level%d/vram.ps3",Level);
      DAT_00a204b0 = 1;
      fios::LoadAssetAsync(&TEX_BASE,acStack_120,acStack_a0,&PTR_AdvanceLoadingStage_00705ad0);
      sVar1 = g_LoadingStage;
    }
  }
  else {
    DAT_009636c0 = DAT_009636c0 + 1;
  }
  g_LoadingStage = sVar1;
  return 0;
}



//==== 000df408  ns=loaders  size=0xc30
// sig: undefined LoadAllMobys(void)
// callers(1): 000e0e60 main::startLevel
// callees(14): 000dbc38 loaders::LoadMobyModel; 000dcf58 loaders::NAVG_LoadFile; 000fbfa0 mobyfunc::GetMobyFunction; 000fc024 mobyfunc::UpdateMobysInitial; 00151e0c respawn::ClearCheckpointData; 001521d0 respawn::RestoreCheckpoint; 004fe5c8 FUN_004fe5c8; 004fe5f4 FUN_004fe5f4; 004fe6ec FUN_004fe6ec; 005001fc fastfunc::FastMemSet; 0050027c fastfunc::FastMemCopy32; 00503e00 fios::LoadAssetFromFile; 005cd098 libc::printf; 005cd2a8 libc::snprintf
// strings: 006524d4: 'internal level sound mismatch\n' | 006524f4: 'internal moby sound mismatch on moby %d\n' | 00652524: 'rc1/ps3data/global/spaceship%d.ps3' | 0065254c: 'rc1/ps3data/global/spaceship%d.vram'

undefined8 loaders::LoadAllMobys(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int *piVar8;
  int iVar9;
  undefined8 uVar7;
  undefined4 uVar10;
  int iVar11;
  undefined4 *puVar12;
  undefined2 *puVar13;
  undefined4 *puVar14;
  int *piVar15;
  int *piVar16;
  int *piVar17;
  byte bVar18;
  int iVar19;
  undefined4 *puVar20;
  ulonglong uVar21;
  MOBY_OCLASSES MVar23;
  uint uVar22;
  uint uVar24;
  MobyClass *pMVar25;
  short *psVar26;
  undefined2 *puVar27;
  int iVar28;
  short *psVar29;
  longlong lVar30;
  ulonglong uVar31;
  longlong lVar32;
  int iVar33;
  char acStack_130 [64];
  char acStack_f0 [64];
  undefined8 local_b0;
  undefined8 local_a8;
  ulonglong local_a0;
  
  piVar17 = g_EngineData;
  uVar5 = DAT_00a108ec;
  uVar21 = (ulonglong)DAT_00a108ec;
  local_b0 = param_1;
  local_a8 = param_2;
  if ((int)param_1 != 0) {
    fastfunc::FastMemCopy32(&DAT_00a202c0,g_LevelFlags + Level,0x10);
    DAT_00a1bfd8 = piVar17[0x1d] + (int)piVar17;
    iVar11 = (int)piVar17 + piVar17[1];
    IconTableEntry = (IconTableEntries *)((int)piVar17 + *(int *)(DAT_00a1bfd8 + 4));
    DAT_00a4dae0 = DAT_0071f404;
    TexturePointerArray = (int)piVar17 + *(int *)(DAT_00a1bfd8 + 8);
    TfragsCnt = (uint)*(ushort *)((int)DAT_00a15f74 + 6);
    OcclGrid = (void *)(iVar11 + ((uint)((LZCOUNT(-piVar17[1]) << 0x3a) >> 0x3f) & -iVar11));
    piVar15 = (int *)((int)piVar17 + piVar17[5]);
    iVar11 = *piVar17;
    Tfrags = (Tfrag *)*DAT_00a15f74;
    if (*piVar15 != 0) {
      CollOutput.grid = (void *)((int)piVar15 + *piVar15);
    }
    if (piVar15[1] != 0) {
      collproc::g_HeroCollision = (HeroCollHeader *)((int)piVar15 + piVar15[1]);
      iVar28 = 0;
      if (0 < collproc::g_HeroCollision->cellCount) {
        iVar33 = 0;
        do {
          iVar28 = iVar28 + 1;
          *(int *)((int)&collproc::g_HeroCollision->cells[0].data + iVar33) =
               (int)collproc::g_HeroCollision->pad +
               *(int *)((int)&collproc::g_HeroCollision->cells[0].data + iVar33) + -4;
          iVar33 = iVar33 + 0x10;
        } while (iVar28 < collproc::g_HeroCollision->cellCount);
      }
    }
    iVar28 = 0;
    uVar24 = 0;
    piVar15 = (int *)((int)piVar17 + iVar11) + 1;
    iVar11 = *(int *)((int)piVar17 + iVar11);
    if (0 < iVar11) {
      do {
        iVar19 = oClass_to_mClass_lookup;
        iVar33 = *piVar15;
        iVar9 = piVar15[1] + (int)piVar17;
        pMVar25 = (MobyClass *)(iVar9 + ((uint)((LZCOUNT(-piVar15[1]) << 0x3a) >> 0x3f) & -iVar9));
        iVar9 = oClass_to_mClass_lookup * 4;
        (&MobyClassLookup)[iVar33] = (char)oClass_to_mClass_lookup;
        MVar23 = (MOBY_OCLASSES)iVar33;
        (&mClass_to_oClass)[iVar19] = MVar23;
        MobyClasses[iVar19] = pMVar25;
        if (pMVar25 == (MobyClass *)0x0) {
          mobyfunc::GetMobyFunction(MVar23);
          oClass_to_mClass_lookup = oClass_to_mClass_lookup + 1;
        }
        else {
          *(undefined4 *)(&MobyMipDists + iVar9) = *(undefined4 *)&pMVar25->bangles;
          mobyfunc::GetMobyFunction(MVar23);
          oClass_to_mClass_lookup = oClass_to_mClass_lookup + 1;
          LoadMobyModel(pMVar25,(void *)0x0,(char *)(piVar15 + 4),iVar33);
        }
        iVar28 = iVar28 + 1;
        piVar15 = piVar15 + 2;
      } while (iVar28 < iVar11);
    }
    iVar11 = 0;
    piVar15 = (int *)((int)piVar17 + piVar17[6]);
    if (MobyClasses[0]->seq_cnt != '\0') {
      iVar28 = 0;
      do {
        if (*piVar15 != 0) {
          *(int *)(&MobyClasses[0]->type + iVar28) = *piVar15 + (int)piVar17;
          iVar33 = *(int *)(&MobyClasses[0]->type + iVar28);
          if (*(int *)(iVar33 + 0x14) != 0) {
            *(int *)(iVar33 + 0x14) = iVar33 + *(int *)(iVar33 + 0x14);
          }
          iVar19 = 0;
          iVar9 = iVar33;
          if (*(char *)(iVar33 + 0x10) != '\0') {
            do {
              iVar19 = iVar19 + 1;
              *(int *)(iVar9 + 0x1c) = *(int *)(iVar9 + 0x1c) + iVar33;
              iVar9 = iVar9 + 4;
            } while (iVar19 < (int)(uint)*(byte *)(iVar33 + 0x10));
          }
        }
        iVar11 = iVar11 + 1;
        piVar15 = piVar15 + 1;
        iVar28 = iVar28 + 4;
      } while (iVar11 < (int)(uint)MobyClasses[0]->seq_cnt);
    }
    g_gadgetIdx = 0xffffffff;
    DAT_00a4daec = 0;
    iVar11 = piVar17[0x14];
    puVar14 = (undefined4 *)((int)piVar17 + piVar17[0x13]);
    maximumNumWeapons = iVar11;
    if (0 < iVar11) {
      puVar12 = &DAT_00a4d540;
      piVar15 = &DAT_00a4d5a0;
      puVar20 = &DAT_00a4d600;
      do {
        iVar11 = iVar11 + -1;
        *puVar12 = *puVar14;
        iVar28 = puVar14[1];
        puVar12 = puVar12 + 1;
        *puVar20 = puVar14[2];
        puVar20 = puVar20 + 1;
        puVar14 = puVar14 + 4;
        *piVar15 = iVar28 + (int)piVar17;
        piVar15 = piVar15 + 1;
      } while (0 < iVar11);
    }
    if (piVar17[0x10] == 0) {
      mobyutil::g_byteGridStride = 0;
      mobyutil::g_byteGridData = (undefined4 *)0x0;
      DAT_00a2049c = 0;
      DAT_00a204a0 = 0;
      DAT_00a204a4 = DAT_00a204a0;
    }
    else {
      puVar14 = (undefined4 *)((int)piVar17 + piVar17[0x10]);
      mobyutil::g_byteGridData = puVar14 + 4;
      mobyutil::g_byteGridStride = *puVar14;
      DAT_00a204a0 = puVar14[2];
      DAT_00a2049c = puVar14[1];
      DAT_00a204a4 = puVar14[3];
    }
    iVar11 = (int)piVar17 + piVar17[2];
    piVar15 = (int *)((int)piVar17 + piVar17[0x1c]);
    OcclOct = (void *)(iVar11 + ((uint)((LZCOUNT(-piVar17[2]) << 0x3a) >> 0x3f) & -iVar11));
    partproc::g_PartTexBaseIndex = piVar15[1];
    iVar11 = *piVar15;
    piVar16 = piVar15 + 4;
    iVar28 = piVar15[2];
    if (0 < iVar11) {
      piVar8 = &partproc::g_PartTexFrames;
      do {
        iVar33 = *piVar16;
        iVar11 = iVar11 + -1;
        piVar16 = piVar16 + 1;
        *piVar8 = (int)piVar15 + iVar33 + iVar28;
        piVar8 = piVar8 + 1;
      } while (0 < iVar11);
    }
    psVar26 = (short *)((int)piVar17 + piVar17[0x12]);
    sound::g_pSoundDefs = uVar5;
    lVar30 = (longlong)(int)(((longlong)psVar26[1] & 0xffffffffU) << 5);
    sound::g_TotalSoundDefCnt = (int)psVar26[1];
    fastfunc::FastMemCopy32(uVar21,(int)psVar26 + (int)*psVar26,lVar30);
    sVar2 = psVar26[2];
    iVar11 = 0;
    if (0 < sound::g_TotalSoundDefCnt) {
      iVar28 = 0;
      do {
        sVar3 = *(short *)(sound::g_pSoundDefs + iVar28 + 0x1a);
        if (sVar3 < psVar26[3]) {
          *(short *)(sound::g_pSoundDefs + iVar28 + 0x1a) =
               (short)*(undefined4 *)((int)psVar26 + (int)((longlong)sVar3 << 2) + (int)sVar2);
        }
        else {
          libc::printf("internal level sound mismatch\n");
          *(undefined2 *)(sound::g_pSoundDefs + iVar28 + 0x1a) = 0xffff;
        }
        iVar11 = iVar11 + 1;
        iVar33 = sound::g_pSoundDefs + iVar28;
        iVar28 = iVar28 + 0x20;
        bVar1 = iVar11 < sound::g_TotalSoundDefCnt;
        *(undefined4 *)(iVar33 + 0x1c) = DAT_0071f404;
      } while (bVar1);
    }
    psVar29 = psVar26 + 4;
    iVar11 = 0;
    if (0 < oClass_to_mClass_lookup) {
      iVar28 = 0;
      uVar31 = ZEXT48(MobyClasses);
      puVar27 = &mClass_to_oClass;
      iVar33 = 0;
      do {
        iVar9 = *(int *)uVar31;
        if (iVar9 == 0) {
          iVar9 = 0;
          for (piVar17 = &DAT_00a4d540;
              (iVar9 < maximumNumWeapons &&
              (*piVar17 != (int)*(short *)((int)&mClass_to_oClass + iVar28))); piVar17 = piVar17 + 1
              ) {
            iVar9 = iVar9 + 1;
          }
          if (iVar9 < maximumNumWeapons) {
            local_a0 = uVar31;
            fastfunc::FastMemSet(&DAT_00a4d7e0 + iVar9 * 0x20,0xffffffffffffffff,0x20);
            puVar13 = (undefined2 *)(&DAT_00a4d7e0 + iVar9 * 0x20);
            puVar14 = (undefined4 *)((int)*psVar29 + (int)psVar26);
            for (iVar9 = 0; uVar31 = local_a0, iVar9 < psVar29[1] && iVar9 < 0xf; iVar9 = iVar9 + 1)
            {
              uVar10 = *puVar14;
              puVar14 = puVar14 + 1;
              *puVar13 = (short)uVar10;
              puVar13 = puVar13 + 1;
            }
          }
        }
        else {
          if (psVar29[1] != (ushort)*(byte *)(iVar9 + 0xd)) {
            libc::printf("internal moby sound mismatch on moby %d\n",*puVar27);
            iVar9 = *(int *)uVar31;
          }
          iVar19 = 0;
          puVar14 = (undefined4 *)((int)*psVar29 + (int)psVar26);
          if (*(char *)(iVar9 + 0xd) != '\0') {
            iVar9 = 0;
            do {
              iVar19 = iVar19 + 1;
              uVar10 = *puVar14;
              puVar14 = puVar14 + 1;
              iVar4 = *(int *)(*(int *)((int)MobyClasses + iVar33) + 0x28);
              iVar6 = iVar4 + iVar9;
              iVar4 = iVar4 + iVar9;
              iVar9 = iVar9 + 0x20;
              *(undefined4 *)(iVar6 + 0x1c) = DAT_0071f404;
              *(short *)(iVar4 + 0x1a) = (short)uVar10;
            } while (iVar19 < (int)(uint)*(byte *)(*(int *)((int)MobyClasses + iVar33) + 0xd));
          }
        }
        iVar11 = iVar11 + 1;
        psVar29 = psVar29 + 2;
        puVar27 = puVar27 + 1;
        iVar28 = iVar28 + 2;
        uVar31 = uVar31 + 4;
        iVar33 = iVar33 + 4;
      } while (iVar11 < oClass_to_mClass_lookup);
    }
    uVar21 = uVar21 + lVar30 + 0x3f & 0xffffffc0;
    iVar11 = (int)((longlong)g_SpaceshipVariant << 2);
    iVar33 = *(int *)((int)OCLASSES_SPACESHIP + iVar11);
    iVar9 = *(int *)((int)OCLASSES_COCKPIT + iVar11);
    libc::snprintf(acStack_130,"rc1/ps3data/global/spaceship%d.ps3",(longlong)g_SpaceshipVariant + 1
                  );
    libc::snprintf(acStack_f0,"rc1/ps3data/global/spaceship%d.vram",(longlong)g_SpaceshipVariant + 1
                  );
    lVar30 = fios::LoadAssetFromFile(acStack_130,uVar21,0xffffffffffffffff);
    iVar19 = oClass_to_mClass_lookup;
    piVar17 = (int *)uVar21;
    iVar11 = piVar17[2];
    iVar28 = piVar17[1];
    if ((&MobyClassLookup)[iVar33] == -1) {
      pMVar25 = (MobyClass *)((int)piVar17 + *piVar17);
      (&MobyClassLookup)[iVar33] = (char)oClass_to_mClass_lookup;
      MVar23 = (MOBY_OCLASSES)iVar33;
      (&mClass_to_oClass)[iVar19] = MVar23;
      MobyClasses[iVar19] = pMVar25;
      if (pMVar25 == (MobyClass *)0x0) {
        mobyfunc::GetMobyFunction(MVar23);
        oClass_to_mClass_lookup = oClass_to_mClass_lookup + 1;
      }
      else {
        *(undefined4 *)(&MobyMipDists + iVar19 * 4) = *(undefined4 *)&pMVar25->bangles;
        mobyfunc::GetMobyFunction(MVar23);
        oClass_to_mClass_lookup = oClass_to_mClass_lookup + 1;
        LoadMobyModel(pMVar25,(void *)0x0,(char *)0x0,iVar33);
      }
    }
    iVar19 = oClass_to_mClass_lookup;
    if ((&MobyClassLookup)[iVar9] == -1) {
      pMVar25 = (MobyClass *)((int)piVar17 + iVar28);
      iVar28 = oClass_to_mClass_lookup * 4;
      (&MobyClassLookup)[iVar9] = (char)oClass_to_mClass_lookup;
      MVar23 = (MOBY_OCLASSES)iVar9;
      (&mClass_to_oClass)[iVar19] = MVar23;
      MobyClasses[iVar19] = pMVar25;
      if (pMVar25 == (MobyClass *)0x0) {
        mobyfunc::GetMobyFunction(MVar23);
        oClass_to_mClass_lookup = oClass_to_mClass_lookup + 1;
      }
      else {
        *(undefined4 *)(&MobyMipDists + iVar28) = *(undefined4 *)&pMVar25->bangles;
        mobyfunc::GetMobyFunction(MVar23);
        oClass_to_mClass_lookup = oClass_to_mClass_lookup + 1;
        LoadMobyModel(pMVar25,(void *)0x0,(char *)0x0,iVar9);
      }
    }
    uVar21 = uVar21 + (longlong)iVar11;
    uVar31 = uVar21 & 0xffffffff;
    lVar32 = (lVar30 - iVar11) / 0x24;
    FUN_004fe5c8(DAT_00a15f50,0x80);
    uVar7 = FUN_004fe5f4(DAT_00a15f50,0x80);
    uVar10 = fios::LoadAssetFromFile(acStack_f0,uVar7,0xffffffffffffffff);
    FUN_004fe6ec(DAT_00a15f50,uVar10);
    iVar11 = *(int *)(DAT_00902e9c + 0x4ac);
    if ((int)lVar32 != 0) {
      do {
        lVar32 = lVar32 + -1;
        *(int *)uVar31 = *(int *)uVar31 + ((int)uVar7 - iVar11);
        uVar31 = uVar31 + 0x24;
      } while (0 < (int)lVar32);
    }
    uVar22 = 0;
    piVar15 = *(int **)((int)MobyClasses[(byte)(&MobyClassLookup)[iVar33]]->packets + 8);
                    /* WARNING: Load size is inaccurate */
    uVar5 = *MobyClasses[(byte)(&MobyClassLookup)[iVar33]]->packets;
    iVar11 = (int)uVar21;
    if (uVar5 != 0) {
      do {
        *piVar15 = iVar11;
        if (*(char *)(piVar15 + 3) == '\0') {
          bVar18 = (byte)*(undefined4 *)(iVar11 + 8) & 3;
          *(byte *)(piVar15 + 3) = bVar18;
          *(byte *)(piVar15 + 3) = (byte)(*(uint *)(iVar11 + 8) >> 6) & 0xc | bVar18;
        }
        uVar22 = uVar22 + 1;
        piVar15 = piVar15 + 4;
      } while (uVar22 < uVar5);
    }
    piVar15 = *(int **)((int)MobyClasses[(byte)(&MobyClassLookup)[iVar9]]->packets + 8);
                    /* WARNING: Load size is inaccurate */
    uVar5 = *MobyClasses[(byte)(&MobyClassLookup)[iVar9]]->packets;
    if (uVar5 != 0) {
      do {
        *piVar15 = iVar11 + 0x24;
        if (*(char *)(piVar15 + 3) == '\0') {
          bVar18 = (byte)*(undefined4 *)(iVar11 + 0x2c) & 3;
          *(byte *)(piVar15 + 3) = bVar18;
          *(byte *)(piVar15 + 3) = (byte)(*(uint *)(iVar11 + 0x2c) >> 6) & 0xc | bVar18;
        }
        uVar24 = uVar24 + 1;
        piVar15 = piVar15 + 4;
      } while (uVar24 < uVar5);
    }
    Gameplay = (int)piVar17 + (int)lVar30 + 0x3f & 0xffffffc0;
  }
  uVar7 = local_a8;
  NAVG_LoadFile(local_b0);
  if ((int)uVar7 == 0) {
    respawn::ClearCheckpointData();
    puVar14 = &DAT_00a0fcd4;
    lVar30 = 2;
    do {
      *puVar14 = 0;
      puVar14[1] = 0;
      puVar14[2] = 0;
      puVar14[3] = 0;
      puVar14[4] = 0;
      puVar14[5] = 0;
      puVar14[6] = 0;
      puVar14[7] = 0;
      puVar14 = puVar14 + 8;
      lVar30 = lVar30 + -1;
    } while (lVar30 != 0);
  }
  else {
    respawn::RestoreCheckpoint();
  }
  DAT_00a15c14 = 0;
  DAT_00a15c0c = 0;
  DAT_00a15c10 = 0;
  mobyfunc::UpdateMobysInitial();
  worldUpdateTime = worldUpdateTime + 1;
  return 0;
}



