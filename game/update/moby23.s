# game/update/moby23.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

UpdateMoby_23:   # 0x2fd8e0, 0x158 bytes
  02fd8e0  stdu 1, -128(1)
  02fd8e4  mflr 0
  02fd8e8  std 0, 144(1)
  02fd8ec  std 31, 120(1)
  02fd8f0  ori 31, 3, 0
  02fd8f4  lbz 3, 32(3)
  02fd8f8  cmpwi 3, 0
  02fd8fc  cmpwi 1, 3, 2
  02fd900  cmpwi 6, 3, 1
  02fd904  std 30, 112(1)
  02fd908  cmpwi 7, 3, -1
  02fd90c  bt 1, 0x2fd918
  02fd910  bf 29, 0x2fda20
  02fd914  b 0x2fd924
  02fd918  bf 25, 0x2fda20
  02fd91c  bf 5, 0x2fd978
  02fd920  b 0x2fda20
  02fd924  lis 3, 151
  02fd928  addic 3, 3, -16064
  02fd92c  lbz 3, 6(3)
  02fd930  cmpwi 3, 0
  02fd934  bt 2, 0x2fd948
  02fd938  ori 3, 31, 0
  02fd93c  bl 0xefb38
  02fd940  nop
  02fd944  b 0x2fda20
  02fd948  lis 3, 48
  02fd94c  lfs 1, 24(31)
  02fd950  addi 3, 3, -10032
  02fd954  lfs 2, 0(3)
  02fd958  lhz 4, 52(31)
  02fd95c  li 3, 1
  02fd960  fadds 1, 1, 2
  02fd964  ori 4, 4, 1
  02fd968  stb 3, 32(31)
  02fd96c  sth 4, 52(31)
  02fd970  stfs 1, 24(31)
  02fd974  b 0x2fda20
  02fd978  lis 3, 48
  02fd97c  lfs 1, 72(31)
  02fd980  addi 30, 3, -10032
  02fd984  lis 3, 114
  02fd988  lfs 2, 4(30)
  02fd98c  lfs 3, -3052(3)
  02fd990  fmuls 2, 3, 2
  02fd994  bl 0x502578
  02fd998  nop
  02fd99c  lis 3, 151
  02fd9a0  lfs 1, 20(31)
  02fd9a4  addic 3, 3, -25376
  02fd9a8  lfs 2, 16(31)
  02fd9ac  lfs 3, 132(3)
  02fd9b0  lfs 4, 128(3)
  02fd9b4  fsubs 1, 1, 3
  02fd9b8  fsubs 2, 2, 4
  02fd9bc  fmuls 1, 1, 1
  02fd9c0  fmadds 1, 2, 2, 1
  02fd9c4  lfs 2, 8(30)
  02fd9c8  fsqrts 1, 1
  02fd9cc  fcmpu 0, 1, 2
  02fd9d0  cror 6, 1, 2
  02fd9d4  bt 6, 0x2fda20
  02fd9d8  lis 3, 151
  02fd9dc  lis 4, 151
  02fd9e0  addic 6, 3, -16064
  02fd9e4  li 5, 1
  02fd9e8  addic 7, 4, -16027
  02fd9ec  li 3, 0
  02fd9f0  li 4, -1
  02fd9f4  stb 5, 6(6)
  02fd9f8  stb 5, 6(7)
  02fd9fc  bl 0xe8aa4
  02fda00  nop
  02fda04  li 3, 11000
  02fda08  li 4, 58
  02fda0c  bl 0x7b310
  02fda10  nop
  02fda14  ori 3, 31, 0
  02fda18  bl 0xefb38
  02fda1c  nop
  02fda20  ld 0, 144(1)
  02fda24  mtlr 0
  02fda28  ld 30, 112(1)
  02fda2c  ld 31, 120(1)
  02fda30  addi 1, 1, 128
  02fda34  blr
