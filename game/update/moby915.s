# game/update/moby915.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

M917_004afbec:   # 0x4afbec, 0x14 bytes
  04afbec  lis 3, 143
  04afbf0  lis 4, 1
  04afbf4  addic 3, 3, 16936
  04afbf8  stw 4, 72(3)
  04afbfc  blr

M917_004afc18:   # 0x4afc18, 0x390 bytes
  04afc18  stdu 1, -208(1)
  04afc1c  mflr 0
  04afc20  std 0, 224(1)
  04afc24  std 31, 200(1)
  04afc28  ori 31, 3, 0
  04afc2c  std 28, 176(1)
  04afc30  lis 4, 75
  04afc34  li 5, 0
  04afc38  std 29, 184(1)
  04afc3c  addi 28, 4, -1024
  04afc40  lis 4, 51
  04afc44  std 30, 192(1)
  04afc48  lwz 29, 120(31)
  04afc4c  bl 0x10675c
  04afc50  nop
  04afc54  ori 30, 3, 0
  04afc58  addic 5, 29, 32
  04afc5c  ori 4, 30, 0
  04afc60  li 6, 0
  04afc64  addic 7, 1, 112
  04afc68  li 9, 0
  04afc6c  addic 8, 1, 116
  04afc70  ori 3, 31, 0
  04afc74  li 10, 4
  04afc78  bl 0x106840
  04afc7c  nop
  04afc80  lis 4, 151
  04afc84  lfs 1, 16(31)
  04afc88  lfs 2, 20(31)
  04afc8c  addic 4, 4, -25376
  04afc90  lis 3, 115
  04afc94  lfs 3, 128(4)
  04afc98  lfs 4, 132(4)
  04afc9c  fsubs 1, 1, 3
  04afca0  fsubs 2, 2, 4
  04afca4  addic 4, 3, 22784
  04afca8  fabs 5, 1
  04afcac  fabs 4, 2
  04afcb0  stfs 1, 128(1)
  04afcb4  stfs 2, 132(1)
  04afcb8  fsubs 1, 5, 4
  04afcbc  stfs 1, 136(1)
  04afcc0  lwz 3, 128(1)
  04afcc4  lfs 1, 0(28)
  04afcc8  lfs 2, 128(1)
  04afccc  lwz 5, 132(1)
  04afcd0  lfs 3, 132(1)
  04afcd4  fabs 2, 2
  04afcd8  lwz 6, 136(1)
  04afcdc  rlwinm 5, 5, 3, 29, 29
  04afce0  fabs 6, 3
  04afce4  lfs 3, 136(1)
  04afce8  rlwimi 5, 6, 2, 30, 30
  04afcec  fsub 7, 3, 1
  04afcf0  fsub 8, 3, 1
  04afcf4  rlwimi 5, 3, 4, 28, 28
  04afcf8  ori 3, 4, 0
  04afcfc  rlwimi 3, 5, 2, 26, 28
  04afd00  slwi 5, 5, 2
  04afd04  clrldi 6, 3, 32
  04afd08  lwz 3, 112(1)
  04afd0c  fsel 4, 7, 2, 4
  04afd10  lfsx 3, 4, 5
  04afd14  fsel 5, 8, 6, 5
  04afd18  lfs 2, 4(6)
  04afd1c  fcmpu 0, 4, 1
  04afd20  bt 1, 0x4afd28
  04afd24  b 0x4afe4c
  04afd28  fsubs 6, 5, 4
  04afd2c  fadds 4, 5, 4
  04afd30  addic 7, 1, 16
  04afd34  li 4, 2
  04afd38  addic 6, 7, 124
  04afd3c  addic 5, 7, 140
  04afd40  mtctr 4
  04afd44  fdivs 4, 6, 4
  04afd48  fmuls 6, 4, 4
  04afd4c  stfs 4, 152(1)
  04afd50  stfs 4, 144(1)
  04afd54  stfs 4, 148(1)
  04afd58  stfs 4, 140(1)
  04afd5c  lfs 7, 152(1)
  04afd60  lfs 8, 144(1)
  04afd64  lfs 9, 148(1)
  04afd68  fmuls 4, 6, 6
  04afd6c  fmuls 8, 8, 6
  04afd70  fmuls 7, 7, 4
  04afd74  fmuls 5, 4, 4
  04afd78  fmuls 4, 9, 4
  04afd7c  stfs 8, 144(1)
  04afd80  fmuls 6, 7, 6
  04afd84  stfs 4, 148(1)
  04afd88  stfs 6, 152(1)
  04afd8c  lfs 4, 124(7)
  04afd90  fmuls 4, 4, 5
  04afd94  stfs 4, 140(7)
  04afd98  lfs 4, 4(6)
  04afd9c  addic 7, 7, 8
  04afda0  addic 6, 6, 8
  04afda4  fmuls 4, 4, 5
  04afda8  stfs 4, 4(5)
  04afdac  addic 5, 5, 8
  04afdb0  bdnz 0x4afd8c
  04afdb4  ori 8, 1, 0
  04afdb8  lis 7, 115
  04afdbc  li 9, 4
  04afdc0  addic 6, 8, 140
  04afdc4  addic 7, 7, 22752
  04afdc8  ori 5, 6, 0
  04afdcc  mtctr 9
  04afdd0  lfs 4, 140(8)
  04afdd4  lfs 5, 0(7)
  04afdd8  fmuls 4, 4, 5
  04afddc  lfs 5, 4(7)
  04afde0  addic 7, 7, 8
  04afde4  stfs 4, 140(8)
  04afde8  lfs 4, 4(6)
  04afdec  addic 8, 8, 8
  04afdf0  fmuls 4, 4, 5
  04afdf4  stfs 4, 4(6)
  04afdf8  addic 6, 6, 8
  04afdfc  bdnz 0x4afdd0
  04afe00  ori 6, 4, 0
  04afe04  ori 4, 1, 0
  04afe08  mtctr 6
  04afe0c  lfs 4, 140(4)
  04afe10  fadds 1, 1, 4
  04afe14  addic 4, 4, 16
  04afe18  lfs 4, 4(5)
  04afe1c  lfs 5, 8(5)
  04afe20  lfs 6, 12(5)
  04afe24  addic 5, 5, 16
  04afe28  fadds 1, 1, 4
  04afe2c  fadds 1, 1, 5
  04afe30  fadds 1, 1, 6
  04afe34  bdnz 0x4afe0c
  04afe38  lis 4, 75
  04afe3c  addi 4, 4, -1024
  04afe40  lfs 4, 4(4)
  04afe44  fadds 1, 1, 4
  04afe48  fmadds 1, 1, 3, 2
  04afe4c  cmpwi 3, 1
  04afe50  bt 2, 0x4aff80
  04afe54  lis 3, 75
  04afe58  li 4, 6
  04afe5c  vspltisw 2, -1
  04afe60  addi 28, 3, -1024
  04afe64  li 3, 8
  04afe68  lis 5, 114
  04afe6c  stb 4, 32(31)
  04afe70  li 4, -3056
  04afe74  vslw 2, 2, 2
  04afe78  lvlx 3, 3, 28
  04afe7c  lis 3, 16256
  04afe80  vspltw 3, 3, 0
  04afe84  lvlx 4, 4, 5
  04afe88  li 4, 376
  04afe8c  vspltisw 5, -1
  04afe90  stw 3, 124(1)
  04afe94  vmaddfp 2, 4, 3, 2
  04afe98  li 3, 12
  04afe9c  stfs 1, 120(1)
  04afea0  vspltisw 3, -1
  04afea4  li 5, 16
  04afea8  vspltisw 8, -1
  04afeac  vspltisw 6, -1
  04afeb0  vslw 3, 3, 3
  04afeb4  li 6, 380
  04afeb8  vslw 6, 6, 6
  04afebc  vctsxs 2, 2, 0
  04afec0  vspltisw 9, -1
  04afec4  vspltw 2, 2, 0
  04afec8  stvewx 2, 4, 29
  04afecc  lvlx 2, 3, 28
  04afed0  vspltw 2, 2, 0
  04afed4  ori 3, 31, 0
  04afed8  vmaddfp 2, 4, 2, 3
  04afedc  vslw 4, 5, 5
  04afee0  lvlx 3, 5, 28
  04afee4  vspltw 3, 3, 0
  04afee8  li 4, 8
  04afeec  li 5, 4
  04afef0  vrefp 5, 2
  04afef4  vnmsubfp 7, 5, 2, 3
  04afef8  vmaddfp 4, 5, 7, 4
  04afefc  vslw 5, 8, 8
  04aff00  vslw 7, 9, 9
  04aff04  vnmsubfp 8, 4, 2, 3
  04aff08  vmaddfp 4, 4, 8, 6
  04aff0c  vnmsubfp 2, 4, 2, 3
  04aff10  vmaddfp 2, 4, 2, 5
  04aff14  vmaddfp 2, 2, 3, 7
  04aff18  vspltw 2, 2, 0
  04aff1c  stvewx 2, 6, 29
  04aff20  bl 0xfdcf0
  04aff24  nop
  04aff28  lis 3, 16384
  04aff2c  addic 5, 1, 120
  04aff30  addic 6, 29, 380
  04aff34  addic 7, 1, 124
  04aff38  stw 3, 88(31)
  04aff3c  lfs 1, 16(30)
  04aff40  lfs 2, 24(30)
  04aff44  stfs 1, 48(1)
  04aff48  stfs 2, 56(1)
  04aff4c  lfs 1, 20(30)
  04aff50  lfs 2, 28(30)
  04aff54  stfs 1, 52(1)
  04aff58  stfs 2, 60(1)
  04aff5c  ld 3, 48(1)
  04aff60  ld 4, 56(1)
  04aff64  bl 0x107de8
  04aff68  nop
  04aff6c  lfs 1, 20(28)
  04aff70  lfs 2, 120(1)
  04aff74  bl 0x502578
  04aff78  nop
  04aff7c  stfs 1, 72(31)
  04aff80  li 3, 255
  04aff84  stb 3, 164(31)
  04aff88  ld 0, 224(1)
  04aff8c  mtlr 0
  04aff90  ld 28, 176(1)
  04aff94  ld 29, 184(1)
  04aff98  ld 30, 192(1)
  04aff9c  ld 31, 200(1)
  04affa0  addi 1, 1, 208
  04affa4  blr

