# game/update/moby388.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M388_0035aac0:   # 0x35aac0, 0xbc8 bytes
  035aac0  stdu 1, -720(1)
  035aac4  mflr 0
  035aac8  std 0, 736(1)
  035aacc  stfd 26, 672(1)
  035aad0  stfd 27, 680(1)
  035aad4  stfd 28, 688(1)
  035aad8  stfd 29, 696(1)
  035aadc  stfd 30, 704(1)
  035aae0  stfd 31, 712(1)
  035aae4  std 27, 632(1)
  035aae8  std 26, 624(1)
  035aaec  ori 27, 3, 0
  035aaf0  li 3, 45
  035aaf4  std 29, 648(1)
  035aaf8  ori 26, 5, 0
  035aafc  lis 5, 54
  035ab00  std 30, 656(1)
  035ab04  std 28, 640(1)
  035ab08  ori 29, 7, 0
  035ab0c  lwz 28, 120(27)
  035ab10  std 31, 664(1)
  035ab14  ori 30, 6, 0
  035ab18  std 25, 616(1)
  035ab1c  ori 31, 4, 0
  035ab20  std 24, 608(1)
  035ab24  std 23, 600(1)
  035ab28  std 22, 592(1)
  035ab2c  std 21, 584(1)
  035ab30  std 20, 576(1)
  035ab34  std 19, 568(1)
  035ab38  std 18, 560(1)
  035ab3c  addi 25, 5, -21868
  035ab40  bl 0x685c4
  035ab44  nop
  035ab48  std 3, 392(1)
  035ab4c  li 4, 2
  035ab50  li 3, 0
  035ab54  li 5, 0
  035ab58  li 6, 1
  035ab5c  li 7, 128
  035ab60  bl 0x502ea8
  035ab64  nop
  035ab68  std 3, 408(1)
  035ab6c  lis 9, 0
  035ab70  li 3, 0
  035ab74  li 4, 0
  035ab78  li 5, 1
  035ab7c  li 6, 1
  035ab80  li 7, 1
  035ab84  li 8, 0
  035ab88  ori 9, 9, 65424
  035ab8c  bl 0x502fd4
  035ab90  nop
  035ab94  li 4, 0
  035ab98  std 3, 400(1)
  035ab9c  li 5, 0
  035aba0  li 3, 0
  035aba4  li 6, 0
  035aba8  li 7, 0
  035abac  li 8, 0
  035abb0  bl 0x502f08
  035abb4  nop
  035abb8  lis 4, 127
  035abbc  std 3, 384(1)
  035abc0  li 3, 44
  035abc4  ori 4, 4, 32639
  035abc8  rlwimi 4, 26, 24, 0, 7
  035abcc  stw 4, 348(1)
  035abd0  stw 4, 344(1)
  035abd4  stw 4, 340(1)
  035abd8  stw 4, 336(1)
  035abdc  bl 0x685c4
  035abe0  nop
  035abe4  lis 4, 127
  035abe8  std 3, 536(1)
  035abec  lis 19, 16256
  035abf0  ori 3, 4, 16448
  035abf4  ld 4, 408(1)
  035abf8  rlwimi 3, 30, 24, 0, 7
  035abfc  ld 5, 400(1)
  035ac00  std 4, 552(1)
  035ac04  li 18, 0
  035ac08  ld 4, 384(1)
  035ac0c  stw 3, 492(1)
  035ac10  stw 3, 488(1)
  035ac14  stw 3, 484(1)
  035ac18  stw 3, 480(1)
  035ac1c  std 5, 544(1)
  035ac20  std 4, 528(1)
  035ac24  lfs 31, 0(25)
  035ac28  stw 19, 496(1)
  035ac2c  lfs 30, 4(25)
  035ac30  stw 18, 500(1)
  035ac34  stw 19, 504(1)
  035ac38  stw 19, 508(1)
  035ac3c  stw 18, 512(1)
  035ac40  stw 18, 516(1)
  035ac44  stw 18, 520(1)
  035ac48  stw 19, 524(1)
  035ac4c  lfs 1, 492(28)
  035ac50  stw 18, 356(1)
  035ac54  stfs 1, 352(1)
  035ac58  lfs 1, 492(28)
  035ac5c  stw 19, 364(1)
  035ac60  stfs 1, 360(1)
  035ac64  lfs 1, 492(28)
  035ac68  stw 18, 372(1)
  035ac6c  fadds 1, 1, 31
  035ac70  lfs 2, 72(27)
  035ac74  stfs 1, 368(1)
  035ac78  lfs 1, 492(28)
  035ac7c  stw 19, 380(1)
  035ac80  fadds 1, 1, 31
  035ac84  stfs 1, 376(1)
  035ac88  lfs 1, 8(25)
  035ac8c  lfs 3, 12(25)
  035ac90  fadds 1, 2, 1
  035ac94  lfs 4, 16(25)
  035ac98  lfs 8, 20(25)
  035ac9c  lfs 10, 24(25)
  035aca0  fsubs 5, 3, 1
  035aca4  fsubs 6, 4, 1
  035aca8  fsubs 3, 3, 2
  035acac  fsub 7, 1, 5
  035acb0  fsel 1, 7, 5, 1
  035acb4  fsub 7, 2, 3
  035acb8  fsub 9, 6, 1
  035acbc  fsel 3, 7, 3, 2
  035acc0  fsubs 2, 4, 2
  035acc4  fsel 1, 9, 6, 1
  035acc8  lfs 9, 28(25)
  035accc  fsub 12, 2, 3
  035acd0  lfs 4, 16(27)
  035acd4  lfs 5, 20(27)
  035acd8  lfs 6, 24(27)
  035acdc  lfs 7, 28(27)
  035ace0  lfs 13, 32(25)
  035ace4  fmuls 11, 1, 1
  035ace8  fsel 2, 12, 2, 3
  035acec  fmuls 0, 11, 1
  035acf0  fmuls 3, 11, 0
  035acf4  fmadds 1, 0, 8, 1
  035acf8  fmuls 12, 11, 3
  035acfc  fmadds 1, 3, 10, 1
  035ad00  fmuls 3, 11, 12
  035ad04  fmadds 1, 12, 9, 1
  035ad08  fmadds 29, 3, 13, 1
  035ad0c  fmuls 11, 2, 2
  035ad10  lis 25, 149
  035ad14  addic 25, 25, 5056
  035ad18  lfs 3, 328(25)
  035ad1c  lfs 1, 320(25)
  035ad20  fsubs 3, 3, 6
  035ad24  fmuls 12, 11, 2
  035ad28  fsubs 1, 1, 4
  035ad2c  fmuls 0, 11, 12
  035ad30  fmadds 2, 12, 8, 2
  035ad34  fmuls 12, 29, 3
  035ad38  lfs 8, 324(25)
  035ad3c  stfs 29, 144(1)
  035ad40  fmuls 27, 11, 0
  035ad44  fmadds 10, 0, 10, 2
  035ad48  fsubs 2, 8, 5
  035ad4c  fmuls 0, 12, 12
  035ad50  fmuls 8, 11, 27
  035ad54  fmadds 9, 27, 9, 10
  035ad58  fneg 10, 0
  035ad5c  fmadds 27, 8, 13, 9
  035ad60  fneg 8, 10
  035ad64  fmuls 11, 27, 3
  035ad68  fmuls 13, 27, 1
  035ad6c  stfs 27, 148(1)
  035ad70  stw 18, 152(1)
  035ad74  stfs 28, 156(1)
  035ad78  stfs 1, 160(1)
  035ad7c  stfs 2, 164(1)
  035ad80  lfs 10, 332(25)
  035ad84  fmadds 0, 11, 11, 8
  035ad88  fmsubs 13, 29, 2, 13
  035ad8c  fmr 8, 30
  035ad90  stfs 3, 168(1)
  035ad94  stfs 10, 172(1)
  035ad98  stw 18, 188(1)
  035ad9c  fmadds 0, 13, 13, 0
  035ada0  fmr 9, 8
  035ada4  fsqrts 26, 0
  035ada8  fmr 10, 9
  035adac  fcmpu 0, 26, 10
  035adb0  bt 2, 0x35ae04
  035adb4  frsqrte 8, 0
  035adb8  lis 3, 54
  035adbc  addi 3, 3, -21868
  035adc0  lfs 9, 36(3)
  035adc4  fmuls 10, 0, 8
  035adc8  fmuls 29, 9, 8
  035adcc  fnmsubs 10, 10, 8, 31
  035add0  fmadds 8, 10, 29, 8
  035add4  fmuls 10, 0, 8
  035add8  fmuls 29, 9, 8
  035addc  fnmsubs 10, 10, 8, 31
  035ade0  fmadds 8, 10, 29, 8
  035ade4  fmuls 10, 0, 8
  035ade8  fmuls 9, 9, 8
  035adec  fnmsubs 10, 10, 8, 31
  035adf0  fmadds 8, 10, 9, 8
  035adf4  fmuls 9, 12, 8
  035adf8  fmuls 10, 11, 8
  035adfc  fmuls 8, 13, 8
  035ae00  fneg 9, 9
  035ae04  fmuls 11, 3, 9
  035ae08  stfs 10, 176(1)
  035ae0c  fmuls 12, 1, 8
  035ae10  stfs 9, 180(1)
  035ae14  fmuls 13, 2, 10
  035ae18  stfs 8, 184(1)
  035ae1c  stw 18, 156(1)
  035ae20  addic 26, 1, 208
  035ae24  stfs 4, 192(1)
  035ae28  addic 4, 27, 64
  035ae2c  stfs 5, 196(1)
  035ae30  ori 3, 26, 0
  035ae34  stfs 6, 200(1)
  035ae38  stfs 7, 204(1)
  035ae3c  fmsubs 2, 2, 8, 11
  035ae40  fmsubs 3, 3, 10, 12
  035ae44  fmsubs 1, 1, 9, 13
  035ae48  stfs 2, 144(1)
  035ae4c  stfs 3, 148(1)
  035ae50  stfs 1, 152(1)
  035ae54  bl 0x500ca4
  035ae58  nop
  035ae5c  lfs 1, 16(27)
  035ae60  lis 3, 15948
  035ae64  lfs 2, 20(27)
  035ae68  lis 6, -32768
  035ae6c  stfs 1, 256(1)
  035ae70  ori 3, 3, 52429
  035ae74  lfs 1, 24(27)
  035ae78  lis 4, -16820
  035ae7c  stfs 2, 260(1)
  035ae80  lis 5, 16076
  035ae84  lfs 2, 28(27)
  035ae88  ori 4, 4, 52429
  035ae8c  stfs 1, 264(1)
  035ae90  ori 7, 5, 52429
  035ae94  stfs 2, 268(1)
  035ae98  lis 5, -16692
  035ae9c  stw 18, 272(1)
  035aea0  stw 18, 276(1)
  035aea4  stw 3, 280(1)
  035aea8  ori 8, 5, 52429
  035aeac  stw 19, 284(1)
  035aeb0  addic 3, 1, 112
  035aeb4  stw 6, 288(1)
  035aeb8  ori 5, 26, 0
  035aebc  stw 6, 292(1)
  035aec0  stw 4, 296(1)
  035aec4  stw 19, 300(1)
  035aec8  ori 4, 31, 0
  035aecc  stw 18, 416(1)
  035aed0  stw 18, 420(1)
  035aed4  stw 7, 424(1)
  035aed8  stw 19, 428(1)
  035aedc  stw 6, 432(1)
  035aee0  stw 6, 436(1)
  035aee4  stw 8, 440(1)
  035aee8  stw 19, 444(1)
  035aeec  bl 0x5e825c
  035aef0  nop
  035aef4  addic 27, 31, 16
  035aef8  addic 3, 1, 128
  035aefc  ori 4, 27, 0
  035af00  ori 5, 26, 0
  035af04  bl 0x5e825c
  035af08  nop
  035af0c  lfs 4, 132(1)
  035af10  lfs 3, 116(1)
  035af14  lfs 2, 128(1)
  035af18  fsubs 4, 4, 3
  035af1c  lfs 1, 112(1)
  035af20  lfs 6, 136(1)
  035af24  fsubs 2, 2, 1
  035af28  lfs 5, 120(1)
  035af2c  fsubs 6, 6, 5
  035af30  lfs 11, 140(1)
  035af34  fmr 9, 30
  035af38  lfs 8, 124(1)
  035af3c  fmuls 7, 4, 4
  035af40  stfs 11, 156(1)
  035af44  fmr 10, 9
  035af48  fmadds 7, 2, 2, 7
  035af4c  fmr 11, 10
  035af50  fmadds 7, 6, 6, 7
  035af54  fsqrts 12, 7
  035af58  fcmpu 0, 12, 11
  035af5c  bt 2, 0x35afac
  035af60  frsqrte 9, 7
  035af64  lis 3, 54
  035af68  addi 3, 3, -21868
  035af6c  lfs 10, 36(3)
  035af70  fmuls 11, 7, 9
  035af74  fmuls 12, 10, 9
  035af78  fnmsubs 11, 11, 9, 31
  035af7c  fmadds 9, 11, 12, 9
  035af80  fmuls 11, 7, 9
  035af84  fmuls 12, 10, 9
  035af88  fnmsubs 11, 11, 9, 31
  035af8c  fmadds 9, 11, 12, 9
  035af90  fmuls 7, 7, 9
  035af94  fmuls 10, 10, 9
  035af98  fnmsubs 7, 7, 9, 31
  035af9c  fmadds 9, 7, 10, 9
  035afa0  fmuls 11, 2, 9
  035afa4  fmuls 10, 4, 9
  035afa8  fmuls 9, 6, 9
  035afac  lfs 2, 328(25)
  035afb0  lfs 4, 320(25)
  035afb4  fsubs 2, 2, 5
  035afb8  lfs 6, 324(25)
  035afbc  fsubs 0, 4, 1
  035afc0  fsubs 29, 6, 3
  035afc4  fmr 12, 30
  035afc8  stfs 11, 144(1)
  035afcc  stfs 10, 148(1)
  035afd0  stfs 9, 152(1)
  035afd4  fmuls 4, 11, 2
  035afd8  fmuls 7, 10, 0
  035afdc  fmuls 6, 9, 29
  035afe0  fmr 13, 12
  035afe4  stfs 0, 160(1)
  035afe8  stfs 29, 164(1)
  035afec  fmsubs 4, 9, 0, 4
  035aff0  fmsubs 2, 10, 2, 6
  035aff4  fmsubs 6, 11, 29, 7
  035aff8  stw 18, 188(1)
  035affc  fmr 0, 13
  035b000  fmuls 7, 4, 4
  035b004  fmadds 7, 2, 2, 7
  035b008  fmadds 7, 6, 6, 7
  035b00c  fsqrts 28, 7
  035b010  fcmpu 0, 28, 0
  035b014  bt 2, 0x35b064
  035b018  frsqrte 12, 7
  035b01c  lis 3, 54
  035b020  addi 3, 3, -21868
  035b024  lfs 13, 36(3)
  035b028  fmuls 0, 7, 12
  035b02c  fmuls 29, 13, 12
  035b030  fnmsubs 0, 0, 12, 31
  035b034  fmadds 12, 0, 29, 12
  035b038  fmuls 0, 7, 12
  035b03c  fmuls 29, 13, 12
  035b040  fnmsubs 0, 0, 12, 31
  035b044  fmadds 12, 0, 29, 12
  035b048  fmuls 7, 7, 12
  035b04c  fmuls 13, 13, 12
  035b050  fnmsubs 7, 7, 12, 31
  035b054  fmadds 12, 7, 13, 12
  035b058  fmuls 0, 2, 12
  035b05c  fmuls 13, 4, 12
  035b060  fmuls 12, 6, 12
  035b064  fmuls 2, 12, 10
  035b068  stfs 0, 176(1)
  035b06c  fmuls 4, 0, 9
  035b070  stfs 13, 180(1)
  035b074  fmuls 6, 13, 11
  035b078  stfs 12, 184(1)
  035b07c  stw 18, 172(1)
  035b080  addic 3, 1, 272
  035b084  stfs 1, 192(1)
  035b088  addic 26, 1, 144
  035b08c  stfs 3, 196(1)
  035b090  ori 4, 3, 0
  035b094  stfs 5, 200(1)
  035b098  ori 5, 26, 0
  035b09c  stfs 8, 204(1)
  035b0a0  fmsubs 2, 13, 9, 2
  035b0a4  fmsubs 4, 12, 11, 4
  035b0a8  fmsubs 6, 0, 10, 6
  035b0ac  stfs 2, 160(1)
  035b0b0  stfs 4, 164(1)
  035b0b4  stfs 6, 168(1)
  035b0b8  bl 0x5e825c
  035b0bc  nop
  035b0c0  addic 3, 1, 288
  035b0c4  ori 5, 26, 0
  035b0c8  ori 4, 3, 0
  035b0cc  bl 0x5e825c
  035b0d0  nop
  035b0d4  addic 3, 1, 416
  035b0d8  ori 5, 26, 0
  035b0dc  ori 4, 3, 0
  035b0e0  bl 0x5e825c
  035b0e4  nop
  035b0e8  addic 3, 1, 432
  035b0ec  ori 5, 26, 0
  035b0f0  ori 4, 3, 0
  035b0f4  bl 0x5e825c
  035b0f8  nop
  035b0fc  cmpwi 29, 1
  035b100  li 26, 1
  035b104  bf 1, 0x35b628
  035b108  lis 3, 54
  035b10c  lis 23, 161
  035b110  addi 3, 3, -21868
  035b114  addic 24, 29, -1
  035b118  addic 22, 29, -2
  035b11c  addic 23, 23, 24396
  035b120  lfs 29, 36(3)
  035b124  lfs 28, 40(3)
  035b128  lis 3, 15948
  035b12c  lis 4, -32768
  035b130  stw 18, 304(1)
  035b134  ori 3, 3, 52429
  035b138  stw 18, 308(1)
  035b13c  lis 6, -16820
  035b140  lis 5, 16076
  035b144  ori 6, 6, 52429
  035b148  stw 3, 312(1)
  035b14c  stw 19, 316(1)
  035b150  ori 5, 5, 52429
  035b154  stw 4, 320(1)
  035b158  lis 3, -16692
  035b15c  stw 4, 324(1)
  035b160  cmpw 26, 24
  035b164  stw 6, 328(1)
  035b168  ori 3, 3, 52429
  035b16c  stw 19, 332(1)
  035b170  stw 18, 448(1)
  035b174  stw 18, 452(1)
  035b178  stw 5, 456(1)
  035b17c  stw 19, 460(1)
  035b180  stw 4, 464(1)
  035b184  stw 4, 468(1)
  035b188  stw 3, 472(1)
  035b18c  stw 19, 476(1)
  035b190  bf 2, 0x35b1b4
  035b194  slwi 3, 26, 4
  035b198  addic 5, 1, 208
  035b19c  addc 4, 3, 31
  035b1a0  addic 3, 1, 192
  035b1a4  clrldi 4, 4, 32
  035b1a8  bl 0x5e825c
  035b1ac  nop
  035b1b0  b 0x35b370
  035b1b4  slwi 21, 26, 4
  035b1b8  addic 20, 1, 208
  035b1bc  addc 4, 21, 31
  035b1c0  addic 3, 1, 112
  035b1c4  clrldi 4, 4, 32
  035b1c8  ori 5, 20, 0
  035b1cc  bl 0x5e825c
  035b1d0  nop
  035b1d4  addc 4, 21, 27
  035b1d8  addic 3, 1, 128
  035b1dc  clrldi 4, 4, 32
  035b1e0  ori 5, 20, 0
  035b1e4  bl 0x5e825c
  035b1e8  nop
  035b1ec  lfs 2, 132(1)
  035b1f0  lfs 6, 116(1)
  035b1f4  lfs 1, 128(1)
  035b1f8  fsubs 2, 2, 6
  035b1fc  lfs 5, 112(1)
  035b200  lfs 3, 136(1)
  035b204  fsubs 1, 1, 5
  035b208  lfs 7, 120(1)
  035b20c  fsubs 3, 3, 7
  035b210  fmr 12, 30
  035b214  fmuls 4, 2, 2
  035b218  lfs 10, 140(1)
  035b21c  lfs 8, 124(1)
  035b220  stfs 10, 156(1)
  035b224  fmr 13, 12
  035b228  fmadds 4, 1, 1, 4
  035b22c  fmr 0, 13
  035b230  fmadds 4, 3, 3, 4
  035b234  fsqrts 9, 4
  035b238  fcmpu 0, 9, 0
  035b23c  bt 2, 0x35b280
  035b240  frsqrte 9, 4
  035b244  fmuls 10, 4, 9
  035b248  fmuls 11, 9, 29
  035b24c  fnmsubs 10, 10, 9, 31
  035b250  fmadds 9, 10, 11, 9
  035b254  fmuls 10, 4, 9
  035b258  fmuls 11, 9, 29
  035b25c  fnmsubs 10, 10, 9, 31
  035b260  fmadds 9, 10, 11, 9
  035b264  fmuls 4, 4, 9
  035b268  fmuls 10, 9, 29
  035b26c  fnmsubs 4, 4, 9, 31
  035b270  fmadds 12, 4, 10, 9
  035b274  fmuls 0, 1, 12
  035b278  fmuls 13, 2, 12
  035b27c  fmuls 12, 3, 12
  035b280  lfs 1, 328(25)
  035b284  lfs 2, 320(25)
  035b288  fsubs 1, 1, 7
  035b28c  lfs 3, 324(25)
  035b290  fsubs 11, 2, 5
  035b294  fsubs 27, 3, 6
  035b298  stfs 0, 144(1)
  035b29c  fmr 9, 30
  035b2a0  stfs 13, 148(1)
  035b2a4  stfs 12, 152(1)
  035b2a8  fmuls 2, 0, 1
  035b2ac  fmuls 3, 13, 11
  035b2b0  fmuls 4, 12, 27
  035b2b4  fmr 10, 9
  035b2b8  stfs 11, 160(1)
  035b2bc  stfs 27, 164(1)
  035b2c0  fmsubs 2, 12, 11, 2
  035b2c4  fmsubs 3, 0, 27, 3
  035b2c8  fmsubs 1, 13, 1, 4
  035b2cc  fmr 11, 10
  035b2d0  stw 18, 188(1)
  035b2d4  fmuls 4, 2, 2
  035b2d8  fmadds 4, 1, 1, 4
  035b2dc  fmadds 4, 3, 3, 4
  035b2e0  fsqrts 26, 4
  035b2e4  fcmpu 0, 26, 11
  035b2e8  bt 2, 0x35b32c
  035b2ec  frsqrte 9, 4
  035b2f0  fmuls 10, 4, 9
  035b2f4  fmuls 11, 9, 29
  035b2f8  fnmsubs 10, 10, 9, 31
  035b2fc  fmadds 9, 10, 11, 9
  035b300  fmuls 10, 4, 9
  035b304  fmuls 11, 9, 29
  035b308  fnmsubs 10, 10, 9, 31
  035b30c  fmadds 9, 10, 11, 9
  035b310  fmuls 4, 4, 9
  035b314  fmuls 10, 9, 29
  035b318  fnmsubs 4, 4, 9, 31
  035b31c  fmadds 9, 4, 10, 9
  035b320  fmuls 11, 1, 9
  035b324  fmuls 10, 2, 9
  035b328  fmuls 9, 3, 9
  035b32c  fmuls 1, 9, 13
  035b330  stfs 11, 176(1)
  035b334  fmuls 2, 11, 12
  035b338  stfs 10, 180(1)
  035b33c  fmuls 3, 10, 0
  035b340  stfs 9, 184(1)
  035b344  stw 18, 172(1)
  035b348  stfs 5, 192(1)
  035b34c  stfs 6, 196(1)
  035b350  stfs 7, 200(1)
  035b354  stfs 8, 204(1)
  035b358  fmsubs 1, 10, 12, 1
  035b35c  fmsubs 2, 9, 0, 2
  035b360  fmsubs 3, 11, 13, 3
  035b364  stfs 1, 160(1)
  035b368  stfs 2, 164(1)
  035b36c  stfs 3, 168(1)
  035b370  addic 3, 1, 304
  035b374  addic 21, 1, 144
  035b378  ori 4, 3, 0
  035b37c  ori 5, 21, 0
  035b380  bl 0x5e825c
  035b384  nop
  035b388  addic 3, 1, 320
  035b38c  ori 5, 21, 0
  035b390  ori 4, 3, 0
  035b394  bl 0x5e825c
  035b398  nop
  035b39c  addic 3, 1, 448
  035b3a0  ori 5, 21, 0
  035b3a4  ori 4, 3, 0
  035b3a8  bl 0x5e825c
  035b3ac  nop
  035b3b0  addic 3, 1, 464
  035b3b4  ori 5, 21, 0
  035b3b8  ori 4, 3, 0
  035b3bc  bl 0x5e825c
  035b3c0  nop
  035b3c4  lwz 21, 344(1)
  035b3c8  cmpwi 26, 1
  035b3cc  lwz 20, 488(1)
  035b3d0  lwz 3, 28(23)
  035b3d4  bf 2, 0x35b464
  035b3d8  cmpwi 30, 16
  035b3dc  bf 2, 0x35b464
  035b3e0  ori 6, 3, 0
  035b3e4  lis 3, 255
  035b3e8  lwz 21, 336(1)
  035b3ec  lis 4, 127
  035b3f0  lwz 20, 480(1)
  035b3f4  ori 8, 3, 65535
  035b3f8  ori 9, 4, 16448
  035b3fc  li 7, 9
  035b400  addic 3, 1, 272
  035b404  stw 8, 340(1)
  035b408  li 4, 0
  035b40c  stw 8, 336(1)
  035b410  li 5, 0
  035b414  stw 9, 484(1)
  035b418  stw 9, 480(1)
  035b41c  bl 0x72280
  035b420  nop
  035b424  lwz 6, 28(23)
  035b428  addic 3, 1, 416
  035b42c  li 4, 0
  035b430  li 5, 0
  035b434  li 7, 9
  035b438  bl 0x72280
  035b43c  nop
  035b440  stw 21, 348(1)
  035b444  stw 21, 344(1)
  035b448  stw 21, 340(1)
  035b44c  stw 21, 336(1)
  035b450  stw 20, 492(1)
  035b454  stw 20, 488(1)
  035b458  stw 20, 484(1)
  035b45c  stw 20, 480(1)
  035b460  b 0x35b528
  035b464  cmpw 26, 22
  035b468  bf 2, 0x35b4f0
  035b46c  cmpwi 30, 16
  035b470  bf 2, 0x35b4f0
  035b474  ori 6, 3, 0
  035b478  lis 3, 255
  035b47c  lis 4, 127
  035b480  ori 7, 3, 65535
  035b484  ori 8, 4, 16448
  035b488  addic 3, 1, 272
  035b48c  li 4, 0
  035b490  stw 7, 348(1)
  035b494  stw 7, 344(1)
  035b498  li 5, 0
  035b49c  stw 8, 492(1)
  035b4a0  li 7, 9
  035b4a4  stw 8, 488(1)
  035b4a8  bl 0x72280
  035b4ac  nop
  035b4b0  lwz 6, 28(23)
  035b4b4  addic 3, 1, 416
  035b4b8  li 4, 0
  035b4bc  li 5, 0
  035b4c0  li 7, 9
  035b4c4  bl 0x72280
  035b4c8  nop
  035b4cc  stw 21, 348(1)
  035b4d0  stw 21, 344(1)
  035b4d4  stw 21, 340(1)
  035b4d8  stw 21, 336(1)
  035b4dc  stw 20, 492(1)
  035b4e0  stw 20, 488(1)
  035b4e4  stw 20, 484(1)
  035b4e8  stw 20, 480(1)
  035b4ec  b 0x35b528
  035b4f0  ori 6, 3, 0
  035b4f4  addic 3, 1, 272
  035b4f8  li 4, 0
  035b4fc  li 5, 0
  035b500  li 7, 9
  035b504  bl 0x72280
  035b508  nop
  035b50c  lwz 6, 28(23)
  035b510  addic 3, 1, 416
  035b514  li 4, 0
  035b518  li 5, 0
  035b51c  li 7, 9
  035b520  bl 0x72280
  035b524  nop
  035b528  lfs 1, 304(1)
  035b52c  lfs 2, 308(1)
  035b530  ori 3, 26, 0
  035b534  stfs 1, 272(1)
  035b538  lfs 1, 312(1)
  035b53c  stfs 2, 276(1)
  035b540  lfs 2, 316(1)
  035b544  stfs 1, 280(1)
  035b548  lfs 1, 320(1)
  035b54c  stfs 2, 284(1)
  035b550  lfs 2, 324(1)
  035b554  stfs 1, 288(1)
  035b558  lfs 1, 328(1)
  035b55c  stfs 2, 292(1)
  035b560  lfs 2, 332(1)
  035b564  stfs 1, 296(1)
  035b568  lfs 1, 448(1)
  035b56c  stfs 2, 300(1)
  035b570  lfs 2, 452(1)
  035b574  stfs 1, 416(1)
  035b578  lfs 1, 456(1)
  035b57c  stfs 2, 420(1)
  035b580  lfs 2, 460(1)
  035b584  stfs 1, 424(1)
  035b588  lfs 1, 464(1)
  035b58c  stfs 2, 428(1)
  035b590  lfs 2, 468(1)
  035b594  stfs 1, 432(1)
  035b598  lfs 1, 472(1)
  035b59c  stfs 2, 436(1)
  035b5a0  lfs 2, 476(1)
  035b5a4  stfs 1, 440(1)
  035b5a8  stfs 2, 444(1)
  035b5ac  bl 0x502730
  035b5b0  nop
  035b5b4  fmr 27, 1
  035b5b8  ori 3, 29, 0
  035b5bc  bl 0x502730
  035b5c0  nop
  035b5c4  fdivs 5, 27, 1
  035b5c8  fmr 1, 28
  035b5cc  fmr 2, 30
  035b5d0  fmr 3, 31
  035b5d4  fmr 4, 30
  035b5d8  bl 0xfec94
  035b5dc  nop
  035b5e0  lfs 1, 492(28)
  035b5e4  stw 18, 356(1)
  035b5e8  addic 26, 26, 1
  035b5ec  stfs 1, 352(1)
  035b5f0  lfs 1, 492(28)
  035b5f4  stw 19, 364(1)
  035b5f8  extsw 26, 26
  035b5fc  stfs 1, 360(1)
  035b600  lfs 1, 492(28)
  035b604  stw 18, 372(1)
  035b608  cmpw 26, 29
  035b60c  fadds 1, 1, 31
  035b610  stfs 1, 368(1)
  035b614  lfs 1, 492(28)
  035b618  stw 19, 380(1)
  035b61c  fadds 1, 1, 31
  035b620  stfs 1, 376(1)
  035b624  bt 0, 0x35b128
  035b628  ld 0, 736(1)
  035b62c  mtlr 0
  035b630  lfd 26, 672(1)
  035b634  lfd 27, 680(1)
  035b638  lfd 28, 688(1)
  035b63c  lfd 29, 696(1)
  035b640  lfd 30, 704(1)
  035b644  lfd 31, 712(1)
  035b648  ld 18, 560(1)
  035b64c  ld 19, 568(1)
  035b650  ld 20, 576(1)
  035b654  ld 21, 584(1)
  035b658  ld 22, 592(1)
  035b65c  ld 23, 600(1)
  035b660  ld 24, 608(1)
  035b664  ld 25, 616(1)
  035b668  ld 26, 624(1)
  035b66c  ld 27, 632(1)
  035b670  ld 28, 640(1)
  035b674  ld 29, 648(1)
  035b678  ld 30, 656(1)
  035b67c  ld 31, 664(1)
  035b680  addi 1, 1, 720
  035b684  blr

M388_0035b698:   # 0x35b698, 0xdc bytes
  035b698  stdu 1, -128(1)
  035b69c  mflr 0
  035b6a0  std 0, 144(1)
  035b6a4  lis 4, 54
  035b6a8  std 30, 112(1)
  035b6ac  lis 5, 114
  035b6b0  lwz 30, 120(3)
  035b6b4  std 31, 120(1)
  035b6b8  addi 4, 4, -18808
  035b6bc  ori 31, 3, 0
  035b6c0  lfs 1, 0(4)
  035b6c4  lfs 2, -3064(5)
  035b6c8  lfs 3, 492(30)
  035b6cc  fnmsubs 1, 2, 1, 3
  035b6d0  stfs 1, 492(30)
  035b6d4  lfs 2, 4(4)
  035b6d8  fcmpu 0, 1, 2
  035b6dc  bt 1, 0x35b6f4
  035b6e0  lis 3, 54
  035b6e4  addi 3, 3, -18808
  035b6e8  lfs 2, 8(3)
  035b6ec  fadds 1, 1, 2
  035b6f0  stfs 1, 492(30)
  035b6f4  li 3, 1
  035b6f8  li 4, 0
  035b6fc  li 10, 2
  035b700  li 5, 0
  035b704  li 6, 1
  035b708  li 7, 0
  035b70c  li 8, 0
  035b710  li 9, 1
  035b714  bl 0x502f98
  035b718  nop
  035b71c  ori 4, 3, 0
  035b720  li 3, 22
  035b724  bl 0x174f80
  035b728  nop
  035b72c  ori 3, 31, 0
  035b730  ori 4, 30, 0
  035b734  li 5, 128
  035b738  li 6, 64
  035b73c  li 7, 10
  035b740  bl 0x35aac0
  035b744  addic 4, 30, 160
  035b748  ori 3, 31, 0
  035b74c  li 5, 48
  035b750  li 6, 16
  035b754  li 7, 20
  035b758  bl 0x35aac0
  035b75c  ld 0, 144(1)
  035b760  mtlr 0
  035b764  ld 30, 112(1)
  035b768  ld 31, 120(1)
  035b76c  addi 1, 1, 128
  035b770  blr

M388_0035b774:   # 0x35b774, 0x14 bytes
  035b774  lis 3, 132
  035b778  lis 4, 1
  035b77c  addic 3, 3, 2164
  035b780  stw 4, 72(3)
  035b784  blr

M388_0035b790:   # 0x35b790, 0x204 bytes
  035b790  stdu 1, -192(1)
  035b794  mflr 0
  035b798  std 0, 208(1)
  035b79c  std 31, 184(1)
  035b7a0  std 29, 168(1)
  035b7a4  ori 31, 6, 0
  035b7a8  std 30, 176(1)
  035b7ac  ori 29, 4, 0
  035b7b0  std 28, 160(1)
  035b7b4  std 27, 152(1)
  035b7b8  std 26, 144(1)
  035b7bc  std 25, 136(1)
  035b7c0  std 24, 128(1)
  035b7c4  std 23, 120(1)
  035b7c8  ori 30, 5, 0
  035b7cc  bl 0x5c8318
  035b7d0  nop
  035b7d4  divw 4, 3, 31
  035b7d8  mullw 23, 4, 31
  035b7dc  lis 25, 132
  035b7e0  subc 23, 3, 23
  035b7e4  addic 25, 25, 2536
  035b7e8  addc 3, 30, 23
  035b7ec  cmpwi 30, 29
  035b7f0  extsw 3, 3
  035b7f4  lbzx 3, 25, 3
  035b7f8  bf 0, 0x35b850
  035b7fc  cmpwi 30, 11
  035b800  bt 1, 0x35b824
  035b804  lbz 4, 328(29)
  035b808  cmpwi 4, 0
  035b80c  bf 2, 0x35b95c
  035b810  lhz 4, 324(29)
  035b814  extsh 4, 4
  035b818  cmpwi 4, 0
  035b81c  bt 1, 0x35b95c
  035b820  b 0x35b850
  035b824  lhz 4, 326(29)
  035b828  extsh 4, 4
  035b82c  cmpwi 4, 0
  035b830  bt 1, 0x35b95c
  035b834  lbz 4, 328(29)
  035b838  cmpwi 4, 0
  035b83c  bt 2, 0x35b850
  035b840  cmpwi 30, 23
  035b844  bt 0, 0x35b850
  035b848  cmpwi 30, 26
  035b84c  bf 1, 0x35b95c
  035b850  lis 27, 150
  035b854  addic 27, 27, 14024
  035b858  lwz 4, 92(27)
  035b85c  cmpwi 4, 0
  035b860  bf 2, 0x35b870
  035b864  lwz 4, 28(27)
  035b868  cmpwi 4, -1
  035b86c  bt 2, 0x35b878
  035b870  cmpwi 30, 29
  035b874  bt 0, 0x35b95c
  035b878  cmpwi 30, 29
  035b87c  bf 0, 0x35b93c
  035b880  cmpwi 31, 0
  035b884  bf 1, 0x35b91c
  035b888  li 28, 1
  035b88c  li 24, 0
  035b890  slw 26, 28, 3
  035b894  lwz 4, 316(29)
  035b898  and 5, 4, 26
  035b89c  cmpwi 5, 0
  035b8a0  bt 2, 0x35b8f8
  035b8a4  cmpwi 30, 12
  035b8a8  bf 0, 0x35b8cc
  035b8ac  li 3, 4
  035b8b0  bl 0xfc620
  035b8b4  nop
  035b8b8  cmpwi 3, 0
  035b8bc  bf 2, 0x35b8cc
  035b8c0  lwz 3, 316(29)
  035b8c4  andc 3, 3, 26
  035b8c8  stw 3, 316(29)
  035b8cc  addic 23, 23, 1
  035b8d0  divw 3, 23, 31
  035b8d4  mullw 3, 3, 31
  035b8d8  addic 24, 24, 1
  035b8dc  subc 23, 23, 3
  035b8e0  cmpw 31, 24
  035b8e4  addc 3, 30, 23
  035b8e8  extsw 3, 3
  035b8ec  lbzx 3, 25, 3
  035b8f0  bt 1, 0x35b890
  035b8f4  b 0x35b91c
  035b8f8  lis 5, 0
  035b8fc  or 4, 4, 26
  035b900  ori 5, 5, 50000
  035b904  addc 5, 3, 5
  035b908  ori 3, 28, 0
  035b90c  stw 5, 28(27)
  035b910  stw 4, 316(29)
  035b914  stb 28, 314(29)
  035b918  b 0x35b960
  035b91c  cmpwi 30, 12
  035b920  bf 0, 0x35b95c
  035b924  li 4, 1
  035b928  slw 3, 4, 3
  035b92c  lwz 4, 316(29)
  035b930  andc 3, 4, 3
  035b934  stw 3, 316(29)
  035b938  b 0x35b95c
  035b93c  lis 4, 0
  035b940  ori 5, 3, 0
  035b944  ori 4, 4, 50000
  035b948  li 3, 1
  035b94c  addc 4, 5, 4
  035b950  stw 4, 28(27)
  035b954  stb 3, 314(29)
  035b958  b 0x35b960
  035b95c  li 3, 0
  035b960  ld 0, 208(1)
  035b964  mtlr 0
  035b968  ld 23, 120(1)
  035b96c  ld 24, 128(1)
  035b970  ld 25, 136(1)
  035b974  ld 26, 144(1)
  035b978  ld 27, 152(1)
  035b97c  ld 28, 160(1)
  035b980  ld 29, 168(1)
  035b984  ld 30, 176(1)
  035b988  ld 31, 184(1)
  035b98c  addi 1, 1, 192
  035b990  blr

