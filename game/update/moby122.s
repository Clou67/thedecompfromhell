# game/update/moby122.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

FUN_0020bb70:   # 0x20bb70, 0x1a8 bytes
  020bb70  stdu 1, -192(1)
  020bb74  mflr 0
  020bb78  std 0, 208(1)
  020bb7c  stfd 30, 176(1)
  020bb80  stfd 31, 184(1)
  020bb84  std 27, 136(1)
  020bb88  ori 27, 3, 0
  020bb8c  std 31, 168(1)
  020bb90  li 3, 122
  020bb94  std 30, 160(1)
  020bb98  ori 31, 7, 0
  020bb9c  std 29, 152(1)
  020bba0  ori 30, 6, 0
  020bba4  std 28, 144(1)
  020bba8  ori 29, 5, 0
  020bbac  std 26, 128(1)
  020bbb0  std 25, 120(1)
  020bbb4  ori 28, 4, 0
  020bbb8  bl 0xefa28
  020bbbc  nop
  020bbc0  ori 26, 3, 0
  020bbc4  cmpwi 26, 0
  020bbc8  bt 2, 0x20bce0
  020bbcc  li 7, 255
  020bbd0  ori 25, 29, 0
  020bbd4  li 8, 1
  020bbd8  lwz 29, 120(26)
  020bbdc  li 9, 128
  020bbe0  stb 7, 48(26)
  020bbe4  sth 7, 50(26)
  020bbe8  ori 3, 26, 0
  020bbec  stb 8, 49(26)
  020bbf0  li 4, 127
  020bbf4  stb 9, 35(26)
  020bbf8  li 5, 127
  020bbfc  li 6, 127
  020bc00  bl 0xf1ec8
  020bc04  nop
  020bc08  lfs 1, 0(27)
  020bc0c  lis 3, 33
  020bc10  stfs 1, 16(26)
  020bc14  lfs 1, 4(27)
  020bc18  addi 3, 3, -17568
  020bc1c  stfs 1, 20(26)
  020bc20  lfs 1, 8(27)
  020bc24  stfs 1, 24(26)
  020bc28  lfs 1, 12(27)
  020bc2c  lis 27, 114
  020bc30  stfs 1, 28(26)
  020bc34  lfs 1, 0(28)
  020bc38  stfs 1, 0(29)
  020bc3c  lfs 1, 4(28)
  020bc40  stfs 1, 4(29)
  020bc44  lfs 1, 8(28)
  020bc48  stfs 1, 8(29)
  020bc4c  lfs 1, 12(28)
  020bc50  stfs 1, 12(29)
  020bc54  lfs 31, 0(3)
  020bc58  lfs 30, 4(3)
  020bc5c  lfs 3, -3052(27)
  020bc60  fmuls 1, 3, 31
  020bc64  fmuls 2, 3, 30
  020bc68  bl 0xfcbe8
  020bc6c  nop
  020bc70  stfs 1, 16(29)
  020bc74  lfs 2, -3052(27)
  020bc78  fmuls 1, 2, 31
  020bc7c  fmuls 2, 2, 30
  020bc80  bl 0xfcbe8
  020bc84  nop
  020bc88  stfs 1, 20(29)
  020bc8c  sth 25, 24(29)
  020bc90  cmpwi 30, 0
  020bc94  sth 25, 26(29)
  020bc98  lfs 1, 44(26)
  020bc9c  bf 2, 0x20bcc4
  020bca0  lis 3, 33
  020bca4  addi 3, 3, -17568
  020bca8  lfs 1, 8(3)
  020bcac  lfs 2, 12(3)
  020bcb0  bl 0xfcbe8
  020bcb4  nop
  020bcb8  lfs 2, 44(26)
  020bcbc  fmuls 1, 2, 1
  020bcc0  stfs 1, 44(26)
  020bcc4  slwi 4, 31, 1
  020bcc8  stfs 1, 28(29)
  020bccc  ori 3, 26, 0
  020bcd0  or 4, 30, 4
  020bcd4  stb 4, 188(26)
  020bcd8  bl 0xf31a8
  020bcdc  nop
  020bce0  ori 3, 26, 0
  020bce4  ld 0, 208(1)
  020bce8  mtlr 0
  020bcec  lfd 30, 176(1)
  020bcf0  lfd 31, 184(1)
  020bcf4  ld 25, 120(1)
  020bcf8  ld 26, 128(1)
  020bcfc  ld 27, 136(1)
  020bd00  ld 28, 144(1)
  020bd04  ld 29, 152(1)
  020bd08  ld 30, 160(1)
  020bd0c  ld 31, 168(1)
  020bd10  addi 1, 1, 192
  020bd14  blr

