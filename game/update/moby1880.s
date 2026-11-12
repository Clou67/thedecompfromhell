# game/update/moby1880.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M1880_002cdf60:   # 0x2cdf60, 0xac bytes
  02cdf60  lis 3, 45
  02cdf64  vspltisw 2, -1
  02cdf68  lis 4, 114
  02cdf6c  addi 3, 3, -8368
  02cdf70  li 5, -3056
  02cdf74  vslw 2, 2, 2
  02cdf78  lvlx 3, 0, 3
  02cdf7c  lvlx 4, 5, 4
  02cdf80  vspltw 3, 3, 0
  02cdf84  li 4, 8
  02cdf88  vspltisw 5, -1
  02cdf8c  vmaddfp 2, 4, 3, 2
  02cdf90  lvlx 4, 4, 3
  02cdf94  vspltisw 3, -1
  02cdf98  vspltw 4, 4, 0
  02cdf9c  li 4, 4
  02cdfa0  vslw 5, 5, 5
  02cdfa4  vslw 3, 3, 3
  02cdfa8  vspltisw 6, -1
  02cdfac  lis 5, 124
  02cdfb0  vspltisw 8, -1
  02cdfb4  vctsxs 2, 2, 0
  02cdfb8  vslw 6, 6, 6
  02cdfbc  lvlx 9, 4, 3
  02cdfc0  vslw 8, 8, 8
  02cdfc4  addic 4, 5, -10952
  02cdfc8  vspltw 9, 9, 0
  02cdfcc  lis 3, 1
  02cdfd0  stw 3, 72(4)
  02cdfd4  vcfsx 2, 2, 0
  02cdfd8  lis 3, 266
  02cdfdc  li 4, 8896
  02cdfe0  vrefp 7, 2
  02cdfe4  vnmsubfp 10, 7, 2, 4
  02cdfe8  vmaddfp 3, 7, 10, 3
  02cdfec  vnmsubfp 7, 3, 2, 4
  02cdff0  vmaddfp 3, 3, 7, 5
  02cdff4  vnmsubfp 2, 3, 2, 4
  02cdff8  vmaddfp 2, 3, 2, 6
  02cdffc  vmaddfp 2, 2, 9, 8
  02ce000  vspltw 2, 2, 0
  02ce004  stvewx 2, 4, 3
  02ce008  blr

UpdateMoby_1880:   # 0x2ce010, 0x4 bytes
  02ce010  blr