M388_0035b9b0:   # 0x35b9b0, 0x318 bytes
  035b9b0  stdu 1, -288(1)
  035b9b4  mflr 0
  035b9b8  std 0, 304(1)
  035b9bc  stfd 25, 232(1)
  035b9c0  stfd 26, 240(1)
  035b9c4  stfd 27, 248(1)
  035b9c8  stfd 28, 256(1)
  035b9cc  stfd 29, 264(1)
  035b9d0  stfd 30, 272(1)
  035b9d4  stfd 31, 280(1)
  035b9d8  std 25, 176(1)
  035b9dc  lis 5, 54
  035b9e0  li 25, 0
  035b9e4  std 29, 208(1)
  035b9e8  addi 5, 5, -18028
  035b9ec  std 28, 200(1)
  035b9f0  std 27, 192(1)
  035b9f4  lis 29, 132
  035b9f8  lis 27, 132
  035b9fc  std 30, 216(1)
  035ba00  lis 28, 132
  035ba04  ori 30, 25, 0
  035ba08  lfs 26, 0(5)
  035ba0c  addic 29, 29, 2456
  035ba10  std 26, 184(1)
  035ba14  lfs 27, 4(5)
  035ba18  addic 26, 4, 196
  035ba1c  lfs 28, 8(5)
  035ba20  addic 27, 27, 2316
  035ba24  lfs 29, 12(5)
  035ba28  addic 28, 28, 2480
  035ba2c  std 31, 224(1)
  035ba30  lfs 30, 16(5)
  035ba34  std 24, 168(1)
  035ba38  ori 31, 3, 0
  035ba3c  lfs 31, 20(5)
  035ba40  lwz 3, 0(29)
  035ba44  slwi 3, 3, 2
  035ba48  addc 3, 3, 26
  035ba4c  clrldi 3, 3, 32
  035ba50  lwz 3, 0(3)
  035ba54  cmpwi 3, 0
  035ba58  bt 2, 0x35bc68
  035ba5c  lwz 4, 36(31)
  035ba60  ori 3, 31, 0
  035ba64  stw 30, 128(1)
  035ba68  addic 5, 1, 112
  035ba6c  stw 30, 132(1)
  035ba70  stw 30, 136(1)
  035ba74  stw 30, 140(1)
  035ba78  lfs 1, 36(4)
  035ba7c  lfs 25, 44(31)
  035ba80  fmuls 1, 1, 26
  035ba84  lwz 4, 0(28)
  035ba88  extsw 4, 4
  035ba8c  fdivs 25, 25, 1
  035ba90  bl 0xf1114
  035ba94  nop
  035ba98  lis 3, 161
  035ba9c  lwz 3, 1808(3)
  035baa0  clrlwi 3, 3, 31
  035baa4  cmpwi 3, 0
  035baa8  bt 2, 0x35bb2c
  035baac  li 3, 15
  035bab0  li 4, 20
  035bab4  bl 0xfe484
  035bab8  nop
  035babc  extsw 3, 3
  035bac0  fmuls 1, 25, 28
  035bac4  std 3, 144(1)
  035bac8  lis 3, 114
  035bacc  lfs 2, -3056(3)
  035bad0  lfd 3, 144(1)
  035bad4  fcfid 3, 3
  035bad8  frsp 3, 3
  035badc  fadds 3, 3, 27
  035bae0  fmuls 2, 2, 3
  035bae4  fctiwz 2, 2
  035bae8  stfd 2, 144(1)
  035baec  lwz 3, 148(1)
  035baf0  extsw 24, 3
  035baf4  bl 0x502758
  035baf8  nop
  035bafc  lis 5, -12544
  035bb00  ori 8, 3, 0
  035bb04  li 6, 207
  035bb08  addic 3, 1, 112
  035bb0c  ori 7, 24, 0
  035bb10  li 9, -100
  035bb14  addic 4, 1, 128
  035bb18  ori 5, 5, 255
  035bb1c  li 10, 1
  035bb20  bl 0x121740
  035bb24  nop
  035bb28  b 0x35bbdc
  035bb2c  lbz 3, 188(31)
  035bb30  cmpwi 3, 0
  035bb34  bt 2, 0x35bb60
  035bb38  rlwinm 3, 3, 2, 22, 29
  035bb3c  lwzx 3, 27, 3
  035bb40  lwz 4, 0(29)
  035bb44  cmpw 3, 4
  035bb48  bf 2, 0x35bb60
  035bb4c  li 3, 9
  035bb50  bl 0xfc620
  035bb54  nop
  035bb58  cmpwi 3, 0
  035bb5c  bf 2, 0x35bbdc
  035bb60  li 3, 15
  035bb64  li 4, 22
  035bb68  bl 0xfe484
  035bb6c  nop
  035bb70  extsw 3, 3
  035bb74  fmuls 1, 25, 29
  035bb78  std 3, 144(1)
  035bb7c  lis 3, 114
  035bb80  lfs 2, -3056(3)
  035bb84  lfd 3, 144(1)
  035bb88  fcfid 3, 3
  035bb8c  frsp 3, 3
  035bb90  fadds 3, 3, 27
  035bb94  fmuls 2, 2, 3
  035bb98  fctiwz 2, 2
  035bb9c  stfd 2, 144(1)
  035bba0  lwz 3, 148(1)
  035bba4  extsw 24, 3
  035bba8  bl 0x502758
  035bbac  nop
  035bbb0  lis 5, 24576
  035bbb4  ori 8, 3, 0
  035bbb8  addic 3, 1, 112
  035bbbc  li 6, 128
  035bbc0  ori 7, 24, 0
  035bbc4  addic 4, 1, 128
  035bbc8  ori 5, 5, 65535
  035bbcc  li 9, -100
  035bbd0  li 10, 1
  035bbd4  bl 0x121740
  035bbd8  nop
  035bbdc  fmr 1, 30
  035bbe0  fmr 2, 31
  035bbe4  bl 0xfcbe8
  035bbe8  nop
  035bbec  fmuls 1, 1, 25
  035bbf0  bl 0x502758
  035bbf4  nop
  035bbf8  ori 24, 3, 0
  035bbfc  li 3, 8
  035bc00  li 4, 12
  035bc04  bl 0xfe484
  035bc08  nop
  035bc0c  extsw 3, 3
  035bc10  lis 5, -4097
  035bc14  std 3, 144(1)
  035bc18  lis 3, 114
  035bc1c  lis 6, 255
  035bc20  neg 9, 24
  035bc24  ori 8, 24, 0
  035bc28  lfs 1, -3056(3)
  035bc2c  lfd 2, 144(1)
  035bc30  addic 3, 1, 112
  035bc34  fcfid 2, 2
  035bc38  li 10, 1
  035bc3c  addic 4, 1, 128
  035bc40  ori 5, 5, 32591
  035bc44  frsp 2, 2
  035bc48  fadds 2, 2, 27
  035bc4c  fmuls 1, 1, 2
  035bc50  fctiwz 1, 1
  035bc54  stfd 1, 144(1)
  035bc58  lwz 7, 148(1)
  035bc5c  extsw 7, 7
  035bc60  bl 0x121740
  035bc64  nop
  035bc68  addic 25, 25, 1
  035bc6c  addic 28, 28, 4
  035bc70  cmpwi 25, 6
  035bc74  addic 29, 29, 4
  035bc78  bt 0, 0x35ba40
  035bc7c  ld 0, 304(1)
  035bc80  mtlr 0
  035bc84  lfd 25, 232(1)
  035bc88  lfd 26, 240(1)
  035bc8c  lfd 27, 248(1)
  035bc90  lfd 28, 256(1)
  035bc94  lfd 29, 264(1)
  035bc98  lfd 30, 272(1)
  035bc9c  lfd 31, 280(1)
  035bca0  ld 24, 168(1)
  035bca4  ld 25, 176(1)
  035bca8  ld 26, 184(1)
  035bcac  ld 27, 192(1)
  035bcb0  ld 28, 200(1)
  035bcb4  ld 29, 208(1)
  035bcb8  ld 30, 216(1)
  035bcbc  ld 31, 224(1)
  035bcc0  addi 1, 1, 288
  035bcc4  blr

M388_0035bcf0:   # 0x35bcf0, 0x2b8 bytes
  035bcf0  stdu 1, -288(1)
  035bcf4  mflr 0
  035bcf8  std 0, 304(1)
  035bcfc  stfd 22, 208(1)
  035bd00  stfd 23, 216(1)
  035bd04  stfd 24, 224(1)
  035bd08  stfd 25, 232(1)
  035bd0c  stfd 26, 240(1)
  035bd10  stfd 27, 248(1)
  035bd14  stfd 28, 256(1)
  035bd18  stfd 29, 264(1)
  035bd1c  stfd 30, 272(1)
  035bd20  stfd 31, 280(1)
  035bd24  std 31, 200(1)
  035bd28  lis 4, 132
  035bd2c  std 27, 168(1)
  035bd30  ori 31, 3, 0
  035bd34  addic 27, 4, 2504
  035bd38  lwz 3, 2504(4)
  035bd3c  std 30, 192(1)
  035bd40  std 29, 184(1)
  035bd44  std 28, 176(1)
  035bd48  std 26, 160(1)
  035bd4c  cmpwi 3, -1
  035bd50  bt 2, 0x35bf58
  035bd54  lis 3, 54
  035bd58  li 28, 0
  035bd5c  addi 3, 3, -17208
  035bd60  ori 30, 28, 0
  035bd64  ori 29, 27, 0
  035bd68  lfs 23, 0(3)
  035bd6c  lfs 24, 4(3)
  035bd70  lfs 25, 8(3)
  035bd74  lfs 26, 12(3)
  035bd78  lfs 27, 16(3)
  035bd7c  lfs 28, 20(3)
  035bd80  lfs 29, 24(3)
  035bd84  lfs 30, 28(3)
  035bd88  lfs 31, 32(3)
  035bd8c  lwz 3, 36(31)
  035bd90  stw 30, 128(1)
  035bd94  stw 30, 132(1)
  035bd98  stw 30, 136(1)
  035bd9c  stw 30, 140(1)
  035bda0  lfs 1, 36(3)
  035bda4  lfs 2, 44(31)
  035bda8  fmuls 1, 1, 23
  035bdac  fdivs 22, 2, 1
  035bdb0  fmr 1, 24
  035bdb4  fmr 2, 25
  035bdb8  bl 0xfcbe8
  035bdbc  nop
  035bdc0  lwz 4, 0(29)
  035bdc4  addic 26, 1, 112
  035bdc8  ori 3, 31, 0
  035bdcc  extsw 4, 4
  035bdd0  ori 5, 26, 0
  035bdd4  fmuls 22, 22, 1
  035bdd8  bl 0xf1114
  035bddc  nop
  035bde0  ori 3, 26, 0
  035bde4  fmuls 1, 22, 26
  035bde8  bl 0x110950
  035bdec  nop
  035bdf0  lis 3, 161
  035bdf4  lwz 3, 1808(3)
  035bdf8  clrlwi 3, 3, 31
  035bdfc  cmpwi 3, 0
  035be00  bt 2, 0x35be94
  035be04  li 3, 20
  035be08  li 4, 60
  035be0c  bl 0xfe484
  035be10  nop
  035be14  extsw 3, 3
  035be18  fmr 1, 28
  035be1c  std 3, 144(1)
  035be20  lis 3, 114
  035be24  fmr 2, 29
  035be28  lfs 3, -3056(3)
  035be2c  lfd 4, 144(1)
  035be30  fcfid 4, 4
  035be34  frsp 4, 4
  035be38  fadds 4, 4, 27
  035be3c  fmuls 3, 3, 4
  035be40  fctiwz 3, 3
  035be44  stfd 3, 144(1)
  035be48  lwz 3, 148(1)
  035be4c  extsw 26, 3
  035be50  bl 0xfcbe8
  035be54  nop
  035be58  fmuls 1, 1, 22
  035be5c  bl 0x502758
  035be60  nop
  035be64  lis 5, -8448
  035be68  ori 8, 3, 0
  035be6c  addic 3, 1, 112
  035be70  li 6, 207
  035be74  ori 7, 26, 0
  035be78  addic 4, 1, 128
  035be7c  ori 5, 5, 4095
  035be80  li 9, -100
  035be84  li 10, 1
  035be88  bl 0x121740
  035be8c  nop
  035be90  b 0x35bf40
  035be94  lbz 3, 188(31)
  035be98  cmpwi 3, 0
  035be9c  bt 2, 0x35beb4
  035bea0  li 3, 12
  035bea4  bl 0xfc620
  035bea8  nop
  035beac  cmpwi 3, 0
  035beb0  bf 2, 0x35bf40
  035beb4  li 3, 20
  035beb8  li 4, 50
  035bebc  bl 0xfe484
  035bec0  nop
  035bec4  extsw 3, 3
  035bec8  fmr 1, 30
  035becc  std 3, 144(1)
  035bed0  lis 3, 114
  035bed4  fmr 2, 31
  035bed8  lfs 3, -3056(3)
  035bedc  lfd 4, 144(1)
  035bee0  fcfid 4, 4
  035bee4  frsp 4, 4
  035bee8  fadds 4, 4, 27
  035beec  fmuls 3, 3, 4
  035bef0  fctiwz 3, 3
  035bef4  stfd 3, 144(1)
  035bef8  lwz 3, 148(1)
  035befc  extsw 26, 3
  035bf00  bl 0xfcbe8
  035bf04  nop
  035bf08  fmuls 1, 1, 22
  035bf0c  bl 0x502758
  035bf10  nop
  035bf14  lis 5, -32768
  035bf18  ori 8, 3, 0
  035bf1c  addic 3, 1, 112
  035bf20  li 6, 128
  035bf24  ori 7, 26, 0
  035bf28  addic 4, 1, 128
  035bf2c  ori 5, 5, 65535
  035bf30  li 9, -100
  035bf34  li 10, 1
  035bf38  bl 0x121740
  035bf3c  nop
  035bf40  addic 28, 28, 4
  035bf44  addic 29, 29, 4
  035bf48  extsw 3, 28
  035bf4c  lwzx 3, 27, 3
  035bf50  cmpwi 3, -1
  035bf54  bf 2, 0x35bd8c
  035bf58  ld 0, 304(1)
  035bf5c  mtlr 0
  035bf60  lfd 22, 208(1)
  035bf64  lfd 23, 216(1)
  035bf68  lfd 24, 224(1)
  035bf6c  lfd 25, 232(1)
  035bf70  lfd 26, 240(1)
  035bf74  lfd 27, 248(1)
  035bf78  lfd 28, 256(1)
  035bf7c  lfd 29, 264(1)
  035bf80  lfd 30, 272(1)
  035bf84  lfd 31, 280(1)
  035bf88  ld 26, 160(1)
  035bf8c  ld 27, 168(1)
  035bf90  ld 28, 176(1)
  035bf94  ld 29, 184(1)
  035bf98  ld 30, 192(1)
  035bf9c  ld 31, 200(1)
  035bfa0  addi 1, 1, 288
  035bfa4  blr

M388_0035bfb0:   # 0x35bfb0, 0x3f8 bytes
  035bfb0  stdu 1, -224(1)
  035bfb4  mflr 0
  035bfb8  std 0, 240(1)
  035bfbc  stfd 30, 208(1)
  035bfc0  stfd 31, 216(1)
  035bfc4  std 29, 184(1)
  035bfc8  lis 5, 54
  035bfcc  li 29, 0
  035bfd0  std 21, 120(1)
  035bfd4  addi 5, 5, -16472
  035bfd8  std 27, 168(1)
  035bfdc  std 25, 152(1)
  035bfe0  lis 21, 17530
  035bfe4  ori 27, 29, 0
  035bfe8  std 26, 160(1)
  035bfec  addic 25, 3, 192
  035bff0  addic 26, 4, 196
  035bff4  std 22, 128(1)
  035bff8  lfs 31, 0(5)
  035bffc  lis 22, 16816
  035c000  std 24, 144(1)
  035c004  lfs 30, 4(5)
  035c008  std 23, 136(1)
  035c00c  li 24, 208
  035c010  li 23, 224
  035c014  std 31, 200(1)
  035c018  ori 21, 21, 16384
  035c01c  std 30, 192(1)
  035c020  std 28, 176(1)
  035c024  ori 31, 3, 0
  035c028  ori 30, 4, 0
  035c02c  slwi 3, 29, 2
  035c030  addc 3, 3, 26
  035c034  clrldi 28, 3, 32
  035c038  lwz 28, 0(28)
  035c03c  cmpwi 28, 0
  035c040  bt 2, 0x35c13c
  035c044  ori 3, 31, 0
  035c048  addic 5, 28, 16
  035c04c  ori 4, 29, 0
  035c050  bl 0xf1114
  035c054  nop
  035c058  lwz 3, 16(28)
  035c05c  lwz 4, 20(28)
  035c060  srawi 5, 3, 31
  035c064  lwz 6, 24(28)
  035c068  srawi 7, 4, 31
  035c06c  srwi 8, 5, 1
  035c070  lfs 1, 16(28)
  035c074  srwi 9, 7, 1
  035c078  lfs 2, 20(28)
  035c07c  xor 3, 8, 3
  035c080  lfs 3, 24(28)
  035c084  srawi 8, 6, 31
  035c088  subc 3, 3, 5
  035c08c  srwi 5, 8, 1
  035c090  xor 4, 9, 4
  035c094  xor 5, 5, 6
  035c098  cmpw 3, 22
  035c09c  subc 4, 4, 7
  035c0a0  subc 3, 5, 8
  035c0a4  bf 0, 0x35c0b0
  035c0a8  fmr 1, 31
  035c0ac  stw 22, 16(28)
  035c0b0  fcmpu 0, 1, 30
  035c0b4  cror 6, 0, 2
  035c0b8  bt 6, 0x35c0c0
  035c0bc  stw 21, 16(28)
  035c0c0  cmpw 4, 22
  035c0c4  bf 0, 0x35c0d0
  035c0c8  fmr 2, 31
  035c0cc  stw 22, 20(28)
  035c0d0  fcmpu 0, 2, 30
  035c0d4  cror 6, 0, 2
  035c0d8  bt 6, 0x35c0e0
  035c0dc  stw 21, 20(28)
  035c0e0  cmpw 3, 22
  035c0e4  bf 0, 0x35c0f0
  035c0e8  fmr 3, 31
  035c0ec  stw 22, 24(28)
  035c0f0  fcmpu 0, 3, 30
  035c0f4  cror 6, 0, 2
  035c0f8  bt 6, 0x35c100
  035c0fc  stw 21, 24(28)
  035c100  lfs 1, 64(31)
  035c104  addic 3, 28, 192
  035c108  stfs 1, 64(28)
  035c10c  lfs 1, 68(31)
  035c110  stfs 1, 68(28)
  035c114  lfs 1, 72(31)
  035c118  stfs 1, 72(28)
  035c11c  lfs 1, 76(31)
  035c120  stfs 1, 76(28)
  035c124  lvx 2, 0, 25
  035c128  lvx 3, 24, 31
  035c12c  lvx 4, 23, 31
  035c130  stvx 2, 0, 3
  035c134  stvx 3, 24, 28
  035c138  stvx 4, 23, 28
  035c13c  addic 29, 29, 1
  035c140  extsw 29, 29
  035c144  cmpwi 29, 10
  035c148  bt 0, 0x35c02c
  035c14c  lis 3, 132
  035c150  lbz 4, 188(31)
  035c154  lbz 5, 32(31)
  035c158  addic 3, 3, 2364
  035c15c  slwi 4, 4, 2
  035c160  cmpwi 5, 5
  035c164  lwzx 29, 3, 4
  035c168  extsw 29, 29
  035c16c  cmpwi 1, 29, -1
  035c170  bt 2, 0x35c2d0
  035c174  bt 6, 0x35c2d0
  035c178  lwz 28, 240(30)
  035c17c  cmpwi 28, 0
  035c180  bt 2, 0x35c198
  035c184  lbz 3, 32(28)
  035c188  cmpwi 3, 254
  035c18c  cmpwi 1, 3, 253
  035c190  bt 2, 0x35c198
  035c194  bf 6, 0x35c1b4
  035c198  ori 3, 31, 0
  035c19c  ori 4, 29, 0
  035c1a0  li 5, 401
  035c1a4  bl 0x3621c8
  035c1a8  nop
  035c1ac  ori 28, 3, 0
  035c1b0  stw 28, 240(30)
  035c1b4  cmpwi 28, 0
  035c1b8  bt 2, 0x35c2fc
  035c1bc  lbz 3, 32(28)
  035c1c0  cmpwi 1, 3, 253
  035c1c4  cmpwi 3, 254
  035c1c8  cror 2, 2, 6
  035c1cc  bt 2, 0x35c2fc
  035c1d0  ori 3, 31, 0
  035c1d4  addic 5, 28, 16
  035c1d8  ori 4, 29, 0
  035c1dc  bl 0xf1114
  035c1e0  nop
  035c1e4  lwz 3, 16(28)
  035c1e8  lwz 5, 20(28)
  035c1ec  srawi 4, 3, 31
  035c1f0  srawi 6, 5, 31
  035c1f4  srwi 7, 4, 1
  035c1f8  srwi 8, 6, 1
  035c1fc  xor 3, 7, 3
  035c200  lwz 7, 24(28)
  035c204  subc 4, 3, 4
  035c208  lfs 1, 16(28)
  035c20c  srawi 29, 7, 31
  035c210  lfs 2, 20(28)
  035c214  xor 3, 8, 5
  035c218  lfs 3, 24(28)
  035c21c  srwi 5, 29, 1
  035c220  cmpw 4, 22
  035c224  xor 5, 5, 7
  035c228  subc 3, 3, 6
  035c22c  subc 29, 5, 29
  035c230  bf 0, 0x35c23c
  035c234  fmr 1, 31
  035c238  stw 22, 16(28)
  035c23c  fcmpu 0, 1, 30
  035c240  cror 6, 0, 2
  035c244  bt 6, 0x35c24c
  035c248  stw 21, 16(28)
  035c24c  cmpw 3, 22
  035c250  bf 0, 0x35c25c
  035c254  fmr 2, 31
  035c258  stw 22, 20(28)
  035c25c  fcmpu 0, 2, 30
  035c260  cror 6, 0, 2
  035c264  bt 6, 0x35c26c
  035c268  stw 21, 20(28)
  035c26c  cmpw 29, 22
  035c270  fmr 1, 3
  035c274  bf 0, 0x35c280
  035c278  fmr 1, 31
  035c27c  stw 22, 24(28)
  035c280  fcmpu 0, 1, 30
  035c284  cror 6, 0, 2
  035c288  bt 6, 0x35c290
  035c28c  stw 21, 24(28)
  035c290  lfs 1, 64(31)
  035c294  addic 3, 28, 192
  035c298  stfs 1, 64(28)
  035c29c  lfs 1, 68(31)
  035c2a0  stfs 1, 68(28)
  035c2a4  lfs 1, 72(31)
  035c2a8  stfs 1, 72(28)
  035c2ac  lfs 1, 76(31)
  035c2b0  stfs 1, 76(28)
  035c2b4  lvx 2, 0, 25
  035c2b8  lvx 3, 24, 31
  035c2bc  lvx 4, 23, 31
  035c2c0  stvx 2, 0, 3
  035c2c4  stvx 3, 24, 28
  035c2c8  stvx 4, 23, 28
  035c2cc  b 0x35c2fc
  035c2d0  lwz 3, 240(30)
  035c2d4  cmpwi 3, 0
  035c2d8  bt 2, 0x35c2fc
  035c2dc  lbz 4, 32(3)
  035c2e0  cmpwi 1, 4, 253
  035c2e4  cmpwi 4, 254
  035c2e8  cror 2, 2, 6
  035c2ec  bt 2, 0x35c2fc
  035c2f0  bl 0xefb38
  035c2f4  nop
  035c2f8  stw 27, 240(30)
  035c2fc  lwz 30, 272(30)
  035c300  cmpwi 30, 0
  035c304  bt 2, 0x35c364
  035c308  lfs 1, 16(31)
  035c30c  addic 3, 30, 192
  035c310  stfs 1, 16(30)
  035c314  lfs 1, 20(31)
  035c318  stfs 1, 20(30)
  035c31c  lfs 1, 24(31)
  035c320  stfs 1, 24(30)
  035c324  lfs 1, 28(31)
  035c328  stfs 1, 28(30)
  035c32c  lfs 1, 64(31)
  035c330  stfs 1, 64(30)
  035c334  lfs 1, 68(31)
  035c338  stfs 1, 68(30)
  035c33c  lfs 1, 72(31)
  035c340  stfs 1, 72(30)
  035c344  lfs 1, 76(31)
  035c348  stfs 1, 76(30)
  035c34c  lvx 2, 0, 25
  035c350  lvx 3, 24, 31
  035c354  lvx 4, 23, 31
  035c358  stvx 2, 0, 3
  035c35c  stvx 3, 24, 30
  035c360  stvx 4, 23, 30
  035c364  ld 0, 240(1)
  035c368  mtlr 0
  035c36c  lfd 30, 208(1)
  035c370  lfd 31, 216(1)
  035c374  ld 21, 120(1)
  035c378  ld 22, 128(1)
  035c37c  ld 23, 136(1)
  035c380  ld 24, 144(1)
  035c384  ld 25, 152(1)
  035c388  ld 26, 160(1)
  035c38c  ld 27, 168(1)
  035c390  ld 28, 176(1)
  035c394  ld 29, 184(1)
  035c398  ld 30, 192(1)
  035c39c  ld 31, 200(1)
  035c3a0  addi 1, 1, 224
  035c3a4  blr

M388_0035c3c8:   # 0x35c3c8, 0x120 bytes
  035c3c8  stdu 1, -176(1)
  035c3cc  mflr 0
  035c3d0  std 0, 192(1)
  035c3d4  stfd 29, 152(1)
  035c3d8  stfd 30, 160(1)
  035c3dc  stfd 31, 168(1)
  035c3e0  std 28, 120(1)
  035c3e4  lis 5, 54
  035c3e8  lis 28, 114
  035c3ec  std 31, 144(1)
  035c3f0  std 29, 128(1)
  035c3f4  fmr 31, 2
  035c3f8  addi 31, 5, -15448
  035c3fc  std 30, 136(1)
  035c400  lis 29, 114
  035c404  std 27, 112(1)
  035c408  ori 30, 3, 0
  035c40c  ori 27, 4, 0
  035c410  lfs 30, 0(31)
  035c414  addic 5, 27, 168
  035c418  lfs 29, 4(31)
  035c41c  lfs 3, -3048(28)
  035c420  lfs 4, -3052(29)
  035c424  fmuls 2, 3, 30
  035c428  fmuls 3, 3, 29
  035c42c  fmuls 4, 4, 29
  035c430  bl 0xff2e8
  035c434  nop
  035c438  lfs 1, 68(30)
  035c43c  addic 5, 27, 164
  035c440  lfs 4, -3048(28)
  035c444  fmr 2, 31
  035c448  lfs 5, -3052(29)
  035c44c  fmuls 3, 4, 30
  035c450  fmuls 4, 4, 29
  035c454  fmuls 5, 5, 29
  035c458  bl 0xff190
  035c45c  nop
  035c460  stfs 1, 68(30)
  035c464  lfs 1, 64(30)
  035c468  lfs 2, 8(31)
  035c46c  fabs 3, 1
  035c470  lfs 4, 12(31)
  035c474  lfs 5, 168(27)
  035c478  lfs 6, 16(31)
  035c47c  fsubs 3, 2, 3
  035c480  fmuls 3, 3, 4
  035c484  lfs 4, 20(31)
  035c488  lfs 7, 24(31)
  035c48c  fmuls 3, 5, 3
  035c490  fmr 5, 7
  035c494  fmadds 1, 3, 6, 1
  035c498  fsub 3, 2, 1
  035c49c  fsel 1, 3, 1, 2
  035c4a0  fsub 2, 1, 4
  035c4a4  fsel 1, 2, 1, 4
  035c4a8  fmuls 1, 1, 5
  035c4ac  stfs 1, 64(30)
  035c4b0  bl 0x10de78
  035c4b4  nop
  035c4b8  ld 0, 192(1)
  035c4bc  mtlr 0
  035c4c0  lfd 29, 152(1)
  035c4c4  lfd 30, 160(1)
  035c4c8  lfd 31, 168(1)
  035c4cc  ld 27, 112(1)
  035c4d0  ld 28, 120(1)
  035c4d4  ld 29, 128(1)
  035c4d8  ld 30, 136(1)
  035c4dc  ld 31, 144(1)
  035c4e0  addi 1, 1, 176
  035c4e4  blr

