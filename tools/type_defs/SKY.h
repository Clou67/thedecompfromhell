/* the level's sky as the game draws it (Sky, set up by Idol); Ghidra's SKY with the sprite list
   and the texture base corrected from how skyfunc / skyproc use them */
struct SKY {
    int pad;                 /* 0x00 */
    short clear_screen;      /* 0x04 */
    u16 shell_cnt;           /* 0x06 */
    u16 sprite_cnt;          /* 0x08 */
    short sprite_max;        /* 0x0a */
    int texBase;             /* 0x0c  EffectTex index of the sky's first texture */
    struct sky_sprite *sprites; /* 0x10 */
    void *vtx_data;          /* 0x14 */
    void *idx_data;          /* 0x18 */
    void *shells[8];         /* 0x1c */
};
