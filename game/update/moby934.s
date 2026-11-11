# game/update/moby934.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

FUN_004bfdf8:   # 0x4bfdf8, 0x128 bytes
  04bfdf8  stdu 1, -176(1)
  04bfdfc  mflr 0
  04bfe00  std 0, 192(1)
  04bfe04  stfd 31, 168(1)
  04bfe08  std 30, 152(1)
  04bfe0c  ori 30, 3, 0
  04bfe10  std 31, 160(1)
  04bfe14  li 3, 933
  04bfe18  std 29, 144(1)
  04bfe1c  std 28, 136(1)
  04bfe20  std 27, 128(1)
  04bfe24  std 26, 120(1)
  04bfe28  ori 31, 4, 0
  04bfe2c  bl 0xefa28
  04bfe30  nop
  04bfe34  ori 29, 3, 0
  04bfe38  cmpwi 29, 0
  04bfe3c  bt 2, 0x4bfef0
  04bfe40  lwz 26, 120(29)
  04bfe44  li 28, 0
  04bfe48  lis 3, 76
  04bfe4c  lis 4, -16512
  04bfe50  addi 27, 3, -540
  04bfe54  stw 30, 0(26)
  04bfe58  stw 28, 8(26)
  04bfe5c  stw 28, 12(26)
  04bfe60  stw 4, 4(26)
  04bfe64  lfs 1, 0(27)
  04bfe68  lfs 2, 4(27)
  04bfe6c  bl 0xfcbe8
  04bfe70  nop
  04bfe74  stfs 1, 16(26)
  04bfe78  lfs 31, 8(27)
  04bfe7c  lfs 2, 12(27)
  04bfe80  fmr 1, 31
  04bfe84  bl 0xfcbe8
  04bfe88  nop
  04bfe8c  stfs 1, 20(26)
  04bfe90  fmr 2, 31
  04bfe94  lfs 1, 16(27)
  04bfe98  bl 0xfcbe8
  04bfe9c  nop
  04bfea0  stfs 1, 24(26)
  04bfea4  lfs 1, 0(31)
  04bfea8  li 4, 255
  04bfeac  li 5, 1
  04bfeb0  stfs 1, 16(29)
  04bfeb4  lfs 1, 4(31)
  04bfeb8  ori 3, 29, 0
  04bfebc  stfs 1, 20(29)
  04bfec0  lfs 1, 8(31)
  04bfec4  stfs 1, 24(29)
  04bfec8  lfs 1, 12(31)
  04bfecc  sth 4, 50(29)
  04bfed0  stfs 1, 28(29)
  04bfed4  lfs 1, 72(30)
  04bfed8  stb 4, 48(29)
  04bfedc  stfs 1, 72(29)
  04bfee0  stb 5, 49(29)
  04bfee4  stb 28, 32(29)
  04bfee8  bl 0xf31a8
  04bfeec  nop
  04bfef0  ori 3, 29, 0
  04bfef4  ld 0, 192(1)
  04bfef8  mtlr 0
  04bfefc  lfd 31, 168(1)
  04bff00  ld 26, 120(1)
  04bff04  ld 27, 128(1)
  04bff08  ld 28, 136(1)
  04bff0c  ld 29, 144(1)
  04bff10  ld 30, 152(1)
  04bff14  ld 31, 160(1)
  04bff18  addi 1, 1, 176
  04bff1c  blr

FUN_004bff20:   # 0x4bff20, 0xc bytes
  04bff20  li 4, 1
  04bff24  stb 4, 32(3)
  04bff28  blr

M934_004bff2c:   # 0x4bff2c, 0x14 bytes
  04bff2c  lis 3, 143
  04bff30  lis 4, 1
  04bff34  addic 3, 3, 19164
  04bff38  stw 4, 72(3)
  04bff3c  blr

