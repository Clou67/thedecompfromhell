# sdk/libfios/fios_platform_ps3ppu.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

_ZN4cell4fios8platform11currentDateEv:   # 0x52c8c4, 0x44 bytes
  052c8c4  std 29, -24(1)
  052c8c8  mflr 0
  052c8cc  addi 3, 1, -48
  052c8d0  std 0, 16(1)
  052c8d4  addi 4, 1, -40
  052c8d8  li 11, 145
  052c8dc  sc
  052c8e0  lis 29, 15258
  052c8e4  ld 3, -48(1)
  052c8e8  ld 0, -40(1)
  052c8ec  ori 29, 29, 51712
  052c8f0  mulld 3, 3, 29
  052c8f4  add 3, 3, 0
  052c8f8  ld 0, 16(1)
  052c8fc  ld 29, -24(1)
  052c900  mtlr 0
  052c904  blr

FUN_0052c908:   # 0x52c908, 0x14 bytes
  052c908  ld 3, 56(3)
  052c90c  rldicl 0, 3, 32, 32
  052c910  xor 3, 3, 0
  052c914  clrldi 3, 3, 32
  052c918  blr

FUN_0052c91c:   # 0x52c91c, 0x20 bytes
  052c91c  xor 4, 3, 4
  052c920  srawi 0, 4, 31
  052c924  xor 3, 0, 4
  052c928  sub 3, 3, 0
  052c92c  addi 3, 3, -1
  052c930  srwi 3, 3, 31
  052c934  extsw 3, 3
  052c938  blr

_ZN4cell4fios8platform16nativeDateToDateEPKSt2tmPy:   # 0x52c93c, 0x100 bytes
  052c93c  stdu 1, -176(1)
  052c940  mflr 0
  052c944  std 31, 168(1)
  052c948  mr 31, 3
  052c94c  std 0, 192(1)
  052c950  std 30, 160(1)
  052c954  addi 3, 1, 112
  052c958  mr 30, 4
  052c95c  lwz 0, 0(31)
  052c960  lwz 9, 4(31)
  052c964  lwz 11, 8(31)
  052c968  lwz 10, 12(31)
  052c96c  lwz 8, 16(31)
  052c970  lwz 7, 20(31)
  052c974  lwz 6, 24(31)
  052c978  lwz 5, 28(31)
  052c97c  lwz 4, 32(31)
  052c980  stw 0, 112(1)
  052c984  stw 9, 116(1)
  052c988  stw 11, 120(1)
  052c98c  stw 10, 124(1)
  052c990  stw 8, 128(1)
  052c994  stw 7, 132(1)
  052c998  stw 6, 136(1)
  052c99c  stw 5, 140(1)
  052c9a0  stw 4, 144(1)
  052c9a4  bl 0x5c7368
  052c9a8  nop
  052c9ac  lwz 9, -29960(2)
  052c9b0  mr 11, 3
  052c9b4  lis 3, 15258
  052c9b8  cmpdi 7, 11, -1
  052c9bc  ori 3, 3, 51712
  052c9c0  li 8, 0
  052c9c4  lwz 0, 0(9)
  052c9c8  li 10, 1
  052c9cc  bt 30, 0x52ca00
  052c9d0  extsw 0, 0
  052c9d4  ld 31, 168(1)
  052c9d8  li 8, 1
  052c9dc  add 0, 11, 0
  052c9e0  mulld 0, 0, 3
  052c9e4  std 0, 0(30)
  052c9e8  ld 0, 192(1)
  052c9ec  extsw 3, 8
  052c9f0  ld 30, 160(1)
  052c9f4  addi 1, 1, 176
  052c9f8  mtlr 0
  052c9fc  blr
  052ca00  lwz 0, 20(31)
  052ca04  cmpwi 7, 0, 99
  052ca08  bt 29, 0x52ca2c
  052ca0c  std 10, 0(30)
  052ca10  ld 0, 192(1)
  052ca14  extsw 3, 8
  052ca18  ld 30, 160(1)
  052ca1c  ld 31, 168(1)
  052ca20  mtlr 0
  052ca24  addi 1, 1, 176
  052ca28  blr
  052ca2c  li 10, -1
  052ca30  clrldi 10, 10, 1
  052ca34  std 10, 0(30)
  052ca38  b 0x52ca10

_Z41__static_initialization_and_destruction_0ii:   # 0x52ca3c, 0x114 bytes
  052ca3c  stdu 1, -176(1)
  052ca40  mflr 0
  052ca44  cmpwi 7, 3, 1
  052ca48  std 0, 192(1)
  052ca4c  li 0, 0
  052ca50  std 28, 144(1)
  052ca54  std 29, 152(1)
  052ca58  std 31, 168(1)
  052ca5c  ori 0, 0, 65535
  052ca60  bt 30, 0x52ca80
  052ca64  ld 0, 192(1)
  052ca68  ld 28, 144(1)
  052ca6c  ld 29, 152(1)
  052ca70  mtlr 0
  052ca74  ld 31, 168(1)
  052ca78  addi 1, 1, 176
  052ca7c  blr
  052ca80  cmpw 7, 4, 0
  052ca84  li 11, 147
  052ca88  bf 30, 0x52ca64
  052ca8c  sc
  052ca90  cmpdi 3, 0
  052ca94  lwz 31, -29960(2)
  052ca98  clrldi 9, 3, 63
  052ca9c  rldicl 0, 3, 63, 1
  052caa0  mr 11, 31
  052caa4  or 9, 9, 0
  052caa8  bt 0, 0x52cb3c
  052caac  std 3, 128(1)
  052cab0  lfd 0, 128(1)
  052cab4  fcfid 13, 0
  052cab8  lfs 0, -29956(2)
  052cabc  addi 29, 1, 112
  052cac0  li 3, 0
  052cac4  fdiv 0, 13, 0
  052cac8  clrldi 29, 29, 32
  052cacc  stfd 0, 8(11)
  052cad0  bl 0x5cede8
  052cad4  nop
  052cad8  std 3, 112(1)
  052cadc  mr 3, 29
  052cae0  bl 0x5c5900
  052cae4  nop
  052cae8  clrldi 3, 3, 32
  052caec  bl 0x5c7368
  052caf0  nop
  052caf4  mr 28, 3
  052caf8  mr 3, 29
  052cafc  bl 0x5c58b0
  052cb00  nop
  052cb04  clrldi 3, 3, 32
  052cb08  bl 0x5c7368
  052cb0c  nop
  052cb10  li 0, 0
  052cb14  ld 29, 152(1)
  052cb18  sub 28, 28, 3
  052cb1c  stw 0, 16(31)
  052cb20  ld 0, 192(1)
  052cb24  stw 28, 0(31)
  052cb28  mtlr 0
  052cb2c  ld 28, 144(1)
  052cb30  ld 31, 168(1)
  052cb34  addi 1, 1, 176
  052cb38  blr
  052cb3c  std 9, 128(1)
  052cb40  lfd 0, 128(1)
  052cb44  fcfid 13, 0
  052cb48  fadd 13, 13, 13
  052cb4c  b 0x52cab8

FUN_0052cb50:   # 0x52cb50, 0x10 bytes
  052cb50  li 4, -1
  052cb54  li 3, 1
  052cb58  clrldi 4, 4, 48
  052cb5c  b 0x52ca3c

_ZN4cell4fios8platform11FIOSvprintfEPKcPc:   # 0x52cb60, 0x78 bytes
  052cb60  lwz 9, -29952(2)
  052cb64  mflr 0
  052cb68  stdu 1, -112(1)
  052cb6c  std 0, 128(1)
  052cb70  clrldi 4, 4, 32
  052cb74  mr 11, 3
  052cb78  lwz 0, 20(9)
  052cb7c  clrldi 3, 3, 32
  052cb80  mr 5, 4
  052cb84  cmpwi 7, 0, 0
  052cb88  clrldi 9, 0, 32
  052cb8c  bt 30, 0x52cbb8
  052cb90  lwz 0, 0(9)
  052cb94  std 2, 40(1)
  052cb98  mtctr 0
  052cb9c  lwz 2, 4(9)
  052cba0  bctrl
  052cba4  ld 2, 40(1)
  052cba8  ld 0, 128(1)
  052cbac  addi 1, 1, 112
  052cbb0  mtlr 0
  052cbb4  blr
  052cbb8  lwz 3, -29948(2)
  052cbbc  clrldi 4, 11, 32
  052cbc0  bl 0x5cd360
  052cbc4  nop
  052cbc8  ld 0, 128(1)
  052cbcc  addi 1, 1, 112
  052cbd0  mtlr 0
  052cbd4  blr

_ZN4cell4fios8platform10FIOSprintfEPKcz:   # 0x52cbd8, 0x48 bytes
  052cbd8  stdu 1, -128(1)
  052cbdc  mflr 0
  052cbe0  std 4, 184(1)
  052cbe4  std 0, 144(1)
  052cbe8  addi 0, 1, 184
  052cbec  std 5, 192(1)
  052cbf0  mr 4, 0
  052cbf4  stw 0, 112(1)
  052cbf8  std 6, 200(1)
  052cbfc  std 7, 208(1)
  052cc00  std 8, 216(1)
  052cc04  std 9, 224(1)
  052cc08  std 10, 232(1)
  052cc0c  bl 0x52cb60
  052cc10  ld 0, 144(1)
  052cc14  addi 1, 1, 128
  052cc18  mtlr 0
  052cc1c  blr

_ZN4cell4fios8platform6rwlock11writeUnlockEv:   # 0x52cc20, 0xac bytes
  052cc20  stdu 1, -144(1)
  052cc24  mflr 0
  052cc28  std 29, 120(1)
  052cc2c  std 0, 160(1)
  052cc30  lwz 0, 12(3)
  052cc34  mr 29, 3
  052cc38  std 31, 136(1)
  052cc3c  cmpwi 7, 0, 0
  052cc40  li 11, 127
  052cc44  clrldi 3, 0, 32
  052cc48  bt- 30, 0x52cc78
  052cc4c  sc
  052cc50  cmpwi 7, 3, 0
  052cc54  extsw 31, 3
  052cc58  mr 3, 31
  052cc5c  bf- 30, 0x52cc98
  052cc60  ld 0, 160(1)
  052cc64  ld 29, 120(1)
  052cc68  ld 31, 136(1)
  052cc6c  mtlr 0
  052cc70  addi 1, 1, 144
  052cc74  blr
  052cc78  ld 0, 160(1)
  052cc7c  lwz 4, 8(29)
  052cc80  ld 31, 136(1)
  052cc84  mtlr 0
  052cc88  ld 29, 120(1)
  052cc8c  addi 1, 1, 144
  052cc90  lwz 3, -29940(2)
  052cc94  b 0x52cbd8
  052cc98  lwz 29, 8(29)
  052cc9c  bl 0x5c84e4
  052cca0  nop
  052cca4  ld 0, 160(1)
  052cca8  clrldi 6, 3, 32
  052ccac  lwz 3, -29944(2)
  052ccb0  clrldi 4, 29, 32
  052ccb4  ld 29, 120(1)
  052ccb8  mr 5, 31
  052ccbc  ld 31, 136(1)
  052ccc0  addi 1, 1, 144
  052ccc4  mtlr 0
  052ccc8  b 0x52cbd8

