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
extern undefined1 DAT_01593350; /* 0x1593350 */
extern undefined1 DAT_0159c364; /* 0x159c364 */
extern IMSeqMem *MemSlots_IMSeqMem_descriptor; /* 0xa1091c: the pool InitMemSlots allocates from (DL keeps these pointers in a MEMSLOTS struct, MemSlots) */ /* type set in global_types.tsv */
extern undefined4 _DAT_0050a520; /* direct read */

// ---- functions
namespace idol_draw { void DrawSkyShell(SKY *sky,int shell,Mtx4 mtx); } 
void CullTerrainChunks(undefined4 *param_1,int param_2,int *param_3);
void CullTerrain(int param_1,undefined8 param_2);