UpdateMoby_915:   # 0x4affb0, 0x21c bytes
  04affb0  stdu 1, -176(1)
  04affb4  mflr 0
  04affb8  std 0, 192(1)
  04affbc  lis 4, 151
  04affc0  lfs 1, 16(3)
  04affc4  addic 4, 4, -25376
  04affc8  std 31, 168(1)
  04affcc  lfs 2, 20(3)
  04affd0  ori 31, 3, 0
  04affd4  lis 5, 115
  04affd8  lfs 3, 128(4)
  04affdc  lfs 4, 132(4)
  04affe0  fsubs 1, 3, 1
  04affe4  fsubs 2, 4, 2
  04affe8  lis 4, 75
  04affec  addi 4, 4, -88
  04afff0  addic 5, 5, 22784
  04afff4  fabs 6, 1
  04afff8  fabs 5, 2
  04afffc  stfs 1, 112(1)
  04b0000  stfs 2, 116(1)
  04b0004  fsubs 1, 6, 5
  04b0008  stfs 1, 120(1)
  04b000c  lwz 6, 112(1)
  04b0010  lfs 2, 0(4)
  04b0014  lfs 1, 112(1)
  04b0018  lwz 4, 116(1)
  04b001c  fabs 3, 1
  04b0020  lfs 1, 116(1)
  04b0024  rlwinm 4, 4, 3, 29, 29
  04b0028  fabs 7, 1
  04b002c  lfs 1, 72(3)
  04b0030  lwz 3, 120(1)
  04b0034  lfs 4, 120(1)
  04b0038  rlwimi 4, 3, 2, 30, 30
  04b003c  fsub 8, 4, 2
  04b0040  ori 3, 5, 0
  04b0044  fsub 9, 4, 2
  04b0048  rlwimi 4, 6, 4, 28, 28
  04b004c  rlwimi 3, 4, 2, 26, 28
  04b0050  slwi 4, 4, 2
  04b0054  clrldi 3, 3, 32
  04b0058  lfsx 4, 5, 4
  04b005c  fsel 5, 8, 3, 5
  04b0060  lfs 3, 4(3)
  04b0064  fsel 6, 9, 7, 6
  04b0068  fcmpu 0, 5, 2
  04b006c  bt 1, 0x4b0074
  04b0070  b 0x4b0198
  04b0074  fsubs 7, 6, 5
  04b0078  fadds 5, 6, 5
  04b007c  addic 6, 1, 16
  04b0080  li 3, 2
  04b0084  addic 5, 6, 108
  04b0088  addic 4, 6, 124
  04b008c  mtctr 3
  04b0090  fdivs 5, 7, 5
  04b0094  fmuls 7, 5, 5
  04b0098  stfs 5, 136(1)
  04b009c  stfs 5, 128(1)
  04b00a0  stfs 5, 132(1)
  04b00a4  stfs 5, 124(1)
  04b00a8  lfs 8, 136(1)
  04b00ac  lfs 9, 128(1)
  04b00b0  lfs 10, 132(1)
  04b00b4  fmuls 5, 7, 7
  04b00b8  fmuls 9, 9, 7
  04b00bc  fmuls 8, 8, 5
  04b00c0  fmuls 6, 5, 5
  04b00c4  fmuls 5, 10, 5
  04b00c8  stfs 9, 128(1)
  04b00cc  fmuls 7, 8, 7
  04b00d0  stfs 5, 132(1)
  04b00d4  stfs 7, 136(1)
  04b00d8  lfs 5, 108(6)
  04b00dc  fmuls 5, 5, 6
  04b00e0  stfs 5, 124(6)
  04b00e4  lfs 5, 4(5)
  04b00e8  addic 6, 6, 8
  04b00ec  addic 5, 5, 8
  04b00f0  fmuls 5, 5, 6
  04b00f4  stfs 5, 4(4)
  04b00f8  addic 4, 4, 8
  04b00fc  bdnz 0x4b00d8
  04b0100  ori 7, 1, 0
  04b0104  li 4, 4
  04b0108  lis 6, 115
  04b010c  addic 5, 7, 124
  04b0110  mtctr 4
  04b0114  addic 6, 6, 22752
  04b0118  ori 4, 5, 0
  04b011c  lfs 5, 124(7)
  04b0120  lfs 6, 0(6)
  04b0124  fmuls 5, 5, 6
  04b0128  lfs 6, 4(6)
  04b012c  addic 6, 6, 8
  04b0130  stfs 5, 124(7)
  04b0134  lfs 5, 4(5)
  04b0138  addic 7, 7, 8
  04b013c  fmuls 5, 5, 6
  04b0140  stfs 5, 4(5)
  04b0144  addic 5, 5, 8
  04b0148  bdnz 0x4b011c
  04b014c  ori 5, 3, 0
  04b0150  ori 3, 1, 0
  04b0154  mtctr 5
  04b0158  lfs 5, 124(3)
  04b015c  fadds 2, 2, 5
  04b0160  addic 3, 3, 16
  04b0164  lfs 5, 4(4)
  04b0168  lfs 6, 8(4)
  04b016c  lfs 7, 12(4)
  04b0170  addic 4, 4, 16
  04b0174  fadds 2, 2, 5
  04b0178  fadds 2, 2, 6
  04b017c  fadds 2, 2, 7
  04b0180  bdnz 0x4b0158
  04b0184  lis 3, 75
  04b0188  addi 3, 3, -88
  04b018c  lfs 5, 4(3)
  04b0190  fadds 2, 2, 5
  04b0194  fmadds 2, 2, 4, 3
  04b0198  fmr 3, 1
  04b019c  fmr 1, 2
  04b01a0  fmr 2, 3
  04b01a4  bl 0x5026a0
  04b01a8  nop
  04b01ac  ori 3, 31, 0
  04b01b0  bl 0xefb38
  04b01b4  nop
  04b01b8  ld 0, 192(1)
  04b01bc  mtlr 0
  04b01c0  ld 31, 168(1)
  04b01c4  addi 1, 1, 176
  04b01c8  blr
