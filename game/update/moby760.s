# game/update/moby760.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M760_0044f348:   # 0x44f348, 0x14 bytes
  044f348  lis 3, 135
  044f34c  lis 4, 1
  044f350  addic 3, 3, 7432
  044f354  stw 4, 72(3)
  044f358  blr

M760_0044f378:   # 0x44f378, 0x144 bytes
  044f378  stdu 1, -176(1)
  044f37c  mflr 0
  044f380  std 0, 192(1)
  044f384  stfd 30, 160(1)
  044f388  stfd 31, 168(1)
  044f38c  std 30, 144(1)
  044f390  std 29, 136(1)
  044f394  lis 5, 69
  044f398  lwz 29, 120(3)
  044f39c  std 31, 152(1)
  044f3a0  ori 30, 4, 0
  044f3a4  addi 31, 5, -3232
  044f3a8  lfs 31, 0(31)
  044f3ac  lfs 30, 4(31)
  044f3b0  fmr 1, 31
  044f3b4  std 28, 128(1)
  044f3b8  std 27, 120(1)
  044f3bc  fmr 2, 30
  044f3c0  bl 0xfe4f0
  044f3c4  nop
  044f3c8  lis 3, 269
  044f3cc  sldi 4, 30, 4
  044f3d0  fmr 2, 30
  044f3d4  addic 28, 3, -8656
  044f3d8  extsw 27, 4
  044f3dc  stfsx 1, 28, 27
  044f3e0  fmr 1, 31
  044f3e4  bl 0xfe4f0
  044f3e8  nop
  044f3ec  addc 28, 28, 27
  044f3f0  fmr 2, 30
  044f3f4  stfs 1, 4(28)
  044f3f8  fmr 1, 31
  044f3fc  bl 0xfe4f0
  044f400  nop
  044f404  stfs 1, 8(28)
  044f408  lfs 3, 8(31)
  044f40c  lfs 1, 68(29)
  044f410  lfs 31, 76(29)
  044f414  fadds 2, 1, 3
  044f418  bl 0xfcbe8
  044f41c  nop
  044f420  lis 3, 269
  044f424  sldi 4, 30, 2
  044f428  addic 3, 3, 10544
  044f42c  extsw 29, 4
  044f430  stfsx 1, 3, 29
  044f434  lfs 2, 12(31)
  044f438  fmr 1, 31
  044f43c  fadds 2, 31, 2
  044f440  bl 0xfcbe8
  044f444  nop
  044f448  lis 3, 269
  044f44c  lis 5, 269
  044f450  addic 3, 3, 15344
  044f454  addic 5, 5, 22544
  044f458  li 4, 0
  044f45c  stfsx 1, 3, 29
  044f460  stwx 4, 5, 29
  044f464  lfs 1, 16(31)
  044f468  lfs 2, 20(31)
  044f46c  bl 0xfcbe8
  044f470  nop
  044f474  lis 3, 269
  044f478  lis 4, 269
  044f47c  addic 3, 3, 27344
  044f480  addic 4, 4, 21344
  044f484  li 5, 1
  044f488  stfsx 1, 3, 29
  044f48c  stbx 5, 4, 30
  044f490  ld 0, 192(1)
  044f494  mtlr 0
  044f498  lfd 30, 160(1)
  044f49c  lfd 31, 168(1)
  044f4a0  ld 27, 120(1)
  044f4a4  ld 28, 128(1)
  044f4a8  ld 29, 136(1)
  044f4ac  ld 30, 144(1)
  044f4b0  ld 31, 152(1)
  044f4b4  addi 1, 1, 176
  044f4b8  blr

