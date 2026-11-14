#pragma once
// idol/idol_draw.h
#include "types.h"

// ---- types
/* Idol's sequential memory pool (0x24 bytes; created inline with operator new in InitMemSlots).
   Fields are unnamed: only the constructor's stores are known */
struct IMSeqMem {
    u32 unk00[4];            /* 0x00 */
    u8 unk10;                /* 0x10 */
    u8 unk11;                /* 0x11 */
    u32 unk14;               /* 0x14 */
    void *vtable;            /* 0x18  @0x66173c */
    u32 unk1c;               /* 0x1c */
    u32 unk20;               /* 0x20 */
};
typedef char IMSeqMem_size_check[sizeof(struct IMSeqMem) == 0x24 ? 1 : -1];

/* the Idol renderer object (g_pIdolDraw @0x8fa564, g_pIdolDrawBase the same object as its base
   class). Only the fields the game code reaches into are named. */
/* libgcm's CellGcmSurface (same layout) */
struct IdolSurface {
    u8 type;                /* 0x00 */
    u8 antialias;           /* 0x01 */
    u8 colorFormat;         /* 0x02 */
    u8 colorTarget;         /* 0x03 */
    u8 colorLocation[4];    /* 0x04 */
    u32 colorOffset[4];     /* 0x08 */
    u32 colorPitch[4];      /* 0x18 */
    u8 depthFormat;         /* 0x28 */
    u8 depthLocation;       /* 0x29 */
    u8 _padding[2];
    u32 depthOffset;        /* 0x2c */
    u32 depthPitch;         /* 0x30 */
    u16 width;              /* 0x34 */
    u16 height;             /* 0x36 */
    u16 x;                  /* 0x38 */
    u16 y;                  /* 0x3a */
};

/* libgcm's CellGcmTexture (same layout) */
struct IdolTexture {
    u8 format;              /* 0x00 */
    u8 mipmap;              /* 0x01 */
    u8 dimension;           /* 0x02 */
    u8 cubemap;             /* 0x03 */
    u32 remap;              /* 0x04 */
    u16 width;              /* 0x08 */
    u16 height;             /* 0x0a */
    u16 depth;              /* 0x0c */
    u8 location;            /* 0x0e */
    u8 _padding;
    u32 pitch;              /* 0x10 */
    u32 offset;             /* 0x14 */
};

struct IdolDraw {
    struct IdolDrawVTable *vtable;    /* 0x000 */
    int unk04;                        /* 0x004  copied to DAT_00966b20 */
    int unk08;                        /* 0x008  copied to DAT_00966b24 */
    int widescreen;                   /* 0x00c */
    u8 unk10;                         /* 0x010 */
    u8 unk11;                         /* 0x011 */
    u8 _pad12[2];
    int unk14;                        /* 0x014  bit 1: StartGadgetPickupCutscene skips its extra flip */
    int unk18;                        /* 0x018 */
    u8 _pad1c[4];
    struct Vec4 camPos;               /* 0x020  the camera position (ImpactSprite_Draw) */
    u8 _pad30[0x70];
    struct Mtx4 viewMtx;              /* 0x0a0  set by SetView */
    struct Mtx4 viewProjMtx;          /* 0x0e0  set by SetView (guessed from use) */
    u8 _pad120[0x200];
    struct Vec4 frustumPlanes[6];     /* 0x320  copied to g_FrustumPlanes each frame */
    struct Vec4 frustumOrigin;        /* 0x380  (guessed from use: copied beside them) */
    u8 _pad390[0x110];
    int stereo;                       /* 0x4a0  stereo 3D */
    u8 _pad4a4[4];
    u32 memBase;                      /* 0x4a8  main memory base for RSX offsets */
    u32 vramBase;                     /* 0x4ac */
    u8 _pad4b0[0x15bc];
    int unk1a6c;                      /* 0x1a6c */
    u8 _pad1a70[4];
    int unk1a74;                      /* 0x1a74  Draw_FlushAndPresent passes it to FUN_004d5e48 */
    int unk1a78;                      /* 0x1a78 */
    u8 _pad1a7c[8];
    float stereoShift;                /* 0x1a84  the per-eye shift of screen x */
    u8 _pad1a88[4];
    int unk1a8c;                      /* 0x1a8c  FadeToBlack does nothing while set */
    u8 _pad1a90[0x154];
    struct IdolSurface surface;       /* 0x1be4  the frame buffer, as a CellGcmSurface */
    u8 _pad1c20[0x3c0];
    int presentInfo;                  /* 0x1fe0  its address goes to idol_draw::Gfx_Present */
    u8 _pad1fe4[0x74];
    struct IdolTexture renderTarget;  /* 0x2058  the off-screen target DrawRenderTargetToScreen copies */
    u8 _pad2070[0x218];
    u32 auxBuffer;                    /* 0x2288  main-memory address of the aux draw buffer */
    u8 _pad228c[0x4c];
    int auxDepth;                     /* 0x22d8  BeginAuxDrawMode/EndAuxDrawMode nesting */
};

