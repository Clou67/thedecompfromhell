// game/update/moby600.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 11 functions, 0x3d5a48-0x3d6c80
#include "game/update/moby600.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/draw.h"
#include "game/mesh.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/vuchain.h"
#include "idol/fastfunc.h"

// 0x03d5a48 (0x14 bytes)
void M600_003d5a48(void)

{
  DAT_00846844 = 0x10000;
  return;
}


// 0x03d5a60 (0xf0 bytes)
void M600_003d5a60(int param_1)

{
  int iVar1;
  undefined **ppuVar2;
  undefined4 *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  
  iVar1 = 0;
  ppuVar2 = &PTR_DAT_00853554;
  ppuVar4 = &PTR_DAT_00853520;
  puVar3 = &DAT_0084db68;
  ppuVar5 = &PTR_DAT_008535bc;
  do {
    AddUVOffsets(&DAT_010ca030,*ppuVar2,*puVar3,&DAT_010c9ff8 + param_1 * 2);
    DrawMeshSet(*puVar3,*ppuVar4,*ppuVar5,&DAT_010ca030,9);
    iVar1 = iVar1 + 1;
    ppuVar2 = ppuVar2 + 1;
    puVar3 = puVar3 + 1;
    ppuVar4 = ppuVar4 + 1;
    ppuVar5 = ppuVar5 + 1;
  } while (iVar1 < 0xd);
  return;
}


// 0x03d5b50 (0xf0 bytes)
void M600_003d5b50(int param_1)

{
  int iVar1;
  undefined **ppuVar2;
  undefined4 *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  
  iVar1 = 0;
  ppuVar2 = &PTR_DAT_0084dae4;
  ppuVar4 = &PTR_DAT_0084dab8;
  puVar3 = &DAT_008492b8;
  ppuVar5 = &PTR_DAT_0084db3c;
  do {
    AddUVOffsets(&DAT_010ca030,*ppuVar2,*puVar3,&DAT_010ca010 + param_1 * 2);
    DrawMeshSet(*puVar3,*ppuVar4,*ppuVar5,&DAT_010ca030,9);
    iVar1 = iVar1 + 1;
    ppuVar2 = ppuVar2 + 1;
    puVar3 = puVar3 + 1;
    ppuVar4 = ppuVar4 + 1;
    ppuVar5 = ppuVar5 + 1;
  } while (iVar1 < 0xb);
  return;
}


// 0x03d5c40 (0xf0 bytes)
void M600_003d5c40(int param_1)

{
  int iVar1;
  undefined **ppuVar2;
  undefined4 *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  
  iVar1 = 0;
  ppuVar2 = &PTR_DAT_00849258;
  ppuVar4 = &PTR_DAT_00849238;
  puVar3 = &DAT_008468c8;
  ppuVar5 = &PTR_DAT_00849298;
  do {
    AddUVOffsets(&DAT_010ca030,*ppuVar2,*puVar3,&DAT_010ca020 + param_1 * 2);
    DrawMeshSet(*puVar3,*ppuVar4,*ppuVar5,&DAT_010ca030,9);
    iVar1 = iVar1 + 1;
    ppuVar2 = ppuVar2 + 1;
    puVar3 = puVar3 + 1;
    ppuVar4 = ppuVar4 + 1;
    ppuVar5 = ppuVar5 + 1;
  } while (iVar1 < 8);
  return;
}


