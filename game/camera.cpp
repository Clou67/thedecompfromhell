#include <math.h>
#include <stdlib.h>
#include <string.h>
#include "game/camera.h"
#include "game/collproc.h"
#include "game/debug.h"
#include "game/draw.h"
#include "game/freeze.h"
#include "game/hero.h"
#include "game/loaders.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/partproc.h"
#include "game/partupd.h"
#include "game/path.h"
#include "game/space.h"
#include "game/update/moby1005.h"
#include "game/vendor.h"
#include "idol/fastfunc.h"
#include "idol/fastinline.h"
// game/camera.cpp -- reconstructed from NPEA00385 EBOOT
// 50 functions, 0x4fee8-0x55aa4: the camera manager. Picks among the level's cameras, blends
// between them, tracks the hero, shakes, water and fog, and the reticule and crosshairs.

/* how an imported camera's switch blends in (CameraImportVars.blendMode) */
enum {
    CAM_BLEND_QUAT = 1,       /* position and rotation, at the activation's blendSpeed */
    CAM_BLEND_COPY = 3,       /* start where the old camera is */
    CAM_BLEND_POLAR = 5,      /* polar blend over blendSpeed frames */
    CAM_BLEND_COPY_QUAT = 6,  /* start where the old camera is, then blend */
};

/* UpdateCam.activation.deactivate values the outgoing camera can ask for */
enum {
    CAM_DEACT_BLEND = 2,
    CAM_DEACT_COPY = 3,
    CAM_DEACT_NONE = 4,
    CAM_DEACT_COPY_BLEND = 5,
};

/* the float's bits as an int (the binary tests blendSpeed > 0 this way) */
static inline int CamFloatBits(float value)
{
    int bits;

    memcpy(&bits, &value, sizeof(bits));
    return bits;
}

static inline ImportCamera *Camera_GetImport(int idx)
{
    return &((ImportCamera *)ImportCameras)[idx];
}

// 0x004fee8 (0x14 bytes)
void SECTION_HEADER_CAMERA(void)
{
    DAT_0071ea2c = 0x10000;
}

// 0x004ff00 (0xc bytes)
void ____Cam_SetTweak_71ea50(float value)
{
    DAT_0071ea50 = value;
}

// 0x004ff0c (0x1c bytes)
void Camera_ClearPolar(float *pol)
{
    pol[0] = 0.0f;
    pol[1] = 0.0f;
    pol[2] = 0.0f;
    pol[3] = 0.0f;
    pol[4] = 0.0f;
}

// 0x004ff28 (0x68 bytes)
/* dst = src (a polar, 5 floats) with its azimuth turned by wrap */
void Cam_CopyRotWrapped(float wrap, float *dst, float *src)
{
    dst[0] = FastWrapRot(src[0], wrap);
    dst[1] = src[1];
    dst[2] = src[2];
    dst[3] = src[3];
    dst[4] = src[4];
}

// 0x004ff90 (0x70 bytes)
/* BackupCam = the current camera, with its own copy of the control state */
void BackupCurrentCam(void)
{
    FastMemCopy(&BackupCam, GameCamera.pCurrentUpdCam, sizeof(UpdateCam));
    FastMemCopy(g_BackupCamControl, CamControlCurrent, sizeof(CamControlCurrent));
    BackupCam.control = g_BackupCamControl;
}

// 0x0050000 (0x64 bytes)
/* runs func once after this frame's camera update (up to 16) */
void Camera_AddPostUpdFunc(void *func)
{
    if (CamPostUpdRoutineCnt >= 16) {
        return;
    }

    for (int i = 0; i < CamPostUpdRoutineCnt; i++) {
        if ((void *)CamPostUpdRoutines[i] == func) {
            return;
        }
    }

    CamPostUpdRoutines[CamPostUpdRoutineCnt] = (CamPostUpdFunc)func;
    CamPostUpdRoutineCnt++;
}

// 0x0050064 (0x90 bytes)
void ExecuteCamPostUpdFuncs(void)
{
    for (int i = 0; i < CamPostUpdRoutineCnt; i++) {
        CamPostUpdRoutines[i]();
    }

    CamPostUpdRoutineCnt = 0;
}

// 0x00500f4 (0x58 bytes)
UpdateCam *Camera_FindCameraOfType(int type)
{
    for (int i = 0; i < 48; i++) {
        if (UpdateCams[i].type == type) {
            return &UpdateCams[i];
        }
    }

    return NULL;
}

// 0x005014c (0x58 bytes)
UpdateCam *Camera_FindCameraOfImportIdx(int idx)
{
    for (int i = 0; i < 48; i++) {
        if (UpdateCams[i].importCameraIdx == idx) {
            return &UpdateCams[i];
        }
    }

    return NULL;
}

// 0x00501a4 (0x3c bytes)
void Camera_FreeUpdateCam(UpdateCam *pCam)
{
    UpdateCamsUsed[pCam - UpdateCams] = 0;
}

// 0x00501e8 (0x98 bytes)
/* moves current toward target by a damped spring: speed += (target - current) * gain -
   speed * damp, kept within limit (when set) and within the distance left. Returns the new
   value. (speed is the third argument in the binary.) */
float Cam_InterpValues(float current, float target, float gain, float damp, float limit, float *speed)
{
    float diff = target - current;
    float step = *speed + (diff * gain - damp * *speed);

    *speed = step;
    if (limit != 0.0f) {
        if (step > limit) {
            step = limit;
            *speed = limit;
        }
        else if (!(step >= -limit)) {
            step = -limit;
            *speed = -limit;
        }
    }

    float left = fabsf(diff);
    if (!(step <= left)) {
        step = left;
        *speed = left;
    }
    else if (!(step >= -left)) {
        step = -left;
        *speed = -left;
    }

    return current + step;
}

// 0x0050288 (0x110 bytes)
/* Cam_InterpValues for an angle: by the shorter way round, the result wrapped */
float Cam_InterpAngles(float current, float target, float gain, float damp, float limit, float *speed)
{
    float diff = FastDiffRots(target, current);
    float step = *speed + (diff * gain - damp * *speed);

    *speed = step;
    if (limit != 0.0f) {
        if (!(step <= limit)) {
            step = limit;
            *speed = limit;
        }
        else if (!(step >= -limit)) {
            step = -limit;
            *speed = -limit;
        }
    }

    float left = fabsf(diff);
    if (!(step <= left)) {
        step = left;
        *speed = left;
    }
    else if (!(step >= -left)) {
        step = -left;
        *speed = -left;
    }

    return FastWrapRot(current, step);
}

// 0x0050398 (0x20 bytes)
void Camera_DeactivateCurrent(void)
{
    UpdateCam *pCam = GameCamera.pCurrentUpdCam;

    pCam->activation.deactivate = 1;
    pCam->activation.activate = 0;
}

// 0x00503b8 (0x78 bytes)
/* the follow camera (type 0) keeps a moby at the camera that the hero collides with */
void Camera_handleCollWithHero(UpdateCam *pCam)
{
    if (pCam->type == 0) {
        if (GameCamera.camStatics.pCamColl == NULL) {
            GameCamera.camStatics.pCamColl = M1016_00183ea0(&GameCamera.posX);
        }
    }
    else if (GameCamera.camStatics.pCamColl != NULL) {
        DeleteMoby(GameCamera.camStatics.pCamColl);
        GameCamera.camStatics.pCamColl = NULL;
    }
}

// 0x0050430 (0x5c bytes)
void Camera_runSetupToNewCam(UpdateCam *pCam)
{
    void (*init)(UpdateCam *) = (void (*)(UpdateCam *))g_CameraVTable[pCam->funcIdx].init;

    if (init != NULL) {
        init(pCam);
    }
}

// 0x005048c (0x3a0 bytes)
/* makes pNewCam the current camera, setting up the blend from the old one by its
   deactivate request or the new one's blend mode */
