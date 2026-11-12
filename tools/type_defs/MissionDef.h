/* one mission of a level's mission list (g_MissionDefs[level], ends with textId 0) */
struct MissionDef {
    short textId;            /* 0x00  StringId; 0 ends the list */
    short condType;          /* 0x02  MissionCondType: shown when this holds ... */
    int condArg;             /* 0x04 */
    short doneType;          /* 0x08  ... and done when this holds */
    short _pad0a;
    int doneArg;             /* 0x0c */
    u16 flags;               /* 0x10  MISSION_* */
    short descBase;          /* 0x12  description StringId for step 0 */
    short stepText[4];       /* 0x14  StringId per step */
    int (*stepFunc)(int);    /* 0x1c  current step, or 0 */
    int stepArg;             /* 0x20 */
    short status;            /* 0x24  MISSION_HIDDEN / OPEN / DONE */
    short step;              /* 0x26 */
};
typedef char MissionDef_size_check[sizeof(struct MissionDef) == 0x28 ? 1 : -1];

/* a mission object's last known map position and state (save data, @0x96c24c) */
struct MissionTarget {
    float x;                 /* 0x0 */
    float y;                 /* 0x4 */
    float rot;               /* 0x8 */
    int state;               /* 0xc  0 = not reached; bit 0 shows MAPICON_NEEDS_TARGET icons; >= 2 done */
};
