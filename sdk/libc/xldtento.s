# sdk/libc/xldtento.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

_LDtentox:   # 0x5dc84c, 0xb8 bytes
  05dc84c  cmpwi 7, 4, 0
  05dc850  mflr 0
  05dc854  stdu 1, -160(1)
  05dc858  fmr 13, 1
  05dc85c  std 30, 144(1)
  05dc860  std 31, 152(1)
  05dc864  std 0, 176(1)
  05dc868  mr 31, 4
  05dc86c  mr 30, 5
  05dc870  bt 30, 0x5dc884
  05dc874  lfd 0, -23912(2)
  05dc878  addi 3, 1, 112
  05dc87c  fcmpu 7, 1, 0
  05dc880  bf 30, 0x5dc8a0
  05dc884  ld 0, 176(1)
  05dc888  fmr 1, 13
  05dc88c  ld 30, 144(1)
  05dc890  ld 31, 152(1)
  05dc894  mtlr 0
  05dc898  addi 1, 1, 160
  05dc89c  blr
  05dc8a0  bl 0x5d60b0
  05dc8a4  nop
  05dc8a8  ld 4, 112(1)
  05dc8ac  ld 5, 120(1)
  05dc8b0  extsw 6, 31
  05dc8b4  addi 3, 1, 128
  05dc8b8  bl 0x5d6450
  05dc8bc  nop
  05dc8c0  lwz 0, 128(1)
  05dc8c4  ld 9, 136(1)
  05dc8c8  stw 0, 112(1)
  05dc8cc  clrldi 5, 30, 32
  05dc8d0  ld 3, 112(1)
  05dc8d4  mr 4, 9
  05dc8d8  std 9, 120(1)
  05dc8dc  bl 0x5d6668
  05dc8e0  nop
  05dc8e4  ld 0, 176(1)
  05dc8e8  fmr 13, 1
  05dc8ec  ld 30, 144(1)
  05dc8f0  ld 31, 152(1)
  05dc8f4  mtlr 0
  05dc8f8  addi 1, 1, 160
  05dc8fc  fmr 1, 13
  05dc900  blr

FUN_005dc904:   # 0x5dc904, 0x20 bytes
  05dc904  clrldi 9, 3, 32
  05dc908  divw 0, 4, 5
  05dc90c  mr 3, 9
  05dc910  stw 0, 0(9)
  05dc914  mullw 5, 5, 0
  05dc918  sub 4, 4, 5
  05dc91c  stw 4, 4(9)
  05dc920  blr
