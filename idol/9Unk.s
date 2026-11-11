# idol/9Unk.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

idol::CreateSndParsingThread:   # 0x63fb20, 0x138 bytes
  063fb20  stdu 1, -208(1)
  063fb24  mflr 0
  063fb28  std 31, 200(1)
  063fb2c  mr 31, 3
  063fb30  std 0, 224(1)
  063fb34  std 29, 184(1)
  063fb38  li 0, -1
  063fb3c  addi 29, 3, 16
  063fb40  clrldi 0, 0, 32
  063fb44  clrldi 29, 29, 32
  063fb48  std 28, 176(1)
  063fb4c  li 28, 0
  063fb50  std 24, 144(1)
  063fb54  std 30, 192(1)
  063fb58  std 0, 8(31)
  063fb5c  li 9, 16
  063fb60  lwz 30, -29380(2)
  063fb64  li 0, 2
  063fb68  mr 24, 4
  063fb6c  mr 3, 29
  063fb70  addi 4, 1, 120
  063fb74  std 25, 152(1)
  063fb78  std 26, 160(1)
  063fb7c  std 27, 168(1)
  063fb80  stw 28, 0(31)
  063fb84  mr 25, 6
  063fb88  mr 26, 7
  063fb8c  stw 0, 120(1)
  063fb90  stw 9, 124(1)
  063fb94  stb 28, 128(1)
  063fb98  bl 0x6505a4
  063fb9c  ld 2, 40(1)
  063fba0  addi 3, 31, 40
  063fba4  mr 4, 29
  063fba8  clrldi 3, 3, 32
  063fbac  addi 5, 1, 112
  063fbb0  stb 28, 112(1)
  063fbb4  bl 0x6507a4
  063fbb8  ld 2, 40(1)
  063fbbc  addi 0, 31, 8
  063fbc0  cmpwi 7, 3, 0
  063fbc4  clrldi 4, 26, 32
  063fbc8  extsw 6, 24
  063fbcc  clrldi 7, 25, 32
  063fbd0  li 8, 1
  063fbd4  clrldi 3, 0, 32
  063fbd8  clrldi 27, 31, 32
  063fbdc  bf 30, 0x63fc3c
  063fbe0  lwz 9, -32768(30)
  063fbe4  mr 5, 27
  063fbe8  bl 0x650524
  063fbec  ld 2, 40(1)
  063fbf0  cmpwi 7, 3, 0
  063fbf4  mr 3, 27
  063fbf8  bf- 30, 0x63fc4c
  063fbfc  li 0, 1
  063fc00  li 3, 0
  063fc04  stw 0, 4(31)
  063fc08  ld 0, 224(1)
  063fc0c  extsw 3, 3
  063fc10  ld 24, 144(1)
  063fc14  ld 25, 152(1)
  063fc18  mtlr 0
  063fc1c  ld 26, 160(1)
  063fc20  ld 27, 168(1)
  063fc24  ld 28, 176(1)
  063fc28  ld 29, 184(1)
  063fc2c  ld 30, 192(1)
  063fc30  ld 31, 200(1)
  063fc34  addi 1, 1, 208
  063fc38  blr
  063fc3c  mr 3, 27
  063fc40  bl 0x63fa4c
  063fc44  li 3, -1
  063fc48  b 0x63fc08
  063fc4c  bl 0x63fa4c
  063fc50  li 3, -1
  063fc54  b 0x63fc08

FUN_0063fc58:   # 0x63fc58, 0x28 bytes
  063fc58  stdu 1, -128(1)
  063fc5c  mflr 0
  063fc60  std 0, 144(1)
  063fc64  bl 0x650784
  063fc68  ld 2, 40(1)
  063fc6c  ld 0, 144(1)
  063fc70  extsw 3, 3
  063fc74  mtlr 0
  063fc78  addi 1, 1, 128
  063fc7c  blr

