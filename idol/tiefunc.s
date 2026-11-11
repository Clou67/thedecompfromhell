# idol/tiefunc.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

DrawTie:   # 0x50c5e0, 0xc24 bytes
  050c5e0  stdu 1, -352(1)
  050c5e4  mflr 0
  050c5e8  std 0, 368(1)
  050c5ec  std 22, 272(1)
  050c5f0  ori 22, 3, 0
  050c5f4  lwz 3, 8(4)
  050c5f8  std 4, 200(1)
  050c5fc  std 31, 344(1)
  050c600  std 30, 336(1)
  050c604  std 29, 328(1)
  050c608  std 28, 320(1)
  050c60c  std 27, 312(1)
  050c610  std 26, 304(1)
  050c614  std 25, 296(1)
  050c618  std 24, 288(1)
  050c61c  std 23, 280(1)
  050c620  std 21, 264(1)
  050c624  std 20, 256(1)
  050c628  std 19, 248(1)
  050c62c  std 18, 240(1)
  050c630  std 17, 232(1)
  050c634  std 16, 224(1)
  050c638  std 15, 216(1)
  050c63c  std 14, 208(1)
  050c640  cmpwi 3, 0
  050c644  bt 2, 0x50d1ac
  050c648  lis 3, 346
  050c64c  lbz 3, -15511(3)
  050c650  cmpwi 3, 0
  050c654  bf 2, 0x50d1ac
  050c658  lis 19, 144
  050c65c  lis 3, 102
  050c660  addic 21, 19, -23532
  050c664  addic 31, 3, -1156
  050c668  ori 4, 31, 0
  050c66c  lwz 3, 8(21)
  050c670  bl 0x50eaf8
  050c674  nop
  050c678  lwz 3, -23532(19)
  050c67c  ori 4, 31, 0
  050c680  bl 0x50eaf8
  050c684  nop
  050c688  lis 3, 273
  050c68c  lwz 4, -23532(19)
  050c690  li 5, 1
  050c694  addic 3, 3, 5888
  050c698  bl 0x4eda68
  050c69c  nop
  050c6a0  lis 14, 144
  050c6a4  lwz 4, 8(21)
  050c6a8  lwz 5, 24(22)
  050c6ac  lis 3, 20
  050c6b0  li 9, 2
  050c6b4  ori 6, 3, 7932
  050c6b8  addic 3, 5, 16
  050c6bc  lwz 14, -23196(14)
  050c6c0  lwz 8, 8(4)
  050c6c4  li 5, 4
  050c6c8  li 7, 20
  050c6cc  li 22, 0
  050c6d0  mtctr 9
  050c6d4  stw 6, 0(8)
  050c6d8  lwz 6, 8(4)
  050c6dc  std 5, 184(1)
  050c6e0  std 9, 176(1)
  050c6e4  stw 7, 4(6)
  050c6e8  lwz 5, 8(4)
  050c6ec  addic 5, 5, 8
  050c6f0  stw 5, 8(4)
  050c6f4  lwz 6, 0(3)
  050c6f8  stw 6, 0(5)
  050c6fc  lwz 5, 8(4)
  050c700  addic 6, 5, 4
  050c704  stw 6, 8(4)
  050c708  lwz 6, 4(3)
  050c70c  addic 3, 3, 8
  050c710  stw 6, 4(5)
  050c714  lwz 5, 8(4)
  050c718  addic 5, 5, 4
  050c71c  stw 5, 8(4)
  050c720  bdnz 0x50c6f4
  050c724  lwz 5, -23532(19)
  050c728  lis 3, 8
  050c72c  li 4, 518
  050c730  ori 3, 3, 776
  050c734  li 6, 255
  050c738  lwz 7, 8(5)
  050c73c  lis 8, 4
  050c740  ori 8, 8, 772
  050c744  stw 3, 0(7)
  050c748  lwz 7, 8(5)
  050c74c  stw 4, 4(7)
  050c750  lwz 7, 8(5)
  050c754  stw 6, 8(7)
  050c758  lwz 6, 8(5)
  050c75c  addic 6, 6, 12
  050c760  stw 6, 8(5)
  050c764  lwz 5, -23532(19)
  050c768  li 6, 1
  050c76c  lwz 7, 8(5)
  050c770  stw 8, 0(7)
  050c774  lwz 7, 8(5)
  050c778  stw 6, 4(7)
  050c77c  lwz 7, 8(5)
  050c780  addic 7, 7, 8
  050c784  stw 7, 8(5)
  050c788  lwz 5, 8(21)
  050c78c  lwz 7, 8(5)
  050c790  stw 3, 0(7)
  050c794  lwz 3, 8(5)
  050c798  stw 4, 4(3)
  050c79c  lwz 3, 8(5)
  050c7a0  stw 6, 8(3)
  050c7a4  lwz 3, 8(5)
  050c7a8  addic 3, 3, 12
  050c7ac  stw 3, 8(5)
  050c7b0  lwz 4, 8(21)
  050c7b4  ori 3, 14, 0
  050c7b8  li 5, 5
  050c7bc  lwz 7, 8(4)
  050c7c0  stw 8, 0(7)
  050c7c4  lwz 7, 8(4)
  050c7c8  stw 6, 4(7)
  050c7cc  lwz 6, 8(4)
  050c7d0  addic 6, 6, 8
  050c7d4  stw 6, 8(4)
  050c7d8  lwz 4, 8(21)
  050c7dc  bl 0x4d83ec
  050c7e0  nop
  050c7e4  lwz 4, 8(21)
  050c7e8  ori 3, 14, 0
  050c7ec  li 5, 6
  050c7f0  bl 0x4d82b8
  050c7f4  nop
  050c7f8  lwz 3, 8(21)
  050c7fc  lis 4, 4
  050c800  li 5, 6194
  050c804  ori 4, 4, 5952
  050c808  lis 7, 4
  050c80c  lwz 6, 8(3)
  050c810  ori 7, 7, 5956
  050c814  lis 8, 4
  050c818  li 10, 1092
  050c81c  stw 4, 0(6)
  050c820  lwz 6, 8(3)
  050c824  ori 8, 8, 5964
  050c828  stw 5, 4(6)
  050c82c  lwz 6, 8(3)
  050c830  addic 6, 6, 8
  050c834  stw 6, 8(3)
  050c838  lwz 3, 8(21)
  050c83c  li 6, 2082
  050c840  ori 15, 22, 0
  050c844  lwz 9, 8(3)
  050c848  li 14, -1
  050c84c  stw 7, 0(9)
  050c850  lwz 9, 8(3)
  050c854  stw 6, 4(9)
  050c858  lwz 9, 8(3)
  050c85c  addic 9, 9, 8
  050c860  stw 9, 8(3)
  050c864  lwz 3, 8(21)
  050c868  lwz 9, 8(3)
  050c86c  stw 8, 0(9)
  050c870  lwz 9, 8(3)
  050c874  stw 10, 4(9)
  050c878  lwz 9, 8(3)
  050c87c  addic 9, 9, 8
  050c880  stw 9, 8(3)
  050c884  lwz 3, -23532(19)
  050c888  lwz 9, 8(3)
  050c88c  stw 4, 0(9)
  050c890  lwz 4, 8(3)
  050c894  stw 5, 4(4)
  050c898  lwz 4, 8(3)
  050c89c  addic 4, 4, 8
  050c8a0  stw 4, 8(3)
  050c8a4  lwz 3, -23532(19)
  050c8a8  lwz 4, 8(3)
  050c8ac  stw 7, 0(4)
  050c8b0  lwz 4, 8(3)
  050c8b4  stw 6, 4(4)
  050c8b8  lwz 4, 8(3)
  050c8bc  addic 4, 4, 8
  050c8c0  stw 4, 8(3)
  050c8c4  lwz 3, -23532(19)
  050c8c8  lwz 4, 8(3)
  050c8cc  stw 8, 0(4)
  050c8d0  lwz 4, 8(3)
  050c8d4  ld 5, 200(1)
  050c8d8  stw 10, 4(4)
  050c8dc  lwz 4, 8(3)
  050c8e0  addic 4, 4, 8
  050c8e4  stw 4, 8(3)
  050c8e8  lwz 3, 8(5)
  050c8ec  cmpwi 3, 0
  050c8f0  std 3, 192(1)
  050c8f4  bt 2, 0x50d088
  050c8f8  ori 17, 22, 0
  050c8fc  ori 16, 17, 0
  050c900  ld 3, 200(1)
  050c904  lis 10, -32768
  050c908  lwz 4, 0(3)
  050c90c  lwz 3, 4(3)
  050c910  addc 5, 3, 16
  050c914  lwzx 3, 4, 17
  050c918  clrldi 4, 5, 32
  050c91c  lwz 5, 80(3)
  050c920  lwz 18, 108(3)
  050c924  cmpw 5, 14
  050c928  bt 2, 0x50ca44
  050c92c  lwz 6, 8(21)
  050c930  lis 5, 4
  050c934  lwz 7, 16(18)
  050c938  lis 9, 4
  050c93c  ori 5, 5, 5760
  050c940  or 7, 7, 10
  050c944  lwz 8, 8(6)
  050c948  ori 9, 9, 5764
  050c94c  lis 11, 8
  050c950  stw 5, 0(8)
  050c954  lwz 8, 8(6)
  050c958  ori 11, 11, 6172
  050c95c  stw 7, 4(8)
  050c960  lwz 7, 8(6)
  050c964  addic 7, 7, 8
  050c968  stw 7, 8(6)
  050c96c  lwz 6, 8(21)
  050c970  lwz 7, 20(18)
  050c974  or 7, 7, 10
  050c978  lwz 8, 8(6)
  050c97c  stw 9, 0(8)
  050c980  lwz 8, 8(6)
  050c984  stw 7, 4(8)
  050c988  lwz 7, 8(6)
  050c98c  li 8, 17
  050c990  addic 7, 7, 8
  050c994  stw 7, 8(6)
  050c998  lwz 6, 8(21)
  050c99c  lwz 7, 24(18)
  050c9a0  lwz 12, 8(6)
  050c9a4  stw 11, 0(12)
  050c9a8  lwz 12, 8(6)
  050c9ac  stw 7, 4(12)
  050c9b0  lwz 7, 8(6)
  050c9b4  stw 8, 8(7)
  050c9b8  lwz 7, 8(6)
  050c9bc  addic 7, 7, 12
  050c9c0  stw 7, 8(6)
  050c9c4  lwz 6, -23532(19)
  050c9c8  lwz 7, 16(18)
  050c9cc  or 7, 7, 10
  050c9d0  lwz 12, 8(6)
  050c9d4  stw 5, 0(12)
  050c9d8  lwz 5, 8(6)
  050c9dc  stw 7, 4(5)
  050c9e0  lwz 5, 8(6)
  050c9e4  addic 5, 5, 8
  050c9e8  stw 5, 8(6)
  050c9ec  lwz 5, -23532(19)
  050c9f0  lwz 6, 20(18)
  050c9f4  or 6, 6, 10
  050c9f8  lwz 7, 8(5)
  050c9fc  stw 9, 0(7)
  050ca00  lwz 7, 8(5)
  050ca04  stw 6, 4(7)
  050ca08  lwz 6, 8(5)
  050ca0c  addic 6, 6, 8
  050ca10  stw 6, 8(5)
  050ca14  lwz 5, -23532(19)
  050ca18  lwz 6, 24(18)
  050ca1c  lwz 7, 8(5)
  050ca20  stw 11, 0(7)
  050ca24  lwz 7, 8(5)
  050ca28  stw 6, 4(7)
  050ca2c  lwz 6, 8(5)
  050ca30  stw 8, 8(6)
  050ca34  lwz 6, 8(5)
  050ca38  addic 6, 6, 12
  050ca3c  stw 6, 8(5)
  050ca40  lwz 14, 80(3)
  050ca44  lis 5, 81
  050ca48  li 6, 16
  050ca4c  lvx 2, 0, 4
  050ca50  addi 5, 5, -14928
  050ca54  li 8, 48
  050ca58  li 9, 32
  050ca5c  li 7, 16
  050ca60  lvx 3, 6, 4
  050ca64  li 11, 128
  050ca68  <unknown>
  050ca6c  li 6, 112
  050ca70  lvx 5, 8, 4
  050ca74  lis 12, 68
  050ca78  vspltw 4, 4, 0
  050ca7c  li 8, 144
  050ca80  lvx 6, 9, 4
  050ca84  lvx 7, 7, 5
  050ca88  vmrghw 8, 2, 6
  050ca8c  li 4, 32
  050ca90  vperm 4, 5, 4, 7
  050ca94  li 7, 160
  050ca98  vmrglw 2, 2, 6
  050ca9c  li 31, 8
  050caa0  lwz 9, 8(21)
  050caa4  vmrghw 5, 3, 4
  050caa8  vmrglw 3, 3, 4
  050caac  mtctr 31
  050cab0  vmrghw 4, 8, 5
  050cab4  vmrglw 5, 8, 5
  050cab8  vmrghw 6, 2, 3
  050cabc  vmrglw 2, 2, 3
  050cac0  stvx 4, 6, 1
  050cac4  stvx 5, 11, 1
  050cac8  stvx 6, 8, 1
  050cacc  lvx 3, 4, 5
  050cad0  ld 6, 184(1)
  050cad4  ori 5, 12, 7932
  050cad8  vand 2, 2, 3
  050cadc  addic 4, 1, 112
  050cae0  ori 11, 4, 0
  050cae4  stvx 2, 7, 1
  050cae8  lwz 7, 8(9)
  050caec  stw 5, 0(7)
  050caf0  lwz 5, 8(9)
  050caf4  stw 6, 4(5)
  050caf8  lwz 12, 8(9)
  050cafc  addic 12, 12, 8
  050cb00  stw 12, 8(9)
  050cb04  lwz 5, 0(4)
  050cb08  stw 5, 0(12)
  050cb0c  lwz 5, 8(9)
  050cb10  addic 6, 5, 4
  050cb14  stw 6, 8(9)
  050cb18  lwz 6, 4(4)
  050cb1c  addic 4, 4, 8
  050cb20  stw 6, 4(5)
  050cb24  lwz 12, 8(9)
  050cb28  addic 12, 12, 4
  050cb2c  stw 12, 8(9)
  050cb30  bdnz 0x50cb04
  050cb34  lis 4, 68
  050cb38  mtctr 31
  050cb3c  ori 5, 4, 7932
  050cb40  lwz 4, -23532(19)
  050cb44  ld 6, 184(1)
  050cb48  lwz 7, 8(4)
  050cb4c  stw 5, 0(7)
  050cb50  lwz 5, 8(4)
  050cb54  stw 6, 4(5)
  050cb58  lwz 5, 8(4)
  050cb5c  addic 5, 5, 8
  050cb60  stw 5, 8(4)
  050cb64  lwz 6, 0(11)
  050cb68  stw 6, 0(5)
  050cb6c  lwz 5, 8(4)
  050cb70  addic 6, 5, 4
  050cb74  stw 6, 8(4)
  050cb78  lwz 6, 4(11)
  050cb7c  addic 11, 11, 8
  050cb80  stw 6, 4(5)
  050cb84  lwz 5, 8(4)
  050cb88  addic 5, 5, 4
  050cb8c  stw 5, 8(4)
  050cb90  bdnz 0x50cb64
  050cb94  lis 4, 346
  050cb98  lbz 4, -15510(4)
  050cb9c  cmpwi 4, 0
  050cba0  bt 2, 0x50cc00
  050cba4  lwz 5, 8(21)
  050cba8  lis 4, 4
  050cbac  lwz 6, 96(3)
  050cbb0  ori 4, 4, 5772
  050cbb4  or 6, 6, 10
  050cbb8  lwz 7, 8(5)
  050cbbc  stw 4, 0(7)
  050cbc0  lwz 7, 8(5)
  050cbc4  stw 6, 4(7)
  050cbc8  lwz 6, 8(5)
  050cbcc  addic 6, 6, 8
  050cbd0  stw 6, 8(5)
  050cbd4  lwz 5, -23532(19)
  050cbd8  lwz 3, 96(3)
  050cbdc  or 3, 3, 10
  050cbe0  lwz 6, 8(5)
  050cbe4  stw 4, 0(6)
  050cbe8  lwz 4, 8(5)
  050cbec  stw 3, 4(4)
  050cbf0  lwz 3, 8(5)
  050cbf4  addic 3, 3, 8
  050cbf8  stw 3, 8(5)
  050cbfc  b 0x50cc58
  050cc00  lwz 5, 8(21)
  050cc04  lis 4, 4
  050cc08  lwz 6, 100(3)
  050cc0c  ori 4, 4, 5772
  050cc10  or 6, 6, 10
  050cc14  lwz 7, 8(5)
  050cc18  stw 4, 0(7)
  050cc1c  lwz 7, 8(5)
  050cc20  stw 6, 4(7)
  050cc24  lwz 6, 8(5)
  050cc28  addic 6, 6, 8
  050cc2c  stw 6, 8(5)
  050cc30  lwz 5, -23532(19)
  050cc34  lwz 3, 100(3)
  050cc38  or 3, 3, 10
  050cc3c  lwz 6, 8(5)
  050cc40  stw 4, 0(6)
  050cc44  lwz 4, 8(5)
  050cc48  stw 3, 4(4)
  050cc4c  lwz 3, 8(5)
  050cc50  addic 3, 3, 8
  050cc54  stw 3, 8(5)
  050cc58  lwz 4, 8(21)
  050cc5c  lis 3, 4
  050cc60  ori 20, 22, 0
  050cc64  ori 3, 3, 2672
  050cc68  ori 23, 20, 0
  050cc6c  lwz 5, 8(4)
  050cc70  stw 3, 0(5)
  050cc74  lwz 3, 8(4)
  050cc78  stw 22, 4(3)
  050cc7c  lwz 3, 8(4)
  050cc80  addic 3, 3, 8
  050cc84  stw 3, 8(4)
  050cc88  lwz 24, 28(18)
  050cc8c  lhz 3, 40(18)
  050cc90  cmpwi 3, 0
  050cc94  bt 2, 0x50d070
  050cc98  lwz 4, 0(24)
  050cc9c  cmpwi 1, 23, 1
  050cca0  cmpwi 6, 23, 0
  050cca4  lbz 3, 32(4)
  050cca8  cmpwi 3, 255
  050ccac  bt 2, 0x50ce88
  050ccb0  bt 26, 0x50cce0
  050ccb4  lwz 4, 8(21)
  050ccb8  lis 3, 4
  050ccbc  ori 3, 3, 2672
  050ccc0  lwz 5, 8(4)
  050ccc4  stw 3, 0(5)
  050ccc8  lwz 3, 8(4)
  050cccc  stw 22, 4(3)
  050ccd0  lwz 3, 8(4)
  050ccd4  addic 3, 3, 8
  050ccd8  stw 3, 8(4)
  050ccdc  lwz 4, 0(24)
  050cce0  lwz 3, -23532(19)
  050cce4  ori 5, 4, 0
  050cce8  lbz 7, 23(24)
  050ccec  li 4, 0
  050ccf0  clrlwi 6, 7, 30
  050ccf4  rlwinm 7, 7, 30, 30, 31
  050ccf8  bl 0x4d676c
  050ccfc  nop
  050cd00  lwz 3, -23532(19)
  050cd04  lis 4, 16396
  050cd08  lis 6, 4
  050cd0c  ori 4, 4, 5908
  050cd10  lwz 5, 8(3)
  050cd14  stw 4, 0(5)
  050cd18  lwz 4, 8(3)
  050cd1c  ori 5, 6, 6152
  050cd20  li 6, 5
  050cd24  stw 22, 4(4)
  050cd28  lwz 4, 8(3)
  050cd2c  stw 22, 8(4)
  050cd30  lwz 4, 8(3)
  050cd34  stw 22, 12(4)
  050cd38  lwz 4, 8(3)
  050cd3c  stw 5, 16(4)
  050cd40  lwz 4, 8(3)
  050cd44  li 5, 256
  050cd48  stw 6, 20(4)
  050cd4c  lwz 4, 8(3)
  050cd50  addic 4, 4, 24
  050cd54  stw 4, 8(3)
  050cd58  lwz 4, 8(24)
  050cd5c  lwz 3, 12(24)
  050cd60  clrlwi 6, 4, 24
  050cd64  lwz 27, -23532(19)
  050cd68  subc 9, 5, 6
  050cd6c  subc 5, 3, 9
  050cd70  lwz 7, 8(27)
  050cd74  srawi 6, 5, 31
  050cd78  and 5, 5, 6
  050cd7c  addc 9, 9, 5
  050cd80  subc 3, 3, 9
  050cd84  cmpwi 9, 0
  050cd88  srawi 5, 3, 31
  050cd8c  not 5, 5
  050cd90  and 3, 3, 5
  050cd94  cntlzw 5, 9
  050cd98  rlwinm 25, 3, 0, 0, 23
  050cd9c  rlwinm 5, 5, 27, 31, 31
  050cda0  subc 25, 3, 25
  050cda4  srwi 3, 3, 8
  050cda8  cntlzw 6, 25
  050cdac  xori 5, 5, 1
  050cdb0  rlwinm 6, 6, 27, 31, 31
  050cdb4  xori 6, 6, 1
  050cdb8  addc 6, 3, 6
  050cdbc  addc 5, 6, 5
  050cdc0  addic 6, 7, 4
  050cdc4  slwi 5, 5, 18
  050cdc8  ori 5, 5, 6180
  050cdcc  stw 6, 8(27)
  050cdd0  oris 5, 5, 16384
  050cdd4  stw 5, 0(7)
  050cdd8  bt 2, 0x50ce00
  050cddc  slwi 5, 9, 24
  050cde0  lis 6, 256
  050cde4  subc 5, 5, 6
  050cde8  lwz 6, 8(27)
  050cdec  or 5, 4, 5
  050cdf0  addic 7, 6, 4
  050cdf4  addc 4, 9, 4
  050cdf8  stw 7, 8(27)
  050cdfc  stw 5, 0(6)
  050ce00  cmpwi 3, 0
  050ce04  bt 2, 0x50ce30
  050ce08  lis 26, -256
  050ce0c  lwz 6, 8(27)
  050ce10  or 5, 4, 26
  050ce14  addic 7, 6, 4
  050ce18  addic 3, 3, -1
  050ce1c  addic 4, 4, 256
  050ce20  cmpwi 3, 0
  050ce24  stw 7, 8(27)
  050ce28  stw 5, 0(6)
  050ce2c  bt 1, 0x50ce0c
  050ce30  cmpwi 25, 0
  050ce34  bt 2, 0x50ce58
  050ce38  slwi 3, 25, 24
  050ce3c  lis 5, 256
  050ce40  subc 3, 3, 5
  050ce44  or 3, 4, 3
  050ce48  lwz 4, 8(27)
  050ce4c  addic 5, 4, 4
  050ce50  stw 5, 8(27)
  050ce54  stw 3, 0(4)
  050ce58  lwz 4, -23532(19)
  050ce5c  lis 3, 4
  050ce60  ori 23, 22, 0
  050ce64  ori 3, 3, 6152
  050ce68  lwz 5, 8(4)
  050ce6c  stw 3, 0(5)
  050ce70  lwz 3, 8(4)
  050ce74  stw 22, 4(3)
  050ce78  lwz 3, 8(4)
  050ce7c  addic 3, 3, 8
  050ce80  stw 3, 8(4)
  050ce84  b 0x50cebc
  050ce88  bt 6, 0x50ceb8
  050ce8c  lwz 5, 8(21)
  050ce90  lis 3, 4
  050ce94  li 4, 1
  050ce98  ori 3, 3, 2672
  050ce9c  lwz 6, 8(5)
  050cea0  stw 3, 0(6)
  050cea4  lwz 3, 8(5)
  050cea8  stw 4, 4(3)
  050ceac  lwz 3, 8(5)
  050ceb0  addic 3, 3, 8
  050ceb4  stw 3, 8(5)
  050ceb8  li 23, 1
  050cebc  lwz 3, 8(21)
  050cec0  lwz 5, 0(24)
  050cec4  li 4, 0
  050cec8  lbz 7, 23(24)
  050cecc  clrlwi 6, 7, 30
  050ced0  rlwinm 7, 7, 30, 30, 31
  050ced4  bl 0x4d676c
  050ced8  nop
  050cedc  lwz 3, 8(21)
  050cee0  lis 4, 16396
  050cee4  lis 6, 4
  050cee8  ori 4, 4, 5908
  050ceec  lwz 5, 8(3)
  050cef0  stw 4, 0(5)
  050cef4  lwz 4, 8(3)
  050cef8  ori 5, 6, 6152
  050cefc  li 6, 5
  050cf00  stw 22, 4(4)
  050cf04  lwz 4, 8(3)
  050cf08  stw 22, 8(4)
  050cf0c  lwz 4, 8(3)
  050cf10  stw 22, 12(4)
  050cf14  lwz 4, 8(3)
  050cf18  stw 5, 16(4)
  050cf1c  lwz 4, 8(3)
  050cf20  li 5, 256
  050cf24  stw 6, 20(4)
  050cf28  lwz 4, 8(3)
  050cf2c  addic 4, 4, 24
  050cf30  stw 4, 8(3)
  050cf34  lwz 4, 8(24)
  050cf38  lwz 3, 12(24)
  050cf3c  clrlwi 6, 4, 24
  050cf40  lwz 27, 8(21)
  050cf44  subc 10, 5, 6
  050cf48  subc 5, 3, 10
  050cf4c  srawi 6, 5, 31
  050cf50  lwz 7, 8(27)
  050cf54  and 5, 5, 6
  050cf58  addc 10, 10, 5
  050cf5c  subc 3, 3, 10
  050cf60  cmpwi 10, 0
  050cf64  srawi 5, 3, 31
  050cf68  not 5, 5
  050cf6c  and 3, 3, 5
  050cf70  cntlzw 5, 10
  050cf74  rlwinm 25, 3, 0, 0, 23
  050cf78  rlwinm 5, 5, 27, 31, 31
  050cf7c  subc 25, 3, 25
  050cf80  srwi 3, 3, 8
  050cf84  cntlzw 6, 25
  050cf88  xori 5, 5, 1
  050cf8c  rlwinm 6, 6, 27, 31, 31
  050cf90  xori 6, 6, 1
  050cf94  addc 6, 3, 6
  050cf98  addc 5, 6, 5
  050cf9c  addic 6, 7, 4
  050cfa0  slwi 5, 5, 18
  050cfa4  ori 5, 5, 6180
  050cfa8  stw 6, 8(27)
  050cfac  oris 5, 5, 16384
  050cfb0  stw 5, 0(7)
  050cfb4  bt 2, 0x50cfdc
  050cfb8  slwi 5, 10, 24
  050cfbc  lis 6, 256
  050cfc0  subc 5, 5, 6
  050cfc4  lwz 6, 8(27)
  050cfc8  or 5, 4, 5
  050cfcc  addic 7, 6, 4
  050cfd0  addc 4, 10, 4
  050cfd4  stw 7, 8(27)
  050cfd8  stw 5, 0(6)
  050cfdc  cmpwi 3, 0
  050cfe0  bt 2, 0x50d00c
  050cfe4  lis 26, -256
  050cfe8  lwz 6, 8(27)
  050cfec  or 5, 4, 26
  050cff0  addic 3, 3, -1
  050cff4  addic 7, 6, 4
  050cff8  cmpwi 3, 0
  050cffc  addic 4, 4, 256
  050d000  stw 7, 8(27)
  050d004  stw 5, 0(6)
  050d008  bt 1, 0x50cfe8
  050d00c  cmpwi 25, 0
  050d010  bt 2, 0x50d034
  050d014  slwi 3, 25, 24
  050d018  lis 5, 256
  050d01c  subc 3, 3, 5
  050d020  lwz 5, 8(27)
  050d024  or 3, 4, 3
  050d028  addic 4, 5, 4
  050d02c  stw 4, 8(27)
  050d030  stw 3, 0(5)
  050d034  lwz 4, 8(21)
  050d038  lis 3, 4
  050d03c  addic 20, 20, 1
  050d040  ori 3, 3, 6152
  050d044  addic 24, 24, 24
  050d048  lwz 5, 8(4)
  050d04c  stw 3, 0(5)
  050d050  lwz 3, 8(4)
  050d054  stw 22, 4(3)
  050d058  lwz 3, 8(4)
  050d05c  addic 3, 3, 8
  050d060  stw 3, 8(4)
  050d064  lhz 3, 40(18)
  050d068  cmplw 20, 3
  050d06c  bt 0, 0x50cc98
  050d070  addic 15, 15, 1
  050d074  ld 3, 192(1)
  050d078  addic 17, 17, 4
  050d07c  cmplw 15, 3
  050d080  addic 16, 16, 80
  050d084  bt 0, 0x50c900
  050d088  lis 3, 4
  050d08c  lis 5, 4
  050d090  ori 31, 3, 5952
  050d094  lwz 3, 8(21)
  050d098  ld 30, 176(1)
  050d09c  ori 29, 5, 5956
  050d0a0  lis 5, 4
  050d0a4  lwz 4, 8(3)
  050d0a8  ori 5, 5, 5964
  050d0ac  stw 31, 0(4)
  050d0b0  lwz 4, 8(3)
  050d0b4  stw 30, 4(4)
  050d0b8  lwz 4, 8(3)
  050d0bc  addic 4, 4, 8
  050d0c0  stw 4, 8(3)
  050d0c4  lwz 3, 8(21)
  050d0c8  lwz 4, 8(3)
  050d0cc  stw 29, 0(4)
  050d0d0  lwz 4, 8(3)
  050d0d4  stw 30, 4(4)
  050d0d8  lwz 4, 8(3)
  050d0dc  addic 4, 4, 8
  050d0e0  stw 4, 8(3)
  050d0e4  lwz 3, 8(21)
  050d0e8  lwz 4, 8(3)
  050d0ec  stw 5, 0(4)
  050d0f0  lwz 4, 8(3)
  050d0f4  stw 30, 4(4)
  050d0f8  lwz 4, 8(3)
  050d0fc  addic 4, 4, 8
  050d100  stw 4, 8(3)
  050d104  lwz 3, 8(21)
  050d108  bl 0x50ec5c
  050d10c  nop
  050d110  lwz 3, -23532(19)
  050d114  lis 5, 4
  050d118  ori 5, 5, 5960
  050d11c  lwz 4, 8(3)
  050d120  stw 31, 0(4)
  050d124  lwz 4, 8(3)
  050d128  stw 30, 4(4)
  050d12c  lwz 4, 8(3)
  050d130  addic 4, 4, 8
  050d134  stw 4, 8(3)
  050d138  lwz 3, -23532(19)
  050d13c  lwz 4, 8(3)
  050d140  stw 29, 0(4)
  050d144  lwz 4, 8(3)
  050d148  stw 30, 4(4)
  050d14c  lwz 4, 8(3)
  050d150  addic 4, 4, 8
  050d154  stw 4, 8(3)
  050d158  lwz 3, -23532(19)
  050d15c  lwz 4, 8(3)
  050d160  stw 5, 0(4)
  050d164  lwz 4, 8(3)
  050d168  stw 30, 4(4)
  050d16c  lwz 4, 8(3)
  050d170  addic 4, 4, 8
  050d174  stw 4, 8(3)
  050d178  lwz 3, -23532(19)
  050d17c  bl 0x50ec5c
  050d180  nop
  050d184  lwz 3, 8(21)
  050d188  lis 4, 4
  050d18c  ori 4, 4, 2672
  050d190  lwz 5, 8(3)
  050d194  stw 4, 0(5)
  050d198  lwz 4, 8(3)
  050d19c  stw 22, 4(4)
  050d1a0  lwz 4, 8(3)
  050d1a4  addic 4, 4, 8
  050d1a8  stw 4, 8(3)
  050d1ac  ld 0, 368(1)
  050d1b0  mtlr 0
  050d1b4  ld 14, 208(1)
  050d1b8  ld 15, 216(1)
  050d1bc  ld 16, 224(1)
  050d1c0  ld 17, 232(1)
  050d1c4  ld 18, 240(1)
  050d1c8  ld 19, 248(1)
  050d1cc  ld 20, 256(1)
  050d1d0  ld 21, 264(1)
  050d1d4  ld 22, 272(1)
  050d1d8  ld 23, 280(1)
  050d1dc  ld 24, 288(1)
  050d1e0  ld 25, 296(1)
  050d1e4  ld 26, 304(1)
  050d1e8  ld 27, 312(1)
  050d1ec  ld 28, 320(1)
  050d1f0  ld 29, 328(1)
  050d1f4  ld 30, 336(1)
  050d1f8  ld 31, 344(1)
  050d1fc  addi 1, 1, 352
  050d200  blr

