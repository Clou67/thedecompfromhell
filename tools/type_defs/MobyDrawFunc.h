/* a function in one of draw's registered-draw lists, called with the moby it was registered
   with (DL: RegisterDrawFunction's void (*)(MobyInstance *)) */
typedef void (*MobyDrawFunc)(struct MobyInstance *);
