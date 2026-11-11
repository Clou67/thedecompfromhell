# game/update/moby175.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M175_002b06bc:   # 0x2b06bc, 0x14 bytes
  02b06bc  lis 3, 123
  02b06c0  lis 4, 1
  02b06c4  addic 3, 3, 29796
  02b06c8  stw 4, 72(3)
  02b06cc  blr

M175_002b06f0:   # 0x2b06f0, 0x980 bytes
  02b06f0  stdu 1, -400(1)
  02b06f4  mflr 0
  02b06f8  std 0, 416(1)
  02b06fc  stfd 27, 360(1)
  02b0700  stfd 28, 368(1)
  02b0704  stfd 29, 376(1)
  02b0708  stfd 30, 384(1)
  02b070c  stfd 31, 392(1)
  02b0710  std 31, 352(1)
  02b0714  ori 31, 4, 0
  02b0718  li 3, 1
  02b071c  std 29, 336(1)
  02b0720  fmr 31, 1
  02b0724  li 4, 1
  02b0728  std 30, 344(1)
  02b072c  li 29, 0
  02b0730  lwz 30, 120(31)
  02b0734  lfs 30, 16(31)
  02b0738  lfs 29, 20(31)
  02b073c  lwz 5, 20(30)
  02b0740  extsw 5, 5
  02b0744  subc 3, 5, 3
  02b0748  subc 4, 4, 5
  02b074c  sradi 3, 3, 63
  02b0750  and 3, 3, 4
  02b0754  std 28, 328(1)
  02b0758  std 27, 320(1)
  02b075c  std 26, 312(1)
  02b0760  std 25, 304(1)
  02b0764  std 24, 296(1)
  02b0768  std 23, 288(1)
  02b076c  addc 3, 5, 3
  02b0770  bl 0xfc620
  02b0774  nop
  02b0778  lis 4, 165
  02b077c  stw 29, 20(30)
  02b0780  ori 28, 3, 0
  02b0784  lwz 27, -27836(4)
  02b0788  cmpwi 27, 0
  02b078c  bt 2, 0x2b0d90
  02b0790  ori 25, 29, 0
  02b0794  ori 3, 27, 0
  02b0798  bl 0xfcccc
  02b079c  nop
  02b07a0  ori 26, 3, 0
  02b07a4  cmpwi 26, 0
  02b07a8  bt 2, 0x2b0d74
  02b07ac  lfs 2, 20(27)
  02b07b0  lfs 1, 16(27)
  02b07b4  fsubs 3, 29, 2
  02b07b8  fsubs 4, 30, 1
  02b07bc  lis 3, 43
  02b07c0  addi 3, 3, 1744
  02b07c4  fmuls 3, 3, 3
  02b07c8  fmadds 28, 4, 4, 3
  02b07cc  lfs 3, 0(3)
  02b07d0  fsqrts 28, 28
  02b07d4  fcmpu 0, 28, 3
  02b07d8  cror 6, 1, 2
  02b07dc  bt 6, 0x2b0b18
  02b07e0  lhz 3, 166(27)
  02b07e4  cmpwi 7, 3, 501
  02b07e8  cmpwi 3, 500
  02b07ec  cror 2, 2, 30
  02b07f0  cmpwi 1, 3, 511
  02b07f4  cmpwi 6, 3, 505
  02b07f8  bt 2, 0x2b0804
  02b07fc  bt 26, 0x2b0804
  02b0800  bf 6, 0x2b0b18
  02b0804  lis 24, 151
  02b0808  addic 24, 24, -25376
  02b080c  lis 3, 43
  02b0810  addi 3, 3, 1744
  02b0814  lfs 3, 128(24)
  02b0818  lfs 4, 132(24)
  02b081c  fsubs 1, 1, 3
  02b0820  fsubs 2, 2, 4
  02b0824  lis 4, 115
  02b0828  addic 4, 4, 22784
  02b082c  fabs 4, 1
  02b0830  fabs 5, 2
  02b0834  stfs 1, 152(1)
  02b0838  stfs 2, 156(1)
  02b083c  lfs 3, 152(24)
  02b0840  fsubs 1, 4, 5
  02b0844  stfs 1, 160(1)
  02b0848  lwz 5, 152(1)
  02b084c  lfs 27, 4(3)
  02b0850  lfs 1, 152(1)
  02b0854  lwz 3, 156(1)
  02b0858  lfs 2, 156(1)
  02b085c  fabs 1, 1
  02b0860  lwz 6, 160(1)
  02b0864  rlwinm 3, 3, 3, 29, 29
  02b0868  fabs 6, 2
  02b086c  lfs 2, 160(1)
  02b0870  rlwimi 3, 6, 2, 30, 30
  02b0874  fsub 7, 2, 27
  02b0878  rlwimi 3, 5, 4, 28, 28
  02b087c  fsub 8, 2, 27
  02b0880  ori 5, 4, 0
  02b0884  rlwimi 5, 3, 2, 26, 28
  02b0888  slwi 3, 3, 2
  02b088c  clrldi 5, 5, 32
  02b0890  fsel 5, 7, 1, 5
  02b0894  lfsx 1, 4, 3
  02b0898  lfs 2, 4(5)
  02b089c  fsel 4, 8, 6, 4
  02b08a0  fcmpu 0, 5, 27
  02b08a4  bt 1, 0x2b08b0
  02b08a8  fmr 1, 27
  02b08ac  b 0x2b09d4
  02b08b0  fsubs 6, 4, 5
  02b08b4  fadds 4, 4, 5
  02b08b8  addic 3, 1, 16
  02b08bc  li 6, 2
  02b08c0  addic 4, 3, 212
  02b08c4  addic 5, 3, 228
  02b08c8  mtctr 6
  02b08cc  fdivs 4, 6, 4
  02b08d0  fmuls 5, 4, 4
  02b08d4  stfs 4, 240(1)
  02b08d8  stfs 4, 232(1)
  02b08dc  stfs 4, 236(1)
  02b08e0  stfs 4, 228(1)
  02b08e4  lfs 7, 240(1)
  02b08e8  lfs 8, 232(1)
  02b08ec  lfs 9, 236(1)
  02b08f0  fmuls 6, 5, 5
  02b08f4  fmuls 8, 8, 5
  02b08f8  fmuls 7, 7, 6
  02b08fc  fmuls 4, 6, 6
  02b0900  fmuls 6, 9, 6
  02b0904  stfs 8, 232(1)
  02b0908  fmuls 5, 7, 5
  02b090c  stfs 6, 236(1)
  02b0910  stfs 5, 240(1)
  02b0914  lfs 5, 212(3)
  02b0918  fmuls 5, 5, 4
  02b091c  stfs 5, 228(3)
  02b0920  lfs 5, 4(4)
  02b0924  addic 3, 3, 8
  02b0928  addic 4, 4, 8
  02b092c  fmuls 5, 5, 4
  02b0930  stfs 5, 4(5)
  02b0934  addic 5, 5, 8
  02b0938  bdnz 0x2b0914
  02b093c  li 5, 4
  02b0940  ori 3, 1, 0
  02b0944  mtctr 5
  02b0948  lis 4, 115
  02b094c  addic 5, 3, 228
  02b0950  addic 4, 4, 22752
  02b0954  ori 7, 5, 0
  02b0958  lfs 4, 228(3)
  02b095c  lfs 5, 0(4)
  02b0960  fmuls 4, 4, 5
  02b0964  lfs 5, 4(4)
  02b0968  addic 4, 4, 8
  02b096c  stfs 4, 228(3)
  02b0970  lfs 4, 4(5)
  02b0974  addic 3, 3, 8
  02b0978  fmuls 4, 4, 5
  02b097c  stfs 4, 4(5)
  02b0980  addic 5, 5, 8
  02b0984  bdnz 0x2b0958
  02b0988  fmr 4, 27
  02b098c  ori 3, 1, 0
  02b0990  mtctr 6
  02b0994  lfs 5, 228(3)
  02b0998  fadds 4, 4, 5
  02b099c  addic 3, 3, 16
  02b09a0  lfs 5, 4(7)
  02b09a4  lfs 6, 8(7)
  02b09a8  lfs 7, 12(7)
  02b09ac  addic 7, 7, 16
  02b09b0  fadds 4, 4, 5
  02b09b4  fadds 4, 4, 6
  02b09b8  fadds 4, 4, 7
  02b09bc  bdnz 0x2b0994
  02b09c0  lis 3, 43
  02b09c4  addi 3, 3, 1744
  02b09c8  lfs 5, 8(3)
  02b09cc  fadds 4, 4, 5
  02b09d0  fmadds 1, 4, 1, 2
  02b09d4  fmr 2, 1
  02b09d8  fmr 1, 3
  02b09dc  bl 0x5026a0
  02b09e0  nop
  02b09e4  lis 3, 43
  02b09e8  addi 3, 3, 1744
  02b09ec  lfs 2, 12(3)
  02b09f0  fcmpu 0, 1, 2
  02b09f4  cror 6, 1, 2
  02b09f8  bt 6, 0x2b0b18
  02b09fc  lwz 3, 20(30)
  02b0a00  cmpw 3, 28
  02b0a04  bf 2, 0x2b0b10
  02b0a08  lfs 1, 16(27)
  02b0a0c  lfs 2, 16(31)
  02b0a10  fsubs 1, 1, 2
  02b0a14  lfs 2, 20(31)
  02b0a18  lfs 3, 24(31)
  02b0a1c  lis 3, 43
  02b0a20  addi 23, 3, 1744
  02b0a24  stfs 1, 112(1)
  02b0a28  lfs 4, 20(27)
  02b0a2c  fsubs 2, 4, 2
  02b0a30  ori 3, 27, 0
  02b0a34  addic 7, 24, 128
  02b0a38  addic 8, 1, 112
  02b0a3c  fmuls 4, 2, 2
  02b0a40  stfs 2, 116(1)
  02b0a44  lfs 5, 24(27)
  02b0a48  fsubs 3, 5, 3
  02b0a4c  fmadds 4, 1, 1, 4
  02b0a50  ori 4, 31, 0
  02b0a54  lis 5, 1
  02b0a58  stfs 3, 120(1)
  02b0a5c  fmadds 4, 3, 3, 4
  02b0a60  lfs 5, 28(27)
  02b0a64  stfs 5, 124(1)
  02b0a68  lfs 5, 16(23)
  02b0a6c  fsqrts 4, 4
  02b0a70  fdivs 5, 5, 4
  02b0a74  fsub 6, 27, 4
  02b0a78  fsub 7, 27, 4
  02b0a7c  fsub 8, 27, 4
  02b0a80  fsub 9, 4, 27
  02b0a84  fsub 10, 4, 27
  02b0a88  fsub 4, 4, 27
  02b0a8c  fmuls 1, 1, 5
  02b0a90  fmuls 2, 2, 5
  02b0a94  fmuls 3, 3, 5
  02b0a98  fsel 5, 6, 27, 1
  02b0a9c  fsel 6, 7, 27, 2
  02b0aa0  fsel 7, 8, 27, 3
  02b0aa4  fsel 1, 9, 5, 1
  02b0aa8  fsel 2, 10, 6, 2
  02b0aac  fsel 3, 4, 7, 3
  02b0ab0  stfs 1, 112(1)
  02b0ab4  stfs 2, 116(1)
  02b0ab8  stfs 3, 120(1)
  02b0abc  lfs 1, 20(23)
  02b0ac0  bl 0x105c08
  02b0ac4  nop
  02b0ac8  li 3, 5
  02b0acc  li 4, 45
  02b0ad0  bl 0xfe484
  02b0ad4  nop
  02b0ad8  extsw 3, 3
  02b0adc  li 4, 16
  02b0ae0  std 3, 264(1)
  02b0ae4  lis 3, 114
  02b0ae8  lfs 1, 24(23)
  02b0aec  lfs 2, -3056(3)
  02b0af0  lwz 3, 20(30)
  02b0af4  lfd 3, 264(1)
  02b0af8  fcfid 3, 3
  02b0afc  frsp 3, 3
  02b0b00  fadds 1, 3, 1
  02b0b04  fmuls 1, 2, 1
  02b0b08  fctiwz 1, 1
  02b0b0c  stfiwx 1, 4, 30
  02b0b10  addic 3, 3, 1
  02b0b14  stw 3, 20(30)
  02b0b18  fcmpu 0, 28, 31
  02b0b1c  cror 6, 1, 2
  02b0b20  bt 6, 0x2b0d74
  02b0b24  lis 3, 151
  02b0b28  lfs 1, 16(27)
  02b0b2c  addic 3, 3, -25376
  02b0b30  lfs 2, 20(27)
  02b0b34  lis 4, 43
  02b0b38  addi 4, 4, 1744
  02b0b3c  lfs 3, 128(3)
  02b0b40  lfs 4, 132(3)
  02b0b44  fsubs 1, 1, 3
  02b0b48  fsubs 2, 2, 4
  02b0b4c  fabs 3, 1
  02b0b50  fabs 6, 2
  02b0b54  stfs 1, 140(1)
  02b0b58  stfs 2, 144(1)
  02b0b5c  lfs 4, 152(3)
  02b0b60  lis 3, 115
  02b0b64  addic 3, 3, 22784
  02b0b68  fsubs 1, 3, 6
  02b0b6c  stfs 1, 148(1)
  02b0b70  lwz 5, 140(1)
  02b0b74  lfs 5, 4(4)
  02b0b78  lfs 1, 140(1)
  02b0b7c  lwz 4, 144(1)
  02b0b80  lfs 2, 144(1)
  02b0b84  fabs 1, 1
  02b0b88  lwz 6, 148(1)
  02b0b8c  rlwinm 4, 4, 3, 29, 29
  02b0b90  fabs 7, 2
  02b0b94  lfs 2, 148(1)
  02b0b98  rlwimi 4, 6, 2, 30, 30
  02b0b9c  fsub 8, 2, 5
  02b0ba0  rlwimi 4, 5, 4, 28, 28
  02b0ba4  fsub 9, 2, 5
  02b0ba8  ori 5, 3, 0
  02b0bac  rlwimi 5, 4, 2, 26, 28
  02b0bb0  slwi 4, 4, 2
  02b0bb4  clrldi 5, 5, 32
  02b0bb8  fsel 6, 8, 1, 6
  02b0bbc  lfsx 1, 3, 4
  02b0bc0  lfs 2, 4(5)
  02b0bc4  fsel 3, 9, 7, 3
  02b0bc8  fcmpu 0, 6, 5
  02b0bcc  bt 1, 0x2b0bd4
  02b0bd0  b 0x2b0cf4
  02b0bd4  fsubs 7, 3, 6
  02b0bd8  fadds 3, 3, 6
  02b0bdc  addic 3, 1, 16
  02b0be0  li 7, 2
  02b0be4  addic 5, 3, 196
  02b0be8  addic 4, 3, 180
  02b0bec  mtctr 7
  02b0bf0  fdivs 3, 7, 3
  02b0bf4  fmuls 6, 3, 3
  02b0bf8  stfs 3, 208(1)
  02b0bfc  stfs 3, 200(1)
  02b0c00  stfs 3, 204(1)
  02b0c04  stfs 3, 196(1)
  02b0c08  lfs 8, 208(1)
  02b0c0c  lfs 9, 200(1)
  02b0c10  lfs 10, 204(1)
  02b0c14  fmuls 7, 6, 6
  02b0c18  fmuls 9, 9, 6
  02b0c1c  fmuls 8, 8, 7
  02b0c20  fmuls 3, 7, 7
  02b0c24  fmuls 7, 10, 7
  02b0c28  stfs 9, 200(1)
  02b0c2c  fmuls 6, 8, 6
  02b0c30  stfs 7, 204(1)
  02b0c34  stfs 6, 208(1)
  02b0c38  lfs 6, 180(3)
  02b0c3c  fmuls 6, 6, 3
  02b0c40  stfs 6, 196(3)
  02b0c44  lfs 6, 4(4)
  02b0c48  addic 4, 4, 8
  02b0c4c  fmuls 6, 6, 3
  02b0c50  addic 3, 3, 8
  02b0c54  stfs 6, 4(5)
  02b0c58  addic 5, 5, 8
  02b0c5c  bdnz 0x2b0c38
  02b0c60  li 5, 4
  02b0c64  ori 3, 1, 0
  02b0c68  mtctr 5
  02b0c6c  lis 4, 115
  02b0c70  addic 5, 3, 196
  02b0c74  addic 4, 4, 22752
  02b0c78  ori 6, 5, 0
  02b0c7c  lfs 3, 196(3)
  02b0c80  lfs 6, 0(4)
  02b0c84  fmuls 3, 3, 6
  02b0c88  lfs 6, 4(4)
  02b0c8c  addic 4, 4, 8
  02b0c90  stfs 3, 196(3)
  02b0c94  lfs 3, 4(5)
  02b0c98  addic 3, 3, 8
  02b0c9c  fmuls 3, 3, 6
  02b0ca0  stfs 3, 4(5)
  02b0ca4  addic 5, 5, 8
  02b0ca8  bdnz 0x2b0c7c
  02b0cac  ori 3, 1, 0
  02b0cb0  mtctr 7
  02b0cb4  lfs 3, 196(3)
  02b0cb8  fadds 3, 5, 3
  02b0cbc  addic 3, 3, 16
  02b0cc0  lfs 5, 4(6)
  02b0cc4  lfs 6, 8(6)
  02b0cc8  lfs 7, 12(6)
  02b0ccc  addic 6, 6, 16
  02b0cd0  fadds 3, 3, 5
  02b0cd4  fadds 5, 3, 6
  02b0cd8  fadds 5, 5, 7
  02b0cdc  bdnz 0x2b0cb4
  02b0ce0  lis 3, 43
  02b0ce4  addi 3, 3, 1744
  02b0ce8  lfs 3, 8(3)
  02b0cec  fadds 5, 5, 3
  02b0cf0  fmadds 5, 5, 1, 2
  02b0cf4  fmr 1, 4
  02b0cf8  fmr 2, 5
  02b0cfc  bl 0x5026a0
  02b0d00  nop
  02b0d04  lis 3, 43
  02b0d08  addi 3, 3, 1744
  02b0d0c  lfs 2, 12(3)
  02b0d10  fcmpu 0, 1, 2
  02b0d14  cror 6, 1, 2
  02b0d18  bt 6, 0x2b0d74
  02b0d1c  lwz 3, 24(26)
  02b0d20  addic 4, 29, 1
  02b0d24  cmpwi 3, 0
  02b0d28  extsw 4, 4
  02b0d2c  bt 2, 0x2b0d6c
  02b0d30  lfs 1, 20(3)
  02b0d34  lfs 2, 20(27)
  02b0d38  lfs 3, 16(3)
  02b0d3c  fsubs 1, 1, 2
  02b0d40  lfs 2, 16(27)
  02b0d44  fsubs 2, 3, 2
  02b0d48  fmuls 1, 1, 1
  02b0d4c  fmadds 1, 2, 2, 1
  02b0d50  fsqrts 1, 1
  02b0d54  fcmpu 0, 28, 1
  02b0d58  cror 6, 1, 2
  02b0d5c  bt 6, 0x2b0d74
  02b0d60  ori 29, 4, 0
  02b0d64  stw 31, 24(26)
  02b0d68  b 0x2b0d74
  02b0d6c  ori 29, 4, 0
  02b0d70  stw 31, 24(26)
  02b0d74  lis 3, 165
  02b0d78  addic 25, 25, 4
  02b0d7c  addic 3, 3, -27836
  02b0d80  extsw 4, 25
  02b0d84  lwzx 27, 3, 4
  02b0d88  cmpwi 27, 0
  02b0d8c  bf 2, 0x2b0794
  02b0d90  lis 3, 165
  02b0d94  li 30, 1
  02b0d98  lhz 3, 7912(3)
  02b0d9c  extsh 3, 3
  02b0da0  cmpwi 3, 1
  02b0da4  bt 0, 0x2b1024
  02b0da8  li 27, 2
  02b0dac  ori 26, 27, 0
  02b0db0  lis 3, 165
  02b0db4  lis 4, 164
  02b0db8  addic 3, 3, 7912
  02b0dbc  lwz 4, -28512(4)
  02b0dc0  lhzx 3, 3, 27
  02b0dc4  extsh 3, 3
  02b0dc8  sldi 3, 3, 8
  02b0dcc  addc 3, 4, 3
  02b0dd0  clrldi 3, 3, 32
  02b0dd4  cmpwi 3, 0
  02b0dd8  bt 2, 0x2b1008
  02b0ddc  lbz 4, 32(3)
  02b0de0  cmpwi 4, 128
  02b0de4  bf 0, 0x2b1008
  02b0de8  lfs 1, 20(3)
  02b0dec  lfs 2, 16(3)
  02b0df0  fsubs 3, 29, 1
  02b0df4  fsubs 4, 30, 2
  02b0df8  lwz 28, 120(3)
  02b0dfc  fmuls 3, 3, 3
  02b0e00  fmadds 3, 4, 4, 3
  02b0e04  fsqrts 3, 3
  02b0e08  fcmpu 0, 3, 31
  02b0e0c  cror 6, 1, 2
  02b0e10  bt 6, 0x2b1008
  02b0e14  lis 3, 151
  02b0e18  addic 3, 3, -25376
  02b0e1c  lis 4, 43
  02b0e20  lis 5, 115
  02b0e24  addi 4, 4, 1744
  02b0e28  lfs 3, 128(3)
  02b0e2c  lfs 4, 132(3)
  02b0e30  fsubs 2, 2, 3
  02b0e34  fsubs 1, 1, 4
  02b0e38  fabs 5, 2
  02b0e3c  fabs 6, 1
  02b0e40  stfs 2, 128(1)
  02b0e44  stfs 1, 132(1)
  02b0e48  lfs 1, 152(3)
  02b0e4c  addic 3, 5, 22784
  02b0e50  fsubs 2, 5, 6
  02b0e54  stfs 2, 136(1)
  02b0e58  lwz 5, 128(1)
  02b0e5c  lfs 4, 4(4)
  02b0e60  lfs 2, 128(1)
  02b0e64  lwz 4, 132(1)
  02b0e68  lfs 3, 132(1)
  02b0e6c  fabs 2, 2
  02b0e70  lwz 6, 136(1)
  02b0e74  rlwinm 4, 4, 3, 29, 29
  02b0e78  fabs 7, 3
  02b0e7c  lfs 3, 136(1)
  02b0e80  rlwimi 4, 6, 2, 30, 30
  02b0e84  fsub 8, 3, 4
  02b0e88  rlwimi 4, 5, 4, 28, 28
  02b0e8c  fsub 9, 3, 4
  02b0e90  ori 5, 3, 0
  02b0e94  rlwimi 5, 4, 2, 26, 28
  02b0e98  slwi 4, 4, 2
  02b0e9c  clrldi 5, 5, 32
  02b0ea0  fsel 6, 8, 2, 6
  02b0ea4  lfsx 2, 3, 4
  02b0ea8  lfs 3, 4(5)
  02b0eac  fsel 5, 9, 7, 5
  02b0eb0  fcmpu 0, 6, 4
  02b0eb4  bt 1, 0x2b0ebc
  02b0eb8  b 0x2b0fd8
  02b0ebc  fsubs 7, 5, 6
  02b0ec0  fadds 5, 5, 6
  02b0ec4  addic 3, 1, 16
  02b0ec8  mtctr 26
  02b0ecc  addic 4, 3, 148
  02b0ed0  addic 5, 3, 164
  02b0ed4  fdivs 5, 7, 5
  02b0ed8  fmuls 6, 5, 5
  02b0edc  stfs 5, 176(1)
  02b0ee0  stfs 5, 168(1)
  02b0ee4  stfs 5, 172(1)
  02b0ee8  stfs 5, 164(1)
  02b0eec  lfs 8, 176(1)
  02b0ef0  lfs 9, 168(1)
  02b0ef4  lfs 10, 172(1)
  02b0ef8  fmuls 7, 6, 6
  02b0efc  fmuls 9, 9, 6
  02b0f00  fmuls 8, 8, 7
  02b0f04  fmuls 5, 7, 7
  02b0f08  fmuls 7, 10, 7
  02b0f0c  stfs 9, 168(1)
  02b0f10  fmuls 6, 8, 6
  02b0f14  stfs 7, 172(1)
  02b0f18  stfs 6, 176(1)
  02b0f1c  lfs 6, 148(3)
  02b0f20  fmuls 6, 6, 5
  02b0f24  stfs 6, 164(3)
  02b0f28  lfs 6, 4(4)
  02b0f2c  addic 3, 3, 8
  02b0f30  addic 4, 4, 8
  02b0f34  fmuls 6, 6, 5
  02b0f38  stfs 6, 4(5)
  02b0f3c  addic 5, 5, 8
  02b0f40  bdnz 0x2b0f1c
  02b0f44  li 5, 4
  02b0f48  ori 3, 1, 0
  02b0f4c  mtctr 5
  02b0f50  lis 4, 115
  02b0f54  addic 5, 3, 164
  02b0f58  addic 4, 4, 22752
  02b0f5c  ori 6, 5, 0
  02b0f60  lfs 5, 164(3)
  02b0f64  lfs 6, 0(4)
  02b0f68  fmuls 5, 5, 6
  02b0f6c  lfs 6, 4(4)
  02b0f70  addic 4, 4, 8
  02b0f74  stfs 5, 164(3)
  02b0f78  lfs 5, 4(5)
  02b0f7c  addic 3, 3, 8
  02b0f80  fmuls 5, 5, 6
  02b0f84  stfs 5, 4(5)
  02b0f88  addic 5, 5, 8
  02b0f8c  bdnz 0x2b0f60
  02b0f90  ori 3, 1, 0
  02b0f94  mtctr 26
  02b0f98  lfs 5, 164(3)
  02b0f9c  fadds 4, 4, 5
  02b0fa0  lfs 5, 4(6)
  02b0fa4  addic 3, 3, 16
  02b0fa8  lfs 6, 8(6)
  02b0fac  lfs 7, 12(6)
  02b0fb0  addic 6, 6, 16
  02b0fb4  fadds 4, 4, 5
  02b0fb8  fadds 4, 4, 6
  02b0fbc  fadds 4, 4, 7
  02b0fc0  bdnz 0x2b0f98
  02b0fc4  lis 3, 43
  02b0fc8  addi 3, 3, 1744
  02b0fcc  lfs 5, 8(3)
  02b0fd0  fadds 4, 4, 5
  02b0fd4  fmadds 4, 4, 2, 3
  02b0fd8  fmr 2, 4
  02b0fdc  bl 0x5026a0
  02b0fe0  nop
  02b0fe4  lis 3, 43
  02b0fe8  addi 3, 3, 1744
  02b0fec  lfs 2, 12(3)
  02b0ff0  fcmpu 0, 1, 2
  02b0ff4  cror 6, 1, 2
  02b0ff8  bt 6, 0x2b1008
  02b0ffc  addic 29, 29, 1
  02b1000  stw 31, 120(28)
  02b1004  extsw 29, 29
  02b1008  lis 3, 165
  02b100c  addic 30, 30, 1
  02b1010  addic 27, 27, 2
  02b1014  lhz 3, 7912(3)
  02b1018  extsh 3, 3
  02b101c  cmpw 30, 3
  02b1020  bf 1, 0x2b0db0
  02b1024  ori 3, 29, 0
  02b1028  ld 0, 416(1)
  02b102c  mtlr 0
  02b1030  lfd 27, 360(1)
  02b1034  lfd 28, 368(1)
  02b1038  lfd 29, 376(1)
  02b103c  lfd 30, 384(1)
  02b1040  lfd 31, 392(1)
  02b1044  ld 23, 288(1)
  02b1048  ld 24, 296(1)
  02b104c  ld 25, 304(1)
  02b1050  ld 26, 312(1)
  02b1054  ld 27, 320(1)
  02b1058  ld 28, 328(1)
  02b105c  ld 29, 336(1)
  02b1060  ld 30, 344(1)
  02b1064  ld 31, 352(1)
  02b1068  addi 1, 1, 400
  02b106c  blr

