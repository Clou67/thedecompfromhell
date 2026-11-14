/* An extra animation playing on part of a moby's skeleton (MB_AllocAnimLayer; a pool of 6 at
   0xa2c440, linked from MobyInstance.pAnimationLayers). The frame fields mirror the moby's own. */
typedef struct AnimLayer {
    s16 joint;               /* 0x00  the joint the layer starts at */
    u16 jointCount;          /* 0x02 */
    u8 inUse;                /* 0x04 */
    u8 stepped;              /* 0x05  set by MB_UpdateAnimLayer: 1 moved a frame, 3 also wrapped */
    u8 prevFromBuffer;       /* 0x06  build the previous frame into prevFrameData */
    u8 curFromBuffer;        /* 0x07  build the current frame into curFrameData */
    float weight;            /* 0x08  ProcessAnimLayers blends the layer in by this */
    u8 *jointMap;            /* 0x0c */
    void *jointBuf;          /* 0x10  0x1500 bytes */
    struct MobyClass *pClass;     /* 0x14  the moby's class */
    struct MobyClass *animClass;  /* 0x18  the class the animation comes from (set by the caller) */
    struct AnimLayer *next;  /* 0x1c */
    u8 prevFrame;            /* 0x20 */
    u8 curFrame;             /* 0x21 */
    u8 prevSeq;              /* 0x22 */
    u8 curSeq;               /* 0x23 */
    float blend;             /* 0x24  0..1 from prevFrame to curFrame */
    float speed;             /* 0x28 */
    float frameScale;        /* 0x2c  blend per unit of speed */
    u8 _pad30[8];
    void *prevFrameData;     /* 0x38 */
    void *curFrameData;      /* 0x3c */
} AnimLayer;
typedef char AnimLayer_size_check[sizeof(AnimLayer) == 0x40 ? 1 : -1];
