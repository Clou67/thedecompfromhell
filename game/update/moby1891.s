# game/update/moby1891.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1891_002d12b0:   # 0x2d12b0, 0x14 bytes
  02d12b0  lis 3, 124
  02d12b4  lis 4, 1
  02d12b8  addic 3, 3, -10728
  02d12bc  stw 4, 72(3)
  02d12c0  blr

UpdateMoby_1891:   # 0x2d12d0, 0xb0 bytes
  02d12d0  stdu 1, -128(1)
  02d12d4  mflr 0
  02d12d8  std 0, 144(1)
  02d12dc  std 31, 120(1)
  02d12e0  ori 31, 3, 0
  02d12e4  lbz 3, 32(3)
  02d12e8  cmpwi 3, 0
  02d12ec  cmpwi 1, 3, 1
  02d12f0  cmpwi 6, 3, -1
  02d12f4  bt 1, 0x2d1300
  02d12f8  bf 25, 0x2d136c
  02d12fc  b 0x2d1308
  02d1300  bf 5, 0x2d1344
  02d1304  b 0x2d136c
  02d1308  li 3, 255
  02d130c  lis 5, 45
  02d1310  li 4, 512
  02d1314  addi 5, 5, 4808
  02d1318  stb 3, 48(31)
  02d131c  lis 3, 17184
  02d1320  sth 4, 50(31)
  02d1324  lfs 1, 44(31)
  02d1328  li 4, 1
  02d132c  lfs 2, 0(5)
  02d1330  stw 3, 24(31)
  02d1334  fmuls 1, 1, 2
  02d1338  stb 4, 32(31)
  02d133c  stfs 1, 44(31)
  02d1340  b 0x2d136c
  02d1344  lis 3, 45
  02d1348  lfs 1, 72(31)
  02d134c  lis 4, 114
  02d1350  addi 3, 3, 4808
  02d1354  lfs 2, 4(3)
  02d1358  lfs 3, -3052(4)
  02d135c  fmuls 2, 3, 2
  02d1360  bl 0x502578
  02d1364  nop
  02d1368  stfs 1, 72(31)
  02d136c  ld 0, 144(1)
  02d1370  mtlr 0
  02d1374  ld 31, 120(1)
  02d1378  addi 1, 1, 128
  02d137c  blr
