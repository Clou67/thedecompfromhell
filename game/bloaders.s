# game/bloaders.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

SECTION_HEADER_CAMERA_UNK:   # 0x4efe4, 0x14 bytes
  004efe4  lis 3, 114
  004efe8  lis 4, 1
  004efec  addic 3, 3, -5904
  004eff0  stw 4, 72(3)
  004eff4  blr

GsTex_Init:   # 0x4eff8, 0x24 bytes
  004eff8  lis 3, 150
  004effc  lis 5, 149
  004f000  addic 3, 3, 27352
  004f004  li 6, 0
  004f008  lis 4, 150
  004f00c  stw 6, 5024(5)
  004f010  lwz 3, 12(3)
  004f014  stw 3, 27344(4)
  004f018  blr

GsTex_ResetAll:   # 0x4f01c, 0x48 bytes
  004f01c  lis 3, 150
  004f020  lis 4, 149
  004f024  addic 5, 3, 27352
  004f028  lis 6, 150
  004f02c  lwz 3, 5024(4)
  004f030  lwz 4, 12(5)
  004f034  cmpwi 3, 0
  004f038  stw 4, 27344(6)
  004f03c  bf 1, 0x4f060
  004f040  lis 4, 147
  004f044  li 5, 0
  004f048  addic 4, 4, 5128
  004f04c  addic 3, 3, -1
  004f050  std 5, 0(4)
  004f054  addic 4, 4, 128
  004f058  cmpwi 3, 0
  004f05c  bt 1, 0x4f04c
  004f060  blr

