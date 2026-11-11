# game/update/moby1327.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1327_0024ab14:   # 0x24ab14, 0x14 bytes
  024ab14  lis 3, 121
  024ab18  lis 4, 1
  024ab1c  addic 3, 3, -6700
  024ab20  stw 4, 72(3)
  024ab24  blr

UpdateMoby_1327:   # 0x24ab30, 0xd8 bytes
  024ab30  stdu 1, -112(1)
  024ab34  mflr 0
  024ab38  std 0, 128(1)
  024ab3c  lbz 6, 32(3)
  024ab40  lis 4, 37
  024ab44  lwz 5, 120(3)
  024ab48  cmpwi 6, 0
  024ab4c  addi 4, 4, -21720
  024ab50  cmpwi 1, 6, 1
  024ab54  cmpwi 6, 6, -1
  024ab58  bt 1, 0x24ab64
  024ab5c  bf 25, 0x24abf8
  024ab60  b 0x24ab6c
  024ab64  bf 5, 0x24ab80
  024ab68  b 0x24abf8
  024ab6c  li 4, 255
  024ab70  li 5, 1
  024ab74  stb 4, 48(3)
  024ab78  stb 5, 32(3)
  024ab7c  b 0x24abf8
  024ab80  lis 6, 121
  024ab84  lfs 2, 0(5)
  024ab88  lis 7, 114
  024ab8c  lfs 1, -6588(6)
  024ab90  lfs 3, -3052(7)
  024ab94  fmadds 2, 1, 3, 2
  024ab98  stfs 2, 0(5)
  024ab9c  lfs 1, 0(4)
  024aba0  fcmpu 0, 2, 1
  024aba4  cror 6, 1, 2
  024aba8  bt 6, 0x24abbc
  024abac  lfs 1, 4(4)
  024abb0  fadds 1, 2, 1
  024abb4  stfs 1, 0(5)
  024abb8  b 0x24abd4
  024abbc  lfs 3, 4(4)
  024abc0  fcmpu 0, 2, 3
  024abc4  cror 6, 0, 2
  024abc8  bt 6, 0x24abd4
  024abcc  fadds 1, 2, 1
  024abd0  stfs 1, 0(5)
  024abd4  lis 4, 121
  024abd8  lwz 4, -6592(4)
  024abdc  cmpwi 4, 0
  024abe0  bt 2, 0x24abf8
  024abe4  lis 5, 113
  024abe8  ori 4, 3, 0
  024abec  addic 3, 5, -25000
  024abf0  bl 0x6d720
  024abf4  nop
  024abf8  ld 0, 128(1)
  024abfc  mtlr 0
  024ac00  addi 1, 1, 112
  024ac04  blr

