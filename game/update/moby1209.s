# game/update/moby1209.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

FUN_001ffaf0:   # 0x1ffaf0, 0x474 bytes
  01ffaf0  stdu 1, -224(1)
  01ffaf4  mflr 0
  01ffaf8  std 0, 240(1)
  01ffafc  std 31, 216(1)
  01ffb00  std 29, 200(1)
  01ffb04  ori 31, 3, 0
  01ffb08  li 3, 1208
  01ffb0c  std 30, 208(1)
  01ffb10  ori 29, 5, 0
  01ffb14  std 28, 192(1)
  01ffb18  ori 30, 4, 0
  01ffb1c  bl 0xefa28
  01ffb20  nop
  01ffb24  ori 28, 3, 0
  01ffb28  cmpwi 28, 0
  01ffb2c  bt 2, 0x1fff40
  01ffb30  li 4, 255
  01ffb34  li 3, 1
  01ffb38  lis 5, 118
  01ffb3c  lis 7, 118
  01ffb40  lis 6, 118
  01ffb44  stb 4, 48(28)
  01ffb48  stb 3, 49(28)
  01ffb4c  sth 4, 50(28)
  01ffb50  lwz 5, 26016(5)
  01ffb54  ori 3, 28, 0
  01ffb58  lwz 4, 26012(7)
  01ffb5c  lwz 6, 26020(6)
  01ffb60  extsw 5, 5
  01ffb64  extsw 4, 4
  01ffb68  extsw 6, 6
  01ffb6c  bl 0xf1ec8
  01ffb70  nop
  01ffb74  lhz 3, 52(31)
  01ffb78  sth 3, 52(28)
  01ffb7c  lfs 1, 0(30)
  01ffb80  stfs 1, 16(28)
  01ffb84  lfs 1, 4(30)
  01ffb88  lis 5, 32
  01ffb8c  stfs 1, 20(28)
  01ffb90  lfs 1, 8(30)
  01ffb94  addi 5, 5, -1308
  01ffb98  stfs 1, 24(28)
  01ffb9c  lfs 1, 12(30)
  01ffba0  stfs 1, 28(28)
  01ffba4  lwz 4, 0(29)
  01ffba8  lwz 3, 4(29)
  01ffbac  lfs 1, 0(29)
  01ffbb0  lfs 2, 4(29)
  01ffbb4  rlwinm 6, 3, 3, 29, 29
  01ffbb8  fabs 5, 1
  01ffbbc  fabs 7, 2
  01ffbc0  lis 31, 115
  01ffbc4  addic 31, 31, 22784
  01ffbc8  fsubs 1, 5, 7
  01ffbcc  stfs 1, 120(1)
  01ffbd0  lfs 4, 0(5)
  01ffbd4  lwz 3, 120(28)
  01ffbd8  lfs 2, 4(5)
  01ffbdc  lwz 5, 120(1)
  01ffbe0  lfs 1, 120(1)
  01ffbe4  rlwimi 6, 5, 2, 30, 30
  01ffbe8  fsub 6, 1, 4
  01ffbec  fsub 8, 1, 4
  01ffbf0  rlwimi 6, 4, 4, 28, 28
  01ffbf4  ori 4, 31, 0
  01ffbf8  slwi 5, 6, 2
  01ffbfc  rlwimi 4, 6, 2, 26, 28
  01ffc00  clrldi 4, 4, 32
  01ffc04  lfsx 1, 31, 5
  01ffc08  fsel 6, 6, 5, 7
  01ffc0c  fsel 5, 8, 7, 5
  01ffc10  lfs 3, 4(4)
  01ffc14  fcmpu 0, 6, 4
  01ffc18  bt 1, 0x1ffc24
  01ffc1c  fmr 1, 4
  01ffc20  b 0x1ffd3c
  01ffc24  fsubs 7, 5, 6
  01ffc28  fadds 5, 5, 6
  01ffc2c  addic 4, 1, 16
  01ffc30  li 7, 2
  01ffc34  addic 6, 4, 156
  01ffc38  addic 5, 4, 140
  01ffc3c  mtctr 7
  01ffc40  fdivs 5, 7, 5
  01ffc44  fmuls 6, 5, 5
  01ffc48  stfs 5, 168(1)
  01ffc4c  stfs 5, 160(1)
  01ffc50  stfs 5, 164(1)
  01ffc54  stfs 5, 156(1)
  01ffc58  lfs 8, 168(1)
  01ffc5c  lfs 9, 160(1)
  01ffc60  lfs 10, 164(1)
  01ffc64  fmuls 7, 6, 6
  01ffc68  fmuls 9, 9, 6
  01ffc6c  fmuls 8, 8, 7
  01ffc70  fmuls 5, 7, 7
  01ffc74  fmuls 7, 10, 7
  01ffc78  stfs 9, 160(1)
  01ffc7c  fmuls 6, 8, 6
  01ffc80  stfs 7, 164(1)
  01ffc84  stfs 6, 168(1)
  01ffc88  lfs 6, 140(4)
  01ffc8c  fmuls 6, 6, 5
  01ffc90  stfs 6, 156(4)
  01ffc94  lfs 6, 4(5)
  01ffc98  addic 5, 5, 8
  01ffc9c  fmuls 6, 6, 5
  01ffca0  addic 4, 4, 8
  01ffca4  stfs 6, 4(6)
  01ffca8  addic 6, 6, 8
  01ffcac  bdnz 0x1ffc88
  01ffcb0  li 6, 4
  01ffcb4  ori 4, 1, 0
  01ffcb8  mtctr 6
  01ffcbc  lis 5, 115
  01ffcc0  addic 6, 4, 156
  01ffcc4  addic 5, 5, 22752
  01ffcc8  ori 8, 6, 0
  01ffccc  lfs 5, 156(4)
  01ffcd0  lfs 6, 0(5)
  01ffcd4  fmuls 5, 5, 6
  01ffcd8  lfs 6, 4(5)
  01ffcdc  addic 5, 5, 8
  01ffce0  stfs 5, 156(4)
  01ffce4  lfs 5, 4(6)
  01ffce8  addic 4, 4, 8
  01ffcec  fmuls 5, 5, 6
  01ffcf0  stfs 5, 4(6)
  01ffcf4  addic 6, 6, 8
  01ffcf8  bdnz 0x1ffccc
  01ffcfc  ori 4, 1, 0
  01ffd00  fmr 5, 4
  01ffd04  mtctr 7
  01ffd08  lfs 6, 156(4)
  01ffd0c  fadds 5, 5, 6
  01ffd10  lfs 6, 4(8)
  01ffd14  addic 4, 4, 16
  01ffd18  lfs 7, 8(8)
  01ffd1c  lfs 8, 12(8)
  01ffd20  addic 8, 8, 16
  01ffd24  fadds 5, 5, 6
  01ffd28  fadds 5, 5, 7
  01ffd2c  fadds 5, 5, 8
  01ffd30  bdnz 0x1ffd08
  01ffd34  fadds 5, 5, 2
  01ffd38  fmadds 1, 5, 1, 3
  01ffd3c  stfs 1, 72(28)
  01ffd40  lfs 1, 4(29)
  01ffd44  lfs 3, 0(29)
  01ffd48  fmuls 1, 1, 1
  01ffd4c  lwz 4, 8(29)
  01ffd50  rlwinm 4, 4, 3, 29, 29
  01ffd54  fmadds 1, 3, 3, 1
  01ffd58  lfs 3, 8(29)
  01ffd5c  fabs 5, 3
  01ffd60  fsqrts 1, 1
  01ffd64  fabs 3, 1
  01ffd68  stfs 1, 112(1)
  01ffd6c  fsubs 1, 3, 5
  01ffd70  stfs 1, 116(1)
  01ffd74  lwz 5, 112(1)
  01ffd78  lfs 1, 112(1)
  01ffd7c  lwz 6, 116(1)
  01ffd80  fabs 6, 1
  01ffd84  lfs 1, 116(1)
  01ffd88  rlwimi 4, 6, 2, 30, 30
  01ffd8c  fsub 7, 1, 4
  01ffd90  fsub 8, 1, 4
  01ffd94  rlwimi 4, 5, 4, 28, 28
  01ffd98  ori 5, 31, 0
  01ffd9c  rlwimi 5, 4, 2, 26, 28
  01ffda0  slwi 4, 4, 2
  01ffda4  clrldi 5, 5, 32
  01ffda8  fsel 6, 7, 6, 5
  01ffdac  lfsx 1, 31, 4
  01ffdb0  fsel 5, 8, 5, 3
  01ffdb4  lfs 3, 4(5)
  01ffdb8  fcmpu 0, 6, 4
  01ffdbc  bt 1, 0x1ffdc4
  01ffdc0  b 0x1ffed8
  01ffdc4  fsubs 7, 5, 6
  01ffdc8  fadds 5, 5, 6
  01ffdcc  addic 4, 1, 16
  01ffdd0  li 8, 2
  01ffdd4  addic 6, 4, 124
  01ffdd8  addic 5, 4, 108
  01ffddc  mtctr 8
  01ffde0  fdivs 5, 7, 5
  01ffde4  fmuls 6, 5, 5
  01ffde8  stfs 5, 136(1)
  01ffdec  stfs 5, 128(1)
  01ffdf0  stfs 5, 132(1)
  01ffdf4  stfs 5, 124(1)
  01ffdf8  lfs 8, 136(1)
  01ffdfc  lfs 9, 128(1)
  01ffe00  lfs 10, 132(1)
  01ffe04  fmuls 7, 6, 6
  01ffe08  fmuls 9, 9, 6
  01ffe0c  fmuls 8, 8, 7
  01ffe10  fmuls 5, 7, 7
  01ffe14  fmuls 7, 10, 7
  01ffe18  stfs 9, 128(1)
  01ffe1c  fmuls 6, 8, 6
  01ffe20  stfs 7, 132(1)
  01ffe24  stfs 6, 136(1)
  01ffe28  lfs 6, 108(4)
  01ffe2c  fmuls 6, 6, 5
  01ffe30  stfs 6, 124(4)
  01ffe34  lfs 6, 4(5)
  01ffe38  addic 5, 5, 8
  01ffe3c  fmuls 6, 6, 5
  01ffe40  addic 4, 4, 8
  01ffe44  stfs 6, 4(6)
  01ffe48  addic 6, 6, 8
  01ffe4c  bdnz 0x1ffe28
  01ffe50  li 6, 4
  01ffe54  ori 4, 1, 0
  01ffe58  mtctr 6
  01ffe5c  lis 5, 115
  01ffe60  addic 6, 4, 124
  01ffe64  addic 5, 5, 22752
  01ffe68  ori 7, 6, 0
  01ffe6c  lfs 5, 124(4)
  01ffe70  lfs 6, 0(5)
  01ffe74  fmuls 5, 5, 6
  01ffe78  lfs 6, 4(5)
  01ffe7c  addic 5, 5, 8
  01ffe80  stfs 5, 124(4)
  01ffe84  lfs 5, 4(6)
  01ffe88  addic 4, 4, 8
  01ffe8c  fmuls 5, 5, 6
  01ffe90  stfs 5, 4(6)
  01ffe94  addic 6, 6, 8
  01ffe98  bdnz 0x1ffe6c
  01ffe9c  ori 4, 1, 0
  01ffea0  mtctr 8
  01ffea4  lfs 5, 124(4)
  01ffea8  fadds 4, 4, 5
  01ffeac  addic 4, 4, 16
  01ffeb0  lfs 5, 4(7)
  01ffeb4  lfs 6, 8(7)
  01ffeb8  lfs 7, 12(7)
  01ffebc  addic 7, 7, 16
  01ffec0  fadds 4, 4, 5
  01ffec4  fadds 4, 4, 6
  01ffec8  fadds 4, 4, 7
  01ffecc  bdnz 0x1ffea4
  01ffed0  fadds 4, 4, 2
  01ffed4  fmadds 4, 4, 1, 3
  01ffed8  li 4, 1
  01ffedc  stfs 4, 68(28)
  01ffee0  lis 6, 32
  01ffee4  vspltisw 3, -1
  01ffee8  li 5, 8
  01ffeec  lis 7, 114
  01ffef0  stb 4, 32(28)
  01ffef4  lfs 1, 0(29)
  01ffef8  addi 4, 6, -1308
  01ffefc  vslw 3, 3, 3
  01fff00  stfs 1, 0(3)
  01fff04  li 6, -3056
  01fff08  lfs 1, 4(29)
  01fff0c  stfs 1, 4(3)
  01fff10  lfs 1, 8(29)
  01fff14  stfs 1, 8(3)
  01fff18  lfs 1, 12(29)
  01fff1c  stfs 1, 12(3)
  01fff20  lvlx 2, 5, 4
  01fff24  lvlx 4, 6, 7
  01fff28  vspltw 2, 2, 0
  01fff2c  li 4, 16
  01fff30  vmaddfp 2, 4, 2, 3
  01fff34  vctsxs 2, 2, 0
  01fff38  vspltw 2, 2, 0
  01fff3c  stvewx 2, 4, 3
  01fff40  ori 3, 28, 0
  01fff44  ld 0, 240(1)
  01fff48  mtlr 0
  01fff4c  ld 28, 192(1)
  01fff50  ld 29, 200(1)
  01fff54  ld 30, 208(1)
  01fff58  ld 31, 216(1)
  01fff5c  addi 1, 1, 224
  01fff60  blr