FUN_0050d240:   # 0x50d240, 0x114c bytes
  050d240  stdu 1, -400(1)
  050d244  mflr 0
  050d248  std 0, 416(1)
  050d24c  std 23, 328(1)
  050d250  std 31, 392(1)
  050d254  std 30, 384(1)
  050d258  std 29, 376(1)
  050d25c  std 28, 368(1)
  050d260  std 27, 360(1)
  050d264  std 26, 352(1)
  050d268  std 25, 344(1)
  050d26c  std 24, 336(1)
  050d270  std 22, 320(1)
  050d274  std 21, 312(1)
  050d278  std 20, 304(1)
  050d27c  std 19, 296(1)
  050d280  std 18, 288(1)
  050d284  std 17, 280(1)
  050d288  std 16, 272(1)
  050d28c  std 15, 264(1)
  050d290  std 14, 256(1)
  050d294  ori 23, 3, 0
  050d298  lwz 3, 8(4)
  050d29c  std 5, 208(1)
  050d2a0  cmpwi 3, 0
  050d2a4  std 4, 216(1)
  050d2a8  bt 2, 0x50e334
  050d2ac  lis 3, 346
  050d2b0  lbz 3, -15511(3)
  050d2b4  cmpwi 3, 0
  050d2b8  bf 2, 0x50e334
  050d2bc  lis 20, 144
  050d2c0  lis 3, 102
  050d2c4  addic 22, 20, -23532
  050d2c8  addic 31, 3, -1156
  050d2cc  ori 4, 31, 0
  050d2d0  lwz 3, 8(22)
  050d2d4  bl 0x50eaf8
  050d2d8  nop
  050d2dc  ori 4, 31, 0
  050d2e0  lwz 3, -23532(20)
  050d2e4  bl 0x50eaf8
  050d2e8  nop
  050d2ec  lis 4, 144
  050d2f0  lis 3, 273
  050d2f4  li 5, 1
  050d2f8  addic 3, 3, 5888
  050d2fc  lwz 7, -23196(4)
  050d300  lwz 6, -23532(20)
  050d304  std 7, 192(1)
  050d308  ori 4, 6, 0
  050d30c  bl 0x4eda68
  050d310  nop
  050d314  lwz 3, -23532(20)
  050d318  lis 4, 8
  050d31c  li 6, 518
  050d320  ori 4, 4, 776
  050d324  li 7, 255
  050d328  lwz 5, 8(3)
  050d32c  li 9, 2
  050d330  mtctr 9
  050d334  stw 4, 0(5)
  050d338  lwz 4, 8(3)
  050d33c  lis 5, 4
  050d340  ori 5, 5, 772
  050d344  stw 6, 4(4)
  050d348  lwz 4, 8(3)
  050d34c  stw 7, 8(4)
  050d350  lwz 4, 8(3)
  050d354  li 7, 20
  050d358  addic 4, 4, 12
  050d35c  stw 4, 8(3)
  050d360  lwz 3, -23532(20)
  050d364  li 4, 1
  050d368  lwz 6, 8(3)
  050d36c  stw 5, 0(6)
  050d370  lwz 5, 8(3)
  050d374  lis 6, 20
  050d378  stw 4, 4(5)
  050d37c  lwz 4, 8(3)
  050d380  ori 5, 6, 7932
  050d384  addic 4, 4, 8
  050d388  li 6, 4
  050d38c  stw 4, 8(3)
  050d390  lwz 4, 8(22)
  050d394  lwz 3, 24(23)
  050d398  li 23, 0
  050d39c  addic 3, 3, 16
  050d3a0  lwz 8, 8(4)
  050d3a4  stw 5, 0(8)
  050d3a8  lwz 5, 8(4)
  050d3ac  std 6, 184(1)
  050d3b0  std 9, 176(1)
  050d3b4  stw 7, 4(5)
  050d3b8  lwz 5, 8(4)
  050d3bc  addic 5, 5, 8
  050d3c0  stw 5, 8(4)
  050d3c4  lwz 6, 0(3)
  050d3c8  stw 6, 0(5)
  050d3cc  lwz 5, 8(4)
  050d3d0  addic 6, 5, 4
  050d3d4  stw 6, 8(4)
  050d3d8  lwz 6, 4(3)
  050d3dc  addic 3, 3, 8
  050d3e0  stw 6, 4(5)
  050d3e4  lwz 5, 8(4)
  050d3e8  addic 5, 5, 4
  050d3ec  stw 5, 8(4)
  050d3f0  bdnz 0x50d3c4
  050d3f4  lwz 4, 8(22)
  050d3f8  ld 31, 192(1)
  050d3fc  li 5, 6
  050d400  ori 3, 31, 0
  050d404  bl 0x4d83ec
  050d408  nop
  050d40c  lwz 4, 8(22)
  050d410  ori 3, 31, 0
  050d414  li 5, 6
  050d418  bl 0x4d82b8
  050d41c  nop
  050d420  lwz 3, 8(22)
  050d424  lis 4, 4
  050d428  lis 6, 4
  050d42c  ori 4, 4, 8184
  050d430  lis 7, 4
  050d434  lwz 5, 8(3)
  050d438  ori 7, 7, 5956
  050d43c  lis 8, 4
  050d440  stw 4, 0(5)
  050d444  lwz 4, 8(3)
  050d448  ori 5, 6, 5952
  050d44c  li 6, 6194
  050d450  stw 23, 4(4)
  050d454  lwz 4, 8(3)
  050d458  addic 4, 4, 8
  050d45c  ori 8, 8, 5964
  050d460  stw 4, 8(3)
  050d464  lwz 3, 8(22)
  050d468  li 10, 1092
  050d46c  lwz 4, 8(3)
  050d470  ori 14, 23, 0
  050d474  stw 5, 0(4)
  050d478  lwz 4, 8(3)
  050d47c  ori 17, 14, 0
  050d480  stw 6, 4(4)
  050d484  lwz 4, 8(3)
  050d488  addic 4, 4, 8
  050d48c  stw 4, 8(3)
  050d490  lwz 3, 8(22)
  050d494  li 4, 2082
  050d498  ori 15, 17, 0
  050d49c  lwz 9, 8(3)
  050d4a0  stw 7, 0(9)
  050d4a4  lwz 9, 8(3)
  050d4a8  stw 4, 4(9)
  050d4ac  lwz 9, 8(3)
  050d4b0  addic 9, 9, 8
  050d4b4  stw 9, 8(3)
  050d4b8  lwz 3, 8(22)
  050d4bc  lwz 9, 8(3)
  050d4c0  stw 8, 0(9)
  050d4c4  lwz 9, 8(3)
  050d4c8  stw 10, 4(9)
  050d4cc  lwz 9, 8(3)
  050d4d0  addic 9, 9, 8
  050d4d4  stw 9, 8(3)
  050d4d8  lwz 3, -23532(20)
  050d4dc  lwz 9, 8(3)
  050d4e0  stw 5, 0(9)
  050d4e4  lwz 5, 8(3)
  050d4e8  stw 6, 4(5)
  050d4ec  lwz 5, 8(3)
  050d4f0  addic 5, 5, 8
  050d4f4  stw 5, 8(3)
  050d4f8  lwz 3, -23532(20)
  050d4fc  lwz 5, 8(3)
  050d500  stw 7, 0(5)
  050d504  lwz 5, 8(3)
  050d508  stw 4, 4(5)
  050d50c  lwz 4, 8(3)
  050d510  addic 4, 4, 8
  050d514  stw 4, 8(3)
  050d518  lwz 3, -23532(20)
  050d51c  lwz 4, 8(3)
  050d520  stw 8, 0(4)
  050d524  lwz 4, 8(3)
  050d528  ld 5, 216(1)
  050d52c  stw 17, 244(1)
  050d530  stw 10, 4(4)
  050d534  lwz 4, 8(3)
  050d538  addic 4, 4, 8
  050d53c  stw 4, 8(3)
  050d540  lwz 31, 8(5)
  050d544  ld 3, 208(1)
  050d548  std 31, 200(1)
  050d54c  bl 0x60444c
  050d550  nop
  050d554  li 3, -1
  050d558  cmpwi 31, 0
  050d55c  stw 15, 240(1)
  050d560  stw 3, 248(1)
  050d564  bt 2, 0x50e220
  050d568  std 23, 224(1)
  050d56c  std 23, 232(1)
  050d570  ld 3, 216(1)
  050d574  lis 18, -32768
  050d578  ld 21, 224(1)
  050d57c  ld 4, 232(1)
  050d580  lwz 5, 0(3)
  050d584  lwz 3, 4(3)
  050d588  lwz 6, 248(1)
  050d58c  addc 3, 3, 4
  050d590  lwzx 21, 5, 21
  050d594  clrldi 5, 3, 32
  050d598  lwz 3, 80(21)
  050d59c  lwz 16, 108(21)
  050d5a0  cmpw 3, 6
  050d5a4  bt 2, 0x50d754
  050d5a8  lwz 4, 8(22)
  050d5ac  lis 3, 4
  050d5b0  lwz 6, 16(16)
  050d5b4  lis 8, 4
  050d5b8  ori 3, 3, 5760
  050d5bc  or 6, 6, 18
  050d5c0  lwz 7, 8(4)
  050d5c4  lis 9, 8
  050d5c8  stw 3, 0(7)
  050d5cc  lwz 7, 8(4)
  050d5d0  stw 6, 4(7)
  050d5d4  lwz 6, 8(4)
  050d5d8  ori 7, 8, 5764
  050d5dc  addic 6, 6, 8
  050d5e0  stw 6, 8(4)
  050d5e4  lwz 4, 8(22)
  050d5e8  lwz 6, 20(16)
  050d5ec  or 6, 6, 18
  050d5f0  lwz 8, 8(4)
  050d5f4  stw 7, 0(8)
  050d5f8  lwz 8, 8(4)
  050d5fc  stw 6, 4(8)
  050d600  lwz 6, 8(4)
  050d604  ori 8, 9, 6172
  050d608  li 9, 17
  050d60c  addic 6, 6, 8
  050d610  stw 6, 8(4)
  050d614  lwz 4, 8(22)
  050d618  lwz 6, 24(16)
  050d61c  lwz 10, 8(4)
  050d620  stw 8, 0(10)
  050d624  lwz 10, 8(4)
  050d628  stw 6, 4(10)
  050d62c  lwz 6, 8(4)
  050d630  stw 9, 8(6)
  050d634  lwz 6, 8(4)
  050d638  addic 6, 6, 12
  050d63c  stw 6, 8(4)
  050d640  lwz 4, -23532(20)
  050d644  lwz 6, 16(16)
  050d648  or 6, 6, 18
  050d64c  lwz 10, 8(4)
  050d650  stw 3, 0(10)
  050d654  lwz 3, 8(4)
  050d658  stw 6, 4(3)
  050d65c  lwz 3, 8(4)
  050d660  addic 3, 3, 8
  050d664  stw 3, 8(4)
  050d668  lwz 3, -23532(20)
  050d66c  lwz 4, 20(16)
  050d670  or 4, 4, 18
  050d674  lwz 6, 8(3)
  050d678  stw 7, 0(6)
  050d67c  lwz 6, 8(3)
  050d680  stw 4, 4(6)
  050d684  lwz 4, 8(3)
  050d688  addic 4, 4, 8
  050d68c  stw 4, 8(3)
  050d690  lwz 3, -23532(20)
  050d694  lwz 4, 24(16)
  050d698  lwz 6, 8(3)
  050d69c  stw 8, 0(6)
  050d6a0  lwz 6, 8(3)
  050d6a4  lwz 7, 244(1)
  050d6a8  stw 4, 4(6)
  050d6ac  lwz 4, 8(3)
  050d6b0  stw 9, 8(4)
  050d6b4  lwz 4, 8(3)
  050d6b8  addic 4, 4, 12
  050d6bc  stw 4, 8(3)
  050d6c0  lbz 4, 52(16)
  050d6c4  lwz 6, 80(21)
  050d6c8  lwz 3, 8(22)
  050d6cc  cmpw 4, 7
  050d6d0  stw 6, 248(1)
  050d6d4  bt 2, 0x50d754
  050d6d8  li 6, 0
  050d6dc  lis 7, 4
  050d6e0  subc 4, 6, 4
  050d6e4  li 8, 8
  050d6e8  cntlzw 4, 4
  050d6ec  li 9, 16
  050d6f0  sldi 4, 4, 58
  050d6f4  ori 6, 7, 5956
  050d6f8  sradi 4, 4, 63
  050d6fc  lwz 7, 8(3)
  050d700  subc 8, 8, 9
  050d704  and 4, 4, 8
  050d708  addc 4, 9, 4
  050d70c  stw 6, 0(7)
  050d710  lwz 7, 8(3)
  050d714  slwi 4, 4, 8
  050d718  ori 4, 4, 34
  050d71c  stw 4, 4(7)
  050d720  lwz 7, 8(3)
  050d724  addic 7, 7, 8
  050d728  stw 7, 8(3)
  050d72c  lwz 3, -23532(20)
  050d730  lwz 7, 8(3)
  050d734  stw 6, 0(7)
  050d738  lwz 6, 8(3)
  050d73c  stw 4, 4(6)
  050d740  lwz 4, 8(3)
  050d744  addic 4, 4, 8
  050d748  stw 4, 8(3)
  050d74c  lbz 3, 52(16)
  050d750  stw 3, 244(1)
  050d754  lis 3, 81
  050d758  li 4, 16
  050d75c  lvx 2, 0, 5
  050d760  addi 7, 3, -11760
  050d764  li 3, 48
  050d768  li 8, 32
  050d76c  li 6, 16
  050d770  lvx 3, 4, 5
  050d774  li 9, 128
  050d778  <unknown>
  050d77c  li 4, 112
  050d780  lvx 5, 3, 5
  050d784  li 10, 144
  050d788  vspltw 4, 4, 0
  050d78c  lvx 6, 8, 5
  050d790  lvx 7, 6, 7
  050d794  li 5, 160
  050d798  vmrghw 8, 2, 6
  050d79c  li 6, 32
  050d7a0  vperm 4, 5, 4, 7
  050d7a4  lis 8, 68
  050d7a8  vmrglw 2, 2, 6
  050d7ac  li 24, 8
  050d7b0  lwz 3, 8(22)
  050d7b4  vmrghw 5, 3, 4
  050d7b8  vmrglw 3, 3, 4
  050d7bc  mtctr 24
  050d7c0  vmrghw 4, 8, 5
  050d7c4  vmrglw 5, 8, 5
  050d7c8  vmrghw 6, 2, 3
  050d7cc  vmrglw 2, 2, 3
  050d7d0  stvx 4, 4, 1
  050d7d4  stvx 5, 9, 1
  050d7d8  stvx 6, 10, 1
  050d7dc  addic 4, 1, 112
  050d7e0  lvx 3, 6, 7
  050d7e4  ld 7, 184(1)
  050d7e8  vand 2, 2, 3
  050d7ec  ori 6, 8, 7932
  050d7f0  ori 19, 4, 0
  050d7f4  stvx 2, 5, 1
  050d7f8  lwz 5, 8(3)
  050d7fc  stw 6, 0(5)
  050d800  lwz 5, 8(3)
  050d804  stw 7, 4(5)
  050d808  lwz 5, 8(3)
  050d80c  addic 5, 5, 8
  050d810  stw 5, 8(3)
  050d814  lwz 6, 0(4)
  050d818  stw 6, 0(5)
  050d81c  lwz 5, 8(3)
  050d820  addic 6, 5, 4
  050d824  stw 6, 8(3)
  050d828  lwz 6, 4(4)
  050d82c  addic 4, 4, 8
  050d830  stw 6, 4(5)
  050d834  lwz 5, 8(3)
  050d838  addic 5, 5, 4
  050d83c  stw 5, 8(3)
  050d840  bdnz 0x50d814
  050d844  lis 3, 68
  050d848  ori 4, 19, 0
  050d84c  ori 5, 3, 7932
  050d850  lwz 3, -23532(20)
  050d854  mtctr 24
  050d858  ld 6, 184(1)
  050d85c  lwz 7, 8(3)
  050d860  stw 5, 0(7)
  050d864  lwz 5, 8(3)
  050d868  stw 6, 4(5)
  050d86c  lwz 5, 8(3)
  050d870  addic 5, 5, 8
  050d874  stw 5, 8(3)
  050d878  lwz 6, 0(4)
  050d87c  stw 6, 0(5)
  050d880  lwz 5, 8(3)
  050d884  addic 6, 5, 4
  050d888  stw 6, 8(3)
  050d88c  lwz 6, 4(4)
  050d890  addic 4, 4, 8
  050d894  stw 6, 4(5)
  050d898  lwz 5, 8(3)
  050d89c  addic 5, 5, 4
  050d8a0  stw 5, 8(3)
  050d8a4  bdnz 0x50d878
  050d8a8  lis 3, 346
  050d8ac  lbz 3, -15510(3)
  050d8b0  cmpwi 3, 0
  050d8b4  bt 2, 0x50d914
  050d8b8  lwz 4, 8(22)
  050d8bc  lis 3, 4
  050d8c0  lwz 5, 96(21)
  050d8c4  ori 3, 3, 5772
  050d8c8  or 5, 5, 18
  050d8cc  lwz 6, 8(4)
  050d8d0  stw 3, 0(6)
  050d8d4  lwz 6, 8(4)
  050d8d8  stw 5, 4(6)
  050d8dc  lwz 5, 8(4)
  050d8e0  addic 5, 5, 8
  050d8e4  stw 5, 8(4)
  050d8e8  lwz 4, -23532(20)
  050d8ec  lwz 5, 96(21)
  050d8f0  or 5, 5, 18
  050d8f4  lwz 6, 8(4)
  050d8f8  stw 3, 0(6)
  050d8fc  lwz 3, 8(4)
  050d900  stw 5, 4(3)
  050d904  lwz 3, 8(4)
  050d908  addic 3, 3, 8
  050d90c  stw 3, 8(4)
  050d910  b 0x50d96c
  050d914  lwz 4, 8(22)
  050d918  lis 3, 4
  050d91c  lwz 5, 100(21)
  050d920  ori 3, 3, 5772
  050d924  or 5, 5, 18
  050d928  lwz 6, 8(4)
  050d92c  stw 3, 0(6)
  050d930  lwz 6, 8(4)
  050d934  stw 5, 4(6)
  050d938  lwz 5, 8(4)
  050d93c  addic 5, 5, 8
  050d940  stw 5, 8(4)
  050d944  lwz 4, -23532(20)
  050d948  lwz 5, 100(21)
  050d94c  or 5, 5, 18
  050d950  lwz 6, 8(4)
  050d954  stw 3, 0(6)
  050d958  lwz 3, 8(4)
  050d95c  stw 5, 4(3)
  050d960  lwz 3, 8(4)
  050d964  addic 3, 3, 8
  050d968  stw 3, 8(4)
  050d96c  lwz 25, 28(16)
  050d970  lhz 3, 40(16)
  050d974  ori 21, 23, 0
  050d978  cmpwi 3, 0
  050d97c  bt 2, 0x50e1f0
  050d980  lbz 3, 20(25)
  050d984  cmpw 3, 14
  050d988  bt 2, 0x50d9a8
  050d98c  rlwinm 3, 3, 6, 18, 25
  050d990  ld 4, 208(1)
  050d994  addc 3, 3, 4
  050d998  clrldi 3, 3, 32
  050d99c  bl 0x60444c
  050d9a0  nop
  050d9a4  lbz 14, 20(25)
  050d9a8  lbz 3, 22(25)
  050d9ac  cmpw 3, 17
  050d9b0  bt 2, 0x50dad4
  050d9b4  lis 4, 144
  050d9b8  rlwinm 3, 3, 3, 21, 28
  050d9bc  addic 4, 4, 12292
  050d9c0  lwzx 7, 4, 3
  050d9c4  lwz 4, 8(22)
  050d9c8  ld 6, 192(1)
  050d9cc  extsw 5, 7
  050d9d0  ori 3, 6, 0
  050d9d4  bl 0x4d82b8
  050d9d8  nop
  050d9dc  lbz 3, 22(25)
  050d9e0  lis 4, 144
  050d9e4  slwi 3, 3, 3
  050d9e8  addic 4, 4, 12296
  050d9ec  lwzx 3, 4, 3
  050d9f0  cmpwi 3, 0
  050d9f4  bt 1, 0x50da04
  050d9f8  cmpwi 3, -1
  050d9fc  bf 1, 0x50dad0
  050da00  b 0x50da54
  050da04  lis 4, 1
  050da08  cmpwi 3, 1
  050da0c  ori 4, 4, 1
  050da10  bf 1, 0x50da20
  050da14  cmpwi 3, 2
  050da18  bf 1, 0x50da98
  050da1c  b 0x50dad0
  050da20  lwz 5, 8(22)
  050da24  lis 3, 8
  050da28  ori 3, 3, 788
  050da2c  lwz 6, 8(5)
  050da30  stw 3, 0(6)
  050da34  lwz 3, 8(5)
  050da38  stw 4, 4(3)
  050da3c  lwz 3, 8(5)
  050da40  stw 23, 8(3)
  050da44  lwz 3, 8(5)
  050da48  addic 3, 3, 12
  050da4c  stw 3, 8(5)
  050da50  b 0x50dad0
  050da54  lwz 5, 8(22)
  050da58  lis 3, 8
  050da5c  lis 4, 770
  050da60  ori 3, 3, 788
  050da64  ori 4, 4, 770
  050da68  lwz 7, 8(5)
  050da6c  lis 6, 771
  050da70  ori 6, 6, 771
  050da74  stw 3, 0(7)
  050da78  lwz 3, 8(5)
  050da7c  stw 4, 4(3)
  050da80  lwz 3, 8(5)
  050da84  stw 6, 8(3)
  050da88  lwz 3, 8(5)
  050da8c  addic 3, 3, 12
  050da90  stw 3, 8(5)
  050da94  b 0x50dad0
  050da98  lwz 6, 8(22)
  050da9c  lis 3, 8
  050daa0  lis 5, 770
  050daa4  ori 3, 3, 788
  050daa8  ori 5, 5, 770
  050daac  lwz 7, 8(6)
  050dab0  stw 3, 0(7)
  050dab4  lwz 3, 8(6)
  050dab8  stw 5, 4(3)
  050dabc  lwz 3, 8(6)
  050dac0  stw 4, 8(3)
  050dac4  lwz 3, 8(6)
  050dac8  addic 3, 3, 12
  050dacc  stw 3, 8(6)
  050dad0  lbz 17, 22(25)
  050dad4  lbz 3, 21(25)
  050dad8  cmpw 3, 15
  050dadc  bt 2, 0x50db0c
  050dae0  lwz 5, 8(22)
  050dae4  lis 4, 4
  050dae8  ori 4, 4, 8184
  050daec  lwz 6, 8(5)
  050daf0  stw 4, 0(6)
  050daf4  lwz 4, 8(5)
  050daf8  stw 3, 4(4)
  050dafc  lwz 3, 8(5)
  050db00  addic 3, 3, 8
  050db04  stw 3, 8(5)
  050db08  lbz 15, 21(25)
  050db0c  lwz 3, 4(25)
  050db10  cmpwi 3, -1
  050db14  bf 2, 0x50de5c
  050db18  lwz 3, 8(22)
  050db1c  li 4, 0
  050db20  lwz 5, 0(25)
  050db24  lbz 7, 23(25)
  050db28  clrlwi 6, 7, 30
  050db2c  rlwinm 7, 7, 30, 30, 31
  050db30  bl 0x4d676c
  050db34  nop
  050db38  lwz 3, 8(22)
  050db3c  lis 4, 16396
  050db40  lis 6, 4
  050db44  ori 4, 4, 5908
  050db48  li 7, 256
  050db4c  lwz 5, 8(3)
  050db50  stw 4, 0(5)
  050db54  lwz 4, 8(3)
  050db58  ori 5, 6, 6152
  050db5c  li 6, 5
  050db60  stw 23, 4(4)
  050db64  lwz 4, 8(3)
  050db68  stw 23, 8(4)
  050db6c  lwz 4, 8(3)
  050db70  stw 23, 12(4)
  050db74  lwz 4, 8(3)
  050db78  stw 5, 16(4)
  050db7c  lwz 4, 8(3)
  050db80  stw 6, 20(4)
  050db84  lwz 4, 8(3)
  050db88  addic 4, 4, 24
  050db8c  stw 4, 8(3)
  050db90  lwz 4, 8(25)
  050db94  lwz 5, 12(25)
  050db98  clrlwi 3, 4, 24
  050db9c  subc 3, 7, 3
  050dba0  subc 6, 5, 3
  050dba4  srawi 7, 6, 31
  050dba8  and 6, 6, 7
  050dbac  addc 3, 3, 6
  050dbb0  subc 6, 5, 3
  050dbb4  lwz 5, 8(22)
  050dbb8  srawi 7, 6, 31
  050dbbc  cmpwi 3, 0
  050dbc0  not 7, 7
  050dbc4  and 24, 6, 7
  050dbc8  lwz 8, 8(5)
  050dbcc  rlwinm 6, 24, 0, 0, 23
  050dbd0  srwi 10, 24, 8
  050dbd4  subc 24, 24, 6
  050dbd8  cntlzw 6, 3
  050dbdc  cntlzw 7, 24
  050dbe0  rlwinm 6, 6, 27, 31, 31
  050dbe4  rlwinm 7, 7, 27, 31, 31
  050dbe8  xori 6, 6, 1
  050dbec  xori 7, 7, 1
  050dbf0  addc 7, 10, 7
  050dbf4  addc 6, 7, 6
  050dbf8  addic 7, 8, 4
  050dbfc  slwi 6, 6, 18
  050dc00  ori 6, 6, 6180
  050dc04  stw 7, 8(5)
  050dc08  oris 6, 6, 16384
  050dc0c  stw 6, 0(8)
  050dc10  bt 2, 0x50dc38
  050dc14  slwi 6, 3, 24
  050dc18  lis 7, 256
  050dc1c  subc 6, 6, 7
  050dc20  lwz 7, 8(5)
  050dc24  or 6, 4, 6
  050dc28  addic 8, 7, 4
  050dc2c  addc 4, 3, 4
  050dc30  stw 8, 8(5)
  050dc34  stw 6, 0(7)
  050dc38  cmpwi 10, 0
  050dc3c  bt 2, 0x50dc6c
  050dc40  lis 26, -256
  050dc44  ori 3, 10, 0
  050dc48  lwz 7, 8(5)
  050dc4c  or 6, 4, 26
  050dc50  addic 3, 3, -1
  050dc54  addic 8, 7, 4
  050dc58  cmpwi 3, 0
  050dc5c  addic 4, 4, 256
  050dc60  stw 8, 8(5)
  050dc64  stw 6, 0(7)
  050dc68  bt 1, 0x50dc48
  050dc6c  cmpwi 24, 0
  050dc70  bt 2, 0x50dc94
  050dc74  slwi 3, 24, 24
  050dc78  lis 6, 256
  050dc7c  subc 3, 3, 6
  050dc80  lwz 6, 8(5)
  050dc84  or 3, 4, 3
  050dc88  addic 4, 6, 4
  050dc8c  stw 4, 8(5)
  050dc90  stw 3, 0(6)
  050dc94  lis 3, 4
  050dc98  ori 31, 3, 6152
  050dc9c  lwz 3, 8(22)
  050dca0  li 4, 0
  050dca4  lwz 5, 8(3)
  050dca8  stw 31, 0(5)
  050dcac  lwz 5, 8(3)
  050dcb0  stw 23, 4(5)
  050dcb4  lwz 5, 8(3)
  050dcb8  addic 5, 5, 8
  050dcbc  stw 5, 8(3)
  050dcc0  lwz 3, -23532(20)
  050dcc4  lwz 5, 0(25)
  050dcc8  lbz 7, 23(25)
  050dccc  clrlwi 6, 7, 30
  050dcd0  rlwinm 7, 7, 30, 30, 31
  050dcd4  bl 0x4d676c
  050dcd8  nop
  050dcdc  lwz 3, -23532(20)
  050dce0  lis 4, 16396
  050dce4  ori 4, 4, 5908
  050dce8  lwz 5, 8(3)
  050dcec  li 6, 5
  050dcf0  stw 4, 0(5)
  050dcf4  lwz 4, 8(3)
  050dcf8  li 5, 256
  050dcfc  stw 23, 4(4)
  050dd00  lwz 4, 8(3)
  050dd04  stw 23, 8(4)
  050dd08  lwz 4, 8(3)
  050dd0c  stw 23, 12(4)
  050dd10  lwz 4, 8(3)
  050dd14  stw 31, 16(4)
  050dd18  lwz 4, 8(3)
  050dd1c  stw 6, 20(4)
  050dd20  lwz 4, 8(3)
  050dd24  addic 4, 4, 24
  050dd28  stw 4, 8(3)
  050dd2c  lwz 4, 8(25)
  050dd30  lwz 6, 12(25)
  050dd34  clrlwi 3, 4, 24
  050dd38  subc 3, 5, 3
  050dd3c  subc 5, 6, 3
  050dd40  srawi 7, 5, 31
  050dd44  and 5, 5, 7
  050dd48  addc 3, 3, 5
  050dd4c  lwz 5, -23532(20)
  050dd50  subc 6, 6, 3
  050dd54  cmpwi 3, 0
  050dd58  srawi 7, 6, 31
  050dd5c  not 7, 7
  050dd60  lwz 8, 8(5)
  050dd64  and 10, 6, 7
  050dd68  cntlzw 6, 3
  050dd6c  rlwinm 24, 10, 0, 0, 23
  050dd70  rlwinm 6, 6, 27, 31, 31
  050dd74  subc 24, 10, 24
  050dd78  srwi 10, 10, 8
  050dd7c  cntlzw 7, 24
  050dd80  xori 6, 6, 1
  050dd84  rlwinm 7, 7, 27, 31, 31
  050dd88  xori 7, 7, 1
  050dd8c  addc 7, 10, 7
  050dd90  addc 6, 7, 6
  050dd94  addic 7, 8, 4
  050dd98  slwi 6, 6, 18
  050dd9c  ori 6, 6, 6180
  050dda0  stw 7, 8(5)
  050dda4  oris 6, 6, 16384
  050dda8  stw 6, 0(8)
  050ddac  bt 2, 0x50ddd4
  050ddb0  slwi 6, 3, 24
  050ddb4  lis 7, 256
  050ddb8  subc 6, 6, 7
  050ddbc  lwz 7, 8(5)
  050ddc0  or 6, 4, 6
  050ddc4  addc 4, 3, 4
  050ddc8  addic 3, 7, 4
  050ddcc  stw 3, 8(5)
  050ddd0  stw 6, 0(7)
  050ddd4  cmpwi 10, 0
  050ddd8  bt 2, 0x50de08
  050dddc  lis 26, -256
  050dde0  ori 3, 10, 0
  050dde4  lwz 7, 8(5)
  050dde8  or 6, 4, 26
  050ddec  addic 8, 7, 4
  050ddf0  addic 3, 3, -1
  050ddf4  addic 4, 4, 256
  050ddf8  cmpwi 3, 0
  050ddfc  stw 8, 8(5)
  050de00  stw 6, 0(7)
  050de04  bt 1, 0x50dde4
  050de08  cmpwi 24, 0
  050de0c  bt 2, 0x50de30
  050de10  slwi 3, 24, 24
  050de14  lis 6, 256
  050de18  subc 3, 3, 6
  050de1c  or 3, 4, 3
  050de20  lwz 4, 8(5)
  050de24  addic 6, 4, 4
  050de28  stw 6, 8(5)
  050de2c  stw 3, 0(4)
  050de30  lwz 4, -23532(20)
  050de34  lis 3, 4
  050de38  ori 3, 3, 6152
  050de3c  lwz 5, 8(4)
  050de40  stw 3, 0(5)
  050de44  lwz 3, 8(4)
  050de48  stw 23, 4(3)
  050de4c  lwz 3, 8(4)
  050de50  addic 3, 3, 8
  050de54  stw 3, 8(4)
  050de58  b 0x50e1dc
  050de5c  lwz 3, 8(22)
  050de60  lwz 5, 0(25)
  050de64  li 4, 0
  050de68  lbz 7, 23(25)
  050de6c  clrlwi 6, 7, 30
  050de70  rlwinm 7, 7, 30, 30, 31
  050de74  bl 0x4d676c
  050de78  nop
  050de7c  lwz 3, 8(22)
  050de80  lwz 5, 4(25)
  050de84  li 4, 1
  050de88  lbz 7, 23(25)
  050de8c  rlwinm 6, 7, 28, 30, 31
  050de90  rlwinm 7, 7, 26, 30, 31
  050de94  bl 0x4d676c
  050de98  nop
  050de9c  lwz 3, 8(22)
  050dea0  lis 4, 16396
  050dea4  lis 6, 4
  050dea8  ori 4, 4, 5908
  050deac  lwz 5, 8(3)
  050deb0  stw 4, 0(5)
  050deb4  lwz 4, 8(3)
  050deb8  ori 5, 6, 6152
  050debc  li 6, 5
  050dec0  stw 23, 4(4)
  050dec4  lwz 4, 8(3)
  050dec8  stw 23, 8(4)
  050decc  lwz 4, 8(3)
  050ded0  stw 23, 12(4)
  050ded4  lwz 4, 8(3)
  050ded8  stw 5, 16(4)
  050dedc  lwz 4, 8(3)
  050dee0  li 5, 256
  050dee4  stw 6, 20(4)
  050dee8  lwz 4, 8(3)
  050deec  addic 4, 4, 24
  050def0  stw 4, 8(3)
  050def4  lwz 4, 8(25)
  050def8  lwz 6, 12(25)
  050defc  clrlwi 3, 4, 24
  050df00  subc 3, 5, 3
  050df04  subc 5, 6, 3
  050df08  srawi 7, 5, 31
  050df0c  and 5, 5, 7
  050df10  addc 3, 3, 5
  050df14  lwz 5, 8(22)
  050df18  subc 6, 6, 3
  050df1c  cmpwi 3, 0
  050df20  srawi 7, 6, 31
  050df24  not 7, 7
  050df28  lwz 8, 8(5)
  050df2c  and 10, 6, 7
  050df30  cntlzw 6, 3
  050df34  rlwinm 24, 10, 0, 0, 23
  050df38  rlwinm 6, 6, 27, 31, 31
  050df3c  subc 24, 10, 24
  050df40  srwi 10, 10, 8
  050df44  cntlzw 7, 24
  050df48  xori 6, 6, 1
  050df4c  rlwinm 7, 7, 27, 31, 31
  050df50  xori 7, 7, 1
  050df54  addc 7, 10, 7
  050df58  addc 6, 7, 6
  050df5c  addic 7, 8, 4
  050df60  slwi 6, 6, 18
  050df64  ori 6, 6, 6180
  050df68  stw 7, 8(5)
  050df6c  oris 6, 6, 16384
  050df70  stw 6, 0(8)
  050df74  bt 2, 0x50df9c
  050df78  slwi 6, 3, 24
  050df7c  lis 7, 256
  050df80  subc 6, 6, 7
  050df84  lwz 7, 8(5)
  050df88  or 6, 4, 6
  050df8c  addc 4, 3, 4
  050df90  addic 3, 7, 4
  050df94  stw 3, 8(5)
  050df98  stw 6, 0(7)
  050df9c  cmpwi 10, 0
  050dfa0  bt 2, 0x50dfd0
  050dfa4  lis 26, -256
  050dfa8  ori 3, 10, 0
  050dfac  lwz 7, 8(5)
  050dfb0  or 6, 4, 26
  050dfb4  addic 8, 7, 4
  050dfb8  addic 3, 3, -1
  050dfbc  addic 4, 4, 256
  050dfc0  cmpwi 3, 0
  050dfc4  stw 8, 8(5)
  050dfc8  stw 6, 0(7)
  050dfcc  bt 1, 0x50dfac
  050dfd0  cmpwi 24, 0
  050dfd4  bt 2, 0x50dff8
  050dfd8  slwi 3, 24, 24
  050dfdc  lis 6, 256
  050dfe0  subc 3, 3, 6
  050dfe4  or 3, 4, 3
  050dfe8  lwz 4, 8(5)
  050dfec  addic 6, 4, 4
  050dff0  stw 6, 8(5)
  050dff4  stw 3, 0(4)
  050dff8  lis 3, 4
  050dffc  ori 31, 3, 6152
  050e000  lwz 3, 8(22)
  050e004  li 4, 0
  050e008  lwz 5, 8(3)
  050e00c  stw 31, 0(5)
  050e010  lwz 5, 8(3)
  050e014  stw 23, 4(5)
  050e018  lwz 5, 8(3)
  050e01c  addic 5, 5, 8
  050e020  stw 5, 8(3)
  050e024  lwz 3, -23532(20)
  050e028  lwz 5, 0(25)
  050e02c  lbz 7, 23(25)
  050e030  clrlwi 6, 7, 30
  050e034  rlwinm 7, 7, 30, 30, 31
  050e038  bl 0x4d676c
  050e03c  nop
  050e040  lwz 3, -23532(20)
  050e044  li 4, 1
  050e048  lwz 5, 4(25)
  050e04c  lbz 7, 23(25)
  050e050  rlwinm 6, 7, 28, 30, 31
  050e054  rlwinm 7, 7, 26, 30, 31
  050e058  bl 0x4d676c
  050e05c  nop
  050e060  lwz 3, -23532(20)
  050e064  lis 4, 16396
  050e068  ori 4, 4, 5908
  050e06c  li 6, 256
  050e070  lwz 5, 8(3)
  050e074  stw 4, 0(5)
  050e078  lwz 4, 8(3)
  050e07c  li 5, 5
  050e080  stw 23, 4(4)
  050e084  lwz 4, 8(3)
  050e088  stw 23, 8(4)
  050e08c  lwz 4, 8(3)
  050e090  stw 23, 12(4)
  050e094  lwz 4, 8(3)
  050e098  stw 31, 16(4)
  050e09c  lwz 4, 8(3)
  050e0a0  stw 5, 20(4)
  050e0a4  lwz 4, 8(3)
  050e0a8  addic 4, 4, 24
  050e0ac  stw 4, 8(3)
  050e0b0  lwz 4, 8(25)
  050e0b4  lwz 5, 12(25)
  050e0b8  clrlwi 3, 4, 24
  050e0bc  subc 3, 6, 3
  050e0c0  subc 6, 5, 3
  050e0c4  srawi 7, 6, 31
  050e0c8  and 6, 6, 7
  050e0cc  addc 3, 3, 6
  050e0d0  subc 6, 5, 3
  050e0d4  lwz 5, -23532(20)
  050e0d8  srawi 7, 6, 31
  050e0dc  cmpwi 3, 0
  050e0e0  not 7, 7
  050e0e4  and 24, 6, 7
  050e0e8  lwz 8, 8(5)
  050e0ec  rlwinm 6, 24, 0, 0, 23
  050e0f0  srwi 10, 24, 8
  050e0f4  subc 24, 24, 6
  050e0f8  cntlzw 6, 3
  050e0fc  cntlzw 7, 24
  050e100  rlwinm 6, 6, 27, 31, 31
  050e104  rlwinm 7, 7, 27, 31, 31
  050e108  xori 6, 6, 1
  050e10c  xori 7, 7, 1
  050e110  addc 7, 10, 7
  050e114  addc 6, 7, 6
  050e118  addic 7, 8, 4
  050e11c  slwi 6, 6, 18
  050e120  ori 6, 6, 6180
  050e124  stw 7, 8(5)
  050e128  oris 6, 6, 16384
  050e12c  stw 6, 0(8)
  050e130  bt 2, 0x50e158
  050e134  slwi 6, 3, 24
  050e138  lis 7, 256
  050e13c  subc 6, 6, 7
  050e140  lwz 7, 8(5)
  050e144  or 6, 4, 6
  050e148  addic 8, 7, 4
  050e14c  addc 4, 3, 4
  050e150  stw 8, 8(5)
  050e154  stw 6, 0(7)
  050e158  cmpwi 10, 0
  050e15c  bt 2, 0x50e18c
  050e160  lis 26, -256
  050e164  ori 3, 10, 0
  050e168  lwz 7, 8(5)
  050e16c  or 6, 4, 26
  050e170  addic 3, 3, -1
  050e174  addic 8, 7, 4
  050e178  cmpwi 3, 0
  050e17c  addic 4, 4, 256
  050e180  stw 8, 8(5)
  050e184  stw 6, 0(7)
  050e188  bt 1, 0x50e168
  050e18c  cmpwi 24, 0
  050e190  bt 2, 0x50e1b4
  050e194  slwi 3, 24, 24
  050e198  lis 6, 256
  050e19c  subc 3, 3, 6
  050e1a0  lwz 6, 8(5)
  050e1a4  or 3, 4, 3
  050e1a8  addic 4, 6, 4
  050e1ac  stw 4, 8(5)
  050e1b0  stw 3, 0(6)
  050e1b4  lwz 4, -23532(20)
  050e1b8  lis 3, 4
  050e1bc  ori 3, 3, 6152
  050e1c0  lwz 5, 8(4)
  050e1c4  stw 3, 0(5)
  050e1c8  lwz 3, 8(4)
  050e1cc  stw 23, 4(3)
  050e1d0  lwz 3, 8(4)
  050e1d4  addic 3, 3, 8
  050e1d8  stw 3, 8(4)
  050e1dc  addic 21, 21, 1
  050e1e0  lhz 3, 40(16)
  050e1e4  addic 25, 25, 24
  050e1e8  cmplw 21, 3
  050e1ec  bt 0, 0x50d980
  050e1f0  lwz 3, 240(1)
  050e1f4  ld 4, 232(1)
  050e1f8  ld 5, 224(1)
  050e1fc  addic 3, 3, 1
  050e200  addic 4, 4, 80
  050e204  ld 6, 200(1)
  050e208  addic 5, 5, 4
  050e20c  cmplw 3, 6
  050e210  stw 3, 240(1)
  050e214  std 4, 232(1)
  050e218  std 5, 224(1)
  050e21c  bt 0, 0x50d570
  050e220  lwz 4, 8(22)
  050e224  lis 3, 4
  050e228  ld 5, 176(1)
  050e22c  lis 7, 4
  050e230  ori 3, 3, 5952
  050e234  ori 7, 7, 5956
  050e238  lwz 6, 8(4)
  050e23c  lis 8, 4
  050e240  ori 8, 8, 5964
  050e244  stw 3, 0(6)
  050e248  lwz 6, 8(4)
  050e24c  stw 5, 4(6)
  050e250  lwz 6, 8(4)
  050e254  addic 6, 6, 8
  050e258  stw 6, 8(4)
  050e25c  lwz 4, 8(22)
  050e260  lwz 6, 8(4)
  050e264  stw 7, 0(6)
  050e268  lwz 6, 8(4)
  050e26c  stw 5, 4(6)
  050e270  lwz 6, 8(4)
  050e274  addic 6, 6, 8
  050e278  stw 6, 8(4)
  050e27c  lwz 4, 8(22)
  050e280  lwz 6, 8(4)
  050e284  stw 8, 0(6)
  050e288  lwz 6, 8(4)
  050e28c  stw 5, 4(6)
  050e290  lwz 6, 8(4)
  050e294  addic 6, 6, 8
  050e298  stw 6, 8(4)
  050e29c  lwz 4, -23532(20)
  050e2a0  lwz 6, 8(4)
  050e2a4  stw 3, 0(6)
  050e2a8  lwz 3, 8(4)
  050e2ac  lis 6, 8
  050e2b0  ori 6, 6, 788
  050e2b4  stw 5, 4(3)
  050e2b8  lwz 3, 8(4)
  050e2bc  addic 3, 3, 8
  050e2c0  stw 3, 8(4)
  050e2c4  lwz 3, -23532(20)
  050e2c8  lwz 4, 8(3)
  050e2cc  stw 7, 0(4)
  050e2d0  lwz 4, 8(3)
  050e2d4  stw 5, 4(4)
  050e2d8  lwz 4, 8(3)
  050e2dc  lis 5, 770
  050e2e0  addic 4, 4, 8
  050e2e4  stw 4, 8(3)
  050e2e8  lwz 3, 8(22)
  050e2ec  ori 4, 5, 770
  050e2f0  lis 5, 771
  050e2f4  ori 5, 5, 771
  050e2f8  lwz 7, 8(3)
  050e2fc  stw 6, 0(7)
  050e300  lwz 6, 8(3)
  050e304  stw 4, 4(6)
  050e308  lwz 4, 8(3)
  050e30c  stw 5, 8(4)
  050e310  lwz 4, 8(3)
  050e314  addic 4, 4, 12
  050e318  stw 4, 8(3)
  050e31c  lwz 3, 8(22)
  050e320  bl 0x50ec5c
  050e324  nop
  050e328  lwz 3, -23532(20)
  050e32c  bl 0x50ec5c
  050e330  nop
  050e334  ld 0, 416(1)
  050e338  mtlr 0
  050e33c  ld 14, 256(1)
  050e340  ld 15, 264(1)
  050e344  ld 16, 272(1)
  050e348  ld 17, 280(1)
  050e34c  ld 18, 288(1)
  050e350  ld 19, 296(1)
  050e354  ld 20, 304(1)
  050e358  ld 21, 312(1)
  050e35c  ld 22, 320(1)
  050e360  ld 23, 328(1)
  050e364  ld 24, 336(1)
  050e368  ld 25, 344(1)
  050e36c  ld 26, 352(1)
  050e370  ld 27, 360(1)
  050e374  ld 28, 368(1)
  050e378  ld 29, 376(1)
  050e37c  ld 30, 384(1)
  050e380  ld 31, 392(1)
  050e384  addi 1, 1, 400
  050e388  blr

