// game/initonce.cpp -- start-up that runs once: memory pools, language, global buffers
// STATUS: CLEAN (checked against the asm; local names are mine)
// 5 functions, 0xd88e4-0xd93a8
//
// Most of InitOnce is the PS2 start-up sequence with its calls stubbed out on PS3 (the STUB_
// functions ignore their arguments); they are kept with the arguments the binary passes.
#include <stdio.h>
#include "game/initonce.h"
#include "game/bloaders.h"
#include "game/boot.h"
#include "game/collproc.h"
#include "game/draw.h"
#include "game/hero.h"
#include "game/hud.h"
#include "game/loaders.h"
#include "game/main.h"
#include "game/map.h"
#include "game/memcard.h"
#include "game/mesh.h"
#include "game/pad.h"
#include "game/pause.h"
#include "game/respawn.h"
#include "game/sUnk.h"
#include "game/sound.h"
#include "game/space.h"
#include "game/update/moby998.h"
#include "game/vuchain.h"
#include "idol/fastfunc.h"
#include "idol/idol.h"
#include "idol/idol_draw.h"
#include "idol/mUnk.h"
#include "sdk/fios.h"
#include "sdk/sce.h"

#define MEMSLOTS_SIZE 0xec4080

enum {                      /* g_pHWSystem->region (+0xc0) */
    REGION_US = 0,
    REGION_EU = 1,
    REGION_JP = 3,
};
enum {                      /* the system language, CELL_SYSUTIL_LANG_* */
    SYS_LANG_ENGLISH_US = 1,
    SYS_LANG_FRENCH = 2,
    SYS_LANG_SPANISH = 3,
    SYS_LANG_GERMAN = 4,
    SYS_LANG_ITALIAN = 5,
};

static inline void *Alloc(void *heap, int size, int align)
{
    return (void *)idol::AllocateMemAlign((int)heap, size, align);
}

static inline void SetEnglish(void)
{
    g_Language = LANG_ENGLISH;
    DAT_0159c350 = 0;
    g_JapaneseMode = false;
}

// 0x00d88e4 (0x14 bytes)
void SECTION_HEADER_INITONCE(void)
{
    DAT_00724610 = 0x10000;
}

// 0x00d88f8 (0x4 bytes)
void STUB_000d88f8(...)
{
}

// 0x00d88fc (0xd4 bytes)
/* unused PS2 leftover: start something with (a, b), wait for it, 1 if it returned >= 0 */
int InitOnce_RunSysCallWait(int a, int b)
{
    int args[4];
    int ok = 1;

    int h = FUN_005031a8(b);
    args[0] = a;
    args[1] = h;
    args[2] = b;
    args[3] = 0;
    int t = FUN_005031bc(args, 1);
    if (t != 0) {
        while (FUN_0050315c_RET_0(t) >= 0) {}
        int r = FUN_00503164(h, 0, 0);
        FUN_00503214(h);
        ok = r >= 0;
    }
    return ok;
}

// 0x00d89d0 (0x218 bytes)
/* the big pool for level data, then the fixed buffers carved from its start */
void InitMemSlots(void)
{
    void *game = g_pGame;

    if (!g_MemSlotsCreated) {
        void *heap = FUN_0050436c(game);
        IMSeqMem *pool = (IMSeqMem *)FUN_004fe27c(sizeof(IMSeqMem), heap, 16);   /* operator new */
        if (pool) {
            pool->unk00[0] = pool->unk00[1] = pool->unk00[2] = pool->unk00[3] = 0;
            pool->unk10 = 0;
            pool->unk11 = 0;
            pool->unk14 = 0;
            pool->unk1c = 0;
            pool->vtable = &DAT_0066173c;
            pool->unk20 = 0;
        }
        MemSlots_IMSeqMem_descriptor = pool;
        void *mem = Alloc(heap, MEMSLOTS_SIZE, 16);
        FUN_004fe39c(pool, mem, MEMSLOTS_SIZE, "MemSlots", 0, FUN_0050436c(game));
        g_MemSlotsCreated = true;
    }
    IMSeqMem *pool = MemSlots_IMSeqMem_descriptor;
    FUN_004fe61c(pool, pool->unk00[0]);       /* reset */
    g_MemSlotsBase = FUN_004fe5ec(pool);
    g_HudBuffer = (u8 *)Alloc(pool, 0x64000, 128);
    g_MobyClassBuffer = (u8 *)Alloc(pool, 0x60000, 128);
    g_GameplayBuffer = (u8 *)Alloc(pool, 0x200000, 128);
    Gameplay = (u32)g_GameplayBuffer;
    g_NpcBuffer = (u32)Alloc(pool, 0x800000, 128);
    DAT_00a1090c = (u32)Alloc(pool, 0x100000, 128);
    DAT_00a10910 = (u32)Alloc(pool, 0x100000, 128);
    DAT_00a10914 = (u32)Alloc(pool, 0x100000, 128);
}

