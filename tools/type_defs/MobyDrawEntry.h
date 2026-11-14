/* a moby queued for drawing with its skeleton (MB_BuildDrawEntry fills it, MB_DrawEntries builds
   its joint matrices); 0xb0 bytes. Only what this code reads is named. */
typedef struct MobyDrawEntry {
    Mtx4 world;              /* 0x00 */
    Vec4 unk40;              /* 0x40 */
    u16 unk50;               /* 0x50 */
    u16 unk52;               /* 0x52 */
    u16 unk54;               /* 0x54 */
    u8 _pad56[2];
    float scale;             /* 0x58 */
    u32 unk5c;               /* 0x5c */
    void *unk60;             /* 0x60 */
    Mtx4 *jointMats;         /* 0x64  jointCount of them (or one, identity, with no joints) */
    u32 jointCount;          /* 0x68 */
    u32 lights[2];           /* 0x6c  the moby's colour/light words */
    float unk74;             /* 0x74 */
    float blend;             /* 0x78  between from and to */
    AnimLayer *layers;       /* 0x7c */
    Manipulator *manipulators; /* 0x80 */
    Vec4 *bindTrans;         /* 0x84  MobyClass.common_trans */
    Mtx4 *bindMats;          /* 0x88  MobyClass.skeleton: applied last to each joint matrix */
    MobyFrame *from;         /* 0x8c */
    MobyFrame *to;           /* 0x90 */
    u8 linearRot;            /* 0x94  the frames are neighbours: rotations blended plainly */
    u8 unk95;                /* 0x95 */
    s16 unk96;               /* 0x96 */
    float unk98;             /* 0x98 */
    float unk9c;             /* 0x9c */
    MobyInstance *moby;      /* 0xa0 */
    u8 _padA4[12];
} MobyDrawEntry;
typedef char MobyDrawEntry_size_check[sizeof(MobyDrawEntry) == 0xb0 ? 1 : -1];