FUN_0050e390:   # 0x50e390, 0x3c bytes
  050e390  li 4, 73
  050e394  li 6, 68
  050e398  li 8, 77
  050e39c  li 9, 1
  050e3a0  li 5, 16
  050e3a4  stb 4, 0(3)
  050e3a8  stb 6, 1(3)
  050e3ac  li 7, 0
  050e3b0  stb 8, 2(3)
  050e3b4  stb 9, 3(3)
  050e3b8  stw 5, 8(3)
  050e3bc  sth 9, 4(3)
  050e3c0  sth 7, 6(3)
  050e3c4  sth 7, 14(3)
  050e3c8  blr

FUN_0050e3cc:   # 0x50e3cc, 0x3c bytes
  050e3cc  li 4, 73
  050e3d0  li 6, 68
  050e3d4  li 8, 77
  050e3d8  li 9, 1
  050e3dc  li 5, 16
  050e3e0  stb 4, 0(3)
  050e3e4  stb 6, 1(3)
  050e3e8  li 7, 0
  050e3ec  stb 8, 2(3)
  050e3f0  stb 9, 3(3)
  050e3f4  stw 5, 8(3)
  050e3f8  sth 9, 4(3)
  050e3fc  sth 7, 6(3)
  050e400  sth 7, 14(3)
  050e404  blr

