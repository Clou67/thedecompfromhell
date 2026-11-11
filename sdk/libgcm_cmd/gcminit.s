# sdk/libgcm_cmd/gcminit.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

cellGcmCallbackForSnc:   # 0x50efcc, 0x40 bytes
  050efcc  mr 9, 3
  050efd0  mflr 0
  050efd4  stdu 1, -112(1)
  050efd8  std 0, 128(1)
  050efdc  lwz 11, 12(9)
  050efe0  lwz 0, 0(11)
  050efe4  std 2, 40(1)
  050efe8  mtctr 0
  050efec  lwz 2, 4(11)
  050eff0  bctrl
  050eff4  ld 2, 40(1)
  050eff8  ld 0, 128(1)
  050effc  extsw 3, 3
  050f000  mtlr 0
  050f004  addi 1, 1, 112
  050f008  blr

FUN_0050f00c:   # 0x50f00c, 0x28 bytes
  050f00c  lwz 3, -31260(2)
  050f010  mflr 0
  050f014  stdu 1, -112(1)
  050f018  std 0, 128(1)
  050f01c  bl 0x64f2c4
  050f020  ld 2, 40(1)
  050f024  ld 0, 128(1)
  050f028  addi 1, 1, 112
  050f02c  mtlr 0
  050f030  blr

cellGcmInit:   # 0x50f034, 0x40 bytes
  050f034  stdu 1, -112(1)
  050f038  mflr 0
  050f03c  mr 9, 4
  050f040  std 0, 128(1)
  050f044  mr 0, 3
  050f048  lwz 3, -31260(2)
  050f04c  mr 6, 5
  050f050  mr 4, 0
  050f054  mr 5, 9
  050f058  bl 0x64f264
  050f05c  ld 2, 40(1)
  050f060  ld 0, 128(1)
  050f064  extsw 3, 3
  050f068  mtlr 0
  050f06c  addi 1, 1, 112
  050f070  blr