void Camera_switchToNewCam(UpdateCam *pNewCam)
{
    UpdateCam *pOld = GameCamera.pCurrentUpdCam;
    CameraImportVars *vars = Camera_GetImport(pNewCam->importCameraIdx)->pVar;
    float blendSpeed = pNewCam->activation.blendSpeed;
    int deactivate = pOld->activation.deactivate;
    int blendMode = 0;

    if (vars != NULL) {
        blendMode = vars->blendMode;
    }

    if (deactivate == CAM_DEACT_NONE) {
        pNewCam->active = 1;
    }
    else if (deactivate == CAM_DEACT_BLEND || blendMode == CAM_BLEND_QUAT || blendMode == CAM_BLEND_POLAR) {
        if (blendMode == CAM_BLEND_QUAT) {
            GameCamera.blender.reqType = 0;
            if (CamFloatBits(blendSpeed) > 0) {
                GameCamera.blender.blendData.posData.reqPosInterpAdd = blendSpeed;
                GameCamera.blender.blendData.posData.reqQuatInterpAdd = blendSpeed;
            }
            else {
                GameCamera.blender.blendData.posData.reqPosInterpAdd = 0.018f;
                GameCamera.blender.blendData.posData.reqQuatInterpAdd = 0.018f;
            }
        }
        else if (blendMode == CAM_BLEND_POLAR) {
            int frames = 40;

            GameCamera.blender.reqType = 2;
            if (CamFloatBits(blendSpeed) > 0) {
                frames = FastDoubleToInt(blendSpeed);
            }
            GameCamera.blender.blendData.polarData.reqInterpFrames = frames;
        }

        GameCamera.blender.state = (GameCamera.blender.state == 0) ? 1 : 2;
    }
    else if (pOld->activation.deactivate == CAM_DEACT_COPY || pOld->activation.deactivate == CAM_DEACT_COPY_BLEND ||
             blendMode == CAM_BLEND_COPY || blendMode == CAM_BLEND_COPY_QUAT) {
        for (int i = 0; i < 4; i++) {
            pNewCam->pos[i] = pOld->pos[i];
        }
        for (int i = 0; i < 12; i++) {
            pNewCam->mtx[i] = pOld->mtx[i];
        }
        pNewCam->activation.activate = 2;

        if (pOld->activation.deactivate == CAM_DEACT_COPY_BLEND || blendMode == CAM_BLEND_COPY_QUAT) {
            GameCamera.blender.reqType = 0;
            if (CamFloatBits(blendSpeed) > 0) {
                GameCamera.blender.blendData.posData.reqPosInterpAdd = blendSpeed;
                GameCamera.blender.blendData.posData.reqQuatInterpAdd = blendSpeed;
            }
            else {
                GameCamera.blender.blendData.posData.reqPosInterpAdd = 0.018f;
                GameCamera.blender.blendData.posData.reqQuatInterpAdd = 0.018f;
                if (Level == Novalis) {
                    GameCamera.blender.blendData.posData.reqPosInterpAdd = 0.01f;
                    GameCamera.blender.blendData.posData.reqQuatInterpAdd = 0.01f;
                }
            }

            GameCamera.blender.state = (GameCamera.blender.state == 0) ? 1 : 2;
        }
    }
    else {
        pNewCam->active = 1;
    }

    pOld->activation.deactivate = 0;
    pOld->activation.activate = 0;
    pOld->active = 0;
    GameCamera.pLastUpdCam = pOld;
    FastMemCopy(CamControlLast, CamControlCurrent, sizeof(CamControlCurrent));
    GameCamera.pLastUpdCam->control = CamControlLast;

    GameCamera.pCurrentUpdCam = pNewCam;
    pNewCam->control = CamControlCurrent;
    GameCamera.camTimer = 0;

    void (*init)(UpdateCam *) = (void (*)(UpdateCam *))g_CameraVTable[pNewCam->funcIdx].init;
    if (init != NULL) {
        init(pNewCam);
    }

    BackupCurrentCam();

    if (ControlMode == 0) {
        GameCamera.posX = pNewCam->pos[0];
        GameCamera.posY = pNewCam->pos[1];
        GameCamera.posZ = pNewCam->pos[2];
        GameCamera.posW = pNewCam->pos[3];
    }

    pNewCam->lPos[0] = pNewCam->pos[0];
    pNewCam->lPos[1] = pNewCam->pos[1];
    pNewCam->lPos[2] = pNewCam->pos[2];
}

// 0x005082c (0x258 bytes)
/* whether pCam should take over from pCompare (the best so far, or NULL) */
int Camera_ActivationCheckPriority(UpdateCam *pCam, UpdateCam *pCompare)
{
    if (pCam->activation.priority == 0) {
        return 0;
    }

    int (*activate)(UpdateCam *, UpdateCam *) = (int (*)(UpdateCam *, UpdateCam *))g_CameraVTable[pCam->funcIdx].activate;
    if (activate != NULL) {
        int result = activate(pCam, pCompare);

        if (result == -1) {
            return 0;
        }
        if (result == 1) {
            return 1;
        }
    }

    u8 priority = pCam->activation.priority;
    int activationType = pCam->activation.activationType;

    switch (activationType) {
    case 1:
    case 2:
        if (pCam->activation.activate == 0) {
            return 0;
        }
        /* fall through */
    case 0:
        if (pCompare == NULL || pCompare->activation.deactivate != 0 ||
            priority > (u8)pCompare->activation.priority) {
            return 1;
        }
        return 0;

    case 4: {
        /* while the hero is in the camera's volume */
        int cuboid = Camera_GetImport(pCam->importCameraIdx)->pVar->cuboid;

        if (pCompare != NULL && pCompare->activation.deactivate == 0 &&
            !(priority > (u8)pCompare->activation.priority)) {
            return 0;
        }
        return MB_IsPntInCuboid(&g_heroPosition, cuboid) != 0;
    }

    case 7:
        /* the camera the hero asks for */
        if (pCam->type != (int)g_HeroRequestedCamType) {
            return 0;
        }
        if (pCompare->activation.deactivate == 0 && !(priority > (u8)pCompare->activation.priority)) {
            return 0;
        }
        if (pCam->type == 3) {
            /* a grind camera: only for its own path */
            int path = Camera_GetImport(pCam->importCameraIdx)->pVar->grindPath;

            if (path >= 0 && (g_heroGrindPath != *(int *)(g_GrindPaths + path * 0x20 + 0x10) || DAT_0096a250 != 0)) {
                return 0;
            }
        }
        return 1;

    default:
        return 0;
    }
}

// 0x0050a84 (0x5c bytes)
void Camera_Exit(UpdateCam *pCam)
{
    void (*exit)(UpdateCam *) = (void (*)(UpdateCam *))g_CameraVTable[pCam->funcIdx].exit;

    if (exit != NULL) {
        exit(pCam);
    }
}

// 0x0050ae0 (0x224 bytes)
/* picks the camera with the best claim, switches to it and updates it */
int UpdateAllCameras(void)
{
    UpdateCam *pBest = GameCamera.pCurrentUpdCam;
    bool switched = false;

    Camera_Exit(pBest);

    for (int i = 0; i < 48; i++) {
        if (UpdateCamsUsed[i] == 0) {
            continue;
        }

        UpdateCam *pCam = &UpdateCams[i];
        if (pCam != pBest && Camera_ActivationCheckPriority(pCam, pBest) != 0) {
            pBest = pCam;
            switched = true;
        }
    }

    if (switched) {
        Camera_switchToNewCam(pBest);
    }

    void (*update)(UpdateCam *) = (void (*)(UpdateCam *))g_CameraVTable[pBest->funcIdx].update;
    Camera_handleCollWithHero(pBest);
    if (update != NULL) {
        update(pBest);
    }

    pBest->lPos[0] = pBest->pos[0];
    pBest->lPos[1] = pBest->pos[1];
    pBest->lPos[2] = pBest->pos[2];
    ExecuteCamPostUpdFuncs();
    return -1;
}

// 0x0050d20 (0x3a8 bytes)
// inlined: FastRSqrt @0x50ee0, FastRSqrt @0x5100c
/* pos as a polar around center in the frame (fwd, side, up): pol[0] the azimuth from fwd
   (toward side positive), pol[1] the elevation (down from the plane positive), pol[2] the
   distance */
void Camera_Pos2Polar3d(float *pol, float *pos, float *center, float *fwd, float *side, float *up)
{
    float dx = pos[0] - center[0];
    float dy = pos[1] - center[1];
    float dz = pos[2] - center[2];
    float upLen = sqrtf(up[0] * up[0] + up[1] * up[1] + up[2] * up[2]);
    float along = (dx * up[0] + dy * up[1] + dz * up[2]) / upLen;

    /* the offset off the up axis */
    float flatX = dx;
    float flatY = dy;
    float flatZ = dz;
    if (upLen != 0.0f) {
        flatX = dx - up[0] * along;
        flatY = dy - up[1] * along;
        flatZ = dz - up[2] * along;
    }

    float flatSq = flatX * flatX + flatY * flatY + flatZ * flatZ;
    float flatLen = sqrtf(flatSq);
    float cosAzimuth = (fwd[0] * flatX + fwd[1] * flatY + fwd[2] * flatZ) / ((flatLen == 0.0f) ? 0.0001f : flatLen);
    float azimuth = FastAcosInline(cosAzimuth);

    float dirX = 0.0f;
    float dirY = 0.0f;
    float dirZ = 0.0f;
    if (flatLen != 0.0f) {
        float scale = 1.0f / sqrtf(flatSq);    /* FastRSqrt */

        dirX = flatX * scale;
        dirY = flatY * scale;
        dirZ = flatZ * scale;
    }

    if (!(side[0] * dirX + side[1] * dirY + side[2] * dirZ - 0.0f >= 0.0f)) {
        azimuth = -azimuth;
    }
    pol[0] = azimuth;

    /* the elevation is measured from fwd turned to the azimuth */
    float turned[4];
    MB_RotateQuatAxisAngle(azimuth, turned, fwd, up);

    float distSq = dx * dx + dy * dy + dz * dz;
    float dist = sqrtf(distSq);
    float cosElevation = (turned[0] * dx + turned[1] * dy + turned[2] * dz) / ((dist == 0.0f) ? 0.0001f : dist);
    float elevation = FastAcosInline(cosElevation);

    dirX = 0.0f;
    dirY = 0.0f;
    dirZ = 0.0f;
    if (dist != 0.0f) {
        float scale = 1.0f / sqrtf(distSq);    /* FastRSqrt */

        dirX = dx * scale;
        dirY = dy * scale;
        dirZ = dz * scale;
    }

    pol[2] = dist;
    if (up[0] * dirX + up[1] * dirY + up[2] * dirZ - 0.0f >= 0.0f) {
        elevation = -elevation;
    }
    pol[1] = elevation;
}

/* out = in's direction (unit length, or zero when in is zero), keeping its w */
static inline void Camera_UnitAxis(Vec4 *out, Vec4 *in)
{
    float lengthSq = in->x * in->x + in->y * in->y + in->z * in->z;

    if (sqrtf(lengthSq) == 0.0f) {
        out->x = 0.0f;
        out->y = 0.0f;
        out->z = 0.0f;
    }
    else {
        float scale = 1.0f / sqrtf(lengthSq);    /* FastRSqrt */

        out->x = in->x * scale;
        out->y = in->y * scale;
        out->z = in->z * scale;
    }

    out->w = in->w;
}