GsTex_Register:   # 0x4f064, 0x290 bytes
  004f064  stdu 1, -144(1)
  004f068  mflr 0
  004f06c  std 0, 160(1)
  004f070  std 30, 128(1)
  004f074  std 29, 120(1)
  004f078  lis 29, 149
  004f07c  std 31, 136(1)
  004f080  ori 30, 3, 0
  004f084  lis 31, 147
  004f088  li 4, 0
  004f08c  addic 31, 31, 5024
  004f090  lwz 3, 5024(29)
  004f094  li 5, 128
  004f098  slwi 3, 3, 7
  004f09c  addc 3, 31, 3
  004f0a0  clrldi 3, 3, 32
  004f0a4  bl 0x5001fc
  004f0a8  nop
  004f0ac  lwz 3, 5024(29)
  004f0b0  lwz 6, 16(30)
  004f0b4  slwi 5, 3, 7
  004f0b8  cmpwi 6, 39
  004f0bc  extsw 5, 5
  004f0c0  addc 3, 31, 5
  004f0c4  stw 6, 92(3)
  004f0c8  lwz 4, 20(30)
  004f0cc  stw 4, 96(3)
  004f0d0  lwz 7, 28(30)
  004f0d4  stw 7, 100(3)
  004f0d8  bt 2, 0x4f104
  004f0dc  cmpwi 6, 38
  004f0e0  bt 2, 0x4f0f4
  004f0e4  cmpwi 6, 19
  004f0e8  bt 2, 0x4f104
  004f0ec  cmpwi 6, 18
  004f0f0  bf 2, 0x4f180
  004f0f4  li 4, 0
  004f0f8  stwx 4, 31, 5
  004f0fc  stw 4, 20(3)
  004f100  b 0x4f180
  004f104  li 7, 18
  004f108  li 8, 18
  004f10c  subc 7, 7, 4
  004f110  subc 4, 8, 4
  004f114  cntlzw 7, 7
  004f118  addic 8, 30, 32
  004f11c  sldi 7, 7, 58
  004f120  li 9, 64
  004f124  li 10, 32
  004f128  sradi 7, 7, 63
  004f12c  stwx 8, 31, 5
  004f130  subc 9, 9, 10
  004f134  cntlzw 4, 4
  004f138  and 5, 7, 9
  004f13c  sldi 4, 4, 58
  004f140  li 7, 1024
  004f144  li 8, 512
  004f148  li 9, 39
  004f14c  sradi 4, 4, 63
  004f150  subc 7, 7, 8
  004f154  subc 6, 9, 6
  004f158  and 4, 4, 7
  004f15c  cntlzw 6, 6
  004f160  addc 5, 10, 5
  004f164  addc 4, 8, 4
  004f168  sldi 6, 6, 58
  004f16c  subc 5, 5, 4
  004f170  sradi 6, 6, 63
  004f174  and 5, 6, 5
  004f178  addc 4, 4, 5
  004f17c  stw 4, 20(3)
  004f180  lwz 3, 8(30)
  004f184  extsw 3, 3
  004f188  bl 0x500178
  004f18c  nop
  004f190  lis 29, 149
  004f194  lwz 4, 5024(29)
  004f198  slwi 4, 4, 7
  004f19c  extsw 4, 4
  004f1a0  addc 4, 31, 4
  004f1a4  stw 3, 76(4)
  004f1a8  lwz 3, 12(30)
  004f1ac  extsw 3, 3
  004f1b0  bl 0x500178
  004f1b4  nop
  004f1b8  lwz 5, 5024(29)
  004f1bc  ori 6, 3, 0
  004f1c0  slwi 4, 5, 7
  004f1c4  extsw 4, 4
  004f1c8  addc 3, 31, 4
  004f1cc  lwz 7, 20(3)
  004f1d0  stw 6, 80(3)
  004f1d4  addc 6, 30, 7
  004f1d8  lwz 7, 16(30)
  004f1dc  addic 8, 6, 32
  004f1e0  cmpwi 7, 39
  004f1e4  lwz 6, 100(3)
  004f1e8  stw 8, 4(3)
  004f1ec  bt 2, 0x4f24c
  004f1f0  cmpwi 7, 38
  004f1f4  bt 2, 0x4f220
  004f1f8  cmpwi 7, 19
  004f1fc  bt 2, 0x4f238
  004f200  cmpwi 7, 18
  004f204  lwz 7, 8(30)
  004f208  lwz 30, 12(30)
  004f20c  bf 2, 0x4f260
  004f210  mullw 8, 7, 30
  004f214  slwi 8, 8, 2
  004f218  stw 8, 24(3)
  004f21c  b 0x4f260
  004f220  lwz 7, 8(30)
  004f224  lwz 30, 12(30)
  004f228  mullw 8, 7, 30
  004f22c  slwi 8, 8, 1
  004f230  stw 8, 24(3)
  004f234  b 0x4f260
  004f238  lwz 7, 8(30)
  004f23c  lwz 30, 12(30)
  004f240  mullw 8, 7, 30
  004f244  stw 8, 24(3)
  004f248  b 0x4f260
  004f24c  lwz 7, 8(30)
  004f250  lwz 30, 12(30)
  004f254  mullw 8, 7, 30
  004f258  srawi 8, 8, 1
  004f25c  stw 8, 24(3)
  004f260  ori 8, 6, 0
  004f264  stw 7, 84(3)
  004f268  li 6, 1
  004f26c  stw 30, 88(3)
  004f270  cmpwi 8, 1
  004f274  bf 1, 0x4f2c8
  004f278  addc 31, 31, 4
  004f27c  addic 8, 31, 28
  004f280  addic 7, 31, 4
  004f284  addic 4, 31, 24
  004f288  addic 31, 31, 8
  004f28c  lwz 9, 0(4)
  004f290  lwz 10, 0(7)
  004f294  addic 6, 6, 1
  004f298  srawi 9, 9, 2
  004f29c  lwz 11, 100(3)
  004f2a0  addic 7, 7, 4
  004f2a4  cmpw 6, 11
  004f2a8  stw 9, 0(8)
  004f2ac  lwz 9, 0(4)
  004f2b0  addic 4, 4, 4
  004f2b4  addc 9, 10, 9
  004f2b8  addic 8, 8, 4
  004f2bc  stw 9, 0(31)
  004f2c0  addic 31, 31, 4
  004f2c4  bt 0, 0x4f28c
  004f2c8  lis 4, 149
  004f2cc  addic 6, 5, 1
  004f2d0  extsw 3, 5
  004f2d4  stw 6, 5024(4)
  004f2d8  ld 0, 160(1)
  004f2dc  mtlr 0
  004f2e0  ld 29, 120(1)
  004f2e4  ld 30, 128(1)
  004f2e8  ld 31, 136(1)
  004f2ec  addi 1, 1, 144
  004f2f0  blr

