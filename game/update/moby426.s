# game/update/moby426.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M426_0036ad20:   # 0x36ad20, 0x144 bytes
  036ad20  stdu 1, -192(1)
  036ad24  mflr 0
  036ad28  std 0, 208(1)
  036ad2c  stfd 30, 176(1)
  036ad30  stfd 31, 184(1)
  036ad34  std 31, 168(1)
  036ad38  std 30, 160(1)
  036ad3c  ori 31, 4, 0
  036ad40  ori 30, 3, 0
  036ad44  fmr 31, 2
  036ad48  addic 3, 31, 100
  036ad4c  std 29, 152(1)
  036ad50  std 28, 144(1)
  036ad54  fmr 30, 1
  036ad58  bl 0x4fff60
  036ad5c  nop
  036ad60  cmpwi 3, 0
  036ad64  bt 2, 0x36ae3c
  036ad68  lis 3, 150
  036ad6c  li 4, 576
  036ad70  addic 3, 3, 19008
  036ad74  lwz 3, 176(3)
  036ad78  and 3, 3, 4
  036ad7c  cmpwi 3, 0
  036ad80  bt 2, 0x36ae3c
  036ad84  lis 4, 132
  036ad88  lis 5, 132
  036ad8c  fmr 2, 30
  036ad90  addic 29, 1, 112
  036ad94  fmr 3, 31
  036ad98  ori 3, 29, 0
  036ad9c  lfs 1, 4516(4)
  036ada0  lfs 4, 4548(5)
  036ada4  fmuls 1, 1, 4
  036ada8  bl 0xfe610
  036adac  nop
  036adb0  lfs 1, 112(1)
  036adb4  addic 28, 1, 128
  036adb8  lfs 2, 0(31)
  036adbc  ori 3, 30, 0
  036adc0  lfs 3, 116(1)
  036adc4  ori 5, 28, 0
  036adc8  fadds 1, 1, 2
  036adcc  lfs 2, 4(31)
  036add0  lfs 4, 120(1)
  036add4  fadds 2, 3, 2
  036add8  lfs 3, 8(31)
  036addc  lbz 4, 49(31)
  036ade0  fadds 3, 4, 3
  036ade4  clrlwi 4, 4, 31
  036ade8  stfs 1, 112(1)
  036adec  stfs 2, 116(1)
  036adf0  stfs 3, 120(1)
  036adf4  bl 0xf1114
  036adf8  nop
  036adfc  lis 3, 55
  036ae00  lis 5, 132
  036ae04  addi 6, 3, -21224
  036ae08  ori 3, 30, 0
  036ae0c  ori 4, 29, 0
  036ae10  lfs 1, 4552(5)
  036ae14  ori 5, 28, 0
  036ae18  lfs 2, 0(6)
  036ae1c  bl 0x184670
  036ae20  nop
  036ae24  lis 3, 132
  036ae28  lbz 4, 49(31)
  036ae2c  xori 4, 4, 1
  036ae30  lwz 3, 4520(3)
  036ae34  stw 3, 100(31)
  036ae38  stb 4, 49(31)
  036ae3c  ld 0, 208(1)
  036ae40  mtlr 0
  036ae44  lfd 30, 176(1)
  036ae48  lfd 31, 184(1)
  036ae4c  ld 28, 144(1)
  036ae50  ld 29, 152(1)
  036ae54  ld 30, 160(1)
  036ae58  ld 31, 168(1)
  036ae5c  addi 1, 1, 192
  036ae60  blr

M426_0036ae68:   # 0x36ae68, 0x184 bytes
  036ae68  stdu 1, -160(1)
  036ae6c  mflr 0
  036ae70  std 0, 176(1)
  036ae74  stfd 31, 152(1)
  036ae78  std 31, 144(1)
  036ae7c  std 30, 136(1)
  036ae80  ori 31, 4, 0
  036ae84  ori 30, 3, 0
  036ae88  std 29, 128(1)
  036ae8c  addic 3, 31, 104
  036ae90  bl 0x4fff60
  036ae94  nop
  036ae98  cmpwi 3, 0
  036ae9c  bt 2, 0x36afcc
  036aea0  lis 3, 150
  036aea4  li 4, 1056
  036aea8  addic 3, 3, 19008
  036aeac  lwz 3, 176(3)
  036aeb0  and 3, 3, 4
  036aeb4  cmpwi 3, 0
  036aeb8  bt 2, 0x36afcc
  036aebc  lwz 3, 108(31)
  036aec0  cmpwi 3, 0
  036aec4  bf 1, 0x36afcc
  036aec8  addic 29, 1, 112
  036aecc  clrlwi 4, 3, 31
  036aed0  ori 3, 30, 0
  036aed4  ori 5, 29, 0
  036aed8  bl 0xf1114
  036aedc  nop
  036aee0  lfs 2, 4(31)
  036aee4  lfs 3, 0(31)
  036aee8  fmuls 1, 2, 2
  036aeec  lfs 4, 8(31)
  036aef0  lis 3, 132
  036aef4  lis 4, 132
  036aef8  lis 5, 132
  036aefc  lfs 6, 4656(3)
  036af00  fmadds 1, 3, 3, 1
  036af04  lis 3, 55
  036af08  addi 3, 3, -20892
  036af0c  lis 7, 132
  036af10  fmadds 1, 4, 4, 1
  036af14  lfs 11, 0(3)
  036af18  lfs 7, 112(1)
  036af1c  lfs 8, 116(1)
  036af20  lfs 9, 120(1)
  036af24  lfs 10, 4524(4)
  036af28  fsqrts 5, 1
  036af2c  lfs 1, 4548(5)
  036af30  ori 3, 30, 0
  036af34  addic 6, 30, 64
  036af38  ori 4, 29, 0
  036af3c  fmuls 1, 10, 1
  036af40  lwz 5, 112(31)
  036af44  lwz 7, 4660(7)
  036af48  extsw 8, 7
  036af4c  fdivs 6, 6, 5
  036af50  fsub 10, 11, 5
  036af54  fsub 12, 11, 5
  036af58  fsub 13, 11, 5
  036af5c  fsub 0, 5, 11
  036af60  fsub 31, 5, 11
  036af64  fsub 5, 5, 11
  036af68  fmuls 4, 4, 6
  036af6c  fmuls 2, 2, 6
  036af70  fmuls 3, 3, 6
  036af74  fsel 6, 10, 11, 4
  036af78  fsel 10, 12, 11, 2
  036af7c  fsel 11, 13, 11, 3
  036af80  fsel 4, 0, 6, 4
  036af84  fsel 2, 31, 10, 2
  036af88  fsel 3, 5, 11, 3
  036af8c  fadds 4, 9, 4
  036af90  fadds 2, 8, 2
  036af94  fadds 3, 7, 3
  036af98  stfs 4, 120(1)
  036af9c  stfs 2, 116(1)
  036afa0  stfs 3, 112(1)
  036afa4  bl 0x192330
  036afa8  nop
  036afac  cmpwi 3, 0
  036afb0  bt 2, 0x36afcc
  036afb4  lwz 4, 108(31)
  036afb8  lis 3, 132
  036afbc  addic 4, 4, -1
  036afc0  stw 4, 108(31)
  036afc4  lwz 3, 4528(3)
  036afc8  stw 3, 104(31)
  036afcc  ld 0, 176(1)
  036afd0  mtlr 0
  036afd4  lfd 31, 152(1)
  036afd8  ld 29, 128(1)
  036afdc  ld 30, 136(1)
  036afe0  ld 31, 144(1)
  036afe4  addi 1, 1, 160
  036afe8  blr

