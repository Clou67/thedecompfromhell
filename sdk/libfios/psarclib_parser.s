# sdk/libfios/psarclib_parser.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

_ZN4cell4fios5PSArc12readSizedIntEPKhi:   # 0x52fba8, 0x30 bytes
  052fba8  cmpwi 7, 4, 0
  052fbac  li 9, 0
  052fbb0  bf 29, 0x52fbd0
  052fbb4  clrldi 4, 4, 32
  052fbb8  mtctr 4
  052fbbc  lbz 0, 0(3)
  052fbc0  sldi 9, 9, 8
  052fbc4  addi 3, 3, 1
  052fbc8  or 9, 9, 0
  052fbcc  bdnz 0x52fbbc
  052fbd0  mr 3, 9
  052fbd4  blr

_ZN4cell4fios5PSArc14readBlockIndexEPKNS1_8TOCEntryE:   # 0x52fbd8, 0x30 bytes
  052fbd8  addi 3, 3, 16
  052fbdc  mflr 0
  052fbe0  li 4, 4
  052fbe4  clrldi 3, 3, 32
  052fbe8  stdu 1, -112(1)
  052fbec  std 0, 128(1)
  052fbf0  bl 0x52fba8
  052fbf4  ld 0, 128(1)
  052fbf8  extsw 3, 3
  052fbfc  addi 1, 1, 112
  052fc00  mtlr 0
  052fc04  blr

_ZNK4cell4fios5PSArc13ArchiveParser10isReadableEv:   # 0x52fc08, 0xb4 bytes
  052fc08  lhz 9, 12(3)
  052fc0c  li 6, 1
  052fc10  lwz 7, 8(3)
  052fc14  cmpwi 7, 9, 3
  052fc18  bt 30, 0x52fc28
  052fc1c  xori 9, 9, 1
  052fc20  addi 9, 9, -1
  052fc24  srwi 6, 9, 31
  052fc28  lwz 11, 20(3)
  052fc2c  cmpwi 7, 11, 0
  052fc30  bf 30, 0x52fc5c
  052fc34  li 8, 0
  052fc38  lwz 10, 24(3)
  052fc3c  lis 0, 20563
  052fc40  lwz 3, 32(3)
  052fc44  ori 0, 0, 16722
  052fc48  cmpw 7, 7, 0
  052fc4c  bt 30, 0x52fc8c
  052fc50  li 3, 0
  052fc54  extsw 3, 3
  052fc58  blr
  052fc5c  lwz 10, 24(3)
  052fc60  li 8, 1
  052fc64  lwz 0, 28(3)
  052fc68  mullw 0, 10, 0
  052fc6c  cmplw 7, 11, 0
  052fc70  bf 28, 0x52fc3c
  052fc74  lis 0, 20563
  052fc78  lwz 3, 32(3)
  052fc7c  li 8, 0
  052fc80  ori 0, 0, 16722
  052fc84  cmpw 7, 7, 0
  052fc88  bf 30, 0x52fc50
  052fc8c  clrlwi 0, 6, 24
  052fc90  cmpwi 7, 0, 0
  052fc94  bt 30, 0x52fc50
  052fc98  clrlwi 0, 8, 24
  052fc9c  cmpwi 7, 0, 0
  052fca0  bt 30, 0x52fc50
  052fca4  cmplwi 7, 10, 29
  052fca8  bf 29, 0x52fc50
  052fcac  cmplwi 7, 3, 255
  052fcb0  li 3, 1
  052fcb4  bt 29, 0x52fc54
  052fcb8  b 0x52fc50

_ZNK4cell4fios5PSArc13ArchiveParser11getFileSizeEPKvPKNS1_8TOCEntryE:   # 0x52fcbc, 0x30 bytes
  052fcbc  addi 5, 5, 20
  052fcc0  mflr 0
  052fcc4  stdu 1, -112(1)
  052fcc8  stw 4, 168(1)
  052fccc  clrldi 3, 5, 32
  052fcd0  li 4, 5
  052fcd4  std 0, 128(1)
  052fcd8  bl 0x52fba8
  052fcdc  ld 0, 128(1)
  052fce0  addi 1, 1, 112
  052fce4  mtlr 0
  052fce8  blr

_ZNK4cell4fios5PSArc13ArchiveParser13getFileOffsetEPKvPKNS1_8TOCEntryE:   # 0x52fcec, 0x30 bytes
  052fcec  addi 5, 5, 25
  052fcf0  mflr 0
  052fcf4  stdu 1, -112(1)
  052fcf8  stw 4, 168(1)
  052fcfc  clrldi 3, 5, 32
  052fd00  li 4, 5
  052fd04  std 0, 128(1)
  052fd08  bl 0x52fba8
  052fd0c  ld 0, 128(1)
  052fd10  addi 1, 1, 112
  052fd14  mtlr 0
  052fd18  blr

