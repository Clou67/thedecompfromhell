# game/update/camera17.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

SECTION_HEADER_CAMERA_UNK:   # 0x3d318, 0x14 bytes
  003d318  lis 3, 114
  003d31c  lis 4, 1
  003d320  addic 3, 3, -9784
  003d324  stw 4, 72(3)
  003d328  blr

Cam17_IsHeroInVolume:   # 0x3d330, 0x230 bytes
  003d330  stdu 1, -144(1)
  003d334  mflr 0
  003d338  std 0, 160(1)
  003d33c  lis 5, 149
  003d340  lis 4, 149
  003d344  lhz 3, 132(3)
  003d348  addic 5, 5, 5056
  003d34c  std 30, 128(1)
  003d350  extsh 3, 3
  003d354  li 30, 0
  003d358  sldi 3, 3, 5
  003d35c  std 31, 136(1)
  003d360  lwz 4, 16468(4)
  003d364  ori 31, 30, 0
  003d368  lwz 5, 384(5)
  003d36c  std 29, 120(1)
  003d370  addc 3, 4, 3
  003d374  clrldi 29, 3, 32
  003d378  lhz 3, 134(5)
  003d37c  cmpwi 3, 0
  003d380  lwz 29, 28(29)
  003d384  bt 2, 0x3d390
  003d388  ori 3, 30, 0
  003d38c  b 0x3d544
  003d390  lhz 3, 44(29)
  003d394  cmpwi 3, 2
  003d398  cmpwi 1, 3, 4
  003d39c  bf 2, 0x3d3cc
  003d3a0  lis 3, 151
  003d3a4  addic 3, 3, -25376
  003d3a8  lwz 3, 8332(3)
  003d3ac  cmpwi 3, 26
  003d3b0  bf 2, 0x3d3cc
  003d3b4  lhz 3, 46(29)
  003d3b8  extsh 3, 3
  003d3bc  cmpwi 3, 0
  003d3c0  bf 1, 0x3d3cc
  003d3c4  li 30, 1
  003d3c8  b 0x3d3f8
  003d3cc  bf 6, 0x3d3f8
  003d3d0  lis 3, 151
  003d3d4  addic 3, 3, -25376
  003d3d8  lwz 3, 8836(3)
  003d3dc  cmpwi 3, 3
  003d3e0  bf 2, 0x3d3f8
  003d3e4  lhz 3, 46(29)
  003d3e8  extsh 3, 3
  003d3ec  cmpwi 3, 0
  003d3f0  bf 1, 0x3d3f8
  003d3f4  li 30, 1
  003d3f8  lwz 3, 12(29)
  003d3fc  cmpwi 1, 30, 0
  003d400  cmpwi 3, 0
  003d404  bt 0, 0x3d434
  003d408  bf 6, 0x3d42c
  003d40c  lis 5, 151
  003d410  extsw 4, 3
  003d414  addic 3, 5, -25376
  003d418  addic 3, 3, 128
  003d41c  bl 0x110b70
  003d420  nop
  003d424  cmpwi 3, 0
  003d428  bt 2, 0x3d434
  003d42c  li 3, 1
  003d430  b 0x3d544
  003d434  lwz 3, 76(29)
  003d438  cmpwi 1, 30, 0
  003d43c  cmpwi 3, 0
  003d440  bt 0, 0x3d470
  003d444  bf 6, 0x3d468
  003d448  lis 5, 151
  003d44c  extsw 4, 3
  003d450  addic 3, 5, -25376
  003d454  addic 3, 3, 128
  003d458  bl 0x110b70
  003d45c  nop
  003d460  cmpwi 3, 0
  003d464  bt 2, 0x3d470
  003d468  li 3, 1
  003d46c  b 0x3d544
  003d470  lwz 3, 16(29)
  003d474  cmpwi 1, 30, 0
  003d478  cmpwi 3, 0
  003d47c  bt 0, 0x3d4ac
  003d480  bf 6, 0x3d4a4
  003d484  lis 5, 151
  003d488  extsw 4, 3
  003d48c  addic 3, 5, -25376
  003d490  addic 3, 3, 128
  003d494  bl 0x110c60
  003d498  nop
  003d49c  cmpwi 3, 0
  003d4a0  bt 2, 0x3d4ac
  003d4a4  li 3, 1
  003d4a8  b 0x3d544
  003d4ac  lwz 3, 8(29)
  003d4b0  cmpwi 1, 30, 0
  003d4b4  cmpwi 3, 0
  003d4b8  bt 0, 0x3d4e8
  003d4bc  bf 6, 0x3d4e0
  003d4c0  lis 5, 151
  003d4c4  extsw 4, 3
  003d4c8  addic 3, 5, -25376
  003d4cc  addic 3, 3, 128
  003d4d0  bl 0x110d48
  003d4d4  nop
  003d4d8  cmpwi 3, 0
  003d4dc  bt 2, 0x3d4e8
  003d4e0  li 3, 1
  003d4e4  b 0x3d544
  003d4e8  lwz 29, 20(29)
  003d4ec  cmpwi 1, 30, 0
  003d4f0  cmpwi 29, 0
  003d4f4  bt 0, 0x3d540
  003d4f8  bf 6, 0x3d538
  003d4fc  lis 3, 165
  003d500  slwi 4, 29, 2
  003d504  addic 3, 3, 7136
  003d508  extsw 4, 4
  003d50c  lis 5, 151
  003d510  addic 5, 5, -25376
  003d514  lwzx 6, 3, 4
  003d518  addic 3, 5, 128
  003d51c  addic 4, 6, 16
  003d520  lwz 5, 0(6)
  003d524  extsw 5, 5
  003d528  bl 0x104e44
  003d52c  nop
  003d530  cmpwi 3, 0
  003d534  bt 2, 0x3d540
  003d538  li 3, 1
  003d53c  b 0x3d544
  003d540  ori 3, 31, 0
  003d544  ld 0, 160(1)
  003d548  mtlr 0
  003d54c  ld 29, 120(1)
  003d550  ld 30, 128(1)
  003d554  ld 31, 136(1)
  003d558  addi 1, 1, 144
  003d55c  blr

