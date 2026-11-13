/* a full-screen colour effect (DL's ScreenVBEffect, same layout): a background colour, then
   alternating bands of A_lines and B_lines lines in A_color and B_color. Each alpha, when not 0,
   is masked with 0xff000000ff and written to GS register 3. */
struct ScreenVBEffect {
    bool enabled;       /* 0x00 */
    u32 BKG_color;      /* 0x04 */
    u64 BKG_alpha;      /* 0x08 */
    int A_lines;        /* 0x10 */
    u32 A_color;        /* 0x14 */
    u64 A_alpha;        /* 0x18 */
    int B_lines;        /* 0x20 */
    u32 B_color;        /* 0x24 */
    u64 B_alpha;        /* 0x28 */
};
