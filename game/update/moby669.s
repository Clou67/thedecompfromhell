# game/update/moby669.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M669_0040ac0c:   # 0x40ac0c, 0x14 bytes
  040ac0c  lis 3, 133
  040ac10  lis 4, 1
  040ac14  addic 3, 3, 20180
  040ac18  stw 4, 72(3)
  040ac1c  blr

UpdateMoby_669:   # 0x40ac50, 0x6a4 bytes
  040ac50  stdu 1, -544(1)
  040ac54  mflr 0
  040ac58  std 0, 560(1)
  040ac5c  stfd 25, 488(1)
  040ac60  stfd 26, 496(1)
  040ac64  stfd 27, 504(1)
  040ac68  stfd 28, 512(1)
  040ac6c  stfd 29, 520(1)
  040ac70  stfd 30, 528(1)
  040ac74  stfd 31, 536(1)
  040ac78  std 31, 480(1)
  040ac7c  std 30, 472(1)
  040ac80  ori 31, 3, 0
  040ac84  lis 30, 65
  040ac88  std 29, 464(1)
  040ac8c  addi 30, 30, -21472
  040ac90  std 28, 456(1)
  040ac94  std 27, 448(1)
  040ac98  std 26, 440(1)
  040ac9c  std 25, 432(1)
  040aca0  std 24, 424(1)
  040aca4  std 23, 416(1)
  040aca8  std 22, 408(1)
  040acac  std 21, 400(1)
  040acb0  std 20, 392(1)
  040acb4  std 19, 384(1)
  040acb8  lwz 29, 120(31)
  040acbc  bl 0x7d118
  040acc0  nop
  040acc4  cmpwi 3, 0
  040acc8  bt 2, 0x40b294
  040accc  lbz 3, 32(31)
  040acd0  cmpwi 3, 0
  040acd4  cmpwi 1, 3, 1
  040acd8  cmpwi 6, 3, -1
  040acdc  bt 1, 0x40ace8
  040ace0  bf 25, 0x40ad54
  040ace4  b 0x40acf0
  040ace8  bf 5, 0x40ad2c
  040acec  b 0x40ad54
  040acf0  li 3, 255
  040acf4  li 4, 1
  040acf8  lis 5, 133
  040acfc  lis 6, 114
  040ad00  stb 3, 48(31)
  040ad04  stb 4, 32(31)
  040ad08  lfs 1, 0(29)
  040ad0c  lfs 2, 20288(5)
  040ad10  fmuls 1, 1, 2
  040ad14  lfs 2, 0(30)
  040ad18  lfs 3, -3052(6)
  040ad1c  fmuls 1, 1, 2
  040ad20  fmuls 1, 1, 3
  040ad24  stfs 1, 4(29)
  040ad28  b 0x40ad54
  040ad2c  lfs 1, 64(31)
  040ad30  lfs 2, 4(29)
  040ad34  bl 0x502578
  040ad38  nop
  040ad3c  lis 3, 113
  040ad40  stfs 1, 64(31)
  040ad44  ori 4, 31, 0
  040ad48  addic 3, 3, -8392
  040ad4c  bl 0x6d720
  040ad50  nop
  040ad54  lis 3, 1
  040ad58  lis 4, 16256
  040ad5c  lfs 29, 4(30)
  040ad60  ori 3, 3, 1
  040ad64  stw 31, 240(1)
  040ad68  li 5, 1
  040ad6c  lis 6, 17839
  040ad70  addic 29, 1, 272
  040ad74  stw 3, 244(1)
  040ad78  lfs 30, 8(30)
  040ad7c  ori 3, 6, 57190
  040ad80  stw 4, 252(1)
  040ad84  lis 27, 151
  040ad88  stw 5, 256(1)
  040ad8c  stw 4, 232(1)
  040ad90  stw 3, 236(1)
  040ad94  addic 27, 27, -25376
  040ad98  lhz 6, 166(31)
  040ad9c  ori 3, 29, 0
  040ada0  stb 5, 248(1)
  040ada4  addic 4, 31, 64
  040ada8  stb 5, 249(1)
  040adac  sth 6, 250(1)
  040adb0  bl 0x500b64
  040adb4  nop
  040adb8  ori 3, 29, 0
  040adbc  bl 0x10a788
  040adc0  nop
  040adc4  addic 3, 1, 320
  040adc8  ori 4, 29, 0
  040adcc  bl 0x500f6c
  040add0  nop
  040add4  li 22, 0
  040add8  ori 28, 22, 0
  040addc  ori 23, 28, 0
  040ade0  ori 3, 23, 0
  040ade4  bl 0x502730
  040ade8  nop
  040adec  lis 29, 133
  040adf0  lfs 28, 0(30)
  040adf4  lfs 31, 12(30)
  040adf8  lfs 2, 20296(29)
  040adfc  fmuls 2, 2, 28
  040ae00  fmuls 1, 2, 1
  040ae04  fmuls 1, 1, 31
  040ae08  bl 0x502648
  040ae0c  nop
  040ae10  lis 4, 133
  040ae14  lfs 2, 20296(29)
  040ae18  ori 3, 22, 0
  040ae1c  fnmsubs 27, 2, 28, 1
  040ae20  lfs 1, 20292(4)
  040ae24  fmuls 28, 1, 28
  040ae28  bl 0x502730
  040ae2c  nop
  040ae30  lfs 2, 16(30)
  040ae34  fmuls 1, 1, 2
  040ae38  bl 0x502648
  040ae3c  nop
  040ae40  fmr 2, 1
  040ae44  fmr 1, 28
  040ae48  bl 0x502578
  040ae4c  nop
  040ae50  fmr 2, 27
  040ae54  bl 0x502578
  040ae58  nop
  040ae5c  lis 4, 133
  040ae60  fmr 3, 1
  040ae64  addic 25, 1, 112
  040ae68  lfs 2, 20(30)
  040ae6c  ori 3, 25, 0
  040ae70  lfs 1, 20300(4)
  040ae74  bl 0xfe610
  040ae78  nop
  040ae7c  lfs 1, 336(1)
  040ae80  lfs 2, 116(1)
  040ae84  lfs 3, 340(1)
  040ae88  lfs 4, 320(1)
  040ae8c  fmuls 1, 1, 2
  040ae90  lfs 5, 112(1)
  040ae94  fmuls 3, 3, 2
  040ae98  lfs 6, 344(1)
  040ae9c  lfs 7, 324(1)
  040aea0  lfs 8, 348(1)
  040aea4  fmuls 6, 6, 2
  040aea8  lfs 9, 328(1)
  040aeac  fmuls 2, 8, 2
  040aeb0  lfs 8, 352(1)
  040aeb4  lfs 10, 120(1)
  040aeb8  fmadds 1, 4, 5, 1
  040aebc  fmadds 3, 7, 5, 3
  040aec0  lfs 4, 332(1)
  040aec4  addic 26, 31, 16
  040aec8  lfs 7, 356(1)
  040aecc  fmadds 6, 9, 5, 6
  040aed0  lfs 9, 368(1)
  040aed4  fmadds 2, 4, 5, 2
  040aed8  lfs 11, 360(1)
  040aedc  addic 3, 1, 144
  040aee0  lfs 4, 124(1)
  040aee4  ori 4, 25, 0
  040aee8  lfs 5, 364(1)
  040aeec  ori 5, 26, 0
  040aef0  fmadds 1, 8, 10, 1
  040aef4  fmadds 3, 7, 10, 3
  040aef8  lfs 7, 372(1)
  040aefc  lfs 8, 376(1)
  040af00  fmadds 6, 11, 10, 6
  040af04  fmadds 2, 5, 10, 2
  040af08  lfs 5, 380(1)
  040af0c  fmadds 1, 9, 4, 1
  040af10  fmadds 3, 7, 4, 3
  040af14  fmadds 6, 8, 4, 6
  040af18  fmadds 2, 5, 4, 2
  040af1c  stfs 1, 112(1)
  040af20  stfs 3, 116(1)
  040af24  stfs 6, 120(1)
  040af28  stfs 2, 124(1)
  040af2c  bl 0x502b08
  040af30  nop
  040af34  lfs 2, 20(31)
  040af38  lfs 3, 16(31)
  040af3c  lfs 4, 132(27)
  040af40  lfs 5, 128(27)
  040af44  fsubs 4, 2, 4
  040af48  fsubs 5, 3, 5
  040af4c  lfs 1, 24(31)
  040af50  lfs 6, 136(27)
  040af54  fsubs 6, 1, 6
  040af58  fmuls 4, 4, 4
  040af5c  fmadds 4, 5, 5, 4
  040af60  lfs 5, 24(30)
  040af64  fmadds 4, 6, 6, 4
  040af68  fsqrts 4, 4
  040af6c  fcmpu 0, 4, 5
  040af70  cror 6, 1, 2
  040af74  bt 6, 0x40afa0
  040af78  addic 7, 1, 224
  040af7c  ori 3, 26, 0
  040af80  ori 4, 25, 0
  040af84  li 5, 9
  040af88  ori 6, 31, 0
  040af8c  bl 0x57820
  040af90  nop
  040af94  lfs 3, 16(31)
  040af98  lfs 2, 20(31)
  040af9c  lfs 1, 24(31)
  040afa0  lis 4, 133
  040afa4  stfs 3, 128(1)
  040afa8  stfs 2, 132(1)
  040afac  addic 3, 1, 128
  040afb0  stfs 1, 136(1)
  040afb4  lfs 1, 28(31)
  040afb8  lfs 2, 20300(4)
  040afbc  stfs 1, 140(1)
  040afc0  stfs 2, 140(1)
  040afc4  lfs 1, 28(30)
  040afc8  bl 0x502910
  040afcc  nop
  040afd0  cmpwi 3, -1
  040afd4  bt 2, 0x40b274
  040afd8  cmpwi 23, 0
  040afdc  cmpwi 1, 23, 4
  040afe0  bt 2, 0x40afe8
  040afe4  bf 6, 0x40b274
  040afe8  lfs 1, 32(30)
  040afec  lis 3, 133
  040aff0  lfs 2, 224(31)
  040aff4  ori 24, 28, 0
  040aff8  lfs 3, 228(31)
  040affc  lfs 4, 232(31)
  040b000  fmuls 2, 2, 1
  040b004  lfs 5, 236(31)
  040b008  fmuls 3, 3, 1
  040b00c  fmuls 4, 4, 1
  040b010  fmuls 1, 5, 1
  040b014  lwz 3, 20304(3)
  040b018  cmpwi 3, 0
  040b01c  stfs 2, 176(1)
  040b020  stfs 3, 180(1)
  040b024  stfs 4, 184(1)
  040b028  stfs 1, 188(1)
  040b02c  bf 1, 0x40b274
  040b030  lfs 27, 36(30)
  040b034  lfs 28, 40(30)
  040b038  bl 0x5c8318
  040b03c  nop
  040b040  lis 4, 133
  040b044  lfs 26, 44(30)
  040b048  clrlwi 3, 3, 31
  040b04c  cmpwi 3, 0
  040b050  lfs 1, 20312(4)
  040b054  bt 2, 0x40b05c
  040b058  fmr 26, 30
  040b05c  fmr 2, 1
  040b060  fmuls 1, 2, 31
  040b064  bl 0xfcbe8
  040b068  nop
  040b06c  lis 3, 114
  040b070  lfs 2, -3056(3)
  040b074  fmuls 1, 1, 2
  040b078  bl 0x502758
  040b07c  nop
  040b080  li 4, 1
  040b084  li 5, 1
  040b088  subc 4, 3, 4
  040b08c  subc 6, 5, 3
  040b090  sradi 7, 4, 63
  040b094  ori 4, 25, 0
  040b098  and 29, 7, 6
  040b09c  ori 5, 26, 0
  040b0a0  addc 29, 3, 29
  040b0a4  addic 3, 1, 192
  040b0a8  bl 0x502a64
  040b0ac  nop
  040b0b0  lfs 1, 196(1)
  040b0b4  fcmpu 0, 26, 29
  040b0b8  lfs 2, 192(1)
  040b0bc  fmuls 1, 1, 26
  040b0c0  lfs 3, 200(1)
  040b0c4  fmuls 2, 2, 26
  040b0c8  lfs 4, 204(1)
  040b0cc  fmuls 3, 3, 26
  040b0d0  stfs 4, 188(1)
  040b0d4  cror 6, 1, 2
  040b0d8  fmuls 4, 1, 1
  040b0dc  stfs 1, 180(1)
  040b0e0  stfs 2, 176(1)
  040b0e4  stfs 3, 184(1)
  040b0e8  fmadds 1, 2, 2, 4
  040b0ec  fmadds 26, 3, 3, 1
  040b0f0  fsqrts 26, 26
  040b0f4  bt 6, 0x40b10c
  040b0f8  lfs 1, 112(1)
  040b0fc  lfs 2, 116(1)
  040b100  lfs 3, 120(1)
  040b104  lfs 4, 124(1)
  040b108  b 0x40b11c
  040b10c  lfs 1, 16(31)
  040b110  lfs 2, 20(31)
  040b114  lfs 3, 24(31)
  040b118  lfs 4, 28(31)
  040b11c  fmr 6, 1
  040b120  fmr 5, 2
  040b124  fmr 1, 29
  040b128  fmr 2, 27
  040b12c  stfs 6, 160(1)
  040b130  stfs 5, 164(1)
  040b134  stfs 3, 168(1)
  040b138  stfs 4, 172(1)
  040b13c  bl 0xfcbe8
  040b140  nop
  040b144  lfs 2, 176(1)
  040b148  lfs 3, 180(1)
  040b14c  addic 21, 1, 160
  040b150  fmuls 2, 2, 1
  040b154  lfs 4, 184(1)
  040b158  fmuls 3, 3, 1
  040b15c  addic 20, 1, 176
  040b160  fmuls 1, 4, 1
  040b164  ori 4, 21, 0
  040b168  ori 5, 20, 0
  040b16c  addic 3, 1, 208
  040b170  stfs 2, 176(1)
  040b174  stfs 3, 180(1)
  040b178  stfs 1, 184(1)
  040b17c  bl 0x502b08
  040b180  nop
  040b184  lis 4, 114
  040b188  sldi 3, 29, 2
  040b18c  extsw 3, 3
  040b190  lfs 1, -3052(4)
  040b194  fmuls 25, 1, 28
  040b198  bl 0x502730
  040b19c  nop
  040b1a0  fdivs 2, 26, 1
  040b1a4  fmr 1, 25
  040b1a8  bl 0xfcbe8
  040b1ac  nop
  040b1b0  lfs 2, 180(1)
  040b1b4  lfs 3, 176(1)
  040b1b8  fmuls 4, 2, 2
  040b1bc  lfs 5, 184(1)
  040b1c0  lis 5, 133
  040b1c4  lis 4, 133
  040b1c8  li 3, 255
  040b1cc  fmadds 4, 3, 3, 4
  040b1d0  lfs 26, 20308(5)
  040b1d4  clrlwi 29, 29, 24
  040b1d8  lwz 4, 20316(4)
  040b1dc  fmadds 4, 5, 5, 4
  040b1e0  extsw 19, 4
  040b1e4  fsqrts 4, 4
  040b1e8  fdivs 1, 1, 4
  040b1ec  fsub 6, 29, 4
  040b1f0  fsub 7, 29, 4
  040b1f4  fsub 8, 29, 4
  040b1f8  fsub 9, 4, 29
  040b1fc  fsub 10, 4, 29
  040b200  fsub 4, 4, 29
  040b204  fmuls 3, 3, 1
  040b208  fmuls 2, 2, 1
  040b20c  fmuls 1, 5, 1
  040b210  fsel 5, 6, 29, 3
  040b214  fsel 6, 7, 29, 2
  040b218  fsel 7, 8, 29, 1
  040b21c  fsel 3, 9, 5, 3
  040b220  fsel 2, 10, 6, 2
  040b224  fsel 1, 4, 7, 1
  040b228  stfs 3, 176(1)
  040b22c  stfs 2, 180(1)
  040b230  stfs 1, 184(1)
  040b234  bl 0xfc620
  040b238  nop
  040b23c  clrlwi 8, 3, 24
  040b240  ori 3, 21, 0
  040b244  fmr 1, 26
  040b248  ori 4, 20, 0
  040b24c  ori 5, 19, 0
  040b250  ori 7, 29, 0
  040b254  li 9, 0
  040b258  bl 0x131100
  040b25c  nop
  040b260  lis 3, 133
  040b264  addic 24, 24, 1
  040b268  lwz 3, 20304(3)
  040b26c  cmpw 24, 3
  040b270  bt 0, 0x40b038
  040b274  addic 23, 23, 1
  040b278  extsw 23, 23
  040b27c  cmpwi 23, 5
  040b280  bt 0, 0x40ade0
  040b284  addic 22, 22, 1
  040b288  extsw 22, 22
  040b28c  cmpwi 22, 3
  040b290  bt 0, 0x40addc
  040b294  ld 0, 560(1)
  040b298  mtlr 0
  040b29c  lfd 25, 488(1)
  040b2a0  lfd 26, 496(1)
  040b2a4  lfd 27, 504(1)
  040b2a8  lfd 28, 512(1)
  040b2ac  lfd 29, 520(1)
  040b2b0  lfd 30, 528(1)
  040b2b4  lfd 31, 536(1)
  040b2b8  ld 19, 384(1)
  040b2bc  ld 20, 392(1)
  040b2c0  ld 21, 400(1)
  040b2c4  ld 22, 408(1)
  040b2c8  ld 23, 416(1)
  040b2cc  ld 24, 424(1)
  040b2d0  ld 25, 432(1)
  040b2d4  ld 26, 440(1)
  040b2d8  ld 27, 448(1)
  040b2dc  ld 28, 456(1)
  040b2e0  ld 29, 464(1)
  040b2e4  ld 30, 472(1)
  040b2e8  ld 31, 480(1)
  040b2ec  addi 1, 1, 544
  040b2f0  blr

