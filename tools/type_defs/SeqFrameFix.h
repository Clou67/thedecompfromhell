/* Ratchet's animation fix-ups for widescreen: add `add` to the frames [startFrame, endFrame)
   of sequence seq (table at 0x724864) */
typedef struct SeqFrameFix {
    int seq;
    int add;
    u32 startFrame;
    u32 endFrame;
} SeqFrameFix;
