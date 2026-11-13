#include "rc1.h"
// MERGE

// 0x05e7a78 (0x60 bytes)
/* a hit with nothing found yet (t = 1) */
void CollHit_Init(CollHit *hit)
{
    memset(hit, 0, sizeof(*hit));
    hit->t = 1.0f;
}

// 0x05e7ad8 (0x78 bytes)
/* out = in (3x3) * scale */
void Mtx33_Scale(float scale, float *out, float *in)
{
    for (int i = 0; i < 9; i++) {
        out[i] = in[i] * scale;
    }
}

// 0x05e7b50 (0xa0 bytes)
/* out = mtx (3x3, column per 3 floats) * v */
void Mtx33_MulVec3(float *out, float *mtx, Vec3 v)
{
    out[0] = mtx[0] * v.x + mtx[3] * v.y + mtx[6] * v.z;
    out[1] = mtx[1] * v.x + mtx[4] * v.y + mtx[7] * v.z;
    out[2] = mtx[2] * v.x + mtx[5] * v.y + mtx[8] * v.z;
}

// 0x05e7bf8 (0xa0 bytes)
/* out = v made unit length (v itself when it is zero) */
void Vec3_Normalize(float *out, Vec3 v)
{
    float length = sqrtf(v.x * v.x + v.y * v.y + v.z * v.z);

    if (length == 0.0f) {
        out[0] = v.x;
        out[1] = v.y;
        out[2] = v.z;
    }
    else {
        out[0] = v.x / length;
        out[1] = v.y / length;
        out[2] = v.z / length;
    }
}
