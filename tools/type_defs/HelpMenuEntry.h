/* an entry of the pause menu's help list (@0x72b330, 151 of them, 0 msg ends the list) */
typedef struct HelpMenuEntry {
    u16 msg;                 /* 0x00  StringId */
    u16 enabled;             /* 0x02 */
    u8 _pad04[8];
} HelpMenuEntry;
typedef char HelpMenuEntry_size_check[sizeof(HelpMenuEntry) == 0xc ? 1 : -1];