M1327_0024ac08:   # 0x24ac08, 0x21c bytes
  024ac08  stdu 1, -320(1)
  024ac0c  mflr 0
  024ac10  std 0, 336(1)
  024ac14  lis 3, 122
  024ac18  lwz 3, -19460(3)
  024ac1c  addic 3, 3, 40
  024ac20  std 31, 312(1)
  024ac24  std 30, 304(1)
  024ac28  std 29, 296(1)
  024ac2c  std 28, 288(1)
  024ac30  std 27, 280(1)
  024ac34  std 26, 272(1)
  024ac38  std 25, 264(1)
  024ac3c  extsw 3, 3
  024ac40  bl 0x685c4
  024ac44  nop
  024ac48  std 3, 232(1)
  024ac4c  li 3, 0
  024ac50  lis 9, 0
  024ac54  li 4, 0
  024ac58  li 5, 1
  024ac5c  li 6, 1
  024ac60  li 7, 1
  024ac64  li 8, 0
  024ac68  ori 9, 9, 65424
  024ac6c  bl 0x502fd4
  024ac70  nop
  024ac74  std 3, 240(1)
  024ac78  li 4, 0
  024ac7c  li 3, 0
  024ac80  li 5, 0
  024ac84  li 6, 0
  024ac88  li 7, 0
  024ac8c  li 8, 0
  024ac90  bl 0x502f08
  024ac94  nop
  024ac98  lis 4, 250
  024ac9c  lis 5, 122
  024aca0  std 3, 224(1)
  024aca4  lis 6, 122
  024aca8  lis 3, 250
  024acac  lis 7, 122
  024acb0  lwz 4, 12036(4)
  024acb4  lwz 5, -19472(5)
  024acb8  lwz 8, -19464(6)
  024acbc  lwz 6, 12040(3)
  024acc0  ori 3, 4, 0
  024acc4  lwz 7, -19468(7)
  024acc8  ori 4, 5, 0
  024accc  ori 5, 6, 0
  024acd0  ori 6, 7, 0
  024acd4  ori 7, 8, 0
  024acd8  bl 0x502ea8
  024acdc  nop
  024ace0  lis 4, 122
  024ace4  std 3, 248(1)
  024ace8  lis 30, 121
  024acec  lis 31, 121
  024acf0  lis 29, 161
  024acf4  lis 26, 121
  024acf8  lwz 3, -19456(4)
  024acfc  lis 27, 121
  024ad00  stw 3, 188(1)
  024ad04  stw 3, 184(1)
  024ad08  lis 28, 121
  024ad0c  stw 3, 180(1)
  024ad10  li 25, 0
  024ad14  addic 29, 29, 24396
  024ad18  stw 3, 176(1)
  024ad1c  addic 26, 26, -6576
  024ad20  addic 27, 27, -1840
  024ad24  addic 28, 28, -1836
  024ad28  addic 30, 30, -3920
  024ad2c  addic 31, 31, -3918
  024ad30  li 7, 4
  024ad34  ori 6, 1, 0
  024ad38  addic 5, 1, 112
  024ad3c  ori 4, 30, 0
  024ad40  ori 3, 31, 0
  024ad44  mtctr 7
  024ad48  lhz 8, 0(4)
  024ad4c  lis 7, 122
  024ad50  extsh 8, 8
  024ad54  sldi 8, 8, 4
  024ad58  addc 8, 8, 26
  024ad5c  lfs 1, -19452(7)
  024ad60  clrldi 8, 8, 32
  024ad64  addic 4, 4, 4
  024ad68  lfs 2, 0(8)
  024ad6c  lhz 9, 0(3)
  024ad70  fmuls 1, 2, 1
  024ad74  extsh 9, 9
  024ad78  addic 3, 3, 4
  024ad7c  sldi 9, 9, 3
  024ad80  stfs 1, 0(5)
  024ad84  lfs 1, 4(8)
  024ad88  lfs 2, -19452(7)
  024ad8c  fmuls 1, 1, 2
  024ad90  stfs 1, 4(5)
  024ad94  lfs 1, 8(8)
  024ad98  lfs 2, -19452(7)
  024ad9c  fmuls 1, 1, 2
  024ada0  stfs 1, 8(5)
  024ada4  lfs 1, 12(8)
  024ada8  stfs 1, 12(5)
  024adac  lfsx 1, 27, 9
  024adb0  addic 5, 5, 16
  024adb4  lfsx 2, 28, 9
  024adb8  stfs 1, 192(6)
  024adbc  stfs 2, 196(6)
  024adc0  addic 6, 6, 8
  024adc4  bdnz 0x24ad48
  024adc8  addic 3, 1, 112
  024adcc  li 4, 0
  024add0  lwz 6, 28(29)
  024add4  li 5, 0
  024add8  li 7, 9
  024addc  bl 0x72280
  024ade0  nop
  024ade4  addic 25, 25, 1
  024ade8  addic 30, 30, 16
  024adec  cmpwi 25, 130
  024adf0  addic 31, 31, 16
  024adf4  bt 0, 0x24ad30
  024adf8  ld 0, 336(1)
  024adfc  mtlr 0
  024ae00  ld 25, 264(1)
  024ae04  ld 26, 272(1)
  024ae08  ld 27, 280(1)
  024ae0c  ld 28, 288(1)
  024ae10  ld 29, 296(1)
  024ae14  ld 30, 304(1)
  024ae18  ld 31, 312(1)
  024ae1c  addi 1, 1, 320
  024ae20  blr

