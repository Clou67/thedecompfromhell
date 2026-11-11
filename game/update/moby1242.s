# game/update/moby1242.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1242_0021ccbc:   # 0x21ccbc, 0x14 bytes
  021ccbc  lis 3, 119
  021ccc0  lis 4, 1
  021ccc4  addic 3, 3, -14852
  021ccc8  stw 4, 72(3)
  021cccc  blr

M1242_0021ccd0:   # 0x21ccd0, 0x8 bytes
  021ccd0  twu 1, 1
  021ccd4  blr

M1242_0021ccd8:   # 0x21ccd8, 0x2a8 bytes
  021ccd8  stdu 1, -240(1)
  021ccdc  mflr 0
  021cce0  std 0, 256(1)
  021cce4  addi 0, 1, 128
  021cce8  stvx 29, 0, 0
  021ccec  addic 0, 0, 16
  021ccf0  stvx 30, 0, 0
  021ccf4  addic 0, 0, 16
  021ccf8  stvx 31, 0, 0
  021ccfc  std 30, 224(1)
  021cd00  ori 30, 3, 0
  021cd04  lis 3, 161
  021cd08  std 31, 232(1)
  021cd0c  stfs 2, 112(1)
  021cd10  ori 31, 4, 0
  021cd14  stfs 2, 116(1)
  021cd18  addic 4, 3, 24396
  021cd1c  stfs 2, 120(1)
  021cd20  li 3, 22
  021cd24  stfs 2, 124(1)
  021cd28  std 28, 208(1)
  021cd2c  li 0, 112
  021cd30  std 27, 200(1)
  021cd34  std 24, 176(1)
  021cd38  rldicl 28, 8, 40, 56
  021cd3c  rldicl 27, 8, 48, 56
  021cd40  std 26, 192(1)
  021cd44  lwz 24, 28(4)
  021cd48  rldicl 26, 8, 56, 56
  021cd4c  lvx 31, 1, 0
  021cd50  li 0, 112
  021cd54  stfs 1, 112(1)
  021cd58  std 25, 184(1)
  021cd5c  stfs 1, 116(1)
  021cd60  ori 25, 8, 0
  021cd64  stfs 1, 120(1)
  021cd68  stfs 1, 124(1)
  021cd6c  lvx 30, 1, 0
  021cd70  li 0, 112
  021cd74  stfs 3, 112(1)
  021cd78  stfs 3, 116(1)
  021cd7c  stfs 3, 120(1)
  021cd80  stfs 3, 124(1)
  021cd84  std 29, 216(1)
  021cd88  lvx 29, 1, 0
  021cd8c  bl 0x685c4
  021cd90  nop
  021cd94  lis 29, 144
  021cd98  sldi 4, 3, 5
  021cd9c  sldi 3, 3, 2
  021cda0  addic 29, 29, -23532
  021cda4  addc 3, 4, 3
  021cda8  li 4, 0
  021cdac  addc 5, 24, 3
  021cdb0  lwz 3, 40(29)
  021cdb4  clrldi 5, 5, 32
  021cdb8  bl 0x4d6d00
  021cdbc  nop
  021cdc0  lwz 3, 40(29)
  021cdc4  bl 0x4d6948
  021cdc8  nop
  021cdcc  lwz 3, 40(29)
  021cdd0  lis 4, 4
  021cdd4  rlwinm 6, 27, 16, 8, 15
  021cdd8  ori 4, 4, 6472
  021cddc  rlwimi 6, 28, 24, 0, 7
  021cde0  lwz 7, 8(3)
  021cde4  clrlwi 5, 25, 24
  021cde8  rlwimi 6, 26, 8, 16, 23
  021cdec  or 5, 6, 5
  021cdf0  lis 6, 16396
  021cdf4  stw 4, 0(7)
  021cdf8  lwz 4, 8(3)
  021cdfc  lis 7, 4
  021ce00  cmpwi 31, 0
  021ce04  stw 5, 4(4)
  021ce08  lwz 4, 8(3)
  021ce0c  ori 5, 6, 5908
  021ce10  addic 4, 4, 8
  021ce14  stw 4, 8(3)
  021ce18  lwz 4, 40(29)
  021ce1c  li 3, 0
  021ce20  lwz 6, 8(4)
  021ce24  stw 5, 0(6)
  021ce28  lwz 5, 8(4)
  021ce2c  ori 6, 7, 6152
  021ce30  li 7, 6
  021ce34  stw 3, 4(5)
  021ce38  lwz 5, 8(4)
  021ce3c  stw 3, 8(5)
  021ce40  lwz 5, 8(4)
  021ce44  stw 3, 12(5)
  021ce48  lwz 5, 8(4)
  021ce4c  stw 6, 16(5)
  021ce50  lwz 5, 8(4)
  021ce54  stw 7, 20(5)
  021ce58  lwz 5, 8(4)
  021ce5c  addic 5, 5, 24
  021ce60  stw 5, 8(4)
  021ce64  bf 1, 0x21cf10
  021ce68  ori 8, 30, 0
  021ce6c  vspltisw 2, -16
  021ce70  lis 7, 4
  021ce74  lis 6, 8
  021ce78  li 5, 4
  021ce7c  li 4, 8
  021ce80  ori 7, 7, 6404
  021ce84  addic 30, 8, 2
  021ce88  ori 6, 6, 6272
  021ce8c  <unknown>
  021ce90  lwz 9, 40(29)
  021ce94  <unknown>
  021ce98  vsraw 3, 3, 2
  021ce9c  vsraw 4, 4, 2
  021cea0  lwz 10, 8(9)
  021cea4  vcfsx 3, 3, 0
  021cea8  vcfsx 4, 4, 0
  021ceac  addic 31, 31, -1
  021ceb0  addic 30, 30, 4
  021ceb4  stw 7, 0(10)
  021ceb8  lwz 10, 8(9)
  021cebc  cmpwi 31, 0
  021cec0  addic 8, 8, 4
  021cec4  stw 3, 4(10)
  021cec8  lwz 10, 8(9)
  021cecc  vmaddfp 3, 3, 29, 30
  021ced0  addic 10, 10, 8
  021ced4  vmaddfp 4, 4, 29, 31
  021ced8  stw 10, 8(9)
  021cedc  lwz 9, 40(29)
  021cee0  lwz 10, 8(9)
  021cee4  vspltw 3, 3, 0
  021cee8  vspltw 4, 4, 0
  021ceec  stw 6, 0(10)
  021cef0  lwz 10, 8(9)
  021cef4  stvewx 3, 5, 10
  021cef8  lwz 10, 8(9)
  021cefc  stvewx 4, 4, 10
  021cf00  lwz 10, 8(9)
  021cf04  addic 10, 10, 12
  021cf08  stw 10, 8(9)
  021cf0c  bt 1, 0x21ce8c
  021cf10  lwz 5, 40(29)
  021cf14  lis 4, 4
  021cf18  ori 4, 4, 6152
  021cf1c  lwz 6, 8(5)
  021cf20  stw 4, 0(6)
  021cf24  lwz 4, 8(5)
  021cf28  stw 3, 4(4)
  021cf2c  lwz 3, 8(5)
  021cf30  addic 3, 3, 8
  021cf34  stw 3, 8(5)
  021cf38  li 0, 128
  021cf3c  lvx 29, 1, 0
  021cf40  addic 0, 0, 16
  021cf44  lvx 30, 1, 0
  021cf48  addic 0, 0, 16
  021cf4c  lvx 31, 1, 0
  021cf50  ld 0, 256(1)
  021cf54  mtlr 0
  021cf58  ld 24, 176(1)
  021cf5c  ld 25, 184(1)
  021cf60  ld 26, 192(1)
  021cf64  ld 27, 200(1)
  021cf68  ld 28, 208(1)
  021cf6c  ld 29, 216(1)
  021cf70  ld 30, 224(1)
  021cf74  ld 31, 232(1)
  021cf78  addi 1, 1, 240
  021cf7c  blr

M1242_0021cf80:   # 0x21cf80, 0x314 bytes
  021cf80  stdu 1, -336(1)
  021cf84  mflr 0
  021cf88  std 0, 352(1)
  021cf8c  stfd 31, 328(1)
  021cf90  addi 0, 1, 208
  021cf94  stvx 29, 0, 0
  021cf98  addic 0, 0, 16
  021cf9c  stvx 30, 0, 0
  021cfa0  addic 0, 0, 16
  021cfa4  stvx 31, 0, 0
  021cfa8  std 31, 320(1)
  021cfac  ori 31, 4, 0
  021cfb0  lis 4, 161
  021cfb4  std 30, 312(1)
  021cfb8  stfs 2, 192(1)
  021cfbc  ori 30, 3, 0
  021cfc0  stfs 2, 196(1)
  021cfc4  li 3, 22
  021cfc8  stfs 2, 200(1)
  021cfcc  addic 4, 4, 24396
  021cfd0  stfs 2, 204(1)
  021cfd4  li 0, 192
  021cfd8  std 28, 296(1)
  021cfdc  fmr 31, 4
  021cfe0  std 27, 288(1)
  021cfe4  rldicl 28, 8, 40, 56
  021cfe8  std 26, 280(1)
  021cfec  rldicl 27, 8, 48, 56
  021cff0  std 24, 264(1)
  021cff4  rldicl 26, 8, 56, 56
  021cff8  lwz 24, 28(4)
  021cffc  std 25, 272(1)
  021d000  lvx 31, 1, 0
  021d004  ori 25, 8, 0
  021d008  li 0, 192
  021d00c  stfs 1, 192(1)
  021d010  stfs 1, 196(1)
  021d014  stfs 1, 200(1)
  021d018  stfs 1, 204(1)
  021d01c  lvx 30, 1, 0
  021d020  li 0, 192
  021d024  stfs 3, 192(1)
  021d028  stfs 3, 196(1)
  021d02c  stfs 3, 200(1)
  021d030  stfs 3, 204(1)
  021d034  std 29, 304(1)
  021d038  lvx 29, 1, 0
  021d03c  bl 0x685c4
  021d040  nop
  021d044  lis 29, 144
  021d048  sldi 4, 3, 5
  021d04c  sldi 3, 3, 2
  021d050  addic 29, 29, -23532
  021d054  addc 3, 4, 3
  021d058  li 4, 0
  021d05c  addc 5, 24, 3
  021d060  lwz 3, 40(29)
  021d064  clrldi 5, 5, 32
  021d068  bl 0x4d6d00
  021d06c  nop
  021d070  lwz 3, 40(29)
  021d074  bl 0x4d6948
  021d078  nop
  021d07c  lwz 3, 40(29)
  021d080  lis 4, 4
  021d084  rlwinm 5, 27, 16, 8, 15
  021d088  ori 4, 4, 6472
  021d08c  rlwimi 5, 28, 24, 0, 7
  021d090  clrlwi 7, 25, 24
  021d094  lwz 6, 8(3)
  021d098  rlwimi 5, 26, 8, 16, 23
  021d09c  li 28, 0
  021d0a0  or 5, 5, 7
  021d0a4  stw 4, 0(6)
  021d0a8  lwz 4, 8(3)
  021d0ac  lis 6, 16396
  021d0b0  stw 5, 4(4)
  021d0b4  lwz 4, 8(3)
  021d0b8  ori 5, 6, 5908
  021d0bc  addic 4, 4, 8
  021d0c0  stw 4, 8(3)
  021d0c4  lwz 6, 40(29)
  021d0c8  lis 3, 4
  021d0cc  ori 7, 3, 6152
  021d0d0  lwz 4, 8(6)
  021d0d4  stw 5, 0(4)
  021d0d8  lwz 3, 8(6)
  021d0dc  li 5, 6
  021d0e0  stw 28, 4(3)
  021d0e4  lwz 3, 8(6)
  021d0e8  stw 28, 8(3)
  021d0ec  lwz 4, 8(6)
  021d0f0  addic 3, 1, 128
  021d0f4  stw 28, 12(4)
  021d0f8  lwz 8, 8(6)
  021d0fc  addic 4, 1, 112
  021d100  stw 7, 16(8)
  021d104  lwz 7, 8(6)
  021d108  stw 5, 20(7)
  021d10c  lwz 5, 8(6)
  021d110  stw 28, 112(1)
  021d114  addic 5, 5, 24
  021d118  stw 28, 116(1)
  021d11c  stw 28, 124(1)
  021d120  stw 5, 8(6)
  021d124  stfs 31, 120(1)
  021d128  bl 0x500ca4
  021d12c  nop
  021d130  cmpwi 31, 0
  021d134  bf 1, 0x21d220
  021d138  li 3, 128
  021d13c  li 4, 144
  021d140  vspltisw 2, -16
  021d144  li 8, 148
  021d148  lis 7, 4
  021d14c  lis 6, 8
  021d150  <unknown>
  021d154  li 3, 132
  021d158  <unknown>
  021d15c  ori 5, 30, 0
  021d160  ori 7, 7, 6404
  021d164  ori 6, 6, 6272
  021d168  li 4, 4
  021d16c  <unknown>
  021d170  addic 30, 5, 2
  021d174  <unknown>
  021d178  li 3, 8
  021d17c  <unknown>
  021d180  vspltisw 7, -1
  021d184  vsraw 8, 8, 2
  021d188  <unknown>
  021d18c  vspltisw 10, -1
  021d190  vslw 7, 7, 7
  021d194  vcfsx 8, 8, 0
  021d198  vsraw 9, 9, 2
  021d19c  lwz 8, 40(29)
  021d1a0  vslw 10, 10, 10
  021d1a4  vcfsx 9, 9, 0
  021d1a8  addic 31, 31, -1
  021d1ac  lwz 9, 8(8)
  021d1b0  cmpwi 31, 0
  021d1b4  addic 30, 30, 4
  021d1b8  addic 5, 5, 4
  021d1bc  stw 7, 0(9)
  021d1c0  vmaddfp 7, 8, 5, 7
  021d1c4  vmaddfp 8, 8, 3, 10
  021d1c8  lwz 9, 8(8)
  021d1cc  stw 28, 4(9)
  021d1d0  lwz 9, 8(8)
  021d1d4  addic 9, 9, 8
  021d1d8  vmaddfp 7, 9, 6, 7
  021d1dc  vmaddfp 8, 9, 4, 8
  021d1e0  stw 9, 8(8)
  021d1e4  lwz 8, 40(29)
  021d1e8  lwz 9, 8(8)
  021d1ec  vmaddfp 7, 7, 29, 30
  021d1f0  vmaddfp 8, 8, 29, 31
  021d1f4  stw 6, 0(9)
  021d1f8  lwz 9, 8(8)
  021d1fc  vspltw 7, 7, 0
  021d200  vspltw 8, 8, 0
  021d204  stvewx 7, 4, 9
  021d208  lwz 9, 8(8)
  021d20c  stvewx 8, 3, 9
  021d210  lwz 9, 8(8)
  021d214  addic 9, 9, 12
  021d218  stw 9, 8(8)
  021d21c  bt 1, 0x21d17c
  021d220  lwz 4, 40(29)
  021d224  lis 3, 4
  021d228  ori 3, 3, 6152
  021d22c  lwz 5, 8(4)
  021d230  stw 3, 0(5)
  021d234  lwz 3, 8(4)
  021d238  stw 28, 4(3)
  021d23c  lwz 3, 8(4)
  021d240  addic 3, 3, 8
  021d244  stw 3, 8(4)
  021d248  li 0, 208
  021d24c  lvx 29, 1, 0
  021d250  addic 0, 0, 16
  021d254  lvx 30, 1, 0
  021d258  addic 0, 0, 16
  021d25c  lvx 31, 1, 0
  021d260  ld 0, 352(1)
  021d264  mtlr 0
  021d268  lfd 31, 328(1)
  021d26c  ld 24, 264(1)
  021d270  ld 25, 272(1)
  021d274  ld 26, 280(1)
  021d278  ld 27, 288(1)
  021d27c  ld 28, 296(1)
  021d280  ld 29, 304(1)
  021d284  ld 30, 312(1)
  021d288  ld 31, 320(1)
  021d28c  addi 1, 1, 336
  021d290  blr

M1242_0021d298:   # 0x21d298, 0x84 bytes
  021d298  stdu 1, -176(1)
  021d29c  mflr 0
  021d2a0  std 0, 192(1)
  021d2a4  lis 4, 34
  021d2a8  li 3, 176
  021d2ac  addi 4, 4, -11628
  021d2b0  addc 3, 1, 3
  021d2b4  li 5, 0
  021d2b8  lwz 6, 124(3)
  021d2bc  lwz 7, 140(3)
  021d2c0  lwz 11, 132(3)
  021d2c4  clrlwi 6, 6, 24
  021d2c8  lwz 12, 148(3)
  021d2cc  rlwinm 7, 7, 16, 8, 15
  021d2d0  lfs 6, 0(4)
  021d2d4  rlwimi 6, 11, 8, 16, 23
  021d2d8  lwz 3, 116(3)
  021d2dc  rlwimi 7, 12, 24, 0, 7
  021d2e0  fmr 7, 6
  021d2e4  extsw 3, 3
  021d2e8  or 4, 6, 7
  021d2ec  extsw 4, 4
  021d2f0  std 3, 112(1)
  021d2f4  std 4, 120(1)
  021d2f8  std 5, 128(1)
  021d2fc  std 5, 136(1)
  021d300  std 5, 160(1)
  021d304  bl 0x6e740
  021d308  nop
  021d30c  ld 0, 192(1)
  021d310  mtlr 0
  021d314  addi 1, 1, 176
  021d318  blr

M1242_0021d328:   # 0x21d328, 0x228 bytes
  021d328  stdu 1, -272(1)
  021d32c  mflr 0
  021d330  std 0, 288(1)
  021d334  stfd 26, 224(1)
  021d338  stfd 27, 232(1)
  021d33c  stfd 28, 240(1)
  021d340  stfd 29, 248(1)
  021d344  stfd 30, 256(1)
  021d348  stfd 31, 264(1)
  021d34c  fmr 31, 3
  021d350  lis 3, 34
  021d354  std 31, 216(1)
  021d358  fmr 30, 2
  021d35c  ori 31, 7, 0
  021d360  std 30, 208(1)
  021d364  fmr 29, 1
  021d368  std 28, 192(1)
  021d36c  addi 30, 3, -11492
  021d370  fmr 28, 4
  021d374  std 29, 200(1)
  021d378  ori 28, 9, 0
  021d37c  std 27, 184(1)
  021d380  ori 29, 8, 0
  021d384  ori 27, 10, 0
  021d388  li 3, 66
  021d38c  bl 0x685c4
  021d390  nop
  021d394  clrlwi 4, 31, 24
  021d398  lfs 1, 0(30)
  021d39c  rlwinm 5, 28, 16, 8, 15
  021d3a0  lfs 27, 4(30)
  021d3a4  rlwimi 4, 29, 8, 16, 23
  021d3a8  fmuls 31, 31, 1
  021d3ac  rlwimi 5, 27, 24, 0, 7
  021d3b0  fmr 1, 29
  021d3b4  ori 31, 3, 0
  021d3b8  fmr 2, 30
  021d3bc  or 3, 4, 5
  021d3c0  fmr 5, 28
  021d3c4  lis 4, 255
  021d3c8  fmr 6, 27
  021d3cc  extsw 28, 3
  021d3d0  fmr 7, 27
  021d3d4  ori 27, 4, 65523
  021d3d8  li 29, 0
  021d3dc  li 8, 63
  021d3e0  li 9, 63
  021d3e4  std 27, 112(1)
  021d3e8  ori 10, 31, 0
  021d3ec  std 28, 120(1)
  021d3f0  fmr 3, 31
  021d3f4  std 29, 128(1)
  021d3f8  fmr 4, 31
  021d3fc  std 29, 136(1)
  021d400  std 29, 160(1)
  021d404  bl 0x6e740
  021d408  nop
  021d40c  fmr 1, 28
  021d410  lfs 28, 8(30)
  021d414  fmr 2, 28
  021d418  bl 0x502578
  021d41c  nop
  021d420  fmr 26, 1
  021d424  std 27, 112(1)
  021d428  fmr 1, 29
  021d42c  std 28, 120(1)
  021d430  li 8, 63
  021d434  std 29, 128(1)
  021d438  li 9, 63
  021d43c  std 29, 136(1)
  021d440  fmr 2, 30
  021d444  ori 10, 31, 0
  021d448  fmr 3, 31
  021d44c  fmr 4, 31
  021d450  std 29, 160(1)
  021d454  fmr 6, 27
  021d458  fmr 7, 27
  021d45c  fmr 5, 26
  021d460  bl 0x6e740
  021d464  nop
  021d468  fmr 1, 26
  021d46c  fmr 2, 28
  021d470  bl 0x502578
  021d474  nop
  021d478  fmr 26, 1
  021d47c  std 27, 112(1)
  021d480  fmr 1, 29
  021d484  std 28, 120(1)
  021d488  li 8, 63
  021d48c  std 29, 128(1)
  021d490  li 9, 63
  021d494  std 29, 136(1)
  021d498  fmr 2, 30
  021d49c  ori 10, 31, 0
  021d4a0  fmr 3, 31
  021d4a4  fmr 4, 31
  021d4a8  std 29, 160(1)
  021d4ac  fmr 6, 27
  021d4b0  fmr 7, 27
  021d4b4  fmr 5, 26
  021d4b8  bl 0x6e740
  021d4bc  nop
  021d4c0  fmr 1, 26
  021d4c4  fmr 2, 28
  021d4c8  bl 0x502578
  021d4cc  nop
  021d4d0  std 27, 112(1)
  021d4d4  std 28, 120(1)
  021d4d8  fmr 5, 1
  021d4dc  std 29, 128(1)
  021d4e0  li 8, 63
  021d4e4  std 29, 136(1)
  021d4e8  fmr 1, 29
  021d4ec  li 9, 63
  021d4f0  fmr 2, 30
  021d4f4  ori 10, 31, 0
  021d4f8  fmr 3, 31
  021d4fc  fmr 4, 31
  021d500  std 29, 160(1)
  021d504  fmr 6, 27
  021d508  fmr 7, 27
  021d50c  bl 0x6e740
  021d510  nop
  021d514  ld 0, 288(1)
  021d518  mtlr 0
  021d51c  lfd 26, 224(1)
  021d520  lfd 27, 232(1)
  021d524  lfd 28, 240(1)
  021d528  lfd 29, 248(1)
  021d52c  lfd 30, 256(1)
  021d530  lfd 31, 264(1)
  021d534  ld 27, 184(1)
  021d538  ld 28, 192(1)
  021d53c  ld 29, 200(1)
  021d540  ld 30, 208(1)
  021d544  ld 31, 216(1)
  021d548  addi 1, 1, 272
  021d54c  blr

M1242_0021d558:   # 0x21d558, 0xe0 bytes
  021d558  stdu 1, -192(1)
  021d55c  mflr 0
  021d560  std 0, 208(1)
  021d564  stfd 31, 184(1)
  021d568  std 31, 176(1)
  021d56c  std 29, 160(1)
  021d570  ori 31, 4, 0
  021d574  ori 29, 5, 0
  021d578  lis 5, 34
  021d57c  ori 4, 3, 0
  021d580  std 30, 168(1)
  021d584  addic 3, 1, 112
  021d588  std 28, 152(1)
  021d58c  ori 30, 6, 0
  021d590  std 27, 144(1)
  021d594  addi 28, 5, -10928
  021d598  bl 0x65490
  021d59c  nop
  021d5a0  lis 3, 150
  021d5a4  addic 27, 3, 27392
  021d5a8  lwz 3, 16(27)
  021d5ac  extsw 3, 3
  021d5b0  std 3, 128(1)
  021d5b4  lfs 1, 112(1)
  021d5b8  lfs 31, 0(28)
  021d5bc  lfd 2, 128(1)
  021d5c0  fcfid 2, 2
  021d5c4  frsp 2, 2
  021d5c8  fsubs 1, 1, 2
  021d5cc  fmuls 1, 1, 31
  021d5d0  bl 0x502758
  021d5d4  nop
  021d5d8  stw 3, 0(31)
  021d5dc  lwz 3, 20(27)
  021d5e0  extsw 3, 3
  021d5e4  std 3, 128(1)
  021d5e8  lfs 1, 116(1)
  021d5ec  lfd 2, 128(1)
  021d5f0  fcfid 2, 2
  021d5f4  frsp 2, 2
  021d5f8  fsubs 1, 1, 2
  021d5fc  fmuls 1, 1, 31
  021d600  bl 0x502758
  021d604  nop
  021d608  addc 3, 3, 30
  021d60c  stw 3, 0(29)
  021d610  ld 0, 208(1)
  021d614  mtlr 0
  021d618  lfd 31, 184(1)
  021d61c  ld 27, 144(1)
  021d620  ld 28, 152(1)
  021d624  ld 29, 160(1)
  021d628  ld 30, 168(1)
  021d62c  ld 31, 176(1)
  021d630  addi 1, 1, 192
  021d634  blr

M1242_0021d650:   # 0x21d650, 0x284 bytes
  021d650  stdu 1, -288(1)
  021d654  mflr 0
  021d658  std 0, 304(1)
  021d65c  stfd 29, 264(1)
  021d660  stfd 30, 272(1)
  021d664  stfd 31, 280(1)
  021d668  std 27, 224(1)
  021d66c  ori 27, 3, 0
  021d670  vspltisw 2, 0
  021d674  li 3, 112
  021d678  lis 9, 34
  021d67c  std 26, 216(1)
  021d680  fmr 31, 1
  021d684  ori 26, 8, 0
  021d688  addi 8, 9, -10696
  021d68c  std 25, 208(1)
  021d690  lis 9, 16329
  021d694  addic 25, 1, 112
  021d698  stvx 2, 3, 1
  021d69c  ori 9, 9, 4059
  021d6a0  std 28, 232(1)
  021d6a4  lwz 3, 4(27)
  021d6a8  ori 28, 4, 0
  021d6ac  std 29, 240(1)
  021d6b0  lfs 30, 8(27)
  021d6b4  ori 29, 5, 0
  021d6b8  srawi 10, 3, 31
  021d6bc  stfs 30, 120(1)
  021d6c0  srwi 11, 10, 1
  021d6c4  std 30, 248(1)
  021d6c8  lfs 1, 0(8)
  021d6cc  ori 30, 6, 0
  021d6d0  std 31, 256(1)
  021d6d4  xor 3, 11, 3
  021d6d8  ori 31, 7, 0
  021d6dc  subc 3, 3, 10
  021d6e0  cmpw 3, 9
  021d6e4  bt 1, 0x21d6f8
  021d6e8  lis 4, -16330
  021d6ec  ori 4, 4, 61477
  021d6f0  cmpw 3, 4
  021d6f4  bf 0, 0x21d700
  021d6f8  fneg 30, 30
  021d6fc  stfs 30, 120(1)
  021d700  fmr 2, 30
  021d704  bl 0x5025e0
  021d708  nop
  021d70c  stfs 1, 120(1)
  021d710  addic 3, 1, 128
  021d714  ori 4, 25, 0
  021d718  bl 0x500ca4
  021d71c  nop
  021d720  lfs 1, 20(29)
  021d724  lis 3, 34
  021d728  lfs 2, 4(28)
  021d72c  lfs 3, 16(29)
  021d730  fsubs 1, 1, 2
  021d734  lfs 2, 0(28)
  021d738  lfs 4, 148(1)
  021d73c  addi 28, 3, -10696
  021d740  fsubs 2, 3, 2
  021d744  lfs 3, 144(1)
  021d748  lfs 5, 132(1)
  021d74c  lfs 6, 28(29)
  021d750  lfs 7, 128(1)
  021d754  lfs 8, 180(1)
  021d758  lfs 9, 152(1)
  021d75c  fmuls 4, 4, 1
  021d760  fmuls 3, 3, 1
  021d764  lfs 10, 4(28)
  021d768  fmuls 1, 9, 1
  021d76c  lfs 9, 176(1)
  021d770  lfs 11, 136(1)
  021d774  fmadds 4, 5, 2, 4
  021d778  fmadds 3, 7, 2, 3
  021d77c  lfs 5, 184(1)
  021d780  fmadds 1, 11, 2, 1
  021d784  fmadds 2, 8, 6, 4
  021d788  fmadds 3, 9, 6, 3
  021d78c  fmadds 4, 5, 6, 1
  021d790  fmuls 29, 2, 10
  021d794  fmuls 1, 3, 10
  021d798  fmuls 2, 4, 10
  021d79c  fmuls 3, 29, 29
  021d7a0  fmadds 3, 1, 1, 3
  021d7a4  fmadds 30, 2, 2, 3
  021d7a8  fsqrts 30, 30
  021d7ac  bl 0x502758
  021d7b0  nop
  021d7b4  fneg 1, 29
  021d7b8  ori 25, 3, 0
  021d7bc  bl 0x502758
  021d7c0  nop
  021d7c4  lfs 1, 8(28)
  021d7c8  ori 28, 3, 0
  021d7cc  fcmpu 0, 30, 1
  021d7d0  cror 6, 1, 2
  021d7d4  bt 6, 0x21d89c
  021d7d8  lis 3, 34
  021d7dc  addi 3, 3, -10696
  021d7e0  lfs 2, 12(3)
  021d7e4  fcmpu 0, 30, 2
  021d7e8  cror 6, 0, 2
  021d7ec  bt 6, 0x21d82c
  021d7f0  fsubs 30, 1, 30
  021d7f4  rldicl 3, 26, 40, 56
  021d7f8  bl 0x502730
  021d7fc  nop
  021d800  fmuls 1, 1, 30
  021d804  lis 3, 34
  021d808  clrlwi 26, 26, 8
  021d80c  addi 3, 3, -10696
  021d810  lfs 2, 16(3)
  021d814  fmuls 1, 1, 2
  021d818  bl 0x502758
  021d81c  nop
  021d820  slwi 3, 3, 24
  021d824  extsw 3, 3
  021d828  or 26, 26, 3
  021d82c  lfs 1, 72(29)
  021d830  lfs 2, 8(27)
  021d834  bl 0x5025e0
  021d838  nop
  021d83c  addic 3, 25, 432
  021d840  lis 4, 150
  021d844  fneg 4, 1
  021d848  extsw 3, 3
  021d84c  addic 4, 4, 27392
  021d850  lis 7, 255
  021d854  fmr 3, 31
  021d858  std 3, 192(1)
  021d85c  ori 7, 7, 65523
  021d860  lwz 3, 4(4)
  021d864  lfd 1, 192(1)
  021d868  addc 3, 28, 3
  021d86c  fcfid 1, 1
  021d870  addic 3, 3, -80
  021d874  extsw 5, 3
  021d878  ori 3, 30, 0
  021d87c  ori 4, 31, 0
  021d880  std 5, 192(1)
  021d884  ori 8, 26, 0
  021d888  frsp 1, 1
  021d88c  lfd 2, 192(1)
  021d890  fcfid 2, 2
  021d894  frsp 2, 2
  021d898  bl 0x21cf80
  021d89c  ld 0, 304(1)
  021d8a0  mtlr 0
  021d8a4  lfd 29, 264(1)
  021d8a8  lfd 30, 272(1)
  021d8ac  lfd 31, 280(1)
  021d8b0  ld 25, 208(1)
  021d8b4  ld 26, 216(1)
  021d8b8  ld 27, 224(1)
  021d8bc  ld 28, 232(1)
  021d8c0  ld 29, 240(1)
  021d8c4  ld 30, 248(1)
  021d8c8  ld 31, 256(1)
  021d8cc  addi 1, 1, 288
  021d8d0  blr

