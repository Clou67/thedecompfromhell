# game/update/moby1218.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1215_0020ab50:   # 0x20ab50, 0xf8 bytes
  020ab50  stdu 1, -144(1)
  020ab54  mflr 0
  020ab58  std 0, 160(1)
  020ab5c  std 30, 128(1)
  020ab60  ori 30, 3, 0
  020ab64  std 31, 136(1)
  020ab68  ori 3, 5, 0
  020ab6c  std 29, 120(1)
  020ab70  std 28, 112(1)
  020ab74  ori 31, 4, 0
  020ab78  bl 0xefa28
  020ab7c  nop
  020ab80  ori 29, 3, 0
  020ab84  cmpwi 29, 0
  020ab88  bt 2, 0x20ac24
  020ab8c  li 3, 255
  020ab90  li 4, 1
  020ab94  li 28, 0
  020ab98  stb 3, 48(29)
  020ab9c  stb 4, 49(29)
  020aba0  stb 28, 32(29)
  020aba4  stb 28, 188(29)
  020aba8  lfs 1, 0(30)
  020abac  lwz 4, 120(29)
  020abb0  stfs 1, 16(29)
  020abb4  lfs 1, 4(30)
  020abb8  stfs 1, 20(29)
  020abbc  lfs 1, 8(30)
  020abc0  stfs 1, 24(29)
  020abc4  lfs 1, 12(30)
  020abc8  sth 3, 50(29)
  020abcc  stfs 1, 28(29)
  020abd0  lfs 1, 0(31)
  020abd4  stfs 1, 16(4)
  020abd8  lfs 1, 4(31)
  020abdc  stfs 1, 20(4)
  020abe0  lfs 1, 8(31)
  020abe4  stfs 1, 24(4)
  020abe8  lfs 1, 12(31)
  020abec  stfs 1, 28(4)
  020abf0  bl 0xfcc68
  020abf4  nop
  020abf8  lis 4, 16201
  020abfc  stfs 1, 72(29)
  020ac00  stw 28, 64(29)
  020ac04  ori 3, 29, 0
  020ac08  ori 4, 4, 4059
  020ac0c  stw 4, 68(29)
  020ac10  bl 0xf31a8
  020ac14  nop
  020ac18  ori 3, 29, 0
  020ac1c  bl 0x10c000
  020ac20  nop
  020ac24  ori 3, 29, 0
  020ac28  ld 0, 160(1)
  020ac2c  mtlr 0
  020ac30  ld 28, 112(1)
  020ac34  ld 29, 120(1)
  020ac38  ld 30, 128(1)
  020ac3c  ld 31, 136(1)
  020ac40  addi 1, 1, 144
  020ac44  blr

