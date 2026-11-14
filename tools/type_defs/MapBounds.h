/* a level's map corners (0x724af0, 0x20 bytes a level): two world points and where they are on
   the map image (field names invented) */
struct MapBounds {
    float worldX0;           /* 0x00 */
    float worldY0;           /* 0x04 */
    float worldX1;           /* 0x08 */
    float worldY1;           /* 0x0c */
    float mapU0;             /* 0x10 */
    float mapV0;             /* 0x14 */
    float mapU1;             /* 0x18 */
    float mapV1;             /* 0x1c */
};
_Static_assert(sizeof(struct MapBounds) == 0x20, "MapBounds");