_ZNK4cell4fios5PSArc13ArchiveParser18fileIsUncompressedEPKvPKNS1_8TOCEntryE:   # 0x52fd1c, 0x70 bytes
  052fd1c  stdu 1, -144(1)
  052fd20  mflr 0
  052fd24  std 29, 120(1)
  052fd28  std 0, 160(1)
  052fd2c  lwz 0, 16(3)
  052fd30  mr 3, 5
  052fd34  stw 4, 200(1)
  052fd38  srawi 9, 0, 31
  052fd3c  xor 29, 9, 0
  052fd40  sub 29, 29, 9
  052fd44  bl 0x52fbd8
  052fd48  not 3, 3
  052fd4c  addi 29, 29, -1
  052fd50  sradi 9, 3, 63
  052fd54  srwi 29, 29, 31
  052fd58  xor 3, 9, 3
  052fd5c  cmpwi 7, 29, 0
  052fd60  li 0, 1
  052fd64  sub 3, 3, 9
  052fd68  bf- 30, 0x52fd74
  052fd6c  addi 0, 3, -1
  052fd70  rldicl 0, 0, 1, 63
  052fd74  extsw 3, 0
  052fd78  ld 0, 160(1)
  052fd7c  ld 29, 120(1)
  052fd80  addi 1, 1, 144
  052fd84  mtlr 0
  052fd88  blr

