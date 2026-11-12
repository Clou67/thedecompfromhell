/* a moby class (MobyClasses[mClass]); DL's MobyClass with RC1's sequence table at 0x48. Field
   names are Ghidra's / DL's. */
typedef struct MobyClass {
    void *packets;           /* 0x00 */
    u8 pakcet_cnt_0;         /* 0x04  (sic) */
    u8 packet_cnt_1;         /* 0x05 */
    u8 metal_cnt;            /* 0x06 */
    u8 metal_ofs;            /* 0x07 */
    u8 joint_cnt;            /* 0x08 */
    u8 pad;                  /* 0x09 */
    u8 packet_cnt_2;         /* 0x0a */
    u8 team_texs;            /* 0x0b */
    u8 seq_cnt;              /* 0x0c */
    u8 sound_cnt;            /* 0x0d */
    u8 lod_trans;            /* 0x0e */
    u8 shadow;               /* 0x0f */
    u16 *collision;          /* 0x10 */
    void *skeleton;          /* 0x14 */
    void *common_trans;      /* 0x18 */
    void *anim_joints;       /* 0x1c  read as a table of joint data pointers (index joint + 1)
                                    and, for an AnimLayer's animClass, as a byte map at +4 */
    void *gif_usage;         /* 0x20 */
    float gScale;            /* 0x24 */
    void *SoundDefs;         /* 0x28 */
    char bangles;            /* 0x2c */
    char mip_dist;           /* 0x2d */
    s16 corncob;             /* 0x2e */
    BSphere bSphere;         /* 0x30 */
    u32 glow_rgba;           /* 0x40 */
    u16 mode_bits;           /* 0x44  MobyModeBit flags every instance starts with */
    char type;               /* 0x46 */
    char mode_bits2;         /* 0x47 */
    MobySeq *seqs[];         /* 0x48  seq_cnt of them */
} MobyClass;
