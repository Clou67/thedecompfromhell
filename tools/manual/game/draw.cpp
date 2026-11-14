#include "rc1.h"
#include "idol/fastinline.h"
#include <cell/gcm/gcm_macros.h>
#include <cell/gcm/gcm_enum.h>
// game/draw.cpp -- reconstructed from NPEA00385 EBOOT
// 165 functions, 0x6565c-0x78140: the frame's drawing. The view context and camera matrices,
// occlusion, the render passes, fonts and HUD sprites, screen effects, water, lava and the
// textured strip drawers the level renderers share.

/* one word into the pass's command buffer */
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
static inline void Mtx4_Transpose(Mtx4 *out, Mtx4 *source)
{
    float *src = &source->v0.x;
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
    float stepX = bsphere[0] - GameCamera.posX * 1024.0f;
    float stepY = bsphere[1] - GameCamera.posY * 1024.0f;
    float stepZ = bsphere[2] - GameCamera.posZ * 1024.0f;
    /* (the binary subtracts a register it never set from the radius for the w term) */
    float width = radius - 0.0f;
    Mtx4 *view = &GameCamera.mtx0;
    float posX = view->v0.x * stepX + view->v1.x * stepY + view->v2.x * stepZ + view->v3.x * width;
    float posY = view->v0.y * stepX + view->v1.y * stepY + view->v2.y * stepZ + view->v3.y * width;
    float posZ = view->v0.z * stepX + view->v1.z * stepY + view->v2.z * stepZ + view->v3.z * width;

    if (posZ + radius < g_ViewContext.nearClip || posZ - radius > g_ViewContext.farClip) {
        return -1;
    }

    posX = fabsf(posX);
    posY = fabsf(posY);
    if (posZ * g_ViewContext.xratio < posX - radius * g_ViewContext.xradpad) {
        return -1;
    }
    if (posZ * g_ViewContext.yratio < posY - radius * g_ViewContext.yradpad) {
        return -1;
    }

    if (posZ - radius <= g_ViewContext.nearClip || posZ + radius >= g_ViewContext.farClip) {
        return 0;
    }
    if (posZ * g_ViewContext.xratio * 3.0f <= posX + radius * g_ViewContext.xradpad) {
        return 0;
    }
    if (posZ * g_ViewContext.yratio * 3.0f <= posY + radius * g_ViewContext.yradpad) {
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
/* the visibility bitmap of the 4-unit occlusion cell (posX, posY, posZ), or NULL where there is none */
char *ParseOcclGrid(int posX, int posY, int posZ)
{
    OcclGridHeader *grid = (OcclGridHeader *)OcclGrid;
    int cellZ = posZ - grid->zMin;

    if (cellZ < 0 || cellZ >= grid->zCnt || grid->zRows[cellZ] == 0) {
        return NULL;
    }

    OcclGridRow *zRow = (OcclGridRow *)((u8 *)grid + grid->zRows[cellZ]);
    int cellY = posY - zRow->min;
    if (cellY < 0 || cellY >= zRow->cnt || zRow->next[cellY] == 0) {
        return NULL;
    }

    OcclGridCells *yRow = (OcclGridCells *)((u8 *)grid + zRow->next[cellY]);
    int cellX = posX - yRow->min;
    if (cellX < 0 || cellX >= yRow->cnt || yRow->cells[cellX] == 0xffff) {
        return NULL;
    }

    return (char *)grid + yRow->cells[cellX] * 0x80 + grid->dataOfs;
}

// 0x0067ab0 (0xd0 bytes)
/* the nearer of two cells' bitmaps (by interp), falling back to the other */
char *GetOcclGridFromPair(int startX, int startY, int startZ, int endX, int endY, int endZ, float interp)
{
    char *cell;

    if (interp >= 0.5f) {
        cell = ParseOcclGrid(endX, endY, endZ);
        if (cell == NULL) {
            cell = ParseOcclGrid(startX, startY, startZ);
        }
    }
    else {
        cell = ParseOcclGrid(startX, startY, startZ);
        if (cell == NULL) {
            cell = ParseOcclGrid(endX, endY, endZ);
        }
    }

    return cell;
}

/* the neighbour of (posX, posY, posZ) along one axis nearer the camera's fraction, or the other side */
static inline char *OcclNeighbour(int posX, int posY, int posZ, int stepX, int stepY, int stepZ, float fraction)
{
    char *cell;

    if (fraction >= 0.5f) {
        cell = ParseOcclGrid(posX + stepX, posY + stepY, posZ + stepZ);
        if (cell == NULL) {
            cell = ParseOcclGrid(posX - stepX, posY - stepY, posZ - stepZ);
        }
    }
    else {
        cell = ParseOcclGrid(posX - stepX, posY - stepY, posZ - stepZ);
        if (cell == NULL) {
            cell = ParseOcclGrid(posX + stepX, posY + stepY, posZ + stepZ);
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
    int posX = FastDoubleToInt(GameCamera.posX * scale);
    int posY = FastDoubleToInt(GameCamera.posY * scale);
    int posZ = FastDoubleToInt(GameCamera.posZ * scale);
    char *cell = ParseOcclGrid(posX, posY, posZ);

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
        char *nearX = OcclNeighbour(posX, posY, posZ, 1, 0, 0, GameCamera.posX * scale - (float)FastIntToDouble(posX));
        char *nearY = OcclNeighbour(posX, posY, posZ, 0, 1, 0, GameCamera.posY * scale - (float)FastIntToDouble(posY));
        char *nearZ = OcclNeighbour(posX, posY, posZ, 0, 0, 1, GameCamera.posZ * scale - (float)FastIntToDouble(posZ));

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

/* a HUD vertex: its texture coordinate, then its position (16 bits each, posY/texV high) */
static inline void HudVertex(RenderingStep *pass, int texU, int texV, int posX, int posY)
{
    Emit(pass, HUD_SET_TEXCOORD2S);
    Emit(pass, (texV & 0xffff) << 16 | (texU & 0xffff));
    Emit(pass, HUD_SET_POSITION2S);
    Emit(pass, (posY & 0xffff) << 16 | (posX & 0xffff));
}

/* binds tex and starts a quad in color on the HUD pass */
/* one HUD vertex at a float position */
static inline void HudVertexF(RenderingStep *pass, int texU, int texV, float posX, float posY)
{
    Emit(pass, HUD_SET_TEXCOORD2S);
    Emit(pass, (texV & 0xffff) << 16 | (texU & 0xffff));
    Emit(pass, HUD_SET_POSITION2F);
    Emit(pass, *(u32 *)&posX);
    Emit(pass, *(u32 *)&posY);
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
/* tex's (texU, texV, texW, texH) texels (in half-texel units) drawn at (posX, posY, width, height) on the HUD pass, in
   color; a full 512x416 rectangle goes through DrawFullScreenQuad */
void Sprite_DrawShape(int posX, int posY, int width, int height, int texU, int texV, int texW, int texH, u32 color, void *tex)
{
    if (posX == 0 && width == 512 && posY == 0 && height == 416) {
        DrawFullScreenQuad(color, tex);
        return;
    }

    int left = texU * 2;
    int top = texV * 2;
    int right = (texU + texW) * 2;
    int bottom = (texV + texH) * 2;

    HudBeginQuad(tex, color);
    HudVertex(HUD_Pass, left, top, posX, posY);
    HudVertex(HUD_Pass, left, bottom, posX, posY + height);
    HudVertex(HUD_Pass, right, bottom, posX + width, posY + height);
    HudVertex(HUD_Pass, right, top, posX + width, posY);
    HudEnd();
}

// 0x0068bf0 (0x78 bytes)
void Sprite_DrawShapeF(float posX, float posY, float width, float height, int texU, int texV, int texW, int texH, u32 color, void *tex)
{
    Sprite_DrawShape((int)posX, (int)posY, (int)width, (int)height, texU, texV, texW, texH, color, tex);
}

// 0x006a5c4 (0x70 bytes)
/* Sprite_DrawShape with an effect texture by its index in EffectTexHeaders */
void Sprite_DrawShapeWrapper(int posX, int posY, int width, int height, int texU, int texV, int texW, int texH, u32 color, int tex)
{
    Sprite_DrawShape(posX, posY, width, height, texU, texV, texW, texH, color, (u8 *)(uintptr_t)EffectTexHeaders + tex * 0x24);
}

// 0x0068c70 (0x3e4 bytes)
/* Draws len bytes of str with g_JapanFontTex. Bytes 8..15 pick a palette colour, bytes below 32
   are 24x16 grey glyphs, 0xbd/0xbe are diacritics placed against the previous character */
void FontPrintScaledJapanese(float posX, float posY, u32 color, const u8 *str, int len, float scale, int unused, const FontGlyph *table)
{
    if (g_FontKeepPalette == 0) {
        g_FontPalette[0] = color;
    }

    int wide = (int)(scale * 24.0f);
    int size = (int)(scale * 16.0f);

    for (int i = 0; i != len; i++) {
        u8 code = str[i];

        if (code == 0) {
            return;
        }

        if (code >= 8 && code <= 15) {
            if (g_FontColorsEnabled != 0) {
                color = (color & 0xff000000) | (g_FontPalette[code - 8] & 0xffffff);
            }

            continue;
        }

        float yOff = (float)FastIntToDouble(table[code].yOff);

        code = str[i];

        if (table[code].width == 0) {
            continue;
        }

        const FontGlyph *glyph = &table[code];

        if (code < 32) {
            u32 sum = (color & 0xff) + ((color >> 8) & 0xff) + ((color >> 16) & 0xff) + 1;
            u32 grey = (sum * 341) >> 10;
            u32 greyColor = (color & 0xff000000) + (grey << 16) + (grey << 8) + grey;

            Sprite_DrawShape((int)posX, (int)(yOff * scale + posY), wide, size, glyph->u, glyph->v, 24, 16, greyColor, &g_JapanFontTex);
        }
        else if (code == 0xbd || code == 0xbe) {
            u8 prev = str[i - 1];
            const FontGlyph *mark = &table[prev + 0x80];
            int shift = mark->width - table[prev].width;

            Sprite_DrawShape((int)(shift * scale + posX), (int)(mark->yOff * scale + posY), size, size, glyph->u, glyph->v, 16, 16, color, &g_JapanFontTex);

            shift = mark->width - table[str[i - 1]].width;
            posX = (shift + (str[i] == 0xbe) + 4) * scale + posX;

            continue;
        }
        else if (code > 32) {
            Sprite_DrawShape((int)posX, (int)(yOff * scale + posY), size, size, glyph->u, glyph->v, 16, 16, color, &g_JapanFontTex);
        }

        posX = (float)FastIntToDouble(table[str[i]].width) * scale + posX;
    }
}

// 0x0069058 (0x7c bytes)
/* Width of the first len characters of str (up to a 0 byte) in table, times scale */
int FontLenScaledWithTableNoKern(const u8 *str, int len, float scale, const FontGlyph *table)
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
void FontPrintOptJapanese(FontWindow *win, u32 color, const u8 *str, int len, int unused, const FontGlyph *table, float scale)
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
                    u8 code = str[pos];

                    if (code == ' ' || code < 16) {
                        breakAt = pos;
                    }

                    if (g_FontColorsEnabled != 0 && code >= 8 && code <= 15) {
                        colorIdx = code - 8;
                    }

                    if (code == 0 || code == 1) {
                        break;
                    }

                    pos++;
                    lineWidth += table[code].width;
                } while (lineWidth < width);
            }

            lineEnd[lines] = breakAt;

            if ((short)breakAt == (short)start) {
                lineEnd[lines] = pos;
            }

            pos = lineEnd[lines];

            u8 code = str[pos];

            if (code == ' ' || code < 16) {
                lineEnd[lines] = pos - 1;
            }

            lines++;

            if (code == 0) {
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

    int posY = textY;

    if (flags & 2) {
        posY = textY - ((short)spacing * lines >> 1);
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

            int posX = win->text_x;

            if (flags & 1) {
                posX = win->text_x - (pixels >> 1);
            }

            float drawX = (float)posX;
            float drawY = (float)posY;

            if (flags & 8) {
                drawX = (float)win->sub_pixel_x * 0.0625f + drawX;
                drawY = (float)win->sub_pixel_y * 0.0625f + drawY;
            }

            FontPrintScaledJapanese(drawX, drawY, g_FontPalette[lineColor[i]], line, count, scale, unused, table);
        }

        posY += win->line_spacing;
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

    IdolDraw_SetTextureRegs(HUD_Pass, 0, (RsxCmd *)words);
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
void FontPrintScaledWestern(float posX, float posY, u32 color, const u8 *str, int len, float scale, u64 tex, const FontGlyph *table)
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
        u8 code = str[i];

        if (code == 0) {
            return;
        }

        if (code >= 8 && code <= 15) {
            if (g_FontColorsEnabled != 0) {
                color = (color & 0xff000000) | (g_FontPalette[code - 8] & 0xffffff);
            }

            continue;
        }

        if (table[code].width == 0) {
            continue;
        }

        float yOff = (float)FastIntToDouble(table[code].yOff);

        code = str[i];

        if (code >= 128 && code < 168) {
            const FontGlyph *mark = &table[code + 0x40];
            float markX = (float)FastIntToDouble(mark->width);
            float markY = (float)FastIntToDouble(mark->yOff);

            DrawSpriteFont(markX * scale + posX, markY * scale + posY, size, size, mark->u, mark->v + 1, 16, 15, color, tex);

            code = str[i];
        }

        const FontGlyph *glyph = &table[code];
        float drawY = yOff * scale + posY;

        if (code < 32) {
            u32 sum = (color & 0xff) + ((color >> 8) & 0xff) + ((color >> 16) & 0xff) + 1;
            u32 grey = (sum * 341) >> 10;
            u32 greyColor = (color & 0xff000000) + (grey << 16) + (grey << 8) + grey;

            DrawSpriteFont(posX, drawY, wide, size, glyph->u, glyph->v + 1, 24, 15, greyColor, tex);
        }
        else if (code > 32) {
            DrawSpriteFont(posX, drawY, size, size, glyph->u, glyph->v + 1, 16, 15, color, tex);
        }

        posX = (float)FastIntToDouble(table[str[i]].width) * scale + posX;
    }
}

// 0x0069db8 (0x750 bytes)
/* FontPrintOptJapanese for the Western fonts through FontPrintScaledWestern. A scale of 1 becomes 0.9 in
   languages 2..5 (0.8 in language 3 with flag 0x10). Lines are balanced: while the line count
   holds and the last line is under a third of the width, the width shrinks by 16 and the text is
   broken again; if a narrower width adds a line, the original width is used. */
void FontPrintOptWestern(FontWindow *win, u32 color, const char *text, int len, int tex, void *glyphs, float scale)
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
                        u8 code = str[pos];

                        if (code == ' ' || code < 16) {
                            breakAt = pos;
                        }

                        if (g_FontColorsEnabled != 0 && code >= 8 && code <= 15) {
                            colorIdx = code - 8;
                        }

                        if (code == 0 || code == 1) {
                            break;
                        }

                        pos++;
                        lineWidth += (int)((float)table[code].width * scale);
                    } while (lineWidth < width);
                }

                lineEnd[lines] = breakAt;

                if ((short)breakAt == (short)start) {
                    lineEnd[lines] = pos;
                }

                pos = lineEnd[lines];

                u8 code = str[pos];

                if (code == ' ' || code < 16) {
                    lineEnd[lines] = pos - 1;
                }

                lines++;

                if (code == 0) {
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

    int posY = textY;

    if (flags & 2) {
        posY = textY - ((short)spacing * lines >> 1);
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

            int posX = win->text_x;

            if (flags & 1) {
                posX = win->text_x - (pixels >> 1);
            }

            float drawX = (float)posX;
            float drawY = (float)posY;

            if (flags & 8) {
                drawX = (float)win->sub_pixel_x * 0.0625f + drawX;
                drawY = (float)win->sub_pixel_y * 0.0625f + drawY;
            }

            FontPrintScaledWestern(drawX, drawY, g_FontPalette[lineColor[i]], line, count, scale, tex, table);
        }

        posY += win->line_spacing;
    }

    g_FontKeepPalette = 0;
}

