# game/update/moby630.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M630_003efa94:   # 0x3efa94, 0x58 bytes
  03efa94  stdu 1, -128(1)
  03efa98  mflr 0
  03efa9c  std 0, 144(1)
  03efaa0  std 31, 120(1)
  03efaa4  ori 31, 3, 0
  03efaa8  bl 0x48a718
  03efaac  nop
  03efab0  cmpwi 3, 0
  03efab4  bt 2, 0x3efac4
  03efab8  li 4, 7
  03efabc  stb 4, 32(31)
  03efac0  b 0x3efad8
  03efac4  lbz 4, 32(31)
  03efac8  cmpwi 4, 7
  03efacc  bf 2, 0x3efad8
  03efad0  li 4, 1
  03efad4  stb 4, 32(31)
  03efad8  ld 0, 144(1)
  03efadc  mtlr 0
  03efae0  ld 31, 120(1)
  03efae4  addi 1, 1, 128
  03efae8  blr

M630_003efaec:   # 0x3efaec, 0x58 bytes
  03efaec  stdu 1, -128(1)
  03efaf0  mflr 0
  03efaf4  std 0, 144(1)
  03efaf8  std 31, 120(1)
  03efafc  ori 31, 3, 0
  03efb00  bl 0x48aa70
  03efb04  nop
  03efb08  cmpwi 3, 0
  03efb0c  bt 2, 0x3efb1c
  03efb10  li 4, 7
  03efb14  stb 4, 32(31)
  03efb18  b 0x3efb30
  03efb1c  lbz 4, 32(31)
  03efb20  cmpwi 4, 7
  03efb24  bf 2, 0x3efb30
  03efb28  li 4, 1
  03efb2c  stb 4, 32(31)
  03efb30  ld 0, 144(1)
  03efb34  mtlr 0
  03efb38  ld 31, 120(1)
  03efb3c  addi 1, 1, 128
  03efb40  blr

M630_003efb44:   # 0x3efb44, 0xd0 bytes
  03efb44  stdu 1, -160(1)
  03efb48  mflr 0
  03efb4c  std 0, 176(1)
  03efb50  stfd 31, 152(1)
  03efb54  std 31, 144(1)
  03efb58  fmr 31, 1
  03efb5c  std 30, 136(1)
  03efb60  std 28, 120(1)
  03efb64  ori 31, 3, 0
  03efb68  ori 30, 5, 0
  03efb6c  std 29, 128(1)
  03efb70  ori 28, 4, 0
  03efb74  bl 0x486828
  03efb78  nop
  03efb7c  ori 29, 3, 0
  03efb80  ori 3, 31, 0
  03efb84  fmr 1, 31
  03efb88  ori 5, 30, 0
  03efb8c  ori 4, 28, 0
  03efb90  bl 0x48acb8
  03efb94  nop
  03efb98  ori 30, 3, 0
  03efb9c  cmpwi 30, 0
  03efba0  bt 2, 0x3efbb0
  03efba4  li 3, 7
  03efba8  stb 3, 32(31)
  03efbac  b 0x3efbc4
  03efbb0  lbz 3, 32(31)
  03efbb4  cmpwi 3, 7
  03efbb8  bf 2, 0x3efbc4
  03efbbc  li 3, 1
  03efbc0  stb 3, 32(31)
  03efbc4  cmpwi 29, 0
  03efbc8  bt 2, 0x3efbec
  03efbcc  lhz 3, 104(29)
  03efbd0  cmpwi 3, 6
  03efbd4  bf 2, 0x3efbec
  03efbd8  li 3, 2
  03efbdc  li 4, 0
  03efbe0  ori 5, 31, 0
  03efbe4  bl 0x15d12c
  03efbe8  nop
  03efbec  ori 3, 30, 0
  03efbf0  ld 0, 176(1)
  03efbf4  mtlr 0
  03efbf8  lfd 31, 152(1)
  03efbfc  ld 28, 120(1)
  03efc00  ld 29, 128(1)
  03efc04  ld 30, 136(1)
  03efc08  ld 31, 144(1)
  03efc0c  addi 1, 1, 160
  03efc10  blr