// 0x00510d8 (0x2ec bytes)
// inlined: FastRSqrt @0x5115c, FastRSqrt @0x51214, FastRSqrt @0x512d0
/* starts the polar blend from its pos, around the hero in the hero's own axes */
void Camera_InitBlenderPolarHero(void)
{
    CamBlenderPolarQuat *polar = &GameCamera.blender.blendData.polarData;
    Vec4 fwd;
    Vec4 side;
    Vec4 up;

    Camera_UnitAxis(&fwd, &g_heroMobyPtr->transform.v0);
    Camera_UnitAxis(&side, &g_heroMobyPtr->transform.v1);
    Camera_UnitAxis(&up, &g_heroMobyPtr->transform.v2);

    polar->fwd = fwd;
    polar->up = up;
    Camera_Pos2Polar3d(&polar->orgPol.azimuth, &polar->pos.x, &g_heroPosition.x, &fwd.x, &side.x, &up.x);
    polar->orgQuat = polar->q;
}

// 0x00513c4 (0x98 bytes)
/* hands a running position/rotation blend's state to the polar blend */
void Camera_CopyLastQuatToPolar(void)
{
    CamBlenderPosQuat *posData = &GameCamera.blender.blendData.posData;
    CamBlenderPolarQuat *polar = &GameCamera.blender.blendData.polarData;

    if (GameCamera.blender.type != 0) {
        return;
    }

    polar->pos = posData->pos;
    if (GameCamera.blender.reqType == 2) {
        polar->pos.x = g_heroFrameMove.x + posData->pos.x;
        polar->pos.y = g_heroFrameMove.y + posData->pos.y;
        polar->pos.z = g_heroFrameMove.z + posData->pos.z;
        polar->pos.w = g_heroFrameMove.w;
    }
    polar->q = posData->q;
}

// 0x005145c (0x58 bytes)
/* and back */
void Camera_CopyLastPolarToQuat(void)
{
    if (GameCamera.blender.type == 0) {
        return;
    }

    GameCamera.blender.blendData.posData.pos = GameCamera.blender.blendData.polarData.pos;
    GameCamera.blender.blendData.posData.q = GameCamera.blender.blendData.polarData.q;
}

// 0x00514c0 (0x630 bytes)
// inlined: FastRSqrt @0x515e4, FastRSqrt @0x516a4, FastRSqrt @0x51768
/* starts the requested blend from pLast (or from the blend already running) */
void Camera_InitBlender(UpdateCam *pLast)
{
    CamBlender *blender = &GameCamera.blender;
    CamBlenderPosQuat *posData = &blender->blendData.posData;
    CamBlenderPolarQuat *polar = &blender->blendData.polarData;

    if (blender->state == 1) {
        /* from the last camera */
        if (blender->reqType == 0) {
            posData->pos.x = pLast->pos[0];
            posData->pos.y = pLast->pos[1];
            posData->pos.z = pLast->pos[2];
            posData->pos.w = pLast->pos[3];
            MB_TransformToQuat(&posData->q.x, (Vec4 *)pLast->mtx);
        }
        else if (blender->reqType == 2) {
            polar->pos.x = pLast->pos[0];
            polar->pos.y = pLast->pos[1];
            polar->pos.z = pLast->pos[2];
            polar->pos.w = pLast->pos[3];
            MB_TransformToQuat(&polar->q.x, (Vec4 *)pLast->mtx);
            Camera_InitBlenderPolarHero();
        }
        else {
            /* around the new camera */
            Vec4 fwd;
            Vec4 side;
            Vec4 up;

            Camera_UnitAxis(&fwd, &g_heroMobyPtr->transform.v0);
            Camera_UnitAxis(&side, &g_heroMobyPtr->transform.v1);
            Camera_UnitAxis(&up, &g_heroMobyPtr->transform.v2);
            Camera_Pos2Polar3d(&polar->orgPol.azimuth, pLast->pos, GameCamera.pCurrentUpdCam->pos, &fwd.x, &side.x,
                               &up.x);
            MB_TransformToQuat(&polar->orgQuat.x, (Vec4 *)pLast->mtx);
            polar->q = polar->orgQuat;
        }
    }
    else if (blender->reqType == 2) {
        /* from the blend already running */
        Camera_CopyLastQuatToPolar();
        Camera_InitBlenderPolarHero();
    }
    else if (blender->reqType == 1) {
        Camera_CopyLastQuatToPolar();
        polar->orgQuat = polar->q;
    }
    else if (blender->reqType == 0) {
        Camera_CopyLastPolarToQuat();
    }

    blender->state = 3;
    blender->type = blender->reqType;

    if (blender->reqType == 0) {
        posData->posInterpFac = 0.0f;
        posData->posInterpAdd = posData->reqPosInterpAdd;
        posData->orgPos = posData->pos;
        posData->quatInterpFac = 0.0f;
        posData->quatInterpAdd = posData->reqQuatInterpAdd;
        posData->orgQuat = posData->q;
    }
    else {
        /* (the binary counts the requested frames up by one each time) */
        polar->reqInterpFrames++;

        int frames = (int)(((float)polar->reqInterpFrames + 0.5f) * animationSpeed);
        polar->interpFrames = frames;
        polar->interpMaxInv = 1.0f / (float)FastIntToDouble(frames);
    }
}

// 0x0051af8 (0x228 bytes)
/* one frame of a position/rotation blend toward pCam. Returns 1 once both are done. */
int Camera_BlendCamsPosQuat(UpdateCam *pCam, CamBlenderPosQuat *posData)
{
    if (posData->posInterpFac == 1.0f && posData->quatInterpFac == 1.0f) {
        return 1;
    }

    float posT = MB_CosineInterpolate(0.0f, 1.0f, posData->posInterpFac);

    /* the start moves with the hero */
    posData->orgPos.x = g_heroFrameMove.x + posData->orgPos.x;
    posData->orgPos.y = g_heroFrameMove.y + posData->orgPos.y;
    posData->orgPos.z = g_heroFrameMove.z + posData->orgPos.z;
    posData->orgPos.w = g_heroFrameMove.w;
    posData->pos.x = (pCam->pos[0] - posData->orgPos.x) * posT + posData->orgPos.x;
    posData->pos.y = (pCam->pos[1] - posData->orgPos.y) * posT + posData->orgPos.y;
    posData->pos.z = (pCam->pos[2] - posData->orgPos.z) * posT + posData->orgPos.z;

    if (ControlMode == 0) {
        GameCamera.posX = posData->pos.x;
        GameCamera.posY = posData->pos.y;
        GameCamera.posZ = posData->pos.z;
        GameCamera.posW = posData->pos.w;
    }

    Vec4 target;
    MB_TransformToQuat(&target.x, (Vec4 *)pCam->mtx);

    float quatT = MB_CosineInterpolate(0.0f, 1.0f, posData->quatInterpFac);
    Mtx4 orient;
    FastSlerp(quatT, &posData->q.x, &posData->orgQuat.x, &target.x);
    FastQuaternionToMtx4Identity(&posData->q, &orient);
    if (ControlMode == 0) {
        FastApplyTransform((Vec4 *)&GameCamera.orientMtx, (Vec4 *)&orient);
    }

    posData->posInterpFac = posData->posInterpFac + posData->posInterpAdd * DAT_0071f408;
    if (!(posData->posInterpFac <= 1.0f)) {
        posData->posInterpFac = 1.0f;
    }

    posData->quatInterpFac = posData->quatInterpFac + posData->quatInterpAdd * DAT_0071f408;
    if (!(posData->quatInterpFac <= 1.0f)) {
        posData->quatInterpFac = 1.0f;
    }

    return 0;
}

// 0x0051d40 (0xa78 bytes)
// inlined: FastRSqrt @0x51f4c, FastRSqrt @0x52008, FastRSqrt @0x521f4, FastRSqrt @0x52614
/* one frame of a polar blend toward pCam: the polar around the hero (or around pCam's position)
   closes in by an eased fraction, and the rotation follows. Returns 1 once its frames run out. */