M760_0044f4c8:   # 0x44f4c8, 0x178 bytes
  044f4c8  stdu 1, -160(1)
  044f4cc  mflr 0
  044f4d0  std 0, 176(1)
  044f4d4  stfd 30, 144(1)
  044f4d8  stfd 31, 152(1)
  044f4dc  std 30, 128(1)
  044f4e0  lis 5, 69
  044f4e4  std 31, 136(1)
  044f4e8  lwz 30, 120(3)
  044f4ec  ori 31, 4, 0
  044f4f0  addi 5, 5, -2884
  044f4f4  lfs 31, 0(5)
  044f4f8  lfs 30, 4(5)
  044f4fc  fmr 1, 31
  044f500  std 29, 120(1)
  044f504  std 28, 112(1)
  044f508  fmr 2, 30
  044f50c  bl 0xfe4f0
  044f510  nop
  044f514  lis 3, 269
  044f518  sldi 4, 31, 4
  044f51c  fmr 2, 30
  044f520  addic 29, 3, -8656
  044f524  extsw 28, 4
  044f528  stfsx 1, 29, 28
  044f52c  fmr 1, 31
  044f530  bl 0xfe4f0
  044f534  nop
  044f538  addc 29, 29, 28
  044f53c  fmr 2, 30
  044f540  stfs 1, 4(29)
  044f544  fmr 1, 31
  044f548  bl 0xfe4f0
  044f54c  nop
  044f550  stfs 1, 8(29)
  044f554  lfs 1, 16(30)
  044f558  lfs 2, 20(30)
  044f55c  bl 0xfcbe8
  044f560  nop
  044f564  lis 3, 269
  044f568  sldi 4, 31, 2
  044f56c  addic 3, 3, 10544
  044f570  extsw 29, 4
  044f574  stfsx 1, 3, 29
  044f578  lfs 1, 24(30)
  044f57c  lfs 2, 28(30)
  044f580  bl 0xfcbe8
  044f584  nop
  044f588  lis 3, 269
  044f58c  lis 4, 269
  044f590  addic 3, 3, 15344
  044f594  addic 4, 4, 22544
  044f598  li 28, 0
  044f59c  stfsx 1, 3, 29
  044f5a0  stwx 28, 4, 29
  044f5a4  lfs 1, 8(30)
  044f5a8  lfs 2, 12(30)
  044f5ac  bl 0xfcbe8
  044f5b0  nop
  044f5b4  lis 3, 270
  044f5b8  lis 4, 269
  044f5bc  sldi 5, 31, 1
  044f5c0  lis 6, 270
  044f5c4  addic 4, 4, 32144
  044f5c8  extsw 5, 5
  044f5cc  lwz 3, -26188(3)
  044f5d0  addic 6, 6, -30992
  044f5d4  lis 7, 270
  044f5d8  lis 8, 269
  044f5dc  sthx 3, 4, 5
  044f5e0  sthx 28, 6, 5
  044f5e4  addic 3, 8, 27344
  044f5e8  lhz 4, 0(30)
  044f5ec  lwz 6, -26192(7)
  044f5f0  subc 4, 31, 4
  044f5f4  mullw 4, 4, 6
  044f5f8  stfsx 1, 3, 29
  044f5fc  lis 7, 269
  044f600  lis 3, 270
  044f604  addc 4, 4, 6
  044f608  addic 3, 3, -28592
  044f60c  addic 6, 7, 21344
  044f610  sthx 4, 3, 5
  044f614  stbx 28, 6, 31
  044f618  ld 0, 176(1)
  044f61c  mtlr 0
  044f620  lfd 30, 144(1)
  044f624  lfd 31, 152(1)
  044f628  ld 28, 112(1)
  044f62c  ld 29, 120(1)
  044f630  ld 30, 128(1)
  044f634  ld 31, 136(1)
  044f638  addi 1, 1, 160
  044f63c  blr

