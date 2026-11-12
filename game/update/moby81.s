# game/update/moby81.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

UpdateMoby_81:   # 0x46c660, 0x8ac bytes
  046c660  stdu 1, -400(1)
  046c664  mflr 0
  046c668  std 0, 416(1)
  046c66c  stfd 24, 336(1)
  046c670  stfd 25, 344(1)
  046c674  stfd 26, 352(1)
  046c678  stfd 27, 360(1)
  046c67c  stfd 28, 368(1)
  046c680  stfd 29, 376(1)
  046c684  stfd 30, 384(1)
  046c688  stfd 31, 392(1)
  046c68c  addi 0, 1, 272
  046c690  stvx 31, 0, 0
  046c694  std 31, 328(1)
  046c698  std 29, 312(1)
  046c69c  ori 31, 3, 0
  046c6a0  lwz 29, 120(31)
  046c6a4  std 30, 320(1)
  046c6a8  std 28, 304(1)
  046c6ac  std 27, 296(1)
  046c6b0  std 26, 288(1)
  046c6b4  addic 3, 29, 16
  046c6b8  bl 0x4fffb4
  046c6bc  nop
  046c6c0  cmpwi 3, 0
  046c6c4  bt 2, 0x46c6fc
  046c6c8  lwz 30, 120(31)
  046c6cc  lhz 3, 18(30)
  046c6d0  extsh 3, 3
  046c6d4  cmpwi 3, -1
  046c6d8  bt 2, 0x46c6ec
  046c6dc  bl 0xda9e8
  046c6e0  nop
  046c6e4  li 3, -1
  046c6e8  sth 3, 18(30)
  046c6ec  ori 3, 31, 0
  046c6f0  bl 0xefb38
  046c6f4  nop
  046c6f8  b 0x46cebc
  046c6fc  lfs 1, 16(31)
  046c700  lfs 2, 0(29)
  046c704  fadds 1, 1, 2
  046c708  lis 3, 114
  046c70c  lfs 2, 20(31)
  046c710  lis 4, 135
  046c714  lfs 3, 24(31)
  046c718  stfs 1, 16(31)
  046c71c  lfs 1, 4(29)
  046c720  fadds 1, 2, 1
  046c724  stfs 1, 20(31)
  046c728  lfs 1, 8(29)
  046c72c  fadds 1, 3, 1
  046c730  stfs 1, 24(31)
  046c734  lfs 3, 0(29)
  046c738  lfs 1, -3064(3)
  046c73c  lfs 4, 30392(4)
  046c740  fabs 6, 3
  046c744  lfs 5, 4(29)
  046c748  fmuls 4, 1, 4
  046c74c  lwz 3, 8(29)
  046c750  lfs 2, 8(29)
  046c754  cmpwi 1, 3, 0
  046c758  fcmpu 0, 6, 4
  046c75c  cror 2, 0, 2
  046c760  bt 2, 0x46c788
  046c764  lis 3, 71
  046c768  lis 4, 135
  046c76c  addi 3, 3, -14840
  046c770  lfs 6, 0(3)
  046c774  lfs 7, 30388(4)
  046c778  fsubs 7, 7, 6
  046c77c  fmadds 6, 7, 1, 6
  046c780  fmuls 3, 3, 6
  046c784  stfs 3, 0(29)
  046c788  fabs 3, 5
  046c78c  fcmpu 0, 3, 4
  046c790  cror 2, 0, 2
  046c794  bt 2, 0x46c7bc
  046c798  lis 3, 71
  046c79c  lis 4, 135
  046c7a0  addi 3, 3, -14840
  046c7a4  lfs 3, 0(3)
  046c7a8  lfs 4, 30388(4)
  046c7ac  fsubs 4, 4, 3
  046c7b0  fmadds 3, 4, 1, 3
  046c7b4  fmuls 3, 5, 3
  046c7b8  stfs 3, 4(29)
  046c7bc  lis 3, 71
  046c7c0  addi 3, 3, -14840
  046c7c4  lfs 31, 4(3)
  046c7c8  bf 5, 0x46c7ec
  046c7cc  lis 3, 71
  046c7d0  lis 4, 135
  046c7d4  addi 3, 3, -14840
  046c7d8  lfs 3, 0(3)
  046c7dc  lfs 4, 30388(4)
  046c7e0  fsubs 4, 4, 3
  046c7e4  fmadds 1, 4, 1, 3
  046c7e8  fmuls 2, 2, 1
  046c7ec  lis 3, 114
  046c7f0  lis 4, 135
  046c7f4  lfs 1, -3060(3)
  046c7f8  lfs 3, 30384(4)
  046c7fc  lis 3, 71
  046c800  lwz 30, 120(31)
  046c804  fnmsubs 1, 1, 3, 2
  046c808  lis 4, 16384
  046c80c  addi 3, 3, -14840
  046c810  stfs 1, 8(29)
  046c814  lwz 5, 16(31)
  046c818  lfs 30, 8(3)
  046c81c  srawi 6, 5, 31
  046c820  srwi 3, 6, 1
  046c824  xor 3, 3, 5
  046c828  subc 3, 3, 6
  046c82c  cmpw 3, 4
  046c830  bt 0, 0x46c8a4
  046c834  lis 4, 17535
  046c838  ori 4, 4, 16384
  046c83c  cmpw 3, 4
  046c840  bt 1, 0x46c8a4
  046c844  lwz 5, 20(31)
  046c848  lis 3, 17535
  046c84c  lis 4, 16384
  046c850  srawi 6, 5, 31
  046c854  ori 3, 3, 16384
  046c858  srwi 7, 6, 1
  046c85c  xor 5, 7, 5
  046c860  subc 5, 5, 6
  046c864  cmpw 1, 5, 3
  046c868  cmpw 5, 4
  046c86c  cror 2, 0, 5
  046c870  bt 2, 0x46c8a4
  046c874  lwz 5, 24(31)
  046c878  lis 3, 17535
  046c87c  lis 4, 16384
  046c880  srawi 6, 5, 31
  046c884  ori 3, 3, 16384
  046c888  srwi 7, 6, 1
  046c88c  xor 5, 7, 5
  046c890  subc 5, 5, 6
  046c894  cmpw 5, 4
  046c898  cmpw 1, 5, 3
  046c89c  bt 0, 0x46c8a4
  046c8a0  bf 5, 0x46c8d4
  046c8a4  lhz 3, 18(30)
  046c8a8  extsh 3, 3
  046c8ac  cmpwi 3, -1
  046c8b0  bt 2, 0x46c8c4
  046c8b4  bl 0xda9e8
  046c8b8  nop
  046c8bc  li 3, -1
  046c8c0  sth 3, 18(30)
  046c8c4  ori 3, 31, 0
  046c8c8  bl 0xefb38
  046c8cc  nop
  046c8d0  b 0x46cebc
  046c8d4  lis 3, 71
  046c8d8  addic 30, 31, 16
  046c8dc  addi 4, 3, -14840
  046c8e0  ori 3, 30, 0
  046c8e4  li 5, 0
  046c8e8  li 6, 0
  046c8ec  lfs 1, 12(4)
  046c8f0  bl 0x59e20
  046c8f4  nop
  046c8f8  cmpwi 3, 0
  046c8fc  lfs 1, 64(31)
  046c900  bf 2, 0x46c950
  046c904  lis 3, 151
  046c908  lfs 2, 16(31)
  046c90c  lis 4, 71
  046c910  addic 3, 3, -25376
  046c914  addi 4, 4, -14840
  046c918  lfs 3, 128(3)
  046c91c  fsubs 3, 2, 3
  046c920  lfs 2, 16(4)
  046c924  fabs 3, 3
  046c928  fcmpu 0, 3, 2
  046c92c  cror 6, 1, 2
  046c930  bt 6, 0x46ca18
  046c934  lfs 3, 20(31)
  046c938  lfs 4, 132(3)
  046c93c  fsubs 3, 3, 4
  046c940  fabs 3, 3
  046c944  fcmpu 0, 3, 2
  046c948  cror 6, 1, 2
  046c94c  bt 6, 0x46ca18
  046c950  li 28, 0
  046c954  lwz 6, 32(29)
  046c958  li 3, 1
  046c95c  li 4, 0
  046c960  ori 5, 31, 0
  046c964  stw 28, 252(1)
  046c968  stw 28, 248(1)
  046c96c  stw 28, 244(1)
  046c970  stw 28, 240(1)
  046c974  lhz 6, 166(6)
  046c978  extsh 6, 6
  046c97c  bl 0x15d204
  046c980  nop
  046c984  lis 3, 71
  046c988  li 11, -1
  046c98c  fmr 1, 30
  046c990  addi 6, 3, -14840
  046c994  li 7, 2
  046c998  addic 4, 1, 240
  046c99c  ori 3, 31, 0
  046c9a0  ori 5, 30, 0
  046c9a4  lfs 3, 0(6)
  046c9a8  lfs 2, 20(6)
  046c9ac  li 8, 5
  046c9b0  lfs 4, 24(6)
  046c9b4  li 9, 2
  046c9b8  lfs 5, 28(6)
  046c9bc  li 10, 4
  046c9c0  lfs 7, 32(6)
  046c9c4  fmr 6, 3
  046c9c8  std 11, 144(1)
  046c9cc  std 28, 160(1)
  046c9d0  std 7, 168(1)
  046c9d4  std 11, 176(1)
  046c9d8  std 28, 184(1)
  046c9dc  bl 0x10e030
  046c9e0  nop
  046c9e4  lwz 29, 120(31)
  046c9e8  lhz 3, 18(29)
  046c9ec  extsh 3, 3
  046c9f0  cmpwi 3, -1
  046c9f4  bt 2, 0x46ca08
  046c9f8  bl 0xda9e8
  046c9fc  nop
  046ca00  li 3, -1
  046ca04  sth 3, 18(29)
  046ca08  ori 3, 31, 0
  046ca0c  bl 0xefb38
  046ca10  nop
  046ca14  b 0x46cebc
  046ca18  lfs 2, 20(29)
  046ca1c  bl 0x502578
  046ca20  nop
  046ca24  stfs 1, 64(31)
  046ca28  lfs 1, 68(31)
  046ca2c  lfs 2, 24(29)
  046ca30  bl 0x502578
  046ca34  nop
  046ca38  stfs 1, 68(31)
  046ca3c  lfs 1, 72(31)
  046ca40  lfs 2, 28(29)
  046ca44  bl 0x502578
  046ca48  nop
  046ca4c  ori 3, 31, 0
  046ca50  stfs 1, 72(31)
  046ca54  addic 5, 1, 192
  046ca58  li 4, 0
  046ca5c  bl 0xf1114
  046ca60  nop
  046ca64  lis 3, 71
  046ca68  addi 26, 3, -14840
  046ca6c  lfs 30, 36(26)
  046ca70  lfs 29, 24(26)
  046ca74  fmr 1, 30
  046ca78  fmr 2, 29
  046ca7c  bl 0xfe4f0
  046ca80  nop
  046ca84  lfs 2, 196(1)
  046ca88  lfs 3, 20(31)
  046ca8c  lfs 4, 192(1)
  046ca90  fsubs 3, 2, 3
  046ca94  lfs 5, 16(31)
  046ca98  lfs 6, 200(1)
  046ca9c  fsubs 5, 4, 5
  046caa0  lfs 7, 24(31)
  046caa4  lfs 9, 192(31)
  046caa8  fsubs 7, 6, 7
  046caac  fmadds 4, 9, 1, 4
  046cab0  lfs 10, 196(31)
  046cab4  lfs 11, 200(31)
  046cab8  fmadds 2, 10, 1, 2
  046cabc  fmadds 1, 11, 1, 6
  046cac0  fmuls 8, 3, 3
  046cac4  lfs 6, 204(1)
  046cac8  lis 3, 114
  046cacc  stfs 4, 208(1)
  046cad0  fmadds 8, 5, 5, 8
  046cad4  stfs 2, 212(1)
  046cad8  stfs 6, 220(1)
  046cadc  stfs 6, 236(1)
  046cae0  stfs 1, 216(1)
  046cae4  lfs 1, 40(26)
  046cae8  fmadds 8, 7, 7, 8
  046caec  lfs 2, -3056(3)
  046caf0  addic 28, 1, 208
  046caf4  fsqrts 4, 8
  046caf8  fdivs 1, 1, 4
  046cafc  fsub 6, 31, 4
  046cb00  fsub 8, 31, 4
  046cb04  fsub 9, 31, 4
  046cb08  fsub 10, 4, 31
  046cb0c  fsub 11, 4, 31
  046cb10  fsub 4, 4, 31
  046cb14  fmuls 5, 5, 1
  046cb18  fmuls 3, 3, 1
  046cb1c  fmuls 1, 7, 1
  046cb20  fsel 6, 6, 31, 5
  046cb24  fsel 7, 8, 31, 3
  046cb28  fsel 8, 9, 31, 1
  046cb2c  fsel 5, 10, 6, 5
  046cb30  fsel 3, 11, 7, 3
  046cb34  fsel 1, 4, 8, 1
  046cb38  stfs 5, 224(1)
  046cb3c  stfs 3, 228(1)
  046cb40  stfs 1, 232(1)
  046cb44  lfs 1, 48(26)
  046cb48  lfs 3, 44(26)
  046cb4c  fmuls 1, 2, 1
  046cb50  fmr 28, 3
  046cb54  fctiwz 1, 1
  046cb58  stfd 1, 256(1)
  046cb5c  lfs 1, 52(26)
  046cb60  lwz 3, 260(1)
  046cb64  fmuls 1, 2, 1
  046cb68  extsw 3, 3
  046cb6c  fctiwz 1, 1
  046cb70  stfd 1, 256(1)
  046cb74  lwz 4, 260(1)
  046cb78  extsw 4, 4
  046cb7c  bl 0xfe484
  046cb80  nop
  046cb84  ori 8, 3, 0
  046cb88  fmr 1, 28
  046cb8c  lis 5, 20224
  046cb90  lis 6, 8191
  046cb94  ori 3, 28, 0
  046cb98  li 9, 1
  046cb9c  addic 4, 1, 224
  046cba0  ori 5, 5, 32767
  046cba4  ori 6, 6, 65535
  046cba8  bl 0x1268f8
  046cbac  nop
  046cbb0  li 3, 68
  046cbb4  lfs 28, 56(26)
  046cbb8  lis 27, 161
  046cbbc  lfs 27, 60(26)
  046cbc0  li 30, 0
  046cbc4  lfs 26, 64(26)
  046cbc8  addic 27, 27, 23856
  046cbcc  lfs 25, 0(26)
  046cbd0  lvlx 31, 3, 26
  046cbd4  vspltw 31, 31, 0
  046cbd8  cmpwi 30, 2
  046cbdc  bt 2, 0x46cc70
  046cbe0  fmr 1, 30
  046cbe4  fmr 2, 29
  046cbe8  bl 0xfe4f0
  046cbec  nop
  046cbf0  lfs 2, 192(31)
  046cbf4  lfs 3, 196(31)
  046cbf8  lfs 4, 200(31)
  046cbfc  lfs 5, 16(31)
  046cc00  lfs 6, 20(31)
  046cc04  fmadds 5, 2, 1, 5
  046cc08  lfs 2, 24(31)
  046cc0c  fmadds 3, 3, 1, 6
  046cc10  fmadds 4, 4, 1, 2
  046cc14  lfs 6, 28(31)
  046cc18  fmr 1, 30
  046cc1c  fmr 2, 29
  046cc20  stfs 6, 220(1)
  046cc24  stfs 5, 208(1)
  046cc28  stfs 3, 212(1)
  046cc2c  stfs 4, 216(1)
  046cc30  bl 0xfe4f0
  046cc34  nop
  046cc38  lfs 2, 208(31)
  046cc3c  lfs 3, 212(31)
  046cc40  lfs 4, 216(31)
  046cc44  lfs 5, 16(31)
  046cc48  lfs 6, 20(31)
  046cc4c  fmadds 2, 2, 1, 5
  046cc50  lfs 5, 24(31)
  046cc54  fmadds 3, 3, 1, 6
  046cc58  fmadds 1, 4, 1, 5
  046cc5c  lfs 4, 28(31)
  046cc60  stfs 4, 220(1)
  046cc64  stfs 2, 208(1)
  046cc68  stfs 3, 212(1)
  046cc6c  stfs 1, 216(1)
  046cc70  li 3, 6
  046cc74  bl 0xfc620
  046cc78  nop
  046cc7c  ori 26, 3, 0
  046cc80  li 3, 2
  046cc84  bl 0xfc620
  046cc88  nop
  046cc8c  li 4, 0
  046cc90  fmr 1, 28
  046cc94  neg 5, 26
  046cc98  fmr 2, 27
  046cc9c  subc 3, 4, 3
  046cca0  subc 4, 26, 5
  046cca4  cntlzw 3, 3
  046cca8  sldi 3, 3, 58
  046ccac  sradi 3, 3, 63
  046ccb0  and 3, 3, 4
  046ccb4  addc 26, 5, 3
  046ccb8  bl 0xfcbe8
  046ccbc  nop
  046ccc0  li 3, 16
  046ccc4  fmr 24, 1
  046ccc8  li 4, 255
  046cccc  bl 0xfe484
  046ccd0  nop
  046ccd4  slwi 4, 3, 8
  046ccd8  fmr 1, 26
  046ccdc  slwi 5, 3, 16
  046cce0  fmr 2, 25
  046cce4  or 3, 4, 3
  046cce8  fmr 3, 25
  046ccec  ori 7, 26, 0
  046ccf0  fmr 4, 24
  046ccf4  or 3, 3, 5
  046ccf8  ori 8, 27, 0
  046ccfc  oris 10, 3, 24576
  046cd00  ori 3, 28, 0
  046cd04  extsw 10, 10
  046cd08  bl 0x126f50
  046cd0c  nop
  046cd10  cmpwi 3, 0
  046cd14  bt 2, 0x46cd64
  046cd18  vspltisw 2, -1
  046cd1c  li 4, 68
  046cd20  lis 5, 114
  046cd24  li 6, -3056
  046cd28  vslw 2, 2, 2
  046cd2c  stb 4, 3(3)
  046cd30  li 7, 43
  046cd34  li 4, 10
  046cd38  lvlx 3, 6, 5
  046cd3c  li 5, 2
  046cd40  vmaddfp 2, 3, 31, 2
  046cd44  li 6, 96
  046cd48  vctsxs 2, 2, 0
  046cd4c  vsplth 3, 2, 1
  046cd50  vspltb 2, 2, 3
  046cd54  stvehx 3, 4, 3
  046cd58  stw 5, 36(3)
  046cd5c  stb 6, 42(3)
  046cd60  stvebx 2, 7, 3
  046cd64  addic 30, 30, 1
  046cd68  cmpwi 30, 3
  046cd6c  bt 0, 0x46cbd8
  046cd70  lfs 1, 192(1)
  046cd74  lfs 2, 16(31)
  046cd78  lis 3, 71
  046cd7c  lfs 3, 196(1)
  046cd80  lfs 4, 20(31)
  046cd84  lfs 5, 200(1)
  046cd88  fsubs 1, 1, 2
  046cd8c  lfs 6, 24(31)
  046cd90  fsubs 3, 3, 4
  046cd94  addi 3, 3, -14840
  046cd98  fsubs 5, 5, 6
  046cd9c  lfs 7, 72(3)
  046cda0  lfs 8, 28(31)
  046cda4  li 3, 2
  046cda8  fmadds 1, 1, 7, 2
  046cdac  fmadds 2, 3, 7, 4
  046cdb0  stfs 8, 220(1)
  046cdb4  fmadds 3, 5, 7, 6
  046cdb8  stfs 1, 208(1)
  046cdbc  stfs 2, 212(1)
  046cdc0  stfs 3, 216(1)
  046cdc4  bl 0xfc620
  046cdc8  nop
  046cdcc  lfs 4, 208(1)
  046cdd0  cmpwi 3, 0
  046cdd4  lfs 5, 212(1)
  046cdd8  lfs 6, 216(1)
  046cddc  bt 2, 0x46cdfc
  046cde0  lfs 1, 224(31)
  046cde4  lfs 2, 228(31)
  046cde8  lfs 3, 232(31)
  046cdec  fneg 1, 1
  046cdf0  fneg 2, 2
  046cdf4  fneg 3, 3
  046cdf8  b 0x46ce08
  046cdfc  lfs 1, 224(31)
  046ce00  lfs 2, 228(31)
  046ce04  lfs 3, 232(31)
  046ce08  fadds 1, 4, 1
  046ce0c  fadds 2, 5, 2
  046ce10  lis 3, 71
  046ce14  fadds 3, 6, 3
  046ce18  addi 4, 3, -14840
  046ce1c  lhz 3, 18(29)
  046ce20  extsh 3, 3
  046ce24  cmpwi 3, -1
  046ce28  stfs 1, 208(1)
  046ce2c  stfs 2, 212(1)
  046ce30  stfs 3, 216(1)
  046ce34  lfs 2, 76(4)
  046ce38  lfs 3, 80(4)
  046ce3c  lfs 4, 84(4)
  046ce40  bf 2, 0x46ce6c
  046ce44  ori 3, 28, 0
  046ce48  fmr 5, 4
  046ce4c  fmr 4, 3
  046ce50  fmr 1, 2
  046ce54  fmr 2, 31
  046ce58  fmr 3, 25
  046ce5c  bl 0xda4ac
  046ce60  nop
  046ce64  sth 3, 18(29)
  046ce68  b 0x46cebc
  046ce6c  lis 4, 162
  046ce70  sldi 3, 3, 5
  046ce74  addic 4, 4, -8448
  046ce78  lis 5, 16204
  046ce7c  addc 3, 4, 3
  046ce80  lis 4, 16448
  046ce84  clrldi 3, 3, 32
  046ce88  lis 6, 16256
  046ce8c  lis 7, 15948
  046ce90  ori 5, 5, 52429
  046ce94  ori 7, 7, 52429
  046ce98  stfs 1, 16(3)
  046ce9c  lfs 1, 212(1)
  046cea0  stfs 1, 20(3)
  046cea4  lfs 1, 216(1)
  046cea8  stw 4, 28(3)
  046ceac  stfs 1, 24(3)
  046ceb0  stw 6, 0(3)
  046ceb4  stw 5, 4(3)
  046ceb8  stw 7, 8(3)
  046cebc  li 0, 272
  046cec0  lvx 31, 1, 0
  046cec4  ld 0, 416(1)
  046cec8  mtlr 0
  046cecc  lfd 24, 336(1)
  046ced0  lfd 25, 344(1)
  046ced4  lfd 26, 352(1)
  046ced8  lfd 27, 360(1)
  046cedc  lfd 28, 368(1)
  046cee0  lfd 29, 376(1)
  046cee4  lfd 30, 384(1)
  046cee8  lfd 31, 392(1)
  046ceec  ld 26, 288(1)
  046cef0  ld 27, 296(1)
  046cef4  ld 28, 304(1)
  046cef8  ld 29, 312(1)
  046cefc  ld 30, 320(1)
  046cf00  ld 31, 328(1)
  046cf04  addi 1, 1, 400
  046cf08  blr
