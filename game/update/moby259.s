# game/update/moby259.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M259_0031d8c4:   # 0x31d8c4, 0x14 bytes
  031d8c4  lis 3, 128
  031d8c8  lis 4, 1
  031d8cc  addic 3, 3, -140
  031d8d0  stw 4, 72(3)
  031d8d4  blr

FUN_0031d8e0:   # 0x31d8e0, 0xec bytes
  031d8e0  stdu 1, -144(1)
  031d8e4  mflr 0
  031d8e8  std 0, 160(1)
  031d8ec  std 31, 136(1)
  031d8f0  lis 4, 0
  031d8f4  std 29, 120(1)
  031d8f8  ori 31, 3, 0
  031d8fc  li 29, 144
  031d900  std 30, 128(1)
  031d904  li 3, 259
  031d908  addc 30, 1, 29
  031d90c  std 28, 112(1)
  031d910  addic 29, 29, 64
  031d914  std 5, 64(30)
  031d918  std 6, 72(30)
  031d91c  bl 0xefa28
  031d920  nop
  031d924  ori 28, 3, 0
  031d928  cmpwi 28, 0
  031d92c  bt 2, 0x31d9a8
  031d930  addc 4, 1, 29
  031d934  lfs 1, 64(30)
  031d938  lwz 29, 120(28)
  031d93c  lis 3, 50
  031d940  stfs 1, 16(28)
  031d944  lfs 1, 68(30)
  031d948  addi 5, 3, -10024
  031d94c  stfs 1, 20(28)
  031d950  lfs 1, 72(30)
  031d954  clrldi 3, 4, 32
  031d958  stw 31, 96(29)
  031d95c  ori 4, 31, 0
  031d960  stfs 1, 24(28)
  031d964  lfs 1, 76(30)
  031d968  stfs 1, 28(28)
  031d96c  lfs 1, 0(5)
  031d970  bl 0x1367d0
  031d974  nop
  031d978  li 4, 255
  031d97c  stw 3, 100(29)
  031d980  li 5, 1
  031d984  ori 3, 28, 0
  031d988  stb 4, 48(28)
  031d98c  sth 4, 50(28)
  031d990  stb 5, 49(28)
  031d994  bl 0xf31a8
  031d998  nop
  031d99c  ori 3, 28, 0
  031d9a0  bl 0x10c000
  031d9a4  nop
  031d9a8  ori 3, 28, 0
  031d9ac  ld 0, 160(1)
  031d9b0  mtlr 0
  031d9b4  ld 28, 112(1)
  031d9b8  ld 29, 120(1)
  031d9bc  ld 30, 128(1)
  031d9c0  ld 31, 136(1)
  031d9c4  addi 1, 1, 144
  031d9c8  blr

