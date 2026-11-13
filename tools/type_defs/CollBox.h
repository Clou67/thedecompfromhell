/* an axis-aligned box, passed by value to the per-vertex outcode tests (outcode bits: 0/1 x
   below min/above max, 8/9 y, 16/17 z) */
typedef struct CollBox {
    Vec4 min;
    Vec4 max;
} CollBox;
