/* a sky sprite (sun, moons, ...) (DL: sky_sprite, same layout); RaC1's SKY keeps the list at +0x10,
   the field Ghidra named tex_defs */
struct sky_sprite {
    char type;               /* 0x00  0: drawn at 0.5 scale, else 0.4 */
    char drawn;              /* 0x01 */
    char tex;                /* 0x02 */
    char gs_alpha;           /* 0x03  blend mode for idol_draw::DrawDepth, 0 = none */
    int rgba;                /* 0x04 */
    float rot;               /* 0x08 */
    int user;                /* 0x0c */
    struct Vec4 pos;         /* 0x10  relative to the camera */
};
typedef char sky_sprite_size_check[sizeof(struct sky_sprite) == 0x20 ? 1 : -1];