Cam17_ModifyFollowCam:   # 0x3d5b0, 0xbb0 bytes
  003d5b0  stdu 1, -224(1)
  003d5b4  mflr 0
  003d5b8  std 0, 240(1)
  003d5bc  stfd 30, 208(1)
  003d5c0  stfd 31, 216(1)
  003d5c4  addi 0, 1, 144
  003d5c8  stvx 31, 0, 0
  003d5cc  lis 4, 149
  003d5d0  std 30, 192(1)
  003d5d4  lhz 5, 132(3)
  003d5d8  ori 30, 3, 0
  003d5dc  extsh 5, 5
  003d5e0  lwz 4, 16468(4)
  003d5e4  sldi 5, 5, 5
  003d5e8  std 31, 200(1)
  003d5ec  addc 4, 4, 5
  003d5f0  clrldi 31, 4, 32
  003d5f4  lwz 31, 28(31)
  003d5f8  lhz 3, 44(31)
  003d5fc  cmpwi 3, 8
  003d600  std 29, 184(1)
  003d604  std 28, 176(1)
  003d608  std 27, 168(1)
  003d60c  cmpwi 1, 3, 6
  003d610  bf 2, 0x3d630
  003d614  lis 3, 149
  003d618  addic 3, 3, 5056
  003d61c  lwz 3, 384(3)
  003d620  lwz 3, 112(3)
  003d624  lwz 3, 560(3)
  003d628  cmpwi 3, 0
  003d62c  bt 2, 0x3e12c
  003d630  bf 6, 0x3d650
  003d634  lis 3, 149
  003d638  addic 3, 3, 5056
  003d63c  lwz 3, 384(3)
  003d640  lwz 3, 112(3)
  003d644  lwz 3, 560(3)
  003d648  cmpwi 3, 0
  003d64c  bf 2, 0x3e12c
  003d650  ori 3, 30, 0
  003d654  bl 0x3d330
  003d658  cmpwi 3, 0
  003d65c  bf 2, 0x3d68c
  003d660  lhz 3, 46(31)
  003d664  cmpwi 3, 0
  003d668  bt 2, 0x3d674
  003d66c  li 3, 1
  003d670  sth 3, 74(31)
  003d674  li 4, 0
  003d678  ori 3, 30, 0
  003d67c  sth 4, 46(31)
  003d680  bl 0x32bd4
  003d684  nop
  003d688  b 0x3e12c
  003d68c  ori 3, 30, 0
  003d690  bl 0x32c24
  003d694  nop
  003d698  cmpwi 3, 0
  003d69c  bt 1, 0x3d6c0
  003d6a0  lhz 3, 46(31)
  003d6a4  cmpwi 3, 0
  003d6a8  bt 2, 0x3d6b4
  003d6ac  li 3, 1
  003d6b0  sth 3, 74(31)
  003d6b4  li 3, 0
  003d6b8  sth 3, 46(31)
  003d6bc  b 0x3e12c
  003d6c0  lhz 3, 54(31)
  003d6c4  cmpwi 3, 0
  003d6c8  bt 2, 0x3d740
  003d6cc  lis 3, 149
  003d6d0  lhz 5, 132(30)
  003d6d4  lis 4, 149
  003d6d8  extsh 5, 5
  003d6dc  addic 4, 4, 5056
  003d6e0  lwz 3, 16468(3)
  003d6e4  sldi 5, 5, 5
  003d6e8  addc 3, 3, 5
  003d6ec  clrldi 3, 3, 32
  003d6f0  lfs 2, 344(4)
  003d6f4  lfs 1, 24(3)
  003d6f8  bl 0x5026a0
  003d6fc  nop
  003d700  lis 3, 4
  003d704  addi 3, 3, -10912
  003d708  lfs 2, 0(3)
  003d70c  fcmpu 0, 1, 2
  003d710  bt 0, 0x3d740
  003d714  lhz 3, 46(31)
  003d718  cmpwi 3, 0
  003d71c  bt 2, 0x3d728
  003d720  li 3, 1
  003d724  sth 3, 74(31)
  003d728  li 4, 0
  003d72c  ori 3, 30, 0
  003d730  sth 4, 46(31)
  003d734  bl 0x32bd4
  003d738  nop
  003d73c  b 0x3e12c
  003d740  lhz 3, 72(31)
  003d744  cmpwi 3, 0
  003d748  bt 2, 0x3d7a0
  003d74c  lhz 3, 44(31)
  003d750  cmpwi 3, 5
  003d754  bf 2, 0x3d7a0
  003d758  lis 3, 150
  003d75c  li 4, 5
  003d760  addic 3, 3, 19008
  003d764  lwz 3, 160(3)
  003d768  and 3, 3, 4
  003d76c  cmpwi 3, 0
  003d770  bt 2, 0x3d7a0
  003d774  lhz 3, 46(31)
  003d778  cmpwi 3, 0
  003d77c  bt 2, 0x3d788
  003d780  li 3, 1
  003d784  sth 3, 74(31)
  003d788  li 4, 0
  003d78c  ori 3, 30, 0
  003d790  sth 4, 46(31)
  003d794  bl 0x32bd4
  003d798  nop
  003d79c  b 0x3e12c
  003d7a0  lhz 3, 46(31)
  003d7a4  cmpwi 1, 3, 0
  003d7a8  bf 6, 0x3d7d0
  003d7ac  lis 3, 149
  003d7b0  addic 3, 3, 5056
  003d7b4  lwz 3, 384(3)
  003d7b8  lwz 4, 112(3)
  003d7bc  lfs 1, 284(4)
  003d7c0  stfs 1, 64(31)
  003d7c4  lwz 3, 112(3)
  003d7c8  lfs 1, 288(3)
  003d7cc  stfs 1, 68(31)
  003d7d0  lhz 3, 44(31)
  003d7d4  cmpwi 3, 5
  003d7d8  bf 2, 0x3da2c
  003d7dc  bf 6, 0x3da2c
  003d7e0  lis 3, 4
  003d7e4  lis 4, 149
  003d7e8  addi 3, 3, -10912
  003d7ec  li 5, 0
  003d7f0  addic 4, 4, 5056
  003d7f4  lfs 1, 4(3)
  003d7f8  stw 5, 0(31)
  003d7fc  lwz 3, 384(4)
  003d800  lwz 4, 112(3)
  003d804  lfs 2, 308(4)
  003d808  lfs 3, 304(4)
  003d80c  fmuls 4, 2, 2
  003d810  lfs 5, 312(4)
  003d814  lfs 6, 36(31)
  003d818  lfs 7, 316(4)
  003d81c  lis 6, 151
  003d820  fmadds 4, 3, 3, 4
  003d824  addic 6, 6, -25376
  003d828  fmadds 4, 5, 5, 4
  003d82c  fsqrts 4, 4
  003d830  fdivs 6, 6, 4
  003d834  fsub 8, 1, 4
  003d838  fsub 9, 1, 4
  003d83c  fsub 10, 1, 4
  003d840  fsub 11, 4, 1
  003d844  fsub 12, 4, 1
  003d848  fsub 4, 4, 1
  003d84c  fmuls 3, 3, 6
  003d850  fmuls 2, 2, 6
  003d854  fmuls 5, 5, 6
  003d858  fsel 6, 8, 1, 3
  003d85c  fsel 8, 9, 1, 2
  003d860  fsel 1, 10, 1, 5
  003d864  fsel 3, 11, 6, 3
  003d868  fsel 2, 12, 8, 2
  003d86c  fsel 1, 4, 1, 5
  003d870  stfs 3, 304(4)
  003d874  stfs 2, 308(4)
  003d878  stfs 1, 312(4)
  003d87c  lfs 4, 36(31)
  003d880  stfs 4, 348(4)
  003d884  lfs 4, 40(31)
  003d888  stfs 4, 352(4)
  003d88c  lfs 5, 48(31)
  003d890  stfs 3, 320(4)
  003d894  stfs 5, 240(4)
  003d898  stfs 2, 324(4)
  003d89c  stfs 1, 328(4)
  003d8a0  stfs 7, 332(4)
  003d8a4  lfs 1, 656(6)
  003d8a8  lfs 2, 660(6)
  003d8ac  fmuls 1, 4, 1
  003d8b0  fmuls 2, 4, 2
  003d8b4  lfs 5, 128(6)
  003d8b8  lfs 6, 664(6)
  003d8bc  fmuls 4, 4, 6
  003d8c0  fneg 1, 1
  003d8c4  fneg 2, 2
  003d8c8  fneg 4, 4
  003d8cc  fadds 1, 5, 1
  003d8d0  stfs 1, 144(4)
  003d8d4  lfs 5, 132(6)
  003d8d8  fadds 1, 1, 3
  003d8dc  fadds 2, 5, 2
  003d8e0  stfs 2, 148(4)
  003d8e4  lfs 2, 136(6)
  003d8e8  fadds 2, 2, 4
  003d8ec  stfs 2, 152(4)
  003d8f0  lfs 2, 140(6)
  003d8f4  stfs 2, 156(4)
  003d8f8  stfs 1, 48(3)
  003d8fc  lfs 1, 308(4)
  003d900  lfs 2, 148(4)
  003d904  fadds 1, 2, 1
  003d908  stfs 1, 52(3)
  003d90c  lfs 1, 152(4)
  003d910  lfs 2, 312(4)
  003d914  fadds 1, 1, 2
  003d918  stfs 1, 56(3)
  003d91c  lfs 1, 156(4)
  003d920  stfs 1, 60(3)
  003d924  lfs 1, 240(4)
  003d928  lfs 2, 656(6)
  003d92c  lfs 3, 308(4)
  003d930  lfs 4, 660(6)
  003d934  fmuls 2, 1, 2
  003d938  fmuls 3, 3, 3
  003d93c  lfs 5, 304(4)
  003d940  lfs 6, 128(6)
  003d944  fmuls 4, 1, 4
  003d948  lfs 7, 312(4)
  003d94c  lfs 8, 664(6)
  003d950  fneg 2, 2
  003d954  fmadds 3, 5, 5, 3
  003d958  fneg 4, 4
  003d95c  fmuls 5, 1, 8
  003d960  fadds 2, 6, 2
  003d964  fmadds 3, 7, 7, 3
  003d968  fneg 5, 5
  003d96c  fsqrts 3, 3
  003d970  stfs 2, 128(4)
  003d974  lfs 7, 132(6)
  003d978  lfs 8, 348(4)
  003d97c  lfs 9, 352(4)
  003d980  fadds 4, 7, 4
  003d984  stfs 4, 132(4)
  003d988  lfs 10, 136(6)
  003d98c  fadds 5, 10, 5
  003d990  stfs 5, 136(4)
  003d994  lfs 11, 140(6)
  003d998  stfs 2, 208(4)
  003d99c  stfs 11, 140(4)
  003d9a0  stfs 4, 212(4)
  003d9a4  stfs 5, 216(4)
  003d9a8  stfs 11, 220(4)
  003d9ac  stfs 6, 64(4)
  003d9b0  stfs 7, 68(4)
  003d9b4  stfs 10, 72(4)
  003d9b8  stfs 11, 76(4)
  003d9bc  stfs 6, 160(4)
  003d9c0  stfs 7, 164(4)
  003d9c4  stfs 10, 168(4)
  003d9c8  stfs 11, 172(4)
  003d9cc  fsubs 3, 8, 3
  003d9d0  lfs 2, 48(3)
  003d9d4  stfs 2, 0(4)
  003d9d8  lfs 2, 52(3)
  003d9dc  stfs 2, 4(4)
  003d9e0  lfs 2, 56(3)
  003d9e4  stfs 2, 8(4)
  003d9e8  lfs 2, 60(3)
  003d9ec  stfs 2, 12(4)
  003d9f0  lfs 2, 48(3)
  003d9f4  stfs 2, 496(4)
  003d9f8  lfs 2, 52(3)
  003d9fc  stfs 2, 500(4)
  003da00  lfs 2, 56(3)
  003da04  stfs 2, 504(4)
  003da08  lfs 2, 60(3)
  003da0c  stfs 2, 508(4)
  003da10  stfs 3, 512(4)
  003da14  stw 5, 52(4)
  003da18  stfs 1, 36(4)
  003da1c  stfs 9, 40(4)
  003da20  stw 5, 56(4)
  003da24  stw 5, 48(4)
  003da28  stw 5, 44(4)
  003da2c  lis 3, 4
  003da30  lis 4, 114
  003da34  addi 3, 3, -10912
  003da38  lfs 30, 8(3)
  003da3c  lfs 1, -3056(4)
  003da40  li 4, 8
  003da44  fmuls 1, 1, 30
  003da48  <unknown>
  003da4c  vspltw 31, 31, 0
  003da50  fctiwz 1, 1
  003da54  stfd 1, 128(1)
  003da58  lwz 3, 132(1)
  003da5c  extsw 3, 3
  003da60  bl 0x502730
  003da64  nop
  003da68  lhz 3, 46(31)
  003da6c  li 28, 0
  003da70  fmr 31, 1
  003da74  addic 5, 3, 1
  003da78  lhz 3, 44(31)
  003da7c  ori 29, 28, 0
  003da80  cmpwi 3, 10
  003da84  sth 5, 46(31)
  003da88  bf 2, 0x3dab0
  003da8c  bl 0x32dd0
  003da90  nop
  003da94  lis 3, 149
  003da98  li 4, 333
  003da9c  addic 3, 3, 5056
  003daa0  lwz 3, 384(3)
  003daa4  lwz 3, 112(3)
  003daa8  stw 4, 560(3)
  003daac  lhz 3, 44(31)
  003dab0  cmpwi 3, 11
  003dab4  bf 2, 0x3dadc
  003dab8  bl 0x32dd0
  003dabc  nop
  003dac0  lis 3, 149
  003dac4  li 4, 2
  003dac8  addic 3, 3, 5056
  003dacc  lwz 3, 384(3)
  003dad0  lwz 3, 112(3)
  003dad4  stw 4, 560(3)
  003dad8  lhz 3, 44(31)
  003dadc  cmpwi 3, 2
  003dae0  cmpwi 1, 3, 4
  003dae4  bt 2, 0x3daf0
  003dae8  cmpwi 6, 3, 1
  003daec  bf 6, 0x3db68
  003daf0  lis 3, 149
  003daf4  vspltisw 2, -1
  003daf8  lis 4, 114
  003dafc  addic 3, 3, 5056
  003db00  li 5, -3056
  003db04  vslw 2, 2, 2
  003db08  lwz 3, 384(3)
  003db0c  lwz 3, 112(3)
  003db10  lwz 6, 440(3)
  003db14  ori 6, 6, 3
  003db18  stw 6, 440(3)
  003db1c  lfs 1, -3056(4)
  003db20  <unknown>
  003db24  fmuls 1, 1, 30
  003db28  vmaddfp 31, 3, 31, 2
  003db2c  lhz 3, 46(31)
  003db30  extsh 3, 3
  003db34  fctiwz 1, 1
  003db38  vctsxs 31, 31, 0
  003db3c  stfd 1, 128(1)
  003db40  lwz 4, 132(1)
  003db44  cmpw 3, 4
  003db48  bf 1, 0x3db5c
  003db4c  vsplth 2, 31, 1
  003db50  li 3, 46
  003db54  li 28, 1
  003db58  stvehx 2, 3, 31
  003db5c  bl 0x2f3b0
  003db60  nop
  003db64  b 0x3dd58
  003db68  cmpwi 1, 3, 7
  003db6c  bt 26, 0x3db88
  003db70  cmpwi 6, 3, 10
  003db74  bt 6, 0x3db88
  003db78  cmpwi 1, 3, 9
  003db7c  bt 26, 0x3db88
  003db80  cmpwi 6, 3, 3
  003db84  bf 6, 0x3dc74
  003db88  lis 3, 150
  003db8c  lwz 3, 19008(3)
  003db90  cmpwi 3, 0
  003db94  bf 2, 0x3dbac
  003db98  lis 3, 150
  003db9c  addic 3, 3, 19008
  003dba0  lwz 3, 4(3)
  003dba4  cmpwi 3, 0
  003dba8  bt 2, 0x3dbd4
  003dbac  vspltisw 2, -1
  003dbb0  li 3, -3056
  003dbb4  lis 4, 114
  003dbb8  vslw 2, 2, 2
  003dbbc  <unknown>
  003dbc0  li 3, 46
  003dbc4  vmaddfp 2, 3, 31, 2
  003dbc8  vctsxs 2, 2, 0
  003dbcc  vsplth 2, 2, 1
  003dbd0  stvehx 2, 3, 31
  003dbd4  lis 3, 114
  003dbd8  vspltisw 2, -1
  003dbdc  li 4, -3056
  003dbe0  lfs 1, -3056(3)
  003dbe4  vslw 2, 2, 2
  003dbe8  fmuls 2, 1, 30
  003dbec  <unknown>
  003dbf0  lhz 3, 46(31)
  003dbf4  vmaddfp 31, 3, 31, 2
  003dbf8  extsh 5, 3
  003dbfc  fctiwz 2, 2
  003dc00  vctsxs 31, 31, 0
  003dc04  stfd 2, 128(1)
  003dc08  lwz 4, 132(1)
  003dc0c  cmpw 5, 4
  003dc10  bt 0, 0x3dc3c
  003dc14  lis 5, 149
  003dc18  li 28, 1
  003dc1c  addic 5, 5, 5056
  003dc20  lwz 5, 564(5)
  003dc24  cmpwi 5, 0
  003dc28  bf 1, 0x3dc3c
  003dc2c  vsplth 2, 31, 1
  003dc30  li 5, 46
  003dc34  ori 3, 4, 0
  003dc38  stvehx 2, 5, 31
  003dc3c  lis 4, 4
  003dc40  addi 4, 4, -10912
  003dc44  extsh 3, 3
  003dc48  lfs 2, 12(4)
  003dc4c  fmuls 1, 1, 2
  003dc50  fctiwz 1, 1
  003dc54  stfd 1, 128(1)
  003dc58  lwz 4, 132(1)
  003dc5c  cmpw 3, 4
  003dc60  bt 0, 0x3dd58
  003dc64  li 3, 1
  003dc68  ori 28, 29, 0
  003dc6c  sth 3, 46(31)
  003dc70  b 0x3dd58
  003dc74  bf 26, 0x3dd08
  003dc78  lis 3, 4
  003dc7c  lis 27, 114
  003dc80  addi 3, 3, -10912
  003dc84  li 4, 16
  003dc88  lfs 31, 16(3)
  003dc8c  lfs 1, -3056(27)
  003dc90  <unknown>
  003dc94  fmuls 1, 1, 31
  003dc98  vspltw 31, 2, 0
  003dc9c  fctiwz 1, 1
  003dca0  stfd 1, 128(1)
  003dca4  lwz 3, 132(1)
  003dca8  extsw 3, 3
  003dcac  bl 0x502730
  003dcb0  nop
  003dcb4  lfs 2, -3056(27)
  003dcb8  vspltisw 2, -1
  003dcbc  li 3, -3056
  003dcc0  fmuls 2, 2, 31
  003dcc4  fmr 31, 1
  003dcc8  lhz 4, 46(31)
  003dccc  vslw 2, 2, 2
  003dcd0  <unknown>
  003dcd4  extsh 3, 4
  003dcd8  vmaddfp 2, 3, 31, 2
  003dcdc  fctiwz 1, 2
  003dce0  vctsxs 2, 2, 0
  003dce4  stfd 1, 128(1)
  003dce8  lwz 4, 132(1)
  003dcec  cmpw 3, 4
  003dcf0  bf 1, 0x3dd58
  003dcf4  vsplth 2, 2, 1
  003dcf8  li 3, 46
  003dcfc  li 28, 1
  003dd00  stvehx 2, 3, 31
  003dd04  b 0x3dd58
  003dd08  lis 3, 114
  003dd0c  vspltisw 2, -1
  003dd10  li 4, -3056
  003dd14  vslw 2, 2, 2
  003dd18  lfs 1, -3056(3)
  003dd1c  <unknown>
  003dd20  fmuls 1, 1, 30
  003dd24  vmaddfp 31, 3, 31, 2
  003dd28  lhz 3, 46(31)
  003dd2c  extsh 3, 3
  003dd30  fctiwz 1, 1
  003dd34  vctsxs 31, 31, 0
  003dd38  stfd 1, 128(1)
  003dd3c  lwz 4, 132(1)
  003dd40  cmpw 3, 4
  003dd44  bf 1, 0x3dd58
  003dd48  vsplth 2, 31, 1
  003dd4c  li 3, 46
  003dd50  li 28, 1
  003dd54  stvehx 2, 3, 31
  003dd58  lis 3, 149
  003dd5c  lhz 5, 132(30)
  003dd60  lis 4, 4
  003dd64  extsh 5, 5
  003dd68  addi 4, 4, -10912
  003dd6c  sldi 5, 5, 5
  003dd70  lwz 3, 16468(3)
  003dd74  addc 3, 3, 5
  003dd78  lfs 1, 20(4)
  003dd7c  clrldi 3, 3, 32
  003dd80  lfs 2, 24(4)
  003dd84  lfs 3, 24(3)
  003dd88  lfs 4, 28(4)
  003dd8c  fadds 1, 3, 1
  003dd90  fsubs 6, 2, 3
  003dd94  lfs 5, 32(4)
  003dd98  lfs 7, 36(4)
  003dd9c  lfs 8, 40(4)
  003dda0  lfs 10, 44(4)
  003dda4  lhz 3, 46(31)
  003dda8  extsh 3, 3
  003ddac  extsw 3, 3
  003ddb0  fsubs 2, 2, 1
  003ddb4  fsub 11, 3, 6
  003ddb8  fsubs 9, 4, 1
  003ddbc  fsubs 4, 4, 3
  003ddc0  std 3, 128(1)
  003ddc4  fsub 12, 1, 2
  003ddc8  fsel 3, 11, 6, 3
  003ddcc  fsel 1, 12, 2, 1
  003ddd0  fmr 2, 5
  003ddd4  fsub 5, 4, 3
  003ddd8  fsub 6, 9, 1
  003dddc  fsel 3, 5, 4, 3
  003dde0  fmr 4, 7
  003dde4  fsel 1, 6, 9, 1
  003dde8  lfd 6, 128(1)
  003ddec  fmuls 5, 3, 3
  003ddf0  fcfid 6, 6
  003ddf4  stw 29, 120(1)
  003ddf8  lhz 3, 44(31)
  003ddfc  cmpwi 3, 1
  003de00  fmuls 7, 1, 1
  003de04  fmuls 9, 5, 3
  003de08  frsp 6, 6
  003de0c  cmpwi 1, 3, 7
  003de10  cmpwi 6, 3, 9
  003de14  fmuls 11, 7, 1
  003de18  fmadds 3, 9, 2, 3
  003de1c  fmuls 12, 5, 9
  003de20  fmadds 1, 11, 2, 1
  003de24  fdivs 2, 6, 31
  003de28  fmuls 9, 7, 11
  003de2c  fmadds 3, 12, 4, 3
  003de30  fmuls 6, 7, 9
  003de34  fmadds 1, 9, 4, 1
  003de38  fmuls 9, 5, 12
  003de3c  fmuls 4, 7, 6
  003de40  fmadds 1, 6, 8, 1
  003de44  fmuls 5, 5, 9
  003de48  fmadds 3, 9, 8, 3
  003de4c  fmadds 1, 4, 10, 1
  003de50  fmadds 3, 5, 10, 3
  003de54  stfs 1, 112(1)
  003de58  stfs 3, 116(1)
  003de5c  lfs 31, 48(4)
  003de60  lfs 1, 0(31)
  003de64  fmuls 1, 1, 31
  003de68  fmuls 1, 1, 2
  003de6c  bt 2, 0x3de78
  003de70  bt 6, 0x3de78
  003de74  bf 26, 0x3de80
  003de78  cmpwi 28, 0
  003de7c  bf 2, 0x3de94
  003de80  lfs 2, 32(31)
  003de84  addic 3, 1, 112
  003de88  fmuls 2, 2, 31
  003de8c  bl 0x2f470
  003de90  nop
  003de94  lwz 3, 36(31)
  003de98  lfs 1, 36(31)
  003de9c  cmpwi 3, 0
  003dea0  bt 2, 0x3df08
  003dea4  lhz 3, 44(31)
  003dea8  cmpwi 3, 6
  003deac  cmpwi 1, 3, 8
  003deb0  bt 2, 0x3deb8
  003deb4  bf 6, 0x3dee8
  003deb8  lis 3, 4
  003debc  li 4, 0
  003dec0  addi 30, 3, -10912
  003dec4  lfs 2, 52(30)
  003dec8  bl 0x2f3d8
  003decc  nop
  003ded0  lfs 1, 56(30)
  003ded4  lfs 2, 36(31)
  003ded8  fadds 1, 2, 1
  003dedc  bl 0x32ccc
  003dee0  nop
  003dee4  b 0x3df08
  003dee8  lis 3, 4
  003deec  li 4, 0
  003def0  addi 3, 3, -10912
  003def4  lfs 2, 60(3)
  003def8  bl 0x2f3d8
  003defc  nop
  003df00  bl 0x2f3b0
  003df04  nop
  003df08  lwz 3, 40(31)
  003df0c  lfs 1, 40(31)
  003df10  cmpwi 3, 0
  003df14  bt 2, 0x3df58
  003df18  lhz 3, 44(31)
  003df1c  cmpwi 3, 6
  003df20  cmpwi 1, 3, 8
  003df24  bt 2, 0x3df2c
  003df28  bf 6, 0x3df44
  003df2c  lis 3, 4
  003df30  addi 3, 3, -10912
  003df34  lfs 2, 52(3)
  003df38  bl 0x2e354
  003df3c  nop
  003df40  b 0x3df58
  003df44  lis 3, 4
  003df48  addi 3, 3, -10912
  003df4c  lfs 2, 60(3)
  003df50  bl 0x2e354
  003df54  nop
  003df58  lwz 3, 48(31)
  003df5c  lfs 1, 48(31)
  003df60  cmpwi 3, 0
  003df64  bt 2, 0x3dfb0
  003df68  lhz 3, 44(31)
  003df6c  cmpwi 3, 6
  003df70  cmpwi 1, 3, 8
  003df74  bt 2, 0x3df7c
  003df78  bf 6, 0x3df98
  003df7c  lis 3, 4
  003df80  li 4, 0
  003df84  addi 3, 3, -10912
  003df88  lfs 2, 52(3)
  003df8c  bl 0x2f414
  003df90  nop
  003df94  b 0x3dfb0
  003df98  lis 3, 4
  003df9c  li 4, 0
  003dfa0  addi 3, 3, -10912
  003dfa4  lfs 2, 64(3)
  003dfa8  bl 0x2f414
  003dfac  nop
  003dfb0  lwz 3, 80(31)
  003dfb4  lfs 1, 80(31)
  003dfb8  cmpwi 3, 0
  003dfbc  bt 2, 0x3dfcc
  003dfc0  fmuls 1, 1, 31
  003dfc4  bl 0x32cf0
  003dfc8  nop
  003dfcc  lhz 3, 84(31)
  003dfd0  cmpwi 3, 0
  003dfd4  bt 2, 0x3dff4
  003dfd8  lis 3, 149
  003dfdc  addic 3, 3, 5056
  003dfe0  lwz 3, 384(3)
  003dfe4  lwz 3, 112(3)
  003dfe8  lwz 4, 440(3)
  003dfec  ori 4, 4, 2
  003dff0  stw 4, 440(3)
  003dff4  lhz 3, 86(31)
  003dff8  cmpwi 3, 0
  003dffc  bt 2, 0x3e01c
  003e000  lis 3, 149
  003e004  addic 3, 3, 5056
  003e008  lwz 3, 384(3)
  003e00c  lwz 3, 112(3)
  003e010  lwz 4, 440(3)
  003e014  ori 4, 4, 1
  003e018  stw 4, 440(3)
  003e01c  lhz 3, 52(31)
  003e020  cmpwi 3, 0
  003e024  bf 2, 0x3e034
  003e028  extsh 3, 3
  003e02c  bl 0x2f064
  003e030  nop
  003e034  lwz 3, 56(31)
  003e038  lfs 1, 56(31)
  003e03c  cmpwi 3, 0
  003e040  bf 2, 0x3e050
  003e044  lwz 3, 60(31)
  003e048  cmpwi 3, 0
  003e04c  bt 2, 0x3e0e8
  003e050  lis 3, 4
  003e054  lis 4, 114
  003e058  addi 3, 3, -10912
  003e05c  lfs 2, 68(3)
  003e060  lfs 3, -3056(4)
  003e064  lhz 3, 46(31)
  003e068  fmuls 2, 3, 2
  003e06c  extsh 4, 3
  003e070  fctiwz 2, 2
  003e074  stfd 2, 128(1)
  003e078  lwz 3, 132(1)
  003e07c  cmpw 4, 3
  003e080  bt 0, 0x3e094
  003e084  lfs 2, 60(31)
  003e088  bl 0x2eff8
  003e08c  nop
  003e090  b 0x3e0e8
  003e094  extsw 3, 3
  003e098  bl 0x502730
  003e09c  nop
  003e0a0  lhz 3, 46(31)
  003e0a4  extsh 3, 3
  003e0a8  extsw 3, 3
  003e0ac  std 3, 128(1)
  003e0b0  lfs 2, 64(31)
  003e0b4  lfs 3, 56(31)
  003e0b8  lfs 4, 68(31)
  003e0bc  lfs 5, 60(31)
  003e0c0  lfd 6, 128(1)
  003e0c4  fcfid 6, 6
  003e0c8  fsubs 3, 3, 2
  003e0cc  fsubs 5, 5, 4
  003e0d0  frsp 6, 6
  003e0d4  fdivs 6, 6, 1
  003e0d8  fmadds 1, 3, 6, 2
  003e0dc  fmadds 2, 5, 6, 4
  003e0e0  bl 0x2eff8
  003e0e4  nop
  003e0e8  lhz 31, 44(31)
  003e0ec  cmpwi 1, 31, 7
  003e0f0  cmpwi 31, 1
  003e0f4  cror 2, 2, 6
  003e0f8  bt 2, 0x3e104
  003e0fc  cmpwi 31, 10
  003e100  bf 2, 0x3e12c
  003e104  bl 0x2f3b0
  003e108  nop
  003e10c  bl 0x2f03c
  003e110  nop
  003e114  lis 3, 4
  003e118  addi 3, 3, -10912
  003e11c  lfs 1, 72(3)
  003e120  lfs 2, 76(3)
  003e124  bl 0x32d18
  003e128  nop
  003e12c  li 0, 144
  003e130  lvx 31, 1, 0
  003e134  ld 0, 240(1)
  003e138  mtlr 0
  003e13c  lfd 30, 208(1)
  003e140  lfd 31, 216(1)
  003e144  ld 27, 168(1)
  003e148  ld 28, 176(1)
  003e14c  ld 29, 184(1)
  003e150  ld 30, 192(1)
  003e154  ld 31, 200(1)
  003e158  addi 1, 1, 224
  003e15c  blr