GsTex_BuildUploadPacket:   # 0x4f2f4, 0x250 bytes
  004f2f4  stdu 1, -192(1)
  004f2f8  mflr 0
  004f2fc  std 0, 208(1)
  004f300  std 31, 184(1)
  004f304  std 30, 176(1)
  004f308  lis 31, 230
  004f30c  std 24, 128(1)
  004f310  ori 30, 9, 0
  004f314  li 10, 6
  004f318  std 29, 168(1)
  004f31c  ori 24, 5, 0
  004f320  li 29, 0
  004f324  std 26, 144(1)
  004f328  lwz 9, -21928(31)
  004f32c  std 25, 136(1)
  004f330  std 23, 120(1)
  004f334  ori 26, 6, 0
  004f338  ori 25, 4, 0
  004f33c  std 28, 160(1)
  004f340  ori 23, 3, 0
  004f344  std 27, 152(1)
  004f348  ori 28, 8, 0
  004f34c  ori 27, 7, 0
  004f350  stb 10, 0(9)
  004f354  li 3, 6
  004f358  lwz 5, -21928(31)
  004f35c  li 4, 0
  004f360  stb 29, 1(5)
  004f364  lwz 5, -21928(31)
  004f368  std 22, 112(1)
  004f36c  stb 29, 2(5)
  004f370  bl 0x50300c
  004f374  nop
  004f378  lwz 6, -21928(31)
  004f37c  srawi 5, 30, 4
  004f380  li 4, 1
  004f384  addze 7, 5
  004f388  li 5, 0
  004f38c  stb 3, 3(6)
  004f390  extsw 30, 7
  004f394  lwz 22, -21928(31)
  004f398  li 3, 1
  004f39c  li 6, 0
  004f3a0  addic 9, 22, 16
  004f3a4  li 7, 0
  004f3a8  li 8, 4
  004f3ac  stw 9, -21928(31)
  004f3b0  bl 0x502ea0
  004f3b4  nop
  004f3b8  lis 4, 3822
  004f3bc  std 3, 16(22)
  004f3c0  extsw 6, 25
  004f3c4  ori 7, 4, 61166
  004f3c8  li 3, 0
  004f3cc  li 4, 0
  004f3d0  li 5, 0
  004f3d4  std 7, 24(22)
  004f3d8  ori 8, 26, 0
  004f3dc  ori 7, 24, 0
  004f3e0  bl 0x503044
  004f3e4  nop
  004f3e8  li 4, 5
  004f3ec  li 26, 0
  004f3f0  std 3, 32(22)
  004f3f4  sldi 3, 28, 32
  004f3f8  li 5, 32
  004f3fc  std 4, 40(22)
  004f400  or 6, 27, 3
  004f404  li 4, 31
  004f408  std 26, 48(22)
  004f40c  std 26, 80(22)
  004f410  li 7, 30
  004f414  ori 3, 30, 0
  004f418  std 5, 72(22)
  004f41c  li 5, 0
  004f420  std 4, 56(22)
  004f424  std 6, 64(22)
  004f428  li 4, 0
  004f42c  std 7, 88(22)
  004f430  li 6, 0
  004f434  li 7, 2
  004f438  li 8, 0
  004f43c  bl 0x502ea0
  004f440  nop
  004f444  addic 4, 22, 112
  004f448  std 3, 96(22)
  004f44c  oris 3, 30, 12288
  004f450  std 26, 104(22)
  004f454  stw 4, -21928(31)
  004f458  stb 3, 112(22)
  004f45c  lwz 5, -21928(31)
  004f460  li 4, 0
  004f464  ori 3, 30, 0
  004f468  stb 23, 1(5)
  004f46c  lwz 5, -21928(31)
  004f470  stb 29, 2(5)
  004f474  bl 0x50300c
  004f478  nop
  004f47c  lwz 4, -21928(31)
  004f480  li 5, 2
  004f484  stb 3, 3(4)
  004f488  lwz 3, -21928(31)
  004f48c  addic 4, 3, 16
  004f490  stw 4, -21928(31)
  004f494  stb 5, 16(3)
  004f498  li 4, 0
  004f49c  lwz 5, -21928(31)
  004f4a0  li 3, 2
  004f4a4  stb 29, 1(5)
  004f4a8  lwz 5, -21928(31)
  004f4ac  stb 29, 2(5)
  004f4b0  bl 0x50300c
  004f4b4  nop
  004f4b8  lwz 6, -21928(31)
  004f4bc  li 4, 1
  004f4c0  li 5, 0
  004f4c4  li 7, 0
  004f4c8  li 8, 1
  004f4cc  stb 3, 3(6)
  004f4d0  lwz 30, -21928(31)
  004f4d4  li 3, 1
  004f4d8  addic 9, 30, 16
  004f4dc  li 6, 0
  004f4e0  stw 9, -21928(31)
  004f4e4  bl 0x502ea0
  004f4e8  nop
  004f4ec  std 3, 16(30)
  004f4f0  li 4, 29
  004f4f4  li 3, 14
  004f4f8  std 26, 32(30)
  004f4fc  addic 5, 30, 48
  004f500  std 3, 24(30)
  004f504  std 4, 40(30)
  004f508  stw 5, -21928(31)
  004f50c  ld 0, 208(1)
  004f510  mtlr 0
  004f514  ld 22, 112(1)
  004f518  ld 23, 120(1)
  004f51c  ld 24, 128(1)
  004f520  ld 25, 136(1)
  004f524  ld 26, 144(1)
  004f528  ld 27, 152(1)
  004f52c  ld 28, 160(1)
  004f530  ld 29, 168(1)
  004f534  ld 30, 176(1)
  004f538  ld 31, 184(1)
  004f53c  addi 1, 1, 192
  004f540  blr

