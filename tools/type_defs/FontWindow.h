/* a text window for the font printers: SetFontWindow (0x6ac90) fills it, FontPrintOpt and friends
   print into it. 0x18 bytes (callers keep the next local at +0x18). */
struct FontWindow {
    short win_top;           /* 0x00 */
    short win_bot;           /* 0x02 */
    short win_left;          /* 0x04 */
    short win_right;         /* 0x06 */
    short text_x;            /* 0x08 */
    short text_y;            /* 0x0a */
    short max_width;         /* 0x0c  out: width of the printed text */
    short max_height;        /* 0x0e  out: height of the printed text */
    short line_spacing;      /* 0x10 */
    short flags;             /* 0x12  FONT_MEASURE: only measure; others unknown */
    short sub_pixel_x;       /* 0x14 */
    short sub_pixel_y;       /* 0x16 */
};
typedef char FontWindow_size_check[sizeof(struct FontWindow) == 0x18 ? 1 : -1];
