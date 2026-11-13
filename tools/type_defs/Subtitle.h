/* one line of a cutscene's subtitles (g_SubtitleTable): shown from frame start to stop, with an
   offset from the table's start to its text per language. DL's Subtitle has seven languages. */
struct Subtitle {
    short start;          /* 0x0 */
    short stop;           /* 0x2 */
    short text_ofs[6];    /* 0x4 */
};
