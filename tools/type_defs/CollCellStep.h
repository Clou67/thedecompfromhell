/* the env cells a line crosses, in order (CollLine walks the line through the 4-unit grid):
   the line fraction where it enters the cell, and the cell's grid index. The last entry's t is
   1. CollLine then reuses the list for the line's moby grid cells (as u32 keys). */
typedef struct CollCellStep {
    float t;                 /* 0x00 */
    u8 x;                    /* 0x04 */
    u8 y;                    /* 0x05 */
    u8 z;                    /* 0x06 */
    u8 pad;                  /* 0x07 */
} CollCellStep;
