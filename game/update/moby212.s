# game/update/moby212.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1412_002ef9c8:   # 0x2ef9c8, 0x5fc bytes
  02ef9c8  stdu 1, -352(1)
  02ef9cc  mflr 0
  02ef9d0  std 0, 368(1)
  02ef9d4  stfd 30, 336(1)
  02ef9d8  stfd 31, 344(1)
  02ef9dc  std 31, 328(1)
  02ef9e0  ori 31, 3, 0
  02ef9e4  lis 4, 165
  02ef9e8  lbz 3, 33(3)
  02ef9ec  addic 4, 4, -28284
  02ef9f0  std 29, 312(1)
  02ef9f4  slwi 3, 3, 2
  02ef9f8  lwzx 29, 4, 3
  02ef9fc  std 30, 320(1)
  02efa00  std 28, 304(1)
  02efa04  std 27, 296(1)
  02efa08  std 26, 288(1)
  02efa0c  std 25, 280(1)
  02efa10  cmpwi 29, 0
  02efa14  bt 2, 0x2eff90
  02efa18  li 30, 0
  02efa1c  ori 25, 30, 0
  02efa20  lis 3, 164
  02efa24  lhz 5, 0(29)
  02efa28  lis 4, 162
  02efa2c  lis 26, 151
  02efa30  rlwinm 5, 5, 8, 9, 23
  02efa34  addic 26, 26, -25376
  02efa38  lwz 3, -28512(3)
  02efa3c  lwz 4, -22436(4)
  02efa40  addc 28, 3, 5
  02efa44  lis 5, 47
  02efa48  clrldi 28, 28, 32
  02efa4c  addi 5, 5, -1612
  02efa50  lwz 3, 120(28)
  02efa54  lwz 6, 1376(26)
  02efa58  lwz 7, 96(3)
  02efa5c  lfs 31, 0(5)
  02efa60  slwi 7, 7, 5
  02efa64  addc 4, 4, 7
  02efa68  clrldi 27, 4, 32
  02efa6c  lwz 27, 16(27)
  02efa70  cmpw 6, 27
  02efa74  bf 2, 0x2efce0
  02efa78  lis 4, 47
  02efa7c  lis 5, 165
  02efa80  addi 4, 4, -1612
  02efa84  addic 8, 5, 7136
  02efa88  addic 5, 1, 128
  02efa8c  addic 7, 1, 164
  02efa90  addic 6, 1, 160
  02efa94  lfs 30, 4(4)
  02efa98  li 9, 0
  02efa9c  stw 25, 164(1)
  02efaa0  lwz 3, 136(3)
  02efaa4  lfs 1, 8(4)
  02efaa8  fmr 3, 30
  02efaac  slwi 3, 3, 2
  02efab0  lfs 2, 12(4)
  02efab4  extsw 10, 3
  02efab8  ori 3, 27, 0
  02efabc  lwzx 4, 8, 10
  02efac0  addic 4, 4, 16
  02efac4  bl 0x10d7a0
  02efac8  nop
  02efacc  lwz 3, 160(1)
  02efad0  slwi 3, 3, 4
  02efad4  addc 3, 27, 3
  02efad8  clrldi 3, 3, 32
  02efadc  lfs 1, 64(3)
  02efae0  lfs 2, 16(3)
  02efae4  lfs 3, 68(3)
  02efae8  lfs 4, 20(3)
  02efaec  fsubs 1, 1, 2
  02efaf0  fsubs 2, 3, 4
  02efaf4  lis 3, 115
  02efaf8  addic 3, 3, 22784
  02efafc  fabs 3, 1
  02efb00  fabs 4, 2
  02efb04  stfs 1, 180(1)
  02efb08  stfs 2, 184(1)
  02efb0c  stw 25, 144(1)
  02efb10  stw 25, 148(1)
  02efb14  fsubs 1, 3, 4
  02efb18  stfs 1, 188(1)
  02efb1c  lwz 4, 180(1)
  02efb20  lfs 1, 180(1)
  02efb24  lwz 5, 184(1)
  02efb28  lfs 2, 184(1)
  02efb2c  lwz 6, 188(1)
  02efb30  rlwinm 5, 5, 3, 29, 29
  02efb34  lfs 5, 188(1)
  02efb38  fabs 1, 1
  02efb3c  rlwimi 5, 6, 2, 30, 30
  02efb40  fabs 2, 2
  02efb44  fsub 6, 5, 30
  02efb48  fsub 5, 5, 30
  02efb4c  rlwimi 5, 4, 4, 28, 28
  02efb50  ori 4, 3, 0
  02efb54  rlwimi 4, 5, 2, 26, 28
  02efb58  slwi 5, 5, 2
  02efb5c  clrldi 4, 4, 32
  02efb60  fsel 4, 6, 1, 4
  02efb64  lfsx 1, 3, 5
  02efb68  fsel 3, 5, 2, 3
  02efb6c  lfs 2, 4(4)
  02efb70  fcmpu 0, 4, 30
  02efb74  bt 1, 0x2efb7c
  02efb78  b 0x2efc90
  02efb7c  fsubs 5, 3, 4
  02efb80  fadds 3, 3, 4
  02efb84  addic 3, 1, 16
  02efb88  li 7, 2
  02efb8c  addic 4, 3, 220
  02efb90  addic 5, 3, 236
  02efb94  mtctr 7
  02efb98  fdivs 3, 5, 3
  02efb9c  fmuls 4, 3, 3
  02efba0  stfs 3, 248(1)
  02efba4  stfs 3, 240(1)
  02efba8  stfs 3, 244(1)
  02efbac  stfs 3, 236(1)
  02efbb0  lfs 6, 248(1)
  02efbb4  lfs 7, 240(1)
  02efbb8  lfs 8, 244(1)
  02efbbc  fmuls 5, 4, 4
  02efbc0  fmuls 7, 7, 4
  02efbc4  fmuls 6, 6, 5
  02efbc8  fmuls 3, 5, 5
  02efbcc  fmuls 5, 8, 5
  02efbd0  stfs 7, 240(1)
  02efbd4  fmuls 4, 6, 4
  02efbd8  stfs 5, 244(1)
  02efbdc  stfs 4, 248(1)
  02efbe0  lfs 4, 220(3)
  02efbe4  fmuls 4, 4, 3
  02efbe8  stfs 4, 236(3)
  02efbec  lfs 4, 4(4)
  02efbf0  addic 3, 3, 8
  02efbf4  addic 4, 4, 8
  02efbf8  fmuls 4, 4, 3
  02efbfc  stfs 4, 4(5)
  02efc00  addic 5, 5, 8
  02efc04  bdnz 0x2efbe0
  02efc08  li 5, 4
  02efc0c  ori 3, 1, 0
  02efc10  mtctr 5
  02efc14  lis 4, 115
  02efc18  addic 5, 3, 236
  02efc1c  addic 4, 4, 22752
  02efc20  ori 6, 5, 0
  02efc24  lfs 3, 236(3)
  02efc28  lfs 4, 0(4)
  02efc2c  fmuls 3, 3, 4
  02efc30  lfs 4, 4(4)
  02efc34  addic 4, 4, 8
  02efc38  stfs 3, 236(3)
  02efc3c  lfs 3, 4(5)
  02efc40  addic 3, 3, 8
  02efc44  fmuls 3, 3, 4
  02efc48  stfs 3, 4(5)
  02efc4c  addic 5, 5, 8
  02efc50  bdnz 0x2efc24
  02efc54  ori 3, 1, 0
  02efc58  mtctr 7
  02efc5c  lfs 3, 236(3)
  02efc60  lfs 4, 4(6)
  02efc64  fadds 3, 30, 3
  02efc68  lfs 5, 8(6)
  02efc6c  lfs 30, 12(6)
  02efc70  addic 3, 3, 16
  02efc74  addic 6, 6, 16
  02efc78  fadds 3, 3, 4
  02efc7c  fadds 3, 3, 5
  02efc80  fadds 30, 3, 30
  02efc84  bdnz 0x2efc5c
  02efc88  fadds 30, 30, 31
  02efc8c  fmadds 30, 30, 1, 2
  02efc90  lis 3, 47
  02efc94  fmr 1, 30
  02efc98  addi 3, 3, -1612
  02efc9c  lfs 2, 16(3)
  02efca0  bl 0x502578
  02efca4  nop
  02efca8  lwz 3, 160(1)
  02efcac  stfs 1, 152(1)
  02efcb0  addic 4, 1, 144
  02efcb4  slwi 5, 3, 4
  02efcb8  stw 25, 156(1)
  02efcbc  stw 3, 1380(26)
  02efcc0  addc 6, 27, 5
  02efcc4  li 5, 40
  02efcc8  stw 25, 1384(26)
  02efccc  addic 3, 6, 16
  02efcd0  li 6, 0
  02efcd4  clrldi 3, 3, 32
  02efcd8  bl 0xa0c38
  02efcdc  nop
  02efce0  sldi 3, 30, 2
  02efce4  lhz 4, 0(29)
  02efce8  addic 30, 30, 1
  02efcec  addc 3, 1, 3
  02efcf0  extsh 4, 4
  02efcf4  clrldi 3, 3, 32
  02efcf8  cmpwi 4, 0
  02efcfc  extsh 30, 30
  02efd00  addic 29, 29, 2
  02efd04  stw 28, 192(3)
  02efd08  bf 0, 0x2efa20
  02efd0c  ori 30, 25, 0
  02efd10  ori 27, 1, 0
  02efd14  ori 28, 30, 0
  02efd18  lis 4, 162
  02efd1c  lwz 3, 192(27)
  02efd20  li 5, 6
  02efd24  lwz 4, -22436(4)
  02efd28  lwz 29, 120(3)
  02efd2c  lwz 6, 96(29)
  02efd30  slwi 6, 6, 5
  02efd34  addc 4, 4, 6
  02efd38  clrldi 4, 4, 32
  02efd3c  lis 6, 115
  02efd40  lwz 4, 16(4)
  02efd44  stb 5, 32(3)
  02efd48  lfs 1, 128(26)
  02efd4c  lfs 2, 16(31)
  02efd50  lfs 3, 132(26)
  02efd54  lfs 4, 20(31)
  02efd58  fsubs 1, 1, 2
  02efd5c  lis 5, 47
  02efd60  fsubs 2, 3, 4
  02efd64  addi 5, 5, -1612
  02efd68  addic 6, 6, 22784
  02efd6c  fabs 3, 1
  02efd70  fabs 5, 2
  02efd74  stfs 1, 168(1)
  02efd78  stfs 2, 172(1)
  02efd7c  fsubs 1, 3, 5
  02efd80  stfs 1, 176(1)
  02efd84  lwz 7, 168(1)
  02efd88  lfs 4, 4(5)
  02efd8c  lfs 1, 168(1)
  02efd90  lwz 5, 172(1)
  02efd94  lfs 2, 172(1)
  02efd98  fabs 1, 1
  02efd9c  lwz 8, 176(1)
  02efda0  rlwinm 5, 5, 3, 29, 29
  02efda4  fabs 6, 2
  02efda8  lfs 2, 176(1)
  02efdac  rlwimi 5, 8, 2, 30, 30
  02efdb0  fsub 7, 2, 4
  02efdb4  rlwimi 5, 7, 4, 28, 28
  02efdb8  fsub 8, 2, 4
  02efdbc  ori 7, 6, 0
  02efdc0  rlwimi 7, 5, 2, 26, 28
  02efdc4  slwi 5, 5, 2
  02efdc8  clrldi 7, 7, 32
  02efdcc  fsel 5, 7, 1, 5
  02efdd0  lfsx 1, 6, 5
  02efdd4  lfs 2, 4(7)
  02efdd8  fsel 3, 8, 6, 3
  02efddc  fcmpu 0, 5, 4
  02efde0  bt 1, 0x2efde8
  02efde4  b 0x2efefc
  02efde8  fsubs 6, 3, 5
  02efdec  fadds 3, 3, 5
  02efdf0  addic 5, 1, 16
  02efdf4  li 8, 2
  02efdf8  addic 7, 5, 204
  02efdfc  addic 6, 5, 188
  02efe00  mtctr 8
  02efe04  fdivs 3, 6, 3
  02efe08  fmuls 5, 3, 3
  02efe0c  stfs 3, 216(1)
  02efe10  stfs 3, 208(1)
  02efe14  stfs 3, 212(1)
  02efe18  stfs 3, 204(1)
  02efe1c  lfs 7, 216(1)
  02efe20  lfs 8, 208(1)
  02efe24  lfs 9, 212(1)
  02efe28  fmuls 6, 5, 5
  02efe2c  fmuls 8, 8, 5
  02efe30  fmuls 7, 7, 6
  02efe34  fmuls 3, 6, 6
  02efe38  fmuls 6, 9, 6
  02efe3c  stfs 8, 208(1)
  02efe40  fmuls 5, 7, 5
  02efe44  stfs 6, 212(1)
  02efe48  stfs 5, 216(1)
  02efe4c  lfs 5, 188(5)
  02efe50  fmuls 5, 5, 3
  02efe54  stfs 5, 204(5)
  02efe58  lfs 5, 4(6)
  02efe5c  addic 6, 6, 8
  02efe60  fmuls 5, 5, 3
  02efe64  addic 5, 5, 8
  02efe68  stfs 5, 4(7)
  02efe6c  addic 7, 7, 8
  02efe70  bdnz 0x2efe4c
  02efe74  li 7, 4
  02efe78  ori 5, 1, 0
  02efe7c  mtctr 7
  02efe80  lis 6, 115
  02efe84  addic 7, 5, 204
  02efe88  addic 6, 6, 22752
  02efe8c  ori 9, 7, 0
  02efe90  lfs 3, 204(5)
  02efe94  lfs 5, 0(6)
  02efe98  fmuls 3, 3, 5
  02efe9c  lfs 5, 4(6)
  02efea0  addic 6, 6, 8
  02efea4  stfs 3, 204(5)
  02efea8  lfs 3, 4(7)
  02efeac  addic 5, 5, 8
  02efeb0  fmuls 3, 3, 5
  02efeb4  stfs 3, 4(7)
  02efeb8  addic 7, 7, 8
  02efebc  bdnz 0x2efe90
  02efec0  ori 5, 1, 0
  02efec4  mtctr 8
  02efec8  lfs 3, 204(5)
  02efecc  fadds 3, 4, 3
  02efed0  addic 5, 5, 16
  02efed4  lfs 4, 4(9)
  02efed8  lfs 5, 8(9)
  02efedc  lfs 6, 12(9)
  02efee0  addic 9, 9, 16
  02efee4  fadds 3, 3, 4
  02efee8  fadds 4, 3, 5
  02efeec  fadds 4, 4, 6
  02efef0  bdnz 0x2efec8
  02efef4  fadds 4, 4, 31
  02efef8  fmadds 4, 4, 1, 2
  02efefc  ori 5, 3, 0
  02eff00  ori 3, 4, 0
  02eff04  lis 7, 128
  02eff08  addic 8, 5, 16
  02eff0c  addic 6, 29, 104
  02eff10  stfs 4, 72(5)
  02eff14  lwz 4, 1380(26)
  02eff18  addic 5, 29, 100
  02eff1c  stw 4, 100(29)
  02eff20  lfs 1, 1384(26)
  02eff24  ori 4, 8, 0
  02eff28  stfs 1, 104(29)
  02eff2c  lfs 1, -5108(7)
  02eff30  li 8, 0
  02eff34  fneg 1, 1
  02eff38  bl 0x10ce18
  02eff3c  nop
  02eff40  stw 25, 156(29)
  02eff44  stw 25, 152(29)
  02eff48  addic 4, 28, 1
  02eff4c  stw 25, 148(29)
  02eff50  lwz 3, 240(29)
  02eff54  stw 25, 144(29)
  02eff58  stw 28, 248(29)
  02eff5c  cmpwi 3, -1
  02eff60  stw 4, 252(29)
  02eff64  bt 2, 0x2eff7c
  02eff68  extsw 3, 3
  02eff6c  bl 0xda9e8
  02eff70  nop
  02eff74  li 3, -1
  02eff78  stw 3, 240(29)
  02eff7c  addic 30, 30, 1
  02eff80  addic 28, 28, 2
  02eff84  cmpwi 30, 3
  02eff88  addic 27, 27, 4
  02eff8c  bt 0, 0x2efd18
  02eff90  ld 0, 368(1)
  02eff94  mtlr 0
  02eff98  lfd 30, 336(1)
  02eff9c  lfd 31, 344(1)
  02effa0  ld 25, 280(1)
  02effa4  ld 26, 288(1)
  02effa8  ld 27, 296(1)
  02effac  ld 28, 304(1)
  02effb0  ld 29, 312(1)
  02effb4  ld 30, 320(1)
  02effb8  ld 31, 328(1)
  02effbc  addi 1, 1, 352
  02effc0  blr

