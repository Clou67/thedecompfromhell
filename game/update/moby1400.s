# game/update/moby1400.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1400_0026adc8:   # 0x26adc8, 0x174 bytes
  026adc8  stdu 1, -192(1)
  026adcc  mflr 0
  026add0  std 0, 208(1)
  026add4  stfd 27, 152(1)
  026add8  stfd 28, 160(1)
  026addc  stfd 29, 168(1)
  026ade0  stfd 30, 176(1)
  026ade4  stfd 31, 184(1)
  026ade8  lis 4, 39
  026adec  cmpwi 3, 0
  026adf0  addi 4, 4, -21088
  026adf4  lfs 1, 0(4)
  026adf8  lfs 30, 4(4)
  026adfc  lfs 31, 8(4)
  026ae00  fmr 2, 1
  026ae04  std 31, 144(1)
  026ae08  std 30, 136(1)
  026ae0c  std 29, 128(1)
  026ae10  std 28, 120(1)
  026ae14  lfs 3, 12(4)
  026ae18  bf 2, 0x26ae34
  026ae1c  lis 3, 39
  026ae20  fmr 31, 1
  026ae24  addi 3, 3, -21088
  026ae28  lfs 30, 16(3)
  026ae2c  lfs 3, 20(3)
  026ae30  lfs 2, 24(3)
  026ae34  lis 3, 39
  026ae38  lis 4, 122
  026ae3c  addi 31, 3, -21088
  026ae40  lis 3, 122
  026ae44  lfs 1, 28(31)
  026ae48  lfs 4, -13324(3)
  026ae4c  lfs 5, -13320(4)
  026ae50  fsub 6, 4, 1
  026ae54  fsub 1, 5, 1
  026ae58  fsel 29, 6, 4, 2
  026ae5c  fsel 28, 1, 5, 3
  026ae60  lis 30, 114
  026ae64  lfs 2, -3052(30)
  026ae68  fmuls 2, 2, 30
  026ae6c  fneg 1, 2
  026ae70  bl 0xfcbe8
  026ae74  nop
  026ae78  lfs 2, -3052(30)
  026ae7c  lis 29, 250
  026ae80  fmuls 2, 2, 30
  026ae84  stfs 1, 17248(29)
  026ae88  fneg 1, 2
  026ae8c  bl 0xfcbe8
  026ae90  nop
  026ae94  addic 28, 29, 17248
  026ae98  lis 3, 114
  026ae9c  stfs 1, 4(28)
  026aea0  lfs 3, 32(31)
  026aea4  lfs 2, -3056(3)
  026aea8  fmuls 1, 2, 31
  026aeac  fmuls 2, 2, 3
  026aeb0  bl 0xfcbe8
  026aeb4  nop
  026aeb8  lfs 2, -3052(30)
  026aebc  lis 3, 250
  026aec0  lfs 3, 4(28)
  026aec4  fmuls 2, 2, 30
  026aec8  fmuls 3, 3, 3
  026aecc  lfs 4, 17248(29)
  026aed0  stfs 1, 17264(3)
  026aed4  lis 4, 250
  026aed8  fmuls 5, 2, 2
  026aedc  fmadds 3, 4, 4, 3
  026aee0  li 5, 17268
  026aee4  fmadds 2, 2, 2, 5
  026aee8  fsqrts 3, 3
  026aeec  fmadds 1, 27, 27, 2
  026aef0  fsubs 2, 28, 29
  026aef4  fsqrts 1, 1
  026aef8  fdivs 1, 3, 1
  026aefc  fmadds 1, 1, 2, 29
  026af00  fctiwz 1, 1
  026af04  stfiwx 1, 5, 4
  026af08  ld 0, 208(1)
  026af0c  mtlr 0
  026af10  lfd 27, 152(1)
  026af14  lfd 28, 160(1)
  026af18  lfd 29, 168(1)
  026af1c  lfd 30, 176(1)
  026af20  lfd 31, 184(1)
  026af24  ld 28, 120(1)
  026af28  ld 29, 128(1)
  026af2c  ld 30, 136(1)
  026af30  ld 31, 144(1)
  026af34  addi 1, 1, 192
  026af38  blr

