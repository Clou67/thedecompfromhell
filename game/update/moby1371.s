# game/update/moby1371.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

FUN_0025c7f8:   # 0x25c7f8, 0x50c bytes
  025c7f8  stdu 1, -240(1)
  025c7fc  mflr 0
  025c800  std 0, 256(1)
  025c804  stfd 31, 232(1)
  025c808  std 29, 208(1)
  025c80c  ori 29, 3, 0
  025c810  li 3, 1368
  025c814  std 31, 224(1)
  025c818  fmr 31, 1
  025c81c  std 30, 216(1)
  025c820  ori 31, 6, 0
  025c824  ori 30, 5, 0
  025c828  bl 0xefa28
  025c82c  nop
  025c830  cmpwi 3, 0
  025c834  bt 2, 0x25cce4
  025c838  li 4, 255
  025c83c  li 5, 1
  025c840  li 6, 0
  025c844  vspltisw 3, -1
  025c848  stb 4, 48(3)
  025c84c  li 7, -3056
  025c850  sth 4, 50(3)
  025c854  stb 5, 49(3)
  025c858  ld 4, 56(29)
  025c85c  lis 5, 38
  025c860  stb 6, 32(3)
  025c864  std 4, 56(3)
  025c868  lfs 1, 0(30)
  025c86c  addi 5, 5, -14356
  025c870  lis 6, 114
  025c874  vslw 3, 3, 3
  025c878  stfs 1, 16(3)
  025c87c  lfs 1, 4(30)
  025c880  lwz 4, 120(3)
  025c884  stfs 1, 20(3)
  025c888  lfs 1, 8(30)
  025c88c  stfs 1, 24(3)
  025c890  lfs 1, 12(30)
  025c894  stfs 1, 28(3)
  025c898  stfs 31, 64(4)
  025c89c  lfs 1, 0(31)
  025c8a0  stfs 1, 16(4)
  025c8a4  lfs 2, 4(31)
  025c8a8  stfs 2, 20(4)
  025c8ac  lfs 3, 8(31)
  025c8b0  stfs 3, 24(4)
  025c8b4  lfs 4, 12(31)
  025c8b8  stfs 4, 28(4)
  025c8bc  lvlx 2, 0, 5
  025c8c0  lvlx 4, 7, 6
  025c8c4  vspltw 2, 2, 0
  025c8c8  li 6, 56
  025c8cc  vmaddfp 2, 4, 2, 3
  025c8d0  vctsxs 2, 2, 0
  025c8d4  vspltw 2, 2, 0
  025c8d8  stvewx 2, 6, 4
  025c8dc  stw 29, 60(4)
  025c8e0  lfs 5, 20(3)
  025c8e4  lfs 6, 16(3)
  025c8e8  fsubs 2, 2, 5
  025c8ec  lfs 5, 24(3)
  025c8f0  fsubs 1, 1, 6
  025c8f4  fsubs 3, 3, 5
  025c8f8  fmr 6, 31
  025c8fc  lfs 31, 4(5)
  025c900  stfs 4, 12(4)
  025c904  fmuls 5, 2, 2
  025c908  fmadds 5, 1, 1, 5
  025c90c  lis 29, 115
  025c910  fmadds 5, 3, 3, 5
  025c914  addic 29, 29, 22784
  025c918  fsqrts 5, 5
  025c91c  fdivs 4, 6, 5
  025c920  fsub 6, 31, 5
  025c924  fsub 7, 31, 5
  025c928  fsub 8, 31, 5
  025c92c  fsub 9, 5, 31
  025c930  fsub 10, 5, 31
  025c934  fsub 5, 5, 31
  025c938  fmuls 1, 1, 4
  025c93c  fmuls 2, 2, 4
  025c940  fmuls 3, 3, 4
  025c944  fsel 4, 6, 31, 1
  025c948  fsel 6, 7, 31, 2
  025c94c  fsel 7, 8, 31, 3
  025c950  fsel 1, 9, 4, 1
  025c954  fsel 2, 10, 6, 2
  025c958  fsel 3, 5, 7, 3
  025c95c  stfs 1, 0(4)
  025c960  stfs 2, 4(4)
  025c964  stfs 3, 8(4)
  025c968  lfs 1, 0(31)
  025c96c  lfs 4, 16(3)
  025c970  lfs 2, 4(31)
  025c974  lfs 3, 20(3)
  025c978  fsubs 1, 1, 4
  025c97c  fsubs 2, 2, 3
  025c980  fabs 8, 1
  025c984  fabs 7, 2
  025c988  stfs 1, 124(1)
  025c98c  stfs 2, 128(1)
  025c990  fsubs 1, 8, 7
  025c994  stfs 1, 132(1)
  025c998  lwz 4, 124(1)
  025c99c  lfs 1, 124(1)
  025c9a0  lwz 6, 128(1)
  025c9a4  lfs 2, 128(1)
  025c9a8  fabs 1, 1
  025c9ac  rlwinm 6, 6, 3, 29, 29
  025c9b0  fabs 5, 2
  025c9b4  lfs 2, 24(3)
  025c9b8  lfs 9, 8(5)
  025c9bc  lwz 5, 132(1)
  025c9c0  lfs 6, 132(1)
  025c9c4  rlwimi 6, 5, 2, 30, 30
  025c9c8  fsub 10, 6, 31
  025c9cc  fsub 11, 6, 31
  025c9d0  rlwimi 6, 4, 4, 28, 28
  025c9d4  ori 4, 29, 0
  025c9d8  slwi 5, 6, 2
  025c9dc  rlwimi 4, 6, 2, 26, 28
  025c9e0  clrldi 4, 4, 32
  025c9e4  lfsx 6, 29, 5
  025c9e8  fsel 7, 10, 1, 7
  025c9ec  fsel 8, 11, 5, 8
  025c9f0  lfs 5, 4(4)
  025c9f4  fmr 1, 9
  025c9f8  fcmpu 0, 7, 31
  025c9fc  bt 1, 0x25ca08
  025ca00  fmr 5, 31
  025ca04  b 0x25cb24
  025ca08  fsubs 9, 8, 7
  025ca0c  fadds 7, 8, 7
  025ca10  addic 7, 1, 16
  025ca14  li 4, 2
  025ca18  addic 6, 7, 152
  025ca1c  addic 5, 7, 168
  025ca20  mtctr 4
  025ca24  fdivs 7, 9, 7
  025ca28  fmuls 9, 7, 7
  025ca2c  stfs 7, 180(1)
  025ca30  stfs 7, 172(1)
  025ca34  stfs 7, 176(1)
  025ca38  stfs 7, 168(1)
  025ca3c  lfs 10, 180(1)
  025ca40  lfs 11, 172(1)
  025ca44  lfs 12, 176(1)
  025ca48  fmuls 7, 9, 9
  025ca4c  fmuls 11, 11, 9
  025ca50  fmuls 10, 10, 7
  025ca54  fmuls 8, 7, 7
  025ca58  fmuls 7, 12, 7
  025ca5c  stfs 11, 172(1)
  025ca60  fmuls 9, 10, 9
  025ca64  stfs 7, 176(1)
  025ca68  stfs 9, 180(1)
  025ca6c  lfs 7, 152(7)
  025ca70  fmuls 7, 7, 8
  025ca74  stfs 7, 168(7)
  025ca78  lfs 7, 4(6)
  025ca7c  addic 7, 7, 8
  025ca80  addic 6, 6, 8
  025ca84  fmuls 7, 7, 8
  025ca88  stfs 7, 4(5)
  025ca8c  addic 5, 5, 8
  025ca90  bdnz 0x25ca6c
  025ca94  ori 8, 1, 0
  025ca98  li 5, 4
  025ca9c  lis 7, 115
  025caa0  addic 6, 8, 168
  025caa4  mtctr 5
  025caa8  addic 7, 7, 22752
  025caac  ori 5, 6, 0
  025cab0  lfs 7, 168(8)
  025cab4  lfs 8, 0(7)
  025cab8  fmuls 7, 7, 8
  025cabc  lfs 8, 4(7)
  025cac0  addic 7, 7, 8
  025cac4  stfs 7, 168(8)
  025cac8  lfs 7, 4(6)
  025cacc  addic 8, 8, 8
  025cad0  fmuls 7, 7, 8
  025cad4  stfs 7, 4(6)
  025cad8  addic 6, 6, 8
  025cadc  bdnz 0x25cab0
  025cae0  ori 6, 4, 0
  025cae4  fmr 7, 31
  025cae8  ori 4, 1, 0
  025caec  mtctr 6
  025caf0  lfs 8, 168(4)
  025caf4  fadds 7, 7, 8
  025caf8  lfs 8, 4(5)
  025cafc  addic 4, 4, 16
  025cb00  lfs 9, 8(5)
  025cb04  lfs 10, 12(5)
  025cb08  addic 5, 5, 16
  025cb0c  fadds 7, 7, 8
  025cb10  fadds 7, 7, 9
  025cb14  fadds 7, 7, 10
  025cb18  bdnz 0x25caf0
  025cb1c  fadds 7, 7, 1
  025cb20  fmadds 5, 7, 6, 5
  025cb24  stfs 5, 72(3)
  025cb28  lfs 5, 4(31)
  025cb2c  lfs 6, 0(31)
  025cb30  fsubs 3, 3, 5
  025cb34  fsubs 4, 4, 6
  025cb38  fmuls 3, 3, 3
  025cb3c  fmadds 3, 4, 4, 3
  025cb40  lfs 4, 8(31)
  025cb44  fsubs 2, 4, 2
  025cb48  fsqrts 3, 3
  025cb4c  stfs 2, 116(1)
  025cb50  fabs 5, 2
  025cb54  fabs 4, 3
  025cb58  stfs 3, 112(1)
  025cb5c  lwz 4, 116(1)
  025cb60  rlwinm 4, 4, 3, 29, 29
  025cb64  fsubs 2, 4, 5
  025cb68  stfs 2, 120(1)
  025cb6c  lwz 5, 112(1)
  025cb70  lfs 2, 112(1)
  025cb74  lfs 3, 116(1)
  025cb78  lwz 6, 120(1)
  025cb7c  lfs 6, 120(1)
  025cb80  fabs 2, 2
  025cb84  rlwimi 4, 6, 2, 30, 30
  025cb88  fsub 7, 6, 31
  025cb8c  fabs 3, 3
  025cb90  fsub 6, 6, 31
  025cb94  rlwimi 4, 5, 4, 28, 28
  025cb98  ori 5, 29, 0
  025cb9c  rlwimi 5, 4, 2, 26, 28
  025cba0  slwi 4, 4, 2
  025cba4  clrldi 5, 5, 32
  025cba8  fsel 5, 7, 2, 5
  025cbac  lfsx 2, 29, 4
  025cbb0  fsel 3, 6, 3, 4
  025cbb4  lfs 4, 4(5)
  025cbb8  fcmpu 0, 5, 31
  025cbbc  bt 1, 0x25cbc4
  025cbc0  b 0x25ccdc
  025cbc4  fsubs 6, 3, 5
  025cbc8  fadds 3, 3, 5
  025cbcc  addic 7, 1, 16
  025cbd0  li 4, 2
  025cbd4  addic 5, 7, 136
  025cbd8  addic 6, 7, 120
  025cbdc  mtctr 4
  025cbe0  fdivs 3, 6, 3
  025cbe4  fmuls 5, 3, 3
  025cbe8  stfs 3, 148(1)
  025cbec  stfs 3, 140(1)
  025cbf0  stfs 3, 144(1)
  025cbf4  stfs 3, 136(1)
  025cbf8  lfs 7, 148(1)
  025cbfc  lfs 8, 140(1)
  025cc00  lfs 9, 144(1)
  025cc04  fmuls 6, 5, 5
  025cc08  fmuls 8, 8, 5
  025cc0c  fmuls 7, 7, 6
  025cc10  fmuls 3, 6, 6
  025cc14  fmuls 6, 9, 6
  025cc18  stfs 8, 140(1)
  025cc1c  fmuls 5, 7, 5
  025cc20  stfs 6, 144(1)
  025cc24  stfs 5, 148(1)
  025cc28  lfs 5, 120(7)
  025cc2c  fmuls 5, 5, 3
  025cc30  stfs 5, 136(7)
  025cc34  lfs 5, 4(6)
  025cc38  addic 6, 6, 8
  025cc3c  fmuls 5, 5, 3
  025cc40  addic 7, 7, 8
  025cc44  stfs 5, 4(5)
  025cc48  addic 5, 5, 8
  025cc4c  bdnz 0x25cc28
  025cc50  ori 8, 1, 0
  025cc54  li 5, 4
  025cc58  lis 7, 115
  025cc5c  addic 6, 8, 136
  025cc60  mtctr 5
  025cc64  addic 7, 7, 22752
  025cc68  ori 5, 6, 0
  025cc6c  lfs 3, 136(8)
  025cc70  lfs 5, 0(7)
  025cc74  fmuls 3, 3, 5
  025cc78  lfs 5, 4(7)
  025cc7c  addic 7, 7, 8
  025cc80  stfs 3, 136(8)
  025cc84  lfs 3, 4(6)
  025cc88  addic 8, 8, 8
  025cc8c  fmuls 3, 3, 5
  025cc90  stfs 3, 4(6)
  025cc94  addic 6, 6, 8
  025cc98  bdnz 0x25cc6c
  025cc9c  ori 6, 4, 0
  025cca0  ori 4, 1, 0
  025cca4  mtctr 6
  025cca8  lfs 3, 136(4)
  025ccac  lfs 5, 4(5)
  025ccb0  fadds 3, 31, 3
  025ccb4  lfs 6, 8(5)
  025ccb8  lfs 31, 12(5)
  025ccbc  addic 4, 4, 16
  025ccc0  addic 5, 5, 16
  025ccc4  fadds 3, 3, 5
  025ccc8  fadds 3, 3, 6
  025cccc  fadds 31, 3, 31
  025ccd0  bdnz 0x25cca8
  025ccd4  fadds 31, 31, 1
  025ccd8  fmadds 31, 31, 2, 4
  025ccdc  fneg 1, 31
  025cce0  stfs 1, 68(3)
  025cce4  ld 0, 256(1)
  025cce8  mtlr 0
  025ccec  lfd 31, 232(1)
  025ccf0  ld 29, 208(1)
  025ccf4  ld 30, 216(1)
  025ccf8  ld 31, 224(1)
  025ccfc  addi 1, 1, 240
  025cd00  blr

