/* how preview moby 3 (the selected item again) sits (0x739b50, 0x30 bytes an item; names invented) */
struct VendorCopyView {
    struct Vec4 localOffset; /* 0x00  along the moby's own axes, after its transform */
    struct Vec4 rotation;    /* 0x10  z is g_VendorSpin */
    struct Vec4 offset;      /* 0x20  added to g_VendorSpinOffset */
};
_Static_assert(sizeof(struct VendorCopyView) == 0x30, "VendorCopyView");