M669_0040b310:   # 0x40b310, 0x360 bytes
  040b310  stdu 1, -528(1)
  040b314  mflr 0
  040b318  std 0, 544(1)
  040b31c  stfd 24, 464(1)
  040b320  stfd 25, 472(1)
  040b324  stfd 26, 480(1)
  040b328  stfd 27, 488(1)
  040b32c  stfd 28, 496(1)
  040b330  stfd 29, 504(1)
  040b334  stfd 30, 512(1)
  040b338  stfd 31, 520(1)
  040b33c  std 31, 456(1)
  040b340  lis 4, 161
  040b344  std 28, 432(1)
  040b348  ori 31, 3, 0
  040b34c  lis 28, 65
  040b350  addi 28, 28, -19724
  040b354  lwz 3, 1808(4)
  040b358  std 30, 448(1)
  040b35c  std 29, 440(1)
  040b360  std 27, 424(1)
  040b364  std 26, 416(1)
  040b368  std 25, 408(1)
  040b36c  std 24, 400(1)
  040b370  std 23, 392(1)
  040b374  std 22, 384(1)
  040b378  std 21, 376(1)
  040b37c  std 20, 368(1)
  040b380  std 19, 360(1)
  040b384  extsw 3, 3
  040b388  bl 0x502730
  040b38c  nop
  040b390  lis 3, 133
  040b394  lis 4, 114
  040b398  lfs 2, 0(28)
  040b39c  lfs 3, 20500(3)
  040b3a0  lfs 4, -3052(4)
  040b3a4  fmuls 3, 3, 4
  040b3a8  fmuls 1, 3, 1
  040b3ac  bl 0x502798
  040b3b0  nop
  040b3b4  fmr 24, 1
  040b3b8  addic 3, 1, 112
  040b3bc  addic 4, 31, 64
  040b3c0  bl 0x500ca4
  040b3c4  nop
  040b3c8  lfs 1, 16(31)
  040b3cc  lfs 2, 20(31)
  040b3d0  lis 30, 16256
  040b3d4  li 3, 40
  040b3d8  stfs 1, 160(1)
  040b3dc  lfs 1, 24(31)
  040b3e0  stfs 2, 164(1)
  040b3e4  stfs 1, 168(1)
  040b3e8  stw 30, 172(1)
  040b3ec  bl 0x685c4
  040b3f0  nop
  040b3f4  std 3, 296(1)
  040b3f8  lis 9, 0
  040b3fc  li 3, 0
  040b400  li 4, 0
  040b404  li 5, 1
  040b408  li 6, 1
  040b40c  li 7, 1
  040b410  li 8, 0
  040b414  ori 9, 9, 65424
  040b418  bl 0x502fd4
  040b41c  nop
  040b420  std 3, 304(1)
  040b424  li 3, 0
  040b428  li 4, 0
  040b42c  li 5, 0
  040b430  li 6, 0
  040b434  li 7, 0
  040b438  li 8, 0
  040b43c  bl 0x502f08
  040b440  nop
  040b444  std 3, 288(1)
  040b448  lis 4, 269
  040b44c  lis 3, 269
  040b450  lis 5, 133
  040b454  lis 6, 133
  040b458  li 7, 128
  040b45c  lwz 8, -15884(3)
  040b460  lwz 3, -15888(4)
  040b464  lwz 4, 20320(5)
  040b468  lwz 6, 20324(6)
  040b46c  ori 5, 8, 0
  040b470  bl 0x502ea8
  040b474  nop
  040b478  li 27, 0
  040b47c  std 3, 312(1)
  040b480  ori 31, 1, 0
  040b484  ori 29, 27, 0
  040b488  lis 4, 133
  040b48c  li 6, 4
  040b490  lis 3, -16608
  040b494  ori 5, 1, 0
  040b498  addic 4, 4, 20340
  040b49c  ori 3, 3, 55676
  040b4a0  mtctr 6
  040b4a4  stw 30, 320(1)
  040b4a8  stw 3, 324(1)
  040b4ac  lfs 1, 0(4)
  040b4b0  lfs 2, 320(31)
  040b4b4  addic 4, 4, 8
  040b4b8  fmadds 1, 2, 24, 1
  040b4bc  stfs 1, 260(5)
  040b4c0  addic 5, 5, 8
  040b4c4  bdnz 0x40b4a4
  040b4c8  lfs 28, 4(28)
  040b4cc  lis 26, 161
  040b4d0  lfs 29, 8(28)
  040b4d4  lfs 30, 12(28)
  040b4d8  ori 19, 29, 0
  040b4dc  addic 26, 26, 24396
  040b4e0  lfs 31, 16(28)
  040b4e4  lis 24, 133
  040b4e8  ori 20, 29, 0
  040b4ec  addic 25, 1, 176
  040b4f0  ori 21, 1, 0
  040b4f4  ori 22, 1, 0
  040b4f8  ori 23, 1, 0
  040b4fc  addic 24, 24, 20336
  040b500  lis 3, 16160
  040b504  lis 4, 133
  040b508  stw 30, 328(1)
  040b50c  ori 3, 3, 55676
  040b510  cmpwi 20, 0
  040b514  stw 3, 332(1)
  040b518  lfs 1, 20296(4)
  040b51c  lfs 2, 0(24)
  040b520  lis 3, 133
  040b524  fmuls 3, 1, 28
  040b528  lfs 4, 328(31)
  040b52c  fmuls 1, 1, 29
  040b530  stw 29, 336(1)
  040b534  fmadds 2, 4, 24, 2
  040b538  stw 29, 348(1)
  040b53c  stfs 3, 340(1)
  040b540  stfs 1, 344(1)
  040b544  stfs 2, 256(21)
  040b548  lfs 25, 20(28)
  040b54c  lfs 26, 20292(3)
  040b550  lfs 27, 336(22)
  040b554  bt 2, 0x40b560
  040b558  lis 3, 133
  040b55c  lfs 25, 20300(3)
  040b560  ori 3, 19, 0
  040b564  bl 0x502730
  040b568  nop
  040b56c  fmadds 2, 26, 29, 27
  040b570  fmadds 1, 1, 31, 2
  040b574  bl 0x502648
  040b578  nop
  040b57c  fmr 3, 1
  040b580  ori 3, 25, 0
  040b584  fmr 1, 25
  040b588  fmr 2, 30
  040b58c  bl 0xfe610
  040b590  nop
  040b594  addic 20, 20, 1
  040b598  stw 30, 188(23)
  040b59c  addic 24, 24, 8
  040b5a0  cmpwi 20, 4
  040b5a4  addic 25, 25, 16
  040b5a8  addic 21, 21, 8
  040b5ac  addic 22, 22, 4
  040b5b0  addic 23, 23, 16
  040b5b4  bt 0, 0x40b500
  040b5b8  lis 6, 133
  040b5bc  addic 4, 1, 112
  040b5c0  addic 3, 1, 176
  040b5c4  li 5, 0
  040b5c8  li 7, 9
  040b5cc  lwz 8, 20496(6)
  040b5d0  lwz 6, 28(26)
  040b5d4  stw 8, 252(1)
  040b5d8  stw 8, 248(1)
  040b5dc  stw 8, 244(1)
  040b5e0  stw 8, 240(1)
  040b5e4  bl 0x72280
  040b5e8  nop
  040b5ec  addic 19, 19, 1
  040b5f0  extsw 19, 19
  040b5f4  cmpwi 19, 3
  040b5f8  bt 0, 0x40b4e4
  040b5fc  addic 27, 27, 1
  040b600  addic 31, 31, 4
  040b604  cmpwi 27, 2
  040b608  bt 0, 0x40b488
  040b60c  ld 0, 544(1)
  040b610  mtlr 0
  040b614  lfd 24, 464(1)
  040b618  lfd 25, 472(1)
  040b61c  lfd 26, 480(1)
  040b620  lfd 27, 488(1)
  040b624  lfd 28, 496(1)
  040b628  lfd 29, 504(1)
  040b62c  lfd 30, 512(1)
  040b630  lfd 31, 520(1)
  040b634  ld 19, 360(1)
  040b638  ld 20, 368(1)
  040b63c  ld 21, 376(1)
  040b640  ld 22, 384(1)
  040b644  ld 23, 392(1)
  040b648  ld 24, 400(1)
  040b64c  ld 25, 408(1)
  040b650  ld 26, 416(1)
  040b654  ld 27, 424(1)
  040b658  ld 28, 432(1)
  040b65c  ld 29, 440(1)
  040b660  ld 30, 448(1)
  040b664  ld 31, 456(1)
  040b668  addi 1, 1, 528
  040b66c  blr

M669_0040b670:   # 0x40b670, 0x14 bytes
  040b670  lis 3, 133
  040b674  lis 4, 1
  040b678  addic 3, 3, 20508
  040b67c  stw 4, 72(3)
  040b680  blr
