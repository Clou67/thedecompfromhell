# game/update/moby1297.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1297_0023f9f8:   # 0x23f9f8, 0x270 bytes
  023f9f8  stdu 1, -224(1)
  023f9fc  mflr 0
  023fa00  std 0, 240(1)
  023fa04  stfd 27, 184(1)
  023fa08  stfd 28, 192(1)
  023fa0c  stfd 29, 200(1)
  023fa10  stfd 30, 208(1)
  023fa14  stfd 31, 216(1)
  023fa18  lis 4, 149
  023fa1c  lfs 1, 20(3)
  023fa20  addic 4, 4, 5056
  023fa24  lis 5, 36
  023fa28  lfs 2, 324(4)
  023fa2c  lfs 3, 320(4)
  023fa30  fsubs 2, 2, 1
  023fa34  lfs 4, 16(3)
  023fa38  lfs 5, 328(4)
  023fa3c  fsubs 3, 3, 4
  023fa40  lfs 6, 24(3)
  023fa44  fsubs 5, 5, 6
  023fa48  addi 5, 5, -1568
  023fa4c  fmuls 7, 2, 2
  023fa50  stfs 3, 112(1)
  023fa54  stfs 2, 116(1)
  023fa58  lfs 8, 332(4)
  023fa5c  fmadds 7, 3, 3, 7
  023fa60  stfs 5, 120(1)
  023fa64  stfs 8, 124(1)
  023fa68  lfs 8, 4(5)
  023fa6c  lfs 9, 0(5)
  023fa70  fmadds 7, 5, 5, 7
  023fa74  fsqrts 7, 7
  023fa78  std 30, 168(1)
  023fa7c  std 29, 160(1)
  023fa80  lfs 10, 8(5)
  023fa84  li 30, 0
  023fa88  std 31, 176(1)
  023fa8c  lwz 29, 120(3)
  023fa90  ori 31, 29, 0
  023fa94  fdivs 8, 8, 7
  023fa98  fsub 11, 9, 7
  023fa9c  fsub 12, 9, 7
  023faa0  fsub 31, 9, 7
  023faa4  fsub 13, 7, 9
  023faa8  fsub 0, 7, 9
  023faac  fsub 7, 7, 9
  023fab0  fmuls 2, 2, 8
  023fab4  fmuls 3, 3, 8
  023fab8  fmuls 5, 5, 8
  023fabc  fsel 8, 11, 9, 2
  023fac0  fsel 11, 12, 9, 3
  023fac4  fsel 12, 31, 9, 5
  023fac8  fsel 2, 13, 8, 2
  023facc  fsel 3, 0, 11, 3
  023fad0  fsel 5, 7, 12, 5
  023fad4  fmuls 7, 2, 2
  023fad8  fadds 4, 3, 4
  023fadc  fadds 1, 2, 1
  023fae0  fadds 6, 5, 6
  023fae4  fmadds 7, 3, 3, 7
  023fae8  stfs 4, 112(1)
  023faec  stfs 1, 116(1)
  023faf0  fmadds 7, 5, 5, 7
  023faf4  stfs 6, 120(1)
  023faf8  lfs 27, 12(5)
  023fafc  lfs 28, 16(5)
  023fb00  fsqrts 7, 7
  023fb04  fdivs 1, 10, 7
  023fb08  fsub 4, 9, 7
  023fb0c  fsub 6, 9, 7
  023fb10  fsub 8, 9, 7
  023fb14  fsub 29, 7, 9
  023fb18  fsub 30, 7, 9
  023fb1c  fsub 31, 7, 9
  023fb20  fmuls 5, 5, 1
  023fb24  fmuls 2, 2, 1
  023fb28  fmuls 1, 3, 1
  023fb2c  fsel 3, 4, 9, 5
  023fb30  fsel 4, 6, 9, 2
  023fb34  fsel 6, 8, 9, 1
  023fb38  fsel 29, 29, 3, 5
  023fb3c  std 28, 152(1)
  023fb40  std 27, 144(1)
  023fb44  fsel 30, 30, 4, 2
  023fb48  fsel 31, 31, 6, 1
  023fb4c  extsw 3, 30
  023fb50  lis 4, 121
  023fb54  std 3, 128(1)
  023fb58  lis 3, 121
  023fb5c  lwz 3, -8096(3)
  023fb60  lwz 4, -8092(4)
  023fb64  lfd 1, 128(1)
  023fb68  extsw 4, 4
  023fb6c  fcfid 1, 1
  023fb70  extsw 3, 3
  023fb74  frsp 1, 1
  023fb78  fmuls 1, 1, 27
  023fb7c  bl 0x5027bc
  023fb80  nop
  023fb84  lbz 4, 16(31)
  023fb88  lbz 5, 20(31)
  023fb8c  ori 28, 3, 0
  023fb90  addc 4, 4, 5
  023fb94  clrlwi 5, 4, 24
  023fb98  clrldi 5, 5, 32
  023fb9c  stb 4, 16(31)
  023fba0  std 5, 128(1)
  023fba4  lfd 1, 128(1)
  023fba8  fcfid 1, 1
  023fbac  frsp 1, 1
  023fbb0  bl 0x502758
  023fbb4  nop
  023fbb8  lbz 4, 24(31)
  023fbbc  clrlwi 27, 3, 24
  023fbc0  ori 3, 4, 0
  023fbc4  bl 0x502730
  023fbc8  nop
  023fbcc  lfs 2, 28(29)
  023fbd0  addic 3, 1, 112
  023fbd4  fmuls 1, 2, 1
  023fbd8  ori 4, 28, 0
  023fbdc  ori 5, 27, 0
  023fbe0  li 6, 53
  023fbe4  li 7, 1
  023fbe8  li 8, 2
  023fbec  li 10, 0
  023fbf0  fmuls 1, 1, 28
  023fbf4  bl 0x130ed0
  023fbf8  nop
  023fbfc  lfs 1, 112(1)
  023fc00  lfs 2, 116(1)
  023fc04  addic 30, 30, 1
  023fc08  fadds 1, 1, 31
  023fc0c  lfs 3, 120(1)
  023fc10  fadds 2, 2, 30
  023fc14  cmpwi 30, 4
  023fc18  fadds 3, 3, 29
  023fc1c  addic 31, 31, 1
  023fc20  stfs 1, 112(1)
  023fc24  stfs 2, 116(1)
  023fc28  stfs 3, 120(1)
  023fc2c  bt 0, 0x23fb4c
  023fc30  ld 0, 240(1)
  023fc34  mtlr 0
  023fc38  lfd 27, 184(1)
  023fc3c  lfd 28, 192(1)
  023fc40  lfd 29, 200(1)
  023fc44  lfd 30, 208(1)
  023fc48  lfd 31, 216(1)
  023fc4c  ld 27, 144(1)
  023fc50  ld 28, 152(1)
  023fc54  ld 29, 160(1)
  023fc58  ld 30, 168(1)
  023fc5c  ld 31, 176(1)
  023fc60  addi 1, 1, 224
  023fc64  blr