M426_0036b008:   # 0x36b008, 0x608 bytes
  036b008  stdu 1, -336(1)
  036b00c  mflr 0
  036b010  std 0, 352(1)
  036b014  stfd 24, 272(1)
  036b018  stfd 25, 280(1)
  036b01c  stfd 26, 288(1)
  036b020  stfd 27, 296(1)
  036b024  stfd 28, 304(1)
  036b028  stfd 29, 312(1)
  036b02c  stfd 30, 320(1)
  036b030  stfd 31, 328(1)
  036b034  lis 6, 164
  036b038  lis 5, 55
  036b03c  std 29, 248(1)
  036b040  fmr 31, 1
  036b044  li 29, 0
  036b048  fmr 30, 2
  036b04c  addi 5, 5, -20500
  036b050  std 31, 264(1)
  036b054  std 28, 240(1)
  036b058  fmr 29, 3
  036b05c  ori 31, 3, 0
  036b060  std 30, 256(1)
  036b064  lwz 28, -28500(6)
  036b068  ori 30, 4, 0
  036b06c  cmpwi 28, 0
  036b070  std 27, 232(1)
  036b074  lfs 28, 0(5)
  036b078  bt 2, 0x36b5c8
  036b07c  lhz 3, 52(28)
  036b080  rlwinm 3, 3, 0, 19, 19
  036b084  cmpwi 3, 0
  036b088  bt 2, 0x36b5bc
  036b08c  lbz 3, 49(28)
  036b090  cmpwi 3, 0
  036b094  bt 2, 0x36b5bc
  036b098  lwz 3, 36(28)
  036b09c  cmpwi 3, 0
  036b0a0  bt 2, 0x36b5bc
  036b0a4  lhz 3, 70(3)
  036b0a8  extsh 3, 3
  036b0ac  cmpwi 3, 5
  036b0b0  bf 2, 0x36b5bc
  036b0b4  lfs 3, 4(31)
  036b0b8  lfs 2, 20(28)
  036b0bc  lfs 1, 0(31)
  036b0c0  fsubs 4, 3, 2
  036b0c4  lfs 2, 16(28)
  036b0c8  fsubs 5, 1, 2
  036b0cc  fmuls 4, 4, 4
  036b0d0  fmadds 27, 5, 5, 4
  036b0d4  fsqrts 27, 27
  036b0d8  fcmpu 0, 27, 29
  036b0dc  cror 6, 1, 2
  036b0e0  bt 6, 0x36b5bc
  036b0e4  fsubs 1, 2, 1
  036b0e8  stfs 2, 128(1)
  036b0ec  lfs 2, 20(28)
  036b0f0  lis 3, 55
  036b0f4  fsubs 3, 2, 3
  036b0f8  stfs 2, 132(1)
  036b0fc  lfs 2, 24(28)
  036b100  addi 3, 3, -20500
  036b104  stfs 2, 136(1)
  036b108  lfs 4, 28(28)
  036b10c  stfs 4, 140(1)
  036b110  fabs 5, 1
  036b114  lfs 4, 4(3)
  036b118  stfs 1, 156(1)
  036b11c  fabs 6, 3
  036b120  fadds 1, 2, 4
  036b124  stfs 3, 160(1)
  036b128  lfs 25, 8(30)
  036b12c  lis 27, 115
  036b130  addic 27, 27, 22784
  036b134  fsubs 2, 5, 6
  036b138  stfs 1, 136(1)
  036b13c  stfs 2, 164(1)
  036b140  lwz 4, 156(1)
  036b144  lfs 24, 8(3)
  036b148  lfs 1, 156(1)
  036b14c  lwz 5, 160(1)
  036b150  fabs 4, 1
  036b154  lfs 1, 160(1)
  036b158  rlwinm 5, 5, 3, 29, 29
  036b15c  lfs 26, 12(3)
  036b160  fabs 3, 1
  036b164  lwz 3, 164(1)
  036b168  lfs 1, 164(1)
  036b16c  rlwimi 5, 3, 2, 30, 30
  036b170  fsub 2, 1, 24
  036b174  fsub 7, 1, 24
  036b178  rlwimi 5, 4, 4, 28, 28
  036b17c  ori 3, 27, 0
  036b180  slwi 4, 5, 2
  036b184  rlwimi 3, 5, 2, 26, 28
  036b188  clrldi 3, 3, 32
  036b18c  lfsx 1, 27, 4
  036b190  fsel 4, 2, 4, 6
  036b194  lfs 2, 4(3)
  036b198  fsel 3, 7, 3, 5
  036b19c  fcmpu 0, 4, 24
  036b1a0  bt 1, 0x36b1ac
  036b1a4  fmr 1, 24
  036b1a8  b 0x36b2c4
  036b1ac  fsubs 5, 3, 4
  036b1b0  fadds 3, 3, 4
  036b1b4  addic 3, 1, 16
  036b1b8  li 7, 2
  036b1bc  addic 4, 3, 184
  036b1c0  addic 5, 3, 200
  036b1c4  mtctr 7
  036b1c8  fdivs 3, 5, 3
  036b1cc  fmuls 4, 3, 3
  036b1d0  stfs 3, 212(1)
  036b1d4  stfs 3, 204(1)
  036b1d8  stfs 3, 208(1)
  036b1dc  stfs 3, 200(1)
  036b1e0  lfs 6, 212(1)
  036b1e4  lfs 7, 204(1)
  036b1e8  lfs 8, 208(1)
  036b1ec  fmuls 5, 4, 4
  036b1f0  fmuls 7, 7, 4
  036b1f4  fmuls 6, 6, 5
  036b1f8  fmuls 3, 5, 5
  036b1fc  fmuls 5, 8, 5
  036b200  stfs 7, 204(1)
  036b204  fmuls 4, 6, 4
  036b208  stfs 5, 208(1)
  036b20c  stfs 4, 212(1)
  036b210  lfs 4, 184(3)
  036b214  fmuls 4, 4, 3
  036b218  stfs 4, 200(3)
  036b21c  lfs 4, 4(4)
  036b220  addic 3, 3, 8
  036b224  addic 4, 4, 8
  036b228  fmuls 4, 4, 3
  036b22c  stfs 4, 4(5)
  036b230  addic 5, 5, 8
  036b234  bdnz 0x36b210
  036b238  li 5, 4
  036b23c  ori 3, 1, 0
  036b240  mtctr 5
  036b244  lis 4, 115
  036b248  addic 5, 3, 200
  036b24c  addic 4, 4, 22752
  036b250  ori 6, 5, 0
  036b254  lfs 3, 200(3)
  036b258  lfs 4, 0(4)
  036b25c  fmuls 3, 3, 4
  036b260  lfs 4, 4(4)
  036b264  addic 4, 4, 8
  036b268  stfs 3, 200(3)
  036b26c  lfs 3, 4(5)
  036b270  addic 3, 3, 8
  036b274  fmuls 3, 3, 4
  036b278  stfs 3, 4(5)
  036b27c  addic 5, 5, 8
  036b280  bdnz 0x36b254
  036b284  fmr 3, 24
  036b288  ori 3, 1, 0
  036b28c  mtctr 7
  036b290  lfs 4, 200(3)
  036b294  fadds 3, 3, 4
  036b298  addic 3, 3, 16
  036b29c  lfs 4, 4(6)
  036b2a0  lfs 5, 8(6)
  036b2a4  lfs 6, 12(6)
  036b2a8  addic 6, 6, 16
  036b2ac  fadds 3, 3, 4
  036b2b0  fadds 3, 3, 5
  036b2b4  fadds 3, 3, 6
  036b2b8  bdnz 0x36b290
  036b2bc  fadds 3, 3, 26
  036b2c0  fmadds 1, 3, 1, 2
  036b2c4  fmr 2, 1
  036b2c8  fmr 1, 25
  036b2cc  bl 0x5026a0
  036b2d0  nop
  036b2d4  fmuls 25, 1, 1
  036b2d8  fmuls 2, 31, 31
  036b2dc  lfs 1, 4(30)
  036b2e0  fcmpu 0, 25, 2
  036b2e4  cror 6, 1, 2
  036b2e8  bt 6, 0x36b580
  036b2ec  lfs 2, 136(1)
  036b2f0  fabs 3, 27
  036b2f4  lfs 4, 8(31)
  036b2f8  stfs 27, 144(1)
  036b2fc  fsubs 2, 2, 4
  036b300  fabs 4, 2
  036b304  stfs 2, 148(1)
  036b308  lwz 3, 144(1)
  036b30c  lfs 5, 144(1)
  036b310  fabs 5, 5
  036b314  fsubs 2, 3, 4
  036b318  stfs 2, 152(1)
  036b31c  lwz 4, 148(1)
  036b320  lfs 2, 148(1)
  036b324  lwz 5, 152(1)
  036b328  rlwinm 4, 4, 3, 29, 29
  036b32c  lfs 6, 152(1)
  036b330  fabs 2, 2
  036b334  rlwimi 4, 5, 2, 30, 30
  036b338  fsub 7, 6, 24
  036b33c  fsub 6, 6, 24
  036b340  rlwimi 4, 3, 4, 28, 28
  036b344  ori 3, 27, 0
  036b348  rlwimi 3, 4, 2, 26, 28
  036b34c  slwi 4, 4, 2
  036b350  clrldi 3, 3, 32
  036b354  fsel 4, 7, 5, 4
  036b358  lfsx 27, 27, 4
  036b35c  fsel 3, 6, 2, 3
  036b360  lfs 2, 4(3)
  036b364  fcmpu 0, 4, 24
  036b368  bt 1, 0x36b374
  036b36c  fmr 26, 24
  036b370  b 0x36b48c
  036b374  fsubs 5, 3, 4
  036b378  fadds 3, 3, 4
  036b37c  addic 3, 1, 16
  036b380  li 7, 2
  036b384  addic 4, 3, 152
  036b388  addic 5, 3, 168
  036b38c  mtctr 7
  036b390  fdivs 3, 5, 3
  036b394  fmuls 4, 3, 3
  036b398  stfs 3, 180(1)
  036b39c  stfs 3, 172(1)
  036b3a0  stfs 3, 176(1)
  036b3a4  stfs 3, 168(1)
  036b3a8  lfs 6, 180(1)
  036b3ac  lfs 7, 172(1)
  036b3b0  lfs 8, 176(1)
  036b3b4  fmuls 5, 4, 4
  036b3b8  fmuls 7, 7, 4
  036b3bc  fmuls 6, 6, 5
  036b3c0  fmuls 3, 5, 5
  036b3c4  fmuls 5, 8, 5
  036b3c8  stfs 7, 172(1)
  036b3cc  fmuls 4, 6, 4
  036b3d0  stfs 5, 176(1)
  036b3d4  stfs 4, 180(1)
  036b3d8  lfs 4, 152(3)
  036b3dc  fmuls 4, 4, 3
  036b3e0  stfs 4, 168(3)
  036b3e4  lfs 4, 4(4)
  036b3e8  addic 3, 3, 8
  036b3ec  addic 4, 4, 8
  036b3f0  fmuls 4, 4, 3
  036b3f4  stfs 4, 4(5)
  036b3f8  addic 5, 5, 8
  036b3fc  bdnz 0x36b3d8
  036b400  li 5, 4
  036b404  ori 3, 1, 0
  036b408  mtctr 5
  036b40c  lis 4, 115
  036b410  addic 5, 3, 168
  036b414  addic 4, 4, 22752
  036b418  ori 6, 5, 0
  036b41c  lfs 3, 168(3)
  036b420  lfs 4, 0(4)
  036b424  fmuls 3, 3, 4
  036b428  lfs 4, 4(4)
  036b42c  addic 4, 4, 8
  036b430  stfs 3, 168(3)
  036b434  lfs 3, 4(5)
  036b438  addic 3, 3, 8
  036b43c  fmuls 3, 3, 4
  036b440  stfs 3, 4(5)
  036b444  addic 5, 5, 8
  036b448  bdnz 0x36b41c
  036b44c  fmr 3, 24
  036b450  ori 3, 1, 0
  036b454  mtctr 7
  036b458  lfs 4, 168(3)
  036b45c  fadds 3, 3, 4
  036b460  addic 3, 3, 16
  036b464  lfs 4, 4(6)
  036b468  lfs 5, 8(6)
  036b46c  lfs 6, 12(6)
  036b470  addic 6, 6, 16
  036b474  fadds 3, 3, 4
  036b478  fadds 3, 3, 5
  036b47c  fadds 3, 3, 6
  036b480  bdnz 0x36b458
  036b484  fadds 26, 3, 26
  036b488  fmadds 26, 26, 27, 2
  036b48c  fmr 2, 26
  036b490  bl 0x5026a0
  036b494  nop
  036b498  fmuls 26, 1, 1
  036b49c  fmuls 1, 30, 30
  036b4a0  fcmpu 0, 26, 1
  036b4a4  cror 6, 1, 2
  036b4a8  bt 6, 0x36b540
  036b4ac  lfs 1, 4(31)
  036b4b0  lfs 2, 132(1)
  036b4b4  lfs 3, 0(31)
  036b4b8  fsubs 1, 1, 2
  036b4bc  lfs 2, 128(1)
  036b4c0  fsubs 2, 3, 2
  036b4c4  lfs 3, 8(31)
  036b4c8  lfs 4, 136(1)
  036b4cc  fsubs 3, 3, 4
  036b4d0  fmuls 1, 1, 1
  036b4d4  fmadds 1, 2, 2, 1
  036b4d8  fmuls 2, 25, 26
  036b4dc  fmadds 1, 3, 3, 1
  036b4e0  fsqrts 1, 1
  036b4e4  fsqrts 1, 1
  036b4e8  fmuls 1, 2, 1
  036b4ec  fcmpu 0, 28, 1
  036b4f0  cror 6, 0, 2
  036b4f4  bt 6, 0x36b500
  036b4f8  ori 29, 28, 0
  036b4fc  fmr 28, 1
  036b500  lis 3, 55
  036b504  li 8, 4
  036b508  fmr 2, 24
  036b50c  addi 4, 3, -20500
  036b510  lis 5, -241
  036b514  ori 3, 28, 0
  036b518  addic 6, 1, 128
  036b51c  li 7, 13
  036b520  lfs 1, 16(4)
  036b524  lfs 3, 20(4)
  036b528  li 9, -1
  036b52c  ori 4, 5, 20351
  036b530  std 8, 112(1)
  036b534  bl 0x55284
  036b538  nop
  036b53c  b 0x36b5bc
  036b540  lis 3, 55
  036b544  li 8, 4
  036b548  fmr 2, 24
  036b54c  addi 4, 3, -20500
  036b550  lis 5, -241
  036b554  ori 3, 28, 0
  036b558  addic 6, 1, 128
  036b55c  li 7, 13
  036b560  lfs 1, 16(4)
  036b564  lfs 3, 20(4)
  036b568  li 9, -1
  036b56c  ori 4, 5, 20351
  036b570  std 8, 112(1)
  036b574  bl 0x55284
  036b578  nop
  036b57c  b 0x36b5bc
  036b580  lis 3, 55
  036b584  li 8, 4
  036b588  fmr 2, 24
  036b58c  addi 4, 3, -20500
  036b590  lis 5, -241
  036b594  ori 3, 28, 0
  036b598  addic 6, 1, 128
  036b59c  li 7, 13
  036b5a0  lfs 1, 16(4)
  036b5a4  lfs 3, 20(4)
  036b5a8  li 9, -1
  036b5ac  ori 4, 5, 20351
  036b5b0  std 8, 112(1)
  036b5b4  bl 0x55284
  036b5b8  nop
  036b5bc  lwz 28, 40(28)
  036b5c0  cmpwi 28, 0
  036b5c4  bf 2, 0x36b07c
  036b5c8  ori 3, 29, 0
  036b5cc  ld 0, 352(1)
  036b5d0  mtlr 0
  036b5d4  lfd 24, 272(1)
  036b5d8  lfd 25, 280(1)
  036b5dc  lfd 26, 288(1)
  036b5e0  lfd 27, 296(1)
  036b5e4  lfd 28, 304(1)
  036b5e8  lfd 29, 312(1)
  036b5ec  lfd 30, 320(1)
  036b5f0  lfd 31, 328(1)
  036b5f4  ld 27, 232(1)
  036b5f8  ld 28, 240(1)
  036b5fc  ld 29, 248(1)
  036b600  ld 30, 256(1)
  036b604  ld 31, 264(1)
  036b608  addi 1, 1, 336
  036b60c  blr

M426_0036b630:   # 0x36b630, 0x244 bytes
  036b630  stdu 1, -192(1)
  036b634  mflr 0
  036b638  std 0, 208(1)
  036b63c  std 31, 184(1)
  036b640  std 30, 176(1)
  036b644  ori 31, 4, 0
  036b648  ori 30, 3, 0
  036b64c  std 29, 168(1)
  036b650  addic 3, 31, 116
  036b654  bl 0x4fff60
  036b658  nop
  036b65c  cmpwi 3, 0
  036b660  bf 2, 0x36b684
  036b664  lwz 3, 112(31)
  036b668  cmpwi 3, 0
  036b66c  bt 2, 0x36b684
  036b670  lbz 3, 32(3)
  036b674  cmpwi 3, 254
  036b678  cmpwi 1, 3, 253
  036b67c  bt 2, 0x36b684
  036b680  bf 6, 0x36b690
  036b684  li 3, 0
  036b688  stw 3, 112(31)
  036b68c  stw 3, 120(31)
  036b690  lis 29, 149
  036b694  lis 3, 55
  036b698  addic 29, 29, 5056
  036b69c  addi 5, 3, -18928
  036b6a0  addic 3, 29, 320
  036b6a4  addic 4, 1, 128
  036b6a8  lfs 1, 340(29)
  036b6ac  lfs 2, 336(29)
  036b6b0  fneg 3, 1
  036b6b4  stfs 2, 128(1)
  036b6b8  lfs 2, 344(29)
  036b6bc  stfs 1, 132(1)
  036b6c0  lfs 1, 348(29)
  036b6c4  stfs 2, 136(1)
  036b6c8  stfs 1, 140(1)
  036b6cc  stfs 3, 132(1)
  036b6d0  lfs 1, 0(5)
  036b6d4  lfs 3, 4(5)
  036b6d8  fmr 2, 1
  036b6dc  bl 0x36b008
  036b6e0  ori 4, 3, 0
  036b6e4  cmpwi 4, 0
  036b6e8  bt 2, 0x36b6f8
  036b6ec  lwz 3, 112(31)
  036b6f0  cmpwi 3, 0
  036b6f4  bt 2, 0x36b724
  036b6f8  lwz 3, 112(31)
  036b6fc  cmpwi 3, 0
  036b700  bt 2, 0x36b724
  036b704  lbz 5, 32(3)
  036b708  cmpwi 1, 5, 253
  036b70c  cmpwi 5, 254
  036b710  cror 2, 2, 6
  036b714  bt 2, 0x36b724
  036b718  lbz 5, 49(3)
  036b71c  cmpwi 5, 0
  036b720  bf 2, 0x36b770
  036b724  lis 3, 55
  036b728  li 5, 0
  036b72c  stw 4, 112(31)
  036b730  addi 3, 3, -18928
  036b734  vspltisw 2, -1
  036b738  li 6, 8
  036b73c  lis 7, 114
  036b740  li 8, -3056
  036b744  stw 5, 120(31)
  036b748  vslw 2, 2, 2
  036b74c  lvlx 3, 6, 3
  036b750  ori 3, 4, 0
  036b754  vspltw 3, 3, 0
  036b758  lvlx 4, 8, 7
  036b75c  li 4, 116
  036b760  vmaddfp 2, 4, 3, 2
  036b764  vctsxs 2, 2, 0
  036b768  vspltw 2, 2, 0
  036b76c  stvewx 2, 4, 31
  036b770  cmpwi 3, 0
  036b774  bt 2, 0x36b858
  036b778  lwz 4, 104(31)
  036b77c  cmpwi 4, 0
  036b780  bf 2, 0x36b858
  036b784  lbz 4, 32(3)
  036b788  cmpwi 4, 254
  036b78c  cmpwi 1, 4, 253
  036b790  bt 2, 0x36b798
  036b794  bf 6, 0x36b7a8
  036b798  li 3, 0
  036b79c  stw 3, 112(31)
  036b7a0  stw 3, 120(31)
  036b7a4  b 0x36b858
  036b7a8  lfs 1, 324(29)
  036b7ac  lfs 2, 20(3)
  036b7b0  lfs 3, 320(29)
  036b7b4  fsubs 1, 1, 2
  036b7b8  lfs 2, 16(3)
  036b7bc  lfs 4, 328(29)
  036b7c0  fsubs 3, 3, 2
  036b7c4  lfs 5, 24(3)
  036b7c8  fsubs 4, 4, 5
  036b7cc  lis 4, 55
  036b7d0  addi 5, 4, -18928
  036b7d4  fmuls 1, 1, 1
  036b7d8  li 4, 4
  036b7dc  lis 7, -241
  036b7e0  addic 6, 1, 144
  036b7e4  li 9, -1
  036b7e8  fmadds 1, 3, 3, 1
  036b7ec  lfs 3, 12(5)
  036b7f0  stfs 2, 144(1)
  036b7f4  lfs 2, 20(3)
  036b7f8  fmadds 1, 4, 4, 1
  036b7fc  lfs 4, 120(31)
  036b800  stfs 2, 148(1)
  036b804  lfs 2, 24(3)
  036b808  stfs 2, 152(1)
  036b80c  lfs 5, 28(3)
  036b810  fadds 2, 2, 4
  036b814  fsqrts 1, 1
  036b818  stfs 5, 156(1)
  036b81c  ori 3, 30, 0
  036b820  std 4, 112(1)
  036b824  ori 4, 7, 65295
  036b828  li 7, 13
  036b82c  stfs 2, 152(1)
  036b830  lfs 4, 16(5)
  036b834  lfs 6, 20(5)
  036b838  lfs 2, 24(5)
  036b83c  fmr 5, 3
  036b840  lfs 3, 28(5)
  036b844  fmuls 1, 1, 5
  036b848  fnmsubs 1, 1, 4, 6
  036b84c  fabs 1, 1
  036b850  bl 0x55284
  036b854  nop
  036b858  ld 0, 208(1)
  036b85c  mtlr 0
  036b860  ld 29, 168(1)
  036b864  ld 30, 176(1)
  036b868  ld 31, 184(1)
  036b86c  addi 1, 1, 192
  036b870  blr

