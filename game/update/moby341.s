# game/update/moby341.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M341_0034d71c:   # 0x34d71c, 0x58 bytes
  034d71c  stdu 1, -128(1)
  034d720  mflr 0
  034d724  std 0, 144(1)
  034d728  std 31, 120(1)
  034d72c  ori 31, 3, 0
  034d730  bl 0x48a718
  034d734  nop
  034d738  cmpwi 3, 0
  034d73c  bt 2, 0x34d74c
  034d740  li 4, 9
  034d744  stb 4, 32(31)
  034d748  b 0x34d760
  034d74c  lbz 4, 32(31)
  034d750  cmpwi 4, 9
  034d754  bf 2, 0x34d760
  034d758  li 4, 1
  034d75c  stb 4, 32(31)
  034d760  ld 0, 144(1)
  034d764  mtlr 0
  034d768  ld 31, 120(1)
  034d76c  addi 1, 1, 128
  034d770  blr

M341_0034d774:   # 0x34d774, 0x58 bytes
  034d774  stdu 1, -128(1)
  034d778  mflr 0
  034d77c  std 0, 144(1)
  034d780  std 31, 120(1)
  034d784  ori 31, 3, 0
  034d788  bl 0x48aa70
  034d78c  nop
  034d790  cmpwi 3, 0
  034d794  bt 2, 0x34d7a4
  034d798  li 4, 9
  034d79c  stb 4, 32(31)
  034d7a0  b 0x34d7b8
  034d7a4  lbz 4, 32(31)
  034d7a8  cmpwi 4, 9
  034d7ac  bf 2, 0x34d7b8
  034d7b0  li 4, 1
  034d7b4  stb 4, 32(31)
  034d7b8  ld 0, 144(1)
  034d7bc  mtlr 0
  034d7c0  ld 31, 120(1)
  034d7c4  addi 1, 1, 128
  034d7c8  blr

M341_0034d7cc:   # 0x34d7cc, 0xc8 bytes
  034d7cc  stdu 1, -160(1)
  034d7d0  mflr 0
  034d7d4  std 0, 176(1)
  034d7d8  stfd 31, 152(1)
  034d7dc  std 31, 144(1)
  034d7e0  fmr 31, 1
  034d7e4  std 30, 136(1)
  034d7e8  ori 31, 3, 0
  034d7ec  std 29, 128(1)
  034d7f0  ori 30, 5, 0
  034d7f4  std 28, 120(1)
  034d7f8  ori 29, 4, 0
  034d7fc  bl 0x486828
  034d800  nop
  034d804  ori 28, 3, 0
  034d808  ori 3, 31, 0
  034d80c  fmr 1, 31
  034d810  ori 5, 30, 0
  034d814  ori 4, 29, 0
  034d818  bl 0x48acb8
  034d81c  nop
  034d820  ori 30, 3, 0
  034d824  lhz 3, 104(28)
  034d828  cmpwi 30, 0
  034d82c  bt 2, 0x34d83c
  034d830  li 4, 9
  034d834  stb 4, 32(31)
  034d838  b 0x34d850
  034d83c  lbz 4, 32(31)
  034d840  cmpwi 4, 9
  034d844  bf 2, 0x34d850
  034d848  li 4, 1
  034d84c  stb 4, 32(31)
  034d850  cmpwi 3, 6
  034d854  bf 2, 0x34d86c
  034d858  li 3, 1
  034d85c  li 4, 0
  034d860  ori 5, 31, 0
  034d864  bl 0x15d12c
  034d868  nop
  034d86c  ori 3, 30, 0
  034d870  ld 0, 176(1)
  034d874  mtlr 0
  034d878  lfd 31, 152(1)
  034d87c  ld 28, 120(1)
  034d880  ld 29, 128(1)
  034d884  ld 30, 136(1)
  034d888  ld 31, 144(1)
  034d88c  addi 1, 1, 160
  034d890  blr

M341_0034d894:   # 0x34d894, 0x38 bytes
  034d894  stdu 1, -128(1)
  034d898  mflr 0
  034d89c  std 0, 144(1)
  034d8a0  std 31, 120(1)
  034d8a4  ori 31, 3, 0
  034d8a8  bl 0x48afe8
  034d8ac  nop
  034d8b0  li 4, 9
  034d8b4  stb 4, 32(31)
  034d8b8  ld 0, 144(1)
  034d8bc  mtlr 0
  034d8c0  ld 31, 120(1)
  034d8c4  addi 1, 1, 128
  034d8c8  blr

M341_0034d8cc:   # 0x34d8cc, 0x40 bytes
  034d8cc  cmpwi 3, 0
  034d8d0  bt 2, 0x34d904
  034d8d4  li 4, 0
  034d8d8  lwz 3, 120(3)
  034d8dc  li 5, 0
  034d8e0  subc 4, 4, 3
  034d8e4  addic 3, 3, 384
  034d8e8  cntlzw 4, 4
  034d8ec  subc 5, 5, 3
  034d8f0  sldi 4, 4, 58
  034d8f4  sradi 4, 4, 63
  034d8f8  and 4, 4, 5
  034d8fc  addc 3, 3, 4
  034d900  b 0x34d908
  034d904  li 3, 0
  034d908  blr