M1220_0020ac48:   # 0x20ac48, 0x140 bytes
  020ac48  stdu 1, -128(1)
  020ac4c  mflr 0
  020ac50  std 0, 144(1)
  020ac54  std 30, 112(1)
  020ac58  ori 30, 3, 0
  020ac5c  std 31, 120(1)
  020ac60  lwz 3, 52(4)
  020ac64  ori 31, 4, 0
  020ac68  cmpwi 3, 0
  020ac6c  bf 2, 0x20ac80
  020ac70  ori 3, 30, 0
  020ac74  bl 0x20b6b0
  020ac78  nop
  020ac7c  stw 3, 52(31)
  020ac80  cmpwi 3, 0
  020ac84  bt 2, 0x20ad40
  020ac88  lbz 4, 32(3)
  020ac8c  cmpwi 1, 4, 253
  020ac90  cmpwi 4, 254
  020ac94  cror 2, 2, 6
  020ac98  bt 2, 0x20ad40
  020ac9c  ori 4, 3, 0
  020aca0  lfs 1, 16(30)
  020aca4  stfs 1, 16(4)
  020aca8  lfs 1, 20(30)
  020acac  stfs 1, 20(4)
  020acb0  lfs 1, 24(30)
  020acb4  stfs 1, 24(4)
  020acb8  lfs 1, 28(30)
  020acbc  stfs 1, 28(4)
  020acc0  lfs 1, 64(30)
  020acc4  stfs 1, 64(4)
  020acc8  lfs 1, 68(30)
  020accc  stfs 1, 68(4)
  020acd0  lfs 1, 72(30)
  020acd4  stfs 1, 72(4)
  020acd8  lfs 1, 76(30)
  020acdc  stfs 1, 76(4)
  020ace0  bl 0xf31a8
  020ace4  nop
  020ace8  lwz 3, 52(31)
  020acec  li 4, 0
  020acf0  ori 5, 31, 0
  020acf4  bl 0xf1114
  020acf8  nop
  020acfc  lwz 4, 52(31)
  020ad00  lfs 1, 0(31)
  020ad04  lfs 2, 4(31)
  020ad08  li 3, 1
  020ad0c  lfs 3, 16(4)
  020ad10  fsubs 1, 3, 1
  020ad14  lfs 3, 8(31)
  020ad18  stfs 1, 32(31)
  020ad1c  lfs 1, 20(4)
  020ad20  fsubs 1, 1, 2
  020ad24  stfs 1, 36(31)
  020ad28  lfs 1, 24(4)
  020ad2c  fsubs 1, 1, 3
  020ad30  stfs 1, 40(31)
  020ad34  lfs 1, 28(4)
  020ad38  stfs 1, 44(31)
  020ad3c  b 0x20ad70
  020ad40  lfs 1, 16(30)
  020ad44  vspltisw 2, 0
  020ad48  li 4, 32
  020ad4c  stfs 1, 0(31)
  020ad50  li 3, 0
  020ad54  lfs 1, 20(30)
  020ad58  stfs 1, 4(31)
  020ad5c  lfs 1, 24(30)
  020ad60  stfs 1, 8(31)
  020ad64  lfs 1, 28(30)
  020ad68  stfs 1, 12(31)
  020ad6c  stvx 2, 4, 31
  020ad70  ld 0, 144(1)
  020ad74  mtlr 0
  020ad78  ld 30, 112(1)
  020ad7c  ld 31, 120(1)
  020ad80  addi 1, 1, 128
  020ad84  blr