FUN_0063fc80:   # 0x63fc80, 0x30 bytes
  063fc80  stdu 1, -128(1)
  063fc84  mflr 0
  063fc88  std 0, 144(1)
  063fc8c  li 0, 0
  063fc90  stw 0, 4(3)
  063fc94  mr 3, 4
  063fc98  bl 0x650744
  063fc9c  ld 2, 40(1)
  063fca0  ld 0, 144(1)
  063fca4  addi 1, 1, 128
  063fca8  mtlr 0
  063fcac  blr

FUN_0063fcb0:   # 0x63fcb0, 0x28 bytes
  063fcb0  stdu 1, -128(1)
  063fcb4  mflr 0
  063fcb8  std 0, 144(1)
  063fcbc  bl 0x6504c4
  063fcc0  ld 2, 40(1)
  063fcc4  ld 0, 144(1)
  063fcc8  extsw 3, 3
  063fccc  mtlr 0
  063fcd0  addi 1, 1, 128
  063fcd4  blr

FUN_0063fcd8:   # 0x63fcd8, 0xcc bytes
  063fcd8  stdu 1, -160(1)
  063fcdc  mflr 0
  063fce0  std 31, 152(1)
  063fce4  std 0, 176(1)
  063fce8  addi 0, 3, 16
  063fcec  std 27, 120(1)
  063fcf0  clrldi 31, 0, 32
  063fcf4  std 28, 128(1)
  063fcf8  mr 27, 3
  063fcfc  mr 28, 4
  063fd00  mr 3, 31
  063fd04  li 4, 0
  063fd08  std 29, 136(1)
  063fd0c  bl 0x6504c4
  063fd10  ld 2, 40(1)
  063fd14  addi 29, 27, 40
  063fd18  cmpwi 7, 3, 0
  063fd1c  extsw 4, 28
  063fd20  clrldi 3, 29, 32
  063fd24  li 9, -1
  063fd28  bf 30, 0x63fd88
  063fd2c  bl 0x650564
  063fd30  ld 2, 40(1)
  063fd34  mr 29, 3
  063fd38  mr 3, 31
  063fd3c  bl 0x6504e4
  063fd40  ld 2, 40(1)
  063fd44  lis 0, -32767
  063fd48  ori 0, 0, 11
  063fd4c  cmpwi 6, 29, 0
  063fd50  cmpw 7, 29, 0
  063fd54  li 9, 1
  063fd58  bt 30, 0x63fd64
  063fd5c  li 9, 0
  063fd60  bf 26, 0x63fd94
  063fd64  ld 0, 176(1)
  063fd68  extsw 3, 9
  063fd6c  ld 27, 120(1)
  063fd70  ld 28, 128(1)
  063fd74  mtlr 0
  063fd78  ld 29, 136(1)
  063fd7c  ld 31, 152(1)
  063fd80  addi 1, 1, 160
  063fd84  blr
  063fd88  li 0, 1
  063fd8c  stw 0, 0(27)
  063fd90  b 0x63fd64
  063fd94  li 0, 1
  063fd98  li 9, -1
  063fd9c  stw 0, 0(27)
  063fda0  b 0x63fd64

FUN_0063fda4:   # 0x63fda4, 0x28 bytes
  063fda4  stdu 1, -128(1)
  063fda8  mflr 0
  063fdac  std 0, 144(1)
  063fdb0  bl 0x6504e4
  063fdb4  ld 2, 40(1)
  063fdb8  ld 0, 144(1)
  063fdbc  extsw 3, 3
  063fdc0  mtlr 0
  063fdc4  addi 1, 1, 128
  063fdc8  blr