M1371_0025cd04:   # 0x25cd04, 0x14 bytes
  025cd04  lis 3, 122
  025cd08  lis 4, 1
  025cd0c  addic 3, 3, -16368
  025cd10  stw 4, 72(3)
  025cd14  blr

FUN_0025cd18:   # 0x25cd18, 0xe0 bytes
  025cd18  stdu 1, -144(1)
  025cd1c  mflr 0
  025cd20  std 0, 160(1)
  025cd24  std 31, 136(1)
  025cd28  ori 31, 3, 0
  025cd2c  std 30, 128(1)
  025cd30  std 29, 120(1)
  025cd34  li 3, 1371
  025cd38  bl 0xefa28
  025cd3c  nop
  025cd40  ori 30, 3, 0
  025cd44  cmpwi 30, 0
  025cd48  bt 2, 0x25cdd8
  025cd4c  li 3, 255
  025cd50  li 4, 1
  025cd54  li 5, 0
  025cd58  li 6, 127
  025cd5c  stb 3, 48(30)
  025cd60  stb 4, 49(30)
  025cd64  stb 5, 32(30)
  025cd68  li 4, 32
  025cd6c  lfs 1, 16(31)
  025cd70  stfs 1, 16(30)
  025cd74  lfs 1, 20(31)
  025cd78  stfs 1, 20(30)
  025cd7c  lfs 1, 24(31)
  025cd80  lwz 29, 120(30)
  025cd84  stfs 1, 24(30)
  025cd88  lfs 1, 28(31)
  025cd8c  sth 6, 50(30)
  025cd90  ori 3, 29, 0
  025cd94  stfs 1, 28(30)
  025cd98  lfs 1, 64(31)
  025cd9c  stfs 1, 64(30)
  025cda0  lfs 1, 68(31)
  025cda4  stfs 1, 68(30)
  025cda8  lfs 1, 72(31)
  025cdac  stw 31, 184(30)
  025cdb0  stfs 1, 72(30)
  025cdb4  lfs 1, 76(31)
  025cdb8  stfs 1, 76(30)
  025cdbc  bl 0x500250
  025cdc0  nop
  025cdc4  addic 4, 29, 32
  025cdc8  ori 3, 30, 0
  025cdcc  stw 4, 16(29)
  025cdd0  bl 0xf31a8
  025cdd4  nop
  025cdd8  ori 3, 30, 0
  025cddc  ld 0, 160(1)
  025cde0  mtlr 0
  025cde4  ld 29, 120(1)
  025cde8  ld 30, 128(1)
  025cdec  ld 31, 136(1)
  025cdf0  addi 1, 1, 144
  025cdf4  blr