M341_0034d90c:   # 0x34d90c, 0x14 bytes
  034d90c  lis 3, 132
  034d910  lis 4, 1
  034d914  addic 3, 3, 28
  034d918  stw 4, 72(3)
  034d91c  blr

M341_0034d950:   # 0x34d950, 0x1f4 bytes
  034d950  stdu 1, -144(1)
  034d954  mflr 0
  034d958  std 0, 160(1)
  034d95c  std 29, 120(1)
  034d960  std 30, 128(1)
  034d964  lis 29, 151
  034d968  std 31, 136(1)
  034d96c  lwz 30, 120(3)
  034d970  ori 31, 3, 0
  034d974  addic 29, 29, -25376
  034d978  lwz 4, 764(29)
  034d97c  cmpw 4, 3
  034d980  bf 2, 0x34d9d4
  034d984  lis 3, 53
  034d988  lis 4, 114
  034d98c  addi 5, 3, -9952
  034d990  addic 3, 30, 28
  034d994  lfs 3, 4(5)
  034d998  lfs 1, 0(5)
  034d99c  lfs 4, -3052(4)
  034d9a0  fmuls 2, 4, 3
  034d9a4  bl 0x109af0
  034d9a8  nop
  034d9ac  lwz 4, 4240(29)
  034d9b0  li 3, 0
  034d9b4  cmpwi 4, 0
  034d9b8  bt 2, 0x34d9cc
  034d9bc  lwz 4, 4280(29)
  034d9c0  cmpwi 4, 22
  034d9c4  bf 2, 0x34d9cc
  034d9c8  li 3, 1
  034d9cc  stb 3, 188(31)
  034d9d0  b 0x34d9f4
  034d9d4  lis 3, 53
  034d9d8  lis 4, 114
  034d9dc  addi 5, 3, -9952
  034d9e0  addic 3, 30, 28
  034d9e4  lfs 2, -3052(4)
  034d9e8  lfs 1, 8(5)
  034d9ec  bl 0x109af0
  034d9f0  nop
  034d9f4  lwz 3, 28(30)
  034d9f8  cmpwi 3, 0
  034d9fc  bt 2, 0x34db1c
  034da00  lis 3, 53
  034da04  lfs 1, 24(30)
  034da08  addi 29, 3, -9952
  034da0c  lis 3, 114
  034da10  lfs 2, 12(29)
  034da14  lfs 3, -3052(3)
  034da18  fmuls 2, 3, 2
  034da1c  bl 0x502578
  034da20  nop
  034da24  stfs 1, 24(30)
  034da28  lfs 2, 36(29)
  034da2c  lfs 3, 40(29)
  034da30  fsubs 2, 2, 1
  034da34  fsubs 3, 3, 1
  034da38  lfs 4, 28(29)
  034da3c  fsub 5, 1, 2
  034da40  fsel 1, 5, 2, 1
  034da44  lfs 5, 32(29)
  034da48  lfs 7, 24(29)
  034da4c  lfs 6, 20(29)
  034da50  fsub 2, 3, 1
  034da54  fsel 1, 2, 3, 1
  034da58  lfs 2, 16(29)
  034da5c  lbz 3, 188(31)
  034da60  cmpwi 3, 1
  034da64  fmuls 3, 1, 1
  034da68  fmuls 8, 3, 1
  034da6c  fmadds 1, 8, 4, 1
  034da70  fmuls 4, 3, 8
  034da74  fmuls 8, 3, 4
  034da78  fmadds 1, 4, 5, 1
  034da7c  fmuls 3, 3, 8
  034da80  fmadds 1, 8, 7, 1
  034da84  fmadds 1, 3, 6, 1
  034da88  bf 2, 0x34dac4
  034da8c  lis 3, 53
  034da90  lis 4, 132
  034da94  addi 3, 3, -9952
  034da98  lis 5, 132
  034da9c  lfs 3, 0(3)
  034daa0  lwz 3, 140(4)
  034daa4  fadds 1, 1, 3
  034daa8  lwz 4, 144(5)
  034daac  extsw 3, 3
  034dab0  extsw 4, 4
  034dab4  fmuls 1, 1, 2
  034dab8  bl 0x5027bc
  034dabc  nop
  034dac0  b 0x34daf8
  034dac4  lis 3, 53
  034dac8  lis 4, 132
  034dacc  addi 3, 3, -9952
  034dad0  lis 5, 132
  034dad4  lfs 3, 0(3)
  034dad8  lwz 3, 148(4)
  034dadc  fadds 1, 1, 3
  034dae0  lwz 4, 152(5)
  034dae4  extsw 3, 3
  034dae8  extsw 4, 4
  034daec  fmuls 1, 1, 2
  034daf0  bl 0x5027bc
  034daf4  nop
  034daf8  lis 5, 132
  034dafc  ori 4, 3, 0
  034db00  lwz 3, 136(5)
  034db04  lfs 1, 28(30)
  034db08  extsw 3, 3
  034db0c  bl 0x5027bc
  034db10  nop
  034db14  ori 30, 3, 0
  034db18  b 0x34db24
  034db1c  lis 3, 132
  034db20  lwz 30, 136(3)
  034db24  stw 30, 144(31)
  034db28  ld 0, 160(1)
  034db2c  mtlr 0
  034db30  ld 29, 120(1)
  034db34  ld 30, 128(1)
  034db38  ld 31, 136(1)
  034db3c  addi 1, 1, 144
  034db40  blr

