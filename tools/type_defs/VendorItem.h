/* one item on the vendor's list (g_VendorItems, 16 of them; layout from use) */
struct VendorItem {
    int item;           /* 0x0  item id */
    u8 isAmmo;          /* 0x4  1: ammo for the weapon, not the weapon */
    u8 unk5;            /* 0x5 */
    u8 _pad6[6];
    int price;          /* 0xc  from the item info table */
};