// 0x006a510 (0xb4 bytes)
/* text in win at scale 1 with the medium font: JapaneseGlyphs in Japanese mode, else
   MediumWesternGlyphs, both on effect texture 1 (used by the cheats menu, "No cheats activated") */
void FontPrintMediumOpt(FontWindow *win, u32 color, const char *str, int len)
{
    if (g_JapaneseMode) {
        FontPrintOptJapanese(win, color, (const u8 *)str, len, GetEffectTex(1), (const FontGlyph *)&JapaneseGlyphs, 1.0f);
    }
    else {
        FontPrintOptWestern(win, color, str, len, GetEffectTex(1), &MediumWesternGlyphs, 1.0f);
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
        FontPrintOptJapanese(window, 0x80b0b0b0, (const u8 *)text, -1, GetEffectTex(1), (const FontGlyph *)&JapaneseGlyphs, 1.0f);
    }
    else {
        FontPrintOptWestern(window, 0x80b0b0b0, text, -1, GetEffectTex(1), &MediumWesternGlyphs, 1.0f);
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
void DrawScreenOverlayTex(int red, int green, int blue, int alpha, void *tex)
{
    DrawFullScreenQuad(alpha << 24 | (blue & 0xff) << 16 | (green & 0xff) << 8 | (red & 0xff), tex);
}

// 0x006b5dc (0x5c bytes)
void DrawScreenOverlay(int red, int green, int blue, int alpha)
{
    DrawFullScreenQuad(alpha << 24 | (blue & 0xff) << 16 | (green & 0xff) << 8 | (red & 0xff), FlatTex());
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
void ExecuteMobyDraws(void)
{
    for (int i = 0; i < g_MobyDrawCount; i++) {
        g_MobyDrawFuncs[i](g_MobyDrawArgs[i]);
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
        CullTerrain(texBase, (uintptr_t)tfragInfo);
        FUN_004ec8a4(renderState, tfragInfo[1], (int)tfragInfo[0]);
        SortTerrainMaterials((int)(uintptr_t)tfragInfo);
    }

    if (g_RenderFlags & Ties) {
        CullTieInstances(texBase, (undefined4 *)tieInfo);
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
        ExecuteMobyDraws();
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

    g_GsRegBlend = 0xffffffff;
    idol_draw::InitFrameRenderState((int)(uintptr_t)&DAT_01111700, DirectionalLights, 16, PointLights, 8, &g_HeroLightDir, 4);
    DrawPauseMenu(0);
}

// 0x006c5dc (0x10 bytes)
void EnableFontColors(void)
{
    g_FontColorsEnabled = 1;
}

/* a palette byte (8..15) changes color when font colours are on; true when ch was one */
static inline bool FontPaletteCode(u8 code, u32 *color)
{
    if (code < 8 || code > 15) {
        return false;
    }

    if (g_FontColorsEnabled != 0) {
        *color = (*color & 0xff000000) | (g_FontPalette[code - 8] & 0xffffff);
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
void FontPrintJapanese(int posX, int posY, u32 color, const char *text, int len, int unused, void *glyphs)
{
    const u8 *str = (const u8 *)text;
    const FontGlyph *table = (const FontGlyph *)glyphs;

    if (g_FontKeepPalette == 0) {
        g_FontPalette[0] = color;
    }

    for (int i = 0; i != len; i++) {
        u8 code = str[i];

        if (code == 0) {
            return;
        }

        if (FontPaletteCode(code, &color)) {
            continue;
        }

        const FontGlyph *glyph = &table[code];

        if (glyph->width == 0) {
            continue;
        }

        if (code < 32) {
            Sprite_DrawShape(posX, posY + glyph->yOff, 24, 16, glyph->u, glyph->v, 24, 16, FontGrey(color), &g_JapanFontTex);
        }
        else if (code == 0xbd || code == 0xbe) {
            u8 prev = str[i - 1];
            const FontGlyph *mark = &table[prev + 0x80];

            Sprite_DrawShape(posX - table[prev].width + mark->width, posY + mark->yOff, 16, 16, glyph->u, glyph->v, 16, 16, color, &g_JapanFontTex);

            posX = (mark->width - table[str[i - 1]].width) + (str[i] == 0xbe) + posX + 4;

            continue;
        }
        else if (code > 32) {
            Sprite_DrawShape(posX, posY + glyph->yOff, 16, 16, glyph->u, glyph->v, 16, 16, color, &g_JapanFontTex);
        }

        posX += table[str[i]].width;
    }
}

// 0x006c8d0 (0x33c bytes)
/* FontPrintScaledWestern at scale 1 in whole pixels through Sprite_DrawShape, glyphs a full 16 high */
void FontPrint(int posX, int posY, u32 color, const char *text, int len, int tex, void *glyphs)
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
        u8 code = str[i];

        if (code == 0) {
            return;
        }

        if (FontPaletteCode(code, &color)) {
            continue;
        }

        if (table[code].width == 0) {
            continue;
        }

        if (code >= 128 && code < 168) {
            const FontGlyph *mark = &table[code + 0x40];

            Sprite_DrawShape(posX + mark->width, posY + mark->yOff, 16, 16, mark->u, mark->v, 16, 16, color, texHeader);

            code = str[i];
        }

        const FontGlyph *glyph = &table[code];

        if (code < 32) {
            Sprite_DrawShape(posX, posY + glyph->yOff, 24, 16, glyph->u, glyph->v, 24, 16, FontGrey(color), texHeader);
        }
        else if (code > 32) {
            Sprite_DrawShape(posX, posY + glyph->yOff, 16, 16, glyph->u, glyph->v, 16, 16, color, texHeader);
        }

        posX += table[str[i]].width;
    }
}

// 0x006cc0c (0xa8 bytes)
/* str at (posX, posY) in the medium font: JapaneseGlyphs in Japanese mode, else MediumWesternGlyphs */
void FontPrintMediumLeft(int posX, int posY, u32 color, const char *str, int len)
{
    if (g_JapaneseMode) {
        FontPrintJapanese(posX, posY, color, str, len, GetEffectTex(1), &JapaneseGlyphs);
    }
    else {
        FontPrint(posX, posY, color, str, len, GetEffectTex(1), &MediumWesternGlyphs);
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
int FontLenWithTable(char *text, int len, void *glyphs)
{
    const FontGlyph *table = (const FontGlyph *)glyphs;
    int width = 0;

    for (int i = 0; i != len; i++) {
        u8 code = text[i];

        if (code == 0) {
            return width;
        }

        int advance = table[code].width;

        if (advance == 0) {
            continue;
        }

        if (code < 0xbd || code > 0xbe) {
            width += advance;
        }
        else {
            u8 prev = text[i - 1];

            width = (table[prev + 0x80].width - table[prev].width) + (code == 0xbe) + width + 4;
        }
    }

    return width;
}

// 0x006cd80 (0x68 bytes)
int FontLenWithTableNoKern(char *text, int len, void *glyphs)
{
    const FontGlyph *table = (const FontGlyph *)glyphs;
    int width = 0;

    for (int i = 0; i != len; i++) {
        u8 code = text[i];

        if (code == 0) {
            return width;
        }

        width += table[code].width;
    }

    return width;
}

// 0x006cde8 (0xb0 bytes)
/* width of s in the medium font */
int FontLen(char *text, int len)
{
    if (g_JapaneseMode) {
        return FontLenWithTable(text, len, &JapaneseGlyphs);
    }

    return FontLenWithTableNoKern(text, len, &MediumWesternGlyphs);
}

// 0x006cea0 (0x2dc bytes)
/* str in a HUD text box at posY: starting at posX (align -1), centred on posX (0) or ending at posX (1);
   the box is sized for the text at scale and has opacity scale; the text is drawn with a black
   shadow and its alpha is alpha * 128 */
void DrawFancyTextWithBox(int posX, int posY, int align, float scale, float alpha, char *str)
{
    int width = (int)((float)FontLen(str, -1) * scale);
    int left = posX;
    int right = posX;

    if (align == -1) {
        right = width + posX;
    }
    else if (align == 0) {
        left = posX - (width >> 1);
        right = posX + (width >> 1);
    }
    else if (align == 1) {
        left = posX - width;
    }

    Hud_DrawTextBox(left - 32, posY - 14, right - left + 64, 28, FastDoubleToInt(scale * 112.0f));

    g_FontColorsEnabled = 0;

    int color = ((int)(alpha * 128.0f) << 24) + 0xe0e0e0;

    if (g_JapaneseMode) {
        FontPrintJapanese(left + 1, posY - 7, color & 0xff000000, str, -1, GetEffectTex(1), &JapaneseGlyphs);
        FontPrintJapanese(left, posY - 8, color, str, -1, GetEffectTex(1), &JapaneseGlyphs);
    }
    else {
        FontPrint(left + 1, posY - 7, color & 0xff000000, str, -1, GetEffectTex(1), &MediumWesternGlyphs);
        FontPrint(left, posY - 8, color, str, -1, GetEffectTex(1), &MediumWesternGlyphs);
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

    int msgId = msg->id;

    if (msgId < 20790) {
        msgId--;
    }

    char *text = help_msg_string_by_index((StringId)msgId);
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

    int posY = msg->y;

    while (*text != 0) {
        if (*text == 1) {
            *out = 0;
            DrawFancyTextWithBox(msg->x, posY, msg->align, scale, alpha, line);

            posY += 26;
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
        DrawFancyTextWithBox(msg->x, posY, msg->align, scale, alpha, line);
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
void RegisterMobyDraw(void **function, MobyInstance *moby)
{
    if (g_MobyDrawCount < 64) {
        g_MobyDrawFuncs[g_MobyDrawCount] = (MobyDrawFunc)function;
        g_MobyDrawArgs[g_MobyDrawCount] = moby;
        g_MobyDrawCount++;
    }
}

// 0x006d760 (0x40 bytes)
/* adds func(moby) to the pre-draws, run after the tfrags and ties (64 at most) */
void RegisterPreDraw(undefined4 func, MobyInstance *moby)
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
/* Each of the g_NumLameShadows queued blob shadows (DL: LameShadows, a position whose width is the
   size and a surface normal) as a quad of effect texture TexInfo[0]: LameShadowTable's corner
   offsets (posX, posY) taken into the surface plane and scaled by the size, its posZ, width the texture
   coordinates. */
void DrawLameShadows(void)
{
    Vec4 (*shadows)[2] = (Vec4 (*)[2])&g_LameShadows;
    QuadDef quad;
    float *coords = &quad.st[0][0];

    quad.tex0 = ((int *)(uintptr_t)TexInfo)[0];
    quad.tex1 = SCE_GS_SET_TEX1(0, 0, 1, 1, 1, 0, 0xff90);
    quad.clamp = SCE_GS_SET_CLAMP(1, 1, 0, 0, 0, 0);
    quad.alpha = idol_draw::PackCmd(0, 1, 0, 1, 0x80);

    for (int i = 0; i < 4; i++) {
        coords[i * 2] = LameShadowTable[i].z;
        coords[i * 2 + 1] = LameShadowTable[i].w;
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

        FastDrawQuad(&quad, NULL, 0, (void *)(uintptr_t)EffectTexHeaders, 9);
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
    WaitForRsxLabel(idol->unk1a74);
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
/* Texels (0, 0, texWidth, texHeight) of effect texture tex (flipped by flipU, flipV) as a width by height quad at
   (posX, posY) turned by angle about the pivot (pivotX, pivotY), fractions of the quad's size. With
   perEye set each vertex position is preceded by FUN_004e3178 (presumably the stereo offset).
   unused is never read. */
void Sprite_DrawRotated(float posX, float posY, float width, float height, float angle, float pivotX, float pivotY, int texWidth, int texHeight, int tex, int unused, u32 color, int flipU, int flipV, int perEye)
{
    float sinA = FastSinInline(angle);
    float cosA = FastCosInline(angle);
    float hSin = height * sinA;
    float wSin = width * sinA;
    float hCos = height * cosA;
    float wCos = width * cosA;

    float topX = (1.0f - pivotY) * hSin + posX;
    float topY = (1.0f - pivotY) * hCos + posY;
    float bottomX = posX - hSin * pivotY;
    float bottomY = posY - hCos * pivotY;

    float pos[4][2] = {
        { topX - (1.0f - pivotX) * wCos, topY + wSin * (1.0f - pivotX) },
        { bottomX - (1.0f - pivotX) * wCos, bottomY + wSin * (1.0f - pivotX) },
        { pivotX * wCos + bottomX, bottomY - wSin * pivotX },
        { pivotX * wCos + topX, topY - wSin * pivotX },
    };

    int texLeft = (u8)flipU ? texWidth * 2 : 0;
    int texRight = (u8)flipU ? 0 : texWidth * 2;
    int texTop = (u8)flipV ? texHeight * 2 : 0;
    int texBottom = (u8)flipV ? 0 : texHeight * 2;
    int texel[4][2] = { { texLeft, texTop }, { texLeft, texBottom }, { texRight, texBottom }, { texRight, texTop } };

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
        Emit(HUD_Pass, (texel[i][1] & 0xffff) << 16 | (texel[i][0] & 0xffff));

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
   texels (texU low, texV high), PS2 colours; the vertices go in the order 0, 1, 3, 2 */
void DrawScreenQuad(u64 *screenXY, int *uvs, u32 *rgba, int tex, int clamp)
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

        u32 texel = uvs[vertex];
        int texU = (texel >> 3) & 0x1fff;
        int texV = ((texel >> 16) >> 3) & 0x1fff;

        Emit(HUD_Pass, HUD_SET_TEXCOORD2S);
        Emit(HUD_Pass, texV << 16 | texU);

        u64 pos = screenXY[vertex];
        int posX = (int)((float)(int)((pos & 0xffff) - SCREEN_PROJECTION_MAP_X) * 0.0625f);
        int posY = (int)((float)(int)(((pos >> 16) & 0xffff) - SCREEN_PROJECTION_MAP_Y) * 0.0625f);

        Emit(HUD_Pass, HUD_SET_POSITION2S);
        Emit(HUD_Pass, (posY & 0xffff) << 16 | (posX & 0xffff));
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
int FontLenSmall(char *text, int len)
{
    if (g_JapaneseMode) {
        return FontLenWithTable(text, len, &JapaneseGlyphs);
    }

    return FontLenWithTableNoKern(text, len, &Glyphs);
}

// 0x006f860 (0xb0 bytes)
/* width of s in the large font */
int FontLenLarge(char *text, int len)
{
    if (g_JapaneseMode) {
        return FontLenWithTable(text, len, &JapaneseGlyphs);
    }

    return FontLenWithTableNoKern(text, len, &LargeWesternGlyphs);
}

// 0x006f918 (0xe4 bytes)
/* FontLenWithTable at scale, summed in floats */
int FontLenScaledWithTable(const char *text, int len, float scale, void *glyphs)
{
    const u8 *str = (const u8 *)text;
    const FontGlyph *table = (const FontGlyph *)glyphs;
    float width = 0.0f;

    for (int i = 0; i != len; i++) {
        u8 code = str[i];

        if (code == 0) {
            break;
        }

        int advance = table[code].width;

        if (advance == 0) {
            continue;
        }

        if (code >= 0xbd && code <= 0xbe) {
            u8 prev = str[i - 1];

            advance = (table[prev + 0x80].width - table[prev].width) + (code == 0xbe) + 4;
        }

        width = (float)advance * scale + width;
    }

    return (int)width;
}

/* FontLenScaledWithTableNoKern for a Western table, in Japanese mode FontLenScaledWithTable */
static inline int FontLenScaledIn(const char *text, int len, float scale, void *western)
{
    if (g_JapaneseMode) {
        return FontLenScaledWithTable(text, len, scale, &JapaneseGlyphs);
    }

    return FontLenScaledWithTableNoKern((const u8 *)text, len, scale, (const FontGlyph *)western);
}

// 0x006fa00 (0xc4 bytes)
int FontLenScaled(const char *text, int len, float scale)
{
    return FontLenScaledIn(text, len, scale, &MediumWesternGlyphs);
}

// 0x006fac8 (0xc4 bytes)
int FontLenScaledSmall(const char *text, int len, float scale)
{
    return FontLenScaledIn(text, len, scale, &Glyphs);
}

// 0x006fb90 (0xc4 bytes)
int FontLenScaledLarge(const char *text, int len, float scale)
{
    return FontLenScaledIn(text, len, scale, &LargeWesternGlyphs);
}

// 0x006fc54 (0xa8 bytes)
/* str at (posX, posY) in the small font (effect texture 2) */
void FontPrintSmallLeft(int posX, int posY, u32 color, const char *str, int len)
{
    if (g_JapaneseMode) {
        FontPrintJapanese(posX, posY, color, str, len, GetEffectTex(1), &JapaneseGlyphs);
    }
    else {
        FontPrint(posX, posY, color, str, len, GetEffectTex(2), &Glyphs);
    }
}

// 0x006fcfc (0xa8 bytes)
/* str at (posX, posY) in the large font (effect texture 3) */
void FontPrintLarge(int posX, int posY, u32 color, const char *str, int len)
{
    if (g_JapaneseMode) {
        FontPrintJapanese(posX, posY, color, str, len, GetEffectTex(1), &JapaneseGlyphs);
    }
    else {
        FontPrint(posX, posY, color, str, len, GetEffectTex(3), &LargeWesternGlyphs);
    }
}

/* FontPrintScaledWestern with Western table western on effect texture tex, in Japanese mode
   FontPrintScaledJapanese */
static inline void FontPrintScaledIn(float posX, float posY, u32 color, const char *str, int len, float scale, int tex, void *western)
{
    if (g_JapaneseMode) {
        FontPrintScaledJapanese(posX, posY, color, (const u8 *)str, len, scale, GetEffectTex(1), (const FontGlyph *)&JapaneseGlyphs);
    }
    else {
        FontPrintScaledWestern(posX, posY, color, (const u8 *)str, len, scale, GetEffectTex(tex), (const FontGlyph *)western);
    }
}

// 0x006fda4 (0xa0 bytes)
void FontPrintScaledMedium(float posX, float posY, u32 color, const char *str, int len, float scale)
{
    FontPrintScaledIn(posX, posY, color, str, len, scale, 1, &MediumWesternGlyphs);
}

// 0x006fe44 (0xa0 bytes)
void FontPrintScaledSmall(float posX, float posY, u32 color, const char *str, int len, float scale)
{
    FontPrintScaledIn(posX, posY, color, str, len, scale, 2, &Glyphs);
}

// 0x006fee4 (0xa0 bytes)
void FontPrintScaledLarge(float posX, float posY, u32 color, const char *str, int len, float scale)
{
    FontPrintScaledIn(posX, posY, color, str, len, scale, 3, &LargeWesternGlyphs);
}

// 0x006ff88 (0x1a8 bytes)
/* str in the medium font at scale, ending at posX */
void FontPrintRightWithScale(int posX, int posY, u32 color, const char *str, int len, float scale)
{
    int width = FontLenScaled(str, len, scale);

    FontPrintScaledMedium((float)(posX - width), (float)posY, color, str, len, scale);
}

// 0x0070130 (0x14c bytes)
/* str in the medium font ending at posX */
void FontPrintMediumRight(int posX, int posY, u32 color, char *str, int len)
{
    FontPrintMediumLeft(posX - FontLen(str, len), posY, color, str, len);
}

// 0x007027c (0x14c bytes)
/* str in the small font ending at posX */
void FontPrintSmallRight(int posX, int posY, u32 color, char *str, int len)
{
    FontPrintSmallLeft(posX - FontLenSmall(str, len), posY, color, str, len);
}

// 0x00703c8 (0x14c bytes)
/* str in the large font ending at posX */
void FontPrintLargeRight(int posX, int posY, u32 color, char *str, int len)
{
    FontPrintLarge(posX - FontLenLarge(str, len), posY, color, str, len);
}

// 0x0070514 (0x164 bytes)
/* str in the medium font centred on posX; returns its left edge */
int FontPrintMediumCenter(int posX, int posY, u32 color, const char *str, int len)
{
    posX -= FontLen((char *)str, len) >> 1;

    FontPrintMediumLeft(posX, posY, color, str, len);

    return posX;
}

// 0x0070680 (0x1b4 bytes)
/* str in the medium font at scale centred on posX; returns its left edge */
int FontPrintCenterScaled(int posX, int posY, u32 color, const char *str, int len, float scale)
{
    posX -= FontLenScaled(str, len, scale) >> 1;

    FontPrintScaledMedium((float)posX, (float)posY, color, str, len, scale);

    return posX;
}

// 0x0070834 (0x164 bytes)
/* str in the small font centred on posX; returns its left edge */
int FontPrintSmallCenter(int posX, int posY, u32 color, char *str, int len)
{
    posX -= FontLenSmall(str, len) >> 1;

    FontPrintSmallLeft(posX, posY, color, str, len);

    return posX;
}

// 0x0070998 (0x164 bytes)
/* str in the large font centred on posX; returns its left edge */
int FontPrintLargeCenter(int posX, int posY, u32 color, char *str, int len)
{
    posX -= FontLenLarge(str, len) >> 1;

    FontPrintLarge(posX, posY, color, str, len);

    return posX;
}

// 0x0070b00 (0x1ac bytes)
void FontPrintCenterScaledMedium(int posX, int posY, u32 color, const char *str, int len, float scale)
{
    posX -= FontLenScaled(str, len, scale) >> 1;

    FontPrintScaledMedium((float)posX, (float)posY, color, str, len, scale);
}

// 0x0070cb0 (0x1ac bytes)
void FontPrintCenterScaledSmall(int posX, int posY, u32 color, const char *str, int len, float scale)
{
    posX -= FontLenScaledSmall(str, len, scale) >> 1;

    FontPrintScaledSmall((float)posX, (float)posY, color, str, len, scale);
}

// 0x0070e60 (0x1ac bytes)
void FontPrintCenterScaledLarge(int posX, int posY, u32 color, const char *str, int len, float scale)
{
    posX -= FontLenScaledLarge(str, len, scale) >> 1;

    FontPrintScaledLarge((float)posX, (float)posY, color, str, len, scale);
}

// 0x007100c (0xa8 bytes)
/* text in win at scale with the small font (Glyphs on effect texture 2) */
void FontPrintOpt(FontWindow *win, u32 color, const char *str, int len, float scale)
{
    if (g_JapaneseMode) {
        FontPrintOptJapanese(win, color, (const u8 *)str, len, GetEffectTex(1), (const FontGlyph *)&JapaneseGlyphs, scale);
    }
    else {
        FontPrintOptWestern(win, color, str, len, GetEffectTex(2), &Glyphs, scale);
    }
}

// 0x00710b8 (0xb4 bytes)
/* text in win at scale 1 with the large font (LargeWesternGlyphs on effect texture 3) */
void FontPrintOptLarge(FontWindow *win, u32 color, const char *str, int len)
{
    if (g_JapaneseMode) {
        FontPrintOptJapanese(win, color, (const u8 *)str, len, GetEffectTex(1), (const FontGlyph *)&JapaneseGlyphs, 1.0f);
    }
    else {
        FontPrintOptWestern(win, color, str, len, GetEffectTex(3), &LargeWesternGlyphs, 1.0f);
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
/* DL's BeginAuxDrawMode: points the HUD pass at the aux buffer, a (1 << log2Width) by
   (1 << log2Height) surface at the renderer's auxBuffer with its depth after it, and sets the
   screen globals, the view context (xratio, near 32, far and fog 524288) and viewport to match;
   clears it to clearColor. g_AuxBufferTex describes the result as a texture. flag is not read. */
void BeginAuxDrawMode(float xratio, int log2Width, int log2Height, int flag, u32 clearColor)
{
    int width = 1 << log2Width;
    int height = 1 << log2Height;

    g_ScreenWidth = width;
    g_ScreenHeight = height;
    g_ScreenHalfWidth = width >> 1;
    g_ScreenHalfHeight = height >> 1;
    SCREEN_PROJECTION_MAP_X = (2048 - g_ScreenHalfWidth) << 4;
    SCREEN_PROJECTION_MAP_Y = (2048 - g_ScreenHalfHeight) << 4;
    DAT_00966b18 = (g_ScreenHalfWidth << 4) + 0x8000;
    DAT_00966b1c = (g_ScreenHalfHeight << 4) + 0x8000;

    g_ViewContext.fovScale = 1.0f;
    g_ViewContext.nearClip = 32.0f;
    g_ViewContext.farClip = 524288.0f;
    g_ViewContext.xratio = xratio;
    g_ViewContext.xpix = (float)FastIntToDouble(width) * 0.5f;
    g_ViewContext.ypix = (float)FastIntToDouble(height) * 0.5f;
    g_ViewContext.fogNearDist = 0.0f;
    g_ViewContext.fogFarDist = 524288.0f;
    g_ViewContext.fogNearIntensity = 255.0f;
    g_ViewContext.fogFarIntensity = 0.0f;
    g_ViewContext.xclip = g_ViewContext.xpix * 4.0f;
    g_ViewContext.yclip = g_ViewContext.ypix * 4.0f;

    UpdateViewContext();
    UploadViewMatricesToPasses();

    IdolDraw *idol = Idol();

    g_AuxWidth = width;
    g_AuxHeight = height;
    idol->auxDepth++;

    IdolSurface surface;

    memset(&surface, 0, sizeof(surface));
    surface.type = CELL_GCM_SURFACE_PITCH;
    surface.colorFormat = CELL_GCM_SURFACE_A8R8G8B8;
    surface.colorTarget = CELL_GCM_SURFACE_TARGET_0;
    surface.colorOffset[0] = idol->auxBuffer - idol->vramBase;
    surface.colorPitch[0] = width * 4;

    for (int i = 1; i < 4; i++) {
        surface.colorLocation[i] = 0;
        surface.colorOffset[i] = 0;
        surface.colorPitch[i] = 64;
    }

    surface.depthFormat = CELL_GCM_SURFACE_Z24S8;
    surface.depthOffset = idol->auxBuffer + height * width * 4 - idol->vramBase;
    surface.depthPitch = width * 4;
    surface.width = width;
    surface.height = height;

    /* the buffer as an effect texture header */
    g_AuxBufferTex[0] = surface.colorOffset[0];
    g_AuxBufferTex[1] = 0x1a529;
    g_AuxBufferTex[2] = 0x30303;
    g_AuxBufferTex[3] = 0x80010000;
    g_AuxBufferTex[4] = 0xaae4;
    g_AuxBufferTex[5] = 0x2062000;
    g_AuxBufferTex[6] = width << 16 | height;
    g_AuxBufferTex[7] = (width * 4) | 1 << 20;
    ((u8 *)g_AuxBufferTex)[32] = 0;
    ((u8 *)g_AuxBufferTex)[33] = 0xff;

    EmitSetSurface(HUD_Pass, &surface);

    EmitMethod(HUD_Pass, CELL_GCM_NV4097_SET_COLOR_CLEAR_VALUE, clearColor);
    EmitMethod(HUD_Pass, CELL_GCM_NV4097_SET_ZSTENCIL_CLEAR_VALUE, 0xffffff00);
    EmitMethod(HUD_Pass, CELL_GCM_NV4097_SET_DEPTH_MASK, 1);
    EmitMethod(HUD_Pass, CELL_GCM_NV4097_SET_DEPTH_TEST_ENABLE, 1);
    EmitMethod(HUD_Pass, CELL_GCM_NV4097_SET_BLEND_ENABLE, 1);
    EmitMethod(HUD_Pass, CELL_GCM_NV4097_INVALIDATE_L2, 1);

    float halfWidth = (float)width * 0.5f;
    float halfHeight = (float)height * 0.5f;
    float screen[4] = { halfWidth, halfHeight, halfWidth, -halfHeight };

    EmitVertexConstVec(HUD_Pass, 18, screen);

    Emit(HUD_Pass, CELL_GCM_METHOD(CELL_GCM_NV4097_SET_VIEWPORT_HORIZONTAL, 2));
    Emit(HUD_Pass, width << 16);
    Emit(HUD_Pass, height << 16);
    Emit(HUD_Pass, CELL_GCM_METHOD(CELL_GCM_NV4097_SET_CLIP_MIN, 2));
    EmitF(HUD_Pass, 0.0f);
    EmitF(HUD_Pass, 1.0f);

    /* the viewport offset and scale, written twice */
    for (int i = 0; i < 2; i++) {
        Emit(HUD_Pass, CELL_GCM_METHOD(CELL_GCM_NV4097_SET_VIEWPORT_OFFSET, 8));
        EmitF(HUD_Pass, halfWidth);
        EmitF(HUD_Pass, halfHeight);
        EmitF(HUD_Pass, 0.5f);
        EmitF(HUD_Pass, 0.0f);
        EmitF(HUD_Pass, halfWidth);
        EmitF(HUD_Pass, -halfHeight);
        EmitF(HUD_Pass, 0.5f);
        EmitF(HUD_Pass, 0.0f);
    }

    Emit(HUD_Pass, CELL_GCM_METHOD(CELL_GCM_NV4097_SET_SCISSOR_HORIZONTAL, 2));
    Emit(HUD_Pass, width << 16);
    Emit(HUD_Pass, height << 16);

    idol_draw::BindVertexProgram((uintptr_t)idol, (int)(uintptr_t)HUD_Pass, 12);
    idol_draw::BindFragmentProgram((uintptr_t)idol, (int)(uintptr_t)HUD_Pass, 12);

    EmitMethod(HUD_Pass, CELL_GCM_NV4097_CLEAR_SURFACE, CELL_GCM_CLEAR_Z | CELL_GCM_CLEAR_S | CELL_GCM_CLEAR_R | CELL_GCM_CLEAR_G | CELL_GCM_CLEAR_B | CELL_GCM_CLEAR_A);
    EmitMethod(HUD_Pass, CELL_GCM_NV4097_NO_OPERATION, 0);

    SetGSReg(0x16, GsPackTest(0, 0, 0, 0, 0, 0, 1, 1));
    SetGSReg(3, idol_draw::PackCmd(0, 1, 0, 1, 0x80));
}

// 0x0071ac0 (0x4b0 bytes)
/* DL's EndAuxDrawMode: the view context and the HUD pass back on the frame buffer with the HUD's
   programs and states (no depth, alpha blending), and the HUD pass's cached texture and state
   words forgotten */
void EndAuxDrawMode(void)
{
    STUB_000780fc();
    InitViewContext();
    UpdateViewContext();

    IdolDraw *idol = Idol();

    idol->auxDepth--;

    EmitSetSurface(HUD_Pass, &idol->surface);

    FUN_004d86b0((int)(uintptr_t)idol);
    idol_draw::BindVertexProgram((uintptr_t)idol, (int)(uintptr_t)HUD_Pass, 12);
    idol_draw::BindFragmentProgram((uintptr_t)idol, (int)(uintptr_t)HUD_Pass, 12);

    EmitMethod(HUD_Pass, CELL_GCM_NV4097_SET_DEPTH_MASK, 0);
    EmitMethod(HUD_Pass, CELL_GCM_NV4097_SET_DEPTH_TEST_ENABLE, 0);
    EmitMethod(HUD_Pass, CELL_GCM_NV4097_SET_BLEND_ENABLE, 1);
    EmitMethod(HUD_Pass, CELL_GCM_NV4097_SET_BLEND_EQUATION, CELL_GCM_FUNC_ADD << 16 | CELL_GCM_FUNC_ADD);
    Emit(HUD_Pass, CELL_GCM_METHOD(CELL_GCM_NV4097_SET_BLEND_FUNC_SFACTOR, 2));
    Emit(HUD_Pass, CELL_GCM_SRC_ALPHA << 16 | CELL_GCM_SRC_ALPHA);
    Emit(HUD_Pass, CELL_GCM_ONE_MINUS_SRC_ALPHA << 16 | CELL_GCM_ONE_MINUS_SRC_ALPHA);
    EmitMethod(HUD_Pass, CELL_GCM_NV4097_SET_ALPHA_TEST_ENABLE, 0);

    idol->vtable->unk10(idol, (int)(uintptr_t)HUD_Pass, idol->unk04, idol->unk08);

    /* the pass's caches past its 0x14-byte header: four bound texture headers (IdolDraw_SetTextureRegs),
       state words at 0xa8, and the words at 0xc0 and 0xc4 */
    u8 *pass = (u8 *)HUD_Pass;

    memset(pass + 0x14, 0, 0x90);
    memset(pass + 0xa8, 0xff, 0x48);
    *(u32 *)(pass + 0xc4) = 0;
    *(u32 *)(pass + 0xc0) = 0;

    ComposeCameraMatrix();
}

// 0x0071f70 (0x130 bytes)
/* when there are effects in g_EffectTableCnt: the clamp, filtering and blend GS registers for
   them, and the two (empty) effect passes, the second with DAT_0095cd40 at -0.04 */
void ____Draw_FogBlendPass(void)
{
    if (g_EffectTableCnt == 0) {
        return;
    }

    SetGSReg(6, SCE_GS_SET_CLAMP(1, 1, 0, 0, 0, 0));
    SetGSReg(0x1a, SCE_GS_SET_TEX1(1, 0, 1, 1, 0, 0, 0));
    SetGSReg(0x16, idol_draw::Blend(1, 0, 0x3f, 1, 0, 0, 1, 2));
    SetGSReg(8, STUB_0050302c_RET_0(1));

    STUB_00074cec();

    float offset = -0.04f;

    DAT_0095cd40 = *(u32 *)&offset;
    STUB_00074ce8();
    DAT_0095cd40 = 0;

    SetGSReg(8, STUB_0050302c_RET_0(0));
}

// 0x00720a0 (0x88 bytes)
/* the PS2 alpha palette: entry i (stored at i with bits 3 and 4 swapped, the GS CLUT order)
   has alpha i / 2 */
void InitAlphaPal(void)
{
    for (int i = 0; i < 256; i++) {
        int slot = i & 0xe7;

        if (i & 8) {
            slot |= 0x10;
        }

        if (i & 0x10) {
            slot |= 8;
        }

        g_AlphaPal[slot] = (i >> 1) << 24;
    }
}

// 0x0072128 (0xd4 bytes)
/* the alpha GS words of the two screen colour effects (DL: ScreenColorEffect @0x71eed0 and
   ScreenColorEffectLight @0x71ef00); the level's effect is the current one */
void InitScreenEffects(void)
{
    ScreenVBEffect *normal = (ScreenVBEffect *)&DAT_0071eed0;
    ScreenVBEffect *light = (ScreenVBEffect *)&DAT_0071ef00;

    DAT_0071f004 = 0x10000;
    normal->BKG_alpha = idol_draw::PackCmd(2, 0, 0, 1, 0x1f);
    normal->A_alpha = idol_draw::PackCmd(2, 0, 0, 1, 0x1f);
    light->BKG_alpha = idol_draw::PackCmd(2, 0, 0, 1, 0x1f);
    light->A_alpha = idol_draw::PackCmd(2, 0, 0, 1, 0x1f);
    ScreenColorEffectLevel = (u32)(uintptr_t)ScreenColorEffectNow;
}

// 0x0072200 (0x8 bytes)
undefined8 STUB_00072200_RET_0(...)
{
    return 0;
}

// 0x0072208 (0x4 bytes)
void STUB_00072208(...)
{
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

/* colour bytes reversed */
static inline u32 SwapColor(u32 color)
{
    return color >> 24 | (color >> 8 & 0xff00) | color << 24 | (color & 0xff00) << 8;
}

/* pass index of the passes array that starts at DepthPass (0x8fa414) */
static inline RenderingStep *PassByIndex(int index)
{
    return ((RenderingStep **)&DepthPass)[index & 0xf];
}

/* a vertex of FastDrawQuad's buffer */
struct FastQuadVertex {
    float x;
    float y;
    float z;
    float s;
    float t;
    u32 color;
};

// 0x0072280 (0x508 bytes)
/* DL's FastDrawQuad: quad as a 4-vertex strip on pass passIndex with programs 5/6, transformed by
   mtx (whose width column is set to 0, 0, 0, 1 first) or the identity; texHeaders + quad->tex0 * 0x24
   is the texture, quad->clamp its sampler, quad->alpha (when set) the depth state. unused is not
   read. */
void FastDrawQuad(QuadDef *quad, Mtx4 *mtx, int unused, void *texHeaders, int passIndex)
{
    static const Mtx4 identity = {
        { 1.0f, 0.0f, 0.0f, 0.0f },
        { 0.0f, 1.0f, 0.0f, 0.0f },
        { 0.0f, 0.0f, 1.0f, 0.0f },
        { 0.0f, 0.0f, 0.0f, 1.0f },
    };

    IdolDraw *idol = Idol();
    RenderingStep *pass = PassByIndex(passIndex);

    idol_draw::BindVertexProgram((uintptr_t)idol, (int)(uintptr_t)pass, 5);
    idol_draw::BindFragmentProgram((uintptr_t)idol, (int)(uintptr_t)pass, 6);

    FastQuadVertex *vertices = (FastQuadVertex *)(uintptr_t)idol::AllocateMemAlign(FrameHeap, 0x60, 0x10);
    float *coords = &quad->st[0][0];

    for (int i = 0; i < 4; i++) {
        u32 color = quad->rgba[i];

        vertices[i].x = quad->xyzw[i].x;
        vertices[i].y = quad->xyzw[i].y;
        vertices[i].z = quad->xyzw[i].z;
        vertices[i].s = coords[i * 2];
        vertices[i].t = coords[i * 2 + 1];
        vertices[i].color = SwapColor(color);
    }

    if (quad->alpha != 0) {
        idol_draw::DrawDepth(pass, quad->alpha);
    }

    int samplerA;
    int samplerB;

    DecodeTexWrapModes(quad->clamp, &samplerA, &samplerB);
    IdolDraw_SetTexture(pass, 0, (u8 *)texHeaders + (int)quad->tex0 * 0x24, samplerA, samplerB);
    idol_draw::ResetPassState(pass);

    u32 offset = (u32)(uintptr_t)vertices - idol->memBase;

    /* position: 3 floats, coordinates: 2 floats, colour: 4 bytes; stride 24 */
    EmitMethod(pass, CELL_GCM_NV4097_SET_VERTEX_DATA_ARRAY_FORMAT + 0 * 4, 24 << 8 | 3 << 4 | CELL_GCM_VERTEX_F);
    EmitMethod(pass, CELL_GCM_NV4097_SET_VERTEX_DATA_ARRAY_FORMAT + 1 * 4, 24 << 8 | 2 << 4 | CELL_GCM_VERTEX_F);
    EmitMethod(pass, CELL_GCM_NV4097_SET_VERTEX_DATA_ARRAY_FORMAT + 3 * 4, 24 << 8 | 4 << 4 | CELL_GCM_VERTEX_UB);
    EmitMethod(pass, CELL_GCM_NV4097_SET_VERTEX_DATA_ARRAY_OFFSET + 0 * 4, offset | CELL_GCM_LOCATION_MAIN << 31);
    EmitMethod(pass, CELL_GCM_NV4097_SET_VERTEX_DATA_ARRAY_OFFSET + 1 * 4, (offset + 12) | CELL_GCM_LOCATION_MAIN << 31);
    EmitMethod(pass, CELL_GCM_NV4097_SET_VERTEX_DATA_ARRAY_OFFSET + 3 * 4, (offset + 20) | CELL_GCM_LOCATION_MAIN << 31);

    Mtx4 transposed;

    if (mtx == NULL) {
        transposed = identity;
    }
    else {
        mtx->v0.w = 0.0f;
        mtx->v1.w = 0.0f;
        mtx->v2.w = 0.0f;
        mtx->v3.w = 1.0f;
        Mtx4_Transpose(&transposed, mtx);
    }

    EmitVertexConstMtx(pass, 4, &transposed);

    /* (three words to method 0x1714, all zero) */
    Emit(pass, 0x400c1714);
    Emit(pass, 0);
    Emit(pass, 0);
    Emit(pass, 0);
    EmitMethod(pass, CELL_GCM_NV4097_SET_BEGIN_END, CELL_GCM_PRIMITIVE_TRIANGLE_STRIP);
    EmitMethod(pass, CELL_GCM_NV4097_DRAW_ARRAYS, (4 - 1) << 24 | 0);
    EmitMethod(pass, CELL_GCM_NV4097_SET_BEGIN_END, 0);

    EmitMethod(pass, CELL_GCM_NV4097_SET_VERTEX_DATA_ARRAY_FORMAT + 0 * 4, CELL_GCM_VERTEX_F);
    EmitMethod(pass, CELL_GCM_NV4097_SET_VERTEX_DATA_ARRAY_FORMAT + 1 * 4, CELL_GCM_VERTEX_F);
    EmitMethod(pass, CELL_GCM_NV4097_SET_VERTEX_DATA_ARRAY_FORMAT + 3 * 4, CELL_GCM_VERTEX_F);
}

// 0x0072788 (0x4 bytes)
void STUB_00072788(...)
{
}

/* libgcm's cellGcmSetDrawArrays from vertex 0: one DRAW_ARRAYS method with a word per batch of
   at most 256 vertices (the first batch, then whole batches, then the rest) */
static inline void EmitDrawArrays(RenderingStep *pass, int count)
{
    int first = count < 256 ? count : 256;
    int rest = count - first;

    if (rest < 0) {
        rest = 0;
    }

    int batches = rest >> 8;
    int remainder = rest & 0xff;
    int words = batches + (remainder != 0) + (first != 0);

    Emit(pass, CELL_GCM_METHOD(CELL_GCM_NV4097_DRAW_ARRAYS, words));

    int start = 0;

    if (first != 0) {
        Emit(pass, (first - 1) << 24);
        start = first;
    }

    for (int i = 0; i < batches; i++) {
        Emit(pass, start | 0xff000000);
        start += 256;
    }

    if (remainder != 0) {
        Emit(pass, start | (remainder - 1) << 24);
    }
}

/* the strip vertex layout of the FastDrawStrip family: position at 0, texture coordinates at
   0xc and 0x14, colour at 0x1c, 0x20 bytes apart */
static inline void EmitStripFormat(RenderingStep *pass, int attribute, int size, int type)
{
    EmitMethod(pass, CELL_GCM_NV4097_SET_VERTEX_DATA_ARRAY_FORMAT + attribute * 4, 0x20 << 8 | size << 4 | type);
}

static inline void EmitStripOffset(RenderingStep *pass, int attribute, u32 offset)
{
    EmitMethod(pass, CELL_GCM_NV4097_SET_VERTEX_DATA_ARRAY_OFFSET + attribute * 4, offset | CELL_GCM_LOCATION_MAIN << 31);
}

/* a strip of count vertices, then the given vertex arrays off again */
static inline void EmitStrip(RenderingStep *pass, int count)
{
    /* (three words to method 0x1714, all zero) */
    Emit(pass, 0x400c1714);
    Emit(pass, 0);
    Emit(pass, 0);
    Emit(pass, 0);
    EmitMethod(pass, CELL_GCM_NV4097_SET_BEGIN_END, CELL_GCM_PRIMITIVE_TRIANGLE_STRIP);
    EmitDrawArrays(pass, count);
    EmitMethod(pass, CELL_GCM_NV4097_SET_BEGIN_END, 0);
}

static inline void DisableArray(RenderingStep *pass, int attribute)
{
    EmitMethod(pass, CELL_GCM_NV4097_SET_VERTEX_DATA_ARRAY_FORMAT + attribute * 4, CELL_GCM_VERTEX_F);
}

// 0x007278c (0x390 bytes)
/* count strip vertices at vertices on DL_Pass with programs 10/11, both texture coordinate
   sets */
void FastDrawStrip_DL(int count, void *vertices)
{
    IdolDraw *idol = Idol();
    RenderingStep *pass = DL_Pass;

    idol_draw::BindVertexProgram((uintptr_t)idol, (int)(uintptr_t)pass, 10);
    idol_draw::BindFragmentProgram((uintptr_t)idol, (int)(uintptr_t)pass, 11);

    u32 offset = (u32)(uintptr_t)vertices - idol->memBase;

    EmitStripFormat(pass, 0, 3, CELL_GCM_VERTEX_F);
    EmitStripFormat(pass, 1, 2, CELL_GCM_VERTEX_F);
    EmitStripFormat(pass, 2, 2, CELL_GCM_VERTEX_F);
    EmitStripFormat(pass, 3, 4, CELL_GCM_VERTEX_UB);
    EmitStripOffset(pass, 0, offset);
    EmitStripOffset(pass, 1, offset + 0xc);
    EmitStripOffset(pass, 2, offset + 0x14);
    EmitStripOffset(pass, 3, offset + 0x1c);

    EmitStrip(pass, count);

    DisableArray(pass, 0);
    DisableArray(pass, 1);
    DisableArray(pass, 2);
    DisableArray(pass, 3);
}

// 0x0072b1c (0x2c0 bytes)
/* FastDrawStrip_DL with the programs already bound, the second coordinate set only */
void FastDrawStrip_DLNoState(int count, void *vertices)
{
    IdolDraw *idol = Idol();
    RenderingStep *pass = DL_Pass;
    u32 offset = (u32)(uintptr_t)vertices - idol->memBase;

    EmitStripFormat(pass, 0, 3, CELL_GCM_VERTEX_F);
    EmitStripFormat(pass, 1, 2, CELL_GCM_VERTEX_F);
    EmitStripFormat(pass, 3, 4, CELL_GCM_VERTEX_UB);
    EmitStripOffset(pass, 0, offset);
    EmitStripOffset(pass, 1, offset + 0x14);
    EmitStripOffset(pass, 3, offset + 0x1c);

    EmitStrip(pass, count);

    DisableArray(pass, 0);
    DisableArray(pass, 1);
    DisableArray(pass, 3);
}

// 0x0072ddc (0x394 bytes)
/* count strip vertices on pass passIndex (programs 4/6 bound on passes 2 and 9), the first
   coordinate set */
void FastDrawStrip_Pass(int count, void *vertices, int passIndex)
{
    IdolDraw *idol = Idol();

    if (passIndex == 2 || passIndex == 9) {
        idol_draw::BindVertexProgram((uintptr_t)idol, (int)(uintptr_t)PassByIndex(passIndex), 4);
        idol_draw::BindFragmentProgram((uintptr_t)idol, (int)(uintptr_t)PassByIndex(passIndex), 6);
    }

    RenderingStep *pass = PassByIndex(passIndex);
    u32 offset = (u32)(uintptr_t)vertices - idol->memBase;

    EmitStripFormat(pass, 0, 3, CELL_GCM_VERTEX_F);
    EmitStripFormat(pass, 1, 2, CELL_GCM_VERTEX_F);
    EmitStripFormat(pass, 3, 4, CELL_GCM_VERTEX_UB);
    EmitStripOffset(pass, 0, offset);
    EmitStripOffset(pass, 1, offset + 0xc);
    EmitStripOffset(pass, 3, offset + 0x1c);

    EmitStrip(pass, count);

    DisableArray(pass, 0);
    DisableArray(pass, 1);
    DisableArray(pass, 3);
}

/* a PS2 colour (0x80 = full) as an RSX one, channel by channel */
static inline u32 Ps2Color(u32 color)
{
    return Ps2Channel(color & 0xff) | Ps2Channel((color >> 8) & 0xff) << 8 | Ps2Channel((color >> 16) & 0xff) << 16 | Ps2Channel(color >> 24) << 24;
}

/* a vertex of the FastDrawStrip family */
struct StripVertex {
    float x;
    float y;
    float z;
    float s0;
    float t0;
    float s1;
    float t1;
    u32 color;
};

// 0x00731c8 (0x4b0 bytes)
/* count strip vertices from separate arrays drawn three times: with effect texture baseTex and
   the first coordinates on passes 9 and 8 (no depth state, alpha test off), then with effect
   texture detailTex, the second coordinates and depth state on DL_Pass. Both DL passes get the
   identity at c[4]. */
void DrawTexturedStrips(int count, Vec3 *pos, u32 *colors, Vec2 *uv0, Vec2 *uv1, int baseTex, int detailTex, u64 depth)
{
    static const Mtx4 identity = {
        { 1.0f, 0.0f, 0.0f, 0.0f },
        { 0.0f, 1.0f, 0.0f, 0.0f },
        { 0.0f, 0.0f, 1.0f, 0.0f },
        { 0.0f, 0.0f, 0.0f, 1.0f },
    };

    StripVertex *vertices = (StripVertex *)(uintptr_t)idol::AllocateMemAlign(FrameHeap, count << 5, 0x10);
    Mtx4 mtx = identity;

    EmitVertexConstMtx(DL_Pass, 4, &mtx);
    EmitVertexConstMtx(DL_DepthPass, 4, &mtx);

    for (int i = 0; i < count; i++) {
        vertices[i].x = pos[i].x;
        vertices[i].y = pos[i].y;
        vertices[i].z = pos[i].z;
        vertices[i].s0 = uv0[i].x;
        vertices[i].t0 = uv0[i].y;
        vertices[i].s1 = uv1[i].x;
        vertices[i].t1 = uv1[i].y;
        vertices[i].color = Ps2Color(colors[i]);
    }

    idol_draw::DrawDepth(DL_DepthPass, 0);
    EmitMethod(DL_DepthPass, CELL_GCM_NV4097_SET_ALPHA_TEST_ENABLE, 0);
    idol_draw::DrawDepth(DL_Pass, 0);
    EmitMethod(DL_Pass, CELL_GCM_NV4097_SET_ALPHA_TEST_ENABLE, 0);

    IdolDraw_SetTexture(DL_Pass, 0, (u8 *)(uintptr_t)EffectTexHeaders + GetEffectTex(baseTex) * 0x24, 1, 1);
    FastDrawStrip_Pass(count, vertices, 9);
    FastDrawStrip_Pass(count, vertices, 8);

    idol_draw::DrawDepth(DL_Pass, depth);
    IdolDraw_SetTexture(DL_Pass, 0, (u8 *)(uintptr_t)EffectTexHeaders + GetEffectTex(detailTex) * 0x24, 1, 1);
    FastDrawStrip_DLNoState(count, vertices);
}

/* FastDrawStrip2UV's layout: 3 floats at 0, 3 floats at second, colour at 0x24; 0x28 apart */
static inline void EmitStrip2UVArrays(RenderingStep *pass, u32 offset, u32 second)
{
    EmitMethod(pass, CELL_GCM_NV4097_SET_VERTEX_DATA_ARRAY_FORMAT + 0 * 4, 0x28 << 8 | 3 << 4 | CELL_GCM_VERTEX_F);
    EmitMethod(pass, CELL_GCM_NV4097_SET_VERTEX_DATA_ARRAY_FORMAT + 1 * 4, 0x28 << 8 | 3 << 4 | CELL_GCM_VERTEX_F);
    EmitMethod(pass, CELL_GCM_NV4097_SET_VERTEX_DATA_ARRAY_FORMAT + 3 * 4, 0x28 << 8 | 4 << 4 | CELL_GCM_VERTEX_UB);
    EmitStripOffset(pass, 0, offset);
    EmitStripOffset(pass, 1, offset + second);
    EmitStripOffset(pass, 3, offset + 0x24);
}

// 0x0073678 (0x390 bytes)
/* count vertices of 0x28 bytes on pass passIndex with programs 7/7, the triple at 0x18 as the
   coordinates */
void FastDrawStrip2UV_Pass(int count, void *vertices, int passIndex)
{
    IdolDraw *idol = Idol();

    idol_draw::BindVertexProgram((uintptr_t)idol, (int)(uintptr_t)PassByIndex(passIndex), 7);
    idol_draw::BindFragmentProgram((uintptr_t)idol, (int)(uintptr_t)PassByIndex(passIndex), 7);

    RenderingStep *pass = PassByIndex(passIndex);

    EmitStrip2UVArrays(pass, (u32)(uintptr_t)vertices - idol->memBase, 0x18);
    EmitStrip(pass, count);

    DisableArray(pass, 0);
    DisableArray(pass, 1);
    DisableArray(pass, 3);
}

// 0x0073a08 (0x390 bytes)
/* FastDrawStrip2UV_Pass with the triple at 0xc as the coordinates, the programs bound only on
   passes 2 and 9 */
void FastDrawStrip2UV_PassNoState(int count, void *vertices, int passIndex)
{
    IdolDraw *idol = Idol();

    if (passIndex == 2 || passIndex == 9) {
        idol_draw::BindVertexProgram((uintptr_t)idol, (int)(uintptr_t)PassByIndex(passIndex), 7);
        idol_draw::BindFragmentProgram((uintptr_t)idol, (int)(uintptr_t)PassByIndex(passIndex), 7);
    }

    RenderingStep *pass = PassByIndex(passIndex);

    EmitStrip2UVArrays(pass, (u32)(uintptr_t)vertices - idol->memBase, 0xc);
    EmitStrip(pass, count);

    DisableArray(pass, 0);
    DisableArray(pass, 1);
    DisableArray(pass, 3);
}

/* a vertex of FastDrawStrip2UV: two coordinate triples whose third value is shared */
struct Strip2UVVertex {
    float x;
    float y;
    float z;
    float s0;
    float t0;
    float q0;
    float s1;
    float t1;
    float q1;
    u32 color;
};

// 0x0073de0 (0x330 bytes)
/* count strip vertices from separate arrays on pass passIndex: effect texture tex0 on unit 0
   (and tex1 on unit 1 on passes 2 and 9), the identity at c[4], both coordinate sets with texQ as
   their third value; drawn with depth state depth, then on passes 2 and 9 again with depth2 */
void DrawLavaStrips(float texQ, int count, Vec3 *pos, u32 *colors, Vec2 *uv0, Vec2 *uv1, int tex0, int tex1, u64 depth, u64 depth2, int passIndex)
{
    static const Mtx4 identity = {
        { 1.0f, 0.0f, 0.0f, 0.0f },
        { 0.0f, 1.0f, 0.0f, 0.0f },
        { 0.0f, 0.0f, 1.0f, 0.0f },
        { 0.0f, 0.0f, 0.0f, 1.0f },
    };

    Strip2UVVertex *vertices = (Strip2UVVertex *)(uintptr_t)idol::AllocateMemAlign(FrameHeap, count * 0x28, 0x10);

    IdolDraw_SetTexture(PassByIndex(passIndex), 0, (u8 *)(uintptr_t)EffectTexHeaders + GetEffectTex(tex0) * 0x24, 1, 1);

    if (passIndex == 2 || passIndex == 9) {
        IdolDraw_SetTexture(PassByIndex(passIndex), 1, (u8 *)(uintptr_t)EffectTexHeaders + GetEffectTex(tex1) * 0x24, 1, 1);
    }

    Mtx4 mtx = identity;

    EmitVertexConstMtx(PassByIndex(passIndex), 4, &mtx);

    for (int i = 0; i < count; i++) {
        vertices[i].x = pos[i].x;
        vertices[i].y = pos[i].y;
        vertices[i].z = pos[i].z;
        vertices[i].s0 = uv0[i].x;
        vertices[i].t0 = uv0[i].y;
        vertices[i].q0 = texQ;
        vertices[i].s1 = uv1[i].x;
        vertices[i].t1 = uv1[i].y;
        vertices[i].q1 = texQ;
        vertices[i].color = SwapColor(colors[i]);
    }

    idol_draw::DrawDepth(PassByIndex(passIndex), depth);
    FastDrawStrip2UV_PassNoState(count, vertices, passIndex);

    if (passIndex == 2 || passIndex == 9) {
        idol_draw::DrawDepth(PassByIndex(passIndex), depth2);
        FastDrawStrip2UV_Pass(count, vertices, passIndex);
    }
}

// 0x0074150 (0x450 bytes)
/* count FastDrawQuad-layout vertices (position, coordinates, colour; 0x18 apart) as a strip on
   pass passIndex: programs 4/6 on passes 2 and 9, the identity at c[4] on passes 0 and 8 */
void FastDrawStripColor(int count, void *vertices, int passIndex)
{
    static const Mtx4 identity = {
        { 1.0f, 0.0f, 0.0f, 0.0f },
        { 0.0f, 1.0f, 0.0f, 0.0f },
        { 0.0f, 0.0f, 1.0f, 0.0f },
        { 0.0f, 0.0f, 0.0f, 1.0f },
    };

    IdolDraw *idol = Idol();

    idol_draw::ResetPassState(PassByIndex(passIndex));

    if (passIndex == 2 || passIndex == 9) {
        idol_draw::BindVertexProgram((uintptr_t)idol, (int)(uintptr_t)PassByIndex(passIndex), 4);
        idol_draw::BindFragmentProgram((uintptr_t)idol, (int)(uintptr_t)PassByIndex(passIndex), 6);
    }
    else if (passIndex == 0 || passIndex == 8) {
        Mtx4 mtx = identity;

        EmitVertexConstMtx(PassByIndex(passIndex), 4, &mtx);
    }

    RenderingStep *pass = PassByIndex(passIndex);
    u32 offset = (u32)(uintptr_t)vertices - idol->memBase;

    EmitMethod(pass, CELL_GCM_NV4097_SET_VERTEX_DATA_ARRAY_FORMAT + 0 * 4, 0x18 << 8 | 3 << 4 | CELL_GCM_VERTEX_F);
    EmitMethod(pass, CELL_GCM_NV4097_SET_VERTEX_DATA_ARRAY_FORMAT + 1 * 4, 0x18 << 8 | 2 << 4 | CELL_GCM_VERTEX_F);
    EmitMethod(pass, CELL_GCM_NV4097_SET_VERTEX_DATA_ARRAY_FORMAT + 3 * 4, 0x18 << 8 | 4 << 4 | CELL_GCM_VERTEX_UB);
    EmitStripOffset(pass, 0, offset);
    EmitStripOffset(pass, 1, offset + 0xc);
    EmitStripOffset(pass, 3, offset + 0x14);

    EmitStrip(pass, count);

    DisableArray(pass, 0);
    DisableArray(pass, 1);
    DisableArray(pass, 3);
}

// 0x00745a0 (0x1c bytes)
/* bits 4-5 of a GS ALPHA word are 2 */
bool ____Draw_IsFlagMode2(u64 alpha)
{
    return (alpha & 0x30) == 0x20;
}

// 0x00745bc (0x48 bytes)
/* a GS ALPHA word of the (Cs - Cd) * As + Cd or (Cs - Cd) * Fix + Cd form: A = 0, B = 1, D = 1,
   C = 0 or 2 */
int ____Draw_IsBlendModeMatch(u64 alpha)
{
    if ((alpha & 3) != 0) {
        return 0;
    }

    if (((alpha >> 2) & 3) != 1) {
        return 0;
    }

    if (((alpha >> 6) & 3) != 1) {
        return 0;
    }

    return ((alpha >> 4) & 3) == 0 || ((alpha >> 4) & 3) == 2;
}

// 0x0074604 (0x13c bytes)
/* count vertices from separate arrays drawn by FastDrawStripColor on the pass in passes' low
   nibble and on the one in its next nibble (when not 0) */
void DrawMeshSet(int count, void *positions, void *colorArray, void *uvs, u32 passes)
{
    Vec3 *pos = (Vec3 *)positions;
    u32 *colors = (u32 *)colorArray;
    Vec2 *texel = (Vec2 *)uvs;
    FastQuadVertex *vertices = (FastQuadVertex *)(uintptr_t)idol::AllocateMemAlign(FrameHeap, count * 0x18, 0x10);

    for (u32 i = 0; i < (u32)count; i++) {
        vertices[i].x = pos[i].x;
        vertices[i].y = pos[i].y;
        vertices[i].z = pos[i].z;
        vertices[i].s = texel[i].x;
        vertices[i].t = texel[i].y;
        vertices[i].color = SwapColor(colors[i]);
    }

    int first = passes & 0xf;
    int second = (passes >> 4) & 0xf;

    if (first != 0) {
        FastDrawStripColor(count, vertices, first);
    }

    if (second != 0) {
        FastDrawStripColor(count, vertices, second);
    }
}

// 0x0074780 (0x460 bytes)
/* count vertices of position, a coordinate triple and colour (0x1c apart) as a strip on pass
   passIndex with the identity at c[4]; programs 7/7 on passes 1, 2 and 9 */
void FastDrawStripFog(int count, void *vertices, int passIndex)
{
    static const Mtx4 identity = {
        { 1.0f, 0.0f, 0.0f, 0.0f },
        { 0.0f, 1.0f, 0.0f, 0.0f },
        { 0.0f, 0.0f, 1.0f, 0.0f },
        { 0.0f, 0.0f, 0.0f, 1.0f },
    };

    IdolDraw *idol = Idol();
    Mtx4 mtx = identity;

    EmitVertexConstMtx(PassByIndex(passIndex), 4, &mtx);

    if (passIndex == 1 || passIndex == 2 || passIndex == 9) {
        idol_draw::BindVertexProgram((uintptr_t)idol, (int)(uintptr_t)PassByIndex(passIndex), 7);
        idol_draw::BindFragmentProgram((uintptr_t)idol, (int)(uintptr_t)PassByIndex(passIndex), 7);
    }

    RenderingStep *pass = PassByIndex(passIndex);
    u32 offset = (u32)(uintptr_t)vertices - idol->memBase;

    EmitMethod(pass, CELL_GCM_NV4097_SET_VERTEX_DATA_ARRAY_FORMAT + 0 * 4, 0x1c << 8 | 3 << 4 | CELL_GCM_VERTEX_F);
    EmitMethod(pass, CELL_GCM_NV4097_SET_VERTEX_DATA_ARRAY_FORMAT + 1 * 4, 0x1c << 8 | 3 << 4 | CELL_GCM_VERTEX_F);
    EmitMethod(pass, CELL_GCM_NV4097_SET_VERTEX_DATA_ARRAY_FORMAT + 3 * 4, 0x1c << 8 | 4 << 4 | CELL_GCM_VERTEX_UB);
    EmitStripOffset(pass, 0, offset);
    EmitStripOffset(pass, 1, offset + 0xc);
    EmitStripOffset(pass, 3, offset + 0x18);

    EmitStrip(pass, count);

    DisableArray(pass, 0);
    DisableArray(pass, 1);
    DisableArray(pass, 3);
}

/* a vertex of FastDrawStripFog */
struct FogStripVertex {
    float x;
    float y;
    float z;
    float s;
    float t;
    float q;
    u32 color;
};

// 0x0074be0 (0x108 bytes)
/* count vertices from separate arrays, texQ the coordinates' third value, through FastDrawStripFog
   on pass 9 */
void DrawOceanStrip(float texQ, int count, Vec3 *pos, u32 *colors, Vec2 *texel)
{
    FogStripVertex *vertices = (FogStripVertex *)(uintptr_t)idol::AllocateMemAlign(FrameHeap, count * 0x1c, 0x10);

    for (u32 i = 0; i < (u32)count; i++) {
        vertices[i].x = pos[i].x;
        vertices[i].y = pos[i].y;
        vertices[i].z = pos[i].z;
        vertices[i].s = texel[i].x;
        vertices[i].t = texel[i].y;
        vertices[i].q = texQ;
        vertices[i].color = SwapColor(colors[i]);
    }

    FastDrawStripFog(count, vertices, 9);
}

// 0x0074ce8 (0x4 bytes)
void STUB_00074ce8(...)
{
}

// 0x0074cec (0x4 bytes)
void STUB_00074cec(...)
{
}

// 0x0074cf0 (0xc8 bytes)
/* a free impact sprite at pos with effect texture tex at scale, turned at random; its index, or
   -1 when all 32 are in use */
int ImpactSprite_Add(Vec4 pos, float scale, short tex)
{
    for (int i = 0; i < 32; i++) {
        ImpactSprite *sprite = &g_ImpactSprites[i];

        if (sprite->timer > 0) {
            continue;
        }

        sprite->timer = 24;
        sprite->tex = tex;
        sprite->pos = pos;
        sprite->scale = scale;
        sprite->rot = (float)MB_randRot();

        return i;
    }

    return -1;
}

// 0x0074dc0 (0xec bytes)
/* spins each live impact sprite at 5/3 pi a second, fades it in and (over its last 12 frames)
   out, and frees it when its time runs out */
void ImpactSprite_Update(void)
{
    for (int i = 0; i < 32; i++) {
        ImpactSprite *sprite = &g_ImpactSprites[i];

        if (sprite->timer <= 0) {
            continue;
        }

        sprite->rot = FastDiffRots(sprite->rot, g_FrameTime * 5.2359877f);

        if (sprite->timer < 13) {
            sprite->fade -= 5;
        }
        else {
            sprite->fade += 5;
        }

        sprite->timer--;

        if (sprite->timer < 1) {
            FastMemSet(sprite, 0, 0x20);
        }
    }
}

/* vec's first three components scaled to length 1 (vrsqrtefp + one Newton step) */
static inline Vec4 Normalize3(Vec4 vec)
{
    Vec4 out __attribute__((aligned(16))) = vec;

    VecStore4(&out, VecNormalize3(VecLoad4(&out)));

    return out;
}

/* texV turned by angle radians about the unit axis (the asm builds a quaternion of the half angle
   and rotates with it) */
static inline Vec4 RotateAbout(Vec4 texV, Vec4 axis, float angle)
{
    float cosA = cosf(angle);
    float sinA = sinf(angle);
    float along = (axis.x * texV.x + axis.y * texV.y + axis.z * texV.z) * (1.0f - cosA);
    Vec4 out;

    out.x = texV.x * cosA + (axis.y * texV.z - axis.z * texV.y) * sinA + axis.x * along;
    out.y = texV.y * cosA + (axis.z * texV.x - axis.x * texV.z) * sinA + axis.y * along;
    out.z = texV.z * cosA + (axis.x * texV.y - axis.y * texV.x) * sinA + axis.z * along;
    out.w = 0.0f;

    return out;
}

// 0x0074fa0 (0x92c bytes)
/* Each live impact sprite as a camera-facing quad of effect texture 19 on DL_Pass (additive):
   one unit towards the camera, (fade + 16) / 64 * scale * 0.48 across, turned by rot degrees
   about the view axis, alpha fade over grey 0x808080. The camera's right, up and view axes are
   the view matrix's normalised columns. The asm turns them with a vectorised quaternion of the
   half angle; the direction of the turn here is the standard right-handed one and was not
   traced through its permutes. */
void ImpactSprite_Draw(void)
{
    IdolDraw *idol = (IdolDraw *)(uintptr_t)g_pIdolDrawBase;

    idol_draw::DrawDepth(DL_Pass, idol_draw::PackCmd(0, 2, 0, 1, 0x80));
    IdolDraw_SetTexture(DL_Pass, 0, (u8 *)(uintptr_t)EffectTexHeaders + GetEffectTex(19) * 0x24, 3, 3);

    Mtx4 *view = &idol->viewMtx;
    Vec4 right = { view->v0.x, view->v1.x, view->v2.x, view->v3.x };
    Vec4 upAxis = { view->v0.y, view->v1.y, view->v2.y, view->v3.y };
    Vec4 axis = { view->v0.z, view->v1.z, view->v2.z, view->v3.z };

    right = Normalize3(right);
    upAxis = Normalize3(upAxis);
    axis = Normalize3(axis);

    Vec4 camPos = idol->camPos;

    for (int i = 0; i < 32; i++) {
        ImpactSprite *sprite = &g_ImpactSprites[i];

        if (sprite->timer <= 0) {
            continue;
        }

        Vec4 pos = { sprite->pos.x, sprite->pos.y, sprite->pos.z, 1.0f };
        Vec4 toCamera = { camPos.x - pos.x, camPos.y - pos.y, camPos.z - pos.z, camPos.w - pos.w };

        toCamera = Normalize3(toCamera);
        pos.x += toCamera.x;
        pos.y += toCamera.y;
        pos.z += toCamera.z;
        pos.w += toCamera.w;

        u32 color = (sprite->fade << 24) + 0x808080;
        float size = (float)FastIntToDouble(sprite->fade + 16) * 0.015625f * sprite->scale * 0.48f;

        if (size <= 0.0f) {
            continue;
        }

        float angle = sprite->rot * 0.017453292f;
        Vec4 across = RotateAbout(right, axis, angle);
        Vec4 down = RotateAbout(upAxis, axis, angle);

        QuadDef quad;

        quad.clamp = 1;
        quad.tex0 = GetEffectTex(19);
        quad.alpha = 0;

        float *coords = &quad.st[0][0];
        static const float corners[4][2] = { { 0.0f, 0.0f }, { 1.0f, 0.0f }, { 0.0f, 1.0f }, { 1.0f, 1.0f } };

        for (int j = 0; j < 4; j++) {
            float texU = corners[j][0] - 0.5f;
            float texV = corners[j][1] - 0.5f;

            quad.xyzw[j].x = pos.x + across.x * size * texU + down.x * size * texV;
            quad.xyzw[j].y = pos.y + across.y * size * texU + down.y * size * texV;
            quad.xyzw[j].z = pos.z + across.z * size * texU + down.z * size * texV;
            quad.xyzw[j].w = 1.0f;
            quad.rgba[j] = color;
            coords[j * 2] = corners[j][0];
            coords[j * 2 + 1] = corners[j][1];
        }

        FastDrawQuad(&quad, NULL, 1, (void *)(uintptr_t)EffectTexHeaders, 9);
    }

    idol_draw::DrawDepth(DL_Pass, idol_draw::PackCmd(0, 1, 0, 1, 0x80));
}

void STUB_00077c60(...);
void STUB_00077c64(...);
void STUB_00077c68(...);
void STUB_00077c6c(...);

/* DrawWaterPatch_A/_B: the PS2 scratchpad double-buffered walk over a patch's chunks, every
   transfer and VU call now an empty stub */
static inline void WaterPatchWalk(WaterPatchList *list, int modeB)
{
    if (list->count == 0) {
        return;
    }

    g_WaterSpadIndex = 1 - g_WaterSpadIndex;
    STUB_000e9130(list->chunks[0].data, list->chunks[0].size >> 4, g_WaterSpadBufs[g_WaterSpadIndex]);

    for (int i = 0; i < list->count; i++) {
        WaterPatchChunk *chunk = &list->chunks[i];
        u32 buf = g_WaterSpadBufs[g_WaterSpadIndex];
        short ofsC = chunk->ofsC;
        short ofs8 = chunk->ofs8;
        short uvOfs = chunk->uvOfs;

        STUB_000e9134();
        g_WaterSpadIndex = 1 - g_WaterSpadIndex;

        if (i + 1 < list->count) {
            STUB_000e9130(list->chunks[i + 1].data, list->chunks[i + 1].size >> 4, g_WaterSpadBufs[g_WaterSpadIndex]);
        }

        if (modeB) {
            STUB_00077c64(buf + ofs8, &DAT_70002000, buf + uvOfs, 0x70003000, list->chunks[i].count);
            STUB_00077c6c(list->chunks[i].unk6, buf + ofsC, 0x70003000, &DAT_70002000);
        }
        else {
            STUB_00077c60(buf + ofs8, &DAT_70002000, list->chunks[i].count);
            STUB_00077c68(list->chunks[i].unk6, buf + ofsC, buf + uvOfs, &DAT_70002000);
        }
    }
}

// 0x00758cc (0x1e0 bytes)
void DrawWaterPatch_A(WaterPatchList *list)
{
    WaterPatchWalk(list, 0);
}

// 0x0075aac (0x1f0 bytes)
void DrawWaterPatch_B(WaterPatchList *list)
{
    WaterPatchWalk(list, 1);
}

// 0x0075cc8 (0x208 bytes)
/* every vertex's coordinates = its saved ones in g_WaterBaseUVs plus a circle of radius 1 (in
   4.12) going round every 16384 ticks of worldUpdateTime, plus 1 */
void AnimateWaveUVs(WaterPatchList *list)
{
    if (list->count == 0) {
        return;
    }

    float angle = (float)(int)(worldUpdateTime & 0x3fff) * 6.28f * 6.1035156e-05f - 3.14f;
    float sinA = FastSinInline(angle);
    float cosA = FastCosInline(angle);
    short *base = g_WaterBaseUVs;

    for (int i = 0; i < list->count; i++) {
        WaterPatchChunk *chunk = &list->chunks[i];
        short *texel = (short *)((u8 *)(uintptr_t)chunk->data + chunk->uvOfs);

        for (int j = 0; j < chunk->count; j++) {
            texel[0] = base[0] + (short)(int)(cosA * 4096.0f) + 0x1000;
            texel[1] = base[1] + (short)(int)(sinA * 4096.0f) + 0x1000;
            texel += 2;
            base += 2;
        }
    }
}

// 0x0075ed0 (0xe0 bytes)
/* every vertex's coordinates out to dst, two shorts each */
void ____Water_CopyPatchUVs(WaterPatchList *list, short *dst)
{
    for (int i = 0; i < list->count; i++) {
        WaterPatchChunk *chunk = &list->chunks[i];
        short *texel = (short *)((u8 *)(uintptr_t)chunk->data + chunk->uvOfs);

        for (int j = 0; j < chunk->count; j++) {
            dst[0] = texel[0];
            dst[1] = texel[1];
            dst += 2;
            texel += 2;
        }
    }
}

// 0x0075fb0 (0x34 bytes)
void DrawWaterPatch(WaterPatchList *list)
{
    if (list->mode == 0) {
        DrawWaterPatch_A(list);
    }
    else {
        DrawWaterPatch_B(list);
    }
}

// 0x0075ff0 (0x338 bytes)
/* Builds a one-chunk patch list of a 16 by 16 grid 20 apart around (x0, y0) at height posZ into
   data: the positions (three shorts), then per vertex either a colour (mode 0: a dim border and a
   pattern inside) or texture coordinates 512 apart (mode 1), then the 15 by 15 quads as index
   bytes, padded to 16 bytes. */
void ____Water_ComputeWaveGrid(float startX, float startY, float posZ, int mode, u8 *data, WaterPatchChunk *chunk, WaterPatchList *list)
{
    list->mode = mode;
    list->count = 1;
    list->chunks = chunk;
    chunk->data = (u32)(uintptr_t)data;
    chunk->count = 256;
    chunk->unk6 = 225;
    chunk->ofs8 = 0;

    short *out = (short *)data;

    for (int row = 0; row < 16; row++) {
        short posY = (int)((float)(row - 8) * 20.0f + startY);

        for (int col = 0; col < 16; col++) {
            out[0] = (int)((float)(col - 8) * 20.0f + startX);
            out[1] = posY;
            out[2] = (int)posZ;
            out += 3;
        }
    }

    chunk->uvOfs = (u8 *)out - data;

    int pattern = 0;

    for (int row = 0; row < 16; row++) {
        int seed = pattern;

        for (int col = 0; col < 16; col++) {
            if (mode != 0) {
                out[0] = (int)((float)col * 512.0f);
                out[1] = (int)((float)row * 512.0f);
            }
            else if (col == 0 || row == 0 || col == 15 || row == 15) {
                out[0] = 0x6060;
                out[1] = (short)0x8060;
            }
            else {
                short shade = seed % 80;

                out[1] = shade - 0x7fd0;
                out[0] = shade * 0x101 + 0x3030;
            }

            out += 2;
            seed += 5;
        }

        pattern += 23;
    }

    chunk->ofsC = (u8 *)out - data;

    u8 *index = (u8 *)out;

    for (int row = 0; row < 15; row++) {
        for (int col = 0; col < 15; col++) {
            int vertex = row * 16 + col;

            index[0] = vertex + 1;
            index[1] = vertex;
            index[2] = vertex + 0x11;
            index[3] = vertex + 0x10;
            index += 4;
        }
    }

    while ((uintptr_t)index & 0xf) {
        index += 2;
    }

    chunk->size = index - data;
}

// 0x0076328 (0x128 bytes)
/* the water textures: tex0 and tex1 on ForwardPass's units 0 and 1, tex0 on DepthPass */
void ____Water_SetPassTextures(int tex0, int tex1)
{
    IdolDraw_SetTexture(ForwardPass, 0, (u8 *)(uintptr_t)EffectTexHeaders + GetEffectTex(tex0) * 0x24, 1, 1);
    IdolDraw_SetTexture(ForwardPass, 1, (u8 *)(uintptr_t)EffectTexHeaders + GetEffectTex(tex1) * 0x24, 1, 1);
    IdolDraw_SetTexture(DepthPass, 0, (u8 *)(uintptr_t)EffectTexHeaders + GetEffectTex(tex0) * 0x24, 1, 1);
}

// 0x0076458 (0x128 bytes)
/* the two water grids (a coloured one at height -12, the textured g_WaterPatches at 0) and the
   textured grid's coordinates saved to g_WaterBaseUVs */
void ____Water_InitPatches(void)
{
    ____Water_ComputeWaveGrid(0.0f, 0.0f, -12.0f, 0, g_WaterColorGridData, &g_WaterColorGridChunk, &g_WaterColorGrid);
    ____Water_ComputeWaveGrid(0.0f, 0.0f, 0.0f, 1, g_WaterPatchData, &g_WaterPatchChunk, &g_WaterPatches);

    ____Water_CopyPatchUVs(&g_WaterPatches, g_WaterBaseUVs);
}

/* a PS2 DMA tag for qwc quadwords of the given id into g_pPacket */
static inline void WaterPacketTag(u8 qwc)
{
    g_pPacket[0] = 5;
    g_pPacket[1] = qwc;
    g_pPacket[2] = 0;
    g_pPacket[3] = Gs_DmaTagByte(5, 0);
    g_pPacket += 0x10;
}

// 0x0076580 (0x344 bytes)
/* The water: its coordinates swirled, a grey fog from 10000 to 143360 (intensity 160 to 0) while
   it draws, the coloured grid, then the textured one with effect textures 40..43 cycling every 50
   ticks; the level's fog put back after. */
void DrawWater(void)
{
    int frame = worldUpdateTime / 50;
    int texA = frame % 4 + 40;
    int texB = (frame + 1) % 4 + 40;

    AnimateWaveUVs(&g_WaterPatches);

    float nearDist = g_ViewContext.fogNearDist;
    float farDist = g_ViewContext.fogFarDist;
    float nearIntensity = g_ViewContext.fogNearIntensity;
    float farIntensity = g_ViewContext.fogFarIntensity;

    SetGSReg(10, 0x606060);
    g_ViewContext.fogFarDist = 143360.0f;
    g_ViewContext.fogNearDist = 10000.0f;
    g_ViewContext.fogNearIntensity = 160.0f;
    g_ViewContext.fogFarIntensity = 0.0f;
    UpdateViewContext();
    ComposeCameraMatrix();

    WaterPacketTag(0x80);
    DrawWaterPatch(&g_WaterColorGrid);

    ____Water_SetPassTextures(texA, texB);

    WaterPacketTag(0xd0);
    DrawWaterPatch(&g_WaterPatches);

    g_ViewContext.fogNearDist = nearDist;
    g_ViewContext.fogFarDist = farDist;
    g_ViewContext.fogNearIntensity = nearIntensity;
    g_ViewContext.fogFarIntensity = farIntensity;
    SetGSReg(10, STUB_00503024_RET_0(g_ViewContext.fogR, g_ViewContext.fogG, g_ViewContext.fogB));
    UpdateViewContext();
    ComposeCameraMatrix();
}

/* one layer of ____Draw_EffectStrip_M401: 16 pairs of PS2 GS vertices across the screen with
   coordinates scrolling from u0, all through the stubbed GS setters */
static inline u64 *SkyStripLayer(u64 *out, u32 qBits, float texQ, float texLeft, float camZ, float camFar, int posZ)
{
    int posX = 0;

    for (int i = 0; i < 16; i++) {
        out[0] = STUB_00502f74_RET_0(0x80, 0x80, 0x80, 0x60, qBits);
        out[1] = STUB_00503034_RET_0(((float)i * 0.0625f + texLeft) * texQ, -(camZ * texQ));
        out[2] = SCE_GS_SET_XYZ(posX + 0x7000, 0x7200, 0);
        out[3] = STUB_00503034_RET_0(((float)(i + 1) * 0.0625f + texLeft) * texQ, camFar * texQ);
        out[4] = SCE_GS_SET_XYZ(posX + 0x7200, 0x8df0, posZ);
        out += 5;
        posX += 0x200;
    }

    return out;
}

// 0x00768e8 (0x748 bytes)
/* A PS2 GS packet of three scrolling sky layers (effect texture tex), slower and nearer each,
   offset by the camera's turn; every GS setter is a stub returning 0, so the packet is zeros
   around its tags. unused is not read. */
void ____Draw_EffectStrip_M401(int unused, int tex)
{
    float camZ = GameCamera.mtx0.v2.z + GameCamera.mtx0.v3.z;
    float camFar = 1.0f - camZ;

    SetGSReg(0x18, GetEffectTex(tex));
    SetGSReg(0x1a, SCE_GS_SET_TEX1(0, 0, 1, 1, 1, 0, 0xff90));
    SetGSReg(6, SCE_GS_SET_CLAMP(0, 1, 0, 0, 0, 0));
    SetGSReg(3, idol_draw::PackCmd(0, 1, 0, 1, 0x80));

    u8 *packet = g_pPacket;

    packet[0] = 0x7d;
    packet[1] = 0;
    packet[2] = 0;
    packet[3] = Gs_DmaTagByte(0x7d, 0);
    g_pPacket += 0x10;

    u64 *words = (u64 *)(packet + 0x10);

    words[0] = SCE_GIF_SET_TAG(1, 0, 0, 0, 0, 3);
    words[1] = 0xeeee;
    words[2] = idol_draw::Blend(0, 5, 1, 0, 0, 0, 1, 2);
    words[3] = 0x16;
    words[4] = VU1_addGSregister(GSmem.zbuf >> 13, 1, 1);
    words[5] = 0x21;
    words[6] = SCE_GS_SET_PRIM(0xf, 0, 1, 0, 1, 0, 0, 0);
    words[7] = 0xe;
    words[8] = SCE_GIF_SET_TAG(0x30, 1, 0, 0, 1, 5);
    words[9] = 0x42421;

    float turn = -((GameCamera.rot.radius + 3.14f) * 4.0f * 0.15923566f - 4.0f);
    u64 *out = &words[10];

    out = SkyStripLayer(out, 0x3a83126f, 0.001f, (float)(int)((worldUpdateTime >> 3) & 0xff) * 0.00390625f + turn, camZ, camFar, 16000);
    out = SkyStripLayer(out, 0x3ada740e, 0.0016666667f, ((float)(int)(((worldUpdateTime >> 4) + 0x5a) & 0xff) * 0.00390625f + 1.5f) + turn, camZ, camFar, 9600);
    SkyStripLayer(out, 0x3b5a740e, 0.0033333334f, ((float)(int)(((worldUpdateTime >> 5) + 0xb4) & 0xff) * 0.00390625f + 3.0f) + turn, camZ, camFar, 4800);

    g_pPacket += 2000;
}

// 0x0077048 (0x454 bytes)
/* The count lava patches in view drawn with DrawLavaStrips on passes 0 and 2 (alpha test and depth
   state off meanwhile): grey-orange colours, and both coordinate sets scrolled down over 2048
   ticks (the second twice as fast and half a texture on). */
void DrawsFlowingLava(float texQ, LavaPatch *patches, int count, int tex0, int tex1)
{
    STUB_00071170();
    idol_draw::PackCmd(0, 1, 2, 1, 0x80);
    idol_draw::PackCmd(0, 1, 2, 1, 0x60);

    float scroll = -((float)(int)(worldUpdateTime & 0x7ff) * 0.00048828125f - 1.0f);
    float scroll2 = scroll * 2.0f + 0.5f;
    u32 *colors = (u32 *)g_ScratchBuf;
    u32 seed = 0;

    for (int i = 0; i < 256; i++) {
        colors[i] = SwapColor((seed & 0xf) * 0x20200 + 0x80787070);
        seed += 0x89;
    }

    EmitMethod(ForwardPass, CELL_GCM_NV4097_SET_ALPHA_TEST_ENABLE, 0);
    idol_draw::DrawDepth(ForwardPass, 0);
    EmitMethod(DepthPass, CELL_GCM_NV4097_SET_ALPHA_TEST_ENABLE, 0);
    idol_draw::DrawDepth(DepthPass, 0);

    for (int i = 0; i < count; i++) {
        LavaPatch *patch = &patches[i];

        if (FastCheckBsphereInView(256.0f, patch) == -1) {
            continue;
        }

        for (int strip = 0; strip < patch->stripCount; strip++) {
            int start = patch->bounds[strip];
            int vertices = patch->bounds[strip + 1] - start;
            Vec2 *texel = &patch->uv[start];
            Vec2 *uv0 = (Vec2 *)(g_ScratchBuf + 0x1000);
            Vec2 *uv1 = (Vec2 *)(g_ScratchBuf + 0x2000);

            for (int j = 0; j < vertices; j++) {
                uv1[j].x = texel[j].x;
                uv0[j].x = texel[j].x;
                uv0[j].y = texel[j].y + scroll;
                uv1[j].y = texel[j].y + scroll2;
            }

            DrawLavaStrips(texQ, vertices, &patch->pos[patch->bounds[strip]], colors, uv0, uv1, tex0, tex1, 0, 0, 0);
            DrawLavaStrips(texQ, vertices, &patch->pos[patch->bounds[strip]], colors, uv0, uv1, tex0, tex1, 0, 0, 2);
        }
    }

    EmitMethod(ForwardPass, CELL_GCM_NV4097_SET_ALPHA_TEST_ENABLE, 1);
    EmitMethod(DepthPass, CELL_GCM_NV4097_SET_ALPHA_TEST_ENABLE, 1);
}

// 0x00774b8 (0x318 bytes)
/* The count patches in view through DrawTexturedStrips with their own colours, depth state
   PackCmd(0, 1, 2, 1, 0x20): the coordinates scrolled sideways over 2048 ticks and down over 512.
   The scrolled coordinates are written to the PS2 scratchpad addresses 0x70001000/0x70002000
   while g_ScratchBuf + 0x1000/0x2000 are what gets drawn, as in the original. */
void ____Draw_ScrollingTexStrips(LavaPatch *patches, int count, int tex0, int tex1)
{
    u64 depth = idol_draw::PackCmd(0, 1, 2, 1, 0x20);

    idol_draw::PackCmd(0, 1, 2, 1, 0x20);
    STUB_00071170();

    float down = -((float)(int)(worldUpdateTime & 0x1ff) * 0.001953125f - 1.0f);
    float down2 = down * 2.0f + 0.5f;
    float across = -((float)(int)(worldUpdateTime & 0x7ff) * 0.00048828125f - 1.0f);

    for (int i = 0; i < count; i++) {
        LavaPatch *patch = &patches[i];

        if (FastCheckBsphereInView(256.0f, patch) == -1) {
            continue;
        }

        for (int strip = 0; strip < patch->stripCount; strip++) {
            int start = patch->bounds[strip];
            int vertices = patch->bounds[strip + 1] - start;
            Vec2 *texel = &patch->uv[start];
            Vec2 *spad0 = (Vec2 *)&DAT_70001000;
            Vec2 *spad1 = (Vec2 *)&DAT_70002000;

            for (int j = 0; j < vertices; j++) {
                spad0[j].x = texel[j].x + across;
                spad1[j].x = texel[j].x - across;
                spad0[j].y = texel[j].y + down;
                spad1[j].y = texel[j].y + down2;
            }

            DrawTexturedStrips(vertices, &patch->pos[patch->bounds[strip]], &patch->colors[patch->bounds[strip]], (Vec2 *)(g_ScratchBuf + 0x1000), (Vec2 *)(g_ScratchBuf + 0x2000), tex0, tex1, depth);
        }
    }
}

// 0x00777d0 (0x48c bytes)
/* PS2 GIF packet templates at 0x71f080: tags and the GS register words (every setter a stub
   returning 0) for the sky and lava effects */
void ____Draw_InitGsRegPresets_777d0(void)
{
    DAT_0071f28c = 0x10000;
    DAT_0071f080 = SCE_GIF_SET_TAG(1, 1, 0, 0, 0, 4);
    DAT_0071f090 = SCE_GS_SET_TEX1(0, 0, 1, 1, 1, 0, 0xff90);
    DAT_0071f0a0 = SCE_GS_SET_CLAMP(1, 1, 0, 0, 0, 0);
    DAT_0071f0b0 = idol_draw::Blend(1, 5, 0x60, 3, 0, 0, 1, 2);
    DAT_0071f0c0 = idol_draw::PackCmd(0, 1, 2, 1, 0x50);
    DAT_0071f0d0 = SCE_GIF_SET_TAG(1, 1, 0, 0, 0, 4);
    DAT_0071f0e0 = SCE_GS_SET_TEX1(0, 0, 1, 1, 1, 0, 0xff90);
    DAT_0071f0f0 = SCE_GS_SET_CLAMP(0, 0, 0, 0, 0, 0);
    DAT_0071f100 = idol_draw::Blend(0, 5, 1, 0, 0, 0, 1, 2);
    DAT_0071f110 = idol_draw::PackCmd(0, 1, 2, 1, 0x50);
    DAT_0071f120 = SCE_GIF_SET_TAG(1, 1, 0, 0, 0, 8);
    DAT_0071f130 = GsPackTest(0, 0, 0, 0, 0, 0, 1, 2);
    DAT_0071f140 = GsPackTest(0, 0, 0, 0, 0, 0, 1, 2);
    DAT_0071f150 = SCE_GS_SET_TEX1(0, 0, 1, 1, 1, 0, 0xff90);
    DAT_0071f160 = SCE_GS_SET_CLAMP(0, 0, 0, 0, 0, 0);
    DAT_0071f170 = idol_draw::PackCmd(0, 1, 2, 1, 0x80);
    DAT_0071f180 = SCE_GS_SET_TEX1(0, 0, 1, 1, 1, 0, 0xff90);
    DAT_0071f190 = SCE_GS_SET_CLAMP(0, 0, 0, 0, 0, 0);
    DAT_0071f1a0 = idol_draw::PackCmd(0, 1, 2, 1, 0x60);
    DAT_0071f1b0 = SCE_GIF_SET_TAG(1, 1, 0, 0, 0, 8);
    DAT_0071f1c0 = GsPackTest(0, 0, 0, 0, 0, 0, 1, 2);
    DAT_0071f1d0 = GsPackTest(0, 0, 0, 0, 0, 0, 1, 2);
    DAT_0071f1e0 = SCE_GS_SET_TEX1(0, 0, 1, 1, 1, 0, 0xff90);
    DAT_0071f1f0 = SCE_GS_SET_CLAMP(0, 0, 0, 0, 0, 0);
    DAT_0071f200 = idol_draw::PackCmd(0, 1, 2, 1, 0x20);
    DAT_0071f210 = SCE_GS_SET_TEX1(0, 0, 1, 1, 1, 0, 0xff90);
    DAT_0071f220 = SCE_GS_SET_CLAMP(0, 0, 0, 0, 0, 0);
    DAT_0071f230 = idol_draw::PackCmd(0, 1, 2, 1, 0x20);
}

// 0x0077c60 (0x4 bytes)
void STUB_0077c60(...)
{
}

// 0x0077c64 (0x4 bytes)
void STUB_0077c64(...)
{
}

// 0x0077c68 (0x4 bytes)
void STUB_0077c68(...)
{
}

// 0x0077c6c (0x4 bytes)
void STUB_0077c6c(...)
{
}
// 0x0077c88 (0x410 bytes)
/* Each of strip's four rows as a ribbon through FastDrawStripColor on pass 9: every point moved
   0.05 down and up in posZ and transformed by mtx, texture texU stepping along and texV 0 / 1 across, in
   the row's colour (colorA..colorB by FastLerpColor, the RGB doubled from PS2 range). */
void DrawColorGradientStrip(GradientStrip *strip, Mtx4 *mtx)
{
    FastQuadVertex *vertices = (FastQuadVertex *)(uintptr_t)idol::AllocateMemAlign(FrameHeap, strip->columns * 0x30, 0x10);
    float toEnd = 1.0f / (float)(strip->total - strip->mid);
    float toMid = 1.0f / (float)strip->mid;

    for (int row = 0; row < 4; row++) {
        int place = strip->rowPos[row];
        float lerp;

        if (strip->mid < place) {
            lerp = (float)(place - strip->mid) * toEnd;
        }
        else {
            lerp = -((float)place * toMid - 1.0f);
        }

        u32 rgba = FastLerpColor(lerp, strip->colorA, strip->colorB);
        u32 color = (int)Ps2Channel(rgba & 0xff) << 24 | (int)Ps2Channel((rgba >> 8) & 0xff) << 16 | (int)Ps2Channel((rgba >> 16) & 0xff) << 8;
        float alpha = (float)(rgba >> 24) + 0.5f;

        if (alpha > 255.0f) {
            alpha = 255.0f;
        }

        color |= (int)alpha;

        float texU = strip->uStart;
        FastQuadVertex *out = vertices;

        for (int col = 0; col < strip->columns; col++) {
            Vec4 *point = &strip->points[strip->columns * row + col];
            float zLow = point->z + -0.05f;
            float zHigh = point->z + 0.05f;

            texU += strip->uStep;

            out[0].x = mtx->v0.x * point->x + mtx->v1.x * point->y + mtx->v2.x * zLow + mtx->v3.x;
            out[0].y = mtx->v0.y * point->x + mtx->v1.y * point->y + mtx->v2.y * zLow + mtx->v3.y;
            out[0].z = mtx->v0.z * point->x + mtx->v1.z * point->y + mtx->v2.z * zLow + mtx->v3.z;
            out[0].s = texU;
            out[0].t = 0.0f;
            out[0].color = color;

            out[1].x = mtx->v0.x * point->x + mtx->v1.x * point->y + mtx->v2.x * zHigh + mtx->v3.x;
            out[1].y = mtx->v0.y * point->x + mtx->v1.y * point->y + mtx->v2.y * zHigh + mtx->v3.y;
            out[1].z = mtx->v0.z * point->x + mtx->v1.z * point->y + mtx->v2.z * zHigh + mtx->v3.z;
            out[1].s = texU;
            out[1].t = 1.0f;
            out[1].color = color;

            out += 2;
        }

        FastDrawStripColor(strip->columns * 2, vertices, 9);
        vertices = out;
    }
}

// 0x0078098 (0x5c bytes)
/* the frame buffer description at 0x966b40 (its own address at 0x966bc0) */
void SetFrameBufferInfo(short width, short height, short alpha, short blue, short cosA, short infoD)
{
    DAT_00966b84 = alpha;
    DAT_00966bc0 = (u32)(uintptr_t)&DAT_00966b40;
    DAT_00966b9c = 0;
    DAT_00966b86 = blue;
    DAT_00966b88 = 0x12;
    DAT_00966b94 = cosA;
    DAT_00966b96 = infoD;
    g_FrameBufWidth = width;
    g_FrameBufHeight = height;
    DAT_00966b80 = 0x12;
    DAT_00966b90 = 0x12;
    DAT_00966b98 = 0x24;
}

// 0x00780f4 (0x4 bytes)
void STUB_000780f4(...)
{
}

// 0x00780f8 (0x4 bytes)
void STUB_000780f8(...)
{
}

// 0x00780fc (0x4 bytes)
void STUB_000780fc(...)
{
}

// 0x0078100 (0x4 bytes)
void STUB_00078100(...)
{
}

// 0x0078104 (0x4 bytes)
void STUB_00078104(...)
{
}

// 0x0078108 (0x28 bytes)
/* the aux buffer's size (1 << log2w by 1 << log2h) and the PS2 depth buffer page */
void SetFrameBufferTexLog2Size(int log2w, int log2h, int zbuf)
{
    DAT_00966b92 = zbuf >> 13;
    g_AuxWidth = 1 << log2w;
    g_AuxHeight = 1 << log2h;
}

// 0x0078130 (0x4 bytes)
void STUB_00078130(...)
{
}

// 0x0078134 (0x4 bytes)
void STUB_00078134(...)
{
}

// 0x0078138 (0x4 bytes)
void STUB_00078138(...)
{
}

// 0x007813c (0x4 bytes)
void STUB_0007813c(...)
{
}
