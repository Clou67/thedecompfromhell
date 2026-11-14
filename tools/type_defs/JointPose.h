/* a joint's pose (64 bytes a joint in the pose buffers) */
typedef struct JointPose {
    Vec4 rot;                /* 0x00  quaternion */
    float scale[3];          /* 0x10 */
    int changed;             /* 0x1c  set: the joint is posed this frame */
    float trans[3];          /* 0x20 */
    u32 parent;              /* 0x2c  the parent joint's byte offset (index * 64), 0 = root */
    Vec4 unk30;
} JointPose;
typedef char JointPose_size_check[sizeof(JointPose) == 0x40 ? 1 : -1];