M630_003efc14:   # 0x3efc14, 0x38 bytes
  03efc14  stdu 1, -128(1)
  03efc18  mflr 0
  03efc1c  std 0, 144(1)
  03efc20  std 31, 120(1)
  03efc24  ori 31, 3, 0
  03efc28  bl 0x48afe8
  03efc2c  nop
  03efc30  li 4, 7
  03efc34  stb 4, 32(31)
  03efc38  ld 0, 144(1)
  03efc3c  mtlr 0
  03efc40  ld 31, 120(1)
  03efc44  addi 1, 1, 128
  03efc48  blr

M630_003efc4c:   # 0x3efc4c, 0x40 bytes
  03efc4c  cmpwi 3, 0
  03efc50  bt 2, 0x3efc84
  03efc54  li 4, 0
  03efc58  lwz 3, 120(3)
  03efc5c  li 5, 0
  03efc60  subc 4, 4, 3
  03efc64  addic 3, 3, 96
  03efc68  cntlzw 4, 4
  03efc6c  subc 5, 5, 3
  03efc70  sldi 4, 4, 58
  03efc74  sradi 4, 4, 63
  03efc78  and 4, 4, 5
  03efc7c  addc 3, 3, 4
  03efc80  b 0x3efc88
  03efc84  li 3, 0
  03efc88  blr

M630_003efc8c:   # 0x3efc8c, 0x14 bytes
  03efc8c  lis 3, 133
  03efc90  lis 4, 1
  03efc94  addic 3, 3, 17096
  03efc98  stw 4, 72(3)
  03efc9c  blr

