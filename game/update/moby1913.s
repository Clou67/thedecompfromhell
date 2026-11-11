# game/update/moby1913.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1913_002d8e60:   # 0x2d8e60, 0x228 bytes
  02d8e60  stdu 1, -64(1)
  02d8e64  stfd 30, 48(1)
  02d8e68  stfd 31, 56(1)
  02d8e6c  cmpwi 3, 0
  02d8e70  li 8, 0
  02d8e74  bf 1, 0x2d9078
  02d8e78  ori 9, 4, 0
  02d8e7c  lis 4, 46
  02d8e80  lis 6, 149
  02d8e84  addi 10, 4, -29112
  02d8e88  ori 4, 7, 0
  02d8e8c  addic 7, 6, 5056
  02d8e90  ori 6, 5, 0
  02d8e94  ori 5, 9, 0
  02d8e98  lfs 5, 0(10)
  02d8e9c  lfs 4, 4(10)
  02d8ea0  lfs 3, 8(10)
  02d8ea4  lfs 2, 12(10)
  02d8ea8  lfs 1, 16(10)
  02d8eac  lfs 10, 4(6)
  02d8eb0  lfs 6, 324(7)
  02d8eb4  lfs 11, 0(6)
  02d8eb8  fsubs 10, 6, 10
  02d8ebc  lfs 6, 320(7)
  02d8ec0  lfs 9, 8(6)
  02d8ec4  fsubs 11, 6, 11
  02d8ec8  lfs 6, 328(7)
  02d8ecc  fsubs 9, 6, 9
  02d8ed0  fmr 8, 5
  02d8ed4  fmuls 6, 10, 10
  02d8ed8  fmr 7, 8
  02d8edc  fmadds 12, 11, 11, 6
  02d8ee0  fmr 6, 7
  02d8ee4  fmadds 12, 9, 9, 12
  02d8ee8  fsqrts 13, 12
  02d8eec  fcmpu 0, 13, 6
  02d8ef0  bt 2, 0x2d8f34
  02d8ef4  frsqrte 6, 12
  02d8ef8  fmuls 7, 12, 6
  02d8efc  fmuls 8, 6, 4
  02d8f00  fnmsubs 7, 7, 6, 3
  02d8f04  fmadds 6, 7, 8, 6
  02d8f08  fmuls 7, 12, 6
  02d8f0c  fmuls 8, 6, 4
  02d8f10  fnmsubs 7, 7, 6, 3
  02d8f14  fmadds 6, 7, 8, 6
  02d8f18  fmuls 7, 12, 6
  02d8f1c  fmuls 8, 6, 4
  02d8f20  fnmsubs 7, 7, 6, 3
  02d8f24  fmadds 6, 7, 8, 6
  02d8f28  fmuls 8, 11, 6
  02d8f2c  fmuls 7, 10, 6
  02d8f30  fmuls 6, 9, 6
  02d8f34  lfs 0, 4(5)
  02d8f38  lfs 31, 0(5)
  02d8f3c  fmuls 9, 0, 0
  02d8f40  lfs 13, 8(5)
  02d8f44  fmr 11, 5
  02d8f48  fmadds 12, 31, 31, 9
  02d8f4c  fmr 10, 11
  02d8f50  fmadds 12, 13, 13, 12
  02d8f54  fmr 9, 10
  02d8f58  fsqrts 30, 12
  02d8f5c  fcmpu 0, 30, 9
  02d8f60  bt 2, 0x2d8fa4
  02d8f64  frsqrte 9, 12
  02d8f68  fmuls 10, 12, 9
  02d8f6c  fmuls 11, 9, 4
  02d8f70  fnmsubs 10, 10, 9, 3
  02d8f74  fmadds 9, 10, 11, 9
  02d8f78  fmuls 10, 12, 9
  02d8f7c  fmuls 11, 9, 4
  02d8f80  fnmsubs 10, 10, 9, 3
  02d8f84  fmadds 9, 10, 11, 9
  02d8f88  fmuls 10, 12, 9
  02d8f8c  fmuls 11, 9, 4
  02d8f90  fnmsubs 10, 10, 9, 3
  02d8f94  fmadds 9, 10, 11, 9
  02d8f98  fmuls 11, 9, 31
  02d8f9c  fmuls 10, 9, 0
  02d8fa0  fmuls 9, 9, 13
  02d8fa4  fmr 12, 6
  02d8fa8  fmuls 6, 7, 10
  02d8fac  fmadds 6, 8, 11, 6
  02d8fb0  fmadds 6, 12, 9, 6
  02d8fb4  fmuls 13, 6, 2
  02d8fb8  fnmsubs 6, 13, 10, 7
  02d8fbc  fnmsubs 7, 13, 11, 8
  02d8fc0  fnmsubs 8, 13, 9, 12
  02d8fc4  fmr 12, 5
  02d8fc8  fmuls 9, 6, 6
  02d8fcc  fmr 11, 12
  02d8fd0  fmadds 9, 7, 7, 9
  02d8fd4  fmr 10, 11
  02d8fd8  fmadds 9, 8, 8, 9
  02d8fdc  fsqrts 13, 9
  02d8fe0  fcmpu 0, 13, 10
  02d8fe4  bt 2, 0x2d9028
  02d8fe8  frsqrte 10, 9
  02d8fec  fmuls 11, 9, 10
  02d8ff0  fmuls 12, 10, 4
  02d8ff4  fnmsubs 11, 11, 10, 3
  02d8ff8  fmadds 10, 11, 12, 10
  02d8ffc  fmuls 11, 9, 10
  02d9000  fmuls 12, 10, 4
  02d9004  fnmsubs 11, 11, 10, 3
  02d9008  fmadds 10, 11, 12, 10
  02d900c  fmuls 9, 9, 10
  02d9010  fmuls 11, 10, 4
  02d9014  fnmsubs 9, 9, 10, 3
  02d9018  fmadds 10, 9, 11, 10
  02d901c  fmuls 12, 10, 7
  02d9020  fmuls 11, 10, 6
  02d9024  fmuls 10, 10, 8
  02d9028  fmuls 6, 11, 11
  02d902c  fadds 7, 10, 3
  02d9030  addic 8, 8, 1
  02d9034  addic 6, 6, 12
  02d9038  cmpw 8, 3
  02d903c  fmadds 6, 12, 12, 6
  02d9040  addic 5, 5, 12
  02d9044  fmadds 6, 7, 7, 6
  02d9048  fsqrts 6, 6
  02d904c  fmuls 6, 6, 2
  02d9050  fdivs 7, 12, 6
  02d9054  fdivs 6, 11, 6
  02d9058  fadds 7, 7, 4
  02d905c  fmuls 7, 7, 1
  02d9060  fadds 6, 6, 4
  02d9064  stfs 7, 0(4)
  02d9068  fmuls 6, 6, 1
  02d906c  stfs 6, 4(4)
  02d9070  addic 4, 4, 8
  02d9074  bt 0, 0x2d8eac
  02d9078  lfd 30, 48(1)
  02d907c  lfd 31, 56(1)
  02d9080  addi 1, 1, 64
  02d9084  blr