UpdateMoby_1297:   # 0x23fc90, 0x398 bytes
  023fc90  stdu 1, -320(1)
  023fc94  mflr 0
  023fc98  std 0, 336(1)
  023fc9c  stfd 30, 304(1)
  023fca0  stfd 31, 312(1)
  023fca4  std 31, 296(1)
  023fca8  std 30, 288(1)
  023fcac  ori 31, 3, 0
  023fcb0  std 29, 280(1)
  023fcb4  std 28, 272(1)
  023fcb8  std 27, 264(1)
  023fcbc  std 26, 256(1)
  023fcc0  std 25, 248(1)
  023fcc4  std 24, 240(1)
  023fcc8  lwz 30, 120(31)
  023fccc  bl 0x23f9f8
  023fcd0  lbz 3, 32(31)
  023fcd4  cmpwi 3, 1
  023fcd8  bt 1, 0x23fce8
  023fcdc  cmpwi 3, 0
  023fce0  bf 1, 0x23fff0
  023fce4  b 0x23fcf4
  023fce8  cmpwi 3, 2
  023fcec  bf 1, 0x23fd9c
  023fcf0  b 0x23fff0
  023fcf4  addic 3, 30, 32
  023fcf8  bl 0x4fff60
  023fcfc  nop
  023fd00  cmpwi 3, 0
  023fd04  bt 2, 0x23fd78
  023fd08  lis 3, 36
  023fd0c  lis 29, 114
  023fd10  addi 3, 3, -920
  023fd14  lfs 31, 0(3)
  023fd18  lfs 1, -3056(29)
  023fd1c  fmuls 2, 1, 31
  023fd20  addic 3, 31, 44
  023fd24  lwz 4, 36(31)
  023fd28  lfs 3, 36(4)
  023fd2c  fmr 1, 3
  023fd30  fctidz 2, 2
  023fd34  fcfid 2, 2
  023fd38  frsp 2, 2
  023fd3c  fdivs 2, 3, 2
  023fd40  bl 0x109af0
  023fd44  nop
  023fd48  lfs 1, -3056(29)
  023fd4c  fmuls 2, 1, 31
  023fd50  lis 4, 121
  023fd54  addic 3, 30, 28
  023fd58  lfs 3, -8088(4)
  023fd5c  fmr 1, 3
  023fd60  fctidz 2, 2
  023fd64  fcfid 2, 2
  023fd68  frsp 2, 2
  023fd6c  fdivs 2, 3, 2
  023fd70  bl 0x109af0
  023fd74  nop
  023fd78  addic 3, 30, 40
  023fd7c  bl 0x4fff60
  023fd80  nop
  023fd84  cmpwi 3, 0
  023fd88  bt 2, 0x23fff0
  023fd8c  ori 3, 31, 0
  023fd90  bl 0xefb38
  023fd94  nop
  023fd98  b 0x23fff0
  023fd9c  lis 29, 121
  023fda0  lis 28, 114
  023fda4  lis 27, 121
  023fda8  addic 26, 1, 208
  023fdac  lfs 1, -8052(29)
  023fdb0  ori 3, 26, 0
  023fdb4  lfs 2, -3052(28)
  023fdb8  lfs 3, -8048(27)
  023fdbc  fmuls 1, 1, 2
  023fdc0  fmuls 2, 3, 2
  023fdc4  bl 0xfea60
  023fdc8  nop
  023fdcc  lfs 1, -8052(29)
  023fdd0  addic 25, 1, 224
  023fdd4  lfs 2, -3052(28)
  023fdd8  lfs 3, -8048(27)
  023fddc  fmuls 1, 1, 2
  023fde0  ori 3, 25, 0
  023fde4  fmuls 2, 3, 2
  023fde8  bl 0xfea60
  023fdec  nop
  023fdf0  lis 3, 121
  023fdf4  lis 4, 121
  023fdf8  lis 5, 36
  023fdfc  lis 29, 121
  023fe00  lis 28, 121
  023fe04  lfs 1, -8044(3)
  023fe08  addi 3, 5, -920
  023fe0c  lfs 2, -8040(4)
  023fe10  stfs 1, 220(1)
  023fe14  stfs 2, 236(1)
  023fe18  lfs 30, 4(3)
  023fe1c  lfs 31, 8(3)
  023fe20  lwz 3, -8036(29)
  023fe24  lwz 4, -8032(28)
  023fe28  extsw 27, 3
  023fe2c  extsw 24, 4
  023fe30  fmr 1, 30
  023fe34  fmr 2, 31
  023fe38  bl 0xfcbe8
  023fe3c  nop
  023fe40  ori 3, 27, 0
  023fe44  ori 4, 24, 0
  023fe48  bl 0x5027bc
  023fe4c  nop
  023fe50  lwz 4, -8036(29)
  023fe54  ori 27, 3, 0
  023fe58  fmr 1, 30
  023fe5c  lwz 3, -8032(28)
  023fe60  extsw 29, 4
  023fe64  fmr 2, 31
  023fe68  extsw 28, 3
  023fe6c  bl 0xfcbe8
  023fe70  nop
  023fe74  ori 4, 28, 0
  023fe78  ori 3, 29, 0
  023fe7c  bl 0x5027bc
  023fe80  nop
  023fe84  lis 4, 121
  023fe88  lis 5, 121
  023fe8c  lis 6, 121
  023fe90  lis 10, 121
  023fe94  addic 29, 31, 16
  023fe98  lwz 8, -8028(4)
  023fe9c  lwz 9, -8024(5)
  023fea0  ori 7, 3, 0
  023fea4  lwz 5, -8056(6)
  023fea8  ori 3, 29, 0
  023feac  lwz 10, -8020(10)
  023feb0  extsw 8, 8
  023feb4  extsw 11, 5
  023feb8  extsw 9, 9
  023febc  ori 4, 26, 0
  023fec0  ori 5, 25, 0
  023fec4  std 11, 112(1)
  023fec8  extsw 10, 10
  023fecc  ori 6, 27, 0
  023fed0  bl 0x1206e8
  023fed4  nop
  023fed8  lfs 1, 16(31)
  023fedc  lfs 2, 20(31)
  023fee0  stfs 1, 192(1)
  023fee4  lfs 3, 24(31)
  023fee8  stfs 2, 196(1)
  023feec  lfs 4, 28(31)
  023fef0  stfs 3, 200(1)
  023fef4  stfs 4, 204(1)
  023fef8  lfs 4, 0(30)
  023fefc  fadds 1, 1, 4
  023ff00  addic 3, 30, 32
  023ff04  stfs 1, 16(31)
  023ff08  lfs 1, 4(30)
  023ff0c  fadds 1, 2, 1
  023ff10  stfs 1, 20(31)
  023ff14  lfs 1, 8(30)
  023ff18  fadds 1, 3, 1
  023ff1c  stfs 1, 24(31)
  023ff20  bl 0x4fff60
  023ff24  nop
  023ff28  cmpwi 3, 0
  023ff2c  bf 2, 0x23ff80
  023ff30  addic 3, 1, 192
  023ff34  ori 4, 29, 0
  023ff38  li 5, 0
  023ff3c  ori 6, 31, 0
  023ff40  li 7, 0
  023ff44  bl 0x57820
  023ff48  nop
  023ff4c  cmpwi 3, 0
  023ff50  bf 2, 0x23ff80
  023ff54  lis 4, 36
  023ff58  lwz 6, 36(30)
  023ff5c  ori 3, 29, 0
  023ff60  addi 4, 4, -920
  023ff64  li 5, 0
  023ff68  li 7, 0
  023ff6c  lfs 1, 12(4)
  023ff70  bl 0x5e598
  023ff74  nop
  023ff78  cmpwi 3, 0
  023ff7c  bt 2, 0x23fff0
  023ff80  lis 3, 36
  023ff84  li 7, -1
  023ff88  fmr 6, 31
  023ff8c  addi 5, 3, -920
  023ff90  li 6, 1
  023ff94  li 11, 0
  023ff98  ori 3, 31, 0
  023ff9c  ori 4, 30, 0
  023ffa0  lfs 2, 24(5)
  023ffa4  lfs 1, 16(5)
  023ffa8  li 8, 10
  023ffac  lfs 3, 20(5)
  023ffb0  li 9, 3
  023ffb4  lfs 5, 28(5)
  023ffb8  li 10, 16
  023ffbc  lfs 7, 32(5)
  023ffc0  fmr 4, 2
  023ffc4  std 7, 144(1)
  023ffc8  ori 5, 29, 0
  023ffcc  std 6, 160(1)
  023ffd0  std 6, 168(1)
  023ffd4  std 7, 176(1)
  023ffd8  std 11, 184(1)
  023ffdc  bl 0x10e030
  023ffe0  nop
  023ffe4  ori 3, 31, 0
  023ffe8  bl 0xefb38
  023ffec  nop
  023fff0  ld 0, 336(1)
  023fff4  mtlr 0
  023fff8  lfd 30, 304(1)
  023fffc  lfd 31, 312(1)
  0240000  ld 24, 240(1)
  0240004  ld 25, 248(1)
  0240008  ld 26, 256(1)
  024000c  ld 27, 264(1)
  0240010  ld 28, 272(1)
  0240014  ld 29, 280(1)
  0240018  ld 30, 288(1)
  024001c  ld 31, 296(1)
  0240020  addi 1, 1, 320
  0240024  blr