GsTex_Upload:   # 0x4f544, 0x2fc bytes
  004f544  stdu 1, -224(1)
  004f548  mflr 0
  004f54c  std 0, 240(1)
  004f550  std 30, 208(1)
  004f554  std 29, 200(1)
  004f558  lis 30, 147
  004f55c  sldi 29, 3, 7
  004f560  addic 30, 30, 5024
  004f564  std 31, 216(1)
  004f568  extsw 29, 29
  004f56c  addc 31, 30, 29
  004f570  ld 3, 104(31)
  004f574  std 28, 192(1)
  004f578  std 27, 184(1)
  004f57c  std 26, 176(1)
  004f580  std 25, 168(1)
  004f584  std 24, 160(1)
  004f588  std 23, 152(1)
  004f58c  cmpdi 3, 0
  004f590  bf 2, 0x4f80c
  004f594  lwz 3, 92(31)
  004f598  cmpwi 1, 3, 39
  004f59c  cmpwi 6, 3, 19
  004f5a0  bt 6, 0x4f5a8
  004f5a4  bf 26, 0x4f630
  004f5a8  lis 4, 150
  004f5ac  lwz 4, 27344(4)
  004f5b0  srawi 5, 4, 8
  004f5b4  clrldi 3, 5, 32
  004f5b8  stw 5, 40(31)
  004f5bc  bf 6, 0x4f5f8
  004f5c0  lis 6, 150
  004f5c4  addic 9, 4, 256
  004f5c8  ori 4, 3, 0
  004f5cc  lwzx 3, 30, 29
  004f5d0  lwz 10, 96(31)
  004f5d4  li 5, 1
  004f5d8  stw 9, 27344(6)
  004f5dc  li 7, 8
  004f5e0  lwz 9, 20(31)
  004f5e4  li 8, 2
  004f5e8  extsw 6, 10
  004f5ec  extsw 9, 9
  004f5f0  bl 0x4f2f4
  004f5f4  b 0x4f630
  004f5f8  ori 6, 4, 0
  004f5fc  lwz 9, 20(31)
  004f600  lis 10, 150
  004f604  ori 4, 3, 0
  004f608  addc 6, 6, 9
  004f60c  lwzx 3, 30, 29
  004f610  li 5, 1
  004f614  lwz 11, 96(31)
  004f618  li 7, 16
  004f61c  extsw 9, 9
  004f620  stw 6, 27344(10)
  004f624  li 8, 16
  004f628  extsw 6, 11
  004f62c  bl 0x4f2f4
  004f630  lwz 3, 100(31)
  004f634  li 24, 0
  004f638  cmpwi 3, 0
  004f63c  ori 26, 24, 0
  004f640  bf 1, 0x4f72c
  004f644  addc 29, 30, 29
  004f648  ori 25, 24, 0
  004f64c  addic 27, 29, 44
  004f650  addic 28, 29, 4
  004f654  addic 30, 29, 60
  004f658  addic 29, 29, 24
  004f65c  addic 3, 24, 6
  004f660  lwz 7, 84(31)
  004f664  li 4, 1
  004f668  li 5, 1
  004f66c  sraw 3, 7, 3
  004f670  lis 23, 150
  004f674  extsw 6, 3
  004f678  subc 5, 5, 3
  004f67c  subc 4, 6, 4
  004f680  sraw 7, 7, 24
  004f684  sradi 4, 4, 63
  004f688  and 4, 4, 5
  004f68c  addc 3, 3, 4
  004f690  stw 3, 0(30)
  004f694  lwz 3, 27344(23)
  004f698  lwz 4, 0(28)
  004f69c  srawi 3, 3, 8
  004f6a0  lwz 8, 88(31)
  004f6a4  clrldi 5, 3, 32
  004f6a8  sraw 8, 8, 24
  004f6ac  stw 3, 0(27)
  004f6b0  lwz 6, 92(31)
  004f6b4  ori 3, 4, 0
  004f6b8  lwz 9, 0(29)
  004f6bc  ori 4, 5, 0
  004f6c0  lwz 5, 0(30)
  004f6c4  extsw 6, 6
  004f6c8  extsw 9, 9
  004f6cc  extsw 5, 5
  004f6d0  bl 0x4f2f4
  004f6d4  lwz 3, 24(31)
  004f6d8  li 4, 256
  004f6dc  li 6, 256
  004f6e0  lwz 5, 27344(23)
  004f6e4  sraw 3, 3, 25
  004f6e8  addic 24, 24, 1
  004f6ec  extsw 7, 3
  004f6f0  subc 6, 6, 3
  004f6f4  subc 4, 7, 4
  004f6f8  lwz 7, 100(31)
  004f6fc  sradi 4, 4, 63
  004f700  cmpw 24, 7
  004f704  and 4, 4, 6
  004f708  addic 30, 30, 4
  004f70c  addc 3, 3, 4
  004f710  addic 27, 27, 4
  004f714  addc 3, 5, 3
  004f718  addic 28, 28, 4
  004f71c  addic 29, 29, 4
  004f720  addic 25, 25, 2
  004f724  stw 3, 27344(23)
  004f728  bt 0, 0x4f65c
  004f72c  lis 6, 150
  004f730  li 11, 4
  004f734  li 8, 1
  004f738  lwz 4, 27344(6)
  004f73c  lwz 3, 44(31)
  004f740  addic 7, 4, 2048
  004f744  lwz 4, 60(31)
  004f748  extsw 3, 3
  004f74c  lwz 5, 92(31)
  004f750  lwz 9, 76(31)
  004f754  stw 7, 27344(6)
  004f758  extsw 4, 4
  004f75c  lwz 7, 96(31)
  004f760  extsw 6, 9
  004f764  lwz 10, 80(31)
  004f768  extsw 5, 5
  004f76c  extsw 12, 7
  004f770  lwz 30, 40(31)
  004f774  std 26, 120(1)
  004f778  extsw 7, 10
  004f77c  li 9, 0
  004f780  extsw 10, 30
  004f784  std 12, 112(1)
  004f788  std 26, 128(1)
  004f78c  std 11, 136(1)
  004f790  bl 0x502fbc
  004f794  nop
  004f798  lwz 4, 100(31)
  004f79c  std 3, 104(31)
  004f7a0  lis 9, 0
  004f7a4  li 3, 0
  004f7a8  addic 4, 4, -1
  004f7ac  li 5, 1
  004f7b0  extsw 4, 4
  004f7b4  li 6, 3
  004f7b8  li 7, 0
  004f7bc  li 8, 0
  004f7c0  ori 9, 9, 65440
  004f7c4  bl 0x502fd4
  004f7c8  nop
  004f7cc  lwz 4, 48(31)
  004f7d0  std 3, 112(31)
  004f7d4  lwz 5, 64(31)
  004f7d8  extsw 3, 4
  004f7dc  lwz 6, 52(31)
  004f7e0  extsw 4, 5
  004f7e4  lwz 7, 68(31)
  004f7e8  extsw 5, 6
  004f7ec  lwz 8, 56(31)
  004f7f0  extsw 6, 7
  004f7f4  lwz 9, 72(31)
  004f7f8  extsw 7, 8
  004f7fc  extsw 8, 9
  004f800  bl 0x502f6c
  004f804  nop
  004f808  std 3, 120(31)
  004f80c  ld 0, 240(1)
  004f810  mtlr 0
  004f814  ld 23, 152(1)
  004f818  ld 24, 160(1)
  004f81c  ld 25, 168(1)
  004f820  ld 26, 176(1)
  004f824  ld 27, 184(1)
  004f828  ld 28, 192(1)
  004f82c  ld 29, 200(1)
  004f830  ld 30, 208(1)
  004f834  ld 31, 216(1)
  004f838  addi 1, 1, 224
  004f83c  blr

