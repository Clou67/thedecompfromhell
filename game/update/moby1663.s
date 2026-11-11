# game/update/moby1663.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

UpdateMoby_1663:   # 0x2a86e0, 0x20c bytes
  02a86e0  stdu 1, -176(1)
  02a86e4  mflr 0
  02a86e8  std 0, 192(1)
  02a86ec  stfd 31, 168(1)
  02a86f0  std 31, 160(1)
  02a86f4  ori 31, 3, 0
  02a86f8  lis 4, 1
  02a86fc  std 30, 152(1)
  02a8700  std 29, 144(1)
  02a8704  std 28, 136(1)
  02a8708  li 5, 0
  02a870c  bl 0x10675c
  02a8710  nop
  02a8714  ori 4, 3, 0
  02a8718  lbz 3, 32(31)
  02a871c  cmpwi 3, 0
  02a8720  bt 1, 0x2a8730
  02a8724  cmpwi 3, -1
  02a8728  bf 1, 0x2a88c8
  02a872c  b 0x2a8744
  02a8730  cmpwi 3, 1
  02a8734  bf 1, 0x2a8750
  02a8738  cmpwi 3, 2
  02a873c  bf 1, 0x2a8770
  02a8740  b 0x2a88c8
  02a8744  li 3, 1
  02a8748  stb 3, 32(31)
  02a874c  b 0x2a88c8
  02a8750  cmpwi 4, 0
  02a8754  bt 2, 0x2a88c8
  02a8758  lwz 3, 44(4)
  02a875c  cmpwi 3, 0
  02a8760  bf 1, 0x2a88c8
  02a8764  li 3, 2
  02a8768  stb 3, 32(31)
  02a876c  b 0x2a88c8
  02a8770  li 3, 0
  02a8774  li 4, 0
  02a8778  ori 5, 31, 0
  02a877c  bl 0x15d12c
  02a8780  nop
  02a8784  ori 3, 31, 0
  02a8788  bl 0x11a100
  02a878c  nop
  02a8790  lis 3, 43
  02a8794  lis 4, 161
  02a8798  addi 5, 3, -31016
  02a879c  addic 28, 4, 23856
  02a87a0  addic 30, 31, 16
  02a87a4  addic 29, 31, 64
  02a87a8  ori 3, 31, 0
  02a87ac  lfs 31, 0(5)
  02a87b0  std 28, 112(1)
  02a87b4  li 4, 1678
  02a87b8  std 28, 120(1)
  02a87bc  ori 5, 30, 0
  02a87c0  ori 6, 29, 0
  02a87c4  fmr 1, 31
  02a87c8  li 7, 0
  02a87cc  li 8, 0
  02a87d0  ori 10, 28, 0
  02a87d4  bl 0x11a560
  02a87d8  nop
  02a87dc  std 28, 112(1)
  02a87e0  ori 3, 31, 0
  02a87e4  std 28, 120(1)
  02a87e8  ori 10, 28, 0
  02a87ec  fmr 1, 31
  02a87f0  li 4, 1679
  02a87f4  ori 5, 30, 0
  02a87f8  ori 6, 29, 0
  02a87fc  li 7, 0
  02a8800  li 8, 0
  02a8804  bl 0x11a560
  02a8808  nop
  02a880c  ori 3, 31, 0
  02a8810  std 28, 112(1)
  02a8814  ori 10, 28, 0
  02a8818  li 4, 1680
  02a881c  fmr 1, 31
  02a8820  ori 5, 30, 0
  02a8824  std 28, 120(1)
  02a8828  ori 6, 29, 0
  02a882c  li 7, 0
  02a8830  li 8, 0
  02a8834  bl 0x11a560
  02a8838  nop
  02a883c  li 3, 1677
  02a8840  bl 0xefa28
  02a8844  nop
  02a8848  cmpwi 3, 0
  02a884c  bt 2, 0x2a88b8
  02a8850  ori 4, 3, 0
  02a8854  li 3, 255
  02a8858  li 5, 1
  02a885c  sth 3, 50(4)
  02a8860  stb 5, 49(4)
  02a8864  ori 3, 4, 0
  02a8868  lfs 1, 16(31)
  02a886c  stfs 1, 16(4)
  02a8870  lfs 1, 20(31)
  02a8874  stfs 1, 20(4)
  02a8878  lfs 1, 24(31)
  02a887c  stfs 1, 24(4)
  02a8880  lfs 1, 28(31)
  02a8884  stfs 1, 28(4)
  02a8888  lfs 1, 64(31)
  02a888c  stfs 1, 64(4)
  02a8890  lfs 1, 68(31)
  02a8894  stfs 1, 68(4)
  02a8898  lfs 1, 72(31)
  02a889c  stfs 1, 72(4)
  02a88a0  lfs 1, 76(31)
  02a88a4  stfs 1, 76(4)
  02a88a8  ld 5, 56(31)
  02a88ac  std 5, 56(4)
  02a88b0  bl 0xf31a8
  02a88b4  nop
  02a88b8  ori 3, 31, 0
  02a88bc  bl 0xefb38
  02a88c0  nop
  02a88c4  b 0x2a88c8
  02a88c8  ld 0, 192(1)
  02a88cc  mtlr 0
  02a88d0  lfd 31, 168(1)
  02a88d4  ld 28, 136(1)
  02a88d8  ld 29, 144(1)
  02a88dc  ld 30, 152(1)
  02a88e0  ld 31, 160(1)
  02a88e4  addi 1, 1, 176
  02a88e8  blr
