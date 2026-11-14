/* an animated HUD icon (IconTableEntry index, its animation mode and frame) */
typedef struct HudIconAnim {
    s16 iconIdx;             /* 0x00 */
    u8 mode;                 /* 0x02  0 still, 1 loop, 2 ping-pong, 3 ping-pong now and then */
    u8 _pad03;
    int frame;               /* 0x04  the texture frame now */
    s16 offsX;               /* 0x08 */
    s16 offsY;               /* 0x0a */
    int startTime;           /* 0x0c  worldUpdateTime the animation counts from */
} HudIconAnim;

/* a HUD entry: 13 of them at HudEntries, 0x90 bytes. The reg* half is what RegisterHUDCallback
   was given; HudEntry_Reset copies it into the live half. */
typedef struct HudElement {
    int iconId;              /* 0x00 */
    u32 flags;               /* 0x04  HUD_* (0x20: reset when registered...) */
    int maxValue;            /* 0x08 */
    int *pValue;             /* 0x0c  the value shown */
    void *initCb;            /* 0x10  called with the entry (function descriptors) */
    void *updateCb;          /* 0x14 */
    void *drawCb;            /* 0x18 */
    int unk1c;               /* 0x1c */
    int regIconId;           /* 0x20 */
    u32 regFlags;            /* 0x24 */
    int regMaxValue;         /* 0x28 */
    int *regPValue;          /* 0x2c */
    void *regInitCb;         /* 0x30 */
    void *regUpdateCb;       /* 0x34 */
    void *regDrawCb;         /* 0x38 */
    int unk3c;               /* 0x3c */
    HudIconAnim icon;        /* 0x40  (offsX/offsY inside it) */
    int x;                   /* 0x50 */
    int y;                   /* 0x54 */
    int width;               /* 0x58 */
    int height;              /* 0x5c */
    u32 alignFlags;          /* 0x60  1 top, 2 bottom, 4 left, 8 right (else centred) */
    int id;                  /* 0x64  RegisterHUDCallback's handle, -1 free */
    int locked;              /* 0x68  1 right after registering: flags set by id stay pending */
    int slideTime;           /* 0x6c  slide step: counts up from -6 (in at 0..23), 1 while hiding */
    u8 animA;                /* 0x70  fade/grow steps up to animationSpeed * 8.5, then animB */
    u8 animB;                /* 0x71 */
    u8 unk72;                /* 0x72 */
    u8 countAcc;             /* 0x73  counting speed accumulator */
    int displayedValue;      /* 0x74 */
    int targetValue;         /* 0x78 */
    int showTimer;           /* 0x7c  frames left on screen; also picks the slide curve */
    void *data;              /* 0x80  per-entry data (HealthHud: a HudPulse) */
    u8 unk84[12];            /* 0x84 */
} HudElement;
typedef char HudElement_size_check[sizeof(HudElement) == 0x90 ? 1 : -1];

/* one quick select slot; the neighbours are slot indices for the d-pad */
typedef struct QuickSelectSlot {
    u32 iconId;              /* 0x00  the item's HUD icon */
    int unk04;               /* 0x04 */
    int up;                  /* 0x08  pad 0x8000 */
    int right;               /* 0x0c  pad 0x2000 */
    int down;                /* 0x10  pad 0x1000 */
    int left;                /* 0x14  pad 0x4000 */
    int item;                /* 0x18  0 = empty */
} QuickSelectSlot; // 0x1c

/* a slow throb: value climbs to 0xfff and back with speed (+-60) pushed by accel (+-1) */
typedef struct HudPulse {
    s16 tick;                /* 0x00  0..59 */
    s16 value;               /* 0x02  0..0xfff */
    s16 speed;               /* 0x04 */
    s16 accel;               /* 0x06 */
} HudPulse;

/* UnusedIconHud's data: an icon whose level steps through 3-frame groups, with a cross fade */
typedef struct HudLevelIcon {
    int value;               /* 0x00  the level being faded */
    int fadeOut;             /* 0x04  0x80 down by g_HudLevelFadeStep */
    int fadeIn;              /* 0x08 */
    int phase;               /* 0x0c  the glow, up by g_HudLevelPhaseStep */
} HudLevelIcon;