M1327_0024ae24:   # 0x24ae24, 0x484 bytes
  024ae24  stdu 1, -336(1)
  024ae28  mflr 0
  024ae2c  std 0, 352(1)
  024ae30  lis 4, 122
  024ae34  std 31, 328(1)
  024ae38  lwz 4, -19436(4)
  024ae3c  lwz 31, 120(3)
  024ae40  addic 3, 4, 40
  024ae44  std 30, 320(1)
  024ae48  std 29, 312(1)
  024ae4c  std 28, 304(1)
  024ae50  std 27, 296(1)
  024ae54  std 26, 288(1)
  024ae58  std 25, 280(1)
  024ae5c  std 24, 272(1)
  024ae60  std 23, 264(1)
  024ae64  extsw 3, 3
  024ae68  bl 0x685c4
  024ae6c  nop
  024ae70  std 3, 232(1)
  024ae74  lis 9, 0
  024ae78  li 3, 0
  024ae7c  li 4, 0
  024ae80  li 5, 1
  024ae84  li 6, 1
  024ae88  li 7, 1
  024ae8c  li 8, 0
  024ae90  ori 9, 9, 65424
  024ae94  bl 0x502fd4
  024ae98  nop
  024ae9c  std 3, 240(1)
  024aea0  li 4, 0
  024aea4  li 3, 0
  024aea8  li 5, 0
  024aeac  li 6, 0
  024aeb0  li 7, 0
  024aeb4  li 8, 0
  024aeb8  bl 0x502f08
  024aebc  nop
  024aec0  lis 4, 250
  024aec4  std 3, 224(1)
  024aec8  lis 5, 122
  024aecc  lis 6, 122
  024aed0  lis 7, 250
  024aed4  lis 8, 122
  024aed8  lwz 3, 12044(4)
  024aedc  lwz 4, -19440(5)
  024aee0  lwz 5, -19448(6)
  024aee4  lwz 6, 12048(7)
  024aee8  ori 7, 4, 0
  024aeec  lwz 8, -19444(8)
  024aef0  ori 4, 5, 0
  024aef4  ori 5, 6, 0
  024aef8  ori 6, 8, 0
  024aefc  bl 0x502ea8
  024af00  nop
  024af04  lis 4, 122
  024af08  std 3, 248(1)
  024af0c  li 23, 0
  024af10  lis 25, 121
  024af14  lis 28, 161
  024af18  lis 24, 121
  024af1c  lwz 3, -19432(4)
  024af20  lis 27, 121
  024af24  stw 3, 188(1)
  024af28  stw 3, 184(1)
  024af2c  lis 29, 121
  024af30  stw 3, 180(1)
  024af34  ori 30, 23, 0
  024af38  addic 25, 25, 13328
  024af3c  stw 3, 176(1)
  024af40  addic 24, 24, 13330
  024af44  addic 27, 27, 11488
  024af48  addic 29, 29, 14928
  024af4c  addic 28, 28, 24396
  024af50  li 26, 4
  024af54  ori 3, 1, 0
  024af58  mtctr 26
  024af5c  addic 4, 1, 112
  024af60  ori 5, 25, 0
  024af64  ori 6, 24, 0
  024af68  lhz 7, 0(5)
  024af6c  lhz 8, 0(6)
  024af70  extsh 7, 7
  024af74  extsh 8, 8
  024af78  sldi 7, 7, 4
  024af7c  sldi 8, 8, 3
  024af80  addc 7, 7, 27
  024af84  addc 9, 8, 29
  024af88  clrldi 7, 7, 32
  024af8c  addic 5, 5, 4
  024af90  addic 6, 6, 4
  024af94  lfs 1, 0(7)
  024af98  stfs 1, 0(4)
  024af9c  lfs 1, 4(7)
  024afa0  stfs 1, 4(4)
  024afa4  lfs 1, 8(7)
  024afa8  stfs 1, 8(4)
  024afac  lfs 1, 12(7)
  024afb0  stfs 1, 12(4)
  024afb4  lfsx 1, 29, 8
  024afb8  lfs 2, 4(9)
  024afbc  addic 4, 4, 16
  024afc0  stfs 1, 192(3)
  024afc4  lfs 1, 0(31)
  024afc8  fadds 1, 2, 1
  024afcc  stfs 1, 196(3)
  024afd0  addic 3, 3, 8
  024afd4  bdnz 0x24af68
  024afd8  addic 3, 1, 112
  024afdc  lwz 6, 28(28)
  024afe0  li 4, 0
  024afe4  li 5, 0
  024afe8  li 7, 9
  024afec  bl 0x72280
  024aff0  nop
  024aff4  addic 23, 23, 1
  024aff8  addic 25, 25, 16
  024affc  cmpwi 23, 100
  024b000  addic 24, 24, 16
  024b004  bt 0, 0x24af50
  024b008  lis 25, 121
  024b00c  lis 24, 121
  024b010  lis 27, 121
  024b014  ori 23, 30, 0
  024b018  addic 25, 25, 27520
  024b01c  addic 24, 24, 27522
  024b020  addic 27, 27, 25504
  024b024  ori 3, 1, 0
  024b028  addic 4, 1, 112
  024b02c  ori 5, 25, 0
  024b030  ori 6, 24, 0
  024b034  mtctr 26
  024b038  lhz 7, 0(5)
  024b03c  lhz 8, 0(6)
  024b040  extsh 7, 7
  024b044  extsh 8, 8
  024b048  sldi 7, 7, 4
  024b04c  sldi 8, 8, 3
  024b050  addc 7, 7, 27
  024b054  addc 9, 8, 29
  024b058  clrldi 7, 7, 32
  024b05c  addic 5, 5, 4
  024b060  addic 6, 6, 4
  024b064  lfs 1, 0(7)
  024b068  stfs 1, 0(4)
  024b06c  lfs 1, 4(7)
  024b070  stfs 1, 4(4)
  024b074  lfs 1, 8(7)
  024b078  stfs 1, 8(4)
  024b07c  lfs 1, 12(7)
  024b080  stfs 1, 12(4)
  024b084  lfsx 1, 29, 8
  024b088  lfs 2, 4(9)
  024b08c  addic 4, 4, 16
  024b090  stfs 1, 192(3)
  024b094  lfs 1, 0(31)
  024b098  fadds 1, 2, 1
  024b09c  stfs 1, 196(3)
  024b0a0  addic 3, 3, 8
  024b0a4  bdnz 0x24b038
  024b0a8  addic 3, 1, 112
  024b0ac  lwz 6, 28(28)
  024b0b0  li 4, 0
  024b0b4  li 5, 0
  024b0b8  li 7, 9
  024b0bc  bl 0x72280
  024b0c0  nop
  024b0c4  addic 23, 23, 1
  024b0c8  addic 25, 25, 16
  024b0cc  cmpwi 23, 112
  024b0d0  addic 24, 24, 16
  024b0d4  bt 0, 0x24b024
  024b0d8  lis 25, 122
  024b0dc  lis 24, 122
  024b0e0  lis 27, 122
  024b0e4  ori 23, 30, 0
  024b0e8  addic 25, 25, -23504
  024b0ec  addic 24, 24, -23502
  024b0f0  addic 27, 27, -23888
  024b0f4  ori 3, 1, 0
  024b0f8  addic 4, 1, 112
  024b0fc  ori 5, 25, 0
  024b100  ori 6, 24, 0
  024b104  mtctr 26
  024b108  lhz 7, 0(5)
  024b10c  lhz 8, 0(6)
  024b110  extsh 7, 7
  024b114  extsh 8, 8
  024b118  sldi 7, 7, 4
  024b11c  sldi 8, 8, 3
  024b120  addc 7, 7, 27
  024b124  addc 9, 8, 29
  024b128  clrldi 7, 7, 32
  024b12c  addic 5, 5, 4
  024b130  addic 6, 6, 4
  024b134  lfs 1, 0(7)
  024b138  stfs 1, 0(4)
  024b13c  lfs 1, 4(7)
  024b140  stfs 1, 4(4)
  024b144  lfs 1, 8(7)
  024b148  stfs 1, 8(4)
  024b14c  lfs 1, 12(7)
  024b150  stfs 1, 12(4)
  024b154  lfsx 1, 29, 8
  024b158  lfs 2, 4(9)
  024b15c  addic 4, 4, 16
  024b160  stfs 1, 192(3)
  024b164  lfs 1, 0(31)
  024b168  fadds 1, 2, 1
  024b16c  stfs 1, 196(3)
  024b170  addic 3, 3, 8
  024b174  bdnz 0x24b108
  024b178  addic 3, 1, 112
  024b17c  lwz 6, 28(28)
  024b180  li 4, 0
  024b184  li 5, 0
  024b188  li 7, 9
  024b18c  bl 0x72280
  024b190  nop
  024b194  addic 23, 23, 1
  024b198  addic 25, 25, 16
  024b19c  cmpwi 23, 14
  024b1a0  addic 24, 24, 16
  024b1a4  bt 0, 0x24b0f4
  024b1a8  lis 25, 122
  024b1ac  lis 24, 122
  024b1b0  lis 27, 122
  024b1b4  addic 25, 25, -21264
  024b1b8  addic 24, 24, -21262
  024b1bc  addic 27, 27, -21648
  024b1c0  ori 3, 1, 0
  024b1c4  addic 4, 1, 112
  024b1c8  ori 5, 25, 0
  024b1cc  ori 6, 24, 0
  024b1d0  mtctr 26
  024b1d4  lhz 7, 0(5)
  024b1d8  lhz 8, 0(6)
  024b1dc  extsh 7, 7
  024b1e0  extsh 8, 8
  024b1e4  sldi 7, 7, 4
  024b1e8  sldi 8, 8, 3
  024b1ec  addc 7, 7, 27
  024b1f0  addc 9, 8, 29
  024b1f4  clrldi 7, 7, 32
  024b1f8  addic 5, 5, 4
  024b1fc  addic 6, 6, 4
  024b200  lfs 1, 0(7)
  024b204  stfs 1, 0(4)
  024b208  lfs 1, 4(7)
  024b20c  stfs 1, 4(4)
  024b210  lfs 1, 8(7)
  024b214  stfs 1, 8(4)
  024b218  lfs 1, 12(7)
  024b21c  stfs 1, 12(4)
  024b220  lfsx 1, 29, 8
  024b224  addic 4, 4, 16
  024b228  lfs 2, 4(9)
  024b22c  stfs 1, 192(3)
  024b230  lfs 1, 0(31)
  024b234  fadds 1, 2, 1
  024b238  stfs 1, 196(3)
  024b23c  addic 3, 3, 8
  024b240  bdnz 0x24b1d4
  024b244  addic 3, 1, 112
  024b248  li 4, 0
  024b24c  lwz 6, 28(28)
  024b250  li 5, 0
  024b254  li 7, 9
  024b258  bl 0x72280
  024b25c  nop
  024b260  addic 30, 30, 1
  024b264  addic 25, 25, 16
  024b268  cmpwi 30, 14
  024b26c  addic 24, 24, 16
  024b270  bt 0, 0x24b1c0
  024b274  ld 0, 352(1)
  024b278  mtlr 0
  024b27c  ld 23, 264(1)
  024b280  ld 24, 272(1)
  024b284  ld 25, 280(1)
  024b288  ld 26, 288(1)
  024b28c  ld 27, 296(1)
  024b290  ld 28, 304(1)
  024b294  ld 29, 312(1)
  024b298  ld 30, 320(1)
  024b29c  ld 31, 328(1)
  024b2a0  addi 1, 1, 336
  024b2a4  blr

