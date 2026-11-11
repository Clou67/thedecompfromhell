# game/update/moby1133.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1133_001d8e34:   # 0x1d8e34, 0x14 bytes
  01d8e34  lis 3, 118
  01d8e38  lis 4, 1
  01d8e3c  addic 3, 3, 18588
  01d8e40  stw 4, 72(3)
  01d8e44  blr

UpdateMoby_1133:   # 0x1d8e68, 0x29c bytes
  01d8e68  stdu 1, -128(1)
  01d8e6c  mflr 0
  01d8e70  std 0, 144(1)
  01d8e74  std 30, 112(1)
  01d8e78  std 31, 120(1)
  01d8e7c  lwz 30, 120(3)
  01d8e80  ori 31, 3, 0
  01d8e84  cmpwi 30, 0
  01d8e88  bt 2, 0x1d90ec
  01d8e8c  lbz 3, 32(31)
  01d8e90  cmpwi 3, 4
  01d8e94  cmpwi 1, 3, 3
  01d8e98  cmpwi 6, 3, 1
  01d8e9c  cmpwi 7, 3, 0
  01d8ea0  bt 2, 0x1d9044
  01d8ea4  bt 6, 0x1d8f48
  01d8ea8  bt 26, 0x1d8ec8
  01d8eac  bf 30, 0x1d90ec
  01d8eb0  li 3, 0
  01d8eb4  li 4, 1
  01d8eb8  stw 3, 68(31)
  01d8ebc  stb 4, 32(31)
  01d8ec0  stw 3, 24(30)
  01d8ec4  b 0x1d90ec
  01d8ec8  lwz 3, 0(30)
  01d8ecc  cmpwi 3, -1
  01d8ed0  bt 2, 0x1d8f10
  01d8ed4  lis 4, 164
  01d8ed8  slwi 3, 3, 8
  01d8edc  lwz 4, -28512(4)
  01d8ee0  addc 3, 4, 3
  01d8ee4  cmpwi 3, 0
  01d8ee8  bt 2, 0x1d8f10
  01d8eec  clrldi 3, 3, 32
  01d8ef0  lbz 3, 32(3)
  01d8ef4  cmpwi 1, 3, 253
  01d8ef8  cmpwi 3, 254
  01d8efc  cror 2, 2, 6
  01d8f00  bt 2, 0x1d8f10
  01d8f04  lwz 4, 4(30)
  01d8f08  cmpw 3, 4
  01d8f0c  bf 2, 0x1d90ec
  01d8f10  lis 4, 114
  01d8f14  lfs 1, 12(30)
  01d8f18  li 3, 0
  01d8f1c  ori 5, 31, 0
  01d8f20  lfs 2, -3052(4)
  01d8f24  li 4, 0
  01d8f28  fmuls 1, 1, 2
  01d8f2c  stfs 1, 24(30)
  01d8f30  stfs 1, 68(31)
  01d8f34  bl 0x15d12c
  01d8f38  nop
  01d8f3c  li 3, 3
  01d8f40  stb 3, 32(31)
  01d8f44  b 0x1d90ec
  01d8f48  lis 3, 30
  01d8f4c  lfs 1, 68(31)
  01d8f50  addi 3, 3, -29112
  01d8f54  lfs 2, 0(3)
  01d8f58  lfs 3, 4(3)
  01d8f5c  fadds 1, 1, 2
  01d8f60  lfs 4, 8(3)
  01d8f64  lfs 5, 12(3)
  01d8f68  fsubs 2, 3, 1
  01d8f6c  fsubs 3, 4, 1
  01d8f70  fsub 4, 1, 2
  01d8f74  fsel 1, 4, 2, 1
  01d8f78  lfs 2, 16(3)
  01d8f7c  fsub 4, 3, 1
  01d8f80  fsel 1, 4, 3, 1
  01d8f84  lfs 3, 20(3)
  01d8f88  lfs 4, 24(3)
  01d8f8c  lis 3, 114
  01d8f90  fmuls 6, 1, 1
  01d8f94  fmuls 10, 6, 1
  01d8f98  fmadds 5, 10, 5, 1
  01d8f9c  lfs 1, 24(30)
  01d8fa0  lfs 8, 12(30)
  01d8fa4  lfs 9, -3052(3)
  01d8fa8  fmuls 8, 8, 9
  01d8fac  fmuls 9, 6, 10
  01d8fb0  fmuls 7, 6, 9
  01d8fb4  fmadds 2, 9, 2, 5
  01d8fb8  fmuls 5, 6, 7
  01d8fbc  fmadds 2, 7, 3, 2
  01d8fc0  fmadds 2, 5, 4, 2
  01d8fc4  fmuls 2, 8, 2
  01d8fc8  bl 0x502578
  01d8fcc  nop
  01d8fd0  fmr 2, 1
  01d8fd4  stfs 2, 24(30)
  01d8fd8  lfs 1, 68(31)
  01d8fdc  bl 0x502578
  01d8fe0  nop
  01d8fe4  stfs 1, 68(31)
  01d8fe8  lfs 1, 24(30)
  01d8fec  lis 3, 164
  01d8ff0  lfs 2, 16(30)
  01d8ff4  lwz 4, 0(30)
  01d8ff8  fmuls 1, 1, 2
  01d8ffc  slwi 4, 4, 8
  01d9000  lwz 3, -28512(3)
  01d9004  addc 3, 3, 4
  01d9008  cmpwi 3, 0
  01d900c  stfs 1, 24(30)
  01d9010  bt 2, 0x1d90ec
  01d9014  clrldi 3, 3, 32
  01d9018  lbz 3, 32(3)
  01d901c  cmpwi 1, 3, 253
  01d9020  cmpwi 3, 254
  01d9024  cror 2, 2, 6
  01d9028  bt 2, 0x1d90ec
  01d902c  lwz 4, 8(30)
  01d9030  cmpw 3, 4
  01d9034  bf 2, 0x1d90ec
  01d9038  li 3, 4
  01d903c  stb 3, 32(31)
  01d9040  b 0x1d90ec
  01d9044  lwz 3, 0(30)
  01d9048  cmpwi 3, -1
  01d904c  bt 2, 0x1d908c
  01d9050  lis 4, 164
  01d9054  slwi 3, 3, 8
  01d9058  lwz 4, -28512(4)
  01d905c  addc 3, 4, 3
  01d9060  cmpwi 3, 0
  01d9064  bt 2, 0x1d908c
  01d9068  clrldi 3, 3, 32
  01d906c  lbz 3, 32(3)
  01d9070  cmpwi 1, 3, 253
  01d9074  cmpwi 3, 254
  01d9078  cror 2, 2, 6
  01d907c  bt 2, 0x1d908c
  01d9080  lwz 4, 4(30)
  01d9084  cmpw 3, 4
  01d9088  bf 2, 0x1d90ac
  01d908c  li 3, 0
  01d9090  li 4, 0
  01d9094  ori 5, 31, 0
  01d9098  bl 0x15d12c
  01d909c  nop
  01d90a0  li 3, 2
  01d90a4  stb 3, 32(31)
  01d90a8  b 0x1d90ec
  01d90ac  lfs 1, 68(31)
  01d90b0  lfs 2, 20(30)
  01d90b4  bl 0x5025e0
  01d90b8  nop
  01d90bc  lis 3, 30
  01d90c0  stfs 1, 68(31)
  01d90c4  addi 3, 3, -29112
  01d90c8  lfs 2, 28(3)
  01d90cc  fcmpu 0, 1, 2
  01d90d0  cror 6, 0, 2
  01d90d4  bt 6, 0x1d90ec
  01d90d8  li 3, 0
  01d90dc  li 4, 1
  01d90e0  stw 3, 68(31)
  01d90e4  stw 3, 24(30)
  01d90e8  stb 4, 32(31)
  01d90ec  ld 0, 144(1)
  01d90f0  mtlr 0
  01d90f4  ld 30, 112(1)
  01d90f8  ld 31, 120(1)
  01d90fc  addi 1, 1, 128
  01d9100  blr
