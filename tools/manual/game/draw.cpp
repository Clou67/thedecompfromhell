#include "rc1.h"
#include "idol/fastinline.h"
#include <cell/gcm/gcm_macros.h>
#include <cell/gcm/gcm_enum.h>
// MERGE
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

// 0x006a5c4 (0x70 bytes)
/* Sprite_DrawShape with an effect texture by its index in EffectTexHeaders */
void Sprite_DrawShapeWrapper(int x, int y, int w, int h, int u, int v, int uw, int vh, u32 color, int tex)
{
    Sprite_DrawShape(x, y, w, h, u, v, uw, vh, color, (u8 *)(uintptr_t)EffectTexHeaders + tex * 0x24);
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