M1412_002effe0:   # 0x2effe0, 0x5b4 bytes
  02effe0  stdu 1, -448(1)
  02effe4  mflr 0
  02effe8  std 0, 464(1)
  02effec  stfd 16, 320(1)
  02efff0  stfd 17, 328(1)
  02efff4  stfd 18, 336(1)
  02efff8  stfd 19, 344(1)
  02efffc  stfd 20, 352(1)
  02f0000  stfd 21, 360(1)
  02f0004  stfd 22, 368(1)
  02f0008  stfd 23, 376(1)
  02f000c  stfd 24, 384(1)
  02f0010  stfd 25, 392(1)
  02f0014  stfd 26, 400(1)
  02f0018  stfd 27, 408(1)
  02f001c  stfd 28, 416(1)
  02f0020  stfd 29, 424(1)
  02f0024  stfd 30, 432(1)
  02f0028  stfd 31, 440(1)
  02f002c  std 30, 304(1)
  02f0030  std 31, 312(1)
  02f0034  lis 30, 149
  02f0038  lwz 31, 120(3)
  02f003c  addic 30, 30, 5056
  02f0040  lis 3, 47
  02f0044  lfs 3, 324(30)
  02f0048  lfs 30, 228(31)
  02f004c  lfs 31, 224(31)
  02f0050  fsubs 3, 3, 30
  02f0054  lfs 2, 320(30)
  02f0058  lfs 29, 232(31)
  02f005c  fsubs 2, 2, 31
  02f0060  lfs 4, 328(30)
  02f0064  addi 3, 3, -60
  02f0068  fsubs 4, 4, 29
  02f006c  fmuls 1, 3, 3
  02f0070  lfs 24, 4(3)
  02f0074  fmr 20, 24
  02f0078  lfs 25, 0(3)
  02f007c  lfs 28, 332(30)
  02f0080  fmadds 1, 2, 2, 1
  02f0084  fmr 21, 20
  02f0088  fmadds 1, 4, 4, 1
  02f008c  fmr 22, 21
  02f0090  fsqrts 5, 1
  02f0094  std 29, 296(1)
  02f0098  std 28, 288(1)
  02f009c  std 27, 280(1)
  02f00a0  std 26, 272(1)
  02f00a4  std 25, 264(1)
  02f00a8  fcmpu 0, 5, 22
  02f00ac  bt 2, 0x2f00fc
  02f00b0  frsqrte 5, 1
  02f00b4  lis 3, 47
  02f00b8  addi 3, 3, -60
  02f00bc  lfs 6, 8(3)
  02f00c0  fmuls 7, 1, 5
  02f00c4  fmuls 8, 6, 5
  02f00c8  fnmsubs 7, 7, 5, 25
  02f00cc  fmadds 5, 7, 8, 5
  02f00d0  fmuls 7, 1, 5
  02f00d4  fmuls 8, 6, 5
  02f00d8  fnmsubs 7, 7, 5, 25
  02f00dc  fmadds 5, 7, 8, 5
  02f00e0  fmuls 1, 1, 5
  02f00e4  fmuls 6, 6, 5
  02f00e8  fnmsubs 1, 1, 5, 25
  02f00ec  fmadds 20, 1, 6, 5
  02f00f0  fmuls 22, 2, 20
  02f00f4  fmuls 21, 3, 20
  02f00f8  fmuls 20, 4, 20
  02f00fc  lis 29, 151
  02f0100  addic 29, 29, -25376
  02f0104  lis 3, 47
  02f0108  lfs 1, 656(29)
  02f010c  lfs 2, 664(29)
  02f0110  fmuls 3, 1, 20
  02f0114  fmuls 5, 2, 21
  02f0118  lfs 4, 660(29)
  02f011c  fmuls 6, 4, 22
  02f0120  addi 28, 3, -60
  02f0124  fmsubs 2, 2, 22, 3
  02f0128  fmsubs 3, 4, 20, 5
  02f012c  fmsubs 1, 1, 21, 6
  02f0130  lfs 23, 12(28)
  02f0134  fmuls 4, 2, 2
  02f0138  li 3, 11
  02f013c  fmr 19, 28
  02f0140  fmadds 4, 3, 3, 4
  02f0144  fmadds 4, 1, 1, 4
  02f0148  fsqrts 4, 4
  02f014c  fdivs 5, 23, 4
  02f0150  fsub 6, 24, 4
  02f0154  fsub 7, 24, 4
  02f0158  fsub 8, 24, 4
  02f015c  fsub 9, 4, 24
  02f0160  fsub 10, 4, 24
  02f0164  fsub 4, 4, 24
  02f0168  fmuls 3, 3, 5
  02f016c  fmuls 2, 2, 5
  02f0170  fmuls 1, 1, 5
  02f0174  fsel 5, 6, 24, 3
  02f0178  fsel 6, 7, 24, 2
  02f017c  fsel 7, 8, 24, 1
  02f0180  fsel 18, 9, 5, 3
  02f0184  fsel 17, 10, 6, 2
  02f0188  fsel 16, 4, 7, 1
  02f018c  fmuls 26, 21, 18
  02f0190  fmuls 28, 20, 17
  02f0194  fmuls 27, 22, 16
  02f0198  fmsubs 26, 22, 17, 26
  02f019c  fmsubs 28, 21, 16, 28
  02f01a0  fmsubs 27, 20, 18, 27
  02f01a4  bl 0x685c4
  02f01a8  nop
  02f01ac  std 3, 232(1)
  02f01b0  li 4, 2
  02f01b4  li 3, 0
  02f01b8  li 5, 0
  02f01bc  li 6, 1
  02f01c0  li 7, 128
  02f01c4  bl 0x502ea8
  02f01c8  nop
  02f01cc  std 3, 248(1)
  02f01d0  lis 9, 0
  02f01d4  li 3, 0
  02f01d8  li 4, 0
  02f01dc  li 5, 1
  02f01e0  li 6, 1
  02f01e4  li 7, 1
  02f01e8  li 8, 0
  02f01ec  ori 9, 9, 65424
  02f01f0  bl 0x502fd4
  02f01f4  nop
  02f01f8  std 3, 240(1)
  02f01fc  li 3, 1
  02f0200  li 4, 1
  02f0204  li 5, 0
  02f0208  li 6, 0
  02f020c  li 7, 0
  02f0210  li 8, 0
  02f0214  bl 0x502f08
  02f0218  nop
  02f021c  lis 4, -32513
  02f0220  std 3, 224(1)
  02f0224  li 3, 0
  02f0228  ori 4, 4, 65535
  02f022c  lis 5, 16256
  02f0230  lis 27, 128
  02f0234  stw 3, 192(1)
  02f0238  li 26, 4
  02f023c  stw 4, 188(1)
  02f0240  addic 27, 27, -5056
  02f0244  stw 4, 184(1)
  02f0248  mtctr 26
  02f024c  stw 4, 180(1)
  02f0250  stw 4, 176(1)
  02f0254  stw 3, 196(1)
  02f0258  ori 4, 27, 0
  02f025c  stw 3, 200(1)
  02f0260  stw 5, 204(1)
  02f0264  stw 5, 208(1)
  02f0268  stw 3, 212(1)
  02f026c  stw 5, 216(1)
  02f0270  stw 5, 220(1)
  02f0274  lfs 1, 16(28)
  02f0278  addic 28, 1, 112
  02f027c  fmuls 2, 1, 18
  02f0280  ori 3, 28, 0
  02f0284  fmuls 3, 1, 17
  02f0288  fmuls 4, 1, 16
  02f028c  fmuls 5, 1, 19
  02f0290  lfs 6, 0(4)
  02f0294  fmuls 7, 6, 1
  02f0298  stfs 7, 0(3)
  02f029c  lfs 8, 4(4)
  02f02a0  fmuls 9, 8, 1
  02f02a4  fmuls 10, 8, 2
  02f02a8  fmuls 11, 8, 3
  02f02ac  fmuls 8, 8, 4
  02f02b0  fmadds 10, 7, 22, 10
  02f02b4  stfs 9, 4(3)
  02f02b8  fmadds 11, 7, 21, 11
  02f02bc  lfs 9, 8(4)
  02f02c0  fmadds 7, 7, 20, 8
  02f02c4  fmuls 9, 9, 1
  02f02c8  fmadds 8, 9, 28, 10
  02f02cc  fmadds 10, 9, 27, 11
  02f02d0  fmadds 7, 9, 26, 7
  02f02d4  stfs 9, 8(3)
  02f02d8  lfs 9, 12(4)
  02f02dc  addic 4, 4, 16
  02f02e0  fmadds 6, 6, 5, 9
  02f02e4  fmadds 8, 9, 31, 8
  02f02e8  fmadds 10, 9, 30, 10
  02f02ec  fmadds 7, 9, 29, 7
  02f02f0  stfs 6, 12(3)
  02f02f4  stfs 8, 0(3)
  02f02f8  stfs 10, 4(3)
  02f02fc  stfs 7, 8(3)
  02f0300  addic 3, 3, 16
  02f0304  bdnz 0x2f0290
  02f0308  lis 4, 161
  02f030c  addic 3, 1, 112
  02f0310  addic 25, 4, 24396
  02f0314  li 4, 0
  02f0318  li 5, 0
  02f031c  li 7, 9
  02f0320  lwz 6, 28(25)
  02f0324  bl 0x72280
  02f0328  nop
  02f032c  lfs 3, 516(31)
  02f0330  lfs 13, 324(30)
  02f0334  lfs 2, 512(31)
  02f0338  fsubs 13, 13, 3
  02f033c  lfs 12, 320(30)
  02f0340  lfs 4, 520(31)
  02f0344  fsubs 12, 12, 2
  02f0348  lfs 0, 328(30)
  02f034c  fsubs 0, 0, 4
  02f0350  fmr 6, 24
  02f0354  fmuls 1, 13, 13
  02f0358  lfs 5, 524(31)
  02f035c  fmr 7, 6
  02f0360  fmadds 31, 12, 12, 1
  02f0364  lfs 1, 332(30)
  02f0368  lfs 9, 660(29)
  02f036c  lfs 10, 664(29)
  02f0370  lfs 11, 656(29)
  02f0374  lwz 31, 28(25)
  02f0378  fmr 8, 7
  02f037c  fmadds 31, 0, 0, 31
  02f0380  fsqrts 30, 31
  02f0384  fcmpu 0, 30, 8
  02f0388  bt 2, 0x2f03d8
  02f038c  frsqrte 6, 31
  02f0390  lis 3, 47
  02f0394  addi 3, 3, -60
  02f0398  lfs 7, 8(3)
  02f039c  fmuls 8, 31, 6
  02f03a0  fmuls 30, 7, 6
  02f03a4  fnmsubs 8, 8, 6, 25
  02f03a8  fmadds 6, 8, 30, 6
  02f03ac  fmuls 8, 31, 6
  02f03b0  fmuls 30, 7, 6
  02f03b4  fnmsubs 8, 8, 6, 25
  02f03b8  fmadds 6, 8, 30, 6
  02f03bc  fmuls 8, 31, 6
  02f03c0  fmuls 7, 7, 6
  02f03c4  fnmsubs 8, 8, 6, 25
  02f03c8  fmadds 6, 8, 7, 6
  02f03cc  fmuls 8, 12, 6
  02f03d0  fmuls 7, 13, 6
  02f03d4  fmuls 6, 0, 6
  02f03d8  fmuls 12, 11, 6
  02f03dc  fmuls 13, 10, 7
  02f03e0  fmuls 0, 9, 8
  02f03e4  lis 3, 8224
  02f03e8  lis 4, 47
  02f03ec  ori 3, 3, 8447
  02f03f0  addi 4, 4, -60
  02f03f4  fmsubs 12, 10, 8, 12
  02f03f8  fmsubs 9, 9, 6, 13
  02f03fc  fmsubs 11, 11, 7, 0
  02f0400  stw 3, 188(1)
  02f0404  stw 3, 184(1)
  02f0408  stw 3, 180(1)
  02f040c  stw 3, 176(1)
  02f0410  fmuls 10, 12, 12
  02f0414  mtctr 26
  02f0418  fmadds 10, 9, 9, 10
  02f041c  fmadds 10, 11, 11, 10
  02f0420  fsqrts 13, 10
  02f0424  lfs 10, 20(4)
  02f0428  fmuls 0, 10, 1
  02f042c  fdivs 1, 23, 13
  02f0430  fsub 31, 24, 13
  02f0434  fsub 30, 24, 13
  02f0438  fsub 29, 24, 13
  02f043c  fsub 28, 13, 24
  02f0440  fsub 27, 13, 24
  02f0444  fsub 13, 13, 24
  02f0448  fmuls 9, 9, 1
  02f044c  fmuls 12, 12, 1
  02f0450  fmuls 1, 11, 1
  02f0454  fsel 11, 31, 24, 9
  02f0458  fsel 31, 30, 24, 12
  02f045c  fsel 30, 29, 24, 1
  02f0460  fsel 29, 28, 11, 9
  02f0464  fsel 9, 27, 31, 12
  02f0468  fsel 24, 13, 30, 1
  02f046c  fmuls 1, 7, 29
  02f0470  fmuls 31, 6, 9
  02f0474  fmuls 30, 8, 24
  02f0478  fmuls 12, 10, 9
  02f047c  fmuls 13, 10, 24
  02f0480  fmuls 11, 10, 29
  02f0484  fmsubs 9, 8, 9, 1
  02f0488  fmsubs 24, 7, 24, 31
  02f048c  fmsubs 1, 6, 29, 30
  02f0490  lfs 31, 0(27)
  02f0494  fmuls 30, 31, 10
  02f0498  fmuls 31, 31, 0
  02f049c  stfs 30, 0(28)
  02f04a0  lfs 29, 4(27)
  02f04a4  fmuls 28, 29, 10
  02f04a8  fmuls 27, 29, 11
  02f04ac  fmuls 26, 29, 12
  02f04b0  fmuls 29, 29, 13
  02f04b4  stfs 28, 4(28)
  02f04b8  fmadds 26, 30, 7, 26
  02f04bc  fmadds 28, 30, 8, 27
  02f04c0  lfs 27, 8(27)
  02f04c4  fmadds 30, 30, 6, 29
  02f04c8  fmuls 27, 27, 10
  02f04cc  fmadds 29, 27, 24, 28
  02f04d0  fmadds 28, 27, 1, 26
  02f04d4  fmadds 30, 27, 9, 30
  02f04d8  stfs 27, 8(28)
  02f04dc  lfs 27, 12(27)
  02f04e0  addic 27, 27, 16
  02f04e4  fmadds 31, 27, 5, 31
  02f04e8  fmadds 29, 27, 2, 29
  02f04ec  fmadds 28, 27, 3, 28
  02f04f0  fmadds 30, 27, 4, 30
  02f04f4  stfs 31, 12(28)
  02f04f8  stfs 29, 0(28)
  02f04fc  stfs 28, 4(28)
  02f0500  stfs 30, 8(28)
  02f0504  addic 28, 28, 16
  02f0508  bdnz 0x2f0490
  02f050c  addic 3, 1, 112
  02f0510  li 4, 0
  02f0514  li 5, 0
  02f0518  ori 6, 31, 0
  02f051c  li 7, 9
  02f0520  bl 0x72280
  02f0524  nop
  02f0528  ld 0, 464(1)
  02f052c  mtlr 0
  02f0530  lfd 16, 320(1)
  02f0534  lfd 17, 328(1)
  02f0538  lfd 18, 336(1)
  02f053c  lfd 19, 344(1)
  02f0540  lfd 20, 352(1)
  02f0544  lfd 21, 360(1)
  02f0548  lfd 22, 368(1)
  02f054c  lfd 23, 376(1)
  02f0550  lfd 24, 384(1)
  02f0554  lfd 25, 392(1)
  02f0558  lfd 26, 400(1)
  02f055c  lfd 27, 408(1)
  02f0560  lfd 28, 416(1)
  02f0564  lfd 29, 424(1)
  02f0568  lfd 30, 432(1)
  02f056c  lfd 31, 440(1)
  02f0570  ld 25, 264(1)
  02f0574  ld 26, 272(1)
  02f0578  ld 27, 280(1)
  02f057c  ld 28, 288(1)
  02f0580  ld 29, 296(1)
  02f0584  ld 30, 304(1)
  02f0588  ld 31, 312(1)
  02f058c  addi 1, 1, 448
  02f0590  blr