FUN_0025ce40:   # 0x25ce40, 0x278 bytes
  025ce40  stdu 1, -192(1)
  025ce44  mflr 0
  025ce48  std 0, 208(1)
  025ce4c  stfd 27, 152(1)
  025ce50  stfd 28, 160(1)
  025ce54  stfd 29, 168(1)
  025ce58  stfd 30, 176(1)
  025ce5c  stfd 31, 184(1)
  025ce60  std 31, 144(1)
  025ce64  ori 31, 4, 0
  025ce68  std 30, 136(1)
  025ce6c  li 3, 3
  025ce70  std 29, 128(1)
  025ce74  std 28, 120(1)
  025ce78  lwz 30, 120(31)
  025ce7c  bl 0xfc620
  025ce80  nop
  025ce84  cmpwi 3, 0
  025ce88  bf 2, 0x25cea0
  025ce8c  li 3, 1
  025ce90  li 4, 32
  025ce94  ori 5, 31, 0
  025ce98  bl 0x15d12c
  025ce9c  nop
  025cea0  lis 3, 16179
  025cea4  lis 4, 38
  025cea8  ori 3, 3, 13107
  025ceac  addi 29, 4, -12808
  025ceb0  stw 3, 72(30)
  025ceb4  lfs 1, 0(29)
  025ceb8  bl 0x502758
  025cebc  nop
  025cec0  lhz 4, 52(31)
  025cec4  li 28, 0
  025cec8  stw 3, 64(30)
  025cecc  li 3, 255
  025ced0  rlwimi 4, 28, 0, 29, 30
  025ced4  stw 28, 108(30)
  025ced8  stb 3, 48(31)
  025cedc  sth 4, 52(31)
  025cee0  lfs 1, 72(31)
  025cee4  lfs 2, 4(29)
  025cee8  bl 0x502578
  025ceec  nop
  025cef0  lfs 2, 8(29)
  025cef4  lfs 3, 12(29)
  025cef8  lis 3, 114
  025cefc  lfs 4, 16(29)
  025cf00  lfs 5, 20(29)
  025cf04  lfs 6, 24(29)
  025cf08  lfs 7, 28(29)
  025cf0c  lfs 8, 32(29)
  025cf10  stfs 1, 112(1)
  025cf14  lfs 9, 36(29)
  025cf18  lfs 10, -3048(3)
  025cf1c  fmuls 9, 10, 9
  025cf20  fadds 2, 1, 2
  025cf24  fsubs 12, 3, 1
  025cf28  fsubs 30, 4, 1
  025cf2c  stfs 9, 48(30)
  025cf30  lfs 11, 40(29)
  025cf34  fmuls 10, 10, 11
  025cf38  fsubs 3, 3, 2
  025cf3c  fsubs 4, 4, 2
  025cf40  fsub 29, 1, 12
  025cf44  li 3, 1
  025cf48  stfs 10, 52(30)
  025cf4c  lfs 11, 44(29)
  025cf50  fmuls 11, 9, 11
  025cf54  lfs 31, 48(29)
  025cf58  fsub 28, 2, 3
  025cf5c  fsel 1, 29, 12, 1
  025cf60  lfs 13, 52(29)
  025cf64  lfs 0, 56(29)
  025cf68  fsqrts 11, 11
  025cf6c  stb 28, 93(30)
  025cf70  addic 5, 1, 112
  025cf74  addic 6, 30, 56
  025cf78  addic 7, 30, 60
  025cf7c  fsel 2, 28, 3, 2
  025cf80  fsub 12, 30, 1
  025cf84  fsel 1, 12, 30, 1
  025cf88  fmuls 27, 11, 31
  025cf8c  stfs 11, 60(30)
  025cf90  stw 3, 68(30)
  025cf94  fdivs 3, 27, 9
  025cf98  fsub 9, 4, 2
  025cf9c  fsel 2, 9, 4, 2
  025cfa0  fmr 4, 7
  025cfa4  fmuls 9, 1, 1
  025cfa8  fmuls 7, 2, 2
  025cfac  fmuls 30, 9, 1
  025cfb0  fmuls 12, 7, 2
  025cfb4  fmadds 1, 30, 5, 1
  025cfb8  fmuls 29, 7, 12
  025cfbc  fmadds 2, 12, 5, 2
  025cfc0  fmuls 12, 9, 30
  025cfc4  fmuls 5, 7, 29
  025cfc8  fmadds 2, 29, 6, 2
  025cfcc  fmuls 11, 9, 12
  025cfd0  fmadds 1, 12, 6, 1
  025cfd4  fdivs 13, 13, 3
  025cfd8  fmuls 7, 7, 5
  025cfdc  fmadds 2, 5, 4, 2
  025cfe0  fmuls 6, 9, 11
  025cfe4  fmadds 1, 11, 4, 1
  025cfe8  fmuls 5, 10, 0
  025cfec  fmadds 2, 7, 8, 2
  025cff0  fmadds 1, 6, 8, 1
  025cff4  stfs 2, 48(1)
  025cff8  stfs 1, 52(1)
  025cffc  ld 3, 48(1)
  025d000  fmadds 1, 5, 3, 13
  025d004  stfs 1, 56(30)
  025d008  lfs 1, 60(29)
  025d00c  stfs 1, 56(1)
  025d010  lfs 1, 64(29)
  025d014  stfs 1, 60(1)
  025d018  ld 4, 56(1)
  025d01c  bl 0x107de8
  025d020  nop
  025d024  ori 3, 31, 0
  025d028  lfs 1, 112(1)
  025d02c  addic 4, 30, 32
  025d030  li 6, 1
  025d034  li 7, 5
  025d038  li 8, 2
  025d03c  bl 0x10ad80
  025d040  nop
  025d044  lis 3, -16512
  025d048  lhz 5, 52(31)
  025d04c  lis 4, 114
  025d050  rlwimi 5, 28, 0, 19, 19
  025d054  li 6, 0
  025d058  stw 3, 112(30)
  025d05c  stw 3, 116(30)
  025d060  lfs 1, -3052(4)
  025d064  sth 5, 52(31)
  025d068  ori 3, 31, 0
  025d06c  fmuls 1, 1, 31
  025d070  li 4, 1
  025d074  li 5, 0
  025d078  stfs 1, 108(30)
  025d07c  bl 0xfddc0
  025d080  nop
  025d084  ld 0, 208(1)
  025d088  mtlr 0
  025d08c  lfd 27, 152(1)
  025d090  lfd 28, 160(1)
  025d094  lfd 29, 168(1)
  025d098  lfd 30, 176(1)
  025d09c  lfd 31, 184(1)
  025d0a0  ld 28, 120(1)
  025d0a4  ld 29, 128(1)
  025d0a8  ld 30, 136(1)
  025d0ac  ld 31, 144(1)
  025d0b0  addi 1, 1, 192
  025d0b4  blr