_ZN4cell4fios8platform6rwlock9writeLockEv:   # 0x52cccc, 0xb0 bytes
  052cccc  stdu 1, -144(1)
  052ccd0  mflr 0
  052ccd4  std 29, 120(1)
  052ccd8  std 0, 160(1)
  052ccdc  lwz 0, 12(3)
  052cce0  mr 29, 3
  052cce4  std 31, 136(1)
  052cce8  cmpwi 7, 0, 0
  052ccec  li 4, 0
  052ccf0  li 11, 125
  052ccf4  clrldi 3, 0, 32
  052ccf8  bt- 30, 0x52cd28
  052ccfc  sc
  052cd00  cmpwi 7, 3, 0
  052cd04  extsw 31, 3
  052cd08  mr 3, 31
  052cd0c  bf- 30, 0x52cd48
  052cd10  ld 0, 160(1)
  052cd14  ld 29, 120(1)
  052cd18  ld 31, 136(1)
  052cd1c  mtlr 0
  052cd20  addi 1, 1, 144
  052cd24  blr
  052cd28  ld 0, 160(1)
  052cd2c  lwz 4, 8(29)
  052cd30  ld 31, 136(1)
  052cd34  mtlr 0
  052cd38  ld 29, 120(1)
  052cd3c  addi 1, 1, 144
  052cd40  lwz 3, -29932(2)
  052cd44  b 0x52cbd8
  052cd48  lwz 29, 8(29)
  052cd4c  bl 0x5c84e4
  052cd50  nop
  052cd54  ld 0, 160(1)
  052cd58  clrldi 6, 3, 32
  052cd5c  lwz 3, -29936(2)
  052cd60  clrldi 4, 29, 32
  052cd64  ld 29, 120(1)
  052cd68  mr 5, 31
  052cd6c  ld 31, 136(1)
  052cd70  addi 1, 1, 144
  052cd74  mtlr 0
  052cd78  b 0x52cbd8

_ZN4cell4fios8platform6rwlock10readUnlockEv:   # 0x52cd7c, 0xac bytes
  052cd7c  stdu 1, -144(1)
  052cd80  mflr 0
  052cd84  std 29, 120(1)
  052cd88  std 0, 160(1)
  052cd8c  lwz 0, 12(3)
  052cd90  mr 29, 3
  052cd94  std 31, 136(1)
  052cd98  cmpwi 7, 0, 0
  052cd9c  li 11, 124
  052cda0  clrldi 3, 0, 32
  052cda4  bt- 30, 0x52cdd4
  052cda8  sc
  052cdac  cmpwi 7, 3, 0
  052cdb0  extsw 31, 3
  052cdb4  mr 3, 31
  052cdb8  bf- 30, 0x52cdf4
  052cdbc  ld 0, 160(1)
  052cdc0  ld 29, 120(1)
  052cdc4  ld 31, 136(1)
  052cdc8  mtlr 0
  052cdcc  addi 1, 1, 144
  052cdd0  blr
  052cdd4  ld 0, 160(1)
  052cdd8  lwz 4, 8(29)
  052cddc  ld 31, 136(1)
  052cde0  mtlr 0
  052cde4  ld 29, 120(1)
  052cde8  addi 1, 1, 144
  052cdec  lwz 3, -29924(2)
  052cdf0  b 0x52cbd8
  052cdf4  lwz 29, 8(29)
  052cdf8  bl 0x5c84e4
  052cdfc  nop
  052ce00  ld 0, 160(1)
  052ce04  clrldi 6, 3, 32
  052ce08  lwz 3, -29928(2)
  052ce0c  clrldi 4, 29, 32
  052ce10  ld 29, 120(1)
  052ce14  mr 5, 31
  052ce18  ld 31, 136(1)
  052ce1c  addi 1, 1, 144
  052ce20  mtlr 0
  052ce24  b 0x52cbd8

_ZN4cell4fios8platform6rwlock8readLockEv:   # 0x52ce28, 0xb0 bytes
  052ce28  stdu 1, -144(1)
  052ce2c  mflr 0
  052ce30  std 29, 120(1)
  052ce34  std 0, 160(1)
  052ce38  lwz 0, 12(3)
  052ce3c  mr 29, 3
  052ce40  std 31, 136(1)
  052ce44  cmpwi 7, 0, 0
  052ce48  li 4, 0
  052ce4c  li 11, 122
  052ce50  clrldi 3, 0, 32
  052ce54  bt- 30, 0x52ce84
  052ce58  sc
  052ce5c  cmpwi 7, 3, 0
  052ce60  extsw 31, 3
  052ce64  mr 3, 31
  052ce68  bf- 30, 0x52cea4
  052ce6c  ld 0, 160(1)
  052ce70  ld 29, 120(1)
  052ce74  ld 31, 136(1)
  052ce78  mtlr 0
  052ce7c  addi 1, 1, 144
  052ce80  blr
  052ce84  ld 0, 160(1)
  052ce88  lwz 4, 8(29)
  052ce8c  ld 31, 136(1)
  052ce90  mtlr 0
  052ce94  ld 29, 120(1)
  052ce98  addi 1, 1, 144
  052ce9c  lwz 3, -29916(2)
  052cea0  b 0x52cbd8
  052cea4  lwz 29, 8(29)
  052cea8  bl 0x5c84e4
  052ceac  nop
  052ceb0  ld 0, 160(1)
  052ceb4  clrldi 6, 3, 32
  052ceb8  lwz 3, -29920(2)
  052cebc  clrldi 4, 29, 32
  052cec0  ld 29, 120(1)
  052cec4  mr 5, 31
  052cec8  ld 31, 136(1)
  052cecc  addi 1, 1, 144
  052ced0  mtlr 0
  052ced4  b 0x52cbd8

_ZN4cell4fios8platform6thread4joinEv:   # 0x52ced8, 0x9c bytes
  052ced8  stdu 1, -160(1)
  052cedc  mflr 0
  052cee0  std 29, 136(1)
  052cee4  std 0, 176(1)
  052cee8  ld 0, 56(3)
  052ceec  li 29, 0
  052cef0  std 31, 152(1)
  052cef4  cmpdi 7, 0, 0
  052cef8  mr 31, 3
  052cefc  std 28, 128(1)
  052cf00  std 30, 144(1)
  052cf04  addi 4, 1, 112
  052cf08  li 11, 44
  052cf0c  mr 3, 0
  052cf10  bt- 30, 0x52cf30
  052cf14  std 29, 112(1)
  052cf18  sc
  052cf1c  cmpwi 7, 3, 0
  052cf20  extsw 30, 3
  052cf24  mr 3, 30
  052cf28  bf- 30, 0x52cf50
  052cf2c  std 29, 56(31)
  052cf30  ld 0, 176(1)
  052cf34  ld 28, 128(1)
  052cf38  ld 29, 136(1)
  052cf3c  mtlr 0
  052cf40  ld 30, 144(1)
  052cf44  ld 31, 152(1)
  052cf48  addi 1, 1, 160
  052cf4c  blr
  052cf50  bl 0x5c84e4
  052cf54  nop
  052cf58  addi 4, 31, 8
  052cf5c  clrldi 6, 3, 32
  052cf60  lwz 3, -29912(2)
  052cf64  clrldi 4, 4, 32
  052cf68  mr 5, 30
  052cf6c  bl 0x52cbd8
  052cf70  b 0x52cf30

FUN_0052cf74:   # 0x52cf74, 0xa4 bytes
  052cf74  stdu 1, -144(1)
  052cf78  mflr 0
  052cf7c  std 29, 120(1)
  052cf80  std 0, 160(1)
  052cf84  lwz 0, 12(3)
  052cf88  mr 29, 3
  052cf8c  std 30, 128(1)
  052cf90  cmpwi 7, 0, 0
  052cf94  mr 30, 3
  052cf98  std 31, 136(1)
  052cf9c  li 11, 121
  052cfa0  clrldi 3, 0, 32
  052cfa4  bt- 30, 0x52cfe4
  052cfa8  sc
  052cfac  cmpwi 7, 3, 0
  052cfb0  extsw 31, 3
  052cfb4  mr 3, 31
  052cfb8  bf- 30, 0x52cff4
  052cfbc  clrldi 3, 30, 32
  052cfc0  bl 0x5107d0
  052cfc4  nop
  052cfc8  ld 0, 160(1)
  052cfcc  ld 29, 120(1)
  052cfd0  ld 30, 128(1)
  052cfd4  mtlr 0
  052cfd8  ld 31, 136(1)
  052cfdc  addi 1, 1, 144
  052cfe0  blr
  052cfe4  lwz 3, -29904(2)
  052cfe8  lwz 4, 8(29)
  052cfec  bl 0x52cbd8
  052cff0  b 0x52cfbc
  052cff4  lwz 29, 8(29)
  052cff8  bl 0x5c84e4
  052cffc  nop
  052d000  clrldi 6, 3, 32
  052d004  lwz 3, -29908(2)
  052d008  clrldi 4, 29, 32
  052d00c  mr 5, 31
  052d010  bl 0x52cbd8
  052d014  b 0x52cfbc

FUN_0052d018:   # 0x52d018, 0x68 bytes
  052d018  stdu 1, -128(1)
  052d01c  mflr 0
  052d020  addi 4, 3, 8
  052d024  std 0, 144(1)
  052d028  ld 0, 56(3)
  052d02c  clrldi 4, 4, 32
  052d030  std 30, 112(1)
  052d034  cmpdi 7, 0, 0
  052d038  std 31, 120(1)
  052d03c  clrldi 30, 3, 32
  052d040  mr 31, 3
  052d044  bf- 30, 0x52d06c
  052d048  mr 3, 30
  052d04c  bl 0x5107d0
  052d050  nop
  052d054  ld 0, 144(1)
  052d058  ld 30, 112(1)
  052d05c  ld 31, 120(1)
  052d060  mtlr 0
  052d064  addi 1, 1, 128
  052d068  blr
  052d06c  lwz 3, -29900(2)
  052d070  bl 0x52cbd8
  052d074  li 0, 0
  052d078  std 0, 56(31)
  052d07c  b 0x52d048

FUN_0052d080:   # 0x52d080, 0x68 bytes
  052d080  stdu 1, -128(1)
  052d084  mflr 0
  052d088  addi 4, 3, 8
  052d08c  std 0, 144(1)
  052d090  ld 0, 56(3)
  052d094  clrldi 4, 4, 32
  052d098  std 30, 112(1)
  052d09c  cmpdi 7, 0, 0
  052d0a0  std 31, 120(1)
  052d0a4  clrldi 30, 3, 32
  052d0a8  mr 31, 3
  052d0ac  bf- 30, 0x52d0d4
  052d0b0  mr 3, 30
  052d0b4  bl 0x5107d0
  052d0b8  nop
  052d0bc  ld 0, 144(1)
  052d0c0  ld 30, 112(1)
  052d0c4  ld 31, 120(1)
  052d0c8  mtlr 0
  052d0cc  addi 1, 1, 128
  052d0d0  blr
  052d0d4  lwz 3, -29900(2)
  052d0d8  bl 0x52cbd8
  052d0dc  li 0, 0
  052d0e0  std 0, 56(31)
  052d0e4  b 0x52d0b0