M1412_002f0594:   # 0x2f0594, 0x14 bytes
  02f0594  lis 3, 128
  02f0598  lis 4, 1
  02f059c  addic 3, 3, -4988
  02f05a0  stw 4, 72(3)
  02f05a4  blr

M1412_002f05c0:   # 0x2f05c0, 0x294 bytes
  02f05c0  stdu 1, -176(1)
  02f05c4  mflr 0
  02f05c8  std 0, 192(1)
  02f05cc  stfd 30, 160(1)
  02f05d0  stfd 31, 168(1)
  02f05d4  std 27, 120(1)
  02f05d8  ori 27, 3, 0
  02f05dc  li 3, 1412
  02f05e0  std 31, 152(1)
  02f05e4  fmr 31, 1
  02f05e8  std 29, 136(1)
  02f05ec  std 28, 128(1)
  02f05f0  ori 31, 7, 0
  02f05f4  ori 29, 5, 0
  02f05f8  std 30, 144(1)
  02f05fc  ori 28, 4, 0
  02f0600  bl 0xefa28
  02f0604  nop
  02f0608  ori 30, 3, 0
  02f060c  cmpwi 30, 0
  02f0610  bt 2, 0x2f0824
  02f0614  li 3, 255
  02f0618  li 4, 1
  02f061c  li 5, 2
  02f0620  li 6, 0
  02f0624  stb 3, 48(30)
  02f0628  lhz 7, 50(27)
  02f062c  stb 4, 49(30)
  02f0630  ori 3, 31, 0
  02f0634  stb 5, 32(30)
  02f0638  stb 6, 188(30)
  02f063c  stb 6, 114(30)
  02f0640  lis 5, 47
  02f0644  lfs 1, 0(28)
  02f0648  lwz 31, 120(30)
  02f064c  stfs 1, 16(30)
  02f0650  lfs 1, 4(28)
  02f0654  vspltisw 3, -1
  02f0658  stfs 1, 20(30)
  02f065c  lfs 1, 8(28)
  02f0660  stfs 1, 24(30)
  02f0664  lfs 1, 12(28)
  02f0668  sth 7, 50(30)
  02f066c  stfs 1, 28(30)
  02f0670  addi 28, 5, 1448
  02f0674  lfs 1, 0(29)
  02f0678  lis 7, 114
  02f067c  li 5, -3056
  02f0680  vslw 3, 3, 3
  02f0684  stfs 1, 0(31)
  02f0688  lfs 1, 4(29)
  02f068c  stfs 1, 4(31)
  02f0690  lfs 1, 8(29)
  02f0694  stfs 1, 8(31)
  02f0698  lfs 1, 12(29)
  02f069c  stw 27, 72(31)
  02f06a0  stfs 1, 12(31)
  02f06a4  stfs 31, 44(30)
  02f06a8  stw 4, 64(31)
  02f06ac  <unknown>
  02f06b0  li 4, 76
  02f06b4  <unknown>
  02f06b8  vspltw 2, 2, 0
  02f06bc  vmaddfp 2, 4, 2, 3
  02f06c0  vctsxs 2, 2, 0
  02f06c4  vsplth 2, 2, 1
  02f06c8  stvehx 2, 4, 31
  02f06cc  sth 3, 78(31)
  02f06d0  stw 6, 148(30)
  02f06d4  lfs 1, 4(28)
  02f06d8  lfs 2, 8(28)
  02f06dc  bl 0xfcbe8
  02f06e0  nop
  02f06e4  lfs 31, 12(28)
  02f06e8  lis 3, 114
  02f06ec  fmuls 1, 1, 31
  02f06f0  lfs 30, -3052(3)
  02f06f4  fmuls 30, 1, 30
  02f06f8  bl 0x5c8318
  02f06fc  nop
  02f0700  lis 4, 21845
  02f0704  ori 4, 4, 21846
  02f0708  mulhw 4, 4, 3
  02f070c  srwi 5, 4, 31
  02f0710  addc 4, 4, 5
  02f0714  addc 5, 4, 4
  02f0718  addc 27, 4, 5
  02f071c  subc 27, 3, 27
  02f0720  cmpwi 27, 0
  02f0724  bt 1, 0x2f0734
  02f0728  cmpwi 27, -1
  02f072c  bf 1, 0x2f075c
  02f0730  b 0x2f0748
  02f0734  cmpwi 27, 1
  02f0738  bf 1, 0x2f0750
  02f073c  cmpwi 27, 2
  02f0740  bf 1, 0x2f0758
  02f0744  b 0x2f075c
  02f0748  stfs 30, 48(31)
  02f074c  b 0x2f075c
  02f0750  stfs 30, 52(31)
  02f0754  b 0x2f075c
  02f0758  stfs 30, 56(31)
  02f075c  lis 3, 47
  02f0760  addi 3, 3, 1448
  02f0764  lfs 1, 16(3)
  02f0768  lfs 2, 20(3)
  02f076c  bl 0xfcbe8
  02f0770  nop
  02f0774  fmuls 31, 1, 31
  02f0778  lis 3, 114
  02f077c  lfs 1, -3052(3)
  02f0780  fmuls 31, 31, 1
  02f0784  bl 0x5c8318
  02f0788  nop
  02f078c  lis 4, 21845
  02f0790  ori 4, 4, 21846
  02f0794  mulhw 4, 4, 3
  02f0798  srwi 5, 4, 31
  02f079c  addc 4, 4, 5
  02f07a0  addc 5, 4, 4
  02f07a4  addc 4, 4, 5
  02f07a8  subc 3, 3, 4
  02f07ac  cmpwi 3, 0
  02f07b0  bt 1, 0x2f07c0
  02f07b4  cmpwi 3, -1
  02f07b8  bf 1, 0x2f07e8
  02f07bc  b 0x2f07d4
  02f07c0  cmpwi 3, 1
  02f07c4  bf 1, 0x2f07dc
  02f07c8  cmpwi 3, 2
  02f07cc  bf 1, 0x2f07e4
  02f07d0  b 0x2f07e8
  02f07d4  stfs 31, 48(31)
  02f07d8  b 0x2f07e8
  02f07dc  stfs 31, 52(31)
  02f07e0  b 0x2f07e8
  02f07e4  stfs 31, 56(31)
  02f07e8  bl 0xfcc68
  02f07ec  nop
  02f07f0  stfs 1, 64(30)
  02f07f4  bl 0xfcc68
  02f07f8  nop
  02f07fc  stfs 1, 68(30)
  02f0800  bl 0xfcc68
  02f0804  nop
  02f0808  ori 3, 30, 0
  02f080c  stfs 1, 72(30)
  02f0810  bl 0xf31a8
  02f0814  nop
  02f0818  ori 3, 30, 0
  02f081c  bl 0x10c000
  02f0820  nop
  02f0824  ori 3, 30, 0
  02f0828  ld 0, 192(1)
  02f082c  mtlr 0
  02f0830  lfd 30, 160(1)
  02f0834  lfd 31, 168(1)
  02f0838  ld 27, 120(1)
  02f083c  ld 28, 128(1)
  02f0840  ld 29, 136(1)
  02f0844  ld 30, 144(1)
  02f0848  ld 31, 152(1)
  02f084c  addi 1, 1, 176
  02f0850  blr