// 0x03d5d30 (0x608 bytes)
void M600_003d5d30(void)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined **ppuVar10;
  int iVar11;
  
  uVar1 = idol_draw::PackCmd(0,1,0,1,0x80);
  SetGSReg(3,uVar1);
  uVar1 = SCE_GS_SET_CLAMP(0,0,0,0,0,0);
  SetGSReg(6,uVar1);
  uVar1 = SCE_GS_SET_TEX1(0,0,1,1,1,0,0xff90);
  SetGSReg(0x1a,uVar1);
  uVar1 = idol_draw::Blend(1,0,0x3f,1,0,0,1,2);
  SetGSReg(0x16,uVar1);
  STUB_00071170();
  uVar1 = GetEffectTex(0x3a);
  SetGSReg(0x18,uVar1);
  uVar1 = idol_draw::PackCmd(0,1,0,1,DAT_00846880);
  SetGSReg(3,uVar1);
  iVar11 = 0;
  ppuVar2 = &PTR_DAT_00853520;
  ppuVar3 = &PTR_DAT_00853554;
  puVar7 = &DAT_0084db68;
  ppuVar4 = &PTR_DAT_008535bc;
  iVar9 = 0;
  ppuVar10 = ppuVar3;
  ppuVar6 = ppuVar2;
  ppuVar5 = ppuVar4;
  puVar8 = puVar7;
  do {
    AddUVOffsets(&DAT_010ca030,*ppuVar10,*puVar8,&DAT_010c9ff8);
    DrawMeshSet(*puVar8,*ppuVar6,*ppuVar5,&DAT_010ca030,9);
    iVar11 = iVar11 + 1;
    ppuVar10 = ppuVar10 + 1;
    puVar8 = puVar8 + 1;
    ppuVar6 = ppuVar6 + 1;
    ppuVar5 = ppuVar5 + 1;
  } while (iVar11 < 0xd);
  uVar1 = GetEffectTex(0x3b);
  SetGSReg(0x18,uVar1);
  uVar1 = idol_draw::PackCmd(2,0,2,1,(int)(DAT_00846884 * (uint)DAT_010c9ff0) >> 8);
  SetGSReg(3,uVar1);
  iVar11 = 0;
  ppuVar10 = ppuVar3;
  ppuVar6 = ppuVar2;
  ppuVar5 = ppuVar4;
  puVar8 = puVar7;
  do {
    AddUVOffsets(&DAT_010ca030,*ppuVar10,*puVar8,&DAT_010ca000);
    DrawMeshSet(*puVar8,*ppuVar6,*ppuVar5,&DAT_010ca030,9);
    iVar11 = iVar11 + 1;
    ppuVar10 = ppuVar10 + 1;
    puVar8 = puVar8 + 1;
    ppuVar6 = ppuVar6 + 1;
    ppuVar5 = ppuVar5 + 1;
  } while (iVar11 < 0xd);
  uVar1 = idol_draw::PackCmd(0,2,2,1,(int)(DAT_00846888 * (uint)DAT_010c9ff0) >> 8);
  SetGSReg(3,uVar1);
  iVar11 = 0;
  do {
    AddUVOffsets(&DAT_010ca030,*ppuVar3,*puVar7,&DAT_010ca008);
    DrawMeshSet(*puVar7,*ppuVar2,*ppuVar4,&DAT_010ca030,9);
    iVar11 = iVar11 + 1;
    ppuVar3 = ppuVar3 + 1;
    puVar7 = puVar7 + 1;
    ppuVar2 = ppuVar2 + 1;
    ppuVar4 = ppuVar4 + 1;
  } while (iVar11 < 0xd);
  uVar1 = GetEffectTex(0x3c);
  SetGSReg(0x18,uVar1);
  uVar1 = idol_draw::PackCmd(0,2,0,1,DAT_008468b4);
  SetGSReg(3,uVar1);
  ppuVar2 = &PTR_DAT_0084dae4;
  ppuVar4 = &PTR_DAT_0084dab8;
  puVar7 = &DAT_008492b8;
  ppuVar3 = &PTR_DAT_0084db3c;
  iVar11 = 0;
  ppuVar10 = ppuVar2;
  ppuVar6 = ppuVar4;
  ppuVar5 = ppuVar3;
  puVar8 = puVar7;
  do {
    AddUVOffsets(&DAT_010ca030,*ppuVar10,*puVar8,&DAT_010ca010);
    DrawMeshSet(*puVar8,*ppuVar6,*ppuVar5,&DAT_010ca030,9);
    iVar11 = iVar11 + 1;
    ppuVar10 = ppuVar10 + 1;
    puVar8 = puVar8 + 1;
    ppuVar6 = ppuVar6 + 1;
    ppuVar5 = ppuVar5 + 1;
  } while (iVar11 < 0xb);
  uVar1 = idol_draw::PackCmd(0,2,0,1,DAT_008468b8);
  SetGSReg(3,uVar1);
  iVar11 = 0;
  do {
    AddUVOffsets(&DAT_010ca030,*ppuVar2,*puVar7,&DAT_010ca018);
    DrawMeshSet(*puVar7,*ppuVar4,*ppuVar3,&DAT_010ca030,9);
    iVar11 = iVar11 + 1;
    ppuVar2 = ppuVar2 + 1;
    puVar7 = puVar7 + 1;
    ppuVar4 = ppuVar4 + 1;
    ppuVar3 = ppuVar3 + 1;
  } while (iVar11 < 0xb);
  uVar1 = GetEffectTex(0x3d);
  SetGSReg(0x18,uVar1);
  uVar1 = idol_draw::PackCmd(0,2,0,1,DAT_008468c4);
  SetGSReg(3,uVar1);
  ppuVar10 = &PTR_DAT_00849298;
  ppuVar5 = &PTR_DAT_00849258;
  puVar8 = &DAT_008468c8;
  ppuVar6 = &PTR_DAT_00849238;
  do {
    AddUVOffsets(&DAT_010ca030,*ppuVar5,*puVar8,&DAT_010ca020);
    DrawMeshSet(*puVar8,*ppuVar6,*ppuVar10,&DAT_010ca030,9);
    iVar9 = iVar9 + 1;
    ppuVar5 = ppuVar5 + 1;
    puVar8 = puVar8 + 1;
    ppuVar6 = ppuVar6 + 1;
    ppuVar10 = ppuVar10 + 1;
  } while (iVar9 < 8);
  return;
}