FUN_0052fd8c:   # 0x52fd8c, 0x320 bytes
  052fd8c  stdu 1, -224(1)
  052fd90  mflr 0
  052fd94  std 25, 168(1)
  052fd98  mr 25, 3
  052fd9c  clrldi 3, 5, 32
  052fda0  std 18, 112(1)
  052fda4  std 19, 120(1)
  052fda8  std 22, 144(1)
  052fdac  std 23, 152(1)
  052fdb0  std 28, 192(1)
  052fdb4  std 29, 200(1)
  052fdb8  std 30, 208(1)
  052fdbc  std 31, 216(1)
  052fdc0  std 20, 128(1)
  052fdc4  std 21, 136(1)
  052fdc8  std 24, 160(1)
  052fdcc  std 26, 176(1)
  052fdd0  std 27, 184(1)
  052fdd4  std 0, 240(1)
  052fdd8  mr 30, 5
  052fddc  mr 19, 8
  052fde0  mr 18, 9
  052fde4  mr 22, 10
  052fde8  mr 23, 4
  052fdec  mr 28, 6
  052fdf0  mr 29, 7
  052fdf4  bl 0x52fbd8
  052fdf8  cmpdi 7, 3, -1
  052fdfc  mr 31, 3
  052fe00  bt- 30, 0x53004c
  052fe04  addi 3, 30, 20
  052fe08  li 4, 5
  052fe0c  clrldi 3, 3, 32
  052fe10  bl 0x52fba8
  052fe14  li 9, 0
  052fe18  cmpdi 3, 0
  052fe1c  mr 21, 3
  052fe20  bf 2, 0x52ffcc
  052fe24  clrldi 0, 29, 32
  052fe28  lwz 26, 28(25)
  052fe2c  add 20, 31, 9
  052fe30  lwz 27, 24(25)
  052fe34  add 24, 31, 0
  052fe38  addi 0, 24, 16
  052fe3c  srwi 9, 0, 5
  052fe40  slwi 11, 9, 5
  052fe44  clrldi 0, 11, 32
  052fe48  cmpd 7, 0, 20
  052fe4c  bt 29, 0x52ffc0
  052fe50  cmpwi 7, 28, 0
  052fe54  bt- 30, 0x52fe64
  052fe58  clrldi 29, 11, 32
  052fe5c  cmpd 7, 31, 29
  052fe60  bt 28, 0x530024
  052fe64  addi 3, 30, 25
  052fe68  li 4, 5
  052fe6c  clrldi 3, 3, 32
  052fe70  mr 29, 31
  052fe74  bl 0x52fba8
  052fe78  mr 28, 3
  052fe7c  lbz 4, 56(25)
  052fe80  cmpd 7, 29, 24
  052fe84  li 0, 1
  052fe88  clrldi 11, 4, 56
  052fe8c  rlwinm 10, 4, 3, 21, 28
  052fe90  mullw 9, 26, 27
  052fe94  add 9, 9, 23
  052fe98  sld 27, 0, 10
  052fe9c  mulld 11, 29, 11
  052fea0  add 31, 9, 11
  052fea4  bf 28, 0x52fef8
  052fea8  li 30, 0
  052feac  sub 26, 24, 29
  052feb0  clrldi 4, 4, 56
  052feb4  clrldi 3, 31, 32
  052feb8  addi 30, 30, 1
  052febc  bl 0x52fba8
  052fec0  lbz 4, 56(25)
  052fec4  sradi 0, 3, 63
  052fec8  cmpd 7, 26, 30
  052fecc  xor 9, 0, 3
  052fed0  add 3, 3, 28
  052fed4  sub 9, 9, 0
  052fed8  clrlwi 0, 4, 24
  052fedc  addi 9, 9, -1
  052fee0  add 31, 31, 0
  052fee4  rldicl 9, 9, 1, 63
  052fee8  mulld 9, 27, 9
  052feec  add 28, 9, 3
  052fef0  bf 30, 0x52feb0
  052fef4  add 29, 29, 26
  052fef8  cmpd 7, 24, 29
  052fefc  bt 28, 0x52ff08
  052ff00  b 0x530044
  052ff04  lbz 4, 56(25)
  052ff08  clrlwi 4, 4, 24
  052ff0c  addi 29, 29, -1
  052ff10  sub 31, 31, 4
  052ff14  extsw 4, 4
  052ff18  clrldi 30, 31, 32
  052ff1c  mr 3, 30
  052ff20  bl 0x52fba8
  052ff24  cmpd 7, 24, 29
  052ff28  sradi 0, 3, 63
  052ff2c  xor 9, 0, 3
  052ff30  sub 9, 9, 0
  052ff34  addi 9, 9, -1
  052ff38  rldicl 9, 9, 1, 63
  052ff3c  mulld 9, 27, 9
  052ff40  add 3, 3, 9
  052ff44  sub 28, 28, 3
  052ff48  bt 28, 0x52ff04
  052ff4c  lbz 4, 56(25)
  052ff50  mr 3, 30
  052ff54  clrldi 4, 4, 56
  052ff58  bl 0x52fba8
  052ff5c  cmpdi 3, 0
  052ff60  bf 2, 0x53000c
  052ff64  stb 3, 0(22)
  052ff68  mr 3, 27
  052ff6c  std 3, 0(19)
  052ff70  std 28, 0(18)
  052ff74  ld 0, 240(1)
  052ff78  li 3, 1
  052ff7c  ld 18, 112(1)
  052ff80  ld 19, 120(1)
  052ff84  mtlr 0
  052ff88  ld 20, 128(1)
  052ff8c  ld 21, 136(1)
  052ff90  ld 22, 144(1)
  052ff94  ld 23, 152(1)
  052ff98  ld 24, 160(1)
  052ff9c  ld 25, 168(1)
  052ffa0  ld 26, 176(1)
  052ffa4  ld 27, 184(1)
  052ffa8  ld 28, 192(1)
  052ffac  ld 29, 200(1)
  052ffb0  ld 30, 208(1)
  052ffb4  ld 31, 216(1)
  052ffb8  addi 1, 1, 224
  052ffbc  blr
  052ffc0  addi 11, 11, -32
  052ffc4  addi 9, 9, -1
  052ffc8  b 0x52fe50
  052ffcc  lwz 9, 32(25)
  052ffd0  addi 0, 3, -1
  052ffd4  lwz 26, 28(25)
  052ffd8  lwz 27, 24(25)
  052ffdc  divdu 0, 0, 9
  052ffe0  clrldi 9, 0, 32
  052ffe4  clrldi 0, 29, 32
  052ffe8  add 20, 31, 9
  052ffec  add 24, 31, 0
  052fff0  addi 0, 24, 16
  052fff4  srwi 9, 0, 5
  052fff8  slwi 11, 9, 5
  052fffc  clrldi 0, 11, 32
  0530000  cmpd 7, 0, 20
  0530004  bf 29, 0x52fe50
  0530008  b 0x52ffc0
  053000c  cmpd 7, 20, 24
  0530010  lwz 0, 32(25)
  0530014  bt- 30, 0x530084
  0530018  li 0, 1
  053001c  stb 0, 0(22)
  0530020  b 0x52ff6c
  0530024  slwi 3, 9, 2
  0530028  li 4, 5
  053002c  add 3, 3, 9
  0530030  add 3, 28, 3
  0530034  clrldi 3, 3, 32
  0530038  bl 0x52fba8
  053003c  mr 28, 3
  0530040  b 0x52fe7c
  0530044  clrldi 30, 31, 32
  0530048  b 0x52ff50
  053004c  addi 3, 30, 25
  0530050  lwz 9, 32(25)
  0530054  li 0, 0
  0530058  clrldi 3, 3, 32
  053005c  li 4, 5
  0530060  stb 0, 0(22)
  0530064  std 9, 0(19)
  0530068  bl 0x52fba8
  053006c  lwz 0, 32(25)
  0530070  mullw 0, 29, 0
  0530074  clrldi 0, 0, 32
  0530078  add 3, 3, 0
  053007c  std 3, 0(18)
  0530080  b 0x52ff74
  0530084  clrldi 0, 0, 32
  0530088  divdu 9, 21, 0
  053008c  mulld 9, 9, 0
  0530090  sub 9, 21, 9
  0530094  clrldi 9, 9, 32
  0530098  cmpd 7, 9, 3
  053009c  bf+ 30, 0x530018
  05300a0  li 0, 0
  05300a4  stb 0, 0(22)
  05300a8  b 0x52ff6c

