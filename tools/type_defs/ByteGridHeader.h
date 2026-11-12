/* header of the level's byte grid (LoadByteGrid); the rows of bytes follow */
typedef struct ByteGridHeader {
    int stride;              /* 0x00  bytes per row */
    int rows;                /* 0x04 */
    float min;               /* 0x08  value of byte 0 */
    float max;               /* 0x0c  value of byte 255 */
} ByteGridHeader;
