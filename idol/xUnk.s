# idol/xUnk.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

idol::GetAnimDuration:   # 0x5e7e18, 0x4c bytes
  05e7e18  stdu 1, -64(1)
  05e7e1c  extsw 3, 3
  05e7e20  lis 4, 94
  05e7e24  std 3, 48(1)
  05e7e28  addi 3, 4, 32272
  05e7e2c  lis 4, 114
  05e7e30  lfs 1, 0(3)
  05e7e34  lfs 2, -3056(4)
  05e7e38  lfd 3, 48(1)
  05e7e3c  fcfid 3, 3
  05e7e40  frsp 3, 3
  05e7e44  fadds 1, 3, 1
  05e7e48  fmuls 1, 2, 1
  05e7e4c  fctiwz 1, 1
  05e7e50  stfd 1, 48(1)
  05e7e54  lwz 3, 52(1)
  05e7e58  extsw 3, 3
  05e7e5c  addi 1, 1, 64
  05e7e60  blr

FUN_005e7e70:   # 0x5e7e70, 0x24 bytes
  05e7e70  lis 4, 94
  05e7e74  li 5, 0
  05e7e78  addi 4, 4, 32360
  05e7e7c  lfs 1, 0(4)
  05e7e80  stw 5, 12(3)
  05e7e84  stfs 1, 8(3)
  05e7e88  stfs 1, 4(3)
  05e7e8c  stfs 1, 0(3)
  05e7e90  blr

FUN_005e7e98:   # 0x5e7e98, 0x24 bytes
  05e7e98  lfs 1, 0(4)
  05e7e9c  lfs 2, 4(4)
  05e7ea0  stfs 1, 0(3)
  05e7ea4  lfs 1, 8(4)
  05e7ea8  stfs 2, 4(3)
  05e7eac  lfs 2, 12(4)
  05e7eb0  stfs 1, 8(3)
  05e7eb4  stfs 2, 12(3)
  05e7eb8  blr

FUN_005e7ebc:   # 0x5e7ebc, 0x1c bytes
  05e7ebc  lfs 1, 0(3)
  05e7ec0  lfs 2, 4(3)
  05e7ec4  fmuls 1, 1, 1
  05e7ec8  fmuls 2, 2, 2
  05e7ecc  fadds 1, 1, 2
  05e7ed0  fsqrts 1, 1
  05e7ed4  blr

FUN_005e7ed8:   # 0x5e7ed8, 0x7c bytes
  05e7ed8  lfs 3, 0(4)
  05e7edc  lfs 2, 4(4)
  05e7ee0  fmuls 4, 3, 3
  05e7ee4  fmuls 2, 2, 2
  05e7ee8  fadds 2, 4, 2
  05e7eec  fsqrts 2, 2
  05e7ef0  fcmpu 0, 1, 2
  05e7ef4  cror 6, 1, 2
  05e7ef8  bt 6, 0x5e7f2c
  05e7efc  fdivs 1, 1, 2
  05e7f00  fmuls 2, 3, 1
  05e7f04  stfs 2, 0(3)
  05e7f08  lfs 2, 4(4)
  05e7f0c  fmuls 1, 2, 1
  05e7f10  stfs 1, 4(3)
  05e7f14  lfs 1, 8(4)
  05e7f18  stfs 1, 8(3)
  05e7f1c  lfs 1, 12(4)
  05e7f20  stfs 1, 12(3)
  05e7f24  li 3, 1
  05e7f28  b 0x5e7f50
  05e7f2c  lfs 1, 0(4)
  05e7f30  stfs 1, 0(3)
  05e7f34  lfs 1, 4(4)
  05e7f38  stfs 1, 4(3)
  05e7f3c  lfs 1, 8(4)
  05e7f40  stfs 1, 8(3)
  05e7f44  lfs 1, 12(4)
  05e7f48  stfs 1, 12(3)
  05e7f4c  li 3, 0
  05e7f50  blr

FUN_005e7f54:   # 0x5e7f54, 0x3c bytes
  05e7f54  lfs 1, 0(4)
  05e7f58  lfs 2, 0(5)
  05e7f5c  lfs 3, 4(4)
  05e7f60  fadds 1, 1, 2
  05e7f64  lfs 2, 4(5)
  05e7f68  lfs 4, 8(4)
  05e7f6c  fadds 2, 3, 2
  05e7f70  lfs 3, 8(5)
  05e7f74  fadds 3, 4, 3
  05e7f78  lfs 4, 12(4)
  05e7f7c  stfs 4, 12(3)
  05e7f80  stfs 1, 0(3)
  05e7f84  stfs 2, 4(3)
  05e7f88  stfs 3, 8(3)
  05e7f8c  blr

FUN_005e7f98:   # 0x5e7f98, 0x98 bytes
  05e7f98  lfs 4, 0(4)
  05e7f9c  lfs 2, 4(4)
  05e7fa0  fmuls 5, 4, 4
  05e7fa4  lfs 3, 8(4)
  05e7fa8  fmuls 2, 2, 2
  05e7fac  fmuls 3, 3, 3
  05e7fb0  lis 5, 94
  05e7fb4  addi 5, 5, 32656
  05e7fb8  fadds 2, 5, 2
  05e7fbc  fadds 3, 2, 3
  05e7fc0  lfs 2, 0(5)
  05e7fc4  fsqrts 3, 3
  05e7fc8  fcmpu 0, 3, 2
  05e7fcc  bf 2, 0x5e8000
  05e7fd0  lfs 1, 0(4)
  05e7fd4  stfs 1, 0(3)
  05e7fd8  lfs 1, 4(4)
  05e7fdc  stfs 1, 4(3)
  05e7fe0  lfs 1, 8(4)
  05e7fe4  stfs 1, 8(3)
  05e7fe8  lfs 1, 12(4)
  05e7fec  stfs 2, 8(3)
  05e7ff0  stfs 1, 12(3)
  05e7ff4  stfs 2, 4(3)
  05e7ff8  stfs 2, 0(3)
  05e7ffc  b 0x5e802c
  05e8000  fdivs 1, 1, 3
  05e8004  fmuls 2, 4, 1
  05e8008  stfs 2, 0(3)
  05e800c  lfs 2, 4(4)
  05e8010  fmuls 2, 2, 1
  05e8014  stfs 2, 4(3)
  05e8018  lfs 2, 8(4)
  05e801c  fmuls 1, 2, 1
  05e8020  stfs 1, 8(3)
  05e8024  lfs 1, 12(4)
  05e8028  stfs 1, 12(3)
  05e802c  blr

FUN_005e8030:   # 0x5e8030, 0x28 bytes
  05e8030  lfs 1, 0(3)
  05e8034  lfs 2, 4(3)
  05e8038  fmuls 1, 1, 1
  05e803c  lfs 3, 8(3)
  05e8040  fmuls 2, 2, 2
  05e8044  fmuls 3, 3, 3
  05e8048  fadds 1, 1, 2
  05e804c  fadds 1, 1, 3
  05e8050  fsqrts 1, 1
  05e8054  blr