/* the Idol renderer's virtual functions (the vtable @0x661840; its base class @0x661710 has
   them all pure) */
struct IdolDrawVTable {
    void *dtor0;                                                        /* 0x00 */
    void *dtor1;                                                        /* 0x04 */
    void *(*Alloc)(struct IdolDraw *self);                              /* 0x08 */
    void (*unk0c)(void);                                                /* 0x0c */
    void (*unk10)(struct IdolDraw *self, int, int, int);                /* 0x10 */
    void (*SetupPasses)(struct IdolDraw *self);                         /* 0x14  idol_draw::Render_SetupPasses */
    void (*BuildAndFlipFrame)(struct IdolDraw *self);                   /* 0x18  idol_draw::BuildAndFlipFrame */
    void (*unk1c)(void);                                                /* 0x1c */
    void (*SetPerspective)(float fovDeg, float nearZ, float farZ, struct IdolDraw *self); /* 0x20 */
    void (*SetView)(struct IdolDraw *self, struct Mtx4 *view);          /* 0x24 */
    void (*unk28)(struct IdolDraw *self);                               /* 0x28 */
};

// ---- globals
extern undefined4 DAT_0065f438; /* no defined data */
extern undefined4 DAT_0065f620; /* no defined data */
extern undefined4 DAT_0071a800; /* 0x71a800 */
extern undefined4 DAT_0071a808; /* 0x71a808 */
extern undefined4 DAT_00902e94; /* 0x902e94 */
extern undefined4 DAT_00902ea0; /* 0x902ea0 */
extern undefined4 DAT_00902ea4; /* 0x902ea4 */
extern undefined4 DAT_00902eb8; /* 0x902eb8 */
extern undefined4 DAT_00902ebc; /* 0x902ebc */
extern undefined4 DAT_015932cc; /* 0x15932cc */
extern undefined4 DAT_015932d0; /* 0x15932d0 */
extern undefined4 DAT_015932d4; /* 0x15932d4 */
extern undefined1 DAT_015932dc; /* 0x15932dc */
extern undefined4 DAT_015932e0; /* 0x15932e0 */
extern undefined4 DAT_015932e4; /* 0x15932e4 */
extern undefined4 DAT_015932e8; /* no defined data */
extern undefined4 DAT_0159331c; /* 0x159331c */
extern undefined4 DAT_01593320; /* 0x1593320 */
extern undefined4 DAT_01593324; /* 0x1593324 */
extern undefined4 DAT_01593328; /* 0x1593328 */
extern undefined4 DAT_01593348; /* no defined data */
extern undefined1 DAT_0159334c; /* 0x159334c */
extern undefined4 DAT_01593358; /* no defined data */
extern IMSeqMem *MemSlots_IMSeqMem_descriptor; /* 0xa1091c: the pool InitMemSlots allocates from (DL keeps these pointers in a MEMSLOTS struct, MemSlots) */ /* type set in global_types.tsv */
extern pointer PTR_DAT_0071a3b8; /* 0x71a3b8 */
extern pointer PTR_DAT_0071a614; /* 0x71a614 */
extern undefined * PTR_DAT_0071a654; /* 0x71a654 */
extern undefined * PTR_DAT_0071a7b0; /* 0x71a7b0 */
extern pointer PTR_DAT_0071a7fc; /* 0x71a7fc */
extern pointer PTR_DAT_0071a804; /* 0x71a804 */
extern pointer32 PTR_FUN_00710ef8; /* 0x710ef8 */
extern pointer32 PTR_FUN_00710f08; /* 0x710f08 */
extern pointer32 PTR_FUN_00710f10; /* 0x710f10 */
extern pointer32 PTR_FUN_00710f18; /* 0x710f18 */
extern pointer32 PTR_FUN_00710f20; /* 0x710f20 */
extern pointer32 PTR_FUN_00710f28; /* 0x710f28 */
extern pointer32 PTR_FUN_00710f30; /* 0x710f30 */
extern pointer32 PTR_FUN_00710f38; /* 0x710f38 */
extern pointer32 PTR_FUN_00710f40; /* 0x710f40 */
extern pointer32 PTR_FUN_00710f50; /* 0x710f50 */
extern pointer32 PTR_FUN_00710f58; /* 0x710f58 */
extern pointer32 PTR_FUN_00710f60; /* 0x710f60 */
extern pointer32 PTR_FUN_00710f80; /* 0x710f80 */
extern pointer32 PTR_FUN_00710f88; /* 0x710f88 */
extern pointer32 PTR_FUN_00710f90; /* 0x710f90 */
extern pointer32 PTR_FUN_00710f98; /* 0x710f98 */
extern pointer32 PTR_FUN_00710fa8; /* 0x710fa8 */
extern pointer PTR_PTR_006663fc; /* 0x6663fc */
extern pointer PTR_PTR_0071a5e4; /* 0x71a5e4 */
extern pointer PTR_PTR_00902ea8; /* 0x902ea8 */
extern pointer PTR_PTR_00902eac; /* 0x902eac */
extern pointer PTR_PTR_00902eb0; /* 0x902eb0 */
extern pointer PTR_PTR_00902eb4; /* 0x902eb4 */
extern undefined * PTR_s_Application_thinks_baseAddr_is_0_0071a390; /* 0x71a390 */
extern pointer PTR_s_No_name_0071a3bc; /* 0x71a3bc */
extern pointer PTR_s_WwsJob__0071a5e0; /* 0x71a5e0 */
extern undefined * PTR_s_false_0071a690; /* 0x71a690 */
extern pointer PTR_s_no_name_0071a3a0; /* 0x71a3a0 */
extern pointer PTR_s_validSpuReadLoadCommands_0071a648; /* 0x71a648 */
extern undefined4 _DAT_004feb40; /* direct read */
extern undefined4 _DAT_004feb50; /* direct read */
extern undefined4 _DAT_004feb70; /* direct read */
extern undefined4 _DAT_004feb80; /* direct read */
extern undefined4 _DAT_004ff1d0; /* direct read */
extern undefined4 _DAT_004ff1e0; /* direct read */
extern undefined4 _DAT_004ff1f0; /* direct read */
extern undefined4 _DAT_004ff200; /* direct read */
extern undefined4 _DAT_004ff2e0; /* direct read */
extern undefined4 _DAT_004ff2f0; /* direct read */
extern undefined4 _DAT_004ff300; /* direct read */
extern undefined4 _DAT_004ff310; /* direct read */