UpdateMoby_122:   # 0x20bd30, 0x3b8 bytes
  020bd30  stdu 1, -240(1)
  020bd34  mflr 0
  020bd38  std 0, 256(1)
  020bd3c  stfd 28, 208(1)
  020bd40  stfd 29, 216(1)
  020bd44  stfd 30, 224(1)
  020bd48  stfd 31, 232(1)
  020bd4c  std 31, 200(1)
  020bd50  lbz 4, 188(3)
  020bd54  std 30, 192(1)
  020bd58  ori 31, 3, 0
  020bd5c  lwz 30, 120(3)
  020bd60  clrlwi 3, 4, 31
  020bd64  std 29, 184(1)
  020bd68  std 28, 176(1)
  020bd6c  std 27, 168(1)
  020bd70  std 26, 160(1)
  020bd74  cmpwi 3, 0
  020bd78  bt 2, 0x20bf8c
  020bd7c  lis 3, 33
  020bd80  li 27, 0
  020bd84  addi 3, 3, -17128
  020bd88  ori 29, 27, 0
  020bd8c  addic 28, 31, 16
  020bd90  lfs 28, 0(3)
  020bd94  lfs 29, 4(3)
  020bd98  lfs 30, 8(3)
  020bd9c  lfs 31, 12(3)
  020bda0  lis 3, 12287
  020bda4  fmr 1, 29
  020bda8  lis 4, 12032
  020bdac  fmr 2, 30
  020bdb0  lis 5, 12032
  020bdb4  ori 3, 3, 65535
  020bdb8  ori 4, 4, 20479
  020bdbc  lis 6, 12032
  020bdc0  ori 5, 5, 65535
  020bdc4  ori 6, 6, 32767
  020bdc8  stw 3, 128(1)
  020bdcc  stw 4, 140(1)
  020bdd0  stw 5, 132(1)
  020bdd4  stw 6, 136(1)
  020bdd8  stw 29, 112(1)
  020bddc  stw 29, 116(1)
  020bde0  stw 29, 120(1)
  020bde4  stw 29, 124(1)
  020bde8  bl 0xfcbe8
  020bdec  nop
  020bdf0  stfs 1, 112(1)
  020bdf4  fmr 2, 30
  020bdf8  fmr 1, 29
  020bdfc  bl 0xfcbe8
  020be00  nop
  020be04  stfs 1, 116(1)
  020be08  fmr 2, 30
  020be0c  fmr 1, 29
  020be10  bl 0xfcbe8
  020be14  nop
  020be18  lfs 2, 116(1)
  020be1c  lfs 3, 112(1)
  020be20  fmuls 4, 2, 2
  020be24  lis 3, 114
  020be28  lfs 5, -3052(3)
  020be2c  fmadds 4, 3, 3, 4
  020be30  stfs 1, 120(1)
  020be34  lbz 3, 188(31)
  020be38  fmadds 4, 1, 1, 4
  020be3c  rlwinm 3, 3, 0, 24, 30
  020be40  cmpwi 3, 0
  020be44  fsqrts 4, 4
  020be48  fdivs 5, 5, 4
  020be4c  fsub 6, 28, 4
  020be50  fsub 7, 28, 4
  020be54  fsub 8, 28, 4
  020be58  fsub 9, 4, 28
  020be5c  fsub 10, 4, 28
  020be60  fsub 4, 4, 28
  020be64  fmuls 3, 3, 5
  020be68  fmuls 2, 2, 5
  020be6c  fmuls 1, 1, 5
  020be70  fsel 5, 6, 28, 3
  020be74  fsel 6, 7, 28, 2
  020be78  fsel 7, 8, 28, 1
  020be7c  fsel 3, 9, 5, 3
  020be80  fsel 2, 10, 6, 2
  020be84  fsel 1, 4, 7, 1
  020be88  stfs 3, 112(1)
  020be8c  stfs 2, 116(1)
  020be90  stfs 1, 120(1)
  020be94  bt 2, 0x20bf24
  020be98  li 3, 4
  020be9c  bl 0xfc620
  020bea0  nop
  020bea4  sldi 3, 3, 2
  020bea8  lbz 4, 188(31)
  020beac  addc 3, 3, 1
  020beb0  srwi 4, 4, 1
  020beb4  clrldi 3, 3, 32
  020beb8  lwz 3, 128(3)
  020bebc  extsw 3, 3
  020bec0  bl 0x10a668
  020bec4  nop
  020bec8  lbz 4, 188(31)
  020becc  ori 26, 3, 0
  020bed0  li 3, 20479
  020bed4  srwi 4, 4, 1
  020bed8  bl 0x10a668
  020bedc  nop
  020bee0  lis 5, 114
  020bee4  ori 6, 3, 0
  020bee8  addic 4, 1, 112
  020beec  ori 3, 28, 0
  020bef0  li 8, 50
  020bef4  lfs 1, -3056(5)
  020bef8  ori 5, 26, 0
  020befc  fmuls 1, 1, 31
  020bf00  li 9, 120
  020bf04  li 10, 1
  020bf08  fctiwz 1, 1
  020bf0c  stfd 1, 144(1)
  020bf10  lwz 7, 148(1)
  020bf14  extsw 7, 7
  020bf18  bl 0x121740
  020bf1c  nop
  020bf20  b 0x20bf80
  020bf24  li 3, 4
  020bf28  bl 0xfc620
  020bf2c  nop
  020bf30  lis 4, 114
  020bf34  sldi 3, 3, 2
  020bf38  li 6, 20479
  020bf3c  addc 3, 3, 1
  020bf40  li 8, 50
  020bf44  lfs 1, -3056(4)
  020bf48  clrldi 5, 3, 32
  020bf4c  fmuls 1, 1, 31
  020bf50  addic 4, 1, 112
  020bf54  ori 3, 28, 0
  020bf58  li 9, 120
  020bf5c  lwz 5, 128(5)
  020bf60  li 10, 1
  020bf64  extsw 5, 5
  020bf68  fctiwz 1, 1
  020bf6c  stfd 1, 144(1)
  020bf70  lwz 7, 148(1)
  020bf74  extsw 7, 7
  020bf78  bl 0x121740
  020bf7c  nop
  020bf80  addic 27, 27, 1
  020bf84  cmpwi 27, 1
  020bf88  bt 0, 0x20bda0
  020bf8c  lfs 1, 64(31)
  020bf90  lfs 2, 16(30)
  020bf94  bl 0x502578
  020bf98  nop
  020bf9c  stfs 1, 64(31)
  020bfa0  lfs 1, 68(31)
  020bfa4  lfs 2, 20(30)
  020bfa8  bl 0x502578
  020bfac  nop
  020bfb0  stfs 1, 68(31)
  020bfb4  lfs 1, 16(31)
  020bfb8  lfs 2, 0(30)
  020bfbc  lis 3, 33
  020bfc0  fadds 1, 1, 2
  020bfc4  addi 3, 3, -17128
  020bfc8  lfs 2, 20(31)
  020bfcc  lis 4, 114
  020bfd0  lfs 3, 24(31)
  020bfd4  stfs 1, 16(31)
  020bfd8  lfs 1, 4(30)
  020bfdc  fadds 1, 2, 1
  020bfe0  stfs 1, 20(31)
  020bfe4  lfs 1, 8(30)
  020bfe8  fadds 1, 3, 1
  020bfec  stfs 1, 24(31)
  020bff0  lfs 1, 16(3)
  020bff4  lfs 2, 8(30)
  020bff8  lfs 3, -3048(4)
  020bffc  fnmsubs 1, 3, 1, 2
  020c000  stfs 1, 8(30)
  020c004  lwz 3, 16(31)
  020c008  cmpwi 3, 0
  020c00c  bt 0, 0x20c028
  020c010  lwz 3, 20(31)
  020c014  cmpwi 3, 0
  020c018  bt 0, 0x20c028
  020c01c  lwz 3, 24(31)
  020c020  cmpwi 3, 0
  020c024  bf 0, 0x20c038
  020c028  ori 3, 31, 0
  020c02c  bl 0xefb38
  020c030  nop
  020c034  b 0x20c0b0
  020c038  lhz 3, 26(30)
  020c03c  lhz 4, 24(30)
  020c040  extsh 3, 3
  020c044  extsh 4, 4
  020c048  srawi 5, 3, 2
  020c04c  addze 5, 5
  020c050  cmpw 4, 5
  020c054  bf 0, 0x20c090
  020c058  srawi 3, 3, 2
  020c05c  addze 3, 3
  020c060  extsw 3, 3
  020c064  bl 0x502730
  020c068  nop
  020c06c  lhz 3, 24(30)
  020c070  fmr 31, 1
  020c074  extsh 3, 3
  020c078  bl 0x502730
  020c07c  nop
  020c080  lfs 2, 28(30)
  020c084  fmuls 1, 2, 1
  020c088  fdivs 1, 1, 31
  020c08c  stfs 1, 44(31)
  020c090  addic 3, 30, 24
  020c094  bl 0x4fffb4
  020c098  nop
  020c09c  cmpwi 3, 0
  020c0a0  bt 2, 0x20c0b0
  020c0a4  ori 3, 31, 0
  020c0a8  bl 0xefb38
  020c0ac  nop
  020c0b0  ld 0, 256(1)
  020c0b4  mtlr 0
  020c0b8  lfd 28, 208(1)
  020c0bc  lfd 29, 216(1)
  020c0c0  lfd 30, 224(1)
  020c0c4  lfd 31, 232(1)
  020c0c8  ld 26, 160(1)
  020c0cc  ld 27, 168(1)
  020c0d0  ld 28, 176(1)
  020c0d4  ld 29, 184(1)
  020c0d8  ld 30, 192(1)
  020c0dc  ld 31, 200(1)
  020c0e0  addi 1, 1, 240
  020c0e4  blr
