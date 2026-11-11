struct PL_Data {               /* PointLightData[8] @ 0xa1e100, 0x30 bytes: what one point light is attached to */
    short tieOffset;           /* 0x00  ranges into list[] */
    short tieCnt;
    short shrubOffset;         /* 0x04 */
    short shrubCnt;
    short tfragOffset;         /* 0x08 */
    short tfragCnt;
    short *list;               /* 0x0c  -> PointLightLists[i]: tie, tfrag then shrub indices */
    int state;                 /* 0x10  enum PointLightState */
    int pad[3];                /* 0x14 */
    struct Vec4 lastPos;       /* 0x20  light position the lists were last built at */
};