UpdateMoby_1218:   # 0x20ade8, 0x8b0 bytes
  020ade8  stdu 1, -304(1)
  020adec  mflr 0
  020adf0  std 0, 320(1)
  020adf4  stfd 28, 272(1)
  020adf8  stfd 29, 280(1)
  020adfc  stfd 30, 288(1)
  020ae00  stfd 31, 296(1)
  020ae04  std 30, 256(1)
  020ae08  std 25, 216(1)
  020ae0c  lis 4, 33
  020ae10  lis 30, 151
  020ae14  std 31, 264(1)
  020ae18  addi 25, 4, -21112
  020ae1c  ori 31, 3, 0
  020ae20  std 27, 232(1)
  020ae24  addic 30, 30, -25376
  020ae28  std 24, 208(1)
  020ae2c  li 27, 0
  020ae30  addic 24, 1, 192
  020ae34  std 29, 248(1)
  020ae38  lfs 31, 0(25)
  020ae3c  std 28, 240(1)
  020ae40  ori 29, 27, 0
  020ae44  lwz 28, 120(31)
  020ae48  std 26, 224(1)
  020ae4c  li 4, 0
  020ae50  lwz 26, 5616(30)
  020ae54  ori 5, 24, 0
  020ae58  fmr 30, 31
  020ae5c  bl 0xf1114
  020ae60  nop
  020ae64  ori 3, 24, 0
  020ae68  lfs 1, 4(25)
  020ae6c  li 5, 0
  020ae70  ori 6, 31, 0
  020ae74  bl 0x59e20
  020ae78  nop
  020ae7c  cmpwi 3, 0
  020ae80  bt 2, 0x20af90
  020ae84  lis 3, 161
  020ae88  addic 3, 3, 2368
  020ae8c  lwz 3, 24(3)
  020ae90  cmpwi 3, 0
  020ae94  bt 2, 0x20af28
  020ae98  lhz 3, 166(3)
  020ae9c  cmpwi 1, 3, 69
  020aea0  cmpwi 3, 1242
  020aea4  cror 2, 2, 6
  020aea8  bt 2, 0x20aeb4
  020aeac  cmpwi 3, 1379
  020aeb0  bf 2, 0x20aebc
  020aeb4  li 27, 1
  020aeb8  b 0x20af90
  020aebc  lis 3, 33
  020aec0  li 7, -1
  020aec4  addi 3, 3, -21112
  020aec8  li 6, 1
  020aecc  addic 4, 28, 16
  020aed0  addic 5, 1, 192
  020aed4  li 8, 3
  020aed8  lfs 1, 16(3)
  020aedc  li 9, 2
  020aee0  lfs 5, 8(3)
  020aee4  li 10, 5
  020aee8  lfs 6, 12(3)
  020aeec  fmr 2, 1
  020aef0  std 7, 144(1)
  020aef4  ori 3, 31, 0
  020aef8  std 27, 160(1)
  020aefc  fmr 3, 1
  020af00  std 6, 168(1)
  020af04  fmr 4, 1
  020af08  std 7, 176(1)
  020af0c  fmr 7, 1
  020af10  std 27, 184(1)
  020af14  bl 0x10e030
  020af18  nop
  020af1c  li 3, 5
  020af20  stb 3, 32(31)
  020af24  b 0x20af90
  020af28  lis 3, 33
  020af2c  li 11, -1
  020af30  addi 6, 3, -21112
  020af34  li 7, 1
  020af38  ori 3, 31, 0
  020af3c  addic 4, 28, 16
  020af40  addic 5, 1, 192
  020af44  lfs 1, 16(6)
  020af48  lfs 5, 8(6)
  020af4c  li 8, 3
  020af50  lfs 6, 12(6)
  020af54  li 9, 2
  020af58  std 11, 144(1)
  020af5c  li 10, 5
  020af60  std 27, 160(1)
  020af64  fmr 2, 1
  020af68  std 7, 168(1)
  020af6c  fmr 3, 1
  020af70  std 11, 176(1)
  020af74  fmr 4, 1
  020af78  std 27, 184(1)
  020af7c  fmr 7, 1
  020af80  bl 0x10e030
  020af84  nop
  020af88  li 3, 5
  020af8c  stb 3, 32(31)
  020af90  lbz 4, 32(31)
  020af94  cmpwi 4, 4
  020af98  bf 0, 0x20b16c
  020af9c  lwz 3, 8324(30)
  020afa0  cmpwi 3, 50
  020afa4  bf 2, 0x20b044
  020afa8  cmpwi 26, 0
  020afac  bt 2, 0x20b044
  020afb0  lbz 3, 32(26)
  020afb4  cmpwi 1, 3, 253
  020afb8  cmpwi 3, 254
  020afbc  cror 2, 2, 6
  020afc0  bt 2, 0x20b044
  020afc4  lhz 3, 166(26)
  020afc8  cmpwi 1, 3, 69
  020afcc  cmpwi 3, 1242
  020afd0  cror 2, 2, 6
  020afd4  bt 2, 0x20afe0
  020afd8  cmpwi 3, 1379
  020afdc  bf 2, 0x20b044
  020afe0  lfs 1, 20(26)
  020afe4  lis 3, 33
  020afe8  lfs 2, 20(31)
  020afec  lfs 3, 16(26)
  020aff0  lfs 5, 4(28)
  020aff4  fsubs 4, 1, 2
  020aff8  addi 3, 3, -21112
  020affc  lfs 6, 16(31)
  020b000  fadds 2, 2, 5
  020b004  fsubs 7, 3, 6
  020b008  lfs 5, 20(3)
  020b00c  lfs 8, 0(28)
  020b010  lfs 9, 24(26)
  020b014  fadds 6, 6, 8
  020b018  fmuls 4, 4, 4
  020b01c  lfs 8, 24(31)
  020b020  fnmsubs 1, 2, 5, 1
  020b024  fsubs 8, 9, 8
  020b028  fnmsubs 2, 6, 5, 3
  020b02c  fmadds 3, 7, 7, 4
  020b030  fmuls 1, 1, 1
  020b034  fmadds 31, 8, 8, 3
  020b038  fmadds 30, 2, 2, 1
  020b03c  fsqrts 31, 31
  020b040  fsqrts 30, 30
  020b044  cmpwi 27, 0
  020b048  bf 2, 0x20b068
  020b04c  lis 3, 33
  020b050  addi 3, 3, -21112
  020b054  lfs 1, 24(3)
  020b058  fcmpu 0, 31, 1
  020b05c  fcmpu 1, 30, 1
  020b060  bt 0, 0x20b068
  020b064  bf 4, 0x20b16c
  020b068  stw 29, 148(31)
  020b06c  lwz 28, 52(28)
  020b070  cmpwi 28, 0
  020b074  bt 2, 0x20b07c
  020b078  stw 29, 148(28)
  020b07c  lhz 3, 166(31)
  020b080  extsh 3, 3
  020b084  cmpwi 3, 1218
  020b088  cmpwi 1, 3, 1217
  020b08c  cmpwi 6, 3, 1220
  020b090  bt 1, 0x20b09c
  020b094  bf 5, 0x20b530
  020b098  b 0x20b0a4
  020b09c  bt 26, 0x20b100
  020b0a0  b 0x20b530
  020b0a4  lbz 3, 5622(30)
  020b0a8  lwz 4, 5616(30)
  020b0ac  addic 3, 3, 5
  020b0b0  cmpwi 4, 0
  020b0b4  stb 3, 5622(30)
  020b0b8  bt 2, 0x20b0e8
  020b0bc  lbz 5, 32(4)
  020b0c0  cmpwi 1, 5, 253
  020b0c4  cmpwi 5, 254
  020b0c8  cror 2, 2, 6
  020b0cc  bt 2, 0x20b0e8
  020b0d0  ori 5, 4, 0
  020b0d4  li 3, 4
  020b0d8  li 4, 0
  020b0dc  bl 0x15d12c
  020b0e0  nop
  020b0e4  lbz 3, 5622(30)
  020b0e8  clrlwi 4, 3, 24
  020b0ec  lbz 3, 5623(30)
  020b0f0  cmpw 4, 3
  020b0f4  bf 1, 0x20b530
  020b0f8  stb 3, 5622(30)
  020b0fc  b 0x20b530
  020b100  lis 3, 33
  020b104  lfs 1, 5632(30)
  020b108  lfs 2, 5628(30)
  020b10c  addi 3, 3, -21112
  020b110  lfs 3, 28(3)
  020b114  lwz 3, 5616(30)
  020b118  fmadds 2, 1, 3, 2
  020b11c  cmpwi 3, 0
  020b120  stfs 2, 5628(30)
  020b124  bt 2, 0x20b158
  020b128  lbz 4, 32(3)
  020b12c  cmpwi 1, 4, 253
  020b130  cmpwi 4, 254
  020b134  cror 2, 2, 6
  020b138  bt 2, 0x20b158
  020b13c  ori 5, 3, 0
  020b140  li 3, 5
  020b144  li 4, 0
  020b148  bl 0x15d12c
  020b14c  nop
  020b150  lfs 1, 5632(30)
  020b154  lfs 2, 5628(30)
  020b158  fcmpu 0, 2, 1
  020b15c  cror 6, 0, 2
  020b160  bt 6, 0x20b530
  020b164  stfs 1, 5628(30)
  020b168  b 0x20b530
  020b16c  cmpwi 4, 5
  020b170  bt 2, 0x20b53c
  020b174  cmpwi 4, 4
  020b178  bt 2, 0x20b530
  020b17c  cmpwi 4, 3
  020b180  bt 2, 0x20b4dc
  020b184  cmpwi 4, 2
  020b188  bt 2, 0x20b2b4
  020b18c  cmpwi 4, 1
  020b190  bt 2, 0x20b1bc
  020b194  cmpwi 4, 0
  020b198  bf 2, 0x20b54c
  020b19c  ori 3, 31, 0
  020b1a0  ori 4, 28, 0
  020b1a4  stw 29, 52(28)
  020b1a8  bl 0x20ac48
  020b1ac  li 3, 1
  020b1b0  stw 29, 48(28)
  020b1b4  stb 3, 32(31)
  020b1b8  b 0x20b54c
  020b1bc  lis 3, 33
  020b1c0  lfs 1, 16(28)
  020b1c4  lis 4, 114
  020b1c8  addi 3, 3, -21112
  020b1cc  lfs 2, 32(3)
  020b1d0  lfs 3, 20(28)
  020b1d4  fmuls 1, 1, 2
  020b1d8  lfs 4, 24(28)
  020b1dc  fmuls 3, 3, 2
  020b1e0  lfs 5, 4(28)
  020b1e4  lfs 6, 0(28)
  020b1e8  lfs 7, 8(28)
  020b1ec  lfs 8, 32(28)
  020b1f0  stfs 1, 16(28)
  020b1f4  stfs 3, 20(28)
  020b1f8  fadds 1, 6, 1
  020b1fc  fadds 3, 5, 3
  020b200  lfs 9, 36(3)
  020b204  lfs 10, -3048(4)
  020b208  fmuls 5, 10, 9
  020b20c  ori 3, 31, 0
  020b210  ori 4, 28, 0
  020b214  stfs 3, 4(28)
  020b218  fadds 3, 1, 8
  020b21c  stfs 1, 0(28)
  020b220  fmsubs 1, 4, 2, 5
  020b224  fadds 2, 7, 1
  020b228  stfs 1, 24(28)
  020b22c  stfs 2, 8(28)
  020b230  stfs 3, 16(31)
  020b234  lfs 1, 4(28)
  020b238  lfs 2, 36(28)
  020b23c  fadds 1, 1, 2
  020b240  stfs 1, 20(31)
  020b244  lfs 1, 40(28)
  020b248  lfs 2, 8(28)
  020b24c  fadds 1, 2, 1
  020b250  stfs 1, 24(31)
  020b254  lfs 1, 12(28)
  020b258  stfs 1, 28(31)
  020b25c  bl 0x20ac48
  020b260  cmpwi 3, 0
  020b264  bt 2, 0x20b54c
  020b268  lwz 3, 52(28)
  020b26c  lbz 3, 82(3)
  020b270  cmpwi 3, 1
  020b274  bf 2, 0x20b54c
  020b278  lis 3, 33
  020b27c  lfs 1, 16(28)
  020b280  addi 3, 3, -21112
  020b284  lfs 2, 40(3)
  020b288  lfs 3, 20(28)
  020b28c  li 3, 2
  020b290  lfs 4, 24(28)
  020b294  fmuls 1, 1, 2
  020b298  fmuls 3, 3, 2
  020b29c  fmuls 2, 4, 2
  020b2a0  stfs 1, 16(28)
  020b2a4  stfs 3, 20(28)
  020b2a8  stfs 2, 24(28)
  020b2ac  stb 3, 32(31)
  020b2b0  b 0x20b54c
  020b2b4  lis 3, 33
  020b2b8  lis 29, 114
  020b2bc  lfs 1, 72(31)
  020b2c0  addi 30, 3, -21112
  020b2c4  lfs 2, 44(30)
  020b2c8  lfs 3, -3052(29)
  020b2cc  fmuls 2, 3, 2
  020b2d0  bl 0x502578
  020b2d4  nop
  020b2d8  stfs 1, 72(31)
  020b2dc  lfs 3, 48(30)
  020b2e0  lfs 1, 48(28)
  020b2e4  lfs 4, -3052(29)
  020b2e8  fmuls 2, 4, 3
  020b2ec  bl 0x502578
  020b2f0  nop
  020b2f4  lfs 2, 52(30)
  020b2f8  lfs 3, 56(30)
  020b2fc  fadds 2, 1, 2
  020b300  lfs 4, 60(30)
  020b304  lfs 6, 64(30)
  020b308  lis 3, 114
  020b30c  fsubs 3, 3, 2
  020b310  fsubs 4, 4, 2
  020b314  fsub 5, 2, 3
  020b318  fsel 2, 5, 3, 2
  020b31c  lfs 3, 68(30)
  020b320  fsub 5, 4, 2
  020b324  fsel 2, 5, 4, 2
  020b328  lfs 4, 72(30)
  020b32c  lfs 5, 76(30)
  020b330  lfs 8, 80(30)
  020b334  stfs 1, 48(28)
  020b338  fmuls 7, 2, 2
  020b33c  fmuls 9, 7, 2
  020b340  fmuls 10, 7, 9
  020b344  fmadds 2, 9, 6, 2
  020b348  fmuls 1, 7, 10
  020b34c  fmadds 2, 10, 3, 2
  020b350  fmuls 3, 7, 1
  020b354  fmadds 1, 1, 4, 2
  020b358  fmadds 1, 3, 5, 1
  020b35c  fmuls 1, 1, 8
  020b360  stfs 1, 68(31)
  020b364  lfs 8, 40(30)
  020b368  lfs 7, 16(28)
  020b36c  lfs 6, 20(28)
  020b370  fmuls 7, 7, 8
  020b374  lfs 5, 24(28)
  020b378  fmuls 6, 6, 8
  020b37c  stfs 7, 16(28)
  020b380  stfs 6, 20(28)
  020b384  lfs 1, 36(30)
  020b388  lfs 9, -3048(3)
  020b38c  lfs 4, 0(28)
  020b390  fmuls 9, 9, 1
  020b394  lfs 3, 4(28)
  020b398  lfs 2, 8(28)
  020b39c  lfs 1, 32(28)
  020b3a0  fmsubs 5, 5, 8, 9
  020b3a4  stfs 5, 24(28)
  020b3a8  lfs 9, 84(30)
  020b3ac  fcmpu 0, 31, 9
  020b3b0  cror 6, 1, 2
  020b3b4  bt 6, 0x20b464
  020b3b8  lbz 3, 49(31)
  020b3bc  cmpwi 3, 0
  020b3c0  bt 2, 0x20b464
  020b3c4  fsqrts 9, 31
  020b3c8  lfs 10, 20(26)
  020b3cc  lfs 11, 20(31)
  020b3d0  lfs 12, 16(26)
  020b3d4  lfs 13, 16(31)
  020b3d8  lfs 0, 24(26)
  020b3dc  lfs 31, 24(31)
  020b3e0  lis 3, 33
  020b3e4  addi 3, 3, -21112
  020b3e8  fsubs 10, 10, 11
  020b3ec  fsubs 11, 12, 13
  020b3f0  fsubs 12, 0, 31
  020b3f4  fmuls 13, 10, 10
  020b3f8  fmadds 13, 11, 11, 13
  020b3fc  fmadds 13, 12, 12, 13
  020b400  fdivs 8, 8, 9
  020b404  fsqrts 9, 13
  020b408  lfs 13, 16(3)
  020b40c  fdivs 8, 8, 9
  020b410  fsub 0, 13, 9
  020b414  fsub 31, 13, 9
  020b418  fsub 30, 13, 9
  020b41c  fsub 29, 9, 13
  020b420  fsub 28, 9, 13
  020b424  fsub 9, 9, 13
  020b428  fmuls 12, 8, 12
  020b42c  fmuls 10, 8, 10
  020b430  fmuls 8, 8, 11
  020b434  fsel 11, 0, 13, 12
  020b438  fsel 0, 31, 13, 10
  020b43c  fsel 13, 30, 13, 8
  020b440  fsel 11, 29, 11, 12
  020b444  fsel 10, 28, 0, 10
  020b448  fsel 8, 9, 13, 8
  020b44c  fadds 5, 5, 11
  020b450  fadds 6, 6, 10
  020b454  fadds 7, 7, 8
  020b458  stfs 5, 24(28)
  020b45c  stfs 6, 20(28)
  020b460  stfs 7, 16(28)
  020b464  fadds 4, 4, 7
  020b468  fadds 3, 3, 6
  020b46c  fadds 2, 2, 5
  020b470  ori 3, 31, 0
  020b474  ori 4, 28, 0
  020b478  fadds 1, 4, 1
  020b47c  stfs 3, 4(28)
  020b480  stfs 4, 0(28)
  020b484  stfs 2, 8(28)
  020b488  stfs 1, 16(31)
  020b48c  lfs 1, 36(28)
  020b490  lfs 2, 4(28)
  020b494  fadds 1, 2, 1
  020b498  stfs 1, 20(31)
  020b49c  lfs 1, 8(28)
  020b4a0  lfs 2, 40(28)
  020b4a4  fadds 1, 1, 2
  020b4a8  stfs 1, 24(31)
  020b4ac  lfs 1, 12(28)
  020b4b0  stfs 1, 28(31)
  020b4b4  bl 0x20ac48
  020b4b8  cmpwi 3, 0
  020b4bc  bt 2, 0x20b54c
  020b4c0  lwz 3, 52(28)
  020b4c4  lbz 3, 32(3)
  020b4c8  cmpwi 3, 2
  020b4cc  bf 2, 0x20b54c
  020b4d0  li 3, 2
  020b4d4  stb 3, 32(31)
  020b4d8  b 0x20b54c
  020b4dc  lis 3, 33
  020b4e0  lfs 1, 24(28)
  020b4e4  lis 4, 114
  020b4e8  addi 3, 3, -21112
  020b4ec  lfs 2, 36(3)
  020b4f0  lfs 3, -3048(4)
  020b4f4  lfs 4, 16(28)
  020b4f8  fnmsubs 1, 3, 2, 1
  020b4fc  stfs 1, 24(28)
  020b500  lfs 1, 16(31)
  020b504  lfs 2, 20(31)
  020b508  fadds 1, 1, 4
  020b50c  lfs 3, 24(31)
  020b510  stfs 1, 16(31)
  020b514  lfs 1, 20(28)
  020b518  fadds 1, 2, 1
  020b51c  stfs 1, 20(31)
  020b520  lfs 1, 24(28)
  020b524  fadds 1, 3, 1
  020b528  stfs 1, 24(31)
  020b52c  b 0x20b54c
  020b530  li 3, 5
  020b534  stb 3, 32(31)
  020b538  b 0x20b54c
  020b53c  ori 3, 31, 0
  020b540  bl 0xefb38
  020b544  nop
  020b548  b 0x20b658
  020b54c  lis 4, 33
  020b550  lwz 5, 24(31)
  020b554  lis 3, 16800
  020b558  addi 4, 4, -21112
  020b55c  lfs 3, 24(31)
  020b560  srawi 6, 5, 31
  020b564  srwi 7, 6, 1
  020b568  lfs 2, 88(4)
  020b56c  xor 4, 7, 5
  020b570  subc 4, 4, 6
  020b574  cmpw 1, 4, 3
  020b578  bf 4, 0x20b58c
  020b57c  ori 3, 31, 0
  020b580  bl 0xefb38
  020b584  nop
  020b588  b 0x20b658
  020b58c  lwz 4, 16(31)
  020b590  lfs 1, 16(31)
  020b594  srawi 5, 4, 31
  020b598  srwi 6, 5, 1
  020b59c  xor 4, 6, 4
  020b5a0  subc 4, 4, 5
  020b5a4  cmpw 4, 3
  020b5a8  bf 0, 0x20b5b4
  020b5ac  fmr 1, 2
  020b5b0  stw 3, 16(31)
  020b5b4  fmr 4, 1
  020b5b8  lis 4, 33
  020b5bc  addi 4, 4, -21112
  020b5c0  lfs 1, 92(4)
  020b5c4  fcmpu 0, 4, 1
  020b5c8  cror 2, 0, 2
  020b5cc  bt 2, 0x20b5dc
  020b5d0  lis 4, 17530
  020b5d4  ori 4, 4, 49152
  020b5d8  stw 4, 16(31)
  020b5dc  lwz 4, 20(31)
  020b5e0  lfs 4, 20(31)
  020b5e4  srawi 5, 4, 31
  020b5e8  srwi 6, 5, 1
  020b5ec  xor 4, 6, 4
  020b5f0  subc 4, 4, 5
  020b5f4  cmpw 4, 3
  020b5f8  bf 0, 0x20b604
  020b5fc  fmr 4, 2
  020b600  stw 3, 20(31)
  020b604  fcmpu 0, 4, 1
  020b608  cror 2, 0, 2
  020b60c  bt 2, 0x20b61c
  020b610  lis 4, 17530
  020b614  ori 4, 4, 49152
  020b618  stw 4, 20(31)
  020b61c  bf 4, 0x20b628
  020b620  fmr 3, 2
  020b624  stw 3, 24(31)
  020b628  fcmpu 0, 3, 1
  020b62c  cror 6, 0, 2
  020b630  bt 6, 0x20b640
  020b634  lis 3, 17530
  020b638  ori 3, 3, 49152
  020b63c  stw 3, 24(31)
  020b640  lis 3, 33
  020b644  addi 4, 3, -21112
  020b648  ori 3, 31, 0
  020b64c  lfs 1, 20(4)
  020b650  bl 0x106150
  020b654  nop
  020b658  ld 0, 320(1)
  020b65c  mtlr 0
  020b660  lfd 28, 272(1)
  020b664  lfd 29, 280(1)
  020b668  lfd 30, 288(1)
  020b66c  lfd 31, 296(1)
  020b670  ld 24, 208(1)
  020b674  ld 25, 216(1)
  020b678  ld 26, 224(1)
  020b67c  ld 27, 232(1)
  020b680  ld 28, 240(1)
  020b684  ld 29, 248(1)
  020b688  ld 30, 256(1)
  020b68c  ld 31, 264(1)
  020b690  addi 1, 1, 304
  020b694  blr