FUN_0052d0e8:   # 0x52d0e8, 0xb4 bytes
  052d0e8  addi 9, 3, 16
  052d0ec  mflr 0
  052d0f0  stdu 1, -144(1)
  052d0f4  std 0, 160(1)
  052d0f8  std 28, 112(1)
  052d0fc  std 31, 136(1)
  052d100  lwz 0, 0(9)
  052d104  mr 31, 3
  052d108  mr 28, 3
  052d10c  cmpwi 7, 0, 0
  052d110  std 29, 120(1)
  052d114  std 30, 128(1)
  052d118  clrldi 3, 9, 32
  052d11c  bt- 30, 0x52d14c
  052d120  bl 0x650504
  052d124  ld 2, 40(1)
  052d128  cmpwi 7, 3, 0
  052d12c  extsw 30, 3
  052d130  mr 3, 30
  052d134  bf- 30, 0x52d178
  052d138  lwz 9, -29892(2)
  052d13c  lwz 0, 4(9)
  052d140  lwz 11, 0(9)
  052d144  stw 0, 20(31)
  052d148  stw 11, 16(31)
  052d14c  clrldi 3, 28, 32
  052d150  bl 0x5107d0
  052d154  nop
  052d158  ld 0, 160(1)
  052d15c  ld 28, 112(1)
  052d160  ld 29, 120(1)
  052d164  mtlr 0
  052d168  ld 30, 128(1)
  052d16c  ld 31, 136(1)
  052d170  addi 1, 1, 144
  052d174  blr
  052d178  lwz 29, 8(31)
  052d17c  bl 0x5c84e4
  052d180  nop
  052d184  clrldi 6, 3, 32
  052d188  lwz 3, -29896(2)
  052d18c  clrldi 4, 29, 32
  052d190  mr 5, 30
  052d194  bl 0x52cbd8
  052d198  b 0x52d138

FUN_0052d19c:   # 0x52d19c, 0x124 bytes
  052d19c  stdu 1, -192(1)
  052d1a0  mflr 0
  052d1a4  std 29, 168(1)
  052d1a8  clrldi 29, 3, 32
  052d1ac  std 31, 184(1)
  052d1b0  mr 31, 3
  052d1b4  mr 3, 29
  052d1b8  std 25, 136(1)
  052d1bc  std 26, 144(1)
  052d1c0  mr 25, 5
  052d1c4  mr 26, 4
  052d1c8  std 0, 208(1)
  052d1cc  std 27, 152(1)
  052d1d0  std 28, 160(1)
  052d1d4  mr 27, 6
  052d1d8  std 24, 128(1)
  052d1dc  bl 0x5106cc
  052d1e0  nop
  052d1e4  mr 3, 29
  052d1e8  stw 26, 8(31)
  052d1ec  stw 25, 12(31)
  052d1f0  addi 29, 1, 112
  052d1f4  bl 0x604800
  052d1f8  nop
  052d1fc  lis 9, 25455
  052d200  clrldi 29, 29, 32
  052d204  ori 9, 9, 28260
  052d208  clrldi 4, 26, 32
  052d20c  li 0, 0
  052d210  li 5, 8
  052d214  mr 3, 29
  052d218  stw 9, 4(31)
  052d21c  stb 0, 112(1)
  052d220  bl 0x5193cc
  052d224  nop
  052d228  lwz 9, -29892(2)
  052d22c  addi 27, 27, 16
  052d230  addi 28, 31, 16
  052d234  clrldi 4, 27, 32
  052d238  clrldi 3, 28, 32
  052d23c  lwz 26, 4(9)
  052d240  mr 5, 29
  052d244  lwz 27, 0(9)
  052d248  stw 26, 20(31)
  052d24c  stw 27, 16(31)
  052d250  bl 0x6507a4
  052d254  ld 2, 40(1)
  052d258  cmpwi 7, 3, 0
  052d25c  extsw 28, 3
  052d260  mr 3, 28
  052d264  bf- 30, 0x52d294
  052d268  ld 0, 208(1)
  052d26c  ld 24, 128(1)
  052d270  ld 25, 136(1)
  052d274  mtlr 0
  052d278  ld 26, 144(1)
  052d27c  ld 27, 152(1)
  052d280  ld 28, 160(1)
  052d284  ld 29, 168(1)
  052d288  ld 31, 184(1)
  052d28c  addi 1, 1, 192
  052d290  blr
  052d294  lwz 29, 8(31)
  052d298  bl 0x5c84e4
  052d29c  nop
  052d2a0  clrldi 6, 3, 32
  052d2a4  lwz 3, -29888(2)
  052d2a8  clrldi 4, 29, 32
  052d2ac  mr 5, 28
  052d2b0  bl 0x52cbd8
  052d2b4  stw 26, 20(31)
  052d2b8  stw 27, 16(31)
  052d2bc  b 0x52d268

FUN_0052d2c0:   # 0x52d2c0, 0xb0 bytes
  052d2c0  addi 9, 3, 16
  052d2c4  lwz 10, -29892(2)
  052d2c8  stdu 1, -144(1)
  052d2cc  mflr 0
  052d2d0  std 29, 120(1)
  052d2d4  std 0, 160(1)
  052d2d8  std 30, 128(1)
  052d2dc  lwz 11, 16(10)
  052d2e0  mr 29, 3
  052d2e4  lwz 0, 8(9)
  052d2e8  mr 30, 3
  052d2ec  std 31, 136(1)
  052d2f0  cmpw 7, 11, 0
  052d2f4  clrldi 3, 9, 32
  052d2f8  bt- 30, 0x52d33c
  052d2fc  bl 0x650784
  052d300  ld 2, 40(1)
  052d304  cmpwi 7, 3, 0
  052d308  extsw 31, 3
  052d30c  mr 3, 31
  052d310  bf- 30, 0x52d34c
  052d314  clrldi 3, 30, 32
  052d318  bl 0x5107d0
  052d31c  nop
  052d320  ld 0, 160(1)
  052d324  ld 29, 120(1)
  052d328  ld 30, 128(1)
  052d32c  mtlr 0
  052d330  ld 31, 136(1)
  052d334  addi 1, 1, 144
  052d338  blr
  052d33c  lwz 3, -29880(2)
  052d340  lwz 4, 8(29)
  052d344  bl 0x52cbd8
  052d348  b 0x52d314
  052d34c  lwz 29, 8(29)
  052d350  bl 0x5c84e4
  052d354  nop
  052d358  clrldi 6, 3, 32
  052d35c  lwz 3, -29884(2)
  052d360  clrldi 4, 29, 32
  052d364  mr 5, 31
  052d368  bl 0x52cbd8
  052d36c  b 0x52d314

FUN_0052d370:   # 0x52d370, 0x108 bytes
  052d370  stdu 1, -176(1)
  052d374  mflr 0
  052d378  std 29, 152(1)
  052d37c  std 31, 168(1)
  052d380  clrldi 29, 3, 32
  052d384  mr 31, 3
  052d388  mr 3, 29
  052d38c  std 27, 136(1)
  052d390  mr 27, 4
  052d394  std 0, 192(1)
  052d398  std 28, 144(1)
  052d39c  std 26, 128(1)
  052d3a0  bl 0x5106cc
  052d3a4  nop
  052d3a8  mr 3, 29
  052d3ac  stw 27, 8(31)
  052d3b0  bl 0x604828
  052d3b4  nop
  052d3b8  lis 9, 28021
  052d3bc  li 0, 2
  052d3c0  ori 9, 9, 29816
  052d3c4  clrldi 4, 27, 32
  052d3c8  stw 9, 4(31)
  052d3cc  li 5, 8
  052d3d0  li 9, 0
  052d3d4  stw 0, 112(1)
  052d3d8  addi 3, 1, 120
  052d3dc  li 0, 16
  052d3e0  stb 9, 120(1)
  052d3e4  stw 0, 116(1)
  052d3e8  bl 0x5193cc
  052d3ec  nop
  052d3f0  lwz 9, -29892(2)
  052d3f4  addi 28, 31, 16
  052d3f8  addi 4, 1, 112
  052d3fc  clrldi 3, 28, 32
  052d400  ld 10, 24(9)
  052d404  ld 0, 8(9)
  052d408  ld 11, 16(9)
  052d40c  std 0, 16(31)
  052d410  std 11, 24(31)
  052d414  std 10, 32(31)
  052d418  bl 0x6505a4
  052d41c  ld 2, 40(1)
  052d420  cmpwi 7, 3, 0
  052d424  extsw 27, 3
  052d428  mr 3, 27
  052d42c  bf- 30, 0x52d454
  052d430  ld 0, 192(1)
  052d434  ld 26, 128(1)
  052d438  ld 27, 136(1)
  052d43c  mtlr 0
  052d440  ld 28, 144(1)
  052d444  ld 29, 152(1)
  052d448  ld 31, 168(1)
  052d44c  addi 1, 1, 176
  052d450  blr
  052d454  lwz 29, 8(31)
  052d458  bl 0x5c84e4
  052d45c  nop
  052d460  clrldi 6, 3, 32
  052d464  lwz 3, -29876(2)
  052d468  clrldi 4, 29, 32
  052d46c  mr 5, 27
  052d470  bl 0x52cbd8
  052d474  b 0x52d430

FUN_0052d478:   # 0x52d478, 0x108 bytes
  052d478  stdu 1, -176(1)
  052d47c  mflr 0
  052d480  std 29, 152(1)
  052d484  std 31, 168(1)
  052d488  clrldi 29, 3, 32
  052d48c  mr 31, 3
  052d490  mr 3, 29
  052d494  std 27, 136(1)
  052d498  mr 27, 4
  052d49c  std 0, 192(1)
  052d4a0  std 28, 144(1)
  052d4a4  std 26, 128(1)
  052d4a8  bl 0x5106cc
  052d4ac  nop
  052d4b0  mr 3, 29
  052d4b4  stw 27, 8(31)
  052d4b8  bl 0x604828
  052d4bc  nop
  052d4c0  lis 9, 28021
  052d4c4  li 0, 2
  052d4c8  ori 9, 9, 29816
  052d4cc  clrldi 4, 27, 32
  052d4d0  stw 9, 4(31)
  052d4d4  li 5, 8
  052d4d8  li 9, 0
  052d4dc  stw 0, 112(1)
  052d4e0  addi 3, 1, 120
  052d4e4  li 0, 16
  052d4e8  stb 9, 120(1)
  052d4ec  stw 0, 116(1)
  052d4f0  bl 0x5193cc
  052d4f4  nop
  052d4f8  lwz 9, -29892(2)
  052d4fc  addi 28, 31, 16
  052d500  addi 4, 1, 112
  052d504  clrldi 3, 28, 32
  052d508  ld 10, 24(9)
  052d50c  ld 0, 8(9)
  052d510  ld 11, 16(9)
  052d514  std 0, 16(31)
  052d518  std 11, 24(31)
  052d51c  std 10, 32(31)
  052d520  bl 0x6505a4
  052d524  ld 2, 40(1)
  052d528  cmpwi 7, 3, 0
  052d52c  extsw 27, 3
  052d530  mr 3, 27
  052d534  bf- 30, 0x52d55c
  052d538  ld 0, 192(1)
  052d53c  ld 26, 128(1)
  052d540  ld 27, 136(1)
  052d544  mtlr 0
  052d548  ld 28, 144(1)
  052d54c  ld 29, 152(1)
  052d550  ld 31, 168(1)
  052d554  addi 1, 1, 176
  052d558  blr
  052d55c  lwz 29, 8(31)
  052d560  bl 0x5c84e4
  052d564  nop
  052d568  clrldi 6, 3, 32
  052d56c  lwz 3, -29876(2)
  052d570  clrldi 4, 29, 32
  052d574  mr 5, 27
  052d578  bl 0x52cbd8
  052d57c  b 0x52d538

