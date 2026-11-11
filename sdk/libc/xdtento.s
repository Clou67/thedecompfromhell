# sdk/libc/xdtento.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

_Dtentox:   # 0x5d5f5c, 0xb0 bytes
  05d5f5c  cmpwi 7, 4, 0
  05d5f60  mflr 0
  05d5f64  stdu 1, -160(1)
  05d5f68  fmr 13, 1
  05d5f6c  std 30, 144(1)
  05d5f70  std 31, 152(1)
  05d5f74  std 0, 176(1)
  05d5f78  mr 31, 4
  05d5f7c  mr 30, 5
  05d5f80  bt 30, 0x5d5f94
  05d5f84  lfd 0, -24120(2)
  05d5f88  addi 3, 1, 112
  05d5f8c  fcmpu 7, 1, 0
  05d5f90  bf 30, 0x5d5fb0
  05d5f94  ld 0, 176(1)
  05d5f98  fmr 1, 13
  05d5f9c  ld 30, 144(1)
  05d5fa0  ld 31, 152(1)
  05d5fa4  mtlr 0
  05d5fa8  addi 1, 1, 160
  05d5fac  blr
  05d5fb0  bl 0x5d60b0
  05d5fb4  nop
  05d5fb8  ld 4, 112(1)
  05d5fbc  ld 5, 120(1)
  05d5fc0  extsw 6, 31
  05d5fc4  addi 3, 1, 128
  05d5fc8  bl 0x5d6450
  05d5fcc  nop
  05d5fd0  lwz 0, 128(1)
  05d5fd4  ld 9, 136(1)
  05d5fd8  stw 0, 112(1)
  05d5fdc  clrldi 5, 30, 32
  05d5fe0  ld 3, 112(1)
  05d5fe4  mr 4, 9
  05d5fe8  std 9, 120(1)
  05d5fec  bl 0x5d6668
  05d5ff0  nop
  05d5ff4  ld 0, 176(1)
  05d5ff8  ld 30, 144(1)
  05d5ffc  ld 31, 152(1)
  05d6000  mtlr 0
  05d6004  addi 1, 1, 160
  05d6008  blr
