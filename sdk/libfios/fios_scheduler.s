# sdk/libfios/fios_scheduler.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

_ZN4cell4fios12countBitsSetEj:   # 0x51cb74, 0x30 bytes
  051cb74  cmpwi 7, 3, 0
  051cb78  li 0, 0
  051cb7c  bt 30, 0x51cb9c
  051cb80  li 9, 0
  051cb84  addi 0, 3, -1
  051cb88  addi 9, 9, 1
  051cb8c  and 3, 3, 0
  051cb90  cmpwi 3, 0
  051cb94  bf 2, 0x51cb84
  051cb98  mr 0, 9
  051cb9c  extsw 3, 0
  051cba0  blr

_ZNK4cell4fios9scheduler21getEffectiveAllocatorEv:   # 0x51cba4, 0x24 bytes
  051cba4  lwz 3, 372(3)
  051cba8  cmpwi 7, 3, 0
  051cbac  bt 30, 0x51cbb8
  051cbb0  clrldi 3, 3, 32
  051cbb4  blr
  051cbb8  lwz 9, -30744(2)
  051cbbc  lwz 3, 8(9)
  051cbc0  clrldi 3, 3, 32
  051cbc4  blr

_ZNK4cell4fios9scheduler6isIdleEv:   # 0x51cbc8, 0x24 bytes
  051cbc8  lwz 0, 544(3)
  051cbcc  isync
  051cbd0  srawi 9, 0, 31
  051cbd4  xor 3, 9, 0
  051cbd8  sub 3, 3, 9
  051cbdc  addi 3, 3, -1
  051cbe0  srwi 3, 3, 31
  051cbe4  extsw 3, 3
  051cbe8  blr

_ZN4cell4fios9scheduler18schedulerShouldRunEv:   # 0x51cbec, 0x60 bytes
  051cbec  lwz 0, 384(3)
  051cbf0  isync
  051cbf4  cmpwi 7, 0, 0
  051cbf8  li 9, 0
  051cbfc  bf 30, 0x51cc14
  051cc00  lwz 0, 524(3)
  051cc04  isync
  051cc08  cmpwi 7, 0, 0
  051cc0c  li 9, 1
  051cc10  bt 30, 0x51cc1c
  051cc14  extsw 3, 9
  051cc18  blr
  051cc1c  lbz 0, 380(3)
  051cc20  cmpwi 7, 0, 0
  051cc24  bf 30, 0x51cc14
  051cc28  lwz 0, 388(3)
  051cc2c  isync
  051cc30  srawi 11, 0, 31
  051cc34  xor 9, 11, 0
  051cc38  sub 9, 9, 11
  051cc3c  addi 9, 9, -1
  051cc40  srwi 9, 9, 31
  051cc44  extsw 3, 9
  051cc48  blr

get_default_fs:   # 0x51cc4c, 0x14 bytes
  051cc4c  lwz 9, -30740(2)
  051cc50  lwz 3, 0(9)
  051cc54  isync
  051cc58  clrldi 3, 3, 32
  051cc5c  blr

_ZN4cell4fios9scheduler25accumulatePCECoefficientsEPKix:   # 0x51cc60, 0x144 bytes
  051cc60  std 31, -8(1)
  051cc64  mr 31, 3
  051cc68  addi 3, 3, 552
  051cc6c  std 30, -16(1)
  051cc70  clrldi 11, 3, 32
  051cc74  mr 30, 5
  051cc78  lwz 10, 0(3)
  051cc7c  isync
  051cc80  addi 9, 10, 1
  051cc84  lwarx 0, 0, 11
  051cc88  cmpw 7, 10, 0
  051cc8c  bf 30, 0x51cc78
  051cc90  stwcx. 9, 0, 11
  051cc94  mfocrf 0, 128
  051cc98  rlwinm 0, 0, 0, 2, 2
  051cc9c  cmpwi 7, 0, 0
  051cca0  bt 30, 0x51cc84
  051cca4  lwz 9, 352(31)
  051cca8  lwz 12, 140(9)
  051ccac  cmpwi 7, 12, 0
  051ccb0  bt 30, 0x51cd98
  051ccb4  lwz 10, 492(31)
  051ccb8  clrldi 0, 12, 32
  051ccbc  mr 7, 4
  051ccc0  li 6, 0
  051ccc4  mtctr 0
  051ccc8  li 5, 0
  051cccc  mr 8, 10
  051ccd0  clrldi 9, 8, 32
  051ccd4  lwz 0, 0(7)
  051ccd8  addi 8, 8, 8
  051ccdc  extsw 0, 0
  051cce0  addi 7, 7, 4
  051cce4  add 6, 6, 0
  051cce8  ld 11, 0(9)
  051ccec  mulld 0, 0, 11
  051ccf0  add 5, 5, 0
  051ccf4  bdnz 0x51ccd0
  051ccf8  cmpdi 7, 6, 0
  051ccfc  bt 30, 0x51cd98
  051cd00  lis 0, 26214
  051cd04  sub 9, 30, 5
  051cd08  ori 0, 0, 26214
  051cd0c  sradi 11, 9, 63
  051cd10  sldi 0, 0, 32
  051cd14  clrldi 12, 12, 32
  051cd18  oris 0, 0, 26214
  051cd1c  mr 8, 10
  051cd20  mtctr 12
  051cd24  ori 0, 0, 26215
  051cd28  mulhd 9, 9, 0
  051cd2c  sradi 9, 9, 2
  051cd30  sub 5, 9, 11
  051cd34  divd 7, 5, 6
  051cd38  lwz 9, 0(4)
  051cd3c  clrldi 10, 8, 32
  051cd40  addi 4, 4, 4
  051cd44  extsw 9, 9
  051cd48  addi 8, 8, 8
  051cd4c  mulld 9, 7, 9
  051cd50  ld 11, 0(10)
  051cd54  add 9, 9, 11
  051cd58  not 0, 9
  051cd5c  sradi 0, 0, 63
  051cd60  and 9, 9, 0
  051cd64  std 9, 0(10)
  051cd68  bdnz 0x51cd38
  051cd6c  lwz 0, 0(3)
  051cd70  isync
  051cd74  cmplwi 7, 0, 1000
  051cd78  bf 29, 0x51cd98
  051cd7c  sradi 0, 5, 63
  051cd80  xor 5, 0, 5
  051cd84  sub 5, 5, 0
  051cd88  ld 0, 496(31)
  051cd8c  cmpd 7, 0, 5
  051cd90  bf 28, 0x51cd98
  051cd94  std 5, 496(31)
  051cd98  ld 30, -16(1)
  051cd9c  ld 31, -8(1)
  051cda0  blr

_ZN4cell4fios9scheduler8cancelOpEPNS0_2opE:   # 0x51cda4, 0x88 bytes
  051cda4  stdu 1, -128(1)
  051cda8  mflr 0
  051cdac  std 31, 120(1)
  051cdb0  std 0, 144(1)
  051cdb4  mr 31, 4
  051cdb8  bl 0x604788
  051cdbc  nop
  051cdc0  clrlwi 3, 3, 24
  051cdc4  cmpwi 7, 3, 0
  051cdc8  bt- 30, 0x51ce18
  051cdcc  clrldi 3, 31, 32
  051cdd0  bl 0x604738
  051cdd4  nop
  051cdd8  addi 4, 31, 48
  051cddc  clrlwi 3, 3, 24
  051cde0  clrldi 11, 4, 32
  051cde4  cmpwi 7, 3, 0
  051cde8  bt- 30, 0x51ce18
  051cdec  lwz 10, 0(4)
  051cdf0  isync
  051cdf4  ori 9, 10, 512
  051cdf8  lwarx 0, 0, 11
  051cdfc  cmpw 7, 10, 0
  051ce00  bf 30, 0x51cdec
  051ce04  stwcx. 9, 0, 11
  051ce08  mfocrf 0, 128
  051ce0c  rlwinm 0, 0, 0, 2, 2
  051ce10  cmpwi 7, 0, 0
  051ce14  bt 30, 0x51cdf8
  051ce18  ld 0, 144(1)
  051ce1c  ld 31, 120(1)
  051ce20  addi 1, 1, 128
  051ce24  mtlr 0
  051ce28  blr

_ZN4cell4fios9scheduler14cancelOpActionEPvPNS0_2opE:   # 0x51ce2c, 0x30 bytes
  051ce2c  cmpwi 7, 3, 0
  051ce30  mr 9, 4
  051ce34  bt 30, 0x51ce44
  051ce38  lwz 3, 156(4)
  051ce3c  clrldi 4, 9, 32
  051ce40  b 0x51cda4
  051ce44  lwz 0, 64(4)
  051ce48  cmpwi 7, 0, 13
  051ce4c  bclr 12, 30
  051ce50  lwz 3, 156(4)
  051ce54  clrldi 4, 9, 32
  051ce58  b 0x51cda4

_ZN4cell4fios9scheduler7suspendEPKc:   # 0x51ce5c, 0x78 bytes
  051ce5c  stdu 1, -128(1)
  051ce60  mflr 0
  051ce64  std 31, 120(1)
  051ce68  mr 31, 3
  051ce6c  clrldi 3, 3, 32
  051ce70  std 0, 144(1)
  051ce74  stw 4, 184(1)
  051ce78  bl 0x604788
  051ce7c  nop
  051ce80  clrlwi 3, 3, 24
  051ce84  cmpwi 7, 3, 0
  051ce88  bt- 30, 0x51cec0
  051ce8c  addi 3, 31, 384
  051ce90  clrldi 11, 3, 32
  051ce94  lwz 10, 0(3)
  051ce98  isync
  051ce9c  addi 9, 10, 1
  051cea0  lwarx 0, 0, 11
  051cea4  cmpw 7, 10, 0
  051cea8  bf 30, 0x51ce94
  051ceac  stwcx. 9, 0, 11
  051ceb0  mfocrf 0, 128
  051ceb4  rlwinm 0, 0, 0, 2, 2
  051ceb8  cmpwi 7, 0, 0
  051cebc  bt 30, 0x51cea0
  051cec0  ld 0, 144(1)
  051cec4  ld 31, 120(1)
  051cec8  addi 1, 1, 128
  051cecc  mtlr 0
  051ced0  blr

_ZN4cell4fios9scheduler19setDefaultSchedulerEPS1_:   # 0x51ced4, 0x54 bytes
  051ced4  stdu 1, -128(1)
  051ced8  mflr 0
  051cedc  std 31, 120(1)
  051cee0  mr 31, 3
  051cee4  std 0, 144(1)
  051cee8  cmpwi 7, 31, 0
  051ceec  clrldi 3, 3, 32
  051cef0  bt 30, 0x51cf08
  051cef4  bl 0x604788
  051cef8  nop
  051cefc  clrlwi 3, 3, 24
  051cf00  cmpwi 7, 3, 0
  051cf04  bt- 30, 0x51cf14
  051cf08  lwsync
  051cf0c  lwz 9, -30740(2)
  051cf10  stw 31, 0(9)
  051cf14  ld 0, 144(1)
  051cf18  ld 31, 120(1)
  051cf1c  addi 1, 1, 128
  051cf20  mtlr 0
  051cf24  blr

_ZN4cell4fios9scheduler12seekFileSyncEPKNS0_8opattr_tEPNS0_10filehandleExhPx:   # 0x51cf28, 0xb0 bytes
  051cf28  stdu 1, -160(1)
  051cf2c  mflr 0
  051cf30  std 27, 120(1)
  051cf34  mr 27, 3
  051cf38  mr 3, 5
  051cf3c  std 26, 112(1)
  051cf40  std 28, 128(1)
  051cf44  std 29, 136(1)
  051cf48  std 30, 144(1)
  051cf4c  std 31, 152(1)
  051cf50  std 0, 176(1)
  051cf54  mr 30, 5
  051cf58  stw 4, 216(1)
  051cf5c  mr 26, 6
  051cf60  mr 29, 7
  051cf64  mr 28, 8
  051cf68  bl 0x604760
  051cf6c  nop
  051cf70  clrlwi 3, 3, 24
  051cf74  lis 9, -32767
  051cf78  cmpwi 7, 3, 0
  051cf7c  ori 9, 9, 1798
  051cf80  bt- 30, 0x51cfac
  051cf84  lwz 0, 8(30)
  051cf88  mr 3, 30
  051cf8c  mr 4, 26
  051cf90  cmpw 7, 0, 27
  051cf94  clrldi 5, 29, 56
  051cf98  clrldi 6, 28, 32
  051cf9c  bf- 30, 0x51cfac
  051cfa0  bl 0x539358
  051cfa4  nop
  051cfa8  mr 9, 3
  051cfac  ld 0, 176(1)
  051cfb0  extsw 3, 9
  051cfb4  ld 26, 112(1)
  051cfb8  ld 27, 120(1)
  051cfbc  mtlr 0
  051cfc0  ld 28, 128(1)
  051cfc4  ld 29, 136(1)
  051cfc8  ld 30, 144(1)
  051cfcc  ld 31, 152(1)
  051cfd0  addi 1, 1, 160
  051cfd4  blr

_ZN4cell4fios9scheduler10allocateOpEPKNS0_8opattr_tE:   # 0x51cfd8, 0x328 bytes
  051cfd8  mfcr 12
  051cfdc  stdu 1, -160(1)
  051cfe0  std 27, 120(1)
  051cfe4  clrldi 27, 3, 32
  051cfe8  std 28, 128(1)
  051cfec  std 31, 152(1)
  051cff0  mr 28, 3
  051cff4  mr 31, 3
  051cff8  mr 3, 27
  051cffc  std 29, 136(1)
  051d000  std 26, 112(1)
  051d004  std 30, 144(1)
  051d008  mr 29, 4
  051d00c  stw 12, 168(1)
  051d010  mflr 0
  051d014  std 0, 176(1)
  051d018  bl 0x604788
  051d01c  nop
  051d020  clrlwi 3, 3, 24
  051d024  cmpwi 7, 3, 0
  051d028  bt- 30, 0x51d2d4
  051d02c  lwz 0, 388(31)
  051d030  isync
  051d034  cmpwi 7, 0, 0
  051d038  bt- 30, 0x51d2d4
  051d03c  cmpwi 4, 29, 0
  051d040  bt 18, 0x51d250
  051d044  lwz 4, 20(29)
  051d048  li 0, -14592
  051d04c  and 9, 4, 0
  051d050  rlwinm 26, 4, 21, 31, 31
  051d054  cmpwi 9, 0
  051d058  clrlwi 31, 26, 24
  051d05c  bf- 2, 0x51d2dc
  051d060  cmpwi 7, 31, 0
  051d064  bf- 30, 0x51d258
  051d068  addi 7, 28, 520
  051d06c  clrldi 11, 7, 32
  051d070  lwz 10, 0(7)
  051d074  isync
  051d078  cmpwi 7, 10, 0
  051d07c  mr 31, 10
  051d080  bt 30, 0x51d258
  051d084  clrldi 8, 10, 32
  051d088  lwz 9, 0(8)
  051d08c  lwarx 0, 0, 11
  051d090  cmpw 7, 10, 0
  051d094  bf 30, 0x51d0b0
  051d098  stwcx. 9, 0, 11
  051d09c  mfocrf 0, 128
  051d0a0  rlwinm 0, 0, 0, 2, 2
  051d0a4  cmpwi 7, 0, 0
  051d0a8  bt 30, 0x51d08c
  051d0ac  mr 0, 10
  051d0b0  cmpw 7, 10, 0
  051d0b4  bf- 30, 0x51d070
  051d0b8  li 0, 0
  051d0bc  clrldi 30, 31, 32
  051d0c0  stw 0, 0(8)
  051d0c4  mr 3, 30
  051d0c8  bl 0x51bd64
  051d0cc  nop
  051d0d0  stw 28, 156(30)
  051d0d4  bt 18, 0x51d108
  051d0d8  addi 9, 31, 8
  051d0dc  ld 0, 8(29)
  051d0e0  ld 8, 0(29)
  051d0e4  clrldi 9, 9, 32
  051d0e8  ld 11, 16(29)
  051d0ec  ld 10, 24(29)
  051d0f0  std 8, 0(9)
  051d0f4  std 0, 8(9)
  051d0f8  std 11, 16(9)
  051d0fc  std 10, 24(9)
  051d100  ld 0, 32(29)
  051d104  std 0, 32(9)
  051d108  lwz 7, -30740(2)
  051d10c  addi 0, 7, 4
  051d110  clrldi 10, 0, 32
  051d114  mr 8, 10
  051d118  lwz 11, 4(7)
  051d11c  isync
  051d120  addi 9, 11, 1
  051d124  lwarx 0, 0, 8
  051d128  cmpw 7, 11, 0
  051d12c  bf 30, 0x51d118
  051d130  stwcx. 9, 0, 10
  051d134  mfocrf 0, 128
  051d138  rlwinm 0, 0, 0, 2, 2
  051d13c  cmpwi 7, 0, 0
  051d140  bt 30, 0x51d124
  051d144  lwz 9, 28(30)
  051d148  clrlwi 0, 26, 24
  051d14c  stw 11, 60(30)
  051d150  rlwinm 9, 9, 20, 1, 31
  051d154  cmpwi 7, 0, 0
  051d158  rotlwi 9, 9, 12
  051d15c  stw 9, 28(30)
  051d160  bf- 30, 0x51d2f4
  051d164  addi 8, 28, 544
  051d168  clrldi 11, 8, 32
  051d16c  lwz 10, 0(8)
  051d170  isync
  051d174  addi 9, 10, 1
  051d178  lwarx 0, 0, 11
  051d17c  cmpw 7, 10, 0
  051d180  bf 30, 0x51d16c
  051d184  stwcx. 9, 0, 11
  051d188  mfocrf 0, 128
  051d18c  rlwinm 0, 0, 0, 2, 2
  051d190  cmpwi 7, 0, 0
  051d194  bt 30, 0x51d178
  051d198  lwz 11, 0(8)
  051d19c  isync
  051d1a0  mr 8, 28
  051d1a4  lwzu 10, 556(8)
  051d1a8  isync
  051d1ac  cmplw 7, 11, 10
  051d1b0  clrldi 9, 8, 32
  051d1b4  bf 29, 0x51d1d8
  051d1b8  lwarx 0, 0, 9
  051d1bc  cmpw 7, 0, 10
  051d1c0  bf 30, 0x51d20c
  051d1c4  stwcx. 11, 0, 9
  051d1c8  mfocrf 0, 128
  051d1cc  rlwinm 0, 0, 0, 2, 2
  051d1d0  cmpwi 7, 0, 0
  051d1d4  bt 30, 0x51d1b8
  051d1d8  ld 0, 176(1)
  051d1dc  mr 3, 30
  051d1e0  lwz 12, 168(1)
  051d1e4  ld 26, 112(1)
  051d1e8  mtlr 0
  051d1ec  ld 27, 120(1)
  051d1f0  mtocrf 8, 12
  051d1f4  ld 28, 128(1)
  051d1f8  ld 29, 136(1)
  051d1fc  ld 30, 144(1)
  051d200  ld 31, 152(1)
  051d204  addi 1, 1, 160
  051d208  blr
  051d20c  lwz 10, 0(8)
  051d210  isync
  051d214  cmplw 7, 11, 10
  051d218  bt 29, 0x51d1b8
  051d21c  ld 0, 176(1)
  051d220  mr 3, 30
  051d224  lwz 12, 168(1)
  051d228  ld 26, 112(1)
  051d22c  mtlr 0
  051d230  ld 27, 120(1)
  051d234  mtocrf 8, 12
  051d238  ld 28, 128(1)
  051d23c  ld 29, 136(1)
  051d240  ld 30, 144(1)
  051d244  ld 31, 152(1)
  051d248  addi 1, 1, 160
  051d24c  blr
  051d250  li 26, 0
  051d254  b 0x51d068
  051d258  mr 3, 27
  051d25c  bl 0x51cba4
  051d260  lwz 11, -30744(2)
  051d264  mr 9, 3
  051d268  lis 5, 4160
  051d26c  clrldi 3, 3, 32
  051d270  ori 5, 5, 771
  051d274  lhz 4, 12(11)
  051d278  li 6, 0
  051d27c  lwz 10, 0(9)
  051d280  li 7, 0
  051d284  addi 4, 4, 232
  051d288  clrldi 4, 4, 32
  051d28c  lwz 9, 0(10)
  051d290  lwz 0, 0(9)
  051d294  std 2, 40(1)
  051d298  mtctr 0
  051d29c  lwz 2, 4(9)
  051d2a0  bctrl
  051d2a4  ld 2, 40(1)
  051d2a8  cmpwi 7, 3, 0
  051d2ac  bt- 30, 0x51d2d4
  051d2b0  clrldi 30, 3, 32
  051d2b4  addi 4, 3, 232
  051d2b8  mr 31, 3
  051d2bc  clrldi 4, 4, 32
  051d2c0  mr 3, 30
  051d2c4  li 26, 1
  051d2c8  bl 0x51be00
  051d2cc  nop
  051d2d0  b 0x51d0c4
  051d2d4  li 30, 0
  051d2d8  b 0x51d1d8
  051d2dc  extsw 4, 4
  051d2e0  lwz 3, -30736(2)
  051d2e4  li 5, 14591
  051d2e8  bl 0x52cbd8
  051d2ec  nop
  051d2f0  b 0x51d060
  051d2f4  ori 0, 9, 2048
  051d2f8  stw 0, 28(30)
  051d2fc  b 0x51d164

FUN_0051d300:   # 0x51d300, 0x2c bytes
  051d300  cmpwi 7, 3, 1
  051d304  li 0, 0
  051d308  ori 0, 0, 65535
  051d30c  bclr 4, 30
  051d310  cmpw 7, 4, 0
  051d314  li 0, 0
  051d318  bclr 4, 30
  051d31c  lwz 9, -30740(2)
  051d320  stw 0, 0(9)
  051d324  stw 0, 4(9)
  051d328  blr

FUN_0051d32c:   # 0x51d32c, 0x10 bytes
  051d32c  li 4, -1
  051d330  li 3, 1
  051d334  clrldi 4, 4, 48
  051d338  b 0x51d300

FUN_0051d33c:   # 0x51d33c, 0x24c bytes
  051d33c  stdu 1, -256(1)
  051d340  mflr 0
  051d344  std 23, 184(1)
  051d348  std 0, 272(1)
  051d34c  lwz 0, 48(4)
  051d350  mr 10, 4
  051d354  std 24, 192(1)
  051d358  rlwinm 0, 0, 0, 22, 22
  051d35c  std 25, 200(1)
  051d360  cmpwi 7, 0, 0
  051d364  std 26, 208(1)
  051d368  std 27, 216(1)
  051d36c  std 28, 224(1)
  051d370  std 30, 240(1)
  051d374  std 31, 248(1)
  051d378  mr 30, 7
  051d37c  std 29, 232(1)
  051d380  mr 31, 1
  051d384  mr 27, 4
  051d388  mr 26, 5
  051d38c  mr 25, 6
  051d390  mr 28, 3
  051d394  mr 7, 8
  051d398  mr 24, 5
  051d39c  mr 23, 6
  051d3a0  bf- 30, 0x51d4c4
  051d3a4  ld 0, 128(4)
  051d3a8  cmpdi 7, 0, 0
  051d3ac  bt- 30, 0x51d53c
  051d3b0  lwz 9, 352(28)
  051d3b4  li 0, 160
  051d3b8  vxor 0, 0, 0
  051d3bc  ld 8, 0(1)
  051d3c0  addi 10, 10, 64
  051d3c4  li 4, 0
  051d3c8  lwz 29, 140(9)
  051d3cc  li 9, 144
  051d3d0  stvx 0, 31, 0
  051d3d4  li 0, 112
  051d3d8  slwi 5, 29, 2
  051d3dc  stw 7, 160(31)
  051d3e0  addi 11, 5, 30
  051d3e4  stvx 0, 31, 9
  051d3e8  li 9, 128
  051d3ec  sldi 11, 11, 31
  051d3f0  stvx 0, 31, 0
  051d3f4  stw 10, 148(31)
  051d3f8  rldicr 11, 11, 33, 59
  051d3fc  neg 11, 11
  051d400  stvx 0, 31, 9
  051d404  stdux 8, 1, 11
  051d408  addi 0, 1, 127
  051d40c  rlwinm 0, 0, 0, 0, 27
  051d410  mr 3, 0
  051d414  stw 0, 164(31)
  051d418  bl 0x5d0140
  051d41c  nop
  051d420  lwz 11, 352(28)
  051d424  addi 4, 31, 112
  051d428  mr 3, 11
  051d42c  lwz 9, 0(11)
  051d430  lwz 10, 8(9)
  051d434  lwz 0, 0(10)
  051d438  std 2, 40(1)
  051d43c  mtctr 0
  051d440  lwz 2, 4(10)
  051d444  bctrl
  051d448  ld 2, 40(1)
  051d44c  cmpwi 7, 29, 0
  051d450  bt 30, 0x51d498
  051d454  clrldi 29, 29, 32
  051d458  lwz 3, 492(28)
  051d45c  ld 8, 0(30)
  051d460  lwz 7, 164(31)
  051d464  mtctr 29
  051d468  clrldi 11, 7, 32
  051d46c  clrldi 10, 3, 32
  051d470  addi 7, 7, 4
  051d474  addi 3, 3, 8
  051d478  lwz 0, 0(11)
  051d47c  ld 9, 0(10)
  051d480  extsw 0, 0
  051d484  mulld 0, 0, 9
  051d488  add 0, 8, 0
  051d48c  mr 8, 0
  051d490  std 0, 0(30)
  051d494  bdnz 0x51d468
  051d498  cmpwi 7, 24, 0
  051d49c  bt 30, 0x51d4c4
  051d4a0  cmpwi 7, 23, 0
  051d4a4  bt 30, 0x51d4c4
  051d4a8  ld 9, 0(30)
  051d4ac  li 11, 1
  051d4b0  ld 0, 8(27)
  051d4b4  cmpd 7, 9, 0
  051d4b8  bf 29, 0x51d504
  051d4bc  cmpwi 7, 11, 0
  051d4c0  bf- 30, 0x51d510
  051d4c4  li 3, 0
  051d4c8  ld 11, 0(1)
  051d4cc  extsw 3, 3
  051d4d0  ld 0, 16(11)
  051d4d4  ld 23, -72(11)
  051d4d8  ld 24, -64(11)
  051d4dc  mtlr 0
  051d4e0  ld 25, -56(11)
  051d4e4  ld 26, -48(11)
  051d4e8  ld 27, -40(11)
  051d4ec  ld 28, -32(11)
  051d4f0  ld 29, -24(11)
  051d4f4  ld 30, -16(11)
  051d4f8  ld 31, -8(11)
  051d4fc  mr 1, 11
  051d500  blr
  051d504  li 11, 0
  051d508  cmpwi 7, 11, 0
  051d50c  bt+ 30, 0x51d4c4
  051d510  lbz 4, 16(27)
  051d514  lbz 0, 0(26)
  051d518  extsb 9, 4
  051d51c  extsb 0, 0
  051d520  cmpw 7, 9, 0
  051d524  bf 29, 0x51d568
  051d528  li 0, 1
  051d52c  li 3, 1
  051d530  stb 4, 0(26)
  051d534  stw 0, 0(25)
  051d538  b 0x51d4c8
  051d53c  lwz 9, 64(4)
  051d540  addi 0, 9, -10
  051d544  cmplwi 7, 0, 1
  051d548  bf 29, 0x51d4c4
  051d54c  cmpwi 7, 9, 6
  051d550  bt 30, 0x51d4c4
  051d554  cmpwi 7, 9, 7
  051d558  bt 30, 0x51d4c4
  051d55c  cmpwi 7, 9, 17
  051d560  bf 30, 0x51d3b0
  051d564  b 0x51d4c4
  051d568  bt 30, 0x51d574
  051d56c  li 3, 1
  051d570  b 0x51d4c8
  051d574  lwz 9, 0(25)
  051d578  li 3, 1
  051d57c  addi 9, 9, 1
  051d580  stw 9, 0(25)
  051d584  b 0x51d4c8

FUN_0051d588:   # 0x51d588, 0x4ac bytes
  051d588  mfcr 12
  051d58c  stdu 1, -336(1)
  051d590  std 31, 328(1)
  051d594  mr 31, 1
  051d598  std 20, 240(1)
  051d59c  std 29, 312(1)
  051d5a0  std 30, 320(1)
  051d5a4  std 14, 192(1)
  051d5a8  std 15, 200(1)
  051d5ac  std 16, 208(1)
  051d5b0  std 17, 216(1)
  051d5b4  std 18, 224(1)
  051d5b8  std 19, 232(1)
  051d5bc  std 21, 248(1)
  051d5c0  std 22, 256(1)
  051d5c4  std 23, 264(1)
  051d5c8  std 24, 272(1)
  051d5cc  std 25, 280(1)
  051d5d0  std 26, 288(1)
  051d5d4  std 27, 296(1)
  051d5d8  std 28, 304(1)
  051d5dc  mr 20, 4
  051d5e0  mr 30, 3
  051d5e4  stw 4, 144(31)
  051d5e8  mr 29, 3
  051d5ec  stw 12, 344(1)
  051d5f0  mflr 0
  051d5f4  std 0, 352(1)
  051d5f8  ld 0, 8(4)
  051d5fc  cmpdi 7, 0, 0
  051d600  bf 29, 0x51d8d4
  051d604  lwz 9, 208(20)
  051d608  std 0, 8(20)
  051d60c  addi 9, 9, -9
  051d610  cmplwi 7, 9, 2
  051d614  bt 29, 0x51d6b0
  051d618  mr 11, 29
  051d61c  lwzu 9, 532(11)
  051d620  cmpwi 7, 9, 0
  051d624  bt 30, 0x51d63c
  051d628  mr 11, 9
  051d62c  clrldi 9, 9, 32
  051d630  lwz 9, 0(9)
  051d634  cmpwi 7, 9, 0
  051d638  bf 30, 0x51d628
  051d63c  clrldi 9, 11, 32
  051d640  lwz 11, 144(31)
  051d644  stw 11, 0(9)
  051d648  ld 11, 0(1)
  051d64c  lwz 12, 8(11)
  051d650  ld 0, 16(11)
  051d654  ld 14, -144(11)
  051d658  mtocrf 16, 12
  051d65c  ld 15, -136(11)
  051d660  mtlr 0
  051d664  ld 16, -128(11)
  051d668  mtocrf 8, 12
  051d66c  ld 17, -120(11)
  051d670  ld 18, -112(11)
  051d674  ld 19, -104(11)
  051d678  ld 20, -96(11)
  051d67c  ld 21, -88(11)
  051d680  ld 22, -80(11)
  051d684  ld 23, -72(11)
  051d688  ld 24, -64(11)
  051d68c  ld 25, -56(11)
  051d690  ld 26, -48(11)
  051d694  ld 27, -40(11)
  051d698  ld 28, -32(11)
  051d69c  ld 29, -24(11)
  051d6a0  ld 30, -16(11)
  051d6a4  ld 31, -8(11)
  051d6a8  mr 1, 11
  051d6ac  blr
  051d6b0  lwz 9, 144(31)
  051d6b4  lwz 0, 48(9)
  051d6b8  rlwinm 27, 0, 0, 22, 22
  051d6bc  cmpwi 7, 27, 0
  051d6c0  bf- 30, 0x51d9b8
  051d6c4  lwz 9, 352(30)
  051d6c8  ld 11, 0(1)
  051d6cc  lwz 4, 508(30)
  051d6d0  lwz 19, 136(9)
  051d6d4  mr 9, 11
  051d6d8  addi 0, 19, 30
  051d6dc  mr 5, 19
  051d6e0  sldi 0, 0, 31
  051d6e4  rldicr 0, 0, 33, 59
  051d6e8  neg 0, 0
  051d6ec  stdux 11, 1, 0
  051d6f0  addi 11, 1, 112
  051d6f4  stdux 9, 1, 0
  051d6f8  clrldi 21, 11, 32
  051d6fc  addi 0, 1, 112
  051d700  mr 3, 21
  051d704  clrldi 28, 0, 32
  051d708  bl 0x5c5ad0
  051d70c  nop
  051d710  lwz 4, 508(30)
  051d714  mr 3, 28
  051d718  mr 5, 19
  051d71c  bl 0x5c5ad0
  051d720  nop
  051d724  ld 11, 496(30)
  051d728  ld 9, 512(30)
  051d72c  li 0, -128
  051d730  add 9, 9, 11
  051d734  stb 0, 112(31)
  051d738  cmpdi 7, 9, 0
  051d73c  stw 27, 116(31)
  051d740  std 9, 128(31)
  051d744  bt- 30, 0x51d9d0
  051d748  lwz 9, 64(20)
  051d74c  li 10, 0
  051d750  ld 11, 128(31)
  051d754  addi 27, 29, 528
  051d758  addi 0, 9, -10
  051d75c  stw 10, 120(31)
  051d760  cmplwi 7, 0, 1
  051d764  li 0, -128
  051d768  std 11, 136(31)
  051d76c  stb 0, 113(31)
  051d770  bf 29, 0x51d914
  051d774  cmpwi 7, 9, 6
  051d778  bt 30, 0x51d914
  051d77c  xori 0, 9, 17
  051d780  cmpwi 7, 9, 7
  051d784  srawi 11, 0, 31
  051d788  xor 9, 11, 0
  051d78c  sub 9, 9, 11
  051d790  addi 9, 9, -1
  051d794  srwi 9, 9, 31
  051d798  bt 30, 0x51d914
  051d79c  clrlwi 0, 9, 24
  051d7a0  lwz 18, 144(31)
  051d7a4  li 16, -1
  051d7a8  cmpwi 3, 0, 0
  051d7ac  addi 9, 31, 112
  051d7b0  addi 11, 31, 116
  051d7b4  addi 0, 31, 128
  051d7b8  clrldi 16, 16, 1
  051d7bc  clrldi 30, 29, 32
  051d7c0  mr 14, 27
  051d7c4  li 15, 127
  051d7c8  li 17, 0
  051d7cc  addi 24, 31, 113
  051d7d0  addi 25, 31, 120
  051d7d4  addi 26, 31, 136
  051d7d8  std 9, 168(31)
  051d7dc  std 11, 176(31)
  051d7e0  std 0, 184(31)
  051d7e4  lwz 29, 0(27)
  051d7e8  clrldi 3, 28, 32
  051d7ec  clrldi 4, 21, 32
  051d7f0  mr 5, 19
  051d7f4  bl 0x5c5ad0
  051d7f8  nop
  051d7fc  srawi 9, 29, 31
  051d800  lwz 10, 116(31)
  051d804  xor 0, 9, 29
  051d808  ld 11, 128(31)
  051d80c  stw 10, 120(31)
  051d810  sub 0, 9, 0
  051d814  lbz 9, 112(31)
  051d818  std 11, 136(31)
  051d81c  srwi 0, 0, 31
  051d820  stb 9, 113(31)
  051d824  cmpwi 4, 0, 0
  051d828  bt- 18, 0x51d854
  051d82c  ld 11, 168(31)
  051d830  mr 3, 30
  051d834  ld 0, 176(31)
  051d838  clrldi 4, 29, 32
  051d83c  ld 9, 184(31)
  051d840  clrldi 5, 11, 32
  051d844  clrldi 6, 0, 32
  051d848  clrldi 7, 9, 32
  051d84c  mr 8, 21
  051d850  bl 0x51d33c
  051d854  mr 3, 30
  051d858  ld 22, 136(31)
  051d85c  mr 4, 18
  051d860  clrldi 5, 24, 32
  051d864  clrldi 6, 25, 32
  051d868  clrldi 7, 26, 32
  051d86c  mr 8, 28
  051d870  bl 0x51d33c
  051d874  ld 23, 136(31)
  051d878  bt 18, 0x51d8a8
  051d87c  clrldi 29, 29, 32
  051d880  mr 3, 30
  051d884  mr 4, 29
  051d888  clrldi 5, 24, 32
  051d88c  clrldi 6, 25, 32
  051d890  clrldi 7, 26, 32
  051d894  mr 8, 28
  051d898  bl 0x51d33c
  051d89c  lwz 29, 0(29)
  051d8a0  cmpwi 7, 29, 0
  051d8a4  bf 30, 0x51d87c
  051d8a8  lbz 8, 113(31)
  051d8ac  extsb 9, 15
  051d8b0  extsb 0, 8
  051d8b4  cmpw 7, 9, 0
  051d8b8  bt 29, 0x51d940
  051d8bc  bt 30, 0x51d97c
  051d8c0  lwz 0, 0(27)
  051d8c4  cmpwi 7, 0, 0
  051d8c8  bt 30, 0x51d964
  051d8cc  mr 27, 0
  051d8d0  b 0x51d7e4
  051d8d4  mftb 11, 268
  051d8d8  cmpwi 7, 11, 0
  051d8dc  bt- 30, 0x51d8d4
  051d8e0  lwz 9, -30732(2)
  051d8e4  lfd 13, -30728(2)
  051d8e8  lfs 12, -30720(2)
  051d8ec  lfd 0, 0(9)
  051d8f0  fmul 0, 0, 13
  051d8f4  fcmpu 7, 0, 12
  051d8f8  cror 30, 29, 30
  051d8fc  bt 30, 0x51d91c
  051d900  fctidz 0, 0
  051d904  stfd 0, 160(31)
  051d908  ld 9, 160(31)
  051d90c  add 0, 11, 9
  051d910  b 0x51d604
  051d914  li 9, 1
  051d918  b 0x51d79c
  051d91c  fsub 0, 0, 12
  051d920  li 0, -1
  051d924  rldicr 0, 0, 0, 0
  051d928  fctidz 0, 0
  051d92c  stfd 0, 160(31)
  051d930  ld 9, 160(31)
  051d934  xor 9, 9, 0
  051d938  add 0, 11, 9
  051d93c  b 0x51d604
  051d940  ld 11, 136(31)
  051d944  lwz 10, 120(31)
  051d948  lwz 0, 0(27)
  051d94c  mr 17, 10
  051d950  mr 16, 11
  051d954  cmpwi 7, 0, 0
  051d958  mr 15, 8
  051d95c  mr 14, 27
  051d960  bf 30, 0x51d8cc
  051d964  clrldi 9, 14, 32
  051d968  lwz 11, 144(31)
  051d96c  lwz 0, 0(9)
  051d970  stw 0, 0(20)
  051d974  stw 11, 0(9)
  051d978  b 0x51d648
  051d97c  lwz 10, 120(31)
  051d980  cmplw 7, 17, 10
  051d984  bt 29, 0x51d9b0
  051d988  cmpw 7, 17, 10
  051d98c  bf 30, 0x51d8c0
  051d990  ld 11, 136(31)
  051d994  cmpd 7, 16, 11
  051d998  bt 29, 0x51d948
  051d99c  bf 30, 0x51d8c0
  051d9a0  bf 14, 0x51d948
  051d9a4  cmpd 7, 22, 23
  051d9a8  bf 28, 0x51d8c0
  051d9ac  b 0x51d948
  051d9b0  ld 11, 136(31)
  051d9b4  b 0x51d948
  051d9b8  mr 9, 29
  051d9bc  lwz 11, 144(31)
  051d9c0  lwzu 0, 528(9)
  051d9c4  stw 0, 0(20)
  051d9c8  stw 11, 0(9)
  051d9cc  b 0x51d648
  051d9d0  mftb 11, 268
  051d9d4  cmpwi 7, 11, 0
  051d9d8  bt- 30, 0x51d9d0
  051d9dc  lwz 9, -30732(2)
  051d9e0  lfs 13, -30716(2)
  051d9e4  lfs 12, -30720(2)
  051d9e8  lfd 0, 0(9)
  051d9ec  fmul 0, 0, 13
  051d9f0  fcmpu 7, 0, 12
  051d9f4  cror 30, 29, 30
  051d9f8  bt 30, 0x51da14
  051d9fc  fctidz 0, 0
  051da00  stfd 0, 160(31)
  051da04  ld 9, 160(31)
  051da08  add 0, 11, 9
  051da0c  std 0, 128(31)
  051da10  b 0x51d748
  051da14  fsub 0, 0, 12
  051da18  li 0, -1
  051da1c  rldicr 0, 0, 0, 0
  051da20  fctidz 0, 0
  051da24  stfd 0, 160(31)
  051da28  ld 9, 160(31)
  051da2c  xor 9, 9, 0
  051da30  b 0x51da08

_ZN4cell4fios9scheduler15suspendPrefetchEPKc:   # 0x51da34, 0x78 bytes
  051da34  stdu 1, -128(1)
  051da38  mflr 0
  051da3c  std 31, 120(1)
  051da40  mr 31, 3
  051da44  clrldi 3, 3, 32
  051da48  std 0, 144(1)
  051da4c  stw 4, 184(1)
  051da50  bl 0x604788
  051da54  nop
  051da58  clrlwi 3, 3, 24
  051da5c  cmpwi 7, 3, 0
  051da60  bt- 30, 0x51da98
  051da64  addi 3, 31, 456
  051da68  clrldi 11, 3, 32
  051da6c  lwz 10, 0(3)
  051da70  isync
  051da74  addi 9, 10, 1
  051da78  lwarx 0, 0, 11
  051da7c  cmpw 7, 10, 0
  051da80  bf 30, 0x51da6c
  051da84  stwcx. 9, 0, 11
  051da88  mfocrf 0, 128
  051da8c  rlwinm 0, 0, 0, 2, 2
  051da90  cmpwi 7, 0, 0
  051da94  bt 30, 0x51da78
  051da98  ld 0, 144(1)
  051da9c  ld 31, 120(1)
  051daa0  addi 1, 1, 128
  051daa4  mtlr 0
  051daa8  blr

FUN_0051daac:   # 0x51daac, 0x218 bytes
  051daac  stdu 1, -592(1)
  051dab0  mflr 0
  051dab4  std 28, 560(1)
  051dab8  std 0, 608(1)
  051dabc  lwz 28, 64(4)
  051dac0  std 27, 552(1)
  051dac4  cmpwi 7, 28, 10
  051dac8  std 31, 584(1)
  051dacc  std 26, 544(1)
  051dad0  std 29, 568(1)
  051dad4  std 30, 576(1)
  051dad8  mr 31, 4
  051dadc  mr 27, 3
  051dae0  bt 30, 0x51db14
  051dae4  li 3, 0
  051dae8  ld 0, 608(1)
  051daec  extsw 3, 3
  051daf0  ld 26, 544(1)
  051daf4  ld 27, 552(1)
  051daf8  mtlr 0
  051dafc  ld 28, 560(1)
  051db00  ld 29, 568(1)
  051db04  ld 30, 576(1)
  051db08  ld 31, 584(1)
  051db0c  addi 1, 1, 592
  051db10  blr
  051db14  lwz 4, 52(4)
  051db18  lbz 0, 0(4)
  051db1c  cmpwi 7, 0, 0
  051db20  bt 30, 0x51dae4
  051db24  addi 30, 1, 264
  051db28  li 5, 256
  051db2c  mr 3, 30
  051db30  li 29, 128
  051db34  bl 0x5193cc
  051db38  nop
  051db3c  li 0, 240
  051db40  ld 8, 168(31)
  051db44  li 9, 176
  051db48  ld 10, 184(31)
  051db4c  vxor 0, 0, 0
  051db50  li 11, 0
  051db54  stvx 0, 1, 0
  051db58  li 0, 112
  051db5c  li 3, 0
  051db60  stvx 0, 1, 29
  051db64  stvx 0, 1, 9
  051db68  li 9, 144
  051db6c  std 10, 520(1)
  051db70  std 8, 528(1)
  051db74  stvx 0, 1, 0
  051db78  li 0, 160
  051db7c  stw 11, 184(1)
  051db80  stvx 0, 1, 9
  051db84  li 9, 192
  051db88  stw 11, 256(1)
  051db8c  sth 11, 260(1)
  051db90  stvx 0, 1, 0
  051db94  li 0, 208
  051db98  stvx 0, 1, 9
  051db9c  li 9, 224
  051dba0  stvx 0, 1, 0
  051dba4  stvx 0, 1, 9
  051dba8  bl 0x51c8d4
  051dbac  nop
  051dbb0  lwz 9, -30712(2)
  051dbb4  lwz 6, 352(27)
  051dbb8  stw 3, 188(1)
  051dbbc  cmpwi 7, 6, 0
  051dbc0  sth 29, 152(1)
  051dbc4  lwz 0, 0(9)
  051dbc8  lwz 7, 24(9)
  051dbcc  stw 0, 192(1)
  051dbd0  lwz 11, 4(9)
  051dbd4  addi 0, 1, 176
  051dbd8  lwz 10, 8(9)
  051dbdc  ld 8, 16(9)
  051dbe0  stw 11, 196(1)
  051dbe4  stw 10, 200(1)
  051dbe8  std 8, 208(1)
  051dbec  stw 7, 216(1)
  051dbf0  stw 0, 148(1)
  051dbf4  stw 28, 176(1)
  051dbf8  bt 30, 0x51dae4
  051dbfc  lis 28, 25441
  051dc00  li 26, 16
  051dc04  ori 28, 28, 25448
  051dc08  addi 27, 1, 112
  051dc0c  b 0x51dc90
  051dc10  lwz 29, 64(31)
  051dc14  clrldi 3, 30, 32
  051dc18  cmpwi 7, 29, 0
  051dc1c  bt 30, 0x51dc84
  051dc20  stw 26, 176(1)
  051dc24  stw 30, 256(1)
  051dc28  stw 30, 184(1)
  051dc2c  bl 0x51c8d4
  051dc30  nop
  051dc34  ld 0, 520(1)
  051dc38  ld 9, 528(1)
  051dc3c  stw 3, 188(1)
  051dc40  std 9, 240(1)
  051dc44  stw 29, 196(1)
  051dc48  std 0, 224(1)
  051dc4c  lwz 11, 0(31)
  051dc50  mr 3, 31
  051dc54  clrldi 4, 27, 32
  051dc58  lwz 9, 20(11)
  051dc5c  lwz 0, 0(9)
  051dc60  std 2, 40(1)
  051dc64  mtctr 0
  051dc68  lwz 2, 4(9)
  051dc6c  bctrl
  051dc70  ld 2, 40(1)
  051dc74  lwz 0, 180(1)
  051dc78  cmpwi 7, 0, 0
  051dc7c  bf 30, 0x51dae4
  051dc80  lwz 29, 64(31)
  051dc84  cmpwi 7, 29, 0
  051dc88  mr 6, 29
  051dc8c  bt 30, 0x51dae4
  051dc90  clrldi 31, 6, 32
  051dc94  clrldi 4, 30, 32
  051dc98  mr 3, 31
  051dc9c  lwz 0, 8(31)
  051dca0  cmpw 7, 0, 28
  051dca4  bf 30, 0x51dc10
  051dca8  bl 0x532660
  051dcac  nop
  051dcb0  clrlwi 3, 3, 24
  051dcb4  cmpwi 7, 3, 0
  051dcb8  bt 30, 0x51dc10
  051dcbc  li 3, 1
  051dcc0  b 0x51dae8

FUN_0051dcc4:   # 0x51dcc4, 0x8c0 bytes
  051dcc4  stdu 1, -256(1)
  051dcc8  mflr 0
  051dccc  std 31, 248(1)
  051dcd0  mr 31, 3
  051dcd4  addi 3, 3, 4
  051dcd8  std 16, 128(1)
  051dcdc  clrldi 3, 3, 32
  051dce0  std 17, 136(1)
  051dce4  std 18, 144(1)
  051dce8  std 19, 152(1)
  051dcec  std 20, 160(1)
  051dcf0  std 21, 168(1)
  051dcf4  std 23, 184(1)
  051dcf8  std 24, 192(1)
  051dcfc  std 25, 200(1)
  051dd00  std 26, 208(1)
  051dd04  mr 25, 4
  051dd08  mr 26, 5
  051dd0c  std 27, 216(1)
  051dd10  std 28, 224(1)
  051dd14  std 29, 232(1)
  051dd18  std 30, 240(1)
  051dd1c  std 0, 272(1)
  051dd20  std 22, 176(1)
  051dd24  bl 0x5106cc
  051dd28  nop
  051dd2c  lwz 0, -30708(2)
  051dd30  addi 3, 31, 16
  051dd34  lwz 4, -30704(2)
  051dd38  stw 0, 0(31)
  051dd3c  clrldi 3, 3, 32
  051dd40  addi 17, 31, 160
  051dd44  bl 0x52d370
  051dd48  nop
  051dd4c  addi 3, 31, 56
  051dd50  lwz 4, -30700(2)
  051dd54  clrldi 3, 3, 32
  051dd58  clrldi 20, 31, 32
  051dd5c  bl 0x52d370
  051dd60  nop
  051dd64  addi 3, 31, 96
  051dd68  lwz 4, -30696(2)
  051dd6c  clrldi 3, 3, 32
  051dd70  clrldi 16, 17, 32
  051dd74  bl 0x52e1dc
  051dd78  nop
  051dd7c  addi 3, 31, 120
  051dd80  lwz 4, -30692(2)
  051dd84  clrldi 3, 3, 32
  051dd88  addi 28, 31, 224
  051dd8c  bl 0x52d370
  051dd90  nop
  051dd94  mr 7, 20
  051dd98  lwz 6, -30684(2)
  051dd9c  li 8, 0
  051dda0  lwz 4, -30688(2)
  051dda4  li 5, 0
  051dda8  clrldi 28, 28, 32
  051ddac  mr 3, 16
  051ddb0  addi 29, 31, 392
  051ddb4  bl 0x52e828
  051ddb8  nop
  051ddbc  lwz 4, -30680(2)
  051ddc0  mr 3, 28
  051ddc4  clrldi 18, 29, 32
  051ddc8  bl 0x52d370
  051ddcc  nop
  051ddd0  lwz 19, -30672(2)
  051ddd4  lwz 4, -30676(2)
  051ddd8  addi 3, 31, 264
  051dddc  mr 5, 19
  051dde0  clrldi 3, 3, 32
  051dde4  mr 6, 28
  051dde8  li 27, 0
  051ddec  bl 0x52d19c
  051ddf0  nop
  051ddf4  addi 3, 31, 288
  051ddf8  lwz 4, -30668(2)
  051ddfc  mr 6, 28
  051de00  mr 5, 19
  051de04  clrldi 3, 3, 32
  051de08  li 24, 1
  051de0c  bl 0x52d19c
  051de10  nop
  051de14  addi 3, 31, 312
  051de18  lwz 4, -30664(2)
  051de1c  clrldi 3, 3, 32
  051de20  li 30, 0
  051de24  bl 0x52d370
  051de28  nop
  051de2c  lwz 0, 4(26)
  051de30  lwz 9, 0(26)
  051de34  stw 0, 356(31)
  051de38  lwz 0, 8(26)
  051de3c  mr 3, 18
  051de40  lwz 4, -30660(2)
  051de44  addi 23, 31, 568
  051de48  stw 0, 360(31)
  051de4c  stw 9, 372(31)
  051de50  stw 27, 384(31)
  051de54  stw 25, 352(31)
  051de58  stw 27, 364(31)
  051de5c  stw 27, 368(31)
  051de60  stw 24, 376(31)
  051de64  stb 27, 380(31)
  051de68  stw 24, 388(31)
  051de6c  bl 0x52d370
  051de70  nop
  051de74  stw 27, 444(31)
  051de78  std 30, 448(31)
  051de7c  ld 0, 16(26)
  051de80  addi 21, 31, 520
  051de84  li 8, 0
  051de88  std 0, 464(31)
  051de8c  ld 9, 24(26)
  051de90  li 0, -1
  051de94  mr 3, 20
  051de98  stw 30, 456(31)
  051de9c  stw 0, 436(31)
  051dea0  stw 30, 480(31)
  051dea4  std 9, 472(31)
  051dea8  stw 30, 484(31)
  051deac  stw 8, 564(31)
  051deb0  stw 27, 440(31)
  051deb4  stw 30, 488(31)
  051deb8  stw 30, 0(23)
  051debc  stw 30, 0(21)
  051dec0  stb 24, 432(31)
  051dec4  stw 30, 524(31)
  051dec8  stw 30, 492(31)
  051decc  stw 30, 544(31)
  051ded0  std 30, 496(31)
  051ded4  stw 30, 548(31)
  051ded8  stw 30, 504(31)
  051dedc  stw 30, 552(31)
  051dee0  stw 30, 508(31)
  051dee4  std 30, 512(31)
  051dee8  stw 30, 528(31)
  051deec  stw 30, 532(31)
  051def0  stw 30, 536(31)
  051def4  stw 30, 540(31)
  051def8  stw 30, 556(31)
  051defc  stw 30, 560(31)
  051df00  stw 30, 572(31)
  051df04  stw 30, 576(31)
  051df08  stw 30, 580(31)
  051df0c  stw 30, 584(31)
  051df10  bl 0x604788
  051df14  nop
  051df18  clrldi 3, 25, 32
  051df1c  bl 0x604710
  051df20  nop
  051df24  lwz 11, 356(31)
  051df28  lis 0, 29539
  051df2c  cmpwi 7, 11, 0
  051df30  ori 0, 0, 26724
  051df34  stw 0, 8(31)
  051df38  bt- 30, 0x51e058
  051df3c  lwz 9, -30744(2)
  051df40  mr 3, 20
  051df44  mulli 27, 11, 232
  051df48  lhz 29, 12(9)
  051df4c  mullw 26, 11, 29
  051df50  bl 0x51cba4
  051df54  mr 9, 3
  051df58  add 0, 26, 27
  051df5c  lis 5, 4115
  051df60  clrldi 28, 0, 32
  051df64  clrldi 3, 3, 32
  051df68  lwz 11, 0(9)
  051df6c  ori 5, 5, 259
  051df70  mr 4, 28
  051df74  li 6, 0
  051df78  li 7, 0
  051df7c  lwz 9, 0(11)
  051df80  lwz 0, 0(9)
  051df84  std 2, 40(1)
  051df88  mtctr 0
  051df8c  lwz 2, 4(9)
  051df90  bctrl
  051df94  ld 2, 40(1)
  051df98  cmpwi 7, 3, 0
  051df9c  stw 3, 364(31)
  051dfa0  bt 30, 0x51dfb8
  051dfa4  clrldi 3, 3, 32
  051dfa8  mr 5, 28
  051dfac  li 4, 0
  051dfb0  bl 0x5d0140
  051dfb4  nop
  051dfb8  lwz 9, 364(31)
  051dfbc  cmpwi 7, 9, 0
  051dfc0  bt- 30, 0x51e560
  051dfc4  lwz 0, 356(31)
  051dfc8  cmpwi 7, 0, 0
  051dfcc  bt 30, 0x51e058
  051dfd0  add 25, 9, 27
  051dfd4  neg 24, 29
  051dfd8  add 0, 25, 26
  051dfdc  li 30, 0
  051dfe0  sub 27, 0, 29
  051dfe4  clrldi 28, 21, 32
  051dfe8  addi 29, 25, -232
  051dfec  clrldi 4, 27, 32
  051dff0  clrldi 26, 29, 32
  051dff4  mr 25, 29
  051dff8  mr 3, 26
  051dffc  bl 0x51be00
  051e000  nop
  051e004  cmpwi 7, 29, 0
  051e008  bt- 30, 0x51e044
  051e00c  lwz 9, 0(21)
  051e010  isync
  051e014  stw 9, 0(26)
  051e018  lwarx 0, 0, 28
  051e01c  cmpw 7, 9, 0
  051e020  bf 30, 0x51e03c
  051e024  stwcx. 29, 0, 28
  051e028  mfocrf 0, 128
  051e02c  rlwinm 0, 0, 0, 2, 2
  051e030  cmpwi 7, 0, 0
  051e034  bt 30, 0x51e018
  051e038  mr 0, 9
  051e03c  cmpw 7, 9, 0
  051e040  bf- 30, 0x51e00c
  051e044  addi 30, 30, 1
  051e048  lwz 0, 356(31)
  051e04c  add 27, 27, 24
  051e050  cmplw 7, 0, 30
  051e054  bt 29, 0x51dfe8
  051e058  lwz 0, 360(31)
  051e05c  cmpwi 7, 0, 0
  051e060  bt- 30, 0x51e14c
  051e064  lwz 9, -30744(2)
  051e068  mr 3, 20
  051e06c  mulli 29, 0, 88
  051e070  lhz 28, 12(9)
  051e074  mullw 27, 0, 28
  051e078  bl 0x51cba4
  051e07c  mr 9, 3
  051e080  add 0, 27, 29
  051e084  lis 5, 4116
  051e088  clrldi 30, 0, 32
  051e08c  clrldi 3, 3, 32
  051e090  lwz 11, 0(9)
  051e094  ori 5, 5, 259
  051e098  mr 4, 30
  051e09c  li 6, 0
  051e0a0  li 7, 0
  051e0a4  lwz 9, 0(11)
  051e0a8  lwz 0, 0(9)
  051e0ac  std 2, 40(1)
  051e0b0  mtctr 0
  051e0b4  lwz 2, 4(9)
  051e0b8  bctrl
  051e0bc  ld 2, 40(1)
  051e0c0  cmpwi 7, 3, 0
  051e0c4  stw 3, 368(31)
  051e0c8  bt 30, 0x51e0e0
  051e0cc  clrldi 3, 3, 32
  051e0d0  mr 5, 30
  051e0d4  li 4, 0
  051e0d8  bl 0x5d0140
  051e0dc  nop
  051e0e0  lwz 9, 368(31)
  051e0e4  cmpwi 7, 9, 0
  051e0e8  bt- 30, 0x51e568
  051e0ec  lwz 0, 360(31)
  051e0f0  cmpwi 7, 0, 0
  051e0f4  bt 30, 0x51e14c
  051e0f8  add 29, 9, 29
  051e0fc  neg 30, 28
  051e100  add 0, 29, 27
  051e104  li 26, 0
  051e108  sub 28, 0, 28
  051e10c  addi 29, 29, -88
  051e110  clrldi 4, 28, 32
  051e114  clrldi 27, 29, 32
  051e118  addi 26, 26, 1
  051e11c  mr 3, 27
  051e120  add 28, 28, 30
  051e124  bl 0x539124
  051e128  nop
  051e12c  cmpwi 7, 29, 0
  051e130  bt- 30, 0x51e140
  051e134  lwz 0, 0(23)
  051e138  stw 0, 12(27)
  051e13c  stw 29, 0(23)
  051e140  lwz 0, 360(31)
  051e144  cmplw 7, 0, 26
  051e148  bt 29, 0x51e10c
  051e14c  lwz 3, 352(31)
  051e150  bl 0x51b070
  051e154  nop
  051e158  lwz 9, 352(31)
  051e15c  mr 3, 20
  051e160  lwz 24, 144(9)
  051e164  stw 24, 376(31)
  051e168  lwz 29, 140(9)
  051e16c  bl 0x51cba4
  051e170  addi 11, 1, 124
  051e174  lwz 10, 0(3)
  051e178  slwi 29, 29, 2
  051e17c  clrldi 11, 11, 32
  051e180  addi 29, 29, 152
  051e184  li 0, 3
  051e188  li 9, 2
  051e18c  stw 0, 124(1)
  051e190  stw 9, 120(1)
  051e194  lwz 9, 0(10)
  051e198  clrldi 3, 3, 32
  051e19c  lwz 5, 0(11)
  051e1a0  li 6, 0
  051e1a4  li 7, 0
  051e1a8  oris 5, 5, 4118
  051e1ac  mullw 29, 24, 29
  051e1b0  lwz 0, 0(9)
  051e1b4  clrldi 29, 29, 32
  051e1b8  ori 5, 5, 256
  051e1bc  std 2, 40(1)
  051e1c0  mtctr 0
  051e1c4  clrldi 5, 5, 32
  051e1c8  lwz 2, 4(9)
  051e1cc  mr 4, 29
  051e1d0  bctrl
  051e1d4  ld 2, 40(1)
  051e1d8  cmpwi 7, 3, 0
  051e1dc  stw 3, 564(31)
  051e1e0  bt 30, 0x51e1f8
  051e1e4  clrldi 3, 3, 32
  051e1e8  mr 5, 29
  051e1ec  li 4, 0
  051e1f0  bl 0x5d0140
  051e1f4  nop
  051e1f8  lwz 8, 564(31)
  051e1fc  cmpwi 7, 8, 0
  051e200  bt- 30, 0x51e498
  051e204  lwz 24, 376(31)
  051e208  slwi 11, 24, 6
  051e20c  slwi 9, 24, 3
  051e210  slwi 0, 24, 5
  051e214  add 3, 8, 11
  051e218  sub 0, 0, 9
  051e21c  cmpwi 7, 24, 0
  051e220  add 26, 3, 0
  051e224  add 11, 11, 26
  051e228  bt 30, 0x51e344
  051e22c  lwz 22, 352(31)
  051e230  clrldi 0, 24, 32
  051e234  cmplwi 7, 24, 1
  051e238  clrldi 9, 22, 32
  051e23c  mtctr 0
  051e240  li 10, 0
  051e244  lwz 0, 140(9)
  051e248  slwi 7, 0, 2
  051e24c  bt- 28, 0x51e578
  051e250  mr 0, 10
  051e254  addi 10, 10, 1
  051e258  slwi 9, 0, 6
  051e25c  mullw 0, 7, 0
  051e260  add 9, 9, 8
  051e264  add 0, 11, 0
  051e268  clrldi 9, 9, 32
  051e26c  stw 0, 52(9)
  051e270  bdnz 0x51e250
  051e274  cmpwi 7, 24, 0
  051e278  bt- 30, 0x51e348
  051e27c  mr 28, 3
  051e280  lwz 30, -30656(2)
  051e284  li 27, 0
  051e288  b 0x51e290
  051e28c  lwz 8, 564(31)
  051e290  slwi 29, 27, 6
  051e294  clrldi 3, 28, 32
  051e298  add 29, 29, 8
  051e29c  mr 4, 30
  051e2a0  mr 5, 19
  051e2a4  mr 6, 18
  051e2a8  addi 27, 27, 1
  051e2ac  bl 0x52d19c
  051e2b0  nop
  051e2b4  clrldi 29, 29, 32
  051e2b8  lwz 0, 376(31)
  051e2bc  cmplw 7, 0, 27
  051e2c0  stw 28, 8(29)
  051e2c4  addi 28, 28, 24
  051e2c8  bt 29, 0x51e28c
  051e2cc  cmpwi 7, 0, 0
  051e2d0  bt- 30, 0x51e344
  051e2d4  mr 27, 26
  051e2d8  lwz 25, -30652(2)
  051e2dc  li 26, 0
  051e2e0  lwz 30, -30648(2)
  051e2e4  clrldi 3, 27, 32
  051e2e8  lwz 29, 564(31)
  051e2ec  mr 4, 25
  051e2f0  li 5, 1
  051e2f4  mr 6, 30
  051e2f8  mr 7, 20
  051e2fc  li 8, 0
  051e300  slwi 28, 26, 6
  051e304  bl 0x52e828
  051e308  nop
  051e30c  lwz 0, 564(31)
  051e310  add 29, 28, 29
  051e314  add 28, 28, 0
  051e318  clrldi 29, 29, 32
  051e31c  clrldi 28, 28, 32
  051e320  addi 26, 26, 1
  051e324  stw 27, 4(29)
  051e328  lwz 3, 4(28)
  051e32c  addi 27, 27, 64
  051e330  bl 0x52d814
  051e334  nop
  051e338  lwz 0, 376(31)
  051e33c  cmplw 7, 0, 26
  051e340  bt 29, 0x51e2e4
  051e344  lwz 22, 352(31)
  051e348  mr 3, 20
  051e34c  bl 0x51cba4
  051e350  clrldi 11, 22, 32
  051e354  mr 9, 3
  051e358  lis 5, 4119
  051e35c  clrldi 3, 3, 32
  051e360  ori 5, 5, 259
  051e364  lwz 4, 140(11)
  051e368  li 6, 0
  051e36c  lwz 10, 0(9)
  051e370  li 7, 0
  051e374  slwi 4, 4, 3
  051e378  lwz 9, 0(10)
  051e37c  lwz 0, 0(9)
  051e380  std 2, 40(1)
  051e384  mtctr 0
  051e388  lwz 2, 4(9)
  051e38c  bctrl
  051e390  ld 2, 40(1)
  051e394  cmpwi 7, 3, 0
  051e398  stw 3, 492(31)
  051e39c  bt 30, 0x51e3bc
  051e3a0  lwz 9, 352(31)
  051e3a4  clrldi 3, 3, 32
  051e3a8  li 4, 0
  051e3ac  lwz 5, 140(9)
  051e3b0  slwi 5, 5, 3
  051e3b4  bl 0x5d0140
  051e3b8  nop
  051e3bc  lwz 4, 492(31)
  051e3c0  cmpwi 7, 4, 0
  051e3c4  bt- 30, 0x51e498
  051e3c8  clrldi 4, 4, 32
  051e3cc  lwz 3, 352(31)
  051e3d0  bl 0x51a124
  051e3d4  nop
  051e3d8  lwz 11, 352(31)
  051e3dc  li 0, 1
  051e3e0  addi 10, 1, 112
  051e3e4  stw 0, 116(1)
  051e3e8  lwz 9, 136(11)
  051e3ec  cmplwi 7, 9, 1
  051e3f0  stw 9, 112(1)
  051e3f4  bf 29, 0x51e4e8
  051e3f8  clrldi 9, 10, 32
  051e3fc  mr 3, 20
  051e400  lwz 29, 0(9)
  051e404  bl 0x51cba4
  051e408  mr 9, 3
  051e40c  slwi 0, 29, 1
  051e410  lis 5, 4120
  051e414  clrldi 30, 0, 32
  051e418  clrldi 3, 3, 32
  051e41c  lwz 11, 0(9)
  051e420  ori 5, 5, 259
  051e424  mr 4, 30
  051e428  li 6, 0
  051e42c  li 7, 0
  051e430  lwz 9, 0(11)
  051e434  lwz 0, 0(9)
  051e438  std 2, 40(1)
  051e43c  mtctr 0
  051e440  lwz 2, 4(9)
  051e444  bctrl
  051e448  ld 2, 40(1)
  051e44c  cmpwi 7, 3, 0
  051e450  stw 3, 504(31)
  051e454  bt 30, 0x51e46c
  051e458  clrldi 3, 3, 32
  051e45c  mr 5, 30
  051e460  li 4, 0
  051e464  bl 0x5d0140
  051e468  nop
  051e46c  lwz 0, 504(31)
  051e470  cmpwi 7, 0, 0
  051e474  bt- 30, 0x51e498
  051e478  add 0, 0, 29
  051e47c  mr 3, 16
  051e480  stw 0, 508(31)
  051e484  bl 0x52d814
  051e488  nop
  051e48c  lbz 0, 44(17)
  051e490  cmpwi 7, 0, 0
  051e494  bf 30, 0x51e4f0
  051e498  ld 0, 272(1)
  051e49c  ld 16, 128(1)
  051e4a0  ld 17, 136(1)
  051e4a4  mtlr 0
  051e4a8  ld 18, 144(1)
  051e4ac  ld 19, 152(1)
  051e4b0  ld 20, 160(1)
  051e4b4  ld 21, 168(1)
  051e4b8  ld 22, 176(1)
  051e4bc  ld 23, 184(1)
  051e4c0  ld 24, 192(1)
  051e4c4  ld 25, 200(1)
  051e4c8  ld 26, 208(1)
  051e4cc  ld 27, 216(1)
  051e4d0  ld 28, 224(1)
  051e4d4  ld 29, 232(1)
  051e4d8  ld 30, 240(1)
  051e4dc  ld 31, 248(1)
  051e4e0  addi 1, 1, 256
  051e4e4  blr
  051e4e8  addi 10, 1, 116
  051e4ec  b 0x51e3f8
  051e4f0  lwz 0, 376(31)
  051e4f4  cmplwi 7, 0, 1
  051e4f8  bf- 29, 0x51e570
  051e4fc  lwz 22, 352(31)
  051e500  cmpwi 7, 22, 0
  051e504  bt 30, 0x51e54c
  051e508  clrldi 11, 22, 32
  051e50c  lis 0, 25441
  051e510  ori 0, 0, 25448
  051e514  lwz 9, 8(11)
  051e518  mr 10, 0
  051e51c  lwz 11, 64(11)
  051e520  cmpw 7, 9, 0
  051e524  bt 30, 0x51e544
  051e528  cmpwi 7, 11, 0
  051e52c  clrldi 9, 11, 32
  051e530  bt 30, 0x51e54c
  051e534  lwz 0, 8(9)
  051e538  lwz 11, 64(9)
  051e53c  cmpw 7, 0, 10
  051e540  bf 30, 0x51e528
  051e544  li 0, 1
  051e548  stw 0, 436(31)
  051e54c  clrldi 3, 22, 32
  051e550  mr 4, 20
  051e554  bl 0x51b318
  051e558  nop
  051e55c  b 0x51e498
  051e560  stw 30, 356(31)
  051e564  b 0x51e058
  051e568  stw 9, 360(31)
  051e56c  b 0x51e14c
  051e570  lwz 22, 352(31)
  051e574  b 0x51e54c
  051e578  li 0, 1
  051e57c  mtctr 0
  051e580  b 0x51e250

_ZN4cell4fios9scheduler12deallocateOpEPNS0_2opE:   # 0x51e584, 0x148 bytes
  051e584  stdu 1, -144(1)
  051e588  mflr 0
  051e58c  std 29, 120(1)
  051e590  mr 29, 4
  051e594  std 28, 112(1)
  051e598  clrldi 28, 29, 32
  051e59c  std 30, 128(1)
  051e5a0  std 31, 136(1)
  051e5a4  mr 30, 3
  051e5a8  mr 31, 4
  051e5ac  li 5, 0
  051e5b0  li 4, 2
  051e5b4  mr 3, 28
  051e5b8  std 0, 160(1)
  051e5bc  bl 0x51c390
  051e5c0  nop
  051e5c4  addi 8, 30, 544
  051e5c8  clrldi 11, 8, 32
  051e5cc  lwz 10, 0(8)
  051e5d0  isync
  051e5d4  addi 9, 10, -1
  051e5d8  lwarx 0, 0, 11
  051e5dc  cmpw 7, 10, 0
  051e5e0  bf 30, 0x51e5cc
  051e5e4  stwcx. 9, 0, 11
  051e5e8  mfocrf 0, 128
  051e5ec  rlwinm 0, 0, 0, 2, 2
  051e5f0  cmpwi 7, 0, 0
  051e5f4  bt 30, 0x51e5d8
  051e5f8  lwz 0, 28(29)
  051e5fc  rlwinm 0, 0, 0, 20, 20
  051e600  cmpwi 7, 0, 0
  051e604  bf- 30, 0x51e678
  051e608  mr 3, 28
  051e60c  bl 0x51bd64
  051e610  nop
  051e614  addi 10, 30, 520
  051e618  clrldi 9, 10, 32
  051e61c  stw 30, 156(29)
  051e620  lwz 11, 0(10)
  051e624  isync
  051e628  stw 11, 0(29)
  051e62c  lwarx 0, 0, 9
  051e630  cmpw 7, 11, 0
  051e634  bf 30, 0x51e650
  051e638  stwcx. 31, 0, 9
  051e63c  mfocrf 0, 128
  051e640  rlwinm 0, 0, 0, 2, 2
  051e644  cmpwi 7, 0, 0
  051e648  bt 30, 0x51e62c
  051e64c  mr 0, 11
  051e650  cmpw 7, 11, 0
  051e654  bf- 30, 0x51e620
  051e658  ld 0, 160(1)
  051e65c  ld 28, 112(1)
  051e660  ld 29, 120(1)
  051e664  mtlr 0
  051e668  ld 30, 128(1)
  051e66c  ld 31, 136(1)
  051e670  addi 1, 1, 144
  051e674  blr
  051e678  lis 0, 26217
  051e67c  clrldi 3, 30, 32
  051e680  ori 0, 0, 28499
  051e684  stw 0, 220(29)
  051e688  bl 0x51cba4
  051e68c  lis 5, 4160
  051e690  mr 9, 3
  051e694  mr 4, 28
  051e698  clrldi 3, 3, 32
  051e69c  ori 5, 5, 771
  051e6a0  li 6, 0
  051e6a4  lwz 11, 0(9)
  051e6a8  li 7, 0
  051e6ac  lwz 9, 4(11)
  051e6b0  lwz 0, 0(9)
  051e6b4  std 2, 40(1)
  051e6b8  mtctr 0
  051e6bc  lwz 2, 4(9)
  051e6c0  bctrl
  051e6c4  ld 2, 40(1)
  051e6c8  b 0x51e658

FUN_0051e6cc:   # 0x51e6cc, 0x8c0 bytes
  051e6cc  stdu 1, -256(1)
  051e6d0  mflr 0
  051e6d4  std 31, 248(1)
  051e6d8  mr 31, 3
  051e6dc  addi 3, 3, 4
  051e6e0  std 16, 128(1)
  051e6e4  clrldi 3, 3, 32
  051e6e8  std 17, 136(1)
  051e6ec  std 18, 144(1)
  051e6f0  std 19, 152(1)
  051e6f4  std 20, 160(1)
  051e6f8  std 21, 168(1)
  051e6fc  std 23, 184(1)
  051e700  std 24, 192(1)
  051e704  std 25, 200(1)
  051e708  std 26, 208(1)
  051e70c  mr 25, 4
  051e710  mr 26, 5
  051e714  std 27, 216(1)
  051e718  std 28, 224(1)
  051e71c  std 29, 232(1)
  051e720  std 30, 240(1)
  051e724  std 0, 272(1)
  051e728  std 22, 176(1)
  051e72c  bl 0x5106cc
  051e730  nop
  051e734  lwz 0, -30708(2)
  051e738  addi 3, 31, 16
  051e73c  lwz 4, -30704(2)
  051e740  stw 0, 0(31)
  051e744  clrldi 3, 3, 32
  051e748  addi 17, 31, 160
  051e74c  bl 0x52d370
  051e750  nop
  051e754  addi 3, 31, 56
  051e758  lwz 4, -30700(2)
  051e75c  clrldi 3, 3, 32
  051e760  clrldi 20, 31, 32
  051e764  bl 0x52d370
  051e768  nop
  051e76c  addi 3, 31, 96
  051e770  lwz 4, -30696(2)
  051e774  clrldi 3, 3, 32
  051e778  clrldi 16, 17, 32
  051e77c  bl 0x52e1dc
  051e780  nop
  051e784  addi 3, 31, 120
  051e788  lwz 4, -30692(2)
  051e78c  clrldi 3, 3, 32
  051e790  addi 28, 31, 224
  051e794  bl 0x52d370
  051e798  nop
  051e79c  mr 7, 20
  051e7a0  lwz 6, -30684(2)
  051e7a4  li 8, 0
  051e7a8  lwz 4, -30688(2)
  051e7ac  li 5, 0
  051e7b0  clrldi 28, 28, 32
  051e7b4  mr 3, 16
  051e7b8  addi 29, 31, 392
  051e7bc  bl 0x52e828
  051e7c0  nop
  051e7c4  lwz 4, -30680(2)
  051e7c8  mr 3, 28
  051e7cc  clrldi 18, 29, 32
  051e7d0  bl 0x52d370
  051e7d4  nop
  051e7d8  lwz 19, -30672(2)
  051e7dc  lwz 4, -30676(2)
  051e7e0  addi 3, 31, 264
  051e7e4  mr 5, 19
  051e7e8  clrldi 3, 3, 32
  051e7ec  mr 6, 28
  051e7f0  li 27, 0
  051e7f4  bl 0x52d19c
  051e7f8  nop
  051e7fc  addi 3, 31, 288
  051e800  lwz 4, -30668(2)
  051e804  mr 6, 28
  051e808  mr 5, 19
  051e80c  clrldi 3, 3, 32
  051e810  li 24, 1
  051e814  bl 0x52d19c
  051e818  nop
  051e81c  addi 3, 31, 312
  051e820  lwz 4, -30664(2)
  051e824  clrldi 3, 3, 32
  051e828  li 30, 0
  051e82c  bl 0x52d370
  051e830  nop
  051e834  lwz 0, 4(26)
  051e838  lwz 9, 0(26)
  051e83c  stw 0, 356(31)
  051e840  lwz 0, 8(26)
  051e844  mr 3, 18
  051e848  lwz 4, -30660(2)
  051e84c  addi 23, 31, 568
  051e850  stw 0, 360(31)
  051e854  stw 9, 372(31)
  051e858  stw 27, 384(31)
  051e85c  stw 25, 352(31)
  051e860  stw 27, 364(31)
  051e864  stw 27, 368(31)
  051e868  stw 24, 376(31)
  051e86c  stb 27, 380(31)
  051e870  stw 24, 388(31)
  051e874  bl 0x52d370
  051e878  nop
  051e87c  stw 27, 444(31)
  051e880  std 30, 448(31)
  051e884  ld 0, 16(26)
  051e888  addi 21, 31, 520
  051e88c  li 8, 0
  051e890  std 0, 464(31)
  051e894  ld 9, 24(26)
  051e898  li 0, -1
  051e89c  mr 3, 20
  051e8a0  stw 30, 456(31)
  051e8a4  stw 0, 436(31)
  051e8a8  stw 30, 480(31)
  051e8ac  std 9, 472(31)
  051e8b0  stw 30, 484(31)
  051e8b4  stw 8, 564(31)
  051e8b8  stw 27, 440(31)
  051e8bc  stw 30, 488(31)
  051e8c0  stw 30, 0(23)
  051e8c4  stw 30, 0(21)
  051e8c8  stb 24, 432(31)
  051e8cc  stw 30, 524(31)
  051e8d0  stw 30, 492(31)
  051e8d4  stw 30, 544(31)
  051e8d8  std 30, 496(31)
  051e8dc  stw 30, 548(31)
  051e8e0  stw 30, 504(31)
  051e8e4  stw 30, 552(31)
  051e8e8  stw 30, 508(31)
  051e8ec  std 30, 512(31)
  051e8f0  stw 30, 528(31)
  051e8f4  stw 30, 532(31)
  051e8f8  stw 30, 536(31)
  051e8fc  stw 30, 540(31)
  051e900  stw 30, 556(31)
  051e904  stw 30, 560(31)
  051e908  stw 30, 572(31)
  051e90c  stw 30, 576(31)
  051e910  stw 30, 580(31)
  051e914  stw 30, 584(31)
  051e918  bl 0x604788
  051e91c  nop
  051e920  clrldi 3, 25, 32
  051e924  bl 0x604710
  051e928  nop
  051e92c  lwz 11, 356(31)
  051e930  lis 0, 29539
  051e934  cmpwi 7, 11, 0
  051e938  ori 0, 0, 26724
  051e93c  stw 0, 8(31)
  051e940  bt- 30, 0x51ea60
  051e944  lwz 9, -30744(2)
  051e948  mr 3, 20
  051e94c  mulli 27, 11, 232
  051e950  lhz 29, 12(9)
  051e954  mullw 26, 11, 29
  051e958  bl 0x51cba4
  051e95c  mr 9, 3
  051e960  add 0, 26, 27
  051e964  lis 5, 4115
  051e968  clrldi 28, 0, 32
  051e96c  clrldi 3, 3, 32
  051e970  lwz 11, 0(9)
  051e974  ori 5, 5, 259
  051e978  mr 4, 28
  051e97c  li 6, 0
  051e980  li 7, 0
  051e984  lwz 9, 0(11)
  051e988  lwz 0, 0(9)
  051e98c  std 2, 40(1)
  051e990  mtctr 0
  051e994  lwz 2, 4(9)
  051e998  bctrl
  051e99c  ld 2, 40(1)
  051e9a0  cmpwi 7, 3, 0
  051e9a4  stw 3, 364(31)
  051e9a8  bt 30, 0x51e9c0
  051e9ac  clrldi 3, 3, 32
  051e9b0  mr 5, 28
  051e9b4  li 4, 0
  051e9b8  bl 0x5d0140
  051e9bc  nop
  051e9c0  lwz 9, 364(31)
  051e9c4  cmpwi 7, 9, 0
  051e9c8  bt- 30, 0x51ef68
  051e9cc  lwz 0, 356(31)
  051e9d0  cmpwi 7, 0, 0
  051e9d4  bt 30, 0x51ea60
  051e9d8  add 25, 9, 27
  051e9dc  neg 24, 29
  051e9e0  add 0, 25, 26
  051e9e4  li 30, 0
  051e9e8  sub 27, 0, 29
  051e9ec  clrldi 28, 21, 32
  051e9f0  addi 29, 25, -232
  051e9f4  clrldi 4, 27, 32
  051e9f8  clrldi 26, 29, 32
  051e9fc  mr 25, 29
  051ea00  mr 3, 26
  051ea04  bl 0x51be00
  051ea08  nop
  051ea0c  cmpwi 7, 29, 0
  051ea10  bt- 30, 0x51ea4c
  051ea14  lwz 9, 0(21)
  051ea18  isync
  051ea1c  stw 9, 0(26)
  051ea20  lwarx 0, 0, 28
  051ea24  cmpw 7, 9, 0
  051ea28  bf 30, 0x51ea44
  051ea2c  stwcx. 29, 0, 28
  051ea30  mfocrf 0, 128
  051ea34  rlwinm 0, 0, 0, 2, 2
  051ea38  cmpwi 7, 0, 0
  051ea3c  bt 30, 0x51ea20
  051ea40  mr 0, 9
  051ea44  cmpw 7, 9, 0
  051ea48  bf- 30, 0x51ea14
  051ea4c  addi 30, 30, 1
  051ea50  lwz 0, 356(31)
  051ea54  add 27, 27, 24
  051ea58  cmplw 7, 0, 30
  051ea5c  bt 29, 0x51e9f0
  051ea60  lwz 0, 360(31)
  051ea64  cmpwi 7, 0, 0
  051ea68  bt- 30, 0x51eb54
  051ea6c  lwz 9, -30744(2)
  051ea70  mr 3, 20
  051ea74  mulli 29, 0, 88
  051ea78  lhz 28, 12(9)
  051ea7c  mullw 27, 0, 28
  051ea80  bl 0x51cba4
  051ea84  mr 9, 3
  051ea88  add 0, 27, 29
  051ea8c  lis 5, 4116
  051ea90  clrldi 30, 0, 32
  051ea94  clrldi 3, 3, 32
  051ea98  lwz 11, 0(9)
  051ea9c  ori 5, 5, 259
  051eaa0  mr 4, 30
  051eaa4  li 6, 0
  051eaa8  li 7, 0
  051eaac  lwz 9, 0(11)
  051eab0  lwz 0, 0(9)
  051eab4  std 2, 40(1)
  051eab8  mtctr 0
  051eabc  lwz 2, 4(9)
  051eac0  bctrl
  051eac4  ld 2, 40(1)
  051eac8  cmpwi 7, 3, 0
  051eacc  stw 3, 368(31)
  051ead0  bt 30, 0x51eae8
  051ead4  clrldi 3, 3, 32
  051ead8  mr 5, 30
  051eadc  li 4, 0
  051eae0  bl 0x5d0140
  051eae4  nop
  051eae8  lwz 9, 368(31)
  051eaec  cmpwi 7, 9, 0
  051eaf0  bt- 30, 0x51ef70
  051eaf4  lwz 0, 360(31)
  051eaf8  cmpwi 7, 0, 0
  051eafc  bt 30, 0x51eb54
  051eb00  add 29, 9, 29
  051eb04  neg 30, 28
  051eb08  add 0, 29, 27
  051eb0c  li 26, 0
  051eb10  sub 28, 0, 28
  051eb14  addi 29, 29, -88
  051eb18  clrldi 4, 28, 32
  051eb1c  clrldi 27, 29, 32
  051eb20  addi 26, 26, 1
  051eb24  mr 3, 27
  051eb28  add 28, 28, 30
  051eb2c  bl 0x539124
  051eb30  nop
  051eb34  cmpwi 7, 29, 0
  051eb38  bt- 30, 0x51eb48
  051eb3c  lwz 0, 0(23)
  051eb40  stw 0, 12(27)
  051eb44  stw 29, 0(23)
  051eb48  lwz 0, 360(31)
  051eb4c  cmplw 7, 0, 26
  051eb50  bt 29, 0x51eb14
  051eb54  lwz 3, 352(31)
  051eb58  bl 0x51b070
  051eb5c  nop
  051eb60  lwz 9, 352(31)
  051eb64  mr 3, 20
  051eb68  lwz 24, 144(9)
  051eb6c  stw 24, 376(31)
  051eb70  lwz 29, 140(9)
  051eb74  bl 0x51cba4
  051eb78  addi 11, 1, 124
  051eb7c  lwz 10, 0(3)
  051eb80  slwi 29, 29, 2
  051eb84  clrldi 11, 11, 32
  051eb88  addi 29, 29, 152
  051eb8c  li 0, 3
  051eb90  li 9, 2
  051eb94  stw 0, 124(1)
  051eb98  stw 9, 120(1)
  051eb9c  lwz 9, 0(10)
  051eba0  clrldi 3, 3, 32
  051eba4  lwz 5, 0(11)
  051eba8  li 6, 0
  051ebac  li 7, 0
  051ebb0  oris 5, 5, 4118
  051ebb4  mullw 29, 24, 29
  051ebb8  lwz 0, 0(9)
  051ebbc  clrldi 29, 29, 32
  051ebc0  ori 5, 5, 256
  051ebc4  std 2, 40(1)
  051ebc8  mtctr 0
  051ebcc  clrldi 5, 5, 32
  051ebd0  lwz 2, 4(9)
  051ebd4  mr 4, 29
  051ebd8  bctrl
  051ebdc  ld 2, 40(1)
  051ebe0  cmpwi 7, 3, 0
  051ebe4  stw 3, 564(31)
  051ebe8  bt 30, 0x51ec00
  051ebec  clrldi 3, 3, 32
  051ebf0  mr 5, 29
  051ebf4  li 4, 0
  051ebf8  bl 0x5d0140
  051ebfc  nop
  051ec00  lwz 8, 564(31)
  051ec04  cmpwi 7, 8, 0
  051ec08  bt- 30, 0x51eea0
  051ec0c  lwz 24, 376(31)
  051ec10  slwi 11, 24, 6
  051ec14  slwi 9, 24, 3
  051ec18  slwi 0, 24, 5
  051ec1c  add 3, 8, 11
  051ec20  sub 0, 0, 9
  051ec24  cmpwi 7, 24, 0
  051ec28  add 26, 3, 0
  051ec2c  add 11, 11, 26
  051ec30  bt 30, 0x51ed4c
  051ec34  lwz 22, 352(31)
  051ec38  clrldi 0, 24, 32
  051ec3c  cmplwi 7, 24, 1
  051ec40  clrldi 9, 22, 32
  051ec44  mtctr 0
  051ec48  li 10, 0
  051ec4c  lwz 0, 140(9)
  051ec50  slwi 7, 0, 2
  051ec54  bt- 28, 0x51ef80
  051ec58  mr 0, 10
  051ec5c  addi 10, 10, 1
  051ec60  slwi 9, 0, 6
  051ec64  mullw 0, 7, 0
  051ec68  add 9, 9, 8
  051ec6c  add 0, 11, 0
  051ec70  clrldi 9, 9, 32
  051ec74  stw 0, 52(9)
  051ec78  bdnz 0x51ec58
  051ec7c  cmpwi 7, 24, 0
  051ec80  bt- 30, 0x51ed50
  051ec84  mr 28, 3
  051ec88  lwz 30, -30656(2)
  051ec8c  li 27, 0
  051ec90  b 0x51ec98
  051ec94  lwz 8, 564(31)
  051ec98  slwi 29, 27, 6
  051ec9c  clrldi 3, 28, 32
  051eca0  add 29, 29, 8
  051eca4  mr 4, 30
  051eca8  mr 5, 19
  051ecac  mr 6, 18
  051ecb0  addi 27, 27, 1
  051ecb4  bl 0x52d19c
  051ecb8  nop
  051ecbc  clrldi 29, 29, 32
  051ecc0  lwz 0, 376(31)
  051ecc4  cmplw 7, 0, 27
  051ecc8  stw 28, 8(29)
  051eccc  addi 28, 28, 24
  051ecd0  bt 29, 0x51ec94
  051ecd4  cmpwi 7, 0, 0
  051ecd8  bt- 30, 0x51ed4c
  051ecdc  mr 27, 26
  051ece0  lwz 25, -30652(2)
  051ece4  li 26, 0
  051ece8  lwz 30, -30648(2)
  051ecec  clrldi 3, 27, 32
  051ecf0  lwz 29, 564(31)
  051ecf4  mr 4, 25
  051ecf8  li 5, 1
  051ecfc  mr 6, 30
  051ed00  mr 7, 20
  051ed04  li 8, 0
  051ed08  slwi 28, 26, 6
  051ed0c  bl 0x52e828
  051ed10  nop
  051ed14  lwz 0, 564(31)
  051ed18  add 29, 28, 29
  051ed1c  add 28, 28, 0
  051ed20  clrldi 29, 29, 32
  051ed24  clrldi 28, 28, 32
  051ed28  addi 26, 26, 1
  051ed2c  stw 27, 4(29)
  051ed30  lwz 3, 4(28)
  051ed34  addi 27, 27, 64
  051ed38  bl 0x52d814
  051ed3c  nop
  051ed40  lwz 0, 376(31)
  051ed44  cmplw 7, 0, 26
  051ed48  bt 29, 0x51ecec
  051ed4c  lwz 22, 352(31)
  051ed50  mr 3, 20
  051ed54  bl 0x51cba4
  051ed58  clrldi 11, 22, 32
  051ed5c  mr 9, 3
  051ed60  lis 5, 4119
  051ed64  clrldi 3, 3, 32
  051ed68  ori 5, 5, 259
  051ed6c  lwz 4, 140(11)
  051ed70  li 6, 0
  051ed74  lwz 10, 0(9)
  051ed78  li 7, 0
  051ed7c  slwi 4, 4, 3
  051ed80  lwz 9, 0(10)
  051ed84  lwz 0, 0(9)
  051ed88  std 2, 40(1)
  051ed8c  mtctr 0
  051ed90  lwz 2, 4(9)
  051ed94  bctrl
  051ed98  ld 2, 40(1)
  051ed9c  cmpwi 7, 3, 0
  051eda0  stw 3, 492(31)
  051eda4  bt 30, 0x51edc4
  051eda8  lwz 9, 352(31)
  051edac  clrldi 3, 3, 32
  051edb0  li 4, 0
  051edb4  lwz 5, 140(9)
  051edb8  slwi 5, 5, 3
  051edbc  bl 0x5d0140
  051edc0  nop
  051edc4  lwz 4, 492(31)
  051edc8  cmpwi 7, 4, 0
  051edcc  bt- 30, 0x51eea0
  051edd0  clrldi 4, 4, 32
  051edd4  lwz 3, 352(31)
  051edd8  bl 0x51a124
  051eddc  nop
  051ede0  lwz 11, 352(31)
  051ede4  li 0, 1
  051ede8  addi 10, 1, 112
  051edec  stw 0, 116(1)
  051edf0  lwz 9, 136(11)
  051edf4  cmplwi 7, 9, 1
  051edf8  stw 9, 112(1)
  051edfc  bf 29, 0x51eef0
  051ee00  clrldi 9, 10, 32
  051ee04  mr 3, 20
  051ee08  lwz 29, 0(9)
  051ee0c  bl 0x51cba4
  051ee10  mr 9, 3
  051ee14  slwi 0, 29, 1
  051ee18  lis 5, 4120
  051ee1c  clrldi 30, 0, 32
  051ee20  clrldi 3, 3, 32
  051ee24  lwz 11, 0(9)
  051ee28  ori 5, 5, 259
  051ee2c  mr 4, 30
  051ee30  li 6, 0
  051ee34  li 7, 0
  051ee38  lwz 9, 0(11)
  051ee3c  lwz 0, 0(9)
  051ee40  std 2, 40(1)
  051ee44  mtctr 0
  051ee48  lwz 2, 4(9)
  051ee4c  bctrl
  051ee50  ld 2, 40(1)
  051ee54  cmpwi 7, 3, 0
  051ee58  stw 3, 504(31)
  051ee5c  bt 30, 0x51ee74
  051ee60  clrldi 3, 3, 32
  051ee64  mr 5, 30
  051ee68  li 4, 0
  051ee6c  bl 0x5d0140
  051ee70  nop
  051ee74  lwz 0, 504(31)
  051ee78  cmpwi 7, 0, 0
  051ee7c  bt- 30, 0x51eea0
  051ee80  add 0, 0, 29
  051ee84  mr 3, 16
  051ee88  stw 0, 508(31)
  051ee8c  bl 0x52d814
  051ee90  nop
  051ee94  lbz 0, 44(17)
  051ee98  cmpwi 7, 0, 0
  051ee9c  bf 30, 0x51eef8
  051eea0  ld 0, 272(1)
  051eea4  ld 16, 128(1)
  051eea8  ld 17, 136(1)
  051eeac  mtlr 0
  051eeb0  ld 18, 144(1)
  051eeb4  ld 19, 152(1)
  051eeb8  ld 20, 160(1)
  051eebc  ld 21, 168(1)
  051eec0  ld 22, 176(1)
  051eec4  ld 23, 184(1)
  051eec8  ld 24, 192(1)
  051eecc  ld 25, 200(1)
  051eed0  ld 26, 208(1)
  051eed4  ld 27, 216(1)
  051eed8  ld 28, 224(1)
  051eedc  ld 29, 232(1)
  051eee0  ld 30, 240(1)
  051eee4  ld 31, 248(1)
  051eee8  addi 1, 1, 256
  051eeec  blr
  051eef0  addi 10, 1, 116
  051eef4  b 0x51ee00
  051eef8  lwz 0, 376(31)
  051eefc  cmplwi 7, 0, 1
  051ef00  bf- 29, 0x51ef78
  051ef04  lwz 22, 352(31)
  051ef08  cmpwi 7, 22, 0
  051ef0c  bt 30, 0x51ef54
  051ef10  clrldi 11, 22, 32
  051ef14  lis 0, 25441
  051ef18  ori 0, 0, 25448
  051ef1c  lwz 9, 8(11)
  051ef20  mr 10, 0
  051ef24  lwz 11, 64(11)
  051ef28  cmpw 7, 9, 0
  051ef2c  bt 30, 0x51ef4c
  051ef30  cmpwi 7, 11, 0
  051ef34  clrldi 9, 11, 32
  051ef38  bt 30, 0x51ef54
  051ef3c  lwz 0, 8(9)
  051ef40  lwz 11, 64(9)
  051ef44  cmpw 7, 0, 10
  051ef48  bf 30, 0x51ef30
  051ef4c  li 0, 1
  051ef50  stw 0, 436(31)
  051ef54  clrldi 3, 22, 32
  051ef58  mr 4, 20
  051ef5c  bl 0x51b318
  051ef60  nop
  051ef64  b 0x51eea0
  051ef68  stw 30, 356(31)
  051ef6c  b 0x51ea60
  051ef70  stw 9, 360(31)
  051ef74  b 0x51eb54
  051ef78  lwz 22, 352(31)
  051ef7c  b 0x51ef54
  051ef80  li 0, 1
  051ef84  mtctr 0
  051ef88  b 0x51ec58

_ZN4cell4fios9scheduler23createSchedulerForMediaEPNS0_5mediaEPKNS0_14scheduler_attrE:   # 0x51ef8c, 0x220 bytes
  051ef8c  stdu 1, -176(1)
  051ef90  mflr 0
  051ef94  std 29, 152(1)
  051ef98  std 31, 168(1)
  051ef9c  std 28, 144(1)
  051efa0  std 30, 160(1)
  051efa4  std 0, 192(1)
  051efa8  mr 31, 4
  051efac  mr 29, 3
  051efb0  bl 0x518fcc
  051efb4  nop
  051efb8  clrlwi 3, 3, 24
  051efbc  cmpwi 7, 3, 0
  051efc0  bf 30, 0x51eff8
  051efc4  lwz 3, -30644(2)
  051efc8  li 29, 0
  051efcc  bl 0x52cbd8
  051efd0  nop
  051efd4  ld 0, 192(1)
  051efd8  clrldi 3, 29, 32
  051efdc  ld 28, 144(1)
  051efe0  ld 29, 152(1)
  051efe4  mtlr 0
  051efe8  ld 30, 160(1)
  051efec  ld 31, 168(1)
  051eff0  addi 1, 1, 176
  051eff4  blr
  051eff8  clrldi 28, 29, 32
  051effc  mr 3, 28
  051f000  bl 0x604710
  051f004  nop
  051f008  clrlwi 3, 3, 24
  051f00c  cmpwi 7, 3, 0
  051f010  bt- 30, 0x51f02c
  051f014  mr 3, 28
  051f018  bl 0x51a480
  051f01c  nop
  051f020  cmpwi 7, 3, 0
  051f024  mr 29, 3
  051f028  bt 30, 0x51f054
  051f02c  li 29, 0
  051f030  ld 0, 192(1)
  051f034  ld 28, 144(1)
  051f038  clrldi 3, 29, 32
  051f03c  ld 30, 160(1)
  051f040  ld 29, 152(1)
  051f044  mtlr 0
  051f048  ld 31, 168(1)
  051f04c  addi 1, 1, 176
  051f050  blr
  051f054  mr 3, 28
  051f058  bl 0x51b070
  051f05c  nop
  051f060  cmpwi 7, 31, 0
  051f064  li 11, 0
  051f068  li 0, 128
  051f06c  li 9, 64
  051f070  stw 29, 112(1)
  051f074  stw 0, 116(1)
  051f078  stw 9, 120(1)
  051f07c  std 11, 136(1)
  051f080  std 11, 128(1)
  051f084  bt 30, 0x51f1a0
  051f088  ld 0, 0(31)
  051f08c  ld 11, 24(31)
  051f090  std 0, 112(1)
  051f094  lwz 3, 112(1)
  051f098  ld 9, 8(31)
  051f09c  cmpwi 7, 3, 0
  051f0a0  ld 0, 16(31)
  051f0a4  std 9, 120(1)
  051f0a8  std 0, 128(1)
  051f0ac  std 11, 136(1)
  051f0b0  bt 30, 0x51f1a0
  051f0b4  clrldi 31, 3, 32
  051f0b8  lis 5, 4112
  051f0bc  mr 3, 31
  051f0c0  ori 5, 5, 259
  051f0c4  li 4, 592
  051f0c8  lwz 11, 0(31)
  051f0cc  li 6, 0
  051f0d0  li 7, 0
  051f0d4  li 29, 0
  051f0d8  lwz 9, 0(11)
  051f0dc  lwz 0, 0(9)
  051f0e0  std 2, 40(1)
  051f0e4  mtctr 0
  051f0e8  lwz 2, 4(9)
  051f0ec  bctrl
  051f0f0  ld 2, 40(1)
  051f0f4  cmpwi 7, 3, 0
  051f0f8  bt 30, 0x51f110
  051f0fc  mr 29, 3
  051f100  mr 4, 28
  051f104  clrldi 3, 3, 32
  051f108  addi 5, 1, 112
  051f10c  bl 0x51e6cc
  051f110  mr 3, 28
  051f114  bl 0x51a480
  051f118  nop
  051f11c  cmpw 7, 29, 3
  051f120  bt 30, 0x51efd4
  051f124  cmpwi 7, 29, 0
  051f128  bt 30, 0x51f18c
  051f12c  clrldi 29, 29, 32
  051f130  mr 3, 29
  051f134  lwz 9, 0(29)
  051f138  lwz 11, 0(9)
  051f13c  lwz 0, 0(11)
  051f140  std 2, 40(1)
  051f144  mtctr 0
  051f148  lwz 2, 4(11)
  051f14c  bctrl
  051f150  ld 2, 40(1)
  051f154  lwz 10, 0(31)
  051f158  lis 5, 4112
  051f15c  mr 3, 31
  051f160  mr 4, 29
  051f164  ori 5, 5, 259
  051f168  lwz 9, 4(10)
  051f16c  li 6, 0
  051f170  li 7, 0
  051f174  lwz 0, 0(9)
  051f178  std 2, 40(1)
  051f17c  mtctr 0
  051f180  lwz 2, 4(9)
  051f184  bctrl
  051f188  ld 2, 40(1)
  051f18c  mr 3, 28
  051f190  li 29, 0
  051f194  bl 0x51a480
  051f198  nop
  051f19c  b 0x51efd4
  051f1a0  lwz 9, -30744(2)
  051f1a4  lwz 3, 8(9)
  051f1a8  b 0x51f0b4

_ZN4cell4fios9scheduler23createSchedulerForMediaEPNS0_5mediaEPNS0_9allocatorEjjjj:   # 0x51f1ac, 0x48 bytes
  051f1ac  stdu 1, -144(1)
  051f1b0  mflr 0
  051f1b4  stw 4, 112(1)
  051f1b8  std 0, 160(1)
  051f1bc  addi 4, 1, 112
  051f1c0  li 0, 0
  051f1c4  stw 5, 208(1)
  051f1c8  std 0, 136(1)
  051f1cc  std 0, 128(1)
  051f1d0  stw 8, 232(1)
  051f1d4  stw 6, 116(1)
  051f1d8  stw 7, 120(1)
  051f1dc  bl 0x51ef8c
  051f1e0  ld 0, 160(1)
  051f1e4  clrldi 3, 3, 32
  051f1e8  addi 1, 1, 144
  051f1ec  mtlr 0
  051f1f0  blr

FUN_0051f1f4:   # 0x51f1f4, 0x1ec bytes
  051f1f4  stdu 1, -192(1)
  051f1f8  mflr 0
  051f1fc  std 31, 160(1)
  051f200  clrldi 31, 3, 32
  051f204  stfd 29, 168(1)
  051f208  std 27, 128(1)
  051f20c  std 28, 136(1)
  051f210  mr 27, 3
  051f214  stfd 30, 176(1)
  051f218  mr 28, 3
  051f21c  stfd 31, 184(1)
  051f220  mr 3, 31
  051f224  std 29, 144(1)
  051f228  std 30, 152(1)
  051f22c  std 0, 208(1)
  051f230  bl 0x604788
  051f234  nop
  051f238  clrlwi 3, 3, 24
  051f23c  cmpwi 7, 3, 0
  051f240  bt- 30, 0x51f3b0
  051f244  lwz 8, -30740(2)
  051f248  mr 10, 27
  051f24c  li 9, 0
  051f250  mr 11, 8
  051f254  lwarx 0, 0, 11
  051f258  cmpw 7, 10, 0
  051f25c  bf 30, 0x51f274
  051f260  stwcx. 9, 0, 8
  051f264  mfocrf 0, 128
  051f268  rlwinm 0, 0, 0, 2, 2
  051f26c  cmpwi 7, 0, 0
  051f270  bt 30, 0x51f254
  051f274  addi 0, 28, 224
  051f278  clrldi 29, 0, 32
  051f27c  mr 3, 29
  051f280  bl 0x52de58
  051f284  nop
  051f288  lwsync
  051f28c  addi 3, 28, 264
  051f290  li 0, 0
  051f294  clrldi 3, 3, 32
  051f298  stw 0, 388(27)
  051f29c  bl 0x52dcf0
  051f2a0  nop
  051f2a4  lwz 9, -30732(2)
  051f2a8  lfs 29, -30640(2)
  051f2ac  addi 0, 28, 288
  051f2b0  lfs 30, -30720(2)
  051f2b4  li 30, -1
  051f2b8  clrldi 28, 0, 32
  051f2bc  rldicr 30, 30, 0, 0
  051f2c0  lfd 31, 0(9)
  051f2c4  b 0x51f2e8
  051f2c8  fctidz 0, 0
  051f2cc  stfd 0, 112(1)
  051f2d0  ld 0, 112(1)
  051f2d4  add 5, 5, 0
  051f2d8  mr 3, 28
  051f2dc  mr 4, 29
  051f2e0  bl 0x52e49c
  051f2e4  nop
  051f2e8  mr 3, 31
  051f2ec  bl 0x51cbc8
  051f2f0  clrlwi 3, 3, 24
  051f2f4  cmpwi 7, 3, 0
  051f2f8  bf 30, 0x51f330
  051f2fc  mftb 5, 268
  051f300  cmpwi 7, 5, 0
  051f304  bt- 30, 0x51f2fc
  051f308  fmul 0, 31, 29
  051f30c  fcmpu 7, 0, 30
  051f310  cror 30, 29, 30
  051f314  bf 30, 0x51f2c8
  051f318  fsub 0, 0, 30
  051f31c  fctidz 0, 0
  051f320  stfd 0, 112(1)
  051f324  ld 0, 112(1)
  051f328  xor 0, 0, 30
  051f32c  b 0x51f2d4
  051f330  mr 3, 29
  051f334  bl 0x52dda0
  051f338  nop
  051f33c  lwz 3, 352(27)
  051f340  bl 0x51b1ec
  051f344  nop
  051f348  mr 3, 31
  051f34c  bl 0x51cba4
  051f350  lwz 11, 0(27)
  051f354  mr 29, 3
  051f358  mr 3, 31
  051f35c  lwz 9, 0(11)
  051f360  lwz 0, 0(9)
  051f364  std 2, 40(1)
  051f368  mtctr 0
  051f36c  lwz 2, 4(9)
  051f370  bctrl
  051f374  ld 2, 40(1)
  051f378  lwz 11, 0(29)
  051f37c  lis 5, 4112
  051f380  clrldi 3, 29, 32
  051f384  mr 4, 31
  051f388  ori 5, 5, 259
  051f38c  lwz 9, 4(11)
  051f390  li 6, 0
  051f394  li 7, 0
  051f398  lwz 0, 0(9)
  051f39c  std 2, 40(1)
  051f3a0  mtctr 0
  051f3a4  lwz 2, 4(9)
  051f3a8  bctrl
  051f3ac  ld 2, 40(1)
  051f3b0  ld 0, 208(1)
  051f3b4  ld 27, 128(1)
  051f3b8  ld 28, 136(1)
  051f3bc  mtlr 0
  051f3c0  ld 29, 144(1)
  051f3c4  ld 30, 152(1)
  051f3c8  ld 31, 160(1)
  051f3cc  lfd 29, 168(1)
  051f3d0  lfd 30, 176(1)
  051f3d4  lfd 31, 184(1)
  051f3d8  addi 1, 1, 192
  051f3dc  blr

FUN_0051f3e0:   # 0x51f3e0, 0x67c bytes
  051f3e0  stdu 1, -224(1)
  051f3e4  mflr 0
  051f3e8  std 24, 144(1)
  051f3ec  std 0, 240(1)
  051f3f0  clrldi 24, 3, 32
  051f3f4  lwz 0, -30708(2)
  051f3f8  std 26, 160(1)
  051f3fc  std 28, 176(1)
  051f400  stfd 30, 208(1)
  051f404  mr 28, 3
  051f408  stfd 31, 216(1)
  051f40c  mr 26, 3
  051f410  std 23, 136(1)
  051f414  std 25, 152(1)
  051f418  std 27, 168(1)
  051f41c  std 29, 184(1)
  051f420  std 30, 192(1)
  051f424  std 31, 200(1)
  051f428  stw 0, 0(3)
  051f42c  mr 3, 24
  051f430  bl 0x604788
  051f434  nop
  051f438  lwz 9, -30636(2)
  051f43c  lbz 0, 0(9)
  051f440  cmpwi 7, 0, 0
  051f444  bt 30, 0x51f858
  051f448  lwz 3, 352(28)
  051f44c  clrldi 3, 3, 32
  051f450  bl 0x604710
  051f454  nop
  051f458  clrlwi 3, 3, 24
  051f45c  cmpwi 7, 3, 0
  051f460  bt- 30, 0x51f478
  051f464  lwz 3, 352(28)
  051f468  bl 0x51a480
  051f46c  nop
  051f470  cmpw 7, 26, 3
  051f474  bt 30, 0x51fa20
  051f478  addi 9, 26, 160
  051f47c  clrldi 23, 9, 32
  051f480  lbz 0, 44(9)
  051f484  cmpwi 7, 0, 0
  051f488  bf 30, 0x51fa10
  051f48c  lwz 31, 504(28)
  051f490  cmpwi 7, 31, 0
  051f494  bt 30, 0x51f4dc
  051f498  mr 3, 24
  051f49c  bl 0x51cba4
  051f4a0  lis 5, 4120
  051f4a4  mr 9, 3
  051f4a8  clrldi 4, 31, 32
  051f4ac  clrldi 3, 3, 32
  051f4b0  ori 5, 5, 259
  051f4b4  li 6, 0
  051f4b8  lwz 11, 0(9)
  051f4bc  li 7, 0
  051f4c0  lwz 9, 4(11)
  051f4c4  lwz 0, 0(9)
  051f4c8  std 2, 40(1)
  051f4cc  mtctr 0
  051f4d0  lwz 2, 4(9)
  051f4d4  bctrl
  051f4d8  ld 2, 40(1)
  051f4dc  lwz 31, 492(28)
  051f4e0  cmpwi 7, 31, 0
  051f4e4  bt 30, 0x51f52c
  051f4e8  mr 3, 24
  051f4ec  bl 0x51cba4
  051f4f0  lis 5, 4119
  051f4f4  mr 9, 3
  051f4f8  clrldi 4, 31, 32
  051f4fc  clrldi 3, 3, 32
  051f500  ori 5, 5, 259
  051f504  li 6, 0
  051f508  lwz 11, 0(9)
  051f50c  li 7, 0
  051f510  lwz 9, 4(11)
  051f514  lwz 0, 0(9)
  051f518  std 2, 40(1)
  051f51c  mtctr 0
  051f520  lwz 2, 4(9)
  051f524  bctrl
  051f528  ld 2, 40(1)
  051f52c  lwz 0, 564(28)
  051f530  addi 25, 26, 392
  051f534  cmpwi 7, 0, 0
  051f538  bt 30, 0x51f654
  051f53c  clrldi 29, 25, 32
  051f540  mr 3, 29
  051f544  bl 0x52de58
  051f548  nop
  051f54c  lwz 30, 376(28)
  051f550  cmpwi 7, 30, 0
  051f554  li 0, 0
  051f558  stb 0, 432(28)
  051f55c  bt 30, 0x51f58c
  051f560  li 31, 0
  051f564  slwi 9, 31, 6
  051f568  lwz 0, 564(28)
  051f56c  addi 31, 31, 1
  051f570  add 9, 9, 0
  051f574  clrldi 9, 9, 32
  051f578  lwz 3, 8(9)
  051f57c  bl 0x52dcf0
  051f580  nop
  051f584  cmpw 7, 30, 31
  051f588  bf 30, 0x51f564
  051f58c  mr 3, 29
  051f590  bl 0x52dda0
  051f594  nop
  051f598  lwz 27, 376(28)
  051f59c  cmpwi 7, 27, 0
  051f5a0  bt 30, 0x51fa54
  051f5a4  li 29, 0
  051f5a8  lwz 30, 564(28)
  051f5ac  slwi 31, 29, 6
  051f5b0  addi 29, 29, 1
  051f5b4  add 9, 31, 30
  051f5b8  clrldi 9, 9, 32
  051f5bc  lwz 0, 4(9)
  051f5c0  cmpwi 7, 0, 0
  051f5c4  clrldi 3, 0, 32
  051f5c8  bt 30, 0x51f608
  051f5cc  bl 0x52ced8
  051f5d0  nop
  051f5d4  lwz 9, 564(28)
  051f5d8  add 9, 31, 9
  051f5dc  clrldi 9, 9, 32
  051f5e0  lwz 3, 4(9)
  051f5e4  bl 0x52d018
  051f5e8  nop
  051f5ec  lwz 9, 564(28)
  051f5f0  add 9, 31, 9
  051f5f4  clrldi 9, 9, 32
  051f5f8  lwz 3, 8(9)
  051f5fc  bl 0x52d0e8
  051f600  nop
  051f604  lwz 30, 564(28)
  051f608  cmpw 7, 27, 29
  051f60c  bf 30, 0x51f5ac
  051f610  mr 3, 24
  051f614  bl 0x51cba4
  051f618  lis 5, 4118
  051f61c  mr 9, 3
  051f620  clrldi 4, 30, 32
  051f624  clrldi 3, 3, 32
  051f628  ori 5, 5, 259
  051f62c  li 6, 0
  051f630  lwz 11, 0(9)
  051f634  li 7, 0
  051f638  lwz 9, 4(11)
  051f63c  lwz 0, 0(9)
  051f640  std 2, 40(1)
  051f644  mtctr 0
  051f648  lwz 2, 4(9)
  051f64c  bctrl
  051f650  ld 2, 40(1)
  051f654  lwz 29, 368(28)
  051f658  cmpwi 7, 29, 0
  051f65c  bt 30, 0x51f6ec
  051f660  lwz 0, 360(28)
  051f664  cmpwi 7, 0, 0
  051f668  bt 30, 0x51f6a8
  051f66c  mr 31, 29
  051f670  li 30, 0
  051f674  clrldi 29, 31, 32
  051f678  addi 30, 30, 1
  051f67c  mr 3, 29
  051f680  addi 31, 31, 88
  051f684  bl 0x604760
  051f688  nop
  051f68c  mr 3, 29
  051f690  bl 0x5390ac
  051f694  nop
  051f698  lwz 0, 360(28)
  051f69c  cmplw 7, 0, 30
  051f6a0  bt 29, 0x51f674
  051f6a4  lwz 29, 368(28)
  051f6a8  mr 3, 24
  051f6ac  bl 0x51cba4
  051f6b0  lis 5, 4116
  051f6b4  mr 9, 3
  051f6b8  clrldi 4, 29, 32
  051f6bc  clrldi 3, 3, 32
  051f6c0  ori 5, 5, 259
  051f6c4  li 6, 0
  051f6c8  lwz 11, 0(9)
  051f6cc  li 7, 0
  051f6d0  lwz 9, 4(11)
  051f6d4  lwz 0, 0(9)
  051f6d8  std 2, 40(1)
  051f6dc  mtctr 0
  051f6e0  lwz 2, 4(9)
  051f6e4  bctrl
  051f6e8  ld 2, 40(1)
  051f6ec  lwz 31, 364(28)
  051f6f0  cmpwi 7, 31, 0
  051f6f4  bt 30, 0x51f774
  051f6f8  lwz 0, 356(28)
  051f6fc  cmpwi 7, 0, 0
  051f700  bt 30, 0x51f730
  051f704  mr 29, 31
  051f708  li 31, 0
  051f70c  clrldi 3, 29, 32
  051f710  addi 31, 31, 1
  051f714  bl 0x604738
  051f718  nop
  051f71c  lwz 0, 356(28)
  051f720  cmplw 7, 0, 31
  051f724  addi 29, 29, 232
  051f728  bt 29, 0x51f70c
  051f72c  lwz 31, 364(28)
  051f730  mr 3, 24
  051f734  bl 0x51cba4
  051f738  lis 5, 4115
  051f73c  mr 9, 3
  051f740  clrldi 4, 31, 32
  051f744  clrldi 3, 3, 32
  051f748  ori 5, 5, 259
  051f74c  li 6, 0
  051f750  lwz 11, 0(9)
  051f754  li 7, 0
  051f758  lwz 9, 4(11)
  051f75c  lwz 0, 0(9)
  051f760  std 2, 40(1)
  051f764  mtctr 0
  051f768  lwz 2, 4(9)
  051f76c  bctrl
  051f770  ld 2, 40(1)
  051f774  clrldi 3, 25, 32
  051f778  bl 0x52df14
  051f77c  nop
  051f780  addi 3, 26, 312
  051f784  clrldi 3, 3, 32
  051f788  bl 0x52df14
  051f78c  nop
  051f790  addi 3, 26, 288
  051f794  clrldi 3, 3, 32
  051f798  bl 0x52d0e8
  051f79c  nop
  051f7a0  addi 3, 26, 264
  051f7a4  clrldi 3, 3, 32
  051f7a8  bl 0x52d0e8
  051f7ac  nop
  051f7b0  addi 3, 26, 224
  051f7b4  clrldi 3, 3, 32
  051f7b8  bl 0x52df14
  051f7bc  nop
  051f7c0  mr 3, 23
  051f7c4  bl 0x52d018
  051f7c8  nop
  051f7cc  addi 3, 26, 120
  051f7d0  clrldi 3, 3, 32
  051f7d4  bl 0x52df14
  051f7d8  nop
  051f7dc  addi 3, 26, 96
  051f7e0  clrldi 3, 3, 32
  051f7e4  bl 0x52e5f8
  051f7e8  nop
  051f7ec  addi 3, 26, 56
  051f7f0  clrldi 3, 3, 32
  051f7f4  bl 0x52df14
  051f7f8  nop
  051f7fc  addi 3, 26, 16
  051f800  clrldi 3, 3, 32
  051f804  bl 0x52df14
  051f808  nop
  051f80c  addi 3, 26, 4
  051f810  clrldi 3, 3, 32
  051f814  bl 0x5107d0
  051f818  nop
  051f81c  ld 0, 240(1)
  051f820  ld 23, 136(1)
  051f824  ld 24, 144(1)
  051f828  mtlr 0
  051f82c  ld 25, 152(1)
  051f830  ld 26, 160(1)
  051f834  ld 27, 168(1)
  051f838  ld 28, 176(1)
  051f83c  ld 29, 184(1)
  051f840  ld 30, 192(1)
  051f844  ld 31, 200(1)
  051f848  lfd 30, 208(1)
  051f84c  lfd 31, 216(1)
  051f850  addi 1, 1, 224
  051f854  blr
  051f858  lwz 3, -30632(2)
  051f85c  bl 0x52cbd8
  051f860  nop
  051f864  lwz 4, 552(28)
  051f868  isync
  051f86c  extsw 4, 4
  051f870  lwz 3, -30628(2)
  051f874  bl 0x52cbd8
  051f878  nop
  051f87c  lwz 4, 560(28)
  051f880  lwz 3, -30624(2)
  051f884  extsw 4, 4
  051f888  bl 0x52cbd8
  051f88c  nop
  051f890  ld 0, 496(28)
  051f894  lwz 9, -30732(2)
  051f898  std 0, 112(1)
  051f89c  lfd 0, 112(1)
  051f8a0  fcfid 13, 0
  051f8a4  lfs 0, -30720(2)
  051f8a8  fmr 12, 0
  051f8ac  lwz 3, -30620(2)
  051f8b0  lfd 30, 0(9)
  051f8b4  fdiv 0, 13, 30
  051f8b8  fcmpu 7, 0, 12
  051f8bc  cror 30, 29, 30
  051f8c0  bt 30, 0x51fa34
  051f8c4  fctidz 0, 0
  051f8c8  stfd 0, 112(1)
  051f8cc  ld 4, 112(1)
  051f8d0  lis 0, 17179
  051f8d4  addis 4, 4, 15
  051f8d8  ori 0, 0, 56962
  051f8dc  addi 4, 4, 16959
  051f8e0  sldi 0, 0, 32
  051f8e4  sradi 9, 4, 63
  051f8e8  oris 0, 0, 55222
  051f8ec  ori 0, 0, 13531
  051f8f0  mulhd 4, 4, 0
  051f8f4  sradi 4, 4, 18
  051f8f8  sub 4, 4, 9
  051f8fc  bl 0x52cbd8
  051f900  nop
  051f904  lwz 3, -30616(2)
  051f908  bl 0x52cbd8
  051f90c  nop
  051f910  lwz 3, 352(28)
  051f914  clrldi 10, 3, 32
  051f918  lwz 0, 140(10)
  051f91c  cmpwi 7, 0, 0
  051f920  bt 30, 0x51f44c
  051f924  lis 29, 8388
  051f928  lwz 27, -30612(2)
  051f92c  li 25, -1
  051f930  lfs 31, -30720(2)
  051f934  ori 29, 29, 39845
  051f938  rldicr 25, 25, 0, 0
  051f93c  sldi 29, 29, 32
  051f940  li 30, 0
  051f944  oris 29, 29, 58195
  051f948  ori 29, 29, 63439
  051f94c  b 0x51f998
  051f950  fctidz 0, 0
  051f954  stfd 0, 112(1)
  051f958  ld 5, 112(1)
  051f95c  addi 5, 5, 999
  051f960  mr 3, 27
  051f964  sradi 0, 5, 63
  051f968  addi 30, 30, 1
  051f96c  mulhd 5, 5, 29
  051f970  sradi 5, 5, 7
  051f974  sub 5, 5, 0
  051f978  bl 0x52cbd8
  051f97c  nop
  051f980  lwz 3, 352(28)
  051f984  clrldi 10, 3, 32
  051f988  addi 9, 31, 1
  051f98c  lwz 0, 140(10)
  051f990  cmplw 7, 0, 9
  051f994  bf 29, 0x51f44c
  051f998  lwz 11, 0(10)
  051f99c  clrldi 4, 30, 32
  051f9a0  mr 3, 10
  051f9a4  mr 31, 30
  051f9a8  lwz 9, 12(11)
  051f9ac  lwz 0, 0(9)
  051f9b0  std 2, 40(1)
  051f9b4  mtctr 0
  051f9b8  lwz 2, 4(9)
  051f9bc  bctrl
  051f9c0  ld 2, 40(1)
  051f9c4  lwz 0, 492(28)
  051f9c8  slwi 9, 30, 3
  051f9cc  clrldi 4, 3, 32
  051f9d0  add 9, 9, 0
  051f9d4  clrldi 9, 9, 32
  051f9d8  ld 0, 0(9)
  051f9dc  std 0, 112(1)
  051f9e0  lfd 13, 112(1)
  051f9e4  fcfid 0, 13
  051f9e8  fdiv 0, 0, 30
  051f9ec  fcmpu 7, 0, 31
  051f9f0  cror 30, 29, 30
  051f9f4  bf 30, 0x51f950
  051f9f8  fsub 0, 0, 31
  051f9fc  fctidz 0, 0
  051fa00  stfd 0, 112(1)
  051fa04  ld 5, 112(1)
  051fa08  xor 5, 5, 25
  051fa0c  b 0x51f95c
  051fa10  mr 3, 23
  051fa14  bl 0x52ced8
  051fa18  nop
  051fa1c  b 0x51f48c
  051fa20  lwz 3, 352(28)
  051fa24  li 4, 0
  051fa28  bl 0x51b318
  051fa2c  nop
  051fa30  b 0x51f478
  051fa34  fsub 0, 0, 12
  051fa38  li 0, -1
  051fa3c  rldicr 0, 0, 0, 0
  051fa40  fctidz 0, 0
  051fa44  stfd 0, 112(1)
  051fa48  ld 4, 112(1)
  051fa4c  xor 4, 4, 0
  051fa50  b 0x51f8d0
  051fa54  lwz 30, 564(28)
  051fa58  b 0x51f610

_ZN4cell4fios9scheduler10allocateFHEjPKc:   # 0x51fa5c, 0x2c8 bytes
  051fa5c  stdu 1, -448(1)
  051fa60  mflr 0
  051fa64  std 24, 384(1)
  051fa68  clrldi 24, 3, 32
  051fa6c  std 27, 408(1)
  051fa70  std 29, 424(1)
  051fa74  mr 27, 3
  051fa78  mr 29, 3
  051fa7c  mr 3, 24
  051fa80  std 25, 392(1)
  051fa84  std 28, 416(1)
  051fa88  std 30, 432(1)
  051fa8c  std 22, 368(1)
  051fa90  std 23, 376(1)
  051fa94  std 26, 400(1)
  051fa98  std 31, 440(1)
  051fa9c  std 0, 464(1)
  051faa0  mr 28, 4
  051faa4  mr 25, 5
  051faa8  bl 0x604788
  051faac  nop
  051fab0  clrlwi 3, 3, 24
  051fab4  li 30, 0
  051fab8  cmpwi 7, 3, 0
  051fabc  bt- 30, 0x51fc28
  051fac0  addi 0, 27, 16
  051fac4  clrldi 22, 0, 32
  051fac8  mr 3, 22
  051facc  bl 0x52de58
  051fad0  nop
  051fad4  rlwinm 9, 28, 0, 24, 24
  051fad8  cmpwi 7, 9, 0
  051fadc  bt 30, 0x51fc64
  051fae0  mr 3, 24
  051fae4  li 30, 0
  051fae8  bl 0x51cba4
  051faec  lwz 11, -30744(2)
  051faf0  mr 9, 3
  051faf4  lis 5, 4144
  051faf8  clrldi 3, 3, 32
  051fafc  ori 5, 5, 3
  051fb00  lhz 4, 12(11)
  051fb04  li 6, 0
  051fb08  lwz 10, 0(9)
  051fb0c  li 7, 0
  051fb10  addi 4, 4, 88
  051fb14  clrldi 4, 4, 32
  051fb18  lwz 9, 0(10)
  051fb1c  lwz 0, 0(9)
  051fb20  std 2, 40(1)
  051fb24  mtctr 0
  051fb28  lwz 2, 4(9)
  051fb2c  bctrl
  051fb30  ld 2, 40(1)
  051fb34  cmpwi 7, 3, 0
  051fb38  bt- 30, 0x51fc1c
  051fb3c  addi 4, 3, 88
  051fb40  clrldi 30, 3, 32
  051fb44  mr 31, 3
  051fb48  clrldi 4, 4, 32
  051fb4c  mr 3, 30
  051fb50  li 23, 1
  051fb54  bl 0x539124
  051fb58  nop
  051fb5c  lwz 10, -30712(2)
  051fb60  addi 11, 31, 16
  051fb64  li 0, 0
  051fb68  clrldi 11, 11, 32
  051fb6c  addi 9, 1, 112
  051fb70  std 0, 72(30)
  051fb74  std 0, 56(30)
  051fb78  std 0, 64(30)
  051fb7c  clrldi 26, 9, 32
  051fb80  lwz 8, 0(10)
  051fb84  clrldi 25, 25, 32
  051fb88  lwz 9, 24(10)
  051fb8c  lwz 7, 4(10)
  051fb90  mr 4, 26
  051fb94  lwz 6, 8(10)
  051fb98  mr 3, 25
  051fb9c  ld 5, 16(10)
  051fba0  stw 9, 24(11)
  051fba4  stw 0, 84(30)
  051fba8  stw 28, 80(30)
  051fbac  stw 8, 0(11)
  051fbb0  stw 7, 4(11)
  051fbb4  stw 6, 8(11)
  051fbb8  std 5, 16(11)
  051fbbc  stw 29, 8(30)
  051fbc0  bl 0x519f24
  051fbc4  nop
  051fbc8  clrlwi 3, 3, 24
  051fbcc  cmpwi 7, 3, 0
  051fbd0  bt- 30, 0x51fc8c
  051fbd4  addi 3, 31, 48
  051fbd8  mr 4, 26
  051fbdc  clrldi 3, 3, 32
  051fbe0  bl 0x51cb08
  051fbe4  nop
  051fbe8  cmpwi 7, 23, 0
  051fbec  bf- 30, 0x51fcbc
  051fbf0  lwz 9, 576(27)
  051fbf4  lwz 0, 584(27)
  051fbf8  addi 9, 9, 1
  051fbfc  cmplw 7, 0, 9
  051fc00  stw 9, 576(27)
  051fc04  bf 28, 0x51fc0c
  051fc08  stw 9, 584(27)
  051fc0c  mr 9, 29
  051fc10  lwzu 0, 572(9)
  051fc14  stw 0, 12(30)
  051fc18  stw 31, 0(9)
  051fc1c  mr 3, 22
  051fc20  bl 0x52dda0
  051fc24  nop
  051fc28  ld 0, 464(1)
  051fc2c  mr 3, 30
  051fc30  ld 22, 368(1)
  051fc34  ld 23, 376(1)
  051fc38  mtlr 0
  051fc3c  ld 24, 384(1)
  051fc40  ld 25, 392(1)
  051fc44  ld 26, 400(1)
  051fc48  ld 27, 408(1)
  051fc4c  ld 28, 416(1)
  051fc50  ld 29, 424(1)
  051fc54  ld 30, 432(1)
  051fc58  ld 31, 440(1)
  051fc5c  addi 1, 1, 448
  051fc60  blr
  051fc64  mr 11, 27
  051fc68  lwzu 31, 568(11)
  051fc6c  cmpwi 7, 31, 0
  051fc70  bt- 30, 0x51fae0
  051fc74  clrldi 30, 31, 32
  051fc78  li 23, 0
  051fc7c  lwz 0, 12(30)
  051fc80  stw 0, 0(11)
  051fc84  stw 9, 12(30)
  051fc88  b 0x51fb5c
  051fc8c  mr 4, 25
  051fc90  lwz 3, -30608(2)
  051fc94  bl 0x52cbd8
  051fc98  nop
  051fc9c  cmpwi 7, 23, 0
  051fca0  bf- 30, 0x51fccc
  051fca4  mr 9, 29
  051fca8  lwzu 0, 568(9)
  051fcac  stw 0, 12(30)
  051fcb0  li 30, 0
  051fcb4  stw 31, 0(9)
  051fcb8  b 0x51fc1c
  051fcbc  lwz 0, 80(30)
  051fcc0  ori 0, 0, 128
  051fcc4  stw 0, 80(30)
  051fcc8  b 0x51fbf0
  051fccc  mr 3, 30
  051fcd0  bl 0x5390ac
  051fcd4  nop
  051fcd8  mr 3, 24
  051fcdc  bl 0x51cba4
  051fce0  lis 5, 4144
  051fce4  mr 9, 3
  051fce8  mr 4, 30
  051fcec  clrldi 3, 3, 32
  051fcf0  ori 5, 5, 3
  051fcf4  li 6, 0
  051fcf8  lwz 11, 0(9)
  051fcfc  li 7, 0
  051fd00  li 30, 0
  051fd04  lwz 9, 4(11)
  051fd08  lwz 0, 0(9)
  051fd0c  std 2, 40(1)
  051fd10  mtctr 0
  051fd14  lwz 2, 4(9)
  051fd18  bctrl
  051fd1c  ld 2, 40(1)
  051fd20  b 0x51fc1c

_ZN4cell4fios9scheduler8deleteOpEPNS0_2opE:   # 0x51fd24, 0x178 bytes
  051fd24  stdu 1, -160(1)
  051fd28  mflr 0
  051fd2c  std 26, 112(1)
  051fd30  clrldi 26, 3, 32
  051fd34  std 30, 144(1)
  051fd38  mr 30, 3
  051fd3c  mr 3, 26
  051fd40  std 28, 128(1)
  051fd44  std 31, 152(1)
  051fd48  std 27, 120(1)
  051fd4c  std 29, 136(1)
  051fd50  std 0, 176(1)
  051fd54  mr 28, 4
  051fd58  mr 31, 4
  051fd5c  bl 0x604788
  051fd60  nop
  051fd64  clrlwi 3, 3, 24
  051fd68  cmpwi 7, 3, 0
  051fd6c  bt- 30, 0x51fe74
  051fd70  clrldi 27, 28, 32
  051fd74  mr 3, 27
  051fd78  bl 0x604738
  051fd7c  nop
  051fd80  addi 8, 28, 48
  051fd84  clrlwi 3, 3, 24
  051fd88  clrldi 11, 8, 32
  051fd8c  cmpwi 7, 3, 0
  051fd90  bt- 30, 0x51fe74
  051fd94  lwz 10, 0(8)
  051fd98  isync
  051fd9c  ori 9, 10, 768
  051fda0  lwarx 0, 0, 11
  051fda4  cmpw 7, 10, 0
  051fda8  bf 30, 0x51fd94
  051fdac  stwcx. 9, 0, 11
  051fdb0  mfocrf 0, 128
  051fdb4  rlwinm 0, 0, 0, 2, 2
  051fdb8  cmpwi 7, 0, 0
  051fdbc  bt 30, 0x51fda0
  051fdc0  addi 0, 30, 120
  051fdc4  clrldi 29, 0, 32
  051fdc8  mr 3, 29
  051fdcc  bl 0x52de58
  051fdd0  nop
  051fdd4  cmpwi 1, 31, 0
  051fdd8  bt- 6, 0x51fe68
  051fddc  mr 11, 30
  051fde0  lwzu 9, 540(11)
  051fde4  cmpw 7, 31, 9
  051fde8  bt 30, 0x51fe14
  051fdec  cmpwi 7, 9, 0
  051fdf0  bf 30, 0x51fdfc
  051fdf4  b 0x51fe68
  051fdf8  bt 26, 0x51fe68
  051fdfc  mr 11, 9
  051fe00  clrldi 9, 9, 32
  051fe04  lwz 9, 0(9)
  051fe08  cmpw 7, 31, 9
  051fe0c  cmpwi 6, 9, 0
  051fe10  bf 30, 0x51fdf8
  051fe14  bt 6, 0x51fe68
  051fe18  clrldi 11, 11, 32
  051fe1c  lwz 9, 0(28)
  051fe20  li 0, 0
  051fe24  mr 3, 29
  051fe28  stw 9, 0(11)
  051fe2c  stw 0, 0(28)
  051fe30  bl 0x52dda0
  051fe34  nop
  051fe38  ld 0, 176(1)
  051fe3c  ld 28, 128(1)
  051fe40  mr 3, 26
  051fe44  ld 29, 136(1)
  051fe48  mr 4, 27
  051fe4c  ld 26, 112(1)
  051fe50  ld 27, 120(1)
  051fe54  mtlr 0
  051fe58  ld 30, 144(1)
  051fe5c  ld 31, 152(1)
  051fe60  addi 1, 1, 160
  051fe64  b 0x51e584
  051fe68  mr 3, 29
  051fe6c  bl 0x52dda0
  051fe70  nop
  051fe74  ld 0, 176(1)
  051fe78  ld 26, 112(1)
  051fe7c  ld 27, 120(1)
  051fe80  mtlr 0
  051fe84  ld 28, 128(1)
  051fe88  ld 29, 136(1)
  051fe8c  ld 30, 144(1)
  051fe90  ld 31, 152(1)
  051fe94  addi 1, 1, 160
  051fe98  blr

_ZN4cell4fios9scheduler10completeOpEPNS0_2opE:   # 0x51fe9c, 0xbc bytes
  051fe9c  lwz 9, -30744(2)
  051fea0  mflr 0
  051fea4  stdu 1, -144(1)
  051fea8  std 0, 160(1)
  051feac  std 28, 112(1)
  051feb0  std 30, 128(1)
  051feb4  lwz 0, 24(9)
  051feb8  mr 30, 3
  051febc  std 31, 136(1)
  051fec0  clrlwi 0, 0, 31
  051fec4  std 29, 120(1)
  051fec8  cmpwi 7, 0, 0
  051fecc  mr 31, 4
  051fed0  clrldi 28, 4, 32
  051fed4  bf- 30, 0x51ff48
  051fed8  addi 29, 30, 120
  051fedc  li 0, 1
  051fee0  clrldi 29, 29, 32
  051fee4  stw 0, 208(31)
  051fee8  mr 3, 29
  051feec  bl 0x52de58
  051fef0  nop
  051fef4  mr 9, 30
  051fef8  lwzu 0, 540(9)
  051fefc  mr 3, 29
  051ff00  stw 0, 0(31)
  051ff04  stw 31, 0(9)
  051ff08  bl 0x52dda0
  051ff0c  nop
  051ff10  mr 3, 28
  051ff14  li 4, 1
  051ff18  li 5, 0
  051ff1c  bl 0x51c390
  051ff20  nop
  051ff24  ld 0, 160(1)
  051ff28  ld 29, 120(1)
  051ff2c  mr 3, 28
  051ff30  ld 30, 128(1)
  051ff34  ld 28, 112(1)
  051ff38  mtlr 0
  051ff3c  ld 31, 136(1)
  051ff40  addi 1, 1, 144
  051ff44  blr
  051ff48  mr 3, 28
  051ff4c  bl 0x526fa8
  051ff50  nop
  051ff54  b 0x51fed8

FUN_0051ff58:   # 0x51ff58, 0x370 bytes
  051ff58  stdu 1, -496(1)
  051ff5c  mflr 0
  051ff60  std 25, 440(1)
  051ff64  std 0, 512(1)
  051ff68  lwz 11, 28(4)
  051ff6c  li 0, -14592
  051ff70  std 26, 448(1)
  051ff74  and 9, 11, 0
  051ff78  std 27, 456(1)
  051ff7c  cmpwi 9, 0
  051ff80  std 29, 472(1)
  051ff84  std 28, 464(1)
  051ff88  std 30, 480(1)
  051ff8c  std 31, 488(1)
  051ff90  mr 29, 4
  051ff94  mr 25, 3
  051ff98  clrldi 27, 4, 32
  051ff9c  mr 26, 3
  051ffa0  bf- 2, 0x5201b0
  051ffa4  lwz 3, 192(4)
  051ffa8  lis 9, 4096
  051ffac  addis 0, 3, 16384
  051ffb0  cmplw 7, 0, 9
  051ffb4  bt 29, 0x520108
  051ffb8  ori 0, 11, 32
  051ffbc  stw 0, 28(29)
  051ffc0  clrldi 3, 3, 32
  051ffc4  bl 0x650644
  051ffc8  ld 2, 40(1)
  051ffcc  cmpwi 7, 3, 0
  051ffd0  bf- 30, 0x5201a0
  051ffd4  mr 28, 29
  051ffd8  lwzu 3, 72(28)
  051ffdc  cmpwi 7, 3, 0
  051ffe0  bt 30, 0x520188
  051ffe4  addi 0, 1, 176
  051ffe8  clrldi 3, 3, 32
  051ffec  clrldi 30, 0, 32
  051fff0  mr 4, 30
  051fff4  bl 0x519f24
  051fff8  nop
  051fffc  clrlwi 3, 3, 24
  0520000  cmpwi 7, 3, 0
  0520004  bt 30, 0x52012c
  0520008  addi 31, 29, 52
  052000c  mr 4, 30
  0520010  clrldi 3, 31, 32
  0520014  bl 0x51cb08
  0520018  nop
  052001c  li 10, 0
  0520020  lwz 11, 0(31)
  0520024  clrldi 9, 11, 32
  0520028  lbz 0, 0(9)
  052002c  cmpwi 7, 0, 0
  0520030  bt 30, 0x520038
  0520034  mr 10, 11
  0520038  lwz 0, 4(31)
  052003c  stw 10, 0(28)
  0520040  stw 0, 4(28)
  0520044  lwz 31, -30744(2)
  0520048  lwz 0, 24(31)
  052004c  clrlwi 0, 0, 31
  0520050  cmpwi 7, 0, 0
  0520054  bf- 30, 0x5201dc
  0520058  lwz 0, 28(29)
  052005c  addi 10, 26, 524
  0520060  rlwinm 0, 0, 0, 24, 24
  0520064  clrldi 9, 10, 32
  0520068  cmpwi 7, 0, 0
  052006c  bf- 30, 0x5201ec
  0520070  lwz 11, 0(10)
  0520074  isync
  0520078  stw 11, 0(29)
  052007c  lwarx 0, 0, 9
  0520080  cmpw 7, 11, 0
  0520084  bf 30, 0x5200a0
  0520088  stwcx. 29, 0, 9
  052008c  mfocrf 0, 128
  0520090  rlwinm 0, 0, 0, 2, 2
  0520094  cmpwi 7, 0, 0
  0520098  bt 30, 0x52007c
  052009c  mr 0, 11
  05200a0  cmpw 7, 11, 0
  05200a4  bf- 30, 0x520070
  05200a8  addi 29, 26, 224
  05200ac  clrldi 29, 29, 32
  05200b0  mr 3, 29
  05200b4  bl 0x52de58
  05200b8  nop
  05200bc  addi 3, 26, 264
  05200c0  clrldi 3, 3, 32
  05200c4  bl 0x52dcf0
  05200c8  nop
  05200cc  mr 3, 29
  05200d0  bl 0x52dda0
  05200d4  nop
  05200d8  ld 0, 512(1)
  05200dc  ld 25, 440(1)
  05200e0  mr 3, 27
  05200e4  ld 26, 448(1)
  05200e8  ld 27, 456(1)
  05200ec  mtlr 0
  05200f0  ld 28, 464(1)
  05200f4  ld 29, 472(1)
  05200f8  ld 30, 480(1)
  05200fc  ld 31, 488(1)
  0520100  addi 1, 1, 496
  0520104  blr
  0520108  lis 0, -8193
  052010c  li 9, 1
  0520110  ori 0, 0, 65535
  0520114  cmplw 7, 3, 0
  0520118  bt 29, 0x520120
  052011c  li 9, 0
  0520120  cmpwi 7, 9, 0
  0520124  bt+ 30, 0x51ffc0
  0520128  b 0x51ffb8
  052012c  lwz 3, -30604(2)
  0520130  lwz 4, 0(28)
  0520134  bl 0x52cbd8
  0520138  nop
  052013c  lis 0, -32767
  0520140  ori 0, 0, 1797
  0520144  mr 4, 27
  0520148  clrldi 3, 26, 32
  052014c  stw 0, 68(29)
  0520150  bl 0x51fe9c
  0520154  clrldi 27, 3, 32
  0520158  ld 0, 512(1)
  052015c  mr 3, 27
  0520160  ld 25, 440(1)
  0520164  ld 26, 448(1)
  0520168  mtlr 0
  052016c  ld 27, 456(1)
  0520170  ld 28, 464(1)
  0520174  ld 29, 472(1)
  0520178  ld 30, 480(1)
  052017c  ld 31, 488(1)
  0520180  addi 1, 1, 496
  0520184  blr
  0520188  addi 3, 29, 52
  052018c  li 4, 0
  0520190  clrldi 3, 3, 32
  0520194  bl 0x51cb08
  0520198  nop
  052019c  b 0x520044
  05201a0  lwz 0, 28(29)
  05201a4  ori 0, 0, 64
  05201a8  stw 0, 28(29)
  05201ac  b 0x51ffd4
  05201b0  li 10, 14591
  05201b4  lis 0, -32767
  05201b8  and 9, 11, 10
  05201bc  ori 0, 0, 1799
  05201c0  mr 4, 27
  05201c4  clrldi 3, 3, 32
  05201c8  stw 0, 68(29)
  05201cc  stw 9, 28(29)
  05201d0  bl 0x51fe9c
  05201d4  clrldi 27, 3, 32
  05201d8  b 0x520158
  05201dc  mr 3, 27
  05201e0  bl 0x527584
  05201e4  nop
  05201e8  b 0x520058
  05201ec  addi 11, 29, 64
  05201f0  li 0, 144
  05201f4  vxor 0, 0, 0
  05201f8  li 10, 128
  05201fc  lwz 8, 0(11)
  0520200  stvx 0, 1, 0
  0520204  li 0, 160
  0520208  addi 9, 8, -10
  052020c  sth 10, 152(1)
  0520210  cmplwi 7, 9, 1
  0520214  stvx 0, 1, 10
  0520218  li 9, 112
  052021c  stvx 0, 1, 0
  0520220  stw 11, 148(1)
  0520224  stvx 0, 1, 9
  0520228  stw 29, 124(1)
  052022c  bf 29, 0x52029c
  0520230  cmpwi 7, 8, 6
  0520234  bt 30, 0x52029c
  0520238  cmpwi 7, 8, 7
  052023c  bt 30, 0x52029c
  0520240  cmpwi 7, 8, 17
  0520244  bt 30, 0x52029c
  0520248  lwz 0, 24(31)
  052024c  clrlwi 0, 0, 31
  0520250  cmpwi 7, 0, 0
  0520254  bf- 30, 0x5202b8
  0520258  lwz 10, 352(25)
  052025c  addi 4, 1, 112
  0520260  clrldi 29, 26, 32
  0520264  mr 3, 10
  0520268  lwz 9, 0(10)
  052026c  lwz 11, 20(9)
  0520270  lwz 0, 0(11)
  0520274  std 2, 40(1)
  0520278  mtctr 0
  052027c  lwz 2, 4(11)
  0520280  bctrl
  0520284  ld 2, 40(1)
  0520288  mr 4, 27
  052028c  mr 3, 29
  0520290  bl 0x51fe9c
  0520294  clrldi 27, 3, 32
  0520298  b 0x520158
  052029c  lwz 0, 28(29)
  05202a0  li 10, 12542
  05202a4  lhz 9, 148(29)
  05202a8  and 0, 0, 10
  05202ac  or 0, 0, 9
  05202b0  sth 0, 148(29)
  05202b4  b 0x520248
  05202b8  mr 3, 27
  05202bc  bl 0x52757c
  05202c0  nop
  05202c4  b 0x520258

_ZN4cell4fios9scheduler7loadPRXEPKNS0_8opattr_tEPKcjyP28sys_prx_load_module_option_tPi:   # 0x5202c8, 0x1a4 bytes
  05202c8  stdu 1, -192(1)
  05202cc  mflr 0
  05202d0  std 26, 144(1)
  05202d4  mr 26, 4
  05202d8  clrldi 4, 4, 32
  05202dc  std 22, 112(1)
  05202e0  std 23, 120(1)
  05202e4  std 24, 128(1)
  05202e8  std 25, 136(1)
  05202ec  std 27, 152(1)
  05202f0  std 28, 160(1)
  05202f4  std 30, 176(1)
  05202f8  std 31, 184(1)
  05202fc  std 29, 168(1)
  0520300  std 0, 208(1)
  0520304  mr 27, 3
  0520308  mr 28, 5
  052030c  mr 25, 9
  0520310  mr 22, 7
  0520314  mr 24, 6
  0520318  mr 23, 8
  052031c  bl 0x51cfd8
  0520320  mr 31, 3
  0520324  mr 30, 3
  0520328  cmpwi 7, 31, 0
  052032c  cmpwi 1, 26, 0
  0520330  li 3, 0
  0520334  bt- 30, 0x52042c
  0520338  lis 10, -32767
  052033c  mr 3, 27
  0520340  ori 10, 10, 1799
  0520344  clrldi 4, 31, 32
  0520348  cmpwi 6, 28, 0
  052034c  bt 6, 0x520364
  0520350  lwz 0, 20(26)
  0520354  li 9, -2177
  0520358  and 8, 0, 9
  052035c  cmpwi 8, 0
  0520360  bf- 2, 0x520464
  0520364  cmpwi 7, 25, 0
  0520368  bt 26, 0x5203f0
  052036c  bt 30, 0x5203f0
  0520370  mr 29, 30
  0520374  clrldi 3, 28, 32
  0520378  stwu 28, 72(29)
  052037c  bl 0x51c8d4
  0520380  nop
  0520384  li 0, 19
  0520388  ld 26, 144(1)
  052038c  stw 3, 4(29)
  0520390  stw 0, 64(31)
  0520394  li 0, 1
  0520398  ld 28, 160(1)
  052039c  clrldi 9, 24, 32
  05203a0  ld 29, 168(1)
  05203a4  clrldi 11, 23, 32
  05203a8  ld 24, 128(1)
  05203ac  stw 0, 208(31)
  05203b0  ld 0, 208(1)
  05203b4  clrldi 4, 30, 32
  05203b8  std 22, 128(31)
  05203bc  stw 25, 144(31)
  05203c0  mtlr 0
  05203c4  mr 3, 27
  05203c8  ld 22, 112(1)
  05203cc  std 9, 112(31)
  05203d0  std 11, 136(31)
  05203d4  ld 23, 120(1)
  05203d8  ld 25, 136(1)
  05203dc  ld 27, 152(1)
  05203e0  ld 30, 176(1)
  05203e4  ld 31, 184(1)
  05203e8  addi 1, 1, 192
  05203ec  b 0x51ff58
  05203f0  stw 10, 68(31)
  05203f4  ld 0, 208(1)
  05203f8  ld 22, 112(1)
  05203fc  ld 23, 120(1)
  0520400  mtlr 0
  0520404  ld 24, 128(1)
  0520408  ld 25, 136(1)
  052040c  ld 26, 144(1)
  0520410  ld 27, 152(1)
  0520414  ld 28, 160(1)
  0520418  ld 29, 168(1)
  052041c  ld 30, 176(1)
  0520420  ld 31, 184(1)
  0520424  addi 1, 1, 192
  0520428  b 0x51fe9c
  052042c  ld 0, 208(1)
  0520430  ld 22, 112(1)
  0520434  ld 23, 120(1)
  0520438  mtlr 0
  052043c  ld 24, 128(1)
  0520440  ld 25, 136(1)
  0520444  ld 26, 144(1)
  0520448  ld 27, 152(1)
  052044c  ld 28, 160(1)
  0520450  ld 29, 168(1)
  0520454  ld 30, 176(1)
  0520458  ld 31, 184(1)
  052045c  addi 1, 1, 192
  0520460  blr
  0520464  stw 10, 68(31)
  0520468  b 0x5203f4

_ZN4cell4fios9scheduler12loadSPUImageEPKNS0_8opattr_tEPKcP13sys_spu_image:   # 0x52046c, 0x148 bytes
  052046c  stdu 1, -160(1)
  0520470  mflr 0
  0520474  std 27, 120(1)
  0520478  mr 27, 4
  052047c  clrldi 4, 4, 32
  0520480  std 26, 112(1)
  0520484  std 28, 128(1)
  0520488  std 30, 144(1)
  052048c  std 31, 152(1)
  0520490  std 29, 136(1)
  0520494  std 0, 176(1)
  0520498  mr 28, 3
  052049c  mr 31, 5
  05204a0  mr 26, 6
  05204a4  bl 0x51cfd8
  05204a8  mr 30, 3
  05204ac  mr 11, 3
  05204b0  cmpwi 7, 30, 0
  05204b4  cmpwi 1, 27, 0
  05204b8  li 3, 0
  05204bc  bt- 30, 0x520584
  05204c0  lis 8, -32767
  05204c4  mr 3, 28
  05204c8  ori 8, 8, 1799
  05204cc  clrldi 4, 30, 32
  05204d0  cmpwi 6, 31, 0
  05204d4  bt 6, 0x5204ec
  05204d8  lwz 0, 20(27)
  05204dc  li 9, -2177
  05204e0  and 7, 0, 9
  05204e4  cmpwi 7, 0
  05204e8  bf- 2, 0x5205ac
  05204ec  cmpwi 7, 26, 0
  05204f0  bt 26, 0x520558
  05204f4  clrldi 27, 11, 32
  05204f8  bt 30, 0x520558
  05204fc  mr 29, 11
  0520500  clrldi 3, 31, 32
  0520504  stw 26, 144(30)
  0520508  stwu 31, 72(29)
  052050c  bl 0x51c8d4
  0520510  nop
  0520514  li 0, 18
  0520518  ld 26, 112(1)
  052051c  li 9, 1
  0520520  ld 31, 152(1)
  0520524  stw 3, 4(29)
  0520528  stw 0, 64(30)
  052052c  ld 0, 176(1)
  0520530  mr 4, 27
  0520534  mr 3, 28
  0520538  ld 27, 120(1)
  052053c  stw 9, 208(30)
  0520540  mtlr 0
  0520544  ld 28, 128(1)
  0520548  ld 29, 136(1)
  052054c  ld 30, 144(1)
  0520550  addi 1, 1, 160
  0520554  b 0x51ff58
  0520558  stw 8, 68(30)
  052055c  ld 0, 176(1)
  0520560  ld 26, 112(1)
  0520564  ld 27, 120(1)
  0520568  mtlr 0
  052056c  ld 28, 128(1)
  0520570  ld 29, 136(1)
  0520574  ld 30, 144(1)
  0520578  ld 31, 152(1)
  052057c  addi 1, 1, 160
  0520580  b 0x51fe9c
  0520584  ld 0, 176(1)
  0520588  ld 26, 112(1)
  052058c  ld 27, 120(1)
  0520590  mtlr 0
  0520594  ld 28, 128(1)
  0520598  ld 29, 136(1)
  052059c  ld 30, 144(1)
  05205a0  ld 31, 152(1)
  05205a4  addi 1, 1, 160
  05205a8  blr
  05205ac  stw 8, 68(30)
  05205b0  b 0x52055c

_ZN4cell4fios9scheduler8syncFileEPKNS0_8opattr_tEPNS0_10filehandleE:   # 0x5205b4, 0x1ec bytes
  05205b4  stdu 1, -176(1)
  05205b8  mflr 0
  05205bc  std 26, 128(1)
  05205c0  clrldi 26, 3, 32
  05205c4  std 29, 152(1)
  05205c8  mr 29, 3
  05205cc  mr 3, 26
  05205d0  std 27, 136(1)
  05205d4  std 28, 144(1)
  05205d8  std 30, 160(1)
  05205dc  std 31, 168(1)
  05205e0  std 25, 120(1)
  05205e4  std 0, 192(1)
  05205e8  mr 30, 5
  05205ec  mr 28, 5
  05205f0  bl 0x51cfd8
  05205f4  cmpwi 7, 3, 0
  05205f8  mr 27, 3
  05205fc  mr 31, 3
  0520600  bt- 30, 0x520770
  0520604  clrldi 3, 30, 32
  0520608  bl 0x604760
  052060c  nop
  0520610  clrlwi 3, 3, 24
  0520614  cmpwi 7, 3, 0
  0520618  bt- 30, 0x52075c
  052061c  lwz 0, 8(30)
  0520620  cmpw 7, 0, 29
  0520624  bf- 30, 0x52075c
  0520628  lwz 11, -30712(2)
  052062c  mr 9, 30
  0520630  lwzu 6, 16(9)
  0520634  lwz 25, 24(9)
  0520638  lwz 0, 0(11)
  052063c  lwz 5, 4(9)
  0520640  cmpw 7, 0, 6
  0520644  lwz 29, 8(9)
  0520648  ld 12, 16(9)
  052064c  bt 30, 0x5206f0
  0520650  lwz 0, 80(30)
  0520654  rlwinm 0, 0, 0, 30, 30
  0520658  cmpwi 7, 0, 0
  052065c  bt 30, 0x520720
  0520660  mr 7, 28
  0520664  li 0, 12
  0520668  lwzu 8, 48(7)
  052066c  li 9, 1
  0520670  clrldi 11, 8, 32
  0520674  stw 0, 64(27)
  0520678  stw 9, 208(27)
  052067c  addi 10, 31, 72
  0520680  lbz 0, 0(11)
  0520684  li 11, 0
  0520688  cmpwi 7, 0, 0
  052068c  bt 30, 0x520694
  0520690  mr 11, 8
  0520694  mr 9, 31
  0520698  lwz 0, 4(7)
  052069c  stw 28, 160(27)
  05206a0  stw 0, 4(10)
  05206a4  ld 0, 192(1)
  05206a8  mr 3, 26
  05206ac  clrldi 4, 31, 32
  05206b0  ld 26, 128(1)
  05206b4  stwu 6, 80(9)
  05206b8  mtlr 0
  05206bc  stw 25, 24(9)
  05206c0  stw 29, 8(9)
  05206c4  ld 25, 120(1)
  05206c8  ld 27, 136(1)
  05206cc  ld 28, 144(1)
  05206d0  ld 29, 152(1)
  05206d4  ld 30, 160(1)
  05206d8  ld 31, 168(1)
  05206dc  addi 1, 1, 176
  05206e0  stw 11, 0(10)
  05206e4  stw 5, 4(9)
  05206e8  std 12, 16(9)
  05206ec  b 0x51ff58
  05206f0  lwz 0, 4(11)
  05206f4  cmpw 7, 0, 5
  05206f8  bf 30, 0x520650
  05206fc  lwz 0, 8(11)
  0520700  cmpw 7, 0, 29
  0520704  bf 30, 0x520650
  0520708  ld 0, 16(11)
  052070c  cmpd 7, 0, 12
  0520710  bf 30, 0x520650
  0520714  lwz 0, 24(11)
  0520718  cmpw 7, 0, 25
  052071c  bf 30, 0x520650
  0520720  mr 3, 26
  0520724  clrldi 4, 31, 32
  0520728  li 0, 0
  052072c  stw 0, 68(27)
  0520730  ld 0, 192(1)
  0520734  ld 25, 120(1)
  0520738  ld 26, 128(1)
  052073c  mtlr 0
  0520740  ld 27, 136(1)
  0520744  ld 28, 144(1)
  0520748  ld 29, 152(1)
  052074c  ld 30, 160(1)
  0520750  ld 31, 168(1)
  0520754  addi 1, 1, 176
  0520758  b 0x51fe9c
  052075c  lis 0, -32767
  0520760  mr 3, 26
  0520764  ori 0, 0, 1798
  0520768  clrldi 4, 31, 32
  052076c  b 0x52072c
  0520770  ld 0, 192(1)
  0520774  li 3, 0
  0520778  ld 25, 120(1)
  052077c  ld 26, 128(1)
  0520780  mtlr 0
  0520784  ld 27, 136(1)
  0520788  ld 28, 144(1)
  052078c  ld 29, 152(1)
  0520790  ld 30, 160(1)
  0520794  ld 31, 168(1)
  0520798  addi 1, 1, 176
  052079c  blr

_ZN4cell4fios9scheduler8openFileEPKNS0_8opattr_tEPKcjPPNS0_10filehandleE:   # 0x5207a0, 0x288 bytes
  05207a0  mfcr 12
  05207a4  cmpwi 4, 7, 0
  05207a8  stdu 1, -192(1)
  05207ac  std 22, 112(1)
  05207b0  std 23, 120(1)
  05207b4  std 24, 128(1)
  05207b8  std 25, 136(1)
  05207bc  std 28, 160(1)
  05207c0  std 30, 176(1)
  05207c4  std 31, 184(1)
  05207c8  std 26, 144(1)
  05207cc  std 27, 152(1)
  05207d0  std 29, 168(1)
  05207d4  mr 24, 7
  05207d8  mr 23, 4
  05207dc  mr 22, 7
  05207e0  mr 31, 5
  05207e4  mr 30, 6
  05207e8  mr 28, 4
  05207ec  mr 25, 5
  05207f0  stw 12, 200(1)
  05207f4  mflr 0
  05207f8  std 0, 208(1)
  05207fc  bt- 18, 0x520808
  0520800  li 0, 0
  0520804  stw 0, 0(7)
  0520808  clrldi 26, 3, 32
  052080c  clrldi 4, 28, 32
  0520810  mr 3, 26
  0520814  bl 0x51cfd8
  0520818  cmpwi 7, 3, 0
  052081c  mr 27, 3
  0520820  mr 29, 3
  0520824  bt- 30, 0x5209a4
  0520828  bt- 18, 0x520940
  052082c  cmpwi 7, 25, 0
  0520830  bt- 30, 0x520994
  0520834  lbz 0, 0(31)
  0520838  addic. 9, 0, -1
  052083c  bt- 0, 0x520994
  0520840  cmpwi 7, 30, 0
  0520844  bt- 30, 0x520940
  0520848  cmpwi 4, 28, 0
  052084c  bt 18, 0x520864
  0520850  lwz 0, 20(23)
  0520854  li 9, -2177
  0520858  and 11, 0, 9
  052085c  cmpwi 11, 0
  0520860  bf- 2, 0x520940
  0520864  rlwinm 0, 30, 0, 27, 29
  0520868  cmpwi 7, 0, 0
  052086c  bf 30, 0x520934
  0520870  rlwinm 3, 30, 0, 22, 23
  0520874  cmpwi 7, 3, 0
  0520878  bf- 30, 0x5209e8
  052087c  clrldi 28, 25, 32
  0520880  mr 3, 26
  0520884  clrldi 4, 30, 32
  0520888  mr 5, 28
  052088c  bl 0x51fa5c
  0520890  lis 0, -32767
  0520894  mr 31, 3
  0520898  ori 0, 0, 1802
  052089c  cmpwi 7, 31, 0
  05208a0  mr 3, 26
  05208a4  stw 31, 0(24)
  05208a8  bt- 30, 0x52094c
  05208ac  mr 3, 28
  05208b0  mr 28, 29
  05208b4  li 0, 4
  05208b8  li 9, 7
  05208bc  std 0, 168(27)
  05208c0  li 0, 9
  05208c4  stwu 25, 72(28)
  05208c8  stw 22, 192(27)
  05208cc  stw 0, 64(27)
  05208d0  sth 30, 148(27)
  05208d4  stw 9, 208(27)
  05208d8  clrldi 29, 29, 32
  05208dc  bl 0x51c8d4
  05208e0  nop
  05208e4  ld 0, 208(1)
  05208e8  stw 3, 4(28)
  05208ec  stw 31, 160(27)
  05208f0  mtlr 0
  05208f4  lwz 12, 200(1)
  05208f8  mr 4, 29
  05208fc  mr 3, 26
  0520900  ld 22, 112(1)
  0520904  ld 23, 120(1)
  0520908  mtocrf 8, 12
  052090c  ld 24, 128(1)
  0520910  ld 25, 136(1)
  0520914  ld 26, 144(1)
  0520918  ld 27, 152(1)
  052091c  ld 28, 160(1)
  0520920  ld 29, 168(1)
  0520924  ld 30, 176(1)
  0520928  ld 31, 184(1)
  052092c  addi 1, 1, 192
  0520930  b 0x51ff58
  0520934  rldicl 0, 30, 63, 63
  0520938  cmpdi 7, 0, 0
  052093c  bf+ 30, 0x520870
  0520940  lis 0, -32767
  0520944  mr 3, 26
  0520948  ori 0, 0, 1799
  052094c  stw 0, 68(27)
  0520950  ld 0, 208(1)
  0520954  clrldi 4, 29, 32
  0520958  lwz 12, 200(1)
  052095c  ld 22, 112(1)
  0520960  mtlr 0
  0520964  ld 23, 120(1)
  0520968  mtocrf 8, 12
  052096c  ld 24, 128(1)
  0520970  ld 25, 136(1)
  0520974  ld 26, 144(1)
  0520978  ld 27, 152(1)
  052097c  ld 28, 160(1)
  0520980  ld 29, 168(1)
  0520984  ld 30, 176(1)
  0520988  ld 31, 184(1)
  052098c  addi 1, 1, 192
  0520990  b 0x51fe9c
  0520994  lis 0, -32767
  0520998  mr 3, 26
  052099c  ori 0, 0, 1797
  05209a0  b 0x52094c
  05209a4  ld 0, 208(1)
  05209a8  li 3, 0
  05209ac  lwz 12, 200(1)
  05209b0  ld 22, 112(1)
  05209b4  mtlr 0
  05209b8  ld 23, 120(1)
  05209bc  mtocrf 8, 12
  05209c0  ld 24, 128(1)
  05209c4  ld 25, 136(1)
  05209c8  ld 26, 144(1)
  05209cc  ld 27, 152(1)
  05209d0  ld 28, 160(1)
  05209d4  ld 29, 168(1)
  05209d8  ld 30, 176(1)
  05209dc  ld 31, 184(1)
  05209e0  addi 1, 1, 192
  05209e4  blr
  05209e8  li 0, -898
  05209ec  and 9, 30, 0
  05209f0  cmpwi 9, 0
  05209f4  bf 2, 0x520940
  05209f8  rlwinm 3, 3, 0, 22, 23
  05209fc  bl 0x51cb74
  0520a00  cmpwi 7, 3, 1
  0520a04  bt 29, 0x520940
  0520a08  rlwinm 0, 30, 0, 23, 23
  0520a0c  cmpwi 7, 0, 0
  0520a10  bt 30, 0x52087c
  0520a14  bt 18, 0x520940
  0520a18  lwz 0, 32(23)
  0520a1c  cmpwi 7, 0, 0
  0520a20  bf 30, 0x52087c
  0520a24  b 0x520940

_ZN4cell4fios9scheduler13readDirectoryEPKNS0_8opattr_tEPKcxPNS0_10direntry_tE:   # 0x520a28, 0x1b0 bytes
  0520a28  stdu 1, -192(1)
  0520a2c  mflr 0
  0520a30  std 23, 120(1)
  0520a34  mr 23, 4
  0520a38  clrldi 4, 4, 32
  0520a3c  std 25, 136(1)
  0520a40  std 27, 152(1)
  0520a44  std 28, 160(1)
  0520a48  std 29, 168(1)
  0520a4c  std 30, 176(1)
  0520a50  std 31, 184(1)
  0520a54  std 24, 128(1)
  0520a58  std 26, 144(1)
  0520a5c  std 0, 208(1)
  0520a60  mr 25, 3
  0520a64  mr 28, 5
  0520a68  mr 27, 6
  0520a6c  mr 29, 7
  0520a70  bl 0x51cfd8
  0520a74  cmpwi 7, 3, 0
  0520a78  mr 31, 3
  0520a7c  mr 30, 3
  0520a80  bt- 30, 0x520ba0
  0520a84  stw 29, 192(31)
  0520a88  stw 29, 144(31)
  0520a8c  mr 29, 31
  0520a90  li 11, 288
  0520a94  li 0, 1
  0520a98  li 9, 5
  0520a9c  clrldi 3, 28, 32
  0520aa0  stwu 28, 72(29)
  0520aa4  std 11, 168(31)
  0520aa8  stw 0, 208(31)
  0520aac  stw 9, 64(31)
  0520ab0  std 11, 128(31)
  0520ab4  std 27, 112(31)
  0520ab8  std 27, 184(31)
  0520abc  bl 0x51c8d4
  0520ac0  nop
  0520ac4  cmpwi 7, 28, 0
  0520ac8  stw 3, 4(29)
  0520acc  bt- 30, 0x520b90
  0520ad0  lbz 0, 0(28)
  0520ad4  addic. 9, 0, -1
  0520ad8  bt- 0, 0x520b90
  0520adc  cmpdi 7, 27, 0
  0520ae0  bt- 28, 0x520b48
  0520ae4  cmpwi 7, 23, 0
  0520ae8  bt 30, 0x520b0c
  0520aec  lwz 0, 20(23)
  0520af0  li 9, -2177
  0520af4  mr 3, 25
  0520af8  and 11, 0, 9
  0520afc  lis 0, -32767
  0520b00  cmpwi 11, 0
  0520b04  ori 0, 0, 1799
  0520b08  bf- 2, 0x520b54
  0520b0c  ld 0, 208(1)
  0520b10  mr 3, 25
  0520b14  clrldi 4, 30, 32
  0520b18  ld 23, 120(1)
  0520b1c  ld 24, 128(1)
  0520b20  mtlr 0
  0520b24  ld 25, 136(1)
  0520b28  ld 26, 144(1)
  0520b2c  ld 27, 152(1)
  0520b30  ld 28, 160(1)
  0520b34  ld 29, 168(1)
  0520b38  ld 30, 176(1)
  0520b3c  ld 31, 184(1)
  0520b40  addi 1, 1, 192
  0520b44  b 0x51ff58
  0520b48  lis 0, -32767
  0520b4c  mr 3, 25
  0520b50  ori 0, 0, 1803
  0520b54  stw 0, 68(31)
  0520b58  ld 0, 208(1)
  0520b5c  clrldi 4, 30, 32
  0520b60  ld 23, 120(1)
  0520b64  ld 24, 128(1)
  0520b68  mtlr 0
  0520b6c  ld 25, 136(1)
  0520b70  ld 26, 144(1)
  0520b74  ld 27, 152(1)
  0520b78  ld 28, 160(1)
  0520b7c  ld 29, 168(1)
  0520b80  ld 30, 176(1)
  0520b84  ld 31, 184(1)
  0520b88  addi 1, 1, 192
  0520b8c  b 0x51fe9c
  0520b90  lis 0, -32767
  0520b94  mr 3, 25
  0520b98  ori 0, 0, 1797
  0520b9c  b 0x520b54
  0520ba0  ld 0, 208(1)
  0520ba4  li 3, 0
  0520ba8  ld 23, 120(1)
  0520bac  ld 24, 128(1)
  0520bb0  mtlr 0
  0520bb4  ld 25, 136(1)
  0520bb8  ld 26, 144(1)
  0520bbc  ld 27, 152(1)
  0520bc0  ld 28, 160(1)
  0520bc4  ld 29, 168(1)
  0520bc8  ld 30, 176(1)
  0520bcc  ld 31, 184(1)
  0520bd0  addi 1, 1, 192
  0520bd4  blr

_ZN4cell4fios9scheduler7resolveEPKNS0_8opattr_tEPNS0_11filerange_tEPNS0_5mediaE:   # 0x520bd8, 0x1a8 bytes
  0520bd8  stdu 1, -176(1)
  0520bdc  mflr 0
  0520be0  std 25, 120(1)
  0520be4  mr 25, 4
  0520be8  clrldi 4, 4, 32
  0520bec  std 24, 112(1)
  0520bf0  std 26, 128(1)
  0520bf4  std 30, 160(1)
  0520bf8  std 31, 168(1)
  0520bfc  mr 30, 5
  0520c00  std 27, 136(1)
  0520c04  std 28, 144(1)
  0520c08  std 29, 152(1)
  0520c0c  std 0, 192(1)
  0520c10  mr 26, 3
  0520c14  mr 24, 6
  0520c18  bl 0x51cfd8
  0520c1c  cmpwi 7, 3, 0
  0520c20  mr 31, 3
  0520c24  mr 10, 3
  0520c28  mr 8, 30
  0520c2c  bt- 30, 0x520d08
  0520c30  li 0, 16
  0520c34  cmpwi 7, 30, 0
  0520c38  lis 11, -32767
  0520c3c  stw 0, 64(31)
  0520c40  li 9, 1
  0520c44  li 0, 272
  0520c48  mr 3, 26
  0520c4c  ori 11, 11, 1799
  0520c50  cmpwi 6, 25, 0
  0520c54  stw 9, 208(31)
  0520c58  std 0, 168(31)
  0520c5c  stw 30, 144(31)
  0520c60  clrldi 28, 31, 32
  0520c64  bt- 30, 0x520d3c
  0520c68  clrldi 3, 30, 32
  0520c6c  li 27, 0
  0520c70  bt 26, 0x520ca4
  0520c74  li 0, -2177
  0520c78  lwz 11, 20(25)
  0520c7c  lis 7, -32767
  0520c80  and 11, 11, 0
  0520c84  mr 4, 28
  0520c88  srawi 0, 11, 31
  0520c8c  ori 7, 7, 1799
  0520c90  xor 9, 0, 11
  0520c94  sub 9, 0, 9
  0520c98  srwi 27, 9, 31
  0520c9c  cmpwi 7, 27, 0
  0520ca0  bf- 30, 0x520d74
  0520ca4  mr 29, 10
  0520ca8  stwu 8, 72(29)
  0520cac  bl 0x51c8d4
  0520cb0  nop
  0520cb4  ld 0, 256(30)
  0520cb8  ld 25, 120(1)
  0520cbc  std 0, 112(31)
  0520cc0  ld 9, 264(30)
  0520cc4  mr 4, 28
  0520cc8  ld 0, 192(1)
  0520ccc  stw 3, 4(29)
  0520cd0  stw 24, 84(31)
  0520cd4  mtlr 0
  0520cd8  stw 27, 80(31)
  0520cdc  mr 3, 26
  0520ce0  ld 24, 112(1)
  0520ce4  std 9, 128(31)
  0520ce8  ld 26, 128(1)
  0520cec  ld 27, 136(1)
  0520cf0  ld 28, 144(1)
  0520cf4  ld 29, 152(1)
  0520cf8  ld 30, 160(1)
  0520cfc  ld 31, 168(1)
  0520d00  addi 1, 1, 176
  0520d04  b 0x51ff58
  0520d08  ld 0, 192(1)
  0520d0c  li 3, 0
  0520d10  ld 24, 112(1)
  0520d14  ld 25, 120(1)
  0520d18  mtlr 0
  0520d1c  ld 26, 128(1)
  0520d20  ld 27, 136(1)
  0520d24  ld 28, 144(1)
  0520d28  ld 29, 152(1)
  0520d2c  ld 30, 160(1)
  0520d30  ld 31, 168(1)
  0520d34  addi 1, 1, 176
  0520d38  blr
  0520d3c  mr 4, 28
  0520d40  stw 11, 68(31)
  0520d44  ld 0, 192(1)
  0520d48  ld 24, 112(1)
  0520d4c  ld 25, 120(1)
  0520d50  mtlr 0
  0520d54  ld 26, 128(1)
  0520d58  ld 27, 136(1)
  0520d5c  ld 28, 144(1)
  0520d60  ld 29, 152(1)
  0520d64  ld 30, 160(1)
  0520d68  ld 31, 168(1)
  0520d6c  addi 1, 1, 176
  0520d70  b 0x51fe9c
  0520d74  mr 3, 26
  0520d78  stw 7, 68(31)
  0520d7c  b 0x520d44

FUN_00520d80:   # 0x520d80, 0xf8 bytes
  0520d80  mr 9, 5
  0520d84  mflr 0
  0520d88  stdu 1, -480(1)
  0520d8c  std 0, 496(1)
  0520d90  addi 0, 1, 152
  0520d94  std 27, 440(1)
  0520d98  std 28, 448(1)
  0520d9c  std 29, 456(1)
  0520da0  std 30, 464(1)
  0520da4  std 31, 472(1)
  0520da8  clrldi 31, 0, 32
  0520dac  lbz 0, 0(9)
  0520db0  mr 30, 3
  0520db4  cmpwi 7, 0, 0
  0520db8  clrldi 29, 4, 32
  0520dbc  li 5, 256
  0520dc0  mr 27, 7
  0520dc4  mr 28, 6
  0520dc8  mr 3, 31
  0520dcc  clrldi 4, 9, 32
  0520dd0  bt- 30, 0x520e70
  0520dd4  bl 0x5193cc
  0520dd8  nop
  0520ddc  li 0, 128
  0520de0  vxor 0, 0, 0
  0520de4  li 9, 0
  0520de8  mr 5, 31
  0520dec  stvx 0, 1, 0
  0520df0  li 0, 112
  0520df4  mr 6, 29
  0520df8  addi 4, 1, 112
  0520dfc  clrldi 3, 30, 32
  0520e00  std 9, 144(1)
  0520e04  stvx 0, 1, 0
  0520e08  std 28, 408(1)
  0520e0c  std 27, 416(1)
  0520e10  bl 0x520bd8
  0520e14  clrldi 3, 3, 32
  0520e18  li 4, 0
  0520e1c  bl 0x51c030
  0520e20  nop
  0520e24  mr 4, 31
  0520e28  cmpwi 7, 3, 0
  0520e2c  mr 3, 29
  0520e30  bf- 30, 0x520e70
  0520e34  ld 5, 408(1)
  0520e38  ld 6, 416(1)
  0520e3c  bl 0x532848
  0520e40  nop
  0520e44  clrlwi 3, 3, 24
  0520e48  ld 0, 496(1)
  0520e4c  extsw 3, 3
  0520e50  ld 27, 440(1)
  0520e54  ld 28, 448(1)
  0520e58  mtlr 0
  0520e5c  ld 29, 456(1)
  0520e60  ld 30, 464(1)
  0520e64  ld 31, 472(1)
  0520e68  addi 1, 1, 480
  0520e6c  blr
  0520e70  li 3, 0
  0520e74  b 0x520e48

_ZN4cell4fios9scheduler12prefetchFileEPKNS0_8opattr_tEPKcxx:   # 0x520e78, 0x24c bytes
  0520e78  stdu 1, -192(1)
  0520e7c  mflr 0
  0520e80  std 23, 120(1)
  0520e84  mr 23, 4
  0520e88  clrldi 4, 4, 32
  0520e8c  std 24, 128(1)
  0520e90  std 25, 136(1)
  0520e94  std 26, 144(1)
  0520e98  std 27, 152(1)
  0520e9c  std 28, 160(1)
  0520ea0  std 30, 176(1)
  0520ea4  std 31, 184(1)
  0520ea8  mr 30, 5
  0520eac  std 29, 168(1)
  0520eb0  std 0, 208(1)
  0520eb4  mr 27, 3
  0520eb8  mr 24, 6
  0520ebc  mr 25, 7
  0520ec0  bl 0x51cfd8
  0520ec4  cmpwi 7, 3, 0
  0520ec8  mr 31, 3
  0520ecc  mr 26, 30
  0520ed0  mr 28, 3
  0520ed4  bt- 30, 0x52108c
  0520ed8  cmpwi 7, 30, 0
  0520edc  bt- 30, 0x52107c
  0520ee0  lbz 0, 0(30)
  0520ee4  addic. 9, 0, -1
  0520ee8  bt- 0, 0x52107c
  0520eec  cmpdi 7, 25, 0
  0520ef0  bt- 28, 0x521034
  0520ef4  cmpdi 7, 24, 0
  0520ef8  bt- 28, 0x521034
  0520efc  cmpwi 7, 23, 0
  0520f00  bt 30, 0x520f20
  0520f04  lwz 4, 20(23)
  0520f08  rlwinm 0, 4, 0, 18, 19
  0520f0c  cmpwi 7, 0, 0
  0520f10  bf 30, 0x521034
  0520f14  rlwinm 0, 4, 0, 28, 29
  0520f18  cmpwi 7, 0, 0
  0520f1c  bf 30, 0x521034
  0520f20  lwz 0, 28(31)
  0520f24  rlwinm 9, 0, 0, 18, 18
  0520f28  rlwinm 0, 0, 0, 19, 19
  0520f2c  addi 9, 9, -1
  0520f30  cmpwi 7, 0, 0
  0520f34  srawi 30, 9, 31
  0520f38  rlwinm 30, 30, 0, 0, 22
  0520f3c  addi 30, 30, 513
  0520f40  bf 30, 0x52102c
  0520f44  clrldi 29, 26, 32
  0520f48  mr 3, 27
  0520f4c  li 4, 1
  0520f50  mr 5, 29
  0520f54  bl 0x51fa5c
  0520f58  lis 0, -32767
  0520f5c  mr 10, 3
  0520f60  ori 0, 0, 1802
  0520f64  cmpwi 7, 10, 0
  0520f68  mr 3, 27
  0520f6c  bt- 30, 0x521040
  0520f70  mr 3, 29
  0520f74  mr 29, 28
  0520f78  li 9, -1
  0520f7c  li 11, 9
  0520f80  clrldi 9, 9, 1
  0520f84  li 0, -128
  0520f88  stw 10, 160(31)
  0520f8c  stb 0, 16(31)
  0520f90  stw 11, 208(31)
  0520f94  stwu 26, 72(29)
  0520f98  std 9, 8(31)
  0520f9c  std 24, 184(31)
  0520fa0  std 25, 168(31)
  0520fa4  stw 11, 64(31)
  0520fa8  std 24, 112(31)
  0520fac  std 25, 128(31)
  0520fb0  bl 0x51c8d4
  0520fb4  nop
  0520fb8  lwz 11, -30712(2)
  0520fbc  ld 23, 120(1)
  0520fc0  mr 9, 28
  0520fc4  ld 24, 128(1)
  0520fc8  stw 3, 4(29)
  0520fcc  sth 30, 148(31)
  0520fd0  lwz 0, 0(11)
  0520fd4  clrldi 4, 28, 32
  0520fd8  lwz 10, 24(11)
  0520fdc  mr 3, 27
  0520fe0  stwu 0, 80(9)
  0520fe4  lwz 8, 4(11)
  0520fe8  ld 0, 208(1)
  0520fec  lwz 7, 8(11)
  0520ff0  ld 6, 16(11)
  0520ff4  mtlr 0
  0520ff8  ld 25, 136(1)
  0520ffc  ld 26, 144(1)
  0521000  ld 27, 152(1)
  0521004  ld 28, 160(1)
  0521008  ld 29, 168(1)
  052100c  ld 30, 176(1)
  0521010  ld 31, 184(1)
  0521014  addi 1, 1, 192
  0521018  stw 10, 24(9)
  052101c  stw 8, 4(9)
  0521020  stw 7, 8(9)
  0521024  std 6, 16(9)
  0521028  b 0x51ff58
  052102c  ori 30, 30, 256
  0521030  b 0x520f44
  0521034  lis 0, -32767
  0521038  mr 3, 27
  052103c  ori 0, 0, 1799
  0521040  stw 0, 68(31)
  0521044  ld 0, 208(1)
  0521048  clrldi 4, 28, 32
  052104c  ld 23, 120(1)
  0521050  ld 24, 128(1)
  0521054  mtlr 0
  0521058  ld 25, 136(1)
  052105c  ld 26, 144(1)
  0521060  ld 27, 152(1)
  0521064  ld 28, 160(1)
  0521068  ld 29, 168(1)
  052106c  ld 30, 176(1)
  0521070  ld 31, 184(1)
  0521074  addi 1, 1, 192
  0521078  b 0x51fe9c
  052107c  lis 0, -32767
  0521080  mr 3, 27
  0521084  ori 0, 0, 1797
  0521088  b 0x521040
  052108c  ld 0, 208(1)
  0521090  li 3, 0
  0521094  ld 23, 120(1)
  0521098  ld 24, 128(1)
  052109c  mtlr 0
  05210a0  ld 25, 136(1)
  05210a4  ld 26, 144(1)
  05210a8  ld 27, 152(1)
  05210ac  ld 28, 160(1)
  05210b0  ld 29, 168(1)
  05210b4  ld 30, 176(1)
  05210b8  ld 31, 184(1)
  05210bc  addi 1, 1, 192
  05210c0  blr

_ZN4cell4fios9scheduler6unlinkEPKNS0_8opattr_tEPKc:   # 0x5210c4, 0x164 bytes
  05210c4  stdu 1, -176(1)
  05210c8  mflr 0
  05210cc  std 24, 112(1)
  05210d0  mr 24, 4
  05210d4  clrldi 4, 4, 32
  05210d8  std 26, 128(1)
  05210dc  std 27, 136(1)
  05210e0  std 30, 160(1)
  05210e4  std 25, 120(1)
  05210e8  mr 30, 5
  05210ec  std 28, 144(1)
  05210f0  std 29, 152(1)
  05210f4  std 31, 168(1)
  05210f8  std 0, 192(1)
  05210fc  mr 26, 3
  0521100  bl 0x51cfd8
  0521104  cmpwi 7, 3, 0
  0521108  mr 27, 3
  052110c  clrldi 3, 30, 32
  0521110  bt- 30, 0x5211ec
  0521114  mr 29, 27
  0521118  li 9, 15
  052111c  li 0, 1
  0521120  stw 9, 64(27)
  0521124  stw 0, 208(27)
  0521128  stwu 30, 72(29)
  052112c  bl 0x51c8d4
  0521130  nop
  0521134  cmpwi 7, 30, 0
  0521138  lis 9, -32767
  052113c  stw 3, 4(29)
  0521140  ori 9, 9, 1797
  0521144  clrldi 4, 27, 32
  0521148  mr 3, 26
  052114c  bt- 30, 0x5211b8
  0521150  lbz 0, 0(30)
  0521154  cmpwi 7, 24, 0
  0521158  addic. 10, 0, -1
  052115c  bt- 0, 0x5211b8
  0521160  mr 3, 26
  0521164  clrldi 4, 27, 32
  0521168  bt 30, 0x521188
  052116c  lwz 0, 20(24)
  0521170  li 9, -2177
  0521174  lis 11, -32767
  0521178  and 10, 0, 9
  052117c  ori 11, 11, 1799
  0521180  cmpwi 10, 0
  0521184  bf- 2, 0x521220
  0521188  ld 0, 192(1)
  052118c  ld 24, 112(1)
  0521190  ld 25, 120(1)
  0521194  mtlr 0
  0521198  ld 26, 128(1)
  052119c  ld 27, 136(1)
  05211a0  ld 28, 144(1)
  05211a4  ld 29, 152(1)
  05211a8  ld 30, 160(1)
  05211ac  ld 31, 168(1)
  05211b0  addi 1, 1, 176
  05211b4  b 0x51ff58
  05211b8  stw 9, 68(27)
  05211bc  ld 0, 192(1)
  05211c0  ld 24, 112(1)
  05211c4  ld 25, 120(1)
  05211c8  mtlr 0
  05211cc  ld 26, 128(1)
  05211d0  ld 27, 136(1)
  05211d4  ld 28, 144(1)
  05211d8  ld 29, 152(1)
  05211dc  ld 30, 160(1)
  05211e0  ld 31, 168(1)
  05211e4  addi 1, 1, 176
  05211e8  b 0x51fe9c
  05211ec  ld 0, 192(1)
  05211f0  li 3, 0
  05211f4  ld 24, 112(1)
  05211f8  ld 25, 120(1)
  05211fc  mtlr 0
  0521200  ld 26, 128(1)
  0521204  ld 27, 136(1)
  0521208  ld 28, 144(1)
  052120c  ld 29, 152(1)
  0521210  ld 30, 160(1)
  0521214  ld 31, 168(1)
  0521218  addi 1, 1, 176
  052121c  blr
  0521220  stw 11, 68(27)
  0521224  b 0x5211bc

_ZN4cell4fios9scheduler15createDirectoryEPKNS0_8opattr_tEPKc:   # 0x521228, 0x164 bytes
  0521228  stdu 1, -176(1)
  052122c  mflr 0
  0521230  std 24, 112(1)
  0521234  mr 24, 4
  0521238  clrldi 4, 4, 32
  052123c  std 26, 128(1)
  0521240  std 27, 136(1)
  0521244  std 30, 160(1)
  0521248  std 25, 120(1)
  052124c  mr 30, 5
  0521250  std 28, 144(1)
  0521254  std 29, 152(1)
  0521258  std 31, 168(1)
  052125c  std 0, 192(1)
  0521260  mr 26, 3
  0521264  bl 0x51cfd8
  0521268  cmpwi 7, 3, 0
  052126c  mr 27, 3
  0521270  clrldi 3, 30, 32
  0521274  bt- 30, 0x521350
  0521278  mr 29, 27
  052127c  li 9, 14
  0521280  li 0, 1
  0521284  stw 9, 64(27)
  0521288  stw 0, 208(27)
  052128c  stwu 30, 72(29)
  0521290  bl 0x51c8d4
  0521294  nop
  0521298  cmpwi 7, 30, 0
  052129c  lis 9, -32767
  05212a0  stw 3, 4(29)
  05212a4  ori 9, 9, 1797
  05212a8  clrldi 4, 27, 32
  05212ac  mr 3, 26
  05212b0  bt- 30, 0x52131c
  05212b4  lbz 0, 0(30)
  05212b8  cmpwi 7, 24, 0
  05212bc  addic. 10, 0, -1
  05212c0  bt- 0, 0x52131c
  05212c4  mr 3, 26
  05212c8  clrldi 4, 27, 32
  05212cc  bt 30, 0x5212ec
  05212d0  lwz 0, 20(24)
  05212d4  li 9, -2177
  05212d8  lis 11, -32767
  05212dc  and 10, 0, 9
  05212e0  ori 11, 11, 1799
  05212e4  cmpwi 10, 0
  05212e8  bf- 2, 0x521384
  05212ec  ld 0, 192(1)
  05212f0  ld 24, 112(1)
  05212f4  ld 25, 120(1)
  05212f8  mtlr 0
  05212fc  ld 26, 128(1)
  0521300  ld 27, 136(1)
  0521304  ld 28, 144(1)
  0521308  ld 29, 152(1)
  052130c  ld 30, 160(1)
  0521310  ld 31, 168(1)
  0521314  addi 1, 1, 176
  0521318  b 0x51ff58
  052131c  stw 9, 68(27)
  0521320  ld 0, 192(1)
  0521324  ld 24, 112(1)
  0521328  ld 25, 120(1)
  052132c  mtlr 0
  0521330  ld 26, 128(1)
  0521334  ld 27, 136(1)
  0521338  ld 28, 144(1)
  052133c  ld 29, 152(1)
  0521340  ld 30, 160(1)
  0521344  ld 31, 168(1)
  0521348  addi 1, 1, 176
  052134c  b 0x51fe9c
  0521350  ld 0, 192(1)
  0521354  li 3, 0
  0521358  ld 24, 112(1)
  052135c  ld 25, 120(1)
  0521360  mtlr 0
  0521364  ld 26, 128(1)
  0521368  ld 27, 136(1)
  052136c  ld 28, 144(1)
  0521370  ld 29, 152(1)
  0521374  ld 30, 160(1)
  0521378  ld 31, 168(1)
  052137c  addi 1, 1, 176
  0521380  blr
  0521384  stw 11, 68(27)
  0521388  b 0x521320

_ZN4cell4fios9scheduler9writeFileEPKNS0_8opattr_tEPKcPKvxx:   # 0x52138c, 0x1f0 bytes
  052138c  stdu 1, -192(1)
  0521390  mflr 0
  0521394  std 22, 112(1)
  0521398  mr 22, 4
  052139c  clrldi 4, 4, 32
  05213a0  std 24, 128(1)
  05213a4  std 25, 136(1)
  05213a8  std 26, 144(1)
  05213ac  std 27, 152(1)
  05213b0  std 28, 160(1)
  05213b4  std 29, 168(1)
  05213b8  std 31, 184(1)
  05213bc  mr 29, 5
  05213c0  std 23, 120(1)
  05213c4  std 30, 176(1)
  05213c8  std 0, 208(1)
  05213cc  mr 25, 3
  05213d0  mr 27, 7
  05213d4  mr 28, 8
  05213d8  mr 24, 6
  05213dc  bl 0x51cfd8
  05213e0  mr 31, 3
  05213e4  clrldi 3, 29, 32
  05213e8  cmpwi 7, 31, 0
  05213ec  clrldi 26, 31, 32
  05213f0  bt- 30, 0x521530
  05213f4  li 9, 1
  05213f8  li 0, 11
  05213fc  stw 9, 208(31)
  0521400  mr 9, 31
  0521404  stw 0, 64(31)
  0521408  stw 24, 192(31)
  052140c  stw 24, 144(31)
  0521410  std 28, 128(31)
  0521414  stwu 29, 72(9)
  0521418  std 28, 168(31)
  052141c  std 27, 112(31)
  0521420  std 27, 184(31)
  0521424  mr 29, 9
  0521428  bl 0x51c8d4
  052142c  nop
  0521430  lwz 11, -30712(2)
  0521434  mr 9, 31
  0521438  cmpdi 7, 28, 0
  052143c  lis 5, -32767
  0521440  stw 3, 4(29)
  0521444  lwz 0, 0(11)
  0521448  ori 5, 5, 1799
  052144c  lwz 10, 24(11)
  0521450  mr 4, 26
  0521454  lwz 8, 4(11)
  0521458  cmpdi 6, 27, 0
  052145c  lwz 7, 8(11)
  0521460  mr 3, 25
  0521464  ld 6, 16(11)
  0521468  stwu 0, 80(9)
  052146c  stw 10, 24(9)
  0521470  stw 8, 4(9)
  0521474  stw 7, 8(9)
  0521478  std 6, 16(9)
  052147c  bt- 28, 0x52156c
  0521480  lis 0, -32767
  0521484  mr 3, 25
  0521488  ori 0, 0, 1799
  052148c  mr 4, 26
  0521490  cmpwi 7, 22, 0
  0521494  bt- 24, 0x521574
  0521498  mr 3, 25
  052149c  mr 4, 26
  05214a0  bt 30, 0x5214bc
  05214a4  lwz 0, 20(22)
  05214a8  lis 9, -32767
  05214ac  rlwinm 11, 0, 0, 18, 19
  05214b0  ori 9, 9, 1799
  05214b4  cmpwi 7, 11, 0
  05214b8  bf 30, 0x5214f4
  05214bc  ld 0, 208(1)
  05214c0  ld 22, 112(1)
  05214c4  ld 23, 120(1)
  05214c8  mtlr 0
  05214cc  ld 24, 128(1)
  05214d0  ld 25, 136(1)
  05214d4  ld 26, 144(1)
  05214d8  ld 27, 152(1)
  05214dc  ld 28, 160(1)
  05214e0  ld 29, 168(1)
  05214e4  ld 30, 176(1)
  05214e8  ld 31, 184(1)
  05214ec  addi 1, 1, 192
  05214f0  b 0x51ff58
  05214f4  stw 9, 68(31)
  05214f8  ld 0, 208(1)
  05214fc  ld 22, 112(1)
  0521500  ld 23, 120(1)
  0521504  mtlr 0
  0521508  ld 24, 128(1)
  052150c  ld 25, 136(1)
  0521510  ld 26, 144(1)
  0521514  ld 27, 152(1)
  0521518  ld 28, 160(1)
  052151c  ld 29, 168(1)
  0521520  ld 30, 176(1)
  0521524  ld 31, 184(1)
  0521528  addi 1, 1, 192
  052152c  b 0x51fe9c
  0521530  ld 0, 208(1)
  0521534  li 3, 0
  0521538  ld 22, 112(1)
  052153c  ld 23, 120(1)
  0521540  mtlr 0
  0521544  ld 24, 128(1)
  0521548  ld 25, 136(1)
  052154c  ld 26, 144(1)
  0521550  ld 27, 152(1)
  0521554  ld 28, 160(1)
  0521558  ld 29, 168(1)
  052155c  ld 30, 176(1)
  0521560  ld 31, 184(1)
  0521564  addi 1, 1, 192
  0521568  blr
  052156c  stw 5, 68(31)
  0521570  b 0x5214f8
  0521574  stw 0, 68(31)
  0521578  b 0x5214f8

_ZN4cell4fios9scheduler8readFileEPKNS0_8opattr_tEPKcPvxx:   # 0x52157c, 0x218 bytes
  052157c  stdu 1, -192(1)
  0521580  mflr 0
  0521584  std 23, 120(1)
  0521588  mr 23, 4
  052158c  clrldi 4, 4, 32
  0521590  std 24, 128(1)
  0521594  std 26, 144(1)
  0521598  std 27, 152(1)
  052159c  std 28, 160(1)
  05215a0  std 29, 168(1)
  05215a4  std 30, 176(1)
  05215a8  std 31, 184(1)
  05215ac  std 22, 112(1)
  05215b0  std 25, 136(1)
  05215b4  std 0, 208(1)
  05215b8  mr 24, 3
  05215bc  mr 28, 5
  05215c0  mr 29, 6
  05215c4  mr 26, 7
  05215c8  mr 27, 8
  05215cc  bl 0x51cfd8
  05215d0  cmpwi 7, 3, 0
  05215d4  mr 31, 3
  05215d8  mr 30, 3
  05215dc  bt- 30, 0x521758
  05215e0  stw 29, 192(31)
  05215e4  stw 29, 144(31)
  05215e8  mr 29, 31
  05215ec  li 0, 10
  05215f0  li 9, 1
  05215f4  clrldi 3, 28, 32
  05215f8  stw 0, 64(31)
  05215fc  stw 9, 208(31)
  0521600  stwu 28, 72(29)
  0521604  std 27, 128(31)
  0521608  std 27, 168(31)
  052160c  std 26, 112(31)
  0521610  std 26, 184(31)
  0521614  bl 0x51c8d4
  0521618  nop
  052161c  lwz 11, -30712(2)
  0521620  mr 9, 31
  0521624  cmpwi 7, 28, 0
  0521628  stw 3, 4(29)
  052162c  lwz 0, 0(11)
  0521630  lwz 10, 24(11)
  0521634  lwz 8, 4(11)
  0521638  lwz 7, 8(11)
  052163c  ld 6, 16(11)
  0521640  stwu 0, 80(9)
  0521644  stw 10, 24(9)
  0521648  stw 8, 4(9)
  052164c  stw 7, 8(9)
  0521650  std 6, 16(9)
  0521654  bt- 30, 0x5216dc
  0521658  lbz 0, 0(28)
  052165c  addic. 9, 0, -1
  0521660  bt- 0, 0x5216dc
  0521664  cmpdi 7, 27, 0
  0521668  bt- 28, 0x5216dc
  052166c  cmpdi 7, 26, 0
  0521670  bt- 28, 0x5216dc
  0521674  cmpwi 7, 23, 0
  0521678  bt 30, 0x52168c
  052167c  lwz 0, 20(23)
  0521680  rlwinm 0, 0, 0, 18, 19
  0521684  cmpwi 7, 0, 0
  0521688  bf 30, 0x5216cc
  052168c  ld 0, 208(1)
  0521690  mr 3, 24
  0521694  clrldi 4, 30, 32
  0521698  ld 22, 112(1)
  052169c  ld 23, 120(1)
  05216a0  mtlr 0
  05216a4  ld 24, 128(1)
  05216a8  ld 25, 136(1)
  05216ac  ld 26, 144(1)
  05216b0  ld 27, 152(1)
  05216b4  ld 28, 160(1)
  05216b8  ld 29, 168(1)
  05216bc  ld 30, 176(1)
  05216c0  ld 31, 184(1)
  05216c4  addi 1, 1, 192
  05216c8  b 0x51ff58
  05216cc  rlwinm 3, 0, 0, 18, 19
  05216d0  bl 0x51cb74
  05216d4  cmpwi 7, 3, 1
  05216d8  bf 29, 0x521728
  05216dc  lis 0, -32767
  05216e0  ld 22, 112(1)
  05216e4  mr 3, 24
  05216e8  ld 23, 120(1)
  05216ec  ori 0, 0, 1799
  05216f0  ld 24, 128(1)
  05216f4  clrldi 4, 30, 32
  05216f8  ld 25, 136(1)
  05216fc  stw 0, 68(31)
  0521700  ld 0, 208(1)
  0521704  ld 26, 144(1)
  0521708  ld 27, 152(1)
  052170c  mtlr 0
  0521710  ld 28, 160(1)
  0521714  ld 29, 168(1)
  0521718  ld 30, 176(1)
  052171c  ld 31, 184(1)
  0521720  addi 1, 1, 192
  0521724  b 0x51fe9c
  0521728  lwz 0, 20(23)
  052172c  rlwinm 0, 0, 0, 19, 19
  0521730  cmpwi 7, 0, 0
  0521734  bf 30, 0x521748
  0521738  lwz 0, 28(31)
  052173c  ori 0, 0, 14
  0521740  stw 0, 28(31)
  0521744  b 0x52168c
  0521748  lwz 0, 32(23)
  052174c  cmpwi 7, 0, 0
  0521750  bf 30, 0x521738
  0521754  b 0x5216dc
  0521758  ld 0, 208(1)
  052175c  li 3, 0
  0521760  ld 22, 112(1)
  0521764  ld 23, 120(1)
  0521768  mtlr 0
  052176c  ld 24, 128(1)
  0521770  ld 25, 136(1)
  0521774  ld 26, 144(1)
  0521778  ld 27, 152(1)
  052177c  ld 28, 160(1)
  0521780  ld 29, 168(1)
  0521784  ld 30, 176(1)
  0521788  ld 31, 184(1)
  052178c  addi 1, 1, 192
  0521790  blr

_ZN4cell4fios9scheduler10statCommonEPKNS0_8opattr_tEPKcPvNS0_2op10e_OPSTAGESE:   # 0x521794, 0x21c bytes
  0521794  stdu 1, -208(1)
  0521798  mflr 0
  052179c  std 22, 128(1)
  05217a0  std 25, 152(1)
  05217a4  mr 22, 4
  05217a8  mr 25, 4
  05217ac  clrldi 4, 4, 32
  05217b0  std 21, 120(1)
  05217b4  std 23, 136(1)
  05217b8  std 24, 144(1)
  05217bc  std 26, 160(1)
  05217c0  std 27, 168(1)
  05217c4  std 28, 176(1)
  05217c8  std 29, 184(1)
  05217cc  std 30, 192(1)
  05217d0  std 31, 200(1)
  05217d4  mr 26, 5
  05217d8  mr 30, 6
  05217dc  mr 29, 7
  05217e0  std 0, 224(1)
  05217e4  mr 23, 3
  05217e8  bl 0x51cfd8
  05217ec  cmpwi 7, 3, 0
  05217f0  mr 31, 3
  05217f4  mr 24, 26
  05217f8  mr 27, 3
  05217fc  mr 21, 30
  0521800  mr 28, 29
  0521804  bt- 30, 0x521970
  0521808  stw 29, 208(31)
  052180c  mr 29, 31
  0521810  li 0, 8
  0521814  clrldi 3, 26, 32
  0521818  stw 0, 64(31)
  052181c  stwu 26, 72(29)
  0521820  bl 0x51c8d4
  0521824  nop
  0521828  cmpwi 7, 28, 1
  052182c  stw 3, 4(29)
  0521830  bt 30, 0x5218d8
  0521834  xori 0, 28, 3
  0521838  stw 30, 192(31)
  052183c  srawi 11, 0, 31
  0521840  xor 9, 11, 0
  0521844  sub 9, 11, 9
  0521848  srawi 9, 9, 31
  052184c  extsw 9, 9
  0521850  rldicl 9, 9, 61, 2
  0521854  rotldi 9, 9, 3
  0521858  addi 9, 9, 8
  052185c  std 9, 168(31)
  0521860  cmpwi 7, 24, 0
  0521864  bt- 30, 0x521900
  0521868  lbz 0, 0(26)
  052186c  addic. 9, 0, -1
  0521870  bt- 0, 0x521900
  0521874  cmpwi 7, 21, 0
  0521878  bt- 30, 0x521900
  052187c  cmpwi 7, 22, 0
  0521880  bt 30, 0x521894
  0521884  lwz 0, 20(25)
  0521888  rlwinm 0, 0, 0, 18, 19
  052188c  cmpwi 7, 0, 0
  0521890  bf 30, 0x5218f0
  0521894  ld 0, 224(1)
  0521898  mr 3, 23
  052189c  clrldi 4, 27, 32
  05218a0  ld 21, 120(1)
  05218a4  ld 22, 128(1)
  05218a8  mtlr 0
  05218ac  ld 23, 136(1)
  05218b0  ld 24, 144(1)
  05218b4  ld 25, 152(1)
  05218b8  ld 26, 160(1)
  05218bc  ld 27, 168(1)
  05218c0  ld 28, 176(1)
  05218c4  ld 29, 184(1)
  05218c8  ld 30, 192(1)
  05218cc  ld 31, 200(1)
  05218d0  addi 1, 1, 208
  05218d4  b 0x51ff58
  05218d8  li 0, 88
  05218dc  stw 30, 144(31)
  05218e0  std 0, 128(31)
  05218e4  std 0, 168(31)
  05218e8  stw 30, 192(31)
  05218ec  b 0x521860
  05218f0  rlwinm 3, 0, 0, 18, 19
  05218f4  bl 0x51cb74
  05218f8  cmpwi 7, 3, 1
  05218fc  bf 29, 0x521950
  0521900  lis 0, -32767
  0521904  ld 21, 120(1)
  0521908  mr 3, 23
  052190c  ld 22, 128(1)
  0521910  ori 0, 0, 1799
  0521914  ld 23, 136(1)
  0521918  clrldi 4, 27, 32
  052191c  ld 24, 144(1)
  0521920  stw 0, 68(31)
  0521924  ld 0, 224(1)
  0521928  ld 25, 152(1)
  052192c  ld 26, 160(1)
  0521930  mtlr 0
  0521934  ld 27, 168(1)
  0521938  ld 28, 176(1)
  052193c  ld 29, 184(1)
  0521940  ld 30, 192(1)
  0521944  ld 31, 200(1)
  0521948  addi 1, 1, 208
  052194c  b 0x51fe9c
  0521950  lwz 0, 20(25)
  0521954  rlwinm 0, 0, 0, 19, 19
  0521958  cmpwi 7, 0, 0
  052195c  bt 30, 0x521894
  0521960  lwz 0, 32(25)
  0521964  cmpwi 7, 0, 0
  0521968  bf 30, 0x521894
  052196c  b 0x521900
  0521970  ld 0, 224(1)
  0521974  li 3, 0
  0521978  ld 21, 120(1)
  052197c  ld 22, 128(1)
  0521980  mtlr 0
  0521984  ld 23, 136(1)
  0521988  ld 24, 144(1)
  052198c  ld 25, 152(1)
  0521990  ld 26, 160(1)
  0521994  ld 27, 168(1)
  0521998  ld 28, 176(1)
  052199c  ld 29, 184(1)
  05219a0  ld 30, 192(1)
  05219a4  ld 31, 200(1)
  05219a8  addi 1, 1, 208
  05219ac  blr

filehandle_release:   # 0x5219b0, 0x1a8 bytes
  05219b0  mfcr 12
  05219b4  cmpwi 4, 4, 0
  05219b8  stdu 1, -176(1)
  05219bc  std 28, 144(1)
  05219c0  std 29, 152(1)
  05219c4  std 30, 160(1)
  05219c8  std 31, 168(1)
  05219cc  std 25, 120(1)
  05219d0  std 26, 128(1)
  05219d4  std 27, 136(1)
  05219d8  mr 29, 4
  05219dc  mr 28, 3
  05219e0  mr 31, 4
  05219e4  mr 30, 3
  05219e8  stw 12, 184(1)
  05219ec  mflr 0
  05219f0  std 0, 192(1)
  05219f4  bt- 18, 0x521ad0
  05219f8  addi 0, 3, 16
  05219fc  clrldi 27, 0, 32
  0521a00  mr 3, 27
  0521a04  bl 0x52de58
  0521a08  nop
  0521a0c  mr 11, 28
  0521a10  lwzu 9, 572(11)
  0521a14  cmpw 7, 29, 9
  0521a18  bt 30, 0x521a44
  0521a1c  cmpwi 7, 9, 0
  0521a20  bf 30, 0x521a2c
  0521a24  b 0x521a64
  0521a28  bt 26, 0x521a64
  0521a2c  addi 11, 9, 12
  0521a30  clrldi 9, 11, 32
  0521a34  lwz 9, 0(9)
  0521a38  cmpw 7, 31, 9
  0521a3c  cmpwi 6, 9, 0
  0521a40  bf 30, 0x521a28
  0521a44  bt 18, 0x521a64
  0521a48  clrldi 11, 11, 32
  0521a4c  lwz 9, 12(29)
  0521a50  li 0, 0
  0521a54  li 10, 1
  0521a58  stw 9, 0(11)
  0521a5c  stw 0, 12(29)
  0521a60  b 0x521a68
  0521a64  li 10, 0
  0521a68  clrlwi 0, 10, 24
  0521a6c  cmpwi 7, 0, 0
  0521a70  bt- 30, 0x521ac4
  0521a74  addi 3, 31, 48
  0521a78  li 4, 0
  0521a7c  clrldi 3, 3, 32
  0521a80  clrldi 26, 30, 32
  0521a84  bl 0x51cb08
  0521a88  nop
  0521a8c  lwz 9, 576(28)
  0521a90  addi 9, 9, -1
  0521a94  clrldi 25, 31, 32
  0521a98  stw 9, 576(28)
  0521a9c  lwz 0, 80(29)
  0521aa0  rlwinm 11, 0, 0, 24, 24
  0521aa4  cmpwi 7, 11, 0
  0521aa8  bf- 30, 0x521b04
  0521aac  mr 9, 30
  0521ab0  stw 11, 84(29)
  0521ab4  lwzu 0, 568(9)
  0521ab8  stw 30, 8(29)
  0521abc  stw 0, 12(29)
  0521ac0  stw 31, 0(9)
  0521ac4  mr 3, 27
  0521ac8  bl 0x52dda0
  0521acc  nop
  0521ad0  ld 0, 192(1)
  0521ad4  lwz 12, 184(1)
  0521ad8  ld 25, 120(1)
  0521adc  mtlr 0
  0521ae0  ld 26, 128(1)
  0521ae4  mtocrf 8, 12
  0521ae8  ld 27, 136(1)
  0521aec  ld 28, 144(1)
  0521af0  ld 29, 152(1)
  0521af4  ld 30, 160(1)
  0521af8  ld 31, 168(1)
  0521afc  addi 1, 1, 176
  0521b00  blr
  0521b04  mr 3, 25
  0521b08  bl 0x5390ac
  0521b0c  nop
  0521b10  mr 3, 26
  0521b14  bl 0x51cba4
  0521b18  lis 5, 4144
  0521b1c  mr 9, 3
  0521b20  mr 4, 25
  0521b24  clrldi 3, 3, 32
  0521b28  ori 5, 5, 3
  0521b2c  li 6, 0
  0521b30  lwz 11, 0(9)
  0521b34  li 7, 0
  0521b38  lwz 9, 4(11)
  0521b3c  lwz 0, 0(9)
  0521b40  std 2, 40(1)
  0521b44  mtctr 0
  0521b48  lwz 2, 4(9)
  0521b4c  bctrl
  0521b50  ld 2, 40(1)
  0521b54  b 0x521ac4

filehandle_close_setup:   # 0x521b58, 0x234 bytes
  0521b58  stdu 1, -176(1)
  0521b5c  mflr 0
  0521b60  std 26, 128(1)
  0521b64  clrldi 26, 3, 32
  0521b68  std 27, 136(1)
  0521b6c  mr 27, 3
  0521b70  mr 3, 26
  0521b74  std 28, 144(1)
  0521b78  std 29, 152(1)
  0521b7c  std 30, 160(1)
  0521b80  std 31, 168(1)
  0521b84  std 25, 120(1)
  0521b88  std 0, 192(1)
  0521b8c  mr 31, 5
  0521b90  mr 30, 5
  0521b94  bl 0x51cfd8
  0521b98  cmpwi 7, 3, 0
  0521b9c  mr 29, 3
  0521ba0  mr 28, 3
  0521ba4  bt- 30, 0x521d5c
  0521ba8  clrldi 25, 31, 32
  0521bac  mr 3, 25
  0521bb0  bl 0x604760
  0521bb4  nop
  0521bb8  clrlwi 3, 3, 24
  0521bbc  cmpwi 7, 3, 0
  0521bc0  bt- 30, 0x521d44
  0521bc4  lwz 0, 8(31)
  0521bc8  cmpw 7, 0, 27
  0521bcc  bf- 30, 0x521d44
  0521bd0  lwz 0, 80(31)
  0521bd4  rlwinm 0, 0, 0, 22, 22
  0521bd8  cmpwi 7, 0, 0
  0521bdc  bf 30, 0x521c98
  0521be0  lwz 11, -30712(2)
  0521be4  mr 9, 30
  0521be8  lwzu 6, 16(9)
  0521bec  lwz 12, 24(9)
  0521bf0  lwz 0, 0(11)
  0521bf4  lwz 5, 4(9)
  0521bf8  cmpw 7, 0, 6
  0521bfc  lwz 31, 8(9)
  0521c00  ld 27, 16(9)
  0521c04  bt 30, 0x521ccc
  0521c08  mr 7, 30
  0521c0c  li 0, 13
  0521c10  lwzu 10, 48(7)
  0521c14  li 9, 8
  0521c18  clrldi 11, 10, 32
  0521c1c  stw 0, 64(29)
  0521c20  stw 9, 208(29)
  0521c24  addi 8, 28, 72
  0521c28  lbz 0, 0(11)
  0521c2c  li 11, 0
  0521c30  cmpwi 7, 0, 0
  0521c34  bf 30, 0x521d3c
  0521c38  mr 9, 28
  0521c3c  lwz 0, 4(7)
  0521c40  stw 30, 160(29)
  0521c44  stw 0, 4(8)
  0521c48  ld 0, 192(1)
  0521c4c  mr 3, 26
  0521c50  clrldi 4, 28, 32
  0521c54  ld 25, 120(1)
  0521c58  stwu 6, 80(9)
  0521c5c  mtlr 0
  0521c60  stw 31, 8(9)
  0521c64  stw 5, 4(9)
  0521c68  std 27, 16(9)
  0521c6c  stw 30, 192(29)
  0521c70  ld 26, 128(1)
  0521c74  ld 27, 136(1)
  0521c78  ld 28, 144(1)
  0521c7c  ld 29, 152(1)
  0521c80  ld 30, 160(1)
  0521c84  ld 31, 168(1)
  0521c88  addi 1, 1, 176
  0521c8c  stw 12, 24(9)
  0521c90  stw 11, 0(8)
  0521c94  b 0x51ff58
  0521c98  lwz 11, -30712(2)
  0521c9c  mr 9, 30
  0521ca0  lwz 0, 28(29)
  0521ca4  lwzu 6, 16(9)
  0521ca8  ori 0, 0, 8192
  0521cac  lwz 12, 24(9)
  0521cb0  stw 0, 28(29)
  0521cb4  lwz 0, 0(11)
  0521cb8  lwz 5, 4(9)
  0521cbc  cmpw 7, 0, 6
  0521cc0  lwz 31, 8(9)
  0521cc4  ld 27, 16(9)
  0521cc8  bf 30, 0x521c08
  0521ccc  lwz 0, 4(11)
  0521cd0  cmpw 7, 0, 5
  0521cd4  bf 30, 0x521c08
  0521cd8  lwz 0, 8(11)
  0521cdc  cmpw 7, 0, 31
  0521ce0  bf 30, 0x521c08
  0521ce4  ld 0, 16(11)
  0521ce8  cmpd 7, 0, 27
  0521cec  bf 30, 0x521c08
  0521cf0  lwz 0, 24(11)
  0521cf4  cmpw 7, 0, 12
  0521cf8  bf 30, 0x521c08
  0521cfc  mr 4, 25
  0521d00  mr 3, 26
  0521d04  bl 0x5219b0
  0521d08  mr 3, 26
  0521d0c  clrldi 4, 28, 32
  0521d10  ld 0, 192(1)
  0521d14  ld 25, 120(1)
  0521d18  ld 26, 128(1)
  0521d1c  mtlr 0
  0521d20  ld 27, 136(1)
  0521d24  ld 28, 144(1)
  0521d28  ld 29, 152(1)
  0521d2c  ld 30, 160(1)
  0521d30  ld 31, 168(1)
  0521d34  addi 1, 1, 176
  0521d38  b 0x51fe9c
  0521d3c  mr 11, 10
  0521d40  b 0x521c38
  0521d44  lis 0, -32767
  0521d48  mr 3, 26
  0521d4c  ori 0, 0, 1798
  0521d50  clrldi 4, 28, 32
  0521d54  stw 0, 68(29)
  0521d58  b 0x521d10
  0521d5c  ld 0, 192(1)
  0521d60  li 3, 0
  0521d64  ld 25, 120(1)
  0521d68  ld 26, 128(1)
  0521d6c  mtlr 0
  0521d70  ld 27, 136(1)
  0521d74  ld 28, 144(1)
  0521d78  ld 29, 152(1)
  0521d7c  ld 30, 160(1)
  0521d80  ld 31, 168(1)
  0521d84  addi 1, 1, 176
  0521d88  blr

FUN_00521d8c:   # 0x521d8c, 0x378 bytes
  0521d8c  stdu 1, -176(1)
  0521d90  mflr 0
  0521d94  std 24, 112(1)
  0521d98  std 26, 128(1)
  0521d9c  std 27, 136(1)
  0521da0  std 28, 144(1)
  0521da4  std 30, 160(1)
  0521da8  std 31, 168(1)
  0521dac  std 25, 120(1)
  0521db0  std 29, 152(1)
  0521db4  std 0, 192(1)
  0521db8  mr 26, 3
  0521dbc  mr 27, 4
  0521dc0  mr 31, 5
  0521dc4  mr 30, 3
  0521dc8  mr 28, 4
  0521dcc  mr 24, 5
  0521dd0  mftb 9, 268
  0521dd4  cmpwi 7, 9, 0
  0521dd8  bt- 30, 0x521dd0
  0521ddc  ld 0, 512(3)
  0521de0  clrldi 25, 3, 32
  0521de4  cmpd 7, 0, 9
  0521de8  bf 28, 0x521df0
  0521dec  std 9, 512(3)
  0521df0  addi 7, 30, 512
  0521df4  lwz 8, 508(26)
  0521df8  clrldi 4, 28, 32
  0521dfc  clrldi 7, 7, 32
  0521e00  li 5, 0
  0521e04  li 6, 0
  0521e08  mr 3, 25
  0521e0c  addi 29, 28, 64
  0521e10  bl 0x51d33c
  0521e14  lwz 9, 352(26)
  0521e18  lis 0, -32767
  0521e1c  lwz 3, 52(31)
  0521e20  li 4, 0
  0521e24  ori 0, 0, 1793
  0521e28  stw 29, 36(31)
  0521e2c  stw 0, 4(29)
  0521e30  lwz 5, 140(9)
  0521e34  stw 27, 12(31)
  0521e38  slwi 5, 5, 2
  0521e3c  bl 0x5d0140
  0521e40  nop
  0521e44  lwz 29, 0(29)
  0521e48  lwz 0, 48(28)
  0521e4c  addi 9, 29, -10
  0521e50  rlwinm 7, 0, 23, 31, 31
  0521e54  cmplwi 7, 9, 1
  0521e58  bf 29, 0x521e78
  0521e5c  cmpwi 7, 29, 6
  0521e60  bt 30, 0x521e78
  0521e64  cmpwi 7, 29, 7
  0521e68  bt 30, 0x521e78
  0521e6c  cmpwi 7, 29, 17
  0521e70  li 4, 0
  0521e74  bf 30, 0x521e90
  0521e78  ld 0, 128(27)
  0521e7c  sradi 11, 0, 63
  0521e80  xor 9, 11, 0
  0521e84  sub 9, 9, 11
  0521e88  addi 9, 9, -1
  0521e8c  rldicl 4, 9, 1, 63
  0521e90  addi 8, 30, 548
  0521e94  lwz 0, -30600(2)
  0521e98  stw 30, 60(31)
  0521e9c  clrldi 11, 8, 32
  0521ea0  stw 0, 56(31)
  0521ea4  lwz 10, 0(8)
  0521ea8  isync
  0521eac  addi 9, 10, 1
  0521eb0  lwarx 0, 0, 11
  0521eb4  cmpw 7, 10, 0
  0521eb8  bf 30, 0x521ea4
  0521ebc  stwcx. 9, 0, 11
  0521ec0  mfocrf 0, 128
  0521ec4  rlwinm 0, 0, 0, 2, 2
  0521ec8  cmpwi 7, 0, 0
  0521ecc  bt 30, 0x521eb0
  0521ed0  cmpwi 7, 28, 0
  0521ed4  bt- 30, 0x521ee8
  0521ed8  mr 9, 30
  0521edc  lwzu 0, 536(9)
  0521ee0  stw 0, 0(27)
  0521ee4  stw 28, 0(9)
  0521ee8  clrlwi 5, 7, 24
  0521eec  cmpwi 7, 5, 0
  0521ef0  bf- 30, 0x521f78
  0521ef4  cmpwi 7, 5, 0
  0521ef8  bt 30, 0x521f8c
  0521efc  clrlwi 0, 4, 24
  0521f00  li 30, 0
  0521f04  cmpwi 7, 0, 0
  0521f08  bf- 30, 0x522010
  0521f0c  lwz 9, 36(31)
  0521f10  lis 0, -32767
  0521f14  lwz 11, 56(31)
  0521f18  mr 3, 25
  0521f1c  ori 0, 0, 1800
  0521f20  lwz 4, 352(26)
  0521f24  clrldi 6, 24, 32
  0521f28  li 5, 3
  0521f2c  stw 0, 4(9)
  0521f30  lwz 0, 0(11)
  0521f34  std 2, 40(1)
  0521f38  mtctr 0
  0521f3c  lwz 2, 4(11)
  0521f40  bctrl
  0521f44  ld 2, 40(1)
  0521f48  ld 0, 192(1)
  0521f4c  ld 24, 112(1)
  0521f50  ld 25, 120(1)
  0521f54  mtlr 0
  0521f58  ld 26, 128(1)
  0521f5c  ld 27, 136(1)
  0521f60  ld 28, 144(1)
  0521f64  ld 29, 152(1)
  0521f68  ld 30, 160(1)
  0521f6c  ld 31, 168(1)
  0521f70  addi 1, 1, 176
  0521f74  blr
  0521f78  lwz 3, 208(27)
  0521f7c  cmpwi 7, 3, 10
  0521f80  bt 30, 0x522078
  0521f84  cmpwi 7, 3, 11
  0521f88  bf 30, 0x521ef4
  0521f8c  clrlwi 0, 4, 24
  0521f90  cmpwi 7, 0, 0
  0521f94  bf 30, 0x521efc
  0521f98  addi 29, 30, 392
  0521f9c  li 30, 1
  0521fa0  clrldi 29, 29, 32
  0521fa4  mr 3, 29
  0521fa8  bl 0x52de58
  0521fac  nop
  0521fb0  lwz 9, 440(26)
  0521fb4  addi 0, 9, 1
  0521fb8  stw 9, 44(31)
  0521fbc  stb 30, 32(31)
  0521fc0  stw 0, 440(26)
  0521fc4  mftb 9, 268
  0521fc8  cmpwi 7, 9, 0
  0521fcc  bt- 30, 0x521fc4
  0521fd0  mr 3, 29
  0521fd4  std 9, 16(31)
  0521fd8  bl 0x52dda0
  0521fdc  nop
  0521fe0  ld 0, 192(1)
  0521fe4  ld 24, 112(1)
  0521fe8  ld 25, 120(1)
  0521fec  mtlr 0
  0521ff0  ld 26, 128(1)
  0521ff4  ld 27, 136(1)
  0521ff8  ld 28, 144(1)
  0521ffc  ld 29, 152(1)
  0522000  ld 30, 160(1)
  0522004  ld 31, 168(1)
  0522008  addi 1, 1, 176
  052200c  blr
  0522010  lwz 9, 36(31)
  0522014  clrldi 29, 24, 32
  0522018  lwz 11, 56(31)
  052201c  mr 3, 25
  0522020  lwz 4, 352(26)
  0522024  mr 6, 29
  0522028  li 5, 2
  052202c  stw 30, 4(9)
  0522030  lwz 0, 0(11)
  0522034  std 2, 40(1)
  0522038  mtctr 0
  052203c  lwz 2, 4(11)
  0522040  bctrl
  0522044  ld 2, 40(1)
  0522048  lwz 9, 56(31)
  052204c  mr 3, 25
  0522050  lwz 4, 352(26)
  0522054  mr 6, 29
  0522058  li 5, 3
  052205c  lwz 0, 0(9)
  0522060  std 2, 40(1)
  0522064  mtctr 0
  0522068  lwz 2, 4(9)
  052206c  bctrl
  0522070  ld 2, 40(1)
  0522074  b 0x521f48
  0522078  lwz 10, 160(27)
  052207c  cmpwi 7, 10, 0
  0522080  bt 30, 0x521ef4
  0522084  addi 0, 10, 48
  0522088  li 3, 11
  052208c  clrldi 7, 0, 32
  0522090  li 0, 13
  0522094  stw 3, 208(27)
  0522098  stw 0, 64(27)
  052209c  addi 8, 28, 72
  05220a0  lwz 11, 0(7)
  05220a4  li 6, 0
  05220a8  clrldi 9, 11, 32
  05220ac  lbz 0, 0(9)
  05220b0  cmpwi 7, 0, 0
  05220b4  bt 30, 0x5220bc
  05220b8  mr 6, 11
  05220bc  addi 9, 10, 16
  05220c0  lwz 0, 4(7)
  05220c4  mr 11, 28
  05220c8  lwz 3, 208(27)
  05220cc  clrldi 9, 9, 32
  05220d0  stw 0, 4(8)
  05220d4  stw 6, 0(8)
  05220d8  lwz 0, 0(9)
  05220dc  lwz 10, 24(9)
  05220e0  lwz 8, 4(9)
  05220e4  lwz 7, 8(9)
  05220e8  ld 6, 16(9)
  05220ec  stwu 0, 80(11)
  05220f0  stw 10, 24(11)
  05220f4  stw 8, 4(11)
  05220f8  stw 7, 8(11)
  05220fc  std 6, 16(11)
  0522100  b 0x521f84

FUN_00522104:   # 0x522104, 0x3a0 bytes
  0522104  mfcr 12
  0522108  stdu 1, -240(1)
  052210c  std 20, 144(1)
  0522110  std 17, 120(1)
  0522114  std 19, 136(1)
  0522118  std 21, 152(1)
  052211c  std 22, 160(1)
  0522120  std 27, 200(1)
  0522124  std 18, 128(1)
  0522128  std 23, 168(1)
  052212c  std 24, 176(1)
  0522130  std 25, 184(1)
  0522134  std 26, 192(1)
  0522138  std 28, 208(1)
  052213c  std 29, 216(1)
  0522140  std 30, 224(1)
  0522144  std 31, 232(1)
  0522148  mr 27, 3
  052214c  li 17, 0
  0522150  mr 22, 3
  0522154  li 21, 0
  0522158  clrldi 19, 3, 32
  052215c  stw 12, 248(1)
  0522160  mflr 0
  0522164  std 0, 256(1)
  0522168  lwz 20, 376(3)
  052216c  cmpwi 7, 20, 0
  0522170  bt 30, 0x522274
  0522174  li 26, 0
  0522178  li 25, 0
  052217c  b 0x522194
  0522180  addi 21, 21, 1
  0522184  addi 26, 26, 1
  0522188  addi 25, 25, 1
  052218c  cmpw 7, 20, 26
  0522190  bt 30, 0x522274
  0522194  slwi 23, 25, 6
  0522198  lwz 9, 564(27)
  052219c  lwz 24, 436(27)
  05221a0  add 9, 23, 9
  05221a4  clrldi 9, 9, 32
  05221a8  lwz 0, 12(9)
  05221ac  cmpwi 7, 0, 0
  05221b0  bf 30, 0x522180
  05221b4  mr 18, 22
  05221b8  lwzu 31, 528(18)
  05221bc  cmpwi 4, 31, 0
  05221c0  bt 18, 0x522274
  05221c4  clrldi 30, 31, 32
  05221c8  lwz 0, 64(30)
  05221cc  cmpwi 7, 0, 13
  05221d0  bt 30, 0x5223d8
  05221d4  lwz 0, 48(30)
  05221d8  rlwinm 0, 0, 0, 22, 22
  05221dc  cmpwi 7, 0, 0
  05221e0  bf- 30, 0x522448
  05221e4  cmpw 7, 24, 26
  05221e8  bt 30, 0x522354
  05221ec  bt- 18, 0x522184
  05221f0  lwz 9, 0(18)
  05221f4  mr 11, 18
  05221f8  cmpw 7, 31, 9
  05221fc  bt 30, 0x52222c
  0522200  cmpwi 7, 9, 0
  0522204  clrldi 30, 31, 32
  0522208  bf 30, 0x522214
  052220c  b 0x522244
  0522210  bt 26, 0x5223d0
  0522214  mr 11, 9
  0522218  clrldi 9, 9, 32
  052221c  lwz 9, 0(9)
  0522220  cmpw 7, 31, 9
  0522224  cmpwi 6, 9, 0
  0522228  bf 30, 0x522210
  052222c  clrldi 30, 31, 32
  0522230  clrldi 9, 11, 32
  0522234  li 11, 0
  0522238  lwz 0, 0(30)
  052223c  stw 0, 0(9)
  0522240  stw 11, 0(30)
  0522244  lwz 5, 564(27)
  0522248  mr 4, 30
  052224c  mr 3, 19
  0522250  add 5, 23, 5
  0522254  addi 26, 26, 1
  0522258  clrldi 5, 5, 32
  052225c  addi 21, 21, 1
  0522260  bl 0x521d8c
  0522264  cmpw 7, 20, 26
  0522268  li 17, 1
  052226c  addi 25, 25, 1
  0522270  bf 30, 0x522194
  0522274  lwz 0, 456(27)
  0522278  isync
  052227c  cmpwi 7, 0, 0
  0522280  bt- 30, 0x52245c
  0522284  clrlwi 0, 17, 24
  0522288  cmpwi 7, 0, 0
  052228c  bt 30, 0x522300
  0522290  addi 0, 22, 392
  0522294  clrldi 29, 0, 32
  0522298  mr 3, 29
  052229c  bl 0x52de58
  05222a0  nop
  05222a4  lwz 30, 376(27)
  05222a8  cmpwi 7, 30, 0
  05222ac  bt 30, 0x5222f4
  05222b0  li 31, 0
  05222b4  b 0x5222c0
  05222b8  cmpw 7, 30, 31
  05222bc  bt 30, 0x5222f4
  05222c0  slwi 0, 31, 6
  05222c4  lwz 9, 564(27)
  05222c8  addi 31, 31, 1
  05222cc  add 0, 0, 9
  05222d0  clrldi 11, 0, 32
  05222d4  lbz 9, 32(11)
  05222d8  cmpwi 7, 9, 0
  05222dc  bt 30, 0x5222b8
  05222e0  lwz 3, 8(11)
  05222e4  bl 0x52dcf0
  05222e8  nop
  05222ec  cmpw 7, 30, 31
  05222f0  bf 30, 0x5222c0
  05222f4  mr 3, 29
  05222f8  bl 0x52dda0
  05222fc  nop
  0522300  ld 0, 256(1)
  0522304  lwz 12, 248(1)
  0522308  ld 17, 120(1)
  052230c  mtlr 0
  0522310  ld 18, 128(1)
  0522314  mtocrf 8, 12
  0522318  ld 19, 136(1)
  052231c  ld 20, 144(1)
  0522320  ld 21, 152(1)
  0522324  ld 22, 160(1)
  0522328  ld 23, 168(1)
  052232c  ld 24, 176(1)
  0522330  ld 25, 184(1)
  0522334  ld 26, 192(1)
  0522338  ld 27, 200(1)
  052233c  ld 28, 208(1)
  0522340  ld 29, 216(1)
  0522344  ld 30, 224(1)
  0522348  ld 31, 232(1)
  052234c  addi 1, 1, 240
  0522350  blr
  0522354  bt 18, 0x522184
  0522358  clrldi 30, 31, 32
  052235c  li 29, 0
  0522360  mr 3, 19
  0522364  mr 4, 30
  0522368  lwz 0, 28(30)
  052236c  rlwinm 0, 0, 0, 30, 30
  0522370  cmpwi 7, 0, 0
  0522374  bt 30, 0x5223ac
  0522378  cmpwi 7, 29, 15
  052237c  addi 29, 29, 1
  0522380  bt 30, 0x522184
  0522384  lwz 31, 0(30)
  0522388  cmpwi 4, 31, 0
  052238c  bt- 18, 0x522184
  0522390  clrldi 30, 31, 32
  0522394  mr 3, 19
  0522398  mr 4, 30
  052239c  lwz 0, 28(30)
  05223a0  rlwinm 0, 0, 0, 30, 30
  05223a4  cmpwi 7, 0, 0
  05223a8  bf 30, 0x522378
  05223ac  bl 0x51daac
  05223b0  clrlwi 3, 3, 24
  05223b4  cmpwi 7, 3, 0
  05223b8  bt 30, 0x522378
  05223bc  lwz 0, 48(30)
  05223c0  rlwinm 0, 0, 0, 22, 22
  05223c4  cmpwi 7, 0, 0
  05223c8  bt+ 30, 0x5221ec
  05223cc  b 0x522378
  05223d0  clrldi 30, 31, 32
  05223d4  b 0x522244
  05223d8  addi 0, 22, 312
  05223dc  clrldi 28, 0, 32
  05223e0  b 0x522408
  05223e4  lwz 31, 0(30)
  05223e8  cmpwi 4, 31, 0
  05223ec  clrldi 30, 31, 32
  05223f0  bt 18, 0x522438
  05223f4  lwz 0, 64(30)
  05223f8  cmpwi 7, 0, 13
  05223fc  bf 30, 0x522428
  0522400  bl 0x52dda0
  0522404  nop
  0522408  lwz 29, 160(30)
  052240c  mr 3, 28
  0522410  bl 0x52de58
  0522414  nop
  0522418  mr 3, 28
  052241c  lwz 0, 84(29)
  0522420  cmpwi 7, 0, 0
  0522424  bf 30, 0x5223e4
  0522428  mr 3, 28
  052242c  bl 0x52dda0
  0522430  nop
  0522434  b 0x5221d4
  0522438  mr 3, 28
  052243c  bl 0x52dda0
  0522440  nop
  0522444  b 0x5221e4
  0522448  lwz 31, 0(30)
  052244c  cmpwi 4, 31, 0
  0522450  clrldi 30, 31, 32
  0522454  bf 18, 0x5221d4
  0522458  b 0x5221e4
  052245c  cmpwi 7, 21, 0
  0522460  bf 30, 0x522284
  0522464  lwz 0, 532(27)
  0522468  cmpwi 7, 0, 0
  052246c  bt 30, 0x522284
  0522470  mr 9, 22
  0522474  li 4, 0
  0522478  lwzu 0, 532(9)
  052247c  cmpwi 7, 0, 0
  0522480  bt 30, 0x522494
  0522484  clrldi 4, 0, 32
  0522488  lwz 0, 0(4)
  052248c  stw 0, 0(9)
  0522490  stw 21, 0(4)
  0522494  mr 3, 19
  0522498  lwz 5, 564(27)
  052249c  bl 0x521d8c
  05224a0  b 0x522290

FUN_005224a4:   # 0x5224a4, 0x23c bytes
  05224a4  mfcr 12
  05224a8  stdu 1, -160(1)
  05224ac  std 27, 120(1)
  05224b0  std 28, 128(1)
  05224b4  std 30, 144(1)
  05224b8  std 31, 152(1)
  05224bc  std 29, 136(1)
  05224c0  mr 31, 4
  05224c4  mr 28, 5
  05224c8  mr 30, 4
  05224cc  mr 27, 3
  05224d0  stw 12, 168(1)
  05224d4  mflr 0
  05224d8  std 0, 176(1)
  05224dc  srawi 0, 4, 31
  05224e0  xor 9, 0, 4
  05224e4  sub 9, 9, 0
  05224e8  addi 9, 9, -1
  05224ec  srwi 9, 9, 31
  05224f0  cmpwi 4, 9, 0
  05224f4  bf- 18, 0x522528
  05224f8  mr 11, 3
  05224fc  lwzu 9, 536(11)
  0522500  cmpw 7, 4, 9
  0522504  bf 30, 0x522520
  0522508  b 0x522694
  052250c  mr 11, 9
  0522510  clrldi 9, 9, 32
  0522514  lwz 9, 0(9)
  0522518  cmpw 7, 30, 9
  052251c  bt 30, 0x522694
  0522520  cmpwi 7, 9, 0
  0522524  bf 30, 0x52250c
  0522528  lwz 9, 64(31)
  052252c  addi 0, 9, -10
  0522530  cmplwi 7, 0, 1
  0522534  bf 29, 0x522550
  0522538  cmpwi 7, 9, 6
  052253c  bt 30, 0x522550
  0522540  cmpwi 7, 9, 7
  0522544  bt 30, 0x522550
  0522548  cmpwi 7, 9, 17
  052254c  bf 30, 0x522560
  0522550  ld 0, 176(31)
  0522554  ld 9, 136(31)
  0522558  add 0, 0, 9
  052255c  std 0, 176(31)
  0522560  lwz 0, 160(31)
  0522564  cmpwi 7, 0, 0
  0522568  bt 30, 0x52257c
  052256c  lwz 9, 0(28)
  0522570  addi 9, 9, -10
  0522574  cmplwi 7, 9, 1
  0522578  bf 29, 0x5229f0
  052257c  lwz 4, 208(31)
  0522580  lwz 3, 4(28)
  0522584  cmplwi 7, 4, 11
  0522588  bt 29, 0x5225fc
  052258c  lwz 11, -30596(2)
  0522590  rldic 9, 4, 2, 30
  0522594  lwzx 0, 9, 11
  0522598  extsw 0, 0
  052259c  add 0, 0, 11
  05225a0  mtctr 0
  05225a4  bctr
  05225a8  <unknown>
  05225ac  <unknown>
  05225b0  <unknown>
  05225b4  <unknown>
  05225b8  <unknown>
  05225bc  <unknown>
  05225c0  <unknown>
  05225c4  <unknown>
  05225c8  <unknown>
  05225cc  <unknown>
  05225d0  <unknown>
  05225d4  <unknown>
  05225d8  clrldi 3, 27, 32
  05225dc  lwz 4, 160(31)
  05225e0  bl 0x5219b0
  05225e4  lwz 9, 192(31)
  05225e8  cmpwi 7, 9, 0
  05225ec  bt- 30, 0x5225fc
  05225f0  clrldi 9, 9, 32
  05225f4  li 0, 0
  05225f8  stw 0, 0(9)
  05225fc  lwz 5, 28(31)
  0522600  ori 5, 5, 1024
  0522604  stw 5, 28(31)
  0522608  rlwinm 0, 5, 0, 21, 21
  052260c  clrldi 3, 30, 32
  0522610  cmpwi 7, 0, 0
  0522614  bt- 30, 0x522abc
  0522618  lwz 9, -30744(2)
  052261c  lwz 0, 24(9)
  0522620  clrlwi 0, 0, 31
  0522624  cmpwi 7, 0, 0
  0522628  bf- 30, 0x522ab0
  052262c  addi 0, 27, 120
  0522630  li 9, 1
  0522634  clrldi 29, 0, 32
  0522638  stw 9, 208(31)
  052263c  mr 3, 29
  0522640  bl 0x52de58
  0522644  nop
  0522648  bf- 18, 0x52265c
  052264c  mr 9, 27
  0522650  lwzu 0, 540(9)
  0522654  stw 0, 0(31)
  0522658  stw 30, 0(9)
  052265c  mr 3, 29
  0522660  bl 0x52dda0
  0522664  nop
  0522668  ld 0, 176(1)
  052266c  lwz 12, 168(1)
  0522670  ld 27, 120(1)
  0522674  mtlr 0
  0522678  ld 28, 128(1)
  052267c  mtocrf 8, 12
  0522680  ld 29, 136(1)
  0522684  ld 30, 144(1)
  0522688  ld 31, 152(1)
  052268c  addi 1, 1, 160
  0522690  blr
  0522694  cmpwi 7, 30, 0
  0522698  bt 30, 0x522528
  052269c  clrldi 9, 11, 32
  05226a0  lwz 0, 0(31)
  05226a4  li 11, 0
  05226a8  stw 0, 0(9)
  05226ac  stw 11, 0(31)
  05226b0  b 0x522528
  05226b4  lwz 0, 68(31)
  05226b8  lwz 5, 28(31)
  05226bc  cmpwi 7, 0, 0
  05226c0  ori 5, 5, 1024
  05226c4  stw 5, 28(31)
  05226c8  bf- 30, 0x522608
  05226cc  lwz 0, 64(31)
  05226d0  cmpwi 7, 0, 8
  05226d4  bt 30, 0x5226e8
  05226d8  cmpwi 7, 0, 5
  05226dc  bt 30, 0x5226e8

_ZN4cell4fios9scheduler17cancelImmediatelyEPNS0_2opE:   # 0x522b14, 0x13c bytes
  0522b14  stdu 1, -176(1)
  0522b18  mflr 0
  0522b1c  std 29, 152(1)
  0522b20  mr 29, 4
  0522b24  std 26, 128(1)
  0522b28  cmpwi 7, 29, 0
  0522b2c  std 27, 136(1)
  0522b30  std 31, 168(1)
  0522b34  std 0, 192(1)
  0522b38  lis 26, -32767
  0522b3c  addi 0, 3, 56
  0522b40  clrldi 27, 3, 32
  0522b44  clrldi 31, 29, 32
  0522b48  addi 5, 29, 64
  0522b4c  std 24, 112(1)
  0522b50  std 25, 120(1)
  0522b54  std 28, 144(1)
  0522b58  std 30, 160(1)
  0522b5c  addi 28, 3, 536
  0522b60  ori 26, 26, 1800
  0522b64  clrldi 25, 0, 32
  0522b68  li 24, 0
  0522b6c  mr 3, 27
  0522b70  clrldi 5, 5, 32
  0522b74  mr 4, 31
  0522b78  bt 30, 0x522bc8
  0522b7c  lwz 30, 0(29)
  0522b80  stw 24, 0(29)
  0522b84  lwz 0, 0(28)
  0522b88  stw 26, 68(29)
  0522b8c  stw 0, 0(29)
  0522b90  stw 29, 0(28)
  0522b94  bl 0x5224a4
  0522b98  lwz 0, 28(29)
  0522b9c  rlwinm 0, 0, 0, 21, 21
  0522ba0  cmpwi 7, 0, 0
  0522ba4  bf 30, 0x522bf8
  0522ba8  mr 29, 30
  0522bac  cmpwi 7, 29, 0
  0522bb0  clrldi 31, 29, 32
  0522bb4  addi 5, 29, 64
  0522bb8  mr 3, 27
  0522bbc  clrldi 5, 5, 32
  0522bc0  mr 4, 31
  0522bc4  bf 30, 0x522b7c
  0522bc8  ld 0, 192(1)
  0522bcc  ld 24, 112(1)
  0522bd0  ld 25, 120(1)
  0522bd4  mtlr 0
  0522bd8  ld 26, 128(1)
  0522bdc  ld 27, 136(1)
  0522be0  ld 28, 144(1)
  0522be4  ld 29, 152(1)
  0522be8  ld 30, 160(1)
  0522bec  ld 31, 168(1)
  0522bf0  addi 1, 1, 176
  0522bf4  blr
  0522bf8  mr 3, 25
  0522bfc  bl 0x52dda0
  0522c00  nop
  0522c04  lwz 29, 48(29)
  0522c08  isync
  0522c0c  li 4, 1
  0522c10  li 5, 0
  0522c14  mr 3, 31
  0522c18  rlwinm 29, 29, 0, 23, 23
  0522c1c  bl 0x51c390
  0522c20  nop
  0522c24  mr 4, 31
  0522c28  cmpwi 7, 29, 0
  0522c2c  mr 3, 27
  0522c30  bf 30, 0x522c48
  0522c34  mr 3, 25
  0522c38  mr 29, 30
  0522c3c  bl 0x52de58
  0522c40  nop
  0522c44  b 0x522bac
  0522c48  bl 0x51fd24
  0522c4c  b 0x522c34

FUN_00522c50:   # 0x522c50, 0x228 bytes
  0522c50  stdu 1, -208(1)
  0522c54  mflr 0
  0522c58  ld 11, 0(1)
  0522c5c  std 0, 224(1)
  0522c60  lwz 9, 352(3)
  0522c64  std 23, 136(1)
  0522c68  std 24, 144(1)
  0522c6c  std 25, 152(1)
  0522c70  std 26, 160(1)
  0522c74  lwz 5, 136(9)
  0522c78  li 25, 0
  0522c7c  std 27, 168(1)
  0522c80  addi 0, 5, 30
  0522c84  lwz 4, 508(3)
  0522c88  std 28, 176(1)
  0522c8c  sldi 0, 0, 31
  0522c90  std 29, 184(1)
  0522c94  rldicr 0, 0, 33, 59
  0522c98  std 30, 192(1)
  0522c9c  neg 0, 0
  0522ca0  std 31, 200(1)
  0522ca4  mr 31, 1
  0522ca8  mr 29, 3
  0522cac  mr 28, 3
  0522cb0  stdux 11, 1, 0
  0522cb4  addi 9, 1, 112
  0522cb8  mr 30, 29
  0522cbc  clrldi 26, 9, 32
  0522cc0  li 23, 0
  0522cc4  mr 3, 26
  0522cc8  li 24, 0
  0522ccc  bl 0x5c5ad0
  0522cd0  nop
  0522cd4  li 0, -128
  0522cd8  ld 10, 496(29)
  0522cdc  ld 11, 512(29)
  0522ce0  stb 0, 112(31)
  0522ce4  lwzu 9, 528(30)
  0522ce8  add 10, 11, 10
  0522cec  cmpwi 7, 9, 0
  0522cf0  li 0, 0
  0522cf4  std 10, 120(31)
  0522cf8  stw 0, 116(31)
  0522cfc  mr 27, 30
  0522d00  bt 30, 0x522e24
  0522d04  lwz 11, 0(27)
  0522d08  clrldi 3, 28, 32
  0522d0c  addi 5, 31, 112
  0522d10  cmpwi 7, 11, 0
  0522d14  clrldi 9, 11, 32
  0522d18  addi 6, 31, 116
  0522d1c  addi 7, 31, 120
  0522d20  mr 8, 26
  0522d24  mr 4, 9
  0522d28  bt- 30, 0x522d98
  0522d2c  lwz 0, 48(9)
  0522d30  rlwinm 0, 0, 0, 22, 22
  0522d34  cmpwi 7, 0, 0
  0522d38  bf- 30, 0x522e44
  0522d3c  lbz 29, 112(31)
  0522d40  bl 0x51d33c
  0522d44  clrlwi 3, 3, 24
  0522d48  extsb 29, 29
  0522d4c  cmpwi 7, 3, 0
  0522d50  bt 30, 0x522e58
  0522d54  lwz 8, 0(27)
  0522d58  lbz 0, 112(31)
  0522d5c  clrldi 11, 8, 32
  0522d60  ld 10, 120(31)
  0522d64  extsb 0, 0
  0522d68  cmpw 7, 29, 0
  0522d6c  ld 9, 8(11)
  0522d70  sub 0, 10, 9
  0522d74  bt 30, 0x522e64
  0522d78  mr 25, 27
  0522d7c  mr 23, 0
  0522d80  clrldi 9, 8, 32
  0522d84  mr 27, 8
  0522d88  lwz 0, 0(9)
  0522d8c  std 10, 200(9)
  0522d90  cmpwi 7, 0, 0
  0522d94  bf 30, 0x522d04
  0522d98  srawi 0, 24, 31
  0522d9c  xor 9, 0, 24
  0522da0  sub 9, 9, 0
  0522da4  addi 9, 9, -1
  0522da8  srwi 29, 9, 31
  0522dac  cmpw 7, 25, 30
  0522db0  bt 30, 0x522de0
  0522db4  cmpwi 7, 25, 0
  0522db8  bt 30, 0x522de0
  0522dbc  clrldi 10, 25, 32
  0522dc0  li 9, 0
  0522dc4  clrldi 3, 28, 32
  0522dc8  lwz 11, 0(10)
  0522dcc  mr 4, 11
  0522dd0  lwz 0, 0(11)
  0522dd4  stw 0, 0(10)
  0522dd8  stw 9, 0(11)
  0522ddc  bl 0x51d588
  0522de0  clrlwi 0, 29, 24
  0522de4  cmpwi 7, 0, 0
  0522de8  bt- 30, 0x522e34
  0522dec  ld 11, 0(1)
  0522df0  ld 0, 16(11)
  0522df4  ld 23, -72(11)
  0522df8  ld 24, -64(11)
  0522dfc  mtlr 0
  0522e00  ld 25, -56(11)
  0522e04  ld 26, -48(11)
  0522e08  ld 27, -40(11)
  0522e0c  ld 28, -32(11)
  0522e10  ld 29, -24(11)
  0522e14  ld 30, -16(11)
  0522e18  ld 31, -8(11)
  0522e1c  mr 1, 11
  0522e20  blr
  0522e24  li 25, 0
  0522e28  li 24, 0
  0522e2c  li 29, 1
  0522e30  b 0x522dac
  0522e34  clrldi 3, 28, 32
  0522e38  clrldi 4, 24, 32
  0522e3c  bl 0x522b14
  0522e40  b 0x522dec
  0522e44  lwz 8, 0(9)
  0522e48  stw 8, 0(27)
  0522e4c  stw 24, 0(9)
  0522e50  mr 24, 11
  0522e54  b 0x522d04
  0522e58  lwz 8, 0(27)
  0522e5c  ld 10, 120(31)
  0522e60  b 0x522d80
  0522e64  cmpd 7, 23, 0
  0522e68  cmpw 6, 30, 25
  0522e6c  bt 28, 0x522d78
  0522e70  bf 26, 0x522d80
  0522e74  b 0x522d78

_ZN4cell4fios9scheduler10iterateOpsEPFvPvPNS0_2opEES2_:   # 0x522e78, 0x354 bytes
  0522e78  mfcr 12
  0522e7c  stdu 1, -224(1)
  0522e80  std 25, 168(1)
  0522e84  mr 25, 3
  0522e88  clrldi 3, 3, 32
  0522e8c  std 23, 152(1)
  0522e90  std 24, 160(1)
  0522e94  std 21, 136(1)
  0522e98  std 22, 144(1)
  0522e9c  std 26, 176(1)
  0522ea0  std 27, 184(1)
  0522ea4  std 28, 192(1)
  0522ea8  std 29, 200(1)
  0522eac  std 30, 208(1)
  0522eb0  std 31, 216(1)
  0522eb4  mr 23, 4
  0522eb8  mr 24, 5
  0522ebc  stw 12, 232(1)
  0522ec0  mflr 0
  0522ec4  std 0, 240(1)
  0522ec8  bl 0x604788
  0522ecc  nop
  0522ed0  clrlwi 3, 3, 24
  0522ed4  cmpwi 7, 3, 0
  0522ed8  bt- 30, 0x523110
  0522edc  addi 0, 25, 56
  0522ee0  addi 26, 25, 524
  0522ee4  clrldi 21, 0, 32
  0522ee8  clrldi 28, 26, 32
  0522eec  mr 3, 21
  0522ef0  bl 0x52de58
  0522ef4  nop
  0522ef8  addi 0, 25, 120
  0522efc  clrldi 22, 0, 32
  0522f00  mr 3, 22
  0522f04  bl 0x52de58
  0522f08  nop
  0522f0c  li 9, 0
  0522f10  lwz 29, 0(26)
  0522f14  isync
  0522f18  mr 27, 29
  0522f1c  lwarx 0, 0, 28
  0522f20  cmpw 7, 29, 0
  0522f24  bf 30, 0x522f40
  0522f28  stwcx. 9, 0, 28
  0522f2c  mfocrf 0, 128
  0522f30  rlwinm 0, 0, 0, 2, 2
  0522f34  cmpwi 7, 0, 0
  0522f38  bt 30, 0x522f1c
  0522f3c  mr 0, 29
  0522f40  cmpw 7, 29, 0
  0522f44  bf- 30, 0x522f10
  0522f48  cmpwi 4, 29, 0
  0522f4c  bt 18, 0x522fb8
  0522f50  clrldi 30, 24, 32
  0522f54  clrldi 31, 23, 32
  0522f58  clrldi 29, 29, 32
  0522f5c  mr 3, 29
  0522f60  bl 0x604738
  0522f64  nop
  0522f68  std 2, 40(1)
  0522f6c  lwz 0, 0(31)
  0522f70  mr 4, 29
  0522f74  lwz 2, 4(31)
  0522f78  mr 3, 30
  0522f7c  mtctr 0
  0522f80  bctrl
  0522f84  ld 2, 40(1)
  0522f88  lwz 29, 0(29)
  0522f8c  cmpwi 7, 29, 0
  0522f90  bf 30, 0x522f58
  0522f94  bt- 18, 0x522fb8
  0522f98  lwarx 0, 0, 28
  0522f9c  cmpwi 7, 0, 0
  0522fa0  bf 30, 0x523154
  0522fa4  stwcx. 27, 0, 28
  0522fa8  mfocrf 0, 128
  0522fac  rlwinm 0, 0, 0, 2, 2
  0522fb0  cmpwi 7, 0, 0
  0522fb4  bt 30, 0x522f98
  0522fb8  lwz 29, 528(25)
  0522fbc  cmpwi 7, 29, 0
  0522fc0  bt 30, 0x523008
  0522fc4  clrldi 30, 24, 32
  0522fc8  clrldi 31, 23, 32
  0522fcc  clrldi 29, 29, 32
  0522fd0  mr 3, 29
  0522fd4  bl 0x604738
  0522fd8  nop
  0522fdc  std 2, 40(1)
  0522fe0  lwz 0, 0(31)
  0522fe4  mr 4, 29
  0522fe8  lwz 2, 4(31)
  0522fec  mr 3, 30
  0522ff0  mtctr 0
  0522ff4  bctrl
  0522ff8  ld 2, 40(1)
  0522ffc  lwz 29, 0(29)
  0523000  cmpwi 7, 29, 0
  0523004  bf 30, 0x522fcc
  0523008  lwz 29, 532(25)
  052300c  cmpwi 7, 29, 0
  0523010  bt 30, 0x523058
  0523014  clrldi 30, 24, 32
  0523018  clrldi 31, 23, 32
  052301c  clrldi 29, 29, 32
  0523020  mr 3, 29
  0523024  bl 0x604738
  0523028  nop
  052302c  std 2, 40(1)
  0523030  lwz 0, 0(31)
  0523034  mr 4, 29
  0523038  lwz 2, 4(31)
  052303c  mr 3, 30
  0523040  mtctr 0
  0523044  bctrl
  0523048  ld 2, 40(1)
  052304c  lwz 29, 0(29)
  0523050  cmpwi 7, 29, 0
  0523054  bf 30, 0x52301c
  0523058  lwz 29, 536(25)
  052305c  cmpwi 7, 29, 0
  0523060  bt 30, 0x5230a8
  0523064  clrldi 30, 24, 32
  0523068  clrldi 31, 23, 32
  052306c  clrldi 29, 29, 32
  0523070  mr 3, 29
  0523074  bl 0x604738
  0523078  nop
  052307c  std 2, 40(1)
  0523080  lwz 0, 0(31)
  0523084  mr 4, 29
  0523088  lwz 2, 4(31)
  052308c  mr 3, 30
  0523090  mtctr 0
  0523094  bctrl
  0523098  ld 2, 40(1)
  052309c  lwz 29, 0(29)
  05230a0  cmpwi 7, 29, 0
  05230a4  bf 30, 0x52306c
  05230a8  lwz 3, 540(25)
  05230ac  cmpwi 7, 3, 0
  05230b0  bt 30, 0x5230f8
  05230b4  clrldi 30, 24, 32
  05230b8  clrldi 31, 23, 32
  05230bc  clrldi 29, 3, 32
  05230c0  mr 3, 29
  05230c4  bl 0x604738
  05230c8  nop
  05230cc  std 2, 40(1)
  05230d0  lwz 0, 0(31)
  05230d4  mr 3, 30
  05230d8  lwz 2, 4(31)
  05230dc  mr 4, 29
  05230e0  mtctr 0
  05230e4  bctrl
  05230e8  ld 2, 40(1)
  05230ec  lwz 3, 0(29)
  05230f0  cmpwi 7, 3, 0
  05230f4  bf 30, 0x5230bc
  05230f8  mr 3, 22
  05230fc  bl 0x52dda0
  0523100  nop
  0523104  mr 3, 21
  0523108  bl 0x52dda0
  052310c  nop
  0523110  ld 0, 240(1)
  0523114  lwz 12, 232(1)
  0523118  ld 21, 136(1)
  052311c  mtlr 0
  0523120  ld 22, 144(1)
  0523124  mtocrf 8, 12
  0523128  ld 23, 152(1)
  052312c  ld 24, 160(1)
  0523130  ld 25, 168(1)
  0523134  ld 26, 176(1)
  0523138  ld 27, 184(1)
  052313c  ld 28, 192(1)
  0523140  ld 29, 200(1)
  0523144  ld 30, 208(1)
  0523148  ld 31, 216(1)
  052314c  addi 1, 1, 224
  0523150  blr
  0523154  lwz 10, 0(26)
  0523158  isync
  052315c  li 11, 0
  0523160  mr 9, 10
  0523164  lwarx 0, 0, 28
  0523168  cmpw 7, 10, 0
  052316c  bf 30, 0x523188
  0523170  stwcx. 11, 0, 28
  0523174  mfocrf 0, 128
  0523178  rlwinm 0, 0, 0, 2, 2
  052317c  cmpwi 7, 0, 0
  0523180  bt 30, 0x523164
  0523184  mr 0, 10
  0523188  cmpw 7, 10, 0
  052318c  bf- 30, 0x523154
  0523190  cmpwi 7, 27, 0
  0523194  stw 10, 112(1)
  0523198  bt- 30, 0x5231c4
  052319c  cmpwi 7, 10, 0
  05231a0  addi 0, 1, 112
  05231a4  bt 30, 0x5231bc
  05231a8  mr 0, 9
  05231ac  clrldi 9, 9, 32
  05231b0  lwz 9, 0(9)
  05231b4  cmpwi 7, 9, 0
  05231b8  bf 30, 0x5231a8
  05231bc  clrldi 9, 0, 32
  05231c0  stw 27, 0(9)
  05231c4  lwz 27, 112(1)
  05231c8  b 0x522f98

_ZN4cell4fios9scheduler12cancelAllOpsEb:   # 0x5231cc, 0x6c bytes
  05231cc  stdu 1, -144(1)
  05231d0  mflr 0
  05231d4  std 29, 120(1)
  05231d8  std 31, 136(1)
  05231dc  mr 29, 3
  05231e0  mr 31, 4
  05231e4  std 0, 160(1)
  05231e8  bl 0x604788
  05231ec  nop
  05231f0  clrlwi 3, 3, 24
  05231f4  clrldi 5, 31, 56
  05231f8  cmpwi 7, 3, 0
  05231fc  mr 3, 29
  0523200  bt- 30, 0x523220
  0523204  ld 0, 160(1)
  0523208  ld 29, 120(1)
  052320c  ld 31, 136(1)
  0523210  addi 1, 1, 144
  0523214  lwz 4, -30592(2)
  0523218  mtlr 0
  052321c  b 0x522e78
  0523220  ld 0, 160(1)
  0523224  ld 29, 120(1)
  0523228  ld 31, 136(1)
  052322c  mtlr 0
  0523230  addi 1, 1, 144
  0523234  blr

FUN_00523238:   # 0x523238, 0x594 bytes
  0523238  stdu 1, -272(1)
  052323c  mflr 0
  0523240  std 30, 232(1)
  0523244  mr 30, 3
  0523248  stfd 29, 248(1)
  052324c  std 26, 200(1)
  0523250  clrldi 26, 3, 32
  0523254  stfd 30, 256(1)
  0523258  std 25, 192(1)
  052325c  mr 25, 3
  0523260  stfd 31, 264(1)
  0523264  mr 3, 26
  0523268  std 29, 224(1)
  052326c  std 31, 240(1)
  0523270  std 0, 288(1)
  0523274  std 19, 144(1)
  0523278  std 20, 152(1)
  052327c  std 21, 160(1)
  0523280  std 22, 168(1)
  0523284  std 23, 176(1)
  0523288  std 24, 184(1)
  052328c  std 27, 208(1)
  0523290  std 28, 216(1)
  0523294  mr 29, 4
  0523298  bl 0x604788
  052329c  nop
  05232a0  lwz 0, 376(30)
  05232a4  lwz 9, 564(30)
  05232a8  cmpwi 7, 0, 0
  05232ac  clrldi 31, 9, 32
  05232b0  bt 30, 0x5232e8
  05232b4  clrldi 0, 0, 32
  05232b8  mtctr 0
  05232bc  lwz 0, 4(31)
  05232c0  cmpw 7, 0, 29
  05232c4  bf 30, 0x5232dc
  05232c8  b 0x5232e8
  05232cc  clrldi 31, 9, 32
  05232d0  lwz 0, 4(31)
  05232d4  cmpw 7, 0, 29
  05232d8  bt 30, 0x5232e8
  05232dc  addi 9, 9, 64
  05232e0  bdnz 0x5232cc
  05232e4  clrldi 31, 9, 32
  05232e8  lwz 9, -30732(2)
  05232ec  addi 0, 25, 392
  05232f0  li 21, -1
  05232f4  lfs 29, -30720(2)
  05232f8  clrldi 29, 0, 32
  05232fc  fmr 30, 29
  0523300  rldicr 21, 21, 0, 0
  0523304  addi 24, 25, 448
  0523308  lfd 31, 0(9)
  052330c  addi 20, 25, 480
  0523310  addi 19, 25, 548
  0523314  li 23, 0
  0523318  mr 3, 29
  052331c  bl 0x52de58
  0523320  nop
  0523324  b 0x523340
  0523328  lwz 3, 8(31)
  052332c  bl 0x52e49c
  0523330  nop
  0523334  mr 3, 26
  0523338  bl 0x604788
  052333c  nop
  0523340  lbz 0, 432(30)
  0523344  mr 4, 29
  0523348  li 5, 0
  052334c  cmpwi 7, 0, 0
  0523350  bt- 30, 0x523360
  0523354  lbz 0, 32(31)
  0523358  cmpwi 7, 0, 0
  052335c  bt 30, 0x523328
  0523360  mr 3, 29
  0523364  bl 0x52dda0
  0523368  nop
  052336c  lwz 9, 36(31)
  0523370  cmpwi 7, 9, 0
  0523374  bt- 30, 0x523568
  0523378  lbz 0, 32(31)
  052337c  cmpwi 7, 0, 0
  0523380  bt- 30, 0x523568
  0523384  lwz 3, 52(31)
  0523388  lwz 27, 12(31)
  052338c  cmpwi 7, 3, 0
  0523390  bt- 30, 0x5233b4
  0523394  lwz 9, 352(30)
  0523398  clrldi 3, 3, 32
  052339c  li 4, 0
  05233a0  lwz 5, 140(9)
  05233a4  slwi 5, 5, 2
  05233a8  bl 0x5d0140
  05233ac  nop
  05233b0  lwz 9, 36(31)
  05233b4  clrldi 10, 9, 32
  05233b8  lwz 9, 0(10)
  05233bc  addi 0, 9, -10
  05233c0  cmplwi 7, 0, 1
  05233c4  bf 29, 0x5235c4
  05233c8  cmpwi 7, 9, 6
  05233cc  bt 30, 0x5235c4
  05233d0  cmpwi 7, 9, 7
  05233d4  bt 30, 0x5235c4
  05233d8  cmpwi 7, 9, 17
  05233dc  bt 30, 0x5235c4
  05233e0  cmpwi 7, 9, 8
  05233e4  bt 30, 0x5235c4
  05233e8  cmpwi 7, 9, 13
  05233ec  addi 28, 25, 444
  05233f0  bt 30, 0x5235c4
  05233f4  lwz 9, 44(31)
  05233f8  lwz 0, 0(28)
  05233fc  isync
  0523400  cmpw 7, 9, 0
  0523404  bf- 30, 0x5235f8
  0523408  lwz 0, 376(30)
  052340c  cmplwi 7, 0, 1
  0523410  bf 29, 0x523480
  0523414  mftb 11, 268
  0523418  cmpwi 7, 11, 0
  052341c  bt- 30, 0x523414
  0523420  lfs 0, -30584(2)
  0523424  fmul 0, 31, 0
  0523428  fcmpu 7, 0, 30
  052342c  cror 30, 29, 30
  0523430  bt 30, 0x523730
  0523434  fctidz 0, 0
  0523438  stfd 0, 128(1)
  052343c  ld 0, 128(1)
  0523440  cmpdi 7, 0, 0
  0523444  std 0, 120(1)
  0523448  li 0, 1
  052344c  addi 9, 1, 120
  0523450  std 0, 112(1)
  0523454  bf 29, 0x52345c
  0523458  addi 9, 1, 112
  052345c  clrldi 9, 9, 32
  0523460  ld 0, 0(9)
  0523464  std 0, 120(1)
  0523468  ld 9, 0(24)
  052346c  isync
  0523470  ld 0, 120(1)
  0523474  add 3, 9, 0
  0523478  cmpd 7, 11, 3
  052347c  bf 29, 0x523634
  0523480  lwz 9, 36(31)
  0523484  lwz 0, 0(9)
  0523488  cmpwi 7, 0, 17
  052348c  bt- 30, 0x52364c
  0523490  lwsync
  0523494  li 0, 0
  0523498  stw 0, 480(30)
  052349c  mftb 0, 268
  05234a0  cmpwi 7, 0, 0
  05234a4  bt- 30, 0x52349c
  05234a8  lwsync
  05234ac  clrldi 11, 28, 32
  05234b0  std 0, 0(24)
  05234b4  lwz 10, 0(28)
  05234b8  isync
  05234bc  addi 9, 10, 1
  05234c0  lwarx 0, 0, 11
  05234c4  cmpw 7, 10, 0
  05234c8  bf 30, 0x5234b4
  05234cc  stwcx. 9, 0, 11
  05234d0  mfocrf 0, 128
  05234d4  rlwinm 0, 0, 0, 2, 2
  05234d8  cmpwi 7, 0, 0
  05234dc  bt 30, 0x5234c0
  05234e0  lwz 9, 56(31)
  05234e4  li 5, 2
  05234e8  stb 23, 32(31)
  05234ec  lwz 4, 352(30)
  05234f0  mr 6, 31
  05234f4  lwz 3, 60(31)
  05234f8  lwz 0, 0(9)
  05234fc  std 2, 40(1)
  0523500  mtctr 0
  0523504  lwz 2, 4(9)
  0523508  bctrl
  052350c  ld 2, 40(1)
  0523510  lwz 11, 352(30)
  0523514  mr 4, 31
  0523518  mr 3, 11
  052351c  lwz 9, 0(11)
  0523520  lwz 10, 20(9)
  0523524  lwz 0, 0(10)
  0523528  std 2, 40(1)
  052352c  mtctr 0
  0523530  lwz 2, 4(10)
  0523534  bctrl
  0523538  ld 2, 40(1)
  052353c  lwz 9, 56(31)
  0523540  li 5, 3
  0523544  lwz 3, 60(31)
  0523548  mr 6, 31
  052354c  lwz 4, 352(30)
  0523550  lwz 0, 0(9)
  0523554  std 2, 40(1)
  0523558  mtctr 0
  052355c  lwz 2, 4(9)
  0523560  bctrl
  0523564  ld 2, 40(1)
  0523568  lbz 0, 432(30)
  052356c  cmpwi 7, 0, 0
  0523570  bf+ 30, 0x523318
  0523574  ld 0, 288(1)
  0523578  ld 19, 144(1)
  052357c  ld 20, 152(1)
  0523580  mtlr 0
  0523584  ld 21, 160(1)
  0523588  ld 22, 168(1)
  052358c  ld 23, 176(1)
  0523590  ld 24, 184(1)
  0523594  ld 25, 192(1)
  0523598  ld 26, 200(1)
  052359c  ld 27, 208(1)
  05235a0  ld 28, 216(1)
  05235a4  ld 29, 224(1)
  05235a8  ld 30, 232(1)
  05235ac  ld 31, 240(1)
  05235b0  lfd 29, 248(1)
  05235b4  lfd 30, 256(1)
  05235b8  lfd 31, 264(1)
  05235bc  addi 1, 1, 272
  05235c0  blr
  05235c4  clrldi 9, 27, 32
  05235c8  lhz 11, 84(10)
  05235cc  addi 28, 25, 444
  05235d0  lwz 0, 28(9)
  05235d4  li 9, 12542
  05235d8  and 0, 0, 9
  05235dc  lwz 9, 44(31)
  05235e0  or 0, 0, 11
  05235e4  sth 0, 84(10)
  05235e8  lwz 0, 0(28)
  05235ec  isync
  05235f0  cmpw 7, 9, 0
  05235f4  bt+ 30, 0x523408
  05235f8  mftb 3, 268
  05235fc  cmpwi 7, 3, 0
  0523600  bt- 30, 0x5235f8
  0523604  lfs 0, -30588(2)
  0523608  fmul 0, 31, 0
  052360c  fcmpu 7, 0, 29
  0523610  cror 30, 29, 30
  0523614  bt 30, 0x5237b4
  0523618  fctidz 0, 0
  052361c  stfd 0, 128(1)
  0523620  ld 0, 128(1)
  0523624  add 3, 3, 0
  0523628  bl 0x52e984
  052362c  nop
  0523630  b 0x5233f4
  0523634  bl 0x52e984
  0523638  nop
  052363c  lwz 9, 36(31)
  0523640  lwz 0, 0(9)
  0523644  cmpwi 7, 0, 17
  0523648  bf+ 30, 0x523490
  052364c  mr 22, 20
  0523650  lwz 0, 0(20)
  0523654  isync
  0523658  cmpwi 7, 0, 0
  052365c  bt 30, 0x523774
  0523660  ld 9, 472(30)
  0523664  cmpdi 7, 9, 0
  0523668  bt 30, 0x523764
  052366c  mr 27, 19
  0523670  lwz 0, 0(19)
  0523674  isync
  0523678  cmpwi 7, 0, 1
  052367c  bt 30, 0x52377c
  0523680  lwz 0, 0(27)
  0523684  isync
  0523688  cmpwi 7, 0, 1
  052368c  clrldi 11, 28, 32
  0523690  bt 30, 0x523748
  0523694  lwz 10, 0(28)
  0523698  isync
  052369c  addi 9, 10, 1
  05236a0  lwarx 0, 0, 11
  05236a4  cmpw 7, 10, 0
  05236a8  bf 30, 0x523694
  05236ac  stwcx. 9, 0, 11
  05236b0  mfocrf 0, 128
  05236b4  rlwinm 0, 0, 0, 2, 2
  05236b8  cmpwi 7, 0, 0
  05236bc  bt 30, 0x5236a0
  05236c0  lwz 11, 56(31)
  05236c4  mr 6, 31
  05236c8  stb 23, 32(31)
  05236cc  lwz 4, 352(30)
  05236d0  li 5, 2
  05236d4  lwz 3, 60(31)
  05236d8  lwz 0, 0(11)
  05236dc  std 2, 40(1)
  05236e0  mtctr 0
  05236e4  lwz 2, 4(11)
  05236e8  bctrl
  05236ec  ld 2, 40(1)
  05236f0  lwz 9, 36(31)
  05236f4  li 0, 0
  05236f8  lwz 11, 56(31)
  05236fc  li 5, 3
  0523700  lwz 3, 60(31)
  0523704  mr 6, 31
  0523708  lwz 4, 352(30)
  052370c  stw 0, 4(9)
  0523710  std 0, 72(9)
  0523714  lwz 0, 0(11)
  0523718  std 2, 40(1)
  052371c  mtctr 0
  0523720  lwz 2, 4(11)
  0523724  bctrl
  0523728  ld 2, 40(1)
  052372c  b 0x523568
  0523730  fsub 0, 0, 30
  0523734  fctidz 0, 0
  0523738  stfd 0, 128(1)
  052373c  ld 0, 128(1)
  0523740  xor 0, 0, 21
  0523744  b 0x523440
  0523748  lwz 0, 524(30)
  052374c  isync
  0523750  cmpwi 7, 0, 0
  0523754  bf 30, 0x523694
  0523758  lwz 0, 528(30)
  052375c  cmpwi 7, 0, 0
  0523760  bf 30, 0x523694
  0523764  lwsync
  0523768  li 0, 1
  052376c  stw 0, 0(22)
  0523770  b 0x52349c
  0523774  ld 9, 464(30)
  0523778  b 0x523664
  052377c  lwz 0, 524(30)
  0523780  isync
  0523784  cmpwi 7, 0, 0
  0523788  bf 30, 0x523680
  052378c  lwz 0, 528(30)
  0523790  cmpwi 7, 0, 0
  0523794  bf 30, 0x523680
  0523798  mftb 3, 268
  052379c  cmpwi 7, 3, 0
  05237a0  bt- 30, 0x523798
  05237a4  add 3, 9, 3
  05237a8  bl 0x52e984
  05237ac  nop
  05237b0  b 0x523680
  05237b4  fsub 0, 0, 29
  05237b8  fctidz 0, 0
  05237bc  stfd 0, 128(1)
  05237c0  ld 0, 128(1)
  05237c4  xor 0, 0, 21
  05237c8  b 0x523624

FUN_005237cc:   # 0x5237cc, 0x10 bytes
  05237cc  mr 0, 3
  05237d0  mr 3, 4
  05237d4  mr 4, 0
  05237d8  b 0x523238

_ZN4cell4fios9scheduler6resumeEPKc:   # 0x5237dc, 0xe4 bytes
  05237dc  stdu 1, -144(1)
  05237e0  mflr 0
  05237e4  std 31, 136(1)
  05237e8  mr 31, 3
  05237ec  clrldi 3, 3, 32
  05237f0  std 29, 120(1)
  05237f4  std 30, 128(1)
  05237f8  std 0, 160(1)
  05237fc  stw 4, 200(1)
  0523800  bl 0x604788
  0523804  nop
  0523808  clrlwi 3, 3, 24
  052380c  cmpwi 7, 3, 0
  0523810  bt- 30, 0x523828
  0523814  mr 30, 31
  0523818  lwzu 0, 384(30)
  052381c  isync
  0523820  cmpwi 7, 0, 0
  0523824  bf 30, 0x523844
  0523828  ld 0, 160(1)
  052382c  ld 29, 120(1)
  0523830  ld 30, 128(1)
  0523834  mtlr 0
  0523838  ld 31, 136(1)
  052383c  addi 1, 1, 144
  0523840  blr
  0523844  addi 0, 31, 224
  0523848  clrldi 29, 0, 32
  052384c  mr 3, 29
  0523850  bl 0x52de58
  0523854  nop
  0523858  clrldi 11, 30, 32
  052385c  lwz 10, 0(30)
  0523860  isync
  0523864  addi 9, 10, -1
  0523868  lwarx 0, 0, 11
  052386c  cmpw 7, 10, 0
  0523870  bf 30, 0x52385c
  0523874  stwcx. 9, 0, 11
  0523878  mfocrf 0, 128
  052387c  rlwinm 0, 0, 0, 2, 2
  0523880  cmpwi 7, 0, 0
  0523884  bt 30, 0x523868
  0523888  addi 3, 31, 264
  052388c  clrldi 3, 3, 32
  0523890  bl 0x52dcf0
  0523894  nop
  0523898  mr 3, 29
  052389c  bl 0x52dda0
  05238a0  nop
  05238a4  ld 0, 160(1)
  05238a8  ld 29, 120(1)
  05238ac  ld 30, 128(1)
  05238b0  mtlr 0
  05238b4  ld 31, 136(1)
  05238b8  addi 1, 1, 144
  05238bc  blr

FUN_005238c0:   # 0x5238c0, 0x694 bytes
  05238c0  stdu 1, -224(1)
  05238c4  mflr 0
  05238c8  std 25, 152(1)
  05238cc  std 0, 240(1)
  05238d0  clrldi 25, 3, 32
  05238d4  lwz 0, -30708(2)
  05238d8  std 26, 160(1)
  05238dc  std 28, 176(1)
  05238e0  stfd 30, 208(1)
  05238e4  mr 28, 3
  05238e8  stfd 31, 216(1)
  05238ec  mr 26, 3
  05238f0  std 23, 136(1)
  05238f4  std 24, 144(1)
  05238f8  std 27, 168(1)
  05238fc  std 29, 184(1)
  0523900  std 30, 192(1)
  0523904  std 31, 200(1)
  0523908  stw 0, 0(3)
  052390c  mr 3, 25
  0523910  bl 0x604788
  0523914  nop
  0523918  lwz 9, -30636(2)
  052391c  lbz 0, 0(9)
  0523920  cmpwi 7, 0, 0
  0523924  bt 30, 0x523d50
  0523928  lwz 3, 352(28)
  052392c  clrldi 3, 3, 32
  0523930  bl 0x604710
  0523934  nop
  0523938  clrlwi 3, 3, 24
  052393c  cmpwi 7, 3, 0
  0523940  bt- 30, 0x523958
  0523944  lwz 3, 352(28)
  0523948  bl 0x51a480
  052394c  nop
  0523950  cmpw 7, 26, 3
  0523954  bt 30, 0x523f18
  0523958  addi 9, 26, 160
  052395c  clrldi 23, 9, 32
  0523960  lbz 0, 44(9)
  0523964  cmpwi 7, 0, 0
  0523968  bf 30, 0x523f08
  052396c  lwz 31, 504(28)
  0523970  cmpwi 7, 31, 0
  0523974  bt 30, 0x5239bc
  0523978  mr 3, 25
  052397c  bl 0x51cba4
  0523980  lis 5, 4120
  0523984  mr 9, 3
  0523988  clrldi 4, 31, 32
  052398c  clrldi 3, 3, 32
  0523990  ori 5, 5, 259
  0523994  li 6, 0
  0523998  lwz 11, 0(9)
  052399c  li 7, 0
  05239a0  lwz 9, 4(11)
  05239a4  lwz 0, 0(9)
  05239a8  std 2, 40(1)
  05239ac  mtctr 0
  05239b0  lwz 2, 4(9)
  05239b4  bctrl
  05239b8  ld 2, 40(1)
  05239bc  lwz 31, 492(28)
  05239c0  cmpwi 7, 31, 0
  05239c4  bt 30, 0x523a0c
  05239c8  mr 3, 25
  05239cc  bl 0x51cba4
  05239d0  lis 5, 4119
  05239d4  mr 9, 3
  05239d8  clrldi 4, 31, 32
  05239dc  clrldi 3, 3, 32
  05239e0  ori 5, 5, 259
  05239e4  li 6, 0
  05239e8  lwz 11, 0(9)
  05239ec  li 7, 0
  05239f0  lwz 9, 4(11)
  05239f4  lwz 0, 0(9)
  05239f8  std 2, 40(1)
  05239fc  mtctr 0
  0523a00  lwz 2, 4(9)
  0523a04  bctrl
  0523a08  ld 2, 40(1)
  0523a0c  lwz 0, 564(28)
  0523a10  addi 24, 26, 392
  0523a14  cmpwi 7, 0, 0
  0523a18  bt 30, 0x523b34
  0523a1c  clrldi 29, 24, 32
  0523a20  mr 3, 29
  0523a24  bl 0x52de58
  0523a28  nop
  0523a2c  lwz 30, 376(28)
  0523a30  cmpwi 7, 30, 0
  0523a34  li 0, 0
  0523a38  stb 0, 432(28)
  0523a3c  bt 30, 0x523a6c
  0523a40  li 31, 0
  0523a44  slwi 9, 31, 6
  0523a48  lwz 0, 564(28)
  0523a4c  addi 31, 31, 1
  0523a50  add 9, 9, 0
  0523a54  clrldi 9, 9, 32
  0523a58  lwz 3, 8(9)
  0523a5c  bl 0x52dcf0
  0523a60  nop
  0523a64  cmpw 7, 30, 31
  0523a68  bf 30, 0x523a44
  0523a6c  mr 3, 29
  0523a70  bl 0x52dda0
  0523a74  nop
  0523a78  lwz 27, 376(28)
  0523a7c  cmpwi 7, 27, 0
  0523a80  bt 30, 0x523f4c
  0523a84  li 29, 0
  0523a88  lwz 30, 564(28)
  0523a8c  slwi 31, 29, 6
  0523a90  addi 29, 29, 1
  0523a94  add 9, 31, 30
  0523a98  clrldi 9, 9, 32
  0523a9c  lwz 0, 4(9)
  0523aa0  cmpwi 7, 0, 0
  0523aa4  clrldi 3, 0, 32
  0523aa8  bt 30, 0x523ae8
  0523aac  bl 0x52ced8
  0523ab0  nop
  0523ab4  lwz 9, 564(28)
  0523ab8  add 9, 31, 9
  0523abc  clrldi 9, 9, 32
  0523ac0  lwz 3, 4(9)
  0523ac4  bl 0x52d018
  0523ac8  nop
  0523acc  lwz 9, 564(28)
  0523ad0  add 9, 31, 9
  0523ad4  clrldi 9, 9, 32
  0523ad8  lwz 3, 8(9)
  0523adc  bl 0x52d0e8
  0523ae0  nop
  0523ae4  lwz 30, 564(28)
  0523ae8  cmpw 7, 27, 29
  0523aec  bf 30, 0x523a8c
  0523af0  mr 3, 25
  0523af4  bl 0x51cba4
  0523af8  lis 5, 4118
  0523afc  mr 9, 3
  0523b00  clrldi 4, 30, 32
  0523b04  clrldi 3, 3, 32
  0523b08  ori 5, 5, 259
  0523b0c  li 6, 0
  0523b10  lwz 11, 0(9)
  0523b14  li 7, 0
  0523b18  lwz 9, 4(11)
  0523b1c  lwz 0, 0(9)
  0523b20  std 2, 40(1)
  0523b24  mtctr 0
  0523b28  lwz 2, 4(9)
  0523b2c  bctrl
  0523b30  ld 2, 40(1)
  0523b34  lwz 29, 368(28)
  0523b38  cmpwi 7, 29, 0
  0523b3c  bt 30, 0x523bcc
  0523b40  lwz 0, 360(28)
  0523b44  cmpwi 7, 0, 0
  0523b48  bt 30, 0x523b88
  0523b4c  mr 31, 29
  0523b50  li 30, 0
  0523b54  clrldi 29, 31, 32
  0523b58  addi 30, 30, 1
  0523b5c  mr 3, 29
  0523b60  addi 31, 31, 88
  0523b64  bl 0x604760
  0523b68  nop
  0523b6c  mr 3, 29
  0523b70  bl 0x5390ac
  0523b74  nop
  0523b78  lwz 0, 360(28)
  0523b7c  cmplw 7, 0, 30
  0523b80  bt 29, 0x523b54
  0523b84  lwz 29, 368(28)
  0523b88  mr 3, 25
  0523b8c  bl 0x51cba4
  0523b90  lis 5, 4116
  0523b94  mr 9, 3
  0523b98  clrldi 4, 29, 32
  0523b9c  clrldi 3, 3, 32
  0523ba0  ori 5, 5, 259
  0523ba4  li 6, 0
  0523ba8  lwz 11, 0(9)
  0523bac  li 7, 0
  0523bb0  lwz 9, 4(11)
  0523bb4  lwz 0, 0(9)
  0523bb8  std 2, 40(1)
  0523bbc  mtctr 0
  0523bc0  lwz 2, 4(9)
  0523bc4  bctrl
  0523bc8  ld 2, 40(1)
  0523bcc  lwz 31, 364(28)
  0523bd0  cmpwi 7, 31, 0
  0523bd4  bt 30, 0x523c54
  0523bd8  lwz 0, 356(28)
  0523bdc  cmpwi 7, 0, 0
  0523be0  bt 30, 0x523c10
  0523be4  mr 29, 31
  0523be8  li 31, 0
  0523bec  clrldi 3, 29, 32
  0523bf0  addi 31, 31, 1
  0523bf4  bl 0x604738
  0523bf8  nop
  0523bfc  lwz 0, 356(28)
  0523c00  cmplw 7, 0, 31
  0523c04  addi 29, 29, 232
  0523c08  bt 29, 0x523bec
  0523c0c  lwz 31, 364(28)
  0523c10  mr 3, 25
  0523c14  bl 0x51cba4
  0523c18  lis 5, 4115
  0523c1c  mr 9, 3
  0523c20  clrldi 4, 31, 32
  0523c24  clrldi 3, 3, 32
  0523c28  ori 5, 5, 259
  0523c2c  li 6, 0
  0523c30  lwz 11, 0(9)
  0523c34  li 7, 0
  0523c38  lwz 9, 4(11)
  0523c3c  lwz 0, 0(9)
  0523c40  std 2, 40(1)
  0523c44  mtctr 0
  0523c48  lwz 2, 4(9)
  0523c4c  bctrl
  0523c50  ld 2, 40(1)
  0523c54  clrldi 3, 24, 32
  0523c58  bl 0x52df14
  0523c5c  nop
  0523c60  addi 3, 26, 312
  0523c64  clrldi 3, 3, 32
  0523c68  bl 0x52df14
  0523c6c  nop
  0523c70  addi 3, 26, 288
  0523c74  clrldi 3, 3, 32
  0523c78  bl 0x52d0e8
  0523c7c  nop
  0523c80  addi 3, 26, 264
  0523c84  clrldi 3, 3, 32
  0523c88  bl 0x52d0e8
  0523c8c  nop
  0523c90  addi 3, 26, 224
  0523c94  clrldi 3, 3, 32
  0523c98  bl 0x52df14
  0523c9c  nop
  0523ca0  mr 3, 23
  0523ca4  bl 0x52d018
  0523ca8  nop
  0523cac  addi 3, 26, 120
  0523cb0  clrldi 3, 3, 32
  0523cb4  bl 0x52df14
  0523cb8  nop
  0523cbc  addi 3, 26, 96
  0523cc0  clrldi 3, 3, 32
  0523cc4  bl 0x52e5f8
  0523cc8  nop
  0523ccc  addi 3, 26, 56
  0523cd0  clrldi 3, 3, 32
  0523cd4  bl 0x52df14
  0523cd8  nop
  0523cdc  addi 3, 26, 16
  0523ce0  clrldi 3, 3, 32
  0523ce4  bl 0x52df14
  0523ce8  nop
  0523cec  addi 3, 26, 4
  0523cf0  clrldi 3, 3, 32
  0523cf4  bl 0x5107d0
  0523cf8  nop
  0523cfc  lis 4, 4112
  0523d00  mr 3, 25
  0523d04  li 5, 3
  0523d08  ori 4, 4, 256
  0523d0c  bl 0x510704
  0523d10  nop
  0523d14  ld 0, 240(1)
  0523d18  ld 23, 136(1)
  0523d1c  ld 24, 144(1)
  0523d20  mtlr 0
  0523d24  ld 25, 152(1)
  0523d28  ld 26, 160(1)
  0523d2c  ld 27, 168(1)
  0523d30  ld 28, 176(1)
  0523d34  ld 29, 184(1)
  0523d38  ld 30, 192(1)
  0523d3c  ld 31, 200(1)
  0523d40  lfd 30, 208(1)
  0523d44  lfd 31, 216(1)
  0523d48  addi 1, 1, 224
  0523d4c  blr
  0523d50  lwz 3, -30632(2)
  0523d54  bl 0x52cbd8
  0523d58  nop
  0523d5c  lwz 4, 552(28)
  0523d60  isync
  0523d64  extsw 4, 4
  0523d68  lwz 3, -30628(2)
  0523d6c  bl 0x52cbd8
  0523d70  nop
  0523d74  lwz 4, 560(28)
  0523d78  lwz 3, -30624(2)
  0523d7c  extsw 4, 4
  0523d80  bl 0x52cbd8
  0523d84  nop
  0523d88  ld 0, 496(28)
  0523d8c  lwz 9, -30732(2)
  0523d90  std 0, 112(1)
  0523d94  lfd 0, 112(1)
  0523d98  fcfid 13, 0
  0523d9c  lfs 0, -30720(2)
  0523da0  fmr 12, 0
  0523da4  lwz 3, -30620(2)
  0523da8  lfd 30, 0(9)
  0523dac  fdiv 0, 13, 30
  0523db0  fcmpu 7, 0, 12
  0523db4  cror 30, 29, 30
  0523db8  bt 30, 0x523f2c
  0523dbc  fctidz 0, 0
  0523dc0  stfd 0, 112(1)
  0523dc4  ld 4, 112(1)
  0523dc8  lis 0, 17179
  0523dcc  addis 4, 4, 15
  0523dd0  ori 0, 0, 56962
  0523dd4  addi 4, 4, 16959
  0523dd8  sldi 0, 0, 32
  0523ddc  sradi 9, 4, 63
  0523de0  oris 0, 0, 55222
  0523de4  ori 0, 0, 13531
  0523de8  mulhd 4, 4, 0
  0523dec  sradi 4, 4, 18
  0523df0  sub 4, 4, 9
  0523df4  bl 0x52cbd8
  0523df8  nop
  0523dfc  lwz 3, -30616(2)
  0523e00  bl 0x52cbd8
  0523e04  nop
  0523e08  lwz 3, 352(28)
  0523e0c  clrldi 10, 3, 32
  0523e10  lwz 0, 140(10)
  0523e14  cmpwi 7, 0, 0
  0523e18  bt 30, 0x52392c
  0523e1c  lis 29, 8388
  0523e20  lwz 27, -30612(2)
  0523e24  li 24, -1
  0523e28  lfs 31, -30720(2)
  0523e2c  ori 29, 29, 39845
  0523e30  rldicr 24, 24, 0, 0
  0523e34  sldi 29, 29, 32
  0523e38  li 30, 0
  0523e3c  oris 29, 29, 58195
  0523e40  ori 29, 29, 63439
  0523e44  b 0x523e90
  0523e48  fctidz 0, 0
  0523e4c  stfd 0, 112(1)
  0523e50  ld 5, 112(1)
  0523e54  addi 5, 5, 999
  0523e58  mr 3, 27
  0523e5c  sradi 0, 5, 63
  0523e60  addi 30, 30, 1
  0523e64  mulhd 5, 5, 29
  0523e68  sradi 5, 5, 7
  0523e6c  sub 5, 5, 0
  0523e70  bl 0x52cbd8
  0523e74  nop
  0523e78  lwz 3, 352(28)
  0523e7c  clrldi 10, 3, 32
  0523e80  addi 9, 31, 1
  0523e84  lwz 0, 140(10)
  0523e88  cmplw 7, 0, 9
  0523e8c  bf 29, 0x52392c
  0523e90  lwz 11, 0(10)
  0523e94  clrldi 4, 30, 32
  0523e98  mr 3, 10
  0523e9c  mr 31, 30
  0523ea0  lwz 9, 12(11)
  0523ea4  lwz 0, 0(9)
  0523ea8  std 2, 40(1)
  0523eac  mtctr 0
  0523eb0  lwz 2, 4(9)
  0523eb4  bctrl
  0523eb8  ld 2, 40(1)
  0523ebc  lwz 0, 492(28)
  0523ec0  slwi 9, 30, 3
  0523ec4  clrldi 4, 3, 32
  0523ec8  add 9, 9, 0
  0523ecc  clrldi 9, 9, 32
  0523ed0  ld 0, 0(9)
  0523ed4  std 0, 112(1)
  0523ed8  lfd 13, 112(1)
  0523edc  fcfid 0, 13
  0523ee0  fdiv 0, 0, 30
  0523ee4  fcmpu 7, 0, 31
  0523ee8  cror 30, 29, 30
  0523eec  bf 30, 0x523e48
  0523ef0  fsub 0, 0, 31
  0523ef4  fctidz 0, 0
  0523ef8  stfd 0, 112(1)
  0523efc  ld 5, 112(1)
  0523f00  xor 5, 5, 24
  0523f04  b 0x523e54
  0523f08  mr 3, 23
  0523f0c  bl 0x52ced8
  0523f10  nop
  0523f14  b 0x52396c
  0523f18  lwz 3, 352(28)
  0523f1c  li 4, 0
  0523f20  bl 0x51b318
  0523f24  nop
  0523f28  b 0x523958
  0523f2c  fsub 0, 0, 12
  0523f30  li 0, -1
  0523f34  rldicr 0, 0, 0, 0
  0523f38  fctidz 0, 0
  0523f3c  stfd 0, 112(1)
  0523f40  ld 4, 112(1)
  0523f44  xor 4, 4, 0
  0523f48  b 0x523dc8
  0523f4c  lwz 30, 564(28)
  0523f50  b 0x523af0

FUN_00523f54:   # 0x523f54, 0x190 bytes
  0523f54  stdu 1, -144(1)
  0523f58  mflr 0
  0523f5c  std 31, 136(1)
  0523f60  mr 31, 5
  0523f64  std 0, 160(1)
  0523f68  addi 0, 31, -2
  0523f6c  lis 11, -32767
  0523f70  clrlwi 0, 0, 24
  0523f74  std 28, 112(1)
  0523f78  cmplwi 7, 0, 1
  0523f7c  std 29, 120(1)
  0523f80  std 30, 128(1)
  0523f84  mr 28, 3
  0523f88  ori 11, 11, 1799
  0523f8c  bf 29, 0x523fb4
  0523f90  ld 0, 160(1)
  0523f94  extsw 3, 11
  0523f98  ld 28, 112(1)
  0523f9c  ld 29, 120(1)
  0523fa0  mtlr 0
  0523fa4  ld 30, 128(1)
  0523fa8  ld 31, 136(1)
  0523fac  addi 1, 1, 144
  0523fb0  blr
  0523fb4  lwz 3, 12(6)
  0523fb8  mr 30, 6
  0523fbc  bl 0x604738
  0523fc0  nop
  0523fc4  cmpwi 7, 31, 2
  0523fc8  bt 30, 0x5240a8
  0523fcc  clrldi 3, 28, 32
  0523fd0  mr 31, 28
  0523fd4  bl 0x604788
  0523fd8  nop
  0523fdc  addi 8, 28, 484
  0523fe0  clrldi 11, 8, 32
  0523fe4  lwz 10, 0(8)
  0523fe8  isync
  0523fec  addi 9, 10, 1
  0523ff0  lwarx 0, 0, 11
  0523ff4  cmpw 7, 10, 0
  0523ff8  bf 30, 0x523fe4
  0523ffc  stwcx. 9, 0, 11
  0524000  mfocrf 0, 128
  0524004  rlwinm 0, 0, 0, 2, 2
  0524008  cmpwi 7, 0, 0
  052400c  bt 30, 0x523ff0
  0524010  addi 28, 31, 56
  0524014  clrldi 28, 28, 32
  0524018  mr 3, 28
  052401c  bl 0x52de58
  0524020  nop
  0524024  lwz 9, 36(30)
  0524028  lwz 11, 4(9)
  052402c  mftb 0, 268
  0524030  cmpwi 7, 0, 0
  0524034  bt- 30, 0x52402c
  0524038  addi 29, 31, 224
  052403c  std 0, 24(30)
  0524040  clrldi 29, 29, 32
  0524044  mr 3, 29
  0524048  bl 0x52de58
  052404c  nop
  0524050  addi 3, 31, 264
  0524054  li 0, 1
  0524058  clrldi 3, 3, 32
  052405c  stb 0, 380(31)
  0524060  bl 0x52dcf0
  0524064  nop
  0524068  mr 3, 29
  052406c  bl 0x52dda0
  0524070  nop
  0524074  mr 3, 28
  0524078  bl 0x52dda0
  052407c  nop
  0524080  ld 0, 160(1)
  0524084  ld 28, 112(1)
  0524088  li 11, 0
  052408c  ld 29, 120(1)
  0524090  ld 30, 128(1)
  0524094  mtlr 0
  0524098  extsw 3, 11
  052409c  ld 31, 136(1)
  05240a0  addi 1, 1, 144
  05240a4  blr
  05240a8  mftb 0, 268
  05240ac  cmpwi 7, 0, 0
  05240b0  bt- 30, 0x5240a8
  05240b4  lwz 9, -30744(2)
  05240b8  li 11, 0
  05240bc  std 0, 16(30)
  05240c0  lwz 0, 24(9)
  05240c4  clrlwi 0, 0, 31
  05240c8  cmpwi 7, 0, 0
  05240cc  bt+ 30, 0x523f90
  05240d0  lwz 3, 12(30)
  05240d4  bl 0x52757c
  05240d8  nop
  05240dc  li 11, 0
  05240e0  b 0x523f90

_ZN4cell4fios9scheduler13closeAllFilesEv:   # 0x5240e4, 0xd4 bytes
  05240e4  stdu 1, -160(1)
  05240e8  mflr 0
  05240ec  std 30, 144(1)
  05240f0  std 0, 176(1)
  05240f4  addi 0, 3, 16
  05240f8  std 31, 152(1)
  05240fc  mr 30, 3
  0524100  clrldi 31, 0, 32
  0524104  std 28, 128(1)
  0524108  mr 3, 31
  052410c  mr 28, 30
  0524110  std 29, 136(1)
  0524114  std 27, 120(1)
  0524118  bl 0x52de58
  052411c  nop
  0524120  lwzu 29, 572(28)
  0524124  cmpwi 7, 29, 0
  0524128  bt 30, 0x524188
  052412c  clrldi 30, 30, 32
  0524130  li 27, 0
  0524134  clrldi 29, 29, 32
  0524138  mr 3, 31
  052413c  lwz 0, 12(29)
  0524140  stw 0, 0(28)
  0524144  stw 27, 12(29)
  0524148  bl 0x52dda0
  052414c  nop
  0524150  mr 5, 29
  0524154  li 4, 0
  0524158  mr 3, 30
  052415c  bl 0x521b58
  0524160  li 4, 0
  0524164  clrldi 3, 3, 32
  0524168  bl 0x51c030
  052416c  nop
  0524170  mr 3, 31
  0524174  bl 0x52de58
  0524178  nop
  052417c  lwz 29, 0(28)
  0524180  cmpwi 7, 29, 0
  0524184  bf 30, 0x524134
  0524188  mr 3, 31
  052418c  bl 0x52dda0
  0524190  nop
  0524194  ld 0, 176(1)
  0524198  ld 27, 120(1)
  052419c  ld 28, 128(1)
  05241a0  mtlr 0
  05241a4  ld 29, 136(1)
  05241a8  ld 30, 144(1)
  05241ac  ld 31, 152(1)
  05241b0  addi 1, 1, 160
  05241b4  blr

FUN_005241b8:   # 0x5241b8, 0xe90 bytes
  05241b8  mfcr 12
  05241bc  stdu 1, -368(1)
  05241c0  std 24, 304(1)
  05241c4  clrldi 24, 3, 32
  05241c8  std 19, 264(1)
  05241cc  std 25, 312(1)
  05241d0  std 31, 360(1)
  05241d4  mr 25, 3
  05241d8  mr 31, 1
  05241dc  mr 19, 3
  05241e0  mr 3, 24
  05241e4  std 14, 224(1)
  05241e8  std 15, 232(1)
  05241ec  std 16, 240(1)
  05241f0  std 17, 248(1)
  05241f4  std 18, 256(1)
  05241f8  std 20, 272(1)
  05241fc  std 21, 280(1)
  0524200  std 22, 288(1)
  0524204  std 23, 296(1)
  0524208  std 26, 320(1)
  052420c  std 27, 328(1)
  0524210  std 28, 336(1)
  0524214  std 29, 344(1)
  0524218  std 30, 352(1)
  052421c  stw 12, 376(1)
  0524220  mflr 0
  0524224  std 0, 384(1)
  0524228  bl 0x604788
  052422c  nop
  0524230  mftb 14, 268
  0524234  cmpwi 7, 14, 0
  0524238  bt- 30, 0x524230
  052423c  lwz 9, -30732(2)
  0524240  lfs 0, -30580(2)
  0524244  lfs 12, -30720(2)
  0524248  lwz 22, 376(25)
  052424c  lfd 13, 0(9)
  0524250  fmul 0, 13, 0
  0524254  fcmpu 7, 0, 12
  0524258  cror 30, 29, 30
  052425c  bt 30, 0x525024
  0524260  fctidz 0, 0
  0524264  stfd 0, 144(31)
  0524268  lfs 0, -30576(2)
  052426c  fmul 0, 13, 0
  0524270  fcmpu 7, 0, 12
  0524274  cror 30, 29, 30
  0524278  bt 30, 0x525000
  052427c  fctidz 0, 0
  0524280  stfd 0, 120(31)
  0524284  slwi 28, 22, 2
  0524288  ld 0, 0(1)
  052428c  addi 10, 19, 532
  0524290  addi 29, 28, 30
  0524294  addi 11, 19, 536
  0524298  sldi 29, 29, 31
  052429c  addi 9, 19, 572
  05242a0  rldicr 29, 29, 33, 59
  05242a4  li 4, 0
  05242a8  neg 29, 29
  05242ac  mr 5, 28
  05242b0  stw 10, 156(31)
  05242b4  addi 10, 19, 540
  05242b8  stw 11, 160(31)
  05242bc  stdux 0, 1, 29
  05242c0  addi 18, 1, 112
  05242c4  stw 9, 168(31)
  05242c8  clrldi 3, 18, 32
  05242cc  stw 10, 164(31)
  05242d0  bl 0x5d0140
  05242d4  nop
  05242d8  ld 0, 0(1)
  05242dc  stdux 0, 1, 29
  05242e0  addi 15, 1, 112
  05242e4  addi 0, 19, 524
  05242e8  mr 5, 28
  05242ec  li 4, 0
  05242f0  clrldi 3, 15, 32
  05242f4  stw 0, 184(31)
  05242f8  bl 0x5d0140
  05242fc  nop
  0524300  addi 9, 19, 56
  0524304  addi 11, 19, 120
  0524308  addi 0, 19, 224
  052430c  clrldi 9, 9, 32
  0524310  clrldi 11, 11, 32
  0524314  li 16, 0
  0524318  addi 20, 19, 528
  052431c  li 17, 0
  0524320  clrldi 21, 0, 32
  0524324  std 9, 176(31)
  0524328  std 11, 192(31)
  052432c  cmpwi 3, 22, 0
  0524330  mr 3, 24
  0524334  cmpd 4, 16, 14
  0524338  bl 0x604788
  052433c  nop
  0524340  mr 3, 21
  0524344  bl 0x52de58
  0524348  nop
  052434c  mr 3, 24
  0524350  bl 0x51cbc8
  0524354  clrlwi 3, 3, 24
  0524358  cmpwi 7, 3, 0
  052435c  bt 30, 0x52439c
  0524360  b 0x5247d0
  0524364  bf 16, 0x524378
  0524368  mftb 16, 268
  052436c  cmpwi 7, 16, 0
  0524370  bt- 30, 0x524368
  0524374  cmpd 4, 16, 14
  0524378  addi 3, 19, 264
  052437c  mr 4, 21
  0524380  clrldi 3, 3, 32
  0524384  li 5, 0
  0524388  bl 0x52e49c
  052438c  nop
  0524390  mr 3, 24
  0524394  bl 0x604788
  0524398  nop
  052439c  mr 3, 24
  05243a0  bl 0x51cbec
  05243a4  clrlwi 3, 3, 24
  05243a8  cmpwi 7, 3, 0
  05243ac  bt 30, 0x524364
  05243b0  mr 3, 21
  05243b4  bl 0x52dda0
  05243b8  nop
  05243bc  bf 17, 0x5243cc
  05243c0  mftb 14, 268
  05243c4  cmpwi 7, 14, 0
  05243c8  bt- 30, 0x5243c0
  05243cc  ld 3, 176(31)
  05243d0  bl 0x52de58
  05243d4  nop
  05243d8  li 0, 0
  05243dc  lwz 9, 484(25)
  05243e0  stb 0, 380(25)
  05243e4  isync
  05243e8  stw 9, 488(25)
  05243ec  bt 14, 0x524d28
  05243f0  li 29, 0
  05243f4  li 26, 0
  05243f8  li 27, 0
  05243fc  li 28, 0
  0524400  b 0x524414
  0524404  addi 29, 29, 1
  0524408  addi 28, 28, 4
  052440c  cmpw 7, 22, 29
  0524410  bt 30, 0x52454c
  0524414  slwi 30, 29, 6
  0524418  lwz 0, 564(25)
  052441c  add 0, 30, 0
  0524420  clrldi 11, 0, 32
  0524424  lwz 9, 12(11)
  0524428  cmpwi 7, 9, 0
  052442c  bt 30, 0x524404
  0524430  lwz 0, 36(11)
  0524434  cmpwi 7, 0, 0
  0524438  bt 30, 0x524404
  052443c  ld 0, 24(11)
  0524440  cmpdi 7, 0, 0
  0524444  bt 30, 0x524404
  0524448  ld 5, 16(11)
  052444c  mr 3, 24
  0524450  lwz 4, 52(11)
  0524454  sub 5, 0, 5
  0524458  bl 0x51cc60
  052445c  lwz 11, 564(25)
  0524460  add 0, 30, 11
  0524464  clrldi 9, 0, 32
  0524468  lwz 4, 48(9)
  052446c  cmpwi 7, 4, 0
  0524470  bt 30, 0x524480
  0524474  ld 0, 24(9)
  0524478  cmpd 7, 0, 27
  052447c  bt 29, 0x524d6c
  0524480  add 0, 30, 11
  0524484  clrldi 10, 0, 32
  0524488  lwz 9, 36(10)
  052448c  lwz 0, 4(9)
  0524490  cmpwi 7, 0, 0
  0524494  bf 30, 0x5244ac
  0524498  lwz 0, 0(9)
  052449c  cmpwi 7, 0, 10
  05244a0  bt 30, 0x524d44
  05244a4  cmpwi 7, 0, 6
  05244a8  bt 30, 0x524d44
  05244ac  add 9, 30, 11
  05244b0  mr 3, 24
  05244b4  clrldi 9, 9, 32
  05244b8  lwz 5, 36(9)
  05244bc  lwz 4, 12(9)
  05244c0  bl 0x5224a4
  05244c4  lwz 11, 564(25)
  05244c8  add 0, 30, 11
  05244cc  clrldi 10, 0, 32
  05244d0  lwz 11, 12(10)
  05244d4  clrldi 9, 11, 32
  05244d8  lwz 0, 28(9)
  05244dc  rlwinm 0, 0, 0, 21, 21
  05244e0  cmpwi 7, 0, 0
  05244e4  bt 30, 0x5244f4
  05244e8  add 9, 28, 18
  05244ec  clrldi 9, 9, 32
  05244f0  stw 11, 0(9)
  05244f4  addi 8, 19, 548
  05244f8  li 0, 0
  05244fc  clrldi 11, 8, 32
  0524500  std 0, 24(10)
  0524504  stw 17, 12(10)
  0524508  stw 17, 36(10)
  052450c  std 0, 16(10)
  0524510  lwz 10, 0(8)
  0524514  isync
  0524518  addi 9, 10, -1
  052451c  lwarx 0, 0, 11
  0524520  cmpw 7, 10, 0
  0524524  bf 30, 0x524510
  0524528  stwcx. 9, 0, 11
  052452c  mfocrf 0, 128
  0524530  rlwinm 0, 0, 0, 2, 2
  0524534  cmpwi 7, 0, 0
  0524538  bt 30, 0x52451c
  052453c  addi 29, 29, 1
  0524540  addi 28, 28, 4
  0524544  cmpw 7, 22, 29
  0524548  bf 30, 0x524414
  052454c  mr 3, 24
  0524550  bl 0x522104
  0524554  clrlwi 0, 26, 24
  0524558  cmpwi 7, 0, 0
  052455c  bt 30, 0x524d30
  0524560  lwz 29, 0(20)
  0524564  mr 23, 20
  0524568  li 26, 1
  052456c  cmpwi 7, 29, 0
  0524570  bt 30, 0x524630
  0524574  bt 14, 0x524db4
  0524578  li 27, 0
  052457c  clrldi 30, 29, 32
  0524580  mr 28, 15
  0524584  clrldi 9, 28, 32
  0524588  lwz 4, 0(9)
  052458c  cmpwi 7, 4, 0
  0524590  bt 30, 0x524d0c
  0524594  clrldi 4, 4, 32
  0524598  mr 3, 30
  052459c  bl 0x51c554
  05245a0  nop
  05245a4  clrlwi 3, 3, 24
  05245a8  cmpwi 7, 3, 0
  05245ac  bt- 30, 0x524d0c
  05245b0  lwz 0, 0(20)
  05245b4  lwz 9, 560(25)
  05245b8  cmpw 7, 0, 29
  05245bc  addi 9, 9, 1
  05245c0  stw 9, 560(25)
  05245c4  bt 30, 0x524d20
  05245c8  cmpwi 7, 0, 0
  05245cc  bf 30, 0x5245d8
  05245d0  b 0x524d0c
  05245d4  bt 26, 0x524d0c
  05245d8  clrldi 9, 0, 32
  05245dc  mr 11, 0
  05245e0  lwz 0, 0(9)
  05245e4  cmpw 7, 29, 0
  05245e8  cmpwi 6, 0, 0
  05245ec  bf 30, 0x5245d4
  05245f0  clrldi 11, 11, 32
  05245f4  lwz 9, 0(30)
  05245f8  clrldi 10, 23, 32
  05245fc  li 0, 0
  0524600  mr 23, 29
  0524604  stw 9, 0(11)
  0524608  stw 0, 0(30)
  052460c  lwz 9, 0(10)
  0524610  stw 9, 0(30)
  0524614  stw 29, 0(10)
  0524618  lwz 29, 0(30)
  052461c  cmpwi 7, 29, 0
  0524620  bt 30, 0x524630
  0524624  cmpwi 7, 26, 32
  0524628  addi 26, 26, 1
  052462c  bf 30, 0x524574
  0524630  bt 14, 0x524e90
  0524634  clrldi 9, 22, 32
  0524638  li 0, 0
  052463c  mr 11, 15
  0524640  mtctr 9
  0524644  clrldi 9, 11, 32
  0524648  addi 11, 11, 4
  052464c  stw 0, 0(9)
  0524650  bdnz 0x524644
  0524654  ld 3, 176(31)
  0524658  bl 0x52dda0
  052465c  nop
  0524660  li 27, 0
  0524664  li 30, 0
  0524668  add 0, 30, 18
  052466c  clrldi 26, 0, 32
  0524670  lwz 9, 0(26)
  0524674  cmpwi 7, 9, 0
  0524678  clrldi 28, 9, 32
  052467c  bt 30, 0x5246b4
  0524680  lwz 29, 48(28)
  0524684  isync
  0524688  li 4, 1
  052468c  li 5, 0
  0524690  mr 3, 28
  0524694  rlwinm 29, 29, 0, 23, 23
  0524698  bl 0x51c390
  052469c  nop
  05246a0  mr 4, 28
  05246a4  cmpwi 7, 29, 0
  05246a8  mr 3, 24
  05246ac  bf 30, 0x5247e4
  05246b0  stw 17, 0(26)
  05246b4  addi 27, 27, 1
  05246b8  addi 30, 30, 4
  05246bc  cmplw 7, 22, 27
  05246c0  bt 29, 0x524668
  05246c4  ld 3, 176(31)
  05246c8  bl 0x52de58
  05246cc  nop
  05246d0  mr 3, 24
  05246d4  bl 0x604788
  05246d8  nop
  05246dc  lwz 0, 484(25)
  05246e0  lwz 9, 488(25)
  05246e4  cmpw 7, 9, 0
  05246e8  bf- 30, 0x524744
  05246ec  lwz 27, 184(31)
  05246f0  li 9, 0
  05246f4  clrldi 28, 27, 32
  05246f8  lwz 11, 0(27)
  05246fc  isync
  0524700  mr 29, 11
  0524704  lwarx 0, 0, 28
  0524708  cmpw 7, 11, 0
  052470c  bf 30, 0x524728
  0524710  stwcx. 9, 0, 28
  0524714  mfocrf 0, 128
  0524718  rlwinm 0, 0, 0, 2, 2
  052471c  cmpwi 7, 0, 0
  0524720  bt 30, 0x524704
  0524724  mr 0, 11
  0524728  cmpw 7, 11, 0
  052472c  bf- 30, 0x5246f8
  0524730  cmpwi 7, 11, 0
  0524734  li 26, 0
  0524738  li 11, 0
  052473c  li 8, 0
  0524740  bf 30, 0x5247f8
  0524744  mr 3, 24
  0524748  bl 0x522104
  052474c  mr 3, 24
  0524750  bl 0x522c50
  0524754  mr 3, 21
  0524758  bl 0x52de58
  052475c  nop
  0524760  ld 3, 192(31)
  0524764  bl 0x52de58
  0524768  nop
  052476c  lwz 0, 388(25)
  0524770  isync
  0524774  cmpwi 7, 0, 0
  0524778  bt- 30, 0x5248ac
  052477c  ld 3, 192(31)
  0524780  cmpd 4, 16, 14
  0524784  bl 0x52dda0
  0524788  nop
  052478c  mr 3, 21
  0524790  bl 0x52dda0
  0524794  nop
  0524798  ld 3, 176(31)
  052479c  bl 0x52dda0
  05247a0  nop
  05247a4  mr 3, 24
  05247a8  bl 0x604788
  05247ac  nop
  05247b0  mr 3, 21
  05247b4  bl 0x52de58
  05247b8  nop
  05247bc  mr 3, 24
  05247c0  bl 0x51cbc8
  05247c4  clrlwi 3, 3, 24
  05247c8  cmpwi 7, 3, 0
  05247cc  bt 30, 0x52439c
  05247d0  addi 3, 19, 288
  05247d4  clrldi 3, 3, 32
  05247d8  bl 0x52dcf0
  05247dc  nop
  05247e0  b 0x52439c
  05247e4  bl 0x51fd24
  05247e8  b 0x5246b0
  05247ec  stw 26, 0(9)
  05247f0  mr 26, 29
  05247f4  mr 29, 10
  05247f8  cmpwi 7, 29, 0
  05247fc  clrldi 9, 29, 32
  0524800  bt 30, 0x52484c
  0524804  lwz 0, 48(9)
  0524808  lwz 10, 0(9)
  052480c  rlwinm 0, 0, 0, 22, 22
  0524810  stw 8, 0(9)
  0524814  cmpwi 7, 0, 0
  0524818  bf- 30, 0x5247ec
  052481c  stw 11, 0(9)
  0524820  mr 11, 29
  0524824  mr 29, 10
  0524828  b 0x5247f8
  052482c  lwz 30, 0(9)
  0524830  stw 17, 0(9)
  0524834  bl 0x51d588
  0524838  lwz 9, 484(25)
  052483c  lwz 0, 488(25)
  0524840  mr 11, 30
  0524844  cmpw 7, 0, 9
  0524848  bf- 30, 0x524dbc
  052484c  cmpwi 7, 11, 0
  0524850  clrldi 9, 11, 32
  0524854  mr 3, 24
  0524858  mr 4, 9
  052485c  bf 30, 0x52482c
  0524860  cmpwi 7, 26, 0
  0524864  bt+ 30, 0x524744
  0524868  clrldi 4, 26, 32
  052486c  mr 3, 24
  0524870  bl 0x522b14
  0524874  mr 3, 24
  0524878  bl 0x522104
  052487c  mr 3, 24
  0524880  bl 0x522c50
  0524884  mr 3, 21
  0524888  bl 0x52de58
  052488c  nop
  0524890  ld 3, 192(31)
  0524894  bl 0x52de58
  0524898  nop
  052489c  lwz 0, 388(25)
  05248a0  isync
  05248a4  cmpwi 7, 0, 0
  05248a8  bf+ 30, 0x52477c
  05248ac  lwz 9, 156(31)
  05248b0  lwz 11, 160(31)
  05248b4  lwz 8, 0(20)
  05248b8  lwz 7, 524(25)
  05248bc  lwz 0, 0(9)
  05248c0  lwz 10, 0(11)
  05248c4  srawi 11, 0, 31
  05248c8  xor 9, 11, 0
  05248cc  srawi 0, 10, 31
  05248d0  sub 9, 9, 11
  05248d4  xor 11, 0, 10
  05248d8  addi 9, 9, -1
  05248dc  sub 11, 11, 0
  05248e0  srwi 23, 9, 31
  05248e4  addi 11, 11, -1
  05248e8  srwi 27, 11, 31
  05248ec  isync
  05248f0  lwz 9, 168(31)
  05248f4  cmpwi 7, 8, 0
  05248f8  lwz 11, 164(31)
  05248fc  lwz 0, 0(9)
  0524900  lwz 10, 0(11)
  0524904  srawi 11, 0, 31
  0524908  xor 9, 11, 0
  052490c  srawi 0, 10, 31
  0524910  sub 9, 9, 11
  0524914  xor 11, 0, 10
  0524918  addi 9, 9, -1
  052491c  sub 11, 11, 0
  0524920  srwi 28, 9, 31
  0524924  addi 11, 11, -1
  0524928  srwi 26, 11, 31
  052492c  bf 30, 0x524eb4
  0524930  clrlwi 30, 23, 24
  0524934  cmpwi 7, 30, 0
  0524938  bt 30, 0x524ea0
  052493c  clrlwi 23, 27, 24
  0524940  clrlwi 9, 26, 24
  0524944  cmpwi 7, 23, 0
  0524948  stw 9, 152(31)
  052494c  clrlwi 27, 28, 24
  0524950  bt 30, 0x52496c
  0524954  cmpwi 7, 9, 0
  0524958  bt 30, 0x52496c
  052495c  cmpwi 7, 7, 0
  0524960  bf 30, 0x52496c
  0524964  cmpwi 7, 27, 0
  0524968  bf 30, 0x524f74
  052496c  lwz 3, -30524(2)
  0524970  bl 0x52cbd8
  0524974  nop
  0524978  cmpwi 7, 30, 0
  052497c  bf 30, 0x524a20
  0524980  lwz 10, 156(31)
  0524984  li 4, 0
  0524988  lwz 9, 0(10)
  052498c  cmpwi 7, 9, 0
  0524990  bt 30, 0x5249a8
  0524994  clrldi 9, 9, 32
  0524998  addi 4, 4, 1
  052499c  lwz 9, 0(9)
  05249a0  cmpwi 7, 9, 0
  05249a4  bf 30, 0x524994
  05249a8  extsw 4, 4
  05249ac  lwz 3, -30556(2)
  05249b0  bl 0x52cbd8
  05249b4  nop
  05249b8  lwz 9, 156(31)
  05249bc  lwz 3, -30552(2)
  05249c0  lwz 30, 0(9)
  05249c4  bl 0x52cbd8
  05249c8  nop
  05249cc  cmpwi 7, 30, 0
  05249d0  bt 30, 0x524a14
  05249d4  lwz 29, -30564(2)
  05249d8  clrldi 30, 30, 32
  05249dc  mr 3, 29
  05249e0  li 4, 0
  05249e4  lwz 11, 52(30)
  05249e8  clrldi 9, 11, 32
  05249ec  lbz 0, 0(9)
  05249f0  cmpwi 7, 0, 0
  05249f4  bt 30, 0x5249fc
  05249f8  mr 4, 11
  05249fc  clrldi 4, 4, 32
  0524a00  bl 0x52cbd8
  0524a04  nop
  0524a08  lwz 30, 0(30)
  0524a0c  cmpwi 7, 30, 0
  0524a10  bf 30, 0x5249d8
  0524a14  lwz 3, -30560(2)
  0524a18  bl 0x52cbd8
  0524a1c  nop
  0524a20  cmpwi 7, 23, 0
  0524a24  bf 30, 0x524ac8
  0524a28  lwz 10, 160(31)
  0524a2c  li 4, 0
  0524a30  lwz 9, 0(10)
  0524a34  cmpwi 7, 9, 0
  0524a38  bt 30, 0x524a50
  0524a3c  clrldi 9, 9, 32
  0524a40  addi 4, 4, 1
  0524a44  lwz 9, 0(9)
  0524a48  cmpwi 7, 9, 0
  0524a4c  bf 30, 0x524a3c
  0524a50  extsw 4, 4
  0524a54  lwz 3, -30548(2)
  0524a58  bl 0x52cbd8
  0524a5c  nop
  0524a60  lwz 9, 160(31)
  0524a64  lwz 3, -30544(2)
  0524a68  lwz 30, 0(9)
  0524a6c  bl 0x52cbd8
  0524a70  nop
  0524a74  cmpwi 7, 30, 0
  0524a78  bt 30, 0x524abc
  0524a7c  lwz 29, -30564(2)
  0524a80  clrldi 30, 30, 32
  0524a84  mr 3, 29
  0524a88  li 4, 0
  0524a8c  lwz 11, 52(30)
  0524a90  clrldi 9, 11, 32
  0524a94  lbz 0, 0(9)
  0524a98  cmpwi 7, 0, 0
  0524a9c  bt 30, 0x524aa4
  0524aa0  mr 4, 11
  0524aa4  clrldi 4, 4, 32
  0524aa8  bl 0x52cbd8
  0524aac  nop
  0524ab0  lwz 30, 0(30)
  0524ab4  cmpwi 7, 30, 0
  0524ab8  bf 30, 0x524a80
  0524abc  lwz 3, -30560(2)
  0524ac0  bl 0x52cbd8
  0524ac4  nop
  0524ac8  cmpwi 7, 27, 0
  0524acc  bf 30, 0x524b70
  0524ad0  lwz 10, 168(31)
  0524ad4  li 4, 0
  0524ad8  lwz 9, 0(10)
  0524adc  cmpwi 7, 9, 0
  0524ae0  bt 30, 0x524af8
  0524ae4  clrldi 9, 9, 32
  0524ae8  addi 4, 4, 1
  0524aec  lwz 9, 12(9)
  0524af0  cmpwi 7, 9, 0
  0524af4  bf 30, 0x524ae4
  0524af8  extsw 4, 4
  0524afc  lwz 3, -30540(2)
  0524b00  bl 0x52cbd8
  0524b04  nop
  0524b08  lwz 9, 168(31)
  0524b0c  lwz 3, -30536(2)
  0524b10  lwz 30, 0(9)
  0524b14  bl 0x52cbd8
  0524b18  nop
  0524b1c  cmpwi 7, 30, 0
  0524b20  bt 30, 0x524b64
  0524b24  lwz 29, -30564(2)
  0524b28  clrldi 30, 30, 32
  0524b2c  mr 3, 29
  0524b30  li 4, 0
  0524b34  lwz 11, 48(30)
  0524b38  clrldi 9, 11, 32
  0524b3c  lbz 0, 0(9)
  0524b40  cmpwi 7, 0, 0
  0524b44  bt 30, 0x524b4c
  0524b48  mr 4, 11
  0524b4c  clrldi 4, 4, 32
  0524b50  bl 0x52cbd8
  0524b54  nop
  0524b58  lwz 30, 12(30)
  0524b5c  cmpwi 7, 30, 0
  0524b60  bf 30, 0x524b28
  0524b64  lwz 3, -30560(2)
  0524b68  bl 0x52cbd8
  0524b6c  nop
  0524b70  lwz 0, 152(31)
  0524b74  cmpwi 7, 0, 0
  0524b78  bf 30, 0x524c1c
  0524b7c  lwz 10, 164(31)
  0524b80  li 4, 0
  0524b84  lwz 9, 0(10)
  0524b88  cmpwi 7, 9, 0
  0524b8c  bt 30, 0x524ba4
  0524b90  clrldi 9, 9, 32
  0524b94  addi 4, 4, 1
  0524b98  lwz 9, 0(9)
  0524b9c  cmpwi 7, 9, 0
  0524ba0  bf 30, 0x524b90
  0524ba4  extsw 4, 4
  0524ba8  lwz 3, -30532(2)
  0524bac  bl 0x52cbd8
  0524bb0  nop
  0524bb4  lwz 9, 164(31)
  0524bb8  lwz 3, -30528(2)
  0524bbc  lwz 30, 0(9)
  0524bc0  bl 0x52cbd8
  0524bc4  nop
  0524bc8  cmpwi 7, 30, 0
  0524bcc  bt 30, 0x524c10
  0524bd0  lwz 29, -30564(2)
  0524bd4  clrldi 30, 30, 32
  0524bd8  mr 3, 29
  0524bdc  li 4, 0
  0524be0  lwz 11, 52(30)
  0524be4  clrldi 9, 11, 32
  0524be8  lbz 0, 0(9)
  0524bec  cmpwi 7, 0, 0
  0524bf0  bt 30, 0x524bf8
  0524bf4  mr 4, 11
  0524bf8  clrldi 4, 4, 32
  0524bfc  bl 0x52cbd8
  0524c00  nop
  0524c04  lwz 30, 0(30)
  0524c08  cmpwi 7, 30, 0
  0524c0c  bf 30, 0x524bd4
  0524c10  lwz 3, -30560(2)
  0524c14  bl 0x52cbd8
  0524c18  nop
  0524c1c  lwz 9, 156(31)
  0524c20  lwz 8, 0(9)
  0524c24  cmpwi 7, 8, 0
  0524c28  bt 30, 0x524c90
  0524c2c  clrldi 7, 8, 32
  0524c30  lwz 10, 156(31)
  0524c34  addi 0, 8, 48
  0524c38  clrldi 11, 0, 32
  0524c3c  lwz 9, 0(7)
  0524c40  stw 9, 0(10)
  0524c44  stw 17, 0(7)
  0524c48  lwz 10, 0(11)
  0524c4c  isync
  0524c50  ori 9, 10, 512
  0524c54  lwarx 0, 0, 11
  0524c58  cmpw 7, 10, 0
  0524c5c  bf 30, 0x524c48
  0524c60  stwcx. 9, 0, 11
  0524c64  mfocrf 0, 128
  0524c68  rlwinm 0, 0, 0, 2, 2
  0524c6c  cmpwi 7, 0, 0
  0524c70  bt 30, 0x524c54
  0524c74  lwz 10, 156(31)
  0524c78  lwz 0, 0(20)
  0524c7c  stw 0, 0(7)
  0524c80  stw 8, 0(20)
  0524c84  lwz 8, 0(10)
  0524c88  cmpwi 7, 8, 0
  0524c8c  bf 30, 0x524c2c
  0524c90  ld 3, 192(31)
  0524c94  bl 0x52dda0
  0524c98  nop
  0524c9c  mr 3, 21
  0524ca0  bl 0x52dda0
  0524ca4  nop
  0524ca8  ld 3, 176(31)
  0524cac  bl 0x52dda0
  0524cb0  nop
  0524cb4  mftb 3, 268
  0524cb8  cmpwi 7, 3, 0
  0524cbc  bt- 30, 0x524cb4
  0524cc0  ld 0, 144(31)
  0524cc4  add 3, 0, 3
  0524cc8  bl 0x52e984
  0524ccc  nop
  0524cd0  ld 9, 144(31)
  0524cd4  sldi 0, 9, 1
  0524cd8  addi 11, 31, 128
  0524cdc  add 0, 0, 9
  0524ce0  ld 9, 120(31)
  0524ce4  sradi 0, 0, 1
  0524ce8  addze 0, 0
  0524cec  cmpd 7, 0, 9
  0524cf0  std 0, 128(31)
  0524cf4  bt 28, 0x524cfc
  0524cf8  addi 11, 31, 120
  0524cfc  clrldi 9, 11, 32
  0524d00  ld 9, 0(9)
  0524d04  std 9, 144(31)
  0524d08  b 0x524330
  0524d0c  addi 27, 27, 1
  0524d10  addi 28, 28, 4
  0524d14  cmpw 7, 22, 27
  0524d18  bf 30, 0x524584
  0524d1c  b 0x524618
  0524d20  mr 11, 20
  0524d24  b 0x5245f0
  0524d28  mr 3, 24
  0524d2c  bl 0x522104
  0524d30  ld 3, 176(31)
  0524d34  bl 0x52dda0
  0524d38  nop
  0524d3c  bf 14, 0x524660
  0524d40  b 0x5246c4
  0524d44  lhz 0, 84(9)
  0524d48  rlwinm 0, 0, 0, 26, 26
  0524d4c  cmpwi 7, 0, 0
  0524d50  bf 30, 0x5244ac
  0524d54  add 9, 28, 15
  0524d58  lwz 0, 12(10)
  0524d5c  li 26, 1
  0524d60  clrldi 9, 9, 32
  0524d64  stw 0, 0(9)
  0524d68  b 0x5244ac
  0524d6c  lwz 9, 352(25)
  0524d70  clrldi 4, 4, 32
  0524d74  lwz 3, 504(25)
  0524d78  lwz 5, 136(9)
  0524d7c  bl 0x5c5ad0
  0524d80  nop
  0524d84  lwz 9, 564(25)
  0524d88  lwz 11, 352(25)
  0524d8c  add 9, 30, 9
  0524d90  lwz 3, 508(25)
  0524d94  clrldi 9, 9, 32
  0524d98  lwz 5, 136(11)
  0524d9c  lwz 4, 48(9)
  0524da0  ld 27, 24(9)
  0524da4  bl 0x5c5ad0
  0524da8  nop
  0524dac  lwz 11, 564(25)
  0524db0  b 0x524480
  0524db4  clrldi 30, 29, 32
  0524db8  b 0x524618
  0524dbc  cmpwi 7, 30, 0
  0524dc0  mr 0, 30
  0524dc4  bf+ 30, 0x524dd0
  0524dc8  b 0x524860
  0524dcc  mr 0, 11
  0524dd0  clrldi 9, 0, 32
  0524dd4  lwz 11, 0(9)
  0524dd8  stw 29, 0(9)
  0524ddc  cmpwi 7, 11, 0
  0524de0  mr 29, 0
  0524de4  bf 30, 0x524dcc
  0524de8  mr 11, 0
  0524dec  lwarx 0, 0, 28
  0524df0  cmpwi 7, 0, 0
  0524df4  bf 30, 0x524e18
  0524df8  stwcx. 11, 0, 28
  0524dfc  mfocrf 0, 128
  0524e00  rlwinm 0, 0, 0, 2, 2
  0524e04  cmpwi 7, 0, 0
  0524e08  bf 30, 0x524860
  0524e0c  lwarx 0, 0, 28
  0524e10  cmpwi 7, 0, 0
  0524e14  bt 30, 0x524df8
  0524e18  lwz 8, 0(27)
  0524e1c  isync
  0524e20  li 10, 0
  0524e24  mr 9, 8
  0524e28  lwarx 0, 0, 28
  0524e2c  cmpw 7, 8, 0
  0524e30  bf 30, 0x524e4c
  0524e34  stwcx. 10, 0, 28
  0524e38  mfocrf 0, 128
  0524e3c  rlwinm 0, 0, 0, 2, 2
  0524e40  cmpwi 7, 0, 0
  0524e44  bt 30, 0x524e28
  0524e48  mr 0, 8
  0524e4c  cmpw 7, 8, 0
  0524e50  bf- 30, 0x524e18
  0524e54  cmpwi 7, 11, 0
  0524e58  stw 8, 112(31)
  0524e5c  bt- 30, 0x524e88
  0524e60  cmpwi 7, 8, 0
  0524e64  addi 0, 31, 112
  0524e68  bt 30, 0x524e80
  0524e6c  mr 0, 9
  0524e70  clrldi 9, 9, 32
  0524e74  lwz 9, 0(9)
  0524e78  cmpwi 7, 9, 0
  0524e7c  bf 30, 0x524e6c
  0524e80  clrldi 9, 0, 32
  0524e84  stw 11, 0(9)
  0524e88  lwz 11, 112(31)
  0524e8c  b 0x524dec
  0524e90  ld 3, 176(31)
  0524e94  bl 0x52dda0
  0524e98  nop
  0524e9c  b 0x5246c4
  0524ea0  clrlwi 23, 27, 24
  0524ea4  clrlwi 26, 26, 24
  0524ea8  clrlwi 27, 28, 24
  0524eac  stw 26, 152(31)
  0524eb0  b 0x52496c
  0524eb4  lwz 3, -30524(2)
  0524eb8  bl 0x52cbd8
  0524ebc  nop
  0524ec0  lwz 9, 0(20)
  0524ec4  cmpwi 7, 9, 0
  0524ec8  li 4, 0
  0524ecc  bt 30, 0x524ee8
  0524ed0  li 4, 0
  0524ed4  clrldi 9, 9, 32
  0524ed8  addi 4, 4, 1
  0524edc  lwz 9, 0(9)
  0524ee0  cmpwi 7, 9, 0
  0524ee4  bf 30, 0x524ed4
  0524ee8  extsw 4, 4
  0524eec  lwz 3, -30572(2)
  0524ef0  bl 0x52cbd8
  0524ef4  nop
  0524ef8  lwz 30, 0(20)
  0524efc  lwz 3, -30568(2)
  0524f00  bl 0x52cbd8
  0524f04  nop
  0524f08  cmpwi 7, 30, 0
  0524f0c  bt 30, 0x524f50
  0524f10  lwz 29, -30564(2)
  0524f14  clrldi 30, 30, 32
  0524f18  mr 3, 29
  0524f1c  li 4, 0
  0524f20  lwz 11, 52(30)
  0524f24  clrldi 9, 11, 32
  0524f28  lbz 0, 0(9)
  0524f2c  cmpwi 7, 0, 0
  0524f30  bt 30, 0x524f38
  0524f34  mr 4, 11
  0524f38  clrldi 4, 4, 32
  0524f3c  bl 0x52cbd8
  0524f40  nop
  0524f44  lwz 30, 0(30)
  0524f48  cmpwi 7, 30, 0
  0524f4c  bf 30, 0x524f14
  0524f50  clrlwi 26, 26, 24
  0524f54  lwz 3, -30560(2)
  0524f58  clrlwi 30, 23, 24
  0524f5c  clrlwi 23, 27, 24
  0524f60  clrlwi 27, 28, 24
  0524f64  stw 26, 152(31)
  0524f68  bl 0x52cbd8
  0524f6c  nop
  0524f70  b 0x524978
  0524f74  ld 3, 192(31)
  0524f78  bl 0x52dda0
  0524f7c  nop
  0524f80  mr 3, 21
  0524f84  bl 0x52dda0
  0524f88  nop
  0524f8c  ld 3, 176(31)
  0524f90  bl 0x52dda0
  0524f94  nop
  0524f98  ld 11, 0(1)
  0524f9c  lwz 12, 8(11)
  0524fa0  ld 0, 16(11)
  0524fa4  ld 14, -144(11)
  0524fa8  mtocrf 16, 12
  0524fac  ld 15, -136(11)
  0524fb0  mtlr 0
  0524fb4  ld 16, -128(11)
  0524fb8  mtocrf 8, 12
  0524fbc  ld 17, -120(11)
  0524fc0  ld 18, -112(11)
  0524fc4  ld 19, -104(11)
  0524fc8  ld 20, -96(11)
  0524fcc  ld 21, -88(11)
  0524fd0  ld 22, -80(11)
  0524fd4  ld 23, -72(11)
  0524fd8  ld 24, -64(11)
  0524fdc  ld 25, -56(11)
  0524fe0  ld 26, -48(11)
  0524fe4  ld 27, -40(11)
  0524fe8  ld 28, -32(11)
  0524fec  ld 29, -24(11)
  0524ff0  ld 30, -16(11)
  0524ff4  ld 31, -8(11)
  0524ff8  mr 1, 11
  0524ffc  blr
  0525000  fsub 0, 0, 12
  0525004  li 9, -1
  0525008  rldicr 9, 9, 0, 0
  052500c  fctidz 0, 0
  0525010  stfd 0, 208(31)
  0525014  ld 0, 208(31)
  0525018  xor 0, 0, 9
  052501c  std 0, 120(31)
  0525020  b 0x524284
  0525024  fsub 0, 0, 12
  0525028  li 0, -1
  052502c  rldicr 0, 0, 0, 0
  0525030  fctidz 0, 0
  0525034  stfd 0, 144(31)
  0525038  ld 9, 144(31)
  052503c  xor 9, 9, 0
  0525040  std 9, 144(31)
  0525044  b 0x524268

FUN_00525048:   # 0x525048, 0x8 bytes
  0525048  mr 3, 4
  052504c  b 0x5241b8

_ZN4cell4fios9scheduler12rescheduleOpEPNS0_2opExa:   # 0x525050, 0x134 bytes
  0525050  stdu 1, -176(1)
  0525054  mflr 0
  0525058  std 26, 128(1)
  052505c  clrldi 26, 3, 32
  0525060  std 30, 160(1)
  0525064  mr 30, 3
  0525068  mr 3, 26
  052506c  std 24, 112(1)
  0525070  std 25, 120(1)
  0525074  std 29, 152(1)
  0525078  std 31, 168(1)
  052507c  mr 29, 4
  0525080  std 27, 136(1)
  0525084  std 28, 144(1)
  0525088  std 0, 192(1)
  052508c  mr 24, 5
  0525090  mr 25, 6
  0525094  bl 0x604788
  0525098  nop
  052509c  clrlwi 3, 3, 24
  05250a0  mr 31, 29
  05250a4  cmpwi 7, 3, 0
  05250a8  bt- 30, 0x525154
  05250ac  clrldi 27, 29, 32
  05250b0  mr 3, 27
  05250b4  bl 0x604738
  05250b8  nop
  05250bc  clrlwi 3, 3, 24
  05250c0  cmpwi 7, 3, 0
  05250c4  bt- 30, 0x525154
  05250c8  addi 0, 30, 56
  05250cc  clrldi 28, 0, 32
  05250d0  mr 3, 28
  05250d4  bl 0x52de58
  05250d8  nop
  05250dc  cmpwi 1, 29, 0
  05250e0  bt- 6, 0x525148
  05250e4  mr 11, 30
  05250e8  lwzu 9, 528(11)
  05250ec  cmpw 7, 31, 9
  05250f0  bt 30, 0x52511c
  05250f4  cmpwi 7, 9, 0
  05250f8  bf 30, 0x525104
  05250fc  b 0x525148
  0525100  bt 26, 0x525148
  0525104  mr 11, 9
  0525108  clrldi 9, 9, 32
  052510c  lwz 9, 0(9)
  0525110  cmpw 7, 31, 9
  0525114  cmpwi 6, 9, 0
  0525118  bf 30, 0x525100
  052511c  bt 6, 0x525148
  0525120  clrldi 9, 11, 32
  0525124  lwz 0, 0(29)
  0525128  mr 3, 26
  052512c  mr 4, 27
  0525130  std 24, 8(29)
  0525134  stw 0, 0(9)
  0525138  li 0, 0
  052513c  stb 25, 16(29)
  0525140  stw 0, 0(29)
  0525144  bl 0x51ff58
  0525148  mr 3, 28
  052514c  bl 0x52dda0
  0525150  nop
  0525154  ld 0, 192(1)
  0525158  ld 24, 112(1)
  052515c  ld 25, 120(1)
  0525160  mtlr 0
  0525164  ld 26, 128(1)
  0525168  ld 27, 136(1)
  052516c  ld 28, 144(1)
  0525170  ld 29, 152(1)
  0525174  ld 30, 160(1)
  0525178  ld 31, 168(1)
  052517c  addi 1, 1, 176
  0525180  blr

_ZNK4cell4fios9scheduler22getEstimatedCompletionEPKNS0_2opE:   # 0x525184, 0x98 bytes
  0525184  stdu 1, -144(1)
  0525188  mflr 0
  052518c  std 31, 136(1)
  0525190  mr 31, 3
  0525194  clrldi 3, 3, 32
  0525198  std 29, 120(1)
  052519c  std 30, 128(1)
  05251a0  std 0, 160(1)
  05251a4  mr 30, 4
  05251a8  bl 0x604788
  05251ac  nop
  05251b0  clrlwi 3, 3, 24
  05251b4  li 29, 0
  05251b8  cmpwi 7, 3, 0
  05251bc  clrldi 3, 30, 32
  05251c0  bt- 30, 0x5251fc
  05251c4  bl 0x604738
  05251c8  nop
  05251cc  addi 0, 31, 56
  05251d0  clrlwi 3, 3, 24
  05251d4  clrldi 31, 0, 32
  05251d8  cmpwi 7, 3, 0
  05251dc  mr 3, 31
  05251e0  bt- 30, 0x5251fc
  05251e4  bl 0x52de58
  05251e8  nop
  05251ec  mr 3, 31
  05251f0  ld 29, 200(30)
  05251f4  bl 0x52dda0
  05251f8  nop
  05251fc  ld 0, 160(1)
  0525200  mr 3, 29
  0525204  ld 30, 128(1)
  0525208  ld 29, 120(1)
  052520c  mtlr 0
  0525210  ld 31, 136(1)
  0525214  addi 1, 1, 144
  0525218  blr

read_req_setup:   # 0x52521c, 0x308 bytes
  052521c  mfcr 12
  0525220  stdu 1, -224(1)
  0525224  std 23, 152(1)
  0525228  clrldi 23, 3, 32
  052522c  std 21, 136(1)
  0525230  std 22, 144(1)
  0525234  std 26, 176(1)
  0525238  mr 21, 4
  052523c  mr 26, 3
  0525240  mr 22, 4
  0525244  mr 3, 23
  0525248  clrldi 4, 4, 32
  052524c  std 24, 160(1)
  0525250  std 25, 168(1)
  0525254  std 27, 184(1)
  0525258  std 28, 192(1)
  052525c  std 29, 200(1)
  0525260  std 30, 208(1)
  0525264  std 31, 216(1)
  0525268  mr 30, 5
  052526c  std 20, 128(1)
  0525270  mr 28, 6
  0525274  mr 24, 7
  0525278  mr 27, 8
  052527c  mr 29, 30
  0525280  stw 12, 232(1)
  0525284  mflr 0
  0525288  std 0, 240(1)
  052528c  bl 0x51cfd8
  0525290  mr 31, 3
  0525294  mr 25, 3
  0525298  cmpwi 7, 31, 0
  052529c  li 3, 0
  05252a0  bt- 30, 0x5253e0
  05252a4  clrldi 3, 30, 32
  05252a8  stw 28, 192(31)
  05252ac  stw 28, 144(31)
  05252b0  std 24, 128(31)
  05252b4  std 24, 168(31)
  05252b8  std 27, 112(31)
  05252bc  std 27, 184(31)
  05252c0  bl 0x604760
  05252c4  nop
  05252c8  clrldi 20, 31, 32
  05252cc  clrlwi 3, 3, 24
  05252d0  cmpwi 7, 3, 0
  05252d4  bt- 30, 0x5254b4
  05252d8  lwz 0, 8(30)
  05252dc  cmpw 7, 0, 26
  05252e0  bf- 30, 0x5254b4
  05252e4  lwz 0, 80(30)
  05252e8  clrlwi 0, 0, 31
  05252ec  cmpwi 7, 0, 0
  05252f0  bt- 30, 0x5254ec
  05252f4  cmpdi 4, 27, -1
  05252f8  bt- 16, 0x525508
  05252fc  cmpdi 7, 24, 0
  0525300  bt- 28, 0x5254d0
  0525304  cmpwi 7, 22, 0
  0525308  bt 30, 0x52531c
  052530c  lwz 0, 20(21)
  0525310  rlwinm 9, 0, 0, 18, 19
  0525314  cmpwi 7, 9, 0
  0525318  bf- 30, 0x5254d0
  052531c  addi 0, 26, 312
  0525320  clrldi 28, 0, 32
  0525324  mr 3, 28
  0525328  bl 0x52de58
  052532c  nop
  0525330  bt 18, 0x525474
  0525334  lwz 9, 84(30)
  0525338  mr 11, 29
  052533c  mr 3, 28
  0525340  addi 9, 9, 1
  0525344  lwzu 28, 16(11)
  0525348  stw 9, 84(30)
  052534c  lwz 24, 24(11)
  0525350  lwz 22, 4(11)
  0525354  lwz 21, 8(11)
  0525358  ld 26, 16(11)
  052535c  bl 0x52dda0
  0525360  nop
  0525364  lwz 0, 80(30)
  0525368  rlwinm 9, 0, 0, 22, 23
  052536c  cmpwi 7, 9, 0
  0525370  bf 30, 0x525434
  0525374  mr 7, 29
  0525378  li 0, 10
  052537c  lwzu 10, 48(7)
  0525380  li 9, 1
  0525384  clrldi 11, 10, 32
  0525388  stw 0, 64(31)
  052538c  stw 9, 208(31)
  0525390  addi 8, 25, 72
  0525394  lbz 0, 0(11)
  0525398  li 11, 0
  052539c  cmpwi 7, 0, 0
  05253a0  bf 30, 0x52542c
  05253a4  mr 9, 25
  05253a8  lwz 0, 4(7)
  05253ac  mr 3, 23
  05253b0  mr 4, 20
  05253b4  stw 0, 4(8)
  05253b8  stw 29, 160(31)
  05253bc  stwu 28, 80(9)
  05253c0  std 26, 16(9)
  05253c4  stw 24, 24(9)
  05253c8  stw 11, 0(8)
  05253cc  stw 22, 4(9)
  05253d0  stw 21, 8(9)
  05253d4  std 27, 184(31)
  05253d8  std 27, 112(31)
  05253dc  bl 0x51ff58
  05253e0  ld 0, 240(1)
  05253e4  clrldi 3, 3, 32
  05253e8  lwz 12, 232(1)
  05253ec  ld 20, 128(1)
  05253f0  mtlr 0
  05253f4  ld 21, 136(1)
  05253f8  mtocrf 8, 12
  05253fc  ld 22, 144(1)
  0525400  ld 23, 152(1)
  0525404  ld 24, 160(1)
  0525408  ld 25, 168(1)
  052540c  ld 26, 176(1)
  0525410  ld 27, 184(1)
  0525414  ld 28, 192(1)
  0525418  ld 29, 200(1)
  052541c  ld 30, 208(1)
  0525420  ld 31, 216(1)
  0525424  addi 1, 1, 224
  0525428  blr
  052542c  mr 11, 10
  0525430  b 0x5253a4
  0525434  mr 7, 29
  0525438  lwz 0, 28(31)
  052543c  li 9, 1
  0525440  lwzu 10, 48(7)
  0525444  ori 0, 0, 14
  0525448  clrldi 11, 10, 32
  052544c  stw 0, 28(31)
  0525450  li 0, 10
  0525454  stw 9, 208(31)
  0525458  stw 0, 64(31)
  052545c  lbz 0, 0(11)
  0525460  addi 8, 25, 72
  0525464  li 11, 0
  0525468  cmpwi 7, 0, 0
  052546c  bt 30, 0x5253a4
  0525470  b 0x52542c
  0525474  addi 0, 29, 72
  0525478  ld 27, 64(30)
  052547c  clrldi 11, 0, 32
  0525480  add 0, 24, 27
  0525484  std 0, 112(1)
  0525488  ld 9, 0(11)
  052548c  cmpd 7, 9, 0
  0525490  bt 29, 0x5254a0
  0525494  ld 0, 0(11)
  0525498  std 0, 64(30)
  052549c  b 0x525334
  05254a0  addi 0, 1, 112
  05254a4  clrldi 11, 0, 32
  05254a8  ld 0, 0(11)
  05254ac  std 0, 64(30)
  05254b0  b 0x525334
  05254b4  lis 0, -32767
  05254b8  mr 3, 23
  05254bc  ori 0, 0, 1798
  05254c0  mr 4, 20
  05254c4  stw 0, 68(31)
  05254c8  bl 0x51fe9c
  05254cc  b 0x5253e0
  05254d0  lis 0, -32767
  05254d4  mr 3, 23
  05254d8  ori 0, 0, 1799
  05254dc  mr 4, 20
  05254e0  stw 0, 68(31)
  05254e4  bl 0x51fe9c
  05254e8  b 0x5253e0
  05254ec  lis 0, -32767
  05254f0  mr 3, 23
  05254f4  ori 0, 0, 1806
  05254f8  mr 4, 20
  05254fc  stw 0, 68(31)
  0525500  bl 0x51fe9c
  0525504  b 0x5253e0
  0525508  lis 0, -32767
  052550c  mr 3, 23
  0525510  ori 0, 0, 1803
  0525514  mr 4, 20
  0525518  stw 0, 68(31)
  052551c  bl 0x51fe9c
  0525520  b 0x5253e0

_ZN4cell4fios9scheduler9writeFileEPKNS0_8opattr_tEPNS0_10filehandleEPKvxx:   # 0x525524, 0x2d4 bytes
  0525524  stdu 1, -240(1)
  0525528  mflr 0
  052552c  std 24, 176(1)
  0525530  clrldi 24, 3, 32
  0525534  std 26, 192(1)
  0525538  mr 26, 3
  052553c  mr 3, 24
  0525540  std 23, 168(1)
  0525544  std 25, 184(1)
  0525548  std 27, 200(1)
  052554c  std 28, 208(1)
  0525550  std 29, 216(1)
  0525554  std 30, 224(1)
  0525558  std 31, 232(1)
  052555c  mr 29, 5
  0525560  std 18, 128(1)
  0525564  std 19, 136(1)
  0525568  std 20, 144(1)
  052556c  std 21, 152(1)
  0525570  std 22, 160(1)
  0525574  std 0, 256(1)
  0525578  mr 30, 6
  052557c  mr 23, 7
  0525580  mr 27, 8
  0525584  bl 0x51cfd8
  0525588  mr 31, 3
  052558c  mr 25, 3
  0525590  cmpwi 7, 31, 0
  0525594  mr 28, 29
  0525598  li 3, 0
  052559c  bt- 30, 0x5256fc
  05255a0  clrldi 3, 29, 32
  05255a4  stw 30, 192(31)
  05255a8  stw 30, 144(31)
  05255ac  std 23, 128(31)
  05255b0  std 23, 168(31)
  05255b4  std 27, 112(31)
  05255b8  std 27, 184(31)
  05255bc  bl 0x604760
  05255c0  nop
  05255c4  clrldi 22, 31, 32
  05255c8  clrlwi 3, 3, 24
  05255cc  cmpwi 7, 3, 0
  05255d0  bt- 30, 0x5257c0
  05255d4  lwz 0, 8(29)
  05255d8  cmpw 7, 0, 26
  05255dc  bf- 30, 0x5257c0
  05255e0  lwz 11, -30712(2)
  05255e4  mr 30, 29
  05255e8  lwzu 0, 16(30)
  05255ec  lwz 9, 0(11)
  05255f0  cmpw 7, 0, 9
  05255f4  bt 30, 0x525748
  05255f8  lwz 0, 80(29)
  05255fc  rlwinm 0, 0, 0, 30, 30
  0525600  cmpwi 7, 0, 0
  0525604  bt 30, 0x525788
  0525608  cmpdi 7, 23, 0
  052560c  bt- 28, 0x5257dc
  0525610  addi 0, 26, 312
  0525614  clrldi 26, 0, 32
  0525618  mr 3, 26
  052561c  bl 0x52de58
  0525620  nop
  0525624  cmpdi 7, 27, -1
  0525628  bt 30, 0x5257b0
  052562c  lwz 0, 80(29)
  0525630  lwz 20, 24(30)
  0525634  rlwinm 0, 0, 0, 30, 30
  0525638  lwz 21, 0(30)
  052563c  lwz 19, 4(30)
  0525640  cmpwi 7, 0, 0
  0525644  lwz 18, 8(30)
  0525648  ld 30, 16(30)
  052564c  bt 30, 0x525674
  0525650  addi 9, 28, 72
  0525654  add 0, 27, 23
  0525658  clrldi 11, 9, 32
  052565c  std 0, 112(1)
  0525660  ld 9, 0(11)
  0525664  cmpd 7, 9, 0
  0525668  bt 28, 0x5257a4
  052566c  ld 0, 0(11)
  0525670  std 0, 72(29)
  0525674  lwz 9, 84(29)
  0525678  mr 3, 26
  052567c  addi 9, 9, 1
  0525680  stw 9, 84(29)
  0525684  bl 0x52dda0
  0525688  nop
  052568c  mr 8, 28
  0525690  lwzu 11, 48(8)
  0525694  li 0, 11
  0525698  clrldi 9, 11, 32
  052569c  stw 0, 64(31)
  05256a0  addi 10, 25, 72
  05256a4  li 7, 0
  05256a8  lbz 0, 0(9)
  05256ac  cmpwi 7, 0, 0
  05256b0  bt 30, 0x5256b8
  05256b4  mr 7, 11
  05256b8  mr 9, 25
  05256bc  lwz 0, 4(8)
  05256c0  mr 3, 24
  05256c4  stw 0, 4(10)
  05256c8  li 0, 1
  05256cc  mr 4, 22
  05256d0  stwu 21, 80(9)
  05256d4  std 30, 16(9)
  05256d8  stw 20, 24(9)
  05256dc  stw 28, 160(31)
  05256e0  stw 7, 0(10)
  05256e4  stw 0, 208(31)
  05256e8  stw 19, 4(9)
  05256ec  stw 18, 8(9)
  05256f0  std 27, 184(31)
  05256f4  std 27, 112(31)
  05256f8  bl 0x51ff58
  05256fc  ld 0, 256(1)
  0525700  clrldi 3, 3, 32
  0525704  ld 18, 128(1)
  0525708  ld 19, 136(1)
  052570c  mtlr 0
  0525710  ld 20, 144(1)
  0525714  ld 21, 152(1)
  0525718  ld 22, 160(1)
  052571c  ld 23, 168(1)
  0525720  ld 24, 176(1)
  0525724  ld 25, 184(1)
  0525728  ld 26, 192(1)
  052572c  ld 27, 200(1)
  0525730  ld 28, 208(1)
  0525734  ld 29, 216(1)
  0525738  ld 30, 224(1)
  052573c  ld 31, 232(1)
  0525740  addi 1, 1, 240
  0525744  blr
  0525748  lwz 9, 4(30)
  052574c  lwz 0, 4(11)
  0525750  cmpw 7, 9, 0
  0525754  bf 30, 0x5255f8
  0525758  lwz 9, 8(30)
  052575c  lwz 0, 8(11)
  0525760  cmpw 7, 9, 0
  0525764  bf 30, 0x5255f8
  0525768  ld 9, 16(30)
  052576c  ld 0, 16(11)
  0525770  cmpd 7, 9, 0
  0525774  bf 30, 0x5255f8
  0525778  lwz 9, 24(11)
  052577c  lwz 0, 24(30)
  0525780  cmpw 7, 0, 9
  0525784  bf 30, 0x5255f8
  0525788  lis 0, -32767
  052578c  mr 3, 24
  0525790  ori 0, 0, 1808
  0525794  mr 4, 22
  0525798  stw 0, 68(31)
  052579c  bl 0x51fe9c
  05257a0  b 0x5256fc
  05257a4  addi 9, 1, 112
  05257a8  clrldi 11, 9, 32
  05257ac  b 0x52566c
  05257b0  ld 27, 64(29)
  05257b4  add 0, 23, 27
  05257b8  std 0, 64(29)
  05257bc  b 0x52562c
  05257c0  lis 0, -32767
  05257c4  mr 3, 24
  05257c8  ori 0, 0, 1798
  05257cc  mr 4, 22
  05257d0  stw 0, 68(31)
  05257d4  bl 0x51fe9c
  05257d8  b 0x5256fc
  05257dc  lis 0, -32767
  05257e0  mr 3, 24
  05257e4  ori 0, 0, 1799
  05257e8  mr 4, 22
  05257ec  stw 0, 68(31)
  05257f0  bl 0x51fe9c
  05257f4  b 0x5256fc

_ZN4cell4fios9scheduler14resumePrefetchEPKc:   # 0x5257f8, 0xd4 bytes
  05257f8  stdu 1, -144(1)
  05257fc  mflr 0
  0525800  std 29, 120(1)
  0525804  std 31, 136(1)
  0525808  mr 29, 3
  052580c  mr 31, 3
  0525810  clrldi 3, 3, 32
  0525814  std 30, 128(1)
  0525818  std 0, 160(1)
  052581c  stw 4, 200(1)
  0525820  bl 0x604788
  0525824  nop
  0525828  clrlwi 3, 3, 24
  052582c  cmpwi 7, 3, 0
  0525830  bt- 30, 0x5258b0
  0525834  addi 0, 29, 224
  0525838  clrldi 30, 0, 32
  052583c  mr 3, 30
  0525840  bl 0x52de58
  0525844  nop
  0525848  mr 8, 29
  052584c  lwzu 0, 456(8)
  0525850  isync
  0525854  cmpwi 7, 0, 0
  0525858  bt 30, 0x5258a4
  052585c  clrldi 11, 8, 32
  0525860  lwz 10, 0(8)
  0525864  isync
  0525868  addi 9, 10, -1
  052586c  lwarx 0, 0, 11
  0525870  cmpw 7, 10, 0
  0525874  bf 30, 0x525860
  0525878  stwcx. 9, 0, 11
  052587c  mfocrf 0, 128
  0525880  rlwinm 0, 0, 0, 2, 2
  0525884  cmpwi 7, 0, 0
  0525888  bt 30, 0x52586c
  052588c  addi 3, 31, 264
  0525890  li 0, 1
  0525894  clrldi 3, 3, 32
  0525898  stb 0, 380(29)
  052589c  bl 0x52dcf0
  05258a0  nop
  05258a4  mr 3, 30
  05258a8  bl 0x52dda0
  05258ac  nop
  05258b0  ld 0, 160(1)
  05258b4  ld 29, 120(1)
  05258b8  ld 30, 128(1)
  05258bc  mtlr 0
  05258c0  ld 31, 136(1)
  05258c4  addi 1, 1, 144
  05258c8  blr

FUN_005258cc:   # 0x5258cc, 0x67c bytes
  05258cc  stdu 1, -224(1)
  05258d0  mflr 0
  05258d4  std 24, 144(1)
  05258d8  std 0, 240(1)
  05258dc  clrldi 24, 3, 32
  05258e0  lwz 0, -30708(2)
  05258e4  std 26, 160(1)
  05258e8  std 28, 176(1)
  05258ec  stfd 30, 208(1)
  05258f0  mr 28, 3
  05258f4  stfd 31, 216(1)
  05258f8  mr 26, 3
  05258fc  std 23, 136(1)
  0525900  std 25, 152(1)
  0525904  std 27, 168(1)
  0525908  std 29, 184(1)
  052590c  std 30, 192(1)
  0525910  std 31, 200(1)
  0525914  stw 0, 0(3)
  0525918  mr 3, 24
  052591c  bl 0x604788
  0525920  nop
  0525924  lwz 9, -30636(2)
  0525928  lbz 0, 0(9)
  052592c  cmpwi 7, 0, 0
  0525930  bt 30, 0x525d44
  0525934  lwz 3, 352(28)
  0525938  clrldi 3, 3, 32
  052593c  bl 0x604710
  0525940  nop
  0525944  clrlwi 3, 3, 24
  0525948  cmpwi 7, 3, 0
  052594c  bt- 30, 0x525964
  0525950  lwz 3, 352(28)
  0525954  bl 0x51a480
  0525958  nop
  052595c  cmpw 7, 26, 3
  0525960  bt 30, 0x525f0c
  0525964  addi 9, 26, 160
  0525968  clrldi 23, 9, 32
  052596c  lbz 0, 44(9)
  0525970  cmpwi 7, 0, 0
  0525974  bf 30, 0x525efc
  0525978  lwz 31, 504(28)
  052597c  cmpwi 7, 31, 0
  0525980  bt 30, 0x5259c8
  0525984  mr 3, 24
  0525988  bl 0x51cba4
  052598c  lis 5, 4120
  0525990  mr 9, 3
  0525994  clrldi 4, 31, 32
  0525998  clrldi 3, 3, 32
  052599c  ori 5, 5, 259
  05259a0  li 6, 0
  05259a4  lwz 11, 0(9)
  05259a8  li 7, 0
  05259ac  lwz 9, 4(11)
  05259b0  lwz 0, 0(9)
  05259b4  std 2, 40(1)
  05259b8  mtctr 0
  05259bc  lwz 2, 4(9)
  05259c0  bctrl
  05259c4  ld 2, 40(1)
  05259c8  lwz 31, 492(28)
  05259cc  cmpwi 7, 31, 0
  05259d0  bt 30, 0x525a18
  05259d4  mr 3, 24
  05259d8  bl 0x51cba4
  05259dc  lis 5, 4119
  05259e0  mr 9, 3
  05259e4  clrldi 4, 31, 32
  05259e8  clrldi 3, 3, 32
  05259ec  ori 5, 5, 259
  05259f0  li 6, 0
  05259f4  lwz 11, 0(9)
  05259f8  li 7, 0
  05259fc  lwz 9, 4(11)
  0525a00  lwz 0, 0(9)
  0525a04  std 2, 40(1)
  0525a08  mtctr 0
  0525a0c  lwz 2, 4(9)
  0525a10  bctrl
  0525a14  ld 2, 40(1)
  0525a18  lwz 0, 564(28)
  0525a1c  addi 25, 26, 392
  0525a20  cmpwi 7, 0, 0
  0525a24  bt 30, 0x525b40
  0525a28  clrldi 29, 25, 32
  0525a2c  mr 3, 29
  0525a30  bl 0x52de58
  0525a34  nop
  0525a38  lwz 30, 376(28)
  0525a3c  cmpwi 7, 30, 0
  0525a40  li 0, 0
  0525a44  stb 0, 432(28)
  0525a48  bt 30, 0x525a78
  0525a4c  li 31, 0
  0525a50  slwi 9, 31, 6
  0525a54  lwz 0, 564(28)
  0525a58  addi 31, 31, 1
  0525a5c  add 9, 9, 0
  0525a60  clrldi 9, 9, 32
  0525a64  lwz 3, 8(9)
  0525a68  bl 0x52dcf0
  0525a6c  nop
  0525a70  cmpw 7, 30, 31
  0525a74  bf 30, 0x525a50
  0525a78  mr 3, 29
  0525a7c  bl 0x52dda0
  0525a80  nop
  0525a84  lwz 27, 376(28)
  0525a88  cmpwi 7, 27, 0
  0525a8c  bt 30, 0x525f40
  0525a90  li 29, 0
  0525a94  lwz 30, 564(28)
  0525a98  slwi 31, 29, 6
  0525a9c  addi 29, 29, 1
  0525aa0  add 9, 31, 30
  0525aa4  clrldi 9, 9, 32
  0525aa8  lwz 0, 4(9)
  0525aac  cmpwi 7, 0, 0
  0525ab0  clrldi 3, 0, 32
  0525ab4  bt 30, 0x525af4
  0525ab8  bl 0x52ced8
  0525abc  nop
  0525ac0  lwz 9, 564(28)
  0525ac4  add 9, 31, 9
  0525ac8  clrldi 9, 9, 32
  0525acc  lwz 3, 4(9)
  0525ad0  bl 0x52d018
  0525ad4  nop
  0525ad8  lwz 9, 564(28)
  0525adc  add 9, 31, 9
  0525ae0  clrldi 9, 9, 32
  0525ae4  lwz 3, 8(9)
  0525ae8  bl 0x52d0e8
  0525aec  nop
  0525af0  lwz 30, 564(28)
  0525af4  cmpw 7, 27, 29
  0525af8  bf 30, 0x525a98
  0525afc  mr 3, 24
  0525b00  bl 0x51cba4
  0525b04  lis 5, 4118
  0525b08  mr 9, 3
  0525b0c  clrldi 4, 30, 32
  0525b10  clrldi 3, 3, 32
  0525b14  ori 5, 5, 259
  0525b18  li 6, 0
  0525b1c  lwz 11, 0(9)
  0525b20  li 7, 0
  0525b24  lwz 9, 4(11)
  0525b28  lwz 0, 0(9)
  0525b2c  std 2, 40(1)
  0525b30  mtctr 0
  0525b34  lwz 2, 4(9)
  0525b38  bctrl
  0525b3c  ld 2, 40(1)
  0525b40  lwz 29, 368(28)
  0525b44  cmpwi 7, 29, 0
  0525b48  bt 30, 0x525bd8
  0525b4c  lwz 0, 360(28)
  0525b50  cmpwi 7, 0, 0
  0525b54  bt 30, 0x525b94
  0525b58  mr 31, 29
  0525b5c  li 30, 0
  0525b60  clrldi 29, 31, 32
  0525b64  addi 30, 30, 1
  0525b68  mr 3, 29
  0525b6c  addi 31, 31, 88
  0525b70  bl 0x604760
  0525b74  nop
  0525b78  mr 3, 29
  0525b7c  bl 0x5390ac
  0525b80  nop
  0525b84  lwz 0, 360(28)
  0525b88  cmplw 7, 0, 30
  0525b8c  bt 29, 0x525b60
  0525b90  lwz 29, 368(28)
  0525b94  mr 3, 24
  0525b98  bl 0x51cba4
  0525b9c  lis 5, 4116
  0525ba0  mr 9, 3
  0525ba4  clrldi 4, 29, 32
  0525ba8  clrldi 3, 3, 32
  0525bac  ori 5, 5, 259
  0525bb0  li 6, 0
  0525bb4  lwz 11, 0(9)
  0525bb8  li 7, 0
  0525bbc  lwz 9, 4(11)
  0525bc0  lwz 0, 0(9)
  0525bc4  std 2, 40(1)
  0525bc8  mtctr 0
  0525bcc  lwz 2, 4(9)
  0525bd0  bctrl
  0525bd4  ld 2, 40(1)
  0525bd8  lwz 31, 364(28)
  0525bdc  cmpwi 7, 31, 0
  0525be0  bt 30, 0x525c60
  0525be4  lwz 0, 356(28)
  0525be8  cmpwi 7, 0, 0
  0525bec  bt 30, 0x525c1c
  0525bf0  mr 29, 31
  0525bf4  li 31, 0
  0525bf8  clrldi 3, 29, 32
  0525bfc  addi 31, 31, 1
  0525c00  bl 0x604738
  0525c04  nop
  0525c08  lwz 0, 356(28)
  0525c0c  cmplw 7, 0, 31
  0525c10  addi 29, 29, 232
  0525c14  bt 29, 0x525bf8
  0525c18  lwz 31, 364(28)
  0525c1c  mr 3, 24
  0525c20  bl 0x51cba4
  0525c24  lis 5, 4115
  0525c28  mr 9, 3
  0525c2c  clrldi 4, 31, 32
  0525c30  clrldi 3, 3, 32
  0525c34  ori 5, 5, 259
  0525c38  li 6, 0
  0525c3c  lwz 11, 0(9)
  0525c40  li 7, 0
  0525c44  lwz 9, 4(11)
  0525c48  lwz 0, 0(9)
  0525c4c  std 2, 40(1)
  0525c50  mtctr 0
  0525c54  lwz 2, 4(9)
  0525c58  bctrl
  0525c5c  ld 2, 40(1)
  0525c60  clrldi 3, 25, 32
  0525c64  bl 0x52df14
  0525c68  nop
  0525c6c  addi 3, 26, 312
  0525c70  clrldi 3, 3, 32
  0525c74  bl 0x52df14
  0525c78  nop
  0525c7c  addi 3, 26, 288
  0525c80  clrldi 3, 3, 32
  0525c84  bl 0x52d0e8
  0525c88  nop
  0525c8c  addi 3, 26, 264
  0525c90  clrldi 3, 3, 32
  0525c94  bl 0x52d0e8
  0525c98  nop
  0525c9c  addi 3, 26, 224
  0525ca0  clrldi 3, 3, 32
  0525ca4  bl 0x52df14
  0525ca8  nop
  0525cac  mr 3, 23
  0525cb0  bl 0x52d018
  0525cb4  nop
  0525cb8  addi 3, 26, 120
  0525cbc  clrldi 3, 3, 32
  0525cc0  bl 0x52df14
  0525cc4  nop
  0525cc8  addi 3, 26, 96
  0525ccc  clrldi 3, 3, 32
  0525cd0  bl 0x52e5f8
  0525cd4  nop
  0525cd8  addi 3, 26, 56
  0525cdc  clrldi 3, 3, 32
  0525ce0  bl 0x52df14
  0525ce4  nop
  0525ce8  addi 3, 26, 16
  0525cec  clrldi 3, 3, 32
  0525cf0  bl 0x52df14
  0525cf4  nop
  0525cf8  addi 3, 26, 4
  0525cfc  clrldi 3, 3, 32
  0525d00  bl 0x5107d0
  0525d04  nop
  0525d08  ld 0, 240(1)
  0525d0c  ld 23, 136(1)
  0525d10  ld 24, 144(1)
  0525d14  mtlr 0
  0525d18  ld 25, 152(1)
  0525d1c  ld 26, 160(1)
  0525d20  ld 27, 168(1)
  0525d24  ld 28, 176(1)
  0525d28  ld 29, 184(1)
  0525d2c  ld 30, 192(1)
  0525d30  ld 31, 200(1)
  0525d34  lfd 30, 208(1)
  0525d38  lfd 31, 216(1)
  0525d3c  addi 1, 1, 224
  0525d40  blr
  0525d44  lwz 3, -30632(2)
  0525d48  bl 0x52cbd8
  0525d4c  nop
  0525d50  lwz 4, 552(28)
  0525d54  isync
  0525d58  extsw 4, 4
  0525d5c  lwz 3, -30628(2)
  0525d60  bl 0x52cbd8
  0525d64  nop
  0525d68  lwz 4, 560(28)
  0525d6c  lwz 3, -30624(2)
  0525d70  extsw 4, 4
  0525d74  bl 0x52cbd8
  0525d78  nop
  0525d7c  ld 0, 496(28)
  0525d80  lwz 9, -30732(2)
  0525d84  std 0, 112(1)
  0525d88  lfd 0, 112(1)
  0525d8c  fcfid 13, 0
  0525d90  lfs 0, -30720(2)
  0525d94  fmr 12, 0
  0525d98  lwz 3, -30620(2)
  0525d9c  lfd 30, 0(9)
  0525da0  fdiv 0, 13, 30
  0525da4  fcmpu 7, 0, 12
  0525da8  cror 30, 29, 30
  0525dac  bt 30, 0x525f20
  0525db0  fctidz 0, 0
  0525db4  stfd 0, 112(1)
  0525db8  ld 4, 112(1)
  0525dbc  lis 0, 17179
  0525dc0  addis 4, 4, 15
  0525dc4  ori 0, 0, 56962
  0525dc8  addi 4, 4, 16959
  0525dcc  sldi 0, 0, 32
  0525dd0  sradi 9, 4, 63
  0525dd4  oris 0, 0, 55222
  0525dd8  ori 0, 0, 13531
  0525ddc  mulhd 4, 4, 0
  0525de0  sradi 4, 4, 18
  0525de4  sub 4, 4, 9
  0525de8  bl 0x52cbd8
  0525dec  nop
  0525df0  lwz 3, -30616(2)
  0525df4  bl 0x52cbd8
  0525df8  nop
  0525dfc  lwz 3, 352(28)
  0525e00  clrldi 10, 3, 32
  0525e04  lwz 0, 140(10)
  0525e08  cmpwi 7, 0, 0
  0525e0c  bt 30, 0x525938
  0525e10  lis 29, 8388
  0525e14  lwz 27, -30612(2)
  0525e18  li 25, -1
  0525e1c  lfs 31, -30720(2)
  0525e20  ori 29, 29, 39845
  0525e24  rldicr 25, 25, 0, 0
  0525e28  sldi 29, 29, 32
  0525e2c  li 30, 0
  0525e30  oris 29, 29, 58195
  0525e34  ori 29, 29, 63439
  0525e38  b 0x525e84
  0525e3c  fctidz 0, 0
  0525e40  stfd 0, 112(1)
  0525e44  ld 5, 112(1)
  0525e48  addi 5, 5, 999
  0525e4c  mr 3, 27
  0525e50  sradi 0, 5, 63
  0525e54  addi 30, 30, 1
  0525e58  mulhd 5, 5, 29
  0525e5c  sradi 5, 5, 7
  0525e60  sub 5, 5, 0
  0525e64  bl 0x52cbd8
  0525e68  nop
  0525e6c  lwz 3, 352(28)
  0525e70  clrldi 10, 3, 32
  0525e74  addi 9, 31, 1
  0525e78  lwz 0, 140(10)
  0525e7c  cmplw 7, 0, 9
  0525e80  bf 29, 0x525938
  0525e84  lwz 11, 0(10)
  0525e88  clrldi 4, 30, 32
  0525e8c  mr 3, 10
  0525e90  mr 31, 30
  0525e94  lwz 9, 12(11)
  0525e98  lwz 0, 0(9)
  0525e9c  std 2, 40(1)
  0525ea0  mtctr 0
  0525ea4  lwz 2, 4(9)
  0525ea8  bctrl
  0525eac  ld 2, 40(1)
  0525eb0  lwz 0, 492(28)
  0525eb4  slwi 9, 30, 3
  0525eb8  clrldi 4, 3, 32
  0525ebc  add 9, 9, 0
  0525ec0  clrldi 9, 9, 32
  0525ec4  ld 0, 0(9)
  0525ec8  std 0, 112(1)
  0525ecc  lfd 13, 112(1)
  0525ed0  fcfid 0, 13
  0525ed4  fdiv 0, 0, 30
  0525ed8  fcmpu 7, 0, 31
  0525edc  cror 30, 29, 30
  0525ee0  bf 30, 0x525e3c
  0525ee4  fsub 0, 0, 31
  0525ee8  fctidz 0, 0
  0525eec  stfd 0, 112(1)
  0525ef0  ld 5, 112(1)
  0525ef4  xor 5, 5, 25
  0525ef8  b 0x525e48
  0525efc  mr 3, 23
  0525f00  bl 0x52ced8
  0525f04  nop
  0525f08  b 0x525978
  0525f0c  lwz 3, 352(28)
  0525f10  li 4, 0
  0525f14  bl 0x51b318
  0525f18  nop
  0525f1c  b 0x525964
  0525f20  fsub 0, 0, 12
  0525f24  li 0, -1
  0525f28  rldicr 0, 0, 0, 0
  0525f2c  fctidz 0, 0
  0525f30  stfd 0, 112(1)
  0525f34  ld 4, 112(1)
  0525f38  xor 4, 4, 0
  0525f3c  b 0x525dbc
  0525f40  lwz 30, 564(28)
  0525f44  b 0x525afc

FUN_00525f48:   # 0x525f48, 0x164 bytes
  0525f48  stdu 1, -192(1)
  0525f4c  mflr 0
  0525f50  std 30, 152(1)
  0525f54  clrldi 30, 3, 32
  0525f58  stfd 29, 168(1)
  0525f5c  std 28, 136(1)
  0525f60  std 29, 144(1)
  0525f64  mr 28, 3
  0525f68  stfd 30, 176(1)
  0525f6c  mr 29, 3
  0525f70  stfd 31, 184(1)
  0525f74  mr 3, 30
  0525f78  std 31, 160(1)
  0525f7c  std 0, 208(1)
  0525f80  bl 0x604788
  0525f84  nop
  0525f88  clrlwi 3, 3, 24
  0525f8c  cmpwi 7, 3, 0
  0525f90  bt- 30, 0x526080
  0525f94  addi 0, 28, 224
  0525f98  clrldi 31, 0, 32
  0525f9c  mr 3, 31
  0525fa0  bl 0x52de58
  0525fa4  nop
  0525fa8  lwsync
  0525fac  addi 3, 28, 264
  0525fb0  li 0, 0
  0525fb4  clrldi 3, 3, 32
  0525fb8  stw 0, 388(28)
  0525fbc  bl 0x52dcf0
  0525fc0  nop
  0525fc4  mr 3, 31
  0525fc8  bl 0x52dda0
  0525fcc  nop
  0525fd0  mr 3, 30
  0525fd4  li 4, 0
  0525fd8  li 28, -1
  0525fdc  bl 0x5231cc
  0525fe0  mr 3, 31
  0525fe4  rldicr 28, 28, 0, 0
  0525fe8  bl 0x52de58
  0525fec  nop
  0525ff0  lwz 9, -30732(2)
  0525ff4  lfs 30, -30720(2)
  0525ff8  addi 0, 29, 288
  0525ffc  lfs 29, -30640(2)
  0526000  clrldi 29, 0, 32
  0526004  lfd 31, 0(9)
  0526008  b 0x52602c
  052600c  fctidz 0, 0
  0526010  stfd 0, 112(1)
  0526014  ld 0, 112(1)
  0526018  add 5, 5, 0
  052601c  mr 3, 29
  0526020  mr 4, 31
  0526024  bl 0x52e49c
  0526028  nop
  052602c  mr 3, 30
  0526030  bl 0x51cbc8
  0526034  clrlwi 3, 3, 24
  0526038  cmpwi 7, 3, 0
  052603c  bf 30, 0x526074
  0526040  mftb 5, 268
  0526044  cmpwi 7, 5, 0
  0526048  bt- 30, 0x526040
  052604c  fmul 0, 31, 29
  0526050  fcmpu 7, 0, 30
  0526054  cror 30, 29, 30
  0526058  bf 30, 0x52600c
  052605c  fsub 0, 0, 30
  0526060  fctidz 0, 0
  0526064  stfd 0, 112(1)
  0526068  ld 0, 112(1)
  052606c  xor 0, 0, 28
  0526070  b 0x526018
  0526074  mr 3, 31
  0526078  bl 0x52dda0
  052607c  nop
  0526080  ld 0, 208(1)
  0526084  ld 28, 136(1)
  0526088  ld 29, 144(1)
  052608c  mtlr 0
  0526090  ld 30, 152(1)
  0526094  ld 31, 160(1)
  0526098  lfd 29, 168(1)
  052609c  lfd 30, 176(1)
  05260a0  lfd 31, 184(1)
  05260a4  addi 1, 1, 192
  05260a8  blr
