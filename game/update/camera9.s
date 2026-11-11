# game/update/camera9.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

SECTION_HEADER_CAMERA_UNK:   # 0x4d5e0, 0x14 bytes
  004d5e0  lis 3, 114
  004d5e4  lis 4, 1
  004d5e8  addic 3, 3, -6036
  004d5ec  stw 4, 72(3)
  004d5f0  blr

Cam9_TrackHeroPos:   # 0x4d608, 0x138 bytes
  004d608  stdu 1, -160(1)
  004d60c  mflr 0
  004d610  std 0, 176(1)
  004d614  stfd 29, 136(1)
  004d618  stfd 30, 144(1)
  004d61c  stfd 31, 152(1)
  004d620  std 31, 128(1)
  004d624  lis 4, 5
  004d628  std 29, 112(1)
  004d62c  lis 31, 151
  004d630  lwz 29, 112(3)
  004d634  addi 4, 4, -10760
  004d638  addic 31, 31, -25376
  004d63c  std 30, 120(1)
  004d640  addic 3, 29, 48
  004d644  addic 30, 29, 52
  004d648  lfs 29, 0(4)
  004d64c  lwz 5, 8332(31)
  004d650  lfs 31, 4(4)
  004d654  cmpwi 5, 4
  004d658  lfs 30, 8(4)
  004d65c  bf 2, 0x4d6ac
  004d660  lfs 1, 32(29)
  004d664  fmr 3, 29
  004d668  lfs 2, 128(31)
  004d66c  ori 5, 3, 0
  004d670  fmr 4, 30
  004d674  fmr 5, 31
  004d678  bl 0x501e8
  004d67c  nop
  004d680  stfs 1, 32(29)
  004d684  ori 5, 30, 0
  004d688  lfs 1, 36(29)
  004d68c  fmr 3, 29
  004d690  lfs 2, 132(31)
  004d694  fmr 4, 30
  004d698  fmr 5, 31
  004d69c  bl 0x501e8
  004d6a0  nop
  004d6a4  stfs 1, 36(29)
  004d6a8  b 0x4d718
  004d6ac  lfs 1, 32(29)
  004d6b0  lfs 2, 128(31)
  004d6b4  ori 5, 3, 0
  004d6b8  fmr 3, 29
  004d6bc  fmr 4, 30
  004d6c0  fmr 5, 31
  004d6c4  bl 0x501e8
  004d6c8  nop
  004d6cc  stfs 1, 32(29)
  004d6d0  lfs 1, 36(29)
  004d6d4  ori 5, 30, 0
  004d6d8  lfs 2, 132(31)
  004d6dc  fmr 3, 29
  004d6e0  fmr 4, 30
  004d6e4  fmr 5, 31
  004d6e8  bl 0x501e8
  004d6ec  nop
  004d6f0  stfs 1, 36(29)
  004d6f4  addic 5, 29, 56
  004d6f8  lfs 1, 40(29)
  004d6fc  fmr 3, 29
  004d700  lfs 2, 136(31)
  004d704  fmr 4, 30
  004d708  fmr 5, 31
  004d70c  bl 0x501e8
  004d710  nop
  004d714  stfs 1, 40(29)
  004d718  ld 0, 176(1)
  004d71c  mtlr 0
  004d720  lfd 29, 136(1)
  004d724  lfd 30, 144(1)
  004d728  lfd 31, 152(1)
  004d72c  ld 29, 112(1)
  004d730  ld 30, 120(1)
  004d734  ld 31, 128(1)
  004d738  addi 1, 1, 160
  004d73c  blr

Cam9_InitTarget:   # 0x4d748, 0x90 bytes
  004d748  lis 4, 149
  004d74c  lhz 6, 132(3)
  004d750  lwz 5, 112(3)
  004d754  extsh 3, 6
  004d758  sldi 3, 3, 5
  004d75c  lwz 4, 16468(4)
  004d760  addc 3, 4, 3
  004d764  lwz 4, 112(5)
  004d768  clrldi 3, 3, 32
  004d76c  cmpwi 4, 0
  004d770  lwz 4, 28(3)
  004d774  bf 2, 0x4d79c
  004d778  lis 4, 5
  004d77c  lfs 1, 0(3)
  004d780  addi 4, 4, -10432
  004d784  stfs 1, 128(5)
  004d788  lfs 1, 4(3)
  004d78c  stfs 1, 132(5)
  004d790  lfs 1, 8(3)
  004d794  lfs 2, 0(4)
  004d798  b 0x4d7cc
  004d79c  lis 3, 164
  004d7a0  lwz 4, 36(4)
  004d7a4  slwi 4, 4, 8
  004d7a8  lwz 3, -28512(3)
  004d7ac  addc 3, 3, 4
  004d7b0  clrldi 3, 3, 32
  004d7b4  lfs 1, 16(3)
  004d7b8  stfs 1, 128(5)
  004d7bc  lfs 1, 20(3)
  004d7c0  stfs 1, 132(5)
  004d7c4  lfs 1, 24(3)
  004d7c8  lfs 2, 28(3)
  004d7cc  stfs 1, 136(5)
  004d7d0  stfs 2, 140(5)
  004d7d4  blr

