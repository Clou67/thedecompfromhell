#include <math.h>
#include <string.h>
#include "game/draw.h"
#include "game/boot.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/debug.h"
#include "game/freeze.h"
#include "game/help.h"
#include "game/hero.h"
#include "game/hud.h"
#include "game/initsky.h"
#include "game/lights.h"
#include "game/loaders.h"
#include "game/mUnk.h"
#include "game/main.h"
#include "game/memcard.h"
#include "game/mesh.h"
#include "game/mission.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/partproc.h"
#include "game/pause.h"
#include "game/rUnk.h"
#include "game/skyfunc.h"
#include "game/space.h"
#include "game/update.h"
#include "game/vuchain.h"
#include "game/water.h"
#include "idol/fastfunc.h"
#include "idol/idol_draw.h"
#include "idol/mUnk.h"
#include "idol/mathfunc.h"
#include "idol/shrubfunc.h"
#include "idol/tfragfunc.h"
#include "idol/tiefunc.h"
#include "sdk/fios.h"
#include "sdk/libgcm_cmd/marker.h"
#include "sdk/mUnk4.h"
#include "idol/fastinline.h"
#include <cell/gcm/gcm_macros.h>
#include <cell/gcm/gcm_enum.h>
// MERGE (104 of 165 functions cleaned; the rest are generated)
// game/draw.cpp -- reconstructed from NPEA00385 EBOOT
// 165 functions, 0x6565c-0x78140: the frame's drawing. The view context and camera matrices,
// occlusion, the render passes, fonts and HUD sprites, screen effects, water, lava and the
// textured strip drawers the level renderers share.

/* the RSX command header for count words at a NV4097 register */
static inline void Emit(RenderingStep *pass, u32 word)
{
    *pass->command++ = (RsxCmd)word;
}

/* one 4x4 matrix into the pass's vertex program constants c[index..index+3] */
static inline void EmitVertexConstMtx(RenderingStep *pass, int index, Mtx4 *mtx)
{
    float *words = &mtx->v0.x;

    Emit(pass, CELL_GCM_METHOD(CELL_GCM_NV4097_SET_TRANSFORM_CONSTANT_LOAD, 17));
    Emit(pass, index);
    for (int i = 0; i < 16; i++) {
        Emit(pass, *(u32 *)&words[i]);
    }
}

/* one 4-float vector into the pass's vertex program constant c[index] */
static inline void EmitVertexConstVec(RenderingStep *pass, int index, float *vec)
{
    Emit(pass, CELL_GCM_METHOD(CELL_GCM_NV4097_SET_TRANSFORM_CONSTANT_LOAD, 5));
    Emit(pass, index);
    for (int i = 0; i < 4; i++) {
        Emit(pass, *(u32 *)&vec[i]);
    }
}

/* out = in's transpose */
static inline void Mtx4_Transpose(Mtx4 *out, Mtx4 *in)
{
    float *src = &in->v0.x;
    float *dst = &out->v0.x;

    for (int row = 0; row < 4; row++) {
        for (int col = 0; col < 4; col++) {
            dst[row * 4 + col] = src[col * 4 + row];
        }
    }
}

static inline IdolDraw *Idol(void)
{
    return (IdolDraw *)(uintptr_t)g_pIdolDraw;
}

/* the render passes in the order UploadViewMatricesToPasses walks them (DepthPass..HUD_Pass) */
#define DRAW_PASS_CNT 11

// 0x006565c (0x14 bytes)
void SECTION_HEADER_DRAW(void)
{
    DAT_0071eeac = 0x10000;
}


// 0x0065670 (0x48 bytes)
void ResetFrameBufferInfo(void)
{
    FlushCache(0);
    SetFrameBufferInfo(512, 416, 512, 448, 0, 0);
}


// 0x00656b8 (0x104 bytes)
/* (the PS2 GS setup for a cutscene; the PS3 build has stubbed most of it) */
void ResetFrameBufferForCutscene(void)
{
    DAT_00e5aa70 = 0;
    STUB_001754e0();
    STUB_00503070(1);
    STUB_000e9138();
    STUB_0050307c(0, 11, (Cutscene == 0) ? 14 : 13, 9);
    STUB_00503080();
    VU1_initChain();
    FlushCache(0);
    SetFrameBufferInfo(512, 416, 512, 448, 0, 0);
    VU1_initChain();
    STUB_001754dc();
}


// 0x00657c8 (0x1b0 bytes)
/* a bounding sphere (1/1024 units) against the view: -1 outside, 1 well inside, 0 crossing an
   edge */
int CheckBSphere(float *bsphere)
{
    float radius = bsphere[3];
    float dx = bsphere[0] - GameCamera.posX * 1024.0f;
    float dy = bsphere[1] - GameCamera.posY * 1024.0f;
    float dz = bsphere[2] - GameCamera.posZ * 1024.0f;
    /* (the binary subtracts a register it never set from the radius for the w term) */
    float w = radius - 0.0f;
    Mtx4 *view = &GameCamera.mtx0;
    float x = view->v0.x * dx + view->v1.x * dy + view->v2.x * dz + view->v3.x * w;
    float y = view->v0.y * dx + view->v1.y * dy + view->v2.y * dz + view->v3.y * w;
    float z = view->v0.z * dx + view->v1.z * dy + view->v2.z * dz + view->v3.z * w;

    if (z + radius < g_ViewContext.nearClip || z - radius > g_ViewContext.farClip) {
        return -1;
    }

    x = fabsf(x);
    y = fabsf(y);
    if (z * g_ViewContext.xratio < x - radius * g_ViewContext.xradpad) {
        return -1;
    }
    if (z * g_ViewContext.yratio < y - radius * g_ViewContext.yradpad) {
        return -1;
    }

    if (z - radius <= g_ViewContext.nearClip || z + radius >= g_ViewContext.farClip) {
        return 0;
    }
    if (z * g_ViewContext.xratio * 3.0f <= x + radius * g_ViewContext.xradpad) {
        return 0;
    }
    if (z * g_ViewContext.yratio * 3.0f <= y + radius * g_ViewContext.yradpad) {
        return 0;
    }

    return 1;
}


// 0x0065a00 (0x684 bytes)
// inlined: FastAtan2 @0x65adc
/* hands the renderer the camera and the view angle, then writes its projection (c0-3) and view
   (c8-11) matrices into every pass's vertex constants, the depth pass's model matrix (c4-7)
   as identity, and copies the frustum planes out */
void UploadViewMatricesToPasses(void)
{
    IdolDraw *idol = Idol();
    float fovDeg = FastAtan2Inline(g_ViewContext.yratio, 1.0f) * 57.295776f * g_ViewContext.fovScale;

    idol->vtable->SetPerspective(fovDeg, 0.1f, 1200.0f, idol);

    /* the camera as a 4x4 (its rotation rows across, its position below) */
    Mtx4 camera;
    camera.v0.x = GameCamera.mtx0.v0.x;
    camera.v0.y = GameCamera.mtx0.v1.x;
    camera.v0.z = GameCamera.mtx0.v2.x;
    camera.v0.w = 0.0f;
    camera.v1.x = GameCamera.mtx0.v0.y;
    camera.v1.y = GameCamera.mtx0.v1.y;
    camera.v1.z = GameCamera.mtx0.v2.y;
    camera.v1.w = 0.0f;
    camera.v2.x = GameCamera.mtx0.v0.z;
    camera.v2.y = GameCamera.mtx0.v1.z;
    camera.v2.z = GameCamera.mtx0.v2.z;
    camera.v2.w = 0.0f;
    camera.v3.x = GameCamera.posX;
    camera.v3.y = GameCamera.posY;
    camera.v3.z = GameCamera.posZ;
    camera.v3.w = 1.0f;
    idol->vtable->SetView(idol, &camera);

    Mtx4 proj;
    Mtx4 view;
    Mtx4_Transpose(&proj, &idol->viewProjMtx);
    Mtx4_Transpose(&view, &idol->viewMtx);

    RenderingStep **passes = &DepthPass;
    for (int i = 0; i < DRAW_PASS_CNT; i++) {
        EmitVertexConstMtx(passes[i], 0, &proj);
        EmitVertexConstMtx(passes[i], 8, &view);
    }

    Mtx4 identity;
    FastMemSetZero(&identity, sizeof(identity));
    identity.v0.x = 1.0f;
    identity.v1.y = 1.0f;
    identity.v2.z = 1.0f;
    identity.v3.w = 1.0f;
    EmitVertexConstMtx(DepthPass, 4, &identity);

    for (int i = 0; i < 6; i++) {
        g_FrustumPlanes[i] = idol->frustumPlanes[i];
    }
    g_FrustumExtra.x = idol->frustumOrigin.x;
    g_FrustumExtra.y = idol->frustumOrigin.y;
    g_FrustumExtra.z = idol->frustumOrigin.z;
}


// 0x0066088 (0x504 bytes)
/* GameCamera's matrices from its orientation (or its euler angles when the debug camera has
   control): mtx0 the view, matrix/mtx2 with the projections, mtx3 the non-perspective one, mtx4
   the HUD one; then the SPU view and the passes */
void ComposeCameraMatrix(void)
{
    Mtx4 orient;

    if (ControlMode == 0) {
        orient.v0 = GameCamera.orientMtx.forward;
        orient.v1 = GameCamera.orientMtx.right;
        orient.v2 = GameCamera.orientMtx.up;
    }
    else {
        float sinAz = std::_FSin(GameCamera.rot.azimuth, 0);
        float cosAz = std::_FSin(GameCamera.rot.azimuth, 1);
        float sinEl = std::_FSin(GameCamera.rot.elevation, 0);
        float cosEl = std::_FSin(GameCamera.rot.elevation, 1);
        float sinRoll = std::_FSin(GameCamera.rot.radius, 0);
        float cosRoll = std::_FSin(GameCamera.rot.radius, 1);
        Mtx4 euler;

        memcpy(&euler, &g_CameraEulerBase, sizeof(euler));
        euler.v0.x = cosEl * cosRoll;
        euler.v0.y = cosEl * sinRoll;
        euler.v0.z = -sinEl;
        euler.v1.x = sinAz * (cosRoll * sinEl) - cosAz * sinRoll;
        euler.v1.y = sinAz * (sinEl * sinRoll) + cosAz * cosRoll;
        euler.v1.z = cosEl * sinAz;
        euler.v2.x = cosAz * (cosRoll * sinEl) + sinAz * sinRoll;
        euler.v2.y = cosAz * (sinEl * sinRoll) - cosRoll * sinAz;
        euler.v2.z = cosAz * cosEl;
        memcpy(&orient, &euler, sizeof(orient));
    }

    /* the view: camera right across x (negated), up across y (negated), forward across z */
    GameCamera.mtx0.v0.x = -orient.v1.x;
    GameCamera.mtx0.v1.x = -orient.v1.y;
    GameCamera.mtx0.v2.x = -orient.v1.z;
    GameCamera.mtx0.v0.y = -orient.v2.x;
    GameCamera.mtx0.v1.y = -orient.v2.y;
    GameCamera.mtx0.v2.y = -orient.v2.z;
    GameCamera.mtx0.v3.x = 0.0f;
    GameCamera.mtx0.v0.z = orient.v0.x;
    GameCamera.mtx0.v3.y = 0.0f;
    GameCamera.mtx0.v1.z = orient.v0.y;
    GameCamera.mtx0.v2.z = orient.v0.z;
    GameCamera.mtx0.v3.z = 0.0f;
    GameCamera.mtx0.v0.w = 0.0f;
    GameCamera.mtx0.v1.w = 0.0f;
    GameCamera.mtx0.v2.w = 0.0f;
    GameCamera.mtx0.v3.w = 1.0f;

    FastVecMtx4Mul(&GameCamera.matrix, &g_ViewContext.fMtx, &GameCamera.mtx0);
    FastVecMtx4Mul(&GameCamera.mtx2, &g_ViewContext.nfMtx, &GameCamera.mtx0);

    Vec4 *rows = &GameCamera.mtx2.v0;
    for (int i = 0; i < 4; i++) {
        rows[i].x = rows[i].w * g_ViewContext.hvdf.x + rows[i].x;
        rows[i].y = rows[i].w * g_ViewContext.hvdf.y + rows[i].y;
        rows[i].z = rows[i].w * g_ViewContext.hvdf.z + rows[i].z;
    }

    FastVecMtx4Mul(&GameCamera.mtx3, &g_ViewContext.hMtx, &GameCamera.mtx0);

    float guard = g_ViewContext.guard.x;
    GameCamera.mtx4.v0.x = g_ViewContext.hMtx.v0.x * guard;
    GameCamera.mtx4.v0.y = g_ViewContext.hMtx.v0.y * guard;
    GameCamera.mtx4.v0.z = g_ViewContext.hMtx.v0.z * guard;
    GameCamera.mtx4.v0.w = g_ViewContext.hMtx.v0.w * guard;
    GameCamera.mtx4.v1.x = g_ViewContext.hMtx.v1.x * guard;
    GameCamera.mtx4.v1.y = g_ViewContext.hMtx.v1.y * guard;
    GameCamera.mtx4.v1.z = g_ViewContext.hMtx.v1.z * guard;
    GameCamera.mtx4.v1.w = g_ViewContext.hMtx.v1.w * guard;
    GameCamera.mtx4.v2 = g_ViewContext.hMtx.v2;
    GameCamera.mtx4.v3 = g_ViewContext.hMtx.v3;
    FastVecMtx4Mul(&GameCamera.mtx4, &GameCamera.mtx4, &GameCamera.mtx0);

    g_CullView.rot.v0 = GameCamera.mtx0.v0;
    g_CullView.rot.v1 = GameCamera.mtx0.v1;
    g_CullView.rot.v2 = GameCamera.mtx0.v2;
    g_CullView.pos.x = GameCamera.posX * 1024.0f;
    g_CullView.pos.y = GameCamera.posY * 1024.0f;
    g_CullView.pos.z = GameCamera.posZ * 1024.0f;
    g_CullView.pos.w = 1024.0f;
    g_ViewCamPos.x = GameCamera.posX;
    g_ViewCamPos.y = GameCamera.posY;
    g_ViewCamPos.z = GameCamera.posZ;
    g_ViewCamPos.w = GameCamera.posW;

    UploadViewMatricesToPasses();
}


// 0x0066598 (0x278 bytes)
/* the water's fog settings (in world units, intensities 0..1) into its shader constants and
   the forward passes' c19 and c20 */
void RebuildSharedWaveTables(void)
{
    float *waterConsts = (float *)(uintptr_t)DAT_00a15f64;

    if (waterConsts == NULL) {
        return;
    }

    float fog[4];
    fog[0] = g_ViewContext.fogNearDist * 0.0009765625f;
    fog[1] = g_ViewContext.fogFarDist * 0.0009765625f;
    fog[2] = 1.0f - g_ViewContext.fogNearIntensity * 0.003921569f;
    fog[3] = 1.0f - g_ViewContext.fogFarIntensity * 0.003921569f;
    waterConsts[8] = fog[0];
    waterConsts[9] = fog[1];
    waterConsts[10] = fog[2];
    waterConsts[11] = fog[3];

    /* the depth fog as 1 / (far - near) and -near / (far - near) */
    float range = fog[1] - fog[0];
    waterConsts[4] = 1.0f / range;
    waterConsts[5] = -fog[0] / range;
    waterConsts[6] = 1.0f / range;

    EmitVertexConstVec(ForwardPass, 19, fog);
    EmitVertexConstVec(ForwardPass, 20, &waterConsts[4]);
    EmitVertexConstVec(OceanForwardPass, 19, fog);
    EmitVertexConstVec(OceanForwardPass, 20, &waterConsts[4]);
}

/* 1 / cos(atan(ratio)): how much longer a radius gets at the view's edge */
static inline float ViewRadPad(float ratio)
{
    return 1.0f / FastCosInline(FastAtan2Inline(ratio, 1.0f));
}

/* a PS2 GIF tag: NLOOP in byte 0, the register count in byte 2 */
static inline void ViewGifTag(u8 *tag, u8 nloop, u8 nregs)
{
    tag[0] = nloop;
    tag[1] = 0;
    tag[2] = nregs;
    tag[3] = 0;
}


// 0x00668d0 (0x1008 bytes)
// inlined: FastAtan2 @0x66a98, FastAtan2 @0x66c90, FastAtan2 @0x66e68, FastAtan2 @0x67010, FastAtan2 @0x6702c
/* everything in g_ViewContext that follows from the screen size, the view angle, the clip
   planes and the fog: the ratios, the three projection matrices, the fixed-point scales the
   PS2 renderers used, the fog line, and the copies the other renderers and SPU jobs read */
void UpdateViewContext(void)
{
    ViewContext *view = &g_ViewContext;
    float yratioScale = (Cutscene != 0) ? 0.756f : 0.775f;

    view->sphereCheckB.x = view->farClip;
    view->sphereCheckB.y = view->nearClip;
    view->xclipratio = view->xclip / view->xpix;
    view->yclipratio = view->yclip / view->ypix;
    view->iguard.x = view->xclipratio;
    view->iguard.y = view->yclipratio;
    view->yratio = view->xratio * yratioScale;
    view->xradpad = ViewRadPad(view->xratio);
    view->yradpad = ViewRadPad(view->yratio);
    view->sphereCheckA.x = view->xradpad;
    view->sphereCheckA.y = view->yradpad;

    float xradpadClip = ViewRadPad(view->xratio * view->xclipratio);
    float yradpadClip = ViewRadPad(view->yratio * view->yclipratio);
    view->sphereCheckA.z = (xradpadClip / view->xradpad + yradpadClip / view->yradpad) * 0.5f;
    view->iguard.z = 1.0f / view->xclipratio;
    view->iguard.w = 1.0f / view->yclipratio;

    /* the fog as a line in depth */
    float fogRange = view->fogFarDist - view->fogNearDist;
    float fogSpan = view->fogFarIntensity - view->fogNearIntensity;
    view->perspScale = fogSpan * view->nearClip / fogRange;
    view->fog1 = (view->fogNearIntensity * view->fogFarDist - view->fogFarIntensity * view->fogNearDist) / fogRange;
    view->fogMult = fogSpan / (fogRange * 0.0009765625f);
    view->fogAdd = view->fogNearIntensity - view->fogNearDist * 0.0009765625f * view->fogMult;

    g_CullView.ratio.x = view->xratio;
    g_CullView.ratio.y = view->yratio;
    g_CullView.ratio.z = view->xradpad;
    g_CullView.ratio.w = view->yradpad;
    g_CullView.iguard = view->iguard;
    g_CullView.sphereCheckA = view->sphereCheckA;
    g_CullView.sphereCheckB = view->sphereCheckB;

    g_ViewFogA.x = view->perspScale;
    g_ViewFogA.y = view->fogFarIntensity;
    g_ViewFogA.z = view->fogNearIntensity;
    g_ViewFogB.fog0 = view->perspScale;
    g_ViewFogB.max = 254.99998f;
    g_ViewFogB.fogFarIntensity = view->fogFarIntensity;
    g_ViewFogB.fogNearIntensity = view->fogNearIntensity;
    g_ViewFogC = g_ViewFogB;
    g_ViewFog0D = view->perspScale;
    g_ViewFog0E = view->perspScale;
    g_ViewFog0F = view->perspScale;
    Draw_SetupFogTable();

    u32 pixelBits[2] = {0x361fc873, 0xb61fc873};    /* +-2.3776e-06 */
    memcpy(&g_ViewPixelConsts.x, &pixelBits[0], sizeof(float));
    memcpy(&g_ViewPixelConsts.y, &pixelBits[1], sizeof(float));
    g_ViewPixelConsts.z = 0.5f;
    g_ViewPixelConsts.w = view->xpix / (view->xratio * 210000.0f);

    /* the projection: x, y to pixels, z to the PS2's 24-bit depth */
    float nearClip = view->nearClip;
    float farClip = view->farClip;
    float depthRange = nearClip * (farClip - nearClip);
    FastMemSetZero(&view->fMtx, sizeof(view->fMtx));
    view->fMtx.v0.x = view->xpix / (view->xratio * nearClip);
    view->fMtx.v1.y = view->ypix / (view->yratio * nearClip);
    view->fMtx.v2.w = 1.0f / nearClip * view->perspScale;
    view->fMtx.v2.z = (farClip + nearClip) / depthRange * -8388080.0f;
    view->fMtx.v3.z = nearClip * -2.0f * farClip / depthRange * -8388080.0f;
    FastMemCopy32(&view->nfMtx, &view->fMtx, sizeof(view->nfMtx));
    view->nfMtx.v2.w = 1.0f / nearClip;
    FastMemCopy32(&view->hMtx, &view->nfMtx, sizeof(view->hMtx));

    view->hMtx.v0.x = view->hMtx.v0.x / view->xclip;
    view->hMtx.v1.y = view->hMtx.v1.y / view->yclip;
    view->hMtx.v2.z = view->hMtx.v2.z * -1.1921679e-07f;
    view->hMtx.v3.z = view->hMtx.v3.z * -1.1921679e-07f;

    view->hmgScale.x = 1.0f / view->xclip;
    view->hmgScale.y = 1.0f / view->yclip;
    view->hmgScale.z = -1.1921679e-07f;
    view->hmgScale.w = 1.0f / view->perspScale;
    view->ihmgScale.x = view->xclip;
    view->ihmgScale.y = view->yclip;
    view->ihmgScale.z = -8388080.0f;
    view->ihmgScale.w = view->perspScale;
    view->hvdf.x = 2048.0f;
    view->hvdf.y = 2048.0f;
    view->hvdf.z = 8388112.0f;
    view->hvdf.w = view->fog1;
    view->unSquish.x = view->xclip / view->fMtx.v0.x;
    view->unSquish.y = view->yclip / view->fMtx.v1.y;
    view->unSquish.z = -8388080.0f / view->fMtx.v2.z;
    view->unSquish.w = view->perspScale;
    view->guard.x = view->xclipratio;
    view->guard.y = view->yclipratio;
    view->guard.z = 1.0f;
    view->guard.w = 1.0f;

    /* the GIF tags (their NLOOP bytes take the low byte of a float, as the binary has it) */
    ViewGifTag(view->headerBase[0][0], (u8)*(u32 *)&view->fogFarIntensity, 14);
    ViewGifTag(view->headerTex, (u8)*(u32 *)&view->perspScale, 0x12);
    ViewGifTag(view->headerTexNoFog, (u8)*(u32 *)&view->perspScale, 0x12);
    ViewGifTag(view->headerGr, (u8)*(u32 *)&view->perspScale, 0x41);
    ViewGifTag(view->headerGrNoFog, (u8)*(u32 *)&view->perspScale, 0x41);

    Vec4 *rows = (Vec4 *)view->headerBase[0][0];
    u32 *tagRow = (u32 *)&rows[1];
    ViewGifTag((u8 *)&tagRow[0], (u8)*(u32 *)&view->perspScale, 0x12);
    tagRow[1] = *(u32 *)&view->headerTex[4];
    tagRow[2] = *(u32 *)&view->headerTex[8];
    tagRow[3] = *(u32 *)&view->headerTex[12];
    rows[2].x = view->unSquish.y;
    rows[2].y = view->yclipratio;
    rows[2].z = 1.0f;
    rows[2].w = 1.0f;
    rows[3] = view->hmgScale;
    rows[4] = view->ihmgScale;
    rows[5] = view->hvdf;

    g_ViewConstsA.hvdf = view->hvdf;
    g_ViewConstsA.ihmgScale = view->ihmgScale;
    g_ViewConstsA.clipRow = rows[2];
    g_ViewConstsB.hvdf = view->hvdf;
    g_ViewConstsB.hmgScale = view->hmgScale;
    g_ViewConstsB.ihmgScale = view->ihmgScale;
    g_ViewConstsB.xclipratio = view->xclipratio;
    g_ViewConstsB.yclipratio = view->yclipratio;
    g_ViewIhmgScaleC = view->ihmgScale;
    g_ViewHvdfC = view->hvdf;

    RebuildSharedWaveTables();
}


// 0x00678d8 (0xec bytes)
/* the level's fog, or the water's while the camera is under it, into the view */
void UpdateFog(void)
{
    RGBA color;

    if (GameCamera.camUnderWater == 0) {
        PartClipDist = 0x1f4000;
        color = levelFog;
        g_ViewContext.fogNearDist = LevelFogNearDist;
        g_ViewContext.fogFarDist = LevelFogFarDist;
        g_ViewContext.fogNearIntensity = LevelFogNearIntensity;
        g_ViewContext.fogFarIntensity = LevelFogFarIntensity;
    }
    else {
        PartClipDist = 0x40000;
        color = WaterFog;
        g_ViewContext.fogNearDist = WaterFogNearDist;
        g_ViewContext.fogFarDist = WaterFogFarDist;
        g_ViewContext.fogNearIntensity = WaterFogNearIntensity;
        g_ViewContext.fogFarIntensity = WaterFogFarIntensity;
    }

    g_ViewContext.fogR = color.r;
    g_ViewContext.fogG = color.g;
    g_ViewContext.fogB = color.b;
    UpdateViewContext();
    LevelFogMode = 0;
}

/* the occlusion grid: a header {dataOfs, pad, zMin, zCnt, zRows[zCnt]}; each z row {yMin,
   yCnt, yRows[yCnt]}; each y row {xMin, xCnt, cells[xCnt]} of 0x80-byte visibility bitmaps */
struct OcclGridHeader {
    int dataOfs;
    u16 zMin;
    u16 zCnt;
    int zRows[1];
};

struct OcclGridRow {
    u16 min;
    u16 cnt;
    int next[1];
};

struct OcclGridCells {
    u16 min;
    u16 cnt;
    u16 cells[1];
};


// 0x00679c4 (0xe4 bytes)
/* the visibility bitmap of the 4-unit occlusion cell (x, y, z), or NULL where there is none */
char *ParseOcclGrid(int x, int y, int z)
{
    OcclGridHeader *grid = (OcclGridHeader *)OcclGrid;
    int zi = z - grid->zMin;

    if (zi < 0 || zi >= grid->zCnt || grid->zRows[zi] == 0) {
        return NULL;
    }

    OcclGridRow *zRow = (OcclGridRow *)((u8 *)grid + grid->zRows[zi]);
    int yi = y - zRow->min;
    if (yi < 0 || yi >= zRow->cnt || zRow->next[yi] == 0) {
        return NULL;
    }

    OcclGridCells *yRow = (OcclGridCells *)((u8 *)grid + zRow->next[yi]);
    int xi = x - yRow->min;
    if (xi < 0 || xi >= yRow->cnt || yRow->cells[xi] == 0xffff) {
        return NULL;
    }

    return (char *)grid + yRow->cells[xi] * 0x80 + grid->dataOfs;
}


// 0x0067ab0 (0xd0 bytes)
/* the nearer of two cells' bitmaps (by interp), falling back to the other */
char *GetOcclGridFromPair(int x0, int y0, int z0, int x1, int y1, int z1, float interp)
{
    char *cell;

    if (interp >= 0.5f) {
        cell = ParseOcclGrid(x1, y1, z1);
        if (cell == NULL) {
            cell = ParseOcclGrid(x0, y0, z0);
        }
    }
    else {
        cell = ParseOcclGrid(x0, y0, z0);
        if (cell == NULL) {
            cell = ParseOcclGrid(x1, y1, z1);
        }
    }

    return cell;
}

/* the neighbour of (x, y, z) along one axis nearer the camera's fraction, or the other side */
static inline char *OcclNeighbour(int x, int y, int z, int dx, int dy, int dz, float fraction)
{
    char *cell;

    if (fraction >= 0.5f) {
        cell = ParseOcclGrid(x + dx, y + dy, z + dz);
        if (cell == NULL) {
            cell = ParseOcclGrid(x - dx, y - dy, z - dz);
        }
    }
    else {
        cell = ParseOcclGrid(x - dx, y - dy, z - dz);
        if (cell == NULL) {
            cell = ParseOcclGrid(x + dx, y + dy, z + dz);
        }
    }

    return cell;
}


// 0x0067b90 (0x558 bytes)
/* OcclVisibility from the camera's occlusion cell. Outside the grid: the neighbours merged
   (mode 0), the last cell, the octant table, or everything visible. */
void BuildOcclVisibility(void)
{
    float scale = 0.25f;
    int x = FastDoubleToInt(GameCamera.posX * scale);
    int y = FastDoubleToInt(GameCamera.posY * scale);
    int z = FastDoubleToInt(GameCamera.posZ * scale);
    char *cell = ParseOcclGrid(x, y, z);

    if (cell != NULL) {
        OcclInvalidGridGp = 0;
        FastMemCopy(OcclVisibility, cell, 0x80);
        OcclPreviousGrid = (u32)(uintptr_t)cell;
        OcclVisibility[0x7f] = OcclVisibility[0x7f] | 0x80;
        return;
    }

    OcclInvalidGridGp = 1;

    char *merged = NULL;
    if (OcclMode == 0) {
        char *nearX = OcclNeighbour(x, y, z, 1, 0, 0, GameCamera.posX * scale - (float)FastIntToDouble(x));
        char *nearY = OcclNeighbour(x, y, z, 0, 1, 0, GameCamera.posY * scale - (float)FastIntToDouble(y));
        char *nearZ = OcclNeighbour(x, y, z, 0, 0, 1, GameCamera.posZ * scale - (float)FastIntToDouble(z));

        if (nearX != NULL || nearY != NULL || nearZ != NULL) {
            merged = (char *)OcclVisibilityMerged;
            FastMemSetZero(OcclVisibilityMerged, 0x80);
            if (nearX != NULL) {
                FastMemOr16((uint *)OcclVisibilityMerged, (uint *)OcclVisibilityMerged, (uint *)nearX, 0x80);
            }
            if (nearY != NULL) {
                FastMemOr16((uint *)OcclVisibilityMerged, (uint *)OcclVisibilityMerged, (uint *)nearY, 0x80);
            }
            if (nearZ != NULL) {
                FastMemOr16((uint *)OcclVisibilityMerged, (uint *)OcclVisibilityMerged, (uint *)nearZ, 0x80);
            }
            OcclPreviousGrid = (u32)(uintptr_t)OcclVisibilityMerged;
            FastMemCopy(OcclVisibility, OcclVisibilityMerged, 0x80);
        }
    }

    if (merged == NULL) {
        if (OcclMode == 1) {
            FastMemSet(OcclVisibility, -1, 0x80);
        }
        else if (OcclMode == 2 && OcclOct != NULL) {
            /* the octant table: eight bitmaps around a point */
            float *origin = (float *)OcclOct;
            int octant = (GameCamera.posX - origin[0] > 0.0f) << 2 | (GameCamera.posY - origin[1] > 0.0f) << 1 |
                         (GameCamera.posZ - origin[2] > 0.0f);

            FastMemCopy(OcclVisibility, (u8 *)OcclOct + octant * 0x80 + 0x10, 0x80);
        }
        else if (OcclMode == 0 || OcclMode == 2) {
            if (ControlMode == 0 && OcclPreviousGrid != 0) {
                FastMemCopy(OcclVisibility, (void *)(uintptr_t)OcclPreviousGrid, 0x80);
            }
            else {
                FastMemSet(OcclVisibility, -1, 0x80);
            }
        }
    }

    OcclVisibility[0x7f] = OcclVisibility[0x7f] | 0x80;
}


// 0x00680e8 (0x6c bytes)
/* this frame's OcclVisibility (all on, or built from the grid), handed to the renderer */
void Occlusion_Update(void)
{
    if (OcclUpdate == 0) {
        FastMemSet(OcclVisibility, -1, 0x80);
    }
    else if (OcclUpdate == 2) {
        BuildOcclVisibility();
    }

    *(void **)((u8 *)(uintptr_t)g_pIdolDrawBase + 0x41c) = OcclVisibility;
}


// 0x0068160 (0x15c bytes)
/* the view for the game's own frame buffer */
void InitViewContext(void)
{
    g_ScreenWidth = g_FrameBufWidth;
    DAT_00966b18 = g_ScreenHalfWidth * 16 + 0x8000;
    g_ScreenHeight = g_FrameBufHeight;
    SCREEN_PROJECTION_MAP_X = (0x800 - g_ScreenHalfWidth) << 4;
    DAT_00966b1c = g_ScreenHalfHeight * 16 + 0x8000;
    SCREEN_PROJECTION_MAP_Y = (0x800 - g_ScreenHalfHeight) << 4;
    DAT_00966b20 = Idol()->unk04;
    DAT_00966b24 = Idol()->unk08;
    g_ViewContext.nearClip = 32.0f;
    g_ViewContext.farClip = 745472.0f;
    g_ViewContext.xratio = 0.63f;
    g_ViewContext.xpix = (float)FastIntToDouble(g_FrameBufWidth) * 0.5f;
    g_ViewContext.ypix = (float)FastIntToDouble(g_FrameBufHeight) * 0.5f;
    g_ViewContext.fogNearDist = 0.0f;
    g_ViewContext.fogFarDist = 524288.0f;
    g_ViewContext.fogNearIntensity = 255.0f;
    g_ViewContext.fogFarIntensity = 0.0f;
    g_ViewContext.fovScale = 2.0f;
    g_ViewContext.xclip = g_ViewContext.xpix * 4.0f;
    g_ViewContext.yclip = g_ViewContext.ypix * 4.0f;
}


// 0x00682c8 (0x144 bytes)
/* a view of the given size and fog (the menus and movies) */
void SetUserViewContext(int width, int height, float xratio, float fogNearDist, float fogFarDist, float fogNearIntensity,
                        float fogFarIntensity)
{
    SCREEN_PROJECTION_MAP_X = (0x800 - g_ScreenHalfWidth) << 4;
    SCREEN_PROJECTION_MAP_Y = (0x800 - g_ScreenHalfHeight) << 4;
    DAT_00966b18 = g_ScreenHalfWidth * 16 + 0x8000;
    DAT_00966b1c = g_ScreenHalfHeight * 16 + 0x8000;
    g_ViewContext.nearClip = 32.0f;
    g_ViewContext.farClip = 524288.0f;
    g_ViewContext.xpix = (float)FastIntToDouble(width) * 0.5f;
    g_ViewContext.ypix = (float)FastIntToDouble(height) * 0.5f;
    g_ViewContext.fogNearDist = fogNearDist;
    g_ViewContext.xclip = g_ViewContext.xpix * 4.0f;
    g_ViewContext.yclip = g_ViewContext.ypix * 4.0f;
    g_ViewContext.fogFarDist = fogFarDist;
    g_ViewContext.fogNearIntensity = fogNearIntensity;
    g_ViewContext.fogFarIntensity = fogFarIntensity;
    UpdateViewContext();
}


// 0x006840c (0x90 bytes)
void ResetDrawGlobals(void)
{
    DAT_0095cae0 = 0;
    DAT_0095ccf0 = 0;
    LetterBoxOn = 0;
    LetterBoxPixels = 0;
    ScreenColorEffectEnabled = 0;
    DAT_0095cf20 = 0;
    OcclMode = 0;
    WaterTiles = NULL;
    WaterTileBoxes = NULL;
    WaterTileCnt = 0;
    WaterPlaneActive = 0;
}


// 0x006849c (0x4 bytes)
void STUB_0006849c(...)
{
}


// 0x00684a0 (0x4 bytes)
void STUB_000684a0(...)
{
}


// 0x00684a4 (0xbc bytes)
/* the frame's camera matrices and (when asked) occlusion, then the renderer's pass setup */
void UpdateOcclusion(int withOcclusion)
{
    IdolDraw *idol = Idol();

    ComposeCameraMatrix();
    if (withOcclusion != 0) {
        Occlusion_Update();
    }

    idol->vtable->SetupPasses(idol);
}


// 0x0068560 (0x64 bytes)
/* flushes the SPU job queue and has the renderer build and flip the frame */
void Render_DispatchJob(void)
{
    IdolDraw *idol = Idol();

    idol_draw::Spurs_FlushAndSwapQueue((uint *)&DAT_01111700);
    OcclMode = 0;
    idol->vtable->BuildAndFlipFrame(idol);
}

/* NV4097 methods the HUD sprites use */
#define HUD_SET_COLOR4UB      CELL_GCM_METHOD(CELL_GCM_NV4097_SET_VERTEX_DATA4UB_M + 2 * 4, 1)
#define HUD_SET_TEXCOORD2S    CELL_GCM_METHOD(CELL_GCM_NV4097_SET_VERTEX_DATA2S_M + 1 * 4, 1)
#define HUD_SET_POSITION2S    CELL_GCM_METHOD(CELL_GCM_NV4097_SET_VERTEX_DATA2S_M, 1)
#define HUD_SET_BEGIN_END     CELL_GCM_METHOD(CELL_GCM_NV4097_SET_BEGIN_END, 1)
#define HUD_SET_POSITION2F    CELL_GCM_METHOD(CELL_GCM_NV4097_SET_VERTEX_DATA2F_M, 2)

/* a HUD vertex: its texture coordinate, then its position (16 bits each, y/v high) */
static inline void HudVertex(RenderingStep *pass, int u, int v, int x, int y)
{
    Emit(pass, HUD_SET_TEXCOORD2S);
    Emit(pass, (v & 0xffff) << 16 | (u & 0xffff));
    Emit(pass, HUD_SET_POSITION2S);
    Emit(pass, (y & 0xffff) << 16 | (x & 0xffff));
}

/* binds tex and starts a quad in color on the HUD pass */
/* one HUD vertex at a float position */
static inline void HudVertexF(RenderingStep *pass, int u, int v, float x, float y)
{
    Emit(pass, HUD_SET_TEXCOORD2S);
    Emit(pass, (v & 0xffff) << 16 | (u & 0xffff));
    Emit(pass, HUD_SET_POSITION2F);
    Emit(pass, *(u32 *)&x);
    Emit(pass, *(u32 *)&y);
}

static inline void HudBeginQuad(void *tex, u32 color)
{
    idol_draw::BindTexture(HUD_Pass, 0, tex, TexSamplerFlags);
    idol_draw::ResetPassState(HUD_Pass);

    Emit(HUD_Pass, HUD_SET_COLOR4UB);
    Emit(HUD_Pass, color);
    /* (three words to method 0x1714, all zero) */
    Emit(HUD_Pass, 0x400c1714);
    Emit(HUD_Pass, 0);
    Emit(HUD_Pass, 0);
    Emit(HUD_Pass, 0);
    Emit(HUD_Pass, HUD_SET_BEGIN_END);
    Emit(HUD_Pass, CELL_GCM_PRIMITIVE_QUADS);
}