ActivateCamera_17:   # 0x3e160, 0x108 bytes
  003e160  stdu 1, -112(1)
  003e164  mflr 0
  003e168  std 0, 128(1)
  003e16c  lis 4, 149
  003e170  lhz 5, 132(3)
  003e174  extsh 5, 5
  003e178  lwz 4, 16468(4)
  003e17c  sldi 5, 5, 5
  003e180  addc 4, 4, 5
  003e184  clrldi 4, 4, 32
  003e188  lwz 4, 28(4)
  003e18c  lhz 5, 72(4)
  003e190  cmpwi 5, 1
  003e194  bf 2, 0x3e1ac
  003e198  lhz 5, 74(4)
  003e19c  cmpwi 5, 0
  003e1a0  bt 2, 0x3e1ac
  003e1a4  li 3, 0
  003e1a8  b 0x3e258
  003e1ac  lhz 5, 44(4)
  003e1b0  cmpwi 5, 11
  003e1b4  cmpwi 1, 5, 2
  003e1b8  cmpwi 6, 5, 10
  003e1bc  cmpwi 7, 5, 1
  003e1c0  bf 2, 0x3e1e0
  003e1c4  lis 5, 151
  003e1c8  addic 5, 5, -25376
  003e1cc  lbz 5, 8356(5)
  003e1d0  cmpwi 5, 2
  003e1d4  bt 2, 0x3e1e0
  003e1d8  li 3, 0
  003e1dc  b 0x3e258
  003e1e0  bt 30, 0x3e1e8
  003e1e4  bf 26, 0x3e22c
  003e1e8  lhz 5, 46(4)
  003e1ec  cmpwi 5, 0
  003e1f0  bf 2, 0x3e22c
  003e1f4  lis 5, 151
  003e1f8  addic 5, 5, -25376
  003e1fc  lhz 6, 780(5)
  003e200  cmpwi 6, 0
  003e204  bt 2, 0x3e22c
  003e208  lis 6, 151
  003e20c  lwz 6, -25488(6)
  003e210  cmpwi 6, 14
  003e214  bf 2, 0x3e224
  003e218  lwz 5, 8836(5)
  003e21c  cmpwi 5, 13
  003e220  bt 2, 0x3e22c
  003e224  li 3, 0
  003e228  b 0x3e258
  003e22c  bf 6, 0x3e250
  003e230  lis 5, 151
  003e234  addic 5, 5, -25376
  003e238  lwz 5, 8332(5)
  003e23c  cmpwi 5, 26
  003e240  bt 2, 0x3e250
  003e244  li 3, 0
  003e248  sth 3, 46(4)
  003e24c  b 0x3e258
  003e250  bl 0x3d5b0
  003e254  li 3, 0
  003e258  ld 0, 128(1)
  003e25c  mtlr 0
  003e260  addi 1, 1, 112
  003e264  blr

STUB_0003e268:   # 0x3e268, 0x4 bytes
  003e268  blr

STUB_0003e26c:   # 0x3e26c, 0x4 bytes
  003e26c  blr

STUB_0003e270:   # 0x3e270, 0x4 bytes
  003e270  blr
