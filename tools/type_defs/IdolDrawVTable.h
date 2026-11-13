/* the Idol renderer's virtual functions (the vtable @0x661840; its base class @0x661710 has
   them all pure) */
struct IdolDrawVTable {
    void *dtor0;                                                        /* 0x00 */
    void *dtor1;                                                        /* 0x04 */
    void *(*Alloc)(struct IdolDraw *self);                              /* 0x08 */
    void (*unk0c)(void);                                                /* 0x0c */
    void (*unk10)(struct IdolDraw *self, int, int, int);                /* 0x10 */
    void (*SetupPasses)(struct IdolDraw *self);                         /* 0x14  idol_draw::Render_SetupPasses */
    void (*BuildAndFlipFrame)(struct IdolDraw *self);                   /* 0x18  idol_draw::BuildAndFlipFrame */
    void (*unk1c)(void);                                                /* 0x1c */
    void (*SetPerspective)(float fovDeg, float nearZ, float farZ, struct IdolDraw *self); /* 0x20 */
    void (*SetView)(struct IdolDraw *self, struct Mtx4 *view);          /* 0x24 */
    void (*unk28)(struct IdolDraw *self);                               /* 0x28 */
};