static inline void HudEnd(void)
{
    Emit(HUD_Pass, HUD_SET_BEGIN_END);
    Emit(HUD_Pass, 0);
}


// 0x00685c4 (0x1c bytes)
/* effect texture idx's entry in TexInfo */
int GetEffectTex(int idx)
{
    return ((int *)(uintptr_t)TexInfo)[idx];
}


// 0x00685e0 (0x2bc bytes)
/* tex over the whole 512x416 screen in the frame buffer's own viewport */
void DrawFullScreenQuad(int rgba, void *tex)
{
    int idolDraw = g_pIdolDraw;

    FUN_004deab8(idolDraw, g_FrameBufWidth, g_FrameBufHeight);

    /* the texture's size, width high and height low */
    u32 size = *(u32 *)((u8 *)tex + 0x18);
    int width = size >> 16;
    int height = size & 0xffff;

    HudBeginQuad(tex, rgba);
    HudVertex(HUD_Pass, 0, 0, 0, 0);
    HudVertex(HUD_Pass, 0, height, 0, 416);
    HudVertex(HUD_Pass, width, height, 512, 416);
    HudVertex(HUD_Pass, width, 0, 512, 0);
    HudEnd();

    FUN_004d86b0(idolDraw);
}


// 0x006889c (0x354 bytes)
/* tex's (u, v, uw, vh) texels (in half-texel units) drawn at (x, y, w, h) on the HUD pass, in
   color; a full 512x416 rectangle goes through DrawFullScreenQuad */
void Sprite_DrawShape(int x, int y, int w, int h, int u, int v, int uw, int vh, u32 color, void *tex)
{
    if (x == 0 && w == 512 && y == 0 && h == 416) {
        DrawFullScreenQuad(color, tex);
        return;
    }

    int left = u * 2;
    int top = v * 2;
    int right = (u + uw) * 2;
    int bottom = (v + vh) * 2;

    HudBeginQuad(tex, color);
    HudVertex(HUD_Pass, left, top, x, y);
    HudVertex(HUD_Pass, left, bottom, x, y + h);
    HudVertex(HUD_Pass, right, bottom, x + w, y + h);
    HudVertex(HUD_Pass, right, top, x + w, y);
    HudEnd();
}


// 0x0068bf0 (0x78 bytes)
void Sprite_DrawShapeF(float x, float y, float w, float h, int u, int v, int uw, int vh, u32 color, void *tex)
{
    Sprite_DrawShape((int)x, (int)y, (int)w, (int)h, u, v, uw, vh, color, tex);
}


// 0x0068c70 (0x3e4 bytes)
/* Draws len bytes of str with g_JapanFontTex. Bytes 8..15 pick a palette colour, bytes below 32
   are 24x16 grey glyphs, 0xbd/0xbe are diacritics placed against the previous character */
void FontPrintScaledJapanese(float x, float y, float scale, u32 color, const u8 *str, int len, int unused, const FontGlyph *table)
{
    if (g_FontKeepPalette == 0) {
        g_FontPalette[0] = color;
    }

    int wide = (int)(scale * 24.0f);
    int size = (int)(scale * 16.0f);

    for (int i = 0; i != len; i++) {
        u8 ch = str[i];

        if (ch == 0) {
            return;
        }

        if (ch >= 8 && ch <= 15) {
            if (g_FontColorsEnabled != 0) {
                color = (color & 0xff000000) | (g_FontPalette[ch - 8] & 0xffffff);
            }

            continue;
        }

        float yOff = (float)FastIntToDouble(table[ch].yOff);

        ch = str[i];

        if (table[ch].width == 0) {
            continue;
        }

        const FontGlyph *glyph = &table[ch];

        if (ch < 32) {
            u32 sum = (color & 0xff) + ((color >> 8) & 0xff) + ((color >> 16) & 0xff) + 1;
            u32 grey = (sum * 341) >> 10;
            u32 greyColor = (color & 0xff000000) + (grey << 16) + (grey << 8) + grey;

            Sprite_DrawShape((int)x, (int)(yOff * scale + y), wide, size, glyph->u, glyph->v, 24, 16, greyColor, &g_JapanFontTex);
        }
        else if (ch == 0xbd || ch == 0xbe) {
            u8 prev = str[i - 1];
            const FontGlyph *mark = &table[prev + 0x80];
            int shift = mark->width - table[prev].width;

            Sprite_DrawShape((int)(shift * scale + x), (int)(mark->yOff * scale + y), size, size, glyph->u, glyph->v, 16, 16, color, &g_JapanFontTex);

            shift = mark->width - table[str[i - 1]].width;
            x = (shift + (str[i] == 0xbe) + 4) * scale + x;

            continue;
        }
        else if (ch > 32) {
            Sprite_DrawShape((int)x, (int)(yOff * scale + y), size, size, glyph->u, glyph->v, 16, 16, color, &g_JapanFontTex);
        }

        x = (float)FastIntToDouble(table[str[i]].width) * scale + x;
    }
}


// 0x0069058 (0x7c bytes)
/* Width of the first len characters of str (up to a 0 byte) in table, times scale */
int FontLenScaledWithTableNoKern(float scale, const u8 *str, int len, const FontGlyph *table)
{
    float width = 0.0f;

    for (int i = 0; i != len; i++) {
        if (str[i] == 0) {
            break;
        }

        width = (float)table[str[i]].width * scale + width;
    }

    return (int)width;
}


// 0x00690e0 (0x5ac bytes)
/* Prints str into win with FontPrintScaledJapanese, breaking lines at spaces and control bytes so
   each fits the window (centred on text_x with flag 1, the block centred on text_y with flag 2).
   Fills max_width/max_height; flag 4 only measures, flag 8 adds the sub-pixel offsets. */
void FontPrintOptJapanese(float scale, FontWindow *win, u32 color, const u8 *str, int len, int unused, const FontGlyph *table)
{
    short lineStart[32];
    short lineEnd[32];
    short lineColor[32];

    g_FontKeepPalette = 1;

    int spacing = win->line_spacing;
    int textY = win->text_y;
    int flags = win->flags;
    int width;

    if ((flags & 1) == 0) {
        width = win->win_right - win->text_x;
    }
    else {
        int right = win->win_right - win->text_x;
        int left = win->text_x - win->win_left;

        width = (right < left ? right : left) * 2;
    }

    int lines = 0;
    int pos = 0;
    int colorIdx = 0;

    if (len != 0) {
        while (str[pos] != 0) {
            int start = pos;
            int breakAt = start;
            int lineWidth = 0;

            lineStart[lines] = pos;
            lineColor[lines] = colorIdx;

            if (width > 0) {
                do {
                    u8 ch = str[pos];

                    if (ch == ' ' || ch < 16) {
                        breakAt = pos;
                    }

                    if (g_FontColorsEnabled != 0 && ch >= 8 && ch <= 15) {
                        colorIdx = ch - 8;
                    }

                    if (ch == 0 || ch == 1) {
                        break;
                    }

                    pos++;
                    lineWidth += table[ch].width;
                } while (lineWidth < width);
            }

            lineEnd[lines] = breakAt;

            if ((short)breakAt == (short)start) {
                lineEnd[lines] = pos;
            }

            pos = lineEnd[lines];

            u8 ch = str[pos];

            if (ch == ' ' || ch < 16) {
                lineEnd[lines] = pos - 1;
            }

            lines++;

            if (ch == 0) {
                break;
            }

            pos++;

            if (pos == len) {
                break;
            }
        }
    }

    win->max_width = 0;
    win->max_height = lines * spacing;

    int y = textY;

    if (flags & 2) {
        y = textY - ((short)spacing * lines >> 1);
    }

    for (int i = 0; i < lines; i++) {
        int count = lineEnd[i] - lineStart[i] + 1;
        const u8 *line = str + lineStart[i];
        float lineWidth = 0.0f;

        for (int j = 0; j != count; j++) {
            if (line[j] == 0) {
                break;
            }

            lineWidth = (float)table[line[j]].width * scale + lineWidth;
        }

        int pixels = (int)lineWidth;

        if (pixels > win->max_width) {
            win->max_width = pixels;
        }

        flags = win->flags;

        if ((flags & 4) == 0) {
            g_FontPalette[0] = color;

            int x = win->text_x;

            if (flags & 1) {
                x = win->text_x - (pixels >> 1);
            }

            float drawX = (float)x;
            float drawY = (float)y;

            if (flags & 8) {
                drawX = (float)win->sub_pixel_x * 0.0625f + drawX;
                drawY = (float)win->sub_pixel_y * 0.0625f + drawY;
            }

            FontPrintScaledJapanese(drawX, drawY, scale, g_FontPalette[lineColor[i]], line, count, unused, table);
        }

        y += win->line_spacing;
    }

    g_FontKeepPalette = 0;
}

/* effect texture tex on the HUD pass, its words copied with word 1's filter bits forced to
   0x14000 */
static inline void HudBindEffectTex(int tex)
{
    u32 *header = (u32 *)((u8 *)(uintptr_t)EffectTexHeaders + tex * 0x24);
    u32 words[9];

    for (int i = 0; i < 9; i++) {
        words[i] = header[i];
    }

    words[1] = (header[1] & 0xffff) | 0x14000;

    FUN_004d6bb0(HUD_Pass, 0, (RsxCmd *)words);
}


// 0x006968c (0x378 bytes)
/* DL's DrawSpriteFont without one_to_one: texels (tx_u, tx_v, tx_w, tx_h) of effect texture tex0
   drawn at (sc_x, sc_y, sc_w, sc_h) on the HUD pass */
void DrawSpriteFont(float sc_x, float sc_y, float sc_w, float sc_h, int tx_u, int tx_v, int tx_w, int tx_h, u64 rgba, u64 tex0)
{
    float right = sc_w + sc_x;
    float bottom = sc_h + sc_y;
    HudBindEffectTex((int)tex0);
    idol_draw::ResetPassState(HUD_Pass);

    Emit(HUD_Pass, HUD_SET_COLOR4UB);
    Emit(HUD_Pass, (u32)rgba);
    /* (three words to method 0x1714, all zero) */
    Emit(HUD_Pass, 0x400c1714);
    Emit(HUD_Pass, 0);
    Emit(HUD_Pass, 0);
    Emit(HUD_Pass, 0);
    Emit(HUD_Pass, HUD_SET_BEGIN_END);
    Emit(HUD_Pass, CELL_GCM_PRIMITIVE_QUADS);

    int left = tx_u * 2;
    int top = tx_v * 2;
    int texRight = (tx_u + tx_w) * 2;
    int texBottom = (tx_v + tx_h) * 2;

    HudVertexF(HUD_Pass, left, top, sc_x, sc_y);
    HudVertexF(HUD_Pass, left, texBottom, sc_x, bottom);
    HudVertexF(HUD_Pass, texRight, texBottom, right, bottom);
    HudVertexF(HUD_Pass, texRight, top, right, sc_y);
    HudEnd();
}


// 0x0069a04 (0x40 bytes)
void DrawSpriteFont_thunk(float sc_x, float sc_y, float sc_w, float sc_h, int tx_u, int tx_v, int tx_w, int tx_h, u64 rgba, u64 tex0)
{
    DrawSpriteFont(sc_x, sc_y, sc_w, sc_h, tx_u, tx_v, tx_w, tx_h, rgba, tex0);
}


// 0x0069a50 (0x34c bytes)
/* FontPrintScaledJapanese through DrawSpriteFont with effect texture tex: glyph rows start one
   texel down and are 15 high, and bytes 0x80..0xa7 also draw the mark at table[ch + 0x40] */
void FontPrintScaledWestern(float x, float y, float scale, u32 color, const u8 *str, int len, u64 tex, const FontGlyph *table)
{
    SetGSReg(3, idol_draw::PackCmd(0, 1, 0, 1, 0));
    SetGSReg(0x16, idol_draw::Blend(1, 5, 4, 0, 0, 0, 0, 1));

    if (g_FontKeepPalette == 0) {
        g_FontPalette[0] = color;
    }

    float size = scale * 16.0f;

    if (len == 0) {
        return;
    }

    float wide = scale * 24.0f;

    for (int i = 0; i != len; i++) {
        u8 ch = str[i];

        if (ch == 0) {
            return;
        }

        if (ch >= 8 && ch <= 15) {
            if (g_FontColorsEnabled != 0) {
                color = (color & 0xff000000) | (g_FontPalette[ch - 8] & 0xffffff);
            }

            continue;
        }

        if (table[ch].width == 0) {
            continue;
        }

        float yOff = (float)FastIntToDouble(table[ch].yOff);

        ch = str[i];

        if (ch >= 128 && ch < 168) {
            const FontGlyph *mark = &table[ch + 0x40];
            float markX = (float)FastIntToDouble(mark->width);
            float markY = (float)FastIntToDouble(mark->yOff);

            DrawSpriteFont(markX * scale + x, markY * scale + y, size, size, mark->u, mark->v + 1, 16, 15, color, tex);

            ch = str[i];
        }

        const FontGlyph *glyph = &table[ch];
        float drawY = yOff * scale + y;

        if (ch < 32) {
            u32 sum = (color & 0xff) + ((color >> 8) & 0xff) + ((color >> 16) & 0xff) + 1;
            u32 grey = (sum * 341) >> 10;
            u32 greyColor = (color & 0xff000000) + (grey << 16) + (grey << 8) + grey;

            DrawSpriteFont(x, drawY, wide, size, glyph->u, glyph->v + 1, 24, 15, greyColor, tex);
        }
        else if (ch > 32) {
            DrawSpriteFont(x, drawY, size, size, glyph->u, glyph->v + 1, 16, 15, color, tex);
        }

        x = (float)FastIntToDouble(table[str[i]].width) * scale + x;
    }
}


// 0x0069db8 (0x750 bytes)
/* FontPrintOptJapanese for the Western fonts through FontPrintScaledWestern. A scale of 1 becomes 0.9 in
   languages 2..5 (0.8 in language 3 with flag 0x10). Lines are balanced: while the line count
   holds and the last line is under a third of the width, the width shrinks by 16 and the text is
   broken again; if a narrower width adds a line, the original width is used. */
void FontPrintOptWestern(float scale, FontWindow *win, u32 color, const char *text, int len, int tex, void *glyphs)
{
    const u8 *str = (const u8 *)text;
    const FontGlyph *table = (const FontGlyph *)glyphs;
    short lineStart[32];
    short lineEnd[32];
    short lineColor[32];

    g_FontKeepPalette = 1;

    int flags = win->flags;
    int spacing = win->line_spacing;
    int textY = win->text_y;
    int startWidth;

    if ((flags & 1) == 0) {
        startWidth = win->win_right - win->text_x;
    }
    else {
        int right = win->win_right - win->text_x;
        int left = win->text_x - win->win_left;

        startWidth = (right < left ? right : left) * 2;
    }

    if (fabsf(scale - 1.0f) <= 0.001f) {
        scale = 1.0f;

        if (g_Language == 2 || g_Language == 4 || g_Language == 5) {
            scale = 0.9f;
        }
        else if (g_Language == 3) {
            scale = 0.9f;

            if (flags & 0x10) {
                scale = 0.8f;
            }
        }
    }

    int colorIdx = 0;
    int width = startWidth;
    int settled = 0;
    int firstLines = 0;
    int lastWidth = 0;
    int lines;

    while (true) {
        int pos = 0;

        lines = 0;

        if (len != 0) {
            while (str[pos] != 0) {
                int start = pos;
                int breakAt = start;
                int lineWidth = 0;

                lineStart[lines] = pos;
                lineColor[lines] = colorIdx;

                if (width > 0) {
                    do {
                        u8 ch = str[pos];

                        if (ch == ' ' || ch < 16) {
                            breakAt = pos;
                        }

                        if (g_FontColorsEnabled != 0 && ch >= 8 && ch <= 15) {
                            colorIdx = ch - 8;
                        }

                        if (ch == 0 || ch == 1) {
                            break;
                        }

                        pos++;
                        lineWidth += (int)((float)table[ch].width * scale);
                    } while (lineWidth < width);
                }

                lineEnd[lines] = breakAt;

                if ((short)breakAt == (short)start) {
                    lineEnd[lines] = pos;
                }

                pos = lineEnd[lines];

                u8 ch = str[pos];

                if (ch == ' ' || ch < 16) {
                    lineEnd[lines] = pos - 1;
                }

                lines++;

                if (ch == 0) {
                    lastWidth = lineWidth;
                    break;
                }

                pos++;

                if (pos == len) {
                    break;
                }
            }
        }

        if (settled != 0 || lines <= 1) {
            break;
        }

        if (firstLines == 0) {
            firstLines = lines;
        }

        if (firstLines < lines) {
            width = startWidth;
            settled = 1;
        }
        else if (lastWidth < width / 3) {
            width -= 16;
        }
        else {
            break;
        }
    }

    win->max_width = 0;
    win->max_height = lines * spacing;

    int y = textY;

    if (flags & 2) {
        y = textY - ((short)spacing * lines >> 1);
    }

    for (int i = 0; i < lines; i++) {
        int count = lineEnd[i] - lineStart[i] + 1;
        const u8 *line = str + lineStart[i];
        float lineWidth = 0.0f;

        for (int j = 0; j != count; j++) {
            if (line[j] == 0) {
                break;
            }

            lineWidth = (float)table[line[j]].width * scale + lineWidth;
        }

        int pixels = (int)lineWidth;

        if (pixels > win->max_width) {
            win->max_width = pixels;
        }

        flags = win->flags;

        if ((flags & 4) == 0) {
            g_FontPalette[0] = color;

            int x = win->text_x;

            if (flags & 1) {
                x = win->text_x - (pixels >> 1);
            }

            float drawX = (float)x;
            float drawY = (float)y;

            if (flags & 8) {
                drawX = (float)win->sub_pixel_x * 0.0625f + drawX;
                drawY = (float)win->sub_pixel_y * 0.0625f + drawY;
            }

            FontPrintScaledWestern(drawX, drawY, scale, g_FontPalette[lineColor[i]], line, count, tex, table);
        }

        y += win->line_spacing;
    }

    g_FontKeepPalette = 0;
}


// 0x006a510 (0xb4 bytes)
/* text in win at scale 1 with the medium font: JapaneseGlyphs in Japanese mode, else
   MediumWesternGlyphs, both on effect texture 1 (used by the cheats menu, "No cheats activated") */
void FontPrintMediumOpt(FontWindow *win, u32 color, const char *str, int len)
{
    if (g_JapaneseMode) {
        FontPrintOptJapanese(1.0f, win, color, (const u8 *)str, len, GetEffectTex(1), (const FontGlyph *)&JapaneseGlyphs);
    }
    else {
        FontPrintOptWestern(1.0f, win, color, str, len, GetEffectTex(1), &MediumWesternGlyphs);
    }
}


// 0x006a5c4 (0x70 bytes)
/* Sprite_DrawShape with an effect texture by its index in EffectTexHeaders */
void Sprite_DrawShapeWrapper(int x, int y, int w, int h, int u, int v, int uw, int vh, u32 color, int tex)
{
    Sprite_DrawShape(x, y, w, h, u, v, uw, vh, color, (u8 *)(uintptr_t)EffectTexHeaders + tex * 0x24);
}


// 0x006a634 (0xe4 bytes)
/* a flat rectangle in color with effect texture 22 (the whole screen through DrawFullScreenQuad) */
void DrawRectOverlay(int top, int bot, int left, int right, int color)
{
    void *tex = (u8 *)(uintptr_t)EffectTexHeaders + GetEffectTex(22) * 0x24;

    if (top == 0 && bot == 416 && left == 0 && right == 512) {
        DrawFullScreenQuad(color, tex);
        return;
    }

    Sprite_DrawShape(left, top, right - left, bot - top, 0, 0, 16, 16, color, tex);
}


// 0x006a718 (0x578 bytes)
/* a dark grey (0x040404) box with alpha whose left and right edges step in over two, three and
   four pixels; seven inlined DrawRectOverlay calls */
void DrawRoundedRect(short top, short bot, short left, short right, int alpha)
{
    int color = alpha << 24 | 0x040404;

    DrawRectOverlay(top, bot, left, right, color);

    DrawRectOverlay(top + 1, bot - 1, left - 2, left, color);
    DrawRectOverlay(top + 2, bot - 2, left - 3, left - 2, color);
    DrawRectOverlay(top + 4, bot - 4, left - 4, left - 3, color);

    DrawRectOverlay(top + 1, bot - 1, right, right + 2, color);
    DrawRectOverlay(top + 2, bot - 2, right + 2, right + 3, color);
    DrawRectOverlay(top + 4, bot - 4, right + 3, right + 4, color);
}


// 0x006ac90 (0x3c bytes)
void SetFontWindow(FontWindow *window, int win_top, int win_bot, int win_left, int win_right, int text_x, int text_y, int line_spacing, int flags)
{
    window->win_top = win_top;
    window->win_bot = win_bot;
    window->win_left = win_left;
    window->win_right = win_right;
    window->text_x = text_x;
    window->text_y = text_y;
    window->line_spacing = line_spacing;
    window->flags = flags;
    window->max_width = 0;
    window->max_height = 0;
    window->sub_pixel_x = 0;
    window->sub_pixel_y = 0;
}


// 0x006accc (0x74 bytes)
/* subtitles are always on in languages 2..5, and in two English cutscenes (scene 4 on Novalis,
   scene 0 on Aridia) */
int ShouldForceSubtitles(void)
{
    if (g_Language >= 2 && g_Language <= 5) {
        return 1;
    }

    if (g_SceneId == 4 && Level == Novalis) {
        return 1;
    }

    if (g_SceneId == 0 && Level == Aridia) {
        return 1;
    }

    return 0;
}

/* the subtitle window and its print in the medium font */
static inline void SubtitlePrint(FontWindow *window, const char *text)
{
    if (g_JapaneseMode) {
        FontPrintOptJapanese(1.0f, window, 0x80b0b0b0, (const u8 *)text, -1, GetEffectTex(1), (const FontGlyph *)&JapaneseGlyphs);
    }
    else {
        FontPrintOptWestern(1.0f, window, 0x80b0b0b0, text, -1, GetEffectTex(1), &MediumWesternGlyphs);
    }
}


// 0x006ad48 (0x460 bytes)
/* Prints the first subtitle line covering g_SpaceSceneFrame over a rounded box at the bottom of
   the screen. Patches: a narrower window in scene 5 on Kerwan, an Italian line on Hoven whose
   text is replaced, and a box raised by 20 pixels for a long line on Veldin 2. */
void DrawSubtitles(void)
{
    Subtitle *subs = (Subtitle *)(uintptr_t)g_SubtitleTable;

    if (subs == NULL) {
        return;
    }

    int pad = ShouldForceSubtitles() ? 10 : 0;
    int lang = 0;

    if (g_Language >= 2 && g_Language <= 5) {
        lang = g_Language - 1;
    }

    if (g_JapaneseMode) {
        lang = 5;
    }

    if (subs[0].start < 0) {
        return;
    }

    for (Subtitle *sub = subs; ; sub++) {
        short start = sub->start;
        short stop = sub->stop;

        if (g_SpaceSceneFrame >= start && g_SpaceSceneFrame <= stop) {
            FontWindow window;
            char patched[128];

            SetFontWindow(&window, 300, 380, pad + 40, 472, 250, 340, 18, 7);

            if (g_SceneId == 5 && Level == Kerwan) {
                if (g_Language != 4) {
                    window.win_left = pad + 50;
                }

                window.win_right = 460;
            }

            char *text = (char *)subs + sub->text_ofs[lang];

            memset(patched, ' ', sizeof(patched));

            if (Level == Hoven && g_Language == 5 && g_SceneId == 2 && start == 907 && stop == 979) {
                text = patched;
                strcpy(patched, "Fammi vedere la trivella....tieni!");
            }

            if (text[0] != 0) {
                /* flag 4: measure only */
                SubtitlePrint(&window, text);

                int half = window.max_height >> 1;
                int bottom = half + 345;

                window.text_y = 340;

                if (bottom > 396) {
                    window.text_y = 396 - (half + 5);
                }

                int raise = 0;

                if (g_Language > 0 && g_Language <= 5 && Level == Veldin2 && g_SceneId == 2 && sub->start == 832 && sub->stop == 2563) {
                    raise = 20;
                }

                DrawRoundedRect(340 - raise - (half + 5), bottom, 40, 472, 96);

                window.flags &= ~4;
                SubtitlePrint(&window, text);

                return;
            }
        }

        if (sub[1].start < 0) {
            return;
        }
    }
}


// 0x006b1a8 (0x44 bytes)
/* slides the letterbox bars one pixel a frame towards 24 pixels while LetterBoxOn, else to 0 */
void UpdateLetterBox(void)
{
    if (LetterBoxOn == 0) {
        if (LetterBoxPixels != 0) {
            LetterBoxPixels--;
        }
    }
    else if (LetterBoxPixels < 24) {
        LetterBoxPixels++;
    }
}

/* effect texture 22: the plain texture the flat overlays are drawn with */
static inline void *FlatTex(void)
{
    return (u8 *)(uintptr_t)EffectTexHeaders + GetEffectTex(22) * 0x24;
}

/* GS register 3 from an effect's alpha, when it has one */
static inline void SetEffectAlpha(u64 alpha)
{
    if (alpha != 0) {
        SetGSReg(3, alpha & 0xff000000ffULL);
    }
}


// 0x006b1f8 (0x3ac bytes)
/* ScreenColorEffectNow over the frame buffer: the background colour over everything, then
   bands of A_lines and B_lines lines (300 pixels wider than the screen on each side) down the
   screen, then normal alpha blending again */
void DrawScreenEffect(void)
{
    int idolDraw = g_pIdolDraw;

    FUN_004deab8(idolDraw, g_FrameBufWidth, g_FrameBufHeight);

    int height = g_FrameBufHeight;
    ScreenVBEffect *effect = (ScreenVBEffect *)ScreenColorEffectNow;

    SetEffectAlpha(effect->BKG_alpha);

    effect = (ScreenVBEffect *)ScreenColorEffectNow;

    if (effect->BKG_color & 0xff000000) {
        if (height == 416 && g_FrameBufWidth == 512) {
            DrawFullScreenQuad(effect->BKG_color, FlatTex());
        }
        else {
            Sprite_DrawShape(0, 0, g_FrameBufWidth, height, 0, 0, 16, 16, effect->BKG_color, FlatTex());
        }
    }

    int last = height - 1;

    for (int line = 0; line < height; ) {
        SetEffectAlpha(((ScreenVBEffect *)ScreenColorEffectNow)->A_alpha);

        effect = (ScreenVBEffect *)ScreenColorEffectNow;

        if (effect->A_color & 0xff000000) {
            int bottom = line + effect->A_lines;

            if (bottom >= last) {
                bottom = last;
            }

            Sprite_DrawShape(-300, line, g_FrameBufWidth + 600, bottom - line, 0, 0, 16, 16, effect->A_color, FlatTex());

            effect = (ScreenVBEffect *)ScreenColorEffectNow;
        }

        line += effect->A_lines;

        SetEffectAlpha(effect->B_alpha);

        effect = (ScreenVBEffect *)ScreenColorEffectNow;

        if (effect->B_color & 0xff000000) {
            int bottom = line + effect->B_lines;

            if (bottom >= last) {
                bottom = last;
            }

            Sprite_DrawShape(-300, line, g_FrameBufWidth + 600, bottom - line, 0, 0, 16, 16, effect->B_color, FlatTex());

            effect = (ScreenVBEffect *)ScreenColorEffectNow;
        }

        line += effect->B_lines;
    }

    Emit(HUD_Pass, CELL_GCM_METHOD(CELL_GCM_NV4097_SET_BLEND_EQUATION, 1));
    Emit(HUD_Pass, CELL_GCM_FUNC_ADD << 16 | CELL_GCM_FUNC_ADD);
    Emit(HUD_Pass, CELL_GCM_METHOD(CELL_GCM_NV4097_SET_BLEND_FUNC_SFACTOR, 2));
    Emit(HUD_Pass, CELL_GCM_SRC_ALPHA << 16 | CELL_GCM_SRC_ALPHA);
    Emit(HUD_Pass, CELL_GCM_ONE_MINUS_SRC_ALPHA << 16 | CELL_GCM_ONE_MINUS_SRC_ALPHA);

    FUN_004d86b0(idolDraw);
}


// 0x006b5a4 (0x38 bytes)
void DrawScreenOverlayTex(int r, int g, int b, int a, void *tex)
{
    DrawFullScreenQuad(a << 24 | (b & 0xff) << 16 | (g & 0xff) << 8 | (r & 0xff), tex);
}


// 0x006b5dc (0x5c bytes)
void DrawScreenOverlay(int r, int g, int b, int a)
{
    DrawFullScreenQuad(a << 24 | (b & 0xff) << 16 | (g & 0xff) << 8 | (r & 0xff), FlatTex());
}


// 0x006b638 (0xdc bytes)
void ExecutePostDraws(void)
{
    if (g_PostDrawCount != 0) {
        idol_draw::RsxCmd_DebugStr_Marker(ForwardPass, "PostDraw");
    }

    for (int i = 0; i < g_PostDrawCount; i++) {
        g_PostDrawFuncs[i](g_PostDrawArgs[i]);
    }

    if (g_PostDrawCount != 0) {
        idol_draw::RsxCmd_WritePass(ForwardPass);
    }
}


// 0x006b714 (0x94 bytes)
void ExecuteRegisteredMobyFuncs(void)
{
    for (int i = 0; i < g_MobyFuncListCount; i++) {
        g_MobyFuncList[i](g_MobyFuncListArgs[i]);
    }
}


// 0x006b7a8 (0xdc bytes)
void ExecutePostPreDraws(void)
{
    if (g_PostPreDrawCount != 0) {
        idol_draw::RsxCmd_DebugStr_Marker(ForwardPass, "PostPreDraw");
    }

    for (int i = 0; i < g_PostPreDrawCount; i++) {
        g_PostPreDrawFuncs[i](g_PostPreDrawArgs[i]);
    }

    if (g_PostPreDrawCount != 0) {
        idol_draw::RsxCmd_WritePass(ForwardPass);
    }
}


// 0x006b890 (0x200 bytes)
/* effect's colour over the frame buffer with the depth test off */
void DrawScreenInsertEffect(ScreenInsertEffect *effect)
{
    int idolDraw = g_pIdolDraw;

    FUN_004deab8(idolDraw, g_FrameBufWidth, g_FrameBufHeight);

    SetEffectAlpha(effect->alpha);

    if (effect->color & 0xff000000) {
        SetGSReg(0x21, VU1_addGSregister(GSmem.zbuf >> 13, 1, 1));

        if (g_FrameBufHeight == 416 && g_FrameBufWidth == 512) {
            DrawFullScreenQuad(effect->color, FlatTex());
        }
        else {
            Sprite_DrawShape(0, 0, g_FrameBufWidth, g_FrameBufHeight, 0, 0, 16, 16, effect->color, FlatTex());
        }

        SetGSReg(0x21, VU1_addGSregister(GSmem.zbuf >> 13, 1, 0));
    }

    if (effect->alpha != 0) {
        SetGSReg(3, idol_draw::PackCmd(0, 1, 0, 1, 0x80));
    }

    FUN_004d86b0(idolDraw);
}


// 0x006ba90 (0xdc bytes)
void ExecutePreDraws(void)
{
    if (g_PreDrawCount != 0) {
        idol_draw::RsxCmd_DebugStr_Marker(ForwardPass, "PreDraw");
    }

    for (int i = 0; i < g_PreDrawCount; i++) {
        g_PreDrawFuncs[i](g_PreDrawArgs[i]);
    }

    if (g_PreDrawCount != 0) {
        idol_draw::RsxCmd_WritePass(ForwardPass);
    }
}

/* a full-screen quad whose alpha is amount (clamped to 1) times 128, over rgb */
static inline void DrawScreenFade(float *amount, u32 rgb)
{
    if (*amount > 0.0f) {
        if (*amount > 1.0f) {
            *amount = 1.0f;
        }

        int alpha = FastDoubleToInt(*amount * 128.0f);

        DrawFullScreenQuad(alpha << 24 | rgb, FlatTex());
    }
}


// 0x006bb78 (0x8a8 bytes)
/* One frame of the world: sets up and draws tfrags, ties and shrubs, the sky, the registered
   pre-draws, the mobys, particles and post-draws, then the screen overlays (underwater tint,
   scene fade and flash, ScreenColorEffectNow), the HUD and subtitles; picks the level or water
   fog for the next frame. Each part is gated by its g_RenderFlags bit and g_DebugEnables entry. */
void DefaultDraw(void)
{
    /* filled by each geometry type's setup and passed to its draw; layout unknown */
    u32 tieInfo[3];
    u32 shrubInfo[3];
    u32 tfragInfo[2];
    int texBase = (int)(uintptr_t)&TEX_BASE;
    int *renderState = (int *)&DAT_01111700;

    CleanAnimationCache();
    RebuildSharedWaveTables();
    idol_draw::InitFrameRenderState((int)(uintptr_t)renderState, DirectionalLights, 16, PointLights, 8, &g_HeroLightDir, 4);

    if (g_RenderFlags & RENDER__Tfrags) {
        FUN_0050b08c(texBase, (uintptr_t)tfragInfo);
        FUN_004ec8a4(renderState, tfragInfo[1], (int)tfragInfo[0]);
        FUN_0050bfd4((int)(uintptr_t)tfragInfo);
    }

    if (g_RenderFlags & Ties) {
        FUN_0050c020(texBase, (undefined4 *)tieInfo);
        FUN_004ecc84(renderState, tieInfo[1], (int)tieInfo[2]);
    }

    if (g_RenderFlags & Shrubs) {
        FUN_00508738(texBase, (undefined4 *)shrubInfo);
        FUN_004ed144(renderState, shrubInfo[1], (int)shrubInfo[2]);
    }

    if (g_RenderFlags & RENDER__Sky) {
        if (g_FrontEnd == 0) {
            InitSky();
        }
        else {
            SkyLevelGeneric();
        }
    }

    if (g_RenderFlags & RENDER__Tfrags) {
        DrawTfrag(texBase, (uintptr_t)tfragInfo);
    }

    if (g_RenderFlags & Ties) {
        DrawTie(texBase, (int *)tieInfo);
    }

    if (g_DebugEnables[13] != 0) {
        ExecutePreDraws();
    }

    if (g_RenderFlags & Shrubs) {
        DrawShrub(texBase, (uintptr_t)shrubInfo);
    }

    if (g_ScreenInsertEffect != 0) {
        DrawScreenInsertEffect((ScreenInsertEffect *)&g_ScreenInsertEffect);
    }

    if (g_DebugEnables[13] != 0) {
        ExecutePostPreDraws();
    }

    DrawMobys();

    if ((g_RenderFlags & Ocean) && g_DebugEnables[13] != 0) {
        ExecuteRegisteredMobyFuncs();
        Camera_DrawReticule();
    }

    if (g_DebugEnables[14] != 0) {
        DrawParts();
    }

    if (g_DebugEnables[15] != 0) {
        ExecutePostDraws();

        if (g_gameMode == GAME_MODE_NORMAL) {
            ImpactSprite_Draw();
        }

        TargetCrosshairDraw();
    }

    if (g_RenderFlags & Screen_Overlays) {
        if (g_DebugEnables[17] != 0) {
            idol_draw::DrawDepth(HUD_Pass, idol_draw::PackCmd(0, 1, 0, 1, 0x80));

            if (GameCamera.camUnderWater != 0) {
                RGBA tint = g_UnderwaterTint;

                DrawFullScreenQuad(tint.a << 24 | tint.b << 16 | tint.g << 8 | tint.r, FlatTex());
            }

            DrawScreenFade(&SceneScreenFade, 0);
            DrawScreenFade(&g_SceneFlash, 0xffffff);

            if (ScreenColorEffectEnabled != 0 && ScreenColorEffectNow != NULL) {
                DrawScreenEffect();
            }
        }

        STUB_00065630("screen overlays", 10);
    }

    if ((g_RenderFlags & HUD) && g_DebugEnables[16] != 0) {
        DrawGameplayHud();
        Help_Draw();
        UpdateLetterBox();
    }

    if (g_gameMode == GAME_MODE_SCENE && g_SubtitlesOn) {
        DrawSubtitles();
    }

    RGBA fog;

    if (GameCamera.camUnderWater != 0) {
        fog = WaterFog;
        g_ViewContext.fogNearDist = *(float *)&WaterFogNearDist;
        g_ViewContext.fogFarDist = *(float *)&WaterFogFarDist;
        g_ViewContext.fogNearIntensity = *(float *)&WaterFogNearIntensity;
        g_ViewContext.fogFarIntensity = *(float *)&WaterFogFarIntensity;
        PartClipDist = 0x40000;
    }
    else {
        fog = levelFog;
        g_ViewContext.fogNearDist = LevelFogNearDist;
        g_ViewContext.fogFarDist = LevelFogFarDist;
        g_ViewContext.fogNearIntensity = LevelFogNearIntensity;
        g_ViewContext.fogFarIntensity = LevelFogFarIntensity;
        PartClipDist = 0x1f4000;
    }

    g_ViewContext.fogR = fog.r;
    g_ViewContext.fogG = fog.g;
    g_ViewContext.fogB = fog.b;

    UpdateViewContext();

    LevelFogMode = 0;
}


// 0x006c424 (0x70 bytes)
void SetupDefaultDraw(void)
{
    if (g_CutscenePlaying != 0 || g_HeroIsOutOfBounds) {
        return;
    }

    g_RenderFlags = (RENDER)0x100ff;

    if (g_gameMode == GAME_MODE_PAUSE) {
        g_RenderFlags = (RENDER)0x7f;
    }

    DefaultDraw();
}


// 0x006c494 (0x44 bytes)
void SetupDefaultDrawMovie(void)
{
    if (g_CutscenePlaying != 0) {
        return;
    }

    STUB_00078100();
    g_RenderFlags = (RENDER)0x7f;
    DefaultDraw();
}


