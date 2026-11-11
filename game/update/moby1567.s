# game/update/moby1567.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1567_0029db20:   # 0x29db20, 0x45c bytes
  029db20  stdu 1, -304(1)
  029db24  mflr 0
  029db28  std 0, 320(1)
  029db2c  stfd 24, 240(1)
  029db30  stfd 25, 248(1)
  029db34  stfd 26, 256(1)
  029db38  stfd 27, 264(1)
  029db3c  stfd 28, 272(1)
  029db40  stfd 29, 280(1)
  029db44  stfd 30, 288(1)
  029db48  stfd 31, 296(1)
  029db4c  std 30, 224(1)
  029db50  ori 30, 3, 0
  029db54  lis 3, 161
  029db58  std 29, 216(1)
  029db5c  lis 4, 42
  029db60  std 22, 160(1)
  029db64  addi 29, 4, -9480
  029db68  lwz 22, 120(30)
  029db6c  lwz 3, 1808(3)
  029db70  std 31, 232(1)
  029db74  std 28, 208(1)
  029db78  std 27, 200(1)
  029db7c  std 26, 192(1)
  029db80  std 25, 184(1)
  029db84  std 24, 176(1)
  029db88  std 23, 168(1)
  029db8c  std 21, 152(1)
  029db90  extsw 3, 3
  029db94  bl 0x502730
  029db98  nop
  029db9c  lis 3, 123
  029dba0  lis 31, 114
  029dba4  lis 4, 123
  029dba8  lfs 2, -14492(3)
  029dbac  lfs 3, -3052(31)
  029dbb0  lwz 3, -14512(4)
  029dbb4  fmuls 31, 2, 3
  029dbb8  extsw 3, 3
  029dbbc  fmuls 31, 31, 1
  029dbc0  bl 0x685c4
  029dbc4  nop
  029dbc8  ori 4, 3, 0
  029dbcc  li 3, 24
  029dbd0  bl 0x174f80
  029dbd4  nop
  029dbd8  lis 7, 123
  029dbdc  li 3, 0
  029dbe0  li 4, 1
  029dbe4  li 5, 0
  029dbe8  li 6, 1
  029dbec  lwz 7, -14516(7)
  029dbf0  bl 0x502ea8
  029dbf4  nop
  029dbf8  ori 4, 3, 0
  029dbfc  li 3, 3
  029dc00  bl 0x174f80
  029dc04  nop
  029dc08  li 3, 0
  029dc0c  li 4, 0
  029dc10  li 8, 0
  029dc14  li 5, 0
  029dc18  li 6, 0
  029dc1c  li 7, 0
  029dc20  bl 0x502f08
  029dc24  nop
  029dc28  ori 4, 3, 0
  029dc2c  li 3, 6
  029dc30  bl 0x174f80
  029dc34  nop
  029dc38  lis 9, 0
  029dc3c  li 3, 0
  029dc40  li 4, 0
  029dc44  ori 9, 9, 65424
  029dc48  li 5, 1
  029dc4c  li 6, 1
  029dc50  li 7, 1
  029dc54  li 8, 0
  029dc58  bl 0x502fd4
  029dc5c  nop
  029dc60  ori 4, 3, 0
  029dc64  li 3, 26
  029dc68  bl 0x174f80
  029dc6c  nop
  029dc70  lis 3, 123
  029dc74  lfs 1, 4(22)
  029dc78  lis 4, 114
  029dc7c  stfs 1, 0(22)
  029dc80  lfs 2, 0(29)
  029dc84  lfs 3, -14500(3)
  029dc88  lfs 4, -3056(4)
  029dc8c  fmuls 3, 3, 4
  029dc90  lfs 4, 4(29)
  029dc94  fdivs 2, 2, 3
  029dc98  lfs 3, -3052(31)
  029dc9c  fmuls 2, 2, 4
  029dca0  fmuls 2, 2, 3
  029dca4  bl 0x502578
  029dca8  nop
  029dcac  ori 3, 30, 0
  029dcb0  stfs 1, 4(22)
  029dcb4  addic 4, 1, 112
  029dcb8  addic 5, 1, 116
  029dcbc  addic 6, 1, 120
  029dcc0  bl 0xf1ef0
  029dcc4  nop
  029dcc8  lis 3, 123
  029dccc  lwz 4, 120(1)
  029dcd0  lis 25, 251
  029dcd4  lwz 5, 116(1)
  029dcd8  li 24, 0
  029dcdc  slwi 4, 4, 16
  029dce0  slwi 5, 5, 8
  029dce4  lwz 3, -14508(3)
  029dce8  addic 25, 25, -8160
  029dcec  lwz 6, 112(1)
  029dcf0  lis 28, 251
  029dcf4  lfs 24, 8(29)
  029dcf8  slwi 3, 3, 24
  029dcfc  lfs 25, 12(29)
  029dd00  or 23, 5, 6
  029dd04  lfs 26, 16(29)
  029dd08  lis 5, 123
  029dd0c  lfs 27, 20(29)
  029dd10  or 3, 3, 4
  029dd14  lfs 28, 24(29)
  029dd18  ori 31, 24, 0
  029dd1c  lfs 29, 28(29)
  029dd20  or 23, 3, 23
  029dd24  lfs 30, 32(29)
  029dd28  addic 26, 25, 4
  029dd2c  addic 27, 25, 8
  029dd30  addic 28, 28, -6400
  029dd34  addic 29, 5, -16640
  029dd38  lfs 1, 4(29)
  029dd3c  lfs 3, 0(29)
  029dd40  fmuls 1, 1, 1
  029dd44  lis 21, 123
  029dd48  lfs 2, -14504(21)
  029dd4c  fmadds 1, 3, 3, 1
  029dd50  fsqrts 1, 1
  029dd54  bl 0x502798
  029dd58  nop
  029dd5c  lfs 2, -14504(21)
  029dd60  fmuls 1, 1, 24
  029dd64  fdivs 1, 1, 2
  029dd68  bl 0x502648
  029dd6c  nop
  029dd70  lfs 2, 4(22)
  029dd74  bl 0x502578
  029dd78  nop
  029dd7c  lis 3, 123
  029dd80  lfs 5, 0(29)
  029dd84  addic 24, 24, 1
  029dd88  lfs 6, -14488(3)
  029dd8c  lfs 7, 16(30)
  029dd90  lis 3, 123
  029dd94  cmplwi 24, 88
  029dd98  fsubs 2, 25, 1
  029dd9c  fsubs 3, 26, 1
  029dda0  fsub 4, 1, 2
  029dda4  fsel 1, 4, 2, 1
  029dda8  fmadds 4, 6, 5, 7
  029ddac  lfs 2, 4(29)
  029ddb0  lfs 5, 8(29)
  029ddb4  addic 29, 29, 12
  029ddb8  fsub 7, 3, 1
  029ddbc  stfs 4, 0(25)
  029ddc0  addic 25, 25, 12
  029ddc4  fsel 1, 7, 3, 1
  029ddc8  lfs 3, 20(30)
  029ddcc  lfs 4, -14496(3)
  029ddd0  fmadds 2, 6, 2, 3
  029ddd4  fmuls 3, 1, 1
  029ddd8  stfs 2, 0(26)
  029dddc  lfs 2, 24(30)
  029dde0  addic 26, 26, 12
  029dde4  fmadds 2, 6, 5, 2
  029dde8  fmuls 7, 3, 1
  029ddec  stw 23, 0(28)
  029ddf0  addic 28, 28, 4
  029ddf4  fmuls 5, 3, 7
  029ddf8  fmadds 1, 7, 27, 1
  029ddfc  fmuls 6, 3, 5
  029de00  fmadds 1, 5, 28, 1
  029de04  fmuls 3, 3, 6
  029de08  fmadds 1, 6, 29, 1
  029de0c  fmadds 1, 3, 30, 1
  029de10  fmadds 1, 4, 1, 2
  029de14  stfs 1, 0(27)
  029de18  addic 27, 27, 12
  029de1c  bt 0, 0x29dd38
  029de20  lis 3, 42
  029de24  ori 24, 31, 0
  029de28  addi 3, 3, -9480
  029de2c  ori 30, 1, 0
  029de30  lfs 30, 36(3)
  029de34  lis 26, 123
  029de38  lis 27, 251
  029de3c  lis 28, 123
  029de40  lis 29, 251
  029de44  ori 25, 31, 0
  029de48  addic 26, 26, -15584
  029de4c  addic 27, 27, -7104
  029de50  addic 28, 28, -15580
  029de54  addic 29, 29, -7100
  029de58  lis 3, 16256
  029de5c  lis 4, -16608
  029de60  fmr 2, 30
  029de64  lis 5, 16160
  029de68  ori 4, 4, 55676
  029de6c  stw 3, 124(1)
  029de70  ori 5, 5, 55676
  029de74  stw 3, 132(1)
  029de78  stw 4, 128(1)
  029de7c  lfs 1, 124(30)
  029de80  stw 5, 136(1)
  029de84  fmuls 1, 1, 31
  029de88  bl 0x502798
  029de8c  nop
  029de90  lfs 2, 0(26)
  029de94  fadds 3, 2, 1
  029de98  lfs 1, 128(30)
  029de9c  fmr 2, 30
  029dea0  fmuls 1, 1, 31
  029dea4  stfs 3, 0(27)
  029dea8  bl 0x502798
  029deac  nop
  029deb0  lfs 2, 0(28)
  029deb4  addic 25, 25, 1
  029deb8  fadds 1, 2, 1
  029debc  cmplwi 25, 88
  029dec0  addic 26, 26, 8
  029dec4  addic 27, 27, 8
  029dec8  addic 28, 28, 8
  029decc  stfs 1, 0(29)
  029ded0  addic 29, 29, 8
  029ded4  bt 0, 0x29de58
  029ded8  bl 0x71170
  029dedc  nop
  029dee0  lis 3, 123
  029dee4  lis 4, 123
  029dee8  lis 5, 123
  029deec  lis 6, 123
  029def0  li 7, 9
  029def4  lwz 3, -16672(3)
  029def8  lwz 4, -14528(4)
  029defc  lwz 5, -14520(5)
  029df00  extsw 3, 3
  029df04  lwz 6, -14524(6)
  029df08  bl 0x74604
  029df0c  nop
  029df10  addic 24, 24, 1
  029df14  addic 30, 30, 8
  029df18  cmpwi 24, 2
  029df1c  bt 0, 0x29de34
  029df20  ld 0, 320(1)
  029df24  mtlr 0
  029df28  lfd 24, 240(1)
  029df2c  lfd 25, 248(1)
  029df30  lfd 26, 256(1)
  029df34  lfd 27, 264(1)
  029df38  lfd 28, 272(1)
  029df3c  lfd 29, 280(1)
  029df40  lfd 30, 288(1)
  029df44  lfd 31, 296(1)
  029df48  ld 21, 152(1)
  029df4c  ld 22, 160(1)
  029df50  ld 23, 168(1)
  029df54  ld 24, 176(1)
  029df58  ld 25, 184(1)
  029df5c  ld 26, 192(1)
  029df60  ld 27, 200(1)
  029df64  ld 28, 208(1)
  029df68  ld 29, 216(1)
  029df6c  ld 30, 224(1)
  029df70  ld 31, 232(1)
  029df74  addi 1, 1, 304
  029df78  blr