M1412_002f0898:   # 0x2f0898, 0x428 bytes
  02f0898  stdu 1, -352(1)
  02f089c  mflr 0
  02f08a0  std 0, 368(1)
  02f08a4  stfd 22, 272(1)
  02f08a8  stfd 23, 280(1)
  02f08ac  stfd 24, 288(1)
  02f08b0  stfd 25, 296(1)
  02f08b4  stfd 26, 304(1)
  02f08b8  stfd 27, 312(1)
  02f08bc  stfd 28, 320(1)
  02f08c0  stfd 29, 328(1)
  02f08c4  stfd 30, 336(1)
  02f08c8  stfd 31, 344(1)
  02f08cc  std 30, 256(1)
  02f08d0  ori 30, 3, 0
  02f08d4  lis 3, 151
  02f08d8  fmr 29, 1
  02f08dc  addic 3, 3, -25376
  02f08e0  lfs 2, 20(30)
  02f08e4  lfs 3, 16(30)
  02f08e8  lfs 4, 132(3)
  02f08ec  lfs 5, 128(3)
  02f08f0  fsubs 2, 2, 4
  02f08f4  fsubs 3, 3, 5
  02f08f8  lfs 4, 24(30)
  02f08fc  lfs 5, 136(3)
  02f0900  fsubs 4, 4, 5
  02f0904  std 31, 264(1)
  02f0908  lis 3, 47
  02f090c  ori 31, 4, 0
  02f0910  fmuls 2, 2, 2
  02f0914  addi 3, 3, 2132
  02f0918  li 4, 0
  02f091c  ori 5, 30, 0
  02f0920  lfs 30, 0(3)
  02f0924  fmadds 2, 3, 3, 2
  02f0928  fmuls 26, 29, 30
  02f092c  fmadds 1, 4, 4, 2
  02f0930  lfs 2, 4(3)
  02f0934  lfs 3, 8(3)
  02f0938  fmuls 28, 29, 2
  02f093c  lfs 31, 12(3)
  02f0940  li 3, 0
  02f0944  fsqrts 1, 1
  02f0948  fsub 27, 3, 1
  02f094c  fsub 1, 3, 1
  02f0950  fsel 27, 27, 26, 31
  02f0954  std 29, 248(1)
  02f0958  std 28, 240(1)
  02f095c  std 27, 232(1)
  02f0960  std 26, 224(1)
  02f0964  fsel 28, 1, 28, 31
  02f0968  bl 0x15d12c
  02f096c  nop
  02f0970  lhz 3, 76(31)
  02f0974  cmpwi 3, 0
  02f0978  bf 2, 0x2f0a28
  02f097c  lis 3, 115
  02f0980  fmr 1, 26
  02f0984  addic 29, 3, 20672
  02f0988  bl 0x502758
  02f098c  nop
  02f0990  lis 4, 47
  02f0994  ori 27, 3, 0
  02f0998  addi 28, 4, 2132
  02f099c  lfs 1, 16(28)
  02f09a0  fmuls 1, 29, 1
  02f09a4  bl 0x502758
  02f09a8  nop
  02f09ac  lfs 1, 20(28)
  02f09b0  ori 26, 3, 0
  02f09b4  fmuls 1, 29, 1
  02f09b8  bl 0x502758
  02f09bc  nop
  02f09c0  lfs 3, 24(28)
  02f09c4  li 11, -1
  02f09c8  lfs 4, 28(28)
  02f09cc  li 6, 0
  02f09d0  lfs 7, 40(28)
  02f09d4  li 7, 1
  02f09d8  lfs 5, 32(28)
  02f09dc  ori 10, 3, 0
  02f09e0  lfs 6, 36(28)
  02f09e4  ori 3, 30, 0
  02f09e8  std 11, 144(1)
  02f09ec  ori 4, 29, 0
  02f09f0  std 6, 160(1)
  02f09f4  fmr 1, 28
  02f09f8  std 7, 168(1)
  02f09fc  li 5, 0
  02f0a00  std 11, 176(1)
  02f0a04  fmr 2, 27
  02f0a08  ori 8, 27, 0
  02f0a0c  fmuls 3, 29, 3
  02f0a10  fmuls 4, 29, 4
  02f0a14  ori 9, 26, 0
  02f0a18  fmuls 7, 29, 7
  02f0a1c  std 6, 184(1)
  02f0a20  bl 0x10e030
  02f0a24  nop
  02f0a28  li 3, 0
  02f0a2c  stb 3, 114(30)
  02f0a30  lhz 3, 78(31)
  02f0a34  extsh 3, 3
  02f0a38  cmpwi 3, 0
  02f0a3c  bf 1, 0x2f0c2c
  02f0a40  lis 3, 47
  02f0a44  li 29, 0
  02f0a48  addi 3, 3, 2132
  02f0a4c  lfs 25, 44(3)
  02f0a50  lfs 26, 48(3)
  02f0a54  lfs 27, 52(3)
  02f0a58  lfs 28, 56(3)
  02f0a5c  lfs 29, 60(3)
  02f0a60  li 3, 1
  02f0a64  li 4, 2
  02f0a68  bl 0xfe484
  02f0a6c  nop
  02f0a70  cmpw 29, 3
  02f0a74  bf 0, 0x2f0be4
  02f0a78  fmr 1, 25
  02f0a7c  fmr 2, 26
  02f0a80  bl 0xfcbe8
  02f0a84  nop
  02f0a88  lis 4, 114
  02f0a8c  lfs 2, 44(30)
  02f0a90  addic 28, 1, 192
  02f0a94  fmuls 24, 2, 1
  02f0a98  ori 3, 28, 0
  02f0a9c  lfs 2, -3052(4)
  02f0aa0  fmuls 1, 2, 27
  02f0aa4  fmuls 2, 2, 30
  02f0aa8  bl 0xfea60
  02f0aac  nop
  02f0ab0  lfs 1, 4(31)
  02f0ab4  lfs 2, 0(31)
  02f0ab8  fmuls 1, 1, 26
  02f0abc  lfs 3, 196(1)
  02f0ac0  fmuls 2, 2, 26
  02f0ac4  lfs 4, 8(31)
  02f0ac8  lfs 5, 192(1)
  02f0acc  fmuls 4, 4, 26
  02f0ad0  lfs 6, 200(1)
  02f0ad4  fadds 3, 3, 1
  02f0ad8  fadds 5, 5, 2
  02f0adc  fadds 6, 6, 4
  02f0ae0  fmuls 7, 3, 3
  02f0ae4  stfs 2, 0(31)
  02f0ae8  stfs 1, 4(31)
  02f0aec  stfs 4, 8(31)
  02f0af0  lfs 2, 16(30)
  02f0af4  fmadds 7, 5, 5, 7
  02f0af8  lfs 4, 20(30)
  02f0afc  addic 4, 1, 208
  02f0b00  lfs 8, 24(30)
  02f0b04  ori 3, 30, 0
  02f0b08  stfs 5, 192(1)
  02f0b0c  ori 5, 28, 0
  02f0b10  fmadds 7, 6, 6, 7
  02f0b14  stfs 3, 196(1)
  02f0b18  stfs 6, 200(1)
  02f0b1c  lfs 1, 204(1)
  02f0b20  lhz 6, 78(31)
  02f0b24  fsqrts 7, 7
  02f0b28  stfs 1, 220(1)
  02f0b2c  extsh 7, 6
  02f0b30  addic 7, 7, -1
  02f0b34  fmr 1, 24
  02f0b38  fdivs 9, 28, 7
  02f0b3c  fsub 10, 31, 7
  02f0b40  fsub 11, 31, 7
  02f0b44  fsub 12, 31, 7
  02f0b48  fsub 13, 7, 31
  02f0b4c  fsub 0, 7, 31
  02f0b50  fsub 7, 7, 31
  02f0b54  fmuls 23, 6, 9
  02f0b58  fmuls 22, 3, 9
  02f0b5c  fmuls 9, 5, 9
  02f0b60  fsel 10, 10, 31, 23
  02f0b64  fsel 11, 11, 31, 22
  02f0b68  fsel 12, 12, 31, 9
  02f0b6c  fsel 10, 13, 10, 23
  02f0b70  fsel 11, 0, 11, 22
  02f0b74  fsel 7, 7, 12, 9
  02f0b78  fadds 8, 10, 8
  02f0b7c  fadds 4, 11, 4
  02f0b80  fadds 2, 7, 2
  02f0b84  fadds 6, 8, 6
  02f0b88  fadds 3, 4, 3
  02f0b8c  fadds 2, 2, 5
  02f0b90  stfs 6, 216(1)
  02f0b94  stfs 3, 212(1)
  02f0b98  stfs 2, 208(1)
  02f0b9c  bl 0x2f05c0
  02f0ba0  lfs 1, 44(30)
  02f0ba4  lhz 3, 78(31)
  02f0ba8  fsubs 1, 1, 24
  02f0bac  addic 3, 3, -1
  02f0bb0  clrlwi 4, 3, 16
  02f0bb4  sth 3, 78(31)
  02f0bb8  cmpwi 4, 0
  02f0bbc  stfs 1, 44(30)
  02f0bc0  bt 2, 0x2f0be4
  02f0bc4  lwz 3, 36(30)
  02f0bc8  lfs 2, 36(3)
  02f0bcc  fdivs 1, 1, 2
  02f0bd0  fcmpu 0, 1, 29
  02f0bd4  cror 6, 0, 2
  02f0bd8  bt 6, 0x2f0be4
  02f0bdc  addic 29, 29, 1
  02f0be0  b 0x2f0a60
  02f0be4  lis 3, 47
  02f0be8  vspltisw 2, -1
  02f0bec  li 4, 0
  02f0bf0  addi 3, 3, 2132
  02f0bf4  li 6, 64
  02f0bf8  lis 5, 114
  02f0bfc  stw 4, 148(30)
  02f0c00  li 4, -3056
  02f0c04  vslw 2, 2, 2
  02f0c08  <unknown>
  02f0c0c  li 3, 76
  02f0c10  vspltw 3, 3, 0
  02f0c14  <unknown>
  02f0c18  vmaddfp 2, 4, 3, 2
  02f0c1c  vctsxs 2, 2, 0
  02f0c20  vsplth 2, 2, 1
  02f0c24  stvehx 2, 3, 31
  02f0c28  b 0x2f0c70
  02f0c2c  lwz 3, 64(31)
  02f0c30  cmpwi 3, 0
  02f0c34  bf 2, 0x2f0c64
  02f0c38  li 3, 0
  02f0c3c  li 4, 4
  02f0c40  lhz 5, 52(30)
  02f0c44  ori 5, 5, 1
  02f0c48  stb 3, 49(30)
  02f0c4c  stw 3, 148(30)
  02f0c50  stb 4, 32(30)
  02f0c54  lfs 1, 44(31)
  02f0c58  sth 5, 52(30)
  02f0c5c  stfs 1, 44(30)
  02f0c60  b 0x2f0c70
  02f0c64  ori 3, 30, 0
  02f0c68  bl 0xefb38
  02f0c6c  nop
  02f0c70  ld 0, 368(1)
  02f0c74  mtlr 0
  02f0c78  lfd 22, 272(1)
  02f0c7c  lfd 23, 280(1)
  02f0c80  lfd 24, 288(1)
  02f0c84  lfd 25, 296(1)
  02f0c88  lfd 26, 304(1)
  02f0c8c  lfd 27, 312(1)
  02f0c90  lfd 28, 320(1)
  02f0c94  lfd 29, 328(1)
  02f0c98  lfd 30, 336(1)
  02f0c9c  lfd 31, 344(1)
  02f0ca0  ld 26, 224(1)
  02f0ca4  ld 27, 232(1)
  02f0ca8  ld 28, 240(1)
  02f0cac  ld 29, 248(1)
  02f0cb0  ld 30, 256(1)
  02f0cb4  ld 31, 264(1)
  02f0cb8  addi 1, 1, 352
  02f0cbc  blr