M388_0035c4f8:   # 0x35c4f8, 0x998 bytes
  035c4f8  stdu 1, -384(1)
  035c4fc  mflr 0
  035c500  std 0, 400(1)
  035c504  stfd 22, 304(1)
  035c508  stfd 23, 312(1)
  035c50c  stfd 24, 320(1)
  035c510  stfd 25, 328(1)
  035c514  stfd 26, 336(1)
  035c518  stfd 27, 344(1)
  035c51c  stfd 28, 352(1)
  035c520  stfd 29, 360(1)
  035c524  stfd 30, 368(1)
  035c528  stfd 31, 376(1)
  035c52c  sldi 5, 5, 2
  035c530  ori 8, 6, 0
  035c534  addc 5, 4, 5
  035c538  lis 6, 165
  035c53c  clrldi 5, 5, 32
  035c540  addic 7, 6, 7136
  035c544  lhz 6, 158(4)
  035c548  extsh 6, 6
  035c54c  lwz 5, 176(5)
  035c550  sldi 9, 6, 4
  035c554  slwi 5, 5, 2
  035c558  lhz 6, 156(4)
  035c55c  extsw 5, 5
  035c560  lwzx 5, 7, 5
  035c564  lfs 5, 20(3)
  035c568  addc 7, 5, 9
  035c56c  lfs 4, 16(3)
  035c570  extsh 9, 6
  035c574  clrldi 7, 7, 32
  035c578  sldi 9, 9, 4
  035c57c  addc 9, 5, 9
  035c580  clrldi 9, 9, 32
  035c584  lfs 1, 20(7)
  035c588  lfs 2, 16(7)
  035c58c  lfs 8, 24(7)
  035c590  fsubs 3, 1, 5
  035c594  fsubs 7, 2, 4
  035c598  lfs 6, 20(9)
  035c59c  lfs 9, 16(9)
  035c5a0  fsubs 1, 1, 6
  035c5a4  fsubs 2, 2, 9
  035c5a8  lfs 6, 24(3)
  035c5ac  lfs 10, 24(9)
  035c5b0  fsubs 9, 8, 6
  035c5b4  fsubs 8, 8, 10
  035c5b8  fmuls 3, 3, 3
  035c5bc  lis 7, 54
  035c5c0  fmuls 1, 1, 1
  035c5c4  addi 9, 7, -15128
  035c5c8  clrlwi 8, 8, 24
  035c5cc  ori 7, 1, 0
  035c5d0  fmadds 3, 7, 7, 3
  035c5d4  lfs 10, 0(9)
  035c5d8  std 31, 296(1)
  035c5dc  fmadds 1, 2, 2, 1
  035c5e0  li 31, 0
  035c5e4  cmpwi 1, 8, 0
  035c5e8  fmadds 2, 9, 9, 3
  035c5ec  fmadds 3, 8, 8, 1
  035c5f0  fsqrts 1, 2
  035c5f4  lfs 2, 172(4)
  035c5f8  fsqrts 3, 3
  035c5fc  fsubs 7, 3, 1
  035c600  fcmpu 6, 7, 2
  035c604  fcmpu 0, 7, 10
  035c608  crorc 2, 0, 24
  035c60c  bt 2, 0x35c660
  035c610  lbz 8, 268(4)
  035c614  sth 6, 158(4)
  035c618  extsb 9, 8
  035c61c  lwz 8, 0(5)
  035c620  addc 6, 6, 9
  035c624  extsh 10, 6
  035c628  cmpw 10, 8
  035c62c  sth 6, 156(4)
  035c630  bt 0, 0x35c640
  035c634  ori 6, 31, 0
  035c638  sth 31, 156(4)
  035c63c  li 31, 1
  035c640  extsh 9, 6
  035c644  cmpwi 9, 0
  035c648  bf 0, 0x35c658
  035c64c  addic 6, 8, -1
  035c650  li 31, 1
  035c654  sth 6, 156(4)
  035c658  fmr 1, 10
  035c65c  b 0x35c664
  035c660  fdivs 1, 1, 3
  035c664  extsh 6, 6
  035c668  fmr 11, 2
  035c66c  sldi 6, 6, 4
  035c670  addc 5, 5, 6
  035c674  clrldi 5, 5, 32
  035c678  lfs 3, 20(5)
  035c67c  lfs 7, 16(5)
  035c680  fsubs 3, 3, 5
  035c684  fsubs 7, 7, 4
  035c688  lfs 8, 24(5)
  035c68c  fsubs 8, 8, 6
  035c690  lis 5, 54
  035c694  addi 6, 5, -15128
  035c698  fmuls 9, 3, 3
  035c69c  fmadds 9, 7, 7, 9
  035c6a0  fmadds 2, 8, 8, 9
  035c6a4  lfs 9, 4(6)
  035c6a8  fsub 30, 1, 9
  035c6ac  lfs 12, 8(6)
  035c6b0  fsqrts 2, 2
  035c6b4  lfs 13, 116(4)
  035c6b8  lfs 0, 112(4)
  035c6bc  lfs 31, 120(4)
  035c6c0  lis 5, 115
  035c6c4  addic 5, 5, 22784
  035c6c8  fsel 1, 30, 1, 9
  035c6cc  fsub 9, 12, 1
  035c6d0  fsel 9, 9, 1, 12
  035c6d4  fsubs 12, 12, 9
  035c6d8  fdivs 30, 11, 2
  035c6dc  fsub 29, 10, 2
  035c6e0  fsub 28, 10, 2
  035c6e4  fsub 27, 10, 2
  035c6e8  fsub 1, 2, 10
  035c6ec  fsub 26, 2, 10
  035c6f0  fsub 2, 2, 10
  035c6f4  fmuls 3, 3, 30
  035c6f8  fmuls 7, 7, 30
  035c6fc  fmuls 8, 8, 30
  035c700  fsel 30, 29, 10, 3
  035c704  fsel 29, 28, 10, 7
  035c708  fsel 28, 27, 10, 8
  035c70c  fsel 1, 1, 30, 3
  035c710  fsel 3, 26, 29, 7
  035c714  fsel 7, 2, 28, 8
  035c718  fmuls 2, 1, 9
  035c71c  fmuls 1, 3, 9
  035c720  fmuls 3, 7, 9
  035c724  fmadds 7, 13, 12, 2
  035c728  fmadds 8, 0, 12, 1
  035c72c  fmadds 9, 31, 12, 3
  035c730  fabs 13, 1
  035c734  fabs 0, 2
  035c738  stfs 1, 148(1)
  035c73c  stfs 2, 152(1)
  035c740  lwz 8, 148(1)
  035c744  fmuls 12, 7, 7
  035c748  lfs 31, 148(1)
  035c74c  lwz 9, 152(1)
  035c750  fsubs 30, 13, 0
  035c754  fmadds 12, 8, 8, 12
  035c758  fabs 31, 31
  035c75c  rlwinm 9, 9, 3, 29, 29
  035c760  stfs 30, 156(1)
  035c764  fmadds 12, 9, 9, 12
  035c768  fsqrts 12, 12
  035c76c  fdivs 30, 11, 12
  035c770  lfs 11, 152(1)
  035c774  fsub 29, 10, 12
  035c778  fsub 28, 10, 12
  035c77c  fsub 27, 10, 12
  035c780  fsub 26, 12, 10
  035c784  fsub 25, 12, 10
  035c788  fsub 24, 12, 10
  035c78c  lwz 10, 156(1)
  035c790  lfs 12, 156(1)
  035c794  fabs 11, 11
  035c798  fsub 22, 12, 10
  035c79c  fsub 23, 12, 10
  035c7a0  rlwimi 9, 10, 2, 30, 30
  035c7a4  rlwimi 9, 8, 4, 28, 28
  035c7a8  ori 8, 5, 0
  035c7ac  rlwimi 8, 9, 2, 26, 28
  035c7b0  slwi 9, 9, 2
  035c7b4  clrldi 8, 8, 32
  035c7b8  fsel 11, 22, 11, 13
  035c7bc  fsel 12, 23, 31, 0
  035c7c0  fcmpu 0, 12, 10
  035c7c4  fmuls 8, 8, 30
  035c7c8  fmuls 7, 7, 30
  035c7cc  fmuls 9, 9, 30
  035c7d0  fsel 13, 29, 10, 8
  035c7d4  fsel 0, 28, 10, 7
  035c7d8  fsel 31, 27, 10, 9
  035c7dc  fsel 8, 26, 13, 8
  035c7e0  fsel 7, 25, 0, 7
  035c7e4  fsel 9, 24, 31, 9
  035c7e8  fadds 4, 4, 8
  035c7ec  fadds 5, 5, 7
  035c7f0  fadds 6, 6, 9
  035c7f4  stfs 8, 112(4)
  035c7f8  stfs 7, 116(4)
  035c7fc  stfs 9, 120(4)
  035c800  stfs 4, 16(3)
  035c804  stfs 5, 20(3)
  035c808  stfs 6, 24(3)
  035c80c  lfsx 7, 5, 9
  035c810  lfs 8, 4(8)
  035c814  lfs 9, 12(6)
  035c818  bt 1, 0x35c824
  035c81c  fmr 7, 10
  035c820  b 0x35c93c
  035c824  fsubs 13, 11, 12
  035c828  fadds 11, 11, 12
  035c82c  addic 6, 1, 16
  035c830  li 10, 2
  035c834  addic 8, 6, 240
  035c838  addic 9, 6, 256
  035c83c  mtctr 10
  035c840  fdivs 11, 13, 11
  035c844  fmuls 12, 11, 11
  035c848  stfs 11, 256(7)
  035c84c  stfs 11, 260(7)
  035c850  stfs 11, 264(7)
  035c854  stfs 11, 268(7)
  035c858  lfs 11, 268(1)
  035c85c  lfs 13, 260(1)
  035c860  lfs 31, 264(1)
  035c864  fmuls 0, 12, 12
  035c868  fmuls 13, 13, 12
  035c86c  fmuls 30, 11, 0
  035c870  fmuls 31, 31, 0
  035c874  fmuls 11, 0, 0
  035c878  stfs 13, 260(1)
  035c87c  fmuls 12, 30, 12
  035c880  stfs 31, 264(1)
  035c884  stfs 12, 268(1)
  035c888  lfs 12, 240(6)
  035c88c  fmuls 12, 12, 11
  035c890  stfs 12, 256(6)
  035c894  lfs 12, 4(8)
  035c898  addic 6, 6, 8
  035c89c  addic 8, 8, 8
  035c8a0  fmuls 12, 12, 11
  035c8a4  stfs 12, 4(9)
  035c8a8  addic 9, 9, 8
  035c8ac  bdnz 0x35c888
  035c8b0  li 9, 4
  035c8b4  ori 6, 1, 0
  035c8b8  mtctr 9
  035c8bc  lis 8, 115
  035c8c0  addic 9, 6, 256
  035c8c4  addic 8, 8, 22752
  035c8c8  ori 11, 9, 0
  035c8cc  lfs 11, 256(6)
  035c8d0  lfs 12, 0(8)
  035c8d4  fmuls 11, 11, 12
  035c8d8  lfs 12, 4(8)
  035c8dc  addic 8, 8, 8
  035c8e0  stfs 11, 256(6)
  035c8e4  lfs 11, 4(9)
  035c8e8  addic 6, 6, 8
  035c8ec  fmuls 11, 11, 12
  035c8f0  stfs 11, 4(9)
  035c8f4  addic 9, 9, 8
  035c8f8  bdnz 0x35c8cc
  035c8fc  fmr 11, 10
  035c900  ori 6, 1, 0
  035c904  mtctr 10
  035c908  lfs 12, 256(6)
  035c90c  fadds 11, 11, 12
  035c910  addic 6, 6, 16
  035c914  lfs 12, 4(11)
  035c918  lfs 13, 8(11)
  035c91c  lfs 0, 12(11)
  035c920  addic 11, 11, 16
  035c924  fadds 11, 11, 12
  035c928  fadds 11, 11, 13
  035c92c  fadds 11, 11, 0
  035c930  bdnz 0x35c908
  035c934  fadds 11, 11, 9
  035c938  fmadds 7, 11, 7, 8
  035c93c  fmuls 2, 2, 2
  035c940  stfs 3, 140(1)
  035c944  fabs 8, 3
  035c948  fmadds 1, 1, 1, 2
  035c94c  fsqrts 1, 1
  035c950  lwz 6, 140(1)
  035c954  lfs 2, 140(1)
  035c958  rlwinm 6, 6, 3, 29, 29
  035c95c  fabs 3, 2
  035c960  fabs 11, 1
  035c964  stfs 1, 136(1)
  035c968  fsubs 1, 11, 8
  035c96c  stfs 1, 144(1)
  035c970  lwz 8, 136(1)
  035c974  lfs 1, 136(1)
  035c978  lwz 9, 144(1)
  035c97c  lfs 2, 144(1)
  035c980  fabs 1, 1
  035c984  rlwimi 6, 9, 2, 30, 30
  035c988  fsub 12, 2, 10
  035c98c  fsub 13, 2, 10
  035c990  rlwimi 6, 8, 4, 28, 28
  035c994  ori 8, 5, 0
  035c998  rlwimi 8, 6, 2, 26, 28
  035c99c  slwi 6, 6, 2
  035c9a0  clrldi 8, 8, 32
  035c9a4  fsel 8, 12, 1, 8
  035c9a8  lfsx 1, 5, 6
  035c9ac  lfs 2, 4(8)
  035c9b0  fsel 3, 13, 3, 11
  035c9b4  fcmpu 0, 8, 10
  035c9b8  bt 1, 0x35c9c4
  035c9bc  fmr 1, 10
  035c9c0  b 0x35cadc
  035c9c4  fsubs 11, 3, 8
  035c9c8  fadds 3, 3, 8
  035c9cc  addic 6, 1, 16
  035c9d0  li 11, 2
  035c9d4  addic 8, 6, 208
  035c9d8  addic 9, 6, 224
  035c9dc  mtctr 11
  035c9e0  fdivs 3, 11, 3
  035c9e4  fmuls 8, 3, 3
  035c9e8  stfs 3, 224(7)
  035c9ec  stfs 3, 228(7)
  035c9f0  stfs 3, 232(7)
  035c9f4  stfs 3, 236(7)
  035c9f8  lfs 3, 236(1)
  035c9fc  lfs 11, 228(1)
  035ca00  lfs 13, 232(1)
  035ca04  fmuls 12, 8, 8
  035ca08  fmuls 11, 11, 8
  035ca0c  fmuls 0, 3, 12
  035ca10  fmuls 13, 13, 12
  035ca14  fmuls 3, 12, 12
  035ca18  stfs 11, 228(1)
  035ca1c  fmuls 8, 0, 8
  035ca20  stfs 13, 232(1)
  035ca24  stfs 8, 236(1)
  035ca28  lfs 8, 208(6)
  035ca2c  fmuls 8, 8, 3
  035ca30  stfs 8, 224(6)
  035ca34  lfs 8, 4(8)
  035ca38  addic 6, 6, 8
  035ca3c  addic 8, 8, 8
  035ca40  fmuls 8, 8, 3
  035ca44  stfs 8, 4(9)
  035ca48  addic 9, 9, 8
  035ca4c  bdnz 0x35ca28
  035ca50  li 9, 4
  035ca54  ori 6, 1, 0
  035ca58  mtctr 9
  035ca5c  lis 8, 115
  035ca60  addic 9, 6, 224
  035ca64  addic 8, 8, 22752
  035ca68  ori 10, 9, 0
  035ca6c  lfs 3, 224(6)
  035ca70  lfs 8, 0(8)
  035ca74  fmuls 3, 3, 8
  035ca78  lfs 8, 4(8)
  035ca7c  addic 8, 8, 8
  035ca80  stfs 3, 224(6)
  035ca84  lfs 3, 4(9)
  035ca88  addic 6, 6, 8
  035ca8c  fmuls 3, 3, 8
  035ca90  stfs 3, 4(9)
  035ca94  addic 9, 9, 8
  035ca98  bdnz 0x35ca6c
  035ca9c  fmr 3, 10
  035caa0  ori 6, 1, 0
  035caa4  mtctr 11
  035caa8  lfs 8, 224(6)
  035caac  fadds 3, 3, 8
  035cab0  addic 6, 6, 16
  035cab4  lfs 8, 4(10)
  035cab8  lfs 11, 8(10)
  035cabc  lfs 12, 12(10)
  035cac0  addic 10, 10, 16
  035cac4  fadds 3, 3, 8
  035cac8  fadds 3, 3, 11
  035cacc  fadds 3, 3, 12
  035cad0  bdnz 0x35caa8
  035cad4  fadds 3, 3, 9
  035cad8  fmadds 1, 3, 1, 2
  035cadc  lbz 6, 32(3)
  035cae0  cmpwi 6, 5
  035cae4  bf 2, 0x35ce40
  035cae8  lis 8, 151
  035caec  addic 8, 8, -25376
  035caf0  lfs 1, 128(8)
  035caf4  lfs 2, 132(8)
  035caf8  fsubs 3, 1, 4
  035cafc  fsubs 7, 2, 5
  035cb00  fabs 8, 3
  035cb04  fabs 11, 7
  035cb08  stfs 3, 124(1)
  035cb0c  stfs 7, 128(1)
  035cb10  fsubs 3, 8, 11
  035cb14  stfs 3, 132(1)
  035cb18  lwz 6, 124(1)
  035cb1c  lfs 3, 124(1)
  035cb20  lwz 9, 128(1)
  035cb24  lfs 7, 128(1)
  035cb28  fabs 3, 3
  035cb2c  lwz 10, 132(1)
  035cb30  rlwinm 9, 9, 3, 29, 29
  035cb34  fabs 12, 7
  035cb38  lfs 7, 132(1)
  035cb3c  rlwimi 9, 10, 2, 30, 30
  035cb40  fsub 13, 7, 10
  035cb44  fsub 0, 7, 10
  035cb48  rlwimi 9, 6, 4, 28, 28
  035cb4c  ori 6, 5, 0
  035cb50  rlwimi 6, 9, 2, 26, 28
  035cb54  slwi 9, 9, 2
  035cb58  clrldi 6, 6, 32
  035cb5c  fsel 11, 13, 3, 11
  035cb60  lfsx 7, 5, 9
  035cb64  fsel 8, 0, 12, 8
  035cb68  lfs 3, 4(6)
  035cb6c  fcmpu 0, 11, 10
  035cb70  bt 1, 0x35cb7c
  035cb74  fmr 7, 10
  035cb78  b 0x35cc94
  035cb7c  fsubs 12, 8, 11
  035cb80  fadds 8, 8, 11
  035cb84  addic 6, 1, 16
  035cb88  li 11, 2
  035cb8c  addic 9, 6, 176
  035cb90  addic 10, 6, 192
  035cb94  mtctr 11
  035cb98  fdivs 8, 12, 8
  035cb9c  fmuls 11, 8, 8
  035cba0  stfs 8, 192(7)
  035cba4  stfs 8, 196(7)
  035cba8  stfs 8, 200(7)
  035cbac  stfs 8, 204(7)
  035cbb0  lfs 8, 204(1)
  035cbb4  lfs 12, 196(1)
  035cbb8  lfs 0, 200(1)
  035cbbc  fmuls 13, 11, 11
  035cbc0  fmuls 12, 12, 11
  035cbc4  fmuls 31, 8, 13
  035cbc8  fmuls 0, 0, 13
  035cbcc  fmuls 8, 13, 13
  035cbd0  stfs 12, 196(1)
  035cbd4  fmuls 11, 31, 11
  035cbd8  stfs 0, 200(1)
  035cbdc  stfs 11, 204(1)
  035cbe0  lfs 11, 176(6)
  035cbe4  fmuls 11, 11, 8
  035cbe8  stfs 11, 192(6)
  035cbec  lfs 11, 4(9)
  035cbf0  addic 6, 6, 8
  035cbf4  addic 9, 9, 8
  035cbf8  fmuls 11, 11, 8
  035cbfc  stfs 11, 4(10)
  035cc00  addic 10, 10, 8
  035cc04  bdnz 0x35cbe0
  035cc08  li 10, 4
  035cc0c  ori 6, 1, 0
  035cc10  mtctr 10
  035cc14  lis 9, 115
  035cc18  addic 10, 6, 192
  035cc1c  addic 9, 9, 22752
  035cc20  ori 12, 10, 0
  035cc24  lfs 8, 192(6)
  035cc28  lfs 11, 0(9)
  035cc2c  fmuls 8, 8, 11
  035cc30  lfs 11, 4(9)
  035cc34  addic 9, 9, 8
  035cc38  stfs 8, 192(6)
  035cc3c  lfs 8, 4(10)
  035cc40  addic 6, 6, 8
  035cc44  fmuls 8, 8, 11
  035cc48  stfs 8, 4(10)
  035cc4c  addic 10, 10, 8
  035cc50  bdnz 0x35cc24
  035cc54  fmr 8, 10
  035cc58  ori 6, 1, 0
  035cc5c  mtctr 11
  035cc60  lfs 11, 192(6)
  035cc64  fadds 8, 8, 11
  035cc68  addic 6, 6, 16
  035cc6c  lfs 11, 4(12)
  035cc70  lfs 12, 8(12)
  035cc74  lfs 13, 12(12)
  035cc78  addic 12, 12, 16
  035cc7c  fadds 8, 8, 11
  035cc80  fadds 8, 8, 12
  035cc84  fadds 8, 8, 13
  035cc88  bdnz 0x35cc60
  035cc8c  fadds 8, 8, 9
  035cc90  fmadds 7, 8, 7, 3
  035cc94  fsubs 2, 5, 2
  035cc98  fsubs 1, 4, 1
  035cc9c  fmuls 2, 2, 2
  035cca0  fmadds 1, 1, 1, 2
  035cca4  lfs 2, 136(8)
  035cca8  fsubs 2, 2, 6
  035ccac  fsqrts 1, 1
  035ccb0  stfs 2, 116(1)
  035ccb4  fabs 3, 2
  035ccb8  fabs 2, 1
  035ccbc  stfs 1, 112(1)
  035ccc0  lwz 6, 116(1)
  035ccc4  lfs 4, 116(1)
  035ccc8  rlwinm 6, 6, 3, 29, 29
  035cccc  fabs 5, 4
  035ccd0  fsubs 1, 2, 3
  035ccd4  stfs 1, 120(1)
  035ccd8  lwz 8, 112(1)
  035ccdc  lfs 1, 112(1)
  035cce0  lwz 9, 120(1)
  035cce4  lfs 4, 120(1)
  035cce8  fabs 1, 1
  035ccec  rlwimi 6, 9, 2, 30, 30
  035ccf0  fsub 6, 4, 10
  035ccf4  fsub 8, 4, 10
  035ccf8  rlwimi 6, 8, 4, 28, 28
  035ccfc  ori 8, 5, 0
  035cd00  rlwimi 8, 6, 2, 26, 28
  035cd04  slwi 6, 6, 2
  035cd08  clrldi 8, 8, 32
  035cd0c  fsel 3, 6, 1, 3
  035cd10  lfsx 4, 5, 6
  035cd14  lfs 1, 4(8)
  035cd18  fsel 2, 8, 5, 2
  035cd1c  fcmpu 0, 3, 10
  035cd20  bt 1, 0x35cd2c
  035cd24  fmr 1, 10
  035cd28  b 0x35ce40
  035cd2c  fsubs 5, 2, 3
  035cd30  fadds 2, 2, 3
  035cd34  li 8, 2
  035cd38  mtctr 8
  035cd3c  fdivs 2, 5, 2
  035cd40  fmuls 3, 2, 2
  035cd44  stfs 2, 160(7)
  035cd48  stfs 2, 164(7)
  035cd4c  stfs 2, 168(7)
  035cd50  stfs 2, 172(7)
  035cd54  lfs 2, 172(1)
  035cd58  addic 7, 1, 16
  035cd5c  lfs 5, 164(1)
  035cd60  lfs 8, 168(1)
  035cd64  fmuls 6, 3, 3
  035cd68  addic 5, 7, 144
  035cd6c  fmuls 5, 5, 3
  035cd70  addic 6, 7, 160
  035cd74  fmuls 11, 2, 6
  035cd78  fmuls 8, 8, 6
  035cd7c  fmuls 2, 6, 6
  035cd80  stfs 5, 164(1)
  035cd84  fmuls 3, 11, 3
  035cd88  stfs 8, 168(1)
  035cd8c  stfs 3, 172(1)
  035cd90  lfs 3, 144(7)
  035cd94  fmuls 3, 3, 2
  035cd98  stfs 3, 160(7)
  035cd9c  lfs 3, 4(5)
  035cda0  addic 7, 7, 8
  035cda4  addic 5, 5, 8
  035cda8  fmuls 3, 3, 2
  035cdac  stfs 3, 4(6)
  035cdb0  addic 6, 6, 8
  035cdb4  bdnz 0x35cd90
  035cdb8  li 7, 4
  035cdbc  ori 5, 1, 0
  035cdc0  mtctr 7
  035cdc4  lis 6, 115
  035cdc8  addic 7, 5, 160
  035cdcc  addic 6, 6, 22752
  035cdd0  ori 9, 7, 0
  035cdd4  lfs 2, 160(5)
  035cdd8  lfs 3, 0(6)
  035cddc  fmuls 2, 2, 3
  035cde0  lfs 3, 4(6)
  035cde4  addic 6, 6, 8
  035cde8  stfs 2, 160(5)
  035cdec  lfs 2, 4(7)
  035cdf0  addic 5, 5, 8
  035cdf4  fmuls 2, 2, 3
  035cdf8  stfs 2, 4(7)
  035cdfc  addic 7, 7, 8
  035ce00  bdnz 0x35cdd4
  035ce04  ori 5, 1, 0
  035ce08  mtctr 8
  035ce0c  lfs 2, 160(5)
  035ce10  lfs 3, 4(9)
  035ce14  fadds 2, 10, 2
  035ce18  lfs 5, 8(9)
  035ce1c  lfs 10, 12(9)
  035ce20  addic 5, 5, 16
  035ce24  addic 9, 9, 16
  035ce28  fadds 2, 2, 3
  035ce2c  fadds 2, 2, 5
  035ce30  fadds 10, 2, 10
  035ce34  bdnz 0x35ce0c
  035ce38  fadds 2, 10, 9
  035ce3c  fmadds 1, 2, 4, 1
  035ce40  bt 6, 0x35ce50
  035ce44  fneg 2, 1
  035ce48  fmr 1, 7
  035ce4c  bl 0x35c3c8
  035ce50  ori 3, 31, 0
  035ce54  ld 0, 400(1)
  035ce58  mtlr 0
  035ce5c  lfd 22, 304(1)
  035ce60  lfd 23, 312(1)
  035ce64  lfd 24, 320(1)
  035ce68  lfd 25, 328(1)
  035ce6c  lfd 26, 336(1)
  035ce70  lfd 27, 344(1)
  035ce74  lfd 28, 352(1)
  035ce78  lfd 29, 360(1)
  035ce7c  lfd 30, 368(1)
  035ce80  lfd 31, 376(1)
  035ce84  ld 31, 296(1)
  035ce88  addi 1, 1, 384
  035ce8c  blr

M388_0035ceb0:   # 0x35ceb0, 0x2b8 bytes
  035ceb0  stdu 1, -144(1)
  035ceb4  mflr 0
  035ceb8  std 0, 160(1)
  035cebc  std 31, 136(1)
  035cec0  ori 8, 5, 0
  035cec4  ori 31, 4, 0
  035cec8  sldi 4, 8, 2
  035cecc  lis 5, 165
  035ced0  std 30, 128(1)
  035ced4  addc 4, 31, 4
  035ced8  addic 30, 5, 7136
  035cedc  clrldi 4, 4, 32
  035cee0  lis 5, 54
  035cee4  clrlwi 7, 6, 24
  035cee8  li 6, 0
  035ceec  addi 5, 5, -12656
  035cef0  lwz 4, 176(4)
  035cef4  slwi 4, 4, 2
  035cef8  extsw 9, 4
  035cefc  ori 4, 3, 0
  035cf00  ori 3, 8, 0
  035cf04  lwzx 30, 30, 9
  035cf08  std 29, 120(1)
  035cf0c  std 28, 112(1)
  035cf10  cmpwi 30, 0
  035cf14  bt 2, 0x35d110
  035cf18  lhz 8, 156(31)
  035cf1c  li 9, 0
  035cf20  lwz 11, 0(30)
  035cf24  lis 10, 151
  035cf28  extsh 12, 8
  035cf2c  extsw 29, 11
  035cf30  addic 28, 12, 1
  035cf34  addic 12, 12, -1
  035cf38  subc 29, 28, 29
  035cf3c  subc 28, 28, 9
  035cf40  sradi 29, 29, 63
  035cf44  addic 11, 11, -1
  035cf48  and 29, 29, 28
  035cf4c  li 28, 0
  035cf50  addc 9, 9, 29
  035cf54  subc 29, 12, 28
  035cf58  sldi 9, 9, 4
  035cf5c  addic 10, 10, -25376
  035cf60  addc 9, 30, 9
  035cf64  subc 11, 11, 12
  035cf68  clrldi 9, 9, 32
  035cf6c  sradi 29, 29, 63
  035cf70  and 11, 29, 11
  035cf74  lfs 1, 20(9)
  035cf78  lfs 2, 132(10)
  035cf7c  addc 11, 12, 11
  035cf80  fsubs 4, 1, 2
  035cf84  sldi 11, 11, 4
  035cf88  lfs 1, 16(9)
  035cf8c  addc 11, 30, 11
  035cf90  lfs 3, 128(10)
  035cf94  clrldi 11, 11, 32
  035cf98  fsubs 5, 1, 3
  035cf9c  lfs 6, 24(9)
  035cfa0  lfs 1, 136(10)
  035cfa4  fsubs 6, 6, 1
  035cfa8  lfs 7, 20(11)
  035cfac  fmuls 4, 4, 4
  035cfb0  fsubs 7, 7, 2
  035cfb4  lfs 8, 16(11)
  035cfb8  lfs 9, 24(11)
  035cfbc  fsubs 8, 8, 3
  035cfc0  fsubs 9, 9, 1
  035cfc4  li 9, -1
  035cfc8  fmadds 4, 5, 5, 4
  035cfcc  fmuls 5, 7, 7
  035cfd0  fmadds 4, 6, 6, 4
  035cfd4  fmadds 5, 8, 8, 5
  035cfd8  fsqrts 4, 4
  035cfdc  fmadds 5, 9, 9, 5
  035cfe0  fsqrts 5, 5
  035cfe4  fcmpu 1, 5, 4
  035cfe8  bt 5, 0x35d020
  035cfec  li 9, 1
  035cff0  bt 4, 0x35d020
  035cff4  li 10, 1
  035cff8  lbz 12, 268(31)
  035cffc  li 9, 1
  035d000  li 11, -1
  035d004  subc 10, 10, 12
  035d008  subc 9, 9, 11
  035d00c  cntlzw 10, 10
  035d010  sldi 10, 10, 58
  035d014  sradi 10, 10, 63
  035d018  and 9, 10, 9
  035d01c  addc 9, 11, 9
  035d020  lbz 10, 268(31)
  035d024  extsb 10, 10
  035d028  cmpw 9, 10
  035d02c  bt 2, 0x35d07c
  035d030  lis 6, 114
  035d034  lfs 1, 0(5)
  035d038  lfs 2, 4(5)
  035d03c  lfs 3, -3064(6)
  035d040  lfs 4, 172(31)
  035d044  fmadds 1, 3, 1, 2
  035d048  fmuls 1, 4, 1
  035d04c  stfs 1, 172(31)
  035d050  lfs 2, 8(5)
  035d054  lfs 3, -3064(6)
  035d058  fmuls 2, 3, 2
  035d05c  fcmpu 0, 1, 2
  035d060  cror 6, 1, 2
  035d064  bt 6, 0x35d0f8
  035d068  lhz 5, 158(31)
  035d06c  stb 9, 268(31)
  035d070  sth 5, 156(31)
  035d074  sth 8, 158(31)
  035d078  b 0x35d0f8
  035d07c  lfs 4, 20(4)
  035d080  lfs 5, 16(4)
  035d084  fsubs 2, 4, 2
  035d088  fsubs 4, 5, 3
  035d08c  lfs 3, 24(4)
  035d090  fsubs 1, 3, 1
  035d094  lfs 3, 4(5)
  035d098  lbz 8, 188(4)
  035d09c  cmpwi 8, 4
  035d0a0  fmuls 2, 2, 2
  035d0a4  fmadds 2, 4, 4, 2
  035d0a8  fmadds 1, 1, 1, 2
  035d0ac  fsqrts 1, 1
  035d0b0  bf 2, 0x35d0b8
  035d0b4  lfs 3, 12(5)
  035d0b8  lfs 2, 20(5)
  035d0bc  fmuls 2, 3, 2
  035d0c0  lis 8, 114
  035d0c4  lfs 3, 16(5)
  035d0c8  fdivs 1, 2, 1
  035d0cc  lfs 2, 172(31)
  035d0d0  lfs 4, -3064(8)
  035d0d4  fmuls 3, 4, 3
  035d0d8  fsubs 1, 1, 2
  035d0dc  fmadds 1, 3, 1, 2
  035d0e0  stfs 1, 172(31)
  035d0e4  lfs 2, 24(5)
  035d0e8  fcmpu 0, 1, 2
  035d0ec  cror 6, 1, 2
  035d0f0  bt 6, 0x35d0f8
  035d0f4  stw 6, 172(31)
  035d0f8  ori 5, 3, 0
  035d0fc  ori 3, 4, 0
  035d100  ori 6, 7, 0
  035d104  ori 4, 31, 0
  035d108  bl 0x35c4f8
  035d10c  ori 6, 3, 0
  035d110  lhz 5, 156(31)
  035d114  li 4, 0
  035d118  ori 3, 6, 2
  035d11c  extsh 5, 5
  035d120  subc 3, 3, 6
  035d124  sldi 5, 5, 4
  035d128  addc 5, 30, 5
  035d12c  clrldi 5, 5, 32
  035d130  lwz 5, 28(5)
  035d134  extsw 5, 5
  035d138  subc 4, 4, 5
  035d13c  sradi 4, 4, 63
  035d140  and 3, 4, 3
  035d144  addc 3, 6, 3
  035d148  ld 0, 160(1)
  035d14c  mtlr 0
  035d150  ld 28, 112(1)
  035d154  ld 29, 120(1)
  035d158  ld 30, 128(1)
  035d15c  ld 31, 136(1)
  035d160  addi 1, 1, 144
  035d164  blr

M388_0035d190:   # 0x35d190, 0x190 bytes
  035d190  stdu 1, -176(1)
  035d194  mflr 0
  035d198  std 0, 192(1)
  035d19c  stfd 30, 160(1)
  035d1a0  stfd 31, 168(1)
  035d1a4  std 31, 152(1)
  035d1a8  sldi 5, 5, 2
  035d1ac  std 30, 144(1)
  035d1b0  ori 31, 4, 0
  035d1b4  addc 30, 4, 5
  035d1b8  std 29, 136(1)
  035d1bc  clrldi 30, 30, 32
  035d1c0  lwz 29, 196(30)
  035d1c4  std 28, 128(1)
  035d1c8  std 27, 120(1)
  035d1cc  std 26, 112(1)
  035d1d0  cmpwi 29, 0
  035d1d4  bt 2, 0x35d2f0
  035d1d8  lis 4, 54
  035d1dc  lwz 27, 120(29)
  035d1e0  li 6, -1
  035d1e4  addi 28, 4, -11928
  035d1e8  addic 4, 29, 16
  035d1ec  lfs 1, 0(28)
  035d1f0  lfs 2, 4(28)
  035d1f4  bl 0x10fb28
  035d1f8  nop
  035d1fc  lfs 1, 8(28)
  035d200  lfs 2, 112(31)
  035d204  lis 26, 114
  035d208  fmuls 2, 2, 1
  035d20c  addic 3, 27, 16
  035d210  stfs 2, 16(27)
  035d214  lfs 2, 116(31)
  035d218  fmuls 2, 2, 1
  035d21c  stfs 2, 20(27)
  035d220  lfs 2, 120(31)
  035d224  fmuls 1, 2, 1
  035d228  stfs 1, 24(27)
  035d22c  lfs 1, 124(31)
  035d230  stfs 1, 28(27)
  035d234  lfs 1, 12(28)
  035d238  lfs 2, -3052(26)
  035d23c  fmuls 1, 2, 1
  035d240  bl 0x110950
  035d244  nop
  035d248  li 3, 3
  035d24c  lfs 1, 16(29)
  035d250  stb 3, 32(29)
  035d254  lfs 2, 16(27)
  035d258  fadds 1, 1, 2
  035d25c  lfs 2, 20(29)
  035d260  lfs 3, 24(29)
  035d264  stfs 1, 16(29)
  035d268  lfs 1, 20(27)
  035d26c  fadds 1, 2, 1
  035d270  stfs 1, 20(29)
  035d274  lfs 1, 24(27)
  035d278  fadds 1, 3, 1
  035d27c  stfs 1, 24(29)
  035d280  lfs 1, 16(28)
  035d284  lfs 2, 20(28)
  035d288  lfs 3, -3052(26)
  035d28c  fmuls 1, 3, 1
  035d290  fmuls 2, 3, 2
  035d294  bl 0xfcbe8
  035d298  nop
  035d29c  stfs 1, 48(27)
  035d2a0  lfs 31, 24(28)
  035d2a4  lfs 30, 28(28)
  035d2a8  lfs 2, -3052(26)
  035d2ac  fmuls 1, 2, 31
  035d2b0  fmuls 2, 2, 30
  035d2b4  bl 0xfcbe8
  035d2b8  nop
  035d2bc  stfs 1, 52(27)
  035d2c0  lfs 2, -3052(26)
  035d2c4  fmuls 1, 2, 31
  035d2c8  fmuls 2, 2, 30
  035d2cc  bl 0xfcbe8
  035d2d0  nop
  035d2d4  stfs 1, 56(27)
  035d2d8  li 3, 255
  035d2dc  ld 4, 32(28)
  035d2e0  li 5, 0
  035d2e4  stb 3, 164(29)
  035d2e8  stw 5, 196(30)
  035d2ec  std 4, 56(29)
  035d2f0  ld 0, 192(1)
  035d2f4  mtlr 0
  035d2f8  lfd 30, 160(1)
  035d2fc  lfd 31, 168(1)
  035d300  ld 26, 112(1)
  035d304  ld 27, 120(1)
  035d308  ld 28, 128(1)
  035d30c  ld 29, 136(1)
  035d310  ld 30, 144(1)
  035d314  ld 31, 152(1)
  035d318  addi 1, 1, 176
  035d31c  blr

M388_0035d338:   # 0x35d338, 0x5f8 bytes
  035d338  stdu 1, -240(1)
  035d33c  mflr 0
  035d340  std 0, 256(1)
  035d344  stfd 31, 232(1)
  035d348  std 31, 224(1)
  035d34c  ori 31, 3, 0
  035d350  std 29, 208(1)
  035d354  std 28, 200(1)
  035d358  lis 3, 54
  035d35c  li 29, 0
  035d360  std 30, 216(1)
  035d364  addi 28, 3, -11488
  035d368  ori 30, 4, 0
  035d36c  lhz 6, 52(31)
  035d370  ori 3, 31, 0
  035d374  li 4, 0
  035d378  rlwimi 6, 29, 0, 19, 19
  035d37c  lfs 31, 0(28)
  035d380  stw 29, 0(5)
  035d384  li 5, -1
  035d388  sth 6, 52(31)
  035d38c  bl 0xfd8d0
  035d390  nop
  035d394  li 5, 120
  035d398  addic 4, 30, 96
  035d39c  ori 3, 31, 0
  035d3a0  stb 5, 103(30)
  035d3a4  bl 0x10c808
  035d3a8  nop
  035d3ac  li 3, 4
  035d3b0  lwz 5, 304(30)
  035d3b4  lis 4, 165
  035d3b8  stb 3, 315(30)
  035d3bc  slwi 3, 5, 7
  035d3c0  lwz 4, 7128(4)
  035d3c4  addc 5, 4, 3
  035d3c8  clrldi 5, 5, 32
  035d3cc  lis 3, 114
  035d3d0  lfs 4, 4(5)
  035d3d4  lfs 3, 0(5)
  035d3d8  fmuls 1, 4, 4
  035d3dc  lfs 5, 8(5)
  035d3e0  sth 29, 156(30)
  035d3e4  fmadds 1, 3, 3, 1
  035d3e8  fmadds 2, 5, 5, 1
  035d3ec  lfs 1, 4(28)
  035d3f0  lfs 6, -3052(3)
  035d3f4  lwz 3, 308(30)
  035d3f8  lwz 4, 300(30)
  035d3fc  lwz 6, 192(30)
  035d400  fmuls 1, 6, 1
  035d404  fsqrts 2, 2
  035d408  fcmpu 0, 2, 31
  035d40c  bf 2, 0x35d424
  035d410  fmr 2, 31
  035d414  lfs 1, 12(5)
  035d418  fmr 3, 2
  035d41c  fmr 4, 3
  035d420  b 0x35d43c
  035d424  fdivs 2, 1, 2
  035d428  lfs 1, 12(5)
  035d42c  fmr 6, 4
  035d430  fmuls 4, 3, 2
  035d434  fmuls 3, 6, 2
  035d438  fmuls 2, 5, 2
  035d43c  lis 5, 165
  035d440  stfs 4, 112(30)
  035d444  slwi 6, 6, 2
  035d448  stfs 3, 116(30)
  035d44c  addic 5, 5, 7136
  035d450  stfs 2, 120(30)
  035d454  extsw 6, 6
  035d458  lis 8, 54
  035d45c  lwzx 7, 5, 6
  035d460  stfs 1, 124(30)
  035d464  lfs 1, 16(7)
  035d468  stfs 1, 16(31)
  035d46c  lfs 1, 20(7)
  035d470  stfs 1, 20(31)
  035d474  lfs 1, 24(7)
  035d478  stfs 1, 24(31)
  035d47c  lfs 1, 28(7)
  035d480  stfs 1, 28(31)
  035d484  lfs 1, 32(7)
  035d488  lfs 2, 16(7)
  035d48c  lfs 3, 36(7)
  035d490  lfs 4, 20(7)
  035d494  fsubs 1, 1, 2
  035d498  fsubs 2, 3, 4
  035d49c  lis 7, 115
  035d4a0  addi 8, 8, -11488
  035d4a4  addic 7, 7, 22784
  035d4a8  fabs 4, 1
  035d4ac  fabs 5, 2
  035d4b0  stfs 1, 124(1)
  035d4b4  stfs 2, 128(1)
  035d4b8  fsubs 1, 4, 5
  035d4bc  stfs 1, 132(1)
  035d4c0  lwz 9, 124(1)
  035d4c4  lfs 1, 124(1)
  035d4c8  lwz 10, 128(1)
  035d4cc  lfs 2, 128(1)
  035d4d0  fabs 1, 1
  035d4d4  lwz 11, 132(1)
  035d4d8  rlwinm 10, 10, 3, 29, 29
  035d4dc  lfs 3, 132(1)
  035d4e0  fabs 2, 2
  035d4e4  rlwimi 10, 11, 2, 30, 30
  035d4e8  fsub 6, 3, 31
  035d4ec  fsub 3, 3, 31
  035d4f0  rlwimi 10, 9, 4, 28, 28
  035d4f4  ori 9, 7, 0
  035d4f8  rlwimi 9, 10, 2, 26, 28
  035d4fc  slwi 10, 10, 2
  035d500  clrldi 9, 9, 32
  035d504  fsel 5, 6, 1, 5
  035d508  lfsx 1, 7, 10
  035d50c  fsel 4, 3, 2, 4
  035d510  lfs 2, 4(9)
  035d514  lfs 3, 8(8)
  035d518  fcmpu 0, 5, 31
  035d51c  bt 1, 0x35d528
  035d520  fmr 1, 31
  035d524  b 0x35d640
  035d528  fsubs 6, 4, 5
  035d52c  fadds 4, 4, 5
  035d530  addic 8, 1, 16
  035d534  li 11, 2
  035d538  addic 10, 8, 168
  035d53c  addic 9, 8, 152
  035d540  mtctr 11
  035d544  fdivs 4, 6, 4
  035d548  fmuls 5, 4, 4
  035d54c  stfs 4, 180(1)
  035d550  stfs 4, 172(1)
  035d554  stfs 4, 176(1)
  035d558  stfs 4, 168(1)
  035d55c  lfs 7, 180(1)
  035d560  lfs 8, 172(1)
  035d564  lfs 9, 176(1)
  035d568  fmuls 6, 5, 5
  035d56c  fmuls 8, 8, 5
  035d570  fmuls 7, 7, 6
  035d574  fmuls 4, 6, 6
  035d578  fmuls 6, 9, 6
  035d57c  stfs 8, 172(1)
  035d580  fmuls 5, 7, 5
  035d584  stfs 6, 176(1)
  035d588  stfs 5, 180(1)
  035d58c  lfs 5, 152(8)
  035d590  fmuls 5, 5, 4
  035d594  stfs 5, 168(8)
  035d598  lfs 5, 4(9)
  035d59c  addic 9, 9, 8
  035d5a0  fmuls 5, 5, 4
  035d5a4  addic 8, 8, 8
  035d5a8  stfs 5, 4(10)
  035d5ac  addic 10, 10, 8
  035d5b0  bdnz 0x35d58c
  035d5b4  li 10, 4
  035d5b8  ori 8, 1, 0
  035d5bc  mtctr 10
  035d5c0  lis 9, 115
  035d5c4  addic 10, 8, 168
  035d5c8  addic 9, 9, 22752
  035d5cc  ori 12, 10, 0
  035d5d0  lfs 4, 168(8)
  035d5d4  lfs 5, 0(9)
  035d5d8  fmuls 4, 4, 5
  035d5dc  lfs 5, 4(9)
  035d5e0  addic 9, 9, 8
  035d5e4  stfs 4, 168(8)
  035d5e8  lfs 4, 4(10)
  035d5ec  addic 8, 8, 8
  035d5f0  fmuls 4, 4, 5
  035d5f4  stfs 4, 4(10)
  035d5f8  addic 10, 10, 8
  035d5fc  bdnz 0x35d5d0
  035d600  ori 8, 1, 0
  035d604  fmr 4, 31
  035d608  mtctr 11
  035d60c  lfs 5, 168(8)
  035d610  fadds 4, 4, 5
  035d614  lfs 5, 4(12)
  035d618  addic 8, 8, 16
  035d61c  lfs 6, 8(12)
  035d620  lfs 7, 12(12)
  035d624  addic 12, 12, 16
  035d628  fadds 4, 4, 5
  035d62c  fadds 4, 4, 6
  035d630  fadds 4, 4, 7
  035d634  bdnz 0x35d60c
  035d638  fadds 4, 4, 3
  035d63c  fmadds 1, 4, 1, 2
  035d640  lwzx 5, 5, 6
  035d644  stfs 1, 72(31)
  035d648  lfs 1, 20(5)
  035d64c  lfs 2, 36(5)
  035d650  lfs 4, 16(5)
  035d654  fsubs 1, 1, 2
  035d658  lfs 2, 32(5)
  035d65c  fsubs 2, 4, 2
  035d660  fmuls 1, 1, 1
  035d664  fmadds 1, 2, 2, 1
  035d668  lfs 2, 40(5)
  035d66c  lfs 4, 24(5)
  035d670  fsubs 2, 2, 4
  035d674  fsqrts 1, 1
  035d678  stfs 2, 116(1)
  035d67c  fabs 5, 2
  035d680  fabs 4, 1
  035d684  stfs 1, 112(1)
  035d688  lwz 5, 116(1)
  035d68c  rlwinm 5, 5, 3, 29, 29
  035d690  fsubs 1, 4, 5
  035d694  stfs 1, 120(1)
  035d698  lwz 6, 112(1)
  035d69c  lfs 1, 112(1)
  035d6a0  lfs 2, 116(1)
  035d6a4  lwz 8, 120(1)
  035d6a8  lfs 6, 120(1)
  035d6ac  fabs 1, 1
  035d6b0  rlwimi 5, 8, 2, 30, 30
  035d6b4  fsub 7, 6, 31
  035d6b8  fabs 2, 2
  035d6bc  fsub 6, 6, 31
  035d6c0  rlwimi 5, 6, 4, 28, 28
  035d6c4  ori 6, 7, 0
  035d6c8  rlwimi 6, 5, 2, 26, 28
  035d6cc  slwi 5, 5, 2
  035d6d0  clrldi 6, 6, 32
  035d6d4  fsel 5, 7, 1, 5
  035d6d8  lfsx 1, 7, 5
  035d6dc  fsel 4, 6, 2, 4
  035d6e0  lfs 2, 4(6)
  035d6e4  fcmpu 0, 5, 31
  035d6e8  bt 1, 0x35d6f0
  035d6ec  b 0x35d804
  035d6f0  fsubs 6, 4, 5
  035d6f4  fadds 4, 4, 5
  035d6f8  addic 5, 1, 16
  035d6fc  li 9, 2
  035d700  addic 7, 5, 136
  035d704  addic 6, 5, 120
  035d708  mtctr 9
  035d70c  fdivs 4, 6, 4
  035d710  fmuls 5, 4, 4
  035d714  stfs 4, 148(1)
  035d718  stfs 4, 140(1)
  035d71c  stfs 4, 144(1)
  035d720  stfs 4, 136(1)
  035d724  lfs 7, 148(1)
  035d728  lfs 8, 140(1)
  035d72c  lfs 9, 144(1)
  035d730  fmuls 6, 5, 5
  035d734  fmuls 8, 8, 5
  035d738  fmuls 7, 7, 6
  035d73c  fmuls 4, 6, 6
  035d740  fmuls 6, 9, 6
  035d744  stfs 8, 140(1)
  035d748  fmuls 5, 7, 5
  035d74c  stfs 6, 144(1)
  035d750  stfs 5, 148(1)
  035d754  lfs 5, 120(5)
  035d758  fmuls 5, 5, 4
  035d75c  stfs 5, 136(5)
  035d760  lfs 5, 4(6)
  035d764  addic 6, 6, 8
  035d768  fmuls 5, 5, 4
  035d76c  addic 5, 5, 8
  035d770  stfs 5, 4(7)
  035d774  addic 7, 7, 8
  035d778  bdnz 0x35d754
  035d77c  li 7, 4
  035d780  ori 5, 1, 0
  035d784  mtctr 7
  035d788  lis 6, 115
  035d78c  addic 7, 5, 136
  035d790  addic 6, 6, 22752
  035d794  ori 8, 7, 0
  035d798  lfs 4, 136(5)
  035d79c  lfs 5, 0(6)
  035d7a0  fmuls 4, 4, 5
  035d7a4  lfs 5, 4(6)
  035d7a8  addic 6, 6, 8
  035d7ac  stfs 4, 136(5)
  035d7b0  lfs 4, 4(7)
  035d7b4  addic 5, 5, 8
  035d7b8  fmuls 4, 4, 5
  035d7bc  stfs 4, 4(7)
  035d7c0  addic 7, 7, 8
  035d7c4  bdnz 0x35d798
  035d7c8  ori 5, 1, 0
  035d7cc  mtctr 9
  035d7d0  lfs 4, 136(5)
  035d7d4  lfs 5, 4(8)
  035d7d8  fadds 4, 31, 4
  035d7dc  lfs 6, 8(8)
  035d7e0  addic 5, 5, 16
  035d7e4  lfs 31, 12(8)
  035d7e8  addic 8, 8, 16
  035d7ec  fadds 4, 4, 5
  035d7f0  fadds 4, 4, 6
  035d7f4  fadds 31, 4, 31
  035d7f8  bdnz 0x35d7d0
  035d7fc  fadds 31, 31, 3
  035d800  fmadds 31, 31, 1, 2
  035d804  fneg 1, 31
  035d808  li 5, 1
  035d80c  lis 6, 164
  035d810  slwi 7, 3, 8
  035d814  li 29, 0
  035d818  stfs 1, 68(31)
  035d81c  stb 5, 268(30)
  035d820  lwz 3, -28512(6)
  035d824  addc 3, 3, 7
  035d828  clrldi 3, 3, 32
  035d82c  lhz 5, 52(3)
  035d830  ori 5, 5, 2
  035d834  sth 5, 52(3)
  035d838  lwz 3, -28512(6)
  035d83c  addc 3, 3, 7
  035d840  clrldi 5, 3, 32
  035d844  extsw 3, 4
  035d848  lhz 4, 52(5)
  035d84c  ori 4, 4, 1
  035d850  sth 4, 52(5)
  035d854  lwz 4, -28512(6)
  035d858  addc 4, 4, 7
  035d85c  clrldi 4, 4, 32
  035d860  stb 29, 49(4)
  035d864  bl 0x3fba8
  035d868  nop
  035d86c  lis 4, 54
  035d870  vspltisw 2, -1
  035d874  li 3, 7
  035d878  addi 6, 4, -11488
  035d87c  lis 4, 114
  035d880  li 7, 16
  035d884  stb 3, 32(31)
  035d888  lis 8, 114
  035d88c  li 9, -3056
  035d890  vslw 2, 2, 2
  035d894  lfs 1, 12(6)
  035d898  lfs 2, -3052(4)
  035d89c  fmuls 1, 2, 1
  035d8a0  li 10, 248
  035d8a4  ori 3, 31, 0
  035d8a8  ori 4, 30, 0
  035d8ac  li 5, 34
  035d8b0  stfs 1, 172(30)
  035d8b4  lvlx 3, 7, 6
  035d8b8  lvlx 4, 9, 8
  035d8bc  vspltw 3, 3, 0
  035d8c0  li 6, 1
  035d8c4  vmaddfp 2, 4, 3, 2
  035d8c8  vctsxs 2, 2, 0
  035d8cc  vspltw 2, 2, 0
  035d8d0  stvewx 2, 10, 30
  035d8d4  bl 0x35b790
  035d8d8  lwz 31, 260(30)
  035d8dc  sth 29, 312(30)
  035d8e0  cmpwi 31, -1
  035d8e4  stb 29, 328(30)
  035d8e8  bt 2, 0x35d904
  035d8ec  extsw 3, 31
  035d8f0  li 4, 0
  035d8f4  bl 0xc8b28
  035d8f8  nop
  035d8fc  li 3, -1
  035d900  stw 3, 260(30)
  035d904  li 3, -1
  035d908  stw 3, 316(30)
  035d90c  ld 0, 256(1)
  035d910  mtlr 0
  035d914  lfd 31, 232(1)
  035d918  ld 28, 200(1)
  035d91c  ld 29, 208(1)
  035d920  ld 30, 216(1)
  035d924  ld 31, 224(1)
  035d928  addi 1, 1, 240
  035d92c  blr