M1242_0021d8f8:   # 0x21d8f8, 0x4e0 bytes
  021d8f8  stdu 1, -384(1)
  021d8fc  mflr 0
  021d900  std 0, 400(1)
  021d904  stfd 22, 304(1)
  021d908  stfd 23, 312(1)
  021d90c  stfd 24, 320(1)
  021d910  stfd 25, 328(1)
  021d914  stfd 26, 336(1)
  021d918  stfd 27, 344(1)
  021d91c  stfd 28, 352(1)
  021d920  stfd 29, 360(1)
  021d924  stfd 30, 368(1)
  021d928  stfd 31, 376(1)
  021d92c  std 25, 248(1)
  021d930  lis 5, 34
  021d934  lis 25, 119
  021d938  std 28, 272(1)
  021d93c  addi 5, 5, -10028
  021d940  std 27, 264(1)
  021d944  std 26, 256(1)
  021d948  lis 28, 119
  021d94c  lis 26, 119
  021d950  std 29, 280(1)
  021d954  lis 27, 119
  021d958  lis 29, 119
  021d95c  std 24, 240(1)
  021d960  lfs 23, 0(5)
  021d964  li 24, 1
  021d968  lfs 24, 4(5)
  021d96c  addic 25, 25, -12168
  021d970  lfs 25, 8(5)
  021d974  addic 26, 26, -12152
  021d978  lfs 26, 12(5)
  021d97c  addic 27, 27, -12136
  021d980  lfs 27, 16(5)
  021d984  addic 28, 28, -12120
  021d988  lfs 28, 20(5)
  021d98c  addic 29, 29, -12104
  021d990  std 30, 288(1)
  021d994  lfs 29, 24(5)
  021d998  ori 30, 3, 0
  021d99c  std 31, 296(1)
  021d9a0  lfs 30, 28(5)
  021d9a4  std 23, 232(1)
  021d9a8  std 22, 224(1)
  021d9ac  std 21, 216(1)
  021d9b0  std 20, 208(1)
  021d9b4  std 19, 200(1)
  021d9b8  ori 31, 4, 0
  021d9bc  lfs 31, 32(5)
  021d9c0  lis 3, 119
  021d9c4  lfs 22, 100(31)
  021d9c8  lfs 1, -14704(3)
  021d9cc  fdivs 22, 22, 1
  021d9d0  li 3, 0
  021d9d4  stw 3, 112(1)
  021d9d8  stw 3, 116(1)
  021d9dc  stw 3, 120(1)
  021d9e0  stw 3, 124(1)
  021d9e4  fcmpu 0, 22, 23
  021d9e8  fcmpu 1, 22, 24
  021d9ec  cror 2, 0, 2
  021d9f0  bt 2, 0x21d9fc
  021d9f4  fmr 22, 23
  021d9f8  b 0x21da04
  021d9fc  bf 4, 0x21da04
  021da00  fmr 22, 24
  021da04  ori 4, 24, 0
  021da08  addic 5, 1, 128
  021da0c  ori 3, 30, 0
  021da10  bl 0xf1114
  021da14  nop
  021da18  li 4, 0
  021da1c  lfs 1, 128(1)
  021da20  addic 23, 1, 144
  021da24  lfs 2, 132(1)
  021da28  stfs 1, 144(1)
  021da2c  stw 4, 140(1)
  021da30  ori 3, 23, 0
  021da34  lfs 3, 136(1)
  021da38  stfs 2, 148(1)
  021da3c  stfs 3, 152(1)
  021da40  stw 4, 156(1)
  021da44  stfs 1, 160(1)
  021da48  stfs 2, 164(1)
  021da4c  stfs 3, 168(1)
  021da50  stw 4, 172(1)
  021da54  stfs 1, 176(1)
  021da58  stfs 2, 180(1)
  021da5c  lfs 1, 196(31)
  021da60  stfs 3, 184(1)
  021da64  stw 4, 188(1)
  021da68  fmadds 1, 1, 25, 25
  021da6c  bl 0x110950
  021da70  nop
  021da74  lfs 1, 196(31)
  021da78  addic 22, 1, 160
  021da7c  fmadds 1, 1, 25, 25
  021da80  ori 3, 22, 0
  021da84  bl 0x110950
  021da88  nop
  021da8c  lfs 1, 196(31)
  021da90  addic 21, 1, 176
  021da94  fmadds 1, 1, 26, 25
  021da98  ori 3, 21, 0
  021da9c  bl 0x110950
  021daa0  nop
  021daa4  fmr 1, 27
  021daa8  fmr 2, 28
  021daac  bl 0xfcbe8
  021dab0  nop
  021dab4  lfs 2, 196(31)
  021dab8  lis 20, 114
  021dabc  fmadds 1, 2, 29, 1
  021dac0  addic 19, 1, 112
  021dac4  ori 3, 30, 0
  021dac8  lfs 2, -3052(20)
  021dacc  ori 4, 23, 0
  021dad0  ori 5, 19, 0
  021dad4  ori 6, 25, 0
  021dad8  li 7, 1
  021dadc  fmuls 1, 1, 2
  021dae0  fmuls 1, 1, 22
  021dae4  fneg 1, 1
  021dae8  stfs 1, 112(1)
  021daec  bl 0x1349f0
  021daf0  nop
  021daf4  fmr 1, 27
  021daf8  fmr 2, 28
  021dafc  bl 0xfcbe8
  021db00  nop
  021db04  lfs 2, 196(31)
  021db08  ori 3, 30, 0
  021db0c  fmadds 1, 2, 30, 1
  021db10  lfs 2, -3052(20)
  021db14  ori 4, 22, 0
  021db18  ori 5, 19, 0
  021db1c  ori 6, 26, 0
  021db20  li 7, 1
  021db24  fmuls 1, 1, 2
  021db28  fmuls 1, 1, 22
  021db2c  fneg 1, 1
  021db30  stfs 1, 112(1)
  021db34  bl 0x1349f0
  021db38  nop
  021db3c  fmr 1, 27
  021db40  fmr 2, 28
  021db44  bl 0xfcbe8
  021db48  nop
  021db4c  lfs 2, 196(31)
  021db50  ori 3, 30, 0
  021db54  fmadds 1, 2, 31, 1
  021db58  lfs 2, -3052(20)
  021db5c  ori 4, 21, 0
  021db60  ori 5, 19, 0
  021db64  ori 6, 27, 0
  021db68  li 7, 1
  021db6c  fmuls 1, 1, 2
  021db70  fmuls 1, 1, 22
  021db74  fneg 1, 1
  021db78  stfs 1, 112(1)
  021db7c  bl 0x1349f0
  021db80  nop
  021db84  lwz 3, 196(31)
  021db88  lis 4, 16128
  021db8c  lfs 1, 196(31)
  021db90  srawi 5, 3, 31
  021db94  srwi 6, 5, 1
  021db98  xor 3, 6, 3
  021db9c  subc 3, 3, 5
  021dba0  cmpw 3, 4
  021dba4  bf 1, 0x21dd5c
  021dba8  addic 23, 1, 144
  021dbac  fmadds 1, 1, 25, 26
  021dbb0  ori 3, 23, 0
  021dbb4  bl 0x110950
  021dbb8  nop
  021dbbc  lfs 1, 196(31)
  021dbc0  addic 22, 1, 160
  021dbc4  fmadds 1, 1, 25, 26
  021dbc8  ori 3, 22, 0
  021dbcc  bl 0x110950
  021dbd0  nop
  021dbd4  lfs 1, 196(31)
  021dbd8  addic 21, 1, 176
  021dbdc  fmadds 1, 1, 26, 26
  021dbe0  ori 3, 21, 0
  021dbe4  bl 0x110950
  021dbe8  nop
  021dbec  fmr 1, 27
  021dbf0  fmr 2, 28
  021dbf4  bl 0xfcbe8
  021dbf8  nop
  021dbfc  lfs 2, 196(31)
  021dc00  lis 20, 114
  021dc04  fmadds 1, 2, 29, 1
  021dc08  addic 19, 1, 112
  021dc0c  ori 3, 30, 0
  021dc10  lfs 2, -3052(20)
  021dc14  ori 4, 23, 0
  021dc18  ori 5, 19, 0
  021dc1c  ori 6, 25, 0
  021dc20  li 7, 1
  021dc24  fmuls 1, 1, 2
  021dc28  fmuls 1, 1, 22
  021dc2c  fneg 1, 1
  021dc30  stfs 1, 112(1)
  021dc34  bl 0x1349f0
  021dc38  nop
  021dc3c  fmr 1, 27
  021dc40  fmr 2, 28
  021dc44  bl 0xfcbe8
  021dc48  nop
  021dc4c  lfs 2, 196(31)
  021dc50  ori 3, 30, 0
  021dc54  fmadds 1, 2, 30, 1
  021dc58  lfs 2, -3052(20)
  021dc5c  ori 4, 22, 0
  021dc60  ori 5, 19, 0
  021dc64  ori 6, 26, 0
  021dc68  li 7, 1
  021dc6c  fmuls 1, 1, 2
  021dc70  fmuls 1, 1, 22
  021dc74  fneg 1, 1
  021dc78  stfs 1, 112(1)
  021dc7c  bl 0x1349f0
  021dc80  nop
  021dc84  fmr 1, 27
  021dc88  fmr 2, 28
  021dc8c  bl 0xfcbe8
  021dc90  nop
  021dc94  lfs 2, 196(31)
  021dc98  ori 3, 30, 0
  021dc9c  fmadds 1, 2, 31, 1
  021dca0  lfs 2, -3052(20)
  021dca4  ori 4, 21, 0
  021dca8  ori 5, 19, 0
  021dcac  ori 6, 27, 0
  021dcb0  li 7, 1
  021dcb4  fmuls 1, 1, 2
  021dcb8  fmuls 1, 1, 22
  021dcbc  fneg 1, 1
  021dcc0  stfs 1, 112(1)
  021dcc4  bl 0x1349f0
  021dcc8  nop
  021dccc  fmr 1, 27
  021dcd0  fmr 2, 28
  021dcd4  bl 0xfcbe8
  021dcd8  nop
  021dcdc  lfs 2, 196(31)
  021dce0  ori 3, 30, 0
  021dce4  fmadds 1, 2, 29, 1
  021dce8  lfs 2, -3052(20)
  021dcec  ori 4, 23, 0
  021dcf0  ori 5, 19, 0
  021dcf4  ori 6, 28, 0
  021dcf8  li 7, 1
  021dcfc  fmuls 1, 1, 2
  021dd00  fmuls 1, 1, 22
  021dd04  fneg 1, 1
  021dd08  stfs 1, 112(1)
  021dd0c  bl 0x1349f0
  021dd10  nop
  021dd14  fmr 1, 27
  021dd18  fmr 2, 28
  021dd1c  bl 0xfcbe8
  021dd20  nop
  021dd24  lfs 2, 196(31)
  021dd28  addic 4, 1, 128
  021dd2c  fmadds 1, 2, 30, 1
  021dd30  lfs 2, -3052(20)
  021dd34  ori 3, 30, 0
  021dd38  ori 5, 19, 0
  021dd3c  ori 6, 29, 0
  021dd40  li 7, 1
  021dd44  fmuls 1, 1, 2
  021dd48  fmuls 1, 1, 22
  021dd4c  fneg 1, 1
  021dd50  stfs 1, 112(1)
  021dd54  bl 0x1349f0
  021dd58  nop
  021dd5c  addic 24, 24, 1
  021dd60  extsw 24, 24
  021dd64  cmpwi 24, 2
  021dd68  bf 1, 0x21d9c0
  021dd6c  ld 0, 400(1)
  021dd70  mtlr 0
  021dd74  lfd 22, 304(1)
  021dd78  lfd 23, 312(1)
  021dd7c  lfd 24, 320(1)
  021dd80  lfd 25, 328(1)
  021dd84  lfd 26, 336(1)
  021dd88  lfd 27, 344(1)
  021dd8c  lfd 28, 352(1)
  021dd90  lfd 29, 360(1)
  021dd94  lfd 30, 368(1)
  021dd98  lfd 31, 376(1)
  021dd9c  ld 19, 200(1)
  021dda0  ld 20, 208(1)
  021dda4  ld 21, 216(1)
  021dda8  ld 22, 224(1)
  021ddac  ld 23, 232(1)
  021ddb0  ld 24, 240(1)
  021ddb4  ld 25, 248(1)
  021ddb8  ld 26, 256(1)
  021ddbc  ld 27, 264(1)
  021ddc0  ld 28, 272(1)
  021ddc4  ld 29, 280(1)
  021ddc8  ld 30, 288(1)
  021ddcc  ld 31, 296(1)
  021ddd0  addi 1, 1, 384
  021ddd4  blr

M1242_0021ddf0:   # 0x21ddf0, 0x2d4 bytes
  021ddf0  stdu 1, -288(1)
  021ddf4  mflr 0
  021ddf8  std 0, 304(1)
  021ddfc  stfd 30, 272(1)
  021de00  stfd 31, 280(1)
  021de04  vspltisw 2, 0
  021de08  li 8, 128
  021de0c  std 28, 240(1)
  021de10  lis 10, 16329
  021de14  ori 28, 7, 0
  021de18  ori 7, 10, 4059
  021de1c  lis 9, 34
  021de20  stvx 2, 8, 1
  021de24  lwz 8, 4(3)
  021de28  addi 9, 9, -8744
  021de2c  std 27, 232(1)
  021de30  lfs 31, 8(3)
  021de34  addic 27, 1, 128
  021de38  srawi 3, 8, 31
  021de3c  stfs 31, 136(1)
  021de40  srwi 10, 3, 1
  021de44  lfs 1, 0(9)
  021de48  std 29, 248(1)
  021de4c  xor 8, 10, 8
  021de50  ori 29, 4, 0
  021de54  std 30, 256(1)
  021de58  subc 3, 8, 3
  021de5c  ori 30, 5, 0
  021de60  std 31, 264(1)
  021de64  cmpw 3, 7
  021de68  ori 31, 6, 0
  021de6c  bt 1, 0x21de80
  021de70  lis 4, -16330
  021de74  ori 4, 4, 61477
  021de78  cmpw 3, 4
  021de7c  bf 0, 0x21de88
  021de80  fneg 31, 31
  021de84  stfs 31, 136(1)
  021de88  fmr 2, 31
  021de8c  bl 0x5025e0
  021de90  nop
  021de94  stfs 1, 136(1)
  021de98  addic 3, 1, 144
  021de9c  ori 4, 27, 0
  021dea0  bl 0x500ca4
  021dea4  nop
  021dea8  lfs 1, 20(30)
  021deac  lfs 2, 4(29)
  021deb0  lis 3, 34
  021deb4  lfs 3, 16(30)
  021deb8  fsubs 1, 1, 2
  021debc  lfs 2, 0(29)
  021dec0  lfs 4, 164(1)
  021dec4  fsubs 2, 3, 2
  021dec8  addi 29, 3, -8744
  021decc  lfs 3, 160(1)
  021ded0  lfs 5, 148(1)
  021ded4  lfs 6, 28(30)
  021ded8  lfs 7, 144(1)
  021dedc  lfs 8, 196(1)
  021dee0  lfs 9, 168(1)
  021dee4  fmuls 4, 4, 1
  021dee8  lfs 10, 4(29)
  021deec  fmuls 3, 3, 1
  021def0  fmuls 1, 9, 1
  021def4  lfs 9, 192(1)
  021def8  lfs 11, 152(1)
  021defc  lis 3, 151
  021df00  li 4, 0
  021df04  addic 3, 3, -16268
  021df08  fmadds 4, 5, 2, 4
  021df0c  fmadds 3, 7, 2, 3
  021df10  lfs 5, 200(1)
  021df14  fmadds 1, 11, 2, 1
  021df18  li 5, 1
  021df1c  lbz 3, 4(3)
  021df20  li 6, -1
  021df24  subc 3, 4, 3
  021df28  subc 4, 5, 6
  021df2c  cntlzw 3, 3
  021df30  fmadds 2, 8, 6, 4
  021df34  fmadds 3, 9, 6, 3
  021df38  fmadds 1, 5, 6, 1
  021df3c  sldi 3, 3, 58
  021df40  sradi 3, 3, 63
  021df44  and 3, 3, 4
  021df48  fmuls 30, 2, 10
  021df4c  fmuls 2, 3, 10
  021df50  fmuls 1, 1, 10
  021df54  addc 3, 6, 3
  021df58  extsw 3, 3
  021df5c  fmuls 3, 30, 30
  021df60  std 3, 208(1)
  021df64  fmadds 3, 2, 2, 3
  021df68  fmadds 31, 1, 1, 3
  021df6c  lfd 1, 208(1)
  021df70  fcfid 1, 1
  021df74  fsqrts 31, 31
  021df78  frsp 1, 1
  021df7c  fmuls 1, 1, 2
  021df80  bl 0x502758
  021df84  nop
  021df88  fneg 1, 30
  021df8c  ori 30, 3, 0
  021df90  bl 0x502758
  021df94  nop
  021df98  lfs 1, 8(29)
  021df9c  ori 29, 3, 0
  021dfa0  fcmpu 0, 31, 1
  021dfa4  cror 6, 1, 2
  021dfa8  bt 6, 0x21e098
  021dfac  lis 3, 34
  021dfb0  addi 3, 3, -8744
  021dfb4  lfs 2, 12(3)
  021dfb8  fcmpu 0, 31, 2
  021dfbc  cror 6, 0, 2
  021dfc0  bt 6, 0x21e000
  021dfc4  fsubs 31, 1, 31
  021dfc8  rldicl 3, 28, 40, 56
  021dfcc  bl 0x502730
  021dfd0  nop
  021dfd4  fmuls 1, 1, 31
  021dfd8  lis 3, 34
  021dfdc  clrlwi 28, 28, 8
  021dfe0  addi 3, 3, -8744
  021dfe4  lfs 2, 16(3)
  021dfe8  fmuls 1, 1, 2
  021dfec  bl 0x502758
  021dff0  nop
  021dff4  slwi 3, 3, 24
  021dff8  extsw 3, 3
  021dffc  or 28, 28, 3
  021e000  lis 3, 119
  021e004  lis 4, 150
  021e008  addic 3, 3, -12088
  021e00c  sldi 5, 31, 4
  021e010  addic 4, 4, 27392
  021e014  addc 3, 3, 5
  021e018  clrldi 31, 3, 32
  021e01c  lwz 3, 4(4)
  021e020  addc 29, 29, 3
  021e024  lhz 3, 0(31)
  021e028  extsh 3, 3
  021e02c  bl 0x685c4
  021e030  nop
  021e034  lhz 4, 12(31)
  021e038  ori 9, 3, 0
  021e03c  lhz 5, 14(31)
  021e040  extsh 4, 4
  021e044  subc 3, 30, 4
  021e048  extsh 4, 5
  021e04c  lhz 5, 6(31)
  021e050  addic 3, 3, 432
  021e054  lhz 6, 8(31)
  021e058  subc 4, 29, 4
  021e05c  lhz 7, 2(31)
  021e060  extsh 5, 5
  021e064  lhz 8, 4(31)
  021e068  addic 4, 4, -80
  021e06c  extsh 6, 6
  021e070  std 28, 112(1)
  021e074  std 9, 120(1)
  021e078  extsw 3, 3
  021e07c  extsw 4, 4
  021e080  extsh 7, 7
  021e084  extsh 8, 8
  021e088  ori 9, 5, 0
  021e08c  ori 10, 6, 0
  021e090  bl 0x6a5c4
  021e094  nop
  021e098  ld 0, 304(1)
  021e09c  mtlr 0
  021e0a0  lfd 30, 272(1)
  021e0a4  lfd 31, 280(1)
  021e0a8  ld 27, 232(1)
  021e0ac  ld 28, 240(1)
  021e0b0  ld 29, 248(1)
  021e0b4  ld 30, 256(1)
  021e0b8  ld 31, 264(1)
  021e0bc  addi 1, 1, 288
  021e0c0  blr

M1242_0021e0d0:   # 0x21e0d0, 0x2ac bytes
  021e0d0  stdu 1, -240(1)
  021e0d4  mflr 0
  021e0d8  std 0, 256(1)
  021e0dc  stfd 31, 232(1)
  021e0e0  std 31, 224(1)
  021e0e4  ori 31, 4, 0
  021e0e8  std 30, 216(1)
  021e0ec  lbz 4, 49(4)
  021e0f0  lwz 30, 120(3)
  021e0f4  std 29, 208(1)
  021e0f8  std 28, 200(1)
  021e0fc  std 27, 192(1)
  021e100  std 26, 184(1)
  021e104  cmpwi 4, 0
  021e108  bf 2, 0x21e11c
  021e10c  lis 3, 34
  021e110  addi 3, 3, -7996
  021e114  lfs 1, 0(3)
  021e118  b 0x21e350
  021e11c  addic 3, 1, 144
  021e120  addic 4, 31, 16
  021e124  bl 0x65490
  021e128  nop
  021e12c  lis 3, 150
  021e130  addic 29, 3, 27392
  021e134  lwz 3, 16(29)
  021e138  extsw 3, 3
  021e13c  std 3, 160(1)
  021e140  lis 3, 34
  021e144  lfs 1, 144(1)
  021e148  addi 28, 3, -7996
  021e14c  lfs 31, 4(28)
  021e150  lfd 2, 160(1)
  021e154  fcfid 2, 2
  021e158  frsp 2, 2
  021e15c  fsubs 1, 1, 2
  021e160  fmuls 1, 1, 31
  021e164  bl 0x502758
  021e168  nop
  021e16c  lwz 4, 20(29)
  021e170  extsw 4, 4
  021e174  ori 27, 3, 0
  021e178  std 4, 160(1)
  021e17c  lfs 1, 148(1)
  021e180  lfd 2, 160(1)
  021e184  fcfid 2, 2
  021e188  frsp 2, 2
  021e18c  fsubs 1, 1, 2
  021e190  fmuls 1, 1, 31
  021e194  bl 0x502758
  021e198  nop
  021e19c  lis 4, 149
  021e1a0  lfs 1, 12(31)
  021e1a4  addic 4, 4, 5056
  021e1a8  lwz 5, 224(30)
  021e1ac  ori 26, 3, 0
  021e1b0  lwz 6, 228(30)
  021e1b4  lfs 2, 16(31)
  021e1b8  subc 30, 27, 5
  021e1bc  lfs 3, 864(4)
  021e1c0  lfs 4, 868(4)
  021e1c4  extsw 3, 30
  021e1c8  stfs 3, 112(1)
  021e1cc  lfs 5, 872(4)
  021e1d0  stfs 4, 116(1)
  021e1d4  li 7, 0
  021e1d8  lfs 6, 876(4)
  021e1dc  stfs 5, 120(1)
  021e1e0  stfs 6, 124(1)
  021e1e4  li 4, 0
  021e1e8  lfs 7, 8(28)
  021e1ec  li 8, -1
  021e1f0  lfs 8, 20(31)
  021e1f4  subc 3, 3, 4
  021e1f8  fmuls 1, 1, 7
  021e1fc  lfs 9, 24(31)
  021e200  subc 31, 26, 6
  021e204  li 4, -1
  021e208  li 6, 1
  021e20c  sradi 3, 3, 63
  021e210  subc 4, 4, 6
  021e214  extsw 5, 31
  021e218  and 3, 3, 4
  021e21c  subc 4, 5, 7
  021e220  li 5, 1
  021e224  fmuls 3, 3, 1
  021e228  fmuls 4, 4, 1
  021e22c  addc 3, 6, 3
  021e230  fmuls 1, 5, 1
  021e234  subc 6, 8, 5
  021e238  mullw 30, 30, 3
  021e23c  fadds 2, 3, 2
  021e240  fadds 5, 4, 8
  021e244  stfs 3, 112(1)
  021e248  fadds 3, 1, 9
  021e24c  sradi 3, 4, 63
  021e250  stfs 4, 116(1)
  021e254  addic 4, 1, 112
  021e258  and 3, 3, 6
  021e25c  stfs 1, 120(1)
  021e260  stfs 6, 124(1)
  021e264  addc 3, 5, 3
  021e268  mullw 31, 31, 3
  021e26c  stfs 2, 112(1)
  021e270  stfs 5, 116(1)
  021e274  addic 3, 1, 128
  021e278  stfs 3, 120(1)
  021e27c  bl 0x65490
  021e280  nop
  021e284  lwz 3, 16(29)
  021e288  extsw 3, 3
  021e28c  std 3, 160(1)
  021e290  lfs 1, 128(1)
  021e294  lfd 2, 160(1)
  021e298  fcfid 2, 2
  021e29c  frsp 2, 2
  021e2a0  fsubs 1, 1, 2
  021e2a4  fmuls 1, 1, 31
  021e2a8  bl 0x502758
  021e2ac  nop
  021e2b0  lwz 4, 20(29)
  021e2b4  extsw 4, 4
  021e2b8  ori 29, 3, 0
  021e2bc  std 4, 160(1)
  021e2c0  lfs 1, 132(1)
  021e2c4  lfd 2, 160(1)
  021e2c8  fcfid 2, 2
  021e2cc  frsp 2, 2
  021e2d0  fsubs 1, 1, 2
  021e2d4  fmuls 1, 1, 31
  021e2d8  bl 0x502758
  021e2dc  nop
  021e2e0  subc 4, 29, 27
  021e2e4  subc 3, 3, 26
  021e2e8  mullw 4, 4, 4
  021e2ec  mullw 3, 3, 3
  021e2f0  addc 3, 4, 3
  021e2f4  extsw 3, 3
  021e2f8  bl 0x502730
  021e2fc  nop
  021e300  fsqrts 1, 1
  021e304  bl 0x502758
  021e308  nop
  021e30c  addic 3, 3, 28
  021e310  cmpw 30, 3
  021e314  bf 0, 0x21e344
  021e318  cmpw 31, 3
  021e31c  bf 0, 0x21e344
  021e320  mullw 3, 30, 30
  021e324  mullw 4, 31, 31
  021e328  addc 3, 3, 4
  021e32c  extsw 3, 3
  021e330  std 3, 160(1)
  021e334  lfd 1, 160(1)
  021e338  fcfid 1, 1
  021e33c  frsp 1, 1
  021e340  b 0x21e350
  021e344  lis 3, 34
  021e348  addi 3, 3, -7996
  021e34c  lfs 1, 0(3)
  021e350  ld 0, 256(1)
  021e354  mtlr 0
  021e358  lfd 31, 232(1)
  021e35c  ld 26, 184(1)
  021e360  ld 27, 192(1)
  021e364  ld 28, 200(1)
  021e368  ld 29, 208(1)
  021e36c  ld 30, 216(1)
  021e370  ld 31, 224(1)
  021e374  addi 1, 1, 240
  021e378  blr

