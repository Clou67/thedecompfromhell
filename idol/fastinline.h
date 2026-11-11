#pragma once
/* Math helpers the PS3 build inlines all over the game code. Found by mining instruction
   sequences that repeat across hundreds of functions; each one reproduces that sequence's
   arithmetic (constants are the ones in the binary). */
#include <math.h>

#define FAST_PI      3.1415925f
#define FAST_HALF_PI 1.5707963f

/* sin(): fold the angle into [-pi/2, pi/2] with two fsel, then an odd 9th-order polynomial */
static inline float FastSinInline(float a)
{
    float x = (a - (FAST_PI - a) < 0.0f) ? a : FAST_PI - a;
    float y = -FAST_PI - a;
    x = (y - x < 0.0f) ? x : y;
    float x2 = x * x, x3 = x2 * x, x5 = x3 * x2, x7 = x5 * x2, x9 = x7 * x2;
    return x9 * 2.601887e-06f + x7 * -0.0001980741f + x5 * 0.0083330255f + x3 * -0.16666657f + x;
}
static inline float FastCosInline(float a) { return FastSinInline(a + FAST_HALF_PI); }
