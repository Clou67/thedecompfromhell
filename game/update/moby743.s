# game/update/moby743.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

UpdateMoby_743:   # 0x443ea0, 0x230 bytes
  0443ea0  stdu 1, -176(1)
  0443ea4  mflr 0
  0443ea8  std 0, 192(1)
  0443eac  stfd 28, 144(1)
  0443eb0  stfd 29, 152(1)
  0443eb4  stfd 30, 160(1)
  0443eb8  stfd 31, 168(1)
  0443ebc  std 31, 136(1)
  0443ec0  ori 31, 3, 0
  0443ec4  lbz 4, 32(31)
  0443ec8  lwz 3, 120(31)
  0443ecc  lfs 3, 16(31)
  0443ed0  cmpwi 4, 1
  0443ed4  lfs 2, 20(31)
  0443ed8  cmpwi 1, 4, 2
  0443edc  cmpwi 6, 4, 0
  0443ee0  lfs 1, 24(31)
  0443ee4  cmpwi 7, 4, -1
  0443ee8  bt 1, 0x443ef8
  0443eec  bf 29, 0x4440ac
  0443ef0  bf 25, 0x443f00
  0443ef4  b 0x443f28
  0443ef8  bf 5, 0x443f88
  0443efc  b 0x4440ac
  0443f00  stfs 3, 0(3)
  0443f04  lfs 1, 20(31)
  0443f08  li 4, 1
  0443f0c  stfs 1, 4(3)
  0443f10  lfs 1, 24(31)
  0443f14  stfs 1, 8(3)
  0443f18  lfs 1, 28(31)
  0443f1c  stfs 1, 12(3)
  0443f20  stb 4, 32(31)
  0443f24  b 0x4440ac
  0443f28  lwz 3, 16(3)
  0443f2c  cmpwi 3, -1
  0443f30  bf 1, 0x4440ac
  0443f34  lis 4, 164
  0443f38  slwi 3, 3, 8
  0443f3c  lwz 4, -28512(4)
  0443f40  addc 3, 4, 3
  0443f44  clrldi 3, 3, 32
  0443f48  lhz 4, 166(3)
  0443f4c  cmpwi 4, 615
  0443f50  cmpwi 1, 4, 575
  0443f54  bt 2, 0x443f5c
  0443f58  bf 6, 0x4440ac
  0443f5c  lbz 3, 32(3)
  0443f60  cmpwi 3, 4
  0443f64  bf 2, 0x4440ac
  0443f68  li 6, 2
  0443f6c  li 3, 0
  0443f70  li 4, 0
  0443f74  ori 5, 31, 0
  0443f78  stb 6, 32(31)
  0443f7c  bl 0x15d12c
  0443f80  nop
  0443f84  b 0x4440ac
  0443f88  lfs 5, 212(31)
  0443f8c  fmr 4, 1
  0443f90  lfs 6, 208(31)
  0443f94  fmuls 1, 5, 5
  0443f98  lfs 7, 216(31)
  0443f9c  lis 4, 68
  0443fa0  addi 4, 4, 16024
  0443fa4  fmadds 1, 6, 6, 1
  0443fa8  lfs 13, 4(4)
  0443fac  lfs 31, 0(4)
  0443fb0  lis 4, 114
  0443fb4  lfs 10, 0(3)
  0443fb8  lfs 11, 4(3)
  0443fbc  lfs 12, 8(3)
  0443fc0  fmadds 1, 7, 7, 1
  0443fc4  fsqrts 8, 1
  0443fc8  lfs 1, 12(3)
  0443fcc  lfs 9, -3052(4)
  0443fd0  stfs 1, 124(1)
  0443fd4  addic 3, 1, 112
  0443fd8  fmuls 1, 9, 13
  0443fdc  fdivs 9, 13, 8
  0443fe0  fsub 13, 31, 8
  0443fe4  fsub 0, 31, 8
  0443fe8  fsub 30, 31, 8
  0443fec  fsub 29, 8, 31
  0443ff0  fsub 28, 8, 31
  0443ff4  fsub 8, 8, 31
  0443ff8  fmuls 7, 7, 9
  0443ffc  fmuls 5, 5, 9
  0444000  fmuls 6, 6, 9
  0444004  fsel 9, 13, 31, 7
  0444008  fsel 13, 0, 31, 5
  044400c  fsel 0, 30, 31, 6
  0444010  fsel 7, 29, 9, 7
  0444014  fsel 5, 28, 13, 5
  0444018  fsel 6, 8, 0, 6
  044401c  fadds 7, 12, 7
  0444020  fadds 5, 11, 5
  0444024  fadds 6, 10, 6
  0444028  fsubs 4, 7, 4
  044402c  fsubs 2, 5, 2
  0444030  fsubs 3, 6, 3
  0444034  stfs 4, 120(1)
  0444038  stfs 2, 116(1)
  044403c  stfs 3, 112(1)
  0444040  bl 0x110488
  0444044  nop
  0444048  lfs 1, 116(1)
  044404c  lfs 2, 112(1)
  0444050  fmuls 3, 1, 1
  0444054  lfs 4, 120(1)
  0444058  lfs 5, 16(31)
  044405c  lfs 6, 20(31)
  0444060  lfs 7, 24(31)
  0444064  fadds 1, 6, 1
  0444068  fmadds 3, 2, 2, 3
  044406c  fadds 2, 5, 2
  0444070  fmadds 3, 4, 4, 3
  0444074  fadds 4, 7, 4
  0444078  stfs 2, 16(31)
  044407c  stfs 1, 20(31)
  0444080  fsqrts 3, 3
  0444084  stfs 4, 24(31)
  0444088  fcmpu 0, 3, 31
  044408c  bf 2, 0x4440ac
  0444090  li 3, 1
  0444094  li 4, 0
  0444098  ori 5, 31, 0
  044409c  bl 0x15d12c
  04440a0  nop
  04440a4  li 3, 3
  04440a8  stb 3, 32(31)
  04440ac  ld 0, 192(1)
  04440b0  mtlr 0
  04440b4  lfd 28, 144(1)
  04440b8  lfd 29, 152(1)
  04440bc  lfd 30, 160(1)
  04440c0  lfd 31, 168(1)
  04440c4  ld 31, 136(1)
  04440c8  addi 1, 1, 176
  04440cc  blr
