#pragma once
// game/mobyfunc.h
#include "types.h"

// ---- types
struct MobyInstance {
    struct BSphere bSphere;
    struct vec4 pos;
    u8 state;
    s8 group;
    u8 mClass;
    s8 alpha;
    struct MobyClass *pClass;
    void *pChain;
    float scale;
    char updateDistance;
    char enabled;
    short drawDistance;
    enum MobyModeBit modeBits;
    ushort occlIndex;
    uint color;
    uint light;
    struct vec4 rotation;
    char previousAnimationFrame;
    char animationFrame;
    u8 updateId;
    u8 animationId;
    float animationBlend;
    float unk58;
    float frameSpeed;
    void *pAnimationLayers;
    struct Manipulator *pManipulators;
    void *pPreviousAnimationData;
    void *pCurrentAnimationData;
    char field43_0x70;
    char field44_0x71;
    char field45_0x72;
    char field46_0x73;
    void *pUpdate;
    void *pVar;
    char unk7c;
    char unk7d;
    char unk7e;
    char shadow;
    int colorManipulator;
    int unk84;
    int unk88;
    char field56_0x8c;
    char field57_0x8d;
    char field58_0x8e;
    char field59_0x8f;
    uint field60_0x90;
    ushort *collision;
    float *collisionMesh;
    int collQueryStamp; /* = CollOutput.collCount of last coll query that tested this moby */
    uint collCount;
    s8 damage;
    char previousAnimationId;
    enum MOBY_OCLASSES oClass;
    int field71_0xa8;
    uint field72_0xac;
    char levelFlagIdx;
    char field74_0xb1;
    ushort uid;
    char field76_0xb4;
    char field77_0xb5;
    char field78_0xb6;
    char field79_0xb7;
    struct MobyInstance *field80_0xb8; /* Type 'Moby *' was deleted */
    char setByGroup;
    char field82_0xbd;
    char field83_0xbe;
    char field84_0xbf;
    struct Mtx4 transform;
};

struct MobySeq {
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    undefined field4_0x4;
    undefined field5_0x5;
    undefined field6_0x6;
    undefined field7_0x7;
    undefined field8_0x8;
    undefined field9_0x9;
    undefined field10_0xa;
    undefined field11_0xb;
    undefined field12_0xc;
    undefined field13_0xd;
    undefined field14_0xe;
    undefined field15_0xf;
    u8 frame_count;
    u8 next_seq;
    u8 trigsCnt;
    u8 pad;
    short *trigs;
    void *animInfo;
    void *frameData;
};

struct MobyClass {
    void *packets;
    u8 pakcet_cnt_0;
    u8 packet_cnt_1;
    u8 metal_cnt;
    u8 metal_ofs;
    u8 joint_cnt;
    u8 pad;
    u8 packet_cnt_2;
    u8 team_texs;
    u8 seq_cnt;
    u8 sound_cnt;
    u8 lod_trans;
    u8 shadow;
    u16 *collision;
    void *skeleton;
    void *common_trans;
    void *anim_joints;
    void *gif_usage;
    float gScale;
    void *SoundDefs;
    char bangles;
    char mip_dist;
    s16 corncob;
    undefined field23_0x30;
    undefined field24_0x31;
    undefined field25_0x32;
    undefined field26_0x33;
    undefined field27_0x34;
    undefined field28_0x35;
    undefined field29_0x36;
    undefined field30_0x37;
    undefined field31_0x38;
    undefined field32_0x39;
    undefined field33_0x3a;
    undefined field34_0x3b;
    undefined field35_0x3c;
    undefined field36_0x3d;
    undefined field37_0x3e;
    undefined field38_0x3f;
    /* ignoring dynamic datatype inside composite: -BAD- */
void * /*BAD*/ unk_ptr; /* Type 'Moby *' was deleted */
    u32 mode_bits;
    char type;
    char mode_bits2;
    struct MobySeq *seqs;
};