Cam9_CalcDesiredPos:   # 0x4d7e8, 0x3d8 bytes
  004d7e8  stdu 1, -224(1)
  004d7ec  mflr 0
  004d7f0  std 0, 240(1)
  004d7f4  stfd 24, 160(1)
  004d7f8  stfd 25, 168(1)
  004d7fc  stfd 26, 176(1)
  004d800  stfd 27, 184(1)
  004d804  stfd 28, 192(1)
  004d808  stfd 29, 200(1)
  004d80c  stfd 30, 208(1)
  004d810  stfd 31, 216(1)
  004d814  lis 6, 149
  004d818  std 30, 144(1)
  004d81c  addic 6, 6, 5056
  004d820  ori 30, 3, 0
  004d824  lfs 7, 452(6)
  004d828  lfs 8, 448(6)
  004d82c  fmuls 1, 7, 7
  004d830  lfs 6, 456(6)
  004d834  lwz 3, 112(30)
  004d838  lis 6, 5
  004d83c  addi 6, 6, -10280
  004d840  fmadds 1, 8, 8, 1
  004d844  fmadds 10, 6, 6, 1
  004d848  lfs 1, 36(3)
  004d84c  lfs 2, 132(3)
  004d850  lfs 9, 32(3)
  004d854  fsubs 13, 1, 2
  004d858  lfs 1, 128(3)
  004d85c  fsubs 0, 9, 1
  004d860  lfs 1, 40(3)
  004d864  fsqrts 10, 10
  004d868  lfs 2, 136(3)
  004d86c  lfs 5, 0(6)
  004d870  std 31, 152(1)
  004d874  cmpwi 1, 5, 0
  004d878  ori 31, 4, 0
  004d87c  fmuls 3, 13, 7
  004d880  fsubs 12, 1, 2
  004d884  fmr 4, 5
  004d888  fmadds 1, 0, 8, 3
  004d88c  fmr 3, 4
  004d890  fmadds 1, 12, 6, 1
  004d894  fmr 2, 3
  004d898  fdivs 11, 1, 10
  004d89c  lfs 1, 68(3)
  004d8a0  fsub 31, 5, 10
  004d8a4  fsub 28, 5, 10
  004d8a8  fsub 30, 10, 5
  004d8ac  fsub 29, 5, 10
  004d8b0  fsub 26, 10, 5
  004d8b4  fsub 27, 10, 5
  004d8b8  fmuls 25, 7, 11
  004d8bc  fmuls 24, 8, 11
  004d8c0  fmuls 11, 6, 11
  004d8c4  fsel 31, 31, 5, 25
  004d8c8  fsel 29, 29, 5, 24
  004d8cc  fsel 28, 28, 5, 11
  004d8d0  fsel 31, 30, 31, 25
  004d8d4  fsel 30, 27, 29, 24
  004d8d8  fsel 11, 26, 28, 11
  004d8dc  fsubs 13, 13, 31
  004d8e0  fsubs 0, 0, 30
  004d8e4  fsubs 12, 12, 11
  004d8e8  fmuls 11, 13, 13
  004d8ec  fmadds 11, 0, 0, 11
  004d8f0  fmadds 11, 12, 12, 11
  004d8f4  fsqrts 31, 11
  004d8f8  fcmpu 0, 31, 2
  004d8fc  bt 2, 0x4d950
  004d900  frsqrte 2, 11
  004d904  lis 4, 5
  004d908  addi 4, 4, -10280
  004d90c  lfs 3, 4(4)
  004d910  lfs 4, 8(4)
  004d914  fmuls 31, 11, 2
  004d918  fmuls 30, 3, 2
  004d91c  fnmsubs 31, 31, 2, 4
  004d920  fmadds 2, 31, 30, 2
  004d924  fmuls 31, 11, 2
  004d928  fmuls 30, 3, 2
  004d92c  fnmsubs 31, 31, 2, 4
  004d930  fmadds 2, 31, 30, 2
  004d934  fmuls 11, 11, 2
  004d938  fmuls 3, 3, 2
  004d93c  fnmsubs 4, 11, 2, 4
  004d940  fmadds 4, 4, 3, 2
  004d944  fmuls 2, 0, 4
  004d948  fmuls 3, 13, 4
  004d94c  fmuls 4, 12, 4
  004d950  fmuls 31, 8, 4
  004d954  fmuls 30, 6, 3
  004d958  fmuls 0, 7, 2
  004d95c  fmr 13, 5
  004d960  fmsubs 31, 6, 2, 31
  004d964  fmsubs 30, 7, 4, 30
  004d968  fmsubs 0, 8, 3, 0
  004d96c  fmr 12, 13
  004d970  fmuls 11, 31, 31
  004d974  fmadds 29, 30, 30, 11
  004d978  fmr 11, 12
  004d97c  fmadds 29, 0, 0, 29
  004d980  fsqrts 28, 29
  004d984  fcmpu 0, 28, 11
  004d988  bt 2, 0x4d9dc
  004d98c  frsqrte 11, 29
  004d990  lis 4, 5
  004d994  addi 4, 4, -10280
  004d998  lfs 12, 4(4)
  004d99c  lfs 13, 8(4)
  004d9a0  fmuls 28, 29, 11
  004d9a4  fmuls 27, 12, 11
  004d9a8  fnmsubs 28, 28, 11, 13
  004d9ac  fmadds 11, 28, 27, 11
  004d9b0  fmuls 28, 29, 11
  004d9b4  fmuls 27, 12, 11
  004d9b8  fnmsubs 28, 28, 11, 13
  004d9bc  fmadds 11, 28, 27, 11
  004d9c0  fmuls 29, 29, 11
  004d9c4  fmuls 12, 12, 11
  004d9c8  fnmsubs 13, 29, 11, 13
  004d9cc  fmadds 13, 13, 12, 11
  004d9d0  fmuls 11, 30, 13
  004d9d4  fmuls 12, 31, 13
  004d9d8  fmuls 13, 0, 13
  004d9dc  fdivs 1, 1, 10
  004d9e0  fmr 27, 3
  004d9e4  fmuls 3, 4, 12
  004d9e8  fsub 0, 5, 10
  004d9ec  fsub 30, 5, 10
  004d9f0  fsub 28, 5, 10
  004d9f4  fsub 31, 10, 5
  004d9f8  fsub 29, 10, 5
  004d9fc  fsub 10, 10, 5
  004da00  fmuls 26, 2, 13
  004da04  fmsubs 24, 27, 13, 3
  004da08  fmuls 25, 27, 11
  004da0c  fmsubs 26, 4, 11, 26
  004da10  fmsubs 25, 2, 12, 25
  004da14  fmuls 3, 8, 1
  004da18  fmuls 7, 7, 1
  004da1c  fmuls 1, 6, 1
  004da20  fsel 6, 0, 5, 3
  004da24  fsel 8, 30, 5, 7
  004da28  fsel 5, 28, 5, 1
  004da2c  fsel 3, 31, 6, 3
  004da30  fsel 6, 29, 8, 7
  004da34  fsel 1, 10, 5, 1
  004da38  fadds 5, 9, 3
  004da3c  stfs 5, 112(1)
  004da40  lfs 3, 36(3)
  004da44  fadds 6, 3, 6
  004da48  stfs 6, 116(1)
  004da4c  lfs 3, 40(3)
  004da50  fadds 1, 3, 1
  004da54  stfs 1, 120(1)
  004da58  lfs 3, 44(3)
  004da5c  stfs 3, 124(1)
  004da60  lfs 7, 80(3)
  004da64  fmadds 2, 2, 7, 5
  004da68  fmadds 5, 27, 7, 6
  004da6c  fmadds 1, 4, 7, 1
  004da70  lfs 6, 88(3)
  004da74  lfs 10, 84(3)
  004da78  fmadds 2, 24, 6, 2
  004da7c  fmadds 4, 26, 6, 5
  004da80  fmadds 5, 25, 6, 1
  004da84  fmadds 2, 11, 10, 2
  004da88  fmadds 1, 12, 10, 4
  004da8c  fmadds 10, 13, 10, 5
  004da90  bt 6, 0x4db78
  004da94  lis 5, 149
  004da98  addic 3, 1, 112
  004da9c  li 6, 0
  004daa0  addic 4, 1, 128
  004daa4  li 7, 0
  004daa8  lwz 5, 16516(5)
  004daac  stfs 3, 140(1)
  004dab0  stfs 10, 136(1)
  004dab4  extsw 5, 5
  004dab8  stfs 1, 132(1)
  004dabc  stfs 2, 128(1)
  004dac0  bl 0x57820
  004dac4  nop
  004dac8  cmpwi 3, 0
  004dacc  bt 2, 0x4dafc
  004dad0  li 3, 3
  004dad4  lfs 1, 128(1)
  004dad8  sth 3, 126(30)
  004dadc  stfs 1, 0(31)
  004dae0  lfs 1, 132(1)
  004dae4  stfs 1, 4(31)
  004dae8  lfs 1, 136(1)
  004daec  stfs 1, 8(31)
  004daf0  lfs 1, 140(1)
  004daf4  stfs 1, 12(31)
  004daf8  b 0x4db88
  004dafc  lfs 1, 128(1)
  004db00  lis 3, 5
  004db04  lis 4, 149
  004db08  stfs 1, 0(31)
  004db0c  lfs 1, 132(1)
  004db10  addi 5, 3, -10280
  004db14  ori 3, 31, 0
  004db18  stfs 1, 4(31)
  004db1c  lfs 1, 136(1)
  004db20  li 6, 0
  004db24  stfs 1, 8(31)
  004db28  lfs 1, 140(1)
  004db2c  stfs 1, 12(31)
  004db30  lfs 1, 4(5)
  004db34  lwz 5, 16520(4)
  004db38  extsw 5, 5
  004db3c  bl 0x59e20
  004db40  nop
  004db44  cmpwi 3, 0
  004db48  bt 2, 0x4db88
  004db4c  lis 3, 161
  004db50  addic 3, 3, 2368
  004db54  lfs 1, 48(3)
  004db58  stfs 1, 0(31)
  004db5c  lfs 1, 52(3)
  004db60  stfs 1, 4(31)
  004db64  lfs 1, 56(3)
  004db68  stfs 1, 8(31)
  004db6c  lfs 1, 60(3)
  004db70  stfs 1, 12(31)
  004db74  b 0x4db88
  004db78  stfs 2, 0(31)
  004db7c  stfs 1, 4(31)
  004db80  stfs 10, 8(31)
  004db84  stfs 3, 12(31)
  004db88  ld 0, 240(1)
  004db8c  mtlr 0
  004db90  lfd 24, 160(1)
  004db94  lfd 25, 168(1)
  004db98  lfd 26, 176(1)
  004db9c  lfd 27, 184(1)
  004dba0  lfd 28, 192(1)
  004dba4  lfd 29, 200(1)
  004dba8  lfd 30, 208(1)
  004dbac  lfd 31, 216(1)
  004dbb0  ld 30, 144(1)
  004dbb4  ld 31, 152(1)
  004dbb8  addi 1, 1, 224
  004dbbc  blr