int Camera_BlendCamsPolQuat(UpdateCam *pCam, CamBlenderPolarQuat *polar)
{
    if (polar->interpFrames <= 0) {
        return 1;
    }

    float eased = MB_CosineInterpolate(1.0f, (float)polar->reqInterpFrames,
                                       (float)polar->interpFrames * polar->interpMaxInv);
    float fraction = 1.0f / eased;

    Vec4 fwd;
    Vec4 side;
    Vec4 up;
    Vec4 center;
    PolarSm target;

    if (GameCamera.blender.type == 2) {
        /* around the hero, in the axes it had at the start */
        fwd = polar->fwd;
        up = polar->up;
        side.x = up.y * fwd.z - up.z * fwd.y;
        side.y = up.z * fwd.x - up.x * fwd.z;
        side.z = up.x * fwd.y - up.y * fwd.x;
        side.w = 0.0f;
        center = g_heroPosition;
        Camera_Pos2Polar3d(&target.azimuth, pCam->pos, &center.x, &fwd.x, &side.x, &up.x);
    }
    else {
        /* around the new camera, ending behind it */
        center.x = pCam->pos[0];
        center.y = pCam->pos[1];
        center.z = pCam->pos[2];
        center.w = pCam->pos[3];
        Camera_UnitAxis(&fwd, &g_heroMobyPtr->transform.v0);
        Camera_UnitAxis(&up, &g_heroMobyPtr->transform.v2);
        target.azimuth = 3.1415927f;
        target.elevation = 0.0f;
        target.radius = 0.0f;
    }

    float azimuthDiff = FastDiffRots(target.azimuth, polar->orgPol.azimuth);
    polar->orgPol.azimuth = FastWrapRot(polar->orgPol.azimuth, fraction * azimuthDiff);
    polar->orgPol.elevation =
        FastWrapRot(polar->orgPol.elevation, fraction * FastDiffRots(target.elevation, polar->orgPol.elevation));
    polar->orgPol.radius = fraction * (target.radius - polar->orgPol.radius) + polar->orgPol.radius;

    /* the offset: fwd at the radius, turned by the azimuth about up, then by the elevation
       about the axis across */
    float fwdLen = sqrtf(fwd.x * fwd.x + fwd.y * fwd.y + fwd.z * fwd.z);
    float toRadius = polar->orgPol.radius / fwdLen;
    Vec4 offset;
    offset.x = 0.0f;
    offset.y = 0.0f;
    offset.z = 0.0f;
    if (fwdLen != 0.0f) {
        offset.x = fwd.x * toRadius;
        offset.y = fwd.y * toRadius;
        offset.z = fwd.z * toRadius;
    }
    offset.w = fwd.w;
    MB_RotateQuatAxisAngle(polar->orgPol.azimuth, &offset.x, &offset.x, &up.x);

    float acrossX = up.y * offset.z - up.z * offset.y;
    float acrossY = up.z * offset.x - up.x * offset.z;
    float acrossZ = up.x * offset.y - up.y * offset.x;
    float acrossSq = acrossX * acrossX + acrossY * acrossY + acrossZ * acrossZ;
    Vec4 across;
    across.x = 0.0f;
    across.y = 0.0f;
    across.z = 0.0f;
    if (sqrtf(acrossSq) != 0.0f) {
        float scale = 1.0f / sqrtf(acrossSq);    /* FastRSqrt */

        across.x = acrossX * scale;
        across.y = acrossY * scale;
        across.z = acrossZ * scale;
    }
    across.w = 0.0f;
    MB_RotateQuatAxisAngle(polar->orgPol.elevation, &offset.x, &offset.x, &across.x);

    polar->pos.x = center.x + offset.x;
    polar->pos.y = center.y + offset.y;
    polar->pos.z = center.z + offset.z;
    polar->pos.w = center.w;
    if (ControlMode == 0) {
        GameCamera.posX = polar->pos.x;
        GameCamera.posY = polar->pos.y;
        GameCamera.posZ = polar->pos.z;
        GameCamera.posW = polar->pos.w;
    }

    /* the turn about the blend's up that brings its forward onto pCam's (taken the long way
       round when the azimuth is) */
    Mtx4 m;
    FastQuaternionToMtx4(&polar->orgQuat.x, &m.v0.x);

    float *camFwd = &pCam->mtx[0];
    float *camUp = &pCam->mtx[8];
    float upDot = m.v2.x * camFwd[0] + m.v2.y * camFwd[1] + m.v2.z * camFwd[2];
    float flatX = camFwd[0] - m.v2.x * upDot;
    float flatY = camFwd[1] - m.v2.y * upDot;
    float flatZ = camFwd[2] - m.v2.z * upDot;
    float flatLen = sqrtf(flatX * flatX + flatY * flatY + flatZ * flatZ);
    float turnSign = (m.v1.x * flatX + m.v1.y * flatY + m.v1.z * flatZ - 0.0f >= 0.0f) ? 1.0f : -1.0f;
    float turn = FastAcosInline((m.v0.x * flatX + m.v0.y * flatY + m.v0.z * flatZ) / flatLen) * turnSign;

    if (!(fabsf(azimuthDiff) <= 1.5707964f)) {
        if ((azimuthDiff >= 0.0f && turnSign < 0.0f) || (azimuthDiff < 0.0f && turnSign >= 0.0f)) {
            turn = (turn - 0.0f >= 0.0f) ? turn - 6.2831855f : turn + 6.2831855f;
        }
    }

    /* this frame's share of the turn, and all of it */
    Vec4 partFwd;
    Vec4 partSide;
    if (fabsf(turn * fraction) >= 1e-05f) {
        Vec4 quat;

        MB_AxisAngleToQuat(turn * fraction, &quat.x, &m.v2.x);
        MB_QuatRotate(&partFwd.x, &m.v0.x, &quat.x);
        MB_QuatRotate(&partSide.x, &m.v1.x, &quat.x);
    }
    else {
        partFwd = m.v0;
        partSide = m.v1;
    }

    Vec4 fullFwd;
    if (fabsf(turn) >= 1e-05f) {
        Vec4 quat;

        MB_AxisAngleToQuat(turn, &quat.x, &m.v2.x);
        MB_QuatRotate(&fullFwd.x, &m.v0.x, &quat.x);
    }
    else {
        fullFwd = m.v0;
    }

    /* then the pitch from the turned forward to pCam's, about the turned side */
    float pitchSign = (fullFwd.x * camUp[0] + fullFwd.y * camUp[1] + fullFwd.z * camUp[2] - 0.0f >= 0.0f) ? 1.0f : -1.0f;
    float pitch = FastAcosInline(fullFwd.x * camFwd[0] + fullFwd.y * camFwd[1] + fullFwd.z * camFwd[2]) * pitchSign;
    MB_RotateQuatAxisAngle(pitch * fraction, &partFwd.x, &partFwd.x, &partSide.x);

    /* the camera's axes: that forward, across from the hero's gravity, and up from both */
    CameraMatrix *orient = &GameCamera.orientMtx;
    float fwdSq = partFwd.x * partFwd.x + partFwd.y * partFwd.y + partFwd.z * partFwd.z;
    float fx = 0.0f;
    float fy = 0.0f;
    float fz = 0.0f;
    if (sqrtf(fwdSq) != 0.0f) {
        float scale = 1.0f / sqrtf(fwdSq);    /* FastRSqrt */

        fx = partFwd.x * scale;
        fy = partFwd.y * scale;
        fz = partFwd.z * scale;
    }
    orient->forward.x = fx;
    orient->forward.y = fy;
    orient->forward.z = fz;
    orient->forward.w = partFwd.w;

    float rightX = g_heroGravityDir.y * fz - g_heroGravityDir.z * fy;
    float rightY = g_heroGravityDir.z * fx - g_heroGravityDir.x * fz;
    float rightZ = g_heroGravityDir.x * fy - g_heroGravityDir.y * fx;
    float rightLen = sqrtf(rightX * rightX + rightY * rightY + rightZ * rightZ);
    float toUnit = -1.0f / rightLen;
    float rx = 0.0f;
    float ry = 0.0f;
    float rz = 0.0f;
    if (rightLen != 0.0f) {
        rx = rightX * toUnit;
        ry = rightY * toUnit;
        rz = rightZ * toUnit;
    }

    orient->right.w = 0.0f;
    orient->up.w = 0.0f;
    orient->right.x = rx;
    orient->right.y = ry;
    orient->right.z = rz;
    orient->up.x = fy * rz - fz * ry;
    orient->up.y = fz * rx - fx * rz;
    orient->up.z = fx * ry - fy * rx;

    MB_TransformToQuat(&polar->q.x, (Vec4 *)orient);
    MB_TransformToQuat(&polar->orgQuat.x, (Vec4 *)orient);
    FastDecTimerS32(&polar->interpFrames);
    return 0;
}

// 0x00527b8 (0x108 bytes)
/* runs the blend toward pCam; once it is done the camera is pCam's */
void Camera_BlendCams(UpdateCam *pCurr)
{
    int done;

    if (GameCamera.blender.type == 0) {
        done = Camera_BlendCamsPosQuat(pCurr, &GameCamera.blender.blendData.posData);
    }
    else {
        done = Camera_BlendCamsPolQuat(pCurr, &GameCamera.blender.blendData.polarData);
    }

    if (done == 0) {
        return;
    }

    if (ControlMode == 0) {
        float *orient = &GameCamera.orientMtx.forward.x;

        for (int i = 0; i < 12; i++) {
            orient[i] = pCurr->mtx[i];
        }

        GameCamera.posX = pCurr->pos[0];
        GameCamera.posY = pCurr->pos[1];
        GameCamera.posZ = pCurr->pos[2];
        GameCamera.posW = pCurr->pos[3];
    }

    GameCamera.blender.state = 0;
    GameCamera.blender.type = 0;
}

// 0x00528e8 (0x258 bytes)
/* one frame of a shake: moves the camera along its up (dir 0) or forward (dir 1) by a wave that
   fades with the square of the time left */
void HandleCameraShake(CamOffsetRec *pShk, int dir)
{
    if (GameCamera.pCurrentUpdCam != NULL && GameCamera.pCurrentUpdCam->type == 6) {
        pShk->time = 0;
        pShk->div = 0;
        return;
    }

    if (pShk->time == 0) {
        pShk->div = 0;
        return;
    }

    if (pShk->div < pShk->time) {
        pShk->div = pShk->time;
    }
    FastDecTimerS32(&pShk->time);

    float fade = (float)FastIntToDouble(pShk->time) / (float)FastIntToDouble(pShk->div);
    float wave = FastCosInline(FastAddRots((float)FastIntToDouble(pShk->time) * 2.0f));
    float adjust = pShk->strength * wave * fade * fade;

    pShk->adjust = adjust;

    Vec4 *axis = (dir == 0) ? &GameCamera.orientMtx.up : &GameCamera.orientMtx.forward;
    float axisLen = sqrtf(axis->x * axis->x + axis->y * axis->y + axis->z * axis->z);
    float moveX = 0.0f;
    float moveY = 0.0f;
    float moveZ = 0.0f;
    if (axisLen != 0.0f) {
        float scale = adjust / axisLen;

        moveX = axis->x * scale;
        moveY = axis->y * scale;
        moveZ = axis->z * scale;
    }

    GameCamera.posX = GameCamera.posX + moveX;
    GameCamera.posY = GameCamera.posY + moveY;
    GameCamera.posZ = GameCamera.posZ + moveZ;
}

// 0x0052b68 (0x504 bytes)
// inlined: FastRSqrt @0x52d70, FastRSqrt @0x52ea4
/* the hero tracking the cameras follow: the up direction (smoothed), this frame's move split
   along and off it, the height to hold while jumping, recent turns, and the moby stood on */