M175_002b1078:   # 0x2b1078, 0x270 bytes
  02b1078  stdu 1, -160(1)
  02b107c  mflr 0
  02b1080  std 0, 176(1)
  02b1084  std 31, 152(1)
  02b1088  lis 4, 251
  02b108c  ori 31, 3, 0
  02b1090  lwz 3, 400(4)
  02b1094  std 30, 144(1)
  02b1098  std 29, 136(1)
  02b109c  std 28, 128(1)
  02b10a0  std 27, 120(1)
  02b10a4  std 26, 112(1)
  02b10a8  cmpwi 3, 0
  02b10ac  bt 2, 0x2b1138
  02b10b0  lis 3, 251
  02b10b4  li 5, 5
  02b10b8  addic 3, 3, 404
  02b10bc  li 4, 0
  02b10c0  addic 3, 3, 8
  02b10c4  mtctr 5
  02b10c8  sth 4, 0(3)
  02b10cc  sth 4, 12(3)
  02b10d0  addic 3, 3, 24
  02b10d4  bdnz 0x2b10c8
  02b10d8  lis 3, 114
  02b10dc  lis 5, 123
  02b10e0  lis 6, 251
  02b10e4  lis 7, 251
  02b10e8  lfs 1, -3052(3)
  02b10ec  lfs 2, 29912(5)
  02b10f0  lis 3, 123
  02b10f4  stw 4, 400(6)
  02b10f8  fmuls 1, 1, 2
  02b10fc  stw 4, 524(7)
  02b1100  lfs 2, 29908(3)
  02b1104  fdivs 1, 2, 1
  02b1108  bl 0x502758
  02b110c  nop
  02b1110  lis 4, 251
  02b1114  stw 3, 532(4)
  02b1118  bl 0x502730
  02b111c  nop
  02b1120  lis 3, 43
  02b1124  addi 3, 3, 4208
  02b1128  lfs 2, 0(3)
  02b112c  lis 3, 251
  02b1130  fdivs 1, 2, 1
  02b1134  stfs 1, 536(3)
  02b1138  lis 3, 251
  02b113c  lwz 3, 528(3)
  02b1140  cmpwi 3, 0
  02b1144  bf 2, 0x2b1220
  02b1148  lis 3, 251
  02b114c  addic 3, 3, 524
  02b1150  bl 0x4fff60
  02b1154  nop
  02b1158  cmpwi 3, 0
  02b115c  bt 2, 0x2b1220
  02b1160  lis 5, 251
  02b1164  li 6, 0
  02b1168  addic 5, 5, 404
  02b116c  ori 3, 6, 0
  02b1170  addic 4, 5, 8
  02b1174  lhz 7, 0(4)
  02b1178  cmpwi 7, 0
  02b117c  bf 2, 0x2b1210
  02b1180  lis 4, 123
  02b1184  vspltisw 4, -1
  02b1188  li 7, 29904
  02b118c  lis 8, 43
  02b1190  li 9, 4
  02b1194  addi 8, 8, 4208
  02b1198  vslw 4, 4, 4
  02b119c  <unknown>
  02b11a0  lis 4, 114
  02b11a4  vcfsx 2, 2, 0
  02b11a8  <unknown>
  02b11ac  li 7, -3056
  02b11b0  vspltw 3, 3, 0
  02b11b4  lis 10, 123
  02b11b8  lis 9, 251
  02b11bc  li 8, 1
  02b11c0  <unknown>
  02b11c4  addc 4, 6, 6
  02b11c8  li 7, 524
  02b11cc  addc 4, 6, 4
  02b11d0  lis 6, 251
  02b11d4  vaddfp 2, 2, 3
  02b11d8  sldi 4, 4, 2
  02b11dc  extsw 4, 4
  02b11e0  lwz 6, 532(6)
  02b11e4  addc 11, 5, 4
  02b11e8  lwz 10, 29916(10)
  02b11ec  vmaddfp 2, 5, 2, 4
  02b11f0  vctsxs 2, 2, 0
  02b11f4  vspltw 2, 2, 0
  02b11f8  stvewx 2, 7, 9
  02b11fc  sth 8, 8(11)
  02b1200  sth 6, 4(11)
  02b1204  stwx 3, 5, 4
  02b1208  sth 10, 6(11)
  02b120c  b 0x2b1220
  02b1210  addic 6, 6, 1
  02b1214  addic 4, 4, 12
  02b1218  cmpwi 6, 10
  02b121c  bt 0, 0x2b1174
  02b1220  lis 29, 251
  02b1224  li 26, 0
  02b1228  addic 29, 29, 404
  02b122c  ori 27, 26, 0
  02b1230  addic 28, 29, 8
  02b1234  addic 30, 29, 4
  02b1238  lhz 3, 0(28)
  02b123c  cmpwi 3, 0
  02b1240  bt 2, 0x2b127c
  02b1244  ori 3, 30, 0
  02b1248  bl 0x4fffb4
  02b124c  nop
  02b1250  cmpwi 3, 0
  02b1254  bt 2, 0x2b1260
  02b1258  sth 27, 0(28)
  02b125c  b 0x2b127c
  02b1260  lis 3, 114
  02b1264  lfs 1, 0(29)
  02b1268  lis 4, 123
  02b126c  lfs 2, -3052(3)
  02b1270  lfs 3, 29912(4)
  02b1274  fmadds 1, 2, 3, 1
  02b1278  stfs 1, 0(29)
  02b127c  addic 26, 26, 1
  02b1280  addic 30, 30, 12
  02b1284  cmpwi 26, 10
  02b1288  addic 28, 28, 12
  02b128c  addic 29, 29, 12
  02b1290  bt 0, 0x2b1238
  02b1294  lis 5, 251
  02b1298  ori 3, 31, 0
  02b129c  addic 5, 5, 544
  02b12a0  li 4, 0
  02b12a4  bl 0xf1114
  02b12a8  nop
  02b12ac  lis 3, 113
  02b12b0  ori 4, 31, 0
  02b12b4  addic 3, 3, -20944
  02b12b8  bl 0x6d720
  02b12bc  nop
  02b12c0  ld 0, 176(1)
  02b12c4  mtlr 0
  02b12c8  ld 26, 112(1)
  02b12cc  ld 27, 120(1)
  02b12d0  ld 28, 128(1)
  02b12d4  ld 29, 136(1)
  02b12d8  ld 30, 144(1)
  02b12dc  ld 31, 152(1)
  02b12e0  addi 1, 1, 160
  02b12e4  blr