Cam9_InitPos:   # 0x4dbd0, 0x320 bytes
  004dbd0  stdu 1, -192(1)
  004dbd4  mflr 0
  004dbd8  std 0, 208(1)
  004dbdc  stfd 26, 144(1)
  004dbe0  stfd 27, 152(1)
  004dbe4  stfd 28, 160(1)
  004dbe8  stfd 29, 168(1)
  004dbec  stfd 30, 176(1)
  004dbf0  stfd 31, 184(1)
  004dbf4  std 31, 136(1)
  004dbf8  std 29, 120(1)
  004dbfc  ori 31, 3, 0
  004dc00  lis 29, 149
  004dc04  std 30, 128(1)
  004dc08  addic 29, 29, 5056
  004dc0c  lwz 30, 112(31)
  004dc10  bl 0x4d608
  004dc14  lis 4, 149
  004dc18  lhz 3, 132(31)
  004dc1c  lwz 5, 112(31)
  004dc20  extsh 3, 3
  004dc24  sldi 3, 3, 5
  004dc28  lwz 4, 16468(4)
  004dc2c  lwz 6, 112(5)
  004dc30  addc 3, 4, 3
  004dc34  cmpwi 6, 0
  004dc38  clrldi 3, 3, 32
  004dc3c  lwz 4, 28(3)
  004dc40  bf 2, 0x4dc68
  004dc44  lis 4, 5
  004dc48  lfs 1, 0(3)
  004dc4c  addi 4, 4, -9280
  004dc50  stfs 1, 128(5)
  004dc54  lfs 1, 4(3)
  004dc58  stfs 1, 132(5)
  004dc5c  lfs 9, 8(3)
  004dc60  lfs 1, 0(4)
  004dc64  b 0x4dc98
  004dc68  lis 3, 164
  004dc6c  lwz 4, 36(4)
  004dc70  slwi 4, 4, 8
  004dc74  lwz 3, -28512(3)
  004dc78  addc 3, 3, 4
  004dc7c  clrldi 3, 3, 32
  004dc80  lfs 1, 16(3)
  004dc84  stfs 1, 128(5)
  004dc88  lfs 1, 20(3)
  004dc8c  stfs 1, 132(5)
  004dc90  lfs 9, 24(3)
  004dc94  lfs 1, 28(3)
  004dc98  ori 7, 5, 0
  004dc9c  addic 4, 31, 48
  004dca0  ori 3, 31, 0
  004dca4  li 5, 0
  004dca8  li 6, 1
  004dcac  stfs 9, 136(7)
  004dcb0  stfs 1, 140(7)
  004dcb4  bl 0x4d7e8
  004dcb8  lfs 3, 452(29)
  004dcbc  lfs 4, 448(29)
  004dcc0  fmuls 1, 3, 3
  004dcc4  lfs 2, 456(29)
  004dcc8  lfs 6, 68(30)
  004dccc  lis 3, 5
  004dcd0  fmadds 1, 4, 4, 1
  004dcd4  addi 3, 3, -9280
  004dcd8  fmadds 1, 2, 2, 1
  004dcdc  fsqrts 5, 1
  004dce0  lfs 1, 0(3)
  004dce4  lfs 8, 36(30)
  004dce8  lfs 9, 32(30)
  004dcec  lfs 10, 52(31)
  004dcf0  lfs 11, 40(30)
  004dcf4  lfs 12, 48(31)
  004dcf8  lfs 13, 56(31)
  004dcfc  lfs 7, 460(29)
  004dd00  fdivs 6, 6, 5
  004dd04  fsub 0, 1, 5
  004dd08  fsub 31, 5, 1
  004dd0c  fsub 30, 1, 5
  004dd10  fsub 29, 1, 5
  004dd14  fsub 28, 5, 1
  004dd18  fsub 5, 5, 1
  004dd1c  fmuls 27, 3, 6
  004dd20  fmuls 26, 4, 6
  004dd24  fmuls 6, 2, 6
  004dd28  fsel 0, 0, 1, 27
  004dd2c  fsel 30, 30, 1, 26
  004dd30  fsel 29, 29, 1, 6
  004dd34  fsel 0, 31, 0, 27
  004dd38  fsel 31, 28, 30, 26
  004dd3c  fsel 5, 5, 29, 6
  004dd40  fadds 8, 0, 8
  004dd44  fadds 9, 31, 9
  004dd48  fadds 6, 5, 11
  004dd4c  fsubs 8, 8, 10
  004dd50  fsubs 9, 9, 12
  004dd54  fsubs 6, 6, 13
  004dd58  fmuls 5, 8, 8
  004dd5c  fmadds 5, 9, 9, 5
  004dd60  fmadds 5, 6, 6, 5
  004dd64  fsqrts 10, 5
  004dd68  fcmpu 0, 10, 1
  004dd6c  bf 2, 0x4dd90
  004dd70  stfs 7, 12(31)
  004dd74  fmr 7, 1
  004dd78  stfs 6, 8(31)
  004dd7c  stfs 9, 0(31)
  004dd80  stfs 8, 4(31)
  004dd84  fmr 6, 7
  004dd88  fmr 5, 6
  004dd8c  b 0x4dde8
  004dd90  frsqrte 10, 5
  004dd94  lis 3, 5
  004dd98  fmr 31, 6
  004dd9c  addi 3, 3, -9280
  004dda0  lfs 11, 4(3)
  004dda4  lfs 12, 8(3)
  004dda8  stfs 7, 12(31)
  004ddac  fmuls 13, 5, 10
  004ddb0  fmuls 0, 11, 10
  004ddb4  fnmsubs 13, 13, 10, 12
  004ddb8  fmadds 6, 13, 0, 10
  004ddbc  fmuls 10, 5, 6
  004ddc0  fmuls 13, 11, 6
  004ddc4  fnmsubs 10, 10, 6, 12
  004ddc8  fmadds 6, 10, 13, 6
  004ddcc  fmuls 5, 5, 6
  004ddd0  fmuls 7, 11, 6
  004ddd4  fnmsubs 5, 5, 6, 12
  004ddd8  fmadds 7, 5, 7, 6
  004dddc  fmuls 5, 9, 7
  004dde0  fmuls 6, 8, 7
  004dde4  fmuls 7, 31, 7
  004dde8  fmuls 8, 4, 7
  004ddec  fmuls 9, 2, 6
  004ddf0  fmuls 10, 3, 5
  004ddf4  li 3, 0
  004ddf8  stfs 5, 0(31)
  004ddfc  stfs 6, 4(31)
  004de00  stfs 7, 8(31)
  004de04  fmsubs 8, 2, 5, 8
  004de08  fmsubs 9, 3, 7, 9
  004de0c  fmsubs 4, 4, 6, 10
  004de10  stw 3, 28(31)
  004de14  fmr 3, 1
  004de18  fmuls 2, 8, 8
  004de1c  fmadds 10, 9, 9, 2
  004de20  fmr 2, 3
  004de24  fmadds 10, 4, 4, 10
  004de28  fsqrts 11, 10
  004de2c  fcmpu 0, 11, 1
  004de30  bt 2, 0x4de84
  004de34  frsqrte 1, 10
  004de38  lis 3, 5
  004de3c  addi 3, 3, -9280
  004de40  lfs 2, 4(3)
  004de44  lfs 3, 8(3)
  004de48  fmuls 11, 10, 1
  004de4c  fmuls 12, 2, 1
  004de50  fnmsubs 11, 11, 1, 3
  004de54  fmadds 1, 11, 12, 1
  004de58  fmuls 11, 10, 1
  004de5c  fmuls 12, 2, 1
  004de60  fnmsubs 11, 11, 1, 3
  004de64  fmadds 1, 11, 12, 1
  004de68  fmuls 10, 10, 1
  004de6c  fmuls 2, 2, 1
  004de70  fnmsubs 3, 10, 1, 3
  004de74  fmadds 3, 3, 2, 1
  004de78  fmuls 1, 9, 3
  004de7c  fmuls 2, 8, 3
  004de80  fmuls 3, 4, 3
  004de84  fmuls 4, 7, 2
  004de88  stfs 1, 16(31)
  004de8c  fmuls 8, 5, 3
  004de90  stfs 2, 20(31)
  004de94  fmuls 9, 6, 1
  004de98  stfs 3, 24(31)
  004de9c  li 3, 0
  004dea0  stw 3, 44(31)
  004dea4  fmsubs 3, 6, 3, 4
  004dea8  fmsubs 1, 7, 1, 8
  004deac  fmsubs 2, 5, 2, 9
  004deb0  stfs 3, 32(31)
  004deb4  stfs 1, 36(31)
  004deb8  stfs 2, 40(31)
  004debc  ld 0, 208(1)
  004dec0  mtlr 0
  004dec4  lfd 26, 144(1)
  004dec8  lfd 27, 152(1)
  004decc  lfd 28, 160(1)
  004ded0  lfd 29, 168(1)
  004ded4  lfd 30, 176(1)
  004ded8  lfd 31, 184(1)
  004dedc  ld 29, 120(1)
  004dee0  ld 30, 128(1)
  004dee4  ld 31, 136(1)
  004dee8  addi 1, 1, 192
  004deec  blr

InitCamera_9:   # 0x4def0, 0x134 bytes
  004def0  stdu 1, -128(1)
  004def4  mflr 0
  004def8  std 0, 144(1)
  004defc  std 31, 120(1)
  004df00  ori 31, 3, 0
  004df04  lis 3, 149
  004df08  lis 4, 151
  004df0c  lis 6, 16320
  004df10  addic 4, 4, -25376
  004df14  std 30, 112(1)
  004df18  lhz 5, 132(31)
  004df1c  li 30, 0
  004df20  lwz 3, 16468(3)
  004df24  extsh 5, 5
  004df28  lwz 7, 112(31)
  004df2c  sldi 5, 5, 5
  004df30  addc 3, 3, 5
  004df34  clrldi 3, 3, 32
  004df38  lwz 5, 28(3)
  004df3c  stw 6, 68(7)
  004df40  lfs 1, 128(4)
  004df44  stw 30, 72(7)
  004df48  stfs 1, 32(7)
  004df4c  lfs 1, 132(4)
  004df50  stfs 1, 36(7)
  004df54  lfs 1, 136(4)
  004df58  lwz 6, 112(31)
  004df5c  stfs 1, 40(7)
  004df60  lfs 1, 140(4)
  004df64  stw 30, 60(7)
  004df68  stfs 1, 44(7)
  004df6c  stw 30, 56(7)
  004df70  stw 30, 52(7)
  004df74  stw 30, 48(7)
  004df78  lfs 1, 44(5)
  004df7c  stw 30, 84(6)
  004df80  stfs 1, 80(6)
  004df84  lfs 2, 48(5)
  004df88  lfs 3, 68(7)
  004df8c  fmuls 1, 1, 1
  004df90  fsubs 2, 2, 3
  004df94  lis 3, 16256
  004df98  lis 4, 15605
  004df9c  ori 4, 4, 49807
  004dfa0  fmadds 1, 2, 2, 1
  004dfa4  stfs 2, 88(6)
  004dfa8  stw 3, 92(6)
  004dfac  lwz 5, 32(5)
  004dfb0  lis 3, 15948
  004dfb4  ori 7, 3, 52429
  004dfb8  fsqrts 1, 1
  004dfbc  ori 3, 31, 0
  004dfc0  stfs 1, 96(6)
  004dfc4  lwz 6, 112(31)
  004dfc8  stw 5, 112(6)
  004dfcc  lwz 5, 112(31)
  004dfd0  stw 30, 164(6)
  004dfd4  stw 30, 148(6)
  004dfd8  stw 30, 152(6)
  004dfdc  stw 30, 156(6)
  004dfe0  stw 30, 160(6)
  004dfe4  stw 4, 16(5)
  004dfe8  stw 7, 20(5)
  004dfec  stw 30, 24(5)
  004dff0  stw 30, 12(5)
  004dff4  stw 30, 8(5)
  004dff8  stw 30, 4(5)
  004dffc  stw 30, 0(5)
  004e000  sth 30, 284(5)
  004e004  bl 0x4dbd0
  004e008  sth 30, 126(31)
  004e00c  ld 0, 144(1)
  004e010  mtlr 0
  004e014  ld 30, 112(1)
  004e018  ld 31, 120(1)
  004e01c  addi 1, 1, 128
  004e020  blr

