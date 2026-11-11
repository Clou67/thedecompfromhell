# game/update/moby1655.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

UpdateMoby_1655:   # 0x2a8048, 0x20c bytes
  02a8048  stdu 1, -176(1)
  02a804c  mflr 0
  02a8050  std 0, 192(1)
  02a8054  stfd 31, 168(1)
  02a8058  std 31, 160(1)
  02a805c  ori 31, 3, 0
  02a8060  lis 4, 1
  02a8064  std 30, 152(1)
  02a8068  std 29, 144(1)
  02a806c  std 28, 136(1)
  02a8070  li 5, 0
  02a8074  bl 0x10675c
  02a8078  nop
  02a807c  ori 4, 3, 0
  02a8080  lbz 3, 32(31)
  02a8084  cmpwi 3, 0
  02a8088  bt 1, 0x2a8098
  02a808c  cmpwi 3, -1
  02a8090  bf 1, 0x2a8230
  02a8094  b 0x2a80ac
  02a8098  cmpwi 3, 1
  02a809c  bf 1, 0x2a80b8
  02a80a0  cmpwi 3, 2
  02a80a4  bf 1, 0x2a80d8
  02a80a8  b 0x2a8230
  02a80ac  li 3, 1
  02a80b0  stb 3, 32(31)
  02a80b4  b 0x2a8230
  02a80b8  cmpwi 4, 0
  02a80bc  bt 2, 0x2a8230
  02a80c0  lwz 3, 44(4)
  02a80c4  cmpwi 3, 0
  02a80c8  bf 1, 0x2a8230
  02a80cc  li 3, 2
  02a80d0  stb 3, 32(31)
  02a80d4  b 0x2a8230
  02a80d8  li 3, 0
  02a80dc  li 4, 0
  02a80e0  ori 5, 31, 0
  02a80e4  bl 0x15d12c
  02a80e8  nop
  02a80ec  ori 3, 31, 0
  02a80f0  bl 0x11a100
  02a80f4  nop
  02a80f8  lis 3, 43
  02a80fc  lis 4, 161
  02a8100  addi 5, 3, -32704
  02a8104  addic 28, 4, 23856
  02a8108  addic 30, 31, 16
  02a810c  addic 29, 31, 64
  02a8110  ori 3, 31, 0
  02a8114  lfs 31, 0(5)
  02a8118  std 28, 112(1)
  02a811c  li 4, 1657
  02a8120  std 28, 120(1)
  02a8124  ori 5, 30, 0
  02a8128  ori 6, 29, 0
  02a812c  fmr 1, 31
  02a8130  li 7, 0
  02a8134  li 8, 0
  02a8138  ori 10, 28, 0
  02a813c  bl 0x11a560
  02a8140  nop
  02a8144  std 28, 112(1)
  02a8148  ori 3, 31, 0
  02a814c  std 28, 120(1)
  02a8150  ori 10, 28, 0
  02a8154  fmr 1, 31
  02a8158  li 4, 1658
  02a815c  ori 5, 30, 0
  02a8160  ori 6, 29, 0
  02a8164  li 7, 0
  02a8168  li 8, 0
  02a816c  bl 0x11a560
  02a8170  nop
  02a8174  ori 3, 31, 0
  02a8178  std 28, 112(1)
  02a817c  ori 10, 28, 0
  02a8180  li 4, 1659
  02a8184  fmr 1, 31
  02a8188  ori 5, 30, 0
  02a818c  std 28, 120(1)
  02a8190  ori 6, 29, 0
  02a8194  li 7, 0
  02a8198  li 8, 0
  02a819c  bl 0x11a560
  02a81a0  nop
  02a81a4  li 3, 1656
  02a81a8  bl 0xefa28
  02a81ac  nop
  02a81b0  cmpwi 3, 0
  02a81b4  bt 2, 0x2a8220
  02a81b8  ori 4, 3, 0
  02a81bc  li 3, 255
  02a81c0  li 5, 1
  02a81c4  sth 3, 50(4)
  02a81c8  stb 5, 49(4)
  02a81cc  ori 3, 4, 0
  02a81d0  lfs 1, 16(31)
  02a81d4  stfs 1, 16(4)
  02a81d8  lfs 1, 20(31)
  02a81dc  stfs 1, 20(4)
  02a81e0  lfs 1, 24(31)
  02a81e4  stfs 1, 24(4)
  02a81e8  lfs 1, 28(31)
  02a81ec  stfs 1, 28(4)
  02a81f0  lfs 1, 64(31)
  02a81f4  stfs 1, 64(4)
  02a81f8  lfs 1, 68(31)
  02a81fc  stfs 1, 68(4)
  02a8200  lfs 1, 72(31)
  02a8204  stfs 1, 72(4)
  02a8208  lfs 1, 76(31)
  02a820c  stfs 1, 76(4)
  02a8210  ld 5, 56(31)
  02a8214  std 5, 56(4)
  02a8218  bl 0xf31a8
  02a821c  nop
  02a8220  ori 3, 31, 0
  02a8224  bl 0xefb38
  02a8228  nop
  02a822c  b 0x2a8230
  02a8230  ld 0, 192(1)
  02a8234  mtlr 0
  02a8238  lfd 31, 168(1)
  02a823c  ld 28, 136(1)
  02a8240  ld 29, 144(1)
  02a8244  ld 30, 152(1)
  02a8248  ld 31, 160(1)
  02a824c  addi 1, 1, 176
  02a8250  blr
