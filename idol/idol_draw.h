#pragma once
// idol/idol_draw.h
#include "types.h"

// ---- types
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
extern IMSeqMem *MemSlots_IMSeqMem_descriptor; /* 0xa1091c: the pool InitMemSlots allocates from (DL keeps these pointers in a MEMSLOTS struct, MemSlots) */ /* type set in global_types.tsv */

// ---- functions
namespace idol_draw { ulonglong PackCmd(ulonglong param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4 ,longlong depth); } 
ulonglong GsPackAlpha(ulonglong param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4, longlong param_5);
u64 SCE_GS_SET_CLAMP(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6);
undefined8 STUB_00502f5c_RET_0(void);
undefined8 STUB_00502f64_RET_0(void);
u64 SCE_GS_SET_MIPTBP1(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6);
u64 STUB_00502f74_RET_0(int param_1,int param_2,int param_3,int param_4,int param_5);
namespace idol_draw { uint Blend(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8); } 
u64 GsPackTest(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8);
undefined8 STUB_00502fb4_RET_0(void);
u64 SCE_GS_SET_TEX0(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,int param_12);
undefined8 STUB_00502fc4_RET_0(void);
undefined8 STUB_00502fcc_RET_0(void);
u64 SCE_GS_SET_TEX1(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7);
undefined8 STUB_00502fdc_RET_0(void);
undefined8 STUB_00502fe4_RET_0(void);
u64 SCE_GS_SET_XYZ(int param_1,int param_2,int param_3);
undefined8 STUB_00502ff4_RET_0(void);
u64 VU1_addGSregister(int param_1,int param_2,int param_3);
undefined8 STUB_00503004_RET_0(void);
u8 Gs_DmaTagByte(int param_1,int param_2);
undefined8 STUB_00503014_RET_0(void);
undefined8 STUB_0050301c_RET_0(void);
undefined8 STUB_00503024_RET_0(int param_1,int param_2,int param_3);
undefined8 STUB_0050302c_RET_0(int param_1);
undefined8 STUB_00503034_RET_0(float param_1,float param_2);
undefined8 STUB_0050303c_RET_0(void);
u64 SCE_GS_SET_BITBLTBUF(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6);
undefined8 STUB_0050304c_RET_0(void);
void STUB_00503054(void);
undefined8 STUB_00503058_RET_0(void);
undefined8 STUB_00503060_RET_0(void);
void STUB_00503068(void);
void sceGsExecLoadImage(void *param_1,void *param_2);
void STUB_00503070(...);
void sceGsSyncPath(int param_1,int param_2);
void STUB_00503078(...);
void STUB_0050307c(...);
void STUB_00503080(...);
void sceGsSetDefLoadImage(void *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8);
void STUB_00503088(void);
void STUB_0050308c(void);
void STUB_00503090(void);
undefined8 STUB_00503094_RET_0(void);
undefined8 STUB_0050309c_RET_0(void);
undefined8 STUB_005030a4_RET_2(void);
u32 STUB_005030ac_RET_0(int param_1,int param_2);
u32 STUB_005030b4_RET_0(int param_1);
u32 STUB_005030bc_RET_0(int param_1,int param_2);
u32 STUB_005030c4_RET_0(int param_1,int param_2);
u32 STUB_005030cc_RET_0(int param_1,int param_2);
u32 STUB_005030d4_RET_0(int param_1,int param_2);
u64 STUB_005030dc_RET_0(int param_1);
undefined8 STUB_005030e4_RET_0(void);
u64 STUB_005030ec_RET_0(int param_1);
u32 STUB_005030f4_RET_0(int param_1,int param_2);
u32 STUB_005030fc_RET_0(int param_1);
u32 SCE_VIF1_SET_UNPACK(int param_1,int param_2,int param_3,int param_4);
undefined8 STUB_0050310c_RET_0(void);
void STUB_00503114(...);
void STUB_00503118(...);
void STUB_0050311c(void);
undefined8 STUB_00503120_RET_0(void);
int STUB_00503128_RET_0(int param_1);
undefined8 STUB_00503130_RET_3(void);
undefined8 STUB_00503138_RET_0(void);
void STUB_00503140(void);
undefined8 STUB_00503144_RET_0(void);
undefined8 STUB_0050314c_SET_1(undefined4 *param_1);
int STUB_0050315c_RET_0(int param_1);
int STUB_00503164_RET_0(int param_1,int param_2,int param_3);
undefined8 STUB_0050316c_RET_1(void);
void STUB_00503174(void);
void STUB_00503178(void);
void STUB_0050317c(void);
undefined8 STUB_00503180_RET_1(void);
void STUB_00503188(void);
undefined8 STUB_0050318c_RET_0(void);
undefined8 STUB_00503194_RET_0(void);
undefined8 STUB_0050319c_RET_0(void);
void STUB_005031a4(...);
int STUB_005031a8_RET_0(int param_1);
undefined8 STUB_005031b0_RET_0(void);
void STUB_005031b8(...);
int RunCopy(void *param_1,int param_2);
void STUB_005031f4(void);
void STUB_005031f8(...);
void STUB_005031fc(...);
void STUB_00503200(void);
void STUB_00503204(...);
void STUB_00503208(...);
undefined8 STUB_0050320c_RET_0(void);
void STUB_00503214(int param_1);
void STUB_00503218(...);
void STUB_0050321c(...);
undefined8 STUB_00503220_RET_0(void);
undefined8 STUB_00503228_RET_0(void);
undefined8 STUB_00503230_RET_0(void);
undefined8 STUB_00503238_RET_0(void);
void STUB_00503240(void);
void FlushCache(int param_1);
void STUB_00503248(void);
void STUB_0050324c(void);
undefined8 STUB_00503250_RET_0(void);
undefined8 STUB_00503258_RET_0(void);
undefined8 STUB_00503260_RET_0(void);
void STUB_00503268(void);
void STUB_0050326c(void);
void STUB_00503270(void);
undefined8 STUB_00503274_RET_0(void);
void STUB_0050327c(void);
void STUB_00503280(void);
undefined8 STUB_00503284_RET_0(void);
void STUB_0050328c(void);
undefined8 STUB_00503290_RET_0(void);
void STUB_00503298(void);
undefined8 STUB_0050329c_RET_0(void);
void STUB_005032a4(void);
undefined8 STUB_005032a8_RET_0(void);
undefined8 STUB_005032b0_RET_0(void);
void STUB_005032b8(void);
undefined8 STUB_005032bc_RET_0(void);
undefined8 STUB_005032c4_RET_0(void);
undefined8 STUB_005032cc_RET_0(void);
undefined8 STUB_005032d4_RET_0(void);
undefined8 STUB_005032dc_RET_0(void);
undefined8 STUB_005032e4_RET_0(void);
undefined8 STUB_005032ec_RET_0(void);
undefined8 STUB_005032f4_RET_0(void);
undefined8 STUB_005032fc_RET_0(void);
undefined8 STUB_00503304_RET_0(void);
undefined8 STUB_0050330c_RET_0(void);
undefined8 STUB_00503314_RET_0(void);
void STUB_0050331c(void);
void STUB_00503320(void);
void STUB_00503324(void);
void STUB_00503328(void);
void STUB_0050332c(void);
void SysUsleep(void);
undefined8 STUB_00503354_RET_0(void);
undefined8 STUB_0050335c_RET_0(void);
undefined8 STUB_00503364_RET_0(void);
void STUB_0050336c(void);
undefined8 STUB_00503370_RET_0(void);
void STUB_00503378(void);
undefined8 STUB_0050337c_RET_0(void);
void STUB_00503384(void);
undefined8 STUB_00503388_RET_0(void);
undefined4 SysGetSystemTime(void);
undefined8 STUB_005033b8_RET_0(void);
undefined8 STUB_005033c0_RET_0(void);
undefined8 STUB_005033c8_RET_0(void);
void STUB_005033d0(void);
undefined8 STUB_005033d4_RET_0(void);
undefined8 STUB_005033dc_RET_0(void);
void STUB_005033e4(void);
void SetWord(undefined4 *param_1,undefined4 param_2);
undefined8 STUB_005033f0_RET_0(void);
void STUB_005033f8(void);
undefined8 STUB_005033fc_RET_0(void);
void m_LoadLevelFileS(u32 param_1,const char *param_2);
undefined8 m_LoadLevelFile(void);
undefined8 m_LoadLevelFileB(void);