// 0x00d8be8 (0x7c0 bytes)
void InitOnce(void)
{
    void *game = g_pGame;
    u64 image;

    if (!g_HasInited) return;               /* (sic: set means "not yet") */
    g_HasInited = 0;

    STUB_00503080();
    STUB_00503070(1);
    STUB_005031a4(1);
    STUB_0050321c(0);
    STUB_00503114();
    STUB_00503218();
    STUB_00503118();
    STUB_005031fc(6);
    STUB_005031f8(0);
    STUB_00503204();
    cellSysutilCheckCallback();
    STUB_0050307c(0, 11, Cutscene == 0 ? 12 : 13, 9);
    STUB_000e9138();
    ResetFrameBufferInfo();
    STUB_00174bd8(&DAT_00a10690);
    STUB_004d04c8();
    u32 iopTop = 0x10000000 - (DAT_010ea104 << 11);
    STUB_004d04c0(DAT_010ea100, DAT_010ea104, iopTop);
    cellSysutilCheckCallback();
    FlushCache(0);
    STUB_000e9150(iopTop, &DAT_00cd4000);
    FlushCache(0);
    printf("loaded irx modules\n");
    STUB_005031f8(0);
    pad_Init();
    STUB_00503208((void *)Respawn_IncCounter);
    DAT_00e5aa64 = 0x160000;
    InitMemSlots();
    STUB_005031f8(0);
    cellSysutilCheckCallback();
    STUB_004d04d0(Level);
    InitViewContext();
    UpdateViewContext();
    VU1_initChain();
    STUB_005031f8(0);
    sound_Init();
    FastMemSet(&g_CollMobyJointCache, 0x80808080, 0x100);
    sceGsSetDefLoadImage(&image, 0x3ffb, 1, 18, 0, 0, 8, 8);
    FlushCache(0);
    sceGsExecLoadImage(&image, &g_CollMobyJointCache);
    sceGsSyncPath(0, 0);
    LoadDebugFont();
    *DAT_00927204 = 130;
    *g_pFrameTicks = 0;
    STUB_001655a0();
    InitAlphaPal();
    cellSysutilCheckCallback();

    /* language from the system setting; each region allows its own set */
    typedef int (*GetLanguageFn)(void *);
    int lang = ((GetLanguageFn)(*(void ***)game)[3])(game);
    int region = *(int *)((u8 *)g_pHWSystem + 0xc0);
    if (region == REGION_EU) {
        switch (lang) {
        case SYS_LANG_ITALIAN: g_Language = LANG_ITALIAN; break;
        case SYS_LANG_GERMAN:  g_Language = LANG_GERMAN; break;
        case SYS_LANG_SPANISH: g_Language = LANG_SPANISH; break;
        case SYS_LANG_FRENCH:  g_Language = LANG_FRENCH; break;
        default:
            if (lang != SYS_LANG_ENGLISH_US) printf("Unsupported language.  Going to English\n");
            SetEnglish();
            break;
        }
    }
    if (region == REGION_US) {
        switch (lang) {
        case SYS_LANG_FRENCH:  g_Language = LANG_FRENCH; break;
        case SYS_LANG_SPANISH: g_Language = LANG_SPANISH; break;
        default:
            if (lang != SYS_LANG_ENGLISH_US) printf("Unsupported language.  Going to English\n");
            SetEnglish();
            break;
        }
    }
    if (region == REGION_JP) {
        g_Language = LANG_JAPANESE;
        DAT_0159c350 = 0;
        g_JapaneseMode = true;
    }
    cellSysutilCheckCallback();

    void *heap2 = (u8 *)game + 0x7c;
    g_pLocaleBuffer = (int *)Alloc(FUN_0050436c(game), 0x40000, 128);
    DAT_00a10920 = (u32)Alloc(FUN_0050436c(game), 0x300000, 128);
    SaveDataPtr = (char *)Alloc(FUN_0050436c(game), 0x300000, 128);
    DAT_00a10924 = (u32)Alloc(heap2, 0x300000, 128);
    g_FontVram = (u8 *)Alloc(heap2, 0x100000, 128);
    DAT_00a2080c = 0;
    DAT_00a20810 = (u32)Alloc(heap2, 0x300000, 128);
    DAT_00a20814 = (u32)Alloc(heap2, 0x40000, 128);
    DAT_00a20818 = 0;
    DAT_00a2081c = 0;
    g_MapRevealMask = (int)Alloc(FUN_0050436c(game), 0x8000, 32);
    g_totalBoltsCollected = 0;
    DAT_0096ca08 = 0;
    FUN_00508578(&TEX_BASE, FUN_0050436c(game), heap2);
    memcard_InitSaveMsg();
    InitMenuTextIds();
}