_ZN4cell4fios8platform6thread20getCurrentThreadTypeEv:   # 0x52d580, 0xd4 bytes
  052d580  stdu 1, -160(1)
  052d584  mflr 0
  052d588  addi 3, 1, 120
  052d58c  std 29, 136(1)
  052d590  std 0, 176(1)
  052d594  bl 0x6505c4
  052d598  ld 2, 40(1)
  052d59c  cmpwi 7, 3, 0
  052d5a0  bf- 30, 0x52d604
  052d5a4  ld 3, 120(1)
  052d5a8  addi 4, 1, 112
  052d5ac  li 11, 48
  052d5b0  sc
  052d5b4  cmpwi 7, 3, 0
  052d5b8  bf- 30, 0x52d62c
  052d5bc  lwz 9, -29952(2)
  052d5c0  li 0, 5
  052d5c4  lwz 11, 112(1)
  052d5c8  li 3, 4
  052d5cc  addi 9, 9, 44
  052d5d0  mtctr 0
  052d5d4  lwz 0, 0(9)
  052d5d8  addi 9, 9, -4
  052d5dc  cmpw 7, 0, 11
  052d5e0  bt 30, 0x52d5ec
  052d5e4  addi 3, 3, -1
  052d5e8  bdnz 0x52d5d4
  052d5ec  ld 0, 176(1)
  052d5f0  extsw 3, 3
  052d5f4  ld 29, 136(1)
  052d5f8  addi 1, 1, 160
  052d5fc  mtlr 0
  052d600  blr
  052d604  extsw 29, 3
  052d608  mr 3, 29
  052d60c  bl 0x5c84e4
  052d610  nop
  052d614  mr 4, 29
  052d618  clrldi 5, 3, 32
  052d61c  lwz 3, -29868(2)
  052d620  bl 0x52cbd8
  052d624  li 3, -1
  052d628  b 0x52d5ec
  052d62c  extsw 29, 3
  052d630  mr 3, 29
  052d634  bl 0x5c84e4
  052d638  nop
  052d63c  mr 4, 29
  052d640  clrldi 5, 3, 32
  052d644  lwz 3, -29872(2)
  052d648  bl 0x52cbd8
  052d64c  li 3, -1
  052d650  b 0x52d5ec

_ZN4cell4fios8platform6thread20setCurrentThreadTypeEi:   # 0x52d654, 0xd4 bytes
  052d654  stdu 1, -144(1)
  052d658  mflr 0
  052d65c  std 31, 136(1)
  052d660  mr 31, 3
  052d664  std 30, 128(1)
  052d668  std 0, 160(1)
  052d66c  bl 0x52d580
  052d670  cmplwi 7, 31, 4
  052d674  mr 30, 3
  052d678  addi 3, 1, 112
  052d67c  bt- 29, 0x52d6d4
  052d680  bl 0x6505c4
  052d684  ld 2, 40(1)
  052d688  slwi 9, 31, 2
  052d68c  mr 0, 3
  052d690  extsw 31, 3
  052d694  cmpwi 7, 0, 0
  052d698  addi 9, 9, 16
  052d69c  mr 3, 31
  052d6a0  extsw 10, 9
  052d6a4  li 11, 47
  052d6a8  bf- 30, 0x52d6f0
  052d6ac  lwz 9, -29952(2)
  052d6b0  ld 3, 112(1)
  052d6b4  add 9, 10, 9
  052d6b8  lwz 4, 12(9)
  052d6bc  extsw 4, 4
  052d6c0  sc
  052d6c4  cmpwi 7, 3, 0
  052d6c8  extsw 31, 3
  052d6cc  mr 3, 31
  052d6d0  bf- 30, 0x52d70c
  052d6d4  ld 0, 160(1)
  052d6d8  extsw 3, 30
  052d6dc  ld 31, 136(1)
  052d6e0  ld 30, 128(1)
  052d6e4  mtlr 0
  052d6e8  addi 1, 1, 144
  052d6ec  blr
  052d6f0  bl 0x5c84e4
  052d6f4  nop
  052d6f8  mr 4, 31
  052d6fc  clrldi 5, 3, 32
  052d700  lwz 3, -29868(2)
  052d704  bl 0x52cbd8
  052d708  b 0x52d6d4
  052d70c  bl 0x5c84e4
  052d710  nop
  052d714  mr 4, 31
  052d718  clrldi 5, 3, 32
  052d71c  lwz 3, -29864(2)
  052d720  bl 0x52cbd8
  052d724  b 0x52d6d4

_ZN4cell4fios8platform6thread15currentThreadIDEv:   # 0x52d728, 0x74 bytes
  052d728  stdu 1, -144(1)
  052d72c  mflr 0
  052d730  addi 3, 1, 112
  052d734  std 0, 160(1)
  052d738  li 0, 0
  052d73c  std 31, 136(1)
  052d740  std 0, 112(1)
  052d744  bl 0x6505c4
  052d748  ld 2, 40(1)
  052d74c  cmpwi 7, 3, 0
  052d750  extsw 31, 3
  052d754  mr 3, 31
  052d758  bf- 30, 0x52d780
  052d75c  ld 3, 112(1)
  052d760  ld 31, 136(1)
  052d764  rldicl 0, 3, 32, 32
  052d768  xor 3, 3, 0
  052d76c  ld 0, 160(1)
  052d770  addi 1, 1, 144
  052d774  clrldi 3, 3, 32
  052d778  mtlr 0
  052d77c  blr
  052d780  bl 0x5c84e4
  052d784  nop
  052d788  mr 4, 31
  052d78c  clrldi 5, 3, 32
  052d790  lwz 3, -29868(2)
  052d794  bl 0x52cbd8
  052d798  b 0x52d75c

FUN_0052d79c:   # 0x52d79c, 0x28 bytes
  052d79c  li 3, 1
  052d7a0  mflr 0
  052d7a4  stdu 1, -112(1)
  052d7a8  std 0, 128(1)
  052d7ac  bl 0x650744
  052d7b0  ld 2, 40(1)
  052d7b4  ld 0, 128(1)
  052d7b8  addi 1, 1, 112
  052d7bc  mtlr 0
  052d7c0  blr

_ZN4cell4fios8platform17thread_entrypointEy:   # 0x52d7c4, 0x50 bytes
  052d7c4  clrldi 9, 3, 32
  052d7c8  mflr 0
  052d7cc  stdu 1, -112(1)
  052d7d0  std 0, 128(1)
  052d7d4  mr 3, 9
  052d7d8  lwz 11, 48(9)
  052d7dc  lwz 4, 52(9)
  052d7e0  lwz 0, 0(11)
  052d7e4  std 2, 40(1)
  052d7e8  mtctr 0
  052d7ec  lwz 2, 4(11)
  052d7f0  bctrl
  052d7f4  ld 2, 40(1)
  052d7f8  li 3, 0
  052d7fc  bl 0x650744
  052d800  ld 2, 40(1)
  052d804  ld 0, 128(1)
  052d808  addi 1, 1, 112
  052d80c  mtlr 0
  052d810  blr

_ZN4cell4fios8platform6thread5startEv:   # 0x52d814, 0xf8 bytes
  052d814  stdu 1, -144(1)
  052d818  mflr 0
  052d81c  std 31, 136(1)
  052d820  mr 31, 3
  052d824  std 0, 160(1)
  052d828  addi 0, 3, 8
  052d82c  std 29, 120(1)
  052d830  clrldi 29, 0, 32
  052d834  lbz 0, 44(31)
  052d838  addi 3, 3, 56
  052d83c  std 28, 112(1)
  052d840  cmpwi 7, 0, 0
  052d844  std 30, 128(1)
  052d848  li 28, 0
  052d84c  li 8, 1
  052d850  clrldi 3, 3, 32
  052d854  mr 9, 29
  052d858  clrldi 5, 31, 32
  052d85c  bf- 30, 0x52d8c0
  052d860  lwz 10, 40(31)
  052d864  cmplwi 7, 10, 4
  052d868  bt- 29, 0x52d8e0
  052d86c  slwi 10, 10, 2
  052d870  lwz 6, -29952(2)
  052d874  lwz 4, -29860(2)
  052d878  addi 11, 10, 16
  052d87c  addi 10, 10, 48
  052d880  extsw 11, 11
  052d884  extsw 10, 10
  052d888  add 11, 11, 6
  052d88c  std 28, 56(31)
  052d890  lwzx 7, 6, 10
  052d894  lwz 6, 12(11)
  052d898  clrldi 7, 7, 32
  052d89c  extsw 6, 6
  052d8a0  bl 0x650524
  052d8a4  ld 2, 40(1)
  052d8a8  cmpwi 7, 3, 0
  052d8ac  extsw 30, 3
  052d8b0  mr 3, 30
  052d8b4  bf- 30, 0x52d8e8
  052d8b8  li 0, 1
  052d8bc  stb 0, 44(31)
  052d8c0  ld 0, 160(1)
  052d8c4  ld 28, 112(1)
  052d8c8  ld 29, 120(1)
  052d8cc  mtlr 0
  052d8d0  ld 30, 128(1)
  052d8d4  ld 31, 136(1)
  052d8d8  addi 1, 1, 144
  052d8dc  blr
  052d8e0  li 10, 3
  052d8e4  b 0x52d86c
  052d8e8  bl 0x5c84e4
  052d8ec  nop
  052d8f0  mr 4, 29
  052d8f4  clrldi 6, 3, 32
  052d8f8  lwz 3, -29856(2)
  052d8fc  mr 5, 30
  052d900  bl 0x52cbd8
  052d904  std 28, 56(31)
  052d908  b 0x52d8c0