_ZNK4cell4fios5PSArc13ArchiveParser24fileRegionIsUncompressedEPKvPKNS1_8TOCEntryEyy:   # 0x5300ac, 0x180 bytes
  05300ac  stdu 1, -208(1)
  05300b0  mflr 0
  05300b4  std 27, 168(1)
  05300b8  mr 27, 6
  05300bc  std 26, 160(1)
  05300c0  std 28, 176(1)
  05300c4  std 29, 184(1)
  05300c8  std 30, 192(1)
  05300cc  std 31, 200(1)
  05300d0  std 24, 144(1)
  05300d4  std 25, 152(1)
  05300d8  std 0, 224(1)
  05300dc  mr 26, 3
  05300e0  mr 28, 4
  05300e4  mr 29, 5
  05300e8  mr 30, 3
  05300ec  mr 31, 7
  05300f0  bl 0x52fcbc
  05300f4  cmpld 7, 3, 27
  05300f8  bt- 28, 0x5301bc
  05300fc  add 31, 27, 31
  0530100  cmpld 7, 3, 31
  0530104  bt- 28, 0x5301bc
  0530108  mr 3, 26
  053010c  mr 4, 28
  0530110  mr 5, 29
  0530114  bl 0x52fd1c
  0530118  clrlwi 3, 3, 24
  053011c  cmpwi 7, 3, 0
  0530120  bf 30, 0x5301f4
  0530124  lwz 0, 32(26)
  0530128  divdu 6, 27, 0
  053012c  divdu 11, 31, 0
  0530130  mulld 0, 11, 0
  0530134  sub 0, 31, 0
  0530138  sradi 10, 0, 63
  053013c  xor 9, 10, 0
  0530140  sub 9, 9, 10
  0530144  addi 9, 9, -1
  0530148  rldicl 9, 9, 1, 63
  053014c  sub 27, 11, 9
  0530150  cmplw 7, 27, 6
  0530154  bt 28, 0x5301f4
  0530158  li 0, 1
  053015c  mr 31, 6
  0530160  addi 24, 1, 128
  0530164  addi 25, 1, 120
  0530168  addi 26, 1, 112
  053016c  stb 0, 112(1)
  0530170  b 0x530184
  0530174  lbz 0, 112(1)
  0530178  cmpwi 7, 0, 0
  053017c  bf 30, 0x5301bc
  0530180  bt 24, 0x5301f4
  0530184  clrldi 7, 31, 32
  0530188  mr 3, 30
  053018c  mr 4, 28
  0530190  mr 5, 29
  0530194  li 6, 0
  0530198  mr 8, 24
  053019c  mr 9, 25
  05301a0  mr 10, 26
  05301a4  addi 31, 31, 1
  05301a8  bl 0x52fd8c
  05301ac  clrlwi 3, 3, 24
  05301b0  cmplw 6, 27, 31
  05301b4  cmpwi 7, 3, 0
  05301b8  bf 30, 0x530174
  05301bc  ld 0, 224(1)
  05301c0  li 3, 0
  05301c4  ld 24, 144(1)
  05301c8  extsw 3, 3
  05301cc  ld 25, 152(1)
  05301d0  ld 26, 160(1)
  05301d4  mtlr 0
  05301d8  ld 27, 168(1)
  05301dc  ld 28, 176(1)
  05301e0  ld 29, 184(1)
  05301e4  ld 30, 192(1)
  05301e8  ld 31, 200(1)
  05301ec  addi 1, 1, 208
  05301f0  blr
  05301f4  ld 0, 224(1)
  05301f8  li 3, 1
  05301fc  ld 24, 144(1)
  0530200  extsw 3, 3
  0530204  ld 25, 152(1)
  0530208  ld 26, 160(1)
  053020c  mtlr 0
  0530210  ld 27, 168(1)
  0530214  ld 28, 176(1)
  0530218  ld 29, 184(1)
  053021c  ld 30, 192(1)
  0530220  ld 31, 200(1)
  0530224  addi 1, 1, 208
  0530228  blr