// 0x006c4d8 (0x80 bytes)
/* the world under the freeze overlay when it froze normal play, the pause menu when it froze the
   pause menu */
void SetupDefaultDrawFreeze(void)
{
    if (g_CutscenePlaying != 0) {
        return;
    }

    if (GetFreezePrevGameMode() == GAME_MODE_NORMAL) {
        STUB_00078100();
        g_RenderFlags = (RENDER)0x100ff;
        DefaultDraw();
    }
    else if (GetFreezePrevGameMode() == GAME_MODE_PAUSE) {
        DrawPauseMenu(1);
    }

    DrawDialogText();
}


// 0x006c558 (0x84 bytes)
void InitLevelRenderState(void)
{
    if (g_CutscenePlaying != 0) {
        return;
    }

    DAT_010ee2f0 = 0xffffffff;
    idol_draw::InitFrameRenderState((int)(uintptr_t)&DAT_01111700, DirectionalLights, 16, PointLights, 8, &g_HeroLightDir, 4);
    DrawPauseMenu(0);
}


// 0x006c5dc (0x10 bytes)
void EnableFontColors(void)
{
    g_FontColorsEnabled = 1;
}

/* a palette byte (8..15) changes color when font colours are on; true when ch was one */
static inline bool FontPaletteCode(u8 ch, u32 *color)
{
    if (ch < 8 || ch > 15) {
        return false;
    }

    if (g_FontColorsEnabled != 0) {
        *color = (*color & 0xff000000) | (g_FontPalette[ch - 8] & 0xffffff);
    }

    return true;
}

/* color with its RGB replaced by their average, for the 24-wide glyphs below 32 */
static inline u32 FontGrey(u32 color)
{
    u32 sum = (color & 0xff) + ((color >> 8) & 0xff) + ((color >> 16) & 0xff) + 1;
    u32 grey = (sum * 341) >> 10;

    return (color & 0xff000000) + (grey << 16) + (grey << 8) + grey;
}


// 0x006c5ec (0x2e4 bytes)
/* FontPrintScaledJapanese at scale 1 in whole pixels */
void FontPrintJapanese(int x, int y, u32 color, const char *text, int len, int unused, void *glyphs)
{
    const u8 *str = (const u8 *)text;
    const FontGlyph *table = (const FontGlyph *)glyphs;

    if (g_FontKeepPalette == 0) {
        g_FontPalette[0] = color;
    }

    for (int i = 0; i != len; i++) {
        u8 ch = str[i];

        if (ch == 0) {
            return;
        }

        if (FontPaletteCode(ch, &color)) {
            continue;
        }

        const FontGlyph *glyph = &table[ch];

        if (glyph->width == 0) {
            continue;
        }

        if (ch < 32) {
            Sprite_DrawShape(x, y + glyph->yOff, 24, 16, glyph->u, glyph->v, 24, 16, FontGrey(color), &g_JapanFontTex);
        }
        else if (ch == 0xbd || ch == 0xbe) {
            u8 prev = str[i - 1];
            const FontGlyph *mark = &table[prev + 0x80];

            Sprite_DrawShape(x - table[prev].width + mark->width, y + mark->yOff, 16, 16, glyph->u, glyph->v, 16, 16, color, &g_JapanFontTex);

            x = (mark->width - table[str[i - 1]].width) + (str[i] == 0xbe) + x + 4;

            continue;
        }
        else if (ch > 32) {
            Sprite_DrawShape(x, y + glyph->yOff, 16, 16, glyph->u, glyph->v, 16, 16, color, &g_JapanFontTex);
        }

        x += table[str[i]].width;
    }
}


// 0x006c8d0 (0x33c bytes)
/* FontPrintScaledWestern at scale 1 in whole pixels through Sprite_DrawShape, glyphs a full 16 high */
void FontPrint(int x, int y, u32 color, const char *text, int len, int tex, void *glyphs)
{
    const u8 *str = (const u8 *)text;
    const FontGlyph *table = (const FontGlyph *)glyphs;
    void *texHeader = (u8 *)(uintptr_t)EffectTexHeaders + tex * 0x24;

    SetGSReg(3, idol_draw::PackCmd(0, 1, 0, 1, 0));
    SetGSReg(0x16, idol_draw::Blend(1, 5, 4, 0, 0, 0, 0, 1));

    if (g_FontKeepPalette == 0) {
        g_FontPalette[0] = color;
    }

    for (int i = 0; i != len; i++) {
        u8 ch = str[i];

        if (ch == 0) {
            return;
        }

        if (FontPaletteCode(ch, &color)) {
            continue;
        }

        if (table[ch].width == 0) {
            continue;
        }

        if (ch >= 128 && ch < 168) {
            const FontGlyph *mark = &table[ch + 0x40];

            Sprite_DrawShape(x + mark->width, y + mark->yOff, 16, 16, mark->u, mark->v, 16, 16, color, texHeader);

            ch = str[i];
        }

        const FontGlyph *glyph = &table[ch];

        if (ch < 32) {
            Sprite_DrawShape(x, y + glyph->yOff, 24, 16, glyph->u, glyph->v, 24, 16, FontGrey(color), texHeader);
        }
        else if (ch > 32) {
            Sprite_DrawShape(x, y + glyph->yOff, 16, 16, glyph->u, glyph->v, 16, 16, color, texHeader);
        }

        x += table[str[i]].width;
    }
}


// 0x006cc0c (0xa8 bytes)
/* str at (x, y) in the medium font: JapaneseGlyphs in Japanese mode, else MediumWesternGlyphs */
void FontPrintMediumLeft(int x, int y, u32 color, const char *str, int len)
{
    if (g_JapaneseMode) {
        FontPrintJapanese(x, y, color, str, len, GetEffectTex(1), &JapaneseGlyphs);
    }
    else {
        FontPrint(x, y, color, str, len, GetEffectTex(1), &MediumWesternGlyphs);
    }
}


// 0x006ccb4 (0x10 bytes)
void DisableFontColors(void)
{
    g_FontColorsEnabled = 0;
}


// 0x006ccc4 (0xbc bytes)
/* width of the first len characters of s (up to a 0 byte), the 0xbd/0xbe diacritics advancing
   as FontPrintJapanese does */
int FontLenWithTable(char *s, int len, void *glyphs)
{
    const FontGlyph *table = (const FontGlyph *)glyphs;
    int width = 0;

    for (int i = 0; i != len; i++) {
        u8 ch = s[i];

        if (ch == 0) {
            return width;
        }

        int advance = table[ch].width;

        if (advance == 0) {
            continue;
        }

        if (ch < 0xbd || ch > 0xbe) {
            width += advance;
        }
        else {
            u8 prev = s[i - 1];

            width = (table[prev + 0x80].width - table[prev].width) + (ch == 0xbe) + width + 4;
        }
    }

    return width;
}


// 0x006cd80 (0x68 bytes)
int FontLenWithTableNoKern(char *s, int len, void *glyphs)
{
    const FontGlyph *table = (const FontGlyph *)glyphs;
    int width = 0;

    for (int i = 0; i != len; i++) {
        u8 ch = s[i];

        if (ch == 0) {
            return width;
        }

        width += table[ch].width;
    }

    return width;
}


// 0x006cde8 (0xb0 bytes)
/* width of s in the medium font */
int FontLen(char *s, int len)
{
    if (g_JapaneseMode) {
        return FontLenWithTable(s, len, &JapaneseGlyphs);
    }

    return FontLenWithTableNoKern(s, len, &MediumWesternGlyphs);
}


// 0x006cea0 (0x2dc bytes)
/* str in a HUD text box at y: starting at x (align -1), centred on x (0) or ending at x (1);
   the box is sized for the text at scale and has opacity scale; the text is drawn with a black
   shadow and its alpha is alpha * 128 */
void DrawFancyTextWithBox(int x, int y, int align, float scale, float alpha, char *str)
{
    int width = (int)((float)FontLen(str, -1) * scale);
    int left = x;
    int right = x;

    if (align == -1) {
        right = width + x;
    }
    else if (align == 0) {
        left = x - (width >> 1);
        right = x + (width >> 1);
    }
    else if (align == 1) {
        left = x - width;
    }

    Hud_DrawTextBox(left - 32, y - 14, right - left + 64, 28, FastDoubleToInt(scale * 112.0f));

    g_FontColorsEnabled = 0;

    int color = ((int)(alpha * 128.0f) << 24) + 0xe0e0e0;

    if (g_JapaneseMode) {
        FontPrintJapanese(left + 1, y - 7, color & 0xff000000, str, -1, GetEffectTex(1), &JapaneseGlyphs);
        FontPrintJapanese(left, y - 8, color, str, -1, GetEffectTex(1), &JapaneseGlyphs);
    }
    else {
        FontPrint(left + 1, y - 7, color & 0xff000000, str, -1, GetEffectTex(1), &MediumWesternGlyphs);
        FontPrint(left, y - 8, color, str, -1, GetEffectTex(1), &MediumWesternGlyphs);
    }

    g_FontColorsEnabled = 1;
}


// 0x006d190 (0x3f8 bytes)
/* msg in text boxes while frame is in [start, start + duration]: the boxes grow in over 16
   frames and shrink over the last 8, the text fades in after them over 16 frames and out over
   8 frames before. Each 0x01 starts a new box 26 pixels lower, or with oneLine becomes " - ". */
void DrawTimedHelpMsg(TimedHelpMsg *msg, int frame)
{
    char line[288];
    int start = msg->start;
    int end = start + msg->duration;

    if (frame < start || end < frame) {
        return;
    }

    float scale = 1.0f;
    float alpha = 1.0f;

    if (frame < start + 16) {
        scale = (float)(frame - start) * 0.0625f;
    }

    if (frame > end - 8) {
        scale = (float)(end - frame) * 0.125f;
    }

    if (frame < start + 32) {
        alpha = (float)(frame - start - 16) * 0.0625f;

        if (alpha < 0.0f) {
            alpha = 0.0f;
        }
    }

    if (frame > end - 16) {
        alpha = (float)(end - frame - 8) * 0.125f;

        if (alpha < 0.0f) {
            alpha = 0.0f;
        }
    }

    int id = msg->id;

    if (id < 20790) {
        id--;
    }

    char *text = help_msg_string_by_index((StringId)id);
    char *out = line;

    if (msg->oneLine == 1) {
        while (*text != 0) {
            if (*text == 1) {
                char *dash = out;

                out[0] = ' ';
                out[1] = '-';
                out[2] = ' ';
                out += 3;

                while (*text == 1) {
                    text++;
                }

                if (*text == 0) {
                    out = dash;
                }
            }
            else {
                *out++ = *text++;
            }
        }

        *out = 0;
        DrawFancyTextWithBox(msg->x, msg->y, msg->align, scale, alpha, line);

        return;
    }

    int y = msg->y;

    while (*text != 0) {
        if (*text == 1) {
            *out = 0;
            DrawFancyTextWithBox(msg->x, y, msg->align, scale, alpha, line);

            y += 26;
            out = line;

            while (*text == 1) {
                text++;
            }

            if (*text == 0) {
                break;
            }
        }
        else {
            *out++ = *text++;
        }
    }

    if (out > line) {
        *out = 0;
        DrawFancyTextWithBox(msg->x, y, msg->align, scale, alpha, line);
    }
}


// 0x006d590 (0x174 bytes)
/* the credits screen: the current credits image over the whole screen, the scene fade, and the
   help messages of g_CreditsHelpMsgs (ended by a negative id) at g_Credits.frame */
void DrawCredits(void)
{
    if (g_CutscenePlaying != 0) {
        return;
    }

    TexSamplerFlags = 5;
    Sprite_DrawShape(0, 0, 512, 416, 0, 0, 256, 208, 0x80808080, &g_Credits.images[0]);

    DrawScreenFade(&SceneScreenFade, 0);

    for (TimedHelpMsg *msg = g_CreditsHelpMsgs; msg->id >= 0; msg++) {
        DrawTimedHelpMsg(msg, g_Credits.frame);
    }
}


// 0x006d704 (0x4 bytes)
void STUB_0006d704(...)
{
}


// 0x006d708 (0x4 bytes)
void STUB_0006d708(...)
{
}


// 0x006d70c (0x14 bytes)
int GetEffectTexAddr(int index)
{
    return g_PartTexBaseIndex + index;
}


// 0x006d720 (0x40 bytes)
/* adds function(moby) to the list DefaultDraw runs after the mobys (64 at most) */
void RegisterFuncForMoby(void **function, MobyInstance *moby)
{
    if (g_MobyFuncListCount < 64) {
        g_MobyFuncList[g_MobyFuncListCount] = (MobyDrawFunc)function;
        g_MobyFuncListArgs[g_MobyFuncListCount] = moby;
        g_MobyFuncListCount++;
    }
}


// 0x006d760 (0x40 bytes)
/* adds func(moby) to the pre-draws, run after the tfrags and ties (64 at most) */
void RegisterOceanUpdate(undefined4 func, MobyInstance *moby)
{
    if (g_PreDrawCount < 64) {
        g_PreDrawFuncs[g_PreDrawCount] = (MobyDrawFunc)(uintptr_t)func;
        g_PreDrawArgs[g_PreDrawCount] = moby;
        g_PreDrawCount++;
    }
}


// 0x006d7a0 (0x40 bytes)
/* adds func(arg) to the post-pre-draws, run after the shrubs (64 at most) */
void RegisterPostPreDraw(void *func, void *arg)
{
    if (g_PostPreDrawCount < 64) {
        g_PostPreDrawFuncs[g_PostPreDrawCount] = (MobyDrawFunc)func;
        g_PostPreDrawArgs[g_PostPreDrawCount] = (MobyInstance *)arg;
        g_PostPreDrawCount++;
    }
}


// 0x006d7e0 (0x40 bytes)
/* adds func(arg) to the post-draws, run after the particles (64 at most) */
void RegisterPostDraw(void *func, void *arg)
{
    if (g_PostDrawCount < 64) {
        g_PostDrawFuncs[g_PostDrawCount] = (MobyDrawFunc)func;
        g_PostDrawArgs[g_PostDrawCount] = (MobyInstance *)arg;
        g_PostDrawCount++;
    }
}


// 0x006d830 (0x290 bytes)
// inlined: FastRSqrt @0x6d984
/* Each of the g_NumLameShadows queued blob shadows (DL: LameShadows, a position whose w is the
   size and a surface normal) as a quad of effect texture TexInfo[0]: LameShadowTable's corner
   offsets (x, y) taken into the surface plane and scaled by the size, its z, w the texture
   coordinates. */
void DrawLameShadows(void)
{
    Vec4 (*shadows)[2] = (Vec4 (*)[2])&g_LameShadows;
    QuadDef quad;
    float *st = &quad.st[0][0];

    quad.tex0 = ((int *)(uintptr_t)TexInfo)[0];
    quad.tex1 = SCE_GS_SET_TEX1(0, 0, 1, 1, 1, 0, 0xff90);
    quad.clamp = SCE_GS_SET_CLAMP(1, 1, 0, 0, 0, 0);
    quad.alpha = idol_draw::PackCmd(0, 1, 0, 1, 0x80);

    for (int i = 0; i < 4; i++) {
        st[i * 2] = LameShadowTable[i].z;
        st[i * 2 + 1] = LameShadowTable[i].w;
        quad.rgba[i] = 0x40808080;
    }

    for (int shadow = 0; shadow < g_NumLameShadows; shadow++) {
        Vec4 *pos = &shadows[shadow][0];
        Vec4 *normal = &shadows[shadow][1];
        float lengthSq = normal->z * normal->z + normal->x * normal->x + normal->y * normal->y;
        float normalX = 0.0f;
        float normalY = 0.0f;
        float normalZ = 0.0f;

        if (sqrtf(lengthSq) != 0.0f) {
            /* FastRSqrt */
            float inv = 1.0f / sqrtf(lengthSq);

            normalX = normal->x * inv;
            normalY = normal->y * inv;
            normalZ = normal->z * inv;
        }

        float size = pos->w;

        for (int i = 0; i < 4; i++) {
            float offsetX = LameShadowTable[i].x;
            float offsetY = LameShadowTable[i].y;
            float along = offsetX * normalX + offsetY * normalY;

            quad.xyzw[i] = *pos;
            quad.xyzw[i].z = quad.xyzw[i].z - along * normalZ * size;
            quad.xyzw[i].x = (offsetX - along * normalX) * size + quad.xyzw[i].x;
            quad.xyzw[i].y = (offsetY - along * normalY) * size + quad.xyzw[i].y;
        }

        FastDrawQuad((undefined4 *)&quad, 0, 0, (longlong)EffectTexHeaders, 9);
    }
}

/* libgcm's cellGcmSetSurface, into pass */
static inline void EmitSetSurface(RenderingStep *pass, IdolSurface *surface)
{
    Emit(pass, CELL_GCM_METHOD(CELL_GCM_NV4097_SET_CONTEXT_DMA_COLOR_A, 1));
    Emit(pass, CELL_GCM_CONTEXT_DMA_MEMORY_FRAME_BUFFER + surface->colorLocation[0]);
    Emit(pass, CELL_GCM_METHOD(CELL_GCM_NV4097_SET_CONTEXT_DMA_COLOR_B, 1));
    Emit(pass, CELL_GCM_CONTEXT_DMA_MEMORY_FRAME_BUFFER + surface->colorLocation[1]);
    Emit(pass, CELL_GCM_METHOD(CELL_GCM_NV4097_SET_CONTEXT_DMA_COLOR_C, 2));
    Emit(pass, CELL_GCM_CONTEXT_DMA_MEMORY_FRAME_BUFFER + surface->colorLocation[2]);
    Emit(pass, CELL_GCM_CONTEXT_DMA_MEMORY_FRAME_BUFFER + surface->colorLocation[3]);
    Emit(pass, CELL_GCM_METHOD(CELL_GCM_NV4097_SET_CONTEXT_DMA_ZETA, 1));
    Emit(pass, CELL_GCM_CONTEXT_DMA_MEMORY_FRAME_BUFFER + surface->depthLocation);

    u32 logWidth = 31 - __builtin_clz(surface->width);
    u32 logHeight = 31 - __builtin_clz(surface->height);

    Emit(pass, CELL_GCM_METHOD(CELL_GCM_NV4097_SET_SURFACE_FORMAT, 6));
    Emit(pass, surface->colorFormat | surface->depthFormat << 5 | surface->type << 8 | surface->antialias << 12 | logWidth << 16 | logHeight << 24);
    Emit(pass, surface->colorPitch[0]);
    Emit(pass, surface->colorOffset[0]);
    Emit(pass, surface->depthOffset);
    Emit(pass, surface->colorOffset[1]);
    Emit(pass, surface->colorPitch[1]);
    Emit(pass, CELL_GCM_METHOD(CELL_GCM_NV4097_SET_SURFACE_PITCH_Z, 1));
    Emit(pass, surface->depthPitch);
    Emit(pass, CELL_GCM_METHOD(CELL_GCM_NV4097_SET_SURFACE_PITCH_C, 4));
    Emit(pass, surface->colorPitch[2]);
    Emit(pass, surface->colorPitch[3]);
    Emit(pass, surface->colorOffset[2]);
    Emit(pass, surface->colorOffset[3]);
    Emit(pass, CELL_GCM_METHOD(CELL_GCM_NV4097_SET_SURFACE_COLOR_TARGET, 1));
    Emit(pass, surface->colorTarget);
    Emit(pass, CELL_GCM_METHOD(CELL_GCM_NV4097_SET_WINDOW_OFFSET, 1));
    Emit(pass, surface->y << 16 | surface->x);
    Emit(pass, CELL_GCM_METHOD(CELL_GCM_NV4097_SET_SURFACE_CLIP_HORIZONTAL, 2));
    Emit(pass, surface->width << 16 | surface->x);
    Emit(pass, surface->height << 16 | surface->y);
    Emit(pass, CELL_GCM_METHOD(CELL_GCM_NV4097_SET_SHADER_WINDOW, 1));
    Emit(pass, (surface->height - ((surface->height >> 12) & 1)) | 0x1000);
}


// 0x006dad0 (0x598 bytes)
/* Flips frames more frames while the brightness at 0x8fa550 falls from (frames-1)/frames to 0,
   then sets the frame buffer up again on DepthPass, clears it to black and puts the brightness
   back to 1. In stereo each frame is flipped twice. */
void FadeToBlack(int frames)
{
    IdolDraw *idol = Idol();

    if (idol->unk1a8c != 0) {
        return;
    }

    idol_draw::Spurs_FlushAndSwapQueue(&DAT_01111700);
    FUN_004edcfc((int)(uintptr_t)&DAT_01111700);

    if (idol->stereo == 1 && (idol->unk1a6c & 1)) {
        idol->vtable->BuildAndFlipFrame(idol);
    }

    for (int i = frames - 1; i >= 0; i--) {
        float brightness = (float)i * 255.0f * (1.0f / (float)(i + 1)) * (1.0f / 255.0f);

        DAT_008fa550 = *(u32 *)&brightness;

        idol->vtable->BuildAndFlipFrame(idol);

        if (idol->stereo == 1) {
            idol->vtable->BuildAndFlipFrame(idol);
        }

        g_MainLoopFrames++;
    }

    g_MainLoopFrames++;

    idol->vtable->unk10(idol, (int)(uintptr_t)DepthPass, idol->unk04, idol->unk08);

    EmitSetSurface(DepthPass, &idol->surface);

    Emit(DepthPass, CELL_GCM_METHOD(CELL_GCM_NV4097_SET_COLOR_CLEAR_VALUE, 1));
    Emit(DepthPass, 0);
    Emit(DepthPass, CELL_GCM_METHOD(CELL_GCM_NV4097_CLEAR_SURFACE, 1));
    Emit(DepthPass, CELL_GCM_CLEAR_R | CELL_GCM_CLEAR_G | CELL_GCM_CLEAR_B | CELL_GCM_CLEAR_A);
    Emit(DepthPass, CELL_GCM_METHOD(CELL_GCM_NV4097_NO_OPERATION, 1));
    Emit(DepthPass, 0);

    float one = 1.0f;

    DAT_008fa550 = *(u32 *)&one;
}


// 0x006e068 (0x70 bytes)
void Draw_FlushAndPresent(void)
{
    IdolDraw *idol = Idol();

    idol_draw::Spurs_FlushAndSwapQueue(&DAT_01111700);
    FUN_004edcfc((int)(uintptr_t)&DAT_01111700);
    idol_draw::Gfx_Present((int *)idol, (int)(uintptr_t)&idol->presentInfo);
    FUN_004d5e48(idol->unk1a74);
}

static inline void EmitF(RenderingStep *pass, float value)
{
    Emit(pass, *(u32 *)&value);
}

/* one method with a single word */
static inline void EmitMethod(RenderingStep *pass, u32 method, u32 value)
{
    Emit(pass, CELL_GCM_METHOD(method, 1));
    Emit(pass, value);
}

/* libgcm's cellGcmSetTexture for unit 0, into pass */
static inline void EmitSetTexture0(RenderingStep *pass, IdolTexture *texture)
{
    Emit(pass, CELL_GCM_METHOD(CELL_GCM_NV4097_SET_TEXTURE_OFFSET, 2));
    Emit(pass, texture->offset);
    Emit(pass, (texture->location + 1) | texture->cubemap << 2 | CELL_GCM_TEXTURE_BORDER_COLOR << 3 | texture->dimension << 4 | texture->format << 8 | texture->mipmap << 16);
    EmitMethod(pass, CELL_GCM_NV4097_SET_TEXTURE_IMAGE_RECT, texture->width << 16 | texture->height);
    EmitMethod(pass, CELL_GCM_NV4097_SET_TEXTURE_CONTROL3, texture->pitch | texture->depth << 20);
    EmitMethod(pass, CELL_GCM_NV4097_SET_TEXTURE_CONTROL1, texture->remap);
}


// 0x006e0d8 (0x644 bytes)
/* Copies the renderer's off-screen target over the whole ForwardPass viewport: depth, stencil
   writes, blending and alpha test off, the target as texture 0 with the default programs, one
   quad from (-1, 1) to (1, -1); depth and blending on again after. */
void DrawRenderTargetToScreen(void)
{
    IdolDraw *idol = Idol();
    RenderingStep *pass = ForwardPass;

    EmitMethod(pass, CELL_GCM_NV4097_SET_DEPTH_TEST_ENABLE, 0);
    EmitMethod(pass, CELL_GCM_NV4097_SET_DEPTH_MASK, 0);
    EmitMethod(pass, CELL_GCM_NV4097_SET_STENCIL_MASK, 0);
    EmitMethod(pass, CELL_GCM_NV4097_SET_BLEND_ENABLE, 0);
    EmitMethod(pass, CELL_GCM_NV4097_SET_ALPHA_TEST_ENABLE, 0);

    EmitSetTexture0(pass, &idol->renderTarget);
    EmitMethod(pass, CELL_GCM_NV4097_SET_TEXTURE_CONTROL0, 0x80000000);
    EmitMethod(pass, CELL_GCM_NV4097_SET_TEXTURE_ADDRESS, 0x40030303);
    EmitMethod(pass, CELL_GCM_NV4097_SET_TEXTURE_FILTER, 0x2022000);

    idol_draw::BindVertexProgram((uintptr_t)idol, (int)(uintptr_t)pass, 0);
    idol_draw::BindFragmentProgram((uintptr_t)idol, (int)(uintptr_t)pass, 0);

    /* vertex arrays 0..3 off: float, size 0, offset 0 */
    for (int i = 0; i < 4; i++) {
        EmitMethod(pass, CELL_GCM_NV4097_SET_VERTEX_DATA_ARRAY_FORMAT + i * 4, CELL_GCM_VERTEX_F);
        EmitMethod(pass, CELL_GCM_NV4097_SET_VERTEX_DATA_ARRAY_OFFSET + i * 4, 0);
    }

    /* (three words to method 0x1714, all zero) */
    Emit(pass, 0x400c1714);
    Emit(pass, 0);
    Emit(pass, 0);
    Emit(pass, 0);
    EmitMethod(pass, CELL_GCM_NV4097_SET_BEGIN_END, CELL_GCM_PRIMITIVE_QUADS);

    static const float corners[4][4] = {
        /* u, v, x, y */
        { 0.0f, 0.0f, -1.0f, 1.0f },
        { 0.0f, 1.0f, -1.0f, -1.0f },
        { 1.0f, 1.0f, 1.0f, -1.0f },
        { 1.0f, 0.0f, 1.0f, 1.0f },
    };

    for (int i = 0; i < 4; i++) {
        Emit(pass, CELL_GCM_METHOD(CELL_GCM_NV4097_SET_VERTEX_DATA3F_M + 1 * 16, 3));
        EmitF(pass, corners[i][0]);
        EmitF(pass, corners[i][1]);
        EmitF(pass, 1.0f);
        Emit(pass, CELL_GCM_METHOD(CELL_GCM_NV4097_SET_VERTEX_DATA2F_M, 2));
        EmitF(pass, corners[i][2]);
        EmitF(pass, corners[i][3]);
    }

    EmitMethod(pass, CELL_GCM_NV4097_SET_BEGIN_END, 0);

    EmitMethod(pass, CELL_GCM_NV4097_SET_DEPTH_TEST_ENABLE, 1);
    EmitMethod(pass, CELL_GCM_NV4097_SET_DEPTH_MASK, 1);
    EmitMethod(pass, CELL_GCM_NV4097_SET_BLEND_ENABLE, 1);
}


// 0x006e71c (0x4 bytes)
void STUB_0006e71c(...)
{
}


// 0x006e740 (0x598 bytes)
/* Texels (0, 0, tw, th) of effect texture tex (flipped by flipU, flipV) as a w by h quad at
   (x, y) turned by angle about the pivot (pivotX, pivotY), fractions of the quad's size. With
   perEye set each vertex position is preceded by FUN_004e3178 (presumably the stereo offset).
   unused is never read. */
void Sprite_DrawRotated(float x, float y, float w, float h, float angle, float pivotX, float pivotY, int tw, int th, int tex, int unused, u32 color, int flipU, int flipV, int perEye)
{
    float sinA = FastSinInline(angle);
    float cosA = FastCosInline(angle);
    float hSin = h * sinA;
    float wSin = w * sinA;
    float hCos = h * cosA;
    float wCos = w * cosA;

    float topX = (1.0f - pivotY) * hSin + x;
    float topY = (1.0f - pivotY) * hCos + y;
    float bottomX = x - hSin * pivotY;
    float bottomY = y - hCos * pivotY;

    float pos[4][2] = {
        { topX - (1.0f - pivotX) * wCos, topY + wSin * (1.0f - pivotX) },
        { bottomX - (1.0f - pivotX) * wCos, bottomY + wSin * (1.0f - pivotX) },
        { pivotX * wCos + bottomX, bottomY - wSin * pivotX },
        { pivotX * wCos + topX, topY - wSin * pivotX },
    };

    int u0 = (u8)flipU ? tw * 2 : 0;
    int u1 = (u8)flipU ? 0 : tw * 2;
    int v0 = (u8)flipV ? th * 2 : 0;
    int v1 = (u8)flipV ? 0 : th * 2;
    int uv[4][2] = { { u0, v0 }, { u0, v1 }, { u1, v1 }, { u1, v0 } };

    HudBindEffectTex(tex);
    idol_draw::ResetPassState(HUD_Pass);

    Emit(HUD_Pass, HUD_SET_COLOR4UB);
    Emit(HUD_Pass, color);
    /* (three words to method 0x1714, all zero) */
    Emit(HUD_Pass, 0x400c1714);
    Emit(HUD_Pass, 0);
    Emit(HUD_Pass, 0);
    Emit(HUD_Pass, 0);
    Emit(HUD_Pass, HUD_SET_BEGIN_END);
    Emit(HUD_Pass, CELL_GCM_PRIMITIVE_QUADS);

    for (int i = 0; i < 4; i++) {
        Emit(HUD_Pass, HUD_SET_TEXCOORD2S);
        Emit(HUD_Pass, (uv[i][1] & 0xffff) << 16 | (uv[i][0] & 0xffff));

        if ((u8)perEye != 0) {
            FUN_004e3178(g_pIdolDraw);
        }

        Emit(HUD_Pass, HUD_SET_POSITION2F);
        EmitF(HUD_Pass, pos[i][0]);
        EmitF(HUD_Pass, pos[i][1]);
    }

    HudEnd();
}

/* a PS2 colour channel (0x80 = full) to 0..255: doubled, clamped, rounded */
static inline u32 Ps2Channel(u32 value)
{
    float doubled = (float)value * 2.0f;

    if (doubled > 255.0f) {
        doubled = 255.0f;
    }

    doubled += 0.5f;

    if (doubled > 255.0f) {
        doubled = 255.0f;
    }

    return (int)doubled;
}


// 0x006ecf8 (0x3a8 bytes)
/* DL's DrawScreenQuad: a quad of effect texture tex (clamped when clamp is set) on the HUD pass
   from PS2 GS data: xy in 12.4 fixed point with the SCREEN_PROJECTION_MAP offset, uv in 1/8
   texels (u low, v high), PS2 colours; the vertices go in the order 0, 1, 3, 2 */
void DrawScreenQuad(u64 *xy, int *uv, u32 *rgba, int tex, int clamp)
{
    static const int order[4] = { 0, 1, 3, 2 };

    idol_draw::BindTexture(HUD_Pass, 0, (u8 *)(uintptr_t)EffectTexHeaders + tex * 0x24, clamp != 0 ? 5 : 0);
    idol_draw::ResetPassState(HUD_Pass);

    /* (three words to method 0x1714, all zero) */
    Emit(HUD_Pass, 0x400c1714);
    Emit(HUD_Pass, 0);
    Emit(HUD_Pass, 0);
    Emit(HUD_Pass, 0);
    Emit(HUD_Pass, HUD_SET_BEGIN_END);
    Emit(HUD_Pass, CELL_GCM_PRIMITIVE_QUADS);

    for (int i = 0; i < 4; i++) {
        int vertex = order[i];
        u32 color = rgba[vertex];

        Emit(HUD_Pass, HUD_SET_COLOR4UB);
        Emit(HUD_Pass, Ps2Channel(color & 0xff) | Ps2Channel((color >> 8) & 0xff) << 8 | Ps2Channel((color >> 16) & 0xff) << 16 | Ps2Channel(color >> 24) << 24);

        u32 texel = uv[vertex];
        int u = (texel >> 3) & 0x1fff;
        int v = ((texel >> 16) >> 3) & 0x1fff;

        Emit(HUD_Pass, HUD_SET_TEXCOORD2S);
        Emit(HUD_Pass, v << 16 | u);

        u64 pos = xy[vertex];
        int x = (int)((float)(int)((pos & 0xffff) - SCREEN_PROJECTION_MAP_X) * 0.0625f);
        int y = (int)((float)(int)(((pos >> 16) & 0xffff) - SCREEN_PROJECTION_MAP_Y) * 0.0625f);

        Emit(HUD_Pass, HUD_SET_POSITION2S);
        Emit(HUD_Pass, (y & 0xffff) << 16 | (x & 0xffff));
    }

    HudEnd();
}


// 0x006f0a0 (0x710 bytes)
/* a box from (left, top) to (right, bot): filled with color's alpha over near-black (4), then
   edge strips in color around it; nine inlined DrawRectOverlay calls (some strips run
   bottom-up, as the original's coordinates have them) */
void DrawTextBox(int top, int bot, int left, int right, u32 color)
{
    DrawRectOverlay(top, bot, left, right, (color & 0xff000000) | 4);

    /* top edge */
    DrawRectOverlay(top - 1, top + 1, left + 3, right + 5, color);
    DrawRectOverlay(top - 3, top - 5, left - 1, right - 3, color);

    /* left edge */
    DrawRectOverlay(top - 5, bot - 3, left - 1, left + 1, color);
    DrawRectOverlay(top + 3, bot + 1, left - 3, left - 5, color);

    /* bottom edge */
    DrawRectOverlay(bot - 1, bot + 1, left - 3, right - 3, color);
    DrawRectOverlay(bot + 3, bot + 5, left + 3, right + 1, color);

    /* right edge */
    DrawRectOverlay(top + 3, bot + 3, right - 1, right + 1, color);
    DrawRectOverlay(top + 1, bot - 3, right + 3, right + 5, color);
}


// 0x006f7b0 (0xb0 bytes)
/* width of s in the small font */
int FontLenSmall(char *s, int len)
{
    if (g_JapaneseMode) {
        return FontLenWithTable(s, len, &JapaneseGlyphs);
    }

    return FontLenWithTableNoKern(s, len, &Glyphs);
}


// 0x006f860 (0xb0 bytes)
/* width of s in the large font */
int FontLenLarge(char *s, int len)
{
    if (g_JapaneseMode) {
        return FontLenWithTable(s, len, &JapaneseGlyphs);
    }

    return FontLenWithTableNoKern(s, len, &LargeWesternGlyphs);
}


// 0x006f918 (0xe4 bytes)
/* FontLenWithTable at scale, summed in floats */
int FontLenScaledWithTable(float scale, const char *s, int len, void *glyphs)
{
    const u8 *str = (const u8 *)s;
    const FontGlyph *table = (const FontGlyph *)glyphs;
    float width = 0.0f;

    for (int i = 0; i != len; i++) {
        u8 ch = str[i];

        if (ch == 0) {
            break;
        }

        int advance = table[ch].width;

        if (advance == 0) {
            continue;
        }

        if (ch >= 0xbd && ch <= 0xbe) {
            u8 prev = str[i - 1];

            advance = (table[prev + 0x80].width - table[prev].width) + (ch == 0xbe) + 4;
        }

        width = (float)advance * scale + width;
    }

    return (int)width;
}

/* FontLenScaledWithTableNoKern for a Western table, in Japanese mode FontLenScaledWithTable */
static inline int FontLenScaledIn(float scale, const char *s, int len, void *western)
{
    if (g_JapaneseMode) {
        return FontLenScaledWithTable(scale, s, len, &JapaneseGlyphs);
    }

    return FontLenScaledWithTableNoKern(scale, (const u8 *)s, len, (const FontGlyph *)western);
}


// 0x006fa00 (0xc4 bytes)
int FontLenScaled(float scale, const char *s, int len)
{
    return FontLenScaledIn(scale, s, len, &MediumWesternGlyphs);
}


// 0x006fac8 (0xc4 bytes)
int FontLenScaledSmall(float scale, const char *s, int len)
{
    return FontLenScaledIn(scale, s, len, &Glyphs);
}


// 0x006fb90 (0xc4 bytes)
int FontLenScaledLarge(float scale, const char *s, int len)
{
    return FontLenScaledIn(scale, s, len, &LargeWesternGlyphs);
}


// 0x006fc54 (0xa8 bytes)
/* str at (x, y) in the small font (effect texture 2) */
void FontPrintSmallLeft(int x, int y, u32 color, const char *str, int len)
{
    if (g_JapaneseMode) {
        FontPrintJapanese(x, y, color, str, len, GetEffectTex(1), &JapaneseGlyphs);
    }
    else {
        FontPrint(x, y, color, str, len, GetEffectTex(2), &Glyphs);
    }
}


// 0x006fcfc (0xa8 bytes)
/* str at (x, y) in the large font (effect texture 3) */
void FontPrintLarge(int x, int y, u32 color, const char *str, int len)
{
    if (g_JapaneseMode) {
        FontPrintJapanese(x, y, color, str, len, GetEffectTex(1), &JapaneseGlyphs);
    }
    else {
        FontPrint(x, y, color, str, len, GetEffectTex(3), &LargeWesternGlyphs);
    }
}

/* FontPrintScaledWestern with Western table western on effect texture tex, in Japanese mode
   FontPrintScaledJapanese */
static inline void FontPrintScaledIn(float x, float y, float scale, u32 color, const char *str, int len, int tex, void *western)
{
    if (g_JapaneseMode) {
        FontPrintScaledJapanese(x, y, scale, color, (const u8 *)str, len, GetEffectTex(1), (const FontGlyph *)&JapaneseGlyphs);
    }
    else {
        FontPrintScaledWestern(x, y, scale, color, (const u8 *)str, len, GetEffectTex(tex), (const FontGlyph *)western);
    }
}