M133_0024b2e8:   # 0x24b2e8, 0x3d0 bytes
  024b2e8  stdu 1, -304(1)
  024b2ec  mflr 0
  024b2f0  std 0, 320(1)
  024b2f4  stfd 16, 176(1)
  024b2f8  stfd 17, 184(1)
  024b2fc  stfd 18, 192(1)
  024b300  stfd 19, 200(1)
  024b304  stfd 20, 208(1)
  024b308  stfd 21, 216(1)
  024b30c  stfd 22, 224(1)
  024b310  stfd 23, 232(1)
  024b314  stfd 24, 240(1)
  024b318  stfd 25, 248(1)
  024b31c  stfd 26, 256(1)
  024b320  stfd 27, 264(1)
  024b324  stfd 28, 272(1)
  024b328  stfd 29, 280(1)
  024b32c  stfd 30, 288(1)
  024b330  stfd 31, 296(1)
  024b334  std 31, 168(1)
  024b338  ori 31, 3, 0
  024b33c  lbz 3, 49(3)
  024b340  std 30, 160(1)
  024b344  cmpwi 3, 0
  024b348  bt 2, 0x24b660
  024b34c  li 3, 19
  024b350  bl 0xfc620
  024b354  nop
  024b358  lis 4, 37
  024b35c  cmpwi 3, 0
  024b360  addi 4, 4, -19800
  024b364  lfs 27, 0(4)
  024b368  lfs 22, 4(4)
  024b36c  lfs 23, 8(4)
  024b370  lfs 21, 12(4)
  024b374  lfs 29, 16(4)
  024b378  lfs 24, 20(4)
  024b37c  lfs 31, 24(4)
  024b380  lfs 25, 28(4)
  024b384  lfs 30, 32(4)
  024b388  lfs 26, 36(4)
  024b38c  lfs 20, 40(4)
  024b390  lfs 28, 44(4)
  024b394  bf 2, 0x24b4f0
  024b398  bl 0xfcc68
  024b39c  nop
  024b3a0  fmr 19, 1
  024b3a4  fmr 1, 25
  024b3a8  fmr 2, 20
  024b3ac  bl 0xfcbe8
  024b3b0  nop
  024b3b4  fmr 18, 1
  024b3b8  fmr 1, 25
  024b3bc  fmr 2, 21
  024b3c0  bl 0xfcbe8
  024b3c4  nop
  024b3c8  fmr 17, 1
  024b3cc  lis 3, 37
  024b3d0  fmr 1, 21
  024b3d4  addi 3, 3, -19800
  024b3d8  lfs 2, 48(3)
  024b3dc  bl 0xfcbe8
  024b3e0  nop
  024b3e4  fmr 16, 1
  024b3e8  fmr 1, 22
  024b3ec  fmr 2, 23
  024b3f0  bl 0xfcbe8
  024b3f4  nop
  024b3f8  bl 0x502758
  024b3fc  nop
  024b400  fadds 1, 19, 24
  024b404  fsubs 2, 26, 19
  024b408  fsubs 3, 27, 19
  024b40c  extsw 3, 3
  024b410  lis 4, 12288
  024b414  std 3, 144(1)
  024b418  lis 3, 114
  024b41c  fsubs 4, 26, 1
  024b420  fsub 5, 19, 2
  024b424  fsubs 6, 27, 1
  024b428  ori 4, 4, 8232
  024b42c  li 5, 8224
  024b430  fsub 7, 1, 4
  024b434  fsel 2, 5, 2, 19
  024b438  fsel 1, 7, 4, 1
  024b43c  fsub 4, 3, 2
  024b440  fsub 5, 6, 1
  024b444  fsel 2, 4, 3, 2
  024b448  lfd 4, 144(1)
  024b44c  lfs 7, 16(31)
  024b450  fcfid 4, 4
  024b454  lfs 8, 20(31)
  024b458  fsel 1, 5, 6, 1
  024b45c  fmuls 3, 2, 2
  024b460  frsp 4, 4
  024b464  fmuls 5, 1, 1
  024b468  fmuls 6, 3, 2
  024b46c  fadds 4, 4, 21
  024b470  fmuls 9, 5, 1
  024b474  fmuls 10, 3, 6
  024b478  fmadds 2, 6, 28, 2
  024b47c  lfs 6, 24(31)
  024b480  fmuls 11, 5, 9
  024b484  fmadds 1, 9, 28, 1
  024b488  fmuls 9, 3, 10
  024b48c  fmadds 2, 10, 29, 2
  024b490  lfs 10, -3056(3)
  024b494  stfs 6, 120(1)
  024b498  fmuls 4, 10, 4
  024b49c  addic 3, 1, 112
  024b4a0  fmuls 12, 5, 11
  024b4a4  fmadds 1, 11, 29, 1
  024b4a8  fmuls 3, 3, 9
  024b4ac  fmadds 2, 9, 30, 2
  024b4b0  fmuls 5, 5, 12
  024b4b4  fmadds 1, 12, 30, 1
  024b4b8  fmadds 2, 3, 31, 2
  024b4bc  fctiwz 3, 4
  024b4c0  fmadds 4, 5, 31, 1
  024b4c4  fmr 1, 17
  024b4c8  fmadds 5, 2, 18, 8
  024b4cc  fmr 2, 16
  024b4d0  stfd 3, 144(1)
  024b4d4  lwz 8, 148(1)
  024b4d8  extsw 8, 8
  024b4dc  fmadds 3, 4, 18, 7
  024b4e0  stfs 5, 116(1)
  024b4e4  stfs 3, 112(1)
  024b4e8  bl 0x12f6b0
  024b4ec  nop
  024b4f0  li 3, 4
  024b4f4  bl 0xfc620
  024b4f8  nop
  024b4fc  cmpwi 3, 0
  024b500  bf 2, 0x24b660
  024b504  bl 0xfcc68
  024b508  nop
  024b50c  fmr 19, 1
  024b510  fmr 1, 25
  024b514  fmr 2, 20
  024b518  bl 0xfcbe8
  024b51c  nop
  024b520  fmr 20, 1
  024b524  lis 3, 37
  024b528  fmr 1, 25
  024b52c  addi 30, 3, -19800
  024b530  lfs 25, 52(30)
  024b534  fmr 2, 25
  024b538  bl 0xfcbe8
  024b53c  nop
  024b540  fmr 18, 1
  024b544  lfs 2, 56(30)
  024b548  fmr 1, 25
  024b54c  bl 0xfcbe8
  024b550  nop
  024b554  fmr 25, 1
  024b558  fmr 1, 22
  024b55c  fmr 2, 23
  024b560  bl 0xfcbe8
  024b564  nop
  024b568  bl 0x502758
  024b56c  nop
  024b570  fadds 1, 19, 24
  024b574  fsubs 2, 26, 19
  024b578  fsubs 3, 27, 19
  024b57c  extsw 3, 3
  024b580  lis 4, 8192
  024b584  std 3, 144(1)
  024b588  lis 3, 114
  024b58c  fsubs 4, 26, 1
  024b590  fsub 5, 19, 2
  024b594  fsubs 6, 27, 1
  024b598  ori 4, 4, 8224
  024b59c  li 5, 8240
  024b5a0  fsub 7, 1, 4
  024b5a4  fsel 2, 5, 2, 19
  024b5a8  fsel 1, 7, 4, 1
  024b5ac  fsub 4, 3, 2
  024b5b0  fsub 5, 6, 1
  024b5b4  fsel 2, 4, 3, 2
  024b5b8  lfd 4, 144(1)
  024b5bc  lfs 7, 16(31)
  024b5c0  fcfid 4, 4
  024b5c4  lfs 8, 20(31)
  024b5c8  fsel 1, 5, 6, 1
  024b5cc  fmuls 3, 2, 2
  024b5d0  frsp 4, 4
  024b5d4  fmuls 5, 1, 1
  024b5d8  fmuls 6, 3, 2
  024b5dc  fadds 4, 4, 21
  024b5e0  fmuls 9, 5, 1
  024b5e4  fmuls 10, 3, 6
  024b5e8  fmadds 2, 6, 28, 2
  024b5ec  lfs 6, 24(31)
  024b5f0  fmuls 11, 5, 9
  024b5f4  fmadds 1, 9, 28, 1
  024b5f8  fmuls 9, 3, 10
  024b5fc  fmadds 2, 10, 29, 2
  024b600  lfs 10, -3056(3)
  024b604  stfs 6, 136(1)
  024b608  fmuls 4, 10, 4
  024b60c  addic 3, 1, 128
  024b610  fmuls 12, 5, 11
  024b614  fmadds 1, 11, 29, 1
  024b618  fmuls 3, 3, 9
  024b61c  fmadds 2, 9, 30, 2
  024b620  fmuls 5, 5, 12
  024b624  fmadds 1, 12, 30, 1
  024b628  fmadds 2, 3, 31, 2
  024b62c  fctiwz 3, 4
  024b630  fmadds 4, 5, 31, 1
  024b634  fmr 1, 18
  024b638  fmadds 5, 2, 20, 8
  024b63c  fmr 2, 25
  024b640  stfd 3, 144(1)
  024b644  lwz 8, 148(1)
  024b648  extsw 8, 8
  024b64c  fmadds 3, 4, 20, 7
  024b650  stfs 5, 132(1)
  024b654  stfs 3, 128(1)
  024b658  bl 0x12f6b0
  024b65c  nop
  024b660  ld 0, 320(1)
  024b664  mtlr 0
  024b668  lfd 16, 176(1)
  024b66c  lfd 17, 184(1)
  024b670  lfd 18, 192(1)
  024b674  lfd 19, 200(1)
  024b678  lfd 20, 208(1)
  024b67c  lfd 21, 216(1)
  024b680  lfd 22, 224(1)
  024b684  lfd 23, 232(1)
  024b688  lfd 24, 240(1)
  024b68c  lfd 25, 248(1)
  024b690  lfd 26, 256(1)
  024b694  lfd 27, 264(1)
  024b698  lfd 28, 272(1)
  024b69c  lfd 29, 280(1)
  024b6a0  lfd 30, 288(1)
  024b6a4  lfd 31, 296(1)
  024b6a8  ld 30, 160(1)
  024b6ac  ld 31, 168(1)
  024b6b0  addi 1, 1, 304
  024b6b4  blr

