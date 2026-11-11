# game/update/moby1197.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1197_001f4cb0:   # 0x1f4cb0, 0xa0 bytes
  01f4cb0  lbz 3, 33(3)
  01f4cb4  cmpwi 3, 255
  01f4cb8  bt 2, 0x1f4d4c
  01f4cbc  lis 4, 165
  01f4cc0  rlwinm 3, 3, 2, 22, 29
  01f4cc4  addic 4, 4, -28284
  01f4cc8  lwzx 3, 4, 3
  01f4ccc  cmpwi 3, 0
  01f4cd0  bt 2, 0x1f4d4c
  01f4cd4  lis 4, 31
  01f4cd8  lis 9, 118
  01f4cdc  addi 4, 4, 19628
  01f4ce0  lis 8, 114
  01f4ce4  lis 7, 164
  01f4ce8  li 6, 24932
  01f4cec  li 5, -3056
  01f4cf0  <unknown>
  01f4cf4  li 4, 188
  01f4cf8  vspltw 2, 2, 0
  01f4cfc  <unknown>
  01f4d00  vspltisw 4, -1
  01f4d04  vcfsx 3, 3, 0
  01f4d08  <unknown>
  01f4d0c  lhz 10, 0(3)
  01f4d10  vslw 4, 4, 4
  01f4d14  lwz 11, -28512(7)
  01f4d18  rlwinm 10, 10, 8, 9, 23
  01f4d1c  addc 10, 11, 10
  01f4d20  clrldi 10, 10, 32
  01f4d24  vaddfp 3, 3, 2
  01f4d28  vmaddfp 3, 5, 3, 4
  01f4d2c  vctsxs 3, 3, 0
  01f4d30  vspltb 3, 3, 3
  01f4d34  stvebx 3, 4, 10
  01f4d38  lhz 10, 0(3)
  01f4d3c  addic 3, 3, 2
  01f4d40  extsh 10, 10
  01f4d44  cmpwi 10, 0
  01f4d48  bf 0, 0x1f4cfc
  01f4d4c  blr

M1197_001f4d50:   # 0x1f4d50, 0x14 bytes
  01f4d50  lis 3, 118
  01f4d54  lis 4, 1
  01f4d58  addic 3, 3, 24940
  01f4d5c  stw 4, 72(3)
  01f4d60  blr