// 0x006fda4 (0xa0 bytes)
void FontPrintScaledMedium(float x, float y, float scale, u32 color, const char *str, int len)
{
    FontPrintScaledIn(x, y, scale, color, str, len, 1, &MediumWesternGlyphs);
}


// 0x006fe44 (0xa0 bytes)
void FontPrintScaledSmall(float x, float y, float scale, u32 color, const char *str, int len)
{
    FontPrintScaledIn(x, y, scale, color, str, len, 2, &Glyphs);
}


// 0x006fee4 (0xa0 bytes)
void FontPrintScaledLarge(float x, float y, float scale, u32 color, const char *str, int len)
{
    FontPrintScaledIn(x, y, scale, color, str, len, 3, &LargeWesternGlyphs);
}


// 0x006ff88 (0x1a8 bytes)
/* str in the medium font at scale, ending at x */
void FontPrintRightWithScale(float scale, int x, int y, u32 color, const char *str, int len)
{
    int width = FontLenScaled(scale, str, len);

    FontPrintScaledMedium((float)(x - width), (float)y, scale, color, str, len);
}


// 0x0070130 (0x14c bytes)
/* str in the medium font ending at x */
void FontPrintMediumRight(int x, int y, u32 color, char *str, int len)
{
    FontPrintMediumLeft(x - FontLen(str, len), y, color, str, len);
}


// 0x007027c (0x14c bytes)
/* str in the small font ending at x */
void FontPrintSmallRight(int x, int y, u32 color, char *str, int len)
{
    FontPrintSmallLeft(x - FontLenSmall(str, len), y, color, str, len);
}


// 0x00703c8 (0x14c bytes)
/* str in the large font ending at x */
void FontPrintLargeRight(int x, int y, u32 color, char *str, int len)
{
    FontPrintLarge(x - FontLenLarge(str, len), y, color, str, len);
}


// 0x0070514 (0x164 bytes)
/* str in the medium font centred on x; returns its left edge */
int FontPrintMediumCenter(int x, int y, u32 color, const char *str, int len)
{
    x -= FontLen((char *)str, len) >> 1;

    FontPrintMediumLeft(x, y, color, str, len);

    return x;
}


// 0x0070680 (0x1b4 bytes)
/* str in the medium font at scale centred on x; returns its left edge */
int FontPrintCenterScaled(float scale, int x, int y, u32 color, const char *str, int len)
{
    x -= FontLenScaled(scale, str, len) >> 1;

    FontPrintScaledMedium((float)x, (float)y, scale, color, str, len);

    return x;
}


// 0x0070834 (0x164 bytes)
/* str in the small font centred on x; returns its left edge */
int FontPrintSmallCenter(int x, int y, u32 color, char *str, int len)
{
    x -= FontLenSmall(str, len) >> 1;

    FontPrintSmallLeft(x, y, color, str, len);

    return x;
}


// 0x0070998 (0x164 bytes)
/* str in the large font centred on x; returns its left edge */
int FontPrintLargeCenter(int x, int y, u32 color, char *str, int len)
{
    x -= FontLenLarge(str, len) >> 1;

    FontPrintLarge(x, y, color, str, len);

    return x;
}


// 0x0070b00 (0x1ac bytes)
void FontPrintCenterScaledMedium(float scale, int x, int y, u32 color, const char *str, int len)
{
    x -= FontLenScaled(scale, str, len) >> 1;

    FontPrintScaledMedium((float)x, (float)y, scale, color, str, len);
}


// 0x0070cb0 (0x1ac bytes)
void FontPrintCenterScaledSmall(float scale, int x, int y, u32 color, const char *str, int len)
{
    x -= FontLenScaledSmall(scale, str, len) >> 1;

    FontPrintScaledSmall((float)x, (float)y, scale, color, str, len);
}


// 0x0070e60 (0x1ac bytes)
void FontPrintCenterScaledLarge(float scale, int x, int y, u32 color, const char *str, int len)
{
    x -= FontLenScaledLarge(scale, str, len) >> 1;

    FontPrintScaledLarge((float)x, (float)y, scale, color, str, len);
}


// 0x007100c (0xa8 bytes)
/* text in win at scale with the small font (Glyphs on effect texture 2) */
void FontPrintOpt(float scale, FontWindow *win, u32 color, const char *str, int len)
{
    if (g_JapaneseMode) {
        FontPrintOptJapanese(scale, win, color, (const u8 *)str, len, GetEffectTex(1), (const FontGlyph *)&JapaneseGlyphs);
    }
    else {
        FontPrintOptWestern(scale, win, color, str, len, GetEffectTex(2), &Glyphs);
    }
}


// 0x00710b8 (0xb4 bytes)
/* text in win at scale 1 with the large font (LargeWesternGlyphs on effect texture 3) */
void FontPrintOptLarge(FontWindow *win, u32 color, const char *str, int len)
{
    if (g_JapaneseMode) {
        FontPrintOptJapanese(1.0f, win, color, (const u8 *)str, len, GetEffectTex(1), (const FontGlyph *)&JapaneseGlyphs);
    }
    else {
        FontPrintOptWestern(1.0f, win, color, str, len, GetEffectTex(3), &LargeWesternGlyphs);
    }
}


// 0x007116c (0x4 bytes)
void STUB_0007116c(...)
{
}


// 0x0071170 (0x4 bytes)
void STUB_00071170(...)
{
}


// 0x0071180 (0x940 bytes)
void SetScreenResolution
               (double param_1,uint param_2,uint param_3,undefined8 param_4,undefined8 param_5,
               RsxCmd param_6)

{
  longlong lVar1;
  int iVar2;
  RsxCmd RVar3;
  RsxCmd RVar4;
  uint uVar5;
  undefined4 uVar6;
  ulonglong *puVar7;
  RsxCmd RVar8;
  int iVar9;
  RenderingStep *pRVar10;
  RenderingStep *pRVar11;
  int iVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  RsxCmd RVar15;
  longlong lVar16;
  RsxCmd *pRVar17;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  RsxCmd *pRVar18;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar19;
  longlong lVar20;
  double dVar21;
  double dVar22;
  ulonglong in_f31;
  GPiece<16> auVar23;
  GPiece<16> auVar24;
  GPiece<16> auVar25;
  GPiece<16> auVar26;
  GPiece<16> auVar27;
  
  uVar14 = ZEXT48(&stack0x00000000);
  lVar1 = uVar14 - 0x140;
  puVar7 = (ulonglong *)lVar1;
  *puVar7 = uVar14;
  puVar7[0x2a] = in_LR;
  puVar7[0x27] = in_f31;
  *(uint *)(puVar7 + 0x18) = param_3;
  *(uint *)((int)puVar7 + 0xc4) = param_3;
  puVar7[0x26] = unaff_r31;
  *(uint *)(puVar7 + 0x19) = param_3;
  puVar7[0x25] = unaff_r30;
  *(uint *)((int)puVar7 + 0xcc) = param_3;
  puVar7[0x22] = unaff_r27;
  RVar4 = 1 << (param_3 & 0x3f);
  puVar7[0x24] = unaff_r29;
  auVar26 = ZEXT416(1);
  auVar26 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
  puVar7[0x21] = unaff_r26;
  puVar7[0x20] = unaff_r25;
  uVar5 = 1 << (param_2 & 0x3f);
  puVar7[0x23] = unaff_r28;
  auVar27 = *(undefined1 (*) [16])(puVar7 + 0x18);
  g_ScreenHalfHeight = (int)RVar4 >> 1;
  *(uint *)(puVar7 + 0x18) = param_2;
  uVar13 = 0xc0;
  *(uint *)((int)puVar7 + 0xc4) = param_2;
  *(uint *)(puVar7 + 0x19) = param_2;
  *(uint *)((int)puVar7 + 0xcc) = param_2;
  iVar9 = g_ScreenHalfHeight * 0x10;
  auVar27 = vectorShiftLeftIntegerWord(auVar26,auVar27);
  SCREEN_PROJECTION_MAP_Y = (undefined4)((0x800U - (longlong)g_ScreenHalfHeight & 0xffffffff) << 4);
  g_ScreenHalfWidth = (int)uVar5 >> 1;
  g_ViewContext.fovScale = 1.0;
  auVar26 = vectorShiftLeftIntegerWord(auVar26,*(undefined1 (*) [16])(puVar7 + 0x18));
  puVar7[0x1f] = unaff_r24;
  SCREEN_PROJECTION_MAP_X = (undefined4)((0x800U - (longlong)g_ScreenHalfWidth & 0xffffffff) << 4);
  DAT_00966b18 = g_ScreenHalfWidth * 0x10 + 0x8000;
  g_ScreenWidth = uVar5;
  g_ScreenHeight = RVar4;
  puVar7[0x1e] = unaff_r23;
  DAT_00966b1c = iVar9 + 0x8000;
  g_ViewContext.nearClip = 32.0;
  g_ViewContext.farClip = 524288.0;
  g_ViewContext.xratio = (float)param_1;
  dVar21 = (double)FastIntToDouble();
  dVar22 = 0.5;
  g_ViewContext.xpix = (float)(dVar21 * 0.5);
  dVar21 = (double)FastIntToDouble(RVar4);
  g_ViewContext.ypix = (float)(dVar21 * dVar22);
  g_ViewContext.fogNearDist = 0.0;
  g_ViewContext.xclip = g_ViewContext.xpix * 4.0;
  g_ViewContext.yclip = g_ViewContext.ypix * 4.0;
  g_ViewContext.fogFarDist = 524288.0;
  g_ViewContext.fogNearIntensity = 255.0;
  g_ViewContext.fogFarIntensity = 0.0;
  UpdateViewContext();
  UploadViewMatricesToPasses();
  iVar12 = g_pIdolDraw;
  DAT_00966b8c = (undefined2)uVar5;
  DAT_00966b8e = (undefined2)RVar4;
  lVar19 = 3;
  *(int *)(g_pIdolDraw + 0x22d8) = *(int *)(g_pIdolDraw + 0x22d8) + 1;
  *(undefined4 *)(puVar7 + 0x10) = 0;
  *(undefined4 *)((int)puVar7 + 0x84) = 0;
  *(undefined4 *)((int)puVar7 + 0x8c) = 0;
  *(undefined4 *)(puVar7 + 0x12) = 0;
  *(undefined4 *)((int)puVar7 + 0x94) = 0;
  *(undefined4 *)((int)puVar7 + 0x9c) = 0;
  *(undefined4 *)(puVar7 + 0x14) = 0;
  *(undefined4 *)((int)puVar7 + 0xa4) = 0;
  *(undefined4 *)(puVar7 + 0x15) = 0;
  *(undefined4 *)((int)puVar7 + 0xac) = 0;
  *(undefined4 *)(puVar7 + 0x16) = 0;
  *(undefined4 *)((int)puVar7 + 0xb4) = 0;
  *(undefined4 *)(puVar7 + 0x17) = 0;
  *(undefined1 *)((int)puVar7 + 0x82) = 8;
  *(undefined1 *)((int)puVar7 + 0x83) = 1;
  *(undefined1 *)((int)puVar7 + 0x84) = 0;
  iVar9 = *(int *)(iVar12 + 0x2288);
  iVar2 = *(int *)(iVar12 + 0x4ac);
  RVar15 = (RsxCmd)(((ulonglong)uVar5 & 0x3fffffff) << 2);
  *(RsxCmd *)(puVar7 + 0x13) = RVar15;
  *(int *)(puVar7 + 0x11) = iVar9 - iVar2;
  lVar16 = lVar1;
  lVar20 = lVar1;
  do {
    *(undefined1 *)((int)lVar20 + 0x85) = 0;
    *(undefined4 *)((int)lVar16 + 0x8c) = 0;
    *(undefined4 *)((int)lVar16 + 0x9c) = 0x40;
    pRVar10 = HUD_Pass;
    lVar19 = lVar19 + -1;
    lVar16 = lVar16 + 4;
    lVar20 = lVar20 + 1;
  } while (lVar19 != 0);
  RVar3 = *(RsxCmd *)(puVar7 + 0x11);
  DAT_0095ee24 = 0x30303;
  DAT_0095ee20 = 0x1a529;
  DAT_0095ee38 = RVar15 | NV4097_SET_OBJECT_x4;
  DAT_0095ee28 = 0x80010000;
  RVar8 = uVar5 << 0x10;
  DAT_0095ee2c = 0xaae4;
  DAT_0095ee3c = 0;
  DAT_0095ee34 = RVar8 | RVar4;
  DAT_0095ee30 = 0x2062000;
  DAT_0095ee3d = 0xff;
  DAT_0095ee1c = RVar3;
  *HUD_Pass->command = NV4097_SET_CONTEXT_DMA_COLOR_A_x1;
  pRVar10->command[1] = *(byte *)((int)puVar7 + 0x84) + 0xfeed0000;
  pRVar18 = pRVar10->command;
  pRVar10->command = pRVar18 + 2;
  pRVar18[2] = NV4097_SET_CONTEXT_DMA_COLOR_B_x1;
  pRVar10->command[1] = *(byte *)((int)puVar7 + 0x85) + 0xfeed0000;
  pRVar18 = pRVar10->command;
  pRVar10->command = pRVar18 + 2;
  pRVar18[2] = NV4097_SET_CONTEXT_DMA_COLOR_C_x2;
  pRVar10->command[1] = *(byte *)((int)puVar7 + 0x86) + 0xfeed0000;
  pRVar10->command[2] = *(byte *)((int)puVar7 + 0x87) + 0xfeed0000;
  pRVar18 = pRVar10->command;
  pRVar10->command = pRVar18 + 3;
  pRVar18[3] = NV4097_SET_CONTEXT_DMA_ZETA_x1;
  pRVar10->command[1] = 0xfeed0000;
  pRVar18 = pRVar10->command;
  pRVar10->command = pRVar18 + 2;
  pRVar18[2] = (RsxCmd)&DAT_00180208;
  pRVar10->command[1] =
       (RsxCmd)((0x1fU - LZCOUNT(uVar5 & 0xffff) & 0xffffffff) << 0x10) |
       *(byte *)((int)puVar7 + 0x82) | 0x140 |
       (RsxCmd)((0x1fU - LZCOUNT(RVar4 & 0xffff) & 0xffffffff) << 0x18);
  pRVar10->command[2] = *(RsxCmd *)(puVar7 + 0x13);
  pRVar10->command[3] = RVar3;
  pRVar10->command[4] = (iVar9 + RVar4 * uVar5 * 4) - iVar2;
  pRVar10->command[5] = *(RsxCmd *)((int)puVar7 + 0x8c);
  pRVar10->command[6] = *(RsxCmd *)((int)puVar7 + 0x9c);
  pRVar18 = pRVar10->command;
  pRVar10->command = pRVar18 + 7;
  pRVar18[7] = NV4097_SET_SURFACE_PITCH_Z_x1;
  pRVar10->command[1] = RVar15;
  pRVar18 = pRVar10->command;
  pRVar10->command = pRVar18 + 2;
  pRVar18[2] = NV4097_SET_SURFACE_PITCH_C_x4;
  pRVar10->command[1] = *(RsxCmd *)(puVar7 + 0x14);
  pRVar10->command[2] = *(RsxCmd *)((int)puVar7 + 0xa4);
  pRVar10->command[3] = *(RsxCmd *)(puVar7 + 0x12);
  pRVar10->command[4] = *(RsxCmd *)((int)puVar7 + 0x94);
  pRVar18 = pRVar10->command;
  pRVar10->command = pRVar18 + 5;
  pRVar18[5] = NV4097_SET_SURFACE_COLOR_TARGET_x1;
  pRVar10->command[1] = (uint)*(byte *)((int)puVar7 + 0x83);
  pRVar18 = pRVar10->command;
  pRVar10->command = pRVar18 + 2;
  pRVar18[2] = NV4097_SET_WINDOW_OFFSET_x1;
  pRVar10->command[1] = 0;
  pRVar18 = pRVar10->command;
  pRVar10->command = pRVar18 + 2;
  pRVar18[2] = NV4097_SET_SURFACE_CLIP_HORIZONTAL_x2;
  pRVar10->command[1] = uVar5 << 0x10;
  pRVar10->command[2] = RVar4 << 0x10;
  pRVar18 = pRVar10->command;
  pRVar10->command = pRVar18 + 3;
  pRVar18[3] = NV4097_SET_SHADER_WINDOW_x1;
  pRVar10->command[1] = (RVar4 & 0xffff) - (RVar4 >> 0xc & 1) | 0x1000;
  pRVar10->command = pRVar10->command + 2;
  pRVar10 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_COLOR_CLEAR_VALUE_x1;
  pRVar10->command[1] = param_6;
  pRVar10->command = pRVar10->command + 2;
  pRVar10 = HUD_Pass;
  auVar23 = vectorConvertFromUnsignedFixedPointWord(auVar26,0);
  auVar26 = ZEXT416(0xffffffff);
  auVar24 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
  auVar25 = vectorConvertFromUnsignedFixedPointWord(auVar27,0);
  *HUD_Pass->command = NV4097_SET_ZSTENCIL_CLEAR_VALUE_x1;
  pRVar10->command[1] = 0xffffff00;
  pRVar10->command = pRVar10->command + 2;
  pRVar10 = HUD_Pass;
  auVar26 = ZEXT416(0xffffffff);
  auVar26 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
  auVar27 = vectorShiftLeftIntegerWord(auVar24,auVar24);
  auVar24 = vectorShiftLeftIntegerWord(auVar26,auVar26);
  *HUD_Pass->command = NV4097_SET_DEPTH_MASK_x1;
  pRVar10->command[1] = 1;
  pRVar10->command = pRVar10->command + 2;
  pRVar10 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_DEPTH_TEST_ENABLE_x1;
  pRVar10->command[1] = 1;
  pRVar10->command = pRVar10->command + 2;
  pRVar10 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_BLEND_ENABLE_x1;
  pRVar10->command[1] = 1;
  pRVar10->command = pRVar10->command + 2;
  pRVar10 = HUD_Pass;
  *HUD_Pass->command = NV4097_INVALIDATE_L2_x1;
  pRVar10->command[1] = 1;
  pRVar10->command = pRVar10->command + 2;
  auVar26 = loadVectorLeftIndexed(uVar13,0x71174);
  auVar26 = auVar26 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar26 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
  auVar23 = vectorMultiplyAddFloatingPoint(auVar23,auVar26,auVar27);
  auVar27 = vectorMultiplyAddFloatingPoint(auVar25,auVar26,auVar24);
  auVar26 = ZEXT416(0xffffffff);
  auVar26 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
  auVar24 = vectorShiftLeftIntegerWord(auVar26,auVar26);
  auVar26 = auVar23 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar23 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
  auVar26 = auVar27 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar27 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
  uVar6 = storeVectorElementWordIndexed(auVar23,0x70,lVar1);
  *(undefined4 *)(puVar7 + 0xe) = uVar6;
  uVar6 = storeVectorElementWordIndexed(auVar27,0x74,lVar1);
  *(undefined4 *)((int)puVar7 + 0x74) = uVar6;
  uVar6 = storeVectorElementWordIndexed(auVar23,0x78,lVar1);
  *(undefined4 *)(puVar7 + 0xf) = uVar6;
  pRVar10 = HUD_Pass;
  auVar26 = loadVectorLeftIndexed(8,0x71174);
  auVar26 = auVar26 >> 0x60 & (GPiece<16>)0xffffffff;
  lVar20 = 2;
  auVar26 = vectorMultiplyAddFloatingPoint
                      (auVar25,auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60,auVar24
                      );
  lVar16 = uVar14 - 0xd0;
  auVar26 = auVar26 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar26 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
  uVar6 = storeVectorElementWordIndexed(auVar26,0x7c,lVar1);
  *(undefined4 *)((int)puVar7 + 0x7c) = uVar6;
  *pRVar10->command = NV4097_SET_TRANSFORM_CONSTANT_LOAD_x5;
  pRVar10->command[1] = 0x12;
  pRVar18 = pRVar10->command + 2;
  pRVar10->command = pRVar18;
  do {
    pRVar17 = (RsxCmd *)lVar16;
    *pRVar18 = *pRVar17;
    pRVar18 = pRVar10->command;
    pRVar10->command = pRVar18 + 1;
    lVar16 = lVar16 + 8;
    pRVar18[1] = pRVar17[1];
    pRVar18 = pRVar10->command + 1;
    pRVar10->command = pRVar18;
    pRVar11 = HUD_Pass;
    lVar20 = lVar20 + -1;
  } while (lVar20 != 0);
  *HUD_Pass->command = (RsxCmd)&DAT_00080a00;
  pRVar11->command[1] = RVar8;
  pRVar11->command[2] = RVar4 << 0x10;
  pRVar18 = pRVar11->command;
  pRVar11->command = pRVar18 + 3;
  pRVar18[3] = NV4097_SET_CLIP_MIN_x2;
  pRVar11->command[1] = 0;
  pRVar11->command[2] = 0x3f800000;
  pRVar18 = pRVar11->command;
  pRVar11->command = pRVar18 + 3;
  pRVar18[3] = NV4097_SET_VIEWPORT_OFFSET_x8;
  uVar6 = storeVectorElementWordIndexed(auVar23,4,ZEXT48(pRVar11->command));
  *(undefined4 *)((uint)(pRVar11->command + 1) & 0xfffffffc) = uVar6;
  uVar6 = storeVectorElementWordIndexed(auVar27,8,ZEXT48(pRVar11->command));
  *(undefined4 *)((uint)(pRVar11->command + 2) & 0xfffffffc) = uVar6;
  pRVar11->command[3] = 0x3f000000;
  pRVar11->command[4] = 0;
  uVar6 = storeVectorElementWordIndexed(auVar23,0x14,ZEXT48(pRVar11->command));
  *(undefined4 *)((uint)(pRVar11->command + 5) & 0xfffffffc) = uVar6;
  uVar6 = storeVectorElementWordIndexed(auVar26,0x18,ZEXT48(pRVar11->command));
  *(undefined4 *)((uint)(pRVar11->command + 6) & 0xfffffffc) = uVar6;
  pRVar11->command[7] = 0x3f000000;
  pRVar11->command[8] = 0;
  pRVar18 = pRVar11->command;
  pRVar11->command = pRVar18 + 9;
  pRVar18[9] = NV4097_SET_VIEWPORT_OFFSET_x8;
  uVar6 = storeVectorElementWordIndexed(auVar23,4,ZEXT48(pRVar11->command));
  *(undefined4 *)((uint)(pRVar11->command + 1) & 0xfffffffc) = uVar6;
  uVar6 = storeVectorElementWordIndexed(auVar27,8,ZEXT48(pRVar11->command));
  *(undefined4 *)((uint)(pRVar11->command + 2) & 0xfffffffc) = uVar6;
  pRVar11->command[3] = 0x3f000000;
  pRVar11->command[4] = 0;
  uVar6 = storeVectorElementWordIndexed(auVar23,0x14,ZEXT48(pRVar11->command));
  *(undefined4 *)((uint)(pRVar11->command + 5) & 0xfffffffc) = uVar6;
  uVar6 = storeVectorElementWordIndexed(auVar26,0x18,ZEXT48(pRVar11->command));
  *(undefined4 *)((uint)(pRVar11->command + 6) & 0xfffffffc) = uVar6;
  pRVar11->command[7] = 0x3f000000;
  pRVar11->command[8] = 0;
  pRVar11->command = pRVar11->command + 9;
  pRVar10 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_SCISSOR_HORIZONTAL_x2;
  pRVar10->command[1] = RVar8;
  pRVar10->command[2] = RVar4 << 0x10;
  pRVar10->command = pRVar10->command + 3;
  idol_draw::BindVertexProgram(iVar12,HUD_Pass,0xc);
  idol_draw::BindFragmentProgram(iVar12,HUD_Pass,0xc);
  pRVar10 = HUD_Pass;
  *HUD_Pass->command = NV4097_CLEAR_SURFACE_x1;
  pRVar10->command[1] = 0xf3;
  pRVar18 = pRVar10->command;
  pRVar10->command = pRVar18 + 2;
  pRVar18[2] = NV4097_NO_OPERATION_x1;
  pRVar10->command[1] = 0;
  pRVar10->command = pRVar10->command + 2;
  uVar13 = FUN_00502f98(0,0,0,0,0,0,1,1);
  SetGSReg(0x16,uVar13);
  uVar13 = idol_draw::PackCmd(0,1,0,1,0x80);
  SetGSReg(3,uVar13);
  return;
}


// 0x0071ac0 (0x4b0 bytes)
void ResetHUDPass(void)

{
  ushort uVar1;
  ushort uVar2;
  RsxCmd *pRVar3;
  int iVar4;
  int iVar5;
  RenderingStep *pRVar6;
  int *piVar7;
  
  STUB_000780fc();
  InitViewContext();
  UpdateViewContext();
  piVar7 = g_pIdolDraw;
  pRVar6 = HUD_Pass;
  pRVar3 = HUD_Pass->command;
  g_pIdolDraw[0x8b6] = g_pIdolDraw[0x8b6] + -1;
  *pRVar3 = NV4097_SET_CONTEXT_DMA_COLOR_A_x1;
  pRVar6->command[1] = *(byte *)(piVar7 + 0x6fa) + 0xfeed0000;
  pRVar3 = pRVar6->command;
  pRVar6->command = pRVar3 + 2;
  pRVar3[2] = NV4097_SET_CONTEXT_DMA_COLOR_B_x1;
  pRVar6->command[1] = *(byte *)((int)piVar7 + 0x1be9) + 0xfeed0000;
  pRVar3 = pRVar6->command;
  pRVar6->command = pRVar3 + 2;
  pRVar3[2] = NV4097_SET_CONTEXT_DMA_COLOR_C_x2;
  pRVar6->command[1] = *(byte *)((int)piVar7 + 0x1bea) + 0xfeed0000;
  pRVar6->command[2] = *(byte *)((int)piVar7 + 0x1beb) + 0xfeed0000;
  pRVar3 = pRVar6->command;
  pRVar6->command = pRVar3 + 3;
  pRVar3[3] = NV4097_SET_CONTEXT_DMA_ZETA_x1;
  pRVar6->command[1] = *(byte *)((int)piVar7 + 0x1c0d) + 0xfeed0000;
  pRVar3 = pRVar6->command;
  pRVar6->command = pRVar3 + 2;
  uVar1 = *(ushort *)(piVar7 + 0x706);
  uVar2 = *(ushort *)((int)piVar7 + 0x1c1a);
  pRVar3[2] = (RsxCmd)&DAT_00180208;
  pRVar6->command[1] =
       (uint)*(byte *)((int)piVar7 + 0x1be6) | (uint)*(byte *)(piVar7 + 0x703) << 5 |
       (uint)*(byte *)(piVar7 + 0x6f9) << 8 | (uint)*(byte *)((int)piVar7 + 0x1be5) << 0xc |
       (RsxCmd)((0x1fU - LZCOUNT((uint)uVar1) & 0xffffffff) << 0x10) |
       (RsxCmd)((0x1fU - LZCOUNT((uint)uVar2) & 0xffffffff) << 0x18);
  pRVar6->command[2] = piVar7[0x6ff];
  pRVar6->command[3] = piVar7[0x6fb];
  pRVar6->command[4] = piVar7[0x704];
  pRVar6->command[5] = piVar7[0x6fc];
  pRVar6->command[6] = piVar7[0x700];
  pRVar3 = pRVar6->command;
  pRVar6->command = pRVar3 + 7;
  pRVar3[7] = NV4097_SET_SURFACE_PITCH_Z_x1;
  pRVar6->command[1] = piVar7[0x705];
  pRVar3 = pRVar6->command;
  pRVar6->command = pRVar3 + 2;
  pRVar3[2] = NV4097_SET_SURFACE_PITCH_C_x4;
  pRVar6->command[1] = piVar7[0x701];
  pRVar6->command[2] = piVar7[0x702];
  pRVar6->command[3] = piVar7[0x6fd];
  pRVar6->command[4] = piVar7[0x6fe];
  pRVar3 = pRVar6->command;
  pRVar6->command = pRVar3 + 5;
  pRVar3[5] = NV4097_SET_SURFACE_COLOR_TARGET_x1;
  pRVar6->command[1] = (uint)*(byte *)((int)piVar7 + 0x1be7);
  pRVar3 = pRVar6->command;
  pRVar6->command = pRVar3 + 2;
  pRVar3[2] = NV4097_SET_WINDOW_OFFSET_x1;
  pRVar6->command[1] =
       CONCAT22(*(undefined2 *)((int)piVar7 + 0x1c1e),*(undefined2 *)(piVar7 + 0x707));
  pRVar3 = pRVar6->command;
  pRVar6->command = pRVar3 + 2;
  pRVar3[2] = NV4097_SET_SURFACE_CLIP_HORIZONTAL_x2;
  pRVar6->command[1] = CONCAT22(*(undefined2 *)(piVar7 + 0x706),*(undefined2 *)(piVar7 + 0x707));
  pRVar6->command[2] =
       CONCAT22(*(undefined2 *)((int)piVar7 + 0x1c1a),*(undefined2 *)((int)piVar7 + 0x1c1e));
  pRVar3 = pRVar6->command;
  pRVar6->command = pRVar3 + 3;
  pRVar3[3] = NV4097_SET_SHADER_WINDOW_x1;
  pRVar6->command[1] =
       (uint)*(ushort *)((int)piVar7 + 0x1c1a) - (*(ushort *)((int)piVar7 + 0x1c1a) >> 0xc & 1) |
       0x1000;
  pRVar6->command = pRVar6->command + 2;
  FUN_004d86b0(piVar7);
  idol_draw::BindVertexProgram(piVar7,HUD_Pass,0xc);
  idol_draw::BindFragmentProgram(piVar7,HUD_Pass,0xc);
  pRVar6 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_DEPTH_MASK_x1;
  pRVar6->command[1] = 0;
  pRVar6->command = pRVar6->command + 2;
  pRVar6 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_DEPTH_TEST_ENABLE_x1;
  pRVar6->command[1] = 0;
  pRVar6->command = pRVar6->command + 2;
  pRVar6 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_BLEND_ENABLE_x1;
  pRVar6->command[1] = 1;
  pRVar6->command = pRVar6->command + 2;
  pRVar6 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_BLEND_EQUATION_x1;
  pRVar6->command[1] = 0x80068006;
  pRVar6->command = pRVar6->command + 2;
  pRVar6 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_BLEND_FUNC_SFACTOR_x2;
  pRVar6->command[1] = 0x3020302;
  pRVar6->command[2] = 0x3030303;
  pRVar6->command = pRVar6->command + 3;
  pRVar6 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_ALPHA_TEST_ENABLE_x1;
  pRVar6->command[1] = 0;
  iVar4 = piVar7[1];
  iVar5 = piVar7[2];
  pRVar6->command = pRVar6->command + 2;
  (*(code *)**(undefined4 **)(*piVar7 + 0x10))(piVar7,HUD_Pass,iVar4,iVar5);
  pRVar6 = HUD_Pass;
  memset(HUD_Pass + 1,0,0x90);
  memset(&pRVar6[8].command,0xff,0x48);
  pRVar6[9].field7_0x10 = 0;
  pRVar6[9].callback = (undefined *)0x0;
  ComposeCameraMatrix();
  return;
}


// 0x0071f70 (0x130 bytes)
void ____Draw_FogBlendPass(void)

{
  undefined8 uVar1;
  
  if (g_EffectTableCnt != 0) {
    uVar1 = SCE_GS_SET_CLAMP(1,1,0,0,0,0);
    SetGSReg(6,uVar1);
    uVar1 = SCE_GS_SET_TEX1(1,0,1,1,0,0,0);
    SetGSReg(0x1a,uVar1);
    uVar1 = idol_draw::Blend(1,0,0x3f,1,0,0,1,2);
    SetGSReg(0x16,uVar1);
    uVar1 = FUN_0050302c(1);
    SetGSReg(8,uVar1);
    STUB_00074cec();
    DAT_0095cd40 = 0xbd23d70a;
    STUB_00074ce8();
    DAT_0095cd40 = 0;
    uVar1 = FUN_0050302c(0);
    SetGSReg(8,uVar1);
  }
  return;
}


// 0x00720a0 (0x88 bytes)
void InitAlphaPal(void)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar2 = 0;
  do {
    uVar1 = (uint)uVar2;
    uVar3 = uVar2 & 0xe7 | 0x10;
    uVar3 = uVar3 + (ZERO_MASK((uVar1 & 8)) & (uVar2 & 0xe7) - uVar3);
    uVar4 = uVar3 | 8;
    uVar2 = (ulonglong)(int)(uVar1 + 1);
    *(int *)(&DAT_0095ea14 +
            (int)((uVar4 + (ZERO_MASK((uVar1 & 0x10)) & uVar3 - uVar4) & 0xffffffff
                  ) << 2)) = ((int)uVar1 >> 1) << 0x18;
  } while ((int)(uVar1 + 1) < 0x100);
  return;
}


// 0x0072128 (0xd4 bytes)
void InitScreenEffects(void)

{
  DAT_0071f004 = 0x10000;
  DAT_0071eed8 = idol_draw::PackCmd(2,0,0,1,0x1f);
  DAT_0071eee8 = idol_draw::PackCmd(2,0,0,1,0x1f);
  DAT_0071ef08 = idol_draw::PackCmd(2,0,0,1,0x1f);
  DAT_0071ef18 = idol_draw::PackCmd(2,0,0,1,0x1f);
  ScreenColorEffectLevel = ScreenColorEffectNow;
  return;
}


// 0x0072200 (0x8 bytes)
undefined8 STUB_00072200_RET_0(...)

{
  return 0;
}


// 0x0072208 (0x4 bytes)
void STUB_00072208(...)

{
  return;
}


// 0x007220c (0x8 bytes)
undefined8 STUB_0007220c_RET_0(...)

{
  return 0;
}


// 0x0072214 (0x8 bytes)
undefined8 STUB_00072214_RET_0(...)

{
  return 0;
}


// 0x007221c (0x4 bytes)
void STUB_0007221c(...)

{
  return;
}


// 0x0072220 (0x8 bytes)
undefined8 STUB_00072220_RET_0(...)

{
  return 0;
}


// 0x0072230 (0x10 bytes)
undefined8 STUB_00072230_RET_0(...)

{
  return 0;
}


// 0x0072280 (0x508 bytes)
void FastDrawQuad(undefined4 *param_1,uint param_2,undefined8 param_3,longlong param_4,
                       ulonglong param_5)