M388_0035d950:   # 0x35d950, 0x94c bytes
  035d950  stdu 1, -256(1)
  035d954  mflr 0
  035d958  std 0, 272(1)
  035d95c  stfd 29, 232(1)
  035d960  stfd 30, 240(1)
  035d964  stfd 31, 248(1)
  035d968  std 31, 224(1)
  035d96c  std 24, 168(1)
  035d970  ori 31, 3, 0
  035d974  lbz 3, 32(3)
  035d978  std 30, 216(1)
  035d97c  lis 24, 54
  035d980  ori 30, 4, 0
  035d984  cmpwi 3, 6
  035d988  std 29, 208(1)
  035d98c  std 28, 200(1)
  035d990  std 27, 192(1)
  035d994  std 26, 184(1)
  035d998  std 25, 176(1)
  035d99c  std 23, 160(1)
  035d9a0  std 22, 152(1)
  035d9a4  std 21, 144(1)
  035d9a8  addi 24, 24, -9936
  035d9ac  bf 0, 0x35e244
  035d9b0  lhz 3, 36(30)
  035d9b4  li 28, 0
  035d9b8  extsh 3, 3
  035d9bc  ori 22, 28, 0
  035d9c0  extsw 3, 3
  035d9c4  addic 29, 30, 32
  035d9c8  ori 27, 22, 0
  035d9cc  std 3, 120(1)
  035d9d0  lfs 31, 0(24)
  035d9d4  lbz 3, 188(31)
  035d9d8  lfd 1, 120(1)
  035d9dc  fcfid 1, 1
  035d9e0  frsp 1, 1
  035d9e4  fmuls 31, 1, 31
  035d9e8  bl 0x502730
  035d9ec  nop
  035d9f0  lfs 30, 4(24)
  035d9f4  lbz 3, 188(31)
  035d9f8  cmpwi 3, 4
  035d9fc  bf 1, 0x35da0c
  035da00  addic 3, 3, -1
  035da04  bl 0x502730
  035da08  nop
  035da0c  fsubs 29, 30, 1
  035da10  lfs 30, 8(24)
  035da14  lwz 26, 240(30)
  035da18  cmpwi 26, 0
  035da1c  fmuls 29, 29, 31
  035da20  fmadds 31, 31, 30, 29
  035da24  bt 2, 0x35dd4c
  035da28  ori 3, 26, 0
  035da2c  lis 4, 35
  035da30  li 5, 0
  035da34  bl 0x10675c
  035da38  nop
  035da3c  ori 26, 3, 0
  035da40  addic 7, 1, 112
  035da44  ori 4, 26, 0
  035da48  li 9, 0
  035da4c  ori 3, 31, 0
  035da50  li 10, 4
  035da54  ori 5, 29, 0
  035da58  li 6, 0
  035da5c  li 8, 0
  035da60  bl 0x106840
  035da64  nop
  035da68  lwz 4, 240(30)
  035da6c  cmpwi 26, 0
  035da70  lwz 5, 112(1)
  035da74  lbz 6, 188(31)
  035da78  lfs 1, 32(30)
  035da7c  bt 2, 0x35dab4
  035da80  lwz 3, 32(26)
  035da84  cmpwi 3, 0
  035da88  bt 2, 0x35dab4
  035da8c  lhz 3, 166(3)
  035da90  cmpwi 1, 3, 83
  035da94  cmpwi 3, 82
  035da98  cror 2, 2, 6
  035da9c  bt 2, 0x35daa8
  035daa0  cmpwi 3, 212
  035daa4  bf 2, 0x35dab4
  035daa8  li 3, 255
  035daac  stb 3, 164(4)
  035dab0  b 0x35dd4c
  035dab4  cmpwi 5, 1
  035dab8  bf 1, 0x35dd4c
  035dabc  lwz 3, 44(26)
  035dac0  lfs 2, 44(26)
  035dac4  cmpwi 3, 0
  035dac8  bf 1, 0x35dae8
  035dacc  lhz 3, 42(26)
  035dad0  cmpwi 3, 1009
  035dad4  bf 2, 0x35dae8
  035dad8  lis 3, 16025
  035dadc  fmr 2, 30
  035dae0  ori 3, 3, 39322
  035dae4  stw 3, 44(26)
  035dae8  cmpwi 26, 0
  035daec  fmr 3, 2
  035daf0  bt 2, 0x35db0c
  035daf4  cmpwi 6, 7
  035daf8  bf 2, 0x35db0c
  035dafc  lfs 3, 12(24)
  035db00  fmuls 3, 2, 3
  035db04  fmr 2, 3
  035db08  stfs 3, 44(26)
  035db0c  fcmpu 0, 1, 3
  035db10  bt 1, 0x35db3c
  035db14  ori 4, 30, 0
  035db18  ori 3, 31, 0
  035db1c  ori 5, 29, 0
  035db20  ori 6, 26, 0
  035db24  bl 0x35d338
  035db28  lwz 4, 240(30)
  035db2c  li 3, 255
  035db30  li 28, 3
  035db34  stb 3, 164(4)
  035db38  b 0x35dba0
  035db3c  fsubs 1, 1, 2
  035db40  li 3, 250
  035db44  li 4, 16
  035db48  vspltisw 2, -1
  035db4c  lis 5, 114
  035db50  li 6, -3056
  035db54  stb 3, 103(30)
  035db58  vslw 2, 2, 2
  035db5c  ori 3, 31, 0
  035db60  li 28, 1
  035db64  stfs 1, 32(30)
  035db68  lvlx 3, 4, 24
  035db6c  lvlx 4, 6, 5
  035db70  vspltw 3, 3, 0
  035db74  li 5, 38
  035db78  addic 4, 30, 96
  035db7c  vmaddfp 2, 4, 3, 2
  035db80  vctsxs 2, 2, 0
  035db84  vsplth 2, 2, 1
  035db88  stvehx 2, 5, 30
  035db8c  bl 0x10c808
  035db90  nop
  035db94  lwz 3, 240(30)
  035db98  li 4, 255
  035db9c  stb 4, 164(3)
  035dba0  lbz 3, 32(31)
  035dba4  cmpwi 3, 7
  035dba8  bf 2, 0x35dbe0
  035dbac  lis 3, 151
  035dbb0  lbz 4, 188(31)
  035dbb4  li 27, 1
  035dbb8  addic 3, 3, -25376
  035dbbc  addic 4, 4, 1
  035dbc0  stb 4, 188(31)
  035dbc4  lwz 3, 5616(3)
  035dbc8  lwz 3, 120(3)
  035dbcc  stw 22, 136(3)
  035dbd0  stw 22, 236(3)
  035dbd4  stw 22, 140(3)
  035dbd8  stw 22, 280(3)
  035dbdc  b 0x35dd4c
  035dbe0  lfs 1, 32(30)
  035dbe4  fcmpu 0, 1, 29
  035dbe8  fcmpu 1, 1, 31
  035dbec  cror 2, 1, 2
  035dbf0  bt 2, 0x35dd40
  035dbf4  lis 25, 132
  035dbf8  lbz 4, 188(31)
  035dbfc  addic 25, 25, 2320
  035dc00  slwi 5, 4, 2
  035dc04  addc 5, 25, 5
  035dc08  lwz 28, -4(5)
  035dc0c  extsw 28, 28
  035dc10  cmpwi 28, -1
  035dc14  bt 2, 0x35dc44
  035dc18  li 3, 7
  035dc1c  li 4, 0
  035dc20  ori 5, 31, 0
  035dc24  bl 0x15d12c
  035dc28  nop
  035dc2c  ori 3, 31, 0
  035dc30  ori 4, 30, 0
  035dc34  ori 5, 28, 0
  035dc38  bl 0x35d190
  035dc3c  lbz 3, 32(31)
  035dc40  lbz 4, 188(31)
  035dc44  cmpwi 3, 5
  035dc48  bf 2, 0x35dc54
  035dc4c  li 3, 4
  035dc50  stb 3, 32(31)
  035dc54  addic 3, 4, 1
  035dc58  stb 3, 188(31)
  035dc5c  lwz 4, 284(30)
  035dc60  cmpwi 1, 4, -1
  035dc64  bt 6, 0x35dcb4
  035dc68  bt 6, 0x35dcac
  035dc6c  sldi 3, 4, 7
  035dc70  sldi 6, 4, 4
  035dc74  lis 5, 150
  035dc78  subc 3, 3, 6
  035dc7c  addic 5, 5, 14176
  035dc80  extsw 3, 3
  035dc84  addc 3, 5, 3
  035dc88  lwz 5, 136(3)
  035dc8c  cmpw 5, 31
  035dc90  bf 2, 0x35dcac
  035dc94  lbz 3, 116(3)
  035dc98  cmpwi 3, 0
  035dc9c  bt 2, 0x35dcac
  035dca0  extsw 3, 4
  035dca4  bl 0x15cdb0
  035dca8  nop
  035dcac  li 3, -1
  035dcb0  stw 3, 284(30)
  035dcb4  lis 3, 151
  035dcb8  li 28, 2
  035dcbc  addic 3, 3, -25376
  035dcc0  li 27, 1
  035dcc4  lwz 3, 5616(3)
  035dcc8  lwz 3, 120(3)
  035dccc  stw 22, 136(3)
  035dcd0  stw 22, 236(3)
  035dcd4  stw 22, 140(3)
  035dcd8  stw 22, 280(3)
  035dcdc  sth 22, 312(30)
  035dce0  stb 22, 328(30)
  035dce4  lbz 26, 188(31)
  035dce8  cmpwi 26, 7
  035dcec  bf 2, 0x35dd4c
  035dcf0  addic 26, 26, -1
  035dcf4  cmpwi 26, 10
  035dcf8  bf 0, 0x35dd28
  035dcfc  sldi 3, 26, 2
  035dd00  addc 25, 3, 25
  035dd04  lwz 5, 0(25)
  035dd08  ori 3, 31, 0
  035dd0c  ori 4, 30, 0
  035dd10  extsw 5, 5
  035dd14  bl 0x35d190
  035dd18  addic 26, 26, 1
  035dd1c  addic 25, 25, 4
  035dd20  cmpwi 26, 10
  035dd24  bt 0, 0x35dd04
  035dd28  li 3, 7
  035dd2c  li 4, 0
  035dd30  ori 5, 31, 0
  035dd34  bl 0x15d12c
  035dd38  nop
  035dd3c  b 0x35dd4c
  035dd40  bf 4, 0x35dd4c
  035dd44  li 3, 1
  035dd48  stb 3, 328(30)
  035dd4c  ori 26, 22, 0
  035dd50  ori 21, 30, 0
  035dd54  cmpwi 28, 0
  035dd58  bf 2, 0x35e0c4
  035dd5c  lwz 25, 196(21)
  035dd60  cmpwi 25, 0
  035dd64  bt 2, 0x35e0b4
  035dd68  ori 3, 25, 0
  035dd6c  lis 4, 35
  035dd70  li 5, 0
  035dd74  bl 0x10675c
  035dd78  nop
  035dd7c  ori 25, 3, 0
  035dd80  li 6, 0
  035dd84  ori 4, 25, 0
  035dd88  addic 7, 1, 112
  035dd8c  li 9, 0
  035dd90  ori 3, 31, 0
  035dd94  li 10, 4
  035dd98  ori 5, 29, 0
  035dd9c  li 8, 0
  035dda0  bl 0x106840
  035dda4  nop
  035dda8  lwz 4, 112(1)
  035ddac  cmpwi 25, 0
  035ddb0  lbz 5, 188(31)
  035ddb4  lfs 1, 32(30)
  035ddb8  bt 2, 0x35ddf4
  035ddbc  lwz 3, 32(25)
  035ddc0  cmpwi 3, 0
  035ddc4  bt 2, 0x35ddf4
  035ddc8  lhz 3, 166(3)
  035ddcc  cmpwi 1, 3, 83
  035ddd0  cmpwi 3, 82
  035ddd4  cror 2, 2, 6
  035ddd8  bt 2, 0x35dde4
  035dddc  cmpwi 3, 212
  035dde0  bf 2, 0x35ddf4
  035dde4  lwz 4, 196(21)
  035dde8  li 3, 255
  035ddec  stb 3, 164(4)
  035ddf0  b 0x35e0b4
  035ddf4  cmpwi 4, 1
  035ddf8  bf 1, 0x35e0b4
  035ddfc  lwz 3, 44(25)
  035de00  lfs 3, 44(25)
  035de04  cmpwi 3, 0
  035de08  bf 1, 0x35de4c
  035de0c  lhz 3, 42(25)
  035de10  cmpwi 3, 295
  035de14  cmpwi 1, 3, 294
  035de18  cmpwi 6, 3, 1009
  035de1c  bt 1, 0x35de28
  035de20  bf 5, 0x35de4c
  035de24  b 0x35de40
  035de28  bf 26, 0x35de4c
  035de2c  lis 3, 15820
  035de30  ori 3, 3, 52429
  035de34  stw 3, 44(25)
  035de38  lfs 3, 20(24)
  035de3c  b 0x35de4c
  035de40  lfs 2, 16(24)
  035de44  fmuls 3, 3, 2
  035de48  stfs 3, 44(25)
  035de4c  cmpwi 25, 0
  035de50  fmr 2, 3
  035de54  bt 2, 0x35de70
  035de58  cmpwi 5, 7
  035de5c  bf 2, 0x35de70
  035de60  lfs 2, 12(24)
  035de64  fmuls 2, 3, 2
  035de68  fmr 3, 2
  035de6c  stfs 2, 44(25)
  035de70  fcmpu 0, 1, 2
  035de74  bt 1, 0x35dea0
  035de78  ori 4, 30, 0
  035de7c  ori 3, 31, 0
  035de80  ori 5, 29, 0
  035de84  ori 6, 25, 0
  035de88  bl 0x35d338
  035de8c  lwz 4, 196(21)
  035de90  li 3, 255
  035de94  li 28, 3
  035de98  stb 3, 164(4)
  035de9c  b 0x35df04
  035dea0  fsubs 1, 1, 3
  035dea4  li 3, 250
  035dea8  li 4, 16
  035deac  vspltisw 2, -1
  035deb0  lis 5, 114
  035deb4  li 6, -3056
  035deb8  stb 3, 103(30)
  035debc  vslw 2, 2, 2
  035dec0  ori 3, 31, 0
  035dec4  li 28, 1
  035dec8  stfs 1, 32(30)
  035decc  lvlx 3, 4, 24
  035ded0  lvlx 4, 6, 5
  035ded4  vspltw 3, 3, 0
  035ded8  li 5, 38
  035dedc  addic 4, 30, 96
  035dee0  vmaddfp 2, 4, 3, 2
  035dee4  vctsxs 2, 2, 0
  035dee8  vsplth 2, 2, 1
  035deec  stvehx 2, 5, 30
  035def0  bl 0x10c808
  035def4  nop
  035def8  lwz 3, 196(21)
  035defc  li 4, 255
  035df00  stb 4, 164(3)
  035df04  lbz 3, 32(31)
  035df08  cmpwi 3, 7
  035df0c  bf 2, 0x35df44
  035df10  lis 3, 151
  035df14  lbz 4, 188(31)
  035df18  li 27, 1
  035df1c  addic 3, 3, -25376
  035df20  addic 4, 4, 1
  035df24  stb 4, 188(31)
  035df28  lwz 3, 5616(3)
  035df2c  lwz 3, 120(3)
  035df30  stw 22, 136(3)
  035df34  stw 22, 236(3)
  035df38  stw 22, 140(3)
  035df3c  stw 22, 280(3)
  035df40  b 0x35e0b4
  035df44  lfs 1, 32(30)
  035df48  fcmpu 0, 1, 29
  035df4c  fcmpu 1, 1, 31
  035df50  cror 2, 1, 2
  035df54  bt 2, 0x35e0a8
  035df58  lis 23, 132
  035df5c  lbz 3, 188(31)
  035df60  addic 23, 23, 2320
  035df64  slwi 3, 3, 2
  035df68  addc 3, 23, 3
  035df6c  lwz 3, -4(3)
  035df70  extsw 3, 3
  035df74  cmpwi 3, -1
  035df78  bt 2, 0x35df8c
  035df7c  ori 5, 3, 0
  035df80  ori 3, 31, 0
  035df84  ori 4, 30, 0
  035df88  bl 0x35d190
  035df8c  li 4, 0
  035df90  li 3, 7
  035df94  ori 5, 31, 0
  035df98  bl 0x15d12c
  035df9c  nop
  035dfa0  lbz 4, 32(31)
  035dfa4  lbz 3, 188(31)
  035dfa8  cmpwi 4, 5
  035dfac  lwz 4, 284(30)
  035dfb0  bf 2, 0x35dfbc
  035dfb4  li 5, 4
  035dfb8  stb 5, 32(31)
  035dfbc  addic 3, 3, 1
  035dfc0  cmpwi 4, -1
  035dfc4  stb 3, 188(31)
  035dfc8  bt 2, 0x35e01c
  035dfcc  cmpwi 4, -1
  035dfd0  bt 2, 0x35e014
  035dfd4  sldi 3, 4, 7
  035dfd8  sldi 6, 4, 4
  035dfdc  lis 5, 150
  035dfe0  subc 3, 3, 6
  035dfe4  addic 5, 5, 14176
  035dfe8  extsw 3, 3
  035dfec  addc 3, 5, 3
  035dff0  lwz 5, 136(3)
  035dff4  cmpw 5, 31
  035dff8  bf 2, 0x35e014
  035dffc  lbz 3, 116(3)
  035e000  cmpwi 3, 0
  035e004  bt 2, 0x35e014
  035e008  extsw 3, 4
  035e00c  bl 0x15cdb0
  035e010  nop
  035e014  li 3, -1
  035e018  stw 3, 284(30)
  035e01c  lis 3, 151
  035e020  li 27, 1
  035e024  addic 3, 3, -25376
  035e028  li 28, 2
  035e02c  lwz 3, 5616(3)
  035e030  lwz 3, 120(3)
  035e034  stw 22, 136(3)
  035e038  stw 22, 236(3)
  035e03c  stw 22, 140(3)
  035e040  stw 22, 280(3)
  035e044  sth 22, 312(30)
  035e048  stb 22, 328(30)
  035e04c  lbz 25, 188(31)
  035e050  cmpwi 25, 7
  035e054  bf 2, 0x35e0b4
  035e058  addic 25, 25, -1
  035e05c  cmpwi 25, 10
  035e060  bf 0, 0x35e090
  035e064  sldi 3, 25, 2
  035e068  addc 23, 3, 23
  035e06c  lwz 5, 0(23)
  035e070  ori 3, 31, 0
  035e074  ori 4, 30, 0
  035e078  extsw 5, 5
  035e07c  bl 0x35d190
  035e080  addic 25, 25, 1
  035e084  addic 23, 23, 4
  035e088  cmpwi 25, 10
  035e08c  bt 0, 0x35e06c
  035e090  li 3, 7
  035e094  li 4, 0
  035e098  ori 5, 31, 0
  035e09c  bl 0x15d12c
  035e0a0  nop
  035e0a4  b 0x35e0b4
  035e0a8  bf 4, 0x35e0b4
  035e0ac  li 3, 1
  035e0b0  stb 3, 328(30)
  035e0b4  addic 26, 26, 1
  035e0b8  addic 21, 21, 4
  035e0bc  cmpwi 26, 10
  035e0c0  bf 1, 0x35dd54
  035e0c4  cmpwi 28, 0
  035e0c8  cmpwi 1, 27, 0
  035e0cc  bf 1, 0x35e244
  035e0d0  bt 6, 0x35e1bc
  035e0d4  lbz 3, 188(31)
  035e0d8  cmpwi 3, 8
  035e0dc  cmpwi 1, 3, 7
  035e0e0  cmpwi 6, 3, 6
  035e0e4  cmpwi 7, 3, 5
  035e0e8  bt 2, 0x35e244
  035e0ec  bt 6, 0x35e1a4
  035e0f0  bt 26, 0x35e18c
  035e0f4  bt 30, 0x35e244
  035e0f8  cmpwi 3, 4
  035e0fc  bt 2, 0x35e174
  035e100  cmpwi 3, 3
  035e104  bt 2, 0x35e128
  035e108  cmpwi 3, 2
  035e10c  bf 2, 0x35e244
  035e110  ori 3, 31, 0
  035e114  ori 4, 30, 0
  035e118  li 5, 12
  035e11c  li 6, 4
  035e120  bl 0x35b790
  035e124  b 0x35e244
  035e128  li 3, 24
  035e12c  vspltisw 2, -1
  035e130  lis 4, 114
  035e134  li 5, -3056
  035e138  li 7, 256
  035e13c  lvlx 3, 3, 24
  035e140  vslw 2, 2, 2
  035e144  vspltw 3, 3, 0
  035e148  lvlx 4, 5, 4
  035e14c  ori 3, 31, 0
  035e150  vmaddfp 2, 4, 3, 2
  035e154  ori 4, 30, 0
  035e158  li 5, 16
  035e15c  li 6, 1
  035e160  vctsxs 2, 2, 0
  035e164  vspltw 2, 2, 0
  035e168  stvewx 2, 7, 30
  035e16c  bl 0x35b790
  035e170  b 0x35e244
  035e174  ori 3, 31, 0
  035e178  ori 4, 30, 0
  035e17c  li 5, 17
  035e180  li 6, 1
  035e184  bl 0x35b790
  035e188  b 0x35e244
  035e18c  ori 3, 31, 0
  035e190  ori 4, 30, 0
  035e194  li 5, 19
  035e198  li 6, 1
  035e19c  bl 0x35b790
  035e1a0  b 0x35e244
  035e1a4  ori 3, 31, 0
  035e1a8  ori 4, 30, 0
  035e1ac  li 5, 22
  035e1b0  li 6, 1
  035e1b4  bl 0x35b790
  035e1b8  b 0x35e244
  035e1bc  lbz 3, 188(31)
  035e1c0  cmpwi 3, 7
  035e1c4  bf 2, 0x35e244
  035e1c8  lbz 3, 328(30)
  035e1cc  cmpwi 3, 0
  035e1d0  bt 2, 0x35e244
  035e1d4  lhz 3, 312(30)
  035e1d8  clrlwi 4, 3, 31
  035e1dc  cmpwi 4, 0
  035e1e0  bf 2, 0x35e210
  035e1e4  ori 3, 31, 0
  035e1e8  ori 4, 30, 0
  035e1ec  li 5, 20
  035e1f0  li 6, 2
  035e1f4  bl 0x35b790
  035e1f8  ori 4, 3, 0
  035e1fc  lhz 3, 312(30)
  035e200  cmpwi 4, 0
  035e204  bt 2, 0x35e210
  035e208  ori 3, 3, 1
  035e20c  sth 3, 312(30)
  035e210  rlwinm 3, 3, 0, 30, 30
  035e214  cmpwi 3, 0
  035e218  bf 2, 0x35e244
  035e21c  ori 3, 31, 0
  035e220  ori 4, 30, 0
  035e224  li 5, 20
  035e228  li 6, 2
  035e22c  bl 0x35b790
  035e230  cmpwi 3, 0
  035e234  bt 2, 0x35e244
  035e238  lhz 3, 312(30)
  035e23c  ori 3, 3, 2
  035e240  sth 3, 312(30)
  035e244  addic 4, 30, 96
  035e248  ori 3, 31, 0
  035e24c  bl 0x10c9a0
  035e250  nop
  035e254  ld 0, 272(1)
  035e258  mtlr 0
  035e25c  lfd 29, 232(1)
  035e260  lfd 30, 240(1)
  035e264  lfd 31, 248(1)
  035e268  ld 21, 144(1)
  035e26c  ld 22, 152(1)
  035e270  ld 23, 160(1)
  035e274  ld 24, 168(1)
  035e278  ld 25, 176(1)
  035e27c  ld 26, 184(1)
  035e280  ld 27, 192(1)
  035e284  ld 28, 200(1)
  035e288  ld 29, 208(1)
  035e28c  ld 30, 216(1)
  035e290  ld 31, 224(1)
  035e294  addi 1, 1, 256
  035e298  blr

M388_0035e29c:   # 0x35e29c, 0x120 bytes
  035e29c  stdu 1, -160(1)
  035e2a0  mflr 0
  035e2a4  std 0, 176(1)
  035e2a8  stfd 30, 144(1)
  035e2ac  stfd 31, 152(1)
  035e2b0  std 29, 120(1)
  035e2b4  lis 5, 151
  035e2b8  ori 29, 3, 0
  035e2bc  std 31, 136(1)
  035e2c0  fmr 31, 1
  035e2c4  std 30, 128(1)
  035e2c8  addic 31, 5, -25376
  035e2cc  ori 30, 4, 0
  035e2d0  std 28, 112(1)
  035e2d4  lwz 3, 5616(31)
  035e2d8  lwz 28, 120(3)
  035e2dc  lfs 1, 72(3)
  035e2e0  lfs 2, 144(28)
  035e2e4  bl 0x502578
  035e2e8  nop
  035e2ec  lwz 3, 5616(31)
  035e2f0  fmr 30, 1
  035e2f4  lfs 2, 148(28)
  035e2f8  lfs 1, 68(3)
  035e2fc  bl 0x502578
  035e300  nop
  035e304  lwz 3, 5616(31)
  035e308  lfs 2, 4(30)
  035e30c  lfs 3, 0(30)
  035e310  lfs 4, 20(3)
  035e314  lfs 5, 16(3)
  035e318  fsubs 2, 2, 4
  035e31c  fsubs 3, 3, 5
  035e320  lfs 4, 8(30)
  035e324  lfs 5, 24(3)
  035e328  fsubs 4, 4, 5
  035e32c  fmuls 2, 2, 2
  035e330  ori 3, 29, 0
  035e334  fmadds 2, 3, 3, 2
  035e338  fneg 3, 1
  035e33c  fmadds 2, 4, 4, 2
  035e340  lfs 4, 100(28)
  035e344  fadds 6, 4, 31
  035e348  fsqrts 5, 2
  035e34c  fmr 2, 30
  035e350  fdivs 1, 5, 6
  035e354  fmuls 1, 1, 4
  035e358  bl 0xfe610
  035e35c  nop
  035e360  lwz 3, 5616(31)
  035e364  lfs 1, 0(29)
  035e368  lfs 2, 4(29)
  035e36c  lfs 3, 8(29)
  035e370  lfs 4, 16(3)
  035e374  lfs 5, 20(3)
  035e378  fadds 1, 1, 4
  035e37c  lfs 4, 24(3)
  035e380  fadds 2, 2, 5
  035e384  fadds 3, 3, 4
  035e388  stfs 1, 0(29)
  035e38c  stfs 2, 4(29)
  035e390  stfs 3, 8(29)
  035e394  ld 0, 176(1)
  035e398  mtlr 0
  035e39c  lfd 30, 144(1)
  035e3a0  lfd 31, 152(1)
  035e3a4  ld 28, 112(1)
  035e3a8  ld 29, 120(1)
  035e3ac  ld 30, 128(1)
  035e3b0  ld 31, 136(1)
  035e3b4  addi 1, 1, 160
  035e3b8  blr

