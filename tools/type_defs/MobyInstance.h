/* a moby (game object) instance, 0x100 bytes; Ghidra's struct with the two 16-bit enum fields
   (modeBits, oClass) as u16 so the layout matches the binary */
struct MobyInstance {
    struct BSphere bSphere;
    struct Vec4 pos;
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
    u16 modeBits;                /* 0x34  MobyModeBit flags (16 bits in the binary; a C enum would be 32) */
    ushort occlIndex;
    union {
        struct {
            uint color;          /* 0x38 */
            uint light;          /* 0x3c */
        };
        u64 freeTime;            /* 0x38  while the slot is free: worldUpdateTime it can be reused at */
    };
    struct Vec4 rotation;
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
    char unk71;
    char unk72;
    char field46_0x73;
    void *pUpdate;
    void *pVar;
    char soundDesired;           /* 0x7c  the sound the current sequence loops, -1 none (DL name) */
    char soundChannel;           /* 0x7d  its channel, -1 none (DL name) */
    char trigsCnt;               /* 0x7e  the current sequence's trigsCnt */
    char shadow;
    int colorManipulator;
    int unk84;
    int unk88;
    char field56_0x8c;
    char field57_0x8d;
    char field58_0x8e;
    char field59_0x8f;
    uint glowRgba;               /* 0x90  from MobyClass.glow_rgba */
    ushort *collision;
    float *collisionMesh;
    int collQueryStamp; /* = CollOutput.collCount of last coll query that tested this moby */
    union {
        uint collCount;
        struct {
            s8 gridMinX;         /* 0xa0  the moby grid cells it is in (DL grid_min_x...) */
            s8 gridMinY;
            s8 gridMaxX;
            s8 gridMaxY;
        };
    };
    s8 damage;
    char previousAnimationId;
    u16 oClass;                  /* 0xa6  MOBY_OCLASSES */
    int handle;                  /* 0xa8  index << 16 (guess) */
    uint index;                  /* 0xac  slot in g_MobyInstance */
    char levelFlagIdx;
    char field74_0xb1;
    ushort uid;
    char field76_0xb4;
    char field77_0xb5;
    char field78_0xb6;
    char field79_0xb7;
    struct MobyInstance *field80_0xb8; /* Type 'Moby *' was deleted */
    char setByGroup;
    char unkbd;
    char field83_0xbe;
    char field84_0xbf;
    struct Mtx4 transform;
};
typedef char MobyInstance_size_check[sizeof(struct MobyInstance) == 0x100 ? 1 : -1];
