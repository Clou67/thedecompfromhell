#pragma once
// game/mobyutil.h
#include "types.h"
#include "game/collproc.h"

// ---- types
typedef enum enum_1 StringId;

typedef enum TROPHIES_ENUM {
    GADGET_MASTER=0,
    BOLT_COMMANDO=1,
    SKILLFUL=2,
    RACHET_KING_MIDAS=3,
    DREK_THIS=4,
    SPEEDY=5,
    ULTIMATE_ANIMAL=6,
    TWISTED_HOVERBOARD=7,
    UNLOCK_SKETCHBOOK=8,
    VANDAL=9,
    GIRL_TROUBLE=10,
    GADGETEER=11,
    NANO_THIS=12,
    BOLT_COLLECTOR=13,
    ALL_QWARKD_UP=14,
    EAT_LEAD=15,
    HEY_OVER_HERE=16,
    STRIKE_A_POSE=17,
    VEHICLE_BOMBARDER=18,
    CLUCK_CLUCK=19,
    QWARKTASTIC=20,
    TAKE_AIM=21,
    TRANSPORTED=22,
    DESTROYED=23,
    SNIPER=24,
    LOMBAX_MAGNETIC=25,
    BURIED_TREASURE=26,
    HIT_ME_MORE=27,
    THESE_ARE_NOT_THE_DROIDS=28,
    MAGICIAN=29,
    VERY_SUCKY=30,
    PEST_CONTROL=31,
    SITTING_DUCKS=32,
    CAREFUL_CRUISE=33,
    GOING_COMMANDO=34
} TROPHIES_ENUM;

