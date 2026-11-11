# game/update/moby778.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M778_004598f8:   # 0x4598f8, 0x14 bytes
  04598f8  lis 3, 135
  04598fc  lis 4, 1
  0459900  addic 3, 3, 14604
  0459904  stw 4, 72(3)
  0459908  blr

UpdateMoby_778:   # 0x459950, 0x32c bytes
  0459950  stdu 1, -320(1)
  0459954  mflr 0
  0459958  std 0, 336(1)
  045995c  stfd 16, 192(1)
  0459960  stfd 17, 200(1)
  0459964  stfd 18, 208(1)
  0459968  stfd 19, 216(1)
  045996c  stfd 20, 224(1)
  0459970  stfd 21, 232(1)
  0459974  stfd 22, 240(1)
  0459978  stfd 23, 248(1)
  045997c  stfd 24, 256(1)
  0459980  stfd 25, 264(1)
  0459984  stfd 26, 272(1)
  0459988  stfd 27, 280(1)
  045998c  stfd 28, 288(1)
  0459990  stfd 29, 296(1)
  0459994  stfd 30, 304(1)
  0459998  stfd 31, 312(1)
  045999c  std 31, 184(1)
  04599a0  ori 31, 3, 0
  04599a4  std 29, 168(1)
  04599a8  lis 4, 1
  04599ac  li 5, 0
  04599b0  std 30, 176(1)
  04599b4  std 28, 160(1)
  04599b8  lwz 29, 120(31)
  04599bc  bl 0x10675c
  04599c0  nop
  04599c4  li 4, 255
  04599c8  ori 30, 3, 0
  04599cc  cmpwi 30, 0
  04599d0  stb 4, 164(31)
  04599d4  bt 2, 0x459c1c
  04599d8  lis 3, 70
  04599dc  lwz 4, 44(30)
  04599e0  li 30, 0
  04599e4  addi 3, 3, -26352
  04599e8  cmpwi 4, 0
  04599ec  lfs 17, 0(3)
  04599f0  bf 1, 0x459c1c
  04599f4  lwz 3, 4(29)
  04599f8  lwz 4, 0(29)
  04599fc  subc 3, 3, 4
  0459a00  addic 3, 3, 1
  0459a04  extsw 3, 3
  0459a08  bl 0xfc620
  0459a0c  nop
  0459a10  li 3, 0
  0459a14  li 4, 0
  0459a18  ori 5, 31, 0
  0459a1c  bl 0x15d12c
  0459a20  nop
  0459a24  lis 3, 70
  0459a28  ori 29, 30, 0
  0459a2c  addi 3, 3, -26352
  0459a30  lfs 18, 4(3)
  0459a34  lfs 19, 8(3)
  0459a38  lfs 20, 12(3)
  0459a3c  lfs 21, 16(3)
  0459a40  lfs 22, 20(3)
  0459a44  lfs 23, 24(3)
  0459a48  lfs 24, 28(3)
  0459a4c  lfs 25, 32(3)
  0459a50  lfs 26, 36(3)
  0459a54  lfs 27, 40(3)
  0459a58  lfs 28, 44(3)
  0459a5c  lfs 29, 48(3)
  0459a60  lfs 30, 52(3)
  0459a64  lfs 31, 56(3)
  0459a68  lfs 1, 16(31)
  0459a6c  lfs 2, 24(31)
  0459a70  fadds 1, 1, 30
  0459a74  stw 30, 124(1)
  0459a78  fadds 2, 2, 31
  0459a7c  lfs 3, 20(31)
  0459a80  stfs 3, 116(1)
  0459a84  stfs 1, 112(1)
  0459a88  stfs 2, 120(1)
  0459a8c  bl 0xfcc68
  0459a90  nop
  0459a94  fadds 1, 1, 18
  0459a98  fsubs 2, 19, 1
  0459a9c  fsubs 3, 20, 1
  0459aa0  fsub 4, 1, 2
  0459aa4  fsel 1, 4, 2, 1
  0459aa8  fsub 2, 3, 1
  0459aac  fsel 3, 2, 3, 1
  0459ab0  fmr 1, 25
  0459ab4  fmr 2, 26
  0459ab8  fmuls 4, 3, 3
  0459abc  fmuls 5, 4, 3
  0459ac0  fmuls 6, 4, 5
  0459ac4  fmadds 3, 5, 21, 3
  0459ac8  fmuls 5, 4, 6
  0459acc  fmadds 3, 6, 22, 3
  0459ad0  fmuls 4, 4, 5
  0459ad4  fmadds 3, 5, 23, 3
  0459ad8  fmadds 16, 4, 24, 3
  0459adc  bl 0xfcbe8
  0459ae0  nop
  0459ae4  lis 28, 114
  0459ae8  lfs 2, -3052(28)
  0459aec  fmuls 1, 1, 2
  0459af0  fmuls 1, 1, 16
  0459af4  stfs 1, 128(1)
  0459af8  bl 0xfcc68
  0459afc  nop
  0459b00  fsubs 2, 19, 1
  0459b04  fsubs 3, 20, 1
  0459b08  fsub 4, 1, 2
  0459b0c  fsel 1, 4, 2, 1
  0459b10  fsub 2, 3, 1
  0459b14  fsel 3, 2, 3, 1
  0459b18  fmr 1, 25
  0459b1c  fmr 2, 26
  0459b20  fmuls 4, 3, 3
  0459b24  fmuls 5, 4, 3
  0459b28  fmuls 6, 4, 5
  0459b2c  fmadds 3, 5, 21, 3
  0459b30  fmuls 5, 4, 6
  0459b34  fmadds 3, 6, 22, 3
  0459b38  fmuls 4, 4, 5
  0459b3c  fmadds 3, 5, 23, 3
  0459b40  fmadds 16, 4, 24, 3
  0459b44  bl 0xfcbe8
  0459b48  nop
  0459b4c  lfs 2, -3052(28)
  0459b50  stw 30, 136(1)
  0459b54  fmuls 3, 1, 2
  0459b58  fmr 1, 17
  0459b5c  fmr 2, 26
  0459b60  fmuls 3, 3, 16
  0459b64  stfs 3, 132(1)
  0459b68  bl 0xfcbe8
  0459b6c  nop
  0459b70  lfs 2, -3052(28)
  0459b74  fmuls 3, 1, 2
  0459b78  fmr 1, 27
  0459b7c  fmr 2, 28
  0459b80  stfs 3, 136(1)
  0459b84  bl 0xfcbe8
  0459b88  nop
  0459b8c  li 3, 45
  0459b90  fmr 16, 1
  0459b94  li 4, 60
  0459b98  bl 0xfe484
  0459b9c  nop
  0459ba0  extsw 3, 3
  0459ba4  lis 5, 8319
  0459ba8  std 3, 144(1)
  0459bac  lis 3, 114
  0459bb0  lis 6, 39
  0459bb4  addic 4, 1, 128
  0459bb8  ori 5, 5, 32639
  0459bbc  lfs 2, -3056(3)
  0459bc0  lfd 1, 144(1)
  0459bc4  addic 3, 1, 112
  0459bc8  fcfid 3, 1
  0459bcc  ori 6, 6, 10023
  0459bd0  fmr 1, 16
  0459bd4  frsp 3, 3
  0459bd8  fadds 3, 3, 29
  0459bdc  fmuls 2, 2, 3
  0459be0  fctiwz 2, 2
  0459be4  stfd 2, 144(1)
  0459be8  lwz 8, 148(1)
  0459bec  extsw 8, 8
  0459bf0  bl 0x126dd8
  0459bf4  nop
  0459bf8  addic 29, 29, 1
  0459bfc  cmpwi 29, 150
  0459c00  bt 0, 0x459a68
  0459c04  ori 3, 31, 0
  0459c08  bl 0x459c80
  0459c0c  nop
  0459c10  ori 3, 31, 0
  0459c14  bl 0xefb38
  0459c18  nop
  0459c1c  ld 0, 336(1)
  0459c20  mtlr 0
  0459c24  lfd 16, 192(1)
  0459c28  lfd 17, 200(1)
  0459c2c  lfd 18, 208(1)
  0459c30  lfd 19, 216(1)
  0459c34  lfd 20, 224(1)
  0459c38  lfd 21, 232(1)
  0459c3c  lfd 22, 240(1)
  0459c40  lfd 23, 248(1)
  0459c44  lfd 24, 256(1)
  0459c48  lfd 25, 264(1)
  0459c4c  lfd 26, 272(1)
  0459c50  lfd 27, 280(1)
  0459c54  lfd 28, 288(1)
  0459c58  lfd 29, 296(1)
  0459c5c  lfd 30, 304(1)
  0459c60  lfd 31, 312(1)
  0459c64  ld 28, 160(1)
  0459c68  ld 29, 168(1)
  0459c6c  ld 30, 176(1)
  0459c70  ld 31, 184(1)
  0459c74  addi 1, 1, 320
  0459c78  blr