M1297_00240058:   # 0x240058, 0x348 bytes
  0240058  stdu 1, -320(1)
  024005c  mflr 0
  0240060  std 0, 336(1)
  0240064  stfd 18, 208(1)
  0240068  stfd 19, 216(1)
  024006c  stfd 20, 224(1)
  0240070  stfd 21, 232(1)
  0240074  stfd 22, 240(1)
  0240078  stfd 23, 248(1)
  024007c  stfd 24, 256(1)
  0240080  stfd 25, 264(1)
  0240084  stfd 26, 272(1)
  0240088  stfd 27, 280(1)
  024008c  stfd 28, 288(1)
  0240090  stfd 29, 296(1)
  0240094  stfd 30, 304(1)
  0240098  stfd 31, 312(1)
  024009c  std 31, 200(1)
  02400a0  lis 4, 36
  02400a4  std 30, 192(1)
  02400a8  ori 31, 3, 0
  02400ac  addi 30, 4, 40
  02400b0  lfs 1, 0(30)
  02400b4  lfs 2, 4(30)
  02400b8  bl 0xfcbe8
  02400bc  nop
  02400c0  fmr 31, 1
  02400c4  bl 0xfcc68
  02400c8  nop
  02400cc  lfs 2, 8(30)
  02400d0  lfs 3, 12(30)
  02400d4  fsubs 4, 2, 1
  02400d8  lfs 13, 212(31)
  02400dc  fsubs 7, 3, 1
  02400e0  lfs 0, 208(31)
  02400e4  fmuls 5, 13, 13
  02400e8  lfs 30, 216(31)
  02400ec  lfs 29, 16(30)
  02400f0  lfs 25, 20(30)
  02400f4  fsub 6, 1, 4
  02400f8  fmadds 5, 0, 0, 5
  02400fc  fsel 9, 6, 4, 1
  0240100  fmadds 4, 30, 30, 5
  0240104  lfs 5, 228(31)
  0240108  lfs 24, 24(30)
  024010c  lfs 6, 224(31)
  0240110  lfs 23, 28(30)
  0240114  fsub 10, 7, 9
  0240118  fsqrts 28, 4
  024011c  lfs 4, 232(31)
  0240120  fsel 7, 10, 7, 9
  0240124  lfs 9, 36(30)
  0240128  fadds 1, 1, 9
  024012c  lfs 26, 32(30)
  0240130  fmuls 8, 7, 7
  0240134  fsubs 2, 2, 1
  0240138  fsubs 3, 3, 1
  024013c  fmuls 10, 8, 7
  0240140  fmuls 9, 8, 10
  0240144  fmadds 7, 10, 29, 7
  0240148  fmuls 10, 8, 9
  024014c  fmadds 7, 9, 25, 7
  0240150  fmuls 9, 5, 5
  0240154  fmuls 8, 8, 10
  0240158  fmadds 7, 10, 24, 7
  024015c  fsub 10, 1, 2
  0240160  fmadds 9, 6, 6, 9
  0240164  fmadds 7, 8, 23, 7
  0240168  fsel 1, 10, 2, 1
  024016c  fmadds 12, 4, 4, 9
  0240170  lfs 10, 16(31)
  0240174  lfs 9, 20(31)
  0240178  lfs 8, 24(31)
  024017c  fmuls 2, 31, 7
  0240180  fsub 11, 3, 1
  0240184  fsqrts 12, 12
  0240188  lfs 7, 28(31)
  024018c  fdivs 2, 2, 28
  0240190  fsel 1, 11, 3, 1
  0240194  fmr 11, 26
  0240198  fmuls 3, 1, 1
  024019c  fsub 27, 11, 28
  02401a0  fsub 26, 11, 28
  02401a4  fsub 22, 11, 28
  02401a8  fsub 21, 28, 11
  02401ac  fsub 20, 28, 11
  02401b0  fsub 28, 28, 11
  02401b4  fmuls 19, 3, 1
  02401b8  fcmpu 0, 12, 11
  02401bc  fmuls 18, 3, 19
  02401c0  fmadds 1, 19, 29, 1
  02401c4  fmuls 29, 3, 18
  02401c8  fmadds 1, 18, 25, 1
  02401cc  fmuls 3, 3, 29
  02401d0  fmadds 1, 29, 24, 1
  02401d4  fmuls 30, 30, 2
  02401d8  fmuls 29, 13, 2
  02401dc  fmuls 0, 0, 2
  02401e0  fmadds 13, 3, 23, 1
  02401e4  fsel 3, 27, 11, 30
  02401e8  fsel 2, 26, 11, 29
  02401ec  fsel 1, 22, 11, 0
  02401f0  fmuls 13, 31, 13
  02401f4  fsel 3, 21, 3, 30
  02401f8  fsel 2, 20, 2, 29
  02401fc  fsel 1, 28, 1, 0
  0240200  bf 2, 0x240214
  0240204  fmr 5, 11
  0240208  lfs 6, 236(31)
  024020c  fmr 4, 5
  0240210  b 0x240234
  0240214  fdivs 11, 13, 12
  0240218  lfs 12, 236(31)
  024021c  fmr 13, 5
  0240220  fmr 0, 4
  0240224  fmuls 5, 6, 11
  0240228  fmuls 4, 13, 11
  024022c  fmuls 11, 0, 11
  0240230  fmr 6, 12
  0240234  fadds 1, 5, 1
  0240238  fadds 2, 4, 2
  024023c  stfs 7, 140(1)
  0240240  fadds 3, 11, 3
  0240244  lis 3, 121
  0240248  lis 5, 121
  024024c  lis 4, 121
  0240250  lis 6, 36
  0240254  fsubs 4, 10, 1
  0240258  fsubs 5, 9, 2
  024025c  fsubs 7, 8, 3
  0240260  lis 7, 121
  0240264  lis 11, 121
  0240268  stfs 4, 128(1)
  024026c  stfs 5, 132(1)
  0240270  stfs 7, 136(1)
  0240274  lwz 8, -8076(3)
  0240278  lwz 9, -8072(5)
  024027c  lwz 10, -8068(4)
  0240280  addc 3, 8, 9
  0240284  addi 4, 6, 40
  0240288  addc 3, 3, 10
  024028c  extsw 3, 3
  0240290  std 3, 176(1)
  0240294  lis 3, 114
  0240298  lfs 4, 40(4)
  024029c  lfs 5, -3056(3)
  02402a0  lfd 7, 176(1)
  02402a4  fcfid 7, 7
  02402a8  lfs 8, 44(4)
  02402ac  lis 3, 121
  02402b0  lis 4, 121
  02402b4  stfs 6, 156(1)
  02402b8  stfs 6, 172(1)
  02402bc  lis 6, 121
  02402c0  addic 5, 1, 160
  02402c4  extsw 8, 8
  02402c8  frsp 7, 7
  02402cc  extsw 9, 9
  02402d0  extsw 10, 10
  02402d4  fadds 4, 7, 4
  02402d8  fmr 7, 8
  02402dc  fmuls 4, 5, 4
  02402e0  lfs 5, -8064(3)
  02402e4  lfs 6, -8060(4)
  02402e8  stfs 5, 156(1)
  02402ec  addic 3, 1, 128
  02402f0  stfs 6, 172(1)
  02402f4  addic 4, 1, 144
  02402f8  lwz 6, -8084(6)
  02402fc  lwz 7, -8080(7)
  0240300  fctidz 4, 4
  0240304  extsw 6, 6
  0240308  lwz 11, -8056(11)
  024030c  extsw 7, 7
  0240310  extsw 11, 11
  0240314  fcfid 4, 4
  0240318  std 11, 112(1)
  024031c  frsp 4, 4
  0240320  fdivs 4, 7, 4
  0240324  fmuls 1, 1, 4
  0240328  fmuls 2, 2, 4
  024032c  fmuls 3, 3, 4
  0240330  stfs 1, 144(1)
  0240334  stfs 2, 148(1)
  0240338  stfs 3, 152(1)
  024033c  stfs 1, 160(1)
  0240340  stfs 2, 164(1)
  0240344  stfs 3, 168(1)
  0240348  bl 0x1206e8
  024034c  nop
  0240350  ld 0, 336(1)
  0240354  mtlr 0
  0240358  lfd 18, 208(1)
  024035c  lfd 19, 216(1)
  0240360  lfd 20, 224(1)
  0240364  lfd 21, 232(1)
  0240368  lfd 22, 240(1)
  024036c  lfd 23, 248(1)
  0240370  lfd 24, 256(1)
  0240374  lfd 25, 264(1)
  0240378  lfd 26, 272(1)
  024037c  lfd 27, 280(1)
  0240380  lfd 28, 288(1)
  0240384  lfd 29, 296(1)
  0240388  lfd 30, 304(1)
  024038c  lfd 31, 312(1)
  0240390  ld 30, 192(1)
  0240394  ld 31, 200(1)
  0240398  addi 1, 1, 320
  024039c  blr