UpdateMoby_341:   # 0x34db44, 0x1a4 bytes
  034db44  stdu 1, -128(1)
  034db48  mflr 0
  034db4c  std 0, 144(1)
  034db50  std 31, 120(1)
  034db54  lis 7, 151
  034db58  ori 31, 3, 0
  034db5c  addic 7, 7, -25376
  034db60  li 4, 0
  034db64  lwz 5, 120(31)
  034db68  lwz 8, 764(7)
  034db6c  lbz 3, 83(31)
  034db70  cmpw 8, 31
  034db74  lbz 6, 112(31)
  034db78  cmpwi 1, 3, 1
  034db7c  cmpwi 6, 3, -1
  034db80  cmpwi 7, 3, 0
  034db84  bf 2, 0x34db98
  034db88  lwz 7, 8332(7)
  034db8c  cmpwi 7, 19
  034db90  bf 2, 0x34db98
  034db94  li 4, 1
  034db98  bt 5, 0x34dba8
  034db9c  bf 25, 0x34dccc
  034dba0  bf 29, 0x34dbbc
  034dba4  b 0x34dca0
  034dba8  cmpwi 3, 2
  034dbac  bf 1, 0x34dc18
  034dbb0  cmpwi 3, 3
  034dbb4  bf 1, 0x34dc74
  034dbb8  b 0x34dccc
  034dbbc  lwz 5, 0(5)
  034dbc0  cmpwi 5, -1
  034dbc4  bf 1, 0x34dccc
  034dbc8  lis 6, 164
  034dbcc  slwi 5, 5, 8
  034dbd0  cmpwi 1, 4, 0
  034dbd4  lwz 6, -28512(6)
  034dbd8  addc 5, 6, 5
  034dbdc  clrldi 5, 5, 32
  034dbe0  lbz 4, 188(5)
  034dbe4  clrlwi 4, 4, 31
  034dbe8  cmpwi 4, 0
  034dbec  crorc 2, 2, 6
  034dbf0  bt 2, 0x34dccc
  034dbf4  cmpwi 3, 1
  034dbf8  bt 2, 0x34dccc
  034dbfc  ori 3, 31, 0
  034dc00  li 4, 1
  034dc04  li 5, 0
  034dc08  li 6, 0
  034dc0c  bl 0xfddc0
  034dc10  nop
  034dc14  b 0x34dccc
  034dc18  lwz 5, 0(5)
  034dc1c  cmpwi 5, -1
  034dc20  bf 1, 0x34dccc
  034dc24  lis 6, 164
  034dc28  cmpwi 1, 4, 0
  034dc2c  slwi 5, 5, 8
  034dc30  lwz 4, -28512(6)
  034dc34  addc 4, 4, 5
  034dc38  clrldi 4, 4, 32
  034dc3c  lbz 4, 188(4)
  034dc40  rlwinm 4, 4, 0, 30, 30
  034dc44  cmpwi 4, 0
  034dc48  crorc 2, 2, 6
  034dc4c  bt 2, 0x34dccc
  034dc50  cmpwi 3, 3
  034dc54  bt 2, 0x34dccc
  034dc58  ori 3, 31, 0
  034dc5c  li 4, 3
  034dc60  li 5, 0
  034dc64  li 6, 0
  034dc68  bl 0xfddc0
  034dc6c  nop
  034dc70  b 0x34dccc
  034dc74  rlwinm 3, 6, 0, 30, 30
  034dc78  cmpwi 3, 0
  034dc7c  bt 2, 0x34dccc
  034dc80  bt 30, 0x34dccc
  034dc84  ori 3, 31, 0
  034dc88  li 4, 0
  034dc8c  li 5, 0
  034dc90  li 6, 0
  034dc94  bl 0xfddc0
  034dc98  nop
  034dc9c  b 0x34dccc
  034dca0  rlwinm 4, 6, 0, 30, 30
  034dca4  cmpwi 4, 0
  034dca8  bt 2, 0x34dccc
  034dcac  cmpwi 3, 2
  034dcb0  bt 2, 0x34dccc
  034dcb4  ori 3, 31, 0
  034dcb8  li 4, 2
  034dcbc  li 5, 0
  034dcc0  li 6, 0
  034dcc4  bl 0xfddc0
  034dcc8  nop
  034dccc  ori 3, 31, 0
  034dcd0  bl 0x34d950
  034dcd4  ld 0, 144(1)
  034dcd8  mtlr 0
  034dcdc  ld 31, 120(1)
  034dce0  addi 1, 1, 128
  034dce4  blr