Cam9_UpdateRot:   # 0x4e058, 0x7c0 bytes
  004e058  stdu 1, -352(1)
  004e05c  mflr 0
  004e060  std 0, 368(1)
  004e064  stfd 27, 312(1)
  004e068  stfd 28, 320(1)
  004e06c  stfd 29, 328(1)
  004e070  stfd 30, 336(1)
  004e074  stfd 31, 344(1)
  004e078  std 25, 256(1)
  004e07c  lis 4, 5
  004e080  std 29, 288(1)
  004e084  std 26, 264(1)
  004e088  lis 25, 150
  004e08c  lwz 29, 112(3)
  004e090  std 28, 280(1)
  004e094  std 24, 248(1)
  004e098  addi 26, 4, -8156
  004e09c  lis 28, 114
  004e0a0  std 30, 296(1)
  004e0a4  lis 24, 114
  004e0a8  lis 30, 149
  004e0ac  std 27, 272(1)
  004e0b0  addic 5, 29, 152
  004e0b4  lfs 30, 0(26)
  004e0b8  std 31, 304(1)
  004e0bc  lwz 27, 19008(25)
  004e0c0  addic 31, 29, 80
  004e0c4  lfs 2, 19008(25)
  004e0c8  addic 30, 30, 5056
  004e0cc  lfs 1, 148(29)
  004e0d0  fmr 5, 30
  004e0d4  lfs 3, -5928(28)
  004e0d8  std 23, 240(1)
  004e0dc  lfs 4, -5924(24)
  004e0e0  bl 0x501e8
  004e0e4  nop
  004e0e8  lis 23, 114
  004e0ec  stfs 1, 148(29)
  004e0f0  li 6, 0
  004e0f4  lis 7, 16256
  004e0f8  ori 3, 31, 0
  004e0fc  addic 5, 1, 112
  004e100  lfs 2, -5920(23)
  004e104  ori 4, 31, 0
  004e108  stw 6, 112(1)
  004e10c  stw 6, 116(1)
  004e110  lfs 29, 4(26)
  004e114  fmuls 1, 1, 2
  004e118  stw 7, 120(1)
  004e11c  stw 6, 124(1)
  004e120  bl 0x1113e0
  004e124  nop
  004e128  addic 3, 25, 19008
  004e12c  lfs 1, 156(29)
  004e130  lfs 3, -5928(28)
  004e134  addic 5, 29, 160
  004e138  lfs 4, -5924(24)
  004e13c  fmr 5, 30
  004e140  lwz 28, 4(3)
  004e144  lfs 2, 4(3)
  004e148  bl 0x501e8
  004e14c  nop
  004e150  stfs 1, 156(29)
  004e154  lfs 31, -5920(23)
  004e158  fmuls 31, 1, 31
  004e15c  lfs 1, 164(29)
  004e160  fmr 2, 31
  004e164  bl 0x502578
  004e168  nop
  004e16c  fabs 2, 1
  004e170  lfs 28, 8(26)
  004e174  fcmpu 0, 2, 28
  004e178  cror 6, 0, 2
  004e17c  bt 6, 0x4e188
  004e180  fmr 31, 30
  004e184  b 0x4e1d0
  004e188  lis 3, 5
  004e18c  addi 3, 3, -8156
  004e190  lfs 3, 12(3)
  004e194  fcmpu 0, 2, 3
  004e198  cror 6, 0, 2
  004e19c  bt 6, 0x4e1cc
  004e1a0  fsubs 1, 28, 2
  004e1a4  lis 3, 5
  004e1a8  addi 3, 3, -8156
  004e1ac  lfs 2, 16(3)
  004e1b0  fabs 3, 1
  004e1b4  lfs 1, 164(29)
  004e1b8  fmuls 2, 3, 2
  004e1bc  fmuls 31, 31, 2
  004e1c0  fmr 2, 31
  004e1c4  bl 0x502578
  004e1c8  nop
  004e1cc  stfs 1, 164(29)
  004e1d0  lfs 2, 116(1)
  004e1d4  li 6, 0
  004e1d8  lfs 3, 88(29)
  004e1dc  ori 3, 31, 0
  004e1e0  lfs 4, 120(1)
  004e1e4  fmr 1, 31
  004e1e8  lfs 5, 84(29)
  004e1ec  addic 5, 1, 128
  004e1f0  lfs 6, 80(29)
  004e1f4  ori 4, 31, 0
  004e1f8  fmuls 7, 4, 5
  004e1fc  lfs 8, 112(1)
  004e200  fmuls 9, 2, 6
  004e204  stw 6, 140(1)
  004e208  fmuls 10, 8, 3
  004e20c  fmsubs 2, 2, 3, 7
  004e210  fmsubs 3, 8, 5, 9
  004e214  fmsubs 4, 4, 6, 10
  004e218  stfs 2, 128(1)
  004e21c  stfs 3, 136(1)
  004e220  stfs 4, 132(1)
  004e224  bl 0x1113e0
  004e228  nop
  004e22c  lis 3, 5
  004e230  lis 4, 15395
  004e234  addi 3, 3, -8156
  004e238  clrlwi 5, 27, 1
  004e23c  ori 4, 4, 55050
  004e240  cmpw 5, 4
  004e244  lfs 31, 20(3)
  004e248  bf 0, 0x4e7d0
  004e24c  lis 3, 15395
  004e250  clrlwi 4, 28, 1
  004e254  ori 3, 3, 55050
  004e258  cmpw 4, 3
  004e25c  bf 0, 0x4e7d0
  004e260  lwz 4, 80(29)
  004e264  lis 3, 149
  004e268  lwz 7, 84(29)
  004e26c  lfs 1, 80(29)
  004e270  lfs 2, 84(29)
  004e274  addic 3, 3, 6592
  004e278  fabs 5, 1
  004e27c  fabs 7, 2
  004e280  rlwinm 7, 7, 3, 29, 29
  004e284  lwz 3, 112(3)
  004e288  lwz 5, 80(3)
  004e28c  lwz 6, 84(3)
  004e290  fsubs 3, 5, 7
  004e294  lfs 1, 80(3)
  004e298  lfs 2, 84(3)
  004e29c  lfs 27, 88(3)
  004e2a0  lis 3, 115
  004e2a4  addic 3, 3, 22784
  004e2a8  stfs 3, 164(1)
  004e2ac  lwz 8, 164(1)
  004e2b0  lfs 3, 164(1)
  004e2b4  rlwimi 7, 8, 2, 30, 30
  004e2b8  fsub 6, 3, 30
  004e2bc  fsub 8, 3, 30
  004e2c0  rlwimi 7, 4, 4, 28, 28
  004e2c4  ori 4, 3, 0
  004e2c8  rlwimi 4, 7, 2, 26, 28
  004e2cc  slwi 7, 7, 2
  004e2d0  clrldi 4, 4, 32
  004e2d4  fsel 6, 6, 5, 7
  004e2d8  lfsx 3, 3, 7
  004e2dc  fsel 5, 8, 7, 5
  004e2e0  lfs 4, 4(4)
  004e2e4  fcmpu 0, 6, 30
  004e2e8  bt 1, 0x4e2f4
  004e2ec  fmr 3, 30
  004e2f0  b 0x4e40c
  004e2f4  fsubs 7, 5, 6
  004e2f8  fadds 5, 5, 6
  004e2fc  addic 4, 1, 16
  004e300  li 10, 2
  004e304  addic 8, 4, 200
  004e308  addic 7, 4, 184
  004e30c  mtctr 10
  004e310  fdivs 5, 7, 5
  004e314  fmuls 6, 5, 5
  004e318  stfs 5, 212(1)
  004e31c  stfs 5, 204(1)
  004e320  stfs 5, 208(1)
  004e324  stfs 5, 200(1)
  004e328  lfs 8, 212(1)
  004e32c  lfs 9, 204(1)
  004e330  lfs 10, 208(1)
  004e334  fmuls 7, 6, 6
  004e338  fmuls 9, 9, 6
  004e33c  fmuls 8, 8, 7
  004e340  fmuls 5, 7, 7
  004e344  fmuls 7, 10, 7
  004e348  stfs 9, 204(1)
  004e34c  fmuls 6, 8, 6
  004e350  stfs 7, 208(1)
  004e354  stfs 6, 212(1)
  004e358  lfs 6, 184(4)
  004e35c  fmuls 6, 6, 5
  004e360  stfs 6, 200(4)
  004e364  lfs 6, 4(7)
  004e368  addic 7, 7, 8
  004e36c  fmuls 6, 6, 5
  004e370  addic 4, 4, 8
  004e374  stfs 6, 4(8)
  004e378  addic 8, 8, 8
  004e37c  bdnz 0x4e358
  004e380  li 8, 4
  004e384  ori 4, 1, 0
  004e388  mtctr 8
  004e38c  lis 7, 115
  004e390  addic 8, 4, 200
  004e394  addic 7, 7, 22752
  004e398  ori 9, 8, 0
  004e39c  lfs 5, 200(4)
  004e3a0  lfs 6, 0(7)
  004e3a4  fmuls 5, 5, 6
  004e3a8  lfs 6, 4(7)
  004e3ac  addic 7, 7, 8
  004e3b0  stfs 5, 200(4)
  004e3b4  lfs 5, 4(8)
  004e3b8  addic 4, 4, 8
  004e3bc  fmuls 5, 5, 6
  004e3c0  stfs 5, 4(8)
  004e3c4  addic 8, 8, 8
  004e3c8  bdnz 0x4e39c
  004e3cc  ori 4, 1, 0
  004e3d0  fmr 5, 30
  004e3d4  mtctr 10
  004e3d8  lfs 6, 200(4)
  004e3dc  fadds 5, 5, 6
  004e3e0  lfs 6, 4(9)
  004e3e4  addic 4, 4, 16
  004e3e8  lfs 7, 8(9)
  004e3ec  lfs 8, 12(9)
  004e3f0  addic 9, 9, 16
  004e3f4  fadds 5, 5, 6
  004e3f8  fadds 5, 5, 7
  004e3fc  fadds 5, 5, 8
  004e400  bdnz 0x4e3d8
  004e404  fadds 5, 5, 28
  004e408  fmadds 3, 5, 3, 4
  004e40c  fabs 4, 1
  004e410  fabs 2, 2
  004e414  rlwinm 4, 6, 3, 29, 29
  004e418  fsubs 1, 4, 2
  004e41c  stfs 1, 160(1)
  004e420  lwz 6, 160(1)
  004e424  lfs 1, 160(1)
  004e428  rlwimi 4, 6, 2, 30, 30
  004e42c  fsub 5, 1, 30
  004e430  fsub 6, 1, 30
  004e434  rlwimi 4, 5, 4, 28, 28
  004e438  ori 5, 3, 0
  004e43c  rlwimi 5, 4, 2, 26, 28
  004e440  slwi 4, 4, 2
  004e444  clrldi 5, 5, 32
  004e448  fsel 5, 5, 4, 2
  004e44c  lfsx 1, 3, 4
  004e450  fsel 4, 6, 2, 4
  004e454  lfs 2, 4(5)
  004e458  fcmpu 0, 5, 30
  004e45c  bt 1, 0x4e468
  004e460  fmr 1, 30
  004e464  b 0x4e580
  004e468  fsubs 6, 4, 5
  004e46c  fadds 4, 4, 5
  004e470  addic 3, 1, 16
  004e474  li 7, 2
  004e478  addic 4, 3, 152
  004e47c  addic 5, 3, 168
  004e480  mtctr 7
  004e484  fdivs 4, 6, 4
  004e488  fmuls 5, 4, 4
  004e48c  stfs 4, 180(1)
  004e490  stfs 4, 172(1)
  004e494  stfs 4, 176(1)
  004e498  stfs 4, 168(1)
  004e49c  lfs 7, 180(1)
  004e4a0  lfs 8, 172(1)
  004e4a4  lfs 9, 176(1)
  004e4a8  fmuls 6, 5, 5
  004e4ac  fmuls 8, 8, 5
  004e4b0  fmuls 7, 7, 6
  004e4b4  fmuls 4, 6, 6
  004e4b8  fmuls 6, 9, 6
  004e4bc  stfs 8, 172(1)
  004e4c0  fmuls 5, 7, 5
  004e4c4  stfs 6, 176(1)
  004e4c8  stfs 5, 180(1)
  004e4cc  lfs 5, 152(3)
  004e4d0  fmuls 5, 5, 4
  004e4d4  stfs 5, 168(3)
  004e4d8  lfs 5, 4(4)
  004e4dc  addic 3, 3, 8
  004e4e0  addic 4, 4, 8
  004e4e4  fmuls 5, 5, 4
  004e4e8  stfs 5, 4(5)
  004e4ec  addic 5, 5, 8
  004e4f0  bdnz 0x4e4cc
  004e4f4  li 5, 4
  004e4f8  ori 3, 1, 0
  004e4fc  mtctr 5
  004e500  lis 4, 115
  004e504  addic 5, 3, 168
  004e508  addic 4, 4, 22752
  004e50c  ori 6, 5, 0
  004e510  lfs 4, 168(3)
  004e514  lfs 5, 0(4)
  004e518  fmuls 4, 4, 5
  004e51c  lfs 5, 4(4)
  004e520  addic 4, 4, 8
  004e524  stfs 4, 168(3)
  004e528  lfs 4, 4(5)
  004e52c  addic 3, 3, 8
  004e530  fmuls 4, 4, 5
  004e534  stfs 4, 4(5)
  004e538  addic 5, 5, 8
  004e53c  bdnz 0x4e510
  004e540  fmr 4, 30
  004e544  ori 3, 1, 0
  004e548  mtctr 7
  004e54c  lfs 5, 168(3)
  004e550  fadds 4, 4, 5
  004e554  addic 3, 3, 16
  004e558  lfs 5, 4(6)
  004e55c  lfs 6, 8(6)
  004e560  lfs 7, 12(6)
  004e564  addic 6, 6, 16
  004e568  fadds 4, 4, 5
  004e56c  fadds 4, 4, 6
  004e570  fadds 4, 4, 7
  004e574  bdnz 0x4e54c
  004e578  fadds 4, 4, 28
  004e57c  fmadds 1, 4, 1, 2
  004e580  fmr 2, 3
  004e584  bl 0x5025e0
  004e588  nop
  004e58c  fcmpu 0, 1, 31
  004e590  cror 6, 0, 2
  004e594  bt 6, 0x4e5a0
  004e598  fmr 1, 31
  004e59c  b 0x4e5bc
  004e5a0  lis 3, 5
  004e5a4  addi 3, 3, -8156
  004e5a8  lfs 2, 24(3)
  004e5ac  fcmpu 0, 1, 2
  004e5b0  cror 6, 1, 2
  004e5b4  bt 6, 0x4e5bc
  004e5b8  fmr 1, 2
  004e5bc  li 6, 0
  004e5c0  lis 7, 16256
  004e5c4  addic 5, 1, 144
  004e5c8  ori 3, 31, 0
  004e5cc  stw 6, 144(1)
  004e5d0  stw 6, 148(1)
  004e5d4  ori 4, 31, 0
  004e5d8  stw 7, 152(1)
  004e5dc  stw 6, 156(1)
  004e5e0  bl 0x1113e0
  004e5e4  nop
  004e5e8  lfs 1, 88(29)
  004e5ec  lis 3, 5
  004e5f0  lfs 6, 84(29)
  004e5f4  fsubs 2, 27, 1
  004e5f8  fmuls 3, 6, 6
  004e5fc  addi 3, 3, -8156
  004e600  lfs 27, 80(29)
  004e604  lfs 4, 28(3)
  004e608  fmadds 2, 2, 4, 1
  004e60c  fmadds 3, 27, 27, 3
  004e610  lfs 10, 32(3)
  004e614  lfs 5, 96(29)
  004e618  fmadds 1, 2, 2, 3
  004e61c  lfs 7, 452(30)
  004e620  lfs 8, 448(30)
  004e624  lfs 9, 456(30)
  004e628  fsqrts 1, 1
  004e62c  fmr 3, 30
  004e630  fsub 11, 30, 1
  004e634  fsub 12, 1, 30
  004e638  fsel 10, 11, 10, 1
  004e63c  fsel 1, 12, 10, 1
  004e640  fsubs 5, 5, 1
  004e644  fmadds 4, 5, 4, 1
  004e648  fdivs 10, 4, 1
  004e64c  fmr 4, 3
  004e650  fmr 5, 4
  004e654  fmuls 1, 6, 10
  004e658  fmuls 27, 27, 10
  004e65c  fmuls 2, 2, 10
  004e660  fmuls 6, 1, 7
  004e664  stfs 27, 80(29)
  004e668  stfs 1, 84(29)
  004e66c  fmadds 6, 27, 8, 6
  004e670  stfs 2, 88(29)
  004e674  fmadds 10, 2, 9, 6
  004e678  fnmsubs 7, 7, 10, 1
  004e67c  fnmsubs 6, 8, 10, 27
  004e680  fnmsubs 8, 9, 10, 2
  004e684  fmuls 9, 7, 7
  004e688  fmadds 9, 6, 6, 9
  004e68c  fmadds 9, 8, 8, 9
  004e690  fsqrts 10, 9
  004e694  fcmpu 0, 10, 5
  004e698  bt 2, 0x4e6e8
  004e69c  frsqrte 3, 9
  004e6a0  lis 3, 5
  004e6a4  addi 3, 3, -8156
  004e6a8  lfs 4, 36(3)
  004e6ac  fmuls 5, 9, 3
  004e6b0  fmuls 10, 4, 3
  004e6b4  fnmsubs 5, 5, 3, 29
  004e6b8  fmadds 3, 5, 10, 3
  004e6bc  fmuls 5, 9, 3
  004e6c0  fmuls 10, 4, 3
  004e6c4  fnmsubs 5, 5, 3, 29
  004e6c8  fmadds 3, 5, 10, 3
  004e6cc  fmuls 5, 9, 3
  004e6d0  fmuls 4, 4, 3
  004e6d4  fnmsubs 5, 5, 3, 29
  004e6d8  fmadds 5, 5, 4, 3
  004e6dc  fmuls 3, 6, 5
  004e6e0  fmuls 4, 7, 5
  004e6e4  fmuls 5, 8, 5
  004e6e8  fmuls 6, 1, 1
  004e6ec  fmr 7, 30
  004e6f0  fmadds 6, 27, 27, 6
  004e6f4  fmr 8, 7
  004e6f8  fmadds 6, 2, 2, 6
  004e6fc  fmr 9, 8
  004e700  fsqrts 10, 6
  004e704  fcmpu 0, 10, 9
  004e708  bt 2, 0x4e758
  004e70c  frsqrte 7, 6
  004e710  lis 3, 5
  004e714  addi 3, 3, -8156
  004e718  lfs 8, 36(3)
  004e71c  fmuls 9, 6, 7
  004e720  fmuls 10, 8, 7
  004e724  fnmsubs 9, 9, 7, 29
  004e728  fmadds 7, 9, 10, 7
  004e72c  fmuls 9, 6, 7
  004e730  fmuls 10, 8, 7
  004e734  fnmsubs 9, 9, 7, 29
  004e738  fmadds 7, 9, 10, 7
  004e73c  fmuls 6, 6, 7
  004e740  fmuls 8, 8, 7
  004e744  fnmsubs 6, 6, 7, 29
  004e748  fmadds 9, 6, 8, 7
  004e74c  fmuls 7, 27, 9
  004e750  fmuls 8, 1, 9
  004e754  fmuls 9, 2, 9
  004e758  fmuls 1, 4, 8
  004e75c  lis 3, 115
  004e760  addic 4, 3, 22720
  004e764  lfs 6, 22720(3)
  004e768  fmadds 1, 3, 7, 1
  004e76c  lis 3, 5
  004e770  lfs 7, 4(4)
  004e774  addi 3, 3, -8156
  004e778  fmadds 1, 5, 9, 1
  004e77c  fabs 2, 1
  004e780  fsub 3, 1, 30
  004e784  fsel 2, 3, 1, 2
  004e788  fsub 1, 1, 30
  004e78c  fsubs 3, 29, 2
  004e790  fmuls 4, 2, 2
  004e794  fsub 5, 3, 30
  004e798  fsel 3, 5, 3, 30
  004e79c  fmadds 5, 2, 7, 6
  004e7a0  lfs 6, 8(4)
  004e7a4  fmuls 2, 4, 2
  004e7a8  fsqrts 3, 3
  004e7ac  fmadds 4, 4, 6, 5
  004e7b0  lfs 5, 40(3)
  004e7b4  lfs 8, 12(4)
  004e7b8  lfs 6, 44(3)
  004e7bc  fsel 1, 1, 29, 5
  004e7c0  fmadds 2, 2, 8, 4
  004e7c4  fnmsubs 2, 2, 3, 6
  004e7c8  fmsubs 1, 2, 1, 6
  004e7cc  stfs 1, 164(29)
  004e7d0  ld 0, 368(1)
  004e7d4  mtlr 0
  004e7d8  lfd 27, 312(1)
  004e7dc  lfd 28, 320(1)
  004e7e0  lfd 29, 328(1)
  004e7e4  lfd 30, 336(1)
  004e7e8  lfd 31, 344(1)
  004e7ec  ld 23, 240(1)
  004e7f0  ld 24, 248(1)
  004e7f4  ld 25, 256(1)
  004e7f8  ld 26, 264(1)
  004e7fc  ld 27, 272(1)
  004e800  ld 28, 280(1)
  004e804  ld 29, 288(1)
  004e808  ld 30, 296(1)
  004e80c  ld 31, 304(1)
  004e810  addi 1, 1, 352
  004e814  blr