UpdateMoby_212:   # 0x2f0cf8, 0x92c bytes
  02f0cf8  stdu 1, -176(1)
  02f0cfc  mflr 0
  02f0d00  std 0, 192(1)
  02f0d04  stfd 30, 160(1)
  02f0d08  stfd 31, 168(1)
  02f0d0c  std 31, 152(1)
  02f0d10  lis 4, 151
  02f0d14  ori 31, 3, 0
  02f0d18  addic 3, 4, -25376
  02f0d1c  lfs 2, 20(31)
  02f0d20  lfs 3, 132(3)
  02f0d24  lfs 1, 16(31)
  02f0d28  fsubs 2, 2, 3
  02f0d2c  lfs 3, 128(3)
  02f0d30  lfs 4, 24(31)
  02f0d34  fsubs 3, 1, 3
  02f0d38  std 30, 144(1)
  02f0d3c  lfs 5, 136(3)
  02f0d40  lwz 30, 120(31)
  02f0d44  fsubs 4, 4, 5
  02f0d48  lbz 4, 32(31)
  02f0d4c  cmpwi 4, 4
  02f0d50  fmuls 2, 2, 2
  02f0d54  cmpwi 1, 4, 3
  02f0d58  cmpwi 6, 4, 2
  02f0d5c  cmpwi 7, 4, 1
  02f0d60  fmadds 2, 3, 3, 2
  02f0d64  fmadds 31, 4, 4, 2
  02f0d68  std 29, 136(1)
  02f0d6c  fsqrts 31, 31
  02f0d70  bt 2, 0x2f146c
  02f0d74  bt 6, 0x2f1204
  02f0d78  bt 26, 0x2f0f04
  02f0d7c  bt 30, 0x2f0e28
  02f0d80  cmpwi 4, 0
  02f0d84  bf 2, 0x2f14e4
  02f0d88  stfs 1, 16(30)
  02f0d8c  lis 3, 16800
  02f0d90  lfs 1, 20(31)
  02f0d94  li 4, 3
  02f0d98  stfs 1, 20(30)
  02f0d9c  lfs 1, 24(31)
  02f0da0  stw 3, 28(30)
  02f0da4  stfs 1, 24(30)
  02f0da8  li 3, 2
  02f0dac  lfs 1, 192(31)
  02f0db0  stfs 1, 32(30)
  02f0db4  lfs 1, 196(31)
  02f0db8  stfs 1, 36(30)
  02f0dbc  lfs 1, 200(31)
  02f0dc0  stfs 1, 40(30)
  02f0dc4  lfs 1, 204(31)
  02f0dc8  stfs 1, 44(30)
  02f0dcc  lfs 1, 44(31)
  02f0dd0  stfs 1, 44(30)
  02f0dd4  bl 0xfe484
  02f0dd8  nop
  02f0ddc  sth 3, 78(30)
  02f0de0  lwz 3, 36(31)
  02f0de4  lwz 4, 44(31)
  02f0de8  srawi 5, 4, 31
  02f0dec  lwz 3, 36(3)
  02f0df0  srwi 6, 5, 1
  02f0df4  srawi 7, 3, 31
  02f0df8  xor 4, 6, 4
  02f0dfc  srwi 6, 7, 1
  02f0e00  subc 4, 4, 5
  02f0e04  xor 3, 6, 3
  02f0e08  subc 3, 3, 7
  02f0e0c  cmpw 4, 3
  02f0e10  bf 0, 0x2f0e1c
  02f0e14  li 3, 0
  02f0e18  stb 3, 114(31)
  02f0e1c  li 3, 3
  02f0e20  stb 3, 32(31)
  02f0e24  b 0x2f14e4
  02f0e28  lwz 4, 8324(3)
  02f0e2c  cmpwi 4, 50
  02f0e30  bf 2, 0x2f14e4
  02f0e34  lwz 3, 5616(3)
  02f0e38  cmpwi 3, 0
  02f0e3c  bt 2, 0x2f14e4
  02f0e40  lhz 3, 166(3)
  02f0e44  cmpwi 3, 69
  02f0e48  bf 2, 0x2f14e4
  02f0e4c  lbz 3, 49(31)
  02f0e50  cmpwi 3, 0
  02f0e54  bf 2, 0x2f0e70
  02f0e58  lis 3, 47
  02f0e5c  addi 3, 3, 3264
  02f0e60  lfs 1, 0(3)
  02f0e64  fcmpu 0, 31, 1
  02f0e68  cror 6, 1, 2
  02f0e6c  bt 6, 0x2f14e4
  02f0e70  lis 3, 47
  02f0e74  addi 29, 3, 3264
  02f0e78  lfs 1, 4(29)
  02f0e7c  lfs 2, 8(29)
  02f0e80  bl 0xfcbe8
  02f0e84  nop
  02f0e88  lfs 2, 36(30)
  02f0e8c  lfs 3, 32(30)
  02f0e90  fmuls 5, 2, 2
  02f0e94  lfs 4, 40(30)
  02f0e98  lis 3, 114
  02f0e9c  lfs 9, 12(29)
  02f0ea0  lfs 7, -3052(3)
  02f0ea4  fmadds 5, 3, 3, 5
  02f0ea8  fmuls 6, 1, 7
  02f0eac  fmr 1, 9
  02f0eb0  fmadds 5, 4, 4, 5
  02f0eb4  fsqrts 5, 5
  02f0eb8  fcmpu 0, 5, 1
  02f0ebc  bf 2, 0x2f0ed0
  02f0ec0  fmr 3, 1
  02f0ec4  lfs 4, 44(30)
  02f0ec8  fmr 2, 3
  02f0ecc  b 0x2f0ee8
  02f0ed0  fdivs 5, 6, 5
  02f0ed4  lfs 6, 44(30)
  02f0ed8  fmuls 1, 3, 5
  02f0edc  fmuls 3, 4, 5
  02f0ee0  fmuls 2, 2, 5
  02f0ee4  fmr 4, 6
  02f0ee8  li 3, 2
  02f0eec  stfs 1, 0(30)
  02f0ef0  stfs 2, 4(30)
  02f0ef4  stfs 3, 8(30)
  02f0ef8  stfs 4, 12(30)
  02f0efc  stb 3, 32(31)
  02f0f00  b 0x2f14e4
  02f0f04  addic 3, 30, 76
  02f0f08  bl 0x4fffb4
  02f0f0c  nop
  02f0f10  lfs 1, 16(31)
  02f0f14  lfs 2, 0(30)
  02f0f18  fadds 1, 1, 2
  02f0f1c  lfs 2, 20(31)
  02f0f20  lfs 3, 24(31)
  02f0f24  lbz 3, 49(31)
  02f0f28  cmpwi 3, 0
  02f0f2c  stfs 1, 16(31)
  02f0f30  lfs 1, 4(30)
  02f0f34  fadds 1, 2, 1
  02f0f38  stfs 1, 20(31)
  02f0f3c  lfs 1, 8(30)
  02f0f40  fadds 1, 3, 1
  02f0f44  stfs 1, 24(31)
  02f0f48  bf 2, 0x2f0f64
  02f0f4c  lis 3, 47
  02f0f50  addi 3, 3, 3264
  02f0f54  lfs 1, 0(3)
  02f0f58  fcmpu 0, 31, 1
  02f0f5c  cror 6, 1, 2
  02f0f60  bt 6, 0x2f11a8
  02f0f64  lwz 3, 64(30)
  02f0f68  cmpwi 3, 0
  02f0f6c  bf 2, 0x2f0f94
  02f0f70  lis 4, 47
  02f0f74  lis 3, 114
  02f0f78  li 5, -3056
  02f0f7c  addi 4, 4, 3264
  02f0f80  li 6, 16
  02f0f84  <unknown>
  02f0f88  <unknown>
  02f0f8c  vspltw 3, 3, 0
  02f0f90  b 0x2f0fb4
  02f0f94  lis 5, 47
  02f0f98  lis 3, 114
  02f0f9c  li 6, -3056
  02f0fa0  li 4, 20
  02f0fa4  addi 5, 5, 3264
  02f0fa8  <unknown>
  02f0fac  <unknown>
  02f0fb0  vspltw 3, 3, 0
  02f0fb4  vspltisw 4, -1
  02f0fb8  li 3, 68
  02f0fbc  vspltw 2, 2, 0
  02f0fc0  lhz 4, 76(30)
  02f0fc4  vslw 4, 4, 4
  02f0fc8  cmpwi 4, 0
  02f0fcc  vmaddfp 2, 2, 3, 4
  02f0fd0  vctsxs 2, 2, 0
  02f0fd4  stvewx 2, 3, 30
  02f0fd8  bf 2, 0x2f14e4
  02f0fdc  lis 3, 164
  02f0fe0  lwz 5, 36(31)
  02f0fe4  lis 4, 161
  02f0fe8  lwz 3, -28512(3)
  02f0fec  lwz 4, 1808(4)
  02f0ff0  subc 3, 31, 3
  02f0ff4  lfs 31, 44(31)
  02f0ff8  srawi 3, 3, 8
  02f0ffc  lwz 6, 16(5)
  02f1000  addze 3, 3
  02f1004  stw 6, 148(31)
  02f1008  xor 3, 4, 3
  02f100c  lfs 1, 36(5)
  02f1010  clrlwi 3, 3, 31
  02f1014  fdivs 31, 31, 1
  02f1018  cmpwi 3, 0
  02f101c  bf 2, 0x2f10c4
  02f1020  lis 3, 47
  02f1024  li 5, 0
  02f1028  addi 4, 3, 3264
  02f102c  addic 3, 31, 16
  02f1030  ori 6, 31, 0
  02f1034  lfs 1, 24(4)
  02f1038  fmuls 1, 31, 1
  02f103c  bl 0x59e20
  02f1040  nop
  02f1044  cmpwi 3, 0
  02f1048  bt 2, 0x2f10c4
  02f104c  lis 29, 161
  02f1050  lwz 3, 72(30)
  02f1054  addic 29, 29, 2368
  02f1058  lwz 4, 24(29)
  02f105c  cmpw 4, 3
  02f1060  bt 2, 0x2f14e4
  02f1064  addic 5, 29, 64
  02f1068  ori 3, 30, 0
  02f106c  ori 4, 30, 0
  02f1070  bl 0x500608
  02f1074  nop
  02f1078  lfs 1, 48(29)
  02f107c  stfs 1, 16(31)
  02f1080  lfs 1, 52(29)
  02f1084  stfs 1, 20(31)
  02f1088  lfs 1, 56(29)
  02f108c  stfs 1, 24(31)
  02f1090  lfs 1, 60(29)
  02f1094  lwz 29, 24(29)
  02f1098  stfs 1, 28(31)
  02f109c  cmpwi 29, 0
  02f10a0  bt 2, 0x2f10b0
  02f10a4  lhz 3, 166(29)
  02f10a8  cmpwi 3, 212
  02f10ac  bt 2, 0x2f14e4
  02f10b0  ori 3, 31, 0
  02f10b4  fmr 1, 31
  02f10b8  ori 4, 30, 0
  02f10bc  bl 0x2f0898
  02f10c0  b 0x2f14e4
  02f10c4  ori 3, 31, 0
  02f10c8  lis 4, 51
  02f10cc  li 5, 0
  02f10d0  bl 0x10675c
  02f10d4  nop
  02f10d8  cmpwi 3, 0
  02f10dc  bt 2, 0x2f119c
  02f10e0  lwz 4, 32(3)
  02f10e4  lhz 4, 166(4)
  02f10e8  cmpwi 4, 212
  02f10ec  bt 2, 0x2f119c
  02f10f0  lfs 3, 20(3)
  02f10f4  lfs 1, 16(3)
  02f10f8  fmuls 4, 3, 3
  02f10fc  lfs 2, 24(3)
  02f1100  lis 4, 47
  02f1104  addi 4, 4, 3264
  02f1108  fmadds 4, 1, 1, 4
  02f110c  lfs 5, 28(4)
  02f1110  lis 4, 114
  02f1114  lfs 6, -3052(4)
  02f1118  lfs 7, 44(31)
  02f111c  fmadds 4, 2, 2, 4
  02f1120  fmuls 5, 6, 5
  02f1124  lwz 4, 36(31)
  02f1128  lfs 6, 36(4)
  02f112c  fsqrts 4, 4
  02f1130  fdivs 6, 7, 6
  02f1134  fcmpu 0, 5, 4
  02f1138  cror 6, 1, 2
  02f113c  bt 6, 0x2f115c
  02f1140  fdivs 4, 5, 4
  02f1144  fmuls 1, 1, 4
  02f1148  fmuls 3, 3, 4
  02f114c  fmuls 2, 2, 4
  02f1150  stfs 1, 16(3)
  02f1154  stfs 3, 20(3)
  02f1158  stfs 2, 24(3)
  02f115c  lfs 2, 0(30)
  02f1160  ori 5, 3, 0
  02f1164  lfs 3, 4(30)
  02f1168  fadds 2, 2, 1
  02f116c  lfs 4, 8(30)
  02f1170  ori 3, 31, 0
  02f1174  fmr 1, 6
  02f1178  ori 4, 30, 0
  02f117c  stfs 2, 0(30)
  02f1180  lfs 2, 20(5)
  02f1184  fadds 2, 3, 2
  02f1188  stfs 2, 4(30)
  02f118c  lfs 2, 24(5)
  02f1190  fadds 2, 4, 2
  02f1194  stfs 2, 8(30)
  02f1198  bl 0x2f0898
  02f119c  li 3, 255
  02f11a0  stb 3, 164(31)
  02f11a4  b 0x2f14e4
  02f11a8  addic 3, 30, 68
  02f11ac  bl 0x4fff60
  02f11b0  nop
  02f11b4  cmpwi 3, 0
  02f11b8  bt 2, 0x2f14e4
  02f11bc  lwz 3, 64(30)
  02f11c0  cmpwi 3, 1
  02f11c4  bf 2, 0x2f11d8
  02f11c8  ori 3, 31, 0
  02f11cc  bl 0xefb38
  02f11d0  nop
  02f11d4  b 0x2f1600
  02f11d8  li 3, 0
  02f11dc  lhz 5, 52(31)
  02f11e0  li 4, 4
  02f11e4  stb 3, 49(31)
  02f11e8  stw 3, 148(31)
  02f11ec  ori 3, 5, 1
  02f11f0  stb 4, 32(31)
  02f11f4  lfs 1, 44(30)
  02f11f8  sth 3, 52(31)
  02f11fc  stfs 1, 44(31)
  02f1200  b 0x2f14e4
  02f1204  lfs 1, 16(30)
  02f1208  li 3, 0
  02f120c  stfs 1, 16(31)
  02f1210  lfs 1, 20(30)
  02f1214  li 4, 49
  02f1218  li 6, 50
  02f121c  stfs 1, 20(31)
  02f1220  lfs 1, 24(30)
  02f1224  li 7, 51
  02f1228  li 5, 53
  02f122c  stfs 1, 24(31)
  02f1230  lfs 1, 28(30)
  02f1234  li 8, 54
  02f1238  li 9, 59
  02f123c  stfs 1, 28(31)
  02f1240  stb 3, 48(30)
  02f1244  stbx 3, 30, 4
  02f1248  li 4, 55
  02f124c  stbx 3, 30, 6
  02f1250  stbx 3, 30, 7
  02f1254  li 6, 57
  02f1258  stb 3, 52(30)
  02f125c  li 7, 58
  02f1260  stbx 3, 30, 5
  02f1264  stbx 3, 30, 8
  02f1268  stbx 3, 30, 4
  02f126c  li 5, 61
  02f1270  stb 3, 56(30)
  02f1274  li 8, 62
  02f1278  stbx 3, 30, 6
  02f127c  li 4, 63
  02f1280  lis 6, 47
  02f1284  stbx 3, 30, 7
  02f1288  stbx 3, 30, 9
  02f128c  addi 29, 6, 3264
  02f1290  stb 3, 60(30)
  02f1294  stbx 3, 30, 5
  02f1298  stbx 3, 30, 8
  02f129c  stbx 3, 30, 4
  02f12a0  lfs 1, 32(29)
  02f12a4  lfs 2, 36(29)
  02f12a8  bl 0xfcbe8
  02f12ac  nop
  02f12b0  lfs 31, 40(29)
  02f12b4  lis 3, 114
  02f12b8  fmuls 1, 1, 31
  02f12bc  lfs 30, -3052(3)
  02f12c0  fmuls 30, 1, 30
  02f12c4  bl 0x5c8318
  02f12c8  nop
  02f12cc  lis 4, 21845
  02f12d0  ori 4, 4, 21846
  02f12d4  mulhw 4, 4, 3
  02f12d8  srwi 5, 4, 31
  02f12dc  addc 4, 4, 5
  02f12e0  addc 5, 4, 4
  02f12e4  addc 4, 4, 5
  02f12e8  subc 3, 3, 4
  02f12ec  cmpwi 3, 0
  02f12f0  bt 1, 0x2f1300
  02f12f4  cmpwi 3, -1
  02f12f8  bf 1, 0x2f1328
  02f12fc  b 0x2f1314
  02f1300  cmpwi 3, 1
  02f1304  bf 1, 0x2f131c
  02f1308  cmpwi 3, 2
  02f130c  bf 1, 0x2f1324
  02f1310  b 0x2f1328
  02f1314  stfs 30, 48(30)
  02f1318  b 0x2f1328
  02f131c  stfs 30, 52(30)
  02f1320  b 0x2f1328
  02f1324  stfs 30, 56(30)
  02f1328  lis 3, 47
  02f132c  addi 3, 3, 3264
  02f1330  lfs 1, 44(3)
  02f1334  lfs 2, 48(3)
  02f1338  bl 0xfcbe8
  02f133c  nop
  02f1340  fmuls 31, 1, 31
  02f1344  lis 3, 114
  02f1348  lfs 1, -3052(3)
  02f134c  fmuls 31, 31, 1
  02f1350  bl 0x5c8318
  02f1354  nop
  02f1358  lis 4, 21845
  02f135c  ori 4, 4, 21846
  02f1360  mulhw 4, 4, 3
  02f1364  srwi 5, 4, 31
  02f1368  addc 4, 4, 5
  02f136c  addc 5, 4, 4
  02f1370  addc 4, 4, 5
  02f1374  subc 3, 3, 4
  02f1378  cmpwi 3, 0
  02f137c  bt 1, 0x2f138c
  02f1380  cmpwi 3, -1
  02f1384  bf 1, 0x2f13b4
  02f1388  b 0x2f13a0
  02f138c  cmpwi 3, 1
  02f1390  bf 1, 0x2f13a8
  02f1394  cmpwi 3, 2
  02f1398  bf 1, 0x2f13b0
  02f139c  b 0x2f13b4
  02f13a0  stfs 31, 48(30)
  02f13a4  b 0x2f13b4
  02f13a8  stfs 31, 52(30)
  02f13ac  b 0x2f13b4
  02f13b0  stfs 31, 56(30)
  02f13b4  bl 0xfcc68
  02f13b8  nop
  02f13bc  stfs 1, 64(31)
  02f13c0  bl 0xfcc68
  02f13c4  nop
  02f13c8  stfs 1, 68(31)
  02f13cc  bl 0xfcc68
  02f13d0  nop
  02f13d4  li 3, 0
  02f13d8  stfs 1, 72(31)
  02f13dc  lwz 4, 44(30)
  02f13e0  stb 3, 0(30)
  02f13e4  srawi 5, 4, 31
  02f13e8  stb 3, 1(30)
  02f13ec  stb 3, 2(30)
  02f13f0  stb 3, 3(30)
  02f13f4  srwi 6, 5, 1
  02f13f8  stb 3, 4(30)
  02f13fc  stb 3, 5(30)
  02f1400  stb 3, 6(30)
  02f1404  xor 4, 6, 4
  02f1408  stb 3, 7(30)
  02f140c  stb 3, 8(30)
  02f1410  stb 3, 9(30)
  02f1414  subc 4, 4, 5
  02f1418  stb 3, 10(30)
  02f141c  stb 3, 11(30)
  02f1420  stb 3, 12(30)
  02f1424  stb 3, 13(30)
  02f1428  stb 3, 14(30)
  02f142c  stb 3, 15(30)
  02f1430  lwz 3, 36(31)
  02f1434  lfs 1, 44(30)
  02f1438  stfs 1, 44(31)
  02f143c  lwz 3, 36(3)
  02f1440  srawi 6, 3, 31
  02f1444  srwi 5, 6, 1
  02f1448  xor 3, 5, 3
  02f144c  subc 3, 3, 6
  02f1450  cmpw 4, 3
  02f1454  bf 1, 0x2f1460
  02f1458  li 3, 100
  02f145c  stb 3, 114(31)
  02f1460  li 3, 1
  02f1464  stb 3, 32(31)
  02f1468  b 0x2f14e4
  02f146c  lhz 3, 50(31)
  02f1470  extsh 3, 3
  02f1474  extsw 3, 3
  02f1478  std 3, 112(1)
  02f147c  addic 3, 30, 16
  02f1480  lfd 1, 112(1)
  02f1484  fcfid 1, 1
  02f1488  frsp 1, 1
  02f148c  bl 0x502910
  02f1490  nop
  02f1494  cmpwi 3, 0
  02f1498  bf 0, 0x2f14e4
  02f149c  lfs 1, 16(30)
  02f14a0  li 3, 1
  02f14a4  stfs 1, 16(31)
  02f14a8  lfs 1, 20(30)
  02f14ac  li 4, 3
  02f14b0  lwz 5, 36(31)
  02f14b4  stfs 1, 20(31)
  02f14b8  lfs 1, 24(30)
  02f14bc  lhz 6, 52(31)
  02f14c0  stfs 1, 24(31)
  02f14c4  lfs 1, 28(30)
  02f14c8  rlwinm 6, 6, 0, 0, 30
  02f14cc  stfs 1, 28(31)
  02f14d0  lwz 5, 16(5)
  02f14d4  stb 3, 49(31)
  02f14d8  stw 5, 148(31)
  02f14dc  sth 6, 52(31)
  02f14e0  stb 4, 32(31)
  02f14e4  lis 4, 47
  02f14e8  lwz 5, 16(31)
  02f14ec  lis 3, 16800
  02f14f0  addi 4, 4, 3264
  02f14f4  lfs 1, 16(31)
  02f14f8  srawi 6, 5, 31
  02f14fc  srwi 7, 6, 1
  02f1500  xor 5, 7, 5
  02f1504  lfs 2, 28(4)
  02f1508  subc 4, 5, 6
  02f150c  cmpw 4, 3
  02f1510  bf 0, 0x2f151c
  02f1514  fmr 1, 2
  02f1518  stw 3, 16(31)
  02f151c  fmr 3, 1
  02f1520  lis 4, 47
  02f1524  addi 4, 4, 3264
  02f1528  lfs 1, 52(4)
  02f152c  fcmpu 0, 3, 1
  02f1530  cror 6, 0, 2
  02f1534  bt 6, 0x2f1544
  02f1538  lis 4, 17530
  02f153c  ori 4, 4, 49152
  02f1540  stw 4, 16(31)
  02f1544  lwz 4, 20(31)
  02f1548  lfs 3, 20(31)
  02f154c  srawi 5, 4, 31
  02f1550  srwi 6, 5, 1
  02f1554  xor 4, 6, 4
  02f1558  subc 4, 4, 5
  02f155c  cmpw 4, 3
  02f1560  bf 0, 0x2f156c
  02f1564  fmr 3, 2
  02f1568  stw 3, 20(31)
  02f156c  fcmpu 0, 3, 1
  02f1570  cror 6, 0, 2
  02f1574  bt 6, 0x2f1584
  02f1578  lis 4, 17530
  02f157c  ori 4, 4, 49152
  02f1580  stw 4, 20(31)
  02f1584  lwz 4, 24(31)
  02f1588  lfs 3, 24(31)
  02f158c  srawi 5, 4, 31
  02f1590  srwi 6, 5, 1
  02f1594  xor 4, 6, 4
  02f1598  subc 4, 4, 5
  02f159c  cmpw 4, 3
  02f15a0  bf 0, 0x2f15ac
  02f15a4  fmr 3, 2
  02f15a8  stw 3, 24(31)
  02f15ac  fcmpu 0, 3, 1
  02f15b0  cror 6, 0, 2
  02f15b4  bt 6, 0x2f15c4
  02f15b8  lis 3, 17530
  02f15bc  ori 3, 3, 49152
  02f15c0  stw 3, 24(31)
  02f15c4  lfs 1, 64(31)
  02f15c8  lfs 2, 48(30)
  02f15cc  bl 0x502578
  02f15d0  nop
  02f15d4  stfs 1, 64(31)
  02f15d8  lfs 1, 68(31)
  02f15dc  lfs 2, 52(30)
  02f15e0  bl 0x502578
  02f15e4  nop
  02f15e8  stfs 1, 68(31)
  02f15ec  lfs 1, 72(31)
  02f15f0  lfs 2, 56(30)
  02f15f4  bl 0x502578
  02f15f8  nop
  02f15fc  stfs 1, 72(31)
  02f1600  ld 0, 192(1)
  02f1604  mtlr 0
  02f1608  lfd 30, 160(1)
  02f160c  lfd 31, 168(1)
  02f1610  ld 29, 136(1)
  02f1614  ld 30, 144(1)
  02f1618  ld 31, 152(1)
  02f161c  addi 1, 1, 176
  02f1620  blr

