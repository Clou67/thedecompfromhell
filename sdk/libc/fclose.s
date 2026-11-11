# sdk/libc/fclose.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

fclose:   # 0x5c4f10, 0x14c bytes
  05c4f10  stdu 1, -160(1)
  05c4f14  mflr 0
  05c4f18  std 28, 128(1)
  05c4f1c  std 0, 176(1)
  05c4f20  lhz 0, 0(3)
  05c4f24  clrldi 28, 3, 32
  05c4f28  std 29, 136(1)
  05c4f2c  clrlwi 0, 0, 30
  05c4f30  std 31, 152(1)
  05c4f34  cmpwi 7, 0, 0
  05c4f38  std 27, 120(1)
  05c4f3c  std 30, 144(1)
  05c4f40  mr 31, 3
  05c4f44  mr 29, 3
  05c4f48  bf 30, 0x5c4f78
  05c4f4c  li 30, -1
  05c4f50  ld 0, 176(1)
  05c4f54  extsw 3, 30
  05c4f58  ld 27, 120(1)
  05c4f5c  ld 28, 128(1)
  05c4f60  mtlr 0
  05c4f64  ld 29, 136(1)
  05c4f68  ld 30, 144(1)
  05c4f6c  ld 31, 152(1)
  05c4f70  addi 1, 1, 160
  05c4f74  blr
  05c4f78  lhz 0, 4(3)
  05c4f7c  extsh 0, 0
  05c4f80  cmpwi 7, 0, 0
  05c4f84  bt 28, 0x5c4f4c
  05c4f88  mr 3, 28
  05c4f8c  bl 0x5c50cc
  05c4f90  nop
  05c4f94  mr 30, 3
  05c4f98  li 3, 2
  05c4f9c  bl 0x5cbbec
  05c4fa0  nop
  05c4fa4  lwz 27, 68(31)
  05c4fa8  mr 3, 27
  05c4fac  bl 0x5d03b4
  05c4fb0  nop
  05c4fb4  lhz 0, 0(31)
  05c4fb8  rlwinm 0, 0, 0, 25, 25
  05c4fbc  cmpwi 7, 0, 0
  05c4fc0  bf 30, 0x5c504c
  05c4fc4  lhz 3, 4(31)
  05c4fc8  li 0, 0
  05c4fcc  extsh 3, 3
  05c4fd0  stw 0, 8(31)
  05c4fd4  bl 0x5cf554
  05c4fd8  nop
  05c4fdc  cmpwi 7, 3, 0
  05c4fe0  bt 30, 0x5c4fe8
  05c4fe4  li 30, -1
  05c4fe8  mr 3, 28
  05c4fec  bl 0x5c8e64
  05c4ff0  nop
  05c4ff4  mr 3, 27
  05c4ff8  bl 0x5d0370
  05c4ffc  nop
  05c5000  mr 3, 27
  05c5004  bl 0x5d045c
  05c5008  nop
  05c500c  lwz 0, -24784(2)
  05c5010  cmpw 7, 29, 0
  05c5014  bt 30, 0x5c503c
  05c5018  lwz 0, -24780(2)
  05c501c  cmpw 7, 29, 0
  05c5020  bt 30, 0x5c503c
  05c5024  lwz 0, -24776(2)
  05c5028  cmpw 7, 29, 0
  05c502c  bt 30, 0x5c503c
  05c5030  mr 3, 27
  05c5034  bl 0x5d580c
  05c5038  nop
  05c503c  li 3, 2
  05c5040  bl 0x5cbb70
  05c5044  nop
  05c5048  b 0x5c4f50
  05c504c  lwz 3, 8(31)
  05c5050  bl 0x5d580c
  05c5054  nop
  05c5058  b 0x5c4fc4

_close_all_FILE:   # 0x5c505c, 0x70 bytes
  05c505c  stdu 1, -144(1)
  05c5060  mflr 0
  05c5064  std 31, 136(1)
  05c5068  lwz 31, -24772(2)
  05c506c  std 0, 160(1)
  05c5070  std 29, 120(1)
  05c5074  lwz 29, 0(31)
  05c5078  cmpwi 7, 29, 0
  05c507c  bt 30, 0x5c5098
  05c5080  clrldi 9, 29, 32
  05c5084  mr 3, 9
  05c5088  lwz 29, 60(9)
  05c508c  bl 0x5c4f10
  05c5090  cmpwi 7, 29, 0
  05c5094  bf 30, 0x5c5080
  05c5098  li 0, 0
  05c509c  lwz 3, -24784(2)
  05c50a0  stw 0, 0(31)
  05c50a4  bl 0x5c4f10
  05c50a8  lwz 3, -24780(2)
  05c50ac  bl 0x5c4f10
  05c50b0  ld 0, 160(1)
  05c50b4  ld 29, 120(1)
  05c50b8  ld 31, 136(1)
  05c50bc  addi 1, 1, 144
  05c50c0  lwz 3, -24776(2)
  05c50c4  mtlr 0
  05c50c8  b 0x5c4f10
