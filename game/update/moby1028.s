# game/update/moby1028.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1028_0018f410:   # 0x18f410, 0x14 bytes
  018f410  lis 3, 116
  018f414  lis 4, 1
  018f418  addic 3, 3, -980
  018f41c  stw 4, 72(3)
  018f420  blr

M1028_0018f448:   # 0x18f448, 0x964 bytes
  018f448  stdu 1, -464(1)
  018f44c  mflr 0
  018f450  std 0, 480(1)
  018f454  stfd 15, 328(1)
  018f458  stfd 16, 336(1)
  018f45c  stfd 17, 344(1)
  018f460  stfd 18, 352(1)
  018f464  stfd 19, 360(1)
  018f468  stfd 20, 368(1)
  018f46c  stfd 21, 376(1)
  018f470  stfd 22, 384(1)
  018f474  stfd 23, 392(1)
  018f478  stfd 24, 400(1)
  018f47c  stfd 25, 408(1)
  018f480  stfd 26, 416(1)
  018f484  stfd 27, 424(1)
  018f488  stfd 28, 432(1)
  018f48c  stfd 29, 440(1)
  018f490  stfd 30, 448(1)
  018f494  stfd 31, 456(1)
  018f498  addi 0, 1, 128
  018f49c  stvx 23, 0, 0
  018f4a0  addic 0, 0, 16
  018f4a4  stvx 24, 0, 0
  018f4a8  addic 0, 0, 16
  018f4ac  stvx 25, 0, 0
  018f4b0  addic 0, 0, 16
  018f4b4  stvx 26, 0, 0
  018f4b8  addic 0, 0, 16
  018f4bc  stvx 27, 0, 0
  018f4c0  addic 0, 0, 16
  018f4c4  stvx 28, 0, 0
  018f4c8  addic 0, 0, 16
  018f4cc  stvx 29, 0, 0
  018f4d0  addic 0, 0, 16
  018f4d4  stvx 30, 0, 0
  018f4d8  addic 0, 0, 16
  018f4dc  stvx 31, 0, 0
  018f4e0  lis 4, 25
  018f4e4  std 30, 312(1)
  018f4e8  li 5, 4
  018f4ec  lwz 30, 120(3)
  018f4f0  addi 4, 4, -3032
  018f4f4  vspltisw 24, 0
  018f4f8  li 7, 8
  018f4fc  li 6, 12
  018f500  std 29, 304(1)
  018f504  li 8, 16
  018f508  li 29, 0
  018f50c  std 26, 280(1)
  018f510  lfs 31, 0(4)
  018f514  lis 26, 116
  018f518  std 25, 272(1)
  018f51c  <unknown>
  018f520  lis 25, 116
  018f524  std 27, 288(1)
  018f528  <unknown>
  018f52c  ori 27, 29, 0
  018f530  std 28, 296(1)
  018f534  <unknown>
  018f538  ori 28, 30, 0
  018f53c  <unknown>
  018f540  addic 26, 26, -864
  018f544  vspltw 31, 31, 0
  018f548  addic 25, 25, -848
  018f54c  std 31, 320(1)
  018f550  vspltw 30, 30, 0
  018f554  ori 31, 3, 0
  018f558  vspltw 23, 23, 0
  018f55c  vsldoi 29, 24, 24, 0
  018f560  vspltw 28, 28, 0
  018f564  lfs 5, 196(31)
  018f568  lfs 4, 192(31)
  018f56c  fmuls 1, 5, 5
  018f570  lfs 6, 200(31)
  018f574  extsw 3, 29
  018f578  std 3, 112(1)
  018f57c  lis 3, 230
  018f580  fmadds 1, 4, 4, 1
  018f584  fmadds 1, 6, 6, 1
  018f588  lfd 2, 112(1)
  018f58c  lfs 3, -4144(3)
  018f590  fcfid 2, 2
  018f594  fsqrts 1, 1
  018f598  frsp 2, 2
  018f59c  fsubs 2, 3, 2
  018f5a0  fsub 3, 2, 31
  018f5a4  fsel 2, 3, 2, 31
  018f5a8  fcmpu 0, 1, 31
  018f5ac  bf 2, 0x18f5c4
  018f5b0  fmr 1, 31
  018f5b4  lfs 7, 204(31)
  018f5b8  fmr 2, 1
  018f5bc  fmr 3, 2
  018f5c0  b 0x18f5d8
  018f5c4  fdivs 3, 2, 1
  018f5c8  lfs 7, 204(31)
  018f5cc  fmuls 1, 4, 3
  018f5d0  fmuls 2, 5, 3
  018f5d4  fmuls 3, 6, 3
  018f5d8  lfs 8, 208(31)
  018f5dc  lis 3, 116
  018f5e0  lfs 9, 4(26)
  018f5e4  lfs 10, 212(31)
  018f5e8  fmuls 8, 8, 9
  018f5ec  lfs 11, 216(31)
  018f5f0  fmuls 10, 10, 9
  018f5f4  fmuls 11, 11, 9
  018f5f8  lfs 12, -864(3)
  018f5fc  lfs 13, 220(31)
  018f600  lfs 0, 224(31)
  018f604  fmuls 9, 13, 9
  018f608  lfs 30, 8(26)
  018f60c  lfs 13, 228(31)
  018f610  lfs 29, 232(31)
  018f614  fmadds 4, 4, 12, 8
  018f618  fmadds 5, 5, 12, 10
  018f61c  lfs 8, 236(31)
  018f620  fmadds 6, 6, 12, 11
  018f624  lis 4, 116
  018f628  vcfsx 2, 29, 0
  018f62c  vspltisw 3, -1
  018f630  fmadds 7, 7, 12, 9
  018f634  lfs 9, 16(31)
  018f638  lfs 10, 20(31)
  018f63c  lfs 11, 24(31)
  018f640  fmadds 4, 0, 30, 4
  018f644  fmadds 5, 13, 30, 5
  018f648  fmadds 6, 29, 30, 6
  018f64c  vslw 3, 3, 3
  018f650  li 5, -4140
  018f654  fmadds 7, 8, 30, 7
  018f658  lfs 8, 12(26)
  018f65c  lwz 3, 112(28)
  018f660  fadds 4, 4, 9
  018f664  fadds 5, 5, 10
  018f668  fadds 6, 6, 11
  018f66c  vmaddfp 2, 2, 31, 3
  018f670  fadds 7, 7, 8
  018f674  fadds 4, 4, 1
  018f678  fadds 5, 5, 2
  018f67c  fadds 6, 6, 3
  018f680  stfs 7, 28(3)
  018f684  stfs 4, 16(3)
  018f688  stfs 5, 20(3)
  018f68c  stfs 6, 24(3)
  018f690  lfs 4, 208(31)
  018f694  lfs 5, 4(25)
  018f698  lfs 6, 212(31)
  018f69c  lfs 7, 192(31)
  018f6a0  fmuls 4, 4, 5
  018f6a4  lfs 8, -848(4)
  018f6a8  fmuls 6, 6, 5
  018f6ac  lfs 9, 216(31)
  018f6b0  lfs 10, 196(31)
  018f6b4  fmuls 9, 9, 5
  018f6b8  lfs 11, 200(31)
  018f6bc  lfs 12, 224(31)
  018f6c0  lfs 13, 8(25)
  018f6c4  lfs 0, 220(31)
  018f6c8  fmuls 5, 0, 5
  018f6cc  fmadds 4, 7, 8, 4
  018f6d0  fmadds 6, 10, 8, 6
  018f6d4  lfs 7, 228(31)
  018f6d8  lfs 10, 232(31)
  018f6dc  fmadds 9, 11, 8, 9
  018f6e0  lfs 11, 204(31)
  018f6e4  lis 3, 230
  018f6e8  lfs 0, 236(31)
  018f6ec  lfs 30, 16(31)
  018f6f0  fmadds 5, 11, 8, 5
  018f6f4  fmadds 4, 12, 13, 4
  018f6f8  fmadds 6, 7, 13, 6
  018f6fc  lfs 8, 20(31)
  018f700  fmadds 7, 10, 13, 9
  018f704  lfs 9, 24(31)
  018f708  lfs 10, 12(25)
  018f70c  lwz 4, 192(28)
  018f710  fmadds 5, 0, 13, 5
  018f714  fadds 4, 4, 30
  018f718  fadds 6, 6, 8
  018f71c  fadds 7, 7, 9
  018f720  fadds 1, 4, 1
  018f724  fadds 2, 6, 2
  018f728  fadds 4, 5, 10
  018f72c  fadds 3, 7, 3
  018f730  stfs 1, 16(4)
  018f734  stfs 2, 20(4)
  018f738  stfs 4, 28(4)
  018f73c  stfs 3, 24(4)
  018f740  <unknown>
  018f744  vnmsubfp 2, 3, 31, 2
  018f748  lwz 3, 112(28)
  018f74c  vxor 2, 2, 23
  018f750  vspltw 3, 2, 0
  018f754  vcmpgtfp. 4, 3, 30
  018f758  bt 26, 0x18f764
  018f75c  vsldoi 2, 30, 30, 0
  018f760  b 0x18f770
  018f764  vcmpgefp. 3, 3, 24
  018f768  bf 26, 0x18f770
  018f76c  vsldoi 2, 24, 24, 0
  018f770  vspltw 2, 2, 0
  018f774  li 4, 64
  018f778  vxor 3, 23, 2
  018f77c  stvewx 3, 4, 3
  018f780  lwz 3, 192(28)
  018f784  stvewx 2, 4, 3
  018f788  lwz 3, 112(28)
  018f78c  bl 0xf31a8
  018f790  nop
  018f794  lwz 3, 192(28)
  018f798  bl 0xf31a8
  018f79c  nop
  018f7a0  addic 29, 29, 1
  018f7a4  vadduwm 29, 29, 28
  018f7a8  addic 28, 28, 4
  018f7ac  cmpwi 29, 20
  018f7b0  bt 0, 0x18f564
  018f7b4  lis 3, 25
  018f7b8  li 4, 28
  018f7bc  addi 3, 3, -3032
  018f7c0  vsldoi 25, 24, 24, 0
  018f7c4  lfs 30, 20(3)
  018f7c8  lfs 29, 24(3)
  018f7cc  <unknown>
  018f7d0  vspltw 29, 29, 0
  018f7d4  lfs 1, 196(31)
  018f7d8  subfic 3, 27, 4
  018f7dc  fmuls 2, 1, 1
  018f7e0  extsw 3, 3
  018f7e4  lis 4, 116
  018f7e8  lis 5, 116
  018f7ec  std 3, 112(1)
  018f7f0  lfs 3, 192(31)
  018f7f4  extsw 3, 27
  018f7f8  lfs 4, 200(31)
  018f7fc  lfs 5, -828(4)
  018f800  fmadds 2, 3, 3, 2
  018f804  lis 4, 230
  018f808  lfs 6, -832(5)
  018f80c  lfd 7, 112(1)
  018f810  std 3, 112(1)
  018f814  fcfid 7, 7
  018f818  lfs 8, -4144(4)
  018f81c  lfd 9, 112(1)
  018f820  fcfid 9, 9
  018f824  fmadds 2, 4, 4, 2
  018f828  frsp 7, 7
  018f82c  lis 3, 116
  018f830  frsp 9, 9
  018f834  fsqrts 2, 2
  018f838  lis 4, 116
  018f83c  vspltisw 2, -1
  018f840  li 5, -4140
  018f844  lis 6, 230
  018f848  vslw 2, 2, 2
  018f84c  fmadds 5, 7, 5, 6
  018f850  fnmsubs 6, 9, 30, 8
  018f854  lfs 9, 208(31)
  018f858  lfs 10, 4(26)
  018f85c  lfs 11, 212(31)
  018f860  fmuls 9, 9, 10
  018f864  lfs 12, 216(31)
  018f868  lfs 13, -864(3)
  018f86c  fmuls 11, 11, 10
  018f870  fmuls 12, 12, 10
  018f874  lfs 0, 220(31)
  018f878  lfs 25, 224(31)
  018f87c  fsub 7, 6, 5
  018f880  fsubs 8, 6, 29
  018f884  lfs 24, 8(26)
  018f888  fmuls 10, 0, 10
  018f88c  lfs 23, 228(31)
  018f890  lfs 22, 232(31)
  018f894  fmadds 9, 3, 13, 9
  018f898  fmadds 11, 1, 13, 11
  018f89c  lfs 21, 204(31)
  018f8a0  fmadds 12, 4, 13, 12
  018f8a4  lfs 20, 236(31)
  018f8a8  fsel 6, 7, 6, 5
  018f8ac  fsub 7, 8, 5
  018f8b0  fmadds 10, 21, 13, 10
  018f8b4  lfs 19, 16(31)
  018f8b8  lfs 18, 20(31)
  018f8bc  fmadds 9, 25, 24, 9
  018f8c0  fmadds 11, 23, 24, 11
  018f8c4  lfs 17, 24(31)
  018f8c8  fmadds 12, 22, 24, 12
  018f8cc  lfs 16, 12(26)
  018f8d0  lwz 3, 272(30)
  018f8d4  fsel 5, 7, 8, 5
  018f8d8  fmadds 10, 20, 24, 10
  018f8dc  fadds 9, 9, 19
  018f8e0  fadds 11, 11, 18
  018f8e4  fadds 12, 12, 17
  018f8e8  fdivs 6, 6, 2
  018f8ec  fdivs 5, 5, 2
  018f8f0  fsub 8, 31, 2
  018f8f4  fsub 28, 31, 2
  018f8f8  fsub 7, 31, 2
  018f8fc  fsub 26, 2, 31
  018f900  fsub 15, 2, 31
  018f904  fsub 27, 2, 31
  018f908  fsub 13, 31, 2
  018f90c  fadds 10, 10, 16
  018f910  vcfsx 28, 25, 0
  018f914  stfs 10, 28(3)
  018f918  vmaddfp 28, 28, 29, 2
  018f91c  fmuls 0, 4, 6
  018f920  fmuls 25, 1, 6
  018f924  fmuls 6, 3, 6
  018f928  fsel 7, 7, 31, 0
  018f92c  fsel 8, 8, 31, 25
  018f930  fsel 28, 28, 31, 6
  018f934  fmuls 4, 4, 5
  018f938  fmuls 1, 1, 5
  018f93c  fmuls 3, 3, 5
  018f940  fsel 7, 27, 7, 0
  018f944  fsel 8, 26, 8, 25
  018f948  fsel 6, 15, 28, 6
  018f94c  fsub 5, 31, 2
  018f950  fsub 0, 31, 2
  018f954  fadds 7, 12, 7
  018f958  fadds 8, 11, 8
  018f95c  fadds 6, 9, 6
  018f960  fsub 9, 2, 31
  018f964  fsub 11, 2, 31
  018f968  fsel 12, 13, 31, 4
  018f96c  fsub 2, 2, 31
  018f970  fsel 5, 5, 31, 3
  018f974  fsel 13, 0, 31, 1
  018f978  stfs 8, 20(3)
  018f97c  stfs 6, 16(3)
  018f980  stfs 7, 24(3)
  018f984  fsel 4, 9, 12, 4
  018f988  lfs 6, 208(31)
  018f98c  lfs 7, 4(25)
  018f990  lfs 8, 212(31)
  018f994  fsel 2, 2, 5, 3
  018f998  lfs 9, 192(31)
  018f99c  fmuls 6, 6, 7
  018f9a0  lfs 3, -848(4)
  018f9a4  fmuls 5, 8, 7
  018f9a8  lfs 8, 216(31)
  018f9ac  fsel 1, 11, 13, 1
  018f9b0  lfs 10, 196(31)
  018f9b4  fmuls 8, 8, 7
  018f9b8  lfs 11, 200(31)
  018f9bc  lfs 12, 224(31)
  018f9c0  lfs 13, 8(25)
  018f9c4  lfs 0, 220(31)
  018f9c8  fmadds 6, 9, 3, 6
  018f9cc  fmadds 5, 10, 3, 5
  018f9d0  fmuls 7, 0, 7
  018f9d4  lfs 9, 228(31)
  018f9d8  lfs 10, 232(31)
  018f9dc  fmadds 8, 11, 3, 8
  018f9e0  lfs 11, 204(31)
  018f9e4  lis 4, 230
  018f9e8  lfs 0, 236(31)
  018f9ec  fmadds 6, 12, 13, 6
  018f9f0  fmadds 5, 9, 13, 5
  018f9f4  fmadds 3, 11, 3, 7
  018f9f8  fmadds 7, 10, 13, 8
  018f9fc  lfs 8, 16(31)
  018fa00  lfs 9, 20(31)
  018fa04  lfs 10, 24(31)
  018fa08  lfs 11, 12(25)
  018fa0c  lwz 3, 312(30)
  018fa10  fadds 6, 6, 8
  018fa14  fadds 5, 5, 9
  018fa18  fmadds 3, 0, 13, 3
  018fa1c  fadds 7, 7, 10
  018fa20  fadds 2, 6, 2
  018fa24  fadds 1, 5, 1
  018fa28  fadds 3, 3, 11
  018fa2c  fadds 4, 7, 4
  018fa30  stfs 2, 16(3)
  018fa34  stfs 1, 20(3)
  018fa38  stfs 3, 28(3)
  018fa3c  stfs 4, 24(3)
  018fa40  <unknown>
  018fa44  li 3, -4128
  018fa48  vnmsubfp 27, 4, 31, 28
  018fa4c  <unknown>
  018fa50  vxor 27, 27, 23
  018fa54  vspltw 5, 27, 0
  018fa58  vnmsubfp 2, 3, 31, 27
  018fa5c  vcmpgtfp. 6, 5, 30
  018fa60  bt 26, 0x18fa6c
  018fa64  vsldoi 27, 30, 30, 0
  018fa68  b 0x18fa78
  018fa6c  vcmpgefp. 5, 5, 24
  018fa70  bf 26, 0x18fa78
  018fa74  vsldoi 27, 24, 24, 0
  018fa78  vspltw 5, 2, 0
  018fa7c  vspltw 27, 27, 0
  018fa80  vcmpgtfp. 6, 5, 30
  018fa84  bt 26, 0x18fa90
  018fa88  vsldoi 2, 30, 30, 0
  018fa8c  b 0x18fa9c
  018fa90  vcmpgefp. 5, 5, 24
  018fa94  bf 26, 0x18fa9c
  018fa98  vsldoi 2, 24, 24, 0
  018fa9c  vcmpeqfp. 7, 27, 24
  018faa0  vspltw 2, 2, 0
  018faa4  vsldoi 5, 4, 4, 0
  018faa8  vsldoi 6, 3, 3, 0
  018faac  bf 26, 0x18faec
  018fab0  vcmpeqfp. 2, 2, 24
  018fab4  vsldoi 5, 4, 4, 0
  018fab8  vsldoi 6, 3, 3, 0
  018fabc  bt 26, 0x18faec
  018fac0  li 3, 1
  018fac4  lwz 5, 272(30)
  018fac8  li 4, 0
  018facc  bl 0x15d12c
  018fad0  nop
  018fad4  lis 3, 230
  018fad8  li 4, -4140
  018fadc  lis 5, 230
  018fae0  li 6, -4128
  018fae4  <unknown>
  018fae8  <unknown>
  018faec  vspltw 2, 5, 0
  018faf0  vspltw 3, 6, 0
  018faf4  vnmsubfp 2, 2, 31, 28
  018faf8  vxor 5, 2, 23
  018fafc  vsubfp 5, 5, 29
  018fb00  vcmpgtfp. 4, 5, 30
  018fb04  vnmsubfp 2, 3, 31, 5
  018fb08  bt 26, 0x18fb14
  018fb0c  vsldoi 26, 30, 30, 0
  018fb10  b 0x18fb24
  018fb14  vcmpgefp. 3, 5, 24
  018fb18  vsldoi 26, 5, 5, 0
  018fb1c  bf 26, 0x18fb24
  018fb20  vsldoi 26, 24, 24, 0
  018fb24  vcmpgtfp. 3, 2, 30
  018fb28  bt 26, 0x18fb34
  018fb2c  vsldoi 2, 30, 30, 0
  018fb30  b 0x18fb40
  018fb34  vcmpgefp. 3, 2, 24
  018fb38  bf 26, 0x18fb40
  018fb3c  vsldoi 2, 24, 24, 0
  018fb40  vcmpeqfp. 3, 26, 24
  018fb44  bf 26, 0x18fb64
  018fb48  vcmpeqfp. 2, 2, 24
  018fb4c  bt 26, 0x18fb64
  018fb50  li 3, 1
  018fb54  lwz 5, 312(30)
  018fb58  li 4, 0
  018fb5c  bl 0x15d12c
  018fb60  nop
  018fb64  vxor 2, 23, 27
  018fb68  li 3, 64
  018fb6c  lwz 6, 272(30)
  018fb70  lis 4, 230
  018fb74  li 5, -4136
  018fb78  stvewx 2, 3, 6
  018fb7c  lwz 6, 312(30)
  018fb80  stvewx 26, 3, 6
  018fb84  <unknown>
  018fb88  vnmsubfp 27, 3, 31, 28
  018fb8c  lis 3, 230
  018fb90  li 4, -4124
  018fb94  <unknown>
  018fb98  vxor 27, 27, 23
  018fb9c  vspltw 5, 27, 0
  018fba0  vnmsubfp 4, 2, 31, 27
  018fba4  vcmpgtfp. 6, 5, 30
  018fba8  bt 26, 0x18fbb4
  018fbac  vsldoi 27, 30, 30, 0
  018fbb0  b 0x18fbc0
  018fbb4  vcmpgefp. 5, 5, 24
  018fbb8  bf 26, 0x18fbc0
  018fbbc  vsldoi 27, 24, 24, 0
  018fbc0  vspltw 5, 4, 0
  018fbc4  vspltw 27, 27, 0
  018fbc8  vcmpgtfp. 6, 5, 30
  018fbcc  bt 26, 0x18fbd8
  018fbd0  vsldoi 4, 30, 30, 0
  018fbd4  b 0x18fbe4
  018fbd8  vcmpgefp. 5, 5, 24
  018fbdc  bf 26, 0x18fbe4
  018fbe0  vsldoi 4, 24, 24, 0
  018fbe4  vcmpeqfp. 7, 27, 24
  018fbe8  vspltw 4, 4, 0
  018fbec  vsldoi 5, 3, 3, 0
  018fbf0  vsldoi 6, 2, 2, 0
  018fbf4  bf 26, 0x18fc34
  018fbf8  vcmpeqfp. 4, 4, 24
  018fbfc  vsldoi 5, 3, 3, 0
  018fc00  vsldoi 6, 2, 2, 0
  018fc04  bt 26, 0x18fc34
  018fc08  li 3, 2
  018fc0c  lwz 5, 272(30)
  018fc10  li 4, 0
  018fc14  bl 0x15d12c
  018fc18  nop
  018fc1c  lis 3, 230
  018fc20  li 4, -4136
  018fc24  lis 5, 230
  018fc28  li 6, -4124
  018fc2c  <unknown>
  018fc30  <unknown>
  018fc34  vspltw 2, 5, 0
  018fc38  vnmsubfp 3, 2, 31, 28
  018fc3c  vspltw 2, 6, 0
  018fc40  vnmsubfp 2, 2, 31, 27
  018fc44  vxor 28, 3, 23
  018fc48  vsubfp 28, 28, 29
  018fc4c  vcmpgtfp. 3, 28, 30
  018fc50  bt 26, 0x18fc5c
  018fc54  vsldoi 28, 30, 30, 0
  018fc58  b 0x18fc68
  018fc5c  vcmpgefp. 3, 28, 24
  018fc60  bf 26, 0x18fc68
  018fc64  vsldoi 28, 24, 24, 0
  018fc68  vcmpgtfp. 3, 2, 30
  018fc6c  bt 26, 0x18fc78
  018fc70  vsldoi 2, 30, 30, 0
  018fc74  b 0x18fc84
  018fc78  vcmpgefp. 3, 2, 24
  018fc7c  bf 26, 0x18fc84
  018fc80  vsldoi 2, 24, 24, 0
  018fc84  vcmpeqfp. 3, 28, 24
  018fc88  bf 26, 0x18fca8
  018fc8c  vcmpeqfp. 2, 2, 24
  018fc90  bt 26, 0x18fca8
  018fc94  li 3, 2
  018fc98  li 4, 0
  018fc9c  lwz 5, 312(30)
  018fca0  bl 0x15d12c
  018fca4  nop
  018fca8  vxor 2, 23, 27
  018fcac  li 3, 68
  018fcb0  lwz 4, 272(30)
  018fcb4  vxor 3, 23, 28
  018fcb8  stvewx 2, 3, 4
  018fcbc  lwz 4, 312(30)
  018fcc0  stvewx 3, 3, 4
  018fcc4  lwz 3, 272(30)
  018fcc8  bl 0xf31a8
  018fccc  nop
  018fcd0  lwz 3, 312(30)
  018fcd4  bl 0xf31a8
  018fcd8  nop
  018fcdc  vspltisw 2, 2
  018fce0  addic 27, 27, 1
  018fce4  addic 30, 30, 4
  018fce8  cmpwi 27, 10
  018fcec  vadduwm 25, 25, 2
  018fcf0  bt 0, 0x18f7d4
  018fcf4  li 0, 128
  018fcf8  lvx 23, 1, 0
  018fcfc  addic 0, 0, 16
  018fd00  lvx 24, 1, 0
  018fd04  addic 0, 0, 16
  018fd08  lvx 25, 1, 0
  018fd0c  addic 0, 0, 16
  018fd10  lvx 26, 1, 0
  018fd14  addic 0, 0, 16
  018fd18  lvx 27, 1, 0
  018fd1c  addic 0, 0, 16
  018fd20  lvx 28, 1, 0
  018fd24  addic 0, 0, 16
  018fd28  lvx 29, 1, 0
  018fd2c  addic 0, 0, 16
  018fd30  lvx 30, 1, 0
  018fd34  addic 0, 0, 16
  018fd38  lvx 31, 1, 0
  018fd3c  ld 0, 480(1)
  018fd40  mtlr 0
  018fd44  lfd 15, 328(1)
  018fd48  lfd 16, 336(1)
  018fd4c  lfd 17, 344(1)
  018fd50  lfd 18, 352(1)
  018fd54  lfd 19, 360(1)
  018fd58  lfd 20, 368(1)
  018fd5c  lfd 21, 376(1)
  018fd60  lfd 22, 384(1)
  018fd64  lfd 23, 392(1)
  018fd68  lfd 24, 400(1)
  018fd6c  lfd 25, 408(1)
  018fd70  lfd 26, 416(1)
  018fd74  lfd 27, 424(1)
  018fd78  lfd 28, 432(1)
  018fd7c  lfd 29, 440(1)
  018fd80  lfd 30, 448(1)
  018fd84  lfd 31, 456(1)
  018fd88  ld 25, 272(1)
  018fd8c  ld 26, 280(1)
  018fd90  ld 27, 288(1)
  018fd94  ld 28, 296(1)
  018fd98  ld 29, 304(1)
  018fd9c  ld 30, 312(1)
  018fda0  ld 31, 320(1)
  018fda4  addi 1, 1, 464
  018fda8  blr