M133_0024b718:   # 0x24b718, 0x434 bytes
  024b718  stdu 1, -416(1)
  024b71c  mflr 0
  024b720  std 0, 432(1)
  024b724  stfd 16, 288(1)
  024b728  stfd 17, 296(1)
  024b72c  stfd 18, 304(1)
  024b730  stfd 19, 312(1)
  024b734  stfd 20, 320(1)
  024b738  stfd 21, 328(1)
  024b73c  stfd 22, 336(1)
  024b740  stfd 23, 344(1)
  024b744  stfd 24, 352(1)
  024b748  stfd 25, 360(1)
  024b74c  stfd 26, 368(1)
  024b750  stfd 27, 376(1)
  024b754  stfd 28, 384(1)
  024b758  stfd 29, 392(1)
  024b75c  stfd 30, 400(1)
  024b760  stfd 31, 408(1)
  024b764  std 27, 248(1)
  024b768  std 30, 272(1)
  024b76c  std 29, 264(1)
  024b770  li 27, 0
  024b774  ori 30, 3, 0
  024b778  std 31, 280(1)
  024b77c  std 28, 256(1)
  024b780  std 26, 240(1)
  024b784  std 25, 232(1)
  024b788  std 24, 224(1)
  024b78c  std 23, 216(1)
  024b790  std 22, 208(1)
  024b794  std 21, 200(1)
  024b798  std 20, 192(1)
  024b79c  ori 29, 27, 0
  024b7a0  ori 31, 4, 0
  024b7a4  lfs 1, 16(30)
  024b7a8  lis 4, 37
  024b7ac  lfs 2, 20(30)
  024b7b0  stfs 1, 128(1)
  024b7b4  addic 3, 1, 128
  024b7b8  addi 26, 4, -18760
  024b7bc  lfs 1, 24(30)
  024b7c0  stfs 2, 132(1)
  024b7c4  lfs 2, 28(30)
  024b7c8  stfs 1, 136(1)
  024b7cc  stfs 2, 140(1)
  024b7d0  lfs 1, 0(26)
  024b7d4  bl 0x110950
  024b7d8  nop
  024b7dc  lfs 16, 4(26)
  024b7e0  lfs 1, 136(1)
  024b7e4  fadds 1, 1, 16
  024b7e8  stfs 1, 136(1)
  024b7ec  bl 0xfcc68
  024b7f0  nop
  024b7f4  fmr 31, 1
  024b7f8  fmr 1, 16
  024b7fc  lfs 2, 8(26)
  024b800  bl 0xfcbe8
  024b804  nop
  024b808  fmr 30, 1
  024b80c  lfs 1, 12(26)
  024b810  lfs 3, 16(26)
  024b814  fmr 2, 3
  024b818  bl 0xfcbe8
  024b81c  nop
  024b820  lfs 17, 20(26)
  024b824  fmr 29, 1
  024b828  fmr 2, 16
  024b82c  fmr 1, 17
  024b830  bl 0xfcbe8
  024b834  nop
  024b838  lfs 2, 24(26)
  024b83c  lfs 3, 28(26)
  024b840  fadds 2, 31, 2
  024b844  lfs 4, 32(26)
  024b848  fsubs 5, 3, 31
  024b84c  lis 3, 114
  024b850  ori 28, 29, 0
  024b854  fsubs 3, 3, 2
  024b858  fsub 7, 31, 5
  024b85c  fsubs 6, 4, 2
  024b860  fsubs 4, 4, 31
  024b864  fsub 8, 2, 3
  024b868  fsel 5, 7, 5, 31
  024b86c  lfs 7, 36(26)
  024b870  fsel 2, 8, 3, 2
  024b874  fsub 3, 4, 5
  024b878  fsub 9, 6, 2
  024b87c  fsel 3, 3, 4, 5
  024b880  lfs 4, 40(26)
  024b884  lfs 5, 0(31)
  024b888  lfs 8, 44(26)
  024b88c  fmuls 5, 5, 1
  024b890  fsel 2, 9, 6, 2
  024b894  fmuls 6, 3, 3
  024b898  lfs 9, 4(31)
  024b89c  lfs 11, 8(31)
  024b8a0  fmuls 9, 9, 1
  024b8a4  fmuls 1, 11, 1
  024b8a8  lfs 11, 48(26)
  024b8ac  fmuls 10, 2, 2
  024b8b0  fmuls 12, 6, 3
  024b8b4  fmuls 13, 10, 2
  024b8b8  fmuls 0, 6, 12
  024b8bc  fmadds 3, 12, 7, 3
  024b8c0  lfs 12, 12(31)
  024b8c4  fmuls 31, 10, 13
  024b8c8  fmadds 2, 13, 7, 2
  024b8cc  fmuls 7, 6, 0
  024b8d0  fmadds 3, 0, 4, 3
  024b8d4  lfs 13, -3052(3)
  024b8d8  stfs 1, 152(1)
  024b8dc  lis 3, 114
  024b8e0  fmadds 1, 13, 29, 1
  024b8e4  stfs 12, 156(1)
  024b8e8  stfs 9, 148(1)
  024b8ec  stfs 5, 144(1)
  024b8f0  stfs 12, 172(1)
  024b8f4  fmuls 0, 10, 31
  024b8f8  fmadds 2, 31, 4, 2
  024b8fc  fmuls 4, 6, 7
  024b900  fmadds 3, 7, 8, 3
  024b904  fmuls 6, 13, 30
  024b908  stfs 1, 152(1)
  024b90c  stfs 1, 168(1)
  024b910  fmuls 7, 10, 0
  024b914  fmadds 2, 0, 8, 2
  024b918  fmuls 8, 13, 30
  024b91c  fmadds 3, 4, 11, 3
  024b920  fmadds 2, 7, 11, 2
  024b924  fmadds 3, 8, 3, 9
  024b928  fmadds 2, 6, 2, 5
  024b92c  stfs 3, 148(1)
  024b930  stfs 3, 164(1)
  024b934  lfs 3, -3056(3)
  024b938  lis 3, 114
  024b93c  stfs 2, 144(1)
  024b940  stfs 2, 160(1)
  024b944  lfs 18, 56(26)
  024b948  lfs 2, 52(26)
  024b94c  fmuls 3, 3, 18
  024b950  lfs 4, -3048(3)
  024b954  fmuls 2, 4, 2
  024b958  fctidz 3, 3
  024b95c  fcfid 3, 3
  024b960  frsp 3, 3
  024b964  fnmsubs 1, 2, 3, 1
  024b968  stfs 1, 168(1)
  024b96c  lfs 19, 60(26)
  024b970  lfs 20, 64(26)
  024b974  lfs 21, 68(26)
  024b978  lfs 22, 72(26)
  024b97c  lfs 23, 76(26)
  024b980  lfs 24, 80(26)
  024b984  lfs 25, 84(26)
  024b988  lfs 26, 88(26)
  024b98c  fmr 1, 19
  024b990  fmr 2, 20
  024b994  bl 0xfcbe8
  024b998  nop
  024b99c  fmuls 2, 1, 21
  024b9a0  fmuls 3, 1, 22
  024b9a4  addic 26, 1, 128
  024b9a8  fmr 1, 23
  024b9ac  ori 3, 26, 0
  024b9b0  stfs 2, 156(1)
  024b9b4  stfs 3, 172(1)
  024b9b8  bl 0x110950
  024b9bc  nop
  024b9c0  lis 4, 114
  024b9c4  addic 25, 1, 160
  024b9c8  ori 3, 25, 0
  024b9cc  lfs 1, -3052(4)
  024b9d0  fmuls 1, 1, 19
  024b9d4  bl 0x110950
  024b9d8  nop
  024b9dc  fmr 1, 17
  024b9e0  fmr 2, 16
  024b9e4  bl 0xfcbe8
  024b9e8  nop
  024b9ec  lis 3, -32768
  024b9f0  lis 4, -32768
  024b9f4  ori 3, 3, 61166
  024b9f8  ori 4, 4, 65424
  024b9fc  bl 0x5027bc
  024ba00  nop
  024ba04  ori 24, 3, 0
  024ba08  fmr 1, 17
  024ba0c  fmr 2, 16
  024ba10  bl 0xfcbe8
  024ba14  nop
  024ba18  lis 3, 0
  024ba1c  lis 4, 0
  024ba20  ori 3, 3, 65518
  024ba24  ori 4, 4, 65518
  024ba28  bl 0x5027bc
  024ba2c  nop
  024ba30  lis 23, 114
  024ba34  fmr 2, 26
  024ba38  ori 22, 3, 0
  024ba3c  lfs 1, -3056(23)
  024ba40  fmuls 3, 1, 24
  024ba44  fmuls 4, 1, 18
  024ba48  fmr 1, 25
  024ba4c  fctiwz 3, 3
  024ba50  fctiwz 4, 4
  024ba54  stfd 3, 176(1)
  024ba58  lwz 3, 180(1)
  024ba5c  stfd 4, 176(1)
  024ba60  lwz 4, 180(1)
  024ba64  extsw 21, 3
  024ba68  extsw 20, 4
  024ba6c  bl 0xfcbe8
  024ba70  nop
  024ba74  lfs 2, -3056(23)
  024ba78  fmuls 1, 1, 2
  024ba7c  bl 0x502758
  024ba80  nop
  024ba84  li 7, -1
  024ba88  ori 10, 3, 0
  024ba8c  ori 6, 24, 0
  024ba90  addic 4, 1, 144
  024ba94  std 7, 112(1)
  024ba98  ori 9, 20, 0
  024ba9c  ori 3, 26, 0
  024baa0  ori 5, 25, 0
  024baa4  ori 7, 22, 0
  024baa8  ori 8, 21, 0
  024baac  bl 0x1206e8
  024bab0  nop
  024bab4  addic 28, 28, 1
  024bab8  cmpwi 28, 10
  024babc  bt 0, 0x24b98c
  024bac0  addic 27, 27, 1
  024bac4  cmpwi 27, 20
  024bac8  bt 0, 0x24b7a4
  024bacc  ld 0, 432(1)
  024bad0  mtlr 0
  024bad4  lfd 16, 288(1)
  024bad8  lfd 17, 296(1)
  024badc  lfd 18, 304(1)
  024bae0  lfd 19, 312(1)
  024bae4  lfd 20, 320(1)
  024bae8  lfd 21, 328(1)
  024baec  lfd 22, 336(1)
  024baf0  lfd 23, 344(1)
  024baf4  lfd 24, 352(1)
  024baf8  lfd 25, 360(1)
  024bafc  lfd 26, 368(1)
  024bb00  lfd 27, 376(1)
  024bb04  lfd 28, 384(1)
  024bb08  lfd 29, 392(1)
  024bb0c  lfd 30, 400(1)
  024bb10  lfd 31, 408(1)
  024bb14  ld 20, 192(1)
  024bb18  ld 21, 200(1)
  024bb1c  ld 22, 208(1)
  024bb20  ld 23, 216(1)
  024bb24  ld 24, 224(1)
  024bb28  ld 25, 232(1)
  024bb2c  ld 26, 240(1)
  024bb30  ld 27, 248(1)
  024bb34  ld 28, 256(1)
  024bb38  ld 29, 264(1)
  024bb3c  ld 30, 272(1)
  024bb40  ld 31, 280(1)
  024bb44  addi 1, 1, 416
  024bb48  blr