FUN_0052d90c:   # 0x52d90c, 0x15c bytes
  052d90c  stdu 1, -176(1)
  052d910  mflr 0
  052d914  std 31, 168(1)
  052d918  clrldi 31, 3, 32
  052d91c  std 29, 152(1)
  052d920  mr 29, 3
  052d924  std 30, 160(1)
  052d928  mr 30, 3
  052d92c  mr 3, 31
  052d930  std 24, 112(1)
  052d934  std 25, 120(1)
  052d938  mr 24, 8
  052d93c  std 26, 128(1)
  052d940  std 27, 136(1)
  052d944  mr 26, 6
  052d948  mr 27, 7
  052d94c  std 28, 144(1)
  052d950  std 0, 192(1)
  052d954  mr 28, 5
  052d958  mr 25, 4
  052d95c  bl 0x5106cc
  052d960  nop
  052d964  li 0, 0
  052d968  mr 3, 31
  052d96c  stb 0, 44(29)
  052d970  li 0, 0
  052d974  stw 28, 40(29)
  052d978  std 0, 56(29)
  052d97c  stw 26, 48(29)
  052d980  stw 27, 52(29)
  052d984  bl 0x604850
  052d988  nop
  052d98c  lwz 7, -29960(2)
  052d990  addi 9, 7, 16
  052d994  lis 0, 29800
  052d998  clrldi 9, 9, 32
  052d99c  ori 0, 0, 29284
  052d9a0  mr 8, 9
  052d9a4  stw 0, 4(29)
  052d9a8  lwz 10, 16(7)
  052d9ac  isync
  052d9b0  addi 11, 10, 1
  052d9b4  lwarx 0, 0, 8
  052d9b8  cmpw 7, 10, 0
  052d9bc  bf 30, 0x52d9a8
  052d9c0  stwcx. 11, 0, 9
  052d9c4  mfocrf 0, 128
  052d9c8  rlwinm 0, 0, 0, 2, 2
  052d9cc  cmpwi 7, 0, 0
  052d9d0  bt 30, 0x52d9b4
  052d9d4  lwz 7, 16(7)
  052d9d8  isync
  052d9dc  addi 3, 30, 8
  052d9e0  lwz 5, -29852(2)
  052d9e4  clrldi 6, 25, 32
  052d9e8  clrldi 3, 3, 32
  052d9ec  clrldi 7, 7, 32
  052d9f0  li 4, 32
  052d9f4  bl 0x5cd198
  052d9f8  nop
  052d9fc  cmpwi 7, 24, 0
  052da00  bf 30, 0x52da34
  052da04  ld 0, 192(1)
  052da08  ld 24, 112(1)
  052da0c  ld 25, 120(1)
  052da10  mtlr 0
  052da14  ld 26, 128(1)
  052da18  ld 27, 136(1)
  052da1c  ld 28, 144(1)
  052da20  ld 29, 152(1)
  052da24  ld 30, 160(1)
  052da28  ld 31, 168(1)
  052da2c  addi 1, 1, 176
  052da30  blr
  052da34  ld 0, 192(1)
  052da38  mr 3, 31
  052da3c  ld 24, 112(1)
  052da40  ld 25, 120(1)
  052da44  mtlr 0
  052da48  ld 26, 128(1)
  052da4c  ld 27, 136(1)
  052da50  ld 28, 144(1)
  052da54  ld 29, 152(1)
  052da58  ld 30, 160(1)
  052da5c  ld 31, 168(1)
  052da60  addi 1, 1, 176
  052da64  b 0x52d814

_ZN4cell4fios8platform16dateToNativeDateEyPSt2tm:   # 0x52da68, 0x124 bytes
  052da68  cmpdi 3, 0
  052da6c  mflr 0
  052da70  stdu 1, -144(1)
  052da74  std 31, 136(1)
  052da78  std 0, 160(1)
  052da7c  li 10, 0
  052da80  li 0, 0
  052da84  mr 31, 4
  052da88  bt- 0, 0x52db3c
  052da8c  lis 9, 68
  052da90  rldicl 11, 3, 55, 9
  052da94  ori 9, 9, 47151
  052da98  addi 3, 1, 112
  052da9c  sldi 9, 9, 32
  052daa0  bt- 2, 0x52db3c
  052daa4  oris 9, 9, 41115
  052daa8  ori 9, 9, 23123
  052daac  mulhdu 0, 11, 9
  052dab0  rldicl 0, 0, 53, 11
  052dab4  std 0, 112(1)
  052dab8  bl 0x5c58b0
  052dabc  nop
  052dac0  srawi 9, 3, 31
  052dac4  xor 0, 9, 3
  052dac8  sub 0, 9, 0
  052dacc  srwi 8, 0, 31
  052dad0  cmpwi 7, 8, 0
  052dad4  bt- 30, 0x52db64
  052dad8  lwz 0, 0(3)
  052dadc  lwz 9, 4(3)
  052dae0  lwz 11, 8(3)
  052dae4  lwz 10, 12(3)
  052dae8  stw 0, 0(31)
  052daec  stw 9, 4(31)
  052daf0  stw 11, 8(31)
  052daf4  stw 10, 12(31)
  052daf8  lwz 0, 16(3)
  052dafc  lwz 9, 20(3)
  052db00  lwz 11, 24(3)
  052db04  lwz 10, 28(3)
  052db08  stw 0, 16(31)
  052db0c  stw 9, 20(31)
  052db10  stw 11, 24(31)
  052db14  stw 10, 28(31)
  052db18  lwz 0, 32(3)
  052db1c  stw 0, 32(31)
  052db20  mr 0, 8
  052db24  extsw 3, 0
  052db28  ld 0, 160(1)
  052db2c  ld 31, 136(1)
  052db30  addi 1, 1, 144
  052db34  mtlr 0
  052db38  blr
  052db3c  stw 10, 32(31)
  052db40  stw 10, 0(31)
  052db44  stw 10, 4(31)
  052db48  stw 10, 8(31)
  052db4c  stw 10, 12(31)
  052db50  stw 10, 16(31)
  052db54  stw 10, 20(31)
  052db58  stw 10, 24(31)
  052db5c  stw 10, 28(31)
  052db60  b 0x52db24
  052db64  stw 8, 32(31)
  052db68  stw 8, 0(31)
  052db6c  stw 8, 4(31)
  052db70  stw 8, 8(31)
  052db74  stw 8, 12(31)
  052db78  stw 8, 16(31)
  052db7c  stw 8, 20(31)
  052db80  stw 8, 24(31)
  052db84  stw 8, 28(31)
  052db88  b 0x52db20

FUN_0052db8c:   # 0x52db8c, 0xb4 bytes
  052db8c  addi 9, 3, 16
  052db90  mflr 0
  052db94  stdu 1, -144(1)
  052db98  std 0, 160(1)
  052db9c  std 28, 112(1)
  052dba0  std 31, 136(1)
  052dba4  lwz 0, 0(9)
  052dba8  mr 31, 3
  052dbac  mr 28, 3
  052dbb0  cmpwi 7, 0, 0
  052dbb4  std 29, 120(1)
  052dbb8  std 30, 128(1)
  052dbbc  clrldi 3, 9, 32
  052dbc0  bt- 30, 0x52dbf0
  052dbc4  bl 0x650504
  052dbc8  ld 2, 40(1)
  052dbcc  cmpwi 7, 3, 0
  052dbd0  extsw 30, 3
  052dbd4  mr 3, 30
  052dbd8  bf- 30, 0x52dc1c
  052dbdc  lwz 9, -29892(2)
  052dbe0  lwz 0, 4(9)
  052dbe4  lwz 11, 0(9)
  052dbe8  stw 0, 20(31)
  052dbec  stw 11, 16(31)
  052dbf0  clrldi 3, 28, 32
  052dbf4  bl 0x5107d0
  052dbf8  nop
  052dbfc  ld 0, 160(1)
  052dc00  ld 28, 112(1)
  052dc04  ld 29, 120(1)
  052dc08  mtlr 0
  052dc0c  ld 30, 128(1)
  052dc10  ld 31, 136(1)
  052dc14  addi 1, 1, 144
  052dc18  blr
  052dc1c  lwz 29, 8(31)
  052dc20  bl 0x5c84e4
  052dc24  nop
  052dc28  clrldi 6, 3, 32
  052dc2c  lwz 3, -29896(2)
  052dc30  clrldi 4, 29, 32
  052dc34  mr 5, 30
  052dc38  bl 0x52cbd8
  052dc3c  b 0x52dbdc

FUN_0052dc40:   # 0x52dc40, 0xb0 bytes
  052dc40  addi 9, 3, 16
  052dc44  mflr 0
  052dc48  stdu 1, -144(1)
  052dc4c  std 0, 160(1)
  052dc50  std 29, 120(1)
  052dc54  std 31, 136(1)
  052dc58  lwz 0, 0(9)
  052dc5c  mr 29, 3
  052dc60  clrldi 3, 9, 32
  052dc64  cmpwi 7, 0, 0
  052dc68  bt- 30, 0x52dc9c
  052dc6c  bl 0x650804
  052dc70  ld 2, 40(1)
  052dc74  cmpwi 7, 3, 0
  052dc78  extsw 31, 3
  052dc7c  mr 3, 31
  052dc80  bf- 30, 0x52dcbc
  052dc84  ld 0, 160(1)
  052dc88  ld 29, 120(1)
  052dc8c  ld 31, 136(1)
  052dc90  mtlr 0
  052dc94  addi 1, 1, 144
  052dc98  blr
  052dc9c  ld 0, 160(1)
  052dca0  lwz 4, 8(29)
  052dca4  ld 31, 136(1)
  052dca8  mtlr 0
  052dcac  ld 29, 120(1)
  052dcb0  addi 1, 1, 144
  052dcb4  lwz 3, -29844(2)
  052dcb8  b 0x52cbd8
  052dcbc  lwz 29, 8(29)
  052dcc0  bl 0x5c84e4
  052dcc4  nop
  052dcc8  ld 0, 160(1)
  052dccc  clrldi 6, 3, 32
  052dcd0  lwz 3, -29848(2)
  052dcd4  clrldi 4, 29, 32
  052dcd8  ld 29, 120(1)
  052dcdc  mr 5, 31
  052dce0  ld 31, 136(1)
  052dce4  addi 1, 1, 144
  052dce8  mtlr 0
  052dcec  b 0x52cbd8

FUN_0052dcf0:   # 0x52dcf0, 0xb0 bytes
  052dcf0  addi 9, 3, 16
  052dcf4  mflr 0
  052dcf8  stdu 1, -144(1)
  052dcfc  std 0, 160(1)
  052dd00  std 29, 120(1)
  052dd04  std 31, 136(1)
  052dd08  lwz 0, 0(9)
  052dd0c  mr 29, 3
  052dd10  clrldi 3, 9, 32
  052dd14  cmpwi 7, 0, 0
  052dd18  bt- 30, 0x52dd4c
  052dd1c  bl 0x650844
  052dd20  ld 2, 40(1)
  052dd24  cmpwi 7, 3, 0
  052dd28  extsw 31, 3
  052dd2c  mr 3, 31
  052dd30  bf- 30, 0x52dd6c
  052dd34  ld 0, 160(1)
  052dd38  ld 29, 120(1)
  052dd3c  ld 31, 136(1)
  052dd40  mtlr 0
  052dd44  addi 1, 1, 144
  052dd48  blr
  052dd4c  ld 0, 160(1)
  052dd50  lwz 4, 8(29)
  052dd54  ld 31, 136(1)
  052dd58  mtlr 0
  052dd5c  ld 29, 120(1)
  052dd60  addi 1, 1, 144
  052dd64  lwz 3, -29836(2)
  052dd68  b 0x52cbd8
  052dd6c  lwz 29, 8(29)
  052dd70  bl 0x5c84e4
  052dd74  nop
  052dd78  ld 0, 160(1)
  052dd7c  clrldi 6, 3, 32
  052dd80  lwz 3, -29840(2)
  052dd84  clrldi 4, 29, 32
  052dd88  ld 29, 120(1)
  052dd8c  mr 5, 31
  052dd90  ld 31, 136(1)
  052dd94  addi 1, 1, 144
  052dd98  mtlr 0
  052dd9c  b 0x52cbd8