UpdateMoby_1028_BlargPlatform:   # 0x18fdc8, 0xa04 bytes
  018fdc8  stdu 1, -256(1)
  018fdcc  mflr 0
  018fdd0  std 0, 272(1)
  018fdd4  stfd 26, 208(1)
  018fdd8  stfd 27, 216(1)
  018fddc  stfd 28, 224(1)
  018fde0  stfd 29, 232(1)
  018fde4  stfd 30, 240(1)
  018fde8  stfd 31, 248(1)
  018fdec  std 31, 200(1)
  018fdf0  ori 31, 3, 0
  018fdf4  std 30, 192(1)
  018fdf8  lbz 3, 32(31)
  018fdfc  lwz 30, 120(31)
  018fe00  cmpwi 3, 6
  018fe04  cmpwi 1, 3, 5
  018fe08  cmpwi 6, 3, 4
  018fe0c  std 29, 184(1)
  018fe10  std 28, 176(1)
  018fe14  std 27, 168(1)
  018fe18  std 26, 160(1)
  018fe1c  std 25, 152(1)
  018fe20  std 24, 144(1)
  018fe24  cmpwi 7, 3, 3
  018fe28  bt 2, 0x190784
  018fe2c  bt 6, 0x1906ac
  018fe30  bt 26, 0x190258
  018fe34  bt 30, 0x190150
  018fe38  cmpwi 3, 1
  018fe3c  bt 2, 0x1900f4
  018fe40  cmpwi 3, 0
  018fe44  bf 2, 0x190784
  018fe48  lis 3, 151
  018fe4c  lbz 5, 176(31)
  018fe50  lis 4, 161
  018fe54  addic 4, 4, -13692
  018fe58  lwz 3, -25488(3)
  018fe5c  addc 4, 5, 4
  018fe60  slwi 3, 3, 4
  018fe64  clrldi 4, 4, 32
  018fe68  extsw 3, 3
  018fe6c  lbzx 3, 4, 3
  018fe70  cmpwi 3, 255
  018fe74  bf 2, 0x18fea4
  018fe78  li 3, 6
  018fe7c  lis 5, 230
  018fe80  lis 6, 16800
  018fe84  lis 7, 230
  018fe88  lis 4, 17530
  018fe8c  stb 3, 32(31)
  018fe90  lis 8, 230
  018fe94  stw 6, -4144(5)
  018fe98  stw 4, -4140(7)
  018fe9c  stw 4, -4136(8)
  018fea0  b 0x18feac
  018fea4  li 3, 1
  018fea8  stb 3, 32(31)
  018feac  li 26, 0
  018feb0  lis 29, 151
  018feb4  ori 28, 26, 0
  018feb8  ori 27, 30, 0
  018febc  addic 29, 29, -25376
  018fec0  li 3, 1029
  018fec4  bl 0xefa28
  018fec8  nop
  018fecc  li 25, 64
  018fed0  stw 3, 112(27)
  018fed4  li 24, 1
  018fed8  sth 25, 50(3)
  018fedc  lwz 4, 112(27)
  018fee0  li 3, 1029
  018fee4  stb 24, 49(4)
  018fee8  lwz 4, 8320(29)
  018feec  lwz 5, 112(27)
  018fef0  ld 4, 56(4)
  018fef4  std 4, 56(5)
  018fef8  lwz 4, 112(27)
  018fefc  lhz 5, 52(31)
  018ff00  sth 5, 52(4)
  018ff04  lwz 4, 112(27)
  018ff08  lfs 1, 16(31)
  018ff0c  stfs 1, 16(4)
  018ff10  lfs 1, 20(31)
  018ff14  stfs 1, 20(4)
  018ff18  lfs 1, 24(31)
  018ff1c  stfs 1, 24(4)
  018ff20  lfs 1, 28(31)
  018ff24  stfs 1, 28(4)
  018ff28  lwz 4, 112(27)
  018ff2c  lfs 1, 64(31)
  018ff30  stfs 1, 64(4)
  018ff34  lfs 1, 68(31)
  018ff38  stfs 1, 68(4)
  018ff3c  lfs 1, 72(31)
  018ff40  stfs 1, 72(4)
  018ff44  lfs 1, 76(31)
  018ff48  stfs 1, 76(4)
  018ff4c  bl 0xefa28
  018ff50  nop
  018ff54  stw 3, 192(27)
  018ff58  sth 25, 50(3)
  018ff5c  lwz 3, 192(27)
  018ff60  addic 26, 26, 1
  018ff64  cmpwi 26, 20
  018ff68  stb 24, 49(3)
  018ff6c  lwz 3, 192(27)
  018ff70  ld 4, 56(31)
  018ff74  std 4, 56(3)
  018ff78  lwz 3, 192(27)
  018ff7c  lhz 4, 52(31)
  018ff80  sth 4, 52(3)
  018ff84  lwz 3, 192(27)
  018ff88  lfs 1, 16(31)
  018ff8c  stfs 1, 16(3)
  018ff90  lfs 1, 20(31)
  018ff94  stfs 1, 20(3)
  018ff98  lfs 1, 24(31)
  018ff9c  stfs 1, 24(3)
  018ffa0  lfs 1, 28(31)
  018ffa4  stfs 1, 28(3)
  018ffa8  lwz 3, 192(27)
  018ffac  lfs 1, 64(31)
  018ffb0  addic 27, 27, 4
  018ffb4  stfs 1, 64(3)
  018ffb8  lfs 1, 68(31)
  018ffbc  stfs 1, 68(3)
  018ffc0  lfs 1, 72(31)
  018ffc4  stfs 1, 72(3)
  018ffc8  lfs 1, 76(31)
  018ffcc  stfs 1, 76(3)
  018ffd0  bt 0, 0x18fec0
  018ffd4  li 3, 1030
  018ffd8  bl 0xefa28
  018ffdc  nop
  018ffe0  li 27, 64
  018ffe4  stw 3, 272(30)
  018ffe8  li 26, 1
  018ffec  sth 27, 50(3)
  018fff0  lwz 4, 272(30)
  018fff4  li 3, 1030
  018fff8  stb 26, 49(4)
  018fffc  lwz 4, 8320(29)
  0190000  lwz 5, 272(30)
  0190004  ld 4, 56(4)
  0190008  std 4, 56(5)
  019000c  lwz 4, 272(30)
  0190010  lhz 5, 52(31)
  0190014  sth 5, 52(4)
  0190018  lwz 4, 272(30)
  019001c  lfs 1, 16(31)
  0190020  stfs 1, 16(4)
  0190024  lfs 1, 20(31)
  0190028  stfs 1, 20(4)
  019002c  lfs 1, 24(31)
  0190030  stfs 1, 24(4)
  0190034  lfs 1, 28(31)
  0190038  stfs 1, 28(4)
  019003c  lwz 4, 272(30)
  0190040  lfs 1, 64(31)
  0190044  stfs 1, 64(4)
  0190048  lfs 1, 68(31)
  019004c  stfs 1, 68(4)
  0190050  lfs 1, 72(31)
  0190054  stfs 1, 72(4)
  0190058  lfs 1, 76(31)
  019005c  stfs 1, 76(4)
  0190060  bl 0xefa28
  0190064  nop
  0190068  stw 3, 312(30)
  019006c  sth 27, 50(3)
  0190070  lwz 3, 312(30)
  0190074  addic 28, 28, 1
  0190078  cmpwi 28, 10
  019007c  stb 26, 49(3)
  0190080  lwz 3, 312(30)
  0190084  ld 4, 56(31)
  0190088  std 4, 56(3)
  019008c  lwz 3, 312(30)
  0190090  lhz 4, 52(31)
  0190094  sth 4, 52(3)
  0190098  lwz 3, 312(30)
  019009c  lfs 1, 16(31)
  01900a0  stfs 1, 16(3)
  01900a4  lfs 1, 20(31)
  01900a8  stfs 1, 20(3)
  01900ac  lfs 1, 24(31)
  01900b0  stfs 1, 24(3)
  01900b4  lfs 1, 28(31)
  01900b8  stfs 1, 28(3)
  01900bc  lwz 3, 312(30)
  01900c0  lfs 1, 64(31)
  01900c4  addic 30, 30, 4
  01900c8  stfs 1, 64(3)
  01900cc  lfs 1, 68(31)
  01900d0  stfs 1, 68(3)
  01900d4  lfs 1, 72(31)
  01900d8  stfs 1, 72(3)
  01900dc  lfs 1, 76(31)
  01900e0  stfs 1, 76(3)
  01900e4  bt 0, 0x18ffd4
  01900e8  ori 3, 31, 0
  01900ec  bl 0x18f448
  01900f0  b 0x190784
  01900f4  lis 3, 151
  01900f8  addic 3, 3, -25376
  01900fc  lbz 3, 8356(3)
  0190100  cmpwi 3, 1
  0190104  bf 2, 0x190784
  0190108  lis 3, 151
  019010c  addic 3, 3, -16064
  0190110  lbz 3, 22(3)
  0190114  cmpwi 3, 0
  0190118  bt 2, 0x190784
  019011c  lis 3, 161
  0190120  lwz 3, 1800(3)
  0190124  cmpwi 3, 0
  0190128  bf 2, 0x190784
  019012c  lis 3, 150
  0190130  lis 4, 16256
  0190134  lis 6, -17373
  0190138  li 5, 3
  019013c  stw 4, -12528(3)
  0190140  ori 3, 6, 55050
  0190144  stb 5, 32(31)
  0190148  stw 3, 108(30)
  019014c  b 0x190784
  0190150  lis 3, 25
  0190154  addi 4, 3, -596
  0190158  lis 3, 114
  019015c  lfs 1, 0(4)
  0190160  lfs 2, -3056(3)
  0190164  lfs 3, 4(4)
  0190168  fmuls 2, 2, 1
  019016c  fmr 31, 3
  0190170  addic 3, 30, 108
  0190174  lwz 29, 108(30)
  0190178  fctidz 2, 2
  019017c  fmr 1, 31
  0190180  fcfid 2, 2
  0190184  frsp 2, 2
  0190188  fdivs 2, 31, 2
  019018c  bl 0x109af0
  0190190  nop
  0190194  lwz 4, 108(30)
  0190198  lis 5, 150
  019019c  lfs 1, 108(30)
  01901a0  cmpwi 29, 0
  01901a4  srawi 3, 4, 31
  01901a8  fabs 1, 1
  01901ac  srwi 6, 3, 1
  01901b0  xor 6, 6, 4
  01901b4  subc 3, 6, 3
  01901b8  fsubs 1, 31, 1
  01901bc  stfs 1, -12528(5)
  01901c0  bf 0, 0x190228
  01901c4  cmpwi 4, 0
  01901c8  bt 0, 0x190228
  01901cc  lis 3, 151
  01901d0  li 5, 114
  01901d4  addic 4, 3, -25376
  01901d8  li 6, 1
  01901dc  addic 3, 4, 128
  01901e0  addic 4, 4, 144
  01901e4  bl 0xa0c38
  01901e8  nop
  01901ec  lis 3, 165
  01901f0  lwz 4, 96(30)
  01901f4  li 5, 1
  01901f8  slwi 4, 4, 7
  01901fc  li 6, 0
  0190200  li 7, 0
  0190204  lwz 3, 7128(3)
  0190208  addc 3, 3, 4
  019020c  addic 4, 3, 48
  0190210  addic 8, 3, 112
  0190214  clrldi 3, 4, 32
  0190218  clrldi 4, 8, 32
  019021c  bl 0x47f74
  0190220  nop
  0190224  b 0x190784
  0190228  lis 4, 16256
  019022c  cmpw 3, 4
  0190230  bt 0, 0x190784
  0190234  li 5, 4
  0190238  li 3, 0
  019023c  li 4, 4
  0190240  stb 5, 32(31)
  0190244  lwz 5, 308(30)
  0190248  bl 0x15d12c
  019024c  nop
  0190250  stb 3, 188(31)
  0190254  b 0x190784
  0190258  lbz 3, 176(31)
  019025c  bl 0xf1e50
  0190260  nop
  0190264  lis 3, 230
  0190268  lis 4, 25
  019026c  lis 5, 16800
  0190270  addi 4, 4, -596
  0190274  lwz 6, -4144(3)
  0190278  lfs 1, -4144(3)
  019027c  srawi 3, 6, 31
  0190280  lfs 2, 8(4)
  0190284  srwi 7, 3, 1
  0190288  xor 4, 7, 6
  019028c  subc 3, 4, 3
  0190290  cmpw 3, 5
  0190294  bf 0, 0x1902e4
  0190298  lis 3, 116
  019029c  lis 4, 114
  01902a0  lis 6, 116
  01902a4  lis 7, 114
  01902a8  lis 29, 230
  01902ac  lfs 3, -812(3)
  01902b0  lis 5, 230
  01902b4  lfs 1, -3048(4)
  01902b8  addic 3, 29, -4144
  01902bc  lfs 4, -824(6)
  01902c0  addic 5, 5, -4132
  01902c4  fmuls 3, 3, 1
  01902c8  fmr 1, 2
  01902cc  lfs 2, -3052(7)
  01902d0  fmuls 4, 4, 2
  01902d4  fmr 2, 3
  01902d8  bl 0x109c30
  01902dc  nop
  01902e0  lfs 1, -4144(29)
  01902e4  lis 3, 116
  01902e8  lfs 2, -800(3)
  01902ec  fcmpu 0, 2, 1
  01902f0  cror 6, 1, 2
  01902f4  bt 6, 0x19036c
  01902f8  lis 3, 230
  01902fc  lis 4, 25
  0190300  lis 5, 17530
  0190304  addi 4, 4, -596
  0190308  lwz 3, -4140(3)
  019030c  srawi 6, 3, 31
  0190310  lfs 1, 12(4)
  0190314  srwi 7, 6, 1
  0190318  xor 3, 7, 3
  019031c  subc 3, 3, 6
  0190320  cmpw 3, 5
  0190324  bf 0, 0x19036c
  0190328  lis 3, 116
  019032c  lis 4, 114
  0190330  lis 6, 116
  0190334  lis 8, 114
  0190338  lis 5, 230
  019033c  lfs 2, -808(3)
  0190340  lis 7, 230
  0190344  lfs 3, -3048(4)
  0190348  addic 3, 5, -4140
  019034c  lfs 4, -820(6)
  0190350  addic 5, 7, -4128
  0190354  fmuls 2, 2, 3
  0190358  lfs 3, -3052(8)
  019035c  fmuls 4, 4, 3
  0190360  fmr 3, 2
  0190364  bl 0x109c30
  0190368  nop
  019036c  lis 3, 116
  0190370  lis 4, 230
  0190374  lwz 3, -796(3)
  0190378  lwz 4, -4140(4)
  019037c  srawi 5, 3, 31
  0190380  srawi 6, 4, 31
  0190384  srwi 7, 5, 1
  0190388  srwi 8, 6, 1
  019038c  xor 3, 7, 3
  0190390  xor 4, 8, 4
  0190394  subc 3, 3, 5
  0190398  subc 4, 4, 6
  019039c  cmpw 3, 4
  01903a0  bf 0, 0x190418
  01903a4  lis 3, 230
  01903a8  lis 4, 25
  01903ac  lis 5, 17530
  01903b0  addi 4, 4, -596
  01903b4  lwz 3, -4136(3)
  01903b8  srawi 6, 3, 31
  01903bc  lfs 1, 12(4)
  01903c0  srwi 4, 6, 1
  01903c4  xor 3, 4, 3
  01903c8  subc 3, 3, 6
  01903cc  cmpw 3, 5
  01903d0  bf 0, 0x190418
  01903d4  lis 3, 116
  01903d8  lis 4, 114
  01903dc  lis 6, 116
  01903e0  lis 5, 230
  01903e4  lis 7, 230
  01903e8  lfs 2, -804(3)
  01903ec  lfs 3, -3048(4)
  01903f0  addic 3, 5, -4136
  01903f4  lis 4, 114
  01903f8  lfs 4, -816(6)
  01903fc  fmuls 2, 2, 3
  0190400  addic 5, 7, -4124
  0190404  lfs 3, -3052(4)
  0190408  fmuls 4, 4, 3
  019040c  fmr 3, 2
  0190410  bl 0x109c30
  0190414  nop
  0190418  lis 3, 230
  019041c  lis 4, 17530
  0190420  lwz 3, -4136(3)
  0190424  srawi 5, 3, 31
  0190428  srwi 6, 5, 1
  019042c  xor 3, 6, 3
  0190430  subc 3, 3, 5
  0190434  cmpw 3, 4
  0190438  bt 0, 0x19044c
  019043c  li 3, 5
  0190440  lis 4, -16512
  0190444  stb 3, 32(31)
  0190448  stw 4, 108(30)
  019044c  lis 3, 230
  0190450  lis 4, 16800
  0190454  lwz 3, -4144(3)
  0190458  lbz 29, 188(31)
  019045c  srawi 5, 3, 31
  0190460  srwi 6, 5, 1
  0190464  xor 3, 6, 3
  0190468  subc 3, 3, 5
  019046c  cmpw 3, 4
  0190470  bt 0, 0x1904e0
  0190474  lwz 3, 308(30)
  0190478  ori 4, 29, 0
  019047c  bl 0x15cc7c
  0190480  nop
  0190484  cmpwi 3, 0
  0190488  bt 2, 0x1904e0
  019048c  cmpwi 29, -1
  0190490  bt 2, 0x1904d8
  0190494  lis 3, 150
  0190498  sldi 4, 29, 7
  019049c  sldi 5, 29, 4
  01904a0  addic 6, 3, 14312
  01904a4  subc 3, 4, 5
  01904a8  lwz 4, 308(30)
  01904ac  lwzx 5, 6, 3
  01904b0  cmpw 5, 4
  01904b4  bf 2, 0x1904d8
  01904b8  lis 4, 150
  01904bc  addic 4, 4, 14292
  01904c0  lbzx 3, 4, 3
  01904c4  cmpwi 3, 0
  01904c8  bt 2, 0x1904d8
  01904cc  ori 3, 29, 0
  01904d0  bl 0x15cdb0
  01904d4  nop
  01904d8  li 3, 255
  01904dc  stb 3, 188(31)
  01904e0  ori 3, 31, 0
  01904e4  bl 0x18f448
  01904e8  lis 3, 230
  01904ec  lis 4, 16800
  01904f0  lwz 5, -4144(3)
  01904f4  lfs 2, -4144(3)
  01904f8  srawi 6, 5, 31
  01904fc  srwi 3, 6, 1
  0190500  xor 3, 3, 5
  0190504  subc 3, 3, 6
  0190508  cmpw 3, 4
  019050c  bf 0, 0x19057c
  0190510  lis 3, 165
  0190514  lwz 5, 96(30)
  0190518  lis 4, 25
  019051c  slwi 5, 5, 7
  0190520  addi 4, 4, -596
  0190524  lwz 3, 7128(3)
  0190528  lwz 6, 100(30)
  019052c  lfs 1, 16(4)
  0190530  addc 4, 3, 5
  0190534  slwi 6, 6, 7
  0190538  clrldi 4, 4, 32
  019053c  addc 3, 3, 6
  0190540  clrldi 3, 3, 32
  0190544  lfs 10, 48(4)
  0190548  lfs 9, 52(4)
  019054c  lfs 8, 56(4)
  0190550  lfs 7, 48(3)
  0190554  lfs 6, 52(3)
  0190558  lfs 5, 56(3)
  019055c  lfs 4, 60(3)
  0190560  lfs 27, 112(4)
  0190564  lfs 28, 116(4)
  0190568  lfs 29, 120(4)
  019056c  lfs 3, 112(3)
  0190570  lfs 30, 116(3)
  0190574  lfs 31, 120(3)
  0190578  b 0x1905ec
  019057c  lis 3, 165
  0190580  lis 5, 230
  0190584  lwz 6, 100(30)
  0190588  lis 4, 25
  019058c  slwi 6, 6, 7
  0190590  addi 4, 4, -596
  0190594  lwz 3, 7128(3)
  0190598  lfs 2, -4136(5)
  019059c  addc 5, 3, 6
  01905a0  lwz 6, 104(30)
  01905a4  lfs 1, 20(4)
  01905a8  slwi 4, 6, 7
  01905ac  clrldi 5, 5, 32
  01905b0  addc 3, 3, 4
  01905b4  clrldi 3, 3, 32
  01905b8  lfs 10, 48(5)
  01905bc  lfs 9, 52(5)
  01905c0  lfs 8, 56(5)
  01905c4  lfs 7, 48(3)
  01905c8  lfs 6, 52(3)
  01905cc  lfs 5, 56(3)
  01905d0  lfs 4, 60(3)
  01905d4  lfs 27, 112(5)
  01905d8  lfs 28, 116(5)
  01905dc  lfs 29, 120(5)
  01905e0  lfs 3, 112(3)
  01905e4  lfs 30, 116(3)
  01905e8  lfs 31, 120(3)
  01905ec  fmuls 26, 2, 1
  01905f0  fsubs 7, 7, 10
  01905f4  stfs 4, 124(1)
  01905f8  fsubs 6, 6, 9
  01905fc  fsubs 5, 5, 8
  0190600  fmr 1, 3
  0190604  fmr 2, 27
  0190608  fmadds 3, 26, 7, 10
  019060c  fmadds 4, 26, 6, 9
  0190610  fmadds 5, 26, 5, 8
  0190614  stfs 3, 112(1)
  0190618  stfs 4, 116(1)
  019061c  stfs 5, 120(1)
  0190620  bl 0x5025e0
  0190624  nop
  0190628  fmuls 2, 1, 26
  019062c  fmr 1, 27
  0190630  stfs 2, 128(1)
  0190634  bl 0x502578
  0190638  nop
  019063c  stfs 1, 128(1)
  0190640  fmr 1, 30
  0190644  fmr 2, 28
  0190648  bl 0x5025e0
  019064c  nop
  0190650  fmuls 2, 1, 26
  0190654  fmr 1, 28
  0190658  stfs 2, 132(1)
  019065c  bl 0x502578
  0190660  nop
  0190664  stfs 1, 132(1)
  0190668  fmr 1, 31
  019066c  fmr 2, 29
  0190670  bl 0x5025e0
  0190674  nop
  0190678  fmuls 2, 1, 26
  019067c  fmr 1, 29
  0190680  stfs 2, 136(1)
  0190684  bl 0x502578
  0190688  nop
  019068c  addic 3, 1, 112
  0190690  stfs 1, 136(1)
  0190694  bl 0x47b98
  0190698  nop
  019069c  addic 3, 1, 128
  01906a0  bl 0x47c08
  01906a4  nop
  01906a8  b 0x190784
  01906ac  lis 3, 25
  01906b0  addi 4, 3, -596
  01906b4  lis 3, 114
  01906b8  lfs 1, 0(4)
  01906bc  lfs 2, -3056(3)
  01906c0  lfs 3, 4(4)
  01906c4  fmuls 2, 2, 1
  01906c8  fmr 31, 3
  01906cc  addic 3, 30, 108
  01906d0  lwz 29, 108(30)
  01906d4  fctidz 2, 2
  01906d8  fmr 1, 31
  01906dc  fcfid 2, 2
  01906e0  frsp 2, 2
  01906e4  fdivs 2, 31, 2
  01906e8  bl 0x109af0
  01906ec  nop
  01906f0  lwz 4, 108(30)
  01906f4  lis 5, 150
  01906f8  lfs 1, 108(30)
  01906fc  cmpwi 29, 0
  0190700  srawi 3, 4, 31
  0190704  fabs 1, 1
  0190708  srwi 6, 3, 1
  019070c  xor 6, 6, 4
  0190710  subc 3, 6, 3
  0190714  fsubs 1, 31, 1
  0190718  stfs 1, -12528(5)
  019071c  bf 0, 0x190740
  0190720  cmpwi 4, 0
  0190724  bt 0, 0x190740
  0190728  bl 0xa2560
  019072c  nop
  0190730  li 3, 3
  0190734  bl 0x481d0
  0190738  nop
  019073c  b 0x190784
  0190740  lis 4, 16256
  0190744  cmpw 3, 4
  0190748  bt 0, 0x190784
  019074c  li 5, 6
  0190750  li 3, 6006
  0190754  li 4, 45
  0190758  stb 5, 32(31)
  019075c  bl 0x7b310
  0190760  nop
  0190764  li 3, 6012
  0190768  li 4, -1
  019076c  bl 0x112a38
  0190770  nop
  0190774  li 3, 0
  0190778  li 4, -1
  019077c  bl 0xe8aa4
  0190780  nop
  0190784  ld 0, 272(1)
  0190788  mtlr 0
  019078c  lfd 26, 208(1)
  0190790  lfd 27, 216(1)
  0190794  lfd 28, 224(1)
  0190798  lfd 29, 232(1)
  019079c  lfd 30, 240(1)
  01907a0  lfd 31, 248(1)
  01907a4  ld 24, 144(1)
  01907a8  ld 25, 152(1)
  01907ac  ld 26, 160(1)
  01907b0  ld 27, 168(1)
  01907b4  ld 28, 176(1)
  01907b8  ld 29, 184(1)
  01907bc  ld 30, 192(1)
  01907c0  ld 31, 200(1)
  01907c4  addi 1, 1, 256
  01907c8  blr