M1412_002f1624:   # 0x2f1624, 0x14 bytes
  02f1624  lis 3, 128
  02f1628  lis 4, 1
  02f162c  addic 3, 3, -4876
  02f1630  stw 4, 72(3)
  02f1634  blr

M1412_002f1660:   # 0x2f1660, 0x88 bytes
  02f1660  lis 3, 47
  02f1664  addi 3, 3, 5688
  02f1668  lfs 4, 0(3)
  02f166c  lfs 5, 4(3)
  02f1670  lfs 6, 8(3)
  02f1674  fmadds 3, 3, 4, 5
  02f1678  lfs 7, 12(3)
  02f167c  fsubs 4, 6, 3
  02f1680  fsubs 5, 7, 3
  02f1684  lfs 6, 16(3)
  02f1688  fsub 7, 3, 4
  02f168c  fsel 3, 7, 4, 3
  02f1690  lfs 4, 20(3)
  02f1694  fsub 7, 5, 3
  02f1698  fsel 3, 7, 5, 3
  02f169c  lfs 5, 24(3)
  02f16a0  lfs 7, 28(3)
  02f16a4  lfs 9, 32(3)
  02f16a8  fmuls 8, 3, 3
  02f16ac  fmuls 10, 8, 3
  02f16b0  fmadds 3, 10, 6, 3
  02f16b4  fmuls 12, 8, 10
  02f16b8  lfs 6, 36(3)
  02f16bc  fmuls 10, 8, 12
  02f16c0  fmadds 3, 12, 4, 3
  02f16c4  fmuls 4, 8, 10
  02f16c8  fmadds 3, 10, 5, 3
  02f16cc  fmadds 3, 4, 7, 3
  02f16d0  fsubs 3, 9, 3
  02f16d4  fmuls 3, 3, 6
  02f16d8  fsubs 4, 9, 3
  02f16dc  fmuls 2, 2, 3
  02f16e0  fmadds 1, 1, 4, 2
  02f16e4  blr

