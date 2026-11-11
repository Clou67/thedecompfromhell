# game/update/moby1672.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1672_002aaf9c:   # 0x2aaf9c, 0x14 bytes
  02aaf9c  lis 3, 123
  02aafa0  lis 4, 1
  02aafa4  addic 3, 3, 28900
  02aafa8  stw 4, 72(3)
  02aafac  blr

UpdateMoby_1672:   # 0x2aafb0, 0x4 bytes
  02aafb0  blr

M1672_002aafb4:   # 0x2aafb4, 0x14 bytes
  02aafb4  lis 3, 123
  02aafb8  lis 4, 1
  02aafbc  addic 3, 3, 29012
  02aafc0  stw 4, 72(3)
  02aafc4  blr

M1672_002aafc8:   # 0x2aafc8, 0x188 bytes
  02aafc8  stdu 1, -288(1)
  02aafcc  mflr 0
  02aafd0  std 0, 304(1)
  02aafd4  stfd 24, 224(1)
  02aafd8  stfd 25, 232(1)
  02aafdc  stfd 26, 240(1)
  02aafe0  stfd 27, 248(1)
  02aafe4  stfd 28, 256(1)
  02aafe8  stfd 29, 264(1)
  02aafec  stfd 30, 272(1)
  02aaff0  stfd 31, 280(1)
  02aaff4  lis 11, -16948
  02aaff8  li 10, 288
  02aaffc  ori 11, 11, 52429
  02ab000  addc 10, 1, 10
  02ab004  std 30, 208(1)
  02ab008  std 26, 176(1)
  02ab00c  lis 12, 15820
  02ab010  li 26, 0
  02ab014  std 31, 216(1)
  02ab018  std 29, 200(1)
  02ab01c  std 28, 192(1)
  02ab020  std 27, 184(1)
  02ab024  li 30, 1
  02ab028  ori 27, 1, 0
  02ab02c  std 3, 48(10)
  02ab030  ori 28, 7, 0
  02ab034  std 4, 56(10)
  02ab038  ori 3, 12, 52429
  02ab03c  std 5, 64(10)
  02ab040  ori 29, 8, 0
  02ab044  std 6, 72(10)
  02ab048  ori 31, 9, 0
  02ab04c  stw 11, 144(1)
  02ab050  stw 11, 148(1)
  02ab054  stw 26, 152(1)
  02ab058  stw 3, 156(1)
  02ab05c  stw 3, 160(1)
  02ab060  lfs 25, 52(10)
  02ab064  lfs 27, 60(10)
  02ab068  lfs 29, 68(10)
  02ab06c  lfs 31, 76(10)
  02ab070  lfs 24, 48(10)
  02ab074  lfs 26, 56(10)
  02ab078  lfs 28, 64(10)
  02ab07c  lfs 30, 72(10)
  02ab080  lfs 1, 144(27)
  02ab084  stfs 24, 112(1)
  02ab088  addic 3, 1, 112
  02ab08c  fadds 2, 26, 1
  02ab090  stfs 25, 116(1)
  02ab094  fadds 1, 30, 1
  02ab098  stfs 27, 124(1)
  02ab09c  stfs 28, 128(1)
  02ab0a0  addic 4, 1, 128
  02ab0a4  stfs 29, 132(1)
  02ab0a8  ori 5, 28, 0
  02ab0ac  stfs 31, 140(1)
  02ab0b0  ori 6, 29, 0
  02ab0b4  li 7, 0
  02ab0b8  stfs 2, 120(1)
  02ab0bc  stfs 1, 136(1)
  02ab0c0  bl 0x57820
  02ab0c4  nop
  02ab0c8  cmpwi 3, 0
  02ab0cc  bt 2, 0x2ab0f4
  02ab0d0  lis 3, 161
  02ab0d4  addic 3, 3, 2368
  02ab0d8  lwz 3, 24(3)
  02ab0dc  cmpwi 3, 0
  02ab0e0  bt 2, 0x2ab0ec
  02ab0e4  cmpw 3, 31
  02ab0e8  bt 2, 0x2ab104
  02ab0ec  li 30, 0
  02ab0f0  b 0x2ab104
  02ab0f4  addic 26, 26, 1
  02ab0f8  addic 27, 27, 4
  02ab0fc  cmpwi 26, 5
  02ab100  bt 0, 0x2ab080
  02ab104  ori 3, 30, 0
  02ab108  ld 0, 304(1)
  02ab10c  mtlr 0
  02ab110  lfd 24, 224(1)
  02ab114  lfd 25, 232(1)
  02ab118  lfd 26, 240(1)
  02ab11c  lfd 27, 248(1)
  02ab120  lfd 28, 256(1)
  02ab124  lfd 29, 264(1)
  02ab128  lfd 30, 272(1)
  02ab12c  lfd 31, 280(1)
  02ab130  ld 26, 176(1)
  02ab134  ld 27, 184(1)
  02ab138  ld 28, 192(1)
  02ab13c  ld 29, 200(1)
  02ab140  ld 30, 208(1)
  02ab144  ld 31, 216(1)
  02ab148  addi 1, 1, 288
  02ab14c  blr
