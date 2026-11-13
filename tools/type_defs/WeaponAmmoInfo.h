/* an item's prices and ammo (0x737d30, 0x18 bytes an item, read through VendorAmmoInfo; field
   names invented from use in vendor.cpp) */
struct WeaponAmmoInfo {
    int price;               /* 0x00 */
    int priceAlt;            /* 0x04  the price while UnlockableItems.persuader is set */
    u16 ammoPrice;           /* 0x08  bolts per unit of ammo at a vendor; 0: the item uses no ammo */
    u16 pdaAmmoPrice;        /* 0x0a  the same through the PDA */
    u16 unk0c;               /* 0x0c */
    u16 maxAmmo;             /* 0x0e */
    u8 unk10[8];             /* 0x10 */
};
_Static_assert(sizeof(struct WeaponAmmoInfo) == 0x18, "WeaponAmmoInfo");
