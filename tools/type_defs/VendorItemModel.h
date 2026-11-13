/* an item's second preview part (0x739220, 0x40 bytes an item; field names invented) */
struct VendorItemModel {
    struct Vec4 rotation;    /* 0x00  z is g_VendorSpin */
    struct Vec4 offset;      /* 0x10  added to g_VendorSpinOffset */
    int extraClass;          /* 0x20  oClass of preview moby 2, 0 none */
    u8 unk24[0x1c];
};
_Static_assert(sizeof(struct VendorItemModel) == 0x40, "VendorItemModel");