M388_0035e3c8:   # 0x35e3c8, 0x7dc bytes
  035e3c8  stdu 1, -336(1)
  035e3cc  mflr 0
  035e3d0  std 0, 352(1)
  035e3d4  stfd 31, 328(1)
  035e3d8  std 31, 320(1)
  035e3dc  lis 4, 151
  035e3e0  ori 31, 3, 0
  035e3e4  fmr 4, 1
  035e3e8  std 30, 312(1)
  035e3ec  addic 4, 4, -25376
  035e3f0  std 29, 304(1)
  035e3f4  ori 30, 5, 0
  035e3f8  ori 29, 6, 0
  035e3fc  lwz 3, 5616(4)
  035e400  lfs 1, 128(4)
  035e404  cmpwi 3, 0
  035e408  lfs 2, 132(4)
  035e40c  lfs 3, 136(4)
  035e410  bt 2, 0x35e7ec
  035e414  lhz 4, 166(3)
  035e418  cmpwi 4, 69
  035e41c  bf 2, 0x35e7ec
  035e420  lis 4, 54
  035e424  addi 4, 4, -7236
  035e428  lfs 31, 0(4)
  035e42c  fcmpu 0, 4, 31
  035e430  cror 6, 0, 2
  035e434  bt 6, 0x35e458
  035e438  fmr 1, 4
  035e43c  addic 3, 1, 112
  035e440  ori 4, 31, 0
  035e444  bl 0x35e29c
  035e448  lfs 5, 112(1)
  035e44c  lfs 6, 116(1)
  035e450  lfs 4, 120(1)
  035e454  b 0x35e478
  035e458  lfs 5, 16(3)
  035e45c  stfs 5, 112(1)
  035e460  lfs 6, 20(3)
  035e464  stfs 6, 116(1)
  035e468  lfs 4, 24(3)
  035e46c  stfs 4, 120(1)
  035e470  lfs 1, 28(3)
  035e474  stfs 1, 124(1)
  035e478  lfs 2, 0(31)
  035e47c  lfs 3, 4(31)
  035e480  fsubs 1, 5, 2
  035e484  fsubs 7, 6, 3
  035e488  lis 3, 115
  035e48c  addic 3, 3, 22784
  035e490  fabs 8, 1
  035e494  fabs 9, 7
  035e498  stfs 1, 164(1)
  035e49c  stfs 7, 168(1)
  035e4a0  fsubs 1, 8, 9
  035e4a4  stfs 1, 172(1)
  035e4a8  lwz 4, 164(1)
  035e4ac  lfs 1, 164(1)
  035e4b0  lwz 5, 168(1)
  035e4b4  lfs 7, 168(1)
  035e4b8  fabs 1, 1
  035e4bc  lwz 6, 172(1)
  035e4c0  rlwinm 5, 5, 3, 29, 29
  035e4c4  lfs 10, 172(1)
  035e4c8  fabs 7, 7
  035e4cc  rlwimi 5, 6, 2, 30, 30
  035e4d0  fsub 11, 10, 31
  035e4d4  fsub 10, 10, 31
  035e4d8  rlwimi 5, 4, 4, 28, 28
  035e4dc  ori 4, 3, 0
  035e4e0  rlwimi 4, 5, 2, 26, 28
  035e4e4  slwi 5, 5, 2
  035e4e8  clrldi 4, 4, 32
  035e4ec  fsel 9, 11, 1, 9
  035e4f0  lfsx 1, 3, 5
  035e4f4  fsel 8, 10, 7, 8
  035e4f8  lfs 7, 4(4)
  035e4fc  fcmpu 0, 9, 31
  035e500  bt 1, 0x35e50c
  035e504  fmr 1, 31
  035e508  b 0x35e630
  035e50c  fsubs 10, 8, 9
  035e510  fadds 8, 8, 9
  035e514  addic 4, 1, 16
  035e518  li 7, 2
  035e51c  addic 5, 4, 256
  035e520  addic 6, 4, 272
  035e524  mtctr 7
  035e528  fdivs 8, 10, 8
  035e52c  fmuls 9, 8, 8
  035e530  stfs 8, 284(1)
  035e534  stfs 8, 276(1)
  035e538  stfs 8, 280(1)
  035e53c  stfs 8, 272(1)
  035e540  lfs 11, 284(1)
  035e544  lfs 12, 276(1)
  035e548  lfs 13, 280(1)
  035e54c  fmuls 10, 9, 9
  035e550  fmuls 12, 12, 9
  035e554  fmuls 11, 11, 10
  035e558  fmuls 8, 10, 10
  035e55c  fmuls 10, 13, 10
  035e560  stfs 12, 276(1)
  035e564  fmuls 9, 11, 9
  035e568  stfs 10, 280(1)
  035e56c  stfs 9, 284(1)
  035e570  lfs 9, 256(4)
  035e574  fmuls 9, 9, 8
  035e578  stfs 9, 272(4)
  035e57c  lfs 9, 4(5)
  035e580  addic 4, 4, 8
  035e584  addic 5, 5, 8
  035e588  fmuls 9, 9, 8
  035e58c  stfs 9, 4(6)
  035e590  addic 6, 6, 8
  035e594  bdnz 0x35e570
  035e598  li 6, 4
  035e59c  ori 4, 1, 0
  035e5a0  mtctr 6
  035e5a4  lis 5, 115
  035e5a8  addic 6, 4, 272
  035e5ac  addic 5, 5, 22752
  035e5b0  ori 8, 6, 0
  035e5b4  lfs 8, 272(4)
  035e5b8  lfs 9, 0(5)
  035e5bc  fmuls 8, 8, 9
  035e5c0  lfs 9, 4(5)
  035e5c4  addic 5, 5, 8
  035e5c8  stfs 8, 272(4)
  035e5cc  lfs 8, 4(6)
  035e5d0  addic 4, 4, 8
  035e5d4  fmuls 8, 8, 9
  035e5d8  stfs 8, 4(6)
  035e5dc  addic 6, 6, 8
  035e5e0  bdnz 0x35e5b4
  035e5e4  fmr 8, 31
  035e5e8  ori 4, 1, 0
  035e5ec  mtctr 7
  035e5f0  lfs 9, 272(4)
  035e5f4  fadds 8, 8, 9
  035e5f8  addic 4, 4, 16
  035e5fc  lfs 9, 4(8)
  035e600  lfs 10, 8(8)
  035e604  lfs 11, 12(8)
  035e608  addic 8, 8, 16
  035e60c  fadds 8, 8, 9
  035e610  fadds 8, 8, 10
  035e614  fadds 8, 8, 11
  035e618  bdnz 0x35e5f0
  035e61c  lis 4, 54
  035e620  addi 4, 4, -7236
  035e624  lfs 9, 4(4)
  035e628  fadds 8, 8, 9
  035e62c  fmadds 1, 8, 1, 7
  035e630  fsubs 3, 3, 6
  035e634  fsubs 2, 2, 5
  035e638  fmuls 3, 3, 3
  035e63c  fmadds 2, 2, 2, 3
  035e640  lfs 3, 8(31)
  035e644  fsubs 3, 4, 3
  035e648  fsqrts 2, 2
  035e64c  stfs 3, 156(1)
  035e650  fabs 5, 3
  035e654  fabs 4, 2
  035e658  stfs 2, 152(1)
  035e65c  lwz 4, 156(1)
  035e660  rlwinm 4, 4, 3, 29, 29
  035e664  fsubs 2, 4, 5
  035e668  stfs 2, 160(1)
  035e66c  lwz 5, 152(1)
  035e670  lfs 2, 152(1)
  035e674  lfs 3, 156(1)
  035e678  lwz 6, 160(1)
  035e67c  lfs 6, 160(1)
  035e680  fabs 2, 2
  035e684  rlwimi 4, 6, 2, 30, 30
  035e688  fabs 3, 3
  035e68c  fsub 7, 6, 31
  035e690  fsub 6, 6, 31
  035e694  rlwimi 4, 5, 4, 28, 28
  035e698  ori 5, 3, 0
  035e69c  rlwimi 5, 4, 2, 26, 28
  035e6a0  slwi 4, 4, 2
  035e6a4  clrldi 5, 5, 32
  035e6a8  fsel 5, 7, 2, 5
  035e6ac  lfsx 2, 3, 4
  035e6b0  fsel 4, 6, 3, 4
  035e6b4  lfs 3, 4(5)
  035e6b8  fcmpu 0, 5, 31
  035e6bc  bt 1, 0x35e6c4
  035e6c0  b 0x35e7e4
  035e6c4  fsubs 6, 4, 5
  035e6c8  fadds 4, 4, 5
  035e6cc  addic 3, 1, 16
  035e6d0  li 7, 2
  035e6d4  addic 4, 3, 224
  035e6d8  addic 5, 3, 240
  035e6dc  mtctr 7
  035e6e0  fdivs 4, 6, 4
  035e6e4  fmuls 5, 4, 4
  035e6e8  stfs 4, 252(1)
  035e6ec  stfs 4, 244(1)
  035e6f0  stfs 4, 248(1)
  035e6f4  stfs 4, 240(1)
  035e6f8  lfs 7, 252(1)
  035e6fc  lfs 8, 244(1)
  035e700  lfs 9, 248(1)
  035e704  fmuls 6, 5, 5
  035e708  fmuls 8, 8, 5
  035e70c  fmuls 7, 7, 6
  035e710  fmuls 4, 6, 6
  035e714  fmuls 6, 9, 6
  035e718  stfs 8, 244(1)
  035e71c  fmuls 5, 7, 5
  035e720  stfs 6, 248(1)
  035e724  stfs 5, 252(1)
  035e728  lfs 5, 224(3)
  035e72c  fmuls 5, 5, 4
  035e730  stfs 5, 240(3)
  035e734  lfs 5, 4(4)
  035e738  addic 3, 3, 8
  035e73c  addic 4, 4, 8
  035e740  fmuls 5, 5, 4
  035e744  stfs 5, 4(5)
  035e748  addic 5, 5, 8
  035e74c  bdnz 0x35e728
  035e750  li 5, 4
  035e754  ori 3, 1, 0
  035e758  mtctr 5
  035e75c  lis 4, 115
  035e760  addic 5, 3, 240
  035e764  addic 4, 4, 22752
  035e768  ori 6, 5, 0
  035e76c  lfs 4, 240(3)
  035e770  lfs 5, 0(4)
  035e774  fmuls 4, 4, 5
  035e778  lfs 5, 4(4)
  035e77c  addic 4, 4, 8
  035e780  stfs 4, 240(3)
  035e784  lfs 4, 4(5)
  035e788  addic 3, 3, 8
  035e78c  fmuls 4, 4, 5
  035e790  stfs 4, 4(5)
  035e794  addic 5, 5, 8
  035e798  bdnz 0x35e76c
  035e79c  ori 3, 1, 0
  035e7a0  mtctr 7
  035e7a4  lfs 4, 240(3)
  035e7a8  lfs 5, 4(6)
  035e7ac  fadds 4, 31, 4
  035e7b0  lfs 6, 8(6)
  035e7b4  lfs 31, 12(6)
  035e7b8  addic 3, 3, 16
  035e7bc  addic 6, 6, 16
  035e7c0  fadds 4, 4, 5
  035e7c4  fadds 4, 4, 6
  035e7c8  fadds 31, 4, 31
  035e7cc  bdnz 0x35e7a4
  035e7d0  lis 3, 54
  035e7d4  addi 3, 3, -7236
  035e7d8  lfs 4, 4(3)
  035e7dc  fadds 31, 31, 4
  035e7e0  fmadds 31, 31, 2, 3
  035e7e4  fmr 7, 31
  035e7e8  b 0x35eb68
  035e7ec  lfs 5, 0(31)
  035e7f0  lis 3, 54
  035e7f4  lfs 6, 4(31)
  035e7f8  fsubs 4, 1, 5
  035e7fc  fsubs 7, 2, 6
  035e800  addi 4, 3, -7236
  035e804  lis 3, 115
  035e808  addic 3, 3, 22784
  035e80c  fabs 9, 4
  035e810  fabs 10, 7
  035e814  stfs 4, 140(1)
  035e818  stfs 7, 144(1)
  035e81c  fsubs 4, 9, 10
  035e820  stfs 4, 148(1)
  035e824  lwz 5, 140(1)
  035e828  lfs 7, 0(4)
  035e82c  lfs 4, 140(1)
  035e830  lwz 4, 144(1)
  035e834  lfs 8, 144(1)
  035e838  fabs 4, 4
  035e83c  lwz 6, 148(1)
  035e840  rlwinm 4, 4, 3, 29, 29
  035e844  fabs 11, 8
  035e848  lfs 8, 148(1)
  035e84c  rlwimi 4, 6, 2, 30, 30
  035e850  fsub 12, 8, 7
  035e854  rlwimi 4, 5, 4, 28, 28
  035e858  fsub 13, 8, 7
  035e85c  ori 5, 3, 0
  035e860  rlwimi 5, 4, 2, 26, 28
  035e864  slwi 4, 4, 2
  035e868  clrldi 5, 5, 32
  035e86c  fsel 10, 12, 4, 10
  035e870  lfsx 4, 3, 4
  035e874  lfs 8, 4(5)
  035e878  fsel 9, 13, 11, 9
  035e87c  fcmpu 0, 10, 7
  035e880  bt 1, 0x35e88c
  035e884  fmr 4, 7
  035e888  b 0x35e9b0
  035e88c  fsubs 11, 9, 10
  035e890  fadds 9, 9, 10
  035e894  addic 4, 1, 16
  035e898  li 7, 2
  035e89c  addic 5, 4, 192
  035e8a0  addic 6, 4, 208
  035e8a4  mtctr 7
  035e8a8  fdivs 9, 11, 9
  035e8ac  fmuls 10, 9, 9
  035e8b0  stfs 9, 220(1)
  035e8b4  stfs 9, 212(1)
  035e8b8  stfs 9, 216(1)
  035e8bc  stfs 9, 208(1)
  035e8c0  lfs 12, 220(1)
  035e8c4  lfs 13, 212(1)
  035e8c8  lfs 0, 216(1)
  035e8cc  fmuls 11, 10, 10
  035e8d0  fmuls 13, 13, 10
  035e8d4  fmuls 12, 12, 11
  035e8d8  fmuls 9, 11, 11
  035e8dc  fmuls 11, 0, 11
  035e8e0  stfs 13, 212(1)
  035e8e4  fmuls 10, 12, 10
  035e8e8  stfs 11, 216(1)
  035e8ec  stfs 10, 220(1)
  035e8f0  lfs 10, 192(4)
  035e8f4  fmuls 10, 10, 9
  035e8f8  stfs 10, 208(4)
  035e8fc  lfs 10, 4(5)
  035e900  addic 4, 4, 8
  035e904  addic 5, 5, 8
  035e908  fmuls 10, 10, 9
  035e90c  stfs 10, 4(6)
  035e910  addic 6, 6, 8
  035e914  bdnz 0x35e8f0
  035e918  li 6, 4
  035e91c  ori 4, 1, 0
  035e920  mtctr 6
  035e924  lis 5, 115
  035e928  addic 6, 4, 208
  035e92c  addic 5, 5, 22752
  035e930  ori 8, 6, 0
  035e934  lfs 9, 208(4)
  035e938  lfs 10, 0(5)
  035e93c  fmuls 9, 9, 10
  035e940  lfs 10, 4(5)
  035e944  addic 5, 5, 8
  035e948  stfs 9, 208(4)
  035e94c  lfs 9, 4(6)
  035e950  addic 4, 4, 8
  035e954  fmuls 9, 9, 10
  035e958  stfs 9, 4(6)
  035e95c  addic 6, 6, 8
  035e960  bdnz 0x35e934
  035e964  fmr 9, 7
  035e968  ori 4, 1, 0
  035e96c  mtctr 7
  035e970  lfs 10, 208(4)
  035e974  fadds 9, 9, 10
  035e978  addic 4, 4, 16
  035e97c  lfs 10, 4(8)
  035e980  lfs 11, 8(8)
  035e984  lfs 12, 12(8)
  035e988  addic 8, 8, 16
  035e98c  fadds 9, 9, 10
  035e990  fadds 9, 9, 11
  035e994  fadds 9, 9, 12
  035e998  bdnz 0x35e970
  035e99c  lis 4, 54
  035e9a0  addi 4, 4, -7236
  035e9a4  lfs 10, 4(4)
  035e9a8  fadds 9, 9, 10
  035e9ac  fmadds 4, 9, 4, 8
  035e9b0  fsubs 2, 6, 2
  035e9b4  fsubs 1, 5, 1
  035e9b8  fmuls 2, 2, 2
  035e9bc  fmadds 1, 1, 1, 2
  035e9c0  fsqrts 2, 1
  035e9c4  lfs 1, 8(31)
  035e9c8  fsubs 1, 3, 1
  035e9cc  fabs 5, 1
  035e9d0  stfs 1, 132(1)
  035e9d4  fmr 1, 4
  035e9d8  fabs 3, 2
  035e9dc  stfs 2, 128(1)
  035e9e0  lwz 4, 132(1)
  035e9e4  lfs 4, 132(1)
  035e9e8  rlwinm 4, 4, 3, 29, 29
  035e9ec  fabs 6, 4
  035e9f0  fsubs 2, 3, 5
  035e9f4  stfs 2, 136(1)
  035e9f8  lwz 5, 128(1)
  035e9fc  lfs 2, 128(1)
  035ea00  lwz 6, 136(1)
  035ea04  lfs 4, 136(1)
  035ea08  fabs 2, 2
  035ea0c  rlwimi 4, 6, 2, 30, 30
  035ea10  fsub 8, 4, 7
  035ea14  fsub 9, 4, 7
  035ea18  rlwimi 4, 5, 4, 28, 28
  035ea1c  ori 5, 3, 0
  035ea20  rlwimi 5, 4, 2, 26, 28
  035ea24  slwi 4, 4, 2
  035ea28  clrldi 5, 5, 32
  035ea2c  fsel 5, 8, 2, 5
  035ea30  lfsx 4, 3, 4
  035ea34  lfs 2, 4(5)
  035ea38  fsel 3, 9, 6, 3
  035ea3c  fcmpu 0, 5, 7
  035ea40  bt 1, 0x35ea48
  035ea44  b 0x35eb68
  035ea48  fsubs 6, 3, 5
  035ea4c  fadds 3, 3, 5
  035ea50  addic 3, 1, 16
  035ea54  li 6, 2
  035ea58  addic 5, 3, 176
  035ea5c  addic 4, 3, 160
  035ea60  mtctr 6
  035ea64  fdivs 3, 6, 3
  035ea68  fmuls 5, 3, 3
  035ea6c  stfs 3, 188(1)
  035ea70  stfs 3, 180(1)
  035ea74  stfs 3, 184(1)
  035ea78  stfs 3, 176(1)
  035ea7c  lfs 8, 188(1)
  035ea80  lfs 9, 180(1)
  035ea84  lfs 10, 184(1)
  035ea88  fmuls 6, 5, 5
  035ea8c  fmuls 9, 9, 5
  035ea90  fmuls 8, 8, 6
  035ea94  fmuls 3, 6, 6
  035ea98  fmuls 6, 10, 6
  035ea9c  stfs 9, 180(1)
  035eaa0  fmuls 5, 8, 5
  035eaa4  stfs 6, 184(1)
  035eaa8  stfs 5, 188(1)
  035eaac  lfs 5, 160(3)
  035eab0  fmuls 5, 5, 3
  035eab4  stfs 5, 176(3)
  035eab8  lfs 5, 4(4)
  035eabc  addic 4, 4, 8
  035eac0  fmuls 5, 5, 3
  035eac4  addic 3, 3, 8
  035eac8  stfs 5, 4(5)
  035eacc  addic 5, 5, 8
  035ead0  bdnz 0x35eaac
  035ead4  li 5, 4
  035ead8  ori 3, 1, 0
  035eadc  mtctr 5
  035eae0  lis 4, 115
  035eae4  addic 5, 3, 176
  035eae8  addic 4, 4, 22752
  035eaec  ori 7, 5, 0
  035eaf0  lfs 3, 176(3)
  035eaf4  lfs 5, 0(4)
  035eaf8  fmuls 3, 3, 5
  035eafc  lfs 5, 4(4)
  035eb00  addic 4, 4, 8
  035eb04  stfs 3, 176(3)
  035eb08  lfs 3, 4(5)
  035eb0c  addic 3, 3, 8
  035eb10  fmuls 3, 3, 5
  035eb14  stfs 3, 4(5)
  035eb18  addic 5, 5, 8
  035eb1c  bdnz 0x35eaf0
  035eb20  ori 3, 1, 0
  035eb24  mtctr 6
  035eb28  lfs 3, 176(3)
  035eb2c  lfs 5, 4(7)
  035eb30  fadds 3, 7, 3
  035eb34  lfs 6, 8(7)
  035eb38  addic 3, 3, 16
  035eb3c  lfs 7, 12(7)
  035eb40  addic 7, 7, 16
  035eb44  fadds 3, 3, 5
  035eb48  fadds 3, 3, 6
  035eb4c  fadds 7, 3, 7
  035eb50  bdnz 0x35eb28
  035eb54  lis 3, 54
  035eb58  addi 3, 3, -7236
  035eb5c  lfs 3, 4(3)
  035eb60  fadds 7, 7, 3
  035eb64  fmadds 7, 7, 4, 2
  035eb68  cmpwi 29, 0
  035eb6c  bt 2, 0x35eb74
  035eb70  stfs 1, 0(29)
  035eb74  cmpwi 30, 0
  035eb78  bt 2, 0x35eb84
  035eb7c  fneg 2, 7
  035eb80  stfs 2, 0(30)
  035eb84  ld 0, 352(1)
  035eb88  mtlr 0
  035eb8c  lfd 31, 328(1)
  035eb90  ld 29, 304(1)
  035eb94  ld 30, 312(1)
  035eb98  ld 31, 320(1)
  035eb9c  addi 1, 1, 336
  035eba0  blr

M388_0035ebb8:   # 0x35ebb8, 0x1a0 bytes
  035ebb8  stdu 1, -192(1)
  035ebbc  mflr 0
  035ebc0  std 0, 208(1)
  035ebc4  std 30, 176(1)
  035ebc8  ori 30, 3, 0
  035ebcc  lbz 3, 252(4)
  035ebd0  li 5, 0
  035ebd4  li 6, 16
  035ebd8  std 29, 168(1)
  035ebdc  clrlwi 7, 3, 31
  035ebe0  li 29, 18
  035ebe4  std 31, 184(1)
  035ebe8  subc 5, 5, 7
  035ebec  ori 31, 4, 0
  035ebf0  lbz 8, 188(30)
  035ebf4  cntlzw 5, 5
  035ebf8  subc 6, 6, 29
  035ebfc  sldi 5, 5, 58
  035ec00  cmpwi 8, 6
  035ec04  sradi 4, 5, 63
  035ec08  and 4, 4, 6
  035ec0c  addc 29, 29, 4
  035ec10  bf 2, 0x35ec2c
  035ec14  bl 0x5c8318
  035ec18  nop
  035ec1c  clrlwi 3, 3, 31
  035ec20  cmpwi 3, 0
  035ec24  bt 2, 0x35ec34
  035ec28  lbz 3, 252(31)
  035ec2c  xori 3, 3, 1
  035ec30  stb 3, 252(31)
  035ec34  ori 3, 30, 0
  035ec38  addic 5, 1, 112
  035ec3c  ori 4, 29, 0
  035ec40  bl 0xf1114
  035ec44  nop
  035ec48  li 3, 0
  035ec4c  lbz 4, 32(30)
  035ec50  cmpwi 4, 5
  035ec54  stw 3, 128(1)
  035ec58  bt 2, 0x35ec88
  035ec5c  lis 3, 54
  035ec60  lis 4, 114
  035ec64  addi 3, 3, -5212
  035ec68  addic 5, 1, 132
  035ec6c  addic 6, 1, 136
  035ec70  lfs 1, 0(3)
  035ec74  lfs 2, -3052(4)
  035ec78  addic 3, 1, 112
  035ec7c  fmuls 1, 2, 1
  035ec80  bl 0x35e3c8
  035ec84  b 0x35eca4
  035ec88  lis 4, 54
  035ec8c  addic 3, 1, 112
  035ec90  addi 4, 4, -5212
  035ec94  addic 5, 1, 132
  035ec98  addic 6, 1, 136
  035ec9c  lfs 1, 4(4)
  035eca0  bl 0x35e3c8
  035eca4  lis 3, 16095
  035eca8  lfs 1, 72(30)
  035ecac  lis 4, 54
  035ecb0  ori 3, 3, 26355
  035ecb4  addi 4, 4, -5212
  035ecb8  addic 6, 1, 128
  035ecbc  stw 3, 132(1)
  035ecc0  lis 3, 114
  035ecc4  stfs 1, 136(1)
  035ecc8  lfs 1, 12(4)
  035eccc  lfs 2, -3056(3)
  035ecd0  lfs 3, 8(4)
  035ecd4  fmuls 5, 2, 1
  035ecd8  lis 4, 114
  035ecdc  lfs 4, 172(31)
  035ece0  lis 3, 151
  035ece4  addic 3, 3, -25376
  035ece8  lfs 2, -3052(4)
  035ecec  addic 4, 1, 112
  035ecf0  fmadds 1, 2, 3, 4
  035ecf4  fmuls 2, 2, 3
  035ecf8  lwz 5, 5616(3)
  035ecfc  fctiwz 3, 5
  035ed00  ori 3, 30, 0
  035ed04  stfd 3, 144(1)
  035ed08  lwz 8, 148(1)
  035ed0c  extsw 8, 8
  035ed10  bl 0x471930
  035ed14  nop
  035ed18  ori 31, 3, 0
  035ed1c  cmpwi 31, 0
  035ed20  bt 2, 0x35ed38
  035ed24  li 3, 2
  035ed28  li 4, 0
  035ed2c  ori 5, 30, 0
  035ed30  bl 0x15d12c
  035ed34  nop
  035ed38  ori 3, 31, 0
  035ed3c  ld 0, 208(1)
  035ed40  mtlr 0
  035ed44  ld 29, 168(1)
  035ed48  ld 30, 176(1)
  035ed4c  ld 31, 184(1)
  035ed50  addi 1, 1, 192
  035ed54  blr

M388_0035ed70:   # 0x35ed70, 0x36c bytes
  035ed70  stdu 1, -256(1)
  035ed74  mflr 0
  035ed78  std 0, 272(1)
  035ed7c  stfd 27, 216(1)
  035ed80  stfd 28, 224(1)
  035ed84  stfd 29, 232(1)
  035ed88  stfd 30, 240(1)
  035ed8c  stfd 31, 248(1)
  035ed90  std 31, 208(1)
  035ed94  ori 31, 4, 0
  035ed98  std 30, 200(1)
  035ed9c  lis 4, 54
  035eda0  std 29, 192(1)
  035eda4  ori 30, 3, 0
  035eda8  addi 29, 4, -4776
  035edac  addic 5, 1, 112
  035edb0  std 28, 184(1)
  035edb4  std 27, 176(1)
  035edb8  std 26, 168(1)
  035edbc  li 4, 14
  035edc0  bl 0xf1114
  035edc4  nop
  035edc8  lis 3, 151
  035edcc  lfs 31, 0(29)
  035edd0  lis 4, 114
  035edd4  lfs 30, 4(29)
  035edd8  addic 29, 3, -25376
  035eddc  lwz 3, 5616(29)
  035ede0  lfs 1, -3052(4)
  035ede4  cmpwi 3, 0
  035ede8  bt 2, 0x35f024
  035edec  lhz 3, 166(3)
  035edf0  cmpwi 3, 69
  035edf4  bf 2, 0x35f024
  035edf8  lis 3, 54
  035edfc  addic 4, 1, 112
  035ee00  addi 28, 3, -4776
  035ee04  addic 3, 1, 144
  035ee08  lfs 2, 8(28)
  035ee0c  fmr 29, 2
  035ee10  fmuls 1, 1, 29
  035ee14  bl 0x35e29c
  035ee18  lfs 1, 148(1)
  035ee1c  lfs 2, 116(1)
  035ee20  lfs 3, 144(1)
  035ee24  fsubs 1, 1, 2
  035ee28  lfs 2, 112(1)
  035ee2c  fsubs 3, 3, 2
  035ee30  lfs 2, 152(1)
  035ee34  lfs 4, 120(1)
  035ee38  fsubs 4, 2, 4
  035ee3c  lis 27, 114
  035ee40  fmuls 2, 1, 1
  035ee44  lfs 5, -3052(27)
  035ee48  fmuls 7, 5, 29
  035ee4c  fmadds 2, 3, 3, 2
  035ee50  fmadds 2, 4, 4, 2
  035ee54  fsqrts 6, 2
  035ee58  lfs 2, 156(1)
  035ee5c  stfs 2, 140(1)
  035ee60  lwz 26, 5616(29)
  035ee64  fmuls 2, 5, 31
  035ee68  fdivs 7, 7, 6
  035ee6c  fsub 8, 30, 6
  035ee70  fsub 9, 30, 6
  035ee74  fsub 10, 30, 6
  035ee78  fsub 11, 6, 30
  035ee7c  fsub 12, 6, 30
  035ee80  fsub 6, 6, 30
  035ee84  fmuls 3, 3, 7
  035ee88  fmuls 1, 1, 7
  035ee8c  fmuls 4, 4, 7
  035ee90  fsel 7, 8, 30, 3
  035ee94  fsel 8, 9, 30, 1
  035ee98  fsel 9, 10, 30, 4
  035ee9c  fsel 3, 11, 7, 3
  035eea0  fsel 1, 12, 8, 1
  035eea4  fsel 4, 6, 9, 4
  035eea8  stfs 3, 128(1)
  035eeac  stfs 1, 132(1)
  035eeb0  stfs 4, 136(1)
  035eeb4  lfs 29, 12(28)
  035eeb8  fmuls 1, 5, 29
  035eebc  bl 0xfcbe8
  035eec0  nop
  035eec4  lfs 3, 212(26)
  035eec8  lfs 4, 208(26)
  035eecc  fmuls 2, 3, 3
  035eed0  lfs 5, 216(26)
  035eed4  lfs 7, -3052(27)
  035eed8  lwz 29, 5616(29)
  035eedc  fmadds 2, 4, 4, 2
  035eee0  fmadds 2, 5, 5, 2
  035eee4  fsqrts 6, 2
  035eee8  fmuls 2, 7, 31
  035eeec  fdivs 8, 1, 6
  035eef0  fsub 9, 30, 6
  035eef4  fsub 10, 30, 6
  035eef8  fsub 11, 30, 6
  035eefc  fmuls 1, 7, 29
  035ef00  fsub 12, 6, 30
  035ef04  fsub 13, 6, 30
  035ef08  fsub 6, 6, 30
  035ef0c  fmuls 5, 5, 8
  035ef10  fmuls 3, 3, 8
  035ef14  fmuls 4, 4, 8
  035ef18  fsel 7, 9, 30, 5
  035ef1c  fsel 8, 10, 30, 3
  035ef20  fsel 9, 11, 30, 4
  035ef24  fsel 29, 12, 7, 5
  035ef28  fsel 28, 13, 8, 3
  035ef2c  fsel 27, 6, 9, 4
  035ef30  bl 0xfcbe8
  035ef34  nop
  035ef38  lfs 3, 228(29)
  035ef3c  lfs 4, 224(29)
  035ef40  fmuls 2, 3, 3
  035ef44  lfs 5, 232(29)
  035ef48  lfs 7, -3052(27)
  035ef4c  lfs 8, 16(28)
  035ef50  fmadds 2, 4, 4, 2
  035ef54  fmadds 2, 5, 5, 2
  035ef58  fsqrts 6, 2
  035ef5c  fmuls 2, 7, 31
  035ef60  fdivs 9, 1, 6
  035ef64  fsub 10, 30, 6
  035ef68  fmuls 1, 7, 8
  035ef6c  fsub 11, 30, 6
  035ef70  fsub 12, 6, 30
  035ef74  fsub 13, 30, 6
  035ef78  fsub 0, 6, 30
  035ef7c  fsub 6, 6, 30
  035ef80  fmuls 3, 3, 9
  035ef84  fmuls 5, 5, 9
  035ef88  fmuls 4, 4, 9
  035ef8c  fsel 7, 10, 30, 3
  035ef90  fsel 8, 11, 30, 5
  035ef94  fsel 9, 13, 30, 4
  035ef98  fsel 3, 12, 7, 3
  035ef9c  fsel 5, 0, 8, 5
  035efa0  fsel 4, 6, 9, 4
  035efa4  fadds 31, 3, 28
  035efa8  fadds 29, 5, 29
  035efac  fadds 28, 4, 27
  035efb0  bl 0xfcbe8
  035efb4  nop
  035efb8  fmuls 2, 31, 31
  035efbc  lfs 3, 128(1)
  035efc0  lfs 4, 132(1)
  035efc4  lfs 5, 136(1)
  035efc8  fmadds 2, 28, 28, 2
  035efcc  fmadds 2, 29, 29, 2
  035efd0  fsqrts 2, 2
  035efd4  fdivs 1, 1, 2
  035efd8  fsub 6, 30, 2
  035efdc  fsub 7, 30, 2
  035efe0  fsub 8, 30, 2
  035efe4  fsub 9, 2, 30
  035efe8  fsub 10, 2, 30
  035efec  fsub 2, 2, 30
  035eff0  fmuls 11, 1, 29
  035eff4  fmuls 12, 1, 31
  035eff8  fmuls 1, 1, 28
  035effc  fsel 6, 6, 30, 11
  035f000  fsel 7, 7, 30, 12
  035f004  fsel 8, 8, 30, 1
  035f008  fsel 30, 9, 6, 11
  035f00c  fsel 6, 10, 7, 12
  035f010  fsel 2, 2, 8, 1
  035f014  fadds 30, 5, 30
  035f018  fadds 1, 4, 6
  035f01c  fadds 2, 3, 2
  035f020  b 0x35f044
  035f024  fmuls 2, 1, 31
  035f028  addic 3, 1, 128
  035f02c  fmr 1, 30
  035f030  bl 0xfea60
  035f034  nop
  035f038  lfs 2, 128(1)
  035f03c  lfs 1, 132(1)
  035f040  lfs 30, 136(1)
  035f044  lfs 3, 112(31)
  035f048  lfs 4, 116(31)
  035f04c  ori 3, 30, 0
  035f050  fadds 2, 2, 3
  035f054  addic 5, 1, 128
  035f058  lfs 3, 120(31)
  035f05c  fadds 1, 1, 4
  035f060  addic 4, 1, 112
  035f064  fadds 3, 30, 3
  035f068  stfs 2, 128(1)
  035f06c  stfs 1, 132(1)
  035f070  stfs 3, 136(1)
  035f074  bl 0x47df40
  035f078  nop
  035f07c  ori 31, 3, 0
  035f080  cmpwi 31, 0
  035f084  bt 2, 0x35f09c
  035f088  li 3, 3
  035f08c  li 4, 0
  035f090  ori 5, 30, 0
  035f094  bl 0x15d12c
  035f098  nop
  035f09c  ori 3, 31, 0
  035f0a0  ld 0, 272(1)
  035f0a4  mtlr 0
  035f0a8  lfd 27, 216(1)
  035f0ac  lfd 28, 224(1)
  035f0b0  lfd 29, 232(1)
  035f0b4  lfd 30, 240(1)
  035f0b8  lfd 31, 248(1)
  035f0bc  ld 26, 168(1)
  035f0c0  ld 27, 176(1)
  035f0c4  ld 28, 184(1)
  035f0c8  ld 29, 192(1)
  035f0cc  ld 30, 200(1)
  035f0d0  ld 31, 208(1)
  035f0d4  addi 1, 1, 256
  035f0d8  blr

M388_0035f100:   # 0x35f100, 0x548 bytes
  035f100  stdu 1, -448(1)
  035f104  mflr 0
  035f108  std 0, 464(1)
  035f10c  stfd 17, 328(1)
  035f110  stfd 18, 336(1)
  035f114  stfd 19, 344(1)
  035f118  stfd 20, 352(1)
  035f11c  stfd 21, 360(1)
  035f120  stfd 22, 368(1)
  035f124  stfd 23, 376(1)
  035f128  stfd 24, 384(1)
  035f12c  stfd 25, 392(1)
  035f130  stfd 26, 400(1)
  035f134  stfd 27, 408(1)
  035f138  stfd 28, 416(1)
  035f13c  stfd 29, 424(1)
  035f140  stfd 30, 432(1)
  035f144  stfd 31, 440(1)
  035f148  std 31, 320(1)
  035f14c  ori 31, 3, 0
  035f150  lis 4, 54
  035f154  std 30, 312(1)
  035f158  li 3, 52
  035f15c  std 29, 304(1)
  035f160  addi 30, 4, -3876
  035f164  std 28, 296(1)
  035f168  std 27, 288(1)
  035f16c  std 26, 280(1)
  035f170  lwz 29, 120(31)
  035f174  bl 0x685c4
  035f178  nop
  035f17c  ori 28, 3, 0
  035f180  lis 9, 0
  035f184  li 3, 0
  035f188  ori 9, 9, 65424
  035f18c  li 4, 0
  035f190  li 5, 1
  035f194  li 6, 1
  035f198  li 7, 1
  035f19c  li 8, 0
  035f1a0  bl 0x502fd4
  035f1a4  nop
  035f1a8  ori 27, 3, 0
  035f1ac  li 3, 0
  035f1b0  li 4, 1
  035f1b4  li 5, 0
  035f1b8  li 6, 0
  035f1bc  li 7, 0
  035f1c0  li 8, 0
  035f1c4  bl 0x502f08
  035f1c8  nop
  035f1cc  ori 26, 3, 0
  035f1d0  li 4, 2
  035f1d4  li 3, 0
  035f1d8  li 5, 0
  035f1dc  li 6, 1
  035f1e0  li 7, 128
  035f1e4  bl 0x502ea8
  035f1e8  nop
  035f1ec  lis 4, 16512
  035f1f0  std 28, 248(1)
  035f1f4  std 27, 256(1)
  035f1f8  li 6, 0
  035f1fc  ori 4, 4, 32896
  035f200  std 26, 240(1)
  035f204  std 3, 264(1)
  035f208  lis 7, 16256
  035f20c  addic 5, 1, 112
  035f210  ori 3, 31, 0
  035f214  stw 4, 204(1)
  035f218  stw 4, 200(1)
  035f21c  stw 4, 196(1)
  035f220  stw 4, 192(1)
  035f224  lfs 22, 0(30)
  035f228  li 4, 19
  035f22c  stw 6, 208(1)
  035f230  stw 6, 224(1)
  035f234  lfs 1, 4(30)
  035f238  stw 7, 216(1)
  035f23c  stw 7, 232(1)
  035f240  fmr 28, 1
  035f244  stw 6, 212(1)
  035f248  stw 6, 220(1)
  035f24c  stw 7, 228(1)
  035f250  stw 7, 236(1)
  035f254  bl 0xf1114
  035f258  nop
  035f25c  lfs 1, 132(29)
  035f260  lfs 19, 116(1)
  035f264  lfs 2, 128(29)
  035f268  fsubs 1, 1, 19
  035f26c  lfs 18, 112(1)
  035f270  lfs 3, 136(29)
  035f274  fsubs 2, 2, 18
  035f278  lfs 20, 120(1)
  035f27c  fsubs 3, 3, 20
  035f280  lfs 5, 8(30)
  035f284  fmuls 4, 1, 1
  035f288  lfs 6, 12(30)
  035f28c  fmadds 4, 2, 2, 4
  035f290  fmadds 4, 3, 3, 4
  035f294  fsqrts 4, 4
  035f298  lis 3, 161
  035f29c  lis 4, 26214
  035f2a0  lfs 27, 124(1)
  035f2a4  ori 4, 4, 26215
  035f2a8  lwz 3, 1808(3)
  035f2ac  mulhw 4, 4, 3
  035f2b0  srawi 4, 4, 3
  035f2b4  srwi 5, 4, 31
  035f2b8  addc 4, 4, 5
  035f2bc  sldi 5, 4, 4
  035f2c0  sldi 4, 4, 2
  035f2c4  addc 4, 5, 4
  035f2c8  subc 3, 3, 4
  035f2cc  extsw 3, 3
  035f2d0  fdivs 7, 5, 4
  035f2d4  fsub 8, 5, 4
  035f2d8  fsub 9, 5, 4
  035f2dc  fsub 4, 5, 4
  035f2e0  fmuls 5, 1, 7
  035f2e4  fmuls 10, 2, 7
  035f2e8  fmuls 7, 3, 7
  035f2ec  fsel 1, 8, 1, 5
  035f2f0  fsel 2, 9, 2, 10
  035f2f4  fsel 3, 4, 3, 7
  035f2f8  fmuls 4, 1, 1
  035f2fc  fmadds 4, 2, 2, 4
  035f300  fmadds 17, 3, 3, 4
  035f304  fsqrts 17, 17
  035f308  fmuls 4, 17, 6
  035f30c  fsub 6, 22, 17
  035f310  fsub 7, 22, 17
  035f314  fsub 30, 17, 22
  035f318  fsub 31, 17, 22
  035f31c  fsub 29, 17, 22
  035f320  fsub 5, 4, 28
  035f324  fsel 28, 5, 4, 28
  035f328  fsub 5, 22, 17
  035f32c  fdivs 4, 28, 17
  035f330  fmuls 1, 1, 4
  035f334  fmuls 3, 3, 4
  035f338  fmuls 2, 2, 4
  035f33c  fsel 4, 5, 22, 1
  035f340  fsel 5, 6, 22, 3
  035f344  fsel 6, 7, 22, 2
  035f348  fsel 30, 30, 4, 1
  035f34c  fsel 29, 29, 5, 3
  035f350  fsel 31, 31, 6, 2
  035f354  bl 0x502730
  035f358  nop
  035f35c  fmuls 2, 30, 30
  035f360  lfs 3, 16(30)
  035f364  fmuls 1, 1, 3
  035f368  fcmpu 0, 22, 17
  035f36c  fmadds 2, 31, 31, 2
  035f370  cror 6, 1, 2
  035f374  fmadds 2, 29, 29, 2
  035f378  fsqrts 2, 2
  035f37c  fdivs 1, 1, 2
  035f380  fsub 3, 22, 2
  035f384  fsub 4, 22, 2
  035f388  fsub 5, 22, 2
  035f38c  fsub 6, 2, 22
  035f390  fsub 7, 2, 22
  035f394  fsub 2, 2, 22
  035f398  fmuls 8, 29, 1
  035f39c  fmuls 9, 30, 1
  035f3a0  fmuls 1, 31, 1
  035f3a4  fsel 3, 3, 22, 8
  035f3a8  fsel 4, 4, 22, 9
  035f3ac  fsel 5, 5, 22, 1
  035f3b0  fsel 3, 6, 3, 8
  035f3b4  fsel 4, 7, 4, 9
  035f3b8  fsel 1, 2, 5, 1
  035f3bc  fsubs 20, 20, 3
  035f3c0  fsubs 19, 19, 4
  035f3c4  fsubs 18, 18, 1
  035f3c8  bt 6, 0x35f5e4
  035f3cc  lis 3, 54
  035f3d0  fmr 21, 22
  035f3d4  addi 3, 3, -3876
  035f3d8  lis 30, 115
  035f3dc  lis 31, 161
  035f3e0  lfs 1, 20(3)
  035f3e4  fmuls 1, 1, 17
  035f3e8  addic 30, 30, 20672
  035f3ec  addic 31, 31, 24396
  035f3f0  fdivs 23, 21, 1
  035f3f4  lfs 1, 24(3)
  035f3f8  lfs 24, 28(3)
  035f3fc  lfs 26, 32(3)
  035f400  fsubs 25, 17, 24
  035f404  fadds 23, 23, 1
  035f408  lis 3, 115
  035f40c  lfs 1, 20672(3)
  035f410  lfs 2, 8(30)
  035f414  fmuls 3, 1, 29
  035f418  lfs 4, 4(30)
  035f41c  fmuls 5, 2, 30
  035f420  fmuls 6, 4, 31
  035f424  fmsubs 2, 2, 31, 3
  035f428  fmsubs 3, 4, 29, 5
  035f42c  fmsubs 1, 1, 30, 6
  035f430  fmuls 4, 2, 2
  035f434  fmadds 4, 3, 3, 4
  035f438  fmadds 4, 1, 1, 4
  035f43c  fsqrts 4, 4
  035f440  stfs 27, 140(1)
  035f444  stfs 27, 156(1)
  035f448  stfs 27, 172(1)
  035f44c  stfs 27, 188(1)
  035f450  fcmpu 0, 17, 24
  035f454  fcmpu 1, 21, 25
  035f458  cror 2, 0, 2
  035f45c  fdivs 5, 23, 4
  035f460  fsub 6, 22, 4
  035f464  fsub 8, 22, 4
  035f468  fsub 10, 22, 4
  035f46c  fsub 7, 4, 22
  035f470  fsub 9, 4, 22
  035f474  fsub 4, 4, 22
  035f478  fmuls 3, 3, 5
  035f47c  fmuls 1, 1, 5
  035f480  fmuls 2, 2, 5
  035f484  fsel 5, 6, 22, 3
  035f488  fsel 6, 8, 22, 1
  035f48c  fsel 8, 10, 22, 2
  035f490  fsel 3, 7, 5, 3
  035f494  fsel 1, 9, 6, 1
  035f498  fsel 2, 4, 8, 2
  035f49c  fmuls 4, 3, 29
  035f4a0  fmuls 5, 1, 30
  035f4a4  fmuls 6, 2, 31
  035f4a8  fmsubs 4, 1, 31, 4
  035f4ac  fmsubs 5, 2, 29, 5
  035f4b0  fmsubs 6, 3, 30, 6
  035f4b4  fmuls 7, 4, 4
  035f4b8  fmadds 7, 5, 5, 7
  035f4bc  fmadds 7, 6, 6, 7
  035f4c0  fsqrts 7, 7
  035f4c4  fdivs 8, 23, 7
  035f4c8  fsub 9, 22, 7
  035f4cc  fsub 10, 22, 7
  035f4d0  fsub 11, 22, 7
  035f4d4  fsub 12, 7, 22
  035f4d8  fsub 13, 7, 22
  035f4dc  fsub 7, 7, 22
  035f4e0  fmuls 6, 6, 8
  035f4e4  fmuls 4, 4, 8
  035f4e8  fmuls 5, 5, 8
  035f4ec  fsel 8, 9, 22, 6
  035f4f0  fsel 9, 10, 22, 4
  035f4f4  fsel 10, 11, 22, 5
  035f4f8  fsel 6, 12, 8, 6
  035f4fc  fsel 4, 13, 9, 4
  035f500  fsel 5, 7, 10, 5
  035f504  fsubs 7, 20, 6
  035f508  fsubs 8, 19, 4
  035f50c  fsubs 9, 18, 5
  035f510  fadds 5, 18, 5
  035f514  fadds 4, 19, 4
  035f518  fadds 6, 20, 6
  035f51c  fsubs 10, 7, 1
  035f520  fsubs 11, 8, 2
  035f524  fsubs 12, 9, 3
  035f528  fadds 9, 9, 3
  035f52c  fadds 8, 8, 2
  035f530  fadds 7, 7, 1
  035f534  fsubs 13, 5, 3
  035f538  fsubs 0, 4, 2
  035f53c  fadds 3, 5, 3
  035f540  fsubs 5, 6, 1
  035f544  fadds 2, 4, 2
  035f548  fadds 1, 6, 1
  035f54c  stfs 10, 136(1)
  035f550  stfs 11, 132(1)
  035f554  stfs 12, 128(1)
  035f558  stfs 9, 144(1)
  035f55c  stfs 8, 148(1)
  035f560  stfs 7, 152(1)
  035f564  stfs 13, 160(1)
  035f568  stfs 0, 164(1)
  035f56c  stfs 3, 176(1)
  035f570  stfs 5, 168(1)
  035f574  stfs 2, 180(1)
  035f578  stfs 1, 184(1)
  035f57c  bt 2, 0x35f5b0
  035f580  bf 5, 0x35f5b0
  035f584  fsubs 1, 17, 21
  035f588  fmuls 1, 1, 26
  035f58c  bl 0x502758
  035f590  nop
  035f594  lis 4, 128
  035f598  ori 4, 4, 32896
  035f59c  rlwimi 4, 3, 24, 0, 7
  035f5a0  stw 4, 204(1)
  035f5a4  stw 4, 200(1)
  035f5a8  stw 4, 196(1)
  035f5ac  stw 4, 192(1)
  035f5b0  addic 3, 1, 128
  035f5b4  li 4, 0
  035f5b8  lwz 6, 28(31)
  035f5bc  li 5, 1
  035f5c0  li 7, 9
  035f5c4  bl 0x72280
  035f5c8  nop
  035f5cc  fadds 21, 21, 28
  035f5d0  fadds 18, 18, 31
  035f5d4  fadds 19, 19, 30
  035f5d8  fadds 20, 20, 29
  035f5dc  fcmpu 0, 21, 17
  035f5e0  bt 0, 0x35f408
  035f5e4  ld 0, 464(1)
  035f5e8  mtlr 0
  035f5ec  lfd 17, 328(1)
  035f5f0  lfd 18, 336(1)
  035f5f4  lfd 19, 344(1)
  035f5f8  lfd 20, 352(1)
  035f5fc  lfd 21, 360(1)
  035f600  lfd 22, 368(1)
  035f604  lfd 23, 376(1)
  035f608  lfd 24, 384(1)
  035f60c  lfd 25, 392(1)
  035f610  lfd 26, 400(1)
  035f614  lfd 27, 408(1)
  035f618  lfd 28, 416(1)
  035f61c  lfd 29, 424(1)
  035f620  lfd 30, 432(1)
  035f624  lfd 31, 440(1)
  035f628  ld 26, 280(1)
  035f62c  ld 27, 288(1)
  035f630  ld 28, 296(1)
  035f634  ld 29, 304(1)
  035f638  ld 30, 312(1)
  035f63c  ld 31, 320(1)
  035f640  addi 1, 1, 448
  035f644  blr