UpdateMoby_259:   # 0x31d9e8, 0x3e0 bytes
  031d9e8  stdu 1, -176(1)
  031d9ec  mflr 0
  031d9f0  std 0, 192(1)
  031d9f4  std 31, 168(1)
  031d9f8  ori 31, 3, 0
  031d9fc  lis 4, 51
  031da00  std 30, 160(1)
  031da04  li 5, 0
  031da08  lwz 30, 120(31)
  031da0c  bl 0x10675c
  031da10  nop
  031da14  cmpwi 3, 0
  031da18  bt 2, 0x31dcb8
  031da1c  lis 4, 50
  031da20  lwz 3, 44(3)
  031da24  addi 4, 4, -9780
  031da28  cmpwi 3, 0
  031da2c  lfs 1, 0(4)
  031da30  bt 2, 0x31dcb8
  031da34  lis 3, 15363
  031da38  li 4, 0
  031da3c  lis 5, 50
  031da40  lis 6, 14851
  031da44  ori 3, 3, 4719
  031da48  addi 5, 5, -9780
  031da4c  stw 4, 148(31)
  031da50  ori 6, 6, 4719
  031da54  lis 7, 114
  031da58  stw 3, 16(30)
  031da5c  li 3, 9
  031da60  stw 6, 20(30)
  031da64  lfs 2, 4(5)
  031da68  lfs 3, -3052(7)
  031da6c  lis 6, 16256
  031da70  fmuls 2, 3, 2
  031da74  stfs 2, 24(30)
  031da78  lfs 2, 8(5)
  031da7c  stb 4, 61(30)
  031da80  fmuls 2, 3, 2
  031da84  lhz 8, 52(31)
  031da88  stw 3, 36(30)
  031da8c  rlwimi 8, 4, 0, 19, 19
  031da90  stw 6, 48(30)
  031da94  lis 3, 151
  031da98  stw 6, 52(30)
  031da9c  stw 6, 56(30)
  031daa0  sth 8, 52(31)
  031daa4  addic 3, 3, -25376
  031daa8  stfs 2, 28(30)
  031daac  lfs 2, 12(5)
  031dab0  lfs 3, -3052(7)
  031dab4  fmuls 2, 3, 2
  031dab8  stfs 2, 24(30)
  031dabc  lfs 2, 16(5)
  031dac0  fmuls 2, 3, 2
  031dac4  stfs 2, 28(30)
  031dac8  lfs 2, 16(31)
  031dacc  lfs 3, 128(3)
  031dad0  lfs 4, 20(31)
  031dad4  lfs 5, 132(3)
  031dad8  fsubs 2, 2, 3
  031dadc  fsubs 3, 4, 5
  031dae0  lis 3, 115
  031dae4  addic 3, 3, 22784
  031dae8  fabs 5, 2
  031daec  fabs 4, 3
  031daf0  stfs 2, 112(1)
  031daf4  stfs 3, 116(1)
  031daf8  fsubs 2, 5, 4
  031dafc  stfs 2, 120(1)
  031db00  lwz 4, 112(1)
  031db04  lfs 2, 112(1)
  031db08  lwz 5, 116(1)
  031db0c  lfs 3, 116(1)
  031db10  lwz 6, 120(1)
  031db14  rlwinm 5, 5, 3, 29, 29
  031db18  fabs 6, 3
  031db1c  lfs 3, 120(1)
  031db20  fabs 2, 2
  031db24  rlwimi 5, 6, 2, 30, 30
  031db28  fsub 7, 3, 1
  031db2c  fsub 8, 3, 1
  031db30  rlwimi 5, 4, 4, 28, 28
  031db34  ori 4, 3, 0
  031db38  rlwimi 4, 5, 2, 26, 28
  031db3c  slwi 5, 5, 2
  031db40  clrldi 4, 4, 32
  031db44  fsel 4, 7, 2, 4
  031db48  lfsx 3, 3, 5
  031db4c  fsel 5, 8, 6, 5
  031db50  lfs 2, 4(4)
  031db54  fcmpu 0, 4, 1
  031db58  bt 1, 0x31db60
  031db5c  b 0x31dc84
  031db60  fsubs 6, 5, 4
  031db64  fadds 4, 5, 4
  031db68  addic 6, 1, 16
  031db6c  li 3, 2
  031db70  addic 5, 6, 108
  031db74  addic 4, 6, 124
  031db78  mtctr 3
  031db7c  fdivs 4, 6, 4
  031db80  fmuls 6, 4, 4
  031db84  stfs 4, 136(1)
  031db88  stfs 4, 128(1)
  031db8c  stfs 4, 132(1)
  031db90  stfs 4, 124(1)
  031db94  lfs 7, 136(1)
  031db98  lfs 8, 128(1)
  031db9c  lfs 9, 132(1)
  031dba0  fmuls 4, 6, 6
  031dba4  fmuls 8, 8, 6
  031dba8  fmuls 7, 7, 4
  031dbac  fmuls 5, 4, 4
  031dbb0  fmuls 4, 9, 4
  031dbb4  stfs 8, 128(1)
  031dbb8  fmuls 6, 7, 6
  031dbbc  stfs 4, 132(1)
  031dbc0  stfs 6, 136(1)
  031dbc4  lfs 4, 108(6)
  031dbc8  fmuls 4, 4, 5
  031dbcc  stfs 4, 124(6)
  031dbd0  lfs 4, 4(5)
  031dbd4  addic 6, 6, 8
  031dbd8  addic 5, 5, 8
  031dbdc  fmuls 4, 4, 5
  031dbe0  stfs 4, 4(4)
  031dbe4  addic 4, 4, 8
  031dbe8  bdnz 0x31dbc4
  031dbec  ori 7, 1, 0
  031dbf0  lis 6, 115
  031dbf4  li 8, 4
  031dbf8  addic 5, 7, 124
  031dbfc  addic 6, 6, 22752
  031dc00  ori 4, 5, 0
  031dc04  mtctr 8
  031dc08  lfs 4, 124(7)
  031dc0c  lfs 5, 0(6)
  031dc10  fmuls 4, 4, 5
  031dc14  lfs 5, 4(6)
  031dc18  addic 6, 6, 8
  031dc1c  stfs 4, 124(7)
  031dc20  lfs 4, 4(5)
  031dc24  addic 7, 7, 8
  031dc28  fmuls 4, 4, 5
  031dc2c  stfs 4, 4(5)
  031dc30  addic 5, 5, 8
  031dc34  bdnz 0x31dc08
  031dc38  ori 5, 3, 0
  031dc3c  ori 3, 1, 0
  031dc40  mtctr 5
  031dc44  lfs 4, 124(3)
  031dc48  fadds 1, 1, 4
  031dc4c  addic 3, 3, 16
  031dc50  lfs 4, 4(4)
  031dc54  lfs 5, 8(4)
  031dc58  lfs 6, 12(4)
  031dc5c  addic 4, 4, 16
  031dc60  fadds 1, 1, 4
  031dc64  fadds 1, 1, 5
  031dc68  fadds 1, 1, 6
  031dc6c  bdnz 0x31dc44
  031dc70  lis 3, 50
  031dc74  addi 3, 3, -9780
  031dc78  lfs 4, 20(3)
  031dc7c  fadds 1, 1, 4
  031dc80  fmadds 1, 1, 3, 2
  031dc84  ori 3, 31, 0
  031dc88  ori 4, 30, 0
  031dc8c  li 6, 1
  031dc90  li 7, 1
  031dc94  li 8, 0
  031dc98  bl 0x10ad80
  031dc9c  nop
  031dca0  lis 3, 16688
  031dca4  lis 4, 16784
  031dca8  li 5, 1
  031dcac  stw 3, 80(30)
  031dcb0  stw 4, 84(30)
  031dcb4  stb 5, 32(31)
  031dcb8  li 3, 255
  031dcbc  lbz 4, 32(31)
  031dcc0  cmpwi 4, 0
  031dcc4  cmpwi 1, 4, 1
  031dcc8  stb 3, 164(31)
  031dccc  cmpwi 6, 4, -1
  031dcd0  bt 1, 0x31dcdc
  031dcd4  bf 25, 0x31ddb0
  031dcd8  b 0x31dce4
  031dcdc  bf 5, 0x31dd68
  031dce0  b 0x31ddb0
  031dce4  cmpwi 30, 0
  031dce8  bt 2, 0x31dcf8
  031dcec  lwz 3, 96(30)
  031dcf0  cmpwi 3, 0
  031dcf4  bf 2, 0x31dd08
  031dcf8  ori 3, 31, 0
  031dcfc  bl 0xefb38
  031dd00  nop
  031dd04  b 0x31ddb0
  031dd08  ori 4, 3, 0
  031dd0c  lis 3, 50
  031dd10  lwz 8, 100(30)
  031dd14  lis 7, 114
  031dd18  addi 6, 3, -9780
  031dd1c  ori 3, 31, 0
  031dd20  addic 5, 31, 16
  031dd24  lfs 1, 24(6)
  031dd28  lfs 2, -3052(7)
  031dd2c  extsw 6, 8
  031dd30  li 7, 1
  031dd34  fmuls 1, 2, 1
  031dd38  bl 0x138238
  031dd3c  nop
  031dd40  lwz 4, 96(30)
  031dd44  stw 3, 100(30)
  031dd48  lwz 4, 0(4)
  031dd4c  addic 4, 4, -1
  031dd50  cmpw 3, 4
  031dd54  bf 2, 0x31ddb0
  031dd58  ori 3, 31, 0
  031dd5c  bl 0xefb38
  031dd60  nop
  031dd64  b 0x31ddb0
  031dd68  ori 3, 31, 0
  031dd6c  ori 4, 30, 0
  031dd70  bl 0x10b030
  031dd74  nop
  031dd78  rlwinm 3, 3, 0, 25, 25
  031dd7c  cmpwi 3, 0
  031dd80  bt 2, 0x31dd94
  031dd84  ori 3, 31, 0
  031dd88  bl 0xefb38
  031dd8c  nop
  031dd90  b 0x31ddb0
  031dd94  lwz 3, 24(31)
  031dd98  cmpwi 3, 0
  031dd9c  bf 0, 0x31ddb0
  031dda0  ori 3, 31, 0
  031dda4  bl 0xefb38
  031dda8  nop
  031ddac  b 0x31ddb0
  031ddb0  ld 0, 192(1)
  031ddb4  mtlr 0
  031ddb8  ld 30, 160(1)
  031ddbc  ld 31, 168(1)
  031ddc0  addi 1, 1, 176
  031ddc4  blr
