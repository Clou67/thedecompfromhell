# game/update/sound2.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

UpdateSound_2:   # 0x17fee0, 0x31c bytes
  017fee0  stdu 1, -192(1)
  017fee4  mflr 0
  017fee8  std 0, 208(1)
  017feec  stfd 28, 160(1)
  017fef0  stfd 29, 168(1)
  017fef4  stfd 30, 176(1)
  017fef8  stfd 31, 184(1)
  017fefc  lis 4, 149
  017ff00  lfs 3, 12(3)
  017ff04  lis 5, 24
  017ff08  addic 4, 4, 5056
  017ff0c  lfs 1, 68(3)
  017ff10  std 30, 144(1)
  017ff14  addi 5, 5, -304
  017ff18  ori 30, 3, 0
  017ff1c  lfs 2, 324(4)
  017ff20  lfs 4, 96(3)
  017ff24  fsubs 1, 2, 1
  017ff28  fmuls 6, 4, 3
  017ff2c  lfs 2, 320(4)
  017ff30  lfs 5, 64(3)
  017ff34  lfs 7, 80(3)
  017ff38  fsubs 9, 2, 5
  017ff3c  lfs 8, 328(4)
  017ff40  lfs 2, 72(3)
  017ff44  lfs 5, 112(3)
  017ff48  fsubs 8, 8, 2
  017ff4c  fmuls 2, 4, 1
  017ff50  lfs 31, 0(5)
  017ff54  fmadds 4, 7, 3, 6
  017ff58  std 31, 152(1)
  017ff5c  lfs 6, 100(3)
  017ff60  lwz 31, 8(3)
  017ff64  lfs 10, 104(3)
  017ff68  lfs 11, 84(3)
  017ff6c  fmuls 0, 10, 1
  017ff70  fmuls 10, 10, 3
  017ff74  lfs 13, 88(3)
  017ff78  fmadds 2, 7, 9, 2
  017ff7c  fmadds 4, 5, 3, 4
  017ff80  fmuls 7, 6, 1
  017ff84  fmuls 6, 6, 3
  017ff88  fmadds 12, 5, 8, 2
  017ff8c  fabs 4, 4
  017ff90  fmadds 7, 11, 9, 7
  017ff94  lfs 2, 116(3)
  017ff98  fmadds 5, 11, 3, 6
  017ff9c  lfs 1, 120(3)
  017ffa0  fmadds 6, 13, 9, 0
  017ffa4  fabs 11, 12
  017ffa8  fadds 12, 4, 31
  017ffac  fmadds 4, 13, 3, 10
  017ffb0  std 29, 136(1)
  017ffb4  fcmpu 0, 11, 12
  017ffb8  bt 1, 0x1801d0
  017ffbc  fmadds 5, 2, 3, 5
  017ffc0  fmadds 2, 2, 8, 7
  017ffc4  fabs 5, 5
  017ffc8  fabs 2, 2
  017ffcc  fadds 5, 5, 31
  017ffd0  fcmpu 0, 2, 5
  017ffd4  bt 1, 0x1801d0
  017ffd8  fmadds 2, 1, 3, 4
  017ffdc  fmadds 1, 1, 8, 6
  017ffe0  fabs 2, 2
  017ffe4  fabs 1, 1
  017ffe8  fadds 2, 2, 31
  017ffec  fcmpu 0, 1, 2
  017fff0  bt 1, 0x1801d0
  017fff4  lwz 3, 16(31)
  017fff8  lis 29, 150
  017fffc  sldi 4, 3, 7
  0180000  sldi 3, 3, 4
  0180004  addic 29, 29, 14176
  0180008  subc 3, 4, 3
  018000c  extsw 3, 3
  0180010  addc 3, 29, 3
  0180014  lwz 4, 140(3)
  0180018  cmpw 4, 30
  018001c  bf 2, 0x18002c
  0180020  lbz 3, 116(3)
  0180024  cmpwi 3, 0
  0180028  bf 2, 0x1801d0
  018002c  addic 3, 31, 12
  0180030  bl 0x4fff60
  0180034  nop
  0180038  cmpwi 3, 0
  018003c  bt 2, 0x1801c8
  0180040  lwz 3, 0(31)
  0180044  li 4, 0
  0180048  ori 5, 30, 0
  018004c  li 6, 1024
  0180050  bl 0x15d434
  0180054  nop
  0180058  cmpwi 3, -1
  018005c  stw 3, 16(31)
  0180060  bt 2, 0x18014c
  0180064  lis 3, 24
  0180068  fmr 2, 31
  018006c  addi 3, 3, -304
  0180070  lfs 30, 4(3)
  0180074  fmr 1, 30
  0180078  bl 0xfcbe8
  018007c  nop
  0180080  fmr 29, 1
  0180084  fmr 1, 30
  0180088  fmr 2, 31
  018008c  bl 0xfcbe8
  0180090  nop
  0180094  fmr 28, 1
  0180098  fmr 2, 31
  018009c  fmr 1, 30
  01800a0  bl 0xfcbe8
  01800a4  nop
  01800a8  lfs 2, 32(30)
  01800ac  lfs 3, 36(30)
  01800b0  lfs 4, 40(30)
  01800b4  lfs 5, 16(30)
  01800b8  fmuls 2, 2, 28
  01800bc  lfs 6, 44(30)
  01800c0  fmuls 3, 3, 28
  01800c4  fmuls 4, 4, 28
  01800c8  lfs 7, 20(30)
  01800cc  fmuls 6, 6, 28
  01800d0  lfs 8, 24(30)
  01800d4  lfs 9, 28(30)
  01800d8  lfs 10, 48(30)
  01800dc  lfs 11, 52(30)
  01800e0  fmadds 2, 5, 29, 2
  01800e4  fmadds 3, 7, 29, 3
  01800e8  lfs 5, 56(30)
  01800ec  fmadds 4, 8, 29, 4
  01800f0  lfs 7, 60(30)
  01800f4  fmadds 6, 9, 29, 6
  01800f8  fmadds 6, 7, 1, 6
  01800fc  fmadds 2, 10, 1, 2
  0180100  fmadds 3, 11, 1, 3
  0180104  fmadds 1, 5, 1, 4
  0180108  lfs 4, 64(30)
  018010c  fadds 6, 6, 7
  0180110  lfs 5, 68(30)
  0180114  lfs 8, 72(30)
  0180118  lwz 3, 16(31)
  018011c  sldi 4, 3, 7
  0180120  sldi 3, 3, 4
  0180124  fadds 2, 2, 4
  0180128  fadds 3, 3, 5
  018012c  subc 3, 4, 3
  0180130  fadds 1, 1, 8
  0180134  addc 3, 29, 3
  0180138  clrldi 3, 3, 32
  018013c  stfs 6, 156(3)
  0180140  stfs 2, 144(3)
  0180144  stfs 3, 148(3)
  0180148  stfs 1, 152(3)
  018014c  lwz 3, 8(31)
  0180150  cmpwi 3, 0
  0180154  bf 1, 0x1801d0
  0180158  lwz 4, 4(31)
  018015c  subc 3, 3, 4
  0180160  extsw 3, 3
  0180164  bl 0xfc620
  0180168  nop
  018016c  lwz 4, 4(31)
  0180170  addc 3, 4, 3
  0180174  lis 4, 114
  0180178  extsw 3, 3
  018017c  std 3, 112(1)
  0180180  lis 3, 24
  0180184  addi 3, 3, -304
  0180188  lfs 1, 8(3)
  018018c  lfs 2, -3056(4)
  0180190  lfd 3, 112(1)
  0180194  fcfid 3, 3
  0180198  frsp 3, 3
  018019c  fadds 1, 3, 1
  01801a0  lfs 3, 12(3)
  01801a4  li 3, 12
  01801a8  fmuls 1, 2, 1
  01801ac  fctidz 1, 1
  01801b0  fcfid 1, 1
  01801b4  frsp 1, 1
  01801b8  fmuls 1, 1, 3
  01801bc  fctiwz 1, 1
  01801c0  stfiwx 1, 3, 31
  01801c4  b 0x1801d0
  01801c8  li 3, -1
  01801cc  stw 3, 16(31)
  01801d0  ld 0, 208(1)
  01801d4  mtlr 0
  01801d8  lfd 28, 160(1)
  01801dc  lfd 29, 168(1)
  01801e0  lfd 30, 176(1)
  01801e4  lfd 31, 184(1)
  01801e8  ld 29, 136(1)
  01801ec  ld 30, 144(1)
  01801f0  ld 31, 152(1)
  01801f4  addi 1, 1, 192
  01801f8  blr