UpdateMoby_1209:   # 0x1fff88, 0x64c bytes
  01fff88  stdu 1, -288(1)
  01fff8c  mflr 0
  01fff90  std 0, 304(1)
  01fff94  stfd 28, 256(1)
  01fff98  stfd 29, 264(1)
  01fff9c  stfd 30, 272(1)
  01fffa0  stfd 31, 280(1)
  01fffa4  std 30, 240(1)
  01fffa8  lbz 4, 32(3)
  01fffac  std 28, 224(1)
  01fffb0  lwz 30, 120(3)
  01fffb4  li 28, 0
  01fffb8  lfs 2, 16(3)
  01fffbc  cmpwi 4, 1
  01fffc0  std 31, 248(1)
  01fffc4  lfs 1, 20(3)
  01fffc8  ori 31, 3, 0
  01fffcc  std 29, 232(1)
  01fffd0  lfs 28, 24(3)
  01fffd4  ori 29, 28, 0
  01fffd8  cmpwi 1, 4, 2
  01fffdc  lfs 30, 28(3)
  01fffe0  bt 2, 0x1fffe8
  01fffe4  bf 6, 0x200074
  01fffe8  lis 3, 151
  01fffec  addic 3, 3, -25376
  01ffff0  lfs 31, 132(3)
  01ffff4  lfs 29, 128(3)
  01ffff8  fsubs 31, 1, 31
  01ffffc  lfs 1, 136(3)
  0200000  fsubs 29, 2, 29
  0200004  fsubs 28, 28, 1
  0200008  lfs 2, 20(30)
  020000c  fmuls 1, 31, 31
  0200010  fmadds 1, 29, 29, 1
  0200014  fmadds 1, 28, 28, 1
  0200018  fsqrts 1, 1
  020001c  fcmpu 0, 1, 2
  0200020  cror 6, 1, 2
  0200024  bt 6, 0x200074
  0200028  addic 3, 1, 128
  020002c  addic 4, 31, 192
  0200030  bl 0x5010c0
  0200034  nop
  0200038  lfs 1, 148(1)
  020003c  lis 3, 32
  0200040  lfs 2, 132(1)
  0200044  fmuls 1, 1, 31
  0200048  lfs 3, 164(1)
  020004c  addi 3, 3, -152
  0200050  lfs 4, 180(1)
  0200054  fmadds 1, 2, 29, 1
  0200058  lfs 2, 0(3)
  020005c  fmadds 1, 3, 28, 1
  0200060  fmadds 1, 4, 30, 1
  0200064  fcmpu 0, 1, 2
  0200068  cror 6, 1, 2
  020006c  bt 6, 0x200074
  0200070  li 28, 1
  0200074  lbz 3, 32(31)
  0200078  cmpwi 3, 2
  020007c  cmpwi 6, 3, -1
  0200080  cmpwi 7, 3, 3
  0200084  bt 1, 0x200098
  0200088  cmpwi 1, 3, 0
  020008c  bf 25, 0x2005a4
  0200090  bf 5, 0x2000a8
  0200094  b 0x2001c0
  0200098  cmpwi 1, 3, 4
  020009c  bf 29, 0x20046c
  02000a0  bf 5, 0x200498
  02000a4  b 0x2005a4
  02000a8  lbz 3, 9(30)
  02000ac  cmpwi 3, 0
  02000b0  bf 2, 0x200188
  02000b4  addic 5, 1, 112
  02000b8  ori 3, 31, 0
  02000bc  li 4, 0
  02000c0  bl 0xf1114
  02000c4  nop
  02000c8  lfs 1, 20(31)
  02000cc  lfs 2, 116(1)
  02000d0  lfs 3, 16(31)
  02000d4  fsubs 1, 1, 2
  02000d8  lfs 2, 112(1)
  02000dc  fsubs 2, 3, 2
  02000e0  lfs 3, 24(31)
  02000e4  lfs 4, 120(1)
  02000e8  fsubs 3, 3, 4
  02000ec  fmuls 1, 1, 1
  02000f0  stb 29, 11(30)
  02000f4  addic 3, 1, 192
  02000f8  stw 31, 16(30)
  02000fc  li 5, 0
  0200100  li 6, 0
  0200104  fmadds 1, 2, 2, 1
  0200108  fmadds 1, 3, 3, 1
  020010c  fsqrts 1, 1
  0200110  stfs 1, 20(30)
  0200114  lbz 4, 33(31)
  0200118  bl 0x104800
  020011c  nop
  0200120  lwz 3, 192(1)
  0200124  cmpwi 3, 0
  0200128  bt 2, 0x200188
  020012c  cmpw 3, 31
  0200130  bt 2, 0x200158
  0200134  lhz 4, 166(3)
  0200138  cmpwi 4, 1209
  020013c  bf 2, 0x200158
  0200140  lwz 5, 120(3)
  0200144  li 4, 1
  0200148  stw 31, 16(5)
  020014c  stb 4, 9(5)
  0200150  lfs 1, 20(30)
  0200154  stfs 1, 20(5)
  0200158  lbz 7, 11(30)
  020015c  ori 4, 3, 0
  0200160  addic 3, 1, 192
  0200164  addic 7, 7, 1
  0200168  li 5, 0
  020016c  li 6, 0
  0200170  stb 7, 11(30)
  0200174  bl 0x10466c
  0200178  nop
  020017c  lwz 3, 192(1)
  0200180  cmpwi 3, 0
  0200184  bf 2, 0x20012c
  0200188  sth 29, 0(30)
  020018c  ori 3, 31, 0
  0200190  sth 29, 2(30)
  0200194  li 4, 0
  0200198  stb 29, 10(30)
  020019c  li 5, 0
  02001a0  sth 29, 4(30)
  02001a4  li 6, 0
  02001a8  sth 29, 6(30)
  02001ac  bl 0xf1ec8
  02001b0  nop
  02001b4  li 3, 1
  02001b8  stb 3, 32(31)
  02001bc  b 0x2005a4
  02001c0  lis 4, 165
  02001c4  lhz 5, 178(31)
  02001c8  addic 6, 4, 17860
  02001cc  extsh 4, 5
  02001d0  lbzx 6, 6, 4
  02001d4  cmpwi 6, 0
  02001d8  bf 2, 0x200220
  02001dc  lis 7, 151
  02001e0  lis 6, 161
  02001e4  srawi 4, 4, 5
  02001e8  addic 6, 6, -13028
  02001ec  sldi 4, 4, 2
  02001f0  lwz 7, -25488(7)
  02001f4  clrlwi 5, 5, 27
  02001f8  addc 4, 4, 6
  02001fc  slwi 6, 7, 8
  0200200  clrldi 4, 4, 32
  0200204  extsw 6, 6
  0200208  li 7, 1
  020020c  slw 5, 7, 5
  0200210  lwzx 4, 4, 6
  0200214  and 4, 4, 5
  0200218  cmpwi 4, 0
  020021c  bt 2, 0x200250
  0200220  lwz 4, 28(30)
  0200224  cmpwi 4, 0
  0200228  bt 2, 0x200250
  020022c  li 4, 4
  0200230  lbz 3, 33(31)
  0200234  bl 0x1042ec
  0200238  nop
  020023c  li 4, 4
  0200240  lwz 3, 24(30)
  0200244  sth 3, 0(30)
  0200248  stb 4, 32(31)
  020024c  b 0x2005a4
  0200250  lhz 4, 4(30)
  0200254  cmpwi 1, 28, 0
  0200258  cmpwi 4, 0
  020025c  crorc 2, 6, 2
  0200260  bt 2, 0x200340
  0200264  lwz 4, 16(30)
  0200268  lbz 5, 32(4)
  020026c  lwz 3, 120(4)
  0200270  cmpwi 5, 1
  0200274  bf 2, 0x2002f8
  0200278  lis 6, 32
  020027c  li 5, 2
  0200280  stb 29, 10(30)
  0200284  li 7, 4
  0200288  addi 6, 6, -152
  020028c  stb 5, 32(4)
  0200290  lwz 4, 12(3)
  0200294  lvlx 2, 7, 6
  0200298  cmpwi 4, 0
  020029c  vspltw 2, 2, 0
  02002a0  bf 1, 0x2002f0
  02002a4  li 4, 12
  02002a8  vspltisw 4, -1
  02002ac  lis 6, 32
  02002b0  addi 5, 4, 16
  02002b4  vslw 4, 4, 4
  02002b8  lvlx 2, 4, 30
  02002bc  addi 4, 6, -152
  02002c0  lvrx 3, 5, 30
  02002c4  li 5, 8
  02002c8  vor 2, 2, 3
  02002cc  vcfsx 2, 2, 0
  02002d0  lvlx 3, 5, 4
  02002d4  lis 4, 114
  02002d8  vspltw 3, 3, 0
  02002dc  li 5, -3056
  02002e0  lvlx 5, 5, 4
  02002e4  vaddfp 2, 2, 3
  02002e8  vmaddfp 2, 5, 2, 4
  02002ec  vctsxs 2, 2, 0
  02002f0  vsplth 2, 2, 1
  02002f4  stvehx 2, 0, 3
  02002f8  ori 6, 3, 0
  02002fc  li 3, 3
  0200300  li 4, 49
  0200304  ori 5, 31, 0
  0200308  lbz 7, 10(6)
  020030c  addic 7, 7, 1
  0200310  stb 7, 10(6)
  0200314  bl 0x15d12c
  0200318  nop
  020031c  ori 3, 31, 0
  0200320  li 4, 0
  0200324  li 5, 255
  0200328  li 6, 0
  020032c  bl 0xf1ec8
  0200330  nop
  0200334  li 3, 1
  0200338  sth 3, 4(30)
  020033c  lbz 3, 32(31)
  0200340  cmpwi 3, 2
  0200344  bf 2, 0x2005a4
  0200348  lbz 3, 10(30)
  020034c  lbz 4, 11(30)
  0200350  cmpw 3, 4
  0200354  bt 0, 0x200390
  0200358  lbz 3, 33(31)
  020035c  li 4, 4
  0200360  bl 0x1042ec
  0200364  nop
  0200368  li 3, 1
  020036c  li 4, 49
  0200370  ori 5, 31, 0
  0200374  bl 0x15d12c
  0200378  nop
  020037c  li 3, 4
  0200380  lwz 4, 24(30)
  0200384  sth 4, 0(30)
  0200388  stb 3, 32(31)
  020038c  b 0x2005a4
  0200390  ori 3, 30, 0
  0200394  bl 0x4fffb4
  0200398  nop
  020039c  cmpwi 3, 0
  02003a0  bt 2, 0x2003d4
  02003a4  stb 29, 10(30)
  02003a8  li 3, 2
  02003ac  li 4, 49
  02003b0  sth 29, 4(30)
  02003b4  ori 5, 31, 0
  02003b8  bl 0x15d12c
  02003bc  nop
  02003c0  lbz 3, 33(31)
  02003c4  li 4, 3
  02003c8  bl 0x1042ec
  02003cc  nop
  02003d0  b 0x2005a4
  02003d4  addic 3, 30, 2
  02003d8  bl 0x4fffb4
  02003dc  nop
  02003e0  cmpwi 3, 0
  02003e4  bt 2, 0x2005a4
  02003e8  li 3, 0
  02003ec  li 4, 49
  02003f0  ori 5, 31, 0
  02003f4  bl 0x15d12c
  02003f8  nop
  02003fc  lis 3, 32
  0200400  lis 4, 114
  0200404  addi 3, 3, -152
  0200408  lfs 1, 12(3)
  020040c  lfs 2, -3056(4)
  0200410  fmuls 1, 2, 1
  0200414  fctiwz 1, 1
  0200418  stfd 1, 200(1)
  020041c  lfs 1, 16(3)
  0200420  lwz 31, 204(1)
  0200424  fmuls 1, 2, 1
  0200428  lhz 4, 0(30)
  020042c  extsh 4, 4
  0200430  fctiwz 1, 1
  0200434  stfd 1, 200(1)
  0200438  lfs 1, 20(3)
  020043c  lwz 3, 204(1)
  0200440  fmuls 1, 2, 1
  0200444  fctiwz 1, 1
  0200448  stfd 1, 200(1)
  020044c  lwz 5, 204(1)
  0200450  divw 4, 4, 5
  0200454  addc 3, 3, 4
  0200458  cmpw 31, 3
  020045c  bt 0, 0x200464
  0200460  ori 31, 3, 0
  0200464  sth 31, 2(30)
  0200468  b 0x2005a4
  020046c  ori 3, 31, 0
  0200470  li 4, 0
  0200474  li 5, 0
  0200478  li 6, 0
  020047c  bl 0xf1ec8
  0200480  nop
  0200484  li 3, 1
  0200488  stb 29, 10(30)
  020048c  sth 29, 4(30)
  0200490  stb 3, 32(31)
  0200494  b 0x2005a4
  0200498  addic 3, 30, 6
  020049c  bl 0x4fffb4
  02004a0  nop
  02004a4  cmpwi 3, 0
  02004a8  bt 2, 0x200534
  02004ac  lis 3, 32
  02004b0  vspltisw 2, -1
  02004b4  li 5, 24
  02004b8  addi 3, 3, -152
  02004bc  lis 4, 114
  02004c0  li 6, -3056
  02004c4  vslw 2, 2, 2
  02004c8  lvlx 3, 5, 3
  02004cc  li 3, 6
  02004d0  vspltw 3, 3, 0
  02004d4  lvlx 4, 6, 4
  02004d8  lbz 4, 8(30)
  02004dc  vmaddfp 2, 4, 3, 2
  02004e0  cmpwi 4, 0
  02004e4  vctsxs 2, 2, 0
  02004e8  vsplth 2, 2, 1
  02004ec  stvehx 2, 3, 30
  02004f0  bt 2, 0x200514
  02004f4  ori 3, 31, 0
  02004f8  li 4, 0
  02004fc  li 5, 255
  0200500  li 6, 0
  0200504  bl 0xf1ec8
  0200508  nop
  020050c  stb 29, 8(30)
  0200510  b 0x200534
  0200514  ori 3, 31, 0
  0200518  li 4, 255
  020051c  li 5, 255
  0200520  li 6, 255
  0200524  bl 0xf1ec8
  0200528  nop
  020052c  li 3, 1
  0200530  stb 3, 8(30)
  0200534  lhz 6, 178(31)
  0200538  lis 4, 151
  020053c  lis 3, 161
  0200540  extsh 7, 6
  0200544  addic 3, 3, -13028
  0200548  srawi 7, 7, 5
  020054c  lwz 4, -25488(4)
  0200550  lis 5, 165
  0200554  sldi 7, 7, 2
  0200558  slwi 4, 4, 8
  020055c  addc 3, 7, 3
  0200560  extsh 7, 6
  0200564  extsw 4, 4
  0200568  srawi 7, 7, 5
  020056c  clrldi 3, 3, 32
  0200570  addic 5, 5, 19920
  0200574  sldi 7, 7, 2
  0200578  clrlwi 8, 6, 27
  020057c  li 9, 1
  0200580  clrlwi 6, 6, 27
  0200584  lwzx 10, 3, 4
  0200588  slw 8, 9, 8
  020058c  slw 6, 9, 6
  0200590  lwzx 9, 5, 7
  0200594  or 8, 10, 8
  0200598  or 6, 9, 6
  020059c  stwx 8, 3, 4
  02005a0  stwx 6, 5, 7
  02005a4  ld 0, 304(1)
  02005a8  mtlr 0
  02005ac  lfd 28, 256(1)
  02005b0  lfd 29, 264(1)
  02005b4  lfd 30, 272(1)
  02005b8  lfd 31, 280(1)
  02005bc  ld 28, 224(1)
  02005c0  ld 29, 232(1)
  02005c4  ld 30, 240(1)
  02005c8  ld 31, 248(1)
  02005cc  addi 1, 1, 288
  02005d0  blr