{
  int iVar1;
  RenderingStep *pRVar2;
  undefined4 *puVar3;
  RsxCmd RVar4;
  RsxCmd *pRVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  RsxCmd *pRVar11;
  undefined4 *puVar12;
  RsxCmd *pRVar13;
  longlong lVar14;
  GPiece<16> auVar15;
  GPiece<16> auVar16;
  GPiece<16> auVar17;
  GPiece<16> auVar18;
  GPiece<16> auVar19;
  RsxCmd local_d0 [16];
  RsxCmd local_90 [16];
  undefined4 local_50;
  undefined4 local_4c [3];
  
  iVar1 = g_pIdolDraw;
  pRVar2 = *(RenderingStep **)((int)&DepthPass + ((uint)((param_5 & 0xffffffff) << 2) & 0x3c));
  idol_draw::BindVertexProgram(g_pIdolDraw,pRVar2,5);
  idol_draw::BindFragmentProgram(iVar1,pRVar2,6);
  puVar6 = (undefined4 *)idol::AllocateMemAlign(FrameHeap,0x60,0x10);
  lVar14 = 4;
  puVar12 = param_1;
  puVar9 = param_1;
  puVar10 = param_1;
  puVar7 = puVar6;
  do {
    *puVar7 = *puVar12;
    puVar7[1] = puVar12[1];
    puVar3 = puVar12 + 2;
    puVar12 = puVar12 + 4;
    puVar7[2] = *puVar3;
    puVar7[3] = puVar9[0x14];
    puVar3 = puVar9 + 0x15;
    puVar9 = puVar9 + 2;
    puVar7[4] = *puVar3;
    uVar8 = puVar10[0x10];
    puVar10 = puVar10 + 1;
    puVar7[5] = uVar8 >> 0x18 | uVar8 >> 8 & 0xff00 | uVar8 << 0x18 | (uVar8 & 0xff00) << 8;
    puVar7 = puVar7 + 6;
    lVar14 = lVar14 + -1;
  } while (lVar14 != 0);
  if (*(longlong *)(param_1 + 0x22) != 0) {
    idol_draw::DrawDepth(pRVar2,*(longlong *)(param_1 + 0x22));
  }
  FUN_004d6704(*(undefined8 *)(param_1 + 0x1c),&local_50,local_4c);
  FUN_004d676c(pRVar2,0,param_4 + *(longlong *)(param_1 + 0x1e) * 0x24 & 0xffffffff,local_50,
               local_4c[0]);
  idol_draw::ResetPassState(pRVar2);
  *pRVar2->command = NV4097_SET_VERTEX_DATA_ARRAY_FORMAT_x1;
  pRVar2->command[1] = 0x1832;
  pRVar11 = pRVar2->command;
  pRVar2->command = pRVar11 + 2;
  pRVar11[2] = 0x41744;
  pRVar2->command[1] = 0x1822;
  pRVar11 = pRVar2->command;
  pRVar2->command = pRVar11 + 2;
  pRVar11[2] = 0x4174c;
  pRVar2->command[1] = 0x1844;
  pRVar11 = pRVar2->command;
  pRVar2->command = pRVar11 + 2;
  iVar1 = *(int *)(iVar1 + 0x4a8);
  pRVar11[2] = NV4097_SET_VERTEX_DATA_ARRAY_OFFSET_x1;
  RVar4 = (int)puVar6 - iVar1;
  pRVar2->command[1] = RVar4 | 0x80000000;
  pRVar11 = pRVar2->command;
  pRVar2->command = pRVar11 + 2;
  pRVar11[2] = 0x41684;
  pRVar2->command[1] = RVar4 + 0xc | 0x80000000;
  pRVar11 = pRVar2->command;
  pRVar2->command = pRVar11 + 2;
  pRVar11[2] = 0x4168c;
  pRVar2->command[1] = RVar4 + 0x14 | 0x80000000;
  pRVar11 = pRVar2->command;
  pRVar2->command = pRVar11 + 2;
  if (param_2 == 0) {
    pRVar13 = local_90;
    pRVar11[2] = 0x441efc;
    lVar14 = 8;
    pRVar2->command[1] = 4;
    pRVar11 = pRVar2->command + 2;
    pRVar2->command = pRVar11;
    do {
      *pRVar11 = *pRVar13;
      pRVar11 = pRVar2->command;
      pRVar2->command = pRVar11 + 1;
      pRVar5 = pRVar13 + 1;
      pRVar13 = pRVar13 + 2;
      pRVar11[1] = *pRVar5;
      pRVar11 = pRVar2->command + 1;
      pRVar2->command = pRVar11;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
  }
  else {
    *(undefined4 *)(param_2 + 0x2c) = 0;
    *(undefined4 *)(param_2 + 0x1c) = 0;
    *(undefined4 *)(param_2 + 0xc) = 0;
    *(undefined4 *)(param_2 + 0x3c) = 0x3f800000;
    auVar15 = *(undefined1 (*) [16])(param_2 + 0x20 & 0xfffffff0);
    auVar17 = *(undefined1 (*) [16])(param_2 + 0x10 & 0xfffffff0);
    auVar18 = vectorMergeHighWord(*(undefined1 (*) [16])(param_2 & 0xfffffff0),auVar15);
    auVar19 = *(undefined1 (*) [16])(param_2 + 0x30 & 0xfffffff0);
    pRVar13 = local_d0;
    auVar15 = vectorMergeLowWord(*(undefined1 (*) [16])(param_2 & 0xfffffff0),auVar15);
    auVar16 = vectorMergeHighWord(auVar17,auVar19);
    auVar17 = vectorMergeLowWord(auVar17,auVar19);
    vectorMergeHighWord(auVar18,auVar16);
    vectorMergeLowWord(auVar18,auVar16);
    vectorMergeHighWord(auVar15,auVar17);
    vectorMergeLowWord(auVar15,auVar17);
    uVar8 = 0;
    pRVar11[2] = 0x441efc;
    pRVar2->command[1] = 4;
    pRVar11 = pRVar2->command + 2;
    pRVar2->command = pRVar11;
    do {
      uVar8 = uVar8 + 1;
      *pRVar11 = *pRVar13;
      pRVar13 = pRVar13 + 1;
      pRVar11 = pRVar2->command + 1;
      pRVar2->command = pRVar11;
    } while (uVar8 < 0x10);
  }
  *pRVar11 = 0x400c1714;
  pRVar2->command[1] = 0;
  pRVar2->command[2] = 0;
  pRVar2->command[3] = 0;
  pRVar2->command[4] = NV4097_SET_BEGIN_END_x1;
  pRVar2->command[5] = 6;
  pRVar11 = pRVar2->command;
  pRVar2->command = pRVar11 + 7;
  pRVar11[6] = 0x40041814;
  pRVar11 = pRVar2->command;
  pRVar2->command = pRVar11 + 1;
  *pRVar11 = 0x3000000;
  *pRVar2->command = NV4097_SET_BEGIN_END_x1;
  pRVar2->command[1] = 0;
  pRVar11 = pRVar2->command;
  pRVar2->command = pRVar11 + 2;
  pRVar11[2] = NV4097_SET_VERTEX_DATA_ARRAY_FORMAT_x1;
  pRVar2->command[1] = 2;
  pRVar11 = pRVar2->command;
  pRVar2->command = pRVar11 + 2;
  pRVar11[2] = 0x41744;
  pRVar2->command[1] = 2;
  pRVar11 = pRVar2->command;
  pRVar2->command = pRVar11 + 2;
  pRVar11[2] = 0x4174c;
  pRVar2->command[1] = 2;
  pRVar2->command = pRVar2->command + 2;
  return;
}


// 0x0072788 (0x4 bytes)
void STUB_00072788(...)

{
  return;
}


// 0x007278c (0x390 bytes)
void FastDrawStrip_DL(longlong param_1,int param_2)

{
  RsxCmd *pRVar1;
  RsxCmd RVar2;
  RenderingStep *pRVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  RsxCmd RVar9;
  ulonglong uVar8;
  ulonglong uVar10;
  
  iVar6 = g_pIdolDraw;
  pRVar3 = DL_Pass;
  idol_draw::BindVertexProgram(g_pIdolDraw,DL_Pass,10);
  idol_draw::BindFragmentProgram(iVar6,pRVar3,0xb);
  *pRVar3->command = NV4097_SET_VERTEX_DATA_ARRAY_FORMAT_x1;
  pRVar3->command[1] = 0x2032;
  pRVar1 = pRVar3->command;
  pRVar3->command = pRVar1 + 2;
  pRVar1[2] = 0x41744;
  pRVar3->command[1] = 0x2022;
  pRVar1 = pRVar3->command;
  pRVar3->command = pRVar1 + 2;
  pRVar1[2] = 0x41748;
  pRVar3->command[1] = 0x2022;
  pRVar1 = pRVar3->command;
  pRVar3->command = pRVar1 + 2;
  pRVar1[2] = 0x4174c;
  pRVar3->command[1] = 0x2044;
  pRVar1 = pRVar3->command;
  pRVar3->command = pRVar1 + 2;
  iVar6 = *(int *)(iVar6 + 0x4a8);
  pRVar1[2] = NV4097_SET_VERTEX_DATA_ARRAY_OFFSET_x1;
  RVar9 = param_2 - iVar6;
  pRVar3->command[1] = RVar9 | 0x80000000;
  pRVar1 = pRVar3->command;
  pRVar3->command = pRVar1 + 2;
  pRVar1[2] = 0x41684;
  pRVar3->command[1] = RVar9 + 0xc | 0x80000000;
  pRVar1 = pRVar3->command;
  pRVar3->command = pRVar1 + 2;
  pRVar1[2] = 0x41688;
  pRVar3->command[1] = RVar9 + 0x14 | 0x80000000;
  pRVar1 = pRVar3->command;
  pRVar3->command = pRVar1 + 2;
  pRVar1[2] = 0x4168c;
  pRVar3->command[1] = RVar9 + 0x1c | 0x80000000;
  pRVar1 = pRVar3->command;
  uVar10 = (param_1 - 0x100U & (longlong)((int)(param_1 - 0x100U) >> 0x1f)) + 0x100;
  pRVar3->command = pRVar1 + 2;
  pRVar1[2] = 0x400c1714;
  uVar4 = param_1 - uVar10 & ~(longlong)((int)(param_1 - uVar10) >> 0x1f);
  uVar7 = (uVar4 << 0x20) >> 0x28;
  pRVar3->command[1] = 0;
  uVar5 = uVar4 - (uVar4 & 0xffffff00);
  iVar6 = (int)uVar5;
  pRVar3->command[2] = 0;
  pRVar3->command[3] = 0;
  pRVar3->command[4] = NV4097_SET_BEGIN_END_x1;
  pRVar3->command[5] = 6;
  pRVar1 = pRVar3->command;
  pRVar1[6] = (((uint)uVar4 >> 8) + ((iVar6 != 0)) +
              (((int)uVar10 != 0))) * 0x40000 | 0x40001814;
  pRVar3->command = pRVar1 + 7;
  uVar8 = 0;
  if ((int)uVar10 != 0) {
    pRVar1 = pRVar3->command;
    pRVar3->command = pRVar1 + 1;
    *pRVar1 = (int)((uVar10 & 0xffffffff) << 0x18) - 0x1000000;
    uVar8 = uVar10;
  }
  RVar9 = (RsxCmd)uVar8;
  if ((uint)uVar4 >> 8 != 0) {
    do {
      pRVar1 = pRVar3->command;
      RVar2 = (RsxCmd)uVar8;
      uVar7 = uVar7 - 1;
      uVar8 = uVar8 + 0x100;
      RVar9 = (RsxCmd)uVar8;
      pRVar3->command = pRVar1 + 1;
      *pRVar1 = RVar2 | 0xff000000;
    } while (0 < (int)uVar7);
  }
  if (iVar6 != 0) {
    pRVar1 = pRVar3->command;
    pRVar3->command = pRVar1 + 1;
    *pRVar1 = RVar9 | (int)((uVar5 & 0xffffffff) << 0x18) - 0x1000000;
  }
  *pRVar3->command = NV4097_SET_BEGIN_END_x1;
  pRVar3->command[1] = 0;
  pRVar1 = pRVar3->command;
  pRVar3->command = pRVar1 + 2;
  pRVar1[2] = NV4097_SET_VERTEX_DATA_ARRAY_FORMAT_x1;
  pRVar3->command[1] = 2;
  pRVar1 = pRVar3->command;
  pRVar3->command = pRVar1 + 2;
  pRVar1[2] = 0x41744;
  pRVar3->command[1] = 2;
  pRVar1 = pRVar3->command;
  pRVar3->command = pRVar1 + 2;
  pRVar1[2] = 0x41748;
  pRVar3->command[1] = 2;
  pRVar1 = pRVar3->command;
  pRVar3->command = pRVar1 + 2;
  pRVar1[2] = 0x4174c;
  pRVar3->command[1] = 2;
  pRVar3->command = pRVar3->command + 2;
  return;
}


// 0x0072b1c (0x2c0 bytes)
void FastDrawStrip_DLNoState(int param_1,void *param_2)

{
  RsxCmd *pRVar1;
  RsxCmd RVar2;
  RenderingStep *pRVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  RsxCmd RVar9;
  ulonglong uVar8;
  ulonglong uVar10;
  
  iVar6 = g_pIdolDraw;
  pRVar3 = DL_Pass;
  *DL_Pass->command = NV4097_SET_VERTEX_DATA_ARRAY_FORMAT_x1;
  pRVar3->command[1] = 0x2032;
  pRVar1 = pRVar3->command;
  pRVar3->command = pRVar1 + 2;
  pRVar1[2] = 0x41744;
  pRVar3->command[1] = 0x2022;
  pRVar1 = pRVar3->command;
  pRVar3->command = pRVar1 + 2;
  pRVar1[2] = 0x4174c;
  pRVar3->command[1] = 0x2044;
  pRVar1 = pRVar3->command;
  pRVar3->command = pRVar1 + 2;
  iVar6 = *(int *)(iVar6 + 0x4a8);
  pRVar1[2] = NV4097_SET_VERTEX_DATA_ARRAY_OFFSET_x1;
  RVar9 = param_2 - iVar6;
  pRVar3->command[1] = RVar9 | 0x80000000;
  pRVar1 = pRVar3->command;
  pRVar3->command = pRVar1 + 2;
  pRVar1[2] = 0x41684;
  pRVar3->command[1] = RVar9 + 0x14 | 0x80000000;
  pRVar1 = pRVar3->command;
  pRVar3->command = pRVar1 + 2;
  pRVar1[2] = 0x4168c;
  uVar10 = (param_1 - 0x100U & (longlong)((int)(param_1 - 0x100U) >> 0x1f)) + 0x100;
  pRVar3->command[1] = RVar9 + 0x1c | 0x80000000;
  pRVar1 = pRVar3->command;
  uVar4 = param_1 - uVar10 & ~(longlong)((int)(param_1 - uVar10) >> 0x1f);
  pRVar3->command = pRVar1 + 2;
  pRVar1[2] = 0x400c1714;
  uVar7 = (uVar4 << 0x20) >> 0x28;
  uVar5 = uVar4 - (uVar4 & 0xffffff00);
  iVar6 = (int)uVar5;
  pRVar3->command[1] = 0;
  pRVar3->command[2] = 0;
  pRVar3->command[3] = 0;
  pRVar3->command[4] = NV4097_SET_BEGIN_END_x1;
  pRVar3->command[5] = 6;
  pRVar1 = pRVar3->command;
  pRVar1[6] = (((uint)uVar4 >> 8) + ((iVar6 != 0)) +
              (((int)uVar10 != 0))) * 0x40000 | 0x40001814;
  pRVar3->command = pRVar1 + 7;
  uVar8 = 0;
  if ((int)uVar10 != 0) {
    pRVar1 = pRVar3->command;
    pRVar3->command = pRVar1 + 1;
    *pRVar1 = (int)((uVar10 & 0xffffffff) << 0x18) - 0x1000000;
    uVar8 = uVar10;
  }
  RVar9 = (RsxCmd)uVar8;
  if ((uint)uVar4 >> 8 != 0) {
    do {
      pRVar1 = pRVar3->command;
      RVar2 = (RsxCmd)uVar8;
      uVar7 = uVar7 - 1;
      uVar8 = uVar8 + 0x100;
      RVar9 = (RsxCmd)uVar8;
      pRVar3->command = pRVar1 + 1;
      *pRVar1 = RVar2 | 0xff000000;
    } while (0 < (int)uVar7);
  }
  if (iVar6 != 0) {
    pRVar1 = pRVar3->command;
    pRVar3->command = pRVar1 + 1;
    *pRVar1 = RVar9 | (int)((uVar5 & 0xffffffff) << 0x18) - 0x1000000;
  }
  *pRVar3->command = NV4097_SET_BEGIN_END_x1;
  pRVar3->command[1] = 0;
  pRVar1 = pRVar3->command;
  pRVar3->command = pRVar1 + 2;
  pRVar1[2] = NV4097_SET_VERTEX_DATA_ARRAY_FORMAT_x1;
  pRVar3->command[1] = 2;
  pRVar1 = pRVar3->command;
  pRVar3->command = pRVar1 + 2;
  pRVar1[2] = 0x41744;
  pRVar3->command[1] = 2;
  pRVar1 = pRVar3->command;
  pRVar3->command = pRVar1 + 2;
  pRVar1[2] = 0x4174c;
  pRVar3->command[1] = 2;
  pRVar3->command = pRVar3->command + 2;
  return;
}


// 0x0072ddc (0x394 bytes)
void FastDrawStrip_Pass(int param_1,void *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar9;
  ulonglong uVar8;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  int iVar13;
  
  iVar2 = g_pIdolDraw;
  if (((int)param_3 == 2) || ((int)param_3 == 9)) {
    iVar1 = (int)(param_3 << 2);
    idol_draw::BindVertexProgram(g_pIdolDraw,*(undefined4 *)((int)&DepthPass + iVar1),4);
    idol_draw::BindFragmentProgram(iVar2,*(undefined4 *)((int)&DepthPass + iVar1),6);
  }
  iVar5 = (int)(param_3 << 2);
  iVar13 = *(int *)((int)&DepthPass + iVar5);
  **(undefined4 **)(iVar13 + 8) = 0x41740;
  iVar1 = *(int *)(iVar13 + 8);
  *(undefined4 *)(iVar1 + 4) = 0x2032;
  *(int *)(iVar13 + 8) = iVar1 + 8;
  iVar13 = *(int *)((int)&DepthPass + iVar5);
  **(undefined4 **)(iVar13 + 8) = 0x41744;
  iVar1 = *(int *)(iVar13 + 8);
  *(undefined4 *)(iVar1 + 4) = 0x2022;
  *(int *)(iVar13 + 8) = iVar1 + 8;
  iVar13 = *(int *)((int)&DepthPass + iVar5);
  **(undefined4 **)(iVar13 + 8) = 0x4174c;
  iVar1 = *(int *)(iVar13 + 8);
  *(undefined4 *)(iVar1 + 4) = 0x2044;
  *(int *)(iVar13 + 8) = iVar1 + 8;
  iVar1 = *(int *)((int)&DepthPass + iVar5);
  uVar9 = param_2 - *(int *)(iVar2 + 0x4a8);
  **(undefined4 **)(iVar1 + 8) = 0x41680;
  iVar2 = *(int *)(iVar1 + 8);
  *(uint *)(iVar2 + 4) = uVar9 | 0x80000000;
  *(int *)(iVar1 + 8) = iVar2 + 8;
  iVar1 = *(int *)((int)&DepthPass + iVar5);
  **(undefined4 **)(iVar1 + 8) = 0x41684;
  iVar2 = *(int *)(iVar1 + 8);
  *(uint *)(iVar2 + 4) = uVar9 + 0xc | 0x80000000;
  *(int *)(iVar1 + 8) = iVar2 + 8;
  iVar1 = *(int *)((int)&DepthPass + iVar5);
  **(undefined4 **)(iVar1 + 8) = 0x4168c;
  iVar2 = *(int *)(iVar1 + 8);
  *(uint *)(iVar2 + 4) = uVar9 + 0x1c | 0x80000000;
  *(int *)(iVar1 + 8) = iVar2 + 8;
  iVar1 = *(int *)((int)&DepthPass + iVar5);
  **(undefined4 **)(iVar1 + 8) = 0x400c1714;
  *(undefined4 *)(*(int *)(iVar1 + 8) + 4) = 0;
  uVar10 = (param_1 - 0x100U & (longlong)((int)(param_1 - 0x100U) >> 0x1f)) + 0x100;
  *(undefined4 *)(*(int *)(iVar1 + 8) + 8) = 0;
  *(undefined4 *)(*(int *)(iVar1 + 8) + 0xc) = 0;
  uVar11 = param_1 - uVar10 & ~(longlong)((int)(param_1 - uVar10) >> 0x1f);
  *(undefined4 *)(*(int *)(iVar1 + 8) + 0x10) = 0x41808;
  iVar2 = *(int *)(iVar1 + 8);
  uVar7 = (uVar11 << 0x20) >> 0x28;
  uVar12 = uVar11 - (uVar11 & 0xffffff00);
  iVar13 = (int)uVar12;
  *(undefined4 *)(iVar2 + 0x14) = 6;
  *(int *)(iVar1 + 8) = iVar2 + 0x18;
  iVar2 = *(int *)((int)&DepthPass + iVar5);
  puVar3 = *(uint **)(iVar2 + 8);
  *(uint **)(iVar2 + 8) = puVar3 + 1;
  *puVar3 = (((uint)uVar11 >> 8) + ((iVar13 != 0)) +
            (((int)uVar10 != 0))) * 0x40000 | 0x40001814;
  uVar8 = 0;
  if ((int)uVar10 != 0) {
    piVar4 = *(int **)(iVar2 + 8);
    *piVar4 = (int)((uVar10 & 0xffffffff) << 0x18) + -0x1000000;
    *(int **)(iVar2 + 8) = piVar4 + 1;
    uVar8 = uVar10;
  }
  uVar9 = (uint)uVar8;
  if ((uint)uVar11 >> 8 != 0) {
    do {
      puVar3 = *(uint **)(iVar2 + 8);
      uVar6 = (uint)uVar8;
      uVar7 = uVar7 - 1;
      uVar8 = uVar8 + 0x100;
      uVar9 = (uint)uVar8;
      *puVar3 = uVar6 | 0xff000000;
      *(uint **)(iVar2 + 8) = puVar3 + 1;
    } while (0 < (int)uVar7);
  }
  if (iVar13 != 0) {
    puVar3 = *(uint **)(iVar2 + 8);
    *puVar3 = uVar9 | (int)((uVar12 & 0xffffffff) << 0x18) - 0x1000000U;
    *(uint **)(iVar2 + 8) = puVar3 + 1;
  }
  iVar1 = *(int *)((int)&DepthPass + iVar5);
  **(undefined4 **)(iVar1 + 8) = 0x41808;
  iVar2 = *(int *)(iVar1 + 8);
  *(undefined4 *)(iVar2 + 4) = 0;
  *(int *)(iVar1 + 8) = iVar2 + 8;
  iVar1 = *(int *)((int)&DepthPass + iVar5);
  **(undefined4 **)(iVar1 + 8) = 0x41740;
  iVar2 = *(int *)(iVar1 + 8);
  *(undefined4 *)(iVar2 + 4) = 2;
  *(int *)(iVar1 + 8) = iVar2 + 8;
  iVar1 = *(int *)((int)&DepthPass + iVar5);
  **(undefined4 **)(iVar1 + 8) = 0x41744;
  iVar2 = *(int *)(iVar1 + 8);
  *(undefined4 *)(iVar2 + 4) = 2;
  *(int *)(iVar1 + 8) = iVar2 + 8;
  iVar1 = *(int *)((int)&DepthPass + iVar5);
  **(undefined4 **)(iVar1 + 8) = 0x4174c;
  iVar2 = *(int *)(iVar1 + 8);
  *(undefined4 *)(iVar2 + 4) = 2;
  *(int *)(iVar1 + 8) = iVar2 + 8;
  return;
}


// 0x00731c8 (0x4b0 bytes)
void DrawTexturedStrips(int param_1,Vec3 *param_2,u32 *param_3,Vec2 *param_4,Vec2 *param_5,int param_6,int param_7,u64 param_8)

{
  undefined4 uVar1;
  GPiece<16> auVar2;
  GPiece<16> auVar3;
  GPiece<16> auVar4;
  RsxCmd *pRVar5;
  RenderingStep *pRVar6;
  RenderingStep *pRVar7;
  int iVar8;
  longlong lVar9;
  undefined4 *puVar10;
  int iVar11;
  RsxCmd *pRVar13;
  longlong lVar12;
  RsxCmd *pRVar15;
  ulonglong uVar14;
  RsxCmd *pRVar16;
  undefined8 in_LR;
  longlong lVar17;
  GPiece<16> auVar18;
  GPiece<16> auVar19;
  GPiece<16> auVar20;
  GPiece<16> auVar21;
  GPiece<16> auVar22;
  GPiece<16> auVar23;
  GPiece<16> auVar24;
  GPiece<16> auVar25;
  GPiece<16> auVar26;
  GPiece<16> auVar27;
  GPiece<16> auVar28;
  GPiece<16> auVar29;
  GPiece<16> auVar30;
  GPiece<16> auVar31;
  GPiece<16> auVar32;
  undefined8 in_stack_00000070;
  RsxCmd local_a0 [18];
  
  lVar9 = idol::AllocateMemAlign(FrameHeap,(int)((param_1 & 0xffffffff) << 5),0x10);
  pRVar7 = DL_Pass;
  pRVar15 = local_a0;
  lVar17 = 8;
  *DL_Pass->command = 0x441efc;
  pRVar7->command[1] = 4;
  pRVar16 = pRVar7->command + 2;
  pRVar7->command = pRVar16;
  pRVar13 = pRVar15;
  do {
    *pRVar16 = *pRVar13;
    pRVar16 = pRVar7->command;
    pRVar7->command = pRVar16 + 1;
    pRVar5 = pRVar13 + 1;
    pRVar13 = pRVar13 + 2;
    pRVar16[1] = *pRVar5;
    pRVar16 = pRVar7->command + 1;
    pRVar7->command = pRVar16;
    pRVar6 = DL_DepthPass;
    lVar17 = lVar17 + -1;
  } while (lVar17 != 0);
  lVar17 = 8;
  *DL_DepthPass->command = 0x441efc;
  pRVar6->command[1] = 4;
  pRVar13 = pRVar6->command + 2;
  pRVar6->command = pRVar13;
  do {
    *pRVar13 = *pRVar15;
    pRVar13 = pRVar6->command;
    pRVar6->command = pRVar13 + 1;
    pRVar16 = pRVar15 + 1;
    pRVar15 = pRVar15 + 2;
    pRVar13[1] = *pRVar16;
    pRVar13 = pRVar6->command + 1;
    pRVar6->command = pRVar13;
    lVar17 = lVar17 + -1;
  } while (lVar17 != 0);
  if (0 < (int)param_1) {
    auVar2 = ZEXT416(0xfffffff8);
    auVar3 = ZEXT416(0xfffffff0);
    auVar4 = ZEXT416(8);
    auVar20 = loadVectorLeftIndexed(0x40,0x73170);
    auVar23 = loadVectorLeftIndexed(0x48,0x73170);
    auVar22 = loadVectorLeftIndexed(0x44,0x73170);
    auVar24 = loadVectorLeftIndexed(0x4c,0x73170);
    auVar25 = loadVectorLeftIndexed(0x50,0x73170);
    auVar20 = auVar20 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar21 = auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60;
    lVar12 = lVar9 + 0x1c;
    auVar26 = loadVectorLeftIndexed(0x54,0x73170);
    auVar20 = auVar22 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar22 = auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60;
    auVar20 = auVar23 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar23 = auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60;
    auVar20 = auVar24 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar24 = auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60;
    auVar20 = auVar25 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar25 = auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60;
    auVar20 = auVar26 >> 0x60 & (GPiece<16>)0xffffffff;
    lVar17 = lVar9;
    uVar14 = param_1;
    do {
      puVar10 = (undefined4 *)lVar17;
      *puVar10 = *param_2;
      puVar10[1] = param_2[1];
      auVar26 = ZEXT416(0xffffffff);
      auVar18 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
      puVar10[2] = param_2[2];
      auVar26 = ZEXT416(0xffffffff);
      auVar29 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
      puVar10[3] = *param_4;
      auVar26 = ZEXT416(0xffffffff);
      auVar26 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
      puVar10[4] = param_4[1];
      auVar19 = vectorShiftLeftIntegerWord(auVar18,auVar18);
      puVar10[5] = *param_5;
      auVar30 = vectorShiftLeftIntegerWord(auVar29,auVar29);
      puVar10[6] = param_5[1];
      auVar18 = loadVectorLeftIndexed(in_LR,param_3);
      auVar31 = vectorShiftLeftIntegerWord(auVar26,auVar26);
      auVar27 = vectorRotateLeftIntegerWord
                          (auVar18,auVar2 | auVar2 << 0x20 | auVar2 << 0x40 | auVar2 << 0x60);
      auVar28 = vectorRotateLeftIntegerWord
                          (auVar18,auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60);
      auVar26 = vectorLogicalAnd(auVar18,auVar24);
      auVar29 = vectorShiftRightWord(auVar18,auVar25);
      auVar27 = vectorLogicalAnd(auVar27,auVar24);
      auVar28 = vectorLogicalAnd(auVar28,auVar24);
      auVar18 = vectorConvertFromUnsignedFixedPointWord(auVar26,0);
      auVar29 = vectorConvertFromUnsignedFixedPointWord(auVar29,0);
      auVar26 = ZEXT416(0xffffffff);
      auVar32 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
      auVar27 = vectorConvertFromUnsignedFixedPointWord(auVar27,0);
      auVar28 = vectorConvertFromUnsignedFixedPointWord(auVar28,0);
      uVar14 = uVar14 - 1;
      lVar17 = lVar17 + 0x20;
      param_2 = param_2 + 3;
      param_3 = param_3 + 4;
      param_4 = param_4 + 2;
      auVar26 = vectorMultiplyAddFloatingPoint(auVar18,auVar21,auVar30);
      auVar27 = vectorMultiplyAddFloatingPoint(auVar27,auVar21,auVar19);
      auVar28 = vectorMultiplyAddFloatingPoint(auVar28,auVar21,auVar31);
      auVar18 = vectorShiftLeftIntegerWord(auVar32,auVar32);
      param_5 = param_5 + 2;
      auVar19 = vectorMultiplyAddFloatingPoint(auVar29,auVar21,auVar18);
      auVar18 = vectorCompareGreaterThanFloatingPoint(auVar26,auVar22);
      auVar29 = vectorCompareGreaterThanFloatingPoint(auVar27,auVar22);
      auVar30 = vectorCompareGreaterThanFloatingPoint(auVar28,auVar22);
      auVar26 = vectorConditionalSelect(auVar26,auVar22,auVar18);
      auVar29 = vectorConditionalSelect(auVar27,auVar22,auVar29);
      auVar27 = vectorConditionalSelect(auVar28,auVar22,auVar30);
      auVar18 = vectorCompareGreaterThanFloatingPoint(auVar19,auVar22);
      auVar26 = vectorAddFloatingPoint(auVar26,auVar23);
      auVar29 = vectorAddFloatingPoint(auVar29,auVar23);
      auVar18 = vectorConditionalSelect(auVar19,auVar22,auVar18);
      auVar27 = vectorAddFloatingPoint(auVar27,auVar23);
      auVar19 = vectorAddFloatingPoint(auVar18,auVar23);
      auVar18 = vectorCompareGreaterThanFloatingPoint(auVar29,auVar22);
      auVar29 = vectorConditionalSelect(auVar29,auVar22,auVar18);
      auVar18 = vectorCompareGreaterThanFloatingPoint(auVar26,auVar22);
      auVar28 = vectorCompareGreaterThanFloatingPoint(auVar27,auVar22);
      auVar26 = vectorConditionalSelect(auVar26,auVar22,auVar18);
      auVar27 = vectorConditionalSelect(auVar27,auVar22,auVar28);
      auVar29 = vectorConvertToSignedFixedPointWordSaturate(auVar29,0);
      auVar18 = vectorCompareGreaterThanFloatingPoint(auVar19,auVar22);
      auVar18 = vectorConditionalSelect(auVar19,auVar22,auVar18);
      auVar26 = vectorConvertToSignedFixedPointWordSaturate(auVar26,0);
      auVar27 = vectorConvertToSignedFixedPointWordSaturate(auVar27,0);
      auVar18 = vectorConvertToSignedFixedPointWordSaturate(auVar18,0);
      auVar19 = vectorShiftLeftIntegerWord
                          (auVar29,auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60);
      auVar29 = vectorShiftLeftIntegerWord
                          (auVar27,auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60);
      auVar18 = vectorShiftLeftIntegerWord(auVar18,auVar25);
      auVar26 = (auVar26 | auVar19 | auVar29 | auVar18) >> 0x60 & (GPiece<16>)0xffffffff;
      uVar1 = storeVectorElementWordIndexed
                        (auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60,0,lVar12);
      *(undefined4 *)((uint)lVar12 & 0xfffffffc) = uVar1;
      lVar12 = lVar12 + 0x20;
    } while (0 < (int)uVar14);
  }
  idol_draw::DrawDepth(DL_DepthPass,0);
  pRVar7 = DL_DepthPass;
  *DL_DepthPass->command = NV4097_SET_ALPHA_TEST_ENABLE_x1;
  pRVar7->command[1] = 0;
  pRVar7->command = pRVar7->command + 2;
  idol_draw::DrawDepth(DL_Pass,0);
  pRVar7 = DL_Pass;
  *DL_Pass->command = NV4097_SET_ALPHA_TEST_ENABLE_x1;
  pRVar7->command[1] = 0;
  pRVar7->command = pRVar7->command + 2;
  iVar8 = EffectTexHeaders;
  pRVar7 = DL_Pass;
  iVar11 = GetEffectTex(param_6);
  FUN_004d676c(pRVar7,0,iVar8 + iVar11 * 0x24,1,1);
  FastDrawStrip_Pass(param_1,lVar9,9);
  FastDrawStrip_Pass(param_1,lVar9,8);
  idol_draw::DrawDepth(DL_Pass,in_stack_00000070);
  iVar8 = EffectTexHeaders;
  pRVar7 = DL_Pass;
  iVar11 = GetEffectTex(param_7);
  FUN_004d676c(pRVar7,0,iVar8 + iVar11 * 0x24,1,1);
  FastDrawStrip_DLNoState(param_1,lVar9);
  return;
}


// 0x0073678 (0x390 bytes)
void FastDrawStrip2UV_Pass(longlong param_1,int param_2,longlong param_3)

{
  uint *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  uint uVar11;
  ulonglong uVar10;
  ulonglong uVar12;
  
  iVar8 = g_pIdolDraw;
  iVar4 = (int)(param_3 << 2);
  idol_draw::BindVertexProgram(g_pIdolDraw,*(undefined4 *)((int)&DepthPass + iVar4),7);
  idol_draw::BindFragmentProgram(iVar8,*(undefined4 *)((int)&DepthPass + iVar4),7);
  iVar3 = *(int *)((int)&DepthPass + iVar4);
  **(undefined4 **)(iVar3 + 8) = 0x41740;
  *(undefined4 *)(*(int *)(iVar3 + 8) + 4) = 0x2832;
  *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 8;
  iVar3 = *(int *)((int)&DepthPass + iVar4);
  **(undefined4 **)(iVar3 + 8) = 0x41744;
  *(undefined4 *)(*(int *)(iVar3 + 8) + 4) = 0x2832;
  *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 8;
  iVar3 = *(int *)((int)&DepthPass + iVar4);
  **(undefined4 **)(iVar3 + 8) = 0x4174c;
  *(undefined4 *)(*(int *)(iVar3 + 8) + 4) = 0x2844;
  *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 8;
  iVar3 = *(int *)((int)&DepthPass + iVar4);
  uVar11 = param_2 - *(int *)(iVar8 + 0x4a8);
  **(undefined4 **)(iVar3 + 8) = 0x41680;
  *(uint *)(*(int *)(iVar3 + 8) + 4) = uVar11 | 0x80000000;
  *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 8;
  iVar3 = *(int *)((int)&DepthPass + iVar4);
  **(undefined4 **)(iVar3 + 8) = 0x41684;
  *(uint *)(*(int *)(iVar3 + 8) + 4) = uVar11 + 0x18 | 0x80000000;
  *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 8;
  iVar3 = *(int *)((int)&DepthPass + iVar4);
  **(undefined4 **)(iVar3 + 8) = 0x4168c;
  *(uint *)(*(int *)(iVar3 + 8) + 4) = uVar11 + 0x24 | 0x80000000;
  *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 8;
  iVar3 = *(int *)((int)&DepthPass + iVar4);
  **(undefined4 **)(iVar3 + 8) = 0x400c1714;
  uVar12 = (param_1 - 0x100U & (longlong)((int)(param_1 - 0x100U) >> 0x1f)) + 0x100;
  *(undefined4 *)(*(int *)(iVar3 + 8) + 4) = 0;
  *(undefined4 *)(*(int *)(iVar3 + 8) + 8) = 0;
  *(undefined4 *)(*(int *)(iVar3 + 8) + 0xc) = 0;
  *(undefined4 *)(*(int *)(iVar3 + 8) + 0x10) = 0x41808;
  uVar6 = param_1 - uVar12 & ~(longlong)((int)(param_1 - uVar12) >> 0x1f);
  uVar9 = (uVar6 << 0x20) >> 0x28;
  uVar7 = uVar6 - (uVar6 & 0xffffff00);
  *(undefined4 *)(*(int *)(iVar3 + 8) + 0x14) = 6;
  iVar8 = (int)uVar7;
  *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 0x18;
  iVar3 = *(int *)((int)&DepthPass + iVar4);
  puVar1 = *(uint **)(iVar3 + 8);
  *(uint **)(iVar3 + 8) = puVar1 + 1;
  *puVar1 = (((uint)uVar6 >> 8) + ((iVar8 != 0)) +
            (((int)uVar12 != 0))) * 0x40000 | 0x40001814;
  uVar10 = 0;
  if ((int)uVar12 != 0) {
    piVar2 = *(int **)(iVar3 + 8);
    *(int **)(iVar3 + 8) = piVar2 + 1;
    *piVar2 = (int)((uVar12 & 0xffffffff) << 0x18) + -0x1000000;
    uVar10 = uVar12;
  }
  uVar11 = (uint)uVar10;
  if ((uint)uVar6 >> 8 != 0) {
    do {
      puVar1 = *(uint **)(iVar3 + 8);
      uVar5 = (uint)uVar10;
      uVar9 = uVar9 - 1;
      uVar10 = uVar10 + 0x100;
      uVar11 = (uint)uVar10;
      *(uint **)(iVar3 + 8) = puVar1 + 1;
      *puVar1 = uVar5 | 0xff000000;
    } while (0 < (int)uVar9);
  }
  if (iVar8 != 0) {
    puVar1 = *(uint **)(iVar3 + 8);
    *(uint **)(iVar3 + 8) = puVar1 + 1;
    *puVar1 = uVar11 | (int)((uVar7 & 0xffffffff) << 0x18) - 0x1000000U;
  }
  iVar3 = *(int *)((int)&DepthPass + iVar4);
  **(undefined4 **)(iVar3 + 8) = 0x41808;
  *(undefined4 *)(*(int *)(iVar3 + 8) + 4) = 0;
  *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 8;
  iVar3 = *(int *)((int)&DepthPass + iVar4);
  **(undefined4 **)(iVar3 + 8) = 0x41740;
  *(undefined4 *)(*(int *)(iVar3 + 8) + 4) = 2;
  *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 8;
  iVar3 = *(int *)((int)&DepthPass + iVar4);
  **(undefined4 **)(iVar3 + 8) = 0x41744;
  *(undefined4 *)(*(int *)(iVar3 + 8) + 4) = 2;
  *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 8;
  iVar3 = *(int *)((int)&DepthPass + iVar4);
  **(undefined4 **)(iVar3 + 8) = 0x4174c;
  *(undefined4 *)(*(int *)(iVar3 + 8) + 4) = 2;
  *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 8;
  return;
}


// 0x0073a08 (0x390 bytes)
void FastDrawStrip2UV_PassNoState(longlong param_1,int param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar9;
  ulonglong uVar8;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  int iVar13;
  
  iVar2 = g_pIdolDraw;
  if (((int)param_3 == 2) || ((int)param_3 == 9)) {
    iVar1 = (int)(param_3 << 2);
    idol_draw::BindVertexProgram(g_pIdolDraw,*(undefined4 *)((int)&DepthPass + iVar1),7);
    idol_draw::BindFragmentProgram(iVar2,*(undefined4 *)((int)&DepthPass + iVar1),7);
  }
  iVar5 = (int)(param_3 << 2);
  iVar13 = *(int *)((int)&DepthPass + iVar5);
  **(undefined4 **)(iVar13 + 8) = 0x41740;
  iVar1 = *(int *)(iVar13 + 8);
  *(undefined4 *)(iVar1 + 4) = 0x2832;
  *(int *)(iVar13 + 8) = iVar1 + 8;
  iVar13 = *(int *)((int)&DepthPass + iVar5);
  **(undefined4 **)(iVar13 + 8) = 0x41744;
  iVar1 = *(int *)(iVar13 + 8);
  *(undefined4 *)(iVar1 + 4) = 0x2832;
  *(int *)(iVar13 + 8) = iVar1 + 8;
  iVar13 = *(int *)((int)&DepthPass + iVar5);
  **(undefined4 **)(iVar13 + 8) = 0x4174c;
  iVar1 = *(int *)(iVar13 + 8);
  *(undefined4 *)(iVar1 + 4) = 0x2844;
  *(int *)(iVar13 + 8) = iVar1 + 8;
  iVar1 = *(int *)((int)&DepthPass + iVar5);
  uVar9 = param_2 - *(int *)(iVar2 + 0x4a8);
  **(undefined4 **)(iVar1 + 8) = 0x41680;
  iVar2 = *(int *)(iVar1 + 8);
  *(uint *)(iVar2 + 4) = uVar9 | 0x80000000;
  *(int *)(iVar1 + 8) = iVar2 + 8;
  iVar1 = *(int *)((int)&DepthPass + iVar5);
  **(undefined4 **)(iVar1 + 8) = 0x41684;
  iVar2 = *(int *)(iVar1 + 8);
  *(uint *)(iVar2 + 4) = uVar9 + 0xc | 0x80000000;
  *(int *)(iVar1 + 8) = iVar2 + 8;
  iVar1 = *(int *)((int)&DepthPass + iVar5);
  **(undefined4 **)(iVar1 + 8) = 0x4168c;
  iVar2 = *(int *)(iVar1 + 8);
  *(uint *)(iVar2 + 4) = uVar9 + 0x24 | 0x80000000;
  *(int *)(iVar1 + 8) = iVar2 + 8;
  iVar1 = *(int *)((int)&DepthPass + iVar5);
  **(undefined4 **)(iVar1 + 8) = 0x400c1714;
  *(undefined4 *)(*(int *)(iVar1 + 8) + 4) = 0;
  uVar10 = (param_1 - 0x100U & (longlong)((int)(param_1 - 0x100U) >> 0x1f)) + 0x100;
  *(undefined4 *)(*(int *)(iVar1 + 8) + 8) = 0;
  *(undefined4 *)(*(int *)(iVar1 + 8) + 0xc) = 0;
  uVar11 = param_1 - uVar10 & ~(longlong)((int)(param_1 - uVar10) >> 0x1f);
  uVar7 = (uVar11 << 0x20) >> 0x28;
  *(undefined4 *)(*(int *)(iVar1 + 8) + 0x10) = 0x41808;
  iVar2 = *(int *)(iVar1 + 8);
  uVar12 = uVar11 - (uVar11 & 0xffffff00);
  iVar13 = (int)uVar12;
  *(undefined4 *)(iVar2 + 0x14) = 6;
  *(int *)(iVar1 + 8) = iVar2 + 0x18;
  iVar2 = *(int *)((int)&DepthPass + iVar5);
  puVar3 = *(uint **)(iVar2 + 8);
  *puVar3 = (((uint)uVar11 >> 8) + ((iVar13 != 0)) +
            (((int)uVar10 != 0))) * 0x40000 | 0x40001814;
  *(uint **)(iVar2 + 8) = puVar3 + 1;
  uVar8 = 0;
  if ((int)uVar10 != 0) {
    piVar4 = *(int **)(iVar2 + 8);
    *piVar4 = (int)((uVar10 & 0xffffffff) << 0x18) + -0x1000000;
    *(int **)(iVar2 + 8) = piVar4 + 1;
    uVar8 = uVar10;
  }
  uVar9 = (uint)uVar8;
  if ((uint)uVar11 >> 8 != 0) {
    do {
      puVar3 = *(uint **)(iVar2 + 8);
      uVar6 = (uint)uVar8;
      uVar7 = uVar7 - 1;
      uVar8 = uVar8 + 0x100;
      uVar9 = (uint)uVar8;
      *puVar3 = uVar6 | 0xff000000;
      *(uint **)(iVar2 + 8) = puVar3 + 1;
    } while (0 < (int)uVar7);
  }
  if (iVar13 != 0) {
    puVar3 = *(uint **)(iVar2 + 8);
    *puVar3 = uVar9 | (int)((uVar12 & 0xffffffff) << 0x18) - 0x1000000U;
    *(uint **)(iVar2 + 8) = puVar3 + 1;
  }
  iVar1 = *(int *)((int)&DepthPass + iVar5);
  **(undefined4 **)(iVar1 + 8) = 0x41808;
  iVar2 = *(int *)(iVar1 + 8);
  *(undefined4 *)(iVar2 + 4) = 0;
  *(int *)(iVar1 + 8) = iVar2 + 8;
  iVar1 = *(int *)((int)&DepthPass + iVar5);
  **(undefined4 **)(iVar1 + 8) = 0x41740;
  iVar2 = *(int *)(iVar1 + 8);
  *(undefined4 *)(iVar2 + 4) = 2;
  *(int *)(iVar1 + 8) = iVar2 + 8;
  iVar1 = *(int *)((int)&DepthPass + iVar5);
  **(undefined4 **)(iVar1 + 8) = 0x41744;
  iVar2 = *(int *)(iVar1 + 8);
  *(undefined4 *)(iVar2 + 4) = 2;
  *(int *)(iVar1 + 8) = iVar2 + 8;
  iVar1 = *(int *)((int)&DepthPass + iVar5);
  **(undefined4 **)(iVar1 + 8) = 0x4174c;
  iVar2 = *(int *)(iVar1 + 8);
  *(undefined4 *)(iVar2 + 4) = 2;
  *(int *)(iVar1 + 8) = iVar2 + 8;
  return;
}


// 0x0073de0 (0x330 bytes)
void DrawLavaStrips
               (double param_1,longlong param_2,undefined4 *param_3,uint *param_4,
               undefined4 *param_5,undefined4 *param_6,undefined4 param_7,undefined4 param_8,
               undefined8 param_9)

{
  uint uVar1;
  RenderingStep *pRVar2;
  RsxCmd *pRVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  RsxCmd *pRVar7;
  int iVar8;
  undefined4 *puVar9;
  RsxCmd *pRVar10;
  longlong lVar11;
  undefined8 in_stack_00000070;
  int in_stack_00000084;
  RsxCmd local_c0 [16];
  
  puVar5 = (undefined4 *)
           idol::AllocateMemAlign(FrameHeap,(int)(param_2 << 5) + (int)(param_2 << 3),0x10);
  iVar8 = EffectTexHeaders;
  pRVar2 = (&DepthPass)[in_stack_00000084];
  iVar6 = GetEffectTex(param_7);
  FUN_004d676c(pRVar2,0,iVar8 + iVar6 * 0x24,1,1);
  iVar8 = EffectTexHeaders;
  if ((in_stack_00000084 == 2) || (in_stack_00000084 == 9)) {
    pRVar2 = (&DepthPass)[in_stack_00000084];
    iVar6 = GetEffectTex(param_8);
    FUN_004d676c(pRVar2,1,iVar8 + iVar6 * 0x24,1,1);
  }
  pRVar2 = (&DepthPass)[in_stack_00000084];
  *pRVar2->command = 0x441efc;
  pRVar10 = local_c0;
  lVar11 = 8;
  pRVar2->command[1] = 4;
  pRVar7 = pRVar2->command + 2;
  pRVar2->command = pRVar7;
  do {
    *pRVar7 = *pRVar10;
    pRVar7 = pRVar2->command;
    pRVar2->command = pRVar7 + 1;
    pRVar3 = pRVar10 + 1;
    pRVar10 = pRVar10 + 2;
    pRVar7[1] = *pRVar3;
    pRVar7 = pRVar2->command + 1;
    pRVar2->command = pRVar7;
    lVar11 = lVar11 + -1;
  } while (lVar11 != 0);
  iVar8 = (int)param_2;
  lVar11 = param_2;
  puVar9 = puVar5;
  while (0 < iVar8) {
    lVar11 = lVar11 + -1;
    *puVar9 = *param_3;
    puVar9[1] = param_3[1];
    puVar4 = param_3 + 2;
    param_3 = param_3 + 3;
    puVar9[2] = *puVar4;
    uVar1 = *param_4;
    puVar9[3] = *param_5;
    param_4 = param_4 + 4;
    puVar9[4] = param_5[1];
    param_5 = param_5 + 2;
    puVar9[6] = *param_6;
    puVar4 = param_6 + 1;
    param_6 = param_6 + 2;
    puVar9[7] = *puVar4;
    puVar9[8] = (float)param_1;
    puVar9[5] = (float)param_1;
    puVar9[9] = uVar1 >> 0x18 | uVar1 >> 8 & 0xff00 | uVar1 << 0x18 | (uVar1 & 0xff00) << 8;
    puVar9 = puVar9 + 10;
    iVar8 = (int)lVar11;
  }
  idol_draw::DrawDepth((&DepthPass)[in_stack_00000084],param_9);
  FastDrawStrip2UV_PassNoState(param_2,puVar5,in_stack_00000084);
  if ((in_stack_00000084 == 2) || (in_stack_00000084 == 9)) {
    idol_draw::DrawDepth((&DepthPass)[in_stack_00000084],in_stack_00000070);
    FastDrawStrip2UV_Pass(param_2,puVar5,in_stack_00000084);
  }
  return;
}


// 0x0074150 (0x450 bytes)
void FastDrawStripColor(int param_1,void *param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint *puVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar8;
  ulonglong uVar7;
  uint uVar10;
  ulonglong uVar9;
  undefined4 *puVar12;
  ulonglong uVar11;
  int iVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  int iVar16;
  longlong lVar17;
  undefined4 local_70 [16];
  
  iVar2 = g_pIdolDraw;
  iVar5 = (int)(param_3 << 2);
  idol_draw::ResetPassState(*(undefined4 *)((int)&DepthPass + iVar5));
  iVar13 = (int)param_3;
  if ((iVar13 == 2) || (iVar13 == 9)) {
    idol_draw::BindVertexProgram(iVar2,*(undefined4 *)((int)&DepthPass + iVar5),4);
    idol_draw::BindFragmentProgram(iVar2,*(undefined4 *)((int)&DepthPass + iVar5),6);
  }
  else if ((iVar13 == 0) || (iVar13 == 8)) {
    iVar13 = *(int *)((int)&DepthPass + iVar5);
    **(undefined4 **)(iVar13 + 8) = 0x441efc;
    puVar12 = local_70;
    lVar17 = 8;
    *(undefined4 *)(*(int *)(iVar13 + 8) + 4) = 4;
    puVar8 = (undefined4 *)(*(int *)(iVar13 + 8) + 8);
    *(undefined4 **)(iVar13 + 8) = puVar8;
    do {
      *puVar8 = *puVar12;
      iVar16 = *(int *)(iVar13 + 8);
      uVar1 = puVar12[1];
      puVar12 = puVar12 + 2;
      *(int *)(iVar13 + 8) = iVar16 + 4;
      *(undefined4 *)(iVar16 + 4) = uVar1;
      puVar8 = (undefined4 *)(*(int *)(iVar13 + 8) + 4);
      *(undefined4 **)(iVar13 + 8) = puVar8;
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
  }
  iVar16 = *(int *)((int)&DepthPass + iVar5);
  **(undefined4 **)(iVar16 + 8) = 0x41740;
  iVar13 = *(int *)(iVar16 + 8);
  *(undefined4 *)(iVar13 + 4) = 0x1832;
  *(int *)(iVar16 + 8) = iVar13 + 8;
  iVar16 = *(int *)((int)&DepthPass + iVar5);
  **(undefined4 **)(iVar16 + 8) = 0x41744;
  iVar13 = *(int *)(iVar16 + 8);
  *(undefined4 *)(iVar13 + 4) = 0x1822;
  *(int *)(iVar16 + 8) = iVar13 + 8;
  iVar16 = *(int *)((int)&DepthPass + iVar5);
  **(undefined4 **)(iVar16 + 8) = 0x4174c;
  iVar13 = *(int *)(iVar16 + 8);
  *(undefined4 *)(iVar13 + 4) = 0x1844;
  *(int *)(iVar16 + 8) = iVar13 + 8;
  iVar13 = *(int *)((int)&DepthPass + iVar5);
  uVar10 = param_2 - *(int *)(iVar2 + 0x4a8);
  **(undefined4 **)(iVar13 + 8) = 0x41680;
  iVar2 = *(int *)(iVar13 + 8);
  *(uint *)(iVar2 + 4) = uVar10 | 0x80000000;
  *(int *)(iVar13 + 8) = iVar2 + 8;
  iVar13 = *(int *)((int)&DepthPass + iVar5);
  **(undefined4 **)(iVar13 + 8) = 0x41684;
  iVar2 = *(int *)(iVar13 + 8);
  *(uint *)(iVar2 + 4) = uVar10 + 0xc | 0x80000000;
  *(int *)(iVar13 + 8) = iVar2 + 8;
  iVar13 = *(int *)((int)&DepthPass + iVar5);
  **(undefined4 **)(iVar13 + 8) = 0x4168c;
  iVar2 = *(int *)(iVar13 + 8);
  *(uint *)(iVar2 + 4) = uVar10 + 0x14 | 0x80000000;
  *(int *)(iVar13 + 8) = iVar2 + 8;
  iVar13 = *(int *)((int)&DepthPass + iVar5);
  **(undefined4 **)(iVar13 + 8) = 0x400c1714;
  *(undefined4 *)(*(int *)(iVar13 + 8) + 4) = 0;
  uVar11 = (param_1 - 0x100U & (longlong)((int)(param_1 - 0x100U) >> 0x1f)) + 0x100;
  *(undefined4 *)(*(int *)(iVar13 + 8) + 8) = 0;
  *(undefined4 *)(*(int *)(iVar13 + 8) + 0xc) = 0;
  uVar14 = param_1 - uVar11 & ~(longlong)((int)(param_1 - uVar11) >> 0x1f);
  uVar7 = (uVar14 << 0x20) >> 0x28;
  *(undefined4 *)(*(int *)(iVar13 + 8) + 0x10) = 0x41808;
  iVar2 = *(int *)(iVar13 + 8);
  uVar15 = uVar14 - (uVar14 & 0xffffff00);
  iVar16 = (int)uVar15;
  *(undefined4 *)(iVar2 + 0x14) = 6;
  *(int *)(iVar13 + 8) = iVar2 + 0x18;
  iVar2 = *(int *)((int)&DepthPass + iVar5);
  puVar3 = *(uint **)(iVar2 + 8);
  *puVar3 = (((uint)uVar14 >> 8) + ((iVar16 != 0)) +
            (((int)uVar11 != 0))) * 0x40000 | 0x40001814;
  *(uint **)(iVar2 + 8) = puVar3 + 1;
  uVar9 = 0;
  if ((int)uVar11 != 0) {
    piVar4 = *(int **)(iVar2 + 8);
    *piVar4 = (int)((uVar11 & 0xffffffff) << 0x18) + -0x1000000;
    *(int **)(iVar2 + 8) = piVar4 + 1;
    uVar9 = uVar11;
  }
  uVar10 = (uint)uVar9;
  if ((uint)uVar14 >> 8 != 0) {
    do {
      puVar3 = *(uint **)(iVar2 + 8);
      uVar6 = (uint)uVar9;
      uVar7 = uVar7 - 1;
      uVar9 = uVar9 + 0x100;
      uVar10 = (uint)uVar9;
      *puVar3 = uVar6 | 0xff000000;
      *(uint **)(iVar2 + 8) = puVar3 + 1;
    } while (0 < (int)uVar7);
  }
  if (iVar16 != 0) {
    puVar3 = *(uint **)(iVar2 + 8);
    *puVar3 = uVar10 | (int)((uVar15 & 0xffffffff) << 0x18) - 0x1000000U;
    *(uint **)(iVar2 + 8) = puVar3 + 1;
  }
  iVar13 = *(int *)((int)&DepthPass + iVar5);
  **(undefined4 **)(iVar13 + 8) = 0x41808;
  iVar2 = *(int *)(iVar13 + 8);
  *(undefined4 *)(iVar2 + 4) = 0;
  *(int *)(iVar13 + 8) = iVar2 + 8;
  iVar13 = *(int *)((int)&DepthPass + iVar5);
  **(undefined4 **)(iVar13 + 8) = 0x41740;
  iVar2 = *(int *)(iVar13 + 8);
  *(undefined4 *)(iVar2 + 4) = 2;
  *(int *)(iVar13 + 8) = iVar2 + 8;
  iVar13 = *(int *)((int)&DepthPass + iVar5);
  **(undefined4 **)(iVar13 + 8) = 0x41744;
  iVar2 = *(int *)(iVar13 + 8);
  *(undefined4 *)(iVar2 + 4) = 2;
  *(int *)(iVar13 + 8) = iVar2 + 8;
  iVar2 = *(int *)((int)&DepthPass + iVar5);
  **(undefined4 **)(iVar2 + 8) = 0x4174c;
  iVar5 = *(int *)(iVar2 + 8);
  *(undefined4 *)(iVar5 + 4) = 2;
  *(int *)(iVar2 + 8) = iVar5 + 8;
  return;
}


// 0x00745a0 (0x1c bytes)
bool ____Draw_IsFlagMode2(ulonglong param_1)

{
  return (param_1 & 0x30) == 0x20;
}


// 0x00745bc (0x48 bytes)
undefined8 ____Draw_IsBlendModeMatch(ulonglong param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (((((param_1 & 3) == 0) && (((uint)(param_1 >> 2) & 3) == 1)) &&
      (((uint)(param_1 >> 6) & 3) == 1)) &&
     (((param_1 >> 4 & 3) == 0 || (((uint)(param_1 >> 4) & 3) == 2)))) {
    uVar1 = 1;
  }
  return uVar1;
}


// 0x0074604 (0x13c bytes)
void DrawMeshSet(ulonglong param_1,undefined4 *param_2,uint *param_3,undefined4 *param_4,
                      ulonglong param_5)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar5;
  ulonglong uVar4;
  undefined4 *puVar6;
  ulonglong uVar7;
  
  uVar7 = (param_5 << 0x20) >> 0x24 & 0xf;
  puVar5 = (undefined4 *)idol::AllocateMemAlign(FrameHeap,(int)(param_1 << 3) * 3,0x10);
  uVar4 = 0;
  puVar6 = puVar5;
  if ((int)param_1 != 0) {
    do {
      uVar4 = uVar4 + 1;
      uVar2 = *param_3;
      *puVar6 = *param_2;
      puVar6[1] = param_2[1];
      param_3 = param_3 + 1;
      puVar3 = param_2 + 2;
      param_2 = param_2 + 3;
      puVar6[2] = *puVar3;
      puVar6[3] = *param_4;
      uVar1 = param_4[1];
      puVar6[5] = uVar2 >> 0x18 | uVar2 >> 8 & 0xff00 | uVar2 << 0x18 | (uVar2 & 0xff00) << 8;
      param_4 = param_4 + 2;
      puVar6[4] = uVar1;
      puVar6 = puVar6 + 6;
    } while ((uVar4 & 0xffffffff) < (param_1 & 0xffffffff));
  }
  if ((int)(param_5 & 0xf) != 0) {
    FastDrawStripColor(param_1,puVar5,param_5 & 0xf);
  }
  if ((int)uVar7 != 0) {
    FastDrawStripColor(param_1,puVar5,uVar7);
  }
  return;
}


// 0x0074780 (0x460 bytes)
void FastDrawStripFog(int param_1,void *param_2,int param_3)

{
  int iVar1;
  uint *puVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar8;
  ulonglong uVar7;
  uint uVar10;
  ulonglong uVar9;
  undefined4 *puVar12;
  ulonglong uVar11;
  int iVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  int iVar16;
  longlong lVar17;
  undefined4 local_70 [16];
  
  iVar16 = g_pIdolDraw;
  iVar5 = (int)(param_3 << 2);
  iVar4 = *(int *)((int)&DepthPass + iVar5);
  puVar12 = local_70;
  iVar13 = (int)param_3;
  **(undefined4 **)(iVar4 + 8) = 0x441efc;
  lVar17 = 8;
  *(undefined4 *)(*(int *)(iVar4 + 8) + 4) = 4;
  puVar8 = (undefined4 *)(*(int *)(iVar4 + 8) + 8);
  *(undefined4 **)(iVar4 + 8) = puVar8;
  do {
    *puVar8 = *puVar12;
    iVar1 = *(int *)(iVar4 + 8);
    *(int *)(iVar4 + 8) = iVar1 + 4;
    puVar8 = puVar12 + 1;
    puVar12 = puVar12 + 2;
    *(undefined4 *)(iVar1 + 4) = *puVar8;
    puVar8 = (undefined4 *)(*(int *)(iVar4 + 8) + 4);
    *(undefined4 **)(iVar4 + 8) = puVar8;
    lVar17 = lVar17 + -1;
  } while (lVar17 != 0);
  if (((iVar13 == 1) || (iVar13 == 2)) || (iVar13 == 9)) {
    idol_draw::BindVertexProgram(iVar16,*(undefined4 *)((int)&DepthPass + iVar5),7);
    idol_draw::BindFragmentProgram(iVar16,*(undefined4 *)((int)&DepthPass + iVar5),7);
  }
  iVar4 = *(int *)((int)&DepthPass + iVar5);
  **(undefined4 **)(iVar4 + 8) = 0x41740;
  *(undefined4 *)(*(int *)(iVar4 + 8) + 4) = 0x1c32;
  *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + 8;
  iVar4 = *(int *)((int)&DepthPass + iVar5);
  **(undefined4 **)(iVar4 + 8) = 0x41744;
  *(undefined4 *)(*(int *)(iVar4 + 8) + 4) = 0x1c32;
  *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + 8;
  iVar4 = *(int *)((int)&DepthPass + iVar5);
  **(undefined4 **)(iVar4 + 8) = 0x4174c;
  *(undefined4 *)(*(int *)(iVar4 + 8) + 4) = 0x1c44;
  *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + 8;
  iVar4 = *(int *)((int)&DepthPass + iVar5);
  uVar10 = param_2 - *(int *)(iVar16 + 0x4a8);
  **(undefined4 **)(iVar4 + 8) = 0x41680;
  *(uint *)(*(int *)(iVar4 + 8) + 4) = uVar10 | 0x80000000;
  *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + 8;
  iVar4 = *(int *)((int)&DepthPass + iVar5);
  **(undefined4 **)(iVar4 + 8) = 0x41684;
  *(uint *)(*(int *)(iVar4 + 8) + 4) = uVar10 + 0xc | 0x80000000;
  *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + 8;
  iVar4 = *(int *)((int)&DepthPass + iVar5);
  **(undefined4 **)(iVar4 + 8) = 0x4168c;
  *(uint *)(*(int *)(iVar4 + 8) + 4) = uVar10 + 0x18 | 0x80000000;
  *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + 8;
  iVar4 = *(int *)((int)&DepthPass + iVar5);
  **(undefined4 **)(iVar4 + 8) = 0x400c1714;
  *(undefined4 *)(*(int *)(iVar4 + 8) + 4) = 0;
  *(undefined4 *)(*(int *)(iVar4 + 8) + 8) = 0;
  uVar11 = (param_1 - 0x100U & (longlong)((int)(param_1 - 0x100U) >> 0x1f)) + 0x100;
  *(undefined4 *)(*(int *)(iVar4 + 8) + 0xc) = 0;
  uVar14 = param_1 - uVar11 & ~(longlong)((int)(param_1 - uVar11) >> 0x1f);
  *(undefined4 *)(*(int *)(iVar4 + 8) + 0x10) = 0x41808;
  uVar7 = (uVar14 << 0x20) >> 0x28;
  uVar15 = uVar14 - (uVar14 & 0xffffff00);
  iVar16 = (int)uVar15;
  *(undefined4 *)(*(int *)(iVar4 + 8) + 0x14) = 6;
  *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + 0x18;
  iVar4 = *(int *)((int)&DepthPass + iVar5);
  puVar2 = *(uint **)(iVar4 + 8);
  *(uint **)(iVar4 + 8) = puVar2 + 1;
  *puVar2 = (((uint)uVar14 >> 8) + ((iVar16 != 0)) +
            (((int)uVar11 != 0))) * 0x40000 | 0x40001814;
  uVar9 = 0;
  if ((int)uVar11 != 0) {
    piVar3 = *(int **)(iVar4 + 8);
    *(int **)(iVar4 + 8) = piVar3 + 1;
    *piVar3 = (int)((uVar11 & 0xffffffff) << 0x18) + -0x1000000;
    uVar9 = uVar11;
  }
  uVar10 = (uint)uVar9;
  if ((uint)uVar14 >> 8 != 0) {
    do {
      puVar2 = *(uint **)(iVar4 + 8);
      uVar6 = (uint)uVar9;
      uVar7 = uVar7 - 1;
      uVar9 = uVar9 + 0x100;
      uVar10 = (uint)uVar9;
      *(uint **)(iVar4 + 8) = puVar2 + 1;
      *puVar2 = uVar6 | 0xff000000;
    } while (0 < (int)uVar7);
  }
  if (iVar16 != 0) {
    puVar2 = *(uint **)(iVar4 + 8);
    *(uint **)(iVar4 + 8) = puVar2 + 1;
    *puVar2 = uVar10 | (int)((uVar15 & 0xffffffff) << 0x18) - 0x1000000U;
  }
  iVar4 = *(int *)((int)&DepthPass + iVar5);
  **(undefined4 **)(iVar4 + 8) = 0x41808;
  *(undefined4 *)(*(int *)(iVar4 + 8) + 4) = 0;
  *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + 8;
  iVar4 = *(int *)((int)&DepthPass + iVar5);
  **(undefined4 **)(iVar4 + 8) = 0x41740;
  *(undefined4 *)(*(int *)(iVar4 + 8) + 4) = 2;
  *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + 8;
  iVar4 = *(int *)((int)&DepthPass + iVar5);
  **(undefined4 **)(iVar4 + 8) = 0x41744;
  *(undefined4 *)(*(int *)(iVar4 + 8) + 4) = 2;
  *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + 8;
  iVar4 = *(int *)((int)&DepthPass + iVar5);
  **(undefined4 **)(iVar4 + 8) = 0x4174c;
  *(undefined4 *)(*(int *)(iVar4 + 8) + 4) = 2;
  *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + 8;
  return;
}


// 0x0074be0 (0x108 bytes)
void DrawOceanStrip(float param_1,int param_2,Vec3 *param_3,u32 *param_4,Vec2 *param_5)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar5;
  ulonglong uVar4;
  undefined4 *puVar6;
  
  puVar5 = (undefined4 *)
           idol::AllocateMemAlign(FrameHeap,(int)(param_2 << 5) - (int)(param_2 << 2),0x10);
  uVar4 = 0;
  puVar6 = puVar5;
  if ((int)param_2 != 0) {
    do {
      uVar4 = uVar4 + 1;
      *puVar6 = *param_3;
      uVar2 = *param_4;
      puVar6[1] = param_3[1];
      param_4 = param_4 + 1;
      puVar3 = param_3 + 2;
      param_3 = param_3 + 3;
      puVar6[2] = *puVar3;
      puVar6[3] = *param_5;
      uVar1 = param_5[1];
      puVar6[5] = (float)param_1;
      param_5 = param_5 + 2;
      puVar6[4] = uVar1;
      puVar6[6] = uVar2 >> 0x18 | uVar2 >> 8 & 0xff00 | uVar2 << 0x18 | (uVar2 & 0xff00) << 8;
      puVar6 = puVar6 + 7;
    } while ((uVar4 & 0xffffffff) < (param_2 & 0xffffffff));
  }
  FastDrawStripFog(param_2,puVar5,9);
  return;
}