M388_0035f670:   # 0x35f670, 0x8dc bytes
  035f670  stdu 1, -144(1)
  035f674  mflr 0
  035f678  std 0, 160(1)
  035f67c  std 30, 128(1)
  035f680  std 31, 136(1)
  035f684  ori 30, 3, 0
  035f688  ori 31, 4, 0
  035f68c  lbz 3, 188(30)
  035f690  cmpwi 3, 2
  035f694  cmpwi 1, 3, 0
  035f698  cmpwi 6, 3, 1
  035f69c  cmpwi 7, 3, 6
  035f6a0  bt 1, 0x35f6b0
  035f6a4  bf 5, 0x35ff34
  035f6a8  bf 25, 0x35f6cc
  035f6ac  b 0x35fd2c
  035f6b0  bt 29, 0x35f6c0
  035f6b4  cmpwi 3, 4
  035f6b8  bt 2, 0x35fee0
  035f6bc  b 0x35f82c
  035f6c0  cmpwi 3, 7
  035f6c4  bf 1, 0x35fd2c
  035f6c8  b 0x35ff34
  035f6cc  lbz 3, 32(30)
  035f6d0  cmpwi 3, 4
  035f6d4  bf 2, 0x35f798
  035f6d8  addic 3, 31, 248
  035f6dc  bl 0x4fff60
  035f6e0  nop
  035f6e4  cmpwi 3, 0
  035f6e8  bt 2, 0x35ff34
  035f6ec  ori 3, 30, 0
  035f6f0  ori 4, 31, 0
  035f6f4  bl 0x35ebb8
  035f6f8  lis 3, 54
  035f6fc  vspltisw 2, -1
  035f700  lis 4, 114
  035f704  addi 3, 3, -2488
  035f708  li 5, -3056
  035f70c  vslw 2, 2, 2
  035f710  lvlx 3, 0, 3
  035f714  lvlx 4, 5, 4
  035f718  li 3, 248
  035f71c  vspltw 3, 3, 0
  035f720  lbz 4, 253(31)
  035f724  addic 4, 4, 1
  035f728  vmaddfp 2, 4, 3, 2
  035f72c  clrlwi 5, 4, 24
  035f730  cmpwi 5, 10
  035f734  vctsxs 2, 2, 0
  035f738  vspltw 2, 2, 0
  035f73c  stvewx 2, 3, 31
  035f740  stb 4, 253(31)
  035f744  bf 1, 0x35ff34
  035f748  li 3, 0
  035f74c  lis 4, 54
  035f750  vspltisw 2, -1
  035f754  li 5, 3
  035f758  addi 4, 4, -2488
  035f75c  stb 3, 253(31)
  035f760  lis 6, 114
  035f764  li 3, 4
  035f768  vslw 2, 2, 2
  035f76c  stb 5, 32(30)
  035f770  li 5, -3056
  035f774  lvlx 3, 3, 4
  035f778  li 3, 248
  035f77c  vspltw 3, 3, 0
  035f780  lvlx 4, 5, 6
  035f784  vmaddfp 2, 4, 3, 2
  035f788  vctsxs 2, 2, 0
  035f78c  vspltw 2, 2, 0
  035f790  stvewx 2, 3, 31
  035f794  b 0x35ff34
  035f798  addic 3, 31, 248
  035f79c  bl 0x4fff60
  035f7a0  nop
  035f7a4  cmpwi 3, 0
  035f7a8  bt 2, 0x35ff34
  035f7ac  lhz 3, 312(31)
  035f7b0  clrlwi 3, 3, 31
  035f7b4  cmpwi 3, 0
  035f7b8  bf 2, 0x35f7e4
  035f7bc  ori 3, 30, 0
  035f7c0  ori 4, 31, 0
  035f7c4  li 5, 1
  035f7c8  li 6, 2
  035f7cc  bl 0x35b790
  035f7d0  cmpwi 3, 0
  035f7d4  bt 2, 0x35f7e4
  035f7d8  lhz 3, 312(31)
  035f7dc  ori 3, 3, 1
  035f7e0  sth 3, 312(31)
  035f7e4  lis 3, 54
  035f7e8  li 4, 8
  035f7ec  vspltisw 2, -1
  035f7f0  addi 3, 3, -2488
  035f7f4  lis 5, 114
  035f7f8  li 6, -3056
  035f7fc  vslw 2, 2, 2
  035f800  lvlx 3, 4, 3
  035f804  li 3, 248
  035f808  vspltw 3, 3, 0
  035f80c  li 4, 4
  035f810  lvlx 4, 6, 5
  035f814  vmaddfp 2, 4, 3, 2
  035f818  vctsxs 2, 2, 0
  035f81c  vspltw 2, 2, 0
  035f820  stvewx 2, 3, 31
  035f824  stb 4, 32(30)
  035f828  b 0x35ff34
  035f82c  addic 3, 31, 292
  035f830  bl 0x4fff60
  035f834  nop
  035f838  addic 3, 31, 256
  035f83c  bl 0x4fff60
  035f840  nop
  035f844  addic 3, 31, 248
  035f848  bl 0x4fff60
  035f84c  nop
  035f850  lbz 3, 32(30)
  035f854  cmpwi 3, 5
  035f858  bt 2, 0x35fc00
  035f85c  lwz 4, 284(31)
  035f860  cmpwi 1, 4, -1
  035f864  bt 6, 0x35f8b8
  035f868  bt 6, 0x35f8b0
  035f86c  sldi 3, 4, 7
  035f870  sldi 6, 4, 4
  035f874  lis 5, 150
  035f878  subc 3, 3, 6
  035f87c  addic 5, 5, 14312
  035f880  extsw 3, 3
  035f884  lwzx 5, 5, 3
  035f888  cmpw 5, 30
  035f88c  bf 2, 0x35f8b0
  035f890  lis 5, 150
  035f894  addic 5, 5, 14292
  035f898  lbzx 3, 5, 3
  035f89c  cmpwi 3, 0
  035f8a0  bt 2, 0x35f8b0
  035f8a4  extsw 3, 4
  035f8a8  bl 0x15cdb0
  035f8ac  nop
  035f8b0  li 3, -1
  035f8b4  stw 3, 284(31)
  035f8b8  ori 3, 30, 0
  035f8bc  addic 5, 1, 112
  035f8c0  li 4, 19
  035f8c4  bl 0xf1114
  035f8c8  nop
  035f8cc  lis 3, 151
  035f8d0  lfs 2, 116(1)
  035f8d4  addic 3, 3, -25376
  035f8d8  lfs 3, 112(1)
  035f8dc  lfs 1, 132(3)
  035f8e0  lfs 4, 128(3)
  035f8e4  fsubs 5, 2, 1
  035f8e8  fsubs 4, 3, 4
  035f8ec  lfs 1, 120(1)
  035f8f0  lfs 6, 136(3)
  035f8f4  lwz 3, 256(31)
  035f8f8  fsubs 6, 1, 6
  035f8fc  cmpwi 3, 0
  035f900  lbz 4, 188(30)
  035f904  lwz 3, 248(31)
  035f908  fmuls 5, 5, 5
  035f90c  fmadds 4, 4, 4, 5
  035f910  fmadds 4, 6, 6, 4
  035f914  fsqrts 4, 4
  035f918  bf 2, 0x35f9c4
  035f91c  lis 5, 54
  035f920  addi 5, 5, -2488
  035f924  lfs 5, 12(5)
  035f928  fcmpu 0, 4, 5
  035f92c  cror 6, 1, 2
  035f930  bt 6, 0x35f9c4
  035f934  lis 5, 54
  035f938  addi 5, 5, -2488
  035f93c  lfs 5, 16(5)
  035f940  fcmpu 0, 4, 5
  035f944  cror 6, 0, 2
  035f948  bt 6, 0x35f9c4
  035f94c  cmpwi 3, 0
  035f950  bf 2, 0x35ff34
  035f954  lwz 3, 292(31)
  035f958  cmpwi 3, 0
  035f95c  bf 2, 0x35ff34
  035f960  lis 3, 54
  035f964  vspltisw 2, -1
  035f968  li 5, 20
  035f96c  addi 3, 3, -2488
  035f970  lis 4, 114
  035f974  li 6, -3056
  035f978  vslw 2, 2, 2
  035f97c  lvlx 3, 5, 3
  035f980  li 3, 256
  035f984  vspltw 3, 3, 0
  035f988  lvlx 4, 6, 4
  035f98c  li 5, 5
  035f990  lfs 4, 124(1)
  035f994  li 4, 0
  035f998  vmaddfp 2, 4, 3, 2
  035f99c  vctsxs 2, 2, 0
  035f9a0  vspltw 2, 2, 0
  035f9a4  stvewx 2, 3, 31
  035f9a8  stfs 3, 128(31)
  035f9ac  stfs 2, 132(31)
  035f9b0  stfs 1, 136(31)
  035f9b4  stfs 4, 140(31)
  035f9b8  stb 4, 255(31)
  035f9bc  stb 5, 32(30)
  035f9c0  b 0x35ff34
  035f9c4  cmpwi 4, 3
  035f9c8  bf 2, 0x35fa50
  035f9cc  li 4, 4
  035f9d0  cmpwi 3, 0
  035f9d4  stb 4, 32(30)
  035f9d8  bf 2, 0x35ff34
  035f9dc  ori 3, 30, 0
  035f9e0  ori 4, 31, 0
  035f9e4  bl 0x35ebb8
  035f9e8  lis 3, 54
  035f9ec  vspltisw 2, -1
  035f9f0  lis 4, 114
  035f9f4  addi 3, 3, -2488
  035f9f8  li 5, -3056
  035f9fc  li 6, 248
  035fa00  vslw 2, 2, 2
  035fa04  lvlx 3, 0, 3
  035fa08  li 7, 24
  035fa0c  lvlx 4, 5, 4
  035fa10  vspltw 3, 3, 0
  035fa14  li 8, 292
  035fa18  vmaddfp 2, 4, 3, 2
  035fa1c  vspltisw 3, -1
  035fa20  vslw 3, 3, 3
  035fa24  vctsxs 2, 2, 0
  035fa28  vspltw 2, 2, 0
  035fa2c  stvewx 2, 6, 31
  035fa30  lvlx 2, 7, 3
  035fa34  lvlx 4, 5, 4
  035fa38  vspltw 2, 2, 0
  035fa3c  vmaddfp 2, 4, 2, 3
  035fa40  vctsxs 2, 2, 0
  035fa44  vspltw 2, 2, 0
  035fa48  stvewx 2, 8, 31
  035fa4c  b 0x35ff34
  035fa50  cmpwi 3, 0
  035fa54  bf 2, 0x35ff34
  035fa58  addic 3, 31, 253
  035fa5c  bl 0x5000b4
  035fa60  nop
  035fa64  ori 4, 3, 0
  035fa68  lbz 3, 254(31)
  035fa6c  cmpwi 4, 0
  035fa70  bt 2, 0x35fb0c
  035fa74  lwz 4, 292(31)
  035fa78  cmpwi 4, 0
  035fa7c  bf 2, 0x35fb0c
  035fa80  xori 3, 3, 1
  035fa84  cmpwi 3, 0
  035fa88  stb 3, 254(31)
  035fa8c  bf 2, 0x35fab0
  035fa90  li 3, 4
  035fa94  li 4, 6
  035fa98  bl 0xfe484
  035fa9c  nop
  035faa0  li 4, 4
  035faa4  stb 3, 253(31)
  035faa8  stb 4, 32(30)
  035faac  b 0x35facc
  035fab0  li 3, 20
  035fab4  li 4, 50
  035fab8  bl 0xfe484
  035fabc  nop
  035fac0  li 4, 3
  035fac4  stb 3, 253(31)
  035fac8  stb 4, 32(30)
  035facc  lis 3, 54
  035fad0  vspltisw 2, -1
  035fad4  li 5, 24
  035fad8  addi 3, 3, -2488
  035fadc  lis 4, 114
  035fae0  li 6, -3056
  035fae4  vslw 2, 2, 2
  035fae8  lvlx 3, 5, 3
  035faec  li 3, 248
  035faf0  vspltw 3, 3, 0
  035faf4  lvlx 4, 6, 4
  035faf8  vmaddfp 2, 4, 3, 2
  035fafc  vctsxs 2, 2, 0
  035fb00  vspltw 2, 2, 0
  035fb04  stvewx 2, 3, 31
  035fb08  b 0x35ff34
  035fb0c  cmpwi 3, 0
  035fb10  bf 2, 0x35fb88
  035fb14  ori 3, 30, 0
  035fb18  ori 4, 31, 0
  035fb1c  bl 0x35ebb8
  035fb20  lis 3, 54
  035fb24  vspltisw 2, -1
  035fb28  lis 4, 114
  035fb2c  addi 3, 3, -2488
  035fb30  li 5, -3056
  035fb34  vslw 2, 2, 2
  035fb38  li 6, 248
  035fb3c  lvlx 3, 0, 3
  035fb40  lvlx 4, 5, 4
  035fb44  vspltw 3, 3, 0
  035fb48  li 7, 24
  035fb4c  vmaddfp 2, 4, 3, 2
  035fb50  vspltisw 3, -1
  035fb54  li 8, 292
  035fb58  vslw 3, 3, 3
  035fb5c  vctsxs 2, 2, 0
  035fb60  vspltw 2, 2, 0
  035fb64  stvewx 2, 6, 31
  035fb68  lvlx 2, 7, 3
  035fb6c  lvlx 4, 5, 4
  035fb70  vspltw 2, 2, 0
  035fb74  vmaddfp 2, 4, 2, 3
  035fb78  vctsxs 2, 2, 0
  035fb7c  vspltw 2, 2, 0
  035fb80  stvewx 2, 8, 31
  035fb84  b 0x35ff34
  035fb88  ori 3, 30, 0
  035fb8c  ori 4, 31, 0
  035fb90  bl 0x35ed70
  035fb94  lis 3, 54
  035fb98  vspltisw 2, -1
  035fb9c  li 5, 28
  035fba0  addi 3, 3, -2488
  035fba4  lis 4, 114
  035fba8  li 6, -3056
  035fbac  vslw 2, 2, 2
  035fbb0  li 7, 32
  035fbb4  lvlx 3, 5, 3
  035fbb8  li 5, 248
  035fbbc  vspltw 3, 3, 0
  035fbc0  lvlx 4, 6, 4
  035fbc4  vmaddfp 2, 4, 3, 2
  035fbc8  vspltisw 3, -1
  035fbcc  li 8, 292
  035fbd0  vslw 3, 3, 3
  035fbd4  vctsxs 2, 2, 0
  035fbd8  vspltw 2, 2, 0
  035fbdc  stvewx 2, 5, 31
  035fbe0  lvlx 2, 7, 3
  035fbe4  lvlx 4, 6, 4
  035fbe8  vspltw 2, 2, 0
  035fbec  vmaddfp 2, 4, 2, 3
  035fbf0  vctsxs 2, 2, 0
  035fbf4  vspltw 2, 2, 0
  035fbf8  stvewx 2, 8, 31
  035fbfc  b 0x35ff34
  035fc00  lwz 3, 256(31)
  035fc04  cmpwi 3, 0
  035fc08  bf 2, 0x35fca0
  035fc0c  lwz 3, 292(31)
  035fc10  cmpwi 3, 0
  035fc14  bf 2, 0x35ff34
  035fc18  lis 3, 54
  035fc1c  li 4, 20
  035fc20  vspltisw 2, -1
  035fc24  addi 6, 3, -2488
  035fc28  lis 7, 114
  035fc2c  li 8, -3056
  035fc30  vslw 2, 2, 2
  035fc34  lvlx 3, 4, 6
  035fc38  li 9, 256
  035fc3c  vspltw 3, 3, 0
  035fc40  li 10, 24
  035fc44  lvlx 4, 8, 7
  035fc48  li 11, 248
  035fc4c  vmaddfp 2, 4, 3, 2
  035fc50  vspltisw 3, -1
  035fc54  li 12, 4
  035fc58  li 3, 5
  035fc5c  vslw 3, 3, 3
  035fc60  li 4, 0
  035fc64  ori 5, 30, 0
  035fc68  vctsxs 2, 2, 0
  035fc6c  vspltw 2, 2, 0
  035fc70  stvewx 2, 9, 31
  035fc74  lvlx 2, 10, 6
  035fc78  lvlx 4, 8, 7
  035fc7c  vspltw 2, 2, 0
  035fc80  vmaddfp 2, 4, 2, 3
  035fc84  vctsxs 2, 2, 0
  035fc88  vspltw 2, 2, 0
  035fc8c  stvewx 2, 11, 31
  035fc90  stb 12, 32(30)
  035fc94  bl 0x15d12c
  035fc98  nop
  035fc9c  b 0x35ff34
  035fca0  lbz 3, 255(31)
  035fca4  cmpwi 3, 1
  035fca8  bf 2, 0x35ff34
  035fcac  lwz 3, 248(31)
  035fcb0  cmpwi 3, 0
  035fcb4  bf 2, 0x35ff34
  035fcb8  ori 3, 30, 0
  035fcbc  ori 4, 31, 0
  035fcc0  bl 0x35ebb8
  035fcc4  lis 3, 54
  035fcc8  vspltisw 2, -1
  035fccc  lis 4, 114
  035fcd0  addi 3, 3, -2488
  035fcd4  li 5, -3056
  035fcd8  li 6, 248
  035fcdc  vslw 2, 2, 2
  035fce0  lvlx 3, 0, 3
  035fce4  li 7, 24
  035fce8  lvlx 4, 5, 4
  035fcec  vspltw 3, 3, 0
  035fcf0  li 8, 292
  035fcf4  vmaddfp 2, 4, 3, 2
  035fcf8  vspltisw 3, -1
  035fcfc  vslw 3, 3, 3
  035fd00  vctsxs 2, 2, 0
  035fd04  vspltw 2, 2, 0
  035fd08  stvewx 2, 6, 31
  035fd0c  lvlx 2, 7, 3
  035fd10  lvlx 4, 5, 4
  035fd14  vspltw 2, 2, 0
  035fd18  vmaddfp 2, 4, 2, 3
  035fd1c  vctsxs 2, 2, 0
  035fd20  vspltw 2, 2, 0
  035fd24  stvewx 2, 8, 31
  035fd28  b 0x35ff34
  035fd2c  addic 3, 31, 248
  035fd30  bl 0x4fff60
  035fd34  nop
  035fd38  cmpwi 3, 0
  035fd3c  bt 2, 0x35ff34
  035fd40  lbz 3, 188(30)
  035fd44  cmpwi 3, 2
  035fd48  bf 2, 0x35fe8c
  035fd4c  addic 3, 31, 253
  035fd50  bl 0x5000b4
  035fd54  nop
  035fd58  cmpwi 3, 0
  035fd5c  bt 2, 0x35fdec
  035fd60  lbz 3, 254(31)
  035fd64  xori 3, 3, 1
  035fd68  cmpwi 3, 0
  035fd6c  stb 3, 254(31)
  035fd70  bf 2, 0x35fd94
  035fd74  li 3, 4
  035fd78  li 4, 6
  035fd7c  bl 0xfe484
  035fd80  nop
  035fd84  li 4, 4
  035fd88  stb 3, 253(31)
  035fd8c  stb 4, 32(30)
  035fd90  b 0x35fdb0
  035fd94  li 3, 20
  035fd98  li 4, 50
  035fd9c  bl 0xfe484
  035fda0  nop
  035fda4  li 4, 3
  035fda8  stb 3, 253(31)
  035fdac  stb 4, 32(30)
  035fdb0  lis 3, 54
  035fdb4  vspltisw 2, -1
  035fdb8  lis 4, 114
  035fdbc  addi 3, 3, -2488
  035fdc0  li 5, -3056
  035fdc4  vslw 2, 2, 2
  035fdc8  lvlx 3, 0, 3
  035fdcc  lvlx 4, 5, 4
  035fdd0  vspltw 3, 3, 0
  035fdd4  li 3, 248
  035fdd8  vmaddfp 2, 4, 3, 2
  035fddc  vctsxs 2, 2, 0
  035fde0  vspltw 2, 2, 0
  035fde4  stvewx 2, 3, 31
  035fde8  b 0x35ff34
  035fdec  lbz 3, 254(31)
  035fdf0  cmpwi 3, 0
  035fdf4  bf 2, 0x35fe40
  035fdf8  ori 3, 30, 0
  035fdfc  ori 4, 31, 0
  035fe00  bl 0x35ebb8
  035fe04  lis 3, 54
  035fe08  vspltisw 2, -1
  035fe0c  lis 4, 114
  035fe10  addi 3, 3, -2488
  035fe14  li 5, -3056
  035fe18  vslw 2, 2, 2
  035fe1c  lvlx 3, 0, 3
  035fe20  lvlx 4, 5, 4
  035fe24  vspltw 3, 3, 0
  035fe28  li 3, 248
  035fe2c  vmaddfp 2, 4, 3, 2
  035fe30  vctsxs 2, 2, 0
  035fe34  vspltw 2, 2, 0
  035fe38  stvewx 2, 3, 31
  035fe3c  b 0x35ff34
  035fe40  ori 3, 30, 0
  035fe44  ori 4, 31, 0
  035fe48  bl 0x35ed70
  035fe4c  lis 3, 54
  035fe50  li 4, 28
  035fe54  vspltisw 2, -1
  035fe58  addi 3, 3, -2488
  035fe5c  lis 5, 114
  035fe60  li 6, -3056
  035fe64  vslw 2, 2, 2
  035fe68  lvlx 3, 4, 3
  035fe6c  li 3, 248
  035fe70  vspltw 3, 3, 0
  035fe74  lvlx 4, 6, 5
  035fe78  vmaddfp 2, 4, 3, 2
  035fe7c  vctsxs 2, 2, 0
  035fe80  vspltw 2, 2, 0
  035fe84  stvewx 2, 3, 31
  035fe88  b 0x35ff34
  035fe8c  li 5, 3
  035fe90  ori 3, 30, 0
  035fe94  ori 4, 31, 0
  035fe98  stb 5, 32(30)
  035fe9c  bl 0x35ed70
  035fea0  lis 3, 54
  035fea4  li 4, 28
  035fea8  vspltisw 2, -1
  035feac  addi 3, 3, -2488
  035feb0  lis 5, 114
  035feb4  li 6, -3056
  035feb8  vslw 2, 2, 2
  035febc  lvlx 3, 4, 3
  035fec0  li 3, 248
  035fec4  vspltw 3, 3, 0
  035fec8  lvlx 4, 6, 5
  035fecc  vmaddfp 2, 4, 3, 2
  035fed0  vctsxs 2, 2, 0
  035fed4  vspltw 2, 2, 0
  035fed8  stvewx 2, 3, 31
  035fedc  b 0x35ff34
  035fee0  li 3, 3
  035fee4  stb 3, 32(30)
  035fee8  lbz 3, 270(31)
  035feec  cmpwi 3, 0
  035fef0  bt 1, 0x35ff34
  035fef4  li 6, 5
  035fef8  ori 3, 30, 0
  035fefc  ori 4, 31, 0
  035ff00  li 5, 27
  035ff04  stb 6, 188(30)
  035ff08  li 6, 2
  035ff0c  bl 0x35b790
  035ff10  lis 3, 151
  035ff14  li 4, 0
  035ff18  addic 3, 3, -25376
  035ff1c  lwz 3, 5616(3)
  035ff20  lwz 3, 120(3)
  035ff24  stw 4, 136(3)
  035ff28  stw 4, 236(3)
  035ff2c  stw 4, 140(3)
  035ff30  stw 4, 280(3)
  035ff34  ld 0, 160(1)
  035ff38  mtlr 0
  035ff3c  ld 30, 128(1)
  035ff40  ld 31, 136(1)
  035ff44  addi 1, 1, 144
  035ff48  blr