M1197_001f4d90:   # 0x1f4d90, 0x4d0 bytes
  01f4d90  stdu 1, -336(1)
  01f4d94  mflr 0
  01f4d98  std 0, 352(1)
  01f4d9c  stfd 20, 240(1)
  01f4da0  stfd 21, 248(1)
  01f4da4  stfd 22, 256(1)
  01f4da8  stfd 23, 264(1)
  01f4dac  stfd 24, 272(1)
  01f4db0  stfd 25, 280(1)
  01f4db4  stfd 26, 288(1)
  01f4db8  stfd 27, 296(1)
  01f4dbc  stfd 28, 304(1)
  01f4dc0  stfd 29, 312(1)
  01f4dc4  stfd 30, 320(1)
  01f4dc8  stfd 31, 328(1)
  01f4dcc  std 30, 224(1)
  01f4dd0  lis 4, 31
  01f4dd4  std 29, 216(1)
  01f4dd8  lwz 30, 120(3)
  01f4ddc  li 29, 0
  01f4de0  std 31, 232(1)
  01f4de4  addi 4, 4, 19816
  01f4de8  ori 31, 29, 0
  01f4dec  lfs 23, 0(4)
  01f4df0  lfs 24, 4(4)
  01f4df4  lfs 25, 8(4)
  01f4df8  lfs 26, 12(4)
  01f4dfc  lfs 27, 16(4)
  01f4e00  lfs 28, 20(4)
  01f4e04  lfs 29, 24(4)
  01f4e08  std 28, 208(1)
  01f4e0c  std 27, 200(1)
  01f4e10  std 26, 192(1)
  01f4e14  lfs 30, 28(4)
  01f4e18  lfs 31, 32(4)
  01f4e1c  lwz 4, 156(30)
  01f4e20  lis 3, 16253
  01f4e24  srawi 5, 4, 31
  01f4e28  ori 3, 3, 28836
  01f4e2c  srwi 6, 5, 1
  01f4e30  xor 4, 6, 4
  01f4e34  subc 4, 4, 5
  01f4e38  cmpw 4, 3
  01f4e3c  bf 0, 0x1f4e64
  01f4e40  lwz 4, 172(30)
  01f4e44  lis 3, 16253
  01f4e48  srawi 5, 4, 31
  01f4e4c  ori 3, 3, 28836
  01f4e50  srwi 6, 5, 1
  01f4e54  xor 4, 6, 4
  01f4e58  subc 4, 4, 5
  01f4e5c  cmpw 4, 3
  01f4e60  bt 0, 0x1f51f8
  01f4e64  fmr 1, 23
  01f4e68  fmr 2, 24
  01f4e6c  bl 0xfcbe8
  01f4e70  nop
  01f4e74  lis 3, 118
  01f4e78  lfs 2, 25168(3)
  01f4e7c  fcmpu 0, 1, 2
  01f4e80  bt 1, 0x1f51f8
  01f4e84  bl 0xfcc68
  01f4e88  nop
  01f4e8c  fmr 22, 1
  01f4e90  bl 0xfcc68
  01f4e94  nop
  01f4e98  fadds 2, 22, 25
  01f4e9c  lis 28, 118
  01f4ea0  lis 27, 118
  01f4ea4  fmr 21, 1
  01f4ea8  lfs 1, 25152(28)
  01f4eac  fsubs 3, 26, 2
  01f4eb0  fsubs 4, 27, 2
  01f4eb4  fsub 5, 2, 3
  01f4eb8  fsel 2, 5, 3, 2
  01f4ebc  fsub 3, 4, 2
  01f4ec0  fsel 3, 3, 4, 2
  01f4ec4  lfs 2, 25156(27)
  01f4ec8  fmuls 4, 3, 3
  01f4ecc  fmuls 5, 4, 3
  01f4ed0  fmuls 6, 4, 5
  01f4ed4  fmadds 3, 5, 28, 3
  01f4ed8  fmuls 5, 4, 6
  01f4edc  fmadds 3, 6, 29, 3
  01f4ee0  fmuls 4, 4, 5
  01f4ee4  fmadds 3, 5, 30, 3
  01f4ee8  fmadds 20, 4, 31, 3
  01f4eec  bl 0xfcbe8
  01f4ef0  nop
  01f4ef4  fsubs 2, 26, 22
  01f4ef8  fsubs 3, 27, 22
  01f4efc  lfs 5, 25152(28)
  01f4f00  fmuls 1, 20, 1
  01f4f04  fsub 4, 22, 2
  01f4f08  fsel 2, 4, 2, 22
  01f4f0c  fsub 4, 3, 2
  01f4f10  fsel 3, 4, 3, 2
  01f4f14  lfs 2, 25156(27)
  01f4f18  stfs 1, 144(1)
  01f4f1c  fmr 1, 5
  01f4f20  fmuls 4, 3, 3
  01f4f24  fmuls 5, 4, 3
  01f4f28  fmuls 6, 4, 5
  01f4f2c  fmadds 3, 5, 28, 3
  01f4f30  fmuls 5, 4, 6
  01f4f34  fmadds 3, 6, 29, 3
  01f4f38  fmuls 4, 4, 5
  01f4f3c  fmadds 3, 5, 30, 3
  01f4f40  fmadds 22, 4, 31, 3
  01f4f44  bl 0xfcbe8
  01f4f48  nop
  01f4f4c  fadds 2, 21, 25
  01f4f50  fmuls 1, 22, 1
  01f4f54  stw 31, 152(1)
  01f4f58  fsubs 3, 26, 2
  01f4f5c  fsubs 4, 27, 2
  01f4f60  fsub 5, 2, 3
  01f4f64  fsel 2, 5, 3, 2
  01f4f68  lfs 5, 25152(28)
  01f4f6c  stfs 1, 148(1)
  01f4f70  fmr 1, 5
  01f4f74  fsub 3, 4, 2
  01f4f78  fsel 3, 3, 4, 2
  01f4f7c  lfs 2, 25156(27)
  01f4f80  fmuls 4, 3, 3
  01f4f84  fmuls 5, 4, 3
  01f4f88  fmuls 6, 4, 5
  01f4f8c  fmadds 3, 5, 28, 3
  01f4f90  fmuls 5, 4, 6
  01f4f94  fmadds 3, 6, 29, 3
  01f4f98  fmuls 4, 4, 5
  01f4f9c  fmadds 3, 5, 30, 3
  01f4fa0  fmadds 22, 4, 31, 3
  01f4fa4  bl 0xfcbe8
  01f4fa8  nop
  01f4fac  fsubs 2, 26, 21
  01f4fb0  fsubs 3, 27, 21
  01f4fb4  fmuls 1, 22, 1
  01f4fb8  fsub 4, 21, 2
  01f4fbc  fsel 2, 4, 2, 21
  01f4fc0  fsub 4, 3, 2
  01f4fc4  fsel 3, 4, 3, 2
  01f4fc8  lfs 2, 25152(28)
  01f4fcc  stfs 1, 160(1)
  01f4fd0  fmr 1, 2
  01f4fd4  lfs 2, 25156(27)
  01f4fd8  fmuls 4, 3, 3
  01f4fdc  fmuls 6, 4, 3
  01f4fe0  fmuls 5, 4, 6
  01f4fe4  fmadds 3, 6, 28, 3
  01f4fe8  fmuls 6, 4, 5
  01f4fec  fmadds 3, 5, 29, 3
  01f4ff0  fmuls 4, 4, 6
  01f4ff4  fmadds 3, 6, 30, 3
  01f4ff8  fmadds 22, 4, 31, 3
  01f4ffc  bl 0xfcbe8
  01f5000  nop
  01f5004  fmuls 3, 22, 1
  01f5008  lis 28, 118
  01f500c  stw 31, 168(1)
  01f5010  lis 27, 118
  01f5014  lfs 1, 25160(28)
  01f5018  lfs 2, 25164(27)
  01f501c  stfs 3, 164(1)
  01f5020  bl 0xfcbe8
  01f5024  nop
  01f5028  lfs 2, 25160(28)
  01f502c  stfs 1, 152(1)
  01f5030  lfs 3, 25164(27)
  01f5034  fmr 1, 2
  01f5038  fmr 2, 3
  01f503c  bl 0xfcbe8
  01f5040  nop
  01f5044  lis 3, 118
  01f5048  lis 4, 118
  01f504c  stfs 1, 168(1)
  01f5050  lfs 1, 25128(3)
  01f5054  lfs 2, 25132(4)
  01f5058  bl 0xfcbe8
  01f505c  nop
  01f5060  lis 28, 114
  01f5064  lfs 2, -3056(28)
  01f5068  fmuls 1, 1, 2
  01f506c  bl 0x502758
  01f5070  nop
  01f5074  lis 4, 118
  01f5078  lis 5, 118
  01f507c  ori 27, 3, 0
  01f5080  lfs 1, 25136(4)
  01f5084  lfs 2, 25140(5)
  01f5088  bl 0xfcbe8
  01f508c  nop
  01f5090  lfs 2, -3056(28)
  01f5094  fmuls 1, 1, 2
  01f5098  bl 0x502758
  01f509c  nop
  01f50a0  lis 4, 118
  01f50a4  lis 5, 118
  01f50a8  ori 26, 3, 0
  01f50ac  lfs 1, 25144(4)
  01f50b0  lfs 2, 25148(5)
  01f50b4  bl 0xfcbe8
  01f50b8  nop
  01f50bc  lfs 2, -3056(28)
  01f50c0  fmuls 1, 1, 2
  01f50c4  bl 0x502758
  01f50c8  nop
  01f50cc  extsw 4, 27
  01f50d0  ori 28, 3, 0
  01f50d4  extsw 3, 28
  01f50d8  std 4, 176(1)
  01f50dc  lfs 3, 144(1)
  01f50e0  lfs 4, 148(1)
  01f50e4  lfd 1, 176(1)
  01f50e8  std 3, 176(1)
  01f50ec  fcfid 1, 1
  01f50f0  lis 3, 118
  01f50f4  lis 4, 118
  01f50f8  frsp 1, 1
  01f50fc  lfd 2, 176(1)
  01f5100  fdivs 5, 24, 1
  01f5104  lfs 6, 152(1)
  01f5108  lfs 7, 160(1)
  01f510c  lfs 9, 164(1)
  01f5110  lfs 10, 168(1)
  01f5114  fcfid 1, 2
  01f5118  fmr 2, 24
  01f511c  frsp 1, 1
  01f5120  fdivs 8, 24, 1
  01f5124  lfs 1, 25120(3)
  01f5128  stfs 1, 156(1)
  01f512c  lfs 1, 25124(4)
  01f5130  stfs 1, 172(1)
  01f5134  fmr 1, 23
  01f5138  fmuls 3, 3, 5
  01f513c  fmuls 4, 4, 5
  01f5140  fmuls 5, 6, 5
  01f5144  stfs 3, 144(1)
  01f5148  stfs 4, 148(1)
  01f514c  stfs 5, 152(1)
  01f5150  fmuls 3, 7, 8
  01f5154  fmuls 4, 9, 8
  01f5158  fmuls 5, 10, 8
  01f515c  stfs 3, 160(1)
  01f5160  stfs 4, 164(1)
  01f5164  stfs 5, 168(1)
  01f5168  bl 0xfcbe8
  01f516c  nop
  01f5170  lfs 2, 144(30)
  01f5174  lis 4, 118
  01f5178  lfs 4, 148(30)
  01f517c  lis 5, 118
  01f5180  fsubs 3, 2, 2
  01f5184  lfs 5, 152(30)
  01f5188  fsubs 4, 4, 4
  01f518c  lfs 6, 156(30)
  01f5190  fsubs 5, 5, 5
  01f5194  lis 7, 118
  01f5198  lwz 6, 25112(4)
  01f519c  lwz 8, 25172(5)
  01f51a0  addic 3, 1, 128
  01f51a4  extsw 11, 8
  01f51a8  ori 10, 28, 0
  01f51ac  addic 4, 1, 144
  01f51b0  fmadds 2, 1, 3, 2
  01f51b4  addic 5, 1, 160
  01f51b8  extsw 6, 6
  01f51bc  ori 8, 27, 0
  01f51c0  ori 9, 26, 0
  01f51c4  stfs 2, 128(1)
  01f51c8  lfs 2, 148(30)
  01f51cc  lwz 7, 25116(7)
  01f51d0  fmadds 2, 1, 4, 2
  01f51d4  std 11, 112(1)
  01f51d8  extsw 7, 7
  01f51dc  stfs 2, 132(1)
  01f51e0  lfs 2, 152(30)
  01f51e4  stfs 6, 140(1)
  01f51e8  fmadds 1, 1, 5, 2
  01f51ec  stfs 1, 136(1)
  01f51f0  bl 0x1206e8
  01f51f4  nop
  01f51f8  addic 29, 29, 1
  01f51fc  addic 30, 30, 16
  01f5200  cmpwi 29, 15
  01f5204  bt 0, 0x1f4e1c
  01f5208  ld 0, 352(1)
  01f520c  mtlr 0
  01f5210  lfd 20, 240(1)
  01f5214  lfd 21, 248(1)
  01f5218  lfd 22, 256(1)
  01f521c  lfd 23, 264(1)
  01f5220  lfd 24, 272(1)
  01f5224  lfd 25, 280(1)
  01f5228  lfd 26, 288(1)
  01f522c  lfd 27, 296(1)
  01f5230  lfd 28, 304(1)
  01f5234  lfd 29, 312(1)
  01f5238  lfd 30, 320(1)
  01f523c  lfd 31, 328(1)
  01f5240  ld 26, 192(1)
  01f5244  ld 27, 200(1)
  01f5248  ld 28, 208(1)
  01f524c  ld 29, 216(1)
  01f5250  ld 30, 224(1)
  01f5254  ld 31, 232(1)
  01f5258  addi 1, 1, 336
  01f525c  blr

