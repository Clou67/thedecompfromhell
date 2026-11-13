/* a short-lived spinning sprite at a hit (g_ImpactSprites, 32 of them; name invented) */
struct ImpactSprite {
    struct Vec4 pos;    /* 0x00 */
    short timer;        /* 0x10  frames left, from 24; 0 = free */
    short fade;         /* 0x12  rises by 5 a frame, falls by 5 over the last 12 */
    short tex;          /* 0x14  effect texture */
    short _pad16;
    float rot;          /* 0x18 */
    float scale;        /* 0x1c */
};
