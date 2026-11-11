# game/update/moby729.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

UpdateMoby_729:   # 0x435b88, 0x750 bytes
  0435b88  stdu 1, -464(1)
  0435b8c  mflr 0
  0435b90  std 0, 480(1)
  0435b94  stfd 14, 320(1)
  0435b98  stfd 15, 328(1)
  0435b9c  stfd 16, 336(1)
  0435ba0  stfd 17, 344(1)
  0435ba4  stfd 18, 352(1)
  0435ba8  stfd 19, 360(1)
  0435bac  stfd 20, 368(1)
  0435bb0  stfd 21, 376(1)
  0435bb4  stfd 22, 384(1)
  0435bb8  stfd 23, 392(1)
  0435bbc  stfd 24, 400(1)
  0435bc0  stfd 25, 408(1)
  0435bc4  stfd 26, 416(1)
  0435bc8  stfd 27, 424(1)
  0435bcc  stfd 28, 432(1)
  0435bd0  stfd 29, 440(1)
  0435bd4  stfd 30, 448(1)
  0435bd8  stfd 31, 456(1)
  0435bdc  std 31, 312(1)
  0435be0  ori 31, 3, 0
  0435be4  lis 3, 165
  0435be8  addic 5, 3, 17860
  0435bec  lhz 3, 178(31)
  0435bf0  extsh 4, 3
  0435bf4  lbzx 5, 5, 4
  0435bf8  std 30, 304(1)
  0435bfc  std 29, 296(1)
  0435c00  std 28, 288(1)
  0435c04  cmpwi 5, 0
  0435c08  bf 2, 0x435c54
  0435c0c  lis 5, 161
  0435c10  lis 6, 151
  0435c14  srawi 4, 4, 5
  0435c18  addic 5, 5, -13028
  0435c1c  sldi 4, 4, 2
  0435c20  clrlwi 3, 3, 27
  0435c24  lwz 6, -25488(6)
  0435c28  addc 4, 4, 5
  0435c2c  std 5, 192(1)
  0435c30  slwi 5, 6, 8
  0435c34  clrldi 4, 4, 32
  0435c38  extsw 5, 5
  0435c3c  li 6, 1
  0435c40  slw 3, 6, 3
  0435c44  lwzx 4, 4, 5
  0435c48  and 3, 4, 3
  0435c4c  cmpwi 3, 0
  0435c50  bt 2, 0x435c64
  0435c54  ori 3, 31, 0
  0435c58  bl 0xefb38
  0435c5c  nop
  0435c60  b 0x436270
  0435c64  ori 3, 31, 0
  0435c68  lis 4, 128
  0435c6c  li 5, 0
  0435c70  bl 0x10675c
  0435c74  nop
  0435c78  cmpwi 3, 0
  0435c7c  bt 2, 0x436270
  0435c80  li 3, 0
  0435c84  li 4, 0
  0435c88  ori 5, 31, 0
  0435c8c  bl 0x15d12c
  0435c90  nop
  0435c94  lis 3, 67
  0435c98  li 30, 0
  0435c9c  addi 3, 3, 23344
  0435ca0  ori 29, 30, 0
  0435ca4  lfs 1, 12(3)
  0435ca8  lfs 2, 16(3)
  0435cac  lfs 3, 20(3)
  0435cb0  lfs 26, 0(3)
  0435cb4  lfs 24, 4(3)
  0435cb8  lfs 25, 8(3)
  0435cbc  lfs 4, 48(3)
  0435cc0  lfs 18, 24(3)
  0435cc4  lfs 19, 28(3)
  0435cc8  lfs 20, 32(3)
  0435ccc  lfs 21, 36(3)
  0435cd0  lfs 22, 40(3)
  0435cd4  lfs 23, 44(3)
  0435cd8  stfd 1, 224(1)
  0435cdc  stfd 2, 216(1)
  0435ce0  stfd 3, 208(1)
  0435ce4  lfs 31, 52(3)
  0435ce8  lfs 30, 56(3)
  0435cec  lfs 29, 60(3)
  0435cf0  lfs 28, 64(3)
  0435cf4  stfd 4, 200(1)
  0435cf8  fmr 1, 24
  0435cfc  stw 29, 144(1)
  0435d00  fmr 2, 25
  0435d04  stw 29, 148(1)
  0435d08  stw 29, 152(1)
  0435d0c  stw 29, 156(1)
  0435d10  bl 0xfcbe8
  0435d14  nop
  0435d18  stfs 1, 144(1)
  0435d1c  fmr 1, 24
  0435d20  fmr 2, 25
  0435d24  bl 0xfcbe8
  0435d28  nop
  0435d2c  stfs 1, 148(1)
  0435d30  fmr 2, 25
  0435d34  fmr 1, 24
  0435d38  bl 0xfcbe8
  0435d3c  nop
  0435d40  stfs 1, 152(1)
  0435d44  stw 29, 160(1)
  0435d48  stw 29, 164(1)
  0435d4c  lfd 2, 216(1)
  0435d50  stw 29, 168(1)
  0435d54  lfd 1, 224(1)
  0435d58  stw 29, 172(1)
  0435d5c  bl 0xfcbe8
  0435d60  nop
  0435d64  lfd 2, 208(1)
  0435d68  lfs 3, 72(31)
  0435d6c  fadds 2, 3, 2
  0435d70  fsubs 3, 18, 2
  0435d74  fsubs 4, 19, 2
  0435d78  fsub 5, 2, 3
  0435d7c  fsel 2, 5, 3, 2
  0435d80  fsub 3, 4, 2
  0435d84  fsel 3, 3, 4, 2
  0435d88  fmr 2, 25
  0435d8c  fmuls 4, 3, 3
  0435d90  fmuls 5, 4, 3
  0435d94  fmuls 6, 4, 5
  0435d98  fmadds 3, 5, 20, 3
  0435d9c  fmuls 5, 4, 6
  0435da0  fmadds 3, 6, 21, 3
  0435da4  fmuls 4, 4, 5
  0435da8  fmadds 3, 5, 22, 3
  0435dac  fmadds 3, 4, 23, 3
  0435db0  fmuls 3, 1, 3
  0435db4  fmr 1, 24
  0435db8  stfs 3, 160(1)
  0435dbc  bl 0xfcbe8
  0435dc0  nop
  0435dc4  lfs 2, 72(31)
  0435dc8  fsubs 3, 18, 2
  0435dcc  fsubs 4, 19, 2
  0435dd0  fsub 5, 2, 3
  0435dd4  fsel 2, 5, 3, 2
  0435dd8  lfd 5, 200(1)
  0435ddc  fsub 3, 4, 2
  0435de0  fsel 2, 3, 4, 2
  0435de4  fmuls 3, 2, 2
  0435de8  fmuls 4, 3, 2
  0435dec  fmuls 6, 3, 4
  0435df0  fmadds 4, 4, 20, 2
  0435df4  fmr 2, 5
  0435df8  fmuls 5, 3, 6
  0435dfc  fmadds 4, 6, 21, 4
  0435e00  fmuls 3, 3, 5
  0435e04  fmadds 4, 5, 22, 4
  0435e08  fmadds 3, 3, 23, 4
  0435e0c  fmuls 3, 1, 3
  0435e10  fmr 1, 26
  0435e14  stfs 3, 164(1)
  0435e18  bl 0xfcbe8
  0435e1c  nop
  0435e20  lfs 2, 160(1)
  0435e24  lfs 3, 16(31)
  0435e28  lfs 4, 164(1)
  0435e2c  fadds 3, 2, 3
  0435e30  lfs 2, 20(31)
  0435e34  lfs 5, 24(31)
  0435e38  fadds 4, 4, 2
  0435e3c  fadds 5, 1, 5
  0435e40  fmr 1, 31
  0435e44  fmr 2, 30
  0435e48  stfs 3, 160(1)
  0435e4c  stfs 4, 164(1)
  0435e50  stfs 5, 168(1)
  0435e54  bl 0xfcbe8
  0435e58  nop
  0435e5c  lfs 3, 148(1)
  0435e60  lfs 4, 144(1)
  0435e64  fmuls 2, 3, 3
  0435e68  lfs 5, 152(1)
  0435e6c  lis 3, 114
  0435e70  lfs 6, -3052(3)
  0435e74  fmadds 2, 4, 4, 2
  0435e78  fmuls 6, 1, 6
  0435e7c  fmr 1, 31
  0435e80  fmadds 2, 5, 5, 2
  0435e84  fsqrts 7, 2
  0435e88  fmr 2, 30
  0435e8c  fdivs 6, 6, 7
  0435e90  fsub 8, 26, 7
  0435e94  fsub 9, 26, 7
  0435e98  fsub 10, 26, 7
  0435e9c  fsub 11, 7, 26
  0435ea0  fsub 12, 7, 26
  0435ea4  fsub 7, 7, 26
  0435ea8  fmuls 4, 4, 6
  0435eac  fmuls 3, 3, 6
  0435eb0  fmuls 5, 5, 6
  0435eb4  fsel 6, 8, 26, 4
  0435eb8  fsel 8, 9, 26, 3
  0435ebc  fsel 9, 10, 26, 5
  0435ec0  fsel 4, 11, 6, 4
  0435ec4  fsel 3, 12, 8, 3
  0435ec8  fsel 5, 7, 9, 5
  0435ecc  stfs 4, 144(1)
  0435ed0  stfs 3, 148(1)
  0435ed4  stfs 5, 152(1)
  0435ed8  bl 0xfcbe8
  0435edc  nop
  0435ee0  li 3, 120
  0435ee4  fmuls 27, 1, 29
  0435ee8  li 4, 240
  0435eec  bl 0xfe484
  0435ef0  nop
  0435ef4  extsw 3, 3
  0435ef8  lis 5, 24440
  0435efc  std 3, 232(1)
  0435f00  lis 3, 114
  0435f04  lis 6, 24
  0435f08  addic 4, 1, 144
  0435f0c  ori 5, 5, 30840
  0435f10  lfs 2, -3056(3)
  0435f14  lfd 1, 232(1)
  0435f18  addic 3, 1, 160
  0435f1c  fcfid 3, 1
  0435f20  ori 6, 6, 6168
  0435f24  fmr 1, 27
  0435f28  frsp 3, 3
  0435f2c  fadds 3, 3, 28
  0435f30  fmuls 2, 2, 3
  0435f34  fctiwz 2, 2
  0435f38  stfd 2, 232(1)
  0435f3c  lwz 8, 236(1)
  0435f40  extsw 8, 8
  0435f44  bl 0x126dd8
  0435f48  nop
  0435f4c  addic 30, 30, 1
  0435f50  cmpwi 30, 500
  0435f54  bt 0, 0x435cf8
  0435f58  lis 3, 67
  0435f5c  ori 30, 29, 0
  0435f60  addi 3, 3, 23344
  0435f64  lfs 14, 68(3)
  0435f68  lfs 15, 72(3)
  0435f6c  lfs 16, 76(3)
  0435f70  lfs 17, 80(3)
  0435f74  fmr 1, 24
  0435f78  fmr 2, 25
  0435f7c  bl 0xfcbe8
  0435f80  nop
  0435f84  fmr 31, 1
  0435f88  fmr 1, 24
  0435f8c  fmr 2, 25
  0435f90  bl 0xfcbe8
  0435f94  nop
  0435f98  fmr 30, 1
  0435f9c  fmr 1, 24
  0435fa0  fmr 2, 25
  0435fa4  bl 0xfcbe8
  0435fa8  nop
  0435fac  lfd 2, 216(1)
  0435fb0  fmr 29, 1
  0435fb4  lfd 1, 224(1)
  0435fb8  bl 0xfcbe8
  0435fbc  nop
  0435fc0  lfd 2, 208(1)
  0435fc4  lfs 3, 72(31)
  0435fc8  fadds 2, 3, 2
  0435fcc  fmr 28, 1
  0435fd0  stfs 23, 252(1)
  0435fd4  fmr 1, 24
  0435fd8  fsubs 3, 18, 2
  0435fdc  fsubs 4, 19, 2
  0435fe0  fsub 5, 2, 3
  0435fe4  fsel 2, 5, 3, 2
  0435fe8  fsub 3, 4, 2
  0435fec  fsel 3, 3, 4, 2
  0435ff0  fmr 2, 25
  0435ff4  fmuls 4, 3, 3
  0435ff8  fmuls 5, 4, 3
  0435ffc  fmuls 6, 4, 5
  0436000  fmadds 3, 5, 20, 3
  0436004  fmuls 5, 4, 6
  0436008  fmadds 3, 6, 21, 3
  043600c  fmuls 4, 4, 5
  0436010  fmadds 3, 5, 22, 3
  0436014  fmadds 27, 4, 23, 3
  0436018  bl 0xfcbe8
  043601c  nop
  0436020  lfs 2, 72(31)
  0436024  fsubs 3, 18, 2
  0436028  fsubs 4, 19, 2
  043602c  stfs 18, 268(1)
  0436030  stfs 19, 248(1)
  0436034  fmr 19, 1
  0436038  fmr 1, 25
  043603c  fsub 5, 2, 3
  0436040  fsel 2, 5, 3, 2
  0436044  fsub 3, 4, 2
  0436048  fsel 3, 3, 4, 2
  043604c  lfd 2, 200(1)
  0436050  stfs 20, 264(1)
  0436054  stfs 21, 260(1)
  0436058  stfs 22, 256(1)
  043605c  fmuls 4, 3, 3
  0436060  fmuls 5, 4, 3
  0436064  fmuls 6, 4, 5
  0436068  fmadds 3, 5, 20, 3
  043606c  fmuls 5, 4, 6
  0436070  fmadds 3, 6, 21, 3
  0436074  fmuls 4, 4, 5
  0436078  fmadds 3, 5, 22, 3
  043607c  fmadds 23, 4, 23, 3
  0436080  bl 0xfcbe8
  0436084  nop
  0436088  lfs 21, 16(31)
  043608c  fmr 22, 1
  0436090  lfs 20, 20(31)
  0436094  fmr 2, 14
  0436098  lfs 18, 24(31)
  043609c  fmr 1, 25
  04360a0  bl 0xfcbe8
  04360a4  nop
  04360a8  fmuls 2, 30, 30
  04360ac  lis 3, 114
  04360b0  lfs 3, -3052(3)
  04360b4  fmadds 2, 31, 31, 2
  04360b8  fmuls 1, 1, 3
  04360bc  li 3, 3
  04360c0  fmadds 2, 29, 29, 2
  04360c4  fsqrts 2, 2
  04360c8  fdivs 1, 1, 2
  04360cc  fsub 3, 26, 2
  04360d0  fsub 4, 26, 2
  04360d4  fsub 5, 26, 2
  04360d8  fsub 6, 2, 26
  04360dc  fsub 7, 2, 26
  04360e0  fsub 2, 2, 26
  04360e4  fmuls 8, 29, 1
  04360e8  fmuls 9, 30, 1
  04360ec  fmuls 1, 31, 1
  04360f0  fsel 3, 3, 26, 8
  04360f4  fsel 4, 4, 26, 9
  04360f8  fsel 5, 5, 26, 1
  04360fc  fsel 31, 6, 3, 8
  0436100  fsel 30, 7, 4, 9
  0436104  fsel 29, 2, 5, 1
  0436108  bl 0xfc620
  043610c  nop
  0436110  sldi 3, 3, 2
  0436114  li 4, 698
  0436118  fmr 1, 15
  043611c  addc 3, 3, 1
  0436120  fmr 2, 16
  0436124  li 5, 697
  0436128  clrldi 3, 3, 32
  043612c  li 6, 696
  0436130  stw 4, 184(1)
  0436134  stw 5, 180(1)
  0436138  stw 6, 176(1)
  043613c  lwz 3, 176(3)
  0436140  stfs 16, 272(1)
  0436144  extsw 28, 3
  0436148  bl 0xfcbe8
  043614c  nop
  0436150  li 3, 60
  0436154  fmr 16, 1
  0436158  li 4, 180
  043615c  bl 0xfe484
  0436160  nop
  0436164  fmadds 3, 28, 27, 21
  0436168  stfs 29, 64(1)
  043616c  fadds 4, 22, 18
  0436170  stfs 31, 72(1)
  0436174  fmadds 5, 19, 23, 20
  0436178  stfs 26, 60(1)
  043617c  stfs 30, 68(1)
  0436180  ori 9, 3, 0
  0436184  stfs 26, 76(1)
  0436188  ori 7, 28, 0
  043618c  fmr 1, 16
  0436190  fmr 2, 25
  0436194  stfs 3, 48(1)
  0436198  stfs 4, 56(1)
  043619c  stfs 5, 52(1)
  04361a0  fmr 3, 25
  04361a4  std 29, 128(1)
  04361a8  fmr 4, 17
  04361ac  ld 5, 64(1)
  04361b0  ld 6, 72(1)
  04361b4  ld 3, 48(1)
  04361b8  ld 4, 56(1)
  04361bc  bl 0x425540
  04361c0  nop
  04361c4  lfs 19, 248(1)
  04361c8  addic 30, 30, 1
  04361cc  lfs 23, 252(1)
  04361d0  lfs 22, 256(1)
  04361d4  lfs 21, 260(1)
  04361d8  cmpwi 30, 100
  04361dc  lfs 20, 264(1)
  04361e0  lfs 18, 268(1)
  04361e4  lfs 16, 272(1)
  04361e8  bt 0, 0x435f74
  04361ec  lhz 5, 178(31)
  04361f0  lis 3, 151
  04361f4  ld 6, 192(1)
  04361f8  lis 4, 165
  04361fc  extsh 7, 5
  0436200  extsh 8, 5
  0436204  srawi 7, 7, 5
  0436208  lwz 3, -25488(3)
  043620c  sldi 7, 7, 2
  0436210  slwi 3, 3, 8
  0436214  addc 6, 7, 6
  0436218  extsw 3, 3
  043621c  clrldi 6, 6, 32
  0436220  srawi 8, 8, 5
  0436224  clrlwi 7, 5, 27
  0436228  li 9, 1
  043622c  addic 4, 4, 19920
  0436230  sldi 8, 8, 2
  0436234  slw 7, 9, 7
  0436238  lwzx 10, 6, 3
  043623c  clrlwi 5, 5, 27
  0436240  lis 11, 151
  0436244  or 7, 10, 7
  0436248  slw 5, 9, 5
  043624c  lwzx 10, 4, 8
  0436250  addic 11, 11, -16400
  0436254  or 5, 10, 5
  0436258  stwx 7, 6, 3
  043625c  ori 3, 31, 0
  0436260  stb 9, 14(11)
  0436264  stwx 5, 4, 8
  0436268  bl 0xefb38
  043626c  nop
  0436270  ld 0, 480(1)
  0436274  mtlr 0
  0436278  lfd 14, 320(1)
  043627c  lfd 15, 328(1)
  0436280  lfd 16, 336(1)
  0436284  lfd 17, 344(1)
  0436288  lfd 18, 352(1)
  043628c  lfd 19, 360(1)
  0436290  lfd 20, 368(1)
  0436294  lfd 21, 376(1)
  0436298  lfd 22, 384(1)
  043629c  lfd 23, 392(1)
  04362a0  lfd 24, 400(1)
  04362a4  lfd 25, 408(1)
  04362a8  lfd 26, 416(1)
  04362ac  lfd 27, 424(1)
  04362b0  lfd 28, 432(1)
  04362b4  lfd 29, 440(1)
  04362b8  lfd 30, 448(1)
  04362bc  lfd 31, 456(1)
  04362c0  ld 28, 288(1)
  04362c4  ld 29, 296(1)
  04362c8  ld 30, 304(1)
  04362cc  ld 31, 312(1)
  04362d0  addi 1, 1, 464
  04362d4  blr