UpdateMoby_630:   # 0x3efce0, 0x394 bytes
  03efce0  stdu 1, -368(1)
  03efce4  mflr 0
  03efce8  std 0, 384(1)
  03efcec  stfd 17, 248(1)
  03efcf0  stfd 18, 256(1)
  03efcf4  stfd 19, 264(1)
  03efcf8  stfd 20, 272(1)
  03efcfc  stfd 21, 280(1)
  03efd00  stfd 22, 288(1)
  03efd04  stfd 23, 296(1)
  03efd08  stfd 24, 304(1)
  03efd0c  stfd 25, 312(1)
  03efd10  stfd 26, 320(1)
  03efd14  stfd 27, 328(1)
  03efd18  stfd 28, 336(1)
  03efd1c  stfd 29, 344(1)
  03efd20  stfd 30, 352(1)
  03efd24  stfd 31, 360(1)
  03efd28  std 29, 224(1)
  03efd2c  std 31, 240(1)
  03efd30  lwz 29, 120(3)
  03efd34  std 30, 232(1)
  03efd38  ori 31, 3, 0
  03efd3c  lwz 30, 0(29)
  03efd40  std 28, 216(1)
  03efd44  cmpwi 30, -1
  03efd48  bt 2, 0x3f0018
  03efd4c  lis 3, 164
  03efd50  slwi 4, 30, 8
  03efd54  lwz 3, -28512(3)
  03efd58  lbz 5, 32(31)
  03efd5c  addc 30, 3, 4
  03efd60  lfs 1, 12(29)
  03efd64  cmpwi 5, 0
  03efd68  clrldi 30, 30, 32
  03efd6c  bf 2, 0x3efd90
  03efd70  lis 4, 63
  03efd74  li 3, 1
  03efd78  addi 4, 4, -864
  03efd7c  stb 3, 32(31)
  03efd80  lfs 1, 4(29)
  03efd84  lfs 2, 0(4)
  03efd88  fmuls 1, 1, 2
  03efd8c  stfs 1, 12(29)
  03efd90  lis 3, 63
  03efd94  lfs 2, 8(29)
  03efd98  addi 28, 3, -864
  03efd9c  lis 3, 114
  03efda0  lfs 3, 0(28)
  03efda4  lfs 4, -3052(3)
  03efda8  fmuls 2, 2, 3
  03efdac  fmuls 2, 2, 4
  03efdb0  bl 0x502578
  03efdb4  nop
  03efdb8  stfs 1, 12(29)
  03efdbc  lfs 31, 4(28)
  03efdc0  lfs 30, 8(28)
  03efdc4  fsubs 2, 31, 1
  03efdc8  fsubs 3, 30, 1
  03efdcc  lfs 29, 12(28)
  03efdd0  lfs 28, 16(28)
  03efdd4  lfs 27, 20(28)
  03efdd8  lfs 26, 24(28)
  03efddc  fsub 4, 1, 2
  03efde0  fsel 1, 4, 2, 1
  03efde4  lfs 2, 28(28)
  03efde8  lfs 24, 16(30)
  03efdec  lfs 23, 20(30)
  03efdf0  fsub 4, 3, 1
  03efdf4  fsel 1, 4, 3, 1
  03efdf8  fmuls 3, 1, 1
  03efdfc  fmuls 4, 3, 1
  03efe00  fmuls 5, 3, 4
  03efe04  fmadds 1, 4, 29, 1
  03efe08  fmuls 4, 3, 5
  03efe0c  fmadds 1, 5, 28, 1
  03efe10  fmuls 3, 3, 4
  03efe14  fmadds 1, 4, 27, 1
  03efe18  fmadds 1, 3, 26, 1
  03efe1c  fmuls 25, 1, 2
  03efe20  fsubs 1, 31, 25
  03efe24  fsubs 2, 30, 25
  03efe28  fsub 3, 25, 1
  03efe2c  fsel 1, 3, 1, 25
  03efe30  fsub 4, 2, 1
  03efe34  fsel 4, 4, 2, 1
  03efe38  lfs 1, 72(30)
  03efe3c  lfs 22, 24(30)
  03efe40  lfs 21, 28(30)
  03efe44  lfs 20, 32(28)
  03efe48  fmr 2, 20
  03efe4c  fmuls 5, 4, 4
  03efe50  fmuls 3, 5, 4
  03efe54  fmuls 6, 5, 3
  03efe58  fmadds 3, 3, 29, 4
  03efe5c  fmuls 4, 5, 6
  03efe60  fmadds 3, 6, 28, 3
  03efe64  fmuls 5, 5, 4
  03efe68  fmadds 3, 4, 27, 3
  03efe6c  fmadds 19, 5, 26, 3
  03efe70  bl 0x502578
  03efe74  nop
  03efe78  lfs 18, 36(28)
  03efe7c  fadds 1, 1, 18
  03efe80  lfs 17, 40(28)
  03efe84  fsubs 2, 31, 1
  03efe88  fsubs 3, 30, 1
  03efe8c  fsub 4, 1, 2
  03efe90  fsel 1, 4, 2, 1
  03efe94  fsub 2, 3, 1
  03efe98  fsel 2, 2, 3, 1
  03efe9c  lfs 1, 72(30)
  03efea0  fmuls 3, 2, 2
  03efea4  fmuls 4, 3, 2
  03efea8  fmuls 5, 3, 4
  03efeac  fmadds 4, 4, 29, 2
  03efeb0  fmr 2, 20
  03efeb4  fmuls 6, 3, 5
  03efeb8  fmadds 4, 5, 28, 4
  03efebc  fmuls 3, 3, 6
  03efec0  fmadds 4, 6, 27, 4
  03efec4  fmadds 3, 3, 26, 4
  03efec8  fmuls 3, 3, 17
  03efecc  fmadds 24, 3, 19, 24
  03efed0  bl 0x502578
  03efed4  nop
  03efed8  fsubs 2, 31, 1
  03efedc  fadds 3, 25, 18
  03efee0  fsubs 4, 30, 1
  03efee4  addic 29, 31, 16
  03efee8  stfs 24, 16(31)
  03efeec  stfs 21, 28(31)
  03efef0  li 4, 1024
  03efef4  ori 3, 29, 0
  03efef8  fsub 5, 1, 2
  03efefc  fsubs 6, 31, 3
  03eff00  fsubs 7, 30, 3
  03eff04  li 5, 1
  03eff08  ori 6, 31, 0
  03eff0c  li 7, 0
  03eff10  fsel 1, 5, 2, 1
  03eff14  fsub 2, 3, 6
  03eff18  fsub 5, 4, 1
  03eff1c  fsel 2, 2, 6, 3
  03eff20  fsel 1, 5, 4, 1
  03eff24  fsub 3, 7, 2
  03eff28  fmuls 4, 1, 1
  03eff2c  fsel 2, 3, 7, 2
  03eff30  fmuls 3, 4, 1
  03eff34  fmuls 5, 2, 2
  03eff38  fmuls 6, 4, 3
  03eff3c  fmadds 1, 3, 29, 1
  03eff40  fmuls 3, 5, 2
  03eff44  fmuls 7, 4, 6
  03eff48  fmadds 1, 6, 28, 1
  03eff4c  fmuls 6, 5, 3
  03eff50  fmadds 2, 3, 29, 2
  03eff54  fmuls 3, 4, 7
  03eff58  fmadds 1, 7, 27, 1
  03eff5c  fmuls 4, 5, 6
  03eff60  fmadds 2, 6, 28, 2
  03eff64  fmadds 1, 3, 26, 1
  03eff68  fmuls 3, 5, 4
  03eff6c  fmadds 2, 4, 27, 2
  03eff70  fmuls 1, 1, 17
  03eff74  fmadds 2, 3, 26, 2
  03eff78  fmadds 1, 1, 19, 23
  03eff7c  fnmsubs 2, 2, 17, 22
  03eff80  stfs 1, 20(31)
  03eff84  stfs 2, 24(31)
  03eff88  bl 0x55ac0
  03eff8c  nop
  03eff90  cmpwi 3, 0
  03eff94  bt 2, 0x3f0018
  03eff98  li 6, 0
  03eff9c  lis 3, 63
  03effa0  li 7, -1
  03effa4  addi 3, 3, -864
  03effa8  stw 6, 204(1)
  03effac  stw 6, 200(1)
  03effb0  li 11, 1
  03effb4  stw 6, 196(1)
  03effb8  addic 4, 1, 192
  03effbc  stw 6, 192(1)
  03effc0  ori 5, 29, 0
  03effc4  lfs 2, 56(3)
  03effc8  li 8, 5
  03effcc  lfs 1, 44(3)
  03effd0  li 9, 2
  03effd4  lfs 3, 48(3)
  03effd8  li 10, 4
  03effdc  lfs 5, 52(3)
  03effe0  fmr 4, 2
  03effe4  lfs 7, 60(3)
  03effe8  fmr 6, 2
  03effec  std 7, 144(1)
  03efff0  ori 3, 31, 0
  03efff4  std 11, 160(1)
  03efff8  std 11, 168(1)
  03efffc  std 7, 176(1)
  03f0000  std 6, 184(1)
  03f0004  bl 0x10e030
  03f0008  nop
  03f000c  ori 3, 31, 0
  03f0010  bl 0xefb38
  03f0014  nop
  03f0018  ld 0, 384(1)
  03f001c  mtlr 0
  03f0020  lfd 17, 248(1)
  03f0024  lfd 18, 256(1)
  03f0028  lfd 19, 264(1)
  03f002c  lfd 20, 272(1)
  03f0030  lfd 21, 280(1)
  03f0034  lfd 22, 288(1)
  03f0038  lfd 23, 296(1)
  03f003c  lfd 24, 304(1)
  03f0040  lfd 25, 312(1)
  03f0044  lfd 26, 320(1)
  03f0048  lfd 27, 328(1)
  03f004c  lfd 28, 336(1)
  03f0050  lfd 29, 344(1)
  03f0054  lfd 30, 352(1)
  03f0058  lfd 31, 360(1)
  03f005c  ld 28, 216(1)
  03f0060  ld 29, 224(1)
  03f0064  ld 30, 232(1)
  03f0068  ld 31, 240(1)
  03f006c  addi 1, 1, 368
  03f0070  blr