void Camera_UpdateHeroInfo(void)
{
    CameraStatics *statics = &GameCamera.camStatics;

    statics->heroUpLast = statics->heroUpActual;
    statics->heroUpActual.w = g_heroGravityDir.w;

    float gravityLen = sqrtf(g_heroGravityDir.x * g_heroGravityDir.x + g_heroGravityDir.y * g_heroGravityDir.y +
                             g_heroGravityDir.z * g_heroGravityDir.z);
    float toUnit = -1.0f / gravityLen;
    float upX = 0.0f;
    float upY = 0.0f;
    float upZ = 0.0f;
    if (gravityLen != 0.0f) {
        upX = g_heroGravityDir.x * toUnit;
        upY = g_heroGravityDir.y * toUnit;
        upZ = g_heroGravityDir.z * toUnit;
    }
    statics->heroUpActual.x = upX;
    statics->heroUpActual.y = upY;
    statics->heroUpActual.z = upZ;

    /* (nudged off a straight flip so the smoothing has a way round) */
    float targetX = upX;
    float targetY = upY;
    float targetZ = upZ;
    if (!(statics->heroUp.x * upX + statics->heroUp.y * upY + statics->heroUp.z * upZ - -0.98f >= 0.0f)) {
        targetX = upX + 0.2f;
        targetY = upY + 0.2f;
        targetZ = upZ + 0.2f;
    }

    statics->heroUp.x = Cam_InterpValues(statics->heroUp.x, targetX, 0.015f, 0.2f, 0.0f, &statics->heroUpSpeed.x);
    statics->heroUp.y = Cam_InterpValues(statics->heroUp.y, targetY, 0.015f, 0.2f, 0.0f, &statics->heroUpSpeed.y);

    float smoothZ = Cam_InterpValues(statics->heroUp.z, targetZ, 0.015f, 0.2f, 0.0f, &statics->heroUpSpeed.z);
    float smoothX = statics->heroUp.x;
    float smoothY = statics->heroUp.y;
    float smoothSq = smoothX * smoothX + smoothY * smoothY + smoothZ * smoothZ;
    float unitX = 0.0f;
    float unitY = 0.0f;
    float unitZ = 0.0f;
    if (sqrtf(smoothSq) != 0.0f) {
        float scale = 1.0f / sqrtf(smoothSq);    /* FastRSqrt */

        unitX = smoothX * scale;
        unitY = smoothY * scale;
        unitZ = smoothZ * scale;
    }
    statics->heroUp.x = unitX;
    statics->heroUp.y = unitY;
    statics->heroUp.z = unitZ;

    /* this frame's move, along the up and off it */
    float moveX = g_heroPosition.x - statics->heroLastPos.x;
    float moveY = g_heroPosition.y - statics->heroLastPos.y;
    float moveZ = g_heroPosition.z - statics->heroLastPos.z;
    float moveUp = moveX * upX + moveY * upY + moveZ * upZ;
    float upLen = sqrtf(upX * upX + upY * upY + upZ * upZ);

    statics->heroMoveVec.x = moveX;
    statics->heroMoveVec.y = moveY;
    statics->heroMoveVec.z = moveZ;
    statics->heroMoveVec.w = g_heroPosition.w;
    statics->heroSpeedUp = moveUp;
    statics->heroMoveVecUp.w = g_heroGravityDir.w;
    statics->heroMoveVec2D.w = g_heroPosition.w;
    statics->heroSpeed = sqrtf(moveX * moveX + moveY * moveY + moveZ * moveZ);

    float alongScale = moveUp / upLen;
    float alongX = 0.0f;
    float alongY = 0.0f;
    float alongZ = 0.0f;
    if (upLen != 0.0f) {
        alongX = upX * alongScale;
        alongY = upY * alongScale;
        alongZ = upZ * alongScale;
    }
    statics->heroMoveVecUp.x = alongX;
    statics->heroMoveVecUp.y = alongY;
    statics->heroMoveVecUp.z = alongZ;

    float flatX = moveX - alongX;
    float flatY = moveY - alongY;
    float flatZ = moveZ - alongZ;
    float flatSq = flatX * flatX + flatY * flatY + flatZ * flatZ;

    statics->heroMoveVec2D.x = flatX;
    statics->heroMoveVec2D.y = flatY;
    statics->heroMoveVec2D.z = flatZ;
    statics->heroSpeed2D = sqrtf(flatSq);
    if (statics->heroSpeed2D != 0.0f) {
        float scale = 1.0f / sqrtf(flatSq);    /* FastRSqrt */

        statics->heroMoveVec2D.x = flatX * scale;
        statics->heroMoveVec2D.y = flatY * scale;
        statics->heroMoveVec2D.z = flatZ * scale;
    }

    statics->heroLastPos = g_heroPosition;

    /* the height the cameras follow, eased (held as is for camera request 80 off a wall jump) */
    statics->heroNoJump.x = g_heroPosition.x;
    statics->heroNoJump.y = g_heroPosition.y;
    if (!(g_HeroRequestedCamType == 80 && g_heroState != WALL_JUMP)) {
        statics->heroNoJump.z = Cam_InterpValues(statics->heroNoJump.z, g_heroPosition.z, 0.0075f, 0.175f, 0.0f,
                                                 &statics->heroLastZSpeed);
        statics->heroLastZ = g_heroPosition.z;
    }

    for (int i = 0; i < 4; i++) {
        statics->heroLastRotZ[i] = statics->heroLastRotZ[i + 1];
    }
    statics->heroLastRotZ[4] = g_heroRotation.z;

    /* how far the moby stood on rose this frame */
    MobyInstance *ground = (MobyInstance *)g_standingOnMoby;
    if (ground == NULL || ground->oClass == TRAIN_LOCOMOTIVE || ground->oClass == TRAIN_CARRIAGE_04BA) {
        statics->groundMobyDeltaZ = 0.0f;
        statics->pGroundMoby = NULL;
        statics->groundMobyZ = g_heroPosition.z;
    }
    else if (ground == statics->pGroundMoby) {
        float rise = ground->pos.z - statics->groundMobyZ;

        statics->groundMobyDeltaZ = rise;
        if (!(fabsf(rise) >= 0.001f)) {
            statics->groundMobyDeltaZ = 0.0f;
        }
        statics->groundMobyZ = ground->pos.z;
    }
    else {
        statics->pGroundMoby = ground;
        statics->groundMobyDeltaZ = 0.0f;
        statics->groundMobyZ = ground->pos.z;
    }
}

// 0x0053078 (0x178 bytes)
/* whether the camera is under water: a line down through the camera, stepping past whatever
   it hits that is not water (up to 6 times) */
void Camera_UpdateUnderWater(void)
{
    if (GameCamera.pCurrentUpdCam->type == 6 || g_gameMode != GAME_MODE_NORMAL) {
        GameCamera.camUnderWater = 0;
        return;
    }

    Vec4 from;
    Vec4 to;
    from.x = GameCamera.posX;
    from.y = GameCamera.posY;
    from.z = GameCamera.posZ + 0.75f;
    from.w = GameCamera.posW;
    to.x = GameCamera.posX;
    to.y = GameCamera.posY;
    to.z = GameCamera.posZ - 0.75f;
    to.w = GameCamera.posW;

    for (int i = 0; i < 6; i++) {
        if (CollLine(&from.x, &to.x, 18, NULL, NULL) == 0) {
            return;
        }

        if (CollHotspot() == COLL_WATER) {
            float waterZ = CollWaterHeight(&g_CollOutput.ip.x, NULL);

            GameCamera.camUnderWater = GameCamera.posZ < waterZ + 0.04f;
            return;
        }

        from = g_CollOutput.ip;
        from.z = from.z - 0.01f;
    }
}

/* the float's bits made to sort like the float when compared as ints */
static inline int CamFloatOrder(float value)
{
    int bits = CamFloatBits(value);
    int sign = bits >> 31;

    return ((int)((u32)sign >> 1) ^ bits) - sign;
}

// 0x00531f0 (0x144 bytes)
/* the collision flags the cameras use this frame: whether the water surface stops them, and
   which hot material (the one the hero is in) they pass through */
void Camera_SetCollFlags(void)
{
    int bumpFlags = COLL_DOUBLE_SIDED | COLL_ALT_PRIMSET;

    if ((int)g_heroStateType == 17 || (int)g_heroStateType == 18 || g_heroState == WATER_WALKING) {
        bumpFlags = COLL_IGNORE_MATERIAL | COLL_DOUBLE_SIDED | COLL_ALT_PRIMSET;
    }
    if ((int)g_heroStateType != 17 && CamFloatOrder(GameCamera.posZ) > CamFloatOrder(g_heroWaterZ)) {
        /* above the water: it blocks */
        bumpFlags = COLL_DOUBLE_SIDED | COLL_ALT_PRIMSET;
    }

    CAMERA_COLL_BUMP_FLAGS = bumpFlags;
    CAMERA_COLL_SPHERE_FLAGS = bumpFlags | COLL_CAMERA;

    /* COLL_IGNORE_MATERIAL skips the material in bits 8-12 */
    if (g_heroHotSpotLava != 0) {
        GameCamera.camStatics.hotspot = COLL_LAVA << 8;
        CAMERA_COLL_FLAGS = (COLL_LAVA << 8) | 0xb4;
    }
    else if (g_heroHotSpotDeathSand != 0) {
        GameCamera.camStatics.hotspot = COLL_DEATH_MUD << 8;
        CAMERA_COLL_FLAGS = (COLL_DEATH_MUD << 8) | 0xb4;
    }
    else if (g_heroHotSpotQuickSand != 0) {
        GameCamera.camStatics.hotspot = COLL_MUD_QUICKSAND << 8;
        CAMERA_COLL_FLAGS = (COLL_MUD_QUICKSAND << 8) | 0xb4;
    }
    else if (g_heroHotSpotIceWater != 0) {
        GameCamera.camStatics.hotspot = COLL_DEATH_ICE << 8;
        CAMERA_COLL_FLAGS = (COLL_DEATH_ICE << 8) | 0xb4;
    }
    else if (g_heroHotSpotWater != 0) {
        GameCamera.camStatics.hotspot = COLL_WATER << 8;
        CAMERA_COLL_FLAGS = (COLL_WATER << 8) | 0xb4;
    }
    else {
        CAMERA_COLL_FLAGS = GameCamera.camStatics.hotspot | 0xb4;
    }
}

