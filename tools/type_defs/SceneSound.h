/* an ambient sound of the title scene (@0x71cb5c, ends with start == -1) */
typedef struct SceneSound {
    int start;               /* scene frame it starts at */
    int end;                 /* and stops after; -1 plays to the end of the loop */
    int sound;
    int handle;              /* the playing channel, -1 none */
} SceneSound;