M1242_0021e37c:   # 0x21e37c, 0x90 bytes
  021e37c  li 7, 0
  021e380  lwz 3, 120(3)
  021e384  lis 6, 165
  021e388  addic 6, 6, -28284
  021e38c  sth 7, 0(4)
  021e390  sth 7, 0(5)
  021e394  lwz 3, 264(3)
  021e398  extsh 3, 3
  021e39c  sldi 3, 3, 2
  021e3a0  lwzx 3, 6, 3
  021e3a4  cmpwi 3, 0
  021e3a8  bt 2, 0x21e408
  021e3ac  lis 6, 164
  021e3b0  lwz 6, -28512(6)
  021e3b4  lhz 7, 0(3)
  021e3b8  rlwinm 7, 7, 8, 9, 23
  021e3bc  addc 7, 6, 7
  021e3c0  clrldi 7, 7, 32
  021e3c4  lbz 8, 32(7)
  021e3c8  cmpwi 8, 128
  021e3cc  bf 0, 0x21e3f4
  021e3d0  lhz 8, 0(4)
  021e3d4  addic 8, 8, 1
  021e3d8  sth 8, 0(4)
  021e3dc  lbz 7, 49(7)
  021e3e0  cmpwi 7, 0
  021e3e4  bt 2, 0x21e3f4
  021e3e8  lhz 7, 0(5)
  021e3ec  addic 7, 7, 1
  021e3f0  sth 7, 0(5)
  021e3f4  lhz 7, 0(3)
  021e3f8  addic 3, 3, 2
  021e3fc  extsh 7, 7
  021e400  cmpwi 7, 0
  021e404  bf 0, 0x21e3b4
  021e408  blr

M1242_0021e410:   # 0x21e410, 0x1dc bytes
  021e410  stdu 1, -208(1)
  021e414  mflr 0
  021e418  std 0, 224(1)
  021e41c  stfd 31, 200(1)
  021e420  std 31, 192(1)
  021e424  ori 31, 3, 0
  021e428  std 30, 184(1)
  021e42c  lis 3, 34
  021e430  ori 30, 4, 0
  021e434  std 29, 176(1)
  021e438  addi 3, 3, -7156
  021e43c  lis 29, 165
  021e440  lwz 5, 120(31)
  021e444  li 4, 0
  021e448  std 28, 168(1)
  021e44c  addic 29, 29, -28284
  021e450  ori 28, 10, 0
  021e454  lfs 31, 0(3)
  021e458  lwz 3, 264(5)
  021e45c  sth 4, 232(30)
  021e460  extsh 3, 3
  021e464  sth 4, 234(30)
  021e468  sldi 5, 3, 2
  021e46c  ori 3, 4, 0
  021e470  lwzx 5, 29, 5
  021e474  std 27, 160(1)
  021e478  std 26, 152(1)
  021e47c  cmpwi 5, 0
  021e480  bt 2, 0x21e4e4
  021e484  lis 6, 164
  021e488  lhz 7, 0(5)
  021e48c  lwz 8, -28512(6)
  021e490  rlwinm 7, 7, 8, 9, 23
  021e494  addc 8, 8, 7
  021e498  clrldi 8, 8, 32
  021e49c  lbz 8, 32(8)
  021e4a0  cmpwi 8, 128
  021e4a4  bf 0, 0x21e4d0
  021e4a8  addic 4, 4, 1
  021e4ac  sth 4, 232(30)
  021e4b0  lwz 8, -28512(6)
  021e4b4  addc 7, 8, 7
  021e4b8  clrldi 7, 7, 32
  021e4bc  lbz 7, 49(7)
  021e4c0  cmpwi 7, 0
  021e4c4  bt 2, 0x21e4d0
  021e4c8  addic 3, 3, 1
  021e4cc  sth 3, 234(30)
  021e4d0  lhz 7, 0(5)
  021e4d4  addic 5, 5, 2
  021e4d8  extsh 7, 7
  021e4dc  cmpwi 7, 0
  021e4e0  bf 0, 0x21e488
  021e4e4  cmpwi 28, 0
  021e4e8  bt 2, 0x21e50c
  021e4ec  ori 3, 31, 0
  021e4f0  ori 4, 28, 0
  021e4f4  bl 0x21e0d0
  021e4f8  fcmpu 0, 1, 31
  021e4fc  cror 6, 1, 2
  021e500  bt 6, 0x21e50c
  021e504  ori 3, 28, 0
  021e508  b 0x21e5c0
  021e50c  lwz 3, 264(30)
  021e510  extsh 3, 3
  021e514  sldi 3, 3, 2
  021e518  lwzx 30, 29, 3
  021e51c  cmpwi 30, 0
  021e520  bf 2, 0x21e52c
  021e524  li 3, 0
  021e528  b 0x21e5c0
  021e52c  li 27, 0
  021e530  lis 3, 164
  021e534  lhz 4, 0(30)
  021e538  rlwinm 4, 4, 8, 9, 23
  021e53c  lwz 3, -28512(3)
  021e540  addc 28, 3, 4
  021e544  clrldi 28, 28, 32
  021e548  lbz 3, 32(28)
  021e54c  cmpwi 3, 128
  021e550  bf 0, 0x21e5a8
  021e554  ori 3, 28, 0
  021e558  addic 4, 1, 112
  021e55c  bl 0x232a80
  021e560  nop
  021e564  ori 28, 3, 0
  021e568  li 29, 1
  021e56c  cmpwi 28, 1
  021e570  bf 1, 0x21e5a8
  021e574  addic 26, 1, 4
  021e578  ori 3, 31, 0
  021e57c  lwz 4, 112(26)
  021e580  bl 0x21e0d0
  021e584  fcmpu 0, 31, 1
  021e588  cror 6, 0, 2
  021e58c  bt 6, 0x21e598
  021e590  fmr 31, 1
  021e594  lwz 27, 112(26)
  021e598  addic 29, 29, 1
  021e59c  addic 26, 26, 4
  021e5a0  cmpw 29, 28
  021e5a4  bt 0, 0x21e578
  021e5a8  lhz 3, 0(30)
  021e5ac  addic 30, 30, 2
  021e5b0  extsh 3, 3
  021e5b4  cmpwi 3, 0
  021e5b8  bf 0, 0x21e530
  021e5bc  ori 3, 27, 0
  021e5c0  ld 0, 224(1)
  021e5c4  mtlr 0
  021e5c8  lfd 31, 200(1)
  021e5cc  ld 26, 152(1)
  021e5d0  ld 27, 160(1)
  021e5d4  ld 28, 168(1)
  021e5d8  ld 29, 176(1)
  021e5dc  ld 30, 184(1)
  021e5e0  ld 31, 192(1)
  021e5e4  addi 1, 1, 208
  021e5e8  blr

M1242_0021e5f8:   # 0x21e5f8, 0x10c bytes
  021e5f8  stdu 1, -160(1)
  021e5fc  mflr 0
  021e600  std 0, 176(1)
  021e604  std 31, 152(1)
  021e608  lis 5, 151
  021e60c  ori 31, 4, 0
  021e610  addic 5, 5, -25376
  021e614  lbz 4, 5622(5)
  021e618  cmpwi 4, 0
  021e61c  bf 2, 0x21e62c
  021e620  li 3, 0
  021e624  stw 3, 136(31)
  021e628  b 0x21e6f0
  021e62c  lwz 4, 136(31)
  021e630  cmpwi 4, 0
  021e634  bt 2, 0x21e654
  021e638  lbz 5, 32(4)
  021e63c  cmpwi 5, 254
  021e640  cmpwi 1, 5, 253
  021e644  bt 2, 0x21e64c
  021e648  bf 6, 0x21e654
  021e64c  li 4, 0
  021e650  stw 4, 136(31)
  021e654  ori 10, 4, 0
  021e658  lis 4, 149
  021e65c  li 7, 0
  021e660  addic 5, 4, 5056
  021e664  lis 4, 34
  021e668  addic 6, 1, 128
  021e66c  addi 4, 4, -6676
  021e670  lfs 1, 336(5)
  021e674  lfs 2, 340(5)
  021e678  stfs 1, 128(1)
  021e67c  lfs 1, 344(5)
  021e680  stfs 2, 132(1)
  021e684  lfs 2, 348(5)
  021e688  stfs 1, 136(1)
  021e68c  addic 5, 5, 320
  021e690  stfs 2, 140(1)
  021e694  lfs 1, 0(4)
  021e698  lfs 3, 4(4)
  021e69c  ori 4, 31, 0
  021e6a0  std 7, 112(1)
  021e6a4  fmr 2, 1
  021e6a8  bl 0x21e410
  021e6ac  ori 4, 3, 0
  021e6b0  lwz 3, 136(31)
  021e6b4  cmpw 4, 3
  021e6b8  bt 2, 0x21e6dc
  021e6bc  lis 3, 119
  021e6c0  lis 5, 119
  021e6c4  lwz 3, -14344(3)
  021e6c8  lwz 5, -14340(5)
  021e6cc  stw 4, 136(31)
  021e6d0  addc 3, 3, 5
  021e6d4  stw 3, 140(31)
  021e6d8  b 0x21e6f0
  021e6dc  cmpwi 3, 0
  021e6e0  bt 2, 0x21e6f0
  021e6e4  addic 3, 31, 140
  021e6e8  bl 0x4fff60
  021e6ec  nop
  021e6f0  ld 0, 176(1)
  021e6f4  mtlr 0
  021e6f8  ld 31, 152(1)
  021e6fc  addi 1, 1, 160
  021e700  blr

M1242_Hud_Draw:   # 0x21e750, 0xb48 bytes
  021e750  stdu 1, -384(1)
  021e754  mflr 0
  021e758  std 0, 400(1)
  021e75c  stfd 27, 344(1)
  021e760  stfd 28, 352(1)
  021e764  stfd 29, 360(1)
  021e768  stfd 30, 368(1)
  021e76c  stfd 31, 376(1)
  021e770  std 28, 312(1)
  021e774  std 31, 336(1)
  021e778  lis 28, 144
  021e77c  std 29, 320(1)
  021e780  ori 31, 3, 0
  021e784  std 23, 272(1)
  021e788  li 29, 0
  021e78c  ori 23, 29, 0
  021e790  std 30, 328(1)
  021e794  lwz 28, -23196(28)
  021e798  lwz 30, 120(3)
  021e79c  lwz 3, 12(28)
  021e7a0  std 27, 304(1)
  021e7a4  std 26, 296(1)
  021e7a8  std 25, 288(1)
  021e7ac  std 24, 280(1)
  021e7b0  std 22, 264(1)
  021e7b4  std 21, 256(1)
  021e7b8  cmpwi 3, 0
  021e7bc  bt 2, 0x21e7d4
  021e7c0  lbz 3, 17(28)
  021e7c4  cmpwi 3, 4
  021e7c8  cmpwi 1, 3, 5
  021e7cc  bt 2, 0x21e7d4
  021e7d0  bf 6, 0x21e7d8
  021e7d4  li 29, 1
  021e7d8  lis 3, 144
  021e7dc  li 5, 13
  021e7e0  addic 27, 3, -23532
  021e7e4  ori 3, 28, 0
  021e7e8  lwz 4, 40(27)
  021e7ec  bl 0x4d82b8
  021e7f0  nop
  021e7f4  li 3, 244
  021e7f8  lis 5, 34
  021e7fc  addi 4, 3, 16
  021e800  li 6, 192
  021e804  <unknown>
  021e808  addi 3, 5, -6392
  021e80c  <unknown>
  021e810  vor 2, 2, 3
  021e814  lis 5, 101
  021e818  vspltisw 3, -1
  021e81c  li 4, 13
  021e820  <unknown>
  021e824  addic 5, 5, 20536
  021e828  ori 3, 28, 0
  021e82c  vcfsx 2, 2, 0
  021e830  vslw 3, 3, 3
  021e834  vspltw 4, 4, 0
  021e838  vmaddfp 2, 2, 4, 3
  021e83c  vspltw 2, 2, 0
  021e840  stvewx 2, 6, 1
  021e844  bl 0x4de9c4
  021e848  nop
  021e84c  ori 6, 3, 0
  021e850  ori 3, 28, 0
  021e854  lwz 4, 40(27)
  021e858  addic 7, 1, 192
  021e85c  li 5, 13
  021e860  li 8, 1
  021e864  bl 0x4dd6f0
  021e868  nop
  021e86c  li 3, 0
  021e870  li 9, 20
  021e874  subc 3, 3, 29
  021e878  li 4, 1
  021e87c  cntlzw 3, 3
  021e880  li 5, 0
  021e884  sldi 3, 3, 58
  021e888  li 7, 128
  021e88c  sradi 8, 3, 63
  021e890  li 3, 0
  021e894  li 6, 1
  021e898  subc 10, 3, 9
  021e89c  li 3, 0
  021e8a0  and 8, 8, 10
  021e8a4  addc 26, 9, 8
  021e8a8  bl 0x502ea8
  021e8ac  nop
  021e8b0  ori 4, 3, 0
  021e8b4  li 3, 3
  021e8b8  bl 0x174f80
  021e8bc  nop
  021e8c0  li 3, 60
  021e8c4  bl 0x685c4
  021e8c8  nop
  021e8cc  lis 24, 150
  021e8d0  ori 8, 3, 0
  021e8d4  addic 24, 24, 27392
  021e8d8  lis 3, 28800
  021e8dc  li 7, 0
  021e8e0  ori 25, 3, 32896
  021e8e4  subfic 3, 26, 368
  021e8e8  lwz 4, 4(24)
  021e8ec  li 5, 128
  021e8f0  extsw 26, 3
  021e8f4  addic 4, 4, -144
  021e8f8  std 25, 112(1)
  021e8fc  ori 3, 26, 0
  021e900  std 8, 120(1)
  021e904  li 6, 128
  021e908  extsw 4, 4
  021e90c  li 8, 0
  021e910  li 9, 128
  021e914  li 10, 128
  021e918  bl 0x6a5c4
  021e91c  nop
  021e920  ori 3, 28, 0
  021e924  lwz 4, 40(27)
  021e928  li 5, 12
  021e92c  bl 0x4d82b8
  021e930  nop
  021e934  li 3, 61
  021e938  bl 0x685c4
  021e93c  nop
  021e940  ori 9, 3, 0
  021e944  lwz 4, 4(24)
  021e948  std 25, 112(1)
  021e94c  ori 3, 26, 0
  021e950  addic 4, 4, -144
  021e954  li 5, 128
  021e958  std 9, 120(1)
  021e95c  li 6, 128
  021e960  li 7, 0
  021e964  li 8, 0
  021e968  extsw 4, 4
  021e96c  li 9, 128
  021e970  li 10, 128
  021e974  bl 0x6a5c4
  021e978  nop
  021e97c  li 3, 0
  021e980  li 4, 2
  021e984  li 5, 0
  021e988  li 6, 1
  021e98c  li 7, 128
  021e990  bl 0x502ea8
  021e994  nop
  021e998  ori 4, 3, 0
  021e99c  li 3, 3
  021e9a0  bl 0x174f80
  021e9a4  nop
  021e9a8  li 3, 62
  021e9ac  bl 0x685c4
  021e9b0  nop
  021e9b4  lwz 3, 264(30)
  021e9b8  lis 4, 165
  021e9bc  extsh 3, 3
  021e9c0  addic 4, 4, -28284
  021e9c4  sldi 3, 3, 2
  021e9c8  lwzx 28, 4, 3
  021e9cc  cmpwi 28, 0
  021e9d0  bt 2, 0x21ea6c
  021e9d4  lis 22, 149
  021e9d8  lis 21, 149
  021e9dc  addic 22, 22, 5392
  021e9e0  addic 21, 21, 5376
  021e9e4  lis 3, 164
  021e9e8  lhz 4, 0(28)
  021e9ec  rlwinm 4, 4, 8, 9, 23
  021e9f0  lwz 3, -28512(3)
  021e9f4  addc 27, 3, 4
  021e9f8  clrldi 27, 27, 32
  021e9fc  lbz 3, 32(27)
  021ea00  cmpwi 3, 128
  021ea04  bf 0, 0x21ea58
  021ea08  ori 3, 27, 0
  021ea0c  addic 4, 1, 196
  021ea10  bl 0x232a80
  021ea14  nop
  021ea18  ori 27, 3, 0
  021ea1c  ori 26, 23, 0
  021ea20  cmpwi 27, 0
  021ea24  bf 1, 0x21ea58
  021ea28  ori 25, 1, 0
  021ea2c  lis 7, 30080
  021ea30  ori 3, 22, 0
  021ea34  lwz 5, 196(25)
  021ea38  ori 4, 21, 0
  021ea3c  li 6, 0
  021ea40  ori 7, 7, 32896
  021ea44  bl 0x21ddf0
  021ea48  addic 26, 26, 1
  021ea4c  addic 25, 25, 4
  021ea50  cmpw 26, 27
  021ea54  bt 0, 0x21ea2c
  021ea58  lhz 3, 0(28)
  021ea5c  addic 28, 28, 2
  021ea60  extsh 3, 3
  021ea64  cmpwi 3, 0
  021ea68  bf 0, 0x21e9e4
  021ea6c  li 3, 0
  021ea70  lis 26, 151
  021ea74  subc 3, 3, 29
  021ea78  addic 26, 26, -25376
  021ea7c  cntlzw 3, 3
  021ea80  li 4, 0
  021ea84  sldi 3, 3, 58
  021ea88  li 5, 16
  021ea8c  sradi 3, 3, 63
  021ea90  lbz 6, 5623(26)
  021ea94  subc 4, 4, 5
  021ea98  cmpwi 6, 0
  021ea9c  and 3, 3, 4
  021eaa0  li 28, 64
  021eaa4  addc 27, 5, 3
  021eaa8  ori 29, 23, 0
  021eaac  addic 27, 27, 24
  021eab0  bf 1, 0x21eb9c
  021eab4  lis 3, 34
  021eab8  lis 25, 119
  021eabc  addi 3, 3, -6392
  021eac0  addic 25, 25, -13028
  021eac4  lfs 31, 4(3)
  021eac8  extsw 3, 28
  021eacc  extsw 4, 27
  021ead0  std 3, 232(1)
  021ead4  lbz 3, 5622(26)
  021ead8  lfd 1, 232(1)
  021eadc  std 4, 232(1)
  021eae0  cmpw 29, 3
  021eae4  fcfid 2, 1
  021eae8  frsp 2, 2
  021eaec  lfd 1, 232(1)
  021eaf0  fcfid 1, 1
  021eaf4  frsp 1, 1
  021eaf8  bf 0, 0x21eb20
  021eafc  lis 7, 255
  021eb00  fmr 3, 31
  021eb04  lis 8, 20480
  021eb08  ori 3, 25, 0
  021eb0c  li 4, 25
  021eb10  ori 7, 7, 65523
  021eb14  ori 8, 8, 36608
  021eb18  bl 0x21ccd8
  021eb1c  b 0x21eb40
  021eb20  lis 7, 255
  021eb24  fmr 3, 31
  021eb28  lis 8, 8192
  021eb2c  ori 3, 25, 0
  021eb30  li 4, 25
  021eb34  ori 7, 7, 65523
  021eb38  ori 8, 8, 20224
  021eb3c  bl 0x21ccd8
  021eb40  lbz 5, 5623(26)
  021eb44  addic 3, 27, 30
  021eb48  srawi 6, 5, 1
  021eb4c  li 4, 46
  021eb50  addze 6, 6
  021eb54  subc 3, 3, 27
  021eb58  subc 7, 6, 29
  021eb5c  subc 6, 6, 29
  021eb60  cntlzw 7, 7
  021eb64  cntlzw 6, 6
  021eb68  sldi 7, 7, 58
  021eb6c  sldi 6, 6, 58
  021eb70  sradi 7, 7, 63
  021eb74  subc 4, 4, 28
  021eb78  and 3, 7, 3
  021eb7c  sradi 6, 6, 63
  021eb80  addc 27, 27, 3
  021eb84  and 3, 6, 4
  021eb88  addic 29, 29, 1
  021eb8c  addc 28, 28, 3
  021eb90  cmpw 29, 5
  021eb94  addic 28, 28, 18
  021eb98  bt 0, 0x21eac8
  021eb9c  lwz 29, 224(30)
  021eba0  li 3, 17
  021eba4  lwz 28, 228(30)
  021eba8  bl 0x685c4
  021ebac  nop
  021ebb0  extsw 4, 29
  021ebb4  lis 5, 34
  021ebb8  lis 6, -224
  021ebbc  addi 29, 5, -6392
  021ebc0  std 4, 232(1)
  021ebc4  lis 5, 255
  021ebc8  std 23, 128(1)
  021ebcc  extsw 4, 28
  021ebd0  std 23, 136(1)
  021ebd4  ori 28, 5, 65523
  021ebd8  ori 27, 6, 65312
  021ebdc  ori 10, 3, 0
  021ebe0  std 28, 112(1)
  021ebe4  std 27, 120(1)
  021ebe8  lfd 1, 232(1)
  021ebec  std 4, 232(1)
  021ebf0  fcfid 1, 1
  021ebf4  lfs 29, 8(29)
  021ebf8  li 8, 63
  021ebfc  lfs 31, 12(29)
  021ec00  li 9, 63
  021ec04  lfs 30, 4(29)
  021ec08  fmr 3, 29
  021ec0c  std 23, 160(1)
  021ec10  fmr 4, 29
  021ec14  fmr 5, 31
  021ec18  fmr 6, 30
  021ec1c  fmr 7, 30
  021ec20  frsp 28, 1
  021ec24  lfd 1, 232(1)
  021ec28  fcfid 2, 1
  021ec2c  fmr 1, 28
  021ec30  frsp 27, 2
  021ec34  fmr 2, 27
  021ec38  bl 0x6e740
  021ec3c  nop
  021ec40  li 3, 18
  021ec44  bl 0x685c4
  021ec48  nop
  021ec4c  std 28, 112(1)
  021ec50  fmr 3, 29
  021ec54  std 27, 120(1)
  021ec58  ori 10, 3, 0
  021ec5c  std 23, 128(1)
  021ec60  fmr 1, 28
  021ec64  std 23, 136(1)
  021ec68  fmr 2, 27
  021ec6c  std 23, 160(1)
  021ec70  li 8, 63
  021ec74  li 9, 63
  021ec78  fmr 4, 29
  021ec7c  fmr 5, 31
  021ec80  fmr 6, 30
  021ec84  fmr 7, 30
  021ec88  bl 0x6e740
  021ec8c  nop
  021ec90  li 3, 8
  021ec94  bl 0x685c4
  021ec98  nop
  021ec9c  lfs 3, 16(29)
  021eca0  ori 10, 3, 0
  021eca4  std 28, 112(1)
  021eca8  li 8, 31
  021ecac  std 27, 120(1)
  021ecb0  fmr 1, 28
  021ecb4  std 23, 128(1)
  021ecb8  li 9, 31
  021ecbc  std 23, 136(1)
  021ecc0  fmr 2, 27
  021ecc4  std 23, 160(1)
  021ecc8  fmr 5, 31
  021eccc  fmr 6, 30
  021ecd0  fmr 7, 30
  021ecd4  fmr 4, 3
  021ecd8  bl 0x6e740
  021ecdc  nop
  021ece0  ori 3, 31, 0
  021ece4  ori 4, 30, 0
  021ece8  bl 0x21e5f8
  021ecec  lwz 29, 136(30)
  021ecf0  cmpwi 29, 0
  021ecf4  bt 2, 0x21ef00
  021ecf8  addic 3, 1, 176
  021ecfc  addic 4, 29, 16
  021ed00  bl 0x65490
  021ed04  nop
  021ed08  lwz 3, 16(24)
  021ed0c  extsw 3, 3
  021ed10  std 3, 232(1)
  021ed14  lis 3, 34
  021ed18  lfs 1, 176(1)
  021ed1c  addi 3, 3, -6392
  021ed20  lfs 29, 20(3)
  021ed24  lfd 2, 232(1)
  021ed28  fcfid 2, 2
  021ed2c  frsp 2, 2
  021ed30  fsubs 1, 1, 2
  021ed34  fmuls 1, 1, 29
  021ed38  bl 0x502758
  021ed3c  nop
  021ed40  lwz 4, 20(24)
  021ed44  ori 29, 3, 0
  021ed48  extsw 4, 4
  021ed4c  std 4, 232(1)
  021ed50  lfs 1, 180(1)
  021ed54  lfd 2, 232(1)
  021ed58  fcfid 2, 2
  021ed5c  frsp 2, 2
  021ed60  fsubs 1, 1, 2
  021ed64  fmuls 1, 1, 29
  021ed68  bl 0x502758
  021ed6c  nop
  021ed70  lis 4, 119
  021ed74  ori 24, 3, 0
  021ed78  lwz 4, -14344(4)
  021ed7c  lwz 3, 140(30)
  021ed80  cmpw 3, 4
  021ed84  bf 1, 0x21ee60
  021ed88  subc 3, 3, 4
  021ed8c  extsw 3, 3
  021ed90  bl 0x502730
  021ed94  nop
  021ed98  fmr 31, 1
  021ed9c  lis 3, 119
  021eda0  lwz 3, -14340(3)
  021eda4  extsw 3, 3
  021eda8  bl 0x502730
  021edac  nop
  021edb0  fdivs 1, 31, 1
  021edb4  lis 3, 34
  021edb8  addi 28, 3, -6392
  021edbc  lfs 2, 28(28)
  021edc0  lfs 3, 32(28)
  021edc4  lfs 4, 24(28)
  021edc8  lfs 5, 36(28)
  021edcc  fsubs 6, 2, 1
  021edd0  fmadds 31, 1, 4, 2
  021edd4  fmuls 1, 6, 3
  021edd8  fsub 3, 2, 1
  021eddc  fsel 1, 3, 1, 2
  021ede0  fmuls 1, 1, 5
  021ede4  bl 0x502758
  021ede8  nop
  021edec  clrlwi 27, 3, 24
  021edf0  ori 3, 29, 0
  021edf4  bl 0x502730
  021edf8  nop
  021edfc  ori 3, 24, 0
  021ee00  fmr 29, 1
  021ee04  bl 0x502730
  021ee08  nop
  021ee0c  lis 3, 161
  021ee10  fmr 28, 1
  021ee14  lwz 3, 1808(3)
  021ee18  extsw 3, 3
  021ee1c  bl 0x502730
  021ee20  nop
  021ee24  lfs 2, 40(28)
  021ee28  fmuls 1, 1, 2
  021ee2c  bl 0x10de78
  021ee30  nop
  021ee34  fmr 4, 1
  021ee38  li 7, 0
  021ee3c  fmr 1, 29
  021ee40  li 8, 255
  021ee44  fmr 2, 28
  021ee48  li 9, 0
  021ee4c  fmr 3, 31
  021ee50  ori 10, 27, 0
  021ee54  bl 0x21d328
  021ee58  stw 23, 236(30)
  021ee5c  b 0x21ef00
  021ee60  ori 4, 3, 0
  021ee64  lis 3, 34
  021ee68  addi 28, 3, -6392
  021ee6c  lis 3, 114
  021ee70  li 5, 0
  021ee74  li 6, 0
  021ee78  lfs 1, 44(28)
  021ee7c  lfs 2, -3056(3)
  021ee80  fmuls 1, 2, 1
  021ee84  li 3, 255
  021ee88  subc 7, 3, 6
  021ee8c  ori 3, 29, 0
  021ee90  fctiwz 1, 1
  021ee94  stfd 1, 232(1)
  021ee98  lwz 8, 236(1)
  021ee9c  divw 4, 4, 8
  021eea0  clrlwi 4, 4, 31
  021eea4  subc 4, 5, 4
  021eea8  cntlzw 4, 4
  021eeac  sldi 4, 4, 58
  021eeb0  sradi 4, 4, 63
  021eeb4  and 4, 4, 7
  021eeb8  addc 29, 6, 4
  021eebc  bl 0x502730
  021eec0  nop
  021eec4  fmr 29, 1
  021eec8  ori 3, 24, 0
  021eecc  bl 0x502730
  021eed0  nop
  021eed4  lfs 3, 28(28)
  021eed8  fmr 2, 1
  021eedc  fmr 1, 29
  021eee0  li 7, 255
  021eee4  ori 8, 29, 0
  021eee8  fmr 4, 31
  021eeec  li 9, 0
  021eef0  li 10, 96
  021eef4  bl 0x21d328
  021eef8  lwz 3, 136(30)
  021eefc  stw 3, 236(30)
  021ef00  lis 3, 34
  021ef04  lfs 1, 5632(26)
  021ef08  addi 3, 3, -6392
  021ef0c  lfs 2, 48(3)
  021ef10  lfs 3, 5628(26)
  021ef14  fmuls 1, 1, 2
  021ef18  fcmpu 0, 3, 1
  021ef1c  cror 6, 1, 2
  021ef20  bt 6, 0x21efa0
  021ef24  lis 3, 161
  021ef28  addic 3, 3, 12
  021ef2c  lhz 3, 704(3)
  021ef30  cmpwi 3, 0
  021ef34  cmpwi 1, 3, 2
  021ef38  bf 2, 0x21ef50
  021ef3c  li 3, 11007
  021ef40  li 4, 88
  021ef44  bl 0x7b310
  021ef48  nop
  021ef4c  b 0x21f070
  021ef50  bf 4, 0x21f070
  021ef54  lis 3, 34
  021ef58  lwz 4, 284(30)
  021ef5c  lis 5, 114
  021ef60  addi 3, 3, -6392
  021ef64  addic 4, 4, 1
  021ef68  stw 4, 284(30)
  021ef6c  lfs 1, 52(3)
  021ef70  lfs 2, -3056(5)
  021ef74  fmuls 1, 2, 1
  021ef78  fctiwz 1, 1
  021ef7c  stfd 1, 232(1)
  021ef80  lwz 3, 236(1)
  021ef84  cmpw 4, 3
  021ef88  bf 1, 0x21f070
  021ef8c  li 3, 11007
  021ef90  li 4, 88
  021ef94  bl 0x7b310
  021ef98  nop
  021ef9c  b 0x21f070
  021efa0  lwz 3, 284(30)
  021efa4  cmpwi 3, 0
  021efa8  bt 2, 0x21f070
  021efac  lis 4, 161
  021efb0  lis 3, 0
  021efb4  addic 4, 4, 12
  021efb8  ori 5, 3, 65535
  021efbc  lhz 3, 704(4)
  021efc0  cmpw 3, 5
  021efc4  bf 0, 0x21efd0
  021efc8  addic 3, 3, 1
  021efcc  sth 3, 704(4)
  021efd0  lis 3, 161
  021efd4  lis 5, 6990
  021efd8  lwz 3, -2344(3)
  021efdc  extsw 3, 3
  021efe0  ori 5, 5, 33205
  021efe4  std 3, 232(1)
  021efe8  lis 3, 114
  021efec  lfs 1, -3056(3)
  021eff0  lhz 6, 706(4)
  021eff4  lfd 2, 232(1)
  021eff8  fcfid 2, 2
  021effc  frsp 2, 2
  021f000  fadds 2, 2, 30
  021f004  fmuls 1, 1, 2
  021f008  fctiwz 1, 1
  021f00c  stfd 1, 232(1)
  021f010  lwz 3, 236(1)
  021f014  mulhw 5, 5, 3
  021f018  srawi 5, 5, 6
  021f01c  srwi 7, 5, 31
  021f020  addc 5, 5, 7
  021f024  cmpw 5, 6
  021f028  bf 1, 0x21f048
  021f02c  lis 5, 6990
  021f030  ori 5, 5, 33205
  021f034  mulhw 3, 5, 3
  021f038  srawi 3, 3, 6
  021f03c  srwi 5, 3, 31
  021f040  addc 3, 3, 5
  021f044  sth 3, 706(4)
  021f048  lis 3, 151
  021f04c  lwz 7, 708(4)
  021f050  li 5, 1
  021f054  lis 6, -32768
  021f058  lwz 3, -25488(3)
  021f05c  slw 3, 5, 3
  021f060  or 3, 7, 3
  021f064  or 3, 3, 6
  021f068  stw 3, 708(4)
  021f06c  stw 23, 284(30)
  021f070  addic 3, 30, 288
  021f074  bl 0x4fff60
  021f078  nop
  021f07c  lbz 3, 5622(26)
  021f080  cmpwi 3, 5
  021f084  bf 0, 0x21f09c
  021f088  lis 4, 161
  021f08c  addic 4, 4, 12
  021f090  lhz 4, 696(4)
  021f094  cmpwi 4, 0
  021f098  bt 2, 0x21f0c4
  021f09c  cmpwi 3, 0
  021f0a0  bf 2, 0x21f110
  021f0a4  lis 3, 161
  021f0a8  addic 3, 3, 12
  021f0ac  lhz 3, 696(3)
  021f0b0  cmpwi 3, 2
  021f0b4  bf 0, 0x21f110
  021f0b8  lwz 3, 288(30)
  021f0bc  cmpwi 3, 0
  021f0c0  bf 2, 0x21f110
  021f0c4  li 3, 11006
  021f0c8  li 4, 87
  021f0cc  bl 0x7b310
  021f0d0  nop
  021f0d4  lis 3, 34
  021f0d8  li 4, 56
  021f0dc  vspltisw 2, -1
  021f0e0  addi 3, 3, -6392
  021f0e4  lis 5, 114
  021f0e8  li 6, -3056
  021f0ec  vslw 2, 2, 2
  021f0f0  <unknown>
  021f0f4  li 3, 288
  021f0f8  vspltw 3, 3, 0
  021f0fc  <unknown>
  021f100  vmaddfp 2, 4, 3, 2
  021f104  vctsxs 2, 2, 0
  021f108  vspltw 2, 2, 0
  021f10c  stvewx 2, 3, 30
  021f110  lis 3, 161
  021f114  addic 3, 3, 12
  021f118  lhz 3, 688(3)
  021f11c  cmpwi 3, 0
  021f120  bf 2, 0x21f16c
  021f124  lis 3, 34
  021f128  lwz 4, 296(30)
  021f12c  lis 6, 114
  021f130  addi 3, 3, -6392
  021f134  addic 5, 4, 1
  021f138  stw 5, 296(30)
  021f13c  lfs 1, 60(3)
  021f140  lfs 2, -3056(6)
  021f144  fmuls 1, 2, 1
  021f148  fctiwz 1, 1
  021f14c  stfd 1, 232(1)
  021f150  lwz 3, 236(1)
  021f154  cmpw 4, 3
  021f158  bf 1, 0x21f16c
  021f15c  li 3, 11005
  021f160  li 4, 86
  021f164  bl 0x7b310
  021f168  nop
  021f16c  lbz 3, 32(31)
  021f170  cmpwi 3, 8
  021f174  bf 2, 0x21f1b0
  021f178  lis 3, -32768
  021f17c  ori 4, 3, 20608
  021f180  li 3, 21054
  021f184  clrldi 4, 4, 32
  021f188  ori 31, 4, 0
  021f18c  bl 0x7b740
  021f190  nop
  021f194  ori 6, 3, 0
  021f198  li 3, 256
  021f19c  li 4, 200
  021f1a0  ori 5, 31, 0
  021f1a4  li 7, 17
  021f1a8  bl 0x70998
  021f1ac  nop
  021f1b0  lfs 1, 5628(26)
  021f1b4  lis 3, 34
  021f1b8  lfs 2, 240(30)
  021f1bc  addi 3, 3, -6392
  021f1c0  fsubs 1, 1, 2
  021f1c4  lfs 3, 64(3)
  021f1c8  lfs 4, 28(3)
  021f1cc  fmuls 1, 1, 3
  021f1d0  fabs 3, 1
  021f1d4  fdivs 5, 1, 3
  021f1d8  fsub 3, 4, 3
  021f1dc  fsel 1, 3, 1, 5
  021f1e0  fadds 1, 2, 1
  021f1e4  stfs 1, 240(30)
  021f1e8  lfs 2, 68(3)
  021f1ec  lfs 3, 5632(26)
  021f1f0  fmuls 1, 1, 2
  021f1f4  fdivs 1, 1, 3
  021f1f8  bl 0x502758
  021f1fc  nop
  021f200  addic 3, 3, 2
  021f204  li 4, 253
  021f208  extsw 6, 3
  021f20c  li 5, 253
  021f210  subc 4, 4, 6
  021f214  subc 5, 5, 3
  021f218  sradi 4, 4, 63
  021f21c  and 4, 4, 5
  021f220  li 5, 2
  021f224  addc 3, 3, 4
  021f228  li 4, 2
  021f22c  extsw 6, 3
  021f230  subc 5, 5, 3
  021f234  subc 4, 6, 4
  021f238  sradi 4, 4, 63
  021f23c  and 4, 4, 5
  021f240  addc 3, 3, 4
  021f244  stw 3, 244(30)
  021f248  ld 0, 400(1)
  021f24c  mtlr 0
  021f250  lfd 27, 344(1)
  021f254  lfd 28, 352(1)
  021f258  lfd 29, 360(1)
  021f25c  lfd 30, 368(1)
  021f260  lfd 31, 376(1)
  021f264  ld 21, 256(1)
  021f268  ld 22, 264(1)
  021f26c  ld 23, 272(1)
  021f270  ld 24, 280(1)
  021f274  ld 25, 288(1)
  021f278  ld 26, 296(1)
  021f27c  ld 27, 304(1)
  021f280  ld 28, 312(1)
  021f284  ld 29, 320(1)
  021f288  ld 30, 328(1)
  021f28c  ld 31, 336(1)
  021f290  addi 1, 1, 384
  021f294  blr