GsTex_Bind:   # 0x4f840, 0x268 bytes
  004f840  stdu 1, -224(1)
  004f844  mflr 0
  004f848  std 0, 240(1)
  004f84c  lis 9, 150
  004f850  slwi 10, 4, 4
  004f854  addc 4, 6, 4
  004f858  addic 6, 9, 27392
  004f85c  std 31, 216(1)
  004f860  sldi 4, 4, 4
  004f864  ori 31, 8, 0
  004f868  lis 9, 147
  004f86c  sldi 8, 3, 7
  004f870  lwz 11, 16(6)
  004f874  extsw 8, 8
  004f878  lwz 6, 20(6)
  004f87c  addc 4, 4, 11
  004f880  addc 10, 10, 11
  004f884  slwi 11, 5, 4
  004f888  addc 5, 7, 5
  004f88c  addic 7, 9, 5024
  004f890  std 29, 200(1)
  004f894  addic 4, 4, -8
  004f898  addc 29, 7, 8
  004f89c  std 28, 192(1)
  004f8a0  addc 7, 11, 6
  004f8a4  extsw 28, 4
  004f8a8  addic 4, 7, -8
  004f8ac  std 27, 184(1)
  004f8b0  sldi 5, 5, 4
  004f8b4  extsw 27, 4
  004f8b8  addc 5, 5, 6
  004f8bc  lwz 4, 84(29)
  004f8c0  std 25, 168(1)
  004f8c4  addic 10, 10, -8
  004f8c8  lwz 25, 88(29)
  004f8cc  addic 5, 5, -8
  004f8d0  std 30, 208(1)
  004f8d4  slwi 4, 4, 4
  004f8d8  std 26, 176(1)
  004f8dc  extsw 30, 10
  004f8e0  std 24, 160(1)
  004f8e4  extsw 26, 5
  004f8e8  std 23, 152(1)
  004f8ec  std 22, 144(1)
  004f8f0  std 21, 136(1)
  004f8f4  extsw 24, 4
  004f8f8  bl 0x4f544
  004f8fc  lis 23, 230
  004f900  li 5, 7
  004f904  li 22, 0
  004f908  li 4, 0
  004f90c  li 3, 7
  004f910  lwz 6, -21928(23)
  004f914  stb 5, 0(6)
  004f918  lwz 5, -21928(23)
  004f91c  stb 22, 1(5)
  004f920  lwz 5, -21928(23)
  004f924  stb 22, 2(5)
  004f928  bl 0x50300c
  004f92c  nop
  004f930  lwz 4, -21928(23)
  004f934  lis 5, 114
  004f938  li 6, 16
  004f93c  li 8, 0
  004f940  li 9, 1
  004f944  li 10, 0
  004f948  stb 3, 3(4)
  004f94c  lwz 7, -21928(23)
  004f950  li 4, -5792
  004f954  addic 3, 7, 16
  004f958  stw 3, -21928(23)
  004f95c  lvx 2, 4, 5
  004f960  li 3, 17
  004f964  stvx 2, 6, 7
  004f968  ld 11, 104(29)
  004f96c  li 4, 0
  004f970  std 22, 112(1)
  004f974  li 5, 1
  004f978  lwz 29, -21928(23)
  004f97c  li 6, 0
  004f980  li 7, 1
  004f984  addic 12, 29, 16
  004f988  std 11, 16(29)
  004f98c  stw 12, -21928(23)
  004f990  bl 0x502e70
  004f994  nop
  004f998  std 3, 24(29)
  004f99c  li 21, 0
  004f9a0  ori 3, 30, 0
  004f9a4  std 31, 32(29)
  004f9a8  lis 5, 255
  004f9ac  ori 4, 27, 0
  004f9b0  ori 5, 5, 65520
  004f9b4  std 21, 40(29)
  004f9b8  bl 0x502fec
  004f9bc  nop
  004f9c0  lis 5, 255
  004f9c4  std 3, 48(29)
  004f9c8  ori 4, 27, 0
  004f9cc  std 24, 56(29)
  004f9d0  ori 3, 28, 0
  004f9d4  ori 5, 5, 65520
  004f9d8  bl 0x502fec
  004f9dc  nop
  004f9e0  slwi 31, 25, 20
  004f9e4  std 3, 64(29)
  004f9e8  lis 5, 255
  004f9ec  extsw 6, 31
  004f9f0  ori 4, 26, 0
  004f9f4  ori 3, 30, 0
  004f9f8  ori 5, 5, 65520
  004f9fc  std 6, 72(29)
  004fa00  bl 0x502fec
  004fa04  nop
  004fa08  addc 4, 31, 24
  004fa0c  std 3, 80(29)
  004fa10  lis 5, 255
  004fa14  extsw 6, 4
  004fa18  ori 3, 28, 0
  004fa1c  ori 4, 26, 0
  004fa20  ori 5, 5, 65520
  004fa24  std 6, 88(29)
  004fa28  bl 0x502fec
  004fa2c  nop
  004fa30  lwz 4, -21928(23)
  004fa34  std 3, 96(29)
  004fa38  addic 5, 4, 96
  004fa3c  std 21, 104(29)
  004fa40  stw 5, -21928(23)
  004fa44  stb 22, 96(4)
  004fa48  lwz 3, -21928(23)
  004fa4c  stb 22, 1(3)
  004fa50  lwz 3, -21928(23)
  004fa54  stb 22, 2(3)
  004fa58  lwz 3, -21928(23)
  004fa5c  stb 22, 3(3)
  004fa60  lwz 3, -21928(23)
  004fa64  addic 3, 3, 16
  004fa68  stw 3, -21928(23)
  004fa6c  ld 0, 240(1)
  004fa70  mtlr 0
  004fa74  ld 21, 136(1)
  004fa78  ld 22, 144(1)
  004fa7c  ld 23, 152(1)
  004fa80  ld 24, 160(1)
  004fa84  ld 25, 168(1)
  004fa88  ld 26, 176(1)
  004fa8c  ld 27, 184(1)
  004fa90  ld 28, 192(1)
  004fa94  ld 29, 200(1)
  004fa98  ld 30, 208(1)
  004fa9c  ld 31, 216(1)
  004faa0  addi 1, 1, 224
  004faa4  blr

