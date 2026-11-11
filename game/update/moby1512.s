# game/update/moby1512.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1512_0028f3f0:   # 0x28f3f0, 0x3c0 bytes
  028f3f0  stdu 1, -400(1)
  028f3f4  mflr 0
  028f3f8  std 0, 416(1)
  028f3fc  stfd 18, 288(1)
  028f400  stfd 19, 296(1)
  028f404  stfd 20, 304(1)
  028f408  stfd 21, 312(1)
  028f40c  stfd 22, 320(1)
  028f410  stfd 23, 328(1)
  028f414  stfd 24, 336(1)
  028f418  stfd 25, 344(1)
  028f41c  stfd 26, 352(1)
  028f420  stfd 27, 360(1)
  028f424  stfd 28, 368(1)
  028f428  stfd 29, 376(1)
  028f42c  stfd 30, 384(1)
  028f430  stfd 31, 392(1)
  028f434  std 30, 272(1)
  028f438  ori 30, 3, 0
  028f43c  std 29, 264(1)
  028f440  li 3, 11
  028f444  lis 4, 41
  028f448  std 31, 280(1)
  028f44c  addi 29, 4, -3100
  028f450  lwz 31, 120(30)
  028f454  bl 0x685c4
  028f458  nop
  028f45c  std 3, 232(1)
  028f460  li 4, 2
  028f464  li 3, 0
  028f468  li 5, 0
  028f46c  li 6, 1
  028f470  li 7, 128
  028f474  bl 0x502ea8
  028f478  nop
  028f47c  std 3, 248(1)
  028f480  lis 9, 0
  028f484  li 3, 0
  028f488  li 4, 0
  028f48c  li 5, 1
  028f490  li 6, 1
  028f494  li 7, 1
  028f498  li 8, 0
  028f49c  ori 9, 9, 65424
  028f4a0  bl 0x502fd4
  028f4a4  nop
  028f4a8  li 4, 1
  028f4ac  std 3, 240(1)
  028f4b0  li 5, 0
  028f4b4  li 3, 1
  028f4b8  li 6, 0
  028f4bc  li 7, 0
  028f4c0  li 8, 0
  028f4c4  bl 0x502f08
  028f4c8  nop
  028f4cc  lis 4, 123
  028f4d0  lfs 19, 228(30)
  028f4d4  lfs 1, 20(30)
  028f4d8  lis 5, 149
  028f4dc  lfs 20, 224(30)
  028f4e0  addic 5, 5, 5056
  028f4e4  lfs 18, -19808(4)
  028f4e8  lfs 2, 16(30)
  028f4ec  fmadds 19, 19, 18, 1
  028f4f0  lfs 1, 232(30)
  028f4f4  lfs 4, 324(5)
  028f4f8  fmadds 20, 20, 18, 2
  028f4fc  lfs 2, 24(30)
  028f500  lfs 3, 320(5)
  028f504  fmadds 18, 1, 18, 2
  028f508  lfs 5, 328(5)
  028f50c  std 3, 224(1)
  028f510  lfs 27, 0(29)
  028f514  fsubs 4, 4, 19
  028f518  fsubs 3, 3, 20
  028f51c  fsubs 5, 5, 18
  028f520  fmr 23, 27
  028f524  fmuls 1, 4, 4
  028f528  li 3, 0
  028f52c  lfs 31, 28(30)
  028f530  lis 4, 16256
  028f534  stw 3, 192(1)
  028f538  stw 3, 196(1)
  028f53c  fmr 22, 23
  028f540  stw 3, 200(1)
  028f544  fmadds 2, 3, 3, 1
  028f548  lfs 1, 4(29)
  028f54c  stw 4, 204(1)
  028f550  stw 4, 208(1)
  028f554  stw 3, 212(1)
  028f558  stw 4, 216(1)
  028f55c  fmr 21, 22
  028f560  stw 4, 220(1)
  028f564  fmadds 2, 5, 5, 2
  028f568  lfs 30, 332(5)
  028f56c  lbz 3, 103(31)
  028f570  fsqrts 6, 2
  028f574  fcmpu 0, 6, 21
  028f578  bt 2, 0x28f5c8
  028f57c  frsqrte 6, 2
  028f580  lis 4, 41
  028f584  addi 4, 4, -3100
  028f588  lfs 7, 8(4)
  028f58c  fmuls 8, 2, 6
  028f590  fmuls 9, 7, 6
  028f594  fnmsubs 8, 8, 6, 1
  028f598  fmadds 6, 8, 9, 6
  028f59c  fmuls 8, 2, 6
  028f5a0  fmuls 9, 7, 6
  028f5a4  fnmsubs 8, 8, 6, 1
  028f5a8  fmadds 6, 8, 9, 6
  028f5ac  fmuls 2, 2, 6
  028f5b0  fmuls 7, 7, 6
  028f5b4  fnmsubs 2, 2, 6, 1
  028f5b8  fmadds 23, 2, 7, 6
  028f5bc  fmuls 21, 3, 23
  028f5c0  fmuls 22, 4, 23
  028f5c4  fmuls 23, 5, 23
  028f5c8  fmuls 2, 22, 22
  028f5cc  fmr 25, 27
  028f5d0  fneg 2, 2
  028f5d4  fmr 24, 25
  028f5d8  fneg 2, 2
  028f5dc  fmadds 2, 21, 21, 2
  028f5e0  fsqrts 3, 2
  028f5e4  fcmpu 0, 3, 24
  028f5e8  bt 2, 0x28f638
  028f5ec  frsqrte 3, 2
  028f5f0  lis 4, 41
  028f5f4  addi 4, 4, -3100
  028f5f8  lfs 4, 8(4)
  028f5fc  fmuls 5, 2, 3
  028f600  fmuls 6, 4, 3
  028f604  fnmsubs 5, 5, 3, 1
  028f608  fmadds 3, 5, 6, 3
  028f60c  fmuls 5, 2, 3
  028f610  fmuls 6, 4, 3
  028f614  fnmsubs 5, 5, 3, 1
  028f618  fmadds 3, 5, 6, 3
  028f61c  fmuls 2, 2, 3
  028f620  fmuls 4, 4, 3
  028f624  fnmsubs 1, 2, 3, 1
  028f628  fmadds 25, 1, 4, 3
  028f62c  fmuls 24, 22, 25
  028f630  fmuls 25, 21, 25
  028f634  fneg 24, 24
  028f638  lis 4, 123
  028f63c  cmpwi 3, 0
  028f640  fmuls 29, 23, 25
  028f644  fmuls 28, 22, 24
  028f648  lfs 26, -19804(4)
  028f64c  bt 2, 0x28f670
  028f650  li 3, 8
  028f654  bl 0xfc620
  028f658  nop
  028f65c  cmpwi 3, 0
  028f660  bf 2, 0x28f670
  028f664  lwz 3, 96(31)
  028f668  srawi 3, 3, 1
  028f66c  stw 3, 96(31)
  028f670  lwz 6, 96(31)
  028f674  lwz 7, 104(31)
  028f678  lis 4, 123
  028f67c  slwi 6, 6, 24
  028f680  fmsubs 29, 22, 27, 29
  028f684  li 5, 4
  028f688  fmadds 1, 21, 26, 20
  028f68c  or 6, 6, 7
  028f690  fmsubs 2, 23, 24, 27
  028f694  addic 3, 1, 112
  028f698  fmadds 3, 22, 26, 19
  028f69c  addic 4, 4, -19792
  028f6a0  fmsubs 4, 21, 25, 28
  028f6a4  mtctr 5
  028f6a8  fmadds 5, 23, 26, 18
  028f6ac  stw 6, 188(1)
  028f6b0  stw 6, 184(1)
  028f6b4  stw 6, 180(1)
  028f6b8  stw 6, 176(1)
  028f6bc  lfs 6, 112(31)
  028f6c0  lfs 7, 0(4)
  028f6c4  fmuls 7, 7, 6
  028f6c8  fmadds 9, 7, 23, 27
  028f6cc  fmuls 10, 7, 30
  028f6d0  stfs 7, 0(3)
  028f6d4  lfs 8, 4(4)
  028f6d8  fmuls 8, 8, 6
  028f6dc  fmuls 11, 8, 24
  028f6e0  fmuls 12, 8, 25
  028f6e4  stfs 8, 4(3)
  028f6e8  lfs 8, 8(4)
  028f6ec  fmuls 6, 8, 6
  028f6f0  fmadds 8, 7, 21, 11
  028f6f4  fmadds 7, 7, 22, 12
  028f6f8  fmadds 9, 4, 6, 9
  028f6fc  stfs 6, 8(3)
  028f700  lfs 11, 12(4)
  028f704  addic 4, 4, 16
  028f708  fmadds 8, 29, 6, 8
  028f70c  fmadds 6, 2, 6, 7
  028f710  fmadds 7, 11, 31, 10
  028f714  fmadds 9, 5, 11, 9
  028f718  fmadds 8, 1, 11, 8
  028f71c  fmadds 6, 3, 11, 6
  028f720  stfs 7, 12(3)
  028f724  stfs 9, 8(3)
  028f728  stfs 8, 0(3)
  028f72c  stfs 6, 4(3)
  028f730  addic 3, 3, 16
  028f734  bdnz 0x28f6bc
  028f738  lis 4, 161
  028f73c  addic 3, 1, 112
  028f740  addic 6, 4, 24396
  028f744  li 4, 0
  028f748  li 5, 0
  028f74c  li 7, 9
  028f750  lwz 6, 28(6)
  028f754  bl 0x72280
  028f758  nop
  028f75c  ld 0, 416(1)
  028f760  mtlr 0
  028f764  lfd 18, 288(1)
  028f768  lfd 19, 296(1)
  028f76c  lfd 20, 304(1)
  028f770  lfd 21, 312(1)
  028f774  lfd 22, 320(1)
  028f778  lfd 23, 328(1)
  028f77c  lfd 24, 336(1)
  028f780  lfd 25, 344(1)
  028f784  lfd 26, 352(1)
  028f788  lfd 27, 360(1)
  028f78c  lfd 28, 368(1)
  028f790  lfd 29, 376(1)
  028f794  lfd 30, 384(1)
  028f798  lfd 31, 392(1)
  028f79c  ld 29, 264(1)
  028f7a0  ld 30, 272(1)
  028f7a4  ld 31, 280(1)
  028f7a8  addi 1, 1, 400
  028f7ac  blr