UpdateMoby_760:   # 0x44f670, 0x824 bytes
  044f670  stdu 1, -368(1)
  044f674  mflr 0
  044f678  std 0, 384(1)
  044f67c  stfd 25, 312(1)
  044f680  stfd 26, 320(1)
  044f684  stfd 27, 328(1)
  044f688  stfd 28, 336(1)
  044f68c  stfd 29, 344(1)
  044f690  stfd 30, 352(1)
  044f694  stfd 31, 360(1)
  044f698  std 31, 304(1)
  044f69c  lbz 4, 32(3)
  044f6a0  std 29, 288(1)
  044f6a4  ori 31, 3, 0
  044f6a8  lwz 29, 120(3)
  044f6ac  cmpwi 4, 0
  044f6b0  cmpwi 1, 4, 1
  044f6b4  std 30, 296(1)
  044f6b8  std 28, 280(1)
  044f6bc  std 27, 272(1)
  044f6c0  std 26, 264(1)
  044f6c4  std 25, 256(1)
  044f6c8  std 24, 248(1)
  044f6cc  std 23, 240(1)
  044f6d0  std 22, 232(1)
  044f6d4  std 21, 224(1)
  044f6d8  std 20, 216(1)
  044f6dc  std 19, 208(1)
  044f6e0  std 18, 200(1)
  044f6e4  std 17, 192(1)
  044f6e8  std 16, 184(1)
  044f6ec  std 15, 176(1)
  044f6f0  cmpwi 6, 4, -1
  044f6f4  bt 1, 0x44f700
  044f6f8  bf 25, 0x44fe24
  044f6fc  b 0x44f708
  044f700  bf 5, 0x44faf0
  044f704  b 0x44fe24
  044f708  li 3, 1
  044f70c  li 4, 255
  044f710  stb 3, 32(31)
  044f714  stb 4, 48(31)
  044f718  lwz 3, 4(29)
  044f71c  cmpwi 3, -1
  044f720  bf 2, 0x44f734
  044f724  ori 3, 31, 0
  044f728  bl 0xefb38
  044f72c  nop
  044f730  b 0x44fe24
  044f734  lis 4, 165
  044f738  slwi 3, 3, 7
  044f73c  lwz 4, 7128(4)
  044f740  addc 3, 4, 3
  044f744  clrldi 3, 3, 32
  044f748  lfs 1, 20(3)
  044f74c  lfs 2, 16(3)
  044f750  fmuls 1, 1, 1
  044f754  lfs 3, 24(3)
  044f758  fmadds 1, 2, 2, 1
  044f75c  fmadds 2, 3, 3, 1
  044f760  fsqrts 2, 2
  044f764  stfs 2, 72(29)
  044f768  lfs 1, 4(3)
  044f76c  lfs 3, 0(3)
  044f770  fmuls 1, 1, 1
  044f774  lfs 4, 8(3)
  044f778  fmadds 1, 3, 3, 1
  044f77c  fmadds 1, 4, 4, 1
  044f780  fsqrts 1, 1
  044f784  fcmpu 0, 1, 2
  044f788  cror 6, 0, 2
  044f78c  bt 6, 0x44f798
  044f790  fmr 2, 1
  044f794  stfs 1, 72(29)
  044f798  lis 4, 69
  044f79c  lhz 30, 64(29)
  044f7a0  addi 4, 4, -2496
  044f7a4  cmpwi 30, 0
  044f7a8  lfs 1, 0(4)
  044f7ac  bt 2, 0x44f7b4
  044f7b0  fmr 1, 2
  044f7b4  stfs 1, 68(29)
  044f7b8  lfs 1, 36(3)
  044f7bc  lfs 2, 32(3)
  044f7c0  fmuls 1, 1, 1
  044f7c4  lfs 3, 40(3)
  044f7c8  lis 3, 69
  044f7cc  addi 3, 3, -2496
  044f7d0  fmadds 1, 2, 2, 1
  044f7d4  lfs 2, 4(3)
  044f7d8  lhz 4, 2(29)
  044f7dc  extsh 3, 30
  044f7e0  extsh 4, 4
  044f7e4  addc 3, 4, 3
  044f7e8  fmadds 1, 3, 3, 1
  044f7ec  fsqrts 1, 1
  044f7f0  fmuls 1, 1, 2
  044f7f4  stfs 1, 80(29)
  044f7f8  bl 0x46c58c
  044f7fc  nop
  044f800  lhz 4, 2(29)
  044f804  extsh 30, 3
  044f808  sth 3, 0(29)
  044f80c  extsh 28, 4
  044f810  addc 28, 30, 28
  044f814  cmpw 28, 30
  044f818  bf 1, 0x44f978
  044f81c  lis 3, 69
  044f820  lis 27, 269
  044f824  addi 3, 3, -2496
  044f828  lis 24, 269
  044f82c  lis 26, 269
  044f830  lis 23, 269
  044f834  lis 25, 269
  044f838  lis 22, 269
  044f83c  lfs 31, 8(3)
  044f840  lis 18, 269
  044f844  lfs 30, 12(3)
  044f848  lis 21, 269
  044f84c  lis 20, 270
  044f850  lis 19, 270
  044f854  addic 27, 27, 20144
  044f858  addic 26, 26, -8656
  044f85c  addic 24, 24, 15344
  044f860  addic 25, 25, 10544
  044f864  addic 23, 23, 22544
  044f868  addic 22, 22, 27344
  044f86c  addic 18, 18, 21344
  044f870  addic 21, 21, 32144
  044f874  addic 20, 20, -30992
  044f878  addic 19, 19, -28592
  044f87c  li 3, 2
  044f880  bl 0xfc620
  044f884  nop
  044f888  sldi 4, 30, 4
  044f88c  fmr 1, 30
  044f890  lis 5, 16256
  044f894  stbx 3, 27, 30
  044f898  extsw 17, 4
  044f89c  lwz 16, 120(31)
  044f8a0  fmr 2, 31
  044f8a4  addc 15, 17, 26
  044f8a8  stw 5, 12(15)
  044f8ac  bl 0xfe4f0
  044f8b0  nop
  044f8b4  stfsx 1, 26, 17
  044f8b8  fmr 1, 30
  044f8bc  fmr 2, 31
  044f8c0  bl 0xfe4f0
  044f8c4  nop
  044f8c8  stfs 1, 4(15)
  044f8cc  fmr 2, 31
  044f8d0  fmr 1, 30
  044f8d4  bl 0xfe4f0
  044f8d8  nop
  044f8dc  stfs 1, 8(15)
  044f8e0  lfs 1, 16(16)
  044f8e4  lfs 2, 20(16)
  044f8e8  bl 0xfcbe8
  044f8ec  nop
  044f8f0  sldi 3, 30, 2
  044f8f4  extsw 17, 3
  044f8f8  stfsx 1, 25, 17
  044f8fc  lfs 1, 24(16)
  044f900  lfs 2, 28(16)
  044f904  bl 0xfcbe8
  044f908  nop
  044f90c  li 15, 0
  044f910  stfsx 1, 24, 17
  044f914  stwx 15, 23, 17
  044f918  lfs 1, 8(16)
  044f91c  lfs 2, 12(16)
  044f920  bl 0xfcbe8
  044f924  nop
  044f928  lis 3, 270
  044f92c  stfsx 1, 22, 17
  044f930  sldi 4, 30, 1
  044f934  lis 5, 270
  044f938  extsw 4, 4
  044f93c  lwz 3, -26188(3)
  044f940  lwz 5, -26192(5)
  044f944  sthx 3, 21, 4
  044f948  sthx 15, 20, 4
  044f94c  lhz 3, 0(16)
  044f950  stbx 15, 18, 30
  044f954  subc 3, 30, 3
  044f958  mullw 3, 3, 5
  044f95c  addic 30, 30, 1
  044f960  addc 3, 3, 5
  044f964  sthx 15, 21, 4
  044f968  extsw 30, 30
  044f96c  cmpw 28, 30
  044f970  sthx 3, 19, 4
  044f974  bt 1, 0x44f87c
  044f978  lhz 3, 64(29)
  044f97c  extsh 30, 3
  044f980  addc 30, 28, 30
  044f984  cmpw 30, 28
  044f988  bf 1, 0x44fab0
  044f98c  lis 3, 69
  044f990  lis 27, 269
  044f994  addi 3, 3, -2496
  044f998  lis 25, 269
  044f99c  lis 26, 269
  044f9a0  lis 22, 269
  044f9a4  lis 24, 269
  044f9a8  lfs 31, 8(3)
  044f9ac  lis 23, 269
  044f9b0  lfs 30, 12(3)
  044f9b4  lis 21, 269
  044f9b8  lfs 29, 16(3)
  044f9bc  addic 27, 27, 20144
  044f9c0  lfs 28, 20(3)
  044f9c4  addic 26, 26, -8656
  044f9c8  lfs 27, 24(3)
  044f9cc  addic 25, 25, 10544
  044f9d0  addic 24, 24, 15344
  044f9d4  lfs 26, 28(3)
  044f9d8  addic 23, 23, 22544
  044f9dc  addic 22, 22, 27344
  044f9e0  addic 21, 21, 21344
  044f9e4  li 3, 2
  044f9e8  bl 0xfc620
  044f9ec  nop
  044f9f0  sldi 4, 28, 4
  044f9f4  fmr 1, 30
  044f9f8  lis 5, 16256
  044f9fc  stbx 3, 27, 28
  044fa00  extsw 20, 4
  044fa04  lwz 19, 120(31)
  044fa08  fmr 2, 31
  044fa0c  addc 18, 20, 26
  044fa10  stw 5, 12(18)
  044fa14  bl 0xfe4f0
  044fa18  nop
  044fa1c  stfsx 1, 26, 20
  044fa20  fmr 1, 30
  044fa24  fmr 2, 31
  044fa28  bl 0xfe4f0
  044fa2c  nop
  044fa30  stfs 1, 4(18)
  044fa34  fmr 2, 31
  044fa38  fmr 1, 30
  044fa3c  bl 0xfe4f0
  044fa40  nop
  044fa44  stfs 1, 8(18)
  044fa48  lfs 1, 68(19)
  044fa4c  lfs 25, 76(19)
  044fa50  fadds 2, 1, 29
  044fa54  bl 0xfcbe8
  044fa58  nop
  044fa5c  sldi 3, 28, 2
  044fa60  fadds 2, 25, 28
  044fa64  extsw 20, 3
  044fa68  stfsx 1, 25, 20
  044fa6c  fmr 1, 25
  044fa70  bl 0xfcbe8
  044fa74  nop
  044fa78  li 3, 0
  044fa7c  stfsx 1, 24, 20
  044fa80  fmr 1, 27
  044fa84  fmr 2, 26
  044fa88  stwx 3, 23, 20
  044fa8c  bl 0xfcbe8
  044fa90  nop
  044fa94  li 3, 1
  044fa98  stfsx 1, 22, 20
  044fa9c  addic 4, 28, 1
  044faa0  stbx 3, 21, 28
  044faa4  extsw 28, 4
  044faa8  cmpw 30, 28
  044faac  bt 1, 0x44f9e4
  044fab0  lis 3, 165
  044fab4  lwz 5, 4(29)
  044fab8  lis 4, 16256
  044fabc  slwi 5, 5, 7
  044fac0  lwz 3, 7128(3)
  044fac4  addc 3, 3, 5
  044fac8  clrldi 3, 3, 32
  044facc  stw 4, 60(3)
  044fad0  lbz 3, 61(29)
  044fad4  lbz 4, 62(29)
  044fad8  slwi 3, 3, 8
  044fadc  lbz 5, 60(29)
  044fae0  rlwimi 3, 4, 16, 8, 15
  044fae4  or 3, 3, 5
  044fae8  stw 3, 56(29)
  044faec  b 0x44fe24
  044faf0  lis 3, 165
  044faf4  lwz 5, 4(29)
  044faf8  lis 4, 69
  044fafc  slwi 5, 5, 7
  044fb00  lwz 3, 7128(3)
  044fb04  addc 30, 3, 5
  044fb08  addi 3, 4, -2496
  044fb0c  clrldi 30, 30, 32
  044fb10  lis 4, 135
  044fb14  lis 5, 16672
  044fb18  lfs 1, 48(30)
  044fb1c  stfs 1, 112(1)
  044fb20  lfs 1, 52(30)
  044fb24  stfs 1, 116(1)
  044fb28  lfs 1, 32(3)
  044fb2c  lfs 2, 56(30)
  044fb30  stw 5, 124(1)
  044fb34  addic 3, 1, 112
  044fb38  fadds 2, 2, 1
  044fb3c  lfs 3, 8404(4)
  044fb40  fmr 1, 3
  044fb44  stfs 2, 120(1)
  044fb48  bl 0x502910
  044fb4c  nop
  044fb50  cmpwi 3, 0
  044fb54  bt 0, 0x44fe24
  044fb58  lhz 3, 66(29)
  044fb5c  cmpwi 3, 0
  044fb60  bt 2, 0x44fe10
  044fb64  lis 3, 149
  044fb68  lfs 1, 20(31)
  044fb6c  addic 3, 3, 5056
  044fb70  lfs 2, 324(3)
  044fb74  lfs 3, 320(3)
  044fb78  fsubs 1, 2, 1
  044fb7c  lfs 2, 16(31)
  044fb80  fsubs 2, 3, 2
  044fb84  lis 3, 69
  044fb88  addi 3, 3, -2496
  044fb8c  fmuls 1, 1, 1
  044fb90  fmadds 1, 2, 2, 1
  044fb94  lfs 2, 36(3)
  044fb98  fsqrts 1, 1
  044fb9c  fcmpu 0, 1, 2
  044fba0  cror 6, 1, 2
  044fba4  bt 6, 0x44fe10
  044fba8  lis 3, 135
  044fbac  li 28, 0
  044fbb0  lwz 3, 8372(3)
  044fbb4  cmpwi 3, 0
  044fbb8  bf 1, 0x44fe10
  044fbbc  lis 3, 69
  044fbc0  addi 3, 3, -2496
  044fbc4  lfs 31, 12(3)
  044fbc8  lfs 30, 8(3)
  044fbcc  lfs 29, 4(3)
  044fbd0  lfs 28, 40(3)
  044fbd4  fmr 1, 31
  044fbd8  fmr 2, 30
  044fbdc  bl 0xfe4f0
  044fbe0  nop
  044fbe4  stfs 1, 128(1)
  044fbe8  fmr 1, 31
  044fbec  fmr 2, 30
  044fbf0  bl 0xfe4f0
  044fbf4  nop
  044fbf8  lis 3, 16256
  044fbfc  stfs 1, 132(1)
  044fc00  lfs 2, 128(1)
  044fc04  lis 27, 114
  044fc08  stw 3, 136(1)
  044fc0c  stw 3, 140(1)
  044fc10  lfs 3, 16(30)
  044fc14  lfs 4, 24(30)
  044fc18  fmuls 3, 3, 1
  044fc1c  lfs 5, 20(30)
  044fc20  fmuls 4, 4, 1
  044fc24  lfs 6, 0(30)
  044fc28  lfs 7, 8(30)
  044fc2c  fmuls 5, 5, 1
  044fc30  lfs 8, 4(30)
  044fc34  lfs 9, 28(30)
  044fc38  lfs 10, 32(30)
  044fc3c  fmuls 1, 9, 1
  044fc40  lfs 9, 12(30)
  044fc44  fmadds 3, 6, 2, 3
  044fc48  fmadds 4, 7, 2, 4
  044fc4c  lfs 6, 40(30)
  044fc50  fmadds 5, 8, 2, 5
  044fc54  lfs 7, 36(30)
  044fc58  lfs 8, 48(30)
  044fc5c  lfs 11, 56(30)
  044fc60  fmadds 1, 9, 2, 1
  044fc64  fadds 2, 3, 10
  044fc68  fadds 3, 4, 6
  044fc6c  fadds 4, 5, 7
  044fc70  lfs 5, 44(30)
  044fc74  lfs 6, 52(30)
  044fc78  lfs 7, 60(30)
  044fc7c  fadds 5, 1, 5
  044fc80  fmr 1, 31
  044fc84  fadds 2, 2, 8
  044fc88  fadds 3, 3, 11
  044fc8c  fadds 4, 4, 6
  044fc90  fadds 5, 5, 7
  044fc94  fadds 3, 3, 29
  044fc98  stfs 2, 144(1)
  044fc9c  stfs 4, 148(1)
  044fca0  stfs 5, 156(1)
  044fca4  lfs 2, -3052(27)
  044fca8  fmuls 2, 2, 28
  044fcac  stfs 3, 152(1)
  044fcb0  bl 0xfe4f0
  044fcb4  nop
  044fcb8  lfs 2, -3052(27)
  044fcbc  stfs 1, 128(1)
  044fcc0  fmr 1, 31
  044fcc4  fmuls 2, 2, 28
  044fcc8  bl 0xfe4f0
  044fccc  nop
  044fcd0  stfs 1, 132(1)
  044fcd4  lfs 1, 32(29)
  044fcd8  lfs 2, -3052(27)
  044fcdc  fmuls 1, 1, 2
  044fce0  stfs 1, 136(1)
  044fce4  lfs 1, 36(29)
  044fce8  lfs 2, 40(29)
  044fcec  bl 0xfcbe8
  044fcf0  nop
  044fcf4  lhz 3, 44(29)
  044fcf8  lhz 4, 46(29)
  044fcfc  fmr 27, 1
  044fd00  extsh 4, 4
  044fd04  extsh 3, 3
  044fd08  bl 0xfe484
  044fd0c  nop
  044fd10  lis 4, 135
  044fd14  lis 5, 269
  044fd18  lis 6, 135
  044fd1c  slwi 3, 3, 24
  044fd20  lwz 4, 8380(4)
  044fd24  or 27, 3, 4
  044fd28  lwz 3, -12608(5)
  044fd2c  lwz 4, 8376(6)
  044fd30  extsw 27, 27
  044fd34  extsw 4, 4
  044fd38  extsw 3, 3
  044fd3c  bl 0xfe484
  044fd40  nop
  044fd44  lis 4, 135
  044fd48  lis 5, 135
  044fd4c  fmr 2, 30
  044fd50  ori 7, 3, 0
  044fd54  fmr 4, 27
  044fd58  addic 3, 1, 144
  044fd5c  ori 10, 27, 0
  044fd60  lfs 1, 8364(4)
  044fd64  addic 8, 1, 128
  044fd68  lfs 3, 8368(5)
  044fd6c  bl 0x126f50
  044fd70  nop
  044fd74  ori 26, 3, 0
  044fd78  cmpwi 26, 0
  044fd7c  bt 2, 0x44fdfc
  044fd80  lwz 3, 48(29)
  044fd84  lwz 4, 52(29)
  044fd88  extsw 3, 3
  044fd8c  extsw 4, 4
  044fd90  bl 0xfe484
  044fd94  nop
  044fd98  extsw 3, 3
  044fd9c  li 4, 3
  044fda0  std 3, 160(1)
  044fda4  lis 3, 114
  044fda8  srawi 5, 27, 24
  044fdac  lfs 1, -3056(3)
  044fdb0  lfd 2, 160(1)
  044fdb4  li 3, 2
  044fdb8  fcfid 2, 2
  044fdbc  frsp 2, 2
  044fdc0  fadds 2, 2, 29
  044fdc4  fmuls 1, 1, 2
  044fdc8  fctiwz 1, 1
  044fdcc  stfd 1, 160(1)
  044fdd0  lwz 6, 164(1)
  044fdd4  stw 4, 36(26)
  044fdd8  sth 6, 10(26)
  044fddc  stb 5, 42(26)
  044fde0  stb 6, 43(26)
  044fde4  bl 0xfc620
  044fde8  nop
  044fdec  cmpwi 3, 0
  044fdf0  bt 2, 0x44fdfc
  044fdf4  li 3, 68
  044fdf8  stb 3, 3(26)
  044fdfc  lis 3, 135
  044fe00  addic 28, 28, 1
  044fe04  lwz 3, 8372(3)
  044fe08  cmpw 28, 3
  044fe0c  bt 0, 0x44fbd4
  044fe10  lis 3, 113
  044fe14  ori 4, 31, 0
  044fe18  addic 3, 3, -6080
  044fe1c  bl 0x6d7e0
  044fe20  nop
  044fe24  ld 0, 384(1)
  044fe28  mtlr 0
  044fe2c  lfd 25, 312(1)
  044fe30  lfd 26, 320(1)
  044fe34  lfd 27, 328(1)
  044fe38  lfd 28, 336(1)
  044fe3c  lfd 29, 344(1)
  044fe40  lfd 30, 352(1)
  044fe44  lfd 31, 360(1)
  044fe48  ld 15, 176(1)
  044fe4c  ld 16, 184(1)
  044fe50  ld 17, 192(1)
  044fe54  ld 18, 200(1)
  044fe58  ld 19, 208(1)
  044fe5c  ld 20, 216(1)
  044fe60  ld 21, 224(1)
  044fe64  ld 22, 232(1)
  044fe68  ld 23, 240(1)
  044fe6c  ld 24, 248(1)
  044fe70  ld 25, 256(1)
  044fe74  ld 26, 264(1)
  044fe78  ld 27, 272(1)
  044fe7c  ld 28, 280(1)
  044fe80  ld 29, 288(1)
  044fe84  ld 30, 296(1)
  044fe88  ld 31, 304(1)
  044fe8c  addi 1, 1, 368
  044fe90  blr