_ZNK4cell4fios5PSArc13ArchiveParser15lookupFileEntryEPKvPKh:   # 0x53022c, 0x194 bytes
  053022c  cmpwi 7, 4, 0
  0530230  mflr 0
  0530234  stdu 1, -256(1)
  0530238  std 31, 248(1)
  053023c  std 19, 152(1)
  0530240  std 20, 160(1)
  0530244  std 21, 168(1)
  0530248  std 22, 176(1)
  053024c  std 23, 184(1)
  0530250  std 24, 192(1)
  0530254  std 25, 200(1)
  0530258  std 26, 208(1)
  053025c  std 27, 216(1)
  0530260  std 28, 224(1)
  0530264  std 29, 232(1)
  0530268  std 0, 272(1)
  053026c  mr 9, 4
  0530270  mr 31, 3
  0530274  bt- 30, 0x5303b8
  0530278  lbz 0, 57(3)
  053027c  cmpwi 7, 0, 0
  0530280  bt 30, 0x530368
  0530284  lbz 19, 15(5)
  0530288  clrldi 4, 4, 32
  053028c  lwz 6, 24(3)
  0530290  addi 3, 1, 112
  0530294  lbz 0, 0(5)
  0530298  lbz 9, 1(5)
  053029c  lbz 11, 2(5)
  05302a0  lbz 10, 3(5)
  05302a4  lbz 8, 4(5)
  05302a8  lbz 29, 5(5)
  05302ac  lbz 28, 6(5)
  05302b0  lbz 27, 7(5)
  05302b4  lbz 26, 8(5)
  05302b8  lbz 25, 9(5)
  05302bc  lbz 24, 10(5)
  05302c0  lbz 23, 11(5)
  05302c4  lbz 22, 12(5)
  05302c8  lbz 21, 13(5)
  05302cc  lbz 20, 14(5)
  05302d0  lwz 7, -29784(2)
  05302d4  lwz 5, 28(31)
  05302d8  stb 0, 112(1)
  05302dc  stb 9, 113(1)
  05302e0  stb 11, 114(1)
  05302e4  stb 10, 115(1)
  05302e8  stb 8, 116(1)
  05302ec  stb 29, 117(1)
  05302f0  stb 28, 118(1)
  05302f4  stb 27, 119(1)
  05302f8  stb 26, 120(1)
  05302fc  stb 25, 121(1)
  0530300  stb 24, 122(1)
  0530304  stb 23, 123(1)
  0530308  stb 22, 124(1)
  053030c  stb 21, 125(1)
  0530310  stb 20, 126(1)
  0530314  stb 19, 127(1)
  0530318  bl 0x5c4d8c
  053031c  nop
  0530320  mr 29, 3
  0530324  ld 0, 272(1)
  0530328  clrldi 3, 29, 32
  053032c  ld 19, 152(1)
  0530330  ld 20, 160(1)
  0530334  mtlr 0
  0530338  ld 21, 168(1)
  053033c  ld 22, 176(1)
  0530340  ld 23, 184(1)
  0530344  ld 24, 192(1)
  0530348  ld 25, 200(1)
  053034c  ld 26, 208(1)
  0530350  ld 27, 216(1)
  0530354  ld 28, 224(1)
  0530358  ld 29, 232(1)
  053035c  ld 31, 248(1)
  0530360  addi 1, 1, 256
  0530364  blr
  0530368  lwz 26, 28(3)
  053036c  cmpwi 7, 26, 0
  0530370  bt 30, 0x5303b8
  0530374  mr 3, 9
  0530378  clrldi 27, 5, 32
  053037c  li 28, 0
  0530380  b 0x530388
  0530384  add 3, 29, 3
  0530388  mr 29, 3
  053038c  mr 4, 27
  0530390  clrldi 3, 3, 32
  0530394  li 5, 16
  0530398  addi 28, 28, 1
  053039c  bl 0x5d0218
  05303a0  nop
  05303a4  cmpwi 7, 3, 0
  05303a8  cmpw 6, 26, 28
  05303ac  bt 30, 0x530324
  05303b0  lwz 3, 24(31)
  05303b4  bf 26, 0x530384
  05303b8  li 29, 0
  05303bc  b 0x530324

_ZNK4cell4fios5PSArc13ArchiveParser16getManifestEntryEPKv:   # 0x5303c0, 0x34 bytes
  05303c0  stdu 1, -128(1)
  05303c4  mflr 0
  05303c8  addi 5, 1, 112
  05303cc  std 0, 144(1)
  05303d0  li 0, 112
  05303d4  vxor 0, 0, 0
  05303d8  stvx 0, 1, 0
  05303dc  bl 0x53022c
  05303e0  ld 0, 144(1)
  05303e4  clrldi 3, 3, 32
  05303e8  addi 1, 1, 128
  05303ec  mtlr 0
  05303f0  blr

FUN_005303f4:   # 0x5303f4, 0x2c bytes
  05303f4  stdu 1, -112(1)
  05303f8  mflr 0
  05303fc  li 5, 16
  0530400  std 0, 128(1)
  0530404  bl 0x5d0218
  0530408  nop
  053040c  ld 0, 128(1)
  0530410  extsw 3, 3
  0530414  mtlr 0
  0530418  addi 1, 1, 112
  053041c  blr

