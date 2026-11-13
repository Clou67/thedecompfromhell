/* how an item sits in the vendor preview (0x738b30, 0x30 bytes an item; field names invented) */
struct VendorItemView {
    struct Vec4 rotation;    /* 0x00  z on top of the vendor moby's */
    float offsetX;           /* 0x10 */
    float offsetY;           /* 0x14 */
    float offsetZ;           /* 0x18 */
    float weaponLift;        /* 0x1c  added to z for a weapon (not ammo), twice with UnlockableItems.persuader */
    u8 unk20[0x10];          /* 0x20 */
};
_Static_assert(sizeof(struct VendorItemView) == 0x30, "VendorItemView");
