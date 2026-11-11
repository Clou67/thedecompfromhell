# idol/fUnk.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

idol::GcmFlipCommand_Thunk:   # 0x50e8dc, 0xbc bytes
  050e8dc  stdu 1, -128(1)
  050e8e0  mflr 0
  050e8e4  std 30, 112(1)
  050e8e8  mr 30, 4
  050e8ec  std 31, 120(1)
  050e8f0  cmplwi 7, 30, 7
  050e8f4  std 0, 144(1)
  050e8f8  mr 11, 3
  050e8fc  bt 29, 0x50e974
  050e900  lwz 9, 8(11)
  050e904  clrldi 31, 3, 32
  050e908  lwz 0, 4(11)
  050e90c  li 4, 19
  050e910  addi 9, 9, 76
  050e914  mr 3, 31
  050e918  cmplw 7, 9, 0
  050e91c  bt 29, 0x50e950
  050e920  mr 3, 31
  050e924  clrldi 4, 30, 56
  050e928  bl 0x64f284
  050e92c  ld 2, 40(1)
  050e930  ld 0, 144(1)
  050e934  ld 30, 112(1)
  050e938  li 3, 0
  050e93c  ld 31, 120(1)
  050e940  mtlr 0
  050e944  addi 1, 1, 128
  050e948  extsw 3, 3
  050e94c  blr
  050e950  lwz 9, 12(11)
  050e954  lwz 0, 0(9)
  050e958  std 2, 40(1)
  050e95c  mtctr 0
  050e960  lwz 2, 4(9)
  050e964  bctrl
  050e968  ld 2, 40(1)
  050e96c  cmpwi 7, 3, 0
  050e970  bt 30, 0x50e920
  050e974  lis 3, -32735
  050e978  ld 0, 144(1)
  050e97c  ld 30, 112(1)
  050e980  ori 3, 3, 255
  050e984  ld 31, 120(1)
  050e988  mtlr 0
  050e98c  addi 1, 1, 128
  050e990  extsw 3, 3
  050e994  blr
