# game/update/moby810.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

FUN_0046cf30:   # 0x46cf30, 0x268 bytes
  046cf30  stdu 1, -192(1)
  046cf34  mflr 0
  046cf38  std 0, 208(1)
  046cf3c  stfd 30, 176(1)
  046cf40  stfd 31, 184(1)
  046cf44  std 29, 152(1)
  046cf48  ori 29, 3, 0
  046cf4c  fmr 31, 1
  046cf50  std 31, 168(1)
  046cf54  li 3, 81
  046cf58  std 30, 160(1)
  046cf5c  ori 31, 6, 0
  046cf60  std 28, 144(1)
  046cf64  ori 30, 5, 0
  046cf68  std 27, 136(1)
  046cf6c  std 26, 128(1)
  046cf70  li 28, 192
  046cf74  bl 0xefa28
  046cf78  nop
  046cf7c  ori 27, 3, 0
  046cf80  cmpwi 27, 0
  046cf84  bt 2, 0x46d164
  046cf88  addc 3, 1, 28
  046cf8c  li 4, 255
  046cf90  li 5, 1
  046cf94  li 6, 0
  046cf98  lis 7, 71
  046cf9c  std 30, 64(3)
  046cfa0  lis 28, 114
  046cfa4  std 31, 72(3)
  046cfa8  lfs 1, 68(3)
  046cfac  addi 31, 7, -12532
  046cfb0  stfs 1, 20(27)
  046cfb4  lfs 2, 20(29)
  046cfb8  lfs 3, 76(3)
  046cfbc  stfs 31, 72(27)
  046cfc0  fsubs 1, 1, 2
  046cfc4  stfs 3, 28(27)
  046cfc8  stb 4, 48(27)
  046cfcc  sth 4, 50(27)
  046cfd0  stb 5, 49(27)
  046cfd4  stb 6, 32(27)
  046cfd8  lwz 30, 120(27)
  046cfdc  lfs 2, 64(3)
  046cfe0  stfs 2, 16(27)
  046cfe4  lfs 4, 16(29)
  046cfe8  lfs 5, 72(3)
  046cfec  fsubs 2, 2, 4
  046cff0  stfs 5, 24(27)
  046cff4  stfs 1, 116(1)
  046cff8  stfs 3, 124(1)
  046cffc  lfs 3, -3064(28)
  046d000  stfs 2, 112(1)
  046d004  lfs 31, 0(31)
  046d008  stw 6, 120(1)
  046d00c  lfs 2, 4(31)
  046d010  lfs 4, 8(31)
  046d014  fmuls 1, 3, 2
  046d018  fmuls 2, 3, 4
  046d01c  bl 0xfcbe8
  046d020  nop
  046d024  lfs 2, 116(1)
  046d028  lfs 3, 112(1)
  046d02c  fmuls 4, 2, 2
  046d030  lfs 5, 120(1)
  046d034  lis 3, 151
  046d038  addic 26, 3, -25376
  046d03c  fmadds 4, 3, 3, 4
  046d040  fmadds 4, 5, 5, 4
  046d044  fsqrts 4, 4
  046d048  fdivs 6, 1, 4
  046d04c  fsub 7, 31, 4
  046d050  fsub 8, 31, 4
  046d054  fsub 9, 31, 4
  046d058  fsub 10, 4, 31
  046d05c  fsub 11, 4, 31
  046d060  fsub 4, 4, 31
  046d064  fmr 1, 31
  046d068  fmuls 3, 3, 6
  046d06c  fmuls 2, 2, 6
  046d070  fmuls 5, 5, 6
  046d074  fsel 6, 7, 31, 3
  046d078  fsel 7, 8, 31, 2
  046d07c  fsel 8, 9, 31, 5
  046d080  fsel 3, 10, 6, 3
  046d084  fsel 2, 11, 7, 2
  046d088  fsel 4, 4, 8, 5
  046d08c  stfs 3, 112(1)
  046d090  stfs 2, 116(1)
  046d094  stfs 4, 120(1)
  046d098  lfs 2, 12(31)
  046d09c  bl 0xfe4f0
  046d0a0  nop
  046d0a4  addic 4, 1, 112
  046d0a8  addic 5, 26, 656
  046d0ac  ori 3, 30, 0
  046d0b0  bl 0x1113e0
  046d0b4  nop
  046d0b8  lfs 1, 16(31)
  046d0bc  lfs 2, 20(31)
  046d0c0  lfs 3, -3064(28)
  046d0c4  fmuls 1, 3, 1
  046d0c8  fmuls 2, 3, 2
  046d0cc  bl 0xfcbe8
  046d0d0  nop
  046d0d4  stfs 1, 8(30)
  046d0d8  fmr 1, 31
  046d0dc  lfs 30, 24(31)
  046d0e0  fmr 2, 30
  046d0e4  bl 0xfe4f0
  046d0e8  nop
  046d0ec  stfs 1, 20(30)
  046d0f0  fmr 2, 30
  046d0f4  fmr 1, 31
  046d0f8  bl 0xfe4f0
  046d0fc  nop
  046d100  stfs 1, 24(30)
  046d104  fmr 1, 31
  046d108  fmr 2, 30
  046d10c  bl 0xfe4f0
  046d110  nop
  046d114  li 3, 28
  046d118  vspltisw 2, -1
  046d11c  stfs 1, 28(30)
  046d120  lis 4, 114
  046d124  li 5, -3056
  046d128  vslw 2, 2, 2
  046d12c  lvlx 3, 3, 31
  046d130  vspltw 3, 3, 0
  046d134  lvlx 4, 5, 4
  046d138  ori 3, 27, 0
  046d13c  li 4, 16
  046d140  li 5, -1
  046d144  vmaddfp 2, 4, 3, 2
  046d148  vctsxs 2, 2, 0
  046d14c  vsplth 2, 2, 1
  046d150  stvehx 2, 4, 30
  046d154  stw 29, 32(30)
  046d158  sth 5, 18(30)
  046d15c  bl 0xf31a8
  046d160  nop
  046d164  ori 3, 27, 0
  046d168  ld 0, 208(1)
  046d16c  mtlr 0
  046d170  lfd 30, 176(1)
  046d174  lfd 31, 184(1)
  046d178  ld 26, 128(1)
  046d17c  ld 27, 136(1)
  046d180  ld 28, 144(1)
  046d184  ld 29, 152(1)
  046d188  ld 30, 160(1)
  046d18c  ld 31, 168(1)
  046d190  addi 1, 1, 192
  046d194  blr

