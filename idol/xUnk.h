#pragma once
// idol/xUnk.h
#include "types.h"

// ---- functions
namespace idol { int GetAnimDuration(int param_1); } 
void Vec4Zero(undefined4 *param_1);
void Vec4Copy(undefined4 *param_1,undefined4 *param_2);
double Vec2Length(float *param_1);
bool Vec2ClampLength(double param_1,float *param_2,float *param_3);
void Vec3Add(float *param_1,float *param_2,float *param_3);
void Vec3SetLength(double param_1,float *param_2,float *param_3);
double Vec3Length(float *param_1);