// 0x03d6340 (0x220 bytes)
void M600_003d6340
               (double param_1,double param_2,double param_3,double param_4,int param_5,int param_6,
               int *param_7)

{
  uint uVar1;
  int iVar5;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int in_r10;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  
  iVar6 = 0;
  if (0 < param_6) {
    iVar10 = 0;
    dVar15 = 255.0;
    piVar9 = param_7;
    do {
      iVar7 = 0;
      if (0 < *piVar9) {
        iVar8 = 0;
        do {
          uVar1 = *(uint *)(*(int *)(param_5 + iVar10) + iVar8);
          if (in_r10 == 0) {
            dVar11 = (double)FastIntToDouble(uVar1 & 0xff);
            dVar12 = (double)FastIntToDouble(uVar1 >> 8 & 0xff);
            dVar13 = (double)FastIntToDouble(uVar1 >> 0x10 & 0xff);
            dVar14 = (double)FastIntToDouble(uVar1 >> 0x18);
          }
          else {
            dVar14 = (double)FastIntToDouble(uVar1 >> 0x18);
            dVar12 = dVar15;
            dVar13 = dVar15;
            dVar11 = dVar15;
          }
          dVar14 = (double)(float)(dVar14 * param_4);
          dVar13 = (double)(float)(dVar13 * param_3);
          dVar12 = (double)(float)(dVar12 * param_2);
          iVar5 = FastDoubleToInt((double)(float)(dVar11 * param_1));
          uVar2 = FastDoubleToInt(dVar14);
          uVar3 = FastDoubleToInt(dVar13);
          uVar4 = FastDoubleToInt(dVar12);
          iVar7 = iVar7 + 1;
          *(int *)(*(int *)(param_5 + iVar10) + iVar8) =
               (int)((uVar2 & 0xffffffff) << 0x18) + (int)((uVar3 & 0xffffffff) << 0x10) +
               (int)((uVar4 & 0xffffffff) << 8) + iVar5;
          iVar8 = iVar8 + 4;
        } while (iVar7 < *(int *)((int)param_7 + iVar10));
      }
      iVar6 = iVar6 + 1;
      piVar9 = piVar9 + 1;
      iVar10 = iVar10 + 4;
    } while (iVar6 < param_6);
  }
  return;
}


// 0x03d6588 (0x14c bytes)
void M600_003d6588
               (double param_1,double param_2,double param_3,float *param_4,undefined8 param_5,
               undefined8 param_6,float *param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = (float)((double)DAT_0071f424 * param_1 + (double)*param_7);
  *param_7 = fVar1;
  if (1.0 < fVar1) {
    fVar1 = fVar1 - 2.0;
    *param_7 = fVar1;
  }
  if (fVar1 < -1.0) {
    fVar1 = fVar1 + 2.0;
    *param_7 = fVar1;
  }
  fVar2 = (float)((double)DAT_0071f424 * param_2 + (double)param_7[1]);
  param_7[1] = fVar2;
  if (1.0 < fVar2) {
    fVar2 = fVar2 - 2.0;
    param_7[1] = fVar2;
  }
  if (fVar2 < -1.0) {
    param_7[1] = fVar2 + 2.0;
  }
  fVar1 = fVar1 * 3.1415927;
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
  *param_4 = (float)((double)(fVar1 * fVar4 * 2.601887e-06 +
                             fVar4 * -0.0001980741 +
                             fVar2 * 0.0083330255 + fVar1 * fVar3 * -0.16666657 + fVar3) * param_3);
  fVar1 = param_7[1] * 3.1415927;
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
  param_4[1] = (float)((double)(fVar1 * fVar4 * 2.601887e-06 +
                               fVar4 * -0.0001980741 +
                               fVar2 * 0.0083330255 + fVar1 * fVar3 * -0.16666657 + fVar3) * param_3
                      );
  return;
}


