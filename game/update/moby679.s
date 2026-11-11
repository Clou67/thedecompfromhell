# game/update/moby679.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M679_0040fabc:   # 0x40fabc, 0x14 bytes
  040fabc  lis 3, 133
  040fac0  lis 4, 1
  040fac4  addic 3, 3, 28900
  040fac8  stw 4, 72(3)
  040facc  blr

UpdateMoby_679:   # 0x40fb18, 0x9ec bytes
  040fb18  stdu 1, -432(1)
  040fb1c  mflr 0
  040fb20  std 0, 448(1)
  040fb24  stfd 23, 360(1)
  040fb28  stfd 24, 368(1)
  040fb2c  stfd 25, 376(1)
  040fb30  stfd 26, 384(1)
  040fb34  stfd 27, 392(1)
  040fb38  stfd 28, 400(1)
  040fb3c  stfd 29, 408(1)
  040fb40  stfd 30, 416(1)
  040fb44  stfd 31, 424(1)
  040fb48  std 31, 352(1)
  040fb4c  lwz 31, 120(3)
  040fb50  std 30, 344(1)
  040fb54  std 29, 336(1)
  040fb58  std 28, 328(1)
  040fb5c  std 27, 320(1)
  040fb60  std 26, 312(1)
  040fb64  std 25, 304(1)
  040fb68  std 24, 296(1)
  040fb6c  std 23, 288(1)
  040fb70  cmpwi 31, 0
  040fb74  bt 2, 0x4104ac
  040fb78  lwz 4, 0(31)
  040fb7c  cmpwi 4, -1
  040fb80  bt 2, 0x4104ac
  040fb84  lwz 4, 112(31)
  040fb88  cmpwi 1, 4, 0
  040fb8c  bt 6, 0x4104ac
  040fb90  lwz 4, 104(31)
  040fb94  cmpwi 4, 0
  040fb98  bf 2, 0x40fc94
  040fb9c  li 5, 1
  040fba0  li 4, 0
  040fba4  ori 8, 4, 0
  040fba8  stw 5, 104(31)
  040fbac  bf 5, 0x40fc8c
  040fbb0  lis 9, 165
  040fbb4  ori 10, 31, 0
  040fbb8  addic 9, 9, 7136
  040fbbc  lwz 5, 0(10)
  040fbc0  ori 6, 8, 0
  040fbc4  slwi 5, 5, 2
  040fbc8  extsw 5, 5
  040fbcc  lwzx 5, 9, 5
  040fbd0  lwz 7, 0(5)
  040fbd4  addic 7, 7, -1
  040fbd8  cmpwi 7, 0
  040fbdc  bf 1, 0x40fc34
  040fbe0  ori 7, 5, 0
  040fbe4  lfs 1, 20(7)
  040fbe8  lfs 2, 36(7)
  040fbec  lfs 3, 16(7)
  040fbf0  fsubs 1, 1, 2
  040fbf4  lfs 2, 32(7)
  040fbf8  fsubs 2, 3, 2
  040fbfc  lfs 3, 24(7)
  040fc00  lfs 4, 40(7)
  040fc04  fsubs 3, 3, 4
  040fc08  fmuls 1, 1, 1
  040fc0c  addic 6, 6, 1
  040fc10  fmadds 1, 2, 2, 1
  040fc14  fmadds 1, 3, 3, 1
  040fc18  fsqrts 1, 1
  040fc1c  stfs 1, 28(7)
  040fc20  lwz 11, 0(5)
  040fc24  addic 7, 7, 16
  040fc28  addic 11, 11, -1
  040fc2c  cmpw 6, 11
  040fc30  bt 0, 0x40fbe4
  040fc34  slwi 6, 6, 4
  040fc38  lfs 1, 20(5)
  040fc3c  addc 6, 5, 6
  040fc40  lfs 2, 16(5)
  040fc44  clrldi 6, 6, 32
  040fc48  addic 4, 4, 1
  040fc4c  lfs 3, 20(6)
  040fc50  lfs 4, 16(6)
  040fc54  fsubs 1, 3, 1
  040fc58  fsubs 2, 4, 2
  040fc5c  lfs 3, 24(6)
  040fc60  lfs 4, 24(5)
  040fc64  fsubs 3, 3, 4
  040fc68  addic 10, 10, 4
  040fc6c  fmuls 1, 1, 1
  040fc70  fmadds 1, 2, 2, 1
  040fc74  fmadds 1, 3, 3, 1
  040fc78  fsqrts 1, 1
  040fc7c  stfs 1, 28(6)
  040fc80  lwz 5, 112(31)
  040fc84  cmpw 4, 5
  040fc88  bt 0, 0x40fbbc
  040fc8c  li 4, 255
  040fc90  stb 4, 48(3)
  040fc94  lis 27, 151
  040fc98  addic 27, 27, -25376
  040fc9c  lwz 3, 8332(27)
  040fca0  cmpwi 3, 16
  040fca4  bf 2, 0x4104ac
  040fca8  fmr 30, 31
  040fcac  lis 3, 65
  040fcb0  lwz 4, 112(31)
  040fcb4  li 30, 0
  040fcb8  addi 3, 3, -1328
  040fcbc  ori 23, 30, 0
  040fcc0  cmpwi 4, 0
  040fcc4  ori 29, 23, 0
  040fcc8  lfs 28, 0(3)
  040fccc  fmr 29, 30
  040fcd0  bf 1, 0x4104ac
  040fcd4  lis 3, 65
  040fcd8  lis 26, 165
  040fcdc  addi 3, 3, -1328
  040fce0  addic 25, 27, 128
  040fce4  addic 26, 26, 7136
  040fce8  ori 24, 31, 0
  040fcec  lfs 27, 4(3)
  040fcf0  lfs 24, 8(3)
  040fcf4  lfs 23, 12(3)
  040fcf8  lwz 3, 0(24)
  040fcfc  fmr 1, 27
  040fd00  addic 5, 1, 144
  040fd04  slwi 3, 3, 2
  040fd08  fmr 2, 24
  040fd0c  addic 6, 1, 168
  040fd10  fmr 3, 23
  040fd14  extsw 28, 3
  040fd18  li 9, 0
  040fd1c  addic 7, 1, 172
  040fd20  ori 4, 25, 0
  040fd24  lwzx 28, 26, 28
  040fd28  ori 3, 28, 0
  040fd2c  bl 0x10d7a0
  040fd30  nop
  040fd34  lfs 1, 132(27)
  040fd38  lfs 3, 148(1)
  040fd3c  lfs 4, 128(27)
  040fd40  fsubs 1, 1, 3
  040fd44  lfs 2, 144(1)
  040fd48  fsubs 4, 4, 2
  040fd4c  lwz 3, 112(31)
  040fd50  fmuls 1, 1, 1
  040fd54  fmadds 1, 4, 4, 1
  040fd58  fsqrts 1, 1
  040fd5c  fcmpu 0, 28, 1
  040fd60  cror 6, 0, 2
  040fd64  bt 6, 0x40fd8c
  040fd68  lfs 29, 152(1)
  040fd6c  fmr 28, 1
  040fd70  ori 30, 28, 0
  040fd74  lwz 4, 168(1)
  040fd78  lfs 1, 172(1)
  040fd7c  stw 4, 160(1)
  040fd80  fmr 31, 2
  040fd84  fmr 30, 3
  040fd88  stfs 1, 164(1)
  040fd8c  addic 29, 29, 1
  040fd90  addic 24, 24, 4
  040fd94  cmpw 29, 3
  040fd98  bt 0, 0x40fcf8
  040fd9c  cmpwi 30, 0
  040fda0  bt 2, 0x4104ac
  040fda4  lis 3, 65
  040fda8  addic 4, 1, 128
  040fdac  addi 6, 3, -1328
  040fdb0  ori 3, 30, 0
  040fdb4  addic 5, 1, 160
  040fdb8  li 8, 0
  040fdbc  lfs 25, 16(6)
  040fdc0  addic 6, 1, 164
  040fdc4  fmr 1, 25
  040fdc8  bl 0x10ce18
  040fdcc  nop
  040fdd0  lfs 1, 100(31)
  040fdd4  ori 4, 3, 0
  040fdd8  fcmpu 0, 28, 1
  040fddc  bt 1, 0x4104ac
  040fde0  lis 3, 151
  040fde4  lwz 3, -25488(3)
  040fde8  cmpwi 3, 1
  040fdec  bf 2, 0x40fed8
  040fdf0  lwz 5, 0(30)
  040fdf4  lwz 3, 160(1)
  040fdf8  addic 5, 5, -1
  040fdfc  fmr 1, 23
  040fe00  cmpw 3, 5
  040fe04  bf 0, 0x40fe34
  040fe08  slwi 6, 3, 4
  040fe0c  fmr 1, 23
  040fe10  subc 3, 5, 3
  040fe14  addc 30, 30, 6
  040fe18  clrldi 5, 30, 32
  040fe1c  addic 3, 3, -1
  040fe20  addic 30, 30, 16
  040fe24  cmpwi 3, 0
  040fe28  lfs 2, 28(5)
  040fe2c  fadds 1, 1, 2
  040fe30  bt 1, 0x40fe18
  040fe34  lis 3, 65
  040fe38  addi 3, 3, -1328
  040fe3c  lfs 2, 20(3)
  040fe40  fcmpu 0, 1, 2
  040fe44  cror 6, 1, 2
  040fe48  bt 6, 0x40fe64
  040fe4c  lis 3, 65
  040fe50  lis 5, 114
  040fe54  addi 3, 3, -1328
  040fe58  lfs 1, -3052(5)
  040fe5c  lfs 2, 24(3)
  040fe60  b 0x40fed0
  040fe64  lis 3, 65
  040fe68  addi 3, 3, -1328
  040fe6c  lfs 2, 28(3)
  040fe70  fcmpu 0, 1, 2
  040fe74  cror 6, 1, 2
  040fe78  bt 6, 0x40fe94
  040fe7c  lis 3, 65
  040fe80  lis 5, 114
  040fe84  addi 3, 3, -1328
  040fe88  lfs 1, -3052(5)
  040fe8c  lfs 2, 32(3)
  040fe90  b 0x40fed0
  040fe94  lis 3, 65
  040fe98  addi 3, 3, -1328
  040fe9c  lfs 2, 36(3)
  040fea0  fcmpu 0, 1, 2
  040fea4  cror 6, 1, 2
  040fea8  bt 6, 0x40febc
  040feac  lis 3, 114
  040feb0  fmr 2, 24
  040feb4  lfs 1, -3052(3)
  040feb8  b 0x40fed0
  040febc  lis 3, 65
  040fec0  lis 5, 114
  040fec4  addi 3, 3, -1328
  040fec8  lfs 1, -3052(5)
  040fecc  lfs 2, 40(3)
  040fed0  fmuls 1, 1, 2
  040fed4  stfs 1, 96(31)
  040fed8  cmpwi 4, 0
  040fedc  bf 2, 0x41045c
  040fee0  lfs 28, 132(1)
  040fee4  fmr 1, 29
  040fee8  fsubs 28, 28, 30
  040feec  lfs 29, 128(1)
  040fef0  fsubs 29, 29, 31
  040fef4  lis 4, 65
  040fef8  addi 4, 4, -1328
  040fefc  fmuls 2, 28, 28
  040ff00  lis 3, 115
  040ff04  addic 3, 3, 22784
  040ff08  fmadds 26, 29, 29, 2
  040ff0c  lfs 2, 136(1)
  040ff10  lfs 27, 140(1)
  040ff14  fsubs 1, 2, 1
  040ff18  fsqrts 26, 26
  040ff1c  stfs 1, 196(1)
  040ff20  fabs 5, 1
  040ff24  fabs 4, 26
  040ff28  stfs 26, 192(1)
  040ff2c  lwz 5, 196(1)
  040ff30  lfs 2, 196(1)
  040ff34  rlwinm 5, 5, 3, 29, 29
  040ff38  fabs 6, 2
  040ff3c  fsubs 1, 4, 5
  040ff40  stfs 1, 200(1)
  040ff44  lwz 6, 192(1)
  040ff48  lfs 1, 192(1)
  040ff4c  lfs 3, 44(4)
  040ff50  lwz 4, 200(1)
  040ff54  lfs 2, 200(1)
  040ff58  fabs 1, 1
  040ff5c  rlwimi 5, 4, 2, 30, 30
  040ff60  fsub 7, 2, 23
  040ff64  fsub 8, 2, 23
  040ff68  rlwimi 5, 6, 4, 28, 28
  040ff6c  ori 4, 3, 0
  040ff70  rlwimi 4, 5, 2, 26, 28
  040ff74  slwi 5, 5, 2
  040ff78  clrldi 4, 4, 32
  040ff7c  fsel 5, 7, 1, 5
  040ff80  lfsx 1, 3, 5
  040ff84  lfs 2, 4(4)
  040ff88  fsel 4, 8, 6, 4
  040ff8c  fcmpu 0, 5, 23
  040ff90  bt 1, 0x40ff9c
  040ff94  fmr 1, 23
  040ff98  b 0x4100b4
  040ff9c  fsubs 6, 4, 5
  040ffa0  fadds 4, 4, 5
  040ffa4  addic 4, 1, 16
  040ffa8  li 7, 2
  040ffac  addic 5, 4, 220
  040ffb0  addic 6, 4, 236
  040ffb4  mtctr 7
  040ffb8  fdivs 4, 6, 4
  040ffbc  fmuls 5, 4, 4
  040ffc0  stfs 4, 248(1)
  040ffc4  stfs 4, 240(1)
  040ffc8  stfs 4, 244(1)
  040ffcc  stfs 4, 236(1)
  040ffd0  lfs 7, 248(1)
  040ffd4  lfs 8, 240(1)
  040ffd8  lfs 9, 244(1)
  040ffdc  fmuls 6, 5, 5
  040ffe0  fmuls 8, 8, 5
  040ffe4  fmuls 7, 7, 6
  040ffe8  fmuls 4, 6, 6
  040ffec  fmuls 6, 9, 6
  040fff0  stfs 8, 240(1)
  040fff4  fmuls 5, 7, 5
  040fff8  stfs 6, 244(1)
  040fffc  stfs 5, 248(1)
  0410000  lfs 5, 220(4)
  0410004  fmuls 5, 5, 4
  0410008  stfs 5, 236(4)
  041000c  lfs 5, 4(5)
  0410010  addic 4, 4, 8
  0410014  addic 5, 5, 8
  0410018  fmuls 5, 5, 4
  041001c  stfs 5, 4(6)
  0410020  addic 6, 6, 8
  0410024  bdnz 0x410000
  0410028  li 6, 4
  041002c  ori 4, 1, 0
  0410030  mtctr 6
  0410034  lis 5, 115
  0410038  addic 6, 4, 236
  041003c  addic 5, 5, 22752
  0410040  ori 8, 6, 0
  0410044  lfs 4, 236(4)
  0410048  lfs 5, 0(5)
  041004c  fmuls 4, 4, 5
  0410050  lfs 5, 4(5)
  0410054  addic 5, 5, 8
  0410058  stfs 4, 236(4)
  041005c  lfs 4, 4(6)
  0410060  addic 4, 4, 8
  0410064  fmuls 4, 4, 5
  0410068  stfs 4, 4(6)
  041006c  addic 6, 6, 8
  0410070  bdnz 0x410044
  0410074  fmr 4, 23
  0410078  ori 4, 1, 0
  041007c  mtctr 7
  0410080  lfs 5, 236(4)
  0410084  fadds 4, 4, 5
  0410088  addic 4, 4, 16
  041008c  lfs 5, 4(8)
  0410090  lfs 6, 8(8)
  0410094  lfs 7, 12(8)
  0410098  addic 8, 8, 16
  041009c  fadds 4, 4, 5
  04100a0  fadds 4, 4, 6
  04100a4  fadds 4, 4, 7
  04100a8  bdnz 0x410080
  04100ac  fadds 4, 4, 3
  04100b0  fmadds 1, 4, 1, 2
  04100b4  fabs 4, 29
  04100b8  stfs 29, 180(1)
  04100bc  fabs 5, 28
  04100c0  stfs 28, 184(1)
  04100c4  stfs 1, 2516(27)
  04100c8  fsubs 2, 4, 5
  04100cc  stfs 2, 188(1)
  04100d0  lwz 4, 180(1)
  04100d4  lfs 1, 180(1)
  04100d8  lwz 5, 184(1)
  04100dc  lfs 2, 184(1)
  04100e0  fabs 1, 1
  04100e4  lwz 6, 188(1)
  04100e8  rlwinm 5, 5, 3, 29, 29
  04100ec  lfs 6, 188(1)
  04100f0  fabs 2, 2
  04100f4  rlwimi 5, 6, 2, 30, 30
  04100f8  fsub 7, 6, 23
  04100fc  fsub 6, 6, 23
  0410100  rlwimi 5, 4, 4, 28, 28
  0410104  ori 4, 3, 0
  0410108  rlwimi 4, 5, 2, 26, 28
  041010c  slwi 5, 5, 2
  0410110  clrldi 4, 4, 32
  0410114  fsel 5, 7, 1, 5
  0410118  lfsx 1, 3, 5
  041011c  fsel 4, 6, 2, 4
  0410120  lfs 2, 4(4)
  0410124  fcmpu 0, 5, 23
  0410128  bt 1, 0x410134
  041012c  fmr 3, 23
  0410130  b 0x41024c
  0410134  fsubs 6, 4, 5
  0410138  fadds 4, 4, 5
  041013c  addic 3, 1, 16
  0410140  li 6, 2
  0410144  addic 4, 3, 188
  0410148  addic 5, 3, 204
  041014c  mtctr 6
  0410150  fdivs 4, 6, 4
  0410154  fmuls 5, 4, 4
  0410158  stfs 4, 216(1)
  041015c  stfs 4, 208(1)
  0410160  stfs 4, 212(1)
  0410164  stfs 4, 204(1)
  0410168  lfs 7, 216(1)
  041016c  lfs 8, 208(1)
  0410170  lfs 9, 212(1)
  0410174  fmuls 6, 5, 5
  0410178  fmuls 8, 8, 5
  041017c  fmuls 7, 7, 6
  0410180  fmuls 4, 6, 6
  0410184  fmuls 6, 9, 6
  0410188  stfs 8, 208(1)
  041018c  fmuls 5, 7, 5
  0410190  stfs 6, 212(1)
  0410194  stfs 5, 216(1)
  0410198  lfs 5, 188(3)
  041019c  fmuls 5, 5, 4
  04101a0  stfs 5, 204(3)
  04101a4  lfs 5, 4(4)
  04101a8  addic 3, 3, 8
  04101ac  addic 4, 4, 8
  04101b0  fmuls 5, 5, 4
  04101b4  stfs 5, 4(5)
  04101b8  addic 5, 5, 8
  04101bc  bdnz 0x410198
  04101c0  li 5, 4
  04101c4  ori 3, 1, 0
  04101c8  mtctr 5
  04101cc  lis 4, 115
  04101d0  addic 5, 3, 204
  04101d4  addic 4, 4, 22752
  04101d8  ori 7, 5, 0
  04101dc  lfs 4, 204(3)
  04101e0  lfs 5, 0(4)
  04101e4  fmuls 4, 4, 5
  04101e8  lfs 5, 4(4)
  04101ec  addic 4, 4, 8
  04101f0  stfs 4, 204(3)
  04101f4  lfs 4, 4(5)
  04101f8  addic 3, 3, 8
  04101fc  fmuls 4, 4, 5
  0410200  stfs 4, 4(5)
  0410204  addic 5, 5, 8
  0410208  bdnz 0x4101dc
  041020c  fmr 4, 23
  0410210  ori 3, 1, 0
  0410214  mtctr 6
  0410218  lfs 5, 204(3)
  041021c  fadds 4, 4, 5
  0410220  addic 3, 3, 16
  0410224  lfs 5, 4(7)
  0410228  lfs 6, 8(7)
  041022c  lfs 7, 12(7)
  0410230  addic 7, 7, 16
  0410234  fadds 4, 4, 5
  0410238  fadds 4, 4, 6
  041023c  fadds 4, 4, 7
  0410240  bdnz 0x410218
  0410244  fadds 3, 4, 3
  0410248  fmadds 3, 3, 1, 2
  041024c  stfs 3, 2512(27)
  0410250  lis 3, 65
  0410254  lwz 4, 2524(27)
  0410258  lwz 5, 96(31)
  041025c  srawi 7, 4, 31
  0410260  lfs 1, 96(31)
  0410264  srawi 6, 5, 31
  0410268  srwi 9, 7, 1
  041026c  srwi 8, 6, 1
  0410270  addi 3, 3, -1328
  0410274  xor 5, 8, 5
  0410278  xor 4, 9, 4
  041027c  subc 5, 5, 6
  0410280  subc 4, 4, 7
  0410284  lfs 3, 48(3)
  0410288  addic 31, 27, 2524
  041028c  cmpw 4, 5
  0410290  bf 0, 0x4102b0
  0410294  lis 4, 114
  0410298  ori 3, 31, 0
  041029c  lfs 2, -3048(4)
  04102a0  fmuls 2, 2, 3
  04102a4  bl 0x109af0
  04102a8  nop
  04102ac  b 0x4102c8
  04102b0  lis 4, 114
  04102b4  ori 3, 31, 0
  04102b8  lfs 2, -3048(4)
  04102bc  fmuls 2, 2, 3
  04102c0  bl 0x109af0
  04102c4  nop
  04102c8  lis 3, 65
  04102cc  addi 3, 3, -1328
  04102d0  lfs 1, 52(3)
  04102d4  fcmpu 0, 26, 1
  04102d8  cror 6, 0, 2
  04102dc  bt 6, 0x410320
  04102e0  lfs 1, 2524(27)
  04102e4  fdivs 1, 1, 26
  04102e8  stw 23, 248(27)
  04102ec  stfs 27, 252(27)
  04102f0  fsub 2, 23, 26
  04102f4  fsub 3, 23, 26
  04102f8  fsub 4, 26, 23
  04102fc  fsub 5, 26, 23
  0410300  fmuls 6, 29, 1
  0410304  fmuls 1, 28, 1
  0410308  fsel 2, 2, 23, 6
  041030c  fsel 3, 3, 23, 1
  0410310  fsel 2, 4, 2, 6
  0410314  fsel 1, 5, 3, 1
  0410318  stfs 2, 240(27)
  041031c  stfs 1, 244(27)
  0410320  lfs 1, 132(27)
  0410324  lfs 2, 128(27)
  0410328  fsubs 30, 30, 1
  041032c  fsubs 31, 31, 2
  0410330  lis 4, 114
  0410334  lis 3, 65
  0410338  lis 7, 114
  041033c  addi 6, 3, -1328
  0410340  addic 3, 1, 176
  0410344  lfs 4, -3052(4)
  0410348  addic 5, 27, 2528
  041034c  fmuls 1, 30, 30
  0410350  lfs 2, -3060(7)
  0410354  fmuls 4, 4, 24
  0410358  fmuls 3, 2, 25
  041035c  fmadds 29, 31, 31, 1
  0410360  fmr 1, 23
  0410364  fsqrts 29, 29
  0410368  fneg 5, 29
  041036c  stfs 5, 176(1)
  0410370  lfs 5, 56(6)
  0410374  fmuls 2, 2, 5
  0410378  bl 0x109b40
  041037c  nop
  0410380  lfs 4, 2528(27)
  0410384  lfs 1, 240(27)
  0410388  fcmpu 0, 4, 29
  041038c  lfs 2, 244(27)
  0410390  lfs 3, 248(27)
  0410394  lhz 3, 480(27)
  0410398  cror 6, 0, 2
  041039c  bt 6, 0x4103a8
  04103a0  fmr 4, 29
  04103a4  stfs 29, 2528(27)
  04103a8  fcmpu 0, 29, 4
  04103ac  cror 6, 0, 2
  04103b0  bt 6, 0x4103d4
  04103b4  fcmpu 0, 29, 23
  04103b8  bf 2, 0x4103c8
  04103bc  fmr 31, 23
  04103c0  fmr 30, 31
  04103c4  b 0x4103d4
  04103c8  fdivs 4, 4, 29
  04103cc  fmuls 31, 4, 31
  04103d0  fmuls 30, 4, 30
  04103d4  fadds 1, 1, 31
  04103d8  lis 4, 65
  04103dc  fadds 2, 2, 30
  04103e0  stw 23, 252(27)
  04103e4  stfs 3, 344(27)
  04103e8  addi 4, 4, -1328
  04103ec  stw 23, 348(27)
  04103f0  lis 5, 114
  04103f4  li 6, 60
  04103f8  vspltisw 2, -1
  04103fc  li 7, -3056
  0410400  extsh 3, 3
  0410404  vslw 2, 2, 2
  0410408  stfs 1, 240(27)
  041040c  stfs 2, 244(27)
  0410410  stfs 1, 336(27)
  0410414  stfs 2, 340(27)
  0410418  lfs 1, 60(4)
  041041c  lfs 2, -3056(5)
  0410420  <unknown>
  0410424  fmuls 1, 2, 1
  0410428  vspltw 3, 3, 0
  041042c  <unknown>
  0410430  vmaddfp 2, 4, 3, 2
  0410434  fctiwz 1, 1
  0410438  vctsxs 2, 2, 0
  041043c  stfd 1, 272(1)
  0410440  lwz 4, 276(1)
  0410444  cmpw 3, 4
  0410448  bf 0, 0x4104ac
  041044c  vsplth 2, 2, 1
  0410450  li 3, 480
  0410454  stvehx 2, 3, 27
  0410458  b 0x4104ac
  041045c  lis 3, 65
  0410460  lis 4, 114
  0410464  addi 3, 3, -1328
  0410468  lfs 1, 64(3)
  041046c  lfs 2, 68(3)
  0410470  lfs 3, -3064(4)
  0410474  lfs 4, 336(27)
  0410478  fmadds 1, 3, 1, 2
  041047c  lfs 5, 340(27)
  0410480  lfs 6, 344(27)
  0410484  stw 23, 252(27)
  0410488  fmuls 2, 4, 1
  041048c  fmuls 3, 5, 1
  0410490  fmuls 1, 6, 1
  0410494  stfs 2, 336(27)
  0410498  stfs 3, 340(27)
  041049c  stfs 1, 344(27)
  04104a0  stfs 2, 240(27)
  04104a4  stfs 3, 244(27)
  04104a8  stfs 1, 248(27)
  04104ac  ld 0, 448(1)
  04104b0  mtlr 0
  04104b4  lfd 23, 360(1)
  04104b8  lfd 24, 368(1)
  04104bc  lfd 25, 376(1)
  04104c0  lfd 26, 384(1)
  04104c4  lfd 27, 392(1)
  04104c8  lfd 28, 400(1)
  04104cc  lfd 29, 408(1)
  04104d0  lfd 30, 416(1)
  04104d4  lfd 31, 424(1)
  04104d8  ld 23, 288(1)
  04104dc  ld 24, 296(1)
  04104e0  ld 25, 304(1)
  04104e4  ld 26, 312(1)
  04104e8  ld 27, 320(1)
  04104ec  ld 28, 328(1)
  04104f0  ld 29, 336(1)
  04104f4  ld 30, 344(1)
  04104f8  ld 31, 352(1)
  04104fc  addi 1, 1, 432
  0410500  blr