M1197_001f52a0:   # 0x1f52a0, 0x8c4 bytes
  01f52a0  stdu 1, -448(1)
  01f52a4  mflr 0
  01f52a8  std 0, 464(1)
  01f52ac  stfd 24, 384(1)
  01f52b0  stfd 25, 392(1)
  01f52b4  stfd 26, 400(1)
  01f52b8  stfd 27, 408(1)
  01f52bc  stfd 28, 416(1)
  01f52c0  stfd 29, 424(1)
  01f52c4  stfd 30, 432(1)
  01f52c8  stfd 31, 440(1)
  01f52cc  std 31, 376(1)
  01f52d0  std 28, 352(1)
  01f52d4  ori 31, 3, 0
  01f52d8  lis 28, 31
  01f52dc  std 30, 368(1)
  01f52e0  addi 28, 28, 21088
  01f52e4  lwz 30, 120(31)
  01f52e8  std 29, 360(1)
  01f52ec  std 27, 344(1)
  01f52f0  std 26, 336(1)
  01f52f4  std 25, 328(1)
  01f52f8  std 24, 320(1)
  01f52fc  lfs 1, 124(30)
  01f5300  bl 0x502758
  01f5304  nop
  01f5308  stw 3, 224(1)
  01f530c  addic 3, 1, 224
  01f5310  bl 0x4fff60
  01f5314  nop
  01f5318  li 4, 224
  01f531c  li 5, 124
  01f5320  lwz 3, 224(1)
  01f5324  <unknown>
  01f5328  cmpwi 3, 0
  01f532c  vcfsx 2, 2, 0
  01f5330  vspltw 2, 2, 0
  01f5334  stvewx 2, 5, 30
  01f5338  bt 2, 0x1f5b14
  01f533c  cmpwi 3, 20
  01f5340  bf 2, 0x1f5388
  01f5344  lis 6, 16250
  01f5348  li 3, 0
  01f534c  ori 4, 30, 0
  01f5350  lis 5, 16256
  01f5354  ori 6, 6, 57672
  01f5358  lwz 7, 156(4)
  01f535c  srawi 8, 7, 31
  01f5360  srwi 9, 8, 1
  01f5364  xor 7, 9, 7
  01f5368  subc 7, 7, 8
  01f536c  cmpw 7, 5
  01f5370  bt 0, 0x1f5378
  01f5374  stw 6, 156(4)
  01f5378  addic 3, 3, 1
  01f537c  addic 4, 4, 16
  01f5380  cmpwi 3, 16
  01f5384  bt 0, 0x1f5358
  01f5388  lfs 31, 0(28)
  01f538c  li 29, 0
  01f5390  lfs 30, 4(28)
  01f5394  lis 24, 161
  01f5398  lfs 29, 8(28)
  01f539c  ori 25, 29, 0
  01f53a0  lfs 28, 12(28)
  01f53a4  ori 27, 30, 0
  01f53a8  lfs 27, 16(28)
  01f53ac  addic 24, 24, 2368
  01f53b0  lfs 26, 20(28)
  01f53b4  lfs 25, 24(28)
  01f53b8  lfs 1, 144(27)
  01f53bc  lfs 2, 112(30)
  01f53c0  fsubs 1, 1, 2
  01f53c4  lis 3, 114
  01f53c8  stfs 1, 112(1)
  01f53cc  lfs 2, 148(27)
  01f53d0  lfs 3, 116(30)
  01f53d4  fsubs 2, 2, 3
  01f53d8  lfs 4, -3052(3)
  01f53dc  fmuls 4, 4, 30
  01f53e0  fmuls 3, 2, 2
  01f53e4  stfs 2, 116(1)
  01f53e8  lfs 5, 152(27)
  01f53ec  lfs 6, 120(30)
  01f53f0  fmadds 3, 1, 1, 3
  01f53f4  fsubs 5, 5, 6
  01f53f8  fsqrts 3, 3
  01f53fc  stfs 5, 120(1)
  01f5400  lfs 5, 156(27)
  01f5404  stw 25, 120(1)
  01f5408  stfs 5, 124(1)
  01f540c  stw 25, 120(1)
  01f5410  lfs 8, 20(31)
  01f5414  lfs 9, 16(31)
  01f5418  lfs 10, 24(31)
  01f541c  addic 3, 1, 128
  01f5420  addic 26, 27, 144
  01f5424  li 7, 0
  01f5428  addic 4, 1, 144
  01f542c  li 5, 2
  01f5430  li 6, 0
  01f5434  fdivs 4, 4, 3
  01f5438  fsub 5, 31, 3
  01f543c  fsub 6, 31, 3
  01f5440  fsub 7, 3, 31
  01f5444  fsub 3, 3, 31
  01f5448  fmuls 1, 1, 4
  01f544c  fmuls 2, 2, 4
  01f5450  fsel 4, 5, 31, 1
  01f5454  fsel 5, 6, 31, 2
  01f5458  fsel 1, 7, 4, 1
  01f545c  fsel 2, 3, 5, 2
  01f5460  stfs 1, 112(1)
  01f5464  stfs 2, 116(1)
  01f5468  lfs 3, 144(27)
  01f546c  fadds 1, 3, 1
  01f5470  stfs 1, 112(1)
  01f5474  lfs 3, 148(27)
  01f5478  fadds 2, 3, 2
  01f547c  fsubs 1, 1, 9
  01f5480  stfs 2, 116(1)
  01f5484  lfs 3, 152(27)
  01f5488  fsubs 2, 2, 8
  01f548c  stfs 3, 120(1)
  01f5490  lfs 4, 156(27)
  01f5494  stfs 4, 124(1)
  01f5498  lfs 4, 132(30)
  01f549c  lfs 5, 128(30)
  01f54a0  fmuls 6, 4, 4
  01f54a4  lfs 7, 136(30)
  01f54a8  fsubs 3, 3, 10
  01f54ac  fmuls 2, 2, 4
  01f54b0  fmadds 6, 5, 5, 6
  01f54b4  fmadds 1, 1, 5, 2
  01f54b8  fmadds 4, 7, 7, 6
  01f54bc  fnmadds 1, 3, 7, 1
  01f54c0  fsqrts 2, 4
  01f54c4  lfs 4, 144(27)
  01f54c8  stfs 4, 128(1)
  01f54cc  lfs 4, 148(27)
  01f54d0  stfs 4, 132(1)
  01f54d4  lfs 4, 152(27)
  01f54d8  stfs 4, 136(1)
  01f54dc  lfs 5, 156(27)
  01f54e0  stfs 5, 140(1)
  01f54e4  fadds 1, 1, 29
  01f54e8  fadds 3, 4, 28
  01f54ec  stfs 3, 136(1)
  01f54f0  lfs 3, 144(27)
  01f54f4  stfs 3, 144(1)
  01f54f8  lfs 3, 148(27)
  01f54fc  stfs 3, 148(1)
  01f5500  lfs 3, 152(27)
  01f5504  stfs 3, 152(1)
  01f5508  lfs 4, 156(27)
  01f550c  stfs 4, 156(1)
  01f5510  fdivs 1, 1, 2
  01f5514  fsub 4, 31, 2
  01f5518  fsub 24, 2, 31
  01f551c  fsubs 2, 3, 27
  01f5520  stfs 2, 152(1)
  01f5524  fmuls 1, 7, 1
  01f5528  fsel 2, 4, 31, 1
  01f552c  fsel 24, 24, 2, 1
  01f5530  bl 0x57820
  01f5534  nop
  01f5538  cmpwi 3, 0
  01f553c  bt 2, 0x1f5570
  01f5540  lfs 1, 120(1)
  01f5544  fcmpu 0, 1, 24
  01f5548  cror 6, 0, 2
  01f554c  bt 6, 0x1f5570
  01f5550  lis 4, 114
  01f5554  lfs 1, 40(24)
  01f5558  addic 3, 1, 120
  01f555c  fadds 1, 1, 29
  01f5560  lfs 2, -3052(4)
  01f5564  fmuls 2, 2, 26
  01f5568  bl 0x109af0
  01f556c  nop
  01f5570  lwz 4, 156(27)
  01f5574  lis 3, 16256
  01f5578  srawi 5, 4, 31
  01f557c  srwi 6, 5, 1
  01f5580  xor 4, 6, 4
  01f5584  subc 4, 4, 5
  01f5588  cmpw 4, 3
  01f558c  bt 0, 0x1f55c4
  01f5590  ori 3, 26, 0
  01f5594  addic 4, 1, 112
  01f5598  li 5, 2
  01f559c  li 6, 0
  01f55a0  li 7, 0
  01f55a4  bl 0x57820
  01f55a8  nop
  01f55ac  cmpwi 3, 0
  01f55b0  bt 2, 0x1f55c4
  01f55b4  lis 3, 16250
  01f55b8  ori 3, 3, 57672
  01f55bc  stw 3, 124(1)
  01f55c0  b 0x1f5600
  01f55c4  lwz 4, 124(1)
  01f55c8  lis 3, 16256
  01f55cc  srawi 5, 4, 31
  01f55d0  srwi 6, 5, 1
  01f55d4  xor 4, 6, 4
  01f55d8  subc 4, 4, 5
  01f55dc  cmpw 4, 3
  01f55e0  bf 0, 0x1f5600
  01f55e4  lis 4, 114
  01f55e8  fmr 1, 31
  01f55ec  addic 3, 1, 124
  01f55f0  lfs 2, -3052(4)
  01f55f4  fmuls 2, 2, 25
  01f55f8  bl 0x109af0
  01f55fc  nop
  01f5600  lfs 1, 112(1)
  01f5604  addic 29, 29, 1
  01f5608  stfs 1, 144(27)
  01f560c  cmpwi 29, 16
  01f5610  lfs 1, 116(1)
  01f5614  stfs 1, 148(27)
  01f5618  lfs 1, 120(1)
  01f561c  stfs 1, 152(27)
  01f5620  lfs 1, 124(1)
  01f5624  stfs 1, 156(27)
  01f5628  addic 27, 27, 16
  01f562c  bt 0, 0x1f53b8
  01f5630  ori 29, 30, 0
  01f5634  ori 30, 25, 0
  01f5638  lwz 4, 156(29)
  01f563c  lis 3, 16256
  01f5640  srawi 5, 4, 31
  01f5644  srwi 6, 5, 1
  01f5648  xor 4, 6, 4
  01f564c  subc 4, 4, 5
  01f5650  cmpw 4, 3
  01f5654  bt 0, 0x1f5ae8
  01f5658  lwz 4, 172(29)
  01f565c  lis 3, 16256
  01f5660  srawi 5, 4, 31
  01f5664  srwi 6, 5, 1
  01f5668  xor 4, 6, 4
  01f566c  subc 4, 4, 5
  01f5670  cmpw 4, 3
  01f5674  bt 0, 0x1f5ae8
  01f5678  lfs 1, 144(29)
  01f567c  lfs 3, 16(31)
  01f5680  lfs 2, 148(29)
  01f5684  lfs 4, 20(31)
  01f5688  fsubs 1, 1, 3
  01f568c  fsubs 2, 2, 4
  01f5690  lis 3, 115
  01f5694  addic 27, 29, 144
  01f5698  addic 3, 3, 22784
  01f569c  fabs 6, 1
  01f56a0  fabs 7, 2
  01f56a4  stfs 1, 240(1)
  01f56a8  stfs 2, 244(1)
  01f56ac  fsubs 1, 6, 7
  01f56b0  stfs 1, 248(1)
  01f56b4  lwz 4, 240(1)
  01f56b8  lfs 1, 240(1)
  01f56bc  lwz 5, 244(1)
  01f56c0  lfs 2, 244(1)
  01f56c4  fabs 1, 1
  01f56c8  lfs 8, 28(28)
  01f56cc  rlwinm 5, 5, 3, 29, 29
  01f56d0  lwz 6, 248(1)
  01f56d4  lfs 5, 248(1)
  01f56d8  rlwimi 5, 6, 2, 30, 30
  01f56dc  fabs 2, 2
  01f56e0  fsub 9, 5, 31
  01f56e4  fsub 10, 5, 31
  01f56e8  rlwimi 5, 4, 4, 28, 28
  01f56ec  ori 4, 3, 0
  01f56f0  rlwimi 4, 5, 2, 26, 28
  01f56f4  slwi 5, 5, 2
  01f56f8  clrldi 4, 4, 32
  01f56fc  fsel 7, 9, 1, 7
  01f5700  lfsx 1, 3, 5
  01f5704  fsel 6, 10, 2, 6
  01f5708  lfs 5, 4(4)
  01f570c  fmr 2, 8
  01f5710  fcmpu 0, 7, 31
  01f5714  bt 1, 0x1f5720
  01f5718  fmr 1, 31
  01f571c  b 0x1f5838
  01f5720  fsubs 8, 6, 7
  01f5724  fadds 6, 6, 7
  01f5728  addic 4, 1, 16
  01f572c  li 7, 2
  01f5730  addic 5, 4, 268
  01f5734  addic 6, 4, 284
  01f5738  mtctr 7
  01f573c  fdivs 6, 8, 6
  01f5740  fmuls 7, 6, 6
  01f5744  stfs 6, 296(1)
  01f5748  stfs 6, 288(1)
  01f574c  stfs 6, 292(1)
  01f5750  stfs 6, 284(1)
  01f5754  lfs 9, 296(1)
  01f5758  lfs 10, 288(1)
  01f575c  lfs 11, 292(1)
  01f5760  fmuls 8, 7, 7
  01f5764  fmuls 10, 10, 7
  01f5768  fmuls 9, 9, 8
  01f576c  fmuls 6, 8, 8
  01f5770  fmuls 8, 11, 8
  01f5774  stfs 10, 288(1)
  01f5778  fmuls 7, 9, 7
  01f577c  stfs 8, 292(1)
  01f5780  stfs 7, 296(1)
  01f5784  lfs 7, 268(4)
  01f5788  fmuls 7, 7, 6
  01f578c  stfs 7, 284(4)
  01f5790  lfs 7, 4(5)
  01f5794  addic 4, 4, 8
  01f5798  addic 5, 5, 8
  01f579c  fmuls 7, 7, 6
  01f57a0  stfs 7, 4(6)
  01f57a4  addic 6, 6, 8
  01f57a8  bdnz 0x1f5784
  01f57ac  li 6, 4
  01f57b0  ori 4, 1, 0
  01f57b4  mtctr 6
  01f57b8  lis 5, 115
  01f57bc  addic 6, 4, 284
  01f57c0  addic 5, 5, 22752
  01f57c4  ori 8, 6, 0
  01f57c8  lfs 6, 284(4)
  01f57cc  lfs 7, 0(5)
  01f57d0  fmuls 6, 6, 7
  01f57d4  lfs 7, 4(5)
  01f57d8  addic 5, 5, 8
  01f57dc  stfs 6, 284(4)
  01f57e0  lfs 6, 4(6)
  01f57e4  addic 4, 4, 8
  01f57e8  fmuls 6, 6, 7
  01f57ec  stfs 6, 4(6)
  01f57f0  addic 6, 6, 8
  01f57f4  bdnz 0x1f57c8
  01f57f8  fmr 6, 31
  01f57fc  ori 4, 1, 0
  01f5800  mtctr 7
  01f5804  lfs 7, 284(4)
  01f5808  fadds 6, 6, 7
  01f580c  addic 4, 4, 16
  01f5810  lfs 7, 4(8)
  01f5814  lfs 8, 8(8)
  01f5818  lfs 9, 12(8)
  01f581c  addic 8, 8, 16
  01f5820  fadds 6, 6, 7
  01f5824  fadds 6, 6, 8
  01f5828  fadds 6, 6, 9
  01f582c  bdnz 0x1f5804
  01f5830  fadds 6, 6, 2
  01f5834  fmadds 1, 6, 1, 5
  01f5838  lfs 6, 32(28)
  01f583c  fmr 10, 4
  01f5840  lfs 4, 36(28)
  01f5844  fadds 1, 1, 6
  01f5848  lfs 5, 40(28)
  01f584c  lfs 6, 44(28)
  01f5850  fsubs 7, 4, 1
  01f5854  fsubs 8, 5, 1
  01f5858  fsub 9, 1, 7
  01f585c  fsel 1, 9, 7, 1
  01f5860  lfs 7, 48(28)
  01f5864  fsub 9, 8, 1
  01f5868  fsel 1, 9, 8, 1
  01f586c  lfs 8, 52(28)
  01f5870  lfs 9, 56(28)
  01f5874  fmuls 11, 1, 1
  01f5878  fmuls 12, 11, 1
  01f587c  fmuls 13, 11, 12
  01f5880  fmadds 1, 12, 6, 1
  01f5884  fmuls 12, 11, 13
  01f5888  fmadds 1, 13, 7, 1
  01f588c  fmuls 11, 11, 12
  01f5890  fmadds 1, 12, 8, 1
  01f5894  fmadds 1, 11, 9, 1
  01f5898  stfs 1, 160(1)
  01f589c  lfs 1, 144(29)
  01f58a0  lfs 11, 148(29)
  01f58a4  fsubs 1, 1, 3
  01f58a8  fsubs 3, 11, 10
  01f58ac  fabs 10, 1
  01f58b0  fabs 11, 3
  01f58b4  stfs 1, 228(1)
  01f58b8  stfs 3, 232(1)
  01f58bc  fsubs 1, 10, 11
  01f58c0  stfs 1, 236(1)
  01f58c4  lwz 4, 228(1)
  01f58c8  lfs 1, 228(1)
  01f58cc  lwz 5, 232(1)
  01f58d0  lfs 3, 232(1)
  01f58d4  fabs 1, 1
  01f58d8  lwz 6, 236(1)
  01f58dc  rlwinm 5, 5, 3, 29, 29
  01f58e0  fabs 12, 3
  01f58e4  lfs 3, 236(1)
  01f58e8  rlwimi 5, 6, 2, 30, 30
  01f58ec  fsub 13, 3, 31
  01f58f0  fsub 0, 3, 31
  01f58f4  rlwimi 5, 4, 4, 28, 28
  01f58f8  ori 4, 3, 0
  01f58fc  rlwimi 4, 5, 2, 26, 28
  01f5900  slwi 5, 5, 2
  01f5904  clrldi 4, 4, 32
  01f5908  fsel 11, 13, 1, 11
  01f590c  lfsx 1, 3, 5
  01f5910  lfs 3, 4(4)
  01f5914  fsel 10, 0, 12, 10
  01f5918  fcmpu 0, 11, 31
  01f591c  bt 1, 0x1f5928
  01f5920  fmr 2, 31
  01f5924  b 0x1f5a40
  01f5928  fsubs 12, 10, 11
  01f592c  fadds 10, 10, 11
  01f5930  addic 3, 1, 16
  01f5934  li 6, 2
  01f5938  addic 4, 3, 236
  01f593c  addic 5, 3, 252
  01f5940  mtctr 6
  01f5944  fdivs 10, 12, 10
  01f5948  fmuls 11, 10, 10
  01f594c  stfs 10, 264(1)
  01f5950  stfs 10, 256(1)
  01f5954  stfs 10, 260(1)
  01f5958  stfs 10, 252(1)
  01f595c  lfs 13, 264(1)
  01f5960  lfs 0, 256(1)
  01f5964  lfs 30, 260(1)
  01f5968  fmuls 12, 11, 11
  01f596c  fmuls 0, 0, 11
  01f5970  fmuls 13, 13, 12
  01f5974  fmuls 10, 12, 12
  01f5978  fmuls 12, 30, 12
  01f597c  stfs 0, 256(1)
  01f5980  fmuls 11, 13, 11
  01f5984  stfs 12, 260(1)
  01f5988  stfs 11, 264(1)
  01f598c  lfs 11, 236(3)
  01f5990  fmuls 11, 11, 10
  01f5994  stfs 11, 252(3)
  01f5998  lfs 11, 4(4)
  01f599c  addic 3, 3, 8
  01f59a0  addic 4, 4, 8
  01f59a4  fmuls 11, 11, 10
  01f59a8  stfs 11, 4(5)
  01f59ac  addic 5, 5, 8
  01f59b0  bdnz 0x1f598c
  01f59b4  li 5, 4
  01f59b8  ori 3, 1, 0
  01f59bc  mtctr 5
  01f59c0  lis 4, 115
  01f59c4  addic 5, 3, 252
  01f59c8  addic 4, 4, 22752
  01f59cc  ori 7, 5, 0
  01f59d0  lfs 10, 252(3)
  01f59d4  lfs 11, 0(4)
  01f59d8  fmuls 10, 10, 11
  01f59dc  lfs 11, 4(4)
  01f59e0  addic 4, 4, 8
  01f59e4  stfs 10, 252(3)
  01f59e8  lfs 10, 4(5)
  01f59ec  addic 3, 3, 8
  01f59f0  fmuls 10, 10, 11
  01f59f4  stfs 10, 4(5)
  01f59f8  addic 5, 5, 8
  01f59fc  bdnz 0x1f59d0
  01f5a00  fmr 10, 31
  01f5a04  ori 3, 1, 0
  01f5a08  mtctr 6
  01f5a0c  lfs 11, 252(3)
  01f5a10  fadds 10, 10, 11
  01f5a14  addic 3, 3, 16
  01f5a18  lfs 11, 4(7)
  01f5a1c  lfs 12, 8(7)
  01f5a20  lfs 13, 12(7)
  01f5a24  addic 7, 7, 16
  01f5a28  fadds 10, 10, 11
  01f5a2c  fadds 10, 10, 12
  01f5a30  fadds 10, 10, 13
  01f5a34  bdnz 0x1f5a0c
  01f5a38  fadds 2, 10, 2
  01f5a3c  fmadds 2, 2, 1, 3
  01f5a40  fsubs 1, 4, 2
  01f5a44  fsubs 3, 5, 2
  01f5a48  lis 3, 17839
  01f5a4c  lis 4, 16256
  01f5a50  ori 3, 3, 57190
  01f5a54  addic 26, 1, 176
  01f5a58  lis 5, 1
  01f5a5c  fsub 4, 2, 1
  01f5a60  stw 4, 168(1)
  01f5a64  addic 7, 1, 160
  01f5a68  stw 3, 172(1)
  01f5a6c  ori 4, 31, 0
  01f5a70  ori 3, 26, 0
  01f5a74  ori 5, 5, 1
  01f5a78  fsel 1, 4, 1, 2
  01f5a7c  fsub 2, 3, 1
  01f5a80  fsel 1, 2, 3, 1
  01f5a84  fmuls 2, 1, 1
  01f5a88  fmuls 3, 2, 1
  01f5a8c  fmuls 4, 2, 3
  01f5a90  fmadds 3, 3, 6, 1
  01f5a94  fmr 1, 28
  01f5a98  fmuls 5, 2, 4
  01f5a9c  fmadds 3, 4, 7, 3
  01f5aa0  fmuls 2, 2, 5
  01f5aa4  fmadds 3, 5, 8, 3
  01f5aa8  fmadds 2, 2, 9, 3
  01f5aac  stfs 2, 164(1)
  01f5ab0  bl 0x10581c
  01f5ab4  nop
  01f5ab8  li 6, 1
  01f5abc  stb 25, 200(1)
  01f5ac0  lhz 7, 166(31)
  01f5ac4  addic 4, 29, 160
  01f5ac8  ori 3, 27, 0
  01f5acc  li 5, 0
  01f5ad0  stb 6, 201(1)
  01f5ad4  sth 7, 202(1)
  01f5ad8  ori 6, 31, 0
  01f5adc  ori 7, 26, 0
  01f5ae0  bl 0x57820
  01f5ae4  nop
  01f5ae8  addic 30, 30, 1
  01f5aec  addic 29, 29, 16
  01f5af0  cmpwi 30, 15
  01f5af4  bt 0, 0x1f5638
  01f5af8  lis 3, 113
  01f5afc  ori 4, 31, 0
  01f5b00  addic 3, 3, -28000
  01f5b04  bl 0x6d720
  01f5b08  nop
  01f5b0c  ori 3, 31, 0
  01f5b10  bl 0x1f4d90
  01f5b14  ld 0, 464(1)
  01f5b18  mtlr 0
  01f5b1c  lfd 24, 384(1)
  01f5b20  lfd 25, 392(1)
  01f5b24  lfd 26, 400(1)
  01f5b28  lfd 27, 408(1)
  01f5b2c  lfd 28, 416(1)
  01f5b30  lfd 29, 424(1)
  01f5b34  lfd 30, 432(1)
  01f5b38  lfd 31, 440(1)
  01f5b3c  ld 24, 320(1)
  01f5b40  ld 25, 328(1)
  01f5b44  ld 26, 336(1)
  01f5b48  ld 27, 344(1)
  01f5b4c  ld 28, 352(1)
  01f5b50  ld 29, 360(1)
  01f5b54  ld 30, 368(1)
  01f5b58  ld 31, 376(1)
  01f5b5c  addi 1, 1, 448
  01f5b60  blr