// 0x03d66e0 (0xb8 bytes)
void M600_003d66e0(longlong param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = DAT_0071f424;
  iVar1 = (int)(param_1 << 3);
  fVar2 = *(float *)(&DAT_0084688c + iVar1) * DAT_0071f424 + *(float *)((int)&DAT_010c9ff8 + iVar1);
  *(float *)((int)&DAT_010c9ff8 + iVar1) = fVar2;
  if (1.0 < fVar2) {
    fVar2 = fVar2 - 1.0;
    *(float *)((int)&DAT_010c9ff8 + iVar1) = fVar2;
  }
  if (fVar2 < -1.0) {
    *(float *)((int)&DAT_010c9ff8 + iVar1) = fVar2 + 1.0;
  }
  fVar2 = *(float *)(&DAT_00846890 + iVar1) * fVar3 + *(float *)((int)&DAT_010c9ffc + iVar1);
  *(float *)((int)&DAT_010c9ffc + iVar1) = fVar2;
  if (1.0 < fVar2) {
    fVar2 = fVar2 - 1.0;
    *(float *)((int)&DAT_010c9ffc + iVar1) = fVar2;
  }
  if (fVar2 < -1.0) {
    *(float *)((int)&DAT_010c9ffc + iVar1) = fVar2 + 1.0;
  }
  return;
}


// 0x03d67a0 (0xb8 bytes)
void M600_003d67a0(longlong param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = DAT_0071f424;
  iVar1 = (int)(param_1 << 3);
  fVar2 = *(float *)(&DAT_008468a4 + iVar1) * DAT_0071f424 + *(float *)((int)&DAT_010ca010 + iVar1);
  *(float *)((int)&DAT_010ca010 + iVar1) = fVar2;
  if (1.0 < fVar2) {
    fVar2 = fVar2 - 1.0;
    *(float *)((int)&DAT_010ca010 + iVar1) = fVar2;
  }
  if (fVar2 < -1.0) {
    *(float *)((int)&DAT_010ca010 + iVar1) = fVar2 + 1.0;
  }
  fVar2 = *(float *)(&DAT_008468a8 + iVar1) * fVar3 + *(float *)((int)&DAT_010ca014 + iVar1);
  *(float *)((int)&DAT_010ca014 + iVar1) = fVar2;
  if (1.0 < fVar2) {
    fVar2 = fVar2 - 1.0;
    *(float *)((int)&DAT_010ca014 + iVar1) = fVar2;
  }
  if (fVar2 < -1.0) {
    *(float *)((int)&DAT_010ca014 + iVar1) = fVar2 + 1.0;
  }
  return;
}


// 0x03d6860 (0xb8 bytes)
void M600_003d6860(longlong param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = DAT_0071f424;
  iVar1 = (int)(param_1 << 3);
  fVar2 = *(float *)(&DAT_008468bc + iVar1) * DAT_0071f424 + *(float *)((int)&DAT_010ca020 + iVar1);
  *(float *)((int)&DAT_010ca020 + iVar1) = fVar2;
  if (1.0 < fVar2) {
    fVar2 = fVar2 - 1.0;
    *(float *)((int)&DAT_010ca020 + iVar1) = fVar2;
  }
  if (fVar2 < -1.0) {
    *(float *)((int)&DAT_010ca020 + iVar1) = fVar2 + 1.0;
  }
  fVar2 = *(float *)(&DAT_008468c0 + iVar1) * fVar3 + *(float *)((int)&DAT_010ca024 + iVar1);
  *(float *)((int)&DAT_010ca024 + iVar1) = fVar2;
  if (1.0 < fVar2) {
    fVar2 = fVar2 - 1.0;
    *(float *)((int)&DAT_010ca024 + iVar1) = fVar2;
  }
  if (fVar2 < -1.0) {
    *(float *)((int)&DAT_010ca024 + iVar1) = fVar2 + 1.0;
  }
  return;
}


// 0x03d6950 (0x330 bytes)
// strings: 003d6918: '?&ff_q' (raw)

/* Moby 600 */