UpdateMoby_934:   # 0x4bff60, 0x290 bytes
  04bff60  stdu 1, -240(1)
  04bff64  mflr 0
  04bff68  std 0, 256(1)
  04bff6c  stfd 30, 224(1)
  04bff70  stfd 31, 232(1)
  04bff74  std 29, 200(1)
  04bff78  std 31, 216(1)
  04bff7c  lwz 29, 120(3)
  04bff80  ori 31, 3, 0
  04bff84  std 30, 208(1)
  04bff88  std 28, 192(1)
  04bff8c  cmpwi 29, 0
  04bff90  bf 2, 0x4bffa4
  04bff94  ori 3, 31, 0
  04bff98  bl 0xefb38
  04bff9c  nop
  04bffa0  b 0x4c01c8
  04bffa4  lbz 3, 32(31)
  04bffa8  cmpwi 3, 0
  04bffac  bf 2, 0x4c01c8
  04bffb0  lis 3, 76
  04bffb4  lfs 1, 64(31)
  04bffb8  addi 30, 3, -192
  04bffbc  lis 3, 114
  04bffc0  lfs 2, 0(30)
  04bffc4  lfs 3, -3052(3)
  04bffc8  fmuls 2, 3, 2
  04bffcc  bl 0x502578
  04bffd0  nop
  04bffd4  stfs 1, 64(31)
  04bffd8  lfs 1, 16(31)
  04bffdc  lfs 2, 0(29)
  04bffe0  fadds 1, 1, 2
  04bffe4  lfs 2, 20(31)
  04bffe8  lfs 3, 24(31)
  04bffec  lfs 4, 28(31)
  04bfff0  addic 28, 1, 144
  04bfff4  ori 4, 31, 0
  04bfff8  ori 3, 28, 0
  04bfffc  li 5, 1
  04c0000  ori 7, 29, 0
  04c0004  stfs 1, 128(1)
  04c0008  lfs 1, 4(29)
  04c000c  fadds 1, 2, 1
  04c0010  stfs 1, 132(1)
  04c0014  lfs 1, 8(29)
  04c0018  stfs 4, 140(1)
  04c001c  fadds 1, 3, 1
  04c0020  stfs 1, 136(1)
  04c0024  lfs 31, 4(30)
  04c0028  fmr 1, 31
  04c002c  bl 0x10581c
  04c0030  nop
  04c0034  addic 30, 31, 16
  04c0038  lhz 5, 166(31)
  04c003c  addic 4, 1, 128
  04c0040  ori 3, 30, 0
  04c0044  sth 5, 170(1)
  04c0048  li 5, 0
  04c004c  ori 6, 31, 0
  04c0050  ori 7, 28, 0
  04c0054  bl 0x57820
  04c0058  nop
  04c005c  cmpwi 3, 0
  04c0060  bf 2, 0x4c00a0
  04c0064  lis 3, 76
  04c0068  li 5, 0
  04c006c  addi 4, 3, -192
  04c0070  ori 3, 30, 0
  04c0074  ori 6, 31, 0
  04c0078  lfs 1, 8(4)
  04c007c  bl 0x59e20
  04c0080  nop
  04c0084  cmpwi 3, 0
  04c0088  bf 2, 0x4c00a0
  04c008c  addic 3, 29, 56
  04c0090  bl 0x4fff60
  04c0094  nop
  04c0098  cmpwi 3, 0
  04c009c  bt 2, 0x4c0158
  04c00a0  lis 3, 161
  04c00a4  addic 3, 3, 2368
  04c00a8  lwz 3, 24(3)
  04c00ac  cmpwi 3, 0
  04c00b0  bt 2, 0x4c0158
  04c00b4  lwz 4, 60(29)
  04c00b8  cmpw 3, 4
  04c00bc  bt 2, 0x4c0158
  04c00c0  lis 4, 76
  04c00c4  lhz 3, 166(3)
  04c00c8  addi 4, 4, -192
  04c00cc  cmpwi 3, 78
  04c00d0  lfs 30, 12(4)
  04c00d4  bt 2, 0x4c0110
  04c00d8  lis 4, 76
  04c00dc  fmr 1, 30
  04c00e0  li 7, 0
  04c00e4  fmr 2, 31
  04c00e8  addi 5, 4, -192
  04c00ec  ori 3, 31, 0
  04c00f0  ori 4, 30, 0
  04c00f4  li 6, 1
  04c00f8  li 9, 0
  04c00fc  lfs 3, 16(5)
  04c0100  li 10, 1
  04c0104  std 7, 112(1)
  04c0108  bl 0x105870
  04c010c  nop
  04c0110  lis 3, 76
  04c0114  fmr 1, 30
  04c0118  ori 4, 30, 0
  04c011c  addi 5, 3, -192
  04c0120  ori 3, 31, 0
  04c0124  li 6, -1
  04c0128  lfs 2, 20(5)
  04c012c  bl 0x10fb28
  04c0130  nop
  04c0134  li 3, 0
  04c0138  li 4, 0
  04c013c  ori 5, 31, 0
  04c0140  bl 0x15d12c
  04c0144  nop
  04c0148  ori 3, 31, 0
  04c014c  bl 0xefb38
  04c0150  nop
  04c0154  b 0x4c01c8
  04c0158  lfs 1, 128(1)
  04c015c  lis 3, 161
  04c0160  lfs 2, 132(1)
  04c0164  lis 4, 21845
  04c0168  stfs 1, 16(31)
  04c016c  lfs 1, 136(1)
  04c0170  stfs 2, 20(31)
  04c0174  ori 4, 4, 21846
  04c0178  lfs 2, 140(1)
  04c017c  stfs 1, 24(31)
  04c0180  stfs 2, 28(31)
  04c0184  lwz 3, 1808(3)
  04c0188  mulhw 4, 4, 3
  04c018c  srwi 5, 4, 31
  04c0190  addc 4, 4, 5
  04c0194  addc 5, 4, 4
  04c0198  addc 4, 4, 5
  04c019c  subc 3, 3, 4
  04c01a0  cmpwi 3, 0
  04c01a4  bf 2, 0x4c01c8
  04c01a8  lis 4, 76
  04c01ac  ori 3, 31, 0
  04c01b0  addi 5, 4, -192
  04c01b4  li 4, 0
  04c01b8  lfs 1, 24(5)
  04c01bc  lfs 2, 28(5)
  04c01c0  bl 0x1314c8
  04c01c4  nop
  04c01c8  ld 0, 256(1)
  04c01cc  mtlr 0
  04c01d0  lfd 30, 224(1)
  04c01d4  lfd 31, 232(1)
  04c01d8  ld 28, 192(1)
  04c01dc  ld 29, 200(1)
  04c01e0  ld 30, 208(1)
  04c01e4  ld 31, 216(1)
  04c01e8  addi 1, 1, 240
  04c01ec  blr