Cam9_UpdatePos:   # 0x4e828, 0x2f8 bytes
  004e828  stdu 1, -208(1)
  004e82c  mflr 0
  004e830  std 0, 224(1)
  004e834  stfd 26, 160(1)
  004e838  stfd 27, 168(1)
  004e83c  stfd 28, 176(1)
  004e840  stfd 29, 184(1)
  004e844  stfd 30, 192(1)
  004e848  stfd 31, 200(1)
  004e84c  std 31, 152(1)
  004e850  ori 31, 3, 0
  004e854  lis 5, 5
  004e858  std 29, 136(1)
  004e85c  std 28, 128(1)
  004e860  lis 6, 149
  004e864  addi 29, 5, -6120
  004e868  std 30, 144(1)
  004e86c  addic 28, 6, 5056
  004e870  lwz 30, 112(31)
  004e874  addic 4, 1, 112
  004e878  li 5, 1
  004e87c  li 6, 0
  004e880  bl 0x4d7e8
  004e884  lfs 1, 48(31)
  004e888  ori 5, 30, 0
  004e88c  lfs 2, 112(1)
  004e890  lfs 3, 16(30)
  004e894  lfs 4, 20(30)
  004e898  lfs 5, 24(30)
  004e89c  bl 0x501e8
  004e8a0  nop
  004e8a4  stfs 1, 48(31)
  004e8a8  addic 5, 30, 4
  004e8ac  lfs 1, 52(31)
  004e8b0  lfs 2, 116(1)
  004e8b4  lfs 3, 16(30)
  004e8b8  lfs 4, 20(30)
  004e8bc  lfs 5, 24(30)
  004e8c0  bl 0x501e8
  004e8c4  nop
  004e8c8  stfs 1, 52(31)
  004e8cc  lfs 1, 56(31)
  004e8d0  addic 5, 30, 8
  004e8d4  lfs 2, 120(1)
  004e8d8  lfs 3, 16(30)
  004e8dc  lfs 4, 20(30)
  004e8e0  lfs 5, 24(30)
  004e8e4  bl 0x501e8
  004e8e8  nop
  004e8ec  stfs 1, 56(31)
  004e8f0  lfs 6, 452(28)
  004e8f4  lfs 7, 448(28)
  004e8f8  fmuls 2, 6, 6
  004e8fc  lfs 5, 456(28)
  004e900  lfs 8, 68(30)
  004e904  lfs 4, 0(29)
  004e908  fmadds 2, 7, 7, 2
  004e90c  lfs 9, 36(30)
  004e910  lfs 10, 32(30)
  004e914  lfs 11, 52(31)
  004e918  fmadds 2, 5, 5, 2
  004e91c  lfs 12, 40(30)
  004e920  lfs 13, 48(31)
  004e924  fsqrts 2, 2
  004e928  lfs 3, 460(28)
  004e92c  fdivs 8, 8, 2
  004e930  fsub 0, 4, 2
  004e934  fsub 29, 4, 2
  004e938  fsub 31, 2, 4
  004e93c  fsub 30, 4, 2
  004e940  fsub 28, 2, 4
  004e944  fsub 2, 2, 4
  004e948  fmuls 27, 6, 8
  004e94c  fmuls 26, 7, 8
  004e950  fmuls 8, 5, 8
  004e954  fsel 0, 0, 4, 27
  004e958  fsel 30, 30, 4, 26
  004e95c  fsel 29, 29, 4, 8
  004e960  fsel 0, 31, 0, 27
  004e964  fsel 31, 28, 30, 26
  004e968  fsel 2, 2, 29, 8
  004e96c  fadds 8, 0, 9
  004e970  fadds 9, 31, 10
  004e974  fadds 2, 2, 12
  004e978  fsubs 8, 8, 11
  004e97c  fsubs 9, 9, 13
  004e980  fsubs 2, 2, 1
  004e984  fmuls 1, 8, 8
  004e988  fmadds 1, 9, 9, 1
  004e98c  fmadds 1, 2, 2, 1
  004e990  fsqrts 10, 1
  004e994  fcmpu 0, 10, 4
  004e998  bf 2, 0x4e9bc
  004e99c  stfs 3, 12(31)
  004e9a0  fmr 3, 4
  004e9a4  stfs 2, 8(31)
  004e9a8  stfs 9, 0(31)
  004e9ac  stfs 8, 4(31)
  004e9b0  fmr 2, 3
  004e9b4  fmr 1, 2
  004e9b8  b 0x4ea14
  004e9bc  frsqrte 10, 1
  004e9c0  lis 3, 5
  004e9c4  fmr 31, 2
  004e9c8  addi 3, 3, -6120
  004e9cc  lfs 11, 4(3)
  004e9d0  lfs 12, 8(3)
  004e9d4  stfs 3, 12(31)
  004e9d8  fmuls 13, 1, 10
  004e9dc  fmuls 0, 11, 10
  004e9e0  fnmsubs 13, 13, 10, 12
  004e9e4  fmadds 2, 13, 0, 10
  004e9e8  fmuls 10, 1, 2
  004e9ec  fmuls 13, 11, 2
  004e9f0  fnmsubs 3, 10, 2, 12
  004e9f4  fmadds 2, 3, 13, 2
  004e9f8  fmuls 1, 1, 2
  004e9fc  fmuls 3, 11, 2
  004ea00  fnmsubs 1, 1, 2, 12
  004ea04  fmadds 3, 1, 3, 2
  004ea08  fmuls 1, 9, 3
  004ea0c  fmuls 2, 8, 3
  004ea10  fmuls 3, 31, 3
  004ea14  fmuls 8, 7, 3
  004ea18  fmuls 9, 5, 2
  004ea1c  fmuls 10, 6, 1
  004ea20  li 3, 0
  004ea24  stfs 1, 0(31)
  004ea28  stfs 2, 4(31)
  004ea2c  stfs 3, 8(31)
  004ea30  fmsubs 8, 5, 1, 8
  004ea34  fmsubs 9, 6, 3, 9
  004ea38  fmsubs 7, 7, 2, 10
  004ea3c  fmr 6, 4
  004ea40  stw 3, 28(31)
  004ea44  fmuls 5, 8, 8
  004ea48  fmadds 10, 9, 9, 5
  004ea4c  fmr 5, 6
  004ea50  fmadds 10, 7, 7, 10
  004ea54  fsqrts 11, 10
  004ea58  fcmpu 0, 11, 4
  004ea5c  bt 2, 0x4eab0
  004ea60  frsqrte 4, 10
  004ea64  lis 3, 5
  004ea68  addi 3, 3, -6120
  004ea6c  lfs 5, 4(3)
  004ea70  lfs 6, 8(3)
  004ea74  fmuls 11, 10, 4
  004ea78  fmuls 12, 5, 4
  004ea7c  fnmsubs 11, 11, 4, 6
  004ea80  fmadds 4, 11, 12, 4
  004ea84  fmuls 11, 10, 4
  004ea88  fmuls 12, 5, 4
  004ea8c  fnmsubs 11, 11, 4, 6
  004ea90  fmadds 4, 11, 12, 4
  004ea94  fmuls 10, 10, 4
  004ea98  fmuls 5, 5, 4
  004ea9c  fnmsubs 6, 10, 4, 6
  004eaa0  fmadds 6, 6, 5, 4
  004eaa4  fmuls 4, 9, 6
  004eaa8  fmuls 5, 8, 6
  004eaac  fmuls 6, 7, 6
  004eab0  fmuls 7, 3, 5
  004eab4  fmuls 8, 1, 6
  004eab8  li 3, 0
  004eabc  fmuls 9, 2, 4
  004eac0  stfs 4, 16(31)
  004eac4  stfs 5, 20(31)
  004eac8  stfs 6, 24(31)
  004eacc  stw 3, 44(31)
  004ead0  fmsubs 2, 2, 6, 7
  004ead4  fmsubs 3, 3, 4, 8
  004ead8  fmsubs 1, 1, 5, 9
  004eadc  stfs 2, 32(31)
  004eae0  stfs 3, 36(31)
  004eae4  stfs 1, 40(31)
  004eae8  ld 0, 224(1)
  004eaec  mtlr 0
  004eaf0  lfd 26, 160(1)
  004eaf4  lfd 27, 168(1)
  004eaf8  lfd 28, 176(1)
  004eafc  lfd 29, 184(1)
  004eb00  lfd 30, 192(1)
  004eb04  lfd 31, 200(1)
  004eb08  ld 28, 128(1)
  004eb0c  ld 29, 136(1)
  004eb10  ld 30, 144(1)
  004eb14  ld 31, 152(1)
  004eb18  addi 1, 1, 208
  004eb1c  blr