FUN_0050e408:   # 0x50e408, 0x3c bytes
  050e408  li 4, 73
  050e40c  li 6, 68
  050e410  li 8, 77
  050e414  li 9, 1
  050e418  li 5, 16
  050e41c  stb 4, 0(3)
  050e420  stb 6, 1(3)
  050e424  li 7, 0
  050e428  stb 8, 2(3)
  050e42c  stb 9, 3(3)
  050e430  stw 5, 8(3)
  050e434  sth 9, 4(3)
  050e438  sth 7, 6(3)
  050e43c  sth 7, 14(3)
  050e440  blr

FUN_0050e444:   # 0x50e444, 0x40 bytes
  050e444  li 8, 73
  050e448  sth 4, 4(3)
  050e44c  li 10, 68
  050e450  stw 5, 8(3)
  050e454  li 11, 77
  050e458  stb 6, 12(3)
  050e45c  li 12, 1
  050e460  stb 7, 13(3)
  050e464  li 9, 0
  050e468  stb 8, 0(3)
  050e46c  stb 10, 1(3)
  050e470  stb 11, 2(3)
  050e474  stb 12, 3(3)
  050e478  sth 9, 6(3)
  050e47c  sth 9, 14(3)
  050e480  blr

FUN_0050e484:   # 0x50e484, 0x40 bytes
  050e484  li 8, 73
  050e488  sth 4, 4(3)
  050e48c  li 10, 68
  050e490  stw 5, 8(3)
  050e494  li 11, 77
  050e498  stb 6, 12(3)
  050e49c  li 12, 1
  050e4a0  stb 7, 13(3)
  050e4a4  li 9, 0
  050e4a8  stb 8, 0(3)
  050e4ac  stb 10, 1(3)
  050e4b0  stb 11, 2(3)
  050e4b4  stb 12, 3(3)
  050e4b8  sth 9, 6(3)
  050e4bc  sth 9, 14(3)
  050e4c0  blr