FUN_002403a8:   # 0x2403a8, 0x1e8 bytes
  02403a8  stdu 1, -192(1)
  02403ac  mflr 0
  02403b0  std 0, 208(1)
  02403b4  addi 0, 1, 128
  02403b8  stvx 31, 0, 0
  02403bc  std 29, 168(1)
  02403c0  ori 29, 3, 0
  02403c4  li 3, 1297
  02403c8  stw 5, 112(1)
  02403cc  li 0, 112
  02403d0  stw 5, 116(1)
  02403d4  std 30, 176(1)
  02403d8  stw 5, 120(1)
  02403dc  ori 30, 4, 0
  02403e0  stw 5, 124(1)
  02403e4  std 31, 184(1)
  02403e8  std 28, 160(1)
  02403ec  std 27, 152(1)
  02403f0  lvx 31, 1, 0
  02403f4  bl 0xefa28
  02403f8  nop
  02403fc  ori 31, 3, 0
  0240400  cmpwi 31, 0
  0240404  bt 2, 0x240560
  0240408  li 28, 0
  024040c  li 3, 64
  0240410  vcfsx 2, 31, 0
  0240414  li 4, 255
  0240418  li 5, 1
  024041c  stw 28, 44(31)
  0240420  sth 3, 50(31)
  0240424  stb 4, 48(31)
  0240428  ld 3, 56(29)
  024042c  stb 5, 49(31)
  0240430  std 3, 56(31)
  0240434  stb 5, 32(31)
  0240438  lis 3, 36
  024043c  lwz 27, 120(31)
  0240440  lfs 1, 0(30)
  0240444  addi 3, 3, 928
  0240448  stfs 1, 16(31)
  024044c  lfs 1, 4(30)
  0240450  li 4, -3056
  0240454  vspltisw 4, -1
  0240458  stfs 1, 20(31)
  024045c  lfs 1, 8(30)
  0240460  lfs 2, 64(29)
  0240464  stfs 1, 24(31)
  0240468  lfs 1, 12(30)
  024046c  lfs 3, 68(29)
  0240470  stfs 1, 28(31)
  0240474  stfs 2, 64(31)
  0240478  lfs 1, 72(29)
  024047c  stfs 3, 68(31)
  0240480  lfs 2, 76(29)
  0240484  stfs 1, 72(31)
  0240488  stfs 2, 76(31)
  024048c  stw 28, 12(27)
  0240490  stw 28, 8(27)
  0240494  stw 28, 4(27)
  0240498  stw 28, 0(27)
  024049c  stw 29, 36(27)
  02404a0  lvlx 3, 0, 3
  02404a4  lis 3, 114
  02404a8  vspltw 3, 3, 0
  02404ac  li 5, 32
  02404b0  li 6, 5
  02404b4  vaddfp 2, 2, 3
  02404b8  vslw 3, 4, 4
  02404bc  lvlx 4, 4, 3
  02404c0  addic 3, 31, 192
  02404c4  addic 4, 31, 64
  02404c8  vmaddfp 2, 4, 2, 3
  02404cc  vctsxs 2, 2, 0
  02404d0  vspltw 2, 2, 0
  02404d4  stvewx 2, 5, 27
  02404d8  stw 6, 40(27)
  02404dc  bl 0x500b64
  02404e0  nop
  02404e4  ori 30, 28, 0
  02404e8  ori 29, 27, 0
  02404ec  li 3, 255
  02404f0  bl 0xfc620
  02404f4  nop
  02404f8  clrlwi 4, 28, 31
  02404fc  mullw 4, 28, 4
  0240500  li 5, 0
  0240504  stb 3, 16(29)
  0240508  addic 30, 30, 10
  024050c  subc 4, 5, 4
  0240510  li 3, 1
  0240514  cntlzw 4, 4
  0240518  li 5, -1
  024051c  sldi 4, 4, 58
  0240520  stb 30, 24(29)
  0240524  subc 3, 3, 5
  0240528  sradi 4, 4, 63
  024052c  addic 28, 28, 1
  0240530  and 3, 4, 3
  0240534  cmpwi 28, 4
  0240538  addc 3, 5, 3
  024053c  stb 3, 20(29)
  0240540  addic 29, 29, 1
  0240544  bt 0, 0x2404ec
  0240548  li 30, 0
  024054c  ori 3, 31, 0
  0240550  bl 0x240058
  0240554  addic 30, 30, 1
  0240558  cmpwi 30, 50
  024055c  bt 0, 0x24054c
  0240560  ori 3, 31, 0
  0240564  li 0, 128
  0240568  lvx 31, 1, 0
  024056c  ld 0, 208(1)
  0240570  mtlr 0
  0240574  ld 27, 152(1)
  0240578  ld 28, 160(1)
  024057c  ld 29, 168(1)
  0240580  ld 30, 176(1)
  0240584  ld 31, 184(1)
  0240588  addi 1, 1, 192
  024058c  blr