UpdateMoby_1400:   # 0x26af90, 0xc40 bytes
  026af90  stdu 1, -432(1)
  026af94  mflr 0
  026af98  std 0, 448(1)
  026af9c  stfd 14, 288(1)
  026afa0  stfd 15, 296(1)
  026afa4  stfd 16, 304(1)
  026afa8  stfd 17, 312(1)
  026afac  stfd 18, 320(1)
  026afb0  stfd 19, 328(1)
  026afb4  stfd 20, 336(1)
  026afb8  stfd 21, 344(1)
  026afbc  stfd 22, 352(1)
  026afc0  stfd 23, 360(1)
  026afc4  stfd 24, 368(1)
  026afc8  stfd 25, 376(1)
  026afcc  stfd 26, 384(1)
  026afd0  stfd 27, 392(1)
  026afd4  stfd 28, 400(1)
  026afd8  stfd 29, 408(1)
  026afdc  stfd 30, 416(1)
  026afe0  stfd 31, 424(1)
  026afe4  lis 4, 151
  026afe8  lwz 4, -25488(4)
  026afec  cmpwi 4, 12
  026aff0  cmpwi 1, 4, 11
  026aff4  std 31, 280(1)
  026aff8  std 30, 272(1)
  026affc  std 29, 264(1)
  026b000  std 28, 256(1)
  026b004  std 27, 248(1)
  026b008  std 26, 240(1)
  026b00c  std 25, 232(1)
  026b010  std 24, 224(1)
  026b014  std 23, 216(1)
  026b018  std 22, 208(1)
  026b01c  std 21, 200(1)
  026b020  std 20, 192(1)
  026b024  cmpwi 6, 4, 512
  026b028  bt 1, 0x26b034
  026b02c  bf 5, 0x26b040
  026b030  b 0x26b038
  026b034  bf 26, 0x26b040
  026b038  li 31, 1
  026b03c  b 0x26b044
  026b040  li 31, 0
  026b044  cmpwi 31, 1
  026b048  lis 30, 114
  026b04c  bf 2, 0x26b074
  026b050  lis 4, 39
  026b054  li 29, 0
  026b058  addi 4, 4, -20676
  026b05c  lfs 1, 0(4)
  026b060  lfs 14, 4(4)
  026b064  lfs 15, 8(4)
  026b068  lfs 23, -3052(30)
  026b06c  stfs 1, 168(1)
  026b070  b 0x26b0a0
  026b074  lis 4, 39
  026b078  lis 5, 122
  026b07c  addi 4, 4, -20676
  026b080  li 29, 1
  026b084  lfs 1, 12(4)
  026b088  lfs 23, 20(4)
  026b08c  lfs 14, 16(4)
  026b090  lfs 15, -13336(5)
  026b094  lfs 2, -3052(30)
  026b098  stfs 1, 168(1)
  026b09c  fmuls 23, 2, 23
  026b0a0  lis 4, 39
  026b0a4  lis 5, 122
  026b0a8  addi 4, 4, -20676
  026b0ac  lfs 28, 24(4)
  026b0b0  lfs 1, -13316(5)
  026b0b4  lbz 4, 32(3)
  026b0b8  fsub 2, 1, 28
  026b0bc  cmpwi 4, 0
  026b0c0  lwz 28, 120(3)
  026b0c4  cmpwi 1, 4, -1
  026b0c8  cmpwi 6, 4, 2
  026b0cc  fsel 15, 2, 1, 15
  026b0d0  bt 1, 0x26b0dc
  026b0d4  bf 5, 0x26bb20
  026b0d8  b 0x26b0e4
  026b0dc  bt 26, 0x26b104
  026b0e0  b 0x26bb20
  026b0e4  ori 4, 3, 0
  026b0e8  li 5, 2
  026b0ec  li 6, 255
  026b0f0  ori 3, 31, 0
  026b0f4  stb 5, 32(4)
  026b0f8  stb 6, 48(4)
  026b0fc  bl 0x26adc8
  026b100  b 0x26bb20
  026b104  lis 3, 250
  026b108  addic 3, 3, 17264
  026b10c  bl 0x500108
  026b110  nop
  026b114  cmpwi 3, 0
  026b118  bt 2, 0x26b124
  026b11c  ori 3, 31, 0
  026b120  bl 0x26adc8
  026b124  lis 24, 149
  026b128  lfs 1, 48(28)
  026b12c  lis 4, 165
  026b130  addic 24, 24, 5056
  026b134  lfs 2, 52(28)
  026b138  addic 5, 4, 11152
  026b13c  lis 27, 250
  026b140  lis 6, 39
  026b144  addic 3, 1, 128
  026b148  lfs 3, 320(24)
  026b14c  addi 6, 6, -20676
  026b150  lfs 4, 324(24)
  026b154  lfs 5, 328(24)
  026b158  fsubs 1, 3, 1
  026b15c  lfs 6, 56(28)
  026b160  fsubs 2, 4, 2
  026b164  lfs 7, 332(24)
  026b168  fsubs 6, 5, 6
  026b16c  stfs 3, 128(1)
  026b170  stfs 4, 132(1)
  026b174  stfs 5, 136(1)
  026b178  stfs 7, 12(5)
  026b17c  stfs 7, 140(1)
  026b180  lwz 27, 17268(27)
  026b184  stfs 1, 11152(4)
  026b188  stfs 2, 4(5)
  026b18c  ori 4, 3, 0
  026b190  stfs 6, 8(5)
  026b194  lfs 1, 28(6)
  026b198  lfs 2, 344(24)
  026b19c  lfs 3, 340(24)
  026b1a0  fneg 3, 3
  026b1a4  bl 0x117238
  026b1a8  nop
  026b1ac  lis 25, 122
  026b1b0  lfs 1, 328(24)
  026b1b4  li 20, 0
  026b1b8  cmpwi 27, 0
  026b1bc  ori 23, 20, 0
  026b1c0  lfs 2, -13332(25)
  026b1c4  fadds 1, 1, 2
  026b1c8  stfs 1, 136(1)
  026b1cc  bf 1, 0x26b4dc
  026b1d0  lis 3, 39
  026b1d4  fneg 25, 23
  026b1d8  lis 21, 250
  026b1dc  addi 3, 3, -20676
  026b1e0  addic 22, 24, 320
  026b1e4  addic 21, 21, 17248
  026b1e8  lfs 1, 36(3)
  026b1ec  lfs 16, 32(3)
  026b1f0  lfs 17, 40(3)
  026b1f4  lfs 18, 44(3)
  026b1f8  lfs 19, 48(3)
  026b1fc  lfs 20, 52(3)
  026b200  lfs 21, 56(3)
  026b204  lfs 22, 60(3)
  026b208  lfs 24, 64(3)
  026b20c  stfd 1, 160(1)
  026b210  fmr 1, 28
  026b214  lfs 31, 128(1)
  026b218  lfs 3, 132(1)
  026b21c  fmr 2, 16
  026b220  stfs 31, 112(1)
  026b224  lfs 4, 136(1)
  026b228  stfs 3, 116(1)
  026b22c  lfs 3, 140(1)
  026b230  stfs 4, 120(1)
  026b234  stfs 3, 124(1)
  026b238  bl 0xfcbe8
  026b23c  nop
  026b240  lfd 2, 160(1)
  026b244  fadds 1, 1, 2
  026b248  lis 26, 122
  026b24c  fsubs 2, 17, 1
  026b250  fsubs 3, 18, 1
  026b254  fsub 4, 1, 2
  026b258  fsel 1, 4, 2, 1
  026b25c  fsub 2, 3, 1
  026b260  fsel 3, 2, 3, 1
  026b264  fmr 1, 28
  026b268  lfs 2, -13328(26)
  026b26c  fmuls 4, 3, 3
  026b270  fmuls 5, 4, 3
  026b274  fmuls 6, 4, 5
  026b278  fmadds 3, 5, 19, 3
  026b27c  fmuls 5, 4, 6
  026b280  fmadds 3, 6, 20, 3
  026b284  fmuls 4, 4, 5
  026b288  fmadds 3, 5, 21, 3
  026b28c  fmadds 30, 4, 22, 3
  026b290  bl 0xfcbe8
  026b294  nop
  026b298  fmadds 3, 30, 1, 31
  026b29c  fmr 1, 28
  026b2a0  lfs 31, 116(1)
  026b2a4  fmr 2, 16
  026b2a8  stfs 3, 112(1)
  026b2ac  bl 0xfcbe8
  026b2b0  nop
  026b2b4  fsubs 2, 17, 1
  026b2b8  fsubs 3, 18, 1
  026b2bc  fsub 4, 1, 2
  026b2c0  fsel 1, 4, 2, 1
  026b2c4  fsub 2, 3, 1
  026b2c8  fsel 3, 2, 3, 1
  026b2cc  fmr 1, 28
  026b2d0  lfs 2, -13328(26)
  026b2d4  fmuls 5, 3, 3
  026b2d8  fmuls 6, 5, 3
  026b2dc  fmuls 4, 5, 6
  026b2e0  fmadds 3, 6, 19, 3
  026b2e4  fmuls 6, 5, 4
  026b2e8  fmadds 3, 4, 20, 3
  026b2ec  fmuls 4, 5, 6
  026b2f0  fmadds 3, 6, 21, 3
  026b2f4  fmadds 30, 4, 22, 3
  026b2f8  bl 0xfcbe8
  026b2fc  nop
  026b300  fmadds 1, 30, 1, 31
  026b304  addic 3, 1, 144
  026b308  addic 4, 1, 112
  026b30c  ori 5, 22, 0
  026b310  stfs 1, 116(1)
  026b314  bl 0x502a64
  026b318  nop
  026b31c  lfs 1, 148(1)
  026b320  lfs 2, 144(1)
  026b324  fmuls 1, 1, 1
  026b328  fmadds 29, 2, 2, 1
  026b32c  fsqrts 29, 29
  026b330  fcmpu 0, 29, 24
  026b334  bt 1, 0x26b37c
  026b338  fmr 1, 25
  026b33c  fmr 2, 23
  026b340  bl 0xfcbe8
  026b344  nop
  026b348  fmr 30, 1
  026b34c  lis 3, 250
  026b350  fmr 1, 25
  026b354  fmr 2, 23
  026b358  lfs 31, 17248(3)
  026b35c  bl 0xfcbe8
  026b360  nop
  026b364  fmr 2, 1
  026b368  lfs 1, 4(21)
  026b36c  fmr 3, 31
  026b370  lfs 4, -3052(30)
  026b374  fmr 31, 14
  026b378  b 0x26b3cc
  026b37c  fsubs 3, 29, 24
  026b380  lfs 4, 168(1)
  026b384  fmr 1, 25
  026b388  fmr 2, 23
  026b38c  fnmsubs 31, 3, 4, 14
  026b390  fsub 3, 31, 15
  026b394  fsel 31, 3, 31, 15
  026b398  bl 0xfcbe8
  026b39c  nop
  026b3a0  fmr 30, 1
  026b3a4  lis 3, 250
  026b3a8  fmr 1, 25
  026b3ac  fmr 2, 23
  026b3b0  lfs 27, 17248(3)
  026b3b4  bl 0xfcbe8
  026b3b8  nop
  026b3bc  fmr 2, 1
  026b3c0  lfs 1, 4(21)
  026b3c4  fmr 3, 27
  026b3c8  lfs 4, -3052(30)
  026b3cc  fadds 30, 3, 30
  026b3d0  lis 3, 122
  026b3d4  fmuls 26, 4, 31
  026b3d8  lfs 3, 112(1)
  026b3dc  fadds 27, 1, 2
  026b3e0  lfs 4, 120(1)
  026b3e4  lis 4, 165
  026b3e8  stfs 3, 48(1)
  026b3ec  stfs 4, 56(1)
  026b3f0  lfs 3, 328(24)
  026b3f4  lfs 4, -13308(3)
  026b3f8  lfs 2, 116(1)
  026b3fc  fsubs 1, 3, 4
  026b400  lfs 3, 124(1)
  026b404  stfs 2, 52(1)
  026b408  stfs 3, 60(1)
  026b40c  fneg 26, 26
  026b410  stfs 1, 11168(4)
  026b414  ld 3, 48(1)
  026b418  ld 4, 56(1)
  026b41c  bl 0x118d60
  026b420  nop
  026b424  lfs 2, 328(24)
  026b428  lfs 3, -13332(25)
  026b42c  lis 3, 122
  026b430  fadds 2, 2, 3
  026b434  lwz 3, -13312(3)
  026b438  fcmpu 0, 1, 2
  026b43c  cror 6, 1, 2
  026b440  bt 6, 0x26b4d0
  026b444  lis 4, 165
  026b448  fcmpu 0, 29, 24
  026b44c  ori 26, 23, 0
  026b450  cmpwi 1, 31, 0
  026b454  lfs 31, 11168(4)
  026b458  fsub 2, 1, 31
  026b45c  cror 2, 0, 2
  026b460  fsel 31, 2, 1, 31
  026b464  bt 2, 0x26b46c
  026b468  extsw 26, 3
  026b46c  bf 6, 0x26b49c
  026b470  stfs 30, 80(1)
  026b474  fmr 1, 31
  026b478  stfs 26, 88(1)
  026b47c  addic 3, 1, 112
  026b480  stfs 27, 84(1)
  026b484  ori 4, 26, 0
  026b488  stfs 28, 92(1)
  026b48c  ld 7, 80(1)
  026b490  ld 8, 88(1)
  026b494  bl 0x11ffb0
  026b498  nop
  026b49c  cmpwi 31, 1
  026b4a0  bf 2, 0x26b4d0
  026b4a4  stfs 30, 80(1)
  026b4a8  stfs 26, 88(1)
  026b4ac  addic 3, 1, 112
  026b4b0  stfs 27, 84(1)
  026b4b4  ori 4, 26, 0
  026b4b8  stfs 28, 92(1)
  026b4bc  fmr 1, 31
  026b4c0  ld 7, 80(1)
  026b4c4  ld 8, 88(1)
  026b4c8  bl 0x134540
  026b4cc  nop
  026b4d0  addic 20, 20, 1
  026b4d4  cmpw 20, 27
  026b4d8  bt 0, 0x26b210
  026b4dc  extsw 3, 27
  026b4e0  ori 26, 23, 0
  026b4e4  std 3, 176(1)
  026b4e8  lfs 1, 328(24)
  026b4ec  lis 3, 39
  026b4f0  lfs 2, -13332(25)
  026b4f4  lfs 3, 320(24)
  026b4f8  fadds 2, 1, 2
  026b4fc  lfs 4, 324(24)
  026b500  stfs 3, 128(1)
  026b504  addi 3, 3, -20676
  026b508  stfs 4, 132(1)
  026b50c  lfs 3, 332(24)
  026b510  stfs 1, 136(1)
  026b514  stfs 3, 140(1)
  026b518  stfs 2, 136(1)
  026b51c  lfs 1, 68(3)
  026b520  lfd 2, 176(1)
  026b524  fcfid 2, 2
  026b528  frsp 2, 2
  026b52c  fmuls 1, 2, 1
  026b530  fctiwz 1, 1
  026b534  stfd 1, 176(1)
  026b538  lwz 27, 180(1)
  026b53c  cmpwi 27, 0
  026b540  bf 1, 0x26b794
  026b544  lis 3, 39
  026b548  lis 22, 250
  026b54c  fneg 27, 23
  026b550  addi 3, 3, -20676
  026b554  addic 22, 22, 17248
  026b558  lfs 26, 32(3)
  026b55c  lfs 25, 36(3)
  026b560  lfs 24, 40(3)
  026b564  lfs 22, 44(3)
  026b568  lfs 21, 48(3)
  026b56c  lfs 20, 52(3)
  026b570  lfs 19, 56(3)
  026b574  lfs 18, 60(3)
  026b578  lfs 17, 64(3)
  026b57c  fmr 1, 27
  026b580  fmr 2, 23
  026b584  bl 0xfcbe8
  026b588  nop
  026b58c  lis 3, 250
  026b590  fmr 2, 23
  026b594  lfs 30, 17248(3)
  026b598  fadds 30, 30, 1
  026b59c  fmr 1, 27
  026b5a0  bl 0xfcbe8
  026b5a4  nop
  026b5a8  lfs 2, -3052(30)
  026b5ac  lfs 29, 4(22)
  026b5b0  fmuls 31, 2, 14
  026b5b4  lfs 16, 128(1)
  026b5b8  fadds 29, 29, 1
  026b5bc  lfs 3, 132(1)
  026b5c0  fmr 1, 28
  026b5c4  stfs 16, 112(1)
  026b5c8  lfs 4, 136(1)
  026b5cc  fmr 2, 26
  026b5d0  stfs 3, 116(1)
  026b5d4  lfs 3, 140(1)
  026b5d8  stfs 4, 120(1)
  026b5dc  stfs 3, 124(1)
  026b5e0  fneg 31, 31
  026b5e4  bl 0xfcbe8
  026b5e8  nop
  026b5ec  fadds 1, 1, 25
  026b5f0  fsubs 2, 24, 1
  026b5f4  fsubs 3, 22, 1
  026b5f8  fsub 4, 1, 2
  026b5fc  fsel 1, 4, 2, 1
  026b600  fsub 2, 3, 1
  026b604  fsel 3, 2, 3, 1
  026b608  fmr 1, 28
  026b60c  fmr 2, 17
  026b610  fmuls 4, 3, 3
  026b614  fmuls 5, 4, 3
  026b618  fmuls 6, 4, 5
  026b61c  fmadds 3, 5, 21, 3
  026b620  fmuls 5, 4, 6
  026b624  fmadds 3, 6, 20, 3
  026b628  fmuls 4, 4, 5
  026b62c  fmadds 3, 5, 19, 3
  026b630  fmadds 15, 4, 18, 3
  026b634  bl 0xfcbe8
  026b638  nop
  026b63c  fmadds 3, 15, 1, 16
  026b640  fmr 1, 28
  026b644  lfs 16, 116(1)
  026b648  fmr 2, 26
  026b64c  stfs 3, 112(1)
  026b650  bl 0xfcbe8
  026b654  nop
  026b658  fsubs 2, 24, 1
  026b65c  fsubs 3, 22, 1
  026b660  fsub 4, 1, 2
  026b664  fsel 1, 4, 2, 1
  026b668  fsub 2, 3, 1
  026b66c  fsel 3, 2, 3, 1
  026b670  fmr 1, 28
  026b674  fmr 2, 17
  026b678  fmuls 4, 3, 3
  026b67c  fmuls 5, 4, 3
  026b680  fmuls 6, 4, 5
  026b684  fmadds 3, 5, 21, 3
  026b688  fmuls 5, 4, 6
  026b68c  fmadds 3, 6, 20, 3
  026b690  fmuls 4, 4, 5
  026b694  fmadds 3, 5, 19, 3
  026b698  fmadds 15, 4, 18, 3
  026b69c  bl 0xfcbe8
  026b6a0  nop
  026b6a4  lfs 2, 112(1)
  026b6a8  lis 3, 122
  026b6ac  lfs 3, 120(1)
  026b6b0  stfs 2, 48(1)
  026b6b4  fmadds 1, 15, 1, 16
  026b6b8  stfs 3, 56(1)
  026b6bc  lfs 2, 328(24)
  026b6c0  lfs 3, -13308(3)
  026b6c4  lis 3, 165
  026b6c8  fsubs 2, 2, 3
  026b6cc  stfs 1, 116(1)
  026b6d0  lfs 1, 124(1)
  026b6d4  stfs 1, 60(1)
  026b6d8  stfs 2, 11168(3)
  026b6dc  ld 4, 56(1)
  026b6e0  lfs 1, 116(1)
  026b6e4  stfs 1, 52(1)
  026b6e8  ld 3, 48(1)
  026b6ec  bl 0x118d60
  026b6f0  nop
  026b6f4  lfs 2, 328(24)
  026b6f8  lfs 3, -13332(25)
  026b6fc  fmr 16, 1
  026b700  fadds 1, 2, 3
  026b704  fcmpu 0, 16, 1
  026b708  cror 6, 1, 2
  026b70c  bt 6, 0x26b788
  026b710  lis 3, 165
  026b714  cmpwi 31, 0
  026b718  lfs 1, 11168(3)
  026b71c  fsub 2, 16, 1
  026b720  fsel 16, 2, 16, 1
  026b724  bf 2, 0x26b754
  026b728  stfs 30, 80(1)
  026b72c  fmr 1, 16
  026b730  stfs 31, 88(1)
  026b734  addic 3, 1, 112
  026b738  stfs 29, 84(1)
  026b73c  li 4, 0
  026b740  stfs 28, 92(1)
  026b744  ld 7, 80(1)
  026b748  ld 8, 88(1)
  026b74c  bl 0x11ffb0
  026b750  nop
  026b754  cmpwi 31, 1
  026b758  bf 2, 0x26b788
  026b75c  stfs 30, 80(1)
  026b760  stfs 31, 88(1)
  026b764  addic 3, 1, 112
  026b768  stfs 29, 84(1)
  026b76c  li 4, 0
  026b770  stfs 28, 92(1)
  026b774  fmr 1, 16
  026b778  ld 7, 80(1)
  026b77c  ld 8, 88(1)
  026b780  bl 0x134540
  026b784  nop
  026b788  addic 26, 26, 1
  026b78c  cmpw 26, 27
  026b790  bt 0, 0x26b57c
  026b794  cmpwi 29, 0
  026b798  bt 2, 0x26bb20
  026b79c  lfs 1, 320(24)
  026b7a0  lis 3, 39
  026b7a4  lfs 2, 324(24)
  026b7a8  stfs 1, 128(1)
  026b7ac  addi 4, 3, -20676
  026b7b0  lfs 1, 328(24)
  026b7b4  addic 3, 1, 128
  026b7b8  stfs 2, 132(1)
  026b7bc  lfs 2, 332(24)
  026b7c0  stfs 1, 136(1)
  026b7c4  stfs 2, 140(1)
  026b7c8  lfs 31, 72(4)
  026b7cc  lfs 2, 344(24)
  026b7d0  lfs 3, 340(24)
  026b7d4  fmr 1, 31
  026b7d8  ori 4, 3, 0
  026b7dc  fneg 3, 3
  026b7e0  bl 0x117238
  026b7e4  nop
  026b7e8  lfs 1, 328(24)
  026b7ec  cmpwi 27, 0
  026b7f0  lfs 2, -13332(25)
  026b7f4  ori 31, 23, 0
  026b7f8  fadds 1, 1, 2
  026b7fc  stfs 1, 136(1)
  026b800  bf 1, 0x26b958
  026b804  lis 3, 39
  026b808  addi 3, 3, -20676
  026b80c  lfs 30, 32(3)
  026b810  lfs 29, 36(3)
  026b814  lfs 27, 40(3)
  026b818  lfs 26, 44(3)
  026b81c  lfs 25, 48(3)
  026b820  lfs 24, 52(3)
  026b824  lfs 23, 56(3)
  026b828  lfs 22, 60(3)
  026b82c  fmr 3, 1
  026b830  fmr 1, 28
  026b834  lfs 21, 128(1)
  026b838  lfs 4, 132(1)
  026b83c  fmr 2, 30
  026b840  stfs 21, 112(1)
  026b844  lfs 5, 140(1)
  026b848  stfs 4, 116(1)
  026b84c  stfs 3, 120(1)
  026b850  stfs 5, 124(1)
  026b854  bl 0xfcbe8
  026b858  nop
  026b85c  fadds 1, 1, 29
  026b860  fsubs 2, 27, 1
  026b864  fsubs 3, 26, 1
  026b868  fsub 4, 1, 2
  026b86c  fsel 1, 4, 2, 1
  026b870  fsub 2, 3, 1
  026b874  fsel 3, 2, 3, 1
  026b878  fmr 1, 28
  026b87c  fmr 2, 31
  026b880  fmuls 4, 3, 3
  026b884  fmuls 5, 4, 3
  026b888  fmuls 6, 4, 5
  026b88c  fmadds 3, 5, 25, 3
  026b890  fmuls 5, 4, 6
  026b894  fmadds 3, 6, 24, 3
  026b898  fmuls 4, 4, 5
  026b89c  fmadds 3, 5, 23, 3
  026b8a0  fmadds 20, 4, 22, 3
  026b8a4  bl 0xfcbe8
  026b8a8  nop
  026b8ac  fmadds 3, 20, 1, 21
  026b8b0  fmr 1, 28
  026b8b4  lfs 21, 116(1)
  026b8b8  fmr 2, 30
  026b8bc  stfs 3, 112(1)
  026b8c0  bl 0xfcbe8
  026b8c4  nop
  026b8c8  fsubs 2, 27, 1
  026b8cc  fsubs 3, 26, 1
  026b8d0  fsub 4, 1, 2
  026b8d4  fsel 1, 4, 2, 1
  026b8d8  fsub 2, 3, 1
  026b8dc  fsel 3, 2, 3, 1
  026b8e0  fmr 1, 28
  026b8e4  fmr 2, 31
  026b8e8  fmuls 4, 3, 3
  026b8ec  fmuls 5, 4, 3
  026b8f0  fmuls 6, 4, 5
  026b8f4  fmadds 3, 5, 25, 3
  026b8f8  fmuls 5, 4, 6
  026b8fc  fmadds 3, 6, 24, 3
  026b900  fmuls 4, 4, 5
  026b904  fmadds 3, 5, 23, 3
  026b908  fmadds 20, 4, 22, 3
  026b90c  bl 0xfcbe8
  026b910  nop
  026b914  fmadds 1, 20, 1, 21
  026b918  lfs 2, 112(1)
  026b91c  lfs 3, 120(1)
  026b920  stfs 2, 48(1)
  026b924  stfs 3, 56(1)
  026b928  lfs 2, 124(1)
  026b92c  stfs 2, 60(1)
  026b930  stfs 1, 52(1)
  026b934  stfs 1, 116(1)
  026b938  ld 3, 48(1)
  026b93c  ld 4, 56(1)
  026b940  bl 0x118e38
  026b944  nop
  026b948  addic 31, 31, 1
  026b94c  lfs 1, 136(1)
  026b950  cmpw 31, 27
  026b954  bt 0, 0x26b82c
  026b958  lfs 1, 320(24)
  026b95c  lis 3, 39
  026b960  lfs 2, 324(24)
  026b964  stfs 1, 128(1)
  026b968  addi 5, 3, -20676
  026b96c  lfs 1, 328(24)
  026b970  stfs 2, 132(1)
  026b974  addic 3, 1, 128
  026b978  lfs 2, 332(24)
  026b97c  stfs 1, 136(1)
  026b980  stfs 2, 140(1)
  026b984  ori 4, 3, 0
  026b988  lfs 1, 76(5)
  026b98c  lfs 2, 344(24)
  026b990  lfs 3, 340(24)
  026b994  fneg 3, 3
  026b998  bl 0x117238
  026b99c  nop
  026b9a0  lfs 1, 328(24)
  026b9a4  srawi 3, 27, 1
  026b9a8  lfs 2, -13332(25)
  026b9ac  addze 3, 3
  026b9b0  fadds 1, 1, 2
  026b9b4  cmpwi 3, 0
  026b9b8  stfs 1, 136(1)
  026b9bc  bf 1, 0x26bb20
  026b9c0  lis 3, 39
  026b9c4  addi 3, 3, -20676
  026b9c8  lfs 31, 32(3)
  026b9cc  lfs 30, 36(3)
  026b9d0  lfs 29, 40(3)
  026b9d4  lfs 27, 44(3)
  026b9d8  lfs 26, 48(3)
  026b9dc  lfs 25, 52(3)
  026b9e0  lfs 24, 56(3)
  026b9e4  lfs 23, 60(3)
  026b9e8  lfs 22, 64(3)
  026b9ec  fmr 3, 1
  026b9f0  fmr 1, 28
  026b9f4  lfs 21, 128(1)
  026b9f8  lfs 4, 132(1)
  026b9fc  fmr 2, 31
  026ba00  stfs 21, 112(1)
  026ba04  lfs 5, 140(1)
  026ba08  stfs 4, 116(1)
  026ba0c  stfs 3, 120(1)
  026ba10  stfs 5, 124(1)
  026ba14  bl 0xfcbe8
  026ba18  nop
  026ba1c  fadds 1, 1, 30
  026ba20  fsubs 2, 29, 1
  026ba24  fsubs 3, 27, 1
  026ba28  fsub 4, 1, 2
  026ba2c  fsel 1, 4, 2, 1
  026ba30  fsub 2, 3, 1
  026ba34  fsel 3, 2, 3, 1
  026ba38  fmr 1, 28
  026ba3c  fmr 2, 22
  026ba40  fmuls 4, 3, 3
  026ba44  fmuls 5, 4, 3
  026ba48  fmuls 6, 4, 5
  026ba4c  fmadds 3, 5, 26, 3
  026ba50  fmuls 5, 4, 6
  026ba54  fmadds 3, 6, 25, 3
  026ba58  fmuls 4, 4, 5
  026ba5c  fmadds 3, 5, 24, 3
  026ba60  fmadds 20, 4, 23, 3
  026ba64  bl 0xfcbe8
  026ba68  nop
  026ba6c  fmadds 3, 20, 1, 21
  026ba70  fmr 1, 28
  026ba74  lfs 21, 116(1)
  026ba78  fmr 2, 31
  026ba7c  stfs 3, 112(1)
  026ba80  bl 0xfcbe8
  026ba84  nop
  026ba88  fsubs 2, 29, 1
  026ba8c  fsubs 3, 27, 1
  026ba90  fsub 4, 1, 2
  026ba94  fsel 1, 4, 2, 1
  026ba98  fsub 2, 3, 1
  026ba9c  fsel 3, 2, 3, 1
  026baa0  fmr 1, 28
  026baa4  fmr 2, 22
  026baa8  fmuls 4, 3, 3
  026baac  fmuls 5, 4, 3
  026bab0  fmuls 6, 4, 5
  026bab4  fmadds 3, 5, 26, 3
  026bab8  fmuls 5, 4, 6
  026babc  fmadds 3, 6, 25, 3
  026bac0  fmuls 4, 4, 5
  026bac4  fmadds 3, 5, 24, 3
  026bac8  fmadds 20, 4, 23, 3
  026bacc  bl 0xfcbe8
  026bad0  nop
  026bad4  fmadds 1, 20, 1, 21
  026bad8  lfs 2, 112(1)
  026badc  lfs 3, 120(1)
  026bae0  stfs 2, 48(1)
  026bae4  stfs 3, 56(1)
  026bae8  lfs 2, 124(1)
  026baec  stfs 2, 60(1)
  026baf0  stfs 1, 52(1)
  026baf4  stfs 1, 116(1)
  026baf8  ld 3, 48(1)
  026bafc  ld 4, 56(1)
  026bb00  bl 0x118e38
  026bb04  nop
  026bb08  srawi 3, 27, 1
  026bb0c  lfs 1, 136(1)
  026bb10  addze 3, 3
  026bb14  addic 23, 23, 1
  026bb18  cmpw 23, 3
  026bb1c  bt 0, 0x26b9ec
  026bb20  lis 3, 149
  026bb24  addic 3, 3, 5056
  026bb28  lfs 1, 320(3)
  026bb2c  stfs 1, 48(28)
  026bb30  lfs 1, 324(3)
  026bb34  stfs 1, 52(28)
  026bb38  lfs 1, 328(3)
  026bb3c  stfs 1, 56(28)
  026bb40  lfs 1, 332(3)
  026bb44  stfs 1, 60(28)
  026bb48  ld 0, 448(1)
  026bb4c  mtlr 0
  026bb50  lfd 14, 288(1)
  026bb54  lfd 15, 296(1)
  026bb58  lfd 16, 304(1)
  026bb5c  lfd 17, 312(1)
  026bb60  lfd 18, 320(1)
  026bb64  lfd 19, 328(1)
  026bb68  lfd 20, 336(1)
  026bb6c  lfd 21, 344(1)
  026bb70  lfd 22, 352(1)
  026bb74  lfd 23, 360(1)
  026bb78  lfd 24, 368(1)
  026bb7c  lfd 25, 376(1)
  026bb80  lfd 26, 384(1)
  026bb84  lfd 27, 392(1)
  026bb88  lfd 28, 400(1)
  026bb8c  lfd 29, 408(1)
  026bb90  lfd 30, 416(1)
  026bb94  lfd 31, 424(1)
  026bb98  ld 20, 192(1)
  026bb9c  ld 21, 200(1)
  026bba0  ld 22, 208(1)
  026bba4  ld 23, 216(1)
  026bba8  ld 24, 224(1)
  026bbac  ld 25, 232(1)
  026bbb0  ld 26, 240(1)
  026bbb4  ld 27, 248(1)
  026bbb8  ld 28, 256(1)
  026bbbc  ld 29, 264(1)
  026bbc0  ld 30, 272(1)
  026bbc4  ld 31, 280(1)
  026bbc8  addi 1, 1, 432
  026bbcc  blr