M778_00459c80:   # 0x459c80, 0xcc bytes
  0459c80  stdu 1, -128(1)
  0459c84  mflr 0
  0459c88  std 0, 144(1)
  0459c8c  std 31, 120(1)
  0459c90  ori 31, 3, 0
  0459c94  std 30, 112(1)
  0459c98  li 3, 779
  0459c9c  bl 0xefa28
  0459ca0  nop
  0459ca4  ori 30, 3, 0
  0459ca8  cmpwi 30, 0
  0459cac  bt 2, 0x459d30
  0459cb0  li 3, 32
  0459cb4  li 4, 1
  0459cb8  li 5, 0
  0459cbc  li 6, 255
  0459cc0  stb 3, 48(30)
  0459cc4  stb 4, 49(30)
  0459cc8  stb 5, 32(30)
  0459ccc  lfs 1, 16(31)
  0459cd0  li 5, -1
  0459cd4  stfs 1, 16(30)
  0459cd8  lfs 1, 20(31)
  0459cdc  lwz 4, 120(30)
  0459ce0  stfs 1, 20(30)
  0459ce4  lfs 1, 24(31)
  0459ce8  stfs 1, 24(30)
  0459cec  lfs 1, 28(31)
  0459cf0  sth 6, 50(30)
  0459cf4  stfs 1, 28(30)
  0459cf8  lfs 1, 64(31)
  0459cfc  ld 3, 56(31)
  0459d00  stfs 1, 64(30)
  0459d04  lfs 1, 68(31)
  0459d08  std 3, 56(30)
  0459d0c  stfs 1, 68(30)
  0459d10  lfs 1, 72(31)
  0459d14  ori 3, 30, 0
  0459d18  stfs 1, 72(30)
  0459d1c  lfs 1, 76(31)
  0459d20  stfs 1, 76(30)
  0459d24  stw 5, 0(4)
  0459d28  bl 0xf31a8
  0459d2c  nop
  0459d30  ori 3, 30, 0
  0459d34  ld 0, 144(1)
  0459d38  mtlr 0
  0459d3c  ld 30, 112(1)
  0459d40  ld 31, 120(1)
  0459d44  addi 1, 1, 128
  0459d48  blr