M1197_001f5b64:   # 0x1f5b64, 0x100 bytes
  01f5b64  stdu 1, -144(1)
  01f5b68  mflr 0
  01f5b6c  std 0, 160(1)
  01f5b70  std 31, 136(1)
  01f5b74  ori 31, 3, 0
  01f5b78  lbz 3, 32(3)
  01f5b7c  std 30, 128(1)
  01f5b80  std 29, 120(1)
  01f5b84  cmpwi 3, 4
  01f5b88  bt 2, 0x1f5c48
  01f5b8c  ori 3, 31, 0
  01f5b90  bl 0x1f52a0
  01f5b94  li 6, 0
  01f5b98  lwz 29, 120(31)
  01f5b9c  ori 3, 31, 0
  01f5ba0  lis 4, 1
  01f5ba4  li 5, 0
  01f5ba8  stw 6, 116(1)
  01f5bac  bl 0x10675c
  01f5bb0  nop
  01f5bb4  ori 30, 3, 0
  01f5bb8  ori 3, 31, 0
  01f5bbc  ori 4, 30, 0
  01f5bc0  addic 5, 29, 32
  01f5bc4  li 6, 0
  01f5bc8  addic 7, 1, 112
  01f5bcc  li 9, 0
  01f5bd0  addic 8, 1, 116
  01f5bd4  li 10, 4
  01f5bd8  bl 0x106840
  01f5bdc  nop
  01f5be0  lwz 3, 116(1)
  01f5be4  cmpwi 30, 0
  01f5be8  lwz 4, 112(1)
  01f5bec  lfs 1, 116(1)
  01f5bf0  bt 2, 0x1f5c0c
  01f5bf4  lwz 30, 32(30)
  01f5bf8  cmpwi 30, 0
  01f5bfc  bt 2, 0x1f5c0c
  01f5c00  lhz 5, 166(30)
  01f5c04  cmpwi 5, 859
  01f5c08  bt 2, 0x1f5c48
  01f5c0c  cmpwi 4, 1
  01f5c10  bt 2, 0x1f5c40
  01f5c14  cmpwi 3, 0
  01f5c18  bt 2, 0x1f5c40
  01f5c1c  lfs 2, 32(29)
  01f5c20  li 3, 0
  01f5c24  lhz 5, 52(31)
  01f5c28  li 4, 4
  01f5c2c  fsubs 1, 2, 1
  01f5c30  rlwimi 5, 3, 0, 19, 19
  01f5c34  sth 5, 52(31)
  01f5c38  stfs 1, 32(29)
  01f5c3c  stb 4, 32(31)
  01f5c40  li 3, 255
  01f5c44  stb 3, 164(31)
  01f5c48  ld 0, 160(1)
  01f5c4c  mtlr 0
  01f5c50  ld 29, 120(1)
  01f5c54  ld 30, 128(1)
  01f5c58  ld 31, 136(1)
  01f5c5c  addi 1, 1, 144
  01f5c60  blr