FUN_0050e4c4:   # 0x50e4c4, 0x18 bytes
  050e4c4  lhz 4, 6(3)
  050e4c8  extsh 4, 4
  050e4cc  addc 3, 3, 4
  050e4d0  addic 3, 3, 16
  050e4d4  clrldi 3, 3, 32
  050e4d8  blr

FUN_0050e4dc:   # 0x50e4dc, 0x1c bytes
  050e4dc  lhz 4, 6(3)
  050e4e0  lwz 3, 8(3)
  050e4e4  extsh 4, 4
  050e4e8  subc 3, 3, 4
  050e4ec  addic 3, 3, -16
  050e4f0  extsw 3, 3
  050e4f4  blr

FUN_0050e4f8:   # 0x50e4f8, 0x34 bytes
  050e4f8  lbz 5, 0(3)
  050e4fc  li 4, 0
  050e500  cmpwi 5, 73
  050e504  bf 2, 0x50e524
  050e508  lbz 5, 1(3)
  050e50c  cmpwi 5, 68
  050e510  bf 2, 0x50e524
  050e514  lbz 3, 2(3)
  050e518  cmpwi 3, 77
  050e51c  bf 2, 0x50e524
  050e520  li 4, 1
  050e524  ori 3, 4, 0
  050e528  blr

