/* the current that pushes things along on water (WaterDrift_Set / _Update; @0xe5aee0) */
typedef struct WaterDrift {
    float baseAngle;         /* 0x00 */
    float angle;             /* 0x04 */
    float angleStep;         /* 0x08  per frame during a turn */
    s16 mode;                /* 0x0c  0 none, 2 and 3 wander */
    s16 state;               /* 0x0e */
    float baseSpeed;         /* 0x10 */
    float speed;             /* 0x14 */
    float speedStep;         /* 0x18 */
    s16 period;              /* 0x1c  frames */
    s16 timer;               /* 0x1e */
} WaterDrift;
typedef char WaterDrift_size_check[sizeof(WaterDrift) == 0x20 ? 1 : -1];