// ---- functions
namespace idol_draw { void CmdQueue_ResetCounters(int *param_1,int param_2); } 
void JobList_WaitForProgress(int *param_1,ulonglong param_2,uint param_3);
ushort JobList_GetProgress(int *param_1,ulonglong param_2);
namespace idol_draw { bool CmdQueue_HasCapacity(int *param_1,ulonglong param_2,uint param_3); } 
uint JobList_CountJobs(int *param_1,int param_2);
uint JobList_CountJobs_2(int *param_1,int param_2);
uint JobList_RaiseReadyCount(int *param_1,int param_2,uint param_3);
ulonglong JobArrayContainer_AddJob(int *param_1,ulonglong param_2,undefined4 param_3);
void JobWorkload_Shutdown(int param_1);
void JobWorkload_SetPriorities(int param_1,undefined8 param_2);
uint JobWorkload_IsIdle(int param_1);
undefined1 JobWorkload_InfoE0(int param_1);
undefined1 JobWorkload_InfoDD(int param_1);
namespace idol_draw { void CmdQueue_Submit(int param_1,undefined8 param_2); } 
void JobWorkload_SetName(int param_1,undefined8 param_2);
void Job_CheckBaseAddr(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, int param_5,undefined4 *param_6);
void JobList_ResetArray(int *param_1,ulonglong param_2,undefined4 *param_3);
void JobList_ResetArray_2(int *param_1,ulonglong param_2,undefined4 *param_3);
void JobList_CountToEnd(int *param_1,int param_2);
void JobList_Init(int *param_1,undefined4 *param_2,int param_3);
namespace idol_draw { void Spurs_WaitWorkloadIdle(int param_1); } 
uint JobList_IsArrayDone(int *param_1,uint param_2);
void JobList_WaitArrayDone(int *param_1,uint param_2);
void JobList_SubmitArray(int *param_1,ulonglong param_2,undefined4 param_3);
void JobList_SubmitArray_2(int *param_1,ulonglong param_2,undefined4 param_3);
void JobArray_Reset(undefined4 *param_1);
namespace idol_draw { ulonglong CmdQueue_ZeroCacheLines(uint *param_1); } 
namespace idol_draw { int RingBuffer_PushEntry(int *param_1,undefined8 param_2); } 
int JobArray_Push(int *param_1,undefined8 param_2);
void JobArray_SetRange(int param_1,undefined4 param_2,undefined4 param_3);
void JobArray_ClearRange(int param_1);
void JobArray_Reset_2(undefined4 *param_1);
ulonglong MemRegion_ZeroCacheLines(uint *param_1);
int JobArray_TryInsert(int *param_1,undefined8 param_2,int param_3);
int JobArray_TryInsert_2(int *param_1,undefined8 param_2,int param_3);
int JobArray_FindEnd(int *param_1,int param_2);
void JobArray_SetRange_2(int param_1,undefined4 param_2,undefined4 param_3);
void JobArray_ClearRange_2(int param_1);
ulonglong JobArray_AppendAtomic(uint *param_1,undefined8 param_2,ulonglong param_3);
int JobArray_AddJob(int *param_1,ulonglong param_2,ulonglong param_3);
int JobArray_AddCmd5(int *param_1,longlong param_2);
int JobArray_AddCmd2(int *param_1,ulonglong param_2);
int JobArray_AddJobFlagged(int *param_1,ulonglong param_2,ulonglong param_3);
int JobArray_AddRaw10(int *param_1,ulonglong param_2);
int JobArray_AddCmd4(int *param_1,ulonglong param_2);
int JobArray_AddEnd(int *param_1);
int JobArray_InsertJob(int *param_1,ulonglong param_2,ulonglong param_3,int param_4);
int JobArray_InsertCmd5(int *param_1,longlong param_2,int param_3);
int JobArray_InsertCmd2(int *param_1,ulonglong param_2,int param_3);
int JobArray_InsertCmd4(int *param_1,ulonglong param_2,int param_3);
int JobArray_InsertEnd(int *param_1,int param_2);
void JobArray_Init(undefined4 *param_1,longlong param_2,longlong param_3);
void JobArray_Init_2(undefined4 *param_1,longlong param_2,longlong param_3);
ulonglong JobArray_AppendAtomic_2(uint *param_1,ulonglong param_2);
ulonglong JobArray_AppendAtomic_3(uint *param_1,undefined8 param_2,ulonglong param_3);
ulonglong JobArray_AppendAtomic_4(uint *param_1,ulonglong param_2,ulonglong param_3);
ulonglong JobArray_AppendAtomic_5(uint *param_1,longlong param_2,ulonglong param_3);
ulonglong JobArray_AppendAtomic_6(uint *param_1,ulonglong param_2,ulonglong param_3);
ulonglong JobArray_AppendAtomic_7(uint *param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4);
ulonglong JobArray_AppendAtomic_8(uint *param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4);
ulonglong JobArray_AppendAtomic_9(uint *param_1,ulonglong param_2,ulonglong param_3);
undefined2 * JobHandle_Make(undefined2 *param_1,int param_2);
void JobList_CountActive(undefined8 param_1);
void JobList_CountActive_2(undefined8 param_1);
void JobList_WaitActive(undefined8 param_1);
undefined1 JobList_IsActiveDone(undefined8 param_1);
undefined2 * JobList_AddEnd(undefined2 *param_1,int param_2);
undefined2 * JobList_AddJobFlagged(undefined2 *param_1,int param_2,undefined8 param_3,undefined8 param_4);
namespace idol_draw { void CmdQueue_Reset(int param_1); } 
void JobList_ResetPacket(void);
void JobList_Disassemble(undefined4 *param_1,uint param_2);
undefined2 * JobList_EndHandle(undefined2 *param_1,int *param_2);
undefined2 * JobList_InsertCmd2(undefined2 *param_1,int param_2,undefined8 param_3,undefined8 param_4);
undefined2 * JobList_AppendJob(undefined2 *param_1,int *param_2,undefined8 param_3,undefined8 param_4);
undefined2 * JobList_AddCmd5(undefined2 *param_1,int param_2,undefined8 param_3);
undefined2 * JobList_AddCmd2(undefined2 *param_1,int param_2,undefined8 param_3);
namespace idol_draw { undefined2 * CmdQueue_PushEntry_Blocking(undefined2 *param_1,int param_2,undefined8 param_3); } 
namespace idol_draw { undefined2 * CmdQueue_PushEntry(undefined2 *param_1,int param_2,undefined8 param_3); } 
undefined2 * JobList_AppendAtomic(undefined2 *param_1,int *param_2);
undefined2 * JobList_AppendAtomic5(undefined2 *param_1,int *param_2,undefined8 param_3);
undefined2 * JobList_AppendAtomic6(undefined2 *param_1,int *param_2,undefined8 param_3);
undefined2 * JobList_AppendAtomic7Kick(undefined2 *param_1,int *param_2,undefined8 param_3,undefined8 param_4, undefined4 param_5);
undefined2 * JobList_AppendAtomic9(undefined2 *param_1,int *param_2,undefined8 param_3);
undefined2 * JobList_AppendAtomic3(undefined2 *param_1,int *param_2,undefined8 param_3);
undefined2 * JobList_AppendAtomic7(undefined2 *param_1,int *param_2,undefined8 param_3,undefined8 param_4);
undefined2 * JobList_TryInsert(undefined2 *param_1,int param_2,undefined8 param_3,undefined8 param_4);
undefined2 * JobList_InsertJob(undefined2 *param_1,int param_2,undefined8 param_3,undefined8 param_4, undefined8 param_5);
undefined2 * JobList_InsertEnd(undefined2 *param_1,int param_2,undefined8 param_3);
undefined2 * JobList_InsertCmd5(undefined2 *param_1,int param_2,undefined8 param_3,undefined8 param_4);
undefined1 JobList_HasCapacity(int param_1);
undefined2 * JobList_AppendJobKick(undefined2 *param_1,int *param_2,undefined8 param_3,undefined8 param_4, undefined4 param_5);
undefined2 * JobList_AddCmd5Kick(undefined2 *param_1,int param_2,undefined8 param_3,undefined4 param_4);
undefined2 * JobList_AddCmd2Kick(undefined2 *param_1,int param_2,undefined8 param_3,undefined4 param_4);
undefined2 * JobList_AddRaw10Kick(undefined2 *param_1,int param_2,undefined8 param_3,undefined4 param_4);
undefined2 * JobList_PushEntryKick(undefined2 *param_1,int param_2,undefined8 param_3,undefined4 param_4);
undefined2 * JobList_AddJobFlaggedKick(undefined2 *param_1,int param_2,undefined8 param_3,undefined8 param_4, undefined4 param_5);
undefined2 * JobList_AddJobKick(undefined2 *param_1,int param_2,undefined8 param_3,undefined8 param_4, undefined4 param_5);
undefined2 * JobList_AppendAtomic5Kick(undefined2 *param_1,int *param_2,undefined8 param_3,undefined4 param_4);
undefined2 * JobList_AppendAtomic6Kick(undefined2 *param_1,int *param_2,undefined8 param_3,undefined4 param_4);
undefined2 * JobList_AppendAtomic9Kick(undefined2 *param_1,int *param_2,undefined8 param_3,undefined4 param_4);
undefined2 * JobList_AppendAtomic3Kick(undefined2 *param_1,int *param_2,undefined8 param_3,undefined4 param_4);
void JobList_ResetActive(int param_1);
namespace idol_draw { void CmdQueue_WaitForSpaceAndSync(int param_1); } 
void JobList_Reset(int param_1);
void JobList_Reset_2(int param_1);
int JobList_AllocCommands(int param_1,int param_2);
void JobList_Create(int *param_1,int param_2,int param_3,undefined8 param_4);
void JobList_Create_2(int *param_1,int param_2,int param_3,undefined8 param_4);
void SpuAudit_DefaultPrintf(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4, undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8);
void SpuModule_Init(undefined4 *param_1);
void SpuModule_Init_2(undefined4 *param_1);
int SpuModule_End(int *param_1);
uint SpuModule_IsValid(int *param_1);
void STUB_004f4f84(void);
ulonglong SpuModule_Guid(int *param_1);
int * SpuModuleCache_Find(int param_1);
int * SpuModuleCache_FindByGuid(ulonglong param_1);
int * SpuModuleCache_FindFree(void);
void SpuModuleCache_Release(int param_1);
void SpuModuleCache_Register(int param_1,undefined *param_2);
undefined4 SpuModuleCache_Load(uint param_1,ulonglong *param_2,undefined1 *param_3,undefined4 param_4,int *param_5);
ulonglong SpuModule_SizeKB(int *param_1);
void SpuModule_Release(int *param_1);
void SpuModule_Release_2(int *param_1);
uint * SpuModuleCache_Lock(ulonglong param_1);
undefined4 SpuModuleCache_GetName(ulonglong param_1,undefined1 *param_2,undefined4 param_3);
int * SpuModule_Assign(int *param_1,int *param_2);
void SpuModule_Copy(int *param_1,int *param_2);
void SpuModule_Copy_2(int *param_1,int *param_2);
void SpuModule_Create(int *param_1,int param_2,int param_3,undefined *param_4);
void SpuModule_Create_2(int *param_1,int param_2,int param_3,undefined *param_4);
void Medius_Ctor(undefined4 *param_1);
void Medius_Ctor_2(undefined4 *param_1);
undefined4 * Medius_GetInstance(undefined8 param_1);
void Medius_Init(int param_1);
void Medius_Disconnect(int param_1);
void Medius_RequestState12(int param_1);
void Medius_ConnectToMLS(int param_1);
void Medius_DisconnectFromMAS(int param_1);
void Medius_RequestStateD(int param_1);
void Medius_BeginAuthentication(int param_1);
void Medius_RequestSessionMAS(int param_1);
void Medius_ConnectToMAS(int param_1);
void Medius_Update(int param_1);
void Medius_ResolveHostServer(int param_1);
void Medius_Connect(int param_1);
void SetWord_2(undefined4 *param_1,undefined4 param_2);
undefined8 STUB_004f7120_RET_0(void);
void NetGetHostByNameCallback(int param_1);
void Medius_OnConnectResult(int param_1);
void Medius_SetState8(void);
void Medius_OnLoginResult(undefined4 *param_1);
void Medius_SetState11(void);
void NetUpdateErrorCallback(int param_1);
void Medius_OnResolveResult(int param_1);
void Medius_OnSessionResult(int param_1);
void MASTicketLoginCallback(int param_1,int *param_2,int param_3);
void MASAnonymousLoginCallback(int param_1,int *param_2,int param_3);
void Medius_OnAccountResult(int param_1);
void Medius_OnPolicyResult(int param_1);
void MASSessionEndCallback(int param_1);
void NetManager_Ctor(undefined4 *param_1);
void NetManager_Ctor_2(undefined4 *param_1);
undefined4 * NetManager_GetInstance(undefined8 param_1);
void NpManagerCallback(int param_1);
undefined8 NpBasicCallback(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4);
void NetManager_UnloadNetStartDialog(longlong param_1);
void NPTicketCallback(undefined8 param_1);
void NetManager_Shutdown(undefined4 *param_1);
void NetManager_Shutdown_2(int param_1);
void NetManager_InitNp(undefined4 *param_1,char param_2);
void NetManager_GetServiceId(int param_1,undefined4 param_2);
void NetManager_Update(undefined4 *param_1);
int NetManager_LookupNpId(undefined8 param_1,undefined8 param_2,undefined8 param_3);
undefined * NetManager_FindPlayer(int param_1,int param_2);
undefined4 NetManager_AddPlayer(int param_1,int param_2);
void NetManager_SetPresence(undefined4 *param_1,undefined8 param_2);
undefined8 NetManager_SetChatPresence(int param_1,int param_2);
bool NetManager_AddFriend(int param_1,int param_2);
bool NetManager_AddBlockListEntry(int param_1,int param_2);
undefined1 NetManager_IsConnected(int param_1);
void SpuAudit_Ctor(undefined4 *param_1);
void SpuAudit_Init(undefined4 *param_1,undefined4 *param_2,longlong param_3,int param_4,int param_5);
void SpuAudit_SetHeader0(undefined4 *param_1,undefined4 param_2);
void SpuAudit_SetHeader10(int *param_1,undefined4 param_2);
void SpuAudit_SetSize(int *param_1,int param_2);
void SpuAudit_ClearSlot(int *param_1,int param_2,longlong param_3);
void SpuAudit_WaitClearSlot(int *param_1,int param_2,longlong param_3);
int SpuAudit_SlotIndex(int *param_1,int param_2,int param_3);
undefined4 SpuAudit_GetSlot(int *param_1,int param_2,longlong param_3);
void SpuAudit_WaitSlot(int *param_1,int param_2,longlong param_3);
void SpuAudit_ClearSpu(int *param_1,int param_2);
uint SpuAudit_RegisterId(int param_1,int param_2);
void SpuAudit_AddFormat(int param_1,undefined2 param_2,short param_3,undefined4 param_4,undefined4 param_5 );
void SpuAudit_FindFormat(int param_1,ulonglong param_2,undefined4 *param_3,undefined4 *param_4);
void TextBuf_PutChar(int param_1,undefined1 param_2);
void TextBuf_PutHex(int param_1,uint param_2);
void TextBuf_PutPadding(int param_1,int param_2);
void SpuAudit_FormatEntry(ulonglong param_1,undefined8 param_2,ulonglong param_3,undefined4 *param_4);
void SpuAudit_AddHandler(int param_1,int param_2);
void SpuAudit_CheckOverflow(uint *param_1,int param_2,ulonglong param_3,int param_4,undefined4 *param_5, int param_6);
void SpuAudit_Process(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4, undefined4 param_5);
void TextBuf_Flush(int param_1);
void SpuAudit_PrintfThunk(void);
int TextBuf_Printf(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4, undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8);
void SpuAudit_ResetSpu(int *param_1,int param_2);
void SpuAudit_ProcessAll(int *param_1,undefined4 param_2,undefined4 param_3);
uint SpuAudit_RegisterIdWithFormat(int param_1,int param_2,undefined4 param_3,undefined4 param_4);
void SpuAudit_FormatEntry_2(ulonglong param_1,undefined4 param_2,ulonglong param_3,undefined4 *param_4);
void SpuAudit_Init_2(undefined4 *param_1,undefined4 *param_2,longlong param_3,int param_4,int param_5);
void SpuAudit_Init_3(undefined4 *param_1,undefined4 *param_2,longlong param_3,int param_4,int param_5);
void SpuAudit_Reset(undefined4 *param_1);
void SpuAudit_Reset_2(undefined4 *param_1);
void SpuAudit_Reset_3(undefined4 *param_1);
void SpuAudit_Print(int param_1,undefined4 param_2,ulonglong param_3,undefined4 param_4,uint param_5, ushort param_6,uint param_7,ulonglong *param_8);
void CommandListChecker_Check(ulonglong *param_1,uint param_2,uint param_3);
void CommandListChecker_Fail(ulonglong param_1);
undefined * GetDefaultAuditFormats(void);
uint SpuAudit_BufferSize(void);
undefined * SpuAudit_Buffer(void);
uint SpuAudit_BufferSize_2(void);
void SpuAudit_PrintSeparator(void);
int IMSeqMem_BytesLeft(int param_1);
longlong IMSeqMem_BytesLeftClamped(int param_1);
namespace idol { ulonglong AllocateMemAlign(int param_1,longlong param_2,longlong param_3); } 
void IMSeqMem_Alloc16(undefined4 param_1,undefined8 param_2);
void IMSeqMem_AllocAligned(undefined4 param_1,undefined4 param_2,undefined8 param_3);
void *IMSeqMem_Alloc(int param_1,void *param_2,int param_3);
void IMSeqMem_Alloc16_2(undefined4 param_1,undefined8 param_2);
void IMSeqMem_AllocAligned_2(undefined4 param_1,undefined4 param_2,undefined8 param_3);
void IMSeqMem_Alloc_2(undefined4 param_1,undefined8 param_2);
void STUB_004fe338(void);
void STUB_004fe33c(void);
void STUB_004fe340(void);
void STUB_004fe344(void);
void IMSeqMem_Release(int *param_1);
void IMSeqMem_Init(IMSeqMem *param_1,void *param_2,int param_3,const char *param_4,int param_5,void *param_6);
ulonglong IMSeqMem_InitFromParent(int *param_1,ulonglong param_2,int param_3,int param_4,int param_5);
int IMSeqMem_AllocBytes(int param_1,int param_2);
double IMSeqMem_FreeMB(int param_1);
undefined4 IMSeqMem_GetBase(undefined4 *param_1);
namespace idol { ulonglong kalloc(int param_1,longlong param_2); } 
void IMSeqMem_AlignCur(int param_1,int param_2);
void *IMSeqMem_GetCur(IMSeqMem *param_1);
uint IMSeqMem_AlignUp(int param_1,int param_2);
void IMSeqMem_SetCur(IMSeqMem *param_1,u32 param_2);
ulonglong IMSeqMem_SetCurChecked(int param_1,ulonglong param_2);
void IMSeqMem_Advance(int param_1,int param_2);
int IMSeqMem_TotalFree(int *param_1);
void IMSeqMem_Lock(int param_1);
void IMSeqMem_Unlock(int param_1);
void IMSeqMem_PrintInfo(u8 *param_1,const char *param_2);
void TempPool_Init(void);
undefined4 FUN_004fe898(void);
void FUN_004fe97c(int param_1);
void FUN_004fea60(undefined4 param_1,longlong param_2);
void SetDefaultAllocator(void);
void SetAltAllocator(void);
void FUN_004feb98(uint param_1,uint param_2);
bool FUN_004ff210(double param_1,uint param_2);
int FastCheckBsphere(u8 *param_1,float param_2,float param_3,Vec4 param_4);
int32_t Debug_PostBreak(void);
void Debug_VPrintLevel1(undefined8 param_1,undefined8 param_2);
namespace idol { int32_t print_mem_error (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4, undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8); } 
void Debug_SetAssertHandler(undefined4 param_1);
void Debug_SetHandlerEb4(undefined *param_1);
void Debug_SetHandlerEb0(undefined *param_1);
void Debug_SetHandlerEac(undefined *param_1);
void Debug_SetPrintHandler(undefined *param_1);
void Debug_SetHandlers(undefined *param_1,undefined *param_2,undefined *param_3,undefined4 param_4);
void Debug_SetHandlers_2(undefined *param_1,undefined *param_2,undefined *param_3,undefined *param_4, undefined4 param_5);
void Debug_CallAssertHandler(undefined8 param_1,undefined8 param_2,undefined8 param_3);
void print_tty(const char *param_1,...);
void Debug_Printf(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4, undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8);
void Debug_VPrintLevel3(undefined8 param_1,undefined8 param_2);
void Debug_PrintfLevel3(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4, undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8);
int32_t Idol_Break(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4, undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8);
void Debug_VPrintEb0(undefined8 param_1);
int32_t Debug_BreakPrintf(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4, undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8);
void Debug_VPrintEb4(undefined1 param_1);
void Debug_PrintfEb4(undefined1 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4, undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8);
void print_tty2(char *format,...);
void Debug_PrintfEb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4, undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8);
void Debug_PrintfEb0_2(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4, undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8);
undefined4 Debug_GetLevelA0(void);
undefined4 Debug_GetLevelA4(void);
void Debug_SetLevelA0(undefined4 param_1);
void Debug_SetLevelA4(undefined4 param_1);
int32_t Debug_PutsA(undefined8 param_1,char *param_2);
int32_t Debug_PutsB(undefined8 param_1,char *param_2);