FUN_0050e52c:   # 0x50e52c, 0xc bytes
  050e52c  lhz 3, 4(3)
  050e530  extsh 3, 3
  050e534  blr

FUN_0050e538:   # 0x50e538, 0x30 bytes
  050e538  lhz 3, 4(3)
  050e53c  li 5, 1
  050e540  li 6, 0
  050e544  extsh 3, 3
  050e548  subc 5, 5, 6
  050e54c  subc 7, 4, 3
  050e550  cntlzw 3, 7
  050e554  sldi 3, 3, 58
  050e558  sradi 3, 3, 63
  050e55c  and 3, 3, 5
  050e560  addc 3, 6, 3
  050e564  blr

FUN_0050e568:   # 0x50e568, 0xc bytes
  050e568  lwz 3, 8(3)
  050e56c  extsw 3, 3
  050e570  blr

FUN_0050e574:   # 0x50e574, 0xc bytes
  050e574  li 4, 0
  050e578  stw 4, 0(3)
  050e57c  blr

FUN_0050e580:   # 0x50e580, 0xc bytes
  050e580  li 4, 0
  050e584  stw 4, 0(3)
  050e588  blr

FUN_0050e58c:   # 0x50e58c, 0x8 bytes
  050e58c  lwz 3, 0(3)
  050e590  blr