UpdateMoby_1567:   # 0x29df7c, 0x80 bytes
  029df7c  stdu 1, -128(1)
  029df80  mflr 0
  029df84  std 0, 144(1)
  029df88  std 31, 120(1)
  029df8c  ori 31, 3, 0
  029df90  lbz 3, 32(3)
  029df94  cmpwi 3, 0
  029df98  bf 2, 0x29dfc0
  029df9c  ori 3, 31, 0
  029dfa0  li 4, 64
  029dfa4  li 5, 64
  029dfa8  li 6, 64
  029dfac  bl 0xf1ec8
  029dfb0  nop
  029dfb4  li 3, 1
  029dfb8  stb 3, 32(31)
  029dfbc  b 0x29dfe8
  029dfc0  lis 3, 113
  029dfc4  ori 4, 31, 0
  029dfc8  addic 3, 3, -21792
  029dfcc  bl 0x6d7e0
  029dfd0  nop
  029dfd4  lhz 4, 52(31)
  029dfd8  li 3, 0
  029dfdc  ori 4, 4, 1
  029dfe0  sth 3, 50(31)
  029dfe4  sth 4, 52(31)
  029dfe8  ld 0, 144(1)
  029dfec  mtlr 0
  029dff0  ld 31, 120(1)
  029dff4  addi 1, 1, 128
  029dff8  blr
