/* a HUD icon (IconTableEntry, ends with iconId 0xffff) */
typedef struct IconTableEntries {
    u16 iconId;              /* 0x00 */
    u16 frameCnt;            /* 0x02 */
    u16 firstFrame;          /* 0x04  texture frame (GetIconFrameTex) */
    u8 animMode;             /* 0x06  HudIconAnim.mode */
    u8 frameTime;            /* 0x07  frames per animation frame */
} IconTableEntries;