FUN_0050e594:   # 0x50e594, 0x60 bytes
  050e594  stdu 1, -128(1)
  050e598  mflr 0
  050e59c  std 0, 144(1)
  050e5a0  std 31, 120(1)
  050e5a4  std 30, 112(1)
  050e5a8  ori 31, 4, 0
  050e5ac  ori 30, 3, 0
  050e5b0  ori 3, 31, 0
  050e5b4  li 4, 0
  050e5b8  bl 0x50e538
  050e5bc  nop
  050e5c0  cmpwi 3, 0
  050e5c4  bt 2, 0x50e5d4
  050e5c8  li 3, 0
  050e5cc  stw 3, 0(30)
  050e5d0  b 0x50e5dc
  050e5d4  ori 3, 31, 0
  050e5d8  stw 31, 0(30)
  050e5dc  ld 0, 144(1)
  050e5e0  mtlr 0
  050e5e4  ld 30, 112(1)
  050e5e8  ld 31, 120(1)
  050e5ec  addi 1, 1, 128
  050e5f0  blr

FUN_0050e5f4:   # 0x50e5f4, 0x70 bytes
  050e5f4  stdu 1, -128(1)
  050e5f8  mflr 0
  050e5fc  std 0, 144(1)
  050e600  std 31, 120(1)
  050e604  std 30, 112(1)
  050e608  ori 31, 3, 0
  050e60c  lwz 30, 0(31)
  050e610  ori 3, 30, 0
  050e614  bl 0x50e568
  050e618  nop
  050e61c  addc 5, 30, 3
  050e620  li 4, 0
  050e624  clrldi 3, 5, 32
  050e628  stw 5, 0(31)
  050e62c  bl 0x50e538
  050e630  nop
  050e634  ori 4, 3, 0
  050e638  cmpwi 4, 0
  050e63c  lwz 3, 0(31)
  050e640  bt 2, 0x50e64c
  050e644  li 3, 0
  050e648  stw 3, 0(31)
  050e64c  ld 0, 144(1)
  050e650  mtlr 0
  050e654  ld 30, 112(1)
  050e658  ld 31, 120(1)
  050e65c  addi 1, 1, 128
  050e660  blr

