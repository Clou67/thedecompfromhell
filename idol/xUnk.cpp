// idol/xUnk.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 8 functions, 0x5e7e18-0x5e8058
#include "idol/xUnk.h"
#include "game/hero.h"

// 0x05e7e18 (0x4c bytes)
int idol::GetAnimDuration(int param_1)

{
  return (int)(animationSpeed * ((float)(longlong)param_1 + 0.5));
}


// 0x05e7e70 (0x24 bytes)
void FUN_005e7e70(undefined4 *param_1)

{
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  return;
}


// 0x05e7e98 (0x24 bytes)
void FUN_005e7e98(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  uVar2 = param_2[2];
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[2] = uVar2;
  param_1[3] = uVar1;
  return;
}


// 0x05e7ebc (0x1c bytes)
double FUN_005e7ebc(float *param_1)

{
  return (double)SQRT(*param_1 * *param_1 + param_1[1] * param_1[1]);
}


// 0x05e7ed8 (0x7c bytes)
bool FUN_005e7ed8(double param_1,float *param_2,float *param_3)

{
  float fVar1;
  double dVar2;
  
  fVar1 = *param_3;
  dVar2 = (double)SQRT(fVar1 * fVar1 + param_3[1] * param_3[1]);
  if (dVar2 <= param_1) {
    *param_2 = *param_3;
    param_2[1] = param_3[1];
    param_2[2] = param_3[2];
    param_2[3] = param_3[3];
  }
  else {
    *param_2 = fVar1 * (float)(param_1 / dVar2);
    param_2[1] = param_3[1] * (float)(param_1 / dVar2);
    param_2[2] = param_3[2];
    param_2[3] = param_3[3];
  }
  return dVar2 > param_1;
}


// 0x05e7f54 (0x3c bytes)
void FUN_005e7f54(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = *param_2;
  fVar2 = *param_3;
  fVar3 = param_2[1];
  fVar4 = param_3[1];
  fVar5 = param_2[2];
  fVar6 = param_3[2];
  param_1[3] = param_2[3];
  *param_1 = fVar1 + fVar2;
  param_1[1] = fVar3 + fVar4;
  param_1[2] = fVar5 + fVar6;
  return;
}


// 0x05e7f98 (0x98 bytes)
void FUN_005e7f98(double param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  double dVar3;
  
  fVar2 = *param_3;
  dVar3 = (double)SQRT(fVar2 * fVar2 + param_3[1] * param_3[1] + param_3[2] * param_3[2]);
  if (dVar3 == 0.0) {
    *param_2 = *param_3;
    param_2[1] = param_3[1];
    param_2[2] = param_3[2];
    fVar2 = param_3[3];
    param_2[2] = 0.0;
    param_2[3] = fVar2;
    param_2[1] = 0.0;
    *param_2 = 0.0;
  }
  else {
    fVar1 = (float)(param_1 / dVar3);
    *param_2 = fVar2 * fVar1;
    param_2[1] = param_3[1] * fVar1;
    param_2[2] = param_3[2] * fVar1;
    param_2[3] = param_3[3];
  }
  return;
}


// 0x05e8030 (0x28 bytes)
double FUN_005e8030(float *param_1)

{
  return (double)SQRT(*param_1 * *param_1 + param_1[1] * param_1[1] + param_1[2] * param_1[2]);
}