_ZNK4cell4fios5PSArc13ArchiveParser15lookupFileEntryEPKvPKc:   # 0x530420, 0x60 bytes
  0530420  stdu 1, -256(1)
  0530424  mflr 0
  0530428  std 29, 232(1)
  053042c  mr 29, 3
  0530430  std 0, 272(1)
  0530434  std 28, 224(1)
  0530438  mr 28, 4
  053043c  mr 4, 5
  0530440  lwz 5, 36(29)
  0530444  addi 3, 1, 112
  0530448  clrldi 5, 5, 63
  053044c  bl 0x52faf8
  0530450  nop
  0530454  mr 3, 29
  0530458  clrldi 4, 28, 32
  053045c  addi 5, 1, 200
  0530460  bl 0x53022c
  0530464  ld 0, 272(1)
  0530468  clrldi 3, 3, 32
  053046c  ld 28, 224(1)
  0530470  ld 29, 232(1)
  0530474  mtlr 0
  0530478  addi 1, 1, 256
  053047c  blr

FUN_00530480:   # 0x530480, 0x2c0 bytes
  0530480  stdu 1, -240(1)
  0530484  mflr 0
  0530488  std 27, 200(1)
  053048c  mr 27, 3
  0530490  std 0, 256(1)
  0530494  std 19, 136(1)
  0530498  std 21, 152(1)
  053049c  std 23, 168(1)
  05304a0  lwz 11, 24(27)
  05304a4  mr 23, 5
  05304a8  lwz 0, 28(27)
  05304ac  lwz 9, 20(27)
  05304b0  std 24, 176(1)
  05304b4  std 25, 184(1)
  05304b8  std 31, 232(1)
  05304bc  std 17, 120(1)
  05304c0  std 18, 128(1)
  05304c4  std 20, 144(1)
  05304c8  std 22, 160(1)
  05304cc  std 26, 192(1)
  05304d0  std 28, 208(1)
  05304d4  std 29, 216(1)
  05304d8  std 30, 224(1)
  05304dc  mr 24, 3
  05304e0  clrldi 3, 5, 32
  05304e4  mr 31, 4
  05304e8  li 4, 0
  05304ec  mr 19, 31
  05304f0  mullw 0, 0, 11
  05304f4  clrldi 0, 0, 32
  05304f8  lbz 11, 56(27)
  05304fc  sub 9, 9, 0
  0530500  divdu 9, 9, 11
  0530504  addi 9, 9, 31
  0530508  srwi 9, 9, 5
  053050c  slwi 5, 9, 2
  0530510  add 5, 5, 9
  0530514  clrldi 5, 5, 32
  0530518  bl 0x5d0140
  053051c  nop
  0530520  lwz 25, 28(27)
  0530524  lbz 0, 56(27)
  0530528  cmpwi 7, 25, 0
  053052c  slwi 0, 0, 3
  0530530  li 9, 1
  0530534  sld 21, 9, 0
  0530538  bt 30, 0x5305a8
  053053c  mr 29, 31
  0530540  mr 20, 31
  0530544  li 26, 0
  0530548  b 0x530550
  053054c  add 29, 29, 0
  0530550  addi 3, 29, 20
  0530554  li 4, 5
  0530558  clrldi 3, 3, 32
  053055c  clrldi 28, 29, 32
  0530560  bl 0x52fba8
  0530564  mr 31, 3
  0530568  mr 3, 28
  053056c  bl 0x52fbd8
  0530570  cmpdi 7, 31, 0
  0530574  mr 30, 3
  0530578  li 9, 0
  053057c  bt 30, 0x530590
  0530580  lwz 9, 32(27)
  0530584  addi 0, 31, -1
  0530588  divdu 0, 0, 9
  053058c  clrldi 9, 0, 32
  0530590  cmpdi 7, 30, -1
  0530594  bf- 30, 0x5305f4
  0530598  addi 26, 26, 1
  053059c  lwz 0, 24(27)
  05305a0  cmpw 7, 25, 26
  05305a4  bf 30, 0x53054c
  05305a8  ld 0, 256(1)
  05305ac  ld 17, 120(1)
  05305b0  ld 18, 128(1)
  05305b4  mtlr 0
  05305b8  ld 19, 136(1)
  05305bc  ld 20, 144(1)
  05305c0  ld 21, 152(1)
  05305c4  ld 22, 160(1)
  05305c8  ld 23, 168(1)
  05305cc  ld 24, 176(1)
  05305d0  ld 25, 184(1)
  05305d4  ld 26, 192(1)
  05305d8  ld 27, 200(1)
  05305dc  ld 28, 208(1)
  05305e0  ld 29, 216(1)
  05305e4  ld 30, 224(1)
  05305e8  ld 31, 232(1)
  05305ec  addi 1, 1, 240
  05305f0  blr
  05305f4  cmpld 7, 21, 31
  05305f8  bt 29, 0x530598
  05305fc  sradi 0, 30, 5
  0530600  addze 0, 0
  0530604  lwz 31, -29780(2)
  0530608  li 5, 5
  053060c  slwi 3, 0, 2
  0530610  mr 4, 31
  0530614  add 3, 3, 0
  0530618  add 18, 9, 30
  053061c  add 3, 23, 3
  0530620  clrldi 3, 3, 32
  0530624  bl 0x5d0218
  0530628  nop
  053062c  cmpwi 7, 3, 0
  0530630  bt 30, 0x530664
  0530634  sradi 0, 18, 5
  0530638  addze 0, 0
  053063c  mr 4, 31
  0530640  slwi 3, 0, 2
  0530644  li 5, 5
  0530648  add 3, 3, 0
  053064c  add 3, 23, 3
  0530650  clrldi 3, 3, 32
  0530654  bl 0x5d0218
  0530658  nop
  053065c  cmpwi 7, 3, 0
  0530660  bf 30, 0x530598
  0530664  mr 5, 28
  0530668  lwz 17, 28(27)
  053066c  clrldi 3, 24, 32
  0530670  lwz 22, 24(27)
  0530674  clrldi 4, 19, 32
  0530678  lbz 28, 56(27)
  053067c  bl 0x52fcec
  0530680  extsw 0, 30
  0530684  mr 31, 3
  0530688  cmpd 7, 0, 18
  053068c  bt 29, 0x530598
  0530690  clrldi 0, 28, 56
  0530694  addi 11, 30, 1
  0530698  mullw 9, 17, 22
  053069c  add 9, 20, 9
  05306a0  mr 28, 30
  05306a4  li 22, 0
  05306a8  extsw 17, 11
  05306ac  mulld 0, 30, 0
  05306b0  add 30, 9, 0
  05306b4  b 0x5306dc
  05306b8  add 31, 31, 3
  05306bc  add 0, 17, 22
  05306c0  lbz 9, 56(27)
  05306c4  addi 28, 28, 1
  05306c8  cmpd 7, 0, 18
  05306cc  clrlwi 9, 9, 24
  05306d0  addi 22, 22, 1
  05306d4  add 30, 30, 9
  05306d8  bt 29, 0x530598
  05306dc  srawi 11, 28, 5
  05306e0  addze 11, 11
  05306e4  clrlwi 9, 28, 27
  05306e8  slwi 0, 11, 2
  05306ec  cmpwi 7, 9, 0
  05306f0  add 0, 0, 11
  05306f4  clrldi 3, 30, 32
  05306f8  add 0, 23, 0
  05306fc  rldicl 8, 31, 32, 32
  0530700  clrldi 9, 0, 32
  0530704  rldicl 11, 31, 48, 16
  0530708  rldicl 0, 31, 40, 24
  053070c  rldicl 10, 31, 56, 8
  0530710  bf 30, 0x530728
  0530714  stb 31, 4(9)
  0530718  stb 8, 0(9)
  053071c  stb 0, 1(9)
  0530720  stb 11, 2(9)
  0530724  stb 10, 3(9)
  0530728  lbz 4, 56(27)
  053072c  bl 0x52fba8
  0530730  cmpdi 3, 0
  0530734  bf 2, 0x5306b8
  0530738  add 31, 31, 21
  053073c  b 0x5306bc