FUN_0063fdcc:   # 0x63fdcc, 0x88 bytes
  063fdcc  lis 0, -32767
  063fdd0  std 30, -16(1)
  063fdd4  ori 0, 0, 13
  063fdd8  lwz 30, -29376(2)
  063fddc  cmpw 7, 3, 0
  063fde0  bt 30, 0x63fe2c
  063fde4  bf 29, 0x63fe10
  063fde8  xoris 0, 3, 32769
  063fdec  cmpwi 7, 0, 42
  063fdf0  bt 30, 0x63fe44
  063fdf4  xoris 0, 3, 32769
  063fdf8  cmpwi 7, 0, 47
  063fdfc  bt 30, 0x63fe3c
  063fe00  lwz 3, -32764(30)
  063fe04  clrldi 3, 3, 32
  063fe08  ld 30, -16(1)
  063fe0c  blr
  063fe10  xoris 0, 3, 32769
  063fe14  cmpwi 7, 0, 10
  063fe18  bf 30, 0x63fe00
  063fe1c  lwz 3, -32768(30)
  063fe20  ld 30, -16(1)
  063fe24  clrldi 3, 3, 32
  063fe28  blr
  063fe2c  lwz 3, -32756(30)
  063fe30  ld 30, -16(1)
  063fe34  clrldi 3, 3, 32
  063fe38  blr
  063fe3c  lwz 3, -32760(30)
  063fe40  b 0x63fe04
  063fe44  lwz 3, -32752(30)
  063fe48  ld 30, -16(1)
  063fe4c  clrldi 3, 3, 32
  063fe50  blr

FUN_0063fe54:   # 0x63fe54, 0x8 bytes
  063fe54  li 3, 1
  063fe58  blr

FUN_0063fe5c:   # 0x63fe5c, 0x8 bytes
  063fe5c  li 3, 0
  063fe60  blr

FUN_0063fe64:   # 0x63fe64, 0x8 bytes
  063fe64  li 3, 0
  063fe68  blr

FUN_0063fe6c:   # 0x63fe6c, 0x3c bytes
  063fe6c  lwz 9, 36(3)
  063fe70  cmpwi 7, 4, 0
  063fe74  stw 6, 52(9)
  063fe78  stw 4, 44(9)
  063fe7c  bf 30, 0x63fe94
  063fe80  li 0, 1
  063fe84  stw 0, 56(9)
  063fe88  li 0, -1
  063fe8c  stw 0, 40(9)
  063fe90  blr
  063fe94  li 0, -4
  063fe98  stw 0, 56(9)
  063fe9c  li 0, -1
  063fea0  stw 0, 40(9)
  063fea4  blr

FUN_0063fea8:   # 0x63fea8, 0x8c bytes
  063fea8  stdu 1, -128(1)
  063feac  mflr 0
  063feb0  std 30, 112(1)
  063feb4  lwz 30, -29376(2)
  063feb8  mr 4, 6
  063febc  std 0, 144(1)
  063fec0  std 31, 120(1)
  063fec4  mulli 5, 5, 8024
  063fec8  lwz 9, -32748(30)
  063fecc  lwz 0, 0(9)
  063fed0  add 5, 5, 0
  063fed4  addi 5, 5, 8
  063fed8  clrldi 3, 5, 32
  063fedc  bl 0x636e78
  063fee0  nop
  063fee4  lwz 0, 40(3)
  063fee8  mr 31, 3
  063feec  cmpwi 7, 0, 0
  063fef0  extsw 3, 0
  063fef4  bt 28, 0x63ff14
  063fef8  bl 0x64ff64
  063fefc  ld 2, 40(1)
  063ff00  li 0, -1
  063ff04  cmpwi 7, 3, 0
  063ff08  stw 0, 40(31)
  063ff0c  li 3, -4
  063ff10  bf 30, 0x63ff18
  063ff14  li 3, 0
  063ff18  ld 0, 144(1)
  063ff1c  extsw 3, 3
  063ff20  ld 30, 112(1)
  063ff24  ld 31, 120(1)
  063ff28  mtlr 0
  063ff2c  addi 1, 1, 128
  063ff30  blr