// ---- globals
extern char CHAR_ARRAY_0096c165[37]; /* 0x96c165 */
extern CollDamageOut CollDamage[64]; /* 0xa14c00 */
extern undefined4 DAT_000fc230; /* 0xfc230 */
extern undefined4 DAT_000fd8b4; /* 0xfd8b4 */
extern undefined4 DAT_0010afe8; /* 0x10afe8 */
extern undefined4 DAT_0010faec; /* 0x10faec */
extern undefined4 DAT_00115bcc; /* 0x115bcc */
extern undefined4 DAT_0011aa68; /* 0x11aa68 */
extern undefined4 DAT_0071f41c; /* 0x71f41c */
extern undefined4 DAT_0071f420; /* 0x71f420 */
extern undefined4 DAT_0071f424; /* 0x71f424 */
extern undefined4 DAT_00729180; /* 0x729180 */
extern undefined4 DAT_007291f8; /* no defined data */
extern undefined4 DAT_00729290; /* no defined data */
extern undefined4 DAT_007292b0; /* 0x7292b0 */
extern undefined4 DAT_007292b4; /* 0x7292b4 */
extern undefined4 DAT_007292b8; /* 0x7292b8 */
extern undefined4 DAT_007292e0; /* no defined data */
extern undefined4 DAT_00729330; /* no defined data */
extern undefined4 DAT_00729350; /* 0x729350 */
extern undefined4 DAT_00729354; /* 0x729354 */
extern undefined4 DAT_00729358; /* 0x729358 */
extern undefined4 DAT_00729380; /* no defined data */
extern undefined4 DAT_007294b0; /* 0x7294b0 */
extern undefined4 DAT_007294f4; /* 0x7294f4 */
extern undefined4 DAT_007294f8; /* 0x7294f8 */
extern undefined4 DAT_007294fc; /* 0x7294fc */
extern undefined4 DAT_00729500; /* 0x729500 */
extern undefined4 DAT_00729504; /* 0x729504 */
extern undefined4 DAT_00729578; /* no defined data */
extern undefined4 DAT_00737d42; /* no defined data */
extern undefined4 DAT_0095cd64; /* 0x95cd64 */
extern undefined4 DAT_0095cd6c; /* 0x95cd6c */
extern undefined4 DAT_0095cd70; /* 0x95cd70 */
extern undefined4 DAT_0095cd74; /* 0x95cd74 */
extern undefined4 DAT_0095cd78; /* 0x95cd78 */
extern undefined4 DAT_0095cd7c; /* 0x95cd7c */
extern undefined1 DAT_0095cd9a; /* 0x95cd9a */
extern undefined4 DAT_0095e5f8; /* 0x95e5f8 */
extern undefined4 DAT_0095e60c; /* no defined data */
extern undefined4 DAT_0096bda0; /* 0x96bda0 */
extern undefined4 DAT_0096bda4; /* 0x96bda4 */
extern undefined4 DAT_00a0cd1c; /* no defined data */
extern undefined4 DAT_00a15d30; /* 0xa15d30 */
extern undefined4 DAT_00a15f24; /* 0xa15f24 */
extern undefined4 DAT_00a20498; /* no defined data */
extern undefined4 DAT_00a204a8; /* no defined data */
extern undefined2 DAT_00a51ee8; /* 0xa51ee8 */
extern undefined2 DAT_00a51eea; /* 0xa51eea */
extern undefined2 DAT_00a51f68; /* 0xa51f68 */
extern undefined2 DAT_00a51f6a; /* 0xa51f6a */
extern undefined4 DAT_00a51fb4; /* 0xa51fb4 */
extern undefined4 DAT_00a51fb8; /* 0xa51fb8 */
extern undefined1 DAT_00a53964; /* 0xa53964 */
extern undefined4 DAT_00e5aa90; /* 0xe5aa90 */
extern undefined4 DAT_00e5aa94; /* 0xe5aa94 */
extern undefined4 DAT_00e5aa98; /* 0xe5aa98 */
extern undefined4 DAT_00e5aa9c; /* 0xe5aa9c */
extern undefined4 DAT_010bb494; /* 0x10bb494 */
extern undefined4 DAT_11004000; /* no defined data */
extern undefined4 DAT_11004004; /* no defined data */
extern MobyInstance * g_MobyInstance; /* 0xa390a0 */
extern MobyInstance * MobyInstanceEnd; /* 0xa390a8 */
extern undefined4 MobyUpdateChainStart; /* 0xa390ac */
extern pointer32 PTR_Draw_PromptMsg_00705788; /* 0x705788 */
extern pointer32 PTR_PromptHud_Init_00705750; /* 0x705750 */
extern pointer32 PTR_PromptHud_Update_00705758; /* 0x705758 */
extern Sphere * Spheres; /* 0xa51bc8 */
extern Spline * Splines[176]; /* 0xa51be0 */
extern undefined4 TrophyMgr; /* 0x8fabdc */
extern undefined4 _DAT_00107810; /* direct read */
extern undefined4 _DAT_00107830; /* direct read */
extern undefined4 _DAT_00107840; /* direct read */
extern undefined4 _DAT_00107850; /* direct read */
extern undefined2 g_GroupIterIdx; /* 0xa51fac */
extern undefined4 g_GroupIterMoby; /* 0xa51fb0 */
extern undefined4 g_GroupIterPtr; /* 0xa51fa8 */
extern undefined4 g_HelpMsgOwner; /* 0xa15f28 */
extern undefined4 g_MobyGroups; /* 0xa49184 */
extern undefined4 g_NumLameShadows; /* 0x95e5e8 */
extern undefined4 g_NumMobyGroups; /* 0xa49180 */
extern undefined4 g_boltMiningActive; /* 0xa15f2c */
extern undefined4 g_boltMiningTimer; /* 0xa0fd14 */
extern undefined4 g_goodiesMenuActive; /* 0x969cd0 */
extern undefined2 g_mobyIdListCount; /* 0xa51ea8 */
extern char g_toastMsgBuff; /* 0xa15c8c */