M1242_0021f2b0:   # 0x21f2b0, 0x2fc bytes
  021f2b0  stdu 1, -256(1)
  021f2b4  mflr 0
  021f2b8  std 0, 272(1)
  021f2bc  stfd 29, 232(1)
  021f2c0  stfd 30, 240(1)
  021f2c4  stfd 31, 248(1)
  021f2c8  std 31, 224(1)
  021f2cc  ori 31, 4, 0
  021f2d0  lis 4, 119
  021f2d4  fmr 3, 2
  021f2d8  lis 5, 119
  021f2dc  std 30, 216(1)
  021f2e0  fmr 2, 1
  021f2e4  ori 30, 3, 0
  021f2e8  addic 3, 1, 112
  021f2ec  lfs 1, -14600(4)
  021f2f0  lfs 4, -14548(5)
  021f2f4  std 29, 208(1)
  021f2f8  std 28, 200(1)
  021f2fc  fmuls 1, 1, 4
  021f300  bl 0xfe610
  021f304  nop
  021f308  lfs 1, 112(1)
  021f30c  lfs 2, 0(31)
  021f310  addic 3, 31, 128
  021f314  lfs 3, 116(1)
  021f318  fadds 1, 1, 2
  021f31c  lfs 2, 4(31)
  021f320  lfs 4, 120(1)
  021f324  fadds 2, 3, 2
  021f328  lfs 3, 8(31)
  021f32c  fadds 3, 4, 3
  021f330  stfs 1, 112(1)
  021f334  stfs 2, 116(1)
  021f338  stfs 3, 120(1)
  021f33c  bl 0x4fff60
  021f340  nop
  021f344  cmpwi 3, 0
  021f348  bt 2, 0x21f460
  021f34c  lis 3, 150
  021f350  li 4, 132
  021f354  addic 3, 3, 19008
  021f358  lwz 3, 176(3)
  021f35c  and 3, 3, 4
  021f360  cmpwi 3, 0
  021f364  bt 2, 0x21f460
  021f368  lfs 1, 116(1)
  021f36c  lfs 2, 112(1)
  021f370  fmuls 3, 1, 1
  021f374  lfs 4, 120(1)
  021f378  lis 3, 34
  021f37c  addi 29, 3, -3432
  021f380  fmadds 3, 2, 2, 3
  021f384  lfs 5, 4(29)
  021f388  lfs 6, 0(29)
  021f38c  lbz 4, 97(31)
  021f390  addic 28, 1, 128
  021f394  fmadds 3, 4, 4, 3
  021f398  clrlwi 4, 4, 31
  021f39c  ori 3, 30, 0
  021f3a0  ori 5, 28, 0
  021f3a4  addic 4, 4, 3
  021f3a8  fsqrts 3, 3
  021f3ac  fdivs 5, 5, 3
  021f3b0  fsub 7, 6, 3
  021f3b4  fsub 8, 6, 3
  021f3b8  fsub 9, 6, 3
  021f3bc  fsub 10, 3, 6
  021f3c0  fsub 11, 3, 6
  021f3c4  fsub 3, 3, 6
  021f3c8  fmuls 4, 4, 5
  021f3cc  fmuls 1, 1, 5
  021f3d0  fmuls 2, 2, 5
  021f3d4  fsel 5, 7, 6, 4
  021f3d8  fsel 7, 8, 6, 1
  021f3dc  fsel 6, 9, 6, 2
  021f3e0  fsel 31, 10, 5, 4
  021f3e4  fsel 30, 11, 7, 1
  021f3e8  fsel 29, 3, 6, 2
  021f3ec  bl 0xf1114
  021f3f0  nop
  021f3f4  lfs 1, 128(1)
  021f3f8  addic 4, 1, 112
  021f3fc  lfs 2, 132(1)
  021f400  ori 3, 30, 0
  021f404  fadds 1, 1, 29
  021f408  lfs 3, 136(1)
  021f40c  fadds 2, 2, 30
  021f410  ori 5, 28, 0
  021f414  fadds 3, 3, 31
  021f418  stfs 1, 128(1)
  021f41c  stfs 2, 132(1)
  021f420  stfs 3, 136(1)
  021f424  lfs 1, 8(29)
  021f428  lfs 2, 12(29)
  021f42c  bl 0x184670
  021f430  nop
  021f434  lbz 4, 97(31)
  021f438  lis 6, 119
  021f43c  li 3, 3
  021f440  xori 7, 4, 1
  021f444  li 4, 0
  021f448  ori 5, 30, 0
  021f44c  lwz 6, -14596(6)
  021f450  stb 7, 97(31)
  021f454  stw 6, 128(31)
  021f458  bl 0x15d12c
  021f45c  nop
  021f460  lfs 1, 116(1)
  021f464  lfs 2, 112(1)
  021f468  fmuls 3, 1, 1
  021f46c  lfs 4, 120(1)
  021f470  lis 3, 34
  021f474  addi 29, 3, -3432
  021f478  fmadds 3, 2, 2, 3
  021f47c  lfs 5, 16(29)
  021f480  lfs 6, 0(29)
  021f484  lfs 7, 16(30)
  021f488  lfs 8, 20(30)
  021f48c  fmadds 3, 4, 4, 3
  021f490  lfs 9, 24(30)
  021f494  lfs 10, 124(1)
  021f498  addic 3, 1, 160
  021f49c  stfs 10, 156(1)
  021f4a0  addic 4, 1, 144
  021f4a4  fsqrts 3, 3
  021f4a8  fdivs 5, 5, 3
  021f4ac  fsub 10, 6, 3
  021f4b0  fsub 11, 6, 3
  021f4b4  fsub 12, 6, 3
  021f4b8  fsub 13, 3, 6
  021f4bc  fsub 0, 3, 6
  021f4c0  fsub 3, 3, 6
  021f4c4  fmuls 2, 2, 5
  021f4c8  fmuls 1, 1, 5
  021f4cc  fmuls 4, 4, 5
  021f4d0  fsel 5, 10, 6, 2
  021f4d4  fsel 10, 11, 6, 1
  021f4d8  fsel 6, 12, 6, 4
  021f4dc  fsel 2, 13, 5, 2
  021f4e0  fsel 1, 0, 10, 1
  021f4e4  fsel 3, 3, 6, 4
  021f4e8  fadds 4, 2, 7
  021f4ec  fadds 5, 1, 8
  021f4f0  fadds 6, 3, 9
  021f4f4  stfs 2, 112(1)
  021f4f8  stfs 1, 116(1)
  021f4fc  stfs 3, 120(1)
  021f500  stfs 4, 144(1)
  021f504  stfs 5, 148(1)
  021f508  stfs 6, 152(1)
  021f50c  bl 0x65490
  021f510  nop
  021f514  lis 3, 150
  021f518  addic 30, 3, 27392
  021f51c  lwz 3, 16(30)
  021f520  extsw 3, 3
  021f524  std 3, 176(1)
  021f528  lfs 1, 160(1)
  021f52c  lfs 31, 20(29)
  021f530  lfd 2, 176(1)
  021f534  fcfid 2, 2
  021f538  frsp 2, 2
  021f53c  fsubs 1, 1, 2
  021f540  fmuls 1, 1, 31
  021f544  bl 0x502758
  021f548  nop
  021f54c  stw 3, 224(31)
  021f550  lwz 3, 20(30)
  021f554  extsw 3, 3
  021f558  std 3, 176(1)
  021f55c  lfs 1, 164(1)
  021f560  lfd 2, 176(1)
  021f564  fcfid 2, 2
  021f568  frsp 2, 2
  021f56c  fsubs 1, 1, 2
  021f570  fmuls 1, 1, 31
  021f574  bl 0x502758
  021f578  nop
  021f57c  stw 3, 228(31)
  021f580  ld 0, 272(1)
  021f584  mtlr 0
  021f588  lfd 29, 232(1)
  021f58c  lfd 30, 240(1)
  021f590  lfd 31, 248(1)
  021f594  ld 28, 200(1)
  021f598  ld 29, 208(1)
  021f59c  ld 30, 216(1)
  021f5a0  ld 31, 224(1)
  021f5a4  addi 1, 1, 256
  021f5a8  blr

M1242_0021f5b8:   # 0x21f5b8, 0x1e0 bytes
  021f5b8  stdu 1, -176(1)
  021f5bc  mflr 0
  021f5c0  std 0, 192(1)
  021f5c4  std 31, 168(1)
  021f5c8  std 30, 160(1)
  021f5cc  ori 31, 4, 0
  021f5d0  ori 30, 3, 0
  021f5d4  std 29, 152(1)
  021f5d8  addic 3, 31, 132
  021f5dc  bl 0x4fff60
  021f5e0  nop
  021f5e4  cmpwi 3, 0
  021f5e8  bt 2, 0x21f77c
  021f5ec  lis 3, 150
  021f5f0  li 4, 40
  021f5f4  addic 3, 3, 19008
  021f5f8  lwz 3, 176(3)
  021f5fc  and 3, 3, 4
  021f600  cmpwi 3, 0
  021f604  bt 2, 0x21f77c
  021f608  lis 29, 151
  021f60c  addic 29, 29, -25376
  021f610  lbz 3, 5622(29)
  021f614  cmpwi 3, 0
  021f618  bf 1, 0x21f77c
  021f61c  lhz 4, 106(31)
  021f620  addic 5, 1, 112
  021f624  ori 3, 30, 0
  021f628  addic 4, 4, 1
  021f62c  clrlwi 4, 4, 30
  021f630  extsh 6, 4
  021f634  sth 4, 106(31)
  021f638  addic 4, 6, 7
  021f63c  bl 0xf1114
  021f640  nop
  021f644  lfs 1, 4(31)
  021f648  lfs 2, 0(31)
  021f64c  fmuls 3, 1, 1
  021f650  lfs 4, 8(31)
  021f654  lis 3, 34
  021f658  addi 3, 3, -2644
  021f65c  fmadds 3, 2, 2, 3
  021f660  lfs 5, 4(3)
  021f664  lfs 6, 0(3)
  021f668  li 4, 0
  021f66c  lfs 7, 112(1)
  021f670  lfs 8, 116(1)
  021f674  fmadds 3, 4, 4, 3
  021f678  lfs 9, 120(1)
  021f67c  lwz 3, 136(31)
  021f680  cmpwi 3, 0
  021f684  fsqrts 3, 3
  021f688  fdivs 5, 5, 3
  021f68c  fsub 10, 6, 3
  021f690  fsub 11, 6, 3
  021f694  fsub 12, 6, 3
  021f698  fsub 13, 3, 6
  021f69c  fsub 0, 3, 6
  021f6a0  fsub 3, 3, 6
  021f6a4  fmuls 4, 4, 5
  021f6a8  fmuls 1, 1, 5
  021f6ac  fmuls 2, 2, 5
  021f6b0  fsel 5, 10, 6, 4
  021f6b4  fsel 10, 11, 6, 1
  021f6b8  fsel 6, 12, 6, 2
  021f6bc  fsel 4, 13, 5, 4
  021f6c0  fsel 1, 0, 10, 1
  021f6c4  fsel 2, 3, 6, 2
  021f6c8  fadds 3, 9, 4
  021f6cc  fadds 1, 8, 1
  021f6d0  fadds 2, 7, 2
  021f6d4  stfs 3, 120(1)
  021f6d8  stfs 1, 116(1)
  021f6dc  stfs 2, 112(1)
  021f6e0  bt 2, 0x21f6f4
  021f6e4  lwz 5, 140(31)
  021f6e8  cmpwi 5, 500
  021f6ec  bt 1, 0x21f6f4
  021f6f0  ori 4, 3, 0
  021f6f4  lis 3, 34
  021f6f8  ori 5, 4, 0
  021f6fc  addi 3, 3, -2644
  021f700  lis 4, 114
  021f704  lis 6, 119
  021f708  lis 7, 119
  021f70c  lfs 1, 8(3)
  021f710  lfs 2, -3056(4)
  021f714  lfs 3, -14592(6)
  021f718  ori 3, 30, 0
  021f71c  fmuls 2, 2, 1
  021f720  lfs 4, -14548(7)
  021f724  addic 6, 30, 64
  021f728  addic 4, 1, 112
  021f72c  fmuls 1, 3, 4
  021f730  fctiwz 2, 2
  021f734  stfd 2, 128(1)
  021f738  lwz 8, 132(1)
  021f73c  extsw 8, 8
  021f740  bl 0x192330
  021f744  nop
  021f748  cmpwi 3, 0
  021f74c  bt 2, 0x21f77c
  021f750  li 3, 2
  021f754  li 4, 0
  021f758  ori 5, 30, 0
  021f75c  bl 0x15d12c
  021f760  nop
  021f764  lbz 3, 5622(29)
  021f768  lis 4, 119
  021f76c  addic 3, 3, -1
  021f770  lwz 4, -14588(4)
  021f774  stb 3, 5622(29)
  021f778  stw 4, 132(31)
  021f77c  ld 0, 192(1)
  021f780  mtlr 0
  021f784  ld 29, 152(1)
  021f788  ld 30, 160(1)
  021f78c  ld 31, 168(1)
  021f790  addi 1, 1, 176
  021f794  blr

M1242_0021f7a8:   # 0x21f7a8, 0x98 bytes
  021f7a8  lis 4, 119
  021f7ac  lfs 3, 20(3)
  021f7b0  lfs 4, 16(3)
  021f7b4  addic 5, 4, -11904
  021f7b8  lfs 5, 4(5)
  021f7bc  lfs 6, -11904(4)
  021f7c0  fsubs 3, 3, 5
  021f7c4  fsubs 4, 4, 6
  021f7c8  lfs 5, 24(3)
  021f7cc  lfs 6, 8(5)
  021f7d0  fsubs 5, 5, 6
  021f7d4  lis 3, 34
  021f7d8  fmuls 3, 3, 3
  021f7dc  addi 3, 3, -2152
  021f7e0  fmadds 3, 4, 4, 3
  021f7e4  fmr 4, 1
  021f7e8  fmadds 5, 5, 5, 3
  021f7ec  lfs 3, 0(3)
  021f7f0  fsqrts 5, 5
  021f7f4  fcmpu 0, 5, 3
  021f7f8  cror 6, 0, 2
  021f7fc  bt 6, 0x21f838
  021f800  fsubs 3, 5, 3
  021f804  lis 3, 34
  021f808  addi 3, 3, -2152
  021f80c  lfs 4, 4(3)
  021f810  lfs 5, 8(3)
  021f814  lfs 6, 12(3)
  021f818  fmuls 3, 3, 4
  021f81c  fsub 4, 3, 5
  021f820  fsel 3, 4, 3, 5
  021f824  fsub 4, 6, 3
  021f828  fsel 3, 4, 3, 6
  021f82c  fsubs 4, 6, 3
  021f830  fmuls 2, 3, 2
  021f834  fmadds 4, 4, 1, 2
  021f838  fmr 1, 4
  021f83c  blr