// 0x0053338 (0x50 bytes)
/* fades the scene fade out by fadeSpeed a frame */
void Camera_HandleScreenFade(void)
{
    if (CamFloatBits(GameCamera.camStatics.fadeSpeed) == 0) {
        return;
    }

    SceneScreenFade = SceneScreenFade - GameCamera.camStatics.fadeSpeed;
    if (!(SceneScreenFade > 0.0f)) {
        SceneScreenFade = 0.0f;
        GameCamera.camStatics.fadeSpeed = 0.0f;
    }
}

// 0x0053398 (0x1a8 bytes)
/* inside a fog blender, the level fog is its two settings mixed by how far in pos is */
void Camera_UpdateFog(float *pos)
{
    float blend;
    int idx;

    if (GetBlenderAtPnt((Vec4 *)pos, &blend, &idx) == 0) {
        return;
    }

    Blender *blender = &g_Blenders[idx];
    if ((blender->flags & 2) == 0) {
        return;
    }

    int weight = FastDoubleToInt(blend * 255.0f);
    int rest = 255 - weight;
    levelFog.r = (u8)((blender->fogColor2.R * weight + blender->fogColor1.R * rest) >> 8);
    levelFog.g = (u8)((blender->fogColor2.G * weight + blender->fogColor1.G * rest) >> 8);
    levelFog.b = (u8)((blender->fogColor2.B * weight + blender->fogColor1.B * rest) >> 8);

    LevelFogNearDist = (blender->fogNearDist2 * blend + blender->fogNearDist1 * (1.0f - blend)) * 1024.0f;
    LevelFogFarDist = (blender->fogFarDist2 * blend + blender->fogFarDist1 * (1.0f - blend)) * 1024.0f;
    LevelFogNearIntensity =
        255.0f - (blender->fogNearIntensity2 * blend + blender->fogNearIntensity1 * (1.0f - blend)) * 255.0f;
    LevelFogFarIntensity =
        255.0f - (blender->fogFarIntensity2 * blend + blender->fogFarIntensity1 * (1.0f - blend)) * 255.0f;
}

// 0x0053550 (0x38c bytes)
/* the camera's frame: hero tracking, the cameras' update and switch, the blend, shakes, water
   and fog */
void UpdateCamera(void)
{
    if (g_gameMode == GAME_MODE_VENDOR) {
        if (g_lastVendorWasPda != 0) {
            return;
        }

        GameCamera.blender.state = 0;
        GameCamera.blender.type = 0;
    }

    GameCamera.camTimer++;
    Camera_HandleScreenFade();
    Camera_SetCollFlags();
    Camera_UpdateHeroInfo();
    UpdateAllCameras();

    UpdateCam *pCam = GameCamera.pCurrentUpdCam;
    if (GameCamera.blender.state == 1 || GameCamera.blender.state == 2) {
        Camera_InitBlender(GameCamera.pLastUpdCam);
    }

    if (GameCamera.blender.state == 3) {
        Camera_BlendCams(pCam);
    }
    else if (ControlMode == 0) {
        float *orient = &GameCamera.orientMtx.forward.x;

        GameCamera.posX = pCam->pos[0];
        GameCamera.posY = pCam->pos[1];
        GameCamera.posZ = pCam->pos[2];
        GameCamera.posW = pCam->pos[3];
        for (int i = 0; i < 12; i++) {
            orient[i] = pCam->mtx[i];
        }
    }

    if (ControlMode == 0) {
        Mtx4 rotation;

        FastMtxCopyNoTranslate(&rotation, (Mtx4 *)&GameCamera.orientMtx);
        MB_MtxToEuler(&rotation, &GameCamera.rot.azimuth);
    }

    HandleCameraShake(&GameCamera.shake, 0);
    HandleCameraShake(&GameCamera.shakeFwd, 1);
    Camera_UpdateUnderWater();
    Camera_UpdateFog(&GameCamera.posX);

    /* the mirror cheat flips the camera's handedness */
    if (Cheats[4] != 0) {
        CameraMatrix *orient = &GameCamera.orientMtx;

        orient->right.w = 0.0f;
        orient->right.x = orient->forward.y * orient->up.z - orient->forward.z * orient->up.y;
        orient->right.z = orient->forward.x * orient->up.y - orient->forward.y * orient->up.x;
        orient->right.y = orient->forward.z * orient->up.x - orient->forward.x * orient->up.z;
    }
}

// 0x00538dc (0x60 bytes)
/* the g_CameraVTable entry of a camera type (the -1 end if none) */
int Camera_GetFuncIdx(int type)
{
    int idx = 0;

    while (g_CameraVTable[idx].type != -1 && g_CameraVTable[idx].type != type) {
        idx++;
    }

    return idx;
}

// 0x005393c (0x1a0 bytes)
/* makes the follow camera (type 0) current, with no blend */
void Camera_resetToFollow(void)
{
    UpdateCam *pOld = GameCamera.pCurrentUpdCam;

    if (pOld != NULL) {
        pOld->active = 0;
        pOld->activation.activate = 0;
        pOld->activation.deactivate = 0;
    }

    UpdateCam *pFollow = NULL;
    for (int i = 0; i < 48; i++) {
        if (UpdateCams[i].type == 0) {
            pFollow = &UpdateCams[i];
            break;
        }
    }

    GameCamera.pCurrentUpdCam = pFollow;
    pFollow->active = 1;
    GameCamera.blender.state = 0;
    pFollow->control = CamControlCurrent;
    Camera_UpdateHeroInfo();

    UpdateCam *pCam = GameCamera.pCurrentUpdCam;
    void (*init)(UpdateCam *) = (void (*)(UpdateCam *))g_CameraVTable[pCam->funcIdx].init;
    if (init != NULL) {
        init(pCam);
    }

    BackupCurrentCam();

    pCam = GameCamera.pCurrentUpdCam;
    GameCamera.posX = pCam->pos[0];
    GameCamera.posY = pCam->pos[1];
    GameCamera.posZ = pCam->pos[2];
    GameCamera.posW = pCam->pos[3];
    pCam->lPos[0] = pCam->pos[0];
    pCam->lPos[1] = pCam->pos[1];
    pCam->lPos[2] = pCam->pos[2];
    GameCamera.camStatics.heroNoJump.x = g_heroPosition.x;
    GameCamera.camStatics.heroNoJump.y = g_heroPosition.y;
    GameCamera.camStatics.heroNoJump.z = g_heroPosition.z;
}

// 0x0053ae8 (0x330 bytes)
// inlined: FastRSqrt @0x53bd4
/* sets up the hero tracking and an UpdateCam for each of the level's cameras, then starts on
   the follow camera */
void InitCameras(void)
{
    CameraStatics *statics = &GameCamera.camStatics;

    GameCamera.camUnderWater = 0;
    GameCamera.camTimer = 0;
    CamPostUpdRoutineCnt = 0;
    DAT_0071ea50 = 0.75f;

    for (int i = 0; i < 48; i++) {
        UpdateCamsUsed[i] = 0;
        UpdateCams[i].active = 0;
    }

    GameCamera.pLastUpdCam = NULL;
    GameCamera.blender.state = 0;

    Vec4 up;
    Camera_UnitAxis(&up, &g_heroMobyPtr->transform.v2);
    statics->heroUp = up;
    statics->heroUpActual = up;
    statics->heroUpLast = up;
    statics->heroUpSpeed.x = 0.0f;
    statics->heroUpSpeed.y = 0.0f;
    statics->heroUpSpeed.z = 0.0f;
    statics->heroUpSpeed.w = 0.0f;
    statics->heroLastPos = g_heroPosition;
    statics->fadeSpeed = 0.0f;
    statics->hotspot = 0;
    statics->fadeTimer = 0;
    statics->pCamColl = NULL;
    statics->fadeIdeal = 0.0f;
    for (int i = 4; i >= 0; i--) {
        statics->heroLastRotZ[i] = g_heroRotation.z;
    }
    statics->pGroundMoby = NULL;
    statics->groundMobyDeltaZ = 0.0f;
    statics->groundMobyZ = g_heroPosition.z;

    for (int i = 0; i < ImportCameraCnt; i++) {
        ImportCamera *imp = Camera_GetImport(i);
        CameraImportVars *vars = imp->pVar;
        UpdateCam *pCam = &UpdateCams[i];

        pCam->importCameraIdx = i;
        vars->pCam = pCam;
        pCam->active = 0;
        pCam->bumped = 0;
        pCam->bumpOff = 0;
        pCam->activation.orgCam = -1;
        pCam->activation.repCam = -1;
        pCam->activation.activate = 0;
        pCam->activation.deactivate = 0;
        pCam->activation.blendSpeed = -1.0f;
        pCam->activation.priority = vars->priority;
        UpdateCamsUsed[i] = 1;
        pCam->activation.activationType = vars->activationType;
        pCam->type = imp->type;
        pCam->funcIdx = Camera_GetFuncIdx(pCam->type);
    }

    Camera_resetToFollow();
    GameCamera.blender.state = 0;
    GameCamera.orientMtx.position.w = 0.0f;
    GameCamera.orientMtx.position.y = 0.0f;
    GameCamera.orientMtx.position.x = 0.0f;
    GameCamera.ofsUpdate = NULL;
}

// 0x0053e38 (0x1a4 bytes)
/* pos = center + the polar pol (azimuth about z, elevation up from the xy plane, radius) */
void Camera_Polar2Pos(float *pos, float *pol, float *center)
{
    float sinAzimuth = FastSinInline(pol[0]);
    float cosAzimuth = FastCosInline(pol[0]);
    float cosElevation = FastCosInline(pol[1]);
    float sinElevation = FastSinInline(pol[1]);
    float flat = pol[2] * cosElevation;

    pos[3] = 0.0f;
    pos[0] = flat * cosAzimuth;
    pos[1] = flat * sinAzimuth;
    pos[2] = pol[2] * sinElevation;
    pos[0] = pos[0] + center[0];
    pos[1] = pos[1] + center[1];
    pos[2] = pos[2] + center[2];
}

