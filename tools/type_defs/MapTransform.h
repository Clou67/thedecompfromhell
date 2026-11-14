/* world -> map per level (0x724d50, 0x10 bytes), worked out from MapBounds: u = offsetU + x * scaleU */
struct MapTransform {
    float offsetU;           /* 0x00 */
    float scaleU;            /* 0x04 */
    float offsetV;           /* 0x08 */
    float scaleV;            /* 0x0c */
};
_Static_assert(sizeof(struct MapTransform) == 0x10, "MapTransform");
