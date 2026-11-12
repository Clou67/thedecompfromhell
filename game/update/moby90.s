# game/update/moby90.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

UpdateMoby_90:   # 0x4a4bd0, 0xafc bytes
  04a4bd0  stdu 1, -336(1)
  04a4bd4  mflr 0
  04a4bd8  std 0, 352(1)
  04a4bdc  stfd 27, 296(1)
  04a4be0  stfd 28, 304(1)
  04a4be4  stfd 29, 312(1)
  04a4be8  stfd 30, 320(1)
  04a4bec  stfd 31, 328(1)
  04a4bf0  std 31, 288(1)
  04a4bf4  lis 4, 161
  04a4bf8  ori 31, 3, 0
  04a4bfc  std 30, 280(1)
  04a4c00  lwz 4, 1800(4)
  04a4c04  lwz 30, 120(3)
  04a4c08  std 29, 272(1)
  04a4c0c  std 28, 264(1)
  04a4c10  std 27, 256(1)
  04a4c14  std 26, 248(1)
  04a4c18  cmpwi 4, 2
  04a4c1c  bf 2, 0x4a4cbc
  04a4c20  lis 3, 151
  04a4c24  lbz 3, -16268(3)
  04a4c28  cmpwi 3, 0
  04a4c2c  bt 2, 0x4a4cbc
  04a4c30  lis 28, 150
  04a4c34  li 29, 0
  04a4c38  addic 28, 28, -12976
  04a4c3c  lhz 4, 68(28)
  04a4c40  extsh 3, 4
  04a4c44  cmpwi 3, 0
  04a4c48  bf 1, 0x4a4cbc
  04a4c4c  lis 27, 162
  04a4c50  ori 26, 28, 0
  04a4c54  addic 27, 27, -16512
  04a4c58  lwz 3, 376(26)
  04a4c5c  lhz 5, 166(31)
  04a4c60  extsh 5, 5
  04a4c64  lhz 6, 166(3)
  04a4c68  extsh 6, 6
  04a4c6c  cmpw 6, 5
  04a4c70  bf 2, 0x4a4ca8
  04a4c74  lbz 5, 1(27)
  04a4c78  cmpwi 5, 0
  04a4c7c  bf 2, 0x4a4ca8
  04a4c80  li 4, 0
  04a4c84  ori 5, 27, 0
  04a4c88  bl 0xf0ea8
  04a4c8c  nop
  04a4c90  lis 3, 141
  04a4c94  lhz 4, 68(28)
  04a4c98  lfs 1, -15940(3)
  04a4c9c  stfs 1, 32(27)
  04a4ca0  stfs 1, 36(27)
  04a4ca4  stfs 1, 40(27)
  04a4ca8  extsh 3, 4
  04a4cac  addic 29, 29, 1
  04a4cb0  addic 26, 26, 4
  04a4cb4  cmpw 29, 3
  04a4cb8  bt 0, 0x4a4c58
  04a4cbc  lbz 3, 32(31)
  04a4cc0  cmpwi 3, 0
  04a4cc4  cmpwi 1, 3, 2
  04a4cc8  cmpwi 6, 3, 1
  04a4ccc  cmpwi 7, 3, -1
  04a4cd0  bt 1, 0x4a4cdc
  04a4cd4  bf 29, 0x4a4e14
  04a4cd8  b 0x4a4ce8
  04a4cdc  bf 25, 0x4a4d40
  04a4ce0  bf 5, 0x4a4da0
  04a4ce4  b 0x4a4e14
  04a4ce8  lis 3, 151
  04a4cec  li 5, 0
  04a4cf0  addic 3, 3, -16064
  04a4cf4  li 4, 1
  04a4cf8  li 6, 3
  04a4cfc  subc 4, 4, 6
  04a4d00  lbz 3, 3(3)
  04a4d04  subc 3, 5, 3
  04a4d08  cntlzw 3, 3
  04a4d0c  sldi 5, 3, 58
  04a4d10  ori 3, 31, 0
  04a4d14  sradi 5, 5, 63
  04a4d18  and 4, 5, 4
  04a4d1c  addc 5, 6, 4
  04a4d20  ori 4, 30, 0
  04a4d24  stb 5, 32(31)
  04a4d28  bl 0x4d3720
  04a4d2c  nop
  04a4d30  lis 3, 16492
  04a4d34  ori 3, 3, 52429
  04a4d38  stw 3, 12(30)
  04a4d3c  b 0x4a4e14
  04a4d40  lis 3, 151
  04a4d44  lwz 4, 64(30)
  04a4d48  addic 3, 3, -25376
  04a4d4c  extsw 4, 4
  04a4d50  addic 3, 3, 128
  04a4d54  bl 0x110b70
  04a4d58  nop
  04a4d5c  cmpwi 3, 0
  04a4d60  bt 2, 0x4a4e14
  04a4d64  ori 3, 31, 0
  04a4d68  ori 4, 30, 0
  04a4d6c  bl 0x4d3870
  04a4d70  nop
  04a4d74  cmpwi 3, 0
  04a4d78  bt 2, 0x4a4e14
  04a4d7c  lis 3, 74
  04a4d80  addi 4, 3, 19320
  04a4d84  ori 3, 31, 0
  04a4d88  lfs 1, 0(4)
  04a4d8c  bl 0x119488
  04a4d90  nop
  04a4d94  li 3, 2
  04a4d98  stb 3, 32(31)
  04a4d9c  b 0x4a4e14
  04a4da0  lis 3, 161
  04a4da4  lwz 3, 1800(3)
  04a4da8  cmpwi 3, 2
  04a4dac  bt 2, 0x4a4e14
  04a4db0  li 3, 1
  04a4db4  stb 3, 32(31)
  04a4db8  lhz 3, 4(30)
  04a4dbc  cmpwi 3, 2
  04a4dc0  bf 2, 0x4a4e14
  04a4dc4  li 3, 3
  04a4dc8  li 4, 1
  04a4dcc  bl 0x112e18
  04a4dd0  nop
  04a4dd4  lis 3, 151
  04a4dd8  addic 4, 3, -25376
  04a4ddc  addic 3, 4, 128
  04a4de0  addic 4, 4, 144
  04a4de4  bl 0x151e70
  04a4de8  nop
  04a4dec  li 3, 0
  04a4df0  li 4, -1
  04a4df4  bl 0xe8aa4
  04a4df8  nop
  04a4dfc  bl 0x7b458
  04a4e00  nop
  04a4e04  li 3, 11003
  04a4e08  li 4, 61
  04a4e0c  bl 0x7b310
  04a4e10  nop
  04a4e14  lis 3, 74
  04a4e18  lbz 4, 83(31)
  04a4e1c  addi 3, 3, 19320
  04a4e20  cmpwi 4, 0
  04a4e24  lfs 31, 4(3)
  04a4e28  bf 2, 0x4a5628
  04a4e2c  lis 29, 151
  04a4e30  lfs 2, 20(31)
  04a4e34  lfs 1, 16(31)
  04a4e38  addic 29, 29, -25376
  04a4e3c  lis 3, 74
  04a4e40  lfs 3, 132(29)
  04a4e44  lfs 4, 128(29)
  04a4e48  fsubs 3, 2, 3
  04a4e4c  fsubs 4, 1, 4
  04a4e50  addi 3, 3, 19320
  04a4e54  fmuls 3, 3, 3
  04a4e58  fmadds 3, 4, 4, 3
  04a4e5c  lfs 4, 8(3)
  04a4e60  fsqrts 3, 3
  04a4e64  fcmpu 0, 3, 4
  04a4e68  cror 6, 1, 2
  04a4e6c  bt 6, 0x4a50dc
  04a4e70  lfs 3, 208(29)
  04a4e74  lfs 4, 212(29)
  04a4e78  lis 3, 74
  04a4e7c  fsubs 1, 3, 1
  04a4e80  fsubs 2, 4, 2
  04a4e84  addi 3, 3, 19320
  04a4e88  lis 4, 115
  04a4e8c  addic 4, 4, 22784
  04a4e90  fabs 5, 1
  04a4e94  fabs 6, 2
  04a4e98  stfs 1, 136(1)
  04a4e9c  stfs 2, 140(1)
  04a4ea0  lfs 3, 72(31)
  04a4ea4  fsubs 1, 5, 6
  04a4ea8  stfs 1, 144(1)
  04a4eac  lwz 5, 136(1)
  04a4eb0  lfs 4, 12(3)
  04a4eb4  lfs 1, 136(1)
  04a4eb8  lwz 3, 140(1)
  04a4ebc  lfs 2, 140(1)
  04a4ec0  fabs 1, 1
  04a4ec4  lwz 6, 144(1)
  04a4ec8  rlwinm 3, 3, 3, 29, 29
  04a4ecc  fabs 7, 2
  04a4ed0  lfs 2, 144(1)
  04a4ed4  rlwimi 3, 6, 2, 30, 30
  04a4ed8  fsub 8, 2, 4
  04a4edc  rlwimi 3, 5, 4, 28, 28
  04a4ee0  fsub 9, 2, 4
  04a4ee4  ori 5, 4, 0
  04a4ee8  rlwimi 5, 3, 2, 26, 28
  04a4eec  slwi 3, 3, 2
  04a4ef0  clrldi 5, 5, 32
  04a4ef4  fsel 6, 8, 1, 6
  04a4ef8  lfsx 1, 4, 3
  04a4efc  lfs 2, 4(5)
  04a4f00  fsel 5, 9, 7, 5
  04a4f04  fcmpu 0, 6, 4
  04a4f08  bt 1, 0x4a4f10
  04a4f0c  b 0x4a5030
  04a4f10  fsubs 7, 5, 6
  04a4f14  fadds 5, 5, 6
  04a4f18  addic 3, 1, 16
  04a4f1c  li 6, 2
  04a4f20  addic 5, 3, 212
  04a4f24  addic 4, 3, 196
  04a4f28  mtctr 6
  04a4f2c  fdivs 5, 7, 5
  04a4f30  fmuls 6, 5, 5
  04a4f34  stfs 5, 224(1)
  04a4f38  stfs 5, 216(1)
  04a4f3c  stfs 5, 220(1)
  04a4f40  stfs 5, 212(1)
  04a4f44  lfs 8, 224(1)
  04a4f48  lfs 9, 216(1)
  04a4f4c  lfs 10, 220(1)
  04a4f50  fmuls 7, 6, 6
  04a4f54  fmuls 9, 9, 6
  04a4f58  fmuls 8, 8, 7
  04a4f5c  fmuls 5, 7, 7
  04a4f60  fmuls 7, 10, 7
  04a4f64  stfs 9, 216(1)
  04a4f68  fmuls 6, 8, 6
  04a4f6c  stfs 7, 220(1)
  04a4f70  stfs 6, 224(1)
  04a4f74  lfs 6, 196(3)
  04a4f78  fmuls 6, 6, 5
  04a4f7c  stfs 6, 212(3)
  04a4f80  lfs 6, 4(4)
  04a4f84  addic 4, 4, 8
  04a4f88  fmuls 6, 6, 5
  04a4f8c  addic 3, 3, 8
  04a4f90  stfs 6, 4(5)
  04a4f94  addic 5, 5, 8
  04a4f98  bdnz 0x4a4f74
  04a4f9c  li 5, 4
  04a4fa0  ori 3, 1, 0
  04a4fa4  mtctr 5
  04a4fa8  lis 4, 115
  04a4fac  addic 5, 3, 212
  04a4fb0  addic 4, 4, 22752
  04a4fb4  ori 7, 5, 0
  04a4fb8  lfs 5, 212(3)
  04a4fbc  lfs 6, 0(4)
  04a4fc0  fmuls 5, 5, 6
  04a4fc4  lfs 6, 4(4)
  04a4fc8  addic 4, 4, 8
  04a4fcc  stfs 5, 212(3)
  04a4fd0  lfs 5, 4(5)
  04a4fd4  addic 3, 3, 8
  04a4fd8  fmuls 5, 5, 6
  04a4fdc  stfs 5, 4(5)
  04a4fe0  addic 5, 5, 8
  04a4fe4  bdnz 0x4a4fb8
  04a4fe8  ori 3, 1, 0
  04a4fec  mtctr 6
  04a4ff0  lfs 5, 212(3)
  04a4ff4  fadds 4, 4, 5
  04a4ff8  addic 3, 3, 16
  04a4ffc  lfs 5, 4(7)
  04a5000  lfs 6, 8(7)
  04a5004  lfs 7, 12(7)
  04a5008  addic 7, 7, 16
  04a500c  fadds 4, 4, 5
  04a5010  fadds 4, 4, 6
  04a5014  fadds 4, 4, 7
  04a5018  bdnz 0x4a4ff0
  04a501c  lis 3, 74
  04a5020  addi 3, 3, 19320
  04a5024  lfs 5, 16(3)
  04a5028  fadds 4, 4, 5
  04a502c  fmadds 4, 4, 1, 2
  04a5030  fmr 1, 3
  04a5034  fmr 2, 4
  04a5038  bl 0x5026a0
  04a503c  nop
  04a5040  lis 3, 74
  04a5044  addi 3, 3, 19320
  04a5048  lfs 2, 20(3)
  04a504c  fcmpu 0, 1, 2
  04a5050  cror 6, 1, 2
  04a5054  bt 6, 0x4a50dc
  04a5058  lfs 1, 260(29)
  04a505c  lfs 2, 256(29)
  04a5060  fmuls 1, 1, 1
  04a5064  lfs 3, 264(29)
  04a5068  lis 3, 74
  04a506c  addi 3, 3, 19320
  04a5070  fmadds 1, 2, 2, 1
  04a5074  lfs 2, 24(3)
  04a5078  fmadds 1, 3, 3, 1
  04a507c  fsqrts 1, 1
  04a5080  fcmpu 0, 1, 2
  04a5084  cror 6, 0, 2
  04a5088  bt 6, 0x4a50cc
  04a508c  lis 3, 74
  04a5090  vspltisw 2, -1
  04a5094  li 5, 28
  04a5098  addi 3, 3, 19320
  04a509c  lis 4, 114
  04a50a0  li 6, -3056
  04a50a4  vslw 2, 2, 2
  04a50a8  lvlx 3, 5, 3
  04a50ac  li 3, 388
  04a50b0  vspltw 3, 3, 0
  04a50b4  lvlx 4, 6, 4
  04a50b8  vmaddfp 2, 4, 3, 2
  04a50bc  vctsxs 2, 2, 0
  04a50c0  vspltw 2, 2, 0
  04a50c4  stvewx 2, 3, 30
  04a50c8  b 0x4a5110
  04a50cc  addic 3, 30, 388
  04a50d0  bl 0x4fff60
  04a50d4  nop
  04a50d8  b 0x4a5110
  04a50dc  lwz 3, 388(30)
  04a50e0  cmpwi 3, 0
  04a50e4  bt 2, 0x4a5110
  04a50e8  li 3, 0
  04a50ec  stw 3, 388(30)
  04a50f0  lfs 1, 208(29)
  04a50f4  stfs 1, 368(30)
  04a50f8  lfs 1, 212(29)
  04a50fc  stfs 1, 372(30)
  04a5100  lfs 1, 216(29)
  04a5104  stfs 1, 376(30)
  04a5108  lfs 1, 220(29)
  04a510c  stfs 1, 380(30)
  04a5110  addic 3, 30, 392
  04a5114  bl 0x4fff60
  04a5118  nop
  04a511c  cmpwi 3, 0
  04a5120  bt 2, 0x4a51d8
  04a5124  lis 3, 74
  04a5128  addi 28, 3, 19320
  04a512c  lfs 1, 32(28)
  04a5130  lfs 2, 36(28)
  04a5134  bl 0xfcbe8
  04a5138  nop
  04a513c  lis 3, 114
  04a5140  lfs 2, -3056(3)
  04a5144  fmuls 1, 1, 2
  04a5148  bl 0x502758
  04a514c  nop
  04a5150  stw 3, 392(30)
  04a5154  lfs 1, 40(28)
  04a5158  lfs 30, 72(31)
  04a515c  lfs 2, 44(28)
  04a5160  bl 0xfcbe8
  04a5164  nop
  04a5168  lfs 29, 48(28)
  04a516c  fmuls 2, 1, 29
  04a5170  fmr 1, 30
  04a5174  bl 0x502578
  04a5178  nop
  04a517c  fmr 30, 1
  04a5180  lfs 1, 12(28)
  04a5184  lfs 2, 52(28)
  04a5188  bl 0xfcbe8
  04a518c  nop
  04a5190  fmuls 3, 1, 29
  04a5194  lfs 1, 56(28)
  04a5198  addic 3, 30, 368
  04a519c  fmr 2, 30
  04a51a0  bl 0xfe610
  04a51a4  nop
  04a51a8  lfs 1, 368(30)
  04a51ac  lfs 2, 16(31)
  04a51b0  fadds 1, 1, 2
  04a51b4  lfs 2, 372(30)
  04a51b8  lfs 3, 376(30)
  04a51bc  stfs 1, 368(30)
  04a51c0  lfs 1, 20(31)
  04a51c4  fadds 1, 2, 1
  04a51c8  stfs 1, 372(30)
  04a51cc  lfs 1, 24(31)
  04a51d0  fadds 1, 3, 1
  04a51d4  stfs 1, 376(30)
  04a51d8  lwz 3, 388(30)
  04a51dc  cmpwi 3, 0
  04a51e0  bt 2, 0x4a5200
  04a51e4  lis 3, 74
  04a51e8  lfs 30, 208(29)
  04a51ec  lfs 29, 212(29)
  04a51f0  addi 3, 3, 19320
  04a51f4  lfs 28, 216(29)
  04a51f8  lfs 31, 60(3)
  04a51fc  b 0x4a520c
  04a5200  lfs 30, 368(30)
  04a5204  lfs 29, 372(30)
  04a5208  lfs 28, 376(30)
  04a520c  lfs 1, 16(31)
  04a5210  lis 3, 74
  04a5214  lfs 2, 20(31)
  04a5218  fsubs 30, 30, 1
  04a521c  fsubs 29, 29, 2
  04a5220  addi 3, 3, 19320
  04a5224  lis 29, 115
  04a5228  addic 29, 29, 22784
  04a522c  lfs 1, 64(3)
  04a5230  fabs 3, 30
  04a5234  fabs 4, 29
  04a5238  stfs 30, 124(1)
  04a523c  stfs 29, 128(1)
  04a5240  lfs 5, 24(31)
  04a5244  fadds 1, 5, 1
  04a5248  fsubs 2, 3, 4
  04a524c  fsubs 28, 28, 1
  04a5250  stfs 2, 132(1)
  04a5254  lwz 4, 124(1)
  04a5258  lfs 27, 12(3)
  04a525c  lfs 2, 124(1)
  04a5260  lwz 3, 128(1)
  04a5264  lfs 1, 128(1)
  04a5268  fabs 2, 2
  04a526c  lwz 5, 132(1)
  04a5270  rlwinm 3, 3, 3, 29, 29
  04a5274  fabs 5, 1
  04a5278  lfs 1, 132(1)
  04a527c  rlwimi 3, 5, 2, 30, 30
  04a5280  fsub 6, 1, 27
  04a5284  fsub 7, 1, 27
  04a5288  rlwimi 3, 4, 4, 28, 28
  04a528c  ori 4, 29, 0
  04a5290  rlwimi 4, 3, 2, 26, 28
  04a5294  slwi 3, 3, 2
  04a5298  clrldi 4, 4, 32
  04a529c  fsel 4, 6, 2, 4
  04a52a0  lfsx 1, 29, 3
  04a52a4  fsel 3, 7, 5, 3
  04a52a8  lfs 2, 4(4)
  04a52ac  fcmpu 0, 4, 27
  04a52b0  bt 1, 0x4a52bc
  04a52b4  fmr 1, 27
  04a52b8  b 0x4a53e0
  04a52bc  fsubs 5, 3, 4
  04a52c0  fadds 3, 3, 4
  04a52c4  addic 3, 1, 16
  04a52c8  li 7, 2
  04a52cc  addic 4, 3, 164
  04a52d0  addic 5, 3, 180
  04a52d4  mtctr 7
  04a52d8  fdivs 3, 5, 3
  04a52dc  fmuls 4, 3, 3
  04a52e0  stfs 3, 192(1)
  04a52e4  stfs 3, 184(1)
  04a52e8  stfs 3, 188(1)
  04a52ec  stfs 3, 180(1)
  04a52f0  lfs 6, 192(1)
  04a52f4  lfs 7, 184(1)
  04a52f8  lfs 8, 188(1)
  04a52fc  fmuls 5, 4, 4
  04a5300  fmuls 7, 7, 4
  04a5304  fmuls 6, 6, 5
  04a5308  fmuls 3, 5, 5
  04a530c  fmuls 5, 8, 5
  04a5310  stfs 7, 184(1)
  04a5314  fmuls 4, 6, 4
  04a5318  stfs 5, 188(1)
  04a531c  stfs 4, 192(1)
  04a5320  lfs 4, 164(3)
  04a5324  fmuls 4, 4, 3
  04a5328  stfs 4, 180(3)
  04a532c  lfs 4, 4(4)
  04a5330  addic 3, 3, 8
  04a5334  addic 4, 4, 8
  04a5338  fmuls 4, 4, 3
  04a533c  stfs 4, 4(5)
  04a5340  addic 5, 5, 8
  04a5344  bdnz 0x4a5320
  04a5348  li 5, 4
  04a534c  ori 3, 1, 0
  04a5350  mtctr 5
  04a5354  lis 4, 115
  04a5358  addic 5, 3, 180
  04a535c  addic 4, 4, 22752
  04a5360  ori 6, 5, 0
  04a5364  lfs 3, 180(3)
  04a5368  lfs 4, 0(4)
  04a536c  fmuls 3, 3, 4
  04a5370  lfs 4, 4(4)
  04a5374  addic 4, 4, 8
  04a5378  stfs 3, 180(3)
  04a537c  lfs 3, 4(5)
  04a5380  addic 3, 3, 8
  04a5384  fmuls 3, 3, 4
  04a5388  stfs 3, 4(5)
  04a538c  addic 5, 5, 8
  04a5390  bdnz 0x4a5364
  04a5394  fmr 3, 27
  04a5398  ori 3, 1, 0
  04a539c  mtctr 7
  04a53a0  lfs 4, 180(3)
  04a53a4  fadds 3, 3, 4
  04a53a8  addic 3, 3, 16
  04a53ac  lfs 4, 4(6)
  04a53b0  lfs 5, 8(6)
  04a53b4  lfs 6, 12(6)
  04a53b8  addic 6, 6, 16
  04a53bc  fadds 3, 3, 4
  04a53c0  fadds 3, 3, 5
  04a53c4  fadds 3, 3, 6
  04a53c8  bdnz 0x4a53a0
  04a53cc  lis 3, 74
  04a53d0  addi 3, 3, 19320
  04a53d4  lfs 4, 16(3)
  04a53d8  fadds 3, 3, 4
  04a53dc  fmadds 1, 3, 1, 2
  04a53e0  lfs 2, 72(31)
  04a53e4  bl 0x5025e0
  04a53e8  nop
  04a53ec  fmuls 2, 29, 29
  04a53f0  stfs 28, 116(1)
  04a53f4  fabs 4, 28
  04a53f8  fmadds 2, 30, 30, 2
  04a53fc  fsqrts 2, 2
  04a5400  lwz 3, 116(1)
  04a5404  lfs 3, 116(1)
  04a5408  rlwinm 3, 3, 3, 29, 29
  04a540c  fabs 3, 3
  04a5410  fabs 5, 2
  04a5414  stfs 2, 112(1)
  04a5418  fsubs 2, 5, 4
  04a541c  stfs 2, 120(1)
  04a5420  lwz 4, 112(1)
  04a5424  lfs 2, 112(1)
  04a5428  lwz 5, 120(1)
  04a542c  lfs 6, 120(1)
  04a5430  fabs 2, 2
  04a5434  rlwimi 3, 5, 2, 30, 30
  04a5438  fsub 7, 6, 27
  04a543c  fsub 6, 6, 27
  04a5440  rlwimi 3, 4, 4, 28, 28
  04a5444  ori 4, 29, 0
  04a5448  rlwimi 4, 3, 2, 26, 28
  04a544c  slwi 3, 3, 2
  04a5450  clrldi 4, 4, 32
  04a5454  fsel 4, 7, 2, 4
  04a5458  lfsx 30, 29, 3
  04a545c  lfs 2, 4(4)
  04a5460  fsel 3, 6, 3, 5
  04a5464  fcmpu 0, 4, 27
  04a5468  bt 1, 0x4a5470
  04a546c  b 0x4a5590
  04a5470  fsubs 5, 3, 4
  04a5474  fadds 3, 3, 4
  04a5478  addic 3, 1, 16
  04a547c  li 7, 2
  04a5480  addic 5, 3, 148
  04a5484  addic 4, 3, 132
  04a5488  mtctr 7
  04a548c  fdivs 3, 5, 3
  04a5490  fmuls 4, 3, 3
  04a5494  stfs 3, 160(1)
  04a5498  stfs 3, 152(1)
  04a549c  stfs 3, 156(1)
  04a54a0  stfs 3, 148(1)
  04a54a4  lfs 6, 160(1)
  04a54a8  lfs 7, 152(1)
  04a54ac  lfs 8, 156(1)
  04a54b0  fmuls 5, 4, 4
  04a54b4  fmuls 7, 7, 4
  04a54b8  fmuls 6, 6, 5
  04a54bc  fmuls 3, 5, 5
  04a54c0  fmuls 5, 8, 5
  04a54c4  stfs 7, 152(1)
  04a54c8  fmuls 4, 6, 4
  04a54cc  stfs 5, 156(1)
  04a54d0  stfs 4, 160(1)
  04a54d4  lfs 4, 132(3)
  04a54d8  fmuls 4, 4, 3
  04a54dc  stfs 4, 148(3)
  04a54e0  lfs 4, 4(4)
  04a54e4  addic 4, 4, 8
  04a54e8  fmuls 4, 4, 3
  04a54ec  addic 3, 3, 8
  04a54f0  stfs 4, 4(5)
  04a54f4  addic 5, 5, 8
  04a54f8  bdnz 0x4a54d4
  04a54fc  li 5, 4
  04a5500  ori 3, 1, 0
  04a5504  mtctr 5
  04a5508  lis 4, 115
  04a550c  addic 5, 3, 148
  04a5510  addic 4, 4, 22752
  04a5514  ori 6, 5, 0
  04a5518  lfs 3, 148(3)
  04a551c  lfs 4, 0(4)
  04a5520  fmuls 3, 3, 4
  04a5524  lfs 4, 4(4)
  04a5528  addic 4, 4, 8
  04a552c  stfs 3, 148(3)
  04a5530  lfs 3, 4(5)
  04a5534  addic 3, 3, 8
  04a5538  fmuls 3, 3, 4
  04a553c  stfs 3, 4(5)
  04a5540  addic 5, 5, 8
  04a5544  bdnz 0x4a5518
  04a5548  ori 3, 1, 0
  04a554c  mtctr 7
  04a5550  lfs 3, 148(3)
  04a5554  lfs 4, 4(6)
  04a5558  fadds 3, 27, 3
  04a555c  lfs 5, 8(6)
  04a5560  addic 3, 3, 16
  04a5564  lfs 27, 12(6)
  04a5568  addic 6, 6, 16
  04a556c  fadds 3, 3, 4
  04a5570  fadds 3, 3, 5
  04a5574  fadds 27, 3, 27
  04a5578  bdnz 0x4a5550
  04a557c  lis 3, 74
  04a5580  addi 3, 3, 19320
  04a5584  lfs 3, 16(3)
  04a5588  fadds 27, 27, 3
  04a558c  fmadds 27, 27, 30, 2
  04a5590  lis 3, 74
  04a5594  fneg 27, 27
  04a5598  addi 3, 3, 19320
  04a559c  lfs 2, 20(3)
  04a55a0  fcmpu 0, 1, 2
  04a55a4  cror 6, 0, 2
  04a55a8  bt 6, 0x4a55b4
  04a55ac  fmr 1, 2
  04a55b0  b 0x4a55d0
  04a55b4  lis 3, 74
  04a55b8  addi 3, 3, 19320
  04a55bc  lfs 2, 68(3)
  04a55c0  fcmpu 0, 1, 2
  04a55c4  cror 6, 1, 2
  04a55c8  bt 6, 0x4a55d0
  04a55cc  fmr 1, 2
  04a55d0  lis 3, 74
  04a55d4  addi 3, 3, 19320
  04a55d8  lfs 2, 72(3)
  04a55dc  fcmpu 0, 27, 2
  04a55e0  cror 6, 0, 2
  04a55e4  bt 6, 0x4a55f0
  04a55e8  fmr 27, 2
  04a55ec  b 0x4a560c
  04a55f0  lis 3, 74
  04a55f4  addi 3, 3, 19320
  04a55f8  lfs 2, 76(3)
  04a55fc  fcmpu 0, 27, 2
  04a5600  cror 6, 1, 2
  04a5604  bt 6, 0x4a560c
  04a5608  fmr 27, 2
  04a560c  lis 3, 74
  04a5610  addi 3, 3, 19320
  04a5614  lfs 2, 80(3)
  04a5618  stfs 27, 212(30)
  04a561c  fmuls 1, 1, 2
  04a5620  stfs 1, 216(30)
  04a5624  stfs 1, 344(30)
  04a5628  lis 3, 151
  04a562c  lbz 3, -16268(3)
  04a5630  cmpwi 3, 0
  04a5634  bt 2, 0x4a5640
  04a5638  lis 3, 16432
  04a563c  stw 3, 224(30)
  04a5640  lis 3, 74
  04a5644  lis 29, 114
  04a5648  addi 5, 3, 19320
  04a564c  addic 4, 30, 112
  04a5650  ori 3, 31, 0
  04a5654  lfs 30, 84(5)
  04a5658  lfs 2, -3060(29)
  04a565c  li 5, 0
  04a5660  fmuls 1, 2, 31
  04a5664  fmuls 2, 2, 30
  04a5668  bl 0x1167c8
  04a566c  nop
  04a5670  lfs 2, -3060(29)
  04a5674  addic 4, 30, 240
  04a5678  fmuls 1, 2, 31
  04a567c  ori 3, 31, 0
  04a5680  fmuls 2, 2, 30
  04a5684  li 5, 1
  04a5688  bl 0x1167c8
  04a568c  nop
  04a5690  ld 0, 352(1)
  04a5694  mtlr 0
  04a5698  lfd 27, 296(1)
  04a569c  lfd 28, 304(1)
  04a56a0  lfd 29, 312(1)
  04a56a4  lfd 30, 320(1)
  04a56a8  lfd 31, 328(1)
  04a56ac  ld 26, 248(1)
  04a56b0  ld 27, 256(1)
  04a56b4  ld 28, 264(1)
  04a56b8  ld 29, 272(1)
  04a56bc  ld 30, 280(1)
  04a56c0  ld 31, 288(1)
  04a56c4  addi 1, 1, 336
  04a56c8  blr