// 0x0053fe8 (0x3d4 bytes)
// inlined: FastAtan2 @0x540ec, FastAtan2 @0x54284
/* pol = pos as a polar around center (Camera_Polar2Pos's inverse) */
int Camera_Pos2Polar(float *pol, float *pos, float *center)
{
    float dx = pos[0] - center[0];
    float dy = pos[1] - center[1];
    float dz = pos[2] - center[2];
    float flatSq = dx * dx + dy * dy;

    pol[1] = FastAtan2Inline(dz, sqrtf(flatSq));

    float azimuth = FastAtan2Inline(dy, dx);
    (void)FastDiffRots(azimuth, pol[0]);    /* (the binary drops the result) */
    pol[0] = azimuth;
    pol[2] = sqrtf(dz * dz + flatSq);
    return 0;
}

// 0x00543c8 (0x270 bytes)
/* moves the current camera from where it was last frame to pos in steps under radius*0.9,
   pushing a sphere of radius out of collision at each (up to 6 pushes a step). pos ends where
   the camera can be. */
void Camera_CollSphereBump(float radius, float *pos)
{
    UpdateCam *pCam = GameCamera.pCurrentUpdCam;
    float lastX = pCam->lPos[0];
    float lastY = pCam->lPos[1];
    float lastZ = pCam->lPos[2];

    if (pCam->bumpOff != 0) {
        if (ControlMode == 0) {
            GameCamera.posX = pos[0];
            GameCamera.posY = pos[1];
            GameCamera.posZ = pos[2];
            GameCamera.posW = pos[3];
        }
        pCam->bumpOff = 0;
        return;
    }

    float stepX = pos[0] - lastX;
    float stepY = pos[1] - lastY;
    float stepZ = pos[2] - lastZ;
    int steps = FastDoubleToInt(sqrtf(stepX * stepX + stepY * stepY + stepZ * stepZ) / (radius * 0.9f)) + 1;
    float fraction = 1.0f / (float)FastIntToDouble(steps);

    pos[0] = lastX;
    pos[1] = lastY;
    pos[2] = lastZ;
    pos[3] = 0.0f;

    for (int i = 0; i < steps; i++) {
        pos[0] = fraction * stepX + pos[0];
        pos[1] = fraction * stepY + pos[1];
        pos[2] = fraction * stepZ + pos[2];

        for (int push = 0; push < 6; push++) {
            if (CollSphere(radius, pos, NULL, CAMERA_COLL_SPHERE_FLAGS, g_heroMobyPtr) == 0) {
                break;
            }

            pos[0] = g_CollOutput.push.x;
            pos[1] = g_CollOutput.push.y;
            pos[2] = g_CollOutput.push.z;
            pos[3] = g_CollOutput.push.w;
            if (GameCamera.pCurrentUpdCam->bumped == 0) {
                GameCamera.pCurrentUpdCam->bumped = 1;
            }
        }
    }

    if (ControlMode == 0) {
        GameCamera.posX = pos[0];
        GameCamera.posY = pos[1];
        GameCamera.posZ = pos[2];
        GameCamera.posW = pos[3];
    }
}

// 0x0054670 (0x34c bytes)
/* starts the targeting reticule on pMoby: sprite 0 on the target, 15 more strewn along the line
   through it in random greys and tints */
void Camera_CreateReticule(MobyInstance *pMoby)
{
    if (g_ReticuleActive == 1) {
        return;
    }

    g_ReticuleActive = 1;
    Reticule = (u32)(uintptr_t)pMoby;

    for (int i = 1; i < 16; i++) {
        int shade = MB_randInt(63) + 1;
        int tint = MB_randInt(6);
        u32 grey = 0x808080;

        if (tint == 0) {
            g_ReticuleColor[i] = grey - (shade << 16) + shade;
        }
        else if (tint == 1) {
            g_ReticuleColor[i] = grey + (shade << 8) + shade;
        }
        else if (tint == 2) {
            g_ReticuleColor[i] = grey + (MB_randInt(shade) << 8) + shade;
        }
        else if (tint == 3) {
            int red = MB_randInt(shade);
            int green = MB_randInt(shade);

            g_ReticuleColor[i] = grey + (red << 16) + (green << 8) + shade;
        }
        else {
            g_ReticuleColor[i] = grey;
        }

        g_ReticuleTex[i] = MB_randInt(5) + 1;

        float dist;
        if (i < 4) {
            dist = (float)MB_randRangeFloat(-1.1f, -0.9f);
        }
        else {
            dist = (float)MB_randRangeFloat(-1.25f, 2.5f);
        }
        g_ReticuleDist[i] = dist;

        float wave = fabsf(FastCosInline(FastAddRots(dist + 1.0f)));
        g_ReticuleScale[i] = wave * wave * (float)MB_randRangeFloat(0.25f, 0.75f) + 0.25f;

        int alpha = 55;
        if (i >= 4) {
            alpha = MB_randInt(55);
        }
        g_ReticuleAlpha[i] = alpha;
    }

    g_ReticuleTex[0] = 0;
    g_ReticuleDist[0] = -1.0f;
    g_ReticuleScale[0] = 1.0f;
    g_ReticuleColor[0] = 0x808080;
    g_ReticuleAlpha[0] = 127;
}

// 0x00549bc (0x24 bytes)
void Camera_DestroyReticule(MobyInstance *pMoby)
{
    if ((MobyInstance *)(uintptr_t)Reticule == pMoby) {
        g_ReticuleActive = 0;
    }
}

// 0x00549e0 (0x14 bytes)
void Camera_ClearReticule(void)
{
    g_ReticuleActive = 0;
}

/* clamped to [0, 1] */
static inline float CamUnit(float value)
{
    if (!(value <= 1.0f)) {
        return 1.0f;
    }
    if (!(value >= 0.0f)) {
        return 0.0f;
    }

    return value;
}

// 0x0054a10 (0x3fc bytes)
/* draws the reticule (when asked this frame): its sprites along the line from the screen center
   through the target, fading in past 5 units and out toward the screen's edges */
void Camera_DrawReticule(void)
{
    MobyInstance *target = (MobyInstance *)(uintptr_t)Reticule;

    if (g_ReticuleActive != 1 || (target->state & 0x80) != 0) {
        g_ReticuleActive = 0;
        return;
    }

    if (g_ReticuleDraw <= 0) {
        return;
    }

    float dx = GameCamera.posX - target->pos.x;
    float dy = GameCamera.posY - target->pos.y;
    float dz = GameCamera.posZ - target->pos.z;
    float dist = sqrtf(dx * dx + dy * dy + dz * dz);
    float halfWidth = (float)FastIntToDouble(g_ScreenHalfWidth);
    float halfHeight = (float)FastIntToDouble(g_ScreenHalfHeight);

    float screen[2];
    ScreenPosFromWorldSpace(screen, &target->pos.x);
    screen[0] = (screen[0] - (float)FastIntToDouble(SCREEN_PROJECTION_MAP_X)) * 0.0625f;
    screen[1] = (screen[1] - (float)FastIntToDouble(SCREEN_PROJECTION_MAP_Y)) * 0.0625f;

    /* from the target to the screen center */
    float toCenterX = halfWidth - screen[0];
    float toCenterY = halfHeight - screen[1];
    float edgeX = fabsf(toCenterX) * (1.0f / halfWidth * -5.0f) + 5.5f;
    float edgeY = fabsf(toCenterY) * (1.0f / halfHeight * -5.0f) + 5.5f;

    for (int i = 0; i < 16; i++) {
        int tex = GetEffectTex(g_ReticuleTex[i] + 6);
        float x = g_ReticuleDist[i] * toCenterX + halfWidth;
        float y = g_ReticuleDist[i] * toCenterY + halfHeight;
        int size = (i == 0) ? 64 : 32;

        float fade = CamUnit(edgeX) * CamUnit(edgeY) * CamUnit(dist - 5.0f) * (float)g_ReticuleAlpha[i];
        int alpha = FastDoubleToInt(fade);
        u32 color = (g_ReticuleColor[i] & 0xffffff) | (u32)alpha << 24;

        int width = FastDoubleToInt((float)size * g_ReticuleScale[i]);
        float half = (float)(width >> 1);
        int left = FastDoubleToInt(x - half);
        int top = FastDoubleToInt(y - half);
        Sprite_DrawShapeWrapper(left, top, width, width, 0, 0, size, size, color, tex);
    }

    g_ReticuleDraw = 0;
}