GsTex_BindWrapper:   # 0x4faa8, 0x4c bytes
  004faa8  stdu 1, -112(1)
  004faac  mflr 0
  004fab0  std 0, 128(1)
  004fab4  sldi 8, 3, 7
  004fab8  lis 7, 147
  004fabc  extsw 9, 8
  004fac0  lis 10, 147
  004fac4  addic 7, 7, 5108
  004fac8  ori 8, 6, 0
  004facc  addic 6, 10, 5112
  004fad0  lwzx 7, 7, 9
  004fad4  lwzx 9, 6, 9
  004fad8  extsw 6, 7
  004fadc  extsw 7, 9
  004fae0  bl 0x4f840
  004fae4  ld 0, 128(1)
  004fae8  mtlr 0
  004faec  addi 1, 1, 112
  004faf0  blr

GsTex_StaticInit:   # 0x4faf4, 0x54 bytes
  004faf4  stdu 1, -112(1)
  004faf8  mflr 0
  004fafc  std 0, 128(1)
  004fb00  lis 3, 114
  004fb04  lis 7, 1
  004fb08  addic 8, 3, -5772
  004fb0c  li 4, 1
  004fb10  li 3, 1
  004fb14  li 5, 0
  004fb18  li 6, 0
  004fb1c  stw 7, 72(8)
  004fb20  li 7, 1
  004fb24  li 8, 11
  004fb28  bl 0x502ea0
  004fb2c  nop
  004fb30  lis 4, 114
  004fb34  std 3, -5792(4)
  004fb38  ld 0, 128(1)
  004fb3c  mtlr 0
  004fb40  addi 1, 1, 112
  004fb44  blr