UpdateMoby_175:   # 0x2b1300, 0x640 bytes
  02b1300  stdu 1, -176(1)
  02b1304  mflr 0
  02b1308  std 0, 192(1)
  02b130c  stfd 31, 168(1)
  02b1310  std 31, 160(1)
  02b1314  cmpwi 3, 0
  02b1318  std 30, 152(1)
  02b131c  std 29, 144(1)
  02b1320  std 28, 136(1)
  02b1324  ori 31, 3, 0
  02b1328  bt 2, 0x2b191c
  02b132c  lwz 30, 120(31)
  02b1330  cmpwi 30, 0
  02b1334  bt 2, 0x2b191c
  02b1338  lwz 3, 8(30)
  02b133c  cmpwi 3, 0
  02b1340  bf 2, 0x2b134c
  02b1344  lis 3, 16880
  02b1348  stw 3, 8(30)
  02b134c  lbz 3, 83(31)
  02b1350  cmpwi 3, 2
  02b1354  bf 2, 0x2b1360
  02b1358  li 3, 3
  02b135c  stb 3, 32(31)
  02b1360  lis 3, 251
  02b1364  li 4, 1
  02b1368  stw 4, 528(3)
  02b136c  lbz 3, 32(31)
  02b1370  cmpwi 3, 0
  02b1374  bf 2, 0x2b139c
  02b1378  li 3, -1
  02b137c  lis 4, 251
  02b1380  stw 3, 4(30)
  02b1384  lbz 3, 32(31)
  02b1388  addic 3, 3, 1
  02b138c  stb 3, 32(31)
  02b1390  li 3, 1
  02b1394  stw 3, 400(4)
  02b1398  lbz 3, 32(31)
  02b139c  cmpwi 3, 1
  02b13a0  cmpwi 1, 3, 2
  02b13a4  bf 2, 0x2b13cc
  02b13a8  lbz 4, 112(31)
  02b13ac  rlwinm 4, 4, 0, 30, 30
  02b13b0  cmpwi 4, 0
  02b13b4  bt 2, 0x2b18fc
  02b13b8  addic 3, 3, 1
  02b13bc  li 4, 0
  02b13c0  stb 3, 32(31)
  02b13c4  stw 4, 12(30)
  02b13c8  b 0x2b18fc
  02b13cc  bf 6, 0x2b18fc
  02b13d0  lbz 3, 83(31)
  02b13d4  cmpwi 3, 3
  02b13d8  bf 2, 0x2b1408
  02b13dc  lis 3, 151
  02b13e0  addic 3, 3, -25376
  02b13e4  lbz 3, 8364(3)
  02b13e8  cmpwi 3, 0
  02b13ec  bf 2, 0x2b1408
  02b13f0  lis 3, 251
  02b13f4  li 4, 0
  02b13f8  stw 4, 528(3)
  02b13fc  lwz 3, 24(30)
  02b1400  addic 3, 3, 1
  02b1404  b 0x2b140c
  02b1408  li 3, 0
  02b140c  ori 4, 3, 0
  02b1410  lwz 5, 4(30)
  02b1414  ori 3, 31, 0
  02b1418  stw 4, 24(30)
  02b141c  extsw 4, 5
  02b1420  bl 0x15cc7c
  02b1424  nop
  02b1428  cmpwi 3, 0
  02b142c  bf 2, 0x2b17bc
  02b1430  lis 3, 150
  02b1434  lis 5, 151
  02b1438  addic 4, 3, 19008
  02b143c  addic 5, 5, -25376
  02b1440  lwz 3, 164(4)
  02b1444  lwz 6, 4256(5)
  02b1448  lwz 4, 160(4)
  02b144c  and 3, 3, 6
  02b1450  cmpwi 1, 3, 0
  02b1454  bf 6, 0x2b1470
  02b1458  and 3, 4, 6
  02b145c  cmpwi 3, 0
  02b1460  bt 2, 0x2b1690
  02b1464  lwz 3, 12(30)
  02b1468  cmpwi 3, 16
  02b146c  bf 1, 0x2b1690
  02b1470  lbz 3, 8364(5)
  02b1474  cmpwi 3, 0
  02b1478  bf 2, 0x2b1690
  02b147c  bt 6, 0x2b14cc
  02b1480  li 3, 15
  02b1484  li 4, 45
  02b1488  bl 0xfe484
  02b148c  nop
  02b1490  extsw 3, 3
  02b1494  lis 4, 114
  02b1498  std 3, 112(1)
  02b149c  lis 3, 43
  02b14a0  addi 3, 3, 4840
  02b14a4  lfs 1, 0(3)
  02b14a8  lfs 2, -3056(4)
  02b14ac  lfd 3, 112(1)
  02b14b0  li 3, 16
  02b14b4  fcfid 3, 3
  02b14b8  frsp 3, 3
  02b14bc  fadds 1, 3, 1
  02b14c0  fmuls 1, 2, 1
  02b14c4  fctiwz 1, 1
  02b14c8  stfiwx 1, 3, 30
  02b14cc  lis 3, 161
  02b14d0  lis 4, 0
  02b14d4  addic 3, 3, -732
  02b14d8  ori 5, 4, 65535
  02b14dc  lhz 4, 112(3)
  02b14e0  cmpw 4, 5
  02b14e4  bf 0, 0x2b14f0
  02b14e8  addic 4, 4, 1
  02b14ec  sth 4, 112(3)
  02b14f0  lis 4, 161
  02b14f4  lis 5, 114
  02b14f8  lwz 4, -2344(4)
  02b14fc  extsw 4, 4
  02b1500  std 4, 112(1)
  02b1504  lis 4, 43
  02b1508  addi 4, 4, 4840
  02b150c  lfs 2, 0(4)
  02b1510  lfs 1, -3056(5)
  02b1514  lfd 3, 112(1)
  02b1518  lis 4, 6990
  02b151c  fcfid 3, 3
  02b1520  ori 5, 4, 33205
  02b1524  lhz 6, 114(3)
  02b1528  frsp 3, 3
  02b152c  fadds 2, 3, 2
  02b1530  fmuls 2, 1, 2
  02b1534  fctiwz 2, 2
  02b1538  stfd 2, 112(1)
  02b153c  lwz 4, 116(1)
  02b1540  mulhw 5, 5, 4
  02b1544  srawi 5, 5, 6
  02b1548  srwi 7, 5, 31
  02b154c  addc 5, 5, 7
  02b1550  cmpw 5, 6
  02b1554  bf 1, 0x2b1574
  02b1558  lis 5, 6990
  02b155c  ori 5, 5, 33205
  02b1560  mulhw 4, 5, 4
  02b1564  srawi 4, 4, 6
  02b1568  srwi 5, 4, 31
  02b156c  addc 4, 4, 5
  02b1570  sth 4, 114(3)
  02b1574  lis 4, 151
  02b1578  li 6, 1
  02b157c  lis 5, -32768
  02b1580  lwz 4, -25488(4)
  02b1584  lwz 7, 116(3)
  02b1588  slw 4, 6, 4
  02b158c  or 4, 7, 4
  02b1590  or 4, 4, 5
  02b1594  stw 4, 116(3)
  02b1598  lbz 3, 83(31)
  02b159c  cmpwi 3, 3
  02b15a0  bt 2, 0x2b15d8
  02b15a4  lis 3, 43
  02b15a8  addi 3, 3, 4840
  02b15ac  li 4, 3
  02b15b0  li 5, 0
  02b15b4  lfs 2, 4(3)
  02b15b8  ori 3, 31, 0
  02b15bc  fmuls 1, 1, 2
  02b15c0  fctiwz 1, 1
  02b15c4  stfd 1, 112(1)
  02b15c8  lwz 6, 116(1)
  02b15cc  extsw 6, 6
  02b15d0  bl 0xfddc0
  02b15d4  nop
  02b15d8  lwz 3, 0(30)
  02b15dc  li 4, 1
  02b15e0  ori 5, 31, 0
  02b15e4  bl 0x15d12c
  02b15e8  nop
  02b15ec  lwz 4, 0(30)
  02b15f0  stw 3, 4(30)
  02b15f4  addic 4, 4, 1
  02b15f8  lis 3, 43
  02b15fc  slwi 28, 4, 5
  02b1600  addi 3, 3, 4840
  02b1604  stw 4, 0(30)
  02b1608  extsw 5, 28
  02b160c  lwz 4, 36(31)
  02b1610  lfs 31, 8(3)
  02b1614  lwz 3, 40(4)
  02b1618  lfsx 1, 3, 5
  02b161c  fmuls 1, 1, 31
  02b1620  bl 0x502758
  02b1624  nop
  02b1628  lwz 4, 36(31)
  02b162c  ori 29, 3, 0
  02b1630  lwz 3, 40(4)
  02b1634  addc 3, 3, 28
  02b1638  clrldi 3, 3, 32
  02b163c  lfs 1, 4(3)
  02b1640  fmuls 1, 1, 31
  02b1644  bl 0x502758
  02b1648  nop
  02b164c  lwz 4, 36(31)
  02b1650  lwz 5, 0(30)
  02b1654  lbz 4, 13(4)
  02b1658  cmpw 5, 4
  02b165c  bf 0, 0x2b1670
  02b1660  cmpwi 29, 30
  02b1664  bf 2, 0x2b1670
  02b1668  cmpwi 3, 30
  02b166c  bt 2, 0x2b1678
  02b1670  li 3, 0
  02b1674  stw 3, 0(30)
  02b1678  ori 4, 31, 0
  02b167c  lfs 1, 8(30)
  02b1680  bl 0x2b06f0
  02b1684  li 3, 0
  02b1688  stw 3, 12(30)
  02b168c  b 0x2b18fc
  02b1690  lwz 3, 4(30)
  02b1694  cmpwi 3, 0
  02b1698  bt 0, 0x2b1744
  02b169c  lbz 4, 83(31)
  02b16a0  cmpwi 4, 1
  02b16a4  bt 2, 0x2b16e8
  02b16a8  lis 3, 43
  02b16ac  lis 4, 114
  02b16b0  addi 3, 3, 4840
  02b16b4  li 5, 0
  02b16b8  lfs 1, 12(3)
  02b16bc  lfs 2, -3056(4)
  02b16c0  ori 3, 31, 0
  02b16c4  fmuls 1, 2, 1
  02b16c8  li 4, 1
  02b16cc  fctiwz 1, 1
  02b16d0  stfd 1, 112(1)
  02b16d4  lwz 6, 116(1)
  02b16d8  extsw 6, 6
  02b16dc  bl 0xfddc0
  02b16e0  nop
  02b16e4  lwz 3, 4(30)
  02b16e8  cmpwi 3, -1
  02b16ec  bt 2, 0x2b1730
  02b16f0  sldi 4, 3, 7
  02b16f4  sldi 6, 3, 4
  02b16f8  lis 5, 150
  02b16fc  subc 4, 4, 6
  02b1700  addic 5, 5, 14176
  02b1704  extsw 4, 4
  02b1708  addc 4, 5, 4
  02b170c  lwz 5, 136(4)
  02b1710  cmpw 5, 31
  02b1714  bf 2, 0x2b1730
  02b1718  lbz 4, 116(4)
  02b171c  cmpwi 4, 0
  02b1720  bt 2, 0x2b1730
  02b1724  extsw 3, 3
  02b1728  bl 0x15cdb0
  02b172c  nop
  02b1730  li 3, -1
  02b1734  li 4, 0
  02b1738  stw 3, 4(30)
  02b173c  stw 4, 12(30)
  02b1740  b 0x2b18fc
  02b1744  and 3, 4, 6
  02b1748  li 6, 0
  02b174c  cmpwi 3, 0
  02b1750  bt 2, 0x2b176c
  02b1754  lbz 3, 8364(5)
  02b1758  li 6, 0
  02b175c  cmpwi 3, 0
  02b1760  bf 2, 0x2b176c
  02b1764  lwz 6, 12(30)
  02b1768  addic 6, 6, 1
  02b176c  stw 6, 12(30)
  02b1770  lbz 3, 83(31)
  02b1774  cmpwi 3, 1
  02b1778  bt 2, 0x2b18fc
  02b177c  lis 3, 43
  02b1780  lis 4, 114
  02b1784  addi 3, 3, 4840
  02b1788  li 5, 0
  02b178c  lfs 1, 12(3)
  02b1790  lfs 2, -3056(4)
  02b1794  ori 3, 31, 0
  02b1798  li 4, 1
  02b179c  fmuls 1, 2, 1
  02b17a0  fctiwz 1, 1
  02b17a4  stfd 1, 112(1)
  02b17a8  lwz 6, 116(1)
  02b17ac  extsw 6, 6
  02b17b0  bl 0xfddc0
  02b17b4  nop
  02b17b8  b 0x2b18fc
  02b17bc  lis 3, 150
  02b17c0  lwz 5, 12(30)
  02b17c4  lis 4, 151
  02b17c8  addic 3, 3, 19008
  02b17cc  addic 5, 5, 1
  02b17d0  addic 4, 4, -25376
  02b17d4  stw 5, 12(30)
  02b17d8  lwz 3, 160(3)
  02b17dc  lwz 5, 4256(4)
  02b17e0  lbz 4, 8364(4)
  02b17e4  and 3, 3, 5
  02b17e8  cmpwi 1, 4, 0
  02b17ec  cmpwi 3, 0
  02b17f0  bf 2, 0x2b1824
  02b17f4  lis 3, 43
  02b17f8  lis 4, 114
  02b17fc  addi 3, 3, 4840
  02b1800  lfs 1, 16(3)
  02b1804  lfs 2, -3056(4)
  02b1808  lwz 3, 24(30)
  02b180c  fmuls 1, 2, 1
  02b1810  fctiwz 1, 1
  02b1814  stfd 1, 112(1)
  02b1818  lwz 4, 116(1)
  02b181c  cmpw 3, 4
  02b1820  bt 1, 0x2b1828
  02b1824  bt 6, 0x2b18d0
  02b1828  lbz 3, 83(31)
  02b182c  cmpwi 3, 1
  02b1830  bt 2, 0x2b1870
  02b1834  lis 3, 43
  02b1838  lis 4, 114
  02b183c  addi 3, 3, 4840
  02b1840  li 5, 0
  02b1844  lfs 1, 12(3)
  02b1848  lfs 2, -3056(4)
  02b184c  ori 3, 31, 0
  02b1850  li 4, 1
  02b1854  fmuls 1, 2, 1
  02b1858  fctiwz 1, 1
  02b185c  stfd 1, 112(1)
  02b1860  lwz 6, 116(1)
  02b1864  extsw 6, 6
  02b1868  bl 0xfddc0
  02b186c  nop
  02b1870  lwz 4, 4(30)
  02b1874  cmpwi 4, -1
  02b1878  bt 2, 0x2b18bc
  02b187c  sldi 3, 4, 7
  02b1880  sldi 6, 4, 4
  02b1884  lis 5, 150
  02b1888  subc 3, 3, 6
  02b188c  addic 5, 5, 14176
  02b1890  extsw 3, 3
  02b1894  addc 3, 5, 3
  02b1898  lwz 5, 136(3)
  02b189c  cmpw 5, 31
  02b18a0  bf 2, 0x2b18bc
  02b18a4  lbz 3, 116(3)
  02b18a8  cmpwi 3, 0
  02b18ac  bt 2, 0x2b18bc
  02b18b0  extsw 3, 4
  02b18b4  bl 0x15cdb0
  02b18b8  nop
  02b18bc  li 3, -1
  02b18c0  li 4, 0
  02b18c4  stw 3, 4(30)
  02b18c8  stw 4, 12(30)
  02b18cc  b 0x2b18fc
  02b18d0  lis 3, 161
  02b18d4  lwz 3, 1808(3)
  02b18d8  srawi 4, 3, 2
  02b18dc  addze 4, 4
  02b18e0  sldi 4, 4, 2
  02b18e4  subc 3, 3, 4
  02b18e8  cmpwi 3, 0
  02b18ec  bf 2, 0x2b18fc
  02b18f0  ori 4, 31, 0
  02b18f4  lfs 1, 8(30)
  02b18f8  bl 0x2b06f0
  02b18fc  lis 3, 151
  02b1900  addic 3, 3, -25376
  02b1904  lwz 3, 4276(3)
  02b1908  addic 3, 3, -3
  02b190c  cmpwi 3, 0
  02b1910  bt 2, 0x2b191c
  02b1914  ori 3, 31, 0
  02b1918  bl 0x2b1078
  02b191c  ld 0, 192(1)
  02b1920  mtlr 0
  02b1924  lfd 31, 168(1)
  02b1928  ld 28, 136(1)
  02b192c  ld 29, 144(1)
  02b1930  ld 30, 152(1)
  02b1934  ld 31, 160(1)
  02b1938  addi 1, 1, 176
  02b193c  blr