???_Cam9_CollSphereBump:   # 0x4eb28, 0x34 bytes
  004eb28  stdu 1, -112(1)
  004eb2c  mflr 0
  004eb30  std 0, 128(1)
  004eb34  lis 4, 5
  004eb38  addic 3, 3, 48
  004eb3c  addi 4, 4, -5344
  004eb40  lfs 1, 0(4)
  004eb44  bl 0x543c8
  004eb48  nop
  004eb4c  ld 0, 128(1)
  004eb50  mtlr 0
  004eb54  addi 1, 1, 112
  004eb58  blr

ActivateCamera_9:   # 0x4eb78, 0x2a4 bytes
  004eb78  stdu 1, -176(1)
  004eb7c  mflr 0
  004eb80  std 0, 192(1)
  004eb84  std 31, 168(1)
  004eb88  ori 31, 3, 0
  004eb8c  lis 3, 149
  004eb90  lis 5, 164
  004eb94  lhz 6, 132(31)
  004eb98  lwz 3, 16468(3)
  004eb9c  extsh 6, 6
  004eba0  lwz 5, -28512(5)
  004eba4  lbz 7, 124(31)
  004eba8  sldi 6, 6, 5
  004ebac  addc 3, 3, 6
  004ebb0  li 6, 0
  004ebb4  clrldi 3, 3, 32
  004ebb8  lwz 3, 28(3)
  004ebbc  lbz 4, 124(4)
  004ebc0  cmpw 7, 4
  004ebc4  lwz 4, 36(3)
  004ebc8  stb 6, 136(31)
  004ebcc  std 29, 152(1)
  004ebd0  slwi 4, 4, 8
  004ebd4  addc 29, 5, 4
  004ebd8  std 30, 160(1)
  004ebdc  clrldi 29, 29, 32
  004ebe0  bf 1, 0x4edfc
  004ebe4  lbz 4, 32(29)
  004ebe8  cmpwi 4, 128
  004ebec  bf 0, 0x4edfc
  004ebf0  lis 30, 151
  004ebf4  lfs 1, 24(29)
  004ebf8  lis 4, 5
  004ebfc  addic 30, 30, -25376
  004ec00  addi 4, 4, -5284
  004ec04  lfs 2, 136(30)
  004ec08  fsubs 1, 2, 1
  004ec0c  lfs 2, 0(4)
  004ec10  fabs 1, 1
  004ec14  fcmpu 0, 1, 2
  004ec18  cror 6, 1, 2
  004ec1c  bt 6, 0x4edfc
  004ec20  lwz 3, 20(3)
  004ec24  lis 4, 165
  004ec28  slwi 3, 3, 2
  004ec2c  addic 4, 4, 7136
  004ec30  extsw 6, 3
  004ec34  addic 5, 30, 128
  004ec38  ori 3, 5, 0
  004ec3c  lwzx 5, 4, 6
  004ec40  addic 4, 5, 16
  004ec44  lwz 5, 0(5)
  004ec48  extsw 5, 5
  004ec4c  bl 0x104e44
  004ec50  nop
  004ec54  cmpwi 3, 0
  004ec58  bt 2, 0x4edfc
  004ec5c  lfs 6, 132(30)
  004ec60  lfs 1, 20(29)
  004ec64  lfs 3, 128(30)
  004ec68  fsubs 6, 6, 1
  004ec6c  lfs 7, 16(29)
  004ec70  fsubs 7, 3, 7
  004ec74  lis 3, 5
  004ec78  addi 3, 3, -5284
  004ec7c  fmuls 5, 6, 6
  004ec80  lfs 4, 4(3)
  004ec84  fmr 2, 4
  004ec88  fmadds 5, 7, 7, 5
  004ec8c  fmr 1, 2
  004ec90  fsqrts 8, 5
  004ec94  fcmpu 0, 8, 1
  004ec98  bt 2, 0x4ece8
  004ec9c  frsqrte 1, 5
  004eca0  lis 3, 5
  004eca4  addi 3, 3, -5284
  004eca8  lfs 2, 8(3)
  004ecac  lfs 8, 12(3)
  004ecb0  fmuls 9, 5, 1
  004ecb4  fmuls 10, 2, 1
  004ecb8  fnmsubs 9, 9, 1, 8
  004ecbc  fmadds 1, 9, 10, 1
  004ecc0  fmuls 9, 5, 1
  004ecc4  fmuls 10, 2, 1
  004ecc8  fnmsubs 9, 9, 1, 8
  004eccc  fmadds 1, 9, 10, 1
  004ecd0  fmuls 5, 5, 1
  004ecd4  fmuls 2, 2, 1
  004ecd8  fnmsubs 5, 5, 1, 8
  004ecdc  fmadds 2, 5, 2, 1
  004ece0  fmuls 1, 7, 2
  004ece4  fmuls 2, 6, 2
  004ece8  fmuls 5, 2, 2
  004ecec  fmr 6, 4
  004ecf0  fneg 5, 5
  004ecf4  fneg 7, 5
  004ecf8  fmr 5, 6
  004ecfc  fmadds 7, 1, 1, 7
  004ed00  fsqrts 8, 7
  004ed04  fcmpu 0, 8, 5
  004ed08  bt 2, 0x4ed5c
  004ed0c  frsqrte 5, 7
  004ed10  lis 3, 5
  004ed14  addi 3, 3, -5284
  004ed18  lfs 6, 8(3)
  004ed1c  lfs 8, 12(3)
  004ed20  fmuls 9, 7, 5
  004ed24  fmuls 10, 6, 5
  004ed28  fnmsubs 9, 9, 5, 8
  004ed2c  fmadds 5, 9, 10, 5
  004ed30  fmuls 9, 7, 5
  004ed34  fmuls 10, 6, 5
  004ed38  fnmsubs 9, 9, 5, 8
  004ed3c  fmadds 5, 9, 10, 5
  004ed40  fmuls 7, 7, 5
  004ed44  fmuls 6, 6, 5
  004ed48  fnmsubs 7, 7, 5, 8
  004ed4c  fmadds 6, 7, 6, 5
  004ed50  fmuls 5, 2, 6
  004ed54  fmuls 6, 1, 6
  004ed58  fneg 5, 5
  004ed5c  lis 3, 5
  004ed60  lfs 7, 132(30)
  004ed64  stfs 3, 112(1)
  004ed68  fmuls 5, 2, 5
  004ed6c  addi 4, 3, -5284
  004ed70  lfs 8, 136(30)
  004ed74  stfs 7, 116(1)
  004ed78  lfs 9, 140(30)
  004ed7c  stfs 8, 120(1)
  004ed80  stfs 9, 124(1)
  004ed84  lfs 10, 16(4)
  004ed88  lis 5, 149
  004ed8c  fadds 8, 8, 10
  004ed90  addic 3, 1, 112
  004ed94  li 6, 0
  004ed98  fmsubs 5, 1, 6, 5
  004ed9c  li 7, 0
  004eda0  stfs 8, 120(1)
  004eda4  lfs 6, 20(4)
  004eda8  fmadds 5, 5, 10, 8
  004edac  lfs 11, 24(4)
  004edb0  fmadds 1, 1, 6, 3
  004edb4  fmadds 2, 2, 6, 11
  004edb8  stfs 9, 140(1)
  004edbc  lwz 5, 16516(5)
  004edc0  addic 4, 1, 128
  004edc4  extsw 5, 5
  004edc8  fmadds 1, 4, 10, 1
  004edcc  fadds 2, 7, 2
  004edd0  stfs 5, 136(1)
  004edd4  stfs 1, 128(1)
  004edd8  stfs 2, 132(1)
  004eddc  bl 0x57820
  004ede0  nop
  004ede4  cmpwi 3, 0
  004ede8  bf 2, 0x4edfc
  004edec  lis 4, 17008
  004edf0  li 3, 1
  004edf4  stw 4, 120(31)
  004edf8  b 0x4ee00
  004edfc  li 3, 0
  004ee00  ld 0, 192(1)
  004ee04  mtlr 0
  004ee08  ld 29, 152(1)
  004ee0c  ld 30, 160(1)
  004ee10  ld 31, 168(1)
  004ee14  addi 1, 1, 176
  004ee18  blr