M426_0036b8c8:   # 0x36b8c8, 0x11a0 bytes
  036b8c8  stdu 1, -528(1)
  036b8cc  mflr 0
  036b8d0  std 0, 544(1)
  036b8d4  stfd 26, 480(1)
  036b8d8  stfd 27, 488(1)
  036b8dc  stfd 28, 496(1)
  036b8e0  stfd 29, 504(1)
  036b8e4  stfd 30, 512(1)
  036b8e8  stfd 31, 520(1)
  036b8ec  lis 5, 55
  036b8f0  li 6, 0
  036b8f4  std 30, 464(1)
  036b8f8  addi 5, 5, -18316
  036b8fc  lis 7, 114
  036b900  std 31, 472(1)
  036b904  ori 30, 4, 0
  036b908  ori 31, 3, 0
  036b90c  lis 3, 132
  036b910  std 27, 440(1)
  036b914  lfs 29, 0(5)
  036b918  lis 27, 150
  036b91c  stw 6, 192(1)
  036b920  stw 6, 196(1)
  036b924  stw 6, 200(1)
  036b928  addic 27, 27, 19008
  036b92c  stw 6, 204(1)
  036b930  lfs 28, 4(5)
  036b934  lfs 1, -3052(7)
  036b938  lwz 4, 68(30)
  036b93c  fmuls 1, 1, 28
  036b940  lfs 2, 4548(3)
  036b944  addic 3, 4, 1
  036b948  lhz 4, 52(31)
  036b94c  rlwimi 4, 6, 0, 23, 23
  036b950  stw 3, 68(30)
  036b954  lwz 5, 180(27)
  036b958  sth 4, 52(31)
  036b95c  rlwinm 5, 5, 0, 16, 16
  036b960  fmuls 3, 1, 2
  036b964  lfs 1, 56(30)
  036b968  cmpwi 5, 0
  036b96c  lwz 4, 176(27)
  036b970  lfs 2, 8(27)
  036b974  lfs 31, 12(27)
  036b978  lfs 5, 72(31)
  036b97c  std 29, 456(1)
  036b980  std 28, 448(1)
  036b984  stfs 3, 200(1)
  036b988  bt 2, 0x36b9ac
  036b98c  lbz 5, 48(30)
  036b990  addic 5, 5, 1
  036b994  clrlwi 6, 5, 24
  036b998  cmpwi 6, 2
  036b99c  stb 5, 48(30)
  036b9a0  bt 0, 0x36b9ac
  036b9a4  li 5, 0
  036b9a8  stb 5, 48(30)
  036b9ac  lis 5, 132
  036b9b0  lwz 5, 4448(5)
  036b9b4  cmpw 3, 5
  036b9b8  bf 1, 0x36ba68
  036b9bc  rlwinm 4, 4, 0, 24, 24
  036b9c0  cmpwi 4, 0
  036b9c4  bt 2, 0x36ba08
  036b9c8  lis 4, 132
  036b9cc  lis 5, 132
  036b9d0  lis 6, 132
  036b9d4  lfs 3, 4460(4)
  036b9d8  lfs 4, 4548(5)
  036b9dc  fmadds 1, 3, 4, 1
  036b9e0  stfs 1, 56(30)
  036b9e4  lfs 3, 4456(6)
  036b9e8  lfs 4, 4548(5)
  036b9ec  fmuls 3, 3, 4
  036b9f0  fcmpu 0, 1, 3
  036b9f4  cror 6, 0, 2
  036b9f8  bt 6, 0x36ba80
  036b9fc  fmr 1, 3
  036ba00  stfs 3, 56(30)
  036ba04  b 0x36ba80
  036ba08  lis 4, 132
  036ba0c  lis 5, 132
  036ba10  lis 6, 132
  036ba14  lfs 4, 4548(4)
  036ba18  lfs 3, 4444(5)
  036ba1c  lfs 6, 4452(6)
  036ba20  fmuls 7, 3, 4
  036ba24  fmsubs 7, 6, 4, 7
  036ba28  fcmpu 0, 1, 7
  036ba2c  cror 6, 1, 2
  036ba30  bt 6, 0x36ba3c
  036ba34  fmadds 1, 3, 4, 1
  036ba38  b 0x36ba60
  036ba3c  fmuls 3, 6, 4
  036ba40  fcmpu 0, 1, 3
  036ba44  cror 6, 0, 2
  036ba48  bt 6, 0x36ba5c
  036ba4c  fmsubs 3, 6, 4, 1
  036ba50  lis 4, 132
  036ba54  lfs 4, 4464(4)
  036ba58  fmadds 3, 3, 4, 1
  036ba5c  fmr 1, 3
  036ba60  stfs 1, 56(30)
  036ba64  b 0x36ba80
  036ba68  lis 4, 132
  036ba6c  lis 5, 132
  036ba70  lfs 3, 4440(4)
  036ba74  lfs 4, 4548(5)
  036ba78  fmadds 1, 3, 4, 1
  036ba7c  stfs 1, 56(30)
  036ba80  lis 4, 132
  036ba84  lwz 4, 4468(4)
  036ba88  cmpw 3, 4
  036ba8c  bf 1, 0x36bc14
  036ba90  lis 4, 132
  036ba94  lis 6, 132
  036ba98  fmr 1, 2
  036ba9c  lis 7, 268
  036baa0  addic 3, 30, 76
  036baa4  addic 5, 30, 124
  036baa8  lfs 2, 4556(4)
  036baac  lfs 3, 4560(6)
  036bab0  lfs 5, 20788(7)
  036bab4  fmr 4, 5
  036bab8  bl 0x109b40
  036babc  nop
  036bac0  lis 4, 132
  036bac4  lis 6, 132
  036bac8  fmr 1, 31
  036bacc  lis 7, 132
  036bad0  addic 3, 30, 80
  036bad4  addic 5, 30, 128
  036bad8  lfs 2, 4564(4)
  036badc  lfs 3, 4568(6)
  036bae0  lfs 4, 4572(7)
  036bae4  bl 0x109b40
  036bae8  nop
  036baec  lis 4, 132
  036baf0  lfs 1, 76(30)
  036baf4  lis 6, 132
  036baf8  lis 7, 132
  036bafc  lis 8, 268
  036bb00  addic 5, 30, 132
  036bb04  lfs 2, 4540(4)
  036bb08  addic 3, 31, 64
  036bb0c  li 9, 0
  036bb10  fmuls 1, 1, 2
  036bb14  lfs 2, 4576(6)
  036bb18  lfs 3, 4580(7)
  036bb1c  lfs 5, 20792(8)
  036bb20  fmr 4, 5
  036bb24  bl 0x10a050
  036bb28  nop
  036bb2c  lis 29, 132
  036bb30  lfs 1, 80(30)
  036bb34  lis 4, 132
  036bb38  lis 6, 132
  036bb3c  lis 7, 268
  036bb40  addic 3, 31, 68
  036bb44  lfs 2, 4692(29)
  036bb48  addic 5, 30, 136
  036bb4c  li 9, 0
  036bb50  fmuls 1, 1, 2
  036bb54  lfs 2, 4584(4)
  036bb58  lfs 3, 4588(6)
  036bb5c  lfs 4, 20796(7)
  036bb60  fneg 1, 1
  036bb64  bl 0x10a050
  036bb68  nop
  036bb6c  lwz 3, 68(31)
  036bb70  lis 4, 55
  036bb74  lwz 5, 4692(29)
  036bb78  srawi 7, 3, 31
  036bb7c  srawi 6, 5, 31
  036bb80  lfs 4, 4692(29)
  036bb84  addi 4, 4, -18316
  036bb88  srwi 8, 7, 1
  036bb8c  srwi 9, 6, 1
  036bb90  xor 3, 8, 3
  036bb94  xor 5, 9, 5
  036bb98  subc 3, 3, 7
  036bb9c  subc 5, 5, 6
  036bba0  lfs 3, 8(4)
  036bba4  lfs 2, 72(31)
  036bba8  cmpw 3, 5
  036bbac  lfs 1, 76(30)
  036bbb0  bt 0, 0x36bbc0
  036bbb4  fsubs 3, 4, 3
  036bbb8  stfs 3, 68(31)
  036bbbc  b 0x36bbec
  036bbc0  lis 4, 132
  036bbc4  lwz 5, 4696(4)
  036bbc8  lfs 4, 4696(4)
  036bbcc  srawi 6, 5, 31
  036bbd0  srwi 4, 6, 1
  036bbd4  xor 4, 4, 5
  036bbd8  subc 4, 4, 6
  036bbdc  cmpw 3, 4
  036bbe0  bt 1, 0x36bbec
  036bbe4  fadds 3, 4, 3
  036bbe8  stfs 3, 68(31)
  036bbec  fmr 3, 1
  036bbf0  lis 3, 132
  036bbf4  fmr 1, 2
  036bbf8  lfs 2, 4480(3)
  036bbfc  fmuls 2, 3, 2
  036bc00  bl 0x5025e0
  036bc04  nop
  036bc08  fmr 5, 1
  036bc0c  stfs 5, 72(31)
  036bc10  lfs 1, 56(30)
  036bc14  lfs 3, 68(31)
  036bc18  addic 3, 1, 208
  036bc1c  fmr 2, 5
  036bc20  fneg 3, 3
  036bc24  bl 0xfe610
  036bc28  nop
  036bc2c  lfs 1, 212(1)
  036bc30  lfs 31, 208(1)
  036bc34  fmuls 3, 1, 1
  036bc38  lfs 2, 216(1)
  036bc3c  fmadds 5, 31, 31, 3
  036bc40  lfs 3, 56(30)
  036bc44  lfs 4, 68(31)
  036bc48  lfs 9, 16(31)
  036bc4c  lfs 10, 20(31)
  036bc50  lfs 11, 24(31)
  036bc54  fmadds 5, 2, 2, 5
  036bc58  fsqrts 6, 5
  036bc5c  fcmpu 0, 6, 29
  036bc60  bf 2, 0x36bc78
  036bc64  fmr 6, 29
  036bc68  lfs 5, 220(1)
  036bc6c  fmr 7, 6
  036bc70  fmr 8, 7
  036bc74  b 0x36bcd0
  036bc78  frsqrte 6, 5
  036bc7c  lis 3, 55
  036bc80  addi 3, 3, -18316
  036bc84  lfs 7, 12(3)
  036bc88  lfs 8, 16(3)
  036bc8c  lfs 0, 220(1)
  036bc90  fmuls 12, 5, 6
  036bc94  fmuls 13, 7, 6
  036bc98  fnmsubs 12, 12, 6, 8
  036bc9c  fmadds 6, 12, 13, 6
  036bca0  fmuls 12, 5, 6
  036bca4  fmuls 13, 7, 6
  036bca8  fnmsubs 12, 12, 6, 8
  036bcac  fmadds 6, 12, 13, 6
  036bcb0  fmuls 12, 5, 6
  036bcb4  fmuls 7, 7, 6
  036bcb8  fmr 5, 0
  036bcbc  fnmsubs 8, 12, 6, 8
  036bcc0  fmadds 6, 8, 7, 6
  036bcc4  fmuls 8, 31, 6
  036bcc8  fmuls 7, 1, 6
  036bccc  fmuls 6, 2, 6
  036bcd0  fadds 9, 9, 31
  036bcd4  fadds 1, 10, 1
  036bcd8  stfs 8, 16(30)
  036bcdc  fadds 2, 11, 2
  036bce0  stfs 7, 20(30)
  036bce4  lis 3, 132
  036bce8  stfs 6, 24(30)
  036bcec  stfs 5, 28(30)
  036bcf0  lis 4, 132
  036bcf4  stfs 9, 16(31)
  036bcf8  stfs 1, 20(31)
  036bcfc  stfs 2, 24(31)
  036bd00  lfs 1, 4452(3)
  036bd04  fsubs 2, 3, 1
  036bd08  lfs 3, 4456(4)
  036bd0c  fsubs 31, 3, 1
  036bd10  lis 3, 132
  036bd14  lis 4, 132
  036bd18  fsub 1, 2, 29
  036bd1c  fsel 1, 1, 2, 29
  036bd20  fdivs 31, 1, 31
  036bd24  stfs 31, 180(30)
  036bd28  lfs 1, 4664(3)
  036bd2c  lfs 2, 4488(4)
  036bd30  fmuls 1, 4, 1
  036bd34  bl 0x502578
  036bd38  nop
  036bd3c  lis 3, 55
  036bd40  fmr 30, 1
  036bd44  lfs 1, 72(31)
  036bd48  addi 28, 3, -18316
  036bd4c  lfs 2, 20(28)
  036bd50  bl 0x502578
  036bd54  nop
  036bd58  lis 3, 132
  036bd5c  lfs 2, 76(30)
  036bd60  lfs 3, 4668(3)
  036bd64  fmuls 2, 2, 3
  036bd68  bl 0x502578
  036bd6c  nop
  036bd70  lis 4, 132
  036bd74  lis 6, 132
  036bd78  fmr 27, 1
  036bd7c  lis 7, 268
  036bd80  fmr 1, 30
  036bd84  addic 3, 30, 160
  036bd88  addic 5, 30, 168
  036bd8c  lfs 2, 4616(4)
  036bd90  li 9, 0
  036bd94  lfs 3, 4620(6)
  036bd98  lfs 4, 20812(7)
  036bd9c  bl 0x10a050
  036bda0  nop
  036bda4  lis 4, 132
  036bda8  fmr 1, 27
  036bdac  lis 6, 132
  036bdb0  lis 7, 268
  036bdb4  addic 3, 30, 164
  036bdb8  addic 5, 30, 172
  036bdbc  lfs 2, 4624(4)
  036bdc0  li 9, 0
  036bdc4  lfs 3, 4628(6)
  036bdc8  lfs 4, 20816(7)
  036bdcc  bl 0x10a050
  036bdd0  nop
  036bdd4  lis 4, 132
  036bdd8  lfs 2, 164(30)
  036bddc  lfs 3, 160(30)
  036bde0  addic 29, 1, 224
  036bde4  ori 3, 29, 0
  036bde8  lfs 1, 4484(4)
  036bdec  bl 0xfe610
  036bdf0  nop
  036bdf4  lfs 1, 224(1)
  036bdf8  ori 3, 29, 0
  036bdfc  lfs 2, 16(31)
  036be00  lfs 3, 228(1)
  036be04  fadds 1, 1, 2
  036be08  lfs 2, 20(31)
  036be0c  lfs 4, 232(1)
  036be10  fadds 2, 3, 2
  036be14  lfs 3, 24(31)
  036be18  fadds 3, 4, 3
  036be1c  stfs 1, 224(1)
  036be20  stfs 2, 228(1)
  036be24  stfs 3, 232(1)
  036be28  bl 0x47b98
  036be2c  nop
  036be30  lfs 1, 228(1)
  036be34  lfs 2, 20(31)
  036be38  lfs 3, 224(1)
  036be3c  fsubs 1, 1, 2
  036be40  lfs 2, 16(31)
  036be44  fsubs 2, 3, 2
  036be48  lis 29, 115
  036be4c  addic 29, 29, 22784
  036be50  fmuls 1, 1, 1
  036be54  fmadds 1, 2, 2, 1
  036be58  lfs 2, 24(31)
  036be5c  lfs 4, 232(1)
  036be60  lfs 3, 68(31)
  036be64  fsubs 2, 2, 4
  036be68  fsqrts 1, 1
  036be6c  stfs 2, 300(1)
  036be70  fabs 5, 2
  036be74  fabs 4, 1
  036be78  stfs 1, 296(1)
  036be7c  lwz 3, 300(1)
  036be80  rlwinm 3, 3, 3, 29, 29
  036be84  fsubs 1, 4, 5
  036be88  stfs 1, 304(1)
  036be8c  lwz 4, 296(1)
  036be90  lfs 1, 296(1)
  036be94  lfs 2, 300(1)
  036be98  lfs 30, 24(28)
  036be9c  lwz 5, 304(1)
  036bea0  lfs 6, 304(1)
  036bea4  fabs 1, 1
  036bea8  rlwimi 3, 5, 2, 30, 30
  036beac  fsub 7, 6, 29
  036beb0  fabs 2, 2
  036beb4  fsub 6, 6, 29
  036beb8  rlwimi 3, 4, 4, 28, 28
  036bebc  ori 4, 29, 0
  036bec0  rlwimi 4, 3, 2, 26, 28
  036bec4  slwi 3, 3, 2
  036bec8  clrldi 4, 4, 32
  036becc  fsel 5, 7, 1, 5
  036bed0  lfsx 1, 29, 3
  036bed4  fsel 4, 6, 2, 4
  036bed8  lfs 2, 4(4)
  036bedc  fcmpu 0, 5, 29
  036bee0  bt 1, 0x36beec
  036bee4  fmr 1, 29
  036bee8  b 0x36c004
  036beec  fsubs 6, 4, 5
  036bef0  fadds 4, 4, 5
  036bef4  addic 3, 1, 16
  036bef8  li 7, 2
  036befc  addic 4, 3, 388
  036bf00  addic 5, 3, 404
  036bf04  mtctr 7
  036bf08  fdivs 4, 6, 4
  036bf0c  fmuls 5, 4, 4
  036bf10  stfs 4, 416(1)
  036bf14  stfs 4, 408(1)
  036bf18  stfs 4, 412(1)
  036bf1c  stfs 4, 404(1)
  036bf20  lfs 7, 416(1)
  036bf24  lfs 8, 408(1)
  036bf28  lfs 9, 412(1)
  036bf2c  fmuls 6, 5, 5
  036bf30  fmuls 8, 8, 5
  036bf34  fmuls 7, 7, 6
  036bf38  fmuls 4, 6, 6
  036bf3c  fmuls 6, 9, 6
  036bf40  stfs 8, 408(1)
  036bf44  fmuls 5, 7, 5
  036bf48  stfs 6, 412(1)
  036bf4c  stfs 5, 416(1)
  036bf50  lfs 5, 388(3)
  036bf54  fmuls 5, 5, 4
  036bf58  stfs 5, 404(3)
  036bf5c  lfs 5, 4(4)
  036bf60  addic 3, 3, 8
  036bf64  addic 4, 4, 8
  036bf68  fmuls 5, 5, 4
  036bf6c  stfs 5, 4(5)
  036bf70  addic 5, 5, 8
  036bf74  bdnz 0x36bf50
  036bf78  li 5, 4
  036bf7c  ori 3, 1, 0
  036bf80  mtctr 5
  036bf84  lis 4, 115
  036bf88  addic 5, 3, 404
  036bf8c  addic 4, 4, 22752
  036bf90  ori 6, 5, 0
  036bf94  lfs 4, 404(3)
  036bf98  lfs 5, 0(4)
  036bf9c  fmuls 4, 4, 5
  036bfa0  lfs 5, 4(4)
  036bfa4  addic 4, 4, 8
  036bfa8  stfs 4, 404(3)
  036bfac  lfs 4, 4(5)
  036bfb0  addic 3, 3, 8
  036bfb4  fmuls 4, 4, 5
  036bfb8  stfs 4, 4(5)
  036bfbc  addic 5, 5, 8
  036bfc0  bdnz 0x36bf94
  036bfc4  fmr 4, 29
  036bfc8  ori 3, 1, 0
  036bfcc  mtctr 7
  036bfd0  lfs 5, 404(3)
  036bfd4  fadds 4, 4, 5
  036bfd8  addic 3, 3, 16
  036bfdc  lfs 5, 4(6)
  036bfe0  lfs 6, 8(6)
  036bfe4  lfs 7, 12(6)
  036bfe8  addic 6, 6, 16
  036bfec  fadds 4, 4, 5
  036bff0  fadds 4, 4, 6
  036bff4  fadds 4, 4, 7
  036bff8  bdnz 0x36bfd0
  036bffc  fadds 4, 4, 30
  036c000  fmadds 1, 4, 1, 2
  036c004  lis 3, 132
  036c008  fneg 1, 1
  036c00c  lfs 2, 4672(3)
  036c010  fmuls 2, 3, 2
  036c014  fneg 2, 2
  036c018  bl 0x5025e0
  036c01c  nop
  036c020  lfs 2, 16(31)
  036c024  lfs 3, 224(1)
  036c028  lfs 4, 20(31)
  036c02c  lfs 5, 228(1)
  036c030  fsubs 2, 2, 3
  036c034  fsubs 3, 4, 5
  036c038  fmr 27, 1
  036c03c  fabs 4, 2
  036c040  fabs 5, 3
  036c044  stfs 2, 284(1)
  036c048  stfs 3, 288(1)
  036c04c  lfs 3, 76(30)
  036c050  fsubs 2, 4, 5
  036c054  stfs 2, 292(1)
  036c058  lwz 3, 284(1)
  036c05c  lfs 1, 284(1)
  036c060  lwz 4, 288(1)
  036c064  lfs 2, 288(1)
  036c068  fabs 1, 1
  036c06c  lwz 5, 292(1)
  036c070  rlwinm 4, 4, 3, 29, 29
  036c074  lfs 6, 292(1)
  036c078  fabs 2, 2
  036c07c  rlwimi 4, 5, 2, 30, 30
  036c080  fsub 7, 6, 29
  036c084  fsub 6, 6, 29
  036c088  rlwimi 4, 3, 4, 28, 28
  036c08c  ori 3, 29, 0
  036c090  rlwimi 3, 4, 2, 26, 28
  036c094  slwi 4, 4, 2
  036c098  clrldi 3, 3, 32
  036c09c  fsel 5, 7, 1, 5
  036c0a0  lfsx 1, 29, 4
  036c0a4  fsel 4, 6, 2, 4
  036c0a8  lfs 2, 4(3)
  036c0ac  fcmpu 0, 5, 29
  036c0b0  bt 1, 0x36c0bc
  036c0b4  fmr 1, 29
  036c0b8  b 0x36c1d4
  036c0bc  fsubs 6, 4, 5
  036c0c0  fadds 4, 4, 5
  036c0c4  addic 3, 1, 16
  036c0c8  li 6, 2
  036c0cc  addic 4, 3, 356
  036c0d0  addic 5, 3, 372
  036c0d4  mtctr 6
  036c0d8  fdivs 4, 6, 4
  036c0dc  fmuls 5, 4, 4
  036c0e0  stfs 4, 384(1)
  036c0e4  stfs 4, 376(1)
  036c0e8  stfs 4, 380(1)
  036c0ec  stfs 4, 372(1)
  036c0f0  lfs 7, 384(1)
  036c0f4  lfs 8, 376(1)
  036c0f8  lfs 9, 380(1)
  036c0fc  fmuls 6, 5, 5
  036c100  fmuls 8, 8, 5
  036c104  fmuls 7, 7, 6
  036c108  fmuls 4, 6, 6
  036c10c  fmuls 6, 9, 6
  036c110  stfs 8, 376(1)
  036c114  fmuls 5, 7, 5
  036c118  stfs 6, 380(1)
  036c11c  stfs 5, 384(1)
  036c120  lfs 5, 356(3)
  036c124  fmuls 5, 5, 4
  036c128  stfs 5, 372(3)
  036c12c  lfs 5, 4(4)
  036c130  addic 3, 3, 8
  036c134  addic 4, 4, 8
  036c138  fmuls 5, 5, 4
  036c13c  stfs 5, 4(5)
  036c140  addic 5, 5, 8
  036c144  bdnz 0x36c120
  036c148  li 5, 4
  036c14c  ori 3, 1, 0
  036c150  mtctr 5
  036c154  lis 4, 115
  036c158  addic 5, 3, 372
  036c15c  addic 4, 4, 22752
  036c160  ori 7, 5, 0
  036c164  lfs 4, 372(3)
  036c168  lfs 5, 0(4)
  036c16c  fmuls 4, 4, 5
  036c170  lfs 5, 4(4)
  036c174  addic 4, 4, 8
  036c178  stfs 4, 372(3)
  036c17c  lfs 4, 4(5)
  036c180  addic 3, 3, 8
  036c184  fmuls 4, 4, 5
  036c188  stfs 4, 4(5)
  036c18c  addic 5, 5, 8
  036c190  bdnz 0x36c164
  036c194  fmr 4, 29
  036c198  ori 3, 1, 0
  036c19c  mtctr 6
  036c1a0  lfs 5, 372(3)
  036c1a4  fadds 4, 4, 5
  036c1a8  addic 3, 3, 16
  036c1ac  lfs 5, 4(7)
  036c1b0  lfs 6, 8(7)
  036c1b4  lfs 7, 12(7)
  036c1b8  addic 7, 7, 16
  036c1bc  fadds 4, 4, 5
  036c1c0  fadds 4, 4, 6
  036c1c4  fadds 4, 4, 7
  036c1c8  bdnz 0x36c1a0
  036c1cc  fadds 4, 4, 30
  036c1d0  fmadds 1, 4, 1, 2
  036c1d4  lis 3, 132
  036c1d8  lfs 2, 4676(3)
  036c1dc  fmuls 2, 3, 2
  036c1e0  bl 0x5025e0
  036c1e4  nop
  036c1e8  lis 4, 132
  036c1ec  lis 6, 268
  036c1f0  fmr 26, 1
  036c1f4  lis 7, 132
  036c1f8  fmr 1, 29
  036c1fc  addic 3, 30, 32
  036c200  addic 5, 30, 140
  036c204  lfs 2, 4592(4)
  036c208  li 9, 0
  036c20c  lfs 4, 20800(6)
  036c210  lfs 3, 4596(7)
  036c214  bl 0x10a050
  036c218  nop
  036c21c  lis 4, 132
  036c220  fmr 1, 27
  036c224  lis 6, 132
  036c228  lis 7, 268
  036c22c  addic 3, 30, 36
  036c230  addic 5, 30, 144
  036c234  lfs 2, 4600(4)
  036c238  li 9, 0
  036c23c  lfs 3, 4604(6)
  036c240  lfs 4, 20804(7)
  036c244  bl 0x10a050
  036c248  nop
  036c24c  lis 4, 132
  036c250  fmr 1, 26
  036c254  lis 6, 132
  036c258  lis 7, 268
  036c25c  addic 3, 30, 40
  036c260  addic 5, 30, 148
  036c264  lfs 2, 4608(4)
  036c268  li 9, 0
  036c26c  lfs 3, 4612(6)
  036c270  lfs 4, 20808(7)
  036c274  bl 0x10a050
  036c278  nop
  036c27c  addic 3, 30, 32
  036c280  bl 0x47c08
  036c284  nop
  036c288  lis 3, 132
  036c28c  lis 4, 132
  036c290  lis 5, 132
  036c294  lis 6, 132
  036c298  lfs 1, 4636(3)
  036c29c  lfs 5, 4632(4)
  036c2a0  addic 3, 30, 156
  036c2a4  lis 4, 132
  036c2a8  lfs 2, 4640(5)
  036c2ac  fsubs 1, 1, 5
  036c2b0  lfs 3, 4644(6)
  036c2b4  addic 5, 30, 176
  036c2b8  lfs 4, 4648(4)
  036c2bc  fmadds 1, 1, 31, 5
  036c2c0  bl 0x109b40
  036c2c4  nop
  036c2c8  lis 3, 55
  036c2cc  lfs 1, 156(30)
  036c2d0  addi 3, 3, -18316
  036c2d4  lfs 2, 12(3)
  036c2d8  lfs 3, 28(3)
  036c2dc  fmuls 1, 1, 2
  036c2e0  lfs 4, 52(3)
  036c2e4  lfs 2, 32(3)
  036c2e8  fsubs 5, 3, 1
  036c2ec  fadds 4, 1, 4
  036c2f0  fsubs 6, 2, 1
  036c2f4  fsub 7, 1, 5
  036c2f8  fsubs 3, 3, 4
  036c2fc  fsubs 2, 2, 4
  036c300  fsel 1, 7, 5, 1
  036c304  fsub 5, 4, 3
  036c308  lfs 7, 36(3)
  036c30c  fsub 9, 6, 1
  036c310  fsel 3, 5, 3, 4
  036c314  lfs 4, 40(3)
  036c318  lfs 5, 44(3)
  036c31c  fsel 1, 9, 6, 1
  036c320  fsub 6, 2, 3
  036c324  fmuls 8, 1, 1
  036c328  fsel 2, 6, 2, 3
  036c32c  lfs 3, 48(3)
  036c330  lis 3, 150
  036c334  addic 3, 3, -12416
  036c338  fmuls 6, 8, 1
  036c33c  fmuls 9, 2, 2
  036c340  fmuls 10, 8, 6
  036c344  fmadds 1, 6, 7, 1
  036c348  fmuls 6, 9, 2
  036c34c  fmuls 11, 8, 10
  036c350  fmadds 1, 10, 4, 1
  036c354  fmuls 10, 9, 6
  036c358  fmadds 2, 6, 7, 2
  036c35c  fmuls 6, 8, 11
  036c360  fmadds 1, 11, 5, 1
  036c364  fmuls 7, 9, 10
  036c368  fmadds 2, 10, 4, 2
  036c36c  fmadds 1, 6, 3, 1
  036c370  fmuls 4, 9, 7
  036c374  fmadds 2, 7, 5, 2
  036c378  fmadds 2, 4, 3, 2
  036c37c  fdivs 1, 1, 2
  036c380  stfs 1, 176(3)
  036c384  bl 0x668d0
  036c388  nop
  036c38c  lis 4, 132
  036c390  addic 3, 31, 16
  036c394  li 5, 0
  036c398  ori 6, 31, 0
  036c39c  lfs 1, 4680(4)
  036c3a0  bl 0x59e20
  036c3a4  nop
  036c3a8  cmpwi 3, 0
  036c3ac  bt 2, 0x36c8c8
  036c3b0  lis 28, 161
  036c3b4  addic 28, 28, 2368
  036c3b8  lwz 3, 24(28)
  036c3bc  cmpwi 3, 0
  036c3c0  bt 2, 0x36c3d8
  036c3c4  lhz 3, 166(3)
  036c3c8  cmpwi 3, 0
  036c3cc  cmpwi 1, 3, 402
  036c3d0  bt 2, 0x36c8c8
  036c3d4  bt 6, 0x36c8c8
  036c3d8  lfs 1, 48(28)
  036c3dc  addic 3, 1, 208
  036c3e0  stfs 1, 16(31)
  036c3e4  lfs 1, 52(28)
  036c3e8  ori 4, 3, 0
  036c3ec  stfs 1, 20(31)
  036c3f0  lfs 1, 56(28)
  036c3f4  stfs 1, 24(31)
  036c3f8  lfs 1, 60(28)
  036c3fc  addic 28, 28, 64
  036c400  stfs 1, 28(31)
  036c404  ori 5, 28, 0
  036c408  bl 0x500608
  036c40c  nop
  036c410  lwz 3, 208(1)
  036c414  lwz 4, 212(1)
  036c418  lfs 1, 208(1)
  036c41c  lfs 2, 212(1)
  036c420  fabs 3, 1
  036c424  fabs 5, 2
  036c428  lfs 31, 72(31)
  036c42c  rlwinm 4, 4, 3, 29, 29
  036c430  fsubs 1, 3, 5
  036c434  stfs 1, 280(1)
  036c438  lwz 5, 280(1)
  036c43c  lfs 1, 280(1)
  036c440  rlwimi 4, 5, 2, 30, 30
  036c444  fsub 4, 1, 29
  036c448  fsub 6, 1, 29
  036c44c  rlwimi 4, 3, 4, 28, 28
  036c450  ori 3, 29, 0
  036c454  rlwimi 3, 4, 2, 26, 28
  036c458  slwi 4, 4, 2
  036c45c  clrldi 3, 3, 32
  036c460  fsel 4, 4, 3, 5
  036c464  lfsx 1, 29, 4
  036c468  fsel 3, 6, 5, 3
  036c46c  lfs 2, 4(3)
  036c470  fcmpu 0, 4, 29
  036c474  bt 1, 0x36c480
  036c478  fmr 1, 29
  036c47c  b 0x36c598
  036c480  fsubs 5, 3, 4
  036c484  fadds 3, 3, 4
  036c488  addic 3, 1, 16
  036c48c  li 6, 2
  036c490  addic 5, 3, 340
  036c494  addic 4, 3, 324
  036c498  mtctr 6
  036c49c  fdivs 3, 5, 3
  036c4a0  fmuls 4, 3, 3
  036c4a4  stfs 3, 352(1)
  036c4a8  stfs 3, 344(1)
  036c4ac  stfs 3, 348(1)
  036c4b0  stfs 3, 340(1)
  036c4b4  lfs 6, 352(1)
  036c4b8  lfs 7, 344(1)
  036c4bc  lfs 8, 348(1)
  036c4c0  fmuls 5, 4, 4
  036c4c4  fmuls 7, 7, 4
  036c4c8  fmuls 6, 6, 5
  036c4cc  fmuls 3, 5, 5
  036c4d0  fmuls 5, 8, 5
  036c4d4  stfs 7, 344(1)
  036c4d8  fmuls 4, 6, 4
  036c4dc  stfs 5, 348(1)
  036c4e0  stfs 4, 352(1)
  036c4e4  lfs 4, 324(3)
  036c4e8  fmuls 4, 4, 3
  036c4ec  stfs 4, 340(3)
  036c4f0  lfs 4, 4(4)
  036c4f4  addic 4, 4, 8
  036c4f8  fmuls 4, 4, 3
  036c4fc  addic 3, 3, 8
  036c500  stfs 4, 4(5)
  036c504  addic 5, 5, 8
  036c508  bdnz 0x36c4e4
  036c50c  li 5, 4
  036c510  ori 3, 1, 0
  036c514  mtctr 5
  036c518  lis 4, 115
  036c51c  addic 5, 3, 340
  036c520  addic 4, 4, 22752
  036c524  ori 7, 5, 0
  036c528  lfs 3, 340(3)
  036c52c  lfs 4, 0(4)
  036c530  fmuls 3, 3, 4
  036c534  lfs 4, 4(4)
  036c538  addic 4, 4, 8
  036c53c  stfs 3, 340(3)
  036c540  lfs 3, 4(5)
  036c544  addic 3, 3, 8
  036c548  fmuls 3, 3, 4
  036c54c  stfs 3, 4(5)
  036c550  addic 5, 5, 8
  036c554  bdnz 0x36c528
  036c558  ori 3, 1, 0
  036c55c  fmr 3, 29
  036c560  mtctr 6
  036c564  lfs 4, 340(3)
  036c568  fadds 3, 3, 4
  036c56c  lfs 4, 4(7)
  036c570  addic 3, 3, 16
  036c574  lfs 5, 8(7)
  036c578  lfs 6, 12(7)
  036c57c  addic 7, 7, 16
  036c580  fadds 3, 3, 4
  036c584  fadds 3, 3, 5
  036c588  fadds 3, 3, 6
  036c58c  bdnz 0x36c564
  036c590  fadds 3, 3, 30
  036c594  fmadds 1, 3, 1, 2
  036c598  fmr 2, 31
  036c59c  bl 0x5025e0
  036c5a0  nop
  036c5a4  lis 3, 132
  036c5a8  lfs 2, 4472(3)
  036c5ac  fmuls 2, 1, 2
  036c5b0  fmr 1, 31
  036c5b4  bl 0x502578
  036c5b8  nop
  036c5bc  lfs 2, 212(1)
  036c5c0  lfs 3, 208(1)
  036c5c4  fmuls 2, 2, 2
  036c5c8  stfs 1, 72(31)
  036c5cc  lfs 31, 68(31)
  036c5d0  lwz 3, 216(1)
  036c5d4  lfs 1, 216(1)
  036c5d8  rlwinm 3, 3, 3, 29, 29
  036c5dc  fmadds 2, 3, 3, 2
  036c5e0  fabs 3, 1
  036c5e4  fsqrts 2, 2
  036c5e8  fabs 5, 2
  036c5ec  stfs 2, 272(1)
  036c5f0  fsubs 1, 5, 3
  036c5f4  stfs 1, 276(1)
  036c5f8  lwz 4, 272(1)
  036c5fc  lfs 1, 272(1)
  036c600  lwz 5, 276(1)
  036c604  fabs 4, 1
  036c608  lfs 1, 276(1)
  036c60c  rlwimi 3, 5, 2, 30, 30
  036c610  fsub 2, 1, 29
  036c614  fsub 6, 1, 29
  036c618  rlwimi 3, 4, 4, 28, 28
  036c61c  ori 4, 29, 0
  036c620  rlwimi 4, 3, 2, 26, 28
  036c624  slwi 3, 3, 2
  036c628  clrldi 4, 4, 32
  036c62c  fsel 4, 2, 4, 3
  036c630  lfsx 1, 29, 3
  036c634  lfs 2, 4(4)
  036c638  fsel 3, 6, 3, 5
  036c63c  fcmpu 0, 4, 29
  036c640  bt 1, 0x36c64c
  036c644  fmr 30, 29
  036c648  b 0x36c764
  036c64c  fsubs 5, 3, 4
  036c650  fadds 3, 3, 4
  036c654  addic 3, 1, 16
  036c658  li 7, 2
  036c65c  addic 4, 3, 292
  036c660  addic 5, 3, 308
  036c664  mtctr 7
  036c668  fdivs 3, 5, 3
  036c66c  fmuls 4, 3, 3
  036c670  stfs 3, 320(1)
  036c674  stfs 3, 312(1)
  036c678  stfs 3, 316(1)
  036c67c  stfs 3, 308(1)
  036c680  lfs 6, 320(1)
  036c684  lfs 7, 312(1)
  036c688  lfs 8, 316(1)
  036c68c  fmuls 5, 4, 4
  036c690  fmuls 7, 7, 4
  036c694  fmuls 6, 6, 5
  036c698  fmuls 3, 5, 5
  036c69c  fmuls 5, 8, 5
  036c6a0  stfs 7, 312(1)
  036c6a4  fmuls 4, 6, 4
  036c6a8  stfs 5, 316(1)
  036c6ac  stfs 4, 320(1)
  036c6b0  lfs 4, 292(3)
  036c6b4  fmuls 4, 4, 3
  036c6b8  stfs 4, 308(3)
  036c6bc  lfs 4, 4(4)
  036c6c0  addic 3, 3, 8
  036c6c4  addic 4, 4, 8
  036c6c8  fmuls 4, 4, 3
  036c6cc  stfs 4, 4(5)
  036c6d0  addic 5, 5, 8
  036c6d4  bdnz 0x36c6b0
  036c6d8  li 5, 4
  036c6dc  ori 3, 1, 0
  036c6e0  mtctr 5
  036c6e4  lis 4, 115
  036c6e8  addic 5, 3, 308
  036c6ec  addic 4, 4, 22752
  036c6f0  ori 6, 5, 0
  036c6f4  lfs 3, 308(3)
  036c6f8  lfs 4, 0(4)
  036c6fc  fmuls 3, 3, 4
  036c700  lfs 4, 4(4)
  036c704  addic 4, 4, 8
  036c708  stfs 3, 308(3)
  036c70c  lfs 3, 4(5)
  036c710  addic 3, 3, 8
  036c714  fmuls 3, 3, 4
  036c718  stfs 3, 4(5)
  036c71c  addic 5, 5, 8
  036c720  bdnz 0x36c6f4
  036c724  fmr 3, 29
  036c728  ori 3, 1, 0
  036c72c  mtctr 7
  036c730  lfs 4, 308(3)
  036c734  fadds 3, 3, 4
  036c738  addic 3, 3, 16
  036c73c  lfs 4, 4(6)
  036c740  lfs 5, 8(6)
  036c744  lfs 6, 12(6)
  036c748  addic 6, 6, 16
  036c74c  fadds 3, 3, 4
  036c750  fadds 3, 3, 5
  036c754  fadds 3, 3, 6
  036c758  bdnz 0x36c730
  036c75c  fadds 30, 3, 30
  036c760  fmadds 30, 30, 1, 2
  036c764  fneg 1, 30
  036c768  fmr 2, 31
  036c76c  bl 0x5025e0
  036c770  nop
  036c774  lis 3, 132
  036c778  lfs 2, 4476(3)
  036c77c  fmuls 2, 1, 2
  036c780  fmr 1, 31
  036c784  bl 0x502578
  036c788  nop
  036c78c  lis 3, 132
  036c790  stfs 1, 68(31)
  036c794  lfs 1, 56(30)
  036c798  lis 4, 151
  036c79c  lis 5, 132
  036c7a0  addic 4, 4, -25376
  036c7a4  lfs 2, 4500(3)
  036c7a8  fmuls 1, 1, 2
  036c7ac  stfs 1, 56(30)
  036c7b0  lfs 1, 5628(4)
  036c7b4  lfs 2, 4504(5)
  036c7b8  fsubs 1, 1, 2
  036c7bc  fcmpu 0, 1, 29
  036c7c0  stfs 1, 5628(4)
  036c7c4  cror 6, 1, 2
  036c7c8  bt 6, 0x36c8c8
  036c7cc  addic 29, 1, 192
  036c7d0  addic 4, 1, 208
  036c7d4  ori 3, 29, 0
  036c7d8  ori 5, 28, 0
  036c7dc  bl 0x500608
  036c7e0  nop
  036c7e4  lfs 2, 196(1)
  036c7e8  lfs 3, 192(1)
  036c7ec  fmuls 1, 2, 2
  036c7f0  lfs 5, 200(1)
  036c7f4  lis 3, 55
  036c7f8  addi 6, 3, -18316
  036c7fc  lis 3, 114
  036c800  fmadds 1, 3, 3, 1
  036c804  lfs 4, 56(6)
  036c808  li 11, -1
  036c80c  li 7, 1
  036c810  li 12, 0
  036c814  fmadds 1, 5, 5, 1
  036c818  li 10, 24
  036c81c  ori 4, 29, 0
  036c820  li 5, 0
  036c824  li 8, 30
  036c828  fsqrts 6, 1
  036c82c  lfs 1, -3052(3)
  036c830  li 9, 10
  036c834  std 11, 144(1)
  036c838  ori 3, 31, 0
  036c83c  std 7, 160(1)
  036c840  std 7, 168(1)
  036c844  std 11, 176(1)
  036c848  std 12, 184(1)
  036c84c  fmuls 7, 1, 4
  036c850  fmr 1, 28
  036c854  fmr 4, 28
  036c858  fdivs 7, 7, 6
  036c85c  fsub 8, 29, 6
  036c860  fsub 9, 29, 6
  036c864  fsub 10, 29, 6
  036c868  fsub 11, 6, 29
  036c86c  fsub 12, 6, 29
  036c870  fsub 6, 6, 29
  036c874  fmuls 3, 3, 7
  036c878  fmuls 2, 2, 7
  036c87c  fmuls 5, 5, 7
  036c880  fsel 7, 8, 29, 3
  036c884  fsel 8, 9, 29, 2
  036c888  fsel 9, 10, 29, 5
  036c88c  fsel 3, 11, 7, 3
  036c890  fsel 2, 12, 8, 2
  036c894  fsel 5, 6, 9, 5
  036c898  stfs 3, 192(1)
  036c89c  stfs 2, 196(1)
  036c8a0  stfs 5, 200(1)
  036c8a4  lfs 2, 60(6)
  036c8a8  lfs 3, 64(6)
  036c8ac  lfs 5, 68(6)
  036c8b0  lfs 6, 16(6)
  036c8b4  lfs 7, 72(6)
  036c8b8  bl 0x10e030
  036c8bc  nop
  036c8c0  li 3, 7
  036c8c4  stb 3, 32(31)
  036c8c8  ori 3, 31, 0
  036c8cc  ori 4, 30, 0
  036c8d0  bl 0x36b630
  036c8d4  ori 3, 31, 0
  036c8d8  ori 4, 30, 0
  036c8dc  bl 0x36ae68
  036c8e0  lis 3, 132
  036c8e4  lfs 2, 76(30)
  036c8e8  lfs 1, 72(31)
  036c8ec  lfs 3, 4684(3)
  036c8f0  fmuls 2, 2, 3
  036c8f4  fneg 2, 2
  036c8f8  bl 0x502578
  036c8fc  nop
  036c900  lis 3, 132
  036c904  lfs 2, 80(30)
  036c908  fmr 31, 1
  036c90c  lfs 3, 68(31)
  036c910  fmr 1, 3
  036c914  lfs 4, 4688(3)
  036c918  fmuls 2, 2, 4
  036c91c  fneg 2, 2
  036c920  bl 0x502578
  036c924  nop
  036c928  addic 3, 30, 100
  036c92c  fneg 30, 1
  036c930  bl 0x4fff60
  036c934  nop
  036c938  cmpwi 3, 0
  036c93c  bt 2, 0x36ca0c
  036c940  li 3, 576
  036c944  lwz 4, 176(27)
  036c948  and 3, 4, 3
  036c94c  cmpwi 3, 0
  036c950  bt 2, 0x36ca0c
  036c954  lis 4, 132
  036c958  fmr 2, 31
  036c95c  lis 5, 132
  036c960  fmr 3, 30
  036c964  addic 29, 1, 240
  036c968  ori 3, 29, 0
  036c96c  lfs 1, 4516(4)
  036c970  lfs 4, 4548(5)
  036c974  fmuls 1, 1, 4
  036c978  bl 0xfe610
  036c97c  nop
  036c980  lfs 1, 240(1)
  036c984  lfs 2, 0(30)
  036c988  addic 28, 1, 256
  036c98c  lfs 3, 244(1)
  036c990  ori 3, 31, 0
  036c994  fadds 1, 1, 2
  036c998  ori 5, 28, 0
  036c99c  lfs 2, 4(30)
  036c9a0  lfs 4, 248(1)
  036c9a4  fadds 2, 3, 2
  036c9a8  lfs 3, 8(30)
  036c9ac  lbz 4, 49(30)
  036c9b0  fadds 3, 4, 3
  036c9b4  clrlwi 4, 4, 31
  036c9b8  stfs 1, 240(1)
  036c9bc  stfs 2, 244(1)
  036c9c0  stfs 3, 248(1)
  036c9c4  bl 0xf1114
  036c9c8  nop
  036c9cc  lis 3, 55
  036c9d0  lis 6, 132
  036c9d4  addi 7, 3, -18316
  036c9d8  ori 3, 31, 0
  036c9dc  ori 4, 29, 0
  036c9e0  ori 5, 28, 0
  036c9e4  lfs 1, 4552(6)
  036c9e8  lfs 2, 76(7)
  036c9ec  bl 0x184670
  036c9f0  nop
  036c9f4  lbz 3, 49(30)
  036c9f8  lis 4, 132
  036c9fc  xori 3, 3, 1
  036ca00  lwz 4, 4520(4)
  036ca04  stb 3, 49(30)
  036ca08  stw 4, 100(30)
  036ca0c  lis 4, 132
  036ca10  lis 5, 132
  036ca14  ori 3, 31, 0
  036ca18  lfs 1, 4544(4)
  036ca1c  lfs 2, 4492(5)
  036ca20  fmuls 1, 1, 2
  036ca24  bl 0x106150
  036ca28  nop
  036ca2c  ld 0, 544(1)
  036ca30  mtlr 0
  036ca34  lfd 26, 480(1)
  036ca38  lfd 27, 488(1)
  036ca3c  lfd 28, 496(1)
  036ca40  lfd 29, 504(1)
  036ca44  lfd 30, 512(1)
  036ca48  lfd 31, 520(1)
  036ca4c  ld 27, 440(1)
  036ca50  ld 28, 448(1)
  036ca54  ld 29, 456(1)
  036ca58  ld 30, 464(1)
  036ca5c  ld 31, 472(1)
  036ca60  addi 1, 1, 528
  036ca64  blr