???_ReturnTrue_GameStart:   # 0x4fb48, 0x8 bytes
  004fb48  li 3, 1
  004fb4c  blr

LoadPifAsPSMT8H:   # 0x4fb50, 0x270 bytes
  004fb50  stdu 1, -272(1)
  004fb54  mflr 0
  004fb58  std 0, 288(1)
  004fb5c  std 31, 264(1)
  004fb60  std 28, 240(1)
  004fb64  ori 31, 3, 0
  004fb68  std 30, 256(1)
  004fb6c  ori 28, 4, 0
  004fb70  ori 30, 5, 0
  004fb74  addic 3, 1, 148
  004fb78  li 4, 0
  004fb7c  std 29, 248(1)
  004fb80  li 5, 84
  004fb84  std 27, 232(1)
  004fb88  ori 29, 6, 0
  004fb8c  bl 0x5001fc
  004fb90  nop
  004fb94  lwz 3, 20(31)
  004fb98  li 4, 18
  004fb9c  addic 5, 31, 32
  004fba0  subc 3, 4, 3
  004fba4  lwz 4, 8(31)
  004fba8  li 6, 1024
  004fbac  cntlzw 3, 3
  004fbb0  li 7, 512
  004fbb4  sldi 3, 3, 58
  004fbb8  stw 5, 148(1)
  004fbbc  subc 5, 6, 7
  004fbc0  sradi 3, 3, 63
  004fbc4  and 5, 3, 5
  004fbc8  extsw 3, 4
  004fbcc  addc 4, 7, 5
  004fbd0  stw 4, 168(1)
  004fbd4  bl 0x500178
  004fbd8  nop
  004fbdc  lwz 4, 12(31)
  004fbe0  stw 3, 224(1)
  004fbe4  extsw 3, 4
  004fbe8  bl 0x500178
  004fbec  nop
  004fbf0  lwz 4, 8(31)
  004fbf4  lwz 5, 12(31)
  004fbf8  addic 27, 1, 144
  004fbfc  mullw 4, 4, 5
  004fc00  lwz 5, 168(1)
  004fc04  stw 3, 228(1)
  004fc08  srawi 29, 29, 8
  004fc0c  addc 3, 31, 5
  004fc10  stw 4, 172(1)
  004fc14  addic 4, 3, 32
  004fc18  lwz 6, 20(31)
  004fc1c  ori 3, 27, 0
  004fc20  li 7, 0
  004fc24  extsw 6, 6
  004fc28  stw 4, 152(1)
  004fc2c  ori 4, 29, 0
  004fc30  li 5, 1
  004fc34  li 8, 0
  004fc38  li 9, 16
  004fc3c  li 10, 16
  004fc40  bl 0x503084
  004fc44  nop
  004fc48  li 3, 0
  004fc4c  bl 0x503244
  004fc50  nop
  004fc54  lwz 4, 148(1)
  004fc58  ori 3, 27, 0
  004fc5c  bl 0x50306c
  004fc60  nop
  004fc64  li 3, 0
  004fc68  li 4, 0
  004fc6c  bl 0x503074
  004fc70  nop
  004fc74  lwz 9, 8(31)
  004fc78  li 3, 1
  004fc7c  li 4, 1
  004fc80  lwz 10, 12(31)
  004fc84  srawi 5, 9, 6
  004fc88  extsw 9, 9
  004fc8c  subc 3, 5, 3
  004fc90  subc 4, 4, 5
  004fc94  sradi 3, 3, 63
  004fc98  extsw 10, 10
  004fc9c  and 3, 3, 4
  004fca0  srawi 4, 30, 8
  004fca4  addc 5, 5, 3
  004fca8  ori 3, 27, 0
  004fcac  li 6, 20
  004fcb0  li 7, 0
  004fcb4  stw 5, 208(1)
  004fcb8  li 8, 0
  004fcbc  stw 4, 192(1)
  004fcc0  bl 0x503084
  004fcc4  nop
  004fcc8  li 3, 0
  004fccc  bl 0x503244
  004fcd0  nop
  004fcd4  ori 3, 27, 0
  004fcd8  lwz 4, 152(1)
  004fcdc  bl 0x50306c
  004fce0  nop
  004fce4  li 3, 0
  004fce8  li 4, 0
  004fcec  bl 0x503074
  004fcf0  nop
  004fcf4  lwz 3, 192(1)
  004fcf8  li 9, 0
  004fcfc  lwz 4, 208(1)
  004fd00  li 10, 4
  004fd04  lwz 5, 20(31)
  004fd08  extsw 3, 3
  004fd0c  lwz 6, 224(1)
  004fd10  extsw 4, 4
  004fd14  extsw 8, 5
  004fd18  lwz 7, 228(1)
  004fd1c  std 9, 120(1)
  004fd20  extsw 6, 6
  004fd24  li 5, 20
  004fd28  extsw 7, 7
  004fd2c  std 8, 112(1)
  004fd30  std 9, 128(1)
  004fd34  std 10, 136(1)
  004fd38  li 8, 1
  004fd3c  li 9, 0
  004fd40  ori 10, 29, 0
  004fd44  bl 0x502fbc
  004fd48  nop
  004fd4c  std 3, 0(28)
  004fd50  li 4, 0
  004fd54  li 3, 1
  004fd58  li 5, 0
  004fd5c  li 6, 0
  004fd60  li 7, 0
  004fd64  li 8, 0
  004fd68  li 9, 0
  004fd6c  bl 0x502fd4
  004fd70  nop
  004fd74  std 3, 8(28)
  004fd78  li 4, 0
  004fd7c  li 3, 0
  004fd80  li 5, 0
  004fd84  li 6, 0
  004fd88  li 7, 0
  004fd8c  li 8, 0
  004fd90  bl 0x502f6c
  004fd94  nop
  004fd98  std 3, 16(28)
  004fd9c  ld 0, 288(1)
  004fda0  mtlr 0
  004fda4  ld 27, 232(1)
  004fda8  ld 28, 240(1)
  004fdac  ld 29, 248(1)
  004fdb0  ld 30, 256(1)
  004fdb4  ld 31, 264(1)
  004fdb8  addi 1, 1, 272
  004fdbc  blr

