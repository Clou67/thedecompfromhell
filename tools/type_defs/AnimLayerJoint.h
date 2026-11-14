/* an AnimLayer's joint entry (48 bytes, in its jointBuf) */
typedef struct AnimLayerJoint {
    Vec4 rot;                /* 0x00 */
    float scale[3];          /* 0x10 */
    int changed;             /* 0x1c */
    float trans[3];          /* 0x20 */
    int joint;               /* 0x2c  the joint it poses */
} AnimLayerJoint;
typedef char AnimLayerJoint_size_check[sizeof(AnimLayerJoint) == 0x30 ? 1 : -1];
