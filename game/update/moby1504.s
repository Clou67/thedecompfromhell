# game/update/moby1504.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

UpdateMoby_1504:   # 0x28d9b0, 0x5b8 bytes
  028d9b0  stdu 1, -192(1)
  028d9b4  mflr 0
  028d9b8  std 0, 208(1)
  028d9bc  stfd 30, 176(1)
  028d9c0  stfd 31, 184(1)
  028d9c4  std 30, 160(1)
  028d9c8  addi 0, 1, 112
  028d9cc  stvx 30, 0, 0
  028d9d0  addic 0, 0, 16
  028d9d4  stvx 31, 0, 0
  028d9d8  lbz 4, 32(3)
  028d9dc  std 31, 168(1)
  028d9e0  ori 30, 3, 0
  028d9e4  lwz 31, 120(3)
  028d9e8  cmpwi 4, 0
  028d9ec  cmpwi 1, 4, 1
  028d9f0  std 29, 152(1)
  028d9f4  cmpwi 6, 4, -1
  028d9f8  bt 1, 0x28da04
  028d9fc  bf 25, 0x28df34
  028da00  b 0x28da0c
  028da04  bf 5, 0x28dacc
  028da08  b 0x28df34
  028da0c  lwz 3, 88(31)
  028da10  cmpwi 3, 2
  028da14  cmpwi 1, 3, 0
  028da18  bf 0, 0x28da2c
  028da1c  ori 3, 30, 0
  028da20  bl 0xefb38
  028da24  nop
  028da28  b 0x28df34
  028da2c  li 4, 0
  028da30  bf 5, 0x28da88
  028da34  lis 3, 41
  028da38  addi 5, 3, -9856
  028da3c  ori 3, 31, 0
  028da40  lfs 1, 0(5)
  028da44  lfs 2, 0(3)
  028da48  lfs 3, 4(3)
  028da4c  addic 4, 4, 1
  028da50  fmuls 2, 2, 1
  028da54  lfs 4, 8(3)
  028da58  fmuls 3, 3, 1
  028da5c  lfs 5, 12(3)
  028da60  fmuls 4, 4, 1
  028da64  fmuls 5, 5, 1
  028da68  lwz 5, 88(31)
  028da6c  cmpw 4, 5
  028da70  stfs 2, 0(3)
  028da74  stfs 3, 4(3)
  028da78  stfs 4, 8(3)
  028da7c  stfs 5, 12(3)
  028da80  addic 3, 3, 16
  028da84  bt 0, 0x28da44
  028da88  li 3, -1
  028da8c  stw 3, 104(31)
  028da90  lfs 1, 92(31)
  028da94  lbz 29, 48(30)
  028da98  bl 0x502758
  028da9c  nop
  028daa0  addic 3, 3, 4
  028daa4  cmpw 29, 3
  028daa8  bf 0, 0x28dac0
  028daac  lfs 1, 92(31)
  028dab0  bl 0x502758
  028dab4  nop
  028dab8  addic 3, 3, 4
  028dabc  stb 3, 48(30)
  028dac0  li 3, 1
  028dac4  stb 3, 32(30)
  028dac8  b 0x28df34
  028dacc  lis 3, 149
  028dad0  lfs 1, 20(30)
  028dad4  addic 3, 3, 5056
  028dad8  vspltisw 30, 0
  028dadc  lfs 2, 324(3)
  028dae0  lfs 3, 16(30)
  028dae4  fsubs 1, 1, 2
  028dae8  lfs 2, 320(3)
  028daec  fsubs 2, 3, 2
  028daf0  vsldoi 31, 30, 30, 0
  028daf4  fmuls 1, 1, 1
  028daf8  fmadds 31, 2, 2, 1
  028dafc  lfs 1, 92(31)
  028db00  fsqrts 31, 31
  028db04  fcmpu 0, 31, 1
  028db08  cror 6, 1, 2
  028db0c  bt 6, 0x28db14
  028db10  vspltisw 30, 1
  028db14  vcfsx 30, 30, 0
  028db18  vcmpeqfp. 3, 30, 31
  028db1c  vsldoi 2, 30, 30, 0
  028db20  bf 26, 0x28db58
  028db24  lwz 3, 128(31)
  028db28  vsldoi 2, 30, 30, 0
  028db2c  cmpwi 3, -1
  028db30  bt 2, 0x28db58
  028db34  lis 5, 149
  028db38  extsw 4, 3
  028db3c  addic 3, 5, 5376
  028db40  bl 0x110b70
  028db44  nop
  028db48  cmpwi 3, 0
  028db4c  vsldoi 2, 30, 30, 0
  028db50  bf 2, 0x28db58
  028db54  vsldoi 2, 31, 31, 0
  028db58  lwz 3, 132(31)
  028db5c  cmpwi 3, -1
  028db60  bt 2, 0x28dbac
  028db64  lis 4, 164
  028db68  slwi 3, 3, 8
  028db6c  lwz 4, -28512(4)
  028db70  addc 3, 4, 3
  028db74  clrldi 3, 3, 32
  028db78  lbz 3, 32(3)
  028db7c  cmpwi 3, 127
  028db80  bf 1, 0x28dbac
  028db84  lwz 31, 104(31)
  028db88  cmpwi 31, -1
  028db8c  bt 2, 0x28db9c
  028db90  extsw 3, 31
  028db94  bl 0xda9e8
  028db98  nop
  028db9c  ori 3, 30, 0
  028dba0  bl 0xefb38
  028dba4  nop
  028dba8  b 0x28df34
  028dbac  vcmpeqfp. 2, 2, 31
  028dbb0  bf 26, 0x28df14
  028dbb4  addic 3, 31, 108
  028dbb8  bl 0x4fff60
  028dbbc  nop
  028dbc0  cmpwi 3, 0
  028dbc4  bt 2, 0x28dc34
  028dbc8  lwz 3, 80(31)
  028dbcc  lwz 4, 84(31)
  028dbd0  extsw 3, 3
  028dbd4  extsw 4, 4
  028dbd8  bl 0xfe484
  028dbdc  nop
  028dbe0  lwz 4, 88(31)
  028dbe4  stw 3, 112(31)
  028dbe8  addic 4, 4, -1
  028dbec  lwz 5, 120(31)
  028dbf0  stw 3, 108(31)
  028dbf4  stw 5, 116(31)
  028dbf8  extsw 4, 4
  028dbfc  li 3, 1
  028dc00  bl 0xfe484
  028dc04  nop
  028dc08  lwz 4, 120(31)
  028dc0c  lwz 5, 88(31)
  028dc10  addc 3, 4, 3
  028dc14  divw 4, 3, 5
  028dc18  mullw 4, 4, 5
  028dc1c  lwz 5, 124(31)
  028dc20  subc 3, 3, 4
  028dc24  cntlzw 4, 5
  028dc28  rlwinm 4, 4, 27, 31, 31
  028dc2c  stw 3, 120(31)
  028dc30  stw 4, 124(31)
  028dc34  lwz 3, 112(31)
  028dc38  lwz 4, 108(31)
  028dc3c  subc 3, 3, 4
  028dc40  extsw 3, 3
  028dc44  bl 0x502730
  028dc48  nop
  028dc4c  fmr 30, 1
  028dc50  lwz 3, 112(31)
  028dc54  extsw 3, 3
  028dc58  bl 0x502730
  028dc5c  nop
  028dc60  fdivs 1, 30, 1
  028dc64  lis 3, 41
  028dc68  addi 3, 3, -9856
  028dc6c  lfs 2, 4(3)
  028dc70  lfs 3, 8(3)
  028dc74  lwz 3, 124(31)
  028dc78  cmpwi 3, 0
  028dc7c  fmuls 1, 1, 2
  028dc80  fmuls 1, 1, 3
  028dc84  bt 2, 0x28dc98
  028dc88  lis 4, 41
  028dc8c  addi 4, 4, -9856
  028dc90  lfs 2, 12(4)
  028dc94  fadds 1, 1, 2
  028dc98  lis 4, 41
  028dc9c  addi 4, 4, -9856
  028dca0  cmpwi 3, 0
  028dca4  lfs 2, 16(4)
  028dca8  lfs 3, 20(4)
  028dcac  fsubs 2, 2, 1
  028dcb0  fsubs 3, 3, 1
  028dcb4  addic 29, 31, 64
  028dcb8  fsub 4, 1, 2
  028dcbc  fsel 1, 4, 2, 1
  028dcc0  lfs 2, 24(4)
  028dcc4  lfs 4, 28(4)
  028dcc8  fsub 5, 3, 1
  028dccc  fsel 1, 5, 3, 1
  028dcd0  lfs 3, 32(4)
  028dcd4  lfs 5, 36(4)
  028dcd8  fmuls 6, 1, 1
  028dcdc  fmuls 7, 6, 1
  028dce0  fmuls 8, 6, 7
  028dce4  fmadds 1, 7, 2, 1
  028dce8  fmuls 2, 6, 8
  028dcec  fmadds 1, 8, 4, 1
  028dcf0  fmuls 4, 6, 2
  028dcf4  fmadds 1, 2, 3, 1
  028dcf8  fmadds 1, 4, 5, 1
  028dcfc  bt 2, 0x28dd80
  028dd00  lwz 3, 120(31)
  028dd04  lwz 4, 116(31)
  028dd08  slwi 3, 3, 4
  028dd0c  slwi 4, 4, 4
  028dd10  addc 3, 31, 3
  028dd14  addc 4, 31, 4
  028dd18  clrldi 3, 3, 32
  028dd1c  clrldi 4, 4, 32
  028dd20  lfs 2, 0(3)
  028dd24  stfs 2, 64(1)
  028dd28  lfs 2, 4(3)
  028dd2c  stfs 2, 68(1)
  028dd30  lfs 2, 8(3)
  028dd34  stfs 2, 72(1)
  028dd38  lfs 2, 12(3)
  028dd3c  ori 3, 29, 0
  028dd40  stfs 2, 76(1)
  028dd44  lfs 2, 0(4)
  028dd48  lfs 3, 8(4)
  028dd4c  stfs 2, 80(1)
  028dd50  stfs 3, 88(1)
  028dd54  lfs 2, 4(4)
  028dd58  lfs 3, 12(4)
  028dd5c  stfs 2, 84(1)
  028dd60  stfs 3, 92(1)
  028dd64  ld 5, 64(1)
  028dd68  ld 6, 72(1)
  028dd6c  ld 7, 80(1)
  028dd70  ld 8, 88(1)
  028dd74  bl 0x1099f8
  028dd78  nop
  028dd7c  b 0x28ddfc
  028dd80  lwz 3, 116(31)
  028dd84  lwz 4, 120(31)
  028dd88  slwi 3, 3, 4
  028dd8c  slwi 4, 4, 4
  028dd90  addc 3, 31, 3
  028dd94  addc 4, 31, 4
  028dd98  clrldi 3, 3, 32
  028dd9c  clrldi 4, 4, 32
  028dda0  lfs 2, 0(3)
  028dda4  stfs 2, 64(1)
  028dda8  lfs 2, 4(3)
  028ddac  stfs 2, 68(1)
  028ddb0  lfs 2, 8(3)
  028ddb4  stfs 2, 72(1)
  028ddb8  lfs 2, 12(3)
  028ddbc  ori 3, 29, 0
  028ddc0  stfs 2, 76(1)
  028ddc4  lfs 2, 0(4)
  028ddc8  lfs 3, 8(4)
  028ddcc  stfs 2, 80(1)
  028ddd0  stfs 3, 88(1)
  028ddd4  lfs 2, 4(4)
  028ddd8  lfs 3, 12(4)
  028dddc  stfs 2, 84(1)
  028dde0  stfs 3, 92(1)
  028dde4  ld 5, 64(1)
  028dde8  ld 6, 72(1)
  028ddec  ld 7, 80(1)
  028ddf0  ld 8, 88(1)
  028ddf4  bl 0x1099f8
  028ddf8  nop
  028ddfc  lis 3, 41
  028de00  lfs 1, 92(31)
  028de04  addi 3, 3, -9856
  028de08  lfs 2, 40(3)
  028de0c  fmuls 2, 1, 2
  028de10  fcmpu 0, 31, 2
  028de14  fsubs 1, 1, 2
  028de18  cror 6, 0, 2
  028de1c  bt 6, 0x28de80
  028de20  lfs 3, 64(31)
  028de24  lis 3, 41
  028de28  fsubs 2, 31, 2
  028de2c  stfs 3, 64(1)
  028de30  lfs 3, 68(31)
  028de34  addi 3, 3, -9856
  028de38  stfs 3, 68(1)
  028de3c  lfs 3, 72(31)
  028de40  stfs 3, 72(1)
  028de44  lfs 3, 76(31)
  028de48  stfs 3, 76(1)
  028de4c  lfs 3, 44(3)
  028de50  fdivs 1, 2, 1
  028de54  ori 3, 29, 0
  028de58  ld 5, 64(1)
  028de5c  stfs 3, 80(1)
  028de60  stfs 3, 88(1)
  028de64  stfs 3, 84(1)
  028de68  stfs 3, 92(1)
  028de6c  ld 6, 72(1)
  028de70  ld 7, 80(1)
  028de74  ld 8, 88(1)
  028de78  bl 0x1099f8
  028de7c  nop
  028de80  lwz 3, 104(31)
  028de84  cmpwi 3, -1
  028de88  bf 2, 0x28deb4
  028de8c  addic 3, 30, 16
  028de90  lfs 1, 96(31)
  028de94  lfs 2, 76(31)
  028de98  lfs 3, 64(31)
  028de9c  lfs 4, 68(31)
  028dea0  lfs 5, 72(31)
  028dea4  bl 0xda4ac
  028dea8  nop
  028deac  stw 3, 104(31)
  028deb0  b 0x28df34
  028deb4  lis 4, 162
  028deb8  lfs 1, 16(30)
  028debc  slwi 3, 3, 5
  028dec0  addic 4, 4, -8448
  028dec4  addc 3, 4, 3
  028dec8  clrldi 3, 3, 32
  028decc  stfs 1, 16(3)
  028ded0  lfs 1, 20(30)
  028ded4  stfs 1, 20(3)
  028ded8  lfs 1, 24(30)
  028dedc  stfs 1, 24(3)
  028dee0  lfs 1, 28(30)
  028dee4  stfs 1, 28(3)
  028dee8  lfs 1, 96(31)
  028deec  stfs 1, 28(3)
  028def0  lfs 1, 64(31)
  028def4  stfs 1, 0(3)
  028def8  lfs 1, 68(31)
  028defc  stfs 1, 4(3)
  028df00  lfs 1, 72(31)
  028df04  stfs 1, 8(3)
  028df08  lfs 1, 76(31)
  028df0c  stfs 1, 12(3)
  028df10  b 0x28df34
  028df14  lwz 3, 104(31)
  028df18  cmpwi 3, -1
  028df1c  bt 2, 0x28df34
  028df20  extsw 3, 3
  028df24  bl 0xda9e8
  028df28  nop
  028df2c  li 3, -1
  028df30  stw 3, 104(31)
  028df34  li 0, 112
  028df38  lvx 30, 1, 0
  028df3c  addic 0, 0, 16
  028df40  lvx 31, 1, 0
  028df44  ld 0, 208(1)
  028df48  mtlr 0
  028df4c  lfd 30, 176(1)
  028df50  lfd 31, 184(1)
  028df54  ld 29, 152(1)
  028df58  ld 30, 160(1)
  028df5c  ld 31, 168(1)
  028df60  addi 1, 1, 192
  028df64  blr