UpdateMoby_1371:   # 0x25d0d0, 0x190 bytes
  025d0d0  stdu 1, -256(1)
  025d0d4  mflr 0
  025d0d8  std 0, 272(1)
  025d0dc  stfd 31, 248(1)
  025d0e0  std 31, 240(1)
  025d0e4  lbz 4, 83(3)
  025d0e8  std 30, 232(1)
  025d0ec  ori 31, 3, 0
  025d0f0  lwz 30, 120(3)
  025d0f4  std 29, 224(1)
  025d0f8  std 28, 216(1)
  025d0fc  cmpwi 4, 1
  025d100  bf 2, 0x25d23c
  025d104  addic 4, 30, 32
  025d108  ori 3, 31, 0
  025d10c  bl 0x10b030
  025d110  nop
  025d114  lis 4, 38
  025d118  lfs 1, 64(31)
  025d11c  lis 29, 114
  025d120  addi 4, 4, -12104
  025d124  ori 28, 3, 0
  025d128  lfs 31, 0(4)
  025d12c  lfs 3, -3052(29)
  025d130  fmuls 2, 3, 31
  025d134  bl 0x502578
  025d138  nop
  025d13c  stfs 1, 64(31)
  025d140  lfs 1, 68(31)
  025d144  lfs 2, -3052(29)
  025d148  fmuls 2, 2, 31
  025d14c  bl 0x502578
  025d150  nop
  025d154  li 3, 0
  025d158  lhz 4, 52(31)
  025d15c  li 5, 97
  025d160  stfs 1, 68(31)
  025d164  rlwimi 4, 3, 0, 19, 19
  025d168  and 3, 28, 5
  025d16c  cmpwi 3, 0
  025d170  sth 4, 52(31)
  025d174  bt 2, 0x25d210
  025d178  lis 3, 38
  025d17c  lfs 1, 16(31)
  025d180  li 7, 0
  025d184  addi 6, 3, -12104
  025d188  lfs 2, 20(31)
  025d18c  stfs 1, 192(1)
  025d190  li 11, 1
  025d194  lfs 1, 28(31)
  025d198  li 12, -1
  025d19c  stfs 2, 196(1)
  025d1a0  ori 3, 31, 0
  025d1a4  stfs 1, 204(1)
  025d1a8  addic 4, 30, 32
  025d1ac  lfs 4, 4(6)
  025d1b0  addic 5, 1, 192
  025d1b4  lfs 1, 24(31)
  025d1b8  li 8, 5
  025d1bc  std 7, 144(1)
  025d1c0  li 9, 2
  025d1c4  fadds 1, 1, 4
  025d1c8  std 11, 160(1)
  025d1cc  std 11, 168(1)
  025d1d0  li 10, 4
  025d1d4  std 12, 176(1)
  025d1d8  fmr 6, 4
  025d1dc  std 7, 184(1)
  025d1e0  stfs 1, 200(1)
  025d1e4  lfs 1, 8(6)
  025d1e8  lfs 3, 12(6)
  025d1ec  lfs 5, 16(6)
  025d1f0  fmr 2, 1
  025d1f4  lfs 7, 20(6)
  025d1f8  bl 0x10e030
  025d1fc  nop
  025d200  ori 3, 31, 0
  025d204  bl 0xefb38
  025d208  nop
  025d20c  b 0x25d23c
  025d210  lwz 4, 24(31)
  025d214  lis 3, 16544
  025d218  srawi 5, 4, 31
  025d21c  srwi 6, 5, 1
  025d220  xor 4, 6, 4
  025d224  subc 4, 4, 5
  025d228  cmpw 4, 3
  025d22c  bf 0, 0x25d23c
  025d230  ori 3, 31, 0
  025d234  bl 0xefb38
  025d238  nop
  025d23c  ld 0, 272(1)
  025d240  mtlr 0
  025d244  lfd 31, 248(1)
  025d248  ld 28, 216(1)
  025d24c  ld 29, 224(1)
  025d250  ld 30, 232(1)
  025d254  ld 31, 240(1)
  025d258  addi 1, 1, 256
  025d25c  blr