UpdateCamera_9:   # 0x4ee20, 0xdc bytes
  004ee20  stdu 1, -128(1)
  004ee24  mflr 0
  004ee28  std 0, 144(1)
  004ee2c  std 31, 120(1)
  004ee30  ori 31, 3, 0
  004ee34  lwz 4, 112(31)
  004ee38  addic 4, 4, 176
  004ee3c  bl 0x2bcf8
  004ee40  nop
  004ee44  ori 3, 31, 0
  004ee48  bl 0x4e058
  004ee4c  ori 3, 31, 0
  004ee50  bl 0x4d608
  004ee54  lis 3, 149
  004ee58  lhz 4, 132(31)
  004ee5c  lwz 5, 112(31)
  004ee60  extsh 4, 4
  004ee64  sldi 4, 4, 5
  004ee68  lwz 3, 16468(3)
  004ee6c  addc 3, 3, 4
  004ee70  lwz 4, 112(5)
  004ee74  clrldi 3, 3, 32
  004ee78  cmpwi 4, 0
  004ee7c  lwz 4, 28(3)
  004ee80  bf 2, 0x4eea8
  004ee84  lis 4, 5
  004ee88  lfs 1, 0(3)
  004ee8c  addi 4, 4, -4580
  004ee90  stfs 1, 128(5)
  004ee94  lfs 1, 4(3)
  004ee98  stfs 1, 132(5)
  004ee9c  lfs 1, 8(3)
  004eea0  lfs 2, 0(4)
  004eea4  b 0x4eed8
  004eea8  lis 3, 164
  004eeac  lwz 4, 36(4)
  004eeb0  slwi 4, 4, 8
  004eeb4  lwz 3, -28512(3)
  004eeb8  addc 3, 3, 4
  004eebc  clrldi 3, 3, 32
  004eec0  lfs 1, 16(3)
  004eec4  stfs 1, 128(5)
  004eec8  lfs 1, 20(3)
  004eecc  stfs 1, 132(5)
  004eed0  lfs 1, 24(3)
  004eed4  lfs 2, 28(3)
  004eed8  stfs 1, 136(5)
  004eedc  ori 3, 31, 0
  004eee0  stfs 2, 140(5)
  004eee4  bl 0x4e828
  004eee8  ld 0, 144(1)
  004eeec  mtlr 0
  004eef0  ld 31, 120(1)
  004eef4  addi 1, 1, 128
  004eef8  blr

