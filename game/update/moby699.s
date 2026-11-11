# game/update/moby699.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

UpdateMoby_699:   # 0x427f64, 0x24 bytes
  0427f64  stdu 1, -112(1)
  0427f68  mflr 0
  0427f6c  std 0, 128(1)
  0427f70  bl 0xefb38
  0427f74  nop
  0427f78  ld 0, 128(1)
  0427f7c  mtlr 0
  0427f80  addi 1, 1, 112
  0427f84  blr