// 0x0074ce8 (0x4 bytes)
void STUB_00074ce8(...)

{
  return;
}


// 0x0074cec (0x4 bytes)
void STUB_00074cec(...)

{
  return;
}


// 0x0074cf0 (0xc8 bytes)
int ImpactSprite_Add
              (double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              undefined2 param_5)

{
  int iVar1;
  double dVar2;
  undefined4 uStack00000030;
  undefined4 uStack00000034;
  undefined4 uStack00000038;
  undefined4 uStack0000003c;
  
  iVar1 = 0;
  uStack00000034 = (undefined4)param_2;
  uStack0000003c = (undefined4)param_3;
  uStack00000030 = (undefined4)((ulonglong)param_2 >> 0x20);
  uStack00000038 = (undefined4)((ulonglong)param_3 >> 0x20);
  do {
    if ((short)(&DAT_0095ee50)[iVar1 * 0x10] < 1) {
      (&DAT_0095ee50)[iVar1 * 0x10] = 0x18;
      *(undefined2 *)(&DAT_0095ee54 + iVar1 * 0x20) = param_5;
      (&DAT_0095ee40)[iVar1 * 8] = uStack00000030;
      (&DAT_0095ee44)[iVar1 * 8] = uStack00000034;
      (&DAT_0095ee48)[iVar1 * 8] = uStack00000038;
      (&DAT_0095ee4c)[iVar1 * 8] = uStack0000003c;
      (&DAT_0095ee5c)[iVar1 * 8] = (float)param_1;
      _uStack00000030 = param_2;
      _uStack00000038 = param_3;
      dVar2 = (double)MB_randRot();
      (&DAT_0095ee58)[iVar1 * 8] = (float)dVar2;
      return iVar1;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x20);
  return -1;
}


// 0x0074dc0 (0xec bytes)
void ImpactSprite_Update(void)

{
  short sVar1;
  short sVar2;
  int iVar3;
  short *psVar4;
  undefined4 *puVar5;
  double dVar6;
  double dVar7;
  
  psVar4 = &DAT_0095ee50;
  iVar3 = 0;
  puVar5 = &DAT_0095ee40;
  dVar7 = 5.235987663269043;
  do {
    if (0 < *psVar4) {
      dVar6 = (double)FastDiffRots
                                ((double)(float)puVar5[6],
                                 (double)(float)((double)g_FrameTime * dVar7));
      puVar5[6] = (float)dVar6;
      if (*(short *)(puVar5 + 4) < 0xd) {
        sVar2 = *(short *)((int)puVar5 + 0x12) + -5;
      }
      else {
        sVar2 = *(short *)((int)puVar5 + 0x12) + 5;
      }
      sVar1 = *(short *)(puVar5 + 4) + -1;
      *(short *)((int)puVar5 + 0x12) = sVar2;
      *(short *)(puVar5 + 4) = sVar1;
      if (sVar1 < 1) {
        FastMemSet(puVar5,0,0x20);
      }
    }
    iVar3 = iVar3 + 1;
    psVar4 = psVar4 + 0x10;
    puVar5 = puVar5 + 8;
  } while (iVar3 < 0x20);
  return;
}


// 0x0074fa0 (0x92c bytes)
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ImpactSprite_Draw(void)

{
  longlong lVar1;
  ushort uVar2;
  ulonglong *puVar3;
  RenderingStep *pRVar4;
  int iVar5;
  longlong lVar6;
  undefined4 *puVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  int iVar11;
  ulonglong uVar10;
  ulonglong unaff_r20;
  ulonglong unaff_r21;
  ulonglong unaff_r22;
  ulonglong uVar12;
  ulonglong unaff_r23;
  ulonglong uVar13;
  ulonglong unaff_r24;
  ulonglong uVar14;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong uVar15;
  ulonglong unaff_r27;
  short *psVar16;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  undefined *puVar17;
  ulonglong unaff_r31;
  int iVar18;
  ulonglong in_LR;
  double dVar19;
  ulonglong in_f28;
  double dVar20;
  ulonglong in_f29;
  double dVar21;
  ulonglong in_f30;
  double dVar22;
  ulonglong in_f31;
  undefined4 uVar23;
  undefined4 uVar25;
  undefined4 uVar26;
  GPiece<16> auVar24;
  GPiece<16> auVar27;
  GPiece<16> auVar28;
  GPiece<16> auVar29;
  GPiece<16> auVar30;
  GPiece<16> auVar31;
  GPiece<16> auVar32;
  GPiece<16> auVar33;
  GPiece<16> auVar34;
  GPiece<16> auVar35;
  GPiece<16> auVar36;
  GPiece<16> auVar37;
  GPiece<16> auVar38;
  GPiece<16> auVar39;
  GPiece<16> auVar40;
  GPiece<16> auVar41;
  GPiece<16> auVar42;
  GPiece<16> auVar43;
  GPiece<16> auVar44;
  GPiece<16> auVar45;
  GPiece<16> auVar46;
  GPiece<16> auVar47;
  GPiece<16> auVar48;
  GPiece<16> auVar49;
  undefined4 in_vr31_32_0;
  undefined4 in_vr31_32_1;
  undefined4 in_vr31_32_2;
  undefined4 in_vr31_32_3;
  
  uVar8 = ZEXT48(&stack0x00000000);
  lVar1 = uVar8 - 0x390;
  puVar3 = (ulonglong *)lVar1;
  *puVar3 = uVar8;
  puVar3[0x74] = in_LR;
  puVar3[0x6e] = in_f28;
  puVar3[0x6f] = in_f29;
  puVar3[0x70] = in_f30;
  puVar3[0x71] = in_f31;
  lVar6 = uVar8 - 0x90;
  puVar7 = (undefined4 *)lVar6;
  puVar7[3] = in_vr31_32_3;
  puVar7[2] = in_vr31_32_2;
  puVar7[1] = in_vr31_32_1;
  *puVar7 = in_vr31_32_0;
  puVar3[0x6b] = unaff_r29;
  puVar3[0x6c] = unaff_r30;
  puVar3[0x6d] = unaff_r31;
  iVar5 = g_pIdolDrawBase;
  puVar3[0x6a] = unaff_r28;
  pRVar4 = DL_Pass;
  puVar3[0x69] = unaff_r27;
  puVar3[0x68] = unaff_r26;
  puVar3[0x67] = unaff_r25;
  puVar3[0x66] = unaff_r24;
  puVar3[0x65] = unaff_r23;
  puVar3[100] = unaff_r22;
  puVar3[99] = unaff_r21;
  puVar3[0x62] = unaff_r20;
  uVar9 = idol_draw::PackCmd(0,2,0,1,0x80);
  idol_draw::DrawDepth(pRVar4,uVar9);
  iVar18 = EffectTexHeaders;
  pRVar4 = DL_Pass;
  iVar11 = GetEffectTex(0x13);
  FUN_004d676c(pRVar4,0,iVar18 + iVar11 * 0x24,3,3);
  auVar49 = _DAT_00074ee0;
  auVar45 = _DAT_00074ed0;
  auVar46 = _DAT_00074ec0;
  auVar24 = *(undefined1 (*) [16])(iVar5 + 0xa0U & 0xfffffff0);
  auVar27 = *(undefined1 (*) [16])(iVar5 + 0xb0U & 0xfffffff0);
  auVar28 = *(undefined1 (*) [16])(iVar5 + 0xc0U & 0xfffffff0);
  auVar29 = *(undefined1 (*) [16])(iVar5 + 0xd0U & 0xfffffff0);
  auVar30 = vectorPermute(auVar24,auVar28,_DAT_00074eb0);
  auVar32 = vectorPermute(auVar27,auVar29,_DAT_00074eb0);
  auVar33 = vectorPermute(auVar27,auVar28,_DAT_00074eb0);
  auVar35 = vectorPermute(auVar29,auVar24,_DAT_00074eb0);
  auVar47 = vectorMergeHighWord(auVar30,auVar32);
  auVar30 = ZEXT416(0);
  auVar31 = auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60;
  auVar35 = vectorPermute(auVar33,auVar35,_DAT_00074ed0);
  auVar33 = vectorPermute(auVar24,auVar28,_DAT_00074f00);
  auVar36 = vectorMultiplyAddFloatingPoint(auVar47,auVar47,auVar31);
  auVar38 = vectorPermute(auVar27,auVar29,_DAT_00074f00);
  auVar30 = vectorPermute(auVar28,auVar29,_DAT_00074eb0);
  auVar32 = vectorPermute(auVar24,auVar28,_DAT_00074f10);
  auVar48 = vectorMergeHighWord(auVar33,auVar38);
  auVar38 = vectorPermute(auVar27,auVar29,_DAT_00074f10);
  auVar33 = vectorPermute(auVar24,auVar27,_DAT_00074eb0);
  auVar44 = vectorPermute(auVar29,auVar24,_DAT_00074f10);
  auVar39 = vectorPermute(auVar27,auVar28,_DAT_00074f00);
  auVar38 = vectorMergeHighWord(auVar32,auVar38);
  auVar33 = vectorPermute(auVar30,auVar33,_DAT_00074ed0);
  auVar35 = vectorMultiplyAddFloatingPoint(auVar35,auVar35,auVar36);
  auVar32 = vectorPermute(auVar27,auVar28,_DAT_00074f10);
  auVar36 = vectorMultiplyAddFloatingPoint(auVar48,auVar48,auVar31);
  auVar43 = vectorMultiplyAddFloatingPoint(auVar38,auVar38,auVar31);
  auVar30 = vectorPermute(auVar29,auVar24,_DAT_00074f00);
  auVar32 = vectorPermute(auVar32,auVar44,_DAT_00074ed0);
  auVar39 = vectorPermute(auVar39,auVar30,_DAT_00074ed0);
  auVar30 = vectorPermute(auVar28,auVar29,_DAT_00074f00);
  auVar28 = vectorPermute(auVar28,auVar29,_DAT_00074f10);
  auVar29 = vectorPermute(auVar24,auVar27,_DAT_00074f00);
  auVar24 = vectorPermute(auVar24,auVar27,_DAT_00074f10);
  auVar33 = vectorMultiplyAddFloatingPoint(auVar33,auVar33,auVar35);
  auVar35 = vectorMultiplyAddFloatingPoint(auVar39,auVar39,auVar36);
  auVar27 = vectorMultiplyAddFloatingPoint(auVar32,auVar32,auVar43);
  auVar24 = vectorPermute(auVar28,auVar24,_DAT_00074ed0);
  auVar28 = vectorPermute(auVar30,auVar29,_DAT_00074ed0);
  auVar30 = loadVectorLeftIndexed(0x40,0x74eb0);
  auVar32 = loadVectorLeftIndexed(0x44,0x74eb0);
  auVar30 = auVar30 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar44 = auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60;
  auVar30 = auVar32 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar43 = auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60;
  auVar30 = auVar33 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar32 = auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60;
  auVar30 = vectorMultiplyAddFloatingPoint(auVar28,auVar28,auVar35);
  auVar33 = vectorMultiplyAddFloatingPoint(auVar24,auVar24,auVar27);
  auVar27 = vectorReciprocalSquareRootEstimateFloatingPoint(auVar32);
  auVar30 = auVar30 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar24 = auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60;
  auVar30 = auVar33 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar33 = auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60;
  auVar28 = vectorReciprocalSquareRootEstimateFloatingPoint(auVar24);
  auVar30 = vectorMultiplyAddFloatingPoint(auVar27,auVar32,auVar31);
  auVar35 = vectorReciprocalSquareRootEstimateFloatingPoint(auVar33);
  auVar29 = vectorMultiplyAddFloatingPoint(auVar27,auVar44,auVar31);
  iVar18 = 0;
  uVar15 = ZEXT48(&DAT_0095ee40);
  psVar16 = &DAT_0095ee50;
  auVar30 = vectorNegativeMultiplySubtractFloatingPoint(auVar27,auVar30,auVar43);
  auVar24 = vectorMultiplyAddFloatingPoint(auVar28,auVar24,auVar31);
  auVar36 = vectorMultiplyAddFloatingPoint(auVar28,auVar44,auVar31);
  auVar32 = vectorMultiplyAddFloatingPoint(auVar35,auVar33,auVar31);
  auVar39 = vectorMultiplyAddFloatingPoint(auVar35,auVar44,auVar31);
  uVar14 = ZEXT48(&DAT_0095ee44);
  uVar13 = ZEXT48(&DAT_0095ee48);
  uVar12 = ZEXT48(&DAT_0095ee58);
  auVar30 = vectorMultiplyAddFloatingPoint(auVar30,auVar29,auVar27);
  auVar33 = vectorNegativeMultiplySubtractFloatingPoint(auVar28,auVar24,auVar43);
  auVar32 = vectorNegativeMultiplySubtractFloatingPoint(auVar35,auVar32,auVar43);
  auVar24 = vectorCompareEqualToFloatingPoint(auVar30,auVar30);
  auVar33 = vectorMultiplyAddFloatingPoint(auVar33,auVar36,auVar28);
  auVar30 = vectorConditionalSelect(auVar27,auVar30,auVar24);
  auVar36 = vectorMultiplyAddFloatingPoint(auVar47,auVar30,auVar31);
  auVar30 = vectorMultiplyAddFloatingPoint(auVar32,auVar39,auVar35);
  puVar7 = (undefined4 *)(iVar5 + 0x20U & 0xfffffff0);
  uVar26 = puVar7[2];
  uVar25 = puVar7[1];
  uVar23 = *puVar7;
  *(undefined4 *)((int)puVar3 + 0x23c) = puVar7[3];
  *(undefined4 *)(puVar3 + 0x47) = uVar26;
  *(undefined4 *)((int)puVar3 + 0x234) = uVar25;
  *(undefined4 *)(puVar3 + 0x46) = uVar23;
  auVar32 = vectorCompareEqualToFloatingPoint(auVar33,auVar33);
  auVar33 = vectorConditionalSelect(auVar28,auVar33,auVar32);
  auVar32 = vectorCompareEqualToFloatingPoint(auVar30,auVar30);
  auVar39 = vectorMultiplyAddFloatingPoint(auVar48,auVar33,auVar31);
  auVar30 = vectorConditionalSelect(auVar35,auVar30,auVar32);
  auVar32 = loadVectorLeftIndexed(0x78,0x74eb0);
  auVar33 = loadVectorLeftIndexed(0x84,0x74eb0);
  auVar27 = vectorMultiplyAddFloatingPoint(auVar38,auVar30,auVar31);
  auVar24 = loadVectorLeftIndexed(0x80,0x74eb0);
  auVar30 = auVar32 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar28 = loadVectorLeftIndexed(0x88,0x74eb0);
  auVar32 = auVar24 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar33 = auVar33 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar24 = auVar28 >> 0x60 & (GPiece<16>)0xffffffff;
  *(undefined1 (*) [16])(puVar3 + 0x48) = auVar27;
  auVar27 = loadVectorLeftIndexed(0x8c,0x74eb0);
  dVar22 = 0.015625;
  dVar21 = 0.47999998927116394;
  *(undefined1 (*) [16])(puVar3 + 0x24) =
       auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60;
  auVar28 = loadVectorLeftIndexed(0x90,0x74eb0);
  dVar20 = 0.0;
  *(undefined1 (*) [16])(puVar3 + 0x44) =
       auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
  auVar29 = loadVectorLeftIndexed(0x94,0x74eb0);
  auVar30 = auVar27 >> 0x60 & (GPiece<16>)0xffffffff;
  *(undefined1 (*) [16])(puVar3 + 0x42) =
       auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60;
  auVar32 = auVar28 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar33 = auVar29 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar35 = loadVectorLeftIndexed(0x7c,0x74eb0);
  auVar27 = loadVectorLeftIndexed(0x98,0x74eb0);
  auVar28 = loadVectorLeftIndexed(0x9c,0x74eb0);
  auVar27 = auVar27 >> 0x60 & (GPiece<16>)0xffffffff;
  *(undefined1 (*) [16])(puVar3 + 0x40) =
       auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60;
  auVar24 = auVar28 >> 0x60 & (GPiece<16>)0xffffffff;
  *(undefined1 (*) [16])(puVar3 + 0x3e) =
       auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60;
  *(undefined1 (*) [16])(puVar3 + 0x3c) =
       auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
  *(undefined1 (*) [16])(puVar3 + 0x3a) =
       auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60;
  auVar30 = loadVectorLeftIndexed(0xa0,0x74eb0);
  *(undefined1 (*) [16])(puVar3 + 0x38) =
       auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60;
  auVar32 = _DAT_00074f70;
  auVar30 = auVar30 >> 0x60 & (GPiece<16>)0xffffffff;
  *(undefined1 (*) [16])(puVar3 + 0x36) =
       auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60;
  auVar33 = _DAT_00074f80;
  auVar24 = vectorPermute(auVar36,auVar36,_DAT_00074f80);
  auVar28 = vectorPermute(auVar36,auVar36,auVar32);
  auVar29 = vectorPermute(auVar36,auVar36,auVar46);
  *(undefined1 (*) [16])(puVar3 + 0x34) =
       auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60;
  auVar38 = *(undefined1 (*) [16])(puVar3 + 0xe);
  auVar30 = vectorPermute(auVar39,auVar39,auVar33);
  *(undefined4 *)((int)puVar3 + 0x19c) = 0xffffffff;
  *(undefined4 *)(puVar3 + 0x33) = 0;
  *(undefined4 *)((int)puVar3 + 0x194) = 0;
  *(undefined4 *)(puVar3 + 0x32) = 0;
  auVar27 = vectorPermute(auVar39,auVar39,auVar32);
  auVar31 = vectorPermute(auVar39,auVar39,auVar46);
  *(undefined1 (*) [16])(puVar3 + 0x30) = auVar24;
  *(undefined1 (*) [16])(puVar3 + 0x2e) = auVar28;
  *(undefined1 (*) [16])(puVar3 + 0x2c) = auVar29;
  auVar24 = _DAT_00074f90;
  *(undefined1 (*) [16])(puVar3 + 0x2a) = auVar30;
  *(undefined1 (*) [16])(puVar3 + 0x28) = auVar27;
  auVar30 = auVar35 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar30 = auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60;
  *(undefined1 (*) [16])(puVar3 + 0x26) = auVar31;
  do {
    if (0 < *psVar16) {
      auVar29 = loadVectorLeftIndexed(lVar6,uVar15);
      auVar28 = loadVectorLeftIndexed(lVar6,uVar14);
      auVar31 = loadVectorLeftIndexed(lVar6,uVar13);
      auVar27 = vectorPermute(auVar29,auVar28,auVar24);
      auVar35 = vectorPermute(auVar31,auVar38,auVar24);
      auVar47 = vectorPermute(auVar27,auVar35,auVar45);
      auVar27 = ZEXT416(0);
      auVar35 = auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60;
      auVar38 = vectorSubtractFloatingPoint(*(undefined1 (*) [16])(puVar3 + 0x46),auVar47);
      auVar27 = auVar31 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar28 = auVar28 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar29 = auVar29 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar23 = storeVectorElementWordIndexed
                         (auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60,0x78,lVar1);
      *(undefined4 *)(puVar3 + 0xf) = uVar23;
      uVar23 = storeVectorElementWordIndexed
                         (auVar28 | auVar28 << 0x20 | auVar28 << 0x40 | auVar28 << 0x60,0x74,lVar1);
      *(undefined4 *)((int)puVar3 + 0x74) = uVar23;
      uVar23 = storeVectorElementWordIndexed
                         (auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60,0x70,lVar1);
      *(undefined4 *)(puVar3 + 0xe) = uVar23;
      auVar27 = vectorMultiplyAddFloatingPoint(auVar38,auVar38,auVar35);
      auVar28 = vectorPermute(auVar38,auVar38,auVar46);
      auVar29 = vectorPermute(auVar38,auVar38,auVar49);
      auVar27 = vectorMultiplyAddFloatingPoint(auVar28,auVar28,auVar27);
      auVar27 = vectorMultiplyAddFloatingPoint(auVar29,auVar29,auVar27);
      auVar27 = auVar27 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar27 = auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60;
      auVar29 = vectorReciprocalSquareRootEstimateFloatingPoint(auVar27);
      auVar27 = vectorMultiplyAddFloatingPoint(auVar29,auVar27,auVar35);
      auVar28 = vectorMultiplyAddFloatingPoint(auVar29,auVar44,auVar35);
      auVar27 = vectorNegativeMultiplySubtractFloatingPoint(auVar29,auVar27,auVar43);
      auVar28 = vectorMultiplyAddFloatingPoint(auVar27,auVar28,auVar29);
      auVar27 = vectorCompareEqualToFloatingPoint(auVar28,auVar28);
      auVar27 = vectorConditionalSelect(auVar29,auVar28,auVar27);
      auVar27 = vectorMultiplyAddFloatingPoint(auVar38,auVar27,auVar35);
      auVar27 = vectorMultiplyAddFloatingPoint(auVar27,auVar43,auVar35);
      auVar38 = vectorAddFloatingPoint(auVar47,auVar27);
      *(undefined1 (*) [16])(puVar3 + 0xe) = auVar38;
      uVar2 = *(ushort *)((int)uVar15 + 0x12);
      puVar17 = &DAT_00808080 + (uint)uVar2 * 0x1000000;
      dVar19 = (double)FastIntToDouble((longlong)(short)uVar2 + 0x10);
      dVar19 = (double)(float)((double)((float)(dVar19 * dVar22) * *(float *)((int)uVar15 + 0x1c)) *
                              dVar21);
      if (dVar20 < dVar19) {
        puVar3[0x1e] = 1;
        *(undefined **)((int)puVar3 + 0xcc) = puVar17;
        *(undefined **)(puVar3 + 0x19) = puVar17;
        *(undefined **)((int)puVar3 + 0xc4) = puVar17;
        *(undefined **)(puVar3 + 0x18) = puVar17;
        uVar10 = GetEffectTex(0x13);
        puVar3[0x1f] = uVar10;
        *(undefined4 *)(puVar3 + 0x1a) = 0;
        *(undefined4 *)(puVar3 + 0x1c) = 0;
        *(undefined4 *)((int)puVar3 + 0xd4) = 0;
        *(undefined4 *)(puVar3 + 0x1b) = 0x3f800000;
        *(undefined4 *)(puVar3 + 0x1d) = 0x3f800000;
        auVar27 = ZEXT416(0xffffffff);
        auVar27 = auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60;
        *(undefined4 *)((int)puVar3 + 0xdc) = 0;
        *(undefined4 *)((int)puVar3 + 0xe4) = 0x3f800000;
        *(undefined4 *)((int)puVar3 + 0xec) = 0x3f800000;
        auVar28 = vectorShiftLeftIntegerWord(auVar27,auVar27);
        puVar3[0x21] = 0;
        auVar29 = loadVectorLeftIndexed(lVar6,uVar12);
        auVar27 = ZEXT416(0);
        auVar47 = auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60;
        auVar28 = vectorMultiplyAddFloatingPoint
                            (auVar29,*(undefined1 (*) [16])(puVar3 + 0x24),auVar28);
        auVar27 = ZEXT416(3);
        auVar28 = auVar28 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar29 = vectorMultiplyAddFloatingPoint
                            (auVar28 | auVar28 << 0x20 | auVar28 << 0x40 | auVar28 << 0x60,auVar44,
                             auVar47);
        auVar28 = ZEXT416(2);
        auVar28 = auVar28 | auVar28 << 0x20 | auVar28 << 0x40 | auVar28 << 0x60;
        auVar31 = vectorMultiplyAddFloatingPoint
                            (auVar29,*(undefined1 (*) [16])(puVar3 + 0x44),auVar47);
        auVar35 = vectorConditionalSelect(auVar44,auVar31,auVar30);
        auVar31 = vectorAddFloatingPoint(auVar31,auVar35);
        auVar31 = vectorConvertToSignedFixedPointWordSaturate(auVar31,0);
        auVar35 = vectorConvertFromSignedFixedPointWord(auVar31,0);
        auVar31 = vectorLogicalAnd(auVar31,auVar27 | auVar27 << 0x20 | auVar27 << 0x40 |
                                           auVar27 << 0x60);
        auVar27 = ZEXT416(1);
        auVar40 = auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60;
        auVar27 = vectorNegativeMultiplySubtractFloatingPoint
                            (auVar35,*(undefined1 (*) [16])(puVar3 + 0x42),auVar29);
        auVar29 = vectorNegativeMultiplySubtractFloatingPoint
                            (auVar35,*(undefined1 (*) [16])(puVar3 + 0x40),auVar27);
        auVar27.piece<0,4>() = auVar40.piece<0,4>() + auVar31.piece<0,4>();
        auVar27.piece<8,8>() = SUB168(*(undefined1 (*) [16])(puVar3 + 0x40),0);
        auVar27.piece<4,4>() = auVar40.piece<4,4>() + auVar31.piece<4,4>();
        auVar35.piece<0,8>() = auVar27.piece<0,8>();
        auVar35.piece<8,4>() = auVar40.piece<8,4>() + auVar31.piece<8,4>();
        auVar35.piece<12,4>() = auVar40.piece<12,4>() + auVar31.piece<12,4>();
        auVar48 = vectorLogicalAnd(auVar31,auVar40);
        auVar27 = vectorLogicalAnd(auVar31,auVar28);
        auVar41 = vectorLogicalAnd(auVar35,auVar40);
        auVar34 = vectorCompareEqualToUnsignedWord(auVar48,auVar47);
        auVar31 = vectorCompareEqualToUnsignedWord(auVar27,auVar47);
        auVar28 = vectorLogicalAnd(auVar35,auVar28);
        auVar27 = vectorMultiplyAddFloatingPoint(auVar29,auVar29,auVar47);
        auVar35 = vectorCompareEqualToUnsignedWord(auVar28,auVar47);
        auVar28 = vectorMultiplyAddFloatingPoint
                            (*(undefined1 (*) [16])(puVar3 + 0x3e),auVar27,
                             *(undefined1 (*) [16])(puVar3 + 0x3c));
        auVar48 = vectorMultiplyAddFloatingPoint
                            (*(undefined1 (*) [16])(puVar3 + 0x3a),auVar27,
                             *(undefined1 (*) [16])(puVar3 + 0x38));
        auVar40 = vectorMultiplyAddFloatingPoint(auVar27,auVar29,auVar47);
        auVar41 = vectorCompareEqualToUnsignedWord(auVar41,auVar47);
        auVar28 = vectorMultiplyAddFloatingPoint
                            (auVar28,auVar27,*(undefined1 (*) [16])(puVar3 + 0x36));
        auVar48 = vectorMultiplyAddFloatingPoint
                            (auVar48,auVar27,*(undefined1 (*) [16])(puVar3 + 0x34));
        auVar28 = vectorMultiplyAddFloatingPoint(auVar28,auVar27,auVar43);
        auVar27 = vectorMultiplyAddFloatingPoint(auVar48,auVar40,auVar29);
        auVar29 = vectorConditionalSelect(auVar28,auVar27,auVar34);
        auVar27 = vectorConditionalSelect(auVar28,auVar27,auVar41);
        auVar28 = vectorConditionalSelect(auVar30 ^ auVar29,auVar29,auVar31);
        auVar27 = vectorConditionalSelect(auVar30 ^ auVar27,auVar27,auVar35);
        auVar28 = vectorMultiplyAddFloatingPoint
                            (*(undefined1 (*) [16])(puVar3 + 0x48),auVar28,auVar47);
        lVar6 = 0x110;
        auVar29 = vectorConditionalSelect(auVar28,auVar27,*(undefined1 (*) [16])(puVar3 + 0x32));
        auVar28 = vectorMultiplyAddFloatingPoint(auVar29,auVar36,auVar47);
        auVar31 = vectorPermute(auVar29,auVar29,auVar46);
        auVar27 = auVar29 & (GPiece<16>)0xffffffff;
        auVar48 = auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60;
        auVar42 = vectorMultiplyAddFloatingPoint(auVar29,auVar39,auVar47);
        auVar41 = vectorPermute(auVar29,auVar29,auVar32);
        auVar37 = vectorPermute(auVar29,auVar29,auVar33);
        auVar40 = vectorMultiplyAddFloatingPoint(auVar48,auVar36,auVar47);
        auVar27 = vectorMultiplyAddFloatingPoint(auVar48,auVar39,auVar47);
        auVar35 = vectorMultiplyAddFloatingPoint
                            (auVar31,*(undefined1 (*) [16])(puVar3 + 0x2c),auVar28);
        auVar28 = vectorPermute(auVar28,auVar28,auVar49);
        auVar34 = vectorMultiplyAddFloatingPoint
                            (auVar31,*(undefined1 (*) [16])(puVar3 + 0x26),auVar42);
        auVar42 = vectorPermute(auVar42,auVar42,auVar49);
        auVar31 = vectorMultiplyAddFloatingPoint
                            (auVar41,*(undefined1 (*) [16])(puVar3 + 0x30),auVar40);
        *(float *)(puVar3 + 0x22) = (float)dVar19;
        auVar28 = vectorAddFloatingPoint(auVar28,auVar35);
        auVar40 = vectorMultiplyAddFloatingPoint
                            (auVar41,*(undefined1 (*) [16])(puVar3 + 0x2a),auVar27);
        auVar34 = vectorAddFloatingPoint(auVar42,auVar34);
        auVar35 = vectorNegativeMultiplySubtractFloatingPoint
                            (auVar37,*(undefined1 (*) [16])(puVar3 + 0x2e),auVar31);
        *(float *)((int)puVar3 + 0x114) = (float)dVar19;
        *(float *)(puVar3 + 0x23) = (float)dVar19;
        *(float *)((int)puVar3 + 0x11c) = (float)dVar19;
        auVar27 = auVar28 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar40 = vectorNegativeMultiplySubtractFloatingPoint
                            (auVar37,*(undefined1 (*) [16])(puVar3 + 0x28),auVar40);
        auVar28 = auVar34 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar31 = vectorMultiplyAddFloatingPoint
                            (auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60,auVar29,
                             auVar47);
        auVar42 = vectorPermute(auVar35,auVar35,auVar33);
        auVar27 = vectorMultiplyAddFloatingPoint
                            (auVar28 | auVar28 << 0x20 | auVar28 << 0x40 | auVar28 << 0x60,auVar29,
                             auVar47);
        auVar34 = vectorPermute(auVar35,auVar35,auVar32);
        auVar28 = vectorMultiplyAddFloatingPoint(auVar48,auVar35,auVar31);
        auVar29 = vectorPermute(auVar40,auVar40,auVar33);
        auVar27 = vectorMultiplyAddFloatingPoint(auVar48,auVar40,auVar27);
        auVar31 = vectorPermute(auVar40,auVar40,auVar32);
        auVar28 = vectorMultiplyAddFloatingPoint(auVar41,auVar42,auVar28);
        auVar27 = vectorMultiplyAddFloatingPoint(auVar41,auVar29,auVar27);
        auVar28 = vectorNegativeMultiplySubtractFloatingPoint(auVar37,auVar34,auVar28);
        auVar27 = vectorNegativeMultiplySubtractFloatingPoint(auVar37,auVar31,auVar27);
        auVar35 = vectorMultiplyAddFloatingPoint
                            (auVar28,*(undefined1 (*) [16])(puVar3 + 0x22),auVar47);
        auVar31 = vectorMultiplyAddFloatingPoint
                            (auVar27,*(undefined1 (*) [16])(puVar3 + 0x22),auVar47);
        auVar27 = vectorMultiplyAddFloatingPoint(auVar35,auVar44,auVar47);
        auVar28 = vectorMultiplyAddFloatingPoint(auVar31,auVar44,auVar47);
        auVar27 = vectorSubtractFloatingPoint(auVar38,auVar27);
        auVar29 = vectorSubtractFloatingPoint(auVar27,auVar28);
        auVar38 = vectorAddFloatingPoint(auVar29,auVar35);
        auVar27 = auVar29 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar28 = auVar29 >> 0x40 & (GPiece<16>)0xffffffff;
        auVar29 = auVar29 >> 0x20 & (GPiece<16>)0xffffffff;
        uVar23 = storeVectorElementWordIndexed
                           (auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60,0x80,lVar1
                           );
        *(undefined4 *)(puVar3 + 0x10) = uVar23;
        uVar23 = storeVectorElementWordIndexed
                           (auVar28 | auVar28 << 0x20 | auVar28 << 0x40 | auVar28 << 0x60,0x84,lVar1
                           );
        *(undefined4 *)((int)puVar3 + 0x84) = uVar23;
        uVar23 = storeVectorElementWordIndexed
                           (auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60,0x88,lVar1
                           );
        *(undefined4 *)(puVar3 + 0x11) = uVar23;
        auVar31 = vectorAddFloatingPoint(auVar38,auVar31);
        auVar27 = auVar38 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar28 = auVar38 >> 0x40 & (GPiece<16>)0xffffffff;
        auVar29 = auVar38 >> 0x20 & (GPiece<16>)0xffffffff;
        uVar23 = storeVectorElementWordIndexed
                           (auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60,0x90,lVar1
                           );
        *(undefined4 *)(puVar3 + 0x12) = uVar23;
        uVar23 = storeVectorElementWordIndexed
                           (auVar28 | auVar28 << 0x20 | auVar28 << 0x40 | auVar28 << 0x60,0x94,lVar1
                           );
        *(undefined4 *)((int)puVar3 + 0x94) = uVar23;
        uVar23 = storeVectorElementWordIndexed
                           (auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60,0x98,lVar1
                           );
        *(undefined4 *)(puVar3 + 0x13) = uVar23;
        iVar5 = EffectTexHeaders;
        auVar29 = vectorSubtractFloatingPoint(auVar31,auVar35);
        auVar38 = vectorAddFloatingPoint(auVar29,auVar35);
        auVar27 = auVar29 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar28 = auVar29 >> 0x40 & (GPiece<16>)0xffffffff;
        auVar29 = auVar29 >> 0x20 & (GPiece<16>)0xffffffff;
        uVar23 = storeVectorElementWordIndexed
                           (auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60,0xa0,lVar1
                           );
        *(undefined4 *)(puVar3 + 0x14) = uVar23;
        uVar23 = storeVectorElementWordIndexed
                           (auVar28 | auVar28 << 0x20 | auVar28 << 0x40 | auVar28 << 0x60,0xa4,lVar1
                           );
        *(undefined4 *)((int)puVar3 + 0xa4) = uVar23;
        uVar23 = storeVectorElementWordIndexed
                           (auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60,0xa8,lVar1
                           );
        *(undefined4 *)(puVar3 + 0x15) = uVar23;
        auVar27 = auVar38 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar28 = auVar38 >> 0x40 & (GPiece<16>)0xffffffff;
        auVar29 = auVar38 >> 0x20 & (GPiece<16>)0xffffffff;
        *(undefined1 (*) [16])(puVar3 + 0xe) = auVar38;
        uVar23 = storeVectorElementWordIndexed
                           (auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60,0xb0,lVar1
                           );
        *(undefined4 *)(puVar3 + 0x16) = uVar23;
        uVar23 = storeVectorElementWordIndexed
                           (auVar28 | auVar28 << 0x20 | auVar28 << 0x40 | auVar28 << 0x60,0xb4,lVar1
                           );
        *(undefined4 *)((int)puVar3 + 0xb4) = uVar23;
        uVar23 = storeVectorElementWordIndexed
                           (auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60,0xb8,lVar1
                           );
        *(undefined4 *)(puVar3 + 0x17) = uVar23;
        *(undefined4 *)((int)puVar3 + 0xbc) = 0x3f800000;
        *(undefined4 *)((int)puVar3 + 0xac) = 0x3f800000;
        *(undefined4 *)((int)puVar3 + 0x9c) = 0x3f800000;
        *(undefined4 *)((int)puVar3 + 0x8c) = 0x3f800000;
        FastDrawQuad(uVar8 - 0x310,0,1,iVar5,9);
      }
    }
    pRVar4 = DL_Pass;
    iVar18 = iVar18 + 1;
    psVar16 = psVar16 + 0x10;
    uVar14 = uVar14 + 0x20;
    uVar13 = uVar13 + 0x20;
    uVar12 = uVar12 + 0x20;
    uVar15 = uVar15 + 0x20;
  } while (iVar18 < 0x20);
  uVar9 = idol_draw::PackCmd(0,1,0,1,0x80);
  idol_draw::DrawDepth(pRVar4,uVar9);
  return;
}


// 0x00758cc (0x1e0 bytes)
void DrawWaterPatch_A(int *param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  if (*(short *)(param_1 + 1) != 0) {
    uVar5 = (ulonglong)DAT_0071f070;
    DAT_0071f070 = (uint)(1 - uVar5);
    STUB_000e9130(*(undefined4 *)*param_1,*(short *)(*param_1 + 0xe) >> 4,
                        *(undefined4 *)(&DAT_0071f074 + (int)((1 - uVar5 & 0xffffffff) << 2)));
    iVar7 = 0;
    if (0 < *(short *)(param_1 + 1)) {
      iVar8 = 0;
      do {
        iVar6 = *param_1 + iVar8;
        iVar4 = *(int *)(&DAT_0071f074 + DAT_0071f070 * 4);
        sVar1 = *(short *)(iVar6 + 0xc);
        sVar2 = *(short *)(iVar6 + 8);
        sVar3 = *(short *)(iVar6 + 10);
        STUB_000e9134();
        uVar5 = (ulonglong)DAT_0071f070;
        iVar7 = iVar7 + 1;
        DAT_0071f070 = (uint)(1 - uVar5);
        if (iVar7 < *(short *)(param_1 + 1)) {
          STUB_000e9130(*(undefined4 *)(*param_1 + iVar8 + 0x10),
                              *(short *)(*param_1 + iVar8 + 0x1e) >> 4,
                              *(undefined4 *)(&DAT_0071f074 + (int)((1 - uVar5 & 0xffffffff) << 2)))
          ;
        }
        STUB_00077c60(iVar4 + sVar2,&DAT_70002000,*(undefined2 *)(*param_1 + iVar8 + 4));
        STUB_00077c68(*(undefined2 *)(*param_1 + iVar8 + 6),iVar4 + sVar1,iVar4 + sVar3,
                            &DAT_70002000);
        iVar8 = iVar8 + 0x10;
      } while (iVar7 < *(short *)(param_1 + 1));
    }
  }
  return;
}


// 0x0075aac (0x1f0 bytes)
void DrawWaterPatch_B(int *param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  if (*(short *)(param_1 + 1) != 0) {
    uVar5 = (ulonglong)DAT_0071f070;
    DAT_0071f070 = (uint)(1 - uVar5);
    STUB_000e9130(*(undefined4 *)*param_1,*(short *)(*param_1 + 0xe) >> 4,
                        *(undefined4 *)(&DAT_0071f074 + (int)((1 - uVar5 & 0xffffffff) << 2)));
    iVar7 = 0;
    if (0 < *(short *)(param_1 + 1)) {
      iVar8 = 0;
      do {
        iVar6 = *param_1 + iVar8;
        iVar4 = *(int *)(&DAT_0071f074 + DAT_0071f070 * 4);
        sVar1 = *(short *)(iVar6 + 0xc);
        sVar2 = *(short *)(iVar6 + 8);
        sVar3 = *(short *)(iVar6 + 10);
        STUB_000e9134();
        uVar5 = (ulonglong)DAT_0071f070;
        iVar7 = iVar7 + 1;
        DAT_0071f070 = (uint)(1 - uVar5);
        if (iVar7 < *(short *)(param_1 + 1)) {
          STUB_000e9130(*(undefined4 *)(*param_1 + iVar8 + 0x10),
                              *(short *)(*param_1 + iVar8 + 0x1e) >> 4,
                              *(undefined4 *)(&DAT_0071f074 + (int)((1 - uVar5 & 0xffffffff) << 2)))
          ;
        }
        STUB_00077c64(iVar4 + sVar2,&DAT_70002000,iVar4 + sVar3,0x70003000,
                            *(undefined2 *)(*param_1 + iVar8 + 4));
        STUB_00077c6c(*(undefined2 *)(*param_1 + iVar8 + 6),iVar4 + sVar1,0x70003000,
                            &DAT_70002000);
        iVar8 = iVar8 + 0x10;
      } while (iVar7 < *(short *)(param_1 + 1));
    }
  }
  return;
}


// 0x0075cc8 (0x208 bytes)
void AnimateWaveUVs(int *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  short *psVar12;
  short sVar14;
  short *psVar13;
  short *psVar15;
  int iVar16;
  
  sVar14 = *(short *)(param_1 + 1);
  iVar10 = *param_1;
  if (sVar14 != 0) {
    iVar11 = 0;
    psVar12 = &DAT_0095f240;
    fVar1 = (float)(longlong)(int)(worldUpdateTime & 0x3fff) * 6.28 * 6.1035156e-05 - 3.14;
    fVar2 = fVar1 + 1.5707963;
    fVar3 = 3.1415925 - fVar1;
    if (fVar1 - (3.1415925 - fVar1) < 0.0) {
      fVar3 = fVar1;
    }
    fVar5 = 3.1415925 - fVar2;
    if (fVar2 - (3.1415925 - fVar2) < 0.0) {
      fVar5 = fVar2;
    }
    fVar4 = -3.1415925 - fVar1;
    if ((-3.1415925 - fVar1) - fVar3 < 0.0) {
      fVar4 = fVar3;
    }
    fVar1 = -3.1415925 - fVar2;
    if ((-3.1415925 - fVar2) - fVar5 < 0.0) {
      fVar1 = fVar5;
    }
    fVar2 = fVar4 * fVar4;
    fVar3 = fVar1 * fVar1;
    fVar7 = fVar2 * fVar2 * fVar4;
    fVar5 = fVar3 * fVar3 * fVar1;
    fVar8 = fVar2 * fVar7;
    fVar6 = fVar3 * fVar5;
    if (0 < sVar14) {
      iVar9 = 0;
      do {
        iVar16 = 0;
        psVar15 = (short *)(*(int *)(iVar10 + iVar9) + (int)*(short *)(iVar10 + iVar9 + 10));
        psVar13 = psVar12;
        if (0 < *(short *)(iVar10 + iVar9 + 4)) {
          do {
            iVar10 = *param_1;
            psVar12 = psVar13 + 2;
            iVar16 = iVar16 + 1;
            *psVar15 = *psVar13 +
                       (short)(int)((fVar3 * fVar6 * 2.601887e-06 +
                                    fVar6 * -0.0001980741 +
                                    fVar5 * 0.0083330255 + fVar3 * fVar1 * -0.16666657 + fVar1) *
                                   4096.0) + 0x1000;
            psVar15[1] = psVar13[1] +
                         (short)(int)((fVar2 * fVar8 * 2.601887e-06 +
                                      fVar8 * -0.0001980741 +
                                      fVar7 * 0.0083330255 + fVar2 * fVar4 * -0.16666657 + fVar4) *
                                     4096.0) + 0x1000;
            psVar13 = psVar13 + 2;
            psVar15 = psVar15 + 2;
          } while (iVar16 < *(short *)(iVar10 + iVar9 + 4));
          sVar14 = *(short *)(param_1 + 1);
        }
        iVar11 = iVar11 + 1;
        iVar9 = iVar9 + 0x10;
      } while (iVar11 < sVar14);
    }
  }
  return;
}


// 0x0075ed0 (0xe0 bytes)
void ____Water_CopyPatchUVs(int *param_1,undefined2 *param_2)

{
  int iVar1;
  short sVar3;
  undefined2 *puVar2;
  int iVar4;
  int iVar5;
  undefined2 *puVar6;
  int iVar7;
  
  sVar3 = *(short *)(param_1 + 1);
  if ((sVar3 != 0) && (iVar7 = 0, 0 < sVar3)) {
    iVar4 = *param_1;
    iVar1 = 0;
    do {
      iVar5 = 0;
      puVar6 = (undefined2 *)(*(int *)(iVar4 + iVar1) + (int)*(short *)(iVar4 + iVar1 + 10));
      puVar2 = param_2;
      if (0 < *(short *)(iVar4 + iVar1 + 4)) {
        do {
          iVar4 = *param_1;
          iVar5 = iVar5 + 1;
          *puVar2 = *puVar6;
          puVar2[1] = puVar6[1];
          param_2 = puVar2 + 2;
          puVar6 = puVar6 + 2;
          puVar2 = puVar2 + 2;
        } while (iVar5 < *(short *)(iVar4 + iVar1 + 4));
        sVar3 = *(short *)(param_1 + 1);
      }
      iVar7 = iVar7 + 1;
      iVar1 = iVar1 + 0x10;
    } while (iVar7 < sVar3);
  }
  return;
}


// 0x0075fb0 (0x34 bytes)
void DrawWaterPatch(int param_1)

{
  if (*(short *)(param_1 + 6) == 0) {
    DrawWaterPatch_A();
  }
  else {
    DrawWaterPatch_B();
  }
  return;
}


// 0x0075ff0 (0x338 bytes)
void ____Water_ComputeWaveGrid(double param_1,double param_2,double param_3)

{
  undefined2 uVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  ulonglong uVar5;
  short *psVar6;
  int in_r6;
  ulonglong in_r7;
  ulonglong uVar7;
  undefined4 *in_r8;
  undefined4 *in_r9;
  ulonglong uVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  GPiece<16> auVar16;
  GPiece<16> auVar17;
  GPiece<16> auVar18;
  GPiece<16> auVar19;
  GPiece<16> auVar20;
  GPiece<16> auVar21;
  GPiece<16> auVar22;
  GPiece<16> auVar24;
  GPiece<16> auVar25;
  GPiece<16> auVar26;
  GPiece<16> auVar28;
  GPiece<16> auVar29;
  GPiece<16> auVar30;
  GPiece<16> auVar31;
  GPiece<16> auVar23;
  GPiece<16> auVar27;
  
  auVar18 = ZEXT416(0);
  auVar16 = auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60;
  iVar4 = 0;
  auVar25.piece<0,4>() = (float)param_2;
  auVar25.piece<4,4>() = (float)param_2;
  auVar25.piece<8,4>() = (float)param_2;
  auVar25.piece<12,4>() = (float)param_2;
  uVar7 = 0;
  auVar18 = ZEXT416(8);
  auVar24 = auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60;
  auVar19.piece<0,4>() = (float)param_1;
  auVar19.piece<4,4>() = (float)param_1;
  auVar19.piece<8,4>() = (float)param_1;
  auVar19.piece<12,4>() = (float)param_1;
  *(short *)((int)in_r9 + 6) = (short)in_r6;
  *(undefined2 *)(in_r9 + 1) = 1;
  *in_r9 = in_r8;
  *in_r8 = (int)in_r7;
  *(undefined2 *)(in_r8 + 1) = 0x100;
  *(undefined2 *)((int)in_r8 + 6) = 0xe1;
  *(undefined2 *)(in_r8 + 2) = 0;
  auVar29 = loadVectorLeftIndexed(0x30,0x75fe4);
  auVar18.piece<0,4>() = (float)param_3;
  auVar18.piece<4,4>() = (float)param_3;
  auVar18.piece<8,4>() = (float)param_3;
  auVar18.piece<12,4>() = (float)param_3;
  auVar17 = vectorConvertToSignedFixedPointWordSaturate(auVar18,0);
  auVar18 = auVar29 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar29 = auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60;
  auVar18 = vectorSplatHalfWord(auVar17,1);
  uVar5 = in_r7;
  auVar17 = auVar16;
  do {
    auVar20 = vectorSubtractUnsignedWordModulo(auVar17,auVar24);
    auVar20 = vectorConvertFromSignedFixedPointWord(auVar20,0);
    lVar9 = uVar5 + 2;
    lVar14 = 0x10;
    auVar20 = vectorMultiplyAddFloatingPoint(auVar20,auVar29,auVar25);
    auVar20 = vectorConvertToSignedFixedPointWordSaturate(auVar20,0);
    auVar21 = vectorSplatHalfWord(auVar20,1);
    lVar15 = uVar5 + 4;
    uVar13 = uVar5;
    auVar20 = auVar16;
    do {
      auVar30 = vectorSubtractUnsignedWordModulo(auVar20,auVar24);
      auVar28.piece<0,4>() = auVar20.piece<0,4>() + 1;
      auVar28.piece<8,8>() = auVar20.piece<8,8>();
      auVar28.piece<4,4>() = auVar20.piece<4,4>() + 1;
      auVar31.piece<0,8>() = auVar28.piece<0,8>();
      auVar31.piece<12,4>() = auVar20.piece<12,4>();
      auVar31.piece<8,4>() = auVar20.piece<8,4>() + 1;
      auVar20.piece<0,12>() = auVar31.piece<0,12>();
      auVar20.piece<12,4>() = auVar31.piece<12,4>() + 1;
      auVar31 = vectorConvertFromSignedFixedPointWord(auVar30,0);
      auVar31 = vectorMultiplyAddFloatingPoint(auVar31,auVar29,auVar19);
      auVar31 = vectorConvertToSignedFixedPointWordSaturate(auVar31,0);
      auVar31 = vectorSplatHalfWord(auVar31,1);
      uVar1 = storeVectorElementHalfWordIndexed(auVar31,0,uVar13);
      *(undefined2 *)uVar13 = uVar1;
      uVar1 = storeVectorElementHalfWordIndexed(auVar21,0,lVar9);
      *(undefined2 *)lVar9 = uVar1;
      uVar1 = storeVectorElementHalfWordIndexed(auVar18,0,lVar15);
      *(undefined2 *)lVar15 = uVar1;
      lVar9 = lVar9 + 6;
      uVar5 = uVar13 + 6;
      lVar14 = lVar14 + -1;
      lVar15 = lVar15 + 6;
      uVar13 = uVar13 + 6;
    } while (lVar14 != 0);
    iVar4 = iVar4 + 1;
    auVar21.piece<0,4>() = auVar17.piece<0,4>() + 1;
    auVar21.piece<8,8>() = auVar17.piece<8,8>();
    auVar21.piece<4,4>() = auVar17.piece<4,4>() + 1;
    auVar30.piece<0,8>() = auVar21.piece<0,8>();
    auVar30.piece<12,4>() = auVar17.piece<12,4>();
    auVar30.piece<8,4>() = auVar17.piece<8,4>() + 1;
    auVar17.piece<0,12>() = auVar30.piece<0,12>();
    auVar17.piece<12,4>() = auVar30.piece<12,4>() + 1;
  } while (iVar4 < 0x10);
  sVar2 = (short)in_r7;
  iVar4 = 0;
  *(short *)((int)in_r8 + 10) = (short)uVar5 - sVar2;
  auVar18 = loadVectorLeftIndexed(4,0x75fe4);
  iVar11 = 0;
  auVar18 = auVar18 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar18 = auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60;
  auVar24 = auVar16;
  do {
    auVar19 = vectorConvertFromSignedFixedPointWord(auVar24,0);
    auVar25 = ZEXT416(0xffffffff);
    auVar25 = auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60;
    iVar12 = 0;
    auVar25 = vectorShiftLeftIntegerWord(auVar25,auVar25);
    auVar25 = vectorMultiplyAddFloatingPoint(auVar19,auVar18,auVar25);
    auVar25 = vectorConvertToSignedFixedPointWordSaturate(auVar25,0);
    auVar25 = vectorSplatHalfWord(auVar25,1);
    uVar13 = uVar5;
    auVar29 = auVar16;
    iVar10 = iVar11;
    do {
      auVar17 = vectorConvertFromSignedFixedPointWord(auVar29,0);
      auVar19 = ZEXT416(0xffffffff);
      auVar19 = auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60;
      auVar19 = vectorShiftLeftIntegerWord(auVar19,auVar19);
      auVar19 = vectorMultiplyAddFloatingPoint(auVar17,auVar18,auVar19);
      auVar19 = vectorConvertToSignedFixedPointWordSaturate(auVar19,0);
      psVar6 = (short *)uVar5;
      if (in_r6 == 0) {
        if ((((iVar12 == 0) || (iVar4 == 0)) || (iVar12 == 0xf)) || (iVar4 == 0xf)) {
          *psVar6 = 0x6060;
          *(undefined2 *)((int)uVar13 + 2) = 0x8060;
          uVar5 = uVar13;
        }
        else {
          sVar3 = (short)iVar10 + (short)(iVar10 / 0x50) * -0x50;
          psVar6[1] = sVar3 + -0x7fd0;
          *psVar6 = sVar3 * 0x101 + 0x3030;
        }
      }
      else {
        auVar19 = vectorSplatHalfWord(auVar19,1);
        sVar3 = storeVectorElementHalfWordIndexed(auVar19,0,uVar5);
        *psVar6 = sVar3;
        sVar3 = storeVectorElementHalfWordIndexed(auVar25,2,uVar5);
        psVar6[1] = sVar3;
      }
      iVar12 = iVar12 + 1;
      auVar26.piece<0,4>() = auVar29.piece<0,4>() + 1;
      auVar26.piece<8,8>() = auVar29.piece<8,8>();
      auVar26.piece<4,4>() = auVar29.piece<4,4>() + 1;
      auVar27.piece<0,8>() = auVar26.piece<0,8>();
      auVar27.piece<12,4>() = auVar29.piece<12,4>();
      auVar27.piece<8,4>() = auVar29.piece<8,4>() + 1;
      auVar29.piece<0,12>() = auVar27.piece<0,12>();
      auVar29.piece<12,4>() = auVar27.piece<12,4>() + 1;
      uVar5 = uVar5 + 4;
      iVar10 = iVar10 + 5;
      uVar13 = uVar13 + 4;
    } while (iVar12 < 0x10);
    iVar4 = iVar4 + 1;
    auVar22.piece<0,4>() = auVar24.piece<0,4>() + 1;
    auVar22.piece<8,8>() = auVar24.piece<8,8>();
    auVar22.piece<4,4>() = auVar24.piece<4,4>() + 1;
    auVar23.piece<0,8>() = auVar22.piece<0,8>();
    auVar23.piece<12,4>() = auVar24.piece<12,4>();
    auVar23.piece<8,4>() = auVar24.piece<8,4>() + 1;
    auVar24.piece<0,12>() = auVar23.piece<0,12>();
    auVar24.piece<12,4>() = auVar23.piece<12,4>() + 1;
    iVar11 = iVar11 + 0x17;
  } while (iVar4 < 0x10);
  iVar4 = 0;
  *(short *)(in_r8 + 3) = (short)uVar5 - sVar2;
  do {
    lVar15 = 0xf;
    uVar13 = uVar7;
    uVar8 = uVar5;
    do {
      *(ushort *)uVar8 = (ushort)((uVar13 + 1 & 0xffffffff) << 8) | (ushort)uVar13 & 0xff;
      uVar5 = uVar8 + 4;
      ((ushort *)uVar8)[1] =
           (ushort)((uVar13 + 0x11 & 0xffffffff) << 8) | (ushort)uVar13 + 0x10 & 0xff;
      lVar15 = lVar15 + -1;
      uVar13 = uVar13 + 1;
      uVar8 = uVar8 + 4;
    } while (lVar15 != 0);
    iVar4 = iVar4 + 1;
    uVar7 = uVar7 + 0x10;
  } while (iVar4 < 0xf);
  for (; (uVar5 & 0xf) != 0; uVar5 = uVar5 + 2) {
  }
  *(short *)((int)in_r8 + 0xe) = (short)uVar5 - sVar2;
  return;
}


// 0x0076328 (0x128 bytes)
void ____Water_SetPassTextures(undefined8 param_1,undefined8 param_2)

{
  RenderingStep *pRVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = EffectTexHeaders;
  pRVar1 = ForwardPass;
  iVar3 = GetEffectTex();
  FUN_004d676c(pRVar1,0,iVar2 + iVar3 * 0x24,1,1);
  iVar2 = EffectTexHeaders;
  pRVar1 = ForwardPass;
  iVar3 = GetEffectTex(param_2);
  FUN_004d676c(pRVar1,1,iVar2 + iVar3 * 0x24,1,1);
  iVar2 = EffectTexHeaders;
  pRVar1 = DepthPass;
  iVar3 = GetEffectTex(param_1);
  FUN_004d676c(pRVar1,0,iVar2 + iVar3 * 0x24,1,1);
  return;
}


// 0x0076458 (0x128 bytes)
void ____Water_InitPatches(void)

{
  undefined2 *puVar1;
  int iVar2;
  int iVar3;
  undefined2 *puVar4;
  int iVar5;
  int *piVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  undefined8 uVar9;
  
  uVar9 = 0;
  ____Water_ComputeWaveGrid(0,0,0xc028000000000000);
  ____Water_ComputeWaveGrid(uVar9,uVar9,uVar9);
  puVar4 = &DAT_0095f240;
  if (DAT_0096366c != 0) {
    iVar3 = 0;
    iVar2 = (int)DAT_0096366c;
    piVar6 = DAT_00963668;
    if (0 < iVar2) {
      do {
        puVar8 = (undefined2 *)(*piVar6 + (int)*(short *)((int)piVar6 + 10));
        iVar5 = (int)*(short *)(piVar6 + 1);
        puVar7 = puVar4;
        if (0 < *(short *)(piVar6 + 1)) {
          do {
            iVar5 = iVar5 + -1;
            *puVar7 = *puVar8;
            puVar1 = puVar8 + 1;
            puVar8 = puVar8 + 2;
            puVar4 = puVar7 + 2;
            puVar7[1] = *puVar1;
            puVar7 = puVar7 + 2;
          } while (0 < iVar5);
        }
        iVar3 = iVar3 + 1;
        piVar6 = piVar6 + 4;
      } while (iVar3 < iVar2);
    }
  }
  return;
}


// 0x0076580 (0x344 bytes)
void DrawWater(void)

{
  uint uVar1;
  RenderingStep *pRVar2;
  int iVar3;
  undefined1 uVar6;
  int iVar5;
  undefined8 uVar4;
  uint uVar7;
  int iVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  uVar1 = worldUpdateTime / 0x32;
  uVar7 = uVar1 + 1;
  iVar8 = uVar1 + (((int)uVar1 >> 2) + (uint)((int)uVar1 < 0 && (uVar1 & 3) != 0)) * -4 + 0x28;
  AnimateWaveUVs(&DAT_00963668);
  dVar9 = (double)g_ViewContext.fogNearDist;
  dVar10 = (double)g_ViewContext.fogFarDist;
  dVar11 = (double)g_ViewContext.fogNearIntensity;
  dVar12 = (double)g_ViewContext.fogFarIntensity;
  SetGSReg(10,FUN_00606060);
  g_ViewContext.fogFarDist = 143360.0;
  g_ViewContext.fogNearDist = 10000.0;
  g_ViewContext.fogNearIntensity = 160.0;
  g_ViewContext.fogFarIntensity = 0.0;
  UpdateViewContext();
  ComposeCameraMatrix();
  *g_pPacket = 5;
  g_pPacket[1] = 0x80;
  g_pPacket[2] = 0;
  uVar6 = Gs_DmaTagByte(5,0);
  g_pPacket[3] = uVar6;
  g_pPacket = g_pPacket + 0x10;
  if (DAT_00961656 == 0) {
    DrawWaterPatch_A();
  }
  else {
    DrawWaterPatch_B();
  }
  iVar3 = EffectTexHeaders;
  pRVar2 = ForwardPass;
  iVar5 = GetEffectTex(iVar8);
  FUN_004d676c(pRVar2,0,iVar3 + iVar5 * 0x24,1,1);
  iVar3 = EffectTexHeaders;
  pRVar2 = ForwardPass;
  iVar5 = GetEffectTex(uVar1 + (((int)uVar7 >> 2) + (uint)((int)uVar7 < 0 && (uVar7 & 3) != 0)) * -4
                       + 0x29);
  FUN_004d676c(pRVar2,1,iVar3 + iVar5 * 0x24,1,1);
  iVar3 = EffectTexHeaders;
  pRVar2 = DepthPass;
  iVar8 = GetEffectTex(iVar8);
  FUN_004d676c(pRVar2,0,iVar3 + iVar8 * 0x24,1,1);
  *g_pPacket = 5;
  g_pPacket[1] = 0xd0;
  g_pPacket[2] = 0;
  uVar6 = Gs_DmaTagByte(5,0);
  g_pPacket[3] = uVar6;
  g_pPacket = g_pPacket + 0x10;
  if (DAT_0096366e == 0) {
    DrawWaterPatch_A(&DAT_00963668);
  }
  else {
    DrawWaterPatch_B(&DAT_00963668);
  }
  g_ViewContext.fogNearDist = (float)dVar9;
  g_ViewContext.fogFarDist = (float)dVar10;
  g_ViewContext.fogNearIntensity = (float)dVar11;
  g_ViewContext.fogFarIntensity = (float)dVar12;
  uVar4 = FUN_00503024(g_ViewContext.fogR,g_ViewContext.fogG,g_ViewContext.fogB);
  SetGSReg(10,uVar4);
  UpdateViewContext();
  ComposeCameraMatrix();
  return;
}


// 0x00768e8 (0x748 bytes)
void ____Draw_EffectStrip_M401(undefined8 param_1,undefined8 param_2)

{
  double dVar1;
  double dVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  
  dVar16 = 1.0;
  dVar14 = (double)(GameCamera.mtx0.v2.z + GameCamera.mtx0.v3.z);
  uVar5 = GetEffectTex(param_2);
  SetGSReg(0x18,uVar5);
  uVar5 = SCE_GS_SET_TEX1(0,0,1,1,1,0,0xff90);
  SetGSReg(0x1a,uVar5);
  uVar5 = SCE_GS_SET_CLAMP(0,1,0,0,0,0);
  SetGSReg(6,uVar5);
  uVar5 = idol_draw::PackCmd(0,1,0,1,0x80);
  SetGSReg(3,uVar5);
  iVar10 = 0;
  *g_pPacket = 0x7d;
  g_pPacket[1] = 0;
  g_pPacket[2] = 0;
  uVar6 = Gs_DmaTagByte(0x7d,0);
  g_pPacket[3] = uVar6;
  puVar4 = g_pPacket;
  g_pPacket = g_pPacket + 0x10;
  uVar5 = SCE_GIF_SET_TAG(1,0,0,0,0,3);
  *(undefined8 *)(puVar4 + 0x10) = uVar5;
  *(undefined8 *)(puVar4 + 0x18) = 0xeeee;
  uVar5 = idol_draw::Blend(0,5,1,0,0,0,1,2);
  *(undefined8 *)(puVar4 + 0x20) = uVar5;
  *(undefined8 *)(puVar4 + 0x28) = 0x16;
  uVar5 = VU1_addGSregister(GSmem.zbuf >> 0xd,1,1);
  *(undefined8 *)(puVar4 + 0x30) = uVar5;
  *(undefined8 *)(puVar4 + 0x38) = 0x21;
  uVar5 = SCE_GS_SET_PRIM(0xf,0,1,0,1,0,0,0);
  *(undefined8 *)(puVar4 + 0x40) = uVar5;
  *(undefined8 *)(puVar4 + 0x48) = 0xe;
  uVar5 = SCE_GIF_SET_TAG(0x30,1,0,0,1,5);
  *(undefined8 *)(puVar4 + 0x50) = uVar5;
  dVar19 = (double)(float)(dVar16 - dVar14);
  uVar3 = worldUpdateTime >> 3;
  *(undefined8 *)(puVar4 + 0x58) = 0x42421;
  uVar12 = 10;
  iVar7 = 0;
  dVar17 = 0.00390625;
  dVar18 = 0.0625;
  puVar11 = (undefined8 *)(puVar4 + 0x60);
  dVar15 = -(double)((GameCamera.rot.radius + 3.14) * 4.0 * 0.15923566 - 4.0);
  dVar13 = (double)(float)((double)(longlong)(int)(uVar3 & 0xff) * 0.00390625 + dVar15);
  iVar8 = 0x50;
  do {
    uVar5 = FUN_00502f74_RET_0(0x80,0x80,0x80,0x60,0x3a83126f);
    *puVar11 = uVar5;
    dVar2 = dVar19 * 0.0010000000474974513;
    dVar1 = (double)(float)((double)(longlong)iVar7 + dVar16) * dVar18 + dVar13;
    uVar5 = FUN_00503034((float)((double)(longlong)iVar7 * dVar18 + dVar13) * 0.001,
                         -(float)(dVar14 * 0.0010000000474974513));
    *(undefined8 *)(puVar4 + iVar8 + 0x18) = uVar5;
    uVar5 = SCE_GS_SET_XYZ(iVar10 + 0x7000,0x7200,0);
    *(undefined8 *)(puVar4 + iVar8 + 0x20) = uVar5;
    uVar5 = FUN_00503034((float)dVar1 * 0.001,(float)dVar2);
    *(undefined8 *)(puVar4 + iVar8 + 0x28) = uVar5;
    uVar5 = SCE_GS_SET_XYZ(iVar10 + 0x7200,0x8df0,16000);
    iVar7 = iVar7 + 1;
    uVar12 = uVar12 + 5;
    puVar11 = puVar11 + 5;
    *(undefined8 *)(puVar4 + iVar8 + 0x30) = uVar5;
    iVar10 = iVar10 + 0x200;
    iVar8 = iVar8 + 0x28;
  } while (iVar7 < 0x10);
  iVar7 = 0;
  lVar9 = (uVar12 & 0x1fffffff) << 3;
  iVar8 = 0;
  dVar13 = (double)(float)((double)(float)((double)(longlong)
                                                   (int)((worldUpdateTime >> 4) + 0x5aU & 0xff) *
                                           dVar17 + 1.5) + dVar15);
  do {
    uVar5 = FUN_00502f74_RET_0(0x80,0x80,0x80,0x60,0x3ada740e);
    iVar10 = (int)lVar9;
    *(undefined8 *)(puVar4 + iVar10 + 0x10) = uVar5;
    dVar2 = dVar19 * 0.0016666667070239782;
    dVar1 = (double)(float)((double)(longlong)iVar8 + dVar16) * dVar18 + dVar13;
    uVar5 = FUN_00503034((float)((double)(longlong)iVar8 * dVar18 + dVar13) * 0.0016666667,
                         -(float)(dVar14 * 0.0016666667070239782));
    *(undefined8 *)(puVar4 + iVar10 + 0x18) = uVar5;
    uVar5 = SCE_GS_SET_XYZ(iVar7 + 0x7000,0x7200,0);
    *(undefined8 *)(puVar4 + iVar10 + 0x20) = uVar5;
    uVar5 = FUN_00503034((float)dVar1 * 0.0016666667,(float)dVar2);
    *(undefined8 *)(puVar4 + iVar10 + 0x28) = uVar5;
    uVar5 = SCE_GS_SET_XYZ(iVar7 + 0x7200,0x8df0,0x2580);
    iVar8 = iVar8 + 1;
    uVar12 = uVar12 + 5;
    lVar9 = lVar9 + 0x28;
    iVar7 = iVar7 + 0x200;
    *(undefined8 *)(puVar4 + iVar10 + 0x30) = uVar5;
  } while (iVar8 < 0x10);
  lVar9 = (uVar12 & 0x1fffffff) << 3;
  iVar7 = 0;
  iVar8 = 0;
  dVar13 = (double)(float)((double)(float)((double)(longlong)
                                                   (int)((worldUpdateTime >> 5) + 0xb4U & 0xff) *
                                           dVar17 + 3.0) + dVar15);
  do {
    uVar5 = FUN_00502f74_RET_0(0x80,0x80,0x80,0x60,0x3b5a740e);
    iVar10 = (int)lVar9;
    *(undefined8 *)(puVar4 + iVar10 + 0x10) = uVar5;
    dVar17 = dVar19 * 0.0033333334140479565;
    dVar15 = (double)(float)((double)(longlong)iVar8 + dVar16) * dVar18 + dVar13;
    uVar5 = FUN_00503034((float)((double)(longlong)iVar8 * dVar18 + dVar13) * 0.0033333334,
                         -(float)(dVar14 * 0.0033333334140479565));
    *(undefined8 *)(puVar4 + iVar10 + 0x18) = uVar5;
    uVar5 = SCE_GS_SET_XYZ(iVar7 + 0x7000,0x7200,0);
    *(undefined8 *)(puVar4 + iVar10 + 0x20) = uVar5;
    uVar5 = FUN_00503034((float)dVar15 * 0.0033333334,(float)dVar17);
    *(undefined8 *)(puVar4 + iVar10 + 0x28) = uVar5;
    uVar5 = SCE_GS_SET_XYZ(iVar7 + 0x7200,0x8df0,0x12c0);
    iVar8 = iVar8 + 1;
    lVar9 = lVar9 + 0x28;
    iVar7 = iVar7 + 0x200;
    *(undefined8 *)(puVar4 + iVar10 + 0x30) = uVar5;
  } while (iVar8 < 0x10);
  g_pPacket = g_pPacket + 2000;
  return;
}


// 0x0077048 (0x454 bytes)
void DrawsFlowingLava
               (undefined8 param_1,int param_2,int param_3,undefined8 param_4,undefined8 param_5)

{
  undefined4 uVar1;
  uint *puVar2;
  short *psVar3;
  int *piVar4;
  int iVar5;
  RenderingStep *pRVar6;
  ulonglong uVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 *puVar11;
  ulonglong uVar12;
  undefined4 *puVar13;
  int iVar14;
  short sVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  longlong lVar19;
  double dVar20;
  double dVar21;
  
  STUB_00071170();
  idol_draw::PackCmd(0,1,2,1,0x80);
  idol_draw::PackCmd(0,1,2,1,0x60);
  iVar10 = 0;
  lVar19 = 0x100;
  uVar7 = 0;
  dVar21 = -(double)((float)(longlong)(int)(worldUpdateTime & 0x7ff) * 0.00048828125 - 1.0);
  dVar20 = (double)(float)(dVar21 * 2.0 + 0.5);
  do {
    uVar12 = uVar7 & 0xf;
    uVar7 = uVar7 + 0x89;
    uVar12 = uVar12 * 0x20200 - 0x7f878f90;
    puVar2 = (uint *)(g_ScratchBuf + iVar10);
    iVar10 = iVar10 + 1;
    *puVar2 = (uint)(byte)(uVar12 >> 0x18) | (uint)uVar12 >> 8 & 0xff00 |
              (uint)((uVar12 & 0xffffffff) << 8) & 0xff0000 | (uint)((uVar12 & 0xffffffff) << 0x18);
    pRVar6 = ForwardPass;
    lVar19 = lVar19 + -1;
  } while (lVar19 != 0);
  *ForwardPass->command = NV4097_SET_ALPHA_TEST_ENABLE_x1;
  pRVar6->command[1] = 0;
  pRVar6->command = pRVar6->command + 2;
  idol_draw::DrawDepth(ForwardPass,0);
  pRVar6 = DepthPass;
  *DepthPass->command = NV4097_SET_ALPHA_TEST_ENABLE_x1;
  pRVar6->command[1] = 0;
  pRVar6->command = pRVar6->command + 2;
  idol_draw::DrawDepth(DepthPass,0);
  uVar18 = 0;
  iVar10 = param_2;
  if (0 < param_3) {
    do {
      iVar8 = FastCheckBsphereInView(0x4070000000000000,iVar10);
      if ((iVar8 != -1) && (iVar8 = 0, 0 < *(int *)(iVar10 + 0x1c))) {
        iVar16 = 0;
        do {
          iVar5 = (int)(((ulonglong)uVar18 & 0x3ffffff) << 6);
          psVar3 = (short *)(iVar5 + param_2 + 0x20 + iVar16);
          sVar15 = *psVar3;
          iVar17 = (int)*(short *)(iVar5 + param_2 + 0x22 + iVar16) - (int)sVar15;
          puVar9 = (undefined4 *)(*(int *)(iVar5 + param_2 + 0x14) + sVar15 * 8);
          puVar11 = (undefined4 *)(g_ScratchBuf + 0x1000);
          puVar13 = (undefined4 *)(g_ScratchBuf + 0x2000);
          iVar14 = iVar17;
          if (0 < iVar17) {
            do {
              uVar1 = *puVar9;
              *puVar13 = uVar1;
              *puVar11 = uVar1;
              iVar14 = iVar14 + -1;
              puVar11[1] = (float)((double)(float)puVar9[1] + dVar21);
              puVar13[1] = (float)((double)(float)puVar9[1] + dVar20);
              puVar13 = puVar13 + 2;
              puVar11 = puVar11 + 2;
              puVar9 = puVar9 + 2;
            } while (0 < iVar14);
            sVar15 = *psVar3;
          }
          piVar4 = (int *)(iVar5 + param_2 + 0x10);
          DrawLavaStrips(param_1,iVar17,*piVar4 + sVar15 * 0xc,g_ScratchBuf,g_ScratchBuf + 0x1000,
                         g_ScratchBuf + 0x2000,param_4,param_5,0);
          DrawLavaStrips(param_1,iVar17,*piVar4 + *psVar3 * 0xc,g_ScratchBuf,g_ScratchBuf + 0x1000,
                         g_ScratchBuf + 0x2000,param_4,param_5,0);
          iVar8 = iVar8 + 1;
          iVar16 = iVar16 + 2;
        } while (iVar8 < *(int *)(iVar5 + param_2 + 0x1c));
      }
      uVar18 = uVar18 + 1;
      iVar10 = iVar10 + 0x40;
    } while ((int)uVar18 < param_3);
  }
  pRVar6 = ForwardPass;
  *ForwardPass->command = NV4097_SET_ALPHA_TEST_ENABLE_x1;
  pRVar6->command[1] = 1;
  pRVar6->command = pRVar6->command + 2;
  pRVar6 = DepthPass;
  *DepthPass->command = NV4097_SET_ALPHA_TEST_ENABLE_x1;
  pRVar6->command[1] = 1;
  pRVar6->command = pRVar6->command + 2;
  return;
}


// 0x00774b8 (0x318 bytes)
void ____Draw_ScrollingTexStrips
               (int param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  int iVar7;
  short sVar8;
  short *psVar9;
  short *psVar10;
  int *piVar11;
  int *piVar12;
  int *piVar13;
  int *piVar14;
  short *psVar15;
  short *psVar16;
  int iVar17;
  undefined8 uVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  
  uVar1 = idol_draw::PackCmd(0,1,2,1,0x20);
  idol_draw::PackCmd(0,1,2,1,0x20);
  STUB_00071170();
  iVar17 = 0;
  dVar21 = -(double)((float)(longlong)(int)(worldUpdateTime & 0x1ff) * 0.001953125 - 1.0);
  dVar20 = (double)(float)(dVar21 * 2.0 + 0.5);
  dVar19 = -(double)((float)(longlong)(int)(worldUpdateTime & 0x7ff) * 0.00048828125 - 1.0);
  if (0 < param_2) {
    piVar14 = (int *)(param_1 + 0x14);
    piVar13 = (int *)(param_1 + 0x10);
    piVar12 = (int *)(param_1 + 0x18);
    piVar11 = (int *)(param_1 + 0x1c);
    psVar10 = (short *)(param_1 + 0x22);
    uVar18 = 0x4070000000000000;
    psVar9 = (short *)(param_1 + 0x20);
    do {
      iVar2 = FastCheckBsphereInView(uVar18,param_1);
      if ((iVar2 != -1) &&
         (iVar2 = 0, psVar15 = psVar9, psVar16 = psVar10, 0 < *(int *)(param_1 + 0x1c))) {
        do {
          sVar8 = *psVar15;
          iVar3 = (int)*psVar16 - (int)sVar8;
          pfVar4 = (float *)(*piVar14 + sVar8 * 8);
          pfVar6 = (float *)&DAT_70002000;
          pfVar5 = (float *)&DAT_70001000;
          iVar7 = iVar3;
          if (0 < iVar3) {
            do {
              iVar7 = iVar7 + -1;
              *pfVar5 = (float)((double)*pfVar4 + dVar19);
              *pfVar6 = (float)((double)*pfVar4 - dVar19);
              pfVar5[1] = (float)((double)pfVar4[1] + dVar21);
              pfVar6[1] = (float)((double)pfVar4[1] + dVar20);
              pfVar5 = pfVar5 + 2;
              pfVar6 = pfVar6 + 2;
              pfVar4 = pfVar4 + 2;
            } while (0 < iVar7);
            sVar8 = *psVar15;
          }
          DrawTexturedStrips(iVar3,*piVar13 + sVar8 * 0xc,*piVar12 + sVar8 * 4,
                             (ulonglong)g_ScratchBuf + 0x1000,(ulonglong)g_ScratchBuf + 0x2000,
                             param_3,param_4,uVar1);
          iVar2 = iVar2 + 1;
          psVar15 = psVar15 + 1;
          psVar16 = psVar16 + 1;
        } while (iVar2 < *piVar11);
      }
      iVar17 = iVar17 + 1;
      piVar14 = piVar14 + 0x10;
      param_1 = param_1 + 0x40;
      piVar13 = piVar13 + 0x10;
      piVar12 = piVar12 + 0x10;
      piVar11 = piVar11 + 0x10;
      psVar10 = psVar10 + 0x20;
      psVar9 = psVar9 + 0x20;
    } while (iVar17 < param_2);
  }
  return;
}


// 0x00777d0 (0x48c bytes)
void ____Draw_InitGsRegPresets_777d0(void)

{
  DAT_0071f28c = 0x10000;
  DAT_0071f080 = SCE_GIF_SET_TAG(1,1,0,0,0,4);
  DAT_0071f090 = SCE_GS_SET_TEX1(0,0,1,1,1,0,0xff90);
  DAT_0071f0a0 = SCE_GS_SET_CLAMP(1,1,0,0,0,0);
  DAT_0071f0b0 = idol_draw::Blend(1,5,0x60,3,0,0,1,2);
  DAT_0071f0c0 = idol_draw::PackCmd(0,1,2,1,0x50);
  DAT_0071f0d0 = SCE_GIF_SET_TAG(1,1,0,0,0,4);
  DAT_0071f0e0 = SCE_GS_SET_TEX1(0,0,1,1,1,0,0xff90);
  DAT_0071f0f0 = SCE_GS_SET_CLAMP(0,0,0,0,0,0);
  DAT_0071f100 = idol_draw::Blend(0,5,1,0,0,0,1,2);
  DAT_0071f110 = idol_draw::PackCmd(0,1,2,1,0x50);
  DAT_0071f120 = SCE_GIF_SET_TAG(1,1,0,0,0,8);
  DAT_0071f130 = FUN_00502f98(0,0,0,0,0,0,1,2);
  DAT_0071f140 = FUN_00502f98(0,0,0,0,0,0,1,2);
  DAT_0071f150 = SCE_GS_SET_TEX1(0,0,1,1,1,0,0xff90);
  DAT_0071f160 = SCE_GS_SET_CLAMP(0,0,0,0,0,0);
  DAT_0071f170 = idol_draw::PackCmd(0,1,2,1,0x80);
  DAT_0071f180 = SCE_GS_SET_TEX1(0,0,1,1,1,0,0xff90);
  DAT_0071f190 = SCE_GS_SET_CLAMP(0,0,0,0,0,0);
  DAT_0071f1a0 = idol_draw::PackCmd(0,1,2,1,0x60);
  DAT_0071f1b0 = SCE_GIF_SET_TAG(1,1,0,0,0,8);
  DAT_0071f1c0 = FUN_00502f98(0,0,0,0,0,0,1,2);
  DAT_0071f1d0 = FUN_00502f98(0,0,0,0,0,0,1,2);
  DAT_0071f1e0 = SCE_GS_SET_TEX1(0,0,1,1,1,0,0xff90);
  DAT_0071f1f0 = SCE_GS_SET_CLAMP(0,0,0,0,0,0);
  DAT_0071f200 = idol_draw::PackCmd(0,1,2,1,0x20);
  DAT_0071f210 = SCE_GS_SET_TEX1(0,0,1,1,1,0,0xff90);
  DAT_0071f220 = SCE_GS_SET_CLAMP(0,0,0,0,0,0);
  DAT_0071f230 = idol_draw::PackCmd(0,1,2,1,0x20);
  return;
}


// 0x0077c60 (0x4 bytes)
void STUB_00077c60(...)

{
  return;
}


// 0x0077c64 (0x4 bytes)
void STUB_00077c64(...)

{
  return;
}


// 0x0077c68 (0x4 bytes)
void STUB_00077c68(...)

{
  return;
}


// 0x0077c6c (0x4 bytes)
void STUB_00077c6c(...)

{
  return;
}


// 0x0077c88 (0x410 bytes)
void DrawColorGradientStrip(int *param_1,float *param_2)

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
  float *pfVar20;
  ulonglong uVar19;
  int iVar21;
  float fVar22;
  float *pfVar23;
  float *pfVar24;
  int iVar25;
  int iVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  
  pfVar20 = (float *)idol::AllocateMemAlign
                               (FrameHeap,
                                (int)(((ulonglong)(uint)param_1[5] & 0x1fffffff) << 6) +
                                (int)(((ulonglong)(uint)param_1[5] & 0x1fffffff) << 7),0x10);
  iVar21 = param_1[1];
  iVar25 = 0;
  dVar29 = 1.0;
  dVar28 = -0.05000000074505806;
  dVar30 = 0.05000000074505806;
  dVar31 = (double)(float)param_1[7];
  iVar26 = 0;
  dVar32 = (double)(float)(1.0 / (double)(longlong)(*param_1 - iVar21));
  dVar33 = (double)(float)(1.0 / (double)(longlong)iVar21);
  do {
    iVar18 = *(int *)(param_1[2] + iVar26);
    if (iVar21 < iVar18) {
      dVar27 = (double)(float)((double)(longlong)(iVar18 - iVar21) * dVar32);
    }
    else {
      dVar27 = -(double)(float)((double)(longlong)iVar18 * dVar33 - dVar29);
    }
    uVar19 = FastLerpColor(dVar27,param_1[3],param_1[4]);
    iVar21 = 0;
    fVar1 = 255.0;
    fVar3 = (float)(uVar19 & 0xff) * 2.0;
    fVar22 = (float)((uVar19 << 0x20) >> 0x28 & 0xff) * 2.0;
    if (255.0 - fVar3 < 0.0) {
      fVar3 = fVar1;
    }
    fVar2 = (float)((uVar19 << 0x20) >> 0x30 & 0xff) * 2.0;
    if (255.0 - fVar22 < 0.0) {
      fVar22 = fVar1;
    }
    if (255.0 - fVar2 < 0.0) {
      fVar2 = fVar1;
    }
    fVar5 = (float)((uVar19 << 0x20) >> 0x38) + 0.5;
    fVar4 = fVar3 + 0.5;
    if (255.0 - (fVar3 + 0.5) < 0.0) {
      fVar4 = fVar1;
    }
    fVar3 = (float)param_1[8];
    uVar19 = (ulonglong)(uint)param_1[5];
    if (255.0 - fVar5 < 0.0) {
      fVar5 = fVar1;
    }
    fVar6 = fVar22 + 0.5;
    if (255.0 - (fVar22 + 0.5) < 0.0) {
      fVar6 = fVar1;
    }
    fVar22 = fVar2 + 0.5;
    if (255.0 - (fVar2 + 0.5) < 0.0) {
      fVar22 = fVar1;
    }
    fVar22 = (float)((int)fVar5 | (int)fVar22 << 8 | (int)fVar6 << 0x10 | (int)fVar4 << 0x18);
    pfVar23 = pfVar20;
    pfVar24 = pfVar20;
    if (0 < param_1[5]) {
      do {
        fVar4 = param_2[4];
        fVar5 = param_2[5];
        pfVar24 = (float *)(param_1[6] + ((int)uVar19 * iVar25 + iVar21) * 0x10);
        fVar6 = *param_2;
        fVar7 = param_2[6];
        fVar3 = (float)((double)fVar3 + dVar31);
        iVar21 = iVar21 + 1;
        fVar8 = pfVar24[1];
        fVar9 = *pfVar24;
        fVar10 = param_2[0xc];
        fVar11 = param_2[1];
        fVar1 = (float)((double)pfVar24[2] + dVar28);
        fVar12 = param_2[0xd];
        fVar13 = param_2[2];
        fVar2 = (float)((double)pfVar24[2] + dVar30);
        fVar14 = param_2[8];
        fVar15 = param_2[0xe];
        fVar16 = param_2[9];
        fVar17 = param_2[10];
        pfVar23[3] = fVar3;
        pfVar23[4] = 0.0;
        pfVar23[5] = fVar22;
        *pfVar23 = fVar4 * fVar8 + fVar14 * fVar1 + fVar6 * fVar9 + fVar10;
        pfVar23[1] = fVar5 * fVar8 + fVar16 * fVar1 + fVar11 * fVar9 + fVar12;
        pfVar23[2] = fVar7 * fVar8 + fVar17 * fVar1 + fVar13 * fVar9 + fVar15;
        pfVar23[6] = fVar14 * fVar2 + fVar6 * fVar9 + fVar4 * fVar8 + fVar10;
        pfVar24 = pfVar23 + 0xc;
        pfVar23[7] = fVar16 * fVar2 + fVar11 * fVar9 + fVar5 * fVar8 + fVar12;
        pfVar23[8] = fVar17 * fVar2 + fVar13 * fVar9 + fVar7 * fVar8 + fVar15;
        pfVar23[9] = fVar3;
        pfVar23[10] = 1.0;
        pfVar23[0xb] = fVar22;
        uVar19 = (ulonglong)(uint)param_1[5];
        pfVar23 = pfVar24;
      } while (iVar21 < param_1[5]);
    }
    FastDrawStripColor((int)(uVar19 << 1),pfVar20,9);
    iVar25 = iVar25 + 1;
    iVar21 = param_1[1];
    iVar26 = iVar26 + 4;
    pfVar20 = pfVar24;
  } while (iVar25 < 4);
  return;
}