M1197_001f5ca0:   # 0x1f5ca0, 0x35c bytes
  01f5ca0  stdu 1, -272(1)
  01f5ca4  mflr 0
  01f5ca8  std 0, 288(1)
  01f5cac  stfd 20, 176(1)
  01f5cb0  stfd 21, 184(1)
  01f5cb4  stfd 22, 192(1)
  01f5cb8  stfd 23, 200(1)
  01f5cbc  stfd 24, 208(1)
  01f5cc0  stfd 25, 216(1)
  01f5cc4  stfd 26, 224(1)
  01f5cc8  stfd 27, 232(1)
  01f5ccc  stfd 28, 240(1)
  01f5cd0  stfd 29, 248(1)
  01f5cd4  stfd 30, 256(1)
  01f5cd8  stfd 31, 264(1)
  01f5cdc  std 30, 160(1)
  01f5ce0  std 31, 168(1)
  01f5ce4  lis 30, 31
  01f5ce8  ori 31, 3, 0
  01f5cec  addi 30, 30, 23652
  01f5cf0  addic 3, 31, 16
  01f5cf4  li 4, 0
  01f5cf8  std 29, 152(1)
  01f5cfc  lfs 30, 0(30)
  01f5d00  lwz 29, 120(31)
  01f5d04  std 28, 144(1)
  01f5d08  std 27, 136(1)
  01f5d0c  std 26, 128(1)
  01f5d10  fmr 1, 30
  01f5d14  bl 0xffb70
  01f5d18  nop
  01f5d1c  lis 3, 161
  01f5d20  addic 3, 3, 2368
  01f5d24  lfs 1, 68(3)
  01f5d28  lfs 21, 64(3)
  01f5d2c  fmuls 1, 1, 1
  01f5d30  lfs 2, 72(3)
  01f5d34  lfs 31, 4(30)
  01f5d38  fmadds 1, 21, 21, 1
  01f5d3c  fmadds 1, 2, 2, 1
  01f5d40  fsqrts 2, 1
  01f5d44  fcmpu 0, 2, 31
  01f5d48  bf 2, 0x1f5d78
  01f5d4c  stfs 21, 128(29)
  01f5d50  lfs 1, 68(3)
  01f5d54  li 4, 0
  01f5d58  stfs 1, 132(29)
  01f5d5c  lfs 1, 72(3)
  01f5d60  stfs 1, 136(29)
  01f5d64  lfs 21, 76(3)
  01f5d68  stw 4, 136(29)
  01f5d6c  stw 4, 132(29)
  01f5d70  stw 4, 128(29)
  01f5d74  b 0x1f5dd4
  01f5d78  frsqrte 2, 1
  01f5d7c  lfs 3, 8(30)
  01f5d80  fmuls 4, 1, 2
  01f5d84  fmuls 5, 30, 2
  01f5d88  fnmsubs 4, 4, 2, 3
  01f5d8c  fmadds 2, 4, 5, 2
  01f5d90  fmuls 4, 1, 2
  01f5d94  fmuls 5, 30, 2
  01f5d98  fnmsubs 4, 4, 2, 3
  01f5d9c  fmadds 2, 4, 5, 2
  01f5da0  fmuls 1, 1, 2
  01f5da4  fmuls 4, 30, 2
  01f5da8  fnmsubs 1, 1, 2, 3
  01f5dac  fmadds 1, 1, 4, 2
  01f5db0  fmuls 2, 21, 1
  01f5db4  stfs 2, 128(29)
  01f5db8  lfs 2, 68(3)
  01f5dbc  fmuls 2, 2, 1
  01f5dc0  stfs 2, 132(29)
  01f5dc4  lfs 2, 72(3)
  01f5dc8  fmuls 1, 2, 1
  01f5dcc  stfs 1, 136(29)
  01f5dd0  lfs 21, 76(3)
  01f5dd4  stfs 21, 140(29)
  01f5dd8  lfs 1, 16(31)
  01f5ddc  li 26, 0
  01f5de0  stfs 1, 112(29)
  01f5de4  lfs 1, 20(31)
  01f5de8  stfs 1, 116(29)
  01f5dec  addic 27, 29, 144
  01f5df0  lfs 1, 24(31)
  01f5df4  addic 28, 29, 156
  01f5df8  stfs 1, 120(29)
  01f5dfc  lfs 2, 28(31)
  01f5e00  stfs 2, 124(29)
  01f5e04  lfs 2, 12(30)
  01f5e08  fadds 1, 1, 2
  01f5e0c  stfs 1, 120(29)
  01f5e10  lfs 21, 16(30)
  01f5e14  lfs 22, 20(30)
  01f5e18  lfs 23, 24(30)
  01f5e1c  lfs 24, 28(30)
  01f5e20  lfs 25, 32(30)
  01f5e24  lfs 26, 36(30)
  01f5e28  lfs 27, 40(30)
  01f5e2c  lfs 28, 44(30)
  01f5e30  lfs 29, 48(30)
  01f5e34  ori 3, 26, 0
  01f5e38  bl 0x502730
  01f5e3c  nop
  01f5e40  fmsubs 1, 1, 21, 30
  01f5e44  lfs 2, 72(31)
  01f5e48  fmuls 20, 1, 22
  01f5e4c  fmr 1, 20
  01f5e50  bl 0x502578
  01f5e54  nop
  01f5e58  fadds 1, 1, 23
  01f5e5c  fsubs 2, 24, 1
  01f5e60  fsubs 3, 25, 1
  01f5e64  fsub 4, 1, 2
  01f5e68  fsel 1, 4, 2, 1
  01f5e6c  fsub 2, 3, 1
  01f5e70  fsel 3, 2, 3, 1
  01f5e74  fmr 1, 20
  01f5e78  lfs 2, 72(31)
  01f5e7c  fmuls 5, 3, 3
  01f5e80  fmuls 4, 5, 3
  01f5e84  fmuls 6, 5, 4
  01f5e88  fmadds 3, 4, 26, 3
  01f5e8c  fmuls 4, 5, 6
  01f5e90  fmadds 3, 6, 27, 3
  01f5e94  fmuls 5, 5, 4
  01f5e98  fmadds 3, 4, 28, 3
  01f5e9c  fmadds 20, 5, 29, 3
  01f5ea0  bl 0x502578
  01f5ea4  nop
  01f5ea8  fsubs 2, 24, 1
  01f5eac  fsubs 3, 25, 1
  01f5eb0  slwi 3, 26, 4
  01f5eb4  cmpwi 26, 0
  01f5eb8  addc 4, 3, 27
  01f5ebc  clrldi 4, 4, 32
  01f5ec0  fsub 4, 1, 2
  01f5ec4  fsel 1, 4, 2, 1
  01f5ec8  lfs 4, 112(29)
  01f5ecc  fsub 2, 3, 1
  01f5ed0  fsel 1, 2, 3, 1
  01f5ed4  fmadds 2, 20, 30, 4
  01f5ed8  fmuls 3, 1, 1
  01f5edc  stfs 2, 0(4)
  01f5ee0  lfs 2, 116(29)
  01f5ee4  fmuls 4, 3, 1
  01f5ee8  fmuls 5, 3, 4
  01f5eec  fmadds 1, 4, 26, 1
  01f5ef0  fmuls 4, 3, 5
  01f5ef4  fmadds 1, 5, 27, 1
  01f5ef8  fmuls 3, 3, 4
  01f5efc  fmadds 1, 4, 28, 1
  01f5f00  fmadds 1, 3, 29, 1
  01f5f04  fmadds 1, 1, 30, 2
  01f5f08  stfs 1, 4(4)
  01f5f0c  lfs 1, 120(29)
  01f5f10  stfs 1, 8(4)
  01f5f14  lfs 1, 124(29)
  01f5f18  stfs 1, 12(4)
  01f5f1c  bt 2, 0x1f5f28
  01f5f20  cmpwi 26, 15
  01f5f24  bf 2, 0x1f5f30
  01f5f28  fmr 1, 31
  01f5f2c  b 0x1f5f34
  01f5f30  lfs 1, 8(30)
  01f5f34  addc 3, 3, 28
  01f5f38  addic 26, 26, 1
  01f5f3c  clrldi 3, 3, 32
  01f5f40  extsw 26, 26
  01f5f44  cmpwi 26, 16
  01f5f48  stfs 1, 0(3)
  01f5f4c  bt 0, 0x1f5e34
  01f5f50  lis 3, 114
  01f5f54  lfs 1, 52(30)
  01f5f58  lfs 2, -3052(3)
  01f5f5c  lfs 3, 56(30)
  01f5f60  fmuls 1, 2, 1
  01f5f64  fdivs 1, 3, 1
  01f5f68  bl 0x502758
  01f5f6c  nop
  01f5f70  extsw 3, 3
  01f5f74  std 3, 112(1)
  01f5f78  lis 3, 114
  01f5f7c  lfs 1, -3056(3)
  01f5f80  lfd 2, 112(1)
  01f5f84  fcfid 2, 2
  01f5f88  frsp 2, 2
  01f5f8c  fadds 2, 2, 30
  01f5f90  fmuls 1, 1, 2
  01f5f94  fctidz 1, 1
  01f5f98  fcfid 1, 1
  01f5f9c  frsp 1, 1
  01f5fa0  stfs 1, 124(29)
  01f5fa4  ld 0, 288(1)
  01f5fa8  mtlr 0
  01f5fac  lfd 20, 176(1)
  01f5fb0  lfd 21, 184(1)
  01f5fb4  lfd 22, 192(1)
  01f5fb8  lfd 23, 200(1)
  01f5fbc  lfd 24, 208(1)
  01f5fc0  lfd 25, 216(1)
  01f5fc4  lfd 26, 224(1)
  01f5fc8  lfd 27, 232(1)
  01f5fcc  lfd 28, 240(1)
  01f5fd0  lfd 29, 248(1)
  01f5fd4  lfd 30, 256(1)
  01f5fd8  lfd 31, 264(1)
  01f5fdc  ld 26, 128(1)
  01f5fe0  ld 27, 136(1)
  01f5fe4  ld 28, 144(1)
  01f5fe8  ld 29, 152(1)
  01f5fec  ld 30, 160(1)
  01f5ff0  ld 31, 168(1)
  01f5ff4  addi 1, 1, 272
  01f5ff8  blr

