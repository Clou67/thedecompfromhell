# game/update/moby1650.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1650_002a7e0c:   # 0x2a7e0c, 0x14 bytes
  02a7e0c  lis 3, 123
  02a7e10  lis 4, 1
  02a7e14  addic 3, 3, 22948
  02a7e18  stw 4, 72(3)
  02a7e1c  blr

UpdateMoby_1650:   # 0x2a7e28, 0x20c bytes
  02a7e28  stdu 1, -176(1)
  02a7e2c  mflr 0
  02a7e30  std 0, 192(1)
  02a7e34  stfd 31, 168(1)
  02a7e38  std 31, 160(1)
  02a7e3c  ori 31, 3, 0
  02a7e40  lis 4, 1
  02a7e44  std 30, 152(1)
  02a7e48  std 29, 144(1)
  02a7e4c  std 28, 136(1)
  02a7e50  li 5, 0
  02a7e54  bl 0x10675c
  02a7e58  nop
  02a7e5c  ori 4, 3, 0
  02a7e60  lbz 3, 32(31)
  02a7e64  cmpwi 3, 0
  02a7e68  bt 1, 0x2a7e78
  02a7e6c  cmpwi 3, -1
  02a7e70  bf 1, 0x2a8010
  02a7e74  b 0x2a7e8c
  02a7e78  cmpwi 3, 1
  02a7e7c  bf 1, 0x2a7e98
  02a7e80  cmpwi 3, 2
  02a7e84  bf 1, 0x2a7eb8
  02a7e88  b 0x2a8010
  02a7e8c  li 3, 1
  02a7e90  stb 3, 32(31)
  02a7e94  b 0x2a8010
  02a7e98  cmpwi 4, 0
  02a7e9c  bt 2, 0x2a8010
  02a7ea0  lwz 3, 44(4)
  02a7ea4  cmpwi 3, 0
  02a7ea8  bf 1, 0x2a8010
  02a7eac  li 3, 2
  02a7eb0  stb 3, 32(31)
  02a7eb4  b 0x2a8010
  02a7eb8  li 3, 0
  02a7ebc  li 4, 0
  02a7ec0  ori 5, 31, 0
  02a7ec4  bl 0x15d12c
  02a7ec8  nop
  02a7ecc  ori 3, 31, 0
  02a7ed0  bl 0x11a100
  02a7ed4  nop
  02a7ed8  lis 3, 42
  02a7edc  lis 4, 161
  02a7ee0  addi 5, 3, 32288
  02a7ee4  addic 28, 4, 23856
  02a7ee8  addic 30, 31, 16
  02a7eec  addic 29, 31, 64
  02a7ef0  ori 3, 31, 0
  02a7ef4  lfs 31, 0(5)
  02a7ef8  std 28, 112(1)
  02a7efc  li 4, 1652
  02a7f00  std 28, 120(1)
  02a7f04  ori 5, 30, 0
  02a7f08  ori 6, 29, 0
  02a7f0c  fmr 1, 31
  02a7f10  li 7, 0
  02a7f14  li 8, 0
  02a7f18  ori 10, 28, 0
  02a7f1c  bl 0x11a560
  02a7f20  nop
  02a7f24  std 28, 112(1)
  02a7f28  ori 3, 31, 0
  02a7f2c  std 28, 120(1)
  02a7f30  ori 10, 28, 0
  02a7f34  fmr 1, 31
  02a7f38  li 4, 1653
  02a7f3c  ori 5, 30, 0
  02a7f40  ori 6, 29, 0
  02a7f44  li 7, 0
  02a7f48  li 8, 0
  02a7f4c  bl 0x11a560
  02a7f50  nop
  02a7f54  ori 3, 31, 0
  02a7f58  std 28, 112(1)
  02a7f5c  ori 10, 28, 0
  02a7f60  li 4, 1654
  02a7f64  fmr 1, 31
  02a7f68  ori 5, 30, 0
  02a7f6c  std 28, 120(1)
  02a7f70  ori 6, 29, 0
  02a7f74  li 7, 0
  02a7f78  li 8, 0
  02a7f7c  bl 0x11a560
  02a7f80  nop
  02a7f84  li 3, 1651
  02a7f88  bl 0xefa28
  02a7f8c  nop
  02a7f90  cmpwi 3, 0
  02a7f94  bt 2, 0x2a8000
  02a7f98  ori 4, 3, 0
  02a7f9c  li 3, 255
  02a7fa0  li 5, 1
  02a7fa4  sth 3, 50(4)
  02a7fa8  stb 5, 49(4)
  02a7fac  ori 3, 4, 0
  02a7fb0  lfs 1, 16(31)
  02a7fb4  stfs 1, 16(4)
  02a7fb8  lfs 1, 20(31)
  02a7fbc  stfs 1, 20(4)
  02a7fc0  lfs 1, 24(31)
  02a7fc4  stfs 1, 24(4)
  02a7fc8  lfs 1, 28(31)
  02a7fcc  stfs 1, 28(4)
  02a7fd0  lfs 1, 64(31)
  02a7fd4  stfs 1, 64(4)
  02a7fd8  lfs 1, 68(31)
  02a7fdc  stfs 1, 68(4)
  02a7fe0  lfs 1, 72(31)
  02a7fe4  stfs 1, 72(4)
  02a7fe8  lfs 1, 76(31)
  02a7fec  stfs 1, 76(4)
  02a7ff0  ld 5, 56(31)
  02a7ff4  std 5, 56(4)
  02a7ff8  bl 0xf31a8
  02a7ffc  nop
  02a8000  ori 3, 31, 0
  02a8004  bl 0xefb38
  02a8008  nop
  02a800c  b 0x2a8010
  02a8010  ld 0, 192(1)
  02a8014  mtlr 0
  02a8018  lfd 31, 168(1)
  02a801c  ld 28, 136(1)
  02a8020  ld 29, 144(1)
  02a8024  ld 30, 152(1)
  02a8028  ld 31, 160(1)
  02a802c  addi 1, 1, 176
  02a8030  blr
