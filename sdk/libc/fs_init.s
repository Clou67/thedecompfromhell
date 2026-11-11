# sdk/libc/fs_init.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

_fs_initialize:   # 0x5cffa8, 0x64 bytes
  05cffa8  lwz 8, -24336(2)
  05cffac  li 9, 253
  05cffb0  li 0, 0
  05cffb4  mtctr 9
  05cffb8  li 11, 2
  05cffbc  li 9, 1
  05cffc0  li 10, 0
  05cffc4  li 5, -1
  05cffc8  addi 6, 8, 1024
  05cffcc  li 7, 0
  05cffd0  stw 9, 4(8)
  05cffd4  stw 11, 8(8)
  05cffd8  stw 0, 1032(8)
  05cffdc  stw 0, 0(8)
  05cffe0  stw 0, 1024(8)
  05cffe4  stw 0, 1028(8)
  05cffe8  add 9, 10, 8
  05cffec  add 11, 10, 6
  05cfff0  clrldi 9, 9, 32
  05cfff4  clrldi 11, 11, 32
  05cfff8  addi 10, 10, 4
  05cfffc  stw 5, 12(9)
  05d0000  stw 7, 12(11)
  05d0004  bdnz+ 0x5cffe8
  05d0008  blr

FUN_005d000c:   # 0x5d000c, 0x4 bytes
  05d000c  blr

_put_fd:   # 0x5d0010, 0x60 bytes
  05d0010  stdu 1, -144(1)
  05d0014  mflr 0
  05d0018  std 29, 120(1)
  05d001c  mr 29, 3
  05d0020  li 3, 4
  05d0024  std 0, 160(1)
  05d0028  bl 0x5cbbec
  05d002c  nop
  05d0030  cmplwi 7, 29, 255
  05d0034  slwi 0, 29, 2
  05d0038  li 3, 4
  05d003c  extsw 11, 0
  05d0040  bt 29, 0x5d0054
  05d0044  lwz 9, -24336(2)
  05d0048  li 0, -1
  05d004c  li 3, 4
  05d0050  stwx 0, 9, 11
  05d0054  bl 0x5cbb70
  05d0058  nop
  05d005c  ld 0, 160(1)
  05d0060  ld 29, 120(1)
  05d0064  mtlr 0
  05d0068  addi 1, 1, 144
  05d006c  blr

_get_fd:   # 0x5d0070, 0xd0 bytes
  05d0070  stdu 1, -144(1)
  05d0074  mflr 0
  05d0078  std 29, 120(1)
  05d007c  mr 29, 3
  05d0080  li 3, 4
  05d0084  std 30, 128(1)
  05d0088  std 31, 136(1)
  05d008c  std 0, 160(1)
  05d0090  mr 30, 4
  05d0094  bl 0x5cbbec
  05d0098  nop
  05d009c  lwz 10, -24336(2)
  05d00a0  li 0, 256
  05d00a4  li 31, 0
  05d00a8  mr 11, 10
  05d00ac  mtctr 0
  05d00b0  b 0x5d00bc
  05d00b4  addi 31, 31, 1
  05d00b8  bdz- 0x5d0110
  05d00bc  clrldi 9, 11, 32
  05d00c0  addi 11, 11, 4
  05d00c4  lwz 0, 0(9)
  05d00c8  cmpwi 7, 0, -1
  05d00cc  bf 30, 0x5d00b4
  05d00d0  slwi 0, 31, 2
  05d00d4  li 3, 4
  05d00d8  extsw 0, 0
  05d00dc  add 9, 0, 10
  05d00e0  stwx 29, 10, 0
  05d00e4  stw 30, 1024(9)
  05d00e8  bl 0x5cbb70
  05d00ec  nop
  05d00f0  ld 0, 160(1)
  05d00f4  ld 29, 120(1)
  05d00f8  extsw 3, 31
  05d00fc  ld 30, 128(1)
  05d0100  ld 31, 136(1)
  05d0104  mtlr 0
  05d0108  addi 1, 1, 144
  05d010c  blr
  05d0110  li 3, 4
  05d0114  li 31, -1
  05d0118  bl 0x5cbb70
  05d011c  nop
  05d0120  ld 0, 160(1)
  05d0124  ld 29, 120(1)
  05d0128  extsw 3, 31
  05d012c  ld 30, 128(1)
  05d0130  ld 31, 136(1)
  05d0134  mtlr 0
  05d0138  addi 1, 1, 144
  05d013c  blr