M1913_002d9088:   # 0x2d9088, 0x19c bytes
  02d9088  stdu 1, -176(1)
  02d908c  mflr 0
  02d9090  std 0, 192(1)
  02d9094  std 31, 168(1)
  02d9098  std 30, 160(1)
  02d909c  std 29, 152(1)
  02d90a0  std 28, 144(1)
  02d90a4  std 27, 136(1)
  02d90a8  std 26, 128(1)
  02d90ac  std 25, 120(1)
  02d90b0  li 3, 48
  02d90b4  bl 0x685c4
  02d90b8  nop
  02d90bc  ori 4, 3, 0
  02d90c0  li 3, 24
  02d90c4  bl 0x174f80
  02d90c8  nop
  02d90cc  li 3, 0
  02d90d0  li 4, 1
  02d90d4  li 5, 2
  02d90d8  li 6, 1
  02d90dc  li 7, 32
  02d90e0  bl 0x502ea8
  02d90e4  nop
  02d90e8  ori 4, 3, 0
  02d90ec  li 3, 3
  02d90f0  bl 0x174f80
  02d90f4  nop
  02d90f8  li 3, 0
  02d90fc  li 4, 0
  02d9100  li 5, 0
  02d9104  li 6, 0
  02d9108  li 7, 0
  02d910c  li 8, 0
  02d9110  bl 0x502f08
  02d9114  nop
  02d9118  ori 4, 3, 0
  02d911c  li 3, 6
  02d9120  bl 0x174f80
  02d9124  nop
  02d9128  li 3, 0
  02d912c  lis 9, 0
  02d9130  li 4, 0
  02d9134  li 5, 1
  02d9138  li 6, 1
  02d913c  li 7, 1
  02d9140  li 8, 0
  02d9144  ori 9, 9, 65424
  02d9148  bl 0x502fd4
  02d914c  nop
  02d9150  ori 4, 3, 0
  02d9154  li 3, 26
  02d9158  bl 0x174f80
  02d915c  nop
  02d9160  bl 0x71170
  02d9164  nop
  02d9168  lis 29, 126
  02d916c  lis 31, 126
  02d9170  lis 27, 126
  02d9174  lis 30, 126
  02d9178  lis 28, 126
  02d917c  lis 26, 268
  02d9180  li 25, 0
  02d9184  addic 27, 27, -15368
  02d9188  addic 29, 29, -22496
  02d918c  addic 28, 28, -15376
  02d9190  addic 31, 31, -15360
  02d9194  addic 30, 30, -15384
  02d9198  addic 26, 26, -32048
  02d919c  lwz 3, 0(29)
  02d91a0  ori 7, 26, 0
  02d91a4  lwz 4, 0(27)
  02d91a8  lwz 5, 0(30)
  02d91ac  extsw 3, 3
  02d91b0  lwz 6, 0(28)
  02d91b4  bl 0x2d8e60
  02d91b8  lwz 3, 0(29)
  02d91bc  ori 6, 26, 0
  02d91c0  lwz 4, 0(30)
  02d91c4  li 7, 9
  02d91c8  lwz 5, 0(31)
  02d91cc  extsw 3, 3
  02d91d0  bl 0x74604
  02d91d4  nop
  02d91d8  addic 25, 25, 1
  02d91dc  addic 27, 27, 4
  02d91e0  cmpwi 25, 2
  02d91e4  addic 28, 28, 4
  02d91e8  addic 29, 29, 4
  02d91ec  addic 30, 30, 4
  02d91f0  addic 31, 31, 4
  02d91f4  bt 0, 0x2d919c
  02d91f8  ld 0, 192(1)
  02d91fc  mtlr 0
  02d9200  ld 25, 120(1)
  02d9204  ld 26, 128(1)
  02d9208  ld 27, 136(1)
  02d920c  ld 28, 144(1)
  02d9210  ld 29, 152(1)
  02d9214  ld 30, 160(1)
  02d9218  ld 31, 168(1)
  02d921c  addi 1, 1, 176
  02d9220  blr

UpdateMoby_1913:   # 0x2d9224, 0x60 bytes
  02d9224  stdu 1, -112(1)
  02d9228  mflr 0
  02d922c  std 0, 128(1)
  02d9230  lbz 4, 32(3)
  02d9234  cmpwi 4, 0
  02d9238  cmpwi 1, 4, 1
  02d923c  cmpwi 6, 4, -1
  02d9240  bt 1, 0x2d924c
  02d9244  bf 25, 0x2d9274
  02d9248  b 0x2d9254
  02d924c  bf 5, 0x2d9260
  02d9250  b 0x2d9274
  02d9254  li 4, 1
  02d9258  stb 4, 32(3)
  02d925c  b 0x2d9274
  02d9260  lis 5, 113
  02d9264  ori 4, 3, 0
  02d9268  addic 3, 5, -19352
  02d926c  bl 0x6d720
  02d9270  nop
  02d9274  ld 0, 128(1)
  02d9278  mtlr 0
  02d927c  addi 1, 1, 112
  02d9280  blr