M810_0046d198:   # 0x46d198, 0x14 bytes
  046d198  lis 3, 135
  046d19c  lis 4, 1
  046d1a0  addic 3, 3, 30400
  046d1a4  stw 4, 72(3)
  046d1a8  blr

UpdateMoby_810:   # 0x46d1d0, 0x30c bytes
  046d1d0  stdu 1, -224(1)
  046d1d4  mflr 0
  046d1d8  std 0, 240(1)
  046d1dc  stfd 28, 192(1)
  046d1e0  stfd 29, 200(1)
  046d1e4  stfd 30, 208(1)
  046d1e8  stfd 31, 216(1)
  046d1ec  std 31, 184(1)
  046d1f0  lbz 4, 32(3)
  046d1f4  std 30, 176(1)
  046d1f8  ori 31, 3, 0
  046d1fc  lwz 30, 120(3)
  046d200  cmpwi 4, 0
  046d204  cmpwi 1, 4, 1
  046d208  std 29, 168(1)
  046d20c  std 28, 160(1)
  046d210  cmpwi 6, 4, -1
  046d214  bt 1, 0x46d220
  046d218  bf 25, 0x46d4ac
  046d21c  b 0x46d228
  046d220  bf 5, 0x46d2a4
  046d224  b 0x46d4ac
  046d228  lis 3, 135
  046d22c  lis 4, 135
  046d230  lwz 3, 30528(3)
  046d234  lwz 4, 30532(4)
  046d238  extsw 3, 3
  046d23c  extsw 4, 4
  046d240  std 3, 144(1)
  046d244  lfd 1, 144(1)
  046d248  std 4, 144(1)
  046d24c  fcfid 1, 1
  046d250  frsp 1, 1
  046d254  lfd 2, 144(1)
  046d258  fcfid 2, 2
  046d25c  frsp 2, 2
  046d260  bl 0xfcbe8
  046d264  nop
  046d268  lis 3, 114
  046d26c  lfs 2, -3056(3)
  046d270  fmuls 1, 1, 2
  046d274  bl 0x502758
  046d278  nop
  046d27c  stw 3, 120(30)
  046d280  bl 0xfcc68
  046d284  nop
  046d288  stfs 1, 96(30)
  046d28c  bl 0xfcc68
  046d290  nop
  046d294  li 3, 1
  046d298  stfs 1, 108(30)
  046d29c  stb 3, 32(31)
  046d2a0  b 0x46d4ac
  046d2a4  addic 3, 30, 120
  046d2a8  bl 0x4fff60
  046d2ac  nop
  046d2b0  cmpwi 3, 0
  046d2b4  bt 2, 0x46d324
  046d2b8  li 3, 0
  046d2bc  li 4, 0
  046d2c0  ori 5, 31, 0
  046d2c4  bl 0x15d12c
  046d2c8  nop
  046d2cc  lis 3, 135
  046d2d0  lis 4, 135
  046d2d4  lwz 3, 30528(3)
  046d2d8  lwz 4, 30532(4)
  046d2dc  extsw 3, 3
  046d2e0  std 3, 144(1)
  046d2e4  extsw 3, 4
  046d2e8  lfd 1, 144(1)
  046d2ec  std 3, 144(1)
  046d2f0  fcfid 1, 1
  046d2f4  frsp 1, 1
  046d2f8  lfd 2, 144(1)
  046d2fc  fcfid 2, 2
  046d300  frsp 2, 2
  046d304  bl 0xfcbe8
  046d308  nop
  046d30c  lis 3, 114
  046d310  lfs 2, -3056(3)
  046d314  fmuls 1, 1, 2
  046d318  bl 0x502758
  046d31c  nop
  046d320  stw 3, 120(30)
  046d324  lfs 1, 64(31)
  046d328  lis 3, 71
  046d32c  lfs 2, 68(31)
  046d330  stfs 1, 112(1)
  046d334  lis 28, 114
  046d338  addi 29, 3, -11856
  046d33c  lfs 1, 72(31)
  046d340  lis 3, 135
  046d344  stfs 2, 116(1)
  046d348  lfs 2, 76(31)
  046d34c  stfs 1, 120(1)
  046d350  stfs 2, 124(1)
  046d354  lfs 31, 0(29)
  046d358  lfs 2, 30512(3)
  046d35c  lfs 30, 16(31)
  046d360  fmuls 2, 2, 31
  046d364  lfs 29, 20(31)
  046d368  lfs 28, 24(31)
  046d36c  lfs 1, 96(30)
  046d370  lfs 3, -3052(28)
  046d374  fmuls 2, 2, 3
  046d378  bl 0x502578
  046d37c  nop
  046d380  lis 3, 135
  046d384  stfs 1, 96(30)
  046d388  lfs 1, 108(30)
  046d38c  lfs 2, -3052(28)
  046d390  lfs 3, 30516(3)
  046d394  fmuls 3, 3, 31
  046d398  fmuls 2, 3, 2
  046d39c  bl 0x502578
  046d3a0  nop
  046d3a4  stfs 1, 108(30)
  046d3a8  lfs 1, 4(29)
  046d3ac  lfs 2, 96(30)
  046d3b0  lfs 3, 8(29)
  046d3b4  fsubs 4, 1, 2
  046d3b8  fsubs 5, 3, 2
  046d3bc  lfs 7, 12(29)
  046d3c0  lis 3, 135
  046d3c4  fsub 6, 2, 4
  046d3c8  addic 4, 1, 128
  046d3cc  addic 5, 1, 112
  046d3d0  fsel 2, 6, 4, 2
  046d3d4  lfs 4, 16(29)
  046d3d8  addic 6, 31, 64
  046d3dc  fsub 6, 5, 2
  046d3e0  fsel 2, 6, 5, 2
  046d3e4  lfs 5, 20(29)
  046d3e8  lfs 6, 24(29)
  046d3ec  lfs 9, 30520(3)
  046d3f0  fmuls 9, 9, 31
  046d3f4  fmuls 8, 2, 2
  046d3f8  lis 3, 135
  046d3fc  fmuls 10, 8, 2
  046d400  fmuls 11, 8, 10
  046d404  fmadds 2, 10, 7, 2
  046d408  fmuls 10, 8, 11
  046d40c  fmadds 2, 11, 4, 2
  046d410  fmuls 8, 8, 10
  046d414  fmadds 2, 10, 5, 2
  046d418  fmadds 2, 8, 6, 2
  046d41c  fmuls 2, 9, 2
  046d420  stfs 2, 68(31)
  046d424  lfs 2, 108(30)
  046d428  fsubs 1, 1, 2
  046d42c  fsubs 3, 3, 2
  046d430  fsub 8, 2, 1
  046d434  fsel 1, 8, 1, 2
  046d438  lfs 2, 16(31)
  046d43c  lfs 8, 20(31)
  046d440  lfs 10, 24(31)
  046d444  fsubs 2, 2, 30
  046d448  fsubs 8, 8, 29
  046d44c  fsub 9, 3, 1
  046d450  fsel 1, 9, 3, 1
  046d454  lfs 3, 28(31)
  046d458  lfs 9, 30524(3)
  046d45c  stfs 2, 128(1)
  046d460  fmuls 9, 9, 31
  046d464  stfs 8, 132(1)
  046d468  addic 3, 30, 32
  046d46c  fmuls 11, 1, 1
  046d470  fmuls 12, 11, 1
  046d474  fmuls 13, 11, 12
  046d478  fmadds 1, 12, 7, 1
  046d47c  fsubs 7, 10, 28
  046d480  fmuls 10, 11, 13
  046d484  fmadds 1, 13, 4, 1
  046d488  stfs 7, 136(1)
  046d48c  stfs 3, 140(1)
  046d490  fmuls 2, 11, 10
  046d494  fmadds 1, 10, 5, 1
  046d498  fmadds 1, 2, 6, 1
  046d49c  fmuls 1, 9, 1
  046d4a0  stfs 1, 64(31)
  046d4a4  bl 0x112900
  046d4a8  nop
  046d4ac  ld 0, 240(1)
  046d4b0  mtlr 0
  046d4b4  lfd 28, 192(1)
  046d4b8  lfd 29, 200(1)
  046d4bc  lfd 30, 208(1)
  046d4c0  lfd 31, 216(1)
  046d4c4  ld 28, 160(1)
  046d4c8  ld 29, 168(1)
  046d4cc  ld 30, 176(1)
  046d4d0  ld 31, 184(1)
  046d4d4  addi 1, 1, 224
  046d4d8  blr
