/* where a vendor screen part sits between its three joints (0x73a57c, 0x10 bytes a part; names
   invented) */
struct VendorScreenPart {
    float offsetA;           /* 0x00  along joint 0 -> 1 */
    float offsetB;           /* 0x04  along joint 0 -> 2 */
    float insetA;            /* 0x08  taken off both ends */
    float insetB;            /* 0x0c */
};