void UpdateMoby_600(MobyInstance *moby)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 uVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  double dVar7;
  undefined8 uVar8;
  double dVar9;
  GPiece<16> auVar10;
  GPiece<16> auVar11;
  GPiece<16> auVar12;
  GPiece<16> auVar13;
  GPiece<16> auVar14;
  GPiece<16> auVar15;
  GPiece<16> local_30;
  
  if (moby->state == 0) {
    if (DAT_010c9ff4 == 0) {
      uVar8 = 0x3fe0000000000000;
      M600_003d6340
                (0x3fe0000000000000,0x3fe0000000000000,0x3fe4ccccc0000000,0x3fe0000000000000,
                 &PTR_DAT_008535bc,0xd,&DAT_0084db68);
      uVar6 = 0x3ff0000000000000;
      M600_003d6340
                (uVar8,uVar8,uVar8,0x3ff0000000000000,&PTR_DAT_00849298,8,&DAT_008468c8);
      M600_003d6340
                (0x3fd0000000000000,0x3fd0000000000000,0x3fd0000000000000,uVar6,&PTR_DAT_0084db3c,
                 0xb,&DAT_008492b8);
      DAT_010c9ff4 = 1;
    }
    auVar12 = ZEXT416(0);
    auVar10 = auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60;
    moby->state = '\x01';
    DAT_010c9ff8 = 0;
    DAT_010ca028 = 0;
    DAT_010c9ffc = 0;
    DAT_010ca000 = 0;
    DAT_010ca004 = 0;
    DAT_010ca008 = 0;
    DAT_010ca00c = 0;
    DAT_010ca02c = 0;
    auVar12 = loadVectorLeftIndexed(0x10,0x3d6918);
    auVar12 = auVar12 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar12 = auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60;
    DAT_010ca010 = 0;
    DAT_010ca014 = storeVectorElementWordIndexed(auVar10,0xffffffffffffa014,0x10d0000);
    DAT_010ca018 = 0;
    iVar2 = 0;
    puVar4 = &DAT_010ca020;
    uVar5 = ZEXT48(&DAT_010ca024);
    DAT_010ca01c = storeVectorElementWordIndexed(auVar12,0,0x10ca01c);
    do {
      auVar13 = vectorConvertFromSignedFixedPointWord(auVar10,0);
      auVar15 = ZEXT416(0xffffffff);
      auVar14 = auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60;
      iVar2 = iVar2 + 1;
      *puVar4 = 0;
      puVar4 = puVar4 + 2;
      auVar15.piece<0,4>() = auVar10.piece<0,4>() + 1;
      auVar15.piece<8,8>() = auVar10.piece<8,8>();
      auVar15.piece<4,4>() = auVar10.piece<4,4>() + 1;
      auVar11.piece<0,8>() = auVar15.piece<0,8>();
      auVar11.piece<12,4>() = auVar10.piece<12,4>();
      auVar11.piece<8,4>() = auVar10.piece<8,4>() + 1;
      auVar10.piece<0,12>() = auVar11.piece<0,12>();
      auVar10.piece<12,4>() = auVar11.piece<12,4>() + 1;
      auVar15 = vectorShiftLeftIntegerWord(auVar14,auVar14);
      auVar15 = vectorMultiplyAddFloatingPoint(auVar13,auVar12,auVar15);
      uVar1 = storeVectorElementWordIndexed(auVar15,0,uVar5);
      *(undefined4 *)uVar5 = uVar1;
      uVar5 = uVar5 + 8;
    } while (iVar2 < 1);
  }
  else if ((moby->state < 2) &&
          (iVar2 = FastCheckBsphereInView(0x408f400000000000,local_30), -1 < iVar2)) {
    dVar9 = 84.0;
    dVar7 = (double)SQRT((GameCamera.posZ - DAT_00846878) * (GameCamera.posZ - DAT_00846878) +
                         (GameCamera.posX - DAT_00846870) * (GameCamera.posX - DAT_00846870) +
                         (GameCamera.posY - DAT_00846874) * (GameCamera.posY - DAT_00846874));
    uVar3 = DAT_010c9ff0;
    if (dVar7 <= 84.0) {
      M600_003d66e0(0);
      M600_003d6588
                (0x3fe0a3d700000000,0x3fe3d70a40000000,0x3faeb851e0000000,&DAT_010ca000);
      M600_003d66e0(2);
      uVar3 = 0xff;
      if ((20.0 <= dVar7) && (uVar3 = 0, dVar7 < dVar9)) {
        uVar3 = FastDoubleToInt
                          ((double)(-((float)(dVar7 - 20.0) * 0.015625 - 1.0) * 255.0));
      }
    }
    DAT_010c9ff0 = uVar3;
    M600_003d6860(0);
    M600_003d67a0(0);
    M600_003d67a0(1);
    RegisterMobyDraw(&PTR_M600_003d5d30_0070d800,moby);
  }
  return;
}


