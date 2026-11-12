# game/update/moby420.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M420_00367dc4:   # 0x367dc4, 0x14 bytes
  0367dc4  lis 3, 132
  0367dc8  lis 4, 1
  0367dcc  addic 3, 3, 3732
  0367dd0  stw 4, 72(3)
  0367dd4  blr

UpdateMoby_420:   # 0x367de0, 0x15c bytes
  0367de0  stdu 1, -128(1)
  0367de4  mflr 0
  0367de8  std 0, 144(1)
  0367dec  std 30, 112(1)
  0367df0  lbz 4, 32(3)
  0367df4  std 31, 120(1)
  0367df8  lwz 30, 120(3)
  0367dfc  ori 31, 3, 0
  0367e00  cmpwi 4, 0
  0367e04  lfs 1, 24(3)
  0367e08  bf 2, 0x367e44
  0367e0c  lis 3, 16329
  0367e10  ori 3, 3, 4059
  0367e14  stw 3, 64(31)
  0367e18  bl 0xfcc68
  0367e1c  nop
  0367e20  lis 4, 54
  0367e24  stfs 1, 72(31)
  0367e28  li 3, 1
  0367e2c  addi 4, 4, 32216
  0367e30  stb 3, 32(31)
  0367e34  lfs 1, 24(31)
  0367e38  lfs 2, 0(4)
  0367e3c  fadds 1, 1, 2
  0367e40  stfs 1, 24(31)
  0367e44  lis 3, 164
  0367e48  lwz 4, 0(30)
  0367e4c  slwi 4, 4, 8
  0367e50  lwz 3, -28512(3)
  0367e54  addc 3, 3, 4
  0367e58  clrldi 3, 3, 32
  0367e5c  lbz 4, 32(3)
  0367e60  cmpwi 4, 0
  0367e64  bf 2, 0x367e74
  0367e68  li 3, 64
  0367e6c  sth 3, 50(31)
  0367e70  b 0x367f24
  0367e74  lfs 2, 20(3)
  0367e78  lfs 3, 20(31)
  0367e7c  lfs 4, 16(3)
  0367e80  fsubs 2, 2, 3
  0367e84  lfs 3, 16(31)
  0367e88  fsubs 3, 4, 3
  0367e8c  lfs 4, 24(3)
  0367e90  fsubs 1, 4, 1
  0367e94  lis 3, 54
  0367e98  fmuls 2, 2, 2
  0367e9c  addi 3, 3, 32216
  0367ea0  fmadds 2, 3, 3, 2
  0367ea4  fmadds 1, 1, 1, 2
  0367ea8  lfs 2, 4(3)
  0367eac  fsqrts 1, 1
  0367eb0  fcmpu 0, 1, 2
  0367eb4  cror 6, 1, 2
  0367eb8  bt 6, 0x367f24
  0367ebc  li 3, 50
  0367ec0  vspltisw 2, -16
  0367ec4  lvlx 3, 3, 31
  0367ec8  vsraw 2, 3, 2
  0367ecc  vspltisw 3, 0
  0367ed0  vcfsx 2, 2, 0
  0367ed4  vspltw 2, 2, 0
  0367ed8  vcmpeqfp. 2, 2, 3
  0367edc  bf 26, 0x367f24
  0367ee0  lis 3, 164
  0367ee4  lwz 5, 0(30)
  0367ee8  li 4, 0
  0367eec  slwi 5, 5, 8
  0367ef0  lwz 3, -28512(3)
  0367ef4  sth 4, 50(31)
  0367ef8  addc 3, 3, 5
  0367efc  li 4, 0
  0367f00  clrldi 5, 3, 32
  0367f04  li 3, 0
  0367f08  lwz 6, 120(5)
  0367f0c  ori 5, 31, 0
  0367f10  lwz 7, 20(6)
  0367f14  addic 7, 7, 1
  0367f18  stw 7, 20(6)
  0367f1c  bl 0x15d12c
  0367f20  nop
  0367f24  ld 0, 144(1)
  0367f28  mtlr 0
  0367f2c  ld 30, 112(1)
  0367f30  ld 31, 120(1)
  0367f34  addi 1, 1, 128
  0367f38  blr
