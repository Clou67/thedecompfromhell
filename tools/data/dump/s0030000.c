//==== 000307f8  ns=camera0  size=0x1ec
// sig: undefined ResetCamOfsVectors_0(void)
// callers(2): 000309f0 camera0::Camera0_Init; 000613a0 debug::DebugCamera
// callees(0): 

void camera0::ResetCamOfsVectors_0(int param_1)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
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
  undefined4 uVar15;
  
  uVar15 = DAT_00969f7c;
  fVar14 = DAT_00969f78;
  fVar12 = DAT_00969f74;
  fVar11 = hero::g_heroGravityDir;
  fVar10 = g_heroPosition.x;
  if (*(short *)(param_1 + 0x86) == 0) {
    puVar4 = *(undefined4 **)(param_1 + 0x70);
    puVar4[0x10] = g_heroPosition.x;
    fVar7 = g_heroPosition.y;
    fVar6 = fVar12 * g_heroPosition.y;
    puVar4[0x11] = g_heroPosition.y;
    fVar9 = g_heroPosition.z;
    fVar1 = (float)puVar4[0x58];
    fVar5 = fVar14 * g_heroPosition.z;
    puVar4[0x12] = g_heroPosition.z;
    fVar13 = g_heroPosition.w;
    fVar2 = (float)puVar4[0x3c];
    puVar4[0x13] = g_heroPosition.w;
    puVar4[0x28] = fVar10;
    puVar4[0x29] = fVar7;
    fVar8 = -(fVar14 * fVar1) + fVar9;
    puVar4[0x2a] = fVar9;
    puVar4[0x2b] = fVar13;
    puVar4[0x17] = uVar15;
    fVar6 = -(fVar11 * fVar10) + -fVar6 + -fVar5;
    puVar4[0x2f] = 0;
    puVar4[0x2e] = 0;
    puVar4[0x2d] = 0;
    puVar4[0x2c] = 0;
    puVar4[0x33] = 0;
    puVar4[0x32] = 0;
    puVar4[0x31] = 0;
    puVar4[0x30] = 0;
    puVar4[0x3b] = 0;
    fVar5 = -(fVar12 * fVar1) + fVar7;
    puVar4[0x3a] = 0;
    puVar4[0x39] = 0;
    puVar4[0x38] = 0;
    fVar1 = -(fVar11 * fVar1) + fVar10;
    fVar10 = -(fVar11 * fVar2) + fVar10;
    fVar7 = -(fVar12 * fVar2) + fVar7;
    fVar9 = -(fVar14 * fVar2) + fVar9;
    puVar4[0x24] = fVar1;
    puVar4[0x14] = -(fVar11 * fVar6);
    puVar4[0x15] = -(fVar12 * fVar6);
    puVar4[0x16] = -(fVar14 * fVar6);
    puVar4[0x25] = fVar5;
    puVar4[0x26] = fVar8;
    puVar4[0x27] = uVar15;
    puVar4[0x34] = fVar10;
    puVar4[0x35] = fVar7;
    puVar4[0x36] = fVar9;
    puVar4[0x37] = uVar15;
    puVar4[0x20] = fVar10;
    puVar4[0x21] = fVar7;
    puVar4[0x22] = fVar9;
    puVar4[0x23] = uVar15;
    fVar12 = *(float *)(param_1 + 0x30) - fVar1;
    puVar4[0x4c] = fVar12;
    fVar11 = *(float *)(param_1 + 0x34) - fVar5;
    puVar4[0x4d] = fVar11;
    fVar10 = *(float *)(param_1 + 0x38) - fVar8;
    puVar4[0x4e] = fVar10;
    uVar3 = *(undefined4 *)(param_1 + 0x3c);
    puVar4[0x50] = fVar12;
    puVar4[0x4f] = uVar3;
    puVar4[0x51] = fVar11;
    puVar4[0x52] = fVar10;
    puVar4[0x53] = uVar3;
    *puVar4 = *(undefined4 *)(param_1 + 0x30);
    puVar4[1] = *(undefined4 *)(param_1 + 0x34);
    puVar4[2] = *(undefined4 *)(param_1 + 0x38);
    uVar3 = *(undefined4 *)(param_1 + 0x3c);
    puVar4[0x7c] = fVar1 + fVar12;
    puVar4[3] = uVar3;
    puVar4[0x7d] = fVar5 + fVar11;
    puVar4[0x7e] = fVar8 + fVar10;
    puVar4[0x7f] = uVar15;
    puVar4[0x88] = 0;
  }
  return;
}



//==== 000309f0  ns=camera0  size=0x490
// sig: undefined Camera0_Init(void)
// callers(0): 
// callees(3): 0002bed8 camera0::InitCamTarget_0; 0002ffe8 camera0::SetCam0DefaultPosRot; 000307f8 camera0::ResetCamOfsVectors_0

void camera0::Camera0_Init(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  undefined2 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  void *pvVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  MobyInstance *pMVar15;
  undefined8 in_LR;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  
  pMVar15 = g_heroMobyPtr;
  fVar9 = g_heroPosition.x;
  DAT_0092e280 = 0;
  DAT_0092e284 = 0;
  iVar2 = param_1[0x1c];
  *(float *)(iVar2 + 0x40) = g_heroPosition.x;
  fVar10 = g_heroPosition.y;
  *(float *)(iVar2 + 0x44) = g_heroPosition.y;
  fVar13 = g_heroPosition.z;
  *(float *)(iVar2 + 0x48) = g_heroPosition.z;
  fVar14 = g_heroPosition.w;
  *(undefined4 *)(iVar2 + 0xf0) = 0x3fc00000;
  *(float *)(iVar2 + 0x4c) = fVar14;
  *(undefined1 *)(iVar2 + 0x104) = 0;
  *(MobyInstance **)(iVar2 + 0x100) = pMVar15;
  *(undefined1 *)(iVar2 + 0x116) = 0;
  uVar1 = DAT_0071d480;
  *(undefined4 *)(iVar2 + 0x120) = 0x3e4ccccd;
  *(undefined4 *)(iVar2 + 0x11c) = uVar1;
  uVar1 = DAT_0071d480;
  *(undefined4 *)(iVar2 + 0x128) = 0x3e4ccccd;
  *(undefined4 *)(iVar2 + 0x124) = uVar1;
  *(undefined4 *)(iVar2 + 0xf4) = 0;
  iVar3 = param_1[0x1c];
  *(undefined4 *)(iVar2 + 0xfc) = 0;
  *(undefined4 *)(iVar2 + 0xf8) = 0x3ba3d70a;
  *(undefined2 *)(iVar2 + 0x106) = 0;
  *(undefined4 *)(iVar3 + 0x15c) = 0x40947ae1;
  *(undefined2 *)(iVar2 + 0x118) = 0;
  *(undefined4 *)(iVar3 + 0x160) = 0x40000000;
  *(undefined4 *)(iVar3 + 0x164) = 0;
  *(undefined2 *)(iVar2 + 0x11a) = 0;
  *(undefined4 *)(iVar3 + 0x168) = 0;
  *(undefined4 *)(iVar3 + 0x158) = 0;
  *(undefined4 *)(iVar3 + 0x150) = 0;
  *(undefined4 *)(iVar3 + 0x154) = 0;
  *(undefined4 *)(iVar3 + 0x174) = 0;
  *(undefined4 *)(iVar3 + 0x180) = 0;
  puVar4 = (undefined4 *)param_1[0x1c];
  *(undefined4 *)(iVar3 + 0x178) = 0x3b449ba6;
  *(undefined4 *)(iVar3 + 0x184) = 0x3b449ba6;
  *(undefined4 *)(iVar3 + 0x188) = 0x40947ae1;
  *(undefined2 *)(iVar3 + 0x16c) = 0;
  uVar5 = param_1[0x1c];
  *(undefined2 *)(iVar3 + 0x16e) = 0;
  DAT_0071ea50 = 0x3f400000;
  *(undefined2 *)(puVar4 + 4) = 1;
  *(undefined2 *)((int)puVar4 + 0x12) = 0;
  *(undefined4 *)(uVar5 + 0x30) = 0;
  *(undefined4 *)(uVar5 + 0x2c) = 0;
  *(undefined4 *)(uVar5 + 0x34) = 0;
  *(undefined4 *)(uVar5 + 0x38) = 0;
  *(undefined2 *)(puVar4 + 5) = 0;
  *(undefined4 *)(uVar5 + 400) = 0;
  *(undefined2 *)((int)puVar4 + 0x16) = 0;
  *(undefined4 *)(uVar5 + 0x194) = 0;
  *(undefined4 *)(uVar5 + 0x198) = 0x3ba3d70a;
  *(undefined4 *)(uVar5 + 0x19c) = 0x3e4ccccd;
  *(undefined4 *)(uVar5 + 0x1a0) = 0x3e20d97c;
  *(undefined2 *)(uVar5 + 0x20) = 0;
  *(undefined4 *)(uVar5 + 0x1a4) = 0x4164923a;
  *(undefined4 *)(uVar5 + 0x1a8) = 0;
  *(undefined2 *)(uVar5 + 0x22) = 0;
  *(undefined4 *)(uVar5 + 0x1b0) = 0;
  *(undefined4 *)(uVar5 + 0x1ac) = 0;
  *(undefined4 *)(uVar5 + 0x1b4) = 0;
  fVar8 = g_CameraSpeed;
  *(undefined4 *)(uVar5 + 0x1c0) = 0x3f060a92;
  *(float *)(uVar5 + 0x1bc) = fVar8;
  *(undefined4 *)(uVar5 + 0x1c4) = 0;
  *(undefined4 *)(uVar5 + 0x1c8) = 0;
  *(undefined4 *)(uVar5 + 0x1b8) = 0;
  *(undefined4 *)(uVar5 + 0x1cc) = 0;
  uVar1 = *(undefined4 *)(iVar3 + 0x15c);
  *(undefined4 *)(uVar5 + 0x220) = 0;
  *(undefined4 *)(uVar5 + 0x228) = uVar1;
  *(undefined4 *)(uVar5 + 0x230) = 0;
  *(undefined2 *)(uVar5 + 0x224) = 0;
  *(undefined2 *)(uVar5 + 0x226) = 0;
  auVar16 = ZEXT416(0xffffffff);
  auVar17 = auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60;
  *(undefined4 *)(uVar5 + 0x22c) = DAT_0071d4fc;
  iVar12 = camera::CAMERA_COLL_BUMP_FLAGS;
  auVar16 = loadVectorLeftIndexed(in_LR,0x309e4);
  auVar18 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
  auVar16 = auVar16 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar17 = vectorShiftLeftIntegerWord(auVar17,auVar17);
  uVar6 = param_1[0x1c];
  auVar16 = vectorMultiplyAddFloatingPoint
                      (auVar18,auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60,auVar17
                      );
  auVar16 = vectorConvertToSignedFixedPointWordSaturate(auVar16,0);
  auVar16 = vectorSplatHalfWord(auVar16,1);
  uVar7 = storeVectorElementHalfWordIndexed(auVar16,0x204,(ulonglong)uVar6);
  *(undefined2 *)(uVar6 + 0x204) = uVar7;
  *(undefined4 *)(uVar6 + 0x200) = 0;
  uVar1 = DAT_0071d4bc;
  *(undefined2 *)(uVar6 + 0x20a) = 0;
  *(undefined4 *)(uVar6 + 0x214) = uVar1;
  uVar1 = DAT_0071d4c4;
  *(undefined2 *)(uVar6 + 0x206) = 0;
  *(undefined2 *)(uVar6 + 0x208) = 0;
  *(undefined4 *)(uVar6 + 0x20c) = uVar1;
  uVar1 = DAT_0071d4c0;
  *(int *)(uVar6 + 0x218) = iVar12;
  *(undefined4 *)(uVar6 + 0x210) = uVar1;
  *(undefined4 *)(uVar6 + 0x21c) = 0;
  *(undefined4 *)(uVar6 + 0x1ec) = 0;
  *(undefined4 *)(uVar6 + 0x1e8) = 0;
  *(undefined4 *)(uVar6 + 0x1e4) = 0;
  *(undefined4 *)(uVar6 + 0x1e0) = 0;
  *(undefined2 *)(uVar6 + 0x268) = 0;
  *(undefined4 *)(uVar6 + 0x264) = 0;
  *(float *)(uVar6 + 0x240) = fVar9;
  *(float *)(uVar6 + 0x244) = fVar10;
  *(float *)(uVar6 + 0x248) = fVar13;
  *(float *)(uVar6 + 0x24c) = fVar14;
  *(float *)(uVar6 + 0x250) = fVar9;
  *(float *)(uVar6 + 0x254) = fVar10;
  *(float *)(uVar6 + 600) = fVar13;
  *(float *)(uVar6 + 0x25c) = fVar14;
  if (*(char *)((int)param_1 + 0x7d) == '\x02') {
    ResetCamOfsVectors_0(param_1);
    param_1[0x10] = *param_1;
    param_1[0x11] = param_1[1];
    pvVar11 = GameCamera.pLastUpdCam;
    param_1[0x12] = param_1[2];
    param_1[0x13] = param_1[3];
    auVar16 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    if ((*(short *)((int)pvVar11 + 0x86) == 7) && (DAT_00969fec == 0)) {
      auVar16 = ZEXT416(0);
      auVar16 = auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60;
    }
    else {
      auVar17 = ZEXT416(0xffffffff);
      auVar17 = auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60;
      auVar19 = vectorShiftLeftIntegerWord(auVar17,auVar17);
      auVar17 = loadVectorLeftIndexed(0xffffffffffffd504,0x720000);
      auVar18 = vectorConvertFromSignedFixedPointWord(auVar17,0);
      auVar17 = loadVectorLeftIndexed(4,0x309e4);
      auVar17 = auVar17 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar17 = vectorAddFloatingPoint
                          (auVar18,auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60);
      auVar16 = vectorMultiplyAddFloatingPoint(auVar16,auVar17,auVar19);
      auVar16 = vectorConvertToSignedFixedPointWordSaturate(auVar16,0);
    }
    auVar16 = vectorSplatHalfWord(auVar16,1);
    uVar7 = storeVectorElementHalfWordIndexed(auVar16,0x20,(ulonglong)uVar5);
    *(undefined2 *)(uVar5 + 0x20) = uVar7;
  }
  else {
    InitCamTarget_0(param_1);
    SetCam0DefaultPosRot(1);
  }
  fVar8 = (float)param_1[0xc] - *(float *)(iVar2 + 0x90);
  *(float *)(iVar3 + 0x130) = fVar8;
  fVar9 = (float)param_1[0xd] - *(float *)(iVar2 + 0x94);
  *(float *)(iVar3 + 0x134) = fVar9;
  fVar10 = (float)param_1[0xe] - *(float *)(iVar2 + 0x98);
  *(float *)(iVar3 + 0x138) = fVar10;
  uVar1 = param_1[0xf];
  *(float *)(iVar3 + 0x140) = fVar8;
  *(undefined4 *)(iVar3 + 0x13c) = uVar1;
  *(float *)(iVar3 + 0x144) = fVar9;
  *(float *)(iVar3 + 0x148) = fVar10;
  *(undefined4 *)(iVar3 + 0x14c) = uVar1;
  *puVar4 = param_1[0xc];
  puVar4[1] = param_1[0xd];
  puVar4[2] = param_1[0xe];
  puVar4[3] = param_1[0xf];
  *(undefined4 *)(uVar6 + 0x1f0) = param_1[0xc];
  *(undefined4 *)(uVar6 + 500) = param_1[0xd];
  *(undefined4 *)(uVar6 + 0x1f8) = param_1[0xe];
  *(undefined4 *)(uVar6 + 0x1fc) = param_1[0xf];
  fVar8 = *(float *)(iVar3 + 0x138) * DAT_00969f78 +
          *(float *)(iVar3 + 0x130) * hero::g_heroGravityDir +
          *(float *)(iVar3 + 0x134) * DAT_00969f74;
  fVar9 = -(DAT_00969f74 * fVar8 - *(float *)(iVar3 + 0x134));
  fVar10 = -(hero::g_heroGravityDir * fVar8 - *(float *)(iVar3 + 0x130));
  fVar8 = -(DAT_00969f78 * fVar8 - *(float *)(iVar3 + 0x138));
  fVar8 = *(float *)(iVar3 + 0x15c) - SQRT(fVar8 * fVar8 + fVar10 * fVar10 + fVar9 * fVar9);
  *(float *)(uVar6 + 0x200) = fVar8;
  if (fVar8 < -0.1) {
    *(undefined2 *)(uVar6 + 0x20a) = 1;
  }
  *(undefined4 *)(uVar5 + 0x28) = *(undefined4 *)(iVar3 + 0x160);
  *(undefined4 *)(uVar5 + 0x24) = *(undefined4 *)(iVar2 + 0xf0);
  *(undefined2 *)((int)param_1 + 0x7e) = 0;
  return;
}



//==== 00030e90  ns=camera0  size=0x280
// sig: undefined CalcCamOfs_0(void)
// callers(1): 00031128 camera0::UpdateBumpColl_0
// callees(0): 

undefined8 camera0::CalcCamOfs_0(int param_1,float *param_2,int param_3,undefined8 param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  undefined2 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  
  uVar7 = *(uint *)(param_1 + 0x70);
  fVar1 = *(float *)(uVar7 + 0x130);
  fVar5 = *param_2 - *(float *)(uVar7 + 0x90);
  fVar2 = *(float *)(uVar7 + 0x134);
  *(float *)(uVar7 + 0x130) = fVar5;
  fVar3 = param_2[1] - *(float *)(uVar7 + 0x94);
  *(float *)(uVar7 + 0x134) = fVar3;
  fVar4 = param_2[2] - *(float *)(uVar7 + 0x98);
  fVar1 = SQRT(*(float *)(uVar7 + 0x138) * *(float *)(uVar7 + 0x138) + fVar1 * fVar1 + fVar2 * fVar2
              );
  *(float *)(uVar7 + 0x138) = fVar4;
  *(float *)(uVar7 + 0x13c) = param_2[3];
  if (*(short *)(uVar7 + 0x208) == 0) {
    fVar2 = SQRT(fVar4 * fVar4 + fVar5 * fVar5 + fVar3 * fVar3);
    if (((g_heroType != '\x02') && (0x3d4ccccd < (uint)ABS(ANALOG_STICKS.x))) && ((int)param_4 != 0)
       ) {
      auVar13 = ZEXT416(0xffffffff);
      auVar13 = auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60;
      auVar15 = loadVectorLeftIndexed(4,0x30e80);
      auVar14 = vectorShiftLeftIntegerWord(auVar13,auVar13);
      auVar13 = auVar15 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar15 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar13 = vectorMultiplyAddFloatingPoint
                          (auVar15,auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60,
                           auVar14);
      fVar2 = -(DAT_0071d498 * DAT_0071f408 - fVar2);
      auVar13 = vectorConvertToSignedFixedPointWordSaturate(auVar13,0);
      auVar13 = vectorSplatHalfWord(auVar13,1);
      uVar9 = storeVectorElementHalfWordIndexed(auVar13,0x204,(ulonglong)uVar7);
      *(undefined2 *)(uVar7 + 0x204) = uVar9;
    }
    if ((param_3 != 0) || (fVar2 <= fVar1 || hero::g_heroStateType == 2)) {
      if (fVar2 < DAT_0071d4a8) {
        if (0.0001 < fVar2) {
          fVar2 = DAT_0071d4a8 / fVar2;
          fVar5 = fVar5 * fVar2;
          fVar3 = fVar3 * fVar2;
          fVar4 = fVar4 * fVar2;
        }
        else {
          iVar8 = *(int *)(uVar7 + 0x100);
          fVar3 = *(float *)(iVar8 + 0xc4);
          fVar1 = *(float *)(iVar8 + 0xc0);
          fVar4 = *(float *)(iVar8 + 200);
          fVar5 = 0.0;
          fVar2 = SQRT(fVar4 * fVar4 + fVar1 * fVar1 + fVar3 * fVar3);
          if (fVar2 == 0.0) {
            uVar6 = *(undefined4 *)(iVar8 + 0xcc);
            fVar4 = fVar5;
            fVar3 = fVar5;
          }
          else {
            fVar2 = -DAT_0071d4a8 / fVar2;
            fVar5 = fVar1 * fVar2;
            fVar3 = fVar3 * fVar2;
            uVar6 = *(undefined4 *)(iVar8 + 0xcc);
            fVar4 = fVar4 * fVar2;
          }
          *(undefined4 *)(uVar7 + 0x13c) = uVar6;
        }
        *(float *)(uVar7 + 0x130) = fVar5;
        *(float *)(uVar7 + 0x134) = fVar3;
        *(float *)(uVar7 + 0x138) = fVar4;
        fVar2 = DAT_0071d4a8;
      }
      param_4 = 1;
      *(float *)(uVar7 + 0x200) = *(float *)(uVar7 + 0x15c) - fVar2;
    }
    else {
      fVar2 = fVar1 / fVar2;
      *(float *)(uVar7 + 0x200) = *(float *)(uVar7 + 0x15c) - fVar1;
      *(float *)(uVar7 + 0x130) = fVar5 * fVar2;
      *(float *)(uVar7 + 0x134) = fVar3 * fVar2;
      *(float *)(uVar7 + 0x138) = fVar4 * fVar2;
    }
  }
  else {
    fVar1 = 0.0;
    fVar12 = SQRT(fVar4 * fVar4 + fVar5 * fVar5 + fVar3 * fVar3);
    fVar2 = (*(float *)(uVar7 + 0x15c) - *(float *)(uVar7 + 0x200)) / fVar12;
    fVar11 = fVar1;
    if (0.0 - fVar12 < 0.0) {
      fVar11 = fVar5 * fVar2;
    }
    fVar10 = fVar1;
    if (0.0 - fVar12 < 0.0) {
      fVar10 = fVar3 * fVar2;
    }
    if (0.0 - fVar12 < 0.0) {
      fVar1 = fVar4 * fVar2;
    }
    if (fVar12 - 0.0 < 0.0) {
      fVar11 = fVar5 * fVar2;
    }
    if (fVar12 - 0.0 < 0.0) {
      fVar10 = fVar3 * fVar2;
    }
    if (fVar12 - 0.0 < 0.0) {
      fVar1 = fVar4 * fVar2;
    }
    *(float *)(uVar7 + 0x130) = fVar11;
    *(float *)(uVar7 + 0x134) = fVar10;
    *(float *)(uVar7 + 0x138) = fVar1;
  }
  return param_4;
}



//==== 00031128  ns=camera0  size=0x2e8
// sig: undefined UpdateBumpColl_0(void)
// callers(1): 00032100 camera0::UpdateCamCollisions_0
// callees(3): 0002bb10 camera0::CollPrimSphere; 00030e90 camera0::CalcCamOfs_0; 00059e20 collproc::CollSphere

void camera0::UpdateBumpColl_0(int param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  float local_90;
  float local_8c;
  float local_88;
  
  iVar2 = *(int *)(param_1 + 0x70);
  local_90 = *(float *)(iVar2 + 0x90) + *(float *)(iVar2 + 0x130);
  uVar7 = 0;
  iVar5 = 0;
  uVar6 = 0;
  *(undefined2 *)(iVar2 + 0x208) = 2;
  local_8c = *(float *)(iVar2 + 0x94) + *(float *)(iVar2 + 0x134);
  local_88 = *(float *)(iVar2 + 0x98) + *(float *)(iVar2 + 0x138);
  dVar13 = 1.0;
  iVar3 = *(int *)((int)GameCamera.pCurrentUpdCam + 0x70);
  dVar14 = 0.0;
  dVar15 = 0.5;
  dVar16 = 0.75;
  dVar17 = -0.75;
  dVar12 = (double)(*(float *)(iVar3 + 0x214) * *(float *)(iVar3 + 0x20c) *
                    (*(float *)(iVar3 + 0x210) - 1.0) + DAT_0071d4b8);
  do {
    iVar3 = CollPrimSphere(dVar12,&local_90);
    if (iVar3 == 0) {
      iVar3 = collproc::CollSphere(dVar12,&local_90);
      if (iVar3 == 0) break;
      uVar7 = 1;
    }
    else {
      uVar6 = 1;
    }
    if (*(short *)(iVar2 + 0x208) != 0) {
      local_8c = CollOutput.ip.y - local_8c;
      local_90 = CollOutput.ip.x - local_90;
      local_88 = CollOutput.ip.z - local_88;
      dVar8 = (double)(local_88 * local_88 + local_90 * local_90 + local_8c * local_8c);
      dVar9 = dVar14;
      dVar10 = dVar14;
      dVar11 = dVar14;
      if ((double)(float)SQRT(dVar8) != dVar14) {
        dVar9 = 1.0 / SQRT(dVar8);
        dVar9 = (double)(float)(-(double)(float)((double)(float)(dVar8 * dVar9) * dVar9 - dVar13) *
                                (double)(float)(dVar15 * dVar9) + dVar9);
        dVar9 = (double)(float)(-(double)(float)((double)(float)(dVar8 * dVar9) * dVar9 - dVar13) *
                                (double)(float)(dVar15 * dVar9) + dVar9);
        fVar1 = (float)(-(double)(float)((double)(float)(dVar8 * dVar9) * dVar9 - dVar13) *
                        (double)(float)(dVar15 * dVar9) + dVar9);
        dVar11 = (double)(local_90 * fVar1);
        dVar10 = (double)(local_8c * fVar1);
        dVar9 = (double)(local_88 * fVar1);
      }
      uVar4 = 1;
      dVar9 = (double)(float)((double)(float)GameCamera.field17_0x1b4._20_4_ * dVar9 +
                             (double)(float)((double)(float)GameCamera.field17_0x1b4._12_4_ * dVar11
                                            + (double)(float)((double)(float)GameCamera.
                                                                             field17_0x1b4._16_4_ *
                                                             dVar10)));
      if ((dVar9 <= dVar16) && (uVar4 = 0, dVar9 < dVar17)) {
        uVar4 = 0xffff;
      }
      *(undefined2 *)(iVar2 + 0x208) = uVar4;
    }
    iVar5 = iVar5 + 1;
    local_90 = CollOutput.push.x;
    local_8c = CollOutput.push.y;
    local_88 = CollOutput.push.z;
  } while (iVar5 < 3);
  CalcCamOfs_0(param_1,&local_90,uVar6,uVar7);
  *(undefined4 *)(iVar2 + 0x1fc) = *(undefined4 *)(iVar2 + 0x9c);
  *(float *)(iVar2 + 0x1f0) = *(float *)(iVar2 + 0x90) + *(float *)(iVar2 + 0x130);
  *(float *)(iVar2 + 500) = *(float *)(iVar2 + 0x94) + *(float *)(iVar2 + 0x134);
  *(float *)(iVar2 + 0x1f8) = *(float *)(iVar2 + 0x98) + *(float *)(iVar2 + 0x138);
  if (*(short *)(iVar2 + 0x208) == 2) {
    *(undefined2 *)(iVar2 + 0x208) = 0;
  }
  return;
}



//==== 00031410  ns=camera0  size=0x8
// sig: undefined PushCamInAvoidEnv(void)
// callers(1): 00032100 camera0::UpdateCamCollisions_0
// callees(0): 

undefined8 camera0::PushCamInAvoidEnv(void)

{
  return 0;
}



//==== 00031420  ns=camera0  size=0x160
// sig: undefined GetPushVec_0(void)
// callers(1): 00031590 camera0::UpdateSegmentPush_0
// callees(0): 

void camera0::GetPushVec_0
               (double param_1,double param_2,int param_3,float *param_4,float *param_5,
               float *param_6,float *param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  double dVar15;
  
  fVar3 = param_5[1] - param_6[1];
  fVar2 = *param_5 - *param_6;
  fVar4 = param_5[2] - param_6[2];
  fVar11 = 0.0;
  iVar8 = *(int *)(param_3 + 0x70);
  dVar15 = (double)SQRT(fVar4 * fVar4 + fVar2 * fVar2 + fVar3 * fVar3);
  fVar1 = (float)(param_1 / dVar15);
  fVar10 = fVar11;
  if (0.0 - dVar15 < 0.0) {
    fVar10 = fVar4 * fVar1;
  }
  fVar12 = fVar11;
  if (0.0 - dVar15 < 0.0) {
    fVar12 = fVar3 * fVar1;
  }
  fVar13 = fVar11;
  if (0.0 - dVar15 < 0.0) {
    fVar13 = fVar2 * fVar1;
  }
  if (dVar15 - 0.0 < 0.0) {
    fVar10 = fVar4 * fVar1;
  }
  if (dVar15 - 0.0 < 0.0) {
    fVar12 = fVar3 * fVar1;
  }
  if (dVar15 - 0.0 < 0.0) {
    fVar13 = fVar2 * fVar1;
  }
  fVar10 = param_5[2] + fVar10;
  fVar12 = param_5[1] + fVar12;
  fVar13 = *param_5 + fVar13;
  param_5[2] = fVar10;
  param_5[1] = fVar12;
  *param_5 = fVar13;
  fVar2 = *(float *)(iVar8 + 0x94);
  fVar3 = *(float *)(iVar8 + 0x90);
  fVar12 = fVar12 - fVar2;
  fVar13 = fVar13 - fVar3;
  fVar4 = *(float *)(iVar8 + 0x98);
  fVar10 = fVar10 - fVar4;
  fVar5 = *param_7;
  fVar6 = param_7[1];
  fVar7 = param_7[2];
  param_4[3] = *(float *)(iVar8 + 0x9c);
  dVar15 = (double)SQRT(fVar10 * fVar10 + fVar13 * fVar13 + fVar12 * fVar12);
  fVar1 = (float)(param_2 / dVar15);
  fVar9 = fVar11;
  if (0.0 - dVar15 < 0.0) {
    fVar9 = fVar10 * fVar1;
  }
  fVar14 = fVar11;
  if (0.0 - dVar15 < 0.0) {
    fVar14 = fVar12 * fVar1;
  }
  if (0.0 - dVar15 < 0.0) {
    fVar11 = fVar13 * fVar1;
  }
  if (dVar15 - 0.0 < 0.0) {
    fVar9 = fVar10 * fVar1;
  }
  if (dVar15 - 0.0 < 0.0) {
    fVar14 = fVar12 * fVar1;
  }
  if (dVar15 - 0.0 < 0.0) {
    fVar11 = fVar13 * fVar1;
  }
  param_4[2] = (fVar4 + fVar9) - fVar7;
  param_4[1] = (fVar2 + fVar14) - fVar6;
  *param_4 = (fVar3 + fVar11) - fVar5;
  return;
}



//==== 00031590  ns=camera0  size=0x554
// sig: undefined UpdateSegmentPush_0(void)
// callers(1): 00031b78 camera0::UpdateSegmentColl_0
// callees(3): 00031420 camera0::GetPushVec_0; 00059e20 collproc::CollSphere; 0010d408 mobyutil::MB_SegmentPush

undefined8
camera0::UpdateSegmentPush_0(undefined8 param_1,undefined8 param_2,int param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  undefined8 uVar10;
  int iVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined8 uVar19;
  double dVar20;
  float local_f0;
  float local_ec;
  float local_e8;
  undefined1 local_e0 [16];
  undefined1 local_d0 [16];
  undefined1 local_c0 [16];
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a0;
  float local_9c;
  float local_98;
  
  uVar10 = 0;
  iVar11 = *(int *)((int)GameCamera.pCurrentUpdCam + 0x70);
  iVar5 = *(int *)(param_3 + 0x70);
  uVar19 = 0;
  local_e8 = 0.0;
  local_ec = 0.0;
  local_f0 = 0.0;
  fVar1 = *param_4;
  fVar2 = param_4[1];
  fVar3 = param_4[2];
  fVar4 = param_4[3];
  dVar14 = (double)CollOutput.push.x;
  dVar18 = (double)(*(float *)(iVar11 + 0x214) * *(float *)(iVar11 + 0x20c) *
                    (*(float *)(iVar11 + 0x210) - 1.0) + DAT_0071d4b8);
  iVar11 = iVar5 + 0x90;
  dVar15 = (double)CollOutput.push.y;
  dVar16 = (double)CollOutput.push.z;
  dVar17 = (double)CollOutput.push.w;
  dVar12 = (double)mobyutil::MB_SegmentPush(0,&local_b0,local_d0,iVar11,local_c0);
  fVar6 = *(float *)(iVar5 + 0x94) - local_ac;
  fVar7 = *(float *)(iVar5 + 0x90) - local_b0;
  fVar8 = *(float *)(iVar5 + 0x98) - local_a8;
  dVar20 = 0.75;
  dVar13 = (double)((float)((double)(float)(dVar18 - (double)DAT_0071d4b8) *
                            (double)(SQRT(fVar8 * fVar8 + fVar7 * fVar7 + fVar6 * fVar6) /
                                    (*(float *)(iVar5 + 0x15c) - *(float *)(iVar5 + 0x200))) +
                           (double)DAT_0071d4b8) * 0.75);
  if (dVar12 < dVar13) {
    uVar10 = 1;
    GetPushVec_0((double)(float)(dVar13 - dVar12),param_1,param_3,&local_f0,&local_b0,local_d0,
                 local_e0);
    *param_4 = (float)dVar14;
    param_4[1] = (float)dVar15;
    param_4[2] = (float)dVar16;
    param_4[3] = (float)dVar17;
    iVar9 = collproc::CollSphere
                      (param_2,param_4,0x950000,camera::CAMERA_COLL_SPHERE_FLAGS,g_heroMobyPtr);
    if (iVar9 != 0) {
      dVar12 = (double)mobyutil::MB_SegmentPush(uVar19,&local_b0,local_d0,iVar11,local_c0);
      fVar6 = *(float *)(iVar5 + 0x94) - local_ac;
      fVar7 = *(float *)(iVar5 + 0x90) - local_b0;
      fVar8 = *(float *)(iVar5 + 0x98) - local_a8;
      dVar13 = (double)(float)((double)(float)((double)(float)(dVar18 - (double)DAT_0071d4b8) *
                                               (double)(SQRT(fVar8 * fVar8 +
                                                             fVar7 * fVar7 + fVar6 * fVar6) /
                                                       (*(float *)(iVar5 + 0x15c) -
                                                       *(float *)(iVar5 + 0x200))) +
                                              (double)DAT_0071d4b8) * dVar20);
      if (dVar12 < dVar13) {
        GetPushVec_0((double)(float)(dVar13 - dVar12),param_1,param_3,&local_a0,&local_b0,local_d0,
                     local_e0);
        local_f0 = local_a0 + 0.0;
        local_ec = local_9c + 0.0;
        local_e8 = local_98 + 0.0;
        *param_4 = CollOutput.push.x;
        param_4[1] = CollOutput.push.y;
        param_4[2] = CollOutput.push.z;
        param_4[3] = CollOutput.push.w;
        iVar9 = collproc::CollSphere
                          (param_2,param_4,0x950000,camera::CAMERA_COLL_SPHERE_FLAGS,g_heroMobyPtr);
        if (iVar9 != 0) {
          dVar12 = (double)mobyutil::MB_SegmentPush(uVar19,&local_b0,local_d0,iVar11,local_c0);
          fVar6 = *(float *)(iVar5 + 0x94) - local_ac;
          fVar7 = *(float *)(iVar5 + 0x90) - local_b0;
          fVar8 = *(float *)(iVar5 + 0x98) - local_a8;
          dVar13 = (double)(float)((double)(float)((double)(float)(dVar18 - (double)DAT_0071d4b8) *
                                                   (double)(SQRT(fVar8 * fVar8 +
                                                                 fVar7 * fVar7 + fVar6 * fVar6) /
                                                           (*(float *)(iVar5 + 0x15c) -
                                                           *(float *)(iVar5 + 0x200))) +
                                                  (double)DAT_0071d4b8) * dVar20);
          if (dVar12 < dVar13) {
            GetPushVec_0((double)(float)(dVar13 - dVar12),param_1,param_3,&local_a0,&local_b0,
                         local_d0,local_e0);
            local_f0 = local_f0 + local_a0;
            local_ec = local_ec + local_9c;
            local_e8 = local_e8 + local_98;
          }
        }
      }
    }
  }
  param_4[3] = fVar4;
  *param_4 = fVar1 + local_f0;
  param_4[1] = fVar2 + local_ec;
  param_4[2] = fVar3 + local_e8;
  return uVar10;
}



//==== 00031ae8  ns=camera0  size=0x78
// sig: undefined ExceptionColl(void)
// callers(0): 
// callees(0): 

undefined8 camera0::ExceptionColl(int param_1,int param_2,float *param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((param_2 != 1) ||
     (iVar1 = *(int *)(param_1 + 0x70),
     0.0 <= (CollOutput.ip.z - param_3[2]) * *(float *)(iVar1 + 0x138) +
            (CollOutput.ip.x - *param_3) * *(float *)(iVar1 + 0x130) +
            (CollOutput.ip.y - param_3[1]) * *(float *)(iVar1 + 0x134))) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



//==== 00031b78  ns=camera0  size=0x554
// sig: undefined UpdateSegmentColl_0(void)
// callers(1): 00032100 camera0::UpdateCamCollisions_0
// callees(4): 00031590 camera0::UpdateSegmentPush_0; 000558f8 camera::CamCollGrid_FindPrimAtPnt; 00059e20 collproc::CollSphere; 00502758 fastfunc::FastDoubleToInt

undefined8 camera0::UpdateSegmentColl_0(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined2 uVar7;
  float fVar8;
  undefined4 *puVar9;
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
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float local_d0;
  float local_cc;
  float local_c8;
  
  uVar6 = *(uint *)(param_1 + 0x70);
  fVar2 = *(float *)(uVar6 + 0x134);
  fVar3 = *(float *)(uVar6 + 0x130);
  fVar4 = *(float *)(uVar6 + 0x138);
  dVar26 = 0.0;
  local_d0 = *(float *)(uVar6 + 0x90);
  local_cc = *(float *)(uVar6 + 0x94);
  local_c8 = *(float *)(uVar6 + 0x98);
  dVar25 = (double)DAT_0071d4b8;
  fVar1 = fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2;
  uVar5 = *(undefined4 *)(uVar6 + 0x9c);
  dVar22 = dVar26;
  dVar23 = dVar26;
  dVar24 = dVar26;
  if (SQRT(fVar1) != 0.0) {
    fVar8 = 1.0 / SQRT(fVar1);
    fVar8 = -(fVar1 * fVar8 * fVar8 - 1.0) * fVar8 * 0.5 + fVar8;
    fVar8 = -(fVar1 * fVar8 * fVar8 - 1.0) * fVar8 * 0.5 + fVar8;
    fVar8 = -(fVar1 * fVar8 * fVar8 - 1.0) * fVar8 * 0.5 + fVar8;
    dVar24 = (double)(fVar3 * fVar8);
    dVar23 = (double)(fVar2 * fVar8);
    dVar22 = (double)(fVar4 * fVar8);
  }
  puVar9 = &DAT_00031b60;
  iVar11 = 0;
  dVar21 = 1.0;
  uVar12 = 0;
  dVar20 = 0.5;
  dVar19 = 0.75;
  auVar30 = loadVectorLeftIndexed(0x10,0x31b60);
  auVar30 = auVar30 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar30 = auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60;
  dVar27 = dVar26;
  for (; puVar9 = (undefined4 *)
                  fastfunc::FastDoubleToInt
                            ((double)(float)((double)*(float *)(uVar6 + 0x210) - dVar21),puVar9),
      iVar11 < (int)puVar9; iVar11 = iVar11 + 1) {
    if (((0 < iVar11) &&
        (iVar10 = camera::CamCollGrid_FindPrimAtPnt
                            (dVar26,CONCAT44(local_d0,local_cc),CONCAT44(local_c8,uVar5)),
        puVar9 = (undefined4 *)camera::CAMERA_COLL_SPHERE_FLAGS, iVar10 == 0)) &&
       (puVar9 = (undefined4 *)
                 collproc::CollSphere
                           (dVar25,&local_d0,g_heroMobyPtr,camera::CAMERA_COLL_SPHERE_FLAGS,
                            g_heroMobyPtr), puVar9 != (undefined4 *)0x0)) {
      dVar18 = (double)local_d0;
      dVar17 = (double)local_cc;
      dVar16 = (double)local_c8;
      dVar15 = (double)CollOutput.ip.x;
      dVar14 = (double)CollOutput.ip.y;
      dVar13 = (double)CollOutput.ip.z;
      if ((iVar11 != 1) ||
         (puVar9 = *(undefined4 **)(param_1 + 0x70),
         dVar26 <= (double)((float)(dVar13 - dVar16) * (float)puVar9[0x4e] +
                           (float)(dVar15 - dVar18) * (float)puVar9[0x4c] +
                           (float)(dVar14 - dVar17) * (float)puVar9[0x4d]))) {
        puVar9 = (undefined4 *)UpdateSegmentPush_0(dVar27,dVar25,param_1,&local_d0,iVar11);
        auVar28 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        if (puVar9 != (undefined4 *)0x0) {
          puVar9 = (undefined4 *)(uint)g_heroType;
          uVar12 = 1;
          if ((g_heroType != 2) &&
             (puVar9 = (undefined4 *)((uint)ANALOG_STICKS.x & 0x7fffffff),
             (undefined4 *)0x3d4ccccd < puVar9)) {
            fVar2 = (float)(dVar14 - dVar17);
            fVar3 = (float)(dVar15 - dVar18);
            fVar4 = (float)(dVar13 - dVar16);
            dVar13 = (double)(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
            dVar22 = dVar26;
            dVar23 = dVar26;
            dVar24 = dVar26;
            if ((double)(float)SQRT(dVar13) != dVar26) {
              dVar22 = 1.0 / SQRT(dVar13);
              dVar22 = (double)(float)(-(double)(float)((double)(float)(dVar13 * dVar22) * dVar22 -
                                                       dVar21) * (double)(float)(dVar20 * dVar22) +
                                      dVar22);
              dVar22 = (double)(float)(-(double)(float)((double)(float)(dVar13 * dVar22) * dVar22 -
                                                       dVar21) * (double)(float)(dVar20 * dVar22) +
                                      dVar22);
              fVar1 = (float)(-(double)(float)((double)(float)(dVar13 * dVar22) * dVar22 - dVar21) *
                              (double)(float)(dVar20 * dVar22) + dVar22);
              dVar24 = (double)(fVar3 * fVar1);
              dVar22 = (double)(fVar2 * fVar1);
              dVar23 = (double)(fVar4 * fVar1);
            }
            if (ABS((double)(float)((double)(float)GameCamera.field17_0x1b4._20_4_ * dVar23 +
                                   (double)(float)((double)(float)GameCamera.field17_0x1b4._12_4_ *
                                                   dVar24 + (double)(float)((double)(float)
                                                  GameCamera.field17_0x1b4._16_4_ * dVar22)))) <
                dVar19) {
              auVar29 = ZEXT416(0xffffffff);
              auVar29 = auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60;
              auVar29 = vectorShiftLeftIntegerWord(auVar29,auVar29);
              puVar9 = (undefined4 *)0x204;
              auVar28 = vectorMultiplyAddFloatingPoint(auVar28,auVar30,auVar29);
              fVar2 = DAT_0071d498 * DAT_0071f408 + *(float *)(uVar6 + 0x200);
              auVar28 = vectorConvertToSignedFixedPointWordSaturate(auVar28,0);
              auVar28 = vectorSplatHalfWord(auVar28,1);
              uVar7 = storeVectorElementHalfWordIndexed(auVar28,0x204,(ulonglong)uVar6);
              *(undefined2 *)(uVar6 + 0x204) = uVar7;
              *(float *)(uVar6 + 0x200) = fVar2;
              if (*(float *)(uVar6 + 0x15c) - fVar2 < DAT_0071d4a8) {
                *(float *)(uVar6 + 0x200) = *(float *)(uVar6 + 0x15c) - DAT_0071d4a8;
              }
            }
          }
          fVar3 = local_cc - *(float *)(uVar6 + 0x94);
          fVar4 = local_d0 - *(float *)(uVar6 + 0x90);
          fVar1 = local_c8 - *(float *)(uVar6 + 0x98);
          *(undefined4 *)(uVar6 + 0x13c) = uVar5;
          dVar22 = (double)SQRT(fVar1 * fVar1 + fVar4 * fVar4 + fVar3 * fVar3);
          fVar2 = (float)((double)(*(float *)(uVar6 + 0x15c) - *(float *)(uVar6 + 0x200)) / dVar22);
          dVar13 = dVar26;
          if (dVar26 - dVar22 < 0.0) {
            dVar13 = (double)(fVar3 * fVar2);
          }
          dVar14 = dVar26;
          if (dVar26 - dVar22 < 0.0) {
            dVar14 = (double)(fVar4 * fVar2);
          }
          dVar15 = dVar26;
          if (dVar26 - dVar22 < 0.0) {
            dVar15 = (double)(fVar1 * fVar2);
          }
          if (dVar22 - dVar26 < 0.0) {
            dVar13 = (double)(fVar3 * fVar2);
          }
          if (dVar22 - dVar26 < 0.0) {
            dVar14 = (double)(fVar4 * fVar2);
          }
          if (dVar22 - dVar26 < 0.0) {
            dVar15 = (double)(fVar1 * fVar2);
          }
          *(float *)(uVar6 + 0x130) = (float)dVar14;
          *(float *)(uVar6 + 0x134) = (float)dVar13;
          *(float *)(uVar6 + 0x138) = (float)dVar15;
          dVar16 = (double)(float)(dVar15 * dVar15 +
                                  (double)(float)(dVar14 * dVar14 + (double)(float)(dVar13 * dVar13)
                                                 ));
          dVar22 = dVar26;
          dVar23 = dVar26;
          dVar24 = dVar26;
          if ((double)(float)SQRT(dVar16) != dVar26) {
            dVar22 = 1.0 / SQRT(dVar16);
            dVar22 = (double)(float)(-(double)(float)((double)(float)(dVar16 * dVar22) * dVar22 -
                                                     dVar21) * (double)(float)(dVar20 * dVar22) +
                                    dVar22);
            dVar22 = (double)(float)(-(double)(float)((double)(float)(dVar16 * dVar22) * dVar22 -
                                                     dVar21) * (double)(float)(dVar20 * dVar22) +
                                    dVar22);
            dVar22 = (double)(float)(-(double)(float)((double)(float)(dVar16 * dVar22) * dVar22 -
                                                     dVar21) * (double)(float)(dVar20 * dVar22) +
                                    dVar22);
            dVar22 = (double)(float)(dVar15 * dVar22);
            dVar23 = (double)(float)(dVar13 * dVar22);
            dVar24 = (double)(float)(dVar14 * dVar22);
          }
        }
      }
    }
    dVar25 = (double)(float)((double)*(float *)(uVar6 + 0x214) * (double)*(float *)(uVar6 + 0x20c) +
                            dVar25);
    dVar27 = (double)(float)(dVar27 + dVar25);
    dVar13 = (double)(float)((double)((*(float *)(uVar6 + 0x15c) - *(float *)(uVar6 + 0x200)) /
                                     *(float *)(uVar6 + 0x15c)) * dVar25);
    local_d0 = (float)(dVar13 * dVar24 + (double)local_d0);
    local_cc = (float)(dVar13 * dVar23 + (double)local_cc);
    local_c8 = (float)(dVar13 * dVar22 + (double)local_c8);
  }
  return uVar12;
}



//==== 00032100  ns=camera0  size=0xacc
// sig: undefined UpdateCamCollisions_0(void)
// callers(2): 00034b5c camera0::UpdateFollowCamera; 00034c28 camera0::Camera0_Update
// callees(15): 00031128 camera0::UpdateBumpColl_0; 00031410 camera0::PushCamInAvoidEnv; 00031b78 camera0::UpdateSegmentColl_0; 0005393c camera::Camera_resetToFollow; 000558f8 camera::CamCollGrid_FindPrimAtPnt; 00057820 collproc::CollLine; 0005e598 collproc::CollMobySphere; 000fecf0 mobyutil::MB_CosineInterpolate; 001057cc mobyutil::MB_HasCollPrims; 0010581c mobyutil::SetCollDamIn; 00105ab4 mobyutil::CollDamageMobyDirect; 0010af88 mobyutil::MB_isCrate; 001113e0 mobyutil::MB_RotateQuatAxisAngle; 004fffb4 fastfunc::FastDecTimerS16; 00502730 fastfunc::FastIntToDouble

void camera0::UpdateCamCollisions_0(int param_1)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  short sVar6;
  uint uVar7;
  int iVar8;
  undefined2 uVar9;
  float fVar10;
  MobyInstance *pMVar11;
  float *outQuat;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  bool bVar16;
  int *piVar17;
  int iVar18;
  ulonglong uVar19;
  int iVar20;
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
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 local_160 [16];
  undefined1 local_150 [16];
  undefined1 local_140 [16];
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  
  uVar7 = *(uint *)(param_1 + 0x70);
  uVar19 = (ulonglong)uVar7;
  iVar15 = 0;
  outQuat = (float *)(uVar7 + 0x130);
  iVar20 = 0;
  bVar16 = false;
  if ((Level == Quartu) && (g_heroType == '\x02')) {
    bVar16 = true;
  }
  dVar40 = 0.5;
  iVar12 = collproc::CollMobySphere
                     ((double)(((*(float *)(uVar7 + 0x15c) - *(float *)(uVar7 + 0x200)) + 1.5) * 0.5
                              ),local_160,Level,1,g_heroMobyPtr,0);
  if ((0 < iVar12) && (iVar14 = 0, 0 < iVar12)) {
    iVar18 = 0;
    piVar17 = &DAT_00a14a00;
    dVar39 = 0.0;
    dVar38 = 1.0;
    dVar37 = 1.5707963705062866;
    dVar36 = 0.4363323152065277;
    dVar35 = -0.01745329238474369;
    dVar34 = 0.01745329238474369;
    dVar33 = -1.0;
    do {
      iVar8 = *piVar17;
      if (*(int *)(iVar8 + 0x94) != 0) {
        iVar13 = mobyutil::MB_HasCollPrims(iVar8);
        dVar30 = (double)(float)GameCamera.field17_0x1b4._12_4_;
        dVar31 = (double)(float)GameCamera.field17_0x1b4._16_4_;
        dVar32 = (double)(float)GameCamera.field17_0x1b4._20_4_;
        if ((iVar13 == 0) || (bVar16)) {
          sVar6 = *(short *)(iVar8 + 0xa6);
          if (((sVar6 == 0xb || sVar6 == 0x72) ||
              ((((sVar6 == 0x2c || (sVar6 == 0x9a)) || (sVar6 == 0xff)) ||
               ((sVar6 == 0x392 || (sVar6 == 0x452)))))) || (sVar6 == 0x353)) {
            dVar22 = (double)(*(float *)(iVar8 + 0x14) - *(float *)(uVar7 + 0x94));
            dVar21 = (double)(*(float *)(iVar8 + 0x10) - *(float *)(uVar7 + 0x90));
            dVar23 = (double)(*(float *)(iVar8 + 0x18) - *(float *)(uVar7 + 0x98));
            dVar27 = (double)(float)(dVar32 * dVar23 +
                                    (double)(float)(dVar30 * dVar21 +
                                                   (double)(float)(dVar31 * dVar22)));
            fVar3 = -(float)(dVar31 * dVar27 - dVar22);
            fVar5 = -(float)(dVar30 * dVar27 - dVar21);
            fVar4 = -(float)(dVar32 * dVar27 - dVar23);
            dVar29 = (double)(fVar4 * fVar4 + fVar5 * fVar5 + fVar3 * fVar3);
            dVar27 = dVar39;
            dVar26 = dVar39;
            dVar28 = dVar39;
            if ((double)(float)SQRT(dVar29) != dVar39) {
              dVar27 = 1.0 / SQRT(dVar29);
              dVar27 = (double)(float)(-(double)(float)((double)(float)(dVar29 * dVar27) * dVar27 -
                                                       dVar38) * (double)(float)(dVar27 * dVar40) +
                                      dVar27);
              dVar27 = (double)(float)(-(double)(float)((double)(float)(dVar29 * dVar27) * dVar27 -
                                                       dVar38) * (double)(float)(dVar27 * dVar40) +
                                      dVar27);
              fVar2 = (float)(-(double)(float)((double)(float)(dVar29 * dVar27) * dVar27 - dVar38) *
                              (double)(float)(dVar27 * dVar40) + dVar27);
              dVar27 = (double)(fVar5 * fVar2);
              dVar26 = (double)(fVar3 * fVar2);
              dVar28 = (double)(fVar4 * fVar2);
            }
            dVar24 = (double)*(float *)(uVar7 + 0x134);
            dVar29 = (double)*(float *)(uVar7 + 0x130);
            dVar25 = (double)*(float *)(uVar7 + 0x138);
            dVar26 = (double)((float)(dVar28 * dVar25 +
                                     (double)(float)(dVar27 * dVar29 +
                                                    (double)(float)(dVar26 * dVar24))) /
                             (*(float *)(uVar7 + 0x15c) - *(float *)(uVar7 + 0x200)));
            dVar27 = dVar26;
            if (dVar26 - dVar39 < 0.0) {
              dVar27 = ABS(dVar26);
            }
            dVar28 = dVar38;
            if (dVar26 - dVar39 < 0.0) {
              dVar28 = dVar33;
            }
            dVar26 = (double)(float)(dVar38 - dVar27);
            if ((double)(float)(dVar38 - dVar27) - dVar39 < 0.0) {
              dVar26 = dVar39;
            }
            if (ABS(-(double)(float)(-(double)(float)((double)((float)((double)(float)(dVar27 * 
                                                  dVar27) * dVar27) * DAT_007358cc +
                                                  (float)((double)(float)(dVar27 * dVar27) *
                                                          (double)DAT_007358c8 +
                                                         (double)(float)(dVar27 * (double)
                                                  DAT_007358c4 + (double)DAT_007358c0))) *
                                                  (double)(float)SQRT(dVar26) - dVar37) * dVar28 -
                                    dVar37)) < dVar36) {
              fVar3 = (float)(dVar32 * dVar29 - (double)(float)(dVar30 * dVar25));
              fVar4 = (float)(dVar31 * dVar25 - (double)(float)(dVar32 * dVar24));
              fVar5 = (float)(dVar30 * dVar24 - (double)(float)(dVar31 * dVar29));
              dVar27 = (double)(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3);
              dVar30 = dVar39;
              dVar31 = dVar39;
              dVar32 = dVar39;
              if ((double)(float)SQRT(dVar27) != dVar39) {
                dVar30 = 1.0 / SQRT(dVar27);
                dVar30 = (double)(float)(-(double)(float)((double)(float)(dVar27 * dVar30) * dVar30
                                                         - dVar38) *
                                         (double)(float)(dVar30 * dVar40) + dVar30);
                dVar30 = (double)(float)(-(double)(float)((double)(float)(dVar27 * dVar30) * dVar30
                                                         - dVar38) *
                                         (double)(float)(dVar30 * dVar40) + dVar30);
                fVar2 = (float)(-(double)(float)((double)(float)(dVar27 * dVar30) * dVar30 - dVar38)
                                * (double)(float)(dVar30 * dVar40) + dVar30);
                dVar32 = (double)(fVar4 * fVar2);
                dVar31 = (double)(fVar3 * fVar2);
                dVar30 = (double)(fVar5 * fVar2);
              }
              if ((double)(float)(dVar30 * dVar23 +
                                 (double)(float)(dVar32 * dVar21 + (double)(float)(dVar31 * dVar22))
                                 ) <= dVar39) {
                mobyutil::MB_RotateQuatAxisAngle((float)dVar34,outQuat,outQuat);
              }
              else {
                mobyutil::MB_RotateQuatAxisAngle((float)dVar35,outQuat,outQuat);
              }
            }
          }
          else {
            iVar20 = iVar20 + 1;
            *(int *)((int)&DAT_0092e28c + iVar18) = iVar8;
            *(undefined4 *)(iVar8 + 0x94) = 0;
            iVar18 = iVar18 + 4;
          }
        }
      }
      iVar14 = iVar14 + 1;
      piVar17 = piVar17 + 1;
    } while (iVar14 < iVar12);
  }
  if (((g_heroState != DEATH_ICE) && ((Level != Gemlik || (g_heroState != DEATH_MUD)))) &&
     (iVar12 = UpdateSegmentColl_0(param_1), iVar12 != 0)) {
    iVar15 = 1;
  }
  iVar12 = PushCamInAvoidEnv(param_1);
  iVar14 = UpdateBumpColl_0(param_1);
  dVar40 = (double)*(float *)(uVar7 + 0x200);
  if ((double)(float)((double)*(float *)(uVar7 + 0x15c) - dVar40) < (double)DAT_0071d4b0) {
    fVar3 = (float)((double)*(float *)(uVar7 + 0x15c) - (double)DAT_0071d4b0);
    dVar40 = (double)fVar3;
    auVar41 = ZEXT416(0xffffffff);
    auVar41 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
    auVar42 = vectorShiftLeftIntegerWord(auVar41,auVar41);
    *(float *)(uVar7 + 0x200) = fVar3;
    auVar41 = loadVectorLeftIndexed(0x24,0x320cc);
    auVar43 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar41 = auVar41 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar41 = vectorMultiplyAddFloatingPoint
                        (auVar43,auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60,
                         auVar42);
    auVar41 = vectorConvertToSignedFixedPointWordSaturate(auVar41,0);
    auVar41 = vectorSplatHalfWord(auVar41,1);
    uVar9 = storeVectorElementHalfWordIndexed(auVar41,0x204,uVar19);
    *(undefined2 *)(uVar7 + 0x204) = uVar9;
  }
  if ((*(short *)(uVar7 + 0x20a) == 0) &&
     ((((uint)((LZCOUNT(-iVar14) << 0x3a) >> 0x3f) &
       (uint)((LZCOUNT(-iVar12) << 0x3a) >> 0x3f) & iVar15 - 1U) != 0xffffffff ||
      ((((int)(animationSpeed * 2000.5) <= (int)*(short *)(uVar7 + 0x204) ||
        (*(short *)(uVar7 + 0x204) < 1)) &&
       ((0x3e999999 <
         (int)(((uint)((int)ANALOG_STICKS.x >> 0x1f) >> 1 ^ (uint)ANALOG_STICKS.x) -
              ((int)ANALOG_STICKS.x >> 0x1f)) ||
        (0x3e999999 <
         (int)(((uint)((int)ANALOG_STICKS.y >> 0x1f) >> 1 ^ (uint)ANALOG_STICKS.y) -
              ((int)ANALOG_STICKS.y >> 0x1f)))))))))) {
    auVar41 = ZEXT416(0xffffffff);
    auVar41 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
    auVar42 = vectorShiftLeftIntegerWord(auVar41,auVar41);
    auVar41 = loadVectorLeftIndexed(0x24,0x320cc);
    auVar41 = auVar41 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar43 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar41 = vectorMultiplyAddFloatingPoint
                        (auVar43,auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60,
                         auVar42);
    auVar41 = vectorConvertToSignedFixedPointWordSaturate(auVar41,0);
    if ((int)(animationSpeed * 2000.5) < (int)*(short *)(uVar7 + 0x204)) {
      fastfunc::FastDecTimerS16(uVar19 + 0x204);
      dVar40 = (double)*(float *)(uVar7 + 0x200);
    }
    else {
      auVar41 = vectorSplatHalfWord(auVar41,1);
      uVar9 = storeVectorElementHalfWordIndexed(auVar41,0x204,uVar19);
      *(undefined2 *)(uVar7 + 0x204) = uVar9;
    }
  }
  else {
    iVar15 = fastfunc::FastDecTimerS16(uVar19 + 0x204);
    if (iVar15 == 0) {
      if ((*(short *)(uVar7 + 0x20a) != 0) &&
         (iVar15 = fastfunc::FastDecTimerS16(uVar19 + 0x204), iVar15 != 0)) {
        *(undefined2 *)(uVar7 + 0x20a) = 0;
      }
    }
    else {
      *(undefined2 *)(uVar7 + 0x20a) = 0;
    }
    dVar40 = (double)fastfunc::FastIntToDouble(*(undefined2 *)(uVar7 + 0x204));
    dVar33 = (double)fastfunc::FastIntToDouble((int)(animationSpeed * 2000.5));
    dVar40 = (double)mobyutil::MB_CosineInterpolate
                               (0,(double)*(float *)(uVar7 + 0x200),(double)(float)(dVar40 / dVar33)
                               );
    *(float *)(uVar7 + 0x200) = (float)dVar40;
  }
  pMVar11 = g_heroMobyPtr;
  fVar3 = *(float *)(uVar7 + 0x134);
  fVar4 = *(float *)(uVar7 + 0x130);
  fVar5 = *(float *)(uVar7 + 0x138);
  dVar33 = 0.0;
  fVar2 = SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3);
  bVar16 = g_heroState == DEATH_ICE;
  bVar1 = g_heroState == DEATH_MUD;
  fVar10 = (float)((double)*(float *)(uVar7 + 0x15c) - dVar40) / fVar2;
  dVar40 = dVar33;
  if (0.0 - fVar2 < 0.0) {
    dVar40 = (double)(fVar3 * fVar10);
  }
  dVar34 = dVar33;
  if (0.0 - fVar2 < 0.0) {
    dVar34 = (double)(fVar4 * fVar10);
  }
  dVar35 = dVar33;
  if (0.0 - fVar2 < 0.0) {
    dVar35 = (double)(fVar5 * fVar10);
  }
  if (fVar2 - 0.0 < 0.0) {
    dVar40 = (double)(fVar3 * fVar10);
  }
  if (fVar2 - 0.0 < 0.0) {
    dVar34 = (double)(fVar4 * fVar10);
  }
  if (fVar2 - 0.0 < 0.0) {
    dVar35 = (double)(fVar5 * fVar10);
  }
  *(float *)(uVar7 + 0x134) = (float)dVar40;
  *(float *)(uVar7 + 0x130) = (float)dVar34;
  *(float *)(uVar7 + 0x138) = (float)dVar35;
  if (((bVar16) ||
      (((Level == Gemlik && (bVar1)) ||
       (iVar15 = collproc::CollLine(uVar19 + 0x90,local_150,camera::CAMERA_COLL_FLAGS,pMVar11,0),
       iVar15 == 0)))) ||
     (((CollOutput.pMoby != (MobyInstance *)0x0 && ((CollOutput.pMoby)->oClass == CAMERA_OBJECT)) ||
      (iVar15 = camera::CamCollGrid_FindPrimAtPnt
                          (dVar33,CONCAT44(CollOutput.ip.x,CollOutput.ip.y),
                           CONCAT44(CollOutput.ip.z,CollOutput.ip.w)), iVar15 != 0)))) {
    *(undefined4 *)(uVar7 + 0x21c) = 0;
  }
  else {
    if ((CollOutput.pMoby != (MobyInstance *)0x0) &&
       (bVar16 = mobyutil::MB_isCrate(CollOutput.pMoby), bVar16)) {
      mobyutil::SetCollDamIn
                (0x4034000000000000,&uStack_130,g_heroMobyPtr,0x800000,g_heroMobyPtr,local_140);
      local_118 = CONCAT22(0x303,g_heroMobyPtr->oClass);
      mobyutil::CollDamageMobyDirect
                (CollOutput.pMoby,g_heroMobyPtr->oClass,CONCAT44(uStack_130,uStack_12c),
                 CONCAT44(uStack_128,uStack_124),CONCAT44(uStack_120,uStack_11c),
                 CONCAT44(local_118,uStack_114),CONCAT44(uStack_110,uStack_10c),
                 CONCAT44(uStack_108,uStack_104));
    }
    fVar3 = animationSpeed;
    iVar15 = *(int *)(uVar7 + 0x21c) + 1;
    *(int *)(uVar7 + 0x21c) = iVar15;
    if ((int)(fVar3 * 30.5) <= iVar15) {
      camera::Camera_resetToFollow();
    }
  }
  if (0 < iVar20) {
    piVar17 = &DAT_0092e28c;
    do {
      iVar15 = *piVar17;
      iVar20 = iVar20 + -1;
      piVar17 = piVar17 + 1;
      *(undefined4 *)(iVar15 + 0x94) = *(undefined4 *)(*(int *)(iVar15 + 0x24) + 0x10);
    } while (0 < iVar20);
  }
  return;
}



//==== 00032bcc  ns=stub  size=0x4
// sig: undefined STUB_00032bcc(void)
// callers(0): 
// callees(0): 

void stub::STUB_00032bcc(void)

{
  return;
}



//==== 00032bd0  ns=stub  size=0x4
// sig: undefined STUB_00032bd0(void)
// callers(2): 00034b5c camera0::UpdateFollowCamera; 00034c28 camera0::Camera0_Update
// callees(0): 

void stub::STUB_00032bd0(void)

{
  return;
}



//==== 00032bd4  ns=camera0  size=0x50
// sig: undefined Cam0_ClearModCamera(void)
// callers(5): 0003ca68 camera::camera16::Cam16_ModifyFollowCam; 0003d5b0 camera::camera17::Cam17_ModifyFollowCam; 0003eaa8 camera::camera18::Cam18_ModifyFollowCam; 00044598 camera::camera22::Cam22_ModifyFollowCam; 00044c00 camera::camera23::Cam23_ModifyFollowCam
// callees(0): 

undefined8 camera0::Cam0_ClearModCamera(int param_1)

{
  undefined8 uVar1;
  
  if (*(short *)((int)GameCamera.pCurrentUpdCam + 0x86) == 0) {
    if (*(int *)(*(int *)((int)GameCamera.pCurrentUpdCam + 0x70) + 0x220) == param_1) {
      uVar1 = 1;
      *(undefined4 *)(*(int *)((int)GameCamera.pCurrentUpdCam + 0x70) + 0x220) = 0;
    }
    else {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0xffffffffffffffff;
  }
  return uVar1;
}



//==== 00032c24  ns=camera0  size=0xa8
// sig: undefined Cam0_SetModCamera(void)
// callers(5): 0003ca68 camera::camera16::Cam16_ModifyFollowCam; 0003d5b0 camera::camera17::Cam17_ModifyFollowCam; 0003eaa8 camera::camera18::Cam18_ModifyFollowCam; 00044598 camera::camera22::Cam22_ModifyFollowCam; 00044c00 camera::camera23::Cam23_ModifyFollowCam
// callees(0): 

undefined8 camera0::Cam0_SetModCamera(int param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (*(short *)((int)GameCamera.pCurrentUpdCam + 0x86) == 0) {
    iVar1 = *(int *)((int)GameCamera.pCurrentUpdCam + 0x70);
    iVar2 = *(int *)(iVar1 + 0x220);
    if (iVar2 == 0) {
      *(int *)(iVar1 + 0x220) = param_1;
      uVar3 = 1;
    }
    else if (iVar2 == param_1) {
      uVar3 = 1;
    }
    else if (*(byte *)(*(int *)(camera::ImportCameras +
                                (int)((longlong)*(short *)(iVar2 + 0x84) << 5) + 0x1c) + 0x1c) <
             *(byte *)(*(int *)(camera::ImportCameras +
                                (int)((longlong)*(short *)(param_1 + 0x84) << 5) + 0x1c) + 0x1c)) {
      *(int *)(iVar1 + 0x220) = param_1;
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  else {
    uVar3 = 0xffffffffffffffff;
  }
  return uVar3;
}



//==== 00032ccc  ns=camera0  size=0x24
// sig: undefined Cam0_SetRunAtCamDist(void)
// callers(1): 0003d5b0 camera::camera17::Cam17_ModifyFollowCam
// callees(0): 

void camera0::Cam0_SetRunAtCamDist(double param_1)

{
  if (*(short *)((int)GameCamera.pCurrentUpdCam + 0x86) == 0) {
    *(float *)(*(int *)((int)GameCamera.pCurrentUpdCam + 0x70) + 0x22c) = (float)param_1;
  }
  return;
}



//==== 00032cf0  ns=camera0  size=0x24
// sig: undefined Cam0_ForceElv(void)
// callers(2): 0003d5b0 camera::camera17::Cam17_ModifyFollowCam; 00044c00 camera::camera23::Cam23_ModifyFollowCam
// callees(0): 

void camera0::Cam0_ForceElv(double param_1)

{
  if (*(short *)((int)GameCamera.pCurrentUpdCam + 0x86) == 0) {
    *(float *)(*(int *)((int)GameCamera.pCurrentUpdCam + 0x70) + 0x1cc) = (float)param_1;
  }
  return;
}



//==== 00032d18  ns=camera0  size=0x44
// sig: undefined Cam0_SetPitchGainDamp(void)
// callers(2): 0003d5b0 camera::camera17::Cam17_ModifyFollowCam; 0003eaa8 camera::camera18::Cam18_ModifyFollowCam
// callees(0): 

void camera0::Cam0_SetPitchGainDamp(double param_1,double param_2)

{
  int iVar1;
  
  if (*(short *)((int)GameCamera.pCurrentUpdCam + 0x86) == 0) {
    iVar1 = *(int *)((int)GameCamera.pCurrentUpdCam + 0x70);
    if (param_1 != 0.0) {
      *(float *)(iVar1 + 0x124) = (float)param_1;
    }
    if (param_2 != 0.0) {
      *(float *)(iVar1 + 0x128) = (float)param_2;
    }
  }
  return;
}



//==== 00032d5c  ns=camera0  size=0x24
// sig: undefined Cam0_SetBumpFlags(void)
// callers(1): 0003eaa8 camera::camera18::Cam18_ModifyFollowCam
// callees(0): 

void camera0::Cam0_SetBumpFlags(undefined4 param_1)

{
  if (*(short *)((int)GameCamera.pCurrentUpdCam + 0x86) == 0) {
    *(undefined4 *)(*(int *)((int)GameCamera.pCurrentUpdCam + 0x70) + 0x218) = param_1;
  }
  return;
}



//==== 00032d80  ns=camera0  size=0x50
// sig: undefined Cam0_SetCollData(void)
// callers(2): 0003eaa8 camera::camera18::Cam18_ModifyFollowCam; 00044598 camera::camera22::Cam22_ModifyFollowCam
// callees(0): 

void camera0::Cam0_SetCollData(double param_1,double param_2,double param_3)

{
  int iVar1;
  
  if (*(short *)((int)GameCamera.pCurrentUpdCam + 0x86) == 0) {
    iVar1 = *(int *)((int)GameCamera.pCurrentUpdCam + 0x70);
    if (*(int *)(iVar1 + 0x20c) != 0) {
      *(float *)(iVar1 + 0x20c) = (float)param_1;
    }
    if (*(int *)(iVar1 + 0x210) != 0) {
      *(float *)(iVar1 + 0x210) = (float)param_2;
    }
    if (*(int *)(iVar1 + 0x214) != 0) {
      *(float *)(iVar1 + 0x214) = (float)param_3;
    }
  }
  return;
}



//==== 00032dd0  ns=camera0  size=0x2c
// sig: undefined Cam0_DisableUserCam(void)
// callers(3): 0003d5b0 camera::camera17::Cam17_ModifyFollowCam; 00242c28 mobyupdate_unsorted::UpdateMoby_{351_1301}; 00286ae0 mobyupdate_unsorted::UpdateMoby_1470
// callees(0): 

void camera0::Cam0_DisableUserCam(void)

{
  if (*(short *)((int)GameCamera.pCurrentUpdCam + 0x86) == 0) {
    *(uint *)(*(int *)((int)GameCamera.pCurrentUpdCam + 0x70) + 0x1b8) =
         *(uint *)(*(int *)((int)GameCamera.pCurrentUpdCam + 0x70) + 0x1b8) | 3;
  }
  return;
}



//==== 00032e10  ns=camera0  size=0x234
// sig: void GetAnalogInputs_0(void * pCam, float * azm, float * elv)
// callers(2): 00034b5c camera0::UpdateFollowCamera; 00034c28 camera0::Camera0_Update
// callees(0): 
// strings: 00a0feec: 'None'

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void camera0::GetAnalogInputs_0(void *pCam,float *azm,float *elv)

{
  bool bVar1;
  int iVar2;
  float fVar3;
  int iVar4;
  short sVar5;
  dword dVar6;
  undefined2 uVar7;
  
  fVar3 = ANALOG_STICKS.x;
  dVar6 = g_GameSettings.CameraLeftRight;
  iVar4 = *(int *)((int)pCam + 0x70);
  if ((*(uint *)(iVar4 + 0x1b8) & 1) == 0) {
    *azm = ANALOG_STICKS.x;
    if (dVar6 == 0) {
      fVar3 = -fVar3;
      *azm = fVar3;
    }
  }
  else {
    fVar3 = 0.0;
    *azm = 0.0;
  }
  uVar7 = CHAR_ARRAY_00a0feec._64_2_;
  if (fVar3 == 0.0) {
    DAT_0092e280 = 0;
    DAT_0092e284 = 0;
    if (*(int *)(iVar4 + 0x1c4) != 0) {
      *azm = *(float *)(iVar4 + 0x1c4);
    }
  }
  else {
    *(float *)(iVar4 + 0x1bc) = g_CameraSpeed;
    if ((ushort)uVar7 < 3) {
      DAT_0092e280 = DAT_0092e280 + 1;
      if (DAT_0092e284 == 0) {
        if ((int)(animationSpeed * 60.5) < DAT_0092e280) {
          if (uVar7 != -1) {
            CHAR_ARRAY_00a0feec._64_2_ = uVar7 + 1;
          }
          iVar2 = (int)(animationSpeed * ((float)(longlong)update::g_GameFrameCount + 0.5));
          if ((int)(uint)(ushort)CHAR_ARRAY_00a0feec._66_2_ < iVar2 / 600) {
            sVar5 = (short)(iVar2 >> 0x1f);
            CHAR_ARRAY_00a0feec._66_2_ =
                 ((short)(iVar2 / 600) + sVar5) -
                 ((short)((short)(iVar2 / 0x2580000) + sVar5) >> 0xf);
          }
          DAT_0092e284 = 1;
          CHAR_ARRAY_00a0feec._68_4_ = CHAR_ARRAY_00a0feec._68_4_ | 1 << (Level & 0x3f) | 0x80000000
          ;
        }
      }
    }
  }
  if ((*(uint *)(iVar4 + 0x1b8) & 2) == 0) {
    fVar3 = -ANALOG_STICKS.y;
    bVar1 = g_GameSettings.CameraUpDown == 0;
    *elv = fVar3;
    if (bVar1) {
      fVar3 = -fVar3;
      *elv = fVar3;
    }
    if (fVar3 == 0.0) {
      *elv = *(float *)(iVar4 + 0x1cc) * 1.4323945;
    }
  }
  else {
    *elv = 0.0;
    *elv = *(float *)(iVar4 + 0x1cc) * 1.4323945;
  }
  return;
}



//==== 00033068  ns=camera0  size=0x584
// sig: undefined UpdateUserCam_0(void)
// callers(2): 00034b5c camera0::UpdateFollowCamera; 00034c28 camera0::Camera0_Update
// callees(4): 000501e8 camera::Cam_InterpValues; 001113e0 mobyutil::MB_RotateQuatAxisAngle; 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots

void camera0::UpdateUserCam_0(double param_1,double param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  ulonglong *puVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  ulonglong uVar14;
  float *outQuat;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  float *pfVar18;
  ulonglong uVar19;
  longlong lVar20;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  ulonglong in_f28;
  ulonglong in_f29;
  double dVar27;
  ulonglong in_f30;
  double dVar28;
  ulonglong in_f31;
  double dVar29;
  float fVar30;
  
  uVar14 = ZEXT48(&stack0x00000000);
  lVar16 = uVar14 - 0x110;
  puVar5 = (ulonglong *)lVar16;
  *puVar5 = uVar14;
  puVar5[0x24] = in_LR;
  puVar5[0x1e] = in_f28;
  puVar5[0x1f] = in_f29;
  puVar5[0x20] = in_f30;
  puVar5[0x21] = in_f31;
  puVar5[0x1d] = unaff_r31;
  puVar5[0x18] = unaff_r26;
  puVar5[0x19] = unaff_r27;
  puVar5[0x17] = unaff_r25;
  puVar5[0x1b] = unaff_r29;
  puVar5[0x1a] = unaff_r28;
  fVar4 = param_3[0x1c];
  puVar5[0x1c] = unaff_r30;
  outQuat = (float *)((int)fVar4 + 0x130);
  dVar27 = 0.0;
  fVar30 = camera::Cam_InterpValues
                     (*(float *)((int)fVar4 + 0x1a8),(float)param_1,DAT_0071d48c,DAT_0071d490,0.0,
                      param_3);
  *(float *)((int)fVar4 + 0x1a8) = fVar30;
  dVar22 = (double)*(float *)((int)fVar4 + 0x1b0);
  *(float *)((int)fVar4 + 0x164) = *(float *)((int)fVar4 + 0x1bc) * fVar30;
  dVar29 = dVar27;
  if (0.30000001192092896 - param_2 < 0.0) {
    dVar29 = (double)((float)(param_2 - 0.30000001192092896) * 1.4285715);
  }
  if (param_2 - -0.30000001192092896 < 0.0) {
    dVar29 = (double)((float)(param_2 + 0.30000001192092896) * 1.4285715);
  }
  if (dVar29 != dVar27) {
    dVar22 = (double)*(float *)((int)fVar4 + 0x1b0);
    fVar30 = DAT_0071d49c;
    if ((ABS(dVar22) <= ABS(dVar29)) ||
       (((dVar29 <= dVar27 || (*(int *)((int)fVar4 + 0x1b0) < 1)) &&
        ((dVar27 <= dVar29 || (-1 < *(int *)((int)fVar4 + 0x1b0))))))) goto LAB_00033194;
  }
  fVar30 = DAT_0071d4a0;
LAB_00033194:
  dVar28 = (double)fVar30;
  fVar30 = camera::Cam_InterpValues
                     ((float)dVar22,(float)dVar29,DAT_0071d48c,DAT_0071d490,fVar30,
                      (float *)&DAT_00720000);
  *(float *)((int)fVar4 + 0x1b0) = fVar30;
  dVar29 = (double)(fVar30 * 0.6981317);
  if (param_1 == dVar27) {
    mobyutil::MB_RotateQuatAxisAngle(*(float *)((int)fVar4 + 0x1c8),outQuat,outQuat);
  }
  else {
    mobyutil::MB_RotateQuatAxisAngle(*(float *)((int)fVar4 + 0x164),outQuat,outQuat);
  }
  uVar13 = GameCamera.field17_0x1b4._4_4_;
  uVar12 = GameCamera.field17_0x1b4._0_4_;
  fVar6 = GameCamera.field16_0x1b0;
  fVar30 = *(float *)((int)fVar4 + 0x130);
  fVar1 = *(float *)((int)fVar4 + 0x138);
  fVar2 = *(float *)((int)fVar4 + 0x134);
  fVar3 = fVar1 * GameCamera.field16_0x1b0 - fVar30 * (float)GameCamera.field17_0x1b4._4_4_;
  fVar7 = fVar2 * (float)GameCamera.field17_0x1b4._4_4_ -
          fVar1 * (float)GameCamera.field17_0x1b4._0_4_;
  fVar8 = fVar30 * (float)GameCamera.field17_0x1b4._0_4_ - fVar2 * GameCamera.field16_0x1b0;
  *(undefined4 *)((int)puVar5 + 0x7c) = 0;
  fVar9 = fVar8 * fVar8 + fVar7 * fVar7 + fVar3 * fVar3;
  fVar6 = fVar1 * (float)uVar13 + fVar30 * fVar6 + fVar2 * (float)uVar12;
  fVar30 = SQRT(fVar1 * fVar1 + fVar30 * fVar30 + fVar2 * fVar2);
  dVar22 = dVar27;
  dVar25 = dVar27;
  dVar26 = dVar27;
  if ((double)SQRT(fVar9) != dVar27) {
    fVar1 = 1.0 / SQRT(fVar9);
    fVar1 = -(fVar9 * fVar1 * fVar1 - 1.0) * fVar1 * 0.5 + fVar1;
    fVar1 = -(fVar9 * fVar1 * fVar1 - 1.0) * fVar1 * 0.5 + fVar1;
    fVar1 = -(fVar9 * fVar1 * fVar1 - 1.0) * fVar1 * 0.5 + fVar1;
    dVar26 = (double)(fVar7 * fVar1);
    dVar25 = (double)(fVar3 * fVar1);
    dVar22 = (double)(fVar8 * fVar1);
  }
  dVar23 = ABS((double)fVar30);
  *(float *)(puVar5 + 0x10) = fVar30;
  dVar24 = ABS((double)fVar6);
  *(float *)((int)puVar5 + 0x84) = fVar6;
  *(float *)(puVar5 + 0xe) = (float)dVar26;
  *(float *)(puVar5 + 0x11) = (float)(dVar23 - dVar24);
  *(float *)((int)puVar5 + 0x74) = (float)dVar25;
  *(float *)(puVar5 + 0xf) = (float)dVar22;
  uVar19 = (ulonglong)(*(uint *)(puVar5 + 0x10) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar5 + 0x11) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar5 + 0x84) >> 0x1d) & 4;
  dVar22 = ABS((double)*(float *)(puVar5 + 0x10));
  if ((double)*(float *)(puVar5 + 0x11) - dVar27 < 0.0) {
    dVar22 = dVar24;
  }
  fVar1 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar19 << 2));
  fVar30 = *(float *)(((uint)(uVar19 << 2) | 0x735900) + 4);
  dVar25 = ABS((double)*(float *)((int)puVar5 + 0x84));
  if ((double)*(float *)(puVar5 + 0x11) - dVar27 < 0.0) {
    dVar25 = dVar23;
  }
  dVar26 = dVar27;
  if (dVar27 < dVar22) {
    lVar15 = uVar14 - 0x100;
    lVar17 = uVar14 - 0x84;
    lVar20 = uVar14 - 0x74;
    lVar21 = 2;
    fVar2 = (float)(dVar25 - dVar22) / (float)(dVar25 + dVar22);
    fVar3 = fVar2 * fVar2;
    *(float *)(puVar5 + 0x13) = fVar2;
    *(float *)(puVar5 + 0x12) = fVar2;
    *(float *)((int)puVar5 + 0x94) = fVar2;
    *(float *)((int)puVar5 + 0x8c) = fVar2;
    fVar2 = fVar3 * fVar3;
    *(float *)(puVar5 + 0x12) = *(float *)(puVar5 + 0x12) * fVar3;
    *(float *)((int)puVar5 + 0x94) = *(float *)((int)puVar5 + 0x94) * fVar2;
    *(float *)(puVar5 + 0x13) = *(float *)(puVar5 + 0x13) * fVar2 * fVar3;
    do {
      *(float *)((int)lVar15 + 0x8c) = *(float *)((int)lVar15 + 0x7c) * fVar2 * fVar2;
      iVar10 = (int)lVar17;
      lVar15 = lVar15 + 8;
      lVar17 = lVar17 + 8;
      *(float *)((int)lVar20 + 4) = *(float *)(iVar10 + 4) * fVar2 * fVar2;
      lVar20 = lVar20 + 8;
      lVar21 = lVar21 + -1;
    } while (lVar21 != 0);
    lVar20 = uVar14 - 0x84;
    pfVar18 = (float *)&DAT_007358e0;
    lVar21 = 4;
    lVar15 = lVar16;
    lVar17 = lVar20;
    do {
      fVar2 = *pfVar18;
      fVar3 = pfVar18[1];
      pfVar18 = pfVar18 + 2;
      *(float *)((int)lVar15 + 0x8c) = *(float *)((int)lVar15 + 0x8c) * fVar2;
      lVar15 = lVar15 + 8;
      *(float *)((int)lVar17 + 4) = *(float *)((int)lVar17 + 4) * fVar3;
      lVar17 = lVar17 + 8;
      lVar21 = lVar21 + -1;
    } while (lVar21 != 0);
    lVar15 = 2;
    dVar22 = dVar27;
    do {
      iVar10 = (int)lVar16;
      iVar11 = (int)lVar20;
      lVar16 = lVar16 + 0x10;
      lVar20 = lVar20 + 0x10;
      dVar22 = (double)((float)(dVar22 + (double)*(float *)(iVar10 + 0x8c)) + *(float *)(iVar11 + 4)
                        + *(float *)(iVar11 + 8) + *(float *)(iVar11 + 0xc));
      lVar15 = lVar15 + -1;
    } while (lVar15 != 0);
    dVar26 = (double)((float)(dVar22 + 0.7853981852531433) * fVar1 + fVar30);
  }
  if ((ABS(dVar26) < ABS(dVar29)) && ((double)DAT_0071d4a0 == dVar28)) {
    *(float *)((int)fVar4 + 0x1b0) = (float)(dVar26 * 1.4323945045471191);
  }
  dVar22 = dVar27;
  if (dVar29 <= dVar26) {
    if ((dVar26 <= dVar29) || (*(short *)((int)param_3[0x1c] + 0x208) < 0)) {
      *(undefined4 *)((int)fVar4 + 0x168) = 0;
    }
    else {
      dVar27 = (double)fastfunc::FastWrapRot((float)dVar26,-DAT_0071d4a4);
      if (dVar29 <= dVar27) {
        dVar27 = -(double)DAT_0071d4a4;
      }
      else {
        dVar27 = (double)fastfunc::FastDiffRots(dVar29,dVar26);
      }
      *(float *)((int)fVar4 + 0x168) = (float)dVar27;
    }
  }
  else {
    dVar27 = (double)fastfunc::FastWrapRot((float)dVar26,DAT_0071d4a4);
    if (dVar27 <= dVar29) {
      dVar27 = (double)DAT_0071d4a4;
    }
    else {
      dVar27 = (double)fastfunc::FastDiffRots(dVar29,dVar26);
    }
    *(float *)((int)fVar4 + 0x168) = (float)dVar27;
  }
  if (dVar29 < dVar22) {
    *(undefined2 *)((int)param_3[0x1c] + 0x22) = 1;
    dVar27 = (double)*(float *)((int)fVar4 + 0x168);
  }
  mobyutil::MB_RotateQuatAxisAngle((float)dVar27,outQuat,outQuat);
  return;
}



//==== 000335f0  ns=camera0  size=0x16c
// sig: undefined UpdateCamPull_0(void)
// callers(2): 00034b5c camera0::UpdateFollowCamera; 00034c28 camera0::Camera0_Update
// callees(0): 

void camera0::UpdateCamPull_0(int param_1)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  pfVar3 = *(float **)(param_1 + 0x70);
  if (0 < *(short *)(pfVar3 + 4)) {
    fVar4 = DAT_0071ea50 * ((pfVar3[1] - pfVar3[0x25]) - pfVar3[0x4d]) + pfVar3[0x4d];
    fVar6 = DAT_0071ea50 * ((*pfVar3 - pfVar3[0x24]) - pfVar3[0x4c]) + pfVar3[0x4c];
    fVar5 = DAT_0071ea50 * ((pfVar3[2] - pfVar3[0x26]) - pfVar3[0x4e]) + pfVar3[0x4e];
    fVar1 = pfVar3[0x57];
    pfVar3[0x4f] = pfVar3[3];
    fVar2 = 0.0;
    fVar7 = SQRT(fVar5 * fVar5 + fVar6 * fVar6 + fVar4 * fVar4);
    if (fVar7 <= fVar1) {
      pfVar3[0x4e] = fVar5;
      fVar8 = fVar1 - pfVar3[0x80];
      pfVar3[0x4d] = fVar4;
      pfVar3[0x4c] = fVar6;
      if (fVar7 < fVar8) {
        fVar9 = fVar8 / fVar7;
        fVar10 = fVar2;
        if (0.0 - fVar7 < 0.0) {
          fVar10 = fVar6 * fVar9;
        }
        fVar11 = fVar2;
        if (0.0 - fVar7 < 0.0) {
          fVar11 = fVar4 * fVar9;
        }
        if (0.0 - fVar7 < 0.0) {
          fVar2 = fVar5 * fVar9;
        }
        if (fVar7 - 0.0 < 0.0) {
          fVar10 = fVar6 * fVar9;
        }
        if (fVar7 - 0.0 < 0.0) {
          fVar11 = fVar4 * fVar9;
        }
        if (fVar7 - 0.0 < 0.0) {
          fVar2 = fVar5 * fVar9;
        }
        pfVar3[0x4c] = fVar10;
        pfVar3[0x4d] = fVar11;
        pfVar3[0x4e] = fVar2;
        fVar7 = fVar8;
      }
    }
    else {
      fVar9 = fVar1 / fVar7;
      fVar8 = fVar2;
      if (0.0 - fVar7 < 0.0) {
        fVar8 = fVar6 * fVar9;
      }
      fVar10 = fVar2;
      if (0.0 - fVar7 < 0.0) {
        fVar10 = fVar4 * fVar9;
      }
      if (0.0 - fVar7 < 0.0) {
        fVar2 = fVar5 * fVar9;
      }
      if (fVar7 - 0.0 < 0.0) {
        fVar8 = fVar6 * fVar9;
      }
      if (fVar7 - 0.0 < 0.0) {
        fVar10 = fVar4 * fVar9;
      }
      if (fVar7 - 0.0 < 0.0) {
        fVar2 = fVar5 * fVar9;
      }
      pfVar3[0x4c] = fVar8;
      pfVar3[0x4d] = fVar10;
      pfVar3[0x4e] = fVar2;
      fVar7 = fVar1;
    }
    pfVar3[0x80] = fVar1 - fVar7;
  }
  return;
}



//==== 000337a0  ns=camera0  size=0xa40
// sig: undefined UpdateCamRotation_0(void)
// callers(2): 00034b5c camera0::UpdateFollowCamera; 00034c28 camera0::Camera0_Update
// callees(6): 000501e8 camera::Cam_InterpValues; 00050288 camera::Cam_InterpAngles; 001113e0 mobyutil::MB_RotateQuatAxisAngle; 004fffb4 fastfunc::FastDecTimerS16; 005025e0 fastfunc::FastDiffRots; 00502730 fastfunc::FastIntToDouble

void camera0::UpdateCamRotation_0(float *param_1)

{
  char cVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  ulonglong *puVar10;
  float fVar11;
  int iVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  ulonglong uVar19;
  longlong lVar20;
  longlong lVar21;
  ulonglong uVar22;
  longlong lVar23;
  float *pfVar24;
  ulonglong uVar25;
  longlong lVar26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  ulonglong in_f22;
  ulonglong in_f23;
  ulonglong in_f24;
  ulonglong in_f25;
  ulonglong in_f26;
  ulonglong in_f27;
  double dVar36;
  ulonglong in_f28;
  double dVar37;
  ulonglong in_f29;
  double dVar38;
  ulonglong in_f30;
  ulonglong in_f31;
  double dVar39;
  float fVar40;
  
  uVar19 = ZEXT48(&stack0x00000000);
  lVar21 = uVar19 - 0x130;
  puVar10 = (ulonglong *)lVar21;
  *puVar10 = uVar19;
  puVar10[0x28] = in_LR;
  puVar10[0x1c] = in_f22;
  puVar10[0x1d] = in_f23;
  puVar10[0x1e] = in_f24;
  puVar10[0x1f] = in_f25;
  puVar10[0x20] = in_f26;
  puVar10[0x21] = in_f27;
  puVar10[0x22] = in_f28;
  puVar10[0x23] = in_f29;
  puVar10[0x24] = in_f30;
  puVar10[0x25] = in_f31;
  puVar10[0x18] = unaff_r28;
  puVar10[0x1b] = unaff_r31;
  fVar9 = param_1[0x1c];
  puVar10[0x1a] = unaff_r30;
  puVar10[0x19] = unaff_r29;
  cVar1 = *(char *)((int)fVar9 + 0x104);
  puVar10[0x17] = unaff_r27;
  uVar18 = GameCamera.field17_0x1b4._4_4_;
  uVar17 = GameCamera.field17_0x1b4._0_4_;
  fVar40 = GameCamera.field16_0x1b0;
  if (cVar1 == '\v') {
    fVar40 = g_heroPosition.x - param_1[0xc];
    *param_1 = fVar40;
    fVar7 = g_heroPosition.y - param_1[0xd];
    param_1[1] = fVar7;
    fVar8 = g_heroPosition.z - param_1[0xe];
    param_1[2] = fVar8;
    fVar4 = fVar8 * fVar8 + fVar40 * fVar40 + fVar7 * fVar7;
    param_1[3] = g_heroPosition.w;
    fVar11 = 0.0;
    fVar2 = fVar11;
    fVar3 = fVar11;
    if (SQRT(fVar4) != 0.0) {
      fVar11 = 1.0 / SQRT(fVar4);
      fVar11 = -(fVar4 * fVar11 * fVar11 - 1.0) * fVar11 * 0.5 + fVar11;
      fVar11 = -(fVar4 * fVar11 * fVar11 - 1.0) * fVar11 * 0.5 + fVar11;
      fVar11 = -(fVar4 * fVar11 * fVar11 - 1.0) * fVar11 * 0.5 + fVar11;
      fVar3 = fVar40 * fVar11;
      fVar2 = fVar7 * fVar11;
      fVar11 = fVar8 * fVar11;
    }
    *param_1 = fVar3;
    param_1[1] = fVar2;
    param_1[2] = fVar11;
    fastfunc::FastDecTimerS16((int)fVar9 + 0x20);
  }
  else {
    fVar7 = *(float *)((int)fVar9 + 0x88) * (float)GameCamera.field17_0x1b4._4_4_ +
            *(float *)((int)fVar9 + 0x80) * GameCamera.field16_0x1b0 +
            *(float *)((int)fVar9 + 0x84) * (float)GameCamera.field17_0x1b4._0_4_;
    fVar8 = param_1[0xe] * (float)GameCamera.field17_0x1b4._4_4_ +
            param_1[0xc] * GameCamera.field16_0x1b0 +
            param_1[0xd] * (float)GameCamera.field17_0x1b4._0_4_;
    dVar39 = (double)(-((float)GameCamera.field17_0x1b4._0_4_ * fVar7 -
                       *(float *)((int)fVar9 + 0x84)) -
                     -((float)GameCamera.field17_0x1b4._0_4_ * fVar8 - param_1[0xd]));
    dVar28 = (double)(-(GameCamera.field16_0x1b0 * fVar7 - *(float *)((int)fVar9 + 0x80)) -
                     -(GameCamera.field16_0x1b0 * fVar8 - param_1[0xc]));
    dVar29 = (double)(-((float)GameCamera.field17_0x1b4._4_4_ * fVar7 -
                       *(float *)((int)fVar9 + 0x88)) -
                     -((float)GameCamera.field17_0x1b4._4_4_ * fVar8 - param_1[0xe]));
    fVar2 = param_1[2];
    fVar3 = param_1[1];
    fVar8 = *param_1;
    fVar7 = (float)(dVar29 * dVar29 +
                   (double)(float)(dVar28 * dVar28 + (double)(float)(dVar39 * dVar39)));
    if (0.05 <= SQRT(fVar7)) {
      fVar8 = 1.0 / SQRT(fVar7);
      param_1[3] = *(float *)((int)fVar9 + 0x8c);
      fVar8 = -(fVar7 * fVar8 * fVar8 - 1.0) * fVar8 * 0.5 + fVar8;
      fVar8 = -(fVar7 * fVar8 * fVar8 - 1.0) * fVar8 * 0.5 + fVar8;
      dVar33 = (double)(-(fVar7 * fVar8 * fVar8 - 1.0) * fVar8 * 0.5 + fVar8);
      fVar8 = (float)(dVar28 * dVar33);
      fVar3 = (float)(dVar39 * dVar33);
      fVar2 = (float)(dVar29 * dVar33);
      *param_1 = fVar8;
      param_1[1] = fVar3;
      param_1[2] = fVar2;
    }
    fVar11 = (float)uVar17 * fVar2 - (float)uVar18 * fVar3;
    fVar7 = (float)uVar18 * fVar8 - fVar40 * fVar2;
    fVar40 = fVar40 * fVar3 - (float)uVar17 * fVar8;
    dVar37 = 0.0;
    param_1[7] = 0.0;
    fVar8 = fVar40 * fVar40 + fVar11 * fVar11 + fVar7 * fVar7;
    dVar33 = dVar37;
    dVar30 = dVar37;
    dVar31 = dVar37;
    if (SQRT(fVar8) != 0.0) {
      fVar3 = 1.0 / SQRT(fVar8);
      fVar3 = -(fVar8 * fVar3 * fVar3 - 1.0) * fVar3 * 0.5 + fVar3;
      fVar3 = -(fVar8 * fVar3 * fVar3 - 1.0) * fVar3 * 0.5 + fVar3;
      fVar3 = -(fVar8 * fVar3 * fVar3 - 1.0) * fVar3 * 0.5 + fVar3;
      dVar31 = (double)(fVar11 * fVar3);
      dVar30 = (double)(fVar7 * fVar3);
      dVar33 = (double)(fVar40 * fVar3);
    }
    param_1[4] = (float)dVar31;
    param_1[5] = (float)dVar30;
    pfVar24 = (float *)&DAT_0003375c;
    param_1[6] = (float)dVar33;
    dVar33 = 0.004000000189989805;
    dVar30 = 0.20000000298023224;
    fVar40 = camera::Cam_InterpValues
                       (*(float *)((int)fVar9 + 0x28),*(float *)((int)fVar9 + 0x160),0.004,0.2,0.0,
                        (float *)&DAT_0003375c);
    *(float *)((int)fVar9 + 0x28) = fVar40;
    fVar40 = camera::Cam_InterpValues
                       (*(float *)((int)fVar9 + 0x24),*(float *)((int)fVar9 + 0xf0),(float)dVar33,
                        (float)dVar30,(float)dVar37,pfVar24);
    *(float *)((int)fVar9 + 0x24) = fVar40;
    uVar18 = GameCamera.field17_0x1b4._4_4_;
    uVar17 = GameCamera.field17_0x1b4._0_4_;
    fVar11 = GameCamera.field16_0x1b0;
    fVar2 = DAT_007358cc;
    fVar40 = *(float *)((int)fVar9 + 0x28) - fVar40;
    fVar7 = *(float *)((int)fVar9 + 0x148) * (float)GameCamera.field17_0x1b4._4_4_ +
            *(float *)((int)fVar9 + 0x140) * GameCamera.field16_0x1b0 +
            *(float *)((int)fVar9 + 0x144) * (float)GameCamera.field17_0x1b4._0_4_;
    fVar8 = ((param_1[0xd] -
             (float)(-(double)(fVar7 * (float)GameCamera.field17_0x1b4._0_4_) - dVar39)) -
            -(fVar40 * (float)GameCamera.field17_0x1b4._0_4_)) - param_1[0xd];
    fVar3 = ((param_1[0xc] - (float)(-(double)(fVar7 * GameCamera.field16_0x1b0) - dVar28)) -
            -(fVar40 * GameCamera.field16_0x1b0)) - param_1[0xc];
    fVar40 = ((param_1[0xe] -
              (float)(-(double)(fVar7 * (float)GameCamera.field17_0x1b4._4_4_) - dVar29)) -
             -(fVar40 * (float)GameCamera.field17_0x1b4._4_4_)) - param_1[0xe];
    dVar28 = (double)SQRT(fVar40 * fVar40 + fVar3 * fVar3 + fVar8 * fVar8);
    if (dVar28 != dVar37) {
      fVar7 = param_1[1];
      fVar4 = *param_1;
      fVar5 = param_1[2];
      dVar31 = 1.0;
      fVar16 = fVar5 * param_1[4] - fVar4 * param_1[6];
      fVar14 = fVar7 * param_1[6] - fVar5 * param_1[5];
      fVar15 = fVar4 * param_1[5] - fVar7 * param_1[4];
      dVar33 = (double)DAT_007358c0;
      dVar38 = (double)DAT_007358c4;
      dVar29 = (double)DAT_007358c8;
      param_1[8] = fVar14;
      param_1[0xb] = 0.0;
      dVar39 = (double)(float)((double)(fVar5 * fVar40 + fVar4 * fVar3 + fVar7 * fVar8) / dVar28);
      param_1[9] = fVar16;
      param_1[10] = fVar15;
      fVar7 = *(float *)((int)fVar9 + 0x134);
      fVar4 = *(float *)((int)fVar9 + 0x130);
      fVar5 = *(float *)((int)fVar9 + 0x138);
      fVar6 = *(float *)((int)fVar9 + 0x34);
      fVar11 = fVar5 * (float)uVar18 + fVar4 * fVar11 + fVar7 * (float)uVar17;
      fVar7 = SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar7 * fVar7);
      dVar28 = dVar39;
      if (dVar39 - dVar37 < 0.0) {
        dVar28 = ABS(dVar39);
      }
      dVar36 = ABS((double)fVar11);
      dVar34 = (double)(float)(1.0 - dVar28);
      if ((double)(float)(1.0 - dVar28) - dVar37 < 0.0) {
        dVar34 = dVar37;
      }
      dVar35 = ABS((double)fVar7);
      *(float *)(puVar10 + 0xe) = fVar7;
      *(float *)((int)puVar10 + 0x74) = fVar11;
      dVar32 = dVar31;
      if (dVar39 - dVar37 < 0.0) {
        dVar32 = -1.0;
      }
      *(float *)(puVar10 + 0xf) = (float)(dVar35 - dVar36);
      uVar25 = (ulonglong)(*(uint *)(puVar10 + 0xe) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar10 + 0xf) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar10 + 0x74) >> 0x1d) & 4;
      uVar22 = uVar25 << 2 | 0x735900;
      dVar39 = ABS((double)*(float *)(puVar10 + 0xe));
      if ((double)*(float *)(puVar10 + 0xf) - dVar37 < 0.0) {
        dVar39 = dVar36;
      }
      dVar29 = -(double)(((float)((double)(float)(dVar28 * dVar28) * dVar28) * fVar2 +
                         (float)((double)(float)(dVar28 * dVar28) * dVar29 +
                                (double)(float)(dVar28 * dVar38 + dVar33))) * (float)SQRT(dVar34) -
                        1.5707964);
      fVar7 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar25 << 2));
      dVar28 = ABS((double)*(float *)((int)puVar10 + 0x74));
      if ((double)*(float *)(puVar10 + 0xf) - dVar37 < 0.0) {
        dVar28 = dVar35;
      }
      fVar2 = *(float *)((int)uVar22 + 4);
      dVar33 = -(double)(float)(dVar29 * dVar32 - 1.5707963705062866);
      if ((double)(fVar15 * fVar40 + fVar14 * fVar3 + fVar16 * fVar8) - dVar37 < 0.0) {
        dVar33 = (double)(float)(dVar29 * dVar32 - 1.5707963705062866);
      }
      dVar29 = dVar37;
      if (dVar37 < dVar39) {
        lVar20 = uVar19 - 0x120;
        lVar23 = uVar19 - 0xb4;
        lVar26 = uVar19 - 0xa4;
        lVar27 = 2;
        fVar40 = (float)(dVar28 - dVar39) / (float)(dVar28 + dVar39);
        fVar8 = fVar40 * fVar40;
        *(float *)(puVar10 + 0x11) = fVar40;
        *(float *)(puVar10 + 0x10) = fVar40;
        *(float *)((int)puVar10 + 0x84) = fVar40;
        *(float *)((int)puVar10 + 0x7c) = fVar40;
        fVar40 = fVar8 * fVar8;
        *(float *)(puVar10 + 0x10) = *(float *)(puVar10 + 0x10) * fVar8;
        *(float *)((int)puVar10 + 0x84) = *(float *)((int)puVar10 + 0x84) * fVar40;
        *(float *)(puVar10 + 0x11) = *(float *)(puVar10 + 0x11) * fVar40 * fVar8;
        do {
          *(float *)((int)lVar20 + 0x7c) = *(float *)((int)lVar20 + 0x6c) * fVar40 * fVar40;
          iVar12 = (int)lVar23;
          lVar20 = lVar20 + 8;
          lVar23 = lVar23 + 8;
          *(float *)((int)lVar26 + 4) = *(float *)(iVar12 + 4) * fVar40 * fVar40;
          lVar26 = lVar26 + 8;
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
        lVar27 = 4;
        lVar26 = uVar19 - 0xb4;
        uVar22 = ZEXT48(&DAT_007358e0);
        lVar20 = lVar21;
        lVar23 = lVar26;
        do {
          pfVar24 = (float *)uVar22;
          fVar40 = pfVar24[1];
          uVar22 = uVar22 + 8;
          *(float *)((int)lVar20 + 0x7c) = *(float *)((int)lVar20 + 0x7c) * *pfVar24;
          lVar20 = lVar20 + 8;
          *(float *)((int)lVar23 + 4) = *(float *)((int)lVar23 + 4) * fVar40;
          lVar23 = lVar23 + 8;
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
        lVar20 = 2;
        dVar28 = dVar37;
        do {
          iVar12 = (int)lVar21;
          lVar21 = lVar21 + 0x10;
          iVar13 = (int)lVar26;
          lVar26 = lVar26 + 0x10;
          dVar28 = (double)((float)(dVar28 + (double)*(float *)(iVar12 + 0x7c)) +
                            *(float *)(iVar13 + 4) + *(float *)(iVar13 + 8) +
                           *(float *)(iVar13 + 0xc));
          lVar20 = lVar20 + -1;
        } while (lVar20 != 0);
        dVar29 = (double)((float)(dVar28 + 0.7853981852531433) * fVar7 + fVar2);
      }
      dVar28 = 0.5;
      fVar40 = -(float)(dVar29 * 1.4323945045471191);
      if (0.5 - fVar40 < 0.0) {
        fVar40 = 1.0 - fVar40;
      }
      dVar39 = dVar37;
      if ((float)(dVar29 * 1.4323945045471191) - -0.1 < 0.0) {
        dVar39 = (double)(fVar40 * 2.0 * 0.2617994);
      }
      dVar29 = (double)camera::Cam_InterpAngles
                                 ((double)fVar6,dVar39,0x3f747ae140000000,dVar30,dVar37,0x30000,
                                  uVar22,(int)fVar9 + 0x38);
      *(float *)((int)fVar9 + 0x34) = (float)dVar29;
      dVar39 = (double)fastfunc::FastDiffRots(dVar33);
      dVar29 = 1.2217304706573486;
      if ((dVar39 <= 1.2217304706573486) && (dVar29 = dVar39, dVar39 < -1.2217304706573486)) {
        dVar29 = -1.2217304706573486;
      }
      mobyutil::MB_RotateQuatAxisAngle((float)dVar29,param_1,param_1);
      fVar40 = param_1[1];
      fVar7 = *param_1;
      fVar8 = param_1[2];
      dVar33 = (double)(fVar8 * fVar8 + fVar7 * fVar7 + fVar40 * fVar40);
      dVar29 = dVar37;
      dVar39 = dVar37;
      if ((double)(float)SQRT(dVar33) != dVar37) {
        dVar29 = 1.0 / SQRT(dVar33);
        dVar29 = (double)(float)(-(double)(float)((double)(float)(dVar33 * dVar29) * dVar29 - dVar31
                                                 ) * (double)(float)(dVar28 * dVar29) + dVar29);
        dVar29 = (double)(float)(-(double)(float)((double)(float)(dVar33 * dVar29) * dVar29 - dVar31
                                                 ) * (double)(float)(dVar28 * dVar29) + dVar29);
        fVar3 = (float)(-(double)(float)((double)(float)(dVar33 * dVar29) * dVar29 - dVar31) *
                        (double)(float)(dVar28 * dVar29) + dVar29);
        dVar29 = (double)(fVar7 * fVar3);
        dVar37 = (double)(fVar40 * fVar3);
        dVar39 = (double)(fVar8 * fVar3);
      }
      *param_1 = (float)dVar29;
      param_1[1] = (float)dVar37;
      param_1[2] = (float)dVar39;
    }
  }
  if (*(short *)((int)fVar9 + 0x20) != 0) {
    fastfunc::FastDecTimerS16((int)fVar9 + 0x20);
    dVar28 = (double)fastfunc::FastIntToDouble(*(undefined2 *)((int)fVar9 + 0x20));
    puVar10[0x14] = (longlong)DAT_0071d504;
    dVar39 = 0.5;
    puVar10[0x14] = (longlong)(int)(animationSpeed * (float)((double)(longlong)puVar10[0x14] + 0.5))
    ;
    dVar29 = (double)fastfunc::FastIntToDouble(*(undefined4 *)((int)puVar10 + 0xa4));
    fVar9 = (float)(dVar28 / dVar29);
    param_1[3] = param_1[0x13];
    fVar40 = 0.0;
    fVar8 = fVar9 * (param_1[0x11] - param_1[1]) + param_1[1];
    fVar7 = fVar9 * (param_1[0x10] - *param_1) + *param_1;
    fVar9 = fVar9 * (param_1[0x12] - param_1[2]) + param_1[2];
    dVar28 = (double)(fVar9 * fVar9 + fVar7 * fVar7 + fVar8 * fVar8);
    fVar3 = fVar40;
    fVar2 = fVar40;
    if ((float)SQRT(dVar28) != 0.0) {
      dVar29 = 1.0 / SQRT(dVar28);
      dVar29 = (double)(float)(-(double)(float)((double)(float)(dVar28 * dVar29) * dVar29 - 1.0) *
                               (double)(float)(dVar39 * dVar29) + dVar29);
      dVar29 = (double)(float)(-(double)(float)((double)(float)(dVar28 * dVar29) * dVar29 - 1.0) *
                               (double)(float)(dVar39 * dVar29) + dVar29);
      fVar40 = (float)(-(double)(float)((double)(float)(dVar28 * dVar29) * dVar29 - 1.0) *
                       (double)(float)(dVar39 * dVar29) + dVar29);
      fVar2 = fVar7 * fVar40;
      fVar3 = fVar8 * fVar40;
      fVar40 = fVar9 * fVar40;
    }
    *param_1 = fVar2;
    param_1[1] = fVar3;
    param_1[2] = fVar40;
  }
  fVar9 = param_1[2];
  fVar40 = param_1[1];
  fVar7 = *param_1;
  fVar11 = (float)GameCamera.field17_0x1b4._4_4_ * fVar7 - GameCamera.field16_0x1b0 * fVar9;
  fVar5 = (float)GameCamera.field17_0x1b4._0_4_ * fVar9 -
          (float)GameCamera.field17_0x1b4._4_4_ * fVar40;
  fVar4 = GameCamera.field16_0x1b0 * fVar40 - (float)GameCamera.field17_0x1b4._0_4_ * fVar7;
  fVar8 = 0.0;
  param_1[7] = 0.0;
  fVar6 = fVar4 * fVar4 + fVar5 * fVar5 + fVar11 * fVar11;
  fVar3 = fVar8;
  fVar2 = fVar8;
  if (SQRT(fVar6) != 0.0) {
    fVar3 = 1.0 / SQRT(fVar6);
    fVar3 = -(fVar6 * fVar3 * fVar3 - 1.0) * fVar3 * 0.5 + fVar3;
    fVar3 = -(fVar6 * fVar3 * fVar3 - 1.0) * fVar3 * 0.5 + fVar3;
    fVar3 = -(fVar6 * fVar3 * fVar3 - 1.0) * fVar3 * 0.5 + fVar3;
    fVar8 = fVar5 * fVar3;
    fVar2 = fVar11 * fVar3;
    fVar3 = fVar4 * fVar3;
  }
  param_1[4] = fVar8;
  param_1[5] = fVar2;
  param_1[6] = fVar3;
  param_1[0xb] = 0.0;
  param_1[8] = fVar40 * fVar3 - fVar9 * fVar2;
  param_1[9] = fVar9 * fVar8 - fVar7 * fVar3;
  param_1[10] = fVar7 * fVar2 - fVar40 * fVar8;
  return;
}



//==== 000341f8  ns=camera0  size=0x1ec
// sig: undefined Cam0_HandleRunningAtCam(void)
// callers(1): 000343f8 camera0::UpdateCamPosition_0
// callees(0): 

void camera0::Cam0_HandleRunningAtCam(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  int iVar3;
  undefined2 uVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  uVar7 = GameCamera.field17_0x1b4._128_4_;
  fVar2 = param_1[0x1c];
  if (*(short *)((int)fVar2 + 0x226) == 0) {
    if (GameCamera.field17_0x1b4._128_4_ == 0 && *(short *)((int)fVar2 + 0x224) != 0) {
      if (-0.3 < (g_heroMobyPtr->transform).v0.z * param_1[2] +
                 (g_heroMobyPtr->transform).v0.x * *param_1 +
                 (g_heroMobyPtr->transform).v0.y * param_1[1]) goto LAB_00034280;
    }
    else {
LAB_00034280:
      if (((GameCamera.field17_0x1b4._128_4_ & 0x7fffffff) < 0x38d1b718) ||
         (-0.3 < (float)GameCamera.field17_0x1b4._100_4_ * param_1[2] +
                 (float)GameCamera.field17_0x1b4._92_4_ * *param_1 +
                 (float)GameCamera.field17_0x1b4._96_4_ * param_1[1])) goto LAB_000343ac;
    }
    auVar8 = ZEXT416(0xffffffff);
    auVar8 = auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60;
    auVar9 = vectorShiftLeftIntegerWord(auVar8,auVar8);
    auVar8 = loadVectorLeftIndexed(4,0x341e0);
    auVar8 = auVar8 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar10 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar8 = vectorMultiplyAddFloatingPoint
                       (auVar10,auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60,auVar9);
    auVar8 = vectorConvertToSignedFixedPointWordSaturate(auVar8,0);
    auVar8 = vectorSplatHalfWord(auVar8,1);
    uVar4 = storeVectorElementHalfWordIndexed(auVar8,0x224,(ulonglong)(uint)fVar2);
    *(undefined2 *)((int)fVar2 + 0x224) = uVar4;
    fVar1 = 4.0;
    fVar5 = (float)uVar7 * 14.2857;
    if (1.0 - (float)uVar7 * 14.2857 < 0.0) {
      fVar5 = 1.0;
    }
    if (g_heroType != '\x01') {
      fVar1 = *(float *)((int)fVar2 + 0x22c);
    }
    fVar1 = (fVar1 - *(float *)((int)fVar2 + 0x188)) * fVar5 + *(float *)((int)fVar2 + 0x188);
    fVar6 = *(float *)((int)fVar2 + 0x228);
    if (*(float *)((int)fVar2 + 0x228) < fVar1) {
      *(float *)((int)fVar2 + 0x228) = fVar1;
      fVar6 = fVar1;
    }
    if (*(short *)((int)GameCamera.pCurrentUpdCam + 0x86) == 0) {
      iVar3 = *(int *)((int)GameCamera.pCurrentUpdCam + 0x70);
      *(undefined2 *)(iVar3 + 0x16c) = 1;
      *(float *)(iVar3 + 0x170) = fVar6;
      *(undefined4 *)(iVar3 + 0x178) = 0x3b449ba6;
    }
    *param_2 = (DAT_0071d4f4 - DAT_0071d4cc) * fVar5 + DAT_0071d4cc;
    *param_3 = (DAT_0071d4f8 - DAT_0071d4d0) * fVar5 + DAT_0071d4d0;
  }
  else {
LAB_000343ac:
    if (*(short *)((int)fVar2 + 0x224) != 0) {
      *(undefined2 *)((int)fVar2 + 0x224) = 0;
      *(undefined4 *)((int)fVar2 + 0x228) = *(undefined4 *)((int)fVar2 + 0x188);
    }
    *param_2 = DAT_0071d4cc;
    *param_3 = DAT_0071d4d0;
  }
  return;
}



//==== 000343f8  ns=camera0  size=0x644
// sig: undefined UpdateCamPosition_0(void)
// callers(2): 00034b5c camera0::UpdateFollowCamera; 00034c28 camera0::Camera0_Update
// callees(5): 000341f8 camera0::Cam0_HandleRunningAtCam; 000501e8 camera::Cam_InterpValues; 00050288 camera::Cam_InterpAngles; 001113e0 mobyutil::MB_RotateQuatAxisAngle; 005025e0 fastfunc::FastDiffRots

void camera0::UpdateCamPosition_0(int param_1)

{
  float fVar1;
  float *pfVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float *speed;
  double dVar6;
  double dVar7;
  double dVar8;
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
  double dVar20;
  double dVar21;
  double dVar22;
  float fVar23;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  undefined4 local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  undefined4 local_c4;
  float local_c0;
  float local_bc;
  
  pfVar2 = *(float **)(param_1 + 0x70);
  *pfVar2 = pfVar2[0x24] + pfVar2[0x4c];
  dVar21 = (double)SQRT(pfVar2[0x52] * pfVar2[0x52] +
                        pfVar2[0x50] * pfVar2[0x50] + pfVar2[0x51] * pfVar2[0x51]);
  pfVar2[1] = pfVar2[0x25] + pfVar2[0x4d];
  pfVar2[2] = pfVar2[0x26] + pfVar2[0x4e];
  pfVar2[3] = pfVar2[0x27];
  dVar18 = (double)(pfVar2[0x57] - pfVar2[0x80]);
  speed = (float *)Cam0_HandleRunningAtCam(param_1,&local_c0,&local_bc);
  dVar13 = 0.0;
  fVar23 = camera::Cam_InterpValues((float)dVar21,(float)dVar18,local_c0,local_bc,0.0,speed);
  dVar21 = (double)fVar23;
  dVar22 = 1.0;
  dVar16 = (double)(pfVar2[0x4e] * (float)GameCamera.field17_0x1b4._4_4_ +
                   pfVar2[0x4c] * GameCamera.field16_0x1b0 +
                   pfVar2[0x4d] * (float)GameCamera.field17_0x1b4._0_4_);
  dVar14 = (double)(pfVar2[0x52] * (float)GameCamera.field17_0x1b4._4_4_ +
                   pfVar2[0x50] * GameCamera.field16_0x1b0 +
                   pfVar2[0x51] * (float)GameCamera.field17_0x1b4._0_4_);
  dVar6 = (double)(float)(dVar16 / dVar18);
  dVar10 = -1.0;
  dVar12 = 1.5707963705062866;
  dVar7 = (double)(float)(dVar14 / dVar21);
  dVar18 = dVar6;
  if (dVar6 - dVar13 < 0.0) {
    dVar18 = ABS(dVar6);
  }
  dVar11 = dVar22;
  if (dVar6 - dVar13 < 0.0) {
    dVar11 = dVar10;
  }
  dVar6 = dVar7;
  if (dVar7 - dVar13 < 0.0) {
    dVar6 = ABS(dVar7);
  }
  dVar19 = (double)(float)(1.0 - dVar18);
  if ((double)(float)(1.0 - dVar18) - dVar13 < 0.0) {
    dVar19 = dVar13;
  }
  dVar15 = (double)(float)(1.0 - dVar6);
  if ((double)(float)(1.0 - dVar6) - dVar13 < 0.0) {
    dVar15 = dVar13;
  }
  dVar17 = dVar22;
  if (dVar7 - dVar13 < 0.0) {
    dVar17 = dVar10;
  }
  dVar6 = (double)camera::Cam_InterpAngles
                            ((double)(float)(-(double)(((float)((double)(float)(dVar6 * dVar6) *
                                                               dVar6) * DAT_007358cc +
                                                       (float)((double)(float)(dVar6 * dVar6) *
                                                               (double)DAT_007358c8 +
                                                              (double)(float)(dVar6 * (double)
                                                  DAT_007358c4 + (double)DAT_007358c0))) *
                                                  (float)SQRT(dVar15) - 1.5707964) * dVar17),
                             (double)(float)(-(double)(((float)((double)(float)(dVar18 * dVar18) *
                                                               dVar18) * DAT_007358cc +
                                                       (float)((double)(float)(dVar18 * dVar18) *
                                                               (double)DAT_007358c8 +
                                                              (double)(float)(dVar18 * (double)
                                                  DAT_007358c4 + (double)DAT_007358c0))) *
                                                  (float)SQRT(dVar19) - 1.5707964) * dVar11),
                             (double)DAT_0071d4dc,(double)DAT_0071d4e0,dVar13,&DAT_00720000,
                             &DAT_00720000,pfVar2 + 0x55);
  dVar7 = -(double)(float)((double)GameCamera.field16_0x1b0 * dVar14 - (double)pfVar2[0x50]);
  dVar11 = -(double)(float)((double)GameCamera.field16_0x1b0 * dVar16 - (double)pfVar2[0x4c]);
  dVar19 = -(double)(float)((double)(float)GameCamera.field17_0x1b4._0_4_ * dVar16 -
                           (double)pfVar2[0x4d]);
  dVar16 = -(double)(float)((double)(float)GameCamera.field17_0x1b4._4_4_ * dVar16 -
                           (double)pfVar2[0x4e]);
  local_100 = (float)dVar7;
  dVar18 = -(double)(float)((double)(float)GameCamera.field17_0x1b4._0_4_ * dVar14 -
                           (double)pfVar2[0x51]);
  local_fc = (float)dVar18;
  dVar14 = -(double)(float)((double)(float)GameCamera.field17_0x1b4._4_4_ * dVar14 -
                           (double)pfVar2[0x52]);
  local_f8 = (float)dVar14;
  dVar7 = (double)((float)(dVar16 * dVar14 +
                          (double)(float)(dVar11 * dVar7 + (double)(float)(dVar19 * dVar18))) /
                  (SQRT((float)(dVar16 * dVar16 +
                               (double)(float)(dVar11 * dVar11 + (double)(float)(dVar19 * dVar19))))
                  * SQRT((float)(dVar14 * dVar14 +
                                (double)(float)(dVar7 * dVar7 + (double)(float)(dVar18 * dVar18)))))
                  );
  local_f4 = pfVar2[0x53];
  dVar18 = dVar7;
  if (dVar7 - dVar13 < 0.0) {
    dVar18 = ABS(dVar7);
  }
  dVar14 = dVar22;
  if (dVar7 - dVar13 < 0.0) {
    dVar14 = dVar10;
  }
  dVar7 = (double)(float)(dVar22 - dVar18);
  if ((double)(float)(dVar22 - dVar18) - dVar13 < 0.0) {
    dVar7 = dVar13;
  }
  dVar7 = (double)camera::Cam_InterpAngles
                            (dVar13,-(double)(float)(-(double)(float)((double)((float)((double)(
                                                  float)(dVar18 * dVar18) * dVar18) * DAT_007358cc +
                                                  (float)((double)(float)(dVar18 * dVar18) *
                                                          (double)DAT_007358c8 +
                                                         (double)(float)(dVar18 * (double)
                                                  DAT_007358c4 + (double)DAT_007358c0))) *
                                                  (double)(float)SQRT(dVar7) - dVar12) * dVar14 -
                                                  dVar12),(double)DAT_0071d4d4,(double)DAT_0071d4d8,
                             dVar13,&DAT_00720000,&DAT_00720000,pfVar2 + 0x54);
  local_ec = (float)GameCamera.field17_0x1b4._4_4_ * local_100 - GameCamera.field16_0x1b0 * local_f8
  ;
  local_f0 = (float)GameCamera.field17_0x1b4._0_4_ * local_f8 -
             (float)GameCamera.field17_0x1b4._4_4_ * local_fc;
  local_e8 = GameCamera.field16_0x1b0 * local_fc - (float)GameCamera.field17_0x1b4._0_4_ * local_100
  ;
  local_e4 = 0;
  dVar18 = dVar22;
  if ((double)(float)((double)local_e8 * dVar16 +
                     (double)(float)((double)local_f0 * dVar11 +
                                    (double)(float)((double)local_ec * dVar19))) - dVar13 < 0.0) {
    dVar18 = dVar10;
  }
  mobyutil::MB_RotateQuatAxisAngle((float)(dVar7 * dVar18),&local_e0,&local_100);
  local_e4 = 0;
  local_f0 = local_dc * (float)GameCamera.field17_0x1b4._4_4_ -
             local_d8 * (float)GameCamera.field17_0x1b4._0_4_;
  local_e8 = local_e0 * (float)GameCamera.field17_0x1b4._0_4_ - local_dc * GameCamera.field16_0x1b0;
  local_ec = local_d8 * GameCamera.field16_0x1b0 - local_e0 * (float)GameCamera.field17_0x1b4._4_4_;
  mobyutil::MB_RotateQuatAxisAngle((float)dVar6,&local_e0,&local_e0);
  uVar5 = GameCamera.field17_0x1b4._4_4_;
  uVar4 = GameCamera.field17_0x1b4._0_4_;
  fVar3 = GameCamera.field16_0x1b0;
  fVar23 = pfVar2[0x58];
  dVar16 = (double)(float)GameCamera.field17_0x1b4._8_4_;
  dVar14 = (double)(float)GameCamera.field17_0x1b4._12_4_;
  dVar7 = (double)(float)GameCamera.field17_0x1b4._16_4_;
  dVar6 = (double)(float)GameCamera.field17_0x1b4._20_4_;
  dVar18 = (double)SQRT(local_d8 * local_d8 + local_e0 * local_e0 + local_dc * local_dc);
  if (dVar18 == dVar13) {
    pfVar2[0x50] = local_e0;
    pfVar2[0x51] = local_dc;
    pfVar2[0x52] = local_d8;
    pfVar2[0x52] = 0.0;
    pfVar2[0x51] = 0.0;
    pfVar2[0x50] = 0.0;
    dVar18 = dVar13;
    dVar21 = dVar13;
    dVar11 = dVar13;
  }
  else {
    fVar1 = (float)(dVar21 / dVar18);
    dVar11 = (double)(local_e0 * fVar1);
    pfVar2[0x50] = local_e0 * fVar1;
    dVar21 = (double)(local_dc * fVar1);
    pfVar2[0x51] = local_dc * fVar1;
    dVar18 = (double)(local_d8 * fVar1);
    pfVar2[0x52] = local_d8 * fVar1;
  }
  pfVar2[0x53] = local_d4;
  dVar20 = (double)(fVar3 * fVar23 + pfVar2[0x28]);
  dVar17 = (double)((float)uVar4 * fVar23 + pfVar2[0x29]);
  dVar15 = (double)((float)uVar5 * fVar23 + pfVar2[0x2a]);
  dVar19 = (double)SQRT((float)(dVar18 * dVar18 +
                               (double)(float)(dVar11 * dVar11 + (double)(float)(dVar21 * dVar21))))
  ;
  if (dVar19 != dVar13) {
    dVar8 = (double)(float)((double)(float)(dVar18 * dVar6 +
                                           (double)(float)(dVar11 * dVar14 +
                                                          (double)(float)(dVar21 * dVar7))) / dVar19
                           );
    dVar19 = dVar8;
    if (dVar8 - dVar13 < 0.0) {
      dVar19 = ABS(dVar8);
    }
    dVar9 = dVar22;
    if (dVar8 - dVar13 < 0.0) {
      dVar9 = dVar10;
    }
    dVar10 = (double)(float)(dVar22 - dVar19);
    if ((double)(float)(dVar22 - dVar19) - dVar13 < 0.0) {
      dVar10 = dVar13;
    }
    dVar10 = ABS(-(double)(float)(-(double)(float)((double)((float)((double)(float)(dVar19 * dVar19)
                                                                   * dVar19) * DAT_007358cc +
                                                           (float)((double)(float)(dVar19 * dVar19)
                                                                   * (double)DAT_007358c8 +
                                                                  (double)(float)(dVar19 * (double)
                                                  DAT_007358c4 + (double)DAT_007358c0))) *
                                                  (double)(float)SQRT(dVar10) - dVar12) * dVar9 -
                                 dVar12));
    if (dVar10 < 0.2617993950843811) {
      local_c4 = 0;
      local_c8 = (float)(dVar14 * dVar21 - (double)(float)(dVar7 * dVar11));
      local_d0 = (float)(dVar7 * dVar18 - (double)(float)(dVar6 * dVar21));
      local_cc = (float)(dVar6 * dVar11 - (double)(float)(dVar14 * dVar18));
      dVar18 = (double)fastfunc::FastDiffRots(0x3fd0c15240000000,dVar10);
      mobyutil::MB_RotateQuatAxisAngle((float)dVar18,pfVar2 + 0x50,pfVar2 + 0x50);
      pfVar2[0x56] = 0.0;
      pfVar2[0x54] = 0.0;
      pfVar2[0x55] = 0.0;
      dVar11 = (double)pfVar2[0x50];
    }
  }
  *(float *)(param_1 + 0x30) = (float)(dVar20 + dVar11);
  *(float *)(param_1 + 0x34) = (float)(dVar17 + (double)pfVar2[0x51]);
  fVar23 = pfVar2[0x52];
  *(float *)(param_1 + 0x3c) = (float)dVar16;
  *(float *)(param_1 + 0x38) = (float)(dVar15 + (double)fVar23);
  return;
}



//==== 00034a3c  ns=camera0  size=0x120
// sig: undefined Cam0_DrawCollSpheres(void)
// callers(2): 00034b5c camera0::UpdateFollowCamera; 00034c28 camera0::Camera0_Update
// callees(1): 00065470 stub::STUB_00065470

void camera0::Cam0_DrawCollSpheres(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  Sphere *pSVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  
  iVar7 = 0;
  iVar12 = 0;
  do {
    iVar8 = 0;
    iVar11 = iVar12;
    do {
      if (*(int *)(camera::CamCollGrid + iVar11) != 0) {
        piVar9 = (int *)(*(int *)(camera::CamCollGrid + iVar11) + camera::CamCollGrid);
        iVar10 = 0;
        iVar4 = *piVar9;
        piVar6 = piVar9;
        if (0 < iVar4) {
          do {
            if (piVar6[8] == 5) {
              pSVar5 = Spheres + piVar6[9];
              fVar1 = (pSVar5->matrix).v0.y;
              fVar2 = (pSVar5->matrix).v0.x;
              fVar3 = (pSVar5->matrix).v0.z;
              stub::STUB_00065470((double)SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1),
                                  &pSVar5->pos);
              iVar4 = *piVar9;
            }
            iVar10 = iVar10 + 1;
            piVar6 = piVar6 + 0xc;
          } while (iVar10 < iVar4);
        }
      }
      iVar8 = iVar8 + 1;
      iVar11 = iVar11 + 4;
    } while (iVar8 < 0x40);
    iVar7 = iVar7 + 1;
    iVar12 = iVar12 + 0x100;
  } while (iVar7 < 0x40);
  return;
}



//==== 00034b5c  ns=camera0  size=0x74
// sig: undefined UpdateFollowCamera(void)
// callers(0): 
// callees(8): 00032100 camera0::UpdateCamCollisions_0; 00032bd0 stub::STUB_00032bd0; 00032e10 camera0::GetAnalogInputs_0; 00033068 camera0::UpdateUserCam_0; 000335f0 camera0::UpdateCamPull_0; 000337a0 camera0::UpdateCamRotation_0; 000343f8 camera0::UpdateCamPosition_0; 00034a3c camera0::Cam0_DrawCollSpheres

void camera0::UpdateFollowCamera(undefined8 param_1)

{
  float local_10;
  float local_c;
  
  Cam0_DrawCollSpheres();
  UpdateCamPull_0(param_1);
  GetAnalogInputs_0((void *)param_1,&local_10,&local_c);
  UpdateUserCam_0((double)local_10,(double)local_c,param_1);
  UpdateCamCollisions_0(param_1);
  UpdateCamPosition_0(param_1);
  stub::STUB_00032bd0(param_1);
  UpdateCamRotation_0(param_1);
  return;
}



//==== 00034bd0  ns=camera0  size=0x50
// sig: void WarpFollowCam(float * pos)
// callers(0): 
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void camera0::WarpFollowCam(float *pos)

{
  void *pvVar1;
  
  pvVar1 = GameCamera.pCurrentUpdCam;
  GameCamera.posX = *pos;
  GameCamera.posY = pos[1];
  GameCamera.posZ = pos[2];
  GameCamera.field8_0x14c = *(char (*) [4])(pos + 3);
  *(float *)((int)GameCamera.pCurrentUpdCam + 0x30) = *pos;
  *(float *)((int)pvVar1 + 0x34) = pos[1];
  *(float *)((int)pvVar1 + 0x38) = pos[2];
  *(float *)((int)pvVar1 + 0x3c) = pos[3];
  return;
}



//==== 00034c20  ns=camera0  size=0x8
// sig: undefined Camera0_Activate(void)
// callers(0): 
// callees(0): 

undefined8 camera0::Camera0_Activate(void)

{
  return 0;
}



//==== 00034c28  ns=camera0  size=0xb4
// sig: undefined Camera0_Update(void)
// callers(0): 
// callees(12): 0002c268 camera0::ApplyHeroExternalMotion_0; 0002e3a0 camera0::UpdateCamTarget_0; 0002eda8 camera0::UpdateCameraOffset_0; 0002f530 camera0::???_Cam0_UpdateTargetSpecial; 00032100 camera0::UpdateCamCollisions_0; 00032bd0 stub::STUB_00032bd0; 00032e10 camera0::GetAnalogInputs_0; 00033068 camera0::UpdateUserCam_0; 000335f0 camera0::UpdateCamPull_0; 000337a0 camera0::UpdateCamRotation_0; 000343f8 camera0::UpdateCamPosition_0; 00034a3c camera0::Cam0_DrawCollSpheres

void camera0::Camera0_Update(undefined8 param_1)

{
  float local_10;
  float local_c;
  
  g_CameraSpeed = (&g_BaseCameraSpeed)[g_GameSettings.CameraSpeed];
  ApplyHeroExternalMotion_0();
  ____Cam0_UpdateTargetSpecial(param_1);
  UpdateCamTarget_0(param_1);
  Cam0_DrawCollSpheres();
  UpdateCamPull_0(param_1);
  GetAnalogInputs_0((void *)param_1,&local_10,&local_c);
  UpdateUserCam_0((double)local_10,(double)local_c,param_1);
  UpdateCamCollisions_0(param_1);
  UpdateCamPosition_0(param_1);
  stub::STUB_00032bd0(param_1);
  UpdateCamRotation_0(param_1);
  UpdateCameraOffset_0(param_1);
  return;
}



//==== 00034cdc  ns=stub  size=0x4
// sig: undefined STUB_00034cdc(void)
// callers(0): 
// callees(0): 

void stub::STUB_00034cdc(void)

{
  return;
}



//==== 00034ce0  ns=Global  size=0x14
// sig: undefined SECTION_HEADER_CAMERA1(void)
// callers(0): 
// callees(0): 

void SECTION_HEADER_CAMERA1(void)

{
  DAT_0071d5d8 = 0x10000;
  return;
}



//==== 00034cf8  ns=camera::camera1  size=0x15c
// sig: undefined Cam1_InitPosRot(void)
// callers(1): 000352c4 camera::camera1::InitCamera_1
// callees(1): 00500ca4 fastfunc::FastEulerToMtx1

void camera::camera1::Cam1_InitPosRot(undefined4 *param_1)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined1 local_60 [16];
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  iVar7 = ImportCameras;
  iVar2 = param_1[0x1c];
  sVar1 = *(short *)(param_1 + 0x21);
  *(undefined4 *)(iVar2 + 0x50) = 0;
  *(undefined4 *)(iVar2 + 0x5c) = 0x3fc00000;
  *(undefined4 *)(iVar2 + 0x80) = 0;
  puVar6 = (undefined4 *)(iVar7 + (int)((longlong)sVar1 << 5));
  *(undefined4 *)(iVar2 + 8) = 0x3dcccccd;
  *(undefined4 *)(iVar2 + 4) = 0x3ca3d70a;
  *(undefined4 *)(iVar2 + 0xc) = 0;
  trapWord(0x10,(longlong)sVar1,0);
  if (-1 < sVar1) {
    *(undefined4 *)(iVar2 + 0x5c) = *(undefined4 *)(puVar6[7] + 0x18);
  }
  uVar3 = puVar6[1];
  uVar4 = puVar6[2];
  uVar5 = puVar6[3];
  param_1[0xc] = *puVar6;
  param_1[0xd] = uVar3;
  param_1[0xe] = uVar4;
  param_1[0xf] = uVar5;
  fastfunc::FastEulerToMtx1(&local_50,local_60);
  *param_1 = local_50;
  param_1[1] = local_4c;
  param_1[2] = local_48;
  param_1[3] = local_44;
  param_1[4] = local_40;
  param_1[5] = local_3c;
  param_1[6] = local_38;
  param_1[7] = local_34;
  param_1[8] = local_30;
  param_1[9] = local_2c;
  param_1[10] = local_28;
  param_1[0xb] = local_24;
  param_1[0x10] = local_50;
  param_1[0x11] = local_4c;
  param_1[0x12] = local_48;
  param_1[0x13] = local_44;
  *(undefined2 *)((int)param_1 + 0x7e) = 0;
  return;
}



//==== 00034e68  ns=camera::camera1  size=0x368
// sig: undefined Cam1_UpdateCam(void)
// callers(1): 000352e4 camera::camera1::UpdateCamera_1
// callees(2): 00050288 camera::Cam_InterpAngles; 001115c8 mobyutil::MB_QuatBetweenVecs

void camera::camera1::Cam1_UpdateCam(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 local_30 [24];
  
  fVar5 = param_1[0x1c];
  fVar1 = g_heroPosition.y - param_1[0xd];
  fVar3 = g_heroPosition.x - param_1[0xc];
  fVar4 = (g_heroPosition.z + *(float *)((int)fVar5 + 0x5c)) - param_1[0xe];
  dVar13 = 0.0;
  fVar2 = fVar4 * fVar4 + fVar3 * fVar3 + fVar1 * fVar1;
  dVar8 = dVar13;
  dVar9 = dVar13;
  dVar10 = dVar13;
  if (SQRT(fVar2) != 0.0) {
    fVar6 = 1.0 / SQRT(fVar2);
    fVar6 = -(fVar2 * fVar6 * fVar6 - 1.0) * fVar6 * 0.5 + fVar6;
    fVar6 = -(fVar2 * fVar6 * fVar6 - 1.0) * fVar6 * 0.5 + fVar6;
    fVar6 = -(fVar2 * fVar6 * fVar6 - 1.0) * fVar6 * 0.5 + fVar6;
    dVar10 = (double)(fVar3 * fVar6);
    dVar9 = (double)(fVar1 * fVar6);
    dVar8 = (double)(fVar4 * fVar6);
  }
  dVar12 = 1.0;
  fVar1 = (float)(dVar8 * (double)param_1[2] +
                 (double)(float)(dVar10 * (double)*param_1 +
                                (double)(float)(dVar9 * (double)param_1[1])));
  fVar3 = fVar1;
  if (fVar1 - 0.0 < 0.0) {
    fVar3 = ABS(fVar1);
  }
  dVar8 = (double)(1.0 - fVar3);
  if ((double)(1.0 - fVar3) - 0.0 < 0.0) {
    dVar8 = dVar13;
  }
  dVar9 = dVar12;
  if (fVar1 - 0.0 < 0.0) {
    dVar9 = -1.0;
  }
  Cam_InterpAngles(0,-(double)(float)(-(double)((fVar3 * fVar3 * fVar3 * DAT_007358cc +
                                                fVar3 * fVar3 * DAT_007358c8 +
                                                fVar3 * DAT_007358c4 + DAT_007358c0) *
                                                (float)SQRT(dVar8) - 1.5707964) * dVar9 -
                                     1.5707963705062866),(double)*(float *)((int)fVar5 + 4),
                   (double)*(float *)((int)fVar5 + 8),(double)*(float *)((int)fVar5 + 0xc),fVar5,
                   &DAT_00034e54,fVar5);
  mobyutil::MB_QuatBetweenVecs(param_1,param_1 + 0x10,local_30);
  fVar5 = param_1[1];
  fVar1 = *param_1;
  fVar3 = param_1[2];
  dVar8 = (double)(fVar3 * fVar3 + fVar1 * fVar1 + fVar5 * fVar5);
  if ((double)(float)SQRT(dVar8) == dVar13) {
    param_1[0x10] = *param_1;
    param_1[0x11] = param_1[1];
    fVar4 = param_1[3];
    param_1[0x12] = param_1[2];
    dVar8 = dVar13;
    dVar9 = dVar13;
    dVar10 = dVar13;
  }
  else {
    dVar9 = 1.0 / SQRT(dVar8);
    fVar4 = param_1[3];
    dVar9 = (double)(float)(-(double)(float)((double)(float)(dVar8 * dVar9) * dVar9 - dVar12) *
                            (double)(float)(dVar9 * 0.5) + dVar9);
    dVar9 = (double)(float)(-(double)(float)((double)(float)(dVar8 * dVar9) * dVar9 - dVar12) *
                            (double)(float)(dVar9 * 0.5) + dVar9);
    fVar2 = (float)(-(double)(float)((double)(float)(dVar8 * dVar9) * dVar9 - dVar12) *
                    (double)(float)(dVar9 * 0.5) + dVar9);
    dVar10 = (double)(fVar1 * fVar2);
    dVar9 = (double)(fVar5 * fVar2);
    dVar8 = (double)(fVar3 * fVar2);
  }
  param_1[0x10] = (float)dVar10;
  param_1[0x11] = (float)dVar9;
  param_1[0x12] = (float)dVar8;
  param_1[0x13] = fVar4;
  *param_1 = (float)dVar10;
  param_1[1] = (float)dVar9;
  param_1[2] = (float)dVar8;
  param_1[3] = fVar4;
  fVar5 = (float)((double)(float)GameCamera.field17_0x1b4._4_4_ * dVar10 -
                 (double)(float)((double)GameCamera.field16_0x1b0 * dVar8));
  fVar1 = (float)((double)(float)GameCamera.field17_0x1b4._0_4_ * dVar8 -
                 (double)(float)((double)(float)GameCamera.field17_0x1b4._4_4_ * dVar9));
  fVar3 = (float)((double)GameCamera.field16_0x1b0 * dVar9 -
                 (double)(float)((double)(float)GameCamera.field17_0x1b4._0_4_ * dVar10));
  param_1[7] = 0.0;
  dVar7 = (double)(fVar3 * fVar3 + fVar1 * fVar1 + fVar5 * fVar5);
  dVar11 = dVar13;
  dVar14 = dVar13;
  if ((double)(float)SQRT(dVar7) != dVar13) {
    dVar13 = 1.0 / SQRT(dVar7);
    dVar13 = (double)(float)(-(double)(float)((double)(float)(dVar7 * dVar13) * dVar13 - dVar12) *
                             (double)(float)(dVar13 * 0.5) + dVar13);
    dVar13 = (double)(float)(-(double)(float)((double)(float)(dVar7 * dVar13) * dVar13 - dVar12) *
                             (double)(float)(dVar13 * 0.5) + dVar13);
    fVar2 = (float)(-(double)(float)((double)(float)(dVar7 * dVar13) * dVar13 - dVar12) *
                    (double)(float)(dVar13 * 0.5) + dVar13);
    dVar11 = (double)(fVar1 * fVar2);
    dVar13 = (double)(fVar5 * fVar2);
    dVar14 = (double)(fVar3 * fVar2);
  }
  param_1[4] = (float)dVar11;
  param_1[5] = (float)dVar13;
  param_1[6] = (float)dVar14;
  param_1[0xb] = 0.0;
  param_1[8] = (float)(dVar9 * dVar14 - (double)(float)(dVar8 * dVar13));
  param_1[9] = (float)(dVar8 * dVar11 - (double)(float)(dVar10 * dVar14));
  param_1[10] = (float)(dVar10 * dVar13 - (double)(float)(dVar9 * dVar11));
  return;
}



//==== 000351d0  ns=camera::camera1  size=0xf4
// sig: undefined ActivateCamera_1(void)
// callers(0): 
// callees(1): 00110b70 mobyutil::MB_IsPntInCuboid

undefined8 camera::camera1::ActivateCamera_1(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(ImportCameras + (int)((longlong)*(short *)(param_1 + 0x84) << 5) + 0x1c);
  if (((*(int *)(param_1 + 0x74) == 4) &&
      (((param_2 == 0 || (*(short *)(param_2 + 0x7e) != 0)) ||
       (*(byte *)(param_2 + 0x7c) < *(byte *)(param_1 + 0x7c))))) &&
     (iVar1 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)*(int *)(iVar2 + 0xc)),
     iVar1 != 0)) {
    iVar2 = mobyutil::MB_IsPntInCuboid((Vec4 *)&GameCamera.posX,(longlong)*(int *)(iVar2 + 0xc));
    if (iVar2 != 0) {
      return 1;
    }
    GameCamera.blender.reqType = '\0';
    *(undefined2 *)((int)GameCamera.pCurrentUpdCam + 0x7e) = 2;
    GameCamera.blender.reqQuatInterpAdd = 0.018;
    GameCamera.blender.reqPosInterpAdd = 0.018;
    return 1;
  }
  return 0;
}



//==== 000352c4  ns=camera::camera1  size=0x20
// sig: undefined InitCamera_1(void)
// callers(0): 
// callees(1): 00034cf8 camera::camera1::Cam1_InitPosRot

void camera::camera1::InitCamera_1(void)

{
  Cam1_InitPosRot();
  return;
}



//==== 000352e4  ns=camera::camera1  size=0x20
// sig: undefined UpdateCamera_1(void)
// callers(0): 
// callees(1): 00034e68 camera::camera1::Cam1_UpdateCam

void camera::camera1::UpdateCamera_1(void)

{
  Cam1_UpdateCam();
  return;
}



//==== 00035304  ns=camera::camera1  size=0x80
// sig: undefined ExitCamera_1(void)
// callers(0): 
// callees(1): 00110b70 mobyutil::MB_IsPntInCuboid

void camera::camera1::ExitCamera_1(int param_1)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x74) == 4) &&
     (iVar1 = mobyutil::MB_IsPntInCuboid
                        (&g_heroPosition,
                         (longlong)
                         *(int *)(*(int *)(ImportCameras +
                                           (int)((longlong)*(short *)(param_1 + 0x84) << 5) + 0x1c)
                                 + 0xc)), iVar1 == 0)) {
    *(undefined2 *)(param_1 + 0x7e) = 3;
  }
  return;
}



//==== 00035384  ns=Global  size=0x14
// sig: undefined SECTION_HEADER_CAMERA10(void)
// callers(0): 
// callees(0): 

void SECTION_HEADER_CAMERA10(void)

{
  DAT_0071d648 = 0x10000;
  return;
}



//==== 00035398  ns=camera::camera10  size=0x84
// sig: undefined Cam10_IsHeroInVolume(void)
// callers(0): 
// callees(2): 00104e44 mobyutil::PointInsideComplexPoly; 00110b70 mobyutil::MB_IsPntInCuboid

int camera::camera10::Cam10_IsHeroInVolume(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x14) < 0) {
    if (*(int *)(param_1 + 0xc) < 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)*(int *)(param_1 + 0xc));
    }
  }
  else {
    iVar1 = mobyutil::PointInsideComplexPoly
                      (&g_heroPosition,(Vec4 *)Splines[*(int *)(param_1 + 0x14)]->points,
                       Splines[*(int *)(param_1 + 0x14)]->cnt);
  }
  return iVar1;
}



//==== 00035420  ns=camera::camera10  size=0x124
// sig: undefined Cam10_GetClosestMobyInGroup(void)
// callers(0): 
// callees(0): 

MobyInstance * camera::camera10::Cam10_GetClosestMobyInGroup(longlong param_1)

{
  float fVar1;
  ushort uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  ushort *puVar6;
  ushort *puVar7;
  MobyInstance *pMVar8;
  MobyInstance *pMVar9;
  
  fVar1 = 10000.0;
  pMVar8 = (MobyInstance *)0x0;
  puVar7 = *(ushort **)((int)&mobyutil::g_MobyGroups + (int)(param_1 << 2));
  puVar6 = puVar7;
  do {
    pMVar9 = MobyInstance + (*puVar6 & 0x7fff);
    if ((pMVar9->state < 0x80) &&
       (fVar4 = g_heroPosition.y - (pMVar9->pos).y, fVar3 = g_heroPosition.x - (pMVar9->pos).x,
       fVar5 = g_heroPosition.z - (pMVar9->pos).z,
       fVar3 = SQRT(fVar5 * fVar5 + fVar3 * fVar3 + fVar4 * fVar4), fVar3 < fVar1)) {
      fVar1 = fVar3;
      pMVar8 = pMVar9;
    }
    uVar2 = *puVar6;
    puVar6 = puVar6 + 1;
  } while (-1 < (short)uVar2);
  if (pMVar8 == (MobyInstance *)0x0) {
    do {
      pMVar9 = MobyInstance + (*puVar7 & 0x7fff);
      fVar4 = g_heroPosition.y - (pMVar9->pos).y;
      fVar3 = g_heroPosition.x - (pMVar9->pos).x;
      fVar5 = g_heroPosition.z - (pMVar9->pos).z;
      fVar3 = SQRT(fVar5 * fVar5 + fVar3 * fVar3 + fVar4 * fVar4);
      if (fVar3 < fVar1) {
        fVar1 = fVar3;
        pMVar8 = pMVar9;
      }
      uVar2 = *puVar7;
      puVar7 = puVar7 + 1;
    } while (-1 < (short)uVar2);
  }
  return pMVar8;
}



//==== 00035560  ns=camera::camera10  size=0x74c
// sig: undefined Cam10_00035560(void)
// callers(1): 00037638 camera::camera10::UpdateCamera_10
// callees(3): 0002ed78 stub::STUB_0002ed78; 00057820 collproc::CollLine; 001113e0 mobyutil::MB_RotateQuatAxisAngle

void camera::camera10::Cam10_00035560(int param_1,float *param_2)

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
  int iVar11;
  ushort uVar13;
  int iVar12;
  double dVar14;
  double dVar15;
  undefined1 local_d0 [16];
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  
  iVar12 = *(int *)(param_1 + 0x70);
  fVar1 = param_2[0xc];
  fVar2 = param_2[0xd];
  if ((*(short *)(param_2 + 0x1b) == 0) || (*(short *)(param_2 + 0x1b) == 3)) {
    dVar15 = 0.0;
    iVar11 = stub::STUB_0002ed78(0,0x3fd0000000000000,param_1,param_2);
    if (iVar11 != 0) {
      fVar2 = *(float *)(param_1 + 0x34) - fVar2;
      fVar1 = *(float *)(param_1 + 0x30) - fVar1;
      fVar3 = *(float *)(param_1 + 0x3c);
      fVar4 = fVar1 * fVar1 + fVar2 * fVar2;
      dVar14 = (double)SQRT(fVar4);
      param_2[0x1a] = SQRT(fVar4);
      if (2.0 < dVar14) {
        *(undefined2 *)(param_2 + 0x1b) = 1;
        if (dVar14 == dVar15) {
          param_2[3] = fVar3;
          *param_2 = fVar1;
          param_2[1] = fVar2;
          param_2[2] = 0.0;
          dVar14 = dVar15;
        }
        else {
          fVar5 = 1.0 / SQRT(fVar4);
          param_2[3] = fVar3;
          fVar5 = -(fVar4 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
          fVar5 = -(fVar4 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
          fVar5 = -(fVar4 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
          dVar14 = (double)(fVar1 * fVar5);
          dVar15 = (double)(fVar2 * fVar5);
        }
        *param_2 = (float)dVar14;
        param_2[1] = (float)dVar15;
        param_2[2] = 0.0;
        param_2[0x10] = *(float *)(param_1 + 0x30);
        param_2[0x11] = *(float *)(param_1 + 0x34);
        param_2[0x12] = *(float *)(param_1 + 0x38);
        fVar1 = *(float *)(param_1 + 0x3c);
        *(undefined2 *)((int)param_2 + 0x6e) = 0;
        param_2[0x13] = fVar1;
        param_2[0x14] = *(float *)(param_1 + 0x30);
        param_2[0x15] = *(float *)(param_1 + 0x34);
        param_2[0x16] = *(float *)(param_1 + 0x38);
        fVar1 = *(float *)(param_1 + 0x3c);
        param_2[0x18] = 0.17453292;
        param_2[0x17] = fVar1;
      }
    }
  }
  if (*(short *)(param_2 + 0x1b) == 1) {
    uVar13 = *(ushort *)((int)param_2 + 0x6e);
    if ((uVar13 & 1) == 0) {
      mobyutil::MB_RotateQuatAxisAngle(param_2[0x18],&local_c0,(float *)(iVar12 + 0xe0));
      local_b0 = 0.0;
      fVar4 = local_b8 * local_b8 + local_c0 * local_c0 + local_bc * local_bc;
      fVar2 = local_b0;
      fVar1 = local_b0;
      fVar3 = local_b0;
      if (SQRT(fVar4) != 0.0) {
        fVar3 = 1.0 / SQRT(fVar4);
        fVar3 = -(fVar4 * fVar3 * fVar3 - 1.0) * fVar3 * 0.5 + fVar3;
        fVar3 = -(fVar4 * fVar3 * fVar3 - 1.0) * fVar3 * 0.5 + fVar3;
        fVar3 = -(fVar4 * fVar3 * fVar3 - 1.0) * fVar3 * 0.5 + fVar3;
        fVar2 = local_c0 * fVar3;
        fVar1 = local_bc * fVar3;
        fVar3 = local_b8 * fVar3;
      }
      fVar4 = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
      local_a4 = g_heroPosition.w;
      fVar5 = SQRT(DAT_00969f78 * DAT_00969f78 +
                   hero::g_heroGravityDir * hero::g_heroGravityDir + DAT_00969f74 * DAT_00969f74);
      fVar10 = -param_2[0x1a] / fVar4;
      fVar9 = -*(float *)(iVar12 + 0x60) / fVar5;
      fVar6 = local_b0;
      if (0.0 - fVar5 < 0.0) {
        fVar6 = DAT_00969f78 * fVar9;
      }
      fVar7 = local_b0;
      if (0.0 - fVar5 < 0.0) {
        fVar7 = DAT_00969f74 * fVar9;
      }
      fVar8 = local_b0;
      if (0.0 - fVar5 < 0.0) {
        fVar8 = hero::g_heroGravityDir * fVar9;
      }
      if (fVar5 - 0.0 < 0.0) {
        fVar6 = DAT_00969f78 * fVar9;
      }
      if (fVar5 - 0.0 < 0.0) {
        fVar7 = DAT_00969f74 * fVar9;
      }
      if (fVar5 - 0.0 < 0.0) {
        fVar8 = hero::g_heroGravityDir * fVar9;
      }
      local_a8 = local_b0;
      if (0.0 - fVar4 < 0.0) {
        local_a8 = fVar3 * fVar10;
      }
      local_ac = local_b0;
      if (0.0 - fVar4 < 0.0) {
        local_ac = fVar1 * fVar10;
      }
      if (0.0 - fVar4 < 0.0) {
        local_b0 = fVar2 * fVar10;
      }
      if (fVar4 - 0.0 < 0.0) {
        local_a8 = fVar3 * fVar10;
      }
      if (fVar4 - 0.0 < 0.0) {
        local_ac = fVar1 * fVar10;
      }
      if (fVar4 - 0.0 < 0.0) {
        local_b0 = fVar2 * fVar10;
      }
      local_a8 = g_heroPosition.z + fVar6 + local_a8;
      local_ac = g_heroPosition.y + fVar7 + local_ac;
      local_b0 = g_heroPosition.x + fVar8 + local_b0;
      local_c0 = fVar2;
      local_bc = fVar1;
      local_b8 = fVar3;
      iVar11 = collproc::CollLine(param_2 + 0x10,&local_b0,CAMERA_COLL_FLAGS,0,0);
      if (iVar11 == 0) {
        param_2[0x10] = local_b0;
        param_2[0x11] = local_ac;
        param_2[0x12] = local_a8;
        param_2[0x13] = local_a4;
        iVar11 = collproc::CollLine(&local_b0,local_d0,CAMERA_COLL_FLAGS,0,0);
        uVar13 = *(ushort *)((int)param_2 + 0x6e);
        if (iVar11 == 0) {
          param_2[0x19] = 0.0;
          *(undefined2 *)(param_2 + 0x1b) = 2;
          return;
        }
      }
      else {
        uVar13 = *(ushort *)((int)param_2 + 0x6e) | 1;
        *(ushort *)((int)param_2 + 0x6e) = uVar13;
      }
    }
    if ((uVar13 & 2) == 0) {
      mobyutil::MB_RotateQuatAxisAngle(-param_2[0x18],&local_a0,(float *)(iVar12 + 0xe0));
      fVar5 = 0.0;
      fVar4 = local_98 * local_98 + local_a0 * local_a0 + local_9c * local_9c;
      fVar2 = fVar5;
      fVar1 = fVar5;
      fVar3 = fVar5;
      if (SQRT(fVar4) != 0.0) {
        fVar3 = 1.0 / SQRT(fVar4);
        fVar3 = -(fVar4 * fVar3 * fVar3 - 1.0) * fVar3 * 0.5 + fVar3;
        fVar3 = -(fVar4 * fVar3 * fVar3 - 1.0) * fVar3 * 0.5 + fVar3;
        fVar3 = -(fVar4 * fVar3 * fVar3 - 1.0) * fVar3 * 0.5 + fVar3;
        fVar2 = local_a0 * fVar3;
        fVar1 = local_9c * fVar3;
        fVar3 = local_98 * fVar3;
      }
      fVar4 = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
      local_84 = g_heroPosition.w;
      fVar6 = SQRT(DAT_00969f78 * DAT_00969f78 +
                   hero::g_heroGravityDir * hero::g_heroGravityDir + DAT_00969f74 * DAT_00969f74);
      fVar10 = -param_2[0x1a] / fVar4;
      fVar9 = -*(float *)(iVar12 + 0x60) / fVar6;
      local_88 = fVar5;
      if (0.0 - fVar4 < 0.0) {
        local_88 = fVar3 * fVar10;
      }
      local_8c = fVar5;
      if (0.0 - fVar4 < 0.0) {
        local_8c = fVar1 * fVar10;
      }
      local_90 = fVar5;
      if (0.0 - fVar4 < 0.0) {
        local_90 = fVar2 * fVar10;
      }
      if (fVar4 - 0.0 < 0.0) {
        local_88 = fVar3 * fVar10;
      }
      if (fVar4 - 0.0 < 0.0) {
        local_8c = fVar1 * fVar10;
      }
      if (fVar4 - 0.0 < 0.0) {
        local_90 = fVar2 * fVar10;
      }
      fVar4 = fVar5;
      if (0.0 - fVar6 < 0.0) {
        fVar4 = DAT_00969f78 * fVar9;
      }
      fVar10 = fVar5;
      if (0.0 - fVar6 < 0.0) {
        fVar10 = DAT_00969f74 * fVar9;
      }
      if (0.0 - fVar6 < 0.0) {
        fVar5 = hero::g_heroGravityDir * fVar9;
      }
      if (fVar6 - 0.0 < 0.0) {
        fVar4 = DAT_00969f78 * fVar9;
      }
      if (fVar6 - 0.0 < 0.0) {
        fVar10 = DAT_00969f74 * fVar9;
      }
      if (fVar6 - 0.0 < 0.0) {
        fVar5 = hero::g_heroGravityDir * fVar9;
      }
      local_88 = g_heroPosition.z + fVar4 + local_88;
      local_8c = g_heroPosition.y + fVar10 + local_8c;
      local_90 = g_heroPosition.x + fVar5 + local_90;
      local_a0 = fVar2;
      local_9c = fVar1;
      local_98 = fVar3;
      iVar12 = collproc::CollLine(param_2 + 0x14,&local_90,CAMERA_COLL_FLAGS,0,0);
      if (iVar12 == 0) {
        param_2[0x14] = local_90;
        param_2[0x15] = local_8c;
        param_2[0x16] = local_88;
        param_2[0x17] = local_84;
        iVar12 = collproc::CollLine(&local_90,local_d0,CAMERA_COLL_FLAGS,0,0);
        uVar13 = *(ushort *)((int)param_2 + 0x6e);
        if (iVar12 == 0) {
          param_2[0x19] = 0.0;
          *(undefined2 *)(param_2 + 0x1b) = 2;
          param_2[0x18] = -param_2[0x18];
          return;
        }
      }
      else {
        uVar13 = *(ushort *)((int)param_2 + 0x6e) | 2;
        *(ushort *)((int)param_2 + 0x6e) = uVar13;
      }
    }
    fVar1 = param_2[0x18];
    param_2[0x18] = fVar1 + 0.17453292;
    if ((2.7925267 < fVar1 + 0.17453292) || (uVar13 == 3)) {
      *(undefined2 *)(param_2 + 0x1b) = 0;
    }
  }
  return;
}



//==== 00035cac  ns=camera::camera10  size=0x9c
// sig: undefined ???_Cam10_CheckLineBlocked(void)
// callers(0): 
// callees(1): 00057820 collproc::CollLine

void camera::camera10::____Cam10_CheckLineBlocked(longlong param_1,int param_2,float *param_3)

{
  float fVar1;
  int iVar2;
  
  if (*(short *)(param_2 + 0x6c) == 2) {
    fVar1 = DAT_0071d66c;
    if (*(int *)(param_2 + 0x60) < 1) {
      fVar1 = -DAT_0071d66c;
    }
    *param_3 = fVar1;
    iVar2 = collproc::CollLine(param_1 + 0x30,param_2 + 0x30,CAMERA_COLL_FLAGS,0,0);
    if (iVar2 == 0) {
      *(undefined2 *)(param_2 + 0x6c) = 0;
    }
  }
  return;
}



//==== 00035d68  ns=camera::camera10  size=0x4ac
// sig: undefined Cam10_00035d68(void)
// callers(1): 00037638 camera::camera10::UpdateCamera_10
// callees(4): 0002ed78 stub::STUB_0002ed78; 000501e8 camera::Cam_InterpValues; 00057820 collproc::CollLine; 001113e0 mobyutil::MB_RotateQuatAxisAngle

void camera::camera10::Cam10_00035d68(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  float *speed;
  double dVar8;
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
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  undefined8 uVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  float fVar29;
  
  iVar3 = *(int *)(param_1 + 0x70);
  dVar23 = (double)ANALOG_STICKS.x;
  dVar28 = (double)*(float *)(iVar3 + 0xe0);
  dVar27 = (double)*(float *)(iVar3 + 0xe4);
  dVar26 = (double)*(float *)(iVar3 + 0xe8);
  dVar25 = (double)*(float *)(iVar3 + 0xec);
  if (*(short *)(iVar3 + 0xdc) == 2) {
    if (*(int *)(iVar3 + 0xd0) < 1) {
      dVar23 = -(double)DAT_0071d66c;
    }
    else {
      dVar23 = (double)DAT_0071d66c;
    }
    iVar7 = collproc::CollLine(param_1 + 0x30,iVar3 + 0xa0,CAMERA_COLL_FLAGS,0,0);
    if (iVar7 == 0) {
      *(undefined2 *)(iVar3 + 0xdc) = 0;
    }
  }
  uVar24 = 0x3fd0000000000000;
  speed = (float *)stub::STUB_0002ed78((double)*(float *)(iVar3 + 0x108),0x3fd0000000000000,param_1,
                                       iVar3 + 0x70);
  dVar22 = 0.0;
  fVar29 = Cam_InterpValues(*(float *)(iVar3 + 0x108),(float)dVar23,0.01,0.2,0.0,speed);
  *(float *)(iVar3 + 0x108) = fVar29;
  mobyutil::MB_RotateQuatAxisAngle
            (fVar29 * 0.034906585,(float *)(iVar3 + 0xe0),(float *)(iVar3 + 0xe0));
  fVar29 = *(float *)(iVar3 + 0xe4);
  fVar1 = *(float *)(iVar3 + 0xe0);
  fVar2 = *(float *)(iVar3 + 0xe8);
  fVar4 = fVar2 * fVar2 + fVar1 * fVar1 + fVar29 * fVar29;
  dVar23 = dVar22;
  dVar10 = dVar22;
  dVar12 = dVar22;
  if ((double)SQRT(fVar4) != dVar22) {
    fVar5 = 1.0 / SQRT(fVar4);
    fVar5 = -(fVar4 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
    fVar5 = -(fVar4 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
    fVar5 = -(fVar4 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
    dVar12 = (double)(fVar1 * fVar5);
    dVar10 = (double)(fVar29 * fVar5);
    dVar23 = (double)(fVar2 * fVar5);
  }
  *(float *)(iVar3 + 0xe0) = (float)dVar12;
  *(float *)(iVar3 + 0xe4) = (float)dVar10;
  *(float *)(iVar3 + 0xe8) = (float)dVar23;
  fVar29 = g_heroPosition.w;
  dVar21 = (double)*(float *)(param_1 + 0x30);
  dVar20 = (double)*(float *)(param_1 + 0x34);
  dVar19 = (double)*(float *)(param_1 + 0x38);
  dVar18 = (double)*(float *)(param_1 + 0x3c);
  if (*(int *)(iVar3 + 0x108) != 0) {
    dVar17 = (double)g_heroPosition.y;
    dVar8 = (double)g_heroPosition.z;
    dVar15 = (double)SQRT((float)(dVar23 * dVar23 +
                                 (double)(float)(dVar12 * dVar12 + (double)(float)(dVar10 * dVar10))
                                 ));
    dVar13 = (double)SQRT(DAT_00969f78 * DAT_00969f78 +
                          hero::g_heroGravityDir * hero::g_heroGravityDir +
                          DAT_00969f74 * DAT_00969f74);
    dVar16 = (double)(float)(-(double)*(float *)(iVar3 + 0x50) / dVar15);
    fVar1 = (float)(-(double)*(float *)(iVar3 + 0x60) / dVar13);
    dVar9 = dVar22;
    if (dVar22 - dVar15 < 0.0) {
      dVar9 = (double)(float)(dVar23 * dVar16);
    }
    dVar11 = dVar22;
    if (dVar22 - dVar15 < 0.0) {
      dVar11 = (double)(float)(dVar10 * dVar16);
    }
    dVar14 = dVar22;
    if (dVar22 - dVar15 < 0.0) {
      dVar14 = (double)(float)(dVar12 * dVar16);
    }
    if (dVar15 - dVar22 < 0.0) {
      dVar9 = (double)(float)(dVar23 * dVar16);
    }
    if (dVar15 - dVar22 < 0.0) {
      dVar11 = (double)(float)(dVar10 * dVar16);
    }
    if (dVar15 - dVar22 < 0.0) {
      dVar14 = (double)(float)(dVar12 * dVar16);
    }
    dVar23 = dVar22;
    if (dVar22 - dVar13 < 0.0) {
      dVar23 = (double)(DAT_00969f78 * fVar1);
    }
    dVar10 = dVar22;
    if (dVar22 - dVar13 < 0.0) {
      dVar10 = (double)(DAT_00969f74 * fVar1);
    }
    dVar12 = dVar22;
    if (dVar22 - dVar13 < 0.0) {
      dVar12 = (double)(hero::g_heroGravityDir * fVar1);
    }
    if (dVar13 - dVar22 < 0.0) {
      dVar23 = (double)(DAT_00969f78 * fVar1);
    }
    if (dVar13 - dVar22 < 0.0) {
      dVar10 = (double)(DAT_00969f74 * fVar1);
    }
    if (dVar13 - dVar22 < 0.0) {
      dVar12 = (double)(hero::g_heroGravityDir * fVar1);
    }
    if (speed == (float *)0x0) {
      *(float *)(param_1 + 0x30) =
           (float)(dVar14 + (double)(float)((double)g_heroPosition.x + dVar12));
      *(float *)(param_1 + 0x34) = (float)(dVar11 + (double)(float)(dVar17 + dVar10));
      *(float *)(param_1 + 0x38) = (float)(dVar9 + (double)(float)(dVar8 + dVar23));
      *(float *)(param_1 + 0x3c) = fVar29;
      iVar7 = stub::STUB_0002ed78((double)*(float *)(iVar3 + 0x108),uVar24,param_1,iVar3 + 0x70);
      *(float *)(param_1 + 0x30) = (float)dVar21;
      *(float *)(param_1 + 0x34) = (float)dVar20;
      *(float *)(param_1 + 0x38) = (float)dVar19;
      *(float *)(param_1 + 0x3c) = (float)dVar18;
      if (iVar7 == 1) {
        *(float *)(iVar3 + 0xe0) = (float)dVar28;
        *(float *)(iVar3 + 0xe4) = (float)dVar27;
        *(float *)(iVar3 + 0xe8) = (float)dVar26;
        *(float *)(iVar3 + 0xec) = (float)dVar25;
      }
    }
  }
  fVar4 = g_heroPosition.w;
  fVar29 = g_heroPosition.z;
  fVar2 = g_heroPosition.y;
  fVar1 = g_heroPosition.x;
  if (DAT_00969fec == 0) {
    *(float *)(iVar3 + 0x10c) = g_heroPosition.z;
  }
  else {
    fVar29 = *(float *)(iVar3 + 0x10c);
  }
  fVar2 = fVar2 - *(float *)(param_1 + 0x34);
  fVar1 = fVar1 - *(float *)(param_1 + 0x30);
  fVar5 = (fVar29 + *(float *)(iVar3 + 0x44)) - *(float *)(param_1 + 0x38);
  fVar29 = fVar5 * fVar5 + fVar1 * fVar1 + fVar2 * fVar2;
  dVar23 = dVar22;
  dVar25 = dVar22;
  if ((double)SQRT(fVar29) != dVar22) {
    fVar6 = 1.0 / SQRT(fVar29);
    fVar6 = -(fVar29 * fVar6 * fVar6 - 1.0) * fVar6 * 0.5 + fVar6;
    fVar6 = -(fVar29 * fVar6 * fVar6 - 1.0) * fVar6 * 0.5 + fVar6;
    fVar6 = -(fVar29 * fVar6 * fVar6 - 1.0) * fVar6 * 0.5 + fVar6;
    dVar23 = (double)(fVar6 * fVar1);
    dVar22 = (double)(fVar6 * fVar2);
    dVar25 = (double)(fVar6 * fVar5);
  }
  *(float *)(iVar3 + 0xf0) = (float)dVar23;
  *(float *)(iVar3 + 0xf4) = (float)dVar22;
  *(float *)(iVar3 + 0xf8) = (float)dVar25;
  *(float *)(iVar3 + 0xfc) = fVar4;
  return;
}



//==== 00036230  ns=camera::camera10  size=0x5cc
// sig: undefined Cam10_00036230(void)
// callers(1): 00036810 camera::camera10::InitCamera_10
// callees(0): 

void camera::camera10::Cam10_00036230(float *param_1)

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
  int iVar11;
  int iVar12;
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
  undefined4 uVar24;
  undefined4 uVar25;
  float fVar26;
  
  fVar26 = g_heroPosition.w;
  uVar25 = GameCamera.field17_0x1b4._4_4_;
  uVar24 = GameCamera.field17_0x1b4._0_4_;
  fVar23 = GameCamera.field16_0x1b0;
  fVar10 = param_1[0x1c];
  fVar1 = *(float *)((int)fVar10 + 0xe4);
  fVar2 = *(float *)((int)fVar10 + 0xe0);
  fVar3 = *(float *)((int)fVar10 + 0xe8);
  fVar4 = 0.0;
  fVar8 = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
  fVar5 = *(float *)((int)fVar10 + 0x58);
  fVar6 = *(float *)((int)fVar10 + 0x60);
  iVar11 = *(int *)(ImportCameras + (int)((longlong)*(short *)(param_1 + 0x21) << 5) + 0x1c);
  iVar12 = *(int *)(iVar11 + 0xc);
  fVar7 = -1.0 / fVar8;
  fVar13 = fVar4;
  if (0.0 - fVar8 < 0.0) {
    fVar13 = fVar3 * fVar7;
  }
  fVar18 = fVar4;
  if (0.0 - fVar8 < 0.0) {
    fVar18 = fVar1 * fVar7;
  }
  fVar17 = fVar4;
  if (0.0 - fVar8 < 0.0) {
    fVar17 = fVar2 * fVar7;
  }
  if (fVar8 - 0.0 < 0.0) {
    fVar13 = fVar3 * fVar7;
  }
  if (fVar8 - 0.0 < 0.0) {
    fVar18 = fVar1 * fVar7;
  }
  if (fVar8 - 0.0 < 0.0) {
    fVar17 = fVar2 * fVar7;
  }
  fVar1 = g_heroPosition.x;
  fVar3 = g_heroPosition.z;
  fVar2 = g_heroPosition.y;
  if (*(short *)(iVar11 + 0x28) == 0) {
    iVar11 = *(int *)(iVar11 + 0x20);
    fVar1 = MobyInstance[iVar11].pos.x;
    fVar2 = MobyInstance[iVar11].pos.y;
    fVar3 = MobyInstance[iVar11].pos.z;
    if (fVar13 * (param_1[0xe] - g_heroPosition.z) +
        fVar17 * (param_1[0xc] - g_heroPosition.x) + fVar18 * (param_1[0xd] - g_heroPosition.y) <
        (param_1[0xe] - fVar3) * fVar13 +
        (param_1[0xc] - fVar1) * fVar17 + (param_1[0xd] - fVar2) * fVar18) {
      fVar1 = g_heroPosition.x;
      fVar3 = g_heroPosition.z;
      fVar2 = g_heroPosition.y;
    }
  }
  fVar21 = g_heroPosition.y + fVar2;
  fVar7 = Cuboids[iVar12].matrix.v1.y;
  fVar8 = Cuboids[iVar12].matrix.v1.x;
  fVar9 = Cuboids[iVar12].matrix.v1.z;
  fVar20 = g_heroPosition.z + fVar3;
  fVar19 = g_heroPosition.x + fVar1;
  fVar22 = fVar9 * fVar9 + fVar8 * fVar8 + fVar7 * fVar7;
  fVar14 = fVar4;
  fVar15 = fVar4;
  fVar16 = fVar4;
  if (SQRT(fVar22) != 0.0) {
    fVar16 = 1.0 / SQRT(fVar22);
    fVar16 = -(fVar22 * fVar16 * fVar16 - 1.0) * fVar16 * 0.5 + fVar16;
    fVar16 = -(fVar22 * fVar16 * fVar16 - 1.0) * fVar16 * 0.5 + fVar16;
    fVar16 = -(fVar22 * fVar16 * fVar16 - 1.0) * fVar16 * 0.5 + fVar16;
    fVar14 = fVar8 * fVar16;
    fVar15 = fVar7 * fVar16;
    fVar16 = fVar9 * fVar16;
  }
  fVar7 = ABS(-(fVar20 * 0.5 - g_heroPosition.z) * fVar16 +
              -(fVar19 * 0.5 - g_heroPosition.x) * fVar14 +
              -(fVar21 * 0.5 - g_heroPosition.y) * fVar15) * 0.9063078 * 2.3662016;
  *(float *)((int)fVar10 + 0x50) = fVar7;
  if (fVar7 < fVar5) {
    *(float *)((int)fVar10 + 0x50) = fVar5;
    fVar7 = fVar5;
  }
  fVar7 = fVar7 + fVar13 * -(fVar20 * 0.5 - fVar3) +
                  fVar17 * -(fVar19 * 0.5 - fVar1) + fVar18 * -(fVar21 * 0.5 - fVar2);
  fVar3 = (float)uVar24 * fVar6 + fVar21 * 0.5 + fVar7 * fVar18;
  fVar2 = fVar23 * fVar6 + fVar19 * 0.5 + fVar7 * fVar17;
  fVar1 = (float)uVar25 * fVar6 + fVar20 * 0.5 + fVar7 * fVar13;
  fVar7 = fVar21 * 0.5 - fVar3;
  fVar6 = fVar19 * 0.5 - fVar2;
  fVar5 = fVar20 * 0.5 - fVar1;
  param_1[0xc] = fVar2;
  param_1[0xd] = fVar3;
  param_1[0xe] = fVar1;
  param_1[0xf] = fVar26;
  fVar13 = fVar5 * fVar5 + fVar6 * fVar6 + fVar7 * fVar7;
  fVar2 = fVar4;
  fVar3 = fVar4;
  fVar1 = fVar4;
  if (SQRT(fVar13) != 0.0) {
    fVar2 = 1.0 / SQRT(fVar13);
    fVar2 = -(fVar13 * fVar2 * fVar2 - 1.0) * fVar2 * 0.5 + fVar2;
    fVar2 = -(fVar13 * fVar2 * fVar2 - 1.0) * fVar2 * 0.5 + fVar2;
    fVar2 = -(fVar13 * fVar2 * fVar2 - 1.0) * fVar2 * 0.5 + fVar2;
    fVar1 = fVar6 * fVar2;
    fVar3 = fVar7 * fVar2;
    fVar2 = fVar5 * fVar2;
  }
  *(float *)((int)fVar10 + 0xfc) = fVar26;
  *(float *)((int)fVar10 + 0xf0) = fVar1;
  *(float *)((int)fVar10 + 0xf4) = fVar3;
  *(float *)((int)fVar10 + 0xf8) = fVar2;
  fVar2 = fVar2 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3;
  if (SQRT(fVar2) == 0.0) {
    *param_1 = fVar1;
    param_1[1] = *(float *)((int)fVar10 + 0xf4);
    param_1[2] = *(float *)((int)fVar10 + 0xf8);
    param_1[3] = *(float *)((int)fVar10 + 0xfc);
    param_1[2] = 0.0;
    param_1[1] = 0.0;
    *param_1 = 0.0;
    fVar2 = param_1[3];
    fVar5 = fVar4;
    fVar3 = fVar4;
    fVar1 = fVar4;
  }
  else {
    fVar5 = 1.0 / SQRT(fVar2);
    fVar5 = -(fVar2 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
    fVar5 = -(fVar2 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
    fVar5 = -(fVar2 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
    fVar1 = fVar1 * fVar5;
    *param_1 = fVar1;
    fVar3 = *(float *)((int)fVar10 + 0xf4) * fVar5;
    param_1[1] = fVar3;
    fVar5 = *(float *)((int)fVar10 + 0xf8) * fVar5;
    param_1[2] = fVar5;
    fVar2 = *(float *)((int)fVar10 + 0xfc);
    param_1[3] = fVar2;
  }
  fVar6 = fVar5 * fVar5 + fVar1 * fVar1 + fVar3 * fVar3;
  if (SQRT(fVar6) == 0.0) {
    param_1[0x10] = *param_1;
    param_1[0x11] = param_1[1];
    fVar2 = param_1[3];
    param_1[0x12] = param_1[2];
    fVar3 = fVar4;
    fVar5 = fVar4;
    fVar1 = fVar4;
  }
  else {
    fVar10 = 1.0 / SQRT(fVar6);
    fVar10 = -(fVar6 * fVar10 * fVar10 - 1.0) * fVar10 * 0.5 + fVar10;
    fVar10 = -(fVar6 * fVar10 * fVar10 - 1.0) * fVar10 * 0.5 + fVar10;
    fVar10 = -(fVar6 * fVar10 * fVar10 - 1.0) * fVar10 * 0.5 + fVar10;
    fVar1 = fVar1 * fVar10;
    fVar3 = fVar3 * fVar10;
    fVar5 = fVar5 * fVar10;
  }
  param_1[0x13] = fVar2;
  param_1[3] = fVar2;
  param_1[0x10] = fVar1;
  param_1[0x11] = fVar3;
  param_1[0x12] = fVar5;
  fVar10 = (float)uVar25 * fVar1 - fVar23 * fVar5;
  fVar7 = (float)uVar24 * fVar5 - (float)uVar25 * fVar3;
  fVar13 = fVar23 * fVar3 - (float)uVar24 * fVar1;
  *param_1 = fVar1;
  param_1[1] = fVar3;
  param_1[2] = fVar5;
  param_1[7] = 0.0;
  fVar8 = fVar13 * fVar13 + fVar7 * fVar7 + fVar10 * fVar10;
  fVar2 = fVar4;
  fVar6 = fVar4;
  if (SQRT(fVar8) != 0.0) {
    fVar4 = 1.0 / SQRT(fVar8);
    fVar4 = -(fVar8 * fVar4 * fVar4 - 1.0) * fVar4 * 0.5 + fVar4;
    fVar4 = -(fVar8 * fVar4 * fVar4 - 1.0) * fVar4 * 0.5 + fVar4;
    fVar4 = -(fVar8 * fVar4 * fVar4 - 1.0) * fVar4 * 0.5 + fVar4;
    fVar2 = fVar7 * fVar4;
    fVar6 = fVar10 * fVar4;
    fVar4 = fVar13 * fVar4;
  }
  param_1[4] = fVar2;
  param_1[5] = fVar6;
  param_1[6] = fVar4;
  param_1[0xb] = 0.0;
  param_1[8] = fVar3 * fVar4 - fVar5 * fVar6;
  param_1[9] = fVar5 * fVar2 - fVar1 * fVar4;
  param_1[10] = fVar1 * fVar6 - fVar3 * fVar2;
  return;
}



//==== 00036810  ns=camera::camera10  size=0x214
// sig: undefined InitCamera_10(void)
// callers(0): 
// callees(1): 00036230 camera::camera10::Cam10_00036230

void camera::camera10::InitCamera_10(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  short sVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  Cuboid *pCVar11;
  float fVar12;
  float fVar13;
  int iVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  
  auVar15 = ZEXT416(0xffffffff);
  auVar15 = auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60;
  iVar6 = *(int *)(param_1 + 0x70);
  auVar16 = vectorShiftLeftIntegerWord(auVar15,auVar15);
  *(MobyInstance **)(iVar6 + 0x40) = g_heroMobyPtr;
  *(undefined4 *)(iVar6 + 0x44) = 0x3fc00000;
  puVar7 = *(undefined4 **)(param_1 + 0x70);
  puVar7[0x16] = DAT_0071d674;
  puVar7[0x14] = DAT_0071d674;
  uVar8 = DAT_0071d670;
  puVar7[4] = 0x3ca3d70a;
  puVar7[0x18] = uVar8;
  puVar7[5] = 0x3e333333;
  fVar9 = 0.0;
  puVar7[6] = 0;
  puVar7[3] = 0;
  puVar7[2] = 0;
  puVar7[1] = 0;
  *puVar7 = 0;
  pCVar11 = Cuboids;
  fVar1 = g_heroPosition.z;
  iVar14 = ImportCameras;
  auVar15 = loadVectorLeftIndexed(4,0x367fc);
  auVar17 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
  auVar15 = auVar15 >> 0x60 & (undefined1  [16])0xffffffff;
  iVar6 = *(int *)(param_1 + 0x70);
  auVar15 = vectorMultiplyAddFloatingPoint
                      (auVar17,auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60,auVar16
                      );
  auVar15 = vectorConvertToSignedFixedPointWordSaturate(auVar15,0);
  auVar15 = auVar15 >> 0x60 & (undefined1  [16])0xffffffff;
  uVar8 = storeVectorElementWordIndexed
                    (auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60,0x20,
                     ZEXT48(puVar7));
  *(undefined4 *)((uint)(puVar7 + 8) & 0xfffffffc) = uVar8;
  *(undefined2 *)(puVar7 + 0x37) = 0;
  sVar5 = *(short *)(param_1 + 0x84);
  *(float *)(iVar6 + 0x10c) = fVar1;
  fVar13 = GameCamera.orientMtx.forward.z;
  fVar12 = GameCamera.orientMtx.forward.x;
  pCVar11 = pCVar11 + *(int *)(*(int *)(iVar14 + (int)((longlong)sVar5 << 5) + 0x1c) + 0xc);
  fVar1 = (pCVar11->matrix).v0.y;
  fVar2 = (pCVar11->matrix).v0.x;
  fVar3 = (pCVar11->matrix).v0.z;
  fVar10 = fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1;
  if (SQRT(fVar10) == 0.0) {
    fVar4 = (pCVar11->matrix).v0.w;
    fVar1 = fVar9;
    fVar2 = fVar9;
  }
  else {
    fVar9 = 1.0 / SQRT(fVar10);
    fVar9 = -(fVar10 * fVar9 * fVar9 - 1.0) * fVar9 * 0.5 + fVar9;
    fVar4 = (pCVar11->matrix).v0.w;
    fVar9 = -(fVar10 * fVar9 * fVar9 - 1.0) * fVar9 * 0.5 + fVar9;
    fVar9 = -(fVar10 * fVar9 * fVar9 - 1.0) * fVar9 * 0.5 + fVar9;
    fVar2 = fVar2 * fVar9;
    fVar1 = fVar1 * fVar9;
    fVar9 = fVar3 * fVar9;
  }
  fVar3 = GameCamera.orientMtx.forward.y * fVar1;
  *(float *)(iVar6 + 0xec) = fVar4;
  fVar10 = fVar13 * fVar9 + fVar12 * fVar2 + fVar3;
  fVar3 = -fVar2;
  if (0.0 - fVar10 < 0.0) {
    fVar3 = fVar2;
  }
  fVar2 = -fVar1;
  if (0.0 - fVar10 < 0.0) {
    fVar2 = fVar1;
  }
  fVar1 = -fVar9;
  if (0.0 - fVar10 < 0.0) {
    fVar1 = fVar9;
  }
  *(float *)(iVar6 + 0xe0) = fVar3;
  *(float *)(iVar6 + 0xe4) = fVar2;
  *(float *)(iVar6 + 0xe8) = fVar1;
  Cam10_00036230(param_1);
  *(undefined2 *)(param_1 + 0x7e) = 0;
  return;
}



//==== 00036a40  ns=camera::camera10  size=0x3cc
// sig: undefined Cam10_00036a40(void)
// callers(1): 00037638 camera::camera10::UpdateCamera_10
// callees(1): 000501e8 camera::Cam_InterpValues

void camera::camera10::Cam10_00036a40(int param_1)

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
  int iVar12;
  int iVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  float *speed;
  double dVar25;
  double dVar26;
  float fVar27;
  
  uVar24 = GameCamera.field17_0x1b4._4_4_;
  uVar23 = GameCamera.field17_0x1b4._0_4_;
  fVar22 = GameCamera.field16_0x1b0;
  iVar12 = *(int *)(param_1 + 0x70);
  fVar27 = *(float *)(iVar12 + 0xe4);
  fVar1 = *(float *)(iVar12 + 0xe0);
  fVar2 = *(float *)(iVar12 + 0xe8);
  fVar3 = *(float *)(iVar12 + 0x58);
  fVar4 = 0.0;
  fVar5 = *(float *)(iVar12 + 0x60);
  iVar13 = *(int *)(ImportCameras + (int)((longlong)*(short *)(param_1 + 0x84) << 5) + 0x1c);
  fVar20 = SQRT(fVar2 * fVar2 + fVar1 * fVar1 + fVar27 * fVar27);
  iVar14 = *(int *)(iVar13 + 0x20);
  fVar6 = MobyInstance[iVar14].pos.x;
  fVar7 = MobyInstance[iVar14].pos.y;
  fVar8 = MobyInstance[iVar14].pos.z;
  iVar13 = *(int *)(iVar13 + 0xc);
  fVar16 = g_heroPosition.y + fVar7;
  fVar15 = g_heroPosition.x + fVar6;
  fVar9 = Cuboids[iVar13].matrix.v1.y;
  fVar19 = -1.0 / fVar20;
  fVar10 = Cuboids[iVar13].matrix.v1.x;
  fVar11 = Cuboids[iVar13].matrix.v1.z;
  fVar21 = fVar11 * fVar11 + fVar10 * fVar10 + fVar9 * fVar9;
  fVar9 = fVar4;
  if (0.0 - fVar20 < 0.0) {
    fVar9 = fVar27 * fVar19;
  }
  fVar18 = fVar4;
  if (0.0 - fVar20 < 0.0) {
    fVar18 = fVar1 * fVar19;
  }
  fVar17 = fVar4;
  if (0.0 - fVar20 < 0.0) {
    fVar17 = fVar2 * fVar19;
  }
  if (fVar20 - 0.0 < 0.0) {
    fVar9 = fVar27 * fVar19;
  }
  if (fVar20 - 0.0 < 0.0) {
    fVar17 = fVar2 * fVar19;
  }
  if (fVar20 - 0.0 < 0.0) {
    fVar18 = fVar1 * fVar19;
  }
  fVar27 = g_heroPosition.z + fVar8;
  fVar2 = fVar17 * (*(float *)(param_1 + 0x38) - g_heroPosition.z) +
          fVar18 * (*(float *)(param_1 + 0x30) - g_heroPosition.x) +
          fVar9 * (*(float *)(param_1 + 0x34) - g_heroPosition.y);
  fVar1 = (*(float *)(param_1 + 0x38) - fVar8) * fVar17 +
          (*(float *)(param_1 + 0x30) - fVar6) * fVar18 +
          (*(float *)(param_1 + 0x34) - fVar7) * fVar9;
  if (fVar2 - fVar1 < 0.0) {
    fVar7 = g_heroPosition.y;
  }
  if (fVar2 - fVar1 < 0.0) {
    fVar6 = g_heroPosition.x;
  }
  if (fVar2 - fVar1 < 0.0) {
    fVar8 = g_heroPosition.z;
  }
  fVar2 = fVar4;
  fVar1 = fVar4;
  if (SQRT(fVar21) != 0.0) {
    fVar1 = 1.0 / SQRT(fVar21);
    fVar1 = -(fVar21 * fVar1 * fVar1 - 1.0) * fVar1 * 0.5 + fVar1;
    fVar1 = -(fVar21 * fVar1 * fVar1 - 1.0) * fVar1 * 0.5 + fVar1;
    fVar1 = -(fVar21 * fVar1 * fVar1 - 1.0) * fVar1 * 0.5 + fVar1;
    fVar4 = fVar10 * fVar1;
    fVar2 = Cuboids[iVar13].matrix.v1.y * fVar1;
    fVar1 = fVar11 * fVar1;
  }
  speed = (float *)&DAT_00036a24;
  fVar1 = ABS(-(fVar27 * 0.5 - g_heroPosition.z) * fVar1 +
              -(fVar15 * 0.5 - g_heroPosition.x) * fVar4 +
              -(fVar16 * 0.5 - g_heroPosition.y) * fVar2) * 0.9063078 * 2.3662016;
  *(float *)(iVar12 + 0x50) = fVar1;
  if (fVar1 < fVar3) {
    *(float *)(iVar12 + 0x50) = fVar3;
    fVar1 = fVar3;
  }
  fVar1 = fVar1 + fVar17 * -(fVar27 * 0.5 - fVar8) +
                  fVar18 * -(fVar15 * 0.5 - fVar6) + fVar9 * -(fVar16 * 0.5 - fVar7);
  dVar26 = (double)((float)uVar23 * fVar5 + fVar16 * 0.5 + fVar1 * fVar9);
  dVar25 = (double)((float)uVar24 * fVar5 + fVar27 * 0.5 + fVar1 * fVar17);
  fVar27 = Cam_InterpValues(*(float *)(param_1 + 0x30),
                            fVar22 * fVar5 + fVar15 * 0.5 + fVar1 * fVar18,*(float *)(iVar12 + 0x10)
                            ,*(float *)(iVar12 + 0x14),*(float *)(iVar12 + 0x18),
                            (float *)&DAT_00036a24);
  *(float *)(param_1 + 0x30) = fVar27;
  fVar27 = Cam_InterpValues(*(float *)(param_1 + 0x34),(float)dVar26,*(float *)(iVar12 + 0x10),
                            *(float *)(iVar12 + 0x14),*(float *)(iVar12 + 0x18),speed);
  *(float *)(param_1 + 0x34) = fVar27;
  fVar27 = Cam_InterpValues(*(float *)(param_1 + 0x38),(float)dVar25,*(float *)(iVar12 + 0x10),
                            *(float *)(iVar12 + 0x14),*(float *)(iVar12 + 0x18),speed);
  *(float *)(param_1 + 0x38) = fVar27;
  return;
}



//==== 00036e18  ns=camera::camera10  size=0x3b4
// sig: undefined Cam10_00036e18(void)
// callers(1): 00037638 camera::camera10::UpdateCamera_10
// callees(3): 000501e8 camera::Cam_InterpValues; 00057820 collproc::CollLine; 00059e20 collproc::CollSphere

void camera::camera10::Cam10_00036e18(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  int iVar13;
  CollOutput *speed;
  double dVar14;
  double dVar15;
  double dVar16;
  float fVar17;
  undefined1 local_b0 [4];
  float local_ac;
  float local_a8;
  undefined1 local_a0 [24];
  
  iVar4 = *(int *)(param_1 + 0x70);
  fVar17 = *(float *)(iVar4 + 0xe4);
  fVar2 = *(float *)(iVar4 + 0xe0);
  fVar3 = *(float *)(iVar4 + 0xe8);
  fVar1 = SQRT(DAT_00969f78 * DAT_00969f78 +
               hero::g_heroGravityDir * hero::g_heroGravityDir + DAT_00969f74 * DAT_00969f74);
  fVar8 = 0.0;
  fVar5 = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar17 * fVar17);
  fVar7 = -*(float *)(iVar4 + 0x60) / fVar1;
  fVar6 = SQRT(DAT_00969f78 * DAT_00969f78 +
               hero::g_heroGravityDir * hero::g_heroGravityDir + DAT_00969f74 * DAT_00969f74);
  fVar12 = -*(float *)(iVar4 + 0x50) / fVar5;
  fVar9 = fVar8;
  if (0.0 - fVar1 < 0.0) {
    fVar9 = DAT_00969f78 * fVar7;
  }
  fVar10 = fVar8;
  if (0.0 - fVar1 < 0.0) {
    fVar10 = DAT_00969f74 * fVar7;
  }
  fVar11 = fVar8;
  if (0.0 - fVar1 < 0.0) {
    fVar11 = hero::g_heroGravityDir * fVar7;
  }
  if (fVar1 - 0.0 < 0.0) {
    fVar11 = hero::g_heroGravityDir * fVar7;
  }
  if (fVar1 - 0.0 < 0.0) {
    fVar9 = DAT_00969f78 * fVar7;
  }
  if (fVar1 - 0.0 < 0.0) {
    fVar10 = DAT_00969f74 * fVar7;
  }
  local_a8 = fVar8;
  if (0.0 - fVar5 < 0.0) {
    local_a8 = fVar3 * fVar12;
  }
  local_ac = fVar8;
  if (0.0 - fVar5 < 0.0) {
    local_ac = fVar17 * fVar12;
  }
  fVar1 = fVar8;
  if (0.0 - fVar5 < 0.0) {
    fVar1 = fVar2 * fVar12;
  }
  if (fVar5 - 0.0 < 0.0) {
    local_a8 = fVar3 * fVar12;
  }
  if (fVar5 - 0.0 < 0.0) {
    local_ac = fVar17 * fVar12;
  }
  if (fVar5 - 0.0 < 0.0) {
    fVar1 = fVar2 * fVar12;
  }
  local_a8 = *(float *)(iVar4 + 0x10c) + fVar9 + local_a8;
  local_ac = g_heroPosition.y + fVar10 + local_ac;
  fVar1 = g_heroPosition.x + fVar11 + fVar1;
  fVar2 = -*(float *)(iVar4 + 0x44) / fVar6;
  fVar17 = fVar8;
  if (0.0 - fVar6 < 0.0) {
    fVar17 = DAT_00969f78 * fVar2;
  }
  fVar3 = fVar8;
  if (0.0 - fVar6 < 0.0) {
    fVar3 = DAT_00969f74 * fVar2;
  }
  if (0.0 - fVar6 < 0.0) {
    fVar8 = hero::g_heroGravityDir * fVar2;
  }
  if (fVar6 - 0.0 < 0.0) {
    fVar17 = DAT_00969f78 * fVar2;
  }
  if (fVar6 - 0.0 < 0.0) {
    fVar3 = DAT_00969f74 * fVar2;
  }
  if (fVar6 - 0.0 < 0.0) {
    fVar8 = hero::g_heroGravityDir * fVar2;
  }
  dVar16 = (double)(*(float *)(iVar4 + 0x10c) + fVar17);
  dVar15 = (double)(g_heroPosition.y + fVar3);
  dVar14 = (double)(g_heroPosition.x + fVar8);
  if (((*(short *)(iVar4 + 0xdc) == 0) || (*(short *)(iVar4 + 0xdc) == 3)) &&
     (iVar13 = collproc::CollLine(iVar4 + 0xa0,local_b0,CAMERA_COLL_FLAGS,0,0), iVar13 != 0)) {
    fVar1 = (float)((double)(float)((double)CollOutput.ip.x - dVar14) * 0.9900000095367432 + dVar14)
    ;
    local_ac = (float)((double)(float)((double)CollOutput.ip.y - dVar15) * 0.9900000095367432 +
                      dVar15);
    local_a8 = (float)((double)(float)((double)CollOutput.ip.z - dVar16) * 0.9900000095367432 +
                      dVar16);
  }
  iVar13 = collproc::CollSphere
                     ((double)DAT_0071d678,local_a0,&DAT_00720000,CAMERA_COLL_SPHERE_FLAGS,
                      g_heroMobyPtr);
  if (iVar13 == 0) {
    speed = (CollOutput *)0x0;
  }
  else {
    speed = &CollOutput;
    local_ac = CollOutput.push.y;
    local_a8 = CollOutput.push.z;
    fVar1 = CollOutput.push.x;
  }
  fVar17 = Cam_InterpValues(*(float *)(param_1 + 0x30),fVar1,*(float *)(iVar4 + 0x10),
                            *(float *)(iVar4 + 0x14),*(float *)(iVar4 + 0x18),(float *)speed);
  *(float *)(param_1 + 0x30) = fVar17;
  fVar17 = Cam_InterpValues(*(float *)(param_1 + 0x34),local_ac,*(float *)(iVar4 + 0x10),
                            *(float *)(iVar4 + 0x14),*(float *)(iVar4 + 0x18),(float *)speed);
  *(float *)(param_1 + 0x34) = fVar17;
  fVar17 = Cam_InterpValues(*(float *)(param_1 + 0x38),local_a8,*(float *)(iVar4 + 0x10),
                            *(float *)(iVar4 + 0x14),*(float *)(iVar4 + 0x18),(float *)speed);
  *(float *)(param_1 + 0x38) = fVar17;
  return;
}



//==== 000371e0  ns=camera::camera10  size=0x340
// sig: undefined Cam10_000371e0(void)
// callers(1): 00037638 camera::camera10::UpdateCamera_10
// callees(3): 000fecf0 mobyutil::MB_CosineInterpolate; 001115c8 mobyutil::MB_QuatBetweenVecs; 004fff60 fastfunc::FastDecTimerS32

void camera::camera10::Cam10_000371e0
               (float *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  double dVar13;
  undefined1 local_50 [40];
  
  fVar5 = param_1[0x1c];
  dVar13 = 0.0;
  fastfunc::FastDecTimerS32((int)fVar5 + 0x20);
  dVar12 = 1.0;
  mobyutil::MB_CosineInterpolate
            (dVar13,0x3ff0000000000000,
             (double)((float)(longlong)((int)(animationSpeed * 120.5) - *(int *)((int)fVar5 + 0x20))
                     * (float)(1.0 / (double)(longlong)(animationSpeed * 120.5))));
  mobyutil::MB_QuatBetweenVecs(param_1,param_1 + 0x10,local_50,param_4,1);
  fVar5 = param_1[1];
  fVar2 = *param_1;
  fVar3 = param_1[2];
  dVar6 = (double)(float)GameCamera.field17_0x1b4._0_4_;
  dVar7 = (double)(float)GameCamera.field17_0x1b4._4_4_;
  dVar8 = (double)GameCamera.field16_0x1b0;
  dVar9 = (double)(fVar3 * fVar3 + fVar2 * fVar2 + fVar5 * fVar5);
  if ((double)(float)SQRT(dVar9) == dVar13) {
    param_1[0x10] = *param_1;
    param_1[0x11] = param_1[1];
    fVar4 = param_1[3];
    param_1[0x12] = param_1[2];
    dVar9 = dVar13;
    dVar10 = dVar13;
    dVar11 = dVar13;
  }
  else {
    dVar10 = 1.0 / SQRT(dVar9);
    dVar10 = (double)(float)(-(double)(float)((double)(float)(dVar9 * dVar10) * dVar10 - dVar12) *
                             (double)(float)(dVar10 * 0.5) + dVar10);
    fVar4 = param_1[3];
    dVar10 = (double)(float)(-(double)(float)((double)(float)(dVar9 * dVar10) * dVar10 - dVar12) *
                             (double)(float)(dVar10 * 0.5) + dVar10);
    fVar1 = (float)(-(double)(float)((double)(float)(dVar9 * dVar10) * dVar10 - dVar12) *
                    (double)(float)(dVar10 * 0.5) + dVar10);
    dVar11 = (double)(fVar2 * fVar1);
    dVar10 = (double)(fVar5 * fVar1);
    dVar9 = (double)(fVar3 * fVar1);
  }
  param_1[0x13] = fVar4;
  param_1[3] = fVar4;
  param_1[0x10] = (float)dVar11;
  param_1[0x11] = (float)dVar10;
  param_1[0x12] = (float)dVar9;
  fVar5 = (float)(dVar8 * dVar10 - (double)(float)(dVar6 * dVar11));
  fVar2 = (float)(dVar7 * dVar11 - (double)(float)(dVar8 * dVar9));
  fVar3 = (float)(dVar6 * dVar9 - (double)(float)(dVar7 * dVar10));
  *param_1 = (float)dVar11;
  param_1[1] = (float)dVar10;
  param_1[2] = (float)dVar9;
  param_1[7] = 0.0;
  dVar8 = (double)(fVar5 * fVar5 + fVar3 * fVar3 + fVar2 * fVar2);
  dVar6 = dVar13;
  dVar7 = dVar13;
  if ((double)(float)SQRT(dVar8) != dVar13) {
    dVar6 = 1.0 / SQRT(dVar8);
    dVar6 = (double)(float)(-(double)(float)((double)(float)(dVar8 * dVar6) * dVar6 - dVar12) *
                            (double)(float)(dVar6 * 0.5) + dVar6);
    dVar6 = (double)(float)(-(double)(float)((double)(float)(dVar8 * dVar6) * dVar6 - dVar12) *
                            (double)(float)(dVar6 * 0.5) + dVar6);
    fVar1 = (float)(-(double)(float)((double)(float)(dVar8 * dVar6) * dVar6 - dVar12) *
                    (double)(float)(dVar6 * 0.5) + dVar6);
    dVar6 = (double)(fVar3 * fVar1);
    dVar13 = (double)(fVar2 * fVar1);
    dVar7 = (double)(fVar5 * fVar1);
  }
  param_1[4] = (float)dVar6;
  param_1[5] = (float)dVar13;
  param_1[6] = (float)dVar7;
  param_1[0xb] = 0.0;
  param_1[8] = (float)(dVar10 * dVar7 - (double)(float)(dVar9 * dVar13));
  param_1[9] = (float)(dVar9 * dVar6 - (double)(float)(dVar11 * dVar7));
  param_1[10] = (float)(dVar11 * dVar13 - (double)(float)(dVar10 * dVar6));
  return;
}



//==== 00037520  ns=camera::camera10  size=0x118
// sig: undefined ActivateCamera_10(void)
// callers(0): 
// callees(2): 00104e44 mobyutil::PointInsideComplexPoly; 00110b70 mobyutil::MB_IsPntInCuboid

undefined8 camera::camera10::ActivateCamera_10(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(ImportCameras + (int)((longlong)*(short *)(param_1 + 0x84) << 5) + 0x1c);
  if ((*(short *)(iVar1 + 0x28) == 0) && (0x7f < MobyInstance[*(int *)(iVar1 + 0x20)].state)) {
    return 0;
  }
  if (((param_2 == 0) || (*(short *)(param_2 + 0x7e) != 0)) ||
     (*(byte *)(param_2 + 0x7c) < *(byte *)(param_1 + 0x7c))) {
    if (*(int *)(iVar1 + 0x14) < 0) {
      if (*(int *)(iVar1 + 0xc) < 0) {
        return 0;
      }
      iVar1 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)*(int *)(iVar1 + 0xc));
    }
    else {
      iVar1 = mobyutil::PointInsideComplexPoly
                        (&g_heroPosition,(Vec4 *)Splines[*(int *)(iVar1 + 0x14)]->points,
                         Splines[*(int *)(iVar1 + 0x14)]->cnt);
    }
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}



//==== 00037638  ns=camera::camera10  size=0xa8
// sig: undefined UpdateCamera_10(void)
// callers(0): 
// callees(6): 0002bcf8 stub::STUB_0002bcf8; 00035560 camera::camera10::Cam10_00035560; 00035d68 camera::camera10::Cam10_00035d68; 00036a40 camera::camera10::Cam10_00036a40; 00036e18 camera::camera10::Cam10_00036e18; 000371e0 camera::camera10::Cam10_000371e0

void camera::camera10::UpdateCamera_10(int param_1)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = (ulonglong)*(uint *)(param_1 + 0x70) + 0x70;
  iVar1 = *(int *)(ImportCameras + (int)((longlong)*(short *)(param_1 + 0x84) << 5) + 0x1c);
  stub::STUB_0002bcf8(param_1,lVar2);
  Cam10_00035560(param_1,lVar2);
  if (*(short *)(iVar1 + 0x28) == 0) {
    Cam10_00036a40(param_1);
  }
  else {
    Cam10_00035d68(param_1);
    Cam10_00036e18(param_1);
  }
  Cam10_000371e0(param_1);
  return;
}



//==== 000376e0  ns=camera::camera10  size=0x130
// sig: undefined ExitCamera_10(void)
// callers(0): 
// callees(2): 00104e44 mobyutil::PointInsideComplexPoly; 00110b70 mobyutil::MB_IsPntInCuboid

void camera::camera10::ExitCamera_10(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(ImportCameras + (int)((longlong)*(short *)(param_1 + 0x84) << 5) + 0x1c);
  if (*(int *)(iVar2 + 0x14) < 0) {
    iVar1 = 0;
    if (-1 < *(int *)(iVar2 + 0xc)) {
      iVar1 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)*(int *)(iVar2 + 0xc));
    }
  }
  else {
    iVar1 = mobyutil::PointInsideComplexPoly
                      (&g_heroPosition,(Vec4 *)Splines[*(int *)(iVar2 + 0x14)]->points,
                       Splines[*(int *)(iVar2 + 0x14)]->cnt);
  }
  if (iVar1 == 0) {
    *(undefined2 *)(param_1 + 0x7e) = 3;
  }
  else if (*(short *)(iVar2 + 0x28) == 0) {
    if (MobyInstance[*(int *)(iVar2 + 0x20)].state < 0x80) {
      if ((-1 < *(int *)(iVar2 + 0xc)) &&
         (iVar2 = mobyutil::MB_IsPntInCuboid
                            ((Vec4 *)&MobyInstance[*(int *)(iVar2 + 0x20)].pos,
                             (longlong)*(int *)(iVar2 + 0xc)), iVar2 == 0)) {
        *(undefined2 *)(param_1 + 0x7e) = 3;
      }
    }
    else {
      *(undefined2 *)(param_1 + 0x7e) = 3;
    }
  }
  return;
}



//==== 00037818  ns=Global  size=0x7c
// sig: undefined SECTION_HEADER_CAMERA11(void)
// callers(0): 
// callees(0): 

void SECTION_HEADER_CAMERA11(void)

{
  undefined8 in_r0;
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  auVar1 = ZEXT416(0xffffffff);
  auVar1 = auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60;
  auVar2 = vectorShiftLeftIntegerWord(auVar1,auVar1);
  auVar1 = loadVectorLeftIndexed(in_r0,0x37810);
  auVar4 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
  auVar1 = auVar1 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar2 = vectorMultiplyAddFloatingPoint
                     (auVar4,auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60,auVar2);
  auVar1 = ZEXT416(0xffffffff);
  auVar1 = auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60;
  DAT_0071d6d8 = 0x10000;
  auVar3 = vectorShiftLeftIntegerWord(auVar1,auVar1);
  auVar1 = vectorConvertToSignedFixedPointWordSaturate(auVar2,0);
  auVar1 = auVar1 >> 0x60 & (undefined1  [16])0xffffffff;
  DAT_0092e48c = storeVectorElementWordIndexed
                           (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60,
                            0xffffffffffffe48c,0x930000);
  auVar1 = loadVectorLeftIndexed(4,0x37810);
  auVar1 = auVar1 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar1 = vectorMultiplyAddFloatingPoint
                     (auVar4,auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60,auVar3);
  auVar1 = vectorConvertToSignedFixedPointWordSaturate(auVar1,0);
  auVar1 = auVar1 >> 0x60 & (undefined1  [16])0xffffffff;
  DAT_0092e490 = storeVectorElementWordIndexed
                           (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60,
                            0xffffffffffffe490,0x930000);
  return;
}



//==== 000378a8  ns=camera::camera11  size=0x33c
// sig: undefined Cam11_000378a8(void)
// callers(1): 00037be4 camera::camera11::InitCamera_11
// callees(1): 00057820 collproc::CollLine

void camera::camera11::Cam11_000378a8(float *param_1)

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
  int iVar18;
  undefined1 local_20 [16];
  
  fVar17 = g_heroPosition.w;
  fVar13 = param_1[0x1c];
  fVar1 = *(float *)((int)fVar13 + 0x10);
  fVar14 = *(float *)((int)fVar13 + 0x90) * fVar1 + g_heroPosition.x;
  fVar16 = *(float *)((int)fVar13 + 0x94) * fVar1 + g_heroPosition.y;
  fVar15 = *(float *)((int)fVar13 + 0x98) * fVar1 + g_heroPosition.z;
  fVar1 = (g_heroMobyPtr->transform).v0.x;
  fVar2 = *(float *)((int)fVar13 + 0x20);
  fVar3 = (g_heroMobyPtr->transform).v0.y;
  fVar4 = (g_heroMobyPtr->transform).v0.z;
  fVar5 = (g_heroMobyPtr->transform).v2.x;
  fVar6 = *(float *)((int)fVar13 + 0x28);
  fVar7 = (g_heroMobyPtr->transform).v2.y;
  fVar8 = (g_heroMobyPtr->transform).v2.z;
  fVar9 = (g_heroMobyPtr->transform).v1.x;
  fVar10 = *(float *)((int)fVar13 + 0x24);
  fVar11 = (g_heroMobyPtr->transform).v1.y;
  fVar12 = (g_heroMobyPtr->transform).v1.z;
  param_1[0xf] = g_heroPosition.w;
  iVar18 = CAMERA_COLL_FLAGS;
  param_1[0xc] = fVar9 * fVar10 + fVar5 * fVar6 + fVar1 * fVar2 + fVar14;
  param_1[0xd] = fVar11 * fVar10 + fVar7 * fVar6 + fVar3 * fVar2 + fVar16;
  param_1[0xe] = fVar12 * fVar10 + fVar8 * fVar6 + fVar4 * fVar2 + fVar15;
  iVar18 = collproc::CollLine(local_20,param_1 + 0xc,iVar18,0,0);
  fVar1 = param_1[0xc];
  fVar2 = param_1[0xe];
  fVar3 = param_1[0xd];
  if (iVar18 != 0) {
    fVar3 = CollOutput.ip.y - fVar16;
    fVar1 = CollOutput.ip.x - fVar14;
    fVar2 = CollOutput.ip.z - fVar15;
    fVar4 = SQRT(fVar2 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3);
    if (fVar4 == 0.0) {
      param_1[0xc] = fVar14;
      param_1[0xd] = fVar16;
      param_1[0xe] = fVar15;
      param_1[0xf] = fVar17;
      fVar1 = fVar14;
      fVar2 = fVar15;
      fVar3 = fVar16;
    }
    else {
      param_1[0xf] = fVar17;
      fVar4 = (fVar4 - 0.5) / fVar4;
      fVar1 = fVar1 * fVar4 + fVar14;
      fVar3 = fVar3 * fVar4 + fVar16;
      fVar2 = fVar2 * fVar4 + fVar15;
      param_1[0xc] = fVar1;
      param_1[0xd] = fVar3;
      param_1[0xe] = fVar2;
    }
  }
  fVar16 = fVar16 - fVar3;
  fVar14 = fVar14 - fVar1;
  fVar15 = fVar15 - fVar2;
  fVar1 = 0.0;
  fVar5 = fVar15 * fVar15 + fVar14 * fVar14 + fVar16 * fVar16;
  fVar4 = fVar1;
  fVar3 = fVar1;
  fVar2 = fVar1;
  if (SQRT(fVar5) != 0.0) {
    fVar4 = 1.0 / SQRT(fVar5);
    fVar4 = -(fVar5 * fVar4 * fVar4 - 1.0) * fVar4 * 0.5 + fVar4;
    fVar4 = -(fVar5 * fVar4 * fVar4 - 1.0) * fVar4 * 0.5 + fVar4;
    fVar4 = -(fVar5 * fVar4 * fVar4 - 1.0) * fVar4 * 0.5 + fVar4;
    fVar3 = fVar14 * fVar4;
    fVar2 = fVar16 * fVar4;
    fVar4 = fVar15 * fVar4;
  }
  param_1[0x10] = fVar3;
  param_1[0x11] = fVar2;
  param_1[0x12] = fVar4;
  param_1[0x13] = fVar17;
  *param_1 = fVar3;
  param_1[1] = fVar2;
  param_1[2] = fVar4;
  param_1[3] = fVar17;
  fVar8 = *(float *)((int)fVar13 + 0x98) * fVar3 - *(float *)((int)fVar13 + 0x90) * fVar4;
  fVar9 = *(float *)((int)fVar13 + 0x94) * fVar4 - *(float *)((int)fVar13 + 0x98) * fVar2;
  fVar7 = *(float *)((int)fVar13 + 0x90) * fVar2 - *(float *)((int)fVar13 + 0x94) * fVar3;
  param_1[7] = 0.0;
  fVar10 = fVar7 * fVar7 + fVar9 * fVar9 + fVar8 * fVar8;
  fVar5 = fVar1;
  fVar6 = fVar1;
  if (SQRT(fVar10) != 0.0) {
    fVar6 = 1.0 / SQRT(fVar10);
    fVar6 = -(fVar10 * fVar6 * fVar6 - 1.0) * fVar6 * 0.5 + fVar6;
    fVar6 = -(fVar10 * fVar6 * fVar6 - 1.0) * fVar6 * 0.5 + fVar6;
    fVar6 = -(fVar10 * fVar6 * fVar6 - 1.0) * fVar6 * 0.5 + fVar6;
    fVar1 = fVar9 * fVar6;
    fVar5 = fVar8 * fVar6;
    fVar6 = fVar7 * fVar6;
  }
  param_1[4] = fVar1;
  param_1[5] = fVar5;
  param_1[6] = fVar6;
  param_1[0xb] = 0.0;
  param_1[8] = fVar2 * fVar6 - fVar4 * fVar5;
  param_1[9] = fVar4 * fVar1 - fVar3 * fVar6;
  param_1[10] = fVar3 * fVar5 - fVar2 * fVar1;
  return;
}



//==== 00037be4  ns=camera::camera11  size=0x160
// sig: undefined InitCamera_11(void)
// callers(0): 
// callees(1): 000378a8 camera::camera11::Cam11_000378a8

void camera::camera11::InitCamera_11(int param_1)

{
  float *pfVar1;
  int iVar2;
  float fVar3;
  undefined4 uVar4;
  
  pfVar1 = *(float **)(param_1 + 0x70);
  pfVar1[4] = DAT_0071d724;
  *pfVar1 = g_heroPosition.x;
  pfVar1[1] = g_heroPosition.y;
  pfVar1[2] = g_heroPosition.z;
  pfVar1[3] = g_heroPosition.w;
  iVar2 = *(int *)(param_1 + 0x70);
  fVar3 = -DAT_0071d6fc;
  *(undefined4 *)(iVar2 + 0x24) = 0;
  *(undefined4 *)(iVar2 + 0x28) = 0;
  *(float *)(iVar2 + 0x20) = fVar3;
  iVar2 = *(int *)(param_1 + 0x70);
  *(undefined4 *)(iVar2 + 0x40) = DAT_0071d708;
  uVar4 = DAT_0071d710;
  *(undefined4 *)(iVar2 + 0x48) = 0;
  *(undefined4 *)(iVar2 + 0x44) = uVar4;
  uVar4 = DAT_0071d70c;
  *(undefined4 *)(iVar2 + 0x3c) = 0;
  *(undefined4 *)(iVar2 + 0x50) = uVar4;
  *(undefined4 *)(iVar2 + 0x38) = 0;
  *(undefined4 *)(iVar2 + 0x34) = 0;
  *(undefined4 *)(iVar2 + 0x30) = 0;
  iVar2 = *(int *)(param_1 + 0x70);
  *(undefined4 *)(iVar2 + 100) = DAT_0071d714;
  uVar4 = DAT_0071d718;
  *(undefined4 *)(iVar2 + 0x6c) = 0;
  *(undefined4 *)(iVar2 + 0x68) = uVar4;
  *(undefined4 *)(iVar2 + 0x60) = 0;
  iVar2 = *(int *)(param_1 + 0x70);
  *(float *)(iVar2 + 0x90) = -hero::g_heroGravityDir;
  *(float *)(iVar2 + 0x94) = -DAT_00969f74;
  *(float *)(iVar2 + 0x98) = -DAT_00969f78;
  uVar4 = DAT_00969f7c;
  *(undefined4 *)(iVar2 + 0x70) = 0;
  *(undefined4 *)(iVar2 + 0x9c) = uVar4;
  *(undefined4 *)(iVar2 + 0x78) = DAT_0071d71c;
  uVar4 = DAT_0071d720;
  *(undefined4 *)(iVar2 + 0x80) = 0;
  *(undefined4 *)(iVar2 + 0x7c) = uVar4;
  *(undefined4 *)(iVar2 + 0x84) = 0x3e860a92;
  *(undefined4 *)(iVar2 + 0x88) = 0x410938a5;
  *(undefined4 *)(iVar2 + 0x74) = 0;
  Cam11_000378a8(param_1);
  *(undefined2 *)(param_1 + 0x7e) = 0;
  return;
}



//==== 00037d68  ns=camera::camera11  size=0x7e4
// sig: undefined Cam11_00037d68(void)
// callers(1): 00038560 camera::camera11::UpdateCamera_11
// callees(6): 000501e8 camera::Cam_InterpValues; 00050288 camera::Cam_InterpAngles; 00057820 collproc::CollLine; 001113e0 mobyutil::MB_RotateQuatAxisAngle; 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots

void camera::camera11::Cam11_00037d68(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float gain;
  float fVar5;
  uint uVar6;
  float *outQuat;
  int iVar7;
  MobyInstance *speed;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  float fVar18;
  float fVar19;
  float local_e0 [9];
  float local_bc;
  undefined4 local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  undefined4 local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  
  fVar5 = param_1[0x1c];
  dVar16 = 0.0;
  local_e0[0] = -DAT_0071d6fc;
  outQuat = (float *)((int)fVar5 + 0x20);
  local_e0[1] = 0.0;
  local_e0[2] = 0.0;
  local_e0[3] = 0.0;
  local_e0[4] = 0.0;
  dVar10 = 1.0;
  local_e0[5] = 1.0;
  local_e0[6] = 0.0;
  local_e0[7] = 0.0;
  if ((uint)ABS(ANALOG_STICKS.y) < 0x3d4cccce) {
    *(float *)((int)fVar5 + 0x20) = local_e0[0];
    *(undefined4 *)((int)fVar5 + 0x24) = 0;
    *(undefined4 *)((int)fVar5 + 0x28) = 0;
    *(undefined4 *)((int)fVar5 + 0x2c) = 0;
    dVar8 = dVar16;
  }
  else {
    fVar18 = DAT_0071d734;
    if ((int)ANALOG_STICKS.y < 0) {
      fVar18 = DAT_0071d730;
    }
    mobyutil::MB_RotateQuatAxisAngle(-(ANALOG_STICKS.y * fVar18),outQuat,local_e0);
    dVar8 = 0.03498000279068947;
  }
  local_e0[8] = (float)dVar16;
  local_bc = (float)dVar16;
  local_b8 = 0x3f800000;
  local_b4 = (float)dVar16;
  if ((uint)ABS(ANALOG_STICKS.x) < 0x3d4cccce) {
    uVar6 = *(uint *)((int)fVar5 + 0xa0);
    iVar7 = ((uint)((int)uVar6 >> 0x1f) >> 1 ^ uVar6) - ((int)uVar6 >> 0x1f);
    if (uVar6 != 0) {
      dVar9 = 0.11659999936819077;
      if (dVar16 - dVar8 < 0.0) {
        dVar9 = dVar8;
      }
      if (dVar8 - dVar16 < 0.0) {
        dVar9 = dVar8;
      }
      dVar8 = dVar9;
      if (iVar7 < 1) {
        dVar9 = -(double)DAT_0071d73c;
      }
      else {
        dVar9 = (double)DAT_0071d73c;
      }
      dVar9 = (double)fastfunc::FastDiffRots((double)*(float *)((int)fVar5 + 0xa0),dVar9);
      *(float *)((int)fVar5 + 0xa0) = (float)dVar9;
      if ((iVar7 < 1) || (dVar16 <= dVar9)) {
        if ((iVar7 < 0) && (dVar16 < dVar9)) {
          *(float *)((int)fVar5 + 0xa0) = (float)dVar16;
          dVar9 = dVar16;
        }
      }
      else {
        *(float *)((int)fVar5 + 0xa0) = (float)dVar16;
        dVar9 = dVar16;
      }
      mobyutil::MB_RotateQuatAxisAngle((float)dVar9,outQuat,outQuat);
    }
  }
  else {
    dVar9 = 0.11659999936819077;
    if (dVar16 - dVar8 < 0.0) {
      dVar9 = dVar8;
    }
    if (dVar8 - dVar16 < 0.0) {
      dVar9 = dVar8;
    }
    dVar8 = (double)fastfunc::FastWrapRot
                              (*(float *)((int)fVar5 + 0xa0),DAT_0071d738 * ANALOG_STICKS.x);
    mobyutil::MB_RotateQuatAxisAngle((float)dVar8,&local_a0,outQuat);
    fVar18 = *(float *)((int)fVar5 + 0x10);
    local_84 = g_heroPosition.w;
    local_90 = (g_heroMobyPtr->transform).v1.x * local_9c +
               (g_heroMobyPtr->transform).v2.x * local_98 +
               (g_heroMobyPtr->transform).v0.x * local_a0 + param_1[8] * fVar18 + g_heroPosition.x;
    local_8c = (g_heroMobyPtr->transform).v1.y * local_9c +
               (g_heroMobyPtr->transform).v2.y * local_98 +
               (g_heroMobyPtr->transform).v0.y * local_a0 + param_1[9] * fVar18 + g_heroPosition.y;
    local_88 = (g_heroMobyPtr->transform).v1.z * local_9c +
               (g_heroMobyPtr->transform).v2.z * local_98 +
               (g_heroMobyPtr->transform).v0.z * local_a0 + param_1[10] * fVar18 + g_heroPosition.z;
    iVar7 = collproc::CollLine(&local_90,param_1 + 0xc,CAMERA_COLL_FLAGS,0,0);
    if (iVar7 == 0) {
      *(float *)((int)fVar5 + 0xa0) = (float)dVar8;
      *(float *)((int)fVar5 + 0x20) = local_a0;
      *(float *)((int)fVar5 + 0x24) = local_9c;
      *(float *)((int)fVar5 + 0x28) = local_98;
      *(undefined4 *)((int)fVar5 + 0x2c) = local_94;
      dVar8 = dVar9;
    }
    else {
      mobyutil::MB_RotateQuatAxisAngle(*(float *)((int)fVar5 + 0xa0),outQuat,outQuat);
      dVar8 = dVar9;
    }
  }
  fVar18 = *(float *)((int)fVar5 + 0x10);
  dVar8 = (double)((float)((double)(float)GameCamera.field17_0x1b4._124_4_ + dVar8) * 8.576329);
  dVar15 = (double)(param_1[8] * fVar18 + g_heroPosition.x);
  dVar14 = (double)(param_1[9] * fVar18 + g_heroPosition.y);
  dVar13 = (double)(param_1[10] * fVar18 + g_heroPosition.z);
  dVar9 = (double)*(float *)((int)fVar5 + 0x20);
  fVar18 = (g_heroMobyPtr->transform).v0.x;
  fVar1 = (g_heroMobyPtr->transform).v2.x;
  fVar2 = *(float *)((int)fVar5 + 0x28);
  dVar17 = (double)g_heroPosition.w;
  if (dVar10 - dVar8 < 0.0) {
    dVar8 = dVar10;
  }
  fVar3 = (g_heroMobyPtr->transform).v1.x;
  fVar4 = *(float *)((int)fVar5 + 0x24);
  gain = *(float *)((int)fVar5 + 0x40);
  dVar12 = (double)((g_heroMobyPtr->transform).v1.y * fVar4 +
                   (g_heroMobyPtr->transform).v2.y * fVar2 +
                   (float)((double)(g_heroMobyPtr->transform).v0.y * dVar9 + dVar14));
  dVar11 = (double)((g_heroMobyPtr->transform).v1.z * fVar4 +
                   (g_heroMobyPtr->transform).v2.z * fVar2 +
                   (float)((double)(g_heroMobyPtr->transform).v0.z * dVar9 + dVar13));
  fVar19 = (float)((double)(float)((double)DAT_0071d708 - (double)DAT_0071d70c) * dVar8 +
                  (double)DAT_0071d70c);
  if (gain <= fVar19) {
    speed = g_heroMobyPtr;
    if (gain < fVar19) {
      speed = (MobyInstance *)&DAT_00720000;
      gain = gain + DAT_0071d704;
      *(float *)((int)fVar5 + 0x40) = gain;
      fVar19 = DAT_0071d708;
      if (DAT_0071d708 < gain) {
        *(float *)((int)fVar5 + 0x40) = DAT_0071d708;
        gain = fVar19;
      }
    }
  }
  else {
    gain = gain - DAT_0071d704;
    *(float *)((int)fVar5 + 0x40) = gain;
    fVar19 = DAT_0071d70c;
    speed = (MobyInstance *)&DAT_00720000;
    if (gain < DAT_0071d70c) {
      *(float *)((int)fVar5 + 0x40) = DAT_0071d70c;
      gain = fVar19;
    }
  }
  fVar18 = Cam_InterpValues(param_1[0xc],
                            fVar3 * fVar4 + fVar1 * fVar2 + (float)((double)fVar18 * dVar9 + dVar15)
                            ,gain,*(float *)((int)fVar5 + 0x44),*(float *)((int)fVar5 + 0x48),
                            (float *)speed);
  param_1[0xc] = fVar18;
  fVar18 = Cam_InterpValues(param_1[0xd],(float)dVar12,*(float *)((int)fVar5 + 0x40),
                            *(float *)((int)fVar5 + 0x44),*(float *)((int)fVar5 + 0x48),
                            (float *)speed);
  param_1[0xd] = fVar18;
  fVar19 = Cam_InterpValues(param_1[0xe],(float)dVar11,*(float *)((int)fVar5 + 0x40),
                            *(float *)((int)fVar5 + 0x44),*(float *)((int)fVar5 + 0x48),
                            (float *)speed);
  fVar18 = (float)(dVar14 - (double)param_1[0xd]);
  fVar1 = (float)(dVar15 - (double)param_1[0xc]);
  fVar2 = (float)(dVar13 - (double)fVar19);
  param_1[0xe] = fVar19;
  dVar14 = (double)(fVar2 * fVar2 + fVar1 * fVar1 + fVar18 * fVar18);
  dVar8 = dVar16;
  dVar9 = dVar16;
  dVar13 = dVar16;
  if ((double)(float)SQRT(dVar14) != dVar16) {
    dVar8 = 1.0 / SQRT(dVar14);
    dVar8 = (double)(float)(-(double)(float)((double)(float)(dVar14 * dVar8) * dVar8 - dVar10) *
                            (double)(float)(dVar8 * 0.5) + dVar8);
    dVar8 = (double)(float)(-(double)(float)((double)(float)(dVar14 * dVar8) * dVar8 - dVar10) *
                            (double)(float)(dVar8 * 0.5) + dVar8);
    fVar19 = (float)(-(double)(float)((double)(float)(dVar14 * dVar8) * dVar8 - dVar10) *
                     (double)(float)(dVar8 * 0.5) + dVar8);
    dVar13 = (double)(fVar1 * fVar19);
    dVar9 = (double)(fVar18 * fVar19);
    dVar8 = (double)(fVar2 * fVar19);
  }
  dVar15 = (double)(float)(dVar8 * (double)param_1[0x12] +
                          (double)(float)(dVar13 * (double)param_1[0x10] +
                                         (double)(float)(dVar9 * (double)param_1[0x11])));
  dVar14 = dVar15;
  if (dVar15 - dVar16 < 0.0) {
    dVar14 = ABS(dVar15);
  }
  dVar11 = (double)(float)(dVar10 - dVar14);
  if ((double)(float)(dVar10 - dVar14) - dVar16 < 0.0) {
    dVar11 = dVar16;
  }
  dVar12 = dVar10;
  if (dVar15 - dVar16 < 0.0) {
    dVar12 = -1.0;
  }
  dVar14 = (double)Cam_InterpAngles(dVar16,-(double)(float)(-(double)(((float)((double)(float)(
                                                  dVar14 * dVar14) * dVar14) * DAT_007358cc +
                                                  (float)((double)(float)(dVar14 * dVar14) *
                                                          (double)DAT_007358c8 +
                                                         (double)(float)(dVar14 * (double)
                                                  DAT_007358c4 + (double)DAT_007358c0))) *
                                                  (float)SQRT(dVar11) - 1.5707964) * dVar12 -
                                                  1.5707963705062866),(double)DAT_0071d714,
                                    (double)DAT_0071d718,dVar16,&DAT_00720000,&DAT_00720000,
                                    (int)fVar5 + 0x60);
  local_a4 = (float)dVar16;
  local_a8 = (float)((double)param_1[0x10] * dVar9 - (double)(float)((double)param_1[0x11] * dVar13)
                    );
  local_b0 = (float)((double)param_1[0x11] * dVar8 - (double)(float)((double)param_1[0x12] * dVar9))
  ;
  local_ac = (float)((double)param_1[0x12] * dVar13 - (double)(float)((double)param_1[0x10] * dVar8)
                    );
  mobyutil::MB_RotateQuatAxisAngle((float)dVar14,param_1 + 0x10,param_1 + 0x10);
  param_1[0x10] = (float)dVar13;
  param_1[0x11] = (float)dVar9;
  param_1[0x12] = (float)dVar8;
  param_1[0x13] = (float)dVar17;
  *param_1 = (float)dVar13;
  param_1[1] = (float)dVar9;
  param_1[2] = (float)dVar8;
  param_1[3] = (float)dVar17;
  fVar1 = *(float *)((int)fVar5 + 0x90);
  fVar18 = *(float *)((int)fVar5 + 0x98);
  fVar2 = *(float *)((int)fVar5 + 0x94);
  param_1[7] = (float)dVar16;
  fVar5 = (float)((double)fVar18 * dVar13 - (double)(float)((double)fVar1 * dVar8));
  fVar18 = (float)((double)fVar2 * dVar8 - (double)(float)((double)fVar18 * dVar9));
  fVar1 = (float)((double)fVar1 * dVar9 - (double)(float)((double)fVar2 * dVar13));
  dVar11 = (double)(fVar1 * fVar1 + fVar18 * fVar18 + fVar5 * fVar5);
  dVar14 = dVar16;
  dVar15 = dVar16;
  dVar17 = dVar16;
  if ((double)(float)SQRT(dVar11) != dVar16) {
    dVar14 = 1.0 / SQRT(dVar11);
    dVar14 = (double)(float)(-(double)(float)((double)(float)(dVar11 * dVar14) * dVar14 - dVar10) *
                             (double)(float)(dVar14 * 0.5) + dVar14);
    dVar14 = (double)(float)(-(double)(float)((double)(float)(dVar11 * dVar14) * dVar14 - dVar10) *
                             (double)(float)(dVar14 * 0.5) + dVar14);
    fVar2 = (float)(-(double)(float)((double)(float)(dVar11 * dVar14) * dVar14 - dVar10) *
                    (double)(float)(dVar14 * 0.5) + dVar14);
    dVar17 = (double)(fVar18 * fVar2);
    dVar15 = (double)(fVar5 * fVar2);
    dVar14 = (double)(fVar1 * fVar2);
  }
  param_1[4] = (float)dVar17;
  param_1[5] = (float)dVar15;
  param_1[6] = (float)dVar14;
  param_1[0xb] = (float)dVar16;
  param_1[8] = (float)(dVar9 * dVar14 - (double)(float)(dVar8 * dVar15));
  param_1[9] = (float)(dVar8 * dVar17 - (double)(float)(dVar13 * dVar14));
  param_1[10] = (float)(dVar13 * dVar15 - (double)(float)(dVar9 * dVar17));
  return;
}



//==== 0003854c  ns=camera::camera11  size=0x8
// sig: undefined ActivateCamera_11(void)
// callers(0): 
// callees(0): 

undefined8 camera::camera11::ActivateCamera_11(void)

{
  return 0;
}



//==== 00038560  ns=camera::camera11  size=0xb8
// sig: undefined UpdateCamera_11(void)
// callers(0): 
// callees(2): 00037d68 camera::camera11::Cam11_00037d68; 000543c8 camera::Camera_CollSphereBump

void camera::camera11::UpdateCamera_11(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  Cam11_00037d68();
  Camera_CollSphereBump(0x3ff0000000000000,param_1 + 0x30);
  fVar1 = *(float *)(param_1 + 0x34) - g_heroPosition.y;
  fVar2 = *(float *)(param_1 + 0x30) - g_heroPosition.x;
  fVar3 = SQRT(fVar2 * fVar2 + fVar1 * fVar1);
  if ((fVar3 < DAT_0071d72c) && (fVar3 != 0.0)) {
    fVar3 = (DAT_0071d72c - fVar3) / fVar3;
    *(float *)(param_1 + 0x30) = fVar2 * fVar3 + *(float *)(param_1 + 0x30);
    *(float *)(param_1 + 0x34) = fVar1 * fVar3 + *(float *)(param_1 + 0x34);
  }
  return;
}



//==== 00038618  ns=camera::camera11  size=0x28
// sig: undefined ExitCamera_11(void)
// callers(0): 
// callees(0): 

void camera::camera11::ExitCamera_11(int param_1)

{
  if (hero::g_HeroRequestedCamType != *(short *)(param_1 + 0x86)) {
    *(undefined2 *)(param_1 + 0x7e) = 3;
  }
  return;
}



//==== 00038640  ns=Global  size=0x14
// sig: undefined SECTION_HEADER_CAMERA12(void)
// callers(0): 
// callees(0): 

void SECTION_HEADER_CAMERA12(void)

{
  DAT_0071d78c = 0x10000;
  return;
}



//==== 00038658  ns=camera::camera12  size=0x80
// sig: undefined Cam12_IsHeroInVolume(void)
// callers(0): 
// callees(2): 00104e44 mobyutil::PointInsideComplexPoly; 00110b70 mobyutil::MB_IsPntInCuboid

int camera::camera12::Cam12_IsHeroInVolume(int param_1,Vec4 *param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x14) < 0) {
    if (*(int *)(param_1 + 0xc) < 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = mobyutil::MB_IsPntInCuboid(param_2,(longlong)*(int *)(param_1 + 0xc));
    }
  }
  else {
    iVar1 = mobyutil::PointInsideComplexPoly
                      (param_2,(Vec4 *)Splines[*(int *)(param_1 + 0x14)]->points,
                       Splines[*(int *)(param_1 + 0x14)]->cnt);
  }
  return iVar1;
}



//==== 000386e8  ns=camera::camera12  size=0x4ac
// sig: undefined Cam12_000386e8(void)
// callers(1): 00038b94 camera::camera12::InitCamera_12
// callees(1): 00057820 collproc::CollLine

void camera::camera12::Cam12_000386e8(float *param_1)

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
  int iVar11;
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
  undefined1 local_50 [16];
  
  fVar6 = param_1[0x1c];
  iVar11 = *(int *)((int)fVar6 + 0x60);
  fVar5 = *(float *)((int)fVar6 + 100);
  fVar4 = (float)GameCamera.field17_0x1b4._12_4_ * fVar5 + *(float *)(iVar11 + 0x10);
  fVar8 = (float)GameCamera.field17_0x1b4._16_4_ * fVar5 + *(float *)(iVar11 + 0x14);
  fVar7 = (float)GameCamera.field17_0x1b4._20_4_ * fVar5 + *(float *)(iVar11 + 0x18);
  fVar5 = *(float *)(iVar11 + 0x1c);
  dVar19 = (double)(*(float *)(iVar11 + 0x14) - *(float *)((int)fVar6 + 0x34));
  dVar13 = (double)(float)GameCamera.field17_0x1b4._16_4_;
  dVar20 = (double)(*(float *)(iVar11 + 0x10) - *(float *)((int)fVar6 + 0x30));
  dVar12 = (double)(float)GameCamera.field17_0x1b4._12_4_;
  dVar18 = (double)(*(float *)(iVar11 + 0x18) - *(float *)((int)fVar6 + 0x38));
  dVar14 = (double)(float)GameCamera.field17_0x1b4._20_4_;
  dVar21 = 0.0;
  dVar16 = (double)*(float *)((int)fVar6 + 0x70);
  dVar17 = (double)*(float *)((int)fVar6 + 0x74);
  fVar6 = *(float *)((int)fVar6 + 0x78);
  dVar15 = (double)(float)(dVar18 * dVar14 +
                          (double)(float)(dVar20 * dVar12 + (double)(float)(dVar19 * dVar13)));
  fVar1 = -(float)(dVar13 * dVar15 - dVar19);
  fVar9 = -(float)(dVar12 * dVar15 - dVar20);
  fVar2 = -(float)(dVar14 * dVar15 - dVar18);
  fVar3 = fVar2 * fVar2 + fVar9 * fVar9 + fVar1 * fVar1;
  dVar15 = dVar21;
  dVar18 = dVar21;
  dVar19 = dVar21;
  if (SQRT(fVar3) != 0.0) {
    fVar10 = 1.0 / SQRT(fVar3);
    fVar10 = -(fVar3 * fVar10 * fVar10 - 1.0) * fVar10 * 0.5 + fVar10;
    fVar10 = -(fVar3 * fVar10 * fVar10 - 1.0) * fVar10 * 0.5 + fVar10;
    fVar10 = -(fVar3 * fVar10 * fVar10 - 1.0) * fVar10 * 0.5 + fVar10;
    dVar19 = (double)(fVar9 * fVar10);
    dVar18 = (double)(fVar1 * fVar10);
    dVar15 = (double)(fVar2 * fVar10);
  }
  fVar1 = (float)(dVar14 * dVar19 - (double)(float)(dVar12 * dVar15));
  fVar2 = (float)(dVar13 * dVar15 - (double)(float)(dVar14 * dVar18));
  fVar3 = (float)(dVar12 * dVar18 - (double)(float)(dVar13 * dVar19));
  fVar9 = fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1;
  dVar12 = dVar21;
  dVar13 = dVar21;
  dVar14 = dVar21;
  if (SQRT(fVar9) != 0.0) {
    fVar10 = 1.0 / SQRT(fVar9);
    fVar10 = -(fVar9 * fVar10 * fVar10 - 1.0) * fVar10 * 0.5 + fVar10;
    fVar10 = -(fVar9 * fVar10 * fVar10 - 1.0) * fVar10 * 0.5 + fVar10;
    fVar10 = -(fVar9 * fVar10 * fVar10 - 1.0) * fVar10 * 0.5 + fVar10;
    dVar14 = (double)(fVar2 * fVar10);
    dVar13 = (double)(fVar1 * fVar10);
    dVar12 = (double)(fVar3 * fVar10);
  }
  param_1[0xf] = fVar5;
  iVar11 = CAMERA_COLL_FLAGS;
  param_1[0xc] = fVar4 - ((float)(dVar18 * dVar12 - (double)(float)(dVar15 * dVar13)) * fVar6 +
                         (float)(dVar19 * dVar16 + (double)(float)(dVar14 * dVar17)));
  param_1[0xd] = fVar8 - ((float)(dVar15 * dVar14 - (double)(float)(dVar19 * dVar12)) * fVar6 +
                         (float)(dVar18 * dVar16 + (double)(float)(dVar13 * dVar17)));
  param_1[0xe] = fVar7 - ((float)(dVar19 * dVar13 - (double)(float)(dVar18 * dVar14)) * fVar6 +
                         (float)(dVar15 * dVar16 + (double)(float)(dVar12 * dVar17)));
  iVar11 = collproc::CollLine(local_50,param_1 + 0xc,iVar11,0,0);
  dVar15 = (double)(float)GameCamera.field17_0x1b4._0_4_;
  dVar18 = (double)(float)GameCamera.field17_0x1b4._4_4_;
  dVar19 = (double)GameCamera.field16_0x1b0;
  fVar6 = param_1[0xc];
  fVar1 = param_1[0xe];
  fVar2 = param_1[0xd];
  if (iVar11 != 0) {
    fVar2 = CollOutput.ip.y - fVar8;
    fVar6 = CollOutput.ip.x - fVar4;
    fVar1 = CollOutput.ip.z - fVar7;
    dVar12 = (double)SQRT(fVar1 * fVar1 + fVar6 * fVar6 + fVar2 * fVar2);
    if (dVar12 == dVar21) {
      param_1[0xc] = fVar4;
      param_1[0xd] = fVar8;
      param_1[0xe] = fVar7;
      param_1[0xf] = fVar5;
      fVar6 = fVar4;
      fVar1 = fVar7;
      fVar2 = fVar8;
    }
    else {
      param_1[0xf] = fVar5;
      fVar3 = (float)((double)(float)(dVar12 - 0.5) / dVar12);
      fVar6 = fVar6 * fVar3 + fVar4;
      fVar2 = fVar2 * fVar3 + fVar8;
      fVar1 = fVar1 * fVar3 + fVar7;
      param_1[0xc] = fVar6;
      param_1[0xd] = fVar2;
      param_1[0xe] = fVar1;
    }
  }
  fVar8 = fVar8 - fVar2;
  fVar4 = fVar4 - fVar6;
  fVar7 = fVar7 - fVar1;
  fVar6 = fVar7 * fVar7 + fVar4 * fVar4 + fVar8 * fVar8;
  dVar12 = dVar21;
  dVar13 = dVar21;
  dVar14 = dVar21;
  if ((double)SQRT(fVar6) != dVar21) {
    fVar1 = 1.0 / SQRT(fVar6);
    fVar1 = -(fVar6 * fVar1 * fVar1 - 1.0) * fVar1 * 0.5 + fVar1;
    fVar1 = -(fVar6 * fVar1 * fVar1 - 1.0) * fVar1 * 0.5 + fVar1;
    fVar1 = -(fVar6 * fVar1 * fVar1 - 1.0) * fVar1 * 0.5 + fVar1;
    dVar14 = (double)(fVar4 * fVar1);
    dVar13 = (double)(fVar8 * fVar1);
    dVar12 = (double)(fVar7 * fVar1);
  }
  param_1[0x13] = fVar5;
  param_1[3] = fVar5;
  param_1[0x10] = (float)dVar14;
  param_1[0x11] = (float)dVar13;
  param_1[0x12] = (float)dVar12;
  fVar5 = (float)(dVar18 * dVar14 - (double)(float)(dVar19 * dVar12));
  fVar6 = (float)(dVar15 * dVar12 - (double)(float)(dVar18 * dVar13));
  fVar4 = (float)(dVar19 * dVar13 - (double)(float)(dVar15 * dVar14));
  *param_1 = (float)dVar14;
  param_1[1] = (float)dVar13;
  param_1[2] = (float)dVar12;
  param_1[7] = 0.0;
  fVar7 = fVar4 * fVar4 + fVar6 * fVar6 + fVar5 * fVar5;
  dVar15 = dVar21;
  dVar18 = dVar21;
  if ((double)SQRT(fVar7) != dVar21) {
    fVar8 = 1.0 / SQRT(fVar7);
    fVar8 = -(fVar7 * fVar8 * fVar8 - 1.0) * fVar8 * 0.5 + fVar8;
    fVar8 = -(fVar7 * fVar8 * fVar8 - 1.0) * fVar8 * 0.5 + fVar8;
    fVar8 = -(fVar7 * fVar8 * fVar8 - 1.0) * fVar8 * 0.5 + fVar8;
    dVar15 = (double)(fVar6 * fVar8);
    dVar21 = (double)(fVar5 * fVar8);
    dVar18 = (double)(fVar4 * fVar8);
  }
  param_1[4] = (float)dVar15;
  param_1[5] = (float)dVar21;
  param_1[6] = (float)dVar18;
  param_1[0xb] = 0.0;
  param_1[8] = (float)(dVar13 * dVar18 - (double)(float)(dVar12 * dVar21));
  param_1[9] = (float)(dVar12 * dVar15 - (double)(float)(dVar14 * dVar18));
  param_1[10] = (float)(dVar14 * dVar21 - (double)(float)(dVar13 * dVar15));
  return;
}



//==== 00038b94  ns=camera::camera12  size=0x118
// sig: undefined InitCamera_12(void)
// callers(0): 
// callees(1): 000386e8 camera::camera12::Cam12_000386e8

void camera::camera12::InitCamera_12(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  
  iVar2 = *(int *)(param_1 + 0x70);
  *(undefined4 *)(iVar2 + 0x70) = DAT_0071d7b0;
  *(undefined4 *)(iVar2 + 0x74) = 0;
  uVar4 = DAT_0071d7b4;
  *(undefined4 *)(iVar2 + 0x7c) = 0;
  *(undefined4 *)(iVar2 + 0x78) = uVar4;
  uVar4 = DAT_0071d7b8;
  *(MobyInstance **)(iVar2 + 0x60) = g_heroMobyPtr;
  puVar3 = *(undefined4 **)(param_1 + 0x70);
  *(undefined4 *)(iVar2 + 100) = uVar4;
  puVar3[4] = DAT_0071d7bc;
  uVar4 = DAT_0071d7c0;
  puVar3[6] = 0;
  puVar3[5] = uVar4;
  puVar3[3] = 0;
  puVar3[2] = 0;
  puVar3[1] = 0;
  *puVar3 = 0;
  sVar1 = *(short *)(param_1 + 0x84);
  puVar3[9] = DAT_0071d7c4;
  iVar2 = ImportCameras;
  puVar3[10] = DAT_0071d7c8;
  puVar7 = (undefined4 *)(iVar2 + (int)((longlong)sVar1 << 5));
  puVar3[0xb] = 0;
  puVar3[8] = 0;
  puVar3[0x10] = DAT_0071d7cc;
  uVar4 = puVar7[1];
  uVar5 = puVar7[2];
  uVar6 = puVar7[3];
  puVar3[0xc] = *puVar7;
  puVar3[0xd] = uVar4;
  puVar3[0xe] = uVar5;
  puVar3[0xf] = uVar6;
  Cam12_000386e8(param_1);
  *(undefined2 *)(param_1 + 0x7e) = 0;
  return;
}



//==== 00038cb8  ns=camera::camera12  size=0x464
// sig: undefined Cam12_00038cb8(void)
// callers(1): 000391c4 camera::camera12::UpdateCamera_12
// callees(1): 000501e8 camera::Cam_InterpValues

void camera::camera12::Cam12_00038cb8(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float *speed;
  double dVar7;
  double dVar8;
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
  double dVar20;
  double dVar21;
  float fVar22;
  float fVar23;
  
  fVar3 = param_1[0x1c];
  iVar4 = *(int *)((int)fVar3 + 0x60);
  dVar14 = (double)(*(float *)(iVar4 + 0x14) - *(float *)((int)fVar3 + 0x34));
  dVar15 = (double)(*(float *)(iVar4 + 0x10) - *(float *)((int)fVar3 + 0x30));
  dVar8 = (double)(float)GameCamera.field17_0x1b4._0_4_;
  dVar7 = (double)GameCamera.field16_0x1b0;
  dVar13 = (double)(*(float *)(iVar4 + 0x18) - *(float *)((int)fVar3 + 0x38));
  dVar9 = (double)(float)GameCamera.field17_0x1b4._4_4_;
  dVar17 = 0.0;
  fVar22 = *(float *)((int)fVar3 + 100);
  dVar21 = (double)((float)GameCamera.field17_0x1b4._12_4_ * fVar22 + *(float *)(iVar4 + 0x10));
  dVar10 = (double)(float)(dVar13 * dVar9 +
                          (double)(float)(dVar15 * dVar7 + (double)(float)(dVar14 * dVar8)));
  dVar20 = (double)((float)GameCamera.field17_0x1b4._16_4_ * fVar22 + *(float *)(iVar4 + 0x14));
  dVar18 = (double)*(float *)(iVar4 + 0x1c);
  dVar19 = (double)((float)GameCamera.field17_0x1b4._20_4_ * fVar22 + *(float *)(iVar4 + 0x18));
  dVar11 = (double)*(float *)((int)fVar3 + 0x70);
  dVar12 = (double)*(float *)((int)fVar3 + 0x74);
  fVar1 = -(float)(dVar8 * dVar10 - dVar14);
  fVar5 = -(float)(dVar7 * dVar10 - dVar15);
  fVar23 = -(float)(dVar9 * dVar10 - dVar13);
  fVar22 = *(float *)((int)fVar3 + 0x78);
  fVar2 = fVar23 * fVar23 + fVar5 * fVar5 + fVar1 * fVar1;
  dVar10 = dVar17;
  dVar13 = dVar17;
  dVar14 = dVar17;
  speed = param_1;
  if (SQRT(fVar2) != 0.0) {
    fVar6 = 1.0 / SQRT(fVar2);
    speed = (float *)&DAT_00038cac;
    fVar6 = -(fVar2 * fVar6 * fVar6 - 1.0) * fVar6 * 0.5 + fVar6;
    fVar6 = -(fVar2 * fVar6 * fVar6 - 1.0) * fVar6 * 0.5 + fVar6;
    fVar6 = -(fVar2 * fVar6 * fVar6 - 1.0) * fVar6 * 0.5 + fVar6;
    dVar14 = (double)(fVar5 * fVar6);
    dVar13 = (double)(fVar1 * fVar6);
    dVar10 = (double)(fVar23 * fVar6);
  }
  fVar1 = (float)(dVar9 * dVar14 - (double)(float)(dVar7 * dVar10));
  fVar23 = (float)(dVar7 * dVar13 - (double)(float)(dVar8 * dVar14));
  fVar2 = (float)(dVar8 * dVar10 - (double)(float)(dVar9 * dVar13));
  fVar5 = fVar23 * fVar23 + fVar2 * fVar2 + fVar1 * fVar1;
  dVar7 = dVar17;
  dVar8 = dVar17;
  dVar9 = dVar17;
  if (SQRT(fVar5) != 0.0) {
    fVar6 = 1.0 / SQRT(fVar5);
    speed = (float *)&DAT_00038cac;
    fVar6 = -(fVar5 * fVar6 * fVar6 - 1.0) * fVar6 * 0.5 + fVar6;
    fVar6 = -(fVar5 * fVar6 * fVar6 - 1.0) * fVar6 * 0.5 + fVar6;
    fVar6 = -(fVar5 * fVar6 * fVar6 - 1.0) * fVar6 * 0.5 + fVar6;
    dVar9 = (double)(fVar2 * fVar6);
    dVar8 = (double)(fVar1 * fVar6);
    dVar7 = (double)(fVar23 * fVar6);
  }
  dVar16 = (double)(float)(dVar20 - (double)((float)(dVar10 * dVar9 -
                                                    (double)(float)(dVar14 * dVar7)) * fVar22 +
                                            (float)(dVar13 * dVar11 +
                                                   (double)(float)(dVar8 * dVar12))));
  dVar15 = (double)(float)(dVar19 - (double)((float)(dVar14 * dVar8 -
                                                    (double)(float)(dVar13 * dVar9)) * fVar22 +
                                            (float)(dVar10 * dVar11 +
                                                   (double)(float)(dVar7 * dVar12))));
  fVar22 = Cam_InterpValues(param_1[0xc],
                            (float)(dVar21 - (double)((float)(dVar13 * dVar7 -
                                                             (double)(float)(dVar10 * dVar8)) *
                                                      fVar22 + (float)(dVar14 * dVar11 +
                                                                      (double)(float)(dVar9 * dVar12
                                                                                     )))),
                            *(float *)((int)fVar3 + 0x10),*(float *)((int)fVar3 + 0x14),
                            *(float *)((int)fVar3 + 0x18),speed);
  param_1[0xc] = fVar22;
  fVar22 = Cam_InterpValues(param_1[0xd],(float)dVar16,*(float *)((int)fVar3 + 0x10),
                            *(float *)((int)fVar3 + 0x14),*(float *)((int)fVar3 + 0x18),speed);
  param_1[0xd] = fVar22;
  fVar23 = Cam_InterpValues(param_1[0xe],(float)dVar15,*(float *)((int)fVar3 + 0x10),
                            *(float *)((int)fVar3 + 0x14),*(float *)((int)fVar3 + 0x18),speed);
  fVar22 = (float)(dVar19 - (double)fVar23);
  fVar3 = (float)(dVar20 - (double)param_1[0xd]);
  fVar1 = (float)(dVar21 - (double)param_1[0xc]);
  param_1[0xe] = fVar23;
  dVar7 = (double)(float)GameCamera.field17_0x1b4._0_4_;
  dVar8 = (double)(float)GameCamera.field17_0x1b4._4_4_;
  dVar9 = (double)GameCamera.field16_0x1b0;
  fVar23 = fVar22 * fVar22 + fVar1 * fVar1 + fVar3 * fVar3;
  dVar10 = dVar17;
  dVar13 = dVar17;
  dVar14 = dVar17;
  if ((double)SQRT(fVar23) != dVar17) {
    fVar2 = 1.0 / SQRT(fVar23);
    fVar2 = -(fVar23 * fVar2 * fVar2 - 1.0) * fVar2 * 0.5 + fVar2;
    fVar2 = -(fVar23 * fVar2 * fVar2 - 1.0) * fVar2 * 0.5 + fVar2;
    fVar2 = -(fVar23 * fVar2 * fVar2 - 1.0) * fVar2 * 0.5 + fVar2;
    dVar14 = (double)(fVar1 * fVar2);
    dVar13 = (double)(fVar3 * fVar2);
    dVar10 = (double)(fVar22 * fVar2);
  }
  param_1[0x13] = (float)dVar18;
  param_1[3] = (float)dVar18;
  param_1[0x10] = (float)dVar14;
  param_1[0x11] = (float)dVar13;
  param_1[0x12] = (float)dVar10;
  fVar22 = (float)(dVar8 * dVar14 - (double)(float)(dVar9 * dVar10));
  fVar3 = (float)(dVar7 * dVar10 - (double)(float)(dVar8 * dVar13));
  fVar1 = (float)(dVar9 * dVar13 - (double)(float)(dVar7 * dVar14));
  *param_1 = (float)dVar14;
  param_1[1] = (float)dVar13;
  param_1[2] = (float)dVar10;
  param_1[7] = 0.0;
  fVar23 = fVar1 * fVar1 + fVar3 * fVar3 + fVar22 * fVar22;
  dVar7 = dVar17;
  dVar8 = dVar17;
  if ((double)SQRT(fVar23) != dVar17) {
    fVar2 = 1.0 / SQRT(fVar23);
    fVar2 = -(fVar23 * fVar2 * fVar2 - 1.0) * fVar2 * 0.5 + fVar2;
    fVar2 = -(fVar23 * fVar2 * fVar2 - 1.0) * fVar2 * 0.5 + fVar2;
    fVar2 = -(fVar23 * fVar2 * fVar2 - 1.0) * fVar2 * 0.5 + fVar2;
    dVar7 = (double)(fVar3 * fVar2);
    dVar17 = (double)(fVar22 * fVar2);
    dVar8 = (double)(fVar1 * fVar2);
  }
  param_1[4] = (float)dVar7;
  param_1[5] = (float)dVar17;
  param_1[6] = (float)dVar8;
  param_1[0xb] = 0.0;
  param_1[8] = (float)(dVar13 * dVar8 - (double)(float)(dVar10 * dVar17));
  param_1[9] = (float)(dVar10 * dVar7 - (double)(float)(dVar14 * dVar8));
  param_1[10] = (float)(dVar14 * dVar17 - (double)(float)(dVar13 * dVar7));
  return;
}



//==== 0003911c  ns=camera::camera12  size=0xa8
// sig: undefined ActivateCamera_12(void)
// callers(0): 
// callees(2): 00104e44 mobyutil::PointInsideComplexPoly; 00110b70 mobyutil::MB_IsPntInCuboid

undefined8 camera::camera12::ActivateCamera_12(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(ImportCameras + (int)((longlong)*(short *)(param_1 + 0x84) << 5) + 0x1c);
  iVar1 = *(int *)(iVar2 + 0x14);
  if (iVar1 < 0) {
    iVar2 = *(int *)(iVar2 + 0xc);
    if (iVar2 < 0) {
      return 0;
    }
    iVar2 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)iVar2);
  }
  else {
    iVar2 = mobyutil::PointInsideComplexPoly
                      (&g_heroPosition,(Vec4 *)Splines[iVar1]->points,Splines[iVar1]->cnt);
  }
  if (iVar2 == 0) {
    return 0;
  }
  return 1;
}



//==== 000391c4  ns=camera::camera12  size=0x20
// sig: undefined UpdateCamera_12(void)
// callers(0): 
// callees(1): 00038cb8 camera::camera12::Cam12_00038cb8

void camera::camera12::UpdateCamera_12(void)

{
  Cam12_00038cb8();
  return;
}



//==== 000391e4  ns=camera::camera12  size=0xb0
// sig: undefined ExitCamera_12(void)
// callers(0): 
// callees(2): 00104e44 mobyutil::PointInsideComplexPoly; 00110b70 mobyutil::MB_IsPntInCuboid

void camera::camera12::ExitCamera_12(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(ImportCameras + (int)((longlong)*(short *)(param_1 + 0x84) << 5) + 0x1c);
  iVar1 = *(int *)(iVar2 + 0x14);
  if (iVar1 < 0) {
    iVar2 = *(int *)(iVar2 + 0xc);
    if (iVar2 < 0) goto LAB_00039278;
    iVar2 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)iVar2);
  }
  else {
    iVar2 = mobyutil::PointInsideComplexPoly
                      (&g_heroPosition,(Vec4 *)Splines[iVar1]->points,Splines[iVar1]->cnt);
  }
  if (iVar2 != 0) {
    return;
  }
LAB_00039278:
  *(undefined2 *)(param_1 + 0x7e) = 3;
  return;
}



//==== 00039294  ns=Global  size=0x14
// sig: undefined SECTION_HEADER_CAMERA13(void)
// callers(0): 
// callees(0): 

void SECTION_HEADER_CAMERA13(void)

{
  DAT_0071d81c = 0x10000;
  return;
}



//==== 000392c8  ns=camera::camera13  size=0x114
// sig: undefined Cam13_000392c8(void)
// callers(1): 0003a5e0 camera::camera13::UpdateCamera_13
// callees(1): 00050288 camera::Cam_InterpAngles

void camera::camera13::Cam13_000392c8(int param_1)

{
  float fVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  iVar2 = *(int *)(param_1 + 0x70);
  dVar6 = (double)Cam_InterpAngles((double)*(float *)(iVar2 + 0xa4),(double)DAT_0096a1c4,
                                   (double)DAT_0071d840,(double)DAT_0071d844,0,&hero::g_heroMtx,
                                   &DAT_00720000,iVar2 + 0xa8);
  *(float *)(iVar2 + 0xa4) = (float)dVar6;
  fVar1 = (float)(dVar6 + 1.570796251296997);
  dVar8 = (double)(float)(3.141592502593994 - dVar6);
  if (dVar6 - (double)(float)(3.141592502593994 - dVar6) < 0.0) {
    dVar8 = dVar6;
  }
  fVar3 = 3.1415925 - fVar1;
  if (fVar1 - (3.1415925 - fVar1) < 0.0) {
    fVar3 = fVar1;
  }
  dVar7 = (double)(float)(-3.141592502593994 - dVar6);
  if ((double)(float)(-3.141592502593994 - dVar6) - dVar8 < 0.0) {
    dVar7 = dVar8;
  }
  *(undefined4 *)(iVar2 + 0x78) = 0;
  fVar4 = -3.1415925 - fVar1;
  if ((-3.1415925 - fVar1) - fVar3 < 0.0) {
    fVar4 = fVar3;
  }
  dVar6 = (double)(float)(dVar7 * dVar7);
  fVar5 = fVar4 * fVar4;
  dVar9 = (double)(float)(dVar6 * (double)(float)(dVar6 * dVar7));
  fVar1 = fVar5 * fVar5 * fVar4;
  dVar8 = (double)(float)(dVar6 * dVar9);
  fVar3 = fVar5 * fVar1;
  *(float *)(iVar2 + 0x74) =
       (float)(dVar6 * dVar8) * 2.601887e-06 +
       (float)(dVar8 * -0.0001980741071747616 +
              (double)(float)(dVar9 * 0.008333025500178337 +
                             (double)(float)((double)(float)(dVar6 * dVar7) * -0.16666656732559204 +
                                            dVar7)));
  *(float *)(iVar2 + 0x70) =
       fVar5 * fVar3 * 2.601887e-06 +
       fVar3 * -0.0001980741 + fVar1 * 0.0083330255 + fVar5 * fVar4 * -0.16666657 + fVar4;
  return;
}



//==== 000393e8  ns=camera::camera13  size=0x100
// sig: undefined ???_Cam13_InterpPosToHero(void)
// callers(0): 
// callees(1): 000501e8 camera::Cam_InterpValues

void camera::camera13::____Cam13_InterpPosToHero(float *param_1)

{
  float fVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  float fVar5;
  
  fVar1 = param_1[0x1c];
  dVar4 = 0.004999999888241291;
  dVar3 = 0.20000000298023224;
  dVar2 = 0.0;
  fVar5 = Cam_InterpValues(*(float *)((int)fVar1 + 0x30),g_heroPosition.x,0.005,0.2,0.0,param_1);
  *(float *)((int)fVar1 + 0x30) = fVar5;
  fVar5 = Cam_InterpValues(*(float *)((int)fVar1 + 0x34),g_heroPosition.y,(float)dVar4,(float)dVar3,
                           (float)dVar2,param_1);
  *(float *)((int)fVar1 + 0x34) = fVar5;
  fVar5 = Cam_InterpValues(*(float *)((int)fVar1 + 0x38),g_heroPosition.z,(float)dVar4,(float)dVar3,
                           (float)dVar2,param_1);
  *(float *)((int)fVar1 + 0x30) = DAT_00969e20 + *(float *)((int)fVar1 + 0x30);
  *(float *)((int)fVar1 + 0x34) = DAT_00969e24 + *(float *)((int)fVar1 + 0x34);
  *(float *)((int)fVar1 + 0x38) = DAT_00969e28 + fVar5;
  *(undefined4 *)((int)fVar1 + 0x3c) = DAT_00969e2c;
  return;
}



//==== 000394e8  ns=camera::camera13  size=0xa0
// sig: undefined Cam13_000394e8(void)
// callers(3): 000395c0 camera::camera13::Cam13_000395c0; 0003a298 camera::camera13::???_Cam13_InterpPosToTarget; 0003a5e0 camera::camera13::UpdateCamera_13
// callees(0): 

void camera::camera13::Cam13_000394e8(int param_1,float *param_2)

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
  int iVar11;
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
  
  iVar11 = *(int *)(param_1 + 0x70);
  fVar1 = *(float *)(iVar11 + 0x54);
  fVar2 = *(float *)(iVar11 + 0x30);
  fVar3 = *(float *)(iVar11 + 0x34);
  fVar12 = (float)GameCamera.field17_0x1b4._12_4_ * fVar1;
  fVar4 = *(float *)(iVar11 + 0x38);
  fVar21 = (float)GameCamera.field17_0x1b4._16_4_ * fVar1;
  fVar1 = (float)GameCamera.field17_0x1b4._20_4_ * fVar1;
  fVar5 = *(float *)(iVar11 + 0x70);
  fVar6 = *(float *)(iVar11 + 0x74);
  fVar7 = *(float *)(iVar11 + 0x78);
  fVar8 = *(float *)(iVar11 + 0x60);
  fVar19 = (float)GameCamera.field17_0x1b4._16_4_ * fVar5;
  fVar17 = (float)GameCamera.field17_0x1b4._20_4_ * fVar6;
  fVar9 = *(float *)(iVar11 + 0x68);
  fVar13 = (float)GameCamera.field17_0x1b4._12_4_ * fVar7;
  fVar10 = *(float *)(iVar11 + 100);
  fVar14 = (float)GameCamera.field17_0x1b4._12_4_ * fVar6;
  fVar20 = (float)GameCamera.field17_0x1b4._16_4_ * fVar7;
  fVar18 = (float)GameCamera.field17_0x1b4._20_4_ * fVar5;
  fVar15 = (float)GameCamera.field17_0x1b4._12_4_ * fVar9;
  fVar16 = (float)GameCamera.field17_0x1b4._16_4_ * fVar9;
  fVar9 = (float)GameCamera.field17_0x1b4._20_4_ * fVar9;
  param_2[3] = *(float *)(iVar11 + 0x3c);
  *param_2 = (fVar20 - fVar17) * fVar10 + fVar15 + fVar5 * fVar8 + fVar12 + fVar2;
  param_2[1] = (fVar18 - fVar13) * fVar10 + fVar16 + fVar6 * fVar8 + fVar21 + fVar3;
  param_2[2] = (fVar14 - fVar19) * fVar10 + fVar9 + fVar7 * fVar8 + fVar1 + fVar4;
  return;
}



//==== 000395c0  ns=camera::camera13  size=0x6b0
// sig: undefined Cam13_000395c0(void)
// callers(1): 0003a5e0 camera::camera13::UpdateCamera_13
// callees(6): 0002ed78 stub::STUB_0002ed78; 000394e8 camera::camera13::Cam13_000394e8; 000501e8 camera::Cam_InterpValues; 001113e0 mobyutil::MB_RotateQuatAxisAngle; 001115c8 mobyutil::MB_QuatBetweenVecs; 00502578 fastfunc::FastWrapRot
// strings: 000395a8: '@tvE?' (raw) | 00039978: '<`<#W$' (raw)

void camera::camera13::Cam13_000395c0(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  int iVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  float *speed;
  int iVar11;
  float *outQuat;
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
  undefined8 uVar22;
  float fVar23;
  float fVar24;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined1 local_b0 [16];
  
  fVar5 = ANALOG_STICKS.x;
  iVar6 = *(int *)(param_1 + 0x70);
  uVar22 = 0x3fd0000000000000;
  outQuat = (float *)(iVar6 + 0x60);
  dVar21 = (double)*(float *)(iVar6 + 0x60);
  dVar20 = (double)*(float *)(iVar6 + 100);
  dVar19 = (double)*(float *)(iVar6 + 0x68);
  dVar18 = (double)*(float *)(iVar6 + 0x6c);
  dVar16 = (double)ANALOG_STICKS.x;
  speed = (float *)stub::STUB_0002ed78((double)*(float *)(iVar6 + 0x90),0x3fd0000000000000,param_1,
                                       iVar6 + 0xb0);
  dVar14 = 0.009999999776482582;
  dVar13 = 0.20000000298023224;
  dVar17 = 0.0;
  fVar23 = Cam_InterpValues(*(float *)(iVar6 + 0x90),(float)dVar16,0.01,0.2,0.0,speed);
  *(float *)(iVar6 + 0x90) = fVar23;
  dVar12 = 0.03490658476948738;
  dVar16 = 1.0;
  mobyutil::MB_RotateQuatAxisAngle(fVar23 * 0.034906585,outQuat,outQuat);
  fVar23 = ANALOG_STICKS.y;
  fVar24 = Cam_InterpValues(*(float *)(iVar6 + 0x98),ANALOG_STICKS.y,(float)dVar14,(float)dVar13,
                            (float)dVar17,&ANALOG_STICKS.x);
  dVar15 = (double)(float)((double)fVar24 * dVar12);
  *(float *)(iVar6 + 0x98) = fVar24;
  dVar13 = (double)fastfunc::FastWrapRot(*(float *)(iVar6 + 0xa0),(float)((double)fVar24 * dVar12));
  dVar14 = ABS(dVar13);
  dVar12 = dVar17;
  if (dVar14 <= 0.7853981852531433) {
    if (0.5235987901687622 < dVar14) {
      fVar24 = (float)(dVar15 * (double)(ABS((float)(0.7853981852531433 - dVar14)) * 3.8197186));
      dVar15 = (double)fVar24;
      dVar13 = (double)fastfunc::FastWrapRot(*(float *)(iVar6 + 0xa0),fVar24);
      dVar12 = dVar17;
    }
    *(float *)(iVar6 + 0xa0) = (float)dVar13;
    dVar17 = dVar15;
  }
  mobyutil::MB_RotateQuatAxisAngle((float)dVar17,outQuat,outQuat);
  if ((*(int *)(iVar6 + 0x90) != 0) || (*(int *)(iVar6 + 0x98) != 0)) {
    if (speed == (float *)0x0) {
      Cam13_000394e8(param_1,&local_c0);
      dVar14 = (double)*(float *)(param_1 + 0x30);
      dVar13 = (double)*(float *)(param_1 + 0x34);
      dVar17 = (double)*(float *)(param_1 + 0x38);
      dVar15 = (double)*(float *)(param_1 + 0x3c);
      *(undefined4 *)(param_1 + 0x30) = local_c0;
      *(undefined4 *)(param_1 + 0x34) = local_bc;
      *(undefined4 *)(param_1 + 0x38) = local_b8;
      *(undefined4 *)(param_1 + 0x3c) = local_b4;
      iVar11 = stub::STUB_0002ed78((double)*(float *)(iVar6 + 0x90),uVar22,param_1,iVar6 + 0xb0);
      if (iVar11 == 1) {
        *(float *)(iVar6 + 0x60) = (float)dVar21;
        *(float *)(iVar6 + 100) = (float)dVar20;
        *(float *)(iVar6 + 0x68) = (float)dVar19;
        *(float *)(iVar6 + 0x6c) = (float)dVar18;
        *(float *)(param_1 + 0x30) = (float)dVar14;
        *(float *)(param_1 + 0x34) = (float)dVar13;
        *(float *)(param_1 + 0x38) = (float)dVar17;
        *(float *)(param_1 + 0x3c) = (float)dVar15;
      }
    }
    iVar11 = *(int *)(param_1 + 0x70);
    if ((0x3c23d70a < (*(uint *)(iVar6 + 0x90) & 0x7fffffff)) ||
       (0x3c23d70a < (*(uint *)(iVar6 + 0x98) & 0x7fffffff))) {
      fVar24 = *(float *)(iVar11 + 0x54);
      fVar3 = ((float)GameCamera.field17_0x1b4._16_4_ * fVar24 + *(float *)(iVar11 + 0x34)) -
              *(float *)(param_1 + 0x34);
      fVar7 = ((float)GameCamera.field17_0x1b4._12_4_ * fVar24 + *(float *)(iVar11 + 0x30)) -
              *(float *)(param_1 + 0x30);
      fVar24 = ((float)GameCamera.field17_0x1b4._20_4_ * fVar24 + *(float *)(iVar11 + 0x38)) -
               *(float *)(param_1 + 0x38);
      uVar4 = *(undefined4 *)(iVar11 + 0x3c);
      dVar15 = (double)(fVar24 * fVar24 + fVar7 * fVar7 + fVar3 * fVar3);
      dVar17 = dVar12;
      dVar13 = dVar12;
      dVar14 = dVar12;
      if ((double)(float)SQRT(dVar15) != dVar12) {
        dVar17 = 1.0 / SQRT(dVar15);
        dVar17 = (double)(float)(-(double)(float)((double)(float)(dVar15 * dVar17) * dVar17 - dVar16
                                                 ) * (double)(float)(dVar17 * 0.5) + dVar17);
        dVar17 = (double)(float)(-(double)(float)((double)(float)(dVar15 * dVar17) * dVar17 - dVar16
                                                 ) * (double)(float)(dVar17 * 0.5) + dVar17);
        fVar1 = (float)(-(double)(float)((double)(float)(dVar15 * dVar17) * dVar17 - dVar16) *
                        (double)(float)(dVar17 * 0.5) + dVar17);
        dVar14 = (double)(fVar7 * fVar1);
        dVar13 = (double)(fVar3 * fVar1);
        dVar17 = (double)(fVar24 * fVar1);
      }
      *(float *)(iVar6 + 0x80) = (float)dVar14;
      *(float *)(iVar6 + 0x84) = (float)dVar13;
      *(float *)(iVar6 + 0x88) = (float)dVar17;
      *(undefined4 *)(iVar6 + 0x8c) = uVar4;
    }
  }
  if (((uint)ABS(fVar5) < 0x3c23d70a) && ((uint)ABS(fVar23) < 0x3c23d70a)) {
    dVar18 = 0.5;
    mobyutil::MB_QuatBetweenVecs(0x3fa99999a0000000,outQuat,outQuat,local_b0,&DAT_00039588,0);
    uVar10 = GameCamera.field17_0x1b4._20_4_;
    uVar9 = GameCamera.field17_0x1b4._16_4_;
    uVar8 = GameCamera.field17_0x1b4._12_4_;
    iVar11 = *(int *)(param_1 + 0x70);
    fVar5 = *(float *)(iVar11 + 0x54);
    fVar3 = ((float)GameCamera.field17_0x1b4._16_4_ * fVar5 + *(float *)(iVar11 + 0x34)) -
            *(float *)(param_1 + 0x34);
    fVar7 = ((float)GameCamera.field17_0x1b4._12_4_ * fVar5 + *(float *)(iVar11 + 0x30)) -
            *(float *)(param_1 + 0x30);
    fVar1 = ((float)GameCamera.field17_0x1b4._20_4_ * fVar5 + *(float *)(iVar11 + 0x38)) -
            *(float *)(param_1 + 0x38);
    uVar4 = *(undefined4 *)(iVar11 + 0x3c);
    fVar5 = *(float *)(iVar6 + 0x60);
    fVar23 = *(float *)(iVar6 + 100);
    fVar24 = *(float *)(iVar6 + 0x68);
    dVar15 = (double)(fVar1 * fVar1 + fVar7 * fVar7 + fVar3 * fVar3);
    dVar17 = dVar12;
    dVar13 = dVar12;
    dVar14 = dVar12;
    if ((double)(float)SQRT(dVar15) != dVar12) {
      dVar17 = 1.0 / SQRT(dVar15);
      dVar17 = (double)(float)(-(double)(float)((double)(float)(dVar15 * dVar17) * dVar17 - dVar16)
                               * (double)(float)(dVar18 * dVar17) + dVar17);
      dVar17 = (double)(float)(-(double)(float)((double)(float)(dVar15 * dVar17) * dVar17 - dVar16)
                               * (double)(float)(dVar18 * dVar17) + dVar17);
      fVar2 = (float)(-(double)(float)((double)(float)(dVar15 * dVar17) * dVar17 - dVar16) *
                      (double)(float)(dVar18 * dVar17) + dVar17);
      dVar14 = (double)(fVar7 * fVar2);
      dVar13 = (double)(fVar3 * fVar2);
      dVar17 = (double)(fVar1 * fVar2);
    }
    fVar3 = fVar23 * (float)GameCamera.field17_0x1b4._16_4_;
    *(float *)(iVar6 + 0x84) = (float)dVar13;
    *(float *)(iVar6 + 0x88) = (float)dVar17;
    *(float *)(iVar6 + 0x80) = (float)dVar14;
    *(undefined4 *)(iVar6 + 0x8c) = uVar4;
    fVar3 = fVar24 * (float)uVar10 + fVar5 * (float)uVar8 + fVar3;
    fVar7 = -((float)uVar9 * fVar3 - fVar23);
    fVar1 = -((float)uVar8 * fVar3 - fVar5);
    fVar3 = -((float)uVar10 * fVar3 - fVar24);
    dVar15 = (double)(fVar3 * fVar3 + fVar1 * fVar1 + fVar7 * fVar7);
    dVar17 = dVar12;
    dVar13 = dVar12;
    dVar14 = dVar12;
    if ((double)(float)SQRT(dVar15) != dVar12) {
      dVar17 = 1.0 / SQRT(dVar15);
      dVar17 = (double)(float)(-(double)(float)((double)(float)(dVar15 * dVar17) * dVar17 - dVar16)
                               * (double)(float)(dVar18 * dVar17) + dVar17);
      dVar17 = (double)(float)(-(double)(float)((double)(float)(dVar15 * dVar17) * dVar17 - dVar16)
                               * (double)(float)(dVar18 * dVar17) + dVar17);
      fVar2 = (float)(-(double)(float)((double)(float)(dVar15 * dVar17) * dVar17 - dVar16) *
                      (double)(float)(dVar18 * dVar17) + dVar17);
      dVar17 = (double)(fVar1 * fVar2);
      dVar13 = (double)(fVar7 * fVar2);
      dVar14 = (double)(fVar3 * fVar2);
    }
    dVar21 = (double)(fVar24 * fVar24 + fVar5 * fVar5 + fVar23 * fVar23);
    dVar15 = dVar12;
    dVar19 = dVar12;
    dVar20 = dVar12;
    if ((double)(float)SQRT(dVar21) != dVar12) {
      dVar15 = 1.0 / SQRT(dVar21);
      dVar15 = (double)(float)(-(double)(float)((double)(float)(dVar21 * dVar15) * dVar15 - dVar16)
                               * (double)(float)(dVar18 * dVar15) + dVar15);
      dVar15 = (double)(float)(-(double)(float)((double)(float)(dVar21 * dVar15) * dVar15 - dVar16)
                               * (double)(float)(dVar18 * dVar15) + dVar15);
      fVar3 = (float)(-(double)(float)((double)(float)(dVar21 * dVar15) * dVar15 - dVar16) *
                      (double)(float)(dVar18 * dVar15) + dVar15);
      dVar15 = (double)(fVar5 * fVar3);
      dVar19 = (double)(fVar23 * fVar3);
      dVar20 = (double)(fVar24 * fVar3);
    }
    dVar13 = (double)(float)(dVar14 * dVar20 +
                            (double)(float)(dVar17 * dVar15 + (double)(float)(dVar13 * dVar19)));
    dVar17 = dVar13;
    if (dVar13 - dVar12 < 0.0) {
      dVar17 = ABS(dVar13);
    }
    dVar14 = (double)(float)(dVar16 - dVar17);
    if ((double)(float)(dVar16 - dVar17) - dVar12 < 0.0) {
      dVar14 = dVar12;
    }
    if (dVar13 - dVar12 < 0.0) {
      dVar16 = -1.0;
    }
    *(float *)(iVar6 + 0xa0) =
         (float)(-(double)(((float)((double)(float)(dVar17 * dVar17) * dVar17) * DAT_007358cc +
                           (float)((double)(float)(dVar17 * dVar17) * (double)DAT_007358c8 +
                                  (double)(float)(dVar17 * (double)DAT_007358c4 +
                                                 (double)DAT_007358c0))) * (float)SQRT(dVar14) -
                          1.5707964) * dVar16 - 1.5707963705062866);
  }
  return;
}



//==== 00039c98  ns=camera::camera13  size=0x304
// sig: undefined Cam13_00039c98(void)
// callers(1): 00039fc0 camera::camera13::InitCamera_13
// callees(0): 

void camera::camera13::Cam13_00039c98(float *param_1)

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
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  
  uVar18 = GameCamera.field17_0x1b4._20_4_;
  uVar17 = GameCamera.field17_0x1b4._16_4_;
  uVar16 = GameCamera.field17_0x1b4._12_4_;
  uVar15 = GameCamera.field17_0x1b4._4_4_;
  uVar14 = GameCamera.field17_0x1b4._0_4_;
  fVar13 = GameCamera.field16_0x1b0;
  fVar1 = DAT_0096a1c4 + 1.5707963;
  fVar4 = 3.1415925 - DAT_0096a1c4;
  if (DAT_0096a1c4 - (3.1415925 - DAT_0096a1c4) < 0.0) {
    fVar4 = DAT_0096a1c4;
  }
  fVar2 = 3.1415925 - fVar1;
  if (fVar1 - (3.1415925 - fVar1) < 0.0) {
    fVar2 = fVar1;
  }
  fVar6 = param_1[0x1c];
  fVar5 = -3.1415925 - DAT_0096a1c4;
  if ((-3.1415925 - DAT_0096a1c4) - fVar4 < 0.0) {
    fVar5 = fVar4;
  }
  fVar8 = fVar5 * fVar5;
  fVar4 = -3.1415925 - fVar1;
  if ((-3.1415925 - fVar1) - fVar2 < 0.0) {
    fVar4 = fVar2;
  }
  fVar1 = *(float *)((int)fVar6 + 100);
  fVar2 = *(float *)((int)fVar6 + 0x60);
  fVar7 = fVar4 * fVar4;
  fVar9 = fVar8 * fVar8 * fVar5;
  fVar10 = fVar8 * fVar9;
  fVar11 = fVar7 * fVar7 * fVar4;
  fVar3 = *(float *)((int)fVar6 + 0x68);
  fVar12 = fVar7 * fVar11;
  fVar8 = fVar8 * fVar10 * 2.601887e-06 +
          fVar10 * -0.0001980741 + fVar9 * 0.0083330255 + fVar8 * fVar5 * -0.16666657 + fVar5;
  fVar9 = (float)GameCamera.field17_0x1b4._20_4_ * fVar8;
  fVar5 = fVar7 * fVar12 * 2.601887e-06 +
          fVar12 * -0.0001980741 + fVar11 * 0.0083330255 + fVar7 * fVar4 * -0.16666657 + fVar4;
  *(float *)((int)fVar6 + 0x74) = fVar8;
  fVar4 = 0.0;
  *(undefined4 *)((int)fVar6 + 0x78) = 0;
  *(float *)((int)fVar6 + 0x70) = fVar5;
  fVar7 = *(float *)((int)fVar6 + 0x30) + (float)uVar16 * fVar3 + fVar5 * fVar2 + -(fVar9 * fVar1);
  param_1[0xc] = fVar7;
  fVar9 = *(float *)((int)fVar6 + 0x34) +
          (float)uVar17 * fVar3 + fVar8 * fVar2 + (float)uVar18 * fVar5 * fVar1;
  param_1[0xd] = fVar9;
  fVar1 = ((float)uVar16 * fVar8 - (float)uVar17 * fVar5) * fVar1 +
          (float)uVar18 * fVar3 + *(float *)((int)fVar6 + 0x38);
  param_1[0xe] = fVar1;
  param_1[0xf] = *(float *)((int)fVar6 + 0x3c);
  fVar9 = *(float *)((int)fVar6 + 0x34) - fVar9;
  fVar7 = *(float *)((int)fVar6 + 0x30) - fVar7;
  fVar1 = *(float *)((int)fVar6 + 0x38) - fVar1;
  fVar3 = fVar1 * fVar1 + fVar7 * fVar7 + fVar9 * fVar9;
  fVar2 = fVar4;
  fVar5 = fVar4;
  fVar8 = fVar4;
  if (SQRT(fVar3) != 0.0) {
    fVar8 = 1.0 / SQRT(fVar3);
    fVar8 = -(fVar3 * fVar8 * fVar8 - 1.0) * fVar8 * 0.5 + fVar8;
    fVar8 = -(fVar3 * fVar8 * fVar8 - 1.0) * fVar8 * 0.5 + fVar8;
    fVar8 = -(fVar3 * fVar8 * fVar8 - 1.0) * fVar8 * 0.5 + fVar8;
    fVar2 = fVar7 * fVar8;
    fVar5 = fVar9 * fVar8;
    fVar8 = fVar1 * fVar8;
  }
  *(float *)((int)fVar6 + 0x84) = fVar5;
  *(float *)((int)fVar6 + 0x88) = fVar8;
  *(float *)((int)fVar6 + 0x80) = fVar2;
  *(undefined4 *)((int)fVar6 + 0x8c) = *(undefined4 *)((int)fVar6 + 0x3c);
  *param_1 = fVar2;
  fVar1 = *(float *)((int)fVar6 + 0x84);
  param_1[1] = fVar1;
  fVar5 = *(float *)((int)fVar6 + 0x88);
  fVar7 = fVar13 * fVar1 - (float)uVar14 * fVar2;
  param_1[2] = fVar5;
  fVar6 = *(float *)((int)fVar6 + 0x8c);
  param_1[0x10] = fVar2;
  fVar8 = (float)uVar14 * fVar5 - (float)uVar15 * fVar1;
  fVar3 = (float)uVar15 * fVar2 - fVar13 * fVar5;
  param_1[3] = fVar6;
  param_1[0x11] = fVar1;
  param_1[0x12] = fVar5;
  param_1[0x13] = fVar6;
  param_1[7] = 0.0;
  fVar9 = fVar7 * fVar7 + fVar8 * fVar8 + fVar3 * fVar3;
  fVar13 = fVar4;
  fVar6 = fVar4;
  if (SQRT(fVar9) != 0.0) {
    fVar13 = 1.0 / SQRT(fVar9);
    fVar13 = -(fVar9 * fVar13 * fVar13 - 1.0) * fVar13 * 0.5 + fVar13;
    fVar13 = -(fVar9 * fVar13 * fVar13 - 1.0) * fVar13 * 0.5 + fVar13;
    fVar13 = -(fVar9 * fVar13 * fVar13 - 1.0) * fVar13 * 0.5 + fVar13;
    fVar4 = fVar8 * fVar13;
    fVar6 = fVar3 * fVar13;
    fVar13 = fVar7 * fVar13;
  }
  param_1[4] = fVar4;
  param_1[5] = fVar6;
  param_1[6] = fVar13;
  param_1[0xb] = 0.0;
  param_1[8] = fVar1 * fVar13 - fVar5 * fVar6;
  param_1[9] = fVar5 * fVar4 - fVar2 * fVar13;
  param_1[10] = fVar2 * fVar6 - fVar1 * fVar4;
  return;
}



//==== 00039fc0  ns=camera::camera13  size=0x2d8
// sig: undefined InitCamera_13(void)
// callers(0): 
// callees(3): 00039c98 camera::camera13::Cam13_00039c98; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt

void camera::camera13::InitCamera_13(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  MobyInstance *pMVar8;
  int iVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  
  pMVar8 = g_heroMobyPtr;
  fVar5 = param_1[0x1c];
  *(undefined4 *)((int)fVar5 + 0x54) = 0x3fc00000;
  *(MobyInstance **)((int)fVar5 + 0x50) = pMVar8;
  dVar16 = 0.0;
  *(undefined4 *)((int)fVar5 + 0x4c) = 0;
  *(undefined4 *)((int)fVar5 + 0x48) = 0;
  *(undefined4 *)((int)fVar5 + 0x44) = 0;
  *(undefined4 *)((int)fVar5 + 0x40) = 0;
  *(float *)((int)fVar5 + 0x30) = g_heroPosition.x;
  puVar6 = (undefined4 *)param_1[0x1c];
  *(float *)((int)fVar5 + 0x34) = g_heroPosition.y;
  *(float *)((int)fVar5 + 0x38) = g_heroPosition.z;
  *(float *)((int)fVar5 + 0x3c) = g_heroPosition.w;
  puVar6[0x18] = 0x40947ae1;
  puVar6[0x19] = 0;
  dVar15 = 0.5;
  puVar6[0x1a] = 0x3f000000;
  puVar6[0x1b] = 0;
  puVar6[4] = 0x3d75c28f;
  puVar6[5] = 0x3e333333;
  puVar6[6] = 0;
  puVar6[3] = 0;
  puVar6[2] = 0;
  puVar6[1] = 0;
  *puVar6 = 0;
  uVar7 = DAT_0096a1c4;
  puVar6[0x2a] = 0;
  puVar6[0x29] = uVar7;
  puVar6[0x28] = 0;
  puVar6[0x24] = 0;
  puVar6[0x25] = 0;
  puVar6[0x26] = 0;
  puVar6[0x27] = 0;
  Cam13_00039c98(param_1);
  *(undefined2 *)((int)param_1 + 0x7e) = 0;
  GameCamera.blender.reqType = '\x02';
  fVar5 = *(float *)((int)GameCamera.pLastUpdCam + 4);
                    /* WARNING: Load size is inaccurate */
  fVar2 = *GameCamera.pLastUpdCam;
  fVar3 = *param_1;
  fVar4 = param_1[1];
  dVar12 = (double)(fVar2 * fVar2 + fVar5 * fVar5);
  dVar10 = dVar16;
  dVar11 = dVar16;
  if ((double)(float)SQRT(dVar12) != dVar16) {
    dVar10 = 1.0 / SQRT(dVar12);
    dVar10 = (double)(float)(-(double)(float)((double)(float)(dVar12 * dVar10) * dVar10 - 1.0) *
                             (double)(float)(dVar15 * dVar10) + dVar10);
    dVar10 = (double)(float)(-(double)(float)((double)(float)(dVar12 * dVar10) * dVar10 - 1.0) *
                             (double)(float)(dVar15 * dVar10) + dVar10);
    fVar1 = (float)(-(double)(float)((double)(float)(dVar12 * dVar10) * dVar10 - 1.0) *
                    (double)(float)(dVar15 * dVar10) + dVar10);
    dVar11 = (double)(fVar2 * fVar1);
    dVar10 = (double)(fVar5 * fVar1);
  }
  dVar13 = (double)(fVar3 * fVar3 + fVar4 * fVar4);
  dVar12 = dVar16;
  dVar14 = dVar16;
  if ((double)(float)SQRT(dVar13) != dVar16) {
    dVar12 = 1.0 / SQRT(dVar13);
    dVar12 = (double)(float)(-(double)(float)((double)(float)(dVar13 * dVar12) * dVar12 - 1.0) *
                             (double)(float)(dVar15 * dVar12) + dVar12);
    dVar12 = (double)(float)(-(double)(float)((double)(float)(dVar13 * dVar12) * dVar12 - 1.0) *
                             (double)(float)(dVar15 * dVar12) + dVar12);
    fVar5 = (float)(-(double)(float)((double)(float)(dVar13 * dVar12) * dVar12 - 1.0) *
                    (double)(float)(dVar15 * dVar12) + dVar12);
    dVar14 = (double)(fVar3 * fVar5);
    dVar12 = (double)(fVar4 * fVar5);
  }
  dVar11 = (double)(float)(dVar14 * dVar11 + (double)(float)(dVar12 * dVar10));
  dVar10 = dVar11;
  if (dVar11 - dVar16 < 0.0) {
    dVar10 = ABS(dVar11);
  }
  dVar12 = (double)(float)(1.0 - dVar10);
  if ((double)(float)(1.0 - dVar10) - dVar16 < 0.0) {
    dVar12 = dVar16;
  }
  fVar5 = animationSpeed * 40.5;
  fVar2 = 1.0;
  if (dVar11 - dVar16 < 0.0) {
    fVar2 = -1.0;
  }
  dVar10 = -(double)(-(((float)((double)(float)(dVar10 * dVar10) * dVar10) * DAT_007358cc +
                       (float)((double)(float)(dVar10 * dVar10) * (double)DAT_007358c8 +
                              (double)(float)(dVar10 * (double)DAT_007358c4 + (double)DAT_007358c0))
                       ) * (float)SQRT(dVar12) - 1.5707964) * fVar2 - 1.5707964);
  dVar11 = (double)(float)(dVar10 * 0.31830987334251404);
  dVar10 = (double)fastfunc::FastIntToDouble(dVar10,(int)(animationSpeed * 50.5));
  iVar9 = fastfunc::FastDoubleToInt((double)(float)(dVar10 * dVar11));
  GameCamera.blender.reqInterpFrames = (int)fVar5 + iVar9;
  return;
}



//==== 0003a298  ns=camera::camera13  size=0xa8
// sig: undefined ???_Cam13_InterpPosToTarget(void)
// callers(0): 
// callees(2): 000394e8 camera::camera13::Cam13_000394e8; 000501e8 camera::Cam_InterpValues

void camera::camera13::____Cam13_InterpPosToTarget(int param_1)

{
  int iVar1;
  float *speed;
  float fVar2;
  float local_20;
  float local_1c;
  float local_18;
  
  iVar1 = *(int *)(param_1 + 0x70);
  speed = (float *)Cam13_000394e8(param_1,&local_20);
  fVar2 = Cam_InterpValues(*(float *)(param_1 + 0x30),local_20,*(float *)(iVar1 + 0x10),
                           *(float *)(iVar1 + 0x14),*(float *)(iVar1 + 0x18),speed);
  *(float *)(param_1 + 0x30) = fVar2;
  fVar2 = Cam_InterpValues(*(float *)(param_1 + 0x34),local_1c,*(float *)(iVar1 + 0x10),
                           *(float *)(iVar1 + 0x14),*(float *)(iVar1 + 0x18),speed);
  *(float *)(param_1 + 0x34) = fVar2;
  fVar2 = Cam_InterpValues(*(float *)(param_1 + 0x38),local_18,*(float *)(iVar1 + 0x10),
                           *(float *)(iVar1 + 0x14),*(float *)(iVar1 + 0x18),speed);
  *(float *)(param_1 + 0x38) = fVar2;
  return;
}



//==== 0003a350  ns=camera::camera13  size=0x278
// sig: undefined Cam13_0003a350(void)
// callers(1): 0003a5e0 camera::camera13::UpdateCamera_13
// callees(0): 

void camera::camera13::Cam13_0003a350(float *param_1)

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
  undefined4 uVar11;
  undefined4 uVar12;
  
  uVar12 = GameCamera.field17_0x1b4._4_4_;
  uVar11 = GameCamera.field17_0x1b4._0_4_;
  fVar6 = GameCamera.field16_0x1b0;
  fVar3 = param_1[0x1c];
  fVar1 = *(float *)((int)fVar3 + 0x80);
  fVar2 = 0.0;
  fVar4 = *(float *)((int)fVar3 + 0x88) * *(float *)((int)fVar3 + 0x88) +
          fVar1 * fVar1 + *(float *)((int)fVar3 + 0x84) * *(float *)((int)fVar3 + 0x84);
  if (SQRT(fVar4) == 0.0) {
    *param_1 = fVar1;
    param_1[1] = *(float *)((int)fVar3 + 0x84);
    param_1[2] = *(float *)((int)fVar3 + 0x88);
    param_1[3] = *(float *)((int)fVar3 + 0x8c);
    param_1[2] = 0.0;
    param_1[1] = 0.0;
    *param_1 = 0.0;
    fVar3 = param_1[3];
    fVar5 = fVar2;
    fVar4 = fVar2;
    fVar1 = fVar2;
  }
  else {
    fVar5 = 1.0 / SQRT(fVar4);
    fVar5 = -(fVar4 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
    fVar5 = -(fVar4 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
    fVar5 = -(fVar4 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
    fVar1 = fVar1 * fVar5;
    *param_1 = fVar1;
    fVar4 = *(float *)((int)fVar3 + 0x84) * fVar5;
    param_1[1] = fVar4;
    fVar5 = *(float *)((int)fVar3 + 0x88) * fVar5;
    param_1[2] = fVar5;
    fVar3 = *(float *)((int)fVar3 + 0x8c);
    param_1[3] = fVar3;
  }
  fVar7 = fVar5 * fVar5 + fVar1 * fVar1 + fVar4 * fVar4;
  if (SQRT(fVar7) == 0.0) {
    param_1[0x10] = *param_1;
    param_1[0x11] = param_1[1];
    fVar3 = param_1[3];
    param_1[0x12] = param_1[2];
    fVar5 = fVar2;
    fVar1 = fVar2;
    fVar4 = fVar2;
  }
  else {
    fVar8 = 1.0 / SQRT(fVar7);
    fVar8 = -(fVar7 * fVar8 * fVar8 - 1.0) * fVar8 * 0.5 + fVar8;
    fVar8 = -(fVar7 * fVar8 * fVar8 - 1.0) * fVar8 * 0.5 + fVar8;
    fVar8 = -(fVar7 * fVar8 * fVar8 - 1.0) * fVar8 * 0.5 + fVar8;
    fVar1 = fVar1 * fVar8;
    fVar5 = fVar5 * fVar8;
    fVar4 = fVar4 * fVar8;
  }
  param_1[0x13] = fVar3;
  param_1[3] = fVar3;
  param_1[0x10] = fVar1;
  param_1[0x11] = fVar4;
  param_1[0x12] = fVar5;
  fVar8 = (float)uVar12 * fVar1 - fVar6 * fVar5;
  fVar9 = (float)uVar11 * fVar5 - (float)uVar12 * fVar4;
  fVar7 = fVar6 * fVar4 - (float)uVar11 * fVar1;
  *param_1 = fVar1;
  param_1[1] = fVar4;
  param_1[2] = fVar5;
  param_1[7] = 0.0;
  fVar10 = fVar7 * fVar7 + fVar9 * fVar9 + fVar8 * fVar8;
  fVar3 = fVar2;
  fVar6 = fVar2;
  if (SQRT(fVar10) != 0.0) {
    fVar6 = 1.0 / SQRT(fVar10);
    fVar6 = -(fVar10 * fVar6 * fVar6 - 1.0) * fVar6 * 0.5 + fVar6;
    fVar6 = -(fVar10 * fVar6 * fVar6 - 1.0) * fVar6 * 0.5 + fVar6;
    fVar6 = -(fVar10 * fVar6 * fVar6 - 1.0) * fVar6 * 0.5 + fVar6;
    fVar2 = fVar9 * fVar6;
    fVar3 = fVar8 * fVar6;
    fVar6 = fVar7 * fVar6;
  }
  param_1[4] = fVar2;
  param_1[5] = fVar3;
  param_1[6] = fVar6;
  param_1[0xb] = 0.0;
  param_1[8] = fVar4 * fVar6 - fVar5 * fVar3;
  param_1[9] = fVar5 * fVar2 - fVar1 * fVar6;
  param_1[10] = fVar1 * fVar3 - fVar4 * fVar2;
  return;
}



//==== 0003a5c8  ns=camera::camera13  size=0x8
// sig: undefined ActivateCamera_13(void)
// callers(0): 
// callees(0): 

undefined8 camera::camera13::ActivateCamera_13(void)

{
  return 0;
}



//==== 0003a5e0  ns=camera::camera13  size=0x208
// sig: undefined UpdateCamera_13(void)
// callers(0): 
// callees(7): 0002bcf8 stub::STUB_0002bcf8; 000392c8 camera::camera13::Cam13_000392c8; 000394e8 camera::camera13::Cam13_000394e8; 000395c0 camera::camera13::Cam13_000395c0; 0003a350 camera::camera13::Cam13_0003a350; 000501e8 camera::Cam_InterpValues; 000543c8 camera::Camera_CollSphereBump

void camera::camera13::UpdateCamera_13(int param_1)

{
  uint uVar1;
  int iVar2;
  float *pfVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  float fVar7;
  float local_50;
  float local_4c;
  float local_48;
  
  uVar1 = *(uint *)(param_1 + 0x70);
  *(float *)(param_1 + 0x30) = DAT_00969e20 + *(float *)(param_1 + 0x30);
  *(float *)(param_1 + 0x34) = DAT_00969e24 + *(float *)(param_1 + 0x34);
  *(float *)(param_1 + 0x38) = DAT_00969e28 + *(float *)(param_1 + 0x38);
  *(undefined4 *)(param_1 + 0x3c) = DAT_00969e2c;
  Cam13_000392c8(param_1);
  pfVar3 = (float *)stub::STUB_0002bcf8(param_1,(ulonglong)uVar1 + 0xb0);
  dVar6 = 0.004999999888241291;
  dVar5 = 0.20000000298023224;
  iVar2 = *(int *)(param_1 + 0x70);
  dVar4 = 0.0;
  fVar7 = Cam_InterpValues(*(float *)(iVar2 + 0x30),g_heroPosition.x,0.005,0.2,0.0,pfVar3);
  *(float *)(iVar2 + 0x30) = fVar7;
  fVar7 = Cam_InterpValues(*(float *)(iVar2 + 0x34),g_heroPosition.y,(float)dVar6,(float)dVar5,
                           (float)dVar4,pfVar3);
  *(float *)(iVar2 + 0x34) = fVar7;
  fVar7 = Cam_InterpValues(*(float *)(iVar2 + 0x38),g_heroPosition.z,(float)dVar6,(float)dVar5,
                           (float)dVar4,pfVar3);
  *(float *)(iVar2 + 0x30) = DAT_00969e20 + *(float *)(iVar2 + 0x30);
  *(float *)(iVar2 + 0x34) = DAT_00969e24 + *(float *)(iVar2 + 0x34);
  *(float *)(iVar2 + 0x38) = DAT_00969e28 + fVar7;
  *(undefined4 *)(iVar2 + 0x3c) = DAT_00969e2c;
  Cam13_000395c0(param_1);
  iVar2 = *(int *)(param_1 + 0x70);
  pfVar3 = (float *)Cam13_000394e8(param_1,&local_50);
  fVar7 = Cam_InterpValues(*(float *)(param_1 + 0x30),local_50,*(float *)(iVar2 + 0x10),
                           *(float *)(iVar2 + 0x14),*(float *)(iVar2 + 0x18),pfVar3);
  *(float *)(param_1 + 0x30) = fVar7;
  fVar7 = Cam_InterpValues(*(float *)(param_1 + 0x34),local_4c,*(float *)(iVar2 + 0x10),
                           *(float *)(iVar2 + 0x14),*(float *)(iVar2 + 0x18),pfVar3);
  *(float *)(param_1 + 0x34) = fVar7;
  fVar7 = Cam_InterpValues(*(float *)(param_1 + 0x38),local_48,*(float *)(iVar2 + 0x10),
                           *(float *)(iVar2 + 0x14),*(float *)(iVar2 + 0x18),pfVar3);
  *(float *)(param_1 + 0x38) = fVar7;
  Cam13_0003a350(param_1);
  Camera_CollSphereBump(0x3fe0000000000000,param_1 + 0x30);
  return;
}



//==== 0003a7e8  ns=camera::camera13  size=0x28
// sig: undefined ExitCamera_13(void)
// callers(0): 
// callees(0): 

void camera::camera13::ExitCamera_13(int param_1)

{
  if (hero::g_HeroRequestedCamType != *(short *)(param_1 + 0x86)) {
    *(undefined2 *)(param_1 + 0x7e) = 3;
  }
  return;
}



//==== 0003a810  ns=Global  size=0x14
// sig: undefined SECTION_HEADER_CAMERA14(void)
// callers(0): 
// callees(0): 

void SECTION_HEADER_CAMERA14(void)

{
  DAT_0071d894 = 0x10000;
  return;
}



//==== 0003a838  ns=camera::camera14  size=0x4a4
// sig: undefined Cam14_0003a838(void)
// callers(1): 0003ace0 camera::camera14::InitCamera_14
// callees(0): 

void camera::camera14::Cam14_0003a838(float *param_1)

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
  
  fVar18 = DAT_00969f78;
  fVar17 = DAT_00969f74;
  fVar11 = hero::g_heroGravityDir;
  fVar16 = g_heroPosition.z;
  fVar15 = g_heroPosition.y;
  fVar10 = g_heroPosition.x;
  fVar7 = param_1[0x1c];
  fVar1 = *(float *)((int)fVar7 + 0xf4);
  fVar2 = *(float *)((int)fVar7 + 0xf0);
  fVar3 = *(float *)((int)fVar7 + 0xf8);
  fVar8 = SQRT(DAT_00969f78 * DAT_00969f78 +
               hero::g_heroGravityDir * hero::g_heroGravityDir + DAT_00969f74 * DAT_00969f74);
  fVar4 = *(float *)((int)fVar7 + 0xe0);
  fVar5 = *(float *)((int)fVar7 + 0xd0);
  fVar6 = 0.0;
  param_1[0xf] = g_heroPosition.w;
  fVar9 = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
  fVar4 = -fVar4 / fVar8;
  fVar14 = -fVar5 / fVar9;
  fVar5 = fVar6;
  if (0.0 - fVar8 < 0.0) {
    fVar5 = fVar11 * fVar4;
  }
  fVar13 = fVar6;
  if (0.0 - fVar8 < 0.0) {
    fVar13 = fVar18 * fVar4;
  }
  fVar12 = fVar6;
  if (0.0 - fVar8 < 0.0) {
    fVar12 = fVar17 * fVar4;
  }
  if (fVar8 - 0.0 < 0.0) {
    fVar5 = fVar11 * fVar4;
  }
  if (fVar8 - 0.0 < 0.0) {
    fVar13 = fVar18 * fVar4;
  }
  if (fVar8 - 0.0 < 0.0) {
    fVar12 = fVar17 * fVar4;
  }
  fVar4 = fVar6;
  if (0.0 - fVar9 < 0.0) {
    fVar4 = fVar3 * fVar14;
  }
  fVar8 = fVar6;
  if (0.0 - fVar9 < 0.0) {
    fVar8 = fVar1 * fVar14;
  }
  fVar11 = fVar6;
  if (0.0 - fVar9 < 0.0) {
    fVar11 = fVar2 * fVar14;
  }
  if (fVar9 - 0.0 < 0.0) {
    fVar4 = fVar3 * fVar14;
  }
  if (fVar9 - 0.0 < 0.0) {
    fVar8 = fVar1 * fVar14;
  }
  if (fVar9 - 0.0 < 0.0) {
    fVar11 = fVar2 * fVar14;
  }
  fVar4 = fVar4 + fVar16 + fVar13;
  fVar8 = fVar8 + fVar15 + fVar12;
  fVar11 = fVar11 + fVar10 + fVar5;
  param_1[0xe] = fVar4;
  param_1[0xd] = fVar8;
  param_1[0xc] = fVar11;
  fVar3 = SQRT(DAT_00969f78 * DAT_00969f78 +
               hero::g_heroGravityDir * hero::g_heroGravityDir + DAT_00969f74 * DAT_00969f74);
  fVar2 = -*(float *)((int)fVar7 + 0xc4) / fVar3;
  fVar1 = fVar6;
  if (0.0 - fVar3 < 0.0) {
    fVar1 = DAT_00969f74 * fVar2;
  }
  fVar5 = fVar6;
  if (0.0 - fVar3 < 0.0) {
    fVar5 = hero::g_heroGravityDir * fVar2;
  }
  fVar9 = fVar6;
  if (0.0 - fVar3 < 0.0) {
    fVar9 = DAT_00969f78 * fVar2;
  }
  if (fVar3 - 0.0 < 0.0) {
    fVar1 = DAT_00969f74 * fVar2;
  }
  if (fVar3 - 0.0 < 0.0) {
    fVar5 = hero::g_heroGravityDir * fVar2;
  }
  if (fVar3 - 0.0 < 0.0) {
    fVar9 = DAT_00969f78 * fVar2;
  }
  fVar8 = (g_heroPosition.y + fVar1) - fVar8;
  fVar11 = (g_heroPosition.x + fVar5) - fVar11;
  fVar4 = (g_heroPosition.z + fVar9) - fVar4;
  fVar5 = fVar4 * fVar4 + fVar11 * fVar11 + fVar8 * fVar8;
  fVar2 = fVar6;
  fVar3 = fVar6;
  fVar1 = fVar6;
  if (SQRT(fVar5) != 0.0) {
    fVar2 = 1.0 / SQRT(fVar5);
    fVar2 = -(fVar5 * fVar2 * fVar2 - 1.0) * fVar2 * 0.5 + fVar2;
    fVar2 = -(fVar5 * fVar2 * fVar2 - 1.0) * fVar2 * 0.5 + fVar2;
    fVar2 = -(fVar5 * fVar2 * fVar2 - 1.0) * fVar2 * 0.5 + fVar2;
    fVar1 = fVar11 * fVar2;
    fVar3 = fVar8 * fVar2;
    fVar2 = fVar4 * fVar2;
  }
  *(float *)((int)fVar7 + 0x10c) = g_heroPosition.w;
  *(float *)((int)fVar7 + 0x100) = fVar1;
  *(float *)((int)fVar7 + 0x104) = fVar3;
  *(float *)((int)fVar7 + 0x108) = fVar2;
  fVar2 = fVar2 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3;
  if (SQRT(fVar2) == 0.0) {
    *param_1 = fVar1;
    param_1[1] = *(float *)((int)fVar7 + 0x104);
    param_1[2] = *(float *)((int)fVar7 + 0x108);
    param_1[3] = *(float *)((int)fVar7 + 0x10c);
    param_1[2] = 0.0;
    param_1[1] = 0.0;
    *param_1 = 0.0;
    fVar2 = param_1[3];
    fVar4 = fVar6;
    fVar1 = fVar6;
    fVar3 = fVar6;
  }
  else {
    fVar4 = 1.0 / SQRT(fVar2);
    fVar4 = -(fVar2 * fVar4 * fVar4 - 1.0) * fVar4 * 0.5 + fVar4;
    fVar4 = -(fVar2 * fVar4 * fVar4 - 1.0) * fVar4 * 0.5 + fVar4;
    fVar4 = -(fVar2 * fVar4 * fVar4 - 1.0) * fVar4 * 0.5 + fVar4;
    fVar1 = fVar1 * fVar4;
    *param_1 = fVar1;
    fVar3 = *(float *)((int)fVar7 + 0x104) * fVar4;
    param_1[1] = fVar3;
    fVar4 = *(float *)((int)fVar7 + 0x108) * fVar4;
    param_1[2] = fVar4;
    fVar2 = *(float *)((int)fVar7 + 0x10c);
    param_1[3] = fVar2;
  }
  fVar5 = fVar4 * fVar4 + fVar1 * fVar1 + fVar3 * fVar3;
  if (SQRT(fVar5) == 0.0) {
    param_1[0x10] = *param_1;
    param_1[0x11] = param_1[1];
    fVar2 = param_1[3];
    param_1[0x12] = param_1[2];
    fVar3 = fVar6;
    fVar4 = fVar6;
    fVar1 = fVar6;
  }
  else {
    fVar7 = 1.0 / SQRT(fVar5);
    fVar7 = -(fVar5 * fVar7 * fVar7 - 1.0) * fVar7 * 0.5 + fVar7;
    fVar7 = -(fVar5 * fVar7 * fVar7 - 1.0) * fVar7 * 0.5 + fVar7;
    fVar7 = -(fVar5 * fVar7 * fVar7 - 1.0) * fVar7 * 0.5 + fVar7;
    fVar3 = fVar3 * fVar7;
    fVar1 = fVar1 * fVar7;
    fVar4 = fVar4 * fVar7;
  }
  param_1[0x10] = fVar1;
  param_1[0x11] = fVar3;
  param_1[0x12] = fVar4;
  param_1[0x13] = fVar2;
  *param_1 = fVar1;
  param_1[1] = fVar3;
  param_1[2] = fVar4;
  param_1[3] = fVar2;
  fVar5 = DAT_00969f78 * fVar1 - hero::g_heroGravityDir * fVar4;
  fVar7 = DAT_00969f74 * fVar4 - DAT_00969f78 * fVar3;
  fVar8 = hero::g_heroGravityDir * fVar3 - DAT_00969f74 * fVar1;
  param_1[7] = 0.0;
  param_1[0xb] = 0.0;
  fVar14 = SQRT(fVar8 * fVar8 + fVar7 * fVar7 + fVar5 * fVar5);
  fVar9 = -1.0 / fVar14;
  fVar2 = fVar6;
  if (0.0 - fVar14 < 0.0) {
    fVar2 = fVar7 * fVar9;
  }
  fVar10 = fVar6;
  if (0.0 - fVar14 < 0.0) {
    fVar10 = fVar5 * fVar9;
  }
  if (0.0 - fVar14 < 0.0) {
    fVar6 = fVar8 * fVar9;
  }
  if (fVar14 - 0.0 < 0.0) {
    fVar2 = fVar7 * fVar9;
  }
  if (fVar14 - 0.0 < 0.0) {
    fVar10 = fVar5 * fVar9;
  }
  if (fVar14 - 0.0 < 0.0) {
    fVar6 = fVar8 * fVar9;
  }
  param_1[4] = fVar2;
  param_1[5] = fVar10;
  param_1[6] = fVar6;
  param_1[10] = fVar1 * fVar10 - fVar3 * fVar2;
  param_1[8] = fVar3 * fVar6 - fVar4 * fVar10;
  param_1[9] = fVar4 * fVar2 - fVar1 * fVar6;
  return;
}



//==== 0003ace0  ns=camera::camera14  size=0x1b8
// sig: undefined InitCamera_14(void)
// callers(0): 
// callees(2): 0003a838 camera::camera14::Cam14_0003a838; 00500b64 fastfunc::FastEulerToMtx

void camera::camera14::InitCamera_14(int param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  MobyInstance *pMVar10;
  undefined8 in_LR;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 local_60 [16];
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  
  iVar2 = *(int *)(param_1 + 0x70);
  auVar11 = ZEXT416(0xffffffff);
  auVar11 = auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60;
  auVar12 = vectorShiftLeftIntegerWord(auVar11,auVar11);
  iVar3 = *(int *)(ImportCameras + (int)((longlong)*(short *)(param_1 + 0x84) << 5) + 0x1c);
  *(undefined4 *)(iVar2 + 0xc4) = 0x3fc00000;
  pMVar10 = g_heroMobyPtr;
  fVar6 = g_heroPosition.x;
  *(float *)(iVar2 + 0xb0) = g_heroPosition.x;
  fVar7 = g_heroPosition.y;
  *(MobyInstance **)(iVar2 + 0xc0) = pMVar10;
  *(float *)(iVar2 + 0xb4) = fVar7;
  fVar8 = g_heroPosition.z;
  pfVar4 = *(float **)(param_1 + 0x70);
  *(float *)(iVar2 + 0xb8) = g_heroPosition.z;
  fVar9 = g_heroPosition.w;
  *(undefined4 *)(iVar2 + 0xbc) = 0;
  fVar1 = *(float *)(iVar3 + 0x20);
  pfVar4[0x36] = fVar1;
  pfVar4[0x34] = fVar1;
  fVar1 = *(float *)(iVar3 + 0x24);
  pfVar4[8] = 0.01;
  pfVar4[0x38] = fVar1;
  pfVar4[9] = 0.2;
  pfVar4[10] = 0.0;
  pfVar4[7] = 0.0;
  pfVar4[6] = 0.0;
  pfVar4[5] = 0.0;
  pfVar4[4] = 0.0;
  *pfVar4 = fVar6;
  pfVar4[1] = fVar7;
  pfVar4[2] = fVar8;
  pfVar4[3] = fVar9;
  auVar11 = loadVectorLeftIndexed(in_LR,0x3acdc);
  auVar13 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
  auVar11 = auVar11 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar11 = vectorMultiplyAddFloatingPoint
                      (auVar13,auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60,auVar12
                      );
  auVar11 = vectorConvertToSignedFixedPointWordSaturate(auVar11,0);
  auVar11 = auVar11 >> 0x60 & (undefined1  [16])0xffffffff;
  uVar5 = storeVectorElementWordIndexed
                    (auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60,0x30,
                     ZEXT48(pfVar4));
  *(undefined4 *)((uint)(pfVar4 + 0xc) & 0xfffffffc) = uVar5;
  pfVar4[0x48] = 0.0;
  pfVar4[0x46] = 0.0;
  pfVar4[0x47] = 0.0;
  pfVar4[0x49] = fVar8;
  pfVar4[0x44] = 0.0;
  pfVar4[0x45] = 0.0;
  fastfunc::FastEulerToMtx(&local_50,local_60);
  pfVar4[0x3c] = local_50;
  pfVar4[0x3d] = local_4c;
  pfVar4[0x3e] = local_48;
  pfVar4[0x3f] = local_44;
  Cam14_0003a838(param_1);
  *(undefined2 *)(param_1 + 0x7e) = 0;
  GameCamera.blender.reqInterpFrames = 0x78;
  return;
}



//==== 0003ae98  ns=stub  size=0x4
// sig: undefined STUB_0003ae98(void)
// callers(0): 
// callees(0): 

void stub::STUB_0003ae98(void)

{
  return;
}



//==== 0003aeb8  ns=camera::camera14  size=0x450
// sig: undefined ???_Cam14_RotateByStick(void)
// callers(0): 
// callees(2): 000501e8 camera::Cam_InterpValues; 001113e0 mobyutil::MB_RotateQuatAxisAngle

void camera::camera14::____Cam14_RotateByStick(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float *outQuat;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  float fVar16;
  
  iVar3 = *(int *)(param_1 + 0x70);
  dVar15 = 0.019999999552965164;
  dVar14 = 0.20000000298023224;
  dVar13 = 0.0;
  outQuat = (float *)(iVar3 + 0xf0);
  fVar16 = Cam_InterpValues(*(float *)(iVar3 + 0x120),ANALOG_STICKS.x,0.02,0.2,0.0,(float *)0x960000
                           );
  *(float *)(iVar3 + 0x120) = fVar16;
  mobyutil::MB_RotateQuatAxisAngle(fVar16 * 0.034906585,outQuat,outQuat);
  fVar16 = *(float *)(iVar3 + 0xf4);
  fVar1 = *(float *)(iVar3 + 0xf0);
  fVar2 = *(float *)(iVar3 + 0xf8);
  fVar4 = fVar2 * fVar2 + fVar1 * fVar1 + fVar16 * fVar16;
  dVar8 = dVar13;
  dVar9 = dVar13;
  dVar11 = dVar13;
  if ((double)SQRT(fVar4) != dVar13) {
    fVar5 = 1.0 / SQRT(fVar4);
    fVar5 = -(fVar4 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
    fVar5 = -(fVar4 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
    fVar5 = -(fVar4 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
    dVar11 = (double)(fVar1 * fVar5);
    dVar9 = (double)(fVar16 * fVar5);
    dVar8 = (double)(fVar2 * fVar5);
  }
  *(float *)(iVar3 + 0xf0) = (float)dVar11;
  *(float *)(iVar3 + 0xf4) = (float)dVar9;
  *(float *)(iVar3 + 0xf8) = (float)dVar8;
  fVar16 = Cam_InterpValues(*(float *)(iVar3 + 0x128),ANALOG_STICKS.y,(float)dVar15,(float)dVar14,
                            (float)dVar13,&ANALOG_STICKS.x);
  *(float *)(iVar3 + 0x128) = fVar16;
  dVar9 = (double)(float)GameCamera.field17_0x1b4._16_4_;
  dVar14 = (double)(float)GameCamera.field17_0x1b4._12_4_;
  dVar15 = (double)(float)GameCamera.field17_0x1b4._20_4_;
  dVar11 = (double)SQRT((float)(dVar15 * dVar15 +
                               (double)(float)(dVar14 * dVar14 + (double)(float)(dVar9 * dVar9))));
  dVar12 = (double)(float)((double)(float)(dVar15 * (double)*(float *)(iVar3 + 0xf8) +
                                          (double)(float)(dVar14 * (double)*(float *)(iVar3 + 0xf0)
                                                         + (double)(float)(dVar9 * (double)*(float *
                                                  )(iVar3 + 0xf4)))) / dVar11);
  dVar8 = dVar13;
  if (dVar13 - dVar11 < 0.0) {
    dVar8 = (double)(float)(dVar15 * dVar12);
  }
  dVar7 = dVar13;
  if (dVar13 - dVar11 < 0.0) {
    dVar7 = (double)(float)(dVar9 * dVar12);
  }
  dVar10 = dVar13;
  if (dVar13 - dVar11 < 0.0) {
    dVar10 = (double)(float)(dVar14 * dVar12);
  }
  if (dVar11 - dVar13 < 0.0) {
    dVar8 = (double)(float)(dVar15 * dVar12);
  }
  if (dVar11 - dVar13 < 0.0) {
    dVar7 = (double)(float)(dVar9 * dVar12);
  }
  if (dVar11 - dVar13 < 0.0) {
    dVar10 = (double)(float)(dVar14 * dVar12);
  }
  *(float *)(iVar3 + 0xf0) = (float)((double)*(float *)(iVar3 + 0xf0) - dVar10);
  *(float *)(iVar3 + 0xf4) = (float)((double)*(float *)(iVar3 + 0xf4) - dVar7);
  *(float *)(iVar3 + 0xf8) = (float)((double)*(float *)(iVar3 + 0xf8) - dVar8);
  mobyutil::MB_RotateQuatAxisAngle(-(fVar16 * DAT_0071d8cc),outQuat,outQuat);
  fVar16 = *(float *)(iVar3 + 0xf4);
  fVar1 = *(float *)(iVar3 + 0xf0);
  fVar2 = *(float *)(iVar3 + 0xf8);
  fVar4 = fVar2 * fVar2 + fVar1 * fVar1 + fVar16 * fVar16;
  dVar8 = dVar13;
  dVar9 = dVar13;
  dVar11 = dVar13;
  if ((double)SQRT(fVar4) != dVar13) {
    fVar5 = 1.0 / SQRT(fVar4);
    fVar5 = -(fVar4 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
    fVar5 = -(fVar4 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
    fVar5 = -(fVar4 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
    dVar11 = (double)(fVar1 * fVar5);
    dVar9 = (double)(fVar16 * fVar5);
    dVar8 = (double)(fVar2 * fVar5);
  }
  *(float *)(iVar3 + 0xf0) = (float)dVar11;
  *(float *)(iVar3 + 0xf4) = (float)dVar9;
  *(float *)(iVar3 + 0xf8) = (float)dVar8;
  fVar4 = g_heroPosition.w;
  fVar16 = g_heroPosition.z;
  fVar2 = g_heroPosition.y;
  fVar1 = g_heroPosition.x;
  if (DAT_00969fec == 0) {
    *(float *)(iVar3 + 0x124) = g_heroPosition.z;
  }
  else {
    fVar16 = *(float *)(iVar3 + 0x124);
  }
  fVar2 = fVar2 - *(float *)(param_1 + 0x34);
  fVar1 = fVar1 - *(float *)(param_1 + 0x30);
  fVar16 = (fVar16 + *(float *)(iVar3 + 0xc4)) - *(float *)(param_1 + 0x38);
  fVar5 = fVar16 * fVar16 + fVar1 * fVar1 + fVar2 * fVar2;
  dVar8 = dVar13;
  dVar9 = dVar13;
  if ((double)SQRT(fVar5) != dVar13) {
    fVar6 = 1.0 / SQRT(fVar5);
    fVar6 = -(fVar5 * fVar6 * fVar6 - 1.0) * fVar6 * 0.5 + fVar6;
    fVar6 = -(fVar5 * fVar6 * fVar6 - 1.0) * fVar6 * 0.5 + fVar6;
    fVar6 = -(fVar5 * fVar6 * fVar6 - 1.0) * fVar6 * 0.5 + fVar6;
    dVar8 = (double)(fVar6 * fVar1);
    dVar13 = (double)(fVar6 * fVar2);
    dVar9 = (double)(fVar6 * fVar16);
  }
  *(float *)(iVar3 + 0x100) = (float)dVar8;
  *(float *)(iVar3 + 0x104) = (float)dVar13;
  *(float *)(iVar3 + 0x108) = (float)dVar9;
  *(float *)(iVar3 + 0x10c) = fVar4;
  return;
}



//==== 0003b310  ns=camera::camera14  size=0x26c
// sig: undefined Cam14_0003b310(void)
// callers(1): 0003b890 camera::camera14::UpdateCamera_14
// callees(1): 000501e8 camera::Cam_InterpValues

void camera::camera14::Cam14_0003b310(int param_1)

{
  float fVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float *speed;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  float fVar13;
  float fVar14;
  
  pfVar2 = *(float **)(param_1 + 0x70);
  if ((hero::g_HeroRequestedCamType != 0x50) || (g_heroState == WALL_JUMP)) {
    pfVar2[0x49] = g_heroPosition.z;
  }
  fVar13 = pfVar2[0x3d];
  fVar1 = pfVar2[0x3c];
  fVar14 = pfVar2[0x3e];
  speed = (float *)&DAT_0003b308;
  fVar3 = SQRT(DAT_00969f78 * DAT_00969f78 +
               hero::g_heroGravityDir * hero::g_heroGravityDir + DAT_00969f74 * DAT_00969f74);
  dVar10 = 0.0;
  fVar4 = SQRT(fVar14 * fVar14 + fVar1 * fVar1 + fVar13 * fVar13);
  fVar5 = -pfVar2[0x38] / fVar3;
  fVar6 = -pfVar2[0x34] / fVar4;
  dVar11 = dVar10;
  if (0.0 - fVar3 < 0.0) {
    dVar11 = (double)(DAT_00969f78 * fVar5);
  }
  dVar12 = dVar10;
  if (0.0 - fVar3 < 0.0) {
    dVar12 = (double)(hero::g_heroGravityDir * fVar5);
  }
  dVar7 = dVar10;
  if (0.0 - fVar3 < 0.0) {
    dVar7 = (double)(DAT_00969f74 * fVar5);
  }
  if (fVar3 - 0.0 < 0.0) {
    dVar11 = (double)(DAT_00969f78 * fVar5);
  }
  if (fVar3 - 0.0 < 0.0) {
    dVar12 = (double)(hero::g_heroGravityDir * fVar5);
  }
  if (fVar3 - 0.0 < 0.0) {
    dVar7 = (double)(DAT_00969f74 * fVar5);
  }
  dVar8 = dVar10;
  if (0.0 - fVar4 < 0.0) {
    dVar8 = (double)(fVar14 * fVar6);
  }
  dVar9 = dVar10;
  if (0.0 - fVar4 < 0.0) {
    dVar9 = (double)(fVar13 * fVar6);
  }
  if (0.0 - fVar4 < 0.0) {
    dVar10 = (double)(fVar1 * fVar6);
  }
  if (fVar4 - 0.0 < 0.0) {
    dVar8 = (double)(fVar14 * fVar6);
  }
  if (fVar4 - 0.0 < 0.0) {
    dVar9 = (double)(fVar13 * fVar6);
  }
  if (fVar4 - 0.0 < 0.0) {
    dVar10 = (double)(fVar1 * fVar6);
  }
  fVar13 = Cam_InterpValues(*pfVar2,g_heroPosition.x,pfVar2[8],pfVar2[9],pfVar2[10],
                            (float *)&DAT_0003b308);
  *pfVar2 = fVar13;
  fVar13 = Cam_InterpValues(pfVar2[1],g_heroPosition.y,pfVar2[8],pfVar2[9],pfVar2[10],speed);
  pfVar2[1] = fVar13;
  fVar14 = Cam_InterpValues(pfVar2[2],pfVar2[0x49],pfVar2[8],pfVar2[9],pfVar2[10],speed);
  fVar13 = *pfVar2;
  fVar1 = pfVar2[1];
  pfVar2[2] = fVar14;
  *(float *)(param_1 + 0x38) = (float)(dVar8 + (double)(float)((double)fVar14 + dVar11));
  *(float *)(param_1 + 0x30) = (float)(dVar10 + (double)(float)((double)fVar13 + dVar12));
  *(float *)(param_1 + 0x34) = (float)(dVar9 + (double)(float)((double)fVar1 + dVar7));
  return;
}



//==== 0003b588  ns=camera::camera14  size=0x2d0
// sig: undefined Cam14_0003b588(void)
// callers(1): 0003b890 camera::camera14::UpdateCamera_14
// callees(1): 000501e8 camera::Cam_InterpValues

void camera::camera14::Cam14_0003b588(float *param_1)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  float fVar18;
  
  pfVar3 = (float *)param_1[0x1c];
  dVar17 = 0.0;
  dVar16 = (double)*pfVar3;
  dVar15 = (double)pfVar3[1];
  dVar14 = (double)pfVar3[2];
  fVar18 = Cam_InterpValues(pfVar3[0x2e],g_heroPosition.z,DAT_0071d8d0,DAT_0071d8d4,0.0,
                            (float *)&DAT_00720000);
  pfVar3[0x2e] = fVar18;
  fVar2 = (float)GameCamera.field17_0x1b4._24_4_;
  dVar13 = (double)SQRT((float)GameCamera.field17_0x1b4._20_4_ *
                        (float)GameCamera.field17_0x1b4._20_4_ +
                        (float)GameCamera.field17_0x1b4._12_4_ *
                        (float)GameCamera.field17_0x1b4._12_4_ +
                        (float)GameCamera.field17_0x1b4._16_4_ *
                        (float)GameCamera.field17_0x1b4._16_4_);
  dVar7 = (double)(float)GameCamera.field17_0x1b4._0_4_;
  dVar8 = (double)(float)GameCamera.field17_0x1b4._4_4_;
  dVar9 = (double)GameCamera.field16_0x1b0;
  fVar18 = (float)((double)pfVar3[0x31] / dVar13);
  dVar12 = dVar17;
  if (dVar17 - dVar13 < 0.0) {
    dVar12 = (double)((float)GameCamera.field17_0x1b4._16_4_ * fVar18);
  }
  dVar10 = dVar17;
  if (dVar17 - dVar13 < 0.0) {
    dVar10 = (double)((float)GameCamera.field17_0x1b4._12_4_ * fVar18);
  }
  dVar11 = dVar17;
  if (dVar17 - dVar13 < 0.0) {
    dVar11 = (double)((float)GameCamera.field17_0x1b4._20_4_ * fVar18);
  }
  if (dVar13 - dVar17 < 0.0) {
    dVar12 = (double)((float)GameCamera.field17_0x1b4._16_4_ * fVar18);
  }
  if (dVar13 - dVar17 < 0.0) {
    dVar10 = (double)((float)GameCamera.field17_0x1b4._12_4_ * fVar18);
  }
  if (dVar13 - dVar17 < 0.0) {
    dVar11 = (double)((float)GameCamera.field17_0x1b4._20_4_ * fVar18);
  }
  fVar18 = (float)(dVar15 + dVar12) - param_1[0xd];
  fVar1 = (float)(dVar16 + dVar10) - param_1[0xc];
  fVar4 = (float)(dVar14 + dVar11) - param_1[0xe];
  fVar5 = fVar4 * fVar4 + fVar1 * fVar1 + fVar18 * fVar18;
  if ((double)SQRT(fVar5) == dVar17) {
    param_1[3] = (float)GameCamera.field17_0x1b4._24_4_;
    *param_1 = fVar1;
    param_1[1] = fVar18;
    param_1[2] = fVar4;
    fVar2 = param_1[3];
    dVar12 = dVar17;
    dVar13 = dVar17;
    dVar14 = dVar17;
  }
  else {
    fVar6 = 1.0 / SQRT(fVar5);
    param_1[3] = (float)GameCamera.field17_0x1b4._24_4_;
    fVar6 = -(fVar5 * fVar6 * fVar6 - 1.0) * fVar6 * 0.5 + fVar6;
    fVar6 = -(fVar5 * fVar6 * fVar6 - 1.0) * fVar6 * 0.5 + fVar6;
    fVar6 = -(fVar5 * fVar6 * fVar6 - 1.0) * fVar6 * 0.5 + fVar6;
    dVar14 = (double)(fVar1 * fVar6);
    dVar13 = (double)(fVar18 * fVar6);
    dVar12 = (double)(fVar4 * fVar6);
  }
  param_1[0x13] = fVar2;
  *param_1 = (float)dVar14;
  param_1[1] = (float)dVar13;
  param_1[2] = (float)dVar12;
  param_1[0x10] = (float)dVar14;
  fVar18 = (float)(dVar8 * dVar14 - (double)(float)(dVar9 * dVar12));
  fVar2 = (float)(dVar7 * dVar12 - (double)(float)(dVar8 * dVar13));
  fVar1 = (float)(dVar9 * dVar13 - (double)(float)(dVar7 * dVar14));
  param_1[0x11] = (float)dVar13;
  param_1[0x12] = (float)dVar12;
  param_1[7] = 0.0;
  fVar4 = fVar1 * fVar1 + fVar2 * fVar2 + fVar18 * fVar18;
  dVar7 = dVar17;
  dVar8 = dVar17;
  if ((double)SQRT(fVar4) != dVar17) {
    fVar5 = 1.0 / SQRT(fVar4);
    fVar5 = -(fVar4 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
    fVar5 = -(fVar4 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
    fVar5 = -(fVar4 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
    dVar7 = (double)(fVar2 * fVar5);
    dVar17 = (double)(fVar18 * fVar5);
    dVar8 = (double)(fVar1 * fVar5);
  }
  param_1[4] = (float)dVar7;
  param_1[5] = (float)dVar17;
  param_1[6] = (float)dVar8;
  param_1[0xb] = 0.0;
  param_1[8] = (float)(dVar13 * dVar8 - (double)(float)(dVar12 * dVar17));
  param_1[9] = (float)(dVar12 * dVar7 - (double)(float)(dVar14 * dVar8));
  param_1[10] = (float)(dVar14 * dVar17 - (double)(float)(dVar13 * dVar7));
  return;
}



//==== 0003b858  ns=camera::camera14  size=0x38
// sig: undefined ActivateCamera_14(void)
// callers(0): 
// callees(0): 

undefined8 camera::camera14::ActivateCamera_14(void)

{
  undefined8 uVar1;
  
  if (((hero::g_HeroRequestedCamType == 0x50) && (g_heroState != WALL_JUMP)) ||
     (g_heroState == NEUTRAL_JUMP)) {
    uVar1 = 0xffffffffffffffff;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



//==== 0003b890  ns=camera::camera14  size=0x34
// sig: undefined UpdateCamera_14(void)
// callers(0): 
// callees(2): 0003b310 camera::camera14::Cam14_0003b310; 0003b588 camera::camera14::Cam14_0003b588

void camera::camera14::UpdateCamera_14(undefined8 param_1)

{
  Cam14_0003b310();
  Cam14_0003b588(param_1);
  return;
}



//==== 0003b8c4  ns=camera::camera14  size=0x78
// sig: undefined ExitCamera_14(void)
// callers(0): 
// callees(1): 00110b70 mobyutil::MB_IsPntInCuboid

void camera::camera14::ExitCamera_14(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(ImportCameras + (int)((longlong)*(short *)(param_1 + 0x84) << 5) + 0x1c)
                  + 0xc);
  if ((-1 < iVar1) &&
     (iVar1 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)iVar1), iVar1 == 0)) {
    *(undefined2 *)(param_1 + 0x7e) = 3;
  }
  return;
}



//==== 0003b93c  ns=Global  size=0x14
// sig: undefined SECTION_HEADER_CAMERA15(void)
// callers(0): 
// callees(0): 

void SECTION_HEADER_CAMERA15(void)

{
  DAT_0071d924 = 0x10000;
  return;
}



//==== 0003b950  ns=camera::camera15  size=0x170
// sig: undefined Cam15_0003b950(void)
// callers(1): 0003c53c camera::camera15::ActivateCamera_15
// callees(0): 

void camera::camera15::Cam15_0003b950(int param_1)

{
  Spline *pSVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  int iVar8;
  Spline *pSVar9;
  
  iVar5 = *(int *)(ImportCameras + (int)((longlong)*(short *)(param_1 + 0x84) << 5) + 0x1c);
  if (*(short *)(iVar5 + 0x28) == 0) {
    *(undefined2 *)(iVar5 + 0x28) = 1;
    if (-1 < *(int *)(iVar5 + 0x20)) {
      iVar8 = 0;
      pSVar1 = Splines[*(int *)(iVar5 + 0x20)];
      iVar6 = pSVar1->cnt;
      pSVar9 = pSVar1;
      if (0 < iVar6) {
        do {
          iVar8 = iVar8 + 1;
          pfVar7 = (float *)((int)pSVar1 + ((iVar8 - (iVar8 / iVar6) * iVar6) * 4 + 4) * 4);
          fVar2 = pSVar9->points[0].y - pfVar7[1];
          fVar3 = pSVar9->points[0].x - *pfVar7;
          fVar4 = pSVar9->points[0].z - pfVar7[2];
          pSVar9->points[0].w = SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
          iVar6 = pSVar1->cnt;
          pSVar9 = (Spline *)pSVar9->points;
        } while (iVar8 < iVar6);
      }
    }
    if (-1 < *(int *)(iVar5 + 0x24)) {
      iVar6 = 0;
      pSVar1 = Splines[*(int *)(iVar5 + 0x24)];
      iVar5 = pSVar1->cnt;
      pSVar9 = pSVar1;
      if (0 < iVar5) {
        do {
          iVar6 = iVar6 + 1;
          pfVar7 = (float *)((int)pSVar1 + ((iVar6 - (iVar6 / iVar5) * iVar5) * 4 + 4) * 4);
          fVar2 = pSVar9->points[0].y - pfVar7[1];
          fVar3 = pSVar9->points[0].x - *pfVar7;
          fVar4 = pSVar9->points[0].z - pfVar7[2];
          pSVar9->points[0].w = SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
          iVar5 = pSVar1->cnt;
          pSVar9 = (Spline *)pSVar9->points;
        } while (iVar6 < iVar5);
      }
    }
  }
  return;
}



//==== 0003bad8  ns=camera::camera15  size=0x2bc
// sig: undefined Cam15_0003bad8(void)
// callers(1): 0003bd94 camera::camera15::InitCamera_15
// callees(2): 0010ce18 mobyutil::MB_PathMoveDist; 0010d7a0 mobyutil::MB_PathFollowToPos

void camera::camera15::Cam15_0003bad8(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  Spline *pSVar6;
  float fVar7;
  float fVar8;
  undefined8 in_r8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined1 local_50 [16];
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  
  iVar5 = *(int *)(ImportCameras + (int)((longlong)*(short *)(param_1 + 0x21) << 5) + 0x1c);
  dVar16 = 0.0;
  pSVar6 = Splines[*(int *)(iVar5 + 0x20)];
  mobyutil::MB_PathFollowToPos
            (0x406fe00000000000,(double)DAT_0071d948,0,pSVar6,&g_heroPosition,local_50,local_40,
             local_3c,in_r8,0);
  mobyutil::MB_PathMoveDist((double)*(float *)(iVar5 + 0x34),pSVar6,param_1 + 0xc,local_40,local_3c)
  ;
  fVar4 = g_heroPosition.w;
  fVar1 = g_heroPosition.y - param_1[0xd];
  fVar2 = g_heroPosition.x - param_1[0xc];
  fVar7 = (g_heroPosition.z + *(float *)(iVar5 + 0x18)) - param_1[0xe];
  fVar3 = fVar7 * fVar7 + fVar2 * fVar2 + fVar1 * fVar1;
  if ((double)SQRT(fVar3) == dVar16) {
    *param_1 = fVar2;
    param_1[3] = fVar4;
    param_1[1] = fVar1;
    param_1[2] = fVar7;
    fVar4 = param_1[3];
    dVar9 = dVar16;
    dVar10 = dVar16;
    dVar11 = dVar16;
  }
  else {
    fVar8 = 1.0 / SQRT(fVar3);
    param_1[3] = g_heroPosition.w;
    fVar8 = -(fVar3 * fVar8 * fVar8 - 1.0) * fVar8 * 0.5 + fVar8;
    fVar8 = -(fVar3 * fVar8 * fVar8 - 1.0) * fVar8 * 0.5 + fVar8;
    fVar8 = -(fVar3 * fVar8 * fVar8 - 1.0) * fVar8 * 0.5 + fVar8;
    dVar9 = (double)(fVar2 * fVar8);
    dVar10 = (double)(fVar1 * fVar8);
    dVar11 = (double)(fVar7 * fVar8);
  }
  *param_1 = (float)dVar9;
  param_1[1] = (float)dVar10;
  param_1[2] = (float)dVar11;
  param_1[0x10] = (float)dVar9;
  param_1[0x11] = (float)dVar10;
  param_1[0x12] = (float)dVar11;
  param_1[0x13] = fVar4;
  fVar1 = (float)((double)DAT_00969f78 * dVar9 -
                 (double)(float)((double)hero::g_heroGravityDir * dVar11));
  fVar2 = (float)((double)DAT_00969f74 * dVar11 - (double)(float)((double)DAT_00969f78 * dVar10));
  fVar3 = (float)((double)hero::g_heroGravityDir * dVar10 -
                 (double)(float)((double)DAT_00969f74 * dVar9));
  param_1[7] = 0.0;
  param_1[0xb] = 0.0;
  dVar15 = (double)SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
  fVar4 = (float)(-1.0 / dVar15);
  dVar14 = dVar16;
  if (dVar16 - dVar15 < 0.0) {
    dVar14 = (double)(fVar2 * fVar4);
  }
  dVar13 = dVar16;
  if (dVar16 - dVar15 < 0.0) {
    dVar13 = (double)(fVar1 * fVar4);
  }
  dVar12 = dVar16;
  if (dVar16 - dVar15 < 0.0) {
    dVar12 = (double)(fVar3 * fVar4);
  }
  if (dVar15 - dVar16 < 0.0) {
    dVar14 = (double)(fVar2 * fVar4);
  }
  if (dVar15 - dVar16 < 0.0) {
    dVar13 = (double)(fVar1 * fVar4);
  }
  if (dVar15 - dVar16 < 0.0) {
    dVar12 = (double)(fVar3 * fVar4);
  }
  param_1[4] = (float)dVar14;
  param_1[5] = (float)dVar13;
  param_1[6] = (float)dVar12;
  param_1[10] = (float)(dVar9 * dVar13 - (double)(float)(dVar10 * dVar14));
  param_1[8] = (float)(dVar10 * dVar12 - (double)(float)(dVar11 * dVar13));
  param_1[9] = (float)(dVar11 * dVar14 - (double)(float)(dVar9 * dVar12));
  return;
}



//==== 0003bd94  ns=camera::camera15  size=0x114
// sig: undefined InitCamera_15(void)
// callers(0): 
// callees(1): 0003bad8 camera::camera15::Cam15_0003bad8

void camera::camera15::InitCamera_15(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  float fVar3;
  
  puVar1 = *(undefined4 **)(param_1 + 0x70);
  puVar1[0x11] = 0x3fc00000;
  puVar1[0xc] = g_heroPosition.x;
  puVar1[0xd] = g_heroPosition.y;
  fVar3 = g_heroPosition.z;
  puVar1[0xf] = 0;
  puVar1[0xe] = fVar3;
  puVar1[0x14] = 0xc0947ae1;
  puVar1[0x15] = 0;
  puVar1[0x16] = 0;
  puVar1[0x17] = 0;
  puVar1[4] = 0x3c23d70a;
  puVar1[5] = 0x3e333333;
  puVar1[6] = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[9] = 0x3c23d70a;
  puVar1[10] = 0x3e99999a;
  puVar1[0xb] = 0;
  puVar1[8] = 0;
  puVar1[0x24] = 0;
  puVar1[0x26] = 0;
  Cam15_0003bad8(param_1);
  iVar2 = *(int *)(ImportCameras + (int)((longlong)*(short *)(param_1 + 0x84) << 5) + 0x1c);
  *(float *)(iVar2 + 0x3c) = g_heroPosition.z;
  fVar3 = g_heroPosition.z;
  *(undefined2 *)(iVar2 + 0x2a) = 0;
  *(float *)(iVar2 + 0x2c) = fVar3;
  *(undefined4 *)(iVar2 + 0x30) = 0;
  *(undefined2 *)(param_1 + 0x7e) = 0;
  return;
}



//==== 0003bef0  ns=camera::camera15  size=0x64c
// sig: undefined Cam15_0003bef0(void)
// callers(1): 0003c688 camera::camera15::UpdateCamera_15
// callees(5): 000501e8 camera::Cam_InterpValues; 00050288 camera::Cam_InterpAngles; 0010ce18 mobyutil::MB_PathMoveDist; 0010d7a0 mobyutil::MB_PathFollowToPos; 001113e0 mobyutil::MB_RotateQuatAxisAngle

void camera::camera15::Cam15_0003bef0(float *param_1)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  Spline *pSVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float *speed;
  undefined8 in_r8;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined8 uVar18;
  double dVar19;
  undefined8 uVar20;
  double dVar21;
  float fVar22;
  float fVar23;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  undefined1 local_60 [4];
  undefined1 local_5c [4];
  
  fVar23 = param_1[0x1c];
  pfVar3 = *(float **)(ImportCameras + (int)((longlong)*(short *)(param_1 + 0x21) << 5) + 0x1c);
  dVar21 = 0.0;
  fVar22 = pfVar3[9];
  pSVar4 = Splines[(int)pfVar3[8]];
  if ((int)fVar22 < 0) {
    mobyutil::MB_PathFollowToPos
              (0x406fe00000000000,(double)DAT_0071d948,0,pSVar4,(int)fVar23 + 0x30,&local_70,
               local_60,local_5c,in_r8,0);
  }
  else {
    mobyutil::MB_PathFollowToPos
              (0x406fe00000000000,(double)DAT_0071d948,0,Splines[(int)fVar22],(int)fVar23 + 0x30,
               &local_70,local_60,local_5c,(int)fVar22 * 4,0);
  }
  mobyutil::MB_PathMoveDist((double)pfVar3[0xd],pSVar4,&local_70,local_60,local_5c);
  speed = (float *)&DAT_0003bea8;
  dVar19 = (double)local_6c;
  dVar17 = (double)local_68;
  dVar15 = 0.009999999776482582;
  dVar14 = 0.17499999701976776;
  fVar22 = Cam_InterpValues(param_1[0xc],local_70,0.01,0.175,(float)dVar21,(float *)&DAT_0003bea8);
  param_1[0xc] = fVar22;
  fVar22 = Cam_InterpValues(param_1[0xd],(float)dVar19,(float)dVar15,(float)dVar14,(float)dVar21,
                            speed);
  param_1[0xd] = fVar22;
  fVar22 = Cam_InterpValues(param_1[0xe],(float)dVar17,(float)dVar15,(float)dVar14,(float)dVar21,
                            speed);
  param_1[0xe] = fVar22;
  fVar22 = *(float *)((int)fVar23 + 0x30);
  fVar2 = *(float *)((int)fVar23 + 0x34);
  if (*(short *)((int)pfVar3 + 0x2a) == 0) {
    if (g_framesGroundedCnt == 0) {
      fVar23 = pfVar3[0xf];
    }
    else {
      fVar23 = *(float *)((int)fVar23 + 0x38);
      pfVar3[0xf] = fVar23;
      *(undefined2 *)((int)pfVar3 + 0x2a) = 1;
    }
  }
  else {
    fVar23 = pfVar3[0xf];
  }
  uVar20 = 0x3f747ae140000000;
  uVar18 = 0x3fc99999a0000000;
  fVar23 = Cam_InterpValues(pfVar3[0xb],fVar23 + pfVar3[6],0.005,0.2,(float)dVar21,
                            (float *)&DAT_0003bea8);
  pfVar3[0xb] = fVar23;
  fVar2 = fVar2 - param_1[0xd];
  fVar22 = fVar22 - param_1[0xc];
  fVar23 = fVar23 - param_1[0xe];
  fVar1 = fVar23 * fVar23 + fVar22 * fVar22 + fVar2 * fVar2;
  if ((double)SQRT(fVar1) == dVar21) {
    *param_1 = fVar22;
    param_1[3] = local_64;
    param_1[1] = fVar2;
    param_1[2] = fVar23;
    local_64 = param_1[3];
    dVar14 = dVar21;
    dVar15 = dVar21;
    dVar17 = dVar21;
  }
  else {
    fVar5 = 1.0 / SQRT(fVar1);
    param_1[3] = local_64;
    fVar5 = -(fVar1 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
    fVar5 = -(fVar1 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
    fVar5 = -(fVar1 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
    dVar17 = (double)(fVar22 * fVar5);
    dVar15 = (double)(fVar2 * fVar5);
    dVar14 = (double)(fVar23 * fVar5);
  }
  *param_1 = (float)dVar17;
  param_1[1] = (float)dVar15;
  param_1[2] = (float)dVar14;
  param_1[0x10] = (float)dVar17;
  param_1[0x11] = (float)dVar15;
  param_1[0x12] = (float)dVar14;
  param_1[0x13] = local_64;
  fVar22 = (float)((double)DAT_00969f78 * dVar17 -
                  (double)(float)((double)hero::g_heroGravityDir * dVar14));
  fVar2 = (float)((double)DAT_00969f74 * dVar14 - (double)(float)((double)DAT_00969f78 * dVar15));
  fVar1 = (float)((double)hero::g_heroGravityDir * dVar15 -
                 (double)(float)((double)DAT_00969f74 * dVar17));
  param_1[7] = 0.0;
  dVar16 = -1.0;
  param_1[0xb] = 0.0;
  dVar13 = (double)SQRT(fVar1 * fVar1 + fVar2 * fVar2 + fVar22 * fVar22);
  fVar23 = (float)(-1.0 / dVar13);
  dVar19 = dVar21;
  if (dVar21 - dVar13 < 0.0) {
    dVar19 = (double)(fVar2 * fVar23);
  }
  dVar12 = dVar21;
  if (dVar21 - dVar13 < 0.0) {
    dVar12 = (double)(fVar22 * fVar23);
  }
  dVar11 = dVar21;
  if (dVar21 - dVar13 < 0.0) {
    dVar11 = (double)(fVar1 * fVar23);
  }
  if (dVar13 - dVar21 < 0.0) {
    dVar19 = (double)(fVar2 * fVar23);
  }
  if (dVar13 - dVar21 < 0.0) {
    dVar12 = (double)(fVar22 * fVar23);
  }
  if (dVar13 - dVar21 < 0.0) {
    dVar11 = (double)(fVar1 * fVar23);
  }
  param_1[4] = (float)dVar19;
  param_1[5] = (float)dVar12;
  param_1[6] = (float)dVar11;
  fVar23 = (float)(dVar19 * dVar19 + (double)(float)(dVar12 * dVar12));
  param_1[10] = (float)(dVar17 * dVar12 - (double)(float)(dVar15 * dVar19));
  param_1[8] = (float)(dVar15 * dVar11 - (double)(float)(dVar14 * dVar12));
  param_1[9] = (float)(dVar14 * dVar19 - (double)(float)(dVar17 * dVar11));
  fVar22 = g_heroRotation.z + 1.5707963;
  fVar2 = 3.1415925 - g_heroRotation.z;
  if (g_heroRotation.z - (3.1415925 - g_heroRotation.z) < 0.0) {
    fVar2 = g_heroRotation.z;
  }
  fVar1 = 3.1415925 - fVar22;
  if (fVar22 - (3.1415925 - fVar22) < 0.0) {
    fVar1 = fVar22;
  }
  fVar5 = -3.1415925 - g_heroRotation.z;
  if ((-3.1415925 - g_heroRotation.z) - fVar2 < 0.0) {
    fVar5 = fVar2;
  }
  fVar2 = -3.1415925 - fVar22;
  if ((-3.1415925 - fVar22) - fVar1 < 0.0) {
    fVar2 = fVar1;
  }
  fVar22 = fVar5 * fVar5;
  fVar1 = fVar2 * fVar2;
  fVar9 = fVar22 * fVar22 * fVar5;
  fVar7 = fVar1 * fVar1 * fVar2;
  fVar10 = fVar22 * fVar9;
  fVar8 = fVar1 * fVar7;
  dVar14 = dVar21;
  dVar15 = dVar21;
  if ((double)SQRT(fVar23) != dVar21) {
    fVar6 = 1.0 / SQRT(fVar23);
    fVar6 = -(fVar23 * fVar6 * fVar6 - 1.0) * fVar6 * 0.5 + fVar6;
    fVar6 = -(fVar23 * fVar6 * fVar6 - 1.0) * fVar6 * 0.5 + fVar6;
    dVar15 = (double)(-(fVar23 * fVar6 * fVar6 - 1.0) * fVar6 * 0.5 + fVar6);
    dVar14 = (double)(float)(dVar19 * dVar15);
    dVar15 = (double)(float)(dVar12 * dVar15);
  }
  fVar23 = param_1[0x1c];
  dVar14 = (double)Cam_InterpAngles((double)*(float *)((int)fVar23 + 0x90),
                                    (double)(*pfVar3 * 0.017453292 *
                                            (float)(dVar14 * (double)(fVar1 * fVar8 * 2.601887e-06 +
                                                                     fVar8 * -0.0001980741 +
                                                                     fVar7 * 0.0083330255 +
                                                                     fVar1 * fVar2 * -0.16666657 +
                                                                     fVar2) +
                                                   (double)(float)(dVar15 * (double)(fVar22 * fVar10
                                                                                     * 2.601887e-06
                                                                                    + fVar10 * 
                                                  -0.0001980741 +
                                                  fVar9 * 0.0083330255 +
                                                  fVar22 * fVar5 * -0.16666657 + fVar5)))),uVar20,
                                    uVar18,dVar21,&DAT_0003bea8,0,(int)fVar23 + 0x98);
  *(float *)((int)fVar23 + 0x90) = (float)dVar14;
  mobyutil::MB_RotateQuatAxisAngle((float)dVar14,param_1,param_1);
  dVar15 = (double)param_1[2];
  dVar17 = (double)param_1[1];
  dVar19 = (double)*param_1;
  fVar22 = (float)((double)DAT_00969f78 * dVar19 -
                  (double)(float)((double)hero::g_heroGravityDir * dVar15));
  fVar2 = (float)((double)DAT_00969f74 * dVar15 - (double)(float)((double)DAT_00969f78 * dVar17));
  fVar1 = (float)((double)hero::g_heroGravityDir * dVar17 -
                 (double)(float)((double)DAT_00969f74 * dVar19));
  param_1[7] = 0.0;
  param_1[0xb] = 0.0;
  dVar13 = (double)SQRT(fVar1 * fVar1 + fVar2 * fVar2 + fVar22 * fVar22);
  fVar23 = (float)(dVar16 / dVar13);
  dVar14 = dVar21;
  if (dVar21 - dVar13 < 0.0) {
    dVar14 = (double)(fVar2 * fVar23);
  }
  dVar16 = dVar21;
  if (dVar21 - dVar13 < 0.0) {
    dVar16 = (double)(fVar22 * fVar23);
  }
  dVar12 = dVar21;
  if (dVar21 - dVar13 < 0.0) {
    dVar12 = (double)(fVar1 * fVar23);
  }
  if (dVar13 - dVar21 < 0.0) {
    dVar14 = (double)(fVar2 * fVar23);
  }
  if (dVar13 - dVar21 < 0.0) {
    dVar16 = (double)(fVar22 * fVar23);
  }
  if (dVar13 - dVar21 < 0.0) {
    dVar12 = (double)(fVar1 * fVar23);
  }
  param_1[4] = (float)dVar14;
  param_1[5] = (float)dVar16;
  param_1[6] = (float)dVar12;
  param_1[10] = (float)(dVar19 * dVar16 - (double)(float)(dVar17 * dVar14));
  param_1[8] = (float)(dVar17 * dVar12 - (double)(float)(dVar15 * dVar16));
  param_1[9] = (float)(dVar15 * dVar14 - (double)(float)(dVar19 * dVar12));
  return;
}



//==== 0003c53c  ns=camera::camera15  size=0x14c
// sig: undefined ActivateCamera_15(Vec4 * point, undefined4 area)
// callers(0): 
// callees(5): 0003b950 camera::camera15::Cam15_0003b950; 00104e44 mobyutil::PointInsideComplexPoly; 00110b70 mobyutil::MB_IsPntInCuboid; 00110c60 mobyutil::MB_IsPntInCylinder; 00110d48 mobyutil::MB_IsPntInSphere

undefined8 camera::camera15::ActivateCamera_15(Vec4 *point,int area)

{
  int iVar2;
  int iVar3;
  undefined8 uVar1;
  
  iVar3 = *(int *)(ImportCameras + (int)((longlong)*(short *)&point[8].y << 5) + 0x1c);
  if (((area != 0) && (*(short *)(area + 0x7e) == 0)) &&
     (*(byte *)&point[7].w <= *(byte *)(area + 0x7c))) {
    return 0;
  }
  Cam15_0003b950();
  if (((((*(int *)(iVar3 + 0xc) < 0) ||
        (iVar2 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)*(int *)(iVar3 + 0xc)),
        iVar2 == 0)) &&
       ((*(int *)(iVar3 + 0x10) < 0 ||
        (iVar2 = mobyutil::MB_IsPntInCylinder(&g_heroPosition,(longlong)*(int *)(iVar3 + 0x10)),
        iVar2 == 0)))) &&
      ((*(int *)(iVar3 + 8) < 0 ||
       (iVar2 = mobyutil::MB_IsPntInSphere(&g_heroPosition,(longlong)*(int *)(iVar3 + 8)),
       iVar2 == 0)))) &&
     ((*(int *)(iVar3 + 0x14) < 0 ||
      (iVar3 = mobyutil::PointInsideComplexPoly
                         (&g_heroPosition,(Vec4 *)Splines[*(int *)(iVar3 + 0x14)]->points,
                          Splines[*(int *)(iVar3 + 0x14)]->cnt), iVar3 == 0)))) {
    uVar1 = 0xffffffffffffffff;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



//==== 0003c688  ns=camera::camera15  size=0x78
// sig: undefined UpdateCamera_15(void)
// callers(0): 
// callees(1): 0003bef0 camera::camera15::Cam15_0003bef0

void camera::camera15::UpdateCamera_15(int param_1)

{
  int iVar1;
  int iVar2;
  float fVar3;
  
  iVar1 = *(int *)(param_1 + 0x70);
  iVar2 = *(int *)(ImportCameras + (int)((longlong)*(short *)(param_1 + 0x84) << 5) + 0x1c);
  *(float *)(iVar1 + 0x30) = g_heroPosition.x;
  *(float *)(iVar1 + 0x34) = g_heroPosition.y;
  fVar3 = g_heroPosition.z;
  *(float *)(iVar1 + 0x38) = g_heroPosition.z;
  *(float *)(iVar1 + 0x3c) = g_heroPosition.w;
  *(float *)(iVar1 + 0x38) = fVar3 + *(float *)(iVar2 + 0x18);
  Cam15_0003bef0();
  return;
}



//==== 0003c700  ns=camera::camera15  size=0x118
// sig: undefined ExitCamera_15(void)
// callers(0): 
// callees(4): 00104e44 mobyutil::PointInsideComplexPoly; 00110b70 mobyutil::MB_IsPntInCuboid; 00110c60 mobyutil::MB_IsPntInCylinder; 00110d48 mobyutil::MB_IsPntInSphere

void camera::camera15::ExitCamera_15(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(ImportCameras + (int)((longlong)*(short *)(param_1 + 0x84) << 5) + 0x1c);
  if (((((-1 < *(int *)(iVar2 + 0xc)) &&
        (iVar1 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)*(int *)(iVar2 + 0xc)),
        iVar1 == 0)) ||
       ((-1 < *(int *)(iVar2 + 0x10) &&
        (iVar1 = mobyutil::MB_IsPntInCylinder(&g_heroPosition,(longlong)*(int *)(iVar2 + 0x10)),
        iVar1 == 0)))) ||
      ((-1 < *(int *)(iVar2 + 8) &&
       (iVar1 = mobyutil::MB_IsPntInSphere(&g_heroPosition,(longlong)*(int *)(iVar2 + 8)),
       iVar1 == 0)))) ||
     ((-1 < *(int *)(iVar2 + 0x14) &&
      (iVar2 = mobyutil::PointInsideComplexPoly
                         (&g_heroPosition,(Vec4 *)Splines[*(int *)(iVar2 + 0x14)]->points,
                          Splines[*(int *)(iVar2 + 0x14)]->cnt), iVar2 == 0)))) {
    *(undefined2 *)(param_1 + 0x7e) = 3;
  }
  return;
}



//==== 0003c818  ns=Global  size=0x14
// sig: undefined SECTION_HEADER_UNKNOWN(void)
// callers(0): 
// callees(0): 

void SECTION_HEADER_UNKNOWN(void)

{
  DAT_0071d9a0 = 0x10000;
  return;
}



//==== 0003c830  ns=camera::camera16  size=0x6c
// sig: undefined Cam16_AreMobyGroupDead(void)
// callers(0): 
// callees(0): 

undefined8 camera::camera16::Cam16_AreMobyGroupDead(longlong param_1)

{
  ushort uVar1;
  ushort *puVar2;
  
  puVar2 = *(ushort **)((int)&mobyutil::g_MobyGroups + (int)(param_1 << 2));
  if (puVar2 != (ushort *)0x0) {
    do {
      if (MobyInstance[*puVar2 & 0x7fff].state < 0x80) {
        return 0;
      }
      uVar1 = *puVar2;
      puVar2 = puVar2 + 1;
    } while (-1 < (short)uVar1);
  }
  return 1;
}



//==== 0003c89c  ns=camera::camera16  size=0xc0
// sig: void Cam16_InitSplineSegLens(UpdateCam * pCam)
// callers(1): 0003d26c camera::camera16::ActivateCamera_16
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void camera::camera16::Cam16_InitSplineSegLens(UpdateCam *pCam)

{
  int iVar1;
  Spline *pSVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  float *pfVar7;
  int iVar8;
  Spline *pSVar9;
  
  iVar8 = 0;
  iVar1 = *(int *)(ImportCameras + (int)((longlong)pCam->importCameraIdx << 5) + 0x1c);
  pSVar2 = Splines[*(int *)(iVar1 + 0x14)];
  iVar6 = pSVar2->cnt;
  pSVar9 = pSVar2;
  if (0 < iVar6) {
    do {
      iVar8 = iVar8 + 1;
      pfVar7 = (float *)((int)pSVar2 + ((iVar8 - (iVar8 / iVar6) * iVar6) * 4 + 4) * 4);
      fVar3 = pSVar9->points[0].y - pfVar7[1];
      fVar4 = pSVar9->points[0].x - *pfVar7;
      fVar5 = pSVar9->points[0].z - pfVar7[2];
      iVar6 = pSVar2->cnt;
      pSVar9->points[0].w = SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3);
      pSVar9 = (Spline *)pSVar9->points;
    } while (iVar8 < iVar6);
  }
  *(undefined4 *)(iVar1 + 0x30) = 0;
  return;
}



//==== 0003c95c  ns=camera::camera16  size=0xd4
// sig: int Cam16_IsHeroInVolume(UpdateCam * pCam)
// callers(0): 
// callees(3): 00110b70 mobyutil::MB_IsPntInCuboid; 00110c60 mobyutil::MB_IsPntInCylinder; 00110d48 mobyutil::MB_IsPntInSphere

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int camera::camera16::Cam16_IsHeroInVolume(UpdateCam *pCam)

{
  int iVar1;
  
  iVar1 = *(int *)(ImportCameras + (int)((longlong)pCam->importCameraIdx << 5) + 0x1c);
  if (*(int *)(iVar1 + 0xc) < 0) {
    if (*(int *)(iVar1 + 0x10) < 0) {
      if (*(int *)(iVar1 + 8) < 0) {
        return 0;
      }
      iVar1 = mobyutil::MB_IsPntInSphere(&g_heroPosition,(longlong)*(int *)(iVar1 + 8));
    }
    else {
      iVar1 = mobyutil::MB_IsPntInCylinder(&g_heroPosition,(longlong)*(int *)(iVar1 + 0x10));
    }
  }
  else {
    iVar1 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)*(int *)(iVar1 + 0xc));
  }
  if (iVar1 == 0) {
    return 0;
  }
  return 1;
}



//==== 0003ca68  ns=camera::camera16  size=0x804
// sig: void Cam16_ModifyFollowCam(UpdateCam * pCam)
// callers(1): 0003d26c camera::camera16::ActivateCamera_16
// callees(18): 0002e354 camera0::Cam0_SetCamHeight; 0002eff8 camera0::Cam0_SetCPosGainDamp; 0002f03c camera0::Cam0_disableLOS; 0002f064 camera0::Cam0_SetCamPull; 0002f31c camera0::Cam0_ForceLookAtPos; 0002f3b0 camera0::Cam0_RunningAtCamOff; 0002f3d8 camera0::Cam0_SetCamDist; 00032bd4 camera0::Cam0_ClearModCamera; 00032c24 camera0::Cam0_SetModCamera; 000fec94 mobyutil::MB_catmullRom; 0010ce18 mobyutil::MB_PathMoveDist; 0010d7a0 mobyutil::MB_PathFollowToPos; 00110b70 mobyutil::MB_IsPntInCuboid; 00110c60 mobyutil::MB_IsPntInCylinder; 00110d48 mobyutil::MB_IsPntInSphere; 004fff60 fastfunc::FastDecTimerS32; 005026a0 fastfunc::FastSubRots; 00502730 fastfunc::FastIntToDouble

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void camera::camera16::Cam16_ModifyFollowCam(UpdateCam *pCam)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  short sVar6;
  ushort uVar7;
  float *pfVar8;
  Spline *pSVar9;
  undefined4 uVar10;
  ulonglong *puVar11;
  float fVar12;
  int iVar13;
  ulonglong uVar14;
  int iVar17;
  ushort *puVar18;
  longlong lVar15;
  longlong lVar16;
  longlong lVar19;
  float *pfVar20;
  ulonglong uVar21;
  longlong lVar22;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  ulonglong in_f29;
  double dVar27;
  ulonglong in_f30;
  double dVar28;
  ulonglong in_f31;
  double dVar29;
  double dVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  
  uVar14 = ZEXT48(&stack0x00000000);
  lVar16 = uVar14 - 0x130;
  puVar11 = (ulonglong *)lVar16;
  *puVar11 = uVar14;
  puVar11[0x28] = in_LR;
  puVar11[0x23] = in_f29;
  puVar11[0x24] = in_f30;
  puVar11[0x25] = in_f31;
  puVar11[0x22] = unaff_r31;
  iVar17 = ImportCameras;
  sVar6 = pCam->importCameraIdx;
  puVar11[0x20] = unaff_r29;
  puVar11[0x21] = unaff_r30;
  puVar11[0x1f] = unaff_r28;
  puVar11[0x1e] = unaff_r27;
  pfVar8 = *(float **)(iVar17 + (int)((longlong)sVar6 << 5) + 0x1c);
  iVar17 = camera0::Cam0_SetModCamera();
  if (iVar17 < 1) {
    pfVar8[0xc] = 0.0;
    pfVar8[9] = 1.4013e-45;
    return;
  }
  if (-1 < (int)pfVar8[0xf]) {
    puVar18 = (ushort *)(&mobyutil::g_MobyGroups)[(int)pfVar8[0xf]];
    if (puVar18 != (ushort *)0x0) {
      do {
        if (MobyInstance[*puVar18 & 0x7fff].state < 0x80) goto LAB_0003cb54;
        uVar7 = *puVar18;
        puVar18 = puVar18 + 1;
      } while (-1 < (short)uVar7);
    }
    pfVar8[9] = -NAN;
    camera0::Cam0_ClearModCamera(pCam);
    return;
  }
LAB_0003cb54:
  iVar17 = *(int *)(ImportCameras + (int)((longlong)pCam->importCameraIdx << 5) + 0x1c);
  if (*(int *)(iVar17 + 0xc) < 0) {
    if (*(int *)(iVar17 + 0x10) < 0) {
      if (*(int *)(iVar17 + 8) < 0) goto LAB_0003cbf4;
      iVar17 = mobyutil::MB_IsPntInSphere(&g_heroPosition,(longlong)*(int *)(iVar17 + 8));
    }
    else {
      iVar17 = mobyutil::MB_IsPntInCylinder(&g_heroPosition,(longlong)*(int *)(iVar17 + 0x10));
    }
  }
  else {
    iVar17 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)*(int *)(iVar17 + 0xc));
  }
  if (iVar17 != 0) {
    if ((0x3e99999a < (uint)ABS(ANALOG_STICKS.x)) || (0x3e99999a < (uint)ABS(ANALOG_STICKS.y))) {
      camera0::Cam0_ClearModCamera(pCam);
      auVar31 = ZEXT416(0xffffffff);
      auVar31 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
      auVar32 = vectorShiftLeftIntegerWord(auVar31,auVar31);
      auVar31 = loadVectorLeftIndexed(in_LR,0x3ca30);
      auVar33 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar31 = auVar31 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar31 = vectorMultiplyAddFloatingPoint
                          (auVar33,auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60,
                           auVar32);
      auVar31 = vectorConvertToSignedFixedPointWordSaturate(auVar31,0);
      auVar31 = auVar31 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar10 = storeVectorElementWordIndexed
                         (auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60,0x30,
                          ZEXT48(pfVar8));
      *(undefined4 *)((uint)(pfVar8 + 0xc) & 0xfffffffc) = uVar10;
      pfVar8[9] = 1.4013e-45;
      return;
    }
    iVar17 = fastfunc::FastDecTimerS32(ZEXT48(pfVar8) + 0x30);
    if (iVar17 == 0) {
      camera0::Cam0_ClearModCamera(pCam);
      pfVar8[9] = 1.4013e-45;
      return;
    }
    *(undefined4 *)(puVar11 + 0x14) = 0;
    dVar27 = 0.0;
    *(undefined4 *)((int)puVar11 + 0xa4) = 0;
    pSVar9 = Splines[(int)pfVar8[5]];
    iVar17 = mobyutil::MB_PathFollowToPos
                       (0x4034000000000000,0x4014000000000000,0,pSVar9,&g_heroPosition,uVar14 - 0xb0
                        ,uVar14 - 0x90,uVar14 - 0x8c);
    if (iVar17 == 0) {
      camera0::Cam0_ClearModCamera(pCam);
      return;
    }
    fVar1 = g_heroPosition.y - *(float *)((int)puVar11 + 0x84);
    if (pfVar8[8] <
        SQRT((g_heroPosition.x - *(float *)(puVar11 + 0x10)) *
             (g_heroPosition.x - *(float *)(puVar11 + 0x10)) + fVar1 * fVar1)) {
      camera0::Cam0_ClearModCamera(pCam);
      return;
    }
    iVar17 = *(int *)(puVar11 + 0x14);
    fVar1 = pSVar9->points[iVar17].y;
    fVar2 = pSVar9->points[iVar17].x;
    fVar5 = fVar1 - GameCamera.posY;
    fVar3 = fVar2 - GameCamera.posX;
    fVar4 = fVar3 * fVar3 + fVar5 * fVar5;
    dVar25 = dVar27;
    dVar26 = dVar27;
    if ((double)SQRT(fVar4) != dVar27) {
      fVar12 = 1.0 / SQRT(fVar4);
      fVar12 = -(fVar4 * fVar12 * fVar12 - 1.0) * fVar12 * 0.5 + fVar12;
      fVar12 = -(fVar4 * fVar12 * fVar12 - 1.0) * fVar12 * 0.5 + fVar12;
      fVar12 = -(fVar4 * fVar12 * fVar12 - 1.0) * fVar12 * 0.5 + fVar12;
      dVar25 = (double)(fVar3 * fVar12);
      dVar26 = (double)(fVar5 * fVar12);
    }
    fVar1 = pSVar9->points[iVar17 + 1].y - fVar1;
    fVar2 = pSVar9->points[iVar17 + 1].x - fVar2;
    fVar5 = fVar2 * fVar2 + fVar1 * fVar1;
    dVar24 = dVar27;
    dVar29 = dVar27;
    if ((double)SQRT(fVar5) != dVar27) {
      fVar3 = 1.0 / SQRT(fVar5);
      fVar3 = -(fVar5 * fVar3 * fVar3 - 1.0) * fVar3 * 0.5 + fVar3;
      fVar3 = -(fVar5 * fVar3 * fVar3 - 1.0) * fVar3 * 0.5 + fVar3;
      fVar3 = -(fVar5 * fVar3 * fVar3 - 1.0) * fVar3 * 0.5 + fVar3;
      dVar29 = (double)(fVar2 * fVar3);
      dVar24 = (double)(fVar1 * fVar3);
    }
    dVar30 = 1.0;
    dVar28 = dVar30;
    if ((double)(float)(dVar29 * dVar25 + (double)(float)(dVar24 * dVar26)) - dVar27 < 0.0) {
      dVar28 = -1.0;
    }
    mobyutil::MB_PathMoveDist
              ((double)(float)((double)pfVar8[10] * dVar28),pSVar9,uVar14 - 0xa0,uVar14 - 0x90,
               uVar14 - 0x8c);
    fVar1 = *(float *)((int)puVar11 + 0x94) - g_heroPosition.y;
    if (SQRT((*(float *)(puVar11 + 0x12) - g_heroPosition.x) *
             (*(float *)(puVar11 + 0x12) - g_heroPosition.x) + fVar1 * fVar1) < pfVar8[10] - 0.5) {
      pfVar8[9] = 1.4013e-45;
      return;
    }
    puVar11[0x1b] = (longlong)(int)(animationSpeed * 240.5);
    dVar26 = (double)fastfunc::FastIntToDouble(*(undefined4 *)((int)puVar11 + 0xdc));
    dVar25 = (double)fastfunc::FastIntToDouble(pfVar8[9]);
    if (dVar26 - dVar25 < 0.0) {
      dVar25 = dVar26;
    }
    dVar26 = (double)mobyutil::MB_catmullRom
                               (dVar30,dVar27,dVar30,dVar27,(double)(float)(dVar25 / dVar26));
    fVar1 = *pfVar8;
    fVar2 = *(float *)((int)puVar11 + 0x94) - GameCamera.posY;
    dVar24 = ABS((double)(*(float *)(puVar11 + 0x12) - GameCamera.posX));
    dVar29 = ABS((double)fVar2);
    *(float *)(puVar11 + 0x15) = *(float *)(puVar11 + 0x12) - GameCamera.posX;
    *(float *)((int)puVar11 + 0xac) = fVar2;
    dVar28 = (double)(float)((double)fVar1 * dVar26);
    *(float *)(puVar11 + 0x16) = (float)(dVar24 - dVar29);
    fVar1 = GameCamera.rot.radius;
    uVar21 = (ulonglong)(*(uint *)(puVar11 + 0x15) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar11 + 0x16) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar11 + 0xac) >> 0x1d) & 4;
    dVar25 = ABS((double)*(float *)(puVar11 + 0x15));
    if ((double)*(float *)(puVar11 + 0x16) - dVar27 < 0.0) {
      dVar25 = dVar29;
    }
    fVar5 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar21 << 2));
    fVar2 = *(float *)(((uint)(uVar21 << 2) | 0x735900) + 4);
    dVar29 = ABS((double)*(float *)((int)puVar11 + 0xac));
    if ((double)*(float *)(puVar11 + 0x16) - dVar27 < 0.0) {
      dVar29 = dVar24;
    }
    dVar24 = dVar27;
    if (dVar27 < dVar25) {
      lVar15 = uVar14 - 0x120;
      lVar19 = uVar14 - 0x7c;
      lVar22 = uVar14 - 0x6c;
      lVar23 = 2;
      fVar3 = (float)(dVar29 - dVar25) / (float)(dVar29 + dVar25);
      fVar4 = fVar3 * fVar3;
      *(float *)(puVar11 + 0x18) = fVar3;
      *(float *)(puVar11 + 0x17) = fVar3;
      *(float *)((int)puVar11 + 0xbc) = fVar3;
      *(float *)((int)puVar11 + 0xb4) = fVar3;
      fVar3 = fVar4 * fVar4;
      *(float *)(puVar11 + 0x17) = *(float *)(puVar11 + 0x17) * fVar4;
      *(float *)((int)puVar11 + 0xbc) = *(float *)((int)puVar11 + 0xbc) * fVar3;
      *(float *)(puVar11 + 0x18) = *(float *)(puVar11 + 0x18) * fVar3 * fVar4;
      do {
        *(float *)((int)lVar15 + 0xb4) = *(float *)((int)lVar15 + 0xa4) * fVar3 * fVar3;
        iVar17 = (int)lVar19;
        lVar15 = lVar15 + 8;
        lVar19 = lVar19 + 8;
        *(float *)((int)lVar22 + 4) = *(float *)(iVar17 + 4) * fVar3 * fVar3;
        lVar22 = lVar22 + 8;
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
      lVar23 = 4;
      lVar22 = uVar14 - 0x7c;
      pfVar20 = (float *)&DAT_007358e0;
      lVar15 = lVar16;
      lVar19 = lVar22;
      do {
        fVar3 = *pfVar20;
        fVar4 = pfVar20[1];
        pfVar20 = pfVar20 + 2;
        *(float *)((int)lVar15 + 0xb4) = *(float *)((int)lVar15 + 0xb4) * fVar3;
        lVar15 = lVar15 + 8;
        *(float *)((int)lVar19 + 4) = *(float *)((int)lVar19 + 4) * fVar4;
        lVar19 = lVar19 + 8;
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
      lVar15 = 2;
      dVar25 = dVar27;
      do {
        iVar17 = (int)lVar16;
        lVar16 = lVar16 + 0x10;
        iVar13 = (int)lVar22;
        lVar22 = lVar22 + 0x10;
        dVar25 = (double)((float)(dVar25 + (double)*(float *)(iVar17 + 0xb4)) +
                          *(float *)(iVar13 + 4) + *(float *)(iVar13 + 8) + *(float *)(iVar13 + 0xc)
                         );
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
      dVar24 = (double)((float)(dVar25 + 0.7853981852531433) * fVar5 + fVar2);
    }
    dVar25 = (double)fastfunc::FastSubRots((float)dVar24,fVar1);
    if ((double)(pfVar8[0xb] * 0.017453292) < dVar25) {
      pfVar8[9] = 1.4013e-45;
    }
    else {
      camera0::Cam0_ForceLookAtPos
                ((double)(float)(dVar28 * 0.01745329238474369),dVar27,uVar14 - 0xa0);
    }
    if (pfVar8[0xd] != 0.0) {
      camera0::Cam0_SetCamDist((double)pfVar8[0xd],0x3f60624de0000000,&DAT_0003ca30,0);
    }
    if (pfVar8[0xe] != 0.0) {
      camera0::Cam0_SetCamHeight((double)pfVar8[0xe],0x3f60624de0000000);
    }
    camera0::Cam0_SetCamPull(0);
    camera0::Cam0_RunningAtCamOff();
    camera0::Cam0_disableLOS();
    camera0::Cam0_SetCPosGainDamp
              ((double)(float)(dVar26 * 0.02499999850988388 + 0.004999999888241291),
               0x3fc99999a0000000);
    pfVar8[9] = (float)((int)pfVar8[9] + 1);
    return;
  }
LAB_0003cbf4:
  camera0::Cam0_ClearModCamera(pCam);
  pfVar8[0xc] = 0.0;
  pfVar8[9] = 1.4013e-45;
  return;
}



//==== 0003d26c  ns=camera::camera16  size=0xa0
// sig: int ActivateCamera_16(UpdateCam * pCam, UpdateCam * pCurr)
// callers(0): 
// callees(2): 0003c89c camera::camera16::Cam16_InitSplineSegLens; 0003ca68 camera::camera16::Cam16_ModifyFollowCam

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int camera::camera16::ActivateCamera_16(UpdateCam *pCam,UpdateCam *pCurr)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(ImportCameras + (int)((longlong)pCam->importCameraIdx << 5) + 0x1c);
  iVar2 = *(int *)(iVar1 + 0x24);
  if (iVar2 != -1) {
    if (iVar2 == 0) {
      Cam16_InitSplineSegLens(pCam);
      *(undefined4 *)(iVar1 + 0x24) = 1;
    }
    if (*(short *)((int)GameCamera.pCurrentUpdCam + 0x86) == 0) {
      Cam16_ModifyFollowCam(pCam);
    }
  }
  return -1;
}



//==== 0003d30c  ns=stub  size=0x4
// sig: undefined STUB_0003d30c(void)
// callers(0): 
// callees(0): 

void stub::STUB_0003d30c(void)

{
  return;
}



//==== 0003d310  ns=stub  size=0x4
// sig: undefined STUB_0003d310(void)
// callers(0): 
// callees(0): 

void stub::STUB_0003d310(void)

{
  return;
}



//==== 0003d314  ns=stub  size=0x4
// sig: undefined STUB_0003d314(void)
// callers(0): 
// callees(0): 

void stub::STUB_0003d314(void)

{
  return;
}



//==== 0003d318  ns=Global  size=0x14
// sig: undefined SECTION_HEADER_CAMERA_UNK(void)
// callers(0): 
// callees(0): 

void SECTION_HEADER_CAMERA_UNK(void)

{
  DAT_0071da10 = 0x10000;
  return;
}



//==== 0003d330  ns=camera::camera17  size=0x230
// sig: int Cam17_IsHeroInVolume(UpdateCam * pCam)
// callers(1): 0003d5b0 camera::camera17::Cam17_ModifyFollowCam
// callees(4): 00104e44 mobyutil::PointInsideComplexPoly; 00110b70 mobyutil::MB_IsPntInCuboid; 00110c60 mobyutil::MB_IsPntInCylinder; 00110d48 mobyutil::MB_IsPntInSphere

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int camera::camera17::Cam17_IsHeroInVolume(UpdateCam *pCam)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  bVar1 = false;
  iVar3 = *(int *)(ImportCameras + (int)((longlong)pCam->importCameraIdx << 5) + 0x1c);
  if (*(short *)((int)GameCamera.pCurrentUpdCam + 0x86) == 0) {
    if (((*(short *)(iVar3 + 0x2c) == 2) && (hero::g_heroStateType == 0x1a)) &&
       (0 < *(short *)(iVar3 + 0x2e))) {
      bVar1 = true;
    }
    else if (((*(short *)(iVar3 + 0x2c) == 4) && (hero::g_HeroRequestedCamType == 3)) &&
            (0 < *(short *)(iVar3 + 0x2e))) {
      bVar1 = true;
    }
    if ((*(int *)(iVar3 + 0xc) < 0) ||
       ((!bVar1 &&
        (iVar2 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)*(int *)(iVar3 + 0xc)),
        iVar2 == 0)))) {
      if ((*(int *)(iVar3 + 0x4c) < 0) ||
         ((!bVar1 &&
          (iVar2 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)*(int *)(iVar3 + 0x4c)),
          iVar2 == 0)))) {
        if ((*(int *)(iVar3 + 0x10) < 0) ||
           ((!bVar1 &&
            (iVar2 = mobyutil::MB_IsPntInCylinder(&g_heroPosition,(longlong)*(int *)(iVar3 + 0x10)),
            iVar2 == 0)))) {
          if ((*(int *)(iVar3 + 8) < 0) ||
             ((!bVar1 &&
              (iVar2 = mobyutil::MB_IsPntInSphere(&g_heroPosition,(longlong)*(int *)(iVar3 + 8)),
              iVar2 == 0)))) {
            if ((*(int *)(iVar3 + 0x14) < 0) ||
               ((!bVar1 &&
                (iVar3 = mobyutil::PointInsideComplexPoly
                                   (&g_heroPosition,(Vec4 *)Splines[*(int *)(iVar3 + 0x14)]->points,
                                    Splines[*(int *)(iVar3 + 0x14)]->cnt), iVar3 == 0)))) {
              iVar3 = 0;
            }
            else {
              iVar3 = 1;
            }
          }
          else {
            iVar3 = 1;
          }
        }
        else {
          iVar3 = 1;
        }
      }
      else {
        iVar3 = 1;
      }
    }
    else {
      iVar3 = 1;
    }
  }
  else {
    iVar3 = 0;
  }
  return iVar3;
}



//==== 0003d5b0  ns=camera::camera17  size=0xbb0
// sig: void Cam17_ModifyFollowCam(UpdateCam * pCam)
// callers(1): 0003e160 camera::camera17::ActivateCamera_17
// callees(17): 0002e354 camera0::Cam0_SetCamHeight; 0002eff8 camera0::Cam0_SetCPosGainDamp; 0002f03c camera0::Cam0_disableLOS; 0002f064 camera0::Cam0_SetCamPull; 0002f3b0 camera0::Cam0_RunningAtCamOff; 0002f3d8 camera0::Cam0_SetCamDist; 0002f414 camera0::Cam0_SetCamOfsZ; 0002f470 camera0::Cam0_ForceLookAtDir; 00032bd4 camera0::Cam0_ClearModCamera; 00032c24 camera0::Cam0_SetModCamera; 00032ccc camera0::Cam0_SetRunAtCamDist; 00032cf0 camera0::Cam0_ForceElv; 00032d18 camera0::Cam0_SetPitchGainDamp; 00032dd0 camera0::Cam0_DisableUserCam; 0003d330 camera::camera17::Cam17_IsHeroInVolume; 005026a0 fastfunc::FastSubRots; 00502730 fastfunc::FastIntToDouble

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void camera::camera17::Cam17_ModifyFollowCam(UpdateCam *pCam)

{
  bool bVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  ushort uVar7;
  float *pfVar8;
  undefined4 *puVar9;
  undefined2 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  void *pvVar15;
  int iVar16;
  short sVar18;
  uint uVar17;
  ulonglong uVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 local_70 [56];
  
  pfVar8 = *(float **)(ImportCameras + (int)((longlong)pCam->importCameraIdx << 5) + 0x1c);
  uVar19 = ZEXT48(pfVar8);
  if (((*(short *)(pfVar8 + 0xb) != 8) ||
      (*(int *)(*(int *)((int)GameCamera.pCurrentUpdCam + 0x70) + 0x230) != 0)) &&
     ((*(short *)(pfVar8 + 0xb) != 6 ||
      (*(int *)(*(int *)((int)GameCamera.pCurrentUpdCam + 0x70) + 0x230) == 0)))) {
    iVar16 = Cam17_IsHeroInVolume(pCam);
    if (iVar16 == 0) {
      if (*(short *)((int)pfVar8 + 0x2e) != 0) {
        *(undefined2 *)((int)pfVar8 + 0x4a) = 1;
      }
      *(undefined2 *)((int)pfVar8 + 0x2e) = 0;
      camera0::Cam0_ClearModCamera(pCam);
    }
    else {
      iVar16 = camera0::Cam0_SetModCamera(pCam);
      if (iVar16 < 1) {
        if (*(short *)((int)pfVar8 + 0x2e) != 0) {
          *(undefined2 *)((int)pfVar8 + 0x4a) = 1;
        }
        *(undefined2 *)((int)pfVar8 + 0x2e) = 0;
      }
      else if ((*(short *)((int)pfVar8 + 0x36) == 0) ||
              (dVar20 = (double)fastfunc::FastSubRots
                                          (*(float *)(ImportCameras +
                                                      (int)((longlong)pCam->importCameraIdx << 5) +
                                                     0x18),GameCamera.rot.radius),
              dVar20 < 1.3962633609771729)) {
        pvVar15 = GameCamera.pCurrentUpdCam;
        if ((*(short *)(pfVar8 + 0x12) == 0) ||
           ((*(short *)(pfVar8 + 0xb) != 5 || ((g_downButtons & (L1|L2)) == 0)))) {
          bVar1 = *(short *)((int)pfVar8 + 0x2e) == 0;
          if (bVar1) {
            pfVar8[0x10] = *(float *)(*(int *)((int)GameCamera.pCurrentUpdCam + 0x70) + 0x11c);
            pfVar8[0x11] = *(float *)(*(int *)((int)pvVar15 + 0x70) + 0x120);
          }
          if ((*(short *)(pfVar8 + 0xb) == 5) && (bVar1)) {
            fVar3 = 0.0;
            *pfVar8 = 0.0;
            pvVar15 = GameCamera.pCurrentUpdCam;
            puVar9 = *(undefined4 **)((int)GameCamera.pCurrentUpdCam + 0x70);
            fVar4 = (float)puVar9[0x4d];
            fVar5 = (float)puVar9[0x4c];
            fVar6 = (float)puVar9[0x4e];
            fVar14 = SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4);
            fVar13 = pfVar8[9] / fVar14;
            fVar12 = fVar3;
            if (0.0 - fVar14 < 0.0) {
              fVar12 = fVar5 * fVar13;
            }
            fVar11 = fVar3;
            if (0.0 - fVar14 < 0.0) {
              fVar11 = fVar4 * fVar13;
            }
            if (0.0 - fVar14 < 0.0) {
              fVar3 = fVar6 * fVar13;
            }
            if (fVar14 - 0.0 < 0.0) {
              fVar12 = fVar5 * fVar13;
            }
            if (fVar14 - 0.0 < 0.0) {
              fVar11 = fVar4 * fVar13;
            }
            if (fVar14 - 0.0 < 0.0) {
              fVar3 = fVar6 * fVar13;
            }
            puVar9[0x4c] = fVar12;
            puVar9[0x4d] = fVar11;
            puVar9[0x4e] = fVar3;
            puVar9[0x57] = pfVar8[9];
            fVar4 = pfVar8[10];
            puVar9[0x58] = fVar4;
            fVar5 = pfVar8[0xc];
            puVar9[0x50] = fVar12;
            puVar9[0x3c] = fVar5;
            puVar9[0x51] = fVar11;
            puVar9[0x52] = fVar3;
            puVar9[0x53] = puVar9[0x4f];
            fVar3 = fVar4 * DAT_00969f74;
            fVar5 = fVar4 * DAT_00969f78;
            fVar4 = g_heroPosition.x + -(fVar4 * hero::g_heroGravityDir);
            puVar9[0x24] = fVar4;
            puVar9[0x25] = g_heroPosition.y + -fVar3;
            puVar9[0x26] = g_heroPosition.z + -fVar5;
            puVar9[0x27] = g_heroPosition.w;
            *(float *)((int)pvVar15 + 0x30) = fVar4 + fVar12;
            *(float *)((int)pvVar15 + 0x34) = (float)puVar9[0x25] + (float)puVar9[0x4d];
            *(float *)((int)pvVar15 + 0x38) = (float)puVar9[0x26] + (float)puVar9[0x4e];
            *(undefined4 *)((int)pvVar15 + 0x3c) = puVar9[0x27];
            fVar12 = g_heroPosition.x;
            fVar3 = (float)puVar9[0x3c];
            fVar4 = fVar3 * DAT_00969f74;
            fVar5 = fVar3 * DAT_00969f78;
            fVar6 = g_heroPosition.x + -(fVar3 * hero::g_heroGravityDir);
            puVar9[0x20] = fVar6;
            fVar13 = g_heroPosition.y;
            fVar4 = g_heroPosition.y + -fVar4;
            puVar9[0x21] = fVar4;
            fVar14 = g_heroPosition.z;
            fVar5 = g_heroPosition.z + -fVar5;
            puVar9[0x22] = fVar5;
            fVar11 = g_heroPosition.w;
            puVar9[0x34] = fVar6;
            puVar9[0x23] = fVar11;
            puVar9[0x35] = fVar4;
            puVar9[0x36] = fVar5;
            puVar9[0x37] = fVar11;
            puVar9[0x10] = fVar12;
            puVar9[0x11] = fVar13;
            puVar9[0x12] = fVar14;
            puVar9[0x13] = fVar11;
            puVar9[0x28] = fVar12;
            puVar9[0x29] = fVar13;
            puVar9[0x2a] = fVar14;
            puVar9[0x2b] = fVar11;
            *puVar9 = *(undefined4 *)((int)pvVar15 + 0x30);
            puVar9[1] = *(undefined4 *)((int)pvVar15 + 0x34);
            puVar9[2] = *(undefined4 *)((int)pvVar15 + 0x38);
            puVar9[3] = *(undefined4 *)((int)pvVar15 + 0x3c);
            puVar9[0x7c] = *(undefined4 *)((int)pvVar15 + 0x30);
            puVar9[0x7d] = *(undefined4 *)((int)pvVar15 + 0x34);
            puVar9[0x7e] = *(undefined4 *)((int)pvVar15 + 0x38);
            puVar9[0x7f] = *(undefined4 *)((int)pvVar15 + 0x3c);
            puVar9[0x80] = (float)puVar9[0x57] -
                           SQRT((float)puVar9[0x4e] * (float)puVar9[0x4e] +
                                (float)puVar9[0x4c] * (float)puVar9[0x4c] +
                                (float)puVar9[0x4d] * (float)puVar9[0x4d]);
            puVar9[0xd] = 0;
            puVar9[9] = fVar3;
            puVar9[10] = puVar9[0x58];
            puVar9[0xe] = 0;
            puVar9[0xc] = 0;
            puVar9[0xb] = 0;
          }
          dVar22 = 200.5;
          auVar25 = loadVectorLeftIndexed(8,0x3d560);
          auVar25 = auVar25 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar25 = auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60;
          dVar20 = (double)fastfunc::FastIntToDouble((int)(animationSpeed * 200.5));
          bVar1 = false;
          sVar18 = *(short *)(pfVar8 + 0xb);
          *(short *)((int)pfVar8 + 0x2e) = *(short *)((int)pfVar8 + 0x2e) + 1;
          if (sVar18 == 10) {
            camera0::Cam0_DisableUserCam();
            *(undefined4 *)(*(int *)((int)GameCamera.pCurrentUpdCam + 0x70) + 0x230) = 0x14d;
            sVar18 = *(short *)(pfVar8 + 0xb);
          }
          if (sVar18 == 0xb) {
            camera0::Cam0_DisableUserCam();
            *(undefined4 *)(*(int *)((int)GameCamera.pCurrentUpdCam + 0x70) + 0x230) = 2;
            sVar18 = *(short *)(pfVar8 + 0xb);
          }
          if ((sVar18 == 2) || (sVar18 == 4)) {
            auVar23 = ZEXT416(0xffffffff);
            auVar23 = auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60;
            auVar23 = vectorShiftLeftIntegerWord(auVar23,auVar23);
            *(uint *)(*(int *)((int)GameCamera.pCurrentUpdCam + 0x70) + 0x1b8) =
                 *(uint *)(*(int *)((int)GameCamera.pCurrentUpdCam + 0x70) + 0x1b8) | 3;
            auVar24 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
            auVar25 = vectorMultiplyAddFloatingPoint(auVar24,auVar25,auVar23);
            auVar25 = vectorConvertToSignedFixedPointWordSaturate(auVar25,0);
            bVar1 = (int)((double)animationSpeed * dVar22) < (int)*(short *)((int)pfVar8 + 0x2e);
            if (bVar1) {
              auVar25 = vectorSplatHalfWord(auVar25,1);
              uVar10 = storeVectorElementHalfWordIndexed(auVar25,0x2e,uVar19);
              *(undefined2 *)((int)pfVar8 + 0x2e) = uVar10;
            }
            camera0::Cam0_RunningAtCamOff();
          }
          else if ((((sVar18 == 1) || (sVar18 == 7)) || (sVar18 == 10)) || (sVar18 == 9)) {
            if ((ANALOG_STICKS.x != 0.0) || (ANALOG_STICKS.y != 0.0)) {
              auVar23 = ZEXT416(0xffffffff);
              auVar23 = auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60;
              auVar23 = vectorShiftLeftIntegerWord(auVar23,auVar23);
              auVar24 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
              auVar23 = vectorMultiplyAddFloatingPoint(auVar24,auVar25,auVar23);
              auVar23 = vectorConvertToSignedFixedPointWordSaturate(auVar23,0);
              auVar23 = vectorSplatHalfWord(auVar23,1);
              uVar10 = storeVectorElementHalfWordIndexed(auVar23,0x2e,uVar19);
              *(undefined2 *)((int)pfVar8 + 0x2e) = uVar10;
            }
            auVar23 = ZEXT416(0xffffffff);
            auVar23 = auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60;
            dVar21 = (double)animationSpeed;
            auVar23 = vectorShiftLeftIntegerWord(auVar23,auVar23);
            auVar24 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
            uVar7 = *(ushort *)((int)pfVar8 + 0x2e);
            auVar25 = vectorMultiplyAddFloatingPoint(auVar24,auVar25,auVar23);
            uVar2 = (uint)(dVar21 * dVar22);
            auVar25 = vectorConvertToSignedFixedPointWordSaturate(auVar25,0);
            uVar17 = (uint)uVar7;
            bVar1 = false;
            if (((int)uVar2 <= (int)(short)uVar7) &&
               (bVar1 = true, 0 < (int)GameCamera.field17_0x1b4._128_4_)) {
              auVar25 = vectorSplatHalfWord(auVar25,1);
              uVar10 = storeVectorElementHalfWordIndexed(auVar25,0x2e,uVar19);
              *(undefined2 *)((int)pfVar8 + 0x2e) = uVar10;
              uVar17 = uVar2;
            }
            if ((int)(dVar21 * 400.5) <= (int)(short)uVar17) {
              bVar1 = false;
              *(undefined2 *)((int)pfVar8 + 0x2e) = 1;
            }
          }
          else if (sVar18 == 3) {
            dVar22 = 1.5;
            auVar25 = loadVectorLeftIndexed(0x10,0x3d560);
            auVar25 = auVar25 >> 0x60 & (undefined1  [16])0xffffffff;
            auVar24 = auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60;
            dVar20 = (double)fastfunc::FastIntToDouble((int)(animationSpeed * 1.5));
            auVar25 = ZEXT416(0xffffffff);
            auVar25 = auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60;
            auVar25 = vectorShiftLeftIntegerWord(auVar25,auVar25);
            auVar23 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
            auVar25 = vectorMultiplyAddFloatingPoint(auVar23,auVar24,auVar25);
            auVar25 = vectorConvertToSignedFixedPointWordSaturate(auVar25,0);
            if ((int)((double)animationSpeed * dVar22) < (int)*(short *)((int)pfVar8 + 0x2e)) {
              auVar25 = vectorSplatHalfWord(auVar25,1);
              bVar1 = true;
              uVar10 = storeVectorElementHalfWordIndexed(auVar25,0x2e,uVar19);
              *(undefined2 *)((int)pfVar8 + 0x2e) = uVar10;
            }
          }
          else {
            auVar23 = ZEXT416(0xffffffff);
            auVar23 = auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60;
            auVar23 = vectorShiftLeftIntegerWord(auVar23,auVar23);
            auVar24 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
            auVar25 = vectorMultiplyAddFloatingPoint(auVar24,auVar25,auVar23);
            auVar25 = vectorConvertToSignedFixedPointWordSaturate(auVar25,0);
            if ((int)((double)animationSpeed * dVar22) < (int)*(short *)((int)pfVar8 + 0x2e)) {
              auVar25 = vectorSplatHalfWord(auVar25,1);
              bVar1 = true;
              uVar10 = storeVectorElementHalfWordIndexed(auVar25,0x2e,uVar19);
              *(undefined2 *)((int)pfVar8 + 0x2e) = uVar10;
            }
          }
          sVar18 = *(short *)(pfVar8 + 0xb);
          dVar22 = 0.01745329238474369;
          if ((((sVar18 != 1) && (sVar18 != 7)) && (sVar18 != 9)) || (!bVar1)) {
            camera0::Cam0_ForceLookAtDir
                      ((double)(*pfVar8 * 0.017453292 *
                               (float)((double)(longlong)(int)*(short *)((int)pfVar8 + 0x2e) /
                                      dVar20)),(double)(pfVar8[8] * 0.017453292),local_70);
          }
          if (pfVar8[9] != 0.0) {
            if ((*(short *)(pfVar8 + 0xb) == 6) || (*(short *)(pfVar8 + 0xb) == 8)) {
              camera0::Cam0_SetCamDist((double)pfVar8[9],0x3f60624de0000000,0x40000,0);
              camera0::Cam0_SetRunAtCamDist((double)(pfVar8[9] + 1.36));
            }
            else {
              camera0::Cam0_SetCamDist((double)pfVar8[9],0x3f689374c0000000,&DAT_0003d560,0);
              camera0::Cam0_RunningAtCamOff();
            }
          }
          if (pfVar8[10] != 0.0) {
            if ((*(short *)(pfVar8 + 0xb) == 6) || (*(short *)(pfVar8 + 0xb) == 8)) {
              camera0::Cam0_SetCamHeight((double)pfVar8[10],0x3f60624de0000000);
            }
            else {
              camera0::Cam0_SetCamHeight((double)pfVar8[10],0x3f689374c0000000);
            }
          }
          if (pfVar8[0xc] != 0.0) {
            if ((*(short *)(pfVar8 + 0xb) == 6) || (*(short *)(pfVar8 + 0xb) == 8)) {
              camera0::Cam0_SetCamOfsZ((double)pfVar8[0xc],0x3f60624de0000000,&DAT_0003d560,0);
            }
            else {
              camera0::Cam0_SetCamOfsZ((double)pfVar8[0xc],0x3f747ae140000000,&DAT_0003d560,0);
            }
          }
          if (pfVar8[0x14] != 0.0) {
            camera0::Cam0_ForceElv((double)(float)((double)pfVar8[0x14] * dVar22));
          }
          if (*(short *)(pfVar8 + 0x15) != 0) {
            *(uint *)(*(int *)((int)GameCamera.pCurrentUpdCam + 0x70) + 0x1b8) =
                 *(uint *)(*(int *)((int)GameCamera.pCurrentUpdCam + 0x70) + 0x1b8) | 2;
          }
          if (*(short *)((int)pfVar8 + 0x56) != 0) {
            *(uint *)(*(int *)((int)GameCamera.pCurrentUpdCam + 0x70) + 0x1b8) =
                 *(uint *)(*(int *)((int)GameCamera.pCurrentUpdCam + 0x70) + 0x1b8) | 1;
          }
          if (*(short *)(pfVar8 + 0xd) == 0) {
            camera0::Cam0_SetCamPull(0);
          }
          if ((pfVar8[0xe] != 0.0) || (pfVar8[0xf] != 0.0)) {
            if ((int)*(short *)((int)pfVar8 + 0x2e) < (int)(animationSpeed * 120.5)) {
              dVar20 = (double)fastfunc::FastIntToDouble
                                         ((double)pfVar8[0xe],(int)(animationSpeed * 120.5));
              fVar3 = (float)((double)(longlong)(int)*(short *)((int)pfVar8 + 0x2e) / dVar20);
              camera0::Cam0_SetCPosGainDamp
                        ((double)((pfVar8[0xe] - pfVar8[0x10]) * fVar3 + pfVar8[0x10]),
                         (double)((pfVar8[0xf] - pfVar8[0x11]) * fVar3 + pfVar8[0x11]));
            }
            else {
              camera0::Cam0_SetCPosGainDamp((double)pfVar8[0xe],(double)pfVar8[0xf]);
            }
          }
          sVar18 = *(short *)(pfVar8 + 0xb);
          if ((sVar18 == 7 || sVar18 == 1) || (sVar18 == 10)) {
            camera0::Cam0_RunningAtCamOff();
            camera0::Cam0_disableLOS();
            camera0::Cam0_SetPitchGainDamp(0x3f847ae140000000,0x3fc99999a0000000);
          }
        }
        else {
          if (*(short *)((int)pfVar8 + 0x2e) != 0) {
            *(undefined2 *)((int)pfVar8 + 0x4a) = 1;
          }
          *(undefined2 *)((int)pfVar8 + 0x2e) = 0;
          camera0::Cam0_ClearModCamera(pCam);
        }
      }
      else {
        if (*(short *)((int)pfVar8 + 0x2e) != 0) {
          *(undefined2 *)((int)pfVar8 + 0x4a) = 1;
        }
        *(undefined2 *)((int)pfVar8 + 0x2e) = 0;
        camera0::Cam0_ClearModCamera(pCam);
      }
    }
  }
  return;
}



//==== 0003e160  ns=camera::camera17  size=0x108
// sig: int ActivateCamera_17(UpdateCam * pCam, UpdateCam * pCurr)
// callers(0): 
// callees(1): 0003d5b0 camera::camera17::Cam17_ModifyFollowCam

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int camera::camera17::ActivateCamera_17(UpdateCam *pCam,UpdateCam *pCurr)

{
  short sVar1;
  int iVar2;
  
  iVar2 = *(int *)(ImportCameras + (int)((longlong)pCam->importCameraIdx << 5) + 0x1c);
  if ((*(short *)(iVar2 + 0x48) != 1) || (*(short *)(iVar2 + 0x4a) == 0)) {
    sVar1 = *(short *)(iVar2 + 0x2c);
    if (((sVar1 != 0xb) || (g_heroType == '\x02')) &&
       (((((sVar1 != 1 && (sVar1 != 10)) || (*(short *)(iVar2 + 0x2e) != 0)) || (DAT_00969fec == 0))
        || ((Level == Oltanis && (hero::g_HeroRequestedCamType == 0xd)))))) {
      if ((sVar1 == 2) && (hero::g_heroStateType != 0x1a)) {
        *(undefined2 *)(iVar2 + 0x2e) = 0;
      }
      else {
        Cam17_ModifyFollowCam(pCam);
      }
    }
  }
  return 0;
}



//==== 0003e268  ns=stub  size=0x4
// sig: undefined STUB_0003e268(void)
// callers(0): 
// callees(0): 

void stub::STUB_0003e268(void)

{
  return;
}



//==== 0003e26c  ns=stub  size=0x4
// sig: undefined STUB_0003e26c(void)
// callers(0): 
// callees(0): 

void stub::STUB_0003e26c(void)

{
  return;
}



//==== 0003e270  ns=stub  size=0x4
// sig: undefined STUB_0003e270(void)
// callers(0): 
// callees(0): 

void stub::STUB_0003e270(void)

{
  return;
}



//==== 0003e274  ns=Global  size=0x14
// sig: undefined SECTION_HEADER_CAMERA_UNK(void)
// callers(0): 
// callees(0): 

void SECTION_HEADER_CAMERA_UNK(void)

{
  DAT_0071da90 = 0x10000;
  return;
}



//==== 0003e288  ns=camera::camera18  size=0x1e4
// sig: int Cam18_IsTriggered(UpdateCam * pCam)
// callers(1): 0003eaa8 camera::camera18::Cam18_ModifyFollowCam
// callees(4): 00104e44 mobyutil::PointInsideComplexPoly; 00110b70 mobyutil::MB_IsPntInCuboid; 00110c60 mobyutil::MB_IsPntInCylinder; 00110d48 mobyutil::MB_IsPntInSphere

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int camera::camera18::Cam18_IsTriggered(UpdateCam *pCam)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  int iVar6;
  
  iVar6 = *(int *)(ImportCameras + (int)((longlong)pCam->importCameraIdx << 5) + 0x1c);
  iVar1 = *(int *)(iVar6 + 0x48);
  if (GameCamera.field19_0x25c._0_4_ == iVar1 && GameCamera.field19_0x25c._0_4_ != 0) {
    uVar5 = 1;
  }
  else if (*(short *)(iVar6 + 0x3c) == 6) {
    uVar5 = (uint)LZCOUNT(g_standingOnMoby - iVar1) >> 5;
  }
  else if (*(char *)(iVar6 + 0x22) == '\x01') {
    fVar2 = g_heroPosition.y - *(float *)(iVar1 + 0x14);
    fVar3 = g_heroPosition.x - *(float *)(iVar1 + 0x10);
    fVar4 = g_heroPosition.z - *(float *)(iVar1 + 0x18);
    if (*(float *)(iVar6 + 0x24) <= SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2)) {
      uVar5 = 0;
    }
    else {
      uVar5 = 1;
    }
  }
  else {
    if (*(int *)(iVar6 + 0xc) < 0) {
      if (*(int *)(iVar6 + 0x10) < 0) {
        if (*(int *)(iVar6 + 8) < 0) {
          if ((-1 < *(int *)(iVar6 + 0x14)) &&
             (iVar6 = mobyutil::PointInsideComplexPoly
                                (&g_heroPosition,(Vec4 *)Splines[*(int *)(iVar6 + 0x14)]->points,
                                 Splines[*(int *)(iVar6 + 0x14)]->cnt), iVar6 != 0)) {
            return 1;
          }
        }
        else {
          iVar6 = mobyutil::MB_IsPntInSphere(&g_heroPosition,(longlong)*(int *)(iVar6 + 8));
          if (iVar6 != 0) {
            return 1;
          }
        }
      }
      else {
        iVar6 = mobyutil::MB_IsPntInCylinder(&g_heroPosition,(longlong)*(int *)(iVar6 + 0x10));
        if (iVar6 != 0) {
          return 1;
        }
      }
    }
    else {
      iVar6 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)*(int *)(iVar6 + 0xc));
      if (iVar6 != 0) {
        return 1;
      }
    }
    uVar5 = 0;
  }
  return uVar5;
}



//==== 0003e488  ns=camera::camera18  size=0x590
// sig: undefined ???_Cam18_ModifyFollowRot(void)
// callers(1): 0003eaa8 camera::camera18::Cam18_ModifyFollowCam
// callees(1): 005026a0 fastfunc::FastSubRots

undefined8 camera::camera18::____Cam18_ModifyFollowRot(double param_1,double param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  ulonglong *puVar8;
  int iVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  float *pfVar16;
  longlong lVar15;
  ulonglong uVar17;
  ulonglong in_LR;
  longlong lVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  ulonglong in_f21;
  double dVar23;
  ulonglong in_f22;
  ulonglong in_f23;
  double dVar24;
  ulonglong in_f24;
  double dVar25;
  ulonglong in_f25;
  double dVar26;
  ulonglong in_f26;
  ulonglong in_f27;
  double dVar27;
  ulonglong in_f28;
  double dVar28;
  double dVar29;
  ulonglong in_f29;
  double dVar30;
  double dVar31;
  ulonglong in_f30;
  ulonglong in_f31;
  
  uVar10 = ZEXT48(&stack0x00000000);
  lVar13 = uVar10 - 0x120;
  puVar8 = (ulonglong *)lVar13;
  *puVar8 = uVar10;
  puVar8[0x26] = in_LR;
  puVar8[0x19] = in_f21;
  puVar8[0x1a] = in_f22;
  puVar8[0x1b] = in_f23;
  puVar8[0x1c] = in_f24;
  puVar8[0x1d] = in_f25;
  puVar8[0x1e] = in_f26;
  puVar8[0x1f] = in_f27;
  puVar8[0x20] = in_f28;
  puVar8[0x21] = in_f29;
  puVar8[0x22] = in_f30;
  puVar8[0x23] = in_f31;
  dVar23 = 0.0;
  dVar26 = (double)(float)GameCamera.field17_0x1b4._12_4_;
  dVar25 = (double)(float)GameCamera.field17_0x1b4._16_4_;
  iVar7 = *(int *)(*(int *)(ImportCameras + (int)((longlong)*(short *)(param_3 + 0x84) << 5) + 0x1c)
                  + 0x48);
  dVar24 = (double)(float)GameCamera.field17_0x1b4._20_4_;
  if (param_1 != 0.0 || param_2 != 0.0) {
    dVar28 = (double)(*(float *)(iVar7 + 0x14) - *(float *)((int)GameCamera.pCurrentUpdCam + 0x34));
    dVar30 = (double)(*(float *)(iVar7 + 0x10) - *(float *)((int)GameCamera.pCurrentUpdCam + 0x30));
    dVar27 = (double)(*(float *)(iVar7 + 0x18) - *(float *)((int)GameCamera.pCurrentUpdCam + 0x38));
                    /* WARNING: Load size is inaccurate */
    fVar1 = (float)((double)*(float *)((int)GameCamera.pCurrentUpdCam + 8) * dVar24 +
                   (double)(float)((double)*GameCamera.pCurrentUpdCam * dVar26 +
                                  (double)(float)((double)*(float *)((int)GameCamera.pCurrentUpdCam
                                                                    + 4) * dVar25)));
    dVar21 = (double)fVar1;
    fVar2 = (float)(dVar27 * dVar24 +
                   (double)(float)(dVar30 * dVar26 + (double)(float)(dVar28 * dVar25)));
    dVar19 = (double)fVar2;
    dVar29 = -(double)(float)(dVar25 * dVar19 - dVar28);
    dVar28 = -(double)(float)(dVar25 * dVar21 -
                             (double)*(float *)((int)GameCamera.pCurrentUpdCam + 4));
    dVar31 = -(double)(float)(dVar26 * dVar19 - dVar30);
    dVar26 = -(double)(float)(dVar26 * dVar21 - (double)*GameCamera.pCurrentUpdCam);
    dVar30 = -(double)(float)(dVar24 * dVar19 - dVar27);
    dVar25 = -(double)(float)(dVar24 * dVar21 -
                             (double)*(float *)((int)GameCamera.pCurrentUpdCam + 8));
    fVar3 = SQRT((float)(dVar30 * dVar30 +
                        (double)(float)(dVar31 * dVar31 + (double)(float)(dVar29 * dVar29))));
    dVar27 = (double)fVar3;
    fVar6 = SQRT((float)(dVar25 * dVar25 +
                        (double)(float)(dVar26 * dVar26 + (double)(float)(dVar28 * dVar28))));
    dVar24 = (double)fVar6;
    if (param_2 != 0.0) {
      *(float *)((int)puVar8 + 0x7c) = fVar3;
      *(float *)(puVar8 + 0x10) = fVar2;
      *(float *)((int)puVar8 + 0x84) = (float)(ABS(dVar27) - ABS(dVar19));
      uVar17 = (ulonglong)(*(uint *)((int)puVar8 + 0x7c) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar8 + 0x84) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar8 + 0x10) >> 0x1d) & 4;
      dVar22 = ABS((double)*(float *)((int)puVar8 + 0x7c));
      if (*(float *)((int)puVar8 + 0x84) - 0.0 < 0.0) {
        dVar22 = ABS(dVar19);
      }
      fVar2 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar17 << 2));
      dVar19 = ABS((double)*(float *)(puVar8 + 0x10));
      if (*(float *)((int)puVar8 + 0x84) - 0.0 < 0.0) {
        dVar19 = ABS(dVar27);
      }
      fVar3 = *(float *)(((uint)(uVar17 << 2) | 0x735900) + 4);
      dVar20 = dVar23;
      if (0.0 < dVar22) {
        lVar12 = uVar10 - 0x110;
        lVar15 = uVar10 - 0x68;
        lVar14 = uVar10 - 0x78;
        lVar18 = 2;
        fVar4 = (float)(dVar19 - dVar22) / (float)(dVar19 + dVar22);
        fVar5 = fVar4 * fVar4;
        *(float *)((int)puVar8 + 0xb4) = fVar4;
        *(float *)((int)puVar8 + 0xac) = fVar4;
        *(float *)(puVar8 + 0x16) = fVar4;
        *(float *)(puVar8 + 0x15) = fVar4;
        fVar4 = fVar5 * fVar5;
        *(float *)((int)puVar8 + 0xac) = *(float *)((int)puVar8 + 0xac) * fVar5;
        *(float *)(puVar8 + 0x16) = *(float *)(puVar8 + 0x16) * fVar4;
        *(float *)((int)puVar8 + 0xb4) = *(float *)((int)puVar8 + 0xb4) * fVar4 * fVar5;
        do {
          *(float *)((int)lVar12 + 0xa8) = *(float *)((int)lVar12 + 0x98) * fVar4 * fVar4;
          iVar7 = (int)lVar14;
          lVar14 = lVar14 + 8;
          lVar12 = lVar12 + 8;
          *(float *)((int)lVar15 + 4) = *(float *)(iVar7 + 4) * fVar4 * fVar4;
          lVar15 = lVar15 + 8;
          lVar18 = lVar18 + -1;
        } while (lVar18 != 0);
        lVar18 = 4;
        lVar15 = uVar10 - 0x78;
        pfVar16 = (float *)&DAT_007358e0;
        lVar12 = lVar13;
        lVar14 = lVar15;
        do {
          fVar4 = *pfVar16;
          fVar5 = pfVar16[1];
          pfVar16 = pfVar16 + 2;
          *(float *)((int)lVar12 + 0xa8) = *(float *)((int)lVar12 + 0xa8) * fVar4;
          lVar12 = lVar12 + 8;
          *(float *)((int)lVar14 + 4) = *(float *)((int)lVar14 + 4) * fVar5;
          lVar14 = lVar14 + 8;
          lVar18 = lVar18 + -1;
        } while (lVar18 != 0);
        lVar14 = 2;
        lVar12 = lVar13;
        dVar19 = dVar23;
        do {
          iVar7 = (int)lVar12;
          iVar9 = (int)lVar15;
          lVar12 = lVar12 + 0x10;
          lVar15 = lVar15 + 0x10;
          dVar19 = (double)((float)(dVar19 + (double)*(float *)(iVar7 + 0xa8)) +
                            *(float *)(iVar9 + 4) + *(float *)(iVar9 + 8) + *(float *)(iVar9 + 0xc))
          ;
          lVar14 = lVar14 + -1;
        } while (lVar14 != 0);
        dVar20 = (double)((float)(dVar19 + 0.7853981852531433) * fVar2 + fVar3);
      }
      *(float *)(puVar8 + 0xe) = fVar6;
      *(float *)((int)puVar8 + 0x74) = fVar1;
      *(float *)(puVar8 + 0xf) = (float)(ABS(dVar24) - ABS(dVar21));
      uVar17 = (ulonglong)(*(uint *)(puVar8 + 0xe) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar8 + 0xf) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar8 + 0x74) >> 0x1d) & 4;
      dVar19 = ABS((double)*(float *)(puVar8 + 0xe));
      if (*(float *)(puVar8 + 0xf) - 0.0 < 0.0) {
        dVar19 = ABS(dVar21);
      }
      fVar1 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar17 << 2));
      dVar21 = ABS((double)*(float *)((int)puVar8 + 0x74));
      if (*(float *)(puVar8 + 0xf) - 0.0 < 0.0) {
        dVar21 = ABS(dVar24);
      }
      fVar2 = *(float *)(((uint)(uVar17 << 2) | 0x735900) + 4);
      dVar22 = dVar23;
      if (0.0 < dVar19) {
        lVar12 = uVar10 - 0x110;
        lVar14 = uVar10 - 0x98;
        lVar15 = uVar10 - 0x88;
        lVar18 = 2;
        fVar3 = (float)(dVar21 - dVar19) / (float)(dVar21 + dVar19);
        fVar6 = fVar3 * fVar3;
        *(float *)((int)puVar8 + 0x94) = fVar3;
        *(float *)((int)puVar8 + 0x8c) = fVar3;
        *(float *)(puVar8 + 0x12) = fVar3;
        *(float *)(puVar8 + 0x11) = fVar3;
        fVar3 = fVar6 * fVar6;
        *(float *)((int)puVar8 + 0x8c) = *(float *)((int)puVar8 + 0x8c) * fVar6;
        *(float *)(puVar8 + 0x12) = *(float *)(puVar8 + 0x12) * fVar3;
        *(float *)((int)puVar8 + 0x94) = *(float *)((int)puVar8 + 0x94) * fVar3 * fVar6;
        do {
          *(float *)((int)lVar12 + 0x88) = *(float *)((int)lVar12 + 0x78) * fVar3 * fVar3;
          iVar7 = (int)lVar14;
          lVar12 = lVar12 + 8;
          lVar14 = lVar14 + 8;
          *(float *)((int)lVar15 + 4) = *(float *)(iVar7 + 4) * fVar3 * fVar3;
          lVar15 = lVar15 + 8;
          lVar18 = lVar18 + -1;
        } while (lVar18 != 0);
        lVar18 = 4;
        lVar15 = uVar10 - 0x98;
        pfVar16 = (float *)&DAT_007358e0;
        lVar12 = lVar13;
        lVar14 = lVar15;
        do {
          fVar3 = *pfVar16;
          fVar6 = pfVar16[1];
          pfVar16 = pfVar16 + 2;
          *(float *)((int)lVar12 + 0x88) = *(float *)((int)lVar12 + 0x88) * fVar3;
          lVar12 = lVar12 + 8;
          *(float *)((int)lVar14 + 4) = *(float *)((int)lVar14 + 4) * fVar6;
          lVar14 = lVar14 + 8;
          lVar18 = lVar18 + -1;
        } while (lVar18 != 0);
        lVar12 = 2;
        dVar19 = dVar23;
        do {
          iVar7 = (int)lVar13;
          lVar13 = lVar13 + 0x10;
          iVar9 = (int)lVar15;
          lVar15 = lVar15 + 0x10;
          dVar19 = (double)((float)(dVar19 + (double)*(float *)(iVar7 + 0x88)) +
                            *(float *)(iVar9 + 4) + *(float *)(iVar9 + 8) + *(float *)(iVar9 + 0xc))
          ;
          lVar12 = lVar12 + -1;
        } while (lVar12 != 0);
        dVar22 = (double)((float)(dVar19 + 0.7853981852531433) * fVar1 + fVar2);
      }
      dVar19 = (double)fastfunc::FastSubRots((float)dVar20,(float)dVar22);
      if ((double)(float)(param_2 * 0.01745329238474369) < dVar19) {
        return 0;
      }
    }
    if (param_1 == dVar23) {
      uVar11 = 1;
    }
    else if ((double)(float)(dVar27 * dVar24) == dVar23) {
      uVar11 = 0;
    }
    else {
      dVar25 = (double)(float)((double)(float)(dVar30 * dVar25 +
                                              (double)(float)(dVar31 * dVar26 +
                                                             (double)(float)(dVar29 * dVar28))) /
                              (double)(float)(dVar27 * dVar24));
      dVar24 = dVar25;
      if (dVar25 - dVar23 < 0.0) {
        dVar24 = ABS(dVar25);
      }
      fVar1 = 1.0;
      if (dVar25 - dVar23 < 0.0) {
        fVar1 = -1.0;
      }
      dVar25 = (double)(float)(1.0 - dVar24);
      if ((double)(float)(1.0 - dVar24) - dVar23 < 0.0) {
        dVar25 = dVar23;
      }
      if ((float)(param_1 * 0.01745329238474369) <=
          ABS(-(-(((float)((double)(float)(dVar24 * dVar24) * dVar24) * DAT_007358cc +
                  (float)((double)(float)(dVar24 * dVar24) * (double)DAT_007358c8 +
                         (double)(float)(dVar24 * (double)DAT_007358c4 + (double)DAT_007358c0))) *
                  (float)SQRT(dVar25) - 1.5707964) * fVar1 - 1.5707964))) {
        uVar11 = 0;
      }
      else {
        uVar11 = 1;
      }
    }
  }
  else {
    uVar11 = 1;
  }
  return uVar11;
}



//==== 0003eaa8  ns=camera::camera18  size=0x102c
// sig: void Cam18_ModifyFollowCam(UpdateCam * pCam)
// callers(1): 0003fb0c camera::camera18::ActivateCamera_18
// callees(19): 0002e354 camera0::Cam0_SetCamHeight; 0002eff8 camera0::Cam0_SetCPosGainDamp; 0002f03c camera0::Cam0_disableLOS; 0002f064 camera0::Cam0_SetCamPull; 0002f31c camera0::Cam0_ForceLookAtPos; 0002f3b0 camera0::Cam0_RunningAtCamOff; 0002f3d8 camera0::Cam0_SetCamDist; 0002f414 camera0::Cam0_SetCamOfsZ; 0002f470 camera0::Cam0_ForceLookAtDir; 00032bd4 camera0::Cam0_ClearModCamera; 00032c24 camera0::Cam0_SetModCamera; 00032d18 camera0::Cam0_SetPitchGainDamp; 00032d5c camera0::Cam0_SetBumpFlags; 00032d80 camera0::Cam0_SetCollData; 0003e288 camera::camera18::Cam18_IsTriggered; 0003e488 camera::camera18::???_Cam18_ModifyFollowRot; 00502578 fastfunc::FastWrapRot; 005026a0 fastfunc::FastSubRots; 00502730 fastfunc::FastIntToDouble
// strings: 0003ea9c: '@W\n=A' (raw)

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void camera::camera18::Cam18_ModifyFollowCam(UpdateCam *pCam)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  ushort uVar6;
  float *pfVar7;
  float fVar8;
  uint uVar9;
  uint uVar10;
  undefined2 uVar11;
  ulonglong *puVar12;
  int iVar13;
  bool bVar14;
  bool bVar15;
  ulonglong uVar16;
  ushort *puVar19;
  int iVar20;
  int iVar21;
  short sVar23;
  short sVar24;
  uint uVar22;
  longlong lVar17;
  longlong lVar18;
  longlong lVar25;
  longlong lVar26;
  float *pfVar27;
  ulonglong uVar28;
  ulonglong unaff_r22;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  MobyInstance *pMVar29;
  ulonglong unaff_r30;
  ulonglong uVar30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar31;
  double dVar32;
  double dVar33;
  ulonglong in_f29;
  undefined8 uVar34;
  ulonglong in_f30;
  double dVar35;
  undefined8 uVar36;
  ulonglong in_f31;
  double dVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  
  uVar16 = ZEXT48(&stack0x00000000);
  lVar18 = uVar16 - 0x1b0;
  puVar12 = (ulonglong *)lVar18;
  *puVar12 = uVar16;
  puVar12[0x38] = in_LR;
  puVar12[0x33] = in_f29;
  puVar12[0x34] = in_f30;
  puVar12[0x35] = in_f31;
  puVar12[0x32] = unaff_r31;
  iVar20 = ImportCameras;
  sVar24 = pCam->importCameraIdx;
  puVar12[0x31] = unaff_r30;
  pfVar7 = *(float **)(iVar20 + (int)((longlong)sVar24 << 5) + 0x1c);
  uVar30 = ZEXT48(pfVar7);
  fVar8 = pfVar7[0x14];
  puVar12[0x30] = unaff_r29;
  puVar12[0x2f] = unaff_r28;
  puVar12[0x2e] = unaff_r27;
  puVar12[0x2d] = unaff_r26;
  puVar12[0x2c] = unaff_r25;
  puVar12[0x2b] = unaff_r24;
  puVar12[0x2a] = unaff_r23;
  puVar12[0x29] = unaff_r22;
  if (fVar8 != 0.0) {
    *(undefined2 *)(pfVar7 + 8) = 0;
    camera0::Cam0_ClearModCamera(pCam);
    return;
  }
  if ((int)pfVar7[0x11] < 0) {
    pMVar29 = MobyInstance + (int)pfVar7[10];
    if (0x7f < pMVar29->state) {
      *(undefined2 *)(pfVar7 + 8) = 0xffff;
      camera0::Cam0_ClearModCamera(pCam);
      return;
    }
  }
  else {
    puVar19 = (ushort *)(&mobyutil::g_MobyGroups)[(int)pfVar7[0x11]];
    if (puVar19 == (ushort *)0x0) {
      *(undefined2 *)(pfVar7 + 8) = 0xffff;
      camera0::Cam0_ClearModCamera(pCam);
      return;
    }
    while (pMVar29 = MobyInstance + (*puVar19 & 0x7fff), 0x7f < pMVar29->state) {
      uVar6 = *puVar19;
      puVar19 = puVar19 + 1;
      if ((short)uVar6 < 0) {
        *(undefined2 *)(pfVar7 + 8) = 0xffff;
        camera0::Cam0_ClearModCamera(pCam);
        return;
      }
    }
  }
  pfVar7[0x12] = (float)pMVar29;
  if ((*(short *)(pfVar7 + 0xf) == 6) && (g_standingOnMoby != pMVar29)) {
    *(undefined2 *)(pfVar7 + 8) = 0;
    camera0::Cam0_ClearModCamera(pCam);
    return;
  }
  iVar20 = camera0::Cam0_SetModCamera(pCam);
  if (iVar20 < 1) {
    *(undefined2 *)(pfVar7 + 8) = 0;
    return;
  }
  iVar21 = Cam18_IsTriggered(pCam);
  iVar20 = ImportCameras;
  sVar24 = pCam->importCameraIdx;
  if (iVar21 == 0) {
    *(undefined2 *)(pfVar7 + 8) = 0;
    camera0::Cam0_ClearModCamera(pCam);
    return;
  }
  if (*(short *)(pfVar7 + 0xf) == 5) {
                    /* WARNING: Load size is inaccurate */
    uVar9 = *GameCamera.pCurrentUpdCam;
    uVar10 = *(uint *)((int)GameCamera.pCurrentUpdCam + 4);
                    /* WARNING: Load size is inaccurate */
    fVar1 = ABS(*GameCamera.pCurrentUpdCam);
    fVar2 = ABS(*(float *)((int)GameCamera.pCurrentUpdCam + 4));
    *(float *)(puVar12 + 0x12) = fVar1 - fVar2;
    fVar8 = 0.0;
    uVar28 = (ulonglong)(uVar9 >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar12 + 0x12) >> 0x1e) & 2 | (ulonglong)(uVar10 >> 0x1d) & 4;
    fVar3 = fVar1;
    if (*(float *)(puVar12 + 0x12) - 0.0 < 0.0) {
      fVar3 = fVar2;
    }
    fVar4 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar28 << 2));
    if (*(float *)(puVar12 + 0x12) - 0.0 < 0.0) {
      fVar2 = fVar1;
    }
    fVar1 = *(float *)(((uint)(uVar28 << 2) | 0x735900) + 4);
    if (0.0 < fVar3) {
      lVar17 = uVar16 - 0x1a0;
      lVar25 = uVar16 - 0xdc;
      lVar26 = uVar16 - 0xcc;
      lVar31 = 2;
      fVar2 = (fVar2 - fVar3) / (fVar2 + fVar3);
      fVar3 = fVar2 * fVar2;
      *(float *)(puVar12 + 0x1c) = fVar2;
      *(float *)(puVar12 + 0x1b) = fVar2;
      *(float *)((int)puVar12 + 0xdc) = fVar2;
      *(float *)((int)puVar12 + 0xd4) = fVar2;
      fVar2 = fVar3 * fVar3;
      *(float *)(puVar12 + 0x1b) = *(float *)(puVar12 + 0x1b) * fVar3;
      *(float *)((int)puVar12 + 0xdc) = *(float *)((int)puVar12 + 0xdc) * fVar2;
      *(float *)(puVar12 + 0x1c) = *(float *)(puVar12 + 0x1c) * fVar2 * fVar3;
      do {
        *(float *)((int)lVar17 + 0xd4) = *(float *)((int)lVar17 + 0xc4) * fVar2 * fVar2;
        iVar21 = (int)lVar25;
        lVar17 = lVar17 + 8;
        lVar25 = lVar25 + 8;
        *(float *)((int)lVar26 + 4) = *(float *)(iVar21 + 4) * fVar2 * fVar2;
        lVar26 = lVar26 + 8;
        lVar31 = lVar31 + -1;
      } while (lVar31 != 0);
      lVar31 = 4;
      lVar26 = uVar16 - 0xdc;
      pfVar27 = (float *)&DAT_007358e0;
      lVar17 = lVar18;
      lVar25 = lVar26;
      do {
        fVar2 = *pfVar27;
        fVar3 = pfVar27[1];
        pfVar27 = pfVar27 + 2;
        *(float *)((int)lVar17 + 0xd4) = *(float *)((int)lVar17 + 0xd4) * fVar2;
        lVar17 = lVar17 + 8;
        *(float *)((int)lVar25 + 4) = *(float *)((int)lVar25 + 4) * fVar3;
        lVar25 = lVar25 + 8;
        lVar31 = lVar31 + -1;
      } while (lVar31 != 0);
      lVar25 = 2;
      lVar17 = lVar18;
      do {
        iVar21 = (int)lVar17;
        iVar13 = (int)lVar26;
        lVar17 = lVar17 + 0x10;
        lVar26 = lVar26 + 0x10;
        fVar8 = fVar8 + *(float *)(iVar21 + 0xd4) + *(float *)(iVar13 + 4) + *(float *)(iVar13 + 8)
                + *(float *)(iVar13 + 0xc);
        lVar25 = lVar25 + -1;
      } while (lVar25 != 0);
      fVar8 = (fVar8 + 0.7853982) * fVar4 + fVar1;
    }
    if (*(short *)(pfVar7 + 8) < 2) {
      pfVar7[0x10] = *(float *)(iVar20 + (int)((longlong)sVar24 << 5) + 0x18);
    }
    else if ((0x3e999999 < (uint)ABS(ANALOG_STICKS.x)) || (0x3e999999 < (uint)ABS(ANALOG_STICKS.y)))
    {
      pfVar7[0x10] = fVar8;
    }
    dVar37 = (double)pfVar7[0x10];
    dVar32 = (double)fastfunc::FastSubRots(pfVar7[0x10],fVar8);
    if (1.5707963705062866 < dVar32) {
      fastfunc::FastWrapRot((float)dVar37,3.1415927);
    }
  }
  if (*(short *)(pfVar7 + 0xf) == 4) {
                    /* WARNING: Load size is inaccurate */
    uVar9 = *GameCamera.pCurrentUpdCam;
    uVar10 = *(uint *)((int)GameCamera.pCurrentUpdCam + 4);
                    /* WARNING: Load size is inaccurate */
    fVar2 = ABS(*GameCamera.pCurrentUpdCam);
    fVar3 = ABS(*(float *)((int)GameCamera.pCurrentUpdCam + 4));
    fVar8 = *(float *)(ImportCameras + (int)((longlong)pCam->importCameraIdx << 5) + 0x18);
    dVar32 = (double)fVar8;
    *(float *)((int)puVar12 + 0x8c) = fVar2 - fVar3;
    fVar1 = 0.0;
    uVar28 = (ulonglong)(uVar9 >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar12 + 0x8c) >> 0x1e) & 2 |
             (ulonglong)(uVar10 >> 0x1d) & 4;
    fVar4 = fVar2;
    if (*(float *)((int)puVar12 + 0x8c) - 0.0 < 0.0) {
      fVar4 = fVar3;
    }
    fVar5 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar28 << 2));
    if (*(float *)((int)puVar12 + 0x8c) - 0.0 < 0.0) {
      fVar3 = fVar2;
    }
    fVar2 = *(float *)(((uint)(uVar28 << 2) | 0x735900) + 4);
    if (0.0 < fVar4) {
      lVar17 = uVar16 - 0x1a0;
      lVar26 = uVar16 - 0xec;
      lVar25 = uVar16 - 0xfc;
      lVar31 = 2;
      fVar3 = (fVar3 - fVar4) / (fVar3 + fVar4);
      fVar4 = fVar3 * fVar3;
      *(float *)(puVar12 + 0x18) = fVar3;
      *(float *)(puVar12 + 0x17) = fVar3;
      *(float *)((int)puVar12 + 0xbc) = fVar3;
      *(float *)((int)puVar12 + 0xb4) = fVar3;
      fVar3 = fVar4 * fVar4;
      *(float *)(puVar12 + 0x17) = *(float *)(puVar12 + 0x17) * fVar4;
      *(float *)((int)puVar12 + 0xbc) = *(float *)((int)puVar12 + 0xbc) * fVar3;
      *(float *)(puVar12 + 0x18) = *(float *)(puVar12 + 0x18) * fVar3 * fVar4;
      do {
        *(float *)((int)lVar17 + 0xb4) = *(float *)((int)lVar17 + 0xa4) * fVar3 * fVar3;
        iVar20 = (int)lVar25;
        lVar25 = lVar25 + 8;
        lVar17 = lVar17 + 8;
        *(float *)((int)lVar26 + 4) = *(float *)(iVar20 + 4) * fVar3 * fVar3;
        lVar26 = lVar26 + 8;
        lVar31 = lVar31 + -1;
      } while (lVar31 != 0);
      lVar31 = 4;
      lVar26 = uVar16 - 0xfc;
      pfVar27 = (float *)&DAT_007358e0;
      lVar17 = lVar18;
      lVar25 = lVar26;
      do {
        fVar3 = *pfVar27;
        fVar4 = pfVar27[1];
        pfVar27 = pfVar27 + 2;
        *(float *)((int)lVar17 + 0xb4) = *(float *)((int)lVar17 + 0xb4) * fVar3;
        lVar17 = lVar17 + 8;
        *(float *)((int)lVar25 + 4) = *(float *)((int)lVar25 + 4) * fVar4;
        lVar25 = lVar25 + 8;
        lVar31 = lVar31 + -1;
      } while (lVar31 != 0);
      lVar25 = 2;
      lVar17 = lVar18;
      do {
        iVar20 = (int)lVar17;
        lVar17 = lVar17 + 0x10;
        iVar21 = (int)lVar26;
        lVar26 = lVar26 + 0x10;
        fVar1 = fVar1 + *(float *)(iVar20 + 0xb4) + *(float *)(iVar21 + 4) + *(float *)(iVar21 + 8)
                + *(float *)(iVar21 + 0xc);
        lVar25 = lVar25 + -1;
      } while (lVar25 != 0);
      fVar1 = (fVar1 + 0.7853982) * fVar5 + fVar2;
    }
    dVar37 = (double)fastfunc::FastSubRots(fVar8,fVar1);
    if (1.5707963705062866 < dVar37) {
      dVar32 = (double)fastfunc::FastWrapRot((float)dVar32,3.1415927);
    }
    pfVar7[0x10] = (float)dVar32;
  }
  bVar14 = true;
  uVar6 = *(ushort *)(pfVar7 + 8);
  sVar24 = *(short *)(pfVar7 + 0xf);
  dVar32 = 1.0;
  sVar23 = (short)(uVar6 + 1);
  *(short *)(pfVar7 + 8) = sVar23;
  fVar1 = animationSpeed;
  fVar8 = 400.5;
  if (sVar24 != 1) {
    auVar38 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    fVar2 = 350.5;
    auVar44 = loadVectorLeftIndexed(0x18,0x3ea18);
    auVar44 = auVar44 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar44 = auVar44 | auVar44 << 0x20 | auVar44 << 0x40 | auVar44 << 0x60;
  }
  else {
    auVar38 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar44 = loadVectorLeftIndexed(0x20,0x3ea18);
    auVar44 = auVar44 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar44 = auVar44 | auVar44 << 0x20 | auVar44 << 0x40 | auVar44 << 0x60;
    fVar2 = fVar8;
    fVar8 = 560.5;
  }
  auVar41 = ZEXT416(0xffffffff);
  auVar39 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
  fVar3 = animationSpeed * 300.5;
  auVar41 = ZEXT416(0xffffffff);
  auVar42 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
  fVar8 = animationSpeed * fVar8;
  auVar41 = auVar38 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar40 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
  auVar39 = vectorShiftLeftIntegerWord(auVar39,auVar39);
  fVar2 = animationSpeed * fVar2;
  auVar41 = ZEXT416(0xffffffff);
  auVar43 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
  auVar41 = loadVectorLeftIndexed(0x1c,0x3ea18);
  auVar41 = auVar41 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar38 = vectorMultiplyAddFloatingPoint
                      (auVar38,auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60,auVar39
                      );
  auVar41 = vectorShiftLeftIntegerWord(auVar42,auVar42);
  auVar39 = vectorShiftLeftIntegerWord(auVar43,auVar43);
  auVar41 = vectorMultiplyAddFloatingPoint(auVar40,auVar44,auVar41);
  puVar12[0x1f] = (longlong)(int)(animationSpeed * 200.5);
  auVar44 = loadVectorLeftIndexed(0x14,0x3ea18);
  iVar20 = *(int *)((int)puVar12 + 0xfc);
  auVar44 = auVar44 >> 0x60 & (undefined1  [16])0xffffffff;
  puVar12[0x1f] = (longlong)(int)fVar3;
  auVar38 = auVar38 >> 0x60 & (undefined1  [16])0xffffffff;
  uVar9 = *(uint *)((int)puVar12 + 0xfc);
  auVar39 = vectorMultiplyAddFloatingPoint
                      (auVar40,auVar44 | auVar44 << 0x20 | auVar44 << 0x40 | auVar44 << 0x60,auVar39
                      );
  puVar12[0x1f] = (longlong)(int)fVar8;
  uVar10 = *(uint *)((int)puVar12 + 0xfc);
  puVar12[0x1f] = (longlong)(int)fVar2;
  auVar38 = vectorConvertToSignedFixedPointWordSaturate
                      (auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60,0);
  auVar44 = vectorConvertToSignedFixedPointWordSaturate(auVar41,0);
  iVar21 = *(int *)((int)puVar12 + 0xfc);
  auVar41 = vectorConvertToSignedFixedPointWordSaturate(auVar39,0);
  if (sVar24 == 7) {
    uVar22 = uVar6 + 1;
    if (ANALOG_STICKS.x != 0.0) {
      auVar44 = vectorSplatHalfWord(auVar41,1);
      uVar11 = storeVectorElementHalfWordIndexed(auVar44,0x20,uVar30);
      *(undefined2 *)(pfVar7 + 8) = uVar11;
      uVar22 = uVar9;
    }
    sVar24 = (short)uVar22;
    if ((int)uVar9 <= (int)sVar24) {
      *(short *)((int)pfVar7 + 0x3e) = *(short *)((int)pfVar7 + 0x3e) + 1;
      puVar12[0x1f] = (longlong)(int)(fVar1 * 30.5);
      if ((int)(uVar9 + *(int *)((int)puVar12 + 0xfc)) < (int)sVar24) {
        dVar32 = 0.10000000149011612;
      }
      else {
        bVar14 = false;
      }
    }
    if ((int)uVar10 <= (int)sVar24) {
      bVar14 = true;
      sVar24 = 1;
      *(undefined2 *)(pfVar7 + 8) = 1;
      *(undefined2 *)((int)pfVar7 + 0x3e) = 0;
    }
    if ((iVar20 < sVar24) && ((int)sVar24 < (int)uVar9)) {
      auVar44 = vectorSplatHalfWord(auVar38,1);
      auVar38 = vectorSplatHalfWord(auVar41,1);
      uVar11 = storeVectorElementHalfWordIndexed(auVar44,0x20,uVar30);
      *(undefined2 *)(pfVar7 + 8) = uVar11;
      uVar11 = storeVectorElementHalfWordIndexed(auVar38,0x3e,uVar30);
      *(undefined2 *)((int)pfVar7 + 0x3e) = uVar11;
    }
    goto LAB_0003f478;
  }
  if ((sVar24 != 1) && (sVar24 != 2)) {
    if (iVar20 < sVar23) {
      auVar44 = vectorSplatHalfWord(auVar38,1);
      uVar11 = storeVectorElementHalfWordIndexed(auVar44,0x20,uVar30);
      *(undefined2 *)(pfVar7 + 8) = uVar11;
    }
    goto LAB_0003f478;
  }
  camera0::Cam0_SetBumpFlags(0xb0);
  camera0::Cam0_SetCollData(dVar32,0x4028000000000000,0x3fbc28f5c0000000);
  if ((ANALOG_STICKS.x != 0.0) || (uVar22 = (uint)*(ushort *)(pfVar7 + 8), ANALOG_STICKS.y != 0.0))
  {
    auVar39 = vectorSplatHalfWord(auVar41,1);
    uVar11 = storeVectorElementHalfWordIndexed(auVar39,0x20,uVar30);
    *(undefined2 *)(pfVar7 + 8) = uVar11;
    uVar22 = uVar9;
  }
  if ((int)uVar9 <= (int)(short)uVar22) {
    sVar24 = *(short *)((int)pfVar7 + 0x3e) + 1;
    *(short *)((int)pfVar7 + 0x3e) = sVar24;
    if (iVar21 <= sVar24) {
      iVar21 = ____Cam18_ModifyFollowRot(0x403e000000000000,0,pCam);
      uVar22 = (uint)*(ushort *)(pfVar7 + 8);
      if (iVar21 != 0) {
        auVar44 = vectorSplatHalfWord(auVar44,1);
        uVar11 = storeVectorElementHalfWordIndexed(auVar44,0x20,uVar30);
        *(undefined2 *)(pfVar7 + 8) = uVar11;
        uVar22 = uVar10;
        goto LAB_0003f408;
      }
    }
    bVar14 = false;
  }
LAB_0003f408:
  sVar24 = (short)uVar22;
  if ((int)uVar10 <= (int)sVar24) {
    bVar14 = true;
    sVar24 = 1;
    *(undefined2 *)(pfVar7 + 8) = 1;
    *(undefined2 *)((int)pfVar7 + 0x3e) = 0;
  }
  if ((iVar20 < sVar24) && ((int)sVar24 < (int)uVar9)) {
    auVar44 = vectorSplatHalfWord(auVar38,1);
    auVar38 = vectorSplatHalfWord(auVar41,1);
    uVar11 = storeVectorElementHalfWordIndexed(auVar44,0x20,uVar30);
    *(undefined2 *)(pfVar7 + 8) = uVar11;
    uVar11 = storeVectorElementHalfWordIndexed(auVar38,0x3e,uVar30);
    *(undefined2 *)((int)pfVar7 + 0x3e) = uVar11;
  }
LAB_0003f478:
  dVar37 = (double)fastfunc::FastIntToDouble(iVar20);
  puVar12[0x1f] = (longlong)(int)*(short *)(pfVar7 + 8);
  bVar15 = false;
  dVar32 = (double)((float)((double)*pfVar7 * dVar32) * 0.017453292 *
                   (float)((double)(longlong)puVar12[0x1f] / dVar37));
  if ((bVar14) &&
     (iVar20 = ____Cam18_ModifyFollowRot
                         ((double)pfVar7[0xc],(double)pfVar7[0xb],0x3f91df46a0000000,
                          (double)(longlong)puVar12[0x1f],pCam), iVar20 != 0)) {
    sVar24 = *(short *)(pfVar7 + 0xf);
    bVar15 = true;
    if ((sVar24 == 4) || (sVar24 == 5)) {
      fVar8 = pfVar7[0x10] + 1.5707963;
      fVar1 = 3.1415925 - fVar8;
      if (fVar8 - (3.1415925 - fVar8) < 0.0) {
        fVar1 = fVar8;
      }
      fVar2 = -3.1415925 - fVar8;
      if ((-3.1415925 - fVar8) - fVar1 < 0.0) {
        fVar2 = fVar1;
      }
      fVar8 = fVar2 * fVar2;
      fVar1 = fVar8 * fVar8 * fVar2;
      fVar3 = fVar8 * fVar1;
      *(float *)(puVar12 + 0xe) =
           fVar8 * fVar3 * 2.601887e-06 +
           fVar3 * -0.0001980741 + fVar1 * 0.0083330255 + fVar8 * fVar2 * -0.16666657 + fVar2;
      fVar8 = pfVar7[0x10];
      fVar1 = 3.1415925 - fVar8;
      if (fVar8 - (3.1415925 - fVar8) < 0.0) {
        fVar1 = fVar8;
      }
      fVar2 = -3.1415925 - fVar8;
      if ((-3.1415925 - fVar8) - fVar1 < 0.0) {
        fVar2 = fVar1;
      }
      fVar8 = fVar2 * fVar2;
      fVar1 = fVar8 * fVar8 * fVar2;
      fVar3 = fVar8 * fVar1;
      *(float *)((int)puVar12 + 0x74) =
           fVar8 * fVar3 * 2.601887e-06 +
           fVar3 * -0.0001980741 + fVar1 * 0.0083330255 + fVar8 * fVar2 * -0.16666657 + fVar2;
      *(undefined4 *)(puVar12 + 0xf) = 0;
      camera0::Cam0_ForceLookAtDir(dVar32,0,uVar16 - 0x140);
    }
    else if (sVar24 == 3) {
      sVar24 = *(short *)(pfVar7 + 8);
      puVar12[0x1f] = (longlong)(int)(animationSpeed * 90.5);
      if ((int)sVar24 < *(int *)((int)puVar12 + 0xfc)) {
        dVar37 = (double)fastfunc::FastIntToDouble(dVar32,*(int *)((int)puVar12 + 0xfc));
        puVar12[0x1f] = (longlong)(int)*(short *)(pfVar7 + 8);
        dVar32 = (double)(float)(dVar32 * (double)(float)((double)(longlong)puVar12[0x1f] / dVar37))
        ;
      }
      camera0::Cam0_ForceLookAtPos(dVar32,0,&pMVar29->pos);
    }
    else {
      camera0::Cam0_ForceLookAtPos(dVar32,0,&pMVar29->pos);
    }
  }
  dVar32 = 0.0;
  if (pfVar7[0xd] != 0.0) {
    camera0::Cam0_SetCamDist((double)pfVar7[0xd],0x3f689374c0000000,&DAT_0003ea18,0);
    camera0::Cam0_RunningAtCamOff();
  }
  if (pfVar7[0xe] != 0.0) {
    camera0::Cam0_SetCamHeight((double)pfVar7[0xe],0x3f689374c0000000);
  }
  if (pfVar7[0x13] != 0.0) {
    camera0::Cam0_SetCamOfsZ((double)pfVar7[0x13],0x3f747ae140000000,&DAT_0003ea18,0);
  }
  sVar24 = *(short *)(pfVar7 + 0xf);
  if (sVar24 == 3) {
    camera0::Cam0_SetCamPull(0);
    camera0::Cam0_RunningAtCamOff();
    camera0::Cam0_disableLOS();
    dVar35 = 0.009999999776482582;
    uVar34 = 0x3fc99999a0000000;
    camera0::Cam0_SetPitchGainDamp(0x3f847ae140000000,0x3fc99999a0000000);
    sVar24 = *(short *)(pfVar7 + 8);
    puVar12[0x1f] = (longlong)(int)(animationSpeed * 120.5);
    dVar37 = 0.029999999329447746;
    if ((int)sVar24 < *(int *)((int)puVar12 + 0xfc)) {
      dVar37 = (double)fastfunc::FastIntToDouble(0x3f9eb851e0000000,*(int *)((int)puVar12 + 0xfc));
      puVar12[0x1f] = (longlong)(int)*(short *)(pfVar7 + 8);
      dVar37 = (double)(float)((double)(float)((double)(longlong)puVar12[0x1f] / dVar37) *
                               0.019999999552965164 + dVar35);
    }
    camera0::Cam0_SetCPosGainDamp(dVar37,uVar34);
    sVar24 = *(short *)(pfVar7 + 0xf);
  }
  if ((sVar24 == 4) || (sVar24 == 5)) {
    camera0::Cam0_SetCamPull(0);
    camera0::Cam0_RunningAtCamOff();
    camera0::Cam0_disableLOS();
    uVar34 = camera0::Cam0_SetPitchGainDamp(0x3f947ae140000000,0x3fc99999a0000000);
    uVar36 = 0x3f689374c0000000;
    camera0::Cam0_SetCamDist(0x40175c2900000000,0x3f689374c0000000,uVar34,0);
    if (*(short *)(pfVar7 + 0xf) == 4) {
      fVar8 = (pMVar29->pos).x - g_heroPosition.x;
      fVar1 = (pMVar29->pos).y - g_heroPosition.y;
      dVar35 = ABS((double)fVar8);
      dVar33 = ABS((double)fVar1);
      *(float *)(puVar12 + 0x10) = fVar8;
      *(float *)((int)puVar12 + 0x84) = fVar1;
      *(float *)(puVar12 + 0x11) = (float)(dVar35 - dVar33);
      uVar30 = (ulonglong)(*(uint *)(puVar12 + 0x10) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar12 + 0x11) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar12 + 0x84) >> 0x1d) & 4;
      dVar37 = ABS((double)*(float *)(puVar12 + 0x10));
      if ((double)*(float *)(puVar12 + 0x11) - dVar32 < 0.0) {
        dVar37 = dVar33;
      }
      fVar8 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar30 << 2));
      dVar33 = ABS((double)*(float *)((int)puVar12 + 0x84));
      if ((double)*(float *)(puVar12 + 0x11) - dVar32 < 0.0) {
        dVar33 = dVar35;
      }
      fVar1 = *(float *)(((uint)(uVar30 << 2) | 0x735900) + 4);
      if (dVar32 < dVar37) {
        lVar17 = uVar16 - 0x1a0;
        lVar25 = uVar16 - 0x11c;
        lVar26 = uVar16 - 0x10c;
        lVar31 = 2;
        fVar2 = (float)(dVar33 - dVar37) / (float)(dVar33 + dVar37);
        fVar3 = fVar2 * fVar2;
        *(float *)(puVar12 + 0x14) = fVar2;
        *(float *)(puVar12 + 0x13) = fVar2;
        *(float *)((int)puVar12 + 0x9c) = fVar2;
        *(float *)((int)puVar12 + 0x94) = fVar2;
        fVar2 = fVar3 * fVar3;
        *(float *)(puVar12 + 0x13) = *(float *)(puVar12 + 0x13) * fVar3;
        *(float *)((int)puVar12 + 0x9c) = *(float *)((int)puVar12 + 0x9c) * fVar2;
        *(float *)(puVar12 + 0x14) = *(float *)(puVar12 + 0x14) * fVar2 * fVar3;
        do {
          *(float *)((int)lVar17 + 0x94) = *(float *)((int)lVar17 + 0x84) * fVar2 * fVar2;
          iVar20 = (int)lVar25;
          lVar17 = lVar17 + 8;
          lVar25 = lVar25 + 8;
          *(float *)((int)lVar26 + 4) = *(float *)(iVar20 + 4) * fVar2 * fVar2;
          lVar26 = lVar26 + 8;
          lVar31 = lVar31 + -1;
        } while (lVar31 != 0);
        lVar31 = 4;
        lVar26 = uVar16 - 0x11c;
        pfVar27 = (float *)&DAT_007358e0;
        lVar17 = lVar18;
        lVar25 = lVar26;
        do {
          fVar2 = *pfVar27;
          fVar3 = pfVar27[1];
          pfVar27 = pfVar27 + 2;
          *(float *)((int)lVar17 + 0x94) = *(float *)((int)lVar17 + 0x94) * fVar2;
          lVar17 = lVar17 + 8;
          *(float *)((int)lVar25 + 4) = *(float *)((int)lVar25 + 4) * fVar3;
          lVar25 = lVar25 + 8;
          lVar31 = lVar31 + -1;
        } while (lVar31 != 0);
        lVar17 = 2;
        do {
          iVar20 = (int)lVar18;
          iVar21 = (int)lVar26;
          lVar18 = lVar18 + 0x10;
          lVar26 = lVar26 + 0x10;
          dVar32 = (double)((float)(dVar32 + (double)*(float *)(iVar20 + 0x94)) +
                            *(float *)(iVar21 + 4) + *(float *)(iVar21 + 8) +
                           *(float *)(iVar21 + 0xc));
          lVar17 = lVar17 + -1;
        } while (lVar17 != 0);
        dVar32 = (double)((float)(dVar32 + 0.7853981852531433) * fVar8 + fVar1);
      }
      if ((bVar15) &&
         (dVar32 = (double)fastfunc::FastSubRots((float)dVar32,pfVar7[0x10]),
         1.919862151145935 < dVar32)) {
        if (pfVar7[0xd] == 0.0) {
          camera0::Cam0_SetCamDist(0x4020000000000000,uVar36,&DAT_0003ea18,0);
        }
        else {
          camera0::Cam0_SetCamDist((double)(pfVar7[0xd] + 3.36),uVar36,&DAT_0003ea18,0);
        }
      }
    }
    camera0::Cam0_SetBumpFlags(0xb0);
  }
  return;
}



//==== 0003fad4  ns=camera::camera18  size=0x38
// sig: void Cam18_SetTriggered(UpdateCam * pCam)
// callers(2): 001a5f50 mobyupdate_unsorted::UpdateMoby_1051; 002737b8 mobyupdate_helpers::M1422_002737b8
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void camera::camera18::Cam18_SetTriggered(UpdateCam *pCam)

{
  if (pCam->type == 0x12) {
    *(undefined4 *)
     (*(int *)(ImportCameras + (int)((longlong)pCam->importCameraIdx << 5) + 0x1c) + 0x50) = 1;
  }
  return;
}



//==== 0003fb0c  ns=camera::camera18  size=0x78
// sig: int ActivateCamera_18(UpdateCam * pCam, UpdateCam * pCurr)
// callers(0): 
// callees(1): 0003eaa8 camera::camera18::Cam18_ModifyFollowCam

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int camera::camera18::ActivateCamera_18(UpdateCam *pCam,UpdateCam *pCurr)

{
  int iVar1;
  
  iVar1 = *(int *)(ImportCameras + (int)((longlong)pCam->importCameraIdx << 5) + 0x1c);
  if ((*(short *)((int)GameCamera.pCurrentUpdCam + 0x86) == 0) && (-1 < *(short *)(iVar1 + 0x20))) {
    Cam18_ModifyFollowCam(pCam);
  }
  *(undefined4 *)(iVar1 + 0x50) = 0;
  return 0;
}



//==== 0003fb84  ns=stub  size=0x4
// sig: undefined STUB_0003fb84(void)
// callers(0): 
// callees(0): 

void stub::STUB_0003fb84(void)

{
  return;
}



//==== 0003fb88  ns=stub  size=0x4
// sig: undefined STUB_0003fb88(void)
// callers(0): 
// callees(0): 

void stub::STUB_0003fb88(void)

{
  return;
}



//==== 0003fb8c  ns=stub  size=0x4
// sig: undefined STUB_0003fb8c(void)
// callers(0): 
// callees(0): 

void stub::STUB_0003fb8c(void)

{
  return;
}



//==== 0003fb90  ns=Global  size=0x14
// sig: undefined SECTION_CAMERA_CAMERA_UNK(void)
// callers(0): 
// callees(0): 

void SECTION_CAMERA_CAMERA_UNK(void)

{
  DAT_0071db00 = 0x10000;
  return;
}



//==== 0003fba8  ns=camera::camera19  size=0x2c
// sig: void Cam19_Enable(int importIdx)
// callers(6): 00255550 mobyupdate_unsorted::UpdateMoby_1352; 002732f8 mobyupdate_unsorted::UpdateMoby_1421; 0027a488 mobyupdate_unsorted::UpdateMoby_1424; 0027ba70 mobyupdate_unsorted::UpdateMoby_1430; 0035d338 mobyupdate_helpers::M388_0035d338; 004b4930 mobyupdate_unsorted::UpdateMoby_921
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void camera::camera19::Cam19_Enable(int importIdx)

{
  int iVar1;
  
  iVar1 = *(int *)(ImportCameras + (int)((longlong)importIdx << 5) + 0x1c);
  *(undefined1 *)(iVar1 + 0x38) = 1;
  *(undefined1 *)(iVar1 + 0x39) = 0;
  return;
}



//==== 0003fbd4  ns=camera::camera19  size=0x3c
// sig: void Cam19_Disable(int importIdx)
// callers(2): 0035ffd8 mobyupdate_unsorted::UpdateMoby_388; 004b4020 mobyupdate_helpers::M921_004b4020
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void camera::camera19::Cam19_Disable(int importIdx)

{
  if (*(short *)((int)GameCamera.pCurrentUpdCam + 0x86) == 0x13) {
    *(undefined1 *)(*(int *)(ImportCameras + (int)((longlong)importIdx << 5) + 0x1c) + 0x39) = 1;
  }
  return;
}



//==== 0003fc10  ns=camera::camera19  size=0x7c
// sig: int Cam19_IsDone(int importIdx)
// callers(1): 0027ba70 mobyupdate_unsorted::UpdateMoby_1430
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int camera::camera19::Cam19_IsDone(int importIdx)

{
  short sVar1;
  int iVar2;
  
  if (*(short *)((int)GameCamera.pCurrentUpdCam + 0x86) == 0x13) {
    sVar1 = *(short *)(*(int *)(*(int *)(*(int *)(ImportCameras + (int)((longlong)importIdx << 5) +
                                                 0x1c) + 4) + 0x70) + 0x54);
    if ((sVar1 == 1) && (boot::SceneScreenFade != 0.0)) {
      iVar2 = 1;
    }
    else if (sVar1 == 3) {
      iVar2 = 1;
    }
    else {
      iVar2 = 0;
    }
  }
  else {
    iVar2 = 1;
  }
  return iVar2;
}



//==== 0003fc8c  ns=camera::camera19  size=0x13c
// sig: int Cam19_IsHeroInVolume(UpdateCam * pCam)
// callers(1): 00040f1c camera::camera19::ActivateCamera_19
// callees(4): 00104e44 mobyutil::PointInsideComplexPoly; 00110b70 mobyutil::MB_IsPntInCuboid; 00110c60 mobyutil::MB_IsPntInCylinder; 00110d48 mobyutil::MB_IsPntInSphere

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int camera::camera19::Cam19_IsHeroInVolume(UpdateCam *pCam)

{
  int iVar1;
  
  iVar1 = *(int *)(ImportCameras + (int)((longlong)pCam->importCameraIdx << 5) + 0x1c);
  if (*(int *)(iVar1 + 0xc) < 0) {
    if (*(int *)(iVar1 + 0x10) < 0) {
      if (*(int *)(iVar1 + 8) < 0) {
        if (*(int *)(iVar1 + 0x14) < 0) {
          if (*(char *)(iVar1 + 0x38) == '\0') {
            return 0;
          }
          if (*(char *)(iVar1 + 0x39) != '\0') {
            return 0;
          }
          return 1;
        }
        iVar1 = mobyutil::PointInsideComplexPoly
                          (&g_heroPosition,(Vec4 *)Splines[*(int *)(iVar1 + 0x14)]->points,
                           Splines[*(int *)(iVar1 + 0x14)]->cnt);
      }
      else {
        iVar1 = mobyutil::MB_IsPntInSphere(&g_heroPosition,(longlong)*(int *)(iVar1 + 8));
      }
    }
    else {
      iVar1 = mobyutil::MB_IsPntInCylinder(&g_heroPosition,(longlong)*(int *)(iVar1 + 0x10));
    }
  }
  else {
    iVar1 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)*(int *)(iVar1 + 0xc));
  }
  if (iVar1 == 0) {
    return 0;
  }
  return 1;
}



//==== 0003fde8  ns=camera::camera19  size=0x620
// sig: void InitCamera_19(UpdateCam * pCam)
// callers(0): 
// callees(2): 000b72b0 hero::TransitionMovement; 00502730 fastfunc::FastIntToDouble

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void camera::camera19::InitCamera_19(UpdateCam *pCam)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  short sVar5;
  uint uVar6;
  void *pvVar7;
  void *pvVar8;
  float fVar9;
  undefined4 *puVar10;
  Spline *pSVar11;
  undefined2 uVar12;
  ulonglong *puVar13;
  ulonglong uVar14;
  void *pvVar17;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  void *pvVar23;
  longlong lVar22;
  int iVar24;
  Spline *pSVar25;
  float *pfVar26;
  float *pfVar27;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar28;
  longlong lVar29;
  double dVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  
  uVar14 = ZEXT48(&stack0x00000000);
  lVar16 = uVar14 - 0xe0;
  puVar13 = (ulonglong *)lVar16;
  *puVar13 = uVar14;
  puVar13[0x1e] = in_LR;
  puVar13[0x1b] = unaff_r31;
  auVar31 = ZEXT416(0xfffffff0);
  puVar13[0x18] = unaff_r28;
  iVar21 = ImportCameras;
  sVar5 = pCam->importCameraIdx;
  puVar13[0x1a] = unaff_r30;
  uVar6 = *(uint *)(iVar21 + (int)((longlong)sVar5 << 5) + 0x1c);
  puVar13[0x19] = unaff_r29;
  *(undefined1 *)(uVar6 + 0x38) = 1;
  pvVar7 = pCam->control;
  lVar28 = 2;
  *(undefined4 *)((int)pvVar7 + 0x40) = 0;
  fVar9 = 0.0;
  *(undefined2 *)((int)pvVar7 + 0x54) = 0;
  auVar32 = loadVectorLeftIndexed(0x3a,(ulonglong)uVar6);
  auVar33 = loadVectorRightIndexed(0x4a,(ulonglong)uVar6);
  *(undefined4 *)((int)pvVar7 + 0x44) = 0;
  *(undefined4 *)((int)pvVar7 + 0x48) = 0;
  *(undefined4 *)((int)pvVar7 + 0x4c) = 0;
  *(undefined4 *)((int)pvVar7 + 0x50) = 0;
  auVar32 = vectorShiftRightAlgebraicWord
                      (auVar32 | auVar33,
                       auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60);
  auVar33 = loadVectorLeftIndexed(4,0x3fdc8);
  auVar31 = ZEXT416(0xffffffff);
  auVar34 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
  auVar31 = auVar33 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar32 = vectorConvertFromSignedFixedPointWord(auVar32,0);
  auVar35 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
  auVar33 = vectorShiftLeftIntegerWord(auVar34,auVar34);
  pvVar8 = pCam->control;
  auVar31 = vectorAddFloatingPoint
                      (auVar32,auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60);
  auVar31 = vectorMultiplyAddFloatingPoint(auVar35,auVar31,auVar33);
  auVar31 = vectorConvertToSignedFixedPointWordSaturate(auVar31,0);
  puVar13[0x17] = unaff_r27;
  puVar13[0x16] = unaff_r26;
  auVar31 = vectorSplatHalfWord(auVar31,1);
  uVar12 = storeVectorElementHalfWordIndexed(auVar31,0x56,ZEXT48(pvVar7));
  *(undefined2 *)((int)pvVar7 + 0x56) = uVar12;
  pvVar17 = pvVar8;
  pvVar23 = pvVar8;
  do {
    *(undefined4 *)((int)pvVar17 + 0x68) = 0;
    *(undefined2 *)((int)pvVar23 + 0x58) = 0xffff;
    *(undefined4 *)((int)pvVar17 + 0x6c) = 0;
    *(undefined2 *)((int)pvVar23 + 0x5a) = 0xffff;
    *(undefined4 *)((int)pvVar17 + 0x70) = 0;
    *(undefined2 *)((int)pvVar23 + 0x5c) = 0xffff;
    *(undefined4 *)((int)pvVar17 + 0x74) = 0;
    *(undefined2 *)((int)pvVar23 + 0x5e) = 0xffff;
    fVar4 = ViewContext.xratio;
    pvVar17 = (void *)((int)pvVar17 + 0x10);
    pvVar23 = (void *)((int)pvVar23 + 8);
    lVar28 = lVar28 + -1;
  } while (lVar28 != 0);
  fVar3 = ABS(ViewContext.xratio);
  *(undefined4 *)(puVar13 + 0xe) = 0x3f800000;
  *(float *)((int)puVar13 + 0x74) = 1.0 - fVar3;
  uVar15 = (ulonglong)(*(uint *)((int)puVar13 + 0x74) >> 0x1e) & 2 |
           (ulonglong)((uint)fVar4 >> 0x1d) & 4;
  fVar4 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar15 << 2));
  fVar2 = ABS(*(float *)(puVar13 + 0xe));
  if (*(float *)((int)puVar13 + 0x74) - 0.0 < 0.0) {
    fVar2 = fVar3;
  }
  fVar1 = *(float *)(((uint)(uVar15 << 2) | 0x735900) + 4);
  if (*(float *)((int)puVar13 + 0x74) - 0.0 < 0.0) {
    fVar3 = 1.0;
  }
  if (0.0 < fVar2) {
    lVar28 = uVar14 - 0xd0;
    lVar29 = 2;
    lVar18 = uVar14 - 0x68;
    lVar22 = uVar14 - 0x58;
    fVar2 = (fVar3 - fVar2) / (fVar3 + fVar2);
    fVar3 = fVar2 * fVar2;
    *(float *)((int)puVar13 + 0x84) = fVar2;
    *(float *)((int)puVar13 + 0x7c) = fVar2;
    *(float *)(puVar13 + 0x10) = fVar2;
    *(float *)(puVar13 + 0xf) = fVar2;
    fVar2 = fVar3 * fVar3;
    *(float *)((int)puVar13 + 0x7c) = *(float *)((int)puVar13 + 0x7c) * fVar3;
    *(float *)(puVar13 + 0x10) = *(float *)(puVar13 + 0x10) * fVar2;
    *(float *)((int)puVar13 + 0x84) = *(float *)((int)puVar13 + 0x84) * fVar2 * fVar3;
    do {
      *(float *)((int)lVar28 + 0x78) = *(float *)((int)lVar28 + 0x68) * fVar2 * fVar2;
      iVar21 = (int)lVar18;
      lVar28 = lVar28 + 8;
      lVar18 = lVar18 + 8;
      *(float *)((int)lVar22 + 4) = *(float *)(iVar21 + 4) * fVar2 * fVar2;
      lVar22 = lVar22 + 8;
      lVar29 = lVar29 + -1;
    } while (lVar29 != 0);
    lVar29 = 4;
    lVar22 = uVar14 - 0x68;
    pfVar27 = (float *)&DAT_007358e0;
    lVar28 = lVar16;
    lVar18 = lVar22;
    do {
      fVar2 = *pfVar27;
      fVar3 = pfVar27[1];
      pfVar27 = pfVar27 + 2;
      *(float *)((int)lVar28 + 0x78) = *(float *)((int)lVar28 + 0x78) * fVar2;
      lVar28 = lVar28 + 8;
      *(float *)((int)lVar18 + 4) = *(float *)((int)lVar18 + 4) * fVar3;
      lVar18 = lVar18 + 8;
      lVar29 = lVar29 + -1;
    } while (lVar29 != 0);
    lVar28 = 2;
    do {
      iVar21 = (int)lVar16;
      lVar16 = lVar16 + 0x10;
      iVar24 = (int)lVar22;
      lVar22 = lVar22 + 0x10;
      fVar9 = fVar9 + *(float *)(iVar21 + 0x78) + *(float *)(iVar24 + 4) + *(float *)(iVar24 + 8) +
              *(float *)(iVar24 + 0xc);
      lVar28 = lVar28 + -1;
    } while (lVar28 != 0);
    fVar9 = (fVar9 + 0.7853982) * fVar4 + fVar1;
  }
  iVar21 = *(int *)(uVar6 + 0x20);
  *(float *)((int)pvVar8 + 0x88) = fVar9 * 2.0;
  if (-1 < iVar21) {
    pSVar11 = Splines[iVar21];
    iVar21 = pSVar11->cnt;
    if (0 < iVar21) {
      iVar24 = 0;
      pfVar27 = (float *)((int)pvVar8 + 0x68);
      pSVar25 = pSVar11;
      iVar19 = 0;
      do {
        fVar9 = pSVar25->points[0].w;
        if (0 < (int)fVar9) {
          *pfVar27 = pSVar25->points[0].w;
          if (0x43340000 <
              (int)(((uint)((int)fVar9 >> 0x1f) >> 1 ^ (uint)fVar9) - ((int)fVar9 >> 0x1f))) {
            *pfVar27 = *(float *)((int)pvVar8 + 0x88) * 57.295776;
          }
          pfVar27 = pfVar27 + 1;
          *(short *)((int)pvVar8 + iVar24 + 0x58) = (short)iVar19;
          iVar24 = iVar24 + 2;
        }
        iVar20 = iVar19 + 1;
        pfVar26 = (float *)((int)pSVar11 + ((iVar20 - (iVar20 / iVar21) * iVar21) * 4 + 4) * 4);
        fVar9 = pSVar25->points[0].y - pfVar26[1];
        fVar4 = pSVar25->points[0].x - *pfVar26;
        fVar2 = pSVar25->points[0].z - pfVar26[2];
        fVar9 = SQRT(fVar2 * fVar2 + fVar4 * fVar4 + fVar9 * fVar9);
        pSVar25->points[0].w = fVar9;
        iVar21 = pSVar11->cnt;
        if (iVar19 < iVar21 + -1) {
          *(float *)((int)pvVar7 + 0x48) = *(float *)((int)pvVar7 + 0x48) + fVar9;
        }
        pSVar25 = (Spline *)pSVar25->points;
        iVar19 = iVar20;
      } while (iVar20 < iVar21);
    }
  }
  if (0 < *(short *)(uVar6 + 0x3a)) {
    puVar13[0x13] = (longlong)(int)*(short *)(uVar6 + 0x3a);
    puVar13[0x13] = (longlong)(int)(animationSpeed * ((float)(longlong)puVar13[0x13] + 0.5));
    dVar30 = (double)fastfunc::FastIntToDouble(*(undefined4 *)((int)puVar13 + 0x9c));
    *(float *)(uVar6 + 0x3c) = (float)((double)*(float *)((int)pvVar7 + 0x48) / dVar30) * 60.0;
  }
  if (-1 < *(int *)(uVar6 + 0x24)) {
    pSVar11 = Splines[*(int *)(uVar6 + 0x24)];
    iVar21 = pSVar11->cnt;
    if (0 < iVar21) {
      iVar24 = 0;
      pSVar25 = pSVar11;
      do {
        iVar19 = iVar24 + 1;
        iVar21 = iVar19 - (iVar19 / iVar21) * iVar21;
        fVar9 = pSVar25->points[0].y - *(float *)((int)pSVar11 + (iVar21 * 4 + 5) * 4);
        fVar4 = pSVar25->points[0].x - *(float *)((int)pSVar11 + (iVar21 * 4 + 4) * 4);
        fVar2 = pSVar25->points[0].z - *(float *)((int)pSVar11 + (iVar21 * 4 + 6) * 4);
        fVar9 = SQRT(fVar2 * fVar2 + fVar4 * fVar4 + fVar9 * fVar9);
        pSVar25->points[0].w = fVar9;
        iVar21 = pSVar11->cnt;
        if (iVar24 < iVar21 + -1) {
          *(float *)((int)pvVar7 + 0x4c) = *(float *)((int)pvVar7 + 0x4c) + fVar9;
        }
        pSVar25 = (Spline *)pSVar25->points;
        iVar24 = iVar19;
      } while (iVar19 < iVar21);
    }
  }
  puVar10 = (undefined4 *)pCam->control;
  *puVar10 = 0x3cf5c28f;
  puVar10[1] = 0x3e4ccccd;
  puVar10[7] = 0;
  puVar10[6] = 0;
  puVar10[5] = 0;
  puVar10[4] = 0;
  pvVar7 = pCam->control;
  *(undefined4 *)((int)pvVar7 + 0x20) = 0x3cf5c28f;
  *(undefined4 *)((int)pvVar7 + 0x24) = 0x3e4ccccd;
  *(undefined4 *)((int)pvVar7 + 0x3c) = 0;
  *(undefined4 *)((int)pvVar7 + 0x38) = 0;
  *(undefined4 *)((int)pvVar7 + 0x34) = 0;
  *(undefined4 *)((int)pvVar7 + 0x30) = 0;
  pvVar7 = GameCamera.pLastUpdCam;
  pCam->pos[0] = *(float *)((int)GameCamera.pLastUpdCam + 0x30);
  pCam->pos[1] = *(float *)((int)pvVar7 + 0x34);
  pCam->pos[2] = *(float *)((int)pvVar7 + 0x38);
  pCam->pos[3] = *(float *)((int)pvVar7 + 0x3c);
                    /* WARNING: Load size is inaccurate */
  pCam->mtx[0] = *pvVar7;
  pCam->mtx[1] = *(float *)((int)pvVar7 + 4);
  pCam->mtx[2] = *(float *)((int)pvVar7 + 8);
  pCam->mtx[3] = *(float *)((int)pvVar7 + 0xc);
  pCam->mtx[4] = *(float *)((int)pvVar7 + 0x10);
  pCam->mtx[5] = *(float *)((int)pvVar7 + 0x14);
  pCam->mtx[6] = *(float *)((int)pvVar7 + 0x18);
  pCam->mtx[7] = *(float *)((int)pvVar7 + 0x1c);
  pCam->mtx[8] = *(float *)((int)pvVar7 + 0x20);
  iVar21 = *(int *)(uVar6 + 0x4c);
  pCam->mtx[9] = *(float *)((int)pvVar7 + 0x24);
  pCam->mtx[10] = *(float *)((int)pvVar7 + 0x28);
  pCam->mtx[0xb] = *(float *)((int)pvVar7 + 0x2c);
  if (iVar21 == 0) {
    hero::TransitionMovement(0x72,1);
  }
  return;
}



