/* a help message shown for a span of frames by DrawTimedHelpMsg (name invented) */
struct TimedHelpMsg {
    int id;          /* 0x0  help message id; ids below 20790 are one past the string index */
    short x;         /* 0x4 */
    short y;         /* 0x6 */
    short start;     /* 0x8  first frame */
    short duration;  /* 0xa  frames after start */
    short align;     /* 0xc  DrawFancyTextWithBox align */
    short oneLine;   /* 0xe  1: 0x01 line breaks become " - " */
};