M1242_0021f870:   # 0x21f870, 0x6c0 bytes
  021f870  stdu 1, -272(1)
  021f874  mflr 0
  021f878  std 0, 288(1)
  021f87c  stfd 29, 248(1)
  021f880  stfd 30, 256(1)
  021f884  stfd 31, 264(1)
  021f888  addi 0, 1, 160
  021f88c  stvx 29, 0, 0
  021f890  addic 0, 0, 16
  021f894  stvx 30, 0, 0
  021f898  addic 0, 0, 16
  021f89c  stvx 31, 0, 0
  021f8a0  lis 6, 34
  021f8a4  lis 7, 114
  021f8a8  vspltisw 3, -1
  021f8ac  addi 6, 6, -1984
  021f8b0  li 8, -3056
  021f8b4  vslw 3, 3, 3
  021f8b8  lis 11, 165
  021f8bc  lfs 1, 0(6)
  021f8c0  lfs 2, -3056(7)
  021f8c4  <unknown>
  021f8c8  fmuls 1, 2, 1
  021f8cc  vspltw 2, 2, 0
  021f8d0  std 29, 224(1)
  021f8d4  <unknown>
  021f8d8  lwz 29, 120(3)
  021f8dc  li 7, 100
  021f8e0  vmaddfp 2, 4, 2, 3
  021f8e4  addi 8, 7, 16
  021f8e8  lfs 2, 100(29)
  021f8ec  <unknown>
  021f8f0  fctidz 1, 1
  021f8f4  li 7, 16
  021f8f8  <unknown>
  021f8fc  addi 9, 7, 16
  021f900  vor 3, 3, 4
  021f904  li 8, 20
  021f908  vspltisw 4, -1
  021f90c  lfs 3, 16(29)
  021f910  addi 10, 8, 16
  021f914  <unknown>
  021f918  vctsxs 2, 2, 0
  021f91c  lfs 4, 20(29)
  021f920  vslw 4, 4, 4
  021f924  <unknown>
  021f928  fcfid 1, 1
  021f92c  std 30, 232(1)
  021f930  lfs 5, 16(3)
  021f934  vor 5, 5, 6
  021f938  std 31, 240(1)
  021f93c  ori 30, 4, 0
  021f940  ori 31, 5, 0
  021f944  vcfsx 2, 2, 0
  021f948  frsp 1, 1
  021f94c  fmuls 1, 2, 1
  021f950  vmaddfp 30, 3, 2, 4
  021f954  <unknown>
  021f958  <unknown>
  021f95c  lfs 6, 20(3)
  021f960  lwz 9, 260(29)
  021f964  vor 2, 2, 3
  021f968  lwz 10, 7128(11)
  021f96c  slwi 9, 9, 7
  021f970  <unknown>
  021f974  addc 7, 10, 9
  021f978  fmadds 2, 3, 1, 5
  021f97c  li 10, 52
  021f980  fmadds 1, 4, 1, 6
  021f984  clrldi 7, 7, 32
  021f988  <unknown>
  021f98c  li 9, 24
  021f990  vmaddfp 3, 5, 30, 3
  021f994  li 8, 48
  021f998  vmaddfp 2, 2, 30, 4
  021f99c  addi 11, 9, 16
  021f9a0  lfs 3, 48(7)
  021f9a4  lfs 4, 52(7)
  021f9a8  <unknown>
  021f9ac  li 8, 40
  021f9b0  fsubs 2, 2, 3
  021f9b4  fsubs 1, 1, 4
  021f9b8  vsubfp 3, 3, 4
  021f9bc  <unknown>
  021f9c0  <unknown>
  021f9c4  li 10, 56
  021f9c8  vsubfp 2, 2, 4
  021f9cc  <unknown>
  021f9d0  fabs 5, 2
  021f9d4  lfs 3, 0(7)
  021f9d8  fabs 6, 1
  021f9dc  lfs 4, 4(7)
  021f9e0  <unknown>
  021f9e4  li 8, 112
  021f9e8  <unknown>
  021f9ec  li 7, 116
  021f9f0  fmuls 1, 1, 1
  021f9f4  vspltw 3, 3, 0
  021f9f8  fmuls 4, 4, 4
  021f9fc  vspltw 2, 2, 0
  021fa00  fsubs 7, 5, 6
  021fa04  stvewx 3, 8, 1
  021fa08  vaddfp 29, 29, 4
  021fa0c  stvewx 2, 7, 1
  021fa10  lwz 7, 112(1)
  021fa14  lfs 8, 112(1)
  021fa18  <unknown>
  021fa1c  fmadds 29, 2, 2, 1
  021fa20  fmadds 30, 3, 3, 4
  021fa24  vor 2, 5, 6
  021fa28  stfs 7, 120(1)
  021fa2c  lfs 31, 4(6)
  021fa30  lwz 3, 116(1)
  021fa34  lis 6, 115
  021fa38  lfs 1, 116(1)
  021fa3c  fabs 7, 8
  021fa40  lwz 4, 120(1)
  021fa44  rlwinm 3, 3, 3, 29, 29
  021fa48  lfs 8, 120(1)
  021fa4c  addic 6, 6, 22784
  021fa50  rlwimi 3, 4, 2, 30, 30
  021fa54  fabs 4, 1
  021fa58  fsub 3, 8, 31
  021fa5c  ori 4, 6, 0
  021fa60  rlwimi 3, 7, 4, 28, 28
  021fa64  vmaddfp 30, 2, 30, 3
  021fa68  fsqrts 29, 29
  021fa6c  rlwimi 4, 3, 2, 26, 28
  021fa70  slwi 3, 3, 2
  021fa74  clrldi 4, 4, 32
  021fa78  lfsx 2, 6, 3
  021fa7c  lfs 1, 4(4)
  021fa80  fsel 3, 3, 7, 6
  021fa84  fsub 6, 8, 31
  021fa88  fsqrts 30, 30
  021fa8c  fcmpu 0, 3, 31
  021fa90  std 28, 216(1)
  021fa94  fsel 4, 6, 4, 5
  021fa98  bt 1, 0x21faa4
  021fa9c  fmr 2, 31
  021faa0  b 0x21fbcc
  021faa4  fsubs 5, 4, 3
  021faa8  fadds 3, 4, 3
  021faac  addic 6, 1, 16
  021fab0  li 3, 2
  021fab4  addic 5, 6, 108
  021fab8  addic 4, 6, 124
  021fabc  mtctr 3
  021fac0  fdivs 3, 5, 3
  021fac4  fmuls 5, 3, 3
  021fac8  stfs 3, 136(1)
  021facc  stfs 3, 128(1)
  021fad0  stfs 3, 132(1)
  021fad4  stfs 3, 124(1)
  021fad8  lfs 6, 136(1)
  021fadc  lfs 7, 128(1)
  021fae0  lfs 8, 132(1)
  021fae4  fmuls 3, 5, 5
  021fae8  fmuls 7, 7, 5
  021faec  fmuls 6, 6, 3
  021faf0  fmuls 4, 3, 3
  021faf4  fmuls 3, 8, 3
  021faf8  stfs 7, 128(1)
  021fafc  fmuls 5, 6, 5
  021fb00  stfs 3, 132(1)
  021fb04  stfs 5, 136(1)
  021fb08  lfs 3, 108(6)
  021fb0c  fmuls 3, 3, 4
  021fb10  stfs 3, 124(6)
  021fb14  lfs 3, 4(5)
  021fb18  addic 6, 6, 8
  021fb1c  addic 5, 5, 8
  021fb20  fmuls 3, 3, 4
  021fb24  stfs 3, 4(4)
  021fb28  addic 4, 4, 8
  021fb2c  bdnz 0x21fb08
  021fb30  ori 7, 1, 0
  021fb34  lis 6, 115
  021fb38  li 8, 4
  021fb3c  addic 5, 7, 124
  021fb40  addic 6, 6, 22752
  021fb44  ori 4, 5, 0
  021fb48  mtctr 8
  021fb4c  lfs 3, 124(7)
  021fb50  lfs 4, 0(6)
  021fb54  fmuls 3, 3, 4
  021fb58  lfs 4, 4(6)
  021fb5c  addic 6, 6, 8
  021fb60  stfs 3, 124(7)
  021fb64  lfs 3, 4(5)
  021fb68  addic 7, 7, 8
  021fb6c  fmuls 3, 3, 4
  021fb70  stfs 3, 4(5)
  021fb74  addic 5, 5, 8
  021fb78  bdnz 0x21fb4c
  021fb7c  ori 5, 3, 0
  021fb80  fmr 3, 31
  021fb84  ori 3, 1, 0
  021fb88  mtctr 5
  021fb8c  lfs 4, 124(3)
  021fb90  fadds 3, 3, 4
  021fb94  lfs 4, 4(4)
  021fb98  addic 3, 3, 16
  021fb9c  lfs 5, 8(4)
  021fba0  lfs 6, 12(4)
  021fba4  addic 4, 4, 16
  021fba8  fadds 3, 3, 4
  021fbac  fadds 3, 3, 5
  021fbb0  fadds 3, 3, 6
  021fbb4  bdnz 0x21fb8c
  021fbb8  lis 3, 34
  021fbbc  addi 3, 3, -1984
  021fbc0  lfs 4, 8(3)
  021fbc4  fadds 3, 3, 4
  021fbc8  fmadds 2, 3, 2, 1
  021fbcc  fmr 1, 2
  021fbd0  lis 3, 34
  021fbd4  addi 28, 3, -1984
  021fbd8  lfs 2, 12(28)
  021fbdc  bl 0x502578
  021fbe0  nop
  021fbe4  fmr 2, 1
  021fbe8  li 3, 16
  021fbec  lfs 1, 16(28)
  021fbf0  fsubs 3, 30, 1
  021fbf4  <unknown>
  021fbf8  vspltw 31, 31, 0
  021fbfc  fcmpu 0, 29, 3
  021fc00  cror 6, 0, 2
  021fc04  bt 6, 0x21fcac
  021fc08  fmr 3, 1
  021fc0c  fsubs 4, 29, 30
  021fc10  lis 3, 34
  021fc14  fmr 1, 2
  021fc18  addi 28, 3, -1984
  021fc1c  lfs 2, 56(29)
  021fc20  lfs 5, 20(28)
  021fc24  fmr 29, 5
  021fc28  fadds 3, 4, 3
  021fc2c  fmuls 29, 3, 29
  021fc30  bl 0x5025e0
  021fc34  nop
  021fc38  fmr 2, 1
  021fc3c  lfs 1, 24(28)
  021fc40  fcmpu 0, 29, 1
  021fc44  cror 6, 0, 2
  021fc48  bt 6, 0x21fc54
  021fc4c  fmr 29, 1
  021fc50  b 0x21fc64
  021fc54  fcmpu 0, 29, 31
  021fc58  cror 6, 1, 2
  021fc5c  bt 6, 0x21fc64
  021fc60  fmr 29, 31
  021fc64  fcmpu 0, 2, 31
  021fc68  cror 6, 0, 2
  021fc6c  bt 6, 0x21fc84
  021fc70  lis 3, 34
  021fc74  lfs 1, 0(30)
  021fc78  addi 3, 3, -1984
  021fc7c  lfs 2, 28(3)
  021fc80  b 0x21fc8c
  021fc84  fmr 2, 1
  021fc88  lfs 1, 0(30)
  021fc8c  fsubs 2, 2, 1
  021fc90  lis 3, 151
  021fc94  addic 3, 3, -25376
  021fc98  fmadds 1, 2, 29, 1
  021fc9c  stfs 1, 0(30)
  021fca0  lbz 4, 5647(3)
  021fca4  ori 4, 4, 2
  021fca8  stb 4, 5647(3)
  021fcac  vsubfp 3, 29, 31
  021fcb0  vspltw 2, 30, 0
  021fcb4  vspltw 3, 3, 0
  021fcb8  vcmpgtfp. 3, 2, 3
  021fcbc  bt 26, 0x21fdcc
  021fcc0  vsubfp 2, 30, 29
  021fcc4  lis 3, 34
  021fcc8  vspltisw 3, -1
  021fccc  li 4, 20
  021fcd0  addi 3, 3, -1984
  021fcd4  li 5, 52
  021fcd8  vslw 4, 3, 3
  021fcdc  li 6, 24
  021fce0  <unknown>
  021fce4  addi 4, 5, 16
  021fce8  <unknown>
  021fcec  vspltw 3, 3, 0
  021fcf0  li 5, 32
  021fcf4  <unknown>
  021fcf8  vaddfp 2, 2, 31
  021fcfc  li 6, 36
  021fd00  vspltw 30, 30, 0
  021fd04  <unknown>
  021fd08  <unknown>
  021fd0c  vor 5, 5, 6
  021fd10  vspltisw 6, -1
  021fd14  vslw 6, 6, 6
  021fd18  vmaddfp 4, 2, 3, 4
  021fd1c  vspltw 2, 7, 0
  021fd20  <unknown>
  021fd24  vsubfp 2, 2, 5
  021fd28  vspltw 5, 3, 0
  021fd2c  vspltw 3, 4, 0
  021fd30  vcmpgtfp. 7, 3, 30
  021fd34  vmaddfp 2, 2, 5, 6
  021fd38  bt 26, 0x21fd44
  021fd3c  vsldoi 4, 30, 30, 0
  021fd40  b 0x21fd54
  021fd44  vspltisw 5, 0
  021fd48  vcmpgefp. 3, 3, 5
  021fd4c  bf 26, 0x21fd54
  021fd50  vspltisw 4, 0
  021fd54  vspltw 3, 2, 0
  021fd58  vspltw 4, 4, 0
  021fd5c  vcmpgtfp. 5, 3, 30
  021fd60  bt 26, 0x21fd6c
  021fd64  vsldoi 2, 30, 30, 0
  021fd68  b 0x21fd7c
  021fd6c  vspltisw 5, 0
  021fd70  vcmpgefp. 3, 3, 5
  021fd74  bf 26, 0x21fd7c
  021fd78  vspltisw 2, 0
  021fd7c  lis 3, 34
  021fd80  vspltisw 3, -1
  021fd84  li 4, 28
  021fd88  vspltw 2, 2, 0
  021fd8c  addi 3, 3, -1984
  021fd90  <unknown>
  021fd94  vslw 3, 3, 3
  021fd98  <unknown>
  021fd9c  vmaddfp 2, 4, 2, 3
  021fda0  lis 3, 151
  021fda4  vspltw 3, 6, 0
  021fda8  addic 3, 3, -25376
  021fdac  vsubfp 3, 3, 5
  021fdb0  vmaddfp 2, 3, 2, 5
  021fdb4  vspltw 2, 2, 0
  021fdb8  stvewx 2, 0, 31
  021fdbc  lbz 4, 5647(3)
  021fdc0  ori 4, 4, 2
  021fdc4  stb 4, 5647(3)
  021fdc8  b 0x21feec
  021fdcc  lis 3, 34
  021fdd0  li 4, 40
  021fdd4  addi 3, 3, -1984
  021fdd8  <unknown>
  021fddc  vspltw 3, 3, 0
  021fde0  vcmpgefp. 2, 2, 3
  021fde4  bf 26, 0x21feec
  021fde8  lis 3, 34
  021fdec  li 4, 44
  021fdf0  vspltisw 4, -1
  021fdf4  addi 3, 3, -1984
  021fdf8  li 5, 20
  021fdfc  li 6, 32
  021fe00  vslw 4, 4, 4
  021fe04  <unknown>
  021fe08  li 4, 52
  021fe0c  vspltw 2, 2, 0
  021fe10  <unknown>
  021fe14  addi 5, 4, 16
  021fe18  vspltw 3, 3, 0
  021fe1c  vsubfp 2, 2, 30
  021fe20  vaddfp 5, 2, 31
  021fe24  <unknown>
  021fe28  <unknown>
  021fe2c  li 4, 24
  021fe30  vor 6, 2, 6
  021fe34  <unknown>
  021fe38  li 5, 36
  021fe3c  vspltw 8, 2, 0
  021fe40  <unknown>
  021fe44  vspltw 2, 7, 0
  021fe48  vaddfp 30, 6, 8
  021fe4c  vmaddfp 4, 5, 3, 4
  021fe50  vspltisw 3, -1
  021fe54  <unknown>
  021fe58  vspltw 5, 5, 0
  021fe5c  vslw 6, 3, 3
  021fe60  vmaddfp 30, 30, 5, 6
  021fe64  vspltw 3, 4, 0
  021fe68  vcmpgtfp. 5, 3, 2
  021fe6c  bt 26, 0x21fe78
  021fe70  vsldoi 3, 2, 2, 0
  021fe74  b 0x21fe8c
  021fe78  vspltisw 5, 0
  021fe7c  vcmpgefp. 5, 3, 5
  021fe80  vsldoi 3, 4, 4, 0
  021fe84  bf 26, 0x21fe8c
  021fe88  vspltisw 3, 0
  021fe8c  vspltw 4, 3, 0
  021fe90  vspltw 3, 30, 0
  021fe94  vcmpgtfp. 5, 3, 2
  021fe98  bt 26, 0x21fea4
  021fe9c  vsldoi 30, 2, 2, 0
  021fea0  b 0x21feb4
  021fea4  vspltisw 5, 0
  021fea8  vcmpgefp. 3, 3, 5
  021feac  bf 26, 0x21feb4
  021feb0  vspltisw 30, 0
  021feb4  vspltisw 5, -1
  021feb8  lis 3, 151
  021febc  vspltw 3, 30, 0
  021fec0  <unknown>
  021fec4  vslw 5, 5, 5
  021fec8  vsubfp 2, 2, 6
  021fecc  addic 3, 3, -25376
  021fed0  vmaddfp 3, 4, 3, 5
  021fed4  vmaddfp 2, 2, 3, 6
  021fed8  vspltw 2, 2, 0
  021fedc  stvewx 2, 0, 31
  021fee0  lbz 4, 5647(3)
  021fee4  ori 4, 4, 2
  021fee8  stb 4, 5647(3)
  021feec  li 0, 160
  021fef0  lvx 29, 1, 0
  021fef4  addic 0, 0, 16
  021fef8  lvx 30, 1, 0
  021fefc  addic 0, 0, 16
  021ff00  lvx 31, 1, 0
  021ff04  ld 0, 288(1)
  021ff08  mtlr 0
  021ff0c  lfd 29, 248(1)
  021ff10  lfd 30, 256(1)
  021ff14  lfd 31, 264(1)
  021ff18  ld 28, 216(1)
  021ff1c  ld 29, 224(1)
  021ff20  ld 30, 232(1)
  021ff24  ld 31, 240(1)
  021ff28  addi 1, 1, 272
  021ff2c  blr

