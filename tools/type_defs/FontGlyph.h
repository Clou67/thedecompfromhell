/* One character of a Japanese font table: texel position, vertical offset and advance */
struct FontGlyph {
    u8 u;
    u8 v;
    s8 yOff;
    s8 width;
};