lwmutex_unlock_checked:   # 0x52dda0, 0xb8 bytes
  052dda0  addi 11, 3, 16
  052dda4  lwz 10, -29892(2)
  052dda8  stdu 1, -144(1)
  052ddac  mflr 0
  052ddb0  std 29, 120(1)
  052ddb4  std 0, 160(1)
  052ddb8  mr 29, 3
  052ddbc  lwz 9, 16(10)
  052ddc0  clrldi 3, 11, 32
  052ddc4  lwz 0, 8(11)
  052ddc8  std 31, 136(1)
  052ddcc  cmpw 7, 9, 0
  052ddd0  bt- 30, 0x52de04
  052ddd4  bl 0x6504e4
  052ddd8  ld 2, 40(1)
  052dddc  cmpwi 7, 3, 0
  052dde0  extsw 31, 3
  052dde4  mr 3, 31
  052dde8  bf- 30, 0x52de24
  052ddec  ld 0, 160(1)
  052ddf0  ld 29, 120(1)
  052ddf4  ld 31, 136(1)
  052ddf8  mtlr 0
  052ddfc  addi 1, 1, 144
  052de00  blr
  052de04  ld 0, 160(1)
  052de08  lwz 4, 8(29)
  052de0c  ld 31, 136(1)
  052de10  mtlr 0
  052de14  ld 29, 120(1)
  052de18  addi 1, 1, 144
  052de1c  lwz 3, -29828(2)
  052de20  b 0x52cbd8
  052de24  lwz 29, 8(29)
  052de28  bl 0x5c84e4
  052de2c  nop
  052de30  ld 0, 160(1)
  052de34  clrldi 6, 3, 32
  052de38  lwz 3, -29832(2)
  052de3c  clrldi 4, 29, 32
  052de40  ld 29, 120(1)
  052de44  mr 5, 31
  052de48  ld 31, 136(1)
  052de4c  addi 1, 1, 144
  052de50  mtlr 0
  052de54  b 0x52cbd8

lwmutex_lock_checked:   # 0x52de58, 0xbc bytes
  052de58  addi 11, 3, 16
  052de5c  lwz 10, -29892(2)
  052de60  stdu 1, -144(1)
  052de64  mflr 0
  052de68  std 29, 120(1)
  052de6c  std 0, 160(1)
  052de70  mr 29, 3
  052de74  lwz 9, 16(10)
  052de78  li 4, 0
  052de7c  lwz 0, 8(11)
  052de80  clrldi 3, 11, 32
  052de84  std 31, 136(1)
  052de88  cmpw 7, 9, 0
  052de8c  bt- 30, 0x52dec0
  052de90  bl 0x6504c4
  052de94  ld 2, 40(1)
  052de98  cmpwi 7, 3, 0
  052de9c  extsw 31, 3
  052dea0  mr 3, 31
  052dea4  bf- 30, 0x52dee0
  052dea8  ld 0, 160(1)
  052deac  ld 29, 120(1)
  052deb0  ld 31, 136(1)
  052deb4  mtlr 0
  052deb8  addi 1, 1, 144
  052debc  blr
  052dec0  ld 0, 160(1)
  052dec4  lwz 4, 8(29)
  052dec8  ld 31, 136(1)
  052decc  mtlr 0
  052ded0  ld 29, 120(1)
  052ded4  addi 1, 1, 144
  052ded8  lwz 3, -29820(2)
  052dedc  b 0x52cbd8
  052dee0  lwz 29, 8(29)
  052dee4  bl 0x5c84e4
  052dee8  nop
  052deec  ld 0, 160(1)
  052def0  clrldi 6, 3, 32
  052def4  lwz 3, -29824(2)
  052def8  clrldi 4, 29, 32
  052defc  ld 29, 120(1)
  052df00  mr 5, 31
  052df04  ld 31, 136(1)
  052df08  addi 1, 1, 144
  052df0c  mtlr 0
  052df10  b 0x52cbd8

FUN_0052df14:   # 0x52df14, 0xb0 bytes
  052df14  addi 9, 3, 16
  052df18  lwz 10, -29892(2)
  052df1c  stdu 1, -144(1)
  052df20  mflr 0
  052df24  std 29, 120(1)
  052df28  std 0, 160(1)
  052df2c  std 30, 128(1)
  052df30  lwz 11, 16(10)
  052df34  mr 29, 3
  052df38  lwz 0, 8(9)
  052df3c  mr 30, 3
  052df40  std 31, 136(1)
  052df44  cmpw 7, 11, 0
  052df48  clrldi 3, 9, 32
  052df4c  bt- 30, 0x52df90
  052df50  bl 0x650784
  052df54  ld 2, 40(1)
  052df58  cmpwi 7, 3, 0
  052df5c  extsw 31, 3
  052df60  mr 3, 31
  052df64  bf- 30, 0x52dfa0
  052df68  clrldi 3, 30, 32
  052df6c  bl 0x5107d0
  052df70  nop
  052df74  ld 0, 160(1)
  052df78  ld 29, 120(1)
  052df7c  ld 30, 128(1)
  052df80  mtlr 0
  052df84  ld 31, 136(1)
  052df88  addi 1, 1, 144
  052df8c  blr
  052df90  lwz 3, -29880(2)
  052df94  lwz 4, 8(29)
  052df98  bl 0x52cbd8
  052df9c  b 0x52df68
  052dfa0  lwz 29, 8(29)
  052dfa4  bl 0x5c84e4
  052dfa8  nop
  052dfac  clrldi 6, 3, 32
  052dfb0  lwz 3, -29884(2)
  052dfb4  clrldi 4, 29, 32
  052dfb8  mr 5, 31
  052dfbc  bl 0x52cbd8
  052dfc0  b 0x52df68

FUN_0052dfc4:   # 0x52dfc4, 0xf4 bytes
  052dfc4  stdu 1, -192(1)
  052dfc8  mflr 0
  052dfcc  std 29, 168(1)
  052dfd0  std 31, 184(1)
  052dfd4  clrldi 29, 3, 32
  052dfd8  mr 31, 3
  052dfdc  mr 3, 29
  052dfe0  std 26, 144(1)
  052dfe4  std 28, 160(1)
  052dfe8  mr 26, 4
  052dfec  li 28, 0
  052dff0  std 0, 208(1)
  052dff4  std 27, 152(1)
  052dff8  bl 0x5106cc
  052dffc  nop
  052e000  mr 3, 29
  052e004  stw 26, 8(31)
  052e008  stw 28, 12(31)
  052e00c  stw 28, 16(31)
  052e010  stw 28, 20(31)
  052e014  bl 0x6047d8
  052e018  nop
  052e01c  lis 0, 29303
  052e020  ori 0, 0, 27755
  052e024  li 11, 0
  052e028  stw 0, 4(31)
  052e02c  addi 27, 31, 12
  052e030  li 9, 2
  052e034  li 0, 512
  052e038  stw 9, 112(1)
  052e03c  stw 0, 116(1)
  052e040  std 11, 120(1)
  052e044  stw 11, 12(31)
  052e048  clrldi 3, 27, 32
  052e04c  stw 11, 128(1)
  052e050  stb 28, 136(1)
  052e054  addi 4, 1, 112
  052e058  li 11, 120
  052e05c  sc
  052e060  cmpwi 7, 3, 0
  052e064  extsw 28, 3
  052e068  mr 3, 28
  052e06c  bf- 30, 0x52e094
  052e070  ld 0, 208(1)
  052e074  ld 26, 144(1)
  052e078  ld 27, 152(1)
  052e07c  mtlr 0
  052e080  ld 28, 160(1)
  052e084  ld 29, 168(1)
  052e088  ld 31, 184(1)
  052e08c  addi 1, 1, 192
  052e090  blr
  052e094  lwz 29, 8(31)
  052e098  bl 0x5c84e4
  052e09c  nop
  052e0a0  clrldi 6, 3, 32
  052e0a4  lwz 3, -29816(2)
  052e0a8  clrldi 4, 29, 32
  052e0ac  mr 5, 28
  052e0b0  bl 0x52cbd8
  052e0b4  b 0x52e070

FUN_0052e0b8:   # 0x52e0b8, 0x124 bytes
  052e0b8  stdu 1, -192(1)
  052e0bc  mflr 0
  052e0c0  std 29, 168(1)
  052e0c4  clrldi 29, 3, 32
  052e0c8  std 31, 184(1)
  052e0cc  mr 31, 3
  052e0d0  mr 3, 29
  052e0d4  std 25, 136(1)
  052e0d8  std 26, 144(1)
  052e0dc  mr 25, 5
  052e0e0  mr 26, 4
  052e0e4  std 0, 208(1)
  052e0e8  std 27, 152(1)
  052e0ec  std 28, 160(1)
  052e0f0  mr 27, 6
  052e0f4  std 24, 128(1)
  052e0f8  bl 0x5106cc
  052e0fc  nop
  052e100  mr 3, 29
  052e104  stw 26, 8(31)
  052e108  stw 25, 12(31)
  052e10c  addi 29, 1, 112
  052e110  bl 0x604800
  052e114  nop
  052e118  lis 9, 25455
  052e11c  clrldi 29, 29, 32
  052e120  ori 9, 9, 28260
  052e124  clrldi 4, 26, 32
  052e128  li 0, 0
  052e12c  li 5, 8
  052e130  mr 3, 29
  052e134  stw 9, 4(31)
  052e138  stb 0, 112(1)
  052e13c  bl 0x5193cc
  052e140  nop
  052e144  lwz 9, -29892(2)
  052e148  addi 27, 27, 16
  052e14c  addi 28, 31, 16
  052e150  clrldi 4, 27, 32
  052e154  clrldi 3, 28, 32
  052e158  lwz 26, 4(9)
  052e15c  mr 5, 29
  052e160  lwz 27, 0(9)
  052e164  stw 26, 20(31)
  052e168  stw 27, 16(31)
  052e16c  bl 0x6507a4
  052e170  ld 2, 40(1)
  052e174  cmpwi 7, 3, 0
  052e178  extsw 28, 3
  052e17c  mr 3, 28
  052e180  bf- 30, 0x52e1b0
  052e184  ld 0, 208(1)
  052e188  ld 24, 128(1)
  052e18c  ld 25, 136(1)
  052e190  mtlr 0
  052e194  ld 26, 144(1)
  052e198  ld 27, 152(1)
  052e19c  ld 28, 160(1)
  052e1a0  ld 29, 168(1)
  052e1a4  ld 31, 184(1)
  052e1a8  addi 1, 1, 192
  052e1ac  blr
  052e1b0  lwz 29, 8(31)
  052e1b4  bl 0x5c84e4
  052e1b8  nop
  052e1bc  clrldi 6, 3, 32
  052e1c0  lwz 3, -29888(2)
  052e1c4  clrldi 4, 29, 32
  052e1c8  mr 5, 28
  052e1cc  bl 0x52cbd8
  052e1d0  stw 26, 20(31)
  052e1d4  stw 27, 16(31)
  052e1d8  b 0x52e184

