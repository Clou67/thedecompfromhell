//==== 00090548  ns=hero  size=0x43c
// sig: undefined ???_Hero_UpdateManipulatorSpin(void)
// callers(2): 00092834 hero::Hero_UpdateGadgets; 000aa448 hero::Hero_UpdateGadgetsInScene
// callees(4): 000f0ea8 mobyfunc::AttachManipulator; 00501980 fastfunc::FastQuaternionToEuler; 00502578 fastfunc::FastWrapRot; 005027bc fastfunc::FastLerpColor

void hero::____Hero_UpdateManipulatorSpin(void)

{
  int iVar1;
  MobyInstance *moby;
  undefined4 uVar3;
  undefined8 uVar2;
  uint uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  iVar1 = DAT_0096aeb0;
  if (DAT_0096aeb0 != 0) {
    if (g_gameMode == GAME_MODE_SCENE) {
      dVar5 = (double)fastfunc::FastWrapRot(DAT_0096bfc8,mobyutil::g_FrameTime * 1.2217305);
    }
    else {
      dVar5 = (double)fastfunc::FastWrapRot(DAT_0096bfc8,mobyutil::g_FrameTime * 2.0943952);
    }
    DAT_0096bfc8 = (float)dVar5;
    dVar6 = dVar5;
    if ((double)(float)(3.141592502593994 - dVar5) <= dVar5) {
      dVar6 = (double)(float)(3.141592502593994 - dVar5);
    }
    if (dVar6 <= (double)(float)(-3.141592502593994 - dVar5)) {
      dVar6 = (double)(float)(-3.141592502593994 - dVar5);
    }
    dVar5 = (double)(float)(dVar6 * dVar6);
    dVar7 = (double)(float)(dVar5 * (double)(float)(dVar5 * dVar6));
    dVar8 = (double)(float)(dVar5 * dVar7);
    uVar3 = fastfunc::FastLerpColor
                      ((double)(((float)(dVar6 + (double)(float)((double)(float)(dVar5 * dVar6) *
                                                                -0.16666656732559204)) +
                                 (float)(dVar7 * 0.008333025500178337) +
                                 (float)(dVar8 * -0.0001980741071747616) +
                                (float)(dVar5 * dVar8) * 2.601887e-06) * 0.5 + 0.5),&DAT_00d2d2d2,
                       0x285050);
    *(undefined4 *)(iVar1 + 0x90) = uVar3;
  }
  iVar1 = DAT_0096aeb4;
  if (DAT_0096aeb4 != 0) {
    if (g_gameMode == GAME_MODE_SCENE) {
      dVar6 = (double)fastfunc::FastWrapRot(DAT_0096bfcc,mobyutil::g_FrameTime * 1.5707964);
      DAT_0096bfcc = (float)dVar6;
      dVar5 = dVar6;
      if ((double)(float)(3.141592502593994 - dVar6) <= dVar6) {
        dVar5 = (double)(float)(3.141592502593994 - dVar6);
      }
      if (dVar5 <= (double)(float)(-3.141592502593994 - dVar6)) {
        dVar5 = (double)(float)(-3.141592502593994 - dVar6);
      }
      dVar6 = (double)(float)(dVar5 * dVar5);
      dVar7 = (double)(float)(dVar6 * (double)(float)(dVar6 * dVar5));
      dVar8 = (double)(float)(dVar6 * dVar7);
      uVar3 = fastfunc::FastLerpColor
                        ((double)(((float)(dVar5 + (double)(float)((double)(float)(dVar6 * dVar5) *
                                                                  -0.16666656732559204)) +
                                   (float)(dVar7 * 0.008333025500178337) +
                                   (float)(dVar8 * -0.0001980741071747616) +
                                  (float)(dVar6 * dVar8) * 2.601887e-06) * 0.5 + 0.5),0x1e1ed2,
                         0x1e1e50);
      *(undefined4 *)(iVar1 + 0x90) = uVar3;
    }
    else {
      dVar5 = (double)fastfunc::FastWrapRot(DAT_0096bfcc,mobyutil::g_FrameTime * 2.9670596);
      DAT_0096bfcc = (float)dVar5;
      uVar2 = 0x1ee628;
      if ((0.0 < dVar5) && (dVar5 < 1.919862151145935)) {
        uVar2 = 0x1e1ed2;
      }
      uVar3 = fastfunc::FastLerpColor(0x3fb1eb8520000000,*(undefined4 *)(iVar1 + 0x90),uVar2);
      *(undefined4 *)(iVar1 + 0x90) = uVar3;
    }
  }
  moby = DAT_0096af00;
  if (DAT_0096af00 != (MobyInstance *)0x0) {
    if (g_gameMode == GAME_MODE_SCENE) {
      dVar5 = (double)fastfunc::FastWrapRot(DAT_0096bfcc,mobyutil::g_FrameTime * 1.3962634);
    }
    else {
      dVar5 = (double)fastfunc::FastWrapRot(DAT_0096bfcc,mobyutil::g_FrameTime * 1.9198622);
    }
    DAT_0096bfd0 = (float)dVar5;
    dVar6 = dVar5;
    if ((double)(float)(3.141592502593994 - dVar5) <= dVar5) {
      dVar6 = (double)(float)(3.141592502593994 - dVar5);
    }
    if (dVar6 <= (double)(float)(-3.141592502593994 - dVar5)) {
      dVar6 = (double)(float)(-3.141592502593994 - dVar5);
    }
    dVar5 = (double)(float)(dVar6 * dVar6);
    dVar7 = (double)(float)(dVar5 * (double)(float)(dVar5 * dVar6));
    dVar8 = (double)(float)(dVar5 * dVar7);
    uVar4 = fastfunc::FastLerpColor
                      ((double)(((float)(dVar6 + (double)(float)((double)(float)(dVar5 * dVar6) *
                                                                -0.16666656732559204)) +
                                 (float)(dVar7 * 0.008333025500178337) +
                                 (float)(dVar8 * -0.0001980741071747616) +
                                (float)(dVar5 * dVar8) * 2.601887e-06) * 0.5 + 0.5),&DAT_00aac8aa,
                       &DAT_00965050);
    moby->field60_0x90 = uVar4;
    if (DAT_0096ba71 == '\0') {
      mobyfunc::AttachManipulator(moby,0,&DAT_0096ba70);
    }
    else {
      fastfunc::FastQuaternionToEuler((double)DAT_0096bfd0,&DAT_0096ba80,0);
    }
  }
  return;
}



//==== 00090988  ns=hero  size=0x6c
// sig: undefined Mtx3_AbsDiffSum(void)
// callers(0): 
// callees(0): 

double hero::Mtx3_AbsDiffSum(int param_1,int param_2)

{
  float *pfVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  double dVar7;
  
  uVar6 = 0;
  dVar7 = 0.0;
  do {
    iVar5 = 0;
    iVar4 = 3;
    do {
      iVar3 = (int)((uVar6 & 0xffffffff) << 4);
      iVar4 = iVar4 + -1;
      pfVar1 = (float *)(param_1 + iVar3 + iVar5);
      pfVar2 = (float *)(param_2 + iVar3 + iVar5);
      iVar5 = iVar5 + 4;
      dVar7 = (double)(float)(ABS((double)(*pfVar1 - *pfVar2)) + dVar7);
    } while (iVar4 != 0);
    uVar6 = uVar6 + 1;
  } while ((int)uVar6 < 3);
  return dVar7;
}



//==== 00090a00  ns=hero  size=0x674
// sig: undefined Hero_PushGadgetMtxHistory(void)
// callers(1): 000914e0 hero::Hero_UpdateGadgetMobys
// callees(3): 0010a788 mobyutil::MB_NormalizeMtx3Columns; 0010c1e8 mobyutil::MB_MtxToEuler; 00500fa8 fastfunc::FastApplyTransform

void hero::Hero_PushGadgetMtxHistory(int param_1,Vec4 *param_2)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  undefined1 auVar4 [16];
  ulonglong *puVar5;
  float *pfVar6;
  int iVar7;
  int iVar10;
  longlong lVar8;
  longlong lVar9;
  uint uVar11;
  int iVar12;
  ulonglong uVar13;
  int iVar14;
  int iVar15;
  int iVar17;
  longlong lVar16;
  int iVar18;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong uVar19;
  float *pfVar20;
  ulonglong unaff_r28;
  int iVar21;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  
  lVar9 = ZEXT48(&stack0x00000000) - 0x150;
  puVar5 = (ulonglong *)lVar9;
  *puVar5 = ZEXT48(&stack0x00000000);
  puVar5[0x2c] = in_LR;
  puVar5[0x28] = unaff_r30;
  puVar5[0x29] = unaff_r31;
  puVar5[0x27] = unaff_r29;
  iVar10 = DAT_0096be98 * 0x30;
  puVar5[0x26] = unaff_r28;
  puVar5[0x25] = unaff_r27;
  puVar5[0x24] = unaff_r26;
  puVar5[0x23] = unaff_r25;
  fastfunc::FastApplyTransform((Vec4 *)(iVar10 + 0x96afd0),param_2);
  mobyutil::MB_NormalizeMtx3Columns(DAT_0096be98 * 0x30 + 0x96afd0);
  uVar11 = DAT_0096be98 + 1;
  iVar10 = DAT_0096be9c + 1;
  DAT_0096be98 = uVar11 + (((int)uVar11 >> 4) + (uint)((int)uVar11 < 0 && (uVar11 & 0xf) != 0)) *
                          -0x10;
  DAT_0096be9c = 0x10;
  if (iVar10 < 0x11) {
    DAT_0096be9c = iVar10;
  }
  iVar10 = 3;
  iVar21 = 3;
  lVar8 = lVar9;
  do {
    iVar12 = (int)lVar8;
    iVar10 = iVar10 + -1;
    lVar8 = lVar8 + 0x10;
    fVar1 = 0.0;
    *(undefined4 *)(iVar12 + 0x7c) = 0;
    *(undefined4 *)(iVar12 + 0x78) = 0;
    *(undefined4 *)(iVar12 + 0x74) = 0;
    *(undefined4 *)(iVar12 + 0x70) = 0;
  } while (iVar10 != 0);
  DAT_00720bc4 = 0xe;
  if ((g_heroStateType != 0x16) && (DAT_00720bc4 = 0xb, g_heroState == WALKING)) {
    DAT_00720bc4 = 5;
  }
  if (DAT_0096bea0 < DAT_00720bc4) {
    DAT_0096bea0 = DAT_0096bea0 + 1;
  }
  else if (DAT_00720bc4 < DAT_0096bea0) {
    DAT_0096bea0 = DAT_0096bea0 + -1;
  }
  iVar10 = DAT_0096bea0;
  if (DAT_0096bea0 < 2) {
    iVar10 = 2;
  }
  if (iVar10 <= DAT_0096be9c) {
    uVar19 = 0;
    iVar12 = 0;
    if (0 < iVar10) {
      do {
        iVar14 = 0;
        uVar13 = (DAT_0096be98 - uVar19) + 0xf;
        if (0 < iVar10) {
          do {
            if ((int)uVar19 != iVar14) {
              uVar11 = (DAT_0096be98 - iVar14) + 0xf;
              iVar17 = 0;
              fVar2 = fVar1;
              do {
                iVar15 = 0;
                iVar18 = 3;
                do {
                  iVar18 = iVar18 + -1;
                  pfVar20 = (float *)((int)(uVar13 + ((longlong)((int)uVar13 >> 4) +
                                                     (ulonglong)
                                                     ((int)uVar13 < 0 && (uVar13 & 0xf) != 0)) *
                                                     -0x10) * 0x30 + 0x96afd0 + iVar17 * 0x10 +
                                     iVar15);
                  pfVar6 = (float *)((uVar11 + (((int)uVar11 >> 4) +
                                               (uint)((int)uVar11 < 0 && (uVar11 & 0xf) != 0)) *
                                               -0x10) * 0x30 + 0x96afd0 + iVar17 * 0x10 + iVar15);
                  iVar15 = iVar15 + 4;
                  fVar2 = ABS(*pfVar20 - *pfVar6) + fVar2;
                } while (iVar18 != 0);
                iVar17 = iVar17 + 1;
              } while (iVar17 < 3);
              iVar17 = (int)((uVar19 & 0xffffffff) << 2);
              *(float *)((int)puVar5 + iVar17 + 0xb0) =
                   *(float *)((int)puVar5 + iVar17 + 0xb0) + fVar2;
            }
            iVar14 = iVar14 + 1;
          } while (iVar14 < iVar10);
        }
        uVar19 = uVar19 + 1;
      } while ((int)uVar19 < iVar10);
    }
    iVar14 = 0;
    lVar8 = lVar9;
    if (0 < iVar10) {
      do {
        fVar2 = *(float *)((int)lVar8 + 0xb0);
        if (fVar1 < fVar2) {
          fVar1 = fVar2;
        }
        iVar14 = iVar14 + 1;
        lVar8 = lVar8 + 4;
      } while (iVar14 < iVar10);
    }
    iVar17 = 0;
    lVar8 = lVar9;
    iVar14 = 0;
    if (0 < iVar10) {
      do {
        iVar12 = iVar14;
        if (fVar1 * 0.2 < *(float *)((int)lVar8 + 0xb0)) {
          iVar12 = iVar12 + 1;
        }
        iVar17 = iVar17 + 1;
        lVar8 = lVar8 + 4;
        iVar14 = iVar12;
      } while (iVar17 < iVar10);
    }
    iVar17 = 0;
    iVar15 = 0;
    lVar8 = lVar9;
    iVar14 = 0;
    if (0 < iVar10) {
      do {
        if ((*(float *)((int)lVar8 + 0xb0) <= fVar1 * 0.2) || (iVar12 < 1 || 2 < iVar12)) {
          iVar18 = 3;
          iVar15 = iVar15 + 1;
          uVar11 = (DAT_0096be98 - iVar17) + 0xf;
          lVar16 = lVar9;
          iVar14 = 0x96afd0;
          do {
            iVar7 = (int)lVar16;
            pfVar20 = (float *)(iVar14 + (uVar11 + (((int)uVar11 >> 4) +
                                                   (uint)((int)uVar11 < 0 && (uVar11 & 0xf) != 0)) *
                                                   -0x10) * 0x30);
            iVar18 = iVar18 + -1;
            lVar16 = lVar16 + 0x10;
            iVar14 = iVar14 + 0x10;
            *(float *)(iVar7 + 0x70) = *(float *)(iVar7 + 0x70) + *pfVar20;
            *(float *)(iVar7 + 0x74) = *(float *)(iVar7 + 0x74) + pfVar20[1];
            fVar2 = pfVar20[2];
            *(undefined4 *)(iVar7 + 0x7c) = *(undefined4 *)(iVar7 + 0x7c);
            *(float *)(iVar7 + 0x78) = *(float *)(iVar7 + 0x78) + fVar2;
          } while (iVar18 != 0);
        }
        iVar17 = iVar17 + 1;
        lVar8 = lVar8 + 4;
        iVar14 = iVar15;
      } while (iVar17 < iVar10);
    }
    do {
      puVar5[0x20] = (longlong)iVar14;
      lVar8 = lVar9 + 0x70;
      fVar2 = 1.0 / (float)(longlong)puVar5[0x20];
      iVar21 = iVar21 + -1;
      fVar1 = *(float *)lVar8 * fVar2;
      *(float *)(puVar5 + 0x1e) = fVar1;
      *(float *)((int)puVar5 + 0xf4) = fVar1;
      *(float *)(puVar5 + 0x1f) = fVar1;
      *(float *)((int)puVar5 + 0xfc) = fVar1;
      auVar4 = auRam00000000 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      fVar1 = (float)storeVectorElementWordIndexed
                               (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60,0,lVar8);
      *(float *)lVar8 = fVar1;
      iVar10 = (int)lVar9;
      fVar1 = *(float *)(iVar10 + 0x74) * fVar2;
      *(float *)(puVar5 + 0x1e) = fVar1;
      *(float *)((int)puVar5 + 0xf4) = fVar1;
      *(float *)(puVar5 + 0x1f) = fVar1;
      *(float *)((int)puVar5 + 0xfc) = fVar1;
      auVar4 = auRam00000000 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      uVar3 = storeVectorElementWordIndexed
                        (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60,4,lVar8);
      *(undefined4 *)(iVar10 + 0x74) = uVar3;
      fVar2 = *(float *)(iVar10 + 0x78) * fVar2;
      *(float *)(puVar5 + 0x1e) = fVar2;
      *(float *)((int)puVar5 + 0xf4) = fVar2;
      *(float *)(puVar5 + 0x1f) = fVar2;
      *(float *)((int)puVar5 + 0xfc) = fVar2;
      auVar4 = auRam00000000 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      uVar3 = storeVectorElementWordIndexed
                        (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60,8,lVar8);
      *(undefined4 *)(iVar10 + 0x78) = uVar3;
      *(undefined4 *)(iVar10 + 0x7c) = *(undefined4 *)(iVar10 + 0x7c);
      lVar9 = lVar9 + 0x10;
    } while (iVar21 != 0);
    mobyutil::MB_MtxToEuler((int)(puVar5 + 0xe),(MobyInstance *)(param_1 + 0x40));
  }
  return;
}



//==== 00091090  ns=hero  size=0x2f4
// sig: undefined Hero_BuildPoseFromJoints(void)
// callers(5): 000914e0 hero::Hero_UpdateGadgetMobys; 000aa8c8 hero::???_Hero_SnapMobyToBonePose; 00150660 pause::MenuHero_MobyUpdateA; 0015087c pause::MenuHero_MobyUpdateB; 001509b8 pause::MenuHero_MobyUpdateC
// callees(2): 000f58d8 mobyfunc::ComputeAnimation; 00500950 fastfunc::FastVecMultAndPack

void hero::Hero_BuildPoseFromJoints
               (int param_1,longlong param_2,int param_3,int param_4,ulonglong param_5)

{
  undefined2 *puVar1;
  int iVar5;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar6;
  int iVar7;
  int iVar8;
  short sVar9;
  ushort uVar10;
  short sVar11;
  short sVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  
  if ((int)param_5 == 0) {
    param_5 = ZEXT48(g_heroMobyPtr);
  }
  iVar5 = mobyfunc::ComputeAnimation(param_5);
  puVar1 = (undefined2 *)param_2;
  uVar13 = 1;
  uVar14 = param_2 + 0x18;
  *(undefined8 *)(puVar1 + 8) = 0x7fff;
  sVar9 = 1;
  if (-1 < *(int *)(param_1 + 4)) {
    iVar7 = 4;
    do {
      iVar6 = iVar7 + 4;
      uVar2 = fastfunc::FastVecMultAndPack
                        (0x40e0000000000000,
                         (Vec4 *)(iVar5 + (int)(((ulonglong)*(uint *)(param_1 + iVar7) & 0x3fffffff)
                                               << 6)));
      *(undefined8 *)uVar14 = uVar2;
      uVar13 = uVar13 + 1;
      uVar14 = uVar14 + 8;
      iVar7 = iVar6;
    } while (-1 < *(int *)(param_1 + iVar6));
  }
  iVar7 = 0;
  if (0 < param_4) {
    do {
      iVar7 = iVar7 + 1;
      *(undefined8 *)uVar14 = 0x7fff;
      uVar13 = uVar13 + 1;
      uVar14 = uVar14 + 8;
    } while (iVar7 < param_4);
  }
  uVar10 = 1;
  sVar12 = 0;
  if (-1 < *(int *)(param_1 + 4)) {
    iVar6 = 4;
    iVar7 = 4;
    sVar12 = 0;
    do {
      uVar3 = fastfunc::FastVecMultAndPack
                        (0x40b0000000000000,
                         (Vec4 *)(iVar5 + (int)(((ulonglong)*(uint *)(param_1 + iVar6) & 0x3fffffff)
                                               << 6) + 0x10));
      if ((uVar3 & 0xffffffffffff0000) != 0x1000100010000000) {
        *(ulonglong *)uVar14 = uVar3 & 0xffffffffffff0000;
        sVar12 = sVar12 + 1;
        *(ushort *)((int)(ulonglong *)uVar14 + 6) = uVar10 | 0x8000;
        uVar14 = uVar14 + 8 & 0xffffffff;
      }
      iVar7 = iVar7 + 4;
      uVar10 = uVar10 + 1;
      iVar6 = iVar6 + 4;
    } while (-1 < *(int *)(param_1 + iVar7));
  }
  sVar11 = 0;
  if (-1 < *(int *)(param_1 + 4)) {
    iVar8 = 4;
    iVar7 = 0x10;
    iVar6 = 4;
    sVar11 = 0;
    do {
      uVar2 = 0x3ff0000000000000;
      uVar3 = fastfunc::FastVecMultAndPack
                        (0x3ff0000000000000,
                         (Vec4 *)(iVar5 + (int)(((ulonglong)*(uint *)(param_1 + iVar8) & 0x3fffffff)
                                               << 6) + 0x20));
      uVar4 = fastfunc::FastVecMultAndPack(uVar2,(Vec4 *)(*(int *)(param_3 + 0x18) + iVar7));
      if ((uVar4 & 0xffffffffffff0000) != (uVar3 & 0xffffffffffff0000)) {
        *(ulonglong *)uVar14 = uVar3 & 0xffffffffffff0000;
        *(short *)((int)(ulonglong *)uVar14 + 6) = sVar9;
        sVar11 = sVar11 + 1;
        uVar14 = uVar14 + 8 & 0xffffffff;
      }
      iVar6 = iVar6 + 4;
      sVar9 = sVar9 + 1;
      iVar8 = iVar8 + 4;
      iVar7 = iVar7 + 0x10;
    } while (-1 < *(int *)(param_1 + iVar6));
  }
  if ((uVar14 & 0xf) != 0) {
    *(undefined8 *)uVar14 = 0;
    uVar14 = uVar14 + 8;
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[4] = (short)((uVar13 & 0xffffffff) << 3);
  puVar1[3] = (short)(((uVar14 - param_2) + -0x10 << 0x20) >> 0x24);
  puVar1[5] = sVar12;
  puVar1[6] = ((short)uVar13 + sVar12) * 8;
  puVar1[7] = sVar11;
  return;
}



//==== 00091384  ns=hero  size=0x54
// sig: int Hero_IsWearingBoots(int slot)
// callers(0): 
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int hero::Hero_IsWearingBoots(int slot)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (int)((longlong)slot << 6) + (int)((longlong)slot << 4);
  iVar1 = -1;
  if (*(int *)((int)&DAT_0096ad94 + iVar2) == 2) {
    iVar1 = *(int *)((int)&g_CurrentWeapon + iVar2);
  }
  return (uint)(iVar1 == 0x1d || iVar1 == 0x1c);
}



//==== 000913d8  ns=hero  size=0x5c
// sig: undefined Hero_IsWeaponGroupA(void)
// callers(0): 
// callees(0): 

undefined8 hero::Hero_IsWeaponGroupA(longlong param_1)

{
  int iVar1;
  int iVar3;
  undefined8 uVar2;
  
  iVar3 = (int)(param_1 << 6) + (int)(param_1 << 4);
  iVar1 = -1;
  if (*(int *)((int)&DAT_0096ad94 + iVar3) == 2) {
    iVar1 = *(int *)((int)&g_CurrentWeapon + iVar3);
  }
  uVar2 = 0;
  if ((iVar1 == 5) || (iVar1 == 7 || iVar1 == 6)) {
    uVar2 = 1;
  }
  return uVar2;
}



//==== 00091434  ns=hero  size=0x64
// sig: undefined Hero_IsWeaponGroupB(void)
// callers(0): 
// callees(0): 

undefined8 hero::Hero_IsWeaponGroupB(longlong param_1)

{
  int iVar1;
  int iVar3;
  undefined8 uVar2;
  
  iVar3 = (int)(param_1 << 6) + (int)(param_1 << 4);
  iVar1 = -1;
  if (*(int *)((int)&DAT_0096ad94 + iVar3) == 2) {
    iVar1 = *(int *)((int)&g_CurrentWeapon + iVar3);
  }
  uVar2 = 0;
  if ((iVar1 == 10 || iVar1 == 0x11) || (iVar1 == 0x19 || iVar1 == 0x14)) {
    uVar2 = 1;
  }
  return uVar2;
}



//==== 000914e0  ns=hero  size=0xce0
// sig: undefined Hero_UpdateGadgetMobys(void)
// callers(2): 00092834 hero::Hero_UpdateGadgets; 000aa448 hero::Hero_UpdateGadgetsInScene
// callees(13): 0006d720 RegisterFuncForMoby; 00090a00 hero::Hero_PushGadgetMtxHistory; 00091090 hero::Hero_BuildPoseFromJoints; 000efa28 mobyfunc::CreateMoby; 000f1038 mobyfunc::GetBoneTransformations; 000f30a0 mobyfunc::PostUpdateMobyLockTransform; 000f31a8 mobyfunc::UpdateMobyTransform; 000f98d8 mobyfunc::UpdateMobyAnimFrame; 0010a788 mobyutil::MB_NormalizeMtx3Columns; 0010c1e8 mobyutil::MB_MtxToEuler; 00500fa8 fastfunc::FastApplyTransform; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt
// strings: 0096c074: 'None'

void hero::Hero_UpdateGadgetMobys(void)

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  MobyInstance *pMoby;
  ulonglong *puVar10;
  float fVar11;
  float fVar12;
  float *pfVar13;
  bool bVar14;
  bool bVar15;
  ulonglong uVar16;
  longlong lVar17;
  MobyInstance *pMVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  uint uVar22;
  ulonglong uVar23;
  ulonglong unaff_r21;
  ulonglong unaff_r22;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  int iVar24;
  ulonglong unaff_r31;
  int iVar25;
  ulonglong in_LR;
  double dVar26;
  ulonglong in_f23;
  ulonglong in_f24;
  double dVar27;
  ulonglong in_f25;
  double dVar28;
  ulonglong in_f26;
  double dVar29;
  ulonglong in_f27;
  double dVar30;
  ulonglong in_f28;
  double dVar31;
  ulonglong in_f29;
  double dVar32;
  ulonglong in_f30;
  double dVar33;
  ulonglong in_f31;
  double dVar34;
  double dVar35;
  
  uVar16 = ZEXT48(&stack0x00000000);
  lVar1 = uVar16 - 0x1c0;
  puVar10 = (ulonglong *)lVar1;
  *puVar10 = uVar16;
  puVar10[0x3a] = in_LR;
  puVar10[0x2f] = in_f23;
  puVar10[0x30] = in_f24;
  puVar10[0x31] = in_f25;
  puVar10[0x32] = in_f26;
  puVar10[0x33] = in_f27;
  puVar10[0x34] = in_f28;
  puVar10[0x35] = in_f29;
  puVar10[0x36] = in_f30;
  puVar10[0x37] = in_f31;
  puVar10[0x26] = unaff_r23;
  puVar10[0x2e] = unaff_r31;
  puVar10[0x2d] = unaff_r30;
  puVar10[0x2c] = unaff_r29;
  puVar10[0x2b] = unaff_r28;
  puVar10[0x2a] = unaff_r27;
  puVar10[0x29] = unaff_r26;
  puVar10[0x28] = unaff_r25;
  puVar10[0x27] = unaff_r24;
  puVar10[0x25] = unaff_r22;
  puVar10[0x24] = unaff_r21;
  iVar25 = 0;
  do {
    if (((g_gameMode != GAME_MODE_SCENE) && (g_gameMode != GAME_MODE_SPACE)) ||
       (iVar25 == 5 || iVar25 == 4)) {
      iVar24 = 0;
      do {
        if ((0 < iVar24 && iVar25 != 1) && (iVar25 != 4 && iVar25 != 3)) break;
        pMoby = (&g_currentWeaponMoby)[iVar25 * 0x14];
        if (iVar24 == 1) {
          pMoby = (MobyInstance *)(&DAT_0096ad74)[iVar25 * 0x14];
        }
        if (pMoby != (MobyInstance *)0x0) {
          uVar22 = g_heroMobyPtr->light;
          pMoby->color = g_heroMobyPtr->color;
          pMoby->light = uVar22;
          iVar19 = *(int *)(&DAT_0072100c + (&g_CurrentWeapon)[iVar25 * 0x14] * 0x4c);
          if (iVar25 == 1 && iVar24 == 1) {
            iVar19 = 3;
          }
          if ((&DAT_0096ad8a)[iVar25 * 0x50] == '\0') {
            iVar19 = iVar19 * 0x40;
            (pMoby->pos).x = *(f32 *)(iVar19 + 0x96a7d0);
            (pMoby->pos).y = *(f32 *)(iVar19 + 0x96a7d4);
            (pMoby->pos).z = *(f32 *)(iVar19 + 0x96a7d8);
            (pMoby->pos).w = *(f32 *)(iVar19 + 0x96a7dc);
            if ((DAT_00720bc0 == 0) ||
               (*(int *)(&DAT_00721018 + (&g_CurrentWeapon)[iVar25 * 0x14] * 0x4c) == 0)) {
              iVar20 = -1;
              if ((&DAT_0096ad94)[iVar25 * 0x14] == 2) {
                iVar20 = (&g_CurrentWeapon)[iVar25 * 0x14];
              }
              bVar14 = false;
              if ((iVar20 == 10 || iVar20 == 0x11) || (iVar20 == 0x19 || iVar20 == 0x14)) {
                bVar14 = true;
              }
              iVar20 = -1;
              if ((&DAT_0096ad94)[iVar25 * 0x14] == 2) {
                iVar20 = (&g_CurrentWeapon)[iVar25 * 0x14];
              }
              bVar15 = false;
              if ((iVar20 == 5) || (iVar20 == 7 || iVar20 == 6)) {
                bVar15 = true;
              }
              iVar20 = -1;
              if ((&DAT_0096ad94)[iVar25 * 0x14] == 2) {
                iVar20 = (&g_CurrentWeapon)[iVar25 * 0x14];
              }
              bVar3 = iVar20 == 0x1d;
              bVar2 = iVar20 == 0x1c;
              if ((!bVar14 && !bVar15) && (!bVar3 && !bVar2)) {
                mobyfunc::UpdateMobyAnimFrame(pMoby);
              }
              mobyfunc::UpdateMobyTransform(pMoby);
              fastfunc::FastApplyTransform(&(pMoby->transform).v0,(Vec4 *)(&DAT_0096a7a0 + iVar19));
              if ((!bVar14 && !bVar15) && (!bVar3 && !bVar2)) {
                mobyutil::MB_NormalizeMtx3Columns(&pMoby->transform);
              }
              dVar26 = 0.0;
              fVar4 = (pMoby->transform).v1.z;
              fVar9 = (pMoby->transform).v0.x + (pMoby->transform).v1.x * 0.0 +
                      (pMoby->transform).v2.x * 0.0;
              fVar11 = (pMoby->transform).v0.y + (pMoby->transform).v1.y * 0.0 +
                       (pMoby->transform).v2.y * 0.0;
              fVar5 = (pMoby->transform).v0.z;
              fVar6 = (pMoby->transform).v2.z;
              fVar7 = (pMoby->transform).v1.w;
              fVar8 = (pMoby->transform).v0.w;
              fVar12 = SQRT(fVar9 * fVar9 + fVar11 * fVar11);
              fVar9 = (pMoby->transform).v2.w;
              dVar34 = 1.0;
              *(float *)((int)puVar10 + 0x74) = fVar11;
              fVar4 = fVar5 + fVar4 * 0.0 + fVar6 * 0.0;
              fVar6 = ABS(fVar4);
              *(float *)((int)puVar10 + 0x7c) =
                   fVar8 + fVar7 * 0.0 + fVar9 * 0.0 + *(float *)((int)puVar10 + 0x7c);
              *(float *)(puVar10 + 0x19) = fVar4;
              fVar7 = ABS(fVar12);
              *(float *)((int)puVar10 + 0xc4) = fVar12;
              *(float *)((int)puVar10 + 0xcc) = fVar7 - fVar6;
              uVar23 = (ulonglong)(*(uint *)((int)puVar10 + 0xc4) >> 0x1c) & 8 |
                       (ulonglong)(*(uint *)((int)puVar10 + 0xcc) >> 0x1e) & 2 |
                       (ulonglong)(*(uint *)(puVar10 + 0x19) >> 0x1d) & 4;
              fVar5 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar23 << 2));
              fVar4 = *(float *)((uint)(uVar23 << 2) | 0x735904);
              if (0.0 <= *(float *)((int)puVar10 + 0xcc)) {
                fVar7 = ABS(*(float *)(puVar10 + 0x19));
                fVar6 = ABS(*(float *)((int)puVar10 + 0xc4));
              }
              dVar27 = dVar26;
              if (0.0 < fVar6) {
                iVar19 = 4;
                fVar6 = (fVar7 - fVar6) / (fVar7 + fVar6);
                lVar17 = lVar1;
                do {
                  iVar19 = iVar19 + -1;
                  *(float *)((int)lVar17 + 0xf0) = fVar6;
                  lVar17 = lVar17 + 4;
                } while (iVar19 != 0);
                fVar6 = fVar6 * fVar6;
                lVar17 = uVar16 - 0x1b0;
                iVar19 = 4;
                fVar7 = fVar6 * fVar6;
                *(float *)((int)puVar10 + 0xf4) = *(float *)((int)puVar10 + 0xf4) * fVar6;
                *(float *)(puVar10 + 0x1f) = *(float *)(puVar10 + 0x1f) * fVar7;
                *(float *)((int)puVar10 + 0xfc) = *(float *)((int)puVar10 + 0xfc) * fVar7 * fVar6;
                do {
                  iVar19 = iVar19 + -1;
                  *(float *)((int)lVar17 + 0xf0) = *(float *)((int)lVar17 + 0xe0) * fVar7 * fVar7;
                  lVar17 = lVar17 + 4;
                } while (iVar19 != 0);
                iVar19 = 0;
                iVar20 = 8;
                lVar17 = lVar1;
                do {
                  pfVar13 = (float *)((int)&DAT_007358e0 + iVar19);
                  iVar20 = iVar20 + -1;
                  iVar19 = iVar19 + 4;
                  *(float *)((int)lVar17 + 0xf0) = *(float *)((int)lVar17 + 0xf0) * *pfVar13;
                  lVar17 = lVar17 + 4;
                } while (iVar20 != 0);
                iVar19 = 8;
                lVar17 = lVar1;
                do {
                  iVar19 = iVar19 + -1;
                  iVar20 = (int)lVar17;
                  lVar17 = lVar17 + 4;
                  dVar27 = (double)(float)(dVar27 + (double)*(float *)(iVar20 + 0xf0));
                } while (iVar19 != 0);
                dVar27 = (double)((float)(dVar27 + 0.7853981852531433) * fVar5 + fVar4);
              }
              (pMoby->rotation).y = (float)-dVar27;
              fVar7 = ABS(*(float *)(puVar10 + 0xe));
              fVar8 = ABS(*(float *)((int)puVar10 + 0x74));
              *(float *)(puVar10 + 0x18) = fVar7 - fVar8;
              uVar23 = (ulonglong)(*(uint *)(puVar10 + 0xe) >> 0x1c) & 8 |
                       (ulonglong)(*(uint *)(puVar10 + 0x18) >> 0x1e) & 2 |
                       (ulonglong)(*(uint *)((int)puVar10 + 0x74) >> 0x1d) & 4;
              fVar5 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar23 << 2));
              fVar4 = *(float *)((uint)(uVar23 << 2) | 0x735904);
              fVar6 = fVar8;
              if (0.0 <= *(float *)(puVar10 + 0x18)) {
                fVar6 = fVar7;
                fVar7 = fVar8;
              }
              dVar27 = dVar26;
              if (0.0 < fVar6) {
                iVar19 = 4;
                fVar6 = (fVar7 - fVar6) / (fVar7 + fVar6);
                lVar17 = lVar1;
                do {
                  iVar19 = iVar19 + -1;
                  *(float *)((int)lVar17 + 0xd0) = fVar6;
                  lVar17 = lVar17 + 4;
                } while (iVar19 != 0);
                fVar6 = fVar6 * fVar6;
                lVar17 = uVar16 - 0x1b0;
                iVar19 = 4;
                fVar7 = fVar6 * fVar6;
                *(float *)((int)puVar10 + 0xd4) = *(float *)((int)puVar10 + 0xd4) * fVar6;
                *(float *)(puVar10 + 0x1b) = *(float *)(puVar10 + 0x1b) * fVar7;
                *(float *)((int)puVar10 + 0xdc) = *(float *)((int)puVar10 + 0xdc) * fVar7 * fVar6;
                do {
                  iVar19 = iVar19 + -1;
                  *(float *)((int)lVar17 + 0xd0) = *(float *)((int)lVar17 + 0xc0) * fVar7 * fVar7;
                  lVar17 = lVar17 + 4;
                } while (iVar19 != 0);
                iVar19 = 0;
                iVar20 = 8;
                lVar17 = lVar1;
                do {
                  iVar20 = iVar20 + -1;
                  pfVar13 = (float *)((int)&DAT_007358e0 + iVar19);
                  iVar19 = iVar19 + 4;
                  *(float *)((int)lVar17 + 0xd0) = *(float *)((int)lVar17 + 0xd0) * *pfVar13;
                  lVar17 = lVar17 + 4;
                } while (iVar20 != 0);
                iVar19 = 8;
                lVar17 = lVar1;
                do {
                  iVar19 = iVar19 + -1;
                  iVar20 = (int)lVar17;
                  lVar17 = lVar17 + 4;
                  dVar27 = (double)(float)(dVar27 + (double)*(float *)(iVar20 + 0xd0));
                } while (iVar19 != 0);
                dVar27 = (double)((float)(dVar27 + 0.7853981852531433) * fVar5 + fVar4);
              }
              (pMoby->rotation).z = (float)dVar27;
              mobyfunc::PostUpdateMobyLockTransform(pMoby);
              pMoby->modeBits = pMoby->modeBits | (NO_POST_UPDATE|NO_UPDATE);
              if (bVar14) {
                Hero_BuildPoseFromJoints(&DAT_00721afc,&DAT_00a1b880,pMoby->pClass,0,0);
                pMoby->pPreviousAnimationData = &DAT_00a1b880;
                pMoby->pCurrentAnimationData = &DAT_00a1b880;
                pMoby->animationBlend = (float)dVar26;
                pMoby->previousAnimationFrame = '\0';
                pMoby->animationFrame = '\0';
                pMoby->updateId = '\0';
                pMoby->animationId = '\0';
              }
              else if (bVar15) {
                if (pMoby->oClass == SONIC_SUMMONER) {
                  Hero_BuildPoseFromJoints(&DAT_00721b44,&DAT_00a1ba80,pMoby->pClass,6,0);
                }
                else {
                  Hero_BuildPoseFromJoints(&DAT_00721b88,&DAT_00a1ba80,pMoby->pClass,0,0);
                }
                pMoby->pPreviousAnimationData = &DAT_00a1ba80;
                pMoby->pCurrentAnimationData = &DAT_00a1ba80;
                pMoby->animationBlend = (float)dVar26;
                pMoby->previousAnimationFrame = '\0';
                pMoby->animationFrame = '\0';
                pMoby->updateId = '\0';
                pMoby->animationId = '\0';
              }
              else if (bVar3 || bVar2) {
                dVar35 = (double)DAT_00721eb0;
                dVar33 = (double)DAT_00721eb4;
                dVar32 = (double)DAT_00721eb8;
                dVar30 = (double)DAT_00721f60;
                dVar31 = (double)DAT_00721ebc;
                dVar29 = (double)DAT_00721f64;
                dVar28 = (double)DAT_00721f68;
                dVar27 = (double)DAT_00721f6c;
                DAT_00721eb0 = (float)dVar34;
                DAT_00721eb4 = (float)dVar34;
                DAT_00721eb8 = (float)dVar34;
                DAT_00721f60 = (float)dVar34;
                DAT_00721f64 = (float)dVar34;
                DAT_00721f68 = (float)dVar34;
                if (iVar24 == 0) {
                  Hero_BuildPoseFromJoints(&DAT_00721b98,&DAT_00a1bc80,pMoby->pClass,0,0);
                  pMoby->pPreviousAnimationData = &DAT_00a1bc80;
                  pMoby->pCurrentAnimationData = &DAT_00a1bc80;
                }
                else {
                  Hero_BuildPoseFromJoints(&DAT_00721bb0,&DAT_00a1bd80,pMoby->pClass,0,0);
                  pMoby->pPreviousAnimationData = &DAT_00a1bd80;
                  pMoby->pCurrentAnimationData = &DAT_00a1bd80;
                }
                pMoby->animationBlend = (float)dVar26;
                pMoby->previousAnimationFrame = '\0';
                pMoby->animationFrame = '\0';
                pMoby->updateId = '\0';
                pMoby->animationId = '\0';
                DAT_00721eb0 = (float)dVar35;
                DAT_00721eb4 = (float)dVar33;
                DAT_00721eb8 = (float)dVar32;
                DAT_00721ebc = (float)dVar31;
                DAT_00721f60 = (float)dVar30;
                DAT_00721f64 = (float)dVar29;
                DAT_00721f68 = (float)dVar28;
                DAT_00721f6c = (float)dVar27;
              }
            }
            else {
              mobyfunc::UpdateMobyAnimFrame(pMoby);
              if ((DAT_00720bc0 == 0) || (iVar25 != 0)) {
                mobyutil::MB_MtxToEuler
                          ((int)(&DAT_0096a7a0 + iVar19),(MobyInstance *)&pMoby->rotation);
              }
              else {
                Hero_PushGadgetMtxHistory(pMoby,&DAT_0096a7a0 + iVar19);
              }
              mobyfunc::UpdateMobyTransform(pMoby);
              if (Cheats[5] != '\0') {
                fVar4 = (pMoby->transform).v1.y;
                fVar5 = (pMoby->transform).v0.z;
                fVar6 = (pMoby->transform).v1.z;
                fVar7 = (pMoby->transform).v0.y;
                fVar8 = (pMoby->transform).v0.x;
                fVar9 = (pMoby->transform).v1.x;
                (pMoby->transform).v2.x = fVar4 * fVar5 - fVar6 * fVar7;
                (pMoby->transform).v2.w = 0.0;
                (pMoby->transform).v2.y = fVar6 * fVar8 - fVar9 * fVar5;
                (pMoby->transform).v2.z = fVar9 * fVar7 - fVar4 * fVar8;
              }
              mobyfunc::PostUpdateMobyLockTransform(pMoby);
              pMoby->modeBits = pMoby->modeBits | (NO_POST_UPDATE|NO_UPDATE);
            }
          }
          else {
            iVar19 = iVar19 * 0x40;
            (&DAT_0096ad50)[iVar25 * 0x14] = *(undefined4 *)(iVar19 + 0x96a7d0);
            (&DAT_0096ad54)[iVar25 * 0x14] = *(undefined4 *)(iVar19 + 0x96a7d4);
            (&DAT_0096ad58)[iVar25 * 0x14] = *(undefined4 *)(iVar19 + 0x96a7d8);
            (&DAT_0096ad5c)[iVar25 * 0x14] = *(undefined4 *)(iVar19 + 0x96a7dc);
            mobyutil::MB_MtxToEuler
                      ((int)(&DAT_0096a7a0 + iVar19),(MobyInstance *)(&DAT_0096ad60 + iVar25 * 0x50)
                      );
            mobyfunc::UpdateMobyAnimFrame(pMoby);
            mobyfunc::UpdateMobyTransform(pMoby);
            pMoby->modeBits =
                 pMoby->modeBits &
                 (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|
                  DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|
                  HAS_GLOW|TRANSPARENT|NO_UPDATE|DISABLED);
          }
        }
        if ((iVar25 == 3) && (iVar24 == 1 && pMoby != (MobyInstance *)0x0)) {
          if ((DAT_0096ae6c == (MobyInstance *)0x0) &&
             (pMVar18 = mobyfunc::CreateMoby(0x4b4), DAT_0096ae6c = pMVar18,
             pMVar18 != (MobyInstance *)0x0)) {
            pMVar18->field60_0x90 = 0x801432d7;
            (pMVar18->pos).x = g_heroPosition.x;
            (pMVar18->pos).y = g_heroPosition.y;
            (pMVar18->pos).z = g_heroPosition.z;
            (pMVar18->pos).w = g_heroPosition.w;
            (pMVar18->rotation).x = g_heroRotation.x;
            (pMVar18->rotation).y = g_heroRotation.y;
            (pMVar18->rotation).z = g_heroRotation.z;
            (pMVar18->rotation).w = g_heroRotation.w;
            pMVar18->drawDistance = 0x40;
            pMVar18->enabled = '\x01';
            pMVar18->updateDistance = '\0';
            pMVar18->modeBits = NONE;
            pMVar18->scale = pMVar18->scale * 1.3;
            mobyfunc::UpdateMobyTransform(pMVar18);
          }
          pMVar18 = DAT_0096ae6c;
          if ((DAT_0096ae6c != (MobyInstance *)0x0) && ((DAT_0096ae6c->modeBits & DISABLED) == NONE)
             ) {
            mobyfunc::GetBoneTransformations(pMoby,6,uVar16 - 0x140);
            DAT_0096ba60 = *(undefined4 *)(puVar10 + 0x16);
            DAT_0096ba64 = *(undefined4 *)((int)puVar10 + 0xb4);
            DAT_0096ba68 = *(undefined4 *)(puVar10 + 0x17);
            DAT_0096ba6c = *(undefined4 *)((int)puVar10 + 0xbc);
            if (DAT_0096bb92 == 0) {
              DAT_0096bb92 = 1;
              RegisterFuncForMoby(&PTR_Hero_DrawGlows_00705228,g_heroMobyPtr);
            }
            (pMVar18->pos).x = *(f32 *)(puVar10 + 0x16);
            (pMVar18->pos).y = *(f32 *)((int)puVar10 + 0xb4);
            (pMVar18->pos).z = *(f32 *)(puVar10 + 0x17);
            (pMVar18->pos).w = *(f32 *)((int)puVar10 + 0xbc);
            fastfunc::FastApplyTransform(&(pMVar18->transform).v0,(Vec4 *)(puVar10 + 0x10));
            mobyfunc::UpdateMobyTransform(pMVar18);
            uVar22 = g_heroMobyPtr->light;
            pMVar18->color = g_heroMobyPtr->color;
            pMVar18->light = uVar22;
            puVar10[0x22] = (longlong)(int)(animationSpeed * 120.5);
            iVar19 = *(int *)((int)puVar10 + 0x114);
            dVar26 = (double)fastfunc::FastIntToDouble(iVar19);
            puVar10[0x22] = (longlong)(worldUpdateTime - (worldUpdateTime / iVar19) * iVar19);
            fVar4 = (float)((double)(longlong)puVar10[0x22] / dVar26) * 2.0 * 3.1415927 + -3.1415927
            ;
            fVar5 = fVar4;
            if (3.1415925 - fVar4 <= fVar4) {
              fVar5 = 3.1415925 - fVar4;
            }
            if (fVar5 <= -3.1415925 - fVar4) {
              fVar5 = -3.1415925 - fVar4;
            }
            fVar4 = fVar5 * fVar5;
            fVar6 = fVar4 * fVar4 * fVar5;
            fVar7 = fVar4 * fVar6;
            dVar26 = (double)(fVar5 + fVar4 * fVar5 * -0.16666657 + fVar6 * 0.0083330255 +
                              fVar7 * -0.0001980741 + fVar4 * fVar7 * 2.601887e-06);
            iVar19 = fastfunc::FastDoubleToInt((double)(float)(dVar26 * 90.0));
            iVar20 = fastfunc::FastDoubleToInt((double)(float)(dVar26 * 50.0));
            iVar21 = fastfunc::FastDoubleToInt((double)(float)(dVar26 * 10.0));
            uVar22 = iVar19 + 0xd7;
            if (0xff < (int)uVar22) {
              uVar22 = 0xff;
            }
            pMVar18->modeBits = pMVar18->modeBits | HAS_GLOW;
            pMVar18->field60_0x90 =
                 (iVar20 + 0x32) * 0x100 | uVar22 | (iVar21 + 0x14) * 0x10000 | 0x80000000;
          }
        }
        iVar24 = iVar24 + 1;
      } while (iVar24 < 2);
    }
    iVar25 = iVar25 + 1;
    if (6 < iVar25) {
      return;
    }
  } while( true );
}



//==== 000921c0  ns=hero  size=0x674
// sig: undefined EquipItem(void)
// callers(1): 00092834 hero::Hero_UpdateGadgets
// callees(5): 000e0854 loaders::LoadGadgetModel; 000efa28 mobyfunc::CreateMoby; 000fddc0 mobyutil::MB_SetAnimation; 002aa928 mobyupdate_helpers::M1671_002aa928; 005001fc fastfunc::FastMemSet

void hero::EquipItem(void)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  MobyInstance *pMVar4;
  MobyInstance *pMVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  ITEM_ENUM IVar9;
  
  puVar6 = &g_heroMtx;
  if (((g_currentWeaponMoby == (MobyInstance *)0x0) && (DAT_0096ad84 < DAT_0159c330)) &&
     ((DAT_0096bd98 == 0 || (DAT_0096bd98 == 0x24)))) {
    IVar9 = g_WeaponToSwapTo;
    if ((g_WeaponToSwapTo == UNK_00) &&
       ((DAT_0071fb24 != 0 || (IVar9 = g_equippedItem, g_equippedItem == UNK_00)))) {
      IVar9 = WRENCH;
    }
    loaders::LoadGadgetModel((&DAT_00721010)[IVar9 * 0x13],-1);
    iVar8 = 0;
    iVar7 = 0;
    do {
      fastfunc::FastMemSet(&DAT_0096b5d0 + iVar7,0,0xb0);
      iVar8 = iVar8 + 1;
      iVar7 = iVar7 + 0xb0;
      *(undefined2 *)(puVar6 + 0x664) = 0xffff;
      puVar6 = puVar6 + 0x2c;
    } while (iVar8 < 3);
    iVar7 = (&DAT_00721008)[IVar9 * 0x13];
    g_CurrentWeapon = IVar9;
    pMVar5 = mobyfunc::CreateMoby
                       ((MOBY_OCLASSES)(&DAT_00721010)[(&g_CurrentWeapon)[iVar7 * 0x14] * 0x13]);
    if (pMVar5 != (MobyInstance *)0x0) {
      pMVar5->enabled = '\x01';
      pMVar4 = g_heroMobyPtr;
      pMVar5->drawDistance = 0x20;
      uVar2 = pMVar4->color;
      uVar3 = pMVar4->light;
      (&g_currentWeaponMoby)[iVar7 * 0x14] = pMVar5;
      pMVar5->color = uVar2;
      pMVar5->light = uVar3;
      (&DAT_0096ad94)[iVar7 * 0x14] = 2;
      if (IVar9 == WRENCH) {
        (&DAT_0096ad80)[iVar7 * 0x14] = 0x80;
        (&DAT_0096ad94)[iVar7 * 0x14] = 2;
        mobyutil::MB_SetAnimation(pMVar5,1,0,1);
      }
      else {
        (&DAT_0096ad80)[iVar7 * 0x14] = 0x20;
      }
      DAT_0096bd8b = (undefined1)
                     *(undefined4 *)(&DAT_00721018 + (&g_CurrentWeapon)[iVar7 * 0x14] * 0x4c);
    }
  }
  if (DAT_0096ae60 == (MobyInstance *)0x0) {
    DAT_0096ae88 = DAT_0096bdc0;
    if (((DAT_0096bdc0 == 0) && (DAT_0096ae88 = DAT_00969c88, DAT_00969c88 == 0)) &&
       (DAT_0096ae88 = 2, DAT_00969c9c != 0)) {
      DAT_0096ae88 = 3;
    }
    pMVar5 = mobyfunc::CreateMoby((MOBY_OCLASSES)(&DAT_00721010)[DAT_0096ae88 * 0x13]);
    if (pMVar5 != (MobyInstance *)0x0) {
      pMVar5->enabled = '\x01';
      pMVar4 = g_heroMobyPtr;
      pMVar5->drawDistance = 0x20;
      DAT_0096ae84 = 2;
      bVar1 = g_hasClank == 0;
      uVar2 = pMVar4->light;
      DAT_0096ae60 = pMVar5;
      pMVar5->color = pMVar4->color;
      pMVar5->light = uVar2;
      if (bVar1) {
        if (DAT_0096ae88 == 3) {
          mobyupdate_helpers::M1671_002aa928(0);
          mobyupdate_helpers::M1671_002aa928(1);
        }
      }
      else {
        pMVar5->modeBits = pMVar5->modeBits | (UNK_40|DISABLED);
      }
    }
  }
  if ((DAT_0096ae64 == (MobyInstance *)0x0) &&
     (pMVar5 = mobyfunc::CreateMoby((MOBY_OCLASSES)g_BackpackMobyClass),
     pMVar5 != (MobyInstance *)0x0)) {
    pMVar5->enabled = '\x01';
    pMVar4 = g_heroMobyPtr;
    pMVar5->drawDistance = 0x20;
    DAT_0096ae84 = 2;
    bVar1 = g_hasClank != 0;
    uVar2 = pMVar4->light;
    DAT_0096ae64 = pMVar5;
    pMVar5->color = pMVar4->color;
    pMVar5->light = uVar2;
    if (bVar1) {
      pMVar5->modeBits = pMVar5->modeBits | (UNK_40|DISABLED);
    }
  }
  if ((DAT_0096ae10 == (MobyInstance *)0x0) && ((DAT_00969c84 != 0 || (DAT_0096bdbc != 0)))) {
    DAT_0096ae38 = DAT_00969c84;
    if (DAT_0096bdbc != 0) {
      DAT_0096ae38 = DAT_0096bdbc;
    }
    pMVar5 = mobyfunc::CreateMoby((MOBY_OCLASSES)(&DAT_00721010)[DAT_0096ae38 * 0x13]);
    if (pMVar5 != (MobyInstance *)0x0) {
      pMVar5->enabled = '\x01';
      pMVar4 = g_heroMobyPtr;
      pMVar5->drawDistance = 0x20;
      pMVar5->pUpdate = (void *)0x0;
      uVar2 = pMVar4->light;
      DAT_0096ae10 = pMVar5;
      pMVar5->color = pMVar4->color;
      pMVar5->light = uVar2;
      pMVar5->modeBits = pMVar5->modeBits | (DISABLE_Z_WRITE|NO_UPDATE);
      DAT_0096ae34 = 2;
    }
  }
  if ((DAT_0096adc0 == (MobyInstance *)0x0) && (DAT_00969c80 != 0)) {
    DAT_0096ade8 = DAT_00969c80;
    pMVar5 = mobyfunc::CreateMoby((MOBY_OCLASSES)(&DAT_00721010)[DAT_00969c80 * 0x13]);
    if (pMVar5 != (MobyInstance *)0x0) {
      pMVar5->enabled = '\x01';
      pMVar4 = g_heroMobyPtr;
      pMVar5->drawDistance = 0x20;
      DAT_0096ade4 = 2;
      uVar2 = pMVar4->light;
      DAT_0096adc0 = pMVar5;
      pMVar5->color = pMVar4->color;
      pMVar5->light = uVar2;
    }
    pMVar5 = mobyfunc::CreateMoby
                       ((MOBY_OCLASSES)*(undefined4 *)(&DAT_00721014 + DAT_00969c80 * 0x4c));
    if (pMVar5 != (MobyInstance *)0x0) {
      pMVar5->enabled = '\x01';
      pMVar4 = g_heroMobyPtr;
      pMVar5->drawDistance = 0x20;
      DAT_0096ade4 = 2;
      uVar2 = pMVar4->light;
      DAT_0096adc4 = pMVar5;
      pMVar5->color = pMVar4->color;
      pMVar5->light = uVar2;
    }
  }
  if ((DAT_0096aeb0 == (MobyInstance *)0x0) && (UnlockableItems.mapOMatic != '\0')) {
    pMVar5 = mobyfunc::CreateMoby((MOBY_OCLASSES)DAT_007219dc);
    DAT_0096aed8 = 0x21;
    if (pMVar5 != (MobyInstance *)0x0) {
      pMVar5->enabled = '\x01';
      pMVar4 = g_heroMobyPtr;
      pMVar5->drawDistance = 0x20;
      DAT_0096aed4 = 2;
      uVar2 = pMVar4->light;
      DAT_0096aeb0 = pMVar5;
      pMVar5->color = pMVar4->color;
      pMVar5->light = uVar2;
    }
  }
  if ((DAT_0096aeb4 == (MobyInstance *)0x0) && (UnlockableItems.boltGrabber != '\0')) {
    pMVar5 = mobyfunc::CreateMoby((MOBY_OCLASSES)DAT_00721a28);
    DAT_0096aed8 = 0x22;
    if (pMVar5 != (MobyInstance *)0x0) {
      pMVar5->enabled = '\x01';
      pMVar4 = g_heroMobyPtr;
      pMVar5->drawDistance = 0x20;
      DAT_0096aed4 = 2;
      uVar2 = pMVar4->light;
      DAT_0096aeb4 = pMVar5;
      pMVar5->color = pMVar4->color;
      pMVar5->light = uVar2;
    }
  }
  if ((DAT_0096af00 == (MobyInstance *)0x0) && (UnlockableItems.persuader != '\0')) {
    pMVar5 = mobyfunc::CreateMoby((MOBY_OCLASSES)DAT_00721a74);
    DAT_0096af28 = 0x23;
    if (pMVar5 != (MobyInstance *)0x0) {
      pMVar5->enabled = '\x01';
      pMVar4 = g_heroMobyPtr;
      pMVar5->drawDistance = 0x20;
      DAT_0096af24 = 2;
      uVar2 = pMVar4->light;
      DAT_0096af00 = pMVar5;
      pMVar5->color = pMVar4->color;
      pMVar5->light = uVar2;
    }
  }
  return;
}



//==== 00092834  ns=hero  size=0x124
// sig: undefined Hero_UpdateGadgets(void)
// callers(1): 000954c8 hero::HeroUpdate
// callees(5): 00086948 hero::Hero_UpdateGadgetSlots; 0008f538 hero::Hero_UpdateGadgetGlows; 00090548 hero::???_Hero_UpdateManipulatorSpin; 000914e0 hero::Hero_UpdateGadgetMobys; 000921c0 hero::EquipItem

void hero::Hero_UpdateGadgets(void)

{
  bool bVar1;
  
  if (g_onMagnerail == 1) {
LAB_000928ac:
    DAT_0096bd87 = 1;
    DAT_0096bd8c = 1;
  }
  else {
    if ((g_heroStateType == 0x15) || (g_heroStateType == 0x16)) goto LAB_000928ac;
    bVar1 = false;
    if ((g_heroStateType == 0x12) || (g_heroStateType == 0x11)) {
LAB_000928a0:
      bVar1 = true;
    }
    else if ((((g_heroState == DEATH_DROWNING) || (g_heroState == DEATH_WATER_LASER)) ||
             (g_heroState == UNDERWATER_DAMAGE)) || (g_heroState == UNK_75)) goto LAB_000928a0;
    if (bVar1) goto LAB_000928ac;
  }
  DAT_0096bd8e = 0;
  bVar1 = false;
  if ((g_heroStateType == 0x12) || (g_heroStateType == 0x11)) {
LAB_000928f8:
    bVar1 = true;
  }
  else if (((g_heroState == DEATH_DROWNING) ||
           ((g_heroState == DEATH_WATER_LASER || (g_heroState == UNDERWATER_DAMAGE)))) ||
          (g_heroState == UNK_75)) goto LAB_000928f8;
  if (!bVar1) {
    if ((((g_heroStateType != 0x15) && (g_heroStateType != 0x16)) && (g_heroStateType != 3)) &&
       (g_heroState != WATER_JUMP)) goto LAB_00092930;
  }
  DAT_0096bd8e = 1;
LAB_00092930:
  EquipItem();
  Hero_UpdateGadgetMobys();
  ____Hero_UpdateManipulatorSpin();
  Hero_UpdateGadgetGlows();
  Hero_UpdateGadgetSlots();
  return;
}



//==== 00092958  ns=hero  size=0x90
// sig: undefined ???_Hero_GetJoint9Mtx(void)
// callers(0): 
// callees(1): 000f1364 mobyfunc::GetMobyJointsWorldMtx

void hero::____Hero_GetJoint9Mtx(ulonglong param_1)

{
  undefined1 local_30 [48];
  
  if ((int)param_1 == 0) {
    param_1 = ZEXT48(g_heroMobyPtr);
  }
  mobyfunc::GetMobyJointsWorldMtx(param_1,9,local_30,&DAT_0096a7a0);
  return;
}



//==== 000929e8  ns=hero  size=0x14
// sig: undefined ???_Hero_SetTweakPair_929e8(void)
// callers(0): 
// callees(0): 

void hero::____Hero_SetTweakPair_929e8(double param_1,double param_2)

{
  DAT_00721d24 = (float)param_1;
  DAT_00721d28 = (float)param_2;
  return;
}



//==== 00092a58  ns=hero  size=0x2c8
// sig: undefined Hero_SetMagnebootsTweaks(void)
// callers(1): 000954c8 hero::HeroUpdate
// callees(0): 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void hero::Hero_SetMagnebootsTweaks(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if (g_onMagnerail != 0) {
    fVar1 = g_heroGravityMtx * 0.0 + DAT_00969d30 * 0.0 + DAT_00969d40 * -1.0 + DAT_00969d50 * 0.0;
    fVar2 = DAT_00969d24 * 0.0 + DAT_00969d34 * 0.0 + DAT_00969d44 * -1.0 + DAT_00969d54 * 0.0;
    fVar3 = DAT_00969d28 * 0.0 + DAT_00969d38 * 0.0 + DAT_00969d48 * -1.0 + DAT_00969d58 * 0.0;
    DAT_00721d24 = DAT_0071f40c * 0.013;
    DAT_00721d28 = DAT_0071f40c * 0.3;
    DAT_00721ce0 = 0.43633232;
    if (g_heroState == MAGNERAMP_WAITING) {
      DAT_00721ce0 = 0.29670596;
    }
    else if (g_heroState == MAGNERAMP_ATTACK) {
      DAT_00721ce0 = 0.08726646;
    }
    else if ((g_heroState == MAGNERAMP_JUMP) || (g_heroState == CROUCHING)) {
      DAT_00721ce0 = 0.19198622;
    }
    if ((g_standingOnMoby != 0) && (0.15707964 < DAT_00721ce0)) {
      DAT_00721ce0 = 0.15707964;
    }
    fVar5 = fVar1 * 0.6981317;
    DAT_00721ce4 = DAT_00721ce0;
    if ((fVar5 <= DAT_00721ce0) && (DAT_00721ce4 = fVar5, fVar5 < -DAT_00721ce0)) {
      DAT_00721ce4 = -DAT_00721ce0;
    }
    DAT_00721e44 = DAT_00721ce4 * -0.5;
    fVar5 = fVar2 * -0.6981317;
    if ((fVar5 <= DAT_00721ce0) && (fVar4 = -DAT_00721ce0, DAT_00721ce0 = fVar5, fVar5 < fVar4)) {
      DAT_00721ce0 = fVar4;
    }
    DAT_00721e40 = DAT_00721ce0 * -0.25;
    fVar1 = fVar1 * -1.2217305;
    if (0.99483764 < fVar1) {
      fVar1 = 0.99483764;
    }
    if (fVar1 < -0.12217305) {
      fVar1 = -0.12217305;
    }
    if (fVar3 <= 0.85) {
      if ((0.5 < fVar3) && (fVar1 < 1.2217305)) {
        fVar1 = 1.2217305;
      }
    }
    else if (fVar1 < 1.3962634) {
      fVar1 = 1.3962634;
    }
    DAT_00722524 = fVar1 * 0.57;
    DAT_007225d4 = fVar1 * 0.5;
    DAT_00722734 = fVar1 * 0.35;
    DAT_00722730 = 1.2217305;
    fVar2 = fVar2 * 1.2217305;
    if ((fVar2 <= 1.2217305) && (DAT_00722730 = fVar2, fVar2 < -1.2217305)) {
      DAT_00722730 = -1.2217305;
    }
    DAT_00722520 = DAT_00722730 * 0.7;
    DAT_007225d0 = DAT_00722520;
    DAT_00722680 = DAT_00722520;
    DAT_00722684 = DAT_007225d4;
  }
  return;
}



//==== 00092d58  ns=hero  size=0x304
// sig: undefined Hero_UpdateIdleLook(void)
// callers(1): 000954c8 hero::HeroUpdate
// callees(4): 000fcbe8 mobyutil::MB_randRangeFloat; 000fe484 mobyutil::MB_randRange; 000fe4f0 mobyutil::MB_randRangeSigned; 004fff60 fastfunc::FastDecTimerS32

void hero::Hero_UpdateIdleLook(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  double dVar8;
  double dVar9;
  
  puVar7 = &g_heroMtx;
  if ((g_heroState == STANDING) && (g_heroMobyPtr->animationId == '\0')) {
    iVar3 = 0;
    iVar4 = 0;
    iVar5 = 0;
    iVar6 = 0;
    do {
      iVar1 = fastfunc::FastDecTimerS32((int)&DAT_0096ad40 + iVar4);
      if (iVar1 != 0) {
        if (iVar3 == 0) {
          dVar8 = (double)mobyutil::MB_randRangeSigned(0x3fc6571840000000,0x3fe0c15240000000);
          puVar7[0x40a] = (float)dVar8;
          uVar2 = mobyutil::MB_randRange((int)(animationSpeed * 70.5),(int)(animationSpeed * 150.5))
          ;
          *(undefined4 *)((int)&DAT_0096ad40 + iVar4) = uVar2;
        }
        else if (iVar3 == 1) {
          dVar8 = (double)mobyutil::MB_randRangeSigned(0x3fc6571840000000,0x3fe0c15240000000);
          puVar7[0x40a] = (float)dVar8;
          uVar2 = mobyutil::MB_randRange((int)(animationSpeed * 40.5),(int)(animationSpeed * 90.5));
          *(undefined4 *)((int)&DAT_0096ad40 + iVar4) = uVar2;
        }
        else if (iVar3 == 2) {
          dVar8 = (double)mobyutil::MB_randRangeSigned(0x3fd0c15240000000,0x3febecde60000000);
          puVar7[0x40a] = (float)dVar8;
          uVar2 = mobyutil::MB_randRange((int)(animationSpeed * 40.5),(int)(animationSpeed * 90.5));
          *(undefined4 *)((int)&DAT_0096ad40 + iVar4) = uVar2;
        }
        else {
          dVar8 = (double)mobyutil::MB_randRangeFloat(-0.08726646,0.5235988);
          puVar7[0x409] = (float)dVar8;
          dVar9 = (double)*(float *)((int)&DAT_0096ad08 + iVar5);
          dVar8 = (double)mobyutil::MB_randRangeSigned(0x3fd6571840000000,0x3feeb7c160000000);
          puVar7[0x40a] = (float)dVar8;
          if (((dVar9 <= 0.0) && (*(float *)((int)&DAT_0096ad08 + iVar5) <= 0.0)) ||
             ((0.0 <= dVar9 && (0.0 <= *(float *)((int)&DAT_0096ad08 + iVar5))))) {
            *(float *)((int)&DAT_0096ad08 + iVar5) = -*(float *)((int)&DAT_0096ad08 + iVar5);
          }
          uVar2 = mobyutil::MB_randRange((int)(animationSpeed * 35.5),(int)(animationSpeed * 70.5));
          *(undefined4 *)((int)&DAT_0096ad40 + iVar4) = uVar2;
        }
      }
      uVar2 = puVar7[0x409];
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 4;
      *(undefined4 *)((int)&DAT_00722528 + iVar6) = puVar7[0x40a];
      *(undefined4 *)((int)&DAT_00722524 + iVar6) = uVar2;
      iVar5 = iVar5 + 0x10;
      puVar7 = puVar7 + 4;
      iVar6 = iVar6 + 0xb0;
    } while (iVar3 < 4);
  }
  return;
}



//==== 0009305c  ns=hero  size=0x14
// sig: undefined ???_Hero_SetTweak_721dd4(void)
// callers(0): 
// callees(0): 

void hero::____Hero_SetTweak_721dd4(double param_1,double param_2)

{
  DAT_00721dd4 = (float)param_1;
  DAT_00721dd8 = (float)param_2;
  return;
}



//==== 00093070  ns=hero  size=0x14
// sig: undefined ???_Hero_SetTweak_721e84(void)
// callers(0): 
// callees(0): 

void hero::____Hero_SetTweak_721e84(double param_1,double param_2)

{
  DAT_00721e84 = (float)param_1;
  DAT_00721e88 = (float)param_2;
  return;
}



//==== 000930e8  ns=hero  size=0xb38
// sig: undefined Hero_UpdateLookAtTarget(void)
// callers(1): 000954c8 hero::HeroUpdate
// callees(5): 00057820 collproc::CollLine; 00084180 hero::Hero_GetHeroRelativeVector; 000fcccc mobyutil::MB_GetPvarsIfMobyHasThem; 005025e0 fastfunc::FastDiffRots; 005026a0 fastfunc::FastSubRots

void hero::Hero_UpdateLookAtTarget(void)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  MobyInstance *moby;
  undefined4 uVar8;
  undefined1 auVar9 [16];
  ulonglong *puVar10;
  float fVar11;
  float fVar12;
  float *pfVar13;
  MobyInstance *pMVar14;
  ulonglong uVar15;
  int iVar19;
  ulonglong uVar16;
  int iVar20;
  longlong lVar17;
  longlong lVar18;
  int iVar21;
  int iVar22;
  ulonglong unaff_r22;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  MobyInstance *pMVar23;
  ulonglong in_LR;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  ulonglong in_f27;
  ulonglong in_f28;
  double dVar28;
  ulonglong in_f29;
  ulonglong in_f30;
  double dVar29;
  ulonglong in_f31;
  double dVar30;
  double dVar31;
  
  uVar15 = ZEXT48(&stack0x00000000);
  lVar18 = uVar15 - 0x1f0;
  puVar10 = (ulonglong *)lVar18;
  *puVar10 = uVar15;
  puVar10[0x40] = in_LR;
  puVar10[0x39] = in_f27;
  puVar10[0x3a] = in_f28;
  puVar10[0x3b] = in_f29;
  puVar10[0x3c] = in_f30;
  puVar10[0x3d] = in_f31;
  puVar10[0x31] = unaff_r24;
  puVar10[0x34] = unaff_r27;
  iVar20 = g_heroStateType;
  bVar1 = g_heroStateType == 1;
  bVar2 = g_heroStateType == 0;
  bVar3 = g_heroStateType == 7;
  puVar10[0x38] = unaff_r31;
  puVar10[0x37] = unaff_r30;
  puVar10[0x36] = unaff_r29;
  puVar10[0x35] = unaff_r28;
  puVar10[0x33] = unaff_r26;
  puVar10[0x32] = unaff_r25;
  puVar10[0x30] = unaff_r23;
  puVar10[0x2f] = unaff_r22;
  if ((((bVar1) || (iVar20 == 4)) || (iVar20 == 2)) || ((bVar3 || (bVar2)))) {
    if (g_heroMobyPtr->animationId != 'T') {
      pMVar14 = DAT_0096bf54;
      if (worldUpdateTime == (worldUpdateTime / 7) * 7) {
        dVar29 = 0.0;
        dVar30 = 100000000.0;
        pMVar23 = (MobyInstance *)0x0;
        pMVar14 = (MobyInstance *)0x0;
        if (DAT_00a49344 != (MobyInstance *)0x0) {
          dVar31 = dVar29;
          iVar20 = 0;
          moby = DAT_00a49344;
          do {
            iVar19 = mobyutil::MB_GetPvarsIfMobyHasThem(moby);
            fVar7 = g_heroPosition.y;
            fVar6 = g_heroPosition.x;
            if (iVar19 != 0) {
              fVar4 = (moby->pos).x;
              fVar5 = (moby->pos).y;
              fVar11 = g_heroPosition.x - fVar4;
              fVar12 = g_heroPosition.y - fVar5;
              puVar10[0x2c] = (ulonglong)*(byte *)(iVar19 + 0x38);
              dVar28 = (double)SQRT(fVar11 * fVar11 + fVar12 * fVar12);
              if (dVar28 <= (double)(longlong)puVar10[0x2c]) {
                fVar4 = fVar4 - fVar6;
                fVar5 = fVar5 - fVar7;
                dVar24 = ABS((double)fVar4);
                dVar26 = ABS((double)fVar5);
                *(float *)((int)puVar10 + 0xc4) = fVar4;
                *(float *)(puVar10 + 0x19) = fVar5;
                *(float *)((int)puVar10 + 0xcc) = (float)(dVar24 - dVar26);
                uVar16 = (ulonglong)(*(uint *)((int)puVar10 + 0xc4) >> 0x1c) & 8 |
                         (ulonglong)(*(uint *)((int)puVar10 + 0xcc) >> 0x1e) & 2 |
                         (ulonglong)(*(uint *)(puVar10 + 0x19) >> 0x1d) & 4;
                fVar7 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar16 << 2));
                fVar6 = *(float *)((uint)(uVar16 << 2) | 0x735904);
                if (dVar31 <= (double)*(float *)((int)puVar10 + 0xcc)) {
                  dVar24 = ABS((double)*(float *)(puVar10 + 0x19));
                  dVar26 = ABS((double)*(float *)((int)puVar10 + 0xc4));
                }
                dVar27 = dVar31;
                if (dVar31 < dVar26) {
                  iVar21 = 4;
                  fVar4 = (float)(dVar24 - dVar26) / (float)(dVar24 + dVar26);
                  lVar17 = lVar18;
                  do {
                    iVar21 = iVar21 + -1;
                    *(float *)((int)lVar17 + 0x130) = fVar4;
                    lVar17 = lVar17 + 4;
                  } while (iVar21 != 0);
                  fVar4 = fVar4 * fVar4;
                  lVar17 = uVar15 - 0x1e0;
                  iVar21 = 4;
                  fVar5 = fVar4 * fVar4;
                  *(float *)((int)puVar10 + 0x134) = *(float *)((int)puVar10 + 0x134) * fVar4;
                  *(float *)(puVar10 + 0x27) = *(float *)(puVar10 + 0x27) * fVar5;
                  *(float *)((int)puVar10 + 0x13c) =
                       *(float *)((int)puVar10 + 0x13c) * fVar5 * fVar4;
                  do {
                    iVar21 = iVar21 + -1;
                    *(float *)((int)lVar17 + 0x130) =
                         *(float *)((int)lVar17 + 0x120) * fVar5 * fVar5;
                    lVar17 = lVar17 + 4;
                  } while (iVar21 != 0);
                  iVar21 = 0;
                  iVar22 = 8;
                  lVar17 = lVar18;
                  do {
                    iVar22 = iVar22 + -1;
                    pfVar13 = (float *)((int)&DAT_007358e0 + iVar21);
                    iVar21 = iVar21 + 4;
                    *(float *)((int)lVar17 + 0x130) = *(float *)((int)lVar17 + 0x130) * *pfVar13;
                    lVar17 = lVar17 + 4;
                  } while (iVar22 != 0);
                  iVar21 = 8;
                  lVar17 = lVar18;
                  dVar24 = dVar31;
                  do {
                    iVar21 = iVar21 + -1;
                    iVar22 = (int)lVar17;
                    lVar17 = lVar17 + 4;
                    dVar24 = (double)(float)(dVar24 + (double)*(float *)(iVar22 + 0x130));
                  } while (iVar21 != 0);
                  dVar27 = (double)((float)(dVar24 + 0.7853981852531433) * fVar7 + fVar6);
                }
                dVar24 = (double)fastfunc::FastSubRots((float)dVar27,g_heroRotation.z);
                if (dVar24 <= 1.919862151145935) {
                  fVar6 = (moby->pos).x - g_heroPosition.x;
                  fVar7 = (moby->pos).y - g_heroPosition.y;
                  fVar6 = SQRT(fVar6 * fVar6 + fVar7 * fVar7);
                  fVar7 = g_heroPosition.z - (moby->pos).z;
                  dVar27 = ABS((double)fVar7);
                  *(float *)((int)puVar10 + 0xbc) = fVar7;
                  dVar26 = ABS((double)fVar6);
                  *(float *)(puVar10 + 0x17) = fVar6;
                  *(float *)(puVar10 + 0x18) = (float)(dVar26 - dVar27);
                  uVar16 = (ulonglong)(*(uint *)(puVar10 + 0x17) >> 0x1c) & 8 |
                           (ulonglong)(*(uint *)(puVar10 + 0x18) >> 0x1e) & 2 |
                           (ulonglong)(*(uint *)((int)puVar10 + 0xbc) >> 0x1d) & 4;
                  fVar7 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar16 << 2));
                  fVar6 = *(float *)((uint)(uVar16 << 2) | 0x735904);
                  if (dVar31 <= (double)*(float *)(puVar10 + 0x18)) {
                    dVar26 = ABS((double)*(float *)((int)puVar10 + 0xbc));
                    dVar27 = ABS((double)*(float *)(puVar10 + 0x17));
                  }
                  dVar25 = dVar31;
                  if (dVar31 < dVar27) {
                    iVar21 = 4;
                    fVar4 = (float)(dVar26 - dVar27) / (float)(dVar26 + dVar27);
                    lVar17 = lVar18;
                    do {
                      iVar21 = iVar21 + -1;
                      *(float *)((int)lVar17 + 0x110) = fVar4;
                      lVar17 = lVar17 + 4;
                    } while (iVar21 != 0);
                    fVar4 = fVar4 * fVar4;
                    lVar17 = uVar15 - 0x1e0;
                    iVar21 = 4;
                    fVar5 = fVar4 * fVar4;
                    *(float *)((int)puVar10 + 0x114) = *(float *)((int)puVar10 + 0x114) * fVar4;
                    *(float *)(puVar10 + 0x23) = *(float *)(puVar10 + 0x23) * fVar5;
                    *(float *)((int)puVar10 + 0x11c) =
                         *(float *)((int)puVar10 + 0x11c) * fVar5 * fVar4;
                    do {
                      iVar21 = iVar21 + -1;
                      *(float *)((int)lVar17 + 0x110) =
                           *(float *)((int)lVar17 + 0x100) * fVar5 * fVar5;
                      lVar17 = lVar17 + 4;
                    } while (iVar21 != 0);
                    iVar21 = 0;
                    iVar22 = 8;
                    lVar17 = lVar18;
                    do {
                      pfVar13 = (float *)((int)&DAT_007358e0 + iVar21);
                      iVar22 = iVar22 + -1;
                      iVar21 = iVar21 + 4;
                      *(float *)((int)lVar17 + 0x110) = *(float *)((int)lVar17 + 0x110) * *pfVar13;
                      lVar17 = lVar17 + 4;
                    } while (iVar22 != 0);
                    iVar21 = 8;
                    lVar17 = lVar18;
                    dVar26 = dVar31;
                    do {
                      iVar21 = iVar21 + -1;
                      iVar22 = (int)lVar17;
                      lVar17 = lVar17 + 4;
                      dVar26 = (double)(float)(dVar26 + (double)*(float *)(iVar22 + 0x110));
                    } while (iVar21 != 0);
                    dVar25 = (double)((float)(dVar26 + 0.7853981852531433) * fVar7 + fVar6);
                  }
                  if (ABS(dVar25) <= 1.0471975803375244) {
                    dVar28 = (double)(float)(dVar28 + (double)(float)(dVar24 * dVar28));
                    if ((moby == DAT_0096bf54) &&
                       (dVar28 = (double)(float)(dVar28 - 1.5), dVar28 < dVar31)) {
                      dVar28 = dVar31;
                    }
                    puVar10[0x2c] = (ulonglong)*(byte *)(iVar19 + 0x39);
                    dVar24 = (double)(longlong)puVar10[0x2c];
                    if ((dVar28 < dVar30 || dVar29 < dVar24) &&
                       (dVar30 = dVar28, pMVar23 = moby, dVar29 < dVar24)) {
                      dVar29 = dVar24;
                    }
                  }
                }
              }
            }
            moby = *(MobyInstance **)((int)&DAT_00a49348 + iVar20);
            iVar20 = iVar20 + 4;
            pMVar14 = pMVar23;
          } while (moby != (MobyInstance *)0x0);
        }
      }
      DAT_0096bf54 = pMVar14;
      if (DAT_0096bf54 != (MobyInstance *)0x0) {
        Hero_GetHeroRelativeVector(0.0,0.0,1.2,(float *)(uVar15 - 0x180));
        pMVar14 = DAT_0096bf54;
        *(f32 *)(puVar10 + 0x10) = (DAT_0096bf54->pos).x;
        *(f32 *)((int)puVar10 + 0x84) = (pMVar14->pos).y;
        fVar6 = (pMVar14->pos).z;
        *(float *)(puVar10 + 0x11) = fVar6;
        *(f32 *)((int)puVar10 + 0x8c) = (pMVar14->pos).w;
        *(float *)(puVar10 + 0x11) = fVar6 + 0.5;
        iVar20 = collproc::CollLine(uVar15 - 0x180,uVar15 - 0x170,2,0,0);
        if (iVar20 != 0) {
          DAT_0096bf54 = (MobyInstance *)0x0;
        }
      }
      if (DAT_0096bf54 != (MobyInstance *)0x0) {
        dVar29 = (double)(DAT_0096bf54->pos).z;
        dVar31 = (double)(DAT_0096bf54->pos).x;
        dVar30 = (double)(DAT_0096bf54->pos).y;
        iVar20 = mobyutil::MB_GetPvarsIfMobyHasThem(DAT_0096bf54);
        if (iVar20 != 0) {
          puVar10[0x2c] = (ulonglong)*(byte *)(iVar20 + 0x3a);
          dVar29 = (double)(float)(dVar29 + (double)((float)(longlong)puVar10[0x2c] * 0.125));
        }
        dVar27 = 0.30000001192092896;
        dVar26 = 0.0;
        Hero_GetHeroRelativeVector(0.3,0.0,0.85,(float *)(puVar10 + 0x12));
        fVar6 = (float)(dVar30 - (double)*(float *)((int)puVar10 + 0x94));
        dVar28 = ABS((double)(float)(dVar31 - (double)*(float *)(puVar10 + 0x12)));
        dVar24 = ABS((double)fVar6);
        *(float *)((int)puVar10 + 0xac) = (float)(dVar31 - (double)*(float *)(puVar10 + 0x12));
        *(float *)(puVar10 + 0x16) = fVar6;
        *(float *)((int)puVar10 + 0xb4) = (float)(dVar28 - dVar24);
        iVar20 = (*(uint *)((int)puVar10 + 0xac) >> 0x1c & 8 |
                 *(uint *)((int)puVar10 + 0xb4) >> 0x1e & 2 | *(uint *)(puVar10 + 0x16) >> 0x1d & 4)
                 * 4;
        fVar7 = *(float *)(&mobyutil::g_atanQuadrantTable + iVar20);
        fVar6 = *(float *)(&DAT_00735904 + iVar20);
        if (dVar26 <= (double)*(float *)((int)puVar10 + 0xb4)) {
          dVar28 = ABS((double)*(float *)(puVar10 + 0x16));
          dVar24 = ABS((double)*(float *)((int)puVar10 + 0xac));
        }
        dVar25 = dVar26;
        if (dVar26 < dVar24) {
          iVar20 = 4;
          fVar4 = (float)(dVar28 - dVar24) / (float)(dVar28 + dVar24);
          lVar17 = lVar18;
          do {
            iVar20 = iVar20 + -1;
            *(float *)((int)lVar17 + 0xf0) = fVar4;
            lVar17 = lVar17 + 4;
          } while (iVar20 != 0);
          fVar4 = fVar4 * fVar4;
          lVar17 = uVar15 - 0x1e0;
          iVar20 = 4;
          fVar5 = fVar4 * fVar4;
          *(float *)((int)puVar10 + 0xf4) = *(float *)((int)puVar10 + 0xf4) * fVar4;
          *(float *)(puVar10 + 0x1f) = *(float *)(puVar10 + 0x1f) * fVar5;
          *(float *)((int)puVar10 + 0xfc) = *(float *)((int)puVar10 + 0xfc) * fVar5 * fVar4;
          do {
            iVar20 = iVar20 + -1;
            *(float *)((int)lVar17 + 0xf0) = *(float *)((int)lVar17 + 0xe0) * fVar5 * fVar5;
            lVar17 = lVar17 + 4;
          } while (iVar20 != 0);
          iVar20 = 0;
          iVar19 = 8;
          lVar17 = lVar18;
          do {
            iVar19 = iVar19 + -1;
            pfVar13 = (float *)((int)&DAT_007358e0 + iVar20);
            iVar20 = iVar20 + 4;
            *(float *)((int)lVar17 + 0xf0) = *(float *)((int)lVar17 + 0xf0) * *pfVar13;
            lVar17 = lVar17 + 4;
          } while (iVar19 != 0);
          iVar20 = 8;
          lVar17 = lVar18;
          dVar28 = dVar26;
          do {
            iVar20 = iVar20 + -1;
            iVar19 = (int)lVar17;
            lVar17 = lVar17 + 4;
            dVar28 = (double)(float)(dVar28 + (double)*(float *)(iVar19 + 0xf0));
          } while (iVar20 != 0);
          dVar25 = (double)((float)(dVar28 + 0.7853981852531433) * fVar7 + fVar6);
        }
        dVar28 = (double)fastfunc::FastDiffRots(dVar25,(double)g_heroRotation.z);
        fVar6 = (float)((double)*(float *)(puVar10 + 0x13) - dVar29);
        fVar7 = (float)(dVar30 - (double)*(float *)((int)puVar10 + 0x94));
        *(float *)(puVar10 + 0x2a) = fVar6;
        *(float *)((int)puVar10 + 0x154) = fVar6;
        *(float *)(puVar10 + 0x2b) = fVar6;
        *(float *)((int)puVar10 + 0x15c) = fVar6;
        auVar9 = auRam00000000 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        dVar29 = ABS((double)fVar6);
        auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        fVar6 = SQRT((float)(dVar31 - (double)*(float *)(puVar10 + 0x12)) *
                     (float)(dVar31 - (double)*(float *)(puVar10 + 0x12)) + fVar7 * fVar7);
        auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        dVar30 = ABS((double)fVar6);
        auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        *(float *)(puVar10 + 0x14) = fVar6;
        auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        uVar8 = storeVectorElementWordIndexed
                          (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60,0,
                           uVar15 - 0x14c);
        *(undefined4 *)(uVar15 - 0x14c) = uVar8;
        *(float *)(puVar10 + 0x15) = (float)(dVar30 - dVar29);
        iVar20 = (int)(((ulonglong)(*(uint *)(puVar10 + 0x14) >> 0x1c) & 8 |
                       (ulonglong)(*(uint *)(puVar10 + 0x15) >> 0x1e) & 2 |
                       (ulonglong)(*(uint *)((int)puVar10 + 0xa4) >> 0x1d) & 4) << 2);
        fVar7 = *(float *)(&mobyutil::g_atanQuadrantTable + iVar20);
        fVar6 = *(float *)(&DAT_00735904 + iVar20);
        if (dVar26 <= (double)*(float *)(puVar10 + 0x15)) {
          dVar30 = ABS((double)*(float *)((int)puVar10 + 0xa4));
          dVar29 = ABS((double)*(float *)(puVar10 + 0x14));
        }
        dVar31 = dVar26;
        if (dVar26 < dVar29) {
          iVar20 = 4;
          fVar4 = (float)(dVar30 - dVar29) / (float)(dVar30 + dVar29);
          lVar17 = lVar18;
          do {
            iVar20 = iVar20 + -1;
            *(float *)((int)lVar17 + 0xd0) = fVar4;
            lVar17 = lVar17 + 4;
          } while (iVar20 != 0);
          fVar4 = fVar4 * fVar4;
          lVar17 = uVar15 - 0x1e0;
          iVar20 = 4;
          fVar5 = fVar4 * fVar4;
          *(float *)((int)puVar10 + 0xd4) = *(float *)((int)puVar10 + 0xd4) * fVar4;
          *(float *)(puVar10 + 0x1b) = *(float *)(puVar10 + 0x1b) * fVar5;
          *(float *)((int)puVar10 + 0xdc) = *(float *)((int)puVar10 + 0xdc) * fVar5 * fVar4;
          do {
            iVar20 = iVar20 + -1;
            *(float *)((int)lVar17 + 0xd0) = *(float *)((int)lVar17 + 0xc0) * fVar5 * fVar5;
            lVar17 = lVar17 + 4;
          } while (iVar20 != 0);
          iVar20 = 0;
          iVar19 = 8;
          lVar17 = lVar18;
          do {
            pfVar13 = (float *)((int)&DAT_007358e0 + iVar20);
            iVar19 = iVar19 + -1;
            iVar20 = iVar20 + 4;
            *(float *)((int)lVar17 + 0xd0) = *(float *)((int)lVar17 + 0xd0) * *pfVar13;
            lVar17 = lVar17 + 4;
          } while (iVar19 != 0);
          iVar20 = 8;
          dVar29 = dVar26;
          do {
            iVar20 = iVar20 + -1;
            iVar19 = (int)lVar18;
            lVar18 = lVar18 + 4;
            dVar29 = (double)(float)(dVar29 + (double)*(float *)(iVar19 + 0xd0));
          } while (iVar20 != 0);
          dVar31 = (double)((float)(dVar29 + 0.7853981852531433) * fVar7 + fVar6);
        }
        iVar20 = DAT_00969ea0;
        fVar6 = animationSpeed;
        dVar29 = 1.029744267463684;
        if ((dVar28 <= 1.029744267463684) && (dVar29 = dVar28, dVar28 < -1.029744267463684)) {
          dVar29 = -1.029744267463684;
        }
        if (0.6108652353286743 < dVar31) {
          dVar31 = 0.6108652353286743;
        }
        if (dVar31 < -0.4363323152065277) {
          dVar31 = -0.4363323152065277;
        }
        puVar10[0x2c] = (longlong)(int)(animationSpeed * 77.5);
        puVar10[0x2c] = (longlong)(int)(fVar6 * 50.5);
        dVar30 = dVar29;
        if (((*(int *)((int)puVar10 + 0x164) - *(int *)((int)puVar10 + 0x164) < iVar20) &&
            (dVar30 = 0.296705961227417, dVar31 = dVar26, dVar29 <= 0.296705961227417)) &&
           (dVar30 = dVar29, dVar29 < -0.296705961227417)) {
          dVar30 = -0.296705961227417;
        }
        dVar29 = (double)DAT_0071f40c;
        DAT_00721e84 = (float)(dVar29 * 0.020999999716877937);
        DAT_00721e88 = (float)(dVar29 * 0.27000001072883606);
        DAT_00721dd8 = (float)(dVar29 * dVar27);
        DAT_00721e44 = (float)dVar31;
        DAT_00721e48 = (float)(dVar30 * 0.699999988079071);
        DAT_00721dd4 = (float)(dVar29 * 0.014000000432133675);
        DAT_00721d98 = DAT_00721e48 * 0.55;
      }
    }
  }
  else {
    DAT_0096bf54 = (MobyInstance *)0x0;
  }
  return;
}



//==== 00093c98  ns=hero  size=0x4a0
// sig: undefined Hero_UpdateCheatTweaks(void)
// callers(1): 000954c8 hero::HeroUpdate
// callees(7): 000fcbe8 mobyutil::MB_randRangeFloat; 000fe484 mobyutil::MB_randRange; 000fe4f0 mobyutil::MB_randRangeSigned; 001099ec mobyutil::Lerp; 00109af0 mobyutil::Delt; 004fff60 fastfunc::FastDecTimerS32; 00502758 fastfunc::FastDoubleToInt
// strings: 0096c074: 'None' | 00093c54: '?333B"' (raw)

void hero::Hero_UpdateCheatTweaks(void)

{
  int iVar1;
  double dVar2;
  double extraout_f1;
  float fVar3;
  
  if ((Cheats[3] != '\0') && (DAT_0096ae64 != 0)) {
    DAT_007228dc = FLOAT_0071fb54;
  }
  DAT_00721e8c = FLOAT_0071fb50;
  if (Cheats[1] == '\0') {
    fVar3 = mobyutil::Delt(0.92,0.05,&FLOAT_0071fb50);
  }
  else {
    fVar3 = mobyutil::Delt(1.57,0.05,&FLOAT_0071fb50);
  }
  dVar2 = (double)fVar3;
  if (((DAT_00969f40 != 0) && (dVar2 = 1.399999976158142, 1.4 < DAT_00969f38)) &&
     (dVar2 = (double)DAT_00969f28, 1.0 < dVar2)) {
    DAT_00721e44 = DAT_00969f38 * 1.5 * 0.017453292 + 0.19198622;
    if (0.47123888 < DAT_00721e44) {
      DAT_00721e44 = 0.47123888;
    }
    fVar3 = (1.0 - DAT_00969f3c) * 35.0 * 0.017453292;
    if (fVar3 < DAT_00721e44) {
      DAT_00721e44 = fVar3;
    }
    DAT_00721ce4 = DAT_00721e44 * 0.7;
    DAT_00721d24 = DAT_0071f40c * 0.008;
    DAT_00721d28 = DAT_0071f40c * 0.3;
    DAT_00721e84 = DAT_0071f40c * 0.015;
    DAT_00721e88 = DAT_0071f40c * 0.3;
    return;
  }
  if (((g_heroState == STANDING) &&
      ((g_heroMobyPtr->animationId < 3 || (g_heroMobyPtr->animationId == ':')))) &&
     (DAT_0096bf54 == 0)) {
    if ((g_heroMobyPtr->animationId == '\x01') || (g_heroMobyPtr->animationId == '\x02')) {
      DAT_0096acf0 = mobyutil::MB_randRange
                               ((int)(animationSpeed * 40.5),(int)(animationSpeed * 70.5));
      dVar2 = extraout_f1;
    }
    iVar1 = fastfunc::FastDecTimerS32(dVar2,&DAT_0096acf0);
    if (iVar1 != 0) {
      dVar2 = (double)mobyutil::MB_randRangeFloat(-0.15707964,0.43633232);
      DAT_0096ace4 = (float)-dVar2;
      dVar2 = (double)mobyutil::MB_randRangeSigned(0x3fd6571840000000,0x3fefd5b5c0000000);
      DAT_0096ace8 = (float)dVar2;
      dVar2 = (double)mobyutil::MB_randRangeFloat(0.0,1.0);
      DAT_0096acf4 = mobyutil::Lerp(0.015,0.007,(float)dVar2);
      DAT_0096acf8 = mobyutil::Lerp(0.29,0.3,(float)dVar2);
      DAT_0096acf0 = mobyutil::MB_randRange
                               ((int)(animationSpeed * 90.5),(int)(animationSpeed * 200.5));
      iVar1 = fastfunc::FastDoubleToInt
                        ((double)(float)((double)(longlong)(int)(animationSpeed * 80.5) * dVar2));
      DAT_0096acf0 = DAT_0096acf0 + iVar1;
    }
    if ((g_heroMobyPtr->animationId == '\x01') || (g_heroMobyPtr->animationId == '\x02')) {
      if (DAT_0096ace8 <= 0.34906584) {
        if (DAT_0096ace8 < -0.34906584) {
          DAT_0096ace8 = -0.34906584;
        }
      }
      else {
        DAT_0096ace8 = 0.34906584;
      }
      if (0.2617994 < DAT_0096ace4) {
        DAT_0096ace4 = 0.2617994;
      }
      if (DAT_0096ace4 < 0.0) {
        DAT_0096ace4 = 0.0;
      }
    }
    DAT_00721e84 = DAT_0096acf4;
    DAT_00721e88 = DAT_0096acf8;
    DAT_00721e48 = DAT_0096ace8;
    DAT_00721e44 = DAT_0096ace4;
    DAT_00721d24 = DAT_0071f40c * 0.008;
    DAT_00721d28 = DAT_0071f40c * 0.3;
    DAT_00721ce8 = DAT_0096ace8 * 0.52;
    DAT_00721ce4 = DAT_0096ace4 * 0.55;
  }
  return;
}



//==== 00094168  ns=hero  size=0x298
// sig: undefined ???_Hero_UpdateCrateTargeting(void)
// callers(1): 000954c8 hero::HeroUpdate
// callees(3): 00057820 collproc::CollLine; 0007dde0 hero::Hero_GetHeroRelativePolarVector; 0010af88 mobyutil::MB_isCrate

void hero::____Hero_UpdateCrateTargeting(void)

{
  float z;
  int iVar1;
  bool bVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  float local_60 [4];
  float local_50 [6];
  
  DAT_0096bfa8 = 0;
  if (DAT_0096bd8b != '\0') {
    iVar1 = -1;
    if (DAT_0096ad94 == 2) {
      iVar1 = g_CurrentWeapon;
    }
    if (iVar1 != 0x1a) {
      if (g_heroState == THRUSTER_PACK_HOVER) {
        DAT_007222a4 = DAT_0071f40c * 0.05;
        DAT_00722264 = -0.34906584;
        DAT_007222a8 = DAT_0071f40c * 0.3;
      }
      dVar5 = 1.2999999523162842;
      z = 0.57;
      if (DAT_0096bd88 != '\0') {
        z = 0.7;
      }
      dVar4 = (double)z;
      dVar3 = 0.0;
      Hero_GetHeroRelativePolarVector(g_heroCollRadius - 0.02,0.0,z,local_60);
      Hero_GetHeroRelativePolarVector((float)dVar5,(float)dVar3,(float)dVar4,local_50);
      iVar1 = collproc::CollLine(local_60,local_50,2,0,0);
      if ((iVar1 != 0) &&
         (((DAT_0096bd88 == '\0' || (CollOutput.pMoby == (MobyInstance *)0x0)) ||
          (bVar2 = mobyutil::MB_isCrate(CollOutput.pMoby), !bVar2)))) {
        DAT_007222a4 = DAT_0071f40c * 0.05;
        DAT_007222a8 = DAT_0071f40c * 0.3;
        DAT_00722264 = (float)(dVar5 - (double)(SQRT((g_heroPosition.x - CollOutput.ip.x) *
                                                     (g_heroPosition.x - CollOutput.ip.x) +
                                                     (g_heroPosition.y - CollOutput.ip.y) *
                                                     (g_heroPosition.y - CollOutput.ip.y) +
                                                     (g_heroPosition.z - CollOutput.ip.z) *
                                                     (g_heroPosition.z - CollOutput.ip.z)) -
                                               g_heroCollRadius)) * 0.7692308 * 1.25 * -1.2217305;
        if (-0.5235988 < DAT_00722264) {
          DAT_00722264 = -0.5235988;
        }
        if (DAT_00722264 < -1.2217305) {
          DAT_00722264 = -1.2217305;
        }
        DAT_0096bfa8 = 1;
      }
    }
  }
  return;
}



//==== 00094400  ns=hero  size=0x3c
// sig: undefined ???_Unused_Hero_SetBlock_96af80(void)
// callers(0): 
// callees(0): 

void hero::____Unused_Hero_SetBlock_96af80
               (double param_1,double param_2,short param_3,ushort param_4,ushort param_5,
               ushort param_6)

{
  DAT_0096af88 = (int)param_3;
  DAT_0096af8c = param_4 & 0xff;
  DAT_0096af80 = (float)param_1;
  DAT_0096af84 = (float)param_2;
  DAT_0096af8e = DAT_0096af8e & ~(param_6 & 0xff) | param_5 & 0xff;
  return;
}



//==== 00094470  ns=hero  size=0x6f0
// sig: undefined ???_Hero_UpdateTiltWobbleFx(void)
// callers(1): 000954c8 hero::HeroUpdate
// callees(4): 000f1114 mobyfunc::GetBonePosition; 000fcbe8 mobyutil::MB_randRangeFloat; 00128438 partupd::SpawnPart_28; 005025e0 fastfunc::FastDiffRots

void hero::____Hero_UpdateTiltWobbleFx(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  ulonglong *puVar4;
  float *pfVar5;
  bool bVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  ulonglong uVar10;
  int iVar11;
  int iVar12;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  int iVar13;
  ulonglong unaff_r30;
  longlong lVar14;
  ulonglong unaff_r31;
  longlong lVar15;
  ulonglong in_LR;
  double dVar16;
  double dVar17;
  double dVar18;
  ulonglong in_f31;
  
  uVar10 = ZEXT48(&stack0x00000000);
  lVar15 = uVar10 - 0x110;
  puVar4 = (ulonglong *)lVar15;
  *puVar4 = uVar10;
  puVar4[0x24] = in_LR;
  puVar4[0x21] = in_f31;
  puVar4[0x1d] = unaff_r28;
  bVar6 = false;
  puVar4[0x1e] = unaff_r29;
  iVar11 = g_heroStateType;
  iVar13 = 0;
  puVar4[0x20] = unaff_r31;
  puVar4[0x1f] = unaff_r30;
  puVar4[0x1c] = unaff_r27;
  if ((iVar11 != 0x12) && (iVar11 != 0x11)) {
    if ((g_heroState != DEATH_DROWNING) &&
       (((g_heroState != DEATH_WATER_LASER && (g_heroState != UNDERWATER_DAMAGE)) &&
        (g_heroState != UNK_75)))) goto LAB_000944e0;
  }
  bVar6 = true;
LAB_000944e0:
  if (!bVar6) {
    fVar2 = ABS(DAT_00969fa0);
    if (((((0.03 < fVar2) || (0.03 < ABS(DAT_00969fa4))) ||
         ((0.06981317 < ABS(DAT_00969fa8) ||
          ((0.06981317 < ABS(DAT_00969fac) || (0.06981317 < ABS(DAT_00969fb0))))))) ||
        (0.06981317 < ABS(DAT_00969fb4))) && (g_onMagnerail != 1)) {
      DAT_00721ef4 = -DAT_00969fa8;
      DAT_00721fa4 = -DAT_00969fac;
      uVar7 = (uint)DAT_00969fa0 >> 0x1d;
      *(undefined4 *)(puVar4 + 0x11) = 0x3e4ccccd;
      *(float *)((int)puVar4 + 0x8c) = 0.2 - fVar2;
      dVar18 = 0.0;
      iVar11 = (int)(((ulonglong)(*(uint *)((int)puVar4 + 0x8c) >> 0x1e) & 2 | (ulonglong)uVar7 & 4)
                    << 2);
      fVar3 = *(float *)(&mobyutil::g_atanQuadrantTable + iVar11);
      fVar1 = *(float *)(&DAT_00735904 + iVar11);
      fVar8 = 0.2;
      fVar9 = fVar2;
      if (0.0 <= *(float *)((int)puVar4 + 0x8c)) {
        fVar9 = ABS(*(float *)(puVar4 + 0x11));
        fVar8 = fVar2;
      }
      dVar17 = dVar18;
      if (0.0 < fVar9) {
        iVar11 = 4;
        fVar2 = (fVar8 - fVar9) / (fVar8 + fVar9);
        lVar14 = lVar15;
        do {
          iVar11 = iVar11 + -1;
          *(float *)((int)lVar14 + 0xb0) = fVar2;
          lVar14 = lVar14 + 4;
        } while (iVar11 != 0);
        fVar2 = fVar2 * fVar2;
        lVar14 = uVar10 - 0x100;
        iVar11 = 4;
        fVar8 = fVar2 * fVar2;
        *(float *)((int)puVar4 + 0xb4) = *(float *)((int)puVar4 + 0xb4) * fVar2;
        *(float *)(puVar4 + 0x17) = *(float *)(puVar4 + 0x17) * fVar8;
        *(float *)((int)puVar4 + 0xbc) = *(float *)((int)puVar4 + 0xbc) * fVar8 * fVar2;
        do {
          iVar11 = iVar11 + -1;
          *(float *)((int)lVar14 + 0xb0) = *(float *)((int)lVar14 + 0xa0) * fVar8 * fVar8;
          lVar14 = lVar14 + 4;
        } while (iVar11 != 0);
        iVar11 = 0;
        iVar12 = 8;
        lVar14 = lVar15;
        do {
          iVar12 = iVar12 + -1;
          pfVar5 = (float *)((int)&DAT_007358e0 + iVar11);
          iVar11 = iVar11 + 4;
          *(float *)((int)lVar14 + 0xb0) = *(float *)((int)lVar14 + 0xb0) * *pfVar5;
          lVar14 = lVar14 + 4;
        } while (iVar12 != 0);
        iVar11 = 8;
        lVar14 = lVar15;
        do {
          iVar11 = iVar11 + -1;
          iVar12 = (int)lVar14;
          lVar14 = lVar14 + 4;
          dVar17 = (double)(float)(dVar17 + (double)*(float *)(iVar12 + 0xb0));
        } while (iVar11 != 0);
        dVar17 = (double)((float)(dVar17 + 0.7853981852531433) * fVar3 + fVar1);
      }
      uVar7 = (uint)DAT_00969fa4 >> 0x1d;
      fVar8 = ABS(DAT_00969fa4);
      *(undefined4 *)(puVar4 + 0x10) = 0x3e4ccccd;
      *(float *)((int)puVar4 + 0x84) = 0.2 - fVar8;
      iVar11 = (*(uint *)(puVar4 + 0x10) >> 0x1c & 8 |
               *(uint *)((int)puVar4 + 0x84) >> 0x1e & 2 | uVar7 & 4) * 4;
      fVar1 = *(float *)(&mobyutil::g_atanQuadrantTable + iVar11);
      fVar2 = *(float *)(&DAT_00735904 + iVar11);
      fVar3 = fVar8;
      fVar9 = 0.2;
      if (0.0 <= *(float *)((int)puVar4 + 0x84)) {
        fVar3 = ABS(*(float *)(puVar4 + 0x10));
        fVar9 = fVar8;
      }
      if (0.0 < fVar3) {
        iVar11 = 4;
        fVar3 = (fVar9 - fVar3) / (fVar9 + fVar3);
        lVar14 = lVar15;
        do {
          iVar11 = iVar11 + -1;
          *(float *)((int)lVar14 + 0x90) = fVar3;
          lVar14 = lVar14 + 4;
        } while (iVar11 != 0);
        fVar3 = fVar3 * fVar3;
        lVar14 = uVar10 - 0x100;
        iVar11 = 4;
        fVar8 = fVar3 * fVar3;
        *(float *)((int)puVar4 + 0x94) = *(float *)((int)puVar4 + 0x94) * fVar3;
        *(float *)(puVar4 + 0x13) = *(float *)(puVar4 + 0x13) * fVar8;
        *(float *)((int)puVar4 + 0x9c) = *(float *)((int)puVar4 + 0x9c) * fVar8 * fVar3;
        do {
          iVar11 = iVar11 + -1;
          *(float *)((int)lVar14 + 0x90) = *(float *)((int)lVar14 + 0x80) * fVar8 * fVar8;
          lVar14 = lVar14 + 4;
        } while (iVar11 != 0);
        iVar11 = 0;
        iVar12 = 8;
        lVar14 = lVar15;
        do {
          pfVar5 = (float *)((int)&DAT_007358e0 + iVar11);
          iVar12 = iVar12 + -1;
          iVar11 = iVar11 + 4;
          *(float *)((int)lVar14 + 0x90) = *(float *)((int)lVar14 + 0x90) * *pfVar5;
          lVar14 = lVar14 + 4;
        } while (iVar12 != 0);
        iVar11 = 8;
        do {
          iVar11 = iVar11 + -1;
          iVar12 = (int)lVar15;
          lVar15 = lVar15 + 4;
          dVar18 = (double)(float)(dVar18 + (double)*(float *)(iVar12 + 0x90));
        } while (iVar11 != 0);
        dVar18 = (double)((float)(dVar18 + 0.7853981852531433) * fVar1 + fVar2);
      }
      dVar16 = (double)(float)(dVar17 * 1.2000000476837158);
      if (0.7853981852531433 < (double)(float)(dVar17 * 1.2000000476837158)) {
        dVar16 = 0.7853981852531433;
      }
      if (dVar16 < -0.1745329201221466) {
        dVar16 = -0.1745329201221466;
      }
      dVar17 = (double)(float)(dVar18 * -1.2000000476837158);
      if (0.1745329201221466 < (double)(float)(dVar18 * -1.2000000476837158)) {
        dVar17 = 0.1745329201221466;
      }
      if (dVar17 < -0.7853981852531433) {
        dVar17 = -0.7853981852531433;
      }
      DAT_00722050 = (float)dVar16;
      DAT_00722100 = (float)dVar17;
      dVar18 = (double)fastfunc::FastDiffRots((double)DAT_00969fb0,-dVar16);
      DAT_00721ef0 = (float)-dVar18;
      dVar18 = (double)fastfunc::FastDiffRots((double)DAT_00969fb4,-dVar17);
      DAT_00721fa0 = (float)-dVar18;
    }
    iVar11 = g_DustHoverState;
    if (DAT_0096adc0 != 0) {
      DAT_00721f3c = 0x3c23d70a;
      DAT_00721fec = 0x3c23d70a;
    }
    if ((DAT_0096af8e & 0x80) == 0) {
      if (g_heroState == STOPPING) {
        DAT_0096af88 = 1;
        DAT_0096af8e = DAT_0096af8e | 1;
        DAT_0096af84 = 0.002;
        DAT_0096af8c = 2;
        DAT_0096af80 = 0.021;
      }
      if (((g_heroStateType == 4) && (0 < g_DustHoverState)) &&
         (puVar4[0x1a] = (longlong)(int)(animationSpeed * 12.5),
         iVar11 < *(int *)((int)puVar4 + 0xd4))) {
        DAT_0096af88 = 1;
        DAT_0096af8e = DAT_0096af8e & 0xfffe;
        DAT_0096af8c = 2;
        DAT_0096af80 = 0.016;
        DAT_0096af84 = 0.002;
      }
      if ((0 < DAT_0096af88) && (DAT_0096af8c != 0)) {
        lVar15 = 0;
        if ((DAT_0096af8e & 1) != 0) {
          lVar15 = ZEXT48(g_heroMobyPtr) + 0xc0;
        }
        lVar14 = uVar10 - 0xa0;
        DAT_0096af88 = DAT_0096af88 + -1;
        mobyfunc::GetBonePosition(g_heroMobyPtr,0x16,lVar14);
        iVar11 = 0;
        if (0 < DAT_0096af8c) {
          do {
            dVar18 = (double)mobyutil::MB_randRangeFloat(-DAT_0096af84,DAT_0096af84);
            partupd::SpawnPart_28((double)(float)((double)DAT_0096af80 + dVar18),lVar14,lVar15);
            iVar11 = iVar11 + 1;
          } while (iVar11 < DAT_0096af8c);
        }
        mobyfunc::GetBonePosition(g_heroMobyPtr,0x17,lVar14);
        if (0 < DAT_0096af8c) {
          do {
            dVar18 = (double)mobyutil::MB_randRangeFloat(-DAT_0096af84,DAT_0096af84);
            partupd::SpawnPart_28((double)(float)((double)DAT_0096af80 + dVar18),lVar14,lVar15);
            iVar13 = iVar13 + 1;
          } while (iVar13 < DAT_0096af8c);
        }
      }
    }
    else {
      DAT_0096af88 = 0;
    }
  }
  return;
}



//==== 00094b80  ns=hero  size=0x318
// sig: undefined Hero_FindGrindRail(void)
// callers(4): 00094ef8 hero::Hero_CheckGrindRailAttach; 000950e8 hero::Hero_CheckGrindAtPos; 000954c8 hero::HeroUpdate; 000be228 hero::HeroMovement
// callees(1): 0010d7a0 mobyutil::MB_PathFollowToPos

undefined8
hero::Hero_FindGrindRail
          (undefined8 param_1,undefined8 param_2,undefined4 *param_3,float *param_4,
          undefined4 *param_5,undefined4 *param_6,undefined4 *param_7,int param_8)

{
  float fVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  ulonglong uVar5;
  double dVar6;
  double dVar7;
  float fStack00000030;
  float fStack00000034;
  float fStack00000038;
  int in_stack_00000074;
  undefined4 local_80;
  undefined4 local_7c [3];
  
  uVar5 = 0;
  _fStack00000030 = param_1;
  _fStack00000038 = param_2;
  if (0 < DAT_00a1a860) {
    do {
      if ((((param_8 == 0) ||
           (*(int *)(DAT_00a1a85c + 0x10 + (int)((uVar5 & 0xffffffff) << 5)) != param_8)) &&
          ((in_stack_00000074 == 0 ||
           (*(int *)(DAT_00a1a85c + 0x10 + (int)((uVar5 & 0xffffffff) << 5)) == in_stack_00000074)))
          ) && (iVar2 = (int)uVar5 * 0x20, **(int **)(DAT_00a1a85c + 0x10 + iVar2) != 0)) {
        pfVar4 = (float *)(DAT_00a1a85c + iVar2);
        if (SQRT((*pfVar4 - fStack00000030) * (*pfVar4 - fStack00000030) +
                 (pfVar4[1] - fStack00000034) * (pfVar4[1] - fStack00000034) +
                 (pfVar4[2] - fStack00000038) * (pfVar4[2] - fStack00000038)) <=
            *(float *)(DAT_00a1a85c + 0xc + iVar2)) {
          dVar7 = 10.0;
          iVar3 = mobyutil::MB_PathFollowToPos
                            (0x4028000000000000,0x4024000000000000,0,
                             *(undefined4 *)(DAT_00a1a85c + 0x10 + iVar2),&stack0x00000030,param_4,
                             &local_80,local_7c,&DAT_00094b60,
                             *(undefined4 *)(DAT_00a1a85c + 0x14 + iVar2));
          if (iVar3 != 0) {
            fVar1 = 0.9;
            if ((g_heroStateType == 0) || (g_heroStateType == 1)) {
              fVar1 = 0.3;
            }
            dVar6 = 1.5;
            if (DAT_00969eaa != 0) {
              fVar1 = fVar1 + 0.5;
              dVar6 = dVar7;
            }
            if (ABS((double)(fStack00000038 - param_4[2])) < dVar6 &&
                SQRT((fStack00000030 - *param_4) * (fStack00000030 - *param_4) +
                     (fStack00000034 - param_4[1]) * (fStack00000034 - param_4[1])) < fVar1) {
              *param_3 = *(undefined4 *)(DAT_00a1a85c + 0x10 + iVar2);
              iVar3 = DAT_00a1a85c;
              *param_5 = local_80;
              *param_6 = local_7c[0];
              *param_7 = *(undefined4 *)(iVar3 + 0x14 + iVar2);
              return 1;
            }
          }
        }
      }
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < DAT_00a1a860);
  }
  return 0;
}



//==== 00094ea8  ns=hero  size=0x34
// sig: undefined Hero_GetGrindProbePos(void)
// callers(0): 
// callees(1): 00084180 hero::Hero_GetHeroRelativeVector

void hero::Hero_GetGrindProbePos(float *param_1)

{
  Hero_GetHeroRelativeVector(0.3,0.0,1.34,param_1);
  return;
}



//==== 00094ef8  ns=hero  size=0x194
// sig: undefined Hero_CheckGrindRailAttach(void)
// callers(0): 
// callees(2): 00084180 hero::Hero_GetHeroRelativeVector; 00094b80 hero::Hero_FindGrindRail

void hero::Hero_CheckGrindRailAttach(void)

{
  float fVar1;
  int iVar2;
  float local_40;
  undefined4 local_3c;
  float local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  float local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14 [3];
  
  DAT_0096a2dc = 0;
  if (((Level != Batalia) && (Level != Kalebo)) && (DAT_00969ec4 == 0)) {
    Hero_GetHeroRelativeVector(0.3,0.0,1.34,&local_40);
    if (((g_heroStateType == 4) && (DAT_0096a0fe == 0)) || (g_heroStateType == 2)) {
      iVar2 = Hero_FindGrindRail(CONCAT44(local_40,local_3c),CONCAT44(local_38,local_34),&local_20,
                                 &local_30,&local_1c,&local_18,local_14);
      if (iVar2 != 0) {
        fVar1 = -0.7;
        if ((g_buttonsPressedThisFrame & SQUARE) != 0) {
          fVar1 = -1.2;
        }
        if ((fVar1 < local_38 - local_28) && (local_38 - local_28 < 0.4)) {
          DAT_0096a2c0 = local_30;
          DAT_0096a2c4 = local_2c;
          DAT_0096a2c8 = local_28;
          DAT_0096a2cc = local_24;
          DAT_0096a2d0 = local_20;
          DAT_0096a2d4 = local_1c;
          DAT_0096a2d8 = local_18;
          DAT_0096a2ec = local_14[0];
          DAT_0096a2dc = 1;
        }
      }
    }
  }
  return;
}



//==== 000950e8  ns=hero  size=0x3b4
// sig: undefined Hero_CheckGrindAtPos(void)
// callers(1): 000954c8 hero::HeroUpdate
// callees(1): 00094b80 hero::Hero_FindGrindRail

void hero::Hero_CheckGrindAtPos(void)

{
  float fVar1;
  int iVar2;
  undefined4 local_30;
  undefined4 local_2c;
  float local_28;
  undefined4 local_24;
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14 [3];
  
  if (Level == Quartu) {
    return;
  }
  if (UnlockableItems.grindboots == '\0') {
    return;
  }
  DAT_0096a24c = 0;
  if (DAT_00969ea8 != 0) {
    DAT_0096a24c = 0;
    return;
  }
  if (Level == Kalebo) {
    if (SQRT((g_heroPosition.x - 115.0) * (g_heroPosition.x - 115.0) +
             (g_heroPosition.y - 264.0) * (g_heroPosition.y - 264.0) +
             (g_heroPosition.z - 133.0) * (g_heroPosition.z - 133.0)) <= 12.0) goto LAB_0009531c;
    fVar1 = (g_heroPosition.x - 257.0) * (g_heroPosition.x - 257.0) +
            (g_heroPosition.y - 301.0) * (g_heroPosition.y - 301.0) +
            (g_heroPosition.z - 128.0) * (g_heroPosition.z - 128.0);
  }
  else {
    if (Level != Oltanis) {
      if ((Level == Blarg) &&
         (14.0 < SQRT((g_heroPosition.x - 177.0) * (g_heroPosition.x - 177.0) +
                      (g_heroPosition.y - 304.0) * (g_heroPosition.y - 304.0) +
                      (g_heroPosition.z - 143.0) * (g_heroPosition.z - 143.0)))) {
        DAT_0096a24c = 0;
        return;
      }
      goto LAB_0009531c;
    }
    if ((SQRT((g_heroPosition.x - 157.0) * (g_heroPosition.x - 157.0) +
              (g_heroPosition.y - 265.0) * (g_heroPosition.y - 265.0) +
              (g_heroPosition.z - 51.0) * (g_heroPosition.z - 51.0)) <= 12.0) ||
       (SQRT((g_heroPosition.x - 162.0) * (g_heroPosition.x - 162.0) +
             (g_heroPosition.y - 341.0) * (g_heroPosition.y - 341.0) +
             (g_heroPosition.z - 48.0) * (g_heroPosition.z - 48.0)) <= 12.0)) goto LAB_0009531c;
    fVar1 = (g_heroPosition.x - 308.0) * (g_heroPosition.x - 308.0) +
            (g_heroPosition.y - 104.0) * (g_heroPosition.y - 104.0) +
            (g_heroPosition.z - 69.0) * (g_heroPosition.z - 69.0);
  }
  if (12.0 < SQRT(fVar1)) {
    DAT_0096a24c = 0;
    return;
  }
LAB_0009531c:
  if ((((((g_heroStateType == 2) || (g_heroStateType == 0)) || (g_heroStateType == 1)) ||
       (((g_heroState == GRINDRAIL_JUMP || (g_heroState == GRINDRAIL_SWITCH)) &&
        (DAT_0096a250 != 0 || DAT_0096a2a4 != 0)))) ||
      ((g_heroStateType == 4 && ((DAT_0096a0fe != 0 || (DAT_00969eaa != 0)))))) &&
     ((iVar2 = Hero_FindGrindRail(CONCAT44(g_heroPosition.x,g_heroPosition.y),
                                  CONCAT44(g_heroPosition.z,g_heroPosition.w),&local_20,&local_30,
                                  &local_1c,&local_18,local_14), iVar2 != 0 &&
      (((((g_heroState != GRINDRAIL_JUMP || (DAT_0096a2a4 == 0)) || (local_20 != DAT_0096a240)) &&
        (-0.5 < g_heroPosition.z - local_28)) &&
       ((g_heroPosition.z - local_28 < 0.57 || (DAT_00969eaa != 0)))))))) {
    DAT_0096a1e0 = local_30;
    DAT_0096a1e4 = local_2c;
    DAT_0096a1e8 = local_28;
    DAT_0096a1ec = local_24;
    DAT_0096a240 = local_20;
    DAT_0096a244 = local_1c;
    DAT_0096a248 = local_18;
    DAT_0096a264 = local_14[0];
    DAT_0096a24c = 1;
  }
  return;
}



//==== 000954c8  ns=hero  size=0x5a8
// sig: undefined HeroUpdate(void)
// callers(4): 00161788 space::UpdateSpace; 00166fb0 update::UpdateGameplay; 00168768 update::UpdateScene; 0016da88 vendor::Vendor_PreUpdate
// callees(38): 00065464 stub::STUB_00065464; 0006dad0 draw::FadeToBlack; 0007d6d0 hero::Hero_MapToMoby; 0007f608 hero::hero_SetManipulator; 0007fd70 hero::hero_SetEyeManipulator; 000802a0 hero::Hero_UpdateGlowAndBlink; 00080ca0 hero::Hero_FeetSounds; 00081048 hero::Hero_UpdateShadow; 00081a10 hero::Hero_UpdateScaleEffect; 000824b0 hero::Hero_CheckLedgeGrab; 00083ac8 hero::Hero_HandleGroundType; 00084180 hero::Hero_GetHeroRelativeVector; 0008b778 hero::Hero_UpdateMovement; 0008bc30 hero::Hero_UpdateAnim; 0008c3d0 hero::HeroUpdateNonRatchet; 0008d33c hero::Hero_DisplayHelpMsgs; 0008d4b8 hero::Hero_CheckCheatSequences; 0008d970 hero::Hero_UpdateColorEffects; 0008dd38 hero::Hero_UpdateOverlayAnimLayer; 0008e170 hero::Hero_UpdateFiringAnimLayer; 0008ec40 hero::Hero_UpdateGadgetAnimLayers; 00092834 hero::Hero_UpdateGadgets; 00092a58 hero::Hero_SetMagnebootsTweaks; 00092d58 hero::Hero_UpdateIdleLook; 000930e8 hero::Hero_UpdateLookAtTarget; 00093c98 hero::Hero_UpdateCheatTweaks; 00094168 hero::???_Hero_UpdateCrateTargeting; 00094470 hero::???_Hero_UpdateTiltWobbleFx; 00094b80 hero::Hero_FindGrindRail; 000950e8 hero::Hero_CheckGrindAtPos; 000be228 hero::HeroMovement; 000c8444 hud::RegisterHUDCallback; 000e4928 map::Map_RevealAroundPos; 000f1364 mobyfunc::GetMobyJointsWorldMtx; 000fa3a8 mobyfunc::SetMobyLightFromBlender; 00109af0 mobyutil::Delt; 0015d12c sound::PlayMobySound; 004fffb4 fastfunc::FastDecTimerS16

void hero::HeroUpdate(void)

{
  float fVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  MobyInstance *pMVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  double dVar9;
  float local_a0;
  undefined4 local_9c;
  float local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  float local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  longlong local_48;
  
  puVar8 = &g_heroMtx;
  if ((((g_heroPosition.x < 2.0) || (g_heroPosition.y < 2.0)) || (1022.0 < g_heroPosition.x)) ||
     (1022.0 < g_heroPosition.y)) {
    local_48 = (longlong)(int)(animationSpeed * 16.5);
    draw::FadeToBlack((int)(animationSpeed * 16.5));
    g_HeroIsOutOfBounds = 1;
  }
  else {
    DAT_0096bb92 = 0;
    g_heroGlowCount = 0;
    if (g_heroType == '\0') {
      Hero_UpdateAnim();
      Hero_UpdateMovement();
      Hero_HandleGroundType();
      Hero_CheckLedgeGrab();
      Hero_CheckGrindAtPos();
      DAT_0096a2dc = 0;
      if (((Level != Batalia) && (Level != Kalebo)) && (DAT_00969ec4 == 0)) {
        Hero_GetHeroRelativeVector(0.3,0.0,1.34,&local_a0);
        if (((g_heroStateType == 4) && (DAT_0096a0fe == 0)) || (g_heroStateType == 2)) {
          iVar4 = Hero_FindGrindRail(CONCAT44(local_a0,local_9c),CONCAT44(local_98,local_94),
                                     &local_80,&local_90,&local_7c,&local_78,&local_74,0);
          if (iVar4 != 0) {
            fVar1 = -0.7;
            if ((g_buttonsPressedThisFrame & SQUARE) != 0) {
              fVar1 = -1.2;
            }
            if (fVar1 < local_98 - local_88) {
              if (local_98 - local_88 < 0.4) {
                DAT_0096a2c0 = local_90;
                DAT_0096a2c4 = local_8c;
                DAT_0096a2c8 = local_88;
                DAT_0096a2cc = local_84;
                DAT_0096a2d0 = local_80;
                DAT_0096a2d4 = local_7c;
                DAT_0096a2d8 = local_78;
                DAT_0096a2ec = local_74;
                DAT_0096a2dc = 1;
              }
            }
          }
        }
      }
      HeroMovement();
      if (g_heroType == '\0') {
        iVar4 = 0;
        iVar7 = 0;
        do {
          pMVar5 = (MobyInstance *)fastfunc::FastDecTimerS16(&DAT_0096bebc + iVar7);
          if (pMVar5 == (MobyInstance *)0x2) {
            sVar2 = *(short *)((int)puVar8 + 0x21da);
            sVar3 = *(short *)((int)puVar8 + 0x21de);
            *(undefined2 *)(puVar8 + 0x876) = 0;
            pMVar5 = g_ratchetMoby;
            if (g_heroType == '\x03') {
              if (g_ratchetMoby != (MobyInstance *)0x0) {
                (g_ratchetMoby->pos).x = g_heroPosition.x;
                (pMVar5->pos).y = g_heroPosition.y;
                (pMVar5->pos).z = g_heroPosition.z;
                (pMVar5->pos).w = g_heroPosition.w;
                pMVar5 = (MobyInstance *)sound::PlayMobySound((int)sVar2,(int)sVar3,pMVar5);
              }
            }
            else {
              pMVar5 = (MobyInstance *)sound::PlayMobySound((int)sVar2,(int)sVar3,g_heroMobyPtr);
            }
          }
          iVar4 = iVar4 + 1;
          iVar7 = iVar7 + 8;
          puVar8 = puVar8 + 2;
        } while (iVar4 < 8);
        ____Hero_UpdateTiltWobbleFx(pMVar5);
        ____Hero_UpdateCrateTargeting();
        Hero_UpdateCheatTweaks();
        Hero_UpdateLookAtTarget();
        Hero_UpdateIdleLook();
        hero_SetEyeManipulator();
        Hero_UpdateGlowAndBlink();
        Hero_SetMagnebootsTweaks();
        iVar4 = 0;
        iVar7 = 0;
        do {
          hero_SetManipulator(&g_heroTweakers + iVar7);
          iVar4 = iVar4 + 1;
          iVar7 = iVar7 + 0xb0;
        } while (iVar4 < 0x1f);
        Hero_MapToMoby();
        local_70 = 0;
        local_6c = 1;
        local_68 = 2;
        local_64 = 3;
        local_54 = 0x1d;
        local_60 = 4;
        local_5c = 5;
        local_58 = 6;
        local_50 = 0x1e;
        mobyfunc::GetMobyJointsWorldMtx(g_heroMobyPtr,9,&local_70,&DAT_0096a7a0);
        Hero_UpdateGadgets();
        Hero_UpdateGadgetAnimLayers();
        Hero_UpdateFiringAnimLayer();
        Hero_UpdateOverlayAnimLayer();
        if (DAT_00a1a848 != 0) {
          if (DAT_00a1a84c == 0) {
            dVar9 = 1.0;
            mobyutil::Delt(1.0,DAT_00720bbc,&boot::SceneScreenFade);
            if ((double)boot::SceneScreenFade == dVar9) {
              DAT_00a1a84c = 1;
            }
          }
          else if (DAT_00a1a84c == 1) {
            DAT_00a1a84c = 2;
          }
          else if (DAT_00a1a84c == 2) {
            dVar9 = 0.0;
            mobyutil::Delt(0.0,DAT_00720bbc,&boot::SceneScreenFade);
            if ((double)boot::SceneScreenFade == dVar9) {
              DAT_00a1a848 = 0;
            }
          }
        }
        Hero_UpdateScaleEffect();
        Hero_DisplayHelpMsgs();
        uVar6 = (uint)UnlockableItems.metalDetector;
        if (UnlockableItems.metalDetector == '\0') {
          g_MetalDetectorSpotIsClose = 0;
        }
        else {
          uVar6 = 0;
          if ((DAT_0096bd24 < 20.0) && (DAT_0096bd20 != 0)) {
            uVar6 = 1;
          }
          g_MetalDetectorSpotIsClose = (undefined1)uVar6;
          DAT_0096bd24 = 100000.0;
          DAT_0096bd20 = 0;
          if (uVar6 != 0) {
            uVar6 = hud::RegisterHUDCallback
                              (7,0x753a,&PTR_HudEntry_InitCounter32_007056a8,
                               &PTR_MetalDetectorHud_Update_00705870,
                               &PTR_Draw_MetalDetectorHud_00705878,
                               (int *)&g_MetalDetectorSpotIsClose,1);
          }
        }
        Hero_FeetSounds(uVar6);
        Hero_CheckCheatSequences();
        stub::STUB_00065464(g_heroMobyPtr);
        if ((g_heroStateType != 0x16) && (g_heroState != TURRET_PLANE_UI)) {
          map::Map_RevealAroundPos(&g_heroPosition.x);
        }
        mobyfunc::SetMobyLightFromBlender(g_heroMobyPtr);
        Hero_UpdateColorEffects();
        Hero_UpdateShadow();
      }
    }
    else {
      HeroUpdateNonRatchet();
    }
  }
  return;
}



//==== 00095aa8  ns=hero  size=0x464
// sig: undefined ???_Hero_AddPulsingMobyGlow(void)
// callers(2): 00161788 space::UpdateSpace; 00168768 update::UpdateScene
// callees(5): 0006d720 RegisterFuncForMoby; 000f0ea8 mobyfunc::AttachManipulator; 000f1114 mobyfunc::GetBonePosition; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt
// strings: 0096c074: 'None'

void hero::____Hero_AddPulsingMobyGlow(MobyInstance *param_1)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  undefined *manipulator;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined4 local_60;
  undefined4 local_5c;
  float local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  float local_48;
  undefined4 local_44;
  
  param_1->modeBits = param_1->modeBits | HAS_GLOW;
  iVar6 = (int)(animationSpeed * 100.5);
  dVar11 = (double)fastfunc::FastIntToDouble(iVar6);
  dVar13 = 2.0;
  fVar2 = (float)((double)(longlong)(worldUpdateTime - (worldUpdateTime / iVar6) * iVar6) / dVar11)
          * 2.0 * 3.1415927 + -3.1415927;
  fVar3 = fVar2;
  if (3.1415925 - fVar2 <= fVar2) {
    fVar3 = 3.1415925 - fVar2;
  }
  if (fVar3 <= -3.1415925 - fVar2) {
    fVar3 = -3.1415925 - fVar2;
  }
  fVar2 = fVar3 * fVar3;
  fVar4 = fVar2 * fVar2 * fVar3;
  fVar5 = fVar2 * fVar4;
  dVar12 = (double)(fVar3 + fVar2 * fVar3 * -0.16666657 + fVar4 * 0.0083330255 +
                    fVar5 * -0.0001980741 + fVar2 * fVar5 * 2.601887e-06);
  dVar11 = (double)(float)(dVar12 * 24.0);
  iVar6 = fastfunc::FastDoubleToInt(dVar11);
  iVar7 = fastfunc::FastDoubleToInt((double)(float)(dVar12 * 52.0));
  iVar8 = fastfunc::FastDoubleToInt(dVar11);
  param_1->field60_0x90 =
       (iVar7 + 0xa2) * 0x100 | iVar6 + 0x44U | (iVar8 + 0x4c) * 0x10000 | 0x80000000;
  if (param_1->oClass == GIANT_CLANK) {
    mobyfunc::GetBonePosition(param_1,6,&local_60);
    if (dVar13 < ABS((double)((param_1->pos).z - (local_58 - 0.07)))) {
      iVar6 = (int)((longlong)g_heroGlowCount << 4);
      *(undefined4 *)(&g_heroGlowPos + iVar6) = local_60;
      *(undefined4 *)(iVar6 + 0x96bab4) = local_5c;
      *(float *)(iVar6 + 0x96bab8) = local_58 - 0.07;
      *(undefined4 *)(iVar6 + 0x96babc) = local_54;
      lVar10 = (longlong)g_heroGlowCount;
      lVar9 = (longlong)g_heroGlowCount;
      bVar1 = DAT_0096bb92 == 0;
      *(undefined4 *)(&DAT_0096bb30 + (int)((longlong)g_heroGlowCount << 2)) = 0x200000c0;
      *(undefined4 *)(&DAT_0096bb70 + (int)(lVar10 << 2)) = 0x3e19999a;
      *(undefined4 *)(&DAT_0096bb50 + (int)(lVar9 << 2)) = 0x3e800000;
      if (bVar1) {
        DAT_0096bb92 = 1;
        RegisterFuncForMoby(&PTR_Hero_DrawGlows_00705228,g_heroMobyPtr);
      }
      g_heroGlowCount = g_heroGlowCount + 1;
    }
  }
  else {
    mobyfunc::GetBonePosition(param_1,1,&local_50);
    iVar6 = (int)((longlong)g_heroGlowCount << 4);
    *(undefined4 *)(&g_heroGlowPos + iVar6) = local_50;
    *(undefined4 *)(iVar6 + 0x96bab4) = local_4c;
    *(float *)(iVar6 + 0x96bab8) = local_48 - 0.007;
    *(undefined4 *)(iVar6 + 0x96babc) = local_44;
    lVar10 = (longlong)g_heroGlowCount;
    lVar9 = (longlong)g_heroGlowCount;
    bVar1 = DAT_0096bb92 == 0;
    *(undefined4 *)(&DAT_0096bb30 + (int)((longlong)g_heroGlowCount << 2)) = 0x200000c0;
    *(undefined4 *)(&DAT_0096bb70 + (int)(lVar10 << 2)) = 0x3e19999a;
    *(undefined4 *)(&DAT_0096bb50 + (int)(lVar9 << 2)) = 0x3d408312;
    if (bVar1) {
      DAT_0096bb92 = 1;
      RegisterFuncForMoby(&PTR_Hero_DrawGlows_00705228,g_heroMobyPtr);
    }
    g_heroGlowCount = g_heroGlowCount + 1;
  }
  manipulator = &DAT_00a1bec0;
  if (param_1->oClass == GIANT_CLANK) {
    manipulator = &DAT_00a1bf00;
  }
  else if (param_1->oClass == CLANK_0555) {
    manipulator = &DAT_00a1bf40;
  }
  if ((Cheats[3] != '\0') && (manipulator[1] == '\0')) {
    if (param_1->oClass == GIANT_CLANK) {
      mobyfunc::AttachManipulator(param_1,1,manipulator);
    }
    else {
      mobyfunc::AttachManipulator(param_1,2,manipulator);
    }
    *(float *)(manipulator + 0x20) = FLOAT_0071fb54;
    *(float *)(manipulator + 0x24) = FLOAT_0071fb54;
    *(float *)(manipulator + 0x28) = FLOAT_0071fb54;
  }
  return;
}



//==== 00095f40  ns=hero  size=0x2e0
// sig: undefined Hero_DrawGlows(void)
// callers(0): 
// callees(2): 00109af0 mobyutil::Delt; 00119028 mobyutil::MB_DrawGlowFX
// strings: 0096c074: 'None'

void hero::Hero_DrawGlows(void)

{
  float target;
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  double dVar4;
  
  uVar2 = DAT_0096bfc4;
  if ((g_gameMode == GAME_MODE_SCENE) || (g_gameMode == GAME_MODE_SPACE)) {
    iVar3 = 0;
    if (g_heroGlowCount < 1) {
      return;
    }
    do {
      iVar1 = iVar3 * 4;
      mobyutil::MB_DrawGlowFX
                ((double)*(float *)(&DAT_0096bb50 + iVar1),(double)*(float *)(&DAT_0096bb70 + iVar1)
                 ,&g_heroGlowPos + iVar3 * 0x10,*(undefined4 *)(&DAT_0096bb30 + iVar1));
      iVar3 = iVar3 + 1;
    } while (iVar3 < g_heroGlowCount);
    return;
  }
  if (g_heroType == '\x03') {
    iVar3 = 0;
    do {
      mobyutil::MB_DrawGlowFX
                (0x3fc99999a0000000,0x3fb47ae140000000,&DAT_0096ba30 + iVar3 * 0x10,uVar2);
      iVar3 = iVar3 + 1;
    } while (iVar3 < 3);
    return;
  }
  if (g_heroType != '\0') {
    if (g_heroType == '\x02') {
      dVar4 = 0.07000000029802322;
      DAT_0096ba68 = DAT_0096ba68 - 0.07;
      mobyutil::MB_DrawGlowFX(0x3fd0000000000000,0x3fb47ae140000000,&DAT_0096ba60,0x300000c0);
      DAT_0096ba68 = (float)((double)DAT_0096ba68 + dVar4);
      return;
    }
    if (g_heroType != '\x01') {
      return;
    }
    target = 0.06;
    if (DAT_0096bfdc != 0) {
      target = 0.087;
    }
    if (Cheats[3] == '\0') {
      DAT_0096ba68 = DAT_0096ba68 - 0.02;
    }
    else {
      target = target * 1.7;
      DAT_0096ba68 = DAT_0096ba68 - 0.01;
    }
    mobyutil::Delt(target,DAT_0071f408 * 0.003,&DAT_0096b30c);
    mobyutil::MB_DrawGlowFX((double)DAT_0096b30c,0x3fb47ae140000000,&DAT_0096ba60,DAT_0096bfe0);
    return;
  }
  iVar3 = -1;
  if (DAT_0096ae84 == 2) {
    iVar3 = DAT_0096ae88;
  }
  if (iVar3 != 3) {
    iVar3 = -1;
    if (DAT_0096ae84 == 2) {
      iVar3 = DAT_0096ae88;
    }
    if (iVar3 != 2) goto LAB_000960cc;
  }
  if (g_hasClank == 0) {
    dVar4 = 0.014999999664723873;
    DAT_0096ba68 = DAT_0096ba68 + 0.015;
    mobyutil::MB_DrawGlowFX(0x3fad2f1aa0000000,0x3fb47ae140000000,&DAT_0096ba60,0x280000c0);
    DAT_0096ba68 = (float)((double)DAT_0096ba68 - dVar4);
  }
LAB_000960cc:
  iVar3 = 0;
  if (0 < g_heroGlowCount) {
    do {
      iVar1 = iVar3 * 4;
      mobyutil::MB_DrawGlowFX
                ((double)*(float *)(&DAT_0096bb50 + iVar1),(double)*(float *)(&DAT_0096bb70 + iVar1)
                 ,&g_heroGlowPos + iVar3 * 0x10,*(undefined4 *)(&DAT_0096bb30 + iVar1));
      iVar3 = iVar3 + 1;
    } while (iVar3 < g_heroGlowCount);
  }
  return;
}



//==== 00096228  ns=hero  size=0x110
// sig: void Hero_GetPadFly(float accel, float * out, float * padWindUp)
// callers(1): 000aaec0 hero::HandleHeroMovement
// callees(1): 00109af0 mobyutil::Delt

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void hero::Hero_GetPadFly(float accel,float *out,float *padWindUp)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar1 = (double)accel;
  dVar2 = (double)DAT_0096ba04;
  mobyutil::Delt(-g_heroPadStick,accel,padWindUp + 2);
  dVar3 = 1.0;
  if (1.0 < padWindUp[2]) {
    padWindUp[2] = 1.0;
  }
  dVar4 = -1.0;
  if (padWindUp[2] < -1.0) {
    padWindUp[2] = -1.0;
  }
  *out = padWindUp[2];
  mobyutil::Delt((float)dVar2,(float)dVar1,padWindUp + 1);
  if (dVar3 < (double)padWindUp[1]) {
    padWindUp[1] = (float)dVar3;
  }
  if ((double)padWindUp[1] < dVar4) {
    padWindUp[1] = (float)dVar4;
  }
  out[1] = padWindUp[1];
  return;
}



//==== 00096348  ns=hero  size=0x1ac
// sig: void Hero_ScaleAnim(float frame, float time, float scale, float rate)
// callers(2): 000aaec0 hero::HandleHeroMovement; 000be228 hero::HeroMovement
// callees(1): 00109af0 mobyutil::Delt

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void hero::Hero_ScaleAnim(float frame,float time,float scale,float rate)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  
  if (frame <= g_heroAnimFrame) {
    fVar1 = 2.0;
    if (DAT_0096a77c == 0) {
      fVar1 = 0.5 / DAT_0096a774;
    }
    fVar1 = frame + (fVar1 * (float)*(byte *)(*(int *)(&g_heroMobyPtr->pClass->type +
                                                      (uint)g_heroMobyPtr->animationId * 4) + 0x10)
                    - g_heroAnimFrame);
  }
  else {
    fVar1 = frame - g_heroAnimFrame;
  }
  if (0.0 < time) {
    fVar2 = DAT_0096a774;
    if (DAT_0096a77c != 0) {
                    /* WARNING: Load size is inaccurate */
      fVar2 = *g_heroMobyPtr->pCurrentAnimationData;
    }
    auVar3 = auRam00000000 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar3 = (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60) >> 0x60 &
             (undefined1  [16])0xffffffff;
    auVar3 = (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60) >> 0x60 &
             (undefined1  [16])0xffffffff;
    auVar3 = (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60) >> 0x60 &
             (undefined1  [16])0xffffffff;
    auVar3 = (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60) >> 0x60 &
             (undefined1  [16])0xffffffff;
    auVar3 = (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60) >> 0x60 &
             (undefined1  [16])0xffffffff;
    auVar3 = (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60) >> 0x60 &
             (undefined1  [16])0xffffffff;
    auVar3 = (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60) >> 0x60 &
             (undefined1  [16])0xffffffff;
    auVar3 = (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60) >> 0x60 &
             (undefined1  [16])0xffffffff;
    auVar3 = (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60) >> 0x60 &
             (undefined1  [16])0xffffffff;
    auVar3 = (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60) >> 0x60 &
             (undefined1  [16])0xffffffff;
    auVar3 = (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60) >> 0x60 &
             (undefined1  [16])0xffffffff;
    auVar3 = (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60) >> 0x60 &
             (undefined1  [16])0xffffffff;
    auVar3 = (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60) >> 0x60 &
             (undefined1  [16])0xffffffff;
    auVar3 = (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60) >> 0x60 &
             (undefined1  [16])0xffffffff;
    auVar3 = (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60) >> 0x60 &
             (undefined1  [16])0xffffffff;
    auVar3 = (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60) >> 0x60 &
             (undefined1  [16])0xffffffff;
    auVar3 = (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60) >> 0x60 &
             (undefined1  [16])0xffffffff;
    auVar3 = (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60) >> 0x60 &
             (undefined1  [16])0xffffffff;
    auVar3 = (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60) >> 0x60 &
             (undefined1  [16])0xffffffff;
    auVar3 = (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60) >> 0x60 &
             (undefined1  [16])0xffffffff;
    auVar3 = (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60) >> 0x60 &
             (undefined1  [16])0xffffffff;
    auVar3 = (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60) >> 0x60 &
             (undefined1  [16])0xffffffff;
    auVar3 = (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60) >> 0x60 &
             (undefined1  [16])0xffffffff;
    auVar3 = (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60) >> 0x60 &
             (undefined1  [16])0xffffffff;
    auVar3 = (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60) >> 0x60 &
             (undefined1  [16])0xffffffff;
    auVar3 = (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60) >> 0x60 &
             (undefined1  [16])0xffffffff;
    auVar3 = (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60) >> 0x60 &
             (undefined1  [16])0xffffffff;
    auVar3 = (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60) >> 0x60 &
             (undefined1  [16])0xffffffff;
    auVar3 = (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60) >> 0x60 &
             (undefined1  [16])0xffffffff;
    auVar3 = (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60) >> 0x60 &
             (undefined1  [16])0xffffffff;
    auVar3 = (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60) >> 0x60 &
             (undefined1  [16])0xffffffff;
    auVar3 = (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60) >> 0x60 &
             (undefined1  [16])0xffffffff;
    auVar3 = (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60) >> 0x60 &
             (undefined1  [16])0xffffffff;
    auVar3 = (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60) >> 0x60 &
             (undefined1  [16])0xffffffff;
    if (rate == -1.0) {
      auVar3 = (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      g_heroAnimSpeed =
           storeVectorElementWordIndexed
                     (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60,0xa90,0x969ce0);
    }
    else {
      mobyutil::Delt((fVar1 * scale) / (fVar2 * time),rate,(float *)&g_heroAnimSpeed);
    }
  }
  return;
}



//==== 000964f4  ns=hero  size=0xc8
// sig: float Hero_GetAnimScaledVal(float * table, int count)
// callers(1): 000aaec0 hero::HandleHeroMovement
// callees(2): 005026dc fastfunc::FastFrac; 00502758 fastfunc::FastDoubleToInt

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

float hero::Hero_GetAnimScaledVal(float *table,int count)

{
  longlong lVar1;
  longlong lVar2;
  double dVar3;
  undefined1 auStack_30 [8];
  
  lVar1 = fastfunc::FastDoubleToInt((double)g_heroAnimFrame);
  lVar2 = lVar1 + count + -1;
  lVar2 = lVar2 - (longlong)((int)lVar2 / count) * (longlong)count;
  if ((DAT_0096a778 & 2) != 0) {
    lVar2 = (longlong)count + -1;
  }
  dVar3 = (double)fastfunc::FastFrac((double)g_heroAnimFrame,DAT_0096a778 & 2,auStack_30);
  return (float)(dVar3 * (double)*(float *)((int)table + (int)(lVar1 << 2))) +
         (float)((double)DAT_0096a78c - dVar3) * *(float *)((int)table + (int)(lVar2 << 2));
}



//==== 000965bc  ns=hero  size=0x26c
// sig: undefined Hero_RotateAroundPoint(void)
// callers(3): 00096830 hero::Hero_RotateAroundCG; 0009de38 hero::Hero_JumpTurnTrans; 000aaec0 hero::HandleHeroMovement
// callees(3): 0010c1e8 mobyutil::MB_MtxToEuler; 00500ca4 fastfunc::FastEulerToMtx1; 0050162c fastfunc::FastVecMtx4Mul

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void hero::Hero_RotateAroundPoint(undefined8 param_1,undefined8 param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  float fStack00000030;
  float fStack00000034;
  float fStack00000038;
  float fStack0000003c;
  undefined1 local_100 [16];
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c0;
  float local_bc;
  float local_b8;
  undefined1 auStack_b0 [64];
  
  _fStack00000030 = param_1;
  _fStack00000038 = param_2;
  fastfunc::FastEulerToMtx1(&local_f0,&g_heroRotation);
  dVar4 = (double)fStack00000030;
  dVar3 = (double)fStack00000034;
  dVar2 = (double)fStack00000038;
  dVar1 = (double)fStack0000003c;
  dVar6 = (double)((float)((double)local_f0 * dVar4) + local_e0 * fStack00000034 +
                   (float)((double)local_d0 * dVar2) + local_c0 * fStack0000003c);
  dVar7 = (double)((float)((double)local_ec * dVar4) + (float)((double)local_dc * dVar3) +
                   (float)((double)local_cc * dVar2) + (float)((double)local_bc * dVar1));
  dVar5 = (double)((float)((double)local_e8 * dVar4) + (float)((double)local_d8 * dVar3) +
                   (float)((double)local_c8 * dVar2) + (float)((double)local_b8 * dVar1));
  fastfunc::FastEulerToMtx1(auStack_b0,local_100);
  fastfunc::FastVecMtx4Mul(&local_f0,&local_f0,auStack_b0);
  g_heroPosition.x =
       g_heroPosition.x +
       (float)(dVar6 - (double)((float)((double)local_f0 * dVar4) +
                                (float)((double)local_e0 * dVar3) +
                                (float)((double)local_d0 * dVar2) +
                               (float)((double)local_c0 * dVar1)));
  g_heroPosition.y =
       g_heroPosition.y +
       (float)(dVar7 - (double)((float)((double)local_ec * dVar4) +
                                (float)((double)local_dc * dVar3) +
                                (float)((double)local_cc * dVar2) +
                               (float)((double)local_bc * dVar1)));
  g_heroPosition.z =
       g_heroPosition.z +
       (float)(dVar5 - (double)((float)((double)local_e8 * dVar4) +
                                (float)((double)local_d8 * dVar3) +
                                (float)((double)local_c8 * dVar2) +
                               (float)((double)local_b8 * dVar1)));
  mobyutil::MB_MtxToEuler((int)&local_f0,(MobyInstance *)&g_heroRotation);
  return;
}



//==== 00096830  ns=hero  size=0x48
// sig: undefined Hero_RotateAroundCG(void)
// callers(1): 000aaec0 hero::HandleHeroMovement
// callees(1): 000965bc hero::Hero_RotateAroundPoint

void hero::Hero_RotateAroundCG(void)

{
  Hero_RotateAroundPoint(0,0x3f19999a00000000);
  return;
}



//==== 00096890  ns=hero  size=0xf4
// sig: undefined Hero_SpawnWaterRings(void)
// callers(1): 000aaec0 hero::HandleHeroMovement
// callees(3): 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 0012aee8 partupd::SpawnPart_45

void hero::Hero_SpawnWaterRings(undefined8 param_1,short param_2)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  undefined1 local_40 [24];
  
  DAT_0096a5e4 = DAT_0096a5e4 + 1;
  if (param_2 < DAT_0096a5e4) {
    dVar3 = -0.05000000074505806;
    dVar2 = 0.05000000074505806;
    mobyutil::MB_randRangeFloat(-0.05,0.05);
    mobyutil::MB_randRangeFloat((float)dVar3,(float)dVar2);
    uVar1 = mobyutil::MB_randRangeFloat(0.4,0.6);
    partupd::SpawnPart_45(uVar1,0x40b4820000000000,local_40);
    DAT_0096a5e4 = mobyutil::MB_randInt(param_1);
  }
  return;
}



//==== 000969c0  ns=hero  size=0x384
// sig: undefined Hero_SpawnWaterWake(void)
// callers(1): 000aaec0 hero::HandleHeroMovement
// callees(5): 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 0012e8c8 partupd::SpawnPart_46; 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots

void hero::Hero_SpawnWaterWake(undefined8 param_1,short param_2)

{
  float fVar1;
  short sVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  
  DAT_0096a5e8 = DAT_0096a5e8 + 1;
  if (param_2 < DAT_0096a5e8) {
    iVar3 = 0;
    do {
      if (iVar3 == 0) {
        fastfunc::FastWrapRot(g_heroRotation.z,0.785398);
      }
      else {
        fastfunc::FastDiffRots((double)g_heroRotation.z,0x3fe921fb00000000);
      }
      uVar4 = mobyutil::MB_randRangeFloat(0.4,0.5);
      if (iVar3 == 0) {
        fVar1 = 2.0;
      }
      else {
        fVar1 = -2.0;
      }
      partupd::SpawnPart_46(uVar4,(double)fVar1,local_40,local_50);
      sVar2 = 0;
      if ((int)param_1 != 0) {
        sVar2 = mobyutil::MB_randInt(param_1);
      }
      iVar3 = iVar3 + 1;
      DAT_0096a5e8 = sVar2;
    } while (iVar3 < 2);
  }
  return;
}



//==== 00096d88  ns=hero  size=0x2cc
// sig: undefined Hero_SpawnWaterDrops(void)
// callers(1): 000aaec0 hero::HandleHeroMovement
// callees(5): 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 000fcc68 mobyutil::MB_randRot; 000fe484 mobyutil::MB_randRange; 0012ab08 partupd::SpawnPart_35

void hero::Hero_SpawnWaterDrops(undefined8 param_1,short param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  Vec4 local_60;
  float local_50;
  float local_4c;
  float local_48;
  
  DAT_0096a5e6 = DAT_0096a5e6 + 1;
  if (param_2 < DAT_0096a5e6) {
    dVar11 = -0.15000000596046448;
    dVar10 = 0.15000000596046448;
    dVar6 = (double)mobyutil::MB_randRangeFloat(-0.15,0.15);
    dVar9 = 8.0;
    local_60.x = (float)((double)g_heroPosition.x + dVar6) + DAT_00969de0 * 8.0;
    dVar6 = (double)mobyutil::MB_randRangeFloat((float)dVar11,(float)dVar10);
    local_60.y = (float)((double)g_heroPosition.y + dVar6) + (float)((double)DAT_00969de4 * dVar9);
    local_60.z = g_heroWaterZ + 0.1;
    dVar6 = (double)mobyutil::MB_randRot();
    dVar10 = 3.0;
    dVar9 = (double)mobyutil::MB_randRangeFloat(0.0,mobyutil::g_FrameTime * 3.0);
    fVar1 = (float)(dVar6 + 1.570796251296997);
    fVar3 = fVar1;
    if (3.1415925 - fVar1 <= fVar1) {
      fVar3 = 3.1415925 - fVar1;
    }
    if (fVar3 <= -3.1415925 - fVar1) {
      fVar3 = -3.1415925 - fVar1;
    }
    fVar4 = fVar3 * fVar3;
    fVar1 = fVar4 * fVar4 * fVar3;
    fVar2 = fVar4 * fVar1;
    local_50 = (float)((double)(fVar3 + fVar4 * fVar3 * -0.16666657 + fVar1 * 0.0083330255 +
                                fVar2 * -0.0001980741 + fVar4 * fVar2 * 2.601887e-06) * dVar9) +
               DAT_00969de0 * 0.75;
    dVar11 = dVar6;
    if ((double)(float)(3.141592502593994 - dVar6) <= dVar6) {
      dVar11 = (double)(float)(3.141592502593994 - dVar6);
    }
    if (dVar11 <= (double)(float)(-3.141592502593994 - dVar6)) {
      dVar11 = (double)(float)(-3.141592502593994 - dVar6);
    }
    dVar6 = (double)(float)(dVar11 * dVar11);
    dVar8 = (double)(float)(dVar6 * (double)(float)(dVar6 * dVar11));
    dVar7 = (double)(float)(dVar6 * dVar8);
    local_4c = (float)((double)((float)(dVar11 + (double)(float)((double)(float)(dVar6 * dVar11) *
                                                                -0.16666656732559204)) +
                                (float)(dVar8 * 0.008333025500178337) +
                                (float)(dVar7 * -0.0001980741071747616) +
                               (float)(dVar6 * dVar7) * 2.601887e-06) * dVar9) + DAT_00969de4 * 0.75
    ;
    dVar6 = (double)mobyutil::MB_randRangeFloat
                              ((float)((double)mobyutil::g_FrameTime * dVar10),
                               (float)((double)mobyutil::g_FrameTime * 6.5));
    local_48 = (float)dVar6;
    uVar5 = mobyutil::MB_randRange(0x5a,0x78);
    if (0.25 <= DAT_0096bf84) {
      partupd::SpawnPart_35(&local_60,&local_50,1,uVar5);
    }
    else {
      partupd::SpawnPart_35(&local_60,&local_50,3,uVar5);
    }
    DAT_0096a5e6 = mobyutil::MB_randInt(param_1);
  }
  return;
}



//==== 00097080  ns=hero  size=0x2b0
// sig: undefined Hero_SpawnWaterBubbles(void)
// callers(1): 000aaec0 hero::HandleHeroMovement
// callees(3): 000f1114 mobyfunc::GetBonePosition; 000fcbe8 mobyutil::MB_randRangeFloat; 0012a440 partupd::SpawnPart_34

void hero::Hero_SpawnWaterBubbles(int param_1,int param_2)

{
  uint uVar1;
  double dVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  Vec4 local_60;
  float local_50;
  float local_4c;
  float local_48;
  undefined4 local_44;
  
  uVar1 = 0;
  if (0 < param_1) {
    do {
      if (param_2 == 0) {
        dVar5 = -0.10000000149011612;
        dVar4 = 0.10000000149011612;
        dVar2 = (double)mobyutil::MB_randRangeFloat(-0.1,0.1);
        local_60.x = (float)((double)g_heroPosition.x + dVar2);
        dVar2 = (double)mobyutil::MB_randRangeFloat((float)dVar5,(float)dVar4);
        local_60.y = (float)((double)g_heroPosition.y + dVar2);
        dVar2 = (double)mobyutil::MB_randRangeFloat(-0.5,(float)dVar4);
        local_60.z = (float)((double)g_heroPosition.z + dVar2);
      }
      else if (param_2 == 1) {
        if (uVar1 == (((int)uVar1 >> 1) + (uint)((int)uVar1 < 0 && (uVar1 & 1) != 0)) * 2) {
          mobyfunc::GetBonePosition(g_heroMobyPtr,0,&local_60);
        }
        else {
          mobyfunc::GetBonePosition(g_heroMobyPtr,0xe,&local_60);
        }
      }
      else if (param_2 == 2) {
        if (uVar1 == (((int)uVar1 >> 1) + (uint)((int)uVar1 < 0 && (uVar1 & 1) != 0)) * 2) {
          mobyfunc::GetBonePosition(g_heroMobyPtr,0x17,&local_60);
        }
        else {
          mobyfunc::GetBonePosition(g_heroMobyPtr,0x16,&local_60);
        }
      }
      local_44 = DAT_00969dec;
      if (g_heroState == UNDERWATER_STANDING) {
        local_50 = DAT_00969de0 * 1.15;
        local_4c = DAT_00969de4 * 1.15;
        local_48 = DAT_00969de8 * 1.15;
      }
      else {
        local_50 = DAT_00969de0 * 0.7;
        local_4c = DAT_00969de4 * 0.7;
        local_48 = DAT_00969de8 * 0.7;
      }
      dVar5 = -0.4000000059604645;
      dVar4 = 0.4000000059604645;
      dVar2 = (double)mobyutil::MB_randRangeFloat
                                (mobyutil::g_FrameTime * -0.4,mobyutil::g_FrameTime * 0.4);
      local_50 = (float)((double)local_50 + dVar2);
      dVar2 = (double)mobyutil::MB_randRangeFloat
                                ((float)((double)mobyutil::g_FrameTime * dVar5),
                                 (float)((double)mobyutil::g_FrameTime * dVar4));
      local_4c = (float)((double)local_4c + dVar2);
      dVar2 = (double)mobyutil::MB_randRangeFloat(-mobyutil::g_FrameTime,0.0);
      local_48 = (float)((double)local_48 + dVar2);
      uVar3 = mobyutil::MB_randRangeFloat(4200.0,7350.0);
      partupd::SpawnPart_34(uVar3,0xbff0000000000000,&local_60,&local_50);
      uVar1 = uVar1 + 1;
    } while ((int)uVar1 < param_1);
  }
  return;
}



//==== 00097370  ns=hero  size=0x32c
// sig: undefined Hero_SpawnWaterSplash(void)
// callers(3): 000aaec0 hero::HandleHeroMovement; 000b72b0 hero::TransitionMovement; 000be228 hero::HeroMovement
// callees(7): 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 000fcc68 mobyutil::MB_randRot; 000fe484 mobyutil::MB_randRange; 0012ab08 partupd::SpawnPart_35; 0012aee8 partupd::SpawnPart_45; 00456478 FUN_00456478

void hero::Hero_SpawnWaterSplash(int param_1,int param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined1 local_90 [16];
  undefined1 local_80 [16];
  float local_70;
  float local_6c;
  float local_68;
  Vec4 local_60;
  
  if (param_3 != 0) {
    FUN_00456478(0x4002000000000000,local_90);
  }
  iVar8 = 0;
  iVar7 = 0;
  if (0 < param_1) {
    do {
      dVar16 = -0.30000001192092896;
      dVar14 = 0.30000001192092896;
      mobyutil::MB_randRangeFloat(-0.3,0.3);
      mobyutil::MB_randRangeFloat((float)dVar16,(float)dVar14);
      uVar9 = mobyutil::MB_randRangeFloat((float)dVar14,0.6);
      partupd::SpawnPart_45(uVar9,0x40b4820000000000,local_80);
      iVar8 = iVar8 + 1;
    } while (iVar8 < param_1);
  }
  if (0 < param_2) {
    do {
      dVar14 = (double)mobyutil::MB_randRot();
      dVar15 = 0.0;
      dVar13 = 3.0;
      dVar16 = (double)mobyutil::MB_randRangeFloat(0.0,mobyutil::g_FrameTime * 3.0);
      fVar1 = (float)(dVar14 + 1.570796251296997);
      fVar3 = fVar1;
      if (3.1415925 - fVar1 <= fVar1) {
        fVar3 = 3.1415925 - fVar1;
      }
      if (fVar3 <= -3.1415925 - fVar1) {
        fVar3 = -3.1415925 - fVar1;
      }
      fVar4 = fVar3 * fVar3;
      fVar1 = fVar4 * fVar4 * fVar3;
      fVar2 = fVar4 * fVar1;
      local_70 = (float)((double)(fVar3 + fVar4 * fVar3 * -0.16666657 + fVar1 * 0.0083330255 +
                                  fVar2 * -0.0001980741 + fVar4 * fVar2 * 2.601887e-06) * dVar16);
      dVar10 = dVar14;
      if ((double)(float)(3.141592502593994 - dVar14) <= dVar14) {
        dVar10 = (double)(float)(3.141592502593994 - dVar14);
      }
      if (dVar10 <= (double)(float)(-3.141592502593994 - dVar14)) {
        dVar10 = (double)(float)(-3.141592502593994 - dVar14);
      }
      dVar14 = (double)(float)(dVar10 * dVar10);
      dVar12 = (double)(float)(dVar14 * (double)(float)(dVar14 * dVar10));
      dVar11 = (double)(float)(dVar14 * dVar12);
      local_6c = (float)((double)((float)(dVar10 + (double)(float)((double)(float)(dVar14 * dVar10)
                                                                  * -0.16666656732559204)) +
                                  (float)(dVar12 * 0.008333025500178337) +
                                  (float)(dVar11 * -0.0001980741071747616) +
                                 (float)(dVar14 * dVar11) * 2.601887e-06) * dVar16);
      dVar16 = 8.0;
      dVar14 = (double)mobyutil::MB_randRangeFloat
                                 ((float)((double)mobyutil::g_FrameTime * dVar13),
                                  (float)((double)mobyutil::g_FrameTime * 8.0));
      local_68 = (float)dVar14;
      local_60.x = g_heroPosition.x + (float)((double)local_70 * dVar16);
      local_60.y = g_heroPosition.y + (float)((double)local_70 * dVar16);
      dVar14 = (double)mobyutil::MB_randRangeFloat((float)dVar15,0.2);
      local_60.z = (float)((double)g_heroWaterZ - dVar14);
      uVar5 = mobyutil::MB_randInt(2);
      uVar6 = mobyutil::MB_randRange(0x5a,0x78);
      partupd::SpawnPart_35(&local_60,&local_70,uVar5,uVar6);
      iVar7 = iVar7 + 1;
    } while (iVar7 < param_2);
  }
  return;
}



//==== 00097700  ns=hero  size=0x444
// sig: undefined Hero_SpawnLavaAssParticles(void)
// callers(1): 000aaec0 hero::HandleHeroMovement
// callees(10): 000fcbe8 mobyutil::MB_randRangeFloat; 000fcc68 mobyutil::MB_randRot; 000fe484 mobyutil::MB_randRange; 000fe4f0 mobyutil::MB_randRangeSigned; 000fe610 mobyutil::MB_SphericalToVector; 00121740 partupd::SpawnPart_4; 00127918 partupd::SpawnPart_25; 004fffb4 fastfunc::FastDecTimerS16; 00502578 fastfunc::FastWrapRot; 00502758 fastfunc::FastDoubleToInt

void hero::Hero_SpawnLavaAssParticles(void)

{
  float fVar1;
  int iVar5;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 local_b0 [16];
  undefined1 local_a0 [16];
  undefined1 local_90 [16];
  float afStack_80 [10];
  
  iVar5 = fastfunc::FastDecTimerS16(&DAT_0096a17e);
  if (iVar5 != 0) {
    fastfunc::FastWrapRot(g_heroRotation.z,1.5707964);
    mobyutil::MB_randRangeSigned
              ((double)(mobyutil::g_FrameTime * 0.2),(double)(mobyutil::g_FrameTime * 0.7));
    partupd::SpawnPart_25(local_b0,local_a0);
    DAT_0096a17e = mobyutil::MB_randRange(2,3);
  }
  iVar5 = fastfunc::FastDecTimerS16(&DAT_0096a17c);
  if (iVar5 != 0) {
    dVar10 = 40.5;
    fVar1 = (float)((double)(longlong)((int)(animationSpeed * 40.5) - g_heroStateTimer) /
                   (double)(longlong)(int)(animationSpeed * 40.5));
    if (1.0 < fVar1) {
      fVar1 = 1.0;
    }
    if (fVar1 < 0.0) {
      fVar1 = 0.0;
    }
    lVar2 = fastfunc::FastDoubleToInt((double)(fVar1 * 240.0));
    if (0xa0 < (int)lVar2) {
      lVar2 = 0xa0;
    }
    if ((int)lVar2 < 0x20) {
      lVar2 = 0x20;
    }
    dVar6 = (double)animationSpeed;
    iVar5 = 0;
    do {
      dVar7 = (double)mobyutil::MB_randRangeFloat(4200.0,7350.0);
      dVar9 = 0.0010000000474974513;
      uVar3 = fastfunc::FastDoubleToInt((double)(float)(dVar7 * 0.0010000000474974513));
      dVar7 = (double)mobyutil::MB_randRangeFloat(21000.0,31500.002);
      uVar4 = fastfunc::FastDoubleToInt((double)(float)(dVar7 * dVar9));
      dVar7 = (double)mobyutil::MB_randRangeFloat
                                (mobyutil::g_FrameTime * 0.15,mobyutil::g_FrameTime * 0.57);
      dVar9 = (double)mobyutil::MB_randRot();
      dVar8 = (double)mobyutil::MB_randRot();
      mobyutil::MB_SphericalToVector((float)dVar7,(float)dVar9,(float)dVar8,afStack_80);
      partupd::SpawnPart_4
                (local_90,afStack_80,(uint)(lVar2 << 0x18) | 0xc0f0,0x70f0,(int)(dVar6 * dVar10),
                 uVar3,uVar4,1);
      iVar5 = iVar5 + 1;
    } while (iVar5 < 0x39);
    DAT_0096a17c = mobyutil::MB_randRange((int)(animationSpeed * 3.5),(int)(animationSpeed * 7.5));
  }
  return;
}



//==== 00097b44  ns=hero  size=0x14
// sig: undefined ???_Hero_SetTweakPair_97b44(void)
// callers(0): 
// callees(0): 

void hero::____Hero_SetTweakPair_97b44(double param_1,double param_2)

{
  DAT_00721c74 = (float)param_1;
  DAT_00721c78 = (float)param_2;
  return;
}



//==== 00097bd0  ns=hero  size=0xc58
// sig: int Hero_UpdateLedge(float * pos, float * rot)
// callers(2): 00098878 hero::Hero_CheckLedgeAhead; 000be228 hero::HeroMovement
// callees(4): 00057820 collproc::CollLine; 00060780 collproc::CollHotspot; 00502578 fastfunc::FastWrapRot; 005026a0 fastfunc::FastSubRots

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int hero::Hero_UpdateLedge(float *pos,float *rot)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  ulonglong *puVar5;
  float fVar6;
  float *pfVar7;
  uint uVar8;
  bool bVar9;
  short sVar10;
  MobyInstance *pMVar11;
  ulonglong uVar12;
  int iVar15;
  longlong lVar13;
  longlong lVar14;
  int iVar16;
  int iVar17;
  ulonglong uVar18;
  ulonglong unaff_r21;
  ulonglong unaff_r22;
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
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  ulonglong in_f14;
  double dVar25;
  ulonglong in_f15;
  double dVar26;
  ulonglong in_f16;
  double dVar27;
  ulonglong in_f17;
  double dVar28;
  ulonglong in_f18;
  double dVar29;
  ulonglong in_f19;
  double dVar30;
  ulonglong in_f20;
  double dVar31;
  ulonglong in_f21;
  double dVar32;
  ulonglong in_f22;
  double dVar33;
  ulonglong in_f23;
  double dVar34;
  ulonglong in_f24;
  double dVar35;
  ulonglong in_f25;
  ulonglong in_f26;
  double dVar36;
  ulonglong in_f27;
  double dVar37;
  ulonglong in_f28;
  ulonglong in_f29;
  double dVar38;
  ulonglong in_f30;
  double dVar39;
  double dVar40;
  ulonglong in_f31;
  double dVar41;
  undefined1 auVar42 [16];
  
  uVar12 = ZEXT48(&stack0x00000000);
  lVar14 = uVar12 - 0x260;
  puVar5 = (ulonglong *)lVar14;
  *puVar5 = uVar12;
  puVar5[0x4e] = in_LR;
  puVar5[0x3a] = in_f14;
  puVar5[0x3b] = in_f15;
  puVar5[0x3c] = in_f16;
  puVar5[0x3d] = in_f17;
  puVar5[0x3e] = in_f18;
  puVar5[0x3f] = in_f19;
  puVar5[0x40] = in_f20;
  puVar5[0x41] = in_f21;
  puVar5[0x42] = in_f22;
  puVar5[0x43] = in_f23;
  puVar5[0x44] = in_f24;
  puVar5[0x45] = in_f25;
  puVar5[0x46] = in_f26;
  puVar5[0x47] = in_f27;
  puVar5[0x48] = in_f28;
  puVar5[0x49] = in_f29;
  puVar5[0x4a] = in_f30;
  puVar5[0x4b] = in_f31;
  puVar5[0x30] = unaff_r22;
  puVar5[0x39] = unaff_r31;
  puVar5[0x32] = unaff_r24;
  puVar5[0x38] = unaff_r30;
  sVar10 = g_onMagnerail;
  puVar5[0x37] = unaff_r29;
  puVar5[0x36] = unaff_r28;
  puVar5[0x35] = unaff_r27;
  puVar5[0x34] = unaff_r26;
  puVar5[0x33] = unaff_r25;
  puVar5[0x31] = unaff_r23;
  puVar5[0x2f] = unaff_r21;
  if (sVar10 == 2) {
    return 0;
  }
  fVar1 = -0.7;
  fVar2 = 0.3;
  fVar3 = 1.5;
  dVar37 = 1.7999999523162842;
  dVar40 = 1.149999976158142;
  if (g_heroType == '\x01') {
    dVar37 = 0.699999988079071;
    fVar1 = -0.4;
    fVar2 = 0.25;
    fVar3 = 0.725;
    dVar40 = dVar37;
  }
  dVar41 = (double)fVar1;
  dVar39 = (double)fVar2;
  dVar38 = (double)fVar3;
  dVar31 = 1.570796251296997;
  dVar30 = 3.141592502593994;
  fVar2 = g_heroRotation.z + 1.5707963;
  dVar33 = (double)pos[2];
  bVar9 = false;
  dVar32 = (double)pos[3];
  fVar1 = fVar2;
  if (3.1415925 - fVar2 <= fVar2) {
    fVar1 = 3.1415925 - fVar2;
  }
  dVar29 = -3.141592502593994;
  if (fVar1 <= -3.1415925 - fVar2) {
    fVar1 = -3.1415925 - fVar2;
  }
  fVar6 = fVar1 * fVar1;
  dVar27 = -0.16666656732559204;
  dVar28 = 0.008333025500178337;
  dVar26 = -0.0001980741071747616;
  dVar25 = 2.601886990305502e-06;
  fVar2 = fVar6 * fVar6 * fVar1;
  fVar3 = fVar6 * fVar2;
  dVar35 = (double)(*pos + (fVar1 + fVar6 * fVar1 * -0.16666657 + fVar2 * 0.0083330255 +
                            fVar3 * -0.0001980741 + fVar6 * fVar3 * 2.601887e-06) * g_heroCollRadius
                   );
  fVar1 = g_heroRotation.z;
  if (3.1415925 - g_heroRotation.z <= g_heroRotation.z) {
    fVar1 = 3.1415925 - g_heroRotation.z;
  }
  if (fVar1 <= -3.1415925 - g_heroRotation.z) {
    fVar1 = -3.1415925 - g_heroRotation.z;
  }
  fVar6 = fVar1 * fVar1;
  iVar16 = 0;
  fVar2 = fVar6 * fVar6 * fVar1;
  fVar3 = fVar6 * fVar2;
  dVar22 = 0.0;
  dVar34 = (double)(pos[1] + (fVar1 + fVar6 * fVar1 * -0.16666657 + fVar2 * 0.0083330255 +
                              fVar3 * -0.0001980741 + fVar6 * fVar3 * 2.601887e-06) *
                             g_heroCollRadius);
  dVar36 = dVar22;
  while( true ) {
    dVar19 = (double)g_heroRotation.z;
    dVar20 = (double)(float)(dVar19 + dVar31);
    dVar21 = dVar20;
    if ((double)(float)(dVar30 - dVar20) <= dVar20) {
      dVar21 = (double)(float)(dVar30 - dVar20);
    }
    if (dVar21 <= (double)(float)(dVar29 - dVar20)) {
      dVar21 = (double)(float)(dVar29 - dVar20);
    }
    dVar20 = (double)(float)(dVar21 * dVar21);
    dVar23 = (double)(float)(dVar20 * (double)(float)(dVar20 * dVar21));
    dVar24 = (double)(float)(dVar20 * dVar23);
    fVar1 = (float)(dVar35 + (double)((float)((double)((float)(dVar21 + (double)(float)((double)(
                                                  float)(dVar20 * dVar21) * dVar27)) +
                                                  (float)(dVar23 * dVar28) +
                                                  (float)(dVar24 * dVar26) +
                                                  (float)((double)(float)(dVar20 * dVar24) * dVar25)
                                                  ) * dVar39) * 0.25));
    dVar35 = (double)fVar1;
    dVar21 = dVar19;
    if ((double)(float)(dVar30 - dVar19) <= dVar19) {
      dVar21 = (double)(float)(dVar30 - dVar19);
    }
    if (dVar21 <= (double)(float)(dVar29 - dVar19)) {
      dVar21 = (double)(float)(dVar29 - dVar19);
    }
    dVar19 = (double)(float)(dVar21 * dVar21);
    *(float *)(puVar5 + 0xe) = fVar1;
    *(float *)((int)puVar5 + 0x7c) = (float)dVar32;
    pMVar11 = g_heroMobyPtr;
    dVar20 = (double)(float)(dVar19 * (double)(float)(dVar19 * dVar21));
    dVar23 = (double)(float)(dVar19 * dVar20);
    fVar2 = (float)(dVar34 + (double)((float)((double)((float)(dVar21 + (double)(float)((double)(
                                                  float)(dVar19 * dVar21) * dVar27)) +
                                                  (float)(dVar20 * dVar28) +
                                                  (float)(dVar23 * dVar26) +
                                                  (float)((double)(float)(dVar19 * dVar23) * dVar25)
                                                  ) * dVar39) * 0.25));
    dVar34 = (double)fVar2;
    *(float *)((int)puVar5 + 0x74) = fVar2;
    *(float *)(puVar5 + 0x10) = fVar1;
    *(float *)((int)puVar5 + 0x84) = fVar2;
    *(float *)((int)puVar5 + 0x8c) = (float)dVar32;
    *(float *)(puVar5 + 0x11) = (float)(dVar33 + dVar40);
    *(float *)(puVar5 + 0xf) = (float)((double)(float)(dVar38 + 0.15000000596046448) + dVar33);
    iVar15 = collproc::CollLine(uVar12 - 0x1f0,uVar12 - 0x1e0,4,pMVar11,0);
    if (((iVar15 != 0) &&
        (iVar15 = collproc::CollHotspot(), fVar1 = CollOutput.normal.z, iVar15 != 9)) &&
       (iVar15 != 0xc)) {
      fVar2 = SQRT(CollOutput.normal.x * CollOutput.normal.x +
                   CollOutput.normal.y * CollOutput.normal.y);
      dVar20 = ABS((double)CollOutput.normal.z);
      dVar19 = ABS((double)fVar2);
      *(float *)(puVar5 + 0x1c) = fVar2;
      *(float *)((int)puVar5 + 0xe4) = (float)(dVar20 - dVar19);
      uVar18 = (ulonglong)((uint)fVar1 >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar5 + 0xe4) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar5 + 0x1c) >> 0x1d) & 4;
      fVar2 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar18 << 2));
      fVar1 = *(float *)((uint)(uVar18 << 2) | 0x735904);
      dVar21 = dVar20;
      if (dVar36 <= (double)*(float *)((int)puVar5 + 0xe4)) {
        dVar21 = ABS((double)*(float *)(puVar5 + 0x1c));
        dVar19 = dVar20;
      }
      dVar20 = dVar36;
      if (dVar36 < dVar19) {
        iVar15 = 4;
        fVar3 = (float)(dVar21 - dVar19) / (float)(dVar21 + dVar19);
        lVar13 = lVar14;
        do {
          iVar15 = iVar15 + -1;
          *(float *)((int)lVar13 + 0x128) = fVar3;
          lVar13 = lVar13 + 4;
        } while (iVar15 != 0);
        fVar3 = fVar3 * fVar3;
        lVar13 = uVar12 - 0x250;
        iVar15 = 4;
        fVar6 = fVar3 * fVar3;
        *(float *)((int)puVar5 + 300) = *(float *)((int)puVar5 + 300) * fVar3;
        *(float *)(puVar5 + 0x26) = *(float *)(puVar5 + 0x26) * fVar6;
        *(float *)((int)puVar5 + 0x134) = *(float *)((int)puVar5 + 0x134) * fVar6 * fVar3;
        do {
          iVar15 = iVar15 + -1;
          *(float *)((int)lVar13 + 0x128) = *(float *)((int)lVar13 + 0x118) * fVar6 * fVar6;
          lVar13 = lVar13 + 4;
        } while (iVar15 != 0);
        iVar15 = 0;
        iVar17 = 8;
        lVar13 = lVar14;
        do {
          pfVar7 = (float *)((int)&DAT_007358e0 + iVar15);
          iVar17 = iVar17 + -1;
          iVar15 = iVar15 + 4;
          *(float *)((int)lVar13 + 0x128) = *(float *)((int)lVar13 + 0x128) * *pfVar7;
          lVar13 = lVar13 + 4;
        } while (iVar17 != 0);
        iVar15 = 8;
        lVar13 = lVar14;
        dVar21 = dVar36;
        do {
          iVar15 = iVar15 + -1;
          iVar17 = (int)lVar13;
          lVar13 = lVar13 + 4;
          dVar21 = (double)(float)(dVar21 + (double)*(float *)(iVar17 + 0x128));
        } while (iVar15 != 0);
        dVar20 = (double)((float)(dVar21 + 0.7853981852531433) * fVar2 + fVar1);
      }
      if (dVar20 < 0.3490658402442932) {
        bVar9 = true;
      }
    }
    if (bVar9) break;
    iVar16 = iVar16 + 1;
    if (3 < iVar16) {
      return 0;
    }
  }
  dVar40 = (double)CollOutput.ip.z;
  if ((double)(float)((double)pos[2] + dVar38) < dVar40) {
    return 0;
  }
  dVar35 = (double)CollOutput.ip.x;
  dVar39 = (double)CollOutput.ip.y;
  fVar1 = pos[1];
  dVar32 = ABS((double)(float)(dVar35 - (double)*pos));
  dVar33 = ABS((double)(float)(dVar39 - (double)fVar1));
  *(float *)((int)puVar5 + 0xd4) = (float)(dVar35 - (double)*pos);
  *(float *)(puVar5 + 0x1b) = (float)(dVar39 - (double)fVar1);
  dVar38 = (double)CollOutput.ip.w;
  *(float *)((int)puVar5 + 0xdc) = (float)(dVar32 - dVar33);
  iVar16 = (int)(((ulonglong)(*(uint *)((int)puVar5 + 0xd4) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)((int)puVar5 + 0xdc) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)(puVar5 + 0x1b) >> 0x1d) & 4) << 2);
  fVar2 = *(float *)(&mobyutil::g_atanQuadrantTable + iVar16);
  fVar1 = *(float *)(&DAT_00735904 + iVar16);
  if (dVar36 <= (double)*(float *)((int)puVar5 + 0xdc)) {
    dVar32 = ABS((double)*(float *)(puVar5 + 0x1b));
    dVar33 = ABS((double)*(float *)((int)puVar5 + 0xd4));
  }
  dVar34 = dVar36;
  if (dVar36 < dVar33) {
    iVar16 = 4;
    fVar3 = (float)(dVar32 - dVar33) / (float)(dVar32 + dVar33);
    lVar13 = lVar14;
    do {
      iVar16 = iVar16 + -1;
      *(float *)((int)lVar13 + 0x108) = fVar3;
      lVar13 = lVar13 + 4;
    } while (iVar16 != 0);
    fVar3 = fVar3 * fVar3;
    lVar13 = uVar12 - 0x250;
    iVar16 = 4;
    fVar6 = fVar3 * fVar3;
    *(float *)((int)puVar5 + 0x10c) = *(float *)((int)puVar5 + 0x10c) * fVar3;
    *(float *)(puVar5 + 0x22) = *(float *)(puVar5 + 0x22) * fVar6;
    *(float *)((int)puVar5 + 0x114) = *(float *)((int)puVar5 + 0x114) * fVar6 * fVar3;
    do {
      iVar16 = iVar16 + -1;
      *(float *)((int)lVar13 + 0x108) = *(float *)((int)lVar13 + 0xf8) * fVar6 * fVar6;
      lVar13 = lVar13 + 4;
    } while (iVar16 != 0);
    iVar16 = 0;
    iVar15 = 8;
    lVar13 = lVar14;
    do {
      iVar15 = iVar15 + -1;
      pfVar7 = (float *)((int)&DAT_007358e0 + iVar16);
      iVar16 = iVar16 + 4;
      *(float *)((int)lVar13 + 0x108) = *(float *)((int)lVar13 + 0x108) * *pfVar7;
      lVar13 = lVar13 + 4;
    } while (iVar15 != 0);
    iVar16 = 8;
    lVar13 = lVar14;
    dVar32 = dVar36;
    do {
      iVar16 = iVar16 + -1;
      iVar15 = (int)lVar13;
      lVar13 = lVar13 + 4;
      dVar32 = (double)(float)(dVar32 + (double)*(float *)(iVar15 + 0x108));
    } while (iVar16 != 0);
    dVar34 = (double)((float)(dVar32 + 0.7853981852531433) * fVar2 + fVar1);
  }
  if ((double)(float)(dVar40 - (double)g_heroGroundZ) < dVar37) {
    return 0;
  }
  iVar16 = 0;
  bVar9 = false;
  while( true ) {
    dVar32 = (double)(float)(dVar34 + dVar31);
    *(float *)(puVar5 + 0x12) = *pos;
    *(float *)((int)puVar5 + 0x94) = pos[1];
    *(float *)(puVar5 + 0x13) = pos[2];
    fVar1 = pos[3];
    *(float *)(puVar5 + 0x14) = (float)dVar35;
    *(float *)((int)puVar5 + 0x9c) = fVar1;
    *(float *)((int)puVar5 + 0xa4) = (float)dVar39;
    *(float *)(puVar5 + 0x15) = (float)dVar40;
    *(float *)((int)puVar5 + 0xac) = (float)dVar38;
    fVar1 = g_heroCollRadius * 2.0;
    dVar37 = dVar32;
    if ((double)(float)(dVar30 - dVar32) <= dVar32) {
      dVar37 = (double)(float)(dVar30 - dVar32);
    }
    if (dVar37 <= (double)(float)(dVar29 - dVar32)) {
      dVar37 = (double)(float)(dVar29 - dVar32);
    }
    dVar32 = (double)(float)(dVar37 * dVar37);
    dVar33 = (double)(float)(dVar32 * (double)(float)(dVar32 * dVar37));
    dVar21 = (double)(float)(dVar32 * dVar33);
    *(float *)(puVar5 + 0x14) =
         (float)(dVar35 + (double)(((float)(dVar37 + (double)(float)((double)(float)(dVar32 * dVar37
                                                                                    ) * dVar27)) +
                                    (float)(dVar33 * dVar28) + (float)(dVar21 * dVar26) +
                                   (float)((double)(float)(dVar32 * dVar21) * dVar25)) * fVar1));
    dVar37 = dVar34;
    if ((double)(float)(dVar30 - dVar34) <= dVar34) {
      dVar37 = (double)(float)(dVar30 - dVar34);
    }
    if (dVar37 <= (double)(float)(dVar29 - dVar34)) {
      dVar37 = (double)(float)(dVar29 - dVar34);
    }
    dVar32 = (double)(float)(dVar37 * dVar37);
    puVar5[0x2c] = (longlong)iVar16;
    dVar33 = (double)(float)(dVar32 * (double)(float)(dVar32 * dVar37));
    dVar21 = (double)(float)(dVar32 * dVar33);
    *(float *)((int)puVar5 + 0xa4) =
         (float)(dVar39 + (double)(((float)(dVar37 + (double)(float)((double)(float)(dVar32 * dVar37
                                                                                    ) * dVar27)) +
                                    (float)(dVar33 * dVar28) + (float)(dVar21 * dVar26) +
                                   (float)((double)(float)(dVar32 * dVar21) * dVar25)) * fVar1));
    fVar1 = (float)(dVar40 + (double)(float)((double)(1.0 - (float)(longlong)puVar5[0x2c] * 0.2) *
                                            dVar41));
    *(float *)(puVar5 + 0x2a) = fVar1;
    *(float *)((int)puVar5 + 0x154) = fVar1;
    *(float *)(puVar5 + 0x2b) = fVar1;
    *(float *)((int)puVar5 + 0x15c) = fVar1;
    auVar42 = auRam00000000 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar42 = (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60) >> 0x60 &
              (undefined1  [16])0xffffffff;
    auVar42 = (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60) >> 0x60 &
              (undefined1  [16])0xffffffff;
    auVar42 = (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60) >> 0x60 &
              (undefined1  [16])0xffffffff;
    auVar42 = (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60) >> 0x60 &
              (undefined1  [16])0xffffffff;
    auVar42 = (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60) >> 0x60 &
              (undefined1  [16])0xffffffff;
    auVar42 = (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60) >> 0x60 &
              (undefined1  [16])0xffffffff;
    auVar42 = (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60) >> 0x60 &
              (undefined1  [16])0xffffffff;
    auVar42 = (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60) >> 0x60 &
              (undefined1  [16])0xffffffff;
    auVar42 = (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60) >> 0x60 &
              (undefined1  [16])0xffffffff;
    auVar42 = (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60) >> 0x60 &
              (undefined1  [16])0xffffffff;
    auVar42 = (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60) >> 0x60 &
              (undefined1  [16])0xffffffff;
    auVar42 = (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60) >> 0x60 &
              (undefined1  [16])0xffffffff;
    auVar42 = (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60) >> 0x60 &
              (undefined1  [16])0xffffffff;
    auVar42 = (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60) >> 0x60 &
              (undefined1  [16])0xffffffff;
    auVar42 = (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60) >> 0x60 &
              (undefined1  [16])0xffffffff;
    auVar42 = (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60) >> 0x60 &
              (undefined1  [16])0xffffffff;
    auVar42 = (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60) >> 0x60 &
              (undefined1  [16])0xffffffff;
    auVar42 = (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60) >> 0x60 &
              (undefined1  [16])0xffffffff;
    auVar42 = (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60) >> 0x60 &
              (undefined1  [16])0xffffffff;
    auVar42 = (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60) >> 0x60 &
              (undefined1  [16])0xffffffff;
    auVar42 = (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60) >> 0x60 &
              (undefined1  [16])0xffffffff;
    auVar42 = (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60) >> 0x60 &
              (undefined1  [16])0xffffffff;
    auVar42 = (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60) >> 0x60 &
              (undefined1  [16])0xffffffff;
    auVar42 = (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60) >> 0x60 &
              (undefined1  [16])0xffffffff;
    auVar42 = (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60) >> 0x60 &
              (undefined1  [16])0xffffffff;
    auVar42 = (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60) >> 0x60 &
              (undefined1  [16])0xffffffff;
    auVar42 = (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60) >> 0x60 &
              (undefined1  [16])0xffffffff;
    auVar42 = (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60) >> 0x60 &
              (undefined1  [16])0xffffffff;
    auVar42 = (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60) >> 0x60 &
              (undefined1  [16])0xffffffff;
    auVar42 = (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60) >> 0x60 &
              (undefined1  [16])0xffffffff;
    auVar42 = (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60) >> 0x60 &
              (undefined1  [16])0xffffffff;
    auVar42 = (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60) >> 0x60 &
              (undefined1  [16])0xffffffff;
    auVar42 = (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60) >> 0x60 &
              (undefined1  [16])0xffffffff;
    auVar42 = (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60) >> 0x60 &
              (undefined1  [16])0xffffffff;
    auVar42 = (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60) >> 0x60 &
              (undefined1  [16])0xffffffff;
    auVar42 = auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60;
    uVar4 = storeVectorElementWordIndexed(auVar42,0,uVar12 - 0x1b8);
    *(undefined4 *)(uVar12 - 0x1b8) = uVar4;
    uVar4 = storeVectorElementWordIndexed(auVar42,0,uVar12 - 0x1c8);
    *(undefined4 *)(uVar12 - 0x1c8) = uVar4;
    iVar15 = collproc::CollLine(uVar12 - 0x1d0,uVar12 - 0x1c0,2,0,0);
    fVar1 = CollOutput.normal.x;
    if (iVar15 != 0) break;
    iVar16 = iVar16 + 1;
    if (4 < iVar16) goto LAB_000985fc;
  }
  dVar33 = ABS((double)CollOutput.normal.x);
  uVar8 = (uint)CollOutput.normal.y >> 0x1d;
  dVar32 = ABS((double)CollOutput.normal.y);
  *(float *)(puVar5 + 0x1a) = (float)(dVar33 - dVar32);
  iVar16 = (int)(((ulonglong)((uint)fVar1 >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar5 + 0x1a) >> 0x1e) & 2 | (ulonglong)uVar8 & 4) << 2);
  fVar2 = *(float *)(&mobyutil::g_atanQuadrantTable + iVar16);
  fVar1 = *(float *)(&DAT_00735904 + iVar16);
  dVar37 = dVar33;
  if (dVar36 <= (double)*(float *)(puVar5 + 0x1a)) {
    dVar37 = dVar32;
    dVar32 = dVar33;
  }
  dVar22 = dVar36;
  if (dVar36 < dVar32) {
    iVar16 = 4;
    fVar3 = (float)(dVar37 - dVar32) / (float)(dVar37 + dVar32);
    lVar13 = lVar14;
    do {
      iVar16 = iVar16 + -1;
      *(float *)((int)lVar13 + 0xe8) = fVar3;
      lVar13 = lVar13 + 4;
    } while (iVar16 != 0);
    fVar3 = fVar3 * fVar3;
    lVar13 = uVar12 - 0x250;
    iVar16 = 4;
    fVar6 = fVar3 * fVar3;
    *(float *)((int)puVar5 + 0xec) = *(float *)((int)puVar5 + 0xec) * fVar3;
    *(float *)(puVar5 + 0x1e) = *(float *)(puVar5 + 0x1e) * fVar6;
    *(float *)((int)puVar5 + 0xf4) = *(float *)((int)puVar5 + 0xf4) * fVar6 * fVar3;
    do {
      iVar16 = iVar16 + -1;
      *(float *)((int)lVar13 + 0xe8) = *(float *)((int)lVar13 + 0xd8) * fVar6 * fVar6;
      lVar13 = lVar13 + 4;
    } while (iVar16 != 0);
    iVar16 = 0;
    iVar15 = 8;
    lVar13 = lVar14;
    do {
      iVar15 = iVar15 + -1;
      pfVar7 = (float *)((int)&DAT_007358e0 + iVar16);
      iVar16 = iVar16 + 4;
      *(float *)((int)lVar13 + 0xe8) = *(float *)((int)lVar13 + 0xe8) * *pfVar7;
      lVar13 = lVar13 + 4;
    } while (iVar15 != 0);
    iVar16 = 8;
    dVar37 = dVar36;
    do {
      iVar16 = iVar16 + -1;
      iVar15 = (int)lVar14;
      lVar14 = lVar14 + 4;
      dVar37 = (double)(float)(dVar37 + (double)*(float *)(iVar15 + 0xe8));
    } while (iVar16 != 0);
    dVar22 = (double)((float)(dVar37 + 0.7853981852531433) * fVar2 + fVar1);
  }
  bVar9 = true;
LAB_000985fc:
  if (!bVar9) {
    return 0;
  }
  dVar33 = 3.1415927410125732;
  dVar32 = (double)*rot;
  dVar37 = (double)fastfunc::FastWrapRot((float)dVar22,3.1415927);
  dVar37 = (double)fastfunc::FastSubRots((float)dVar32,(float)dVar37);
  if (1.1344640254974365 <= dVar37) {
    return 0;
  }
  dVar37 = 2.4000000953674316;
  if (2.4000000953674316 <= dVar36) {
    return 0;
  }
  while( true ) {
    dVar41 = (double)(float)(dVar22 + dVar31);
    *(float *)((int)puVar5 + 0xcc) = (float)dVar38;
    dVar32 = dVar41;
    if ((double)(float)(dVar30 - dVar41) <= dVar41) {
      dVar32 = (double)(float)(dVar30 - dVar41);
    }
    if (dVar32 <= (double)(float)(dVar29 - dVar41)) {
      dVar32 = (double)(float)(dVar29 - dVar41);
    }
    dVar41 = (double)(float)(dVar32 * dVar32);
    dVar34 = (double)(float)(dVar41 * (double)(float)(dVar41 * dVar32));
    dVar21 = (double)(float)(dVar41 * dVar34);
    fVar1 = (float)(dVar35 + (double)(float)((double)((float)(dVar32 + (double)(float)((double)(
                                                  float)(dVar41 * dVar32) * dVar27)) +
                                                  (float)(dVar34 * dVar28) +
                                                  (float)(dVar21 * dVar26) +
                                                  (float)((double)(float)(dVar41 * dVar21) * dVar25)
                                                  ) * dVar36));
    *(float *)(puVar5 + 0x18) = fVar1;
    dVar32 = dVar22;
    if ((double)(float)(dVar30 - dVar22) <= dVar22) {
      dVar32 = (double)(float)(dVar30 - dVar22);
    }
    if (dVar32 <= (double)(float)(dVar29 - dVar22)) {
      dVar32 = (double)(float)(dVar29 - dVar22);
    }
    dVar41 = (double)(float)(dVar32 * dVar32);
    *(float *)(puVar5 + 0x16) = fVar1;
    *(float *)((int)puVar5 + 0xbc) = (float)dVar38;
    pMVar11 = g_heroMobyPtr;
    dVar34 = (double)(float)(dVar41 * (double)(float)(dVar41 * dVar32));
    dVar21 = (double)(float)(dVar41 * dVar34);
    fVar1 = (float)(dVar39 + (double)(float)((double)((float)(dVar32 + (double)(float)((double)(
                                                  float)(dVar41 * dVar32) * dVar27)) +
                                                  (float)(dVar34 * dVar28) +
                                                  (float)(dVar21 * dVar26) +
                                                  (float)((double)(float)(dVar41 * dVar21) * dVar25)
                                                  ) * dVar36));
    *(float *)((int)puVar5 + 0xc4) = fVar1;
    *(float *)((int)puVar5 + 0xb4) = fVar1;
    *(float *)(puVar5 + 0x19) = (float)(dVar40 + 0.5);
    *(float *)(puVar5 + 0x17) = (float)(dVar40 - 0.5);
    iVar16 = collproc::CollLine(uVar12 - 0x1a0,uVar12 - 0x1b0,4,pMVar11,0);
    if (iVar16 == 0) break;
    dVar36 = (double)(float)(dVar36 + 0.07000000029802322);
    if (dVar37 <= dVar36) {
      return 0;
    }
  }
  dVar40 = (double)fastfunc::FastWrapRot((float)dVar22,(float)dVar33);
  dVar40 = (double)fastfunc::FastSubRots((float)dVar40,*rot);
  if (0.5235987901687622 < dVar40) {
    return 0;
  }
  return 1;
}



//==== 00098878  ns=hero  size=0xab8
// sig: undefined Hero_CheckLedgeAhead(void)
// callers(1): 000aaec0 hero::HandleHeroMovement
// callees(7): 00057820 collproc::CollLine; 00060780 collproc::CollHotspot; 0007dde0 hero::Hero_GetHeroRelativePolarVector; 0007dff0 hero::Hero_Slope; 00084830 hero::Hero_RelativeZComponent; 00097bd0 hero::Hero_UpdateLedge; 005026a0 fastfunc::FastSubRots

void hero::Hero_CheckLedgeAhead(void)

{
  float fVar1;
  ulonglong *puVar2;
  float fVar3;
  uint uVar4;
  float fVar5;
  ulonglong uVar6;
  float *pfVar9;
  int iVar10;
  int iVar11;
  longlong lVar7;
  longlong lVar8;
  undefined4 uVar12;
  int iVar13;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  double dVar14;
  double dVar15;
  ulonglong in_f30;
  double dVar16;
  ulonglong in_f31;
  double dVar17;
  double dVar18;
  undefined1 auVar19 [16];
  float fVar20;
  float fVar21;
  
  uVar6 = ZEXT48(&stack0x00000000);
  lVar8 = uVar6 - 0x170;
  puVar2 = (ulonglong *)lVar8;
  *puVar2 = uVar6;
  puVar2[0x30] = in_LR;
  puVar2[0x2c] = in_f30;
  puVar2[0x2d] = in_f31;
  puVar2[0x29] = unaff_r29;
  fVar21 = g_heroGroundDist;
  puVar2[0x2b] = unaff_r31;
  puVar2[0x2a] = unaff_r30;
  puVar2[0x28] = unaff_r28;
  puVar2[0x27] = unaff_r27;
  puVar2[0x26] = unaff_r26;
  if ((0.4 <= fVar21) &&
     (fVar20 = Hero_RelativeZComponent((float *)&g_heroVelocity), fVar1 = g_heroPosition.y,
     fVar21 = g_heroPosition.x, mobyutil::g_FrameTime * -20.0 <= fVar20)) {
    if (DAT_0096a1c8 == 0) {
      *(float *)(puVar2 + 0x12) = g_heroPosition.x;
      fVar3 = g_heroPosition.z;
      *(float *)((int)puVar2 + 0x94) = fVar1;
      fVar20 = g_heroPosition.w;
      *(float *)(puVar2 + 0x13) = fVar3;
      *(float *)((int)puVar2 + 0x9c) = fVar20;
      fVar5 = DAT_00969de0;
      puVar2[0x24] = (longlong)(int)(animationSpeed * 20.5);
      iVar11 = *(int *)((int)puVar2 + 0x124);
      puVar2[0x24] = (longlong)iVar11;
      fVar20 = (float)(longlong)puVar2[0x24];
      fVar21 = fVar21 + fVar5 * fVar20;
      *(float *)(puVar2 + 0x22) = fVar21;
      *(float *)((int)puVar2 + 0x114) = fVar21;
      *(float *)(puVar2 + 0x23) = fVar21;
      *(float *)((int)puVar2 + 0x11c) = fVar21;
      auVar19 = auRam00000000 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar19 = (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar19 = (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar19 = (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar19 = (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar19 = (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar19 = (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar19 = (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar19 = (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar19 = (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar19 = (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar19 = (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar19 = (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      fVar1 = fVar1 + DAT_00969de4 * fVar20;
      auVar19 = (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar19 = (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar19 = (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar19 = (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar19 = (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar19 = (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar19 = (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar19 = (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar19 = (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar19 = (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar19 = (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar19 = (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar19 = (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar19 = (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar19 = (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar19 = (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar19 = (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar19 = (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar19 = (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar19 = (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar19 = (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar19 = (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar19 = (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      fVar21 = (float)storeVectorElementWordIndexed
                                (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60,0,
                                 uVar6 - 0xe0);
      pfVar9 = (float *)(uVar6 - 0xe0);
      *pfVar9 = fVar21;
      *(float *)(puVar2 + 0x22) = fVar1;
      *(float *)((int)puVar2 + 0x114) = fVar1;
      *(float *)(puVar2 + 0x23) = fVar1;
      *(float *)((int)puVar2 + 0x11c) = fVar1;
      auVar19 = auRam00000000 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar19 = (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar19 = (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar19 = (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar19 = (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar19 = (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar19 = (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar19 = (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar19 = (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar19 = (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar19 = (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      fVar21 = DAT_0096a180 * fVar20;
      auVar19 = (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar19 = (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      fVar1 = DAT_00969dc8 * fVar20;
      auVar19 = (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar19 = (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar19 = (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar19 = (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar19 = (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar19 = (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar19 = (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar19 = (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar19 = (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar19 = (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar19 = (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar19 = (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar19 = (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar19 = (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar19 = (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar19 = (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar19 = (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar19 = (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar19 = (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar19 = (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar19 = (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar19 = (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar19 = (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      uVar12 = storeVectorElementWordIndexed
                         (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60,0,
                          uVar6 - 0xdc);
      *(undefined4 *)(uVar6 - 0xdc) = uVar12;
      fVar21 = (fVar3 + fVar1) - fVar21 * fVar20 * 0.5;
      *(float *)(puVar2 + 0x22) = fVar21;
      *(float *)((int)puVar2 + 0x114) = fVar21;
      *(float *)(puVar2 + 0x23) = fVar21;
      *(float *)((int)puVar2 + 0x11c) = fVar21;
      auVar19 = auRam00000000 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar19 = (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar19 = (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar19 = (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar19 = (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar19 = (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar19 = (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar19 = (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar19 = (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar19 = (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar19 = (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar19 = (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar19 = (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar19 = (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar19 = (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar19 = (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar19 = (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar19 = (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar19 = (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar19 = (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar19 = (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar19 = (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar19 = (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar19 = (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar19 = (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar19 = (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar19 = (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar19 = (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar19 = (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar19 = (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar19 = (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar19 = (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar19 = (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar19 = (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar19 = (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar19 = (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      uVar12 = storeVectorElementWordIndexed
                         (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60,0,
                          uVar6 - 0xd8);
      *(undefined4 *)(uVar6 - 0xd8) = uVar12;
      iVar10 = Hero_UpdateLedge(pfVar9,&g_heroRotation.z);
      if (iVar10 == 0) {
        iVar10 = 0;
        *(undefined4 *)(puVar2 + 0x14) = 0;
        *(undefined4 *)((int)puVar2 + 0xa4) = 0;
        *(undefined4 *)(puVar2 + 0x15) = 0;
        *(undefined4 *)((int)puVar2 + 0xac) = 0;
        *(undefined4 *)(puVar2 + 0x16) = 0;
        *(undefined4 *)((int)puVar2 + 0xb4) = 0;
        *(undefined4 *)(puVar2 + 0x17) = 0;
        *(undefined4 *)((int)puVar2 + 0xbc) = 0;
        dVar16 = 0.0;
        dVar17 = 0.30000001192092896;
        Hero_GetHeroRelativePolarVector(g_heroCollRadius - 0.02,0.0,0.3,(float *)(uVar6 - 0xd0));
        Hero_GetHeroRelativePolarVector(1.0,(float)dVar16,(float)dVar17,(float *)(uVar6 - 0xc0));
        iVar11 = collproc::CollLine(uVar6 - 0xd0,uVar6 - 0xc0,2,0,0);
        if (iVar11 != 0) {
          dVar17 = 1.7000000476837158;
          if ((g_heroState != WALL_JUMP) && ((DAT_00969f35 == '\0' || (DAT_00969f34 != '\0')))) {
            dVar17 = 3.0;
          }
          Hero_GetHeroRelativePolarVector
                    ((float)dVar16,(float)dVar16,(float)dVar17,(float *)(uVar6 - 0x100));
          Hero_GetHeroRelativePolarVector
                    (g_heroCollRadius + 1.4,(float)dVar16,(float)dVar17,(float *)(uVar6 - 0xf0));
          iVar11 = collproc::CollLine(uVar6 - 0x100,uVar6 - 0xf0,2,0,0);
          if ((((iVar11 != 0) && (iVar11 = collproc::CollHotspot(), iVar11 != 10)) &&
              (iVar11 != 0xc)) && (fVar21 = Hero_Slope(&CollOutput.normal.x), 1.3089969 <= fVar21))
          {
            fVar21 = g_heroGravityMtx * CollOutput.normal.x + DAT_00969d30 * CollOutput.normal.y +
                     DAT_00969d40 * CollOutput.normal.z + DAT_00969d50 * CollOutput.normal.w;
            fVar1 = DAT_00969d24 * CollOutput.normal.x + DAT_00969d34 * CollOutput.normal.y +
                    DAT_00969d44 * CollOutput.normal.z + DAT_00969d54 * CollOutput.normal.w;
            dVar17 = ABS((double)fVar21);
            dVar15 = ABS((double)fVar1);
            *(float *)((int)puVar2 + 0xc4) = fVar21;
            *(float *)(puVar2 + 0x19) = fVar1;
            *(float *)((int)puVar2 + 0xcc) = (float)(dVar17 - dVar15);
            iVar11 = (int)(((ulonglong)(*(uint *)((int)puVar2 + 0xc4) >> 0x1c) & 8 |
                           (ulonglong)(*(uint *)((int)puVar2 + 0xcc) >> 0x1e) & 2 |
                           (ulonglong)(*(uint *)(puVar2 + 0x19) >> 0x1d) & 4) << 2);
            fVar1 = *(float *)(&mobyutil::g_atanQuadrantTable + iVar11);
            fVar21 = *(float *)(&DAT_00735904 + iVar11);
            if (dVar16 <= (double)*(float *)((int)puVar2 + 0xcc)) {
              dVar17 = ABS((double)*(float *)(puVar2 + 0x19));
              dVar15 = ABS((double)*(float *)((int)puVar2 + 0xc4));
            }
            dVar18 = 0.7853981852531433;
            dVar14 = dVar16;
            if (dVar16 < dVar15) {
              iVar11 = 4;
              fVar20 = (float)(dVar17 - dVar15) / (float)(dVar17 + dVar15);
              lVar7 = lVar8;
              do {
                iVar11 = iVar11 + -1;
                *(float *)((int)lVar7 + 0xf0) = fVar20;
                lVar7 = lVar7 + 4;
              } while (iVar11 != 0);
              fVar20 = fVar20 * fVar20;
              lVar7 = uVar6 - 0x160;
              iVar11 = 4;
              fVar3 = fVar20 * fVar20;
              *(float *)((int)puVar2 + 0xf4) = *(float *)((int)puVar2 + 0xf4) * fVar20;
              *(float *)(puVar2 + 0x1f) = *(float *)(puVar2 + 0x1f) * fVar3;
              *(float *)((int)puVar2 + 0xfc) = *(float *)((int)puVar2 + 0xfc) * fVar3 * fVar20;
              do {
                iVar11 = iVar11 + -1;
                *(float *)((int)lVar7 + 0xf0) = *(float *)((int)lVar7 + 0xe0) * fVar3 * fVar3;
                lVar7 = lVar7 + 4;
              } while (iVar11 != 0);
              iVar11 = 0;
              iVar13 = 8;
              lVar7 = lVar8;
              do {
                iVar13 = iVar13 + -1;
                pfVar9 = (float *)((int)&DAT_007358e0 + iVar11);
                iVar11 = iVar11 + 4;
                *(float *)((int)lVar7 + 0xf0) = *(float *)((int)lVar7 + 0xf0) * *pfVar9;
                lVar7 = lVar7 + 4;
              } while (iVar13 != 0);
              iVar11 = 8;
              lVar7 = lVar8;
              dVar17 = dVar16;
              do {
                iVar11 = iVar11 + -1;
                iVar13 = (int)lVar7;
                lVar7 = lVar7 + 4;
                dVar17 = (double)(float)(dVar17 + (double)*(float *)(iVar13 + 0xf0));
              } while (iVar11 != 0);
              dVar14 = (double)((float)(dVar17 + 0.7853981852531433) * fVar1 + fVar21);
            }
            dVar17 = (double)fastfunc::FastSubRots((float)dVar14,3.1415927);
            fVar21 = CollOutput.normal.x;
            if (dVar17 <= 0.8726646304130554) {
              fVar1 = 0.72;
              if (g_heroState == WALL_JUMP) {
                fVar1 = 0.95;
              }
              fVar20 = CollOutput.ip.y - *(float *)((int)puVar2 + 0x74);
              if (SQRT((CollOutput.ip.x - *(float *)(puVar2 + 0xe)) *
                       (CollOutput.ip.x - *(float *)(puVar2 + 0xe)) + fVar20 * fVar20) <= fVar1) {
                dVar14 = ABS((double)CollOutput.normal.x);
                DAT_0096a140 = CollOutput.normal.x;
                dVar15 = ABS((double)CollOutput.normal.y);
                DAT_0096a144 = CollOutput.normal.y;
                DAT_0096a148 = CollOutput.normal.z;
                uVar4 = (uint)CollOutput.normal.y >> 0x1d;
                *(float *)(puVar2 + 0x18) = (float)(dVar14 - dVar15);
                iVar11 = (int)(((ulonglong)((uint)fVar21 >> 0x1c) & 8 |
                               (ulonglong)(*(uint *)(puVar2 + 0x18) >> 0x1e) & 2 |
                               (ulonglong)uVar4 & 4) << 2);
                fVar1 = *(float *)(&mobyutil::g_atanQuadrantTable + iVar11);
                fVar21 = *(float *)(&DAT_00735904 + iVar11);
                dVar17 = dVar14;
                if (dVar16 <= (double)*(float *)(puVar2 + 0x18)) {
                  dVar17 = dVar15;
                  dVar15 = dVar14;
                }
                if (dVar16 < dVar15) {
                  iVar11 = 4;
                  fVar20 = (float)(dVar17 - dVar15) / (float)(dVar17 + dVar15);
                  lVar7 = lVar8;
                  do {
                    iVar11 = iVar11 + -1;
                    *(float *)((int)lVar7 + 0xd0) = fVar20;
                    lVar7 = lVar7 + 4;
                  } while (iVar11 != 0);
                  fVar20 = fVar20 * fVar20;
                  lVar7 = uVar6 - 0x160;
                  iVar11 = 4;
                  fVar3 = fVar20 * fVar20;
                  *(float *)((int)puVar2 + 0xd4) = *(float *)((int)puVar2 + 0xd4) * fVar20;
                  *(float *)(puVar2 + 0x1b) = *(float *)(puVar2 + 0x1b) * fVar3;
                  *(float *)((int)puVar2 + 0xdc) = *(float *)((int)puVar2 + 0xdc) * fVar3 * fVar20;
                  do {
                    iVar11 = iVar11 + -1;
                    *(float *)((int)lVar7 + 0xd0) = *(float *)((int)lVar7 + 0xc0) * fVar3 * fVar3;
                    lVar7 = lVar7 + 4;
                  } while (iVar11 != 0);
                  iVar11 = 8;
                  lVar7 = lVar8;
                  do {
                    pfVar9 = (float *)((int)&DAT_007358e0 + iVar10);
                    iVar11 = iVar11 + -1;
                    iVar10 = iVar10 + 4;
                    *(float *)((int)lVar7 + 0xd0) = *(float *)((int)lVar7 + 0xd0) * *pfVar9;
                    lVar7 = lVar7 + 4;
                  } while (iVar11 != 0);
                  iVar11 = 8;
                  do {
                    iVar11 = iVar11 + -1;
                    iVar10 = (int)lVar8;
                    lVar8 = lVar8 + 4;
                    dVar16 = (double)(float)(dVar16 + (double)*(float *)(iVar10 + 0xd0));
                  } while (iVar11 != 0);
                  dVar16 = (double)((float)(dVar16 + dVar18) * fVar1 + fVar21);
                }
                DAT_0096a14c = (float)dVar16;
                if ((((g_heroStateType == 4) || (DAT_0096bd74 == 4)) || (DAT_0096bd80 == 4)) &&
                   ((DAT_0096bf94 == 0 ||
                    (dVar16 = (double)fastfunc::FastSubRots(DAT_0096a15c,(float)dVar16),
                    2.96705961227417 <= dVar16)))) {
                  if (g_heroState == WALL_JUMP) {
                    puVar2[0x24] = (longlong)(int)(animationSpeed * 7.5);
                    uVar12 = *(undefined4 *)((int)puVar2 + 0x124);
                  }
                  else {
                    puVar2[0x24] = (longlong)(int)(animationSpeed * 6.5);
                    uVar12 = *(undefined4 *)((int)puVar2 + 0x124);
                  }
                  *(undefined4 *)(puVar2 + 0x22) = uVar12;
                  *(undefined4 *)((int)puVar2 + 0x114) = uVar12;
                  *(undefined4 *)(puVar2 + 0x23) = uVar12;
                  *(undefined4 *)((int)puVar2 + 0x11c) = uVar12;
                  auVar19 = auRam00000000 >> 0x60 & (undefined1  [16])0xffffffff;
                  auVar19 = (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60) >> 0x60
                            & (undefined1  [16])0xffffffff;
                  auVar19 = (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60) >> 0x60
                            & (undefined1  [16])0xffffffff;
                  auVar19 = (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60) >> 0x60
                            & (undefined1  [16])0xffffffff;
                  auVar19 = (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60) >> 0x60
                            & (undefined1  [16])0xffffffff;
                  auVar19 = (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60) >> 0x60
                            & (undefined1  [16])0xffffffff;
                  auVar19 = (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60) >> 0x60
                            & (undefined1  [16])0xffffffff;
                  auVar19 = (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60) >> 0x60
                            & (undefined1  [16])0xffffffff;
                  auVar19 = (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60) >> 0x60
                            & (undefined1  [16])0xffffffff;
                  auVar19 = (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60) >> 0x60
                            & (undefined1  [16])0xffffffff;
                  auVar19 = (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60) >> 0x60
                            & (undefined1  [16])0xffffffff;
                  auVar19 = (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60) >> 0x60
                            & (undefined1  [16])0xffffffff;
                  auVar19 = (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60) >> 0x60
                            & (undefined1  [16])0xffffffff;
                  auVar19 = (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60) >> 0x60
                            & (undefined1  [16])0xffffffff;
                  auVar19 = (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60) >> 0x60
                            & (undefined1  [16])0xffffffff;
                  auVar19 = (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60) >> 0x60
                            & (undefined1  [16])0xffffffff;
                  auVar19 = (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60) >> 0x60
                            & (undefined1  [16])0xffffffff;
                  auVar19 = (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60) >> 0x60
                            & (undefined1  [16])0xffffffff;
                  auVar19 = (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60) >> 0x60
                            & (undefined1  [16])0xffffffff;
                  auVar19 = (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60) >> 0x60
                            & (undefined1  [16])0xffffffff;
                  auVar19 = (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60) >> 0x60
                            & (undefined1  [16])0xffffffff;
                  auVar19 = (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60) >> 0x60
                            & (undefined1  [16])0xffffffff;
                  auVar19 = (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60) >> 0x60
                            & (undefined1  [16])0xffffffff;
                  auVar19 = (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60) >> 0x60
                            & (undefined1  [16])0xffffffff;
                  auVar19 = (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60) >> 0x60
                            & (undefined1  [16])0xffffffff;
                  auVar19 = (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60) >> 0x60
                            & (undefined1  [16])0xffffffff;
                  auVar19 = (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60) >> 0x60
                            & (undefined1  [16])0xffffffff;
                  auVar19 = (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60) >> 0x60
                            & (undefined1  [16])0xffffffff;
                  auVar19 = (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60) >> 0x60
                            & (undefined1  [16])0xffffffff;
                  auVar19 = (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60) >> 0x60
                            & (undefined1  [16])0xffffffff;
                  auVar19 = (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60) >> 0x60
                            & (undefined1  [16])0xffffffff;
                  auVar19 = (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60) >> 0x60
                            & (undefined1  [16])0xffffffff;
                  auVar19 = (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60) >> 0x60
                            & (undefined1  [16])0xffffffff;
                  auVar19 = (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60) >> 0x60
                            & (undefined1  [16])0xffffffff;
                  auVar19 = (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60) >> 0x60
                            & (undefined1  [16])0xffffffff;
                  auVar19 = (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60) >> 0x60
                            & (undefined1  [16])0xffffffff;
                  DAT_00969e94 = storeVectorElementWordIndexed
                                           (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 |
                                            auVar19 << 0x60,0x1b4,0x969ce0);
                }
              }
            }
          }
        }
      }
      else {
        iVar11 = iVar11 + 2;
        *(int *)(puVar2 + 0x22) = iVar11;
        DAT_00969e94 = 0;
        *(int *)((int)puVar2 + 0x114) = iVar11;
        *(int *)(puVar2 + 0x23) = iVar11;
        *(int *)((int)puVar2 + 0x11c) = iVar11;
        auVar19 = auRam00000000 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar19 = (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar19 = (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar19 = (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar19 = (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar19 = (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar19 = (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar19 = (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar19 = (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar19 = (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar19 = (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar19 = (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar19 = (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar19 = (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar19 = (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar19 = (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar19 = (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar19 = (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar19 = (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar19 = (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar19 = (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar19 = (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar19 = (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar19 = (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar19 = (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar19 = (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar19 = (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar19 = (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar19 = (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar19 = (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar19 = (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar19 = (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar19 = (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar19 = (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar19 = (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar19 = vectorSplatHalfWord(auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60,
                                      1);
        DAT_00969ed0 = storeVectorElementHalfWordIndexed(auVar19,0x1f0,0x969ce0);
      }
    }
    else {
      DAT_00969e94 = 0;
    }
  }
  return;
}



//==== 00099330  ns=stub  size=0x4
// sig: undefined STUB_00099330(void)
// callers(0): 
// callees(0): 

void stub::STUB_00099330(void)

{
  return;
}



//==== 00099334  ns=hero  size=0x3c
// sig: MobyInstance * Hero_GetGadgetMoby(int slot)
// callers(1): 000b72b0 hero::TransitionMovement
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

MobyInstance * hero::Hero_GetGadgetMoby(int slot)

{
  int iVar1;
  MobyInstance *pMVar2;
  
  iVar1 = (int)((longlong)slot << 6) + (int)((longlong)slot << 4);
  pMVar2 = (MobyInstance *)0x0;
  if (*(int *)((int)&DAT_0096ad94 + iVar1) == 2) {
    pMVar2 = *(MobyInstance **)((int)&g_currentWeaponMoby + iVar1);
  }
  return pMVar2;
}



//==== 00099370  ns=hero  size=0x58
// sig: float Hero_RotZRingVal(int frame)
// callers(1): 000b72b0 hero::TransitionMovement
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

float hero::Hero_RotZRingVal(int frame)

{
  uint uVar1;
  
  if (0x1f < frame) {
    frame = 0x1f;
  }
  if (g_heroRotZHistoryCount < frame) {
    frame = g_heroRotZHistoryCount;
  }
  uVar1 = (g_heroRotZHistoryIdx - frame) + 0x1f;
  return *(float *)(&g_heroRotZHistory +
                   (uVar1 + (((int)uVar1 >> 5) + (uint)((int)uVar1 < 0 && (uVar1 & 0x1f) != 0)) *
                            -0x20) * 4);
}



//==== 000993d8  ns=hero  size=0x800
// sig: undefined Hero_ComputeTargetScore(void)
// callers(4): 00099be0 hero::Hero_GetAutoTargetMoby; 0009ef10 hero::Hero_SetAttackRot; 000a1ff0 hero::Hero_FindSwingshotTarget; 000a2298 hero::Hero_FindPullTarget
// callees(2): 0010af88 mobyutil::MB_isCrate; 005026a0 fastfunc::FastSubRots

double hero::Hero_ComputeTargetScore
                 (double param_1,double param_2,double param_3,double param_4,int param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  ulonglong *puVar4;
  float fVar5;
  float *pfVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  undefined4 *in_r8;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  double dVar13;
  ulonglong in_f24;
  double dVar14;
  ulonglong in_f25;
  double dVar15;
  ulonglong in_f26;
  double dVar16;
  ulonglong in_f27;
  double dVar17;
  ulonglong in_f28;
  double dVar18;
  ulonglong in_f29;
  double dVar19;
  ulonglong in_f30;
  ulonglong in_f31;
  
  uVar7 = ZEXT48(&stack0x00000000);
  lVar9 = uVar7 - 400;
  puVar4 = (ulonglong *)lVar9;
  *puVar4 = uVar7;
  puVar4[0x34] = in_LR;
  puVar4[0x2a] = in_f24;
  puVar4[0x2b] = in_f25;
  puVar4[0x2c] = in_f26;
  puVar4[0x2d] = in_f27;
  puVar4[0x2e] = in_f28;
  puVar4[0x2f] = in_f29;
  puVar4[0x30] = in_f30;
  puVar4[0x31] = in_f31;
  puVar4[0x26] = unaff_r28;
  puVar4[0x29] = unaff_r31;
  puVar4[0x28] = unaff_r30;
  *in_r8 = 0;
  fVar1 = g_heroPosition.z;
  dVar19 = (double)g_heroPosition.x;
  bVar10 = g_heroState == HYPER_STRIKE;
  puVar4[0x27] = unaff_r29;
  puVar4[0x25] = unaff_r27;
  dVar18 = (double)g_heroPosition.y;
  if (bVar10) {
    fVar1 = g_heroGroundZ;
  }
  dVar17 = (double)fVar1;
  fVar1 = (float)(dVar19 - (double)*(float *)(param_5 + 0x10));
  fVar2 = (float)(dVar18 - (double)*(float *)(param_5 + 0x14));
  fVar3 = (float)(dVar17 - (double)*(float *)(param_5 + 0x18));
  dVar16 = (double)SQRT(fVar1 * fVar1 + fVar2 * fVar2 + fVar3 * fVar3);
  if (param_2 < dVar16) {
    *in_r8 = 1;
  }
  fVar1 = (float)((double)*(float *)(param_5 + 0x10) - dVar19);
  fVar2 = (float)((double)*(float *)(param_5 + 0x14) - dVar18);
  fVar5 = ABS(fVar1);
  fVar3 = ABS(fVar2);
  *(float *)((int)puVar4 + 0x94) = fVar1;
  *(float *)(puVar4 + 0x13) = fVar2;
  *(float *)((int)puVar4 + 0x9c) = fVar5 - fVar3;
  dVar15 = 0.0;
  iVar11 = (int)(((ulonglong)(*(uint *)((int)puVar4 + 0x94) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)((int)puVar4 + 0x9c) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)(puVar4 + 0x13) >> 0x1d) & 4) << 2);
  fVar2 = *(float *)(&mobyutil::g_atanQuadrantTable + iVar11);
  fVar1 = *(float *)(&DAT_00735904 + iVar11);
  if (0.0 <= *(float *)((int)puVar4 + 0x9c)) {
    fVar5 = ABS(*(float *)(puVar4 + 0x13));
    fVar3 = ABS(*(float *)((int)puVar4 + 0x94));
  }
  dVar14 = 0.7853981852531433;
  dVar13 = dVar15;
  if (0.0 < fVar3) {
    iVar11 = 4;
    fVar3 = (fVar5 - fVar3) / (fVar5 + fVar3);
    lVar8 = lVar9;
    do {
      iVar11 = iVar11 + -1;
      *(float *)((int)lVar8 + 0x100) = fVar3;
      lVar8 = lVar8 + 4;
    } while (iVar11 != 0);
    fVar3 = fVar3 * fVar3;
    lVar8 = uVar7 - 0x180;
    iVar11 = 4;
    fVar5 = fVar3 * fVar3;
    *(float *)((int)puVar4 + 0x104) = *(float *)((int)puVar4 + 0x104) * fVar3;
    *(float *)(puVar4 + 0x21) = *(float *)(puVar4 + 0x21) * fVar5;
    *(float *)((int)puVar4 + 0x10c) = *(float *)((int)puVar4 + 0x10c) * fVar5 * fVar3;
    do {
      iVar11 = iVar11 + -1;
      *(float *)((int)lVar8 + 0x100) = *(float *)((int)lVar8 + 0xf0) * fVar5 * fVar5;
      lVar8 = lVar8 + 4;
    } while (iVar11 != 0);
    iVar11 = 0;
    iVar12 = 8;
    lVar8 = lVar9;
    do {
      pfVar6 = (float *)((int)&DAT_007358e0 + iVar11);
      iVar12 = iVar12 + -1;
      iVar11 = iVar11 + 4;
      *(float *)((int)lVar8 + 0x100) = *(float *)((int)lVar8 + 0x100) * *pfVar6;
      lVar8 = lVar8 + 4;
    } while (iVar12 != 0);
    iVar11 = 8;
    lVar8 = lVar9;
    do {
      iVar11 = iVar11 + -1;
      iVar12 = (int)lVar8;
      lVar8 = lVar8 + 4;
      dVar13 = (double)(float)(dVar13 + (double)*(float *)(iVar12 + 0x100));
    } while (iVar11 != 0);
    dVar13 = (double)((float)(dVar13 + 0.7853981852531433) * fVar2 + fVar1);
  }
  dVar13 = (double)fastfunc::FastSubRots((float)dVar13,(float)param_1);
  fVar1 = (float)(dVar19 - (double)*(float *)(param_5 + 0x10));
  fVar2 = (float)(dVar18 - (double)*(float *)(param_5 + 0x14));
  fVar3 = (float)((double)*(float *)(param_5 + 0x18) - dVar17);
  fVar1 = SQRT(fVar1 * fVar1 + fVar2 * fVar2);
  *(float *)((int)puVar4 + 0x8c) = fVar3;
  dVar19 = ABS((double)fVar3);
  dVar18 = ABS((double)fVar1);
  *(float *)(puVar4 + 0x11) = fVar1;
  *(float *)(puVar4 + 0x12) = (float)(dVar18 - dVar19);
  iVar11 = (int)(((ulonglong)(*(uint *)(puVar4 + 0x11) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar4 + 0x12) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)((int)puVar4 + 0x8c) >> 0x1d) & 4) << 2);
  fVar2 = *(float *)(&mobyutil::g_atanQuadrantTable + iVar11);
  fVar1 = *(float *)(&DAT_00735904 + iVar11);
  if (dVar15 <= (double)*(float *)(puVar4 + 0x12)) {
    dVar18 = ABS((double)*(float *)((int)puVar4 + 0x8c));
    dVar19 = ABS((double)*(float *)(puVar4 + 0x11));
  }
  dVar17 = dVar15;
  if (dVar15 < dVar19) {
    iVar11 = 4;
    fVar3 = (float)(dVar18 - dVar19) / (float)(dVar18 + dVar19);
    lVar8 = lVar9;
    do {
      iVar11 = iVar11 + -1;
      *(float *)((int)lVar8 + 0xe0) = fVar3;
      lVar8 = lVar8 + 4;
    } while (iVar11 != 0);
    fVar3 = fVar3 * fVar3;
    lVar8 = uVar7 - 0x180;
    iVar11 = 4;
    fVar5 = fVar3 * fVar3;
    *(float *)((int)puVar4 + 0xe4) = *(float *)((int)puVar4 + 0xe4) * fVar3;
    *(float *)(puVar4 + 0x1d) = *(float *)(puVar4 + 0x1d) * fVar5;
    *(float *)((int)puVar4 + 0xec) = *(float *)((int)puVar4 + 0xec) * fVar5 * fVar3;
    do {
      iVar11 = iVar11 + -1;
      *(float *)((int)lVar8 + 0xe0) = *(float *)((int)lVar8 + 0xd0) * fVar5 * fVar5;
      lVar8 = lVar8 + 4;
    } while (iVar11 != 0);
    iVar11 = 0;
    iVar12 = 8;
    lVar8 = lVar9;
    do {
      iVar12 = iVar12 + -1;
      pfVar6 = (float *)((int)&DAT_007358e0 + iVar11);
      iVar11 = iVar11 + 4;
      *(float *)((int)lVar8 + 0xe0) = *(float *)((int)lVar8 + 0xe0) * *pfVar6;
      lVar8 = lVar8 + 4;
    } while (iVar12 != 0);
    iVar11 = 8;
    lVar8 = lVar9;
    dVar18 = dVar15;
    do {
      iVar11 = iVar11 + -1;
      iVar12 = (int)lVar8;
      lVar8 = lVar8 + 4;
      dVar18 = (double)(float)(dVar18 + (double)*(float *)(iVar12 + 0xe0));
    } while (iVar11 != 0);
    dVar17 = (double)((float)(dVar18 + dVar14) * fVar2 + fVar1);
  }
  dVar18 = dVar13;
  dVar19 = (double)fastfunc::FastSubRots((float)dVar17,(float)dVar15);
  if ((g_heroState == FIRST_PERSON_VIEW) || (g_heroState == WEAPON_FIRST_PERSON_VIEW)) {
    fVar1 = *(float *)(param_5 + 0x10) - GameCamera.posX;
    fVar2 = *(float *)(param_5 + 0x14) - GameCamera.posY;
    dVar18 = ABS((double)fVar1);
    dVar19 = ABS((double)fVar2);
    *(float *)((int)puVar4 + 0x7c) = fVar1;
    *(float *)(puVar4 + 0x10) = fVar2;
    *(float *)((int)puVar4 + 0x84) = (float)(dVar18 - dVar19);
    iVar11 = (int)(((ulonglong)(*(uint *)((int)puVar4 + 0x7c) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)((int)puVar4 + 0x84) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)(puVar4 + 0x10) >> 0x1d) & 4) << 2);
    fVar2 = *(float *)(&mobyutil::g_atanQuadrantTable + iVar11);
    fVar1 = *(float *)(&DAT_00735904 + iVar11);
    if (dVar15 <= (double)*(float *)((int)puVar4 + 0x84)) {
      dVar18 = ABS((double)*(float *)(puVar4 + 0x10));
      dVar19 = ABS((double)*(float *)((int)puVar4 + 0x7c));
    }
    dVar17 = dVar15;
    if (dVar15 < dVar19) {
      iVar11 = 4;
      fVar3 = (float)(dVar18 - dVar19) / (float)(dVar18 + dVar19);
      lVar8 = lVar9;
      do {
        iVar11 = iVar11 + -1;
        *(float *)((int)lVar8 + 0xc0) = fVar3;
        lVar8 = lVar8 + 4;
      } while (iVar11 != 0);
      fVar3 = fVar3 * fVar3;
      lVar8 = uVar7 - 0x180;
      iVar11 = 4;
      fVar5 = fVar3 * fVar3;
      *(float *)((int)puVar4 + 0xc4) = *(float *)((int)puVar4 + 0xc4) * fVar3;
      *(float *)(puVar4 + 0x19) = *(float *)(puVar4 + 0x19) * fVar5;
      *(float *)((int)puVar4 + 0xcc) = *(float *)((int)puVar4 + 0xcc) * fVar5 * fVar3;
      do {
        iVar11 = iVar11 + -1;
        *(float *)((int)lVar8 + 0xc0) = *(float *)((int)lVar8 + 0xb0) * fVar5 * fVar5;
        lVar8 = lVar8 + 4;
      } while (iVar11 != 0);
      iVar11 = 0;
      iVar12 = 8;
      lVar8 = lVar9;
      do {
        iVar12 = iVar12 + -1;
        pfVar6 = (float *)((int)&DAT_007358e0 + iVar11);
        iVar11 = iVar11 + 4;
        *(float *)((int)lVar8 + 0xc0) = *(float *)((int)lVar8 + 0xc0) * *pfVar6;
        lVar8 = lVar8 + 4;
      } while (iVar12 != 0);
      iVar11 = 8;
      lVar8 = lVar9;
      dVar18 = dVar15;
      do {
        iVar11 = iVar11 + -1;
        iVar12 = (int)lVar8;
        lVar8 = lVar8 + 4;
        dVar18 = (double)(float)(dVar18 + (double)*(float *)(iVar12 + 0xc0));
      } while (iVar11 != 0);
      dVar17 = (double)((float)(dVar18 + dVar14) * fVar2 + fVar1);
    }
    dVar17 = (double)fastfunc::FastSubRots((float)dVar17,GameCamera.rot.radius);
    fVar1 = GameCamera.posX - *(float *)(param_5 + 0x10);
    fVar2 = GameCamera.posY - *(float *)(param_5 + 0x14);
    fVar1 = SQRT(fVar1 * fVar1 + fVar2 * fVar2);
    fVar2 = *(float *)(param_5 + 0x18) - GameCamera.posZ;
    dVar19 = ABS((double)fVar2);
    *(float *)((int)puVar4 + 0x74) = fVar2;
    dVar18 = ABS((double)fVar1);
    *(float *)(puVar4 + 0xe) = fVar1;
    *(float *)(puVar4 + 0xf) = (float)(dVar18 - dVar19);
    iVar11 = (int)(((ulonglong)(*(uint *)(puVar4 + 0xe) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)(puVar4 + 0xf) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)((int)puVar4 + 0x74) >> 0x1d) & 4) << 2);
    fVar2 = *(float *)(&mobyutil::g_atanQuadrantTable + iVar11);
    fVar1 = *(float *)(&DAT_00735904 + iVar11);
    if (dVar15 <= (double)*(float *)(puVar4 + 0xf)) {
      dVar18 = ABS((double)*(float *)((int)puVar4 + 0x74));
      dVar19 = ABS((double)*(float *)(puVar4 + 0xe));
    }
    dVar13 = dVar15;
    if (dVar15 < dVar19) {
      iVar11 = 4;
      fVar3 = (float)(dVar18 - dVar19) / (float)(dVar18 + dVar19);
      lVar8 = lVar9;
      do {
        iVar11 = iVar11 + -1;
        *(float *)((int)lVar8 + 0xa0) = fVar3;
        lVar8 = lVar8 + 4;
      } while (iVar11 != 0);
      fVar3 = fVar3 * fVar3;
      lVar8 = uVar7 - 0x180;
      iVar11 = 4;
      fVar5 = fVar3 * fVar3;
      *(float *)((int)puVar4 + 0xa4) = *(float *)((int)puVar4 + 0xa4) * fVar3;
      *(float *)(puVar4 + 0x15) = *(float *)(puVar4 + 0x15) * fVar5;
      *(float *)((int)puVar4 + 0xac) = *(float *)((int)puVar4 + 0xac) * fVar5 * fVar3;
      do {
        iVar11 = iVar11 + -1;
        *(float *)((int)lVar8 + 0xa0) = *(float *)((int)lVar8 + 0x90) * fVar5 * fVar5;
        lVar8 = lVar8 + 4;
      } while (iVar11 != 0);
      iVar11 = 0;
      iVar12 = 8;
      lVar8 = lVar9;
      do {
        pfVar6 = (float *)((int)&DAT_007358e0 + iVar11);
        iVar12 = iVar12 + -1;
        iVar11 = iVar11 + 4;
        *(float *)((int)lVar8 + 0xa0) = *(float *)((int)lVar8 + 0xa0) * *pfVar6;
        lVar8 = lVar8 + 4;
      } while (iVar12 != 0);
      iVar11 = 8;
      dVar18 = dVar15;
      do {
        iVar11 = iVar11 + -1;
        iVar12 = (int)lVar9;
        lVar9 = lVar9 + 4;
        dVar18 = (double)(float)(dVar18 + (double)*(float *)(iVar12 + 0xa0));
      } while (iVar11 != 0);
      dVar13 = (double)((float)(dVar18 + dVar14) * fVar2 + fVar1);
    }
    dVar19 = (double)fastfunc::FastSubRots((float)dVar13,-GameCamera.rot.elevation);
    dVar18 = (double)(float)(dVar19 + dVar17);
    dVar13 = dVar19;
    if (dVar19 < dVar17) {
      dVar13 = dVar17;
    }
  }
  if (dVar15 < param_3 && param_3 < dVar13) {
    *in_r8 = 1;
  }
  if (dVar15 < param_4 && param_4 < dVar19) {
    *in_r8 = 1;
  }
  dVar18 = (double)(float)(dVar16 + (double)(float)(dVar18 * dVar16));
  bVar10 = mobyutil::MB_isCrate(param_5);
  if (bVar10) {
    dVar18 = (double)(float)(dVar18 + 7.0);
  }
  return dVar18;
}



//==== 00099be0  ns=hero  size=0x128
// sig: MobyInstance * Hero_GetAutoTargetMoby(float a, float b, float c, float d)
// callers(0): 
// callees(2): 000993d8 hero::Hero_ComputeTargetScore; 000fcccc mobyutil::MB_GetPvarsIfMobyHasThem

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

MobyInstance * hero::Hero_GetAutoTargetMoby(float a,float b,float c,float d)

{
  MobyInstance *moby;
  float *pfVar1;
  MobyInstance *pMVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  int local_50;
  
  dVar8 = (double)d;
  dVar7 = (double)c;
  dVar6 = (double)b;
  dVar4 = (double)a;
  pMVar2 = (MobyInstance *)0x0;
  dVar9 = 100000000.0;
  if (DAT_00a49344 != (MobyInstance *)0x0) {
    iVar3 = 0;
    moby = DAT_00a49344;
    pMVar2 = (MobyInstance *)0x0;
    do {
      pfVar1 = (float *)mobyutil::MB_GetPvarsIfMobyHasThem(moby);
      if ((((pfVar1 != (float *)0x0) && (*pfVar1 != 0.0)) &&
          ((moby->modeBits & CAN_BE_AUTO_TARGETED) != NONE)) &&
         ((dVar5 = (double)Hero_ComputeTargetScore(dVar6,dVar4,dVar7,dVar8,moby), local_50 == 0 &&
          (dVar5 < dVar9)))) {
        dVar9 = dVar5;
        pMVar2 = moby;
      }
      moby = *(MobyInstance **)((int)&DAT_00a49348 + iVar3);
      iVar3 = iVar3 + 4;
    } while (moby != (MobyInstance *)0x0);
  }
  return pMVar2;
}



//==== 00099d10  ns=hero  size=0x190
// sig: undefined Hero_RestartFiringAnimLayer(void)
// callers(1): 000b72b0 hero::TransitionMovement
// callees(2): 000f0854 mobyfunc::MB_AllocAnimLayer; 000f0dd8 mobyfunc::MB_StartAnimLayer

void hero::Hero_RestartFiringAnimLayer(int param_1,int param_2)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if ((((g_heroType == '\0') && (DAT_0096bd88 != '\0')) && (DAT_0096bd8a != '\0')) &&
     ((param_1 == 0 && (param_2 != 0)))) {
    iVar4 = -1;
    if (DAT_0096ad94 == 2) {
      iVar4 = g_CurrentWeapon;
    }
    iVar4 = *(int *)(&DAT_00721028 + iVar4 * 0x4c);
    if (iVar4 != -1) {
      iVar2 = 0;
      do {
        if ((&DAT_0096a9e8)[iVar2] == 0) {
          if ((iVar2 == 1) && (DAT_0096bd8b != '\x02')) {
            return;
          }
          uVar1 = mobyfunc::MB_AllocAnimLayer
                            (g_heroMobyPtr,*(undefined4 *)(&DAT_00720d00 + iVar2 * 4));
          iVar3 = (int)uVar1;
          (&DAT_0096a9e8)[iVar2] = iVar3;
          if (iVar3 != 0) {
            DAT_0096a9f4 = 0;
            *(undefined4 *)(iVar3 + 8) = 0;
            mobyfunc::MB_StartAnimLayer
                      (g_heroMobyPtr,uVar1,(char)iVar4,0,(int)(animationSpeed * 15.5),1);
            *(undefined4 *)(iVar3 + 0x28) = 0x3f800000;
          }
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < 2);
    }
  }
  return;
}



//==== 00099ea8  ns=hero  size=0x22c
// sig: undefined Hero_PlayFiringAnim(void)
// callers(7): 000a30e0 hero::???_Hero_UpdateWeaponInput; 0029ead8 mobyupdate_unsorted::UpdateMoby_157; 002b2590 mobyupdate_unsorted::UpdateMoby_176; 002b6630 mobyupdate_unsorted::UpdateMoby_177; 002c7328 mobyupdate_unsorted::UpdateMoby_185; 003892e8 mobyupdate_unsorted::UpdateMoby_454; 00488eb0 mobyupdate_unsorted::UpdateMoby_849
// callees(4): 00085300 hero::Hero_TransAnim; 000f0854 mobyfunc::MB_AllocAnimLayer; 000f0900 mobyfunc::MB_FreeAnimLayer; 000f0dd8 mobyfunc::MB_StartAnimLayer

void hero::Hero_PlayFiringAnim(void)

{
  uint uVar1;
  float fVar2;
  int iVar3;
  MobyInstance *pMVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  
  iVar6 = -1;
  if (DAT_0096ad94 == 2) {
    iVar6 = g_CurrentWeapon;
  }
  if (iVar6 != 0 && iVar6 != -1) {
    iVar3 = iVar6 * 0x4c;
    iVar7 = *(int *)(&DAT_00721028 + iVar3);
    if (g_heroStateType == 0xc) {
      iVar7 = (&DAT_0072102c)[iVar6 * 0x13];
    }
    DAT_0096bd88 = 1;
    DAT_0096bd8a = (undefined1)*(undefined4 *)(&DAT_00721030 + iVar3);
    fVar2 = animationSpeed * 10.5;
    if (*(int *)(&DAT_00721018 + iVar3) == 0) {
      fVar2 = animationSpeed * 11.5;
    }
    DAT_0096bf78 = iVar6;
    if ((g_heroStateType == 0) && (DAT_0096bfa8 == 0)) {
      DAT_0096bf74 = (&DAT_00721024)[iVar6 * 0x13];
      Hero_TransAnim((float)(longlong)(int)fVar2,(&DAT_00721024)[iVar6 * 0x13],0);
    }
    else if (iVar7 != -1) {
      iVar6 = 0;
      do {
        if ((iVar6 == 1) && (DAT_0096bd8b != '\x02')) {
          return;
        }
        if ((&DAT_0096a9e8)[iVar6] != 0) {
          mobyfunc::MB_FreeAnimLayer(g_heroMobyPtr,&DAT_0096a9e8 + iVar6);
        }
        uVar5 = mobyfunc::MB_AllocAnimLayer
                          (g_heroMobyPtr,*(undefined4 *)(&DAT_00720d00 + iVar6 * 4));
        (&DAT_0096a9e8)[iVar6] = uVar5;
        pMVar4 = g_heroMobyPtr;
        uVar1 = (&DAT_0096a9e8)[iVar6];
        if (uVar1 != 0) {
          DAT_0096a9f4 = 0;
          DAT_0096bf74 = iVar7;
          *(undefined4 *)(uVar1 + 8) = 0x3f800000;
          mobyfunc::MB_StartAnimLayer(pMVar4,(ulonglong)uVar1,(char)iVar7,0,(int)fVar2,1);
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < 2);
    }
  }
  return;
}



//==== 0009a0d8  ns=hero  size=0x8c
// sig: void Hero_ScaleGetHitMomentum(float xy, float z, float * momentum, longlong unused1, longlong unused2, int scale)
// callers(1): 0009a1b0 hero::Hero_HandleDamage
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void hero::Hero_ScaleGetHitMomentum
               (float xy,float z,float *momentum,longlong unused1,longlong unused2,int scale)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  if (scale == 0) {
    fVar1 = *momentum;
    fVar2 = momentum[1];
    fVar3 = SQRT(fVar1 * fVar1 + fVar2 * fVar2);
    if (fVar3 == 0.0) {
      momentum[1] = 0.0;
      *momentum = 0.0;
    }
    else {
      fVar3 = xy / fVar3;
      momentum[3] = momentum[3];
      *momentum = fVar1 * fVar3;
      momentum[1] = fVar2 * fVar3;
    }
    momentum[2] = z;
  }
  else {
    *momentum = *momentum * xy;
    momentum[1] = momentum[1] * xy;
    momentum[2] = momentum[2] * z;
  }
  return;
}



//==== 0009a1b0  ns=hero  size=0x8ac
// sig: int Hero_HandleDamage(int transition)
// callers(1): 000be228 hero::HeroMovement
// callees(7): 0009a0d8 hero::Hero_ScaleGetHitMomentum; 000b72b0 hero::TransitionMovement; 000ec5b8 mobyattack::M1523_Blueball_HandleDeletion; 0015cdb0 sound::sound_Kill; 0015d12c sound::PlayMobySound; 00502578 fastfunc::FastWrapRot; 00502758 fastfunc::FastDoubleToInt

/* WARNING: Removing unreachable block (ram,0x0009a760) */
/* WARNING: Removing unreachable block (ram,0x0009a76c) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int hero::Hero_HandleDamage(int transition)

{
  bool bVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  MobyInstance *pMVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  byte bVar9;
  int iVar10;
  int iVar11;
  undefined4 *puVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  
  bVar9 = g_heroType;
  puVar12 = &g_heroMtx;
  if ((((g_heroStateType != 0x14) && (g_heroStateType != 7)) && (g_heroState != TURRET_PLANE_UI)) &&
     ((DAT_00969ea0 == 0 && (g_gameMode == GAME_MODE_NORMAL)))) {
    DAT_0096bf60 = (MobyInstance *)0x0;
    bVar2 = g_heroMobyPtr->damage;
    if ((bVar2 != 0xff) && (CollDamage[bVar2].pVictimMoby == g_heroMobyPtr)) {
      if (g_heroType == 2) {
        uVar6 = CollDamage[bVar2].damageFlags & 2;
      }
      else {
        uVar6 = CollDamage[bVar2].damageFlags & 1;
      }
      if (uVar6 != 0) {
        DAT_0096bf60 = CollDamage[bVar2].pDamager;
        DAT_00a0f6dc = DAT_00a0f6dc + 1;
        bVar1 = g_heroStateType == 0xf;
        *(int *)(&DAT_00a0f734 + Level * 4) = *(int *)(&DAT_00a0f734 + Level * 4) + 1;
        if (bVar1) {
          DAT_0096a29e = 1;
          return 0;
        }
        if (bVar9 == 2) {
          iVar10 = fastfunc::FastDoubleToInt((double)CollDamage[bVar2].damageHp);
          iVar10 = g_GiantClankHealth - iVar10;
          g_GiantClankHealth = 0;
          if (-1 < iVar10) {
            g_GiantClankHealth = iVar10;
          }
        }
        if (transition != 0) {
          iVar10 = 0;
          do {
            if ((MobyInstance *)puVar12[0x88e] == (MobyInstance *)0x0) {
              iVar11 = puVar12[0x886];
              if (((iVar11 != -1) && (sound::g_SoundChannels[iVar11].pMoby == g_heroMobyPtr)) &&
                 (sound::g_SoundChannels[iVar11].state != '\0')) {
                sound::sound_Kill(iVar11);
              }
              puVar12[0x886] = 0xffffffff;
            }
            else {
              iVar11 = puVar12[0x886];
              if (((iVar11 != -1) &&
                  (sound::g_SoundChannels[iVar11].pMoby == (MobyInstance *)puVar12[0x88e])) &&
                 (sound::g_SoundChannels[iVar11].state != '\0')) {
                sound::sound_Kill(iVar11);
              }
              puVar12[0x886] = 0xffffffff;
            }
            iVar10 = iVar10 + 1;
            puVar12 = puVar12 + 1;
          } while (iVar10 < 8);
          if ((CollDamage[bVar2].unk30_flags_ & 1) == 0) {
            pMVar5 = CollDamage[bVar2].pDamager;
            if (pMVar5 == (MobyInstance *)0x0) {
              dVar19 = 3.1415927410125732;
              dVar13 = (double)fastfunc::FastWrapRot(g_heroRotation.z,3.1415927);
              dVar17 = 3.141592502593994;
              fVar4 = (float)(dVar13 + 1.570796251296997);
              fVar3 = fVar4;
              if (3.1415925 - fVar4 <= fVar4) {
                fVar3 = 3.1415925 - fVar4;
              }
              dVar13 = -3.141592502593994;
              if (fVar3 <= -3.1415925 - fVar4) {
                fVar3 = -3.1415925 - fVar4;
              }
              fVar8 = fVar3 * fVar3;
              dVar20 = -0.16666656732559204;
              dVar18 = 0.008333025500178337;
              dVar16 = -0.0001980741071747616;
              dVar15 = 2.601886990305502e-06;
              fVar4 = fVar8 * fVar8 * fVar3;
              fVar7 = fVar8 * fVar4;
              local_70 = fVar3 + fVar8 * fVar3 * -0.16666657 + fVar4 * 0.0083330255 +
                         fVar7 * -0.0001980741 + fVar8 * fVar7 * 2.601887e-06;
              dVar14 = (double)fastfunc::FastWrapRot(g_heroRotation.z,(float)dVar19);
              dVar19 = dVar14;
              if ((double)(float)(dVar17 - dVar14) <= dVar14) {
                dVar19 = (double)(float)(dVar17 - dVar14);
              }
              if (dVar19 <= (double)(float)(dVar13 - dVar14)) {
                dVar19 = (double)(float)(dVar13 - dVar14);
              }
              dVar13 = (double)(float)(dVar19 * dVar19);
              iVar10 = 0;
              local_68 = 0.0;
              dVar17 = (double)(float)(dVar13 * (double)(float)(dVar13 * dVar19));
              dVar14 = (double)(float)(dVar13 * dVar17);
              local_6c = (float)(dVar19 + (double)(float)((double)(float)(dVar13 * dVar19) * dVar20)
                                ) + (float)(dVar17 * dVar18) + (float)(dVar14 * dVar16) +
                         (float)((double)(float)(dVar13 * dVar14) * dVar15);
            }
            else {
              iVar10 = 0;
              local_70 = g_heroPosition.x - (pMVar5->pos).x;
              local_6c = g_heroPosition.y - (pMVar5->pos).y;
              local_64 = g_heroPosition.w;
              local_68 = g_heroPosition.z - (pMVar5->pos).z;
            }
          }
          else {
            local_70 = CollDamage[bVar2].impact.x;
            local_6c = CollDamage[bVar2].impact.y;
            iVar10 = 0;
            local_68 = CollDamage[bVar2].impact.z;
            local_64 = CollDamage[bVar2].impact.w;
            if (CollDamage[bVar2].impact.w == 5627.925) {
              iVar10 = 1;
            }
          }
          if (g_heroType < 2) {
            if (g_heroType == 0) {
              if ((DAT_0096bf60 != (MobyInstance *)0x0) &&
                 ((DAT_0096bf60->oClass == 0x4eb ||
                  (DAT_0096bf60->oClass == (DOOR_0550|BLARG_HEAVY_INTERCEPTOR_0008))))) {
                TransitionMovement(0x80,1);
                return 1;
              }
              if (g_heroStateType == 0x16) {
                TransitionMovement(0x6d,1);
                DAT_00969e08 = mobyutil::g_FrameTime * 7.0;
                return 1;
              }
              if (g_heroStateType == 0x12) {
                if ((DAT_0096bf60 != (MobyInstance *)0x0) && (DAT_0096bf60->oClass == 0x28f)) {
                  TransitionMovement(0x82,1);
                  return 1;
                }
                TransitionMovement(0x75,1);
              }
              else if (g_heroStateType == 0x11) {
                if ((DAT_0096bf60 != (MobyInstance *)0x0) && (DAT_0096bf60->oClass == 0x28f)) {
                  TransitionMovement(0x82,1);
                  return 1;
                }
                if ((((Level == Quartu) || (Level == Fleet)) &&
                    (DAT_0096bf60 != (MobyInstance *)0x0)) &&
                   (((DAT_0096bf60->oClass == 0x28f || (DAT_0096bf60->oClass == SPIDERBOT)) ||
                    (DAT_0096bf60->oClass == 0x29d)))) {
                  sound::PlayMobySound(0x1c,0,g_heroMobyPtr);
                }
                TransitionMovement(0x76,1);
              }
              else if (g_heroStateType == 3) {
                if ((DAT_0096bf60 != (MobyInstance *)0x0) && (DAT_0096bf60->oClass == 0x28f)) {
                  TransitionMovement(0x82,1);
                  return 1;
                }
                TransitionMovement(0x16,1);
              }
              else {
                TransitionMovement(0x16,1);
              }
              fVar3 = 2.4;
              fVar4 = mobyutil::g_FrameTime * 5.7;
              if (DAT_0096afc7 != 0) {
                fVar3 = 1.7;
                fVar4 = 0.0;
              }
              Hero_ScaleGetHitMomentum
                        (fVar4,mobyutil::g_FrameTime * fVar3,&local_70,0x9a164,
                         (ulonglong)DAT_0096afc7,iVar10);
              if ((iVar10 != 0) && (CollDamage[bVar2].damageClass == '\x04')) {
                local_68 = local_68 * 2.0;
              }
            }
            else {
              TransitionMovement(0x46,1);
              Hero_ScaleGetHitMomentum
                        (mobyutil::g_FrameTime * 5.0,mobyutil::g_FrameTime * 3.0,&local_70,0x9a164,
                         0x720000,iVar10);
            }
          }
          else if (g_heroType < 3) {
            if (((CollDamage[bVar2].damageFlags & 4) == 0) && (0 < g_GiantClankHealth)) {
              local_68 = 0.0;
              local_6c = 0.0;
              local_70 = 0.0;
            }
            else {
              iVar11 = TransitionMovement(0x5d,1);
              mobyattack::M1523_Blueball_HandleDeletion(iVar11);
              if (g_framesNotGrounded == 0) {
                Hero_ScaleGetHitMomentum
                          (mobyutil::g_FrameTime * 7.0,mobyutil::g_FrameTime * 3.5,&local_70,0x9a164
                           ,0x720000,iVar10);
              }
              else {
                local_68 = 0.0;
                local_6c = 0.0;
                local_70 = 0.0;
              }
            }
          }
          else if (g_heroType < 4) {
            TransitionMovement(0x56,1);
            Hero_ScaleGetHitMomentum
                      (mobyutil::g_FrameTime * 5.0,mobyutil::g_FrameTime * 2.4,&local_70,0x9a164,
                       0x720000,iVar10);
          }
          g_heroVelocity = g_heroVelocity + local_70;
          DAT_00969dc4 = DAT_00969dc4 + local_6c;
          DAT_00969dc8 = DAT_00969dc8 + local_68;
          DAT_00969de0 = DAT_00969de0 + local_70;
          DAT_00969de4 = DAT_00969de4 + local_6c;
          DAT_00969de8 = DAT_00969de8 + local_68;
        }
        return 1;
      }
    }
  }
  return 0;
}



//==== 0009aa5c  ns=hero  size=0x24
// sig: undefined ???_IsMobyField_a6_Eq47(void)
// callers(0): 
// callees(0): 

ulonglong hero::____IsMobyField_a6_Eq47(int param_1)

{
  ulonglong uVar1;
  
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (ulonglong)(LZCOUNT(*(ushort *)(param_1 + 0xa6) - 0x47) << 0x20) >> 0x25;
  }
  return uVar1;
}



//==== 0009aa80  ns=hero  size=0x18
// sig: undefined Hero_ZeroMovement(void)
// callers(0): 
// callees(0): 

void hero::Hero_ZeroMovement(void)

{
  g_heroIdealSpeed = 0;
  g_storedNeutralSpeed = 0;
  return;
}



//==== 0009aab0  ns=hero  size=0x8a0
// sig: float Hero_RelativeZAngle(void)
// callers(1): 0009b380 hero::Hero_GetIdealThrustFromPad
// callees(1): 00500ca4 fastfunc::FastEulerToMtx1

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

float hero::Hero_RelativeZAngle(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  ulonglong *puVar5;
  float *pfVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  longlong lVar15;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  double dVar16;
  double dVar17;
  ulonglong in_f24;
  ulonglong in_f25;
  ulonglong in_f26;
  ulonglong in_f27;
  ulonglong in_f28;
  ulonglong in_f29;
  ulonglong in_f30;
  double dVar18;
  double dVar19;
  ulonglong in_f31;
  double dVar20;
  
  uVar10 = ZEXT48(&stack0x00000000);
  lVar12 = uVar10 - 0x1d0;
  puVar5 = (ulonglong *)lVar12;
  *puVar5 = uVar10;
  puVar5[0x3c] = in_LR;
  puVar5[0x32] = in_f24;
  puVar5[0x33] = in_f25;
  puVar5[0x34] = in_f26;
  puVar5[0x35] = in_f27;
  puVar5[0x36] = in_f28;
  puVar5[0x37] = in_f29;
  puVar5[0x38] = in_f30;
  puVar5[0x39] = in_f31;
  puVar5[0x30] = unaff_r30;
  puVar5[0x2f] = unaff_r29;
  lVar15 = uVar10 - 0x120;
  dVar20 = 0.0;
  puVar5[0x31] = unaff_r31;
  puVar5[0x2e] = unaff_r28;
  dVar18 = 0.0;
  fastfunc::FastEulerToMtx1(lVar15,&g_heroRotation);
  fVar1 = *(float *)((int)puVar5 + 0x7c);
  *(float *)((int)puVar5 + 0x74) =
       *(float *)((int)puVar5 + 0xb4) + (float)((double)*(float *)((int)puVar5 + 0xc4) * dVar18) +
       (float)((double)*(float *)((int)puVar5 + 0xd4) * dVar20) +
       *(float *)((int)puVar5 + 0xe4) * fVar1;
  *(float *)(puVar5 + 0xf) =
       *(float *)(puVar5 + 0x17) + (float)((double)*(float *)(puVar5 + 0x19) * dVar18) +
       (float)((double)*(float *)(puVar5 + 0x1b) * dVar20) + *(float *)(puVar5 + 0x1d) * fVar1;
  *(float *)((int)puVar5 + 0x7c) =
       *(float *)((int)puVar5 + 0xbc) + (float)((double)*(float *)((int)puVar5 + 0xcc) * dVar18) +
       (float)((double)*(float *)((int)puVar5 + 0xdc) * dVar20) +
       *(float *)((int)puVar5 + 0xec) * fVar1;
  uVar8 = DAT_00969f58;
  fVar1 = g_heroGroundNormal;
  if (((double)g_heroGroundNormal != dVar20) || ((double)DAT_00969f54 != dVar20)) {
    *(float *)((int)puVar5 + 0xa4) = DAT_00969f54;
    uVar9 = DAT_00969f5c;
    *(undefined4 *)(puVar5 + 0x15) = uVar8;
    *(undefined4 *)((int)puVar5 + 0xac) = uVar9;
    *(undefined4 *)((int)puVar5 + 0x8c) = 0;
    *(float *)(puVar5 + 0x14) = fVar1;
    *(undefined4 *)(puVar5 + 0x11) = 0;
    *(undefined4 *)((int)puVar5 + 0x84) = 0;
    *(undefined4 *)(puVar5 + 0x10) = 0;
    *(undefined4 *)((int)puVar5 + 0x9c) = 0;
    *(undefined4 *)(puVar5 + 0x13) = 0;
    *(undefined4 *)((int)puVar5 + 0x94) = 0;
    *(undefined4 *)(puVar5 + 0x12) = 0;
    fVar1 = g_heroGroundNormal;
    dVar16 = ABS((double)g_heroGroundNormal);
    dVar17 = ABS((double)DAT_00969f54);
    uVar7 = (uint)DAT_00969f54 >> 0x1d;
    *(float *)(puVar5 + 0x20) = (float)(dVar16 - dVar17);
    iVar13 = (int)(((ulonglong)((uint)fVar1 >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)(puVar5 + 0x20) >> 0x1e) & 2 | (ulonglong)uVar7 & 4) << 2);
    fVar4 = *(float *)(&mobyutil::g_atanQuadrantTable + iVar13);
    fVar1 = *(float *)(&DAT_00735904 + iVar13);
    dVar18 = dVar16;
    if (dVar20 <= (double)*(float *)(puVar5 + 0x20)) {
      dVar18 = dVar17;
      dVar17 = dVar16;
    }
    dVar16 = dVar20;
    if (dVar20 < dVar17) {
      iVar13 = 4;
      fVar2 = (float)(dVar18 - dVar17) / (float)(dVar18 + dVar17);
      lVar11 = lVar12;
      do {
        iVar13 = iVar13 + -1;
        *(float *)((int)lVar11 + 0x144) = fVar2;
        lVar11 = lVar11 + 4;
      } while (iVar13 != 0);
      fVar2 = fVar2 * fVar2;
      lVar11 = uVar10 - 0x1c0;
      iVar13 = 4;
      fVar3 = fVar2 * fVar2;
      *(float *)(puVar5 + 0x29) = *(float *)(puVar5 + 0x29) * fVar2;
      *(float *)((int)puVar5 + 0x14c) = *(float *)((int)puVar5 + 0x14c) * fVar3;
      *(float *)(puVar5 + 0x2a) = *(float *)(puVar5 + 0x2a) * fVar3 * fVar2;
      do {
        iVar13 = iVar13 + -1;
        *(float *)((int)lVar11 + 0x144) = *(float *)((int)lVar11 + 0x134) * fVar3 * fVar3;
        lVar11 = lVar11 + 4;
      } while (iVar13 != 0);
      iVar13 = 0;
      iVar14 = 8;
      lVar11 = lVar12;
      do {
        iVar14 = iVar14 + -1;
        pfVar6 = (float *)((int)&DAT_007358e0 + iVar13);
        iVar13 = iVar13 + 4;
        *(float *)((int)lVar11 + 0x144) = *(float *)((int)lVar11 + 0x144) * *pfVar6;
        lVar11 = lVar11 + 4;
      } while (iVar14 != 0);
      iVar13 = 8;
      lVar11 = lVar12;
      dVar18 = dVar20;
      do {
        iVar13 = iVar13 + -1;
        iVar14 = (int)lVar11;
        lVar11 = lVar11 + 4;
        dVar18 = (double)(float)(dVar18 + (double)*(float *)(iVar14 + 0x144));
      } while (iVar13 != 0);
      dVar16 = (double)((float)(dVar18 + 0.7853981852531433) * fVar4 + fVar1);
    }
    *(float *)(puVar5 + 0x11) = (float)-dVar16;
    fastfunc::FastEulerToMtx1(lVar15,uVar10 - 0x150);
    fVar1 = *(float *)(puVar5 + 0xe);
    fVar4 = *(float *)((int)puVar5 + 0x74);
    fVar2 = *(float *)(puVar5 + 0xf);
    fVar3 = *(float *)((int)puVar5 + 0x7c);
    *(float *)((int)puVar5 + 0x74) =
         *(float *)((int)puVar5 + 0xb4) * fVar1 + *(float *)((int)puVar5 + 0xc4) * fVar4 +
         *(float *)((int)puVar5 + 0xd4) * fVar2 + *(float *)((int)puVar5 + 0xe4) * fVar3;
    *(float *)(puVar5 + 0xf) =
         *(float *)(puVar5 + 0x17) * fVar1 + *(float *)(puVar5 + 0x19) * fVar4 +
         *(float *)(puVar5 + 0x1b) * fVar2 + *(float *)(puVar5 + 0x1d) * fVar3;
    *(float *)((int)puVar5 + 0x7c) =
         *(float *)((int)puVar5 + 0xbc) * fVar1 + *(float *)((int)puVar5 + 0xcc) * fVar4 +
         *(float *)((int)puVar5 + 0xdc) * fVar2 + *(float *)((int)puVar5 + 0xec) * fVar3;
    fVar1 = *(float *)(puVar5 + 0x16) * *(float *)(puVar5 + 0x14) +
            *(float *)(puVar5 + 0x18) * *(float *)((int)puVar5 + 0xa4) +
            *(float *)(puVar5 + 0x1a) * *(float *)(puVar5 + 0x15) +
            *(float *)(puVar5 + 0x1c) * *(float *)((int)puVar5 + 0xac);
    fVar4 = *(float *)(puVar5 + 0x17) * *(float *)(puVar5 + 0x14) +
            *(float *)(puVar5 + 0x19) * *(float *)((int)puVar5 + 0xa4) +
            *(float *)(puVar5 + 0x1b) * *(float *)(puVar5 + 0x15) +
            *(float *)(puVar5 + 0x1d) * *(float *)((int)puVar5 + 0xac);
    dVar18 = ABS((double)fVar1);
    dVar17 = ABS((double)fVar4);
    *(float *)(puVar5 + 0x1f) = fVar1;
    *(float *)((int)puVar5 + 0xf4) = fVar4;
    *(float *)((int)puVar5 + 0xfc) = (float)(dVar17 - dVar18);
    iVar13 = (int)(((ulonglong)(*(uint *)((int)puVar5 + 0xf4) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)((int)puVar5 + 0xfc) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)(puVar5 + 0x1f) >> 0x1d) & 4) << 2);
    fVar4 = *(float *)(&mobyutil::g_atanQuadrantTable + iVar13);
    fVar1 = *(float *)(&DAT_00735904 + iVar13);
    if (dVar20 <= (double)*(float *)((int)puVar5 + 0xfc)) {
      dVar17 = ABS((double)*(float *)(puVar5 + 0x1f));
      dVar18 = ABS((double)*(float *)((int)puVar5 + 0xf4));
    }
    dVar16 = dVar20;
    if (dVar20 < dVar18) {
      iVar13 = 4;
      fVar2 = (float)(dVar17 - dVar18) / (float)(dVar17 + dVar18);
      lVar11 = lVar12;
      do {
        iVar13 = iVar13 + -1;
        *(float *)((int)lVar11 + 0x124) = fVar2;
        lVar11 = lVar11 + 4;
      } while (iVar13 != 0);
      fVar2 = fVar2 * fVar2;
      lVar11 = uVar10 - 0x1c0;
      iVar13 = 4;
      fVar3 = fVar2 * fVar2;
      *(float *)(puVar5 + 0x25) = *(float *)(puVar5 + 0x25) * fVar2;
      *(float *)((int)puVar5 + 300) = *(float *)((int)puVar5 + 300) * fVar3;
      *(float *)(puVar5 + 0x26) = *(float *)(puVar5 + 0x26) * fVar3 * fVar2;
      do {
        iVar13 = iVar13 + -1;
        *(float *)((int)lVar11 + 0x124) = *(float *)((int)lVar11 + 0x114) * fVar3 * fVar3;
        lVar11 = lVar11 + 4;
      } while (iVar13 != 0);
      iVar13 = 0;
      iVar14 = 8;
      lVar11 = lVar12;
      do {
        pfVar6 = (float *)((int)&DAT_007358e0 + iVar13);
        iVar14 = iVar14 + -1;
        iVar13 = iVar13 + 4;
        *(float *)((int)lVar11 + 0x124) = *(float *)((int)lVar11 + 0x124) * *pfVar6;
        lVar11 = lVar11 + 4;
      } while (iVar14 != 0);
      iVar13 = 8;
      lVar11 = lVar12;
      dVar18 = dVar20;
      do {
        iVar13 = iVar13 + -1;
        iVar14 = (int)lVar11;
        lVar11 = lVar11 + 4;
        dVar18 = (double)(float)(dVar18 + (double)*(float *)(iVar14 + 0x124));
      } while (iVar13 != 0);
      dVar16 = (double)((float)(dVar18 + 0.7853981852531433) * fVar4 + fVar1);
    }
    *(float *)((int)puVar5 + 0x94) = (float)-dVar16;
    fastfunc::FastEulerToMtx1(lVar15,uVar10 - 0x140);
    fVar1 = *(float *)(puVar5 + 0xe);
    fVar4 = *(float *)((int)puVar5 + 0x74);
    fVar2 = *(float *)(puVar5 + 0xf);
    fVar3 = *(float *)((int)puVar5 + 0x7c);
    dVar19 = (double)(*(float *)(puVar5 + 0x16) * fVar1 + *(float *)(puVar5 + 0x18) * fVar4 +
                      *(float *)(puVar5 + 0x1a) * fVar2 + *(float *)(puVar5 + 0x1c) * fVar3);
    dVar16 = (double)(*(float *)((int)puVar5 + 0xb4) * fVar1 +
                      *(float *)((int)puVar5 + 0xc4) * fVar4 +
                      *(float *)((int)puVar5 + 0xd4) * fVar2 +
                     *(float *)((int)puVar5 + 0xe4) * fVar3);
    dVar17 = (double)(*(float *)(puVar5 + 0x17) * fVar1 + *(float *)(puVar5 + 0x19) * fVar4 +
                      *(float *)(puVar5 + 0x1b) * fVar2 + *(float *)(puVar5 + 0x1d) * fVar3);
    *(float *)(puVar5 + 0x11) = -*(float *)(puVar5 + 0x11);
    dVar18 = (double)(*(float *)((int)puVar5 + 0xbc) * fVar1 +
                      *(float *)((int)puVar5 + 0xcc) * fVar4 +
                      *(float *)((int)puVar5 + 0xdc) * fVar2 +
                     *(float *)((int)puVar5 + 0xec) * fVar3);
    fastfunc::FastEulerToMtx1(lVar15,uVar10 - 0x150);
    *(float *)((int)puVar5 + 0x74) =
         (float)((double)*(float *)((int)puVar5 + 0xb4) * dVar19) +
         (float)((double)*(float *)((int)puVar5 + 0xc4) * dVar16) +
         (float)((double)*(float *)((int)puVar5 + 0xd4) * dVar17) +
         (float)((double)*(float *)((int)puVar5 + 0xe4) * dVar18);
  }
  dVar16 = ABS((double)*(float *)(puVar5 + 0xe));
  dVar17 = ABS((double)*(float *)((int)puVar5 + 0x74));
  *(float *)(puVar5 + 0x1e) = (float)(dVar16 - dVar17);
  iVar13 = (int)(((ulonglong)(*(uint *)(puVar5 + 0xe) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar5 + 0x1e) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)((int)puVar5 + 0x74) >> 0x1d) & 4) << 2);
  fVar4 = *(float *)(&mobyutil::g_atanQuadrantTable + iVar13);
  fVar1 = *(float *)(&DAT_00735904 + iVar13);
  dVar18 = dVar16;
  if (dVar20 <= (double)*(float *)(puVar5 + 0x1e)) {
    dVar18 = dVar17;
    dVar17 = dVar16;
  }
  if (dVar20 < dVar17) {
    iVar13 = 4;
    fVar2 = (float)(dVar18 - dVar17) / (float)(dVar18 + dVar17);
    lVar15 = lVar12;
    do {
      iVar13 = iVar13 + -1;
      *(float *)((int)lVar15 + 0x104) = fVar2;
      lVar15 = lVar15 + 4;
    } while (iVar13 != 0);
    fVar2 = fVar2 * fVar2;
    lVar15 = uVar10 - 0x1c0;
    iVar13 = 4;
    fVar3 = fVar2 * fVar2;
    *(float *)(puVar5 + 0x21) = *(float *)(puVar5 + 0x21) * fVar2;
    *(float *)((int)puVar5 + 0x10c) = *(float *)((int)puVar5 + 0x10c) * fVar3;
    *(float *)(puVar5 + 0x22) = *(float *)(puVar5 + 0x22) * fVar3 * fVar2;
    do {
      iVar13 = iVar13 + -1;
      *(float *)((int)lVar15 + 0x104) = *(float *)((int)lVar15 + 0xf4) * fVar3 * fVar3;
      lVar15 = lVar15 + 4;
    } while (iVar13 != 0);
    iVar13 = 0;
    iVar14 = 8;
    lVar15 = lVar12;
    do {
      pfVar6 = (float *)((int)&DAT_007358e0 + iVar13);
      iVar14 = iVar14 + -1;
      iVar13 = iVar13 + 4;
      *(float *)((int)lVar15 + 0x104) = *(float *)((int)lVar15 + 0x104) * *pfVar6;
      lVar15 = lVar15 + 4;
    } while (iVar14 != 0);
    iVar13 = 8;
    do {
      iVar13 = iVar13 + -1;
      iVar14 = (int)lVar12;
      lVar12 = lVar12 + 4;
      dVar20 = (double)(float)(dVar20 + (double)*(float *)(iVar14 + 0x104));
    } while (iVar13 != 0);
    dVar20 = (double)((float)(dVar20 + 0.7853981852531433) * fVar4 + fVar1);
  }
  return (float)dVar20;
}



//==== 0009b380  ns=hero  size=0x530
// sig: undefined Hero_GetIdealThrustFromPad(void)
// callers(10): 0009b8c8 hero::Hero_GetIdealThrustForWalk; 0009de38 hero::Hero_JumpTurnTrans; 0009ef10 hero::Hero_SetAttackRot; 000a00f0 hero::Hero_AttackMotion; 000a1d70 hero::Hero_GetSnapJumpDir; 000a1e78 hero::Hero_GetSnapJumpSnapWindow; 000a5310 hero::Hero_JumpLandTransitions; 000aaec0 hero::HandleHeroMovement; 000b72b0 hero::TransitionMovement; 000be228 hero::HeroMovement
// callees(4): 0009aab0 hero::Hero_RelativeZAngle; 00502578 fastfunc::FastWrapRot; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt
// strings: 0096c074: 'None'

void hero::Hero_GetIdealThrustFromPad(double param_1,undefined8 param_2,int param_3)

{
  float fVar1;
  ulonglong *puVar2;
  float fVar3;
  float *pfVar4;
  float fVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  ulonglong in_f27;
  ulonglong in_f28;
  ulonglong in_f29;
  double dVar16;
  ulonglong in_f30;
  double dVar17;
  ulonglong in_f31;
  float fVar18;
  
  uVar8 = ZEXT48(&stack0x00000000);
  lVar7 = uVar8 - 0xe0;
  puVar2 = (ulonglong *)lVar7;
  *puVar2 = uVar8;
  puVar2[0x1e] = in_LR;
  puVar2[0x17] = in_f27;
  puVar2[0x18] = in_f28;
  puVar2[0x19] = in_f29;
  puVar2[0x1a] = in_f30;
  puVar2[0x1b] = in_f31;
  puVar2[0x15] = unaff_r30;
  puVar2[0x16] = unaff_r31;
  dVar16 = (double)g_heroPadStick;
  puVar2[0x14] = unaff_r29;
  dVar17 = (double)DAT_0096ba04;
  if (param_3 == 1) {
    if ((0.699999988079071 < ABS(dVar17)) && (ABS(dVar16) < 0.11999999731779099)) {
      dVar16 = 0.0;
    }
    if ((0.699999988079071 < ABS(dVar16)) && (ABS(dVar17) < 0.11999999731779099)) {
      dVar17 = 0.0;
    }
  }
  fVar18 = SQRT((float)(dVar16 * dVar16) + (float)(dVar17 * dVar17));
  if (1.0 < fVar18) {
    dVar12 = (double)(1.0 / fVar18);
    dVar16 = (double)(float)(dVar12 * dVar16);
    dVar17 = (double)(float)(dVar12 * dVar17);
  }
  dVar12 = 0.0;
  if ((dVar16 == 0.0) && (dVar17 == 0.0)) {
    g_heroIdealSpeed = 0.0;
    fVar18 = g_heroRotation.z;
    if (g_heroGravityMode != '\0') {
      fVar18 = Hero_RelativeZAngle();
    }
    DAT_00969e50 = (g_heroMobyPtr->transform).v0.x +
                   (float)((double)(g_heroMobyPtr->transform).v1.x * dVar12) +
                   (float)((double)(g_heroMobyPtr->transform).v2.x * dVar12);
    DAT_00969e54 = (g_heroMobyPtr->transform).v0.y +
                   (float)((double)(g_heroMobyPtr->transform).v1.y * dVar12) +
                   (float)((double)(g_heroMobyPtr->transform).v2.y * dVar12);
    DAT_00969e58 = (g_heroMobyPtr->transform).v0.z +
                   (float)((double)(g_heroMobyPtr->transform).v1.z * dVar12) +
                   (float)((double)(g_heroMobyPtr->transform).v2.z * dVar12);
    dVar12 = (double)((g_heroMobyPtr->transform).v0.w +
                      (float)((double)(g_heroMobyPtr->transform).v1.w * dVar12) +
                     (float)((double)(g_heroMobyPtr->transform).v2.w * dVar12)) + dVar12;
    g_heroIdealRotZ = fVar18;
  }
  else {
    dVar17 = -dVar17;
    dVar16 = -dVar16;
    dVar13 = ABS(dVar17);
    dVar14 = ABS(dVar16);
    *(float *)(puVar2 + 0xe) = (float)dVar17;
    *(float *)((int)puVar2 + 0x74) = (float)dVar16;
    *(float *)(puVar2 + 0xf) = (float)(dVar13 - dVar14);
    iVar9 = (*(uint *)(puVar2 + 0xe) >> 0x1c & 8 |
            *(uint *)(puVar2 + 0xf) >> 0x1e & 2 | *(uint *)((int)puVar2 + 0x74) >> 0x1d & 4) * 4;
    fVar1 = *(float *)(&mobyutil::g_atanQuadrantTable + iVar9);
    fVar18 = *(float *)(&DAT_00735904 + iVar9);
    if (0.0 <= *(float *)(puVar2 + 0xf)) {
      dVar13 = ABS((double)*(float *)((int)puVar2 + 0x74));
      dVar14 = ABS((double)*(float *)(puVar2 + 0xe));
    }
    dVar15 = dVar12;
    if (0.0 < dVar14) {
      iVar9 = 4;
      iVar10 = 4;
      fVar3 = (float)(dVar13 - dVar14) / (float)(dVar13 + dVar14);
      lVar6 = lVar7;
      do {
        iVar9 = iVar9 + -1;
        *(float *)((int)lVar6 + 0x7c) = fVar3;
        lVar6 = lVar6 + 4;
      } while (iVar9 != 0);
      fVar3 = fVar3 * fVar3;
      lVar6 = uVar8 - 0xd0;
      fVar5 = fVar3 * fVar3;
      *(float *)(puVar2 + 0x10) = *(float *)(puVar2 + 0x10) * fVar3;
      *(float *)((int)puVar2 + 0x84) = *(float *)((int)puVar2 + 0x84) * fVar5;
      *(float *)(puVar2 + 0x11) = *(float *)(puVar2 + 0x11) * fVar5 * fVar3;
      do {
        iVar10 = iVar10 + -1;
        *(float *)((int)lVar6 + 0x7c) = *(float *)((int)lVar6 + 0x6c) * fVar5 * fVar5;
        lVar6 = lVar6 + 4;
      } while (iVar10 != 0);
      iVar10 = 8;
      iVar9 = 0;
      iVar11 = 8;
      lVar6 = lVar7;
      do {
        iVar10 = iVar10 + -1;
        pfVar4 = (float *)((int)&DAT_007358e0 + iVar9);
        iVar9 = iVar9 + 4;
        *(float *)((int)lVar6 + 0x7c) = *(float *)((int)lVar6 + 0x7c) * *pfVar4;
        lVar6 = lVar6 + 4;
        dVar13 = dVar12;
      } while (iVar10 != 0);
      do {
        iVar11 = iVar11 + -1;
        iVar9 = (int)lVar7;
        lVar7 = lVar7 + 4;
        dVar13 = (double)(float)(dVar13 + (double)*(float *)(iVar9 + 0x7c));
      } while (iVar11 != 0);
      dVar15 = (double)((float)(dVar13 + 0.7853981852531433) * fVar1 + fVar18);
    }
    g_heroIdealRotZ = (float)dVar15;
    if (param_3 == 2) {
      dVar14 = 3.1415927410125732;
      uVar8 = fastfunc::FastDoubleToInt
                        ((double)((float)(dVar15 + 3.1415927410125732) * 0.63662 + 0.5));
      dVar13 = (double)fastfunc::FastIntToDouble(uVar8 & 3);
      g_heroIdealRotZ = (float)((double)(float)(dVar13 * 1.5707963705062866) - dVar14);
    }
    if (param_3 == 3) {
      dVar14 = 3.1415927410125732;
      uVar8 = fastfunc::FastDoubleToInt((double)((g_heroIdealRotZ + 3.1415927) * 1.27324 + 0.5));
      dVar13 = (double)fastfunc::FastIntToDouble(uVar8 & 7);
      g_heroIdealRotZ = (float)((double)(float)(dVar13 * 0.785398006439209) - dVar14);
    }
    if (param_3 == 4) {
      dVar13 = (double)fastfunc::FastWrapRot(g_heroIdealRotZ,g_heroRotation.z);
    }
    else {
      dVar13 = (double)fastfunc::FastWrapRot(g_heroIdealRotZ,GameCamera.rot.radius);
    }
    g_heroIdealRotZ = (float)dVar13;
    if (Cheats[4] != '\0') {
      dVar16 = -dVar16;
    }
    DAT_00969e50 = (float)((double)GameCamera.orientMtx.forward.x * dVar17) +
                   (float)((double)GameCamera.orientMtx.right.x * dVar16) +
                   (float)((double)GameCamera.orientMtx.up.x * dVar12);
    DAT_00969e54 = (float)((double)GameCamera.orientMtx.forward.y * dVar17) +
                   (float)((double)GameCamera.orientMtx.right.y * dVar16) +
                   (float)((double)GameCamera.orientMtx.up.y * dVar12);
    DAT_00969e58 = (float)((double)GameCamera.orientMtx.forward.z * dVar17) +
                   (float)((double)GameCamera.orientMtx.right.z * dVar16) +
                   (float)((double)GameCamera.orientMtx.up.z * dVar12);
    dVar12 = (double)((float)((double)GameCamera.orientMtx.forward.w * dVar17) +
                      (float)((double)GameCamera.orientMtx.right.w * dVar16) +
                     (float)((double)GameCamera.orientMtx.up.w * dVar12)) + dVar12;
    g_heroIdealSpeed =
         (float)(param_1 * (double)SQRT((float)(dVar17 * dVar17) + (float)(dVar16 * dVar16)));
  }
  DAT_00969e5c = (float)dVar12;
  return;
}



//==== 0009b8c8  ns=hero  size=0x124
// sig: undefined Hero_GetIdealThrustForWalk(void)
// callers(2): 000aaec0 hero::HandleHeroMovement; 000be228 hero::HeroMovement
// callees(1): 0009b380 hero::Hero_GetIdealThrustFromPad

void hero::Hero_GetIdealThrustForWalk(void)

{
  float fVar1;
  
  Hero_GetIdealThrustFromPad(0x3ff0000000000000,&DAT_0009b8b0,0);
  if (g_heroState == MAGNERAMP_WAITING) {
    g_heroIdealSpeed = mobyutil::g_FrameTime * 3.5 * g_heroIdealSpeed;
    if (g_heroIdealSpeed < mobyutil::g_FrameTime * 2.0) {
      g_heroIdealSpeed = mobyutil::g_FrameTime * 2.0;
    }
  }
  else {
    if (0.0 < g_heroIdealSpeed) {
      fVar1 = DAT_00723320;
      if (g_heroIdealSpeed < DAT_00723314) {
        fVar1 = DAT_00723310;
      }
      g_heroIdealSpeed = fVar1 * mobyutil::g_FrameTime;
    }
    if (g_heroState == WATER_WALKING) {
      g_heroIdealSpeed = g_heroIdealSpeed * 0.8;
      if (g_heroIdealSpeed < mobyutil::g_FrameTime * 2.5) {
        g_heroIdealSpeed = mobyutil::g_FrameTime * 2.5;
      }
    }
  }
  return;
}



//==== 0009b9ec  ns=hero  size=0x94
// sig: undefined Hero_RotateByEuler(void)
// callers(1): 000aaec0 hero::HandleHeroMovement
// callees(3): 0010c1e8 mobyutil::MB_MtxToEuler; 00500ca4 fastfunc::FastEulerToMtx1; 0050162c fastfunc::FastVecMtx4Mul

void hero::Hero_RotateByEuler(void)

{
  undefined1 local_b0 [16];
  undefined1 auStack_a0 [64];
  undefined1 auStack_60 [72];
  
  fastfunc::FastEulerToMtx1(auStack_a0,local_b0);
  fastfunc::FastEulerToMtx1(auStack_60,&g_heroRotation);
  fastfunc::FastVecMtx4Mul(auStack_60,auStack_60,auStack_a0);
  mobyutil::MB_MtxToEuler((int)auStack_60,(MobyInstance *)&g_heroRotation);
  return;
}



//==== 0009ba88  ns=hero  size=0x2cc
// sig: void Hero_Turn3D(float gain, float damp, float limit)
// callers(6): 0009bd54 hero::Hero_Turn; 0009bdf8 hero::Hero_GunTurnWalk; 0009bf10 hero::Hero_TurnWalk; 0009de38 hero::Hero_JumpTurnTrans; 000a00f0 hero::Hero_AttackMotion; 000aaec0 hero::HandleHeroMovement
// callees(4): 0010a050 mobyutil::AccelDeltAng; 0010c1e8 mobyutil::MB_MtxToEuler; 00500ca4 fastfunc::FastEulerToMtx1; 0050162c fastfunc::FastVecMtx4Mul

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void hero::Hero_Turn3D(float gain,float damp,float limit)

{
  float fVar1;
  float fVar2;
  ulonglong *puVar3;
  float fVar4;
  float *pfVar5;
  float fVar6;
  ulonglong uVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  ulonglong unaff_r29;
  longlong lVar13;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  double dVar14;
  ulonglong in_f31;
  double dVar15;
  
  uVar7 = ZEXT48(&stack0x00000000);
  lVar13 = uVar7 - 0x150;
  puVar3 = (ulonglong *)lVar13;
  *puVar3 = uVar7;
  puVar3[0x2c] = in_LR;
  puVar3[0x29] = in_f31;
  puVar3[0x28] = unaff_r31;
  puVar9 = (undefined4 *)&mobyutil::g_atanQuadrantTable;
  fVar2 = g_heroGravityMtx * DAT_00969e50 + DAT_00969d30 * DAT_00969e54 +
          DAT_00969d40 * DAT_00969e58 + DAT_00969d50 * DAT_00969e5c;
  fVar1 = DAT_00969d24 * DAT_00969e50 + DAT_00969d34 * DAT_00969e54 + DAT_00969d44 * DAT_00969e58 +
          DAT_00969d54 * DAT_00969e5c;
  fVar6 = ABS(fVar2);
  fVar4 = ABS(fVar1);
  *(float *)((int)puVar3 + 0x104) = fVar2;
  *(float *)(puVar3 + 0x21) = fVar1;
  *(float *)((int)puVar3 + 0x10c) = fVar6 - fVar4;
  dVar15 = 0.0;
  iVar8 = (int)(((ulonglong)(*(uint *)((int)puVar3 + 0x104) >> 0x1c) & 8 |
                (ulonglong)(*(uint *)((int)puVar3 + 0x10c) >> 0x1e) & 2 |
                (ulonglong)(*(uint *)(puVar3 + 0x21) >> 0x1d) & 4) << 2);
  fVar2 = *(float *)(&mobyutil::g_atanQuadrantTable + iVar8);
  puVar3[0x27] = unaff_r30;
  puVar3[0x26] = unaff_r29;
  fVar1 = *(float *)(&DAT_00735904 + iVar8);
  if (0.0 <= *(float *)((int)puVar3 + 0x10c)) {
    fVar6 = ABS(*(float *)(puVar3 + 0x21));
    fVar4 = ABS(*(float *)((int)puVar3 + 0x104));
  }
  dVar14 = dVar15;
  if (0.0 < fVar4) {
    iVar10 = 4;
    iVar8 = 4;
    fVar4 = (fVar6 - fVar4) / (fVar6 + fVar4);
    lVar11 = lVar13;
    do {
      iVar10 = iVar10 + -1;
      *(float *)((int)lVar11 + 0x110) = fVar4;
      lVar11 = lVar11 + 4;
    } while (iVar10 != 0);
    fVar4 = fVar4 * fVar4;
    lVar11 = uVar7 - 0x140;
    fVar6 = fVar4 * fVar4;
    *(float *)((int)puVar3 + 0x114) = *(float *)((int)puVar3 + 0x114) * fVar4;
    *(float *)(puVar3 + 0x23) = *(float *)(puVar3 + 0x23) * fVar6;
    *(float *)((int)puVar3 + 0x11c) = *(float *)((int)puVar3 + 0x11c) * fVar6 * fVar4;
    do {
      iVar8 = iVar8 + -1;
      *(float *)((int)lVar11 + 0x110) = *(float *)((int)lVar11 + 0x100) * fVar6 * fVar6;
      lVar11 = lVar11 + 4;
    } while (iVar8 != 0);
    iVar10 = 8;
    iVar12 = 0;
    iVar8 = 8;
    lVar11 = lVar13;
    do {
      pfVar5 = (float *)((int)&DAT_007358e0 + iVar12);
      iVar10 = iVar10 + -1;
      iVar12 = iVar12 + 4;
      *(float *)((int)lVar11 + 0x110) = *(float *)((int)lVar11 + 0x110) * *pfVar5;
      lVar11 = lVar11 + 4;
    } while (iVar10 != 0);
    do {
      iVar8 = iVar8 + -1;
      iVar10 = (int)lVar13;
      lVar13 = lVar13 + 4;
      dVar14 = (double)(float)(dVar14 + (double)*(float *)(iVar10 + 0x110));
    } while (iVar8 != 0);
    puVar9 = &DAT_0009ba80;
    dVar14 = (double)((float)(dVar14 + 0.7853981852531433) * fVar2 + fVar1);
  }
  *(undefined4 *)(puVar3 + 0x20) = 0;
  dVar14 = (double)mobyutil::AccelDeltAng
                             (dVar14,(double)gain,(double)damp,(double)limit,uVar7 - 0x50,puVar9,
                              &DAT_00969e64);
  DAT_00969e68 = (float)dVar14;
  *(float *)(puVar3 + 0xe) = (float)dVar15;
  *(float *)((int)puVar3 + 0x74) = (float)dVar15;
  *(undefined4 *)(puVar3 + 0xf) = *(undefined4 *)(puVar3 + 0x20);
  fastfunc::FastEulerToMtx1(uVar7 - 0xd0,uVar7 - 0xe0);
  lVar13 = uVar7 - 0x90;
  fastfunc::FastEulerToMtx1(lVar13,&g_heroRotation);
  fastfunc::FastVecMtx4Mul(lVar13,lVar13,uVar7 - 0xd0);
  mobyutil::MB_MtxToEuler((int)lVar13,(MobyInstance *)&g_heroRotation);
  return;
}



//==== 0009bd54  ns=hero  size=0x8c
// sig: void Hero_Turn(float gain, float damp, float limit)
// callers(0): 
// callees(2): 0009ba88 hero::Hero_Turn3D; 0010a050 mobyutil::AccelDeltAng

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void hero::Hero_Turn(float gain,float damp,float limit)

{
  double dVar1;
  
  if (g_heroGravityMode == '\0') {
    dVar1 = (double)mobyutil::AccelDeltAng
                              ((double)g_heroIdealRotZ,(double)gain,(double)damp,(double)limit,
                               0x969d78,0,&DAT_00969e64);
    DAT_00969e68 = (float)dVar1;
  }
  else {
    Hero_Turn3D(gain,damp,limit);
  }
  return;
}



//==== 0009bdf8  ns=hero  size=0xf0
// sig: undefined Hero_GunTurnWalk(void)
// callers(1): 000aaec0 hero::HandleHeroMovement
// callees(2): 0009ba88 hero::Hero_Turn3D; 0010a050 mobyutil::AccelDeltAng

void hero::Hero_GunTurnWalk(void)

{
  float fVar1;
  float fVar2;
  int iVar3;
  double dVar4;
  
  iVar3 = -1;
  if (DAT_0096ad94 == 2) {
    iVar3 = g_CurrentWeapon;
  }
  if (iVar3 == 0x10) {
    fVar1 = 0.006;
    fVar2 = 13.962634;
  }
  else {
    fVar1 = 0.002;
    fVar2 = 6.981317;
  }
  if (g_heroGravityMode == '\0') {
    dVar4 = (double)mobyutil::AccelDeltAng
                              ((double)g_heroIdealRotZ,(double)(DAT_0071f40c * fVar1),
                               (double)(DAT_0071f40c * 0.07),(double)(mobyutil::g_FrameTime * fVar2)
                               ,0x969d78,&DAT_00720000,&DAT_00969e64);
    DAT_00969e68 = (float)dVar4;
  }
  else {
    Hero_Turn3D(DAT_0071f40c * fVar1,DAT_0071f40c * 0.07,mobyutil::g_FrameTime * fVar2);
  }
  return;
}



//==== 0009bf10  ns=hero  size=0x154
// sig: undefined Hero_TurnWalk(void)
// callers(1): 000aaec0 hero::HandleHeroMovement
// callees(2): 0009ba88 hero::Hero_Turn3D; 0010a050 mobyutil::AccelDeltAng

void hero::Hero_TurnWalk(void)

{
  float fVar1;
  undefined4 *puVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar4 = (double)(DAT_0071f40c * 0.1);
  fVar1 = (g_heroPadMagnitude + 1.0) * 0.5;
  dVar5 = (double)(DAT_0071f40c * 0.019 * fVar1);
  dVar3 = (double)(mobyutil::g_FrameTime * 9.948377 * fVar1);
  if (DAT_0096a09e != 0) {
    dVar5 = (double)(float)(dVar5 * 1.100000023841858);
    dVar3 = (double)(float)(dVar3 * 1.2000000476837158);
  }
  puVar2 = (undefined4 *)0xffffffff;
  if (DAT_0096ad94 == 2) {
    puVar2 = g_CurrentWeapon;
  }
  if ((int)puVar2 < 0x11) {
    if ((int)puVar2 < 0xf) goto LAB_0009c000;
  }
  else if (puVar2 != (undefined4 *)0x15) goto LAB_0009c000;
  puVar2 = (undefined4 *)(uint)DAT_0096bd88;
  if (DAT_0096bd88 != 0) {
    puVar2 = &DAT_0009bee8;
    dVar5 = (double)(DAT_0071f40c * 0.003);
    dVar4 = (double)(DAT_0071f40c * 0.04);
    dVar3 = (double)(mobyutil::g_FrameTime * 4.363323);
  }
LAB_0009c000:
  if (g_heroGravityMode == '\0') {
    dVar3 = (double)mobyutil::AccelDeltAng
                              ((double)g_heroIdealRotZ,dVar5,dVar4,dVar3,0x969d78,puVar2,
                               &DAT_00969e64);
    DAT_00969e68 = (float)dVar3;
  }
  else {
    Hero_Turn3D((float)dVar5,(float)dVar4,(float)dVar3);
  }
  return;
}



//==== 0009c064  ns=hero  size=0x68
// sig: void Hero_ThrustModeAccel(float acc, float dec)
// callers(0): 
// callees(1): 00109af0 mobyutil::Delt

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void hero::Hero_ThrustModeAccel(float acc,float dec)

{
  if (g_heroIdealSpeed <= g_storedNeutralSpeed) {
    mobyutil::Delt(g_heroIdealSpeed,dec,&g_storedNeutralSpeed);
  }
  else {
    mobyutil::Delt(g_heroIdealSpeed,acc,&g_storedNeutralSpeed);
  }
  return;
}



//==== 0009c0d0  ns=hero  size=0xd8
// sig: undefined Hero_ThrustToMotionFwd(void)
// callers(1): 000aaec0 hero::HandleHeroMovement
// callees(1): 00110488 mobyutil::ClampVec3Magnitude

void hero::Hero_ThrustToMotionFwd(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  DAT_0096a45c = DAT_00969dec;
  fVar1 = 0.0;
  fVar2 = SQRT(g_heroMtx * g_heroMtx + DAT_00969ce4 * DAT_00969ce4 + DAT_00969ce8 * DAT_00969ce8);
  fVar3 = fVar1;
  fVar4 = fVar1;
  if (fVar2 != 0.0) {
    fVar2 = g_storedNeutralSpeed / fVar2;
    fVar1 = DAT_00969ce8 * fVar2;
    fVar3 = g_heroMtx * fVar2;
    fVar4 = DAT_00969ce4 * fVar2;
  }
  g_heroVelocity = DAT_00969de0 + fVar3;
  DAT_00969dc4 = DAT_00969de4 + fVar4;
  DAT_00969dc8 = DAT_00969de8 + fVar1;
  DAT_00969dcc = DAT_00969dec;
  DAT_0096a450 = g_heroVelocity;
  DAT_0096a454 = DAT_00969dc4;
  DAT_0096a458 = DAT_00969dc8;
  mobyutil::ClampVec3Magnitude((double)(DAT_0096a53c + DAT_0096a548),(Vec4 *)&g_heroVelocity);
  return;
}



//==== 0009c1b0  ns=hero  size=0x194
// sig: void Hero_ThrustToMotion(float idealRotZ)
// callers(1): 000aaec0 hero::HandleHeroMovement
// callees(2): 000fe610 mobyutil::MB_SphericalToVector; 00500ca4 fastfunc::FastEulerToMtx1

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void hero::Hero_ThrustToMotion(float idealRotZ)

{
  float ang1;
  double dVar1;
  double dVar2;
  double dVar3;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  
  ang1 = g_heroRotation.z;
  if (idealRotZ <= 3.1415927) {
    ang1 = idealRotZ;
  }
  dVar3 = (double)g_storedNeutralSpeed;
  if (g_heroGravityMode == '\0') {
    mobyutil::MB_SphericalToVector(g_storedNeutralSpeed,ang1,DAT_00969fc4,&local_80);
  }
  else {
    dVar1 = 0.0;
    dVar2 = (double)(float)(dVar3 * 0.0);
    fastfunc::FastEulerToMtx1(&local_60,ZEXT48(g_heroMobyPtr) + 0x40);
    local_80 = (float)((double)local_60 * dVar3) + (float)((double)local_50 * dVar2) +
               (float)((double)local_40 * dVar1) + local_30 * local_64;
    local_7c = (float)((double)local_5c * dVar3) + (float)((double)local_4c * dVar2) +
               (float)((double)local_3c * dVar1) + local_2c * local_64;
    local_78 = (float)((double)local_58 * dVar3) + (float)((double)local_48 * dVar2) +
               (float)((double)local_38 * dVar1) + local_28 * local_64;
    local_74 = (float)((double)local_54 * dVar3) + (float)((double)local_44 * dVar2) +
               (float)((double)local_34 * dVar1) + local_24 * local_64;
  }
  g_heroVelocity = local_80;
  DAT_00969dc4 = local_7c;
  DAT_00969dc8 = local_78;
  DAT_00969dcc = local_74;
  return;
}



//==== 0009c360  ns=hero  size=0x2a0
// sig: undefined Hero_WallSloopMotion(void)
// callers(1): 000aaec0 hero::HandleHeroMovement
// callees(0): 

void hero::Hero_WallSloopMotion(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  ulonglong *puVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float *pfVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar12;
  longlong lVar11;
  longlong lVar13;
  int iVar14;
  
  uVar9 = ZEXT48(&stack0x00000000);
  lVar11 = uVar9 - 0x60;
  puVar4 = (ulonglong *)lVar11;
  *puVar4 = uVar9;
  fVar2 = DAT_00969ee8;
  if ((((g_framesNotGrounded != 0) && (g_heroGroundDist < 0.15)) &&
      (fVar1 = 0.0, 0.0 < DAT_00969de8)) && ((DAT_00969f37 != '\0' && (0.0 < DAT_00969ee8)))) {
    fVar7 = ABS(DAT_00969ee8);
    fVar3 = SQRT(DAT_00969ee0 * DAT_00969ee0 + DAT_00969ee4 * DAT_00969ee4);
    fVar5 = ABS(fVar3);
    *(float *)(puVar4 + 6) = fVar3;
    *(float *)((int)puVar4 + 0x34) = fVar7 - fVar5;
    iVar10 = (int)(((ulonglong)((uint)fVar2 >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)((int)puVar4 + 0x34) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)(puVar4 + 6) >> 0x1d) & 4) << 2);
    fVar3 = *(float *)(&mobyutil::g_atanQuadrantTable + iVar10);
    fVar2 = *(float *)(&DAT_00735904 + iVar10);
    fVar6 = fVar7;
    if (0.0 <= *(float *)((int)puVar4 + 0x34)) {
      fVar6 = ABS(*(float *)(puVar4 + 6));
      fVar5 = fVar7;
    }
    if (0.0 < fVar5) {
      iVar12 = 4;
      iVar10 = 4;
      fVar5 = (fVar6 - fVar5) / (fVar6 + fVar5);
      lVar13 = lVar11;
      do {
        iVar12 = iVar12 + -1;
        *(float *)((int)lVar13 + 0x38) = fVar5;
        lVar13 = lVar13 + 4;
      } while (iVar12 != 0);
      fVar5 = fVar5 * fVar5;
      lVar13 = uVar9 - 0x50;
      fVar6 = fVar5 * fVar5;
      *(float *)((int)puVar4 + 0x3c) = *(float *)((int)puVar4 + 0x3c) * fVar5;
      *(float *)(puVar4 + 8) = *(float *)(puVar4 + 8) * fVar6;
      *(float *)((int)puVar4 + 0x44) = *(float *)((int)puVar4 + 0x44) * fVar6 * fVar5;
      do {
        iVar10 = iVar10 + -1;
        *(float *)((int)lVar13 + 0x38) = *(float *)((int)lVar13 + 0x28) * fVar6 * fVar6;
        lVar13 = lVar13 + 4;
      } while (iVar10 != 0);
      iVar12 = 8;
      iVar14 = 0;
      iVar10 = 8;
      lVar13 = lVar11;
      do {
        pfVar8 = (float *)((int)&DAT_007358e0 + iVar14);
        iVar12 = iVar12 + -1;
        iVar14 = iVar14 + 4;
        *(float *)((int)lVar13 + 0x38) = *(float *)((int)lVar13 + 0x38) * *pfVar8;
        lVar13 = lVar13 + 4;
      } while (iVar12 != 0);
      do {
        iVar10 = iVar10 + -1;
        iVar12 = (int)lVar11;
        lVar11 = lVar11 + 4;
        fVar1 = fVar1 + *(float *)(iVar12 + 0x38);
      } while (iVar10 != 0);
      fVar1 = (fVar1 + 0.7853982) * fVar3 + fVar2;
    }
    if (0.87266463 <= fVar1) {
      fVar2 = 1.0;
      fVar1 = SQRT(DAT_00969ee0 * DAT_00969ee0 + DAT_00969ee4 * DAT_00969ee4 + 0.0);
      if (fVar1 != 0.0) {
        fVar2 = 1.0 / fVar1;
      }
      fVar1 = -(g_heroVelocity * DAT_00969ee0 * fVar2) - DAT_00969dc4 * DAT_00969ee4 * fVar2;
      if (0.0 < fVar1) {
        g_heroVelocity = g_heroVelocity + DAT_00969ee0 * fVar2 * fVar1;
        DAT_00969dc4 = DAT_00969dc4 + DAT_00969ee4 * fVar2 * fVar1;
        DAT_00969dc8 = (DAT_00969dc8 + fVar2 * 0.0 * fVar1) - DAT_0071f418 * 54.0 * 2.0;
      }
    }
  }
  return;
}



//==== 0009c658  ns=hero  size=0x774
// sig: void Hero_KneeBumpMotion(int straightAhead)
// callers(2): 000a00f0 hero::Hero_AttackMotion; 000aaec0 hero::HandleHeroMovement
// callees(3): 00057820 collproc::CollLine; 00060780 collproc::CollHotspot; 00089480 hero::Hero_RelativeXYComponent

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void hero::Hero_KneeBumpMotion(int straightAhead)

{
  float fVar1;
  float fVar2;
  float fVar3;
  ulonglong *puVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float *pfVar8;
  undefined4 uVar9;
  short sVar10;
  MobyInstance *pMVar11;
  ulonglong uVar12;
  int iVar15;
  int iVar16;
  longlong lVar13;
  longlong lVar14;
  ulonglong unaff_r28;
  int iVar17;
  ulonglong unaff_r29;
  int iVar18;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  bool bVar19;
  ulonglong in_LR;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  ulonglong in_f30;
  ulonglong in_f31;
  double dVar24;
  float fVar25;
  
  uVar12 = ZEXT48(&stack0x00000000);
  lVar14 = uVar12 - 0x110;
  puVar4 = (ulonglong *)lVar14;
  *puVar4 = uVar12;
  puVar4[0x24] = in_LR;
  puVar4[0x20] = in_f30;
  puVar4[0x21] = in_f31;
  puVar4[0x1e] = unaff_r30;
  puVar4[0x1f] = unaff_r31;
  sVar10 = g_onMagnerail;
  puVar4[0x1d] = unaff_r29;
  puVar4[0x1c] = unaff_r28;
  if ((sVar10 == 0) &&
     (fVar25 = Hero_RelativeXYComponent(&g_heroVelocity), fVar6 = g_heroPosition.z,
     fVar3 = g_heroPosition.y, fVar2 = g_heroPosition.x, mobyutil::g_FrameTime * 0.1 <= fVar25)) {
    fVar25 = 0.37;
    fVar1 = 0.5;
    if ((g_heroStateType == 0x11) || (g_heroStateType == 0x12)) {
      fVar25 = 0.0;
      fVar1 = 0.7;
    }
    else if (g_heroType == '\x01') {
      fVar25 = 0.35;
      fVar1 = 0.27;
    }
    else if (g_heroType == '\x02') {
      fVar25 = 1.5;
      fVar1 = 5.0;
    }
    fVar5 = g_heroPosition.z + fVar25;
    *(float *)(puVar4 + 0xe) = g_heroPosition.x;
    *(float *)((int)puVar4 + 0x74) = fVar3;
    fVar7 = g_heroPosition.w;
    *(float *)(puVar4 + 0xf) = fVar6;
    *(float *)((int)puVar4 + 0x7c) = fVar7;
    *(float *)(puVar4 + 0x12) = fVar2;
    *(float *)((int)puVar4 + 0x94) = fVar3;
    *(float *)(puVar4 + 0x13) = fVar6;
    *(float *)((int)puVar4 + 0x9c) = fVar7;
    *(float *)(puVar4 + 0xf) = fVar5;
    *(float *)(puVar4 + 0x13) = fVar6 + fVar25 * 0.3;
    fVar25 = DAT_00969dc8;
    fVar6 = DAT_00969dc4;
    fVar2 = g_heroVelocity;
    fVar3 = g_heroRotation.z;
    if ((straightAhead != 0) ||
       (fVar5 = g_heroVelocity * g_heroVelocity, SQRT(fVar5 + DAT_00969dc4 * DAT_00969dc4) < 0.01))
    {
      fVar2 = g_heroRotation.z + 1.5707963;
      fVar6 = fVar2;
      if (3.1415925 - fVar2 <= fVar2) {
        fVar6 = 3.1415925 - fVar2;
      }
      if (fVar6 <= -3.1415925 - fVar2) {
        fVar6 = -3.1415925 - fVar2;
      }
      fVar7 = fVar6 * fVar6;
      fVar25 = fVar7 * fVar7 * fVar6;
      fVar5 = fVar7 * fVar25;
      fVar2 = 3.1415925 - g_heroRotation.z;
      bVar19 = fVar2 <= g_heroRotation.z;
      *(float *)(puVar4 + 0x10) =
           (fVar6 + fVar7 * fVar6 * -0.16666657 + fVar25 * 0.0083330255 + fVar5 * -0.0001980741 +
           fVar7 * fVar5 * 2.601887e-06) * fVar1;
      fVar6 = fVar3;
      if (bVar19) {
        fVar6 = fVar2;
      }
      fVar3 = -3.1415925 - fVar3;
      if (fVar6 <= fVar3) {
        fVar6 = fVar3;
      }
      fVar5 = fVar6 * fVar6;
      fVar25 = fVar5 * fVar5 * fVar6;
      fVar3 = fVar5 * fVar25;
      fVar2 = g_heroRotation.z + 1.5707963;
      *(float *)((int)puVar4 + 0x84) =
           (fVar6 + fVar5 * fVar6 * -0.16666657 + fVar25 * 0.0083330255 + fVar3 * -0.0001980741 +
           fVar5 * fVar3 * 2.601887e-06) * fVar1;
      *(undefined4 *)(puVar4 + 0x11) = 0;
      fVar3 = g_heroRotation.z;
      fVar6 = fVar2;
      if (3.1415925 - fVar2 <= fVar2) {
        fVar6 = 3.1415925 - fVar2;
      }
      if (fVar6 <= -3.1415925 - fVar2) {
        fVar6 = -3.1415925 - fVar2;
      }
      fVar7 = fVar6 * fVar6;
      fVar25 = fVar7 * fVar7 * fVar6;
      fVar5 = fVar7 * fVar25;
      fVar2 = 3.1415925 - g_heroRotation.z;
      bVar19 = fVar2 <= g_heroRotation.z;
      *(float *)(puVar4 + 0x14) =
           (fVar6 + fVar7 * fVar6 * -0.16666657 + fVar25 * 0.0083330255 + fVar5 * -0.0001980741 +
           fVar7 * fVar5 * 2.601887e-06) * fVar1 * 1.4;
      fVar6 = fVar3;
      if (bVar19) {
        fVar6 = fVar2;
      }
      fVar3 = -3.1415925 - fVar3;
      if (fVar6 <= fVar3) {
        fVar6 = fVar3;
      }
      fVar2 = fVar6 * fVar6;
      *(undefined4 *)(puVar4 + 0x15) = 0;
      fVar3 = fVar2 * fVar2 * fVar6;
      fVar25 = fVar2 * fVar3;
      *(float *)((int)puVar4 + 0xa4) =
           (fVar6 + fVar2 * fVar6 * -0.16666657 + fVar3 * 0.0083330255 + fVar25 * -0.0001980741 +
           fVar2 * fVar25 * 2.601887e-06) * fVar1 * 1.4;
    }
    else {
      fVar3 = DAT_00969dc4 * DAT_00969dc4;
      *(float *)((int)puVar4 + 0x84) = DAT_00969dc4;
      uVar9 = DAT_00969dcc;
      *(float *)(puVar4 + 0x11) = fVar25;
      *(undefined4 *)((int)puVar4 + 0x8c) = uVar9;
      *(float *)(puVar4 + 0x10) = fVar2;
      *(undefined4 *)((int)puVar4 + 0xac) = uVar9;
      fVar1 = fVar1 / SQRT(fVar5 + fVar3);
      fVar2 = fVar2 * fVar1;
      *(float *)(puVar4 + 0x10) = fVar2;
      *(float *)((int)puVar4 + 0x84) = fVar6 * fVar1;
      *(float *)(puVar4 + 0x11) = fVar1 * 0.0;
      *(float *)(puVar4 + 0x14) = fVar2 * 1.4;
      *(float *)((int)puVar4 + 0xa4) = fVar6 * fVar1 * 1.4;
      *(float *)(puVar4 + 0x15) = fVar1 * 0.0 * 1.4;
    }
    iVar17 = 4;
    iVar18 = 0;
    iVar16 = -1;
    *(float *)(puVar4 + 0x10) = *(float *)(puVar4 + 0x10) + *(float *)(puVar4 + 0xe);
    *(float *)((int)puVar4 + 0x84) = *(float *)((int)puVar4 + 0x84) + *(float *)((int)puVar4 + 0x74)
    ;
    *(float *)(puVar4 + 0x11) = *(float *)(puVar4 + 0x11) + *(float *)(puVar4 + 0xf);
    pMVar11 = g_heroMobyPtr;
    *(float *)(puVar4 + 0x14) = *(float *)(puVar4 + 0x14) + *(float *)(puVar4 + 0x12);
    *(float *)((int)puVar4 + 0xa4) = *(float *)((int)puVar4 + 0xa4) + *(float *)((int)puVar4 + 0x94)
    ;
    *(float *)(puVar4 + 0x15) = *(float *)(puVar4 + 0x15) + *(float *)(puVar4 + 0x13);
    iVar15 = collproc::CollLine(uVar12 - 0x80,uVar12 - 0x70,4,pMVar11,0);
    if ((iVar15 != 0) && (0 < CollOutput.poly)) {
      iVar16 = collproc::CollHotspot();
    }
    dVar24 = 0.0;
    dVar22 = dVar24;
    iVar15 = collproc::CollLine(uVar12 - 0xa0,uVar12 - 0x90,4,g_heroMobyPtr,0);
    fVar2 = CollOutput.normal.z;
    if ((iVar15 != 0) && (0 < CollOutput.poly)) {
      fVar3 = SQRT(CollOutput.normal.x * CollOutput.normal.x +
                   CollOutput.normal.y * CollOutput.normal.y);
      dVar20 = ABS((double)CollOutput.normal.z);
      dVar23 = ABS((double)fVar3);
      *(float *)(puVar4 + 0x16) = fVar3;
      *(float *)((int)puVar4 + 0xb4) = (float)(dVar20 - dVar23);
      iVar15 = (int)(((ulonglong)((uint)fVar2 >> 0x1c) & 8 |
                     (ulonglong)(*(uint *)((int)puVar4 + 0xb4) >> 0x1e) & 2 |
                     (ulonglong)(*(uint *)(puVar4 + 0x16) >> 0x1d) & 4) << 2);
      fVar3 = *(float *)(&mobyutil::g_atanQuadrantTable + iVar15);
      fVar2 = *(float *)(&DAT_00735904 + iVar15);
      dVar21 = dVar20;
      if (dVar22 <= (double)*(float *)((int)puVar4 + 0xb4)) {
        dVar21 = ABS((double)*(float *)(puVar4 + 0x16));
        dVar23 = dVar20;
      }
      if (dVar22 < dVar23) {
        iVar15 = 4;
        fVar6 = (float)(dVar21 - dVar23) / (float)(dVar21 + dVar23);
        lVar13 = lVar14;
        do {
          iVar15 = iVar15 + -1;
          *(float *)((int)lVar13 + 0xb8) = fVar6;
          lVar13 = lVar13 + 4;
        } while (iVar15 != 0);
        fVar6 = fVar6 * fVar6;
        lVar13 = uVar12 - 0x100;
        fVar25 = fVar6 * fVar6;
        *(float *)((int)puVar4 + 0xbc) = *(float *)((int)puVar4 + 0xbc) * fVar6;
        *(float *)(puVar4 + 0x18) = *(float *)(puVar4 + 0x18) * fVar25;
        *(float *)((int)puVar4 + 0xc4) = *(float *)((int)puVar4 + 0xc4) * fVar25 * fVar6;
        do {
          iVar17 = iVar17 + -1;
          *(float *)((int)lVar13 + 0xb8) = *(float *)((int)lVar13 + 0xa8) * fVar25 * fVar25;
          lVar13 = lVar13 + 4;
        } while (iVar17 != 0);
        iVar15 = 8;
        lVar13 = lVar14;
        do {
          iVar15 = iVar15 + -1;
          pfVar8 = (float *)((int)&DAT_007358e0 + iVar18);
          iVar18 = iVar18 + 4;
          *(float *)((int)lVar13 + 0xb8) = *(float *)((int)lVar13 + 0xb8) * *pfVar8;
          lVar13 = lVar13 + 4;
        } while (iVar15 != 0);
        iVar15 = 8;
        do {
          iVar15 = iVar15 + -1;
          iVar17 = (int)lVar14;
          lVar14 = lVar14 + 4;
          dVar22 = (double)(float)(dVar22 + (double)*(float *)(iVar17 + 0xb8));
        } while (iVar15 != 0);
        dVar22 = (double)((float)(dVar22 + 0.7853981852531433) * fVar3 + fVar2);
      }
    }
    if ((0.8726646304130554 <= dVar22) || (iVar16 == 0xc || iVar16 == 8)) {
      fVar3 = (float)dVar24;
      DAT_00969f20 = CollOutput.pMoby;
      fVar2 = 1.0;
      dVar22 = (double)SQRT(CollOutput.normal.x * CollOutput.normal.x +
                            CollOutput.normal.y * CollOutput.normal.y + fVar3 * fVar3);
      if (dVar22 != dVar24) {
        fVar2 = (float)(1.0 / dVar22);
      }
      CollOutput.normal.x = CollOutput.normal.x * fVar2;
      CollOutput.normal.y = CollOutput.normal.y * fVar2;
      CollOutput.normal.z = fVar3 * fVar2;
      dVar22 = (double)(-(float)((double)g_heroVelocity * (double)CollOutput.normal.x) -
                       (float)((double)DAT_00969dc4 * (double)CollOutput.normal.y));
      if (dVar24 < dVar22) {
        CollOutput.normal.x = (float)((double)CollOutput.normal.x * dVar22);
        CollOutput.normal.y = (float)((double)CollOutput.normal.y * dVar22);
        CollOutput.normal.z = (float)((double)CollOutput.normal.z * dVar22);
        g_heroVelocity = (float)((double)g_heroVelocity + (double)CollOutput.normal.x);
        DAT_00969dc4 = (float)((double)DAT_00969dc4 + (double)CollOutput.normal.y);
        DAT_00969dc8 = DAT_00969dc8 + CollOutput.normal.z;
      }
    }
  }
  return;
}



//==== 0009cdd0  ns=hero  size=0x100
// sig: void Hero_UpdateExternalThrust(float scale, float decel)
// callers(3): 0009de38 hero::Hero_JumpTurnTrans; 000a00f0 hero::Hero_AttackMotion; 000aaec0 hero::HandleHeroMovement
// callees(1): 000fe610 mobyutil::MB_SphericalToVector

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void hero::Hero_UpdateExternalThrust(float scale,float decel)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  
  dVar5 = (double)decel;
  dVar6 = (double)scale;
  mobyutil::MB_SphericalToVector(DAT_0096a610,DAT_0096a618,DAT_0096a614,&DAT_0096a600);
  fVar2 = (float)((double)DAT_0096a600 * dVar6);
  fVar3 = (float)((double)DAT_0096a604 * dVar6);
  fVar4 = (float)((double)DAT_0096a608 * dVar6);
  dVar6 = (double)SQRT(fVar2 * fVar2 + fVar3 * fVar3 + fVar4 * fVar4);
  if (dVar5 < dVar6) {
    if (dVar6 == 0.0) {
      DAT_0096a608 = 0.0;
      DAT_0096a604 = 0.0;
      DAT_0096a600 = 0.0;
    }
    else {
      fVar1 = (float)((double)(float)(dVar6 - dVar5) / dVar6);
      DAT_0096a600 = fVar2 * fVar1;
      DAT_0096a604 = fVar3 * fVar1;
      DAT_0096a608 = fVar4 * fVar1;
    }
  }
  else {
    DAT_0096a60c = 0;
    DAT_0096a608 = 0.0;
    DAT_0096a604 = 0.0;
    DAT_0096a600 = 0.0;
  }
  return;
}



//==== 0009ced0  ns=hero  size=0xa8
// sig: void Hero_ScaleMotion(float scale)
// callers(1): 000b72b0 hero::TransitionMovement
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void hero::Hero_ScaleMotion(float scale)

{
  DAT_00969de0 = DAT_00969de0 * scale;
  DAT_00969de4 = DAT_00969de4 * scale;
  DAT_00969de8 = DAT_00969de8 * scale;
  DAT_00969df0 = DAT_00969df0 * scale;
  DAT_00969df4 = DAT_00969df4 * scale;
  DAT_00969df8 = DAT_00969df8 * scale;
  g_heroVelocity = g_heroVelocity * scale;
  DAT_00969dc4 = DAT_00969dc4 * scale;
  DAT_00969dc8 = DAT_00969dc8 * scale;
  g_heroExternalMomentum = g_heroExternalMomentum * scale;
  DAT_00969e34 = DAT_00969e34 * scale;
  DAT_00969e38 = DAT_00969e38 * scale;
  g_storedNeutralSpeed = g_storedNeutralSpeed * scale;
  return;
}



//==== 0009cf98  ns=hero  size=0x2a4
// sig: void Hero_ForwardThrust(float amount, float * out, float * in)
// callers(5): 0009d270 hero::Hero_JumpTranslation; 0009de38 hero::Hero_JumpTurnTrans; 000a0f40 hero::Hero_EdgeStop; 000a1698 hero::Hero_ThrowWrench; 000aaec0 hero::HandleHeroMovement
// callees(1): 00500ca4 fastfunc::FastEulerToMtx1

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void hero::Hero_ForwardThrust(float amount,float *out,float *in)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  MobyInstance *pMVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_60;
  float local_5c;
  float local_58;
  float local_50;
  float local_4c;
  float local_48;
  float local_40;
  float local_3c;
  float local_38;
  
  dVar8 = (double)amount;
  if (g_heroGravityMode == 0) {
    fVar1 = *in;
    *out = fVar1;
    fVar2 = in[1];
    out[1] = fVar2;
    out[2] = in[2];
    out[3] = in[3];
    pMVar7 = g_heroMobyPtr;
    fVar3 = (g_heroMobyPtr->rotation).z + 1.5707963;
    fVar4 = fVar3;
    if (3.1415925 - fVar3 <= fVar3) {
      fVar4 = 3.1415925 - fVar3;
    }
    if (fVar4 <= -3.1415925 - fVar3) {
      fVar4 = -3.1415925 - fVar3;
    }
    fVar6 = fVar4 * fVar4;
    fVar3 = fVar6 * fVar6 * fVar4;
    fVar5 = fVar6 * fVar3;
    *out = fVar1 + (float)((double)(fVar4 + fVar6 * fVar4 * -0.16666657 + fVar3 * 0.0083330255 +
                                    fVar5 * -0.0001980741 + fVar6 * fVar5 * 2.601887e-06) * dVar8);
    fVar1 = (pMVar7->rotation).z;
    fVar3 = fVar1;
    if (3.1415925 - fVar1 <= fVar1) {
      fVar3 = 3.1415925 - fVar1;
    }
    if (fVar3 <= -3.1415925 - fVar1) {
      fVar3 = -3.1415925 - fVar1;
    }
    fVar1 = fVar3 * fVar3;
    fVar4 = fVar1 * fVar1 * fVar3;
    fVar5 = fVar1 * fVar4;
    out[1] = fVar2 + (float)((double)(fVar3 + fVar1 * fVar3 * -0.16666657 + fVar4 * 0.0083330255 +
                                      fVar5 * -0.0001980741 + fVar1 * fVar5 * 2.601887e-06) * dVar8)
    ;
  }
  else if (g_heroGravityMode < 3) {
    dVar9 = 0.0;
    dVar10 = (double)(float)(dVar8 * 0.0);
    fastfunc::FastEulerToMtx1(&local_70,&g_heroMobyPtr->rotation);
    fVar1 = *in;
    fVar2 = in[1];
    fVar3 = in[2];
    out[3] = in[3];
    *out = fVar1 + (float)((double)local_70 * dVar8) + (float)((double)local_60 * dVar10) +
                   (float)((double)local_50 * dVar9) + local_40 * local_74;
    out[1] = fVar2 + (float)((double)local_6c * dVar8) + (float)((double)local_5c * dVar10) +
                     (float)((double)local_4c * dVar9) + local_3c * local_74;
    out[2] = fVar3 + (float)((double)local_68 * dVar8) + (float)((double)local_58 * dVar10) +
                     (float)((double)local_48 * dVar9) + local_38 * local_74;
  }
  return;
}



//==== 0009d270  ns=hero  size=0x3f0
// sig: void Hero_JumpTranslation(float accel)
// callers(2): 0009de38 hero::Hero_JumpTurnTrans; 000aaec0 hero::HandleHeroMovement
// callees(5): 00088f00 hero::Hero_ForwardComponent; 00089038 hero::Hero_ScaleRelativeXY; 00089480 hero::Hero_RelativeXYComponent; 0009cf98 hero::Hero_ForwardThrust; 00109af0 mobyutil::Delt

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void hero::Hero_JumpTranslation(float accel)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  float fVar13;
  float local_20 [2];
  
  dVar9 = (double)accel;
  if (g_heroGravityMode == 0) {
    fVar13 = g_heroIdealSpeed;
    if ((((g_heroStateType == 4) && (DAT_00969fea == 0)) && (DAT_0096a184 != 0)) &&
       (DAT_00969f37 != '\0')) {
      fVar13 = mobyutil::g_FrameTime * 2.1;
    }
    if (((DAT_00969fea != 0) && (g_heroState == DOUBLE_JUMP)) && (mobyutil::g_FrameTime < fVar13)) {
      fVar13 = mobyutil::g_FrameTime;
    }
    fVar1 = g_heroIdealRotZ + 1.5707963;
    fVar2 = fVar1;
    if (3.1415925 - fVar1 <= fVar1) {
      fVar2 = 3.1415925 - fVar1;
    }
    if (fVar2 <= -3.1415925 - fVar1) {
      fVar2 = -3.1415925 - fVar1;
    }
    fVar1 = fVar2 * fVar2;
    fVar3 = fVar1 * fVar1 * fVar2;
    fVar4 = fVar1 * fVar3;
    fVar1 = (fVar2 + fVar1 * fVar2 * -0.16666657 + fVar3 * 0.0083330255 + fVar4 * -0.0001980741 +
            fVar1 * fVar4 * 2.601887e-06) * fVar13;
    fVar2 = g_heroIdealRotZ;
    if (3.1415925 - g_heroIdealRotZ <= g_heroIdealRotZ) {
      fVar2 = 3.1415925 - g_heroIdealRotZ;
    }
    if (fVar2 <= -3.1415925 - g_heroIdealRotZ) {
      fVar2 = -3.1415925 - g_heroIdealRotZ;
    }
    fVar5 = fVar2 * fVar2;
    fVar3 = fVar5 * fVar5 * fVar2;
    fVar4 = fVar5 * fVar3;
    fVar13 = (fVar2 + fVar5 * fVar2 * -0.16666657 + fVar3 * 0.0083330255 + fVar4 * -0.0001980741 +
             fVar5 * fVar4 * 2.601887e-06) * fVar13;
    dVar12 = 0.0;
    fVar2 = SQRT(fVar1 * fVar1 + fVar13 * fVar13);
    fVar3 = SQRT(g_heroVelocity * g_heroVelocity + DAT_00969dc4 * DAT_00969dc4);
    dVar8 = dVar12;
    if ((fVar2 != 0.0) && (fVar3 != 0.0)) {
      dVar8 = (double)((-(g_heroVelocity * fVar1 + DAT_00969dc4 * fVar13) / fVar2) / fVar3);
    }
    dVar8 = (double)((float)(dVar8 + 1.0) * 1.5);
    if (g_heroState == THRUSTER_PACK_HOVER) {
      if (1.7000000476837158 < dVar8) {
        dVar8 = 1.7000000476837158;
      }
      if (dVar8 < 1.0) {
        dVar8 = 1.0;
      }
    }
    else {
      if (3.0 < dVar8) {
        dVar8 = 3.0;
      }
      if (dVar8 < 1.0) {
        dVar8 = 1.0;
      }
    }
    dVar10 = (double)(fVar1 - g_heroVelocity);
    dVar6 = (double)(fVar13 - DAT_00969dc4);
    fVar13 = SQRT((float)(dVar10 * dVar10) + (float)(dVar6 * dVar6));
    dVar7 = dVar6;
    dVar11 = dVar10;
    if (((float)(dVar9 * dVar8) < fVar13) && (dVar7 = dVar12, dVar11 = dVar12, fVar13 != 0.0)) {
      dVar9 = (double)((float)(dVar9 * dVar8) / fVar13);
      dVar7 = (double)(float)(dVar6 * dVar9);
      dVar11 = (double)(float)(dVar10 * dVar9);
    }
    g_heroVelocity = (float)((double)g_heroVelocity + dVar11);
    DAT_00969dc4 = (float)((double)DAT_00969dc4 + dVar7);
    DAT_00969dc8 = DAT_00969dc8 + (DAT_00969dc8 - DAT_00969dc8);
    DAT_00969e1c = DAT_00969dcc;
    DAT_00969e10 = g_heroVelocity;
    DAT_00969e14 = DAT_00969dc4;
    DAT_00969e18 = DAT_00969dc8;
    fVar13 = Hero_ForwardComponent(DAT_0096a604);
    g_storedNeutralSpeed = DAT_00969e48 - fVar13;
  }
  else if (g_heroGravityMode < 3) {
    local_20[0] = Hero_RelativeXYComponent(&g_heroVelocity);
    mobyutil::Delt(g_heroIdealSpeed,(float)dVar9,local_20);
    Hero_ScaleRelativeXY(0.0,&g_heroVelocity,&g_heroVelocity);
    Hero_ForwardThrust(local_20[0],&g_heroVelocity,&g_heroVelocity);
  }
  return;
}



//==== 0009d6b0  ns=hero  size=0x6c4
// sig: undefined Hero_JumpThrustGrav(void)
// callers(1): 000aaec0 hero::HandleHeroMovement
// callees(6): 0007cf28 hero::Hero_AddGravity; 000817ec hero::Hero_SetRelativeZ; 00084830 hero::Hero_RelativeZComponent; 000886d0 hero::Hero_AddRelativeZ; 00109af0 mobyutil::Delt; 0015d12c sound::PlayMobySound

void hero::Hero_JumpThrustGrav(void)

{
  undefined1 auVar1 [16];
  bool bVar2;
  MobyInstance *pMoby;
  int iVar3;
  double dVar4;
  float fVar5;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50 [4];
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  longlong local_30;
  
  pMoby = g_ratchetMoby;
  if (g_heroState == DOUBLE_JUMP) {
    bVar2 = false;
    dVar4 = (double)(mobyutil::g_FrameTime * 7.0);
    if ((UnlockableItems.heliPack != '\0') && (g_hasClank == 0)) {
      iVar3 = -1;
      if (DAT_0096ae84 == 2) {
        iVar3 = DAT_0096ae88;
      }
      if (iVar3 == 3) {
        bVar2 = true;
      }
    }
    if (Level != Oltanis) {
      iVar3 = -1;
      if (DAT_0096ae84 == 2) {
        iVar3 = DAT_0096ae88;
      }
      if ((iVar3 == 3) &&
         (local_30 = (longlong)(int)(animationSpeed * 5.5),
         g_heroStateTimer == (int)(animationSpeed * 5.5))) {
        if (g_heroType == '\x03') {
          if (g_ratchetMoby != (MobyInstance *)0x0) {
            (g_ratchetMoby->pos).x = g_heroPosition.x;
            (pMoby->pos).y = g_heroPosition.y;
            (pMoby->pos).z = g_heroPosition.z;
            (pMoby->pos).w = g_heroPosition.w;
            sound::PlayMobySound(1,0,pMoby);
          }
        }
        else {
          sound::PlayMobySound(1,0,g_heroMobyPtr);
        }
      }
    }
    local_60 = g_heroPosition.x - DAT_0096a0e0;
    local_5c = g_heroPosition.y - DAT_0096a0e4;
    local_58 = g_heroPosition.z - DAT_0096a0e8;
    local_54 = g_heroPosition.w;
    fVar5 = Hero_RelativeZComponent(&local_60);
    if (bVar2) {
      if (fVar5 <= 2.7) {
        if (2.1 < fVar5) {
          dVar4 = (double)(float)(dVar4 * 0.699999988079071);
        }
      }
      else {
        dVar4 = (double)(float)(dVar4 * 0.4699999988079071);
      }
    }
    else if (fVar5 <= 2.1) {
      if (1.7 < fVar5) {
        dVar4 = (double)(float)(dVar4 * 0.699999988079071);
      }
    }
    else {
      dVar4 = (double)(float)(dVar4 * 0.44999998807907104);
    }
    iVar3 = -1;
    if (DAT_0096ae84 == 2) {
      iVar3 = DAT_0096ae88;
    }
    if ((iVar3 == 3) && (g_hasClank == 0)) {
      dVar4 = (double)(float)(dVar4 * 1.25);
    }
    local_30 = (longlong)(int)(animationSpeed * 8.5);
    if (g_heroStateTimer < (int)(animationSpeed * 8.5)) {
      local_50[0] = Hero_RelativeZComponent((float *)&g_heroVelocity);
      if ((double)local_50[0] < dVar4) {
        mobyutil::Delt((float)dVar4,DAT_0071f418 * 150.0,local_50);
      }
      Hero_SetRelativeZ(local_50[0],(float *)&g_heroVelocity,(float *)&g_heroVelocity);
    }
  }
  else {
    dVar4 = 0.0;
    bVar2 = false;
    if ((DAT_0096a108 == 0.0) && (DAT_0096a10c == 0.0)) {
      bVar2 = true;
    }
    if (((g_downButtons & CROSS) != 0 || bVar2) || (g_heroState == WATER_JUMP)) {
      if ((DAT_0096a110 < DAT_0096a16c) &&
         (local_30 = (longlong)(int)(animationSpeed * 15.5),
         g_heroStateTimer <= (int)(animationSpeed * 15.5))) {
        local_30 = (longlong)(int)DAT_0096a178;
        local_40 = DAT_0096a110 + (DAT_0096a16c - DAT_0096a168) / (float)local_30;
        auVar1 = auRam00000000 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar1 = (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar1 = (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar1 = (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar1 = (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar1 = (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar1 = (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar1 = (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar1 = (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar1 = (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar1 = (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar1 = (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar1 = (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar1 = (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar1 = (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar1 = (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar1 = (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar1 = (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar1 = (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar1 = (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar1 = (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar1 = (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar1 = (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar1 = (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar1 = (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar1 = (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar1 = (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar1 = (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar1 = (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar1 = (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar1 = (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar1 = (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar1 = (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar1 = (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar1 = (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar1 = (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        DAT_0096a110 = (float)storeVectorElementWordIndexed
                                        (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60,
                                         0x430,0x969ce0);
        if (DAT_0096a16c < local_40) {
          DAT_0096a110 = DAT_0096a16c;
        }
        DAT_0096a108 = DAT_0096a108 +
                       ((SQRT(DAT_0096a110 * 2.0 * DAT_0096a180) - DAT_0096a10c) - DAT_0096a108);
        local_3c = local_40;
        local_38 = local_40;
        local_34 = local_40;
      }
    }
    if (DAT_0096a100 <= g_heroStateTimer) {
      if (0.0 < DAT_0096a108) {
        Hero_AddRelativeZ(DAT_0096a108,(float *)&g_heroVelocity,(float *)&g_heroVelocity);
        DAT_0096a10c = DAT_0096a10c + DAT_0096a108;
        DAT_0096a108 = (float)dVar4;
      }
    }
    if (((DAT_0096a0fc != 0) && (DAT_0096a0b0 <= g_heroStateTimer)) &&
       (g_heroStateTimer < DAT_0096a0b4)) {
      DAT_0096a0cc = DAT_0096a0cc + 1;
LAB_0009db6c:
      if (DAT_0096a0c8 != -1) {
        iVar3 = (int)(animationSpeed *
                     ((float)(longlong)*(int *)(DAT_0096a0c4 + 8 + DAT_0096a0c8 * 0xc) + 0.5));
        local_30 = (longlong)iVar3;
        if (DAT_0096a0cc < iVar3) goto LAB_0009dc24;
      }
      DAT_0096a0cc = 0;
      DAT_0096a0c8 = DAT_0096a0c8 + 1;
      if (*(float *)(DAT_0096a0c4 + DAT_0096a0c8 * 0xc) != -999999.0) {
        DAT_0096a0d0 = *(float *)(DAT_0096a0c4 + DAT_0096a0c8 * 0xc) * DAT_0071f418;
      }
      goto LAB_0009db6c;
    }
  }
LAB_0009dc64:
  if (((g_heroState != EDGE_JUMP) && (g_heroState != CLANK_EDGE_JUMP)) ||
     (local_30 = (longlong)(int)(animationSpeed * 10.5),
     (int)(animationSpeed * 10.5) <= g_heroStateTimer)) {
    if (g_heroStateTimer < DAT_0096a100) {
      Hero_SetRelativeZ(0.0,(float *)&g_heroVelocity,(float *)&g_heroVelocity);
      Hero_AddGravity(DAT_0071f418 * 48.0,(float *)&g_heroVelocity,(float *)&g_heroVelocity);
    }
    else {
      Hero_AddGravity(DAT_0096a180,(float *)&g_heroVelocity,(float *)&g_heroVelocity);
      fVar5 = Hero_RelativeZComponent((float *)&g_heroVelocity);
      dVar4 = (double)fVar5;
      fVar5 = Hero_RelativeZComponent((float *)&DAT_00969df0);
      if (dVar4 < (double)(fVar5 - 0.1)) {
        dVar4 = (double)(fVar5 - 0.1);
      }
      if (dVar4 < (double)(mobyutil::g_FrameTime * -50.0)) {
        dVar4 = (double)(mobyutil::g_FrameTime * -50.0);
      }
      Hero_SetRelativeZ((float)dVar4,(float *)&g_heroVelocity,(float *)&g_heroVelocity);
    }
  }
  return;
LAB_0009dc24:
  if (0 < DAT_0096a0cc) {
    DAT_0096a0d0 = DAT_0096a0d0 + *(float *)(DAT_0096a0c4 + 4 + DAT_0096a0c8 * 0xc) * DAT_0071f418;
  }
  Hero_AddRelativeZ(DAT_0096a0d0,(float *)&g_heroVelocity,(float *)&g_heroVelocity);
  goto LAB_0009dc64;
}



//==== 0009de38  ns=hero  size=0x10c4
// sig: undefined Hero_JumpTurnTrans(void)
// callers(1): 000aaec0 hero::HandleHeroMovement
// callees(12): 00089038 hero::Hero_ScaleRelativeXY; 000965bc hero::Hero_RotateAroundPoint; 0009b380 hero::Hero_GetIdealThrustFromPad; 0009ba88 hero::Hero_Turn3D; 0009cdd0 hero::Hero_UpdateExternalThrust; 0009cf98 hero::Hero_ForwardThrust; 0009d270 hero::Hero_JumpTranslation; 00109af0 mobyutil::Delt; 0010a050 mobyutil::AccelDeltAng; 0015d12c sound::PlayMobySound; 005025e0 fastfunc::FastDiffRots; 005026a0 fastfunc::FastSubRots
// strings: 0009dd74: '?333' (raw)

void hero::Hero_JumpTurnTrans(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  MobyInstance *pMoby;
  int iVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined1 local_70 [4];
  float local_6c;
  longlong local_68;
  
  pMoby = g_ratchetMoby;
  fVar1 = g_heroRotation.z;
  if (g_heroState == HELI_PACK_FWD_JUMP) {
    Hero_UpdateExternalThrust(0.7,0.0);
    g_heroExternalMomentum = DAT_0096a600;
    DAT_00969e34 = DAT_0096a604;
    DAT_00969e38 = DAT_0096a608;
    DAT_00969e3c = DAT_0096a60c;
    g_storedNeutralSpeed = DAT_00969e44;
  }
  else if (g_heroState == THRUSTER_PACK_FORWARD_JUMP) {
    local_68 = (longlong)(int)(animationSpeed * 54.5);
    if ((int)(animationSpeed * 54.5) < g_heroStateTimer) {
      mobyutil::Delt(DAT_0071f418 * 25.0,DAT_0071f418 * 7.0,(float *)&DAT_0096a180);
    }
    local_68 = (longlong)(int)(animationSpeed * 55.5);
    g_heroIdealSpeed = DAT_0096a0d4;
    if ((int)(animationSpeed * 55.5) <= g_heroStateTimer) {
      g_heroIdealSpeed = mobyutil::g_FrameTime * 3.5;
    }
    if (g_heroIdealSpeed <= g_storedNeutralSpeed) {
      mobyutil::Delt(g_heroIdealSpeed,DAT_0071f418 * 45.0,&g_storedNeutralSpeed);
    }
    else {
      mobyutil::Delt(g_heroIdealSpeed,DAT_0071f418 * 44.0,&g_storedNeutralSpeed);
    }
    Hero_ScaleRelativeXY(0.0,&g_heroVelocity,&g_heroVelocity);
    Hero_ForwardThrust(g_storedNeutralSpeed,&g_heroVelocity,&g_heroVelocity);
  }
  else if (g_heroState == EDGE_JUMP) {
    local_68 = (longlong)(int)(animationSpeed * 40.5);
    if ((int)(animationSpeed * 40.5) < g_heroStateTimer) {
      if (g_heroGravityMode == '\0') {
        dVar6 = (double)mobyutil::AccelDeltAng
                                  ((double)g_heroIdealRotZ,(double)(DAT_0071f40c * 0.04),
                                   (double)(DAT_0071f40c * 0.2),
                                   (double)(mobyutil::g_FrameTime * 15.009831),0x969d78,
                                   &DAT_00720000,&DAT_00969e64);
        DAT_00969e68 = (float)dVar6;
      }
      else {
        Hero_Turn3D(DAT_0071f40c * 0.04,DAT_0071f40c * 0.2,mobyutil::g_FrameTime * 15.009831);
      }
      Hero_JumpTranslation(DAT_0071f418 * 20.0);
    }
    if ((13.0 <= g_heroAnimFrame) && (g_heroAnimFrame <= 30.0)) {
      if (g_heroAnimFrame <= 27.0) {
        mobyutil::Delt(mobyutil::g_FrameTime * 2.0,DAT_0071f418 * 8.0,&DAT_0096a13c);
      }
      else {
        mobyutil::Delt(0.0,DAT_0071f418 * 8.0,&DAT_0096a13c);
      }
    }
    fVar1 = g_heroRotation.z + 1.5707963;
    fVar2 = fVar1;
    if (3.1415925 - fVar1 <= fVar1) {
      fVar2 = 3.1415925 - fVar1;
    }
    if (fVar2 <= -3.1415925 - fVar1) {
      fVar2 = -3.1415925 - fVar1;
    }
    fVar1 = fVar2 * fVar2;
    fVar3 = fVar1 * fVar1 * fVar2;
    fVar4 = fVar1 * fVar3;
    g_heroVelocity =
         (fVar2 + fVar1 * fVar2 * -0.16666657 + fVar3 * 0.0083330255 + fVar4 * -0.0001980741 +
         fVar1 * fVar4 * 2.601887e-06) * DAT_0096a13c;
    fVar1 = g_heroRotation.z;
    if (3.1415925 - g_heroRotation.z <= g_heroRotation.z) {
      fVar1 = 3.1415925 - g_heroRotation.z;
    }
    if (fVar1 <= -3.1415925 - g_heroRotation.z) {
      fVar1 = -3.1415925 - g_heroRotation.z;
    }
    fVar4 = fVar1 * fVar1;
    fVar2 = fVar4 * fVar4 * fVar1;
    fVar3 = fVar4 * fVar2;
    DAT_00969dc4 = (fVar1 + fVar4 * fVar1 * -0.16666657 + fVar2 * 0.0083330255 +
                    fVar3 * -0.0001980741 + fVar4 * fVar3 * 2.601887e-06) * DAT_0096a13c;
  }
  else if (g_heroState == CLANK_EDGE_JUMP) {
    if ((5.0 <= g_heroAnimFrame) && (g_heroAnimFrame <= 18.0)) {
      if (g_heroAnimFrame <= 15.0) {
        mobyutil::Delt(mobyutil::g_FrameTime * 1.25,DAT_0071f418 * 8.0,&DAT_0096a13c);
      }
      else {
        mobyutil::Delt(0.0,DAT_0071f418 * 8.0,&DAT_0096a13c);
      }
    }
    fVar1 = g_heroRotation.z + 1.5707963;
    fVar2 = fVar1;
    if (3.1415925 - fVar1 <= fVar1) {
      fVar2 = 3.1415925 - fVar1;
    }
    if (fVar2 <= -3.1415925 - fVar1) {
      fVar2 = -3.1415925 - fVar1;
    }
    fVar1 = fVar2 * fVar2;
    fVar3 = fVar1 * fVar1 * fVar2;
    fVar4 = fVar1 * fVar3;
    g_heroVelocity =
         (fVar2 + fVar1 * fVar2 * -0.16666657 + fVar3 * 0.0083330255 + fVar4 * -0.0001980741 +
         fVar1 * fVar4 * 2.601887e-06) * DAT_0096a13c;
    fVar1 = g_heroRotation.z;
    if (3.1415925 - g_heroRotation.z <= g_heroRotation.z) {
      fVar1 = 3.1415925 - g_heroRotation.z;
    }
    if (fVar1 <= -3.1415925 - g_heroRotation.z) {
      fVar1 = -3.1415925 - g_heroRotation.z;
    }
    fVar4 = fVar1 * fVar1;
    fVar2 = fVar4 * fVar4 * fVar1;
    fVar3 = fVar4 * fVar2;
    DAT_00969dc4 = (fVar1 + fVar4 * fVar1 * -0.16666657 + fVar2 * 0.0083330255 +
                    fVar3 * -0.0001980741 + fVar4 * fVar3 * 2.601887e-06) * DAT_0096a13c;
  }
  else if ((g_heroState == FLIP_JUMP) || (g_heroState == UNK_C)) {
    if (Level != Oltanis) {
      iVar5 = -1;
      if (DAT_0096ae84 == 2) {
        iVar5 = DAT_0096ae88;
      }
      if ((iVar5 == 3) &&
         (local_68 = (longlong)(int)(animationSpeed * 5.5),
         g_heroStateTimer == (int)(animationSpeed * 5.5))) {
        if (g_heroType == '\x03') {
          if (g_ratchetMoby != (MobyInstance *)0x0) {
            (g_ratchetMoby->pos).x = g_heroPosition.x;
            (pMoby->pos).y = g_heroPosition.y;
            (pMoby->pos).z = g_heroPosition.z;
            (pMoby->pos).w = g_heroPosition.w;
            sound::PlayMobySound(1,0,pMoby);
          }
        }
        else {
          sound::PlayMobySound(1,0,g_heroMobyPtr);
        }
      }
    }
    g_heroIdealRotZ = DAT_0096a11c;
    if (g_heroGravityMode == '\0') {
      dVar6 = (double)mobyutil::AccelDeltAng
                                ((double)DAT_0096a11c,(double)(DAT_0071f40c * 0.04),
                                 (double)(DAT_0071f40c * 0.2),
                                 (double)(mobyutil::g_FrameTime * 6.981317),0x969d78,&DAT_00720000,
                                 &DAT_00969e64);
      DAT_00969e68 = (float)dVar6;
    }
    else {
      Hero_Turn3D(DAT_0071f40c * 0.04,DAT_0071f40c * 0.2,mobyutil::g_FrameTime * 6.981317);
    }
    g_storedNeutralSpeed = DAT_0096a134;
    if (DAT_0096a130 == 3) {
      g_storedNeutralSpeed = 0.0;
    }
    if (g_heroState == FLIP_JUMP) {
      if ((DAT_0096a0fe == 0) ||
         (local_68 = (longlong)(int)(animationSpeed * 12.5),
         (int)(animationSpeed * 12.5) <= DAT_0096a12c)) {
        mobyutil::Delt(mobyutil::g_FrameTime * 4.2,DAT_0071f418 * 8.0,&DAT_0096a138);
      }
      else {
        mobyutil::Delt(0.0,DAT_0071f418 * 8.0,&DAT_0096a138);
      }
    }
    dVar18 = 1.570796251296997;
    dVar6 = 3.141592502593994;
    fVar2 = DAT_0096a118 + 1.5707963;
    fVar1 = fVar2;
    if (3.1415925 - fVar2 <= fVar2) {
      fVar1 = 3.1415925 - fVar2;
    }
    dVar14 = -3.141592502593994;
    if (fVar1 <= -3.1415925 - fVar2) {
      fVar1 = -3.1415925 - fVar2;
    }
    fVar4 = fVar1 * fVar1;
    dVar17 = -0.16666656732559204;
    dVar11 = 0.008333025500178337;
    dVar16 = -0.0001980741071747616;
    dVar15 = 2.601886990305502e-06;
    fVar2 = fVar4 * fVar4 * fVar1;
    fVar3 = fVar4 * fVar2;
    g_heroVelocity =
         (fVar1 + fVar4 * fVar1 * -0.16666657 + fVar2 * 0.0083330255 + fVar3 * -0.0001980741 +
         fVar4 * fVar3 * 2.601887e-06) * DAT_0096a138;
    fVar1 = DAT_0096a118;
    if (3.1415925 - DAT_0096a118 <= DAT_0096a118) {
      fVar1 = 3.1415925 - DAT_0096a118;
    }
    if (fVar1 <= -3.1415925 - DAT_0096a118) {
      fVar1 = -3.1415925 - DAT_0096a118;
    }
    fVar4 = fVar1 * fVar1;
    fVar2 = fVar4 * fVar4 * fVar1;
    fVar3 = fVar4 * fVar2;
    DAT_00969dc4 = (fVar1 + fVar4 * fVar1 * -0.16666657 + fVar2 * 0.0083330255 +
                    fVar3 * -0.0001980741 + fVar4 * fVar3 * 2.601887e-06) * DAT_0096a138;
    dVar7 = (double)fastfunc::FastSubRots(DAT_0096a11c,DAT_0096a118);
    dVar12 = dVar7;
    if ((double)(float)(dVar6 - dVar7) <= dVar7) {
      dVar12 = (double)(float)(dVar6 - dVar7);
    }
    if (dVar12 <= (double)(float)(dVar14 - dVar7)) {
      dVar12 = (double)(float)(dVar14 - dVar7);
    }
    dVar9 = (double)(float)(dVar12 * dVar12);
    dVar10 = (double)(float)(dVar9 * (double)(float)(dVar9 * dVar12));
    dVar7 = (double)DAT_0096a11c;
    dVar13 = (double)(float)(dVar9 * dVar10);
    dVar19 = (double)(float)(dVar7 + dVar18);
    fVar1 = DAT_0096a134 *
            ((float)(dVar12 + (double)(float)((double)(float)(dVar9 * dVar12) * dVar17)) +
             (float)(dVar10 * dVar11) + (float)(dVar13 * dVar16) +
            (float)((double)(float)(dVar9 * dVar13) * dVar15));
    dVar18 = dVar19;
    if ((double)(float)(dVar6 - dVar19) <= dVar19) {
      dVar18 = (double)(float)(dVar6 - dVar19);
    }
    if (dVar18 <= (double)(float)(dVar14 - dVar19)) {
      dVar18 = (double)(float)(dVar14 - dVar19);
    }
    dVar12 = (double)(float)(dVar18 * dVar18);
    dVar9 = (double)(float)(dVar12 * (double)(float)(dVar12 * dVar18));
    dVar10 = (double)(float)(dVar12 * dVar9);
    g_heroVelocity =
         g_heroVelocity +
         ((float)(dVar18 + (double)(float)((double)(float)(dVar12 * dVar18) * dVar17)) +
          (float)(dVar9 * dVar11) + (float)(dVar10 * dVar16) +
         (float)((double)(float)(dVar12 * dVar10) * dVar15)) * fVar1;
    dVar18 = dVar7;
    if ((double)(float)(dVar6 - dVar7) <= dVar7) {
      dVar18 = (double)(float)(dVar6 - dVar7);
    }
    if (dVar18 <= (double)(float)(dVar14 - dVar7)) {
      dVar18 = (double)(float)(dVar14 - dVar7);
    }
    dVar6 = (double)(float)(dVar18 * dVar18);
    dVar14 = (double)(float)(dVar6 * (double)(float)(dVar6 * dVar18));
    dVar12 = (double)(float)(dVar6 * dVar14);
    DAT_00969dc4 = DAT_00969dc4 +
                   ((float)(dVar18 + (double)(float)((double)(float)(dVar6 * dVar18) * dVar17)) +
                    (float)(dVar14 * dVar11) + (float)(dVar12 * dVar16) +
                   (float)((double)(float)(dVar6 * dVar12) * dVar15)) * fVar1;
    Hero_UpdateExternalThrust(0.7,0.0);
    g_heroExternalMomentum = DAT_0096a600;
    DAT_00969e34 = DAT_0096a604;
    DAT_00969e38 = DAT_0096a608;
    DAT_00969e3c = DAT_0096a60c;
  }
  else if (g_heroState == WALL_JUMP) {
    g_heroIdealRotZ = DAT_0096a15c;
    DAT_00969e50 = DAT_0096a150;
    DAT_00969e54 = DAT_0096a154;
    DAT_00969e58 = DAT_0096a158;
    DAT_00969e5c = DAT_0096a15c;
    dVar6 = 9.5;
    local_68 = (longlong)(int)(animationSpeed * 9.5);
    if ((int)(animationSpeed * 9.5) < g_heroStateTimer) {
      if (g_heroGravityMode == '\0') {
        dVar18 = (double)mobyutil::AccelDeltAng
                                   ((double)DAT_0096a15c,(double)(DAT_0071f40c * 0.042),
                                    (double)(DAT_0071f40c * 0.2),
                                    (double)(mobyutil::g_FrameTime * 11.868238),0x969d78,
                                    &DAT_00720000,&DAT_00969e64);
        DAT_00969e68 = (float)dVar18;
      }
      else {
        Hero_Turn3D(DAT_0071f40c * 0.042,DAT_0071f40c * 0.2,mobyutil::g_FrameTime * 11.868238);
      }
    }
    local_68 = (longlong)(int)((double)animationSpeed * dVar6);
    if ((int)((double)animationSpeed * dVar6) <= g_heroStateTimer) {
      if (g_onMagnerail == 0) {
        fVar1 = g_heroIdealRotZ + 1.5707963;
        fVar2 = fVar1;
        if (3.1415925 - fVar1 <= fVar1) {
          fVar2 = 3.1415925 - fVar1;
        }
        if (fVar2 <= -3.1415925 - fVar1) {
          fVar2 = -3.1415925 - fVar1;
        }
        fVar1 = fVar2 * fVar2;
        fVar3 = fVar1 * fVar1 * fVar2;
        fVar4 = fVar1 * fVar3;
        g_heroVelocity =
             mobyutil::g_FrameTime * 4.9 *
             (fVar2 + fVar1 * fVar2 * -0.16666657 + fVar3 * 0.0083330255 + fVar4 * -0.0001980741 +
             fVar1 * fVar4 * 2.601887e-06);
        fVar1 = g_heroIdealRotZ;
        if (3.1415925 - g_heroIdealRotZ <= g_heroIdealRotZ) {
          fVar1 = 3.1415925 - g_heroIdealRotZ;
        }
        if (fVar1 <= -3.1415925 - g_heroIdealRotZ) {
          fVar1 = -3.1415925 - g_heroIdealRotZ;
        }
        fVar4 = fVar1 * fVar1;
        fVar2 = fVar4 * fVar4 * fVar1;
        fVar3 = fVar4 * fVar2;
        DAT_00969dc4 = mobyutil::g_FrameTime * 4.9 *
                       (fVar1 + fVar4 * fVar1 * -0.16666657 + fVar2 * 0.0083330255 +
                        fVar3 * -0.0001980741 + fVar4 * fVar3 * 2.601887e-06);
      }
      else {
        dVar14 = 0.0;
        Hero_ScaleRelativeXY(0.0,&g_heroVelocity,&g_heroVelocity);
        dVar11 = (double)SQRT(DAT_00969e50 * DAT_00969e50 + DAT_00969e54 * DAT_00969e54 +
                              DAT_00969e58 * DAT_00969e58);
        dVar6 = dVar14;
        dVar18 = dVar14;
        if (dVar11 != dVar14) {
          fVar1 = (float)((double)(mobyutil::g_FrameTime * 4.9) / dVar11);
          dVar14 = (double)(DAT_00969e54 * fVar1);
          dVar6 = (double)(DAT_00969e58 * fVar1);
          dVar18 = (double)(DAT_00969e50 * fVar1);
        }
        g_heroVelocity = (float)((double)g_heroVelocity + dVar18);
        DAT_00969dc4 = (float)((double)DAT_00969dc4 + dVar14);
        DAT_00969dc8 = (float)((double)DAT_00969dc8 + dVar6);
      }
    }
    g_storedNeutralSpeed = DAT_00969e44;
  }
  else {
    if (g_heroState == DISENGAGE_YELLOW_SWINGSHOT) {
      dVar6 = (double)mobyutil::AccelDeltAng
                                ((double)g_heroIdealRotZ,(double)(DAT_0071f40c * 0.018),
                                 (double)(DAT_0071f40c * 0.2),
                                 (double)(mobyutil::g_FrameTime * 7.330383),local_70,&DAT_00720000,
                                 &DAT_00969e64);
      DAT_00969e68 = (float)dVar6;
      uVar8 = fastfunc::FastDiffRots((double)fVar1,(double)g_heroRotation.z);
      Hero_RotateAroundPoint(0,0,uVar8,0,0x3f19999a00000000);
    }
    else if (g_heroGravityMode == '\0') {
      dVar6 = (double)mobyutil::AccelDeltAng
                                ((double)g_heroIdealRotZ,(double)(DAT_0071f40c * 0.04),
                                 (double)(DAT_0071f40c * 0.2),(double)DAT_0096a0f4,0x969d78,
                                 &DAT_00720000,&DAT_00969e64);
      DAT_00969e68 = (float)dVar6;
    }
    else {
      Hero_Turn3D(DAT_0071f40c * 0.04,DAT_0071f40c * 0.2,DAT_0096a0f4);
    }
    dVar6 = 0.0;
    Hero_UpdateExternalThrust(0.7,0.0);
    g_heroExternalMomentum = DAT_0096a600;
    DAT_00969e34 = DAT_0096a604;
    DAT_00969e38 = DAT_0096a608;
    DAT_00969e3c = DAT_0096a60c;
    fVar1 = DAT_0071f418 * 20.0;
    if (g_heroIdealSpeed < DAT_00723320 * mobyutil::g_FrameTime * 0.2) {
      if (g_heroStateType == 2) {
        fVar1 = DAT_0096a624;
        if (DAT_0096afc2 != '\0') {
          fVar1 = DAT_0071f418 * 0.17;
        }
        local_6c = SQRT(g_heroVelocity * g_heroVelocity + DAT_00969dc4 * DAT_00969dc4);
        mobyutil::Delt((float)dVar6,fVar1,&local_6c);
        dVar18 = (double)SQRT(g_heroVelocity * g_heroVelocity + DAT_00969dc4 * DAT_00969dc4);
        if (dVar18 == dVar6) {
          g_heroVelocity = (float)dVar6;
          DAT_00969dc4 = (float)dVar6;
          return;
        }
        fVar1 = (float)((double)local_6c / dVar18);
        g_heroVelocity = g_heroVelocity * fVar1;
        DAT_00969dc4 = DAT_00969dc4 * fVar1;
        return;
      }
      if (DAT_00969fea == 0) {
        fVar1 = DAT_0071f418 * 2.0;
      }
      else {
        fVar1 = DAT_0071f418 * 6.0;
      }
    }
    if ((DAT_0096a188 != 0) && (DAT_0096afc2 != '\0')) {
      fVar1 = DAT_0071f418 * 0.17;
      if (g_heroState == HELI_PACK_HIGH_JUMP) {
        Hero_GetIdealThrustFromPad((double)(mobyutil::g_FrameTime * 2.5),&DAT_00720000,0);
        fVar1 = DAT_0071f418 * 3.0;
      }
      if (0.2617994 < g_heroGroundSlope) {
        g_heroIdealSpeed = (float)dVar6;
        fVar1 = DAT_0071f418 * 9.0 * g_heroGroundSlope * 1.2732395;
      }
    }
    Hero_JumpTranslation(fVar1);
  }
  return;
}



//==== 0009ef10  ns=hero  size=0x328
// sig: undefined Hero_SetAttackRot(void)
// callers(2): 000aaec0 hero::HandleHeroMovement; 000b72b0 hero::TransitionMovement
// callees(3): 000993d8 hero::Hero_ComputeTargetScore; 0009b380 hero::Hero_GetIdealThrustFromPad; 000fcccc mobyutil::MB_GetPvarsIfMobyHasThem

void hero::Hero_SetAttackRot(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  float fVar1;
  float fVar2;
  MobyInstance *moby;
  ulonglong *puVar3;
  float fVar4;
  float fVar5;
  ulonglong uVar6;
  float *pfVar9;
  longlong lVar7;
  longlong lVar8;
  int iVar10;
  ulonglong unaff_r26;
  int iVar11;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  int iVar12;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  MobyInstance *pMVar13;
  ulonglong in_LR;
  double dVar14;
  ulonglong in_f27;
  double dVar15;
  ulonglong in_f28;
  double dVar16;
  ulonglong in_f29;
  ulonglong in_f30;
  ulonglong in_f31;
  
  uVar6 = ZEXT48(&stack0x00000000);
  lVar8 = uVar6 - 0x100;
  puVar3 = (ulonglong *)lVar8;
  *puVar3 = uVar6;
  puVar3[0x22] = in_LR;
  puVar3[0x1b] = in_f27;
  puVar3[0x1c] = in_f28;
  puVar3[0x1d] = in_f29;
  puVar3[0x1e] = in_f30;
  puVar3[0x1f] = in_f31;
  puVar3[0x16] = unaff_r27;
  puVar3[0x18] = unaff_r29;
  iVar11 = DAT_0096a738;
  puVar3[0x1a] = unaff_r31;
  puVar3[0x19] = unaff_r30;
  puVar3[0x17] = unaff_r28;
  puVar3[0x15] = unaff_r26;
  if (iVar11 == 0) {
    fVar1 = g_heroRotation.z;
    if (0.5 < g_heroPadMagnitude) {
      Hero_GetIdealThrustFromPad(0x3ff0000000000000,0,0);
      DAT_0096a734 = (MobyInstance *)0x0;
      DAT_0096a738 = 1;
      fVar1 = g_heroIdealRotZ;
    }
    dVar16 = (double)fVar1;
    pMVar13 = (MobyInstance *)0x0;
    iVar11 = 0;
    dVar15 = 100000000.0;
    if (DAT_00a49344 != (MobyInstance *)0x0) {
      iVar12 = 0;
      moby = DAT_00a49344;
      do {
        pfVar9 = (float *)mobyutil::MB_GetPvarsIfMobyHasThem(moby);
        if ((((pfVar9 != (float *)0x0) && (*pfVar9 != 0.0)) &&
            ((moby->modeBits & CAN_BE_AUTO_TARGETED) != NONE)) &&
           ((dVar14 = (double)Hero_ComputeTargetScore(dVar16,param_1,param_2,param_3,moby),
            *(int *)((int)puVar3 + 0x7c) == 0 && (dVar14 < dVar15)))) {
          dVar15 = dVar14;
          pMVar13 = moby;
        }
        moby = *(MobyInstance **)((int)&DAT_00a49348 + iVar12);
        iVar12 = iVar12 + 4;
      } while (moby != (MobyInstance *)0x0);
    }
    if ((pMVar13 == (MobyInstance *)0x0) ||
       ((DAT_0096a734 != (MobyInstance *)0x0 && (DAT_0096a738 == 0)))) {
      DAT_0096a73c = (float)dVar16;
    }
    else {
      fVar1 = (pMVar13->pos).x - g_heroPosition.x;
      fVar2 = (pMVar13->pos).y - g_heroPosition.y;
      fVar4 = ABS(fVar1);
      fVar5 = ABS(fVar2);
      *(float *)(puVar3 + 0xe) = fVar1;
      *(float *)((int)puVar3 + 0x74) = fVar2;
      *(float *)(puVar3 + 0xf) = fVar4 - fVar5;
      DAT_0096a73c = 0.0;
      iVar12 = (int)(((ulonglong)(*(uint *)(puVar3 + 0xe) >> 0x1c) & 8 |
                     (ulonglong)(*(uint *)(puVar3 + 0xf) >> 0x1e) & 2 |
                     (ulonglong)(*(uint *)((int)puVar3 + 0x74) >> 0x1d) & 4) << 2);
      fVar2 = *(float *)(&mobyutil::g_atanQuadrantTable + iVar12);
      fVar1 = *(float *)(&DAT_00735904 + iVar12);
      if (0.0 <= *(float *)(puVar3 + 0xf)) {
        fVar4 = ABS(*(float *)((int)puVar3 + 0x74));
        fVar5 = ABS(*(float *)(puVar3 + 0xe));
      }
      DAT_0096a734 = pMVar13;
      if (0.0 < fVar5) {
        iVar12 = 4;
        iVar10 = 4;
        fVar4 = (fVar4 - fVar5) / (fVar4 + fVar5);
        lVar7 = lVar8;
        do {
          iVar12 = iVar12 + -1;
          *(float *)((int)lVar7 + 0x80) = fVar4;
          lVar7 = lVar7 + 4;
        } while (iVar12 != 0);
        fVar4 = fVar4 * fVar4;
        lVar7 = uVar6 - 0xf0;
        fVar5 = fVar4 * fVar4;
        *(float *)((int)puVar3 + 0x84) = *(float *)((int)puVar3 + 0x84) * fVar4;
        *(float *)(puVar3 + 0x11) = *(float *)(puVar3 + 0x11) * fVar5;
        *(float *)((int)puVar3 + 0x8c) = *(float *)((int)puVar3 + 0x8c) * fVar5 * fVar4;
        do {
          iVar10 = iVar10 + -1;
          *(float *)((int)lVar7 + 0x80) = *(float *)((int)lVar7 + 0x70) * fVar5 * fVar5;
          lVar7 = lVar7 + 4;
        } while (iVar10 != 0);
        iVar12 = 8;
        iVar10 = 8;
        lVar7 = lVar8;
        do {
          iVar12 = iVar12 + -1;
          pfVar9 = (float *)((int)&DAT_007358e0 + iVar11);
          iVar11 = iVar11 + 4;
          *(float *)((int)lVar7 + 0x80) = *(float *)((int)lVar7 + 0x80) * *pfVar9;
          lVar7 = lVar7 + 4;
        } while (iVar12 != 0);
        do {
          iVar10 = iVar10 + -1;
          iVar11 = (int)lVar8;
          lVar8 = lVar8 + 4;
          DAT_0096a73c = DAT_0096a73c + *(float *)(iVar11 + 0x80);
        } while (iVar10 != 0);
        DAT_0096a73c = (DAT_0096a73c + 0.7853982) * fVar2 + fVar1;
      }
    }
  }
  return;
}



//==== 0009f300  ns=hero  size=0x8c4
// sig: undefined Hero_SetBankTwistSway(void)
// callers(1): 000aaec0 hero::HandleHeroMovement
// callees(2): 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots

void hero::Hero_SetBankTwistSway(void)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  ulonglong *puVar4;
  float fVar5;
  float *pfVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  PlayerState PVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  int iVar15;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  ulonglong in_f31;
  double dVar21;
  
  uVar11 = ZEXT48(&stack0x00000000);
  lVar13 = uVar11 - 0xb0;
  puVar4 = (ulonglong *)lVar13;
  *puVar4 = uVar11;
  puVar4[0x18] = in_LR;
  puVar4[0x15] = in_f31;
  puVar4[0x14] = unaff_r31;
  PVar10 = g_heroState;
  bVar1 = g_heroState == WALKING;
  puVar4[0x13] = unaff_r30;
  fVar2 = DAT_00969de0;
  if (bVar1) {
    DAT_00721c74 = 0x3d23d70a;
    DAT_00721e84 = 0x3ca3d70a;
    DAT_00721c78 = 0x3e4ccccd;
    DAT_00721d24 = 0x3d23d70a;
    DAT_00721dd4 = 0x3d23d70a;
    DAT_00721d28 = 0x3e4ccccd;
    DAT_00721dd8 = 0x3e4ccccd;
    DAT_00721e88 = 0x3e4ccccd;
    if (DAT_0096bd68 == 1) {
      fVar2 = 1.4;
      if ((DAT_00969e68 <= 1.4) && (fVar2 = DAT_00969e68, DAT_00969e68 < -1.4)) {
        fVar2 = -1.4;
      }
      fVar3 = DAT_00969e44 / (mobyutil::g_FrameTime * 5.7);
      if (1.0 < fVar3) {
        fVar3 = 1.0;
      }
      if (fVar3 < 0.0) {
        fVar3 = 0.0;
      }
      DAT_00721c30 = fVar2 * -0.14 * fVar3;
      fVar3 = ABS(fVar2);
      DAT_00721ce8 = fVar2 * 0.16;
      DAT_00721e40 = fVar3 * 0.16;
      DAT_00721d90 = fVar2 * -0.12;
      DAT_00721e48 = fVar2 * 0.65;
      DAT_00721e44 = fVar3 * -0.15;
      DAT_007225d4 = fVar3 * 0.2;
      DAT_00722528 = fVar2 * -0.35;
      DAT_007225d8 = fVar2 * -0.3;
      DAT_00722524 = fVar3 * 0.35;
      DAT_00722688 = DAT_007225d8;
      DAT_00722738 = DAT_007225d8;
    }
    else {
      fVar2 = 0.8;
      fVar3 = DAT_00969e68 * 0.5;
      if ((fVar3 <= 0.8) && (fVar2 = fVar3, fVar3 < -0.8)) {
        fVar2 = -0.8;
      }
      DAT_00721ce8 = fVar2 * ABS(fVar2) * 1.25;
      DAT_00721e44 = ABS(DAT_00721ce8) * 0.25;
      DAT_00722528 = DAT_00721ce8 * -0.35;
      DAT_007225d8 = DAT_00721ce8 * -0.3;
      DAT_00721e48 = DAT_00721ce8;
      DAT_00722688 = DAT_007225d8;
      DAT_00722738 = DAT_007225d8;
    }
  }
  else if ((PVar10 == FALLING) || (PVar10 == THRUSTER_PACK_HOVER)) {
    DAT_00721c74 = 0x3c03126f;
    DAT_00721c78 = 0x3da3d70a;
    DAT_00721e84 = 0x3c03126f;
    DAT_00721e88 = 0x3dcccccd;
    DAT_00721d24 = 0x3c75c28f;
    DAT_00721d28 = 0x3da3d70a;
    DAT_00721dd8 = 0x3da3d70a;
    DAT_00721dd4 = 0x3c75c28f;
    dVar17 = 1.25;
    dVar21 = (double)(DAT_00969e68 * 1.6);
    if ((dVar21 <= 1.25) && (dVar17 = dVar21, dVar21 < -1.25)) {
      dVar17 = -1.25;
    }
    if (g_heroState == THRUSTER_PACK_HOVER) {
      dVar21 = (double)(DAT_00969e68 * 0.8);
      dVar17 = 1.100000023841858;
      if ((dVar21 <= 1.100000023841858) && (dVar17 = dVar21, dVar21 < -1.100000023841858)) {
        dVar17 = -1.100000023841858;
      }
    }
    DAT_00721c30 = (float)(dVar17 * -0.5199999809265137);
    if (DAT_00721c30 <= 0.28) {
      if (DAT_00721c30 < -0.28) {
        DAT_00721c30 = -0.28;
      }
    }
    else {
      DAT_00721c30 = 0.28;
    }
    DAT_00721ce8 = (float)(dVar17 * 0.5799999833106995);
    DAT_00721d90 = (float)(dVar17 * -0.2800000011920929);
    DAT_00721e48 = (float)(dVar17 * 1.2000000476837158);
    if (DAT_00721e48 <= 0.6) {
      if (DAT_00721e48 < -0.6) {
        DAT_00721e48 = -0.6;
      }
    }
    else {
      DAT_00721e48 = 0.6;
    }
    DAT_00721e44 = (float)(ABS(dVar17) * 0.20000000298023224);
    if (DAT_00721e44 <= 0.2) {
      if (DAT_00721e44 < -0.2) {
        DAT_00721e44 = -0.2;
      }
    }
    else {
      DAT_00721e44 = 0.2;
    }
    DAT_00721e40 = (float)(ABS(dVar17) * 0.1599999964237213);
    if (g_heroState == THRUSTER_PACK_HOVER) {
      if (mobyutil::g_FrameTime * 0.5 < DAT_00969e44) {
        fVar8 = ABS(DAT_00969de0);
        fVar9 = ABS(DAT_00969de4);
        uVar7 = (uint)DAT_00969de4 >> 0x1d;
        *(float *)(puVar4 + 0xe) = fVar8 - fVar9;
        dVar21 = 0.0;
        iVar14 = ((uint)fVar2 >> 0x1c & 8 | *(uint *)(puVar4 + 0xe) >> 0x1e & 2 | uVar7 & 4) * 4;
        fVar3 = *(float *)(&mobyutil::g_atanQuadrantTable + iVar14);
        fVar2 = *(float *)(&DAT_00735904 + iVar14);
        fVar5 = fVar9;
        if (0.0 <= *(float *)(puVar4 + 0xe)) {
          fVar5 = fVar8;
          fVar8 = fVar9;
        }
        if (0.0 < fVar5) {
          iVar14 = 4;
          fVar5 = (fVar8 - fVar5) / (fVar8 + fVar5);
          lVar12 = lVar13;
          do {
            iVar14 = iVar14 + -1;
            *(float *)((int)lVar12 + 0x74) = fVar5;
            lVar12 = lVar12 + 4;
          } while (iVar14 != 0);
          fVar5 = fVar5 * fVar5;
          lVar12 = uVar11 - 0xa0;
          iVar14 = 4;
          fVar8 = fVar5 * fVar5;
          *(float *)(puVar4 + 0xf) = *(float *)(puVar4 + 0xf) * fVar5;
          *(float *)((int)puVar4 + 0x7c) = *(float *)((int)puVar4 + 0x7c) * fVar8;
          *(float *)(puVar4 + 0x10) = *(float *)(puVar4 + 0x10) * fVar8 * fVar5;
          do {
            iVar14 = iVar14 + -1;
            *(float *)((int)lVar12 + 0x74) = *(float *)((int)lVar12 + 100) * fVar8 * fVar8;
            lVar12 = lVar12 + 4;
          } while (iVar14 != 0);
          iVar14 = 0;
          iVar15 = 8;
          lVar12 = lVar13;
          do {
            iVar15 = iVar15 + -1;
            pfVar6 = (float *)((int)&DAT_007358e0 + iVar14);
            iVar14 = iVar14 + 4;
            *(float *)((int)lVar12 + 0x74) = *(float *)((int)lVar12 + 0x74) * *pfVar6;
            lVar12 = lVar12 + 4;
          } while (iVar15 != 0);
          iVar14 = 8;
          do {
            iVar14 = iVar14 + -1;
            iVar15 = (int)lVar13;
            lVar13 = lVar13 + 4;
            dVar21 = (double)(float)(dVar21 + (double)*(float *)(iVar15 + 0x74));
          } while (iVar14 != 0);
          dVar21 = (double)((float)(dVar21 + 0.7853981852531433) * fVar3 + fVar2);
        }
        dVar16 = (double)fastfunc::FastDiffRots(dVar21,(double)g_heroRotation.z);
        dVar21 = dVar16;
        if ((double)(float)(3.141592502593994 - dVar16) <= dVar16) {
          dVar21 = (double)(float)(3.141592502593994 - dVar16);
        }
        if (dVar21 <= (double)(float)(-3.141592502593994 - dVar16)) {
          dVar21 = (double)(float)(-3.141592502593994 - dVar16);
        }
        dVar18 = (double)(float)(dVar21 * dVar21);
        dVar20 = (double)(float)(dVar18 * (double)(float)(dVar18 * dVar21));
        dVar19 = (double)(float)(dVar18 * dVar20);
        DAT_00721c30 = -(((float)(dVar21 + (double)(float)((double)(float)(dVar18 * dVar21) *
                                                          -0.16666656732559204)) +
                          (float)(dVar20 * 0.008333025500178337) +
                          (float)(dVar19 * -0.0001980741071747616) +
                         (float)(dVar18 * dVar19) * 2.601887e-06) * DAT_00969e44 * 3.0);
        fVar2 = (float)(dVar16 + 1.570796251296997);
        fVar3 = fVar2;
        if (3.1415925 - fVar2 <= fVar2) {
          fVar3 = 3.1415925 - fVar2;
        }
        if (fVar3 <= -3.1415925 - fVar2) {
          fVar3 = -3.1415925 - fVar2;
        }
        fVar2 = fVar3 * fVar3;
        fVar5 = fVar2 * fVar2 * fVar3;
        fVar8 = fVar2 * fVar5;
        DAT_00721c34 = (fVar3 + fVar2 * fVar3 * -0.16666657 + fVar5 * 0.0083330255 +
                        fVar8 * -0.0001980741 + fVar2 * fVar8 * 2.601887e-06) * DAT_00969e44 * 3.0;
        if (DAT_00721c30 <= 0.43633232) {
          if (DAT_00721c30 < -0.43633232) {
            DAT_00721c30 = -0.43633232;
          }
        }
        else {
          DAT_00721c30 = 0.43633232;
        }
        if (DAT_00721c34 <= 0.43633232) {
          if (DAT_00721c34 < -0.43633232) {
            DAT_00721c34 = -0.43633232;
          }
        }
        else {
          DAT_00721c34 = 0.43633232;
        }
      }
      dVar21 = (double)fastfunc::FastWrapRot(DAT_00721c34,-0.12217305);
      DAT_00721c34 = (float)dVar21;
    }
    DAT_00722528 = (float)(dVar17 * -0.3499999940395355);
    DAT_007225d8 = (float)(dVar17 * -0.30000001192092896);
    DAT_00722688 = DAT_007225d8;
    DAT_00722738 = DAT_007225d8;
  }
  else if ((g_heroStateType == 2) || (g_heroStateType == 4)) {
    DAT_00721c74 = 0x3d23d70a;
    DAT_00721c78 = 0x3e4ccccd;
    DAT_00721e84 = 0x3ca3d70a;
    DAT_00721d24 = 0x3d23d70a;
    DAT_00721dd4 = 0x3d23d70a;
    DAT_00721d28 = 0x3e4ccccd;
    DAT_00721dd8 = 0x3e4ccccd;
    DAT_00721e88 = 0x3e4ccccd;
    fVar2 = 1.4;
    if ((DAT_00969e68 <= 1.4) && (fVar2 = DAT_00969e68, DAT_00969e68 < -1.4)) {
      fVar2 = -1.4;
    }
    DAT_00721ce8 = fVar2 * 0.29;
    DAT_00721d90 = fVar2 * -0.27;
    DAT_00721e48 = fVar2 * 0.87;
    DAT_00722528 = fVar2 * -0.35;
    DAT_007225d8 = fVar2 * -0.3;
    DAT_00722688 = DAT_007225d8;
    DAT_00722738 = DAT_007225d8;
  }
  return;
}



//==== 0009fbe8  ns=hero  size=0x118
// sig: undefined Hero_SetBackpackSway(void)
// callers(1): 000aaec0 hero::HandleHeroMovement
// callees(0): 
// strings: 0096c074: 'None'

void hero::Hero_SetBackpackSway(void)

{
  float fVar1;
  float fVar2;
  
  if (DAT_0096ae64 != 0) {
    if (Cheats[3] != '\0') {
      DAT_007228dc = FLOAT_0071fb54;
    }
    if (g_heroState == WALKING) {
      DAT_007228d4 = 0x3ca3d70a;
      DAT_007228d8 = 0x3eb33333;
      fVar1 = 1.4;
      if ((DAT_00969e68 <= 1.4) && (fVar1 = DAT_00969e68, DAT_00969e68 < -1.4)) {
        fVar1 = -1.4;
      }
      DAT_00722898 = 1.3089969;
      fVar2 = fVar1 * -1.2;
      if ((fVar2 <= 1.3089969) && (DAT_00722898 = fVar2, fVar2 < -1.3089969)) {
        DAT_00722898 = -1.3089969;
      }
      fVar1 = ABS(fVar1) * 0.1 + 0.1;
      if (0.07 < fVar1) {
        fVar1 = 0.07;
      }
      DAT_007228c8 = (1024.0 / *(float *)(DAT_0096ae64 + 0x2c)) * fVar1;
    }
  }
  return;
}



//==== 0009fd08  ns=hero  size=0x258
// sig: undefined ???_Unused_Hero_RotateTowardDir(void)
// callers(0): 
// callees(2): 0010a050 mobyutil::AccelDeltAng; 0010c1e8 mobyutil::MB_MtxToEuler

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void hero::____Unused_Hero_RotateTowardDir
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,float *param_4,
               float *param_5)

{
  float fVar1;
  float local_80;
  float local_7c;
  float local_78;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  MobyClass *local_5c;
  void *local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  uint local_44;
  f32 local_40;
  f32 local_3c;
  f32 local_38;
  f32 local_34;
  
  local_70 = *param_5;
  local_6c = param_5[1];
  local_68 = param_5[2];
  fVar1 = SQRT(local_70 * local_70 + local_6c * local_6c + local_68 * local_68);
  if (fVar1 == 0.0) {
    local_64 = param_5[3];
    local_68 = 0.0;
    local_6c = 0.0;
    local_70 = 0.0;
  }
  else {
    fVar1 = 1.0 / fVar1;
    local_70 = local_70 * fVar1;
    local_6c = local_6c * fVar1;
    local_68 = local_68 * fVar1;
    local_64 = param_5[3];
  }
  local_50 = *param_4;
  local_4c = param_4[1];
  local_48 = param_4[2];
  fVar1 = SQRT(local_50 * local_50 + local_4c * local_4c + local_48 * local_48);
  if (fVar1 == 0.0) {
    local_48 = 0.0;
    local_4c = 0.0;
    local_50 = 0.0;
  }
  else {
    fVar1 = 1.0 / fVar1;
    local_50 = local_50 * fVar1;
    local_4c = local_4c * fVar1;
    local_48 = local_48 * fVar1;
  }
  fVar1 = local_4c * local_68 - local_48 * local_6c;
  local_5c = (MobyClass *)(local_48 * local_70 - local_50 * local_68);
  local_58 = (void *)(local_50 * local_6c - local_4c * local_70);
  local_54 = 0.0;
  local_44 = 0;
  local_48 = fVar1 * local_6c - (float)local_5c * local_70;
  local_4c = (float)local_58 * local_70 - fVar1 * local_68;
  local_34 = 0.0;
  local_38 = 0.0;
  local_3c = 0.0;
  local_40 = 0.0;
  mobyutil::MB_MtxToEuler((int)&local_70,(MobyInstance *)&local_80);
  mobyutil::AccelDeltAng((double)local_80,param_1,param_2,param_3,&g_heroRotation);
  mobyutil::AccelDeltAng((double)local_7c,param_1,param_2,param_3,0x969d74);
  mobyutil::AccelDeltAng((double)local_78,param_1,param_2,param_3,0x969d78);
  return;
}



//==== 0009ff68  ns=hero  size=0x114
// sig: void Hero_ApplyTaper(float decel)
// callers(1): 000aaec0 hero::HandleHeroMovement
// callees(3): 000817ec hero::Hero_SetRelativeZ; 00089038 hero::Hero_ScaleRelativeXY; 00089480 hero::Hero_RelativeXYComponent

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void hero::Hero_ApplyTaper(float decel)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  float fVar5;
  
  dVar1 = (double)decel;
  fVar5 = Hero_RelativeXYComponent(&g_heroExternalMomentum);
  dVar2 = (double)fVar5;
  if (dVar2 <= 0.0010000000474974513) {
    DAT_00969e3c = 0;
    DAT_00969e38 = 0.0;
    DAT_00969e34 = 0.0;
    g_heroExternalMomentum = 0.0;
  }
  else {
    dVar4 = 0.0;
    Hero_SetRelativeZ(0.0,&g_heroExternalMomentum,&g_heroExternalMomentum);
    dVar3 = (double)(float)(dVar2 - dVar1);
    if ((double)(float)(dVar2 - dVar1) < dVar4) {
      dVar3 = dVar4;
    }
    Hero_ScaleRelativeXY((float)dVar3,&g_heroExternalMomentum,&g_heroExternalMomentum);
    g_heroVelocity = g_heroVelocity + g_heroExternalMomentum;
    DAT_00969dc4 = DAT_00969dc4 + DAT_00969e34;
    DAT_00969dc8 = DAT_00969dc8 + DAT_00969e38;
  }
  return;
}



