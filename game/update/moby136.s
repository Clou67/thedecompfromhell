# game/update/moby136.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

UpdateMoby_136:   # 0x25add0, 0x514 bytes
  025add0  stdu 1, -192(1)
  025add4  mflr 0
  025add8  std 0, 208(1)
  025addc  std 31, 184(1)
  025ade0  ori 31, 3, 0
  025ade4  lis 4, 51
  025ade8  std 30, 176(1)
  025adec  li 5, 0
  025adf0  std 29, 168(1)
  025adf4  std 28, 160(1)
  025adf8  lwz 30, 120(31)
  025adfc  bl 0x10675c
  025ae00  nop
  025ae04  cmpwi 3, 0
  025ae08  bt 2, 0x25ae18
  025ae0c  ori 3, 31, 0
  025ae10  bl 0xefb38
  025ae14  nop
  025ae18  lbz 3, 32(31)
  025ae1c  cmpwi 3, 4
  025ae20  cmpwi 1, 3, 0
  025ae24  cmpwi 6, 3, 1
  025ae28  cmpwi 7, 3, 2
  025ae2c  bt 2, 0x25b1d8
  025ae30  cmpwi 3, 3
  025ae34  bt 2, 0x25b0b8
  025ae38  bt 30, 0x25b054
  025ae3c  bt 26, 0x25afdc
  025ae40  bf 6, 0x25b2c4
  025ae44  lwz 3, 224(30)
  025ae48  cmpwi 3, -1
  025ae4c  bf 2, 0x25ae60
  025ae50  ori 3, 31, 0
  025ae54  bl 0xefb38
  025ae58  nop
  025ae5c  b 0x25b2c4
  025ae60  lfs 1, 16(31)
  025ae64  lis 3, 38
  025ae68  stfs 1, 192(30)
  025ae6c  addi 3, 3, -21108
  025ae70  lfs 1, 20(31)
  025ae74  stfs 1, 196(30)
  025ae78  lfs 1, 24(31)
  025ae7c  lwz 4, 228(30)
  025ae80  stfs 1, 200(30)
  025ae84  lfs 1, 28(31)
  025ae88  cmpwi 4, 0
  025ae8c  stfs 1, 204(30)
  025ae90  lfs 1, 72(31)
  025ae94  lfs 2, 0(3)
  025ae98  bt 2, 0x25aea8
  025ae9c  lis 3, 38
  025aea0  addi 3, 3, -21108
  025aea4  lfs 2, 4(3)
  025aea8  fmr 3, 1
  025aeac  fmr 1, 2
  025aeb0  fmr 2, 3
  025aeb4  bl 0x502578
  025aeb8  nop
  025aebc  lis 3, 38
  025aec0  addi 3, 3, -21108
  025aec4  lfs 2, 8(3)
  025aec8  lfs 3, 12(3)
  025aecc  fadds 2, 1, 2
  025aed0  fsubs 5, 3, 1
  025aed4  lfs 4, 16(3)
  025aed8  li 4, 1
  025aedc  fsubs 3, 3, 2
  025aee0  fsub 7, 1, 5
  025aee4  fsubs 6, 4, 2
  025aee8  fsubs 4, 4, 1
  025aeec  fsub 8, 2, 3
  025aef0  fsel 1, 7, 5, 1
  025aef4  fsel 2, 8, 3, 2
  025aef8  fsub 5, 4, 1
  025aefc  lfs 3, 20(3)
  025af00  fsub 7, 6, 2
  025af04  fsel 1, 5, 4, 1
  025af08  lfs 4, 24(3)
  025af0c  lfs 5, 28(3)
  025af10  lfs 8, 32(3)
  025af14  lfs 10, 192(30)
  025af18  fsel 2, 7, 6, 2
  025af1c  fmuls 6, 1, 1
  025af20  fmuls 7, 2, 2
  025af24  fmuls 9, 6, 1
  025af28  fmuls 11, 7, 2
  025af2c  fmuls 12, 6, 9
  025af30  fmadds 1, 9, 3, 1
  025af34  lfs 9, 196(30)
  025af38  fmuls 13, 7, 11
  025af3c  fmadds 2, 11, 3, 2
  025af40  fmuls 11, 6, 12
  025af44  lfs 3, 36(3)
  025af48  fmadds 1, 12, 4, 1
  025af4c  fmuls 12, 7, 13
  025af50  fmadds 2, 13, 4, 2
  025af54  fmuls 4, 6, 11
  025af58  fmadds 1, 11, 5, 1
  025af5c  lfs 6, 200(30)
  025af60  fmuls 7, 7, 12
  025af64  fmadds 2, 12, 5, 2
  025af68  fmadds 1, 4, 8, 1
  025af6c  fmadds 2, 7, 8, 2
  025af70  fmadds 1, 1, 3, 9
  025af74  fmadds 2, 2, 3, 10
  025af78  stfs 1, 212(30)
  025af7c  stfs 2, 208(30)
  025af80  lfs 1, 40(3)
  025af84  fadds 1, 6, 1
  025af88  stfs 1, 216(30)
  025af8c  lbz 3, 83(31)
  025af90  stb 4, 32(31)
  025af94  cmpwi 3, 0
  025af98  bt 2, 0x25b2c4
  025af9c  lis 3, 38
  025afa0  lis 4, 114
  025afa4  addi 3, 3, -21108
  025afa8  li 5, 0
  025afac  lfs 1, 44(3)
  025afb0  lfs 2, -3056(4)
  025afb4  ori 3, 31, 0
  025afb8  li 4, 0
  025afbc  fmuls 1, 2, 1
  025afc0  fctiwz 1, 1
  025afc4  stfd 1, 144(1)
  025afc8  lwz 6, 148(1)
  025afcc  extsw 6, 6
  025afd0  bl 0xfddc0
  025afd4  nop
  025afd8  b 0x25b2c4
  025afdc  lis 3, 151
  025afe0  lwz 4, 224(30)
  025afe4  addic 3, 3, -25376
  025afe8  extsw 4, 4
  025afec  addic 3, 3, 128
  025aff0  bl 0x110b70
  025aff4  nop
  025aff8  cmpwi 3, 0
  025affc  bt 2, 0x25b2c4
  025b000  li 3, 2
  025b004  lbz 4, 83(31)
  025b008  cmpwi 4, 1
  025b00c  stb 3, 32(31)
  025b010  bt 2, 0x25b2c4
  025b014  lis 3, 38
  025b018  lis 4, 114
  025b01c  addi 3, 3, -21108
  025b020  li 5, 0
  025b024  lfs 1, 44(3)
  025b028  lfs 2, -3056(4)
  025b02c  ori 3, 31, 0
  025b030  li 4, 1
  025b034  fmuls 1, 2, 1
  025b038  fctiwz 1, 1
  025b03c  stfd 1, 144(1)
  025b040  lwz 6, 148(1)
  025b044  extsw 6, 6
  025b048  bl 0xfddc0
  025b04c  nop
  025b050  b 0x25b2c4
  025b054  lbz 3, 112(31)
  025b058  rlwinm 3, 3, 0, 30, 30
  025b05c  cmpwi 3, 0
  025b060  bt 2, 0x25b2c4
  025b064  li 3, 3
  025b068  lbz 4, 83(31)
  025b06c  cmpwi 4, 2
  025b070  stb 3, 32(31)
  025b074  bt 2, 0x25b2c4
  025b078  lis 3, 38
  025b07c  lis 4, 114
  025b080  addi 3, 3, -21108
  025b084  li 5, 0
  025b088  lfs 1, 44(3)
  025b08c  lfs 2, -3056(4)
  025b090  ori 3, 31, 0
  025b094  fmuls 1, 2, 1
  025b098  li 4, 2
  025b09c  fctiwz 1, 1
  025b0a0  stfd 1, 144(1)
  025b0a4  lwz 6, 148(1)
  025b0a8  extsw 6, 6
  025b0ac  bl 0xfddc0
  025b0b0  nop
  025b0b4  b 0x25b2c4
  025b0b8  lis 3, 38
  025b0bc  lis 4, 114
  025b0c0  addi 29, 3, -21108
  025b0c4  lis 6, 114
  025b0c8  addic 3, 30, 232
  025b0cc  addic 5, 30, 236
  025b0d0  lfs 4, 52(29)
  025b0d4  lfs 2, -3048(4)
  025b0d8  lfs 1, 48(29)
  025b0dc  fmuls 2, 2, 4
  025b0e0  lfs 3, -3052(6)
  025b0e4  fmuls 4, 3, 4
  025b0e8  fmr 3, 2
  025b0ec  bl 0x109c30
  025b0f0  nop
  025b0f4  lwz 3, 120(31)
  025b0f8  lis 4, 151
  025b0fc  addic 4, 4, -25376
  025b100  lfs 1, 208(3)
  025b104  lfs 2, 192(3)
  025b108  lfs 3, 232(3)
  025b10c  fsubs 1, 1, 2
  025b110  lfs 4, 212(3)
  025b114  lfs 5, 196(3)
  025b118  fsubs 4, 4, 5
  025b11c  lfs 5, 216(3)
  025b120  lfs 6, 200(3)
  025b124  lfs 7, 220(3)
  025b128  fsubs 5, 5, 6
  025b12c  fmadds 1, 3, 1, 2
  025b130  stfs 1, 16(31)
  025b134  lfs 1, 196(3)
  025b138  fmadds 1, 3, 4, 1
  025b13c  stfs 1, 20(31)
  025b140  lfs 1, 200(3)
  025b144  stfs 7, 28(31)
  025b148  fmadds 1, 3, 5, 1
  025b14c  lis 3, 114
  025b150  stfs 1, 24(31)
  025b154  lfs 1, 132(4)
  025b158  lfs 2, 196(30)
  025b15c  lfs 3, 128(4)
  025b160  fsubs 1, 1, 2
  025b164  lfs 2, 192(30)
  025b168  lfs 4, 260(4)
  025b16c  fsubs 2, 3, 2
  025b170  fmuls 4, 4, 4
  025b174  lfs 3, 136(4)
  025b178  lfs 5, 200(30)
  025b17c  lfs 6, 256(4)
  025b180  fsubs 3, 3, 5
  025b184  lfs 5, 264(4)
  025b188  fmuls 1, 1, 1
  025b18c  fmadds 4, 6, 6, 4
  025b190  fmadds 1, 2, 2, 1
  025b194  fmadds 2, 5, 5, 4
  025b198  fmadds 1, 3, 3, 1
  025b19c  fsqrts 2, 2
  025b1a0  lfs 3, 56(29)
  025b1a4  lfs 4, -3056(3)
  025b1a8  fsqrts 1, 1
  025b1ac  fmuls 3, 4, 3
  025b1b0  fctidz 3, 3
  025b1b4  fdivs 1, 1, 2
  025b1b8  fcfid 2, 3
  025b1bc  frsp 2, 2
  025b1c0  fcmpu 0, 1, 2
  025b1c4  cror 6, 1, 2
  025b1c8  bt 6, 0x25b2c4
  025b1cc  li 3, 4
  025b1d0  stb 3, 32(31)
  025b1d4  b 0x25b2c4
  025b1d8  lis 3, 38
  025b1dc  lis 4, 114
  025b1e0  addi 29, 3, -21108
  025b1e4  lis 6, 114
  025b1e8  addic 5, 30, 236
  025b1ec  addic 3, 30, 232
  025b1f0  li 28, 0
  025b1f4  lfs 4, 52(29)
  025b1f8  lfs 2, -3048(4)
  025b1fc  lfs 1, 60(29)
  025b200  fmuls 2, 2, 4
  025b204  lfs 3, -3052(6)
  025b208  fmuls 4, 3, 4
  025b20c  fmr 3, 2
  025b210  bl 0x109c30
  025b214  nop
  025b218  lwz 5, 120(31)
  025b21c  ori 3, 31, 0
  025b220  addic 4, 1, 128
  025b224  li 6, 1
  025b228  lfs 1, 208(5)
  025b22c  lfs 2, 192(5)
  025b230  lfs 3, 232(5)
  025b234  fsubs 1, 1, 2
  025b238  lfs 4, 212(5)
  025b23c  lfs 5, 196(5)
  025b240  fsubs 4, 4, 5
  025b244  lfs 5, 216(5)
  025b248  lfs 6, 200(5)
  025b24c  lfs 7, 220(5)
  025b250  fsubs 5, 5, 6
  025b254  fmadds 1, 3, 1, 2
  025b258  li 9, 0
  025b25c  li 10, 1
  025b260  stfs 1, 16(31)
  025b264  lfs 2, 196(5)
  025b268  std 28, 112(1)
  025b26c  fmadds 2, 3, 4, 2
  025b270  stfs 2, 20(31)
  025b274  lfs 4, 200(5)
  025b278  stfs 7, 28(31)
  025b27c  fmadds 3, 3, 5, 4
  025b280  stfs 1, 128(1)
  025b284  stfs 2, 132(1)
  025b288  stfs 7, 140(1)
  025b28c  stfs 3, 24(31)
  025b290  lfs 1, 40(29)
  025b294  fadds 1, 3, 1
  025b298  stfs 1, 136(1)
  025b29c  lfs 2, 48(29)
  025b2a0  lfs 1, 64(29)
  025b2a4  fmr 3, 2
  025b2a8  bl 0x105870
  025b2ac  nop
  025b2b0  lwz 3, 232(30)
  025b2b4  cmpwi 3, 0
  025b2b8  bt 1, 0x25b2c4
  025b2bc  li 3, 3
  025b2c0  stb 3, 32(31)
  025b2c4  ld 0, 208(1)
  025b2c8  mtlr 0
  025b2cc  ld 28, 160(1)
  025b2d0  ld 29, 168(1)
  025b2d4  ld 30, 176(1)
  025b2d8  ld 31, 184(1)
  025b2dc  addi 1, 1, 192
  025b2e0  blr