struct CollPrim { /* Moby collision primitive (32 bytes). type 0/1 = sphere/pill variants; flags bit0 = alt set, bit1 = normal set; joint = joint index (offset<<4 into joint cache). Rest are floats (offset/radius/height). Disabled per-prim by bitmask MobyInstance+0x98. */
    char type;
    undefined field1_0x1;
    short flags;
    short joint;
    undefined field4_0x6;
    undefined field5_0x7;
    undefined field6_0x8;
    undefined field7_0x9;
    undefined field8_0xa;
    undefined field9_0xb;
    undefined field10_0xc;
    undefined field11_0xd;
    undefined field12_0xe;
    undefined field13_0xf;
    undefined field14_0x10;
    undefined field15_0x11;
    undefined field16_0x12;
    undefined field17_0x13;
    undefined field18_0x14;
    undefined field19_0x15;
    undefined field20_0x16;
    undefined field21_0x17;
    undefined field22_0x18;
    undefined field23_0x19;
    undefined field24_0x1a;
    undefined field25_0x1b;
    undefined field26_0x1c;
    undefined field27_0x1d;
    undefined field28_0x1e;
    undefined field29_0x1f;
};

typedef double f64;

struct IceSheet {
    struct BSphere bSphere;
    int32_t meshParamA;
    float *vertexData;
    int32_t meshParamB;
    int32_t vertexCount;
};

struct Moby1267Vars { /* pVars of oClass 1267 (mounted turret used by UpdateMoby_1267). Offsets from PS3 code; no DL equivalent. */
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    undefined field4_0x4;
    undefined field5_0x5;
    undefined field6_0x6;
    undefined field7_0x7;
    undefined field8_0x8;
    undefined field9_0x9;
    undefined field10_0xa;
    undefined field11_0xb;
    undefined field12_0xc;
    undefined field13_0xd;
    undefined field14_0xe;
    undefined field15_0xf;
    undefined field16_0x10;
    undefined field17_0x11;
    undefined field18_0x12;
    undefined field19_0x13;
    undefined field20_0x14;
    undefined field21_0x15;
    undefined field22_0x16;
    undefined field23_0x17;
    undefined field24_0x18;
    undefined field25_0x19;
    undefined field26_0x1a;
    undefined field27_0x1b;
    undefined field28_0x1c;
    undefined field29_0x1d;
    undefined field30_0x1e;
    undefined field31_0x1f;
    undefined field32_0x20;
    undefined field33_0x21;
    undefined field34_0x22;
    undefined field35_0x23;
    undefined field36_0x24;
    undefined field37_0x25;
    undefined field38_0x26;
    undefined field39_0x27;
    undefined field40_0x28;
    undefined field41_0x29;
    undefined field42_0x2a;
    undefined field43_0x2b;
    undefined field44_0x2c;
    undefined field45_0x2d;
    undefined field46_0x2e;
    undefined field47_0x2f;
    undefined field48_0x30;
    undefined field49_0x31;
    undefined field50_0x32;
    undefined field51_0x33;
    undefined field52_0x34;
    undefined field53_0x35;
    undefined field54_0x36;
    undefined field55_0x37;
    undefined field56_0x38;
    undefined field57_0x39;
    undefined field58_0x3a;
    undefined field59_0x3b;
    undefined field60_0x3c;
    undefined field61_0x3d;
    undefined field62_0x3e;
    undefined field63_0x3f;
    int targetIdx[10];
    undefined field65_0x68;
    undefined field66_0x69;
    undefined field67_0x6a;
    undefined field68_0x6b;
    undefined field69_0x6c;
    undefined field70_0x6d;
    undefined field71_0x6e;
    undefined field72_0x6f;
    short fireTimer;
    short unk72;
    float pitch;
    float pitchVel;
    float yawVel;
    int barrelSide;
    int unk84;
    int lockTimer;
    float health;
    int hitTimer;
    int bossIdx;
    int soundHandle;
    undefined field85_0x9c;
    undefined field86_0x9d;
    undefined field87_0x9e;
    undefined field88_0x9f;
    float baseZ;
    float yawSmooth;
    undefined field91_0xa8;
    undefined field92_0xa9;
    undefined field93_0xaa;
    undefined field94_0xab;
    short deathTimer;
    short shakeTimer;
};

struct moby_update { /* PlaceHolder Class Structure */
};

struct MobyAnimLayer {
    struct MobySeq *animSeq;
    float animSeqT;
    float animSpeed;
    short animIScale;
    short poseCacheEntryIndex;
    struct MobyAnimLayer *nextLayer;
    char animSeqId;
    char animFlags;
    char animJointIndexA;
    char animJointIndexB;
    float blendWeight;
    float blendFade;
};