UpdateMoby_1512:   # 0x28f7d0, 0x97c bytes
  028f7d0  stdu 1, -352(1)
  028f7d4  mflr 0
  028f7d8  std 0, 368(1)
  028f7dc  stfd 29, 328(1)
  028f7e0  stfd 30, 336(1)
  028f7e4  stfd 31, 344(1)
  028f7e8  std 31, 320(1)
  028f7ec  ori 31, 3, 0
  028f7f0  lis 3, 41
  028f7f4  lis 4, 16448
  028f7f8  addi 5, 3, -2128
  028f7fc  addic 3, 1, 128
  028f800  lfs 1, 16(31)
  028f804  lfs 2, 20(31)
  028f808  stfs 1, 128(1)
  028f80c  lfs 1, 24(31)
  028f810  std 29, 304(1)
  028f814  stfs 2, 132(1)
  028f818  lwz 29, 120(31)
  028f81c  stfs 1, 136(1)
  028f820  stw 4, 140(1)
  028f824  std 30, 312(1)
  028f828  std 28, 296(1)
  028f82c  std 27, 288(1)
  028f830  std 26, 280(1)
  028f834  std 25, 272(1)
  028f838  std 24, 264(1)
  028f83c  std 23, 256(1)
  028f840  std 22, 248(1)
  028f844  std 21, 240(1)
  028f848  lfs 1, 0(5)
  028f84c  bl 0x502910
  028f850  nop
  028f854  cmpwi 3, -1
  028f858  bt 2, 0x290104
  028f85c  lbz 3, 32(31)
  028f860  cmpwi 3, 4
  028f864  cmpwi 1, 3, 0
  028f868  cmpwi 6, 3, 2
  028f86c  cmpwi 7, 3, 3
  028f870  bt 2, 0x28f940
  028f874  bt 30, 0x28fd0c
  028f878  bt 26, 0x28f8d4
  028f87c  bf 6, 0x290104
  028f880  addic 4, 31, 64
  028f884  addic 3, 31, 192
  028f888  bl 0x500b64
  028f88c  nop
  028f890  lwz 4, 4(29)
  028f894  li 3, 1
  028f898  cmpwi 4, 0
  028f89c  bf 2, 0x28f8cc
  028f8a0  li 3, 0
  028f8a4  lwz 6, 0(29)
  028f8a8  li 4, 3
  028f8ac  subc 3, 3, 6
  028f8b0  li 5, 4
  028f8b4  cntlzw 3, 3
  028f8b8  subc 4, 4, 5
  028f8bc  sldi 3, 3, 58
  028f8c0  sradi 3, 3, 63
  028f8c4  and 3, 3, 4
  028f8c8  addc 3, 5, 3
  028f8cc  stb 3, 32(31)
  028f8d0  b 0x290104
  028f8d4  addic 3, 29, 40
  028f8d8  bl 0x4fff60
  028f8dc  nop
  028f8e0  cmpwi 3, 0
  028f8e4  bt 2, 0x290104
  028f8e8  lis 4, 41
  028f8ec  ori 3, 31, 0
  028f8f0  addi 5, 4, -2128
  028f8f4  addic 4, 31, 16
  028f8f8  li 6, -1
  028f8fc  lfs 1, 4(5)
  028f900  lfs 2, 8(5)
  028f904  bl 0x10fb28
  028f908  nop
  028f90c  lwz 3, 0(29)
  028f910  li 4, 0
  028f914  li 5, 3
  028f918  subc 3, 4, 3
  028f91c  li 4, 4
  028f920  cntlzw 3, 3
  028f924  subc 5, 5, 4
  028f928  sldi 3, 3, 58
  028f92c  sradi 3, 3, 63
  028f930  and 3, 3, 5
  028f934  addc 3, 4, 3
  028f938  stb 3, 32(31)
  028f93c  b 0x290104
  028f940  addic 3, 29, 36
  028f944  li 30, 1
  028f948  bl 0x4fff60
  028f94c  nop
  028f950  cmpwi 3, 0
  028f954  bt 2, 0x28f98c
  028f958  lis 3, 41
  028f95c  addi 3, 3, -2128
  028f960  lfs 1, 12(3)
  028f964  lfs 2, 16(3)
  028f968  bl 0xfcbe8
  028f96c  nop
  028f970  lis 3, 114
  028f974  lfs 2, -3056(3)
  028f978  fmuls 1, 1, 2
  028f97c  bl 0x502758
  028f980  nop
  028f984  li 30, 5
  028f988  stw 3, 36(29)
  028f98c  li 3, 4
  028f990  bl 0xfc620
  028f994  nop
  028f998  cmpwi 3, 0
  028f99c  bt 2, 0x28f9a8
  028f9a0  cmpwi 30, 1
  028f9a4  bf 1, 0x290104
  028f9a8  li 27, 0
  028f9ac  cmpwi 30, 0
  028f9b0  ori 29, 27, 0
  028f9b4  bf 1, 0x290104
  028f9b8  lis 3, 41
  028f9bc  addic 28, 31, 16
  028f9c0  addi 3, 3, -2128
  028f9c4  lfs 30, 20(3)
  028f9c8  lfs 31, 24(3)
  028f9cc  lis 3, 123
  028f9d0  lfs 2, -19716(3)
  028f9d4  fneg 1, 2
  028f9d8  bl 0xfcbe8
  028f9dc  nop
  028f9e0  fmr 5, 1
  028f9e4  lfs 1, 196(31)
  028f9e8  lfs 2, 192(31)
  028f9ec  fmuls 3, 1, 1
  028f9f0  lfs 4, 200(31)
  028f9f4  lis 3, 123
  028f9f8  lfs 6, -19728(3)
  028f9fc  fmr 1, 5
  028fa00  fmadds 3, 2, 2, 3
  028fa04  lis 3, 114
  028fa08  lfs 7, -3052(3)
  028fa0c  fadds 1, 1, 30
  028fa10  fmadds 3, 4, 4, 3
  028fa14  fmuls 5, 6, 1
  028fa18  fsqrts 3, 3
  028fa1c  lfs 1, 196(31)
  028fa20  fmuls 5, 5, 7
  028fa24  fcmpu 0, 3, 31
  028fa28  bf 2, 0x28fa40
  028fa2c  fmr 3, 31
  028fa30  lfs 4, 204(31)
  028fa34  fmr 2, 3
  028fa38  fmr 1, 2
  028fa3c  b 0x28fa58
  028fa40  fdivs 5, 5, 3
  028fa44  fmr 7, 1
  028fa48  fmuls 3, 4, 5
  028fa4c  fmuls 1, 2, 5
  028fa50  lfs 4, 204(31)
  028fa54  fmuls 2, 7, 5
  028fa58  lis 3, 123
  028fa5c  stfs 1, 144(1)
  028fa60  stfs 2, 148(1)
  028fa64  stfs 3, 152(1)
  028fa68  lfs 2, -19716(3)
  028fa6c  stfs 4, 156(1)
  028fa70  fneg 1, 2
  028fa74  bl 0xfcbe8
  028fa78  nop
  028fa7c  fadds 1, 1, 30
  028fa80  lis 3, 123
  028fa84  lis 26, 114
  028fa88  lis 4, 123
  028fa8c  lfs 2, -19724(3)
  028fa90  lfs 3, -3052(26)
  028fa94  stw 29, 172(1)
  028fa98  stw 29, 164(1)
  028fa9c  fmuls 4, 2, 1
  028faa0  stw 29, 160(1)
  028faa4  lfs 2, -19720(4)
  028faa8  fneg 1, 2
  028faac  fmuls 3, 4, 3
  028fab0  stfs 3, 168(1)
  028fab4  bl 0xfcbe8
  028fab8  nop
  028fabc  lfs 3, 212(31)
  028fac0  lfs 4, 208(31)
  028fac4  fmuls 2, 3, 3
  028fac8  lfs 5, 216(31)
  028facc  lfs 6, -3052(26)
  028fad0  fmuls 6, 1, 6
  028fad4  fmadds 2, 4, 4, 2
  028fad8  lfs 8, 160(1)
  028fadc  lis 3, 123
  028fae0  lfs 9, 164(1)
  028fae4  lis 4, 123
  028fae8  lfs 10, 168(1)
  028faec  fmadds 2, 5, 5, 2
  028faf0  lfs 1, -19696(3)
  028faf4  fsqrts 7, 2
  028faf8  lfs 2, -19692(4)
  028fafc  fdivs 6, 6, 7
  028fb00  fsub 11, 31, 7
  028fb04  fsub 12, 31, 7
  028fb08  fsub 13, 31, 7
  028fb0c  fsub 0, 7, 31
  028fb10  fsub 29, 7, 31
  028fb14  fsub 7, 7, 31
  028fb18  fmuls 5, 5, 6
  028fb1c  fmuls 3, 3, 6
  028fb20  fmuls 4, 4, 6
  028fb24  fsel 6, 11, 31, 5
  028fb28  fsel 11, 12, 31, 3
  028fb2c  fsel 12, 13, 31, 4
  028fb30  fsel 5, 0, 6, 5
  028fb34  fsel 3, 29, 11, 3
  028fb38  fsel 4, 7, 12, 4
  028fb3c  fadds 5, 10, 5
  028fb40  fadds 3, 9, 3
  028fb44  fadds 4, 8, 4
  028fb48  stfs 5, 168(1)
  028fb4c  stfs 3, 164(1)
  028fb50  stfs 4, 160(1)
  028fb54  bl 0xfcbe8
  028fb58  nop
  028fb5c  lis 3, 123
  028fb60  lis 4, 123
  028fb64  stfs 1, 156(1)
  028fb68  lfs 1, -19688(3)
  028fb6c  lfs 2, -19684(4)
  028fb70  bl 0xfcbe8
  028fb74  nop
  028fb78  lis 3, 123
  028fb7c  stfs 1, 172(1)
  028fb80  lis 4, 123
  028fb84  fmr 2, 30
  028fb88  fmr 1, 31
  028fb8c  lwz 3, -19680(3)
  028fb90  lwz 4, -19676(4)
  028fb94  extsw 26, 3
  028fb98  extsw 25, 4
  028fb9c  bl 0xfcbe8
  028fba0  nop
  028fba4  ori 4, 25, 0
  028fba8  ori 3, 26, 0
  028fbac  bl 0x5027bc
  028fbb0  nop
  028fbb4  lis 4, 123
  028fbb8  lis 5, 123
  028fbbc  fmr 1, 31
  028fbc0  ori 26, 3, 0
  028fbc4  fmr 2, 30
  028fbc8  lwz 3, -19672(4)
  028fbcc  lwz 4, -19668(5)
  028fbd0  extsw 25, 3
  028fbd4  extsw 24, 4
  028fbd8  bl 0xfcbe8
  028fbdc  nop
  028fbe0  ori 3, 25, 0
  028fbe4  ori 4, 24, 0
  028fbe8  bl 0x5027bc
  028fbec  nop
  028fbf0  ori 25, 3, 0
  028fbf4  fmr 1, 31
  028fbf8  fmr 2, 30
  028fbfc  bl 0xfcbe8
  028fc00  nop
  028fc04  lis 3, 123
  028fc08  lis 24, 114
  028fc0c  lwz 3, -19712(3)
  028fc10  extsw 3, 3
  028fc14  std 3, 224(1)
  028fc18  lfs 2, -3056(24)
  028fc1c  lfd 3, 224(1)
  028fc20  fcfid 3, 3
  028fc24  frsp 3, 3
  028fc28  fmadds 1, 3, 1, 30
  028fc2c  fmuls 1, 2, 1
  028fc30  bl 0x502758
  028fc34  nop
  028fc38  lis 4, 123
  028fc3c  lis 23, 123
  028fc40  ori 22, 3, 0
  028fc44  lwz 4, -19708(4)
  028fc48  extsw 4, 4
  028fc4c  std 4, 224(1)
  028fc50  lfs 2, -19700(23)
  028fc54  lfd 3, 224(1)
  028fc58  fneg 1, 2
  028fc5c  fcfid 3, 3
  028fc60  frsp 29, 3
  028fc64  bl 0xfcbe8
  028fc68  nop
  028fc6c  fadds 1, 1, 30
  028fc70  lfs 2, -3056(24)
  028fc74  fmuls 1, 29, 1
  028fc78  fmuls 1, 2, 1
  028fc7c  bl 0x502758
  028fc80  nop
  028fc84  lis 4, 123
  028fc88  ori 21, 3, 0
  028fc8c  lwz 4, -19704(4)
  028fc90  extsw 4, 4
  028fc94  std 4, 224(1)
  028fc98  lfs 2, -19700(23)
  028fc9c  lfd 3, 224(1)
  028fca0  fneg 1, 2
  028fca4  fcfid 3, 3
  028fca8  frsp 29, 3
  028fcac  bl 0xfcbe8
  028fcb0  nop
  028fcb4  fadds 1, 1, 30
  028fcb8  lfs 2, -3056(24)
  028fcbc  fmuls 1, 29, 1
  028fcc0  fmuls 1, 2, 1
  028fcc4  bl 0x502758
  028fcc8  nop
  028fccc  li 8, -1
  028fcd0  ori 10, 3, 0
  028fcd4  ori 6, 26, 0
  028fcd8  addic 4, 1, 144
  028fcdc  std 8, 112(1)
  028fce0  ori 7, 25, 0
  028fce4  addic 5, 1, 160
  028fce8  ori 3, 28, 0
  028fcec  ori 8, 22, 0
  028fcf0  ori 9, 21, 0
  028fcf4  bl 0x1206e8
  028fcf8  nop
  028fcfc  addic 27, 27, 1
  028fd00  cmpw 27, 30
  028fd04  bt 0, 0x28f9cc
  028fd08  b 0x290104
  028fd0c  addic 3, 29, 32
  028fd10  bl 0x4fff60
  028fd14  nop
  028fd18  cmpwi 3, 0
  028fd1c  bt 2, 0x290104
  028fd20  lis 3, 123
  028fd24  lis 4, 123
  028fd28  lwz 3, -19600(3)
  028fd2c  lwz 4, -19596(4)
  028fd30  extsw 3, 3
  028fd34  extsw 4, 4
  028fd38  std 3, 224(1)
  028fd3c  lfd 1, 224(1)
  028fd40  std 4, 224(1)
  028fd44  fcfid 1, 1
  028fd48  frsp 1, 1
  028fd4c  lfd 2, 224(1)
  028fd50  fcfid 2, 2
  028fd54  frsp 2, 2
  028fd58  bl 0xfcbe8
  028fd5c  nop
  028fd60  lis 3, 114
  028fd64  lfs 2, -3056(3)
  028fd68  fmuls 1, 1, 2
  028fd6c  bl 0x502758
  028fd70  nop
  028fd74  stw 3, 32(29)
  028fd78  li 3, 7
  028fd7c  li 30, 1
  028fd80  bl 0xfc620
  028fd84  nop
  028fd88  cmpwi 3, 0
  028fd8c  bf 2, 0x28fda0
  028fd90  li 3, 5
  028fd94  bl 0xfc620
  028fd98  nop
  028fd9c  addic 30, 3, 5
  028fda0  cmpwi 30, 0
  028fda4  li 28, 0
  028fda8  bf 1, 0x290104
  028fdac  lis 3, 41
  028fdb0  addic 29, 31, 16
  028fdb4  addi 3, 3, -2128
  028fdb8  lfs 30, 24(3)
  028fdbc  lfs 31, 20(3)
  028fdc0  lis 4, 123
  028fdc4  fmr 1, 30
  028fdc8  lis 27, 114
  028fdcc  addic 3, 1, 208
  028fdd0  lfs 2, -19648(4)
  028fdd4  lfs 3, -3052(27)
  028fdd8  fmuls 2, 2, 3
  028fddc  bl 0xfea60
  028fde0  nop
  028fde4  lis 3, 123
  028fde8  lfs 2, -19652(3)
  028fdec  fneg 1, 2
  028fdf0  bl 0xfcbe8
  028fdf4  nop
  028fdf8  lfs 5, 196(31)
  028fdfc  lfs 7, 192(31)
  028fe00  fmuls 2, 5, 5
  028fe04  lfs 3, 200(31)
  028fe08  fadds 1, 1, 31
  028fe0c  lis 3, 123
  028fe10  lfs 9, -19664(3)
  028fe14  fmadds 2, 7, 7, 2
  028fe18  fmuls 8, 9, 1
  028fe1c  lfs 10, -3052(27)
  028fe20  lfs 6, 208(1)
  028fe24  lfs 4, 212(1)
  028fe28  fmadds 2, 3, 3, 2
  028fe2c  fmuls 8, 8, 10
  028fe30  fsqrts 11, 2
  028fe34  lfs 2, 216(1)
  028fe38  fmr 1, 11
  028fe3c  fcmpu 0, 1, 30
  028fe40  bf 2, 0x28fe58
  028fe44  fmr 3, 30
  028fe48  lfs 1, 204(31)
  028fe4c  fmr 5, 3
  028fe50  fmr 7, 5
  028fe54  b 0x28fe6c
  028fe58  fdivs 8, 8, 1
  028fe5c  lfs 1, 204(31)
  028fe60  fmuls 7, 7, 8
  028fe64  fmuls 5, 5, 8
  028fe68  fmuls 3, 3, 8
  028fe6c  fadds 6, 7, 6
  028fe70  fadds 4, 5, 4
  028fe74  lis 3, 123
  028fe78  fadds 3, 3, 2
  028fe7c  stfs 1, 188(1)
  028fe80  lfs 2, -19652(3)
  028fe84  fneg 1, 2
  028fe88  stfs 6, 176(1)
  028fe8c  stfs 4, 180(1)
  028fe90  stfs 3, 184(1)
  028fe94  bl 0xfcbe8
  028fe98  nop
  028fe9c  lfs 3, 180(1)
  028fea0  lfs 4, 176(1)
  028fea4  fadds 1, 1, 31
  028fea8  fmuls 2, 3, 3
  028feac  lfs 5, 184(1)
  028feb0  lis 3, 123
  028feb4  lfs 6, -19660(3)
  028feb8  lis 3, 114
  028febc  fmuls 1, 6, 1
  028fec0  fmadds 2, 4, 4, 2
  028fec4  lfs 7, -3052(3)
  028fec8  lis 3, 123
  028fecc  fmadds 2, 5, 5, 2
  028fed0  fmuls 10, 1, 7
  028fed4  lis 4, 123
  028fed8  lis 5, 123
  028fedc  fsqrts 6, 2
  028fee0  lfs 2, 188(1)
  028fee4  stfs 2, 204(1)
  028fee8  lfs 8, -19656(3)
  028feec  lfs 1, -19632(4)
  028fef0  lfs 2, -19628(5)
  028fef4  fdivs 9, 10, 6
  028fef8  fsub 10, 30, 6
  028fefc  fsub 11, 30, 6
  028ff00  fsub 12, 30, 6
  028ff04  fsub 13, 6, 30
  028ff08  fsub 0, 6, 30
  028ff0c  fsub 6, 6, 30
  028ff10  fmuls 5, 5, 9
  028ff14  fmuls 4, 4, 9
  028ff18  fmuls 3, 3, 9
  028ff1c  fsel 9, 10, 30, 5
  028ff20  fsel 10, 11, 30, 4
  028ff24  fsel 11, 12, 30, 3
  028ff28  fsel 5, 13, 9, 5
  028ff2c  fsel 4, 0, 10, 4
  028ff30  fsel 3, 6, 11, 3
  028ff34  fnmsubs 6, 8, 7, 5
  028ff38  stfs 5, 200(1)
  028ff3c  stfs 4, 192(1)
  028ff40  stfs 3, 196(1)
  028ff44  stfs 6, 200(1)
  028ff48  bl 0xfcbe8
  028ff4c  nop
  028ff50  lis 3, 123
  028ff54  stfs 1, 188(1)
  028ff58  lis 4, 123
  028ff5c  lfs 1, -19624(3)
  028ff60  lfs 2, -19620(4)
  028ff64  bl 0xfcbe8
  028ff68  nop
  028ff6c  lis 3, 123
  028ff70  lis 4, 123
  028ff74  stfs 1, 204(1)
  028ff78  fmr 2, 31
  028ff7c  fmr 1, 30
  028ff80  lwz 3, -19616(3)
  028ff84  lwz 4, -19612(4)
  028ff88  extsw 27, 3
  028ff8c  extsw 26, 4
  028ff90  bl 0xfcbe8
  028ff94  nop
  028ff98  ori 4, 26, 0
  028ff9c  ori 3, 27, 0
  028ffa0  bl 0x5027bc
  028ffa4  nop
  028ffa8  lis 4, 123
  028ffac  fmr 1, 30
  028ffb0  lis 5, 123
  028ffb4  fmr 2, 31
  028ffb8  ori 27, 3, 0
  028ffbc  lwz 3, -19608(4)
  028ffc0  lwz 4, -19604(5)
  028ffc4  extsw 26, 3
  028ffc8  extsw 25, 4
  028ffcc  bl 0xfcbe8
  028ffd0  nop
  028ffd4  ori 3, 26, 0
  028ffd8  ori 4, 25, 0
  028ffdc  bl 0x5027bc
  028ffe0  nop
  028ffe4  ori 26, 3, 0
  028ffe8  fmr 1, 30
  028ffec  fmr 2, 31
  028fff0  bl 0xfcbe8
  028fff4  nop
  028fff8  lis 3, 251
  028fffc  lis 25, 114
  0290000  lwz 3, -9616(3)
  0290004  extsw 3, 3
  0290008  std 3, 224(1)
  029000c  lfs 2, -3056(25)
  0290010  lfd 3, 224(1)
  0290014  fcfid 3, 3
  0290018  frsp 3, 3
  029001c  fmadds 1, 3, 1, 31
  0290020  fmuls 1, 2, 1
  0290024  bl 0x502758
  0290028  nop
  029002c  lis 4, 123
  0290030  lis 24, 123
  0290034  ori 23, 3, 0
  0290038  lwz 4, -19644(4)
  029003c  extsw 4, 4
  0290040  std 4, 224(1)
  0290044  lfs 2, -19636(24)
  0290048  lfd 3, 224(1)
  029004c  fneg 1, 2
  0290050  fcfid 3, 3
  0290054  frsp 29, 3
  0290058  bl 0xfcbe8
  029005c  nop
  0290060  fadds 1, 1, 31
  0290064  lfs 2, -3056(25)
  0290068  fmuls 1, 29, 1
  029006c  fmuls 1, 2, 1
  0290070  bl 0x502758
  0290074  nop
  0290078  lis 4, 123
  029007c  ori 22, 3, 0
  0290080  lwz 4, -19640(4)
  0290084  extsw 4, 4
  0290088  std 4, 224(1)
  029008c  lfs 2, -19636(24)
  0290090  lfd 3, 224(1)
  0290094  fneg 1, 2
  0290098  fcfid 3, 3
  029009c  frsp 29, 3
  02900a0  bl 0xfcbe8
  02900a4  nop
  02900a8  fadds 1, 1, 31
  02900ac  lfs 2, -3056(25)
  02900b0  fmuls 1, 29, 1
  02900b4  fmuls 1, 2, 1
  02900b8  bl 0x502758
  02900bc  nop
  02900c0  lis 5, 123
  02900c4  ori 10, 3, 0
  02900c8  ori 7, 26, 0
  02900cc  addic 4, 1, 176
  02900d0  ori 8, 23, 0
  02900d4  lwz 3, -19592(5)
  02900d8  addic 5, 1, 192
  02900dc  extsw 11, 3
  02900e0  ori 3, 29, 0
  02900e4  ori 6, 27, 0
  02900e8  ori 9, 22, 0
  02900ec  std 11, 112(1)
  02900f0  bl 0x1206e8
  02900f4  nop
  02900f8  addic 28, 28, 1
  02900fc  cmpw 28, 30
  0290100  bt 0, 0x28fdc0
  0290104  ld 0, 368(1)
  0290108  mtlr 0
  029010c  lfd 29, 328(1)
  0290110  lfd 30, 336(1)
  0290114  lfd 31, 344(1)
  0290118  ld 21, 240(1)
  029011c  ld 22, 248(1)
  0290120  ld 23, 256(1)
  0290124  ld 24, 264(1)
  0290128  ld 25, 272(1)
  029012c  ld 26, 280(1)
  0290130  ld 27, 288(1)
  0290134  ld 28, 296(1)
  0290138  ld 29, 304(1)
  029013c  ld 30, 312(1)
  0290140  ld 31, 320(1)
  0290144  addi 1, 1, 352
  0290148  blr