ExitCamera_9:   # 0x4ef00, 0xe4 bytes
  004ef00  stdu 1, -128(1)
  004ef04  mflr 0
  004ef08  std 0, 144(1)
  004ef0c  std 31, 120(1)
  004ef10  ori 31, 3, 0
  004ef14  lis 3, 149
  004ef18  lis 4, 164
  004ef1c  lhz 5, 132(31)
  004ef20  lwz 3, 16468(3)
  004ef24  extsh 5, 5
  004ef28  lwz 4, -28512(4)
  004ef2c  sldi 5, 5, 5
  004ef30  addc 3, 3, 5
  004ef34  lis 5, 165
  004ef38  clrldi 3, 3, 32
  004ef3c  addic 5, 5, 7136
  004ef40  lwz 6, 28(3)
  004ef44  lis 3, 151
  004ef48  addic 3, 3, -25248
  004ef4c  lwz 7, 20(6)
  004ef50  lwz 6, 36(6)
  004ef54  slwi 7, 7, 2
  004ef58  slwi 6, 6, 8
  004ef5c  std 30, 112(1)
  004ef60  extsw 7, 7
  004ef64  addc 30, 4, 6
  004ef68  clrldi 30, 30, 32
  004ef6c  lwzx 5, 5, 7
  004ef70  addic 4, 5, 16
  004ef74  lwz 5, 0(5)
  004ef78  extsw 5, 5
  004ef7c  bl 0x104e44
  004ef80  nop
  004ef84  cmpwi 3, 0
  004ef88  bt 2, 0x4efc4
  004ef8c  lis 3, 151
  004ef90  lfs 1, 24(30)
  004ef94  lis 4, 5
  004ef98  addic 3, 3, -25376
  004ef9c  addi 4, 4, -4356
  004efa0  lfs 2, 136(3)
  004efa4  fsubs 1, 2, 1
  004efa8  lfs 2, 0(4)
  004efac  fabs 1, 1
  004efb0  fcmpu 0, 1, 2
  004efb4  bt 1, 0x4efc4
  004efb8  lbz 3, 32(30)
  004efbc  cmpwi 3, 128
  004efc0  bt 0, 0x4efcc
  004efc4  li 3, 3
  004efc8  sth 3, 126(31)
  004efcc  ld 0, 144(1)
  004efd0  mtlr 0
  004efd4  ld 30, 112(1)
  004efd8  ld 31, 120(1)
  004efdc  addi 1, 1, 128
  004efe0  blr
