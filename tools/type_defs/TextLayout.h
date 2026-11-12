/* a text box for the font printers (FontPrintMediumOpt, FontPrintOptWestern); built on the stack
   by the callers. Field names are guesses from DrawDialogText. */
typedef struct TextLayout {
    short top;              /* 0x00 */
    short bottom;           /* 0x02 */
    short left;             /* 0x04 */
    short right;            /* 0x06 */
    short x;                /* 0x08  text anchor (256 = screen centre) */
    short y;                /* 0x0a */
    short unk0C;            /* 0x0c */
    short height;           /* 0x0e  out: height of the text */
    short lineHeight;       /* 0x10 */
    short flags;            /* 0x12  4: only measure (fills in height); others unknown */
    short unk14;            /* 0x14 */
    short unk16;            /* 0x16 */
} TextLayout;
typedef char TextLayout_size_check[sizeof(TextLayout) == 0x18 ? 1 : -1];