FUN_00530740:   # 0x530740, 0x30 bytes
  0530740  mr 9, 3
  0530744  mflr 0
  0530748  stdu 1, -112(1)
  053074c  std 0, 128(1)
  0530750  lwz 0, -29776(2)
  0530754  stw 0, 0(9)
  0530758  bl 0x5e387c
  053075c  nop
  0530760  ld 0, 128(1)
  0530764  addi 1, 1, 112
  0530768  mtlr 0
  053076c  blr

FUN_00530770:   # 0x530770, 0xc bytes
  0530770  lwz 0, -29776(2)
  0530774  stw 0, 0(3)
  0530778  blr

FUN_0053077c:   # 0x53077c, 0xc bytes
  053077c  lwz 0, -29776(2)
  0530780  stw 0, 0(3)
  0530784  blr

FUN_00530788:   # 0x530788, 0xf4 bytes
  0530788  lwz 0, -29776(2)
  053078c  stw 0, 0(3)
  0530790  lwz 6, 4(4)
  0530794  lwz 7, 0(4)
  0530798  srwi 0, 6, 16
  053079c  lwz 8, 8(4)
  05307a0  lwz 5, 12(4)
  05307a4  cmplwi 7, 0, 2
  05307a8  lwz 9, 20(4)
  05307ac  lwz 0, 16(4)
  05307b0  lwz 11, 24(4)
  05307b4  lwz 10, 28(4)
  05307b8  stw 7, 8(3)
  05307bc  stw 8, 16(3)
  05307c0  stw 0, 24(3)
  05307c4  stw 9, 28(3)
  05307c8  stw 11, 32(3)
  05307cc  stw 10, 36(3)
  05307d0  stw 6, 12(3)
  05307d4  stw 5, 20(3)
  05307d8  bf 29, 0x53081c
  05307dc  ld 0, 40(4)
  05307e0  ld 9, 32(4)
  05307e4  std 0, 48(3)
  05307e8  std 9, 40(3)
  05307ec  lwz 9, 32(3)
  05307f0  cmplwi 7, 9, 256
  05307f4  bf- 29, 0x53084c
  05307f8  lis 0, 1
  05307fc  cmplw 7, 9, 0
  0530800  bt- 29, 0x530858
  0530804  li 0, 2
  0530808  stb 0, 56(3)
  053080c  lwz 0, 36(3)
  0530810  rldicl 0, 0, 62, 63
  0530814  stb 0, 57(3)
  0530818  blr
  053081c  cmplwi 7, 5, 32
  0530820  bf 29, 0x530840
  0530824  addi 0, 5, -32
  0530828  stw 0, 20(3)
  053082c  lwz 9, 20(3)
  0530830  li 0, 32
  0530834  std 9, 48(3)
  0530838  std 0, 40(3)
  053083c  b 0x5307ec
  0530840  li 0, 0
  0530844  stw 0, 20(3)
  0530848  b 0x53082c
  053084c  li 0, 1
  0530850  stb 0, 56(3)
  0530854  b 0x53080c
  0530858  lis 0, 256
  053085c  cmplw 7, 9, 0
  0530860  bt- 29, 0x530870
  0530864  li 0, 3
  0530868  stb 0, 56(3)
  053086c  b 0x53080c
  0530870  li 0, 4
  0530874  stb 0, 56(3)
  0530878  b 0x53080c

