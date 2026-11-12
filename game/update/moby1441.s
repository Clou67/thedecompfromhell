# game/update/moby1441.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1441_0027ecd0:   # 0x27ecd0, 0x304 bytes
  027ecd0  stdu 1, -336(1)
  027ecd4  mflr 0
  027ecd8  std 0, 352(1)
  027ecdc  lis 4, 149
  027ece0  lwz 3, 120(3)
  027ece4  addic 4, 4, 5056
  027ece8  lis 5, 16256
  027ecec  lfs 8, 324(4)
  027ecf0  lfs 9, 448(3)
  027ecf4  stfs 9, 160(1)
  027ecf8  lfs 1, 452(3)
  027ecfc  lfs 2, 320(4)
  027ed00  fsubs 8, 8, 1
  027ed04  stfs 1, 164(1)
  027ed08  fsubs 9, 2, 9
  027ed0c  lfs 1, 456(3)
  027ed10  lfs 7, 328(4)
  027ed14  lis 3, 40
  027ed18  fsubs 7, 7, 1
  027ed1c  addi 3, 3, -4932
  027ed20  stfs 1, 168(1)
  027ed24  lfs 1, 332(4)
  027ed28  fmuls 2, 8, 8
  027ed2c  lfs 5, 0(3)
  027ed30  stw 5, 172(1)
  027ed34  stfs 9, 112(1)
  027ed38  stfs 8, 116(1)
  027ed3c  stfs 7, 120(1)
  027ed40  stfs 1, 124(1)
  027ed44  fmadds 6, 9, 9, 2
  027ed48  lfs 4, 4(3)
  027ed4c  fmr 3, 4
  027ed50  fmadds 6, 7, 7, 6
  027ed54  fmr 2, 3
  027ed58  fsqrts 10, 6
  027ed5c  fmr 1, 2
  027ed60  std 31, 328(1)
  027ed64  std 30, 320(1)
  027ed68  fcmpu 0, 10, 1
  027ed6c  bt 2, 0x27edbc
  027ed70  frsqrte 1, 6
  027ed74  lis 3, 40
  027ed78  addi 3, 3, -4932
  027ed7c  lfs 2, 8(3)
  027ed80  fmuls 3, 6, 1
  027ed84  fmuls 10, 2, 1
  027ed88  fnmsubs 3, 3, 1, 5
  027ed8c  fmadds 1, 3, 10, 1
  027ed90  fmuls 3, 6, 1
  027ed94  fmuls 10, 2, 1
  027ed98  fnmsubs 3, 3, 1, 5
  027ed9c  fmadds 1, 3, 10, 1
  027eda0  fmuls 3, 6, 1
  027eda4  fmuls 2, 2, 1
  027eda8  fnmsubs 3, 3, 1, 5
  027edac  fmadds 3, 3, 2, 1
  027edb0  fmuls 1, 9, 3
  027edb4  fmuls 2, 8, 3
  027edb8  fmuls 3, 7, 3
  027edbc  lis 3, 151
  027edc0  addic 3, 3, -25376
  027edc4  li 31, 0
  027edc8  lfs 5, 656(3)
  027edcc  lfs 6, 664(3)
  027edd0  fmuls 7, 5, 3
  027edd4  lfs 9, 660(3)
  027edd8  fmuls 8, 6, 2
  027eddc  fmuls 10, 9, 1
  027ede0  lis 3, 40
  027ede4  stfs 1, 112(1)
  027ede8  stfs 2, 116(1)
  027edec  addi 30, 3, -4932
  027edf0  stfs 3, 120(1)
  027edf4  fmsubs 6, 6, 1, 7
  027edf8  fmsubs 7, 9, 3, 8
  027edfc  fmsubs 5, 5, 2, 10
  027ee00  stw 31, 140(1)
  027ee04  lfs 9, 12(30)
  027ee08  fmuls 8, 6, 6
  027ee0c  stw 31, 156(1)
  027ee10  li 3, 11
  027ee14  fmadds 8, 7, 7, 8
  027ee18  fmadds 8, 5, 5, 8
  027ee1c  fsqrts 8, 8
  027ee20  fdivs 9, 9, 8
  027ee24  fsub 10, 4, 8
  027ee28  fsub 11, 4, 8
  027ee2c  fsub 12, 4, 8
  027ee30  fsub 13, 8, 4
  027ee34  fsub 0, 8, 4
  027ee38  fsub 8, 8, 4
  027ee3c  fmuls 7, 7, 9
  027ee40  fmuls 6, 6, 9
  027ee44  fmuls 5, 5, 9
  027ee48  fsel 9, 10, 4, 7
  027ee4c  fsel 10, 11, 4, 6
  027ee50  fsel 4, 12, 4, 5
  027ee54  fsel 7, 13, 9, 7
  027ee58  fsel 6, 0, 10, 6
  027ee5c  fsel 4, 8, 4, 5
  027ee60  fmuls 5, 2, 7
  027ee64  fmuls 8, 3, 6
  027ee68  fmuls 9, 1, 4
  027ee6c  stfs 7, 128(1)
  027ee70  stfs 6, 132(1)
  027ee74  stfs 4, 136(1)
  027ee78  fmsubs 1, 1, 6, 5
  027ee7c  fmsubs 2, 2, 4, 8
  027ee80  fmsubs 3, 3, 7, 9
  027ee84  stfs 1, 152(1)
  027ee88  stfs 2, 144(1)
  027ee8c  stfs 3, 148(1)
  027ee90  bl 0x685c4
  027ee94  nop
  027ee98  std 3, 296(1)
  027ee9c  li 4, 2
  027eea0  li 3, 0
  027eea4  li 5, 0
  027eea8  li 6, 1
  027eeac  li 7, 128
  027eeb0  bl 0x502ea8
  027eeb4  nop
  027eeb8  std 3, 312(1)
  027eebc  lis 9, 0
  027eec0  li 3, 0
  027eec4  li 4, 0
  027eec8  li 5, 1
  027eecc  li 6, 1
  027eed0  li 7, 1
  027eed4  li 8, 0
  027eed8  ori 9, 9, 65424
  027eedc  bl 0x502fd4
  027eee0  nop
  027eee4  std 3, 304(1)
  027eee8  li 3, 1
  027eeec  li 4, 1
  027eef0  li 5, 0
  027eef4  li 6, 0
  027eef8  li 7, 0
  027eefc  li 8, 0
  027ef00  bl 0x502f08
  027ef04  nop
  027ef08  lis 4, -32513
  027ef0c  std 3, 288(1)
  027ef10  lis 5, 16256
  027ef14  stw 31, 256(1)
  027ef18  ori 3, 4, 65535
  027ef1c  stw 31, 260(1)
  027ef20  stw 31, 264(1)
  027ef24  lis 6, 123
  027ef28  li 7, 4
  027ef2c  stw 5, 268(1)
  027ef30  stw 3, 252(1)
  027ef34  addic 4, 1, 176
  027ef38  stw 3, 248(1)
  027ef3c  mtctr 7
  027ef40  stw 3, 244(1)
  027ef44  stw 3, 240(1)
  027ef48  stw 5, 272(1)
  027ef4c  addic 3, 6, -22560
  027ef50  stw 31, 276(1)
  027ef54  stw 5, 280(1)
  027ef58  stw 5, 284(1)
  027ef5c  lfs 4, 16(30)
  027ef60  lfs 1, 0(3)
  027ef64  fmuls 1, 1, 4
  027ef68  stfs 1, 0(4)
  027ef6c  lfs 1, 4(3)
  027ef70  fmuls 1, 1, 4
  027ef74  stfs 1, 4(4)
  027ef78  lfs 1, 8(3)
  027ef7c  fmuls 1, 1, 4
  027ef80  stfs 1, 8(4)
  027ef84  lfs 1, 12(3)
  027ef88  addic 3, 3, 16
  027ef8c  stfs 1, 12(4)
  027ef90  addic 4, 4, 16
  027ef94  bdnz 0x27ef60
  027ef98  lis 3, 161
  027ef9c  li 5, 0
  027efa0  addic 6, 3, 24396
  027efa4  li 7, 9
  027efa8  addic 3, 1, 176
  027efac  addic 4, 1, 112
  027efb0  lwz 6, 28(6)
  027efb4  bl 0x72280
  027efb8  nop
  027efbc  ld 0, 352(1)
  027efc0  mtlr 0
  027efc4  ld 30, 320(1)
  027efc8  ld 31, 328(1)
  027efcc  addi 1, 1, 336
  027efd0  blr