FUN_0050e664:   # 0x50e664, 0x74 bytes
  050e664  stdu 1, -128(1)
  050e668  mflr 0
  050e66c  std 0, 144(1)
  050e670  std 31, 120(1)
  050e674  std 30, 112(1)
  050e678  ori 31, 3, 0
  050e67c  li 30, 0
  050e680  lwz 3, 4(31)
  050e684  lwz 4, 0(31)
  050e688  cmpw 3, 4
  050e68c  bt 2, 0x50e6bc
  050e690  ori 30, 3, 0
  050e694  bl 0x50e568
  050e698  nop
  050e69c  addc 3, 30, 3
  050e6a0  lwz 4, 0(31)
  050e6a4  clrldi 3, 3, 32
  050e6a8  cmpw 3, 4
  050e6ac  bf 2, 0x50e690
  050e6b0  cmpwi 30, 0
  050e6b4  bt 2, 0x50e6bc
  050e6b8  stw 30, 0(31)
  050e6bc  ori 3, 30, 0
  050e6c0  ld 0, 144(1)
  050e6c4  mtlr 0
  050e6c8  ld 30, 112(1)
  050e6cc  ld 31, 120(1)
  050e6d0  addi 1, 1, 128
  050e6d4  blr

FUN_0050e6d8:   # 0x50e6d8, 0xbc bytes
  050e6d8  stdu 1, -128(1)
  050e6dc  mflr 0
  050e6e0  std 0, 144(1)
  050e6e4  std 31, 120(1)
  050e6e8  std 30, 112(1)
  050e6ec  ori 31, 4, 0
  050e6f0  ori 30, 3, 0
  050e6f4  ori 3, 31, 0
  050e6f8  li 4, 0
  050e6fc  bl 0x50e538
  050e700  nop
  050e704  cmpwi 3, 0
  050e708  bt 2, 0x50e718
  050e70c  li 3, 0
  050e710  stw 3, 0(30)
  050e714  b 0x50e77c
  050e718  cmpwi 31, 0
  050e71c  stw 31, 4(30)
  050e720  bt 2, 0x50e778
  050e724  ori 3, 31, 0
  050e728  stw 31, 0(30)
  050e72c  bl 0x50e568
  050e730  nop
  050e734  addc 3, 31, 3
  050e738  li 4, 0
  050e73c  clrldi 31, 3, 32
  050e740  ori 3, 31, 0
  050e744  bl 0x50e538
  050e748  nop
  050e74c  li 4, 0
  050e750  li 5, 0
  050e754  subc 3, 4, 3
  050e758  subc 4, 31, 5
  050e75c  cntlzw 3, 3
  050e760  sldi 3, 3, 58
  050e764  sradi 3, 3, 63
  050e768  and 31, 3, 4
  050e76c  addc 31, 5, 31
  050e770  cmpwi 31, 0
  050e774  bf 2, 0x50e724
  050e778  lwz 3, 0(30)
  050e77c  ld 0, 144(1)
  050e780  mtlr 0
  050e784  ld 30, 112(1)
  050e788  ld 31, 120(1)
  050e78c  addi 1, 1, 128
  050e790  blr

FUN_0050e794:   # 0x50e794, 0x10 bytes
  050e794  lwz 11, -31268(2)
  050e798  lwz 9, 0(11)
  050e79c  lwz 3, 8(9)
  050e7a0  blr

FUN_0050e7a4:   # 0x50e7a4, 0xc bytes
  050e7a4  lwz 9, -31264(2)
  050e7a8  stw 3, 12(9)
  050e7ac  blr

FUN_0050e7b0:   # 0x50e7b0, 0x28 bytes
  050e7b0  rlwinm 4, 4, 0, 0, 29
  050e7b4  lwz 9, -31264(2)
  050e7b8  lwz 11, -31268(2)
  050e7bc  add 4, 4, 3
  050e7c0  addi 4, 4, -4
  050e7c4  stw 3, 0(9)
  050e7c8  stw 9, 0(11)
  050e7cc  stw 4, 4(9)
  050e7d0  stw 3, 8(9)
  050e7d4  blr

FUN_0050e7d8:   # 0x50e7d8, 0x20 bytes
  050e7d8  rlwinm 5, 5, 0, 0, 29
  050e7dc  stw 6, 12(3)
  050e7e0  add 5, 5, 4
  050e7e4  stw 4, 0(3)
  050e7e8  addi 5, 5, -4
  050e7ec  stw 4, 8(3)
  050e7f0  stw 5, 4(3)
  050e7f4  blr
