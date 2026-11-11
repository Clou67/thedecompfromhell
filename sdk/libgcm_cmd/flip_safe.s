# sdk/libgcm_cmd/flip_safe.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

cellGcmSetFlipWithWaitLabel:   # 0x50e7f8, 0xe4 bytes
  050e7f8  stdu 1, -144(1)
  050e7fc  mflr 0
  050e800  std 30, 128(1)
  050e804  mr 30, 4
  050e808  std 28, 112(1)
  050e80c  cmplwi 7, 30, 7
  050e810  std 29, 120(1)
  050e814  std 31, 136(1)
  050e818  std 0, 160(1)
  050e81c  mr 11, 3
  050e820  mr 29, 5
  050e824  mr 28, 6
  050e828  bt 29, 0x50e8b0
  050e82c  lwz 9, 8(11)
  050e830  clrldi 31, 3, 32
  050e834  lwz 0, 4(11)
  050e838  li 4, 23
  050e83c  addi 9, 9, 92
  050e840  mr 3, 31
  050e844  cmplw 7, 9, 0
  050e848  bt 29, 0x50e88c
  050e84c  mr 3, 31
  050e850  clrldi 4, 30, 56
  050e854  clrldi 5, 29, 56
  050e858  clrldi 6, 28, 32
  050e85c  bl 0x64f404
  050e860  ld 2, 40(1)
  050e864  ld 0, 160(1)
  050e868  ld 28, 112(1)
  050e86c  li 3, 0
  050e870  ld 29, 120(1)
  050e874  ld 30, 128(1)
  050e878  mtlr 0
  050e87c  extsw 3, 3
  050e880  ld 31, 136(1)
  050e884  addi 1, 1, 144
  050e888  blr
  050e88c  lwz 9, 12(11)
  050e890  lwz 0, 0(9)
  050e894  std 2, 40(1)
  050e898  mtctr 0
  050e89c  lwz 2, 4(9)
  050e8a0  bctrl
  050e8a4  ld 2, 40(1)
  050e8a8  cmpwi 7, 3, 0
  050e8ac  bt 30, 0x50e84c
  050e8b0  lis 3, -32735
  050e8b4  ld 0, 160(1)
  050e8b8  ld 28, 112(1)
  050e8bc  ori 3, 3, 255
  050e8c0  ld 29, 120(1)
  050e8c4  ld 30, 128(1)
  050e8c8  mtlr 0
  050e8cc  extsw 3, 3
  050e8d0  ld 31, 136(1)
  050e8d4  addi 1, 1, 144
  050e8d8  blr
