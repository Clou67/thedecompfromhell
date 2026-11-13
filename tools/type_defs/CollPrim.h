/* a moby collision primitive (32 bytes, after the 16-byte MobyCollHeader), in 1/1024 units of
   the moby's scale */
enum CollPrimType {
    COLLPRIM_SPHERE   = 0,
    COLLPRIM_SPHERE2  = 1,
    COLLPRIM_JOINT    = 2,   /* a sphere that follows a joint */
    COLLPRIM_PILL     = 3,   /* offset plus a vertical length */
    COLLPRIM_CAPSULE  = 4,   /* between two joints */
};
typedef struct CollPrim {
    u8 collType;             /* 0x00  the type the collision queries switch on (0 and 4+ are
                                      capsules there) */
    u8 _pad01;
    union {
        s16 sets;            /* 0x02  bit 0: in the primSetB set, bit 1: in primSetA */
        struct {
            u8 _setsHi;
            u8 type;         /* 0x03  CollPrimType, as MB_GetCollPrimWorld reads it */
        };
    };
    union {
        float length;        /* 0x04  COLLPRIM_PILL */
        int joint;           /* 0x04  COLLPRIM_JOINT */
        struct {
            s16 jointA;      /* 0x04  COLLPRIM_CAPSULE */
            s16 jointB;      /* 0x06 */
        } ends;
    };
    u8 _pad08[4];
    float radius;            /* 0x0c  COLLPRIM_JOINT and COLLPRIM_CAPSULE */
    Vec4 offset;             /* 0x10  xyz offset, w radius */
} CollPrim;
typedef char CollPrim_size_check[sizeof(CollPrim) == 0x20 ? 1 : -1];
