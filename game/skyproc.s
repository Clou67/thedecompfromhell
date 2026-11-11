# game/skyproc.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

SECTION_HEADER_SKYPROC:   # 0x15aa0c, 0x14 bytes
  015aa0c  lis 3, 115
  015aa10  lis 4, 1
  015aa14  addic 3, 3, 6912
  015aa18  stw 4, 72(3)
  015aa1c  blr

SkySpriteProc:   # 0x15aa80, 0xadc bytes
  015aa80  stdu 1, -800(1)
  015aa84  mflr 0
  015aa88  std 0, 816(1)
  015aa8c  stfd 17, 680(1)
  015aa90  stfd 18, 688(1)
  015aa94  stfd 19, 696(1)
  015aa98  stfd 20, 704(1)
  015aa9c  stfd 21, 712(1)
  015aaa0  stfd 22, 720(1)
  015aaa4  stfd 23, 728(1)
  015aaa8  stfd 24, 736(1)
  015aaac  stfd 25, 744(1)
  015aab0  stfd 26, 752(1)
  015aab4  stfd 27, 760(1)
  015aab8  stfd 28, 768(1)
  015aabc  stfd 29, 776(1)
  015aac0  stfd 30, 784(1)
  015aac4  stfd 31, 792(1)
  015aac8  lis 3, 144
  015aacc  li 4, 160
  015aad0  li 5, 176
  015aad4  li 0, 336
  015aad8  lwz 3, 11932(3)
  015aadc  lvx 2, 4, 3
  015aae0  lvx 4, 5, 3
  015aae4  vspltw 3, 2, 0
  015aae8  li 4, 192
  015aaec  vspltw 5, 4, 0
  015aaf0  lis 5, 22
  015aaf4  vspltw 7, 2, 1
  015aaf8  vspltw 2, 2, 2
  015aafc  stvx 3, 1, 0
  015ab00  li 0, 336
  015ab04  lvx 3, 4, 3
  015ab08  lfs 1, 336(1)
  015ab0c  vspltw 6, 3, 0
  015ab10  addi 4, 5, -21984
  015ab14  vspltw 8, 3, 1
  015ab18  stvx 5, 1, 0
  015ab1c  li 0, 336
  015ab20  lfs 2, 336(1)
  015ab24  vspltw 5, 4, 1
  015ab28  fmuls 5, 2, 2
  015ab2c  vspltw 4, 4, 2
  015ab30  stvx 6, 1, 0
  015ab34  li 0, 336
  015ab38  lfs 3, 0(4)
  015ab3c  lfs 4, 336(1)
  015ab40  vspltw 3, 3, 2
  015ab44  stvx 7, 1, 0
  015ab48  li 0, 336
  015ab4c  lfs 6, 336(1)
  015ab50  fmadds 5, 1, 1, 5
  015ab54  stvx 5, 1, 0
  015ab58  li 0, 336
  015ab5c  lfs 7, 336(1)
  015ab60  fmuls 8, 7, 7
  015ab64  stvx 8, 1, 0
  015ab68  fmadds 5, 4, 4, 5
  015ab6c  li 0, 336
  015ab70  lfs 9, 336(1)
  015ab74  stvx 2, 1, 0
  015ab78  li 0, 336
  015ab7c  lfs 10, 336(1)
  015ab80  fmadds 8, 6, 6, 8
  015ab84  fsqrts 5, 5
  015ab88  stvx 4, 1, 0
  015ab8c  lfs 11, 336(1)
  015ab90  li 0, 336
  015ab94  stvx 3, 1, 0
  015ab98  std 26, 632(1)
  015ab9c  lfs 13, 336(1)
  015aba0  li 4, 32
  015aba4  std 31, 672(1)
  015aba8  lis 26, 161
  015abac  li 31, 0
  015abb0  li 0, 336
  015abb4  std 22, 600(1)
  015abb8  addic 26, 26, 24396
  015abbc  ori 22, 31, 0
  015abc0  fmuls 12, 11, 11
  015abc4  fmadds 8, 9, 9, 8
  015abc8  lvx 2, 4, 3
  015abcc  vspltw 3, 2, 0
  015abd0  fmadds 12, 10, 10, 12
  015abd4  fsqrts 8, 8
  015abd8  vspltw 4, 2, 1
  015abdc  stvx 3, 1, 0
  015abe0  li 0, 336
  015abe4  vspltw 2, 2, 2
  015abe8  fmadds 12, 13, 13, 12
  015abec  fdivs 0, 4, 5
  015abf0  fsqrts 12, 12
  015abf4  fdivs 31, 2, 5
  015abf8  fdivs 30, 1, 5
  015abfc  fdivs 29, 9, 8
  015ac00  fdivs 28, 7, 8
  015ac04  fdivs 27, 6, 8
  015ac08  fdivs 26, 13, 12
  015ac0c  fdivs 25, 11, 12
  015ac10  fdivs 24, 10, 12
  015ac14  fsub 23, 3, 5
  015ac18  fsub 22, 3, 5
  015ac1c  fsub 21, 3, 5
  015ac20  fsub 20, 5, 3
  015ac24  fsub 19, 5, 3
  015ac28  fsub 18, 3, 8
  015ac2c  fsub 5, 5, 3
  015ac30  fsub 17, 3, 8
  015ac34  fsel 4, 23, 4, 0
  015ac38  fsel 2, 22, 2, 31
  015ac3c  fsel 1, 21, 1, 30
  015ac40  fsub 23, 3, 8
  015ac44  fsub 22, 8, 3
  015ac48  fsel 9, 18, 9, 29
  015ac4c  fsub 21, 8, 3
  015ac50  fsel 7, 17, 7, 28
  015ac54  fsub 8, 8, 3
  015ac58  fsel 4, 20, 4, 0
  015ac5c  fsel 2, 19, 2, 31
  015ac60  fsel 1, 5, 1, 30
  015ac64  fsub 0, 3, 12
  015ac68  fsel 6, 23, 6, 27
  015ac6c  lfs 5, 336(1)
  015ac70  fsub 31, 3, 12
  015ac74  stvx 4, 1, 0
  015ac78  fsel 9, 22, 9, 29
  015ac7c  li 0, 336
  015ac80  fsel 7, 21, 7, 28
  015ac84  fsub 30, 3, 12
  015ac88  stfd 4, 560(1)
  015ac8c  stfd 2, 552(1)
  015ac90  stfd 1, 544(1)
  015ac94  fsub 2, 12, 3
  015ac98  fsel 4, 0, 13, 26
  015ac9c  fsel 1, 8, 6, 27
  015aca0  fsub 6, 12, 3
  015aca4  fsel 8, 31, 11, 25
  015aca8  stfd 9, 536(1)
  015acac  fsub 3, 12, 3
  015acb0  stfd 7, 528(1)
  015acb4  fsel 2, 2, 4, 26
  015acb8  lfs 4, 336(1)
  015acbc  stvx 2, 1, 0
  015acc0  stfd 1, 520(1)
  015acc4  std 23, 608(1)
  015acc8  fsel 1, 6, 8, 25
  015accc  lwz 23, 18512(26)
  015acd0  stfd 5, 584(1)
  015acd4  fsel 9, 30, 10, 24
  015acd8  stfd 2, 512(1)
  015acdc  stfd 1, 504(1)
  015ace0  stfd 4, 576(1)
  015ace4  lhz 3, 8(23)
  015ace8  lwz 23, 16(23)
  015acec  fsel 3, 3, 9, 24
  015acf0  lfs 1, 336(1)
  015acf4  cmpwi 3, 0
  015acf8  stfd 3, 496(1)
  015acfc  std 30, 664(1)
  015ad00  std 29, 656(1)
  015ad04  std 28, 648(1)
  015ad08  std 27, 640(1)
  015ad0c  std 25, 624(1)
  015ad10  std 24, 616(1)
  015ad14  std 21, 592(1)
  015ad18  stfd 1, 568(1)
  015ad1c  bf 1, 0x15b49c
  015ad20  lfd 1, 512(1)
  015ad24  lfd 2, 504(1)
  015ad28  lfd 3, 560(1)
  015ad2c  lfd 4, 552(1)
  015ad30  lfd 5, 544(1)
  015ad34  fmuls 7, 2, 3
  015ad38  fmuls 8, 1, 4
  015ad3c  lfd 6, 496(1)
  015ad40  fmuls 10, 1, 5
  015ad44  lfd 9, 536(1)
  015ad48  fmuls 12, 6, 3
  015ad4c  lfd 11, 528(1)
  015ad50  fmuls 0, 6, 4
  015ad54  lfd 13, 520(1)
  015ad58  fmuls 31, 2, 5
  015ad5c  fmuls 5, 6, 5
  015ad60  fmuls 4, 2, 4
  015ad64  fmuls 3, 1, 3
  015ad68  fmuls 30, 2, 9
  015ad6c  fmuls 29, 1, 11
  015ad70  fmuls 28, 1, 13
  015ad74  stfd 7, 488(1)
  015ad78  fmuls 7, 6, 9
  015ad7c  stfd 8, 480(1)
  015ad80  fmuls 8, 6, 11
  015ad84  stfd 10, 472(1)
  015ad88  fmuls 10, 2, 13
  015ad8c  stfd 12, 464(1)
  015ad90  fmuls 6, 6, 13
  015ad94  stfd 0, 456(1)
  015ad98  fmuls 2, 2, 11
  015ad9c  stfd 31, 448(1)
  015ada0  fmuls 1, 1, 9
  015ada4  stfd 5, 440(1)
  015ada8  stfd 4, 432(1)
  015adac  stfd 3, 424(1)
  015adb0  stfd 30, 416(1)
  015adb4  stfd 29, 408(1)
  015adb8  stfd 28, 400(1)
  015adbc  stfd 7, 392(1)
  015adc0  stfd 8, 384(1)
  015adc4  stfd 10, 376(1)
  015adc8  stfd 6, 368(1)
  015adcc  stfd 2, 360(1)
  015add0  stfd 1, 352(1)
  015add4  li 3, 1
  015add8  lbz 30, 3(23)
  015addc  std 3, 288(1)
  015ade0  std 30, 312(1)
  015ade4  lwz 3, 4(23)
  015ade8  stw 3, 252(1)
  015adec  stw 3, 248(1)
  015adf0  stw 3, 244(1)
  015adf4  stw 3, 240(1)
  015adf8  lbz 3, 2(23)
  015adfc  bl 0x15a2f4
  015ae00  nop
  015ae04  ori 25, 3, 0
  015ae08  std 25, 296(1)
  015ae0c  lbz 3, 2(23)
  015ae10  bl 0x15a2f4
  015ae14  nop
  015ae18  lis 4, 16256
  015ae1c  std 3, 304(1)
  015ae20  stw 22, 256(1)
  015ae24  lis 3, 22
  015ae28  stw 22, 272(1)
  015ae2c  addi 3, 3, -21984
  015ae30  stw 4, 264(1)
  015ae34  stw 4, 280(1)
  015ae38  stw 22, 260(1)
  015ae3c  stw 22, 268(1)
  015ae40  stw 4, 276(1)
  015ae44  stw 4, 284(1)
  015ae48  lbz 4, 0(23)
  015ae4c  lfs 13, 8(23)
  015ae50  cmpwi 4, 0
  015ae54  lfs 31, 4(3)
  015ae58  bf 2, 0x15ae68
  015ae5c  lis 3, 22
  015ae60  addi 3, 3, -21984
  015ae64  lfs 31, 8(3)
  015ae68  lis 3, 22
  015ae6c  addi 3, 3, -21984
  015ae70  li 4, 0
  015ae74  lfs 1, 12(3)
  015ae78  lfs 2, 16(3)
  015ae7c  fadds 1, 13, 1
  015ae80  lfs 3, 20(3)
  015ae84  lfs 4, 24(3)
  015ae88  lfs 5, 8(3)
  015ae8c  fmr 30, 5
  015ae90  fmuls 1, 1, 2
  015ae94  fmadds 1, 1, 3, 4
  015ae98  fmuls 29, 1, 30
  015ae9c  fmr 1, 29
  015aea0  bl 0x5dd914
  015aea4  nop
  015aea8  fmr 28, 1
  015aeac  li 4, 1
  015aeb0  fmr 1, 29
  015aeb4  bl 0x5dd914
  015aeb8  nop
  015aebc  lfd 2, 488(1)
  015aec0  lfd 3, 472(1)
  015aec4  lfd 4, 456(1)
  015aec8  fmuls 2, 28, 2
  015aecc  lfd 5, 544(1)
  015aed0  fmuls 4, 28, 4
  015aed4  lfd 6, 552(1)
  015aed8  fmuls 3, 28, 3
  015aedc  lfd 7, 432(1)
  015aee0  lfd 8, 560(1)
  015aee4  fmuls 7, 28, 7
  015aee8  lfd 9, 480(1)
  015aeec  lfd 10, 464(1)
  015aef0  fmadds 2, 1, 5, 2
  015aef4  fmadds 4, 1, 8, 4
  015aef8  fmadds 3, 1, 6, 3
  015aefc  lfd 5, 504(1)
  015af00  lfd 6, 496(1)
  015af04  lfd 11, 512(1)
  015af08  lfd 8, 448(1)
  015af0c  fmuls 5, 28, 5
  015af10  lfd 12, 440(1)
  015af14  fmuls 6, 28, 6
  015af18  lfd 13, 416(1)
  015af1c  fmuls 11, 28, 11
  015af20  lfd 0, 400(1)
  015af24  fmadds 7, 28, 12, 7
  015af28  fmuls 13, 28, 13
  015af2c  fnmsubs 2, 28, 9, 2
  015af30  lfd 9, 424(1)
  015af34  fnmsubs 4, 28, 8, 4
  015af38  lfd 8, 384(1)
  015af3c  fnmsubs 3, 28, 10, 3
  015af40  fmuls 10, 28, 0
  015af44  lfd 12, 520(1)
  015af48  fmuls 8, 28, 8
  015af4c  lfd 0, 528(1)
  015af50  lfd 29, 360(1)
  015af54  fmuls 29, 28, 29
  015af58  fmadds 7, 28, 9, 7
  015af5c  fmadds 12, 1, 12, 13
  015af60  lfd 9, 536(1)
  015af64  fmuls 13, 1, 2
  015af68  fmuls 25, 1, 4
  015af6c  lfd 26, 408(1)
  015af70  fmuls 27, 1, 3
  015af74  fmadds 10, 1, 0, 10
  015af78  fmadds 8, 1, 9, 8
  015af7c  lfd 0, 392(1)
  015af80  lfd 9, 376(1)
  015af84  lfd 24, 368(1)
  015af88  fnmsubs 12, 28, 26, 12
  015af8c  fmadds 13, 6, 7, 13
  015af90  lfd 26, 352(1)
  015af94  fmadds 27, 5, 7, 27
  015af98  fmadds 7, 11, 7, 25
  015af9c  fnmsubs 8, 28, 9, 8
  015afa0  fnmsubs 10, 28, 0, 10
  015afa4  fmadds 9, 28, 24, 29
  015afa8  fmuls 0, 1, 12
  015afac  fnmsubs 13, 11, 3, 13
  015afb0  fnmsubs 29, 6, 4, 27
  015afb4  fnmsubs 7, 5, 2, 7
  015afb8  fmuls 27, 1, 10
  015afbc  fmadds 9, 28, 26, 9
  015afc0  fmuls 1, 1, 8
  015afc4  lis 3, 16256
  015afc8  fmadds 4, 5, 4, 13
  015afcc  fmadds 2, 11, 2, 29
  015afd0  fmadds 3, 6, 3, 7
  015afd4  lis 4, 144
  015afd8  fmadds 7, 6, 9, 0
  015afdc  fmadds 13, 5, 9, 27
  015afe0  fmadds 1, 11, 9, 1
  015afe4  fmuls 4, 4, 31
  015afe8  fmuls 2, 2, 31
  015afec  fmuls 3, 3, 31
  015aff0  fnmsubs 7, 11, 10, 7
  015aff4  fnmsubs 9, 6, 8, 13
  015aff8  fnmsubs 1, 5, 12, 1
  015affc  lfs 13, 16(23)
  015b000  lfd 0, 584(1)
  015b004  lfd 29, 576(1)
  015b008  lfd 28, 568(1)
  015b00c  fadds 13, 13, 0
  015b010  lfs 0, 20(23)
  015b014  lfs 27, 24(23)
  015b018  fadds 0, 0, 29
  015b01c  fmadds 5, 5, 8, 7
  015b020  fmadds 7, 11, 12, 9
  015b024  fmadds 1, 6, 10, 1
  015b028  fadds 6, 27, 28
  015b02c  fnmsubs 8, 4, 30, 13
  015b030  fnmsubs 9, 2, 30, 0
  015b034  fmuls 5, 5, 31
  015b038  fmuls 7, 7, 31
  015b03c  fmuls 1, 1, 31
  015b040  fnmsubs 6, 3, 30, 6
  015b044  addic 24, 4, -23532
  015b048  lis 28, 144
  015b04c  li 5, 5
  015b050  fnmsubs 8, 5, 30, 8
  015b054  fnmsubs 9, 7, 30, 9
  015b058  fnmsubs 6, 1, 30, 6
  015b05c  fadds 10, 8, 4
  015b060  fadds 11, 9, 2
  015b064  stfs 8, 176(1)
  015b068  fadds 12, 6, 3
  015b06c  stfs 9, 180(1)
  015b070  stfs 6, 184(1)
  015b074  fadds 5, 10, 5
  015b078  fadds 6, 11, 7
  015b07c  stfs 10, 192(1)
  015b080  fadds 1, 12, 1
  015b084  stfs 11, 196(1)
  015b088  stfs 12, 200(1)
  015b08c  stw 3, 236(1)
  015b090  stw 3, 220(1)
  015b094  stw 3, 204(1)
  015b098  fsubs 5, 5, 4
  015b09c  fsubs 6, 6, 2
  015b0a0  fsubs 1, 1, 3
  015b0a4  fadds 4, 5, 4
  015b0a8  fadds 2, 6, 2
  015b0ac  stfs 5, 208(1)
  015b0b0  fadds 3, 1, 3
  015b0b4  stfs 6, 212(1)
  015b0b8  stfs 1, 216(1)
  015b0bc  stw 3, 188(1)
  015b0c0  stfs 4, 224(1)
  015b0c4  stfs 2, 228(1)
  015b0c8  stfs 3, 232(1)
  015b0cc  lwz 29, 28(26)
  015b0d0  lwz 24, 8(24)
  015b0d4  lwz 28, -23196(28)
  015b0d8  ori 4, 24, 0
  015b0dc  ori 3, 28, 0
  015b0e0  bl 0x4d83ec
  015b0e4  nop
  015b0e8  ori 3, 28, 0
  015b0ec  ori 4, 24, 0
  015b0f0  li 5, 6
  015b0f4  bl 0x4d82b8
  015b0f8  nop
  015b0fc  lis 3, 144
  015b100  li 4, 96
  015b104  li 5, 16
  015b108  lwz 3, -23488(3)
  015b10c  bl 0x4fe098
  015b110  nop
  015b114  li 21, 4
  015b118  ori 27, 3, 0
  015b11c  ori 4, 1, 0
  015b120  ori 5, 1, 0
  015b124  ori 6, 1, 0
  015b128  mtctr 21
  015b12c  lfs 1, 176(4)
  015b130  stfs 1, 0(3)
  015b134  lfs 1, 180(4)
  015b138  stfs 1, 4(3)
  015b13c  lfs 1, 184(4)
  015b140  addic 4, 4, 16
  015b144  stfs 1, 8(3)
  015b148  lfs 1, 256(5)
  015b14c  stfs 1, 12(3)
  015b150  lfs 1, 260(5)
  015b154  addic 5, 5, 8
  015b158  stfs 1, 16(3)
  015b15c  lwz 7, 240(6)
  015b160  addic 6, 6, 4
  015b164  rlwinm 8, 7, 8, 8, 15
  015b168  rlwimi 8, 7, 24, 0, 7
  015b16c  rlwimi 8, 7, 24, 16, 23
  015b170  rlwimi 8, 7, 8, 24, 31
  015b174  stw 8, 20(3)
  015b178  addic 3, 3, 24
  015b17c  bdnz 0x15b12c
  015b180  cmpdi 30, 0
  015b184  bt 2, 0x15b198
  015b188  ori 3, 24, 0
  015b18c  ori 4, 30, 0
  015b190  bl 0x4d5fe4
  015b194  nop
  015b198  addic 4, 1, 320
  015b19c  li 3, 1
  015b1a0  addic 5, 1, 324
  015b1a4  bl 0x4d6704
  015b1a8  nop
  015b1ac  sldi 3, 25, 5
  015b1b0  sldi 4, 25, 2
  015b1b4  lwz 6, 320(1)
  015b1b8  lwz 7, 324(1)
  015b1bc  addc 5, 3, 4
  015b1c0  ori 3, 24, 0
  015b1c4  addc 5, 29, 5
  015b1c8  li 4, 0
  015b1cc  clrldi 5, 5, 32
  015b1d0  bl 0x4d676c
  015b1d4  nop
  015b1d8  ori 3, 24, 0
  015b1dc  bl 0x4d6948
  015b1e0  nop
  015b1e4  lis 3, 4
  015b1e8  lwz 4, 8(24)
  015b1ec  li 5, 6194
  015b1f0  ori 3, 3, 5952
  015b1f4  lis 6, 4
  015b1f8  lis 7, -32768
  015b1fc  stw 3, 0(4)
  015b200  lwz 3, 8(24)
  015b204  lis 4, 4
  015b208  ori 6, 6, 5760
  015b20c  ori 4, 4, 5956
  015b210  stw 5, 4(3)
  015b214  lwz 3, 8(24)
  015b218  addic 5, 3, 8
  015b21c  li 10, 112
  015b220  stw 5, 8(24)
  015b224  stw 4, 8(3)
  015b228  lwz 8, 8(24)
  015b22c  li 5, 6178
  015b230  lis 3, 4
  015b234  li 4, 6212
  015b238  ori 3, 3, 5964
  015b23c  stw 5, 4(8)
  015b240  lwz 5, 8(24)
  015b244  addic 8, 5, 8
  015b248  li 12, 144
  015b24c  stw 8, 8(24)
  015b250  stw 3, 8(5)
  015b254  lwz 8, 8(24)
  015b258  lis 3, 4
  015b25c  lis 5, 4
  015b260  ori 3, 3, 5764
  015b264  stw 4, 4(8)
  015b268  lwz 4, 8(24)
  015b26c  ori 5, 5, 5772
  015b270  addic 8, 4, 8
  015b274  li 30, 160
  015b278  stw 8, 8(24)
  015b27c  lwz 8, 1192(28)
  015b280  stw 6, 8(4)
  015b284  subc 4, 27, 8
  015b288  lwz 9, 8(24)
  015b28c  or 6, 4, 7
  015b290  addic 8, 4, 12
  015b294  or 8, 8, 7
  015b298  stw 6, 4(9)
  015b29c  lwz 6, 8(24)
  015b2a0  addic 9, 6, 8
  015b2a4  li 28, 8
  015b2a8  addic 29, 1, 112
  015b2ac  stw 9, 8(24)
  015b2b0  stw 3, 8(6)
  015b2b4  li 9, 48
  015b2b8  lwz 11, 8(24)
  015b2bc  addic 3, 4, 20
  015b2c0  lis 4, 22
  015b2c4  or 3, 3, 7
  015b2c8  addi 4, 4, -21984
  015b2cc  li 7, 32
  015b2d0  stw 8, 4(11)
  015b2d4  li 6, 80
  015b2d8  lwz 8, 8(24)
  015b2dc  mtctr 28
  015b2e0  addic 11, 8, 8
  015b2e4  stw 11, 8(24)
  015b2e8  stw 5, 8(8)
  015b2ec  li 11, 128
  015b2f0  lwz 27, 8(24)
  015b2f4  li 5, 64
  015b2f8  lis 8, 68
  015b2fc  ori 8, 8, 7932
  015b300  stw 3, 4(27)
  015b304  lwz 3, 8(24)
  015b308  addic 27, 3, 8
  015b30c  stw 27, 8(24)
  015b310  lvx 2, 7, 4
  015b314  lvx 3, 9, 4
  015b318  lvx 4, 5, 4
  015b31c  lvx 5, 6, 4
  015b320  stvx 2, 10, 1
  015b324  stvx 3, 11, 1
  015b328  stvx 4, 12, 1
  015b32c  stvx 5, 30, 1
  015b330  stw 8, 8(3)
  015b334  lwz 3, 8(24)
  015b338  stw 21, 4(3)
  015b33c  lwz 3, 8(24)
  015b340  addic 3, 3, 8
  015b344  stw 3, 8(24)
  015b348  lwz 4, 0(29)
  015b34c  stw 4, 0(3)
  015b350  lwz 3, 8(24)
  015b354  addic 4, 3, 4
  015b358  stw 4, 8(24)
  015b35c  lwz 4, 4(29)
  015b360  addic 29, 29, 8
  015b364  stw 4, 4(3)
  015b368  lwz 4, 8(24)
  015b36c  addic 3, 4, 4
  015b370  stw 3, 8(24)
  015b374  bdnz 0x15b348
  015b378  lis 3, 16396
  015b37c  ori 3, 3, 5908
  015b380  li 5, 6
  015b384  cntlzw 6, 22
  015b388  stw 3, 4(4)
  015b38c  lwz 3, 8(24)
  015b390  lis 4, 4
  015b394  cntlzw 7, 21
  015b398  ori 4, 4, 6152
  015b39c  rlwinm 6, 6, 27, 31, 31
  015b3a0  stw 22, 4(3)
  015b3a4  rlwinm 7, 7, 27, 31, 31
  015b3a8  lwz 3, 8(24)
  015b3ac  xori 6, 6, 1
  015b3b0  xori 7, 7, 1
  015b3b4  stw 22, 8(3)
  015b3b8  lwz 3, 8(24)
  015b3bc  addic 31, 31, 1
  015b3c0  addic 23, 23, 32
  015b3c4  stw 22, 12(3)
  015b3c8  lwz 3, 8(24)
  015b3cc  stw 4, 16(3)
  015b3d0  lwz 3, 8(24)
  015b3d4  stw 5, 20(3)
  015b3d8  lwz 3, 8(24)
  015b3dc  addic 5, 3, 28
  015b3e0  stw 5, 8(24)
  015b3e4  addc 5, 6, 7
  015b3e8  lis 6, 768
  015b3ec  slwi 5, 5, 18
  015b3f0  ori 5, 5, 6164
  015b3f4  oris 5, 5, 16384
  015b3f8  stw 5, 24(3)
  015b3fc  lwz 5, 8(24)
  015b400  lis 3, 4
  015b404  addic 7, 5, 4
  015b408  ori 3, 3, 5952
  015b40c  stw 7, 8(24)
  015b410  stw 6, 0(5)
  015b414  lwz 7, 8(24)
  015b418  li 5, 2
  015b41c  lis 6, 4
  015b420  ori 6, 6, 5956
  015b424  stw 4, 0(7)
  015b428  lwz 4, 8(24)
  015b42c  stw 22, 4(4)
  015b430  lwz 4, 8(24)
  015b434  addic 7, 4, 8
  015b438  stw 7, 8(24)
  015b43c  stw 3, 8(4)
  015b440  lwz 4, 8(24)
  015b444  lis 3, 4
  015b448  ori 3, 3, 5964
  015b44c  stw 5, 4(4)
  015b450  lwz 4, 8(24)
  015b454  addic 7, 4, 8
  015b458  stw 7, 8(24)
  015b45c  stw 6, 8(4)
  015b460  lwz 4, 8(24)
  015b464  stw 5, 4(4)
  015b468  lwz 4, 8(24)
  015b46c  addic 6, 4, 8
  015b470  stw 6, 8(24)
  015b474  stw 3, 8(4)
  015b478  lwz 3, 8(24)
  015b47c  stw 5, 4(3)
  015b480  lwz 3, 8(24)
  015b484  addic 3, 3, 8
  015b488  stw 3, 8(24)
  015b48c  lwz 3, 18512(26)
  015b490  lhz 3, 8(3)
  015b494  cmpw 31, 3
  015b498  bt 0, 0x15add4
  015b49c  lis 3, 144
  015b4a0  lis 4, 8
  015b4a4  addic 3, 3, -23532
  015b4a8  ori 4, 4, 788
  015b4ac  lis 5, 770
  015b4b0  lis 6, 771
  015b4b4  ori 5, 5, 770
  015b4b8  lwz 3, 8(3)
  015b4bc  ori 6, 6, 771
  015b4c0  lwz 7, 8(3)
  015b4c4  stw 4, 0(7)
  015b4c8  lwz 4, 8(3)
  015b4cc  stw 5, 4(4)
  015b4d0  lwz 4, 8(3)
  015b4d4  stw 6, 8(4)
  015b4d8  lwz 4, 8(3)
  015b4dc  addic 4, 4, 12
  015b4e0  stw 4, 8(3)
  015b4e4  ld 0, 816(1)
  015b4e8  mtlr 0
  015b4ec  lfd 17, 680(1)
  015b4f0  lfd 18, 688(1)
  015b4f4  lfd 19, 696(1)
  015b4f8  lfd 20, 704(1)
  015b4fc  lfd 21, 712(1)
  015b500  lfd 22, 720(1)
  015b504  lfd 23, 728(1)
  015b508  lfd 24, 736(1)
  015b50c  lfd 25, 744(1)
  015b510  lfd 26, 752(1)
  015b514  lfd 27, 760(1)
  015b518  lfd 28, 768(1)
  015b51c  lfd 29, 776(1)
  015b520  lfd 30, 784(1)
  015b524  lfd 31, 792(1)
  015b528  ld 21, 592(1)
  015b52c  ld 22, 600(1)
  015b530  ld 23, 608(1)
  015b534  ld 24, 616(1)
  015b538  ld 25, 624(1)
  015b53c  ld 26, 632(1)
  015b540  ld 27, 640(1)
  015b544  ld 28, 648(1)
  015b548  ld 29, 656(1)
  015b54c  ld 30, 664(1)
  015b550  ld 31, 672(1)
  015b554  addi 1, 1, 800
  015b558  blr

STUB_0015b55c:   # 0x15b55c, 0x8 bytes
  015b55c  li 3, 0
  015b560  blr

STUB_0015b564:   # 0x15b564, 0x8 bytes
  015b564  li 3, 0
  015b568  blr

STUB_0015b56c:   # 0x15b56c, 0x4 bytes
  015b56c  blr

STUB_0015b570:   # 0x15b570, 0x4 bytes
  015b570  blr