// 0x0054e38 (0x438 bytes)
/* draws one crosshair at (x, y) in its style */
void DrawCrosshairSprite(float x, float y, CamCrosshair *crosshair)
{
    int tex = GetEffectTex(crosshair->fxTex);
    float rot = crosshair->rotAmt;
    float scale = crosshair->scale;
    u32 color = crosshair->rgba;

    if (crosshair->draw_style == 0) {
        /* copies turned around the center */
        for (int i = 0; i < crosshair->segments; i++) {
            float size = crosshair->scale * 40.0f;

            Sprite_DrawRotated(x, y, size, size, rot, 0.0f, 0.0f, 63, 63, tex, 0xfffff3, color, 0, 0, 0);
            rot = FastWrapRot(rot, crosshair->segment_rot);
        }
    }
    else if (crosshair->draw_style == 1) {
        /* four corners, mirrored */
        float sinOffset = FastSinInline(rot) * 40.0f;
        float cosOffset = FastCosInline(rot) * 40.0f;
        float size = scale * 40.0f;
        float rightX = cosOffset * scale + x;
        float rightY = y - sinOffset * scale;

        Sprite_DrawRotated(x, y, size, size, rot, 0.0f, 0.0f, 63, 63, tex, 0xfffff3, color, 0, 0, 0);
        Sprite_DrawRotated(rightX, rightY, crosshair->scale * 40.0f, crosshair->scale * 40.0f, rot, 0.0f, 0.0f, 63, 63,
                           tex, 0xfffff3, color, 1, 0, 0);
        Sprite_DrawRotated(x - sinOffset * scale, y - cosOffset * scale, crosshair->scale * 40.0f,
                           crosshair->scale * 40.0f, rot, 0.0f, 0.0f, 63, 63, tex, 0xfffff3, color, 0, 1, 0);
        Sprite_DrawRotated(rightX - sinOffset * scale, rightY - cosOffset * scale, crosshair->scale * 40.0f,
                           crosshair->scale * 40.0f, rot, 0.0f, 0.0f, 63, 63, tex, 0xfffff3, color, 1, 1, 0);
    }
    else if (crosshair->draw_style == 2) {
        /* one sprite, centered (in stereo 3D, shifted for this eye) */
        u8 *idolDraw = (u8 *)(uintptr_t)g_pIdolDraw;
        int wide = 0;

        if (*(int *)(idolDraw + 0x4a0) == 1) {
            x = x - *(float *)(idolDraw + 0x1a84);
            if (*(int *)(idolDraw + 0x1a6c) != 0) {
                wide = 1;
            }
        }

        Sprite_DrawRotated(x, y, scale * 40.0f, scale * 40.0f, rot, 0.5f, 0.5f, 63, 63, tex, 0xfffff3, color, 0, 0,
                           wide);
    }
}

// 0x0055270 (0x14 bytes)
void ClearTargetCrosshair(void)
{
    g_Crosshair = 0;
}

// 0x0055284 (0xec bytes)
/* queues a crosshair on pTarget for this frame (up to 3; none during scenes). pos NULL puts it
   at the screen center; style -1 picks one from the texture. (The binary takes pTarget, color,
   size, pos, tex, rotAmt, style, segmentRot in that order.) */
void DrawTargetCrosshair(float size, float rotAmt, float segmentRot, MobyInstance *pTarget, u32 color, Vec4 *pos,
                         int tex, int style)
{
    if (g_gameMode == GAME_MODE_SCENE || g_Crosshair >= 3) {
        return;
    }

    CamCrosshair *crosshair = &g_Crosshairs[g_Crosshair];
    crosshair->pMoby = pTarget;
    crosshair->rgba = color;
    crosshair->scale = size;
    crosshair->fxTex = tex;
    crosshair->rotAmt = rotAmt;

    if (pos != NULL) {
        crosshair->targetPos = *pos;
        crosshair->type = 1;
    }
    else {
        crosshair->type = 0;
    }

    if (style == -1) {
        if (tex == 13 || (tex >= 30 && tex <= 39)) {
            crosshair->draw_style = 2;
            crosshair->segment_rot = 1.5707964f;
            crosshair->segments = 0;
        }
    }
    else {
        crosshair->draw_style = style;
        crosshair->segment_rot = segmentRot;
        crosshair->segments = 4;
    }

    g_Crosshair++;
}

// 0x0055378 (0x1ac bytes)
/* draws this frame's crosshairs whose mobys are still there */
void TargetCrosshairDraw(void)
{
    if (g_heroState == MOVEMENT_LOCKED) {
        g_Crosshair = 0;
    }

    if (g_Crosshair == 0) {
        return;
    }

    float halfWidth = (float)FastIntToDouble(g_ScreenHalfWidth);
    float halfHeight = (float)FastIntToDouble(g_ScreenHalfHeight);

    for (int i = 0; i < g_Crosshair; i++) {
        CamCrosshair *crosshair = &g_Crosshairs[i];
        MobyInstance *moby = crosshair->pMoby;

        if (moby == NULL || moby->state == 253 || moby->state == 254) {
            continue;
        }

        float x = halfWidth;
        float y = halfHeight;
        if (crosshair->type != 0) {
            float screen[4];

            ScreenPosFromWorldSpace(screen, &crosshair->targetPos.x);
            x = (screen[0] - (float)FastIntToDouble(SCREEN_PROJECTION_MAP_X)) * 0.0625f;
            y = (screen[1] - (float)FastIntToDouble(SCREEN_PROJECTION_MAP_Y)) * 0.0625f;
        }

        DrawCrosshairSprite(x, y, crosshair);
    }

    g_Crosshair = 0;
}

// 0x0055530 (0x3c4 bytes)
/* whether point is inside the volume (a sphere grown by radius; the others as they are).
   (The binary takes point, prim, radius.) */
int camera_IsPntInCollPrim(float radius, Vec4 point, CamCollGridPrim *prim)
{
    if (prim->type == 7) {
        Pill *pill = &((Pill *)g_Pills)[prim->index];
        float rx = point.x - pill->pos.x;
        float ry = point.y - pill->pos.y;
        float rz = point.z - pill->pos.z;
        float lx = pill->imatrix.v0.x * rx + pill->imatrix.v1.x * ry + pill->imatrix.v2.x * rz;
        float ly = pill->imatrix.v0.y * rx + pill->imatrix.v1.y * ry + pill->imatrix.v2.y * rz;
        float lz = pill->imatrix.v0.z * rx + pill->imatrix.v1.z * ry + pill->imatrix.v2.z * rz;

        if (sqrtf(ly * ly + lx * lx) < 1.0f && !(lz < -1.0f) && !(lz > 1.0f)) {
            return 1;
        }

        /* the ends */
        float ex = point.x - (pill->matrix.v2.x + pill->pos.x);
        float ey = point.y - (pill->matrix.v2.y + pill->pos.y);
        float ez = point.z - (pill->matrix.v2.z + pill->pos.z);
        if (sqrtf(ey * ey + ex * ex + ez * ez) < pill->radius) {
            return 1;
        }

        ex = point.x - (pill->matrix.v2.x * -1.0f + pill->pos.x);
        ey = point.y - (pill->matrix.v2.y * -1.0f + pill->pos.y);
        ez = point.z - (pill->matrix.v2.z * -1.0f + pill->pos.z);
        return sqrtf(ey * ey + ex * ex + ez * ez) < pill->radius;
    }

    if (prim->type == 6) {
        Cylinder *cylinder = &Cylinders[prim->index];
        float rx = point.x - cylinder->pos.x;
        float ry = point.y - cylinder->pos.y;
        float rz = point.z - cylinder->pos.z;
        float lx = cylinder->imatrix.v0.x * rx + cylinder->imatrix.v1.x * ry + cylinder->imatrix.v2.x * rz;
        float ly = cylinder->imatrix.v0.y * rx + cylinder->imatrix.v1.y * ry + cylinder->imatrix.v2.y * rz;
        float lz = cylinder->imatrix.v0.z * rx + cylinder->imatrix.v1.z * ry + cylinder->imatrix.v2.z * rz;

        if (!(sqrtf(ly * ly + lx * lx) < 1.0f) || lz < -1.0f || lz > 1.0f) {
            return 0;
        }
        return 1;
    }

    if (prim->type == 5) {
        Sphere *sphere = &Spheres[prim->index];
        float scaleSq = sphere->matrix.v0.y * sphere->matrix.v0.y + sphere->matrix.v0.x * sphere->matrix.v0.x +
                        sphere->matrix.v0.z * sphere->matrix.v0.z;
        float rx = point.x - sphere->pos.x;
        float ry = point.y - sphere->pos.y;
        float rz = point.z - sphere->pos.z;

        return sqrtf(ry * ry + rx * rx + rz * rz) < sqrtf(scaleSq) + radius;
    }

    if (prim->type == 3) {
        Cuboid *cuboid = &Cuboids[prim->index];
        float rx = point.x - cuboid->pos.x;
        float ry = point.y - cuboid->pos.y;
        float rz = point.z - cuboid->pos.z;
        float lx = cuboid->imatrix.v0.x * rx + cuboid->imatrix.v1.x * ry + cuboid->imatrix.v2.x * rz;
        float ly = cuboid->imatrix.v0.y * rx + cuboid->imatrix.v1.y * ry + cuboid->imatrix.v2.y * rz;
        float lz = cuboid->imatrix.v0.z * rx + cuboid->imatrix.v1.z * ry + cuboid->imatrix.v2.z * rz;

        if (lx < -1.0f || lx > 1.0f || ly < -1.0f || ly > 1.0f || lz < -1.0f || lz > 1.0f) {
            return 0;
        }
        return 1;
    }

    return 0;
}

// 0x00558f8 (0x1ac bytes)
/* the camera volume point is in, from its 16-unit cell of CamCollGrid (NULL if none). (The
   binary takes point, radius.) */
CamCollGridPrim *CamCollGrid_FindPrimAtPnt(float radius, Vec4 point)
{
    int cellX = FastDoubleToInt(point.x * 0.0625f);
    int cellY = FastDoubleToInt(point.y * 0.0625f);

    if ((cellX | cellY) < 0 || cellX > 64 || cellY > 64) {
        return NULL;
    }

    /* the grid: an offset per cell to a count (padded to 16 bytes) and the prims */
    u8 *grid = (u8 *)(uintptr_t)CamCollGrid;
    int offset = ((int *)grid)[cellY * 64 + cellX];
    if (offset == 0) {
        return NULL;
    }

    int *count = (int *)(grid + offset);
    CamCollGridPrim *prims = (CamCollGridPrim *)(count + 4);
    for (int i = 0; i < *count; i++) {
        CamCollGridPrim *prim = &prims[i];
        float dx = prim->bsphere.x - point.x;
        float dy = prim->bsphere.y - point.y;

        if (sqrtf(dy * dy + dx * dx) < prim->bsphere.w + radius && camera_IsPntInCollPrim(radius, point, prim) != 0) {
            return prim;
        }
    }

    return NULL;
}
