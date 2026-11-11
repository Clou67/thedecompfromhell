# game/update/moby1813.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

UpdateMoby_1813:   # 0x2bc750, 0x110 bytes
  02bc750  stdu 1, -144(1)
  02bc754  mflr 0
  02bc758  std 0, 160(1)
  02bc75c  std 31, 136(1)
  02bc760  ori 31, 3, 0
  02bc764  lis 4, 1
  02bc768  li 5, 0
  02bc76c  bl 0x10675c
  02bc770  nop
  02bc774  ori 4, 3, 0
  02bc778  lbz 3, 32(31)
  02bc77c  cmpwi 3, 0
  02bc780  bt 1, 0x2bc790
  02bc784  cmpwi 3, -1
  02bc788  bf 1, 0x2bc84c
  02bc78c  b 0x2bc7a4
  02bc790  cmpwi 3, 1
  02bc794  bf 1, 0x2bc7b0
  02bc798  cmpwi 3, 2
  02bc79c  bf 1, 0x2bc7d0
  02bc7a0  b 0x2bc84c
  02bc7a4  li 3, 1
  02bc7a8  stb 3, 32(31)
  02bc7ac  b 0x2bc84c
  02bc7b0  cmpwi 4, 0
  02bc7b4  bt 2, 0x2bc84c
  02bc7b8  lwz 3, 44(4)
  02bc7bc  cmpwi 3, 0
  02bc7c0  bf 1, 0x2bc84c
  02bc7c4  li 3, 2
  02bc7c8  stb 3, 32(31)
  02bc7cc  b 0x2bc84c
  02bc7d0  li 3, 0
  02bc7d4  li 4, 0
  02bc7d8  ori 5, 31, 0
  02bc7dc  bl 0x15d12c
  02bc7e0  nop
  02bc7e4  ori 3, 31, 0
  02bc7e8  bl 0x11a100
  02bc7ec  nop
  02bc7f0  lis 3, 44
  02bc7f4  lis 10, 161
  02bc7f8  addi 7, 3, -14520
  02bc7fc  addic 10, 10, 23856
  02bc800  ori 3, 31, 0
  02bc804  addic 5, 31, 16
  02bc808  li 4, 1815
  02bc80c  lfs 1, 0(7)
  02bc810  std 10, 112(1)
  02bc814  addic 6, 31, 64
  02bc818  li 7, 0
  02bc81c  std 10, 120(1)
  02bc820  li 8, 0
  02bc824  bl 0x11a560
  02bc828  nop
  02bc82c  ori 3, 31, 0
  02bc830  li 4, 1816
  02bc834  bl 0x11ad48
  02bc838  nop
  02bc83c  ori 3, 31, 0
  02bc840  bl 0xefb38
  02bc844  nop
  02bc848  b 0x2bc84c
  02bc84c  ld 0, 160(1)
  02bc850  mtlr 0
  02bc854  ld 31, 136(1)
  02bc858  addi 1, 1, 144
  02bc85c  blr