M1412_002f1710:   # 0x2f1710, 0x284 bytes
  02f1710  stdu 1, -144(1)
  02f1714  mflr 0
  02f1718  std 0, 160(1)
  02f171c  std 31, 136(1)
  02f1720  lwz 31, 120(3)
  02f1724  lbz 3, 273(31)
  02f1728  cmpwi 3, 1
  02f172c  bf 2, 0x2f1980
  02f1730  li 3, 264
  02f1734  addi 4, 3, 16
  02f1738  <unknown>
  02f173c  lwz 3, 264(31)
  02f1740  <unknown>
  02f1744  cmpwi 3, 0
  02f1748  vor 2, 2, 3
  02f174c  bt 2, 0x2f1980
  02f1750  extsw 3, 3
  02f1754  lis 4, 268
  02f1758  li 5, -19392
  02f175c  std 3, 112(1)
  02f1760  lwz 3, -19392(4)
  02f1764  <unknown>
  02f1768  lis 4, 47
  02f176c  vcfsx 3, 3, 0
  02f1770  extsw 3, 3
  02f1774  li 5, 4
  02f1778  lfd 1, 112(1)
  02f177c  addi 4, 4, 5864
  02f1780  vspltisw 4, -1
  02f1784  std 3, 112(1)
  02f1788  vspltisw 8, -1
  02f178c  vslw 4, 4, 4
  02f1790  <unknown>
  02f1794  lfs 2, 0(4)
  02f1798  vspltw 6, 6, 0
  02f179c  lfd 3, 112(1)
  02f17a0  vrefp 5, 3
  02f17a4  fcfid 3, 3
  02f17a8  vspltisw 10, -1
  02f17ac  <unknown>
  02f17b0  li 3, 8
  02f17b4  fcfid 1, 1
  02f17b8  vspltisw 11, -1
  02f17bc  vspltw 9, 9, 0
  02f17c0  vcfsx 2, 2, 0
  02f17c4  vslw 10, 10, 10
  02f17c8  vslw 11, 11, 11
  02f17cc  frsp 3, 3
  02f17d0  vnmsubfp 7, 5, 3, 6
  02f17d4  frsp 1, 1
  02f17d8  li 5, -4736
  02f17dc  fdivs 2, 2, 3
  02f17e0  lfs 3, 8(4)
  02f17e4  li 6, 32
  02f17e8  vmaddfp 4, 5, 7, 4
  02f17ec  vslw 5, 8, 8
  02f17f0  vspltisw 8, -1
  02f17f4  vslw 8, 8, 8
  02f17f8  vnmsubfp 7, 4, 3, 6
  02f17fc  vmaddfp 4, 4, 7, 5
  02f1800  <unknown>
  02f1804  li 3, 12
  02f1808  lfs 4, 12(4)
  02f180c  vspltw 5, 5, 0
  02f1810  vspltisw 7, -1
  02f1814  vslw 7, 7, 7
  02f1818  vnmsubfp 3, 4, 3, 6
  02f181c  vmaddfp 3, 4, 3, 8
  02f1820  <unknown>
  02f1824  vspltw 4, 4, 0
  02f1828  li 3, 16
  02f182c  fmuls 1, 1, 2
  02f1830  <unknown>
  02f1834  li 3, 20
  02f1838  vmaddfp 3, 3, 9, 10
  02f183c  vspltw 6, 6, 0
  02f1840  vspltisw 9, -1
  02f1844  fsubs 2, 3, 1
  02f1848  fsubs 3, 4, 1
  02f184c  vmaddfp 2, 2, 3, 11
  02f1850  fsub 4, 1, 2
  02f1854  vsubfp 3, 5, 2
  02f1858  vsubfp 4, 4, 2
  02f185c  fsel 1, 4, 2, 1
  02f1860  vcmpgtfp 5, 3, 2
  02f1864  fsub 2, 3, 1
  02f1868  vsel 2, 3, 2, 5
  02f186c  vspltisw 5, -1
  02f1870  vcmpgtfp 3, 2, 4
  02f1874  vslw 5, 5, 5
  02f1878  vsel 2, 4, 2, 3
  02f187c  vspltisw 3, -1
  02f1880  vspltisw 4, -1
  02f1884  fsel 1, 2, 3, 1
  02f1888  vslw 3, 3, 3
  02f188c  vslw 4, 4, 4
  02f1890  lfs 2, 16(4)
  02f1894  vmaddfp 3, 2, 2, 3
  02f1898  <unknown>
  02f189c  li 3, 24
  02f18a0  lfs 4, 20(4)
  02f18a4  vspltw 8, 8, 0
  02f18a8  fmuls 3, 1, 1
  02f18ac  vmaddfp 4, 3, 2, 4
  02f18b0  fmuls 5, 3, 1
  02f18b4  vmaddfp 5, 3, 4, 5
  02f18b8  vmaddfp 2, 4, 6, 2
  02f18bc  <unknown>
  02f18c0  vslw 4, 9, 9
  02f18c4  fmadds 1, 5, 2, 1
  02f18c8  li 3, 28
  02f18cc  fmuls 7, 3, 5
  02f18d0  lfs 6, 24(4)
  02f18d4  fmr 2, 6
  02f18d8  vmaddfp 7, 3, 5, 7
  02f18dc  vmaddfp 2, 5, 8, 2
  02f18e0  vspltw 5, 6, 0
  02f18e4  fmuls 5, 3, 7
  02f18e8  fmadds 1, 7, 4, 1
  02f18ec  vmaddfp 3, 3, 7, 4
  02f18f0  vmaddfp 2, 7, 5, 2
  02f18f4  <unknown>
  02f18f8  lis 3, 128
  02f18fc  vspltw 4, 4, 0
  02f1900  fmuls 3, 3, 5
  02f1904  fmadds 1, 5, 2, 1
  02f1908  lfs 4, 28(4)
  02f190c  vmaddfp 2, 3, 4, 2
  02f1910  vspltisw 3, -1
  02f1914  <unknown>
  02f1918  fmadds 1, 3, 4, 1
  02f191c  <unknown>
  02f1920  li 5, 260
  02f1924  vslw 3, 3, 3
  02f1928  li 6, 256
  02f192c  lfs 2, -4736(3)
  02f1930  li 4, 1
  02f1934  addic 3, 31, 352
  02f1938  vmaddfp 2, 4, 2, 3
  02f193c  vspltw 3, 5, 0
  02f1940  fmuls 1, 2, 1
  02f1944  fneg 1, 1
  02f1948  vxor 2, 3, 2
  02f194c  vspltw 2, 2, 0
  02f1950  stvewx 2, 5, 31
  02f1954  stvewx 2, 6, 31
  02f1958  bl 0x501980
  02f195c  nop
  02f1960  addic 3, 31, 288
  02f1964  lfs 1, 256(31)
  02f1968  li 4, 1
  02f196c  bl 0x501980
  02f1970  nop
  02f1974  addic 3, 31, 264
  02f1978  bl 0x4fff60
  02f197c  nop
  02f1980  ld 0, 160(1)
  02f1984  mtlr 0
  02f1988  ld 31, 136(1)
  02f198c  addi 1, 1, 144
  02f1990  blr