M1220_0020b698:   # 0x20b698, 0x14 bytes
  020b698  lis 3, 118
  020b69c  lis 4, 1
  020b6a0  addic 3, 3, 27080
  020b6a4  stw 4, 72(3)
  020b6a8  blr

M1220_0020b6b0:   # 0x20b6b0, 0xf0 bytes
  020b6b0  stdu 1, -128(1)
  020b6b4  mflr 0
  020b6b8  std 0, 144(1)
  020b6bc  std 31, 120(1)
  020b6c0  ori 31, 3, 0
  020b6c4  std 30, 112(1)
  020b6c8  li 3, 1219
  020b6cc  bl 0xefa28
  020b6d0  nop
  020b6d4  ori 30, 3, 0
  020b6d8  cmpwi 30, 0
  020b6dc  bt 2, 0x20b784
  020b6e0  li 3, 255
  020b6e4  li 4, 1
  020b6e8  li 5, 0
  020b6ec  stb 3, 48(30)
  020b6f0  stb 4, 49(30)
  020b6f4  stb 5, 32(30)
  020b6f8  stb 5, 188(30)
  020b6fc  lfs 1, 16(31)
  020b700  lwz 4, 120(30)
  020b704  stfs 1, 16(30)
  020b708  lfs 1, 20(31)
  020b70c  stfs 1, 20(30)
  020b710  lfs 1, 24(31)
  020b714  stfs 1, 24(30)
  020b718  lfs 1, 28(31)
  020b71c  sth 3, 50(30)
  020b720  stfs 1, 28(30)
  020b724  lfs 1, 64(31)
  020b728  stfs 1, 64(30)
  020b72c  lfs 1, 68(31)
  020b730  stw 31, 112(4)
  020b734  stfs 1, 68(30)
  020b738  lfs 1, 72(31)
  020b73c  lbz 3, 83(30)
  020b740  stfs 1, 72(30)
  020b744  lfs 1, 76(31)
  020b748  cmpwi 3, 2
  020b74c  stfs 1, 76(30)
  020b750  bt 2, 0x20b76c
  020b754  ori 3, 30, 0
  020b758  li 4, 2
  020b75c  li 5, 13
  020b760  li 6, 0
  020b764  bl 0xfddc0
  020b768  nop
  020b76c  ori 3, 30, 0
  020b770  bl 0xf31a8
  020b774  nop
  020b778  ori 3, 30, 0
  020b77c  bl 0x10c000
  020b780  nop
  020b784  ori 3, 30, 0
  020b788  ld 0, 144(1)
  020b78c  mtlr 0
  020b790  ld 30, 112(1)
  020b794  ld 31, 120(1)
  020b798  addi 1, 1, 128
  020b79c  blr
