/* an item's entry in the item table at 0x721000 (0x4c bytes an item; only what vendor.cpp reads
   is named, names invented) */
struct GadgetInfo {
    StringId name;           /* 0x00 */
    u8 unk04[0xc];
    int oClass;              /* 0x10  its model */
    u8 unk14[0x14];
    u16 icon;                /* 0x28  icon frame (GetIconFrameTex) */
    u8 unk2a[0x22];
};
_Static_assert(sizeof(struct GadgetInfo) == 0x4c, "GadgetInfo");
