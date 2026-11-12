/* a moby (game object) instance, 0x100 bytes; Ghidra's struct with the two 16-bit enum fields
   (modeBits, oClass) as u16 so the layout matches the binary */
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
    u16 modeBits;                /* 0x34  MobyModeBit flags (16 bits in the binary; a C enum would be 32) */
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
    u16 oClass;                  /* 0xa6  MOBY_OCLASSES */
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
typedef char MobyInstance_size_check[sizeof(struct MobyInstance) == 0x100 ? 1 : -1];