UpdateMoby_388:   # 0x35ffd8, 0x21d4 bytes
  035ffd8  stdu 1, -496(1)
  035ffdc  mflr 0
  035ffe0  std 0, 512(1)
  035ffe4  stfd 25, 440(1)
  035ffe8  stfd 26, 448(1)
  035ffec  stfd 27, 456(1)
  035fff0  stfd 28, 464(1)
  035fff4  stfd 29, 472(1)
  035fff8  stfd 30, 480(1)
  035fffc  stfd 31, 488(1)
  0360000  std 31, 432(1)
  0360004  std 29, 416(1)
  0360008  ori 31, 3, 0
  036000c  lis 4, 54
  0360010  std 30, 424(1)
  0360014  addi 29, 4, -180
  0360018  lwz 30, 120(31)
  036001c  lfs 31, 0(29)
  0360020  lfs 1, 32(30)
  0360024  std 28, 408(1)
  0360028  std 27, 400(1)
  036002c  std 26, 392(1)
  0360030  std 25, 384(1)
  0360034  std 24, 376(1)
  0360038  std 23, 368(1)
  036003c  std 22, 360(1)
  0360040  fmuls 1, 1, 31
  0360044  bl 0x502758
  0360048  nop
  036004c  lhz 4, 36(30)
  0360050  rlwinm 28, 3, 0, 16, 27
  0360054  extsh 4, 4
  0360058  extsw 4, 4
  036005c  std 4, 336(1)
  0360060  stw 28, 264(30)
  0360064  lfs 27, 4(29)
  0360068  lfd 1, 336(1)
  036006c  fcfid 1, 1
  0360070  frsp 1, 1
  0360074  fsubs 1, 1, 27
  0360078  fmuls 1, 1, 31
  036007c  bl 0x502758
  0360080  nop
  0360084  lwz 4, 32(30)
  0360088  cmpw 28, 3
  036008c  lfs 1, 32(30)
  0360090  srawi 5, 4, 31
  0360094  srwi 3, 5, 1
  0360098  xor 3, 3, 4
  036009c  subc 3, 3, 5
  03600a0  bt 0, 0x3600b0
  03600a4  lwz 4, 264(30)
  03600a8  ori 4, 4, 15
  03600ac  stw 4, 264(30)
  03600b0  ori 4, 3, 0
  03600b4  lis 5, 16128
  03600b8  li 3, 0
  03600bc  cmpw 4, 5
  03600c0  ori 24, 3, 0
  03600c4  bf 1, 0x360144
  03600c8  bl 0x502758
  03600cc  nop
  03600d0  lhz 4, 36(30)
  03600d4  lis 5, 10922
  03600d8  extsh 4, 4
  03600dc  ori 5, 5, 43691
  03600e0  mulhw 6, 5, 4
  03600e4  mulhw 8, 5, 4
  03600e8  srwi 7, 6, 31
  03600ec  mulhw 4, 5, 4
  03600f0  addc 6, 6, 7
  03600f4  srwi 7, 8, 31
  03600f8  divw 6, 3, 6
  03600fc  addc 5, 8, 7
  0360100  mullw 5, 6, 5
  0360104  srwi 6, 4, 31
  0360108  subc 3, 3, 5
  036010c  addc 4, 4, 6
  0360110  sldi 3, 3, 4
  0360114  li 6, 0
  0360118  divw 3, 3, 4
  036011c  extsw 4, 3
  0360120  lwz 7, 264(30)
  0360124  li 5, 0
  0360128  subc 4, 4, 6
  036012c  subc 5, 5, 3
  0360130  sradi 4, 4, 63
  0360134  and 4, 4, 5
  0360138  addc 3, 3, 4
  036013c  clrlwi 3, 3, 28
  0360140  addc 3, 7, 3
  0360144  stw 3, 264(30)
  0360148  lbz 3, 32(31)
  036014c  lwz 29, 36(31)
  0360150  cmpwi 3, 4
  0360154  cmpwi 1, 3, 0
  0360158  cmpwi 6, 3, -1
  036015c  cmpwi 7, 3, 1
  0360160  bt 1, 0x360180
  0360164  bt 5, 0x360170
  0360168  bf 25, 0x361bfc
  036016c  b 0x3601b0
  0360170  bf 29, 0x3603f8
  0360174  cmpwi 3, 2
  0360178  bf 1, 0x360578
  036017c  b 0x360760
  0360180  cmpwi 3, 7
  0360184  bt 1, 0x36019c
  0360188  cmpwi 3, 5
  036018c  bf 1, 0x360968
  0360190  cmpwi 3, 6
  0360194  bf 1, 0x361114
  0360198  b 0x3611d4
  036019c  cmpwi 3, 8
  03601a0  bf 1, 0x36172c
  03601a4  cmpwi 3, 9
  03601a8  bf 1, 0x3618a4
  03601ac  b 0x361bfc
  03601b0  lbz 3, 176(31)
  03601b4  cmpwi 3, 255
  03601b8  bt 2, 0x3601f8
  03601bc  lis 4, 151
  03601c0  lis 5, 161
  03601c4  addic 5, 5, -13692
  03601c8  lwz 4, -25488(4)
  03601cc  addc 3, 3, 5
  03601d0  slwi 4, 4, 4
  03601d4  clrldi 3, 3, 32
  03601d8  extsw 4, 4
  03601dc  lbzx 3, 3, 4
  03601e0  cmpwi 3, 255
  03601e4  bf 2, 0x3601f8
  03601e8  ori 3, 31, 0
  03601ec  bl 0xefb38
  03601f0  nop
  03601f4  b 0x362158
  03601f8  lis 3, 54
  03601fc  lfs 1, 36(29)
  0360200  ori 29, 24, 0
  0360204  addi 3, 3, -180
  0360208  lis 28, 132
  036020c  ori 26, 29, 0
  0360210  addic 28, 28, 2412
  0360214  addic 27, 30, 196
  0360218  lfs 2, 8(3)
  036021c  fmuls 1, 1, 2
  0360220  stfs 1, 44(31)
  0360224  slwi 25, 29, 2
  0360228  ori 4, 29, 0
  036022c  extsw 5, 25
  0360230  ori 3, 31, 0
  0360234  lwzx 5, 28, 5
  0360238  extsw 5, 5
  036023c  bl 0x3621c8
  0360240  nop
  0360244  addc 4, 25, 27
  0360248  addic 29, 29, 1
  036024c  clrldi 4, 4, 32
  0360250  extsw 29, 29
  0360254  cmpwi 29, 10
  0360258  stw 3, 0(4)
  036025c  bt 0, 0x360224
  0360260  lis 25, 165
  0360264  stw 31, 236(30)
  0360268  ori 29, 26, 0
  036026c  ori 27, 30, 0
  0360270  addic 25, 25, 7136
  0360274  lwz 3, 176(27)
  0360278  slwi 3, 3, 2
  036027c  extsw 28, 3
  0360280  lwzx 28, 25, 28
  0360284  addic 3, 28, 16
  0360288  lwz 4, 0(28)
  036028c  slwi 4, 4, 4
  0360290  addc 4, 28, 4
  0360294  clrldi 4, 4, 32
  0360298  bl 0x5e8548
  036029c  nop
  03602a0  fcmpu 0, 1, 27
  03602a4  cror 6, 1, 2
  03602a8  bt 6, 0x3602b8
  03602ac  lwz 3, 0(28)
  03602b0  addic 3, 3, -1
  03602b4  stw 3, 0(28)
  03602b8  addic 29, 29, 1
  03602bc  addic 27, 27, 4
  03602c0  cmpwi 29, 5
  03602c4  bt 0, 0x360274
  03602c8  lis 3, 54
  03602cc  lis 4, 114
  03602d0  addi 3, 3, -180
  03602d4  lfs 1, 12(3)
  03602d8  lfs 2, -3052(4)
  03602dc  lfs 3, 16(3)
  03602e0  fmuls 1, 2, 1
  03602e4  fmuls 1, 1, 3
  03602e8  stfs 1, 172(30)
  03602ec  lfs 1, 72(31)
  03602f0  bl 0x5e8078
  03602f4  nop
  03602f8  lfs 2, 172(30)
  03602fc  fmuls 1, 1, 2
  0360300  stfs 1, 112(30)
  0360304  lfs 1, 72(31)
  0360308  bl 0x5e8128
  036030c  nop
  0360310  lfs 2, 172(30)
  0360314  lwz 3, 176(30)
  0360318  fmuls 1, 1, 2
  036031c  stw 24, 120(30)
  0360320  slwi 4, 3, 2
  0360324  addic 3, 31, 16
  0360328  extsw 4, 4
  036032c  lwzx 4, 25, 4
  0360330  addic 4, 4, 16
  0360334  stfs 1, 116(30)
  0360338  bl 0x5e7e98
  036033c  nop
  0360340  li 3, 1
  0360344  sth 26, 158(30)
  0360348  li 4, 255
  036034c  vspltisw 4, -16
  0360350  li 5, 36
  0360354  sth 3, 156(30)
  0360358  stb 4, 48(31)
  036035c  sth 4, 50(31)
  0360360  addi 4, 5, 16
  0360364  stb 26, 254(30)
  0360368  stb 26, 252(30)
  036036c  stb 3, 268(30)
  0360370  stb 3, 32(31)
  0360374  lvlx 2, 5, 30
  0360378  lvrx 3, 4, 30
  036037c  li 3, 8
  0360380  li 4, -1
  0360384  stw 26, 272(30)
  0360388  vor 2, 2, 3
  036038c  stb 3, 270(30)
  0360390  stw 4, 276(30)
  0360394  li 3, 32
  0360398  vsraw 2, 2, 4
  036039c  stw 4, 280(30)
  03603a0  stw 4, 284(30)
  03603a4  stw 4, 288(30)
  03603a8  vcfsx 2, 2, 0
  03603ac  sth 26, 312(30)
  03603b0  stb 26, 328(30)
  03603b4  stw 26, 316(30)
  03603b8  lwz 25, 260(30)
  03603bc  cmpwi 25, -1
  03603c0  vspltw 2, 2, 0
  03603c4  stvewx 2, 3, 30
  03603c8  bt 2, 0x3603e4
  03603cc  extsw 3, 25
  03603d0  li 4, 0
  03603d4  bl 0xc8b28
  03603d8  nop
  03603dc  li 3, -1
  03603e0  stw 3, 260(30)
  03603e4  lhz 3, 52(31)
  03603e8  stw 26, 148(31)
  03603ec  ori 3, 3, 65
  03603f0  sth 3, 52(31)
  03603f4  b 0x361bfc
  03603f8  lis 3, 151
  03603fc  addic 3, 3, -25376
  0360400  lwz 4, 8324(3)
  0360404  cmpwi 4, 50
  0360408  bf 2, 0x361bfc
  036040c  lwz 3, 5616(3)
  0360410  cmpwi 3, 0
  0360414  bt 2, 0x361bfc
  0360418  li 4, -66
  036041c  lhz 7, 52(31)
  0360420  lis 6, 132
  0360424  and 4, 7, 4
  0360428  li 5, 1023
  036042c  lwz 6, 2532(6)
  0360430  sth 4, 52(31)
  0360434  lwz 4, 16(29)
  0360438  sth 5, 50(31)
  036043c  stw 4, 148(31)
  0360440  lwz 29, 120(3)
  0360444  ori 3, 6, 0
  0360448  cmpwi 3, -1
  036044c  bf 2, 0x3604b8
  0360450  lis 3, 161
  0360454  lis 28, 132
  0360458  lis 4, -18933
  036045c  lis 5, -30584
  0360460  ori 4, 4, 24759
  0360464  lwz 3, -2344(3)
  0360468  ori 5, 5, 34953
  036046c  mulhw 5, 5, 3
  0360470  mulhw 6, 4, 3
  0360474  stw 3, 2532(28)
  0360478  addc 5, 5, 3
  036047c  addc 6, 6, 3
  0360480  lis 7, 101
  0360484  extsw 4, 3
  0360488  srawi 6, 6, 8
  036048c  srawi 5, 5, 5
  0360490  addic 3, 7, 26124
  0360494  srwi 7, 6, 31
  0360498  srwi 8, 5, 31
  036049c  addc 6, 6, 7
  03604a0  addc 5, 5, 8
  03604a4  extsw 6, 6
  03604a8  extsw 5, 5
  03604ac  bl 0x5cd098
  03604b0  nop
  03604b4  lwz 3, 2532(28)
  03604b8  lis 4, 161
  03604bc  lis 5, 27670
  03604c0  ori 5, 5, 49517
  03604c4  lwz 4, -2344(4)
  03604c8  subc 3, 4, 3
  03604cc  mulhwu 4, 5, 3
  03604d0  subc 3, 3, 4
  03604d4  srwi 3, 3, 1
  03604d8  addc 3, 3, 4
  03604dc  srwi 3, 3, 8
  03604e0  cmpwi 3, 40
  03604e4  cmpwi 1, 3, 25
  03604e8  bf 1, 0x36052c
  03604ec  lis 3, 101
  03604f0  addic 3, 3, 26164
  03604f4  bl 0x5cd098
  03604f8  nop
  03604fc  lis 3, 54
  0360500  li 4, 102
  0360504  addi 3, 3, -180
  0360508  li 5, 20
  036050c  li 6, 545
  0360510  sth 4, 36(30)
  0360514  li 4, 32
  0360518  lvlx 2, 5, 3
  036051c  vspltw 2, 2, 0
  0360520  stvewx 2, 4, 30
  0360524  stw 6, 312(29)
  0360528  b 0x36056c
  036052c  bf 5, 0x36056c
  0360530  lis 3, 101
  0360534  addic 3, 3, 26180
  0360538  bl 0x5cd098
  036053c  nop
  0360540  lis 3, 54
  0360544  li 4, 120
  0360548  addi 3, 3, -180
  036054c  li 5, 24
  0360550  li 6, 564
  0360554  sth 4, 36(30)
  0360558  li 4, 32
  036055c  lvlx 2, 5, 3
  0360560  vspltw 2, 2, 0
  0360564  stvewx 2, 4, 30
  0360568  stw 6, 312(29)
  036056c  li 3, 2
  0360570  stb 3, 32(31)
  0360574  b 0x361bfc
  0360578  lis 29, 151
  036057c  addic 29, 29, -25376
  0360580  lwz 3, 5616(29)
  0360584  cmpwi 3, 0
  0360588  bt 2, 0x36059c
  036058c  lhz 4, 166(3)
  0360590  cmpwi 4, 69
  0360594  bf 2, 0x36059c
  0360598  stb 24, 188(3)
  036059c  lhz 3, 36(30)
  03605a0  lis 5, 112
  03605a4  extsh 9, 3
  03605a8  li 3, 17
  03605ac  lis 6, 112
  03605b0  lis 4, 0
  03605b4  lis 7, 112
  03605b8  sldi 9, 9, 4
  03605bc  addic 8, 30, 264
  03605c0  addic 5, 5, 22176
  03605c4  addic 6, 6, 22216
  03605c8  addic 7, 7, 22632
  03605cc  ori 4, 4, 65535
  03605d0  addic 9, 9, 15
  03605d4  bl 0xc8444
  03605d8  nop
  03605dc  stw 3, 260(30)
  03605e0  lis 3, 54
  03605e4  lfs 1, 172(30)
  03605e8  lis 5, 114
  03605ec  addi 3, 3, -180
  03605f0  ori 4, 30, 0
  03605f4  li 6, 1
  03605f8  lfs 2, 12(3)
  03605fc  lfs 3, -3052(5)
  0360600  lfs 4, 16(3)
  0360604  li 5, 0
  0360608  fmsubs 2, 3, 2, 1
  036060c  ori 3, 31, 0
  0360610  fmadds 1, 2, 4, 1
  0360614  stfs 1, 172(30)
  0360618  bl 0x35c4f8
  036061c  cmpwi 3, 0
  0360620  bt 2, 0x361bfc
  0360624  li 3, 1
  0360628  lis 4, 132
  036062c  addic 4, 4, 2272
  0360630  stb 3, 188(31)
  0360634  lwz 5, 5616(29)
  0360638  li 3, 20
  036063c  lwz 5, 120(5)
  0360640  stw 24, 136(5)
  0360644  stw 24, 236(5)
  0360648  stw 24, 140(5)
  036064c  stw 24, 280(5)
  0360650  lbz 5, 188(31)
  0360654  slwi 5, 5, 2
  0360658  lwzx 4, 4, 5
  036065c  stb 4, 315(30)
  0360660  bl 0x5e7e18
  0360664  nop
  0360668  li 4, 3
  036066c  stw 3, 248(30)
  0360670  lis 29, 165
  0360674  addic 29, 29, 7136
  0360678  stb 4, 32(31)
  036067c  lbz 3, 315(30)
  0360680  lis 4, 54
  0360684  slwi 3, 3, 2
  0360688  addi 4, 4, -180
  036068c  addc 3, 30, 3
  0360690  clrldi 5, 3, 32
  0360694  addic 3, 31, 16
  0360698  lwz 5, 176(5)
  036069c  lfs 1, 28(4)
  03606a0  slwi 5, 5, 2
  03606a4  extsw 4, 5
  03606a8  lwzx 4, 29, 4
  03606ac  bl 0x1367d0
  03606b0  nop
  03606b4  sth 3, 156(30)
  03606b8  li 4, 7
  03606bc  li 3, 3
  03606c0  bl 0xfe484
  03606c4  nop
  03606c8  lbz 4, 315(30)
  03606cc  lhz 6, 156(30)
  03606d0  slwi 5, 4, 2
  03606d4  addc 6, 6, 3
  03606d8  addc 5, 30, 5
  03606dc  rlwinm 4, 4, 2, 22, 29
  03606e0  clrldi 3, 5, 32
  03606e4  addc 4, 30, 4
  03606e8  extsh 7, 6
  03606ec  clrldi 4, 4, 32
  03606f0  lwz 5, 176(3)
  03606f4  sth 6, 156(30)
  03606f8  slwi 5, 5, 2
  03606fc  extsw 5, 5
  0360700  lwzx 5, 29, 5
  0360704  lwz 4, 176(4)
  0360708  slwi 4, 4, 2
  036070c  lwz 5, 0(5)
  0360710  extsw 4, 4
  0360714  divw 5, 7, 5
  0360718  lwzx 4, 29, 4
  036071c  lwz 4, 0(4)
  0360720  mullw 4, 5, 4
  0360724  subc 4, 7, 4
  0360728  addic 5, 4, -1
  036072c  sth 4, 156(30)
  0360730  extsh 4, 5
  0360734  sth 5, 158(30)
  0360738  cmpwi 4, 0
  036073c  bf 0, 0x361bfc
  0360740  lwz 3, 176(3)
  0360744  slwi 3, 3, 2
  0360748  extsw 3, 3
  036074c  lwzx 3, 29, 3
  0360750  lwz 3, 0(3)
  0360754  addic 3, 3, -1
  0360758  sth 3, 158(30)
  036075c  b 0x361bfc
  0360760  lhz 3, 36(30)
  0360764  lis 4, 0
  0360768  extsh 9, 3
  036076c  li 3, 17
  0360770  lis 5, 112
  0360774  lis 6, 112
  0360778  lis 7, 112
  036077c  sldi 9, 9, 4
  0360780  ori 4, 4, 65535
  0360784  addic 8, 30, 264
  0360788  addic 5, 5, 22176
  036078c  addic 6, 6, 22216
  0360790  addic 7, 7, 22632
  0360794  addic 9, 9, 15
  0360798  bl 0xc8444
  036079c  nop
  03607a0  lis 4, 151
  03607a4  stw 3, 260(30)
  03607a8  addic 3, 4, -25376
  03607ac  lwz 3, 5616(3)
  03607b0  cmpwi 3, 0
  03607b4  bt 2, 0x3607c8
  03607b8  lhz 4, 166(3)
  03607bc  cmpwi 4, 69
  03607c0  bf 2, 0x3607c8
  03607c4  stb 24, 188(3)
  03607c8  ori 3, 31, 0
  03607cc  ori 4, 30, 0
  03607d0  bl 0x35f670
  03607d4  ori 3, 31, 0
  03607d8  lbz 5, 315(30)
  03607dc  ori 4, 30, 0
  03607e0  li 6, 1
  03607e4  bl 0x35ceb0
  03607e8  rlwinm 3, 3, 0, 30, 30
  03607ec  cmpwi 3, 0
  03607f0  bt 2, 0x360938
  03607f4  lis 29, 132
  03607f8  lbz 28, 188(31)
  03607fc  lbz 3, 315(30)
  0360800  addic 29, 29, 2272
  0360804  slwi 4, 28, 2
  0360808  lwzx 4, 29, 4
  036080c  cmpw 3, 4
  0360810  bt 2, 0x360938
  0360814  rlwinm 3, 28, 2, 22, 29
  0360818  lis 4, 54
  036081c  lis 28, 165
  0360820  addi 4, 4, -180
  0360824  addic 28, 28, 7136
  0360828  lwzx 3, 29, 3
  036082c  stb 3, 315(30)
  0360830  lbz 3, 188(31)
  0360834  slwi 3, 3, 2
  0360838  lwzx 3, 29, 3
  036083c  slwi 3, 3, 2
  0360840  addc 3, 30, 3
  0360844  clrldi 5, 3, 32
  0360848  addic 3, 31, 16
  036084c  lwz 5, 176(5)
  0360850  lfs 1, 28(4)
  0360854  slwi 5, 5, 2
  0360858  extsw 4, 5
  036085c  lwzx 4, 28, 4
  0360860  bl 0x1367d0
  0360864  nop
  0360868  sth 3, 156(30)
  036086c  li 4, 7
  0360870  li 3, 3
  0360874  bl 0xfe484
  0360878  nop
  036087c  lhz 4, 156(30)
  0360880  addc 3, 4, 3
  0360884  sth 3, 156(30)
  0360888  lbz 4, 188(31)
  036088c  slwi 5, 4, 2
  0360890  rlwinm 4, 4, 2, 22, 29
  0360894  extsh 3, 3
  0360898  lwzx 5, 29, 5
  036089c  lwzx 4, 29, 4
  03608a0  slwi 5, 5, 2
  03608a4  slwi 4, 4, 2
  03608a8  addc 5, 30, 5
  03608ac  addc 4, 30, 4
  03608b0  clrldi 5, 5, 32
  03608b4  clrldi 4, 4, 32
  03608b8  lwz 5, 176(5)
  03608bc  slwi 5, 5, 2
  03608c0  extsw 5, 5
  03608c4  lwzx 5, 28, 5
  03608c8  lwz 5, 0(5)
  03608cc  lwz 4, 176(4)
  03608d0  divw 5, 3, 5
  03608d4  slwi 4, 4, 2
  03608d8  extsw 4, 4
  03608dc  lwzx 4, 28, 4
  03608e0  lwz 4, 0(4)
  03608e4  mullw 4, 5, 4
  03608e8  subc 3, 3, 4
  03608ec  addic 4, 3, -1
  03608f0  extsh 5, 4
  03608f4  sth 3, 156(30)
  03608f8  cmpwi 5, 0
  03608fc  sth 4, 158(30)
  0360900  bf 0, 0x360938
  0360904  lbz 3, 188(31)
  0360908  slwi 3, 3, 2
  036090c  lwzx 3, 29, 3
  0360910  slwi 3, 3, 2
  0360914  addc 3, 30, 3
  0360918  clrldi 3, 3, 32
  036091c  lwz 3, 176(3)
  0360920  slwi 3, 3, 2
  0360924  extsw 3, 3
  0360928  lwzx 3, 28, 3
  036092c  lwz 3, 0(3)
  0360930  addic 3, 3, -1
  0360934  sth 3, 158(30)
  0360938  lbz 3, 188(31)
  036093c  cmpwi 3, 4
  0360940  bt 2, 0x360954
  0360944  ori 3, 31, 0
  0360948  ori 4, 30, 0
  036094c  bl 0x35d950
  0360950  b 0x361bfc
  0360954  addic 4, 30, 96
  0360958  ori 3, 31, 0
  036095c  bl 0x10c9a0
  0360960  nop
  0360964  b 0x361bfc
  0360968  lhz 3, 36(30)
  036096c  lis 5, 112
  0360970  lis 6, 112
  0360974  extsh 9, 3
  0360978  li 3, 17
  036097c  lis 4, 0
  0360980  lis 7, 112
  0360984  sldi 9, 9, 4
  0360988  addic 8, 30, 264
  036098c  addic 5, 5, 22176
  0360990  addic 6, 6, 22216
  0360994  addic 7, 7, 22632
  0360998  ori 4, 4, 65535
  036099c  addic 9, 9, 15
  03609a0  bl 0xc8444
  03609a4  nop
  03609a8  stw 3, 260(30)
  03609ac  ori 4, 30, 0
  03609b0  ori 3, 31, 0
  03609b4  bl 0x35f670
  03609b8  addic 5, 1, 208
  03609bc  ori 3, 31, 0
  03609c0  li 4, 19
  03609c4  bl 0xf1114
  03609c8  nop
  03609cc  lis 28, 151
  03609d0  addic 29, 30, 128
  03609d4  addic 28, 28, -25376
  03609d8  ori 3, 29, 0
  03609dc  addic 27, 28, 128
  03609e0  ori 4, 27, 0
  03609e4  bl 0x5e8548
  03609e8  nop
  03609ec  lwz 3, 284(30)
  03609f0  fmr 31, 1
  03609f4  cmpwi 3, -1
  03609f8  bt 2, 0x360a30
  03609fc  sldi 4, 3, 7
  0360a00  sldi 3, 3, 4
  0360a04  lis 5, 150
  0360a08  subc 3, 4, 3
  0360a0c  addic 5, 5, 14176
  0360a10  extsw 3, 3
  0360a14  addc 3, 5, 3
  0360a18  lwz 4, 136(3)
  0360a1c  cmpw 4, 31
  0360a20  bf 2, 0x360a30
  0360a24  lbz 3, 116(3)
  0360a28  cmpwi 3, 0
  0360a2c  bf 2, 0x360a50
  0360a30  li 6, -1
  0360a34  li 3, 4
  0360a38  li 4, 4
  0360a3c  ori 5, 31, 0
  0360a40  stw 6, 284(30)
  0360a44  bl 0x15d12c
  0360a48  nop
  0360a4c  stw 3, 284(30)
  0360a50  lbz 3, 255(30)
  0360a54  cmpwi 3, 1
  0360a58  bf 0, 0x360df0
  0360a5c  lwz 3, 5616(28)
  0360a60  cmpwi 3, 0
  0360a64  bt 2, 0x360a78
  0360a68  lhz 4, 166(3)
  0360a6c  cmpwi 4, 69
  0360a70  bf 2, 0x360a78
  0360a74  stb 24, 188(3)
  0360a78  lis 3, 54
  0360a7c  lis 4, 114
  0360a80  lfs 1, 172(30)
  0360a84  addi 3, 3, -180
  0360a88  fmr 5, 31
  0360a8c  lfs 2, 32(3)
  0360a90  lfs 3, -3052(4)
  0360a94  lfs 4, 16(3)
  0360a98  fmsubs 2, 3, 2, 1
  0360a9c  fmadds 1, 2, 4, 1
  0360aa0  stfs 1, 172(30)
  0360aa4  lfs 31, 36(3)
  0360aa8  fmuls 1, 3, 31
  0360aac  fcmpu 0, 5, 1
  0360ab0  cror 6, 0, 2
  0360ab4  bt 6, 0x360b04
  0360ab8  addic 26, 1, 192
  0360abc  ori 5, 29, 0
  0360ac0  ori 4, 27, 0
  0360ac4  ori 3, 26, 0
  0360ac8  bl 0x5e81f0
  0360acc  nop
  0360ad0  lis 5, 114
  0360ad4  ori 3, 26, 0
  0360ad8  ori 4, 26, 0
  0360adc  lfs 1, -3052(5)
  0360ae0  fmuls 1, 1, 31
  0360ae4  bl 0x5e7f98
  0360ae8  nop
  0360aec  ori 3, 29, 0
  0360af0  ori 4, 29, 0
  0360af4  ori 5, 26, 0
  0360af8  bl 0x5e7f54
  0360afc  nop
  0360b00  b 0x360b64
  0360b04  addic 3, 1, 192
  0360b08  ori 4, 27, 0
  0360b0c  bl 0x5e7e98
  0360b10  nop
  0360b14  li 3, 120
  0360b18  bl 0x5e7e18
  0360b1c  nop
  0360b20  lhz 4, 312(30)
  0360b24  stw 3, 248(30)
  0360b28  rlwinm 3, 4, 0, 29, 29
  0360b2c  cmpwi 3, 0
  0360b30  bf 2, 0x360b5c
  0360b34  ori 3, 31, 0
  0360b38  ori 4, 30, 0
  0360b3c  li 5, 23
  0360b40  li 6, 4
  0360b44  bl 0x35b790
  0360b48  cmpwi 3, 0
  0360b4c  bt 2, 0x360b5c
  0360b50  lhz 3, 312(30)
  0360b54  ori 3, 3, 4
  0360b58  sth 3, 312(30)
  0360b5c  li 3, 1
  0360b60  stb 3, 255(30)
  0360b64  ori 3, 31, 0
  0360b68  ori 4, 30, 0
  0360b6c  lbz 5, 315(30)
  0360b70  li 6, 1
  0360b74  bl 0x35c4f8
  0360b78  rlwinm 3, 3, 0, 30, 30
  0360b7c  cmpwi 3, 0
  0360b80  bt 2, 0x360cc8
  0360b84  lis 26, 132
  0360b88  lbz 25, 188(31)
  0360b8c  lbz 3, 315(30)
  0360b90  addic 26, 26, 2272
  0360b94  slwi 4, 25, 2
  0360b98  lwzx 4, 26, 4
  0360b9c  cmpw 3, 4
  0360ba0  bt 2, 0x360cc8
  0360ba4  rlwinm 3, 25, 2, 22, 29
  0360ba8  lis 4, 54
  0360bac  lis 25, 165
  0360bb0  addi 4, 4, -180
  0360bb4  addic 25, 25, 7136
  0360bb8  lwzx 3, 26, 3
  0360bbc  stb 3, 315(30)
  0360bc0  lbz 3, 188(31)
  0360bc4  slwi 3, 3, 2
  0360bc8  lwzx 3, 26, 3
  0360bcc  slwi 3, 3, 2
  0360bd0  addc 3, 30, 3
  0360bd4  clrldi 5, 3, 32
  0360bd8  addic 3, 31, 16
  0360bdc  lwz 5, 176(5)
  0360be0  lfs 1, 28(4)
  0360be4  slwi 5, 5, 2
  0360be8  extsw 4, 5
  0360bec  lwzx 4, 25, 4
  0360bf0  bl 0x1367d0
  0360bf4  nop
  0360bf8  sth 3, 156(30)
  0360bfc  li 4, 7
  0360c00  li 3, 3
  0360c04  bl 0xfe484
  0360c08  nop
  0360c0c  lhz 4, 156(30)
  0360c10  addc 3, 4, 3
  0360c14  sth 3, 156(30)
  0360c18  lbz 4, 188(31)
  0360c1c  slwi 5, 4, 2
  0360c20  rlwinm 4, 4, 2, 22, 29
  0360c24  extsh 3, 3
  0360c28  lwzx 5, 26, 5
  0360c2c  lwzx 4, 26, 4
  0360c30  slwi 5, 5, 2
  0360c34  slwi 4, 4, 2
  0360c38  addc 5, 30, 5
  0360c3c  addc 4, 30, 4
  0360c40  clrldi 5, 5, 32
  0360c44  clrldi 4, 4, 32
  0360c48  lwz 5, 176(5)
  0360c4c  slwi 5, 5, 2
  0360c50  extsw 5, 5
  0360c54  lwzx 5, 25, 5
  0360c58  lwz 5, 0(5)
  0360c5c  lwz 4, 176(4)
  0360c60  divw 5, 3, 5
  0360c64  slwi 4, 4, 2
  0360c68  extsw 4, 4
  0360c6c  lwzx 4, 25, 4
  0360c70  lwz 4, 0(4)
  0360c74  mullw 4, 5, 4
  0360c78  subc 3, 3, 4
  0360c7c  addic 4, 3, -1
  0360c80  extsh 5, 4
  0360c84  sth 3, 156(30)
  0360c88  cmpwi 5, 0
  0360c8c  sth 4, 158(30)
  0360c90  bf 0, 0x360cc8
  0360c94  lbz 3, 188(31)
  0360c98  slwi 3, 3, 2
  0360c9c  lwzx 3, 26, 3
  0360ca0  slwi 3, 3, 2
  0360ca4  addc 3, 30, 3
  0360ca8  clrldi 3, 3, 32
  0360cac  lwz 3, 176(3)
  0360cb0  slwi 3, 3, 2
  0360cb4  extsw 3, 3
  0360cb8  lwzx 3, 25, 3
  0360cbc  lwz 3, 0(3)
  0360cc0  addic 3, 3, -1
  0360cc4  sth 3, 158(30)
  0360cc8  addic 26, 1, 224
  0360ccc  addic 25, 1, 208
  0360cd0  ori 3, 26, 0
  0360cd4  ori 4, 29, 0
  0360cd8  ori 5, 25, 0
  0360cdc  bl 0x5e81f0
  0360ce0  nop
  0360ce4  lis 3, 54
  0360ce8  ori 4, 26, 0
  0360cec  addi 5, 3, -180
  0360cf0  ori 3, 26, 0
  0360cf4  lfs 1, 40(5)
  0360cf8  bl 0x5e7f98
  0360cfc  nop
  0360d00  ori 3, 26, 0
  0360d04  ori 4, 26, 0
  0360d08  ori 5, 25, 0
  0360d0c  bl 0x5e7f54
  0360d10  nop
  0360d14  ori 3, 26, 0
  0360d18  ori 4, 29, 0
  0360d1c  li 5, 0
  0360d20  ori 6, 31, 0
  0360d24  li 7, 0
  0360d28  bl 0x57820
  0360d2c  nop
  0360d30  cmpwi 3, 0
  0360d34  bt 2, 0x360d5c
  0360d38  lis 3, 161
  0360d3c  addic 3, 3, 2368
  0360d40  lwz 3, 24(3)
  0360d44  cmpwi 3, 0
  0360d48  bt 2, 0x360d58
  0360d4c  lhz 3, 166(3)
  0360d50  cmpwi 3, 212
  0360d54  bf 2, 0x360d5c
  0360d58  stw 24, 256(30)
  0360d5c  addic 26, 1, 240
  0360d60  ori 4, 29, 0
  0360d64  ori 3, 26, 0
  0360d68  bl 0x5e7e98
  0360d6c  nop
  0360d70  lis 3, 54
  0360d74  lis 4, 16256
  0360d78  addi 5, 3, -180
  0360d7c  ori 3, 26, 0
  0360d80  stw 4, 252(1)
  0360d84  lfs 31, 44(5)
  0360d88  fmr 1, 31
  0360d8c  bl 0x502910
  0360d90  nop
  0360d94  cmpwi 3, 0
  0360d98  bt 1, 0x360dbc
  0360d9c  lbz 3, 49(31)
  0360da0  cmpwi 3, 0
  0360da4  bf 2, 0x360dbc
  0360da8  lis 3, 101
  0360dac  addic 3, 3, 26196
  0360db0  bl 0x5cd098
  0360db4  nop
  0360db8  stw 24, 256(30)
  0360dbc  addic 3, 1, 224
  0360dc0  ori 4, 27, 0
  0360dc4  bl 0x5e8548
  0360dc8  nop
  0360dcc  fcmpu 0, 1, 31
  0360dd0  cror 6, 0, 2
  0360dd4  bt 6, 0x361084
  0360dd8  lis 3, 101
  0360ddc  addic 3, 3, 26228
  0360de0  bl 0x5cd098
  0360de4  nop
  0360de8  stw 24, 256(30)
  0360dec  b 0x361084
  0360df0  lfs 1, 128(28)
  0360df4  lfs 2, 16(31)
  0360df8  lfs 3, 132(28)
  0360dfc  fsubs 1, 1, 2
  0360e00  lfs 4, 20(31)
  0360e04  fsubs 2, 3, 4
  0360e08  bl 0x5e8338
  0360e0c  nop
  0360e10  fmr 31, 1
  0360e14  addic 26, 31, 16
  0360e18  ori 4, 27, 0
  0360e1c  ori 3, 26, 0
  0360e20  bl 0x5e8588
  0360e24  nop
  0360e28  lfs 2, 136(28)
  0360e2c  lfs 3, 24(31)
  0360e30  fsubs 2, 2, 3
  0360e34  bl 0x5e8338
  0360e38  nop
  0360e3c  ori 3, 31, 0
  0360e40  fneg 2, 1
  0360e44  ori 4, 30, 0
  0360e48  fmr 1, 31
  0360e4c  bl 0x35c3c8
  0360e50  lwz 3, 5616(28)
  0360e54  cmpwi 3, 0
  0360e58  bt 2, 0x360e70
  0360e5c  lhz 4, 166(3)
  0360e60  cmpwi 4, 69
  0360e64  bf 2, 0x360e70
  0360e68  li 4, 1
  0360e6c  stb 4, 188(3)
  0360e70  lis 3, 54
  0360e74  lfs 1, 172(30)
  0360e78  ori 4, 27, 0
  0360e7c  addi 25, 3, -180
  0360e80  ori 3, 26, 0
  0360e84  lfs 2, 48(25)
  0360e88  fmuls 1, 1, 2
  0360e8c  stfs 1, 172(30)
  0360e90  bl 0x5e8548
  0360e94  nop
  0360e98  addic 23, 1, 272
  0360e9c  ori 3, 31, 0
  0360ea0  li 4, 19
  0360ea4  ori 5, 23, 0
  0360ea8  bl 0xf1114
  0360eac  nop
  0360eb0  addic 22, 1, 256
  0360eb4  ori 4, 29, 0
  0360eb8  ori 3, 22, 0
  0360ebc  ori 5, 23, 0
  0360ec0  bl 0x5e81f0
  0360ec4  nop
  0360ec8  lfs 31, 32(25)
  0360ecc  ori 3, 22, 0
  0360ed0  ori 4, 22, 0
  0360ed4  fmr 1, 31
  0360ed8  bl 0x5e7f98
  0360edc  nop
  0360ee0  ori 3, 22, 0
  0360ee4  ori 4, 22, 0
  0360ee8  ori 5, 23, 0
  0360eec  bl 0x5e7f54
  0360ef0  nop
  0360ef4  addic 3, 1, 192
  0360ef8  ori 4, 22, 0
  0360efc  ori 5, 29, 0
  0360f00  bl 0x5e81f0
  0360f04  nop
  0360f08  ori 3, 22, 0
  0360f0c  ori 4, 27, 0
  0360f10  bl 0x5e8548
  0360f14  nop
  0360f18  fcmpu 0, 1, 31
  0360f1c  bt 2, 0x360f68
  0360f20  lis 3, 54
  0360f24  lis 4, 114
  0360f28  addi 3, 3, -180
  0360f2c  addic 27, 1, 192
  0360f30  lfs 2, 52(3)
  0360f34  lfs 3, -3052(4)
  0360f38  ori 3, 27, 0
  0360f3c  fmuls 2, 3, 2
  0360f40  ori 4, 27, 0
  0360f44  fsub 3, 2, 1
  0360f48  fsel 1, 3, 1, 2
  0360f4c  bl 0x5e7f98
  0360f50  nop
  0360f54  ori 3, 29, 0
  0360f58  ori 4, 29, 0
  0360f5c  ori 5, 27, 0
  0360f60  bl 0x5e7f54
  0360f64  nop
  0360f68  lwz 3, 5616(28)
  0360f6c  cmpwi 3, 0
  0360f70  bt 2, 0x361084
  0360f74  addic 3, 3, 16
  0360f78  ori 4, 29, 0
  0360f7c  bl 0x5e7e98
  0360f80  nop
  0360f84  lwz 3, 5616(28)
  0360f88  lfs 1, 16(31)
  0360f8c  lfs 2, 20(31)
  0360f90  lwz 29, 120(3)
  0360f94  lfs 3, 16(3)
  0360f98  lfs 4, 20(3)
  0360f9c  fsubs 1, 1, 3
  0360fa0  fsubs 2, 2, 4
  0360fa4  bl 0x5e8338
  0360fa8  nop
  0360fac  lfs 2, 56(29)
  0360fb0  bl 0x5025e0
  0360fb4  nop
  0360fb8  fmr 31, 1
  0360fbc  ori 4, 26, 0
  0360fc0  lwz 3, 5616(28)
  0360fc4  addic 3, 3, 16
  0360fc8  fabs 30, 31
  0360fcc  bl 0x5e8588
  0360fd0  nop
  0360fd4  lwz 3, 5616(28)
  0360fd8  lfs 2, 24(31)
  0360fdc  lfs 3, 24(3)
  0360fe0  fsubs 2, 2, 3
  0360fe4  bl 0x5e8338
  0360fe8  nop
  0360fec  lfs 2, 52(29)
  0360ff0  fneg 1, 1
  0360ff4  bl 0x5025e0
  0360ff8  nop
  0360ffc  lis 3, 54
  0361000  fmr 29, 1
  0361004  addi 3, 3, -180
  0361008  lfs 26, 56(3)
  036100c  lfs 25, 60(3)
  0361010  fcmpu 0, 30, 26
  0361014  fabs 28, 29
  0361018  cror 6, 0, 2
  036101c  bt 6, 0x36104c
  0361020  fsubs 1, 30, 26
  0361024  fmuls 1, 1, 25
  0361028  fmuls 1, 1, 31
  036102c  bl 0x10de78
  0361030  nop
  0361034  lfs 3, 56(29)
  0361038  fmr 2, 1
  036103c  fmr 1, 3
  0361040  bl 0x502578
  0361044  nop
  0361048  stfs 1, 56(29)
  036104c  fcmpu 0, 28, 26
  0361050  cror 6, 0, 2
  0361054  bt 6, 0x361084
  0361058  fsubs 1, 28, 26
  036105c  fmuls 1, 1, 25
  0361060  fmuls 1, 1, 29
  0361064  bl 0x10de78
  0361068  nop
  036106c  lfs 3, 52(29)
  0361070  fmr 2, 1
  0361074  fmr 1, 3
  0361078  bl 0x502578
  036107c  nop
  0361080  stfs 1, 52(29)
  0361084  lbz 3, 188(31)
  0361088  cmpwi 3, 4
  036108c  bt 2, 0x3610a0
  0361090  ori 3, 31, 0
  0361094  ori 4, 30, 0
  0361098  bl 0x35d950
  036109c  b 0x3610b0
  03610a0  addic 4, 30, 96
  03610a4  ori 3, 31, 0
  03610a8  bl 0x10c9a0
  03610ac  nop
  03610b0  lfs 1, 128(28)
  03610b4  lfs 31, 72(31)
  03610b8  lfs 2, 16(31)
  03610bc  lfs 3, 132(28)
  03610c0  fsubs 1, 1, 2
  03610c4  lfs 4, 20(31)
  03610c8  fsubs 2, 3, 4
  03610cc  bl 0x5e8338
  03610d0  nop
  03610d4  fmr 2, 1
  03610d8  fmr 1, 31
  03610dc  bl 0x5026a0
  03610e0  nop
  03610e4  lis 3, 54
  03610e8  addi 3, 3, -180
  03610ec  lfs 2, 64(3)
  03610f0  fcmpu 0, 1, 2
  03610f4  cror 6, 1, 2
  03610f8  bt 6, 0x361bfc
  03610fc  lis 3, 113
  0361100  ori 4, 31, 0
  0361104  addic 3, 3, -14536
  0361108  bl 0x6d720
  036110c  nop
  0361110  b 0x361bfc
  0361114  lis 3, 151
  0361118  addic 3, 3, -25376
  036111c  lwz 3, 5616(3)
  0361120  cmpwi 3, 0
  0361124  bt 2, 0x361138
  0361128  lhz 4, 166(3)
  036112c  cmpwi 4, 69
  0361130  bf 2, 0x361138
  0361134  stb 24, 188(3)
  0361138  ori 3, 31, 0
  036113c  ori 4, 30, 0
  0361140  lbz 5, 315(30)
  0361144  li 6, 1
  0361148  bl 0x35c4f8
  036114c  lis 3, 150
  0361150  addic 3, 3, 14024
  0361154  lwz 4, 92(3)
  0361158  cmpwi 4, 0
  036115c  bf 2, 0x361bfc
  0361160  lwz 3, 28(3)
  0361164  cmpwi 3, -1
  0361168  bf 2, 0x361bfc
  036116c  lhz 3, 312(30)
  0361170  extsh 3, 3
  0361174  cmpwi 3, 1
  0361178  bf 0, 0x361bfc
  036117c  lis 5, 268
  0361180  ori 3, 31, 0
  0361184  ori 4, 30, 0
  0361188  li 6, 1
  036118c  lwz 5, 20764(5)
  0361190  addic 5, 5, 29
  0361194  extsw 5, 5
  0361198  bl 0x35b790
  036119c  cmpwi 3, 0
  03611a0  bt 2, 0x361bfc
  03611a4  lis 3, 268
  03611a8  lwz 4, 20764(3)
  03611ac  lhz 5, 312(30)
  03611b0  addic 4, 4, 1
  03611b4  addic 5, 5, 1
  03611b8  srawi 6, 4, 2
  03611bc  addze 6, 6
  03611c0  sth 5, 312(30)
  03611c4  sldi 6, 6, 2
  03611c8  subc 4, 4, 6
  03611cc  stw 4, 20764(3)
  03611d0  b 0x361bfc
  03611d4  lis 3, 151
  03611d8  addic 3, 3, -25376
  03611dc  lwz 3, 5616(3)
  03611e0  cmpwi 3, 0
  03611e4  bt 2, 0x3611f8
  03611e8  lhz 4, 166(3)
  03611ec  cmpwi 4, 69
  03611f0  bf 2, 0x3611f8
  03611f4  stb 24, 188(3)
  03611f8  lwz 3, 248(30)
  03611fc  cmpwi 3, 1
  0361200  bf 2, 0x361228
  0361204  ori 3, 31, 0
  0361208  ori 4, 30, 0
  036120c  li 5, 8
  0361210  bl 0x35d190
  0361214  li 3, 7
  0361218  li 4, 0
  036121c  ori 5, 31, 0
  0361220  bl 0x15d12c
  0361224  nop
  0361228  addic 3, 30, 248
  036122c  bl 0x4fff60
  0361230  nop
  0361234  ori 3, 31, 0
  0361238  lbz 5, 315(30)
  036123c  ori 4, 30, 0
  0361240  li 6, 0
  0361244  bl 0x35c4f8
  0361248  cmpwi 3, 0
  036124c  bf 2, 0x361290
  0361250  lbz 4, 315(30)
  0361254  lhz 5, 156(30)
  0361258  lis 3, 165
  036125c  slwi 4, 4, 2
  0361260  addic 3, 3, 7136
  0361264  addc 4, 30, 4
  0361268  extsh 5, 5
  036126c  clrldi 4, 4, 32
  0361270  lwz 4, 176(4)
  0361274  slwi 4, 4, 2
  0361278  extsw 4, 4
  036127c  lwzx 3, 3, 4
  0361280  lwz 3, 0(3)
  0361284  addic 3, 3, -1
  0361288  cmpw 5, 3
  036128c  bt 0, 0x3612a8
  0361290  li 3, 180
  0361294  bl 0x5e7e18
  0361298  nop
  036129c  stw 3, 248(30)
  03612a0  li 3, 8
  03612a4  stb 3, 32(31)
  03612a8  lis 3, 54
  03612ac  lis 4, 114
  03612b0  lfs 1, 64(31)
  03612b4  addi 3, 3, -180
  03612b8  lfs 2, 68(3)
  03612bc  lfs 3, -3052(4)
  03612c0  fmuls 2, 3, 2
  03612c4  bl 0x502578
  03612c8  nop
  03612cc  stfs 1, 64(31)
  03612d0  lis 29, 165
  03612d4  lbz 3, 315(30)
  03612d8  lhz 5, 156(30)
  03612dc  rlwinm 4, 3, 2, 22, 29
  03612e0  slwi 3, 3, 2
  03612e4  addc 4, 30, 4
  03612e8  addc 3, 30, 3
  03612ec  clrldi 4, 4, 32
  03612f0  clrldi 3, 3, 32
  03612f4  addic 29, 29, 7136
  03612f8  extsh 5, 5
  03612fc  lwz 4, 176(4)
  0361300  addic 6, 5, 3
  0361304  lwz 3, 176(3)
  0361308  slwi 4, 4, 2
  036130c  slwi 3, 3, 2
  0361310  extsw 7, 4
  0361314  extsw 4, 3
  0361318  ori 3, 6, 0
  036131c  lwzx 7, 29, 7
  0361320  lwzx 4, 29, 4
  0361324  lwz 8, 0(7)
  0361328  addic 8, 8, -1
  036132c  cmpw 3, 8
  0361330  bt 0, 0x36133c
  0361334  lwz 3, 0(4)
  0361338  addic 3, 3, -1
  036133c  extsw 9, 8
  0361340  sldi 3, 3, 4
  0361344  subc 9, 6, 9
  0361348  subc 6, 6, 8
  036134c  sradi 9, 9, 63
  0361350  addc 3, 4, 3
  0361354  sldi 4, 5, 4
  0361358  and 5, 9, 6
  036135c  clrldi 3, 3, 32
  0361360  addc 5, 8, 5
  0361364  addc 4, 7, 4
  0361368  sldi 5, 5, 4
  036136c  clrldi 4, 4, 32
  0361370  lfs 1, 16(3)
  0361374  addc 3, 7, 5
  0361378  clrldi 3, 3, 32
  036137c  lfs 2, 16(4)
  0361380  lfs 3, 20(4)
  0361384  fsubs 1, 1, 2
  0361388  lfs 2, 20(3)
  036138c  fsubs 2, 2, 3
  0361390  bl 0x5e8338
  0361394  nop
  0361398  lbz 3, 315(30)
  036139c  lhz 5, 156(30)
  03613a0  slwi 4, 3, 2
  03613a4  rlwinm 3, 3, 2, 22, 29
  03613a8  fmr 31, 1
  03613ac  addc 4, 30, 4
  03613b0  addc 3, 30, 3
  03613b4  clrldi 4, 4, 32
  03613b8  clrldi 3, 3, 32
  03613bc  extsh 5, 5
  03613c0  lwz 4, 176(4)
  03613c4  lwz 3, 176(3)
  03613c8  slwi 4, 4, 2
  03613cc  slwi 3, 3, 2
  03613d0  extsw 4, 4
  03613d4  extsw 7, 3
  03613d8  lwzx 6, 29, 4
  03613dc  sldi 4, 5, 4
  03613e0  addc 3, 6, 4
  03613e4  addic 4, 5, 3
  03613e8  lwz 5, 0(6)
  03613ec  addic 3, 3, 16
  03613f0  addic 5, 5, -1
  03613f4  clrldi 3, 3, 32
  03613f8  cmpw 4, 5
  03613fc  lwzx 5, 29, 7
  0361400  bt 0, 0x36140c
  0361404  lwz 4, 0(5)
  0361408  addic 4, 4, -1
  036140c  sldi 4, 4, 4
  0361410  addc 4, 5, 4
  0361414  addic 4, 4, 16
  0361418  clrldi 4, 4, 32
  036141c  bl 0x5e8588
  0361420  nop
  0361424  lbz 3, 315(30)
  0361428  lhz 5, 156(30)
  036142c  rlwinm 4, 3, 2, 22, 29
  0361430  slwi 3, 3, 2
  0361434  addc 4, 30, 4
  0361438  addc 3, 30, 3
  036143c  clrldi 4, 4, 32
  0361440  clrldi 3, 3, 32
  0361444  extsh 5, 5
  0361448  lwz 4, 176(4)
  036144c  lwz 3, 176(3)
  0361450  slwi 4, 4, 2
  0361454  slwi 3, 3, 2
  0361458  extsw 6, 4
  036145c  extsw 4, 3
  0361460  addic 3, 5, 3
  0361464  lwzx 6, 29, 6
  0361468  lwzx 4, 29, 4
  036146c  lwz 7, 0(6)
  0361470  addic 7, 7, -1
  0361474  cmpw 3, 7
  0361478  bt 0, 0x361484
  036147c  lwz 3, 0(4)
  0361480  addic 3, 3, -1
  0361484  sldi 3, 3, 4
  0361488  sldi 5, 5, 4
  036148c  addc 3, 4, 3
  0361490  addc 4, 6, 5
  0361494  clrldi 3, 3, 32
  0361498  clrldi 4, 4, 32
  036149c  lfs 2, 24(3)
  03614a0  lfs 3, 24(4)
  03614a4  fsubs 2, 2, 3
  03614a8  bl 0x5e8338
  03614ac  nop
  03614b0  lis 3, 54
  03614b4  lis 29, 114
  03614b8  fneg 30, 1
  03614bc  addi 28, 3, -180
  03614c0  fmr 1, 31
  03614c4  lis 27, 114
  03614c8  addic 5, 30, 168
  03614cc  ori 3, 31, 0
  03614d0  lfs 29, 72(28)
  03614d4  lfs 28, 76(28)
  03614d8  lfs 3, -3048(29)
  03614dc  lfs 4, -3052(27)
  03614e0  fmuls 2, 3, 29
  03614e4  fmuls 3, 3, 28
  03614e8  fmuls 4, 4, 28
  03614ec  bl 0xff2e8
  03614f0  nop
  03614f4  lfs 1, 68(31)
  03614f8  addic 5, 30, 164
  03614fc  lfs 4, -3048(29)
  0361500  fmr 2, 30
  0361504  lfs 5, -3052(27)
  0361508  fmuls 3, 4, 29
  036150c  fmuls 4, 4, 28
  0361510  fmuls 5, 5, 28
  0361514  bl 0xff190
  0361518  nop
  036151c  stfs 1, 68(31)
  0361520  li 3, 17
  0361524  lfs 1, 80(28)
  0361528  lfs 2, 44(31)
  036152c  fmuls 1, 2, 1
  0361530  stfs 1, 44(31)
  0361534  lfs 1, 84(28)
  0361538  lfs 2, 172(30)
  036153c  fmuls 1, 2, 1
  0361540  stfs 1, 172(30)
  0361544  bl 0xfc620
  0361548  nop
  036154c  cmpwi 3, 0
  0361550  bf 2, 0x361658
  0361554  lis 3, 54
  0361558  addi 29, 3, -180
  036155c  lwz 3, 36(31)
  0361560  addic 27, 31, 192
  0361564  addic 28, 1, 304
  0361568  lfs 1, 88(29)
  036156c  lfs 2, 36(3)
  0361570  lfs 3, 44(31)
  0361574  fmuls 1, 2, 1
  0361578  fdivs 31, 3, 1
  036157c  lfs 1, 92(29)
  0361580  lfs 2, 96(29)
  0361584  bl 0xfcbe8
  0361588  nop
  036158c  ori 4, 27, 0
  0361590  ori 3, 28, 0
  0361594  fmuls 1, 1, 31
  0361598  bl 0x5e7f98
  036159c  nop
  03615a0  addic 27, 1, 288
  03615a4  addic 4, 31, 16
  03615a8  ori 3, 27, 0
  03615ac  ori 5, 28, 0
  03615b0  bl 0x5e7f54
  03615b4  nop
  03615b8  lfs 30, 100(29)
  03615bc  addic 26, 31, 208
  03615c0  lfs 29, 8(29)
  03615c4  fmr 1, 30
  03615c8  fmr 2, 29
  03615cc  bl 0xfcbe8
  03615d0  nop
  03615d4  ori 3, 28, 0
  03615d8  fmuls 1, 1, 31
  03615dc  ori 4, 26, 0
  03615e0  bl 0x5e7f98
  03615e4  nop
  03615e8  ori 3, 27, 0
  03615ec  ori 4, 27, 0
  03615f0  ori 5, 28, 0
  03615f4  bl 0x5e7f54
  03615f8  nop
  03615fc  fmr 1, 30
  0361600  addic 26, 31, 224
  0361604  fmr 2, 29
  0361608  bl 0xfcbe8
  036160c  nop
  0361610  fmuls 1, 1, 31
  0361614  ori 3, 28, 0
  0361618  ori 4, 26, 0
  036161c  bl 0x5e7f98
  0361620  nop
  0361624  ori 3, 27, 0
  0361628  ori 4, 27, 0
  036162c  ori 5, 28, 0
  0361630  bl 0x5e7f54
  0361634  nop
  0361638  lfs 1, 104(29)
  036163c  ori 3, 31, 0
  0361640  lfs 2, 108(29)
  0361644  ori 4, 27, 0
  0361648  fmuls 1, 31, 1
  036164c  li 6, -1
  0361650  bl 0x10fb28
  0361654  nop
  0361658  ori 3, 31, 0
  036165c  ori 4, 30, 0
  0361660  bl 0x35bcf0
  0361664  lis 3, 150
  0361668  addic 3, 3, 14024
  036166c  lwz 4, 92(3)
  0361670  cmpwi 4, 0
  0361674  bf 2, 0x361bfc
  0361678  lwz 3, 28(3)
  036167c  cmpwi 3, -1
  0361680  bf 2, 0x361bfc
  0361684  li 3, 420
  0361688  lwz 29, 248(30)
  036168c  bl 0x5e7e18
  0361690  nop
  0361694  cmpw 29, 3
  0361698  bf 0, 0x3616d8
  036169c  lwz 3, 316(30)
  03616a0  rlwinm 3, 3, 0, 0, 0
  03616a4  cmpwi 3, 0
  03616a8  bt 2, 0x3616d8
  03616ac  ori 3, 31, 0
  03616b0  ori 4, 30, 0
  03616b4  li 5, 35
  03616b8  li 6, 1
  03616bc  bl 0x35b790
  03616c0  cmpwi 3, 0
  03616c4  bt 2, 0x361bfc
  03616c8  lwz 3, 316(30)
  03616cc  clrlwi 3, 3, 1
  03616d0  stw 3, 316(30)
  03616d4  b 0x361bfc
  03616d8  li 3, 180
  03616dc  lwz 29, 248(30)
  03616e0  bl 0x5e7e18
  03616e4  nop
  03616e8  cmpw 29, 3
  03616ec  bf 0, 0x361bfc
  03616f0  lwz 3, 316(30)
  03616f4  rlwinm 3, 3, 0, 1, 1
  03616f8  cmpwi 3, 0
  03616fc  bt 2, 0x361bfc
  0361700  ori 3, 31, 0
  0361704  ori 4, 30, 0
  0361708  li 5, 36
  036170c  li 6, 1
  0361710  bl 0x35b790
  0361714  cmpwi 3, 0
  0361718  bt 2, 0x361bfc
  036171c  lwz 3, 316(30)
  0361720  rlwimi 3, 24, 0, 1, 1
  0361724  stw 3, 316(30)
  0361728  b 0x361bfc
  036172c  lis 3, 151
  0361730  addic 3, 3, -25376
  0361734  lwz 3, 5616(3)
  0361738  cmpwi 3, 0
  036173c  bt 2, 0x361750
  0361740  lhz 4, 166(3)
  0361744  cmpwi 4, 69
  0361748  bf 2, 0x361750
  036174c  stb 24, 188(3)
  0361750  lis 3, 54
  0361754  lfs 1, 64(31)
  0361758  addi 29, 3, -180
  036175c  lis 3, 114
  0361760  lfs 2, 68(29)
  0361764  lfs 3, -3052(3)
  0361768  fmuls 2, 3, 2
  036176c  bl 0x502578
  0361770  nop
  0361774  lis 4, 149
  0361778  stfs 1, 64(31)
  036177c  li 3, 30
  0361780  addic 4, 4, 5056
  0361784  lfs 1, 44(31)
  0361788  lfs 2, 344(4)
  036178c  stfs 2, 72(31)
  0361790  lfs 2, 340(4)
  0361794  stfs 2, 68(31)
  0361798  lfs 2, 112(29)
  036179c  fmuls 1, 1, 2
  03617a0  stfs 1, 44(31)
  03617a4  lwz 29, 248(30)
  03617a8  bl 0x5e7e18
  03617ac  nop
  03617b0  cmpw 29, 3
  03617b4  bf 2, 0x361820
  03617b8  lis 3, 54
  03617bc  li 7, 7
  03617c0  addi 3, 3, -180
  03617c4  li 10, 1
  03617c8  li 11, 5
  03617cc  li 6, -1
  03617d0  addic 4, 30, 112
  03617d4  lfs 1, 28(3)
  03617d8  lfs 3, 96(3)
  03617dc  li 5, 0
  03617e0  lfs 4, 88(3)
  03617e4  li 8, 30
  03617e8  lfs 6, 116(3)
  03617ec  li 9, 8
  03617f0  std 7, 144(1)
  03617f4  ori 3, 31, 0
  03617f8  std 10, 160(1)
  03617fc  fmr 2, 1
  0361800  std 11, 168(1)
  0361804  li 10, 32
  0361808  std 6, 176(1)
  036180c  fmr 5, 1
  0361810  std 24, 184(1)
  0361814  fmr 7, 1
  0361818  bl 0x10e030
  036181c  nop
  0361820  ori 3, 31, 0
  0361824  ori 4, 30, 0
  0361828  bl 0x35bcf0
  036182c  addic 3, 30, 248
  0361830  bl 0x4fff60
  0361834  nop
  0361838  cmpwi 3, 0
  036183c  bt 2, 0x361bfc
  0361840  lis 3, 164
  0361844  lwz 5, 308(30)
  0361848  li 4, 8
  036184c  slwi 5, 5, 8
  0361850  lwz 3, -28512(3)
  0361854  addc 3, 3, 5
  0361858  clrldi 3, 3, 32
  036185c  lhz 5, 52(3)
  0361860  stb 4, 32(3)
  0361864  ori 5, 5, 2
  0361868  sth 5, 52(3)
  036186c  lwz 3, 288(30)
  0361870  cmpwi 3, -1
  0361874  bt 2, 0x361884
  0361878  extsw 3, 3
  036187c  bl 0xda9e8
  0361880  nop
  0361884  lwz 3, 300(30)
  0361888  extsw 3, 3
  036188c  bl 0x3fbd4
  0361890  nop
  0361894  ori 3, 31, 0
  0361898  bl 0xefb38
  036189c  nop
  03618a0  b 0x362158
  03618a4  lwz 3, 240(30)
  03618a8  cmpwi 3, 0
  03618ac  bt 2, 0x3618bc
  03618b0  bl 0xefb38
  03618b4  nop
  03618b8  stw 24, 240(30)
  03618bc  lwz 3, 272(30)
  03618c0  cmpwi 3, 0
  03618c4  bt 2, 0x3618d4
  03618c8  bl 0xefb38
  03618cc  nop
  03618d0  stw 24, 272(30)
  03618d4  ori 29, 24, 0
  03618d8  ori 28, 30, 0
  03618dc  ori 27, 29, 0
  03618e0  lwz 3, 196(28)
  03618e4  cmpwi 3, 0
  03618e8  bt 2, 0x3618f8
  03618ec  bl 0xefb38
  03618f0  nop
  03618f4  stw 27, 196(28)
  03618f8  addic 29, 29, 1
  03618fc  addic 28, 28, 4
  0361900  cmpwi 29, 10
  0361904  bt 0, 0x3618e0
  0361908  lwz 3, 280(30)
  036190c  cmpwi 1, 3, -1
  0361910  bt 6, 0x361960
  0361914  bt 6, 0x361958
  0361918  sldi 4, 3, 7
  036191c  sldi 6, 3, 4
  0361920  lis 5, 150
  0361924  subc 4, 4, 6
  0361928  addic 5, 5, 14176
  036192c  extsw 4, 4
  0361930  addc 4, 5, 4
  0361934  lwz 5, 136(4)
  0361938  cmpw 5, 31
  036193c  bf 2, 0x361958
  0361940  lbz 4, 116(4)
  0361944  cmpwi 4, 0
  0361948  bt 2, 0x361958
  036194c  extsw 3, 3
  0361950  bl 0x15cdb0
  0361954  nop
  0361958  li 3, -1
  036195c  stw 3, 280(30)
  0361960  lwz 3, 276(30)
  0361964  cmpwi 1, 3, -1
  0361968  bt 6, 0x3619b8
  036196c  bt 6, 0x3619b0
  0361970  sldi 4, 3, 7
  0361974  sldi 6, 3, 4
  0361978  lis 5, 150
  036197c  subc 4, 4, 6
  0361980  addic 5, 5, 14176
  0361984  extsw 4, 4
  0361988  addc 4, 5, 4
  036198c  lwz 5, 136(4)
  0361990  cmpw 5, 31
  0361994  bf 2, 0x3619b0
  0361998  lbz 4, 116(4)
  036199c  cmpwi 4, 0
  03619a0  bt 2, 0x3619b0
  03619a4  extsw 3, 3
  03619a8  bl 0x15cdb0
  03619ac  nop
  03619b0  li 3, -1
  03619b4  stw 3, 276(30)
  03619b8  lwz 3, 284(30)
  03619bc  cmpwi 1, 3, -1
  03619c0  bt 6, 0x361a10
  03619c4  bt 6, 0x361a08
  03619c8  sldi 4, 3, 7
  03619cc  sldi 6, 3, 4
  03619d0  lis 5, 150
  03619d4  subc 4, 4, 6
  03619d8  addic 5, 5, 14176
  03619dc  extsw 4, 4
  03619e0  addc 4, 5, 4
  03619e4  lwz 5, 136(4)
  03619e8  cmpw 5, 31
  03619ec  bf 2, 0x361a08
  03619f0  lbz 4, 116(4)
  03619f4  cmpwi 4, 0
  03619f8  bt 2, 0x361a08
  03619fc  extsw 3, 3
  0361a00  bl 0x15cdb0
  0361a04  nop
  0361a08  li 3, -1
  0361a0c  stw 3, 284(30)
  0361a10  lwz 3, 288(30)
  0361a14  cmpwi 3, -1
  0361a18  bt 2, 0x361a28
  0361a1c  extsw 3, 3
  0361a20  bl 0xda9e8
  0361a24  nop
  0361a28  lwz 3, 260(30)
  0361a2c  cmpwi 3, -1
  0361a30  bt 2, 0x361a4c
  0361a34  extsw 3, 3
  0361a38  li 4, 0
  0361a3c  bl 0xc8b28
  0361a40  nop
  0361a44  li 3, -1
  0361a48  stw 3, 260(30)
  0361a4c  lis 4, 165
  0361a50  addic 3, 31, 16
  0361a54  addic 29, 4, 7136
  0361a58  lwz 4, 176(30)
  0361a5c  slwi 4, 4, 2
  0361a60  extsw 4, 4
  0361a64  lwzx 4, 29, 4
  0361a68  addic 4, 4, 16
  0361a6c  bl 0x5e7e98
  0361a70  nop
  0361a74  lwz 3, 176(30)
  0361a78  lfs 1, 16(31)
  0361a7c  slwi 3, 3, 2
  0361a80  lfs 2, 20(31)
  0361a84  extsw 3, 3
  0361a88  lwzx 3, 29, 3
  0361a8c  lfs 3, 32(3)
  0361a90  lfs 4, 36(3)
  0361a94  fsubs 1, 3, 1
  0361a98  fsubs 2, 4, 2
  0361a9c  bl 0x5e8338
  0361aa0  nop
  0361aa4  stfs 1, 72(31)
  0361aa8  sth 27, 156(30)
  0361aac  li 3, 1
  0361ab0  sth 27, 158(30)
  0361ab4  li 4, 113
  0361ab8  stw 24, 160(30)
  0361abc  li 5, 114
  0361ac0  stw 24, 164(30)
  0361ac4  li 6, 117
  0361ac8  stw 24, 168(30)
  0361acc  li 7, 118
  0361ad0  stw 24, 172(30)
  0361ad4  li 8, 119
  0361ad8  stw 24, 244(30)
  0361adc  stw 27, 248(30)
  0361ae0  stb 27, 252(30)
  0361ae4  stb 27, 253(30)
  0361ae8  stb 27, 254(30)
  0361aec  stb 27, 255(30)
  0361af0  stw 27, 256(30)
  0361af4  stb 3, 268(30)
  0361af8  stb 27, 269(30)
  0361afc  li 3, 115
  0361b00  stb 27, 270(30)
  0361b04  stb 27, 271(30)
  0361b08  stw 27, 292(30)
  0361b0c  sth 27, 312(30)
  0361b10  stb 27, 314(30)
  0361b14  stb 27, 315(30)
  0361b18  stw 27, 316(30)
  0361b1c  sth 27, 324(30)
  0361b20  sth 27, 326(30)
  0361b24  stb 27, 328(30)
  0361b28  stb 27, 188(31)
  0361b2c  stb 27, 112(30)
  0361b30  stbx 27, 30, 4
  0361b34  stbx 27, 30, 5
  0361b38  stbx 27, 30, 3
  0361b3c  li 4, 121
  0361b40  stb 27, 116(30)
  0361b44  li 5, 122
  0361b48  stbx 27, 30, 6
  0361b4c  li 3, 123
  0361b50  stbx 27, 30, 7
  0361b54  li 6, 125
  0361b58  stbx 27, 30, 8
  0361b5c  li 7, 126
  0361b60  stb 27, 120(30)
  0361b64  li 8, 127
  0361b68  stbx 27, 30, 4
  0361b6c  stbx 27, 30, 5
  0361b70  stbx 27, 30, 3
  0361b74  li 4, 129
  0361b78  stb 27, 124(30)
  0361b7c  li 5, 130
  0361b80  stbx 27, 30, 6
  0361b84  li 3, 131
  0361b88  stbx 27, 30, 7
  0361b8c  li 6, 133
  0361b90  stbx 27, 30, 8
  0361b94  li 7, 134
  0361b98  stb 27, 128(30)
  0361b9c  li 8, 135
  0361ba0  stbx 27, 30, 4
  0361ba4  stbx 27, 30, 5
  0361ba8  stbx 27, 30, 3
  0361bac  li 4, 137
  0361bb0  stb 27, 132(30)
  0361bb4  li 5, 138
  0361bb8  stbx 27, 30, 6
  0361bbc  li 3, 139
  0361bc0  stbx 27, 30, 7
  0361bc4  li 6, 141
  0361bc8  stbx 27, 30, 8
  0361bcc  li 7, 142
  0361bd0  stb 27, 136(30)
  0361bd4  li 8, 143
  0361bd8  stbx 27, 30, 4
  0361bdc  stbx 27, 30, 5
  0361be0  stbx 27, 30, 3
  0361be4  stb 27, 140(30)
  0361be8  stbx 27, 30, 6
  0361bec  stbx 27, 30, 7
  0361bf0  stbx 27, 30, 8
  0361bf4  stb 27, 32(31)
  0361bf8  b 0x362158
  0361bfc  lis 4, 54
  0361c00  lwz 5, 16(31)
  0361c04  lfs 2, 16(31)
  0361c08  lis 3, 16816
  0361c0c  addi 4, 4, -180
  0361c10  srawi 6, 5, 31
  0361c14  srwi 7, 6, 1
  0361c18  lfs 1, 120(4)
  0361c1c  xor 4, 7, 5
  0361c20  subc 4, 4, 6
  0361c24  cmpw 4, 3
  0361c28  bf 0, 0x361c34
  0361c2c  fmr 2, 1
  0361c30  stw 3, 16(31)
  0361c34  fmr 3, 2
  0361c38  lis 4, 54
  0361c3c  addi 4, 4, -180
  0361c40  lfs 2, 124(4)
  0361c44  fcmpu 0, 3, 2
  0361c48  cror 6, 0, 2
  0361c4c  bt 6, 0x361c5c
  0361c50  lis 4, 17530
  0361c54  ori 4, 4, 16384
  0361c58  stw 4, 16(31)
  0361c5c  lwz 4, 20(31)
  0361c60  lfs 3, 20(31)
  0361c64  srawi 5, 4, 31
  0361c68  srwi 6, 5, 1
  0361c6c  xor 4, 6, 4
  0361c70  subc 4, 4, 5
  0361c74  cmpw 4, 3
  0361c78  bf 0, 0x361c84
  0361c7c  fmr 3, 1
  0361c80  stw 3, 20(31)
  0361c84  fcmpu 0, 3, 2
  0361c88  cror 6, 0, 2
  0361c8c  bt 6, 0x361c9c
  0361c90  lis 4, 17530
  0361c94  ori 4, 4, 16384
  0361c98  stw 4, 20(31)
  0361c9c  lwz 4, 24(31)
  0361ca0  lfs 3, 24(31)
  0361ca4  srawi 5, 4, 31
  0361ca8  srwi 6, 5, 1
  0361cac  xor 4, 6, 4
  0361cb0  subc 4, 4, 5
  0361cb4  cmpw 4, 3
  0361cb8  bf 0, 0x361cc4
  0361cbc  fmr 3, 1
  0361cc0  stw 3, 24(31)
  0361cc4  fcmpu 0, 3, 2
  0361cc8  cror 6, 0, 2
  0361ccc  bt 6, 0x361cdc
  0361cd0  lis 3, 17530
  0361cd4  ori 3, 3, 16384
  0361cd8  stw 3, 24(31)
  0361cdc  lbz 3, 188(31)
  0361ce0  cmpwi 3, 4
  0361ce4  bf 2, 0x361d80
  0361ce8  lwz 3, 272(30)
  0361cec  cmpwi 3, 0
  0361cf0  bf 2, 0x361d08
  0361cf4  ori 3, 31, 0
  0361cf8  bl 0x354160
  0361cfc  nop
  0361d00  stw 3, 272(30)
  0361d04  b 0x361d1c
  0361d08  lbz 4, 32(3)
  0361d0c  cmpwi 4, 2
  0361d10  bf 1, 0x361d1c
  0361d14  li 4, 1
  0361d18  stb 4, 32(3)
  0361d1c  lwz 3, 280(30)
  0361d20  cmpwi 3, -1
  0361d24  bt 2, 0x361d5c
  0361d28  sldi 4, 3, 7
  0361d2c  sldi 3, 3, 4
  0361d30  lis 5, 150
  0361d34  subc 3, 4, 3
  0361d38  addic 5, 5, 14176
  0361d3c  extsw 3, 3
  0361d40  addc 3, 5, 3
  0361d44  lwz 4, 136(3)
  0361d48  cmpw 4, 31
  0361d4c  bf 2, 0x361d5c
  0361d50  lbz 3, 116(3)
  0361d54  cmpwi 3, 0
  0361d58  bf 2, 0x361e30
  0361d5c  li 6, -1
  0361d60  li 3, 6
  0361d64  li 4, 4
  0361d68  ori 5, 31, 0
  0361d6c  stw 6, 280(30)
  0361d70  bl 0x15d12c
  0361d74  nop
  0361d78  stw 3, 280(30)
  0361d7c  b 0x361e30
  0361d80  lwz 5, 272(30)
  0361d84  ori 4, 5, 0
  0361d88  cmpwi 4, 0
  0361d8c  bt 2, 0x361e30
  0361d90  lwz 3, 280(30)
  0361d94  cmpwi 1, 3, -1
  0361d98  bt 6, 0x361df0
  0361d9c  bt 6, 0x361de4
  0361da0  sldi 4, 3, 7
  0361da4  sldi 7, 3, 4
  0361da8  lis 6, 150
  0361dac  subc 4, 4, 7
  0361db0  addic 6, 6, 14176
  0361db4  extsw 4, 4
  0361db8  addc 4, 6, 4
  0361dbc  lwz 6, 136(4)
  0361dc0  cmpw 6, 31
  0361dc4  bf 2, 0x361de4
  0361dc8  lbz 4, 116(4)
  0361dcc  cmpwi 4, 0
  0361dd0  bt 2, 0x361de4
  0361dd4  extsw 3, 3
  0361dd8  bl 0x15cdb0
  0361ddc  nop
  0361de0  lwz 5, 272(30)
  0361de4  li 3, -1
  0361de8  ori 4, 5, 0
  0361dec  stw 3, 280(30)
  0361df0  cmpwi 4, 0
  0361df4  bt 2, 0x361e1c
  0361df8  lhz 3, 166(5)
  0361dfc  cmpwi 3, 352
  0361e00  bf 2, 0x361e1c
  0361e04  lbz 3, 32(5)
  0361e08  cmpwi 3, 254
  0361e0c  cmpwi 1, 3, 253
  0361e10  cmpwi 6, 3, 2
  0361e14  bt 2, 0x361e1c
  0361e18  bf 6, 0x361e24
  0361e1c  stw 24, 272(30)
  0361e20  b 0x361e30
  0361e24  bt 25, 0x361e30
  0361e28  li 3, 3
  0361e2c  stb 3, 32(5)
  0361e30  lbz 3, 32(31)
  0361e34  cmpwi 3, 1
  0361e38  bf 1, 0x361f8c
  0361e3c  ori 3, 31, 0
  0361e40  ori 4, 30, 0
  0361e44  bl 0x35bfb0
  0361e48  lbz 3, 32(31)
  0361e4c  cmpwi 3, 8
  0361e50  bf 2, 0x361e6c
  0361e54  li 3, 120
  0361e58  lwz 29, 248(30)
  0361e5c  bl 0x5e7e18
  0361e60  nop
  0361e64  cmpw 29, 3
  0361e68  bf 1, 0x361e78
  0361e6c  ori 3, 31, 0
  0361e70  ori 4, 30, 0
  0361e74  bl 0x35b9b0
  0361e78  lwz 3, 276(30)
  0361e7c  cmpwi 3, -1
  0361e80  bt 2, 0x361eb8
  0361e84  sldi 4, 3, 7
  0361e88  sldi 3, 3, 4
  0361e8c  lis 5, 150
  0361e90  subc 3, 4, 3
  0361e94  addic 5, 5, 14176
  0361e98  extsw 3, 3
  0361e9c  addc 3, 5, 3
  0361ea0  lwz 4, 136(3)
  0361ea4  cmpw 4, 31
  0361ea8  bf 2, 0x361eb8
  0361eac  lbz 3, 116(3)
  0361eb0  cmpwi 3, 0
  0361eb4  bf 2, 0x361ed8
  0361eb8  li 6, -1
  0361ebc  li 3, 0
  0361ec0  li 4, 4
  0361ec4  ori 5, 31, 0
  0361ec8  stw 6, 276(30)
  0361ecc  bl 0x15d12c
  0361ed0  nop
  0361ed4  stw 3, 276(30)
  0361ed8  addic 29, 1, 320
  0361edc  lis 4, 115
  0361ee0  ori 3, 29, 0
  0361ee4  addic 5, 31, 192
  0361ee8  addic 4, 4, 20640
  0361eec  bl 0x5e7d64
  0361ef0  nop
  0361ef4  lis 3, 54
  0361ef8  ori 4, 29, 0
  0361efc  addi 28, 3, -180
  0361f00  ori 3, 29, 0
  0361f04  lfs 1, 128(28)
  0361f08  bl 0x5e7f98
  0361f0c  nop
  0361f10  addic 4, 31, 16
  0361f14  ori 3, 29, 0
  0361f18  ori 5, 29, 0
  0361f1c  bl 0x5e81f0
  0361f20  nop
  0361f24  lis 4, 16968
  0361f28  lfs 1, 132(28)
  0361f2c  lwz 3, 288(30)
  0361f30  cmpwi 3, -1
  0361f34  stw 4, 332(1)
  0361f38  bf 2, 0x361f68
  0361f3c  lis 4, 54
  0361f40  fmr 4, 27
  0361f44  addic 3, 1, 320
  0361f48  addi 4, 4, -180
  0361f4c  lfs 2, 28(4)
  0361f50  lfs 3, 88(4)
  0361f54  lfs 5, 136(4)
  0361f58  bl 0xda4ac
  0361f5c  nop
  0361f60  stw 3, 288(30)
  0361f64  b 0x361f8c
  0361f68  lis 4, 162
  0361f6c  slwi 3, 3, 5
  0361f70  addic 5, 4, -8448
  0361f74  addic 4, 1, 320
  0361f78  addc 3, 5, 3
  0361f7c  clrldi 3, 3, 32
  0361f80  addic 3, 3, 16
  0361f84  bl 0x5e7e98
  0361f88  nop
  0361f8c  lis 3, 164
  0361f90  stb 24, 271(30)
  0361f94  lwz 4, 308(30)
  0361f98  slwi 4, 4, 8
  0361f9c  lwz 3, -28512(3)
  0361fa0  lbz 5, 32(31)
  0361fa4  addc 3, 3, 4
  0361fa8  cmpwi 5, 6
  0361fac  clrldi 3, 3, 32
  0361fb0  cmpwi 1, 3, 0
  0361fb4  bt 2, 0x362044
  0361fb8  bt 6, 0x361fe4
  0361fbc  lhz 4, 166(3)
  0361fc0  cmpwi 4, 69
  0361fc4  bf 2, 0x361fe4
  0361fc8  lbz 3, 32(3)
  0361fcc  cmpwi 1, 3, 253
  0361fd0  cmpwi 3, 254
  0361fd4  cror 2, 2, 6
  0361fd8  bt 2, 0x361fe4
  0361fdc  cmpwi 3, 7
  0361fe0  bf 2, 0x362044
  0361fe4  li 5, 6
  0361fe8  lis 7, 268
  0361fec  ori 3, 31, 0
  0361ff0  ori 4, 30, 0
  0361ff4  stb 5, 32(31)
  0361ff8  li 6, 1
  0361ffc  lwz 5, 20764(7)
  0362000  addic 5, 5, 29
  0362004  extsw 5, 5
  0362008  bl 0x35b790
  036200c  cmpwi 3, 0
  0362010  bt 2, 0x362040
  0362014  lis 3, 268
  0362018  li 4, 1
  036201c  lwz 5, 20764(3)
  0362020  sth 4, 312(30)
  0362024  addic 5, 5, 1
  0362028  srawi 6, 5, 2
  036202c  addze 6, 6
  0362030  sldi 4, 6, 2
  0362034  subc 4, 5, 4
  0362038  stw 4, 20764(3)
  036203c  b 0x362044
  0362040  sth 24, 312(30)
  0362044  lbz 3, 314(30)
  0362048  cmpwi 3, 0
  036204c  bt 2, 0x362094
  0362050  lis 3, 150
  0362054  addic 3, 3, 14024
  0362058  lhz 3, 102(3)
  036205c  cmpwi 3, 3
  0362060  bf 2, 0x36210c
  0362064  bl 0x11c830
  0362068  nop
  036206c  li 3, 360
  0362070  bl 0x5e7e18
  0362074  nop
  0362078  sth 3, 324(30)
  036207c  li 3, 60
  0362080  bl 0x5e7e18
  0362084  nop
  0362088  sth 3, 326(30)
  036208c  stb 24, 314(30)
  0362090  b 0x36210c
  0362094  lbz 3, 32(31)
  0362098  cmpwi 3, 6
  036209c  bt 2, 0x36210c
  03620a0  lis 3, 151
  03620a4  addic 3, 3, -25376
  03620a8  lwz 4, 8324(3)
  03620ac  cmpwi 4, 50
  03620b0  bf 2, 0x36210c
  03620b4  lwz 3, 5616(3)
  03620b8  cmpwi 3, 0
  03620bc  bt 2, 0x36210c
  03620c0  lhz 4, 166(3)
  03620c4  cmpwi 4, 69
  03620c8  bf 2, 0x36210c
  03620cc  lwz 3, 120(3)
  03620d0  lwz 3, 288(3)
  03620d4  cmpwi 1, 3, 10000
  03620d8  cmpwi 3, 0
  03620dc  crnand 2, 1, 4
  03620e0  bt 2, 0x36210c
  03620e4  li 3, 2
  03620e8  bl 0xfc620
  03620ec  nop
  03620f0  cmpwi 3, 0
  03620f4  bf 2, 0x36210c
  03620f8  ori 3, 31, 0
  03620fc  ori 4, 30, 0
  0362100  li 5, 3
  0362104  li 6, 9
  0362108  bl 0x35b790
  036210c  addic 3, 30, 324
  0362110  bl 0x4fffb4
  0362114  nop
  0362118  addic 3, 30, 326
  036211c  bl 0x4fffb4
  0362120  nop
  0362124  lbz 30, 32(31)
  0362128  cmpwi 30, 1
  036212c  bf 1, 0x362158
  0362130  cmpwi 30, 6
  0362134  bf 0, 0x362158
  0362138  lis 3, 151
  036213c  addic 3, 3, -25376
  0362140  lbz 3, 5647(3)
  0362144  clrlwi 3, 3, 31
  0362148  cmpwi 3, 0
  036214c  bt 2, 0x362158
  0362150  li 3, 9
  0362154  stb 3, 32(31)
  0362158  ld 0, 512(1)
  036215c  mtlr 0
  0362160  lfd 25, 440(1)
  0362164  lfd 26, 448(1)
  0362168  lfd 27, 456(1)
  036216c  lfd 28, 464(1)
  0362170  lfd 29, 472(1)
  0362174  lfd 30, 480(1)
  0362178  lfd 31, 488(1)
  036217c  ld 22, 360(1)
  0362180  ld 23, 368(1)
  0362184  ld 24, 376(1)
  0362188  ld 25, 384(1)
  036218c  ld 26, 392(1)
  0362190  ld 27, 400(1)
  0362194  ld 28, 408(1)
  0362198  ld 29, 416(1)
  036219c  ld 30, 424(1)
  03621a0  ld 31, 432(1)
  03621a4  addi 1, 1, 496
  03621a8  blr

M401_003621ac:   # 0x3621ac, 0x14 bytes
  03621ac  lis 3, 132
  03621b0  lis 4, 1
  03621b4  addic 3, 3, 2580
  03621b8  stw 4, 72(3)
  03621bc  blr
