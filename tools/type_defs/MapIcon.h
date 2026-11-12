/* a map icon (g_MapIconTables[level]; the list ends with an entry that has MAPICON_END) */
struct MapIcon {
    short target;            /* 0x00  index into g_MissionTargets / g_MissionMobys; < 0: fixed spot */
    short mission;           /* 0x02  index into the level's missions, -1 = always */
    u16 flags;               /* 0x04  MAPICON_* */
    u8 _pad06[4];
    short label;             /* 0x0a  has a text label */
    short unk0c;
    short labelW;            /* 0x0e  label box size, fitted by UpdateMissionDisplay */
    short labelH;            /* 0x10 */
    u8 _pad12[6];
    float u;                 /* 0x18  map coordinates */
    float v;                 /* 0x1c */
    float rot;               /* 0x20 */
    int visible;             /* 0x24 */
};
typedef char MapIcon_size_check[sizeof(struct MapIcon) == 0x28 ? 1 : -1];