M1441_0027efd4:   # 0x27efd4, 0x14 bytes
  027efd4  lis 3, 123
  027efd8  lis 4, 1
  027efdc  addic 3, 3, -22492
  027efe0  stw 4, 72(3)
  027efe4  blr

UpdateMoby_1441:   # 0x27f018, 0x348 bytes
  027f018  stdu 1, -240(1)
  027f01c  mflr 0
  027f020  std 0, 256(1)
  027f024  stfd 31, 232(1)
  027f028  std 31, 224(1)
  027f02c  lis 4, 40
  027f030  std 29, 208(1)
  027f034  ori 31, 3, 0
  027f038  addi 29, 4, -4120
  027f03c  lis 4, 114
  027f040  lfs 1, 0(29)
  027f044  lfs 2, -3056(4)
  027f048  lis 4, 161
  027f04c  fmuls 1, 2, 1
  027f050  std 30, 216(1)
  027f054  lwz 4, 1808(4)
  027f058  lwz 30, 120(31)
  027f05c  fctiwz 1, 1
  027f060  stfd 1, 176(1)
  027f064  std 28, 200(1)
  027f068  lwz 3, 180(1)
  027f06c  extsw 28, 3
  027f070  divw 5, 4, 28
  027f074  mullw 3, 5, 3
  027f078  subc 3, 4, 3
  027f07c  extsw 3, 3
  027f080  bl 0x502730
  027f084  nop
  027f088  fmr 31, 1
  027f08c  ori 3, 28, 0
  027f090  bl 0x502730
  027f094  nop
  027f098  fdivs 1, 31, 1
  027f09c  lfs 2, 4(29)
  027f0a0  lfs 3, 8(29)
  027f0a4  lfs 4, 12(29)
  027f0a8  lfs 5, 16(29)
  027f0ac  lfs 6, 20(29)
  027f0b0  lis 3, 123
  027f0b4  lfs 7, 24(29)
  027f0b8  lis 4, 123
  027f0bc  lfs 8, 28(29)
  027f0c0  lfs 9, 32(29)
  027f0c4  lfs 10, 36(29)
  027f0c8  lwz 3, -22356(3)
  027f0cc  lwz 4, -22352(4)
  027f0d0  extsw 3, 3
  027f0d4  extsw 4, 4
  027f0d8  fmsubs 1, 1, 2, 3
  027f0dc  fsubs 2, 4, 1
  027f0e0  fsubs 3, 5, 1
  027f0e4  fsub 4, 1, 2
  027f0e8  fsel 1, 4, 2, 1
  027f0ec  fsub 2, 3, 1
  027f0f0  fsel 1, 2, 3, 1
  027f0f4  fmuls 2, 1, 1
  027f0f8  fmuls 3, 2, 1
  027f0fc  fmuls 4, 2, 3
  027f100  fmadds 1, 3, 6, 1
  027f104  fmuls 3, 2, 4
  027f108  fmadds 1, 4, 7, 1
  027f10c  fmuls 2, 2, 3
  027f110  fmadds 1, 3, 8, 1
  027f114  fmadds 1, 2, 9, 1
  027f118  fmadds 1, 1, 10, 10
  027f11c  bl 0x5027bc
  027f120  nop
  027f124  stw 3, 144(31)
  027f128  lbz 3, 32(31)
  027f12c  cmpwi 3, 0
  027f130  bt 1, 0x27f140
  027f134  cmpwi 3, -1
  027f138  bf 1, 0x27f33c
  027f13c  b 0x27f154
  027f140  cmpwi 3, 1
  027f144  bf 1, 0x27f168
  027f148  cmpwi 3, 2
  027f14c  bf 1, 0x27f318
  027f150  b 0x27f33c
  027f154  li 3, 255
  027f158  li 4, 1
  027f15c  stb 3, 48(31)
  027f160  stb 4, 32(31)
  027f164  b 0x27f33c
  027f168  lis 29, 151
  027f16c  lfs 1, 20(31)
  027f170  addic 29, 29, -25376
  027f174  lfs 2, 16(31)
  027f178  lis 3, 40
  027f17c  lfs 3, 132(29)
  027f180  lfs 4, 128(29)
  027f184  fsubs 1, 1, 3
  027f188  fsubs 2, 2, 4
  027f18c  lfs 3, 24(31)
  027f190  lfs 4, 136(29)
  027f194  fsubs 3, 3, 4
  027f198  addi 3, 3, -4120
  027f19c  fmuls 1, 1, 1
  027f1a0  fmadds 1, 2, 2, 1
  027f1a4  lfs 2, 40(3)
  027f1a8  fmadds 1, 3, 3, 1
  027f1ac  fsqrts 1, 1
  027f1b0  fcmpu 0, 1, 2
  027f1b4  cror 6, 1, 2
  027f1b8  bt 6, 0x27f33c
  027f1bc  addic 3, 1, 112
  027f1c0  addic 4, 31, 192
  027f1c4  bl 0x5010c0
  027f1c8  nop
  027f1cc  lfs 1, 132(29)
  027f1d0  lfs 2, 20(31)
  027f1d4  lfs 3, 128(29)
  027f1d8  fsubs 1, 1, 2
  027f1dc  lfs 2, 16(31)
  027f1e0  lis 3, 123
  027f1e4  lfs 4, 128(1)
  027f1e8  fsubs 2, 3, 2
  027f1ec  lfs 3, 136(29)
  027f1f0  lfs 5, 24(31)
  027f1f4  lfs 6, 112(1)
  027f1f8  fsubs 3, 3, 5
  027f1fc  lfs 5, 144(1)
  027f200  lfs 7, 132(1)
  027f204  fmuls 4, 4, 1
  027f208  lfs 8, 136(1)
  027f20c  fmuls 7, 7, 1
  027f210  lfs 9, 116(1)
  027f214  fmuls 1, 8, 1
  027f218  lfs 8, 120(1)
  027f21c  lfs 10, 148(1)
  027f220  fmadds 4, 6, 2, 4
  027f224  lfs 6, -22380(3)
  027f228  fmadds 7, 9, 2, 7
  027f22c  fmadds 8, 8, 2, 1
  027f230  lfs 9, 152(1)
  027f234  fmadds 1, 5, 3, 4
  027f238  fmadds 2, 10, 3, 7
  027f23c  fmadds 3, 9, 3, 8
  027f240  fcmpu 0, 1, 6
  027f244  cror 6, 0, 2
  027f248  bt 6, 0x27f33c
  027f24c  lis 3, 123
  027f250  addic 3, 3, -22380
  027f254  lfs 4, 4(3)
  027f258  fcmpu 0, 1, 4
  027f25c  cror 6, 1, 2
  027f260  bt 6, 0x27f33c
  027f264  lfs 1, 8(3)
  027f268  fcmpu 0, 2, 1
  027f26c  cror 6, 0, 2
  027f270  bt 6, 0x27f33c
  027f274  lfs 1, 12(3)
  027f278  fcmpu 0, 2, 1
  027f27c  cror 6, 1, 2
  027f280  bt 6, 0x27f33c
  027f284  lfs 1, 16(3)
  027f288  fcmpu 0, 3, 1
  027f28c  cror 6, 0, 2
  027f290  bt 6, 0x27f33c
  027f294  lfs 1, 20(3)
  027f298  fcmpu 0, 3, 1
  027f29c  cror 6, 1, 2
  027f2a0  bt 6, 0x27f33c
  027f2a4  li 3, 1
  027f2a8  li 4, 0
  027f2ac  ori 5, 31, 0
  027f2b0  bl 0x15d12c
  027f2b4  nop
  027f2b8  li 3, 2
  027f2bc  li 4, 1
  027f2c0  vspltisw 4, -1
  027f2c4  lis 5, 123
  027f2c8  li 6, -22384
  027f2cc  stb 3, 32(31)
  027f2d0  lis 7, 40
  027f2d4  stb 4, 188(31)
  027f2d8  addi 3, 7, -4120
  027f2dc  li 4, 36
  027f2e0  vslw 4, 4, 4
  027f2e4  lvlx 2, 6, 5
  027f2e8  vcfsx 2, 2, 0
  027f2ec  lvlx 3, 4, 3
  027f2f0  li 3, -3056
  027f2f4  vspltw 3, 3, 0
  027f2f8  lis 4, 114
  027f2fc  lvlx 5, 3, 4
  027f300  vaddfp 2, 2, 3
  027f304  vmaddfp 2, 5, 2, 4
  027f308  vctsxs 2, 2, 0
  027f30c  vspltw 2, 2, 0
  027f310  stvewx 2, 0, 30
  027f314  b 0x27f33c
  027f318  ori 3, 30, 0
  027f31c  bl 0x4fff60
  027f320  nop
  027f324  cmpwi 3, 0
  027f328  bt 2, 0x27f33c
  027f32c  li 3, 1
  027f330  li 4, 0
  027f334  stb 3, 32(31)
  027f338  stb 4, 188(31)
  027f33c  ld 0, 256(1)
  027f340  mtlr 0
  027f344  lfd 31, 232(1)
  027f348  ld 28, 200(1)
  027f34c  ld 29, 208(1)
  027f350  ld 30, 216(1)
  027f354  ld 31, 224(1)
  027f358  addi 1, 1, 240
  027f35c  blr