M1242_0021ff90:   # 0x21ff90, 0x1078 bytes
  021ff90  stdu 1, -480(1)
  021ff94  mflr 0
  021ff98  std 0, 496(1)
  021ff9c  stfd 27, 440(1)
  021ffa0  stfd 28, 448(1)
  021ffa4  stfd 29, 456(1)
  021ffa8  stfd 30, 464(1)
  021ffac  stfd 31, 472(1)
  021ffb0  lis 5, 34
  021ffb4  li 6, 0
  021ffb8  addi 5, 5, -208
  021ffbc  std 31, 432(1)
  021ffc0  lis 7, 114
  021ffc4  std 30, 424(1)
  021ffc8  ori 31, 3, 0
  021ffcc  ori 30, 4, 0
  021ffd0  lfs 29, 0(5)
  021ffd4  stw 6, 192(1)
  021ffd8  stw 6, 196(1)
  021ffdc  stw 6, 200(1)
  021ffe0  stw 6, 204(1)
  021ffe4  lfs 28, 4(5)
  021ffe8  lfs 1, -3052(7)
  021ffec  lis 5, 119
  021fff0  lhz 3, 52(31)
  021fff4  fmuls 1, 1, 28
  021fff8  lis 7, 119
  021fffc  rlwimi 3, 6, 0, 23, 23
  0220000  lfs 2, -14548(5)
  0220004  sth 3, 52(31)
  0220008  lhz 3, 104(4)
  022000c  lwz 4, -14708(7)
  0220010  extsh 6, 3
  0220014  lfs 7, -14548(5)
  0220018  fmuls 1, 1, 2
  022001c  cmpw 6, 4
  0220020  std 29, 416(1)
  0220024  std 28, 408(1)
  0220028  stfs 1, 200(1)
  022002c  bf 1, 0x2201b0
  0220030  lis 3, 150
  0220034  addic 3, 3, 19008
  0220038  lwz 3, 176(3)
  022003c  rlwinm 3, 3, 0, 25, 25
  0220040  cmpwi 3, 0
  0220044  bt 2, 0x220154
  0220048  lis 4, 161
  022004c  lis 3, 0
  0220050  addic 4, 4, -276
  0220054  ori 5, 3, 65535
  0220058  lhz 3, 224(4)
  022005c  cmpw 3, 5
  0220060  bf 0, 0x22006c
  0220064  addic 3, 3, 1
  0220068  sth 3, 224(4)
  022006c  lis 3, 161
  0220070  lis 5, 34
  0220074  lwz 3, -2344(3)
  0220078  extsw 3, 3
  022007c  std 3, 392(1)
  0220080  addi 3, 5, -208
  0220084  lis 5, 114
  0220088  lfs 1, 8(3)
  022008c  lfs 2, -3056(5)
  0220090  lfd 3, 392(1)
  0220094  fcfid 3, 3
  0220098  lis 3, 6990
  022009c  lhz 6, 226(4)
  02200a0  ori 5, 3, 33205
  02200a4  frsp 3, 3
  02200a8  fadds 1, 3, 1
  02200ac  fmuls 1, 2, 1
  02200b0  fctiwz 1, 1
  02200b4  stfd 1, 392(1)
  02200b8  lwz 3, 396(1)
  02200bc  mulhw 5, 5, 3
  02200c0  srawi 5, 5, 6
  02200c4  srwi 7, 5, 31
  02200c8  addc 5, 5, 7
  02200cc  cmpw 5, 6
  02200d0  bf 1, 0x2200f0
  02200d4  lis 5, 6990
  02200d8  ori 5, 5, 33205
  02200dc  mulhw 3, 5, 3
  02200e0  srawi 3, 3, 6
  02200e4  srwi 5, 3, 31
  02200e8  addc 3, 3, 5
  02200ec  sth 3, 226(4)
  02200f0  lis 3, 119
  02200f4  lfs 1, 100(30)
  02200f8  lis 5, 119
  02200fc  lis 6, 119
  0220100  li 8, 1
  0220104  lfs 2, -14696(3)
  0220108  lis 9, -32768
  022010c  lis 3, 151
  0220110  lwz 7, 228(4)
  0220114  fmadds 7, 2, 7, 1
  0220118  lwz 3, -25488(3)
  022011c  slw 3, 8, 3
  0220120  or 3, 7, 3
  0220124  or 3, 3, 9
  0220128  stfs 7, 100(30)
  022012c  lfs 1, -14700(5)
  0220130  lfs 2, -14548(6)
  0220134  stw 3, 228(4)
  0220138  fmuls 1, 1, 2
  022013c  fcmpu 0, 7, 1
  0220140  cror 6, 0, 2
  0220144  bt 6, 0x2201d4
  0220148  fmr 7, 1
  022014c  stfs 1, 100(30)
  0220150  b 0x2201d4
  0220154  lis 3, 119
  0220158  lis 4, 119
  022015c  lfs 1, -14712(3)
  0220160  lfs 3, -14704(4)
  0220164  fmuls 4, 1, 7
  0220168  lfs 2, 100(30)
  022016c  fmsubs 4, 3, 7, 4
  0220170  fcmpu 0, 2, 4
  0220174  cror 6, 1, 2
  0220178  bt 6, 0x220184
  022017c  fmadds 7, 1, 7, 2
  0220180  b 0x2201a8
  0220184  fmuls 1, 3, 7
  0220188  fcmpu 0, 2, 1
  022018c  cror 6, 0, 2
  0220190  bt 6, 0x2201a4
  0220194  fmsubs 1, 3, 7, 2
  0220198  lis 3, 119
  022019c  lfs 3, -14692(3)
  02201a0  fmadds 1, 1, 3, 2
  02201a4  fmr 7, 1
  02201a8  stfs 7, 100(30)
  02201ac  b 0x2201d4
  02201b0  lis 4, 119
  02201b4  lis 5, 119
  02201b8  lfs 7, 100(30)
  02201bc  addic 3, 3, 1
  02201c0  lfs 1, -14716(4)
  02201c4  lfs 2, -14548(5)
  02201c8  sth 3, 104(30)
  02201cc  fmadds 7, 1, 2, 7
  02201d0  stfs 7, 100(30)
  02201d4  lis 3, 119
  02201d8  lhz 4, 104(30)
  02201dc  extsh 4, 4
  02201e0  lwz 3, -14688(3)
  02201e4  cmpw 4, 3
  02201e8  bf 1, 0x2203b8
  02201ec  lis 3, 119
  02201f0  lis 5, 151
  02201f4  lis 4, 119
  02201f8  lis 6, 150
  02201fc  addic 5, 5, -25376
  0220200  addic 6, 6, 19008
  0220204  lfs 31, -14528(3)
  0220208  lfs 30, -14512(4)
  022020c  lfs 1, 7456(5)
  0220210  lwz 3, 160(6)
  0220214  lfs 2, 7460(5)
  0220218  rlwinm 3, 3, 0, 22, 22
  022021c  stfs 1, 304(1)
  0220220  cmpwi 3, 0
  0220224  stfs 2, 308(1)
  0220228  bt 2, 0x22027c
  022022c  lis 3, 119
  0220230  lis 4, 119
  0220234  lis 5, 119
  0220238  lfs 3, -14668(3)
  022023c  lfs 4, -14672(4)
  0220240  fdivs 1, 1, 3
  0220244  lis 3, 119
  0220248  lis 4, 119
  022024c  lis 6, 119
  0220250  lfs 3, -14660(3)
  0220254  lfs 31, -14524(4)
  0220258  fdivs 2, 2, 4
  022025c  lfs 4, -14664(5)
  0220260  lfs 30, -14508(6)
  0220264  fmuls 3, 3, 1
  0220268  stfs 1, 304(1)
  022026c  stfs 3, 304(1)
  0220270  fmuls 1, 4, 2
  0220274  stfs 2, 308(1)
  0220278  stfs 1, 308(1)
  022027c  addic 4, 1, 304
  0220280  addic 5, 1, 308
  0220284  ori 3, 31, 0
  0220288  bl 0x21f870
  022028c  lis 4, 119
  0220290  lis 6, 119
  0220294  lfs 1, 304(1)
  0220298  addic 3, 30, 108
  022029c  fmr 4, 31
  02202a0  addic 5, 30, 144
  02202a4  lfs 2, -14536(4)
  02202a8  lfs 3, -14532(6)
  02202ac  bl 0x109b40
  02202b0  nop
  02202b4  lis 4, 119
  02202b8  lis 6, 119
  02202bc  lfs 1, 308(1)
  02202c0  addic 5, 30, 148
  02202c4  fmr 4, 30
  02202c8  addic 3, 30, 112
  02202cc  lfs 2, -14520(4)
  02202d0  lfs 3, -14516(6)
  02202d4  bl 0x109b40
  02202d8  nop
  02202dc  lis 4, 119
  02202e0  lis 6, 119
  02202e4  lfs 1, 108(30)
  02202e8  lis 7, 119
  02202ec  lis 8, 119
  02202f0  addic 3, 30, 48
  02202f4  lfs 2, -14568(4)
  02202f8  addic 5, 30, 152
  02202fc  fmuls 1, 1, 2
  0220300  lfs 2, -14504(6)
  0220304  li 9, 0
  0220308  lfs 3, -14500(7)
  022030c  lfs 5, -14496(8)
  0220310  fmr 4, 5
  0220314  bl 0x10a050
  0220318  nop
  022031c  lis 3, 119
  0220320  lfs 1, 52(30)
  0220324  lfs 2, 112(30)
  0220328  lfs 3, -14672(3)
  022032c  fmuls 2, 2, 3
  0220330  bl 0x5025e0
  0220334  nop
  0220338  fmr 2, 1
  022033c  lis 3, 34
  0220340  lfs 31, 56(30)
  0220344  addi 3, 3, -208
  0220348  lfs 1, 108(30)
  022034c  stfs 2, 52(30)
  0220350  lfs 3, 12(3)
  0220354  fcmpu 0, 2, 3
  0220358  cror 6, 0, 2
  022035c  bt 6, 0x220370
  0220360  lis 3, 16306
  0220364  ori 3, 3, 47298
  0220368  stw 3, 52(30)
  022036c  b 0x220394
  0220370  lis 3, 34
  0220374  addi 3, 3, -208
  0220378  lfs 3, 16(3)
  022037c  fcmpu 0, 2, 3
  0220380  cror 6, 1, 2
  0220384  bt 6, 0x220394
  0220388  lis 3, -16462
  022038c  ori 3, 3, 47298
  0220390  stw 3, 52(30)
  0220394  fmr 2, 1
  0220398  lis 3, 119
  022039c  fmr 1, 31
  02203a0  lfs 3, -14668(3)
  02203a4  fmuls 2, 2, 3
  02203a8  bl 0x5025e0
  02203ac  nop
  02203b0  stfs 1, 56(30)
  02203b4  lfs 7, 100(30)
  02203b8  lfs 2, 56(30)
  02203bc  addic 3, 1, 208
  02203c0  lfs 3, 52(30)
  02203c4  fmr 1, 7
  02203c8  fneg 3, 3
  02203cc  bl 0xfe610
  02203d0  nop
  02203d4  lfs 2, 212(1)
  02203d8  lfs 1, 208(1)
  02203dc  fmuls 4, 2, 2
  02203e0  lfs 3, 216(1)
  02203e4  fmadds 7, 1, 1, 4
  02203e8  lfs 4, 100(30)
  02203ec  lfs 5, 112(30)
  02203f0  lfs 6, 108(30)
  02203f4  lfs 11, 16(31)
  02203f8  lfs 12, 20(31)
  02203fc  lfs 13, 24(31)
  0220400  fmadds 7, 3, 3, 7
  0220404  fsqrts 8, 7
  0220408  fcmpu 0, 8, 29
  022040c  bf 2, 0x220424
  0220410  fmr 8, 29
  0220414  lfs 7, 220(1)
  0220418  fmr 9, 8
  022041c  fmr 10, 9
  0220420  b 0x22047c
  0220424  frsqrte 8, 7
  0220428  lis 3, 34
  022042c  addi 3, 3, -208
  0220430  lfs 9, 8(3)
  0220434  lfs 10, 20(3)
  0220438  lfs 30, 220(1)
  022043c  fmuls 0, 7, 8
  0220440  fmuls 31, 9, 8
  0220444  fnmsubs 0, 0, 8, 10
  0220448  fmadds 8, 0, 31, 8
  022044c  fmuls 0, 7, 8
  0220450  fmuls 31, 9, 8
  0220454  fnmsubs 0, 0, 8, 10
  0220458  fmadds 8, 0, 31, 8
  022045c  fmuls 0, 7, 8
  0220460  fmuls 9, 9, 8
  0220464  fmr 7, 30
  0220468  fnmsubs 10, 0, 8, 10
  022046c  fmadds 8, 10, 9, 8
  0220470  fmuls 10, 1, 8
  0220474  fmuls 9, 2, 8
  0220478  fmuls 8, 3, 8
  022047c  fadds 1, 11, 1
  0220480  fadds 2, 12, 2
  0220484  stfs 10, 16(30)
  0220488  fadds 3, 13, 3
  022048c  stfs 9, 20(30)
  0220490  lis 3, 119
  0220494  stfs 8, 24(30)
  0220498  stfs 7, 28(30)
  022049c  lis 4, 119
  02204a0  lis 6, 119
  02204a4  lis 7, 119
  02204a8  lis 9, 119
  02204ac  lis 8, 119
  02204b0  stfs 1, 16(31)
  02204b4  stfs 2, 20(31)
  02204b8  stfs 3, 24(31)
  02204bc  lfs 1, -14704(3)
  02204c0  lfs 3, -14700(4)
  02204c4  fsubs 2, 4, 1
  02204c8  fsubs 1, 3, 1
  02204cc  lis 4, 119
  02204d0  lis 10, 119
  02204d4  lis 11, 119
  02204d8  lis 12, 119
  02204dc  lis 29, 119
  02204e0  lis 28, 119
  02204e4  fsub 3, 2, 29
  02204e8  addic 3, 30, 180
  02204ec  addic 5, 30, 200
  02204f0  fsel 2, 3, 2, 29
  02204f4  fdivs 1, 2, 1
  02204f8  stfs 1, 196(30)
  02204fc  lfs 2, -14396(4)
  0220500  lfs 3, -14656(6)
  0220504  fnmsubs 2, 5, 2, 3
  0220508  lfs 3, -14388(7)
  022050c  lfs 4, -14564(9)
  0220510  lfs 7, -14392(8)
  0220514  fmuls 4, 6, 4
  0220518  lfs 6, -14652(10)
  022051c  lfs 8, -14552(11)
  0220520  fmadds 5, 5, 7, 6
  0220524  lfs 6, -14432(12)
  0220528  fnmsubs 1, 3, 1, 2
  022052c  lfs 3, -14428(29)
  0220530  lfs 7, -14424(28)
  0220534  fmr 2, 6
  0220538  fmuls 31, 4, 8
  022053c  fmr 4, 7
  0220540  fmuls 30, 5, 8
  0220544  fmuls 1, 1, 8
  0220548  bl 0x109b40
  022054c  nop
  0220550  lis 4, 119
  0220554  fmr 1, 31
  0220558  lis 6, 119
  022055c  lis 7, 119
  0220560  addic 3, 30, 184
  0220564  addic 5, 30, 204
  0220568  lfs 2, -14420(4)
  022056c  lfs 3, -14416(6)
  0220570  lfs 4, -14412(7)
  0220574  bl 0x109b40
  0220578  nop
  022057c  lis 4, 119
  0220580  lis 6, 119
  0220584  fmr 1, 30
  0220588  lis 7, 119
  022058c  addic 3, 30, 188
  0220590  addic 5, 30, 208
  0220594  lfs 2, -14408(4)
  0220598  lfs 3, -14404(6)
  022059c  lfs 4, -14400(7)
  02205a0  bl 0x109b40
  02205a4  nop
  02205a8  lfs 31, 180(30)
  02205ac  addic 3, 1, 256
  02205b0  lfs 30, 184(30)
  02205b4  addic 4, 30, 48
  02205b8  lfs 27, 188(30)
  02205bc  bl 0x500b64
  02205c0  nop
  02205c4  lfs 1, 272(1)
  02205c8  lfs 2, 276(1)
  02205cc  fmuls 1, 1, 30
  02205d0  lfs 3, 280(1)
  02205d4  fmuls 2, 2, 30
  02205d8  lfs 4, 256(1)
  02205dc  fmuls 3, 3, 30
  02205e0  lfs 5, 260(1)
  02205e4  lfs 6, 264(1)
  02205e8  lfs 7, 288(1)
  02205ec  addic 3, 1, 240
  02205f0  lfs 8, 292(1)
  02205f4  lfs 9, 296(1)
  02205f8  fmadds 1, 4, 31, 1
  02205fc  fmadds 2, 5, 31, 2
  0220600  lfs 4, 16(31)
  0220604  fmadds 3, 6, 31, 3
  0220608  lfs 5, 20(31)
  022060c  lfs 6, 24(31)
  0220610  fmadds 1, 7, 27, 1
  0220614  fmadds 2, 8, 27, 2
  0220618  lfs 7, 28(31)
  022061c  fmadds 3, 9, 27, 3
  0220620  stfs 7, 252(1)
  0220624  fadds 1, 4, 1
  0220628  fadds 2, 5, 2
  022062c  fadds 3, 6, 3
  0220630  stfs 1, 240(1)
  0220634  stfs 2, 244(1)
  0220638  stfs 3, 248(1)
  022063c  bl 0x47b98
  0220640  nop
  0220644  lis 3, 119
  0220648  lfs 1, 48(30)
  022064c  lis 4, 119
  0220650  lfs 2, 108(30)
  0220654  lfs 3, -14636(3)
  0220658  lfs 4, -14640(4)
  022065c  fmuls 1, 1, 3
  0220660  fmuls 2, 2, 4
  0220664  bl 0x502578
  0220668  nop
  022066c  lis 3, 119
  0220670  fmr 31, 1
  0220674  lfs 1, 52(30)
  0220678  lfs 2, -14632(3)
  022067c  bl 0x502578
  0220680  nop
  0220684  lis 3, 119
  0220688  lfs 2, 112(30)
  022068c  lfs 3, -14672(3)
  0220690  fmuls 2, 2, 3
  0220694  bl 0x5025e0
  0220698  nop
  022069c  lis 4, 119
  02206a0  lis 6, 119
  02206a4  fmr 30, 1
  02206a8  lis 7, 119
  02206ac  lfs 27, 56(30)
  02206b0  addic 3, 30, 32
  02206b4  fmr 1, 31
  02206b8  addic 5, 30, 160
  02206bc  lfs 2, -14468(4)
  02206c0  lfs 3, -14464(6)
  02206c4  li 9, 0
  02206c8  lfs 4, -14460(7)
  02206cc  bl 0x10a050
  02206d0  nop
  02206d4  lis 4, 119
  02206d8  lis 6, 119
  02206dc  fmr 1, 30
  02206e0  lis 7, 119
  02206e4  addic 3, 30, 36
  02206e8  addic 5, 30, 164
  02206ec  lfs 2, -14456(4)
  02206f0  lfs 3, -14452(6)
  02206f4  li 9, 0
  02206f8  lfs 4, -14448(7)
  02206fc  bl 0x10a050
  0220700  nop
  0220704  lis 4, 119
  0220708  lis 6, 119
  022070c  fmr 1, 27
  0220710  lis 7, 119
  0220714  addic 3, 30, 40
  0220718  addic 5, 30, 168
  022071c  lfs 2, -14444(4)
  0220720  lfs 3, -14440(6)
  0220724  li 9, 0
  0220728  lfs 4, -14436(7)
  022072c  bl 0x10a050
  0220730  nop
  0220734  lfs 1, 32(30)
  0220738  lfs 2, 40(30)
  022073c  lfs 3, 212(30)
  0220740  stfs 1, 224(1)
  0220744  fmr 1, 2
  0220748  fmr 2, 3
  022074c  bl 0x5025e0
  0220750  nop
  0220754  lfs 2, 36(30)
  0220758  stfs 1, 232(1)
  022075c  fmr 1, 2
  0220760  lfs 3, 216(30)
  0220764  fmr 2, 3
  0220768  bl 0x5025e0
  022076c  nop
  0220770  addic 3, 1, 224
  0220774  stfs 1, 228(1)
  0220778  bl 0x47c08
  022077c  nop
  0220780  lis 3, 150
  0220784  lis 4, 114
  0220788  addic 3, 3, 19008
  022078c  lwz 3, 176(3)
  0220790  lfs 1, -3052(4)
  0220794  rlwinm 3, 3, 0, 25, 25
  0220798  cmpwi 3, 0
  022079c  bt 2, 0x2207ac
  02207a0  lis 3, 119
  02207a4  lfs 2, -14380(3)
  02207a8  b 0x2207b4
  02207ac  lis 3, 119
  02207b0  lfs 2, -14384(3)
  02207b4  lis 3, 34
  02207b8  lis 4, 114
  02207bc  fmr 4, 1
  02207c0  addi 29, 3, -208
  02207c4  fmr 1, 2
  02207c8  addic 3, 30, 176
  02207cc  addic 5, 30, 192
  02207d0  lfs 27, 24(29)
  02207d4  lfs 3, -3048(4)
  02207d8  fmuls 3, 3, 27
  02207dc  fmuls 4, 4, 27
  02207e0  fmr 2, 3
  02207e4  bl 0x109c30
  02207e8  nop
  02207ec  lfs 1, 8(29)
  02207f0  lfs 2, 176(30)
  02207f4  lfs 3, 28(29)
  02207f8  fmuls 1, 2, 1
  02207fc  lfs 4, 52(29)
  0220800  lfs 2, 32(29)
  0220804  lis 3, 150
  0220808  addic 3, 3, -12416
  022080c  fsubs 5, 3, 1
  0220810  fadds 4, 1, 4
  0220814  fsubs 6, 2, 1
  0220818  fsub 7, 1, 5
  022081c  fsubs 3, 3, 4
  0220820  fsubs 2, 2, 4
  0220824  fsel 1, 7, 5, 1
  0220828  fsub 5, 4, 3
  022082c  lfs 7, 36(29)
  0220830  fsub 9, 6, 1
  0220834  fsel 3, 5, 3, 4
  0220838  lfs 4, 40(29)
  022083c  lfs 5, 44(29)
  0220840  fsel 1, 9, 6, 1
  0220844  fsub 6, 2, 3
  0220848  fmuls 9, 1, 1
  022084c  fsel 2, 6, 2, 3
  0220850  lfs 3, 48(29)
  0220854  fmuls 6, 9, 1
  0220858  fmuls 8, 2, 2
  022085c  fmuls 10, 9, 6
  0220860  fmadds 1, 6, 7, 1
  0220864  fmuls 6, 8, 2
  0220868  fmuls 11, 9, 10
  022086c  fmadds 1, 10, 4, 1
  0220870  fmuls 10, 8, 6
  0220874  fmadds 2, 6, 7, 2
  0220878  fmuls 6, 9, 11
  022087c  fmadds 1, 11, 5, 1
  0220880  fmuls 7, 8, 10
  0220884  fmadds 2, 10, 4, 2
  0220888  fmadds 1, 6, 3, 1
  022088c  fmuls 4, 8, 7
  0220890  fmadds 2, 7, 5, 2
  0220894  fmadds 2, 4, 3, 2
  0220898  fdivs 1, 1, 2
  022089c  stfs 1, 176(3)
  02208a0  bl 0x668d0
  02208a4  nop
  02208a8  lis 3, 119
  02208ac  lfs 1, 48(30)
  02208b0  lfs 2, 108(30)
  02208b4  lfs 3, -14356(3)
  02208b8  fmuls 2, 2, 3
  02208bc  bl 0x502578
  02208c0  nop
  02208c4  lis 3, 119
  02208c8  stfs 1, 64(31)
  02208cc  lfs 2, 112(30)
  02208d0  lfs 1, 52(30)
  02208d4  lfs 3, -14352(3)
  02208d8  fmuls 2, 2, 3
  02208dc  fneg 2, 2
  02208e0  bl 0x502578
  02208e4  nop
  02208e8  lis 3, 241
  02208ec  stfs 1, 68(31)
  02208f0  lfs 2, 108(30)
  02208f4  lfs 1, 56(30)
  02208f8  lfs 3, -12604(3)
  02208fc  fmuls 2, 2, 3
  0220900  fneg 2, 2
  0220904  bl 0x502578
  0220908  nop
  022090c  addic 3, 31, 16
  0220910  stfs 1, 72(31)
  0220914  li 5, 0
  0220918  fmr 1, 27
  022091c  ori 6, 31, 0
  0220920  bl 0x59e20
  0220924  nop
  0220928  cmpwi 3, 0
  022092c  bt 2, 0x220f38
  0220930  lis 29, 161
  0220934  addic 29, 29, 2368
  0220938  lwz 3, 24(29)
  022093c  cmpwi 3, 0
  0220940  bf 2, 0x2209fc
  0220944  lis 3, 34
  0220948  li 7, -1
  022094c  fmr 1, 28
  0220950  addi 29, 3, -208
  0220954  fmr 4, 28
  0220958  li 6, 1
  022095c  li 28, 0
  0220960  lis 4, 161
  0220964  ori 3, 31, 0
  0220968  lfs 2, 56(29)
  022096c  addic 4, 4, 23856
  0220970  lfs 3, 60(29)
  0220974  li 5, 0
  0220978  lfs 5, 64(29)
  022097c  li 8, 30
  0220980  lfs 6, 20(29)
  0220984  li 9, 10
  0220988  lfs 7, 68(29)
  022098c  li 10, 24
  0220990  std 7, 144(1)
  0220994  std 6, 160(1)
  0220998  std 6, 168(1)
  022099c  std 7, 176(1)
  02209a0  std 28, 184(1)
  02209a4  bl 0x10e030
  02209a8  nop
  02209ac  lhz 3, 52(31)
  02209b0  li 4, 7
  02209b4  stb 28, 49(31)
  02209b8  li 5, 72
  02209bc  vspltisw 3, -1
  02209c0  ori 3, 3, 1
  02209c4  lis 6, 114
  02209c8  stb 4, 32(31)
  02209cc  li 4, -3056
  02209d0  sth 3, 52(31)
  02209d4  <unknown>
  02209d8  vslw 3, 3, 3
  02209dc  li 3, 248
  02209e0  vspltw 2, 2, 0
  02209e4  <unknown>
  02209e8  vmaddfp 2, 4, 2, 3
  02209ec  vctsxs 2, 2, 0
  02209f0  vspltw 2, 2, 0
  02209f4  stvewx 2, 3, 30
  02209f8  b 0x220f38
  02209fc  lhz 3, 166(3)
  0220a00  cmpwi 7, 3, 402
  0220a04  cmpwi 3, 0
  0220a08  cror 2, 2, 30
  0220a0c  cmpwi 1, 3, 1219
  0220a10  cmpwi 6, 3, 1218
  0220a14  bt 2, 0x220f38
  0220a18  bt 26, 0x220f38
  0220a1c  bt 6, 0x220f38
  0220a20  lfs 1, 48(29)
  0220a24  addic 3, 1, 208
  0220a28  stfs 1, 16(31)
  0220a2c  ori 4, 3, 0
  0220a30  lfs 1, 52(29)
  0220a34  stfs 1, 20(31)
  0220a38  lfs 1, 56(29)
  0220a3c  stfs 1, 24(31)
  0220a40  lfs 1, 60(29)
  0220a44  addic 29, 29, 64
  0220a48  stfs 1, 28(31)
  0220a4c  ori 5, 29, 0
  0220a50  bl 0x500608
  0220a54  nop
  0220a58  lwz 3, 208(1)
  0220a5c  lis 5, 34
  0220a60  lwz 4, 212(1)
  0220a64  lfs 1, 208(1)
  0220a68  lfs 2, 212(1)
  0220a6c  addi 5, 5, -208
  0220a70  fabs 3, 1
  0220a74  lfs 31, 56(30)
  0220a78  fabs 2, 2
  0220a7c  rlwinm 4, 4, 3, 29, 29
  0220a80  lis 28, 115
  0220a84  addic 28, 28, 22784
  0220a88  fsubs 1, 3, 2
  0220a8c  stfs 1, 320(1)
  0220a90  lfs 30, 76(5)
  0220a94  lwz 5, 320(1)
  0220a98  lfs 1, 320(1)
  0220a9c  rlwimi 4, 5, 2, 30, 30
  0220aa0  fsub 4, 1, 29
  0220aa4  fsub 5, 1, 29
  0220aa8  rlwimi 4, 3, 4, 28, 28
  0220aac  ori 3, 28, 0
  0220ab0  rlwimi 3, 4, 2, 26, 28
  0220ab4  slwi 4, 4, 2
  0220ab8  clrldi 3, 3, 32
  0220abc  fsel 4, 4, 3, 2
  0220ac0  lfsx 1, 28, 4
  0220ac4  fsel 3, 5, 2, 3
  0220ac8  lfs 2, 4(3)
  0220acc  fcmpu 0, 4, 29
  0220ad0  bt 1, 0x220adc
  0220ad4  fmr 1, 29
  0220ad8  b 0x220bf4
  0220adc  fsubs 5, 3, 4
  0220ae0  fadds 3, 3, 4
  0220ae4  addic 3, 1, 16
  0220ae8  li 7, 2
  0220aec  addic 5, 3, 356
  0220af0  addic 4, 3, 340
  0220af4  mtctr 7
  0220af8  fdivs 3, 5, 3
  0220afc  fmuls 4, 3, 3
  0220b00  stfs 3, 368(1)
  0220b04  stfs 3, 360(1)
  0220b08  stfs 3, 364(1)
  0220b0c  stfs 3, 356(1)
  0220b10  lfs 6, 368(1)
  0220b14  lfs 7, 360(1)
  0220b18  lfs 8, 364(1)
  0220b1c  fmuls 5, 4, 4
  0220b20  fmuls 7, 7, 4
  0220b24  fmuls 6, 6, 5
  0220b28  fmuls 3, 5, 5
  0220b2c  fmuls 5, 8, 5
  0220b30  stfs 7, 360(1)
  0220b34  fmuls 4, 6, 4
  0220b38  stfs 5, 364(1)
  0220b3c  stfs 4, 368(1)
  0220b40  lfs 4, 340(3)
  0220b44  fmuls 4, 4, 3
  0220b48  stfs 4, 356(3)
  0220b4c  lfs 4, 4(4)
  0220b50  addic 4, 4, 8
  0220b54  fmuls 4, 4, 3
  0220b58  addic 3, 3, 8
  0220b5c  stfs 4, 4(5)
  0220b60  addic 5, 5, 8
  0220b64  bdnz 0x220b40
  0220b68  li 5, 4
  0220b6c  ori 3, 1, 0
  0220b70  mtctr 5
  0220b74  lis 4, 115
  0220b78  addic 5, 3, 356
  0220b7c  addic 4, 4, 22752
  0220b80  ori 6, 5, 0
  0220b84  lfs 3, 356(3)
  0220b88  lfs 4, 0(4)
  0220b8c  fmuls 3, 3, 4
  0220b90  lfs 4, 4(4)
  0220b94  addic 4, 4, 8
  0220b98  stfs 3, 356(3)
  0220b9c  lfs 3, 4(5)
  0220ba0  addic 3, 3, 8
  0220ba4  fmuls 3, 3, 4
  0220ba8  stfs 3, 4(5)
  0220bac  addic 5, 5, 8
  0220bb0  bdnz 0x220b84
  0220bb4  ori 3, 1, 0
  0220bb8  fmr 3, 29
  0220bbc  mtctr 7
  0220bc0  lfs 4, 356(3)
  0220bc4  fadds 3, 3, 4
  0220bc8  lfs 4, 4(6)
  0220bcc  addic 3, 3, 16
  0220bd0  lfs 5, 8(6)
  0220bd4  lfs 6, 12(6)
  0220bd8  addic 6, 6, 16
  0220bdc  fadds 3, 3, 4
  0220be0  fadds 3, 3, 5
  0220be4  fadds 3, 3, 6
  0220be8  bdnz 0x220bc0
  0220bec  fadds 3, 3, 30
  0220bf0  fmadds 1, 3, 1, 2
  0220bf4  fmr 2, 31
  0220bf8  bl 0x5025e0
  0220bfc  nop
  0220c00  lis 3, 119
  0220c04  lfs 2, -14684(3)
  0220c08  fmuls 2, 1, 2
  0220c0c  fmr 1, 31
  0220c10  bl 0x502578
  0220c14  nop
  0220c18  lfs 2, 212(1)
  0220c1c  lfs 3, 208(1)
  0220c20  fmuls 2, 2, 2
  0220c24  stfs 1, 56(30)
  0220c28  lfs 31, 52(30)
  0220c2c  lwz 3, 216(1)
  0220c30  lfs 1, 216(1)
  0220c34  rlwinm 3, 3, 3, 29, 29
  0220c38  fmadds 2, 3, 3, 2
  0220c3c  fabs 3, 1
  0220c40  fsqrts 2, 2
  0220c44  fabs 5, 2
  0220c48  stfs 2, 312(1)
  0220c4c  fsubs 1, 5, 3
  0220c50  stfs 1, 316(1)
  0220c54  lwz 4, 312(1)
  0220c58  lfs 1, 312(1)
  0220c5c  lwz 5, 316(1)
  0220c60  fabs 4, 1
  0220c64  lfs 1, 316(1)
  0220c68  rlwimi 3, 5, 2, 30, 30
  0220c6c  fsub 2, 1, 29
  0220c70  fsub 6, 1, 29
  0220c74  rlwimi 3, 4, 4, 28, 28
  0220c78  ori 4, 28, 0
  0220c7c  rlwimi 4, 3, 2, 26, 28
  0220c80  slwi 3, 3, 2
  0220c84  clrldi 4, 4, 32
  0220c88  fsel 4, 2, 4, 3
  0220c8c  lfsx 1, 28, 3
  0220c90  lfs 2, 4(4)
  0220c94  fsel 3, 6, 3, 5
  0220c98  fcmpu 0, 4, 29
  0220c9c  bt 1, 0x220ca8
  0220ca0  fmr 30, 29
  0220ca4  b 0x220dc0
  0220ca8  fsubs 5, 3, 4
  0220cac  fadds 3, 3, 4
  0220cb0  addic 3, 1, 16
  0220cb4  li 7, 2
  0220cb8  addic 4, 3, 308
  0220cbc  addic 5, 3, 324
  0220cc0  mtctr 7
  0220cc4  fdivs 3, 5, 3
  0220cc8  fmuls 4, 3, 3
  0220ccc  stfs 3, 336(1)
  0220cd0  stfs 3, 328(1)
  0220cd4  stfs 3, 332(1)
  0220cd8  stfs 3, 324(1)
  0220cdc  lfs 6, 336(1)
  0220ce0  lfs 7, 328(1)
  0220ce4  lfs 8, 332(1)
  0220ce8  fmuls 5, 4, 4
  0220cec  fmuls 7, 7, 4
  0220cf0  fmuls 6, 6, 5
  0220cf4  fmuls 3, 5, 5
  0220cf8  fmuls 5, 8, 5
  0220cfc  stfs 7, 328(1)
  0220d00  fmuls 4, 6, 4
  0220d04  stfs 5, 332(1)
  0220d08  stfs 4, 336(1)
  0220d0c  lfs 4, 308(3)
  0220d10  fmuls 4, 4, 3
  0220d14  stfs 4, 324(3)
  0220d18  lfs 4, 4(4)
  0220d1c  addic 3, 3, 8
  0220d20  addic 4, 4, 8
  0220d24  fmuls 4, 4, 3
  0220d28  stfs 4, 4(5)
  0220d2c  addic 5, 5, 8
  0220d30  bdnz 0x220d0c
  0220d34  li 5, 4
  0220d38  ori 3, 1, 0
  0220d3c  mtctr 5
  0220d40  lis 4, 115
  0220d44  addic 5, 3, 324
  0220d48  addic 4, 4, 22752
  0220d4c  ori 6, 5, 0
  0220d50  lfs 3, 324(3)
  0220d54  lfs 4, 0(4)
  0220d58  fmuls 3, 3, 4
  0220d5c  lfs 4, 4(4)
  0220d60  addic 4, 4, 8
  0220d64  stfs 3, 324(3)
  0220d68  lfs 3, 4(5)
  0220d6c  addic 3, 3, 8
  0220d70  fmuls 3, 3, 4
  0220d74  stfs 3, 4(5)
  0220d78  addic 5, 5, 8
  0220d7c  bdnz 0x220d50
  0220d80  fmr 3, 29
  0220d84  ori 3, 1, 0
  0220d88  mtctr 7
  0220d8c  lfs 4, 324(3)
  0220d90  fadds 3, 3, 4
  0220d94  addic 3, 3, 16
  0220d98  lfs 4, 4(6)
  0220d9c  lfs 5, 8(6)
  0220da0  lfs 6, 12(6)
  0220da4  addic 6, 6, 16
  0220da8  fadds 3, 3, 4
  0220dac  fadds 3, 3, 5
  0220db0  fadds 3, 3, 6
  0220db4  bdnz 0x220d8c
  0220db8  fadds 30, 3, 30
  0220dbc  fmadds 30, 30, 1, 2
  0220dc0  fneg 1, 30
  0220dc4  fmr 2, 31
  0220dc8  bl 0x5025e0
  0220dcc  nop
  0220dd0  lis 3, 119
  0220dd4  lfs 2, -14680(3)
  0220dd8  fmuls 2, 1, 2
  0220ddc  fmr 1, 31
  0220de0  bl 0x502578
  0220de4  nop
  0220de8  lis 3, 119
  0220dec  stfs 1, 52(30)
  0220df0  lfs 1, 100(30)
  0220df4  lwz 4, 220(30)
  0220df8  cmpwi 4, 0
  0220dfc  lfs 2, -14616(3)
  0220e00  fmuls 1, 1, 2
  0220e04  stfs 1, 100(30)
  0220e08  bf 2, 0x220f38
  0220e0c  lis 3, 151
  0220e10  lis 4, 119
  0220e14  addic 3, 3, -25376
  0220e18  lfs 1, -14612(4)
  0220e1c  lfs 2, 5628(3)
  0220e20  fsubs 1, 2, 1
  0220e24  fcmpu 0, 1, 29
  0220e28  stfs 1, 5628(3)
  0220e2c  cror 6, 1, 2
  0220e30  bt 6, 0x220f2c
  0220e34  addic 28, 1, 192
  0220e38  addic 4, 1, 208
  0220e3c  ori 3, 28, 0
  0220e40  ori 5, 29, 0
  0220e44  bl 0x500608
  0220e48  nop
  0220e4c  lfs 2, 196(1)
  0220e50  lfs 3, 192(1)
  0220e54  fmuls 1, 2, 2
  0220e58  lfs 5, 200(1)
  0220e5c  lis 3, 114
  0220e60  li 11, -1
  0220e64  fmr 4, 28
  0220e68  li 6, 1
  0220e6c  fmadds 1, 3, 3, 1
  0220e70  li 12, 0
  0220e74  ori 4, 28, 0
  0220e78  li 5, 0
  0220e7c  fmadds 1, 5, 5, 1
  0220e80  li 8, 30
  0220e84  li 9, 10
  0220e88  li 10, 24
  0220e8c  fsqrts 6, 1
  0220e90  lfs 1, -3052(3)
  0220e94  std 11, 144(1)
  0220e98  lis 3, 34
  0220e9c  std 6, 160(1)
  0220ea0  std 6, 168(1)
  0220ea4  addi 7, 3, -208
  0220ea8  std 11, 176(1)
  0220eac  ori 3, 31, 0
  0220eb0  std 12, 184(1)
  0220eb4  fmuls 7, 1, 27
  0220eb8  fmr 1, 28
  0220ebc  fdivs 7, 7, 6
  0220ec0  fsub 8, 29, 6
  0220ec4  fsub 9, 29, 6
  0220ec8  fsub 10, 29, 6
  0220ecc  fsub 11, 6, 29
  0220ed0  fsub 12, 6, 29
  0220ed4  fsub 6, 6, 29
  0220ed8  fmuls 3, 3, 7
  0220edc  fmuls 2, 2, 7
  0220ee0  fmuls 5, 5, 7
  0220ee4  fsel 7, 8, 29, 3
  0220ee8  fsel 8, 9, 29, 2
  0220eec  fsel 9, 10, 29, 5
  0220ef0  fsel 3, 11, 7, 3
  0220ef4  fsel 2, 12, 8, 2
  0220ef8  fsel 5, 6, 9, 5
  0220efc  stfs 3, 192(1)
  0220f00  stfs 2, 196(1)
  0220f04  stfs 5, 200(1)
  0220f08  lfs 2, 56(7)
  0220f0c  lfs 3, 60(7)
  0220f10  lfs 5, 64(7)
  0220f14  lfs 6, 20(7)
  0220f18  lfs 7, 68(7)
  0220f1c  bl 0x10e030
  0220f20  nop
  0220f24  li 3, 7
  0220f28  stb 3, 32(31)
  0220f2c  lis 3, 119
  0220f30  lwz 3, -14360(3)
  0220f34  stw 3, 220(30)
  0220f38  lis 3, 161
  0220f3c  addic 3, 3, 12
  0220f40  lhz 3, 680(3)
  0220f44  cmpwi 3, 0
  0220f48  bf 2, 0x220f5c
  0220f4c  li 3, 11004
  0220f50  li 4, 85
  0220f54  bl 0x7b310
  0220f58  nop
  0220f5c  lis 3, 113
  0220f60  ori 4, 31, 0
  0220f64  addic 3, 3, -26728
  0220f68  bl 0x6d720
  0220f6c  nop
  0220f70  ori 3, 31, 0
  0220f74  ori 4, 30, 0
  0220f78  bl 0x21f5b8
  0220f7c  lis 3, 34
  0220f80  lfs 2, 108(30)
  0220f84  lfs 1, 40(30)
  0220f88  addi 29, 3, -208
  0220f8c  lfs 3, 80(29)
  0220f90  fmuls 2, 2, 3
  0220f94  fneg 2, 2
  0220f98  bl 0x502578
  0220f9c  nop
  0220fa0  fmr 31, 1
  0220fa4  lfs 2, 84(29)
  0220fa8  lfs 3, 88(29)
  0220fac  lfs 4, 112(30)
  0220fb0  lfs 1, 36(30)
  0220fb4  fmsubs 2, 4, 2, 3
  0220fb8  bl 0x502578
  0220fbc  nop
  0220fc0  fneg 2, 1
  0220fc4  ori 3, 31, 0
  0220fc8  fmr 1, 31
  0220fcc  ori 4, 30, 0
  0220fd0  bl 0x21f2b0
  0220fd4  ld 0, 496(1)
  0220fd8  mtlr 0
  0220fdc  lfd 27, 440(1)
  0220fe0  lfd 28, 448(1)
  0220fe4  lfd 29, 456(1)
  0220fe8  lfd 30, 464(1)
  0220fec  lfd 31, 472(1)
  0220ff0  ld 28, 408(1)
  0220ff4  ld 29, 416(1)
  0220ff8  ld 30, 424(1)
  0220ffc  ld 31, 432(1)
  0221000  addi 1, 1, 480
  0221004  blr

