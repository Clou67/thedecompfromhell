# sdk/libc/xlv2mtx.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

_Mtxunlock:   # 0x5d0370, 0x44 bytes
  05d0370  mr 10, 3
  05d0374  mflr 0
  05d0378  stdu 1, -112(1)
  05d037c  std 0, 128(1)
  05d0380  addi 3, 3, 16
  05d0384  lwz 9, 0(10)
  05d0388  clrldi 3, 3, 32
  05d038c  addi 9, 9, -1
  05d0390  cmpwi 7, 9, 0
  05d0394  stw 9, 0(10)
  05d0398  bf 30, 0x5d03a4
  05d039c  bl 0x6504e4
  05d03a0  ld 2, 40(1)
  05d03a4  ld 0, 128(1)
  05d03a8  addi 1, 1, 112
  05d03ac  mtlr 0
  05d03b0  blr

_Mtxlock:   # 0x5d03b4, 0xa8 bytes
  05d03b4  stdu 1, -160(1)
  05d03b8  mflr 0
  05d03bc  std 31, 152(1)
  05d03c0  mr 31, 3
  05d03c4  addi 3, 1, 112
  05d03c8  std 29, 136(1)
  05d03cc  std 0, 176(1)
  05d03d0  bl 0x6505c4
  05d03d4  ld 2, 40(1)
  05d03d8  lwz 9, 0(31)
  05d03dc  addi 3, 31, 16
  05d03e0  li 4, 0
  05d03e4  cmpwi 7, 9, 0
  05d03e8  clrldi 3, 3, 32
  05d03ec  bt 30, 0x5d0404
  05d03f0  ld 0, 8(31)
  05d03f4  addi 11, 9, 1
  05d03f8  ld 9, 112(1)
  05d03fc  cmpd 7, 0, 9
  05d0400  bt 30, 0x5d0440
  05d0404  bl 0x6504c4
  05d0408  ld 2, 40(1)
  05d040c  cmpwi 7, 3, 0
  05d0410  bf 30, 0x5d0428
  05d0414  lwz 9, 0(31)
  05d0418  ld 0, 112(1)
  05d041c  addi 9, 9, 1
  05d0420  std 0, 8(31)
  05d0424  stw 9, 0(31)
  05d0428  ld 0, 176(1)
  05d042c  ld 29, 136(1)
  05d0430  ld 31, 152(1)
  05d0434  mtlr 0
  05d0438  addi 1, 1, 160
  05d043c  blr
  05d0440  ld 0, 176(1)
  05d0444  stw 11, 0(31)
  05d0448  ld 29, 136(1)
  05d044c  mtlr 0
  05d0450  ld 31, 152(1)
  05d0454  addi 1, 1, 160
  05d0458  blr

FUN_005d045c:   # 0x5d045c, 0x2c bytes
  05d045c  addi 3, 3, 16
  05d0460  mflr 0
  05d0464  stdu 1, -112(1)
  05d0468  clrldi 3, 3, 32
  05d046c  std 0, 128(1)
  05d0470  bl 0x650784
  05d0474  ld 2, 40(1)
  05d0478  ld 0, 128(1)
  05d047c  addi 1, 1, 112
  05d0480  mtlr 0
  05d0484  blr

FUN_005d0488:   # 0x5d0488, 0x28 bytes
  05d0488  lwz 3, -24332(2)
  05d048c  mflr 0
  05d0490  stdu 1, -112(1)
  05d0494  std 0, 128(1)
  05d0498  bl 0x650784
  05d049c  ld 2, 40(1)
  05d04a0  ld 0, 128(1)
  05d04a4  addi 1, 1, 112
  05d04a8  mtlr 0
  05d04ac  blr

_Mtxinit:   # 0x5d04b0, 0x50 bytes
  05d04b0  mr 11, 3
  05d04b4  mflr 0
  05d04b8  stdu 1, -112(1)
  05d04bc  addi 3, 3, 16
  05d04c0  lwz 4, -24328(2)
  05d04c4  std 0, 128(1)
  05d04c8  li 9, 0
  05d04cc  li 0, 0
  05d04d0  clrldi 3, 3, 32
  05d04d4  stw 0, 0(11)
  05d04d8  std 9, 8(11)
  05d04dc  bl 0x6505a4
  05d04e0  ld 2, 40(1)
  05d04e4  cmpwi 7, 3, 0
  05d04e8  bf- 30, 0x5d04fc
  05d04ec  ld 0, 128(1)
  05d04f0  addi 1, 1, 112
  05d04f4  mtlr 0
  05d04f8  blr
  05d04fc  bl 0x5c4840

_Once:   # 0x5d0504, 0xb0 bytes
  05d0504  stdu 1, -144(1)
  05d0508  mflr 0
  05d050c  std 29, 120(1)
  05d0510  std 0, 160(1)
  05d0514  lwz 0, 0(3)
  05d0518  mr 29, 4
  05d051c  std 31, 136(1)
  05d0520  cmpwi 7, 0, 0
  05d0524  std 30, 128(1)
  05d0528  mr 31, 3
  05d052c  bt 30, 0x5d054c
  05d0530  ld 0, 160(1)
  05d0534  ld 29, 120(1)
  05d0538  ld 30, 128(1)
  05d053c  mtlr 0
  05d0540  ld 31, 136(1)
  05d0544  addi 1, 1, 144
  05d0548  blr
  05d054c  lwz 30, -24332(2)
  05d0550  li 4, 0
  05d0554  mr 3, 30
  05d0558  bl 0x6504c4
  05d055c  ld 2, 40(1)
  05d0560  cmpwi 7, 3, 0
  05d0564  bf- 30, 0x5d0588
  05d0568  lwz 0, 0(31)
  05d056c  cmpwi 7, 0, 0
  05d0570  bt 30, 0x5d0590
  05d0574  mr 3, 30
  05d0578  bl 0x6504e4
  05d057c  ld 2, 40(1)
  05d0580  cmpwi 7, 3, 0
  05d0584  bt+ 30, 0x5d0530
  05d0588  bl 0x5c4840
  05d058c  nop
  05d0590  clrldi 9, 29, 32
  05d0594  std 2, 40(1)
  05d0598  lwz 0, 0(9)
  05d059c  lwz 2, 4(9)
  05d05a0  mtctr 0
  05d05a4  bctrl
  05d05a8  ld 2, 40(1)
  05d05ac  li 0, 2
  05d05b0  stw 0, 0(31)

FUN_005d05b8:   # 0x5d05b8, 0x38 bytes
  05d05b8  lwz 4, -24328(2)
  05d05bc  mflr 0
  05d05c0  lwz 3, -24332(2)
  05d05c4  stdu 1, -112(1)
  05d05c8  std 0, 128(1)
  05d05cc  bl 0x6505a4
  05d05d0  ld 2, 40(1)
  05d05d4  cmpwi 7, 3, 0
  05d05d8  bf- 30, 0x5d05ec
  05d05dc  ld 0, 128(1)
  05d05e0  addi 1, 1, 112
  05d05e4  mtlr 0
  05d05e8  blr
  05d05ec  bl 0x5c4840