// 0x0078098 (0x5c bytes)
void SetFrameBufferInfo
               (short param_1,short param_2,undefined2 param_3,undefined2 param_4,undefined2 param_5
               ,undefined2 param_6)

{
  DAT_00966b84 = param_3;
  DAT_00966bc0 = &DAT_00966b40;
  DAT_00966b9c = 0;
  DAT_00966b86 = param_4;
  DAT_00966b88 = 0x12;
  DAT_00966b94 = param_5;
  DAT_00966b96 = param_6;
  g_FrameBufWidth = param_1;
  g_FrameBufHeight = param_2;
  DAT_00966b80 = 0x12;
  DAT_00966b90 = 0x12;
  DAT_00966b98 = 0x24;
  return;
}


// 0x00780f4 (0x4 bytes)
void STUB_000780f4(...)

{
  return;
}


// 0x00780f8 (0x4 bytes)
void STUB_000780f8(...)

{
  return;
}


// 0x00780fc (0x4 bytes)
void STUB_000780fc(...)

{
  return;
}


// 0x0078100 (0x4 bytes)
void STUB_00078100(...)

{
  return;
}


// 0x0078104 (0x4 bytes)
void STUB_00078104(...)

{
  return;
}


// 0x0078108 (0x28 bytes)
void SetFrameBufferTexLog2Size(int log2w,int log2h,int zbuf)

{
  DAT_00966b92 = (short)(zbuf >> 0xd);
  DAT_00966b8c = (short)(1 << (log2w & 0x3fU));
  DAT_00966b8e = (short)(1 << (log2h & 0x3fU));
  return;
}


// 0x0078130 (0x4 bytes)
void STUB_00078130(...)

{
  return;
}


// 0x0078134 (0x4 bytes)
void STUB_00078134(...)

{
  return;
}


// 0x0078138 (0x4 bytes)
void STUB_00078138(...)

{
  return;
}


// 0x007813c (0x4 bytes)
void STUB_0007813c(...)

{
  return;
}