UpdateMoby_426:   # 0x36cab0, 0xfa4 bytes
  036cab0  stdu 1, -624(1)
  036cab4  mflr 0
  036cab8  std 0, 640(1)
  036cabc  stfd 28, 592(1)
  036cac0  stfd 29, 600(1)
  036cac4  stfd 30, 608(1)
  036cac8  stfd 31, 616(1)
  036cacc  std 31, 584(1)
  036cad0  cmpwi 3, 0
  036cad4  std 30, 576(1)
  036cad8  std 29, 568(1)
  036cadc  std 28, 560(1)
  036cae0  std 27, 552(1)
  036cae4  std 26, 544(1)
  036cae8  ori 31, 3, 0
  036caec  bt 2, 0x36da1c
  036caf0  lwz 30, 120(31)
  036caf4  cmpwi 30, 0
  036caf8  bt 2, 0x36da1c
  036cafc  lbz 3, 32(31)
  036cb00  cmpwi 1, 3, 1
  036cb04  cmpwi 3, 7
  036cb08  cror 2, 2, 6
  036cb0c  bt 2, 0x36d120
  036cb10  cmpwi 3, 2
  036cb14  bt 2, 0x36d120
  036cb18  lis 4, 3
  036cb1c  ori 3, 31, 0
  036cb20  ori 4, 4, 1
  036cb24  li 5, 0
  036cb28  bl 0x10675c
  036cb2c  nop
  036cb30  ori 29, 3, 0
  036cb34  cmpwi 29, 0
  036cb38  bt 2, 0x36d120
  036cb3c  lbz 3, 32(31)
  036cb40  cmpwi 3, 4
  036cb44  bf 2, 0x36d120
  036cb48  lis 28, 151
  036cb4c  lwz 3, 44(29)
  036cb50  addic 28, 28, -25376
  036cb54  srawi 5, 3, 31
  036cb58  srwi 7, 5, 1
  036cb5c  lwz 4, 5628(28)
  036cb60  xor 3, 7, 3
  036cb64  lfs 1, 5628(28)
  036cb68  srawi 6, 4, 31
  036cb6c  lfs 2, 44(29)
  036cb70  subc 3, 3, 5
  036cb74  srwi 8, 6, 1
  036cb78  xor 4, 8, 4
  036cb7c  subc 4, 4, 6
  036cb80  cmpw 4, 3
  036cb84  bf 1, 0x36d008
  036cb88  fsubs 1, 1, 2
  036cb8c  stfs 1, 5628(28)
  036cb90  lwz 3, 48(29)
  036cb94  clrlwi 3, 3, 31
  036cb98  cmpwi 3, 0
  036cb9c  bt 2, 0x36d120
  036cba0  lis 3, 149
  036cba4  vspltisw 2, -1
  036cba8  lis 4, 55
  036cbac  addic 5, 3, 5056
  036cbb0  lis 3, 16256
  036cbb4  addi 28, 4, -13720
  036cbb8  lis 4, 114
  036cbbc  vslw 2, 2, 2
  036cbc0  stw 3, 352(5)
  036cbc4  li 3, -3056
  036cbc8  lvlx 3, 0, 28
  036cbcc  lis 6, 132
  036cbd0  vspltw 3, 3, 0
  036cbd4  addic 27, 1, 192
  036cbd8  lvlx 4, 3, 4
  036cbdc  li 4, 360
  036cbe0  vmaddfp 2, 4, 3, 2
  036cbe4  lfs 2, 72(31)
  036cbe8  lfs 3, 68(31)
  036cbec  ori 3, 27, 0
  036cbf0  lfs 31, 4536(6)
  036cbf4  fneg 3, 3
  036cbf8  vctsxs 2, 2, 0
  036cbfc  vspltw 2, 2, 0
  036cc00  stvewx 2, 4, 5
  036cc04  lfs 1, 44(29)
  036cc08  lfs 4, 56(30)
  036cc0c  fmuls 31, 1, 31
  036cc10  fmr 1, 4
  036cc14  bl 0xfe610
  036cc18  nop
  036cc1c  lfs 1, 16(31)
  036cc20  lfs 2, 16(29)
  036cc24  ori 3, 27, 0
  036cc28  fadds 1, 1, 2
  036cc2c  lfs 2, 20(31)
  036cc30  lfs 3, 24(31)
  036cc34  addic 5, 29, 16
  036cc38  ori 4, 27, 0
  036cc3c  stfs 1, 16(31)
  036cc40  lfs 1, 20(29)
  036cc44  fadds 1, 2, 1
  036cc48  stfs 1, 20(31)
  036cc4c  lfs 1, 24(29)
  036cc50  fadds 1, 3, 1
  036cc54  stfs 1, 24(31)
  036cc58  bl 0x500608
  036cc5c  nop
  036cc60  lwz 3, 192(1)
  036cc64  lwz 4, 196(1)
  036cc68  lfs 1, 192(1)
  036cc6c  lfs 2, 196(1)
  036cc70  fabs 3, 1
  036cc74  lfs 30, 72(31)
  036cc78  fabs 5, 2
  036cc7c  rlwinm 4, 4, 3, 29, 29
  036cc80  lis 29, 115
  036cc84  addic 29, 29, 22784
  036cc88  fsubs 1, 3, 5
  036cc8c  stfs 1, 432(1)
  036cc90  lfs 29, 4(28)
  036cc94  lwz 5, 432(1)
  036cc98  lfs 1, 432(1)
  036cc9c  rlwimi 4, 5, 2, 30, 30
  036cca0  fsub 4, 1, 29
  036cca4  fsub 6, 1, 29
  036cca8  rlwimi 4, 3, 4, 28, 28
  036ccac  ori 3, 29, 0
  036ccb0  rlwimi 3, 4, 2, 26, 28
  036ccb4  slwi 4, 4, 2
  036ccb8  clrldi 3, 3, 32
  036ccbc  fsel 4, 4, 3, 5
  036ccc0  lfsx 1, 29, 4
  036ccc4  fsel 3, 6, 5, 3
  036ccc8  lfs 2, 4(3)
  036cccc  fcmpu 0, 4, 29
  036ccd0  bt 1, 0x36ccdc
  036ccd4  fmr 1, 29
  036ccd8  b 0x36ce00
  036ccdc  fsubs 5, 3, 4
  036cce0  fadds 3, 3, 4
  036cce4  addic 3, 1, 16
  036cce8  li 7, 2
  036ccec  addic 5, 3, 500
  036ccf0  addic 4, 3, 484
  036ccf4  mtctr 7
  036ccf8  fdivs 3, 5, 3
  036ccfc  fmuls 4, 3, 3
  036cd00  stfs 3, 512(1)
  036cd04  stfs 3, 504(1)
  036cd08  stfs 3, 508(1)
  036cd0c  stfs 3, 500(1)
  036cd10  lfs 6, 512(1)
  036cd14  lfs 7, 504(1)
  036cd18  lfs 8, 508(1)
  036cd1c  fmuls 5, 4, 4
  036cd20  fmuls 7, 7, 4
  036cd24  fmuls 6, 6, 5
  036cd28  fmuls 3, 5, 5
  036cd2c  fmuls 5, 8, 5
  036cd30  stfs 7, 504(1)
  036cd34  fmuls 4, 6, 4
  036cd38  stfs 5, 508(1)
  036cd3c  stfs 4, 512(1)
  036cd40  lfs 4, 484(3)
  036cd44  fmuls 4, 4, 3
  036cd48  stfs 4, 500(3)
  036cd4c  lfs 4, 4(4)
  036cd50  addic 4, 4, 8
  036cd54  fmuls 4, 4, 3
  036cd58  addic 3, 3, 8
  036cd5c  stfs 4, 4(5)
  036cd60  addic 5, 5, 8
  036cd64  bdnz 0x36cd40
  036cd68  li 5, 4
  036cd6c  ori 3, 1, 0
  036cd70  mtctr 5
  036cd74  lis 4, 115
  036cd78  addic 5, 3, 500
  036cd7c  addic 4, 4, 22752
  036cd80  ori 6, 5, 0
  036cd84  lfs 3, 500(3)
  036cd88  lfs 4, 0(4)
  036cd8c  fmuls 3, 3, 4
  036cd90  lfs 4, 4(4)
  036cd94  addic 4, 4, 8
  036cd98  stfs 3, 500(3)
  036cd9c  lfs 3, 4(5)
  036cda0  addic 3, 3, 8
  036cda4  fmuls 3, 3, 4
  036cda8  stfs 3, 4(5)
  036cdac  addic 5, 5, 8
  036cdb0  bdnz 0x36cd84
  036cdb4  ori 3, 1, 0
  036cdb8  fmr 3, 29
  036cdbc  mtctr 7
  036cdc0  lfs 4, 500(3)
  036cdc4  fadds 3, 3, 4
  036cdc8  lfs 4, 4(6)
  036cdcc  addic 3, 3, 16
  036cdd0  lfs 5, 8(6)
  036cdd4  lfs 6, 12(6)
  036cdd8  addic 6, 6, 16
  036cddc  fadds 3, 3, 4
  036cde0  fadds 3, 3, 5
  036cde4  fadds 3, 3, 6
  036cde8  bdnz 0x36cdc0
  036cdec  lis 3, 55
  036cdf0  addi 3, 3, -13720
  036cdf4  lfs 4, 8(3)
  036cdf8  fadds 3, 3, 4
  036cdfc  fmadds 1, 3, 1, 2
  036ce00  fmr 2, 30
  036ce04  bl 0x5025e0
  036ce08  nop
  036ce0c  lis 3, 132
  036ce10  lfs 2, 4472(3)
  036ce14  fmuls 2, 1, 2
  036ce18  fmr 1, 30
  036ce1c  fmuls 2, 2, 31
  036ce20  bl 0x502578
  036ce24  nop
  036ce28  lfs 2, 196(1)
  036ce2c  lfs 3, 192(1)
  036ce30  fmuls 2, 2, 2
  036ce34  stfs 1, 72(31)
  036ce38  lfs 30, 68(31)
  036ce3c  lwz 3, 200(1)
  036ce40  lfs 1, 200(1)
  036ce44  rlwinm 3, 3, 3, 29, 29
  036ce48  fmadds 2, 3, 3, 2
  036ce4c  fabs 3, 1
  036ce50  fsqrts 2, 2
  036ce54  fabs 5, 2
  036ce58  stfs 2, 424(1)
  036ce5c  fsubs 1, 5, 3
  036ce60  stfs 1, 428(1)
  036ce64  lwz 4, 424(1)
  036ce68  lfs 1, 424(1)
  036ce6c  lwz 5, 428(1)
  036ce70  fabs 4, 1
  036ce74  lfs 1, 428(1)
  036ce78  rlwimi 3, 5, 2, 30, 30
  036ce7c  fsub 2, 1, 29
  036ce80  fsub 6, 1, 29
  036ce84  rlwimi 3, 4, 4, 28, 28
  036ce88  ori 4, 29, 0
  036ce8c  rlwimi 4, 3, 2, 26, 28
  036ce90  slwi 3, 3, 2
  036ce94  clrldi 4, 4, 32
  036ce98  fsel 4, 2, 4, 3
  036ce9c  lfsx 1, 29, 3
  036cea0  lfs 2, 4(4)
  036cea4  fsel 3, 6, 3, 5
  036cea8  fcmpu 0, 4, 29
  036ceac  bt 1, 0x36ceb4
  036ceb0  b 0x36cfd4
  036ceb4  fsubs 5, 3, 4
  036ceb8  fadds 3, 3, 4
  036cebc  addic 3, 1, 16
  036cec0  li 7, 2
  036cec4  addic 5, 3, 468
  036cec8  addic 4, 3, 452
  036cecc  mtctr 7
  036ced0  fdivs 3, 5, 3
  036ced4  fmuls 4, 3, 3
  036ced8  stfs 3, 480(1)
  036cedc  stfs 3, 472(1)
  036cee0  stfs 3, 476(1)
  036cee4  stfs 3, 468(1)
  036cee8  lfs 6, 480(1)
  036ceec  lfs 7, 472(1)
  036cef0  lfs 8, 476(1)
  036cef4  fmuls 5, 4, 4
  036cef8  fmuls 7, 7, 4
  036cefc  fmuls 6, 6, 5
  036cf00  fmuls 3, 5, 5
  036cf04  fmuls 5, 8, 5
  036cf08  stfs 7, 472(1)
  036cf0c  fmuls 4, 6, 4
  036cf10  stfs 5, 476(1)
  036cf14  stfs 4, 480(1)
  036cf18  lfs 4, 452(3)
  036cf1c  fmuls 4, 4, 3
  036cf20  stfs 4, 468(3)
  036cf24  lfs 4, 4(4)
  036cf28  addic 4, 4, 8
  036cf2c  fmuls 4, 4, 3
  036cf30  addic 3, 3, 8
  036cf34  stfs 4, 4(5)
  036cf38  addic 5, 5, 8
  036cf3c  bdnz 0x36cf18
  036cf40  li 5, 4
  036cf44  ori 3, 1, 0
  036cf48  mtctr 5
  036cf4c  lis 4, 115
  036cf50  addic 5, 3, 468
  036cf54  addic 4, 4, 22752
  036cf58  ori 6, 5, 0
  036cf5c  lfs 3, 468(3)
  036cf60  lfs 4, 0(4)
  036cf64  fmuls 3, 3, 4
  036cf68  lfs 4, 4(4)
  036cf6c  addic 4, 4, 8
  036cf70  stfs 3, 468(3)
  036cf74  lfs 3, 4(5)
  036cf78  addic 3, 3, 8
  036cf7c  fmuls 3, 3, 4
  036cf80  stfs 3, 4(5)
  036cf84  addic 5, 5, 8
  036cf88  bdnz 0x36cf5c
  036cf8c  ori 3, 1, 0
  036cf90  mtctr 7
  036cf94  lfs 3, 468(3)
  036cf98  lfs 4, 4(6)
  036cf9c  fadds 3, 29, 3
  036cfa0  lfs 5, 8(6)
  036cfa4  addic 3, 3, 16
  036cfa8  lfs 29, 12(6)
  036cfac  addic 6, 6, 16
  036cfb0  fadds 3, 3, 4
  036cfb4  fadds 3, 3, 5
  036cfb8  fadds 29, 3, 29
  036cfbc  bdnz 0x36cf94
  036cfc0  lis 3, 55
  036cfc4  addi 3, 3, -13720
  036cfc8  lfs 3, 8(3)
  036cfcc  fadds 29, 29, 3
  036cfd0  fmadds 29, 29, 1, 2
  036cfd4  fmr 1, 29
  036cfd8  fmr 2, 30
  036cfdc  bl 0x5025e0
  036cfe0  nop
  036cfe4  lis 3, 132
  036cfe8  lfs 2, 4476(3)
  036cfec  fmuls 2, 1, 2
  036cff0  fmr 1, 30
  036cff4  fmuls 2, 2, 31
  036cff8  bl 0x502578
  036cffc  nop
  036d000  stfs 1, 68(31)
  036d004  b 0x36d120
  036d008  lfs 1, 56(30)
  036d00c  addic 29, 1, 208
  036d010  lfs 2, 72(31)
  036d014  lfs 3, 68(31)
  036d018  ori 3, 29, 0
  036d01c  fneg 3, 3
  036d020  bl 0xfe610
  036d024  nop
  036d028  lis 3, 55
  036d02c  vspltisw 3, -1
  036d030  lis 5, 15948
  036d034  addi 27, 3, -13720
  036d038  lis 3, 149
  036d03c  li 4, 16
  036d040  addic 6, 3, 5056
  036d044  vslw 3, 3, 3
  036d048  ori 3, 5, 52429
  036d04c  lfs 1, 12(27)
  036d050  lis 5, 114
  036d054  li 7, -3056
  036d058  stw 3, 352(6)
  036d05c  lvlx 2, 4, 27
  036d060  vspltw 2, 2, 0
  036d064  lvlx 4, 7, 5
  036d068  li 5, 360
  036d06c  li 26, 0
  036d070  vmaddfp 2, 4, 2, 3
  036d074  li 8, 7
  036d078  li 7, 180
  036d07c  li 3, 0
  036d080  li 4, 1
  036d084  vctsxs 2, 2, 0
  036d088  vspltw 2, 2, 0
  036d08c  stvewx 2, 5, 6
  036d090  lfs 2, 4(27)
  036d094  stw 26, 5628(28)
  036d098  stb 8, 32(31)
  036d09c  fmr 31, 2
  036d0a0  stw 7, 52(30)
  036d0a4  lfs 3, 136(28)
  036d0a8  lwz 5, 8320(28)
  036d0ac  fadds 1, 3, 1
  036d0b0  stfs 1, 136(28)
  036d0b4  stw 26, 152(5)
  036d0b8  bl 0xb72b0
  036d0bc  nop
  036d0c0  li 6, -1
  036d0c4  stw 26, 5616(28)
  036d0c8  li 7, 1
  036d0cc  fmr 1, 31
  036d0d0  ori 3, 31, 0
  036d0d4  fmr 2, 31
  036d0d8  li 8, 10
  036d0dc  sth 6, 5620(28)
  036d0e0  lfs 3, 20(27)
  036d0e4  ori 4, 29, 0
  036d0e8  lfs 4, 24(27)
  036d0ec  li 5, 0
  036d0f0  lfs 5, 28(27)
  036d0f4  li 9, 3
  036d0f8  lfs 6, 32(27)
  036d0fc  li 10, 16
  036d100  lfs 7, 36(27)
  036d104  std 6, 144(1)
  036d108  std 7, 160(1)
  036d10c  std 7, 168(1)
  036d110  std 6, 176(1)
  036d114  std 26, 184(1)
  036d118  bl 0x10e030
  036d11c  nop
  036d120  lis 29, 151
  036d124  li 3, 255
  036d128  addic 29, 29, -25376
  036d12c  stb 3, 164(31)
  036d130  lwz 3, 5616(29)
  036d134  cmpw 3, 31
  036d138  bf 2, 0x36d1cc
  036d13c  lis 3, 132
  036d140  li 4, 4532
  036d144  vspltisw 5, -1
  036d148  lis 6, 55
  036d14c  li 5, 24
  036d150  addi 6, 6, -13720
  036d154  vspltisw 7, -1
  036d158  vslw 5, 5, 5
  036d15c  lvlx 2, 4, 3
  036d160  vrefp 3, 2
  036d164  lvlx 4, 5, 6
  036d168  vspltw 4, 4, 0
  036d16c  vslw 7, 7, 7
  036d170  vspltisw 8, -1
  036d174  li 3, 5628
  036d178  vspltisw 11, -1
  036d17c  vslw 8, 8, 8
  036d180  vnmsubfp 6, 3, 2, 4
  036d184  vmaddfp 3, 3, 6, 5
  036d188  vspltisw 5, -1
  036d18c  lvlx 6, 3, 29
  036d190  li 3, 40
  036d194  vslw 5, 5, 5
  036d198  lvlx 10, 3, 6
  036d19c  li 3, 5640
  036d1a0  vspltw 10, 10, 0
  036d1a4  vnmsubfp 9, 3, 2, 4
  036d1a8  vmaddfp 3, 3, 9, 7
  036d1ac  vslw 7, 11, 11
  036d1b0  vnmsubfp 2, 3, 2, 4
  036d1b4  vmaddfp 2, 3, 2, 5
  036d1b8  vmaddfp 2, 2, 6, 8
  036d1bc  vmaddfp 2, 2, 10, 7
  036d1c0  vctsxs 2, 2, 0
  036d1c4  vspltw 2, 2, 0
  036d1c8  stvewx 2, 3, 29
  036d1cc  lbz 3, 32(31)
  036d1d0  cmpwi 3, 7
  036d1d4  cmpwi 1, 3, 6
  036d1d8  cmpwi 6, 3, 5
  036d1dc  cmpwi 7, 3, 4
  036d1e0  bt 2, 0x36d744
  036d1e4  bt 6, 0x36d7c4
  036d1e8  bt 26, 0x36d724
  036d1ec  bt 30, 0x36d714
  036d1f0  cmpwi 3, 3
  036d1f4  bt 2, 0x36d608
  036d1f8  cmpwi 3, 2
  036d1fc  bt 2, 0x36d4f4
  036d200  cmpwi 3, 1
  036d204  bt 2, 0x36d42c
  036d208  cmpwi 3, 0
  036d20c  bf 2, 0x36d7c4
  036d210  lis 3, 132
  036d214  li 5, 1
  036d218  lis 6, 132
  036d21c  li 4, 0
  036d220  lfs 1, 4496(3)
  036d224  lis 3, 132
  036d228  stfs 1, 72(30)
  036d22c  stb 5, 32(31)
  036d230  lwz 5, 4508(6)
  036d234  stb 4, 48(30)
  036d238  stw 5, 108(30)
  036d23c  lwz 4, 36(31)
  036d240  lfs 1, 4544(3)
  036d244  lfs 2, 64(31)
  036d248  lis 3, 150
  036d24c  lfs 3, 36(4)
  036d250  addic 3, 3, -12416
  036d254  fmuls 1, 3, 1
  036d258  lis 4, 55
  036d25c  lis 5, 16256
  036d260  addi 4, 4, -13720
  036d264  stfs 1, 44(31)
  036d268  stfs 2, 32(30)
  036d26c  lfs 1, 64(31)
  036d270  stfs 1, 36(30)
  036d274  lwz 6, 176(3)
  036d278  lfs 1, 176(3)
  036d27c  lfs 6, 32(4)
  036d280  fabs 3, 1
  036d284  stw 5, 416(1)
  036d288  lis 5, 115
  036d28c  rlwinm 3, 6, 3, 29, 29
  036d290  fsubs 1, 6, 3
  036d294  stfs 1, 420(1)
  036d298  lfs 4, 4(4)
  036d29c  lfs 1, 416(1)
  036d2a0  addic 4, 5, 22784
  036d2a4  fabs 5, 1
  036d2a8  lwz 5, 420(1)
  036d2ac  lfs 1, 420(1)
  036d2b0  rlwimi 3, 5, 2, 30, 30
  036d2b4  fsub 2, 1, 4
  036d2b8  fsub 7, 1, 4
  036d2bc  ori 5, 4, 0
  036d2c0  rlwimi 5, 3, 2, 27, 28
  036d2c4  slwi 3, 3, 2
  036d2c8  clrldi 5, 5, 32
  036d2cc  lfsx 1, 4, 3
  036d2d0  fsel 5, 2, 5, 3
  036d2d4  lfs 2, 4(5)
  036d2d8  fsel 3, 7, 3, 6
  036d2dc  fcmpu 0, 5, 4
  036d2e0  bt 1, 0x36d2e8
  036d2e4  b 0x36d408
  036d2e8  fsubs 6, 3, 5
  036d2ec  fadds 3, 3, 5
  036d2f0  addic 3, 1, 16
  036d2f4  li 6, 2
  036d2f8  addic 4, 3, 420
  036d2fc  addic 5, 3, 436
  036d300  mtctr 6
  036d304  fdivs 3, 6, 3
  036d308  fmuls 5, 3, 3
  036d30c  stfs 3, 448(1)
  036d310  stfs 3, 440(1)
  036d314  stfs 3, 444(1)
  036d318  stfs 3, 436(1)
  036d31c  lfs 7, 448(1)
  036d320  lfs 8, 440(1)
  036d324  lfs 9, 444(1)
  036d328  fmuls 6, 5, 5
  036d32c  fmuls 8, 8, 5
  036d330  fmuls 7, 7, 6
  036d334  fmuls 3, 6, 6
  036d338  fmuls 6, 9, 6
  036d33c  stfs 8, 440(1)
  036d340  fmuls 5, 7, 5
  036d344  stfs 6, 444(1)
  036d348  stfs 5, 448(1)
  036d34c  lfs 5, 420(3)
  036d350  fmuls 5, 5, 3
  036d354  stfs 5, 436(3)
  036d358  lfs 5, 4(4)
  036d35c  addic 3, 3, 8
  036d360  addic 4, 4, 8
  036d364  fmuls 5, 5, 3
  036d368  stfs 5, 4(5)
  036d36c  addic 5, 5, 8
  036d370  bdnz 0x36d34c
  036d374  li 5, 4
  036d378  ori 3, 1, 0
  036d37c  mtctr 5
  036d380  lis 4, 115
  036d384  addic 5, 3, 436
  036d388  addic 4, 4, 22752
  036d38c  ori 7, 5, 0
  036d390  lfs 3, 436(3)
  036d394  lfs 5, 0(4)
  036d398  fmuls 3, 3, 5
  036d39c  lfs 5, 4(4)
  036d3a0  addic 4, 4, 8
  036d3a4  stfs 3, 436(3)
  036d3a8  lfs 3, 4(5)
  036d3ac  addic 3, 3, 8
  036d3b0  fmuls 3, 3, 5
  036d3b4  stfs 3, 4(5)
  036d3b8  addic 5, 5, 8
  036d3bc  bdnz 0x36d390
  036d3c0  ori 3, 1, 0
  036d3c4  mtctr 6
  036d3c8  lfs 3, 436(3)
  036d3cc  fadds 3, 4, 3
  036d3d0  lfs 4, 4(7)
  036d3d4  addic 3, 3, 16
  036d3d8  lfs 5, 8(7)
  036d3dc  lfs 6, 12(7)
  036d3e0  addic 7, 7, 16
  036d3e4  fadds 3, 3, 4
  036d3e8  fadds 4, 3, 5
  036d3ec  fadds 4, 4, 6
  036d3f0  bdnz 0x36d3c8
  036d3f4  lis 3, 55
  036d3f8  addi 3, 3, -13720
  036d3fc  lfs 3, 8(3)
  036d400  fadds 4, 4, 3
  036d404  fmadds 4, 4, 1, 2
  036d408  lis 3, 55
  036d40c  addi 3, 3, -13720
  036d410  lfs 1, 24(3)
  036d414  li 3, 0
  036d418  fmuls 1, 4, 1
  036d41c  stw 3, 176(30)
  036d420  stfs 1, 152(30)
  036d424  stfs 1, 156(30)
  036d428  b 0x36d7c4
  036d42c  ori 3, 31, 0
  036d430  lwz 4, 8320(29)
  036d434  bl 0xf20f0
  036d438  nop
  036d43c  lis 3, 132
  036d440  lfs 2, 4416(3)
  036d444  fcmpu 0, 1, 2
  036d448  cror 6, 1, 2
  036d44c  bt 6, 0x36d7c4
  036d450  li 3, 2
  036d454  li 4, 1
  036d458  lis 5, 132
  036d45c  lis 7, 17096
  036d460  stb 3, 32(31)
  036d464  li 9, 3
  036d468  lhz 6, 166(31)
  036d46c  lis 3, 132
  036d470  stw 31, 5616(29)
  036d474  li 10, 0
  036d478  sth 6, 5620(29)
  036d47c  addic 8, 29, 5640
  036d480  stb 4, 5646(29)
  036d484  lis 6, 112
  036d488  lwz 4, 108(30)
  036d48c  lwz 5, 4512(5)
  036d490  stb 4, 5622(29)
  036d494  addic 6, 6, 22216
  036d498  stb 5, 5623(29)
  036d49c  lis 4, 0
  036d4a0  stb 5, 5624(29)
  036d4a4  lfs 1, 72(30)
  036d4a8  lfs 2, 4532(3)
  036d4ac  lis 5, 112
  036d4b0  stfs 1, 5628(29)
  036d4b4  lis 3, 112
  036d4b8  stfs 2, 5632(29)
  036d4bc  addic 5, 5, 22176
  036d4c0  stw 7, 5636(29)
  036d4c4  ori 4, 4, 65535
  036d4c8  addic 7, 3, 22592
  036d4cc  stb 9, 5625(29)
  036d4d0  li 3, 16
  036d4d4  stb 9, 5626(29)
  036d4d8  stb 9, 5627(29)
  036d4dc  stb 10, 5647(29)
  036d4e0  li 9, 200
  036d4e4  bl 0xc8444
  036d4e8  nop
  036d4ec  sth 3, 5644(29)
  036d4f0  b 0x36d7c4
  036d4f4  li 3, 50
  036d4f8  li 4, 1
  036d4fc  bl 0xb72b0
  036d500  nop
  036d504  lis 3, 149
  036d508  li 5, 0
  036d50c  addic 4, 3, 5056
  036d510  li 6, 0
  036d514  addic 3, 4, 320
  036d518  li 7, 0
  036d51c  addic 4, 4, 336
  036d520  bl 0x47f74
  036d524  nop
  036d528  li 3, 0
  036d52c  lis 4, 132
  036d530  li 5, 255
  036d534  li 6, -1
  036d538  stw 3, 60(30)
  036d53c  stw 3, 64(30)
  036d540  lfs 1, 4420(4)
  036d544  stw 3, 68(30)
  036d548  stfs 1, 56(30)
  036d54c  li 4, 3
  036d550  stw 3, 76(30)
  036d554  stw 3, 80(30)
  036d558  stw 3, 104(30)
  036d55c  stw 3, 100(30)
  036d560  stb 5, 48(31)
  036d564  lwz 3, 8320(29)
  036d568  sth 5, 50(31)
  036d56c  lis 5, 132
  036d570  stw 6, 152(3)
  036d574  stb 4, 32(31)
  036d578  lfs 1, 16(31)
  036d57c  lfs 3, 128(29)
  036d580  lfs 2, 20(31)
  036d584  lfs 4, 132(29)
  036d588  lfs 5, 24(31)
  036d58c  fsubs 1, 1, 3
  036d590  lfs 6, 136(29)
  036d594  fsubs 7, 2, 4
  036d598  lfs 8, 4424(5)
  036d59c  fsubs 5, 5, 6
  036d5a0  lfs 2, 152(29)
  036d5a4  fmadds 1, 8, 1, 3
  036d5a8  fmadds 3, 8, 7, 4
  036d5ac  fmadds 4, 8, 5, 6
  036d5b0  stfs 1, 128(29)
  036d5b4  stfs 3, 132(29)
  036d5b8  stfs 4, 136(29)
  036d5bc  lfs 1, 72(31)
  036d5c0  bl 0x5025e0
  036d5c4  nop
  036d5c8  lis 3, 132
  036d5cc  lfs 3, 152(29)
  036d5d0  lfs 2, 4428(3)
  036d5d4  fmuls 2, 2, 1
  036d5d8  fmr 1, 3
  036d5dc  bl 0x502578
  036d5e0  nop
  036d5e4  lis 3, 55
  036d5e8  stfs 1, 152(29)
  036d5ec  addi 3, 3, -13720
  036d5f0  lwz 4, 8320(29)
  036d5f4  lfs 1, 44(3)
  036d5f8  lfs 2, 44(4)
  036d5fc  fmuls 1, 2, 1
  036d600  stfs 1, 44(4)
  036d604  b 0x36d7c4
  036d608  lfs 30, 20(31)
  036d60c  lfs 1, 132(29)
  036d610  lfs 31, 16(31)
  036d614  fsubs 30, 30, 1
  036d618  lfs 1, 128(29)
  036d61c  lfs 29, 24(31)
  036d620  fsubs 31, 31, 1
  036d624  lfs 1, 136(29)
  036d628  fsubs 29, 29, 1
  036d62c  lfs 1, 72(31)
  036d630  lfs 3, 152(29)
  036d634  fmr 2, 3
  036d638  bl 0x5025e0
  036d63c  nop
  036d640  fmuls 2, 30, 30
  036d644  lis 3, 55
  036d648  lwz 4, 8320(29)
  036d64c  addi 3, 3, -13720
  036d650  fmr 28, 1
  036d654  lfs 3, 44(3)
  036d658  fmadds 2, 31, 31, 2
  036d65c  lfs 4, 44(4)
  036d660  lis 3, 132
  036d664  fmuls 3, 4, 3
  036d668  fmadds 2, 29, 29, 2
  036d66c  stfs 3, 44(4)
  036d670  lfs 1, 4432(3)
  036d674  fsqrts 2, 2
  036d678  fcmpu 0, 2, 1
  036d67c  cror 6, 1, 2
  036d680  bt 6, 0x36d6c8
  036d684  lis 3, 132
  036d688  lfs 1, 4436(3)
  036d68c  fcmpu 0, 1, 28
  036d690  cror 6, 0, 2
  036d694  bt 6, 0x36d6c8
  036d698  lis 4, 132
  036d69c  ori 3, 30, 0
  036d6a0  lfs 1, 4420(4)
  036d6a4  lfs 2, 72(31)
  036d6a8  lfs 3, 68(31)
  036d6ac  fneg 3, 3
  036d6b0  bl 0xfe610
  036d6b4  nop
  036d6b8  li 3, 4
  036d6bc  li 4, 1
  036d6c0  stb 3, 32(31)
  036d6c4  stb 4, 8357(29)
  036d6c8  lis 3, 132
  036d6cc  lis 4, 132
  036d6d0  lfs 1, 4424(3)
  036d6d4  lfs 2, 128(29)
  036d6d8  lfs 3, 132(29)
  036d6dc  fmadds 4, 1, 31, 2
  036d6e0  lfs 2, 136(29)
  036d6e4  fmadds 3, 1, 30, 3
  036d6e8  fmadds 5, 1, 29, 2
  036d6ec  lfs 2, 4428(4)
  036d6f0  lfs 1, 152(29)
  036d6f4  fmuls 2, 2, 28
  036d6f8  stfs 4, 128(29)
  036d6fc  stfs 3, 132(29)
  036d700  stfs 5, 136(29)
  036d704  bl 0x502578
  036d708  nop
  036d70c  stfs 1, 152(29)
  036d710  b 0x36d7c4
  036d714  ori 3, 31, 0
  036d718  ori 4, 30, 0
  036d71c  bl 0x36b8c8
  036d720  b 0x36d7c4
  036d724  addic 3, 30, 52
  036d728  bl 0x4fff60
  036d72c  nop
  036d730  cmpwi 3, 0
  036d734  bt 2, 0x36d7c4
  036d738  li 3, 1
  036d73c  stb 3, 32(31)
  036d740  b 0x36d7c4
  036d744  lwz 5, 8320(29)
  036d748  li 28, 0
  036d74c  li 4, 1
  036d750  li 3, 0
  036d754  lwz 6, 36(5)
  036d758  lfs 1, 36(6)
  036d75c  stfs 1, 44(5)
  036d760  stb 28, 8357(29)
  036d764  bl 0xb72b0
  036d768  nop
  036d76c  lwz 4, 8320(29)
  036d770  li 3, 0
  036d774  stw 28, 152(4)
  036d778  bl 0x481d0
  036d77c  nop
  036d780  lhz 3, 5644(29)
  036d784  li 4, 0
  036d788  extsh 3, 3
  036d78c  bl 0xc8b28
  036d790  nop
  036d794  lwz 29, 84(30)
  036d798  cmpwi 29, 0
  036d79c  bt 2, 0x36d7ac
  036d7a0  ori 3, 29, 0
  036d7a4  bl 0xefb38
  036d7a8  nop
  036d7ac  li 4, 0
  036d7b0  ori 3, 31, 0
  036d7b4  stw 4, 84(30)
  036d7b8  bl 0xefb38
  036d7bc  nop
  036d7c0  b 0x36da1c
  036d7c4  lis 4, 55
  036d7c8  lwz 5, 16(31)
  036d7cc  lis 3, 16544
  036d7d0  addi 4, 4, -13720
  036d7d4  lfs 3, 16(31)
  036d7d8  srawi 6, 5, 31
  036d7dc  srwi 7, 6, 1
  036d7e0  xor 5, 7, 5
  036d7e4  lfs 1, 48(4)
  036d7e8  subc 4, 5, 6
  036d7ec  cmpw 4, 3
  036d7f0  bf 0, 0x36d7fc
  036d7f4  fmr 3, 1
  036d7f8  stw 3, 16(31)
  036d7fc  lis 4, 55
  036d800  addi 4, 4, -13720
  036d804  lfs 2, 52(4)
  036d808  fcmpu 0, 3, 2
  036d80c  cror 6, 0, 2
  036d810  bt 6, 0x36d820
  036d814  lis 4, 17402
  036d818  fmr 3, 2
  036d81c  stw 4, 16(31)
  036d820  lwz 4, 20(31)
  036d824  lfs 4, 20(31)
  036d828  srawi 5, 4, 31
  036d82c  srwi 6, 5, 1
  036d830  xor 4, 6, 4
  036d834  subc 4, 4, 5
  036d838  cmpw 4, 3
  036d83c  bf 0, 0x36d848
  036d840  fmr 4, 1
  036d844  stw 3, 20(31)
  036d848  fcmpu 0, 4, 2
  036d84c  cror 6, 0, 2
  036d850  bt 6, 0x36d860
  036d854  lis 4, 17402
  036d858  fmr 4, 2
  036d85c  stw 4, 20(31)
  036d860  lwz 4, 24(31)
  036d864  lfs 5, 24(31)
  036d868  srawi 5, 4, 31
  036d86c  srwi 6, 5, 1
  036d870  xor 4, 6, 4
  036d874  subc 4, 4, 5
  036d878  cmpw 4, 3
  036d87c  bf 0, 0x36d888
  036d880  fmr 5, 1
  036d884  stw 3, 24(31)
  036d888  fmr 1, 5
  036d88c  fcmpu 0, 1, 2
  036d890  cror 6, 0, 2
  036d894  bt 6, 0x36d8a4
  036d898  lis 3, 17402
  036d89c  fmr 1, 2
  036d8a0  stw 3, 24(31)
  036d8a4  lbz 3, 32(31)
  036d8a8  cmpwi 3, 4
  036d8ac  cmpwi 1, 3, 2
  036d8b0  cmpwi 6, 3, 5
  036d8b4  bf 2, 0x36d8ec
  036d8b8  stfs 3, 128(29)
  036d8bc  stfs 4, 132(29)
  036d8c0  stfs 1, 136(29)
  036d8c4  lfs 1, 28(31)
  036d8c8  stfs 1, 140(29)
  036d8cc  lfs 1, 64(31)
  036d8d0  stfs 1, 144(29)
  036d8d4  lfs 1, 68(31)
  036d8d8  stfs 1, 148(29)
  036d8dc  lfs 1, 72(31)
  036d8e0  stfs 1, 152(29)
  036d8e4  lfs 1, 76(31)
  036d8e8  stfs 1, 156(29)
  036d8ec  bf 5, 0x36da1c
  036d8f0  bf 24, 0x36da1c
  036d8f4  lwz 29, 84(30)
  036d8f8  cmpwi 29, 0
  036d8fc  bf 2, 0x36d914
  036d900  ori 3, 31, 0
  036d904  bl 0x2b9870
  036d908  nop
  036d90c  ori 29, 3, 0
  036d910  stw 29, 84(30)
  036d914  cmpwi 29, 0
  036d918  bt 2, 0x36da1c
  036d91c  lis 3, 55
  036d920  lis 5, 132
  036d924  addi 4, 3, -13720
  036d928  lis 3, 114
  036d92c  lfs 1, 56(4)
  036d930  lfs 2, -3064(3)
  036d934  lwz 3, 120(29)
  036d938  fmuls 1, 2, 1
  036d93c  stfs 1, 72(29)
  036d940  lfs 4, 60(4)
  036d944  lfs 3, 180(30)
  036d948  lfs 5, 4652(5)
  036d94c  lfs 2, 12(3)
  036d950  fmadds 3, 3, 5, 4
  036d954  lfs 1, 64(4)
  036d958  fcmpu 1, 2, 3
  036d95c  bf 5, 0x36d974
  036d960  lis 4, 114
  036d964  lfs 3, -3064(4)
  036d968  fnmsubs 1, 3, 1, 2
  036d96c  stfs 1, 12(3)
  036d970  b 0x36d988
  036d974  bf 4, 0x36d988
  036d978  lis 4, 114
  036d97c  lfs 3, -3064(4)
  036d980  fmadds 1, 3, 1, 2
  036d984  stfs 1, 12(3)
  036d988  lis 3, 55
  036d98c  lfs 1, 180(30)
  036d990  addi 3, 3, -13720
  036d994  lfs 2, 68(3)
  036d998  fmuls 1, 1, 2
  036d99c  bl 0x502758
  036d9a0  nop
  036d9a4  addic 5, 3, 80
  036d9a8  addic 30, 1, 288
  036d9ac  addic 4, 29, 64
  036d9b0  ori 3, 30, 0
  036d9b4  stb 5, 35(29)
  036d9b8  bl 0x500ca4
  036d9bc  nop
  036d9c0  addic 28, 1, 352
  036d9c4  addic 4, 31, 192
  036d9c8  ori 3, 28, 0
  036d9cc  bl 0x500f6c
  036d9d0  nop
  036d9d4  addic 27, 1, 224
  036d9d8  ori 4, 28, 0
  036d9dc  ori 3, 27, 0
  036d9e0  ori 5, 30, 0
  036d9e4  bl 0x50162c
  036d9e8  nop
  036d9ec  addic 3, 29, 192
  036d9f0  ori 4, 27, 0
  036d9f4  bl 0x500fa8
  036d9f8  nop
  036d9fc  ori 3, 31, 0
  036da00  addic 5, 29, 16
  036da04  li 4, 2
  036da08  bl 0xf1114
  036da0c  nop
  036da10  ori 3, 29, 0
  036da14  bl 0xf30a0
  036da18  nop
  036da1c  ld 0, 640(1)
  036da20  mtlr 0
  036da24  lfd 28, 592(1)
  036da28  lfd 29, 600(1)
  036da2c  lfd 30, 608(1)
  036da30  lfd 31, 616(1)
  036da34  ld 26, 544(1)
  036da38  ld 27, 552(1)
  036da3c  ld 28, 560(1)
  036da40  ld 29, 568(1)
  036da44  ld 30, 576(1)
  036da48  ld 31, 584(1)
  036da4c  addi 1, 1, 624
  036da50  blr
