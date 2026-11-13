/* a one-colour full-screen effect drawn with the depth test off (DL's ScreenInsertEffect) */
struct ScreenInsertEffect {
    bool enabled;   /* 0x0 */
    u32 color;      /* 0x4 */
    u64 alpha;      /* 0x8  when not 0: GS register 3, masked with 0xff000000ff */
};