FUN_0052e1dc:   # 0x52e1dc, 0xf4 bytes
  052e1dc  stdu 1, -192(1)
  052e1e0  mflr 0
  052e1e4  std 29, 168(1)
  052e1e8  std 31, 184(1)
  052e1ec  clrldi 29, 3, 32
  052e1f0  mr 31, 3
  052e1f4  mr 3, 29
  052e1f8  std 26, 144(1)
  052e1fc  std 28, 160(1)
  052e200  mr 26, 4
  052e204  li 28, 0
  052e208  std 0, 208(1)
  052e20c  std 27, 152(1)
  052e210  bl 0x5106cc
  052e214  nop
  052e218  mr 3, 29
  052e21c  stw 26, 8(31)
  052e220  stw 28, 12(31)
  052e224  stw 28, 16(31)
  052e228  stw 28, 20(31)
  052e22c  bl 0x6047d8
  052e230  nop
  052e234  lis 0, 29303
  052e238  ori 0, 0, 27755
  052e23c  li 11, 0
  052e240  stw 0, 4(31)
  052e244  addi 27, 31, 12
  052e248  li 9, 2
  052e24c  li 0, 512
  052e250  stw 9, 112(1)
  052e254  stw 0, 116(1)
  052e258  std 11, 120(1)
  052e25c  stw 11, 12(31)
  052e260  clrldi 3, 27, 32
  052e264  stw 11, 128(1)
  052e268  stb 28, 136(1)
  052e26c  addi 4, 1, 112
  052e270  li 11, 120
  052e274  sc
  052e278  cmpwi 7, 3, 0
  052e27c  extsw 28, 3
  052e280  mr 3, 28
  052e284  bf- 30, 0x52e2ac
  052e288  ld 0, 208(1)
  052e28c  ld 26, 144(1)
  052e290  ld 27, 152(1)
  052e294  mtlr 0
  052e298  ld 28, 160(1)
  052e29c  ld 29, 168(1)
  052e2a0  ld 31, 184(1)
  052e2a4  addi 1, 1, 192
  052e2a8  blr
  052e2ac  lwz 29, 8(31)
  052e2b0  bl 0x5c84e4
  052e2b4  nop
  052e2b8  clrldi 6, 3, 32
  052e2bc  lwz 3, -29816(2)
  052e2c0  clrldi 4, 29, 32
  052e2c4  mr 5, 28
  052e2c8  bl 0x52cbd8
  052e2cc  b 0x52e288

_ZN4cell4fios8platform10dateToTimeEyPx:   # 0x52e2d0, 0x1cc bytes
  052e2d0  cmpdi 3, 0
  052e2d4  mflr 0
  052e2d8  stdu 1, -144(1)
  052e2dc  std 30, 128(1)
  052e2e0  std 31, 136(1)
  052e2e4  std 0, 160(1)
  052e2e8  mr 31, 3
  052e2ec  mr 30, 4
  052e2f0  bf 1, 0x52e3e8
  052e2f4  bl 0x52c8c4
  052e2f8  mftb 10, 268
  052e2fc  cmpwi 7, 10, 0
  052e300  bt- 30, 0x52e2f8
  052e304  cmpld 6, 31, 3
  052e308  bt 24, 0x52e38c
  052e30c  sub. 9, 31, 3
  052e310  bt 0, 0x52e45c
  052e314  std 9, 112(1)
  052e318  lfd 0, 112(1)
  052e31c  fcfid 13, 0
  052e320  lwz 9, -29960(2)
  052e324  lfs 12, -29812(2)
  052e328  lfd 0, 8(9)
  052e32c  fmul 0, 13, 0
  052e330  fcmpu 7, 0, 12
  052e334  cror 30, 29, 30
  052e338  bt 30, 0x52e41c
  052e33c  fctidz 0, 0
  052e340  stfd 0, 112(1)
  052e344  ld 9, 112(1)
  052e348  li 11, -1
  052e34c  add 0, 10, 9
  052e350  clrldi 11, 11, 1
  052e354  std 0, 0(30)
  052e358  sub 9, 11, 9
  052e35c  cmpd 7, 9, 10
  052e360  bt 28, 0x52e410
  052e364  li 9, 0
  052e368  xori 0, 9, 1
  052e36c  ld 30, 128(1)
  052e370  ld 31, 136(1)
  052e374  clrlwi 3, 0, 24
  052e378  ld 0, 160(1)
  052e37c  addi 1, 1, 144
  052e380  extsw 3, 3
  052e384  mtlr 0
  052e388  blr
  052e38c  sub. 9, 3, 31
  052e390  bt 0, 0x52e47c
  052e394  std 9, 112(1)
  052e398  lfd 0, 112(1)
  052e39c  fcfid 13, 0
  052e3a0  lwz 9, -29960(2)
  052e3a4  lfs 12, -29812(2)
  052e3a8  lfd 0, 8(9)
  052e3ac  fmul 0, 13, 0
  052e3b0  fcmpu 7, 0, 12
  052e3b4  cror 30, 29, 30
  052e3b8  bt 30, 0x52e43c
  052e3bc  fctidz 0, 0
  052e3c0  stfd 0, 112(1)
  052e3c4  ld 9, 112(1)
  052e3c8  cmpd 7, 10, 9
  052e3cc  sub 0, 10, 9
  052e3d0  std 0, 0(30)
  052e3d4  bf 28, 0x52e364
  052e3d8  li 0, 1
  052e3dc  li 9, 1
  052e3e0  std 0, 0(30)
  052e3e4  b 0x52e368
  052e3e8  li 0, 1
  052e3ec  ld 30, 128(1)
  052e3f0  li 3, 0
  052e3f4  ld 31, 136(1)
  052e3f8  std 0, 0(4)
  052e3fc  ld 0, 160(1)
  052e400  extsw 3, 3
  052e404  addi 1, 1, 144
  052e408  mtlr 0
  052e40c  blr
  052e410  li 9, 1
  052e414  std 11, 0(30)
  052e418  b 0x52e368
  052e41c  fsub 0, 0, 12
  052e420  li 0, -1
  052e424  rldicr 0, 0, 0, 0
  052e428  fctidz 0, 0
  052e42c  stfd 0, 112(1)
  052e430  ld 9, 112(1)
  052e434  xor 9, 9, 0
  052e438  b 0x52e348
  052e43c  fsub 0, 0, 12
  052e440  li 0, -1
  052e444  rldicr 0, 0, 0, 0
  052e448  fctidz 0, 0
  052e44c  stfd 0, 112(1)
  052e450  ld 9, 112(1)
  052e454  xor 9, 9, 0
  052e458  b 0x52e3c8
  052e45c  clrldi 0, 9, 63
  052e460  rldicl 9, 9, 63, 1
  052e464  or 0, 0, 9
  052e468  std 0, 112(1)
  052e46c  lfd 0, 112(1)
  052e470  fcfid 13, 0
  052e474  fadd 13, 13, 13
  052e478  b 0x52e320
  052e47c  clrldi 0, 9, 63
  052e480  rldicl 9, 9, 63, 1
  052e484  or 0, 0, 9
  052e488  std 0, 112(1)
  052e48c  lfd 0, 112(1)
  052e490  fcfid 13, 0
  052e494  fadd 13, 13, 13
  052e498  b 0x52e3a0

_ZN4cell4fios8platform4cond4waitERNS1_5mutexEx:   # 0x52e49c, 0x15c bytes
  052e49c  stdu 1, -160(1)
  052e4a0  mflr 0
  052e4a4  std 28, 128(1)
  052e4a8  std 0, 176(1)
  052e4ac  mr 28, 3
  052e4b0  lwzu 0, 16(3)
  052e4b4  std 29, 136(1)
  052e4b8  cmpwi 7, 0, 0
  052e4bc  bt- 30, 0x52e5a0
  052e4c0  cmpdi 7, 5, 0
  052e4c4  li 4, 0
  052e4c8  bf 30, 0x52e500
  052e4cc  clrldi 3, 3, 32
  052e4d0  bl 0x650564
  052e4d4  ld 2, 40(1)
  052e4d8  li 9, 1
  052e4dc  cmpwi 7, 3, 0
  052e4e0  bf- 30, 0x52e5b4
  052e4e4  ld 0, 176(1)
  052e4e8  extsw 3, 9
  052e4ec  ld 28, 128(1)
  052e4f0  ld 29, 136(1)
  052e4f4  mtlr 0
  052e4f8  addi 1, 1, 160
  052e4fc  blr
  052e500  mftb 0, 268
  052e504  cmpwi 7, 0, 0
  052e508  bt- 30, 0x52e500
  052e50c  cmpd 6, 5, 0
  052e510  bt 24, 0x52e578
  052e514  sub 0, 5, 0
  052e518  lwz 9, -29960(2)
  052e51c  lfs 12, -29812(2)
  052e520  std 0, 112(1)
  052e524  lfd 0, 112(1)
  052e528  fcfid 13, 0
  052e52c  lfd 0, 8(9)
  052e530  fdiv 0, 13, 0
  052e534  fcmpu 7, 0, 12
  052e538  cror 30, 29, 30
  052e53c  bt 30, 0x52e580
  052e540  fctidz 0, 0
  052e544  stfd 0, 112(1)
  052e548  ld 5, 112(1)
  052e54c  lis 0, 8388
  052e550  addi 9, 5, 999
  052e554  ori 0, 0, 39845
  052e558  sradi 11, 9, 63
  052e55c  sldi 0, 0, 32
  052e560  oris 0, 0, 58195
  052e564  ori 0, 0, 63439
  052e568  mulhd 9, 9, 0
  052e56c  sradi 9, 9, 7
  052e570  sub. 4, 9, 11
  052e574  bf 2, 0x52e4cc
  052e578  li 4, 1
  052e57c  b 0x52e4cc
  052e580  fsub 0, 0, 12
  052e584  li 0, -1
  052e588  rldicr 0, 0, 0, 0
  052e58c  fctidz 0, 0
  052e590  stfd 0, 112(1)
  052e594  ld 5, 112(1)
  052e598  xor 5, 5, 0
  052e59c  b 0x52e54c
  052e5a0  lwz 3, -29804(2)
  052e5a4  lwz 4, 8(28)
  052e5a8  bl 0x52cbd8
  052e5ac  li 9, 0
  052e5b0  b 0x52e4e4
  052e5b4  lis 0, -32767
  052e5b8  li 9, 0
  052e5bc  ori 0, 0, 11
  052e5c0  cmpw 7, 3, 0
  052e5c4  bt+ 30, 0x52e4e4
  052e5c8  extsw 29, 3
  052e5cc  lwz 28, 8(28)
  052e5d0  mr 3, 29
  052e5d4  bl 0x5c84e4
  052e5d8  nop
  052e5dc  clrldi 4, 28, 32
  052e5e0  clrldi 6, 3, 32
  052e5e4  lwz 3, -29808(2)
  052e5e8  mr 5, 29
  052e5ec  bl 0x52cbd8
  052e5f0  li 9, 0
  052e5f4  b 0x52e4e4