_ZN4cell4fios5PSArc13ArchiveParser7sortTOCEPv:   # 0x53087c, 0x58 bytes
  053087c  stdu 1, -128(1)
  0530880  mflr 0
  0530884  std 31, 120(1)
  0530888  mr 31, 3
  053088c  std 0, 144(1)
  0530890  clrldi 3, 4, 32
  0530894  lwz 0, 36(31)
  0530898  rlwinm 0, 0, 0, 29, 29
  053089c  cmpwi 7, 0, 0
  05308a0  bf 30, 0x5308b8
  05308a4  lwz 6, -29784(2)
  05308a8  lwz 4, 28(31)
  05308ac  lwz 5, 24(31)
  05308b0  bl 0x5c8308
  05308b4  nop
  05308b8  li 0, 1
  05308bc  stb 0, 57(31)
  05308c0  ld 0, 144(1)
  05308c4  ld 31, 120(1)
  05308c8  addi 1, 1, 128
  05308cc  mtlr 0
  05308d0  blr

FUN_005308d4:   # 0x5308d4, 0xf4 bytes
  05308d4  lwz 0, -29776(2)
  05308d8  stw 0, 0(3)
  05308dc  lwz 6, 4(4)
  05308e0  lwz 7, 0(4)
  05308e4  srwi 0, 6, 16
  05308e8  lwz 8, 8(4)
  05308ec  lwz 5, 12(4)
  05308f0  cmplwi 7, 0, 2
  05308f4  lwz 9, 20(4)
  05308f8  lwz 0, 16(4)
  05308fc  lwz 11, 24(4)
  0530900  lwz 10, 28(4)
  0530904  stw 7, 8(3)
  0530908  stw 8, 16(3)
  053090c  stw 0, 24(3)
  0530910  stw 9, 28(3)
  0530914  stw 11, 32(3)
  0530918  stw 10, 36(3)
  053091c  stw 6, 12(3)
  0530920  stw 5, 20(3)
  0530924  bf 29, 0x530968
  0530928  ld 0, 40(4)
  053092c  ld 9, 32(4)
  0530930  std 0, 48(3)
  0530934  std 9, 40(3)
  0530938  lwz 9, 32(3)
  053093c  cmplwi 7, 9, 256
  0530940  bf- 29, 0x530998
  0530944  lis 0, 1
  0530948  cmplw 7, 9, 0
  053094c  bt- 29, 0x5309a4
  0530950  li 0, 2
  0530954  stb 0, 56(3)
  0530958  lwz 0, 36(3)
  053095c  rldicl 0, 0, 62, 63
  0530960  stb 0, 57(3)
  0530964  blr
  0530968  cmplwi 7, 5, 32
  053096c  bf 29, 0x53098c
  0530970  addi 0, 5, -32
  0530974  stw 0, 20(3)
  0530978  lwz 9, 20(3)
  053097c  li 0, 32
  0530980  std 9, 48(3)
  0530984  std 0, 40(3)
  0530988  b 0x530938
  053098c  li 0, 0
  0530990  stw 0, 20(3)
  0530994  b 0x530978
  0530998  li 0, 1
  053099c  stb 0, 56(3)
  05309a0  b 0x530958
  05309a4  lis 0, 256
  05309a8  cmplw 7, 9, 0
  05309ac  bt- 29, 0x5309bc
  05309b0  li 0, 3
  05309b4  stb 0, 56(3)
  05309b8  b 0x530958
  05309bc  li 0, 4
  05309c0  stb 0, 56(3)
  05309c4  b 0x530958