UpdateMoby_1197:   # 0x1f6028, 0x40c bytes
  01f6028  stdu 1, -272(1)
  01f602c  mflr 0
  01f6030  std 0, 288(1)
  01f6034  std 31, 264(1)
  01f6038  lbz 4, 32(3)
  01f603c  std 30, 256(1)
  01f6040  ori 31, 3, 0
  01f6044  lwz 30, 120(3)
  01f6048  std 29, 248(1)
  01f604c  std 28, 240(1)
  01f6050  cmpwi 4, 4
  01f6054  bt 2, 0x1f6114
  01f6058  ori 3, 31, 0
  01f605c  bl 0x1f52a0
  01f6060  li 6, 0
  01f6064  lwz 28, 120(31)
  01f6068  ori 3, 31, 0
  01f606c  lis 4, 1
  01f6070  li 5, 0
  01f6074  stw 6, 212(1)
  01f6078  bl 0x10675c
  01f607c  nop
  01f6080  ori 29, 3, 0
  01f6084  ori 3, 31, 0
  01f6088  addic 5, 28, 32
  01f608c  li 6, 0
  01f6090  addic 7, 1, 208
  01f6094  li 9, 0
  01f6098  addic 8, 1, 212
  01f609c  ori 4, 29, 0
  01f60a0  li 10, 4
  01f60a4  bl 0x106840
  01f60a8  nop
  01f60ac  lwz 3, 212(1)
  01f60b0  cmpwi 29, 0
  01f60b4  lwz 4, 208(1)
  01f60b8  lfs 1, 212(1)
  01f60bc  bt 2, 0x1f60d8
  01f60c0  lwz 29, 32(29)
  01f60c4  cmpwi 29, 0
  01f60c8  bt 2, 0x1f60d8
  01f60cc  lhz 5, 166(29)
  01f60d0  cmpwi 5, 859
  01f60d4  bt 2, 0x1f6114
  01f60d8  cmpwi 4, 1
  01f60dc  bt 2, 0x1f610c
  01f60e0  cmpwi 3, 0
  01f60e4  bt 2, 0x1f610c
  01f60e8  lfs 2, 32(28)
  01f60ec  li 3, 0
  01f60f0  fsubs 1, 2, 1
  01f60f4  li 4, 4
  01f60f8  stfs 1, 32(28)
  01f60fc  lhz 5, 52(31)
  01f6100  stb 4, 32(31)
  01f6104  rlwimi 5, 3, 0, 19, 19
  01f6108  sth 5, 52(31)
  01f610c  li 3, 255
  01f6110  stb 3, 164(31)
  01f6114  lis 4, 31
  01f6118  ori 3, 31, 0
  01f611c  addi 5, 4, 24572
  01f6120  addic 4, 30, 96
  01f6124  lfs 1, 0(5)
  01f6128  bl 0x495490
  01f612c  nop
  01f6130  addic 3, 30, 100
  01f6134  bl 0x4fff60
  01f6138  nop
  01f613c  lbz 4, 32(31)
  01f6140  lbz 3, 83(31)
  01f6144  cmpwi 4, 4
  01f6148  bt 2, 0x1f6390
  01f614c  cmpwi 4, 3
  01f6150  bt 2, 0x1f62c0
  01f6154  cmpwi 4, 2
  01f6158  bt 2, 0x1f6264
  01f615c  cmpwi 4, 1
  01f6160  bt 2, 0x1f6180
  01f6164  cmpwi 4, 0
  01f6168  bf 2, 0x1f6414
  01f616c  li 3, 0
  01f6170  li 4, 1
  01f6174  stw 3, 100(30)
  01f6178  stb 4, 32(31)
  01f617c  b 0x1f6414
  01f6180  lwz 4, 96(30)
  01f6184  cmpwi 4, 0
  01f6188  bt 2, 0x1f621c
  01f618c  lfs 1, 20(31)
  01f6190  lfs 2, 20(4)
  01f6194  lfs 3, 16(31)
  01f6198  fsubs 1, 1, 2
  01f619c  lfs 2, 16(4)
  01f61a0  fsubs 2, 3, 2
  01f61a4  lis 4, 31
  01f61a8  addi 4, 4, 24572
  01f61ac  fmuls 1, 1, 1
  01f61b0  fmadds 1, 2, 2, 1
  01f61b4  lfs 2, 4(4)
  01f61b8  fsqrts 1, 1
  01f61bc  fcmpu 0, 1, 2
  01f61c0  cror 6, 1, 2
  01f61c4  bt 6, 0x1f621c
  01f61c8  lwz 4, 100(30)
  01f61cc  cmpwi 4, 0
  01f61d0  bf 2, 0x1f621c
  01f61d4  lis 3, 31
  01f61d8  vspltisw 2, -1
  01f61dc  li 4, 2
  01f61e0  addi 3, 3, 24572
  01f61e4  li 6, 8
  01f61e8  lis 5, 114
  01f61ec  stb 4, 32(31)
  01f61f0  li 4, -3056
  01f61f4  vslw 2, 2, 2
  01f61f8  <unknown>
  01f61fc  li 3, 100
  01f6200  vspltw 3, 3, 0
  01f6204  <unknown>
  01f6208  vmaddfp 2, 4, 3, 2
  01f620c  vctsxs 2, 2, 0
  01f6210  vspltw 2, 2, 0
  01f6214  stvewx 2, 3, 30
  01f6218  b 0x1f6414
  01f621c  cmpwi 3, 0
  01f6220  bt 2, 0x1f6414
  01f6224  lis 3, 31
  01f6228  lis 4, 114
  01f622c  addi 3, 3, 24572
  01f6230  li 5, 0
  01f6234  lfs 1, 12(3)
  01f6238  lfs 2, -3056(4)
  01f623c  ori 3, 31, 0
  01f6240  fmuls 1, 2, 1
  01f6244  li 4, 0
  01f6248  fctiwz 1, 1
  01f624c  stfd 1, 216(1)
  01f6250  lwz 6, 220(1)
  01f6254  extsw 6, 6
  01f6258  bl 0xfddc0
  01f625c  nop
  01f6260  b 0x1f6414
  01f6264  cmpwi 3, 1
  01f6268  bt 2, 0x1f62a8
  01f626c  lis 3, 31
  01f6270  lis 4, 114
  01f6274  addi 3, 3, 24572
  01f6278  li 5, 0
  01f627c  lfs 1, 12(3)
  01f6280  lfs 2, -3056(4)
  01f6284  ori 3, 31, 0
  01f6288  fmuls 1, 2, 1
  01f628c  li 4, 1
  01f6290  fctiwz 1, 1
  01f6294  stfd 1, 216(1)
  01f6298  lwz 6, 220(1)
  01f629c  extsw 6, 6
  01f62a0  bl 0xfddc0
  01f62a4  nop
  01f62a8  lwz 3, 100(30)
  01f62ac  cmpwi 3, 0
  01f62b0  bf 2, 0x1f6414
  01f62b4  li 3, 3
  01f62b8  stb 3, 32(31)
  01f62bc  b 0x1f6414
  01f62c0  cmpwi 3, 2
  01f62c4  bt 2, 0x1f6304
  01f62c8  lis 3, 31
  01f62cc  lis 4, 114
  01f62d0  addi 3, 3, 24572
  01f62d4  li 5, 0
  01f62d8  lfs 1, 12(3)
  01f62dc  lfs 2, -3056(4)
  01f62e0  ori 3, 31, 0
  01f62e4  li 4, 2
  01f62e8  fmuls 1, 2, 1
  01f62ec  fctiwz 1, 1
  01f62f0  stfd 1, 216(1)
  01f62f4  lwz 6, 220(1)
  01f62f8  extsw 6, 6
  01f62fc  bl 0xfddc0
  01f6300  nop
  01f6304  lis 3, 31
  01f6308  addi 4, 3, 24572
  01f630c  ori 3, 31, 0
  01f6310  lfs 1, 16(4)
  01f6314  bl 0x113e88
  01f6318  nop
  01f631c  cmpwi 3, 0
  01f6320  bt 2, 0x1f6338
  01f6324  ori 3, 31, 0
  01f6328  bl 0x1f5ca0
  01f632c  li 3, 3
  01f6330  stb 3, 32(31)
  01f6334  b 0x1f6414
  01f6338  lbz 3, 112(31)
  01f633c  rlwinm 3, 3, 0, 30, 30
  01f6340  cmpwi 3, 0
  01f6344  bt 2, 0x1f6414
  01f6348  lis 3, 31
  01f634c  vspltisw 2, -1
  01f6350  li 5, 20
  01f6354  addi 3, 3, 24572
  01f6358  lis 4, 114
  01f635c  li 6, -3056
  01f6360  vslw 2, 2, 2
  01f6364  <unknown>
  01f6368  li 3, 100
  01f636c  vspltw 3, 3, 0
  01f6370  <unknown>
  01f6374  li 4, 1
  01f6378  vmaddfp 2, 4, 3, 2
  01f637c  vctsxs 2, 2, 0
  01f6380  vspltw 2, 2, 0
  01f6384  stvewx 2, 3, 30
  01f6388  stb 4, 32(31)
  01f638c  b 0x1f6414
  01f6390  lis 3, 31
  01f6394  li 7, -1
  01f6398  addi 3, 3, 24572
  01f639c  li 6, 1
  01f63a0  li 11, 0
  01f63a4  addic 4, 1, 192
  01f63a8  li 5, 0
  01f63ac  lfs 1, 24(3)
  01f63b0  lfs 5, 28(3)
  01f63b4  li 8, 10
  01f63b8  lfs 6, 32(3)
  01f63bc  li 9, 5
  01f63c0  lfs 7, 36(3)
  01f63c4  li 10, 4
  01f63c8  std 7, 144(1)
  01f63cc  ori 3, 31, 0
  01f63d0  std 6, 160(1)
  01f63d4  fmr 2, 1
  01f63d8  std 6, 168(1)
  01f63dc  fmr 3, 1
  01f63e0  std 7, 176(1)
  01f63e4  fmr 4, 1
  01f63e8  std 11, 184(1)
  01f63ec  bl 0x10e030
  01f63f0  nop
  01f63f4  ori 3, 31, 0
  01f63f8  li 4, 0
  01f63fc  li 5, -1
  01f6400  bl 0xfd8d0
  01f6404  nop
  01f6408  ori 3, 31, 0
  01f640c  bl 0xefb38
  01f6410  nop
  01f6414  ld 0, 288(1)
  01f6418  mtlr 0
  01f641c  ld 28, 240(1)
  01f6420  ld 29, 248(1)
  01f6424  ld 30, 256(1)
  01f6428  ld 31, 264(1)
  01f642c  addi 1, 1, 272
  01f6430  blr
