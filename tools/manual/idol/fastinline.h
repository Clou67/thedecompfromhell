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

/* atan2(y, x): the octant from the signs of x, y and |x| - |y| picks a scale and offset in
   g_AtanQuadrants (@0x735900, pairs of floats); z = (min - max) / (min + max) goes through an odd
   15th-order polynomial with g_AtanCoeffs (@0x7358e0), summed in this order */
extern float g_AtanQuadrants[16];
extern float g_AtanCoeffs[8];

static inline float FastAtan2Inline(float y, float x)
{
    float ax = fabsf(x), ay = fabsf(y);
    float d = ax - ay;
    union { float f; unsigned int i; } bx, by, bd;
    bx.f = x; by.f = y; bd.f = d;
    int octant = ((bx.i >> 28) & 8) | ((by.i >> 29) & 4) | ((bd.i >> 30) & 2);
    float maxv = (d - 0.0f < 0.0f) ? ay : ax;
    float minv = (d - 0.0f < 0.0f) ? ax : ay;
    float angle = 0.0f;
    if (maxv > 0.0f) {
        float z = (minv - maxv) / (minv + maxv);
        float z2 = z * z, z4 = z2 * z2, z8 = z4 * z4;
        float terms[8];
        terms[0] = z;
        terms[1] = z * z2;
        terms[2] = z * z4;
        terms[3] = z * z4 * z2;
        for (int i = 0; i < 4; i++) terms[4 + i] = terms[i] * z8;
        for (int i = 0; i < 8; i++) terms[i] *= g_AtanCoeffs[i];
        for (int i = 0; i < 8; i++) angle += terms[i];
        angle = (angle + 0.7853982f) * g_AtanQuadrants[octant] + g_AtanQuadrants[octant + 1];
    }
    return angle;
}

/* acos(x), x already in [-1, 1]: sqrt(1 - |x|) times a cubic in |x| (the coefficients
   @0x7358c0), reflected for negative x */
static inline float FastAcosInline(float x)
{
    float a = fabsf(x);
    float sign = (x - 0.0f >= 0.0f) ? 1.0f : -1.0f;
    float rest = 1.0f - a;

    if (!(rest - 0.0f >= 0.0f)) {
        rest = 0.0f;
    }

    float poly = 1.5707288f + a * -0.2121144f;
    poly = poly + a * a * 0.074261f;
    poly = poly + a * a * a * -0.0187293f;

    float half = FAST_HALF_PI - poly * sqrtf(rest);
    return FAST_HALF_PI - half * sign;
}

/* ---- AltiVec helpers (see STYLE.md, "Vector (AltiVec) ...") ----
   SNC has the vec_* intrinsics built in; gcc and clang need <altivec.h>. */
#if !defined(__SNC__)
#include <altivec.h>
#endif

typedef vector float VecF;
typedef vector unsigned int VecU;

/* a Vec4 into a vector register and back (aligned copies) */
static inline VecF VecLoad4(const struct Vec4 *v)
{
    return *(const VecF *)v;
}

static inline void VecStore4(struct Vec4 *out, VecF v)
{
    *(VecF *)out = v;
}

/* -0.0f in every lane: the addend vmaddfp uses for a plain multiply (vspltisw -1; vslw) */
static inline VecF VecNegZero(void)
{
    VecU ones = vec_splat_u32(-1);

    return (VecF)vec_sl(ones, ones);
}

static inline VecF VecSplatF(float value)
{
    union { float f[4]; VecF v; } u = { { value, value, value, value } };

    return u.v;
}

/* the first three lanes' dot product in every lane */
static inline VecF VecDot3(VecF a, VecF b)
{
    VecF product = vec_madd(a, b, VecNegZero());
    VecF y = vec_splat(product, 1);
    VecF z = vec_splat(product, 2);

    return vec_splat(vec_add(vec_add(product, y), z), 0);
}

/* 1 / sqrt(d): vrsqrtefp and one Newton step, the estimate kept where the step gives NaN */
static inline VecF VecRSqrt(VecF d)
{
    VecF estimate = vec_rsqrte(d);
    VecF times = vec_madd(estimate, d, VecNegZero());
    VecF half = vec_madd(estimate, VecSplatF(0.5f), VecNegZero());
    VecF error = vec_nmsub(estimate, times, VecSplatF(1.0f));
    VecF refined = vec_madd(error, half, estimate);

    return vec_sel(estimate, refined, (VecU)vec_cmpeq(refined, refined));
}

/* v scaled so its first three lanes have length 1 */
static inline VecF VecNormalize3(VecF v)
{
    return vec_madd(v, VecRSqrt(VecDot3(v, v)), VecNegZero());
}

/* out = source's transpose, with vmrghw/vmrglw (the 4x4 transpose the draw code inlines) */
static inline void VecTranspose4(struct Mtx4 *out, const struct Mtx4 *source)
{
    VecF row0 = VecLoad4(&source->v0);
    VecF row1 = VecLoad4(&source->v1);
    VecF row2 = VecLoad4(&source->v2);
    VecF row3 = VecLoad4(&source->v3);
    VecF high02 = vec_mergeh(row0, row2);
    VecF low02 = vec_mergel(row0, row2);
    VecF high13 = vec_mergeh(row1, row3);
    VecF low13 = vec_mergel(row1, row3);

    VecStore4(&out->v0, vec_mergeh(high02, high13));
    VecStore4(&out->v1, vec_mergel(high02, high13));
    VecStore4(&out->v2, vec_mergeh(low02, low13));
    VecStore4(&out->v3, vec_mergel(low02, low13));
}