// ---- functions
void SECTION_HEADER_MOBYUTIL(void);
void ____Unused_MB_CallVtbl74(int param_1);
void GetMobyFunction(MOBY_OCLASSES oClass);
void UpdateMobysInitial(void);
void UpdateMobys(void);
ulonglong UpdateMobysDebug(void);
int MB_randInt(int param_1);
longlong MB_DropAmmo(int param_1,uint *param_2);
undefined8 MB_SplineIntersect(longlong param_1,float *param_2,float *param_3,float *param_4);
undefined8 MB_SolveQuad(double param_1,double param_2,double param_3);
double MB_randRangeFloat(float param_1,float param_2);
double MB_randRot(void);
undefined4 MB_GetPvarsIfMobyHasThem(MobyInstance *moby);
void MB_DistributeBolts (int param_1,longlong param_2,int param_3,uint param_4,longlong param_5);
void MB_SpawnBoltsFromCrate(undefined8 param_1,uint param_2,undefined8 param_3);
void MB_SetAnimationNoBlend(MobyInstance *param_1,longlong param_2,longlong param_3);
void MB_SetAnimation (MobyInstance *param_1,longlong param_2,longlong param_3,undefined8 param_4);
void MB_SetAnimationFrame(MobyInstance *moby,int anim,int frame,int blendFrames,int flags);
double ____Unused_MB_GetBoneAngle(undefined8 param_1,undefined8 param_2);
float MB_EaseOutQuad(float t);
float MB_EaseInPow(float t,int n);
float MB_EaseOutPow(float t,int n);
float MB_EaseInQuadRange(float t,float range);
float MB_EaseOutQuadRange(float t,float range);
float MB_EaseInPowRange(float t,float range,int n);
float MB_EaseOutPowRange(float t,float range,int n);
int MB_randRange(int param_1,int param_2);
double MB_randRangeSigned(double param_1,double param_2);
double MB_randFalloff(double param_1);
void MB_SphericalToVector(float radius,float ang1,float ang2,float *out);
void MB_randVector(double minRadius,double maxRadius,Vec4 *outPos);
void MB_randCircle(double param_1,float *param_2);
void MB_randSphere(double param_1,double param_2,float *param_3);
double MB_catmullRom (double param_1,double param_2,double param_3,double param_4,double param_5);
double MB_CosineInterpolate(double param_1,double param_2,double param_3);
void MB_lerpRotCosine(double param_1,undefined8 param_2,double param_3);
void MB_CosineInterpolateUnitVec (double param_1,float *param_2,float *param_3,float *param_4);
void MB_CosineInterpolateAngVec (double param_1,float *param_2,float *param_3,float *param_4);
void MB_DeltAngSpeed (double param_1,undefined8 param_2,double param_3,double param_4,double param_5, undefined8 param_6,undefined8 param_7,float *param_8);
void OrganicDeltAngSpeed (undefined8 param_1,double param_2,double param_3,double param_4,int param_5, undefined8 param_6,float *param_7);
void MB_FaceDeltAngSpeed (undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4,int param_5, undefined8 param_6);
double MB_Dist2D(MobyInstance *param_1,MobyInstance *param_2);
double MB_DistBetweenMobys(MobyInstance *param_1,MobyInstance *param_2);
longlong CollLineValidate(void);
undefined8 MB_CheckLineOfSight(undefined4 param_1,MobyInstance *param_2);
undefined8 MB_IsSteepGround(int param_1,undefined4 *param_2);
double GetGroundZ(undefined8 param_1,ulonglong param_2);
double GetGroundZNoWater(void);
int CollMovingSphere (double param_1,double param_2,double param_3,double param_4,undefined8 param_5, float *param_6,float *param_7);
undefined4 MB_PushOutOfWalls (double param_1,undefined8 param_2,MobyInstance *param_3,CollOutput *param_4, undefined8 param_5,undefined8 param_6,uint param_7);
void MB_PushMobyOutOfWalls (undefined8 param_1,MobyInstance *param_2,undefined4 param_3,undefined8 param_4, undefined8 param_5,undefined4 param_6);
ulonglong MB_MoveAndCollide (double param_1,double param_2,double param_3,int param_4,float *param_5);
void MB_MoveAndCollide2 (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4, undefined8 param_5,undefined8 param_6);
void MB_InitDefaultParams(float *param_1);
void ____Unused_MB_SetPosWAndClass(double param_1,double param_2,MobyInstance *param_3);
ulonglong MB_UpdateNavMove (double param_1,MobyInstance *param_2,MobyInstance *param_3,float *param_4, float *param_5);
void MB_MoveForward100(MobyInstance *param_1,MobyInstance *param_2);
uint MB_UpdateNavMoveTurning (MobyInstance *param_1,longlong param_2,float *param_3,undefined4 *param_4);
void MB_Reset2LegData(int param_1);
ulonglong MB_UpdateLegAnimState (double param_1,double param_2,double param_3,MobyInstance *param_4, MobyInstance *param_5,int param_6);
uint MB_UpdateLegAnimMoveTurning (undefined8 param_1,MobyInstance *param_2,ulonglong param_3,MobyInstance *param_4, Vec4 *param_5);
void MB_LerpRot(double param_1,undefined8 param_2,double param_3);
ulonglong MB_OrbitAndFaceTarget (double param_1,double param_2,MobyInstance *param_3,MobyInstance *param_4, float *param_5,undefined8 param_6,undefined8 param_7,Vec4 *param_8);
int MB_CountActiveMobysByGroup(longlong group,uint state);
void MB_SetGroupField(longlong group,char arg);
void MB_SetStateByGroup(longlong group,u8 state);
void MB_SetGroupActive(int group,int update,int enable,int collision);
void MB_SetClassActive(MOBY_OCLASSES oClass,int update,int enable,int collision);
void MB_SetStateForClass(MOBY_OCLASSES oClass,u8 state);
void MB_SetClassListActive(MOBY_OCLASSES *oClassList,int update,int enable,int collision);
int MB_GetNextMobyInGroup (MobyInstance **out,MobyInstance *cur,char includeDead,char deadOnly);
int MB_GetFirstMobyInGroup(MobyInstance **out,int group,char includeDead,char deadOnly);
MobyInstance * MB_GetOtherMobyInGroup(MobyInstance *moby);
int MB_IsFirstMobyInGroup(MobyInstance *moby,int group,char includeDead,char deadOnly);
ulonglong DecAlpha(uint *param_1,longlong param_2);
double MB_BallisticTicksToHeight (double param_1,int param_2,int param_3,undefined8 param_4,int *param_5);
void MB_BallisticPosAtTicks (double param_1,float *param_2,float *param_3,float *param_4,undefined8 param_5, undefined8 param_6);
double MB_GetGroundZAboveBundle(int param_1);
int PointOutsideConvexEdge(float *param_1,float *param_2,int param_3);
ulonglong PointInsideComplexPoly(Vec4 *point,Vec4 *poly,int n);
int SegmentIntersect2D(vec4 p1,vec4 p2,vec4 p3,vec4 p4,float *t);
int ClipLineToPoly2D(float *param_1,float *param_2,int param_3,int param_4);
float ClosestPointOnEdge2D(float *out,float *a,float *b,float *p);
void ClosestPointOnSegment(float *out,float *a,float *b,float *p);
int ClosestPointInConvexPoly(float *out,float *p,float *poly,int nPnts);
int ClosestPointOnConvexPolyEdge(float *out,float *p,float *poly,int nPnts);
float DistOutsideConvexPoly2D(float *p,float *poly,int nPnts);
void STUB_00105730(...);
undefined8 STUB_00105734(...);
float DistPointToLine2D(float *a,float *b,float *p);
undefined8 MB_HasCollPrims(int param_1);
void SetCollDamIn (double param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4);
void SetCollDamIn (double param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4, undefined8 param_5,undefined4 *param_6);
void DamageSphereAtPos(undefined8 param_1,undefined4 param_2,undefined8 param_3);
void DamageSphereAtBone (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4, undefined8 param_5,undefined8 param_6,int param_7);
void CollDamageMobyDirect (MobyInstance *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4, undefined8 param_5,undefined8 param_6,undefined8 param_7);
void CollDamageMobyDirect (float damage,MobyInstance *victim,MobyInstance *damager,int flags,int unused, float *ip,float *impact);
void CollDamageMobyDirect_wrap (double param_1,MobyInstance *param_2,MobyInstance *param_3,int param_4,int param_5, float *param_6);
undefined8 MB_CollLineMulti(void);
float CollWaterHeight(float *pos,float *normal);
void MB_EulerToQuat(float *outQuat,Vec3 *rot);
void MB_RegisterLameShadow(float size,MobyInstance *moby);
void MB_SetZBoundsFromPos(int param_1);
void MB_SetZBounds(double param_1,int param_2);
void MB_SetZBoundsFromGround(int param_1);
void MB_SetZBoundsFromFloorCeil(MobyInstance *param_1);
void TweenColor(float t,uint color1,uint color2);
CollDamageOut * MB_damage(MobyInstance *moby,uint flags,int noClearDamage);
undefined4 ____Unused_MB_GetPVarsField10(int param_1);
ulonglong MB_HandleDamage (MobyInstance *param_1,int param_2,ulonglong param_3,uint param_4, undefined4 *param_5,undefined4 *param_6,uint *param_7,ulonglong param_8);
void MB_AnimBoneCollLines(MobyInstance *param_1,uint *param_2,int param_3);
void MB_DamageMobyList (double param_1,double param_2,double param_3,int param_4,undefined8 param_5, undefined8 param_6,undefined8 param_7,int *param_8,int param_9,int param_10, undefined4 param_11);
void MB_VecAtan2Angles (ulonglong param_1,undefined8 param_2,float *param_3,float *param_4,float *param_5);
double MB_computeLobVelocity (double param_1,double param_2,float *param_3,float *param_4,undefined8 param_5, undefined8 param_6,float *param_7);
longlong MB_randPrimPoints (double param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4, ulonglong param_5,uint param_6);
void MB_RandomizeAnimSpeed (double param_1,double param_2,int param_3,uint param_4,float *param_5);
void MB_Update2LegIK(undefined8 param_1,int param_2);
void MB_SetAnimAndReset2Leg(int param_1);
void MB_initJump(int param_1,float *param_2,float *param_3);
undefined1 MB_updateJump(MobyInstance *param_1,int param_2);
int Lerp_int(float t,int a,int b);
float Lerp(float a,float b,float t);
void Lerp_vec4(float alpha,float *out);
void GainDampLimit(float distToTarget,float gain,float damp,float limit,float *speed);
float Delt(float target,float speed,float *val);
float AccelDelt(float target,float gain,float damp,float limit,float *val,int unused, float *speed);
float OrganicDelt (float target,float accel,float deccel,float limit,float *val,int unused, float *speed);
float SubRots(float rot1,float rot2,int turnDir);
float DeltAng(float target,float speed,float *val,int unused1,int unused2,int turnDir);
double AccelDeltAng (double param_1,double param_2,double param_3,double param_4,float *param_5, undefined8 param_6,float *param_7);
float OrganicDeltAng (float target,float accel,float deccel,float limit,float *val,int unused, float *speed);
void MatAdjoint(float *dm,float *sm);
int Float_To_RGBA(float r,float g,float b,float alpha);
void ReorderRGB(int *r,int *g,int *b,int order);
int ReorderRGB(int rgb,int order);
void MB_NormalizeMtx3Columns(int param_1);
double ____MB_GetNormalizedMtxElem(void);
void MB_RemoveVecComponent(float scale,float *out,float *v,float *n);
void MB_MistDeathEffect(undefined8 param_1,float *param_2,undefined8 param_3);
void MB_StartKick (double param_1,MobyInstance *param_2,undefined8 param_3,undefined8 param_4, undefined8 param_5,undefined8 param_6,undefined8 param_7);
bool MB_isCrate(MobyInstance *moby);
int MB_UpdateKick(MobyInstance *pMoby,KickVars *kv);
void MB_MtxToQuat(float *outQuat,float *mtx);
void MB_TransformToQuat(float *param_1,Vec4 *param_2);
void MB_CopyHeroLights(int param_1);
void MB_AxisAngleToQuat(float angle,float *outQuat,float *axis);
void ____MB_ClampVecToPlanes(undefined8 param_1,undefined8 param_2,float *param_3);
void MB_MtxToEuler(int param_1,MobyInstance *param_2);
void MB_UpdateLightsTransition(undefined8 param_1,undefined8 param_2);
void MB_ColorDyingMoby(MobyInstance *param_1,undefined8 param_2);
int MB_PathStepIndex(int *path,int idx,int delta,int wrap);
undefined8 MB_PathMoveDist (double param_1,uint *param_2,float *param_3,uint *param_4,float *param_5, undefined8 param_6,int param_7);
double MB_DistIgnoreSmallZ (double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4, undefined8 param_5);
double MB_SegmentPushDist2D(float *param_1,float *param_2,float *param_3,float *param_4);
double MB_SegmentPush (double param_1,float *param_2,float *param_3,float *param_4,float *param_5);
undefined8 MB_PathFollowToPos (double param_1,double param_2,double param_3,longlong param_4,float *param_5, float *param_6,int *param_7,float *param_8,undefined8 param_9,int param_10);
undefined8 MB_CheckCollPill (MobyInstance *param_1,undefined8 param_2,undefined8 param_3,float *param_4);
float MB_WrapRot(float ang);
ulonglong ____MB_IsInvalidOrClass502(MobyInstance *param_1);
bool MB_isAmmo(MobyInstance *moby);
void MB_genericExplosion (double param_1,undefined8 param_2,double param_3,double param_4,double param_5, double param_6,double param_7,longlong param_8,undefined8 param_9,longlong param_10, undefined8 param_11,undefined8 param_12,int param_13,longlong param_14, undefined8 param_15);
undefined4 * MB_SpawnExplosionSparks (double param_1,double param_2,MobyInstance *param_3,undefined4 param_4,undefined8 param_5 ,int param_6);
void MB_SpawnExplosionSparks2 (double param_1,double param_2,undefined8 param_3,undefined8 param_4);
void ClampVec3Magnitude(double param_1,Vec4 *param_2);
int ____MB_PickMinAbsField2c_Of4(int param_1,int param_2,int param_3,int param_4);
double MB_computeLobVelocityClamped (double param_1,double param_2,double param_3,double param_4,undefined8 param_5, float *param_6,float *param_7);
void MB_AddMobyToDynamicGroup(MobyInstance *pMoby,short *group,short maxSize);
void MB_DeleteMobyFromDynamicGroup(MobyInstance *pMoby,short *group);
MobyInstance * MB_FindMobyByVarId(int param_1);
MobyInstance * MB_FindNearestMobyInList(int param_1);
void MB_RandomizeVector(float range,float *v);
void MB_RandomizeVector(float range,float *v);
int MB_IsPntInCuboid(Vec4 *point,longlong cuboidLink);
int MB_IsPntInCylinder(Vec4 *point,longlong cylinderLink);
undefined8 MB_IsPntInSphere(Vec4 *point,longlong sphereLink);
void MB_MtxFromDir(double param_1,Vec4 *param_2,float *param_3);
void MB_QuatRotate(undefined8 param_1,undefined8 param_2,undefined4 param_3);
void MB_RotateQuatAxisAngle(float angle,float *outQuat,float *inQuat);
void MB_QuatBetweenVecs (float *param_1,float *param_2,float *param_3,undefined8 param_4,int param_5);
f32 MB_getTarget(double param_1,int param_2,undefined8 param_3,f32 *param_4);
f32 MB_getTargetInArea (double param_1,int param_2,f32 *param_3,undefined8 param_4,int *param_5,int param_6, Vec4 *param_7,int param_8);
void MB_CollLineWrapper(void);
void MB_TransformBetweenFrames (float *param_1,float *param_2,float *param_3,undefined8 param_4,undefined8 param_5);
undefined4 MB_GetPlatformParent(int param_1);
undefined8 MB_PlatformLocalToWorld (undefined8 param_1,int param_2,float *param_3,undefined8 param_4,float *param_5, MobyInstance *param_6);
undefined8 MB_PlatformWorldToLocal (undefined8 param_1,int param_2,float *param_3,undefined8 param_4,float *param_5, MobyInstance *param_6);
undefined8 MB_PlatformGetDelta (int param_1,int param_2,float *param_3,undefined8 param_4,float *param_5, undefined8 param_6);
void MB_GetOrientation (MobyInstance *param_1,Vec4 *param_2,undefined8 param_3,undefined8 param_4);
void MB_ScaledVecWrapper(void);
void MB_ToastMessage(StringId param_1,int param_2);
void MB_ToastMessageByIndex(int idx);
void MB_UnlockLevel(LevelId param_1);
void MB_UnlockTrophy(TROPHIES_ENUM trophy);
void MB_UnlockItem(longlong param_1,char param_2);
void SetNtscPalTiming(void);
void ____MB_BuildScaledRotMtx (double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4, undefined8 param_5,undefined8 param_6,undefined8 param_7);
void MB_compressVector(float *v,int *out);
void MB_decompressVector(float *out,int *in);
void DoMeander(undefined8 param_1,undefined8 param_2,int param_3,float *param_4, int param_5);
float MB_RoundToDecimals(float val,int unused,int nDigits);
int MB_MayaFrameTrigger(float frame,MobyInstance *pMoby);
undefined8 MB_LineCrossesSpline(longlong param_1,float *param_2,float *param_3);
uint MB_SplineCrossCheck (double param_1,undefined4 *param_2,int param_3,undefined8 param_4,longlong param_5, undefined4 param_6);
uint MB_SplineSegmentsReachable(longlong param_1,uint param_2,uint param_3);
void MB_SplineMarkCrossings(undefined4 *param_1,int param_2,longlong param_3);
int MB_PushOutOfSplineWalls (double param_1,longlong param_2,undefined8 param_3,float *param_4,float *param_5);
void MB_CollideSplineWall (double param_1,longlong param_2,undefined8 param_3,float *param_4,float *param_5);
undefined8 MB_SplineFindRouteNode (float param_1,undefined4 *param_2,undefined8 param_3,longlong param_4,undefined8 param_5, undefined4 param_6,float *param_7,float *param_8);
void MB_PathPosAtDist (double param_1,double param_2,undefined8 param_3,undefined8 param_4,int *param_5, int *param_6,float *param_7,float *param_8);
void MB_RotateMoby(longlong param_1);
void CreateMotionBlur(undefined4 param_1,int param_2);
void AddMotionBlurElem(int param_1,undefined4 param_2,int param_3);
void DeleteMotionBlur(int param_1);
void UpdateMotionBlur(int param_1,longlong param_2);
void MB_SetupJumpArc (double param_1,double param_2,undefined8 param_3,undefined8 param_4,int param_5);
double MB_TurnHeadJoint (double param_1,double param_2,double param_3,double param_4,double param_5, float *param_6,int param_7,float *param_8);
void MB_TurnHeads(MobyInstance *param_1,float *param_2);
void ____MB_SpawnRingPartFx (int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4, undefined8 param_5);
void MB_UpdateManipulatorRot (undefined8 param_1,undefined8 param_2,MobyInstance *param_3,int param_4, uint32_t param_5);
void MB_BobMotion (float amp,float speed,MobyInstance *pMoby,float *phase,float *prevOffset);
void MB_SwingMotion (double param_1,double param_2,double param_3,int param_4,float *param_5, float *param_6);
void MB_StoreChildOffsets(int param_1,float *param_2,int param_3);
void MB_UpdateChildMobys(int param_1,float *param_2,int param_3);
void MB_RotateAboutPivot(int param_1,float *param_2);
void MB_AddVectorSphere(float *out,float *base);
void MB_WorldToScreenCell(undefined8 param_1,undefined4 *param_2,undefined4 *param_3);
void MB_PathEvalSpline (double param_1,uint *param_2,undefined8 param_3,int param_4,float *param_5, undefined4 *param_6,ulonglong param_7);
uint32_t MB_HeroStandingOnMoby(MobyInstance *moby);
undefined8 MB_IsPntInRangeAndArc (double param_1,double param_2,double param_3,int param_4,float *param_5);
void MB_AttachMobyToJoint(MobyInstance *parent,MobyInstance *child,int joint);
void Spline_ComputeSegmentLengths(longlong param_1);
int MB_ComputeRocketAim (double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4, undefined8 param_5,ulonglong param_6,ulonglong param_7,float *param_8,float *param_9);
double MB_SampleByteGrid(undefined8 param_1);
void MB_SpawnGridParticles(undefined8 param_1,undefined8 param_2);
void MB_DrawGlowFX(double param_1,double param_2,float *param_3);
void ____MB_SetFadeByDistToHero(double param_1,int param_2);
void MB_SetPointAheadOfMoby(double param_1,int param_2);
void MB_SpawnSparks_oClass2EE(int param_1);
void DoManipulator (double param_1,MobyInstance *pMoby,undefined8 param_3,Manipulator *manipulator);
void MB_SetScaleCheat(double param_1,int param_2);
void MB_InitDebrisList(undefined4 *param_1);
void MB_UpdateDebris(double param_1,int *param_2,float *param_3);
void MB_DebrisCollide(undefined4 *param_1);
void MB_DistributeBoltsNearHero(int param_1);
void MB_SpawnSparksPair (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4);
void MB_ToastMessageFmt(StringId msg,int arg,int time);
longlong MB_SpawnDebrisMoby (double param_1,int param_2,MOBY_OCLASSES param_3,f32 *param_4,undefined8 param_5 ,float param_6,float param_7,undefined8 param_8,float *param_9);
void MB_SpawnDebris (longlong param_1,longlong param_2,int param_3,int param_4,int param_5, undefined8 param_6,int param_7);
void MB_SpawnReplacementMoby(int param_1,MOBY_OCLASSES param_2);
int MB_HandleGameplayHud(void);
undefined8 MB_ShowPersistentMessage(int param_1,StringId param_2);
int MB_RequestHelpMessage(MobyInstance *owner,StringId msg);
int MB_ClearHelpMessage(MobyInstance *owner);
int MB_CountGoldWeapons(void);
int MB_CountGoldBolts(void);
int MB_GetUnspentGoldBolts(void);
int MB_CountSkillPoints(void);
TROPHIES_ENUM MB_TrophyFromSkillPoint(int skillPoint);
void MB_UnlockSkillPointTrophy(int SkillPoint);
void MB_UnlockSkillPoint(int skillPoint);