LoadDebugFont:   # 0x4fdc0, 0x78 bytes
  004fdc0  stdu 1, -144(1)
  004fdc4  mflr 0
  004fdc8  std 0, 160(1)
  004fdcc  lis 3, 163
  004fdd0  std 31, 136(1)
  004fdd4  lis 4, 101
  004fdd8  addic 31, 3, -14912
  004fddc  addic 4, 4, 6788
  004fde0  ori 3, 31, 0
  004fde4  bl 0x5034f4
  004fde8  nop
  004fdec  lis 3, 150
  004fdf0  lis 7, 12
  004fdf4  addic 5, 3, 27352
  004fdf8  lis 6, 63
  004fdfc  addic 4, 1, 112
  004fe00  ori 3, 31, 0
  004fe04  ori 6, 6, 64512
  004fe08  lwz 5, 8(5)
  004fe0c  addc 5, 5, 7
  004fe10  extsw 5, 5
  004fe14  bl 0x4fb50
  004fe18  lis 4, 150
  004fe1c  ld 3, 112(1)
  004fe20  std 3, 29792(4)
  004fe24  ld 0, 160(1)
  004fe28  mtlr 0
  004fe2c  ld 31, 136(1)
  004fe30  addi 1, 1, 144
  004fe34  blr

UnloadSoundBanks:   # 0x4fe38, 0xb0 bytes
  004fe38  stdu 1, -112(1)
  004fe3c  mflr 0
  004fe40  std 0, 128(1)
  004fe44  li 3, 0
  004fe48  bl 0x503244
  004fe4c  nop
  004fe50  bl 0x505f4c
  004fe54  nop
  004fe58  bl 0x505d20
  004fe5c  nop
  004fe60  bl 0x15d8b4
  004fe64  nop
  004fe68  bl 0x11cd1c
  004fe6c  nop
  004fe70  li 3, 0
  004fe74  bl 0x506664
  004fe78  nop
  004fe7c  bl 0x1754e0
  004fe80  nop
  004fe84  lis 3, 161
  004fe88  lwz 3, 1844(3)
  004fe8c  cmpwi 3, 0
  004fe90  bt 2, 0x4fecc
  004fe94  li 4, 1
  004fe98  lwz 3, 28(3)
  004fe9c  bl 0x60a9b4
  004fea0  nop
  004fea4  bl 0x505f48
  004fea8  nop
  004feac  lis 4, 161
  004feb0  lis 3, 101
  004feb4  addic 3, 3, 6800
  004feb8  lwz 4, 1844(4)
  004febc  lwz 4, 28(4)
  004fec0  extsw 4, 4
  004fec4  bl 0x5cd098
  004fec8  nop
  004fecc  li 3, 0
  004fed0  bl 0x503078
  004fed4  nop
  004fed8  ld 0, 128(1)
  004fedc  mtlr 0
  004fee0  addi 1, 1, 112
  004fee4  blr
