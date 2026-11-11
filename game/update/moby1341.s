# game/update/moby1341.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

UpdateMoby_1341:   # 0x24f118, 0xbd4 bytes
  024f118  stdu 1, -208(1)
  024f11c  mflr 0
  024f120  std 0, 224(1)
  024f124  stfd 29, 184(1)
  024f128  stfd 30, 192(1)
  024f12c  stfd 31, 200(1)
  024f130  std 30, 168(1)
  024f134  std 31, 176(1)
  024f138  ori 30, 3, 0
  024f13c  lwz 31, 120(30)
  024f140  std 29, 160(1)
  024f144  std 28, 152(1)
  024f148  std 27, 144(1)
  024f14c  std 26, 136(1)
  024f150  addic 3, 31, 24
  024f154  bl 0x4fff60
  024f158  nop
  024f15c  lbz 3, 32(30)
  024f160  cmpwi 3, 0
  024f164  bt 1, 0x24f174
  024f168  cmpwi 3, -1
  024f16c  bf 1, 0x24fcb8
  024f170  b 0x24f180
  024f174  cmpwi 3, 1
  024f178  bf 1, 0x24f1a0
  024f17c  b 0x24fcb8
  024f180  li 3, 0
  024f184  li 4, 255
  024f188  li 5, 1
  024f18c  stw 3, 20(31)
  024f190  stb 4, 48(30)
  024f194  stb 5, 32(30)
  024f198  stw 3, 40(31)
  024f19c  b 0x24fcb8
  024f1a0  lis 3, 37
  024f1a4  lis 29, 114
  024f1a8  addi 3, 3, -3856
  024f1ac  lfs 1, -3056(29)
  024f1b0  lfs 31, 0(3)
  024f1b4  lis 3, 161
  024f1b8  fmuls 2, 1, 31
  024f1bc  lwz 4, 1808(3)
  024f1c0  fctiwz 2, 2
  024f1c4  stfd 2, 112(1)
  024f1c8  lwz 3, 116(1)
  024f1cc  cmpw 4, 3
  024f1d0  bf 0, 0x24f28c
  024f1d4  lis 3, 161
  024f1d8  addic 3, 3, -276
  024f1dc  lhz 5, 96(3)
  024f1e0  cmpwi 5, 0
  024f1e4  bt 2, 0x24f28c
  024f1e8  lhz 5, 88(3)
  024f1ec  cmpwi 5, 0
  024f1f0  bf 2, 0x24f28c
  024f1f4  lis 5, 161
  024f1f8  lis 6, 37
  024f1fc  lwz 5, -2344(5)
  024f200  extsw 5, 5
  024f204  std 5, 112(1)
  024f208  addi 5, 6, -3856
  024f20c  lfs 2, 4(5)
  024f210  lfd 3, 112(1)
  024f214  fcfid 3, 3
  024f218  lhz 3, 98(3)
  024f21c  mulli 3, 3, 600
  024f220  frsp 3, 3
  024f224  fadds 2, 3, 2
  024f228  fmuls 2, 1, 2
  024f22c  fctiwz 2, 2
  024f230  stfd 2, 112(1)
  024f234  lfs 2, 8(5)
  024f238  lwz 5, 116(1)
  024f23c  fmuls 2, 1, 2
  024f240  subc 3, 5, 3
  024f244  fctiwz 2, 2
  024f248  stfd 2, 112(1)
  024f24c  lwz 5, 116(1)
  024f250  cmpw 3, 5
  024f254  bf 0, 0x24f28c
  024f258  lis 3, 161
  024f25c  addic 3, 3, 12
  024f260  lwz 3, 652(3)
  024f264  rlwinm 3, 3, 0, 0, 0
  024f268  cmpwi 3, 0
  024f26c  bf 2, 0x24f28c
  024f270  li 4, 81
  024f274  li 3, 20007
  024f278  bl 0x7b310
  024f27c  nop
  024f280  lis 4, 161
  024f284  lfs 1, -3056(29)
  024f288  lwz 4, 1808(4)
  024f28c  fmuls 2, 1, 31
  024f290  fctiwz 2, 2
  024f294  stfd 2, 112(1)
  024f298  lwz 3, 116(1)
  024f29c  cmpw 4, 3
  024f2a0  bf 0, 0x24f344
  024f2a4  lis 3, 161
  024f2a8  addic 3, 3, -276
  024f2ac  lhz 4, 232(3)
  024f2b0  cmpwi 4, 0
  024f2b4  bt 2, 0x24f344
  024f2b8  lis 4, 161
  024f2bc  lwz 4, -2344(4)
  024f2c0  extsw 4, 4
  024f2c4  std 4, 112(1)
  024f2c8  lis 4, 37
  024f2cc  addi 4, 4, -3856
  024f2d0  lfs 2, 4(4)
  024f2d4  lfd 3, 112(1)
  024f2d8  fcfid 3, 3
  024f2dc  lhz 3, 234(3)
  024f2e0  mulli 3, 3, 600
  024f2e4  frsp 3, 3
  024f2e8  fadds 2, 3, 2
  024f2ec  fmuls 2, 1, 2
  024f2f0  fctiwz 2, 2
  024f2f4  stfd 2, 112(1)
  024f2f8  lfs 2, 8(4)
  024f2fc  lwz 4, 116(1)
  024f300  fmuls 1, 1, 2
  024f304  subc 3, 4, 3
  024f308  fctiwz 1, 1
  024f30c  stfd 1, 112(1)
  024f310  lwz 4, 116(1)
  024f314  cmpw 3, 4
  024f318  bf 0, 0x24f344
  024f31c  lis 3, 161
  024f320  addic 3, 3, 12
  024f324  lwz 3, 916(3)
  024f328  rlwinm 3, 3, 0, 0, 0
  024f32c  cmpwi 3, 0
  024f330  bf 2, 0x24f344
  024f334  li 3, 20008
  024f338  li 4, 114
  024f33c  bl 0x7b310
  024f340  nop
  024f344  lis 3, 161
  024f348  lwz 3, 1800(3)
  024f34c  cmpwi 3, 0
  024f350  bf 2, 0x24f480
  024f354  lis 3, 151
  024f358  addic 3, 3, -13812
  024f35c  lbz 4, 3(3)
  024f360  cmpwi 1, 4, 0
  024f364  bt 6, 0x24f3c0
  024f368  lbz 4, 2(3)
  024f36c  cmpwi 4, 0
  024f370  bf 2, 0x24f3c0
  024f374  lis 4, 114
  024f378  lwz 4, 2180(4)
  024f37c  cmpwi 4, 0
  024f380  bf 2, 0x24f3c0
  024f384  lis 4, 114
  024f388  addic 4, 4, 2180
  024f38c  lwz 4, 36(4)
  024f390  cmpwi 4, -1
  024f394  bf 2, 0x24f3c0
  024f398  lis 4, 161
  024f39c  addic 4, 4, 12
  024f3a0  lhz 4, 32(4)
  024f3a4  cmpwi 4, 0
  024f3a8  bf 2, 0x24f3c0
  024f3ac  li 3, 1000
  024f3b0  li 4, 4
  024f3b4  bl 0x7b310
  024f3b8  nop
  024f3bc  b 0x24f480
  024f3c0  bf 6, 0x24f41c
  024f3c4  lbz 4, 2(3)
  024f3c8  cmpwi 4, 0
  024f3cc  bt 2, 0x24f41c
  024f3d0  lis 4, 114
  024f3d4  lwz 4, 2180(4)
  024f3d8  cmpwi 4, 0
  024f3dc  bf 2, 0x24f41c
  024f3e0  lis 4, 114
  024f3e4  addic 4, 4, 2180
  024f3e8  lwz 4, 36(4)
  024f3ec  cmpwi 4, -1
  024f3f0  bf 2, 0x24f41c
  024f3f4  lis 4, 161
  024f3f8  addic 4, 4, 12
  024f3fc  lhz 4, 40(4)
  024f400  cmpwi 4, 0
  024f404  bf 2, 0x24f41c
  024f408  li 3, 1001
  024f40c  li 4, 5
  024f410  bl 0x7b310
  024f414  nop
  024f418  b 0x24f480
  024f41c  bt 6, 0x24f480
  024f420  lbz 3, 2(3)
  024f424  cmpwi 3, 0
  024f428  bt 2, 0x24f480
  024f42c  lis 3, 114
  024f430  lwz 3, 2180(3)
  024f434  cmpwi 3, 0
  024f438  bf 2, 0x24f480
  024f43c  lis 3, 114
  024f440  addic 3, 3, 2180
  024f444  lwz 3, 36(3)
  024f448  cmpwi 3, -1
  024f44c  bf 2, 0x24f480
  024f450  lis 3, 161
  024f454  addic 3, 3, 12
  024f458  lhz 4, 48(3)
  024f45c  cmpwi 4, 0
  024f460  bf 2, 0x24f480
  024f464  lhz 3, 32(3)
  024f468  cmpwi 3, 0
  024f46c  bf 2, 0x24f480
  024f470  li 3, 1002
  024f474  li 4, 6
  024f478  bl 0x7b310
  024f47c  nop
  024f480  lis 26, 151
  024f484  lwz 4, 60(31)
  024f488  addic 26, 26, -25376
  024f48c  extsw 4, 4
  024f490  addic 28, 26, 128
  024f494  ori 3, 28, 0
  024f498  bl 0x110b70
  024f49c  nop
  024f4a0  cmpwi 3, 0
  024f4a4  lfs 1, -3056(29)
  024f4a8  bt 2, 0x24f590
  024f4ac  lwz 3, 8332(26)
  024f4b0  cmpwi 1, 3, 1
  024f4b4  cmpwi 3, 0
  024f4b8  cror 2, 2, 6
  024f4bc  bt 2, 0x24f4c8
  024f4c0  cmpwi 3, 9
  024f4c4  bf 2, 0x24f590
  024f4c8  lis 3, 114
  024f4cc  lwz 3, 2180(3)
  024f4d0  cmpwi 3, 0
  024f4d4  bf 2, 0x24f590
  024f4d8  lis 3, 114
  024f4dc  addic 3, 3, 2180
  024f4e0  lwz 3, 36(3)
  024f4e4  cmpwi 3, -1
  024f4e8  bf 2, 0x24f590
  024f4ec  lis 3, 161
  024f4f0  lis 4, 37
  024f4f4  lwz 3, -2344(3)
  024f4f8  extsw 3, 3
  024f4fc  std 3, 112(1)
  024f500  addi 3, 4, -3856
  024f504  lis 4, 161
  024f508  addic 4, 4, -276
  024f50c  lfs 2, 4(3)
  024f510  lfd 3, 112(1)
  024f514  fcfid 3, 3
  024f518  lhz 4, 74(4)
  024f51c  mulli 4, 4, 600
  024f520  frsp 3, 3
  024f524  fadds 2, 3, 2
  024f528  fmuls 2, 1, 2
  024f52c  fctiwz 2, 2
  024f530  stfd 2, 112(1)
  024f534  lfs 2, 12(3)
  024f538  lwz 3, 116(1)
  024f53c  fmuls 1, 1, 2
  024f540  subc 3, 3, 4
  024f544  fctiwz 1, 1
  024f548  stfd 1, 112(1)
  024f54c  lwz 4, 116(1)
  024f550  cmpw 3, 4
  024f554  bf 1, 0x24f590
  024f558  lis 3, 161
  024f55c  lis 4, 151
  024f560  addic 3, 3, 12
  024f564  li 5, 1
  024f568  lwz 4, -25488(4)
  024f56c  lwz 3, 540(3)
  024f570  slw 4, 5, 4
  024f574  and 3, 3, 4
  024f578  cmpwi 3, 0
  024f57c  bf 2, 0x24f590
  024f580  li 3, 1007
  024f584  li 4, 67
  024f588  bl 0x7b310
  024f58c  nop
  024f590  ori 3, 28, 0
  024f594  lwz 4, 56(31)
  024f598  extsw 4, 4
  024f59c  bl 0x110b70
  024f5a0  nop
  024f5a4  cmpwi 3, 0
  024f5a8  bt 2, 0x24f620
  024f5ac  lwz 3, 8332(26)
  024f5b0  cmpwi 1, 3, 1
  024f5b4  cmpwi 3, 0
  024f5b8  cror 2, 2, 6
  024f5bc  bt 2, 0x24f5c8
  024f5c0  cmpwi 3, 9
  024f5c4  bf 2, 0x24f620
  024f5c8  lis 3, 162
  024f5cc  lwz 3, -22444(3)
  024f5d0  cmpwi 3, 3
  024f5d4  bf 0, 0x24f620
  024f5d8  lis 3, 114
  024f5dc  lwz 3, 2180(3)
  024f5e0  cmpwi 3, 0
  024f5e4  bf 2, 0x24f620
  024f5e8  lis 3, 114
  024f5ec  addic 3, 3, 2180
  024f5f0  lwz 3, 36(3)
  024f5f4  cmpwi 3, -1
  024f5f8  bf 2, 0x24f620
  024f5fc  lis 3, 161
  024f600  addic 3, 3, 12
  024f604  lhz 3, 512(3)
  024f608  cmpwi 3, 0
  024f60c  bf 2, 0x24f620
  024f610  li 3, 1004
  024f614  li 4, 64
  024f618  bl 0x7b310
  024f61c  nop
  024f620  ori 3, 28, 0
  024f624  lwz 4, 56(31)
  024f628  extsw 4, 4
  024f62c  bl 0x110b70
  024f630  nop
  024f634  cmpwi 3, 0
  024f638  lwz 4, 8324(26)
  024f63c  bt 2, 0x24f6c8
  024f640  lwz 3, 8332(26)
  024f644  cmpwi 1, 3, 1
  024f648  cmpwi 3, 0
  024f64c  cror 2, 2, 6
  024f650  bt 2, 0x24f65c
  024f654  cmpwi 3, 9
  024f658  bf 2, 0x24f6c8
  024f65c  cmpwi 4, 1
  024f660  bf 2, 0x24f6c8
  024f664  lis 3, 162
  024f668  lwz 3, -22448(3)
  024f66c  cmpwi 3, -1
  024f670  bf 2, 0x24f6c8
  024f674  lis 3, 114
  024f678  lwz 3, 2180(3)
  024f67c  cmpwi 3, 0
  024f680  bf 2, 0x24f6c8
  024f684  lis 3, 114
  024f688  addic 3, 3, 2180
  024f68c  lwz 3, 36(3)
  024f690  cmpwi 3, -1
  024f694  bf 2, 0x24f6c8
  024f698  lis 3, 161
  024f69c  addic 3, 3, 12
  024f6a0  lhz 4, 512(3)
  024f6a4  cmpwi 4, 0
  024f6a8  bt 2, 0x24f6c8
  024f6ac  lhz 3, 520(3)
  024f6b0  cmpwi 3, 0
  024f6b4  bf 2, 0x24f6c8
  024f6b8  li 3, 1005
  024f6bc  li 4, 65
  024f6c0  bl 0x7b310
  024f6c4  nop
  024f6c8  lis 27, 161
  024f6cc  addic 27, 27, 12
  024f6d0  lhz 3, 528(27)
  024f6d4  cmpwi 3, 2
  024f6d8  bf 0, 0x24f7c4
  024f6dc  ori 3, 28, 0
  024f6e0  lwz 4, 48(31)
  024f6e4  extsw 4, 4
  024f6e8  bl 0x110b70
  024f6ec  nop
  024f6f0  cmpwi 3, 0
  024f6f4  bt 2, 0x24f7c4
  024f6f8  lwz 3, 8336(26)
  024f6fc  cmpwi 3, 59
  024f700  bf 2, 0x24f7c4
  024f704  lwz 3, 408(26)
  024f708  cmpwi 3, 0
  024f70c  bf 2, 0x24f7c4
  024f710  lis 3, 164
  024f714  lwz 30, -28500(3)
  024f718  cmpwi 30, 0
  024f71c  bt 2, 0x24f7c4
  024f720  lis 3, 37
  024f724  addi 3, 3, -3856
  024f728  lfs 31, 16(3)
  024f72c  lhz 3, 166(30)
  024f730  cmpwi 3, 280
  024f734  bf 2, 0x24f7b8
  024f738  lfs 1, 20(30)
  024f73c  lfs 2, 132(26)
  024f740  lfs 3, 16(30)
  024f744  fsubs 1, 1, 2
  024f748  lfs 2, 128(26)
  024f74c  fsubs 2, 3, 2
  024f750  lfs 3, 24(30)
  024f754  lfs 4, 136(26)
  024f758  fsubs 3, 3, 4
  024f75c  fmuls 1, 1, 1
  024f760  fmadds 1, 2, 2, 1
  024f764  fmadds 1, 3, 3, 1
  024f768  fsqrts 1, 1
  024f76c  fcmpu 0, 1, 31
  024f770  cror 6, 1, 2
  024f774  bt 6, 0x24f7b8
  024f778  lwz 4, 120(30)
  024f77c  lis 3, 16256
  024f780  lwz 4, 0(4)
  024f784  cmpw 4, 3
  024f788  bt 2, 0x24f7b8
  024f78c  lwz 3, 52(31)
  024f790  addic 3, 3, 1
  024f794  cmpwi 3, 3
  024f798  cmpwi 1, 3, 6
  024f79c  stw 3, 52(31)
  024f7a0  bt 2, 0x24f7a8
  024f7a4  bf 6, 0x24f7b8
  024f7a8  li 3, 1006
  024f7ac  li 4, 66
  024f7b0  bl 0x7b310
  024f7b4  nop
  024f7b8  lwz 30, 40(30)
  024f7bc  cmpwi 30, 0
  024f7c0  bf 2, 0x24f72c
  024f7c4  lwz 3, 8332(26)
  024f7c8  cmpwi 3, 18
  024f7cc  bf 2, 0x24fab4
  024f7d0  lwz 4, 40(31)
  024f7d4  cmpwi 4, 0
  024f7d8  bf 2, 0x24fab4
  024f7dc  lis 4, 114
  024f7e0  lwz 4, 2180(4)
  024f7e4  cmpwi 4, 0
  024f7e8  bf 2, 0x24fab4
  024f7ec  lis 4, 114
  024f7f0  addic 4, 4, 2180
  024f7f4  lwz 4, 36(4)
  024f7f8  cmpwi 4, -1
  024f7fc  bf 2, 0x24fab4
  024f800  ori 3, 28, 0
  024f804  lwz 4, 32(31)
  024f808  extsw 4, 4
  024f80c  bl 0x110b70
  024f810  nop
  024f814  cmpwi 3, 0
  024f818  bf 2, 0x24f840
  024f81c  lwz 4, 36(31)
  024f820  ori 3, 28, 0
  024f824  extsw 4, 4
  024f828  bl 0x110b70
  024f82c  nop
  024f830  ori 4, 3, 0
  024f834  lwz 3, 8332(26)
  024f838  cmpwi 4, 0
  024f83c  bt 2, 0x24fab4
  024f840  lwz 4, 44(31)
  024f844  ori 3, 28, 0
  024f848  addic 5, 4, 1
  024f84c  lwz 4, 32(31)
  024f850  extsw 4, 4
  024f854  stw 5, 44(31)
  024f858  bl 0x110b70
  024f85c  nop
  024f860  cmpwi 3, 0
  024f864  bt 2, 0x24f980
  024f868  lis 3, 37
  024f86c  lfs 1, -3056(29)
  024f870  addi 3, 3, -3856
  024f874  lfs 2, 20(3)
  024f878  lwz 3, 44(31)
  024f87c  fmuls 1, 1, 2
  024f880  fctiwz 1, 1
  024f884  stfd 1, 112(1)
  024f888  lwz 4, 116(1)
  024f88c  cmpw 3, 4
  024f890  bf 1, 0x24f980
  024f894  lis 30, 161
  024f898  addic 30, 30, -276
  024f89c  lhz 3, 176(30)
  024f8a0  cmpwi 3, 0
  024f8a4  bf 2, 0x24f980
  024f8a8  li 3, 1008
  024f8ac  li 4, 68
  024f8b0  bl 0x7b310
  024f8b4  nop
  024f8b8  lis 3, 0
  024f8bc  lhz 5, 176(30)
  024f8c0  ori 3, 3, 65535
  024f8c4  lfs 1, -3056(29)
  024f8c8  cmpw 5, 3
  024f8cc  lhz 3, 178(30)
  024f8d0  lwz 4, 180(30)
  024f8d4  bf 0, 0x24f8e0
  024f8d8  addic 5, 5, 1
  024f8dc  sth 5, 176(30)
  024f8e0  lis 5, 161
  024f8e4  lwz 5, -2344(5)
  024f8e8  extsw 5, 5
  024f8ec  std 5, 112(1)
  024f8f0  lis 5, 37
  024f8f4  addi 5, 5, -3856
  024f8f8  lfs 2, 4(5)
  024f8fc  lfd 3, 112(1)
  024f900  ori 5, 3, 0
  024f904  fcfid 3, 3
  024f908  lis 3, 6990
  024f90c  ori 6, 3, 33205
  024f910  frsp 3, 3
  024f914  fadds 2, 3, 2
  024f918  fmuls 1, 1, 2
  024f91c  fctiwz 1, 1
  024f920  stfd 1, 112(1)
  024f924  lwz 3, 116(1)
  024f928  mulhw 6, 6, 3
  024f92c  srawi 6, 6, 6
  024f930  srwi 7, 6, 31
  024f934  addc 6, 6, 7
  024f938  cmpw 6, 5
  024f93c  bf 1, 0x24f95c
  024f940  lis 5, 6990
  024f944  ori 5, 5, 33205
  024f948  mulhw 3, 5, 3
  024f94c  srawi 3, 3, 6
  024f950  srwi 5, 3, 31
  024f954  addc 3, 3, 5
  024f958  sth 3, 178(30)
  024f95c  lis 3, 151
  024f960  li 5, 1
  024f964  lis 6, -32768
  024f968  lwz 3, -25488(3)
  024f96c  slw 3, 5, 3
  024f970  or 3, 4, 3
  024f974  or 3, 3, 6
  024f978  stw 3, 180(30)
  024f97c  b 0x24fad4
  024f980  ori 3, 28, 0
  024f984  lwz 4, 36(31)
  024f988  extsw 4, 4
  024f98c  bl 0x110b70
  024f990  nop
  024f994  cmpwi 3, 0
  024f998  bt 2, 0x24fad4
  024f99c  lis 3, 37
  024f9a0  lfs 1, -3056(29)
  024f9a4  addi 3, 3, -3856
  024f9a8  lfs 2, 24(3)
  024f9ac  lwz 3, 44(31)
  024f9b0  fmuls 1, 1, 2
  024f9b4  fctiwz 1, 1
  024f9b8  stfd 1, 112(1)
  024f9bc  lwz 4, 116(1)
  024f9c0  cmpw 3, 4
  024f9c4  bf 1, 0x24fad4
  024f9c8  lis 31, 161
  024f9cc  addic 31, 31, -276
  024f9d0  lhz 3, 184(31)
  024f9d4  cmpwi 3, 0
  024f9d8  bf 2, 0x24fad4
  024f9dc  li 3, 1008
  024f9e0  li 4, 68
  024f9e4  bl 0x7b310
  024f9e8  nop
  024f9ec  lis 3, 0
  024f9f0  lhz 5, 184(31)
  024f9f4  lfs 1, -3056(29)
  024f9f8  ori 4, 3, 65535
  024f9fc  lhz 3, 186(31)
  024fa00  cmpw 5, 4
  024fa04  lwz 4, 188(31)
  024fa08  bf 0, 0x24fa14
  024fa0c  addic 5, 5, 1
  024fa10  sth 5, 184(31)
  024fa14  lis 5, 161
  024fa18  lis 6, 37
  024fa1c  lwz 5, -2344(5)
  024fa20  extsw 5, 5
  024fa24  std 5, 112(1)
  024fa28  addi 5, 6, -3856
  024fa2c  lfs 2, 4(5)
  024fa30  lfd 3, 112(1)
  024fa34  fcfid 3, 3
  024fa38  ori 5, 3, 0
  024fa3c  lis 3, 6990
  024fa40  ori 6, 3, 33205
  024fa44  frsp 3, 3
  024fa48  fadds 2, 3, 2
  024fa4c  fmuls 1, 1, 2
  024fa50  fctiwz 1, 1
  024fa54  stfd 1, 112(1)
  024fa58  lwz 3, 116(1)
  024fa5c  mulhw 6, 6, 3
  024fa60  srawi 6, 6, 6
  024fa64  srwi 7, 6, 31
  024fa68  addc 6, 6, 7
  024fa6c  cmpw 6, 5
  024fa70  bf 1, 0x24fa90
  024fa74  lis 5, 6990
  024fa78  ori 5, 5, 33205
  024fa7c  mulhw 3, 5, 3
  024fa80  srawi 3, 3, 6
  024fa84  srwi 5, 3, 31
  024fa88  addc 3, 3, 5
  024fa8c  sth 3, 186(31)
  024fa90  lis 3, 151
  024fa94  li 5, 1
  024fa98  lis 6, -32768
  024fa9c  lwz 3, -25488(3)
  024faa0  slw 3, 5, 3
  024faa4  or 3, 4, 3
  024faa8  or 3, 3, 6
  024faac  stw 3, 188(31)
  024fab0  b 0x24fad4
  024fab4  cmpwi 3, 17
  024fab8  bf 2, 0x24facc
  024fabc  lis 3, 0
  024fac0  ori 3, 3, 65535
  024fac4  sth 3, 544(27)
  024fac8  b 0x24fad4
  024facc  li 3, 0
  024fad0  stw 3, 44(31)
  024fad4  lis 3, 164
  024fad8  lwz 31, -28500(3)
  024fadc  cmpwi 31, 0
  024fae0  bt 2, 0x24fcb8
  024fae4  lis 3, 37
  024fae8  lis 30, 114
  024faec  addi 3, 3, -3856
  024faf0  lis 28, 161
  024faf4  addic 30, 30, 2180
  024faf8  addic 28, 28, -276
  024fafc  lfs 31, 28(3)
  024fb00  lfs 30, 4(3)
  024fb04  lfs 29, 32(3)
  024fb08  lhz 3, 166(31)
  024fb0c  cmpwi 3, 806
  024fb10  bf 2, 0x24fcac
  024fb14  lfs 1, 20(31)
  024fb18  lfs 2, 132(26)
  024fb1c  lfs 3, 16(31)
  024fb20  fsubs 1, 1, 2
  024fb24  lfs 2, 128(26)
  024fb28  fsubs 2, 3, 2
  024fb2c  lfs 3, 24(31)
  024fb30  lfs 4, 136(26)
  024fb34  fsubs 3, 3, 4
  024fb38  fmuls 1, 1, 1
  024fb3c  fmadds 1, 2, 2, 1
  024fb40  fmadds 1, 3, 3, 1
  024fb44  fsqrts 1, 1
  024fb48  fcmpu 0, 1, 31
  024fb4c  cror 6, 1, 2
  024fb50  bt 6, 0x24fcac
  024fb54  lis 3, 114
  024fb58  lwz 3, 2180(3)
  024fb5c  cmpwi 3, 0
  024fb60  bf 2, 0x24fcac
  024fb64  lwz 3, 36(30)
  024fb68  cmpwi 3, -1
  024fb6c  bf 2, 0x24fcac
  024fb70  lhz 3, 8(27)
  024fb74  cmpwi 3, 0
  024fb78  bf 2, 0x24fcac
  024fb7c  lhz 3, 16(27)
  024fb80  cmpwi 3, 0
  024fb84  bf 2, 0x24fcac
  024fb88  lhz 3, 104(28)
  024fb8c  cmpwi 3, 0
  024fb90  bf 2, 0x24fcac
  024fb94  ori 3, 31, 0
  024fb98  bl 0x4660a8
  024fb9c  nop
  024fba0  lis 4, 161
  024fba4  lis 6, 151
  024fba8  lfs 1, -3056(29)
  024fbac  cmpwi 3, 0
  024fbb0  lwz 3, -2344(4)
  024fbb4  lhz 4, 106(28)
  024fbb8  lwz 5, 108(28)
  024fbbc  lwz 6, -25488(6)
  024fbc0  bf 2, 0x24fcac
  024fbc4  lis 7, 114
  024fbc8  lwz 8, 8872(26)
  024fbcc  lwz 7, -1240(7)
  024fbd0  cmpw 8, 7
  024fbd4  bf 0, 0x24fc84
  024fbd8  lis 7, 0
  024fbdc  ori 8, 7, 65535
  024fbe0  lhz 7, 104(28)
  024fbe4  cmpw 7, 8
  024fbe8  bf 0, 0x24fbf4
  024fbec  addic 7, 7, 1
  024fbf0  sth 7, 104(28)
  024fbf4  extsw 3, 3
  024fbf8  std 3, 112(1)
  024fbfc  lis 3, 6990
  024fc00  ori 7, 3, 33205
  024fc04  lfd 2, 112(1)
  024fc08  fcfid 2, 2
  024fc0c  frsp 2, 2
  024fc10  fadds 2, 2, 30
  024fc14  fmuls 1, 1, 2
  024fc18  fctiwz 1, 1
  024fc1c  stfd 1, 112(1)
  024fc20  lwz 3, 116(1)
  024fc24  mulhw 7, 7, 3
  024fc28  srawi 7, 7, 6
  024fc2c  srwi 8, 7, 31
  024fc30  addc 7, 7, 8
  024fc34  cmpw 7, 4
  024fc38  bf 1, 0x24fc58
  024fc3c  lis 4, 6990
  024fc40  ori 4, 4, 33205
  024fc44  mulhw 3, 4, 3
  024fc48  srawi 3, 3, 6
  024fc4c  srwi 4, 3, 31
  024fc50  addc 3, 3, 4
  024fc54  sth 3, 106(28)
  024fc58  li 3, 1
  024fc5c  lis 4, -32768
  024fc60  slw 3, 3, 6
  024fc64  or 5, 5, 3
  024fc68  li 3, 1
  024fc6c  or 5, 5, 4
  024fc70  li 4, 1
  024fc74  stw 5, 108(28)
  024fc78  bl 0x7b310
  024fc7c  nop
  024fc80  b 0x24fcac
  024fc84  ori 3, 31, 0
  024fc88  fmr 1, 29
  024fc8c  bl 0x1129d0
  024fc90  nop
  024fc94  cmpwi 3, 0
  024fc98  bt 2, 0x24fcac
  024fc9c  li 3, 2
  024fca0  li 4, 2
  024fca4  bl 0x7b310
  024fca8  nop
  024fcac  lwz 31, 40(31)
  024fcb0  cmpwi 31, 0
  024fcb4  bf 2, 0x24fb08
  024fcb8  ld 0, 224(1)
  024fcbc  mtlr 0
  024fcc0  lfd 29, 184(1)
  024fcc4  lfd 30, 192(1)
  024fcc8  lfd 31, 200(1)
  024fccc  ld 26, 136(1)
  024fcd0  ld 27, 144(1)
  024fcd4  ld 28, 152(1)
  024fcd8  ld 29, 160(1)
  024fcdc  ld 30, 168(1)
  024fce0  ld 31, 176(1)
  024fce4  addi 1, 1, 208
  024fce8  blr