FUN_0052e5f8:   # 0x52e5f8, 0xa4 bytes
  052e5f8  stdu 1, -144(1)
  052e5fc  mflr 0
  052e600  std 29, 120(1)
  052e604  std 0, 160(1)
  052e608  lwz 0, 12(3)
  052e60c  mr 29, 3
  052e610  std 30, 128(1)
  052e614  cmpwi 7, 0, 0
  052e618  mr 30, 3
  052e61c  std 31, 136(1)
  052e620  li 11, 121
  052e624  clrldi 3, 0, 32
  052e628  bt- 30, 0x52e668
  052e62c  sc
  052e630  cmpwi 7, 3, 0
  052e634  extsw 31, 3
  052e638  mr 3, 31
  052e63c  bf- 30, 0x52e678
  052e640  clrldi 3, 30, 32
  052e644  bl 0x5107d0
  052e648  nop
  052e64c  ld 0, 160(1)
  052e650  ld 29, 120(1)
  052e654  ld 30, 128(1)
  052e658  mtlr 0
  052e65c  ld 31, 136(1)
  052e660  addi 1, 1, 144
  052e664  blr
  052e668  lwz 3, -29904(2)
  052e66c  lwz 4, 8(29)
  052e670  bl 0x52cbd8
  052e674  b 0x52e640
  052e678  lwz 29, 8(29)
  052e67c  bl 0x5c84e4
  052e680  nop
  052e684  clrldi 6, 3, 32
  052e688  lwz 3, -29908(2)
  052e68c  clrldi 4, 29, 32
  052e690  mr 5, 31
  052e694  bl 0x52cbd8
  052e698  b 0x52e640

_ZN4cell4fios8platform10timeToDateExPy:   # 0x52e69c, 0x18c bytes
  052e69c  stdu 1, -144(1)
  052e6a0  mflr 0
  052e6a4  std 30, 128(1)
  052e6a8  std 31, 136(1)
  052e6ac  std 0, 160(1)
  052e6b0  mr 31, 3
  052e6b4  mr 30, 4
  052e6b8  bl 0x52c8c4
  052e6bc  mr 10, 3
  052e6c0  mftb 0, 268
  052e6c4  cmpwi 7, 0, 0
  052e6c8  bt- 30, 0x52e6c0
  052e6cc  cmpd 6, 0, 31
  052e6d0  bf 25, 0x52e748
  052e6d4  sub 0, 0, 31
  052e6d8  lwz 9, -29960(2)
  052e6dc  lfs 12, -29812(2)
  052e6e0  std 0, 112(1)
  052e6e4  lfd 0, 112(1)
  052e6e8  fcfid 13, 0
  052e6ec  lfd 0, 8(9)
  052e6f0  fdiv 0, 13, 0
  052e6f4  fcmpu 7, 0, 12
  052e6f8  cror 30, 29, 30
  052e6fc  bt 30, 0x52e808
  052e700  fctidz 0, 0
  052e704  stfd 0, 112(1)
  052e708  ld 3, 112(1)
  052e70c  cmpld 7, 10, 3
  052e710  sub 0, 10, 3
  052e714  std 0, 0(30)
  052e718  bf 28, 0x52e7c4
  052e71c  li 0, 1
  052e720  ld 31, 136(1)
  052e724  li 3, 1
  052e728  std 0, 0(30)
  052e72c  xori 3, 3, 1
  052e730  ld 0, 160(1)
  052e734  ld 30, 128(1)
  052e738  addi 1, 1, 144
  052e73c  clrldi 3, 3, 63
  052e740  mtlr 0
  052e744  blr
  052e748  sub 0, 31, 0
  052e74c  lwz 9, -29960(2)
  052e750  lfs 12, -29812(2)
  052e754  std 0, 112(1)
  052e758  lfd 0, 112(1)
  052e75c  fcfid 13, 0
  052e760  lfd 0, 8(9)
  052e764  fdiv 0, 13, 0
  052e768  fcmpu 7, 0, 12
  052e76c  cror 30, 29, 30
  052e770  bt 30, 0x52e7e8
  052e774  fctidz 0, 0
  052e778  stfd 0, 112(1)
  052e77c  ld 3, 112(1)
  052e780  li 11, -1
  052e784  add 0, 10, 3
  052e788  clrldi 11, 11, 1
  052e78c  std 0, 0(30)
  052e790  sub 9, 11, 3
  052e794  cmpld 7, 9, 10
  052e798  bf 28, 0x52e7c4
  052e79c  li 3, 1
  052e7a0  ld 0, 160(1)
  052e7a4  std 11, 0(30)
  052e7a8  xori 3, 3, 1
  052e7ac  ld 30, 128(1)
  052e7b0  ld 31, 136(1)
  052e7b4  mtlr 0
  052e7b8  clrldi 3, 3, 63
  052e7bc  addi 1, 1, 144
  052e7c0  blr
  052e7c4  li 3, 0
  052e7c8  ld 0, 160(1)
  052e7cc  ld 30, 128(1)
  052e7d0  xori 3, 3, 1
  052e7d4  ld 31, 136(1)
  052e7d8  mtlr 0
  052e7dc  addi 1, 1, 144
  052e7e0  clrldi 3, 3, 63
  052e7e4  blr
  052e7e8  fsub 0, 0, 12
  052e7ec  li 0, -1
  052e7f0  rldicr 0, 0, 0, 0
  052e7f4  fctidz 0, 0
  052e7f8  stfd 0, 112(1)
  052e7fc  ld 3, 112(1)
  052e800  xor 3, 3, 0
  052e804  b 0x52e780
  052e808  fsub 0, 0, 12
  052e80c  li 0, -1
  052e810  rldicr 0, 0, 0, 0
  052e814  fctidz 0, 0
  052e818  stfd 0, 112(1)
  052e81c  ld 3, 112(1)
  052e820  xor 3, 3, 0
  052e824  b 0x52e70c

FUN_0052e828:   # 0x52e828, 0x15c bytes
  052e828  stdu 1, -176(1)
  052e82c  mflr 0
  052e830  std 31, 168(1)
  052e834  clrldi 31, 3, 32
  052e838  std 29, 152(1)
  052e83c  mr 29, 3
  052e840  std 30, 160(1)
  052e844  mr 30, 3
  052e848  mr 3, 31
  052e84c  std 24, 112(1)
  052e850  std 25, 120(1)
  052e854  mr 24, 8
  052e858  std 26, 128(1)
  052e85c  std 27, 136(1)
  052e860  mr 26, 6
  052e864  mr 27, 7
  052e868  std 28, 144(1)
  052e86c  std 0, 192(1)
  052e870  mr 28, 5
  052e874  mr 25, 4
  052e878  bl 0x5106cc
  052e87c  nop
  052e880  li 0, 0
  052e884  mr 3, 31
  052e888  stb 0, 44(29)
  052e88c  li 0, 0
  052e890  stw 28, 40(29)
  052e894  std 0, 56(29)
  052e898  stw 26, 48(29)
  052e89c  stw 27, 52(29)
  052e8a0  bl 0x604850
  052e8a4  nop
  052e8a8  lwz 7, -29960(2)
  052e8ac  addi 9, 7, 16
  052e8b0  lis 0, 29800
  052e8b4  clrldi 9, 9, 32
  052e8b8  ori 0, 0, 29284
  052e8bc  mr 8, 9
  052e8c0  stw 0, 4(29)
  052e8c4  lwz 10, 16(7)
  052e8c8  isync
  052e8cc  addi 11, 10, 1
  052e8d0  lwarx 0, 0, 8
  052e8d4  cmpw 7, 10, 0
  052e8d8  bf 30, 0x52e8c4
  052e8dc  stwcx. 11, 0, 9
  052e8e0  mfocrf 0, 128
  052e8e4  rlwinm 0, 0, 0, 2, 2
  052e8e8  cmpwi 7, 0, 0
  052e8ec  bt 30, 0x52e8d0
  052e8f0  lwz 7, 16(7)
  052e8f4  isync
  052e8f8  addi 3, 30, 8
  052e8fc  lwz 5, -29852(2)
  052e900  clrldi 6, 25, 32
  052e904  clrldi 3, 3, 32
  052e908  clrldi 7, 7, 32
  052e90c  li 4, 32
  052e910  bl 0x5cd198
  052e914  nop
  052e918  cmpwi 7, 24, 0
  052e91c  bf 30, 0x52e950
  052e920  ld 0, 192(1)
  052e924  ld 24, 112(1)
  052e928  ld 25, 120(1)
  052e92c  mtlr 0
  052e930  ld 26, 128(1)
  052e934  ld 27, 136(1)
  052e938  ld 28, 144(1)
  052e93c  ld 29, 152(1)
  052e940  ld 30, 160(1)
  052e944  ld 31, 168(1)
  052e948  addi 1, 1, 176
  052e94c  blr
  052e950  ld 0, 192(1)
  052e954  mr 3, 31
  052e958  ld 24, 112(1)
  052e95c  ld 25, 120(1)
  052e960  mtlr 0
  052e964  ld 26, 128(1)
  052e968  ld 27, 136(1)
  052e96c  ld 28, 144(1)
  052e970  ld 29, 152(1)
  052e974  ld 30, 160(1)
  052e978  ld 31, 168(1)
  052e97c  addi 1, 1, 176
  052e980  b 0x52d814

_ZN4cell4fios8platform6thread5sleepEx:   # 0x52e984, 0xbc bytes
  052e984  mflr 0
  052e988  std 0, 16(1)
  052e98c  mftb 0, 268
  052e990  cmpwi 7, 0, 0
  052e994  bt- 30, 0x52e98c
  052e998  cmpd 7, 0, 3
  052e99c  sub 9, 3, 0
  052e9a0  bf 28, 0x52ea1c
  052e9a4  std 9, -16(1)
  052e9a8  lfd 0, -16(1)
  052e9ac  li 0, -1
  052e9b0  fcfid 13, 0
  052e9b4  lwz 9, -29960(2)
  052e9b8  lfs 12, -29812(2)
  052e9bc  rldicr 0, 0, 0, 0
  052e9c0  lfd 0, 8(9)
  052e9c4  fdiv 0, 13, 0
  052e9c8  fcmpu 7, 0, 12
  052e9cc  cror 30, 29, 30
  052e9d0  bt 30, 0x52ea28
  052e9d4  fctidz 0, 0
  052e9d8  stfd 0, -16(1)
  052e9dc  ld 3, -16(1)
  052e9e0  lis 0, 8388
  052e9e4  addi 9, 3, 999
  052e9e8  ori 0, 0, 39845
  052e9ec  sradi 10, 9, 63
  052e9f0  sldi 0, 0, 32
  052e9f4  li 3, 1
  052e9f8  oris 0, 0, 58195
  052e9fc  li 11, 141
  052ea00  ori 0, 0, 63439
  052ea04  mulhd 9, 9, 0
  052ea08  sradi 9, 9, 7
  052ea0c  sub. 9, 9, 10
  052ea10  bt 2, 0x52ea18
  052ea14  mr 3, 9
  052ea18  sc
  052ea1c  ld 0, 16(1)
  052ea20  mtlr 0
  052ea24  blr
  052ea28  fsub 0, 0, 12
  052ea2c  fctidz 0, 0
  052ea30  stfd 0, -16(1)
  052ea34  ld 3, -16(1)
  052ea38  xor 3, 3, 0
  052ea3c  b 0x52e9e0
