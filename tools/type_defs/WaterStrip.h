/* a strip of a special ocean or ice mesh (0x20 bytes) */
typedef struct WaterStrip {
    BSphere bSphere;         /* 0x00 */
    Vec3 *positions;         /* 0x10 */
    Vec2 *uvs;               /* 0x14 */
    Vec3 *normals;           /* 0x18 */
    int count;               /* 0x1c */
} WaterStrip;
typedef char WaterStrip_size_check[sizeof(WaterStrip) == 0x20 ? 1 : -1];
