/* four rows of points drawn by DrawColorGradientStrip as coloured ribbons (name and layout from
   its use) */
struct GradientStrip {
    int total;          /* 0x00  the gradient's length */
    int mid;            /* 0x04  where it is colorB (colorA at 0 and at total) */
    int *rowPos;        /* 0x08  each row's place on the gradient */
    u32 colorA;         /* 0x0c */
    u32 colorB;         /* 0x10 */
    int columns;        /* 0x14 */
    struct Vec4 *points;/* 0x18  rows * columns */
    float uStep;        /* 0x1c */
    float uStart;       /* 0x20 */
};
