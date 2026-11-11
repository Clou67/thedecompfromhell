//==== 00290158  ns=Global  size=0x12c
// sig: undefined FUN_00290158(void)
// callers(1): 001c96c0 mobyupdate_unsorted::UpdateMoby_1108
// callees(3): 000fcbe8 mobyutil::MB_randRangeFloat; 00502758 fastfunc::FastDoubleToInt; 00502910 fastfunc::FastCheckBsphereInView

void FUN_00290158(longlong param_1)

{
  ushort uVar1;
  void *pvVar2;
  uint uVar3;
  MobyInstance *pMVar4;
  int iVar5;
  undefined4 uVar6;
  ushort *puVar7;
  double dVar8;
  undefined8 uVar9;
  double dVar10;
  double dVar11;
  undefined1 local_40 [16];
  
  puVar7 = *(ushort **)((int)&mobyutil::g_MobyGroups + (int)(param_1 << 2));
  if (puVar7 != (ushort *)0x0) {
    uVar9 = 0x4050000000000000;
    dVar10 = 30.0;
    dVar11 = 60.0;
    do {
      pMVar4 = MobyInstance;
      uVar3 = *puVar7 & 0x7fff;
      if ((MobyInstance[uVar3].oClass ==
           (PLANETBUSTER_MAXIMUS_PART_0500|AMMOCRATE_00E0|BLARG_HEAVY_INTERCEPTOR_0008)) &&
         (MobyInstance[uVar3].state == '\x01')) {
        iVar5 = fastfunc::FastCheckBsphereInView(uVar9,local_40);
        if (-1 < iVar5) {
          pvVar2 = pMVar4[uVar3].pVar;
          pMVar4[uVar3].state = '\x02';
          dVar8 = (double)mobyutil::MB_randRangeFloat((float)dVar10,(float)dVar11);
          uVar6 = fastfunc::FastDoubleToInt((double)(float)(dVar8 * (double)animationSpeed));
          *(undefined4 *)((int)pvVar2 + 0x28) = uVar6;
        }
      }
      uVar1 = *puVar7;
      puVar7 = puVar7 + 1;
    } while (-1 < (short)uVar1);
  }
  return;
}



//==== 002902e8  ns=mobyupdate_unsorted  size=0xba4
// sig: undefined UpdateMoby_1513(MobyInstance * moby)
// callers(0): 
// callees(12): 00047f74 camera::SetCameraPosition; 000481d0 camera::camera5::Camera_DeactivateMobyDrivenCam; 0006d720 RegisterFuncForMoby; 00085300 hero::Hero_TransAnim; 00085a10 hero::Hero_GetSpecialStateKind; 000a0c38 hero::Hero_Warp; 000aa368 hero::Hero_WalkToPos; 000b72b0 hero::TransitionMovement; 00105870 mobyutil::DamageSphereAtPos; 00109c30 mobyutil::OrganicDelt; 00502578 fastfunc::FastWrapRot; 005027bc fastfunc::FastLerpColor

/* Moby 1513 */

void mobyupdate_unsorted::UpdateMoby_1513(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  uint uVar3;
  undefined4 uVar4;
  Cuboid *pCVar5;
  Cuboid *pCVar6;
  int *piVar8;
  ulonglong uVar7;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  int *piVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 local_90 [16];
  undefined1 local_80 [48];
  
  bVar1 = moby->state;
  piVar14 = (int *)moby->pVar;
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      lVar11 = 3;
      piVar8 = piVar14;
      do {
        piVar8[7] = 0;
        piVar8[6] = 0;
        piVar8[5] = 0;
        piVar8[4] = 0;
        lVar11 = lVar11 + -1;
        piVar8 = piVar8 + 4;
      } while (lVar11 != 0);
      dVar16 = (double)fastfunc::FastWrapRot((moby->rotation).z,0.0);
      piVar14[6] = (int)(float)dVar16;
      dVar15 = 1.5707963705062866;
      dVar16 = (double)fastfunc::FastWrapRot((moby->rotation).z,1.5707964);
      piVar14[10] = (int)(float)dVar16;
      dVar16 = (double)fastfunc::FastWrapRot((moby->rotation).y,(float)dVar15);
      piVar14[0xd] = (int)(float)dVar16;
      auVar23 = ZEXT416(0);
      auVar30 = auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60;
      piVar14[0x13] = (int)DAT_007ab388;
      piVar14[0x14] = (int)(moby->pos).x;
      piVar14[0x15] = (int)(moby->pos).y;
      piVar14[0x16] = (int)(moby->pos).z;
      piVar14[0x17] = (int)(moby->pos).w;
      auVar23 = loadVectorLeftIndexed(8,0x290288);
      auVar24 = loadVectorLeftIndexed(0xc,0x290288);
      auVar20 = loadVectorLeftIndexed(0x10,0x290288);
      auVar25 = loadVectorLeftIndexed(0x14,0x290288);
      auVar29 = loadVectorLeftIndexed(0x18,0x290288);
      auVar28 = loadVectorLeftIndexed(0x1c,0x290288);
      auVar27 = loadVectorLeftIndexed(0x20,0x290288);
      auVar26 = loadVectorLeftIndexed(0x24,0x290288);
      uVar12 = ZEXT48(&DAT_00fada80);
      auVar22 = loadVectorLeftIndexed(0x28,0x290288);
      lVar11 = 0xd;
      auVar31 = loadVectorLeftIndexed(0x2c,0x290288);
      uVar7 = ZEXT48(&DAT_00fada84);
      auVar23 = auVar23 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar10 = ZEXT48(&DAT_00fada88);
      auVar24 = auVar24 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar20 = auVar20 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar21 = auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60;
      auVar20 = auVar25 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar25 = auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60;
      auVar20 = auVar29 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar29 = auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60;
      auVar20 = auVar28 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar28 = auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60;
      auVar20 = auVar27 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar27 = auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60;
      auVar20 = auVar26 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar26 = auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60;
      auVar20 = auVar22 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar22 = auVar31 >> 0x60 & (undefined1  [16])0xffffffff;
      do {
        auVar32 = vectorConvertFromSignedFixedPointWord(auVar30,0);
        auVar31 = ZEXT416(0xffffffff);
        auVar19 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
        auVar31 = ZEXT416(0xffffffff);
        auVar35 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
        auVar31 = ZEXT416(0xffffffff);
        auVar31 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
        auVar19 = vectorShiftLeftIntegerWord(auVar19,auVar19);
        auVar36 = vectorShiftLeftIntegerWord(auVar35,auVar35);
        auVar35 = vectorShiftLeftIntegerWord(auVar31,auVar31);
        auVar31 = vectorNegativeMultiplySubtractFloatingPoint
                            (auVar32,auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60,
                             auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60);
        auVar31 = auVar31 ^ (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60);
        auVar33 = vectorAddFloatingPoint
                            (auVar31,auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60);
        auVar32 = vectorSubtractFloatingPoint(auVar21,auVar31);
        auVar34 = vectorSubtractFloatingPoint(auVar25,auVar31);
        auVar37 = vectorSubtractFloatingPoint(auVar21,auVar33);
        auVar38 = vectorSubtractFloatingPoint(auVar25,auVar33);
        auVar39 = vectorCompareGreaterThanFloatingPoint(auVar32,auVar31);
        auVar32 = vectorConditionalSelect(auVar32,auVar31,auVar39);
        auVar31 = ZEXT416(0xffffffff);
        auVar31 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
        auVar40 = vectorCompareGreaterThanFloatingPoint(auVar32,auVar34);
        auVar39 = vectorShiftLeftIntegerWord(auVar31,auVar31);
        auVar32 = vectorConditionalSelect(auVar34,auVar32,auVar40);
        auVar31 = ZEXT416(0xffffffff);
        auVar41 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
        auVar31 = vectorCompareGreaterThanFloatingPoint(auVar37,auVar33);
        auVar34 = vectorMultiplyAddFloatingPoint(auVar32,auVar32,auVar36);
        auVar33 = vectorConditionalSelect(auVar37,auVar33,auVar31);
        auVar31 = ZEXT416(0xffffffff);
        auVar36 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
        auVar31 = ZEXT416(0xffffffff);
        auVar40 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
        auVar31 = vectorCompareGreaterThanFloatingPoint(auVar33,auVar38);
        auVar36 = vectorShiftLeftIntegerWord(auVar36,auVar36);
        auVar33 = vectorConditionalSelect(auVar38,auVar33,auVar31);
        auVar31 = ZEXT416(0xffffffff);
        auVar37 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
        auVar31 = ZEXT416(0xffffffff);
        auVar31 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
        auVar19 = vectorMultiplyAddFloatingPoint(auVar33,auVar33,auVar19);
        auVar40 = vectorShiftLeftIntegerWord(auVar40,auVar40);
        auVar36 = vectorMultiplyAddFloatingPoint(auVar34,auVar32,auVar36);
        auVar38 = vectorShiftLeftIntegerWord(auVar37,auVar37);
        auVar37 = vectorShiftLeftIntegerWord(auVar31,auVar31);
        auVar41 = vectorShiftLeftIntegerWord(auVar41,auVar41);
        auVar31 = vectorMultiplyAddFloatingPoint(auVar19,auVar33,auVar35);
        auVar32 = vectorMultiplyAddFloatingPoint(auVar36,auVar29,auVar32);
        auVar39 = vectorMultiplyAddFloatingPoint(auVar19,auVar31,auVar39);
        auVar35 = vectorMultiplyAddFloatingPoint(auVar31,auVar29,auVar33);
        auVar33 = vectorMultiplyAddFloatingPoint(auVar34,auVar36,auVar38);
        auVar31 = ZEXT416(0xffffffff);
        auVar31 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
        auVar36 = vectorShiftLeftIntegerWord(auVar31,auVar31);
        auVar37 = vectorMultiplyAddFloatingPoint(auVar19,auVar39,auVar37);
        auVar35 = vectorMultiplyAddFloatingPoint(auVar39,auVar28,auVar35);
        auVar39 = vectorMultiplyAddFloatingPoint(auVar34,auVar33,auVar40);
        auVar33 = vectorMultiplyAddFloatingPoint(auVar33,auVar28,auVar32);
        auVar31._0_4_ = auVar30._0_4_ + 1;
        auVar31._8_8_ = auVar30._8_8_;
        auVar31._4_4_ = auVar30._4_4_ + 1;
        auVar32._0_8_ = auVar31._0_8_;
        auVar32._12_4_ = auVar30._12_4_;
        auVar32._8_4_ = auVar30._8_4_ + 1;
        auVar30._0_12_ = auVar32._0_12_;
        auVar30._12_4_ = auVar32._12_4_ + 1;
        auVar31 = vectorMultiplyAddFloatingPoint(auVar19,auVar37,auVar41);
        auVar19 = vectorMultiplyAddFloatingPoint(auVar37,auVar27,auVar35);
        auVar32 = vectorMultiplyAddFloatingPoint(auVar34,auVar39,auVar36);
        auVar35 = vectorMultiplyAddFloatingPoint(auVar39,auVar27,auVar33);
        auVar31 = vectorMultiplyAddFloatingPoint(auVar31,auVar26,auVar19);
        auVar19 = vectorMultiplyAddFloatingPoint(auVar32,auVar26,auVar35);
        uVar4 = storeVectorElementWordIndexed(auVar31,0,uVar12);
        *(undefined4 *)uVar12 = uVar4;
        uVar4 = storeVectorElementWordIndexed(auVar19,0,uVar7);
        *(undefined4 *)uVar7 = uVar4;
        *(undefined4 *)uVar10 = 0;
        uVar4 = storeVectorElementWordIndexed(auVar31,0,uVar7);
        *(undefined4 *)uVar7 = uVar4;
        uVar4 = storeVectorElementWordIndexed(auVar19,0,uVar10);
        *(undefined4 *)uVar10 = uVar4;
        *(undefined4 *)uVar12 = 0;
        uVar7 = uVar7 + 0x10;
        uVar10 = uVar10 + 0x10;
        uVar12 = uVar12 + 0x10;
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
      piVar14[0x10] = (int)(DAT_007ab37c + (moby->pos).z);
      moby->state = '\x01';
    }
    else {
      iVar9 = 0;
      dVar16 = 0.01745329238474369;
      do {
        dVar15 = (double)fastfunc::FastWrapRot
                                   ((float)piVar14[4],
                                    (float)((double)DAT_007ab390 * dVar16) * mobyutil::g_FrameTime);
        iVar9 = iVar9 + 1;
        piVar14[4] = (int)(float)dVar15;
        piVar14 = piVar14 + 4;
      } while (iVar9 < 3);
      DAT_007ab398 = fastfunc::FastLerpColor(0x3fb99999a0000000,DAT_007ab398,DAT_007ab39c);
      if (((g_standingOnMoby == moby) && (g_buttonsPressedThisFrame == TRIANGLE)) &&
         (g_heroType == '\0')) {
        lVar11 = 0x950000;
        lVar13 = (longlong)(int)moby + 0x10;
        moby->state = '\x02';
        dVar16 = (double)fastfunc::FastWrapRot(GameCamera.rot.radius,3.14159);
        hero::Hero_WalkToPos((float)dVar16,(float *)lVar13,lVar11,0);
        mobyutil::DamageSphereAtPos
                  (0x3ff0000000000000,0x4014000000000000,0x3ff0000000000000,(longlong)(int)moby,
                   lVar13);
        camera::SetCameraPosition(0x951500,0x951510,1,0,0);
      }
      RegisterFuncForMoby(&PTR_M1514_00290e8c_0070a8c0,moby);
    }
  }
  else if (bVar1 < 4) {
    mobyutil::OrganicDelt
              (1.0,DAT_0071f418 * 2.0,DAT_0071f418 * 4.0,mobyutil::g_FrameTime * 4.0,
               (float *)(piVar14 + 0x11),0x720000,(float *)(piVar14 + 0x12));
    iVar9 = 0;
    piVar14[0x10] = (int)(DAT_007ab380 * (float)piVar14[0x11] + (moby->pos).z + DAT_007ab37c);
    dVar16 = 0.01745329238474369;
    piVar8 = piVar14;
    do {
      dVar15 = (double)fastfunc::FastWrapRot
                                 ((float)piVar8[4],
                                  (float)((double)DAT_007ab390 * dVar16) * mobyutil::g_FrameTime);
      iVar9 = iVar9 + 1;
      piVar8[4] = (int)(float)dVar15;
      piVar8 = piVar8 + 4;
    } while (iVar9 < 3);
    fVar2 = (float)((double)DAT_007ab394 * dVar16) * mobyutil::g_FrameTime * (float)piVar14[0x11];
    dVar18 = (double)fVar2;
    dVar16 = (double)fastfunc::FastWrapRot((float)piVar14[5],fVar2);
    piVar14[4] = (int)(float)dVar16;
    dVar16 = (double)fastfunc::FastWrapRot((float)piVar14[5],(float)dVar18);
    piVar14[5] = (int)(float)dVar16;
    dVar17 = 0.5;
    dVar15 = (double)(float)(dVar18 * 0.5);
    dVar16 = (double)fastfunc::FastWrapRot((float)dVar16,(float)(dVar18 * 0.5));
    piVar14[6] = (int)(float)dVar16;
    dVar16 = (double)fastfunc::FastWrapRot((float)piVar14[0xd],(float)dVar18);
    piVar14[0xc] = (int)(float)dVar16;
    dVar16 = (double)fastfunc::FastWrapRot((float)piVar14[0xd],(float)dVar18);
    piVar14[0xd] = (int)(float)dVar16;
    dVar16 = (double)fastfunc::FastWrapRot((float)dVar16,(float)dVar15);
    piVar14[0xe] = (int)(float)dVar16;
    dVar16 = (double)fastfunc::FastWrapRot((float)piVar14[8],(float)dVar18);
    piVar14[8] = (int)(float)dVar16;
    dVar16 = (double)fastfunc::FastWrapRot((float)piVar14[10],(float)dVar18);
    piVar14[10] = (int)(float)dVar16;
    uVar4 = DAT_007ab3a0;
    iVar9 = DAT_007ab39c;
    piVar14[0x13] =
         (int)(float)((double)(float)((double)DAT_007ab38c - (double)DAT_007ab388) *
                      (double)(float)piVar14[0x11] + (double)DAT_007ab388);
    DAT_007ab398 = fastfunc::FastLerpColor((double)(float)piVar14[0x11],iVar9,uVar4);
    uVar3 = piVar14[0x11] >> 0x1f;
    if (((0x3f7fffff < (int)((uVar3 >> 1 ^ piVar14[0x11]) - uVar3)) &&
        (iVar9 = hero::Hero_GetSpecialStateKind(), iVar9 == 2)) && (moby->state != '\x03')) {
      moby->state = '\x03';
      hero::TransitionMovement(0x72,1);
      hero::Hero_TransAnim((float)(longlong)(animationSpeed * 20.5),10,0);
      DAT_0096bfbc = 1;
    }
    pCVar6 = Cuboids;
    if (moby->state == '\x03') {
      DAT_00969dcc = 0;
      DAT_00969dc8 = 0;
      DAT_00969dc4 = 0;
      hero::g_heroVelocity = 0;
      DAT_00969e0c = 0;
      DAT_00969e08 = 0;
      DAT_00969e04 = 0;
      DAT_00969e00 = 0;
      g_heroPosition.z = mobyutil::g_FrameTime * 8.0 + g_heroPosition.z;
      if (DAT_0096bfbc == 0x13) {
        iVar9 = *piVar14;
        pCVar5 = Cuboids + iVar9;
        piVar14[0x14] = (int)Cuboids[iVar9].pos.x;
        piVar14[0x15] = (int)pCVar6[iVar9].pos.y;
        fVar2 = pCVar6[iVar9].pos.z;
        piVar14[0x16] = (int)fVar2;
        piVar14[0x17] = (int)pCVar6[iVar9].pos.w;
        piVar14[0x10] = (int)(float)((double)fVar2 + dVar17);
        hero::Hero_Warp(&(pCVar5->pos).x,&pCVar6[iVar9].rot.x,6,1);
        camera::SetCameraPosition(local_90,local_80,1,0,0);
        moby->state = '\x04';
      }
    }
    RegisterFuncForMoby(&PTR_M1514_00290e8c_0070a8c0,moby);
  }
  else if (bVar1 < 5) {
    DAT_007ab398 = fastfunc::FastLerpColor(0x3f999999a0000000,DAT_007ab398,PTR_DAT_007ab3a4);
    iVar9 = 0;
    dVar16 = 0.01745329238474369;
    piVar8 = piVar14;
    do {
      dVar15 = (double)fastfunc::FastWrapRot
                                 ((float)piVar8[4],
                                  (float)((double)DAT_007ab390 * dVar16) * mobyutil::g_FrameTime);
      iVar9 = iVar9 + 1;
      piVar8[4] = (int)(float)dVar15;
      piVar8 = piVar8 + 4;
    } while (iVar9 < 3);
    fVar2 = (float)((double)DAT_007ab394 * dVar16) * mobyutil::g_FrameTime;
    dVar18 = (double)fVar2;
    dVar16 = (double)fastfunc::FastWrapRot((float)piVar14[5],fVar2);
    piVar14[4] = (int)(float)dVar16;
    dVar16 = (double)fastfunc::FastWrapRot((float)piVar14[5],(float)dVar18);
    piVar14[5] = (int)(float)dVar16;
    dVar15 = (double)(float)(dVar18 * 0.5);
    dVar16 = (double)fastfunc::FastWrapRot((float)dVar16,(float)(dVar18 * 0.5));
    piVar14[6] = (int)(float)dVar16;
    dVar16 = (double)fastfunc::FastWrapRot((float)piVar14[0xd],(float)dVar18);
    piVar14[0xc] = (int)(float)dVar16;
    dVar16 = (double)fastfunc::FastWrapRot((float)piVar14[0xd],(float)dVar18);
    piVar14[0xd] = (int)(float)dVar16;
    dVar16 = (double)fastfunc::FastWrapRot((float)dVar16,(float)dVar15);
    piVar14[0xe] = (int)(float)dVar16;
    dVar16 = (double)fastfunc::FastWrapRot((float)piVar14[8],(float)dVar18);
    piVar14[8] = (int)(float)dVar16;
    dVar16 = (double)fastfunc::FastWrapRot((float)piVar14[10],(float)dVar18);
    piVar14[10] = (int)(float)dVar16;
    RegisterFuncForMoby(&PTR_M1514_00290e8c_0070a8c0,moby);
    if (((GameCamera.pCurrentUpdCam != (void *)0x0) &&
        (*(short *)((int)GameCamera.pCurrentUpdCam + 0x86) == 5)) && (g_framesNotGrounded == 0)) {
      camera::camera5::Camera_DeactivateMobyDrivenCam(2);
    }
    if (DAT_007ab398 >> 0x18 == 0) {
      lVar11 = 3;
      piVar8 = piVar14;
      do {
        piVar8[7] = 0;
        piVar8[6] = 0;
        piVar8[5] = 0;
        piVar8[4] = 0;
        lVar11 = lVar11 + -1;
        piVar8 = piVar8 + 4;
      } while (lVar11 != 0);
      dVar16 = (double)fastfunc::FastWrapRot((moby->rotation).z,0.0);
      piVar14[6] = (int)(float)dVar16;
      dVar15 = 1.5707963705062866;
      dVar16 = (double)fastfunc::FastWrapRot((moby->rotation).z,1.5707964);
      piVar14[10] = (int)(float)dVar16;
      dVar16 = (double)fastfunc::FastWrapRot((moby->rotation).y,(float)dVar15);
      piVar14[0xd] = (int)(float)dVar16;
      piVar14[0x10] = (int)(DAT_007ab37c + (moby->pos).z);
      fVar2 = DAT_007ab388;
      piVar14[0x11] = 0;
      piVar14[0x13] = (int)fVar2;
      DAT_007ab398 = DAT_007ab39c;
      if ((GameCamera.pCurrentUpdCam != (void *)0x0) &&
         (*(short *)((int)GameCamera.pCurrentUpdCam + 0x86) == 5)) {
        camera::camera5::Camera_DeactivateMobyDrivenCam(2);
      }
      moby->state = '\x01';
      piVar14[0x10] = (int)(DAT_007ab37c + (moby->pos).z);
      piVar14[0x14] = (int)(moby->pos).x;
      piVar14[0x15] = (int)(moby->pos).y;
      piVar14[0x16] = (int)(moby->pos).z;
      piVar14[0x17] = (int)(moby->pos).w;
    }
  }
  return;
}



//==== 00290e8c  ns=mobyupdate_helpers  size=0x3b4
// sig: undefined M1514_00290e8c(void)
// callers(0): 
// callees(6): 000685c4 draw::GetEffectTex; 00072280 draw::FastDrawQuad; 00500ca4 fastfunc::FastEulerToMtx1; 00502ea8 idol_draw::PackCmd; 00502f08 FUN_00502f08; 00502fd4 stub::STUB_00502fd4_RET_0

void mobyupdate_helpers::M1514_00290e8c(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  ulonglong *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  longlong lVar13;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  int iVar14;
  ulonglong unaff_r26;
  int iVar15;
  ulonglong unaff_r27;
  int iVar16;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar17;
  ulonglong in_f30;
  double dVar18;
  ulonglong in_f31;
  double dVar19;
  
  uVar7 = ZEXT48(&stack0x00000000);
  lVar13 = uVar7 - 0x1e0;
  puVar6 = (ulonglong *)lVar13;
  *puVar6 = uVar7;
  puVar6[0x3e] = in_LR;
  puVar6[0x3a] = in_f30;
  puVar6[0x3b] = in_f31;
  puVar6[0x38] = unaff_r30;
  uVar1 = DAT_007ab3d0;
  iVar5 = *(int *)(param_1 + 0x78);
  puVar6[0x39] = unaff_r31;
  puVar6[0x37] = unaff_r29;
  puVar6[0x36] = unaff_r28;
  puVar6[0x35] = unaff_r27;
  puVar6[0x34] = unaff_r26;
  puVar6[0x33] = unaff_r25;
  puVar6[0x32] = unaff_r24;
  puVar6[0x31] = unaff_r23;
  uVar8 = draw::GetEffectTex(uVar1);
  puVar6[0x2d] = uVar8;
  uVar8 = stub::STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  puVar6[0x2e] = uVar8;
  uVar8 = FUN_00502f08(0,0,0,0,0,0);
  puVar6[0x2c] = uVar8;
  uVar8 = idol_draw::PackCmd(DAT_00fadb50,DAT_007ab3c8,DAT_00fadb54,DAT_007ab3cc,0x80);
  puVar6[0x2f] = uVar8;
  lVar10 = uVar7 - 0xa0;
  lVar9 = uVar7 - 0x9c;
  lVar17 = 2;
  puVar12 = &DAT_007ab3a8;
  puVar11 = &DAT_007ab3ac;
  do {
    uVar1 = *puVar11;
    *(undefined4 *)((int)lVar13 + 0x140) = *puVar12;
    uVar2 = puVar12[2];
    *(undefined4 *)((int)lVar13 + 0x144) = uVar1;
    uVar1 = puVar11[2];
    puVar12 = puVar12 + 4;
    *(undefined4 *)((int)lVar10 + 8) = uVar2;
    puVar11 = puVar11 + 4;
    *(undefined4 *)((int)lVar9 + 8) = uVar1;
    lVar10 = lVar10 + 0x10;
    lVar9 = lVar9 + 0x10;
    lVar13 = lVar13 + 0x10;
    lVar17 = lVar17 + -1;
  } while (lVar17 != 0);
  iVar14 = 0;
  iVar16 = iVar5;
  do {
    iVar15 = iVar16 + 0x10;
    fastfunc::FastEulerToMtx1(uVar7 - 0x170,iVar15);
    *(undefined4 *)(puVar6 + 0x14) = *(undefined4 *)(iVar5 + 0x50);
    *(undefined4 *)((int)puVar6 + 0xa4) = *(undefined4 *)(iVar5 + 0x54);
    *(undefined4 *)(puVar6 + 0x15) = *(undefined4 *)(iVar5 + 0x58);
    *(undefined4 *)((int)puVar6 + 0xac) = *(undefined4 *)(iVar5 + 0x5c);
    uVar1 = *(undefined4 *)(iVar5 + 0x40);
    *(undefined4 *)((int)puVar6 + 0xac) = 0x3f800000;
    *(undefined4 *)(puVar6 + 0x15) = uVar1;
    *(float *)(iVar16 + 0x10) = -*(float *)(iVar16 + 0x10);
    fastfunc::FastEulerToMtx1(uVar7 - 0x130,iVar15);
    *(undefined4 *)(puVar6 + 0x1c) = *(undefined4 *)(puVar6 + 0x14);
    *(undefined4 *)((int)puVar6 + 0xe4) = *(undefined4 *)((int)puVar6 + 0xa4);
    *(undefined4 *)(puVar6 + 0x1d) = *(undefined4 *)(puVar6 + 0x15);
    *(undefined4 *)((int)puVar6 + 0xec) = *(undefined4 *)((int)puVar6 + 0xac);
    fVar3 = *(float *)(iVar16 + 0x10);
    *(undefined4 *)(puVar6 + 0x26) = DAT_007ab398;
    uVar1 = DAT_007ab398;
    *(float *)(iVar16 + 0x10) = -fVar3;
    puVar11 = &DAT_00fada80;
    *(undefined4 *)((int)puVar6 + 0x134) = uVar1;
    uVar1 = DAT_007ab398;
    dVar19 = (double)DAT_007ab384;
    iVar16 = 0;
    *(undefined4 *)(puVar6 + 0x27) = DAT_007ab398;
    *(undefined4 *)((int)puVar6 + 0x13c) = uVar1;
    *(float *)(puVar6 + 0x16) = -*(float *)(puVar6 + 0x16);
    *(float *)((int)puVar6 + 0xb4) = -*(float *)((int)puVar6 + 0xb4);
    *(float *)(puVar6 + 0x17) = -*(float *)(puVar6 + 0x17);
    *(float *)(puVar6 + 0x18) = -*(float *)(puVar6 + 0x18);
    *(float *)((int)puVar6 + 0xc4) = -*(float *)((int)puVar6 + 0xc4);
    *(float *)(puVar6 + 0x19) = -*(float *)(puVar6 + 0x19);
    dVar18 = (double)*(float *)(iVar5 + 0x4c);
    dVar19 = (double)(float)(dVar18 - dVar19);
    do {
      fVar3 = (float)puVar11[1];
      iVar16 = iVar16 + 1;
      *(float *)((int)puVar6 + 0xf4) = (float)((double)fVar3 * dVar19);
      fVar4 = (float)puVar11[2];
      *(undefined4 *)((int)puVar6 + 0xfc) = 0x3f800000;
      *(undefined4 *)(puVar6 + 0x1e) = 0x3d4ccccd;
      *(float *)((int)puVar6 + 0x104) = (float)((double)fVar3 * dVar18);
      *(undefined4 *)((int)puVar6 + 0x10c) = 0x3f800000;
      *(undefined4 *)(puVar6 + 0x20) = 0xbd4ccccd;
      *(float *)(puVar6 + 0x1f) = (float)((double)fVar4 * dVar19);
      *(float *)(puVar6 + 0x21) = (float)((double)fVar4 * dVar18);
      uVar1 = EffectTexHeaders;
      fVar3 = (float)(&DAT_00fada84)[(iVar16 % 0xd) * 4];
      *(float *)((int)puVar6 + 0x114) = (float)((double)fVar3 * dVar19);
      fVar4 = (float)(&DAT_00fada88)[(iVar16 % 0xd) * 4];
      *(undefined4 *)((int)puVar6 + 0x11c) = 0x3f800000;
      *(undefined4 *)(puVar6 + 0x22) = 0x3d4ccccd;
      *(float *)((int)puVar6 + 0x124) = (float)((double)fVar3 * dVar18);
      *(undefined4 *)((int)puVar6 + 300) = 0x3f800000;
      *(undefined4 *)(puVar6 + 0x24) = 0xbd4ccccd;
      *(float *)(puVar6 + 0x23) = (float)((double)fVar4 * dVar19);
      *(float *)(puVar6 + 0x25) = (float)((double)fVar4 * dVar18);
      draw::FastDrawQuad(uVar7 - 0xf0,uVar7 - 0x170,0,uVar1,9);
      draw::FastDrawQuad(uVar7 - 0xf0,uVar7 - 0x130,0,EffectTexHeaders,9);
      puVar11 = puVar11 + 4;
    } while (iVar16 < 0xd);
    iVar14 = iVar14 + 1;
    iVar16 = iVar15;
  } while (iVar14 < 3);
  return;
}



//==== 00291240  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1514_00291240(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1514_00291240(void)

{
  DAT_007ab420 = 0x10000;
  return;
}



//==== 00291258  ns=mobyupdate_unsorted  size=0x4
// sig: undefined UpdateMoby_1514(MobyInstance * moby)
// callers(0): 
// callees(0): 

/* Moby 1514 */

MobyInstance * mobyupdate_unsorted::UpdateMoby_1514(MobyInstance *moby)

{
  return moby;
}



//==== 0029125c  ns=Global  size=0xb0
// sig: undefined FUN_0029125c(void)
// callers(1): 0028eba8 mobyupdate_unsorted::UpdateMoby_1511
// callees(2): 000efa28 mobyfunc::CreateMoby; 000f31a8 mobyfunc::UpdateMobyTransform

MobyInstance * FUN_0029125c(int param_1)

{
  f32 fVar1;
  f32 fVar2;
  short sVar3;
  MobyInstance *pMVar4;
  undefined8 uVar5;
  
  pMVar4 = mobyfunc::CreateMoby(LAMP_DESTROYED);
  if (pMVar4 != (MobyInstance *)0x0) {
    sVar3 = *(short *)(param_1 + 0x32);
    pMVar4->updateDistance = *(char *)(param_1 + 0x30);
    pMVar4->drawDistance = sVar3;
    fVar1 = *(f32 *)(param_1 + 0x40);
    pMVar4->enabled = '\x01';
    fVar2 = *(f32 *)(param_1 + 0x44);
    (pMVar4->rotation).x = fVar1;
    fVar1 = *(f32 *)(param_1 + 0x48);
    (pMVar4->rotation).y = fVar2;
    uVar5 = *(undefined8 *)(param_1 + 0x38);
    (pMVar4->rotation).z = fVar1;
    fVar1 = *(f32 *)(param_1 + 0x10);
    pMVar4->color = (int)((ulonglong)uVar5 >> 0x20);
    pMVar4->light = (int)uVar5;
    fVar2 = *(f32 *)(param_1 + 0x14);
    (pMVar4->pos).x = fVar1;
    fVar1 = *(f32 *)(param_1 + 0x18);
    (pMVar4->pos).y = fVar2;
    fVar2 = *(f32 *)(param_1 + 0x1c);
    (pMVar4->pos).z = fVar1;
    (pMVar4->pos).w = fVar2;
    mobyfunc::UpdateMobyTransform(pMVar4);
  }
  return pMVar4;
}



//==== 00291320  ns=Global  size=0x22c
// sig: undefined FUN_00291320(void)
// callers(1): 003b85b8 mobyupdate_unsorted::UpdateMoby_563
// callees(5): 000efa28 mobyfunc::CreateMoby; 000f31a8 mobyfunc::UpdateMobyTransform; 000fcbe8 mobyutil::MB_randRangeFloat; 000fcc68 mobyutil::MB_randRot; 000fe4f0 mobyutil::MB_randRangeSigned

MobyInstance *
FUN_00291320(double param_1,double param_2,int param_3,int *param_4,f32 *param_5,f32 *param_6,
            MOBY_OCLASSES param_7,undefined8 param_8,undefined8 param_9,undefined2 param_10)

{
  int *piVar1;
  undefined2 uVar2;
  MobyInstance *pMVar4;
  undefined8 uVar3;
  undefined8 in_LR;
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  pMVar4 = mobyfunc::CreateMoby(param_7);
  if (pMVar4 != (MobyInstance *)0x0) {
    piVar1 = (int *)pMVar4->pVar;
    *piVar1 = param_3;
    pMVar4->updateDistance = -1;
    pMVar4->drawDistance = 0x7e;
    uVar3 = *(undefined8 *)(param_3 + 0x38);
    pMVar4->enabled = '\x01';
    pMVar4->color = (int)((ulonglong)uVar3 >> 0x20);
    pMVar4->light = (int)uVar3;
    pMVar4->state = '\0';
    dVar5 = (double)mobyutil::MB_randRot();
    (pMVar4->rotation).x = (float)dVar5;
    dVar5 = (double)mobyutil::MB_randRot();
    (pMVar4->rotation).y = (float)dVar5;
    dVar5 = (double)mobyutil::MB_randRot();
    (pMVar4->rotation).z = (float)dVar5;
    (pMVar4->pos).x = *param_5;
    (pMVar4->pos).y = param_5[1];
    auVar7 = ZEXT416(0xffffffff);
    auVar7 = auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60;
    (pMVar4->pos).z = param_5[2];
    (pMVar4->pos).w = param_5[3];
    auVar8 = vectorShiftLeftIntegerWord(auVar7,auVar7);
    (pMVar4->rotation).x = *param_6;
    (pMVar4->rotation).y = param_6[1];
    (pMVar4->rotation).z = param_6[2];
    (pMVar4->rotation).w = param_6[3];
    piVar1[4] = *param_4;
    piVar1[5] = param_4[1];
    piVar1[6] = param_4[2];
    piVar1[7] = param_4[3];
    piVar1[1] = (int)(pMVar4->pos).z;
    auVar7 = loadVectorLeftIndexed(in_LR,0x291310);
    auVar9 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar7 = auVar7 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar7 = vectorMultiplyAddFloatingPoint
                       (auVar9,auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60,auVar8);
    auVar7 = vectorConvertToSignedFixedPointWordSaturate(auVar7,0);
    auVar7 = vectorSplatHalfWord(auVar7,1);
    uVar2 = storeVectorElementHalfWordIndexed(auVar7,0xe,ZEXT48(piVar1));
    *(undefined2 *)((int)piVar1 + 0xe) = uVar2;
    piVar1[8] = 0;
    dVar5 = (double)mobyutil::MB_randRangeSigned((double)DAT_00fadb60,(double)DAT_007ab444);
    dVar6 = 0.01745329238474369;
    piVar1[9] = (int)((float)(dVar5 * 0.01745329238474369) * mobyutil::g_FrameTime);
    dVar5 = (double)mobyutil::MB_randRangeSigned((double)DAT_00fadb60,(double)DAT_007ab444);
    piVar1[10] = (int)((float)(dVar5 * dVar6) * mobyutil::g_FrameTime);
    dVar5 = (double)mobyutil::MB_randRangeFloat((float)param_1,(float)param_2);
    pMVar4->scale = (float)((double)pMVar4->scale * dVar5);
    *(undefined2 *)(piVar1 + 3) = param_10;
    piVar1[2] = (int)(float)(dVar5 * 0.25);
    mobyfunc::UpdateMobyTransform(pMVar4);
  }
  return pMVar4;
}



//==== 00291568  ns=mobyupdate_unsorted  size=0x2bc
// sig: undefined UpdateMoby_1516(MobyInstance * moby)
// callers(0): 
// callees(6): 00059e20 collproc::CollSphere; 000efb38 mobyfunc::DeleteMoby; 000fe4f0 mobyutil::MB_randRangeSigned; 004fffb4 fastfunc::FastDecTimerS16; 00500608 fastfunc::FastVecNormalize; 00502578 fastfunc::FastWrapRot
// strings: 00291560: '?fff`'

/* Moby 1516 */

void mobyupdate_unsorted::UpdateMoby_1516(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  short sVar3;
  void *pvVar4;
  int iVar5;
  double dVar6;
  double dVar7;
  
  pvVar4 = moby->pVar;
  *(float *)((int)pvVar4 + 0x18) = -(DAT_0071f418 * 20.0 - *(float *)((int)pvVar4 + 0x18));
  fVar2 = (moby->rotation).x;
  (moby->pos).x = (moby->pos).x + *(float *)((int)pvVar4 + 0x10);
  (moby->pos).y = (moby->pos).y + *(float *)((int)pvVar4 + 0x14);
  (moby->pos).z = (moby->pos).z + *(float *)((int)pvVar4 + 0x18);
  dVar6 = (double)fastfunc::FastWrapRot(fVar2,*(float *)((int)pvVar4 + 0x20));
  (moby->rotation).x = (float)dVar6;
  dVar6 = (double)fastfunc::FastWrapRot((moby->rotation).y,*(float *)((int)pvVar4 + 0x24));
  (moby->rotation).y = (float)dVar6;
  dVar6 = (double)fastfunc::FastWrapRot((moby->rotation).z,*(float *)((int)pvVar4 + 0x28));
  bVar1 = moby->state;
  (moby->rotation).z = (float)dVar6;
  if (bVar1 == 0) {
    if (*(float *)((int)pvVar4 + 4) - 3.0 <= (moby->pos).z) {
      iVar5 = fastfunc::FastDecTimerS16((int)pvVar4 + 0xe);
      if ((((iVar5 != 0) && (*(short *)((int)pvVar4 + 0xc) != 0)) &&
          (iVar5 = collproc::CollSphere
                             ((double)*(float *)((int)pvVar4 + 8),(longlong)(int)moby + 0x10),
          iVar5 != 0)) &&
         (*(float *)((int)pvVar4 + 0x18) * CollOutput.normal.z +
          *(float *)((int)pvVar4 + 0x10) * CollOutput.normal.x +
          *(float *)((int)pvVar4 + 0x14) * CollOutput.normal.y < 0.0)) {
        (moby->pos).x = CollOutput.push.x;
        sVar3 = *(short *)((int)pvVar4 + 0xc);
        (moby->pos).y = CollOutput.push.y;
        (moby->pos).z = CollOutput.push.z;
        fVar2 = CollOutput.push.w;
        *(short *)((int)pvVar4 + 0xc) = sVar3 + -1;
        (moby->pos).w = fVar2;
        fastfunc::FastVecNormalize((int)pvVar4 + 0x10,(int)pvVar4 + 0x10,0xa10980);
        *(undefined4 *)((int)pvVar4 + 0x20) = 0;
        *(float *)((int)pvVar4 + 0x10) = *(float *)((int)pvVar4 + 0x10) * 0.75;
        *(float *)((int)pvVar4 + 0x14) = *(float *)((int)pvVar4 + 0x14) * 0.75;
        *(float *)((int)pvVar4 + 0x18) = *(float *)((int)pvVar4 + 0x18) * 0.75;
        dVar6 = (double)mobyutil::MB_randRangeSigned((double)DAT_00fadb60,(double)DAT_007ab444);
        dVar7 = 0.01745329238474369;
        *(float *)((int)pvVar4 + 0x24) =
             (float)(dVar6 * 0.01745329238474369) * mobyutil::g_FrameTime;
        dVar6 = (double)mobyutil::MB_randRangeSigned((double)DAT_00fadb60,(double)DAT_007ab444);
        *(float *)((int)pvVar4 + 0x28) = (float)(dVar6 * dVar7) * mobyutil::g_FrameTime;
      }
    }
    else {
      moby->state = '\x01';
    }
  }
  else if (bVar1 < 2) {
    moby->scale = moby->scale * (float)0x3f666666;
    if ((byte)moby->alpha < 4) {
      mobyfunc::DeleteMoby(moby);
    }
    else {
      moby->alpha = moby->alpha - 4;
    }
  }
  return;
}



//==== 00291828  ns=mobyupdate_helpers  size=0x118
// sig: undefined M1516_00291828(void)
// callers(0): 
// callees(5): 000efa28 mobyfunc::CreateMoby; 000f31a8 mobyfunc::UpdateMobyTransform; 000fcbe8 mobyutil::MB_randRangeFloat; 0010c000 mobyutil::MB_CopyHeroLights; 0012bfd8 partupd::SpawnPart_39

MobyInstance * mobyupdate_helpers::M1516_00291828(int param_1,int param_2)

{
  f32 fVar1;
  f32 fVar2;
  int *piVar3;
  void *pvVar4;
  MobyInstance *pMVar5;
  undefined4 uVar6;
  double dVar7;
  
  pMVar5 = mobyfunc::CreateMoby(0x98);
  if (pMVar5 != (MobyInstance *)0x0) {
    piVar3 = (int *)pMVar5->pVar;
    *piVar3 = param_1;
    pMVar5->updateDistance = ' ';
    pMVar5->drawDistance = 0x40;
    pMVar5->enabled = '\x01';
    pMVar5->state = '\x01';
    piVar3[8] = param_2;
    piVar3[0xb] = 1;
    fVar1 = *(f32 *)(param_1 + 0x14);
    (pMVar5->pos).x = *(f32 *)(param_1 + 0x10);
    fVar2 = *(f32 *)(param_1 + 0x18);
    (pMVar5->pos).y = fVar1;
    fVar1 = *(f32 *)(param_1 + 0x1c);
    (pMVar5->pos).z = fVar2;
    pvVar4 = pMVar5->pVar;
    (pMVar5->pos).w = fVar1;
    (pMVar5->rotation).x = 0.0;
    (pMVar5->rotation).y = 0.5235988;
    (pMVar5->rotation).z = 0.0;
    dVar7 = (double)mobyutil::MB_randRangeFloat(DAT_007ab460,DAT_007ab464);
    *(float *)((int)pvVar4 + 0xc) = (float)dVar7;
    *(undefined4 *)((int)pvVar4 + 0x28) = 0;
    *(f32 *)((int)pvVar4 + 8) = (pMVar5->pos).z;
    mobyutil::MB_CopyHeroLights(pMVar5);
    uVar6 = partupd::SpawnPart_39(pMVar5);
    *(undefined4 *)((int)pvVar4 + 0x24) = uVar6;
    mobyfunc::UpdateMobyTransform(pMVar5);
  }
  return pMVar5;
}



//==== 00291970  ns=mobyupdate_unsorted  size=0x85c
// sig: undefined UpdateMoby_152(MobyInstance * moby)
// callers(0): 
// callees(9): 00055ab8 stub::STUB_00055ab8_RET_0; 000c8444 hud::RegisterHUDCallback; 000efb38 mobyfunc::DeleteMoby; 000fcbe8 mobyutil::MB_randRangeFloat; 0010c000 mobyutil::MB_CopyHeroLights; 0012bfd8 partupd::SpawnPart_39; 0015d12c sound::PlayMobySound; 00500608 fastfunc::FastVecNormalize; 00502578 fastfunc::FastWrapRot

/* Moby 152 */

void mobyupdate_unsorted::UpdateMoby_152(MobyInstance *moby)

{
  double dVar1;
  float fVar2;
  float fVar3;
  u8 uVar4;
  float fVar5;
  float fVar6;
  void *pvVar7;
  void *pvVar8;
  float fVar9;
  undefined4 uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  float local_b0;
  float local_ac;
  float local_a8;
  undefined4 local_a4;
  undefined1 local_a0 [16];
  undefined1 local_90 [40];
  
  pvVar7 = moby->pVar;
  pvVar8 = moby->pVar;
  dVar25 = (double)(moby->pos).x;
  dVar24 = (double)(moby->pos).y;
  fVar5 = (moby->pos).z;
  dVar22 = (double)(moby->pos).w;
  *(int *)((int)pvVar7 + 0x28) = *(int *)((int)pvVar7 + 0x28) + 1;
  uVar4 = moby->state;
  if (uVar4 != '\0') {
    fVar5 = *(float *)((int)pvVar7 + 8);
    (moby->pos).z = fVar5;
  }
  dVar23 = (double)fVar5;
  if (uVar4 == '\x04') {
    if (*(int *)((int)pvVar7 + 0x24) != 0) {
      *(undefined2 *)(*(int *)((int)pvVar7 + 0x24) + 10) = 0;
    }
    mobyfunc::DeleteMoby(moby);
    return;
  }
  if (uVar4 != '\x03') {
    if (uVar4 != '\x02') {
      if (uVar4 != '\x01') {
        if (uVar4 == '\0') {
          (moby->rotation).x = 0.0;
          (moby->rotation).z = 0.0;
          (moby->rotation).y = 0.5235988;
          dVar22 = (double)mobyutil::MB_randRangeFloat(DAT_007ab460,DAT_007ab464);
          *(float *)((int)pvVar8 + 0xc) = (float)dVar22;
          *(undefined4 *)((int)pvVar8 + 0x28) = 0;
          *(f32 *)((int)pvVar8 + 8) = (moby->pos).z;
          mobyutil::MB_CopyHeroLights(moby);
          uVar10 = partupd::SpawnPart_39(moby);
          *(undefined4 *)((int)pvVar8 + 0x24) = uVar10;
          moby->state = ((byte)((LZCOUNT(-*(int *)((int)pvVar7 + 0x2c)) << 0x3a) >> 0x3f) & 1) + 1;
        }
        goto LAB_002920bc;
      }
      dVar14 = (double)*(float *)((int)pvVar7 + 0x14);
      dVar19 = (double)*(float *)((int)pvVar7 + 0x10);
      dVar16 = -(double)(DAT_0071f418 * 9.8 - *(float *)((int)pvVar7 + 0x18));
      *(float *)((int)pvVar7 + 0x18) = (float)dVar16;
      dVar21 = (double)SQRT((float)(dVar16 * dVar16 +
                                   (double)(float)(dVar19 * dVar19 +
                                                  (double)(float)(dVar14 * dVar14))));
      dVar17 = (double)(DAT_007ab44c * 1.8 * DAT_0071f408);
      if (dVar17 < dVar21) {
        dVar18 = (double)(float)(dVar17 / dVar21);
        dVar20 = 0.0;
        dVar15 = dVar19 * dVar18;
        dVar1 = dVar14 * dVar18;
        dVar18 = dVar16 * dVar18;
        dVar19 = dVar20;
        if (0.0 - dVar21 < 0.0) {
          dVar19 = (double)(float)dVar15;
        }
        dVar14 = dVar20;
        if (0.0 - dVar21 < 0.0) {
          dVar14 = (double)(float)dVar1;
        }
        if (0.0 - dVar21 < 0.0) {
          dVar20 = (double)(float)dVar18;
        }
        if (dVar21 - 0.0 < 0.0) {
          dVar19 = (double)(float)dVar15;
        }
        if (dVar21 - 0.0 < 0.0) {
          dVar14 = (double)(float)dVar1;
        }
        dVar16 = dVar20;
        if (dVar21 - 0.0 < 0.0) {
          dVar16 = (double)(float)dVar18;
        }
        *(float *)((int)pvVar7 + 0x10) = (float)dVar19;
        *(float *)((int)pvVar7 + 0x14) = (float)dVar14;
        *(float *)((int)pvVar7 + 0x18) = (float)dVar16;
        dVar21 = dVar17;
      }
      dVar17 = (double)(float)(dVar24 + dVar14);
      dVar16 = (double)(float)(dVar23 + dVar16);
      dVar19 = (double)(float)(dVar25 + dVar19);
      dVar14 = 0.0;
      uVar11 = (int)moby - (int)MobyInstance;
      uVar11 = ((int)uVar11 >> 8) + (uint)((int)uVar11 < 0 && (uVar11 & 0xff) != 0);
      if (worldUpdateTime +
          (((int)worldUpdateTime >> 1) +
          (uint)((int)worldUpdateTime < 0 && (worldUpdateTime & 1) != 0)) * -2 ==
          uVar11 + (((int)uVar11 >> 1) + (uint)((int)uVar11 < 0 && (uVar11 & 1) != 0)) * -2) {
        iVar12 = stub::STUB_00055ab8_RET_0(local_a0,local_90,2,0,0);
        dVar15 = (double)DAT_007ab44c;
        if ((iVar12 != 0) &&
           ((CollOutput.pMoby == (MobyInstance *)0x0 || (9 < *(int *)((int)pvVar7 + 0x28))))) {
          if ((double)DAT_00fadb64 <= dVar21) {
            fVar6 = (float)(dVar24 - (double)CollOutput.ip.y);
            fVar2 = (float)(dVar25 - (double)CollOutput.ip.x);
            fVar3 = (float)(dVar23 - (double)CollOutput.ip.z);
            dVar22 = (double)CollOutput.ip.w;
            dVar25 = (double)SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar6 * fVar6);
            fVar5 = (float)(dVar15 / dVar25);
            dVar24 = dVar14;
            if (dVar14 - dVar25 < 0.0) {
              dVar24 = (double)(fVar5 * fVar3);
            }
            dVar23 = dVar14;
            if (dVar14 - dVar25 < 0.0) {
              dVar23 = (double)(fVar5 * fVar6);
            }
            dVar19 = dVar14;
            if (dVar14 - dVar25 < 0.0) {
              dVar19 = (double)(fVar5 * fVar2);
            }
            if (dVar25 - dVar14 < 0.0) {
              dVar24 = (double)(fVar5 * fVar3);
            }
            if (dVar25 - dVar14 < 0.0) {
              dVar23 = (double)(fVar5 * fVar6);
            }
            if (dVar25 - dVar14 < 0.0) {
              dVar19 = (double)(fVar5 * fVar2);
            }
            dVar16 = (double)(float)((double)CollOutput.ip.z + dVar24);
            dVar17 = (double)(float)((double)CollOutput.ip.y + dVar23);
            dVar19 = (double)(float)((double)CollOutput.ip.x + dVar19);
            fastfunc::FastVecNormalize(&local_b0,(int)pvVar7 + 0x10,0xa10980);
            dVar25 = (double)SQRT(local_a8 * local_a8 + local_b0 * local_b0 + local_ac * local_ac);
            dVar24 = (double)(float)(dVar25 - (double)DAT_007ab454);
            if ((double)(float)(dVar25 - (double)DAT_007ab454) - dVar14 < 0.0) {
              dVar24 = dVar14;
            }
            if (dVar25 == dVar14) {
              *(float *)((int)pvVar7 + 0x10) = local_b0;
              *(float *)((int)pvVar7 + 0x14) = local_ac;
              *(float *)((int)pvVar7 + 0x18) = local_a8;
              *(undefined4 *)((int)pvVar7 + 0x18) = 0;
              *(undefined4 *)((int)pvVar7 + 0x14) = 0;
              *(undefined4 *)((int)pvVar7 + 0x10) = 0;
            }
            else {
              fVar5 = (float)(dVar24 / dVar25);
              *(float *)((int)pvVar7 + 0x10) = local_b0 * fVar5;
              *(float *)((int)pvVar7 + 0x14) = local_ac * fVar5;
              *(float *)((int)pvVar7 + 0x18) = local_a8 * fVar5;
            }
            *(undefined4 *)((int)pvVar7 + 0x1c) = local_a4;
          }
          else {
            *(undefined4 *)((int)pvVar7 + 0x1c) = 0;
            *(undefined4 *)((int)pvVar7 + 0x18) = 0;
            *(undefined4 *)((int)pvVar7 + 0x14) = 0;
            *(undefined4 *)((int)pvVar7 + 0x10) = 0;
            dVar19 = (double)CollOutput.ip.x;
            dVar17 = (double)CollOutput.ip.y;
            dVar22 = (double)CollOutput.ip.w;
            dVar16 = (double)(float)(dVar15 + (double)CollOutput.ip.z);
            if (CollOutput.pMoby == (MobyInstance *)0x0) {
              *(undefined4 *)((int)pvVar7 + 0x1c) = 0;
              *(undefined4 *)((int)pvVar7 + 0x18) = 0;
              *(undefined4 *)((int)pvVar7 + 0x14) = 0;
              *(undefined4 *)((int)pvVar7 + 0x10) = 0;
              moby->state = '\x02';
            }
          }
        }
      }
      (moby->pos).x = (float)dVar19;
      (moby->pos).y = (float)dVar17;
      (moby->pos).z = (float)dVar16;
      (moby->pos).w = (float)dVar22;
    }
    dVar22 = (double)fastfunc::FastWrapRot((moby->rotation).z,*(float *)((int)pvVar7 + 0xc));
    (moby->rotation).z = (float)dVar22;
    if (hero::g_heroStateType == 0xf) {
      fVar5 = (moby->pos).y;
      fVar6 = (moby->pos).x;
      if ((SQRT((DAT_0096a210 - fVar6) * (DAT_0096a210 - fVar6) +
                (DAT_0096a214 - fVar5) * (DAT_0096a214 - fVar5)) < 0.5) ||
         (SQRT((DAT_0096a200 - fVar6) * (DAT_0096a200 - fVar6) +
               (DAT_0096a204 - fVar5) * (DAT_0096a204 - fVar5)) < 0.5 ||
          SQRT((DAT_0096a1f0 - fVar6) * (DAT_0096a1f0 - fVar6) +
               (DAT_0096a1f4 - fVar5) * (DAT_0096a1f4 - fVar5)) < 0.5)) {
LAB_00291fd4:
        if (*(int *)((int)pvVar7 + 0x24) != 0) {
          *(undefined2 *)(*(int *)((int)pvVar7 + 0x24) + 10) = 0;
        }
        iVar12 = *(int *)((int)pvVar7 + 0x20);
        g_boltCount = g_boltCount + iVar12;
        if (-1 < iVar12) {
          g_totalBoltsCollected = g_totalBoltsCollected + iVar12;
          iVar12 = *(int *)((int)pvVar7 + 0x20);
        }
        *(int *)(&DAT_00a0f6e4 + Level * 4) = *(int *)(&DAT_00a0f6e4 + Level * 4) + iVar12;
        sound::PlayMobySound(0,0,moby);
        hud::RegisterHUDCallback
                  (2,0x754e,&PTR_BoltHud_Init_00705810,&PTR_BoltHud_Update_00705818,
                   &PTR_Draw_BoltCountUI_00705820,&g_boltCount,9999999);
        mobyfunc::DeleteMoby(moby);
        return;
      }
    }
    else {
      fVar5 = (moby->pos).y - g_heroPosition.y;
      fVar6 = (moby->pos).x - g_heroPosition.x;
      if ((SQRT(fVar6 * fVar6 + fVar5 * fVar5) < DAT_0096bf68) &&
         (ABS((moby->pos).z - g_heroPosition.z) < DAT_0096bf6c)) goto LAB_00291fd4;
    }
  }
LAB_002920bc:
  fVar2 = DAT_007ab45c;
  iVar12 = (*(int *)((int)pvVar7 + 0x28) / DAT_007ab458) * DAT_007ab458;
  iVar13 = DAT_007ab458 + -1;
  *(f32 *)((int)pvVar7 + 8) = (moby->pos).z;
  fVar5 = ((float)(longlong)(*(int *)((int)pvVar7 + 0x28) - iVar12) / (float)(longlong)iVar13) *
          6.2831855 - 3.1415927;
  fVar6 = 3.1415925 - fVar5;
  if (fVar5 - (3.1415925 - fVar5) < 0.0) {
    fVar6 = fVar5;
  }
  fVar3 = -3.1415925 - fVar5;
  if ((-3.1415925 - fVar5) - fVar6 < 0.0) {
    fVar3 = fVar6;
  }
  fVar5 = fVar3 * fVar3;
  fVar6 = fVar5 * fVar5 * fVar3;
  fVar9 = fVar5 * fVar6;
  (moby->pos).z =
       fVar2 * (fVar5 * fVar9 * 2.601887e-06 +
               fVar9 * -0.0001980741 + fVar6 * 0.0083330255 + fVar5 * fVar3 * -0.16666657 + fVar3) +
       (moby->pos).z;
  return;
}



//==== 002921d0  ns=mobyupdate_helpers  size=0x34
// sig: undefined M1524_002921d0(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1524_002921d0(void)

{
  DAT_007ab4b4 = 0x10000;
  DAT_00fadb64 = DAT_0071f418 * 20.0;
  return;
}



//==== 00292250  ns=mobyupdate_helpers  size=0x36c
// sig: undefined M1524_00292250(void)
// callers(1): 00292878 mobyupdate_unsorted::UpdateMoby_1524
// callees(9): 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 000fcc68 mobyutil::MB_randRot; 000fe484 mobyutil::MB_randRange; 000fea60 mobyutil::MB_randSphere; 0012ab08 partupd::SpawnPart_35; 0012e8c8 partupd::SpawnPart_46; 00502758 fastfunc::FastDoubleToInt; 005027bc fastfunc::FastLerpColor

void mobyupdate_helpers::M1524_00292250(int param_1,float *param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  char cVar5;
  undefined2 uVar4;
  int iVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined8 uVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  undefined8 uVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c0;
  float local_bc;
  float local_b8;
  
  iVar3 = 0;
  iVar6 = 0;
  if (0 < param_3) {
    dVar17 = 0.0;
    dVar18 = 6.0;
    dVar19 = 1.570796251296997;
    dVar20 = 3.141592502593994;
    dVar21 = -3.141592502593994;
    dVar22 = -0.16666656732559204;
    dVar23 = 0.008333025500178337;
    dVar24 = -0.0001980741071747616;
    dVar26 = 2.601886990305502e-06;
    dVar27 = 3.0;
    dVar28 = 6.5;
    do {
      dVar7 = (double)mobyutil::MB_randRot();
      dVar8 = (double)mobyutil::MB_randRangeFloat
                                ((float)dVar17,(float)((double)mobyutil::g_FrameTime * dVar18));
      dVar11 = (double)(float)(dVar7 + dVar19);
      dVar9 = (double)(float)(dVar20 - dVar7);
      if (dVar7 - (double)(float)(dVar20 - dVar7) < 0.0) {
        dVar9 = dVar7;
      }
      dVar13 = (double)(float)(dVar20 - dVar11);
      if (dVar11 - (double)(float)(dVar20 - dVar11) < 0.0) {
        dVar13 = dVar11;
      }
      dVar12 = (double)(float)(dVar21 - dVar7);
      if ((double)(float)(dVar21 - dVar7) - dVar9 < 0.0) {
        dVar12 = dVar9;
      }
      dVar9 = (double)(float)(dVar21 - dVar11);
      if ((double)(float)(dVar21 - dVar11) - dVar13 < 0.0) {
        dVar9 = dVar13;
      }
      dVar7 = (double)(float)(dVar12 * dVar12);
      dVar11 = (double)(float)(dVar9 * dVar9);
      dVar15 = (double)(float)(dVar7 * (double)(float)(dVar7 * dVar12));
      dVar13 = (double)(float)(dVar11 * (double)(float)(dVar11 * dVar9));
      dVar14 = (double)(float)(dVar7 * dVar15);
      dVar16 = (double)(float)(dVar11 * dVar13);
      local_cc = (float)((double)(float)((double)(float)(dVar7 * dVar14) * dVar26 +
                                        (double)(float)(dVar14 * dVar24 +
                                                       (double)(float)(dVar15 * dVar23 +
                                                                      (double)(float)((double)(float
                                                  )(dVar7 * dVar12) * dVar22 + dVar12)))) * dVar8);
      local_d0 = (float)((double)(float)((double)(float)(dVar11 * dVar16) * dVar26 +
                                        (double)(float)(dVar16 * dVar24 +
                                                       (double)(float)(dVar13 * dVar23 +
                                                                      (double)(float)((double)(float
                                                  )(dVar11 * dVar9) * dVar22 + dVar9)))) * dVar8);
      dVar9 = (double)mobyutil::MB_randRangeFloat
                                ((float)((double)mobyutil::g_FrameTime * dVar27),
                                 (float)((double)mobyutil::g_FrameTime * dVar28));
      local_c8 = (float)dVar9;
      uVar1 = mobyutil::MB_randRange(0x5a,0x78);
      uVar2 = mobyutil::MB_randInt(2);
      partupd::SpawnPart_35((Vec4 *)(param_1 + 0x10),&local_d0,uVar2,uVar1);
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_3);
  }
  if (0 < param_4) {
    dVar17 = 1.0;
    dVar18 = 0.05000000074505806;
    dVar19 = 3.0;
    dVar20 = 6.0;
    uVar25 = 0x4010000000000000;
    dVar21 = 30.0;
    dVar22 = 90.0;
    dVar23 = 0.0;
    do {
      mobyutil::MB_randSphere(dVar17,dVar17,&local_c0);
      local_c0 = local_c0 + *(float *)(param_1 + 0x10);
      local_bc = local_bc + *(float *)(param_1 + 0x14);
      local_b8 = (float)((double)*param_2 + dVar18);
      uVar10 = mobyutil::MB_randRangeFloat((float)dVar19,(float)dVar20);
      dVar24 = -1.0;
      if (iVar6 == 0) {
        dVar24 = dVar17;
      }
      iVar3 = partupd::SpawnPart_46(uVar10,dVar24,&local_c0,&DAT_00a15d30);
      if (iVar3 != 0) {
        cVar5 = fastfunc::FastDoubleToInt(uVar25);
        *(char *)(iVar3 + 9) = cVar5 + '@';
        dVar24 = (double)mobyutil::MB_randRangeFloat((float)dVar21,(float)dVar22);
        uVar4 = fastfunc::FastDoubleToInt((double)(float)(dVar24 * (double)animationSpeed));
        *(undefined2 *)(iVar3 + 10) = uVar4;
        uVar2 = DAT_007ab4fc;
        uVar1 = DAT_007ab4f8;
        mobyutil::MB_randRangeFloat((float)dVar23,(float)dVar17);
        uVar1 = fastfunc::FastLerpColor(uVar1,uVar2);
        *(undefined4 *)(iVar3 + 4) = uVar1;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < param_4);
  }
  return;
}



//==== 002925d0  ns=mobyupdate_helpers  size=0x294
// sig: undefined M1524_002925d0(void)
// callers(1): 00292878 mobyupdate_unsorted::UpdateMoby_1524
// callees(5): 000fcbe8 mobyutil::MB_randRangeFloat; 000fea60 mobyutil::MB_randSphere; 001206e8 partupd::SpawnPart_2; 00502758 fastfunc::FastDoubleToInt; 005027bc fastfunc::FastLerpColor

void mobyupdate_helpers::M1524_002925d0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 local_80 [16];
  undefined1 local_70 [40];
  
  dVar9 = 0.0;
  mobyutil::MB_randSphere(0,(double)(DAT_007ab500 * mobyutil::g_FrameTime),local_80);
  mobyutil::MB_randRangeFloat(DAT_007ab504,DAT_007ab508);
  uVar2 = DAT_007ab518;
  uVar1 = DAT_007ab514;
  dVar8 = 1.0;
  mobyutil::MB_randRangeFloat((float)dVar9,1.0);
  uVar3 = fastfunc::FastLerpColor(uVar1,uVar2);
  uVar2 = DAT_007ab520;
  uVar1 = DAT_007ab51c;
  mobyutil::MB_randRangeFloat((float)dVar9,(float)dVar8);
  uVar4 = fastfunc::FastLerpColor(uVar1,uVar2);
  dVar10 = 0.800000011920929;
  dVar9 = 1.2000000476837158;
  dVar8 = (double)mobyutil::MB_randRangeFloat
                            ((float)((double)(longlong)DAT_007ab524 * 0.800000011920929),
                             (float)((double)(longlong)DAT_007ab524 * 1.2000000476837158));
  uVar5 = fastfunc::FastDoubleToInt((double)(float)(dVar8 * (double)animationSpeed));
  dVar8 = (double)mobyutil::MB_randRangeFloat
                            ((float)((double)(longlong)DAT_007ab528 * dVar10),
                             (float)((double)(longlong)DAT_007ab528 * dVar9));
  uVar6 = fastfunc::FastDoubleToInt((double)(float)(dVar8 * (double)animationSpeed));
  dVar8 = (double)mobyutil::MB_randRangeFloat
                            ((float)((double)(longlong)DAT_007ab52c * dVar10),
                             (float)((double)(longlong)DAT_007ab52c * dVar9));
  uVar7 = fastfunc::FastDoubleToInt((double)(float)(dVar8 * (double)animationSpeed));
  partupd::SpawnPart_2(param_1 + 0x10,local_80,local_70,uVar3,uVar4,uVar5,uVar6,uVar7);
  return;
}



//==== 00292878  ns=mobyupdate_unsorted  size=0x3e8
// sig: undefined UpdateMoby_1524(MobyInstance * moby)
// callers(0): 
// callees(9): 000efb38 mobyfunc::DeleteMoby; 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 000fea60 mobyutil::MB_randSphere; 00109af0 mobyutil::Delt; 0012a440 partupd::SpawnPart_34; 00292250 mobyupdate_helpers::M1524_00292250; 002925d0 mobyupdate_helpers::M1524_002925d0; 005027bc fastfunc::FastLerpColor

/* Moby 1524 */

void mobyupdate_unsorted::UpdateMoby_1524(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  f32 fVar5;
  MobyClass *pMVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 uVar11;
  short sVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined1 auStack_60 [16];
  float local_50 [2];
  longlong local_48;
  
  fVar2 = animationSpeed;
  pfVar4 = (float *)moby->pVar;
  if (moby->enabled == '\0') {
    sVar12 = *(short *)((int)pfVar4 + 0x22) + 1;
    *(short *)((int)pfVar4 + 0x22) = sVar12;
    local_48 = (longlong)(int)(fVar2 * 15.5);
    if ((int)(fVar2 * 15.5) < (int)sVar12) {
      mobyfunc::DeleteMoby(moby);
      return;
    }
  }
  else {
    *(undefined2 *)((int)pfVar4 + 0x22) = 0;
  }
  bVar1 = moby->state;
  if (bVar1 < 2) {
    if (bVar1 != 0) {
      pfVar4[2] = -(DAT_007ab4d8 * DAT_0071f418 - pfVar4[2]);
      if ((*(float *)pfVar4[9] + 3.0 < (moby->pos).z) &&
         (iVar10 = mobyutil::MB_randInt(DAT_007ab4e8), iVar10 == 0)) {
        mobyupdate_helpers::M1524_002925d0(moby);
      }
      fVar5 = (moby->pos).z;
      uVar7 = (int)fVar5 >> 0x1f;
      uVar8 = (int)*(uint *)pfVar4[9] >> 0x1f;
      if ((int)((uVar7 >> 1 ^ (uint)fVar5) - uVar7) <
          (int)((uVar8 >> 1 ^ *(uint *)pfVar4[9]) - uVar8)) {
        fVar2 = pfVar4[1] * DAT_007ab4e4;
        fVar3 = pfVar4[2] * DAT_007ab4e4;
        *pfVar4 = *pfVar4 * DAT_007ab4e4;
        pfVar4[1] = fVar2;
        pfVar4[2] = fVar3;
        moby->state = '\x02';
        mobyupdate_helpers::M1524_00292250(moby,pfVar4[9],8,4);
      }
    }
  }
  else if (bVar1 < 3) {
    pMVar6 = moby->pClass;
    pfVar4[2] = -(DAT_007ab4dc * DAT_0071f418 - pfVar4[2]);
    dVar17 = (double)(pMVar6->gScale / (float)(longlong)(animationSpeed * 60.5));
    if (worldUpdateTime ==
        (((int)worldUpdateTime >> 2) +
        (uint)((int)worldUpdateTime < 0 && (worldUpdateTime & 3) != 0)) * 4) {
      mobyupdate_helpers::M1524_00292250(moby,pfVar4[9],0,1);
      dVar13 = 0.0;
      mobyutil::MB_randSphere(0,(double)mobyutil::g_FrameTime,auStack_60);
      iVar10 = partupd::SpawnPart_34
                         ((double)DAT_007ab4ec,(double)*(float *)pfVar4[9],(Vec4 *)&moby->pos,
                          auStack_60);
      uVar9 = DAT_007ab4f4;
      uVar11 = DAT_007ab4f0;
      if (iVar10 != 0) {
        mobyutil::MB_randRangeFloat((float)dVar13,1.0);
        uVar11 = fastfunc::FastLerpColor(uVar11,uVar9);
        *(undefined4 *)(iVar10 + 4) = uVar11;
      }
    }
    mobyutil::Delt(0.0,(float)dVar17,&moby->scale);
    if (moby->scale == 0.0) {
      mobyfunc::DeleteMoby(moby);
      return;
    }
  }
  (moby->pos).x = (moby->pos).x + *pfVar4;
  (moby->pos).y = (moby->pos).y + pfVar4[1];
  (moby->pos).z = (moby->pos).z + pfVar4[2];
  local_50[0] = SQRT(*pfVar4 * *pfVar4 + pfVar4[1] * pfVar4[1]);
  dVar18 = 0.0;
  mobyutil::Delt(0.0,DAT_007ab4e0 * DAT_0071f418,local_50);
  fVar2 = pfVar4[1];
  fVar3 = *pfVar4;
  dVar16 = (double)SQRT(fVar3 * fVar3 + fVar2 * fVar2);
  dVar15 = (double)(fVar3 * (float)((double)local_50[0] / dVar16));
  dVar13 = (double)(fVar2 * (float)((double)local_50[0] / dVar16));
  dVar17 = dVar18;
  if (dVar18 - dVar16 < 0.0) {
    dVar17 = dVar15;
  }
  dVar14 = dVar18;
  if (dVar18 - dVar16 < 0.0) {
    dVar14 = dVar13;
  }
  if (dVar16 - dVar18 < 0.0) {
    dVar17 = dVar15;
  }
  if (dVar16 - dVar18 < 0.0) {
    dVar14 = dVar13;
  }
  *pfVar4 = (float)dVar17;
  pfVar4[1] = (float)dVar14;
  return;
}



//==== 00292c60  ns=mobyupdate_helpers  size=0x108
// sig: undefined M1524_00292c60(void)
// callers(1): 00232b90 mobyupdate_helpers::M1266_00232b90
// callees(2): 000efa28 mobyfunc::CreateMoby; 000fcc68 mobyutil::MB_randRot

MobyInstance *
mobyupdate_helpers::M1524_00292c60
          (double param_1,f32 *param_2,undefined4 *param_3,undefined4 param_4)

{
  float fVar1;
  undefined4 *puVar2;
  MobyClass *pMVar3;
  MobyInstance *pMVar4;
  double dVar5;
  
  pMVar4 = mobyfunc::CreateMoby(0x5f4);
  if (pMVar4 != (MobyInstance *)0x0) {
    pMVar4->state = '\x01';
    puVar2 = (undefined4 *)pMVar4->pVar;
    (pMVar4->pos).x = *param_2;
    (pMVar4->pos).y = param_2[1];
    (pMVar4->pos).z = param_2[2];
    (pMVar4->pos).w = param_2[3];
    dVar5 = (double)mobyutil::MB_randRot();
    (pMVar4->rotation).x = (float)dVar5;
    dVar5 = (double)mobyutil::MB_randRot();
    pMVar3 = pMVar4->pClass;
    (pMVar4->rotation).z = (float)dVar5;
    pMVar4->enabled = '\x01';
    pMVar4->updateDistance = -1;
    fVar1 = pMVar3->gScale;
    pMVar4->drawDistance = 0xff;
    puVar2[9] = param_4;
    pMVar4->scale = (float)((double)fVar1 * param_1);
    *puVar2 = *param_3;
    puVar2[1] = param_3[1];
    puVar2[2] = param_3[2];
    puVar2[3] = param_3[3];
  }
  return pMVar4;
}



//==== 00292d88  ns=Global  size=0x424
// sig: undefined FUN_00292d88(void)
// callers(1): 0029ead8 mobyupdate_unsorted::UpdateMoby_157
// callees(5): 00057820 collproc::CollLine; 000efa28 mobyfunc::CreateMoby; 000f31a8 mobyfunc::UpdateMobyTransform; 000fcccc mobyutil::MB_GetPvarsIfMobyHasThem; 00110724 mobyutil::MB_AddMobyToDynamicGroup

MobyInstance *
FUN_00292d88(double param_1,double param_2,double param_3,double param_4,double param_5,f32 param_6,
            f32 *param_7,undefined8 param_8,undefined8 param_9,MobyInstance *param_10)

{
  float fVar1;
  f32 fVar2;
  f32 *pfVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  float fVar6;
  MobyInstance *pMoby;
  undefined8 uVar7;
  int iVar8;
  ulonglong uVar9;
  byte in_cr6;
  undefined8 in_LR;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 local_60 [16];
  
  pMoby = mobyfunc::CreateMoby(GOLD_DEVASTATOR_MISSILE);
  if (pMoby != (MobyInstance *)0x0) {
    pfVar3 = (f32 *)pMoby->pVar;
    uVar9 = ZEXT48(pfVar3);
    pMoby->updateDistance = -1;
    pMoby->drawDistance = 0xff;
    pMoby->enabled = '\x01';
    pMoby->state = '\0';
    (pMoby->rotation).z = (float)param_4;
    (pMoby->rotation).y = (float)param_5;
    pfVar3[4] = param_6;
    (pMoby->pos).x = *param_7;
    (pMoby->pos).y = param_7[1];
    (pMoby->pos).z = param_7[2];
    (pMoby->pos).w = param_7[3];
    pfVar3[9] = 0.0;
    pfVar3[10] = 0.0;
    fVar6 = mobyutil::g_FrameTime;
    fVar1 = mobyutil::g_FrameTime * 20.0;
    pfVar3[6] = (f32)param_10;
    pfVar3[0xe] = 1.4013e-45;
    pfVar3[0x12] = 70.0;
    pfVar3[0xd] = fVar1;
    pfVar3[8] = fVar1 * 0.33333334;
    if (param_10 != (MobyInstance *)0x0) {
      uVar7 = mobyutil::MB_GetPvarsIfMobyHasThem(param_10);
      iVar8 = (int)uVar7;
      fVar6 = mobyutil::g_FrameTime;
      if (iVar8 != 0) {
        *(ushort *)(iVar8 + 0x1e) = *(ushort *)(iVar8 + 0x1e) | 0x80;
        fVar6 = mobyutil::g_FrameTime;
        auVar12 = loadVectorLeftIndexed(0xfffffffffffff414,0x720000);
        auVar10 = loadVectorLeftIndexed(0x34,uVar9);
        auVar11 = loadVectorRightIndexed(0x44,uVar9);
        auVar10 = auVar10 | auVar11;
        if (*(char *)(iVar8 + 0xb) != '\0') {
          pfVar3[0xe] = 0.0;
        }
        auVar11 = ZEXT416(0xfffffff8);
        auVar13 = loadVectorLeftIndexed(0xc,uVar7);
        auVar11 = vectorShiftRightWord
                            (auVar13,auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60);
        if (*(char *)(iVar8 + 0xc) != '\0') {
          auVar11 = vectorConvertFromUnsignedFixedPointWord(auVar11,0);
          auVar10 = ZEXT416(0xffffffff);
          auVar10 = auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60;
          auVar10 = vectorShiftLeftIntegerWord(auVar10,auVar10);
          auVar10 = vectorMultiplyAddFloatingPoint(auVar11,auVar12,auVar10);
          auVar11 = auVar10 >> 0x60 & (undefined1  [16])0xffffffff;
          uVar5 = storeVectorElementWordIndexed
                            (auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60,0x34,
                             uVar9);
          *(undefined4 *)((uint)(pfVar3 + 0xd) & 0xfffffffc) = uVar5;
        }
        auVar11 = ZEXT416(0xffffffff);
        auVar11 = auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60;
        auVar10 = auVar10 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar13 = vectorShiftLeftIntegerWord(auVar11,auVar11);
        auVar11 = loadVectorLeftIndexed(in_LR,0x292d68);
        auVar11 = auVar11 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar11 = vectorMultiplyAddFloatingPoint
                            (auVar12,auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60,
                             auVar13);
        auVar11 = auVar11 >> 0x60 & (undefined1  [16])0xffffffff;
        vectorCompareGreaterThanFloatingPoint
                  (auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60,
                   auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60);
        if (!(bool)(in_cr6 >> 1 & 1)) {
          pfVar3[0x12] = 140.0;
        }
      }
    }
    pfVar3[0xb] = (float)param_1;
    auVar10 = ZEXT416(0xffffffff);
    auVar10 = auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60;
    pfVar3[0xc] = (float)param_2;
    auVar12 = vectorShiftLeftIntegerWord(auVar10,auVar10);
    auVar10 = loadVectorLeftIndexed(8,0x292d68);
    auVar10 = auVar10 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar11 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar10 = vectorMultiplyAddFloatingPoint
                        (auVar11,auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60,
                         auVar12);
    auVar10 = vectorConvertToSignedFixedPointWordSaturate(auVar10,0);
    auVar10 = auVar10 >> 0x60 & (undefined1  [16])0xffffffff;
    uVar5 = storeVectorElementWordIndexed
                      (auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60,0x14,uVar9);
    *(undefined4 *)((uint)(pfVar3 + 5) & 0xfffffffc) = uVar5;
    if (param_10 != (MobyInstance *)0x0) {
      *pfVar3 = (param_10->pos).x;
      pfVar3[1] = (param_10->pos).y;
      fVar1 = (param_10->pos).z;
      pfVar3[2] = fVar1;
      fVar2 = (param_10->pos).w;
      pfVar3[7] = (float)param_3;
      pfVar3[3] = fVar2;
      pfVar3[2] = (float)((double)fVar1 + param_3);
    }
    if (SQRT(DAT_00969e28 * DAT_00969e28 + DAT_00969e20 * DAT_00969e20 + DAT_00969e24 * DAT_00969e24
            ) <= fVar6 * 0.1) {
      auVar10 = ZEXT416(0xffffffff);
      auVar10 = auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60;
      auVar12 = vectorShiftLeftIntegerWord(auVar10,auVar10);
      auVar10 = loadVectorLeftIndexed(0x14,0x292d68);
      auVar10 = auVar10 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar10 = vectorMultiplyAddFloatingPoint
                          (auVar11,auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60,
                           auVar12);
      auVar10 = vectorConvertToSignedFixedPointWordSaturate(auVar10,0);
      auVar11 = vectorSplatHalfWord(auVar10,1);
      uVar4 = storeVectorElementHalfWordIndexed(auVar11,0x3e,uVar9);
      *(undefined2 *)((int)pfVar3 + 0x3e) = uVar4;
    }
    else {
      auVar10 = ZEXT416(0xffffffff);
      auVar10 = auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60;
      auVar12 = vectorShiftLeftIntegerWord(auVar10,auVar10);
      auVar10 = loadVectorLeftIndexed(0x10,0x292d68);
      auVar10 = auVar10 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar10 = vectorMultiplyAddFloatingPoint
                          (auVar11,auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60,
                           auVar12);
      auVar10 = vectorConvertToSignedFixedPointWordSaturate(auVar10,0);
      auVar11 = vectorSplatHalfWord(auVar10,1);
      uVar4 = storeVectorElementHalfWordIndexed(auVar11,0x3e,uVar9);
      *(undefined2 *)((int)pfVar3 + 0x3e) = uVar4;
    }
    auVar10 = vectorSplatHalfWord(auVar10,1);
    uVar4 = storeVectorElementHalfWordIndexed(auVar10,0x3c,uVar9);
    *(undefined2 *)(pfVar3 + 0xf) = uVar4;
    iVar8 = collproc::CollLine(local_60,param_7,0,g_heroMobyPtr,0);
    if (iVar8 != 0) {
      pMoby->setByGroup = '\x01';
      (pMoby->pos).x = CollOutput.ip.x;
      (pMoby->pos).y = CollOutput.ip.y;
      (pMoby->pos).z = CollOutput.ip.z;
      (pMoby->pos).w = CollOutput.ip.w;
    }
    mobyfunc::UpdateMobyTransform(pMoby);
    mobyutil::MB_AddMobyToDynamicGroup(pMoby,&mobyutil::g_mobyIdListCount,0x1f);
    pMoby->scale = pMoby->scale * 2.0;
  }
  return pMoby;
}



//==== 002931b8  ns=Global  size=0x5c
// sig: undefined FUN_002931b8(void)
// callers(1): 0029ead8 mobyupdate_unsorted::UpdateMoby_157
// callees(0): 

double FUN_002931b8(int param_1)

{
  double dVar1;
  double dVar2;
  
  dVar1 = 0.0;
  if (0 < param_1) {
    dVar2 = dVar1;
    do {
      param_1 = param_1 + -1;
      dVar2 = (double)(float)((double)(float)((double)mobyutil::g_FrameTime * 20.0 - dVar2) *
                              (double)(DAT_0071f40c * 0.1) + dVar2);
      dVar1 = (double)(float)(dVar1 + dVar2);
    } while (0 < param_1);
  }
  return dVar1;
}



//==== 00293248  ns=mobyupdate_helpers  size=0x940
// sig: undefined M153_00293248(void)
// callers(1): 00293c48 mobyupdate_unsorted::UpdateMoby_153
// callees(6): 00057820 collproc::CollLine; 000fcccc mobyutil::MB_GetPvarsIfMobyHasThem; 000fe610 mobyutil::MB_SphericalToVector; 00110808 mobyutil::MB_FindMobyByVarId; 005026a0 fastfunc::FastSubRots; 00502730 fastfunc::FastIntToDouble

void mobyupdate_helpers::M153_00293248(int param_1,f32 *param_2,MobyInstance *param_3)

{
  longlong lVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  f32 fVar11;
  float fVar12;
  MobyInstance *moby;
  ulonglong *puVar13;
  int iVar14;
  float fVar15;
  ulonglong uVar16;
  int iVar18;
  longlong lVar17;
  int iVar19;
  longlong lVar20;
  float *pfVar22;
  longlong lVar21;
  ulonglong uVar23;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  int iVar24;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  ulonglong in_f22;
  double dVar30;
  ulonglong in_f23;
  ulonglong in_f24;
  double dVar31;
  ulonglong in_f25;
  double dVar32;
  ulonglong in_f26;
  ulonglong in_f27;
  double dVar33;
  double dVar34;
  ulonglong in_f28;
  ulonglong in_f29;
  double dVar35;
  ulonglong in_f30;
  double dVar36;
  ulonglong in_f31;
  double dVar37;
  
  uVar16 = ZEXT48(&stack0x00000000);
  lVar1 = uVar16 - 0x1b0;
  puVar13 = (ulonglong *)lVar1;
  *puVar13 = uVar16;
  puVar13[0x38] = in_LR;
  puVar13[0x2c] = in_f22;
  puVar13[0x2d] = in_f23;
  puVar13[0x2e] = in_f24;
  puVar13[0x2f] = in_f25;
  puVar13[0x30] = in_f26;
  puVar13[0x31] = in_f27;
  puVar13[0x32] = in_f28;
  puVar13[0x33] = in_f29;
  puVar13[0x34] = in_f30;
  puVar13[0x35] = in_f31;
  puVar13[0x26] = unaff_r26;
  dVar36 = (double)*(float *)(param_1 + 0x48);
  puVar13[0x2b] = unaff_r31;
  puVar13[0x2a] = unaff_r30;
  puVar13[0x27] = unaff_r27;
  puVar13[0x29] = unaff_r29;
  moby = DAT_00a49344;
  dVar37 = 10000.0;
  bVar2 = DAT_00a49344 != (MobyInstance *)0x0;
  puVar13[0x28] = unaff_r28;
  puVar13[0x25] = unaff_r25;
  puVar13[0x24] = unaff_r24;
  dVar35 = (double)*(float *)(param_1 + 0x44);
  if (bVar2) {
    iVar24 = 0;
    do {
      if ((moby->state < 0x80) && (moby != param_3)) {
        fVar3 = (moby->pos).x;
        *(float *)(puVar13 + 0xe) = fVar3;
        fVar4 = (moby->pos).y;
        fVar5 = fVar4 - *(float *)(param_1 + 0x14);
        fVar3 = fVar3 - *(float *)(param_1 + 0x10);
        *(float *)((int)puVar13 + 0x74) = fVar4;
        fVar4 = (moby->pos).z;
        fVar6 = fVar4 - *(float *)(param_1 + 0x18);
        *(float *)(puVar13 + 0xf) = fVar4;
        *(f32 *)((int)puVar13 + 0x7c) = (moby->pos).w;
        if (SQRT(fVar6 * fVar6 + fVar3 * fVar3 + fVar5 * fVar5) <= 40.0) {
          iVar18 = mobyutil::MB_GetPvarsIfMobyHasThem(moby);
          if (((iVar18 == 0) || (iVar18 < 0x100001)) || (0x3fffff < iVar18)) {
            iVar18 = 0;
            fVar3 = 0.5;
          }
          else {
            fVar3 = *(float *)(iVar18 + 0x10);
          }
          fVar3 = *(float *)(puVar13 + 0xf) + fVar3;
          *(float *)(puVar13 + 0xf) = fVar3;
          if ((moby->pClass != (MobyClass *)0x0) && ((short)moby->pClass->mode_bits == 5)) {
            fVar4 = *(float *)(puVar13 + 0xe);
            fVar5 = *(float *)(param_1 + 0x10);
            fVar6 = *(float *)((int)puVar13 + 0x74);
            fVar7 = *(float *)(param_1 + 0x14);
            fVar10 = fVar4 - fVar5;
            fVar8 = fVar6 - fVar7;
            fVar9 = ABS(fVar10);
            fVar12 = ABS(fVar8);
            *(float *)(puVar13 + 0x15) = fVar10;
            *(float *)((int)puVar13 + 0xac) = fVar8;
            *(float *)(puVar13 + 0x16) = fVar9 - fVar12;
            dVar31 = 0.0;
            uVar23 = (ulonglong)(*(uint *)(puVar13 + 0x15) >> 0x1c) & 8 |
                     (ulonglong)(*(uint *)(puVar13 + 0x16) >> 0x1e) & 2 |
                     (ulonglong)(*(uint *)((int)puVar13 + 0xac) >> 0x1d) & 4;
            fVar10 = ABS(*(float *)(puVar13 + 0x15));
            if (*(float *)(puVar13 + 0x16) - 0.0 < 0.0) {
              fVar10 = fVar12;
            }
            fVar12 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar23 << 2));
            fVar8 = *(float *)(((uint)(uVar23 << 2) | 0x735900) + 4);
            fVar15 = ABS(*(float *)((int)puVar13 + 0xac));
            if (*(float *)(puVar13 + 0x16) - 0.0 < 0.0) {
              fVar15 = fVar9;
            }
            dVar33 = 0.7853981852531433;
            dVar29 = dVar31;
            if (0.0 < fVar10) {
              lVar17 = uVar16 - 0x1a0;
              lVar20 = uVar16 - 0xbc;
              lVar21 = uVar16 - 0xac;
              lVar25 = 2;
              fVar10 = (fVar15 - fVar10) / (fVar15 + fVar10);
              fVar9 = fVar10 * fVar10;
              *(float *)(puVar13 + 0x20) = fVar10;
              *(float *)(puVar13 + 0x1f) = fVar10;
              *(float *)((int)puVar13 + 0xfc) = fVar10;
              *(float *)((int)puVar13 + 0xf4) = fVar10;
              fVar10 = fVar9 * fVar9;
              *(float *)(puVar13 + 0x1f) = *(float *)(puVar13 + 0x1f) * fVar9;
              *(float *)((int)puVar13 + 0xfc) = *(float *)((int)puVar13 + 0xfc) * fVar10;
              *(float *)(puVar13 + 0x20) = *(float *)(puVar13 + 0x20) * fVar10 * fVar9;
              do {
                *(float *)((int)lVar17 + 0xf4) = *(float *)((int)lVar17 + 0xe4) * fVar10 * fVar10;
                iVar19 = (int)lVar20;
                lVar17 = lVar17 + 8;
                lVar20 = lVar20 + 8;
                *(float *)((int)lVar21 + 4) = *(float *)(iVar19 + 4) * fVar10 * fVar10;
                lVar21 = lVar21 + 8;
                lVar25 = lVar25 + -1;
              } while (lVar25 != 0);
              lVar25 = 4;
              lVar21 = uVar16 - 0xbc;
              pfVar22 = (float *)&DAT_007358e0;
              lVar17 = lVar1;
              lVar20 = lVar21;
              do {
                fVar10 = *pfVar22;
                fVar9 = pfVar22[1];
                pfVar22 = pfVar22 + 2;
                *(float *)((int)lVar17 + 0xf4) = *(float *)((int)lVar17 + 0xf4) * fVar10;
                lVar17 = lVar17 + 8;
                *(float *)((int)lVar20 + 4) = *(float *)((int)lVar20 + 4) * fVar9;
                lVar20 = lVar20 + 8;
                lVar25 = lVar25 + -1;
              } while (lVar25 != 0);
              lVar20 = 2;
              lVar17 = lVar1;
              do {
                iVar19 = (int)lVar17;
                lVar17 = lVar17 + 0x10;
                iVar14 = (int)lVar21;
                lVar21 = lVar21 + 0x10;
                dVar29 = (double)((float)(dVar29 + (double)*(float *)(iVar19 + 0xf4)) +
                                  *(float *)(iVar14 + 4) + *(float *)(iVar14 + 8) +
                                 *(float *)(iVar14 + 0xc));
                lVar20 = lVar20 + -1;
              } while (lVar20 != 0);
              dVar29 = (double)((float)(dVar29 + 0.7853981852531433) * fVar12 + fVar8);
            }
            fVar7 = fVar7 - fVar6;
            fVar5 = fVar5 - fVar4;
            fVar5 = fVar5 * fVar5 + fVar7 * fVar7;
            fVar4 = *(float *)(param_1 + 0x18);
            fVar7 = fVar3 - fVar4;
            fVar6 = SQRT(fVar5);
            *(float *)(puVar13 + 0x14) = fVar7;
            fVar7 = ABS(fVar7);
            fVar10 = ABS(fVar6);
            *(float *)((int)puVar13 + 0x9c) = fVar6;
            *(float *)((int)puVar13 + 0xa4) = fVar10 - fVar7;
            uVar23 = (ulonglong)(*(uint *)((int)puVar13 + 0x9c) >> 0x1c) & 8 |
                     (ulonglong)(*(uint *)((int)puVar13 + 0xa4) >> 0x1e) & 2 |
                     (ulonglong)(*(uint *)(puVar13 + 0x14) >> 0x1d) & 4;
            fVar6 = ABS(*(float *)((int)puVar13 + 0x9c));
            if (*(float *)((int)puVar13 + 0xa4) - 0.0 < 0.0) {
              fVar6 = fVar7;
            }
            fVar7 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar23 << 2));
            fVar8 = ABS(*(float *)(puVar13 + 0x14));
            if (*(float *)((int)puVar13 + 0xa4) - 0.0 < 0.0) {
              fVar8 = fVar10;
            }
            fVar10 = *(float *)(((uint)(uVar23 << 2) | 0x735900) + 4);
            dVar28 = dVar31;
            if (0.0 < fVar6) {
              lVar17 = uVar16 - 0x1a0;
              lVar20 = uVar16 - 0xdc;
              lVar21 = uVar16 - 0xcc;
              lVar25 = 2;
              fVar6 = (fVar8 - fVar6) / (fVar8 + fVar6);
              fVar8 = fVar6 * fVar6;
              *(float *)(puVar13 + 0x1c) = fVar6;
              *(float *)(puVar13 + 0x1b) = fVar6;
              *(float *)((int)puVar13 + 0xdc) = fVar6;
              *(float *)((int)puVar13 + 0xd4) = fVar6;
              fVar6 = fVar8 * fVar8;
              *(float *)(puVar13 + 0x1b) = *(float *)(puVar13 + 0x1b) * fVar8;
              *(float *)((int)puVar13 + 0xdc) = *(float *)((int)puVar13 + 0xdc) * fVar6;
              *(float *)(puVar13 + 0x1c) = *(float *)(puVar13 + 0x1c) * fVar6 * fVar8;
              do {
                *(float *)((int)lVar17 + 0xd4) = *(float *)((int)lVar17 + 0xc4) * fVar6 * fVar6;
                iVar19 = (int)lVar20;
                lVar17 = lVar17 + 8;
                lVar20 = lVar20 + 8;
                *(float *)((int)lVar21 + 4) = *(float *)(iVar19 + 4) * fVar6 * fVar6;
                lVar21 = lVar21 + 8;
                lVar25 = lVar25 + -1;
              } while (lVar25 != 0);
              lVar25 = 4;
              lVar21 = uVar16 - 0xdc;
              pfVar22 = (float *)&DAT_007358e0;
              lVar17 = lVar1;
              lVar20 = lVar21;
              do {
                fVar6 = *pfVar22;
                fVar8 = pfVar22[1];
                pfVar22 = pfVar22 + 2;
                *(float *)((int)lVar17 + 0xd4) = *(float *)((int)lVar17 + 0xd4) * fVar6;
                lVar17 = lVar17 + 8;
                *(float *)((int)lVar20 + 4) = *(float *)((int)lVar20 + 4) * fVar8;
                lVar20 = lVar20 + 8;
                lVar25 = lVar25 + -1;
              } while (lVar25 != 0);
              lVar20 = 2;
              lVar17 = lVar1;
              do {
                iVar19 = (int)lVar17;
                lVar17 = lVar17 + 0x10;
                iVar14 = (int)lVar21;
                lVar21 = lVar21 + 0x10;
                dVar28 = (double)((float)(dVar28 + (double)*(float *)(iVar19 + 0xd4)) +
                                  *(float *)(iVar14 + 4) + *(float *)(iVar14 + 8) +
                                 *(float *)(iVar14 + 0xc));
                lVar20 = lVar20 + -1;
              } while (lVar20 != 0);
              dVar28 = (double)((float)(dVar28 + 0.7853981852531433) * fVar7 + fVar10);
            }
            fVar4 = fVar4 - fVar3;
            dVar32 = (double)SQRT(fVar4 * fVar4 + fVar5);
            if (dVar32 < 2.5) {
              fVar4 = (moby->pos).x - g_heroPosition.x;
              fVar5 = (moby->pos).y - g_heroPosition.y;
              fVar3 = (g_heroMobyPtr->rotation).z;
              fVar7 = ABS(fVar4);
              fVar6 = ABS(fVar5);
              *(float *)(puVar13 + 0x12) = fVar4;
              *(float *)((int)puVar13 + 0x94) = fVar5;
              *(float *)(puVar13 + 0x13) = fVar7 - fVar6;
              uVar23 = (ulonglong)(*(uint *)(puVar13 + 0x12) >> 0x1c) & 8 |
                       (ulonglong)(*(uint *)(puVar13 + 0x13) >> 0x1e) & 2 |
                       (ulonglong)(*(uint *)((int)puVar13 + 0x94) >> 0x1d) & 4;
              fVar4 = ABS(*(float *)(puVar13 + 0x12));
              if (*(float *)(puVar13 + 0x13) - 0.0 < 0.0) {
                fVar4 = fVar6;
              }
              fVar5 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar23 << 2));
              fVar6 = ABS(*(float *)((int)puVar13 + 0x94));
              if (*(float *)(puVar13 + 0x13) - 0.0 < 0.0) {
                fVar6 = fVar7;
              }
              fVar7 = *(float *)(((uint)(uVar23 << 2) | 0x735900) + 4);
              dVar26 = dVar31;
              if (0.0 < fVar4) {
                lVar17 = uVar16 - 0x1a0;
                lVar20 = uVar16 - 0xfc;
                lVar21 = uVar16 - 0xec;
                lVar25 = 2;
                fVar4 = (fVar6 - fVar4) / (fVar6 + fVar4);
                fVar6 = fVar4 * fVar4;
                *(float *)(puVar13 + 0x18) = fVar4;
                *(float *)(puVar13 + 0x17) = fVar4;
                *(float *)((int)puVar13 + 0xbc) = fVar4;
                *(float *)((int)puVar13 + 0xb4) = fVar4;
                fVar4 = fVar6 * fVar6;
                *(float *)(puVar13 + 0x17) = *(float *)(puVar13 + 0x17) * fVar6;
                *(float *)((int)puVar13 + 0xbc) = *(float *)((int)puVar13 + 0xbc) * fVar4;
                *(float *)(puVar13 + 0x18) = *(float *)(puVar13 + 0x18) * fVar4 * fVar6;
                do {
                  *(float *)((int)lVar17 + 0xb4) = *(float *)((int)lVar17 + 0xa4) * fVar4 * fVar4;
                  iVar19 = (int)lVar20;
                  lVar17 = lVar17 + 8;
                  lVar20 = lVar20 + 8;
                  *(float *)((int)lVar21 + 4) = *(float *)(iVar19 + 4) * fVar4 * fVar4;
                  lVar21 = lVar21 + 8;
                  lVar25 = lVar25 + -1;
                } while (lVar25 != 0);
                lVar25 = 4;
                lVar21 = uVar16 - 0xfc;
                pfVar22 = (float *)&DAT_007358e0;
                lVar17 = lVar1;
                lVar20 = lVar21;
                do {
                  fVar4 = *pfVar22;
                  fVar6 = pfVar22[1];
                  pfVar22 = pfVar22 + 2;
                  *(float *)((int)lVar17 + 0xb4) = *(float *)((int)lVar17 + 0xb4) * fVar4;
                  lVar17 = lVar17 + 8;
                  *(float *)((int)lVar20 + 4) = *(float *)((int)lVar20 + 4) * fVar6;
                  lVar20 = lVar20 + 8;
                  lVar25 = lVar25 + -1;
                } while (lVar25 != 0);
                lVar20 = 2;
                lVar17 = lVar1;
                do {
                  iVar19 = (int)lVar17;
                  lVar17 = lVar17 + 0x10;
                  iVar14 = (int)lVar21;
                  lVar21 = lVar21 + 0x10;
                  dVar26 = (double)((float)(dVar26 + (double)*(float *)(iVar19 + 0xb4)) +
                                    *(float *)(iVar14 + 4) + *(float *)(iVar14 + 8) +
                                   *(float *)(iVar14 + 0xc));
                  lVar20 = lVar20 + -1;
                } while (lVar20 != 0);
                dVar26 = (double)((float)(dVar26 + 0.7853981852531433) * fVar5 + fVar7);
              }
              dVar26 = (double)fastfunc::FastSubRots(fVar3,(float)dVar26);
              if ((dVar26 < 1.0471975803375244) && (ABS(dVar28) < dVar33)) {
                return;
              }
            }
            if (dVar32 <= dVar37) {
              dVar26 = (double)fastfunc::FastIntToDouble(g_goldWeaponsArray.devastator);
              dVar34 = 0.5;
              dVar30 = 0.6981316804885864;
              mobyutil::MB_SphericalToVector
                        ((float)dVar32,(float)dVar36,(float)((double)DAT_00969fc4 * 0.5 + dVar35),
                         (float *)(puVar13 + 0x10));
              fVar3 = *(float *)((int)puVar13 + 0x84) + *(float *)(param_1 + 0x14);
              fVar4 = *(float *)(puVar13 + 0x10) + *(float *)(param_1 + 0x10);
              fVar7 = *(float *)(puVar13 + 0x11) + *(float *)(param_1 + 0x18);
              fVar5 = fVar3 - *(float *)((int)puVar13 + 0x74);
              fVar6 = fVar4 - *(float *)(puVar13 + 0xe);
              *(float *)(puVar13 + 0x10) = fVar4;
              *(float *)((int)puVar13 + 0x84) = fVar3;
              fVar3 = fVar7 - *(float *)(puVar13 + 0xf);
              *(float *)(puVar13 + 0x11) = fVar7;
              dVar27 = (double)(SQRT(fVar3 * fVar3 + fVar6 * fVar6 + fVar5 * fVar5) /
                               (float)(dVar32 * 2.0));
              dVar33 = dVar27;
              if (dVar27 - dVar31 < 0.0) {
                dVar33 = ABS(dVar27);
              }
              fVar3 = 1.0;
              if (dVar27 - dVar31 < 0.0) {
                fVar3 = -1.0;
              }
              dVar27 = (double)(float)(1.0 - dVar33);
              if ((double)(float)(1.0 - dVar33) - dVar31 < 0.0) {
                dVar27 = dVar31;
              }
              if (((float)(dVar26 * dVar30 + 1.5707963705062866) <
                   -(((float)((double)(float)(dVar33 * dVar33) * dVar33) * DAT_007358cc +
                     (float)((double)(float)(dVar33 * dVar33) * (double)DAT_007358c8 +
                            (double)(float)(dVar33 * (double)DAT_007358c4 + (double)DAT_007358c0)))
                     * (float)SQRT(dVar27) - 1.5707964) * fVar3 * 2.0) && (iVar18 != 0)) {
                fastfunc::FastIntToDouble((ulonglong)*(byte *)(iVar18 + 10) << 3);
              }
              iVar19 = collproc::CollLine(0x951500,uVar16 - 0x140,6,param_1,0);
              if (iVar19 == 0) {
                dVar35 = -dVar28;
                iVar19 = mobyutil::MB_FindMobyByVarId(moby);
                dVar36 = dVar29;
                dVar37 = dVar32;
                if (iVar19 == 0) {
                  param_2[6] = (f32)moby;
                  if (iVar18 != 0) {
                    dVar34 = (double)*(float *)(iVar18 + 0x10);
                  }
                  param_2[0xb] = (float)dVar29;
                  param_2[0xc] = (float)dVar35;
                  param_2[9] = 0.0;
                  param_2[10] = 0.0;
                  param_2[8] = 0.0;
                  param_2[0xe] = 1.4013e-45;
                  *param_2 = (moby->pos).x;
                  param_2[1] = (moby->pos).y;
                  param_2[2] = (moby->pos).z;
                  fVar11 = (moby->pos).w;
                  param_2[7] = (float)dVar34;
                  param_2[3] = fVar11;
                }
              }
            }
          }
        }
      }
      moby = *(MobyInstance **)((int)&DAT_00a49348 + iVar24);
      iVar24 = iVar24 + 4;
    } while (moby != (MobyInstance *)0x0);
  }
  return;
}



//==== 00293c48  ns=mobyupdate_unsorted  size=0x1d20
// sig: undefined UpdateMoby_153(MobyInstance * moby)
// callers(0): 
// callees(43): 00057820 collproc::CollLine; 0005e598 collproc::CollMobySphere; 000efb38 mobyfunc::DeleteMoby; 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 000fcc68 mobyutil::MB_randRot; 000fe484 mobyutil::MB_randRange; 000fe610 mobyutil::MB_SphericalToVector; 000ff190 mobyutil::MB_DeltAngSpeed; 00107860 mobyutil::MB_DamageMobyList; 0010a668 mobyutil::ReorderRGB; 00110798 mobyutil::MB_DeleteMobyFromDynamicGroup; 001113e0 mobyutil::MB_RotateQuatAxisAngle; 001229a8 partupd::SpawnPart_8; 00123390 partupd::SpawnPart_11; 00124e10 partupd::SpawnPart_15; 001268f8 partupd::SpawnPart_21; 0012e3e8 partupd::SpawnPart_44; 0015d12c sound::PlayMobySound; 001d4d88 FUN_001d4d88; 0020bb70 FUN_0020bb70; 00293248 mobyupdate_helpers::M153_00293248; 003fda38 FUN_003fda38; 004fff60 fastfunc::FastDecTimerS32; 004fffb4 fastfunc::FastDecTimerS16; 00500608 fastfunc::FastVecNormalize; 00500af8 fastfunc::FastMtx4Identity; 00501188 fastfunc::FastMtxScale; 0050162c fastfunc::FastVecMtx4Mul; 005016e0 fastfunc::FastVecAdd; 005023f0 fastfunc::FastVecAdd; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt; 00502b08 fastfunc::FastVecAddSelf; 00502b6c fastfunc::FastVecSubSelf; 005e7d64 FUN_005e7d64; 005e7f98 FUN_005e7f98; 005e8078 mathfunc::cosf; 005e8128 FUN_005e8128; 005e825c FUN_005e825c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Moby 153 */

void mobyupdate_unsorted::UpdateMoby_153(MobyInstance *moby)

{
  undefined1 uVar1;
  float *pfVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar11;
  undefined8 uVar10;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  longlong lVar17;
  longlong lVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  undefined8 uVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  undefined8 uVar41;
  double dVar42;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 local_4f0 [16];
  undefined1 local_4e0 [16];
  float local_4d0;
  float local_4cc;
  float local_4c8;
  float local_4c0;
  float local_4bc;
  float local_4b8;
  undefined1 local_4b0 [16];
  float local_4a0;
  float local_49c;
  float local_498;
  undefined1 local_490 [16];
  undefined1 local_480 [16];
  undefined1 local_470 [16];
  float local_460;
  float local_45c;
  float local_458;
  undefined1 auStack_450 [16];
  undefined1 local_440 [16];
  float local_430 [4];
  undefined1 auStack_420 [16];
  undefined1 local_410 [16];
  float local_400;
  float local_3fc;
  float local_3f8;
  float local_3f0;
  float local_3ec;
  float local_3e8;
  undefined4 local_3e4;
  float local_3e0;
  float local_3dc;
  float local_3d8;
  float local_3d0;
  float local_3cc;
  float local_3c8;
  undefined1 local_3c0 [8];
  undefined4 local_3b8;
  undefined4 local_3b4;
  MobyInstance *local_3b0;
  undefined *local_3ac;
  undefined1 local_3a8;
  undefined1 local_3a7;
  MOBY_OCLASSES local_3a6;
  undefined4 local_3a4;
  undefined4 local_3a0;
  undefined4 local_390;
  float local_38c;
  float local_388;
  undefined4 local_384;
  float local_380;
  undefined4 local_37c;
  float local_378;
  undefined4 local_374;
  float local_370;
  float local_36c;
  undefined4 local_368;
  undefined4 local_364;
  undefined4 local_360;
  undefined4 local_35c;
  undefined4 local_358;
  undefined4 local_354;
  undefined1 auStack_350 [64];
  undefined1 auStack_310 [64];
  undefined1 auStack_2d0 [64];
  float afStack_290 [16];
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  int local_1b0 [24];
  longlong local_150;
  float local_140;
  longlong local_138;
  longlong local_130;
  ulonglong local_128;
  
  lVar8 = (longlong)(int)moby;
  uStack_244 = uRam007ab5ac;
  uStack_248 = uRam007ab5a8;
  uStack_24c = uRam007ab5a4;
  uStack_250 = _DAT_007ab5a0;
  uStack_234 = uRam007ab5bc;
  uStack_238 = uRam007ab5b8;
  uStack_23c = uRam007ab5b4;
  uStack_240 = _DAT_007ab5b0;
  uStack_224 = uRam007ab5cc;
  uStack_228 = uRam007ab5c8;
  uStack_22c = uRam007ab5c4;
  uStack_230 = _DAT_007ab5c0;
  uStack_214 = uRam007ab5dc;
  uStack_218 = uRam007ab5d8;
  uStack_21c = uRam007ab5d4;
  uStack_220 = _DAT_007ab5d0;
  uStack_204 = uRam007ab5ec;
  uStack_208 = uRam007ab5e8;
  uStack_20c = uRam007ab5e4;
  uStack_210 = _DAT_007ab5e0;
  uStack_1f4 = uRam007ab5fc;
  uStack_1f8 = uRam007ab5f8;
  uStack_1fc = uRam007ab5f4;
  uStack_200 = _DAT_007ab5f0;
  uStack_1e4 = uRam007ab60c;
  uStack_1e8 = uRam007ab608;
  uStack_1ec = uRam007ab604;
  uStack_1f0 = _DAT_007ab600;
  uStack_1d4 = uRam007ab61c;
  uStack_1d8 = uRam007ab618;
  uStack_1dc = uRam007ab614;
  uStack_1e0 = _DAT_007ab610;
  uStack_1c4 = uRam007ab62c;
  uStack_1c8 = uRam007ab628;
  uStack_1cc = uRam007ab624;
  uStack_1d0 = _DAT_007ab620;
  uStack_1b4 = uRam007ab63c;
  uStack_1b8 = uRam007ab638;
  uStack_1bc = uRam007ab634;
  uStack_1c0 = _DAT_007ab630;
  dVar39 = 0.0;
  local_4d0 = 0.0;
  iVar16 = 0;
  local_4cc = 0.0;
  dVar38 = 8.0;
  local_4c0 = 0.0;
  local_4c8 = mobyutil::g_FrameTime * 8.0;
  local_4bc = 0.0;
  pfVar2 = (float *)moby->pVar;
  uVar20 = ZEXT48(pfVar2);
  fVar3 = pfVar2[6];
  dVar37 = 1.0;
  local_4b8 = 1.0;
  if ((0x3f666666 <
       (int)(((uint)((int)DAT_00a10714 >> 0x1f) >> 1 ^ DAT_00a10714) - ((int)DAT_00a10714 >> 0x1f)))
     || (0x3f666666 <
         (int)(((uint)((int)DAT_00a10718 >> 0x1f) >> 1 ^ DAT_00a10718) - ((int)DAT_00a10718 >> 0x1f)
              ))) {
    iVar16 = 1;
  }
  dVar27 = 0.10000000149011612;
  pfVar2[8] = (pfVar2[0xd] - pfVar2[8]) * 0.1 * DAT_0071f40c + pfVar2[8];
  fastfunc::FastDecTimerS16(uVar20 + 0x3c);
  fastfunc::FastIntToDouble(*(undefined2 *)(pfVar2 + 0xf));
  fastfunc::FastIntToDouble(*(undefined2 *)((int)pfVar2 + 0x3e));
  fastfunc::FastVecAdd(local_470,&DAT_00969e20,&DAT_00969de0);
  dVar21 = (double)fastfunc::FastIntToDouble(g_goldWeaponsArray.devastator);
  dVar32 = (double)(moby->rotation).z;
  dVar42 = (double)(float)(dVar21 + dVar37);
  dVar21 = (double)(moby->rotation).y;
  if (fVar3 != 0.0) {
    dVar29 = 300.5;
    local_150 = (longlong)(int)(animationSpeed * 5.5);
    if (((int)pfVar2[5] < (int)(animationSpeed * 300.5) - (int)(animationSpeed * 5.5)) &&
       (*(byte *)((int)fVar3 + 0x20) < 0x80)) {
      dVar40 = (double)*(float *)((int)fVar3 + 0x10);
      dVar34 = (double)(*(float *)((int)fVar3 + 0x18) + pfVar2[7]);
      dVar36 = (double)*(float *)((int)fVar3 + 0x14);
      dVar35 = (double)*(float *)((int)fVar3 + 0x1c);
      dVar32 = (double)local_460;
      dVar24 = (double)local_45c;
      dVar33 = (double)(float)(dVar40 - (double)(moby->pos).x);
      dVar25 = (double)local_458;
      dVar31 = (double)(float)(dVar36 - (double)(moby->pos).y);
      dVar30 = (double)(float)(dVar34 - (double)(moby->pos).z);
      dVar21 = dVar39;
      if (pfVar2[0xe] != 0.0) {
        dVar21 = dVar40 - (double)*pfVar2;
        dVar32 = dVar36 - (double)pfVar2[1];
        dVar25 = dVar34 - (double)pfVar2[2];
        fastfunc::FastVecSubSelf(auStack_450,&local_460,local_480);
        *pfVar2 = (float)dVar40;
        pfVar2[1] = (float)dVar36;
        pfVar2[2] = (float)dVar34;
        pfVar2[3] = (float)dVar35;
        dVar24 = (double)(float)dVar32;
        dVar32 = (double)(float)dVar21;
        dVar25 = (double)(float)dVar25;
        fVar5 = pfVar2[8] * pfVar2[8] -
                (float)(dVar25 * dVar25 +
                       (double)(float)(dVar32 * dVar32 + (double)(float)(dVar24 * dVar24)));
        fVar7 = (float)(dVar25 * dVar30 +
                       (double)(float)(dVar32 * dVar33 + (double)(float)(dVar24 * dVar31))) * -2.0;
        fVar6 = fVar5 * 2.0;
        fVar5 = SQRT(fVar7 * fVar7 -
                     -((float)(dVar30 * dVar30 +
                              (double)(float)(dVar33 * dVar33 + (double)(float)(dVar31 * dVar31))) *
                      fVar5 * 4.0));
        dVar35 = (double)((fVar5 - fVar7) / fVar6);
        dVar34 = (double)((-fVar7 - fVar5) / fVar6);
        if ((dVar35 <= dVar39) || (dVar34 <= dVar39)) {
          dVar21 = -1.0;
          if (dVar39 - dVar34 < 0.0) {
            dVar21 = dVar34;
          }
          if (dVar39 - dVar35 < 0.0) {
            dVar21 = dVar35;
          }
        }
        else {
          dVar21 = dVar34;
          if (dVar34 - dVar35 < 0.0) {
            dVar21 = dVar35;
          }
        }
      }
      if ((dVar21 <= dVar39) || ((double)(longlong)((double)animationSpeed * dVar29) <= dVar21)) {
        dVar32 = (double)FUN_005e8338(dVar33,dVar31);
        dVar21 = (double)FUN_005e8338((double)SQRT((float)(dVar33 * dVar33 +
                                                          (double)(float)(dVar31 * dVar31))),dVar30)
        ;
        dVar21 = -dVar21;
      }
      else {
        dVar33 = (double)(float)(dVar32 * dVar21 + dVar33);
        dVar29 = (double)(float)(dVar24 * dVar21 + dVar31);
        dVar21 = (double)(float)(dVar25 * dVar21 + dVar30);
        dVar32 = (double)FUN_005e8338(dVar33,dVar29);
        dVar21 = (double)FUN_005e8338((double)SQRT((float)(dVar33 * dVar33 +
                                                          (double)(float)(dVar29 * dVar29))),dVar21)
        ;
        dVar21 = -dVar21;
      }
      goto LAB_002941a8;
    }
  }
  local_150 = (longlong)(int)(animationSpeed * 5.5);
  if ((int)pfVar2[5] < (int)(animationSpeed * 300.5) - (int)(animationSpeed * 5.5)) {
    dVar32 = (double)pfVar2[0xb];
    dVar21 = (double)pfVar2[0xc];
  }
LAB_002941a8:
  lVar9 = uVar20 + 0x24;
  dVar24 = 6.2831854820251465;
  dVar29 = 3.1415927410125732;
  if (fVar3 == 0.0) {
    dVar25 = 4.71238899230957;
    dVar32 = (double)mobyutil::MB_DeltAngSpeed
                               ((double)(moby->rotation).z,dVar32,(double)(DAT_0071f418 * 6.2831855)
                                ,(double)(DAT_0071f418 * 3.1415927),
                                (double)(mobyutil::g_FrameTime * 4.712389),lVar9,&DAT_00293b88,lVar9
                               );
    (moby->rotation).z = (float)dVar32;
    dVar21 = (double)mobyutil::MB_DeltAngSpeed
                               ((double)(moby->rotation).y,dVar21,
                                (double)(float)((double)DAT_0071f418 * dVar24),
                                (double)(float)((double)DAT_0071f418 * dVar29),
                                (double)(float)((double)mobyutil::g_FrameTime * dVar25));
  }
  else {
    dVar32 = (double)mobyutil::MB_DeltAngSpeed
                               ((double)(moby->rotation).z,dVar32,(double)(DAT_0071f418 * 6.2831855)
                                ,(double)(DAT_0071f418 * 3.1415927),
                                (double)(mobyutil::g_FrameTime * 6.2831855),lVar9,fVar3,lVar9);
    (moby->rotation).z = (float)dVar32;
    dVar21 = (double)mobyutil::MB_DeltAngSpeed
                               ((double)(moby->rotation).y,dVar21,
                                (double)(float)((double)DAT_0071f418 * dVar24),
                                (double)(float)((double)DAT_0071f418 * dVar29),
                                (double)(float)((double)mobyutil::g_FrameTime * dVar24));
  }
  (moby->rotation).y = (float)dVar21;
  mobyutil::MB_SphericalToVector(pfVar2[8],(moby->rotation).z,(float)-dVar21,&local_4a0);
  FUN_005e7f98(dVar37,0xa10980,&local_4a0);
  CollOutput.normal.x = -CollOutput.normal.x;
  CollOutput.normal.y = -CollOutput.normal.y;
  CollOutput.normal.z = -CollOutput.normal.z;
  if ((iVar16 == 0) || ((worldUpdateTime & 1) == 0)) {
    dVar21 = -1.0;
    mobyutil::MB_randRangeFloat(-1.0,(float)dVar37);
    mobyutil::MB_randRangeFloat((float)dVar21,(float)dVar37);
    mobyutil::MB_randRangeFloat((float)dVar21,(float)dVar37);
    dVar21 = (double)mobyutil::MB_randRangeFloat((float)dVar27,0.2);
    FUN_005e7f98((double)(float)(dVar21 * (double)mobyutil::g_FrameTime),local_440,local_440);
    dVar21 = (double)mobyutil::MB_randRangeFloat
                               ((float)((double)mobyutil::g_FrameTime * dVar27),
                                mobyutil::g_FrameTime);
    FUN_005e7f98(-dVar21,local_4b0,&local_4a0);
    dVar21 = (double)mobyutil::MB_randRangeFloat((float)dVar39,(float)dVar37);
    FUN_005e7f98((double)(float)(dVar21 * (double)pfVar2[8]),local_4b0,&local_4a0);
    local_150 = (longlong)(int)(animationSpeed * 40.5);
    uVar28 = 0x40e3880000000000;
    uVar41 = 0x408f400000000000;
    iVar11 = partupd::SpawnPart_44
                       (0x40e3880000000000,0x408f400000000000,dVar37,0xbf2a36e2e0000000,dVar39,
                        local_4b0,local_440,(int)(animationSpeed * 40.5),0x32,0x505050,3);
    if (iVar11 != 0) {
      uVar1 = *DAT_00a52860;
      *(undefined1 *)(iVar11 + 3) = 0x44;
      *(undefined1 *)(iVar11 + 2) = uVar1;
    }
    local_150 = (longlong)(int)(animationSpeed * 7.5);
    partupd::SpawnPart_44
              (uVar28,uVar41,dVar37,0xbf3a36e2e0000000,dVar39,lVar8 + 0x10,local_440,
               (int)(animationSpeed * 7.5),0x7f,&DAT_00b0b0b0,3);
    FUN_005e7d64(local_430,local_430,lVar8 + 0xc0);
    dVar21 = (double)mobyutil::MB_randRot();
    mobyutil::MB_RotateQuatAxisAngle((float)dVar21,local_430,local_430);
    iVar11 = mobyutil::ReorderRGB(0x4f007fff,(uint)g_goldWeaponsArray.devastator);
    local_150 = (longlong)(int)(animationSpeed * 15.5);
    partupd::SpawnPart_21(0x40d86a0000000000,local_4b0,local_430,iVar11,0x1fffffff);
  }
  fastfunc::FastVecAddSelf(auStack_420,&local_4a0,local_480);
  fVar3 = (moby->pos).x + local_4a0;
  fVar5 = (moby->pos).y + local_49c;
  fVar6 = (moby->pos).z + local_498;
  (moby->pos).x = fVar3;
  (moby->pos).y = fVar5;
  (moby->pos).z = fVar6;
  if ((((double)fVar3 < dVar39) || ((double)fVar5 < dVar39)) || ((double)fVar6 < dVar39)) {
    mobyutil::MB_DeleteMobyFromDynamicGroup(moby,&mobyutil::g_mobyIdListCount);
    mobyfunc::DeleteMoby(moby);
  }
  else {
    local_3ac = &DAT_00830000;
    dVar21 = 3.0;
    local_3a4 = 0x40400000;
    local_3a0 = 1;
    local_3b0 = moby;
    FUN_005e84c0(dVar37,local_3c0,local_3c0);
    local_3a6 = moby->oClass;
    lVar9 = lVar8 + 0x10;
    local_3a8 = 3;
    local_3b8 = 0x3f800000;
    local_3b4 = 0x45afdf66;
    local_3a7 = 1;
    iVar11 = collproc::CollLine(local_4e0,lVar9,0,g_heroMobyPtr,local_3c0);
    if (iVar11 == 0) {
      iVar11 = fastfunc::FastDecTimerS32(uVar20 + 0x14);
      if ((iVar11 != 0) ||
         (fVar3 = (moby->pos).y - g_heroPosition.y, fVar5 = (moby->pos).x - g_heroPosition.x,
         lVar17 = 0, pfVar2[0x12] < SQRT(fVar5 * fVar5 + fVar3 * fVar3))) {
        local_4c0 = DAT_007350c0;
        local_4bc = DAT_007350c4;
        local_4b8 = DAT_007350c8;
        FUN_005e7d64(local_490,local_490,lVar8 + 0xc0);
        FUN_005e7d64(&local_4c0,&local_4c0,lVar8 + 0xc0);
        if (g_goldWeaponsArray.devastator == '\0') {
          mobyutil::MB_DeleteMobyFromDynamicGroup(moby,&mobyutil::g_mobyIdListCount);
          mobyfunc::DeleteMoby(moby);
          return;
        }
        lVar17 = 0;
        local_4d0 = local_4a0 + 0.0;
        local_4cc = local_49c + 0.0;
        moby->setByGroup = '\x01';
        local_4c8 = local_4c8 + local_498;
      }
    }
    else if (CollOutput.pMoby == (MobyInstance *)0x0) {
      lVar17 = 0;
      if (0 < CollOutput.poly) {
        moby->setByGroup = '\x01';
        (moby->pos).x = CollOutput.ip.x;
        (moby->pos).y = CollOutput.ip.y;
        (moby->pos).z = CollOutput.ip.z;
        (moby->pos).w = CollOutput.ip.w;
        FUN_005e7f98(dVar37,local_490,local_490);
        fastfunc::FastVecNormalize(&local_4d0,&local_4a0,0xa10980);
        FUN_005e7f98((double)(mobyutil::g_FrameTime * 2.0),&local_4d0,&local_4d0);
        FUN_005e7f98(dVar37,&local_4c0,0xa10980);
        lVar17 = 0;
      }
    }
    else {
      lVar17 = 0;
      if ((CollOutput.pMoby != g_heroMobyPtr) &&
         (lVar17 = 0, CollOutput.pMoby != (MobyInstance *)pfVar2[4])) {
        moby->setByGroup = '\x02';
        (moby->pos).x = CollOutput.ip.x;
        (moby->pos).y = CollOutput.ip.y;
        (moby->pos).z = CollOutput.ip.z;
        (moby->pos).w = CollOutput.ip.w;
        FUN_005e7f98(dVar37,local_490,local_490);
        fastfunc::FastVecNormalize(&local_4d0,&local_4a0,0xa10980);
        FUN_005e7f98((double)(mobyutil::g_FrameTime * 2.0),&local_4d0,&local_4d0);
        FUN_005e7f98(dVar37,&local_4c0,0xa10980);
        lVar17 = lVar8;
      }
    }
    if (moby->setByGroup != '\0') {
      dVar32 = 2.0;
      dVar27 = (double)(float)(dVar42 * 2.0);
      uVar10 = collproc::CollMobySphere(dVar27,lVar9);
      uVar28._0_4_ = (moby->pos).x;
      uVar28._4_4_ = (moby->pos).y;
      uVar41._0_4_ = (moby->pos).z;
      uVar41._4_4_ = (moby->pos).w;
      mobyutil::MB_DamageMobyList
                (dVar21,dVar37,dVar37,lVar8,3,uVar28,uVar41,&DAT_00a14a00,uVar10,lVar17,
                 &DAT_00830000);
      local_380 = -local_4b8;
      local_388 = -local_4bc;
      local_390 = 0;
      local_36c = -local_4c0;
      local_370 = local_4bc;
      local_360 = 0;
      local_38c = local_4b8;
      local_37c = 0;
      local_35c = 0;
      local_378 = local_4c0;
      local_368 = 0;
      local_358 = 0;
      local_384 = 0;
      local_374 = 0;
      local_364 = 0;
      local_354 = 0;
      fastfunc::FastVecMtx4Mul(auStack_350,&local_390,&local_390);
      lVar18 = ((LZCOUNT(-iVar16) << 0x3a) >> 0x3f) + 1;
      iVar11 = 0;
      lVar17 = ((LZCOUNT(-iVar16) << 0x3a) >> 0x3f & 7U) + 3;
      if ((int)lVar17 != 0) {
        dVar33 = 8.5;
        dVar31 = 16.5;
        dVar25 = (double)(float)(dVar42 * 40000.0);
        dVar30 = 5.0;
        dVar24 = 60.5;
        dVar29 = 120.5;
        do {
          if (moby->setByGroup == '\x01') {
            dVar34 = (double)mobyutil::MB_randRot();
            dVar35 = (double)mathfunc::cosf((float)dVar34);
            fastfunc::FastMtxScale((double)(float)(dVar37 - dVar35),afStack_290,auStack_350);
            FUN_005e8128(dVar34);
            fastfunc::FastMtxScale(auStack_2d0,&local_390);
            fastfunc::FastVecAdd(auStack_2d0,auStack_2d0,afStack_290);
            fastfunc::FastMtx4Identity(afStack_290);
            fastfunc::FastVecAdd(auStack_310,auStack_2d0,afStack_290);
            FUN_005e825c(&local_400,local_490,auStack_310);
            dVar34 = (double)mobyutil::MB_randRangeFloat((float)dVar33,(float)dVar31);
            FUN_005e7f98((double)(float)((double)(float)(dVar34 * (double)mobyutil::g_FrameTime) *
                                        dVar42),&local_400,&local_400);
          }
          else {
            dVar34 = (double)mobyutil::MB_randRangeFloat((float)dVar33,(float)dVar31);
            dVar36 = (double)(float)((double)(float)(dVar34 * (double)mobyutil::g_FrameTime) *
                                    dVar42);
            dVar34 = (double)mobyutil::MB_randRot();
            dVar35 = (double)mobyutil::MB_randRot();
            mobyutil::MB_SphericalToVector((float)dVar36,(float)dVar34,(float)dVar35,&local_400);
          }
          local_400 = local_400 + local_4d0;
          local_3fc = local_3fc + local_4cc;
          local_3f8 = (float)((double)mobyutil::g_FrameTime * dVar30 + (double)local_3f8) +
                      local_4c8;
          iVar12 = mobyutil::ReorderRGB(0x4f007fff,(uint)g_goldWeaponsArray.devastator);
          iVar13 = mobyutil::ReorderRGB(0x1f00007f,(uint)g_goldWeaponsArray.devastator);
          if (dVar37 < (double)SQRT(local_3f8 * local_3f8 +
                                    local_400 * local_400 + local_3fc * local_3fc)) {
            FUN_005e7f98((double)(float)((double)mobyutil::g_FrameTime * dVar38),&local_400,
                         &local_400);
          }
          iVar14 = (int)((double)animationSpeed * dVar29);
          local_150 = (longlong)iVar14;
          iVar14 = mobyutil::MB_randRange((int)((double)animationSpeed * dVar24),iVar14);
          partupd::SpawnPart_15
                    (dVar25,lVar9,&local_400,iVar12,iVar13,0xffffffffffffffff,
                     iVar14 + (int)lVar18 * -0x23,1,0xffffffffffffffff);
          iVar11 = iVar11 + 1;
        } while (iVar11 < (int)lVar17);
      }
      dVar24 = -1.0;
      mobyutil::MB_randRangeFloat(-1.0,(float)dVar37);
      mobyutil::MB_randRangeFloat((float)dVar24,(float)dVar37);
      mobyutil::MB_randRangeFloat((float)dVar24,(float)dVar37);
      fVar3 = GameCamera.posY - (moby->pos).y;
      fVar5 = GameCamera.posX - (moby->pos).x;
      fVar6 = GameCamera.posZ - (moby->pos).z;
      dVar29 = 0.5;
      dVar25 = (double)SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar3 * fVar3);
      FUN_005e7f98((double)(float)((double)((float)(dVar25 * 0.20000000298023224) *
                                           mobyutil::g_FrameTime) * dVar42),local_410,local_410);
      FUN_005e7f98((double)((float)(dVar25 * dVar32) * mobyutil::g_FrameTime),local_4f0,local_4f0);
      dVar32 = 10.0;
      FUN_005e8e80((double)(mobyutil::g_FrameTime * 10.0),local_410,local_410);
      local_150 = (longlong)(int)(animationSpeed * 90.5);
      uVar28 = mobyutil::MB_randRange((int)(animationSpeed * 60.5),(int)(animationSpeed * 90.5));
      FUN_0020bb70(lVar9,local_410,uVar28,0,0);
      uVar15 = 3;
      if (dVar25 < 6.0) {
        uVar15 = fastfunc::FastDoubleToInt(dVar25);
        uVar15 = ((int)uVar15 >> 1) + (uint)((int)uVar15 < 0 && (uVar15 & 1) != 0);
      }
      dVar30 = dVar39;
      if (dVar25 - 7.0 < 0.0) {
        dVar30 = (double)(float)(7.0 - dVar25);
      }
      if (iVar16 != 0) {
        uVar15 = ((int)uVar15 >> 1) + (uint)((int)uVar15 < 0 && (uVar15 & 1) != 0);
      }
      iVar11 = 0;
      uVar19 = ZEXT48(&CollOutput);
      if (0 < (int)uVar15) {
        uVar28 = 0x41186a0000000000;
        dVar40 = 15.5;
        dVar36 = 20.5;
        dVar35 = 25.5;
        dVar34 = 30.5;
        dVar33 = 5.5;
        dVar31 = 10.5;
        local_138 = lVar17;
        local_130 = lVar18;
        local_128 = ZEXT48(&CollOutput);
        do {
          dVar22 = (double)mobyutil::MB_randRangeFloat((float)dVar38,(float)dVar32);
          dVar23 = (double)mobyutil::g_FrameTime;
          local_140 = (float)dVar30;
          local_1b0[0] = 0x4f008fff;
          local_1b0[1] = 0x4f008fff;
          local_1b0[2] = 0x4f007fff;
          local_1b0[3] = 0x4f006fff;
          local_1b0[4] = 0x2fffffff;
          local_1b0[5] = 0x2fffffff;
          local_1b0[6] = 0x2f005f7f;
          dVar26 = (double)(float)((double)(float)(dVar22 * dVar42) * dVar23 -
                                  (double)(float)(dVar23 * dVar30));
          local_1b0[7] = 0x2f004f7f;
          local_1b0[8] = 0x2f003f7f;
          local_1b0[9] = 0x2f00004f;
          local_1b0[10] = 0x2f000000;
          local_1b0[0xb] = 0x3f000000;
          lVar17 = mobyutil::MB_randInt
                             ((double)(float)(dVar22 * dVar42),dVar23,
                              (double)(float)(dVar23 * dVar30),6);
          iVar13 = mobyutil::ReorderRGB
                             (*(int *)((int)local_1b0 + (int)(lVar17 << 2)),
                              (uint)g_goldWeaponsArray.devastator);
          lVar17 = mobyutil::MB_randInt(6);
          iVar14 = mobyutil::ReorderRGB
                             (*(int *)((int)local_1b0 + (int)(lVar17 << 2) + 0x18),
                              (uint)g_goldWeaponsArray.devastator);
          iVar12 = (int)((double)animationSpeed * dVar36);
          local_150 = (longlong)iVar12;
          mobyutil::MB_randRange((int)((double)animationSpeed * dVar40),iVar12);
          iVar12 = (int)((double)animationSpeed * dVar34);
          local_150 = (longlong)iVar12;
          mobyutil::MB_randRange((int)((double)animationSpeed * dVar35),iVar12);
          partupd::SpawnPart_11(uVar28,dVar26,lVar9,&local_4d0,iVar13,iVar14);
          iVar12 = (int)((double)animationSpeed * dVar31);
          local_150 = (longlong)iVar12;
          mobyutil::MB_randRange((int)((double)animationSpeed * dVar33),iVar12);
          iVar12 = (int)((double)animationSpeed * dVar36);
          local_150 = (longlong)iVar12;
          mobyutil::MB_randRange((int)((double)animationSpeed * dVar40),iVar12);
          partupd::SpawnPart_11
                    (uVar28,(double)(float)(dVar26 * dVar29),lVar9,&local_4d0,0x7fffffff,0xffffff);
          iVar11 = iVar11 + 1;
          dVar30 = (double)local_140;
          lVar17 = local_138;
          uVar19 = local_128;
        } while (iVar11 < (int)uVar15);
      }
      iVar11 = 0;
      if (0 < (int)lVar17) {
        dVar32 = 20.5;
        dVar38 = 35.5;
        dVar29 = (double)(float)(dVar42 * 200000.0);
        do {
          local_1b0[0xc] = 0x4f008fff;
          local_1b0[0xd] = 0x4f008fff;
          local_1b0[0xe] = 0x4f007fff;
          local_1b0[0xf] = 0x4f006fff;
          local_1b0[0x10] = 0x2fffffff;
          local_1b0[0x11] = 0x2fffffff;
          local_1b0[0x12] = 0x2f005f7f;
          local_1b0[0x13] = 0x2f004f7f;
          local_1b0[0x14] = 0x2f003f7f;
          local_1b0[0x15] = 0x2f00004f;
          local_1b0[0x16] = 0x2f000000;
          local_1b0[0x17] = 0x3f000000;
          local_3f0 = 0.0;
          local_3ec = 0.0;
          local_3e8 = 0.0;
          local_3e4 = 0;
          dVar30 = (double)mobyutil::MB_randRangeFloat((float)dVar24,(float)dVar37);
          local_3f0 = (float)dVar30;
          dVar30 = (double)mobyutil::MB_randRangeFloat((float)dVar24,(float)dVar37);
          local_3ec = (float)dVar30;
          dVar30 = (double)mobyutil::MB_randRangeFloat((float)dVar24,(float)dVar37);
          local_3e8 = (float)dVar30;
          dVar30 = (double)mobyutil::MB_randRangeFloat((float)dVar39,(float)dVar21);
          FUN_005e7f98((double)(float)((double)(float)(dVar30 * (double)mobyutil::g_FrameTime) *
                                      dVar42),&local_3f0,&local_3f0);
          lVar18 = mobyutil::MB_randInt(6);
          iVar13 = mobyutil::ReorderRGB
                             (*(int *)((int)local_1b0 + (int)(lVar18 << 2) + 0x30),
                              (uint)g_goldWeaponsArray.devastator);
          lVar18 = mobyutil::MB_randInt(6);
          iVar14 = mobyutil::ReorderRGB
                             (*(int *)((int)local_1b0 + (int)(lVar18 << 2) + 0x48),
                              (uint)g_goldWeaponsArray.devastator);
          iVar12 = (int)((double)animationSpeed * dVar38);
          local_150 = (longlong)iVar12;
          mobyutil::MB_randRange((int)((double)animationSpeed * dVar32),iVar12);
          partupd::SpawnPart_8(dVar29,lVar9,&local_3f0,iVar13,iVar14);
          iVar11 = iVar11 + 1;
        } while (iVar11 < (int)lVar17);
      }
      uVar15 = (uint)((int)DAT_00a10714 >> 0x1f) >> 1;
      if (((int)((uVar15 ^ DAT_00a10714) - ((int)DAT_00a10714 >> 0x1f)) < 0x3f733333) &&
         (9.0 < dVar25)) {
        dVar38 = (double)(float)(dVar42 * 4.0);
        local_150 = (longlong)(int)(animationSpeed * 15.5);
        lVar17 = ((LZCOUNT(-(uint)g_goldWeaponsArray.devastator) << 0x3a) >> 0x3f & 0x43U) + 0x3c;
        FUN_001d4d88(dVar38,lVar8,lVar9,&local_4d0,uVar15,(int)(animationSpeed * 15.5),lVar17,0x7f,
                     lVar17);
        local_150 = (longlong)(int)(animationSpeed * 24.5);
        FUN_001d4d88(dVar38,lVar8,lVar9,&local_4d0);
      }
      local_150 = (longlong)(int)(animationSpeed * 20.5);
      FUN_001d4d88((double)(float)(dVar42 * 4.0),lVar8,lVar9,&local_4d0,0x30,
                   (int)(animationSpeed * 20.5),
                   ((LZCOUNT(-(uint)g_goldWeaponsArray.devastator) << 0x3a) >> 0x3f & 0x5fU) + 0x20,
                   0x7f,0);
      if (iVar16 == 0) {
        local_150 = (longlong)(int)(animationSpeed * 19.5);
        FUN_001d4d88(dVar27,lVar8,lVar9,&local_4d0,0x20,(int)(animationSpeed * 19.5),0xff,0xff,0xff)
        ;
      }
      moby->setByGroup = '\0';
      auVar43 = ZEXT416(0xffffffff);
      auVar44 = auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60;
      auVar43 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar44 = vectorShiftLeftIntegerWord(auVar44,auVar44);
      fVar3 = 0.35;
      if (dVar25 - 20.0 < 0.0) {
        fVar3 = (float)(dVar25 * 0.017500000074505806);
      }
      GameCamera.offset0.amp = 0.4 - fVar3;
      auVar45 = loadVectorLeftIndexed(0x8c,0x293b88);
      auVar45 = auVar45 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar43 = vectorMultiplyAddFloatingPoint
                          (auVar43,auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60,
                           auVar44);
      auVar43 = vectorConvertToSignedFixedPointWordSaturate(auVar43,0);
      auVar43 = auVar43 >> 0x60 & (undefined1  [16])0xffffffff;
      GameCamera.offset0.total =
           storeVectorElementWordIndexed
                     (auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60,0x168,0x9513c0);
      sound::PlayMobySound(0,0,moby);
      if (iVar16 == 0) {
        if (g_goldWeaponsArray.devastator == '\0') {
          FUN_003fda38(&uStack_250,lVar9,0,0);
        }
        else {
          FUN_003fda38(&uStack_200,lVar9,0,0);
        }
      }
      fVar3 = pfVar2[0x10];
      pfVar2[0x10] = (float)((int)fVar3 + 1);
      if ((g_goldWeaponsArray.devastator == '\0') || ((float)((int)fVar3 + 1) == 4.2039e-45)) {
        mobyutil::MB_DeleteMobyFromDynamicGroup(moby,&mobyutil::g_mobyIdListCount);
        mobyfunc::DeleteMoby(moby);
        return;
      }
      pfVar2[6] = 0.0;
      moby->setByGroup = '\0';
      FUN_005e7f98(dVar37,0xa10980,0xa10980);
      fastfunc::FastVecNormalize(&local_3e0,&local_4a0,0xa10980);
      dVar37 = (double)FUN_005e8338((double)local_3e0,(double)local_3dc);
      (moby->rotation).z = (float)dVar37;
      dVar37 = (double)FUN_005e8338((double)SQRT(local_3e0 * local_3e0 + local_3dc * local_3dc),
                                    (double)local_3d8);
      (moby->rotation).y = (float)-dVar37;
      pfVar2[9] = 0.0;
      pfVar2[10] = 0.0;
      FUN_005e7f98(0x3fa99999a0000000,&local_3d0,0xa10980);
      fVar3 = *(float *)((int)uVar19 + 0x18);
      (moby->pos).x = (moby->pos).x + local_3d0;
      (moby->pos).y = (moby->pos).y + local_3cc;
      (moby->pos).z = (moby->pos).z + local_3c8;
      auVar43 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      if (fVar3 != 0.0) {
        pfVar2[4] = fVar3;
      }
      if (pfVar2[0x11] == 0.0) {
        auVar44 = ZEXT416(0xffffffff);
        auVar44 = auVar44 | auVar44 << 0x20 | auVar44 << 0x40 | auVar44 << 0x60;
        auVar45 = vectorShiftLeftIntegerWord(auVar44,auVar44);
        auVar44 = loadVectorLeftIndexed(0x78,0x293b88);
        auVar44 = auVar44 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar43 = vectorMultiplyAddFloatingPoint
                            (auVar43,auVar44 | auVar44 << 0x20 | auVar44 << 0x40 | auVar44 << 0x60,
                             auVar45);
        auVar43 = vectorConvertToSignedFixedPointWordSaturate(auVar43,0);
        auVar43 = auVar43 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar4 = storeVectorElementWordIndexed
                          (auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60,0x44,uVar20
                          );
        *(undefined4 *)((uint)(pfVar2 + 0x11) & 0xfffffffc) = uVar4;
      }
      mobyupdate_helpers::M153_00293248(lVar8,uVar20,*(undefined4 *)((int)uVar19 + 0x18));
      sound::PlayMobySound(1,0,moby);
    }
    iVar16 = fastfunc::FastDecTimerS32(uVar20 + 0x44);
    if (iVar16 != 0) {
      pfVar2[0x10] = 0.0;
    }
  }
  return;
}



//==== 00295968  ns=mobyupdate_helpers  size=0x14
// sig: undefined M154_00295968(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M154_00295968(void)

{
  DAT_007ab57c = 0x10000;
  return;
}



//==== 002959f8  ns=mobyupdate_unsorted  size=0xa4c
// sig: undefined UpdateMoby_154(MobyInstance * moby)
// callers(0): 
// callees(11): 000efb38 mobyfunc::DeleteMoby; 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 000fd8d0 mobyutil::MB_SpawnBoltsFromCrate; 000fe484 mobyutil::MB_randRange; 00106738 mobyutil::TweenColor; 0010e030 mobyutil::MB_genericExplosion; 00125350 partupd::SpawnPart_16; 00425540 FUN_00425540; 00502a64 fastfunc::FastVecSub; 00502b08 fastfunc::FastVecAddSelf

/* Moby 154 */

void mobyupdate_unsorted::UpdateMoby_154(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  float fVar3;
  f32 fVar4;
  float fVar5;
  undefined4 uVar6;
  ulonglong *puVar7;
  char cVar8;
  ulonglong uVar9;
  longlong lVar10;
  CollDamageOut *pCVar13;
  longlong lVar11;
  ulonglong uVar12;
  int iVar14;
  CollDamageOut *pCVar15;
  ulonglong unaff_r22;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  longlong lVar16;
  ulonglong unaff_r27;
  longlong lVar17;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  int iVar18;
  ulonglong unaff_r31;
  ulonglong in_LR;
  double dVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  double dVar22;
  double dVar23;
  ulonglong in_f14;
  double dVar24;
  ulonglong in_f15;
  double dVar25;
  ulonglong in_f16;
  double dVar26;
  ulonglong in_f17;
  double dVar27;
  ulonglong in_f18;
  double dVar28;
  ulonglong in_f19;
  double dVar29;
  ulonglong in_f20;
  double dVar30;
  ulonglong in_f21;
  double dVar31;
  ulonglong in_f22;
  double dVar32;
  ulonglong in_f23;
  double dVar33;
  ulonglong in_f24;
  double dVar34;
  ulonglong in_f25;
  double dVar35;
  ulonglong in_f26;
  double dVar36;
  ulonglong in_f27;
  double dVar37;
  ulonglong in_f28;
  double dVar38;
  ulonglong in_f29;
  double dVar39;
  ulonglong in_f30;
  double dVar40;
  ulonglong in_f31;
  double dVar41;
  
  lVar10 = (longlong)(int)moby;
  uVar9 = ZEXT48(&stack0x00000000);
  puVar7 = (ulonglong *)(uVar9 - 0x2a0);
  *puVar7 = uVar9;
  puVar7[0x56] = in_LR;
  puVar7[0x42] = in_f14;
  puVar7[0x43] = in_f15;
  puVar7[0x44] = in_f16;
  puVar7[0x45] = in_f17;
  puVar7[0x46] = in_f18;
  puVar7[0x47] = in_f19;
  puVar7[0x48] = in_f20;
  puVar7[0x49] = in_f21;
  puVar7[0x4a] = in_f22;
  puVar7[0x4b] = in_f23;
  puVar7[0x4c] = in_f24;
  puVar7[0x4d] = in_f25;
  puVar7[0x4e] = in_f26;
  puVar7[0x4f] = in_f27;
  puVar7[0x50] = in_f28;
  puVar7[0x51] = in_f29;
  puVar7[0x52] = in_f30;
  puVar7[0x53] = in_f31;
  puVar7[0x41] = unaff_r31;
  cVar8 = g_heroType;
  puVar7[0x40] = unaff_r30;
  puVar7[0x3f] = unaff_r29;
  puVar7[0x3e] = unaff_r28;
  puVar7[0x3d] = unaff_r27;
  puVar7[0x3c] = unaff_r26;
  puVar7[0x3b] = unaff_r25;
  puVar7[0x3a] = unaff_r24;
  puVar7[0x39] = unaff_r23;
  puVar7[0x38] = unaff_r22;
  if ((cVar8 == '\x02') || (moby->state != '\x01')) {
    iVar18 = 0;
    pCVar15 = CollDamage;
    do {
      pCVar13 = pCVar15;
      if ((pCVar13->pVictimMoby == moby) && ((pCVar13->damageFlags & 0x80000) != 0)) break;
      iVar18 = iVar18 + 1;
      pCVar15 = pCVar13 + 1;
      pCVar13 = (CollDamageOut *)0x0;
    } while (iVar18 < 0x40);
    if (pCVar13 == (CollDamageOut *)0x0) {
      moby->damage = -1;
      if (moby->state == '\0') {
        moby->drawDistance = 0x80;
        moby->updateDistance = -1;
        moby->state = '\x01';
        if ((g_SeenPlanets.Kalebo != 0) &&
           ((*(uint *)(&DAT_00a0cd1c +
                      Level * 0x100 + (int)((longlong)((int)(short)moby->uid >> 5) << 2)) &
            1 << (moby->uid & 0x1f)) != 0)) {
          mobyfunc::DeleteMoby(moby);
        }
      }
    }
    else {
      *(undefined4 *)((int)puVar7 + 0x16c) = 200;
      *(undefined4 *)(puVar7 + 0x2e) = 0xcd;
      *(undefined4 *)((int)puVar7 + 0x174) = 0xce;
      *(undefined4 *)(puVar7 + 0x2f) = 0xd2;
      moby->damage = -1;
      fVar5 = mobyutil::g_FrameTime;
      fVar1 = (pCVar13->impact).y;
      fVar2 = (pCVar13->impact).x;
      fVar3 = (pCVar13->impact).z;
      dVar39 = 0.0;
      puVar7[0x33] = 0x4024000000000000;
      fVar1 = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
      if (fVar1 == 0.0) {
        *(float *)(puVar7 + 0x1a) = fVar2;
        *(float *)((int)puVar7 + 0xd4) = (pCVar13->impact).y;
        *(float *)(puVar7 + 0x1b) = (pCVar13->impact).z;
        fVar1 = (pCVar13->impact).w;
        *(undefined4 *)(puVar7 + 0x1b) = 0;
        *(undefined4 *)((int)puVar7 + 0xd4) = 0;
        *(undefined4 *)(puVar7 + 0x1a) = 0;
        dVar24 = dVar39;
        dVar25 = dVar39;
        dVar26 = dVar39;
      }
      else {
        fVar1 = (fVar5 * 10.0) / fVar1;
        dVar24 = (double)(fVar2 * fVar1);
        *(float *)(puVar7 + 0x1a) = fVar2 * fVar1;
        fVar2 = (pCVar13->impact).y * fVar1;
        dVar25 = (double)fVar2;
        *(float *)((int)puVar7 + 0xd4) = fVar2;
        fVar1 = (pCVar13->impact).z * fVar1;
        dVar26 = (double)fVar1;
        *(float *)(puVar7 + 0x1b) = fVar1;
        fVar1 = (pCVar13->impact).w;
      }
      *(float *)((int)puVar7 + 0xdc) = fVar1;
      *(float *)((int)puVar7 + 0xec) = fVar1;
      *(float *)(puVar7 + 0x1c) = (float)(dVar24 * 2.0);
      *(float *)((int)puVar7 + 0xe4) = (float)(dVar25 * 2.0);
      *(float *)(puVar7 + 0x1d) = (float)(dVar26 * 2.0);
      fVar1 = (pCVar13->ip_).y;
      fVar2 = (pCVar13->ip_).x;
      fVar3 = (pCVar13->ip_).z;
      puVar7[0x31] = 0x4000000000000000;
      if (SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1) == 0.0) {
        *(f32 *)(puVar7 + 0x20) = (moby->pos).x;
        *(f32 *)((int)puVar7 + 0x104) = (moby->pos).y;
        fVar4 = (moby->pos).w;
        *(float *)(puVar7 + 0x21) = (moby->pos).z + 6.0;
      }
      else {
        *(float *)(puVar7 + 0x20) = fVar2;
        *(float *)((int)puVar7 + 0x104) = (pCVar13->ip_).y;
        *(float *)(puVar7 + 0x21) = (pCVar13->ip_).z;
        fVar4 = (pCVar13->ip_).w;
      }
      *(f32 *)((int)puVar7 + 0x10c) = fVar4;
      iVar18 = 0;
      lVar17 = uVar9 - 0x1a0;
      lVar16 = uVar9 - 0x1e0;
      dVar30 = 1.5707963705062866;
      dVar31 = 3.141592502593994;
      dVar32 = -3.141592502593994;
      dVar33 = -0.16666656732559204;
      dVar34 = 0.008333025500178337;
      dVar35 = -0.0001980741071747616;
      dVar36 = 2.601886990305502e-06;
      dVar37 = -3.0;
      dVar41 = 3.0;
      dVar38 = 1.0;
      puVar7[0x30] = 0x3ff921fb40000000;
      dVar40 = 7.0;
      dVar26 = 5.0;
      dVar24 = 0.75;
      dVar25 = 1.25;
      dVar27 = 0.10000000149011612;
      dVar28 = 0.30000001192092896;
      dVar29 = 0.15000000596046448;
      do {
        *(float *)(puVar7 + 0x34) = (float)dVar29;
        dVar29 = (double)mobyutil::MB_randRangeFloat((moby->rotation).z,(float)dVar30);
        dVar19 = (double)(float)(dVar29 + (double)puVar7[0x30]);
        dVar29 = (double)(float)(dVar31 - dVar19);
        if (dVar19 - (double)(float)(dVar31 - dVar19) < 0.0) {
          dVar29 = dVar19;
        }
        dVar22 = (double)(float)(dVar32 - dVar19);
        if ((double)(float)(dVar32 - dVar19) - dVar29 < 0.0) {
          dVar22 = dVar29;
        }
        dVar29 = (double)(float)(dVar22 * dVar22);
        dVar23 = (double)(float)(dVar29 * (double)(float)(dVar29 * dVar22));
        dVar19 = (double)(float)(dVar29 * dVar23);
        dVar19 = (double)(float)((double)(float)(dVar29 * dVar19) * dVar36 +
                                (double)(float)(dVar19 * dVar35 +
                                               (double)(float)(dVar23 * dVar34 +
                                                              (double)(float)((double)(float)(dVar29
                                                                                             * 
                                                  dVar22) * dVar33 + dVar22))));
        dVar29 = (double)mobyutil::MB_randRangeFloat((float)dVar37,(float)dVar41);
        fVar1 = (moby->rotation).z;
        *(float *)(puVar7 + 0x1e) = (float)(dVar19 * dVar29);
        dVar19 = (double)mobyutil::MB_randRangeFloat(fVar1,(float)dVar30);
        dVar29 = (double)(float)(dVar31 - dVar19);
        if (dVar19 - (double)(float)(dVar31 - dVar19) < 0.0) {
          dVar29 = dVar19;
        }
        dVar22 = (double)(float)(dVar32 - dVar19);
        if ((double)(float)(dVar32 - dVar19) - dVar29 < 0.0) {
          dVar22 = dVar29;
        }
        dVar29 = (double)(float)(dVar22 * dVar22);
        dVar23 = (double)(float)(dVar29 * (double)(float)(dVar29 * dVar22));
        dVar19 = (double)(float)(dVar29 * dVar23);
        dVar19 = (double)(float)((double)(float)(dVar29 * dVar19) * dVar36 +
                                (double)(float)(dVar19 * dVar35 +
                                               (double)(float)(dVar23 * dVar34 +
                                                              (double)(float)((double)(float)(dVar29
                                                                                             * 
                                                  dVar22) * dVar33 + dVar22))));
        dVar29 = (double)mobyutil::MB_randRangeFloat((float)dVar37,(float)dVar41);
        *(undefined4 *)(puVar7 + 0x1f) = 0;
        *(float *)((int)puVar7 + 0xf4) = (float)(dVar19 * dVar29);
        dVar29 = (double)mobyutil::MB_randRangeFloat((float)dVar38,(float)dVar40);
        *(float *)(puVar7 + 0x1f) = (float)dVar29;
        fastfunc::FastVecAddSelf(uVar9 - 400,uVar9 - 0x1b0,lVar10 + 0x10);
        fastfunc::FastVecSub(uVar9 - 0x180,lVar17,uVar9 - 0x1b0);
        fVar2 = *(float *)((int)puVar7 + 0x124);
        fVar3 = *(float *)(puVar7 + 0x24);
        fVar5 = *(float *)(puVar7 + 0x25);
        dVar29 = (double)mobyutil::g_FrameTime;
        *(float *)(puVar7 + 0x18) = fVar3;
        *(float *)((int)puVar7 + 0xc4) = fVar2;
        *(float *)(puVar7 + 0x19) = fVar5;
        *(undefined4 *)((int)puVar7 + 0xcc) = *(undefined4 *)((int)puVar7 + 300);
        dVar19 = (double)SQRT(fVar5 * fVar5 + fVar3 * fVar3 + fVar2 * fVar2);
        fVar1 = (float)((double)(float)(dVar29 * dVar26) / dVar19);
        dVar29 = dVar39;
        if (dVar39 - dVar19 < 0.0) {
          dVar29 = (double)(fVar3 * fVar1);
        }
        dVar22 = dVar39;
        if (dVar39 - dVar19 < 0.0) {
          dVar22 = (double)(fVar2 * fVar1);
        }
        dVar23 = dVar39;
        if (dVar39 - dVar19 < 0.0) {
          dVar23 = (double)(fVar5 * fVar1);
        }
        if (dVar19 - dVar39 < 0.0) {
          dVar29 = (double)(fVar3 * fVar1);
        }
        if (dVar19 - dVar39 < 0.0) {
          dVar22 = (double)(fVar2 * fVar1);
        }
        if (dVar19 - dVar39 < 0.0) {
          dVar23 = (double)(fVar5 * fVar1);
        }
        *(float *)(puVar7 + 0x18) = (float)dVar29;
        *(float *)((int)puVar7 + 0xc4) = (float)dVar22;
        *(float *)(puVar7 + 0x19) = (float)dVar23;
        fastfunc::FastVecAddSelf(uVar9 - 0x170,lVar16,uVar9 - 0x1c0);
        *(float *)(puVar7 + 0x19) =
             (float)((double)mobyutil::g_FrameTime * dVar41 + (double)*(float *)(puVar7 + 0x19));
        dVar29 = (double)mobyutil::MB_randRangeFloat((float)dVar24,(float)dVar25);
        *(float *)(puVar7 + 0x18) = (float)((double)*(float *)(puVar7 + 0x18) * dVar29);
        *(float *)((int)puVar7 + 0xc4) = (float)((double)*(float *)((int)puVar7 + 0xc4) * dVar29);
        *(float *)(puVar7 + 0x19) = (float)((double)*(float *)(puVar7 + 0x19) * dVar29);
        lVar11 = mobyutil::MB_randInt(4);
        uVar6 = *(undefined4 *)((int)puVar7 + (int)(lVar11 << 2) + 0x16c);
        uVar20 = mobyutil::MB_randRangeFloat((float)dVar27,(float)dVar28);
        mobyutil::MB_randRange(100,0xa0);
        uVar21 = mobyutil::MB_randRangeFloat((float)dVar41,(float)dVar40);
        *(undefined4 *)(puVar7 + 6) = *(undefined4 *)(puVar7 + 0x1e);
        *(undefined4 *)(puVar7 + 7) = *(undefined4 *)(puVar7 + 0x1f);
        *(undefined4 *)(puVar7 + 8) = *(undefined4 *)(puVar7 + 0x18);
        *(undefined4 *)(puVar7 + 9) = *(undefined4 *)(puVar7 + 0x19);
        *(undefined4 *)((int)puVar7 + 0x34) = *(undefined4 *)((int)puVar7 + 0xf4);
        *(undefined4 *)((int)puVar7 + 0x3c) = *(undefined4 *)((int)puVar7 + 0xfc);
        *(undefined4 *)((int)puVar7 + 0x44) = *(undefined4 *)((int)puVar7 + 0xc4);
        *(undefined4 *)((int)puVar7 + 0x4c) = *(undefined4 *)((int)puVar7 + 0xcc);
        dVar29 = (double)*(float *)(puVar7 + 0x34);
        puVar7[0x10] = 1;
        FUN_00425540(uVar20,uVar21,dVar29,puVar7[0x31],puVar7[6],puVar7[7],puVar7[8],puVar7[9],uVar6
                    );
        iVar18 = iVar18 + 1;
      } while (iVar18 < 0x19);
      *(undefined4 *)((int)puVar7 + 0xcc) = 0;
      *(undefined4 *)(puVar7 + 0x19) = 0;
      *(undefined4 *)((int)puVar7 + 0xc4) = 0;
      *(undefined4 *)(puVar7 + 0x18) = 0;
      puVar7[0x12] = 0;
      puVar7[0x14] = 1;
      puVar7[0x15] = 1;
      puVar7[0x16] = 0xffffffffffffffff;
      puVar7[0x17] = 0;
      mobyutil::MB_genericExplosion
                (dVar39,dVar39,puVar7[0x33],dVar26,0x40f86a0000000000,dVar41,0x402e000000000000,
                 lVar10,lVar16,lVar17);
      iVar18 = 0;
      dVar27 = 0.25;
      dVar29 = 0.5;
      fVar1 = 210000.0;
      dVar28 = 180.5;
      puVar7[0x32] = 0x4016000000000000;
      do {
        dVar19 = (double)fVar1;
        *(float *)(puVar7 + 0x37) = fVar1;
        *(float *)(puVar7 + 0x34) = (float)dVar28;
        dVar28 = (double)mobyutil::MB_randRangeFloat((moby->rotation).z,(float)dVar30);
        dVar40 = (double)(float)(dVar28 + (double)puVar7[0x30]);
        dVar28 = (double)(float)(dVar31 - dVar40);
        if (dVar40 - (double)(float)(dVar31 - dVar40) < 0.0) {
          dVar28 = dVar40;
        }
        dVar22 = (double)(float)(dVar32 - dVar40);
        if ((double)(float)(dVar32 - dVar40) - dVar28 < 0.0) {
          dVar22 = dVar28;
        }
        dVar28 = (double)(float)(dVar22 * dVar22);
        dVar23 = (double)(float)(dVar28 * (double)(float)(dVar28 * dVar22));
        dVar40 = (double)(float)(dVar28 * dVar23);
        dVar40 = (double)(float)((double)(float)(dVar28 * dVar40) * dVar36 +
                                (double)(float)(dVar40 * dVar35 +
                                               (double)(float)(dVar23 * dVar34 +
                                                              (double)(float)((double)(float)(dVar28
                                                                                             * 
                                                  dVar22) * dVar33 + dVar22))));
        dVar28 = (double)mobyutil::MB_randRangeFloat((float)dVar37,(float)dVar41);
        fVar1 = (moby->rotation).z;
        *(float *)(puVar7 + 0x1e) = (float)(dVar40 * dVar28);
        dVar40 = (double)mobyutil::MB_randRangeFloat(fVar1,(float)dVar30);
        dVar28 = (double)(float)(dVar31 - dVar40);
        if (dVar40 - (double)(float)(dVar31 - dVar40) < 0.0) {
          dVar28 = dVar40;
        }
        dVar22 = (double)(float)(dVar32 - dVar40);
        if ((double)(float)(dVar32 - dVar40) - dVar28 < 0.0) {
          dVar22 = dVar28;
        }
        dVar28 = (double)(float)(dVar22 * dVar22);
        dVar23 = (double)(float)(dVar28 * (double)(float)(dVar28 * dVar22));
        dVar40 = (double)(float)(dVar28 * dVar23);
        dVar40 = (double)(float)((double)(float)(dVar28 * dVar40) * dVar36 +
                                (double)(float)(dVar40 * dVar35 +
                                               (double)(float)(dVar23 * dVar34 +
                                                              (double)(float)((double)(float)(dVar28
                                                                                             * 
                                                  dVar22) * dVar33 + dVar22))));
        dVar28 = (double)mobyutil::MB_randRangeFloat((float)dVar37,(float)dVar41);
        fVar1 = (moby->pos).x;
        fVar2 = (moby->pos).y;
        *(f32 *)(puVar7 + 0x1f) = (moby->pos).z;
        *(float *)(puVar7 + 0x1e) = *(float *)(puVar7 + 0x1e) + fVar1;
        *(float *)((int)puVar7 + 0xf4) = (float)(dVar40 * dVar28 + (double)fVar2);
        dVar28 = (double)mobyutil::MB_randRangeFloat((float)dVar38,(float)(double)puVar7[0x32]);
        *(float *)(puVar7 + 0x1f) = (float)((double)*(float *)(puVar7 + 0x1f) + dVar28);
        fastfunc::FastVecSub(uVar9 - 0x160,lVar17,uVar9 - 0x1b0);
        fVar2 = *(float *)((int)puVar7 + 0x144);
        fVar3 = *(float *)(puVar7 + 0x28);
        fVar5 = *(float *)(puVar7 + 0x29);
        dVar28 = (double)mobyutil::g_FrameTime;
        *(float *)(puVar7 + 0x18) = fVar3;
        *(float *)((int)puVar7 + 0xc4) = fVar2;
        *(float *)(puVar7 + 0x19) = fVar5;
        *(undefined4 *)((int)puVar7 + 0xcc) = *(undefined4 *)((int)puVar7 + 0x14c);
        dVar40 = (double)SQRT(fVar5 * fVar5 + fVar3 * fVar3 + fVar2 * fVar2);
        fVar1 = (float)((double)(float)(dVar28 * dVar26) / dVar40);
        dVar28 = dVar39;
        if (dVar39 - dVar40 < 0.0) {
          dVar28 = (double)(fVar3 * fVar1);
        }
        dVar22 = dVar39;
        if (dVar39 - dVar40 < 0.0) {
          dVar22 = (double)(fVar2 * fVar1);
        }
        dVar23 = dVar39;
        if (dVar39 - dVar40 < 0.0) {
          dVar23 = (double)(fVar5 * fVar1);
        }
        if (dVar40 - dVar39 < 0.0) {
          dVar28 = (double)(fVar3 * fVar1);
        }
        if (dVar40 - dVar39 < 0.0) {
          dVar22 = (double)(fVar2 * fVar1);
        }
        if (dVar40 - dVar39 < 0.0) {
          dVar23 = (double)(fVar5 * fVar1);
        }
        *(float *)(puVar7 + 0x18) = (float)dVar28;
        *(float *)((int)puVar7 + 0xc4) = (float)dVar22;
        *(float *)(puVar7 + 0x19) = (float)dVar23;
        fastfunc::FastVecAddSelf(uVar9 - 0x150,lVar16,uVar9 - 0x1d0);
        dVar28 = (double)mobyutil::MB_randRangeFloat((float)dVar24,(float)dVar25);
        *(float *)(puVar7 + 0x18) = (float)((double)*(float *)(puVar7 + 0x18) * dVar28);
        *(float *)((int)puVar7 + 0xc4) = (float)((double)*(float *)((int)puVar7 + 0xc4) * dVar28);
        *(float *)(puVar7 + 0x19) = (float)((double)*(float *)(puVar7 + 0x19) * dVar28);
        dVar28 = (double)mobyutil::MB_randRangeFloat((float)dVar27,(float)dVar38);
        uVar20 = 0x7f000000;
        mobyutil::TweenColor((float)dVar28,0x7f000000,0x7f182030);
        dVar28 = (double)mobyutil::MB_randRangeFloat((float)dVar29,(float)dVar38);
        uVar21 = 0;
        mobyutil::TweenColor((float)dVar28,0,0x5f5f5f);
        dVar28 = (double)mobyutil::MB_randRangeFloat((float)dVar38,(float)dVar41);
        dVar40 = (double)(float)(dVar28 * dVar19);
        dVar28 = (double)*(float *)(puVar7 + 0x34);
        puVar7[0x35] = (longlong)(int)((double)animationSpeed * dVar28);
        uVar6 = *(undefined4 *)((int)puVar7 + 0x1ac);
        lVar11 = mobyutil::MB_randInt(3);
        *(undefined4 *)((int)puVar7 + 0x164) = 1;
        *(undefined4 *)(puVar7 + 0x2c) = 0;
        uVar12 = lVar11 * 4 + (uVar9 - 0x2a0);
        *(undefined4 *)(puVar7 + 0x2d) = 2;
        iVar14 = partupd::SpawnPart_16
                           (dVar40,uVar9 - 0x1b0,lVar16,uVar20,uVar21,uVar12 & 0xffffffff,uVar6,
                            *(undefined4 *)((int)uVar12 + 0x160));
        fVar1 = *(float *)(puVar7 + 0x37);
        if (iVar14 != 0) {
          *(float *)(iVar14 + 0x2c) = (float)((double)(moby->pos).z - dVar29);
        }
        iVar18 = iVar18 + 1;
      } while (iVar18 < 0x14);
      mobyutil::MB_SpawnBoltsFromCrate(lVar10,0,0xffffffffffffffff);
      mobyfunc::DeleteMoby(moby);
    }
  }
  return;
}



//==== 00296444  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1544_00296444(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1544_00296444(void)

{
  DAT_007ab68c = 0x10000;
  return;
}



//==== 00296468  ns=mobyupdate_helpers  size=0x374
// sig: undefined M1544_00296468(void)
// callers(1): 00297068 mobyupdate_unsorted::UpdateMoby_1544
// callees(8): 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 000fea60 mobyutil::MB_randSphere; 001206e8 partupd::SpawnPart_2; 004fffb4 fastfunc::FastDecTimerS16; 00502758 fastfunc::FastDoubleToInt; 005027bc fastfunc::FastLerpColor; 00502910 fastfunc::FastCheckBsphereInView

void mobyupdate_helpers::M1544_00296468(float *param_1,undefined2 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar8;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined2 uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 local_a0 [16];
  undefined1 local_90 [16];
  undefined1 auStack_80 [32];
  
  if (SQRT((GameCamera.posZ - param_1[2]) * (GameCamera.posZ - param_1[2]) +
           (GameCamera.posX - *param_1) * (GameCamera.posX - *param_1) +
           (GameCamera.posY - param_1[1]) * (GameCamera.posY - param_1[1])) <= 32.0) {
    iVar8 = fastfunc::FastCheckBsphereInView(local_a0);
    if (((iVar8 != -1) || (iVar8 = mobyutil::MB_randInt(3), iVar8 == 0)) &&
       (iVar8 = fastfunc::FastDecTimerS16(param_2), iVar8 != 0)) {
      dVar11 = 0.0;
      mobyutil::MB_randSphere(0,(double)(DAT_007ab708 * mobyutil::g_FrameTime),auStack_80);
      mobyutil::MB_randRangeFloat(DAT_007ab70c,DAT_007ab710);
      mobyutil::MB_randRangeFloat(DAT_007ab714,DAT_007ab718);
      dVar12 = 1.0;
      dVar10 = (double)mobyutil::MB_randRangeFloat(1.0 - DAT_007ab728,DAT_007ab728 + 1.0);
      uVar3 = fastfunc::FastDoubleToInt((double)(float)((double)(longlong)DAT_007ab71c * dVar10));
      uVar4 = fastfunc::FastDoubleToInt((double)(float)((double)(longlong)DAT_007ab720 * dVar10));
      uVar5 = fastfunc::FastDoubleToInt((double)(float)((double)(longlong)DAT_007ab724 * dVar10));
      uVar2 = DAT_007ab730;
      uVar1 = DAT_007ab72c;
      mobyutil::MB_randRangeFloat((float)dVar11,(float)dVar12);
      uVar6 = fastfunc::FastLerpColor(uVar1,uVar2);
      uVar2 = DAT_007ab738;
      uVar1 = DAT_007ab734;
      mobyutil::MB_randRangeFloat((float)dVar11,(float)dVar12);
      uVar7 = fastfunc::FastLerpColor(uVar1,uVar2);
      partupd::SpawnPart_2(param_1,local_90,auStack_80,uVar6,uVar7,uVar3,uVar4,uVar5);
      mobyutil::MB_randRangeFloat((float)(longlong)DAT_007ab73c,(float)(longlong)DAT_007ab740);
      uVar9 = fastfunc::FastDoubleToInt();
      *param_2 = uVar9;
    }
  }
  return;
}



//==== 002967f0  ns=mobyupdate_helpers  size=0x420
// sig: undefined M1544_002967f0(void)
// callers(1): 00297068 mobyupdate_unsorted::UpdateMoby_1544
// callees(7): 000fcbe8 mobyutil::MB_randRangeFloat; 000fea60 mobyutil::MB_randSphere; 001206e8 partupd::SpawnPart_2; 004fffb4 fastfunc::FastDecTimerS16; 00502758 fastfunc::FastDoubleToInt; 005027bc fastfunc::FastLerpColor; 00502910 fastfunc::FastCheckBsphereInView

void mobyupdate_helpers::M1544_002967f0
               (double param_1,undefined4 param_2,undefined8 param_3,undefined2 *param_4,
               short *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  short sVar9;
  int iVar8;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined2 uVar10;
  double dVar11;
  double dVar12;
  undefined1 local_a0 [16];
  undefined1 local_90 [16];
  undefined1 auStack_80 [32];
  
  if (*param_5 < 0) {
    sVar9 = *param_5 + 1;
    *param_5 = sVar9;
    if (sVar9 != 0) {
      return;
    }
    mobyutil::MB_randRangeFloat((float)(longlong)DAT_007ab780,(float)(longlong)DAT_007ab784);
    sVar9 = fastfunc::FastDoubleToInt();
    *param_5 = sVar9;
  }
  else {
    iVar8 = fastfunc::FastDecTimerS16(param_5);
    if (iVar8 != 0) {
      mobyutil::MB_randRangeFloat((float)(longlong)DAT_007ab788,(float)(longlong)DAT_007ab78c);
      sVar9 = fastfunc::FastDoubleToInt();
      *param_5 = -sVar9;
      return;
    }
  }
  iVar8 = fastfunc::FastCheckBsphereInView(0x4040000000000000,local_a0);
  if ((iVar8 != -1) && (iVar8 = fastfunc::FastDecTimerS16(param_4), iVar8 != 0)) {
    dVar12 = 1.0;
    dVar11 = (double)mobyutil::MB_randRangeFloat(1.0 - DAT_007ab764,DAT_007ab764 + 1.0);
    uVar3 = fastfunc::FastDoubleToInt((double)(float)((double)(longlong)DAT_007ab75c * dVar11));
    uVar4 = fastfunc::FastDoubleToInt((double)(float)((double)(longlong)DAT_007ab760 * dVar11));
    uVar5 = fastfunc::FastDoubleToInt
                      ((double)(float)((double)(SQRT((float)(param_1 * 2.0) /
                                                     (DAT_007ab744 * DAT_0071f418)) * DAT_007ab794)
                                      * dVar11));
    dVar11 = 0.0;
    mobyutil::MB_randSphere(0,(double)(DAT_007ab748 * mobyutil::g_FrameTime),auStack_80);
    mobyutil::MB_randRangeFloat(DAT_007ab74c,DAT_007ab750);
    mobyutil::MB_randRangeFloat(DAT_007ab754,DAT_007ab758);
    uVar2 = DAT_007ab76c;
    uVar1 = DAT_007ab768;
    mobyutil::MB_randRangeFloat((float)dVar11,(float)dVar12);
    uVar6 = fastfunc::FastLerpColor(uVar1,uVar2);
    uVar2 = DAT_007ab774;
    uVar1 = DAT_007ab770;
    mobyutil::MB_randRangeFloat((float)dVar11,(float)dVar12);
    uVar7 = fastfunc::FastLerpColor(uVar1,uVar2);
    partupd::SpawnPart_2(param_2,local_90,auStack_80,uVar6,uVar7,uVar3,uVar5,uVar4);
    mobyutil::MB_randRangeFloat((float)(longlong)DAT_007ab778,(float)(longlong)DAT_007ab77c);
    uVar10 = fastfunc::FastDoubleToInt();
    *param_4 = uVar10;
  }
  return;
}



//==== 00296c20  ns=mobyupdate_helpers  size=0x440
// sig: undefined M1544_00296c20(void)
// callers(1): 00297068 mobyupdate_unsorted::UpdateMoby_1544
// callees(8): 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 000fea60 mobyutil::MB_randSphere; 001206e8 partupd::SpawnPart_2; 004fffb4 fastfunc::FastDecTimerS16; 00502758 fastfunc::FastDoubleToInt; 005027bc fastfunc::FastLerpColor; 00502910 fastfunc::FastCheckBsphereInView

void mobyupdate_helpers::M1544_00296c20(float *param_1,undefined2 *param_2,short *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  short sVar9;
  int iVar8;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined2 uVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 local_a0 [16];
  undefined1 local_90 [16];
  undefined1 auStack_80 [32];
  
  if (*param_3 < 0) {
    sVar9 = *param_3 + 1;
    *param_3 = sVar9;
    if (sVar9 != 0) {
      return;
    }
    mobyutil::MB_randRangeFloat((float)(longlong)DAT_007ab6f4,(float)(longlong)DAT_007ab6f8);
    sVar9 = fastfunc::FastDoubleToInt();
    *param_3 = sVar9;
  }
  else {
    iVar8 = fastfunc::FastDecTimerS16(param_3);
    if (iVar8 != 0) {
      mobyutil::MB_randRangeFloat((float)(longlong)DAT_007ab6fc,(float)(longlong)DAT_007ab700);
      sVar9 = fastfunc::FastDoubleToInt();
      *param_3 = -sVar9;
      return;
    }
  }
  if ((SQRT((GameCamera.posZ - param_1[2]) * (GameCamera.posZ - param_1[2]) +
            (GameCamera.posX - *param_1) * (GameCamera.posX - *param_1) +
            (GameCamera.posY - param_1[1]) * (GameCamera.posY - param_1[1])) <= 32.0) &&
     (((iVar8 = fastfunc::FastCheckBsphereInView(local_a0), iVar8 != -1 ||
       (iVar8 = mobyutil::MB_randInt(3), iVar8 == 0)) &&
      (iVar8 = fastfunc::FastDecTimerS16(param_2), iVar8 != 0)))) {
    dVar13 = 0.0;
    mobyutil::MB_randSphere(0,(double)(DAT_007ab6b8 * mobyutil::g_FrameTime),auStack_80);
    mobyutil::MB_randRangeFloat(DAT_007ab6bc,DAT_007ab6c0);
    mobyutil::MB_randRangeFloat(DAT_007ab6c4,DAT_007ab6c8);
    dVar12 = 1.0;
    dVar11 = (double)mobyutil::MB_randRangeFloat(1.0 - DAT_007ab6d8,DAT_007ab6d8 + 1.0);
    uVar3 = fastfunc::FastDoubleToInt((double)(float)((double)(longlong)DAT_007ab6cc * dVar11));
    uVar4 = fastfunc::FastDoubleToInt((double)(float)((double)(longlong)DAT_007ab6d0 * dVar11));
    uVar5 = fastfunc::FastDoubleToInt((double)(float)((double)(longlong)DAT_007ab6d4 * dVar11));
    uVar2 = DAT_007ab6e0;
    uVar1 = DAT_007ab6dc;
    mobyutil::MB_randRangeFloat((float)dVar13,(float)dVar12);
    uVar6 = fastfunc::FastLerpColor(uVar1,uVar2);
    uVar2 = DAT_007ab6e8;
    uVar1 = DAT_007ab6e4;
    mobyutil::MB_randRangeFloat((float)dVar13,(float)dVar12);
    uVar7 = fastfunc::FastLerpColor(uVar1,uVar2);
    partupd::SpawnPart_2(param_1,local_90,auStack_80,uVar6,uVar7,uVar3,uVar4,uVar5);
    mobyutil::MB_randRangeFloat((float)(longlong)DAT_007ab6ec,(float)(longlong)DAT_007ab6f0);
    uVar10 = fastfunc::FastDoubleToInt();
    *param_2 = uVar10;
  }
  return;
}



//==== 00297068  ns=mobyupdate_unsorted  size=0x334
// sig: undefined UpdateMoby_1544(void * this, MobyInstance * moby)
// callers(0): 
// callees(4): 000ffb70 mobyutil::GetGroundZ; 00296468 mobyupdate_helpers::M1544_00296468; 002967f0 mobyupdate_helpers::M1544_002967f0; 00296c20 mobyupdate_helpers::M1544_00296c20

/* Moby 1544 */

void __thiscall mobyupdate_unsorted::UpdateMoby_1544(void *this,MobyInstance *moby)

{
  byte bVar1;
  longlong lVar2;
  Spline *pSVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  double dVar7;
  undefined8 uVar8;
  
  lVar2 = (longlong)(int)this;
  bVar1 = *(byte *)((int)this + 0x20);
  piVar6 = *(int **)((int)this + 0x78);
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      iVar4 = *piVar6;
      if (iVar4 < 1) {
        if (-1 < iVar4) {
          *(undefined1 *)((int)this + 0x20) = 1;
        }
      }
      else if (iVar4 < 2) {
        if (piVar6[1] == -1) {
          dVar7 = (double)mobyutil::GetGroundZ(0x3fe0000000000000,lVar2 + 0x10,0);
          piVar6[0x22] = (int)(float)dVar7;
        }
        else {
          iVar5 = 0;
          iVar4 = Splines[piVar6[1]]->cnt;
          iVar4 = iVar4 + ((uint)(0x20 - (longlong)iVar4 >> 0x3f) & 0x20U - iVar4);
          if (0 < iVar4) {
            uVar8 = 0x3fe0000000000000;
            pSVar3 = Splines[piVar6[1]];
            do {
              dVar7 = (double)mobyutil::GetGroundZ(uVar8,pSVar3->points,0);
              iVar5 = iVar5 + 1;
              pSVar3->points[0].w = (float)dVar7;
              pSVar3 = (Spline *)pSVar3->points;
            } while (iVar5 < iVar4);
          }
        }
        *(undefined1 *)((int)this + 0x20) = 2;
      }
      else if (iVar4 < 3) {
        *(undefined1 *)((int)this + 0x20) = 3;
      }
    }
    else if (piVar6[1] == -1) {
      mobyupdate_helpers::M1544_00296c20(lVar2 + 0x10,piVar6 + 2,piVar6 + 0x12);
    }
    else {
      iVar5 = 0;
      pSVar3 = Splines[piVar6[1]];
      iVar4 = pSVar3->cnt;
      iVar4 = iVar4 + ((uint)(0x20 - (longlong)iVar4 >> 0x3f) & 0x20U - iVar4);
      if (0 < iVar4) {
        do {
          pSVar3 = (Spline *)pSVar3->points;
          mobyupdate_helpers::M1544_00296c20(pSVar3,piVar6 + 2,piVar6 + 0x12);
          iVar5 = iVar5 + 1;
          piVar6 = (int *)((int)piVar6 + 2);
        } while (iVar5 < iVar4);
      }
    }
  }
  else if (bVar1 < 3) {
    if (piVar6[1] == -1) {
      mobyupdate_helpers::M1544_002967f0
                ((double)(float)piVar6[0x22],lVar2 + 0x10,moby,piVar6 + 2,piVar6 + 0x12);
    }
    else {
      iVar5 = 0;
      iVar4 = Splines[piVar6[1]]->cnt;
      iVar4 = iVar4 + ((uint)(0x20 - (longlong)iVar4 >> 0x3f) & 0x20U - iVar4);
      pSVar3 = Splines[piVar6[1]];
      if (0 < iVar4) {
        do {
          mobyupdate_helpers::M1544_002967f0
                    ((double)pSVar3->points[0].w,pSVar3->points,pSVar3,piVar6 + 2,piVar6 + 0x12);
          iVar5 = iVar5 + 1;
          piVar6 = (int *)((int)piVar6 + 2);
          pSVar3 = (Spline *)pSVar3->points;
        } while (iVar5 < iVar4);
      }
    }
  }
  else if (bVar1 < 4) {
    if (piVar6[1] == -1) {
      mobyupdate_helpers::M1544_00296468(lVar2 + 0x10,piVar6 + 2);
    }
    else {
      iVar5 = 0;
      pSVar3 = Splines[piVar6[1]];
      iVar4 = pSVar3->cnt;
      iVar4 = iVar4 + ((uint)(0x20 - (longlong)iVar4 >> 0x3f) & 0x20U - iVar4);
      if (0 < iVar4) {
        do {
          pSVar3 = (Spline *)pSVar3->points;
          mobyupdate_helpers::M1544_00296468(pSVar3,piVar6 + 2);
          iVar5 = iVar5 + 1;
          piVar6 = (int *)((int)piVar6 + 2);
        } while (iVar5 < iVar4);
      }
    }
  }
  return;
}



//==== 002973c8  ns=mobyupdate_unsorted  size=0x33c
// sig: undefined UpdateMoby_1545(MobyInstance * moby)
// callers(0): 
// callees(6): 000f1114 mobyfunc::GetBonePosition; 000fc620 mobyutil::MB_randInt; 000fe484 mobyutil::MB_randRange; 00119600 mobyutil::MB_SpawnSparks_oClass2EE; 0011a1a0 mobyutil::MB_SpawnSparksPair; 00126f50 partupd::SpawnPart_23

/* Moby 1545 */

void mobyupdate_unsorted::UpdateMoby_1545(MobyInstance *moby)

{
  undefined2 uVar1;
  undefined1 uVar3;
  undefined8 uVar2;
  undefined1 uVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auStack_70 [48];
  
  if (moby->state == 0) {
    moby->updateDistance = -1;
    moby->state = '\x01';
  }
  else if (moby->state < 2) {
    if ((((g_gameMode == GAME_MODE_SCENE) && (update::g_SceneId == 2)) &&
        ((int)(animationSpeed * 1560.5) <= boot::g_SpaceSceneFrame)) ||
       ((g_gameMode == GAME_MODE_SCENE && (update::g_SceneId == 3)))) {
      lVar5 = -1;
      if (update::g_SceneId == 2) {
        lVar5 = 3;
      }
      else if (update::g_SceneId == 3) {
        lVar5 = 2;
      }
      mobyutil::MB_SpawnSparks_oClass2EE(*(undefined4 *)((int)&DAT_0095cec8 + (int)(lVar5 << 2)));
    }
    if (((g_gameMode == GAME_MODE_SCENE) && (update::g_SceneId == 4)) &&
       ((DAT_0095ced4 != 0 &&
        (((int)(animationSpeed * 150.5) <= boot::g_SpaceSceneFrame &&
         (boot::g_SpaceSceneFrame <= (int)(animationSpeed * 220.5))))))) {
      mobyfunc::GetBonePosition(DAT_0095ced4,0,auStack_70);
      uVar8 = 0x40fd4c0000000000;
      mobyutil::MB_SpawnSparksPair
                (0x40fd4c0000000000,0x40e86a0000000000,auStack_70,auStack_70,&DAT_00a15d30);
      uVar9 = 0x3fe8000000000000;
      uVar10 = 0x3ff0000000000000;
      iVar7 = 0;
      uVar11 = 0x3ff07ae140000000;
      auVar14 = loadVectorLeftIndexed(0x20,0x2973a0);
      auVar14 = auVar14 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar14 = auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60;
      do {
        uVar3 = mobyutil::MB_randRange(0x40,0x80);
        mobyutil::MB_randRange(0,4);
        mobyutil::MB_randInt(2);
        uVar2 = partupd::SpawnPart_23(uVar9,uVar10,uVar11,uVar8,auStack_70);
        iVar6 = (int)uVar2;
        if (iVar6 != 0) {
          *(undefined1 *)(iVar6 + 3) = 0x44;
          uVar4 = mobyutil::MB_randRange(0,0xff);
          auVar12 = ZEXT416(0xffffffff);
          auVar12 = auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60;
          *(undefined1 *)(iVar6 + 8) = uVar4;
          auVar12 = vectorShiftLeftIntegerWord(auVar12,auVar12);
          auVar13 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar12 = vectorMultiplyAddFloatingPoint(auVar13,auVar14,auVar12);
          auVar12 = vectorConvertToSignedFixedPointWordSaturate(auVar12,0);
          auVar13 = vectorSplatHalfWord(auVar12,1);
          auVar12 = auVar12 >> 0x60 & (undefined1  [16])0xff;
          uVar1 = storeVectorElementHalfWordIndexed(auVar13,10,uVar2);
          *(undefined2 *)(iVar6 + 10) = uVar1;
          *(undefined4 *)(iVar6 + 0x24) = 2;
          *(undefined1 *)(iVar6 + 0x2a) = uVar3;
          uVar3 = storeVectorElementByteIndexed
                            (auVar12 | auVar12 << 8 | auVar12 << 0x10 | auVar12 << 0x18 |
                             auVar12 << 0x20 | auVar12 << 0x28 | auVar12 << 0x30 | auVar12 << 0x38 |
                             auVar12 << 0x40 | auVar12 << 0x48 | auVar12 << 0x50 | auVar12 << 0x58 |
                             auVar12 << 0x60 | auVar12 << 0x68 | auVar12 << 0x70 | auVar12 << 0x78,
                             0x2b,uVar2);
          *(undefined1 *)(iVar6 + 0x2b) = uVar3;
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < 10);
    }
  }
  return;
}



//==== 00297798  ns=mobyupdate_unsorted  size=0x9bc
// sig: undefined UpdateMoby_1546(MobyInstance * moby)
// callers(0): 
// callees(14): 0006d720 RegisterFuncForMoby; 000f1114 mobyfunc::GetBonePosition; 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 000fcc68 mobyutil::MB_randRot; 000fe484 mobyutil::MB_randRange; 0010e030 mobyutil::MB_genericExplosion; 00119600 mobyutil::MB_SpawnSparks_oClass2EE; 0011a1a0 mobyutil::MB_SpawnSparksPair; 00126f50 partupd::SpawnPart_23; 0012ab08 partupd::SpawnPart_35; 0012e8c8 partupd::SpawnPart_46; 00456478 FUN_00456478; 00502758 fastfunc::FastDoubleToInt
// strings: 0029775c: '?fffHCP' (raw)

/* Moby 1546 */

void mobyupdate_unsorted::UpdateMoby_1546(MobyInstance *moby)

{
  undefined2 uVar1;
  MobyInstance *pMVar2;
  longlong lVar3;
  int iVar6;
  undefined8 uVar4;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar5;
  char cVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  undefined8 uVar30;
  double dVar31;
  undefined8 uVar32;
  double dVar33;
  undefined8 uVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auStack_150 [16];
  Vec4 VStack_140;
  float local_130;
  float local_12c;
  float local_128;
  undefined1 auStack_120 [16];
  float local_110;
  float local_10c;
  float local_108;
  undefined4 local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  undefined4 local_c4;
  longlong local_c0;
  
  if (moby->state == 0) {
    moby->updateDistance = -1;
    moby->state = '\x01';
  }
  else if ((moby->state < 2) && (g_gameMode == GAME_MODE_SCENE)) {
    if (((update::g_SceneId == 1) ||
        (((update::g_SceneId == 2 &&
          (local_c0 = (longlong)(int)(animationSpeed * 148.5),
          boot::g_SpaceSceneFrame <= (int)(animationSpeed * 148.5))) || (update::g_SceneId == 3))))
       || (update::g_SceneId == 4)) {
      lVar3 = 3;
      if (((update::g_SceneId != 1) && (update::g_SceneId != 3)) &&
         ((update::g_SceneId != 4 && (update::g_SceneId == 2)))) {
        lVar3 = 2;
      }
      mobyutil::MB_SpawnSparks_oClass2EE(*(undefined4 *)(((uint)(lVar3 << 2) | 0x95cd50) + 0x178));
    }
    if (((update::g_SceneId == 1) &&
        (local_c0 = (longlong)(int)(animationSpeed * 472.5),
        (int)(animationSpeed * 472.5) <= boot::g_SpaceSceneFrame)) &&
       ((local_c0 = (longlong)(int)(animationSpeed * 537.5),
        boot::g_SpaceSceneFrame <= (int)(animationSpeed * 537.5) && (DAT_0095cec8 != 0)))) {
      mobyfunc::GetBonePosition(DAT_0095cec8,1,auStack_150);
      uVar30 = 0x4000000000000000;
      uVar12 = mobyutil::MB_randRangeFloat(0.5,2.0);
      iVar6 = mobyutil::MB_randInt(2);
      uVar4 = 0xc000000000000000;
      if (iVar6 != 0) {
        uVar4 = uVar30;
      }
      uVar4 = partupd::SpawnPart_46(uVar12,uVar4,auStack_150,&DAT_00a15d30);
      if ((int)uVar4 != 0) {
        auVar35 = ZEXT416(0xffffffff);
        auVar35 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
        auVar36 = vectorShiftLeftIntegerWord(auVar35,auVar35);
        auVar35 = loadVectorLeftIndexed(0x18,0x297708);
        auVar35 = auVar35 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar38 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar35 = vectorMultiplyAddFloatingPoint
                            (auVar38,auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,
                             auVar36);
        auVar35 = vectorConvertToSignedFixedPointWordSaturate(auVar35,0);
        auVar35 = vectorSplatHalfWord(auVar35,1);
        uVar1 = storeVectorElementHalfWordIndexed(auVar35,10,uVar4);
        *(undefined2 *)((int)uVar4 + 10) = uVar1;
      }
    }
    if (((update::g_SceneId == 1) &&
        (local_c0 = (longlong)(int)(animationSpeed * 472.5),
        boot::g_SpaceSceneFrame == (int)(animationSpeed * 472.5))) && (DAT_0095cec8 != 0)) {
      mobyfunc::GetBonePosition(DAT_0095cec8,1,&VStack_140);
      dVar33 = 3.0;
      iVar6 = FUN_00456478(0x4008000000000000,&VStack_140);
      if (iVar6 != 0) {
        *(undefined1 *)(iVar6 + 0x23) = 0x70;
      }
      iVar6 = 0;
      dVar31 = 0.0;
      dVar29 = 1.570796251296997;
      dVar28 = 3.141592502593994;
      dVar27 = -3.141592502593994;
      dVar26 = -0.16666656732559204;
      dVar25 = 0.008333025500178337;
      dVar24 = -0.0001980741071747616;
      dVar23 = 2.601886990305502e-06;
      dVar22 = 6.5;
      do {
        dVar13 = (double)mobyutil::MB_randRot();
        dVar14 = (double)mobyutil::MB_randRangeFloat
                                   ((float)dVar31,(float)((double)mobyutil::g_FrameTime * dVar33));
        dVar16 = (double)(float)(dVar13 + dVar29);
        dVar15 = (double)(float)(dVar28 - dVar13);
        if (dVar13 - (double)(float)(dVar28 - dVar13) < 0.0) {
          dVar15 = dVar13;
        }
        dVar18 = (double)(float)(dVar28 - dVar16);
        if (dVar16 - (double)(float)(dVar28 - dVar16) < 0.0) {
          dVar18 = dVar16;
        }
        dVar17 = (double)(float)(dVar27 - dVar13);
        if ((double)(float)(dVar27 - dVar13) - dVar15 < 0.0) {
          dVar17 = dVar15;
        }
        dVar15 = (double)(float)(dVar27 - dVar16);
        if ((double)(float)(dVar27 - dVar16) - dVar18 < 0.0) {
          dVar15 = dVar18;
        }
        dVar13 = (double)(float)(dVar17 * dVar17);
        dVar16 = (double)(float)(dVar15 * dVar15);
        dVar20 = (double)(float)(dVar13 * (double)(float)(dVar13 * dVar17));
        dVar18 = (double)(float)(dVar16 * (double)(float)(dVar16 * dVar15));
        dVar19 = (double)(float)(dVar13 * dVar20);
        dVar21 = (double)(float)(dVar16 * dVar18);
        local_12c = (float)((double)(float)((double)(float)(dVar13 * dVar19) * dVar23 +
                                           (double)(float)(dVar19 * dVar24 +
                                                          (double)(float)(dVar20 * dVar25 +
                                                                         (double)(float)((double)(
                                                  float)(dVar13 * dVar17) * dVar26 + dVar17)))) *
                           dVar14);
        local_130 = (float)((double)(float)((double)(float)(dVar16 * dVar21) * dVar23 +
                                           (double)(float)(dVar21 * dVar24 +
                                                          (double)(float)(dVar18 * dVar25 +
                                                                         (double)(float)((double)(
                                                  float)(dVar16 * dVar15) * dVar26 + dVar15)))) *
                           dVar14);
        dVar15 = (double)mobyutil::MB_randRangeFloat
                                   ((float)((double)mobyutil::g_FrameTime * dVar33),
                                    (float)((double)mobyutil::g_FrameTime * dVar22));
        local_128 = (float)dVar15;
        uVar7 = mobyutil::MB_randRange(0x5a,0x78);
        uVar8 = mobyutil::MB_randInt(2);
        partupd::SpawnPart_35(&VStack_140,&local_130,uVar8,uVar7);
        iVar6 = iVar6 + 1;
      } while (iVar6 < 0x10);
    }
    pMVar2 = DAT_0095ced8;
    if (((update::g_SceneId == 4) && (DAT_0095ced8 != (MobyInstance *)0x0)) &&
       ((DAT_0095ced8->oClass == GREEN_SHIP_0213 &&
        ((RegisterFuncForMoby(&PTR_Space_DrawShipEffects_00707cd8,DAT_0095ced8),
         (int)(animationSpeed * 850.5) <= boot::g_SpaceSceneFrame &&
         (local_c0 = (longlong)(int)(animationSpeed * 1160.5),
         boot::g_SpaceSceneFrame <= (int)(animationSpeed * 1160.5))))))) {
      iVar6 = 1;
      uVar34 = 0x3fb99999a0000000;
      uVar32 = 0x3ff0000000000000;
      uVar30 = 0x3fecccccc0000000;
      uVar12 = 0x41086a0000000000;
      dVar33 = 1100.5;
      uVar4 = 0x4010000000000000;
      auVar35 = loadVectorLeftIndexed(0x60,0x297708);
      auVar36 = loadVectorLeftIndexed(0x40,0x297708);
      auVar35 = auVar35 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar38 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
      auVar35 = auVar36 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar35 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
      do {
        mobyfunc::GetBonePosition(pMVar2,iVar6,auStack_120);
        iVar11 = 0;
        do {
          mobyutil::MB_randInt(0x10);
          mobyutil::MB_randInt(2);
          uVar5 = partupd::SpawnPart_23(uVar34,uVar32,uVar30,uVar12,auStack_120);
          iVar10 = (int)uVar5;
          if (iVar10 != 0) {
            auVar37 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
            local_c0 = (longlong)(int)((double)animationSpeed * dVar33);
            auVar36 = auVar35;
            if ((int)((double)animationSpeed * dVar33) <= boot::g_SpaceSceneFrame) {
              auVar36 = auVar38;
            }
            auVar39 = ZEXT416(0xffffffff);
            auVar39 = auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60;
            auVar39 = vectorShiftLeftIntegerWord(auVar39,auVar39);
            auVar36 = vectorMultiplyAddFloatingPoint(auVar37,auVar36,auVar39);
            auVar36 = vectorConvertToSignedFixedPointWordSaturate(auVar36,0);
            auVar36 = vectorSplatHalfWord(auVar36,1);
            uVar1 = storeVectorElementHalfWordIndexed(auVar36,10,uVar5);
            *(undefined2 *)(iVar10 + 10) = uVar1;
            cVar9 = fastfunc::FastDoubleToInt(uVar4);
            *(char *)(iVar10 + 9) = cVar9 + '@';
            *(undefined4 *)(iVar10 + 0x24) = 2;
            *(undefined1 *)(iVar10 + 0x2a) = 0x7f;
            *(char *)(iVar10 + 0x2b) = (char)*(undefined2 *)(iVar10 + 10);
          }
          iVar11 = iVar11 + 1;
        } while (iVar11 < 2);
        iVar6 = iVar6 + 1;
      } while (iVar6 < 7);
    }
    pMVar2 = DAT_0095ced0;
    if (((update::g_SceneId == 5) &&
        (local_c0 = (longlong)(int)(animationSpeed * 120.5),
        boot::g_SpaceSceneFrame < (int)(animationSpeed * 120.5))) &&
       (DAT_0095ced0 != (MobyInstance *)0x0)) {
      dVar24 = 0.0;
      dVar33 = dVar24;
      dVar22 = dVar24;
      dVar23 = dVar24;
      mobyfunc::GetBonePosition(DAT_0095ced0,5,&local_110);
      if (1 < boot::g_SpaceSceneFrame) {
        dVar23 = (double)(local_110 - DAT_00fadb70);
        dVar22 = (double)(local_10c - DAT_00fadb74);
        dVar33 = (double)(local_108 - DAT_00fadb78);
      }
      DAT_00fadb78 = local_108;
      DAT_00fadb74 = local_10c;
      DAT_00fadb70 = local_110;
      DAT_00fadb7c = local_104;
      local_c0 = (longlong)(int)(animationSpeed * 118.5);
      if (boot::g_SpaceSceneFrame == (int)(animationSpeed * 118.5)) {
        local_d4 = (float)dVar24;
        local_d8 = (float)dVar24;
        local_dc = (float)dVar24;
        local_e0 = (float)dVar24;
        uVar12 = 0x4022000000000000;
        dVar25 = 1.0;
        uVar4 = 0x404e000000000000;
        mobyutil::MB_genericExplosion
                  (dVar24,dVar24,0x4014000000000000,0x4004000000000000,0x4022000000000000,
                   0x3ff0000000000000,0x404e000000000000,pMVar2,&local_e0,&local_110);
        local_c8 = (float)((double)local_108 - dVar25);
        local_d0 = local_110;
        local_cc = local_10c;
        local_c4 = local_104;
        mobyutil::MB_genericExplosion
                  (dVar24,dVar24,dVar25,0x3fe0000000000000,uVar12,dVar25,uVar4,pMVar2,&local_e0,
                   &local_d0);
      }
      RegisterFuncForMoby(&PTR_Space_DrawShipEffects_00707cd8,pMVar2);
      mobyfunc::GetBonePosition(pMVar2,1,&local_100);
      mobyfunc::GetBonePosition(pMVar2,2,&local_f0);
      dVar24 = (double)local_100 - dVar23;
      dVar25 = (double)local_fc - dVar22;
      dVar26 = (double)local_f8 - dVar33;
      dVar27 = (double)local_f0 - dVar23;
      dVar28 = (double)local_ec - dVar22;
      dVar29 = (double)local_e8 - dVar33;
      iVar6 = 0;
      dVar31 = 0.25;
      uVar12 = 0x41024f8000000000;
      uVar4 = 0x40ed4c0000000000;
      do {
        local_e8 = (float)dVar29;
        local_ec = (float)dVar28;
        local_f0 = (float)dVar27;
        local_f8 = (float)dVar26;
        local_fc = (float)dVar25;
        local_100 = (float)dVar24;
        mobyutil::MB_SpawnSparksPair(uVar12,uVar4,&local_100,&local_100,&DAT_00a15d30);
        mobyutil::MB_SpawnSparksPair(uVar12,uVar4,&local_f0,&local_f0,&DAT_00a15d30);
        iVar6 = iVar6 + 1;
        dVar24 = dVar23 * dVar31 + (double)local_100;
        dVar25 = dVar22 * dVar31 + (double)local_fc;
        dVar26 = dVar33 * dVar31 + (double)local_f8;
        dVar27 = dVar23 * dVar31 + (double)local_f0;
        dVar28 = dVar22 * dVar31 + (double)local_ec;
        dVar29 = dVar33 * dVar31 + (double)local_e8;
      } while (iVar6 < 4);
    }
  }
  return;
}



//==== 00298158  ns=mobyupdate_unsorted  size=0x4
// sig: undefined UpdateMoby_1547(MobyInstance * moby)
// callers(0): 
// callees(0): 

/* Moby 1547 */

MobyInstance * mobyupdate_unsorted::UpdateMoby_1547(MobyInstance *moby)

{
  return moby;
}



//==== 00298178  ns=mobyupdate_unsorted  size=0x2d0
// sig: undefined UpdateMoby_1548(MobyInstance * moby)
// callers(0): 
// callees(5): 000f1114 mobyfunc::GetBonePosition; 000fcbe8 mobyutil::MB_randRangeFloat; 000fe484 mobyutil::MB_randRange; 00119600 mobyutil::MB_SpawnSparks_oClass2EE; 00126dd8 partupd::SpawnPart_22

/* Moby 1548 */

void mobyupdate_unsorted::UpdateMoby_1548(MobyInstance *moby)

{
  int iVar1;
  undefined8 in_r7;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  undefined1 local_60 [32];
  
  if (moby->state == 0) {
    moby->updateDistance = -1;
    moby->state = '\x01';
  }
  else if (moby->state < 2) {
    if ((g_gameMode == GAME_MODE_SCENE) && ((update::g_SceneId == 4 || (update::g_SceneId == 10))))
    {
      mobyutil::MB_SpawnSparks_oClass2EE
                (*(undefined4 *)
                  (((uint)(((LZCOUNT(4 - update::g_SceneId) << 0x3a) >> 0x3f & 2U) << 2) | 0x95cd50)
                  + 0x178));
    }
    iVar1 = DAT_0095ced4;
    if ((((g_gameMode == GAME_MODE_SCENE) && (update::g_SceneId == 3)) &&
        ((int)(animationSpeed * 900.5) <= boot::g_SpaceSceneFrame)) &&
       ((boot::g_SpaceSceneFrame <= (int)(animationSpeed * 10000.5) && (DAT_0095ced4 != 0)))) {
      mobyfunc::GetBonePosition(DAT_0095ced4,0,auStack_80);
      mobyfunc::GetBonePosition(iVar1,1,auStack_70);
      dVar6 = 0.25;
      dVar5 = 0.5;
      dVar2 = (double)mobyutil::MB_randRangeFloat(0.25,0.5);
      dVar3 = 210000.0;
      dVar4 = (double)(float)(dVar2 * 210000.0);
      iVar1 = mobyutil::MB_randRange(dVar2,0x4109a28000000000,0x2d,0x3c);
      partupd::SpawnPart_22
                (dVar4,auStack_80,local_60,0x7f7f7f7f,&DAT_007f7f7f,in_r7,
                 (int)(animationSpeed * (float)((double)(longlong)iVar1 + dVar5)));
      dVar2 = (double)mobyutil::MB_randRangeFloat((float)dVar6,(float)dVar5);
      dVar2 = (double)(float)(dVar2 * dVar3);
      iVar1 = mobyutil::MB_randRange(0x2d,0x3c);
      partupd::SpawnPart_22
                (dVar2,auStack_70,local_60,0x407f7f7f,&DAT_007f7f7f,in_r7,
                 (int)(animationSpeed * (float)((double)(longlong)iVar1 + dVar5)));
    }
  }
  return;
}



//==== 00298448  ns=mobyupdate_unsorted  size=0xa8
// sig: undefined UpdateMoby_1549(MobyInstance * moby)
// callers(0): 
// callees(1): 00119600 mobyutil::MB_SpawnSparks_oClass2EE

/* Moby 1549 */

void mobyupdate_unsorted::UpdateMoby_1549(MobyInstance *moby)

{
  longlong lVar1;
  
  if (moby->state == 0) {
    moby->updateDistance = -1;
    moby->state = '\x01';
  }
  else if ((moby->state < 2) && (g_gameMode == GAME_MODE_SCENE)) {
    if ((update::g_SceneId == 0) || (update::g_SceneId == 1)) {
      lVar1 = 0;
      if (update::g_SceneId == 0) {
        lVar1 = 3;
      }
      else if (update::g_SceneId == 1) {
        lVar1 = 2;
      }
      mobyutil::MB_SpawnSparks_oClass2EE(*(undefined4 *)(((uint)(lVar1 << 2) | 0x95cd50) + 0x178));
    }
  }
  return;
}



//==== 002984f0  ns=mobyupdate_unsorted  size=0x4
// sig: undefined UpdateMoby_155(MobyInstance * moby)
// callers(0): 
// callees(0): 

/* Moby 155 */

MobyInstance * mobyupdate_unsorted::UpdateMoby_155(MobyInstance *moby)

{
  return moby;
}



//==== 002984f4  ns=mobyupdate_unsorted  size=0xa0
// sig: undefined UpdateMoby_1550(MobyInstance * moby)
// callers(0): 
// callees(1): 00119600 mobyutil::MB_SpawnSparks_oClass2EE

/* Moby 1550 */

void mobyupdate_unsorted::UpdateMoby_1550(MobyInstance *moby)

{
  longlong lVar1;
  
  if (moby->state == 0) {
    moby->updateDistance = -1;
    moby->state = '\x01';
  }
  else if ((moby->state < 2) && (g_gameMode == GAME_MODE_SCENE)) {
    if ((update::g_SceneId == 10) || (update::g_SceneId == 0xb)) {
      lVar1 = 0;
      if ((update::g_SceneId == 10) || (update::g_SceneId == 0xb)) {
        lVar1 = 3;
      }
      mobyutil::MB_SpawnSparks_oClass2EE(*(undefined4 *)(((uint)(lVar1 << 2) | 0x95cd50) + 0x178));
    }
  }
  return;
}



//==== 002985a0  ns=mobyupdate_unsorted  size=0xb4
// sig: undefined UpdateMoby_1551(MobyInstance * moby)
// callers(0): 
// callees(1): 00119600 mobyutil::MB_SpawnSparks_oClass2EE

/* Moby 1551 */

void mobyupdate_unsorted::UpdateMoby_1551(MobyInstance *moby)

{
  if (moby->state == 0) {
    moby->updateDistance = -1;
    moby->state = '\x01';
  }
  else if ((((moby->state < 2) && (g_gameMode == GAME_MODE_SCENE)) && (update::g_SceneId == 5)) &&
          (boot::g_SpaceSceneFrame <= (int)(animationSpeed * 127.5))) {
    mobyutil::MB_SpawnSparks_oClass2EE(DAT_0095ced0);
  }
  return;
}



//==== 00298678  ns=mobyupdate_unsorted  size=0x320
// sig: undefined UpdateMoby_1552(MobyInstance * moby)
// callers(0): 
// callees(6): 000f1114 mobyfunc::GetBonePosition; 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 000fe484 mobyutil::MB_randRange; 00119600 mobyutil::MB_SpawnSparks_oClass2EE; 00126f50 partupd::SpawnPart_23

/* Moby 1552 */

void mobyupdate_unsorted::UpdateMoby_1552(MobyInstance *moby)

{
  undefined4 uVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined1 uVar6;
  int iVar4;
  int iVar5;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  double dVar10;
  double dVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  double dVar15;
  undefined1 auStack_a0 [40];
  
  if (moby->state == 0) {
    moby->updateDistance = -1;
    moby->state = '\x01';
  }
  else if ((moby->state < 2) && (g_gameMode == GAME_MODE_SCENE)) {
    if ((update::g_SceneId == 3) || (update::g_SceneId == 4)) {
      lVar2 = 0;
      if ((update::g_SceneId == 3) || (update::g_SceneId == 4)) {
        lVar2 = 2;
      }
      mobyutil::MB_SpawnSparks_oClass2EE(*(undefined4 *)(((uint)(lVar2 << 2) | 0x95cd50) + 0x178));
    }
    if (update::g_SceneId == 2) {
      uVar3 = (LZCOUNT((int)(animationSpeed * 2698.5) - boot::g_SpaceSceneFrame) << 0x3a) >> 0x3f &
              7;
      if (boot::g_SpaceSceneFrame == (int)(animationSpeed * 2766.5)) {
        uVar3 = 6;
      }
      else if ((int)uVar3 == 0) {
        return;
      }
      iVar8 = 0;
      uVar1 = *(undefined4 *)((int)&DAT_0095cec8 + (int)(uVar3 << 2));
      dVar10 = 20000.0;
      dVar11 = 200000.0;
      uVar12 = 0x3fe3333340000000;
      uVar13 = 0x3ff0000000000000;
      uVar14 = 0x3ff028f5c0000000;
      dVar15 = 0.5;
      do {
        mobyfunc::GetBonePosition(uVar1,iVar8,auStack_a0);
        iVar7 = 0;
        do {
          uVar9 = mobyutil::MB_randRangeFloat((float)dVar10,(float)dVar11);
          uVar6 = mobyutil::MB_randRange(0x20,0x80);
          mobyutil::MB_randRange(0,4);
          mobyutil::MB_randInt(2);
          iVar4 = partupd::SpawnPart_23(uVar12,uVar13,uVar14,uVar9,auStack_a0);
          if (iVar4 != 0) {
            iVar5 = mobyutil::MB_randRange(0x3c,0x5a);
            iVar5 = (int)(animationSpeed * (float)((double)(longlong)iVar5 + dVar15));
            *(undefined4 *)(iVar4 + 0x24) = 2;
            *(short *)(iVar4 + 10) = (short)iVar5;
            *(undefined1 *)(iVar4 + 0x2a) = uVar6;
            *(char *)(iVar4 + 0x2b) = (char)iVar5;
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < 10);
        iVar8 = iVar8 + 1;
      } while (iVar8 < 4);
    }
  }
  return;
}



//==== 002989a0  ns=mobyupdate_unsorted  size=0x104
// sig: undefined UpdateMoby_1553(MobyInstance * moby)
// callers(0): 
// callees(1): 00119600 mobyutil::MB_SpawnSparks_oClass2EE

/* Moby 1553 */

void mobyupdate_unsorted::UpdateMoby_1553(MobyInstance *moby)

{
  longlong lVar1;
  
  if (moby->state == 0) {
    moby->updateDistance = -1;
    moby->state = '\x01';
  }
  else if ((((moby->state < 2) && (g_gameMode == GAME_MODE_SCENE)) &&
           ((update::g_SceneId == 2 || update::g_SceneId == 1 ||
            ((update::g_SceneId == 4 || (update::g_SceneId == 5)))))) &&
          ((update::g_SceneId != 1 || ((int)(animationSpeed * 2254.5) < boot::g_SpaceSceneFrame))))
  {
    lVar1 = 0;
    if ((update::g_SceneId == 1) || (update::g_SceneId == 4)) {
      lVar1 = 3;
    }
    else if ((update::g_SceneId == 2) || (update::g_SceneId == 5)) {
      lVar1 = 2;
    }
    mobyutil::MB_SpawnSparks_oClass2EE(*(undefined4 *)(((uint)(lVar1 << 2) | 0x95cd50) + 0x178));
  }
  return;
}



//==== 00298aa8  ns=mobyupdate_unsorted  size=0x4
// sig: undefined UpdateMoby_1554(MobyInstance * moby)
// callers(0): 
// callees(0): 

/* Moby 1554 */

MobyInstance * mobyupdate_unsorted::UpdateMoby_1554(MobyInstance *moby)

{
  return moby;
}



//==== 00298aac  ns=mobyupdate_unsorted  size=0xd4
// sig: undefined UpdateMoby_1555(MobyInstance * moby)
// callers(0): 
// callees(1): 00119600 mobyutil::MB_SpawnSparks_oClass2EE

/* Moby 1555 */

void mobyupdate_unsorted::UpdateMoby_1555(MobyInstance *moby)

{
  longlong lVar1;
  
  if (moby->state == 0) {
    moby->updateDistance = -1;
    moby->state = '\x01';
  }
  else if (((moby->state < 2) && (g_gameMode == GAME_MODE_SCENE)) &&
          ((update::g_SceneId == 5 || update::g_SceneId == 3 ||
           ((update::g_SceneId == 6 || (update::g_SceneId == 7)))))) {
    lVar1 = 0;
    if (update::g_SceneId == 3) {
      lVar1 = 1;
    }
    else if ((update::g_SceneId == 5) || (update::g_SceneId == 6)) {
      lVar1 = 2;
    }
    else if (update::g_SceneId == 7) {
      lVar1 = 3;
    }
    mobyutil::MB_SpawnSparks_oClass2EE(*(undefined4 *)(((uint)(lVar1 << 2) | 0x95cd50) + 0x178));
  }
  return;
}



//==== 00298b80  ns=mobyupdate_unsorted  size=0x4
// sig: undefined UpdateMoby_1556(MobyInstance * moby)
// callers(0): 
// callees(0): 

/* Moby 1556 */

MobyInstance * mobyupdate_unsorted::UpdateMoby_1556(MobyInstance *moby)

{
  return moby;
}



//==== 00298b84  ns=mobyupdate_unsorted  size=0xb8
// sig: undefined UpdateMoby_1557(MobyInstance * moby)
// callers(0): 
// callees(1): 00119600 mobyutil::MB_SpawnSparks_oClass2EE

/* Moby 1557 */

void mobyupdate_unsorted::UpdateMoby_1557(MobyInstance *moby)

{
  if (moby->state == 0) {
    moby->updateDistance = -1;
    moby->state = '\x01';
  }
  else if (((moby->state < 2) && (g_gameMode == GAME_MODE_SCENE)) &&
          ((update::g_SceneId == 1 || (update::g_SceneId == 7)))) {
    mobyutil::MB_SpawnSparks_oClass2EE
              (*(undefined4 *)
                (((uint)(((LZCOUNT(1 - update::g_SceneId) << 0x3a) >> 0x3f & 2U) << 2) | 0x95cd50) +
                0x178));
  }
  return;
}



//==== 00298c3c  ns=mobyupdate_unsorted  size=0xb0
// sig: undefined UpdateMoby_1558(MobyInstance * moby)
// callers(0): 
// callees(1): 00119600 mobyutil::MB_SpawnSparks_oClass2EE

/* Moby 1558 */

void mobyupdate_unsorted::UpdateMoby_1558(MobyInstance *moby)

{
  if (moby->state == 0) {
    moby->updateDistance = -1;
    moby->state = '\x01';
  }
  else if (((moby->state < 2) && (g_gameMode == GAME_MODE_SCENE)) && (update::g_SceneId == 2)) {
    mobyutil::MB_SpawnSparks_oClass2EE(DAT_0095ced0);
  }
  return;
}



//==== 00298cec  ns=mobyupdate_unsorted  size=0xf4
// sig: undefined UpdateMoby_1559(MobyInstance * moby)
// callers(0): 
// callees(3): 00104214 mobyutil::MB_CountActiveMobysByGroup; 00119600 mobyutil::MB_SpawnSparks_oClass2EE; 0011b728 mobyutil::MB_UnlockSkillPoint

/* Moby 1559 */

void mobyupdate_unsorted::UpdateMoby_1559(MobyInstance *moby)

{
  int iVar1;
  longlong lVar2;
  
                    /* WARNING: Load size is inaccurate */
  if ((*moby->pVar != -1) &&
     (iVar1 = mobyutil::MB_CountActiveMobysByGroup(*moby->pVar,0xffffffffffffffff), iVar1 == 0)) {
    mobyutil::MB_UnlockSkillPoint(0x17);
  }
  if (moby->state == 0) {
    moby->updateDistance = -1;
    moby->state = '\x01';
  }
  else if (((moby->state < 2) && (g_gameMode == GAME_MODE_SCENE)) &&
          ((update::g_SceneId == 4 || update::g_SceneId == 3 || (update::g_SceneId == 5)))) {
    lVar2 = 0;
    if (((update::g_SceneId == 3) || (update::g_SceneId == 4)) || (update::g_SceneId == 5)) {
      lVar2 = 1;
    }
    mobyutil::MB_SpawnSparks_oClass2EE(*(undefined4 *)(((uint)(lVar2 << 2) | 0x95cd50) + 0x178));
  }
  return;
}



//==== 00298de0  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1559_00298de0(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1559_00298de0(void)

{
  DAT_007ab7e4 = 0x10000;
  return;
}



//==== 00298df8  ns=mobyupdate_helpers  size=0x8
// sig: undefined M1559_00298df8(void)
// callers(0): 
// callees(0): 

undefined8 mobyupdate_helpers::M1559_00298df8(void)

{
  return 0;
}



//==== 00298e30  ns=mobyupdate_helpers  size=0x5b8
// sig: undefined M156_00298e30(void)
// callers(1): 00299958 mobyupdate_unsorted::UpdateMoby_156
// callees(7): 000fcbe8 mobyutil::MB_randRangeFloat; 000fe484 mobyutil::MB_randRange; 000fe4f0 mobyutil::MB_randRangeSigned; 000fe610 mobyutil::MB_SphericalToVector; 00125e08 partupd::SpawnPart_19; 001268f8 partupd::SpawnPart_21; 00502578 fastfunc::FastWrapRot

void mobyupdate_helpers::M156_00298e30(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  ulonglong *puVar7;
  float fVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  float *pfVar13;
  longlong lVar12;
  ulonglong uVar14;
  longlong lVar15;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  int iVar16;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  int iVar17;
  ulonglong in_LR;
  longlong lVar18;
  double dVar19;
  double dVar20;
  ulonglong in_f23;
  ulonglong in_f24;
  ulonglong in_f25;
  ulonglong in_f26;
  double dVar21;
  undefined8 uVar22;
  ulonglong in_f27;
  double dVar23;
  ulonglong in_f28;
  double dVar24;
  undefined8 uVar25;
  ulonglong in_f29;
  undefined8 uVar26;
  ulonglong in_f30;
  double dVar27;
  ulonglong in_f31;
  double dVar28;
  
  uVar9 = ZEXT48(&stack0x00000000);
  lVar11 = uVar9 - 0x160;
  puVar7 = (ulonglong *)lVar11;
  *puVar7 = uVar9;
  puVar7[0x2e] = in_LR;
  puVar7[0x23] = in_f23;
  puVar7[0x24] = in_f24;
  puVar7[0x25] = in_f25;
  puVar7[0x26] = in_f26;
  puVar7[0x27] = in_f27;
  puVar7[0x28] = in_f28;
  puVar7[0x29] = in_f29;
  puVar7[0x2a] = in_f30;
  puVar7[0x2b] = in_f31;
  puVar7[0x21] = unaff_r30;
  fVar4 = GameCamera.posY - CollOutput.ip.y;
  fVar5 = GameCamera.posX - CollOutput.ip.x;
  fVar1 = GameCamera.posZ - CollOutput.ip.z;
  *(float *)(puVar7 + 0xe) = fVar5;
  *(float *)((int)puVar7 + 0x74) = fVar4;
  *(char (*) [4])((int)puVar7 + 0x7c) = GameCamera.field8_0x14c;
  *(float *)(puVar7 + 0xf) = fVar1;
  *(float *)((int)puVar7 + 0x94) = fVar1;
  fVar2 = SQRT(fVar5 * fVar5 + fVar4 * fVar4);
  fVar3 = ABS(fVar2);
  *(float *)(puVar7 + 0x12) = fVar2;
  *(float *)(puVar7 + 0x13) = fVar3 - ABS(fVar1);
  dVar27 = 0.0;
  uVar14 = (ulonglong)(*(uint *)(puVar7 + 0x12) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar7 + 0x13) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar7 + 0x94) >> 0x1d) & 4;
  fVar2 = ABS(*(float *)(puVar7 + 0x12));
  if (*(float *)(puVar7 + 0x13) - 0.0 < 0.0) {
    fVar2 = ABS(fVar1);
  }
  fVar6 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar14 << 2));
  fVar1 = *(float *)(((uint)(uVar14 << 2) | 0x735900) + 4);
  fVar8 = ABS(*(float *)((int)puVar7 + 0x94));
  if (*(float *)(puVar7 + 0x13) - 0.0 < 0.0) {
    fVar8 = fVar3;
  }
  puVar7[0x22] = unaff_r31;
  puVar7[0x20] = unaff_r29;
  puVar7[0x1f] = unaff_r28;
  dVar28 = dVar27;
  if (0.0 < fVar2) {
    lVar10 = uVar9 - 0x150;
    lVar12 = uVar9 - 0xa4;
    lVar15 = uVar9 - 0x94;
    lVar18 = 2;
    fVar2 = (fVar8 - fVar2) / (fVar8 + fVar2);
    fVar3 = fVar2 * fVar2;
    *(float *)(puVar7 + 0x19) = fVar2;
    *(float *)(puVar7 + 0x18) = fVar2;
    *(float *)((int)puVar7 + 0xc4) = fVar2;
    *(float *)((int)puVar7 + 0xbc) = fVar2;
    fVar2 = fVar3 * fVar3;
    *(float *)(puVar7 + 0x18) = *(float *)(puVar7 + 0x18) * fVar3;
    *(float *)((int)puVar7 + 0xc4) = *(float *)((int)puVar7 + 0xc4) * fVar2;
    *(float *)(puVar7 + 0x19) = *(float *)(puVar7 + 0x19) * fVar2 * fVar3;
    do {
      *(float *)((int)lVar10 + 0xbc) = *(float *)((int)lVar10 + 0xac) * fVar2 * fVar2;
      iVar16 = (int)lVar12;
      lVar10 = lVar10 + 8;
      lVar12 = lVar12 + 8;
      *(float *)((int)lVar15 + 4) = *(float *)(iVar16 + 4) * fVar2 * fVar2;
      lVar15 = lVar15 + 8;
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
    lVar18 = 4;
    lVar15 = uVar9 - 0xa4;
    pfVar13 = (float *)&DAT_007358e0;
    lVar10 = lVar11;
    lVar12 = lVar15;
    do {
      fVar2 = *pfVar13;
      fVar3 = pfVar13[1];
      pfVar13 = pfVar13 + 2;
      *(float *)((int)lVar10 + 0xbc) = *(float *)((int)lVar10 + 0xbc) * fVar2;
      lVar10 = lVar10 + 8;
      *(float *)((int)lVar12 + 4) = *(float *)((int)lVar12 + 4) * fVar3;
      lVar12 = lVar12 + 8;
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
    lVar12 = 2;
    lVar10 = lVar11;
    do {
      iVar16 = (int)lVar10;
      lVar10 = lVar10 + 0x10;
      iVar17 = (int)lVar15;
      lVar15 = lVar15 + 0x10;
      dVar28 = (double)((float)(dVar28 + (double)*(float *)(iVar16 + 0xbc)) + *(float *)(iVar17 + 4)
                        + *(float *)(iVar17 + 8) + *(float *)(iVar17 + 0xc));
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
    dVar28 = (double)((float)(dVar28 + 0.7853981852531433) * fVar6 + fVar1);
  }
  fVar5 = ABS(fVar5);
  fVar4 = ABS(fVar4);
  dVar28 = -dVar28;
  fVar1 = fVar5;
  if ((fVar5 - fVar4) - 0.0 < 0.0) {
    fVar1 = fVar4;
  }
  if ((fVar5 - fVar4) - 0.0 < 0.0) {
    fVar4 = fVar5;
  }
  if (0.0 < fVar1) {
    lVar10 = uVar9 - 0x150;
    lVar12 = uVar9 - 0xc4;
    lVar15 = uVar9 - 0xb4;
    lVar18 = 2;
    fVar4 = (fVar4 - fVar1) / (fVar4 + fVar1);
    fVar5 = fVar4 * fVar4;
    *(float *)(puVar7 + 0x15) = fVar4;
    *(float *)(puVar7 + 0x14) = fVar4;
    *(float *)((int)puVar7 + 0xa4) = fVar4;
    *(float *)((int)puVar7 + 0x9c) = fVar4;
    fVar4 = fVar5 * fVar5;
    *(float *)(puVar7 + 0x14) = *(float *)(puVar7 + 0x14) * fVar5;
    *(float *)((int)puVar7 + 0xa4) = *(float *)((int)puVar7 + 0xa4) * fVar4;
    *(float *)(puVar7 + 0x15) = *(float *)(puVar7 + 0x15) * fVar4 * fVar5;
    do {
      *(float *)((int)lVar10 + 0x9c) = *(float *)((int)lVar10 + 0x8c) * fVar4 * fVar4;
      iVar16 = (int)lVar12;
      lVar10 = lVar10 + 8;
      lVar12 = lVar12 + 8;
      *(float *)((int)lVar15 + 4) = *(float *)(iVar16 + 4) * fVar4 * fVar4;
      lVar15 = lVar15 + 8;
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
    pfVar13 = (float *)&DAT_007358e0;
    lVar10 = uVar9 - 0xc4;
    lVar12 = 4;
    do {
      fVar4 = *pfVar13;
      fVar5 = pfVar13[1];
      pfVar13 = pfVar13 + 2;
      *(float *)((int)lVar11 + 0x9c) = *(float *)((int)lVar11 + 0x9c) * fVar4;
      lVar11 = lVar11 + 8;
      *(float *)((int)lVar10 + 4) = *(float *)((int)lVar10 + 4) * fVar5;
      lVar10 = lVar10 + 8;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
  }
  iVar16 = 0;
  iVar17 = 0;
  uVar26 = 0x400921fb60000000;
  dVar24 = 0.20000000298023224;
  dVar23 = 1.0;
  dVar21 = 3.0;
  do {
    dVar19 = (double)mobyutil::MB_randRangeSigned(dVar27,uVar26);
    dVar19 = (double)fastfunc::FastWrapRot((float)dVar19,(float)dVar28);
    dVar20 = (double)mobyutil::MB_randRangeSigned(dVar27,uVar26);
    dVar20 = (double)fastfunc::FastWrapRot((float)dVar20,(float)dVar28);
    mobyutil::MB_SphericalToVector
              ((float)dVar24,(float)dVar20,(float)dVar19,(float *)(uVar9 - 0xf0));
    dVar19 = (double)mobyutil::MB_randRangeFloat((float)dVar23,(float)dVar21);
    fVar2 = CollOutput.ip.z;
    fVar1 = CollOutput.ip.y;
    fVar5 = CollOutput.ip.x;
    fVar4 = (float)((double)*(float *)((int)puVar7 + 0x74) * dVar19);
    *(undefined4 *)((int)puVar7 + 0x8c) = *(undefined4 *)((int)puVar7 + 0x7c);
    *(float *)(puVar7 + 0x10) = (float)((double)*(float *)(puVar7 + 0xe) * dVar19);
    *(float *)((int)puVar7 + 0x84) = fVar4;
    *(float *)(puVar7 + 0x11) = (float)((double)*(float *)(puVar7 + 0xf) * dVar19);
    *(float *)(puVar7 + 0x10) = (float)((double)*(float *)(puVar7 + 0xe) * dVar19) + fVar5;
    *(float *)((int)puVar7 + 0x84) = fVar4 + fVar1;
    *(float *)(puVar7 + 0x11) = (float)((double)*(float *)(puVar7 + 0xf) * dVar19) + fVar2;
    partupd::SpawnPart_19(uVar9 - 0xe0,uVar9 - 0xf0);
    iVar16 = iVar16 + 1;
  } while (iVar16 < 0x14);
  uVar25 = 0x3fb99999a0000000;
  dVar24 = 0.05000000074505806;
  uVar22 = 0x40d3880000000000;
  dVar23 = 10.5;
  dVar21 = 20.5;
  do {
    dVar19 = (double)mobyutil::MB_randRangeSigned(dVar27,uVar25);
    *(float *)(puVar7 + 0x10) = (float)((double)CollOutput.ip.x + dVar19);
    dVar19 = (double)mobyutil::MB_randRangeSigned(dVar27,uVar25);
    *(float *)((int)puVar7 + 0x84) = (float)((double)CollOutput.ip.y + dVar19);
    dVar19 = (double)mobyutil::MB_randRangeSigned(dVar27,uVar25);
    *(float *)(puVar7 + 0x11) = (float)((double)CollOutput.ip.z + dVar19);
    dVar19 = (double)mobyutil::MB_randRangeSigned(dVar27,uVar26);
    dVar19 = (double)fastfunc::FastWrapRot((float)dVar19,(float)dVar28);
    dVar20 = (double)mobyutil::MB_randRangeSigned(dVar27,uVar26);
    dVar20 = (double)fastfunc::FastWrapRot((float)dVar20,(float)dVar28);
    mobyutil::MB_SphericalToVector
              ((float)dVar24,(float)dVar20,(float)dVar19,(float *)(uVar9 - 0xf0));
    dVar19 = (double)animationSpeed;
    puVar7[0x1c] = (longlong)(int)(dVar19 * dVar23);
    puVar7[0x1c] = (longlong)(int)(dVar19 * dVar21);
    mobyutil::MB_randRange(*(undefined4 *)((int)puVar7 + 0xe4),*(undefined4 *)((int)puVar7 + 0xe4));
    partupd::SpawnPart_21(uVar22,uVar9 - 0xe0,uVar9 - 0xf0,0x4f007fff,0x1fffffff);
    iVar17 = iVar17 + 1;
  } while (iVar17 < 10);
  return;
}



//==== 00299400  ns=Global  size=0x540
// sig: undefined FUN_00299400(void)
// callers(4): 002de920 mobyupdate_unsorted::UpdateMoby_194; 002f7cf8 mobyupdate_unsorted::UpdateMoby_220; 00313188 mobyupdate_unsorted::UpdateMoby_246; 0034ec58 mobyupdate_unsorted::UpdateMoby_342
// callees(6): 000efa28 mobyfunc::CreateMoby; 000f1ec8 mobyfunc::SetColorOfMoby; 000f31a8 mobyfunc::UpdateMobyTransform; 000fcbe8 mobyutil::MB_randRangeFloat; 00124aa0 partupd::SpawnPart_14; 00502758 fastfunc::FastDoubleToInt

MobyInstance *
FUN_00299400(undefined4 *param_1,f32 *param_2,undefined8 param_3,undefined4 param_4,uint param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  void *pvVar7;
  ulonglong *puVar8;
  float fVar9;
  int iVar10;
  int iVar11;
  float fVar12;
  ulonglong uVar13;
  MobyInstance *pMVar16;
  undefined4 uVar17;
  longlong lVar14;
  longlong lVar15;
  ulonglong uVar18;
  longlong lVar19;
  float *pfVar21;
  longlong lVar20;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar22;
  double dVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  
  uVar13 = ZEXT48(&stack0x00000000);
  lVar15 = uVar13 - 0x100;
  puVar8 = (ulonglong *)lVar15;
  *puVar8 = uVar13;
  puVar8[0x22] = in_LR;
  puVar8[0x1f] = unaff_r31;
  puVar8[0x1d] = unaff_r29;
  puVar8[0x1c] = unaff_r28;
  puVar8[0x1e] = unaff_r30;
  puVar8[0x1b] = unaff_r27;
  puVar8[0x1a] = unaff_r26;
  pMVar16 = mobyfunc::CreateMoby(0x9c);
  if (pMVar16 != (MobyInstance *)0x0) {
    pvVar7 = pMVar16->pVar;
    pMVar16->updateDistance = -1;
    pMVar16->drawDistance = 0x7e;
    pMVar16->enabled = '\x01';
    mobyfunc::SetColorOfMoby
              (pMVar16,(ulonglong)param_5 & 0xff,(ulonglong)(uint)((int)param_5 >> 8) & 0xff,
               (ulonglong)(uint)((int)param_5 >> 0x10) & 0xff);
    auVar24 = ZEXT416(0xffffffff);
    auVar24 = auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60;
    pMVar16->alpha = '@';
    pMVar16->state = '\0';
    auVar25 = vectorShiftLeftIntegerWord(auVar24,auVar24);
    pMVar16->modeBits = pMVar16->modeBits | DRAW_TRANSPARENT_WEIRD;
    (pMVar16->pos).x = *param_2;
    (pMVar16->pos).y = param_2[1];
    (pMVar16->pos).z = param_2[2];
    (pMVar16->pos).w = param_2[3];
    *(undefined4 *)((int)pvVar7 + 0x20) = *param_1;
    *(undefined4 *)((int)pvVar7 + 0x24) = param_1[1];
    *(undefined4 *)((int)pvVar7 + 0x28) = param_1[2];
    *(undefined4 *)((int)pvVar7 + 0x2c) = param_1[3];
    auVar24 = loadVectorLeftIndexed(in_LR,0x2993e8);
    auVar26 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar24 = auVar24 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar24 = vectorMultiplyAddFloatingPoint
                        (auVar26,auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60,
                         auVar25);
    auVar24 = vectorConvertToSignedFixedPointWordSaturate(auVar24,0);
    auVar24 = auVar24 >> 0x60 & (undefined1  [16])0xffffffff;
    uVar17 = storeVectorElementWordIndexed
                       (auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60,0,
                        ZEXT48(pvVar7));
    *(undefined4 *)((uint)pvVar7 & 0xfffffffc) = uVar17;
    dVar23 = (double)mobyutil::MB_randRangeFloat(DAT_007ab81c,DAT_007ab820);
    pMVar16->scale = (float)((double)pMVar16->scale * dVar23);
    uVar17 = fastfunc::FastDoubleToInt((double)((float)(dVar23 * 0.4000000059604645) * 1024.0));
    *(undefined4 *)((int)pvVar7 + 4) = uVar17;
    *(undefined4 *)((int)pvVar7 + 8) = 3;
    fVar3 = GameCamera.posY - (pMVar16->pos).y;
    fVar4 = GameCamera.posX - (pMVar16->pos).x;
    fVar9 = GameCamera.posZ - (pMVar16->pos).z;
    fVar6 = ABS(fVar9);
    *(float *)(puVar8 + 0x10) = fVar9;
    fVar9 = SQRT(fVar4 * fVar4 + fVar3 * fVar3);
    fVar1 = ABS(fVar9);
    *(float *)((int)puVar8 + 0x7c) = fVar9;
    *(float *)((int)puVar8 + 0x84) = fVar1 - fVar6;
    fVar9 = 0.0;
    uVar18 = (ulonglong)(*(uint *)((int)puVar8 + 0x7c) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar8 + 0x84) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar8 + 0x10) >> 0x1d) & 4;
    fVar5 = ABS(*(float *)((int)puVar8 + 0x7c));
    if (*(float *)((int)puVar8 + 0x84) - 0.0 < 0.0) {
      fVar5 = fVar6;
    }
    fVar6 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar18 << 2));
    fVar2 = ABS(*(float *)(puVar8 + 0x10));
    if (*(float *)((int)puVar8 + 0x84) - 0.0 < 0.0) {
      fVar2 = fVar1;
    }
    fVar1 = *(float *)(((uint)(uVar18 << 2) | 0x735900) + 4);
    fVar12 = fVar9;
    if (0.0 < fVar5) {
      lVar14 = uVar13 - 0xf0;
      lVar20 = uVar13 - 0x48;
      lVar19 = uVar13 - 0x58;
      lVar22 = 2;
      fVar5 = (fVar2 - fVar5) / (fVar2 + fVar5);
      fVar2 = fVar5 * fVar5;
      *(float *)((int)puVar8 + 0xb4) = fVar5;
      *(float *)((int)puVar8 + 0xac) = fVar5;
      *(float *)(puVar8 + 0x16) = fVar5;
      *(float *)(puVar8 + 0x15) = fVar5;
      fVar5 = fVar2 * fVar2;
      *(float *)((int)puVar8 + 0xac) = *(float *)((int)puVar8 + 0xac) * fVar2;
      *(float *)(puVar8 + 0x16) = *(float *)(puVar8 + 0x16) * fVar5;
      *(float *)((int)puVar8 + 0xb4) = *(float *)((int)puVar8 + 0xb4) * fVar5 * fVar2;
      do {
        *(float *)((int)lVar14 + 0xa8) = *(float *)((int)lVar14 + 0x98) * fVar5 * fVar5;
        iVar10 = (int)lVar19;
        lVar19 = lVar19 + 8;
        lVar14 = lVar14 + 8;
        *(float *)((int)lVar20 + 4) = *(float *)(iVar10 + 4) * fVar5 * fVar5;
        lVar20 = lVar20 + 8;
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
      lVar22 = 4;
      lVar20 = uVar13 - 0x58;
      pfVar21 = (float *)&DAT_007358e0;
      lVar14 = lVar15;
      lVar19 = lVar20;
      do {
        fVar5 = *pfVar21;
        fVar2 = pfVar21[1];
        pfVar21 = pfVar21 + 2;
        *(float *)((int)lVar14 + 0xa8) = *(float *)((int)lVar14 + 0xa8) * fVar5;
        lVar14 = lVar14 + 8;
        *(float *)((int)lVar19 + 4) = *(float *)((int)lVar19 + 4) * fVar2;
        lVar19 = lVar19 + 8;
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
      lVar19 = 2;
      lVar14 = lVar15;
      fVar5 = fVar9;
      do {
        iVar10 = (int)lVar14;
        iVar11 = (int)lVar20;
        lVar14 = lVar14 + 0x10;
        lVar20 = lVar20 + 0x10;
        fVar5 = fVar5 + *(float *)(iVar10 + 0xa8) + *(float *)(iVar11 + 4) + *(float *)(iVar11 + 8)
                + *(float *)(iVar11 + 0xc);
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
      fVar12 = (fVar5 + 0.7853982) * fVar6 + fVar1;
    }
    (pMVar16->rotation).y = -fVar12;
    *(float *)(puVar8 + 0xe) = fVar4;
    *(float *)((int)puVar8 + 0x74) = fVar3;
    *(float *)(puVar8 + 0xf) = ABS(fVar4) - ABS(fVar3);
    uVar18 = (ulonglong)(*(uint *)(puVar8 + 0xe) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar8 + 0xf) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar8 + 0x74) >> 0x1d) & 4;
    fVar5 = ABS(*(float *)(puVar8 + 0xe));
    if (*(float *)(puVar8 + 0xf) - 0.0 < 0.0) {
      fVar5 = ABS(fVar3);
    }
    fVar1 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar18 << 2));
    fVar3 = *(float *)(((uint)(uVar18 << 2) | 0x735900) + 4);
    fVar6 = ABS(*(float *)((int)puVar8 + 0x74));
    if (*(float *)(puVar8 + 0xf) - 0.0 < 0.0) {
      fVar6 = ABS(fVar4);
    }
    if (0.0 < fVar5) {
      lVar14 = uVar13 - 0xf0;
      lVar20 = uVar13 - 0x68;
      lVar19 = uVar13 - 0x78;
      lVar22 = 2;
      fVar4 = (fVar6 - fVar5) / (fVar6 + fVar5);
      fVar5 = fVar4 * fVar4;
      *(float *)((int)puVar8 + 0x94) = fVar4;
      *(float *)((int)puVar8 + 0x8c) = fVar4;
      *(float *)(puVar8 + 0x12) = fVar4;
      *(float *)(puVar8 + 0x11) = fVar4;
      fVar4 = fVar5 * fVar5;
      *(float *)((int)puVar8 + 0x8c) = *(float *)((int)puVar8 + 0x8c) * fVar5;
      *(float *)(puVar8 + 0x12) = *(float *)(puVar8 + 0x12) * fVar4;
      *(float *)((int)puVar8 + 0x94) = *(float *)((int)puVar8 + 0x94) * fVar4 * fVar5;
      do {
        *(float *)((int)lVar14 + 0x88) = *(float *)((int)lVar14 + 0x78) * fVar4 * fVar4;
        iVar10 = (int)lVar19;
        lVar19 = lVar19 + 8;
        lVar14 = lVar14 + 8;
        *(float *)((int)lVar20 + 4) = *(float *)(iVar10 + 4) * fVar4 * fVar4;
        lVar20 = lVar20 + 8;
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
      lVar22 = 4;
      lVar20 = uVar13 - 0x78;
      pfVar21 = (float *)&DAT_007358e0;
      lVar14 = lVar15;
      lVar19 = lVar20;
      do {
        fVar4 = *pfVar21;
        fVar5 = pfVar21[1];
        pfVar21 = pfVar21 + 2;
        *(float *)((int)lVar14 + 0x88) = *(float *)((int)lVar14 + 0x88) * fVar4;
        lVar14 = lVar14 + 8;
        *(float *)((int)lVar19 + 4) = *(float *)((int)lVar19 + 4) * fVar5;
        lVar19 = lVar19 + 8;
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
      lVar14 = 2;
      do {
        iVar10 = (int)lVar15;
        iVar11 = (int)lVar20;
        lVar15 = lVar15 + 0x10;
        lVar20 = lVar20 + 0x10;
        fVar9 = fVar9 + *(float *)(iVar10 + 0x88) + *(float *)(iVar11 + 4) + *(float *)(iVar11 + 8)
                + *(float *)(iVar11 + 0xc);
        lVar14 = lVar14 + -1;
      } while (lVar14 != 0);
      fVar9 = (fVar9 + 0.7853982) * fVar1 + fVar3;
    }
    uVar17 = DAT_007ab824;
    (pMVar16->rotation).z = fVar9;
    uVar17 = partupd::SpawnPart_14(uVar17,pMVar16);
    *(undefined4 *)((int)pvVar7 + 0x10) = uVar17;
    uVar17 = DAT_007ab828;
    *(undefined4 *)((int)pvVar7 + 0x18) = param_4;
    *(undefined4 *)((int)pvVar7 + 0xc) = uVar17;
    mobyfunc::UpdateMobyTransform(pMVar16);
  }
  return pMVar16;
}



//==== 00299958  ns=mobyupdate_unsorted  size=0x684
// sig: undefined UpdateMoby_156(MobyInstance * moby)
// callers(0): 
// callees(9): 0005e598 collproc::CollMobySphere; 000efb38 mobyfunc::DeleteMoby; 0010581c mobyutil::SetCollDamIn; 00105c08 mobyutil::CollDamageMobyDirect; 00124aa0 partupd::SpawnPart_14; 00298e30 mobyupdate_helpers::M156_00298e30; 004fff60 fastfunc::FastDecTimerS32; 00502578 fastfunc::FastWrapRot; 00502758 fastfunc::FastDoubleToInt

/* Moby 156 */

void mobyupdate_unsorted::UpdateMoby_156(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int *piVar9;
  uint uVar10;
  undefined4 uVar11;
  ulonglong *puVar12;
  int iVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  int iVar18;
  s8 sVar19;
  longlong lVar20;
  ulonglong uVar21;
  float *pfVar23;
  longlong lVar22;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar24;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar25;
  double dVar26;
  ulonglong in_f31;
  double dVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  
  lVar15 = (longlong)(int)moby;
  uVar14 = ZEXT48(&stack0x00000000);
  lVar17 = uVar14 - 0x140;
  puVar12 = (ulonglong *)lVar17;
  *puVar12 = uVar14;
  puVar12[0x2a] = in_LR;
  puVar12[0x27] = in_f31;
  puVar12[0x26] = unaff_r31;
  fVar8 = GameCamera.posY - (moby->pos).y;
  fVar6 = GameCamera.posX - (moby->pos).x;
  fVar2 = (moby->rotation).x;
  fVar5 = GameCamera.posZ - (moby->pos).z;
  fVar7 = ABS(fVar5);
  *(float *)(puVar12 + 0x18) = fVar5;
  puVar12[0x25] = unaff_r30;
  piVar9 = (int *)moby->pVar;
  uVar24 = ZEXT48(piVar9);
  fVar5 = SQRT(fVar6 * fVar6 + fVar8 * fVar8);
  fVar3 = ABS(fVar5);
  *(float *)((int)puVar12 + 0xbc) = fVar5;
  *(float *)((int)puVar12 + 0xc4) = fVar3 - fVar7;
  dVar27 = 0.0;
  uVar21 = (ulonglong)(*(uint *)((int)puVar12 + 0xbc) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)((int)puVar12 + 0xc4) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)(puVar12 + 0x18) >> 0x1d) & 4;
  fVar5 = ABS(*(float *)((int)puVar12 + 0xbc));
  if (*(float *)((int)puVar12 + 0xc4) - 0.0 < 0.0) {
    fVar5 = fVar7;
  }
  fVar7 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar21 << 2));
  fVar4 = ABS(*(float *)(puVar12 + 0x18));
  if (*(float *)((int)puVar12 + 0xc4) - 0.0 < 0.0) {
    fVar4 = fVar3;
  }
  fVar3 = *(float *)(((uint)(uVar21 << 2) | 0x735900) + 4);
  puVar12[0x24] = unaff_r29;
  dVar26 = dVar27;
  if (0.0 < fVar5) {
    lVar16 = uVar14 - 0x130;
    lVar22 = uVar14 - 0x48;
    lVar20 = uVar14 - 0x58;
    lVar25 = 2;
    fVar5 = (fVar4 - fVar5) / (fVar4 + fVar5);
    fVar4 = fVar5 * fVar5;
    *(float *)((int)puVar12 + 0xf4) = fVar5;
    *(float *)((int)puVar12 + 0xec) = fVar5;
    *(float *)(puVar12 + 0x1e) = fVar5;
    *(float *)(puVar12 + 0x1d) = fVar5;
    fVar5 = fVar4 * fVar4;
    *(float *)((int)puVar12 + 0xec) = *(float *)((int)puVar12 + 0xec) * fVar4;
    *(float *)(puVar12 + 0x1e) = *(float *)(puVar12 + 0x1e) * fVar5;
    *(float *)((int)puVar12 + 0xf4) = *(float *)((int)puVar12 + 0xf4) * fVar5 * fVar4;
    do {
      *(float *)((int)lVar16 + 0xe8) = *(float *)((int)lVar16 + 0xd8) * fVar5 * fVar5;
      iVar18 = (int)lVar20;
      lVar20 = lVar20 + 8;
      lVar16 = lVar16 + 8;
      *(float *)((int)lVar22 + 4) = *(float *)(iVar18 + 4) * fVar5 * fVar5;
      lVar22 = lVar22 + 8;
      lVar25 = lVar25 + -1;
    } while (lVar25 != 0);
    lVar25 = 4;
    lVar22 = uVar14 - 0x58;
    pfVar23 = (float *)&DAT_007358e0;
    lVar16 = lVar17;
    lVar20 = lVar22;
    do {
      fVar5 = *pfVar23;
      fVar4 = pfVar23[1];
      pfVar23 = pfVar23 + 2;
      *(float *)((int)lVar16 + 0xe8) = *(float *)((int)lVar16 + 0xe8) * fVar5;
      lVar16 = lVar16 + 8;
      *(float *)((int)lVar20 + 4) = *(float *)((int)lVar20 + 4) * fVar4;
      lVar20 = lVar20 + 8;
      lVar25 = lVar25 + -1;
    } while (lVar25 != 0);
    lVar20 = 2;
    lVar16 = lVar17;
    do {
      iVar18 = (int)lVar16;
      iVar13 = (int)lVar22;
      lVar16 = lVar16 + 0x10;
      lVar22 = lVar22 + 0x10;
      dVar26 = (double)((float)(dVar26 + (double)*(float *)(iVar18 + 0xe8)) + *(float *)(iVar13 + 4)
                        + *(float *)(iVar13 + 8) + *(float *)(iVar13 + 0xc));
      lVar20 = lVar20 + -1;
    } while (lVar20 != 0);
    dVar26 = (double)((float)(dVar26 + 0.7853981852531433) * fVar7 + fVar3);
  }
  *(float *)(puVar12 + 0x16) = fVar6;
  *(float *)((int)puVar12 + 0xb4) = fVar8;
  *(float *)(puVar12 + 0x17) = ABS(fVar6) - ABS(fVar8);
  uVar10 = *(uint *)(puVar12 + 0x16);
  fVar5 = *(float *)(puVar12 + 0x16);
  (moby->rotation).y = (float)-dVar26;
  uVar21 = (ulonglong)(uVar10 >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar12 + 0x17) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar12 + 0xb4) >> 0x1d) & 4;
  fVar5 = ABS(fVar5);
  if (*(float *)(puVar12 + 0x17) - 0.0 < 0.0) {
    fVar5 = ABS(fVar8);
  }
  fVar8 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar21 << 2));
  fVar7 = ABS(*(float *)((int)puVar12 + 0xb4));
  if (*(float *)(puVar12 + 0x17) - 0.0 < 0.0) {
    fVar7 = ABS(fVar6);
  }
  fVar6 = *(float *)(((uint)(uVar21 << 2) | 0x735900) + 4);
  dVar26 = dVar27;
  if (0.0 < fVar5) {
    lVar16 = uVar14 - 0x130;
    lVar20 = uVar14 - 0x78;
    lVar22 = uVar14 - 0x68;
    lVar25 = 2;
    fVar5 = (fVar7 - fVar5) / (fVar7 + fVar5);
    fVar7 = fVar5 * fVar5;
    *(float *)((int)puVar12 + 0xd4) = fVar5;
    *(float *)((int)puVar12 + 0xcc) = fVar5;
    *(float *)(puVar12 + 0x1a) = fVar5;
    *(float *)(puVar12 + 0x19) = fVar5;
    fVar5 = fVar7 * fVar7;
    *(float *)((int)puVar12 + 0xcc) = *(float *)((int)puVar12 + 0xcc) * fVar7;
    *(float *)(puVar12 + 0x1a) = *(float *)(puVar12 + 0x1a) * fVar5;
    *(float *)((int)puVar12 + 0xd4) = *(float *)((int)puVar12 + 0xd4) * fVar5 * fVar7;
    do {
      *(float *)((int)lVar16 + 200) = *(float *)((int)lVar16 + 0xb8) * fVar5 * fVar5;
      iVar18 = (int)lVar20;
      lVar16 = lVar16 + 8;
      lVar20 = lVar20 + 8;
      *(float *)((int)lVar22 + 4) = *(float *)(iVar18 + 4) * fVar5 * fVar5;
      lVar22 = lVar22 + 8;
      lVar25 = lVar25 + -1;
    } while (lVar25 != 0);
    lVar25 = 4;
    lVar22 = uVar14 - 0x78;
    pfVar23 = (float *)&DAT_007358e0;
    lVar16 = lVar17;
    lVar20 = lVar22;
    do {
      fVar5 = *pfVar23;
      fVar7 = pfVar23[1];
      pfVar23 = pfVar23 + 2;
      *(float *)((int)lVar16 + 200) = *(float *)((int)lVar16 + 200) * fVar5;
      lVar16 = lVar16 + 8;
      *(float *)((int)lVar20 + 4) = *(float *)((int)lVar20 + 4) * fVar7;
      lVar20 = lVar20 + 8;
      lVar25 = lVar25 + -1;
    } while (lVar25 != 0);
    lVar16 = 2;
    do {
      iVar18 = (int)lVar17;
      lVar17 = lVar17 + 0x10;
      iVar13 = (int)lVar22;
      lVar22 = lVar22 + 0x10;
      dVar26 = (double)((float)(dVar26 + (double)*(float *)(iVar18 + 200)) + *(float *)(iVar13 + 4)
                        + *(float *)(iVar13 + 8) + *(float *)(iVar13 + 0xc));
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
    dVar26 = (double)((float)(dVar26 + 0.7853981852531433) * fVar8 + fVar6);
  }
  (moby->rotation).z = (float)dVar26;
  dVar26 = (double)fastfunc::FastWrapRot(fVar2,(float)piVar9[3]);
  (moby->rotation).x = (float)dVar26;
  bVar1 = moby->state;
  (moby->pos).x = (moby->pos).x + (float)piVar9[8];
  (moby->pos).y = (moby->pos).y + (float)piVar9[9];
  (moby->pos).z = (moby->pos).z + (float)piVar9[10];
  if (bVar1 != 0) {
    if (bVar1 < 2) {
      partupd::SpawnPart_14(DAT_007ab824,lVar15);
      fVar2 = (float)piVar9[8];
      fVar8 = (float)piVar9[10] * (float)piVar9[10] +
              fVar2 * fVar2 + (float)piVar9[9] * (float)piVar9[9];
      if ((double)SQRT(fVar8) == dVar27) {
        *(float *)(puVar12 + 0xe) = fVar2;
        *(int *)((int)puVar12 + 0x74) = piVar9[9];
        *(int *)(puVar12 + 0xf) = piVar9[10];
        iVar18 = piVar9[0xb];
        *(undefined4 *)(puVar12 + 0xf) = 0;
        *(undefined4 *)((int)puVar12 + 0x74) = 0;
        *(undefined4 *)(puVar12 + 0xe) = 0;
      }
      else {
        fVar6 = 1.0 / SQRT(fVar8);
        fVar6 = -(fVar8 * fVar6 * fVar6 - 1.0) * fVar6 * 0.5 + fVar6;
        fVar6 = -(fVar8 * fVar6 * fVar6 - 1.0) * fVar6 * 0.5 + fVar6;
        fVar6 = -(fVar8 * fVar6 * fVar6 - 1.0) * fVar6 * 0.5 + fVar6;
        *(float *)(puVar12 + 0xe) = fVar2 * fVar6;
        *(float *)((int)puVar12 + 0x74) = (float)piVar9[9] * fVar6;
        *(float *)(puVar12 + 0xf) = (float)piVar9[10] * fVar6;
        iVar18 = piVar9[0xb];
      }
      *(int *)((int)puVar12 + 0x7c) = iVar18;
      mobyutil::SetCollDamIn(dVar27,uVar14 - 0xc0,lVar15,0);
      iVar18 = collproc::CollMobySphere
                         ((double)DAT_007ab82c,lVar15 + 0x10,&DAT_007b0000,0x10,piVar9[6],
                          uVar14 - 0xc0);
      if (iVar18 == 0) {
        iVar18 = fastfunc::FastDecTimerS32(uVar24);
        if (iVar18 != 0) {
          auVar28 = ZEXT416(0xffffffff);
          auVar28 = auVar28 | auVar28 << 0x20 | auVar28 << 0x40 | auVar28 << 0x60;
          auVar29 = vectorShiftLeftIntegerWord(auVar28,auVar28);
          auVar28 = loadVectorLeftIndexed(0x10,0x299940);
          auVar28 = auVar28 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar30 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar28 = vectorMultiplyAddFloatingPoint
                              (auVar30,auVar28 | auVar28 << 0x20 | auVar28 << 0x40 | auVar28 << 0x60
                               ,auVar29);
          auVar28 = vectorConvertToSignedFixedPointWordSaturate(auVar28,0);
          auVar28 = auVar28 >> 0x60 & (undefined1  [16])0xffffffff;
          uVar11 = storeVectorElementWordIndexed
                             (auVar28 | auVar28 << 0x20 | auVar28 << 0x40 | auVar28 << 0x60,0,uVar24
                             );
          *(undefined4 *)((uint)piVar9 & 0xfffffffc) = uVar11;
          moby->state = '\x02';
          if (piVar9[4] != 0) {
            piVar9[4] = 0;
          }
        }
      }
      else {
        if (CollOutput.pMoby != (MobyInstance *)0x0) {
          mobyutil::CollDamageMobyDirect
                    (1.0,CollOutput.pMoby,moby,0x10001,0x10000,&CollOutput.ip.x,
                     (float *)(puVar12 + 0xe));
        }
        mobyupdate_helpers::M156_00298e30(lVar15);
        mobyfunc::DeleteMoby(moby);
      }
    }
    else if (bVar1 < 3) {
      iVar18 = fastfunc::FastDecTimerS32(uVar24);
      if (iVar18 == 0) {
        puVar12[0x21] = (longlong)*piVar9;
        sVar19 = fastfunc::FastDoubleToInt
                           ((double)((float)(longlong)puVar12[0x21] *
                                    (127.0 / (float)(longlong)(animationSpeed * 30.5))));
        moby->alpha = sVar19;
      }
      else {
        mobyfunc::DeleteMoby(moby);
      }
    }
  }
  return;
}



//==== 00299fdc  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1560_00299fdc(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1560_00299fdc(void)

{
  DAT_007ab87c = 0x10000;
  return;
}



//==== 00299ff0  ns=mobyupdate_unsorted  size=0xe8
// sig: undefined UpdateMoby_1560(MobyInstance * moby)
// callers(0): 
// callees(1): 00119600 mobyutil::MB_SpawnSparks_oClass2EE

/* Moby 1560 */

void mobyupdate_unsorted::UpdateMoby_1560(MobyInstance *moby)

{
  longlong lVar1;
  
  if (moby->state == 0) {
    moby->updateDistance = -1;
    moby->state = '\x01';
  }
  else if (((moby->state < 2) && (g_gameMode == GAME_MODE_SCENE)) &&
          ((update::g_SceneId == 2 || update::g_SceneId == 1 ||
           (((update::g_SceneId == 3 || (update::g_SceneId == 4)) || (update::g_SceneId == 6)))))) {
    lVar1 = 0;
    if (update::g_SceneId == 1) {
      lVar1 = 4;
    }
    else if (((update::g_SceneId == 2) || (update::g_SceneId == 3)) || (update::g_SceneId == 4)) {
      lVar1 = 2;
    }
    else if (update::g_SceneId == 6) {
      lVar1 = 1;
    }
    mobyutil::MB_SpawnSparks_oClass2EE(*(undefined4 *)((int)&DAT_0095cec8 + (int)(lVar1 << 2)));
  }
  return;
}



//==== 0029a0d8  ns=mobyupdate_unsorted  size=0xd8
// sig: undefined UpdateMoby_1561(MobyInstance * moby)
// callers(0): 
// callees(2): 00110b70 mobyutil::MB_IsPntInCuboid; 0011b728 mobyutil::MB_UnlockSkillPoint

/* Moby 1561 */

void mobyupdate_unsorted::UpdateMoby_1561(MobyInstance *moby)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)moby->pVar;
  iVar2 = piVar1[2];
  if (iVar2 < 1) {
    if (((-1 < iVar2) &&
        (iVar2 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)*piVar1), iVar2 != 0)) &&
       (hero::g_heroStateType == 0xf)) {
      piVar1[2] = 1;
    }
  }
  else if (iVar2 < 2) {
    if (g_heroState == GRINDRAIL_DAMAGE) {
      piVar1[2] = 0;
    }
    else {
      iVar2 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)piVar1[1]);
      if (iVar2 != 0) {
        mobyutil::MB_UnlockSkillPoint(0x19);
      }
    }
  }
  return;
}



//==== 0029a1b0  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1562_0029a1b0(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1562_0029a1b0(void)

{
  DAT_007ab8ec = 0x10000;
  return;
}



//==== 0029a1c4  ns=mobyupdate_unsorted  size=0xa0
// sig: undefined UpdateMoby_1562(MobyInstance * moby)
// callers(0): 
// callees(1): 00119600 mobyutil::MB_SpawnSparks_oClass2EE

/* Moby 1562 */

void mobyupdate_unsorted::UpdateMoby_1562(MobyInstance *moby)

{
  longlong lVar1;
  
  if (moby->state == 0) {
    moby->updateDistance = -1;
    moby->state = '\x01';
  }
  else if ((moby->state < 2) && (g_gameMode == GAME_MODE_SCENE)) {
    if ((update::g_SceneId == 0) || (update::g_SceneId == 2)) {
      lVar1 = 0;
      if ((update::g_SceneId == 0) || (update::g_SceneId == 2)) {
        lVar1 = 2;
      }
      mobyutil::MB_SpawnSparks_oClass2EE(*(undefined4 *)(((uint)(lVar1 << 2) | 0x95cd50) + 0x178));
    }
  }
  return;
}



//==== 0029a288  ns=mobyupdate_helpers  size=0x290
// sig: undefined M1563_0029a288(void)
// callers(1): 0029a5a8 mobyupdate_unsorted::UpdateMoby_1563
// callees(3): 000fc620 mobyutil::MB_randInt; 00126f50 partupd::SpawnPart_23; 00502758 fastfunc::FastDoubleToInt
// strings: 0029a270: '?fffAx'

void mobyupdate_helpers::M1563_0029a288(undefined8 param_1,undefined8 param_2)

{
  undefined2 uVar1;
  undefined8 uVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 local_80 [16];
  undefined1 local_70 [32];
  
  iVar5 = 0;
  iVar7 = 0;
  uVar9 = 0;
  uVar10 = 0x3ff0000000000000;
  uVar8 = 0x3fecccccc0000000;
  auVar14 = loadVectorLeftIndexed(0xc,0x29a268);
  uVar11 = 0x4010000000000000;
  auVar14 = auVar14 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar14 = auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60;
  do {
    mobyutil::MB_randInt(0x10);
    mobyutil::MB_randInt(2);
    uVar2 = partupd::SpawnPart_23(uVar9,uVar10,uVar8,param_1,local_80);
    iVar6 = (int)uVar2;
    if (iVar6 != 0) {
      auVar12 = ZEXT416(0xffffffff);
      auVar12 = auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60;
      auVar12 = vectorShiftLeftIntegerWord(auVar12,auVar12);
      auVar13 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar12 = vectorMultiplyAddFloatingPoint(auVar13,auVar14,auVar12);
      auVar12 = vectorConvertToSignedFixedPointWordSaturate(auVar12,0);
      auVar12 = vectorSplatHalfWord(auVar12,1);
      uVar1 = storeVectorElementHalfWordIndexed(auVar12,10,uVar2);
      *(undefined2 *)(iVar6 + 10) = uVar1;
      cVar3 = fastfunc::FastDoubleToInt(uVar11);
      *(char *)(iVar6 + 9) = cVar3 + '@';
      *(undefined4 *)(iVar6 + 0x24) = 2;
      *(undefined1 *)(iVar6 + 0x2a) = 0x7f;
      *(char *)(iVar6 + 0x2b) = (char)*(undefined2 *)(iVar6 + 10);
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < 2);
  uVar8 = 0x3fef0a3d80000000;
  auVar14 = loadVectorLeftIndexed(0x18,0x29a268);
  auVar14 = auVar14 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar14 = auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60;
  do {
    uVar2 = partupd::SpawnPart_23(uVar9,uVar10,uVar8,param_2,local_70);
    iVar5 = (int)uVar2;
    if (iVar5 != 0) {
      cVar3 = fastfunc::FastDoubleToInt(uVar11);
      auVar12 = ZEXT416(0xffffffff);
      auVar12 = auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60;
      auVar12 = vectorShiftLeftIntegerWord(auVar12,auVar12);
      *(char *)(iVar5 + 9) = cVar3 + '@';
      auVar13 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar12 = vectorMultiplyAddFloatingPoint(auVar13,auVar14,auVar12);
      auVar12 = vectorConvertToSignedFixedPointWordSaturate(auVar12,0);
      auVar12 = vectorSplatHalfWord(auVar12,1);
      uVar1 = storeVectorElementHalfWordIndexed(auVar12,10,uVar2);
      *(undefined2 *)(iVar5 + 10) = uVar1;
      uVar4 = mobyutil::MB_randInt(0xff);
      *(undefined1 *)(iVar5 + 8) = uVar4;
      *(undefined4 *)(iVar5 + 0x24) = 2;
      *(undefined1 *)(iVar5 + 0x2a) = 0x7f;
      *(char *)(iVar5 + 0x2b) = (char)*(undefined2 *)(iVar5 + 10);
    }
    iVar7 = iVar7 + 1;
  } while (iVar7 < 3);
  return;
}



//==== 0029a5a8  ns=mobyupdate_unsorted  size=0x1824
// sig: undefined UpdateMoby_1563(MobyInstance * moby)
// callers(0): 
// callees(11): 0006d720 RegisterFuncForMoby; 000f1114 mobyfunc::GetBonePosition; 000fc620 mobyutil::MB_randInt; 0010e030 mobyutil::MB_genericExplosion; 001113e0 mobyutil::MB_RotateQuatAxisAngle; 0011a1a0 mobyutil::MB_SpawnSparksPair; 00126f50 partupd::SpawnPart_23; 0029a288 mobyupdate_helpers::M1563_0029a288; 002c5f88 mobyupdate_helpers::M185_002c5f88; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt

/* Moby 1563 */

void mobyupdate_unsorted::UpdateMoby_1563(MobyInstance *moby)

{
  float fVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  MobyInstance *pMVar6;
  float *pfVar7;
  float fVar8;
  undefined2 uVar9;
  ulonglong *puVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  int iVar16;
  undefined4 uVar17;
  MobyInstance *pMVar18;
  ulonglong uVar19;
  longlong lVar20;
  undefined8 uVar21;
  char cVar22;
  longlong lVar23;
  ulonglong uVar24;
  float *pfVar26;
  longlong lVar25;
  ulonglong unaff_r22;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  undefined4 *puVar27;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  longlong lVar28;
  ulonglong unaff_r29;
  int iVar29;
  ulonglong unaff_r30;
  int iVar30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar31;
  double dVar32;
  double dVar33;
  ulonglong in_f27;
  ulonglong in_f28;
  double dVar34;
  ulonglong in_f29;
  double dVar35;
  undefined8 uVar36;
  ulonglong in_f30;
  double dVar37;
  undefined8 uVar38;
  ulonglong in_f31;
  double dVar39;
  undefined8 uVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  float local_110 [68];
  
  uVar19 = ZEXT48(&stack0x00000000);
  lVar20 = uVar19 - 0x300;
  puVar10 = (ulonglong *)lVar20;
  *puVar10 = uVar19;
  puVar10[0x62] = in_LR;
  puVar10[0x5b] = in_f27;
  puVar10[0x5c] = in_f28;
  puVar10[0x5d] = in_f29;
  puVar10[0x5e] = in_f30;
  puVar10[0x5f] = in_f31;
  puVar10[0x5a] = unaff_r31;
  puVar10[0x55] = unaff_r26;
  bVar2 = moby->state;
  puVar10[0x59] = unaff_r30;
  puVar10[0x58] = unaff_r29;
  puVar10[0x57] = unaff_r28;
  puVar10[0x56] = unaff_r27;
  puVar10[0x54] = unaff_r25;
  puVar10[0x53] = unaff_r24;
  puVar10[0x52] = unaff_r23;
  puVar10[0x51] = unaff_r22;
  iVar30 = boot::g_SpaceSceneFrame;
  fVar1 = animationSpeed;
  if (bVar2 == 0) {
    DAT_007ab918 = 0x163;
    DAT_007ab91c = 0x16d;
    DAT_007ab940 = 200;
    DAT_007ab93c = 0x3c;
    DAT_007ab944 = 0xbe;
    DAT_007ab948 = 0x16d;
    moby->updateDistance = -1;
    moby->state = '\x01';
  }
  else if ((bVar2 < 2) && (g_gameMode == GAME_MODE_SCENE)) {
    if (update::g_SceneId == 4) {
      pMVar6 = DAT_00fadb88;
      pMVar18 = MobyUpdateChainStart;
      if (boot::g_SpaceSceneFrame == 1) {
        for (; (pMVar6 = DAT_00fadb88, pMVar18 != (MobyInstance *)0x0 &&
               (pMVar6 = pMVar18, pMVar18->oClass != 0x59b));
            pMVar18 = (MobyInstance *)pMVar18->pChain) {
        }
      }
      DAT_00fadb88 = pMVar6;
      puVar10[0x4c] = (longlong)(int)(animationSpeed * 500.5);
      if ((*(int *)((int)puVar10 + 0x264) <= iVar30) &&
         (puVar10[0x4c] = (longlong)(int)(fVar1 * 860.5), iVar30 <= *(int *)((int)puVar10 + 0x264)))
      {
        *(undefined4 *)((int)puVar10 + 0x20c) = 0x49927c00;
        *(undefined4 *)(puVar10 + 0x43) = 0x48c35000;
        *(undefined4 *)((int)puVar10 + 0x21c) = 0x48435000;
        *(undefined4 *)(puVar10 + 0x42) = 0x48f42400;
        iVar30 = 3;
        *(undefined4 *)((int)puVar10 + 0x214) = 0x49435000;
        lVar28 = uVar19 - 0x2f4;
        dVar39 = 645.5;
        puVar27 = &DAT_0095cd5c;
        dVar37 = 736.5;
        dVar35 = 730.5;
        dVar34 = 0.4000000059604645;
        do {
          if (puVar27[0x5e] != 0) {
            mobyfunc::GetBonePosition(puVar27[0x5e],0,uVar19 - 0x240);
            iVar29 = boot::g_SpaceSceneFrame;
            dVar32 = (double)*(float *)((int)lVar28 + 0x200);
            dVar33 = (double)animationSpeed;
            if (((iVar30 != 3) ||
                (puVar10[0x4c] = (longlong)(int)(dVar33 * dVar39),
                iVar29 < *(int *)((int)puVar10 + 0x264))) ||
               (puVar10[0x4c] = (longlong)(int)(dVar33 * dVar37),
               *(int *)((int)puVar10 + 0x264) < iVar29)) {
              if (((iVar30 == 5) &&
                  (puVar10[0x4c] = (longlong)(int)(dVar33 * dVar39),
                  *(int *)((int)puVar10 + 0x264) <= iVar29)) &&
                 (puVar10[0x4c] = (longlong)(int)(dVar33 * dVar35),
                 iVar29 <= *(int *)((int)puVar10 + 0x264))) {
                dVar32 = 300000.0;
              }
              mobyutil::MB_SpawnSparksPair
                        (dVar32,(double)(float)(dVar32 * dVar34),uVar19 - 0x240,uVar19 - 0x240,
                         &DAT_00a15d30);
            }
          }
          iVar30 = iVar30 + 1;
          puVar27 = puVar27 + 1;
          lVar28 = lVar28 + 4;
        } while (iVar30 < 8);
      }
      iVar30 = boot::g_SpaceSceneFrame;
      fVar1 = animationSpeed;
      puVar10[0x4c] = (longlong)(int)(animationSpeed * 706.5);
      iVar29 = DAT_0095cee4;
      uVar40 = 0x4020000000000000;
      uVar36 = 0x403e000000000000;
      uVar38 = 0x4022000000000000;
      if ((iVar30 == *(int *)((int)puVar10 + 0x264)) && (DAT_0095cee4 != 0)) {
        mobyfunc::GetBonePosition(DAT_0095cee4,0,uVar19 - 0x230);
        *(undefined4 *)((int)puVar10 + 0xec) = 0;
        *(undefined4 *)((int)puVar10 + 0xe4) = 0;
        *(undefined4 *)(puVar10 + 0x1c) = 0;
        *(undefined4 *)(puVar10 + 0x1d) = 0x3f800000;
        puVar10[0x12] = 0xffffffffffffffff;
        puVar10[0x14] = 0;
        puVar10[0x15] = 0xf;
        puVar10[0x16] = 0xffffffffffffffff;
        puVar10[0x17] = 0;
        mobyutil::MB_genericExplosion
                  (0,0,uVar40,0x4010000000000000,uVar38,0x3ff0000000000000,uVar36,iVar29,
                   uVar19 - 0x220,uVar19 - 0x230,0,0xffffffffffffffff,0x32,0x19,0x19);
        fVar1 = animationSpeed;
        iVar30 = boot::g_SpaceSceneFrame;
      }
      puVar10[0x4c] = (longlong)(int)(fVar1 * 710.5);
      iVar29 = DAT_0095ced8;
      if ((iVar30 == *(int *)((int)puVar10 + 0x264)) && (DAT_0095ced8 != 0)) {
        mobyfunc::GetBonePosition(DAT_0095ced8,0,uVar19 - 0x210);
        *(undefined4 *)((int)puVar10 + 0x10c) = 0;
        *(undefined4 *)((int)puVar10 + 0x104) = 0;
        *(undefined4 *)(puVar10 + 0x20) = 0;
        *(undefined4 *)(puVar10 + 0x21) = 0x3f800000;
        puVar10[0x12] = 0xffffffffffffffff;
        puVar10[0x14] = 0;
        puVar10[0x15] = 0xf;
        puVar10[0x16] = 0xffffffffffffffff;
        puVar10[0x17] = 0;
        mobyutil::MB_genericExplosion
                  (0,0,uVar40,0x4010000000000000,uVar38,0x3ff0000000000000,uVar36,iVar29,
                   uVar19 - 0x200,uVar19 - 0x210,0,0xffffffffffffffff,0x32,0x19,0x19);
        fVar1 = animationSpeed;
        iVar30 = boot::g_SpaceSceneFrame;
      }
      puVar10[0x4c] = (longlong)(int)(fVar1 * 720.5);
      iVar29 = DAT_0095cee0;
      if ((iVar30 == *(int *)((int)puVar10 + 0x264)) && (DAT_0095cee0 != 0)) {
        mobyfunc::GetBonePosition(DAT_0095cee0,0,uVar19 - 0x1f0);
        *(undefined4 *)((int)puVar10 + 300) = 0;
        *(undefined4 *)((int)puVar10 + 0x124) = 0;
        *(undefined4 *)(puVar10 + 0x24) = 0;
        *(undefined4 *)(puVar10 + 0x25) = 0x3f800000;
        puVar10[0x12] = 0xffffffffffffffff;
        puVar10[0x14] = 0;
        puVar10[0x15] = 0xf;
        puVar10[0x16] = 0xffffffffffffffff;
        puVar10[0x17] = 0;
        mobyutil::MB_genericExplosion
                  (0,0,uVar40,0x4010000000000000,uVar38,0x3ff0000000000000,uVar36,iVar29,
                   uVar19 - 0x1e0,uVar19 - 0x1f0,0,0xffffffffffffffff,0x32,0x19,0x19);
        fVar1 = animationSpeed;
        iVar30 = boot::g_SpaceSceneFrame;
      }
      puVar10[0x4c] = (longlong)(int)(fVar1 * 730.5);
      iVar29 = DAT_0095cedc;
      if ((iVar30 == *(int *)((int)puVar10 + 0x264)) && (DAT_0095cedc != 0)) {
        mobyfunc::GetBonePosition(DAT_0095cedc,0,uVar19 - 0x1d0);
        *(undefined4 *)((int)puVar10 + 0x14c) = 0;
        *(undefined4 *)((int)puVar10 + 0x144) = 0;
        *(undefined4 *)(puVar10 + 0x28) = 0;
        *(undefined4 *)(puVar10 + 0x29) = 0x3f800000;
        puVar10[0x12] = 0xffffffffffffffff;
        puVar10[0x14] = 0;
        puVar10[0x15] = 0xf;
        puVar10[0x16] = 0xffffffffffffffff;
        puVar10[0x17] = 0;
        mobyutil::MB_genericExplosion
                  (0,0,uVar40,0x4010000000000000,uVar38,0x3ff0000000000000,uVar36,iVar29,
                   uVar19 - 0x1c0,uVar19 - 0x1d0,0,0xffffffffffffffff,0x32,0x19,0x19);
        fVar1 = animationSpeed;
        iVar30 = boot::g_SpaceSceneFrame;
      }
      puVar10[0x4c] = (longlong)(int)(fVar1 * 748.5);
      if (iVar30 == *(int *)((int)puVar10 + 0x264)) {
        *(undefined4 *)(puVar10 + 0x2a) = 0x441ea396;
        *(undefined4 *)((int)puVar10 + 0x154) = 0x43e314dd;
        *(undefined4 *)(puVar10 + 0x2b) = 0x42cdff7d;
        *(undefined4 *)((int)puVar10 + 0x15c) = 0x3f800000;
        *(undefined4 *)((int)puVar10 + 0x16c) = 0;
        *(undefined4 *)((int)puVar10 + 0x164) = 0;
        *(undefined4 *)(puVar10 + 0x2c) = 0;
        *(undefined4 *)(puVar10 + 0x2d) = 0x3f800000;
        puVar10[0x12] = 0xffffffffffffffff;
        puVar10[0x14] = 0;
        puVar10[0x15] = 0x3c;
        puVar10[0x16] = 0xffffffffffffffff;
        puVar10[0x17] = 0;
        mobyutil::MB_genericExplosion
                  (0,0,0x4028000000000000,0x4018000000000000,uVar38,0x3ff0000000000000,
                   0x404e000000000000,moby,uVar19 - 0x1a0,uVar19 - 0x1b0,0x3c,0,300,200,200);
        fVar1 = animationSpeed;
        iVar30 = boot::g_SpaceSceneFrame;
      }
      puVar10[0x4c] = (longlong)DAT_007ab93c;
      dVar34 = 0.5;
      puVar10[0x4c] = (longlong)(int)(fVar1 * (float)((double)(longlong)puVar10[0x4c] + 0.5));
      if (*(int *)((int)puVar10 + 0x264) <= iVar30) {
        puVar10[0x4c] = (longlong)DAT_007ab940;
        puVar10[0x4c] = (longlong)(int)(fVar1 * (float)((double)(longlong)puVar10[0x4c] + 0.5));
        if (iVar30 < *(int *)((int)puVar10 + 0x264)) {
          dVar35 = (double)fastfunc::FastIntToDouble(iVar30 - *(int *)((int)puVar10 + 0x264));
          puVar10[0x4c] = (longlong)(DAT_007ab940 - DAT_007ab93c);
          puVar10[0x4c] =
               (longlong)(int)(animationSpeed * (float)((double)(longlong)puVar10[0x4c] + dVar34));
          dVar37 = (double)fastfunc::FastIntToDouble(*(undefined4 *)((int)puVar10 + 0x264));
          DAT_00fadb84 = fastfunc::FastDoubleToInt((double)((float)(dVar35 / dVar37) * 255.0));
          RegisterFuncForMoby(&PTR_M1564_0029c6c8_0070aab0,DAT_00fadb88);
          fVar1 = animationSpeed;
          iVar30 = boot::g_SpaceSceneFrame;
        }
      }
      puVar10[0x4c] = (longlong)DAT_007ab944;
      puVar10[0x4c] = (longlong)(int)(fVar1 * (float)((double)(longlong)puVar10[0x4c] + dVar34));
      if (*(int *)((int)puVar10 + 0x264) <= iVar30) {
        puVar10[0x4c] = (longlong)DAT_007ab948;
        puVar10[0x4c] = (longlong)(int)(fVar1 * (float)((double)(longlong)puVar10[0x4c] + dVar34));
        if (iVar30 < *(int *)((int)puVar10 + 0x264)) {
          dVar35 = (double)fastfunc::FastIntToDouble(iVar30 - *(int *)((int)puVar10 + 0x264));
          puVar10[0x4c] = (longlong)(DAT_007ab948 - DAT_007ab944);
          puVar10[0x4c] =
               (longlong)(int)(animationSpeed * (float)((double)(longlong)puVar10[0x4c] + dVar34));
          dVar37 = (double)fastfunc::FastIntToDouble(*(undefined4 *)((int)puVar10 + 0x264));
          DAT_00fadb8c = (float)(dVar35 / dVar37) * 200.0 + 0.25;
          RegisterFuncForMoby(&PTR_M1564_0029cc78_0070aab8,DAT_00fadb88);
          fVar1 = animationSpeed;
          iVar30 = boot::g_SpaceSceneFrame;
        }
      }
      puVar10[0x4c] = (longlong)DAT_007ab918;
      puVar10[0x4c] = (longlong)(int)(fVar1 * (float)((double)(longlong)puVar10[0x4c] + dVar34));
      if (*(int *)((int)puVar10 + 0x264) <= iVar30) {
        puVar10[0x4c] = (longlong)DAT_007ab920;
        puVar10[0x4c] = (longlong)(int)(fVar1 * (float)((double)(longlong)puVar10[0x4c] + dVar34));
        if (iVar30 < *(int *)((int)puVar10 + 0x264)) {
          RegisterFuncForMoby(&PTR_M1564_0029bde8_0070aaa0,DAT_0095cec8);
          puVar10[0x4c] = (longlong)DAT_007ab91c;
          iVar30 = boot::g_SpaceSceneFrame;
          fVar1 = animationSpeed;
          puVar10[0x4c] =
               (longlong)(int)(animationSpeed * (float)((double)(longlong)puVar10[0x4c] + dVar34));
          if (iVar30 < *(int *)((int)puVar10 + 0x264)) {
            puVar10[0x4c] = (longlong)DAT_007ab918;
            puVar10[0x4c] =
                 (longlong)(int)(fVar1 * (float)((double)(longlong)puVar10[0x4c] + dVar34));
            dVar35 = (double)fastfunc::FastIntToDouble(iVar30 - *(int *)((int)puVar10 + 0x264));
            puVar10[0x4c] = (longlong)(DAT_007ab91c - DAT_007ab918);
            puVar10[0x4c] =
                 (longlong)(int)(animationSpeed * (float)((double)(longlong)puVar10[0x4c] + dVar34))
            ;
            dVar34 = (double)fastfunc::FastIntToDouble(*(undefined4 *)((int)puVar10 + 0x264));
            DAT_00fadb80 = (DAT_007ab914 - DAT_007ab910) * (float)(dVar35 / dVar34) + DAT_007ab910;
          }
          else {
            DAT_00fadb80 = 10.0;
          }
        }
      }
    }
    iVar30 = boot::g_SpaceSceneFrame;
    if (update::g_SceneId == 7) {
      pMVar18 = DAT_00fadb88;
      if (boot::g_SpaceSceneFrame == 1) {
        DAT_007ab93c = DAT_007ab924;
        DAT_007ab940 = DAT_007ab928;
        DAT_007ab944 = DAT_007ab92c;
        DAT_007ab948 = DAT_007ab930;
        DAT_007ab918 = DAT_007ab934;
        DAT_007ab91c = DAT_007ab938;
        for (pMVar6 = MobyUpdateChainStart;
            (pMVar18 = DAT_00fadb88, pMVar6 != (MobyInstance *)0x0 &&
            (pMVar18 = pMVar6, pMVar6->oClass != 0x59b)); pMVar6 = (MobyInstance *)pMVar6->pChain) {
        }
      }
      DAT_00fadb88 = pMVar18;
      iVar29 = DAT_007ab93c;
      puVar10[0x4c] = (longlong)DAT_007ab93c;
      fVar1 = animationSpeed;
      dVar34 = 0.5;
      puVar10[0x4c] =
           (longlong)(int)(animationSpeed * (float)((double)(longlong)puVar10[0x4c] + 0.5));
      if (*(int *)((int)puVar10 + 0x264) <= iVar30) {
        puVar10[0x4c] = (longlong)DAT_007ab940;
        puVar10[0x4c] = (longlong)(int)(fVar1 * (float)((double)(longlong)puVar10[0x4c] + 0.5));
        if (iVar30 < *(int *)((int)puVar10 + 0x264)) {
          dVar35 = (double)fastfunc::FastIntToDouble(iVar30 - iVar29);
          dVar37 = (double)fastfunc::FastIntToDouble(DAT_007ab940 - DAT_007ab93c);
          DAT_00fadb84 = fastfunc::FastDoubleToInt((double)((float)(dVar35 / dVar37) * 255.0));
          RegisterFuncForMoby(&PTR_M1564_0029c6c8_0070aab0,DAT_00fadb88);
          iVar30 = boot::g_SpaceSceneFrame;
          fVar1 = animationSpeed;
        }
      }
      iVar29 = DAT_007ab944;
      puVar10[0x4c] = (longlong)DAT_007ab944;
      puVar10[0x4c] = (longlong)(int)(fVar1 * (float)((double)(longlong)puVar10[0x4c] + dVar34));
      if (*(int *)((int)puVar10 + 0x264) <= iVar30) {
        puVar10[0x4c] = (longlong)DAT_007ab948;
        puVar10[0x4c] = (longlong)(int)(fVar1 * (float)((double)(longlong)puVar10[0x4c] + dVar34));
        if (iVar30 < *(int *)((int)puVar10 + 0x264)) {
          dVar35 = (double)fastfunc::FastIntToDouble(iVar30 - iVar29);
          dVar37 = (double)fastfunc::FastIntToDouble(DAT_007ab948 - DAT_007ab944);
          DAT_00fadb8c = (float)(dVar35 / dVar37) * 200.0 + 0.25;
          RegisterFuncForMoby(&PTR_M1564_0029cc78_0070aab8,DAT_00fadb88);
          iVar30 = boot::g_SpaceSceneFrame;
          fVar1 = animationSpeed;
        }
      }
      puVar10[0x4c] = (longlong)DAT_007ab918;
      puVar10[0x4c] = (longlong)(int)(fVar1 * (float)((double)(longlong)puVar10[0x4c] + dVar34));
      if (*(int *)((int)puVar10 + 0x264) <= iVar30) {
        puVar10[0x4c] = (longlong)DAT_007ab920;
        puVar10[0x4c] = (longlong)(int)(fVar1 * (float)((double)(longlong)puVar10[0x4c] + dVar34));
        if (iVar30 < *(int *)((int)puVar10 + 0x264)) {
          RegisterFuncForMoby(&PTR_M1564_0029bde8_0070aaa0,DAT_0095cec8);
          if (boot::g_SpaceSceneFrame < DAT_007ab91c) {
            dVar34 = (double)fastfunc::FastIntToDouble(boot::g_SpaceSceneFrame - DAT_007ab918);
            dVar35 = (double)fastfunc::FastIntToDouble(DAT_007ab91c - DAT_007ab918);
            DAT_00fadb80 = (DAT_007ab914 - DAT_007ab910) * (float)(dVar34 / dVar35) + DAT_007ab910;
          }
          else {
            DAT_00fadb80 = 10.0;
          }
        }
      }
    }
    if ((update::g_SceneId == 1) && (DAT_0095ced4 != (MobyInstance *)0x0)) {
      RegisterFuncForMoby(&PTR_M1564_0029c460_0070aaa8,DAT_0095ced4);
    }
    iVar30 = boot::g_SpaceSceneFrame;
    fVar1 = animationSpeed;
    if ((((update::g_SceneId == 5) &&
         (puVar10[0x4c] = (longlong)(int)(animationSpeed * 138.5),
         *(int *)((int)puVar10 + 0x264) <= iVar30)) &&
        (puVar10[0x4c] = (longlong)(int)(fVar1 * 264.5), pMVar18 = DAT_0095ced0,
        iVar30 <= *(int *)((int)puVar10 + 0x264))) && (DAT_0095ced0 != (MobyInstance *)0x0)) {
      puVar10[0x4c] = (longlong)(int)(fVar1 * 140.5);
      if (*(int *)((int)puVar10 + 0x264) < iVar30) {
        mobyfunc::GetBonePosition(pMVar18,0,uVar19 - 400);
        mobyfunc::GetBonePosition(pMVar18,2,uVar19 - 0x180);
        dVar35 = 0.0833333358168602;
        iVar30 = 0;
        dVar34 = 0.4000000059604645;
        do {
          dVar37 = (double)fastfunc::FastIntToDouble(iVar30);
          uVar17 = DAT_00fadbac;
          fVar1 = (float)(dVar37 * dVar35);
          fVar3 = DAT_00fadb90 - *(float *)(puVar10 + 0x2e);
          fVar12 = DAT_00fadb94 - *(float *)((int)puVar10 + 0x174);
          fVar11 = DAT_00fadb98 - *(float *)(puVar10 + 0x2f);
          fVar5 = DAT_00fadba0 - *(float *)(puVar10 + 0x30);
          fVar4 = DAT_00fadba4 - *(float *)((int)puVar10 + 0x184);
          fVar8 = DAT_00fadba8 - *(float *)(puVar10 + 0x31);
          *(undefined4 *)((int)puVar10 + 0x19c) = DAT_00fadb9c;
          *(float *)(puVar10 + 0x32) = fVar1 * fVar3 + *(float *)(puVar10 + 0x2e);
          *(float *)((int)puVar10 + 0x194) = fVar1 * fVar12 + *(float *)((int)puVar10 + 0x174);
          *(float *)(puVar10 + 0x33) = fVar1 * fVar11 + *(float *)(puVar10 + 0x2f);
          dVar37 = (double)DAT_007ab950;
          *(undefined4 *)((int)puVar10 + 0x1ac) = uVar17;
          *(float *)(puVar10 + 0x34) = fVar1 * fVar5 + *(float *)(puVar10 + 0x30);
          *(float *)((int)puVar10 + 0x1a4) = fVar1 * fVar4 + *(float *)((int)puVar10 + 0x184);
          *(float *)(puVar10 + 0x35) = fVar1 * fVar8 + *(float *)(puVar10 + 0x31);
          mobyupdate_helpers::M1563_0029a288
                    (dVar37,(double)(float)(dVar37 * dVar34),uVar19 - 0x170,uVar19 - 0x170,
                     &DAT_00a15d30);
          mobyupdate_helpers::M1563_0029a288
                    ((double)DAT_007ab950,(double)(float)((double)DAT_007ab950 * dVar34),
                     uVar19 - 0x160,uVar19 - 0x160,&DAT_00a15d30);
          iVar30 = iVar30 + 1;
        } while (iVar30 < 0xc);
        DAT_00fadb90 = *(float *)(puVar10 + 0x2e);
        DAT_00fadb94 = *(float *)((int)puVar10 + 0x174);
        DAT_00fadb98 = *(float *)(puVar10 + 0x2f);
        DAT_00fadb9c = *(undefined4 *)((int)puVar10 + 0x17c);
        DAT_00fadba0 = *(float *)(puVar10 + 0x30);
        DAT_00fadba4 = *(float *)((int)puVar10 + 0x184);
        DAT_00fadba8 = *(float *)(puVar10 + 0x31);
        DAT_00fadbac = *(undefined4 *)((int)puVar10 + 0x18c);
      }
      else {
        mobyfunc::GetBonePosition(pMVar18,0,&DAT_00fadb90);
        mobyfunc::GetBonePosition(pMVar18,2,&DAT_00fadba0);
      }
    }
    iVar29 = boot::g_SpaceSceneFrame;
    iVar30 = update::g_SceneId;
    fVar1 = animationSpeed;
    if (((update::g_SceneId == 1) &&
        (puVar10[0x4c] = (longlong)(int)(animationSpeed * 446.5),
        *(int *)((int)puVar10 + 0x264) <= iVar29)) &&
       ((puVar10[0x4c] = (longlong)(int)(fVar1 * 502.5), iVar16 = DAT_0095ced8,
        iVar29 < *(int *)((int)puVar10 + 0x264) && (DAT_0095ced8 != 0)))) {
      pfVar7 = (float *)moby->pVar;
      pfVar7[4] = 0.0;
      mobyfunc::GetBonePosition(iVar16,3,uVar19 - 0x150);
      mobyfunc::GetBonePosition(iVar16,10,uVar19 - 0x140);
      fVar1 = *(float *)(puVar10 + 0x38);
      fVar8 = *(float *)((int)puVar10 + 0x1c4) - *(float *)((int)puVar10 + 0x1b4);
      fVar4 = fVar1 - *(float *)(puVar10 + 0x36);
      fVar5 = *(float *)(puVar10 + 0x39) - *(float *)(puVar10 + 0x37);
      fVar15 = 0.0;
      fVar3 = *(float *)((int)puVar10 + 0x1cc);
      fVar14 = fVar5 * fVar5 + fVar4 * fVar4 + fVar8 * fVar8;
      fVar13 = fVar15;
      fVar11 = fVar15;
      fVar12 = fVar15;
      if (SQRT(fVar14) != 0.0) {
        fVar13 = 1.0 / SQRT(fVar14);
        fVar13 = -(fVar14 * fVar13 * fVar13 - 1.0) * fVar13 * 0.5 + fVar13;
        fVar13 = -(fVar14 * fVar13 * fVar13 - 1.0) * fVar13 * 0.5 + fVar13;
        fVar13 = -(fVar14 * fVar13 * fVar13 - 1.0) * fVar13 * 0.5 + fVar13;
        fVar12 = fVar13 * fVar4;
        fVar11 = fVar13 * fVar8;
        fVar13 = fVar13 * fVar5;
      }
      (moby->transform).v1.x = fVar12;
      (moby->transform).v1.y = fVar11;
      (moby->transform).v1.z = fVar13;
      (moby->transform).v1.w = fVar3;
      *pfVar7 = fVar1;
      pfVar7[1] = *(float *)((int)puVar10 + 0x1c4);
      pfVar7[2] = *(float *)(puVar10 + 0x39);
      pfVar7[3] = *(float *)((int)puVar10 + 0x1cc);
      fVar1 = (moby->transform).v1.x;
      fVar3 = (moby->transform).v1.y;
      fVar4 = ABS((moby->transform).v1.x);
      fVar8 = ABS((moby->transform).v1.y);
      *(float *)(puVar10 + 0x41) = fVar4 - fVar8;
      uVar24 = (ulonglong)((uint)fVar1 >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar10 + 0x41) >> 0x1e) & 2 |
               (ulonglong)((uint)fVar3 >> 0x1d) & 4;
      fVar1 = fVar4;
      if (*(float *)(puVar10 + 0x41) - 0.0 < 0.0) {
        fVar1 = fVar8;
      }
      fVar5 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar24 << 2));
      fVar3 = *(float *)(((uint)(uVar24 << 2) | 0x735900) + 4);
      if (*(float *)(puVar10 + 0x41) - 0.0 < 0.0) {
        fVar8 = fVar4;
      }
      fVar4 = fVar15;
      if (0.0 < fVar1) {
        lVar28 = uVar19 - 0x2f0;
        lVar23 = uVar19 - 0xc0;
        lVar25 = uVar19 - 0xb0;
        lVar31 = 2;
        fVar1 = (fVar8 - fVar1) / (fVar8 + fVar1);
        fVar8 = fVar1 * fVar1;
        *(float *)((int)puVar10 + 0x24c) = fVar1;
        *(float *)((int)puVar10 + 0x244) = fVar1;
        *(float *)(puVar10 + 0x49) = fVar1;
        *(float *)(puVar10 + 0x48) = fVar1;
        fVar1 = fVar8 * fVar8;
        *(float *)((int)puVar10 + 0x244) = *(float *)((int)puVar10 + 0x244) * fVar8;
        *(float *)(puVar10 + 0x49) = *(float *)(puVar10 + 0x49) * fVar1;
        *(float *)((int)puVar10 + 0x24c) = *(float *)((int)puVar10 + 0x24c) * fVar1 * fVar8;
        do {
          *(float *)((int)lVar28 + 0x240) = *(float *)((int)lVar28 + 0x230) * fVar1 * fVar1;
          iVar30 = (int)lVar23;
          lVar28 = lVar28 + 8;
          lVar23 = lVar23 + 8;
          *(float *)((int)lVar25 + 4) = *(float *)(iVar30 + 4) * fVar1 * fVar1;
          lVar25 = lVar25 + 8;
          lVar31 = lVar31 + -1;
        } while (lVar31 != 0);
        lVar31 = 4;
        lVar25 = uVar19 - 0xc0;
        pfVar26 = (float *)&DAT_007358e0;
        lVar28 = lVar20;
        lVar23 = lVar25;
        do {
          fVar1 = *pfVar26;
          fVar8 = pfVar26[1];
          pfVar26 = pfVar26 + 2;
          *(float *)((int)lVar28 + 0x240) = *(float *)((int)lVar28 + 0x240) * fVar1;
          lVar28 = lVar28 + 8;
          *(float *)((int)lVar23 + 4) = *(float *)((int)lVar23 + 4) * fVar8;
          lVar23 = lVar23 + 8;
          lVar31 = lVar31 + -1;
        } while (lVar31 != 0);
        lVar23 = 2;
        lVar28 = lVar20;
        fVar1 = fVar15;
        do {
          iVar30 = (int)lVar28;
          lVar28 = lVar28 + 0x10;
          iVar29 = (int)lVar25;
          lVar25 = lVar25 + 0x10;
          fVar1 = fVar1 + *(float *)(iVar30 + 0x240) + *(float *)(iVar29 + 4) +
                  *(float *)(iVar29 + 8) + *(float *)(iVar29 + 0xc);
          lVar23 = lVar23 + -1;
        } while (lVar23 != 0);
        fVar4 = (fVar1 + 0.7853982) * fVar5 + fVar3;
      }
      pfVar7[0x12] = fVar4;
      fVar1 = (moby->transform).v1.y;
      fVar3 = (moby->transform).v1.x;
      fVar8 = (moby->transform).v1.z;
      fVar4 = ABS((moby->transform).v1.z);
      fVar1 = SQRT(fVar3 * fVar3 + fVar1 * fVar1);
      fVar5 = ABS(fVar1);
      *(float *)(puVar10 + 0x40) = fVar1;
      *(float *)((int)puVar10 + 0x204) = fVar5 - fVar4;
      uVar24 = (ulonglong)(*(uint *)(puVar10 + 0x40) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar10 + 0x204) >> 0x1e) & 2 |
               (ulonglong)((uint)fVar8 >> 0x1d) & 4;
      fVar1 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar24 << 2));
      fVar3 = ABS(*(float *)(puVar10 + 0x40));
      if (*(float *)((int)puVar10 + 0x204) - 0.0 < 0.0) {
        fVar3 = fVar4;
      }
      fVar8 = *(float *)(((uint)(uVar24 << 2) | 0x735900) + 4);
      if (*(float *)((int)puVar10 + 0x204) - 0.0 < 0.0) {
        fVar4 = fVar5;
      }
      if (0.0 < fVar3) {
        lVar28 = uVar19 - 0x2f0;
        lVar23 = uVar19 - 0xe0;
        lVar25 = uVar19 - 0xd0;
        lVar31 = 2;
        fVar3 = (fVar4 - fVar3) / (fVar4 + fVar3);
        fVar4 = fVar3 * fVar3;
        *(float *)((int)puVar10 + 0x22c) = fVar3;
        *(float *)((int)puVar10 + 0x224) = fVar3;
        *(float *)(puVar10 + 0x45) = fVar3;
        *(float *)(puVar10 + 0x44) = fVar3;
        fVar3 = fVar4 * fVar4;
        *(float *)((int)puVar10 + 0x224) = *(float *)((int)puVar10 + 0x224) * fVar4;
        *(float *)(puVar10 + 0x45) = *(float *)(puVar10 + 0x45) * fVar3;
        *(float *)((int)puVar10 + 0x22c) = *(float *)((int)puVar10 + 0x22c) * fVar3 * fVar4;
        do {
          *(float *)((int)lVar28 + 0x220) = *(float *)((int)lVar28 + 0x210) * fVar3 * fVar3;
          iVar30 = (int)lVar23;
          lVar28 = lVar28 + 8;
          lVar23 = lVar23 + 8;
          *(float *)((int)lVar25 + 4) = *(float *)(iVar30 + 4) * fVar3 * fVar3;
          lVar25 = lVar25 + 8;
          lVar31 = lVar31 + -1;
        } while (lVar31 != 0);
        lVar31 = 4;
        lVar25 = uVar19 - 0xe0;
        pfVar26 = (float *)&DAT_007358e0;
        lVar28 = lVar20;
        lVar23 = lVar25;
        do {
          fVar3 = *pfVar26;
          fVar4 = pfVar26[1];
          pfVar26 = pfVar26 + 2;
          *(float *)((int)lVar28 + 0x220) = *(float *)((int)lVar28 + 0x220) * fVar3;
          lVar28 = lVar28 + 8;
          *(float *)((int)lVar23 + 4) = *(float *)((int)lVar23 + 4) * fVar4;
          lVar23 = lVar23 + 8;
          lVar31 = lVar31 + -1;
        } while (lVar31 != 0);
        lVar28 = 2;
        do {
          iVar30 = (int)lVar20;
          iVar29 = (int)lVar25;
          lVar20 = lVar20 + 0x10;
          lVar25 = lVar25 + 0x10;
          fVar15 = fVar15 + *(float *)(iVar30 + 0x220) + *(float *)(iVar29 + 4) +
                   *(float *)(iVar29 + 8) + *(float *)(iVar29 + 0xc);
          lVar28 = lVar28 + -1;
        } while (lVar28 != 0);
        fVar15 = (fVar15 + 0.7853982) * fVar1 + fVar8;
      }
      pfVar7[0x13] = fVar15;
      dVar34 = (double)DAT_007bd344;
      DAT_007bd344 = 24.0;
      mobyupdate_helpers::M185_002c5f88(moby);
      DAT_007bd344 = (float)dVar34;
      PTR_DAT_007bd3d4 = (undefined *)0x207f7f;
      DAT_007bd3d8 = &DAT_007f7f20;
      iVar30 = update::g_SceneId;
    }
    iVar29 = boot::g_SpaceSceneFrame;
    if ((((iVar30 == 2) || (iVar30 == 0)) ||
        ((iVar30 == 3 &&
         (puVar10[0x4c] = (longlong)(int)(animationSpeed * 586.5),
         iVar29 < *(int *)((int)puVar10 + 0x264))))) && (DAT_0095ced0 != (MobyInstance *)0x0)) {
      RegisterFuncForMoby(&PTR_M1564_0029c460_0070aaa8,DAT_0095ced0);
      iVar30 = update::g_SceneId;
    }
    iVar29 = boot::g_SpaceSceneFrame;
    if ((iVar30 == 3) &&
       (puVar10[0x4c] = (longlong)(int)(animationSpeed * 586.5),
       iVar29 == *(int *)((int)puVar10 + 0x264))) {
      iVar30 = 0;
      fVar8 = GameCamera.orientMtx.up.x * DAT_007ab968 +
              GameCamera.orientMtx.forward.x * DAT_007ab960 +
              GameCamera.orientMtx.right.x * DAT_007ab964;
      fVar3 = GameCamera.orientMtx.up.y * DAT_007ab968 +
              GameCamera.orientMtx.forward.y * DAT_007ab960 +
              GameCamera.orientMtx.right.y * DAT_007ab964;
      fVar1 = GameCamera.orientMtx.up.z * DAT_007ab968 +
              GameCamera.orientMtx.forward.z * DAT_007ab960 +
              GameCamera.orientMtx.right.z * DAT_007ab964;
      fVar4 = GameCamera.orientMtx.up.w * DAT_007ab968 +
              GameCamera.orientMtx.forward.w * DAT_007ab960 +
              GameCamera.orientMtx.right.w * DAT_007ab964 + DAT_007ab96c;
      *(float *)(puVar10 + 0x3a) = fVar8;
      *(float *)((int)puVar10 + 0x1d4) = fVar3;
      *(float *)(puVar10 + 0x3b) = fVar1;
      *(float *)((int)puVar10 + 0x1dc) = fVar4;
      fVar4 = GameCamera.orientMtx.right.y;
      fVar8 = fVar8 + GameCamera.posX;
      fVar3 = fVar3 + GameCamera.posY;
      fVar1 = fVar1 + GameCamera.posZ;
      *(float *)(puVar10 + 0x3c) = GameCamera.orientMtx.right.x;
      fVar5 = GameCamera.orientMtx.right.z;
      *(float *)((int)puVar10 + 0x1e4) = fVar4;
      fVar4 = GameCamera.orientMtx.right.w;
      *(float *)(puVar10 + 0x3d) = fVar5;
      *(float *)((int)puVar10 + 0x1ec) = fVar4;
      *(float *)(puVar10 + 0x3a) = fVar8;
      *(float *)((int)puVar10 + 0x1d4) = fVar3;
      *(float *)(puVar10 + 0x3b) = fVar1;
      dVar35 = 0.19634954631328583;
      dVar34 = 0.0;
      uVar40 = 0x3ff0000000000000;
      uVar38 = 0x3ff028f5c0000000;
      uVar36 = 0x4010000000000000;
      auVar43 = loadVectorLeftIndexed(0x88,0x29a518);
      auVar43 = auVar43 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar43 = auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60;
      do {
        dVar37 = (double)fastfunc::FastIntToDouble(iVar30);
        mobyutil::MB_RotateQuatAxisAngle
                  ((float)(dVar37 * dVar35),local_110,(float *)(puVar10 + 0x3c));
        fVar3 = *(float *)((int)puVar10 + 500);
        fVar8 = *(float *)(puVar10 + 0x3e);
        fVar4 = *(float *)(puVar10 + 0x3f);
        dVar39 = (double)SQRT(fVar4 * fVar4 + fVar8 * fVar8 + fVar3 * fVar3);
        fVar1 = (float)((double)(DAT_0071f408 * DAT_007ab970) / dVar39);
        dVar37 = dVar34;
        if (dVar34 - dVar39 < 0.0) {
          dVar37 = (double)(fVar8 * fVar1);
        }
        dVar32 = dVar34;
        if (dVar34 - dVar39 < 0.0) {
          dVar32 = (double)(fVar3 * fVar1);
        }
        dVar33 = dVar34;
        if (dVar34 - dVar39 < 0.0) {
          dVar33 = (double)(fVar4 * fVar1);
        }
        if (dVar39 - dVar34 < 0.0) {
          dVar37 = (double)(fVar8 * fVar1);
        }
        if (dVar39 - dVar34 < 0.0) {
          dVar32 = (double)(fVar3 * fVar1);
        }
        if (dVar39 - dVar34 < 0.0) {
          dVar33 = (double)(fVar4 * fVar1);
        }
        *(float *)(puVar10 + 0x3e) = (float)dVar37;
        *(float *)((int)puVar10 + 500) = (float)dVar32;
        *(float *)(puVar10 + 0x3f) = (float)dVar33;
        mobyutil::MB_randInt(0x10);
        mobyutil::MB_randInt(2);
        uVar21 = partupd::SpawnPart_23(dVar34,uVar40,uVar38,(double)DAT_007ab974,uVar19 - 0x130);
        iVar29 = (int)uVar21;
        if (iVar29 != 0) {
          auVar41 = ZEXT416(0xffffffff);
          auVar41 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
          auVar41 = vectorShiftLeftIntegerWord(auVar41,auVar41);
          auVar42 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar41 = vectorMultiplyAddFloatingPoint(auVar42,auVar43,auVar41);
          auVar41 = vectorConvertToSignedFixedPointWordSaturate(auVar41,0);
          auVar41 = vectorSplatHalfWord(auVar41,1);
          uVar9 = storeVectorElementHalfWordIndexed(auVar41,10,uVar21);
          *(undefined2 *)(iVar29 + 10) = uVar9;
          cVar22 = fastfunc::FastDoubleToInt(uVar36);
          *(char *)(iVar29 + 9) = cVar22 + '@';
          *(undefined4 *)(iVar29 + 0x24) = 2;
          *(undefined1 *)(iVar29 + 0x2a) = 0x7f;
          *(char *)(iVar29 + 0x2b) = (char)*(undefined2 *)(iVar29 + 10);
        }
        iVar30 = iVar30 + 1;
      } while (iVar30 < 0x20);
    }
  }
  return;
}



//==== 0029bde8  ns=mobyupdate_helpers  size=0x654
// sig: undefined M1564_0029bde8(void)
// callers(0): 
// callees(8): 000685c4 draw::GetEffectTex; 00072280 draw::FastDrawQuad; 00174f80 vuchain::SetGSReg; 00502e50 FUN_00502e50; 00502ea8 idol_draw::PackCmd; 00502f08 FUN_00502f08; 00502f98 FUN_00502f98; 00502fd4 stub::STUB_00502fd4_RET_0

void mobyupdate_helpers::M1564_0029bde8(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  longlong lVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  float local_130 [40];
  
  dVar23 = 0.5;
  if (boot::g_SpaceSceneFrame ==
      (int)(animationSpeed * (float)((double)(longlong)(DAT_007ab918 + 1) + 0.5))) {
    DAT_00fadbb0 = 1.0;
    DAT_00fadbb4 = 0.0;
    DAT_00fadbb8 = 0.15;
    if (update::g_SceneId == 7) {
      DAT_00fadbb8 = -0.15;
    }
    DAT_00fadbbc = 1.0;
  }
  draw::GetEffectTex(0xb);
  stub::STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  FUN_00502f08(0,0,0,0,0,0);
  idol_draw::PackCmd(0,2,0,1,0x80);
  uVar6 = FUN_00502e50(0);
  vuchain::SetGSReg(8,uVar6);
  uVar6 = FUN_00502f98(1,0,0,1,0,0,1,2);
  vuchain::SetGSReg(0x16,uVar6);
  dVar22 = 0.0;
  dVar27 = (double)(float)((double)(GameCamera.orientMtx.up.y * DAT_00fadbb8 +
                                   GameCamera.orientMtx.forward.y * DAT_00fadbb0 +
                                   GameCamera.orientMtx.right.y * DAT_00fadbb4) +
                          (double)GameCamera.posY);
  dVar28 = (double)(float)((double)(GameCamera.orientMtx.up.x * DAT_00fadbb8 +
                                   GameCamera.orientMtx.forward.x * DAT_00fadbb0 +
                                   GameCamera.orientMtx.right.x * DAT_00fadbb4) +
                          (double)GameCamera.posX);
  dVar26 = (double)(float)((double)(GameCamera.orientMtx.up.z * DAT_00fadbb8 +
                                   GameCamera.orientMtx.forward.z * DAT_00fadbb0 +
                                   GameCamera.orientMtx.right.z * DAT_00fadbb4) +
                          (double)GameCamera.posZ);
  fVar2 = (float)(dVar27 - (double)GameCamera.posY);
  fVar3 = (float)(dVar28 - (double)GameCamera.posX);
  fVar4 = (float)(dVar26 - (double)GameCamera.posZ);
  dVar16 = (double)(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
  dVar29 = (double)(GameCamera.orientMtx.up.w * DAT_00fadbb8 +
                    GameCamera.orientMtx.forward.w * DAT_00fadbb0 +
                    GameCamera.orientMtx.right.w * DAT_00fadbb4 + DAT_00fadbbc);
  dVar17 = dVar22;
  dVar19 = dVar22;
  dVar20 = dVar22;
  if ((float)SQRT(dVar16) != 0.0) {
    dVar17 = 1.0 / SQRT(dVar16);
    dVar17 = (double)(float)(-(double)(float)((double)(float)(dVar16 * dVar17) * dVar17 - 1.0) *
                             (double)(float)(dVar23 * dVar17) + dVar17);
    dVar17 = (double)(float)(-(double)(float)((double)(float)(dVar16 * dVar17) * dVar17 - 1.0) *
                             (double)(float)(dVar23 * dVar17) + dVar17);
    fVar1 = (float)(-(double)(float)((double)(float)(dVar16 * dVar17) * dVar17 - 1.0) *
                    (double)(float)(dVar23 * dVar17) + dVar17);
    dVar17 = (double)(fVar3 * fVar1);
    dVar19 = (double)(fVar2 * fVar1);
    dVar20 = (double)(fVar4 * fVar1);
  }
  dVar12 = (double)(float)(dVar17 * dVar17 + --(double)(float)(dVar19 * dVar19));
  dVar16 = dVar22;
  dVar21 = dVar22;
  if ((float)SQRT(dVar12) != 0.0) {
    dVar16 = 1.0 / SQRT(dVar12);
    dVar16 = (double)(float)(-(double)(float)((double)(float)(dVar12 * dVar16) * dVar16 - 1.0) *
                             (double)(float)(dVar23 * dVar16) + dVar16);
    dVar16 = (double)(float)(-(double)(float)((double)(float)(dVar12 * dVar16) * dVar16 - 1.0) *
                             (double)(float)(dVar23 * dVar16) + dVar16);
    dVar16 = (double)(float)(-(double)(float)((double)(float)(dVar12 * dVar16) * dVar16 - 1.0) *
                             (double)(float)(dVar23 * dVar16) + dVar16);
    dVar21 = (double)(float)(dVar17 * dVar16);
    dVar16 = -(double)(float)(dVar19 * dVar16);
  }
  dVar24 = (double)(float)(dVar20 * dVar16 - 0.0);
  pfVar10 = local_130;
  pfVar9 = (float *)&DAT_007ab980;
  lVar11 = 4;
  dVar25 = (double)(float)(dVar19 * 0.0 - (double)(float)(dVar20 * dVar21));
  dVar12 = (double)(float)(dVar17 * dVar21 - (double)(float)(dVar19 * dVar16));
  pfVar8 = pfVar9;
  pfVar7 = pfVar10;
  do {
    dVar13 = (double)(*pfVar8 * DAT_00fadb80);
    *pfVar7 = *pfVar8 * DAT_00fadb80;
    dVar14 = (double)(pfVar8[1] * DAT_00fadb80);
    pfVar7[1] = pfVar8[1] * DAT_00fadb80;
    dVar15 = (double)(pfVar8[2] * DAT_00fadb80);
    pfVar7[2] = pfVar8[2] * DAT_00fadb80;
    dVar18 = (double)pfVar8[3];
    pfVar8 = pfVar8 + 4;
    pfVar7[3] = (float)(dVar18 * dVar29 + (double)(float)(dVar13 * dVar29));
    pfVar7[2] = (float)(dVar18 * dVar26 +
                       (double)(float)(dVar15 * dVar12 + (double)(float)(dVar13 * dVar20 + 0.0)));
    *pfVar7 = (float)(dVar18 * dVar28 +
                     (double)(float)(dVar15 * dVar25 +
                                    (double)(float)(dVar13 * dVar17 +
                                                   (double)(float)(dVar14 * dVar16))));
    pfVar7[1] = (float)(dVar18 * dVar27 +
                       (double)(float)(dVar15 * dVar24 +
                                      (double)(float)(dVar13 * dVar19 +
                                                     (double)(float)(dVar14 * dVar21))));
    pfVar7 = pfVar7 + 4;
    lVar11 = lVar11 + -1;
  } while (lVar11 != 0);
  draw::FastDrawQuad(local_130,0,0,EffectTexHeaders,9);
  uVar5 = EffectTexHeaders;
  lVar11 = 4;
  pfVar8 = pfVar9;
  pfVar7 = pfVar10;
  do {
    fVar2 = DAT_00fadb80 * 0.75;
    dVar14 = (double)(*pfVar8 * fVar2);
    *pfVar7 = *pfVar8 * fVar2;
    dVar15 = (double)(pfVar8[1] * fVar2);
    pfVar7[1] = pfVar8[1] * fVar2;
    dVar13 = (double)(pfVar8[2] * fVar2);
    pfVar7[2] = pfVar8[2] * fVar2;
    dVar18 = (double)pfVar8[3];
    pfVar8 = pfVar8 + 4;
    pfVar7[3] = (float)(dVar18 * dVar29 + (double)(float)(dVar14 * dVar29));
    pfVar7[2] = (float)(dVar18 * dVar26 +
                       (double)(float)(dVar13 * dVar12 + (double)(float)(dVar14 * dVar20 + dVar22)))
    ;
    *pfVar7 = (float)(dVar18 * dVar28 +
                     (double)(float)(dVar13 * dVar25 +
                                    (double)(float)(dVar14 * dVar17 +
                                                   (double)(float)(dVar15 * dVar16))));
    pfVar7[1] = (float)(dVar18 * dVar27 +
                       (double)(float)(dVar13 * dVar24 +
                                      (double)(float)(dVar14 * dVar19 +
                                                     (double)(float)(dVar15 * dVar21))));
    pfVar7 = pfVar7 + 4;
    lVar11 = lVar11 + -1;
  } while (lVar11 != 0);
  draw::FastDrawQuad(local_130,0,0,uVar5,9);
  uVar5 = EffectTexHeaders;
  lVar11 = 4;
  do {
    fVar2 = (float)((double)DAT_00fadb80 * dVar23);
    dVar14 = (double)(*pfVar9 * fVar2);
    *pfVar10 = *pfVar9 * fVar2;
    dVar15 = (double)(pfVar9[1] * fVar2);
    pfVar10[1] = pfVar9[1] * fVar2;
    dVar13 = (double)(pfVar9[2] * fVar2);
    pfVar10[2] = pfVar9[2] * fVar2;
    dVar18 = (double)pfVar9[3];
    pfVar9 = pfVar9 + 4;
    pfVar10[3] = (float)(dVar18 * dVar29 + (double)(float)(dVar14 * dVar29));
    pfVar10[2] = (float)(dVar18 * dVar26 +
                        (double)(float)(dVar13 * dVar12 + (double)(float)(dVar14 * dVar20 + dVar22))
                        );
    *pfVar10 = (float)(dVar18 * dVar28 +
                      (double)(float)(dVar13 * dVar25 +
                                     (double)(float)(dVar14 * dVar17 +
                                                    (double)(float)(dVar15 * dVar16))));
    pfVar10[1] = (float)(dVar18 * dVar27 +
                        (double)(float)(dVar13 * dVar24 +
                                       (double)(float)(dVar14 * dVar19 +
                                                      (double)(float)(dVar15 * dVar21))));
    pfVar10 = pfVar10 + 4;
    lVar11 = lVar11 + -1;
  } while (lVar11 != 0);
  draw::FastDrawQuad(local_130,0,0,uVar5,9);
  return;
}



//==== 0029c460  ns=mobyupdate_helpers  size=0x258
// sig: undefined M1564_0029c460(void)
// callers(0): 
// callees(4): 000f1038 mobyfunc::GetBoneTransformations; 00119028 mobyutil::MB_DrawGlowFX; 00502730 fastfunc::FastIntToDouble; 005027bc fastfunc::FastLerpColor

void mobyupdate_helpers::M1564_0029c460(undefined8 param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 local_b0 [16];
  undefined1 auStack_a0 [88];
  
  dVar9 = 0.5;
  iVar1 = (int)(animationSpeed * (float)((double)(longlong)DAT_007aa0c0 + 0.5));
  dVar7 = (double)fastfunc::FastIntToDouble(worldUpdateTime - (worldUpdateTime / iVar1) * iVar1);
  dVar8 = (double)fastfunc::FastIntToDouble(iVar1);
  fVar2 = (float)(dVar7 / dVar8) * 6.18318 - 3.14159;
  fVar3 = 3.1415925 - fVar2;
  if (fVar2 - (3.1415925 - fVar2) < 0.0) {
    fVar3 = fVar2;
  }
  fVar4 = -3.1415925 - fVar2;
  if ((-3.1415925 - fVar2) - fVar3 < 0.0) {
    fVar4 = fVar3;
  }
  fVar2 = fVar4 * fVar4;
  fVar3 = fVar2 * fVar2 * fVar4;
  fVar5 = fVar2 * fVar3;
  uVar6 = fastfunc::FastLerpColor
                    ((double)(float)((double)(fVar2 * fVar5 * 2.601887e-06 +
                                             fVar5 * -0.0001980741 +
                                             fVar3 * 0.0083330255 +
                                             fVar2 * fVar4 * -0.16666657 + fVar4) * dVar9 + dVar9),
                     DAT_007aa0b8,DAT_007aa0bc);
  mobyfunc::GetBoneTransformations(param_1,1,auStack_a0);
  mobyutil::MB_DrawGlowFX((double)DAT_007aa0b0,(double)DAT_007aa0b4,local_b0,uVar6);
  mobyfunc::GetBoneTransformations(param_1,2,auStack_a0);
  mobyutil::MB_DrawGlowFX((double)DAT_007aa0b0,(double)DAT_007aa0b4,local_b0,uVar6);
  return;
}



//==== 0029c6c8  ns=mobyupdate_helpers  size=0x59c
// sig: undefined M1564_0029c6c8(void)
// callers(0): 
// callees(8): 000685c4 draw::GetEffectTex; 00072280 draw::FastDrawQuad; 00174f80 vuchain::SetGSReg; 00502e50 FUN_00502e50; 00502ea8 idol_draw::PackCmd; 00502f08 FUN_00502f08; 00502f98 FUN_00502f98; 00502fd4 stub::STUB_00502fd4_RET_0

void mobyupdate_helpers::M1564_0029c6c8(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  longlong lVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  float local_130 [42];
  
  dVar23 = 0.5;
  if (boot::g_SpaceSceneFrame ==
      (int)(animationSpeed * (float)((double)(longlong)(DAT_007ab93c + 1) + 0.5))) {
    DAT_00fadbc0 = 0.0;
    DAT_00fadbc4 = 0.0;
    DAT_00fadbc8 = -45.0;
    DAT_00fadbcc = 1.0;
  }
  draw::GetEffectTex(0xb);
  stub::STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  FUN_00502f08(0,0,0,0,0,0);
  idol_draw::PackCmd(0,2,0,1,0x80);
  uVar6 = FUN_00502e50(0);
  vuchain::SetGSReg(8,uVar6);
  uVar6 = FUN_00502f98(1,0,0,1,0,0,1,2);
  vuchain::SetGSReg(0x16,uVar6);
  dVar26 = (double)(*(float *)(param_1 + 0xe4) * DAT_00fadbc8 +
                    *(float *)(param_1 + 0xc4) * DAT_00fadbc0 +
                    *(float *)(param_1 + 0xd4) * DAT_00fadbc4 + *(float *)(param_1 + 0x14));
  dVar27 = (double)(*(float *)(param_1 + 0xe0) * DAT_00fadbc8 +
                    *(float *)(param_1 + 0xc0) * DAT_00fadbc0 +
                    *(float *)(param_1 + 0xd0) * DAT_00fadbc4 + *(float *)(param_1 + 0x10));
  dVar25 = (double)(*(float *)(param_1 + 0xe8) * DAT_00fadbc8 +
                    *(float *)(param_1 + 200) * DAT_00fadbc0 +
                    *(float *)(param_1 + 0xd8) * DAT_00fadbc4 + *(float *)(param_1 + 0x18));
  fVar2 = (float)(dVar26 - (double)GameCamera.posY);
  fVar3 = (float)(dVar27 - (double)GameCamera.posX);
  dVar22 = 0.0;
  fVar4 = (float)(dVar25 - (double)GameCamera.posZ);
  dVar16 = (double)(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
  dVar28 = (double)(*(float *)(param_1 + 0xec) * DAT_00fadbc8 +
                    *(float *)(param_1 + 0xcc) * DAT_00fadbc0 +
                    *(float *)(param_1 + 0xdc) * DAT_00fadbc4 + DAT_00fadbcc);
  dVar17 = dVar22;
  dVar19 = dVar22;
  dVar20 = dVar22;
  if ((float)SQRT(dVar16) != 0.0) {
    dVar17 = 1.0 / SQRT(dVar16);
    dVar17 = (double)(float)(-(double)(float)((double)(float)(dVar16 * dVar17) * dVar17 - 1.0) *
                             (double)(float)(dVar23 * dVar17) + dVar17);
    dVar17 = (double)(float)(-(double)(float)((double)(float)(dVar16 * dVar17) * dVar17 - 1.0) *
                             (double)(float)(dVar23 * dVar17) + dVar17);
    fVar1 = (float)(-(double)(float)((double)(float)(dVar16 * dVar17) * dVar17 - 1.0) *
                    (double)(float)(dVar23 * dVar17) + dVar17);
    dVar17 = (double)(fVar3 * fVar1);
    dVar19 = (double)(fVar2 * fVar1);
    dVar20 = (double)(fVar4 * fVar1);
  }
  dVar12 = (double)(float)(dVar17 * dVar17 + --(double)(float)(dVar19 * dVar19));
  dVar16 = dVar22;
  dVar21 = dVar22;
  if ((float)SQRT(dVar12) != 0.0) {
    dVar16 = 1.0 / SQRT(dVar12);
    dVar16 = (double)(float)(-(double)(float)((double)(float)(dVar12 * dVar16) * dVar16 - 1.0) *
                             (double)(float)(dVar23 * dVar16) + dVar16);
    dVar16 = (double)(float)(-(double)(float)((double)(float)(dVar12 * dVar16) * dVar16 - 1.0) *
                             (double)(float)(dVar23 * dVar16) + dVar16);
    dVar23 = (double)(float)(-(double)(float)((double)(float)(dVar12 * dVar16) * dVar16 - 1.0) *
                             (double)(float)(dVar23 * dVar16) + dVar16);
    dVar21 = (double)(float)(dVar17 * dVar23);
    dVar16 = -(double)(float)(dVar19 * dVar23);
  }
  dVar12 = (double)(float)(dVar20 * dVar16 - 0.0);
  pfVar10 = local_130;
  pfVar9 = (float *)&DAT_007ab980;
  dVar24 = (double)(float)(dVar19 * 0.0 - (double)(float)(dVar20 * dVar21));
  dVar23 = (double)(float)(dVar17 * dVar21 - (double)(float)(dVar19 * dVar16));
  lVar11 = 4;
  pfVar8 = pfVar9;
  pfVar7 = pfVar10;
  do {
    dVar13 = (double)(*pfVar8 * DAT_007ab9d0);
    *pfVar7 = *pfVar8 * DAT_007ab9d0;
    dVar14 = (double)(pfVar8[1] * DAT_007ab9d0);
    pfVar7[1] = pfVar8[1] * DAT_007ab9d0;
    dVar15 = (double)(pfVar8[2] * DAT_007ab9d0);
    pfVar7[2] = pfVar8[2] * DAT_007ab9d0;
    dVar18 = (double)pfVar8[3];
    pfVar8 = pfVar8 + 4;
    pfVar7[3] = (float)(dVar18 * dVar28 + (double)(float)(dVar13 * dVar28));
    pfVar7[2] = (float)(dVar18 * dVar25 +
                       (double)(float)(dVar15 * dVar23 + (double)(float)(dVar13 * dVar20 + 0.0)));
    *pfVar7 = (float)(dVar18 * dVar27 +
                     (double)(float)(dVar15 * dVar24 +
                                    (double)(float)(dVar13 * dVar17 +
                                                   (double)(float)(dVar14 * dVar16))));
    pfVar7[1] = (float)(dVar18 * dVar26 +
                       (double)(float)(dVar15 * dVar12 +
                                      (double)(float)(dVar13 * dVar19 +
                                                     (double)(float)(dVar14 * dVar21))));
    pfVar7 = pfVar7 + 4;
    lVar11 = lVar11 + -1;
  } while (lVar11 != 0);
  draw::FastDrawQuad(local_130,0,0,EffectTexHeaders,9);
  uVar5 = EffectTexHeaders;
  lVar11 = 4;
  do {
    dVar13 = (double)(*pfVar9 * DAT_007ab9d4);
    *pfVar10 = *pfVar9 * DAT_007ab9d4;
    dVar14 = (double)(pfVar9[1] * DAT_007ab9d4);
    pfVar10[1] = pfVar9[1] * DAT_007ab9d4;
    dVar15 = (double)(pfVar9[2] * DAT_007ab9d4);
    pfVar10[2] = pfVar9[2] * DAT_007ab9d4;
    dVar18 = (double)pfVar9[3];
    pfVar9 = pfVar9 + 4;
    pfVar10[3] = (float)(dVar18 * dVar28 + (double)(float)(dVar13 * dVar28));
    pfVar10[2] = (float)(dVar18 * dVar25 +
                        (double)(float)(dVar15 * dVar23 + (double)(float)(dVar13 * dVar20 + dVar22))
                        );
    *pfVar10 = (float)(dVar18 * dVar27 +
                      (double)(float)(dVar15 * dVar24 +
                                     (double)(float)(dVar13 * dVar17 +
                                                    (double)(float)(dVar14 * dVar16))));
    pfVar10[1] = (float)(dVar18 * dVar26 +
                        (double)(float)(dVar15 * dVar12 +
                                       (double)(float)(dVar13 * dVar19 +
                                                      (double)(float)(dVar14 * dVar21))));
    pfVar10 = pfVar10 + 4;
    lVar11 = lVar11 + -1;
  } while (lVar11 != 0);
  draw::FastDrawQuad(local_130,0,0,uVar5,9);
  return;
}



//==== 0029cc78  ns=mobyupdate_helpers  size=0x674
// sig: undefined M1564_0029cc78(void)
// callers(0): 
// callees(8): 000685c4 draw::GetEffectTex; 00072280 draw::FastDrawQuad; 00174f80 vuchain::SetGSReg; 00502e50 FUN_00502e50; 00502ea8 idol_draw::PackCmd; 00502f08 FUN_00502f08; 00502f98 FUN_00502f98; 00502fd4 stub::STUB_00502fd4_RET_0

void mobyupdate_helpers::M1564_0029cc78(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  ulonglong *puVar4;
  float fVar5;
  int iVar6;
  float *pfVar7;
  float fVar8;
  undefined *puVar9;
  undefined4 uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined8 uVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 *puVar17;
  longlong lVar16;
  undefined4 *puVar18;
  undefined4 *puVar19;
  uint uVar20;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  undefined4 *puVar21;
  ulonglong unaff_r30;
  longlong lVar22;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar23;
  longlong lVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  ulonglong in_f18;
  ulonglong in_f19;
  double dVar29;
  ulonglong in_f20;
  double dVar30;
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
  double dVar36;
  ulonglong in_f26;
  double dVar37;
  ulonglong in_f27;
  double dVar38;
  ulonglong in_f28;
  double dVar39;
  ulonglong in_f29;
  double dVar40;
  ulonglong in_f30;
  double dVar41;
  ulonglong in_f31;
  double dVar42;
  
  uVar11 = ZEXT48(&stack0x00000000);
  lVar15 = uVar11 - 0x1e0;
  puVar4 = (ulonglong *)lVar15;
  *puVar4 = uVar11;
  puVar4[0x3e] = in_LR;
  puVar4[0x2e] = in_f18;
  puVar4[0x2f] = in_f19;
  puVar4[0x30] = in_f20;
  puVar4[0x31] = in_f21;
  puVar4[0x32] = in_f22;
  puVar4[0x33] = in_f23;
  puVar4[0x34] = in_f24;
  puVar4[0x35] = in_f25;
  puVar4[0x36] = in_f26;
  puVar4[0x37] = in_f27;
  puVar4[0x38] = in_f28;
  puVar4[0x39] = in_f29;
  puVar4[0x3a] = in_f30;
  puVar4[0x3b] = in_f31;
  puVar4[0x2d] = unaff_r31;
  puVar4[0x2c] = unaff_r30;
  puVar4[0x2b] = unaff_r29;
  puVar4[0x2a] = unaff_r28;
  puVar4[0x29] = unaff_r27;
  uVar12 = draw::GetEffectTex(0xb);
  puVar4[0x25] = uVar12;
  uVar12 = stub::STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  puVar4[0x26] = uVar12;
  uVar12 = FUN_00502f08(0,0,0,0,0,0);
  puVar4[0x24] = uVar12;
  uVar12 = idol_draw::PackCmd(0,2,0,1,0x80);
  puVar4[0x27] = uVar12;
  uVar13 = FUN_00502e50(0);
  vuchain::SetGSReg(8,uVar13);
  uVar13 = FUN_00502f98(1,0,0,1,0,0,1,2);
  vuchain::SetGSReg(0x16,uVar13);
  dVar38 = (double)(*(float *)(param_1 + 0xe0) * -1.0);
  dVar36 = (double)(*(float *)(param_1 + 0xe8) * -1.0);
  dVar37 = (double)(*(float *)(param_1 + 0xe4) * -1.0);
  dVar39 = (double)(*(float *)(param_1 + 0xe8) * DAT_00fadbc8 +
                    *(float *)(param_1 + 200) * DAT_00fadbc0 +
                    *(float *)(param_1 + 0xd8) * DAT_00fadbc4 + *(float *)(param_1 + 0x18));
  dVar40 = (double)(*(float *)(param_1 + 0xe4) * DAT_00fadbc8 +
                    *(float *)(param_1 + 0xc4) * DAT_00fadbc0 +
                    *(float *)(param_1 + 0xd4) * DAT_00fadbc4 + *(float *)(param_1 + 0x14));
  dVar41 = (double)(*(float *)(param_1 + 0xe0) * DAT_00fadbc8 +
                    *(float *)(param_1 + 0xc0) * DAT_00fadbc0 +
                    *(float *)(param_1 + 0xd0) * DAT_00fadbc4 + *(float *)(param_1 + 0x10));
  fVar1 = (float)(dVar36 * (double)(float)(dVar41 - (double)GameCamera.posX) -
                 (double)(float)(dVar38 * (double)(float)(dVar39 - (double)GameCamera.posZ)));
  fVar2 = (float)(dVar37 * (double)(float)(dVar39 - (double)GameCamera.posZ) -
                 (double)(float)(dVar36 * (double)(float)(dVar40 - (double)GameCamera.posY)));
  fVar3 = (float)(dVar38 * (double)(float)(dVar40 - (double)GameCamera.posY) -
                 (double)(float)(dVar37 * (double)(float)(dVar41 - (double)GameCamera.posX)));
  dVar30 = 0.0;
  fVar5 = fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1;
  dVar35 = (double)(*(float *)(param_1 + 0xec) * -1.0 + 1.0);
  dVar42 = (double)(*(float *)(param_1 + 0xec) * DAT_00fadbc8 +
                    *(float *)(param_1 + 0xcc) * DAT_00fadbc0 +
                    *(float *)(param_1 + 0xdc) * DAT_00fadbc4 + DAT_00fadbcc);
  dVar29 = dVar30;
  dVar31 = dVar30;
  if (SQRT(fVar5) != 0.0) {
    fVar8 = 1.0 / SQRT(fVar5);
    fVar8 = -(fVar5 * fVar8 * fVar8 - 1.0) * fVar8 * 0.5 + fVar8;
    fVar8 = -(fVar5 * fVar8 * fVar8 - 1.0) * fVar8 * 0.5 + fVar8;
    fVar8 = -(fVar5 * fVar8 * fVar8 - 1.0) * fVar8 * 0.5 + fVar8;
    dVar30 = (double)(fVar2 * fVar8);
    dVar29 = (double)(fVar1 * fVar8);
    dVar31 = (double)(fVar3 * fVar8);
  }
  *(undefined4 *)(puVar4 + 0x20) = 0x3f800000;
  *(undefined4 *)((int)puVar4 + 0x104) = 0x3f800000;
  puVar9 = PTR_DAT_007ab9cc;
  *(undefined4 *)(puVar4 + 0x21) = 0;
  *(undefined4 *)((int)puVar4 + 0x10c) = 0x3f800000;
  uVar20 = (uint)puVar9 | 0xff000000;
  *(undefined4 *)(puVar4 + 0x22) = 0x3f800000;
  lVar22 = uVar11 - 0x170;
  *(undefined4 *)((int)puVar4 + 0x114) = 0;
  puVar21 = &DAT_007ab9f0;
  *(undefined4 *)(puVar4 + 0x23) = 0;
  *(undefined4 *)((int)puVar4 + 0x11c) = 0;
  *(uint *)(puVar4 + 0x1e) = uVar20;
  dVar34 = (double)(float)(dVar29 * dVar36 - (double)(float)(dVar31 * dVar37));
  *(uint *)((int)puVar4 + 0xf4) = uVar20;
  dVar33 = (double)(float)(dVar31 * dVar38 - (double)(float)(dVar30 * dVar36));
  *(uint *)(puVar4 + 0x1f) = uVar20;
  dVar32 = (double)(float)(dVar30 * dVar37 - (double)(float)(dVar29 * dVar38));
  *(uint *)((int)puVar4 + 0xfc) = uVar20;
  fVar2 = DAT_00fadb8c;
  fVar1 = DAT_007ab9dc;
  lVar23 = 4;
  lVar14 = lVar15;
  lVar16 = lVar22;
  puVar19 = puVar21;
  do {
    puVar17 = (undefined4 *)lVar16;
    *puVar17 = *puVar19;
    puVar17[1] = puVar19[1];
    puVar17[2] = puVar19[2];
    puVar18 = puVar19 + 3;
    puVar19 = puVar19 + 4;
    puVar17[3] = *puVar18;
    iVar6 = (int)lVar14;
    lVar16 = lVar16 + 0x10;
    *(float *)(iVar6 + 0x78) = *(float *)(iVar6 + 0x78) * fVar1;
    *(float *)(iVar6 + 0x70) = *(float *)(iVar6 + 0x70) * fVar2;
    lVar14 = lVar14 + 0x10;
    lVar23 = lVar23 + -1;
  } while (lVar23 != 0);
  lVar23 = uVar11 - 0x130;
  lVar24 = 4;
  lVar14 = lVar23;
  lVar16 = lVar22;
  do {
    pfVar7 = (float *)lVar16;
    dVar25 = (double)pfVar7[1];
    dVar26 = (double)*pfVar7;
    dVar27 = (double)pfVar7[2];
    dVar28 = (double)pfVar7[3];
    lVar16 = lVar16 + 0x10;
    pfVar7 = (float *)lVar14;
    pfVar7[3] = (float)(dVar28 * dVar42 + (double)(float)(dVar26 * dVar35));
    *pfVar7 = (float)(dVar28 * dVar41 +
                     (double)(float)(dVar27 * dVar30 +
                                    (double)(float)(dVar26 * dVar38 +
                                                   (double)(float)(dVar25 * dVar34))));
    pfVar7[1] = (float)(dVar28 * dVar40 +
                       (double)(float)(dVar27 * dVar29 +
                                      (double)(float)(dVar26 * dVar37 +
                                                     (double)(float)(dVar25 * dVar33))));
    pfVar7[2] = (float)(dVar28 * dVar39 +
                       (double)(float)(dVar27 * dVar31 +
                                      (double)(float)(dVar26 * dVar36 +
                                                     (double)(float)(dVar25 * dVar32))));
    lVar14 = lVar14 + 0x10;
    lVar24 = lVar24 + -1;
  } while (lVar24 != 0);
  draw::FastDrawQuad(uVar11 - 0x130,0,0,EffectTexHeaders,9);
  fVar2 = DAT_00fadb8c;
  uVar10 = EffectTexHeaders;
  fVar1 = DAT_007ab9e0;
  uVar20 = DAT_007ab9d8 | 0x7f000000;
  lVar24 = 4;
  *(uint *)(puVar4 + 0x1e) = uVar20;
  *(uint *)((int)puVar4 + 0xf4) = uVar20;
  *(uint *)(puVar4 + 0x1f) = uVar20;
  *(uint *)((int)puVar4 + 0xfc) = uVar20;
  lVar14 = lVar15;
  lVar16 = lVar22;
  puVar19 = puVar21;
  do {
    puVar17 = (undefined4 *)lVar16;
    *puVar17 = *puVar19;
    puVar17[1] = puVar19[1];
    puVar17[2] = puVar19[2];
    puVar18 = puVar19 + 3;
    puVar19 = puVar19 + 4;
    puVar17[3] = *puVar18;
    iVar6 = (int)lVar14;
    lVar16 = lVar16 + 0x10;
    *(float *)(iVar6 + 0x78) = *(float *)(iVar6 + 0x78) * fVar1;
    *(float *)(iVar6 + 0x70) = *(float *)(iVar6 + 0x70) * fVar2;
    lVar14 = lVar14 + 0x10;
    lVar24 = lVar24 + -1;
  } while (lVar24 != 0);
  lVar24 = 4;
  lVar14 = lVar23;
  lVar16 = lVar22;
  do {
    pfVar7 = (float *)lVar16;
    dVar25 = (double)pfVar7[1];
    dVar26 = (double)*pfVar7;
    dVar27 = (double)pfVar7[2];
    dVar28 = (double)pfVar7[3];
    lVar16 = lVar16 + 0x10;
    pfVar7 = (float *)lVar14;
    pfVar7[3] = (float)(dVar28 * dVar42 + (double)(float)(dVar26 * dVar35));
    *pfVar7 = (float)(dVar28 * dVar41 +
                     (double)(float)(dVar27 * dVar30 +
                                    (double)(float)(dVar26 * dVar38 +
                                                   (double)(float)(dVar25 * dVar34))));
    pfVar7[1] = (float)(dVar28 * dVar40 +
                       (double)(float)(dVar27 * dVar29 +
                                      (double)(float)(dVar26 * dVar37 +
                                                     (double)(float)(dVar25 * dVar33))));
    pfVar7[2] = (float)(dVar28 * dVar39 +
                       (double)(float)(dVar27 * dVar31 +
                                      (double)(float)(dVar26 * dVar36 +
                                                     (double)(float)(dVar25 * dVar32))));
    lVar14 = lVar14 + 0x10;
    lVar24 = lVar24 + -1;
  } while (lVar24 != 0);
  draw::FastDrawQuad(uVar11 - 0x130,0,0,uVar10,9);
  fVar2 = DAT_00fadb8c;
  uVar10 = EffectTexHeaders;
  fVar1 = DAT_007ab9e4;
  lVar16 = 4;
  uVar20 = DAT_007ab9d8 | 0x7f000000;
  *(uint *)(puVar4 + 0x1e) = uVar20;
  *(uint *)((int)puVar4 + 0xf4) = uVar20;
  *(uint *)(puVar4 + 0x1f) = uVar20;
  *(uint *)((int)puVar4 + 0xfc) = uVar20;
  lVar14 = lVar22;
  do {
    puVar18 = (undefined4 *)lVar14;
    *puVar18 = *puVar21;
    puVar18[1] = puVar21[1];
    puVar18[2] = puVar21[2];
    puVar19 = puVar21 + 3;
    puVar21 = puVar21 + 4;
    puVar18[3] = *puVar19;
    iVar6 = (int)lVar15;
    lVar14 = lVar14 + 0x10;
    *(float *)(iVar6 + 0x78) = *(float *)(iVar6 + 0x78) * fVar1;
    *(float *)(iVar6 + 0x70) = *(float *)(iVar6 + 0x70) * fVar2;
    lVar15 = lVar15 + 0x10;
    lVar16 = lVar16 + -1;
  } while (lVar16 != 0);
  lVar15 = 4;
  do {
    pfVar7 = (float *)lVar22;
    dVar25 = (double)pfVar7[1];
    dVar26 = (double)*pfVar7;
    dVar27 = (double)pfVar7[2];
    dVar28 = (double)pfVar7[3];
    lVar22 = lVar22 + 0x10;
    pfVar7 = (float *)lVar23;
    pfVar7[3] = (float)(dVar28 * dVar42 + (double)(float)(dVar26 * dVar35));
    *pfVar7 = (float)(dVar28 * dVar41 +
                     (double)(float)(dVar27 * dVar30 +
                                    (double)(float)(dVar26 * dVar38 +
                                                   (double)(float)(dVar25 * dVar34))));
    pfVar7[1] = (float)(dVar28 * dVar40 +
                       (double)(float)(dVar27 * dVar29 +
                                      (double)(float)(dVar26 * dVar37 +
                                                     (double)(float)(dVar25 * dVar33))));
    pfVar7[2] = (float)(dVar28 * dVar39 +
                       (double)(float)(dVar27 * dVar31 +
                                      (double)(float)(dVar26 * dVar36 +
                                                     (double)(float)(dVar25 * dVar32))));
    lVar23 = lVar23 + 0x10;
    lVar15 = lVar15 + -1;
  } while (lVar15 != 0);
  draw::FastDrawQuad(uVar11 - 0x130,0,0,uVar10,9);
  return;
}



//==== 0029d2f8  ns=mobyupdate_unsorted  size=0x2ec
// sig: undefined UpdateMoby_1564(MobyInstance * moby)
// callers(0): 
// callees(4): 000efb38 mobyfunc::DeleteMoby; 000fc620 mobyutil::MB_randInt; 000fddc0 mobyutil::MB_SetAnimation; 00117390 mobyutil::MB_PathEvalSpline

/* Moby 1564 */

void mobyupdate_unsorted::UpdateMoby_1564(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  void *pvVar5;
  f32 fVar6;
  Spline *pSVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  Vec4 *pVVar14;
  longlong lVar15;
  int iVar16;
  uint uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  byte bVar20;
  undefined8 in_LR;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  
  lVar15 = (longlong)(int)moby;
  pvVar5 = moby->pVar;
  uVar18 = ZEXT48(pvVar5);
  bVar1 = moby->state;
  bVar20 = (bVar1 == 1) << 1;
  pSVar7 = Splines[*(int *)((int)pvVar5 + 0x60)];
  uVar19 = ZEXT48(pSVar7);
  if (bVar1 == 0) {
    if (*(int *)((int)pvVar5 + 0x60) == -1) {
      mobyfunc::DeleteMoby(moby);
      return;
    }
    fVar2 = pSVar7->points[0].y;
    fVar3 = pSVar7->points[0].x;
    fVar11 = fVar2 - pSVar7->points[1].y;
    fVar4 = pSVar7->points[0].z;
    fVar12 = fVar3 - pSVar7->points[1].x;
    fVar13 = fVar4 - pSVar7->points[1].z;
    pVVar14 = pSVar7->points + pSVar7->cnt + -1;
    fVar2 = fVar2 - pVVar14->y;
    fVar3 = fVar3 - pVVar14->x;
    fVar4 = fVar4 - pVVar14->z;
    fVar11 = SQRT(fVar13 * fVar13 + fVar12 * fVar12 + fVar11 * fVar11);
    *(float *)((int)pvVar5 + 0x74) = (DAT_007aba30 * mobyutil::g_FrameTime) / fVar11;
    *(uint *)((int)pvVar5 + 0x70) =
         (uint)(ABS(fVar11 - SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2)) < 0.1);
    auVar21 = loadVectorLeftIndexed(in_LR,uVar19);
    auVar22 = ZEXT416(0xffffffff);
    auVar24 = auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60;
    auVar22 = vectorConvertFromSignedFixedPointWord(auVar21,0);
    auVar21 = loadVectorLeftIndexed(0x68,uVar18);
    auVar23 = loadVectorRightIndexed(0x78,uVar18);
    auVar24 = vectorShiftLeftIntegerWord(auVar24,auVar24);
    auVar22 = vectorMultiplyAddFloatingPoint(auVar21 | auVar23,auVar22,auVar24);
    auVar22 = auVar22 >> 0x60 & (undefined1  [16])0xffffffff;
    uVar10 = storeVectorElementWordIndexed
                       (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60,0x6c,uVar18);
    *(undefined4 *)((int)pvVar5 + 0x6cU & 0xfffffffc) = uVar10;
    moby->state = '\x01';
    fVar2 = DAT_007aba34;
    moby->updateDistance = -1;
    moby->scale = moby->scale * fVar2;
  }
  else if (1 < bVar1) {
    return;
  }
  fVar6 = (moby->pos).z;
  uVar8 = (int)fVar6 >> 0x1f;
  uVar17 = uVar8 >> 1 ^ (uint)fVar6;
  mobyutil::MB_PathEvalSpline
            ((double)*(float *)((int)pvVar5 + 0x6c),uVar19,uVar17,
             *(undefined4 *)((int)pvVar5 + 0x70),lVar15 + 0x10,lVar15 + 0x40,0);
  fVar2 = (moby->pos).z;
  auVar22 = loadVectorLeftIndexed(in_LR,uVar19);
  auVar23 = vectorConvertFromSignedFixedPointWord(auVar22,0);
  (moby->rotation).y = (moby->rotation).y * 0.5;
  auVar22 = auVar23 >> 0x60 & (undefined1  [16])0xffffffff;
  (moby->pos).z = fVar2 + *(float *)((int)pvVar5 + 100);
  auVar21 = loadVectorLeftIndexed(0x6c,uVar18);
  auVar24 = loadVectorRightIndexed(0x7c,uVar18);
  auVar26 = loadVectorLeftIndexed(0x74,uVar18);
  auVar25 = loadVectorRightIndexed(0x84,uVar18);
  auVar24 = vectorAddFloatingPoint(auVar21 | auVar24,auVar26 | auVar25);
  auVar21 = auVar24 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar21 = auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60;
  vectorCompareGreaterThanFloatingPoint
            (auVar21,auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60);
  uVar10 = storeVectorElementWordIndexed(auVar21,0x6c,uVar18);
  *(undefined4 *)((int)pvVar5 + 0x6cU & 0xfffffffc) = uVar10;
  if (!(bool)(bVar20 >> 1 & 1)) {
    auVar22 = vectorSubtractFloatingPoint(auVar24,auVar23);
    auVar22 = auVar22 >> 0x60 & (undefined1  [16])0xffffffff;
    uVar10 = storeVectorElementWordIndexed
                       (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60,0x6c,uVar18);
    *(undefined4 *)((int)pvVar5 + 0x6cU & 0xfffffffc) = uVar10;
  }
  if ((moby->field43_0x70 & 2U) != 0) {
    fVar6 = (moby->pos).z;
    uVar9 = (int)fVar6 >> 0x1f;
    if (((int)(uVar17 - uVar8) < (int)((uVar9 >> 1 ^ (uint)fVar6) - uVar9)) ||
       (iVar16 = mobyutil::MB_randInt(3), iVar16 != 0)) {
      if (moby->animationId != '\0') {
        mobyutil::MB_SetAnimation(lVar15,0,0,10);
      }
    }
    else if (moby->animationId != '\x01') {
      mobyutil::MB_SetAnimation(lVar15,1,0,10);
    }
  }
  return;
}



//==== 0029d610  ns=mobyupdate_helpers  size=0x45c
// sig: undefined M1565_0029d610(void)
// callers(0): 
// callees(12): 000685c4 draw::GetEffectTex; 00071170 stub::STUB_00071170; 00074604 draw::DrawMeshSet; 000f1ef0 mobyutil::MB_GetLights; 00174f80 vuchain::SetGSReg; 00502578 fastfunc::FastWrapRot; 00502648 fastfunc::FastAddRots; 00502730 fastfunc::FastIntToDouble; 00502798 fastfunc::FastFMod; 00502ea8 idol_draw::PackCmd; 00502f08 FUN_00502f08; 00502fd4 stub::STUB_00502fd4_RET_0

void mobyupdate_helpers::M1565_0029d610(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  ulonglong *puVar5;
  uint uVar6;
  float fVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  ulonglong unaff_r21;
  ulonglong unaff_r22;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  uint uVar11;
  int iVar12;
  ulonglong unaff_r25;
  float *pfVar13;
  uint uVar14;
  ulonglong unaff_r26;
  float *pfVar15;
  float *pfVar16;
  ulonglong unaff_r27;
  float *pfVar17;
  ulonglong unaff_r28;
  uint *puVar18;
  ulonglong unaff_r29;
  float *pfVar19;
  ulonglong unaff_r30;
  longlong lVar20;
  ulonglong unaff_r31;
  ulonglong in_LR;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  ulonglong in_f24;
  ulonglong in_f25;
  double dVar26;
  ulonglong in_f26;
  double dVar27;
  ulonglong in_f27;
  double dVar28;
  ulonglong in_f28;
  double dVar29;
  ulonglong in_f29;
  double dVar30;
  ulonglong in_f30;
  double dVar31;
  ulonglong in_f31;
  double dVar32;
  
  uVar9 = ZEXT48(&stack0x00000000);
  lVar20 = uVar9 - 0x130;
  puVar5 = (ulonglong *)lVar20;
  *puVar5 = uVar9;
  puVar5[0x28] = in_LR;
  puVar5[0x1e] = in_f24;
  puVar5[0x1f] = in_f25;
  puVar5[0x20] = in_f26;
  puVar5[0x21] = in_f27;
  puVar5[0x22] = in_f28;
  puVar5[0x23] = in_f29;
  puVar5[0x24] = in_f30;
  puVar5[0x25] = in_f31;
  puVar5[0x1c] = unaff_r30;
  puVar5[0x1b] = unaff_r29;
  puVar5[0x14] = unaff_r22;
  uVar8 = worldUpdateTime;
  pfVar16 = *(float **)(param_1 + 0x78);
  puVar5[0x1d] = unaff_r31;
  puVar5[0x1a] = unaff_r28;
  puVar5[0x19] = unaff_r27;
  puVar5[0x18] = unaff_r26;
  puVar5[0x17] = unaff_r25;
  puVar5[0x16] = unaff_r24;
  puVar5[0x15] = unaff_r23;
  puVar5[0x13] = unaff_r21;
  dVar21 = (double)fastfunc::FastIntToDouble(uVar8);
  dVar32 = (double)(float)((double)(float)((double)DAT_007abed4 * (double)mobyutil::g_FrameTime) *
                          dVar21);
  uVar10 = draw::GetEffectTex(dVar21,(double)DAT_007abed4,(double)mobyutil::g_FrameTime,DAT_007abec0
                             );
  vuchain::SetGSReg(0x18,uVar10);
  uVar10 = idol_draw::PackCmd(0,1,0,1,DAT_007abebc);
  vuchain::SetGSReg(3,uVar10);
  uVar10 = FUN_00502f08(0,0,0,0,0,0);
  vuchain::SetGSReg(6,uVar10);
  uVar10 = stub::STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  vuchain::SetGSReg(0x1a,uVar10);
  *pfVar16 = pfVar16[1];
  dVar21 = (double)fastfunc::FastWrapRot
                             (pfVar16[1],
                              (360.0 / (DAT_007abecc * animationSpeed)) * 0.017453292 *
                              mobyutil::g_FrameTime);
  pfVar16[1] = (float)dVar21;
  mobyutil::MB_GetLights(param_1,uVar9 - 0xc0,uVar9 - 0xbc,uVar9 - 0xb8);
  iVar12 = *(int *)(puVar5 + 0xf);
  iVar4 = *(int *)((int)puVar5 + 0x74);
  uVar11 = 0;
  pfVar13 = (float *)&DAT_00fadbd0;
  uVar14 = *(uint *)(puVar5 + 0xe);
  dVar21 = 6.2831854820251465;
  uVar6 = DAT_007abec4 << 0x18;
  dVar26 = 3.141592502593994;
  dVar27 = -3.141592502593994;
  dVar28 = -0.16666656732559204;
  dVar29 = 0.008333025500178337;
  dVar30 = -0.0001980741071747616;
  dVar31 = 2.601886990305502e-06;
  pfVar15 = (float *)&DAT_00fadbd4;
  pfVar17 = (float *)&DAT_00fadbd8;
  puVar18 = &DAT_00fadf68;
  pfVar19 = (float *)&DAT_007aba60;
  do {
    dVar22 = (double)fastfunc::FastFMod((double)SQRT(*pfVar19 * *pfVar19 + pfVar19[1] * pfVar19[1]),
                                        (double)DAT_007abec8);
    dVar22 = (double)fastfunc::FastAddRots((float)(dVar22 * dVar21) / DAT_007abec8);
    dVar23 = (double)fastfunc::FastWrapRot((float)dVar22,pfVar16[1]);
    fVar7 = DAT_007abed8;
    fVar1 = *pfVar19;
    uVar11 = uVar11 + 1;
    dVar22 = (double)(float)(dVar26 - dVar23);
    if (dVar23 - (double)(float)(dVar26 - dVar23) < 0.0) {
      dVar22 = dVar23;
    }
    fVar2 = pfVar19[1];
    fVar3 = pfVar19[2];
    pfVar19 = pfVar19 + 3;
    *pfVar13 = DAT_007abed8 * fVar1 + *(float *)(param_1 + 0x10);
    fVar1 = DAT_007abed0;
    pfVar13 = pfVar13 + 3;
    dVar24 = (double)(float)(dVar27 - dVar23);
    if ((double)(float)(dVar27 - dVar23) - dVar22 < 0.0) {
      dVar24 = dVar22;
    }
    dVar22 = (double)(float)(dVar24 * dVar24);
    *pfVar15 = fVar7 * fVar2 + *(float *)(param_1 + 0x14);
    fVar2 = *(float *)(param_1 + 0x18);
    pfVar15 = pfVar15 + 3;
    *puVar18 = uVar6 | iVar12 << 0x10 | iVar4 << 8 | uVar14;
    puVar18 = puVar18 + 1;
    dVar23 = (double)(float)(dVar22 * (double)(float)(dVar22 * dVar24));
    dVar25 = (double)(float)(dVar22 * dVar23);
    *pfVar17 = fVar1 * (float)((double)(float)(dVar22 * dVar25) * dVar31 +
                              (double)(float)(dVar25 * dVar30 +
                                             (double)(float)(dVar23 * dVar29 +
                                                            (double)(float)((double)(float)(dVar22 *
                                                                                           dVar24) *
                                                                            dVar28 + dVar24)))) +
               fVar7 * fVar3 + fVar2;
    pfVar17 = pfVar17 + 3;
  } while (uVar11 < 0x2e);
  iVar12 = 0;
  uVar10 = 0x3ff0000000000000;
  do {
    uVar14 = 0;
    pfVar16 = (float *)&DAT_007abc88;
    pfVar13 = (float *)&DAT_00faddf8;
    pfVar15 = (float *)&DAT_007abc8c;
    pfVar17 = (float *)&DAT_00faddfc;
    do {
      *(undefined4 *)((int)puVar5 + 0x7c) = 0x3f800000;
      *(undefined4 *)((int)puVar5 + 0x84) = 0x3f800000;
      *(undefined4 *)(puVar5 + 0x10) = 0xbf20d97c;
      fVar1 = *(float *)((int)lVar20 + 0x7c);
      *(undefined4 *)(puVar5 + 0x11) = 0x3f20d97c;
      dVar21 = (double)fastfunc::FastFMod((double)(float)((double)fVar1 * dVar32),uVar10);
      fVar1 = *(float *)((int)lVar20 + 0x80);
      *pfVar13 = (float)((double)*pfVar16 + dVar21);
      dVar21 = (double)fastfunc::FastFMod((double)(float)((double)fVar1 * dVar32),uVar10);
      fVar1 = *pfVar15;
      uVar14 = uVar14 + 1;
      pfVar16 = pfVar16 + 2;
      pfVar13 = pfVar13 + 2;
      pfVar15 = pfVar15 + 2;
      *pfVar17 = (float)((double)fVar1 + dVar21);
      pfVar17 = pfVar17 + 2;
    } while (uVar14 < 0x2e);
    stub::STUB_00071170();
    draw::DrawMeshSet(DAT_007aba40,PTR_DAT_007abeb0,PTR_DAT_007abeb8,PTR_DAT_007abeb4,9);
    iVar12 = iVar12 + 1;
    lVar20 = lVar20 + 8;
  } while (iVar12 < 2);
  return;
}



//==== 0029da6c  ns=mobyupdate_unsorted  size=0x80
// sig: undefined UpdateMoby_1565(MobyInstance * moby)
// callers(0): 
// callees(2): 0006d7e0 draw::RegisterPostDraw; 000f1ec8 mobyfunc::SetColorOfMoby

/* Moby 1565 */

void mobyupdate_unsorted::UpdateMoby_1565(MobyInstance *moby)

{
  if (moby->state == '\0') {
    mobyfunc::SetColorOfMoby(moby,0x40,0x40,0x40);
    moby->state = '\x01';
  }
  else {
    draw::RegisterPostDraw(&PTR_M1565_0029d610_0070aac8,moby);
    moby->drawDistance = 0;
    moby->modeBits = moby->modeBits | DISABLED;
  }
  return;
}



//==== 0029daf0  ns=mobyupdate_unsorted  size=0x4
// sig: undefined UpdateMoby_1566(MobyInstance * moby)
// callers(0): 
// callees(0): 

/* Moby 1566 */

MobyInstance * mobyupdate_unsorted::UpdateMoby_1566(MobyInstance *moby)

{
  return moby;
}



//==== 0029db20  ns=mobyupdate_helpers  size=0x45c
// sig: undefined M1567_0029db20(void)
// callers(0): 
// callees(12): 000685c4 draw::GetEffectTex; 00071170 stub::STUB_00071170; 00074604 draw::DrawMeshSet; 000f1ef0 mobyutil::MB_GetLights; 00174f80 vuchain::SetGSReg; 00502578 fastfunc::FastWrapRot; 00502648 fastfunc::FastAddRots; 00502730 fastfunc::FastIntToDouble; 00502798 fastfunc::FastFMod; 00502ea8 idol_draw::PackCmd; 00502f08 FUN_00502f08; 00502fd4 stub::STUB_00502fd4_RET_0

void mobyupdate_helpers::M1567_0029db20(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  ulonglong *puVar5;
  uint uVar6;
  float fVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  ulonglong unaff_r21;
  ulonglong unaff_r22;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  uint uVar11;
  int iVar12;
  ulonglong unaff_r25;
  float *pfVar13;
  uint uVar14;
  ulonglong unaff_r26;
  float *pfVar15;
  float *pfVar16;
  ulonglong unaff_r27;
  float *pfVar17;
  ulonglong unaff_r28;
  uint *puVar18;
  ulonglong unaff_r29;
  float *pfVar19;
  ulonglong unaff_r30;
  longlong lVar20;
  ulonglong unaff_r31;
  ulonglong in_LR;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  ulonglong in_f24;
  ulonglong in_f25;
  double dVar26;
  ulonglong in_f26;
  double dVar27;
  ulonglong in_f27;
  double dVar28;
  ulonglong in_f28;
  double dVar29;
  ulonglong in_f29;
  double dVar30;
  ulonglong in_f30;
  double dVar31;
  ulonglong in_f31;
  double dVar32;
  
  uVar9 = ZEXT48(&stack0x00000000);
  lVar20 = uVar9 - 0x130;
  puVar5 = (ulonglong *)lVar20;
  *puVar5 = uVar9;
  puVar5[0x28] = in_LR;
  puVar5[0x1e] = in_f24;
  puVar5[0x1f] = in_f25;
  puVar5[0x20] = in_f26;
  puVar5[0x21] = in_f27;
  puVar5[0x22] = in_f28;
  puVar5[0x23] = in_f29;
  puVar5[0x24] = in_f30;
  puVar5[0x25] = in_f31;
  puVar5[0x1c] = unaff_r30;
  puVar5[0x1b] = unaff_r29;
  puVar5[0x14] = unaff_r22;
  uVar8 = worldUpdateTime;
  pfVar16 = *(float **)(param_1 + 0x78);
  puVar5[0x1d] = unaff_r31;
  puVar5[0x1a] = unaff_r28;
  puVar5[0x19] = unaff_r27;
  puVar5[0x18] = unaff_r26;
  puVar5[0x17] = unaff_r25;
  puVar5[0x16] = unaff_r24;
  puVar5[0x15] = unaff_r23;
  puVar5[0x13] = unaff_r21;
  dVar21 = (double)fastfunc::FastIntToDouble(uVar8);
  dVar32 = (double)(float)((double)(float)((double)DAT_007ac764 * (double)mobyutil::g_FrameTime) *
                          dVar21);
  uVar10 = draw::GetEffectTex(dVar21,(double)DAT_007ac764,(double)mobyutil::g_FrameTime,DAT_007ac750
                             );
  vuchain::SetGSReg(0x18,uVar10);
  uVar10 = idol_draw::PackCmd(0,1,0,1,DAT_007ac74c);
  vuchain::SetGSReg(3,uVar10);
  uVar10 = FUN_00502f08(0,0,0,0,0,0);
  vuchain::SetGSReg(6,uVar10);
  uVar10 = stub::STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  vuchain::SetGSReg(0x1a,uVar10);
  *pfVar16 = pfVar16[1];
  dVar21 = (double)fastfunc::FastWrapRot
                             (pfVar16[1],
                              (360.0 / (DAT_007ac75c * animationSpeed)) * 0.017453292 *
                              mobyutil::g_FrameTime);
  pfVar16[1] = (float)dVar21;
  mobyutil::MB_GetLights(param_1,uVar9 - 0xc0,uVar9 - 0xbc,uVar9 - 0xb8);
  iVar12 = *(int *)(puVar5 + 0xf);
  iVar4 = *(int *)((int)puVar5 + 0x74);
  uVar11 = 0;
  pfVar13 = (float *)&DAT_00fae020;
  uVar14 = *(uint *)(puVar5 + 0xe);
  dVar21 = 6.2831854820251465;
  uVar6 = DAT_007ac754 << 0x18;
  dVar26 = 3.141592502593994;
  dVar27 = -3.141592502593994;
  dVar28 = -0.16666656732559204;
  dVar29 = 0.008333025500178337;
  dVar30 = -0.0001980741071747616;
  dVar31 = 2.601886990305502e-06;
  pfVar15 = (float *)&DAT_00fae024;
  pfVar17 = (float *)&DAT_00fae028;
  puVar18 = &DAT_00fae700;
  pfVar19 = (float *)&DAT_007abf00;
  do {
    dVar22 = (double)fastfunc::FastFMod((double)SQRT(*pfVar19 * *pfVar19 + pfVar19[1] * pfVar19[1]),
                                        (double)DAT_007ac758);
    dVar22 = (double)fastfunc::FastAddRots((float)(dVar22 * dVar21) / DAT_007ac758);
    dVar23 = (double)fastfunc::FastWrapRot((float)dVar22,pfVar16[1]);
    fVar7 = DAT_007ac768;
    fVar1 = *pfVar19;
    uVar11 = uVar11 + 1;
    dVar22 = (double)(float)(dVar26 - dVar23);
    if (dVar23 - (double)(float)(dVar26 - dVar23) < 0.0) {
      dVar22 = dVar23;
    }
    fVar2 = pfVar19[1];
    fVar3 = pfVar19[2];
    pfVar19 = pfVar19 + 3;
    *pfVar13 = DAT_007ac768 * fVar1 + *(float *)(param_1 + 0x10);
    fVar1 = DAT_007ac760;
    pfVar13 = pfVar13 + 3;
    dVar24 = (double)(float)(dVar27 - dVar23);
    if ((double)(float)(dVar27 - dVar23) - dVar22 < 0.0) {
      dVar24 = dVar22;
    }
    dVar22 = (double)(float)(dVar24 * dVar24);
    *pfVar15 = fVar7 * fVar2 + *(float *)(param_1 + 0x14);
    fVar2 = *(float *)(param_1 + 0x18);
    pfVar15 = pfVar15 + 3;
    *puVar18 = uVar6 | iVar12 << 0x10 | iVar4 << 8 | uVar14;
    puVar18 = puVar18 + 1;
    dVar23 = (double)(float)(dVar22 * (double)(float)(dVar22 * dVar24));
    dVar25 = (double)(float)(dVar22 * dVar23);
    *pfVar17 = fVar1 * (float)((double)(float)(dVar22 * dVar25) * dVar31 +
                              (double)(float)(dVar25 * dVar30 +
                                             (double)(float)(dVar23 * dVar29 +
                                                            (double)(float)((double)(float)(dVar22 *
                                                                                           dVar24) *
                                                                            dVar28 + dVar24)))) +
               fVar7 * fVar3 + fVar2;
    pfVar17 = pfVar17 + 3;
  } while (uVar11 < 0x58);
  iVar12 = 0;
  uVar10 = 0x3ff0000000000000;
  do {
    uVar14 = 0;
    pfVar16 = (float *)&DAT_007ac320;
    pfVar13 = (float *)&DAT_00fae440;
    pfVar15 = (float *)&DAT_007ac324;
    pfVar17 = (float *)&DAT_00fae444;
    do {
      *(undefined4 *)((int)puVar5 + 0x7c) = 0x3f800000;
      *(undefined4 *)((int)puVar5 + 0x84) = 0x3f800000;
      *(undefined4 *)(puVar5 + 0x10) = 0xbf20d97c;
      fVar1 = *(float *)((int)lVar20 + 0x7c);
      *(undefined4 *)(puVar5 + 0x11) = 0x3f20d97c;
      dVar21 = (double)fastfunc::FastFMod((double)(float)((double)fVar1 * dVar32),uVar10);
      fVar1 = *(float *)((int)lVar20 + 0x80);
      *pfVar13 = (float)((double)*pfVar16 + dVar21);
      dVar21 = (double)fastfunc::FastFMod((double)(float)((double)fVar1 * dVar32),uVar10);
      fVar1 = *pfVar15;
      uVar14 = uVar14 + 1;
      pfVar16 = pfVar16 + 2;
      pfVar13 = pfVar13 + 2;
      pfVar15 = pfVar15 + 2;
      *pfVar17 = (float)((double)fVar1 + dVar21);
      pfVar17 = pfVar17 + 2;
    } while (uVar14 < 0x58);
    stub::STUB_00071170();
    draw::DrawMeshSet(DAT_007abee0,PTR_DAT_007ac740,PTR_DAT_007ac748,PTR_DAT_007ac744,9);
    iVar12 = iVar12 + 1;
    lVar20 = lVar20 + 8;
  } while (iVar12 < 2);
  return;
}



//==== 0029df7c  ns=mobyupdate_unsorted  size=0x80
// sig: undefined UpdateMoby_1567(MobyInstance * moby)
// callers(0): 
// callees(2): 0006d7e0 draw::RegisterPostDraw; 000f1ec8 mobyfunc::SetColorOfMoby

/* Moby 1567 */

void mobyupdate_unsorted::UpdateMoby_1567(MobyInstance *moby)

{
  if (moby->state == '\0') {
    mobyfunc::SetColorOfMoby(moby,0x40,0x40,0x40);
    moby->state = '\x01';
  }
  else {
    draw::RegisterPostDraw(&PTR_M1567_0029db20_0070aae0,moby);
    moby->drawDistance = 0;
    moby->modeBits = moby->modeBits | DISABLED;
  }
  return;
}



//==== 0029e008  ns=mobyupdate_unsorted  size=0xec
// sig: undefined UpdateMoby_1568(MobyInstance * moby)
// callers(0): 
// callees(1): 00502578 fastfunc::FastWrapRot

/* Moby 1568 */

void mobyupdate_unsorted::UpdateMoby_1568(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  double dVar3;
  
  bVar1 = moby->state;
  if (bVar1 == 0) {
    moby->state = '\x01';
  }
  else if (bVar1 < 2) {
    if ((g_gameMode == GAME_MODE_SCENE) && (update::g_SceneId == 3)) {
      moby->enabled = '\0';
      fVar2 = (moby->rotation).x;
      moby->modeBits = moby->modeBits | DISABLED;
      dVar3 = (double)fastfunc::FastWrapRot(fVar2,3.1415927);
      (moby->rotation).x = (float)dVar3;
      moby->state = '\x02';
    }
  }
  else if ((bVar1 < 3) && (g_gameMode != GAME_MODE_SCENE)) {
    moby->enabled = '\x01';
    moby->state = '\x03';
    moby->modeBits =
         moby->modeBits &
         (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
          DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|
          NO_POST_UPDATE|NO_UPDATE);
  }
  return;
}



//==== 0029e140  ns=mobyupdate_helpers  size=0x3dc
// sig: undefined M157_0029e140(void)
// callers(1): 0029ead8 mobyupdate_unsorted::UpdateMoby_157
// callees(7): 000fcbe8 mobyutil::MB_randRangeFloat; 000fe484 mobyutil::MB_randRange; 000fe4f0 mobyutil::MB_randRangeSigned; 001268f8 partupd::SpawnPart_21; 0012e3e8 partupd::SpawnPart_44; 00500060 fastfunc::FastDecTimerS8; 00502758 fastfunc::FastDoubleToInt

void mobyupdate_helpers::M157_0029e140(int param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  undefined8 uVar6;
  double dVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  double dVar12;
  undefined8 uVar13;
  undefined1 local_e0 [16];
  undefined1 local_d0 [40];
  
  if (*(char *)(param_1 + 0xbc) != '\0') {
    uVar3 = 0;
    fastfunc::FastDecTimerS8(param_1 + 0xbc);
    iVar2 = 0;
    dVar4 = 0.009999999776482582;
    dVar5 = 0.05999999865889549;
    uVar6 = 0x4018000000000000;
    dVar7 = 30.5;
    uVar8 = 0x40d86a0000000000;
    uVar9 = 0x4072c00000000000;
    uVar10 = 0x3fef5c2900000000;
    uVar11 = 0x3feb333340000000;
    do {
      mobyutil::MB_randRangeFloat((float)dVar4,(float)dVar5);
      uVar13 = uVar3;
      mobyutil::MB_randRangeSigned(uVar3,uVar6);
      uVar1 = fastfunc::FastDoubleToInt();
      partupd::SpawnPart_44
                (uVar8,uVar9,uVar10,uVar13,uVar11,local_e0,local_d0,
                 (int)((double)animationSpeed * dVar7),0x7f,0xffffff,uVar1);
      iVar2 = iVar2 + 1;
    } while (iVar2 < 2);
    dVar12 = 20.5;
    dVar7 = 40.5;
    uVar3 = 0x40c3880000000000;
    mobyutil::MB_randRangeFloat((float)dVar4,(float)dVar5);
    mobyutil::MB_randRange
              ((int)((double)animationSpeed * dVar12),(int)((double)animationSpeed * dVar7));
    partupd::SpawnPart_21(uVar3,local_e0,local_d0,0x4f007fff,0x1fffffff);
  }
  return;
}



//==== 0029e578  ns=mobyupdate_helpers  size=0x4c0
// sig: undefined M157_0029e578(void)
// callers(1): 0029ead8 mobyupdate_unsorted::UpdateMoby_157
// callees(8): 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 000fe484 mobyutil::MB_randRange; 000fe4f0 mobyutil::MB_randRangeSigned; 001113e0 mobyutil::MB_RotateQuatAxisAngle; 001268f8 partupd::SpawnPart_21; 0012e3e8 partupd::SpawnPart_44; 00502758 fastfunc::FastDoubleToInt

void mobyupdate_helpers::M157_0029e578(undefined8 param_1)

{
  int iVar1;
  float fVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar7;
  longlong lVar5;
  undefined8 uVar6;
  int iVar8;
  int iVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  double dVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d0;
  float local_cc;
  float local_c8;
  undefined4 local_c4;
  longlong local_c0;
  
  iVar8 = 0;
  iVar4 = (int)param_1;
  dVar26 = 0.0;
  iVar9 = 0;
  local_c4 = *(undefined4 *)(iVar4 + 0x1c);
  local_d0 = *(float *)(iVar4 + 0xd0) * -1.2 +
             *(float *)(iVar4 + 0xc0) * 0.3 + *(float *)(iVar4 + 0x10);
  local_cc = *(float *)(iVar4 + 0xd4) * -1.2 +
             *(float *)(iVar4 + 0xc4) * 0.3 + *(float *)(iVar4 + 0x14);
  local_c8 = *(float *)(iVar4 + 0xd8) * -1.2 +
             *(float *)(iVar4 + 200) * 0.3 + *(float *)(iVar4 + 0x18);
  uVar25 = 0x4038000000000000;
  uVar24 = 0x3fc0c15240000000;
  dVar23 = 0.2617993950843811;
  dVar22 = 0.05000000074505806;
  dVar21 = 0.10000000149011612;
  dVar20 = 1.7000000476837158;
  dVar19 = 30.5;
  dVar18 = 90.5;
  uVar17 = 0x40ed4c0000000000;
  uVar16 = 0x40a7700000000000;
  uVar15 = 0x3feb333340000000;
  uVar14 = 0xbf50624de0000000;
  while( true ) {
    iVar7 = fastfunc::FastDoubleToInt(uVar25);
    if (iVar7 <= iVar8) break;
    dVar10 = (double)mobyutil::MB_randRangeSigned(dVar26,uVar24);
    local_c0 = (longlong)iVar8;
    mobyutil::MB_RotateQuatAxisAngle
              ((float)((double)local_c0 * dVar23 + dVar10),&local_e0,(float *)&DAT_0096a340);
    dVar10 = (double)mobyutil::MB_randRangeFloat((float)dVar22,(float)dVar21);
    dVar13 = (double)SQRT(local_d8 * local_d8 + local_e0 * local_e0 + local_dc * local_dc);
    fVar2 = (float)(dVar10 / dVar13);
    dVar10 = dVar26;
    if (dVar26 - dVar13 < 0.0) {
      dVar10 = (double)(local_e0 * fVar2);
    }
    dVar12 = dVar26;
    if (dVar26 - dVar13 < 0.0) {
      dVar12 = (double)(local_dc * fVar2);
    }
    dVar11 = dVar26;
    if (dVar26 - dVar13 < 0.0) {
      dVar11 = (double)(local_d8 * fVar2);
    }
    if (dVar13 - dVar26 < 0.0) {
      dVar10 = (double)(local_e0 * fVar2);
    }
    if (dVar13 - dVar26 < 0.0) {
      dVar12 = (double)(local_dc * fVar2);
    }
    if (dVar13 - dVar26 < 0.0) {
      dVar11 = (double)(local_d8 * fVar2);
    }
    local_e0 = (float)dVar10;
    local_dc = (float)dVar12;
    local_d8 = (float)dVar11;
    lVar5 = mobyutil::MB_randRange(0,3);
    iVar7 = mobyutil::MB_randInt(2);
    if (g_framesGroundedCnt != 0) {
      local_e0 = (float)((double)DAT_00969de0 * dVar20 + (double)local_e0);
      local_dc = (float)((double)DAT_00969de4 * dVar20 + (double)local_dc);
      local_d8 = (float)((double)DAT_00969de8 * dVar20 + (double)local_d8);
    }
    iVar1 = (int)((double)animationSpeed * dVar18);
    local_c0 = (longlong)iVar1;
    uVar6 = mobyutil::MB_randRange((int)((double)animationSpeed * dVar19),iVar1);
    partupd::SpawnPart_44
              (uVar17,uVar16,uVar15,uVar14,dVar26,&local_d0,&local_e0,uVar6,0x1e,0xffffff,
               ((LZCOUNT(-iVar7) << 0x3a) >> 0x3f & lVar5 * 2) - lVar5);
    iVar8 = iVar8 + 1;
  }
  uVar15 = 0x4018000000000000;
  dVar23 = 0.7853981852531433;
  dVar20 = 1.0471975803375244;
  dVar19 = 20.5;
  dVar18 = 60.5;
  uVar14 = 0x40c3880000000000;
  for (; iVar8 = fastfunc::FastDoubleToInt(uVar15), iVar9 < iVar8; iVar9 = iVar9 + 1) {
    dVar10 = (double)mobyutil::MB_randRangeFloat((float)dVar26,(float)dVar23);
    local_c0 = (longlong)iVar9;
    mobyutil::MB_RotateQuatAxisAngle
              ((float)((double)local_c0 * dVar20 + dVar10),&local_e0,(float *)&DAT_0096a340);
    dVar10 = (double)mobyutil::MB_randRangeFloat((float)dVar22,(float)dVar21);
    iVar8 = (int)((double)animationSpeed * dVar18);
    local_c0 = (longlong)iVar8;
    dVar13 = (double)SQRT(local_d8 * local_d8 + local_e0 * local_e0 + local_dc * local_dc);
    fVar2 = (float)(dVar10 / dVar13);
    dVar10 = dVar26;
    if (dVar26 - dVar13 < 0.0) {
      dVar10 = (double)(local_e0 * fVar2);
    }
    dVar12 = dVar26;
    if (dVar26 - dVar13 < 0.0) {
      dVar12 = (double)(local_dc * fVar2);
    }
    dVar11 = dVar26;
    if (dVar26 - dVar13 < 0.0) {
      dVar11 = (double)(local_d8 * fVar2);
    }
    if (dVar13 - dVar26 < 0.0) {
      dVar10 = (double)(local_e0 * fVar2);
    }
    if (dVar13 - dVar26 < 0.0) {
      dVar12 = (double)(local_dc * fVar2);
    }
    if (dVar13 - dVar26 < 0.0) {
      dVar11 = (double)(local_d8 * fVar2);
    }
    local_e0 = (float)dVar10;
    local_dc = (float)dVar12;
    local_d8 = (float)dVar11;
    mobyutil::MB_randRange((int)((double)animationSpeed * dVar19),iVar8);
    partupd::SpawnPart_21(uVar14,&local_d0,&local_e0,0x4f007fff,0x1fffffff);
  }
  auVar27 = ZEXT416(0xffffffff);
  auVar27 = auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60;
  auVar28 = vectorShiftLeftIntegerWord(auVar27,auVar27);
  auVar29 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
  auVar27 = loadVectorLeftIndexed(0x54,0x29e51c);
  auVar27 = auVar27 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar27 = vectorMultiplyAddFloatingPoint
                      (auVar29,auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60,auVar28
                      );
  auVar27 = vectorConvertToSignedFixedPointWordSaturate(auVar27,0);
  auVar27 = auVar27 >> 0x60 & (undefined1  [16])0xff;
  uVar3 = storeVectorElementByteIndexed
                    (auVar27 | auVar27 << 8 | auVar27 << 0x10 | auVar27 << 0x18 | auVar27 << 0x20 |
                     auVar27 << 0x28 | auVar27 << 0x30 | auVar27 << 0x38 | auVar27 << 0x40 |
                     auVar27 << 0x48 | auVar27 << 0x50 | auVar27 << 0x58 | auVar27 << 0x60 |
                     auVar27 << 0x68 | auVar27 << 0x70 | auVar27 << 0x78,0xbc,param_1);
  *(undefined1 *)(iVar4 + 0xbc) = uVar3;
  return;
}



//==== 0029ead8  ns=mobyupdate_unsorted  size=0x145c
// sig: undefined UpdateMoby_157(MobyInstance * moby)
// callers(0): 
// callees(28): 00055284 camera::DrawTargetCrosshair; 00057820 collproc::CollLine; 00085300 hero::Hero_TransAnim; 0008e0f4 hero::Hero_GetWeaponAmmo; 00099ea8 hero::Hero_PlayFiringAnim; 000aa258 hero::hero_ConsumeAmmo; 000b72b0 hero::TransitionMovement; 000da4ac lights::CreatePointLight2; 000da9e8 lights::DeletePointLight; 000f1114 mobyfunc::GetBonePosition; 000fcccc mobyutil::MB_GetPvarsIfMobyHasThem; 000fddc0 mobyutil::MB_SetAnimation; 000fe610 mobyutil::MB_SphericalToVector; 00110808 mobyutil::MB_FindMobyByVarId; 0015d12c sound::PlayMobySound; 00292d88 FUN_00292d88; 002931b8 FUN_002931b8; 0029e140 mobyupdate_helpers::M157_0029e140; 0029e578 mobyupdate_helpers::M157_0029e578; 004fff60 fastfunc::FastDecTimerS32; 004fffb4 fastfunc::FastDecTimerS16; 00500fa8 fastfunc::FastApplyTransform; 005010c0 fastfunc::FastNormalizeRMtx4; 00502648 fastfunc::FastAddRots; 005026a0 fastfunc::FastSubRots; 00502730 fastfunc::FastIntToDouble; 005e825c FUN_005e825c; 005e8338 FUN_005e8338

/* Moby 157 */

void mobyupdate_unsorted::UpdateMoby_157(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  float fVar3;
  short sVar4;
  int *piVar5;
  MobyInstance *moby_00;
  undefined4 uVar6;
  float fVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined2 uVar11;
  MobyInstance *pMVar12;
  ulonglong uVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 local_210 [16];
  undefined1 local_200 [32];
  float local_1e0;
  float local_1dc;
  float local_1d8;
  float local_1d0;
  float local_1cc;
  float local_1c8;
  undefined1 local_1c0 [16];
  float local_1b0;
  float local_1ac;
  float local_1a8;
  float local_1a0;
  float local_19c;
  float local_198;
  Vec4 local_190;
  Vec4 aVStack_180 [3];
  undefined1 auStack_150 [64];
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  longlong local_f8;
  
  dVar14 = 10000.0;
  dVar26 = 0.75;
  piVar5 = (int *)moby->pVar;
  uVar13 = ZEXT48(piVar5);
  mobyupdate_helpers::M157_0029e140();
  local_10c = (float)dVar14;
  if (moby->state == '\0') {
    moby->state = '\x01';
    *(undefined2 *)(piVar5 + 7) = 0xffff;
    *(undefined2 *)((int)piVar5 + 0x1e) = 0;
  }
  fastfunc::FastApplyTransform(aVStack_180,(Vec4 *)&GameCamera);
  fastfunc::FastNormalizeRMtx4(auStack_150,aVStack_180);
  fastfunc::FastDecTimerS32(uVar13);
  iVar8 = fastfunc::FastDecTimerS32(uVar13 + 0x14);
  if ((iVar8 != 0) || ((piVar5[4] != 0 && ((*(byte *)(piVar5[4] + 0x20) & 0x80) != 0)))) {
    piVar5[4] = 0;
  }
  if (g_heroState == FIRST_PERSON_VIEW) {
    hero::TransitionMovement(0x1e,1);
  }
  if (((g_heroState == WEAPON_FIRST_PERSON_VIEW) && ((g_heroMobyPtr->modeBits & DISABLED) != NONE))
     && (DAT_0096bd8c == '\0')) {
    FUN_005e825c(local_210,local_210,auStack_150);
    iVar8 = collproc::CollLine(0x951500,local_200,0,moby,0);
    pMVar12 = CollOutput.pMoby;
    if (((iVar8 != 0) && (CollOutput.pMoby != (MobyInstance *)0x0)) &&
       (((CollOutput.pMoby)->modeBits & CAN_BE_AUTO_TARGETED) != NONE)) {
      auVar35 = ZEXT416(0xffffffff);
      auVar35 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
      piVar5[4] = (int)CollOutput.pMoby;
      auVar36 = vectorShiftLeftIntegerWord(auVar35,auVar35);
      auVar35 = loadVectorLeftIndexed(8,0x29ea38);
      auVar35 = auVar35 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar37 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar35 = vectorMultiplyAddFloatingPoint
                          (auVar37,auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,
                           auVar36);
      auVar35 = vectorConvertToSignedFixedPointWordSaturate(auVar35,0);
      auVar35 = auVar35 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar6 = storeVectorElementWordIndexed
                        (auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,0x14,uVar13);
      *(undefined4 *)((uint)(piVar5 + 5) & 0xfffffffc) = uVar6;
      piVar5[6] = (int)(CollOutput.ip.z - (pMVar12->pos).z);
    }
    dVar32 = 240.5;
    dVar20 = 1.0;
    iVar8 = (int)(animationSpeed * 240.5);
    local_f8 = (longlong)iVar8;
    dVar14 = (double)fastfunc::FastIntToDouble(worldUpdateTime - (worldUpdateTime / iVar8) * iVar8);
    dVar30 = 240.0;
    dVar28 = 0.01745329238474369;
    fastfunc::FastAddRots(((float)(dVar14 * 360.0) / (animationSpeed * 240.0)) * 0.017453292);
    camera::DrawTargetCrosshair((float)dVar20,moby,0xff180a65,4);
    if (((piVar5[4] != 0) && (*piVar5 == 0)) && (iVar8 = hero::Hero_GetWeaponAmmo(-1), iVar8 != 0))
    {
      iVar8 = piVar5[4];
      fVar1 = GameCamera.posY - *(float *)(iVar8 + 0x14);
      fVar2 = GameCamera.posX - *(float *)(iVar8 + 0x10);
      fVar3 = GameCamera.posZ - *(float *)(iVar8 + 0x18);
      iVar8 = (int)((double)animationSpeed * dVar32);
      local_f8 = (longlong)iVar8;
      dVar20 = ABS(-(double)(SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1) * 0.01 * 0.57 - 0.9
                            ));
      dVar14 = (double)fastfunc::FastIntToDouble
                                 (worldUpdateTime - (worldUpdateTime / iVar8) * iVar8);
      fastfunc::FastAddRots
                ((float)((double)((float)(dVar14 * -360.0) /
                                 (float)((double)animationSpeed * dVar30)) * dVar28));
      camera::DrawTargetCrosshair((float)dVar20,moby,0xff0fff0f,4);
    }
  }
  iVar8 = DAT_0096af98;
  if (DAT_0096af90 != 0) {
    auVar35 = ZEXT416(0xffffffff);
    auVar35 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
    piVar5[4] = DAT_0096af98;
    auVar36 = vectorShiftLeftIntegerWord(auVar35,auVar35);
    auVar35 = loadVectorLeftIndexed(8,0x29ea38);
    auVar35 = auVar35 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar37 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar35 = vectorMultiplyAddFloatingPoint
                        (auVar37,auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,
                         auVar36);
    auVar35 = vectorConvertToSignedFixedPointWordSaturate(auVar35,0);
    auVar35 = auVar35 >> 0x60 & (undefined1  [16])0xffffffff;
    uVar6 = storeVectorElementWordIndexed
                      (auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,0x14,uVar13);
    *(undefined4 *)((uint)(piVar5 + 5) & 0xfffffffc) = uVar6;
    piVar5[6] = (int)(CollOutput.ip.z - *(float *)(iVar8 + 0x18));
  }
  if (((((g_gameMode != GAME_MODE_SCENE) && (*piVar5 == 0)) && (DAT_0096bd8c == '\0')) &&
      ((moby->updateId == '\0' || (moby->updateId == '\x01')))) &&
     (((g_downButtons & DAT_0096ad80) != 0 &&
      (local_f8 = (longlong)(int)(animationSpeed * 22.5),
      (int)(animationSpeed * 22.5) < DAT_0096ad90)))) {
    dVar14 = 0.0;
    local_1e0 = 0.0;
    local_1dc = 0.0;
    if (moby->animationId == '\0') {
      local_f8 = (longlong)(int)(animationSpeed * 4.5);
      mobyutil::MB_SetAnimation(moby,1,0,(int)(animationSpeed * 4.5));
    }
    if ((g_heroState == WEAPON_FIRST_PERSON_VIEW) && ((g_heroMobyPtr->modeBits & DISABLED) != NONE))
    {
      local_1d8 = mobyutil::g_FrameTime * 10.0;
      FUN_005e825c(&local_1e0,&local_1e0,auStack_150);
    }
    else {
      fVar1 = mobyutil::g_FrameTime * 10.0;
      local_1e0 = DAT_0096a340 * 0.0 + DAT_0096a320 * fVar1 + DAT_0096a330 * 0.0;
      local_1dc = DAT_0096a344 * 0.0 + DAT_0096a324 * fVar1 + DAT_0096a334 * 0.0;
      local_1d8 = DAT_0096a348 * 0.0 + DAT_0096a328 * fVar1 + DAT_0096a338 * 0.0;
    }
    iVar8 = hero::hero_ConsumeAmmo(-1,1);
    if (iVar8 == 0) {
      sound::PlayMobySound(1,0,moby);
    }
    else {
      if (DAT_0096af90 == 0) {
        dVar20 = (double)FUN_005e8338((double)local_1e0,(double)local_1dc);
      }
      else {
        dVar20 = (double)DAT_0096af9c;
      }
      dVar28 = (double)FUN_005e8338((double)SQRT(local_1e0 * local_1e0 + local_1dc * local_1dc),
                                    (double)local_1d8);
      local_100 = (float)dVar20;
      dVar28 = -dVar28;
      local_104 = (float)dVar28;
      if ((g_heroState == WEAPON_FIRST_PERSON_VIEW) &&
         ((g_heroMobyPtr->modeBits & DISABLED) != NONE)) {
        local_108 = (float)dVar26;
        FUN_005e825c(&local_1d0,&local_1d0,auStack_150);
        local_1d0 = GameCamera.posX + 0.15;
        local_1cc = GameCamera.posY + 0.3;
        local_1c8 = GameCamera.posZ + 0.75;
        pMVar12 = (MobyInstance *)0x0;
        if (piVar5[4] != 0) {
          local_108 = (float)piVar5[6];
          pMVar12 = (MobyInstance *)0x0;
        }
      }
      else {
        local_108 = (float)dVar26;
        mobyfunc::GetBonePosition(moby,0,&local_1d0);
        pMVar12 = (MobyInstance *)0x0;
        if (DAT_00a49344 != (MobyInstance *)0x0) {
          dVar23 = 0.5;
          dVar30 = 1.0471975803375244;
          dVar32 = 0.7853981852531433;
          dVar27 = 0.6981316804885864;
          pMVar12 = (MobyInstance *)0x0;
          dVar21 = 2.0;
          dVar19 = 1.5707963705062866;
          dVar25 = 0.1745329201221466;
          dVar34 = 0.125;
          local_110 = 2.5;
          dVar24 = 1.0;
          dVar22 = -1.0;
          dVar26 = dVar20;
          moby_00 = DAT_00a49344;
          iVar8 = 0;
          do {
            dVar20 = dVar26;
            if (moby_00->state < 0x80) {
              fVar1 = (moby_00->pos).x;
              fVar2 = (moby_00->pos).y;
              fVar3 = (moby_00->pos).z;
              iVar9 = mobyutil::MB_GetPvarsIfMobyHasThem(moby_00);
              dVar20 = dVar23;
              if (iVar9 != 0) {
                dVar20 = (double)*(float *)(iVar9 + 0x10);
              }
              fVar3 = (float)((double)fVar3 + dVar20);
              dVar20 = dVar26;
              if ((((moby_00->modeBits & CAN_BE_AUTO_TARGETED) != NONE) &&
                  (moby_00->pClass != (MobyClass *)0x0)) && ((short)moby_00->pClass->mode_bits == 5)
                 ) {
                dVar20 = (double)FUN_005e8338((double)(fVar1 - local_1d0),
                                              (double)(fVar2 - local_1cc));
                dVar15 = (double)FUN_005e8338((double)SQRT((local_1d0 - fVar1) * (local_1d0 - fVar1)
                                                           + (local_1cc - fVar2) *
                                                             (local_1cc - fVar2)),
                                              (double)(fVar3 - local_1c8));
                dVar31 = (double)SQRT((local_1c8 - fVar3) * (local_1c8 - fVar3) +
                                      (local_1d0 - fVar1) * (local_1d0 - fVar1) +
                                      (local_1cc - fVar2) * (local_1cc - fVar2));
                dVar16 = dVar20;
                if (dVar31 < (double)local_110) {
                  dVar33 = (double)(g_heroMobyPtr->rotation).z;
                  dVar16 = (double)FUN_005e8338((double)((moby_00->pos).x - g_heroPosition.x),
                                                (double)((moby_00->pos).y - g_heroPosition.y));
                  dVar33 = (double)fastfunc::FastSubRots((float)dVar33,(float)dVar16);
                  dVar16 = dVar20;
                  if ((dVar33 < dVar30) && (ABS(dVar15) < dVar32)) {
                    dVar28 = -dVar15;
                    local_10c = (float)dVar31;
                    pMVar12 = moby_00;
                    break;
                  }
                }
                dVar20 = dVar26;
                if (dVar31 <= (double)local_10c) {
                  dVar20 = (double)fastfunc::FastIntToDouble(g_goldWeaponsArray.devastator);
                  mobyutil::MB_SphericalToVector
                            ((float)dVar31,(float)dVar26,
                             (float)((double)DAT_00969fc4 * dVar23 + dVar28),&local_1b0);
                  local_1ac = local_1ac + local_1cc;
                  local_1b0 = local_1b0 + local_1d0;
                  local_1a8 = local_1a8 + local_1c8;
                  dVar29 = (double)(float)(dVar20 * dVar27 + dVar25);
                  dVar33 = (double)(SQRT((local_1a8 - fVar3) * (local_1a8 - fVar3) +
                                         (local_1b0 - fVar1) * (local_1b0 - fVar1) +
                                         (local_1ac - fVar2) * (local_1ac - fVar2)) /
                                   (float)(dVar31 * dVar21));
                  dVar20 = dVar33;
                  if (dVar33 - dVar14 < 0.0) {
                    dVar20 = ABS(dVar33);
                  }
                  dVar17 = dVar24;
                  if (dVar33 - dVar14 < 0.0) {
                    dVar17 = dVar22;
                  }
                  dVar33 = (double)(float)(dVar24 - dVar20);
                  if ((double)(float)(dVar24 - dVar20) - dVar14 < 0.0) {
                    dVar33 = dVar14;
                  }
                  dVar33 = (double)(float)((double)(float)(-(double)(float)((double)((float)((double
                                                  )(float)(dVar20 * dVar20) * dVar20) * DAT_007358cc
                                                  + (float)((double)(float)(dVar20 * dVar20) *
                                                            (double)DAT_007358c8 +
                                                           (double)(float)(dVar20 * (double)
                                                  DAT_007358c4 + (double)DAT_007358c0))) *
                                                  (double)(float)SQRT(dVar33) - dVar19) * dVar17) *
                                          dVar21);
                  if ((dVar29 < dVar33) && (iVar9 != 0)) {
                    dVar20 = (double)fastfunc::FastIntToDouble(*(undefined1 *)(iVar9 + 10));
                    if ((double)(float)(dVar20 * dVar34) < dVar31) {
                      dVar17 = (double)(float)((double)(float)(dVar20 * dVar34) / dVar31);
                      dVar20 = dVar17;
                      if (dVar17 - dVar14 < 0.0) {
                        dVar20 = ABS(dVar17);
                      }
                      dVar18 = dVar24;
                      if (dVar17 - dVar14 < 0.0) {
                        dVar18 = dVar22;
                      }
                      dVar17 = (double)(float)(dVar24 - dVar20);
                      if ((double)(float)(dVar24 - dVar20) - dVar14 < 0.0) {
                        dVar17 = dVar14;
                      }
                      dVar33 = -(double)(float)(-(double)(float)((double)((float)((double)(float)(
                                                  dVar20 * dVar20) * dVar20) * DAT_007358cc +
                                                  (float)((double)(float)(dVar20 * dVar20) *
                                                          (double)DAT_007358c8 +
                                                         (double)(float)(dVar20 * (double)
                                                  DAT_007358c4 + (double)DAT_007358c0))) *
                                                  (double)(float)SQRT(dVar17) - dVar19) * dVar18 -
                                               dVar33);
                      if (dVar33 < dVar14) {
                        dVar33 = dVar14;
                      }
                    }
                  }
                  dVar20 = dVar26;
                  if ((dVar33 < dVar29) &&
                     (iVar10 = collproc::CollLine(0x951500,local_1c0,6,moby,0), dVar20 = dVar26,
                     iVar10 == 0)) {
                    dVar28 = -dVar15;
                    iVar10 = mobyutil::MB_FindMobyByVarId(moby_00);
                    local_10c = (float)dVar31;
                    dVar20 = dVar16;
                    pMVar12 = moby_00;
                    if (iVar10 == 0) {
                      piVar5[4] = (int)moby_00;
                      dVar26 = dVar23;
                      if (iVar9 != 0) {
                        dVar26 = (double)*(float *)(iVar9 + 0x10);
                      }
                      local_108 = (float)dVar26;
                    }
                  }
                }
              }
            }
            moby_00 = *(MobyInstance **)((int)&DAT_00a49348 + iVar8);
            dVar26 = dVar20;
            iVar8 = iVar8 + 4;
          } while (moby_00 != (MobyInstance *)0x0);
        }
      }
      sound::PlayMobySound(0,0,moby);
      fVar1 = animationSpeed;
      auVar35 = ZEXT416(0xffffffff);
      auVar36 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
      auVar35 = ZEXT416(0xffffffff);
      auVar35 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
      auVar37 = vectorShiftLeftIntegerWord(auVar36,auVar36);
      auVar39 = vectorShiftLeftIntegerWord(auVar35,auVar35);
      auVar35 = loadVectorLeftIndexed(0x6c,0x29ea38);
      auVar38 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar36 = loadVectorLeftIndexed(0x70,0x29ea38);
      auVar35 = auVar35 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar36 = auVar36 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar35 = vectorMultiplyAddFloatingPoint
                          (auVar38,auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,
                           auVar37);
      auVar36 = vectorMultiplyAddFloatingPoint
                          (auVar38,auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60,
                           auVar39);
      dVar26 = 10.5;
      dVar14 = (double)local_108;
      auVar35 = vectorConvertToSignedFixedPointWordSaturate(auVar35,0);
      auVar38 = vectorConvertToSignedFixedPointWordSaturate(auVar36,0);
      auVar36._0_4_ = auVar35._0_4_ + auVar38._0_4_;
      auVar36._8_8_ = auVar35._8_8_;
      auVar36._4_4_ = auVar35._4_4_ + auVar38._4_4_;
      auVar37._0_8_ = auVar36._0_8_;
      auVar37._12_4_ = auVar35._12_4_;
      auVar37._8_4_ = auVar35._8_4_ + auVar38._8_4_;
      auVar35._0_12_ = auVar37._0_12_;
      auVar35._12_4_ = auVar37._12_4_ + auVar38._12_4_;
      auVar35 = vectorSplatHalfWord(auVar35,1);
      uVar11 = storeVectorElementHalfWordIndexed(auVar35,0x1e,uVar13);
      *(undefined2 *)((int)piVar5 + 0x1e) = uVar11;
      if (g_heroState != WEAPON_FIRST_PERSON_VIEW) {
        mobyupdate_helpers::M157_0029e578(moby);
        fVar1 = animationSpeed;
      }
      if (DAT_00a0fd7c != -1) {
        DAT_00a0fd7c = DAT_00a0fd7c + 1;
      }
      dVar30 = 0.5;
      iVar8 = (int)(fVar1 * (float)((double)(longlong)update::g_GameFrameCount + 0.5));
      local_f8 = (longlong)iVar8;
      if ((int)(uint)DAT_00a0fd7e < iVar8 / 600) {
        sVar4 = (short)(iVar8 >> 0x1f);
        DAT_00a0fd7e = ((short)(iVar8 / 600) + sVar4) -
                       ((short)((short)(iVar8 / 0x2580000) + sVar4) >> 0xf);
      }
      DAT_00a0fd80 = DAT_00a0fd80 | 1 << (Level & 0x3f) | 0x80000000;
      if (DAT_0096bfa8 == 1 && g_heroState != WEAPON_FIRST_PERSON_VIEW) {
        dVar28 = (double)(moby->rotation).z;
        dVar20 = (double)DAT_00722244;
        iVar8 = mobyutil::MB_GetPvarsIfMobyHasThem((MobyInstance *)piVar5[4]);
        if (iVar8 != 0) {
          dVar14 = (double)*(float *)(iVar8 + 0x10);
        }
        FUN_00292d88(dVar28,dVar20,dVar14,dVar28,dVar20,moby,&local_1d0);
      }
      else if (2.0 <= local_10c) {
        if (piVar5[4] == 0) {
          if (pMVar12 == (MobyInstance *)0x0) {
            if (g_heroState != WEAPON_FIRST_PERSON_VIEW) {
              local_104 = -(float)((double)DAT_00969fc4 * 0.5 - (double)local_104);
              dVar28 = -(double)(float)((double)DAT_00969fc4 * 0.5 - dVar28);
            }
          }
          else {
            dVar20 = (double)FUN_002931b8(6);
            fVar1 = (pMVar12->pos).x;
            fVar2 = (pMVar12->pos).y;
            fVar3 = (pMVar12->pos).z;
            iVar8 = mobyutil::MB_GetPvarsIfMobyHasThem(pMVar12);
            dVar28 = dVar30;
            if (iVar8 != 0) {
              dVar28 = (double)*(float *)(iVar8 + 0x10);
            }
            local_104 = -(float)((double)DAT_00969fc4 * dVar30 - (double)local_104);
            mobyutil::MB_SphericalToVector((float)dVar20,local_100,local_104,&local_1a0);
            local_1a0 = local_1a0 + local_1d0;
            local_19c = local_19c + local_1cc;
            local_198 = local_198 + local_1c8;
            dVar20 = (double)FUN_005e8338((double)(fVar1 - local_1a0),(double)(fVar2 - local_19c));
            fVar2 = local_19c - fVar2;
            fVar1 = local_1a0 - fVar1;
            dVar28 = (double)FUN_005e8338((double)SQRT(fVar1 * fVar1 + fVar2 * fVar2),
                                          (double)((float)((double)fVar3 + dVar28) - local_198));
            dVar28 = -dVar28;
          }
        }
        FUN_00292d88(dVar20,dVar28,dVar14,(double)local_100,(double)local_104,moby,&local_1d0);
      }
      else {
        iVar8 = mobyutil::MB_GetPvarsIfMobyHasThem((MobyInstance *)piVar5[4]);
        if (iVar8 != 0) {
          dVar14 = (double)*(float *)(iVar8 + 0x10);
        }
        FUN_00292d88(dVar20,dVar28,dVar14,dVar20,dVar28,moby,&local_1d0);
      }
      if ((hero::g_heroStateType == 0) ||
         ((g_heroState == WALKING &&
          ((int)(((uint)((int)hero::g_heroPadMagnitude >> 0x1f) >> 1 ^ hero::g_heroPadMagnitude) -
                ((int)hero::g_heroPadMagnitude >> 0x1f)) < 0x3f333333)))) {
        hero::Hero_TransAnim((float)(longlong)((double)animationSpeed * dVar26),0x36,1);
      }
      else {
        hero::Hero_PlayFiringAnim();
      }
    }
    auVar35 = ZEXT416(0xffffffff);
    auVar35 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
    auVar36 = vectorShiftLeftIntegerWord(auVar35,auVar35);
    auVar35 = loadVectorLeftIndexed(0x74,0x29ea38);
    auVar35 = auVar35 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar37 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar35 = vectorMultiplyAddFloatingPoint
                        (auVar37,auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,
                         auVar36);
    auVar35 = vectorConvertToSignedFixedPointWordSaturate(auVar35,0);
    auVar35 = auVar35 >> 0x60 & (undefined1  [16])0xffffffff;
    uVar6 = storeVectorElementWordIndexed
                      (auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,0,uVar13);
    *(undefined4 *)((uint)piVar5 & 0xfffffffc) = uVar6;
  }
  if (moby->updateId != '\x02') {
    sVar4 = *(short *)((int)piVar5 + 0x1e);
    if (0 < sVar4) {
      dVar14 = 10.5;
      iVar8 = (int)(animationSpeed * 10.5);
      local_f8 = (longlong)iVar8;
      dVar26 = 0.800000011920929;
      if (iVar8 < sVar4) {
        dVar25 = 5.5;
        local_f8 = (longlong)(int)(animationSpeed * 5.5);
        dVar20 = (double)fastfunc::FastIntToDouble
                                   (((int)(animationSpeed * 5.5) + iVar8) - (int)sVar4);
        dVar28 = (double)animationSpeed * dVar25;
        dVar27 = (double)(float)dVar28;
        iVar8 = (int)((double)animationSpeed * dVar14);
        local_f8 = (longlong)iVar8;
        dVar28 = (double)fastfunc::FastIntToDouble
                                   (((int)dVar28 + iVar8) - (int)*(short *)((int)piVar5 + 0x1e));
        dVar30 = (double)animationSpeed * dVar25;
        dVar32 = (double)(float)dVar30;
        iVar8 = (int)((double)animationSpeed * dVar14);
        local_f8 = (longlong)iVar8;
        dVar30 = (double)fastfunc::FastIntToDouble
                                   (((int)dVar30 + iVar8) - (int)*(short *)((int)piVar5 + 0x1e));
        dVar14 = dVar25;
      }
      else {
        dVar20 = (double)fastfunc::FastIntToDouble(sVar4);
        dVar27 = (double)(float)((double)animationSpeed * dVar14);
        dVar28 = (double)fastfunc::FastIntToDouble(*(undefined2 *)((int)piVar5 + 0x1e));
        dVar32 = (double)(float)((double)animationSpeed * dVar14);
        dVar30 = (double)fastfunc::FastIntToDouble(*(undefined2 *)((int)piVar5 + 0x1e));
      }
      dVar27 = (double)(float)(dVar20 / (double)(longlong)dVar27);
      dVar34 = (double)((float)(dVar30 * 0.5) / (float)(longlong)((double)animationSpeed * dVar14));
      dVar25 = (double)((float)(dVar28 * dVar26) / (float)(longlong)dVar32);
      mobyfunc::GetBonePosition(moby,0,&local_190);
      dVar14 = (double)FUN_005e8338((double)DAT_0096a350,(double)DAT_0096a354);
      dVar32 = 3.141592502593994;
      fVar1 = (float)(dVar14 + 1.570796251296997);
      dVar30 = -3.141592502593994;
      dVar28 = -0.16666656732559204;
      dVar20 = 0.008333025500178337;
      dVar26 = -0.0001980741071747616;
      dVar14 = 2.601886990305502e-06;
      fVar2 = 3.1415925 - fVar1;
      if (fVar1 - (3.1415925 - fVar1) < 0.0) {
        fVar2 = fVar1;
      }
      fVar3 = -3.1415925 - fVar1;
      if ((-3.1415925 - fVar1) - fVar2 < 0.0) {
        fVar3 = fVar2;
      }
      fVar7 = fVar3 * fVar3;
      fVar1 = fVar7 * fVar7 * fVar3;
      fVar2 = fVar7 * fVar1;
      local_190.x = local_190.x +
                    fVar7 * fVar2 * 2.601887e-06 +
                    fVar2 * -0.0001980741 +
                    fVar1 * 0.0083330255 + fVar7 * fVar3 * -0.16666657 + fVar3;
      dVar19 = (double)FUN_005e8338((double)DAT_0096a350,(double)DAT_0096a354);
      dVar21 = (double)(float)(dVar32 - dVar19);
      if (dVar19 - (double)(float)(dVar32 - dVar19) < 0.0) {
        dVar21 = dVar19;
      }
      dVar32 = (double)(float)(dVar30 - dVar19);
      if ((double)(float)(dVar30 - dVar19) - dVar21 < 0.0) {
        dVar32 = dVar21;
      }
      dVar30 = (double)(float)(dVar32 * dVar32);
      dVar21 = (double)(float)(dVar30 * (double)(float)(dVar30 * dVar32));
      dVar19 = (double)(float)(dVar30 * dVar21);
      local_190.y = local_190.y +
                    (float)((double)(float)(dVar30 * dVar19) * dVar14 +
                           (double)(float)(dVar19 * dVar26 +
                                          (double)(float)(dVar21 * dVar20 +
                                                         (double)(float)((double)(float)(dVar30 * 
                                                  dVar32) * dVar28 + dVar32))));
      local_190.z = local_190.z + 0.3;
      if (*(short *)(piVar5 + 7) == -1) {
        uVar11 = lights::CreatePointLight2(7.0,0,dVar27,dVar25,dVar34,&local_190);
        *(undefined2 *)(piVar5 + 7) = uVar11;
      }
      else {
        iVar8 = (int)((longlong)*(short *)(piVar5 + 7) << 5);
        *(float *)((int)&PointLights[0].pos.x + iVar8) = local_190.x;
        *(float *)((int)&PointLights[0].pos.y + iVar8) = local_190.y;
        *(undefined4 *)((int)&PointLights[0].pos.w + iVar8) = 0x40e00000;
        *(float *)((int)&PointLights[0].pos.z + iVar8) = local_190.z;
        *(float *)((int)&PointLights[0].color.x + iVar8) = (float)dVar27;
        *(float *)((int)&PointLights[0].color.y + iVar8) = (float)dVar25;
        *(float *)((int)&PointLights[0].color.z + iVar8) = (float)dVar34;
      }
      fastfunc::FastDecTimerS16(uVar13 + 0x1e);
      goto LAB_0029fe84;
    }
  }
  if (*(short *)(piVar5 + 7) != -1) {
    lights::DeletePointLight();
    *(undefined2 *)(piVar5 + 7) = 0xffff;
    *(undefined2 *)((int)piVar5 + 0x1e) = 0;
  }
LAB_0029fe84:
  if (moby->animationId == '\x02') {
    lights::DeletePointLight(*(undefined2 *)(piVar5 + 7));
    *(undefined2 *)(piVar5 + 7) = 0xffff;
    *(undefined2 *)((int)piVar5 + 0x1e) = 0;
  }
  return;
}



//==== 0029ff34  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1575_0029ff34(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1575_0029ff34(void)

{
  DAT_007ac7bc = 0x10000;
  return;
}



//==== 0029ff48  ns=mobyupdate_unsorted  size=0x4
// sig: undefined UpdateMoby_1575(MobyInstance * moby)
// callers(0): 
// callees(0): 

/* Moby 1575 */

MobyInstance * mobyupdate_unsorted::UpdateMoby_1575(MobyInstance *moby)

{
  return moby;
}



//==== 0029ff4c  ns=mobyupdate_unsorted  size=0x148
// sig: undefined UpdateMoby_1577(MobyInstance * moby)
// callers(0): 
// callees(1): 000efb38 mobyfunc::DeleteMoby

/* Moby 1577 */

void mobyupdate_unsorted::UpdateMoby_1577(MobyInstance *moby)

{
  int *piVar1;
  MobyInstance *pMVar2;
  MobyInstance *pMVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  
  pMVar2 = MobyInstance;
  piVar1 = (int *)moby->pVar;
  if (moby->state == '\0') {
    iVar6 = 0;
    moby->state = '\x01';
    pMVar2 = MobyInstance;
    piVar4 = piVar1;
    do {
      iVar5 = -1;
      pMVar3 = pMVar2 + piVar4[4];
      if (pMVar3 != (MobyInstance *)0x0) {
        if (pMVar3->state != 0xfd && pMVar3->state != 0xfe) {
          iVar5 = (int)(short)pMVar3->oClass;
        }
      }
      iVar6 = iVar6 + 1;
      piVar4[0xc] = iVar5;
      piVar4 = piVar4 + 1;
    } while (iVar6 < 8);
    if (*piVar1 == 0) {
      moby->state = '\x02';
    }
  }
  else if (moby->state == '\x01') {
    iVar6 = 0;
    iVar5 = 0;
    piVar4 = piVar1;
    do {
      if ((((piVar4[4] == -1) || (piVar4[0xc] == -1)) ||
          (pMVar3 = pMVar2 + piVar4[4], pMVar3 == (MobyInstance *)0x0)) ||
         (((int)(short)pMVar3->oClass != piVar4[0xc] ||
          (pMVar3->state == 0xfd || pMVar3->state == 0xfe)))) {
        piVar4[0xc] = -1;
      }
      else {
        iVar5 = iVar5 + 1;
      }
      iVar6 = iVar6 + 1;
      piVar4 = piVar4 + 1;
    } while (iVar6 < 8);
    if (iVar5 < *piVar1) {
      mobyfunc::DeleteMoby(moby);
    }
  }
  return;
}