struct MobyCollHeader { /* MobyInstance.collision (+0x94). +0x10: CollPrim[primBytes/32] (spheres/pills attached to joints); then at (this+primBytes+0x10): verts float[4][vertBytes/16] (x1024 local), then CollTri[triBytes/4]. primSetA/B = joint counts selecting prim set (COLL_ALT_PRIMSET picks A). Moby collision is in x1024 space like env. */
    short primSetA;
    short primSetB;
    int primBytes;
    int triBytes;
    int vertBytes;
};

struct MobyVTable {
    uint idx;
    void **update;
    void **exit;
};

typedef long s64;

// ---- globals
extern undefined4 AnimationCacheRegistry; /* 0xa345c0 */
extern undefined4 DAT_00729040; /* 0x729040 */
extern undefined4 DAT_009636c8; /* 0x9636c8 */
extern undefined1 DAT_00a2c444; /* 0xa2c444 */
extern undefined4 DAT_00a49b44; /* 0xa49b44 */
extern undefined4 DAT_00a49f50; /* 0xa49f50 */
extern undefined4 DAT_00a49f54; /* 0xa49f54 */
extern undefined4 DAT_00a4c4e4; /* 0xa4c4e4 */
extern undefined4 DAT_00a4c4e8; /* 0xa4c4e8 */
extern undefined4 DAT_00a4db00; /* 0xa4db00 */
extern MobyInstance * MobyInstancePermEnd; /* 0xa390a4 */
extern undefined g_AnimLayerJointBuf; /* 0xa24640 */
extern undefined4 g_MobyDrawListEnd; /* 0xa39098 */
extern undefined4 g_MobyDrawListStart; /* 0xa3909c */
extern undefined4 numSpawnableMobys; /* 0xa4daf0 */

// ---- functions
void SECTION_HEADER_MOBYFUNC(void);
void UpdateNumSpawnableMobys(void);
void UpdateMobyFrameData(MobyInstance *param_1);
void InitMobyInstance(MobyInstance *moby,int oClass);
MobyInstance * CreateMoby(MOBY_OCLASSES oClass);
void DeleteMoby(MobyInstance *moby);
void MB_UpdateLoopSound(MobyInstance *param_1);
ulonglong MB_FindNearestAnimTrigger(double param_1,int param_2);
int MB_FindAnimTriggerAfter(double param_1,int param_2,undefined8 param_3,float *param_4);
double BlendAnimFrame(MobyInstance *param_1);
float MB_GetAnimSeqLength(int oClass,int seq);
float MB_GetAnimSeqTriggerLength(int oClass,int seq);
undefined8 MB_GetCollPrimWorld (int param_1,int param_2,uint *param_3,float *param_4,float *param_5,float *param_6);
void MB_SetCollPrimFromWorld (double param_1,double param_2,int param_3,ulonglong param_4,float *param_5);
void MB_AddShortPairOffset(int param_1,short param_2,short param_3);
short * MB_AllocAnimLayer(int param_1,short param_2);
void MB_FreeAnimLayer(int param_1,int *param_2);
void MB_InitAnimLayerBuffer(int param_1,longlong param_2,longlong param_3,int param_4);
void MB_UpdateAnimLayer(undefined8 param_1,MobyInstance *param_2);
void MB_SyncAnimLayer(MobyInstance *param_1,MobyInstance *param_2);
void MB_StartAnimLayer (MobyInstance *param_1,undefined8 param_2,s8 param_3,s8 param_4,undefined4 param_5, int param_6);
void AttachManipulator(MobyInstance *moby,uint32_t animJoint,Manipulator *manipulator);
void DetachManipulator(MobyInstance *pMoby,Manipulator *pManipulator);
int AnimCache_Register(int p);
void CleanAnimationCache(void);
void GetBoneTransformations(int param_1,undefined8 param_2,int param_3);
void GetBonePosition(int param_1,undefined8 param_2,float *param_3);
void GetMobyJointsWorldPos(int param_1,int param_2,undefined8 param_3,float *param_4);
void GetMobyJointsWorldMtx(int param_1,undefined8 param_2,undefined8 param_3,int param_4);
void STUB_000f1444(...);
void STUB_000f1448(...);
void UpdateHeroLightAngle(void);
void DrawMobyShadows(void);
void STUB_000f1844(...);
void STUB_000f1848(...);
void STUB_000f184c(...);
void DrawMobyDepth(void);
void MB_AddToDrawList(undefined4 param_1,undefined8 param_2);
void DrawMobyList(void);
void DrawMobys(void);
float * MB_SetLightsFromEnvSample(MobyInstance *param_1);
void SetLevelFlag(int arg);