UpdateMoby_1242_JetFighterPoki:   # 0x221048, 0x151c bytes
  0221048  stdu 1, -432(1)
  022104c  mflr 0
  0221050  std 0, 448(1)
  0221054  stfd 29, 408(1)
  0221058  stfd 30, 416(1)
  022105c  stfd 31, 424(1)
  0221060  std 31, 400(1)
  0221064  cmpwi 3, 0
  0221068  std 30, 392(1)
  022106c  std 29, 384(1)
  0221070  std 28, 376(1)
  0221074  std 27, 368(1)
  0221078  std 26, 360(1)
  022107c  ori 31, 3, 0
  0221080  bt 2, 0x222530
  0221084  lwz 30, 120(31)
  0221088  addic 3, 30, 220
  022108c  bl 0x4fff60
  0221090  nop
  0221094  lbz 3, 32(31)
  0221098  cmpwi 3, 7
  022109c  bt 2, 0x221628
  02210a0  cmpwi 3, 1
  02210a4  bt 2, 0x221628
  02210a8  cmpwi 3, 2
  02210ac  bt 2, 0x221628
  02210b0  lis 4, 3
  02210b4  ori 3, 31, 0
  02210b8  ori 4, 4, 1
  02210bc  li 5, 0
  02210c0  bl 0x10675c
  02210c4  nop
  02210c8  ori 29, 3, 0
  02210cc  cmpwi 29, 0
  02210d0  bt 2, 0x221628
  02210d4  lbz 3, 32(31)
  02210d8  cmpwi 3, 4
  02210dc  bf 2, 0x221628
  02210e0  lis 28, 151
  02210e4  lwz 3, 44(29)
  02210e8  addic 28, 28, -25376
  02210ec  srawi 5, 3, 31
  02210f0  srwi 7, 5, 1
  02210f4  lwz 4, 5628(28)
  02210f8  xor 3, 7, 3
  02210fc  lfs 1, 5628(28)
  0221100  srawi 6, 4, 31
  0221104  subc 3, 3, 5
  0221108  lfs 2, 44(29)
  022110c  srwi 8, 6, 1
  0221110  xor 4, 8, 4
  0221114  subc 4, 4, 6
  0221118  cmpw 4, 3
  022111c  bf 1, 0x22155c
  0221120  fsubs 1, 1, 2
  0221124  stfs 1, 5628(28)
  0221128  lwz 3, 48(29)
  022112c  clrlwi 3, 3, 31
  0221130  cmpwi 3, 0
  0221134  bt 2, 0x221628
  0221138  lis 4, 119
  022113c  lfs 31, 44(29)
  0221140  addic 28, 1, 192
  0221144  ori 3, 28, 0
  0221148  lfs 1, -14572(4)
  022114c  fmuls 31, 31, 1
  0221150  lfs 1, 100(30)
  0221154  lfs 2, 56(30)
  0221158  lfs 4, 52(30)
  022115c  fneg 3, 4
  0221160  bl 0xfe610
  0221164  nop
  0221168  lfs 1, 16(31)
  022116c  lfs 2, 16(29)
  0221170  ori 3, 28, 0
  0221174  fadds 1, 1, 2
  0221178  lfs 2, 20(31)
  022117c  lfs 3, 24(31)
  0221180  addic 5, 29, 16
  0221184  ori 4, 28, 0
  0221188  stfs 1, 16(31)
  022118c  lfs 1, 20(29)
  0221190  fadds 1, 2, 1
  0221194  stfs 1, 20(31)
  0221198  lfs 1, 24(29)
  022119c  fadds 1, 3, 1
  02211a0  stfs 1, 24(31)
  02211a4  bl 0x500608
  02211a8  nop
  02211ac  lwz 3, 192(1)
  02211b0  lis 5, 34
  02211b4  lwz 4, 196(1)
  02211b8  lfs 1, 192(1)
  02211bc  lfs 2, 196(1)
  02211c0  addi 5, 5, 4104
  02211c4  fabs 3, 1
  02211c8  lfs 30, 56(30)
  02211cc  fabs 2, 2
  02211d0  rlwinm 4, 4, 3, 29, 29
  02211d4  lis 29, 115
  02211d8  addic 29, 29, 22784
  02211dc  fsubs 1, 3, 2
  02211e0  stfs 1, 240(1)
  02211e4  lfs 29, 0(5)
  02211e8  lwz 5, 240(1)
  02211ec  lfs 1, 240(1)
  02211f0  rlwimi 4, 5, 2, 30, 30
  02211f4  fsub 4, 1, 29
  02211f8  fsub 5, 1, 29
  02211fc  rlwimi 4, 3, 4, 28, 28
  0221200  ori 3, 29, 0
  0221204  rlwimi 3, 4, 2, 26, 28
  0221208  slwi 4, 4, 2
  022120c  clrldi 3, 3, 32
  0221210  fsel 4, 4, 3, 2
  0221214  lfsx 1, 29, 4
  0221218  fsel 3, 5, 2, 3
  022121c  lfs 2, 4(3)
  0221220  fcmpu 0, 4, 29
  0221224  bt 1, 0x221230
  0221228  fmr 1, 29
  022122c  b 0x221354
  0221230  fsubs 5, 3, 4
  0221234  fadds 3, 3, 4
  0221238  addic 3, 1, 16
  022123c  li 6, 2
  0221240  addic 5, 3, 308
  0221244  addic 4, 3, 292
  0221248  mtctr 6
  022124c  fdivs 3, 5, 3
  0221250  fmuls 4, 3, 3
  0221254  stfs 3, 320(1)
  0221258  stfs 3, 312(1)
  022125c  stfs 3, 316(1)
  0221260  stfs 3, 308(1)
  0221264  lfs 6, 320(1)
  0221268  lfs 7, 312(1)
  022126c  lfs 8, 316(1)
  0221270  fmuls 5, 4, 4
  0221274  fmuls 7, 7, 4
  0221278  fmuls 6, 6, 5
  022127c  fmuls 3, 5, 5
  0221280  fmuls 5, 8, 5
  0221284  stfs 7, 312(1)
  0221288  fmuls 4, 6, 4
  022128c  stfs 5, 316(1)
  0221290  stfs 4, 320(1)
  0221294  lfs 4, 292(3)
  0221298  fmuls 4, 4, 3
  022129c  stfs 4, 308(3)
  02212a0  lfs 4, 4(4)
  02212a4  addic 4, 4, 8
  02212a8  fmuls 4, 4, 3
  02212ac  addic 3, 3, 8
  02212b0  stfs 4, 4(5)
  02212b4  addic 5, 5, 8
  02212b8  bdnz 0x221294
  02212bc  li 5, 4
  02212c0  ori 3, 1, 0
  02212c4  mtctr 5
  02212c8  lis 4, 115
  02212cc  addic 5, 3, 308
  02212d0  addic 4, 4, 22752
  02212d4  ori 7, 5, 0
  02212d8  lfs 3, 308(3)
  02212dc  lfs 4, 0(4)
  02212e0  fmuls 3, 3, 4
  02212e4  lfs 4, 4(4)
  02212e8  addic 4, 4, 8
  02212ec  stfs 3, 308(3)
  02212f0  lfs 3, 4(5)
  02212f4  addic 3, 3, 8
  02212f8  fmuls 3, 3, 4
  02212fc  stfs 3, 4(5)
  0221300  addic 5, 5, 8
  0221304  bdnz 0x2212d8
  0221308  ori 3, 1, 0
  022130c  fmr 3, 29
  0221310  mtctr 6
  0221314  lfs 4, 308(3)
  0221318  fadds 3, 3, 4
  022131c  lfs 4, 4(7)
  0221320  addic 3, 3, 16
  0221324  lfs 5, 8(7)
  0221328  lfs 6, 12(7)
  022132c  addic 7, 7, 16
  0221330  fadds 3, 3, 4
  0221334  fadds 3, 3, 5
  0221338  fadds 3, 3, 6
  022133c  bdnz 0x221314
  0221340  lis 3, 34
  0221344  addi 3, 3, 4104
  0221348  lfs 4, 4(3)
  022134c  fadds 3, 3, 4
  0221350  fmadds 1, 3, 1, 2
  0221354  fmr 2, 30
  0221358  bl 0x5025e0
  022135c  nop
  0221360  lis 3, 119
  0221364  lfs 2, -14684(3)
  0221368  fmuls 2, 1, 2
  022136c  fmr 1, 30
  0221370  fmuls 2, 2, 31
  0221374  bl 0x502578
  0221378  nop
  022137c  stfs 1, 56(30)
  0221380  lfs 1, 196(1)
  0221384  lfs 2, 192(1)
  0221388  fmuls 1, 1, 1
  022138c  lfs 30, 52(30)
  0221390  lwz 3, 200(1)
  0221394  rlwinm 3, 3, 3, 29, 29
  0221398  fmadds 1, 2, 2, 1
  022139c  lfs 2, 200(1)
  02213a0  fabs 3, 2
  02213a4  fsqrts 1, 1
  02213a8  fabs 5, 1
  02213ac  stfs 1, 232(1)
  02213b0  fsubs 1, 5, 3
  02213b4  stfs 1, 236(1)
  02213b8  lwz 4, 232(1)
  02213bc  lfs 1, 232(1)
  02213c0  lwz 5, 236(1)
  02213c4  fabs 4, 1
  02213c8  lfs 1, 236(1)
  02213cc  rlwimi 3, 5, 2, 30, 30
  02213d0  fsub 2, 1, 29
  02213d4  fsub 6, 1, 29
  02213d8  rlwimi 3, 4, 4, 28, 28
  02213dc  ori 4, 29, 0
  02213e0  rlwimi 4, 3, 2, 26, 28
  02213e4  slwi 3, 3, 2
  02213e8  clrldi 4, 4, 32
  02213ec  fsel 4, 2, 4, 3
  02213f0  lfsx 1, 29, 3
  02213f4  lfs 2, 4(4)
  02213f8  fsel 3, 6, 3, 5
  02213fc  fcmpu 0, 4, 29
  0221400  bt 1, 0x221408
  0221404  b 0x221528
  0221408  fsubs 5, 3, 4
  022140c  fadds 3, 3, 4
  0221410  addic 3, 1, 16
  0221414  li 7, 2
  0221418  addic 5, 3, 276
  022141c  addic 4, 3, 260
  0221420  mtctr 7
  0221424  fdivs 3, 5, 3
  0221428  fmuls 4, 3, 3
  022142c  stfs 3, 288(1)
  0221430  stfs 3, 280(1)
  0221434  stfs 3, 284(1)
  0221438  stfs 3, 276(1)
  022143c  lfs 6, 288(1)
  0221440  lfs 7, 280(1)
  0221444  lfs 8, 284(1)
  0221448  fmuls 5, 4, 4
  022144c  fmuls 7, 7, 4
  0221450  fmuls 6, 6, 5
  0221454  fmuls 3, 5, 5
  0221458  fmuls 5, 8, 5
  022145c  stfs 7, 280(1)
  0221460  fmuls 4, 6, 4
  0221464  stfs 5, 284(1)
  0221468  stfs 4, 288(1)
  022146c  lfs 4, 260(3)
  0221470  fmuls 4, 4, 3
  0221474  stfs 4, 276(3)
  0221478  lfs 4, 4(4)
  022147c  addic 4, 4, 8
  0221480  fmuls 4, 4, 3
  0221484  addic 3, 3, 8
  0221488  stfs 4, 4(5)
  022148c  addic 5, 5, 8
  0221490  bdnz 0x22146c
  0221494  li 5, 4
  0221498  ori 3, 1, 0
  022149c  mtctr 5
  02214a0  lis 4, 115
  02214a4  addic 5, 3, 276
  02214a8  addic 4, 4, 22752
  02214ac  ori 6, 5, 0
  02214b0  lfs 3, 276(3)
  02214b4  lfs 4, 0(4)
  02214b8  fmuls 3, 3, 4
  02214bc  lfs 4, 4(4)
  02214c0  addic 4, 4, 8
  02214c4  stfs 3, 276(3)
  02214c8  lfs 3, 4(5)
  02214cc  addic 3, 3, 8
  02214d0  fmuls 3, 3, 4
  02214d4  stfs 3, 4(5)
  02214d8  addic 5, 5, 8
  02214dc  bdnz 0x2214b0
  02214e0  ori 3, 1, 0
  02214e4  mtctr 7
  02214e8  lfs 3, 276(3)
  02214ec  lfs 4, 4(6)
  02214f0  fadds 3, 29, 3
  02214f4  lfs 5, 8(6)
  02214f8  addic 3, 3, 16
  02214fc  lfs 29, 12(6)
  0221500  addic 6, 6, 16
  0221504  fadds 3, 3, 4
  0221508  fadds 3, 3, 5
  022150c  fadds 29, 3, 29
  0221510  bdnz 0x2214e8
  0221514  lis 3, 34
  0221518  addi 3, 3, 4104
  022151c  lfs 3, 4(3)
  0221520  fadds 29, 29, 3
  0221524  fmadds 29, 29, 1, 2
  0221528  fmr 1, 29
  022152c  fmr 2, 30
  0221530  bl 0x5025e0
  0221534  nop
  0221538  lis 3, 119
  022153c  lfs 2, -14680(3)
  0221540  fmuls 2, 1, 2
  0221544  fmr 1, 30
  0221548  fmuls 2, 2, 31
  022154c  bl 0x502578
  0221550  nop
  0221554  stfs 1, 52(30)
  0221558  b 0x221628
  022155c  lfs 1, 100(30)
  0221560  addic 29, 1, 208
  0221564  lfs 2, 56(30)
  0221568  lfs 3, 52(30)
  022156c  ori 3, 29, 0
  0221570  fneg 3, 3
  0221574  bl 0xfe610
  0221578  nop
  022157c  lis 3, 34
  0221580  li 26, 0
  0221584  addi 27, 3, 4104
  0221588  li 3, 7
  022158c  li 4, 180
  0221590  lfs 31, 0(27)
  0221594  stw 26, 5628(28)
  0221598  stb 3, 32(31)
  022159c  sth 4, 98(30)
  02215a0  li 3, 0
  02215a4  lfs 2, 8(27)
  02215a8  li 4, 1
  02215ac  lfs 3, 136(28)
  02215b0  lwz 5, 8320(28)
  02215b4  fadds 1, 3, 2
  02215b8  stfs 1, 136(28)
  02215bc  stw 26, 152(5)
  02215c0  bl 0xb72b0
  02215c4  nop
  02215c8  li 6, -1
  02215cc  stw 26, 5616(28)
  02215d0  li 7, 1
  02215d4  ori 3, 31, 0
  02215d8  fmr 1, 31
  02215dc  li 8, 10
  02215e0  fmr 2, 31
  02215e4  sth 6, 5620(28)
  02215e8  ori 4, 29, 0
  02215ec  lfs 3, 12(27)
  02215f0  li 5, 0
  02215f4  lfs 4, 16(27)
  02215f8  li 9, 3
  02215fc  lfs 5, 20(27)
  0221600  li 10, 16
  0221604  lfs 6, 24(27)
  0221608  lfs 7, 28(27)
  022160c  std 6, 144(1)
  0221610  std 7, 160(1)
  0221614  std 7, 168(1)
  0221618  std 6, 176(1)
  022161c  std 26, 184(1)
  0221620  bl 0x10e030
  0221624  nop
  0221628  lis 29, 151
  022162c  li 3, 255
  0221630  addic 29, 29, -25376
  0221634  stb 3, 164(31)
  0221638  lwz 3, 5616(29)
  022163c  cmpw 3, 31
  0221640  bf 2, 0x2216e4
  0221644  lis 3, 119
  0221648  vspltisw 5, -1
  022164c  li 4, -14576
  0221650  lis 5, 34
  0221654  li 6, 16
  0221658  addi 5, 5, 4104
  022165c  vslw 5, 5, 5
  0221660  <unknown>
  0221664  vrefp 3, 2
  0221668  <unknown>
  022166c  vspltw 4, 4, 0
  0221670  vspltisw 7, -1
  0221674  vspltisw 8, -1
  0221678  li 3, 5628
  022167c  vspltisw 11, -1
  0221680  vslw 7, 7, 7
  0221684  vslw 8, 8, 8
  0221688  li 4, 5640
  022168c  vnmsubfp 6, 3, 2, 4
  0221690  vmaddfp 3, 3, 6, 5
  0221694  vspltisw 6, -1
  0221698  <unknown>
  022169c  li 3, 32
  02216a0  vslw 6, 6, 6
  02216a4  <unknown>
  02216a8  lbz 3, 5647(29)
  02216ac  vspltw 10, 10, 0
  02216b0  vnmsubfp 9, 3, 2, 4
  02216b4  li 5, 0
  02216b8  rlwimi 3, 5, 0, 30, 30
  02216bc  vmaddfp 3, 3, 9, 7
  02216c0  vslw 7, 11, 11
  02216c4  vnmsubfp 2, 3, 2, 4
  02216c8  vmaddfp 2, 3, 2, 6
  02216cc  vmaddfp 2, 2, 5, 8
  02216d0  vmaddfp 2, 2, 10, 7
  02216d4  vctsxs 2, 2, 0
  02216d8  vspltw 2, 2, 0
  02216dc  stvewx 2, 4, 29
  02216e0  stb 3, 5647(29)
  02216e4  lbz 3, 32(31)
  02216e8  cmpwi 3, 4
  02216ec  cmpwi 1, 3, 1
  02216f0  cmpwi 6, 3, -1
  02216f4  cmpwi 7, 3, 0
  02216f8  bt 1, 0x221720
  02216fc  bt 5, 0x22170c
  0221700  bf 25, 0x22236c
  0221704  bf 29, 0x221750
  0221708  b 0x221a18
  022170c  cmpwi 3, 2
  0221710  bf 1, 0x221c00
  0221714  cmpwi 3, 3
  0221718  bf 1, 0x22236c
  022171c  b 0x221e18
  0221720  cmpwi 3, 7
  0221724  bt 1, 0x22173c
  0221728  cmpwi 3, 5
  022172c  bf 1, 0x221f50
  0221730  cmpwi 3, 6
  0221734  bf 1, 0x22236c
  0221738  b 0x2220ec
  022173c  cmpwi 3, 8
  0221740  bf 1, 0x222118
  0221744  cmpwi 3, 9
  0221748  bf 1, 0x222324
  022174c  b 0x22236c
  0221750  li 3, 1
  0221754  li 4, 0
  0221758  lis 5, 34
  022175c  stb 3, 32(31)
  0221760  addi 5, 5, 4104
  0221764  stb 4, 96(30)
  0221768  lwz 3, 36(31)
  022176c  lis 4, 150
  0221770  addic 4, 4, -12416
  0221774  lfs 1, 36(3)
  0221778  stfs 1, 44(31)
  022177c  lfs 1, 48(30)
  0221780  lfs 2, 52(30)
  0221784  stfs 1, 32(30)
  0221788  stfs 2, 36(30)
  022178c  lwz 3, 176(4)
  0221790  lfs 1, 176(4)
  0221794  lfs 6, 24(5)
  0221798  lis 4, 16256
  022179c  fabs 3, 1
  02217a0  rlwinm 3, 3, 3, 29, 29
  02217a4  stw 4, 224(1)
  02217a8  lis 4, 115
  02217ac  addic 4, 4, 22784
  02217b0  fsubs 1, 6, 3
  02217b4  stfs 1, 228(1)
  02217b8  lfs 4, 0(5)
  02217bc  lfs 1, 224(1)
  02217c0  lwz 5, 228(1)
  02217c4  fabs 5, 1
  02217c8  lfs 1, 228(1)
  02217cc  rlwimi 3, 5, 2, 30, 30
  02217d0  fsub 2, 1, 4
  02217d4  fsub 7, 1, 4
  02217d8  ori 5, 4, 0
  02217dc  rlwimi 5, 3, 2, 27, 28
  02217e0  slwi 3, 3, 2
  02217e4  clrldi 5, 5, 32
  02217e8  lfsx 1, 4, 3
  02217ec  fsel 5, 2, 5, 3
  02217f0  lfs 2, 4(5)
  02217f4  fsel 3, 7, 3, 6
  02217f8  fcmpu 0, 5, 4
  02217fc  bt 1, 0x221804
  0221800  b 0x221924
  0221804  fsubs 6, 3, 5
  0221808  fadds 3, 3, 5
  022180c  addic 3, 1, 16
  0221810  li 7, 2
  0221814  addic 4, 3, 228
  0221818  addic 5, 3, 244
  022181c  mtctr 7
  0221820  fdivs 3, 6, 3
  0221824  fmuls 5, 3, 3
  0221828  stfs 3, 256(1)
  022182c  stfs 3, 248(1)
  0221830  stfs 3, 252(1)
  0221834  stfs 3, 244(1)
  0221838  lfs 7, 256(1)
  022183c  lfs 8, 248(1)
  0221840  lfs 9, 252(1)
  0221844  fmuls 6, 5, 5
  0221848  fmuls 8, 8, 5
  022184c  fmuls 7, 7, 6
  0221850  fmuls 3, 6, 6
  0221854  fmuls 6, 9, 6
  0221858  stfs 8, 248(1)
  022185c  fmuls 5, 7, 5
  0221860  stfs 6, 252(1)
  0221864  stfs 5, 256(1)
  0221868  lfs 5, 228(3)
  022186c  fmuls 5, 5, 3
  0221870  stfs 5, 244(3)
  0221874  lfs 5, 4(4)
  0221878  addic 3, 3, 8
  022187c  addic 4, 4, 8
  0221880  fmuls 5, 5, 3
  0221884  stfs 5, 4(5)
  0221888  addic 5, 5, 8
  022188c  bdnz 0x221868
  0221890  li 5, 4
  0221894  ori 3, 1, 0
  0221898  mtctr 5
  022189c  lis 4, 115
  02218a0  addic 5, 3, 244
  02218a4  addic 4, 4, 22752
  02218a8  ori 6, 5, 0
  02218ac  lfs 3, 244(3)
  02218b0  lfs 5, 0(4)
  02218b4  fmuls 3, 3, 5
  02218b8  lfs 5, 4(4)
  02218bc  addic 4, 4, 8
  02218c0  stfs 3, 244(3)
  02218c4  lfs 3, 4(5)
  02218c8  addic 3, 3, 8
  02218cc  fmuls 3, 3, 5
  02218d0  stfs 3, 4(5)
  02218d4  addic 5, 5, 8
  02218d8  bdnz 0x2218ac
  02218dc  ori 3, 1, 0
  02218e0  mtctr 7
  02218e4  lfs 3, 244(3)
  02218e8  fadds 3, 4, 3
  02218ec  lfs 4, 4(6)
  02218f0  addic 3, 3, 16
  02218f4  lfs 5, 8(6)
  02218f8  lfs 6, 12(6)
  02218fc  addic 6, 6, 16
  0221900  fadds 3, 3, 4
  0221904  fadds 4, 3, 5
  0221908  fadds 4, 4, 6
  022190c  bdnz 0x2218e4
  0221910  lis 3, 34
  0221914  addi 3, 3, 4104
  0221918  lfs 3, 4(3)
  022191c  fadds 4, 4, 3
  0221920  fmadds 4, 4, 1, 2
  0221924  lis 3, 34
  0221928  addi 3, 3, 4104
  022192c  lis 4, 241
  0221930  li 5, 1
  0221934  lfs 1, 16(3)
  0221938  li 3, 0
  022193c  fmuls 1, 4, 1
  0221940  stw 3, 192(30)
  0221944  stfs 1, 172(30)
  0221948  stfs 1, 176(30)
  022194c  lfs 1, 64(31)
  0221950  stfs 1, 48(30)
  0221954  lfs 1, 68(31)
  0221958  stfs 1, 52(30)
  022195c  lfs 1, 72(31)
  0221960  stfs 1, 56(30)
  0221964  lfs 1, 76(31)
  0221968  stfs 1, 60(30)
  022196c  lfs 1, 64(31)
  0221970  stfs 1, 80(30)
  0221974  lfs 1, 68(31)
  0221978  stfs 1, 84(30)
  022197c  lfs 1, 72(31)
  0221980  stfs 1, 88(30)
  0221984  lfs 1, 76(31)
  0221988  stfs 1, 92(30)
  022198c  lfs 1, 16(31)
  0221990  stfs 1, 64(30)
  0221994  lfs 1, 20(31)
  0221998  stfs 1, 68(30)
  022199c  lfs 1, 24(31)
  02219a0  stfs 1, 72(30)
  02219a4  lfs 1, 28(31)
  02219a8  stfs 1, 76(30)
  02219ac  stb 5, -11576(4)
  02219b0  stw 5, 248(30)
  02219b4  sth 5, 232(30)
  02219b8  stw 3, 304(30)
  02219bc  lbz 3, 176(31)
  02219c0  cmpwi 3, 255
  02219c4  bt 2, 0x22236c
  02219c8  lis 4, 151
  02219cc  lis 5, 161
  02219d0  addic 5, 5, -13692
  02219d4  lwz 4, -25488(4)
  02219d8  addc 3, 3, 5
  02219dc  slwi 4, 4, 4
  02219e0  clrldi 3, 3, 32
  02219e4  extsw 4, 4
  02219e8  lbzx 3, 3, 4
  02219ec  cmpwi 3, 255
  02219f0  bf 2, 0x22236c
  02219f4  li 3, 0
  02219f8  lhz 5, 52(31)
  02219fc  li 4, 9
  0221a00  ori 5, 5, 1
  0221a04  stw 3, 148(31)
  0221a08  stb 3, 49(31)
  0221a0c  stb 4, 32(31)
  0221a10  sth 5, 52(31)
  0221a14  b 0x22236c
  0221a18  ori 3, 31, 0
  0221a1c  lwz 4, 8320(29)
  0221a20  bl 0xf20f0
  0221a24  nop
  0221a28  lis 3, 241
  0221a2c  lfs 2, -12608(3)
  0221a30  fcmpu 0, 1, 2
  0221a34  cror 6, 1, 2
  0221a38  bt 6, 0x221bac
  0221a3c  lwz 3, 8324(29)
  0221a40  cmpwi 1, 3, 29
  0221a44  cmpwi 3, 50
  0221a48  cror 2, 2, 6
  0221a4c  bt 2, 0x221bac
  0221a50  lbz 3, 8356(29)
  0221a54  cmpwi 3, 0
  0221a58  bf 2, 0x221bac
  0221a5c  lis 28, 151
  0221a60  addic 28, 28, -16064
  0221a64  lbz 3, 7(28)
  0221a68  cmpwi 3, 0
  0221a6c  bt 2, 0x221a84
  0221a70  li 3, 7
  0221a74  li 4, 11017
  0221a78  bl 0x11aeec
  0221a7c  nop
  0221a80  b 0x221b64
  0221a84  lis 3, 161
  0221a88  lis 4, 34
  0221a8c  lwz 3, -2344(3)
  0221a90  extsw 3, 3
  0221a94  std 3, 344(1)
  0221a98  addi 3, 4, 4104
  0221a9c  lis 4, 114
  0221aa0  lfs 1, 36(3)
  0221aa4  lfs 2, -3056(4)
  0221aa8  lfd 3, 344(1)
  0221aac  fcfid 3, 3
  0221ab0  lis 5, 161
  0221ab4  addic 5, 5, 12
  0221ab8  frsp 3, 3
  0221abc  fadds 1, 3, 1
  0221ac0  fmuls 1, 2, 1
  0221ac4  fctiwz 1, 1
  0221ac8  stfd 1, 344(1)
  0221acc  lfs 1, 40(3)
  0221ad0  fmuls 1, 2, 1
  0221ad4  lfs 3, 44(3)
  0221ad8  lwz 3, 348(1)
  0221adc  lhz 4, 482(5)
  0221ae0  mulli 6, 4, 600
  0221ae4  fctidz 1, 1
  0221ae8  subc 7, 3, 6
  0221aec  cmpwi 1, 6, 0
  0221af0  fcfid 1, 1
  0221af4  frsp 1, 1
  0221af8  fmuls 1, 1, 3
  0221afc  fctiwz 1, 1
  0221b00  stfd 1, 344(1)
  0221b04  lwz 6, 348(1)
  0221b08  cmpw 7, 6
  0221b0c  bt 1, 0x221b14
  0221b10  bf 6, 0x221b28
  0221b14  li 3, 11002
  0221b18  li 4, 60
  0221b1c  bl 0x7b310
  0221b20  nop
  0221b24  b 0x221b64
  0221b28  lis 6, 6990
  0221b2c  ori 6, 6, 33205
  0221b30  mulhw 6, 6, 3
  0221b34  srawi 6, 6, 6
  0221b38  srwi 7, 6, 31
  0221b3c  addc 6, 6, 7
  0221b40  cmpw 6, 4
  0221b44  bf 1, 0x221b64
  0221b48  lis 4, 6990
  0221b4c  ori 4, 4, 33205
  0221b50  mulhw 3, 4, 3
  0221b54  srawi 3, 3, 6
  0221b58  srwi 4, 3, 31
  0221b5c  addc 3, 3, 4
  0221b60  sth 3, 482(5)
  0221b64  lbz 3, 7(28)
  0221b68  cmpwi 3, 0
  0221b6c  bt 2, 0x22236c
  0221b70  lis 3, 150
  0221b74  addic 3, 3, 19008
  0221b78  lwz 3, 164(3)
  0221b7c  rlwinm 3, 3, 0, 27, 27
  0221b80  cmpwi 3, 0
  0221b84  bt 2, 0x22236c
  0221b88  li 5, 2
  0221b8c  li 3, 50
  0221b90  li 4, 1
  0221b94  stb 5, 32(31)
  0221b98  bl 0xb72b0
  0221b9c  nop
  0221ba0  li 3, -1
  0221ba4  stw 3, 280(30)
  0221ba8  b 0x22236c
  0221bac  li 3, -1
  0221bb0  lis 4, 34
  0221bb4  addi 4, 4, 4104
  0221bb8  stw 3, 280(30)
  0221bbc  lwz 3, 304(30)
  0221bc0  cmpwi 3, 0
  0221bc4  lfs 1, 0(4)
  0221bc8  bt 2, 0x22236c
  0221bcc  lis 3, 34
  0221bd0  lis 5, 114
  0221bd4  addi 4, 3, 4104
  0221bd8  addic 3, 30, 304
  0221bdc  lfs 2, 12(4)
  0221be0  lfs 3, -3052(5)
  0221be4  fmuls 2, 3, 2
  0221be8  bl 0x109af0
  0221bec  nop
  0221bf0  lis 3, 150
  0221bf4  lfs 1, 304(30)
  0221bf8  stfs 1, -12528(3)
  0221bfc  b 0x22236c
  0221c00  lis 3, 34
  0221c04  lis 5, 114
  0221c08  addi 4, 3, 4104
  0221c0c  addic 3, 30, 304
  0221c10  lis 28, 16256
  0221c14  lfs 3, 12(4)
  0221c18  lfs 1, 24(4)
  0221c1c  lfs 4, -3052(5)
  0221c20  fmuls 2, 4, 3
  0221c24  bl 0x109af0
  0221c28  nop
  0221c2c  lis 4, 150
  0221c30  lwz 3, 304(30)
  0221c34  lfs 1, 304(30)
  0221c38  cmpw 3, 28
  0221c3c  stfs 1, -12528(4)
  0221c40  bf 2, 0x22236c
  0221c44  lis 3, 34
  0221c48  lfs 1, 24(31)
  0221c4c  li 4, 6
  0221c50  addi 28, 3, 4104
  0221c54  li 3, 2
  0221c58  lfs 2, 48(28)
  0221c5c  fadds 1, 1, 2
  0221c60  stfs 1, 24(31)
  0221c64  bl 0x11ccc8
  0221c68  nop
  0221c6c  li 3, 0
  0221c70  vspltisw 3, -1
  0221c74  li 4, 52
  0221c78  lis 5, 114
  0221c7c  li 6, -3056
  0221c80  stw 3, 60(30)
  0221c84  stw 3, 56(30)
  0221c88  stw 3, 52(30)
  0221c8c  stw 3, 48(30)
  0221c90  stw 3, 44(30)
  0221c94  stw 3, 40(30)
  0221c98  stw 3, 36(30)
  0221c9c  stw 3, 32(30)
  0221ca0  lfs 1, 72(31)
  0221ca4  vslw 3, 3, 3
  0221ca8  stfs 1, 40(30)
  0221cac  stfs 1, 56(30)
  0221cb0  <unknown>
  0221cb4  <unknown>
  0221cb8  lis 4, 161
  0221cbc  vspltw 2, 2, 0
  0221cc0  li 3, 276
  0221cc4  addic 4, 4, 12
  0221cc8  vmaddfp 2, 4, 2, 3
  0221ccc  vctsxs 2, 2, 0
  0221cd0  vspltw 2, 2, 0
  0221cd4  stvewx 2, 3, 30
  0221cd8  lhz 3, 680(4)
  0221cdc  cmpwi 3, 0
  0221ce0  bf 2, 0x221cf4
  0221ce4  li 3, 11004
  0221ce8  li 4, 85
  0221cec  bl 0x7b310
  0221cf0  nop
  0221cf4  li 3, 4
  0221cf8  lis 5, 119
  0221cfc  li 28, 1
  0221d00  lis 6, 119
  0221d04  stb 3, 32(31)
  0221d08  lis 4, 119
  0221d0c  lhz 3, 166(31)
  0221d10  li 27, 0
  0221d14  stw 31, 5616(29)
  0221d18  li 26, 255
  0221d1c  sth 3, 5620(29)
  0221d20  li 8, 3
  0221d24  lwz 5, -14608(5)
  0221d28  lis 3, 119
  0221d2c  stb 28, 5646(29)
  0221d30  li 7, 0
  0221d34  lwz 6, -14604(6)
  0221d38  stb 5, 5622(29)
  0221d3c  stb 6, 5623(29)
  0221d40  lis 5, 17096
  0221d44  lfs 1, -14620(4)
  0221d48  stb 6, 5624(29)
  0221d4c  stfs 1, 5628(29)
  0221d50  lis 4, 149
  0221d54  stw 27, 240(30)
  0221d58  lis 6, 149
  0221d5c  stw 26, 244(30)
  0221d60  lfs 1, -14576(3)
  0221d64  stw 5, 5636(29)
  0221d68  addic 3, 4, 5376
  0221d6c  stfs 1, 5632(29)
  0221d70  addic 4, 6, 5392
  0221d74  stb 8, 5625(29)
  0221d78  li 5, 1
  0221d7c  stb 8, 5626(29)
  0221d80  li 6, 0
  0221d84  stb 8, 5627(29)
  0221d88  stb 27, 5647(29)
  0221d8c  bl 0x47f74
  0221d90  nop
  0221d94  lis 3, 119
  0221d98  lis 4, 119
  0221d9c  lis 5, 119
  0221da0  lfs 1, -14736(3)
  0221da4  sth 27, 104(30)
  0221da8  lis 3, 119
  0221dac  stfs 1, 100(30)
  0221db0  stw 27, 108(30)
  0221db4  stw 27, 112(30)
  0221db8  stw 27, 132(30)
  0221dbc  stw 27, 128(30)
  0221dc0  stw 27, 212(30)
  0221dc4  stw 27, 216(30)
  0221dc8  stb 26, 48(31)
  0221dcc  lfs 1, -14656(4)
  0221dd0  lfs 2, -14552(5)
  0221dd4  sth 26, 50(31)
  0221dd8  li 4, -1
  0221ddc  fmuls 1, 1, 2
  0221de0  stw 27, 184(30)
  0221de4  stfs 1, 180(30)
  0221de8  lfs 1, -14652(3)
  0221dec  fmuls 1, 1, 2
  0221df0  stfs 1, 188(30)
  0221df4  lwz 3, 8320(29)
  0221df8  stw 4, 152(3)
  0221dfc  lwz 3, 36(31)
  0221e00  lfs 1, -14552(5)
  0221e04  lfs 2, 36(3)
  0221e08  fmuls 1, 2, 1
  0221e0c  stfs 1, 44(31)
  0221e10  stb 28, 8357(29)
  0221e14  b 0x22236c
  0221e18  lis 3, 34
  0221e1c  lwz 4, 304(30)
  0221e20  addi 3, 3, 4104
  0221e24  cmpwi 4, 0
  0221e28  lfs 1, 0(3)
  0221e2c  bt 2, 0x221e60
  0221e30  lis 3, 34
  0221e34  lis 5, 114
  0221e38  addi 4, 3, 4104
  0221e3c  addic 3, 30, 304
  0221e40  lfs 2, 12(4)
  0221e44  lfs 3, -3052(5)
  0221e48  fmuls 2, 3, 2
  0221e4c  bl 0x109af0
  0221e50  nop
  0221e54  lis 3, 150
  0221e58  lfs 1, 304(30)
  0221e5c  stfs 1, -12528(3)
  0221e60  lis 5, 161
  0221e64  li 6, 2
  0221e68  ori 3, 31, 0
  0221e6c  ori 4, 30, 0
  0221e70  stw 6, 2248(5)
  0221e74  bl 0x21ff90
  0221e78  lwz 3, 268(30)
  0221e7c  extsw 3, 3
  0221e80  bl 0x248c9c
  0221e84  nop
  0221e88  lhz 4, 234(30)
  0221e8c  cmpwi 4, 0
  0221e90  bt 2, 0x221f10
  0221e94  lhz 4, 232(30)
  0221e98  extsh 4, 4
  0221e9c  subfic 4, 4, 5
  0221ea0  cmpw 3, 4
  0221ea4  bf 0, 0x221f10
  0221ea8  addic 3, 30, 276
  0221eac  bl 0x4fff60
  0221eb0  nop
  0221eb4  cmpwi 3, 0
  0221eb8  bt 2, 0x221f10
  0221ebc  lwz 3, 268(30)
  0221ec0  extsw 3, 3
  0221ec4  bl 0x248d40
  0221ec8  nop
  0221ecc  cmpwi 3, 0
  0221ed0  bt 2, 0x221f10
  0221ed4  lis 3, 34
  0221ed8  li 4, 56
  0221edc  vspltisw 2, -1
  0221ee0  addi 3, 3, 4104
  0221ee4  lis 5, 114
  0221ee8  li 6, -3056
  0221eec  vslw 2, 2, 2
  0221ef0  <unknown>
  0221ef4  li 3, 276
  0221ef8  vspltw 3, 3, 0
  0221efc  <unknown>
  0221f00  vmaddfp 2, 4, 3, 2
  0221f04  vctsxs 2, 2, 0
  0221f08  vspltw 2, 2, 0
  0221f0c  stvewx 2, 3, 30
  0221f10  lhz 3, 232(30)
  0221f14  extsh 3, 3
  0221f18  cmpwi 3, 0
  0221f1c  bt 1, 0x221f34
  0221f20  lis 3, 119
  0221f24  li 4, 8
  0221f28  lwz 3, -14336(3)
  0221f2c  stw 3, 248(30)
  0221f30  stb 4, 32(31)
  0221f34  lbz 3, 5647(29)
  0221f38  clrlwi 3, 3, 31
  0221f3c  cmpwi 3, 0
  0221f40  bt 2, 0x22236c
  0221f44  li 3, 5
  0221f48  stb 3, 32(31)
  0221f4c  b 0x22236c
  0221f50  li 5, 0
  0221f54  lwz 6, 8320(29)
  0221f58  li 3, 0
  0221f5c  li 4, 1
  0221f60  stb 5, 8357(29)
  0221f64  stw 5, 152(6)
  0221f68  bl 0xb72b0
  0221f6c  nop
  0221f70  li 3, 0
  0221f74  bl 0x481d0
  0221f78  nop
  0221f7c  lhz 3, 5644(29)
  0221f80  li 4, 0
  0221f84  extsh 3, 3
  0221f88  bl 0xc8b28
  0221f8c  nop
  0221f90  li 3, 0
  0221f94  li 4, 8
  0221f98  bl 0x11ccc8
  0221f9c  nop
  0221fa0  lfs 1, 64(30)
  0221fa4  ori 3, 31, 0
  0221fa8  stfs 1, 16(31)
  0221fac  lfs 1, 68(30)
  0221fb0  stfs 1, 20(31)
  0221fb4  lfs 1, 72(30)
  0221fb8  stfs 1, 24(31)
  0221fbc  lfs 1, 76(30)
  0221fc0  stfs 1, 28(31)
  0221fc4  lfs 1, 80(30)
  0221fc8  stfs 1, 64(31)
  0221fcc  lfs 1, 84(30)
  0221fd0  lwz 4, 36(31)
  0221fd4  stfs 1, 68(31)
  0221fd8  lfs 1, 88(30)
  0221fdc  stfs 1, 72(31)
  0221fe0  lfs 1, 92(30)
  0221fe4  stfs 1, 76(31)
  0221fe8  lfs 1, 36(4)
  0221fec  stfs 1, 44(31)
  0221ff0  bl 0xf30a0
  0221ff4  nop
  0221ff8  lis 3, 165
  0221ffc  lwz 4, 252(30)
  0222000  li 5, 0
  0222004  slwi 4, 4, 7
  0222008  li 6, 1
  022200c  lwz 3, 7128(3)
  0222010  addc 3, 3, 4
  0222014  addic 4, 3, 48
  0222018  addic 7, 3, 112
  022201c  clrldi 3, 4, 32
  0222020  clrldi 4, 7, 32
  0222024  bl 0xa0c38
  0222028  nop
  022202c  lhz 3, 300(30)
  0222030  extsh 3, 3
  0222034  cmpwi 3, -1
  0222038  bt 2, 0x222074
  022203c  lis 4, 150
  0222040  sldi 5, 3, 7
  0222044  sldi 6, 3, 4
  0222048  addic 4, 4, 14176
  022204c  subc 5, 5, 6
  0222050  addc 4, 4, 5
  0222054  lwz 5, 136(4)
  0222058  cmpw 5, 31
  022205c  bf 2, 0x222074
  0222060  lbz 4, 116(4)
  0222064  cmpwi 4, 0
  0222068  bt 2, 0x222074
  022206c  bl 0x15cdb0
  0222070  nop
  0222074  li 3, -1
  0222078  lhz 4, 302(30)
  022207c  sth 3, 300(30)
  0222080  extsh 3, 4
  0222084  cmpwi 3, -1
  0222088  bt 2, 0x2220c4
  022208c  lis 4, 150
  0222090  sldi 5, 3, 7
  0222094  sldi 6, 3, 4
  0222098  addic 4, 4, 14176
  022209c  subc 5, 5, 6
  02220a0  addc 4, 4, 5
  02220a4  lwz 5, 136(4)
  02220a8  cmpw 5, 31
  02220ac  bf 2, 0x2220c4
  02220b0  lbz 4, 116(4)
  02220b4  cmpwi 4, 0
  02220b8  bt 2, 0x2220c4
  02220bc  bl 0x15cdb0
  02220c0  nop
  02220c4  li 3, -1
  02220c8  lis 6, 16253
  02220cc  li 4, 1
  02220d0  lis 5, 150
  02220d4  ori 6, 6, 28836
  02220d8  sth 3, 302(30)
  02220dc  stb 4, 32(31)
  02220e0  stw 6, 304(30)
  02220e4  stw 6, -12528(5)
  02220e8  b 0x22236c
  02220ec  lis 4, 161
  02220f0  li 5, 2
  02220f4  addic 3, 30, 248
  02220f8  stw 5, 2248(4)
  02220fc  bl 0x4fff60
  0222100  nop
  0222104  cmpwi 3, 0
  0222108  bt 2, 0x22236c
  022210c  bl 0x83950
  0222110  nop
  0222114  b 0x22236c
  0222118  lis 5, 161
  022211c  li 6, 2
  0222120  ori 3, 31, 0
  0222124  ori 4, 30, 0
  0222128  stw 6, 2248(5)
  022212c  bl 0x21ff90
  0222130  addic 3, 30, 248
  0222134  bl 0x4fff60
  0222138  nop
  022213c  cmpwi 3, 0
  0222140  bt 2, 0x22236c
  0222144  lis 3, 34
  0222148  lis 4, 114
  022214c  addi 5, 3, 4104
  0222150  addic 3, 30, 304
  0222154  lis 28, 16256
  0222158  lfs 3, 12(5)
  022215c  lfs 1, 24(5)
  0222160  lfs 4, -3052(4)
  0222164  fmuls 2, 4, 3
  0222168  bl 0x109af0
  022216c  nop
  0222170  lwz 3, 304(30)
  0222174  lis 5, 150
  0222178  lfs 1, 304(30)
  022217c  srawi 4, 3, 31
  0222180  srwi 6, 4, 1
  0222184  xor 3, 6, 3
  0222188  stfs 1, -12528(5)
  022218c  subc 3, 3, 4
  0222190  cmpw 3, 28
  0222194  bt 0, 0x22236c
  0222198  li 28, 0
  022219c  lwz 5, 8320(29)
  02221a0  li 3, 0
  02221a4  li 4, 1
  02221a8  stb 28, 8357(29)
  02221ac  stw 28, 152(5)
  02221b0  bl 0xb72b0
  02221b4  nop
  02221b8  li 3, 0
  02221bc  bl 0x481d0
  02221c0  nop
  02221c4  li 3, 0
  02221c8  li 4, 8
  02221cc  bl 0x11ccc8
  02221d0  nop
  02221d4  lhz 3, 52(31)
  02221d8  stb 28, 49(31)
  02221dc  ori 3, 3, 1
  02221e0  stw 28, 148(31)
  02221e4  sth 3, 52(31)
  02221e8  lwz 3, 256(30)
  02221ec  cmpwi 3, -1
  02221f0  bf 2, 0x222244
  02221f4  lis 3, 101
  02221f8  addic 3, 3, 20548
  02221fc  bl 0x5cd098
  0222200  nop
  0222204  lfs 1, 64(30)
  0222208  stfs 1, 16(31)
  022220c  lfs 1, 68(30)
  0222210  stfs 1, 20(31)
  0222214  lfs 1, 72(30)
  0222218  stfs 1, 24(31)
  022221c  lfs 1, 76(30)
  0222220  stfs 1, 28(31)
  0222224  lfs 1, 80(30)
  0222228  stfs 1, 64(31)
  022222c  lfs 1, 84(30)
  0222230  stfs 1, 68(31)
  0222234  lfs 1, 88(30)
  0222238  stfs 1, 72(31)
  022223c  lfs 1, 92(30)
  0222240  b 0x2222a4
  0222244  lis 4, 165
  0222248  slwi 3, 3, 7
  022224c  lwz 4, 7128(4)
  0222250  addc 3, 4, 3
  0222254  clrldi 3, 3, 32
  0222258  lfs 1, 48(3)
  022225c  stfs 1, 16(31)
  0222260  lfs 1, 52(3)
  0222264  stfs 1, 20(31)
  0222268  lfs 1, 56(3)
  022226c  stfs 1, 24(31)
  0222270  lfs 1, 60(3)
  0222274  stfs 1, 28(31)
  0222278  lwz 3, 256(30)
  022227c  slwi 3, 3, 7
  0222280  addc 3, 4, 3
  0222284  clrldi 3, 3, 32
  0222288  lfs 1, 112(3)
  022228c  stfs 1, 64(31)
  0222290  lfs 1, 116(3)
  0222294  stfs 1, 68(31)
  0222298  lfs 1, 120(3)
  022229c  stfs 1, 72(31)
  02222a0  lfs 1, 124(3)
  02222a4  ori 3, 31, 0
  02222a8  stfs 1, 76(31)
  02222ac  bl 0xf30a0
  02222b0  nop
  02222b4  lwz 3, 252(30)
  02222b8  cmpwi 3, -1
  02222bc  bf 2, 0x2222d4
  02222c0  lis 3, 101
  02222c4  addic 3, 3, 20604
  02222c8  bl 0x5cd098
  02222cc  nop
  02222d0  b 0x222304
  02222d4  lis 4, 165
  02222d8  slwi 3, 3, 7
  02222dc  li 5, 0
  02222e0  li 6, 1
  02222e4  lwz 4, 7128(4)
  02222e8  addc 3, 4, 3
  02222ec  addic 4, 3, 48
  02222f0  addic 7, 3, 112
  02222f4  clrldi 3, 4, 32
  02222f8  clrldi 4, 7, 32
  02222fc  bl 0xa0c38
  0222300  nop
  0222304  lbz 3, 176(31)
  0222308  cmpwi 3, 255
  022230c  bt 2, 0x222318
  0222310  bl 0xf1e50
  0222314  nop
  0222318  li 3, 9
  022231c  stb 3, 32(31)
  0222320  b 0x22236c
  0222324  lis 3, 34
  0222328  lwz 4, 304(30)
  022232c  addi 3, 3, 4104
  0222330  cmpwi 4, 0
  0222334  lfs 1, 0(3)
  0222338  bt 2, 0x22236c
  022233c  lis 3, 34
  0222340  lis 5, 114
  0222344  addi 4, 3, 4104
  0222348  addic 3, 30, 304
  022234c  lfs 2, 12(4)
  0222350  lfs 3, -3052(5)
  0222354  fmuls 2, 3, 2
  0222358  bl 0x109af0
  022235c  nop
  0222360  lis 3, 150
  0222364  lfs 1, 304(30)
  0222368  stfs 1, -12528(3)
  022236c  lis 4, 34
  0222370  lwz 5, 16(31)
  0222374  lfs 3, 16(31)
  0222378  lis 3, 16752
  022237c  addi 4, 4, 4104
  0222380  srawi 6, 5, 31
  0222384  srwi 7, 6, 1
  0222388  lfs 1, 28(4)
  022238c  xor 4, 7, 5
  0222390  subc 4, 4, 6
  0222394  cmpw 4, 3
  0222398  bf 0, 0x2223a4
  022239c  fmr 3, 1
  02223a0  stw 3, 16(31)
  02223a4  lis 4, 34
  02223a8  addi 4, 4, 4104
  02223ac  lfs 2, 60(4)
  02223b0  fcmpu 0, 3, 2
  02223b4  cror 6, 0, 2
  02223b8  bt 6, 0x2223c8
  02223bc  lis 4, 17532
  02223c0  fmr 3, 2
  02223c4  stw 4, 16(31)
  02223c8  lwz 4, 20(31)
  02223cc  lfs 4, 20(31)
  02223d0  srawi 5, 4, 31
  02223d4  srwi 6, 5, 1
  02223d8  xor 4, 6, 4
  02223dc  subc 4, 4, 5
  02223e0  cmpw 4, 3
  02223e4  bf 0, 0x2223f0
  02223e8  fmr 4, 1
  02223ec  stw 3, 20(31)
  02223f0  fcmpu 0, 4, 2
  02223f4  cror 6, 0, 2
  02223f8  bt 6, 0x222408
  02223fc  lis 4, 17532
  0222400  fmr 4, 2
  0222404  stw 4, 20(31)
  0222408  lwz 4, 24(31)
  022240c  lfs 5, 24(31)
  0222410  srawi 5, 4, 31
  0222414  srwi 6, 5, 1
  0222418  xor 4, 6, 4
  022241c  subc 4, 4, 5
  0222420  cmpw 4, 3
  0222424  bf 0, 0x222430
  0222428  fmr 5, 1
  022242c  stw 3, 24(31)
  0222430  fmr 1, 5
  0222434  fcmpu 0, 1, 2
  0222438  cror 6, 0, 2
  022243c  bt 6, 0x22244c
  0222440  lis 3, 17532
  0222444  fmr 1, 2
  0222448  stw 3, 24(31)
  022244c  lbz 3, 32(31)
  0222450  cmpwi 3, 4
  0222454  cmpwi 1, 3, 2
  0222458  cmpwi 6, 3, 5
  022245c  bf 2, 0x222494
  0222460  stfs 3, 128(29)
  0222464  stfs 4, 132(29)
  0222468  stfs 1, 136(29)
  022246c  lfs 1, 28(31)
  0222470  stfs 1, 140(29)
  0222474  lfs 1, 48(30)
  0222478  stfs 1, 144(29)
  022247c  lfs 1, 52(30)
  0222480  stfs 1, 148(29)
  0222484  lfs 1, 56(30)
  0222488  stfs 1, 152(29)
  022248c  lfs 1, 60(30)
  0222490  stfs 1, 156(29)
  0222494  bf 5, 0x2224e0
  0222498  bf 24, 0x2224e0
  022249c  ori 3, 31, 0
  02224a0  ori 4, 30, 0
  02224a4  bl 0x21d8f8
  02224a8  lhz 4, 300(30)
  02224ac  ori 3, 31, 0
  02224b0  extsh 4, 4
  02224b4  bl 0x15cc7c
  02224b8  nop
  02224bc  cmpwi 3, 0
  02224c0  bf 2, 0x222530
  02224c4  li 3, 0
  02224c8  li 4, 4
  02224cc  ori 5, 31, 0
  02224d0  bl 0x15d12c
  02224d4  nop
  02224d8  sth 3, 300(30)
  02224dc  b 0x222530
  02224e0  lhz 3, 300(30)
  02224e4  extsh 3, 3
  02224e8  cmpwi 3, -1
  02224ec  bt 2, 0x222528
  02224f0  lis 4, 150
  02224f4  sldi 5, 3, 7
  02224f8  sldi 6, 3, 4
  02224fc  addic 4, 4, 14176
  0222500  subc 5, 5, 6
  0222504  addc 4, 4, 5
  0222508  lwz 5, 136(4)
  022250c  cmpw 5, 31
  0222510  bf 2, 0x222528
  0222514  lbz 4, 116(4)
  0222518  cmpwi 4, 0
  022251c  bt 2, 0x222528
  0222520  bl 0x15cdb0
  0222524  nop
  0222528  li 3, -1
  022252c  sth 3, 300(30)
  0222530  ld 0, 448(1)
  0222534  mtlr 0
  0222538  lfd 29, 408(1)
  022253c  lfd 30, 416(1)
  0222540  lfd 31, 424(1)
  0222544  ld 26, 360(1)
  0222548  ld 27, 368(1)
  022254c  ld 28, 376(1)
  0222550  ld 29, 384(1)
  0222554  ld 30, 392(1)
  0222558  ld 31, 400(1)
  022255c  addi 1, 1, 432
  0222560  blr
