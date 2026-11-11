# sdk/libc/strtok.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

strtok:   # 0x5c87ac, 0xe4 bytes
  05c87ac  cmpdi 3, 0
  05c87b0  mflr 0
  05c87b4  addis 9, 13, 0
  05c87b8  stdu 1, -144(1)
  05c87bc  std 31, 136(1)
  05c87c0  std 29, 120(1)
  05c87c4  std 0, 160(1)
  05c87c8  addi 9, 9, -28668
  05c87cc  mr 31, 3
  05c87d0  bt 2, 0x5c8888
  05c87d4  clrldi 29, 4, 32
  05c87d8  clrldi 3, 31, 32
  05c87dc  mr 4, 29
  05c87e0  bl 0x5d5c9c
  05c87e4  nop
  05c87e8  mr 4, 29
  05c87ec  add 29, 31, 3
  05c87f0  addis 9, 13, 0
  05c87f4  clrldi 31, 29, 32
  05c87f8  addi 9, 9, -28668
  05c87fc  mr 3, 31
  05c8800  lbz 0, 0(31)
  05c8804  cmpwi 7, 0, 0
  05c8808  bt 30, 0x5c8860
  05c880c  bl 0x5d5c2c
  05c8810  nop
  05c8814  add 3, 29, 3
  05c8818  addis 9, 13, 0
  05c881c  clrldi 11, 3, 32
  05c8820  addi 9, 9, -28668
  05c8824  lbz 0, 0(11)
  05c8828  cmpwi 7, 0, 0
  05c882c  bf 30, 0x5c8850
  05c8830  ld 0, 160(1)
  05c8834  stw 3, 0(9)
  05c8838  ld 29, 120(1)
  05c883c  mr 3, 31
  05c8840  mtlr 0
  05c8844  ld 31, 136(1)
  05c8848  addi 1, 1, 144
  05c884c  blr
  05c8850  li 0, 0
  05c8854  addi 3, 3, 1
  05c8858  stb 0, 0(11)
  05c885c  b 0x5c8830
  05c8860  lwz 0, -24744(2)
  05c8864  li 31, 0
  05c8868  ld 29, 120(1)
  05c886c  stw 0, 0(9)
  05c8870  ld 0, 160(1)
  05c8874  mr 3, 31
  05c8878  ld 31, 136(1)
  05c887c  addi 1, 1, 144
  05c8880  mtlr 0
  05c8884  blr
  05c8888  lwz 31, 0(9)
  05c888c  b 0x5c87d4