M1209_002005d4:   # 0x2005d4, 0x14 bytes
  02005d4  lis 3, 118
  02005d8  lis 4, 1
  02005dc  addic 3, 3, 26040
  02005e0  stw 4, 72(3)
  02005e4  blr

M1209_00200608:   # 0x200608, 0x61c bytes
  0200608  stdu 1, -576(1)
  020060c  mflr 0
  0200610  std 0, 592(1)
  0200614  stfd 30, 560(1)
  0200618  stfd 31, 568(1)
  020061c  lis 4, 161
  0200620  std 31, 552(1)
  0200624  lwz 4, 1800(4)
  0200628  lwz 31, 120(3)
  020062c  std 30, 544(1)
  0200630  std 29, 536(1)
  0200634  std 28, 528(1)
  0200638  std 27, 520(1)
  020063c  std 26, 512(1)
  0200640  cmpwi 4, 2
  0200644  bt 2, 0x200bf4
  0200648  li 30, 0
  020064c  ori 28, 30, 0
  0200650  lfs 1, 40(31)
  0200654  lfs 2, 32(31)
  0200658  fmuls 1, 1, 1
  020065c  lis 3, 32
  0200660  lwz 4, 36(31)
  0200664  addi 3, 3, 1512
  0200668  lis 29, 115
  020066c  rlwinm 4, 4, 3, 29, 29
  0200670  addic 29, 29, 22784
  0200674  fmadds 1, 2, 2, 1
  0200678  lfs 2, 36(31)
  020067c  fabs 3, 2
  0200680  fsqrts 1, 1
  0200684  fabs 2, 1
  0200688  stfs 1, 420(1)
  020068c  fsubs 1, 2, 3
  0200690  stfs 1, 424(1)
  0200694  lwz 5, 420(1)
  0200698  lfs 30, 0(3)
  020069c  lfs 1, 420(1)
  02006a0  lfs 31, 4(3)
  02006a4  fabs 4, 1
  02006a8  lwz 3, 424(1)
  02006ac  lfs 1, 424(1)
  02006b0  rlwimi 4, 3, 2, 30, 30
  02006b4  fsub 5, 1, 30
  02006b8  fsub 6, 1, 30
  02006bc  rlwimi 4, 5, 4, 28, 28
  02006c0  ori 3, 29, 0
  02006c4  rlwimi 3, 4, 2, 26, 28
  02006c8  slwi 4, 4, 2
  02006cc  clrldi 3, 3, 32
  02006d0  fsel 4, 5, 4, 3
  02006d4  lfsx 1, 29, 4
  02006d8  fsel 3, 6, 3, 2
  02006dc  lfs 2, 4(3)
  02006e0  fcmpu 0, 4, 30
  02006e4  bt 1, 0x2006f0
  02006e8  fmr 1, 30
  02006ec  b 0x200808
  02006f0  fsubs 5, 3, 4
  02006f4  fadds 3, 3, 4
  02006f8  addic 3, 1, 16
  02006fc  li 7, 2
  0200700  addic 4, 3, 444
  0200704  addic 5, 3, 460
  0200708  mtctr 7
  020070c  fdivs 3, 5, 3
  0200710  fmuls 4, 3, 3
  0200714  stfs 3, 472(1)
  0200718  stfs 3, 464(1)
  020071c  stfs 3, 468(1)
  0200720  stfs 3, 460(1)
  0200724  lfs 6, 472(1)
  0200728  lfs 7, 464(1)
  020072c  lfs 8, 468(1)
  0200730  fmuls 5, 4, 4
  0200734  fmuls 7, 7, 4
  0200738  fmuls 6, 6, 5
  020073c  fmuls 3, 5, 5
  0200740  fmuls 5, 8, 5
  0200744  stfs 7, 464(1)
  0200748  fmuls 4, 6, 4
  020074c  stfs 5, 468(1)
  0200750  stfs 4, 472(1)
  0200754  lfs 4, 444(3)
  0200758  fmuls 4, 4, 3
  020075c  stfs 4, 460(3)
  0200760  lfs 4, 4(4)
  0200764  addic 3, 3, 8
  0200768  addic 4, 4, 8
  020076c  fmuls 4, 4, 3
  0200770  stfs 4, 4(5)
  0200774  addic 5, 5, 8
  0200778  bdnz 0x200754
  020077c  li 5, 4
  0200780  ori 3, 1, 0
  0200784  mtctr 5
  0200788  lis 4, 115
  020078c  addic 5, 3, 460
  0200790  addic 4, 4, 22752
  0200794  ori 6, 5, 0
  0200798  lfs 3, 460(3)
  020079c  lfs 4, 0(4)
  02007a0  fmuls 3, 3, 4
  02007a4  lfs 4, 4(4)
  02007a8  addic 4, 4, 8
  02007ac  stfs 3, 460(3)
  02007b0  lfs 3, 4(5)
  02007b4  addic 3, 3, 8
  02007b8  fmuls 3, 3, 4
  02007bc  stfs 3, 4(5)
  02007c0  addic 5, 5, 8
  02007c4  bdnz 0x200798
  02007c8  fmr 3, 30
  02007cc  ori 3, 1, 0
  02007d0  mtctr 7
  02007d4  lfs 4, 460(3)
  02007d8  fadds 3, 3, 4
  02007dc  addic 3, 3, 16
  02007e0  lfs 4, 4(6)
  02007e4  lfs 5, 8(6)
  02007e8  lfs 6, 12(6)
  02007ec  addic 6, 6, 16
  02007f0  fadds 3, 3, 4
  02007f4  fadds 3, 3, 5
  02007f8  fadds 3, 3, 6
  02007fc  bdnz 0x2007d4
  0200800  fadds 3, 3, 31
  0200804  fmadds 1, 3, 1, 2
  0200808  lis 3, 32
  020080c  fneg 1, 1
  0200810  addi 3, 3, 1512
  0200814  lfs 2, 8(3)
  0200818  bl 0x502578
  020081c  nop
  0200820  stfs 1, 112(1)
  0200824  lwz 3, 40(31)
  0200828  lwz 4, 32(31)
  020082c  lfs 1, 40(31)
  0200830  lfs 2, 32(31)
  0200834  fabs 3, 1
  0200838  fabs 5, 2
  020083c  rlwinm 4, 4, 3, 29, 29
  0200840  fsubs 1, 3, 5
  0200844  stfs 1, 416(1)
  0200848  lwz 5, 416(1)
  020084c  lfs 1, 416(1)
  0200850  rlwimi 4, 5, 2, 30, 30
  0200854  fsub 4, 1, 30
  0200858  fsub 6, 1, 30
  020085c  rlwimi 4, 3, 4, 28, 28
  0200860  ori 3, 29, 0
  0200864  rlwimi 3, 4, 2, 26, 28
  0200868  slwi 4, 4, 2
  020086c  clrldi 3, 3, 32
  0200870  fsel 4, 4, 3, 5
  0200874  lfsx 1, 29, 4
  0200878  lfs 2, 4(3)
  020087c  fsel 3, 6, 5, 3
  0200880  fcmpu 0, 4, 30
  0200884  bt 1, 0x20088c
  0200888  b 0x2009a0
  020088c  fsubs 5, 3, 4
  0200890  fadds 3, 3, 4
  0200894  addic 3, 1, 16
  0200898  li 6, 2
  020089c  addic 5, 3, 428
  02008a0  addic 4, 3, 412
  02008a4  mtctr 6
  02008a8  fdivs 3, 5, 3
  02008ac  fmuls 4, 3, 3
  02008b0  stfs 3, 440(1)
  02008b4  stfs 3, 432(1)
  02008b8  stfs 3, 436(1)
  02008bc  stfs 3, 428(1)
  02008c0  lfs 6, 440(1)
  02008c4  lfs 7, 432(1)
  02008c8  lfs 8, 436(1)
  02008cc  fmuls 5, 4, 4
  02008d0  fmuls 7, 7, 4
  02008d4  fmuls 6, 6, 5
  02008d8  fmuls 3, 5, 5
  02008dc  fmuls 5, 8, 5
  02008e0  stfs 7, 432(1)
  02008e4  fmuls 4, 6, 4
  02008e8  stfs 5, 436(1)
  02008ec  stfs 4, 440(1)
  02008f0  lfs 4, 412(3)
  02008f4  fmuls 4, 4, 3
  02008f8  stfs 4, 428(3)
  02008fc  lfs 4, 4(4)
  0200900  addic 4, 4, 8
  0200904  fmuls 4, 4, 3
  0200908  addic 3, 3, 8
  020090c  stfs 4, 4(5)
  0200910  addic 5, 5, 8
  0200914  bdnz 0x2008f0
  0200918  li 5, 4
  020091c  ori 3, 1, 0
  0200920  mtctr 5
  0200924  lis 4, 115
  0200928  addic 5, 3, 428
  020092c  addic 4, 4, 22752
  0200930  ori 7, 5, 0
  0200934  lfs 3, 428(3)
  0200938  lfs 4, 0(4)
  020093c  fmuls 3, 3, 4
  0200940  lfs 4, 4(4)
  0200944  addic 4, 4, 8
  0200948  stfs 3, 428(3)
  020094c  lfs 3, 4(5)
  0200950  addic 3, 3, 8
  0200954  fmuls 3, 3, 4
  0200958  stfs 3, 4(5)
  020095c  addic 5, 5, 8
  0200960  bdnz 0x200934
  0200964  ori 3, 1, 0
  0200968  mtctr 6
  020096c  lfs 3, 428(3)
  0200970  lfs 4, 4(7)
  0200974  fadds 3, 30, 3
  0200978  lfs 5, 8(7)
  020097c  addic 3, 3, 16
  0200980  lfs 30, 12(7)
  0200984  addic 7, 7, 16
  0200988  fadds 3, 3, 4
  020098c  fadds 3, 3, 5
  0200990  fadds 30, 3, 30
  0200994  bdnz 0x20096c
  0200998  fadds 30, 30, 31
  020099c  fmadds 30, 30, 1, 2
  02009a0  lis 3, 32
  02009a4  stfs 30, 116(1)
  02009a8  lis 29, 114
  02009ac  stw 28, 120(1)
  02009b0  addi 27, 3, 1512
  02009b4  stw 28, 124(1)
  02009b8  stw 28, 128(1)
  02009bc  lis 3, 161
  02009c0  lfs 1, 12(27)
  02009c4  lfs 2, -3056(29)
  02009c8  lwz 3, 1808(3)
  02009cc  fmuls 1, 2, 1
  02009d0  fctiwz 1, 1
  02009d4  stfd 1, 496(1)
  02009d8  lwz 4, 500(1)
  02009dc  divw 5, 3, 4
  02009e0  mullw 4, 5, 4
  02009e4  subc 3, 3, 4
  02009e8  extsw 3, 3
  02009ec  bl 0x502730
  02009f0  nop
  02009f4  lfs 2, 16(27)
  02009f8  lfs 3, 20(27)
  02009fc  lfs 4, -3056(29)
  0200a00  fmuls 1, 1, 2
  0200a04  fmuls 2, 4, 3
  0200a08  fdivs 1, 1, 2
  0200a0c  bl 0x502648
  0200a10  nop
  0200a14  clrlwi 29, 30, 31
  0200a18  cmpwi 29, 0
  0200a1c  fmr 30, 1
  0200a20  lfs 1, 24(27)
  0200a24  fmr 31, 1
  0200a28  bt 2, 0x200a38
  0200a2c  lis 3, 32
  0200a30  addi 3, 3, 1512
  0200a34  lfs 1, 28(3)
  0200a38  fmuls 1, 30, 1
  0200a3c  addic 27, 1, 208
  0200a40  stw 28, 136(1)
  0200a44  addic 4, 1, 128
  0200a48  stw 28, 140(1)
  0200a4c  ori 3, 27, 0
  0200a50  stfs 1, 132(1)
  0200a54  bl 0x500ca4
  0200a58  nop
  0200a5c  addic 26, 1, 144
  0200a60  addic 4, 1, 112
  0200a64  ori 3, 26, 0
  0200a68  bl 0x500ca4
  0200a6c  nop
  0200a70  ori 3, 26, 0
  0200a74  ori 4, 26, 0
  0200a78  ori 5, 27, 0
  0200a7c  bl 0x50162c
  0200a80  nop
  0200a84  li 3, 0
  0200a88  lfs 1, 16(31)
  0200a8c  lis 4, -32640
  0200a90  subc 3, 3, 29
  0200a94  stfs 1, 192(1)
  0200a98  cntlzw 3, 3
  0200a9c  lfs 1, 20(31)
  0200aa0  li 5, 17
  0200aa4  li 6, 18
  0200aa8  sldi 3, 3, 58
  0200aac  stfs 1, 196(1)
  0200ab0  lfs 1, 24(31)
  0200ab4  ori 4, 4, 32896
  0200ab8  subc 5, 5, 6
  0200abc  sradi 3, 3, 63
  0200ac0  stfs 1, 200(1)
  0200ac4  and 3, 3, 5
  0200ac8  lfs 1, 28(31)
  0200acc  stw 4, 336(1)
  0200ad0  addc 3, 6, 3
  0200ad4  stfs 1, 204(1)
  0200ad8  stw 4, 340(1)
  0200adc  stw 4, 344(1)
  0200ae0  stw 4, 348(1)
  0200ae4  bl 0x685c4
  0200ae8  nop
  0200aec  std 3, 392(1)
  0200af0  li 3, 0
  0200af4  lis 9, 0
  0200af8  li 4, 0
  0200afc  li 5, 1
  0200b00  li 6, 1
  0200b04  li 7, 1
  0200b08  li 8, 0
  0200b0c  ori 9, 9, 65424
  0200b10  bl 0x502fd4
  0200b14  nop
  0200b18  std 3, 400(1)
  0200b1c  li 4, 0
  0200b20  li 3, 0
  0200b24  li 5, 0
  0200b28  li 6, 0
  0200b2c  li 7, 0
  0200b30  li 8, 0
  0200b34  bl 0x502f08
  0200b38  nop
  0200b3c  std 3, 384(1)
  0200b40  li 3, 0
  0200b44  li 4, 2
  0200b48  li 5, 0
  0200b4c  li 6, 1
  0200b50  li 7, 128
  0200b54  bl 0x502ea8
  0200b58  nop
  0200b5c  lis 4, -16512
  0200b60  std 3, 408(1)
  0200b64  li 5, 1
  0200b68  stw 28, 276(1)
  0200b6c  lis 3, 161
  0200b70  li 7, 9
  0200b74  stw 4, 272(1)
  0200b78  stfs 31, 280(1)
  0200b7c  addic 6, 3, 24396
  0200b80  stfs 31, 284(1)
  0200b84  addic 3, 1, 272
  0200b88  stfs 31, 288(1)
  0200b8c  stw 28, 292(1)
  0200b90  stfs 31, 296(1)
  0200b94  stfs 31, 300(1)
  0200b98  stw 4, 304(1)
  0200b9c  stw 28, 308(1)
  0200ba0  stw 4, 312(1)
  0200ba4  stfs 31, 316(1)
  0200ba8  stfs 31, 320(1)
  0200bac  stw 28, 324(1)
  0200bb0  stw 4, 328(1)
  0200bb4  stfs 31, 332(1)
  0200bb8  stw 28, 352(1)
  0200bbc  ori 4, 26, 0
  0200bc0  stfs 31, 356(1)
  0200bc4  stfs 31, 360(1)
  0200bc8  stfs 31, 364(1)
  0200bcc  stw 28, 368(1)
  0200bd0  stw 28, 372(1)
  0200bd4  stfs 31, 376(1)
  0200bd8  stw 28, 380(1)
  0200bdc  lwz 6, 28(6)
  0200be0  bl 0x72280
  0200be4  nop
  0200be8  addic 30, 30, 1
  0200bec  cmpwi 30, 2
  0200bf0  bt 0, 0x200650
  0200bf4  ld 0, 592(1)
  0200bf8  mtlr 0
  0200bfc  lfd 30, 560(1)
  0200c00  lfd 31, 568(1)
  0200c04  ld 26, 512(1)
  0200c08  ld 27, 520(1)
  0200c0c  ld 28, 528(1)
  0200c10  ld 29, 536(1)
  0200c14  ld 30, 544(1)
  0200c18  ld 31, 552(1)
  0200c1c  addi 1, 1, 576
  0200c20  blr