M1297_00240590:   # 0x240590, 0x30 bytes
  0240590  lfs 1, 0(4)
  0240594  li 5, 5
  0240598  lwz 6, 120(3)
  024059c  stfs 1, 16(3)
  02405a0  lfs 1, 4(4)
  02405a4  stfs 1, 20(3)
  02405a8  lfs 1, 8(4)
  02405ac  stw 5, 40(6)
  02405b0  stfs 1, 24(3)
  02405b4  lfs 1, 12(4)
  02405b8  stfs 1, 28(3)
  02405bc  blr

FUN_002405c8:   # 0x2405c8, 0x68 bytes
  02405c8  li 5, 2
  02405cc  lwz 7, 120(3)
  02405d0  lis 6, 36
  02405d4  vspltisw 3, -1
  02405d8  addi 6, 6, 1472
  02405dc  stb 5, 32(3)
  02405e0  lfs 1, 0(4)
  02405e4  lis 3, 114
  02405e8  li 5, -3056
  02405ec  vslw 3, 3, 3
  02405f0  stfs 1, 0(7)
  02405f4  lfs 1, 4(4)
  02405f8  stfs 1, 4(7)
  02405fc  lfs 1, 8(4)
  0240600  stfs 1, 8(7)
  0240604  lfs 1, 12(4)
  0240608  stfs 1, 12(7)
  024060c  lvlx 2, 0, 6
  0240610  lvlx 4, 5, 3
  0240614  vspltw 2, 2, 0
  0240618  li 3, 32
  024061c  vmaddfp 2, 4, 2, 3
  0240620  vctsxs 2, 2, 0
  0240624  vspltw 2, 2, 0
  0240628  stvewx 2, 3, 7
  024062c  blr

M1297_00240630:   # 0x240630, 0x24 bytes
  0240630  stdu 1, -112(1)
  0240634  mflr 0
  0240638  std 0, 128(1)
  024063c  bl 0xefb38
  0240640  nop
  0240644  ld 0, 128(1)
  0240648  mtlr 0
  024064c  addi 1, 1, 112
  0240650  blr
