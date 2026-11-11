# game/update/camera0.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

SECTION_HEADER_CAMERA0:   # 0x2bac4, 0x14 bytes
  002bac4  lis 3, 114
  002bac8  lis 4, 1
  002bacc  addic 3, 3, -11244
  002bad0  stw 4, 72(3)
  002bad4  blr

STUB_0002bad8:   # 0x2bad8, 0x4 bytes
  002bad8  blr

Cam0_GetHeroPos:   # 0x2badc, 0x2c bytes
  002badc  lis 3, 151
  002bae0  addic 3, 3, -25376
  002bae4  lfs 1, 128(3)
  002bae8  stfs 1, 0(4)
  002baec  lfs 1, 132(3)
  002baf0  stfs 1, 4(4)
  002baf4  lfs 1, 136(3)
  002baf8  stfs 1, 8(4)
  002bafc  lfs 1, 140(3)
  002bb00  stfs 1, 12(4)
  002bb04  blr

CollPrimSphere:   # 0x2bb10, 0x174 bytes
  002bb10  stdu 1, -128(1)
  002bb14  mflr 0
  002bb18  std 0, 144(1)
  002bb1c  stfd 31, 120(1)
  002bb20  std 31, 112(1)
  002bb24  ori 31, 3, 0
  002bb28  fmr 31, 1
  002bb2c  lfs 1, 0(31)
  002bb30  lfs 2, 8(31)
  002bb34  stfs 1, 48(1)
  002bb38  stfs 2, 56(1)
  002bb3c  lfs 1, 4(31)
  002bb40  lfs 2, 12(31)
  002bb44  stfs 1, 52(1)
  002bb48  stfs 2, 60(1)
  002bb4c  fmr 1, 31
  002bb50  ld 3, 48(1)
  002bb54  ld 4, 56(1)
  002bb58  bl 0x558f8
  002bb5c  nop
  002bb60  cmpwi 3, 0
  002bb64  bt 2, 0x2bc68
  002bb68  lis 4, 165
  002bb6c  lwz 3, 20(3)
  002bb70  slwi 3, 3, 7
  002bb74  lwz 4, 7112(4)
  002bb78  lfs 1, 4(31)
  002bb7c  addc 3, 4, 3
  002bb80  lfs 2, 0(31)
  002bb84  clrldi 3, 3, 32
  002bb88  lfs 3, 8(31)
  002bb8c  lis 4, 3
  002bb90  lfs 4, 52(3)
  002bb94  lfs 5, 48(3)
  002bb98  fsubs 1, 1, 4
  002bb9c  lfs 6, 56(3)
  002bba0  lfs 7, 4(3)
  002bba4  fsubs 2, 2, 5
  002bba8  lfs 8, 0(3)
  002bbac  fsubs 3, 3, 6
  002bbb0  fmuls 7, 7, 7
  002bbb4  lfs 10, 8(3)
  002bbb8  addi 3, 4, -17656
  002bbbc  fmuls 9, 1, 1
  002bbc0  fmadds 7, 8, 8, 7
  002bbc4  fmadds 8, 2, 2, 9
  002bbc8  lfs 9, 0(3)
  002bbcc  fmadds 7, 10, 10, 7
  002bbd0  lfs 10, 4(3)
  002bbd4  lis 3, 161
  002bbd8  fmadds 8, 3, 3, 8
  002bbdc  fsqrts 7, 7
  002bbe0  addic 4, 3, 2368
  002bbe4  lfs 12, 12(31)
  002bbe8  li 3, 1
  002bbec  frsqrte 11, 8
  002bbf0  stfs 12, 60(4)
  002bbf4  stfs 12, 44(4)
  002bbf8  fmuls 13, 8, 11
  002bbfc  fmuls 0, 9, 11
  002bc00  fnmsubs 13, 13, 11, 10
  002bc04  fmadds 11, 13, 0, 11
  002bc08  fmuls 13, 8, 11
  002bc0c  fmuls 0, 9, 11
  002bc10  fnmsubs 13, 13, 11, 10
  002bc14  fadds 31, 7, 31
  002bc18  fmadds 11, 13, 0, 11
  002bc1c  fmuls 8, 8, 11
  002bc20  fmuls 9, 9, 11
  002bc24  fnmsubs 8, 8, 11, 10
  002bc28  fmadds 8, 8, 9, 11
  002bc2c  fmuls 9, 31, 8
  002bc30  fmuls 7, 7, 8
  002bc34  fmadds 8, 2, 9, 5
  002bc38  fmadds 10, 1, 9, 4
  002bc3c  fmadds 9, 3, 9, 6
  002bc40  fmadds 2, 2, 7, 5
  002bc44  fmadds 1, 1, 7, 4
  002bc48  fmadds 3, 3, 7, 6
  002bc4c  stfs 8, 48(4)
  002bc50  stfs 10, 52(4)
  002bc54  stfs 9, 56(4)
  002bc58  stfs 2, 32(4)
  002bc5c  stfs 1, 36(4)
  002bc60  stfs 3, 40(4)
  002bc64  b 0x2bc6c
  002bc68  li 3, 0
  002bc6c  ld 0, 144(1)
  002bc70  mtlr 0
  002bc74  lfd 31, 120(1)
  002bc78  ld 31, 112(1)
  002bc7c  addi 1, 1, 128
  002bc80  blr

camera0_IsPntInCollPrim:   # 0x2bc88, 0x70 bytes
  002bc88  stdu 1, -112(1)
  002bc8c  mflr 0
  002bc90  std 0, 128(1)
  002bc94  lis 4, 3
  002bc98  lfs 1, 0(3)
  002bc9c  addi 4, 4, -17276
  002bca0  lfs 2, 8(3)
  002bca4  lfs 3, 0(4)
  002bca8  stfs 1, 48(1)
  002bcac  stfs 2, 56(1)
  002bcb0  lfs 2, 4(3)
  002bcb4  fmr 1, 3
  002bcb8  lfs 3, 12(3)
  002bcbc  stfs 2, 52(1)
  002bcc0  stfs 3, 60(1)
  002bcc4  ld 3, 48(1)
  002bcc8  ld 4, 56(1)
  002bccc  bl 0x558f8
  002bcd0  nop
  002bcd4  cmpwi 3, 0
  002bcd8  bt 2, 0x2bce4
  002bcdc  li 3, 1
  002bce0  b 0x2bce8
  002bce4  li 3, 0
  002bce8  ld 0, 128(1)
  002bcec  mtlr 0
  002bcf0  addi 1, 1, 112
  002bcf4  blr

STUB_0002bcf8:   # 0x2bcf8, 0x4 bytes
  002bcf8  blr

GetHeroGroundPos:   # 0x2bd08, 0x1cc bytes
  002bd08  stdu 1, -192(1)
  002bd0c  mflr 0
  002bd10  std 0, 208(1)
  002bd14  stfd 28, 160(1)
  002bd18  stfd 29, 168(1)
  002bd1c  stfd 30, 176(1)
  002bd20  stfd 31, 184(1)
  002bd24  std 31, 152(1)
  002bd28  ori 31, 3, 0
  002bd2c  ori 5, 4, 0
  002bd30  lis 3, 151
  002bd34  lis 4, 149
  002bd38  addic 3, 3, -25376
  002bd3c  addic 4, 4, 5056
  002bd40  cmpwi 1, 5, 0
  002bd44  lhz 5, 780(3)
  002bd48  lfs 3, 448(4)
  002bd4c  lfs 2, 452(4)
  002bd50  cmpwi 5, 0
  002bd54  lfs 1, 456(4)
  002bd58  bf 2, 0x2bd7c
  002bd5c  lfs 1, 128(3)
  002bd60  stfs 1, 0(31)
  002bd64  lfs 1, 132(3)
  002bd68  stfs 1, 4(31)
  002bd6c  lfs 1, 136(3)
  002bd70  stfs 1, 8(31)
  002bd74  lfs 31, 140(3)
  002bd78  b 0x2bea8
  002bd7c  lwz 6, 732(3)
  002bd80  lis 5, 16880
  002bd84  lfs 28, 128(3)
  002bd88  srawi 7, 6, 31
  002bd8c  lfs 29, 132(3)
  002bd90  srwi 8, 7, 1
  002bd94  lfs 30, 136(3)
  002bd98  xor 6, 8, 6
  002bd9c  lfs 31, 140(3)
  002bda0  subc 6, 6, 7
  002bda4  lfs 4, 732(3)
  002bda8  cmpw 6, 5
  002bdac  bf 0, 0x2bdb4
  002bdb0  bf 6, 0x2be78
  002bdb4  ori 8, 4, 0
  002bdb8  lis 4, 3
  002bdbc  addi 9, 4, -17156
  002bdc0  addic 4, 1, 128
  002bdc4  li 5, 18
  002bdc8  li 7, 0
  002bdcc  lfs 4, 0(9)
  002bdd0  stfs 31, 124(1)
  002bdd4  fmadds 3, 3, 4, 28
  002bdd8  fmadds 2, 2, 4, 29
  002bddc  fmadds 1, 1, 4, 30
  002bde0  lwz 6, 8320(3)
  002bde4  addic 3, 1, 112
  002bde8  stfs 3, 112(1)
  002bdec  stfs 2, 116(1)
  002bdf0  stfs 1, 120(1)
  002bdf4  lfs 1, 4(9)
  002bdf8  lfs 2, 448(8)
  002bdfc  lfs 3, 452(8)
  002be00  lfs 4, 456(8)
  002be04  fmadds 2, 2, 1, 28
  002be08  stfs 31, 140(1)
  002be0c  fmadds 3, 3, 1, 29
  002be10  fmadds 1, 4, 1, 30
  002be14  stfs 2, 128(1)
  002be18  stfs 3, 132(1)
  002be1c  stfs 1, 136(1)
  002be20  bl 0x57820
  002be24  nop
  002be28  cmpwi 3, 0
  002be2c  bt 2, 0x2be60
  002be30  lis 3, 161
  002be34  addic 4, 3, 2368
  002be38  li 3, 0
  002be3c  lfs 1, 32(4)
  002be40  stfs 1, 0(31)
  002be44  lfs 1, 36(4)
  002be48  stfs 1, 4(31)
  002be4c  lfs 1, 40(4)
  002be50  stfs 1, 8(31)
  002be54  lfs 1, 44(4)
  002be58  stfs 1, 12(31)
  002be5c  b 0x2beb0
  002be60  stfs 28, 0(31)
  002be64  li 3, -1
  002be68  stfs 29, 4(31)
  002be6c  stfs 30, 8(31)
  002be70  stfs 31, 12(31)
  002be74  b 0x2beb0
  002be78  fmuls 3, 4, 3
  002be7c  fmuls 2, 4, 2
  002be80  fmuls 1, 4, 1
  002be84  fneg 3, 3
  002be88  fneg 2, 2
  002be8c  fneg 1, 1
  002be90  fadds 3, 3, 28
  002be94  fadds 2, 2, 29
  002be98  fadds 1, 1, 30
  002be9c  stfs 3, 0(31)
  002bea0  stfs 2, 4(31)
  002bea4  stfs 1, 8(31)
  002bea8  li 3, 1
  002beac  stfs 31, 12(31)
  002beb0  ld 0, 208(1)
  002beb4  mtlr 0
  002beb8  lfd 28, 160(1)
  002bebc  lfd 29, 168(1)
  002bec0  lfd 30, 176(1)
  002bec4  lfd 31, 184(1)
  002bec8  ld 31, 152(1)
  002becc  addi 1, 1, 192
  002bed0  blr

STUB_0002bed4:   # 0x2bed4, 0x4 bytes
  002bed4  blr

InitCamTarget_0:   # 0x2bed8, 0x180 bytes
  002bed8  stdu 1, -144(1)
  002bedc  mflr 0
  002bee0  std 0, 160(1)
  002bee4  std 30, 128(1)
  002bee8  lis 4, 149
  002beec  std 31, 136(1)
  002bef0  lwz 30, 112(3)
  002bef4  addic 31, 4, 5056
  002bef8  li 4, 0
  002befc  addic 3, 1, 112
  002bf00  bl 0x2bd08
  002bf04  lfs 1, 116(1)
  002bf08  lfs 2, 452(31)
  002bf0c  lfs 3, 112(1)
  002bf10  fmuls 1, 1, 2
  002bf14  lfs 4, 448(31)
  002bf18  lfs 5, 120(1)
  002bf1c  lfs 6, 456(31)
  002bf20  li 3, 0
  002bf24  lfs 7, 460(31)
  002bf28  lis 4, 16256
  002bf2c  fmadds 1, 3, 4, 1
  002bf30  fmadds 1, 5, 6, 1
  002bf34  lfs 5, 240(30)
  002bf38  fmuls 4, 4, 1
  002bf3c  fmuls 2, 2, 1
  002bf40  fmuls 1, 6, 1
  002bf44  fsubs 3, 3, 4
  002bf48  stfs 3, 64(30)
  002bf4c  lfs 6, 116(1)
  002bf50  fadds 3, 3, 4
  002bf54  lfs 8, 352(30)
  002bf58  fsubs 6, 6, 2
  002bf5c  stfs 6, 68(30)
  002bf60  lfs 9, 120(1)
  002bf64  fadds 6, 6, 2
  002bf68  sth 3, 262(30)
  002bf6c  fsubs 9, 9, 1
  002bf70  fadds 10, 9, 1
  002bf74  stfs 9, 72(30)
  002bf78  lfs 9, 124(1)
  002bf7c  stfs 4, 80(30)
  002bf80  stfs 9, 76(30)
  002bf84  stfs 2, 84(30)
  002bf88  stfs 1, 88(30)
  002bf8c  stfs 7, 92(30)
  002bf90  stfs 3, 64(30)
  002bf94  stfs 6, 68(30)
  002bf98  stfs 10, 72(30)
  002bf9c  lfs 1, 432(31)
  002bfa0  lfs 2, 436(31)
  002bfa4  lfs 4, 440(31)
  002bfa8  fmadds 7, 1, 5, 3
  002bfac  fmadds 11, 2, 5, 6
  002bfb0  lfs 12, 444(31)
  002bfb4  fmadds 5, 4, 5, 10
  002bfb8  stw 3, 236(30)
  002bfbc  stfs 12, 140(30)
  002bfc0  fmadds 1, 1, 8, 3
  002bfc4  stfs 12, 220(30)
  002bfc8  fmadds 2, 2, 8, 6
  002bfcc  stw 3, 232(30)
  002bfd0  fmadds 4, 4, 8, 10
  002bfd4  stw 3, 228(30)
  002bfd8  stw 3, 224(30)
  002bfdc  stb 3, 260(30)
  002bfe0  stb 3, 261(30)
  002bfe4  stw 4, 264(30)
  002bfe8  stfs 7, 128(30)
  002bfec  stfs 11, 132(30)
  002bff0  stfs 5, 136(30)
  002bff4  stfs 7, 208(30)
  002bff8  stfs 11, 212(30)
  002bffc  stfs 5, 216(30)
  002c000  stfs 3, 160(30)
  002c004  stfs 6, 164(30)
  002c008  stfs 10, 168(30)
  002c00c  stfs 9, 172(30)
  002c010  stw 3, 188(30)
  002c014  stw 3, 184(30)
  002c018  stw 3, 180(30)
  002c01c  stw 3, 176(30)
  002c020  stw 3, 204(30)
  002c024  stw 3, 200(30)
  002c028  stw 3, 196(30)
  002c02c  stw 3, 192(30)
  002c030  stfs 1, 144(30)
  002c034  stfs 2, 148(30)
  002c038  stfs 4, 152(30)
  002c03c  stfs 12, 156(30)
  002c040  ld 0, 160(1)
  002c044  mtlr 0
  002c048  ld 30, 128(1)
  002c04c  ld 31, 136(1)
  002c050  addi 1, 1, 144
  002c054  blr

Cam_LOStoHero:   # 0x2c058, 0xb0 bytes
  002c058  stdu 1, -128(1)
  002c05c  mflr 0
  002c060  std 0, 144(1)
  002c064  lis 4, 149
  002c068  addic 8, 4, 5056
  002c06c  lis 4, 151
  002c070  addic 5, 4, -25376
  002c074  lis 4, 149
  002c078  lfs 2, 432(8)
  002c07c  addic 6, 1, 112
  002c080  fmuls 2, 2, 1
  002c084  lfs 3, 128(5)
  002c088  lfs 4, 132(5)
  002c08c  lfs 5, 136(5)
  002c090  stfs 2, 112(1)
  002c094  lfs 6, 436(8)
  002c098  lwz 7, 16516(4)
  002c09c  fmuls 6, 6, 1
  002c0a0  lwz 9, 8320(5)
  002c0a4  addic 4, 3, 48
  002c0a8  fadds 2, 2, 3
  002c0ac  ori 3, 6, 0
  002c0b0  extsw 5, 7
  002c0b4  ori 6, 9, 0
  002c0b8  li 7, 0
  002c0bc  stfs 6, 116(1)
  002c0c0  lfs 3, 440(8)
  002c0c4  fmuls 1, 3, 1
  002c0c8  fadds 3, 6, 4
  002c0cc  fadds 4, 1, 5
  002c0d0  stfs 1, 120(1)
  002c0d4  lfs 1, 444(8)
  002c0d8  stfs 2, 112(1)
  002c0dc  stfs 1, 124(1)
  002c0e0  stfs 3, 116(1)
  002c0e4  stfs 4, 120(1)
  002c0e8  bl 0x57820
  002c0ec  nop
  002c0f0  cntlzw 3, 3
  002c0f4  rlwinm 3, 3, 27, 31, 31
  002c0f8  ld 0, 144(1)
  002c0fc  mtlr 0
  002c100  addi 1, 1, 128
  002c104  blr

Cam_GetCurrHeroElv:   # 0x2c118, 0x14c bytes
  002c118  lis 4, 149
  002c11c  lis 5, 151
  002c120  addic 4, 4, 5056
  002c124  addic 5, 5, -25376
  002c128  lfs 2, 436(4)
  002c12c  lfs 3, 132(5)
  002c130  lfs 4, 128(5)
  002c134  fmadds 2, 2, 1, 3
  002c138  lfs 3, 432(4)
  002c13c  lfs 5, 52(3)
  002c140  fmadds 3, 3, 1, 4
  002c144  lfs 4, 136(5)
  002c148  lfs 6, 440(4)
  002c14c  lfs 7, 48(3)
  002c150  fmadds 1, 6, 1, 4
  002c154  lfs 8, 20(3)
  002c158  lfs 4, 56(3)
  002c15c  lfs 9, 16(3)
  002c160  fsubs 2, 2, 5
  002c164  fsubs 3, 3, 7
  002c168  lfs 7, 24(3)
  002c16c  fsubs 1, 1, 4
  002c170  fmuls 4, 2, 8
  002c174  lis 4, 3
  002c178  addi 4, 4, -16120
  002c17c  fmadds 4, 3, 9, 4
  002c180  fmadds 4, 1, 7, 4
  002c184  fnmsubs 8, 8, 4, 2
  002c188  fnmsubs 7, 7, 4, 1
  002c18c  fnmsubs 9, 9, 4, 3
  002c190  lfs 4, 0(4)
  002c194  lfs 6, 4(3)
  002c198  lfs 10, 0(3)
  002c19c  lfs 11, 8(3)
  002c1a0  fmuls 1, 8, 8
  002c1a4  lfs 3, 32(3)
  002c1a8  fmuls 6, 8, 6
  002c1ac  lfs 2, 36(3)
  002c1b0  fmadds 1, 9, 9, 1
  002c1b4  fmadds 6, 9, 10, 6
  002c1b8  fmadds 5, 7, 7, 1
  002c1bc  lfs 1, 40(3)
  002c1c0  fmadds 6, 7, 11, 6
  002c1c4  fsqrts 5, 5
  002c1c8  fcmpu 0, 5, 4
  002c1cc  bf 2, 0x2c1d8
  002c1d0  fmr 1, 4
  002c1d4  b 0x2c260
  002c1d8  fdivs 5, 6, 5
  002c1dc  lis 3, 3
  002c1e0  addi 3, 3, -16120
  002c1e4  lis 4, 115
  002c1e8  lfs 6, 4(3)
  002c1ec  addic 5, 4, 22720
  002c1f0  lfs 10, 8(3)
  002c1f4  lfs 11, 22720(4)
  002c1f8  fmuls 2, 8, 2
  002c1fc  lfs 12, 4(5)
  002c200  lfs 13, 8(5)
  002c204  lfs 8, 12(5)
  002c208  lfs 0, 12(3)
  002c20c  fmadds 2, 9, 3, 2
  002c210  fmadds 1, 7, 1, 2
  002c214  fsub 1, 1, 4
  002c218  fabs 2, 5
  002c21c  fsub 3, 5, 4
  002c220  fsel 2, 3, 5, 2
  002c224  fsub 5, 5, 4
  002c228  fsubs 3, 6, 2
  002c22c  fmuls 7, 2, 2
  002c230  fmadds 11, 2, 12, 11
  002c234  fsub 9, 3, 4
  002c238  fmuls 2, 7, 2
  002c23c  fmadds 7, 7, 13, 11
  002c240  fsel 3, 9, 3, 4
  002c244  fsel 4, 5, 6, 10
  002c248  fmadds 2, 2, 8, 7
  002c24c  fsqrts 3, 3
  002c250  fnmsubs 2, 2, 3, 0
  002c254  fnmsubs 3, 2, 4, 0
  002c258  fmsubs 2, 2, 4, 0
  002c25c  fsel 1, 1, 3, 2
  002c260  blr

ApplyHeroExternalMotion_0:   # 0x2c268, 0x28c bytes
  002c268  stdu 1, -80(1)
  002c26c  stfd 31, 72(1)
  002c270  lis 5, 151
  002c274  lfs 1, 48(3)
  002c278  lfs 5, 52(3)
  002c27c  addic 5, 5, -25376
  002c280  lis 8, 149
  002c284  addic 8, 8, 5056
  002c288  lfs 4, 320(5)
  002c28c  lfs 3, 324(5)
  002c290  lfs 2, 328(5)
  002c294  fadds 1, 4, 1
  002c298  lwz 7, 112(3)
  002c29c  lfs 6, 56(3)
  002c2a0  fadds 5, 3, 5
  002c2a4  lfs 7, 332(5)
  002c2a8  fadds 6, 2, 6
  002c2ac  stfs 7, 60(3)
  002c2b0  ori 4, 7, 0
  002c2b4  stfs 1, 48(3)
  002c2b8  stfs 5, 52(3)
  002c2bc  stfs 6, 56(3)
  002c2c0  lfs 1, 160(7)
  002c2c4  lfs 5, 164(7)
  002c2c8  fadds 1, 4, 1
  002c2cc  lfs 6, 168(7)
  002c2d0  fadds 5, 3, 5
  002c2d4  lfs 8, 64(7)
  002c2d8  fadds 6, 2, 6
  002c2dc  lfs 9, 68(7)
  002c2e0  fadds 8, 4, 8
  002c2e4  lfs 10, 72(7)
  002c2e8  fadds 9, 3, 9
  002c2ec  lfs 11, 208(7)
  002c2f0  lfs 12, 212(7)
  002c2f4  fadds 10, 2, 10
  002c2f8  lfs 13, 216(7)
  002c2fc  fadds 11, 4, 11
  002c300  stfs 7, 172(7)
  002c304  fadds 12, 3, 12
  002c308  stfs 1, 160(7)
  002c30c  stfs 5, 164(7)
  002c310  lfs 5, 0(7)
  002c314  fadds 1, 2, 13
  002c318  stfs 6, 168(7)
  002c31c  stfs 8, 64(7)
  002c320  lfs 6, 4(7)
  002c324  fadds 5, 4, 5
  002c328  stfs 9, 68(7)
  002c32c  lfs 8, 8(7)
  002c330  fadds 6, 3, 6
  002c334  stfs 10, 72(7)
  002c338  fadds 8, 2, 8
  002c33c  stfs 7, 76(7)
  002c340  stfs 11, 208(7)
  002c344  stfs 12, 212(7)
  002c348  stfs 7, 220(7)
  002c34c  stfs 1, 216(7)
  002c350  lhz 6, 776(5)
  002c354  stfs 7, 12(7)
  002c358  stfs 5, 0(7)
  002c35c  cmpwi 6, 0
  002c360  stfs 6, 4(7)
  002c364  stfs 8, 8(7)
  002c368  lfs 1, 332(5)
  002c36c  bf 2, 0x2c3c0
  002c370  lwz 6, 764(5)
  002c374  cmpwi 6, 0
  002c378  bt 2, 0x2c3b8
  002c37c  lhz 6, 166(6)
  002c380  cmpwi 6, 557
  002c384  bf 2, 0x2c3b8
  002c388  lis 6, 3
  002c38c  lis 9, 114
  002c390  addi 6, 6, -15772
  002c394  lfs 5, 0(6)
  002c398  lfs 6, -3056(9)
  002c39c  lwz 6, 920(8)
  002c3a0  fmuls 5, 6, 5
  002c3a4  fctiwz 5, 5
  002c3a8  stfd 5, 48(1)
  002c3ac  lwz 9, 52(1)
  002c3b0  cmpw 6, 9
  002c3b4  bf 1, 0x2c3c0
  002c3b8  stfs 1, 456(4)
  002c3bc  lwz 4, 112(3)
  002c3c0  lwz 5, 8324(5)
  002c3c4  cmpwi 5, 11
  002c3c8  cmpwi 1, 5, 12
  002c3cc  bt 2, 0x2c3d4
  002c3d0  bf 6, 0x2c4e8
  002c3d4  li 5, 0
  002c3d8  sth 5, 16(4)
  002c3dc  lfs 1, 452(8)
  002c3e0  lfs 5, 448(8)
  002c3e4  fmuls 6, 1, 3
  002c3e8  lfs 7, 456(8)
  002c3ec  lfs 8, 564(8)
  002c3f0  lfs 9, 528(8)
  002c3f4  lfs 10, 532(8)
  002c3f8  lfs 11, 536(8)
  002c3fc  lfs 12, 48(3)
  002c400  lfs 13, 52(3)
  002c404  lfs 0, 540(8)
  002c408  fmadds 6, 5, 4, 6
  002c40c  lfs 31, 56(3)
  002c410  stfs 0, 60(3)
  002c414  fmadds 6, 7, 2, 6
  002c418  fnmsubs 4, 5, 6, 4
  002c41c  fnmsubs 1, 1, 6, 3
  002c420  fnmsubs 2, 7, 6, 2
  002c424  fmsubs 3, 9, 8, 4
  002c428  fmsubs 1, 10, 8, 1
  002c42c  fmsubs 2, 11, 8, 2
  002c430  fadds 4, 3, 12
  002c434  fadds 5, 1, 13
  002c438  fadds 6, 2, 31
  002c43c  stfs 4, 48(3)
  002c440  stfs 5, 52(3)
  002c444  stfs 6, 56(3)
  002c448  lfs 4, 160(7)
  002c44c  lfs 5, 164(7)
  002c450  fadds 4, 3, 4
  002c454  lfs 6, 168(7)
  002c458  fadds 5, 1, 5
  002c45c  lfs 7, 64(7)
  002c460  fadds 6, 2, 6
  002c464  lfs 8, 68(7)
  002c468  fadds 7, 3, 7
  002c46c  lfs 9, 72(7)
  002c470  fadds 8, 1, 8
  002c474  lfs 10, 208(7)
  002c478  fadds 9, 2, 9
  002c47c  lfs 11, 212(7)
  002c480  fadds 10, 3, 10
  002c484  lfs 12, 216(7)
  002c488  fadds 11, 1, 11
  002c48c  stfs 0, 172(7)
  002c490  fadds 12, 2, 12
  002c494  stfs 0, 76(7)
  002c498  stfs 0, 220(7)
  002c49c  stfs 4, 160(7)
  002c4a0  stfs 5, 164(7)
  002c4a4  stfs 6, 168(7)
  002c4a8  stfs 7, 64(7)
  002c4ac  stfs 8, 68(7)
  002c4b0  stfs 9, 72(7)
  002c4b4  stfs 10, 208(7)
  002c4b8  stfs 11, 212(7)
  002c4bc  stfs 12, 216(7)
  002c4c0  lfs 4, 0(4)
  002c4c4  lfs 5, 4(4)
  002c4c8  fadds 3, 3, 4
  002c4cc  lfs 4, 8(4)
  002c4d0  fadds 1, 1, 5
  002c4d4  stfs 0, 12(4)
  002c4d8  fadds 2, 2, 4
  002c4dc  stfs 3, 0(4)
  002c4e0  stfs 1, 4(4)
  002c4e4  stfs 2, 8(4)
  002c4e8  lfd 31, 72(1)
  002c4ec  addi 1, 1, 80
  002c4f0  blr

GetWorldHeightAtHeroGndOfs:   # 0x2c4f4, 0x78 bytes
  002c4f4  lis 4, 149
  002c4f8  lis 5, 151
  002c4fc  addic 4, 4, 5056
  002c500  addic 5, 5, -25376
  002c504  lfs 2, 436(4)
  002c508  lfs 3, 132(5)
  002c50c  lfs 4, 432(4)
  002c510  fmadds 2, 2, 1, 3
  002c514  lfs 3, 128(5)
  002c518  lfs 5, 452(4)
  002c51c  fmadds 3, 4, 1, 3
  002c520  lfs 4, 440(4)
  002c524  lfs 6, 136(5)
  002c528  lfs 7, 448(4)
  002c52c  fmadds 1, 4, 1, 6
  002c530  lfs 4, 456(4)
  002c534  fmuls 2, 5, 2
  002c538  fmadds 2, 7, 3, 2
  002c53c  fmadds 1, 4, 1, 2
  002c540  fmuls 2, 7, 1
  002c544  stfs 2, 0(3)
  002c548  lfs 2, 452(4)
  002c54c  fmuls 2, 2, 1
  002c550  stfs 2, 4(3)
  002c554  lfs 2, 456(4)
  002c558  fmuls 1, 2, 1
  002c55c  stfs 1, 8(3)
  002c560  lfs 1, 460(4)
  002c564  stfs 1, 12(3)
  002c568  blr

HandleSpecialTargetActivation:   # 0x2c578, 0x10b0 bytes
  002c578  stdu 1, -192(1)
  002c57c  mflr 0
  002c580  std 0, 208(1)
  002c584  stfd 31, 184(1)
  002c588  std 30, 168(1)
  002c58c  addi 0, 1, 128
  002c590  stvx 31, 0, 0
  002c594  ori 30, 3, 0
  002c598  lis 3, 3
  002c59c  std 31, 176(1)
  002c5a0  addi 3, 3, -14996
  002c5a4  lwz 31, 112(30)
  002c5a8  lfs 31, 0(3)
  002c5ac  lbz 3, 260(31)
  002c5b0  cmpwi 3, 0
  002c5b4  cmpwi 1, 3, 9
  002c5b8  cmpwi 6, 3, 1
  002c5bc  std 29, 160(1)
  002c5c0  std 28, 152(1)
  002c5c4  cmpwi 7, 3, 2
  002c5c8  bf 2, 0x2ca20
  002c5cc  lis 4, 151
  002c5d0  addic 4, 4, -25376
  002c5d4  lwz 5, 8332(4)
  002c5d8  cmpwi 5, 2
  002c5dc  bf 2, 0x2c610
  002c5e0  li 4, 1
  002c5e4  lis 5, 114
  002c5e8  stb 3, 261(31)
  002c5ec  stb 4, 260(31)
  002c5f0  lwz 3, -10980(5)
  002c5f4  sth 3, 262(31)
  002c5f8  extsh 3, 3
  002c5fc  bl 0x502730
  002c600  nop
  002c604  fdivs 1, 31, 1
  002c608  stfs 1, 264(31)
  002c60c  b 0x2d5fc
  002c610  lwz 4, 8324(4)
  002c614  cmpwi 4, 15
  002c618  cmpwi 1, 4, 12
  002c61c  cmpwi 6, 4, 11
  002c620  cmpwi 7, 4, 13
  002c624  bf 2, 0x2c744
  002c628  lis 6, 149
  002c62c  addic 6, 6, 5056
  002c630  lwz 6, 620(6)
  002c634  cmpwi 6, 0
  002c638  bf 2, 0x2c744
  002c63c  li 4, 3
  002c640  stb 3, 261(31)
  002c644  lis 5, 114
  002c648  vspltisw 4, -1
  002c64c  stb 4, 260(31)
  002c650  li 4, -10964
  002c654  lwz 3, -10964(5)
  002c658  extsw 3, 3
  002c65c  std 3, 112(1)
  002c660  lis 3, 3
  002c664  <unknown>
  002c668  addi 3, 3, -14996
  002c66c  li 4, 4
  002c670  vcfsx 2, 2, 0
  002c674  lis 5, 114
  002c678  lfs 1, 4(3)
  002c67c  <unknown>
  002c680  lfd 2, 112(1)
  002c684  vspltw 3, 3, 0
  002c688  li 3, -3056
  002c68c  fcfid 2, 2
  002c690  vaddfp 2, 2, 3
  002c694  vslw 3, 4, 4
  002c698  <unknown>
  002c69c  lfs 3, -3056(5)
  002c6a0  li 3, 276
  002c6a4  frsp 2, 2
  002c6a8  vmaddfp 2, 4, 2, 3
  002c6ac  fadds 1, 2, 1
  002c6b0  vctsxs 2, 2, 0
  002c6b4  fmuls 1, 3, 1
  002c6b8  fctiwz 1, 1
  002c6bc  vsplth 2, 2, 1
  002c6c0  stfd 1, 112(1)
  002c6c4  lwz 4, 116(1)
  002c6c8  stvehx 2, 3, 31
  002c6cc  extsh 3, 4
  002c6d0  bl 0x502730
  002c6d4  nop
  002c6d8  fdivs 1, 31, 1
  002c6dc  lis 3, 114
  002c6e0  lwz 4, -10960(3)
  002c6e4  sth 4, 262(31)
  002c6e8  extsh 3, 4
  002c6ec  stfs 1, 268(31)
  002c6f0  bl 0x502730
  002c6f4  nop
  002c6f8  fdivs 1, 31, 1
  002c6fc  lis 4, 114
  002c700  li 5, 0
  002c704  addic 3, 31, 112
  002c708  stfs 1, 264(31)
  002c70c  lfs 1, -10952(4)
  002c710  stb 5, 279(31)
  002c714  stfs 1, 272(31)
  002c718  lfs 1, -10952(4)
  002c71c  bl 0x2c4f4
  002c720  lfs 1, 80(31)
  002c724  lfs 2, 84(31)
  002c728  stfs 1, 96(31)
  002c72c  lfs 1, 88(31)
  002c730  stfs 2, 100(31)
  002c734  lfs 2, 92(31)
  002c738  stfs 1, 104(31)
  002c73c  stfs 2, 108(31)
  002c740  b 0x2d5fc
  002c744  bf 6, 0x2c78c
  002c748  lis 6, 149
  002c74c  addic 6, 6, 5056
  002c750  lwz 6, 620(6)
  002c754  cmpwi 6, 0
  002c758  bf 2, 0x2c78c
  002c75c  li 4, 8
  002c760  lis 5, 114
  002c764  stb 3, 261(31)
  002c768  stb 4, 260(31)
  002c76c  lwz 3, -10944(5)
  002c770  sth 3, 262(31)
  002c774  extsh 3, 3
  002c778  bl 0x502730
  002c77c  nop
  002c780  fdivs 1, 31, 1
  002c784  stfs 1, 264(31)
  002c788  b 0x2d5fc
  002c78c  bf 26, 0x2c8ac
  002c790  lis 6, 149
  002c794  addic 6, 6, 5056
  002c798  lwz 6, 620(6)
  002c79c  cmpwi 6, 0
  002c7a0  bf 2, 0x2c8ac
  002c7a4  li 4, 6
  002c7a8  lis 5, 114
  002c7ac  stb 3, 261(31)
  002c7b0  li 6, -10976
  002c7b4  stb 4, 260(31)
  002c7b8  li 4, 4
  002c7bc  lwz 3, -10976(5)
  002c7c0  <unknown>
  002c7c4  extsw 3, 3
  002c7c8  lis 5, 114
  002c7cc  vcfsx 2, 2, 0
  002c7d0  li 6, -3056
  002c7d4  std 3, 112(1)
  002c7d8  lis 3, 3
  002c7dc  addi 3, 3, -14996
  002c7e0  <unknown>
  002c7e4  lfs 1, 4(3)
  002c7e8  <unknown>
  002c7ec  lfd 2, 112(1)
  002c7f0  vspltw 3, 3, 0
  002c7f4  fcfid 2, 2
  002c7f8  lfs 3, -3056(5)
  002c7fc  li 3, 276
  002c800  vaddfp 2, 2, 3
  002c804  vspltisw 3, -1
  002c808  vslw 3, 3, 3
  002c80c  frsp 2, 2
  002c810  vmaddfp 2, 4, 2, 3
  002c814  fadds 1, 2, 1
  002c818  vctsxs 2, 2, 0
  002c81c  fmuls 1, 3, 1
  002c820  vsplth 2, 2, 1
  002c824  fctiwz 1, 1
  002c828  stfd 1, 112(1)
  002c82c  lwz 4, 116(1)
  002c830  stvehx 2, 3, 31
  002c834  extsh 3, 4
  002c838  bl 0x502730
  002c83c  nop
  002c840  fdivs 1, 31, 1
  002c844  lis 3, 114
  002c848  lwz 3, -10960(3)
  002c84c  sth 3, 262(31)
  002c850  extsh 3, 3
  002c854  stfs 1, 268(31)
  002c858  bl 0x502730
  002c85c  nop
  002c860  fdivs 1, 31, 1
  002c864  lis 4, 114
  002c868  li 5, 0
  002c86c  addic 3, 31, 112
  002c870  stfs 1, 264(31)
  002c874  lfs 1, -10968(4)
  002c878  stb 5, 279(31)
  002c87c  stfs 1, 272(31)
  002c880  lfs 1, -10968(4)
  002c884  bl 0x2c4f4
  002c888  lfs 1, 80(31)
  002c88c  lfs 2, 84(31)
  002c890  stfs 1, 96(31)
  002c894  lfs 1, 88(31)
  002c898  stfs 2, 100(31)
  002c89c  lfs 2, 92(31)
  002c8a0  stfs 1, 104(31)
  002c8a4  stfs 2, 108(31)
  002c8a8  b 0x2d5fc
  002c8ac  bt 30, 0x2c8b8
  002c8b0  cmpwi 4, 14
  002c8b4  bf 2, 0x2c9d4
  002c8b8  lis 4, 149
  002c8bc  addic 4, 4, 5056
  002c8c0  lwz 4, 620(4)
  002c8c4  cmpwi 4, 0
  002c8c8  bf 2, 0x2c9d4
  002c8cc  li 4, 5
  002c8d0  stb 3, 261(31)
  002c8d4  lis 5, 114
  002c8d8  vspltisw 4, -1
  002c8dc  stb 4, 260(31)
  002c8e0  li 4, -10948
  002c8e4  lwz 3, -10948(5)
  002c8e8  extsw 3, 3
  002c8ec  std 3, 112(1)
  002c8f0  lis 3, 3
  002c8f4  <unknown>
  002c8f8  addi 3, 3, -14996
  002c8fc  li 4, 4
  002c900  vcfsx 2, 2, 0
  002c904  lis 5, 114
  002c908  lfs 1, 4(3)
  002c90c  <unknown>
  002c910  lfd 2, 112(1)
  002c914  vspltw 3, 3, 0
  002c918  li 3, -3056
  002c91c  fcfid 2, 2
  002c920  vaddfp 2, 2, 3
  002c924  vslw 3, 4, 4
  002c928  <unknown>
  002c92c  lfs 3, -3056(5)
  002c930  li 3, 276
  002c934  frsp 2, 2
  002c938  vmaddfp 2, 4, 2, 3
  002c93c  fadds 1, 2, 1
  002c940  vctsxs 2, 2, 0
  002c944  fmuls 1, 3, 1
  002c948  fctiwz 1, 1
  002c94c  vsplth 2, 2, 1
  002c950  stfd 1, 112(1)
  002c954  lwz 4, 116(1)
  002c958  stvehx 2, 3, 31
  002c95c  extsh 3, 4
  002c960  bl 0x502730
  002c964  nop
  002c968  fdivs 1, 31, 1
  002c96c  lis 3, 114
  002c970  lwz 4, -10944(3)
  002c974  sth 4, 262(31)
  002c978  extsh 3, 4
  002c97c  stfs 1, 268(31)
  002c980  bl 0x502730
  002c984  nop
  002c988  fdivs 1, 31, 1
  002c98c  lis 4, 114
  002c990  li 5, 0
  002c994  addic 3, 31, 112
  002c998  stfs 1, 264(31)
  002c99c  lfs 1, -10936(4)
  002c9a0  stb 5, 279(31)
  002c9a4  stfs 1, 272(31)
  002c9a8  lfs 1, -10936(4)
  002c9ac  bl 0x2c4f4
  002c9b0  lfs 1, 80(31)
  002c9b4  lfs 2, 84(31)
  002c9b8  stfs 1, 96(31)
  002c9bc  lfs 1, 88(31)
  002c9c0  stfs 2, 100(31)
  002c9c4  lfs 2, 92(31)
  002c9c8  stfs 1, 104(31)
  002c9cc  stfs 2, 108(31)
  002c9d0  b 0x2d5fc
  002c9d4  cmpwi 5, 4
  002c9d8  bf 2, 0x2d5fc
  002c9dc  lis 4, 149
  002c9e0  addic 4, 4, 5056
  002c9e4  lwz 4, 620(4)
  002c9e8  cmpwi 4, 0
  002c9ec  bf 2, 0x2d5fc
  002c9f0  li 4, 2
  002c9f4  stb 3, 261(31)
  002c9f8  lis 5, 114
  002c9fc  stb 4, 260(31)
  002ca00  lwz 4, -10984(5)
  002ca04  extsh 3, 4
  002ca08  sth 4, 262(31)
  002ca0c  bl 0x502730
  002ca10  nop
  002ca14  fdivs 1, 31, 1
  002ca18  stfs 1, 264(31)
  002ca1c  b 0x2d5fc
  002ca20  bt 6, 0x2cb30
  002ca24  bt 26, 0x2cb30
  002ca28  lis 4, 151
  002ca2c  addic 4, 4, -25376
  002ca30  lwz 4, 8324(4)
  002ca34  cmpwi 4, 20
  002ca38  bf 2, 0x2cb30
  002ca3c  li 4, 9
  002ca40  lis 5, 114
  002ca44  stb 3, 261(31)
  002ca48  li 6, -10932
  002ca4c  stb 4, 260(31)
  002ca50  li 4, 4
  002ca54  lwz 3, -10932(5)
  002ca58  <unknown>
  002ca5c  extsw 3, 3
  002ca60  lis 5, 114
  002ca64  vcfsx 2, 2, 0
  002ca68  li 6, -3056
  002ca6c  std 3, 112(1)
  002ca70  lis 3, 3
  002ca74  addi 3, 3, -14996
  002ca78  <unknown>
  002ca7c  lfs 1, 4(3)
  002ca80  <unknown>
  002ca84  lfd 2, 112(1)
  002ca88  vspltw 3, 3, 0
  002ca8c  fcfid 2, 2
  002ca90  lfs 3, -3056(5)
  002ca94  li 3, 276
  002ca98  vaddfp 2, 2, 3
  002ca9c  vspltisw 3, -1
  002caa0  vslw 3, 3, 3
  002caa4  frsp 2, 2
  002caa8  vmaddfp 2, 4, 2, 3
  002caac  fadds 1, 2, 1
  002cab0  vctsxs 2, 2, 0
  002cab4  fmuls 1, 3, 1
  002cab8  vsplth 2, 2, 1
  002cabc  fctiwz 1, 1
  002cac0  stfd 1, 112(1)
  002cac4  lwz 4, 116(1)
  002cac8  stvehx 2, 3, 31
  002cacc  extsh 3, 4
  002cad0  bl 0x502730
  002cad4  nop
  002cad8  fdivs 1, 31, 1
  002cadc  lis 4, 16256
  002cae0  li 6, 0
  002cae4  lis 5, 114
  002cae8  addic 3, 31, 112
  002caec  stw 4, 264(31)
  002caf0  sth 6, 262(31)
  002caf4  stfs 1, 268(31)
  002caf8  lfs 1, -10916(5)
  002cafc  stb 6, 279(31)
  002cb00  stfs 1, 272(31)
  002cb04  lfs 1, -10916(5)
  002cb08  bl 0x2c4f4
  002cb0c  lfs 1, 80(31)
  002cb10  lfs 2, 84(31)
  002cb14  stfs 1, 96(31)
  002cb18  lfs 1, 88(31)
  002cb1c  stfs 2, 100(31)
  002cb20  lfs 2, 92(31)
  002cb24  stfs 1, 104(31)
  002cb28  stfs 2, 108(31)
  002cb2c  b 0x2d5fc
  002cb30  bt 30, 0x2cb38
  002cb34  bf 26, 0x2cb6c
  002cb38  lis 4, 151
  002cb3c  addic 4, 4, -25376
  002cb40  lwz 4, 8332(4)
  002cb44  cmpwi 1, 4, 2
  002cb48  cmpwi 4, 4
  002cb4c  cror 2, 2, 6
  002cb50  bt 2, 0x2cb6c
  002cb54  li 3, 0
  002cb58  lis 4, 16256
  002cb5c  stb 3, 260(31)
  002cb60  sth 3, 262(31)
  002cb64  stw 4, 264(31)
  002cb68  b 0x2d5fc
  002cb6c  cmpwi 3, 7
  002cb70  bf 2, 0x2cd44
  002cb74  lis 4, 151
  002cb78  addic 4, 4, -25376
  002cb7c  lhz 5, 1054(4)
  002cb80  cmpwi 5, 0
  002cb84  bf 2, 0x2cc90
  002cb88  li 4, 6
  002cb8c  lis 5, 114
  002cb90  stb 3, 261(31)
  002cb94  li 6, -10976
  002cb98  stb 4, 260(31)
  002cb9c  li 4, 4
  002cba0  lwz 3, -10976(5)
  002cba4  <unknown>
  002cba8  extsw 3, 3
  002cbac  lis 5, 114
  002cbb0  vcfsx 2, 2, 0
  002cbb4  li 6, -3056
  002cbb8  std 3, 112(1)
  002cbbc  lis 3, 3
  002cbc0  addi 3, 3, -14996
  002cbc4  <unknown>
  002cbc8  lfs 1, 4(3)
  002cbcc  <unknown>
  002cbd0  lfd 2, 112(1)
  002cbd4  vspltw 3, 3, 0
  002cbd8  fcfid 2, 2
  002cbdc  lfs 3, -3056(5)
  002cbe0  li 3, 276
  002cbe4  vaddfp 2, 2, 3
  002cbe8  vspltisw 3, -1
  002cbec  vslw 3, 3, 3
  002cbf0  frsp 2, 2
  002cbf4  vmaddfp 2, 4, 2, 3
  002cbf8  fadds 1, 2, 1
  002cbfc  vctsxs 2, 2, 0
  002cc00  fmuls 1, 3, 1
  002cc04  vsplth 2, 2, 1
  002cc08  fctiwz 1, 1
  002cc0c  stfd 1, 112(1)
  002cc10  lwz 4, 116(1)
  002cc14  stvehx 2, 3, 31
  002cc18  extsh 3, 4
  002cc1c  bl 0x502730
  002cc20  nop
  002cc24  fdivs 1, 31, 1
  002cc28  lis 3, 114
  002cc2c  lwz 3, -10960(3)
  002cc30  sth 3, 262(31)
  002cc34  extsh 3, 3
  002cc38  stfs 1, 268(31)
  002cc3c  bl 0x502730
  002cc40  nop
  002cc44  fdivs 1, 31, 1
  002cc48  lis 4, 114
  002cc4c  li 5, 0
  002cc50  addic 3, 31, 112
  002cc54  stfs 1, 264(31)
  002cc58  lfs 1, -10968(4)
  002cc5c  stb 5, 279(31)
  002cc60  stfs 1, 272(31)
  002cc64  lfs 1, -10968(4)
  002cc68  bl 0x2c4f4
  002cc6c  lfs 1, 80(31)
  002cc70  lfs 2, 84(31)
  002cc74  stfs 1, 96(31)
  002cc78  lfs 1, 88(31)
  002cc7c  stfs 2, 100(31)
  002cc80  lfs 2, 92(31)
  002cc84  stfs 1, 104(31)
  002cc88  stfs 2, 108(31)
  002cc8c  b 0x2d5fc
  002cc90  lwz 4, 8332(4)
  002cc94  cmpwi 4, 2
  002cc98  bf 2, 0x2cd44
  002cc9c  li 4, 1
  002cca0  lis 5, 114
  002cca4  stb 3, 261(31)
  002cca8  li 6, -10956
  002ccac  stb 4, 260(31)
  002ccb0  li 4, 4
  002ccb4  lwz 3, -10956(5)
  002ccb8  <unknown>
  002ccbc  extsw 3, 3
  002ccc0  lis 5, 114
  002ccc4  vcfsx 2, 2, 0
  002ccc8  li 6, -3056
  002cccc  std 3, 112(1)
  002ccd0  lis 3, 3
  002ccd4  addi 3, 3, -14996
  002ccd8  <unknown>
  002ccdc  lfs 1, 4(3)
  002cce0  <unknown>
  002cce4  lfd 2, 112(1)
  002cce8  vspltw 3, 3, 0
  002ccec  fcfid 2, 2
  002ccf0  lfs 3, -3056(5)
  002ccf4  li 3, 262
  002ccf8  vaddfp 2, 2, 3
  002ccfc  vspltisw 3, -1
  002cd00  vslw 3, 3, 3
  002cd04  frsp 2, 2
  002cd08  vmaddfp 2, 4, 2, 3
  002cd0c  fadds 1, 2, 1
  002cd10  vctsxs 2, 2, 0
  002cd14  fmuls 1, 3, 1
  002cd18  vsplth 2, 2, 1
  002cd1c  fctiwz 1, 1
  002cd20  stfd 1, 112(1)
  002cd24  lwz 4, 116(1)
  002cd28  stvehx 2, 3, 31
  002cd2c  extsh 3, 4
  002cd30  bl 0x502730
  002cd34  nop
  002cd38  fdivs 1, 31, 1
  002cd3c  stfs 1, 264(31)
  002cd40  b 0x2d5fc
  002cd44  cmpwi 3, 4
  002cd48  bf 2, 0x2cec0
  002cd4c  lis 4, 151
  002cd50  addic 4, 4, -25376
  002cd54  lwz 4, 8332(4)
  002cd58  cmpwi 4, 4
  002cd5c  cmpwi 1, 4, 2
  002cd60  bt 2, 0x2cec0
  002cd64  bf 6, 0x2ce14
  002cd68  li 3, 4
  002cd6c  li 4, 1
  002cd70  lis 5, 114
  002cd74  vspltisw 4, -1
  002cd78  stb 3, 261(31)
  002cd7c  stb 4, 260(31)
  002cd80  li 4, -10956
  002cd84  lwz 3, -10956(5)
  002cd88  extsw 3, 3
  002cd8c  std 3, 112(1)
  002cd90  lis 3, 3
  002cd94  <unknown>
  002cd98  li 4, 4
  002cd9c  addi 3, 3, -14996
  002cda0  lis 5, 114
  002cda4  vcfsx 2, 2, 0
  002cda8  lfs 1, 4(3)
  002cdac  <unknown>
  002cdb0  lfs 2, -3056(5)
  002cdb4  li 3, -3056
  002cdb8  lfd 3, 112(1)
  002cdbc  vspltw 3, 3, 0
  002cdc0  fcfid 3, 3
  002cdc4  vaddfp 2, 2, 3
  002cdc8  vslw 3, 4, 4
  002cdcc  <unknown>
  002cdd0  li 3, 262
  002cdd4  frsp 3, 3
  002cdd8  vmaddfp 2, 4, 2, 3
  002cddc  fadds 1, 3, 1
  002cde0  vctsxs 2, 2, 0
  002cde4  fmuls 1, 2, 1
  002cde8  vsplth 2, 2, 1
  002cdec  fctiwz 1, 1
  002cdf0  stfd 1, 112(1)
  002cdf4  lwz 4, 116(1)
  002cdf8  stvehx 2, 3, 31
  002cdfc  extsh 3, 4
  002ce00  bl 0x502730
  002ce04  nop
  002ce08  fdivs 1, 31, 1
  002ce0c  stfs 1, 264(31)
  002ce10  b 0x2d5fc
  002ce14  li 3, 4
  002ce18  li 4, 0
  002ce1c  lis 5, 114
  002ce20  stb 3, 261(31)
  002ce24  stb 4, 260(31)
  002ce28  li 4, -10956
  002ce2c  lwz 3, -10956(5)
  002ce30  extsw 3, 3
  002ce34  vspltisw 4, -1
  002ce38  std 3, 112(1)
  002ce3c  lis 3, 3
  002ce40  <unknown>
  002ce44  addi 3, 3, -14996
  002ce48  li 4, 4
  002ce4c  vcfsx 2, 2, 0
  002ce50  lis 5, 114
  002ce54  lfs 1, 4(3)
  002ce58  <unknown>
  002ce5c  lfd 2, 112(1)
  002ce60  vspltw 3, 3, 0
  002ce64  li 3, -3056
  002ce68  fcfid 2, 2
  002ce6c  vaddfp 2, 2, 3
  002ce70  vslw 3, 4, 4
  002ce74  <unknown>
  002ce78  lfs 3, -3056(5)
  002ce7c  li 3, 262
  002ce80  frsp 2, 2
  002ce84  vmaddfp 2, 4, 2, 3
  002ce88  fadds 1, 2, 1
  002ce8c  vctsxs 2, 2, 0
  002ce90  fmuls 1, 3, 1
  002ce94  fctiwz 1, 1
  002ce98  vsplth 2, 2, 1
  002ce9c  stfd 1, 112(1)
  002cea0  lwz 4, 116(1)
  002cea4  stvehx 2, 3, 31
  002cea8  extsh 3, 4
  002ceac  bl 0x502730
  002ceb0  nop
  002ceb4  fdivs 1, 31, 1
  002ceb8  stfs 1, 264(31)
  002cebc  b 0x2d5fc
  002cec0  cmpwi 3, 3
  002cec4  bf 2, 0x2cfe4
  002cec8  lis 4, 151
  002cecc  addic 4, 4, -25376
  002ced0  lwz 4, 8324(4)
  002ced4  cmpwi 4, 11
  002ced8  bf 2, 0x2cfe4
  002cedc  li 4, 6
  002cee0  lis 5, 114
  002cee4  stb 3, 261(31)
  002cee8  li 6, -10976
  002ceec  stb 4, 260(31)
  002cef0  li 4, 4
  002cef4  lwz 3, -10976(5)
  002cef8  <unknown>
  002cefc  extsw 3, 3
  002cf00  lis 5, 114
  002cf04  vcfsx 2, 2, 0
  002cf08  li 6, -3056
  002cf0c  std 3, 112(1)
  002cf10  lis 3, 3
  002cf14  addi 3, 3, -14996
  002cf18  <unknown>
  002cf1c  lfs 1, 4(3)
  002cf20  <unknown>
  002cf24  lfd 2, 112(1)
  002cf28  vspltw 3, 3, 0
  002cf2c  fcfid 2, 2
  002cf30  lfs 3, -3056(5)
  002cf34  li 3, 276
  002cf38  vaddfp 2, 2, 3
  002cf3c  vspltisw 3, -1
  002cf40  vslw 3, 3, 3
  002cf44  frsp 2, 2
  002cf48  vmaddfp 2, 4, 2, 3
  002cf4c  fadds 1, 2, 1
  002cf50  vctsxs 2, 2, 0
  002cf54  fmuls 1, 3, 1
  002cf58  vsplth 2, 2, 1
  002cf5c  fctiwz 1, 1
  002cf60  stfd 1, 112(1)
  002cf64  lwz 4, 116(1)
  002cf68  stvehx 2, 3, 31
  002cf6c  extsh 3, 4
  002cf70  bl 0x502730
  002cf74  nop
  002cf78  fdivs 1, 31, 1
  002cf7c  lis 3, 114
  002cf80  lwz 3, -10960(3)
  002cf84  sth 3, 262(31)
  002cf88  extsh 3, 3
  002cf8c  stfs 1, 268(31)
  002cf90  bl 0x502730
  002cf94  nop
  002cf98  fdivs 1, 31, 1
  002cf9c  lis 4, 114
  002cfa0  li 5, 0
  002cfa4  addic 3, 31, 112
  002cfa8  stfs 1, 264(31)
  002cfac  lfs 1, -10968(4)
  002cfb0  stb 5, 279(31)
  002cfb4  stfs 1, 272(31)
  002cfb8  lfs 1, -10968(4)
  002cfbc  bl 0x2c4f4
  002cfc0  lfs 1, 80(31)
  002cfc4  lfs 2, 84(31)
  002cfc8  stfs 1, 96(31)
  002cfcc  lfs 1, 88(31)
  002cfd0  stfs 2, 100(31)
  002cfd4  lfs 2, 92(31)
  002cfd8  stfs 1, 104(31)
  002cfdc  stfs 2, 108(31)
  002cfe0  b 0x2d5fc
  002cfe4  cmpwi 3, 5
  002cfe8  bf 2, 0x2d030
  002cfec  lis 4, 151
  002cff0  addic 4, 4, -25376
  002cff4  lwz 4, 8324(4)
  002cff8  cmpwi 4, 12
  002cffc  bf 2, 0x2d030
  002d000  li 4, 8
  002d004  lis 5, 114
  002d008  stb 3, 261(31)
  002d00c  stb 4, 260(31)
  002d010  lwz 3, -10944(5)
  002d014  sth 3, 262(31)
  002d018  extsh 3, 3
  002d01c  bl 0x502730
  002d020  nop
  002d024  fdivs 1, 31, 1
  002d028  stfs 1, 264(31)
  002d02c  b 0x2d5fc
  002d030  cmpwi 3, 8
  002d034  bf 2, 0x2d0f4
  002d038  lis 4, 151
  002d03c  addic 4, 4, -25376
  002d040  lwz 4, 8324(4)
  002d044  cmpwi 4, 12
  002d048  bt 2, 0x2d0f4
  002d04c  li 4, 0
  002d050  stb 3, 261(31)
  002d054  lis 5, 114
  002d058  vspltisw 4, -1
  002d05c  stb 4, 260(31)
  002d060  li 4, -10940
  002d064  lwz 3, -10940(5)
  002d068  extsw 3, 3
  002d06c  std 3, 112(1)
  002d070  lis 3, 3
  002d074  <unknown>
  002d078  addi 3, 3, -14996
  002d07c  li 4, 4
  002d080  vcfsx 2, 2, 0
  002d084  lis 5, 114
  002d088  lfs 1, 4(3)
  002d08c  <unknown>
  002d090  lfd 2, 112(1)
  002d094  vspltw 3, 3, 0
  002d098  li 3, -3056
  002d09c  fcfid 2, 2
  002d0a0  vaddfp 2, 2, 3
  002d0a4  vslw 3, 4, 4
  002d0a8  <unknown>
  002d0ac  lfs 3, -3056(5)
  002d0b0  li 3, 262
  002d0b4  frsp 2, 2
  002d0b8  vmaddfp 2, 4, 2, 3
  002d0bc  fadds 1, 2, 1
  002d0c0  vctsxs 2, 2, 0
  002d0c4  fmuls 1, 3, 1
  002d0c8  fctiwz 1, 1
  002d0cc  vsplth 2, 2, 1
  002d0d0  stfd 1, 112(1)
  002d0d4  lwz 4, 116(1)
  002d0d8  stvehx 2, 3, 31
  002d0dc  extsh 3, 4
  002d0e0  bl 0x502730
  002d0e4  nop
  002d0e8  fdivs 1, 31, 1
  002d0ec  stfs 1, 264(31)
  002d0f0  b 0x2d5fc
  002d0f4  cmpwi 3, 6
  002d0f8  bf 2, 0x2d1b8
  002d0fc  lis 4, 151
  002d100  addic 4, 4, -25376
  002d104  lwz 4, 8324(4)
  002d108  cmpwi 4, 11
  002d10c  bt 2, 0x2d1b8
  002d110  li 4, 0
  002d114  lis 5, 114
  002d118  stb 3, 261(31)
  002d11c  li 6, -10956
  002d120  stb 4, 260(31)
  002d124  li 4, 4
  002d128  lwz 3, -10956(5)
  002d12c  <unknown>
  002d130  extsw 3, 3
  002d134  lis 5, 114
  002d138  vcfsx 2, 2, 0
  002d13c  li 6, -3056
  002d140  std 3, 112(1)
  002d144  lis 3, 3
  002d148  addi 3, 3, -14996
  002d14c  <unknown>
  002d150  lfs 1, 4(3)
  002d154  <unknown>
  002d158  lfd 2, 112(1)
  002d15c  vspltw 3, 3, 0
  002d160  fcfid 2, 2
  002d164  lfs 3, -3056(5)
  002d168  li 3, 262
  002d16c  vaddfp 2, 2, 3
  002d170  vspltisw 3, -1
  002d174  vslw 3, 3, 3
  002d178  frsp 2, 2
  002d17c  vmaddfp 2, 4, 2, 3
  002d180  fadds 1, 2, 1
  002d184  vctsxs 2, 2, 0
  002d188  fmuls 1, 3, 1
  002d18c  vsplth 2, 2, 1
  002d190  fctiwz 1, 1
  002d194  stfd 1, 112(1)
  002d198  lwz 4, 116(1)
  002d19c  stvehx 2, 3, 31
  002d1a0  extsh 3, 4
  002d1a4  bl 0x502730
  002d1a8  nop
  002d1ac  fdivs 1, 31, 1
  002d1b0  stfs 1, 264(31)
  002d1b4  b 0x2d5fc
  002d1b8  cmpwi 3, 3
  002d1bc  bt 2, 0x2d1c8
  002d1c0  cmpwi 3, 5
  002d1c4  bf 2, 0x2d284
  002d1c8  lis 4, 151
  002d1cc  addic 4, 4, -25376
  002d1d0  lwz 4, 8332(4)
  002d1d4  cmpwi 4, 4
  002d1d8  bt 2, 0x2d284
  002d1dc  li 4, 0
  002d1e0  stb 3, 261(31)
  002d1e4  lis 5, 114
  002d1e8  vspltisw 4, -1
  002d1ec  stb 4, 260(31)
  002d1f0  li 4, -10956
  002d1f4  lwz 3, -10956(5)
  002d1f8  extsw 3, 3
  002d1fc  std 3, 112(1)
  002d200  lis 3, 3
  002d204  <unknown>
  002d208  addi 3, 3, -14996
  002d20c  li 4, 4
  002d210  vcfsx 2, 2, 0
  002d214  lis 5, 114
  002d218  lfs 1, 4(3)
  002d21c  <unknown>
  002d220  lfd 2, 112(1)
  002d224  vspltw 3, 3, 0
  002d228  li 3, -3056
  002d22c  fcfid 2, 2
  002d230  vaddfp 2, 2, 3
  002d234  vslw 3, 4, 4
  002d238  <unknown>
  002d23c  lfs 3, -3056(5)
  002d240  li 3, 262
  002d244  frsp 2, 2
  002d248  vmaddfp 2, 4, 2, 3
  002d24c  fadds 1, 2, 1
  002d250  vctsxs 2, 2, 0
  002d254  fmuls 1, 3, 1
  002d258  fctiwz 1, 1
  002d25c  vsplth 2, 2, 1
  002d260  stfd 1, 112(1)
  002d264  lwz 4, 116(1)
  002d268  stvehx 2, 3, 31
  002d26c  extsh 3, 4
  002d270  bl 0x502730
  002d274  nop
  002d278  fdivs 1, 31, 1
  002d27c  stfs 1, 264(31)
  002d280  b 0x2d5fc
  002d284  cmpwi 3, 9
  002d288  bf 2, 0x2d2d4
  002d28c  lis 4, 151
  002d290  addic 4, 4, -25376
  002d294  lwz 5, 8332(4)
  002d298  cmpwi 5, 2
  002d29c  bt 2, 0x2d324
  002d2a0  lis 5, 3
  002d2a4  lis 6, 114
  002d2a8  addi 5, 5, -14996
  002d2ac  lfs 1, 8(5)
  002d2b0  lfs 2, -3056(6)
  002d2b4  lhz 4, 780(4)
  002d2b8  fmuls 1, 2, 1
  002d2bc  extsh 4, 4
  002d2c0  fctiwz 1, 1
  002d2c4  stfd 1, 112(1)
  002d2c8  lwz 5, 116(1)
  002d2cc  cmpw 4, 5
  002d2d0  bf 0, 0x2d324
  002d2d4  cmpwi 3, 10
  002d2d8  bf 2, 0x2d424
  002d2dc  lis 4, 151
  002d2e0  addic 4, 4, -25376
  002d2e4  lwz 5, 8332(4)
  002d2e8  cmpwi 5, 2
  002d2ec  bt 2, 0x2d324
  002d2f0  lis 5, 3
  002d2f4  lis 6, 114
  002d2f8  addi 5, 5, -14996
  002d2fc  lfs 1, 8(5)
  002d300  lfs 2, -3056(6)
  002d304  lhz 4, 780(4)
  002d308  fmuls 1, 2, 1
  002d30c  extsh 4, 4
  002d310  fctiwz 1, 1
  002d314  stfd 1, 112(1)
  002d318  lwz 5, 116(1)
  002d31c  cmpw 4, 5
  002d320  bt 0, 0x2d424
  002d324  li 4, 1
  002d328  stb 3, 261(31)
  002d32c  lis 5, 114
  002d330  lis 29, 114
  002d334  stb 4, 260(31)
  002d338  li 4, -10956
  002d33c  lwz 3, -10956(5)
  002d340  li 28, -3056
  002d344  extsw 3, 3
  002d348  std 3, 112(1)
  002d34c  lis 3, 3
  002d350  <unknown>
  002d354  li 4, 4
  002d358  addi 3, 3, -14996
  002d35c  vcfsx 2, 2, 0
  002d360  lfs 1, 4(3)
  002d364  <unknown>
  002d368  lfd 2, 112(1)
  002d36c  vspltw 31, 3, 0
  002d370  fcfid 2, 2
  002d374  vspltisw 3, -1
  002d378  li 3, 262
  002d37c  <unknown>
  002d380  lfs 3, -3056(29)
  002d384  vaddfp 2, 2, 31
  002d388  vslw 3, 3, 3
  002d38c  frsp 2, 2
  002d390  vmaddfp 2, 4, 2, 3
  002d394  fadds 1, 2, 1
  002d398  vctsxs 2, 2, 0
  002d39c  fmuls 1, 3, 1
  002d3a0  fctiwz 1, 1
  002d3a4  vsplth 2, 2, 1
  002d3a8  stfd 1, 112(1)
  002d3ac  lwz 4, 116(1)
  002d3b0  stvehx 2, 3, 31
  002d3b4  extsh 3, 4
  002d3b8  bl 0x502730
  002d3bc  nop
  002d3c0  fdivs 1, 31, 1
  002d3c4  lis 3, 114
  002d3c8  vspltisw 2, -1
  002d3cc  li 4, -11004
  002d3d0  li 5, 32
  002d3d4  vslw 2, 2, 2
  002d3d8  <unknown>
  002d3dc  lwz 3, 112(30)
  002d3e0  vcfsx 3, 3, 0
  002d3e4  vaddfp 3, 3, 31
  002d3e8  stfs 1, 264(31)
  002d3ec  <unknown>
  002d3f0  vmaddfp 2, 4, 3, 2
  002d3f4  vctsxs 2, 2, 0
  002d3f8  vsplth 2, 2, 1
  002d3fc  stvehx 2, 5, 3
  002d400  lfs 1, 0(30)
  002d404  lfs 2, 4(30)
  002d408  stfs 1, 64(30)
  002d40c  lfs 1, 8(30)
  002d410  stfs 2, 68(30)
  002d414  lfs 2, 12(30)
  002d418  stfs 1, 72(30)
  002d41c  stfs 2, 76(30)
  002d420  b 0x2d5fc
  002d424  cmpwi 3, 9
  002d428  bf 2, 0x2d470
  002d42c  lis 4, 151
  002d430  addic 4, 4, -25376
  002d434  lwz 4, 8324(4)
  002d438  cmpwi 4, 20
  002d43c  bt 2, 0x2d470
  002d440  li 4, 10
  002d444  lis 5, 114
  002d448  stb 3, 261(31)
  002d44c  stb 4, 260(31)
  002d450  lwz 3, -10920(5)
  002d454  sth 3, 262(31)
  002d458  extsh 3, 3
  002d45c  bl 0x502730
  002d460  nop
  002d464  fdivs 1, 31, 1
  002d468  stfs 1, 264(31)
  002d46c  b 0x2d5fc
  002d470  cmpwi 3, 10
  002d474  bf 2, 0x2d538
  002d478  addic 3, 31, 276
  002d47c  bl 0x4fffb4
  002d480  nop
  002d484  cmpwi 3, 0
  002d488  bt 2, 0x2d538
  002d48c  li 3, 0
  002d490  lbz 5, 260(31)
  002d494  lis 4, 114
  002d498  vspltisw 4, -1
  002d49c  stb 3, 260(31)
  002d4a0  stb 5, 261(31)
  002d4a4  lwz 3, -10956(4)
  002d4a8  li 5, -10956
  002d4ac  extsw 3, 3
  002d4b0  std 3, 112(1)
  002d4b4  lis 3, 3
  002d4b8  <unknown>
  002d4bc  li 4, 4
  002d4c0  addi 3, 3, -14996
  002d4c4  lis 5, 114
  002d4c8  vcfsx 2, 2, 0
  002d4cc  lfs 1, 4(3)
  002d4d0  <unknown>
  002d4d4  lfs 2, -3056(5)
  002d4d8  li 3, -3056
  002d4dc  lfd 3, 112(1)
  002d4e0  vspltw 3, 3, 0
  002d4e4  fcfid 3, 3
  002d4e8  vaddfp 2, 2, 3
  002d4ec  vslw 3, 4, 4
  002d4f0  <unknown>
  002d4f4  li 3, 262
  002d4f8  frsp 3, 3
  002d4fc  vmaddfp 2, 4, 2, 3
  002d500  fadds 1, 3, 1
  002d504  vctsxs 2, 2, 0
  002d508  fmuls 1, 2, 1
  002d50c  vsplth 2, 2, 1
  002d510  fctiwz 1, 1
  002d514  stfd 1, 112(1)
  002d518  lwz 4, 116(1)
  002d51c  stvehx 2, 3, 31
  002d520  extsh 3, 4
  002d524  bl 0x502730
  002d528  nop
  002d52c  fdivs 1, 31, 1
  002d530  stfs 1, 264(31)
  002d534  b 0x2d5fc
  002d538  lbz 3, 260(31)
  002d53c  cmpwi 3, 5
  002d540  bf 2, 0x2d5fc
  002d544  lis 4, 151
  002d548  addic 4, 4, -25376
  002d54c  lwz 4, 8324(4)
  002d550  cmpwi 4, 16
  002d554  bf 2, 0x2d5fc
  002d558  li 4, 0
  002d55c  lis 5, 114
  002d560  stb 3, 261(31)
  002d564  li 6, -10940
  002d568  stb 4, 260(31)
  002d56c  li 4, 4
  002d570  lwz 3, -10940(5)
  002d574  <unknown>
  002d578  extsw 3, 3
  002d57c  lis 5, 114
  002d580  vcfsx 2, 2, 0
  002d584  li 6, -3056
  002d588  std 3, 112(1)
  002d58c  lis 3, 3
  002d590  addi 3, 3, -14996
  002d594  <unknown>
  002d598  lfs 1, 4(3)
  002d59c  <unknown>
  002d5a0  lfd 2, 112(1)
  002d5a4  vspltw 3, 3, 0
  002d5a8  fcfid 2, 2
  002d5ac  lfs 3, -3056(5)
  002d5b0  li 3, 262
  002d5b4  vaddfp 2, 2, 3
  002d5b8  vspltisw 3, -1
  002d5bc  vslw 3, 3, 3
  002d5c0  frsp 2, 2
  002d5c4  vmaddfp 2, 4, 2, 3
  002d5c8  fadds 1, 2, 1
  002d5cc  vctsxs 2, 2, 0
  002d5d0  fmuls 1, 3, 1
  002d5d4  vsplth 2, 2, 1
  002d5d8  fctiwz 1, 1
  002d5dc  stfd 1, 112(1)
  002d5e0  lwz 4, 116(1)
  002d5e4  stvehx 2, 3, 31
  002d5e8  extsh 3, 4
  002d5ec  bl 0x502730
  002d5f0  nop
  002d5f4  fdivs 1, 31, 1
  002d5f8  stfs 1, 264(31)
  002d5fc  li 0, 128
  002d600  lvx 31, 1, 0
  002d604  ld 0, 208(1)
  002d608  mtlr 0
  002d60c  lfd 31, 184(1)
  002d610  ld 28, 152(1)
  002d614  ld 29, 160(1)
  002d618  ld 30, 168(1)
  002d61c  ld 31, 176(1)
  002d620  addi 1, 1, 192
  002d624  blr

HandleSpecialTargetUpVec:   # 0x2d638, 0x984 bytes
  002d638  stdu 1, -208(1)
  002d63c  mflr 0
  002d640  std 0, 224(1)
  002d644  stfd 28, 176(1)
  002d648  stfd 29, 184(1)
  002d64c  stfd 30, 192(1)
  002d650  stfd 31, 200(1)
  002d654  std 28, 144(1)
  002d658  std 30, 160(1)
  002d65c  lis 30, 151
  002d660  std 29, 152(1)
  002d664  lis 28, 149
  002d668  lwz 29, 112(3)
  002d66c  std 31, 168(1)
  002d670  addic 30, 30, -25376
  002d674  ori 31, 4, 0
  002d678  addic 28, 28, 5056
  002d67c  lwz 4, 8324(30)
  002d680  lfs 28, 128(30)
  002d684  lfs 29, 132(30)
  002d688  lfs 30, 136(30)
  002d68c  cmpwi 4, 119
  002d690  lfs 31, 140(30)
  002d694  lfs 3, 448(28)
  002d698  lfs 2, 452(28)
  002d69c  lfs 1, 456(28)
  002d6a0  bf 2, 0x2d800
  002d6a4  lfs 4, 68(29)
  002d6a8  lfs 5, 64(29)
  002d6ac  fmuls 2, 4, 2
  002d6b0  lfs 4, 72(29)
  002d6b4  fmadds 2, 5, 3, 2
  002d6b8  fmadds 1, 4, 1, 2
  002d6bc  fmuls 2, 3, 1
  002d6c0  stfs 2, 0(31)
  002d6c4  lfs 3, 452(28)
  002d6c8  fmuls 3, 3, 1
  002d6cc  stfs 3, 4(31)
  002d6d0  lfs 3, 456(28)
  002d6d4  fmuls 1, 3, 1
  002d6d8  stfs 1, 8(31)
  002d6dc  lfs 1, 460(28)
  002d6e0  stfs 1, 12(31)
  002d6e4  lfs 1, 64(29)
  002d6e8  fsubs 1, 1, 2
  002d6ec  lfs 2, 68(29)
  002d6f0  lfs 3, 72(29)
  002d6f4  lfs 4, 164(29)
  002d6f8  lfs 5, 160(29)
  002d6fc  stfs 1, 64(29)
  002d700  lfs 1, 4(31)
  002d704  fsubs 1, 2, 1
  002d708  lfs 2, 168(29)
  002d70c  stfs 1, 68(29)
  002d710  lfs 1, 8(31)
  002d714  fsubs 1, 3, 1
  002d718  stfs 1, 72(29)
  002d71c  lfs 1, 452(28)
  002d720  lfs 3, 448(28)
  002d724  fmuls 1, 1, 4
  002d728  lfs 4, 456(28)
  002d72c  fmadds 1, 3, 5, 1
  002d730  fmadds 1, 4, 2, 1
  002d734  fmuls 2, 3, 1
  002d738  stfs 2, 0(31)
  002d73c  lfs 3, 452(28)
  002d740  fmuls 3, 3, 1
  002d744  stfs 3, 4(31)
  002d748  lfs 3, 456(28)
  002d74c  fmuls 1, 3, 1
  002d750  stfs 1, 8(31)
  002d754  lfs 1, 460(28)
  002d758  stfs 1, 12(31)
  002d75c  stfs 2, 80(29)
  002d760  lfs 1, 4(31)
  002d764  lbz 4, 260(29)
  002d768  stfs 1, 84(29)
  002d76c  lfs 1, 8(31)
  002d770  cmpwi 4, 11
  002d774  stfs 1, 88(29)
  002d778  lfs 1, 12(31)
  002d77c  stfs 1, 92(29)
  002d780  bt 2, 0x2df8c
  002d784  li 4, 11
  002d788  lis 5, 114
  002d78c  vspltisw 4, -1
  002d790  li 6, -11004
  002d794  stb 4, 260(29)
  002d798  lfs 1, 0(3)
  002d79c  lis 4, 3
  002d7a0  lfs 2, 4(3)
  002d7a4  <unknown>
  002d7a8  stfs 1, 64(3)
  002d7ac  addi 4, 4, -10712
  002d7b0  vcfsx 2, 2, 0
  002d7b4  lfs 1, 8(3)
  002d7b8  stfs 2, 68(3)
  002d7bc  li 5, -3056
  002d7c0  lfs 2, 12(3)
  002d7c4  stfs 1, 72(3)
  002d7c8  stfs 2, 76(3)
  002d7cc  <unknown>
  002d7d0  lis 4, 114
  002d7d4  vspltw 3, 3, 0
  002d7d8  vaddfp 2, 2, 3
  002d7dc  vslw 3, 4, 4
  002d7e0  <unknown>
  002d7e4  lwz 3, 112(3)
  002d7e8  li 4, 32
  002d7ec  vmaddfp 2, 4, 2, 3
  002d7f0  vctsxs 2, 2, 0
  002d7f4  vsplth 2, 2, 1
  002d7f8  stvehx 2, 4, 3
  002d7fc  b 0x2df8c
  002d800  lbz 5, 260(29)
  002d804  cmpwi 5, 7
  002d808  cmpwi 1, 5, 2
  002d80c  cmpwi 6, 5, 1
  002d810  cmpwi 7, 5, 4
  002d814  bt 1, 0x2d82c
  002d818  bt 5, 0x2d824
  002d81c  bf 25, 0x2df34
  002d820  b 0x2d840
  002d824  bt 30, 0x2df34
  002d828  b 0x2db40
  002d82c  cmpwi 5, 8
  002d830  bf 1, 0x2de34
  002d834  cmpwi 5, 10
  002d838  bf 1, 0x2de8c
  002d83c  b 0x2df34
  002d840  cmpwi 4, 17
  002d844  bf 2, 0x2d880
  002d848  li 3, 1
  002d84c  lis 4, 114
  002d850  stb 3, 260(29)
  002d854  lwz 3, -10980(4)
  002d858  sth 3, 262(29)
  002d85c  extsh 3, 3
  002d860  bl 0x502730
  002d864  nop
  002d868  lis 3, 3
  002d86c  addi 3, 3, -10712
  002d870  lfs 2, 4(3)
  002d874  fdivs 1, 2, 1
  002d878  stfs 1, 264(29)
  002d87c  b 0x2d910
  002d880  lhz 4, 1054(30)
  002d884  cmpwi 4, 0
  002d888  bt 2, 0x2d910
  002d88c  lwz 5, 732(30)
  002d890  lis 4, 15948
  002d894  srawi 6, 5, 31
  002d898  ori 4, 4, 52429
  002d89c  srwi 7, 6, 1
  002d8a0  xor 5, 7, 5
  002d8a4  subc 5, 5, 6
  002d8a8  cmpw 5, 4
  002d8ac  bf 1, 0x2d910
  002d8b0  lfs 1, 240(29)
  002d8b4  bl 0x2c118
  002d8b8  lis 3, 114
  002d8bc  lfs 2, -11024(3)
  002d8c0  fcmpu 0, 2, 1
  002d8c4  bt 1, 0x2d8dc
  002d8c8  lis 3, 114
  002d8cc  lfs 2, -11028(3)
  002d8d0  fcmpu 0, 2, 1
  002d8d4  cror 6, 1, 2
  002d8d8  bt 6, 0x2d910
  002d8dc  li 3, 1
  002d8e0  lis 4, 114
  002d8e4  stb 3, 260(29)
  002d8e8  lwz 3, -10980(4)
  002d8ec  sth 3, 262(29)
  002d8f0  extsh 3, 3
  002d8f4  bl 0x502730
  002d8f8  nop
  002d8fc  lis 3, 3
  002d900  addi 3, 3, -10712
  002d904  lfs 2, 4(3)
  002d908  fdivs 1, 2, 1
  002d90c  stfs 1, 264(29)
  002d910  lhz 3, 780(30)
  002d914  cmpwi 3, 0
  002d918  bt 2, 0x2d940
  002d91c  lwz 3, 620(28)
  002d920  cmpwi 3, 0
  002d924  bf 2, 0x2d940
  002d928  lhz 3, 1054(30)
  002d92c  cmpwi 3, 0
  002d930  bt 2, 0x2d9a0
  002d934  lwz 3, 1100(30)
  002d938  cmpwi 3, 15
  002d93c  bt 1, 0x2d9a0
  002d940  addic 3, 1, 112
  002d944  li 4, 1
  002d948  bl 0x2bd08
  002d94c  cmpwi 3, 1
  002d950  bf 2, 0x2d9a0
  002d954  lfs 1, 84(29)
  002d958  lfs 2, 80(29)
  002d95c  fmuls 1, 1, 1
  002d960  lfs 3, 88(29)
  002d964  lfs 4, 116(1)
  002d968  fmadds 1, 2, 2, 1
  002d96c  lfs 2, 452(28)
  002d970  lfs 5, 112(1)
  002d974  fmuls 2, 4, 2
  002d978  fmadds 1, 3, 3, 1
  002d97c  lfs 3, 448(28)
  002d980  fmadds 2, 5, 3, 2
  002d984  lfs 3, 120(1)
  002d988  lfs 4, 456(28)
  002d98c  fsqrts 1, 1
  002d990  fmadds 2, 3, 4, 2
  002d994  fcmpu 0, 2, 1
  002d998  cror 6, 1, 2
  002d99c  bt 6, 0x2dab4
  002d9a0  lfs 2, 448(28)
  002d9a4  lis 3, 3
  002d9a8  lfs 1, 464(28)
  002d9ac  addi 3, 3, -10712
  002d9b0  fsubs 3, 2, 1
  002d9b4  lfs 1, 8(3)
  002d9b8  fabs 3, 3
  002d9bc  fcmpu 0, 3, 1
  002d9c0  bt 1, 0x2d9f8
  002d9c4  lfs 3, 452(28)
  002d9c8  lfs 4, 468(28)
  002d9cc  fsubs 3, 3, 4
  002d9d0  fabs 3, 3
  002d9d4  fcmpu 0, 3, 1
  002d9d8  bt 1, 0x2d9f8
  002d9dc  lfs 3, 456(28)
  002d9e0  lfs 4, 472(28)
  002d9e4  fsubs 3, 3, 4
  002d9e8  fabs 3, 3
  002d9ec  fcmpu 0, 3, 1
  002d9f0  cror 6, 0, 2
  002d9f4  bt 6, 0x2da5c
  002d9f8  lfs 1, 452(28)
  002d9fc  lfs 3, 456(28)
  002da00  fmuls 1, 29, 1
  002da04  fmadds 1, 28, 2, 1
  002da08  fmadds 1, 30, 3, 1
  002da0c  fmuls 2, 2, 1
  002da10  stfs 2, 0(31)
  002da14  lfs 3, 452(28)
  002da18  fsubs 2, 28, 2
  002da1c  fmuls 3, 3, 1
  002da20  stfs 3, 4(31)
  002da24  lfs 3, 456(28)
  002da28  fmuls 1, 3, 1
  002da2c  stfs 1, 8(31)
  002da30  lfs 1, 460(28)
  002da34  stfs 1, 12(31)
  002da38  stfs 2, 64(29)
  002da3c  lfs 1, 4(31)
  002da40  fsubs 1, 29, 1
  002da44  stfs 1, 68(29)
  002da48  lfs 1, 8(31)
  002da4c  stfs 31, 76(29)
  002da50  fsubs 1, 30, 1
  002da54  stfs 1, 72(29)
  002da58  b 0x2df8c
  002da5c  lfs 1, 80(29)
  002da60  stfs 1, 0(31)
  002da64  lfs 1, 84(29)
  002da68  stfs 1, 4(31)
  002da6c  lfs 1, 88(29)
  002da70  stfs 1, 8(31)
  002da74  lfs 1, 92(29)
  002da78  stfs 1, 12(31)
  002da7c  lfs 1, 452(28)
  002da80  lfs 2, 448(28)
  002da84  fmuls 3, 29, 1
  002da88  lfs 4, 456(28)
  002da8c  stfs 31, 76(29)
  002da90  fmadds 3, 28, 2, 3
  002da94  fmadds 3, 30, 4, 3
  002da98  fnmsubs 2, 2, 3, 28
  002da9c  fnmsubs 1, 1, 3, 29
  002daa0  fnmsubs 3, 4, 3, 30
  002daa4  stfs 2, 64(29)
  002daa8  stfs 1, 68(29)
  002daac  stfs 3, 72(29)
  002dab0  b 0x2df8c
  002dab4  addic 3, 1, 128
  002dab8  li 4, 1
  002dabc  bl 0x2bd08
  002dac0  lfs 1, 132(1)
  002dac4  lfs 2, 452(28)
  002dac8  lfs 3, 128(1)
  002dacc  fmuls 1, 1, 2
  002dad0  lfs 2, 448(28)
  002dad4  lfs 4, 136(1)
  002dad8  lfs 5, 456(28)
  002dadc  fmadds 1, 3, 2, 1
  002dae0  fmadds 1, 4, 5, 1
  002dae4  fmuls 2, 2, 1
  002dae8  stfs 2, 0(31)
  002daec  lfs 4, 452(28)
  002daf0  fsubs 2, 3, 2
  002daf4  fmuls 4, 4, 1
  002daf8  stfs 4, 4(31)
  002dafc  lfs 3, 456(28)
  002db00  fmuls 1, 3, 1
  002db04  stfs 1, 8(31)
  002db08  lfs 1, 460(28)
  002db0c  stfs 1, 12(31)
  002db10  stfs 2, 64(29)
  002db14  lfs 1, 132(1)
  002db18  lfs 2, 4(31)
  002db1c  fsubs 1, 1, 2
  002db20  stfs 1, 68(29)
  002db24  lfs 1, 136(1)
  002db28  lfs 2, 8(31)
  002db2c  fsubs 1, 1, 2
  002db30  stfs 1, 72(29)
  002db34  lfs 1, 140(1)
  002db38  stfs 1, 76(29)
  002db3c  b 0x2df8c
  002db40  li 4, 276
  002db44  vspltisw 2, -16
  002db48  li 5, 268
  002db4c  li 6, 112
  002db50  vspltisw 4, -1
  002db54  li 7, 116
  002db58  li 8, 104
  002db5c  <unknown>
  002db60  li 4, 96
  002db64  vsraw 2, 3, 2
  002db68  <unknown>
  002db6c  li 5, 100
  002db70  vslw 4, 4, 4
  002db74  vcfsx 2, 2, 0
  002db78  <unknown>
  002db7c  li 4, 120
  002db80  <unknown>
  002db84  <unknown>
  002db88  li 6, 84
  002db8c  <unknown>
  002db90  li 5, 88
  002db94  <unknown>
  002db98  vsubfp 5, 5, 6
  002db9c  <unknown>
  002dba0  vsubfp 7, 7, 8
  002dba4  li 4, 80
  002dba8  lfs 1, 108(29)
  002dbac  lbz 7, 279(29)
  002dbb0  vmaddfp 3, 2, 3, 4
  002dbb4  vsubfp 4, 9, 10
  002dbb8  cmpwi 7, 0
  002dbbc  vmaddfp 2, 3, 5, 6
  002dbc0  vmaddfp 5, 3, 7, 8
  002dbc4  vmaddfp 3, 3, 4, 10
  002dbc8  vspltw 4, 2, 0
  002dbcc  vspltw 5, 5, 0
  002dbd0  vspltw 3, 3, 0
  002dbd4  stvewx 4, 4, 29
  002dbd8  stvewx 5, 6, 29
  002dbdc  stvewx 3, 5, 29
  002dbe0  stfs 1, 92(29)
  002dbe4  bf 2, 0x2dc44
  002dbe8  lis 4, 3
  002dbec  addic 3, 3, 48
  002dbf0  addi 4, 4, -10712
  002dbf4  li 5, 18
  002dbf8  li 6, 0
  002dbfc  lfs 1, 12(4)
  002dc00  bl 0x59e20
  002dc04  nop
  002dc08  li 4, 80
  002dc0c  cmpwi 3, 0
  002dc10  <unknown>
  002dc14  bt 2, 0x2dc44
  002dc18  vspltw 3, 2, 0
  002dc1c  li 3, 112
  002dc20  lfs 1, 84(29)
  002dc24  lfs 2, 88(29)
  002dc28  li 4, 1
  002dc2c  stvewx 3, 3, 29
  002dc30  stfs 1, 116(29)
  002dc34  lfs 1, 92(29)
  002dc38  stfs 2, 120(29)
  002dc3c  stfs 1, 124(29)
  002dc40  stb 4, 279(29)
  002dc44  vspltw 2, 2, 0
  002dc48  addic 3, 29, 276
  002dc4c  stvewx 2, 0, 31
  002dc50  lfs 1, 84(29)
  002dc54  stfs 1, 4(31)
  002dc58  lfs 1, 88(29)
  002dc5c  stfs 1, 8(31)
  002dc60  lfs 1, 92(29)
  002dc64  stfs 1, 12(31)
  002dc68  lfs 1, 452(28)
  002dc6c  lfs 2, 448(28)
  002dc70  fmuls 3, 29, 1
  002dc74  lfs 4, 456(28)
  002dc78  stfs 31, 76(29)
  002dc7c  fmadds 3, 28, 2, 3
  002dc80  fmadds 3, 30, 4, 3
  002dc84  fnmsubs 2, 2, 3, 28
  002dc88  fnmsubs 1, 1, 3, 29
  002dc8c  fnmsubs 3, 4, 3, 30
  002dc90  stfs 2, 64(29)
  002dc94  stfs 1, 68(29)
  002dc98  stfs 3, 72(29)
  002dc9c  bl 0x4fffb4
  002dca0  nop
  002dca4  cmpwi 3, 0
  002dca8  bt 2, 0x2df8c
  002dcac  lbz 3, 260(29)
  002dcb0  cmpwi 3, 9
  002dcb4  cmpwi 1, 3, 6
  002dcb8  bf 2, 0x2dd60
  002dcbc  li 3, 10
  002dcc0  vspltisw 4, -1
  002dcc4  lis 4, 114
  002dcc8  li 5, -10932
  002dccc  lis 6, 3
  002dcd0  stb 3, 260(29)
  002dcd4  addi 3, 6, -10712
  002dcd8  vslw 4, 4, 4
  002dcdc  <unknown>
  002dce0  li 4, -3056
  002dce4  vcfsx 2, 2, 0
  002dce8  <unknown>
  002dcec  lis 3, 114
  002dcf0  vspltw 3, 3, 0
  002dcf4  <unknown>
  002dcf8  li 3, 276
  002dcfc  lfs 1, 80(29)
  002dd00  lfs 2, 84(29)
  002dd04  vaddfp 2, 2, 3
  002dd08  lfs 3, 88(29)
  002dd0c  lfs 4, 92(29)
  002dd10  lfs 5, 272(29)
  002dd14  vmaddfp 2, 5, 2, 4
  002dd18  vctsxs 2, 2, 0
  002dd1c  vsplth 2, 2, 1
  002dd20  stvehx 2, 3, 29
  002dd24  stfs 1, 96(29)
  002dd28  stfs 2, 100(29)
  002dd2c  stfs 3, 104(29)
  002dd30  stfs 4, 108(29)
  002dd34  lfs 6, 448(28)
  002dd38  lfs 7, 452(28)
  002dd3c  lfs 8, 456(28)
  002dd40  fnmsubs 1, 6, 5, 1
  002dd44  fnmsubs 2, 7, 5, 2
  002dd48  stfs 4, 124(29)
  002dd4c  fnmsubs 3, 8, 5, 3
  002dd50  stfs 1, 112(29)
  002dd54  stfs 2, 116(29)
  002dd58  stfs 3, 120(29)
  002dd5c  b 0x2df8c
  002dd60  bf 6, 0x2ddfc
  002dd64  li 3, 7
  002dd68  vspltisw 4, -1
  002dd6c  lis 4, 114
  002dd70  li 5, -10976
  002dd74  lis 6, 3
  002dd78  stb 3, 260(29)
  002dd7c  addi 3, 6, -10712
  002dd80  vslw 4, 4, 4
  002dd84  <unknown>
  002dd88  li 4, -3056
  002dd8c  vcfsx 2, 2, 0
  002dd90  <unknown>
  002dd94  lis 3, 114
  002dd98  vspltw 3, 3, 0
  002dd9c  <unknown>
  002dda0  lfs 1, 96(29)
  002dda4  lfs 2, 100(29)
  002dda8  li 3, 276
  002ddac  lfs 3, 104(29)
  002ddb0  vaddfp 2, 2, 3
  002ddb4  lfs 4, 108(29)
  002ddb8  lfs 5, 80(29)
  002ddbc  lfs 6, 84(29)
  002ddc0  lfs 7, 88(29)
  002ddc4  lfs 8, 92(29)
  002ddc8  vmaddfp 2, 5, 2, 4
  002ddcc  vctsxs 2, 2, 0
  002ddd0  vsplth 2, 2, 1
  002ddd4  stvehx 2, 3, 29
  002ddd8  stfs 1, 112(29)
  002dddc  stfs 2, 116(29)
  002dde0  stfs 3, 120(29)
  002dde4  stfs 4, 124(29)
  002dde8  stfs 5, 96(29)
  002ddec  stfs 6, 100(29)
  002ddf0  stfs 7, 104(29)
  002ddf4  stfs 8, 108(29)
  002ddf8  b 0x2df8c
  002ddfc  li 3, 4
  002de00  lis 4, 114
  002de04  stb 3, 260(29)
  002de08  lwz 3, -10956(4)
  002de0c  sth 3, 262(29)
  002de10  extsh 3, 3
  002de14  bl 0x502730
  002de18  nop
  002de1c  lis 3, 3
  002de20  addi 3, 3, -10712
  002de24  lfs 2, 4(3)
  002de28  fdivs 1, 2, 1
  002de2c  stfs 1, 264(29)
  002de30  b 0x2df8c
  002de34  lfs 1, 80(29)
  002de38  stfs 1, 0(31)
  002de3c  lfs 1, 84(29)
  002de40  stfs 1, 4(31)
  002de44  lfs 1, 88(29)
  002de48  stfs 1, 8(31)
  002de4c  lfs 1, 92(29)
  002de50  stfs 1, 12(31)
  002de54  lfs 1, 452(28)
  002de58  lfs 2, 448(28)
  002de5c  fmuls 3, 29, 1
  002de60  lfs 4, 456(28)
  002de64  stfs 31, 76(29)
  002de68  fmadds 3, 28, 2, 3
  002de6c  fmadds 3, 30, 4, 3
  002de70  fnmsubs 2, 2, 3, 28
  002de74  fnmsubs 1, 1, 3, 29
  002de78  fnmsubs 3, 4, 3, 30
  002de7c  stfs 2, 64(29)
  002de80  stfs 1, 68(29)
  002de84  stfs 3, 72(29)
  002de88  b 0x2df8c
  002de8c  fmuls 2, 29, 2
  002de90  lis 3, 114
  002de94  fmadds 2, 28, 3, 2
  002de98  fmadds 1, 30, 1, 2
  002de9c  fmuls 2, 3, 1
  002dea0  stfs 2, 0(31)
  002dea4  lfs 3, 452(28)
  002dea8  fsubs 2, 28, 2
  002deac  fmuls 3, 3, 1
  002deb0  stfs 3, 4(31)
  002deb4  lfs 3, 456(28)
  002deb8  fmuls 1, 3, 1
  002debc  stfs 1, 8(31)
  002dec0  lfs 1, 460(28)
  002dec4  stfs 1, 12(31)
  002dec8  stfs 2, 64(29)
  002decc  lfs 1, 4(31)
  002ded0  lfs 2, 96(29)
  002ded4  fsubs 1, 29, 1
  002ded8  lfs 3, 100(29)
  002dedc  lfs 4, 104(29)
  002dee0  lfs 5, 108(29)
  002dee4  stfs 1, 68(29)
  002dee8  lfs 1, 8(31)
  002deec  stfs 31, 76(29)
  002def0  fsubs 1, 30, 1
  002def4  stfs 1, 72(29)
  002def8  lfs 1, 0(31)
  002defc  lfs 6, 4(31)
  002df00  fsubs 2, 2, 1
  002df04  lfs 7, 8(31)
  002df08  fsubs 3, 3, 6
  002df0c  lfs 8, -10912(3)
  002df10  fsubs 4, 4, 7
  002df14  stfs 5, 12(31)
  002df18  fmadds 1, 8, 2, 1
  002df1c  fmadds 2, 8, 3, 6
  002df20  fmadds 3, 8, 4, 7
  002df24  stfs 1, 0(31)
  002df28  stfs 2, 4(31)
  002df2c  stfs 3, 8(31)
  002df30  b 0x2df8c
  002df34  fmuls 2, 29, 2
  002df38  fmadds 2, 28, 3, 2
  002df3c  fmadds 1, 30, 1, 2
  002df40  fmuls 2, 3, 1
  002df44  stfs 2, 0(31)
  002df48  lfs 3, 452(28)
  002df4c  fsubs 2, 28, 2
  002df50  fmuls 3, 3, 1
  002df54  stfs 3, 4(31)
  002df58  lfs 3, 456(28)
  002df5c  fmuls 1, 3, 1
  002df60  stfs 1, 8(31)
  002df64  lfs 1, 460(28)
  002df68  stfs 1, 12(31)
  002df6c  stfs 2, 64(29)
  002df70  lfs 1, 4(31)
  002df74  fsubs 1, 29, 1
  002df78  stfs 1, 68(29)
  002df7c  lfs 1, 8(31)
  002df80  stfs 31, 76(29)
  002df84  fsubs 1, 30, 1
  002df88  stfs 1, 72(29)
  002df8c  ld 0, 224(1)
  002df90  mtlr 0
  002df94  lfd 28, 176(1)
  002df98  lfd 29, 184(1)
  002df9c  lfd 30, 192(1)
  002dfa0  lfd 31, 200(1)
  002dfa4  ld 28, 144(1)
  002dfa8  ld 29, 152(1)
  002dfac  ld 30, 160(1)
  002dfb0  ld 31, 168(1)
  002dfb4  addi 1, 1, 208
  002dfb8  blr

InterpPitchTarget:   # 0x2dfbc, 0xd8 bytes
  002dfbc  stdu 1, -160(1)
  002dfc0  mflr 0
  002dfc4  std 0, 176(1)
  002dfc8  stfd 29, 136(1)
  002dfcc  stfd 30, 144(1)
  002dfd0  stfd 31, 152(1)
  002dfd4  fmr 31, 3
  002dfd8  std 31, 128(1)
  002dfdc  fmr 30, 2
  002dfe0  ori 31, 5, 0
  002dfe4  std 30, 120(1)
  002dfe8  fmr 29, 1
  002dfec  std 29, 112(1)
  002dff0  ori 30, 4, 0
  002dff4  lwz 29, 112(3)
  002dff8  addic 5, 29, 224
  002dffc  lfs 2, 0(31)
  002e000  lfs 1, 0(30)
  002e004  fmr 5, 31
  002e008  fmr 4, 30
  002e00c  fmr 3, 29
  002e010  bl 0x501e8
  002e014  nop
  002e018  lfs 2, 4(30)
  002e01c  stfs 1, 0(30)
  002e020  addic 5, 29, 228
  002e024  fmr 1, 2
  002e028  lfs 2, 4(31)
  002e02c  fmr 3, 29
  002e030  fmr 4, 30
  002e034  fmr 5, 31
  002e038  bl 0x501e8
  002e03c  nop
  002e040  lfs 2, 8(30)
  002e044  stfs 1, 4(30)
  002e048  addic 5, 29, 232
  002e04c  fmr 1, 2
  002e050  lfs 2, 8(31)
  002e054  fmr 3, 29
  002e058  fmr 4, 30
  002e05c  fmr 5, 31
  002e060  bl 0x501e8
  002e064  nop
  002e068  stfs 1, 8(30)
  002e06c  ld 0, 176(1)
  002e070  mtlr 0
  002e074  lfd 29, 136(1)
  002e078  lfd 30, 144(1)
  002e07c  lfd 31, 152(1)
  002e080  ld 29, 112(1)
  002e084  ld 30, 120(1)
  002e088  ld 31, 128(1)
  002e08c  addi 1, 1, 160
  002e090  blr

GetIdealPitchTarget:   # 0x2e094, 0x130 bytes
  002e094  ori 7, 3, 0
  002e098  cmpwi 1, 6, 7
  002e09c  cmpwi 6, 6, 5
  002e0a0  cmpwi 6, 2
  002e0a4  cmpwi 7, 6, 1
  002e0a8  li 3, 1
  002e0ac  lwz 6, 112(7)
  002e0b0  bt 1, 0x2e0bc
  002e0b4  bt 30, 0x2e144
  002e0b8  b 0x2e188
  002e0bc  bf 25, 0x2e104
  002e0c0  bt 5, 0x2e188
  002e0c4  lfs 1, 0(4)
  002e0c8  lfs 2, 64(6)
  002e0cc  fadds 1, 1, 2
  002e0d0  lfs 2, 4(4)
  002e0d4  lfs 3, 8(4)
  002e0d8  lfs 4, 12(4)
  002e0dc  li 3, 0
  002e0e0  stfs 1, 0(5)
  002e0e4  lfs 1, 68(6)
  002e0e8  fadds 1, 2, 1
  002e0ec  stfs 1, 4(5)
  002e0f0  lfs 1, 72(6)
  002e0f4  stfs 4, 12(5)
  002e0f8  fadds 1, 3, 1
  002e0fc  stfs 1, 8(5)
  002e100  b 0x2e1c0
  002e104  lfs 1, 0(4)
  002e108  lfs 2, 64(6)
  002e10c  fadds 1, 1, 2
  002e110  lfs 2, 4(4)
  002e114  lfs 3, 8(4)
  002e118  lfs 4, 12(4)
  002e11c  li 3, 0
  002e120  stfs 1, 0(5)
  002e124  lfs 1, 68(6)
  002e128  fadds 1, 2, 1
  002e12c  stfs 1, 4(5)
  002e130  lfs 1, 72(6)
  002e134  stfs 4, 12(5)
  002e138  fadds 1, 3, 1
  002e13c  stfs 1, 8(5)
  002e140  b 0x2e1c0
  002e144  lis 6, 151
  002e148  lfs 1, 0(4)
  002e14c  lfs 2, 4(4)
  002e150  addic 6, 6, -25376
  002e154  lfs 3, 128(6)
  002e158  lfs 4, 132(6)
  002e15c  lfs 5, 136(6)
  002e160  fadds 1, 1, 3
  002e164  lfs 3, 8(4)
  002e168  fadds 2, 2, 4
  002e16c  lfs 4, 12(4)
  002e170  fadds 3, 3, 5
  002e174  stfs 4, 12(5)
  002e178  stfs 1, 0(5)
  002e17c  stfs 2, 4(5)
  002e180  stfs 3, 8(5)
  002e184  b 0x2e1c0
  002e188  lfs 1, 0(4)
  002e18c  lfs 2, 64(6)
  002e190  fadds 1, 1, 2
  002e194  lfs 2, 4(4)
  002e198  lfs 3, 8(4)
  002e19c  lfs 4, 12(4)
  002e1a0  stfs 1, 0(5)
  002e1a4  lfs 1, 68(6)
  002e1a8  fadds 1, 2, 1
  002e1ac  stfs 1, 4(5)
  002e1b0  lfs 1, 72(6)
  002e1b4  stfs 4, 12(5)
  002e1b8  fadds 1, 3, 1
  002e1bc  stfs 1, 8(5)
  002e1c0  blr

HandleSpecialPitchTarget:   # 0x2e1c8, 0x18c bytes
  002e1c8  stdu 1, -192(1)
  002e1cc  mflr 0
  002e1d0  std 0, 208(1)
  002e1d4  stfd 29, 168(1)
  002e1d8  stfd 30, 176(1)
  002e1dc  stfd 31, 184(1)
  002e1e0  std 30, 152(1)
  002e1e4  std 31, 160(1)
  002e1e8  ori 30, 3, 0
  002e1ec  std 29, 144(1)
  002e1f0  ori 31, 4, 0
  002e1f4  lwz 29, 112(30)
  002e1f8  addic 3, 29, 262
  002e1fc  bl 0x4fffb4
  002e200  nop
  002e204  lhz 4, 262(29)
  002e208  cmpwi 3, 0
  002e20c  lfs 31, 264(29)
  002e210  lbz 3, 260(29)
  002e214  bt 2, 0x2e21c
  002e218  stb 3, 261(29)
  002e21c  ori 6, 3, 0
  002e220  extsh 3, 4
  002e224  extsw 3, 3
  002e228  addic 5, 1, 112
  002e22c  ori 4, 31, 0
  002e230  std 3, 128(1)
  002e234  ori 3, 30, 0
  002e238  lfd 1, 128(1)
  002e23c  fcfid 1, 1
  002e240  frsp 1, 1
  002e244  fmuls 31, 1, 31
  002e248  bl 0x2e094
  002e24c  lis 3, 114
  002e250  lbz 31, 260(29)
  002e254  lis 4, 114
  002e258  cmpwi 31, 3
  002e25c  lfs 1, -10996(3)
  002e260  lfs 30, -11000(4)
  002e264  bt 2, 0x2e288
  002e268  cmpwi 31, 5
  002e26c  bt 2, 0x2e288
  002e270  cmpwi 31, 6
  002e274  bt 2, 0x2e288
  002e278  cmpwi 31, 7
  002e27c  bt 2, 0x2e288
  002e280  cmpwi 31, 1
  002e284  bf 2, 0x2e2ac
  002e288  lis 3, 114
  002e28c  lis 4, 114
  002e290  lfs 2, -10992(3)
  002e294  lfs 3, -10988(4)
  002e298  fsubs 30, 30, 2
  002e29c  fsubs 1, 1, 3
  002e2a0  fmadds 30, 30, 31, 2
  002e2a4  fmadds 31, 1, 31, 3
  002e2a8  b 0x2e2b0
  002e2ac  fmr 31, 1
  002e2b0  lis 3, 3
  002e2b4  lwz 31, 112(30)
  002e2b8  addi 3, 3, -7740
  002e2bc  lfs 1, 208(29)
  002e2c0  fmr 3, 30
  002e2c4  fmr 4, 31
  002e2c8  addic 5, 31, 224
  002e2cc  lfs 29, 0(3)
  002e2d0  lfs 2, 112(1)
  002e2d4  fmr 5, 29
  002e2d8  bl 0x501e8
  002e2dc  nop
  002e2e0  stfs 1, 208(29)
  002e2e4  lfs 1, 212(29)
  002e2e8  addic 5, 31, 228
  002e2ec  lfs 2, 116(1)
  002e2f0  fmr 3, 30
  002e2f4  fmr 4, 31
  002e2f8  fmr 5, 29
  002e2fc  bl 0x501e8
  002e300  nop
  002e304  stfs 1, 212(29)
  002e308  addic 5, 31, 232
  002e30c  lfs 1, 216(29)
  002e310  fmr 3, 30
  002e314  lfs 2, 120(1)
  002e318  fmr 4, 31
  002e31c  fmr 5, 29
  002e320  bl 0x501e8
  002e324  nop
  002e328  stfs 1, 216(29)
  002e32c  ld 0, 208(1)
  002e330  mtlr 0
  002e334  lfd 29, 168(1)
  002e338  lfd 30, 176(1)
  002e33c  lfd 31, 184(1)
  002e340  ld 29, 144(1)
  002e344  ld 30, 152(1)
  002e348  ld 31, 160(1)
  002e34c  addi 1, 1, 192
  002e350  blr

Cam0_SetCamHeight:   # 0x2e354, 0x30 bytes
  002e354  lis 3, 149
  002e358  addic 3, 3, 5056
  002e35c  lwz 3, 384(3)
  002e360  lhz 4, 134(3)
  002e364  cmpwi 4, 0
  002e368  bf 2, 0x2e380
  002e36c  lwz 3, 112(3)
  002e370  li 4, 1
  002e374  sth 4, 366(3)
  002e378  stfs 1, 380(3)
  002e37c  stfs 2, 388(3)
  002e380  blr

UpdateCamTarget_0:   # 0x2e3a0, 0x9d8 bytes
  002e3a0  stdu 1, -336(1)
  002e3a4  mflr 0
  002e3a8  std 0, 352(1)
  002e3ac  stfd 20, 240(1)
  002e3b0  stfd 21, 248(1)
  002e3b4  stfd 22, 256(1)
  002e3b8  stfd 23, 264(1)
  002e3bc  stfd 24, 272(1)
  002e3c0  stfd 25, 280(1)
  002e3c4  stfd 26, 288(1)
  002e3c8  stfd 27, 296(1)
  002e3cc  stfd 28, 304(1)
  002e3d0  stfd 29, 312(1)
  002e3d4  stfd 30, 320(1)
  002e3d8  stfd 31, 328(1)
  002e3dc  std 28, 208(1)
  002e3e0  std 31, 232(1)
  002e3e4  lis 28, 151
  002e3e8  ori 31, 3, 0
  002e3ec  addic 28, 28, -25376
  002e3f0  std 29, 216(1)
  002e3f4  std 27, 200(1)
  002e3f8  lis 3, 3
  002e3fc  lis 29, 149
  002e400  std 30, 224(1)
  002e404  addi 27, 3, -7292
  002e408  lwz 30, 112(31)
  002e40c  lfs 31, 128(28)
  002e410  ori 3, 31, 0
  002e414  lfs 30, 132(28)
  002e418  addic 29, 29, 5056
  002e41c  lfs 29, 136(28)
  002e420  lfs 28, 140(28)
  002e424  bl 0x2c578
  002e428  addic 4, 1, 112
  002e42c  ori 3, 31, 0
  002e430  bl 0x2d638
  002e434  lfs 2, 112(1)
  002e438  addic 5, 30, 192
  002e43c  stfs 2, 80(30)
  002e440  lfs 1, 116(1)
  002e444  stfs 1, 84(30)
  002e448  lfs 1, 120(1)
  002e44c  stfs 1, 88(30)
  002e450  lfs 1, 124(1)
  002e454  lfs 6, 164(30)
  002e458  stfs 1, 92(30)
  002e45c  lfs 7, 452(29)
  002e460  lfs 1, 448(29)
  002e464  fmuls 3, 7, 6
  002e468  lfs 8, 160(30)
  002e46c  lfs 9, 456(29)
  002e470  lfs 10, 168(30)
  002e474  lfs 27, 0(27)
  002e478  fmadds 5, 1, 8, 3
  002e47c  lfs 3, 292(30)
  002e480  lfs 26, 172(30)
  002e484  lfs 4, 296(30)
  002e488  fmadds 11, 9, 10, 5
  002e48c  fmr 5, 27
  002e490  fmuls 1, 1, 11
  002e494  fmuls 25, 7, 11
  002e498  fmuls 24, 9, 11
  002e49c  fsubs 23, 8, 1
  002e4a0  fsubs 22, 6, 25
  002e4a4  fsubs 21, 10, 24
  002e4a8  bl 0x501e8
  002e4ac  nop
  002e4b0  fmr 20, 1
  002e4b4  fmr 1, 25
  002e4b8  lfs 2, 84(30)
  002e4bc  lfs 3, 292(30)
  002e4c0  addic 5, 30, 196
  002e4c4  lfs 4, 296(30)
  002e4c8  fmr 5, 27
  002e4cc  bl 0x501e8
  002e4d0  nop
  002e4d4  fmr 25, 1
  002e4d8  lfs 2, 88(30)
  002e4dc  fmr 1, 24
  002e4e0  lfs 3, 292(30)
  002e4e4  addic 5, 30, 200
  002e4e8  lfs 4, 296(30)
  002e4ec  fmr 5, 27
  002e4f0  bl 0x501e8
  002e4f4  nop
  002e4f8  fmr 24, 1
  002e4fc  fmr 1, 23
  002e500  lfs 2, 64(30)
  002e504  lfs 3, 284(30)
  002e508  addic 5, 30, 176
  002e50c  lfs 4, 288(30)
  002e510  fmr 5, 27
  002e514  bl 0x501e8
  002e518  nop
  002e51c  fmr 23, 1
  002e520  lfs 2, 68(30)
  002e524  fmr 1, 22
  002e528  lfs 3, 284(30)
  002e52c  addic 5, 30, 180
  002e530  lfs 4, 288(30)
  002e534  fmr 5, 27
  002e538  bl 0x501e8
  002e53c  nop
  002e540  fmr 22, 1
  002e544  fmr 1, 21
  002e548  lfs 2, 72(30)
  002e54c  lfs 3, 284(30)
  002e550  addic 5, 30, 184
  002e554  lfs 4, 288(30)
  002e558  fmr 5, 27
  002e55c  bl 0x501e8
  002e560  nop
  002e564  lfs 2, 64(30)
  002e568  fadds 1, 1, 24
  002e56c  lfs 3, 80(30)
  002e570  fadds 5, 23, 20
  002e574  lfs 4, 68(30)
  002e578  fadds 7, 22, 25
  002e57c  fadds 2, 2, 3
  002e580  lfs 3, 84(30)
  002e584  lfs 6, 72(30)
  002e588  fadds 3, 4, 3
  002e58c  lfs 4, 88(30)
  002e590  stfs 26, 172(30)
  002e594  fadds 4, 6, 4
  002e598  lfs 6, 240(30)
  002e59c  stfs 1, 168(30)
  002e5a0  stfs 2, 64(30)
  002e5a4  stfs 5, 160(30)
  002e5a8  stfs 7, 164(30)
  002e5ac  stfs 3, 68(30)
  002e5b0  stfs 4, 72(30)
  002e5b4  lfs 1, 432(29)
  002e5b8  fmuls 1, 1, 6
  002e5bc  stfs 1, 128(1)
  002e5c0  lfs 1, 436(29)
  002e5c4  fmuls 1, 1, 6
  002e5c8  stfs 1, 132(1)
  002e5cc  lfs 1, 440(29)
  002e5d0  fmuls 1, 1, 6
  002e5d4  stfs 1, 136(1)
  002e5d8  lfs 1, 444(29)
  002e5dc  stfs 1, 140(1)
  002e5e0  lbz 3, 278(30)
  002e5e4  cmpwi 3, 0
  002e5e8  bt 2, 0x2e748
  002e5ec  lhz 3, 280(30)
  002e5f0  lis 4, 114
  002e5f4  lis 7, 3
  002e5f8  addic 5, 3, 1
  002e5fc  lis 8, 114
  002e600  vspltisw 3, -1
  002e604  sth 5, 280(30)
  002e608  lwz 3, -11008(4)
  002e60c  extsw 6, 3
  002e610  vslw 3, 3, 3
  002e614  extsh 5, 5
  002e618  std 6, 176(1)
  002e61c  addi 6, 7, -7292
  002e620  li 7, -11008
  002e624  lfs 1, 4(6)
  002e628  <unknown>
  002e62c  li 4, 4
  002e630  lfs 2, -3056(8)
  002e634  vcfsx 2, 2, 0
  002e638  <unknown>
  002e63c  lfd 3, 176(1)
  002e640  li 4, -3056
  002e644  vspltw 4, 4, 0
  002e648  fcfid 3, 3
  002e64c  vaddfp 2, 2, 4
  002e650  <unknown>
  002e654  frsp 3, 3
  002e658  vmaddfp 2, 4, 2, 3
  002e65c  fadds 3, 3, 1
  002e660  vctsxs 2, 2, 0
  002e664  fmuls 3, 2, 3
  002e668  fctiwz 3, 3
  002e66c  stfd 3, 176(1)
  002e670  lwz 4, 180(1)
  002e674  cmpw 5, 4
  002e678  bf 1, 0x2e698
  002e67c  vsplth 2, 2, 1
  002e680  li 3, 280
  002e684  lis 4, 114
  002e688  lis 5, 114
  002e68c  stvehx 2, 3, 30
  002e690  lwz 3, -11008(4)
  002e694  lfs 2, -3056(5)
  002e698  extsw 3, 3
  002e69c  std 3, 176(1)
  002e6a0  lfd 3, 176(1)
  002e6a4  fcfid 3, 3
  002e6a8  frsp 3, 3
  002e6ac  fadds 1, 3, 1
  002e6b0  fmuls 1, 2, 1
  002e6b4  fctiwz 1, 1
  002e6b8  stfd 1, 176(1)
  002e6bc  lwz 3, 180(1)
  002e6c0  extsw 3, 3
  002e6c4  bl 0x502730
  002e6c8  nop
  002e6cc  lhz 3, 280(30)
  002e6d0  extsh 3, 3
  002e6d4  extsw 3, 3
  002e6d8  std 3, 176(1)
  002e6dc  lfs 2, 160(30)
  002e6e0  lfs 3, 64(30)
  002e6e4  lfs 4, 164(30)
  002e6e8  lfs 5, 68(30)
  002e6ec  lfd 6, 176(1)
  002e6f0  fcfid 6, 6
  002e6f4  fsubs 2, 2, 3
  002e6f8  fsubs 4, 4, 5
  002e6fc  frsp 6, 6
  002e700  fdivs 1, 6, 1
  002e704  lfs 6, 128(1)
  002e708  lfs 7, 168(30)
  002e70c  lfs 8, 72(30)
  002e710  fsubs 7, 7, 8
  002e714  fmadds 2, 1, 2, 3
  002e718  fmadds 3, 1, 4, 5
  002e71c  fmadds 1, 1, 7, 8
  002e720  fadds 2, 6, 2
  002e724  stfs 2, 128(30)
  002e728  lfs 2, 132(1)
  002e72c  fadds 2, 2, 3
  002e730  stfs 2, 132(30)
  002e734  lfs 2, 136(1)
  002e738  fadds 1, 2, 1
  002e73c  stfs 1, 136(30)
  002e740  lfs 1, 140(1)
  002e744  b 0x2e834
  002e748  addic 3, 30, 280
  002e74c  bl 0x4fffb4
  002e750  nop
  002e754  lhz 3, 280(30)
  002e758  extsh 3, 3
  002e75c  cmpwi 3, 0
  002e760  bf 0, 0x2e76c
  002e764  li 3, 0
  002e768  sth 3, 280(30)
  002e76c  lis 3, 114
  002e770  lis 4, 3
  002e774  lwz 3, -11008(3)
  002e778  extsw 3, 3
  002e77c  std 3, 176(1)
  002e780  addi 3, 4, -7292
  002e784  lis 4, 114
  002e788  lfs 1, 4(3)
  002e78c  lfs 2, -3056(4)
  002e790  lfd 3, 176(1)
  002e794  fcfid 3, 3
  002e798  frsp 3, 3
  002e79c  fadds 1, 3, 1
  002e7a0  fmuls 1, 2, 1
  002e7a4  fctiwz 1, 1
  002e7a8  stfd 1, 176(1)
  002e7ac  lwz 3, 180(1)
  002e7b0  extsw 3, 3
  002e7b4  bl 0x502730
  002e7b8  nop
  002e7bc  lhz 3, 280(30)
  002e7c0  extsh 3, 3
  002e7c4  extsw 3, 3
  002e7c8  std 3, 176(1)
  002e7cc  lfs 2, 160(30)
  002e7d0  lfs 3, 64(30)
  002e7d4  lfs 4, 164(30)
  002e7d8  lfd 5, 176(1)
  002e7dc  fcfid 5, 5
  002e7e0  fsubs 2, 2, 3
  002e7e4  frsp 5, 5
  002e7e8  fdivs 1, 5, 1
  002e7ec  lfs 5, 68(30)
  002e7f0  lfs 6, 128(1)
  002e7f4  lfs 7, 168(30)
  002e7f8  lfs 8, 72(30)
  002e7fc  fsubs 4, 4, 5
  002e800  fsubs 7, 7, 8
  002e804  fmadds 2, 1, 2, 3
  002e808  fmadds 3, 1, 4, 5
  002e80c  fmadds 1, 1, 7, 8
  002e810  fadds 2, 6, 2
  002e814  stfs 2, 128(30)
  002e818  lfs 2, 132(1)
  002e81c  fadds 2, 2, 3
  002e820  stfs 2, 132(30)
  002e824  lfs 2, 136(1)
  002e828  fadds 1, 2, 1
  002e82c  stfs 1, 136(30)
  002e830  lfs 1, 140(1)
  002e834  ori 3, 31, 0
  002e838  stfs 1, 140(30)
  002e83c  addic 4, 1, 128
  002e840  bl 0x2e1c8
  002e844  lbz 31, 8356(28)
  002e848  cmpwi 31, 2
  002e84c  bf 2, 0x2e888
  002e850  lis 3, 3
  002e854  lfs 1, 432(29)
  002e858  addi 3, 3, -7292
  002e85c  lfs 3, 8(3)
  002e860  fmuls 1, 1, 3
  002e864  stfs 1, 128(1)
  002e868  lfs 2, 436(29)
  002e86c  fmuls 2, 2, 3
  002e870  stfs 2, 132(1)
  002e874  lfs 4, 440(29)
  002e878  fmuls 3, 4, 3
  002e87c  stfs 3, 136(1)
  002e880  lfs 4, 444(29)
  002e884  b 0x2e8fc
  002e888  cmpwi 31, 1
  002e88c  bf 2, 0x2e8c8
  002e890  lis 3, 3
  002e894  lfs 1, 432(29)
  002e898  addi 3, 3, -7292
  002e89c  lfs 3, 12(3)
  002e8a0  fmuls 1, 1, 3
  002e8a4  stfs 1, 128(1)
  002e8a8  lfs 2, 436(29)
  002e8ac  fmuls 2, 2, 3
  002e8b0  stfs 2, 132(1)
  002e8b4  lfs 4, 440(29)
  002e8b8  fmuls 3, 4, 3
  002e8bc  stfs 3, 136(1)
  002e8c0  lfs 4, 444(29)
  002e8c4  b 0x2e8fc
  002e8c8  lis 3, 3
  002e8cc  lfs 1, 432(29)
  002e8d0  addi 3, 3, -7292
  002e8d4  lfs 3, 4(3)
  002e8d8  fmuls 1, 1, 3
  002e8dc  stfs 1, 128(1)
  002e8e0  lfs 2, 436(29)
  002e8e4  fmuls 2, 2, 3
  002e8e8  stfs 2, 132(1)
  002e8ec  lfs 4, 440(29)
  002e8f0  fmuls 3, 4, 3
  002e8f4  stfs 3, 136(1)
  002e8f8  lfs 4, 444(29)
  002e8fc  fadds 1, 31, 1
  002e900  stfs 4, 140(1)
  002e904  fadds 2, 30, 2
  002e908  stfs 28, 156(1)
  002e90c  fadds 3, 29, 3
  002e910  lis 3, 3
  002e914  lis 4, 114
  002e918  addi 3, 3, -7292
  002e91c  lis 31, 149
  002e920  li 7, 0
  002e924  stfs 1, 144(1)
  002e928  stfs 2, 148(1)
  002e92c  stfs 3, 152(1)
  002e930  lfs 1, 352(30)
  002e934  lfs 2, 432(29)
  002e938  fmuls 2, 2, 1
  002e93c  stfs 2, 128(1)
  002e940  lfs 3, 436(29)
  002e944  fmuls 3, 3, 1
  002e948  stfs 3, 132(1)
  002e94c  lfs 3, 440(29)
  002e950  fmuls 1, 3, 1
  002e954  stfs 1, 136(1)
  002e958  lfs 1, 444(29)
  002e95c  stfs 1, 140(1)
  002e960  lfs 1, 64(30)
  002e964  fadds 1, 2, 1
  002e968  lfs 2, 68(30)
  002e96c  lfs 3, 72(30)
  002e970  stfs 1, 144(30)
  002e974  lfs 1, 132(1)
  002e978  fadds 1, 1, 2
  002e97c  stfs 1, 148(30)
  002e980  lfs 1, 136(1)
  002e984  fadds 1, 1, 3
  002e988  stfs 1, 152(30)
  002e98c  lfs 1, 140(1)
  002e990  stfs 1, 156(30)
  002e994  lfs 30, 20(3)
  002e998  lwz 5, 384(29)
  002e99c  lfs 1, 432(29)
  002e9a0  lfs 2, 16(3)
  002e9a4  fmuls 1, 1, 30
  002e9a8  lwz 3, 112(5)
  002e9ac  lfs 3, 532(3)
  002e9b0  lfs 4, 524(3)
  002e9b4  lfs 5, 528(3)
  002e9b8  fmuls 31, 3, 4
  002e9bc  lfs 3, 144(1)
  002e9c0  fsubs 2, 5, 2
  002e9c4  lfs 4, 148(1)
  002e9c8  lfs 5, 152(1)
  002e9cc  lfs 6, -11080(4)
  002e9d0  stfs 1, 160(1)
  002e9d4  lfs 7, 436(29)
  002e9d8  fadds 1, 3, 1
  002e9dc  addic 3, 1, 144
  002e9e0  fmuls 7, 7, 30
  002e9e4  addic 4, 1, 160
  002e9e8  fmadds 31, 31, 2, 6
  002e9ec  lfs 2, 156(1)
  002e9f0  lwz 5, 16516(31)
  002e9f4  lwz 6, 8320(28)
  002e9f8  extsw 5, 5
  002e9fc  fadds 3, 4, 7
  002ea00  stfs 7, 164(1)
  002ea04  lfs 4, 440(29)
  002ea08  stfs 1, 160(1)
  002ea0c  fmadds 4, 4, 30, 5
  002ea10  stfs 2, 172(1)
  002ea14  stfs 3, 164(1)
  002ea18  stfs 4, 168(1)
  002ea1c  bl 0x57820
  002ea20  nop
  002ea24  lfs 1, 432(29)
  002ea28  cmpwi 3, 0
  002ea2c  lfs 2, 144(1)
  002ea30  lfs 3, 148(1)
  002ea34  lfs 4, 152(1)
  002ea38  lfs 5, 156(1)
  002ea3c  lwz 3, 16516(31)
  002ea40  bt 2, 0x2ea60
  002ea44  lis 4, 161
  002ea48  addic 4, 4, 2368
  002ea4c  lfs 29, 32(4)
  002ea50  lfs 28, 36(4)
  002ea54  lfs 27, 40(4)
  002ea58  lfs 26, 44(4)
  002ea5c  b 0x2ea70
  002ea60  lfs 29, 160(1)
  002ea64  lfs 28, 164(1)
  002ea68  lfs 27, 168(1)
  002ea6c  lfs 26, 172(1)
  002ea70  fmuls 1, 1, 30
  002ea74  lwz 6, 8320(28)
  002ea78  extsw 5, 3
  002ea7c  addic 3, 1, 144
  002ea80  addic 4, 1, 160
  002ea84  li 7, 0
  002ea88  stfs 1, 160(1)
  002ea8c  lfs 6, 436(29)
  002ea90  fsubs 1, 2, 1
  002ea94  fmuls 6, 6, 30
  002ea98  fsubs 2, 3, 6
  002ea9c  stfs 6, 164(1)
  002eaa0  lfs 3, 440(29)
  002eaa4  stfs 1, 160(1)
  002eaa8  fnmsubs 3, 3, 30, 4
  002eaac  stfs 5, 172(1)
  002eab0  stfs 2, 164(1)
  002eab4  stfs 3, 168(1)
  002eab8  bl 0x57820
  002eabc  nop
  002eac0  lfs 30, 160(1)
  002eac4  cmpwi 3, 0
  002eac8  lfs 1, 164(1)
  002eacc  lfs 2, 168(1)
  002ead0  bt 2, 0x2eafc
  002ead4  lis 3, 161
  002ead8  addic 3, 3, 2368
  002eadc  lfs 30, 32(3)
  002eae0  lfs 1, 36(3)
  002eae4  stfs 30, 160(1)
  002eae8  lfs 2, 40(3)
  002eaec  stfs 1, 164(1)
  002eaf0  lfs 4, 44(3)
  002eaf4  stfs 2, 168(1)
  002eaf8  stfs 4, 172(1)
  002eafc  fsubs 3, 1, 28
  002eb00  fsubs 4, 30, 29
  002eb04  fsubs 5, 2, 27
  002eb08  lis 3, 3
  002eb0c  addi 3, 3, -7292
  002eb10  fmuls 3, 3, 3
  002eb14  fmadds 3, 4, 4, 3
  002eb18  lfs 4, 24(3)
  002eb1c  fmuls 4, 31, 4
  002eb20  fmadds 3, 5, 5, 3
  002eb24  fsqrts 3, 3
  002eb28  fcmpu 0, 3, 4
  002eb2c  cror 6, 1, 2
  002eb30  bt 6, 0x2ebc8
  002eb34  fadds 1, 28, 1
  002eb38  lis 3, 3
  002eb3c  fadds 3, 29, 30
  002eb40  addi 3, 3, -7292
  002eb44  fadds 2, 27, 2
  002eb48  lfs 4, 4(3)
  002eb4c  lfs 5, 68(30)
  002eb50  stfs 26, 156(30)
  002eb54  fmuls 1, 1, 4
  002eb58  lfs 6, 64(30)
  002eb5c  fmuls 3, 3, 4
  002eb60  lfs 7, 72(30)
  002eb64  fmuls 2, 2, 4
  002eb68  fsubs 4, 1, 5
  002eb6c  fsubs 5, 3, 6
  002eb70  stfs 1, 148(30)
  002eb74  stfs 3, 144(30)
  002eb78  fsubs 29, 2, 7
  002eb7c  stfs 2, 152(30)
  002eb80  lfs 1, 436(29)
  002eb84  lfs 3, 432(29)
  002eb88  lwz 30, 384(29)
  002eb8c  lfs 2, 440(29)
  002eb90  fmuls 1, 4, 1
  002eb94  lhz 3, 134(30)
  002eb98  cmpwi 3, 0
  002eb9c  fmadds 1, 5, 3, 1
  002eba0  fmadds 29, 29, 2, 1
  002eba4  bf 2, 0x2ed24
  002eba8  lwz 5, 112(30)
  002ebac  li 3, 1
  002ebb0  lis 4, 15172
  002ebb4  ori 4, 4, 39846
  002ebb8  sth 3, 366(5)
  002ebbc  stfs 29, 380(5)
  002ebc0  stw 4, 388(5)
  002ebc4  b 0x2ed24
  002ebc8  lfs 5, 68(30)
  002ebcc  lfs 4, 64(30)
  002ebd0  fsubs 3, 28, 5
  002ebd4  fsubs 7, 29, 4
  002ebd8  lfs 6, 72(30)
  002ebdc  fsubs 8, 27, 6
  002ebe0  fmuls 3, 3, 3
  002ebe4  fmadds 3, 7, 7, 3
  002ebe8  fmadds 3, 8, 8, 3
  002ebec  fsqrts 7, 3
  002ebf0  lfs 3, 352(30)
  002ebf4  fadds 8, 31, 3
  002ebf8  fcmpu 0, 7, 8
  002ebfc  bt 1, 0x2ec70
  002ec00  lfs 1, 436(29)
  002ec04  lfs 2, 432(29)
  002ec08  fnmsubs 3, 1, 31, 28
  002ec0c  fnmsubs 7, 2, 31, 29
  002ec10  lfs 8, 440(29)
  002ec14  stfs 26, 156(30)
  002ec18  fnmsubs 9, 8, 31, 27
  002ec1c  fsubs 5, 3, 5
  002ec20  fsubs 4, 7, 4
  002ec24  stfs 3, 148(30)
  002ec28  stfs 7, 144(30)
  002ec2c  fsubs 31, 9, 6
  002ec30  stfs 9, 152(30)
  002ec34  lwz 30, 384(29)
  002ec38  fmuls 1, 5, 1
  002ec3c  lhz 3, 134(30)
  002ec40  cmpwi 3, 0
  002ec44  fmadds 1, 4, 2, 1
  002ec48  fmadds 31, 31, 8, 1
  002ec4c  bf 2, 0x2ed24
  002ec50  lwz 5, 112(30)
  002ec54  li 3, 1
  002ec58  lis 4, 15172
  002ec5c  ori 4, 4, 39846
  002ec60  sth 3, 366(5)
  002ec64  stfs 31, 380(5)
  002ec68  stw 4, 388(5)
  002ec6c  b 0x2ed24
  002ec70  fmr 7, 1
  002ec74  lfs 8, 452(29)
  002ec78  fmr 1, 30
  002ec7c  lfs 9, 448(29)
  002ec80  fmuls 5, 5, 8
  002ec84  fmuls 7, 7, 8
  002ec88  lfs 8, 456(29)
  002ec8c  fmadds 5, 4, 9, 5
  002ec90  fmadds 7, 1, 9, 7
  002ec94  fmadds 5, 6, 8, 5
  002ec98  fmadds 2, 2, 8, 7
  002ec9c  fcmpu 0, 2, 5
  002eca0  cror 6, 1, 2
  002eca4  bt 6, 0x2ecc8
  002eca8  stfs 4, 160(1)
  002ecac  lfs 2, 68(30)
  002ecb0  fmr 1, 4
  002ecb4  stfs 2, 164(1)
  002ecb8  lfs 2, 72(30)
  002ecbc  stfs 2, 168(1)
  002ecc0  lfs 2, 76(30)
  002ecc4  stfs 2, 172(1)
  002ecc8  lfs 2, 432(29)
  002eccc  fmuls 2, 2, 3
  002ecd0  fadds 1, 2, 1
  002ecd4  stfs 2, 128(1)
  002ecd8  lfs 4, 436(29)
  002ecdc  fmuls 4, 4, 3
  002ece0  stfs 4, 132(1)
  002ece4  lfs 2, 440(29)
  002ece8  fmuls 2, 2, 3
  002ecec  stfs 2, 136(1)
  002ecf0  lfs 2, 444(29)
  002ecf4  stfs 2, 140(1)
  002ecf8  stfs 1, 144(30)
  002ecfc  lfs 1, 164(1)
  002ed00  lfs 2, 132(1)
  002ed04  fadds 1, 2, 1
  002ed08  stfs 1, 148(30)
  002ed0c  lfs 1, 136(1)
  002ed10  lfs 2, 168(1)
  002ed14  fadds 1, 1, 2
  002ed18  stfs 1, 152(30)
  002ed1c  lfs 1, 140(1)
  002ed20  stfs 1, 156(30)
  002ed24  ld 0, 352(1)
  002ed28  mtlr 0
  002ed2c  lfd 20, 240(1)
  002ed30  lfd 21, 248(1)
  002ed34  lfd 22, 256(1)
  002ed38  lfd 23, 264(1)
  002ed3c  lfd 24, 272(1)
  002ed40  lfd 25, 280(1)
  002ed44  lfd 26, 288(1)
  002ed48  lfd 27, 296(1)
  002ed4c  lfd 28, 304(1)
  002ed50  lfd 29, 312(1)
  002ed54  lfd 30, 320(1)
  002ed58  lfd 31, 328(1)
  002ed5c  ld 27, 200(1)
  002ed60  ld 28, 208(1)
  002ed64  ld 29, 216(1)
  002ed68  ld 30, 224(1)
  002ed6c  ld 31, 232(1)
  002ed70  addi 1, 1, 336
  002ed74  blr

STUB_0002ed78:   # 0x2ed78, 0x8 bytes
  002ed78  li 3, 0
  002ed7c  blr

STUB_0002ed80:   # 0x2ed80, 0x4 bytes
  002ed80  blr

STUB_0002ed84:   # 0x2ed84, 0x4 bytes
  002ed84  blr

STUB_0002ed88:   # 0x2ed88, 0x4 bytes
  002ed88  blr

STUB_0002ed8c:   # 0x2ed8c, 0x4 bytes
  002ed8c  blr

STUB_0002ed90:   # 0x2ed90, 0x4 bytes
  002ed90  blr

STUB_0002ed94:   # 0x2ed94, 0x4 bytes
  002ed94  blr

STUB_0002ed98:   # 0x2ed98, 0x4 bytes
  002ed98  blr

STUB_0002ed9c:   # 0x2ed9c, 0x4 bytes
  002ed9c  blr

UpdateCameraOffset_0:   # 0x2eda8, 0x24c bytes
  002eda8  stdu 1, -144(1)
  002edac  mflr 0
  002edb0  std 0, 160(1)
  002edb4  stfd 31, 136(1)
  002edb8  std 31, 128(1)
  002edbc  ori 31, 3, 0
  002edc0  lis 4, 114
  002edc4  lis 3, 3
  002edc8  li 6, 0
  002edcc  addi 5, 3, -4704
  002edd0  lwz 7, 112(31)
  002edd4  std 29, 112(1)
  002edd8  lis 3, 149
  002eddc  lwz 29, 112(31)
  002ede0  std 30, 120(1)
  002ede4  lfs 1, -5548(4)
  002ede8  addic 30, 3, 6592
  002edec  addic 3, 29, 372
  002edf0  stfs 1, 444(7)
  002edf4  lfs 31, 0(5)
  002edf8  stw 6, 452(7)
  002edfc  stw 6, 456(7)
  002ee00  stw 6, 440(7)
  002ee04  stw 6, 460(7)
  002ee08  lhz 4, 364(29)
  002ee0c  lwz 30, 112(30)
  002ee10  cmpwi 4, 0
  002ee14  bt 2, 0x2ee40
  002ee18  lis 4, 114
  002ee1c  lfs 1, 348(29)
  002ee20  lfs 2, 368(29)
  002ee24  fmr 5, 31
  002ee28  lfs 3, 376(29)
  002ee2c  ori 5, 3, 0
  002ee30  lfs 4, -11036(4)
  002ee34  bl 0x501e8
  002ee38  nop
  002ee3c  b 0x2ee64
  002ee40  lis 4, 114
  002ee44  lfs 1, 348(29)
  002ee48  lfs 2, 348(30)
  002ee4c  fmr 5, 31
  002ee50  lfs 3, 376(29)
  002ee54  ori 5, 3, 0
  002ee58  lfs 4, -11036(4)
  002ee5c  bl 0x501e8
  002ee60  nop
  002ee64  lhz 4, 366(29)
  002ee68  addic 3, 29, 384
  002ee6c  stfs 1, 348(29)
  002ee70  cmpwi 4, 0
  002ee74  bt 2, 0x2eea0
  002ee78  lis 4, 114
  002ee7c  lfs 1, 352(29)
  002ee80  lfs 2, 380(29)
  002ee84  fmr 5, 31
  002ee88  lfs 3, 388(29)
  002ee8c  ori 5, 3, 0
  002ee90  lfs 4, -11032(4)
  002ee94  bl 0x501e8
  002ee98  nop
  002ee9c  b 0x2eec4
  002eea0  lis 4, 114
  002eea4  lfs 1, 352(29)
  002eea8  lfs 2, 352(30)
  002eeac  fmr 5, 31
  002eeb0  lfs 3, 388(29)
  002eeb4  ori 5, 3, 0
  002eeb8  lfs 4, -11032(4)
  002eebc  bl 0x501e8
  002eec0  nop
  002eec4  lis 4, 3
  002eec8  stfs 1, 352(29)
  002eecc  addic 3, 29, 252
  002eed0  addi 4, 4, -4704
  002eed4  lhz 5, 282(29)
  002eed8  cmpwi 5, 0
  002eedc  lfs 1, 4(4)
  002eee0  bt 2, 0x2ef08
  002eee4  fmr 4, 1
  002eee8  lfs 1, 240(29)
  002eeec  ori 5, 3, 0
  002eef0  lfs 2, 244(29)
  002eef4  fmr 5, 31
  002eef8  lfs 3, 248(29)
  002eefc  bl 0x501e8
  002ef00  nop
  002ef04  b 0x2ef28
  002ef08  fmr 4, 1
  002ef0c  ori 5, 3, 0
  002ef10  lfs 1, 240(29)
  002ef14  fmr 5, 31
  002ef18  lfs 2, 240(30)
  002ef1c  lfs 3, 248(29)
  002ef20  bl 0x501e8
  002ef24  nop
  002ef28  li 3, 0
  002ef2c  stfs 1, 240(29)
  002ef30  li 4, 1
  002ef34  lis 5, 114
  002ef38  lis 7, 15948
  002ef3c  sth 3, 364(29)
  002ef40  sth 3, 366(29)
  002ef44  lis 8, 114
  002ef48  lfs 1, 348(30)
  002ef4c  lis 9, 149
  002ef50  stw 3, 368(29)
  002ef54  lwz 6, 112(31)
  002ef58  stw 3, 380(29)
  002ef5c  stfs 1, 392(29)
  002ef60  sth 3, 282(29)
  002ef64  stw 3, 244(29)
  002ef68  sth 4, 16(6)
  002ef6c  lwz 6, 112(31)
  002ef70  ori 4, 7, 52429
  002ef74  lis 7, 114
  002ef78  sth 3, 34(6)
  002ef7c  lfs 1, -11136(5)
  002ef80  stw 4, 288(29)
  002ef84  stfs 1, 284(29)
  002ef88  lfs 1, -11136(5)
  002ef8c  stb 3, 278(29)
  002ef90  stfs 1, 292(29)
  002ef94  lis 5, 114
  002ef98  lwz 6, 112(31)
  002ef9c  stw 4, 296(29)
  002efa0  lfs 1, -11076(7)
  002efa4  lis 4, 114
  002efa8  stfs 1, 532(6)
  002efac  lfs 1, -11068(8)
  002efb0  stfs 1, 524(6)
  002efb4  lfs 1, -11072(5)
  002efb8  stfs 1, 528(6)
  002efbc  lwz 5, 16524(9)
  002efc0  stw 5, 536(6)
  002efc4  lwz 5, 112(31)
  002efc8  sth 3, 550(5)
  002efcc  lfs 1, -11012(4)
  002efd0  stfs 1, 556(5)
  002efd4  ld 0, 160(1)
  002efd8  mtlr 0
  002efdc  lfd 31, 136(1)
  002efe0  ld 29, 112(1)
  002efe4  ld 30, 120(1)
  002efe8  ld 31, 128(1)
  002efec  addi 1, 1, 144
  002eff0  blr

Cam0_SetCPosGainDamp:   # 0x2eff8, 0x44 bytes
  002eff8  lis 3, 149
  002effc  addic 3, 3, 5056
  002f000  lwz 3, 384(3)
  002f004  lhz 4, 134(3)
  002f008  cmpwi 4, 0
  002f00c  bf 2, 0x2f038
  002f010  lis 4, 3
  002f014  addi 4, 4, -4108
  002f018  lfs 3, 0(4)
  002f01c  lwz 3, 112(3)
  002f020  fcmpu 0, 1, 3
  002f024  fcmpu 1, 2, 3
  002f028  bt 2, 0x2f030
  002f02c  stfs 1, 284(3)
  002f030  bt 6, 0x2f038
  002f034  stfs 2, 288(3)
  002f038  blr

Cam0_disableLOS:   # 0x2f03c, 0x28 bytes
  002f03c  lis 3, 149
  002f040  addic 3, 3, 5056
  002f044  lwz 3, 384(3)
  002f048  lhz 4, 134(3)
  002f04c  cmpwi 4, 0
  002f050  bf 2, 0x2f060
  002f054  lwz 3, 112(3)
  002f058  li 4, 1
  002f05c  stb 4, 278(3)
  002f060  blr

Cam0_SetCamPull:   # 0x2f064, 0x24 bytes
  002f064  lis 4, 149
  002f068  addic 4, 4, 5056
  002f06c  lwz 4, 384(4)
  002f070  lhz 5, 134(4)
  002f074  cmpwi 5, 0
  002f078  bf 2, 0x2f084
  002f07c  lwz 4, 112(4)
  002f080  sth 3, 16(4)
  002f084  blr

AzmLookAtDir:   # 0x2f0a0, 0x21c bytes
  002f0a0  stdu 1, -176(1)
  002f0a4  mflr 0
  002f0a8  std 0, 192(1)
  002f0ac  stfd 26, 128(1)
  002f0b0  stfd 27, 136(1)
  002f0b4  stfd 28, 144(1)
  002f0b8  stfd 29, 152(1)
  002f0bc  stfd 30, 160(1)
  002f0c0  stfd 31, 168(1)
  002f0c4  lis 5, 149
  002f0c8  lfs 8, 4(4)
  002f0cc  fmr 31, 1
  002f0d0  addic 5, 5, 5056
  002f0d4  lfs 2, 436(5)
  002f0d8  lfs 9, 0(4)
  002f0dc  fmuls 4, 8, 2
  002f0e0  lfs 3, 432(5)
  002f0e4  lfs 7, 8(4)
  002f0e8  std 31, 120(1)
  002f0ec  lfs 1, 440(5)
  002f0f0  lwz 31, 112(3)
  002f0f4  lis 3, 3
  002f0f8  fmadds 4, 9, 3, 4
  002f0fc  lfs 5, 308(31)
  002f100  lfs 6, 304(31)
  002f104  fmuls 10, 5, 2
  002f108  lfs 11, 312(31)
  002f10c  addi 3, 3, -3960
  002f110  fmadds 4, 7, 1, 4
  002f114  fmadds 10, 6, 3, 10
  002f118  lfs 30, 0(3)
  002f11c  fnmsubs 8, 2, 4, 8
  002f120  fnmsubs 9, 3, 4, 9
  002f124  fnmsubs 7, 1, 4, 7
  002f128  fmadds 12, 11, 1, 10
  002f12c  fmuls 4, 8, 8
  002f130  fnmsubs 5, 2, 12, 5
  002f134  fnmsubs 6, 3, 12, 6
  002f138  fmadds 4, 9, 9, 4
  002f13c  fmadds 4, 7, 7, 4
  002f140  fsqrts 10, 4
  002f144  fnmsubs 4, 1, 12, 11
  002f148  fmuls 11, 8, 5
  002f14c  fmadds 26, 9, 6, 11
  002f150  fmadds 26, 7, 4, 26
  002f154  fcmpu 0, 10, 30
  002f158  bf 2, 0x2f164
  002f15c  fmr 1, 30
  002f160  b 0x2f290
  002f164  fmuls 11, 5, 5
  002f168  fmadds 11, 6, 6, 11
  002f16c  fmadds 11, 4, 4, 11
  002f170  fsqrts 11, 11
  002f174  fmuls 10, 10, 11
  002f178  fcmpu 0, 10, 30
  002f17c  bf 2, 0x2f188
  002f180  fmr 1, 30
  002f184  b 0x2f290
  002f188  fdivs 10, 26, 10
  002f18c  lis 3, 3
  002f190  addi 3, 3, -3960
  002f194  lis 4, 115
  002f198  lfs 27, 4(3)
  002f19c  addic 5, 4, 22720
  002f1a0  lfs 28, 8(3)
  002f1a4  lfs 13, 22720(4)
  002f1a8  fmuls 11, 3, 7
  002f1ac  fmuls 12, 1, 8
  002f1b0  fmuls 26, 2, 9
  002f1b4  lfs 0, 4(5)
  002f1b8  lfs 29, 8(5)
  002f1bc  fmsubs 1, 1, 9, 11
  002f1c0  fmsubs 2, 2, 7, 12
  002f1c4  fmsubs 3, 3, 8, 26
  002f1c8  lfs 9, 12(5)
  002f1cc  lfs 7, 12(3)
  002f1d0  fmuls 5, 1, 5
  002f1d4  lfs 1, 16(3)
  002f1d8  fmadds 2, 2, 6, 5
  002f1dc  fmadds 2, 3, 4, 2
  002f1e0  fabs 5, 10
  002f1e4  fsub 6, 10, 30
  002f1e8  fsel 5, 6, 10, 5
  002f1ec  fsub 10, 10, 30
  002f1f0  fsubs 6, 27, 5
  002f1f4  fmuls 8, 5, 5
  002f1f8  fmadds 12, 5, 0, 13
  002f1fc  fsel 3, 10, 27, 28
  002f200  fsub 11, 6, 30
  002f204  fmuls 5, 8, 5
  002f208  fmadds 8, 8, 29, 12
  002f20c  fsub 29, 2, 30
  002f210  fsel 6, 11, 6, 30
  002f214  fmadds 5, 5, 9, 8
  002f218  fsel 29, 29, 27, 28
  002f21c  fsqrts 6, 6
  002f220  fnmsubs 2, 5, 6, 7
  002f224  fnmsubs 2, 2, 3, 7
  002f228  bl 0x5025e0
  002f22c  nop
  002f230  fcmpu 0, 31, 30
  002f234  fmr 26, 1
  002f238  bt 2, 0x2f254
  002f23c  fabs 1, 26
  002f240  fcmpu 0, 1, 31
  002f244  cror 6, 0, 2
  002f248  bt 6, 0x2f254
  002f24c  fmr 1, 26
  002f250  b 0x2f290
  002f254  lis 3, 3
  002f258  fmr 1, 28
  002f25c  addi 3, 3, -3960
  002f260  fmr 2, 30
  002f264  fmr 3, 27
  002f268  fmr 4, 30
  002f26c  lfs 5, 20(3)
  002f270  fmuls 5, 26, 5
  002f274  fsub 6, 27, 5
  002f278  fsel 5, 6, 5, 27
  002f27c  bl 0xfec94
  002f280  nop
  002f284  fmuls 2, 29, 1
  002f288  fmr 1, 26
  002f28c  stfs 2, 452(31)
  002f290  ld 0, 192(1)
  002f294  mtlr 0
  002f298  lfd 26, 128(1)
  002f29c  lfd 27, 136(1)
  002f2a0  lfd 28, 144(1)
  002f2a4  lfd 29, 152(1)
  002f2a8  lfd 30, 160(1)
  002f2ac  lfd 31, 168(1)
  002f2b0  ld 31, 120(1)
  002f2b4  addi 1, 1, 176
  002f2b8  blr

AzmLookAtPos:   # 0x2f2bc, 0x60 bytes
  002f2bc  stdu 1, -128(1)
  002f2c0  mflr 0
  002f2c4  std 0, 144(1)
  002f2c8  lwz 5, 112(3)
  002f2cc  lfs 2, 0(4)
  002f2d0  lfs 3, 4(4)
  002f2d4  lfs 4, 64(5)
  002f2d8  fsubs 2, 2, 4
  002f2dc  lfs 4, 8(4)
  002f2e0  lfs 5, 12(4)
  002f2e4  addic 4, 1, 112
  002f2e8  stfs 2, 112(1)
  002f2ec  lfs 2, 68(5)
  002f2f0  fsubs 2, 3, 2
  002f2f4  stfs 2, 116(1)
  002f2f8  lfs 2, 72(5)
  002f2fc  stfs 5, 124(1)
  002f300  fsubs 2, 4, 2
  002f304  stfs 2, 120(1)
  002f308  bl 0x2f0a0
  002f30c  ld 0, 144(1)
  002f310  mtlr 0
  002f314  addi 1, 1, 128
  002f318  blr

Cam0_ForceLookAtPos:   # 0x2f31c, 0x94 bytes
  002f31c  stdu 1, -128(1)
  002f320  mflr 0
  002f324  std 0, 144(1)
  002f328  lis 4, 149
  002f32c  fmr 3, 2
  002f330  addic 4, 4, 5056
  002f334  fmr 2, 1
  002f338  lwz 4, 384(4)
  002f33c  fmr 1, 3
  002f340  lhz 5, 134(4)
  002f344  cmpwi 5, 0
  002f348  bf 2, 0x2f3a0
  002f34c  lwz 5, 112(4)
  002f350  addic 6, 1, 112
  002f354  stfs 2, 444(5)
  002f358  lwz 5, 112(4)
  002f35c  lfs 2, 0(3)
  002f360  lfs 3, 4(3)
  002f364  lfs 4, 64(5)
  002f368  fsubs 2, 2, 4
  002f36c  lfs 4, 8(3)
  002f370  lfs 5, 12(3)
  002f374  ori 3, 4, 0
  002f378  ori 4, 6, 0
  002f37c  stfs 2, 112(1)
  002f380  lfs 2, 68(5)
  002f384  fsubs 2, 3, 2
  002f388  stfs 2, 116(1)
  002f38c  lfs 2, 72(5)
  002f390  stfs 5, 124(1)
  002f394  fsubs 2, 4, 2
  002f398  stfs 2, 120(1)
  002f39c  bl 0x2f0a0
  002f3a0  ld 0, 144(1)
  002f3a4  mtlr 0
  002f3a8  addi 1, 1, 128
  002f3ac  blr

Cam0_RunningAtCamOff:   # 0x2f3b0, 0x28 bytes
  002f3b0  lis 3, 149
  002f3b4  addic 3, 3, 5056
  002f3b8  lwz 3, 384(3)
  002f3bc  lhz 4, 134(3)
  002f3c0  cmpwi 4, 0
  002f3c4  bf 2, 0x2f3d4
  002f3c8  lwz 3, 112(3)
  002f3cc  li 4, 1
  002f3d0  sth 4, 550(3)
  002f3d4  blr

Cam0_SetCamDist:   # 0x2f3d8, 0x3c bytes
  002f3d8  lis 3, 149
  002f3dc  cmpwi 1, 4, 0
  002f3e0  addic 3, 3, 5056
  002f3e4  lwz 3, 384(3)
  002f3e8  lhz 4, 134(3)
  002f3ec  cmpwi 4, 0
  002f3f0  bf 2, 0x2f410
  002f3f4  lwz 3, 112(3)
  002f3f8  li 4, 1
  002f3fc  sth 4, 364(3)
  002f400  stfs 1, 368(3)
  002f404  stfs 2, 376(3)
  002f408  bt 6, 0x2f410
  002f40c  stfs 1, 392(3)
  002f410  blr

Cam0_SetCamOfsZ:   # 0x2f414, 0x54 bytes
  002f414  lis 3, 149
  002f418  cmpwi 1, 4, 0
  002f41c  addic 3, 3, 5056
  002f420  lwz 3, 384(3)
  002f424  lhz 4, 134(3)
  002f428  cmpwi 4, 0
  002f42c  bf 2, 0x2f464
  002f430  fmr 3, 2
  002f434  lwz 3, 112(3)
  002f438  li 4, 1
  002f43c  fmr 2, 1
  002f440  sth 4, 282(3)
  002f444  stfs 3, 248(3)
  002f448  bt 6, 0x2f460
  002f44c  lis 4, 149
  002f450  addic 4, 4, 6592
  002f454  lwz 4, 112(4)
  002f458  lfs 2, 240(4)
  002f45c  fadds 2, 2, 1
  002f460  stfs 2, 244(3)
  002f464  blr

Cam0_ForceLookAtDir:   # 0x2f470, 0x6c bytes
  002f470  stdu 1, -112(1)
  002f474  mflr 0
  002f478  std 0, 128(1)
  002f47c  lis 4, 149
  002f480  fmr 3, 2
  002f484  addic 4, 4, 5056
  002f488  fmr 2, 1
  002f48c  lwz 4, 384(4)
  002f490  fmr 1, 3
  002f494  lhz 5, 134(4)
  002f498  cmpwi 5, 0
  002f49c  bf 2, 0x2f4cc
  002f4a0  lis 5, 3
  002f4a4  addi 5, 5, -2968
  002f4a8  lfs 3, 0(5)
  002f4ac  fcmpu 0, 2, 3
  002f4b0  bt 2, 0x2f4cc
  002f4b4  ori 5, 4, 0
  002f4b8  ori 4, 3, 0
  002f4bc  ori 3, 5, 0
  002f4c0  lwz 5, 112(5)
  002f4c4  stfs 2, 444(5)
  002f4c8  bl 0x2f0a0
  002f4cc  ld 0, 128(1)
  002f4d0  mtlr 0
  002f4d4  addi 1, 1, 112
  002f4d8  blr

???_Cam0_UpdateTargetSpecial:   # 0x2f530, 0xaa0 bytes
  002f530  stdu 1, -272(1)
  002f534  mflr 0
  002f538  std 0, 288(1)
  002f53c  stfd 27, 232(1)
  002f540  stfd 28, 240(1)
  002f544  stfd 29, 248(1)
  002f548  stfd 30, 256(1)
  002f54c  stfd 31, 264(1)
  002f550  std 26, 184(1)
  002f554  std 31, 224(1)
  002f558  lis 26, 151
  002f55c  std 28, 200(1)
  002f560  ori 31, 3, 0
  002f564  lwz 28, 112(3)
  002f568  std 30, 216(1)
  002f56c  addic 26, 26, -25376
  002f570  std 25, 176(1)
  002f574  li 30, 0
  002f578  ori 25, 30, 0
  002f57c  lwz 3, 8836(26)
  002f580  std 29, 208(1)
  002f584  std 27, 192(1)
  002f588  std 24, 168(1)
  002f58c  cmpwi 3, 13
  002f590  bf 2, 0x2f6b4
  002f594  lwz 3, 560(28)
  002f598  cmpwi 3, 333
  002f59c  bt 2, 0x2f6b4
  002f5a0  lis 3, 3
  002f5a4  lfs 1, 1252(26)
  002f5a8  addi 27, 3, -2852
  002f5ac  lfs 2, 0(27)
  002f5b0  bl 0x502578
  002f5b4  nop
  002f5b8  lfs 2, 4(27)
  002f5bc  lfs 3, 8(27)
  002f5c0  fadds 2, 1, 2
  002f5c4  fsubs 5, 3, 1
  002f5c8  lfs 4, 12(27)
  002f5cc  fsubs 6, 4, 1
  002f5d0  lis 29, 149
  002f5d4  addic 29, 29, 5056
  002f5d8  fsubs 3, 3, 2
  002f5dc  fsub 7, 1, 5
  002f5e0  fsubs 4, 4, 2
  002f5e4  fsub 8, 2, 3
  002f5e8  fsel 1, 7, 5, 1
  002f5ec  lfs 5, 16(27)
  002f5f0  fsel 2, 8, 3, 2
  002f5f4  fsub 3, 6, 1
  002f5f8  fsub 8, 4, 2
  002f5fc  fsel 1, 3, 6, 1
  002f600  lfs 3, 20(27)
  002f604  lfs 6, 24(27)
  002f608  lfs 7, 28(27)
  002f60c  lwz 3, 384(29)
  002f610  fsel 2, 8, 4, 2
  002f614  fmuls 4, 1, 1
  002f618  fmuls 8, 2, 2
  002f61c  fmuls 9, 4, 1
  002f620  fmuls 10, 8, 2
  002f624  fmuls 11, 4, 9
  002f628  fmadds 1, 9, 5, 1
  002f62c  fmuls 9, 8, 10
  002f630  fmadds 2, 10, 5, 2
  002f634  fmuls 5, 4, 11
  002f638  fmadds 1, 11, 3, 1
  002f63c  fmuls 10, 8, 9
  002f640  fmadds 2, 9, 3, 2
  002f644  fmuls 3, 4, 5
  002f648  fmadds 1, 5, 6, 1
  002f64c  fmuls 4, 8, 10
  002f650  fmadds 2, 10, 6, 2
  002f654  fmadds 1, 3, 7, 1
  002f658  fmadds 2, 4, 7, 2
  002f65c  stfs 1, 116(1)
  002f660  lfs 1, 32(27)
  002f664  stw 30, 120(1)
  002f668  stfs 2, 112(1)
  002f66c  lhz 4, 134(3)
  002f670  cmpwi 4, 0
  002f674  bf 2, 0x2f69c
  002f678  ori 5, 3, 0
  002f67c  lis 3, 15958
  002f680  addic 4, 1, 112
  002f684  ori 6, 3, 30544
  002f688  ori 3, 5, 0
  002f68c  lwz 5, 112(5)
  002f690  stw 6, 444(5)
  002f694  bl 0x2f0a0
  002f698  lwz 3, 384(29)
  002f69c  lhz 4, 134(3)
  002f6a0  cmpwi 4, 0
  002f6a4  bf 2, 0x2f6b4
  002f6a8  lwz 3, 112(3)
  002f6ac  li 4, 1
  002f6b0  stb 4, 278(3)
  002f6b4  lwz 3, 8332(26)
  002f6b8  cmpwi 3, 17
  002f6bc  cmpwi 1, 3, 5
  002f6c0  cmpwi 6, 3, 16
  002f6c4  cmpwi 7, 3, 15
  002f6c8  bf 2, 0x2f710
  002f6cc  lis 3, 149
  002f6d0  lwz 5, 112(31)
  002f6d4  lis 4, 16000
  002f6d8  addic 3, 3, 5056
  002f6dc  stw 4, 240(5)
  002f6e0  lwz 3, 384(3)
  002f6e4  lhz 4, 134(3)
  002f6e8  cmpwi 4, 0
  002f6ec  bf 2, 0x2f710
  002f6f0  lwz 3, 112(3)
  002f6f4  li 4, 1
  002f6f8  lis 5, 15172
  002f6fc  lis 6, 16128
  002f700  ori 5, 5, 39846
  002f704  sth 4, 366(3)
  002f708  stw 6, 380(3)
  002f70c  stw 5, 388(3)
  002f710  bf 6, 0x2f7a4
  002f714  lbz 4, 8356(26)
  002f718  li 30, 1
  002f71c  lwz 3, 112(31)
  002f720  cmpwi 4, 1
  002f724  bf 2, 0x2f768
  002f728  lis 4, 149
  002f72c  lis 5, 16000
  002f730  addic 4, 4, 5056
  002f734  stw 5, 240(3)
  002f738  lwz 3, 384(4)
  002f73c  lhz 4, 134(3)
  002f740  cmpwi 4, 0
  002f744  bf 2, 0x2f7a4
  002f748  lwz 3, 112(3)
  002f74c  lis 4, 15172
  002f750  lis 5, 16320
  002f754  ori 4, 4, 39846
  002f758  sth 30, 366(3)
  002f75c  stw 5, 380(3)
  002f760  stw 4, 388(3)
  002f764  b 0x2f7a4
  002f768  lis 4, 149
  002f76c  lis 5, 16000
  002f770  addic 4, 4, 5056
  002f774  stw 5, 240(3)
  002f778  lwz 3, 384(4)
  002f77c  lhz 4, 134(3)
  002f780  cmpwi 4, 0
  002f784  bf 2, 0x2f7a4
  002f788  lwz 3, 112(3)
  002f78c  lis 4, 15172
  002f790  lis 5, 16416
  002f794  ori 4, 4, 39846
  002f798  sth 30, 366(3)
  002f79c  stw 5, 380(3)
  002f7a0  stw 4, 388(3)
  002f7a4  bf 26, 0x2f7b4
  002f7a8  lwz 4, 112(31)
  002f7ac  lis 3, 16000
  002f7b0  stw 3, 240(4)
  002f7b4  lbz 3, 8356(26)
  002f7b8  cmpwi 3, 1
  002f7bc  cmpwi 6, 3, 2
  002f7c0  bf 2, 0x2f85c
  002f7c4  lwz 3, 544(28)
  002f7c8  cmpwi 3, 0
  002f7cc  bf 2, 0x2f84c
  002f7d0  lis 3, 149
  002f7d4  cmpwi 1, 30, 0
  002f7d8  addic 4, 3, 5056
  002f7dc  lwz 3, 112(31)
  002f7e0  lwz 4, 384(4)
  002f7e4  lhz 5, 134(4)
  002f7e8  cmpwi 5, 0
  002f7ec  bf 2, 0x2f814
  002f7f0  lwz 8, 112(4)
  002f7f4  li 5, 1
  002f7f8  lis 6, 15172
  002f7fc  lis 7, 16448
  002f800  ori 6, 6, 39846
  002f804  sth 5, 364(8)
  002f808  stw 7, 368(8)
  002f80c  stw 6, 376(8)
  002f810  stw 7, 392(8)
  002f814  bf 6, 0x2f84c
  002f818  lis 5, 16256
  002f81c  stw 5, 240(3)
  002f820  lhz 3, 134(4)
  002f824  cmpwi 3, 0
  002f828  bf 2, 0x2f84c
  002f82c  lwz 4, 112(4)
  002f830  li 3, 1
  002f834  lis 5, 15172
  002f838  lis 6, 16256
  002f83c  ori 5, 5, 39846
  002f840  sth 3, 366(4)
  002f844  stw 6, 380(4)
  002f848  stw 5, 388(4)
  002f84c  lis 3, 16153
  002f850  lwz 4, 112(31)
  002f854  ori 3, 3, 39322
  002f858  stw 3, 524(4)
  002f85c  bf 26, 0x2f94c
  002f860  lwz 3, 560(28)
  002f864  cmpwi 3, 2
  002f868  bf 0, 0x2f90c
  002f86c  lis 3, 149
  002f870  lis 4, 114
  002f874  addic 3, 3, 5056
  002f878  lwz 3, 384(3)
  002f87c  lfs 1, -10900(4)
  002f880  lhz 4, 134(3)
  002f884  cmpwi 4, 0
  002f888  bf 2, 0x2f8ac
  002f88c  lis 4, 15267
  002f890  lwz 6, 112(3)
  002f894  li 5, 1
  002f898  ori 4, 4, 55050
  002f89c  sth 5, 282(6)
  002f8a0  stw 4, 248(6)
  002f8a4  stfs 1, 244(6)
  002f8a8  lhz 4, 134(3)
  002f8ac  lis 5, 114
  002f8b0  cmpwi 4, 0
  002f8b4  lfs 1, -10896(5)
  002f8b8  bf 2, 0x2f8e0
  002f8bc  lwz 6, 112(3)
  002f8c0  li 4, 1
  002f8c4  lis 5, 15172
  002f8c8  ori 5, 5, 39846
  002f8cc  sth 4, 364(6)
  002f8d0  stfs 1, 368(6)
  002f8d4  stw 5, 376(6)
  002f8d8  stfs 1, 392(6)
  002f8dc  lhz 4, 134(3)
  002f8e0  lis 5, 114
  002f8e4  cmpwi 4, 0
  002f8e8  lfs 1, -10892(5)
  002f8ec  bf 2, 0x2f90c
  002f8f0  lwz 3, 112(3)
  002f8f4  li 4, 1
  002f8f8  lis 5, 15172
  002f8fc  ori 5, 5, 39846
  002f900  sth 4, 366(3)
  002f904  stfs 1, 380(3)
  002f908  stw 5, 388(3)
  002f90c  lis 3, 149
  002f910  addic 3, 3, 5056
  002f914  lwz 3, 384(3)
  002f918  lhz 4, 134(3)
  002f91c  cmpwi 4, 0
  002f920  bf 2, 0x2f930
  002f924  lwz 3, 112(3)
  002f928  li 4, 1
  002f92c  sth 4, 550(3)
  002f930  lis 3, 114
  002f934  lwz 5, 112(31)
  002f938  lis 4, 114
  002f93c  lfs 1, -10884(3)
  002f940  stfs 1, 524(5)
  002f944  lfs 1, -10888(4)
  002f948  stfs 1, 532(5)
  002f94c  lbz 3, 8362(26)
  002f950  cmpwi 3, 0
  002f954  bt 2, 0x2f9bc
  002f958  bt 30, 0x2f9bc
  002f95c  lis 3, 149
  002f960  addic 3, 3, 5056
  002f964  lwz 3, 384(3)
  002f968  lhz 4, 134(3)
  002f96c  cmpwi 4, 0
  002f970  bf 2, 0x2f980
  002f974  lwz 4, 112(3)
  002f978  sth 25, 16(4)
  002f97c  lhz 4, 134(3)
  002f980  cmpwi 4, 0
  002f984  bf 2, 0x2f9bc
  002f988  lwz 5, 112(3)
  002f98c  li 4, 1
  002f990  stb 4, 278(5)
  002f994  lhz 4, 134(3)
  002f998  cmpwi 4, 0
  002f99c  bf 2, 0x2f9bc
  002f9a0  lis 4, 15651
  002f9a4  lwz 3, 112(3)
  002f9a8  lis 5, 15948
  002f9ac  ori 4, 4, 55050
  002f9b0  ori 5, 5, 52429
  002f9b4  stw 4, 284(3)
  002f9b8  stw 5, 288(3)
  002f9bc  lis 27, 149
  002f9c0  addic 27, 27, 5056
  002f9c4  lwz 3, 912(27)
  002f9c8  cmpwi 3, 0
  002f9cc  bt 2, 0x2f9e8
  002f9d0  lwz 4, 0(3)
  002f9d4  std 2, 40(1)
  002f9d8  mtctr 4
  002f9dc  lwz 2, 4(3)
  002f9e0  bcctrl 20, 30
  002f9e4  ld 2, 40(1)
  002f9e8  lwz 3, 604(27)
  002f9ec  cmpwi 3, 0
  002f9f0  bt 2, 0x2fb80
  002f9f4  lwz 4, 560(28)
  002f9f8  cmpwi 4, 2
  002f9fc  bf 0, 0x2fb80
  002fa00  lbz 3, 32(3)
  002fa04  cmpwi 3, 128
  002fa08  bt 0, 0x2fa14
  002fa0c  stw 25, 604(27)
  002fa10  b 0x2fb80
  002fa14  lis 3, 150
  002fa18  lis 4, 16025
  002fa1c  ori 4, 4, 39322
  002fa20  lwz 3, 19008(3)
  002fa24  clrlwi 3, 3, 1
  002fa28  cmpw 3, 4
  002fa2c  bf 0, 0x2fa50
  002fa30  lis 3, 150
  002fa34  lis 4, 16025
  002fa38  addic 3, 3, 19008
  002fa3c  ori 4, 4, 39322
  002fa40  lwz 3, 4(3)
  002fa44  clrlwi 3, 3, 1
  002fa48  cmpw 3, 4
  002fa4c  bt 0, 0x2fa54
  002fa50  stw 25, 608(27)
  002fa54  lis 3, 3
  002fa58  lis 5, 114
  002fa5c  vspltisw 2, -1
  002fa60  addi 4, 3, -2852
  002fa64  lwz 3, 608(27)
  002fa68  li 6, 36
  002fa6c  addic 3, 3, 1
  002fa70  li 7, -3056
  002fa74  vslw 2, 2, 2
  002fa78  stw 3, 608(27)
  002fa7c  lfs 31, 36(4)
  002fa80  lfs 1, -3056(5)
  002fa84  <unknown>
  002fa88  fmuls 1, 1, 31
  002fa8c  vspltw 3, 3, 0
  002fa90  <unknown>
  002fa94  vmaddfp 2, 4, 3, 2
  002fa98  fctiwz 1, 1
  002fa9c  vctsxs 2, 2, 0
  002faa0  stfd 1, 144(1)
  002faa4  lwz 4, 148(1)
  002faa8  cmpw 3, 4
  002faac  bf 1, 0x2fac0
  002fab0  vspltw 2, 2, 0
  002fab4  li 5, 608
  002fab8  ori 3, 4, 0
  002fabc  stvewx 2, 5, 27
  002fac0  extsw 3, 3
  002fac4  bl 0x502730
  002fac8  nop
  002facc  lis 3, 114
  002fad0  fmr 30, 1
  002fad4  lfs 1, -3056(3)
  002fad8  fmuls 1, 1, 31
  002fadc  fctiwz 1, 1
  002fae0  stfd 1, 144(1)
  002fae4  lwz 3, 148(1)
  002fae8  extsw 3, 3
  002faec  bl 0x502730
  002faf0  nop
  002faf4  fdivs 31, 30, 1
  002faf8  lis 3, 3
  002fafc  addi 3, 3, -2852
  002fb00  lfs 1, 40(3)
  002fb04  lwz 4, 384(27)
  002fb08  lwz 3, 604(27)
  002fb0c  lhz 5, 134(4)
  002fb10  cmpwi 5, 0
  002fb14  fmuls 31, 31, 1
  002fb18  bf 2, 0x2fb80
  002fb1c  ori 5, 3, 0
  002fb20  lwz 3, 112(4)
  002fb24  addic 7, 1, 128
  002fb28  stfs 31, 444(3)
  002fb2c  lwz 6, 112(4)
  002fb30  lfs 1, 16(5)
  002fb34  lis 3, 3
  002fb38  addi 8, 3, -2852
  002fb3c  lfs 2, 64(6)
  002fb40  fsubs 1, 1, 2
  002fb44  ori 3, 4, 0
  002fb48  ori 4, 7, 0
  002fb4c  stfs 1, 128(1)
  002fb50  lfs 1, 20(5)
  002fb54  lfs 2, 68(6)
  002fb58  fsubs 1, 1, 2
  002fb5c  stfs 1, 132(1)
  002fb60  lfs 1, 24(5)
  002fb64  lfs 2, 72(6)
  002fb68  fsubs 1, 1, 2
  002fb6c  stfs 1, 136(1)
  002fb70  lfs 1, 28(5)
  002fb74  stfs 1, 140(1)
  002fb78  lfs 1, 32(8)
  002fb7c  bl 0x2f0a0
  002fb80  lis 4, 3
  002fb84  addic 3, 26, 128
  002fb88  stw 25, 560(28)
  002fb8c  addi 4, 4, -2852
  002fb90  lwz 6, 8320(26)
  002fb94  li 5, 1
  002fb98  li 7, 0
  002fb9c  lfs 1, 44(4)
  002fba0  bl 0x5e598
  002fba4  nop
  002fba8  ori 30, 3, 0
  002fbac  cmpwi 30, 0
  002fbb0  bf 1, 0x2fc24
  002fbb4  cmpwi 30, 0
  002fbb8  ori 29, 25, 0
  002fbbc  bf 1, 0x2fc24
  002fbc0  lis 3, 3
  002fbc4  lis 24, 161
  002fbc8  addi 3, 3, -2852
  002fbcc  addic 24, 24, 18944
  002fbd0  lfs 31, 32(3)
  002fbd4  lwz 3, 0(24)
  002fbd8  bl 0xfcccc
  002fbdc  nop
  002fbe0  cmpwi 3, 0
  002fbe4  bt 2, 0x2fc14
  002fbe8  lbz 3, 13(3)
  002fbec  clrldi 3, 3, 32
  002fbf0  std 3, 144(1)
  002fbf4  lfd 1, 144(1)
  002fbf8  fcfid 1, 1
  002fbfc  frsp 1, 1
  002fc00  fcmpu 0, 1, 31
  002fc04  bt 2, 0x2fc14
  002fc08  li 3, 1
  002fc0c  stw 3, 560(28)
  002fc10  b 0x2fc24
  002fc14  addic 29, 29, 1
  002fc18  addic 24, 24, 4
  002fc1c  cmpw 30, 29
  002fc20  bt 1, 0x2fbd4
  002fc24  lwz 3, 8324(26)
  002fc28  cmpwi 3, 129
  002fc2c  bf 2, 0x2fcb4
  002fc30  lis 3, 150
  002fc34  addic 3, 3, 19008
  002fc38  lwz 3, 160(3)
  002fc3c  clrlwi 3, 3, 30
  002fc40  cmpwi 3, 0
  002fc44  bt 2, 0x2fcb4
  002fc48  lwz 27, 384(27)
  002fc4c  lhz 3, 134(27)
  002fc50  cmpwi 3, 0
  002fc54  bf 2, 0x2fc64
  002fc58  lwz 3, 112(27)
  002fc5c  sth 25, 16(3)
  002fc60  lhz 3, 134(27)
  002fc64  cmpwi 3, 0
  002fc68  bf 2, 0x2fca0
  002fc6c  lwz 4, 112(27)
  002fc70  li 3, 1
  002fc74  stb 3, 278(4)
  002fc78  lhz 3, 134(27)
  002fc7c  cmpwi 3, 0
  002fc80  bf 2, 0x2fca0
  002fc84  lis 3, 15651
  002fc88  lwz 5, 112(27)
  002fc8c  lis 4, 15948
  002fc90  ori 3, 3, 55050
  002fc94  ori 4, 4, 52429
  002fc98  stw 3, 284(5)
  002fc9c  stw 4, 288(5)
  002fca0  lwz 3, 112(31)
  002fca4  sth 25, 22(3)
  002fca8  sth 25, 18(3)
  002fcac  sth 25, 20(3)
  002fcb0  b 0x2ff8c
  002fcb4  lis 3, 147
  002fcb8  lwz 3, -7544(3)
  002fcbc  cmpwi 3, 0
  002fcc0  bt 2, 0x2ff8c
  002fcc4  lis 3, 3
  002fcc8  lwz 31, 112(31)
  002fccc  ori 30, 25, 0
  002fcd0  addi 3, 3, -2852
  002fcd4  ori 29, 27, 0
  002fcd8  lfs 31, 32(3)
  002fcdc  fmr 30, 31
  002fce0  lfs 1, 572(29)
  002fce4  lfs 2, 576(29)
  002fce8  bl 0x5026a0
  002fcec  nop
  002fcf0  addic 30, 30, 1
  002fcf4  fadds 31, 31, 1
  002fcf8  addic 29, 29, 4
  002fcfc  cmpwi 30, 4
  002fd00  bt 0, 0x2fce0
  002fd04  lis 3, 3
  002fd08  addi 3, 3, -2852
  002fd0c  lfs 1, 48(3)
  002fd10  lfs 2, 52(3)
  002fd14  fmuls 1, 31, 1
  002fd18  lfs 3, 56(3)
  002fd1c  lis 3, 114
  002fd20  fmuls 1, 1, 2
  002fd24  lfs 2, -10908(3)
  002fd28  fsub 4, 3, 1
  002fd2c  fsel 1, 4, 1, 3
  002fd30  fsubs 1, 3, 1
  002fd34  fcmpu 0, 2, 1
  002fd38  cror 6, 0, 2
  002fd3c  bt 6, 0x2fd7c
  002fd40  lis 3, 3
  002fd44  li 4, 60
  002fd48  vspltisw 2, -1
  002fd4c  addi 3, 3, -2852
  002fd50  lis 5, 114
  002fd54  li 6, -3056
  002fd58  vslw 2, 2, 2
  002fd5c  <unknown>
  002fd60  li 3, 18
  002fd64  vspltw 3, 3, 0
  002fd68  <unknown>
  002fd6c  vmaddfp 2, 4, 3, 2
  002fd70  vctsxs 2, 2, 0
  002fd74  vsplth 2, 2, 1
  002fd78  stvehx 2, 3, 31
  002fd7c  lhz 3, 18(31)
  002fd80  cmpwi 3, 0
  002fd84  bt 2, 0x2fef8
  002fd88  addic 3, 31, 18
  002fd8c  bl 0x4fffb4
  002fd90  nop
  002fd94  ori 4, 3, 0
  002fd98  lwz 3, 384(27)
  002fd9c  cmpwi 4, 0
  002fda0  bt 2, 0x2fde0
  002fda4  lis 4, 3
  002fda8  vspltisw 2, -1
  002fdac  li 6, 64
  002fdb0  addi 4, 4, -2852
  002fdb4  lis 5, 114
  002fdb8  li 7, -3056
  002fdbc  vslw 2, 2, 2
  002fdc0  <unknown>
  002fdc4  li 4, 20
  002fdc8  vspltw 3, 3, 0
  002fdcc  <unknown>
  002fdd0  vmaddfp 2, 4, 3, 2
  002fdd4  vctsxs 2, 2, 0
  002fdd8  vsplth 2, 2, 1
  002fddc  stvehx 2, 4, 31
  002fde0  lhz 4, 134(3)
  002fde4  cmpwi 4, 0
  002fde8  bf 2, 0x2fdf8
  002fdec  lwz 3, 112(3)
  002fdf0  li 4, 1
  002fdf4  stb 4, 278(3)
  002fdf8  lis 3, 3
  002fdfc  lhz 4, 22(31)
  002fe00  lis 5, 114
  002fe04  addi 3, 3, -2852
  002fe08  vspltisw 2, -1
  002fe0c  addic 4, 4, 1
  002fe10  li 6, 68
  002fe14  li 7, -3056
  002fe18  vslw 2, 2, 2
  002fe1c  sth 4, 22(31)
  002fe20  extsh 8, 4
  002fe24  lfs 31, 68(3)
  002fe28  lfs 1, -3056(5)
  002fe2c  <unknown>
  002fe30  fmuls 1, 1, 31
  002fe34  vspltw 3, 3, 0
  002fe38  <unknown>
  002fe3c  vmaddfp 2, 4, 3, 2
  002fe40  fctiwz 1, 1
  002fe44  vctsxs 2, 2, 0
  002fe48  stfd 1, 144(1)
  002fe4c  lwz 3, 148(1)
  002fe50  cmpw 8, 3
  002fe54  bf 1, 0x2fe68
  002fe58  vsplth 2, 2, 1
  002fe5c  li 5, 22
  002fe60  ori 4, 3, 0
  002fe64  stvehx 2, 5, 31
  002fe68  lis 3, 3
  002fe6c  lis 6, 114
  002fe70  addi 5, 3, -2852
  002fe74  extsh 3, 4
  002fe78  lfs 1, 72(5)
  002fe7c  lfs 2, -10904(6)
  002fe80  fmr 29, 1
  002fe84  fsubs 28, 2, 29
  002fe88  bl 0x502730
  002fe8c  nop
  002fe90  lis 3, 114
  002fe94  fmr 27, 1
  002fe98  lfs 1, -3056(3)
  002fe9c  fmuls 1, 1, 31
  002fea0  fctiwz 1, 1
  002fea4  stfd 1, 144(1)
  002fea8  lwz 3, 148(1)
  002feac  extsw 3, 3
  002feb0  bl 0x502730
  002feb4  nop
  002feb8  fdivs 31, 27, 1
  002febc  lwz 27, 384(27)
  002fec0  lhz 3, 134(27)
  002fec4  cmpwi 3, 0
  002fec8  fmadds 31, 28, 31, 29
  002fecc  bf 2, 0x2feec
  002fed0  fcmpu 0, 31, 30
  002fed4  lwz 27, 112(27)
  002fed8  bt 2, 0x2fee0
  002fedc  stfs 31, 284(27)
  002fee0  lis 3, 15948
  002fee4  ori 3, 3, 52429
  002fee8  stw 3, 288(27)
  002feec  lis 3, 114
  002fef0  stfs 30, -5552(3)
  002fef4  b 0x2ff8c
  002fef8  lis 3, 3
  002fefc  lhz 4, 20(31)
  002ff00  addi 3, 3, -2852
  002ff04  cmpwi 4, 0
  002ff08  lfs 31, 76(3)
  002ff0c  bt 2, 0x2ff7c
  002ff10  addic 3, 31, 20
  002ff14  bl 0x4fffb4
  002ff18  nop
  002ff1c  lhz 3, 20(31)
  002ff20  extsh 3, 3
  002ff24  bl 0x502730
  002ff28  nop
  002ff2c  lis 3, 3
  002ff30  fmr 30, 1
  002ff34  lis 4, 114
  002ff38  addi 30, 3, -2852
  002ff3c  lfs 1, 64(30)
  002ff40  lfs 2, -3056(4)
  002ff44  fmuls 1, 2, 1
  002ff48  fctiwz 1, 1
  002ff4c  stfd 1, 144(1)
  002ff50  lwz 3, 148(1)
  002ff54  extsw 3, 3
  002ff58  bl 0x502730
  002ff5c  nop
  002ff60  fdivs 1, 30, 1
  002ff64  lfs 2, 80(30)
  002ff68  lis 3, 114
  002ff6c  fmadds 1, 1, 2, 31
  002ff70  stfs 1, -5552(3)
  002ff74  sth 25, 22(31)
  002ff78  b 0x2ff8c
  002ff7c  lis 3, 114
  002ff80  sth 25, 22(31)
  002ff84  lis 4, 16192
  002ff88  stw 4, -5552(3)
  002ff8c  ld 0, 288(1)
  002ff90  mtlr 0
  002ff94  lfd 27, 232(1)
  002ff98  lfd 28, 240(1)
  002ff9c  lfd 29, 248(1)
  002ffa0  lfd 30, 256(1)
  002ffa4  lfd 31, 264(1)
  002ffa8  ld 24, 168(1)
  002ffac  ld 25, 176(1)
  002ffb0  ld 26, 184(1)
  002ffb4  ld 27, 192(1)
  002ffb8  ld 28, 200(1)
  002ffbc  ld 29, 208(1)
  002ffc0  ld 30, 216(1)
  002ffc4  ld 31, 224(1)
  002ffc8  addi 1, 1, 272
  002ffcc  blr

SetCam0DefaultPosRot:   # 0x2ffe8, 0x810 bytes
  002ffe8  stdu 1, -304(1)
  002ffec  mflr 0
  002fff0  std 0, 320(1)
  002fff4  stfd 28, 272(1)
  002fff8  stfd 29, 280(1)
  002fffc  stfd 30, 288(1)
  0030000  stfd 31, 296(1)
  0030004  std 27, 232(1)
  0030008  lis 27, 149
  003000c  cmpwi 3, 0
  0030010  std 31, 264(1)
  0030014  addic 27, 27, 5056
  0030018  std 26, 224(1)
  003001c  lwz 31, 384(27)
  0030020  lwz 26, 112(31)
  0030024  lfs 1, 52(31)
  0030028  std 30, 256(1)
  003002c  std 29, 248(1)
  0030030  std 28, 240(1)
  0030034  std 25, 216(1)
  0030038  std 24, 208(1)
  003003c  std 23, 200(1)
  0030040  lfs 2, 56(31)
  0030044  bt 2, 0x30590
  0030048  lis 30, 151
  003004c  lfs 31, 348(26)
  0030050  addic 3, 1, 144
  0030054  addic 30, 30, -25376
  0030058  lfs 30, 352(26)
  003005c  ori 4, 30, 0
  0030060  bl 0x500fa8
  0030064  nop
  0030068  lwz 3, 256(26)
  003006c  lfs 1, 192(3)
  0030070  lfs 2, 196(3)
  0030074  fmuls 1, 31, 1
  0030078  lfs 3, 224(3)
  003007c  fmuls 2, 31, 2
  0030080  lfs 4, 200(3)
  0030084  lfs 5, 64(26)
  0030088  fmuls 4, 31, 4
  003008c  lfs 6, 228(3)
  0030090  lfs 7, 232(3)
  0030094  addic 25, 1, 112
  0030098  fneg 1, 1
  003009c  fneg 2, 2
  00300a0  fneg 4, 4
  00300a4  addic 24, 31, 48
  00300a8  li 29, 148
  00300ac  ori 4, 24, 0
  00300b0  fmadds 1, 3, 30, 1
  00300b4  fmadds 2, 6, 30, 2
  00300b8  fmadds 3, 7, 30, 4
  00300bc  li 5, 148
  00300c0  li 7, 0
  00300c4  fadds 1, 5, 1
  00300c8  stfs 1, 48(31)
  00300cc  lfs 1, 68(26)
  00300d0  fadds 1, 1, 2
  00300d4  stfs 1, 52(31)
  00300d8  lfs 1, 72(26)
  00300dc  lwz 6, 8320(30)
  00300e0  fadds 1, 1, 3
  00300e4  stfs 1, 56(31)
  00300e8  lfs 1, 76(26)
  00300ec  stfs 1, 60(31)
  00300f0  lfs 1, 240(26)
  00300f4  lfs 2, 224(3)
  00300f8  lfs 3, 64(26)
  00300fc  fmadds 2, 2, 1, 3
  0030100  lfs 3, 228(3)
  0030104  lfs 4, 232(3)
  0030108  ori 3, 25, 0
  003010c  stfs 2, 112(1)
  0030110  lfs 2, 68(26)
  0030114  fmadds 2, 3, 1, 2
  0030118  stfs 2, 116(1)
  003011c  lfs 2, 72(26)
  0030120  fmadds 1, 4, 1, 2
  0030124  stfs 1, 120(1)
  0030128  lfs 1, 76(26)
  003012c  stfs 1, 124(1)
  0030130  bl 0x57820
  0030134  nop
  0030138  ori 4, 3, 0
  003013c  lwz 3, 8320(30)
  0030140  cmpwi 4, 0
  0030144  bt 2, 0x30190
  0030148  lis 4, 161
  003014c  lfs 1, 116(1)
  0030150  addic 4, 4, 2368
  0030154  lfs 2, 36(4)
  0030158  lfs 3, 32(4)
  003015c  fsubs 1, 2, 1
  0030160  lfs 2, 112(1)
  0030164  fsubs 2, 3, 2
  0030168  lis 4, 3
  003016c  addi 4, 4, -48
  0030170  fmuls 1, 1, 1
  0030174  fmadds 1, 2, 2, 1
  0030178  lfs 2, 0(4)
  003017c  fsqrts 1, 1
  0030180  fcmpu 0, 1, 2
  0030184  cror 6, 1, 2
  0030188  bt 6, 0x30190
  003018c  li 29, 150
  0030190  ori 6, 3, 0
  0030194  ori 3, 25, 0
  0030198  ori 4, 24, 0
  003019c  ori 5, 29, 0
  00301a0  li 7, 0
  00301a4  bl 0x57820
  00301a8  nop
  00301ac  cmpwi 3, 0
  00301b0  bt 2, 0x30480
  00301b4  lis 23, 161
  00301b8  lfs 4, 116(1)
  00301bc  addic 23, 23, 2368
  00301c0  lis 3, 3
  00301c4  lfs 1, 36(23)
  00301c8  lfs 3, 32(23)
  00301cc  fsubs 4, 1, 4
  00301d0  lfs 2, 112(1)
  00301d4  lfs 5, 40(23)
  00301d8  lfs 1, 120(1)
  00301dc  fsubs 3, 3, 2
  00301e0  fsubs 5, 5, 1
  00301e4  addi 3, 3, -48
  00301e8  fmuls 1, 4, 4
  00301ec  lfs 30, 4(3)
  00301f0  fmadds 1, 3, 3, 1
  00301f4  fmadds 1, 5, 5, 1
  00301f8  fsqrts 1, 1
  00301fc  fcmpu 0, 1, 30
  0030200  bf 2, 0x30228
  0030204  lfs 1, 64(26)
  0030208  stfs 1, 48(31)
  003020c  lfs 1, 68(26)
  0030210  stfs 1, 52(31)
  0030214  lfs 1, 72(26)
  0030218  stfs 1, 56(31)
  003021c  lfs 1, 76(26)
  0030220  stfs 1, 60(31)
  0030224  b 0x30480
  0030228  lis 3, 114
  003022c  lfs 6, -11096(3)
  0030230  fcmpu 0, 6, 1
  0030234  cror 6, 0, 2
  0030238  bt 6, 0x30444
  003023c  lis 3, 3
  0030240  lwz 4, 256(26)
  0030244  addi 3, 3, -48
  0030248  li 28, 0
  003024c  lfs 29, 8(3)
  0030250  lfs 1, 64(26)
  0030254  lfs 2, 224(4)
  0030258  lfs 3, 228(4)
  003025c  fmadds 1, 2, 29, 1
  0030260  lfs 4, 232(4)
  0030264  fmr 31, 29
  0030268  stfs 1, 112(1)
  003026c  lfs 2, 68(26)
  0030270  fmadds 2, 3, 29, 2
  0030274  stfs 2, 116(1)
  0030278  lfs 3, 72(26)
  003027c  fmadds 3, 4, 29, 3
  0030280  stfs 3, 120(1)
  0030284  lfs 4, 76(26)
  0030288  stfs 1, 128(1)
  003028c  stfs 4, 124(1)
  0030290  stfs 2, 132(1)
  0030294  stfs 3, 136(1)
  0030298  stfs 4, 140(1)
  003029c  lfs 28, 12(3)
  00302a0  ori 3, 25, 0
  00302a4  fmr 1, 31
  00302a8  li 5, 4
  00302ac  li 6, 0
  00302b0  bl 0x59e20
  00302b4  nop
  00302b8  cmpwi 3, 0
  00302bc  bt 2, 0x302e4
  00302c0  lfs 1, 48(23)
  00302c4  lfs 2, 52(23)
  00302c8  stfs 1, 112(1)
  00302cc  lfs 1, 56(23)
  00302d0  stfs 2, 116(1)
  00302d4  lfs 2, 60(23)
  00302d8  stfs 1, 120(1)
  00302dc  stfs 2, 124(1)
  00302e0  b 0x302f0
  00302e4  cmpwi 28, 0
  00302e8  bf 2, 0x302fc
  00302ec  fadds 31, 31, 28
  00302f0  addic 28, 28, 1
  00302f4  cmpwi 28, 3
  00302f8  bt 0, 0x302a0
  00302fc  lfs 2, 116(1)
  0030300  lfs 1, 132(1)
  0030304  lfs 3, 112(1)
  0030308  fsubs 2, 2, 1
  003030c  lfs 5, 128(1)
  0030310  fsubs 1, 3, 5
  0030314  lfs 3, 120(1)
  0030318  lfs 4, 136(1)
  003031c  fsubs 3, 3, 4
  0030320  fmuls 4, 2, 2
  0030324  fmadds 4, 1, 1, 4
  0030328  fmadds 4, 3, 3, 4
  003032c  fsqrts 4, 4
  0030330  fcmpu 0, 4, 30
  0030334  bf 2, 0x3035c
  0030338  lfs 1, 64(26)
  003033c  stfs 1, 48(31)
  0030340  lfs 1, 68(26)
  0030344  stfs 1, 52(31)
  0030348  lfs 1, 72(26)
  003034c  stfs 1, 56(31)
  0030350  lfs 1, 76(26)
  0030354  stfs 1, 60(31)
  0030358  b 0x30480
  003035c  lfs 6, 348(26)
  0030360  fdivs 4, 6, 4
  0030364  addic 3, 1, 128
  0030368  ori 4, 24, 0
  003036c  ori 5, 29, 0
  0030370  li 7, 0
  0030374  lwz 6, 8320(30)
  0030378  fmadds 1, 1, 4, 5
  003037c  stfs 1, 48(31)
  0030380  lfs 1, 132(1)
  0030384  fmadds 1, 2, 4, 1
  0030388  stfs 1, 52(31)
  003038c  lfs 1, 136(1)
  0030390  fmadds 1, 3, 4, 1
  0030394  stfs 1, 56(31)
  0030398  lfs 1, 140(1)
  003039c  stfs 1, 60(31)
  00303a0  bl 0x57820
  00303a4  nop
  00303a8  cmpwi 3, 0
  00303ac  bt 2, 0x30480
  00303b0  lfs 2, 36(23)
  00303b4  lfs 1, 116(1)
  00303b8  lfs 3, 32(23)
  00303bc  fsubs 2, 2, 1
  00303c0  lfs 5, 112(1)
  00303c4  fsubs 1, 3, 5
  00303c8  lfs 3, 40(23)
  00303cc  lfs 4, 120(1)
  00303d0  fsubs 3, 3, 4
  00303d4  fmuls 4, 2, 2
  00303d8  fmadds 4, 1, 1, 4
  00303dc  fmadds 4, 3, 3, 4
  00303e0  fsqrts 4, 4
  00303e4  fcmpu 0, 4, 30
  00303e8  bf 2, 0x30410
  00303ec  lfs 1, 64(26)
  00303f0  stfs 1, 48(31)
  00303f4  lfs 1, 68(26)
  00303f8  stfs 1, 52(31)
  00303fc  lfs 1, 72(26)
  0030400  stfs 1, 56(31)
  0030404  lfs 1, 76(26)
  0030408  stfs 1, 60(31)
  003040c  b 0x30480
  0030410  fsubs 6, 4, 29
  0030414  fdivs 4, 6, 4
  0030418  fmadds 1, 1, 4, 5
  003041c  stfs 1, 48(31)
  0030420  lfs 1, 116(1)
  0030424  fmadds 1, 2, 4, 1
  0030428  stfs 1, 52(31)
  003042c  lfs 1, 120(1)
  0030430  fmadds 1, 3, 4, 1
  0030434  stfs 1, 56(31)
  0030438  lfs 1, 124(1)
  003043c  stfs 1, 60(31)
  0030440  b 0x30480
  0030444  lis 3, 3
  0030448  addi 3, 3, -48
  003044c  lfs 6, 8(3)
  0030450  fsubs 6, 1, 6
  0030454  fdivs 1, 6, 1
  0030458  fmadds 2, 3, 1, 2
  003045c  stfs 2, 48(31)
  0030460  lfs 2, 116(1)
  0030464  fmadds 2, 4, 1, 2
  0030468  stfs 2, 52(31)
  003046c  lfs 2, 120(1)
  0030470  fmadds 1, 5, 1, 2
  0030474  stfs 1, 56(31)
  0030478  lfs 1, 124(1)
  003047c  stfs 1, 60(31)
  0030480  lfs 1, 52(31)
  0030484  lfs 3, 68(26)
  0030488  lfs 2, 48(31)
  003048c  fsubs 3, 1, 3
  0030490  lfs 4, 64(26)
  0030494  fsubs 4, 2, 4
  0030498  lfs 2, 56(31)
  003049c  lfs 5, 452(27)
  00304a0  lfs 6, 72(26)
  00304a4  lfs 7, 448(27)
  00304a8  fsubs 6, 2, 6
  00304ac  lfs 8, 456(27)
  00304b0  fmuls 9, 3, 5
  00304b4  lis 3, 3
  00304b8  addi 3, 3, -48
  00304bc  fmadds 9, 4, 7, 9
  00304c0  fmadds 9, 6, 8, 9
  00304c4  fnmsubs 3, 5, 9, 3
  00304c8  fnmsubs 4, 7, 9, 4
  00304cc  fnmsubs 5, 8, 9, 6
  00304d0  fmuls 3, 3, 3
  00304d4  fmadds 3, 4, 4, 3
  00304d8  lfs 4, 16(3)
  00304dc  fmadds 3, 5, 5, 3
  00304e0  fsqrts 3, 3
  00304e4  fcmpu 0, 3, 4
  00304e8  cror 6, 1, 2
  00304ec  bt 6, 0x30590
  00304f0  li 3, 2
  00304f4  bl 0xfc620
  00304f8  nop
  00304fc  cmpwi 3, 0
  0030500  bt 2, 0x3051c
  0030504  lis 3, 3
  0030508  lfs 2, 48(31)
  003050c  addi 3, 3, -48
  0030510  lfs 1, 8(3)
  0030514  fadds 2, 2, 1
  0030518  b 0x30530
  003051c  lis 3, 3
  0030520  lfs 2, 48(31)
  0030524  addi 3, 3, -48
  0030528  lfs 1, 8(3)
  003052c  fsubs 2, 2, 1
  0030530  li 3, 2
  0030534  stfs 2, 48(31)
  0030538  bl 0xfc620
  003053c  nop
  0030540  cmpwi 3, 0
  0030544  lfs 2, 56(31)
  0030548  bt 2, 0x30564
  003054c  lis 3, 3
  0030550  lfs 1, 52(31)
  0030554  addi 3, 3, -48
  0030558  lfs 3, 8(3)
  003055c  fadds 1, 1, 3
  0030560  b 0x30578
  0030564  lis 3, 3
  0030568  lfs 1, 52(31)
  003056c  addi 3, 3, -48
  0030570  lfs 3, 8(3)
  0030574  fsubs 1, 1, 3
  0030578  lis 3, 3
  003057c  stfs 1, 52(31)
  0030580  addi 3, 3, -48
  0030584  lfs 3, 8(3)
  0030588  fadds 2, 2, 3
  003058c  stfs 2, 56(31)
  0030590  lfs 3, 48(31)
  0030594  stfs 1, 104(31)
  0030598  stfs 3, 100(31)
  003059c  stfs 2, 108(31)
  00305a0  lfs 2, 452(27)
  00305a4  lfs 1, 448(27)
  00305a8  fmuls 4, 2, 2
  00305ac  lfs 3, 456(27)
  00305b0  lfs 7, 240(26)
  00305b4  lis 3, 3
  00305b8  fmadds 4, 1, 1, 4
  00305bc  addi 3, 3, -48
  00305c0  fmadds 4, 3, 3, 4
  00305c4  lfs 5, 4(3)
  00305c8  lfs 8, 64(26)
  00305cc  fsqrts 6, 4
  00305d0  lfs 4, 460(27)
  00305d4  fmr 9, 5
  00305d8  fmr 10, 9
  00305dc  fdivs 7, 7, 6
  00305e0  fsub 11, 5, 6
  00305e4  fsub 12, 6, 5
  00305e8  fsub 13, 5, 6
  00305ec  fsub 31, 5, 6
  00305f0  fsub 0, 6, 5
  00305f4  fsub 6, 6, 5
  00305f8  fmuls 30, 1, 7
  00305fc  fmuls 29, 2, 7
  0030600  fmuls 7, 3, 7
  0030604  fsel 11, 11, 5, 30
  0030608  fsel 13, 13, 5, 29
  003060c  fsel 31, 31, 5, 7
  0030610  fsel 11, 12, 11, 30
  0030614  fsel 12, 0, 13, 29
  0030618  fsel 6, 6, 31, 7
  003061c  fadds 8, 11, 8
  0030620  stfs 8, 112(1)
  0030624  lfs 7, 68(26)
  0030628  fadds 7, 12, 7
  003062c  stfs 7, 116(1)
  0030630  lfs 11, 72(26)
  0030634  stfs 4, 124(1)
  0030638  fadds 11, 6, 11
  003063c  stfs 11, 120(1)
  0030640  lfs 6, 52(31)
  0030644  lfs 12, 48(31)
  0030648  fsubs 7, 7, 6
  003064c  fsubs 6, 8, 12
  0030650  lfs 8, 56(31)
  0030654  fsubs 8, 11, 8
  0030658  fmuls 11, 7, 7
  003065c  fmadds 12, 6, 6, 11
  0030660  fmr 11, 10
  0030664  fmadds 12, 8, 8, 12
  0030668  fsqrts 13, 12
  003066c  fcmpu 0, 13, 11
  0030670  bt 2, 0x306c4
  0030674  frsqrte 9, 12
  0030678  lis 3, 3
  003067c  addi 3, 3, -48
  0030680  lfs 10, 8(3)
  0030684  lfs 11, 20(3)
  0030688  fmuls 13, 12, 9
  003068c  fmuls 0, 10, 9
  0030690  fnmsubs 13, 13, 9, 11
  0030694  fmadds 9, 13, 0, 9
  0030698  fmuls 13, 12, 9
  003069c  fmuls 0, 10, 9
  00306a0  fnmsubs 13, 13, 9, 11
  00306a4  fmadds 9, 13, 0, 9
  00306a8  fmuls 12, 12, 9
  00306ac  fmuls 10, 10, 9
  00306b0  fnmsubs 11, 12, 9, 11
  00306b4  fmadds 9, 11, 10, 9
  00306b8  fmuls 11, 6, 9
  00306bc  fmuls 10, 7, 9
  00306c0  fmuls 9, 8, 9
  00306c4  fmr 7, 1
  00306c8  fmuls 1, 3, 10
  00306cc  fmr 6, 5
  00306d0  fmuls 8, 2, 11
  00306d4  stfs 11, 0(31)
  00306d8  li 3, 0
  00306dc  stfs 10, 4(31)
  00306e0  fmuls 5, 7, 9
  00306e4  fmsubs 1, 2, 9, 1
  00306e8  stfs 9, 8(31)
  00306ec  stfs 4, 12(31)
  00306f0  stw 3, 28(31)
  00306f4  fmsubs 2, 3, 11, 5
  00306f8  fmsubs 3, 7, 10, 8
  00306fc  fmr 7, 6
  0030700  fmuls 5, 2, 2
  0030704  fmr 8, 7
  0030708  fmadds 5, 1, 1, 5
  003070c  fmadds 5, 3, 3, 5
  0030710  fsqrts 12, 5
  0030714  fcmpu 0, 12, 8
  0030718  bt 2, 0x3076c
  003071c  frsqrte 6, 5
  0030720  lis 3, 3
  0030724  addi 3, 3, -48
  0030728  lfs 7, 8(3)
  003072c  lfs 8, 20(3)
  0030730  fmuls 12, 5, 6
  0030734  fmuls 13, 7, 6
  0030738  fnmsubs 12, 12, 6, 8
  003073c  fmadds 6, 12, 13, 6
  0030740  fmuls 12, 5, 6
  0030744  fmuls 13, 7, 6
  0030748  fnmsubs 12, 12, 6, 8
  003074c  fmadds 6, 12, 13, 6
  0030750  fmuls 5, 5, 6
  0030754  fmuls 7, 7, 6
  0030758  fnmsubs 5, 5, 6, 8
  003075c  fmadds 6, 5, 7, 6
  0030760  fmuls 8, 1, 6
  0030764  fmuls 7, 2, 6
  0030768  fmuls 6, 3, 6
  003076c  fmuls 1, 9, 7
  0030770  li 3, 0
  0030774  fmuls 2, 11, 6
  0030778  stfs 8, 16(31)
  003077c  fmuls 3, 10, 8
  0030780  stfs 7, 20(31)
  0030784  stfs 6, 24(31)
  0030788  stw 3, 44(31)
  003078c  stfs 11, 64(31)
  0030790  stfs 10, 68(31)
  0030794  stfs 9, 72(31)
  0030798  stfs 4, 76(31)
  003079c  fmsubs 1, 10, 6, 1
  00307a0  fmsubs 2, 9, 8, 2
  00307a4  fmsubs 3, 11, 7, 3
  00307a8  stfs 1, 32(31)
  00307ac  stfs 2, 36(31)
  00307b0  stfs 3, 40(31)
  00307b4  ld 0, 320(1)
  00307b8  mtlr 0
  00307bc  lfd 28, 272(1)
  00307c0  lfd 29, 280(1)
  00307c4  lfd 30, 288(1)
  00307c8  lfd 31, 296(1)
  00307cc  ld 23, 200(1)
  00307d0  ld 24, 208(1)
  00307d4  ld 25, 216(1)
  00307d8  ld 26, 224(1)
  00307dc  ld 27, 232(1)
  00307e0  ld 28, 240(1)
  00307e4  ld 29, 248(1)
  00307e8  ld 30, 256(1)
  00307ec  ld 31, 264(1)
  00307f0  addi 1, 1, 304
  00307f4  blr

ResetCamOfsVectors_0:   # 0x307f8, 0x1ec bytes
  00307f8  stdu 1, -64(1)
  00307fc  stfd 30, 48(1)
  0030800  stfd 31, 56(1)
  0030804  lhz 4, 134(3)
  0030808  cmpwi 4, 0
  003080c  bf 2, 0x309d4
  0030810  lis 4, 151
  0030814  lwz 5, 112(3)
  0030818  addic 4, 4, -25376
  003081c  lfs 1, 656(4)
  0030820  lfs 2, 660(4)
  0030824  lfs 3, 664(4)
  0030828  lfs 4, 128(4)
  003082c  lfs 5, 668(4)
  0030830  stfs 4, 64(5)
  0030834  lfs 6, 132(4)
  0030838  fmuls 7, 1, 4
  003083c  fmuls 8, 2, 6
  0030840  stfs 6, 68(5)
  0030844  lfs 9, 136(4)
  0030848  lfs 11, 352(5)
  003084c  fmuls 10, 3, 9
  0030850  stfs 9, 72(5)
  0030854  fmuls 12, 1, 11
  0030858  fmuls 13, 2, 11
  003085c  fmuls 11, 3, 11
  0030860  fneg 7, 7
  0030864  fneg 8, 8
  0030868  fneg 10, 10
  003086c  fneg 12, 12
  0030870  fneg 11, 11
  0030874  fadds 7, 7, 8
  0030878  lfs 8, 140(4)
  003087c  lfs 0, 240(5)
  0030880  li 4, 0
  0030884  stfs 8, 76(5)
  0030888  fmuls 31, 1, 0
  003088c  fmuls 30, 2, 0
  0030890  stfs 4, 160(5)
  0030894  stfs 6, 164(5)
  0030898  fadds 11, 11, 9
  003089c  stfs 9, 168(5)
  00308a0  stfs 8, 172(5)
  00308a4  fneg 8, 13
  00308a8  stfs 5, 92(5)
  00308ac  fadds 7, 7, 10
  00308b0  stw 4, 188(5)
  00308b4  fmuls 10, 3, 0
  00308b8  stw 4, 184(5)
  00308bc  stw 4, 180(5)
  00308c0  stw 4, 176(5)
  00308c4  fneg 13, 31
  00308c8  stw 4, 204(5)
  00308cc  fneg 0, 30
  00308d0  stw 4, 200(5)
  00308d4  stw 4, 196(5)
  00308d8  stw 4, 192(5)
  00308dc  stw 4, 236(5)
  00308e0  fadds 8, 8, 6
  00308e4  fmuls 1, 1, 7
  00308e8  stw 4, 232(5)
  00308ec  fmuls 2, 2, 7
  00308f0  stw 4, 228(5)
  00308f4  fmuls 3, 3, 7
  00308f8  stw 4, 224(5)
  00308fc  fneg 7, 10
  0030900  fadds 10, 12, 4
  0030904  fadds 4, 13, 4
  0030908  fadds 6, 0, 6
  003090c  fneg 1, 1
  0030910  fneg 2, 2
  0030914  fneg 3, 3
  0030918  fadds 7, 7, 9
  003091c  stfs 10, 144(5)
  0030920  stfs 1, 80(5)
  0030924  stfs 2, 84(5)
  0030928  stfs 3, 88(5)
  003092c  stfs 8, 148(5)
  0030930  stfs 11, 152(5)
  0030934  stfs 5, 156(5)
  0030938  stfs 4, 208(5)
  003093c  stfs 6, 212(5)
  0030940  stfs 7, 216(5)
  0030944  stfs 5, 220(5)
  0030948  stfs 4, 128(5)
  003094c  stfs 6, 132(5)
  0030950  stfs 7, 136(5)
  0030954  stfs 5, 140(5)
  0030958  lfs 1, 48(3)
  003095c  fsubs 1, 1, 10
  0030960  fadds 3, 10, 1
  0030964  stfs 1, 304(5)
  0030968  lfs 2, 52(3)
  003096c  fsubs 2, 2, 8
  0030970  fadds 6, 8, 2
  0030974  stfs 2, 308(5)
  0030978  lfs 4, 56(3)
  003097c  fsubs 4, 4, 11
  0030980  stfs 4, 312(5)
  0030984  lfs 7, 60(3)
  0030988  stfs 1, 320(5)
  003098c  stfs 7, 316(5)
  0030990  stfs 2, 324(5)
  0030994  stfs 4, 328(5)
  0030998  fadds 2, 11, 4
  003099c  stfs 7, 332(5)
  00309a0  lfs 1, 48(3)
  00309a4  stfs 1, 0(5)
  00309a8  lfs 1, 52(3)
  00309ac  stfs 1, 4(5)
  00309b0  lfs 1, 56(3)
  00309b4  stfs 1, 8(5)
  00309b8  lfs 1, 60(3)
  00309bc  stfs 3, 496(5)
  00309c0  stfs 1, 12(5)
  00309c4  stfs 6, 500(5)
  00309c8  stfs 2, 504(5)
  00309cc  stfs 5, 508(5)
  00309d0  stw 4, 544(5)
  00309d4  lfd 30, 48(1)
  00309d8  lfd 31, 56(1)
  00309dc  addi 1, 1, 64
  00309e0  blr

Camera0_Init:   # 0x309f0, 0x490 bytes
  00309f0  stdu 1, -176(1)
  00309f4  mflr 0
  00309f8  std 0, 192(1)
  00309fc  lis 4, 147
  0030a00  li 5, 0
  0030a04  std 30, 160(1)
  0030a08  lis 6, 147
  0030a0c  lis 30, 151
  0030a10  lis 8, 15948
  0030a14  addic 30, 30, -25376
  0030a18  stw 5, -7552(4)
  0030a1c  lis 4, 16320
  0030a20  std 25, 120(1)
  0030a24  stw 5, -7548(6)
  0030a28  lwz 25, 112(3)
  0030a2c  lis 6, 114
  0030a30  lis 9, 16532
  0030a34  lfs 1, 128(30)
  0030a38  lwz 7, 8320(30)
  0030a3c  lis 10, 15172
  0030a40  stfs 1, 64(25)
  0030a44  lfs 2, 132(30)
  0030a48  stfs 2, 68(25)
  0030a4c  lfs 3, 136(30)
  0030a50  stfs 3, 72(25)
  0030a54  lfs 4, 140(30)
  0030a58  stw 4, 240(25)
  0030a5c  stfs 4, 76(25)
  0030a60  ori 4, 8, 52429
  0030a64  stb 5, 260(25)
  0030a68  stw 7, 256(25)
  0030a6c  lis 11, 16192
  0030a70  stb 5, 278(25)
  0030a74  lis 7, 15267
  0030a78  lfs 5, -11136(6)
  0030a7c  li 12, 1
  0030a80  stw 4, 288(25)
  0030a84  ori 7, 7, 55050
  0030a88  stfs 5, 284(25)
  0030a8c  lfs 5, -11136(6)
  0030a90  stw 4, 296(25)
  0030a94  ori 6, 9, 31457
  0030a98  stfs 5, 292(25)
  0030a9c  lis 9, 16384
  0030aa0  std 26, 128(1)
  0030aa4  stw 5, 244(25)
  0030aa8  lwz 26, 112(3)
  0030aac  stw 5, 252(25)
  0030ab0  stw 7, 248(25)
  0030ab4  sth 5, 262(25)
  0030ab8  lis 8, 3
  0030abc  stw 6, 348(26)
  0030ac0  sth 5, 280(25)
  0030ac4  stw 9, 352(26)
  0030ac8  stw 5, 356(26)
  0030acc  sth 5, 282(25)
  0030ad0  ori 9, 10, 39846
  0030ad4  stw 5, 360(26)
  0030ad8  lis 10, 114
  0030adc  stw 5, 344(26)
  0030ae0  stw 5, 336(26)
  0030ae4  stw 5, 340(26)
  0030ae8  stw 5, 372(26)
  0030aec  std 27, 136(1)
  0030af0  stw 5, 384(26)
  0030af4  lwz 27, 112(3)
  0030af8  stw 9, 376(26)
  0030afc  stw 9, 388(26)
  0030b00  stw 6, 392(26)
  0030b04  lis 9, 16740
  0030b08  sth 5, 364(26)
  0030b0c  std 28, 144(1)
  0030b10  lis 6, 15904
  0030b14  lwz 28, 112(3)
  0030b18  ori 9, 9, 37434
  0030b1c  sth 5, 366(26)
  0030b20  ori 6, 6, 55676
  0030b24  stw 11, -5552(10)
  0030b28  sth 12, 16(27)
  0030b2c  sth 5, 18(27)
  0030b30  lis 10, 114
  0030b34  stw 5, 48(28)
  0030b38  lis 11, 16134
  0030b3c  stw 5, 44(28)
  0030b40  addi 8, 8, 2532
  0030b44  stw 5, 52(28)
  0030b48  stw 5, 56(28)
  0030b4c  sth 5, 20(27)
  0030b50  stw 5, 400(28)
  0030b54  sth 5, 22(27)
  0030b58  stw 5, 404(28)
  0030b5c  stw 7, 408(28)
  0030b60  stw 4, 412(28)
  0030b64  stw 6, 416(28)
  0030b68  ori 7, 11, 2706
  0030b6c  sth 5, 32(28)
  0030b70  lis 4, 114
  0030b74  stw 9, 420(28)
  0030b78  lis 6, 114
  0030b7c  stw 5, 424(28)
  0030b80  sth 5, 34(28)
  0030b84  stw 5, 432(28)
  0030b88  stw 5, 428(28)
  0030b8c  stw 5, 436(28)
  0030b90  lfs 5, -5548(10)
  0030b94  stw 7, 448(28)
  0030b98  stfs 5, 444(28)
  0030b9c  stw 5, 452(28)
  0030ba0  li 7, -3056
  0030ba4  stw 5, 456(28)
  0030ba8  stw 5, 440(28)
  0030bac  stw 5, 460(28)
  0030bb0  lfs 5, 348(26)
  0030bb4  stw 5, 544(28)
  0030bb8  stfs 5, 552(28)
  0030bbc  stw 5, 560(28)
  0030bc0  sth 5, 548(28)
  0030bc4  sth 5, 550(28)
  0030bc8  lfs 5, -11012(4)
  0030bcc  vspltisw 3, -1
  0030bd0  stfs 5, 556(28)
  0030bd4  <unknown>
  0030bd8  lis 9, 149
  0030bdc  <unknown>
  0030be0  li 4, 516
  0030be4  vspltw 2, 2, 0
  0030be8  std 29, 152(1)
  0030bec  vslw 3, 3, 3
  0030bf0  lwz 29, 112(3)
  0030bf4  lis 7, 114
  0030bf8  lwz 9, 16524(9)
  0030bfc  lis 6, 114
  0030c00  vmaddfp 2, 4, 2, 3
  0030c04  std 31, 168(1)
  0030c08  lis 8, 114
  0030c0c  ori 31, 3, 0
  0030c10  vctsxs 2, 2, 0
  0030c14  vsplth 2, 2, 1
  0030c18  stvehx 2, 4, 29
  0030c1c  stw 5, 512(29)
  0030c20  lfs 5, -11076(7)
  0030c24  sth 5, 522(29)
  0030c28  stfs 5, 532(29)
  0030c2c  lfs 5, -11068(6)
  0030c30  sth 5, 518(29)
  0030c34  sth 5, 520(29)
  0030c38  stfs 5, 524(29)
  0030c3c  lfs 5, -11072(8)
  0030c40  stw 9, 536(29)
  0030c44  stfs 5, 528(29)
  0030c48  stw 5, 540(29)
  0030c4c  stw 5, 492(29)
  0030c50  stw 5, 488(29)
  0030c54  stw 5, 484(29)
  0030c58  stw 5, 480(29)
  0030c5c  sth 5, 616(29)
  0030c60  stw 5, 612(29)
  0030c64  stfs 1, 576(29)
  0030c68  stfs 2, 580(29)
  0030c6c  stfs 3, 584(29)
  0030c70  stfs 4, 588(29)
  0030c74  stfs 1, 592(29)
  0030c78  stfs 2, 596(29)
  0030c7c  stfs 3, 600(29)
  0030c80  stfs 4, 604(29)
  0030c84  lbz 3, 125(3)
  0030c88  cmpwi 3, 2
  0030c8c  bf 2, 0x30d38
  0030c90  ori 3, 31, 0
  0030c94  bl 0x307f8
  0030c98  lis 3, 149
  0030c9c  lfs 1, 0(31)
  0030ca0  lfs 2, 4(31)
  0030ca4  lis 4, 114
  0030ca8  addic 3, 3, 5056
  0030cac  stfs 1, 64(31)
  0030cb0  lfs 1, 8(31)
  0030cb4  li 5, -3056
  0030cb8  stfs 2, 68(31)
  0030cbc  lfs 2, 12(31)
  0030cc0  lwz 3, 388(3)
  0030cc4  stfs 1, 72(31)
  0030cc8  stfs 2, 76(31)
  0030ccc  <unknown>
  0030cd0  lhz 3, 134(3)
  0030cd4  cmpwi 3, 7
  0030cd8  bf 2, 0x30cf0
  0030cdc  lhz 3, 780(30)
  0030ce0  cmpwi 3, 0
  0030ce4  bf 2, 0x30cf0
  0030ce8  vspltisw 2, 0
  0030cec  b 0x30d28
  0030cf0  lis 3, 114
  0030cf4  vspltisw 5, -1
  0030cf8  li 4, -11004
  0030cfc  lis 5, 3
  0030d00  li 6, 4
  0030d04  addi 5, 5, 2532
  0030d08  vslw 5, 5, 5
  0030d0c  <unknown>
  0030d10  vcfsx 3, 3, 0
  0030d14  <unknown>
  0030d18  vspltw 4, 4, 0
  0030d1c  vaddfp 3, 3, 4
  0030d20  vmaddfp 2, 2, 3, 5
  0030d24  vctsxs 2, 2, 0
  0030d28  vsplth 2, 2, 1
  0030d2c  li 3, 32
  0030d30  stvehx 2, 3, 28
  0030d34  b 0x30d48
  0030d38  ori 3, 31, 0
  0030d3c  bl 0x2bed8
  0030d40  li 3, 1
  0030d44  bl 0x2ffe8
  0030d48  lfs 1, 48(31)
  0030d4c  lfs 2, 144(25)
  0030d50  fsubs 1, 1, 2
  0030d54  lis 3, 3
  0030d58  addi 3, 3, 2532
  0030d5c  stfs 1, 304(26)
  0030d60  lfs 2, 52(31)
  0030d64  lfs 3, 148(25)
  0030d68  fsubs 2, 2, 3
  0030d6c  stfs 2, 308(26)
  0030d70  lfs 3, 56(31)
  0030d74  lfs 4, 152(25)
  0030d78  fsubs 3, 3, 4
  0030d7c  stfs 3, 312(26)
  0030d80  lfs 4, 60(31)
  0030d84  stfs 1, 320(26)
  0030d88  stfs 4, 316(26)
  0030d8c  stfs 2, 324(26)
  0030d90  stfs 3, 328(26)
  0030d94  stfs 4, 332(26)
  0030d98  lfs 1, 48(31)
  0030d9c  stfs 1, 0(27)
  0030da0  lfs 1, 52(31)
  0030da4  stfs 1, 4(27)
  0030da8  lfs 1, 56(31)
  0030dac  stfs 1, 8(27)
  0030db0  lfs 1, 60(31)
  0030db4  stfs 1, 12(27)
  0030db8  lfs 1, 48(31)
  0030dbc  stfs 1, 496(29)
  0030dc0  lfs 1, 52(31)
  0030dc4  stfs 1, 500(29)
  0030dc8  lfs 1, 56(31)
  0030dcc  stfs 1, 504(29)
  0030dd0  lfs 1, 60(31)
  0030dd4  stfs 1, 508(29)
  0030dd8  lfs 1, 308(26)
  0030ddc  lfs 2, 660(30)
  0030de0  lfs 3, 304(26)
  0030de4  fmuls 4, 1, 2
  0030de8  lfs 5, 656(30)
  0030dec  lfs 6, 312(26)
  0030df0  lfs 7, 664(30)
  0030df4  fmadds 4, 3, 5, 4
  0030df8  fmadds 4, 6, 7, 4
  0030dfc  fnmsubs 1, 2, 4, 1
  0030e00  fnmsubs 2, 5, 4, 3
  0030e04  fnmsubs 3, 7, 4, 6
  0030e08  fmuls 1, 1, 1
  0030e0c  fmadds 1, 2, 2, 1
  0030e10  lfs 2, 348(26)
  0030e14  fmadds 1, 3, 3, 1
  0030e18  fsqrts 1, 1
  0030e1c  fsubs 1, 2, 1
  0030e20  stfs 1, 512(29)
  0030e24  lfs 2, 8(3)
  0030e28  fcmpu 0, 1, 2
  0030e2c  cror 6, 1, 2
  0030e30  bt 6, 0x30e3c
  0030e34  li 3, 1
  0030e38  sth 3, 522(29)
  0030e3c  lfs 1, 352(26)
  0030e40  li 3, 0
  0030e44  stfs 1, 40(28)
  0030e48  lfs 1, 240(25)
  0030e4c  stfs 1, 36(28)
  0030e50  sth 3, 126(31)
  0030e54  ld 0, 192(1)
  0030e58  mtlr 0
  0030e5c  ld 25, 120(1)
  0030e60  ld 26, 128(1)
  0030e64  ld 27, 136(1)
  0030e68  ld 28, 144(1)
  0030e6c  ld 29, 152(1)
  0030e70  ld 30, 160(1)
  0030e74  ld 31, 168(1)
  0030e78  addi 1, 1, 176
  0030e7c  blr

CalcCamOfs_0:   # 0x30e90, 0x280 bytes
  0030e90  ori 7, 4, 0
  0030e94  lwz 4, 112(3)
  0030e98  lis 3, 3
  0030e9c  cmpwi 1, 5, 0
  0030ea0  lfs 5, 0(7)
  0030ea4  lfs 1, 144(4)
  0030ea8  lfs 2, 304(4)
  0030eac  fsubs 5, 5, 1
  0030eb0  lfs 1, 308(4)
  0030eb4  lfs 4, 148(4)
  0030eb8  fmuls 1, 1, 1
  0030ebc  lfs 3, 312(4)
  0030ec0  lfs 6, 152(4)
  0030ec4  lhz 8, 520(4)
  0030ec8  addi 3, 3, 3712
  0030ecc  cmpwi 8, 0
  0030ed0  cmpwi 6, 6, 0
  0030ed4  stfs 5, 304(4)
  0030ed8  fmadds 1, 2, 2, 1
  0030edc  lfs 2, 4(7)
  0030ee0  fsubs 4, 2, 4
  0030ee4  fmadds 1, 3, 3, 1
  0030ee8  stfs 4, 308(4)
  0030eec  lfs 2, 8(7)
  0030ef0  fsubs 2, 2, 6
  0030ef4  fsqrts 1, 1
  0030ef8  stfs 2, 312(4)
  0030efc  lfs 3, 12(7)
  0030f00  stfs 3, 316(4)
  0030f04  bt 2, 0x30f7c
  0030f08  fmuls 1, 4, 4
  0030f0c  lfs 3, 348(4)
  0030f10  lfs 6, 512(4)
  0030f14  fsubs 3, 3, 6
  0030f18  lfs 6, 0(3)
  0030f1c  fmadds 1, 5, 5, 1
  0030f20  ori 3, 6, 0
  0030f24  fmadds 1, 2, 2, 1
  0030f28  fsqrts 1, 1
  0030f2c  fdivs 3, 3, 1
  0030f30  fsub 7, 6, 1
  0030f34  fsub 8, 6, 1
  0030f38  fsub 9, 6, 1
  0030f3c  fsub 10, 1, 6
  0030f40  fsub 11, 1, 6
  0030f44  fsub 1, 1, 6
  0030f48  fmuls 5, 5, 3
  0030f4c  fmuls 4, 4, 3
  0030f50  fmuls 2, 2, 3
  0030f54  fsel 3, 7, 6, 5
  0030f58  fsel 7, 8, 6, 4
  0030f5c  fsel 6, 9, 6, 2
  0030f60  fsel 3, 10, 3, 5
  0030f64  fsel 4, 11, 7, 4
  0030f68  fsel 1, 1, 6, 2
  0030f6c  stfs 3, 304(4)
  0030f70  stfs 4, 308(4)
  0030f74  stfs 1, 312(4)
  0030f78  b 0x3110c
  0030f7c  fmuls 3, 4, 4
  0030f80  lis 5, 151
  0030f84  addic 5, 5, -25376
  0030f88  lbz 7, 8356(5)
  0030f8c  cmpwi 7, 2
  0030f90  fmadds 3, 5, 5, 3
  0030f94  fmadds 3, 2, 2, 3
  0030f98  fsqrts 3, 3
  0030f9c  bt 2, 0x31008
  0030fa0  lis 7, 150
  0030fa4  lis 8, 15692
  0030fa8  ori 8, 8, 52429
  0030fac  lwz 7, 19008(7)
  0030fb0  clrlwi 7, 7, 1
  0030fb4  cmpw 7, 8
  0030fb8  bf 1, 0x31008
  0030fbc  bt 26, 0x31008
  0030fc0  li 7, 4
  0030fc4  vspltisw 2, -1
  0030fc8  lis 8, 114
  0030fcc  li 9, -3056
  0030fd0  <unknown>
  0030fd4  vslw 2, 2, 2
  0030fd8  lis 7, 114
  0030fdc  vspltw 3, 3, 0
  0030fe0  <unknown>
  0030fe4  lis 8, 114
  0030fe8  vmaddfp 2, 4, 3, 2
  0030fec  lfs 6, -11112(7)
  0030ff0  li 7, 516
  0030ff4  lfs 7, -3064(8)
  0030ff8  fnmsubs 3, 6, 7, 3
  0030ffc  vctsxs 2, 2, 0
  0031000  vsplth 2, 2, 1
  0031004  stvehx 2, 7, 4
  0031008  bf 6, 0x31050
  003100c  fcmpu 1, 3, 1
  0031010  lwz 5, 8332(5)
  0031014  cmpwi 5, 2
  0031018  crorc 2, 2, 5
  003101c  bt 2, 0x31050
  0031020  fdivs 3, 1, 3
  0031024  lfs 6, 348(4)
  0031028  ori 3, 6, 0
  003102c  fsubs 1, 6, 1
  0031030  stfs 1, 512(4)
  0031034  fmuls 1, 5, 3
  0031038  fmuls 4, 4, 3
  003103c  fmuls 2, 2, 3
  0031040  stfs 1, 304(4)
  0031044  stfs 4, 308(4)
  0031048  stfs 2, 312(4)
  003104c  b 0x3110c
  0031050  lis 5, 114
  0031054  lfs 1, -11096(5)
  0031058  fcmpu 0, 1, 3
  003105c  cror 6, 0, 2
  0031060  bt 6, 0x310fc
  0031064  lfs 6, 8(3)
  0031068  fcmpu 0, 3, 6
  003106c  bt 1, 0x310d4
  0031070  ori 5, 3, 0
  0031074  lwz 3, 256(4)
  0031078  fneg 6, 1
  003107c  lfs 3, 196(3)
  0031080  lfs 4, 192(3)
  0031084  fmuls 5, 3, 3
  0031088  lfs 2, 200(3)
  003108c  lfs 1, 0(5)
  0031090  fmadds 5, 4, 4, 5
  0031094  fmadds 5, 2, 2, 5
  0031098  fsqrts 5, 5
  003109c  fcmpu 0, 5, 1
  00310a0  bf 2, 0x310b4
  00310a4  fmr 3, 1
  00310a8  lfs 4, 204(3)
  00310ac  fmr 2, 3
  00310b0  b 0x310cc
  00310b4  fdivs 5, 6, 5
  00310b8  fmr 7, 2
  00310bc  fmuls 1, 4, 5
  00310c0  fmuls 2, 3, 5
  00310c4  lfs 4, 204(3)
  00310c8  fmuls 3, 7, 5
  00310cc  stfs 4, 316(4)
  00310d0  b 0x310e8
  00310d4  fdivs 3, 1, 3
  00310d8  fmr 6, 2
  00310dc  fmuls 1, 5, 3
  00310e0  fmuls 2, 4, 3
  00310e4  fmuls 3, 6, 3
  00310e8  lis 3, 114
  00310ec  stfs 1, 304(4)
  00310f0  stfs 2, 308(4)
  00310f4  stfs 3, 312(4)
  00310f8  lfs 3, -11096(3)
  00310fc  lfs 1, 348(4)
  0031100  li 3, 1
  0031104  fsubs 1, 1, 3
  0031108  stfs 1, 512(4)
  003110c  blr

UpdateBumpColl_0:   # 0x31128, 0x2e8 bytes
  0031128  stdu 1, -256(1)
  003112c  mflr 0
  0031130  std 0, 272(1)
  0031134  stfd 26, 208(1)
  0031138  stfd 27, 216(1)
  003113c  stfd 28, 224(1)
  0031140  stfd 29, 232(1)
  0031144  stfd 30, 240(1)
  0031148  stfd 31, 248(1)
  003114c  std 28, 176(1)
  0031150  std 22, 128(1)
  0031154  lwz 28, 112(3)
  0031158  lis 22, 149
  003115c  li 5, 2
  0031160  addic 22, 22, 5056
  0031164  lfs 1, 144(28)
  0031168  lfs 2, 304(28)
  003116c  lis 6, 114
  0031170  fadds 1, 1, 2
  0031174  std 27, 168(1)
  0031178  lis 4, 3
  003117c  li 27, 0
  0031180  std 29, 184(1)
  0031184  addi 4, 4, 4368
  0031188  std 25, 152(1)
  003118c  std 24, 144(1)
  0031190  ori 29, 27, 0
  0031194  lis 25, 161
  0031198  std 30, 192(1)
  003119c  ori 24, 29, 0
  00311a0  std 26, 160(1)
  00311a4  addic 30, 1, 112
  00311a8  ori 26, 24, 0
  00311ac  std 31, 200(1)
  00311b0  addic 25, 25, 2368
  00311b4  ori 31, 3, 0
  00311b8  stfs 1, 112(1)
  00311bc  lfs 1, 148(28)
  00311c0  lfs 2, 308(28)
  00311c4  sth 5, 520(28)
  00311c8  fadds 1, 1, 2
  00311cc  std 23, 136(1)
  00311d0  lwz 5, 384(22)
  00311d4  lwz 23, 536(28)
  00311d8  extsw 23, 23
  00311dc  stfs 1, 116(1)
  00311e0  lfs 1, 152(28)
  00311e4  lfs 2, 312(28)
  00311e8  lfs 26, -11080(6)
  00311ec  fadds 1, 1, 2
  00311f0  stfs 1, 120(1)
  00311f4  lfs 1, 156(28)
  00311f8  stfs 1, 124(1)
  00311fc  lfs 27, 0(4)
  0031200  lwz 5, 112(5)
  0031204  lfs 1, 532(5)
  0031208  lfs 2, 524(5)
  003120c  lfs 3, 528(5)
  0031210  fmuls 1, 1, 2
  0031214  lfs 28, 4(4)
  0031218  fsubs 2, 3, 27
  003121c  lfs 29, 8(4)
  0031220  lfs 30, 12(4)
  0031224  lfs 31, 16(4)
  0031228  fmadds 26, 1, 2, 26
  003122c  ori 3, 30, 0
  0031230  fmr 1, 26
  0031234  bl 0x2bb10
  0031238  cmpwi 3, 0
  003123c  bt 2, 0x31248
  0031240  li 26, 1
  0031244  b 0x3126c
  0031248  ori 3, 30, 0
  003124c  fmr 1, 26
  0031250  ori 5, 23, 0
  0031254  lwz 6, 596(22)
  0031258  bl 0x59e20
  003125c  nop
  0031260  cmpwi 3, 0
  0031264  bt 2, 0x31364
  0031268  li 27, 1
  003126c  lhz 3, 520(28)
  0031270  cmpwi 3, 0
  0031274  bt 2, 0x31338
  0031278  lfs 2, 36(25)
  003127c  lfs 1, 116(1)
  0031280  lfs 3, 32(25)
  0031284  fsubs 2, 2, 1
  0031288  lfs 1, 112(1)
  003128c  fsubs 3, 3, 1
  0031290  lfs 1, 40(25)
  0031294  lfs 4, 120(1)
  0031298  fsubs 1, 1, 4
  003129c  fmuls 4, 2, 2
  00312a0  fmr 7, 28
  00312a4  fmadds 4, 3, 3, 4
  00312a8  fmr 6, 7
  00312ac  fmadds 4, 1, 1, 4
  00312b0  fmr 5, 6
  00312b4  fsqrts 8, 4
  00312b8  fcmpu 0, 8, 5
  00312bc  bt 2, 0x31300
  00312c0  frsqrte 5, 4
  00312c4  fmuls 6, 4, 5
  00312c8  fmuls 7, 29, 5
  00312cc  fnmsubs 6, 6, 5, 27
  00312d0  fmadds 5, 6, 7, 5
  00312d4  fmuls 6, 4, 5
  00312d8  fmuls 7, 29, 5
  00312dc  fnmsubs 6, 6, 5, 27
  00312e0  fmadds 5, 6, 7, 5
  00312e4  fmuls 4, 4, 5
  00312e8  fmuls 6, 29, 5
  00312ec  fnmsubs 4, 4, 5, 27
  00312f0  fmadds 5, 4, 6, 5
  00312f4  fmuls 7, 3, 5
  00312f8  fmuls 6, 2, 5
  00312fc  fmuls 5, 1, 5
  0031300  lfs 1, 452(22)
  0031304  lfs 2, 448(22)
  0031308  fmuls 1, 1, 6
  003130c  lfs 3, 456(22)
  0031310  li 3, 1
  0031314  fmadds 1, 2, 7, 1
  0031318  fmadds 1, 3, 5, 1
  003131c  fcmpu 0, 1, 30
  0031320  fcmpu 1, 1, 31
  0031324  bt 1, 0x31334
  0031328  ori 3, 29, 0
  003132c  bf 4, 0x31334
  0031330  li 3, -1
  0031334  sth 3, 520(28)
  0031338  lfs 1, 48(25)
  003133c  addic 24, 24, 1
  0031340  lfs 2, 52(25)
  0031344  stfs 1, 112(1)
  0031348  lfs 1, 56(25)
  003134c  cmpwi 24, 3
  0031350  stfs 2, 116(1)
  0031354  lfs 2, 60(25)
  0031358  stfs 1, 120(1)
  003135c  stfs 2, 124(1)
  0031360  bt 0, 0x3122c
  0031364  ori 3, 31, 0
  0031368  ori 4, 30, 0
  003136c  ori 5, 26, 0
  0031370  ori 6, 27, 0
  0031374  bl 0x30e90
  0031378  lfs 1, 144(28)
  003137c  lfs 2, 304(28)
  0031380  lfs 3, 148(28)
  0031384  fadds 1, 1, 2
  0031388  lfs 2, 308(28)
  003138c  lfs 4, 152(28)
  0031390  fadds 2, 3, 2
  0031394  lfs 3, 312(28)
  0031398  fadds 3, 4, 3
  003139c  lfs 4, 156(28)
  00313a0  lhz 4, 520(28)
  00313a4  stfs 4, 508(28)
  00313a8  cmpwi 4, 2
  00313ac  stfs 1, 496(28)
  00313b0  stfs 2, 500(28)
  00313b4  stfs 3, 504(28)
  00313b8  bf 2, 0x313c0
  00313bc  sth 29, 520(28)
  00313c0  ld 0, 272(1)
  00313c4  mtlr 0
  00313c8  lfd 26, 208(1)
  00313cc  lfd 27, 216(1)
  00313d0  lfd 28, 224(1)
  00313d4  lfd 29, 232(1)
  00313d8  lfd 30, 240(1)
  00313dc  lfd 31, 248(1)
  00313e0  ld 22, 128(1)
  00313e4  ld 23, 136(1)
  00313e8  ld 24, 144(1)
  00313ec  ld 25, 152(1)
  00313f0  ld 26, 160(1)
  00313f4  ld 27, 168(1)
  00313f8  ld 28, 176(1)
  00313fc  ld 29, 184(1)
  0031400  ld 30, 192(1)
  0031404  ld 31, 200(1)
  0031408  addi 1, 1, 256
  003140c  blr

PushCamInAvoidEnv:   # 0x31410, 0x8 bytes
  0031410  li 3, 0
  0031414  blr

GetPushVec_0:   # 0x31420, 0x160 bytes
  0031420  stdu 1, -80(1)
  0031424  stfd 29, 56(1)
  0031428  stfd 30, 64(1)
  003142c  stfd 31, 72(1)
  0031430  lfs 3, 4(5)
  0031434  lfs 4, 4(6)
  0031438  lfs 5, 0(5)
  003143c  fsubs 4, 3, 4
  0031440  lfs 6, 0(6)
  0031444  lfs 7, 8(5)
  0031448  fsubs 6, 5, 6
  003144c  lfs 8, 8(6)
  0031450  fsubs 8, 7, 8
  0031454  fmuls 9, 4, 4
  0031458  lis 6, 3
  003145c  addi 6, 6, 5144
  0031460  fmadds 9, 6, 6, 9
  0031464  lfs 10, 0(6)
  0031468  lwz 3, 112(3)
  003146c  fmadds 9, 8, 8, 9
  0031470  fsqrts 9, 9
  0031474  fdivs 1, 1, 9
  0031478  fsub 11, 10, 9
  003147c  fsub 12, 10, 9
  0031480  fsub 13, 10, 9
  0031484  fsub 0, 9, 10
  0031488  fsub 31, 9, 10
  003148c  fsub 9, 9, 10
  0031490  fmuls 8, 8, 1
  0031494  fmuls 4, 4, 1
  0031498  fmuls 1, 6, 1
  003149c  fsel 6, 11, 10, 8
  00314a0  fsel 11, 12, 10, 4
  00314a4  fsel 12, 13, 10, 1
  00314a8  fsel 6, 0, 6, 8
  00314ac  fsel 4, 31, 11, 4
  00314b0  fsel 1, 9, 12, 1
  00314b4  fadds 6, 7, 6
  00314b8  fadds 3, 3, 4
  00314bc  fadds 1, 5, 1
  00314c0  stfs 6, 8(5)
  00314c4  stfs 3, 4(5)
  00314c8  stfs 1, 0(5)
  00314cc  lfs 4, 148(3)
  00314d0  lfs 5, 144(3)
  00314d4  fsubs 3, 3, 4
  00314d8  fsubs 1, 1, 5
  00314dc  lfs 7, 152(3)
  00314e0  fsubs 6, 6, 7
  00314e4  lfs 9, 0(7)
  00314e8  lfs 11, 156(3)
  00314ec  fmuls 8, 3, 3
  00314f0  lfs 12, 4(7)
  00314f4  lfs 13, 8(7)
  00314f8  stfs 11, 12(4)
  00314fc  fmadds 8, 1, 1, 8
  0031500  fmadds 8, 6, 6, 8
  0031504  fsqrts 8, 8
  0031508  fdivs 2, 2, 8
  003150c  fsub 11, 10, 8
  0031510  fsub 0, 10, 8
  0031514  fsub 31, 10, 8
  0031518  fsub 30, 8, 10
  003151c  fsub 29, 8, 10
  0031520  fsub 8, 8, 10
  0031524  fmuls 6, 6, 2
  0031528  fmuls 3, 3, 2
  003152c  fmuls 1, 1, 2
  0031530  fsel 2, 11, 10, 6
  0031534  fsel 11, 0, 10, 3
  0031538  fsel 10, 31, 10, 1
  003153c  fsel 2, 30, 2, 6
  0031540  fsel 3, 29, 11, 3
  0031544  fsel 1, 8, 10, 1
  0031548  fadds 2, 7, 2
  003154c  fadds 3, 4, 3
  0031550  fadds 1, 5, 1
  0031554  fsubs 2, 2, 13
  0031558  fsubs 3, 3, 12
  003155c  fsubs 1, 1, 9
  0031560  stfs 2, 8(4)
  0031564  stfs 3, 4(4)
  0031568  stfs 1, 0(4)
  003156c  lfd 29, 56(1)
  0031570  lfd 30, 64(1)
  0031574  lfd 31, 72(1)
  0031578  addi 1, 1, 80
  003157c  blr

UpdateSegmentPush_0:   # 0x31590, 0x554 bytes
  0031590  stdu 1, -352(1)
  0031594  mflr 0
  0031598  std 0, 368(1)
  003159c  stfd 23, 280(1)
  00315a0  stfd 24, 288(1)
  00315a4  stfd 25, 296(1)
  00315a8  stfd 26, 304(1)
  00315ac  stfd 27, 312(1)
  00315b0  stfd 28, 320(1)
  00315b4  stfd 29, 328(1)
  00315b8  stfd 30, 336(1)
  00315bc  stfd 31, 344(1)
  00315c0  lis 5, 149
  00315c4  std 29, 256(1)
  00315c8  lis 6, 3
  00315cc  addic 5, 5, 5056
  00315d0  std 30, 264(1)
  00315d4  std 25, 224(1)
  00315d8  addi 29, 6, 5504
  00315dc  ori 30, 3, 0
  00315e0  std 31, 272(1)
  00315e4  li 25, 0
  00315e8  ori 31, 4, 0
  00315ec  std 28, 248(1)
  00315f0  lwz 3, 384(5)
  00315f4  lis 28, 161
  00315f8  std 24, 216(1)
  00315fc  lfs 3, 0(29)
  0031600  lis 24, 114
  0031604  addic 28, 28, 2368
  0031608  fmr 31, 1
  003160c  fmr 27, 2
  0031610  std 26, 232(1)
  0031614  lwz 3, 112(3)
  0031618  lwz 26, 112(30)
  003161c  lfs 29, 4(29)
  0031620  lfs 4, 532(3)
  0031624  lfs 5, 524(3)
  0031628  lfs 6, 528(3)
  003162c  stw 25, 124(1)
  0031630  stw 25, 120(1)
  0031634  fmuls 28, 4, 5
  0031638  stw 25, 116(1)
  003163c  stw 25, 112(1)
  0031640  lfs 7, 0(31)
  0031644  fsubs 2, 6, 3
  0031648  stfs 7, 128(1)
  003164c  lfs 7, 4(31)
  0031650  stfs 7, 132(1)
  0031654  lfs 7, 8(31)
  0031658  lfs 8, 32(28)
  003165c  stfs 7, 136(1)
  0031660  lfs 7, 12(31)
  0031664  lfs 9, 36(28)
  0031668  stfs 7, 140(1)
  003166c  stfs 8, 144(1)
  0031670  lfs 7, 40(28)
  0031674  stfs 9, 148(1)
  0031678  lfs 8, 44(28)
  003167c  stfs 7, 152(1)
  0031680  stfs 8, 156(1)
  0031684  lfs 7, 144(26)
  0031688  lfs 8, 304(26)
  003168c  lfs 1, -11080(24)
  0031690  fadds 4, 7, 8
  0031694  lfs 23, 48(28)
  0031698  std 27, 240(1)
  003169c  fmadds 28, 28, 2, 1
  00316a0  addic 27, 26, 144
  00316a4  addic 3, 1, 176
  00316a8  fmr 1, 29
  00316ac  addic 4, 1, 144
  00316b0  addic 6, 1, 160
  00316b4  ori 5, 27, 0
  00316b8  stfs 4, 160(1)
  00316bc  lfs 3, 148(26)
  00316c0  lfs 4, 308(26)
  00316c4  lfs 24, 52(28)
  00316c8  fadds 3, 3, 4
  00316cc  lfs 25, 56(28)
  00316d0  lfs 26, 60(28)
  00316d4  stfs 3, 164(1)
  00316d8  lfs 2, 152(26)
  00316dc  lfs 3, 312(26)
  00316e0  fadds 2, 2, 3
  00316e4  stfs 2, 168(1)
  00316e8  lfs 2, 156(26)
  00316ec  stfs 2, 172(1)
  00316f0  bl 0x10d408
  00316f4  nop
  00316f8  lfs 2, 148(26)
  00316fc  lfs 3, 180(1)
  0031700  lfs 4, 144(26)
  0031704  fsubs 2, 2, 3
  0031708  lfs 3, 176(1)
  003170c  fsubs 3, 4, 3
  0031710  lfs 4, 152(26)
  0031714  lfs 5, 184(1)
  0031718  fsubs 4, 4, 5
  003171c  fmuls 2, 2, 2
  0031720  fmadds 2, 3, 3, 2
  0031724  lfs 3, 348(26)
  0031728  fmadds 2, 4, 4, 2
  003172c  fsqrts 4, 2
  0031730  lfs 2, 512(26)
  0031734  lfs 5, -11080(24)
  0031738  lfs 30, 8(29)
  003173c  fsubs 3, 3, 2
  0031740  fmr 2, 1
  0031744  fsubs 6, 28, 5
  0031748  fdivs 1, 4, 3
  003174c  fmadds 1, 6, 1, 5
  0031750  fmuls 1, 1, 30
  0031754  fcmpu 0, 2, 1
  0031758  cror 6, 1, 2
  003175c  bt 6, 0x31a54
  0031760  fsubs 1, 1, 2
  0031764  addic 4, 1, 112
  0031768  fmr 2, 31
  003176c  li 25, 1
  0031770  addic 7, 1, 128
  0031774  addic 5, 1, 176
  0031778  addic 6, 1, 144
  003177c  ori 3, 30, 0
  0031780  bl 0x31420
  0031784  lis 4, 149
  0031788  lis 29, 151
  003178c  stfs 23, 0(31)
  0031790  stfs 24, 4(31)
  0031794  ori 3, 31, 0
  0031798  addic 29, 29, -25376
  003179c  stfs 25, 8(31)
  00317a0  stfs 26, 12(31)
  00317a4  fmr 1, 27
  00317a8  lwz 5, 16520(4)
  00317ac  extsw 5, 5
  00317b0  lwz 6, 8320(29)
  00317b4  bl 0x59e20
  00317b8  nop
  00317bc  cmpwi 3, 0
  00317c0  bt 2, 0x31a54
  00317c4  lfs 1, 128(1)
  00317c8  lfs 2, 0(31)
  00317cc  addic 3, 1, 176
  00317d0  lfs 3, 132(1)
  00317d4  addic 4, 1, 144
  00317d8  lfs 4, 4(31)
  00317dc  fsubs 1, 1, 2
  00317e0  lfs 2, 136(1)
  00317e4  addic 6, 1, 160
  00317e8  lfs 5, 8(31)
  00317ec  fsubs 3, 3, 4
  00317f0  lfs 4, 32(28)
  00317f4  ori 5, 27, 0
  00317f8  fsubs 2, 2, 5
  00317fc  lfs 5, 36(28)
  0031800  lfs 6, 40(28)
  0031804  fadds 4, 4, 1
  0031808  lfs 1, 44(28)
  003180c  fadds 3, 5, 3
  0031810  stfs 1, 156(1)
  0031814  fadds 2, 6, 2
  0031818  fmr 1, 29
  003181c  stfs 4, 144(1)
  0031820  stfs 3, 148(1)
  0031824  stfs 2, 152(1)
  0031828  bl 0x10d408
  003182c  nop
  0031830  lfs 2, 148(26)
  0031834  lfs 3, 180(1)
  0031838  lfs 4, 144(26)
  003183c  fsubs 2, 2, 3
  0031840  lfs 3, 176(1)
  0031844  fsubs 3, 4, 3
  0031848  lfs 4, 152(26)
  003184c  lfs 5, 184(1)
  0031850  fsubs 4, 4, 5
  0031854  fmuls 2, 2, 2
  0031858  lis 3, 114
  003185c  fmadds 2, 3, 3, 2
  0031860  fmadds 2, 4, 4, 2
  0031864  fsqrts 3, 2
  0031868  lfs 2, 348(26)
  003186c  lfs 4, 512(26)
  0031870  lfs 5, -11080(3)
  0031874  fsubs 4, 2, 4
  0031878  fmr 2, 1
  003187c  fsubs 6, 28, 5
  0031880  fdivs 1, 3, 4
  0031884  fmadds 1, 6, 1, 5
  0031888  fmuls 1, 1, 30
  003188c  fcmpu 0, 2, 1
  0031890  cror 6, 1, 2
  0031894  bt 6, 0x31a54
  0031898  fsubs 1, 1, 2
  003189c  addic 4, 1, 192
  00318a0  addic 5, 1, 176
  00318a4  fmr 2, 31
  00318a8  addic 6, 1, 144
  00318ac  addic 7, 1, 128
  00318b0  ori 3, 30, 0
  00318b4  bl 0x31420
  00318b8  lfs 1, 112(1)
  00318bc  lfs 2, 192(1)
  00318c0  lis 4, 149
  00318c4  lfs 3, 116(1)
  00318c8  ori 3, 31, 0
  00318cc  fadds 2, 1, 2
  00318d0  lfs 1, 196(1)
  00318d4  lfs 4, 120(1)
  00318d8  fadds 3, 3, 1
  00318dc  lfs 1, 200(1)
  00318e0  lfs 5, 48(28)
  00318e4  fadds 4, 4, 1
  00318e8  fmr 1, 27
  00318ec  stfs 2, 112(1)
  00318f0  stfs 3, 116(1)
  00318f4  stfs 4, 120(1)
  00318f8  stfs 5, 0(31)
  00318fc  lfs 2, 52(28)
  0031900  stfs 2, 4(31)
  0031904  lfs 2, 56(28)
  0031908  stfs 2, 8(31)
  003190c  lfs 2, 60(28)
  0031910  stfs 2, 12(31)
  0031914  lwz 5, 16520(4)
  0031918  lwz 6, 8320(29)
  003191c  extsw 5, 5
  0031920  bl 0x59e20
  0031924  nop
  0031928  cmpwi 3, 0
  003192c  bt 2, 0x31a54
  0031930  lfs 1, 128(1)
  0031934  lfs 2, 0(31)
  0031938  addic 3, 1, 176
  003193c  lfs 3, 132(1)
  0031940  addic 4, 1, 144
  0031944  lfs 4, 4(31)
  0031948  fsubs 1, 1, 2
  003194c  lfs 2, 136(1)
  0031950  addic 6, 1, 160
  0031954  lfs 5, 8(31)
  0031958  fsubs 3, 3, 4
  003195c  lfs 4, 32(28)
  0031960  ori 5, 27, 0
  0031964  fsubs 2, 2, 5
  0031968  lfs 5, 36(28)
  003196c  lfs 6, 40(28)
  0031970  fadds 4, 4, 1
  0031974  lfs 1, 44(28)
  0031978  fadds 3, 5, 3
  003197c  stfs 1, 156(1)
  0031980  fadds 2, 6, 2
  0031984  fmr 1, 29
  0031988  stfs 4, 144(1)
  003198c  stfs 3, 148(1)
  0031990  stfs 2, 152(1)
  0031994  bl 0x10d408
  0031998  nop
  003199c  lfs 2, 148(26)
  00319a0  lfs 3, 180(1)
  00319a4  lfs 4, 144(26)
  00319a8  fsubs 2, 2, 3
  00319ac  lfs 3, 176(1)
  00319b0  fsubs 3, 4, 3
  00319b4  lfs 4, 152(26)
  00319b8  lfs 5, 184(1)
  00319bc  fsubs 4, 4, 5
  00319c0  fmuls 2, 2, 2
  00319c4  fmr 29, 1
  00319c8  lis 3, 114
  00319cc  fmadds 2, 3, 3, 2
  00319d0  lfs 3, 348(26)
  00319d4  fmadds 2, 4, 4, 2
  00319d8  lfs 4, 512(26)
  00319dc  fsubs 3, 3, 4
  00319e0  lfs 5, -11080(3)
  00319e4  fsubs 4, 28, 5
  00319e8  fsqrts 2, 2
  00319ec  fdivs 1, 2, 3
  00319f0  fmadds 28, 4, 1, 5
  00319f4  fmuls 28, 28, 30
  00319f8  fcmpu 0, 29, 28
  00319fc  cror 6, 1, 2
  0031a00  bt 6, 0x31a54
  0031a04  fsubs 1, 28, 29
  0031a08  addic 5, 1, 176
  0031a0c  addic 6, 1, 144
  0031a10  fmr 2, 31
  0031a14  addic 7, 1, 128
  0031a18  addic 4, 1, 192
  0031a1c  ori 3, 30, 0
  0031a20  bl 0x31420
  0031a24  lfs 1, 112(1)
  0031a28  lfs 2, 192(1)
  0031a2c  lfs 3, 116(1)
  0031a30  fadds 1, 1, 2
  0031a34  lfs 2, 196(1)
  0031a38  lfs 4, 120(1)
  0031a3c  fadds 2, 3, 2
  0031a40  lfs 3, 200(1)
  0031a44  fadds 3, 4, 3
  0031a48  stfs 1, 112(1)
  0031a4c  stfs 2, 116(1)
  0031a50  stfs 3, 120(1)
  0031a54  lfs 1, 128(1)
  0031a58  lfs 2, 112(1)
  0031a5c  ori 3, 25, 0
  0031a60  lfs 3, 132(1)
  0031a64  fadds 1, 1, 2
  0031a68  lfs 2, 116(1)
  0031a6c  lfs 4, 136(1)
  0031a70  fadds 2, 3, 2
  0031a74  lfs 3, 120(1)
  0031a78  fadds 3, 4, 3
  0031a7c  lfs 4, 140(1)
  0031a80  stfs 4, 12(31)
  0031a84  stfs 1, 0(31)
  0031a88  stfs 2, 4(31)
  0031a8c  stfs 3, 8(31)
  0031a90  ld 0, 368(1)
  0031a94  mtlr 0
  0031a98  lfd 23, 280(1)
  0031a9c  lfd 24, 288(1)
  0031aa0  lfd 25, 296(1)
  0031aa4  lfd 26, 304(1)
  0031aa8  lfd 27, 312(1)
  0031aac  lfd 28, 320(1)
  0031ab0  lfd 29, 328(1)
  0031ab4  lfd 30, 336(1)
  0031ab8  lfd 31, 344(1)
  0031abc  ld 24, 216(1)
  0031ac0  ld 25, 224(1)
  0031ac4  ld 26, 232(1)
  0031ac8  ld 27, 240(1)
  0031acc  ld 28, 248(1)
  0031ad0  ld 29, 256(1)
  0031ad4  ld 30, 264(1)
  0031ad8  ld 31, 272(1)
  0031adc  addi 1, 1, 352
  0031ae0  blr

ExceptionColl:   # 0x31ae8, 0x78 bytes
  0031ae8  cmpwi 4, 1
  0031aec  bf 2, 0x31b58
  0031af0  lis 4, 161
  0031af4  lfs 1, 4(5)
  0031af8  lwz 3, 112(3)
  0031afc  addic 4, 4, 2368
  0031b00  lfs 2, 36(4)
  0031b04  lfs 3, 32(4)
  0031b08  fsubs 1, 2, 1
  0031b0c  lfs 2, 0(5)
  0031b10  fsubs 2, 3, 2
  0031b14  lfs 3, 308(3)
  0031b18  lfs 4, 40(4)
  0031b1c  lfs 5, 8(5)
  0031b20  lfs 6, 304(3)
  0031b24  lis 4, 3
  0031b28  fsubs 4, 4, 5
  0031b2c  lfs 5, 312(3)
  0031b30  fmuls 1, 1, 3
  0031b34  addi 4, 4, 6884
  0031b38  lfs 3, 0(4)
  0031b3c  fmadds 1, 2, 6, 1
  0031b40  fmadds 1, 4, 5, 1
  0031b44  fcmpu 0, 1, 3
  0031b48  cror 6, 1, 2
  0031b4c  bt 6, 0x31b58
  0031b50  li 3, 1
  0031b54  b 0x31b5c
  0031b58  li 3, 0
  0031b5c  blr

UpdateSegmentColl_0:   # 0x31b78, 0x554 bytes
  0031b78  stdu 1, -320(1)
  0031b7c  mflr 0
  0031b80  std 0, 336(1)
  0031b84  stfd 17, 200(1)
  0031b88  stfd 18, 208(1)
  0031b8c  stfd 19, 216(1)
  0031b90  stfd 20, 224(1)
  0031b94  stfd 21, 232(1)
  0031b98  stfd 22, 240(1)
  0031b9c  stfd 23, 248(1)
  0031ba0  stfd 24, 256(1)
  0031ba4  stfd 25, 264(1)
  0031ba8  stfd 26, 272(1)
  0031bac  stfd 27, 280(1)
  0031bb0  stfd 28, 288(1)
  0031bb4  stfd 29, 296(1)
  0031bb8  stfd 30, 304(1)
  0031bbc  stfd 31, 312(1)
  0031bc0  std 28, 168(1)
  0031bc4  addi 0, 1, 128
  0031bc8  stvx 31, 0, 0
  0031bcc  lwz 28, 112(3)
  0031bd0  lis 4, 3
  0031bd4  addi 4, 4, 7008
  0031bd8  lfs 3, 308(28)
  0031bdc  lfs 2, 304(28)
  0031be0  fmuls 1, 3, 3
  0031be4  lfs 4, 312(28)
  0031be8  std 31, 192(1)
  0031bec  lfs 31, 0(4)
  0031bf0  ori 31, 3, 0
  0031bf4  fmr 26, 31
  0031bf8  lfs 6, 144(28)
  0031bfc  lis 4, 114
  0031c00  stfs 6, 112(1)
  0031c04  lfs 6, 148(28)
  0031c08  fmadds 1, 2, 2, 1
  0031c0c  stfs 6, 116(1)
  0031c10  fmr 27, 26
  0031c14  lfs 6, 152(28)
  0031c18  lfs 30, -11080(4)
  0031c1c  stfs 6, 120(1)
  0031c20  fmadds 1, 4, 4, 1
  0031c24  lfs 6, 156(28)
  0031c28  fmr 28, 27
  0031c2c  stfs 6, 124(1)
  0031c30  fsqrts 5, 1
  0031c34  fmr 29, 28
  0031c38  std 30, 184(1)
  0031c3c  std 29, 176(1)
  0031c40  std 27, 160(1)
  0031c44  std 26, 152(1)
  0031c48  std 25, 144(1)
  0031c4c  fcmpu 0, 5, 29
  0031c50  bt 2, 0x31ca4
  0031c54  frsqrte 5, 1
  0031c58  lis 3, 3
  0031c5c  addi 3, 3, 7008
  0031c60  lfs 6, 4(3)
  0031c64  lfs 7, 8(3)
  0031c68  fmuls 8, 1, 5
  0031c6c  fmuls 9, 6, 5
  0031c70  fnmsubs 8, 8, 5, 7
  0031c74  fmadds 5, 8, 9, 5
  0031c78  fmuls 8, 1, 5
  0031c7c  fmuls 9, 6, 5
  0031c80  fnmsubs 8, 8, 5, 7
  0031c84  fmadds 5, 8, 9, 5
  0031c88  fmuls 1, 1, 5
  0031c8c  fmuls 6, 6, 5
  0031c90  fnmsubs 1, 1, 5, 7
  0031c94  fmadds 27, 1, 6, 5
  0031c98  fmuls 29, 2, 27
  0031c9c  fmuls 28, 3, 27
  0031ca0  fmuls 27, 4, 27
  0031ca4  lis 3, 3
  0031ca8  li 4, 16
  0031cac  addi 3, 3, 7008
  0031cb0  li 29, 0
  0031cb4  lis 27, 151
  0031cb8  lis 26, 161
  0031cbc  lis 25, 149
  0031cc0  lfs 25, 8(3)
  0031cc4  ori 30, 29, 0
  0031cc8  lfs 24, 4(3)
  0031ccc  addic 27, 27, -25376
  0031cd0  lfs 23, 12(3)
  0031cd4  addic 26, 26, 2368
  0031cd8  <unknown>
  0031cdc  addic 25, 25, 5056
  0031ce0  vspltw 31, 31, 0
  0031ce4  lfs 1, 528(28)
  0031ce8  fsubs 1, 1, 25
  0031cec  bl 0x502758
  0031cf0  nop
  0031cf4  cmpw 29, 3
  0031cf8  bf 0, 0x32058
  0031cfc  cmpwi 29, 0
  0031d00  bf 1, 0x32004
  0031d04  lfs 2, 112(1)
  0031d08  lfs 3, 120(1)
  0031d0c  fmr 1, 26
  0031d10  stfs 2, 48(1)
  0031d14  stfs 3, 56(1)
  0031d18  lfs 2, 116(1)
  0031d1c  lfs 3, 124(1)
  0031d20  stfs 2, 52(1)
  0031d24  stfs 3, 60(1)
  0031d28  ld 3, 48(1)
  0031d2c  ld 4, 56(1)
  0031d30  bl 0x558f8
  0031d34  nop
  0031d38  lis 5, 149
  0031d3c  lwz 4, 8320(27)
  0031d40  cmpwi 3, 0
  0031d44  lwz 3, 16520(5)
  0031d48  bf 2, 0x32004
  0031d4c  extsw 5, 3
  0031d50  addic 3, 1, 112
  0031d54  fmr 1, 30
  0031d58  ori 6, 4, 0
  0031d5c  bl 0x59e20
  0031d60  nop
  0031d64  cmpwi 3, 0
  0031d68  bt 2, 0x32004
  0031d6c  lfs 22, 112(1)
  0031d70  lfs 21, 116(1)
  0031d74  cmpwi 29, 1
  0031d78  lfs 20, 120(1)
  0031d7c  lfs 19, 32(26)
  0031d80  lfs 18, 36(26)
  0031d84  lfs 17, 40(26)
  0031d88  bf 2, 0x31dbc
  0031d8c  fsubs 1, 18, 21
  0031d90  lwz 3, 112(31)
  0031d94  fsubs 2, 19, 22
  0031d98  fsubs 3, 17, 20
  0031d9c  lfs 4, 308(3)
  0031da0  lfs 5, 304(3)
  0031da4  fmuls 1, 1, 4
  0031da8  lfs 4, 312(3)
  0031dac  fmadds 1, 2, 5, 1
  0031db0  fmadds 1, 3, 4, 1
  0031db4  fcmpu 0, 1, 26
  0031db8  bt 0, 0x32004
  0031dbc  addic 4, 1, 112
  0031dc0  ori 5, 29, 0
  0031dc4  fmr 1, 31
  0031dc8  ori 3, 31, 0
  0031dcc  fmr 2, 30
  0031dd0  bl 0x31590
  0031dd4  lis 4, 114
  0031dd8  lfs 1, 448(25)
  0031ddc  li 5, -3056
  0031de0  lfs 2, 452(25)
  0031de4  lfs 3, 456(25)
  0031de8  cmpwi 3, 0
  0031dec  <unknown>
  0031df0  bt 2, 0x32004
  0031df4  lbz 3, 8356(27)
  0031df8  li 30, 1
  0031dfc  cmpwi 3, 2
  0031e00  bt 2, 0x31f08
  0031e04  lis 3, 150
  0031e08  lis 4, 15692
  0031e0c  ori 4, 4, 52429
  0031e10  lwz 3, 19008(3)
  0031e14  clrlwi 3, 3, 1
  0031e18  cmpw 3, 4
  0031e1c  bf 1, 0x31f08
  0031e20  fsubs 8, 18, 21
  0031e24  fsubs 7, 19, 22
  0031e28  fsubs 9, 17, 20
  0031e2c  fmr 5, 26
  0031e30  fmuls 4, 8, 8
  0031e34  fmadds 6, 7, 7, 4
  0031e38  fmr 4, 5
  0031e3c  fmadds 6, 9, 9, 6
  0031e40  fmr 22, 4
  0031e44  fsqrts 10, 6
  0031e48  fcmpu 0, 10, 22
  0031e4c  bt 2, 0x31e90
  0031e50  frsqrte 4, 6
  0031e54  fmuls 5, 6, 4
  0031e58  fmuls 10, 24, 4
  0031e5c  fnmsubs 5, 5, 4, 25
  0031e60  fmadds 4, 5, 10, 4
  0031e64  fmuls 5, 6, 4
  0031e68  fmuls 10, 24, 4
  0031e6c  fnmsubs 5, 5, 4, 25
  0031e70  fmadds 4, 5, 10, 4
  0031e74  fmuls 5, 6, 4
  0031e78  fmuls 6, 24, 4
  0031e7c  fnmsubs 5, 5, 4, 25
  0031e80  fmadds 5, 5, 6, 4
  0031e84  fmuls 22, 7, 5
  0031e88  fmuls 4, 8, 5
  0031e8c  fmuls 5, 9, 5
  0031e90  fmuls 2, 2, 4
  0031e94  fmadds 1, 1, 22, 2
  0031e98  fmadds 1, 3, 5, 1
  0031e9c  fabs 1, 1
  0031ea0  fcmpu 0, 1, 23
  0031ea4  cror 6, 1, 2
  0031ea8  bt 6, 0x31f08
  0031eac  vspltisw 3, -1
  0031eb0  lis 3, 114
  0031eb4  lis 4, 114
  0031eb8  lfs 1, 512(28)
  0031ebc  vslw 3, 3, 3
  0031ec0  lfs 2, -11112(3)
  0031ec4  lfs 3, -3064(4)
  0031ec8  li 3, 516
  0031ecc  lis 4, 114
  0031ed0  vmaddfp 2, 2, 31, 3
  0031ed4  fmadds 2, 2, 3, 1
  0031ed8  lfs 1, 348(28)
  0031edc  fsubs 3, 1, 2
  0031ee0  vctsxs 2, 2, 0
  0031ee4  vsplth 2, 2, 1
  0031ee8  stvehx 2, 3, 28
  0031eec  stfs 2, 512(28)
  0031ef0  lfs 2, -11096(4)
  0031ef4  fcmpu 0, 3, 2
  0031ef8  cror 6, 1, 2
  0031efc  bt 6, 0x31f08
  0031f00  fsubs 1, 1, 2
  0031f04  stfs 1, 512(28)
  0031f08  lfs 1, 116(1)
  0031f0c  lfs 2, 148(28)
  0031f10  lfs 3, 112(1)
  0031f14  fsubs 1, 1, 2
  0031f18  lfs 2, 144(28)
  0031f1c  fsubs 2, 3, 2
  0031f20  lfs 3, 120(1)
  0031f24  lfs 4, 152(28)
  0031f28  fsubs 3, 3, 4
  0031f2c  fmuls 4, 1, 1
  0031f30  lfs 5, 348(28)
  0031f34  lfs 6, 512(28)
  0031f38  fsubs 5, 5, 6
  0031f3c  lfs 6, 124(1)
  0031f40  fmadds 4, 2, 2, 4
  0031f44  stfs 6, 316(28)
  0031f48  fmadds 4, 3, 3, 4
  0031f4c  fsqrts 4, 4
  0031f50  fdivs 5, 5, 4
  0031f54  fsub 6, 26, 4
  0031f58  fsub 7, 26, 4
  0031f5c  fsub 28, 4, 26
  0031f60  fsub 8, 4, 26
  0031f64  fsub 9, 26, 4
  0031f68  fsub 27, 4, 26
  0031f6c  fmuls 1, 1, 5
  0031f70  fmuls 2, 2, 5
  0031f74  fmuls 3, 3, 5
  0031f78  fsel 4, 6, 26, 1
  0031f7c  fsel 5, 7, 26, 2
  0031f80  fsel 6, 9, 26, 3
  0031f84  fsel 28, 28, 4, 1
  0031f88  fsel 1, 8, 5, 2
  0031f8c  fsel 27, 27, 6, 3
  0031f90  fmuls 2, 28, 28
  0031f94  stfs 1, 304(28)
  0031f98  stfs 28, 308(28)
  0031f9c  stfs 27, 312(28)
  0031fa0  fmadds 29, 1, 1, 2
  0031fa4  fmadds 29, 27, 27, 29
  0031fa8  fsqrts 2, 29
  0031fac  fcmpu 0, 2, 26
  0031fb0  bf 2, 0x31fc4
  0031fb4  fmr 27, 26
  0031fb8  fmr 28, 27
  0031fbc  fmr 29, 28
  0031fc0  b 0x32004
  0031fc4  frsqrte 2, 29
  0031fc8  fmuls 3, 29, 2
  0031fcc  fmuls 4, 24, 2
  0031fd0  fnmsubs 3, 3, 2, 25
  0031fd4  fmadds 2, 3, 4, 2
  0031fd8  fmuls 3, 29, 2
  0031fdc  fmuls 4, 24, 2
  0031fe0  fnmsubs 3, 3, 2, 25
  0031fe4  fmadds 2, 3, 4, 2
  0031fe8  fmuls 3, 29, 2
  0031fec  fmuls 4, 24, 2
  0031ff0  fnmsubs 3, 3, 2, 25
  0031ff4  fmadds 2, 3, 4, 2
  0031ff8  fmuls 29, 1, 2
  0031ffc  fmuls 28, 28, 2
  0032000  fmuls 27, 27, 2
  0032004  lfs 1, 348(28)
  0032008  lfs 2, 512(28)
  003200c  fsubs 2, 1, 2
  0032010  lfs 3, 532(28)
  0032014  lfs 4, 524(28)
  0032018  addic 29, 29, 1
  003201c  fmadds 30, 3, 4, 30
  0032020  extsw 29, 29
  0032024  fdivs 1, 2, 1
  0032028  lfs 2, 112(1)
  003202c  lfs 5, 116(1)
  0032030  lfs 6, 120(1)
  0032034  fadds 31, 31, 30
  0032038  fmuls 1, 1, 30
  003203c  fmadds 2, 1, 29, 2
  0032040  fmadds 3, 1, 28, 5
  0032044  fmadds 1, 1, 27, 6
  0032048  stfs 2, 112(1)
  003204c  stfs 3, 116(1)
  0032050  stfs 1, 120(1)
  0032054  b 0x31ce4
  0032058  ori 3, 30, 0
  003205c  li 0, 128
  0032060  lvx 31, 1, 0
  0032064  ld 0, 336(1)
  0032068  mtlr 0
  003206c  lfd 17, 200(1)
  0032070  lfd 18, 208(1)
  0032074  lfd 19, 216(1)
  0032078  lfd 20, 224(1)
  003207c  lfd 21, 232(1)
  0032080  lfd 22, 240(1)
  0032084  lfd 23, 248(1)
  0032088  lfd 24, 256(1)
  003208c  lfd 25, 264(1)
  0032090  lfd 26, 272(1)
  0032094  lfd 27, 280(1)
  0032098  lfd 28, 288(1)
  003209c  lfd 29, 296(1)
  00320a0  lfd 30, 304(1)
  00320a4  lfd 31, 312(1)
  00320a8  ld 25, 144(1)
  00320ac  ld 26, 152(1)
  00320b0  ld 27, 160(1)
  00320b4  ld 28, 168(1)
  00320b8  ld 29, 176(1)
  00320bc  ld 30, 184(1)
  00320c0  ld 31, 192(1)
  00320c4  addi 1, 1, 320
  00320c8  blr

UpdateCamCollisions_0:   # 0x32100, 0xacc bytes
  0032100  stdu 1, -464(1)
  0032104  mflr 0
  0032108  std 0, 480(1)
  003210c  stfd 20, 368(1)
  0032110  stfd 21, 376(1)
  0032114  stfd 22, 384(1)
  0032118  stfd 23, 392(1)
  003211c  stfd 24, 400(1)
  0032120  stfd 25, 408(1)
  0032124  stfd 26, 416(1)
  0032128  stfd 27, 424(1)
  003212c  stfd 28, 432(1)
  0032130  stfd 29, 440(1)
  0032134  stfd 30, 448(1)
  0032138  stfd 31, 456(1)
  003213c  std 22, 288(1)
  0032140  lis 4, 3
  0032144  std 29, 344(1)
  0032148  lwz 22, 112(3)
  003214c  lis 29, 149
  0032150  addi 4, 4, 8396
  0032154  std 28, 336(1)
  0032158  lis 5, 151
  003215c  addic 29, 29, 5056
  0032160  std 30, 352(1)
  0032164  li 28, 0
  0032168  addic 30, 22, 304
  003216c  lfs 1, 0(4)
  0032170  std 19, 264(1)
  0032174  lfs 2, 348(22)
  0032178  ori 19, 28, 0
  003217c  std 31, 360(1)
  0032180  lfs 3, 512(22)
  0032184  ori 31, 3, 0
  0032188  std 27, 328(1)
  003218c  lwz 4, -25488(5)
  0032190  ori 27, 19, 0
  0032194  fsubs 7, 2, 3
  0032198  lfs 31, 320(29)
  003219c  lfs 2, 144(22)
  00321a0  cmpwi 4, 15
  00321a4  std 26, 320(1)
  00321a8  lfs 3, 324(29)
  00321ac  ori 26, 27, 0
  00321b0  lfs 4, 148(22)
  00321b4  lfs 5, 328(29)
  00321b8  lfs 6, 152(22)
  00321bc  fadds 1, 7, 1
  00321c0  std 25, 312(1)
  00321c4  std 24, 304(1)
  00321c8  std 23, 296(1)
  00321cc  std 21, 280(1)
  00321d0  std 20, 272(1)
  00321d4  std 18, 256(1)
  00321d8  std 17, 248(1)
  00321dc  std 16, 240(1)
  00321e0  std 15, 232(1)
  00321e4  lfs 7, 332(29)
  00321e8  bf 2, 0x32204
  00321ec  lis 3, 151
  00321f0  addic 3, 3, -25376
  00321f4  lbz 3, 8356(3)
  00321f8  cmpwi 3, 2
  00321fc  bf 2, 0x32204
  0032200  li 26, 1
  0032204  fsubs 8, 31, 2
  0032208  lis 3, 3
  003220c  lis 20, 151
  0032210  fsubs 3, 3, 4
  0032214  addi 3, 3, 8396
  0032218  fsubs 4, 5, 6
  003221c  addic 20, 20, -25376
  0032220  li 5, 1
  0032224  li 7, 0
  0032228  lfs 31, 4(3)
  003222c  lwz 6, 8320(20)
  0032230  addic 3, 1, 112
  0032234  fmadds 2, 8, 31, 2
  0032238  fmuls 1, 1, 31
  003223c  stfs 2, 112(1)
  0032240  lfs 2, 148(22)
  0032244  fmadds 2, 3, 31, 2
  0032248  stfs 2, 116(1)
  003224c  lfs 2, 152(22)
  0032250  stfs 7, 124(1)
  0032254  fmadds 2, 4, 31, 2
  0032258  stfs 2, 120(1)
  003225c  bl 0x5e598
  0032260  nop
  0032264  ori 25, 3, 0
  0032268  cmpwi 25, 0
  003226c  bf 1, 0x32560
  0032270  cmpwi 25, 0
  0032274  ori 24, 28, 0
  0032278  bf 1, 0x32560
  003227c  lis 3, 3
  0032280  lis 15, 161
  0032284  addi 3, 3, 8396
  0032288  lis 17, 115
  003228c  lis 18, 147
  0032290  ori 21, 28, 0
  0032294  addic 15, 15, 18944
  0032298  lfs 30, 8(3)
  003229c  lfs 29, 12(3)
  00322a0  addic 17, 17, 22720
  00322a4  lfs 28, 16(3)
  00322a8  addic 18, 18, -7540
  00322ac  lfs 27, 20(3)
  00322b0  addic 16, 29, 432
  00322b4  lfs 26, 24(3)
  00322b8  lfs 25, 28(3)
  00322bc  lfs 24, 32(3)
  00322c0  lwz 23, 0(15)
  00322c4  lwz 3, 148(23)
  00322c8  cmpwi 3, 0
  00322cc  bt 2, 0x32550
  00322d0  ori 3, 23, 0
  00322d4  bl 0x1057cc
  00322d8  nop
  00322dc  lfs 11, 448(29)
  00322e0  lis 4, 115
  00322e4  lfs 12, 452(29)
  00322e8  cmpwi 3, 0
  00322ec  lfs 13, 456(29)
  00322f0  lfs 23, 4(17)
  00322f4  lfs 22, 8(17)
  00322f8  lfs 0, 22720(4)
  00322fc  lfs 21, 12(17)
  0032300  bt 2, 0x3230c
  0032304  cmpwi 26, 0
  0032308  bt 2, 0x32550
  003230c  lhz 3, 166(23)
  0032310  cmpwi 1, 3, 11
  0032314  cmpwi 3, 114
  0032318  cror 2, 2, 6
  003231c  bt 2, 0x32368
  0032320  cmpwi 3, 44
  0032324  bt 2, 0x32368
  0032328  cmpwi 3, 154
  003232c  bt 2, 0x32368
  0032330  cmpwi 3, 255
  0032334  bt 2, 0x32368
  0032338  cmpwi 3, 914
  003233c  bt 2, 0x32368
  0032340  cmpwi 3, 1106
  0032344  bt 2, 0x32368
  0032348  cmpwi 3, 851
  003234c  bt 2, 0x32368
  0032350  extsw 3, 21
  0032354  addic 21, 21, 4
  0032358  addic 27, 27, 1
  003235c  stwx 23, 18, 3
  0032360  stw 28, 148(23)
  0032364  b 0x32550
  0032368  lfs 2, 20(23)
  003236c  lfs 1, 148(22)
  0032370  lfs 3, 16(23)
  0032374  fsubs 2, 2, 1
  0032378  lfs 1, 144(22)
  003237c  fsubs 1, 3, 1
  0032380  lfs 3, 24(23)
  0032384  lfs 4, 152(22)
  0032388  fsubs 3, 3, 4
  003238c  fmuls 4, 12, 2
  0032390  fmadds 4, 11, 1, 4
  0032394  fmadds 8, 13, 3, 4
  0032398  fnmsubs 6, 12, 8, 2
  003239c  fnmsubs 4, 11, 8, 1
  00323a0  fnmsubs 8, 13, 8, 3
  00323a4  fmuls 5, 6, 6
  00323a8  fmadds 10, 4, 4, 5
  00323ac  fmr 5, 30
  00323b0  fmadds 10, 8, 8, 10
  00323b4  fmr 7, 5
  00323b8  fsqrts 20, 10
  00323bc  fmr 9, 7
  00323c0  fcmpu 0, 20, 9
  00323c4  bt 2, 0x32408
  00323c8  frsqrte 5, 10
  00323cc  fmuls 7, 10, 5
  00323d0  fmuls 9, 5, 31
  00323d4  fnmsubs 7, 7, 5, 29
  00323d8  fmadds 5, 7, 9, 5
  00323dc  fmuls 7, 10, 5
  00323e0  fmuls 9, 5, 31
  00323e4  fnmsubs 7, 7, 5, 29
  00323e8  fmadds 5, 7, 9, 5
  00323ec  fmuls 7, 10, 5
  00323f0  fmuls 9, 5, 31
  00323f4  fnmsubs 7, 7, 5, 29
  00323f8  fmadds 9, 7, 9, 5
  00323fc  fmuls 5, 4, 9
  0032400  fmuls 7, 6, 9
  0032404  fmuls 9, 8, 9
  0032408  fmr 8, 5
  003240c  lfs 5, 308(22)
  0032410  lfs 4, 304(22)
  0032414  fmuls 7, 7, 5
  0032418  lfs 6, 312(22)
  003241c  lfs 10, 348(22)
  0032420  lfs 20, 512(22)
  0032424  fsubs 10, 10, 20
  0032428  fmadds 7, 8, 4, 7
  003242c  fmadds 7, 9, 6, 7
  0032430  fdivs 7, 7, 10
  0032434  fabs 8, 7
  0032438  fsub 9, 7, 30
  003243c  fsel 8, 9, 7, 8
  0032440  fsub 7, 7, 30
  0032444  fsubs 9, 29, 8
  0032448  fmuls 10, 8, 8
  003244c  fmadds 0, 8, 23, 0
  0032450  fsel 7, 7, 29, 24
  0032454  fsub 20, 9, 30
  0032458  fmuls 8, 10, 8
  003245c  fmadds 10, 10, 22, 0
  0032460  fsel 9, 20, 9, 30
  0032464  fmadds 8, 8, 21, 10
  0032468  fsqrts 9, 9
  003246c  fnmsubs 8, 8, 9, 28
  0032470  fnmsubs 7, 8, 7, 28
  0032474  fabs 7, 7
  0032478  fcmpu 0, 7, 27
  003247c  cror 6, 1, 2
  0032480  bt 6, 0x32550
  0032484  fmr 7, 5
  0032488  fmuls 5, 11, 6
  003248c  fmuls 9, 12, 4
  0032490  fmuls 8, 13, 7
  0032494  fmsubs 5, 13, 4, 5
  0032498  fmsubs 4, 12, 6, 8
  003249c  fmuls 8, 5, 5
  00324a0  fmsubs 6, 11, 7, 9
  00324a4  fmadds 7, 4, 4, 8
  00324a8  fmr 8, 30
  00324ac  fmadds 7, 6, 6, 7
  00324b0  fmr 9, 8
  00324b4  fsqrts 11, 7
  00324b8  fmr 10, 9
  00324bc  fcmpu 0, 11, 10
  00324c0  bt 2, 0x32504
  00324c4  frsqrte 8, 7
  00324c8  fmuls 9, 7, 8
  00324cc  fmuls 10, 8, 31
  00324d0  fnmsubs 9, 9, 8, 29
  00324d4  fmadds 8, 9, 10, 8
  00324d8  fmuls 9, 7, 8
  00324dc  fmuls 10, 8, 31
  00324e0  fnmsubs 9, 9, 8, 29
  00324e4  fmadds 8, 9, 10, 8
  00324e8  fmuls 7, 7, 8
  00324ec  fmuls 9, 8, 31
  00324f0  fnmsubs 7, 7, 8, 29
  00324f4  fmadds 8, 7, 9, 8
  00324f8  fmuls 10, 4, 8
  00324fc  fmuls 9, 5, 8
  0032500  fmuls 8, 6, 8
  0032504  fmuls 2, 9, 2
  0032508  fmadds 1, 10, 1, 2
  003250c  fmadds 1, 8, 3, 1
  0032510  fcmpu 0, 1, 30
  0032514  cror 6, 0, 2
  0032518  bt 6, 0x32538
  003251c  fmr 1, 26
  0032520  ori 3, 30, 0
  0032524  ori 4, 30, 0
  0032528  ori 5, 16, 0
  003252c  bl 0x1113e0
  0032530  nop
  0032534  b 0x32550
  0032538  ori 3, 30, 0
  003253c  fmr 1, 25
  0032540  ori 4, 30, 0
  0032544  ori 5, 16, 0
  0032548  bl 0x1113e0
  003254c  nop
  0032550  addic 24, 24, 1
  0032554  addic 15, 15, 4
  0032558  cmpw 24, 25
  003255c  bt 0, 0x322c0
  0032560  lwz 3, 8324(20)
  0032564  cmpwi 3, 127
  0032568  cmpwi 1, 3, 123
  003256c  bt 2, 0x32598
  0032570  lis 3, 151
  0032574  lwz 3, -25488(3)
  0032578  cmpwi 3, 13
  003257c  bf 2, 0x32584
  0032580  bt 6, 0x32598
  0032584  ori 3, 31, 0
  0032588  bl 0x31b78
  003258c  cmpwi 3, 0
  0032590  bt 2, 0x32598
  0032594  li 28, 1
  0032598  ori 3, 31, 0
  003259c  bl 0x31410
  00325a0  li 4, 0
  00325a4  li 5, 1
  00325a8  subc 3, 4, 3
  00325ac  subc 4, 28, 5
  00325b0  cntlzw 3, 3
  00325b4  sldi 3, 3, 58
  00325b8  sradi 6, 3, 63
  00325bc  ori 3, 31, 0
  00325c0  and 4, 6, 4
  00325c4  addc 30, 5, 4
  00325c8  bl 0x31128
  00325cc  lfs 30, 512(22)
  00325d0  lfs 2, 348(22)
  00325d4  lis 5, 114
  00325d8  lhz 31, 522(22)
  00325dc  li 4, 0
  00325e0  fsubs 3, 2, 30
  00325e4  subc 3, 4, 3
  00325e8  li 4, 1
  00325ec  lfs 1, -11088(5)
  00325f0  cntlzw 3, 3
  00325f4  subc 5, 30, 4
  00325f8  sldi 3, 3, 58
  00325fc  sradi 3, 3, 63
  0032600  fcmpu 0, 3, 1
  0032604  and 3, 3, 5
  0032608  addc 3, 4, 3
  003260c  cror 6, 1, 2
  0032610  bt 6, 0x32658
  0032614  fsubs 30, 2, 1
  0032618  lis 4, 3
  003261c  vspltisw 2, -1
  0032620  li 6, 36
  0032624  addi 4, 4, 8396
  0032628  lis 5, 114
  003262c  li 7, -3056
  0032630  vslw 2, 2, 2
  0032634  stfs 30, 512(22)
  0032638  <unknown>
  003263c  <unknown>
  0032640  vspltw 3, 3, 0
  0032644  li 4, 516
  0032648  vmaddfp 2, 4, 3, 2
  003264c  vctsxs 2, 2, 0
  0032650  vsplth 2, 2, 1
  0032654  stvehx 2, 4, 22
  0032658  cmpwi 31, 0
  003265c  bf 2, 0x326f8
  0032660  cmpwi 3, 0
  0032664  bf 2, 0x327a8
  0032668  lis 3, 3
  003266c  lis 4, 114
  0032670  addi 3, 3, 8396
  0032674  lfs 1, 36(3)
  0032678  lfs 2, -3056(4)
  003267c  lhz 3, 516(22)
  0032680  fmuls 1, 2, 1
  0032684  extsh 3, 3
  0032688  cmpwi 1, 3, 0
  003268c  fctiwz 1, 1
  0032690  stfd 1, 208(1)
  0032694  lwz 4, 212(1)
  0032698  cmpw 3, 4
  003269c  bf 0, 0x326a4
  00326a0  bt 5, 0x326f8
  00326a4  lis 3, 150
  00326a8  lis 4, 16025
  00326ac  ori 4, 4, 39322
  00326b0  lwz 3, 19008(3)
  00326b4  srawi 5, 3, 31
  00326b8  srwi 6, 5, 1
  00326bc  xor 3, 6, 3
  00326c0  subc 3, 3, 5
  00326c4  cmpw 3, 4
  00326c8  bf 0, 0x327a8
  00326cc  lis 3, 150
  00326d0  lis 4, 16025
  00326d4  addic 3, 3, 19008
  00326d8  ori 4, 4, 39322
  00326dc  lwz 3, 4(3)
  00326e0  srawi 5, 3, 31
  00326e4  srwi 6, 5, 1
  00326e8  xor 3, 6, 3
  00326ec  subc 3, 3, 5
  00326f0  cmpw 3, 4
  00326f4  bf 0, 0x327a8
  00326f8  addic 31, 22, 516
  00326fc  ori 3, 31, 0
  0032700  bl 0x4fffb4
  0032704  nop
  0032708  ori 4, 3, 0
  003270c  lhz 3, 522(22)
  0032710  cmpwi 4, 0
  0032714  bt 2, 0x32720
  0032718  sth 19, 522(22)
  003271c  b 0x32740
  0032720  cmpwi 3, 0
  0032724  bt 2, 0x32740
  0032728  ori 3, 31, 0
  003272c  bl 0x4fffb4
  0032730  nop
  0032734  cmpwi 3, 0
  0032738  bt 2, 0x32740
  003273c  sth 19, 522(22)
  0032740  lhz 3, 516(22)
  0032744  extsh 3, 3
  0032748  bl 0x502730
  003274c  nop
  0032750  lis 3, 3
  0032754  fmr 30, 1
  0032758  lis 4, 114
  003275c  addi 31, 3, 8396
  0032760  lfs 1, 36(31)
  0032764  lfs 2, -3056(4)
  0032768  fmuls 1, 2, 1
  003276c  fctiwz 1, 1
  0032770  stfd 1, 208(1)
  0032774  lwz 3, 212(1)
  0032778  extsw 3, 3
  003277c  bl 0x502730
  0032780  nop
  0032784  fdivs 3, 30, 1
  0032788  lfs 1, 8(31)
  003278c  lfs 4, 512(22)
  0032790  fmr 2, 4
  0032794  bl 0xfecf0
  0032798  nop
  003279c  fmr 30, 1
  00327a0  stfs 30, 512(22)
  00327a4  b 0x32820
  00327a8  lis 3, 3
  00327ac  vspltisw 3, -1
  00327b0  lis 4, 114
  00327b4  addi 3, 3, 8396
  00327b8  li 5, 36
  00327bc  li 6, -3056
  00327c0  vslw 3, 3, 3
  00327c4  lfs 1, 36(3)
  00327c8  lfs 2, -3056(4)
  00327cc  <unknown>
  00327d0  fmuls 1, 2, 1
  00327d4  vspltw 2, 2, 0
  00327d8  lhz 3, 516(22)
  00327dc  <unknown>
  00327e0  extsh 3, 3
  00327e4  vmaddfp 2, 4, 2, 3
  00327e8  fctiwz 1, 1
  00327ec  vctsxs 2, 2, 0
  00327f0  stfd 1, 208(1)
  00327f4  lwz 4, 212(1)
  00327f8  cmpw 3, 4
  00327fc  bf 1, 0x32814
  0032800  addic 3, 22, 516
  0032804  bl 0x4fffb4
  0032808  nop
  003280c  lfs 30, 512(22)
  0032810  b 0x32820
  0032814  vsplth 2, 2, 1
  0032818  li 3, 516
  003281c  stvehx 2, 3, 22
  0032820  lfs 1, 308(22)
  0032824  lfs 2, 304(22)
  0032828  fmuls 3, 1, 1
  003282c  lfs 4, 312(22)
  0032830  lfs 5, 348(22)
  0032834  fsubs 5, 5, 30
  0032838  lis 3, 3
  003283c  fmadds 3, 2, 2, 3
  0032840  addi 3, 3, 8396
  0032844  fmadds 3, 4, 4, 3
  0032848  lfs 30, 8(3)
  003284c  lfs 6, 144(22)
  0032850  lwz 4, 8324(20)
  0032854  lwz 3, 8320(20)
  0032858  fsqrts 3, 3
  003285c  cmpwi 4, 127
  0032860  cmpwi 1, 4, 123
  0032864  fdivs 5, 5, 3
  0032868  fsub 7, 30, 3
  003286c  fsub 8, 30, 3
  0032870  fsub 9, 3, 30
  0032874  fsub 10, 30, 3
  0032878  fsub 11, 3, 30
  003287c  fsub 3, 3, 30
  0032880  fmuls 1, 1, 5
  0032884  fmuls 2, 2, 5
  0032888  fmuls 4, 4, 5
  003288c  fsel 5, 7, 30, 1
  0032890  fsel 7, 8, 30, 2
  0032894  fsel 8, 10, 30, 4
  0032898  fsel 1, 9, 5, 1
  003289c  fsel 2, 11, 7, 2
  00328a0  fsel 3, 3, 8, 4
  00328a4  stfs 1, 308(22)
  00328a8  fadds 1, 2, 6
  00328ac  stfs 2, 304(22)
  00328b0  stfs 3, 312(22)
  00328b4  stfs 1, 128(1)
  00328b8  lfs 1, 148(22)
  00328bc  lfs 2, 308(22)
  00328c0  fadds 1, 2, 1
  00328c4  stfs 1, 132(1)
  00328c8  lfs 1, 312(22)
  00328cc  lfs 2, 152(22)
  00328d0  fadds 1, 1, 2
  00328d4  stfs 1, 136(1)
  00328d8  lfs 1, 316(22)
  00328dc  stfs 1, 140(1)
  00328e0  bt 2, 0x32b14
  00328e4  lis 4, 151
  00328e8  lwz 4, -25488(4)
  00328ec  cmpwi 4, 13
  00328f0  bf 2, 0x328f8
  00328f4  bt 6, 0x32b14
  00328f8  lis 5, 149
  00328fc  ori 6, 3, 0
  0032900  addic 3, 22, 144
  0032904  li 7, 0
  0032908  addic 4, 1, 128
  003290c  lwz 5, 16516(5)
  0032910  extsw 5, 5
  0032914  bl 0x57820
  0032918  nop
  003291c  cmpwi 3, 0
  0032920  bt 2, 0x32b14
  0032924  lis 31, 161
  0032928  addic 31, 31, 2368
  003292c  lwz 3, 24(31)
  0032930  cmpwi 3, 0
  0032934  bt 2, 0x32944
  0032938  lhz 3, 166(3)
  003293c  cmpwi 3, 1007
  0032940  bt 2, 0x32b14
  0032944  lfs 2, 32(31)
  0032948  lfs 3, 40(31)
  003294c  fmr 1, 30
  0032950  stfs 2, 48(1)
  0032954  stfs 3, 56(1)
  0032958  lfs 2, 36(31)
  003295c  lfs 3, 44(31)
  0032960  stfs 2, 52(1)
  0032964  stfs 3, 60(1)
  0032968  ld 3, 48(1)
  003296c  ld 4, 56(1)
  0032970  bl 0x558f8
  0032974  nop
  0032978  ori 4, 3, 0
  003297c  lwz 3, 24(31)
  0032980  cmpwi 4, 0
  0032984  bf 2, 0x32b14
  0032988  cmpwi 3, 0
  003298c  bt 2, 0x32ad0
  0032990  bl 0x10af88
  0032994  nop
  0032998  cmpwi 3, 0
  003299c  bt 2, 0x32ad0
  00329a0  lwz 3, 24(31)
  00329a4  lfs 1, 320(29)
  00329a8  lfs 2, 324(29)
  00329ac  lfs 3, 16(3)
  00329b0  fsubs 1, 3, 1
  00329b4  fmr 4, 30
  00329b8  stfs 1, 144(1)
  00329bc  lfs 3, 20(3)
  00329c0  fsubs 2, 3, 2
  00329c4  fmuls 3, 2, 2
  00329c8  fmadds 3, 1, 1, 3
  00329cc  fsqrts 5, 3
  00329d0  fcmpu 0, 5, 4
  00329d4  bt 2, 0x32a20
  00329d8  frsqrte 4, 3
  00329dc  lis 3, 3
  00329e0  addi 3, 3, 8396
  00329e4  lfs 5, 12(3)
  00329e8  fmuls 6, 3, 4
  00329ec  fmuls 7, 31, 4
  00329f0  fnmsubs 6, 6, 4, 5
  00329f4  fmadds 4, 6, 7, 4
  00329f8  fmuls 6, 3, 4
  00329fc  fmuls 7, 31, 4
  0032a00  fnmsubs 6, 6, 4, 5
  0032a04  fmadds 4, 6, 7, 4
  0032a08  fmuls 3, 3, 4
  0032a0c  fmuls 6, 31, 4
  0032a10  fnmsubs 3, 3, 4, 5
  0032a14  fmadds 30, 3, 6, 4
  0032a18  fmuls 4, 1, 30
  0032a1c  fmuls 30, 2, 30
  0032a20  lis 3, 17839
  0032a24  stfs 4, 144(1)
  0032a28  lis 4, 3
  0032a2c  stfs 30, 148(1)
  0032a30  ori 6, 3, 57190
  0032a34  stw 19, 152(1)
  0032a38  addi 4, 4, 8396
  0032a3c  addic 3, 1, 160
  0032a40  addic 7, 1, 144
  0032a44  stw 6, 156(1)
  0032a48  lis 5, 128
  0032a4c  lfs 1, 40(4)
  0032a50  lwz 6, 8320(20)
  0032a54  ori 4, 6, 0
  0032a58  bl 0x10581c
  0032a5c  nop
  0032a60  li 3, 3
  0032a64  lwz 4, 8320(20)
  0032a68  li 5, 160
  0032a6c  li 6, 176
  0032a70  li 8, 192
  0032a74  stb 3, 184(1)
  0032a78  stb 3, 185(1)
  0032a7c  li 7, 64
  0032a80  lhz 4, 166(4)
  0032a84  li 3, 80
  0032a88  lwz 10, 24(31)
  0032a8c  li 9, 96
  0032a90  sth 4, 186(1)
  0032a94  lvx 2, 5, 1
  0032a98  lvx 3, 6, 1
  0032a9c  lvx 4, 8, 1
  0032aa0  stvx 2, 7, 1
  0032aa4  stvx 3, 3, 1
  0032aa8  stvx 4, 9, 1
  0032aac  ori 3, 10, 0
  0032ab0  ld 5, 64(1)
  0032ab4  ld 6, 72(1)
  0032ab8  ld 7, 80(1)
  0032abc  ld 8, 88(1)
  0032ac0  ld 9, 96(1)
  0032ac4  ld 10, 104(1)
  0032ac8  bl 0x105ab4
  0032acc  nop
  0032ad0  lis 3, 3
  0032ad4  lwz 5, 540(22)
  0032ad8  lis 4, 114
  0032adc  addi 3, 3, 8396
  0032ae0  addic 5, 5, 1
  0032ae4  lfs 1, -3056(4)
  0032ae8  stw 5, 540(22)
  0032aec  lfs 2, 44(3)
  0032af0  fmuls 1, 1, 2
  0032af4  fctiwz 1, 1
  0032af8  stfd 1, 208(1)
  0032afc  lwz 3, 212(1)
  0032b00  cmpw 5, 3
  0032b04  bt 0, 0x32b18
  0032b08  bl 0x5393c
  0032b0c  nop
  0032b10  b 0x32b18
  0032b14  stw 19, 540(22)
  0032b18  cmpwi 27, 0
  0032b1c  bf 1, 0x32b48
  0032b20  lis 3, 147
  0032b24  addic 3, 3, -7540
  0032b28  lwz 4, 0(3)
  0032b2c  addic 27, 27, -1
  0032b30  addic 3, 3, 4
  0032b34  cmpwi 27, 0
  0032b38  lwz 5, 36(4)
  0032b3c  lwz 5, 16(5)
  0032b40  stw 5, 148(4)
  0032b44  bt 1, 0x32b28
  0032b48  ld 0, 480(1)
  0032b4c  mtlr 0
  0032b50  lfd 20, 368(1)
  0032b54  lfd 21, 376(1)
  0032b58  lfd 22, 384(1)
  0032b5c  lfd 23, 392(1)
  0032b60  lfd 24, 400(1)
  0032b64  lfd 25, 408(1)
  0032b68  lfd 26, 416(1)
  0032b6c  lfd 27, 424(1)
  0032b70  lfd 28, 432(1)
  0032b74  lfd 29, 440(1)
  0032b78  lfd 30, 448(1)
  0032b7c  lfd 31, 456(1)
  0032b80  ld 15, 232(1)
  0032b84  ld 16, 240(1)
  0032b88  ld 17, 248(1)
  0032b8c  ld 18, 256(1)
  0032b90  ld 19, 264(1)
  0032b94  ld 20, 272(1)
  0032b98  ld 21, 280(1)
  0032b9c  ld 22, 288(1)
  0032ba0  ld 23, 296(1)
  0032ba4  ld 24, 304(1)
  0032ba8  ld 25, 312(1)
  0032bac  ld 26, 320(1)
  0032bb0  ld 27, 328(1)
  0032bb4  ld 28, 336(1)
  0032bb8  ld 29, 344(1)
  0032bbc  ld 30, 352(1)
  0032bc0  ld 31, 360(1)
  0032bc4  addi 1, 1, 464
  0032bc8  blr

STUB_00032bcc:   # 0x32bcc, 0x4 bytes
  0032bcc  blr

STUB_00032bd0:   # 0x32bd0, 0x4 bytes
  0032bd0  blr

Cam0_ClearModCamera:   # 0x32bd4, 0x50 bytes
  0032bd4  lis 4, 149
  0032bd8  addic 4, 4, 5056
  0032bdc  lwz 4, 384(4)
  0032be0  lhz 5, 134(4)
  0032be4  cmpwi 5, 0
  0032be8  bt 2, 0x32bf4
  0032bec  li 3, -1
  0032bf0  b 0x32c20
  0032bf4  ori 5, 3, 0
  0032bf8  lwz 3, 112(4)
  0032bfc  lwz 4, 544(3)
  0032c00  cmpw 4, 5
  0032c04  bf 2, 0x32c1c
  0032c08  ori 5, 3, 0
  0032c0c  li 4, 0
  0032c10  li 3, 1
  0032c14  stw 4, 544(5)
  0032c18  b 0x32c20
  0032c1c  li 3, 0
  0032c20  blr

Cam0_SetModCamera:   # 0x32c24, 0xa8 bytes
  0032c24  lis 4, 149
  0032c28  addic 5, 4, 5056
  0032c2c  lwz 5, 384(5)
  0032c30  lhz 4, 134(5)
  0032c34  cmpwi 4, 0
  0032c38  bt 2, 0x32c44
  0032c3c  li 3, -1
  0032c40  b 0x32cc8
  0032c44  lwz 5, 112(5)
  0032c48  lwz 4, 544(5)
  0032c4c  cmpwi 4, 0
  0032c50  bf 2, 0x32c60
  0032c54  stw 3, 544(5)
  0032c58  li 3, 1
  0032c5c  b 0x32cc8
  0032c60  cmpw 4, 3
  0032c64  bf 2, 0x32c70
  0032c68  li 3, 1
  0032c6c  b 0x32cc8
  0032c70  lis 6, 149
  0032c74  lhz 4, 132(4)
  0032c78  extsh 4, 4
  0032c7c  sldi 4, 4, 5
  0032c80  lwz 6, 16468(6)
  0032c84  lhz 7, 132(3)
  0032c88  addc 4, 6, 4
  0032c8c  extsh 7, 7
  0032c90  clrldi 4, 4, 32
  0032c94  sldi 7, 7, 5
  0032c98  addc 6, 6, 7
  0032c9c  clrldi 6, 6, 32
  0032ca0  lwz 4, 28(4)
  0032ca4  lwz 6, 28(6)
  0032ca8  lbz 4, 28(4)
  0032cac  lbz 6, 28(6)
  0032cb0  cmpw 6, 4
  0032cb4  bf 1, 0x32cc4
  0032cb8  stw 3, 544(5)
  0032cbc  li 3, 1
  0032cc0  b 0x32cc8
  0032cc4  li 3, 0
  0032cc8  blr

Cam0_SetRunAtCamDist:   # 0x32ccc, 0x24 bytes
  0032ccc  lis 3, 149
  0032cd0  addic 3, 3, 5056
  0032cd4  lwz 3, 384(3)
  0032cd8  lhz 4, 134(3)
  0032cdc  cmpwi 4, 0
  0032ce0  bf 2, 0x32cec
  0032ce4  lwz 3, 112(3)
  0032ce8  stfs 1, 556(3)
  0032cec  blr

Cam0_ForceElv:   # 0x32cf0, 0x24 bytes
  0032cf0  lis 3, 149
  0032cf4  addic 3, 3, 5056
  0032cf8  lwz 3, 384(3)
  0032cfc  lhz 4, 134(3)
  0032d00  cmpwi 4, 0
  0032d04  bf 2, 0x32d10
  0032d08  lwz 3, 112(3)
  0032d0c  stfs 1, 460(3)
  0032d10  blr

Cam0_SetPitchGainDamp:   # 0x32d18, 0x44 bytes
  0032d18  lis 3, 149
  0032d1c  addic 3, 3, 5056
  0032d20  lwz 3, 384(3)
  0032d24  lhz 4, 134(3)
  0032d28  cmpwi 4, 0
  0032d2c  bf 2, 0x32d58
  0032d30  lis 4, 3
  0032d34  addi 4, 4, 11540
  0032d38  lfs 3, 0(4)
  0032d3c  lwz 3, 112(3)
  0032d40  fcmpu 0, 1, 3
  0032d44  fcmpu 1, 2, 3
  0032d48  bt 2, 0x32d50
  0032d4c  stfs 1, 292(3)
  0032d50  bt 6, 0x32d58
  0032d54  stfs 2, 296(3)
  0032d58  blr

Cam0_SetBumpFlags:   # 0x32d5c, 0x24 bytes
  0032d5c  lis 4, 149
  0032d60  addic 4, 4, 5056
  0032d64  lwz 4, 384(4)
  0032d68  lhz 5, 134(4)
  0032d6c  cmpwi 5, 0
  0032d70  bf 2, 0x32d7c
  0032d74  lwz 4, 112(4)
  0032d78  stw 3, 536(4)
  0032d7c  blr

Cam0_SetCollData:   # 0x32d80, 0x50 bytes
  0032d80  lis 3, 149
  0032d84  addic 3, 3, 5056
  0032d88  lwz 3, 384(3)
  0032d8c  lhz 4, 134(3)
  0032d90  cmpwi 4, 0
  0032d94  bf 2, 0x32dcc
  0032d98  lwz 3, 112(3)
  0032d9c  lwz 4, 524(3)
  0032da0  cmpwi 4, 0
  0032da4  bt 2, 0x32dac
  0032da8  stfs 1, 524(3)
  0032dac  lwz 4, 528(3)
  0032db0  cmpwi 4, 0
  0032db4  bt 2, 0x32dbc
  0032db8  stfs 2, 528(3)
  0032dbc  lwz 4, 532(3)
  0032dc0  cmpwi 4, 0
  0032dc4  bt 2, 0x32dcc
  0032dc8  stfs 3, 532(3)
  0032dcc  blr

Cam0_DisableUserCam:   # 0x32dd0, 0x2c bytes
  0032dd0  lis 3, 149
  0032dd4  addic 3, 3, 5056
  0032dd8  lwz 3, 384(3)
  0032ddc  lhz 4, 134(3)
  0032de0  cmpwi 4, 0
  0032de4  bf 2, 0x32df8
  0032de8  lwz 3, 112(3)
  0032dec  lwz 4, 440(3)
  0032df0  ori 4, 4, 3
  0032df4  stw 4, 440(3)
  0032df8  blr

GetAnalogInputs_0:   # 0x32e10, 0x234 bytes
  0032e10  stdu 1, -80(1)
  0032e14  ori 6, 3, 0
  0032e18  lis 3, 3
  0032e1c  addi 3, 3, 11772
  0032e20  lwz 6, 112(6)
  0032e24  lwz 7, 440(6)
  0032e28  clrlwi 7, 7, 31
  0032e2c  std 31, 72(1)
  0032e30  cmpwi 7, 0
  0032e34  bt 2, 0x32e48
  0032e38  li 7, 0
  0032e3c  lfs 1, 0(3)
  0032e40  stw 7, 0(4)
  0032e44  b 0x32e6c
  0032e48  lis 7, 150
  0032e4c  lis 8, 114
  0032e50  lfs 1, 19008(7)
  0032e54  lwz 7, -1220(8)
  0032e58  stfs 1, 0(4)
  0032e5c  cmpwi 7, 0
  0032e60  bf 2, 0x32e6c
  0032e64  fneg 1, 1
  0032e68  stfs 1, 0(4)
  0032e6c  fmr 2, 1
  0032e70  lfs 1, 0(3)
  0032e74  fcmpu 0, 2, 1
  0032e78  bf 2, 0x32ea8
  0032e7c  lis 7, 147
  0032e80  li 8, 0
  0032e84  lwz 10, 452(6)
  0032e88  lis 9, 147
  0032e8c  cmpwi 10, 0
  0032e90  stw 8, -7552(7)
  0032e94  stw 8, -7548(9)
  0032e98  lfs 2, 452(6)
  0032e9c  bt 2, 0x32fc8
  0032ea0  stfs 2, 0(4)
  0032ea4  b 0x32fc8
  0032ea8  lis 8, 161
  0032eac  lis 4, 114
  0032eb0  addic 8, 8, -276
  0032eb4  lfs 2, -5548(4)
  0032eb8  lhz 9, 64(8)
  0032ebc  stfs 2, 444(6)
  0032ec0  lhz 7, 66(8)
  0032ec4  cmpwi 9, 3
  0032ec8  lwz 4, 68(8)
  0032ecc  bf 0, 0x32fc8
  0032ed0  lis 11, 147
  0032ed4  lis 10, 147
  0032ed8  lwz 12, -7552(11)
  0032edc  lwz 31, -7548(10)
  0032ee0  addic 10, 12, 1
  0032ee4  cmpwi 31, 0
  0032ee8  stw 10, -7552(11)
  0032eec  bf 2, 0x32fc8
  0032ef0  lis 11, 114
  0032ef4  lfs 3, 4(3)
  0032ef8  lfs 2, -3056(11)
  0032efc  fmuls 3, 2, 3
  0032f00  fctiwz 3, 3
  0032f04  stfd 3, 48(1)
  0032f08  lwz 11, 52(1)
  0032f0c  cmpw 10, 11
  0032f10  bf 1, 0x32fc8
  0032f14  lis 10, 0
  0032f18  ori 10, 10, 65535
  0032f1c  cmpw 9, 10
  0032f20  bf 0, 0x32f2c
  0032f24  addic 9, 9, 1
  0032f28  sth 9, 64(8)
  0032f2c  lis 9, 161
  0032f30  lwz 9, -2344(9)
  0032f34  extsw 9, 9
  0032f38  std 9, 48(1)
  0032f3c  lfs 3, 8(3)
  0032f40  lfd 4, 48(1)
  0032f44  ori 9, 7, 0
  0032f48  fcfid 4, 4
  0032f4c  lis 7, 6990
  0032f50  ori 10, 7, 33205
  0032f54  frsp 4, 4
  0032f58  fadds 3, 4, 3
  0032f5c  fmuls 2, 2, 3
  0032f60  fctiwz 2, 2
  0032f64  stfd 2, 48(1)
  0032f68  lwz 7, 52(1)
  0032f6c  mulhw 10, 10, 7
  0032f70  srawi 10, 10, 6
  0032f74  srwi 11, 10, 31
  0032f78  addc 10, 10, 11
  0032f7c  cmpw 10, 9
  0032f80  bf 1, 0x32fa0
  0032f84  lis 9, 6990
  0032f88  ori 9, 9, 33205
  0032f8c  mulhw 7, 9, 7
  0032f90  srawi 7, 7, 6
  0032f94  srwi 9, 7, 31
  0032f98  addc 7, 7, 9
  0032f9c  sth 7, 66(8)
  0032fa0  lis 7, 151
  0032fa4  li 9, 1
  0032fa8  lis 10, -32768
  0032fac  lis 11, 147
  0032fb0  lwz 7, -25488(7)
  0032fb4  slw 7, 9, 7
  0032fb8  stw 9, -7548(11)
  0032fbc  or 4, 4, 7
  0032fc0  or 4, 4, 10
  0032fc4  stw 4, 68(8)
  0032fc8  lwz 4, 440(6)
  0032fcc  rlwinm 4, 4, 0, 30, 30
  0032fd0  cmpwi 4, 0
  0032fd4  bt 2, 0x32ff4
  0032fd8  li 4, 0
  0032fdc  stw 4, 0(5)
  0032fe0  lfs 1, 12(3)
  0032fe4  lfs 2, 460(6)
  0032fe8  fmuls 1, 2, 1
  0032fec  stfs 1, 0(5)
  0032ff0  b 0x33038
  0032ff4  lis 4, 150
  0032ff8  lis 7, 114
  0032ffc  addic 4, 4, 19008
  0033000  lfs 2, 4(4)
  0033004  lwz 4, -1224(7)
  0033008  fneg 2, 2
  003300c  cmpwi 4, 0
  0033010  stfs 2, 0(5)
  0033014  bf 2, 0x33020
  0033018  fneg 2, 2
  003301c  stfs 2, 0(5)
  0033020  fcmpu 0, 2, 1
  0033024  bf 2, 0x33038
  0033028  lfs 1, 12(3)
  003302c  lfs 2, 460(6)
  0033030  fmuls 1, 2, 1
  0033034  stfs 1, 0(5)
  0033038  ld 31, 72(1)
  003303c  addi 1, 1, 80
  0033040  blr

UpdateUserCam_0:   # 0x33068, 0x584 bytes
  0033068  stdu 1, -272(1)
  003306c  mflr 0
  0033070  std 0, 288(1)
  0033074  stfd 28, 240(1)
  0033078  stfd 29, 248(1)
  003307c  stfd 30, 256(1)
  0033080  stfd 31, 264(1)
  0033084  std 31, 232(1)
  0033088  ori 31, 3, 0
  003308c  lis 4, 3
  0033090  std 26, 192(1)
  0033094  fmr 31, 1
  0033098  lis 26, 114
  003309c  std 27, 200(1)
  00330a0  fmr 30, 2
  00330a4  std 25, 184(1)
  00330a8  addi 27, 4, 12356
  00330ac  std 29, 216(1)
  00330b0  std 28, 208(1)
  00330b4  lis 25, 114
  00330b8  lwz 28, 112(31)
  00330bc  std 30, 224(1)
  00330c0  lis 29, 149
  00330c4  addic 30, 28, 304
  00330c8  lfs 29, 0(27)
  00330cc  lfs 3, -11124(26)
  00330d0  addic 29, 29, 5056
  00330d4  lfs 1, 424(28)
  00330d8  addic 5, 28, 428
  00330dc  fmr 2, 31
  00330e0  lfs 4, -11120(25)
  00330e4  fmr 5, 29
  00330e8  bl 0x501e8
  00330ec  nop
  00330f0  lfs 2, 444(28)
  00330f4  stfs 1, 424(28)
  00330f8  fmuls 3, 2, 1
  00330fc  lfs 2, 432(28)
  0033100  stfs 3, 356(28)
  0033104  lfs 1, 8(27)
  0033108  lfs 3, 12(27)
  003310c  fsubs 5, 30, 1
  0033110  lfs 4, 4(27)
  0033114  fadds 6, 30, 1
  0033118  fsub 1, 1, 30
  003311c  fsub 7, 30, 4
  0033120  fmuls 5, 5, 3
  0033124  fmuls 6, 6, 3
  0033128  lfs 3, -11124(26)
  003312c  lfs 4, -11120(25)
  0033130  fsel 1, 1, 29, 5
  0033134  fsel 1, 7, 1, 6
  0033138  fcmpu 0, 1, 29
  003313c  bt 2, 0x33180
  0033140  lwz 3, 432(28)
  0033144  lfs 2, 432(28)
  0033148  fabs 5, 1
  003314c  cmpwi 1, 3, 0
  0033150  fabs 6, 2
  0033154  fcmpu 0, 5, 6
  0033158  cror 2, 1, 2
  003315c  bt 2, 0x3318c
  0033160  fcmpu 0, 1, 29
  0033164  cror 2, 0, 2
  0033168  bt 2, 0x33170
  003316c  bt 5, 0x33180
  0033170  fcmpu 0, 1, 29
  0033174  cror 2, 1, 2
  0033178  bt 2, 0x3318c
  003317c  bf 4, 0x3318c
  0033180  lis 3, 114
  0033184  lfs 30, -11104(3)
  0033188  b 0x33194
  003318c  lis 3, 114
  0033190  lfs 30, -11108(3)
  0033194  fmr 5, 1
  0033198  addic 5, 28, 436
  003319c  fmr 1, 2
  00331a0  fmr 2, 5
  00331a4  fmr 5, 30
  00331a8  bl 0x501e8
  00331ac  nop
  00331b0  fcmpu 0, 31, 29
  00331b4  lis 3, 3
  00331b8  stfs 1, 432(28)
  00331bc  addi 4, 3, 12356
  00331c0  addic 3, 29, 432
  00331c4  lfs 31, 16(4)
  00331c8  fmuls 31, 1, 31
  00331cc  bf 2, 0x331ec
  00331d0  ori 5, 3, 0
  00331d4  ori 3, 30, 0
  00331d8  lfs 1, 456(28)
  00331dc  ori 4, 30, 0
  00331e0  bl 0x1113e0
  00331e4  nop
  00331e8  b 0x33204
  00331ec  ori 5, 3, 0
  00331f0  lfs 1, 356(28)
  00331f4  ori 3, 30, 0
  00331f8  ori 4, 30, 0
  00331fc  bl 0x1113e0
  0033200  nop
  0033204  lfs 1, 304(28)
  0033208  lfs 2, 440(29)
  003320c  lfs 10, 432(29)
  0033210  fmuls 5, 1, 2
  0033214  lfs 9, 436(29)
  0033218  lfs 11, 312(28)
  003321c  lfs 12, 308(28)
  0033220  fmuls 4, 11, 9
  0033224  fmuls 6, 12, 10
  0033228  fmr 7, 29
  003322c  fmsubs 5, 11, 10, 5
  0033230  li 3, 0
  0033234  fmsubs 4, 12, 2, 4
  0033238  fmsubs 6, 1, 9, 6
  003323c  fmr 8, 7
  0033240  fmuls 3, 5, 5
  0033244  fmuls 13, 12, 12
  0033248  stw 3, 124(1)
  003324c  fmuls 12, 12, 9
  0033250  fmr 9, 8
  0033254  fmadds 3, 4, 4, 3
  0033258  fmadds 13, 1, 1, 13
  003325c  fmadds 1, 1, 10, 12
  0033260  fmadds 3, 6, 6, 3
  0033264  fmadds 10, 11, 11, 13
  0033268  fmadds 1, 11, 2, 1
  003326c  fsqrts 0, 3
  0033270  fsqrts 2, 10
  0033274  fcmpu 0, 0, 9
  0033278  bt 2, 0x332cc
  003327c  frsqrte 7, 3
  0033280  lis 3, 3
  0033284  addi 3, 3, 12356
  0033288  lfs 8, 20(3)
  003328c  lfs 9, 24(3)
  0033290  fmuls 10, 3, 7
  0033294  fmuls 11, 8, 7
  0033298  fnmsubs 10, 10, 7, 9
  003329c  fmadds 7, 10, 11, 7
  00332a0  fmuls 10, 3, 7
  00332a4  fmuls 11, 8, 7
  00332a8  fnmsubs 10, 10, 7, 9
  00332ac  fmadds 7, 10, 11, 7
  00332b0  fmuls 3, 3, 7
  00332b4  fmuls 8, 8, 7
  00332b8  fnmsubs 3, 3, 7, 9
  00332bc  fmadds 7, 3, 8, 7
  00332c0  fmuls 9, 4, 7
  00332c4  fmuls 8, 5, 7
  00332c8  fmuls 7, 6, 7
  00332cc  fabs 3, 2
  00332d0  stfs 2, 128(1)
  00332d4  fabs 4, 1
  00332d8  stfs 1, 132(1)
  00332dc  stfs 9, 112(1)
  00332e0  lis 3, 115
  00332e4  addic 3, 3, 22784
  00332e8  fsubs 2, 3, 4
  00332ec  stfs 2, 136(1)
  00332f0  lwz 4, 128(1)
  00332f4  lfs 1, 128(1)
  00332f8  stfs 8, 116(1)
  00332fc  stfs 7, 120(1)
  0033300  fabs 1, 1
  0033304  lwz 5, 132(1)
  0033308  lfs 2, 132(1)
  003330c  lwz 6, 136(1)
  0033310  rlwinm 5, 5, 3, 29, 29
  0033314  lfs 5, 136(1)
  0033318  fabs 7, 2
  003331c  rlwimi 5, 6, 2, 30, 30
  0033320  fsub 6, 5, 29
  0033324  fsub 5, 5, 29
  0033328  rlwimi 5, 4, 4, 28, 28
  003332c  ori 4, 3, 0
  0033330  rlwimi 4, 5, 2, 26, 28
  0033334  slwi 5, 5, 2
  0033338  clrldi 4, 4, 32
  003333c  fsel 4, 6, 1, 4
  0033340  lfsx 1, 3, 5
  0033344  lfs 2, 4(4)
  0033348  fsel 3, 5, 7, 3
  003334c  fcmpu 0, 4, 29
  0033350  bt 1, 0x3335c
  0033354  fmr 28, 29
  0033358  b 0x33480
  003335c  fsubs 5, 3, 4
  0033360  fadds 3, 3, 4
  0033364  addic 3, 1, 16
  0033368  li 6, 2
  003336c  addic 4, 3, 124
  0033370  addic 5, 3, 140
  0033374  mtctr 6
  0033378  fdivs 3, 5, 3
  003337c  fmuls 4, 3, 3
  0033380  stfs 3, 152(1)
  0033384  stfs 3, 144(1)
  0033388  stfs 3, 148(1)
  003338c  stfs 3, 140(1)
  0033390  lfs 6, 152(1)
  0033394  lfs 7, 144(1)
  0033398  lfs 8, 148(1)
  003339c  fmuls 5, 4, 4
  00333a0  fmuls 7, 7, 4
  00333a4  fmuls 6, 6, 5
  00333a8  fmuls 3, 5, 5
  00333ac  fmuls 5, 8, 5
  00333b0  stfs 7, 144(1)
  00333b4  fmuls 4, 6, 4
  00333b8  stfs 5, 148(1)
  00333bc  stfs 4, 152(1)
  00333c0  lfs 4, 124(3)
  00333c4  fmuls 4, 4, 3
  00333c8  stfs 4, 140(3)
  00333cc  lfs 4, 4(4)
  00333d0  addic 3, 3, 8
  00333d4  addic 4, 4, 8
  00333d8  fmuls 4, 4, 3
  00333dc  stfs 4, 4(5)
  00333e0  addic 5, 5, 8
  00333e4  bdnz 0x333c0
  00333e8  ori 3, 1, 0
  00333ec  lis 4, 115
  00333f0  li 8, 4
  00333f4  addic 5, 3, 140
  00333f8  addic 4, 4, 22752
  00333fc  ori 7, 5, 0
  0033400  mtctr 8
  0033404  lfs 3, 140(3)
  0033408  lfs 4, 0(4)
  003340c  fmuls 3, 3, 4
  0033410  lfs 4, 4(4)
  0033414  addic 4, 4, 8
  0033418  stfs 3, 140(3)
  003341c  lfs 3, 4(5)
  0033420  addic 3, 3, 8
  0033424  fmuls 3, 3, 4
  0033428  stfs 3, 4(5)
  003342c  addic 5, 5, 8
  0033430  bdnz 0x33404
  0033434  fmr 28, 29
  0033438  ori 3, 1, 0
  003343c  mtctr 6
  0033440  lfs 3, 140(3)
  0033444  lfs 4, 4(7)
  0033448  fadds 3, 28, 3
  003344c  lfs 5, 8(7)
  0033450  addic 3, 3, 16
  0033454  lfs 28, 12(7)
  0033458  addic 7, 7, 16
  003345c  fadds 3, 3, 4
  0033460  fadds 3, 3, 5
  0033464  fadds 28, 3, 28
  0033468  bdnz 0x33440
  003346c  lis 3, 3
  0033470  addi 3, 3, 12356
  0033474  lfs 3, 28(3)
  0033478  fadds 28, 28, 3
  003347c  fmadds 28, 28, 1, 2
  0033480  fabs 1, 28
  0033484  fabs 2, 31
  0033488  fcmpu 0, 1, 2
  003348c  cror 6, 1, 2
  0033490  bt 6, 0x334b8
  0033494  lis 3, 114
  0033498  lfs 1, -11104(3)
  003349c  fcmpu 0, 1, 30
  00334a0  bf 2, 0x334b8
  00334a4  lis 3, 3
  00334a8  addi 3, 3, 12356
  00334ac  lfs 1, 32(3)
  00334b0  fmuls 1, 28, 1
  00334b4  stfs 1, 432(28)
  00334b8  fcmpu 1, 28, 31
  00334bc  bf 4, 0x33508
  00334c0  fmr 1, 28
  00334c4  lis 3, 114
  00334c8  lfs 2, -11100(3)
  00334cc  bl 0x502578
  00334d0  nop
  00334d4  fcmpu 0, 31, 1
  00334d8  cror 6, 1, 2
  00334dc  bt 6, 0x334f8
  00334e0  fmr 1, 31
  00334e4  fmr 2, 28
  00334e8  bl 0x5025e0
  00334ec  nop
  00334f0  fmr 28, 1
  00334f4  b 0x33500
  00334f8  lis 3, 114
  00334fc  lfs 28, -11100(3)
  0033500  stfs 28, 360(28)
  0033504  b 0x3357c
  0033508  bf 5, 0x33570
  003350c  lwz 3, 112(31)
  0033510  lhz 3, 520(3)
  0033514  extsh 3, 3
  0033518  cmpwi 3, 0
  003351c  bt 0, 0x33570
  0033520  fmr 1, 28
  0033524  lis 3, 114
  0033528  lfs 2, -11100(3)
  003352c  fneg 2, 2
  0033530  bl 0x502578
  0033534  nop
  0033538  fcmpu 0, 31, 1
  003353c  cror 6, 0, 2
  0033540  bt 6, 0x3355c
  0033544  fmr 1, 31
  0033548  fmr 2, 28
  003354c  bl 0x5025e0
  0033550  nop
  0033554  fmr 28, 1
  0033558  b 0x33568
  003355c  lis 3, 114
  0033560  lfs 28, -11100(3)
  0033564  fneg 28, 28
  0033568  stfs 28, 360(28)
  003356c  b 0x3357c
  0033570  li 3, 0
  0033574  fmr 28, 29
  0033578  stw 3, 360(28)
  003357c  fcmpu 0, 31, 29
  0033580  cror 6, 1, 2
  0033584  bt 6, 0x33598
  0033588  lwz 4, 112(31)
  003358c  li 3, 1
  0033590  sth 3, 34(4)
  0033594  lfs 28, 360(28)
  0033598  addic 5, 1, 112
  003359c  fmr 1, 28
  00335a0  ori 3, 30, 0
  00335a4  ori 4, 30, 0
  00335a8  bl 0x1113e0
  00335ac  nop
  00335b0  ld 0, 288(1)
  00335b4  mtlr 0
  00335b8  lfd 28, 240(1)
  00335bc  lfd 29, 248(1)
  00335c0  lfd 30, 256(1)
  00335c4  lfd 31, 264(1)
  00335c8  ld 25, 184(1)
  00335cc  ld 26, 192(1)
  00335d0  ld 27, 200(1)
  00335d4  ld 28, 208(1)
  00335d8  ld 29, 216(1)
  00335dc  ld 30, 224(1)
  00335e0  ld 31, 232(1)
  00335e4  addi 1, 1, 272
  00335e8  blr

UpdateCamPull_0:   # 0x335f0, 0x16c bytes
  00335f0  lwz 3, 112(3)
  00335f4  lhz 4, 16(3)
  00335f8  extsh 4, 4
  00335fc  cmpwi 4, 0
  0033600  bf 1, 0x33758
  0033604  lfs 1, 4(3)
  0033608  lfs 2, 148(3)
  003360c  lis 4, 114
  0033610  lfs 3, 0(3)
  0033614  fsubs 1, 1, 2
  0033618  lfs 2, 144(3)
  003361c  lfs 5, 308(3)
  0033620  fsubs 2, 3, 2
  0033624  lfs 3, 8(3)
  0033628  lfs 4, 152(3)
  003362c  lfs 7, -5552(4)
  0033630  lfs 6, 304(3)
  0033634  fsubs 3, 3, 4
  0033638  lfs 4, 312(3)
  003363c  fsubs 1, 1, 5
  0033640  fsubs 2, 2, 6
  0033644  lis 4, 3
  0033648  fsubs 3, 3, 4
  003364c  fmadds 5, 7, 1, 5
  0033650  fmadds 6, 7, 2, 6
  0033654  addi 4, 4, 13804
  0033658  fmadds 4, 7, 3, 4
  003365c  fmuls 1, 5, 5
  0033660  fmadds 1, 6, 6, 1
  0033664  fmadds 3, 4, 4, 1
  0033668  lfs 1, 12(3)
  003366c  lfs 2, 348(3)
  0033670  stfs 1, 316(3)
  0033674  lfs 1, 0(4)
  0033678  fsqrts 3, 3
  003367c  fmr 7, 3
  0033680  fcmpu 0, 7, 2
  0033684  cror 6, 0, 2
  0033688  bt 6, 0x336e0
  003368c  fmr 3, 2
  0033690  fsub 9, 1, 7
  0033694  fsub 10, 1, 7
  0033698  fsub 11, 1, 7
  003369c  fsub 12, 7, 1
  00336a0  fsub 13, 7, 1
  00336a4  fdivs 8, 3, 7
  00336a8  fsub 7, 7, 1
  00336ac  fmuls 6, 6, 8
  00336b0  fmuls 5, 5, 8
  00336b4  fmuls 4, 4, 8
  00336b8  fsel 8, 9, 1, 6
  00336bc  fsel 9, 10, 1, 5
  00336c0  fsel 1, 11, 1, 4
  00336c4  fsel 6, 12, 8, 6
  00336c8  fsel 5, 13, 9, 5
  00336cc  fsel 1, 7, 1, 4
  00336d0  stfs 6, 304(3)
  00336d4  stfs 5, 308(3)
  00336d8  stfs 1, 312(3)
  00336dc  b 0x33750
  00336e0  lfs 7, 512(3)
  00336e4  stfs 4, 312(3)
  00336e8  fsubs 7, 2, 7
  00336ec  stfs 5, 308(3)
  00336f0  stfs 6, 304(3)
  00336f4  fcmpu 0, 3, 7
  00336f8  cror 6, 1, 2
  00336fc  bt 6, 0x33750
  0033700  fdivs 8, 7, 3
  0033704  fsub 9, 1, 3
  0033708  fsub 10, 1, 3
  003370c  fsub 11, 1, 3
  0033710  fsub 12, 3, 1
  0033714  fsub 13, 3, 1
  0033718  fsub 0, 3, 1
  003371c  fmr 3, 7
  0033720  fmuls 6, 6, 8
  0033724  fmuls 5, 5, 8
  0033728  fmuls 4, 4, 8
  003372c  fsel 7, 9, 1, 6
  0033730  fsel 8, 10, 1, 5
  0033734  fsel 1, 11, 1, 4
  0033738  fsel 6, 12, 7, 6
  003373c  fsel 5, 13, 8, 5
  0033740  fsel 1, 0, 1, 4
  0033744  stfs 6, 304(3)
  0033748  stfs 5, 308(3)
  003374c  stfs 1, 312(3)
  0033750  fsubs 1, 2, 3
  0033754  stfs 1, 512(3)
  0033758  blr

UpdateCamRotation_0:   # 0x337a0, 0xa40 bytes
  00337a0  stdu 1, -304(1)
  00337a4  mflr 0
  00337a8  std 0, 320(1)
  00337ac  stfd 22, 224(1)
  00337b0  stfd 23, 232(1)
  00337b4  stfd 24, 240(1)
  00337b8  stfd 25, 248(1)
  00337bc  stfd 26, 256(1)
  00337c0  stfd 27, 264(1)
  00337c4  stfd 28, 272(1)
  00337c8  stfd 29, 280(1)
  00337cc  stfd 30, 288(1)
  00337d0  stfd 31, 296(1)
  00337d4  std 28, 192(1)
  00337d8  std 31, 216(1)
  00337dc  lwz 28, 112(3)
  00337e0  std 30, 208(1)
  00337e4  ori 31, 3, 0
  00337e8  std 29, 200(1)
  00337ec  lis 30, 149
  00337f0  addic 29, 28, 32
  00337f4  addic 30, 30, 5056
  00337f8  lbz 3, 260(28)
  00337fc  std 27, 184(1)
  0033800  cmpwi 3, 11
  0033804  bf 2, 0x338e0
  0033808  lis 3, 151
  003380c  lfs 1, 48(31)
  0033810  addic 3, 3, -25376
  0033814  lis 4, 3
  0033818  lfs 2, 128(3)
  003381c  fsubs 1, 2, 1
  0033820  lfs 2, 52(31)
  0033824  lfs 3, 56(31)
  0033828  addi 4, 4, 14172
  003382c  stfs 1, 0(31)
  0033830  lfs 4, 132(3)
  0033834  fsubs 2, 4, 2
  0033838  fmuls 4, 2, 2
  003383c  stfs 2, 4(31)
  0033840  lfs 5, 136(3)
  0033844  fsubs 3, 5, 3
  0033848  fmadds 4, 1, 1, 4
  003384c  stfs 3, 8(31)
  0033850  lfs 5, 140(3)
  0033854  fmadds 4, 3, 3, 4
  0033858  stfs 5, 12(31)
  003385c  lfs 5, 0(4)
  0033860  fmr 6, 5
  0033864  fsqrts 8, 4
  0033868  fmr 7, 6
  003386c  fcmpu 0, 8, 7
  0033870  bt 2, 0x338c4
  0033874  frsqrte 5, 4
  0033878  lis 3, 3
  003387c  addi 3, 3, 14172
  0033880  lfs 6, 4(3)
  0033884  lfs 7, 8(3)
  0033888  fmuls 8, 4, 5
  003388c  fmuls 9, 6, 5
  0033890  fnmsubs 8, 8, 5, 7
  0033894  fmadds 5, 8, 9, 5
  0033898  fmuls 8, 4, 5
  003389c  fmuls 9, 6, 5
  00338a0  fnmsubs 8, 8, 5, 7
  00338a4  fmadds 5, 8, 9, 5
  00338a8  fmuls 4, 4, 5
  00338ac  fmuls 6, 6, 5
  00338b0  fnmsubs 4, 4, 5, 7
  00338b4  fmadds 5, 4, 6, 5
  00338b8  fmuls 7, 1, 5
  00338bc  fmuls 6, 2, 5
  00338c0  fmuls 5, 3, 5
  00338c4  stfs 7, 0(31)
  00338c8  ori 3, 29, 0
  00338cc  stfs 6, 4(31)
  00338d0  stfs 5, 8(31)
  00338d4  bl 0x4fffb4
  00338d8  nop
  00338dc  b 0x33f74
  00338e0  lfs 3, 132(28)
  00338e4  lfs 1, 436(30)
  00338e8  lfs 4, 52(31)
  00338ec  fmuls 5, 3, 1
  00338f0  lfs 6, 128(28)
  00338f4  fmuls 7, 4, 1
  00338f8  lfs 28, 432(30)
  00338fc  lfs 8, 48(31)
  0033900  lfs 9, 136(28)
  0033904  lfs 2, 440(30)
  0033908  lfs 10, 56(31)
  003390c  fmadds 5, 6, 28, 5
  0033910  fmadds 7, 8, 28, 7
  0033914  lis 3, 3
  0033918  addi 3, 3, 14172
  003391c  fmadds 5, 9, 2, 5
  0033920  fmadds 7, 10, 2, 7
  0033924  fnmsubs 30, 1, 5, 3
  0033928  fnmsubs 3, 1, 7, 4
  003392c  fnmsubs 31, 28, 5, 6
  0033930  fnmsubs 4, 28, 7, 8
  0033934  fnmsubs 29, 2, 5, 9
  0033938  fnmsubs 5, 2, 7, 10
  003393c  lfs 10, 12(3)
  0033940  fsubs 30, 30, 3
  0033944  fsubs 31, 31, 4
  0033948  fsubs 29, 29, 5
  003394c  lfs 4, 140(28)
  0033950  lfs 5, 8(31)
  0033954  fmuls 3, 30, 30
  0033958  lfs 6, 4(31)
  003395c  fmadds 7, 31, 31, 3
  0033960  lfs 3, 0(31)
  0033964  fmadds 7, 29, 29, 7
  0033968  fsqrts 8, 7
  003396c  fcmpu 0, 8, 10
  0033970  bt 0, 0x339d4
  0033974  frsqrte 3, 7
  0033978  lis 3, 3
  003397c  addi 3, 3, 14172
  0033980  lfs 5, 4(3)
  0033984  lfs 6, 8(3)
  0033988  stfs 4, 12(31)
  003398c  fmuls 8, 7, 3
  0033990  fmuls 9, 5, 3
  0033994  fnmsubs 8, 8, 3, 6
  0033998  fmadds 3, 8, 9, 3
  003399c  fmuls 8, 7, 3
  00339a0  fmuls 9, 5, 3
  00339a4  fnmsubs 8, 8, 3, 6
  00339a8  fmadds 3, 8, 9, 3
  00339ac  fmuls 4, 7, 3
  00339b0  fmuls 5, 5, 3
  00339b4  fnmsubs 4, 4, 3, 6
  00339b8  fmadds 5, 4, 5, 3
  00339bc  fmuls 3, 31, 5
  00339c0  fmuls 6, 30, 5
  00339c4  fmuls 5, 29, 5
  00339c8  stfs 3, 0(31)
  00339cc  stfs 6, 4(31)
  00339d0  stfs 5, 8(31)
  00339d4  fmuls 4, 2, 6
  00339d8  fmuls 7, 28, 5
  00339dc  fmuls 8, 1, 3
  00339e0  lis 3, 3
  00339e4  addi 3, 3, 14172
  00339e8  fmsubs 4, 1, 5, 4
  00339ec  fmsubs 5, 2, 3, 7
  00339f0  fmsubs 6, 28, 6, 8
  00339f4  lfs 28, 0(3)
  00339f8  li 3, 0
  00339fc  fmuls 1, 5, 5
  0033a00  stw 3, 28(31)
  0033a04  fmadds 7, 4, 4, 1
  0033a08  fmr 1, 28
  0033a0c  fmadds 7, 6, 6, 7
  0033a10  fmr 2, 1
  0033a14  fsqrts 8, 7
  0033a18  fmr 3, 2
  0033a1c  fcmpu 0, 8, 3
  0033a20  bt 2, 0x33a74
  0033a24  frsqrte 1, 7
  0033a28  lis 3, 3
  0033a2c  addi 3, 3, 14172
  0033a30  lfs 2, 4(3)
  0033a34  lfs 3, 8(3)
  0033a38  fmuls 8, 7, 1
  0033a3c  fmuls 9, 2, 1
  0033a40  fnmsubs 8, 8, 1, 3
  0033a44  fmadds 1, 8, 9, 1
  0033a48  fmuls 8, 7, 1
  0033a4c  fmuls 9, 2, 1
  0033a50  fnmsubs 8, 8, 1, 3
  0033a54  fmadds 1, 8, 9, 1
  0033a58  fmuls 7, 7, 1
  0033a5c  fmuls 2, 2, 1
  0033a60  fnmsubs 3, 7, 1, 3
  0033a64  fmadds 1, 3, 2, 1
  0033a68  fmuls 3, 4, 1
  0033a6c  fmuls 2, 5, 1
  0033a70  fmuls 1, 6, 1
  0033a74  lis 3, 3
  0033a78  stfs 3, 16(31)
  0033a7c  stfs 2, 20(31)
  0033a80  fmr 27, 31
  0033a84  addi 3, 3, 14172
  0033a88  stfs 1, 24(31)
  0033a8c  addic 5, 28, 48
  0033a90  fmr 5, 28
  0033a94  lfs 26, 16(3)
  0033a98  lfs 31, 20(3)
  0033a9c  lfs 1, 40(28)
  0033aa0  fmr 3, 26
  0033aa4  lfs 2, 352(28)
  0033aa8  fmr 4, 31
  0033aac  bl 0x501e8
  0033ab0  nop
  0033ab4  lfs 2, 36(28)
  0033ab8  addic 5, 28, 44
  0033abc  stfs 1, 40(28)
  0033ac0  fmr 3, 26
  0033ac4  fmr 1, 2
  0033ac8  lfs 2, 240(28)
  0033acc  fmr 4, 31
  0033ad0  fmr 5, 28
  0033ad4  bl 0x501e8
  0033ad8  nop
  0033adc  stfs 1, 36(28)
  0033ae0  lfs 2, 324(28)
  0033ae4  lfs 6, 436(30)
  0033ae8  lfs 3, 320(28)
  0033aec  fmuls 2, 2, 6
  0033af0  lfs 5, 432(30)
  0033af4  lfs 4, 328(28)
  0033af8  lfs 7, 440(30)
  0033afc  lfs 8, 40(28)
  0033b00  fsubs 1, 8, 1
  0033b04  fmadds 2, 3, 5, 2
  0033b08  lfs 3, 52(31)
  0033b0c  lfs 8, 48(31)
  0033b10  lfs 12, 56(31)
  0033b14  fmuls 9, 1, 5
  0033b18  fmadds 2, 4, 7, 2
  0033b1c  fmuls 4, 1, 6
  0033b20  fmuls 1, 1, 7
  0033b24  fneg 9, 9
  0033b28  fmuls 10, 2, 6
  0033b2c  fmuls 11, 2, 5
  0033b30  fmuls 2, 2, 7
  0033b34  fneg 4, 4
  0033b38  fneg 1, 1
  0033b3c  fneg 10, 10
  0033b40  fneg 11, 11
  0033b44  fneg 2, 2
  0033b48  fsubs 10, 10, 30
  0033b4c  fsubs 11, 11, 27
  0033b50  fsubs 2, 2, 29
  0033b54  fsubs 10, 3, 10
  0033b58  fsubs 11, 8, 11
  0033b5c  fsubs 2, 12, 2
  0033b60  fsubs 4, 10, 4
  0033b64  fsubs 9, 11, 9
  0033b68  fsubs 10, 2, 1
  0033b6c  fsubs 2, 4, 3
  0033b70  fsubs 1, 9, 8
  0033b74  fsubs 3, 10, 12
  0033b78  lfs 8, 24(31)
  0033b7c  lfs 9, 20(31)
  0033b80  lfs 10, 16(31)
  0033b84  fmuls 4, 2, 2
  0033b88  fmadds 4, 1, 1, 4
  0033b8c  fmadds 4, 3, 3, 4
  0033b90  fsqrts 4, 4
  0033b94  fcmpu 0, 4, 28
  0033b98  bt 2, 0x33f74
  0033b9c  lfs 11, 4(31)
  0033ba0  lfs 12, 0(31)
  0033ba4  fmuls 13, 11, 2
  0033ba8  lfs 0, 8(31)
  0033bac  fmuls 30, 12, 8
  0033bb0  lis 3, 3
  0033bb4  fmuls 29, 0, 9
  0033bb8  lis 4, 115
  0033bbc  fmuls 26, 11, 10
  0033bc0  addi 3, 3, 14172
  0033bc4  addic 5, 4, 22720
  0033bc8  lfs 27, 8(3)
  0033bcc  fmadds 13, 12, 1, 13
  0033bd0  lfs 25, 24(3)
  0033bd4  fmsubs 10, 0, 10, 30
  0033bd8  fmsubs 8, 11, 8, 29
  0033bdc  fmsubs 9, 12, 9, 26
  0033be0  lfs 11, 22720(4)
  0033be4  lfs 29, 4(5)
  0033be8  fmr 30, 27
  0033bec  fmadds 13, 0, 3, 13
  0033bf0  lfs 0, 8(5)
  0033bf4  lfs 12, 12(5)
  0033bf8  lfs 26, 28(3)
  0033bfc  li 3, 0
  0033c00  stfs 8, 32(31)
  0033c04  fmuls 2, 10, 2
  0033c08  stw 3, 44(31)
  0033c0c  fdivs 4, 13, 4
  0033c10  stfs 10, 36(31)
  0033c14  stfs 9, 40(31)
  0033c18  lfs 13, 308(28)
  0033c1c  lfs 24, 304(28)
  0033c20  lfs 23, 312(28)
  0033c24  lis 3, 115
  0033c28  addic 3, 3, 22784
  0033c2c  fmuls 22, 13, 13
  0033c30  fmuls 6, 13, 6
  0033c34  fmadds 2, 8, 1, 2
  0033c38  lfs 1, 52(28)
  0033c3c  fmadds 27, 24, 24, 22
  0033c40  fmadds 5, 24, 5, 6
  0033c44  fmadds 2, 9, 3, 2
  0033c48  fmadds 13, 23, 23, 27
  0033c4c  fmadds 5, 23, 7, 5
  0033c50  fsqrts 6, 13
  0033c54  fabs 13, 4
  0033c58  fsub 27, 4, 28
  0033c5c  fsel 13, 27, 4, 13
  0033c60  fabs 27, 5
  0033c64  fsub 4, 4, 28
  0033c68  fsubs 7, 30, 13
  0033c6c  fmuls 24, 13, 13
  0033c70  fmadds 11, 13, 29, 11
  0033c74  fsub 29, 2, 28
  0033c78  fsub 10, 7, 28
  0033c7c  fmadds 8, 24, 0, 11
  0033c80  fmr 11, 25
  0033c84  fsel 7, 10, 7, 28
  0033c88  fabs 10, 6
  0033c8c  stfs 6, 112(1)
  0033c90  stfs 5, 116(1)
  0033c94  fmuls 6, 24, 13
  0033c98  lwz 4, 112(1)
  0033c9c  fmr 13, 26
  0033ca0  fsel 4, 4, 30, 11
  0033ca4  fsqrts 7, 7
  0033ca8  fsubs 5, 10, 27
  0033cac  fmadds 3, 6, 12, 8
  0033cb0  stfs 5, 120(1)
  0033cb4  lfs 5, 112(1)
  0033cb8  lwz 5, 116(1)
  0033cbc  lfs 2, 116(1)
  0033cc0  fabs 5, 5
  0033cc4  lwz 6, 120(1)
  0033cc8  rlwinm 5, 5, 3, 29, 29
  0033ccc  fabs 6, 2
  0033cd0  lfs 2, 120(1)
  0033cd4  rlwimi 5, 6, 2, 30, 30
  0033cd8  fsub 8, 2, 28
  0033cdc  rlwimi 5, 4, 4, 28, 28
  0033ce0  ori 4, 3, 0
  0033ce4  rlwimi 4, 5, 2, 26, 28
  0033ce8  slwi 5, 5, 2
  0033cec  clrldi 4, 4, 32
  0033cf0  fsel 5, 8, 5, 27
  0033cf4  fcmpu 0, 5, 28
  0033cf8  fnmsubs 3, 3, 7, 13
  0033cfc  fsub 7, 2, 28
  0033d00  lfsx 2, 3, 5
  0033d04  fnmsubs 8, 3, 4, 13
  0033d08  fmsubs 9, 3, 4, 13
  0033d0c  fsel 4, 7, 6, 10
  0033d10  lfs 3, 4(4)
  0033d14  fsel 29, 29, 8, 9
  0033d18  bt 1, 0x33d24
  0033d1c  fmr 2, 28
  0033d20  b 0x33e48
  0033d24  fsubs 6, 4, 5
  0033d28  fadds 4, 4, 5
  0033d2c  addic 3, 1, 16
  0033d30  li 6, 2
  0033d34  addic 4, 3, 108
  0033d38  addic 5, 3, 124
  0033d3c  mtctr 6
  0033d40  fdivs 4, 6, 4
  0033d44  fmuls 5, 4, 4
  0033d48  stfs 4, 136(1)
  0033d4c  stfs 4, 128(1)
  0033d50  stfs 4, 132(1)
  0033d54  stfs 4, 124(1)
  0033d58  lfs 7, 136(1)
  0033d5c  lfs 8, 128(1)
  0033d60  lfs 9, 132(1)
  0033d64  fmuls 6, 5, 5
  0033d68  fmuls 8, 8, 5
  0033d6c  fmuls 7, 7, 6
  0033d70  fmuls 4, 6, 6
  0033d74  fmuls 6, 9, 6
  0033d78  stfs 8, 128(1)
  0033d7c  fmuls 5, 7, 5
  0033d80  stfs 6, 132(1)
  0033d84  stfs 5, 136(1)
  0033d88  lfs 5, 108(3)
  0033d8c  fmuls 5, 5, 4
  0033d90  stfs 5, 124(3)
  0033d94  lfs 5, 4(4)
  0033d98  addic 3, 3, 8
  0033d9c  addic 4, 4, 8
  0033da0  fmuls 5, 5, 4
  0033da4  stfs 5, 4(5)
  0033da8  addic 5, 5, 8
  0033dac  bdnz 0x33d88
  0033db0  li 5, 4
  0033db4  ori 3, 1, 0
  0033db8  mtctr 5
  0033dbc  lis 4, 115
  0033dc0  addic 5, 3, 124
  0033dc4  addic 4, 4, 22752
  0033dc8  ori 7, 5, 0
  0033dcc  lfs 4, 124(3)
  0033dd0  lfs 5, 0(4)
  0033dd4  fmuls 4, 4, 5
  0033dd8  lfs 5, 4(4)
  0033ddc  addic 4, 4, 8
  0033de0  stfs 4, 124(3)
  0033de4  lfs 4, 4(5)
  0033de8  addic 3, 3, 8
  0033dec  fmuls 4, 4, 5
  0033df0  stfs 4, 4(5)
  0033df4  addic 5, 5, 8
  0033df8  bdnz 0x33dcc
  0033dfc  fmr 4, 28
  0033e00  ori 3, 1, 0
  0033e04  mtctr 6
  0033e08  lfs 5, 124(3)
  0033e0c  fadds 4, 4, 5
  0033e10  addic 3, 3, 16
  0033e14  lfs 5, 4(7)
  0033e18  lfs 6, 8(7)
  0033e1c  lfs 7, 12(7)
  0033e20  addic 7, 7, 16
  0033e24  fadds 4, 4, 5
  0033e28  fadds 4, 4, 6
  0033e2c  fadds 4, 4, 7
  0033e30  bdnz 0x33e08
  0033e34  lis 3, 3
  0033e38  addi 3, 3, 14172
  0033e3c  lfs 5, 32(3)
  0033e40  fadds 4, 4, 5
  0033e44  fmadds 2, 4, 2, 3
  0033e48  lis 3, 3
  0033e4c  fmr 4, 31
  0033e50  addi 27, 3, 14172
  0033e54  addic 5, 28, 56
  0033e58  fmr 5, 28
  0033e5c  lfs 3, 36(27)
  0033e60  lfs 31, 4(27)
  0033e64  fmuls 2, 2, 3
  0033e68  lfs 6, 44(27)
  0033e6c  lfs 3, 40(27)
  0033e70  lfs 7, 48(27)
  0033e74  fneg 8, 2
  0033e78  fsub 2, 2, 3
  0033e7c  lfs 3, 52(27)
  0033e80  fsubs 9, 30, 8
  0033e84  fsub 10, 31, 8
  0033e88  fsel 8, 10, 8, 9
  0033e8c  fmuls 6, 8, 6
  0033e90  fmuls 6, 6, 7
  0033e94  fsel 2, 2, 28, 6
  0033e98  bl 0x50288
  0033e9c  nop
  0033ea0  fmr 2, 1
  0033ea4  fmr 1, 29
  0033ea8  stfs 2, 52(28)
  0033eac  bl 0x5025e0
  0033eb0  nop
  0033eb4  lfs 2, 56(27)
  0033eb8  fcmpu 0, 1, 2
  0033ebc  cror 6, 0, 2
  0033ec0  bt 6, 0x33ecc
  0033ec4  fmr 1, 2
  0033ec8  b 0x33ee8
  0033ecc  lis 3, 3
  0033ed0  addi 3, 3, 14172
  0033ed4  lfs 2, 60(3)
  0033ed8  fcmpu 0, 1, 2
  0033edc  cror 6, 1, 2
  0033ee0  bt 6, 0x33ee8
  0033ee4  fmr 1, 2
  0033ee8  addic 5, 31, 16
  0033eec  ori 3, 31, 0
  0033ef0  ori 4, 31, 0
  0033ef4  bl 0x1113e0
  0033ef8  nop
  0033efc  lfs 2, 4(31)
  0033f00  lfs 1, 0(31)
  0033f04  fmuls 4, 2, 2
  0033f08  lfs 3, 8(31)
  0033f0c  fmr 5, 28
  0033f10  fmadds 4, 1, 1, 4
  0033f14  fmr 6, 5
  0033f18  fmadds 4, 3, 3, 4
  0033f1c  fsqrts 7, 4
  0033f20  fcmpu 0, 7, 6
  0033f24  bt 2, 0x33f68
  0033f28  frsqrte 5, 4
  0033f2c  fmuls 6, 4, 5
  0033f30  fmuls 7, 31, 5
  0033f34  fnmsubs 6, 6, 5, 30
  0033f38  fmadds 5, 6, 7, 5
  0033f3c  fmuls 6, 4, 5
  0033f40  fmuls 7, 31, 5
  0033f44  fnmsubs 6, 6, 5, 30
  0033f48  fmadds 5, 6, 7, 5
  0033f4c  fmuls 4, 4, 5
  0033f50  fmuls 6, 31, 5
  0033f54  fnmsubs 4, 4, 5, 30
  0033f58  fmadds 28, 4, 6, 5
  0033f5c  fmuls 6, 1, 28
  0033f60  fmuls 5, 2, 28
  0033f64  fmuls 28, 3, 28
  0033f68  stfs 6, 0(31)
  0033f6c  stfs 5, 4(31)
  0033f70  stfs 28, 8(31)
  0033f74  lhz 3, 32(28)
  0033f78  cmpwi 3, 0
  0033f7c  bt 2, 0x340a8
  0033f80  ori 3, 29, 0
  0033f84  bl 0x4fffb4
  0033f88  nop
  0033f8c  lhz 3, 32(28)
  0033f90  extsh 3, 3
  0033f94  bl 0x502730
  0033f98  nop
  0033f9c  lis 3, 114
  0033fa0  fmr 30, 1
  0033fa4  lis 4, 3
  0033fa8  addi 29, 4, 14172
  0033fac  lwz 3, -11004(3)
  0033fb0  extsw 3, 3
  0033fb4  std 3, 160(1)
  0033fb8  lis 3, 114
  0033fbc  lfs 31, 4(29)
  0033fc0  lfs 2, -3056(3)
  0033fc4  lfd 1, 160(1)
  0033fc8  fcfid 1, 1
  0033fcc  frsp 1, 1
  0033fd0  fadds 1, 1, 31
  0033fd4  fmuls 1, 2, 1
  0033fd8  fctiwz 1, 1
  0033fdc  stfd 1, 160(1)
  0033fe0  lwz 3, 164(1)
  0033fe4  extsw 3, 3
  0033fe8  bl 0x502730
  0033fec  nop
  0033ff0  fdivs 4, 30, 1
  0033ff4  lfs 1, 68(31)
  0033ff8  lfs 3, 4(31)
  0033ffc  lfs 2, 64(31)
  0034000  lfs 8, 0(31)
  0034004  lfs 5, 72(31)
  0034008  lfs 9, 8(31)
  003400c  fsubs 1, 1, 3
  0034010  fsubs 2, 2, 8
  0034014  fsubs 10, 5, 9
  0034018  lfs 5, 76(31)
  003401c  stfs 5, 12(31)
  0034020  lfs 5, 0(29)
  0034024  fmr 6, 5
  0034028  fmr 7, 6
  003402c  fmadds 3, 4, 1, 3
  0034030  fmadds 2, 4, 2, 8
  0034034  fmadds 4, 4, 10, 9
  0034038  fmuls 1, 3, 3
  003403c  fmadds 1, 2, 2, 1
  0034040  fmadds 1, 4, 4, 1
  0034044  fsqrts 8, 1
  0034048  fcmpu 0, 8, 7
  003404c  bt 2, 0x3409c
  0034050  frsqrte 5, 1
  0034054  lis 3, 3
  0034058  addi 3, 3, 14172
  003405c  lfs 6, 8(3)
  0034060  fmuls 7, 1, 5
  0034064  fmuls 8, 31, 5
  0034068  fnmsubs 7, 7, 5, 6
  003406c  fmadds 5, 7, 8, 5
  0034070  fmuls 7, 1, 5
  0034074  fmuls 8, 31, 5
  0034078  fnmsubs 7, 7, 5, 6
  003407c  fmadds 5, 7, 8, 5
  0034080  fmuls 1, 1, 5
  0034084  fmuls 7, 31, 5
  0034088  fnmsubs 1, 1, 5, 6
  003408c  fmadds 5, 1, 7, 5
  0034090  fmuls 7, 2, 5
  0034094  fmuls 6, 3, 5
  0034098  fmuls 5, 4, 5
  003409c  stfs 7, 0(31)
  00340a0  stfs 6, 4(31)
  00340a4  stfs 5, 8(31)
  00340a8  lfs 5, 8(31)
  00340ac  lfs 3, 432(30)
  00340b0  lfs 2, 440(30)
  00340b4  fmuls 1, 3, 5
  00340b8  lfs 6, 4(31)
  00340bc  lfs 7, 0(31)
  00340c0  fmuls 4, 2, 6
  00340c4  lfs 8, 436(30)
  00340c8  fmuls 9, 8, 7
  00340cc  lis 3, 3
  00340d0  fmsubs 2, 2, 7, 1
  00340d4  fmsubs 1, 8, 5, 4
  00340d8  addi 3, 3, 14172
  00340dc  fmsubs 3, 3, 6, 9
  00340e0  lfs 8, 0(3)
  00340e4  fmuls 4, 2, 2
  00340e8  fmr 9, 8
  00340ec  li 3, 0
  00340f0  stw 3, 28(31)
  00340f4  fmadds 4, 1, 1, 4
  00340f8  fmr 10, 9
  00340fc  fmadds 4, 3, 3, 4
  0034100  fsqrts 11, 4
  0034104  fcmpu 0, 11, 10
  0034108  bt 2, 0x3415c
  003410c  frsqrte 8, 4
  0034110  lis 3, 3
  0034114  addi 3, 3, 14172
  0034118  lfs 9, 4(3)
  003411c  lfs 10, 8(3)
  0034120  fmuls 11, 4, 8
  0034124  fmuls 12, 9, 8
  0034128  fnmsubs 11, 11, 8, 10
  003412c  fmadds 8, 11, 12, 8
  0034130  fmuls 11, 4, 8
  0034134  fmuls 12, 9, 8
  0034138  fnmsubs 11, 11, 8, 10
  003413c  fmadds 8, 11, 12, 8
  0034140  fmuls 4, 4, 8
  0034144  fmuls 9, 9, 8
  0034148  fnmsubs 4, 4, 8, 10
  003414c  fmadds 8, 4, 9, 8
  0034150  fmuls 10, 1, 8
  0034154  fmuls 9, 2, 8
  0034158  fmuls 8, 3, 8
  003415c  fmuls 1, 5, 9
  0034160  li 3, 0
  0034164  fmuls 2, 7, 8
  0034168  stfs 10, 16(31)
  003416c  fmuls 3, 6, 10
  0034170  stfs 9, 20(31)
  0034174  stfs 8, 24(31)
  0034178  stw 3, 44(31)
  003417c  fmsubs 1, 6, 8, 1
  0034180  fmsubs 2, 5, 10, 2
  0034184  fmsubs 3, 7, 9, 3
  0034188  stfs 1, 32(31)
  003418c  stfs 2, 36(31)
  0034190  stfs 3, 40(31)
  0034194  ld 0, 320(1)
  0034198  mtlr 0
  003419c  lfd 22, 224(1)
  00341a0  lfd 23, 232(1)
  00341a4  lfd 24, 240(1)
  00341a8  lfd 25, 248(1)
  00341ac  lfd 26, 256(1)
  00341b0  lfd 27, 264(1)
  00341b4  lfd 28, 272(1)
  00341b8  lfd 29, 280(1)
  00341bc  lfd 30, 288(1)
  00341c0  lfd 31, 296(1)
  00341c4  ld 27, 184(1)
  00341c8  ld 28, 192(1)
  00341cc  ld 29, 200(1)
  00341d0  ld 30, 208(1)
  00341d4  ld 31, 216(1)
  00341d8  addi 1, 1, 304
  00341dc  blr

Cam0_HandleRunningAtCam:   # 0x341f8, 0x1ec bytes
  00341f8  lis 6, 149
  00341fc  lwz 8, 112(3)
  0034200  addic 6, 6, 5056
  0034204  lfs 4, 528(6)
  0034208  lfs 3, 532(6)
  003420c  lfs 2, 536(6)
  0034210  lhz 7, 550(8)
  0034214  cmpwi 7, 0
  0034218  bf 2, 0x343ac
  003421c  lis 7, 3
  0034220  lhz 10, 548(8)
  0034224  addi 9, 7, 16864
  0034228  lwz 7, 564(6)
  003422c  cmpwi 10, 0
  0034230  lfs 1, 564(6)
  0034234  cmpwi 1, 7, 0
  0034238  crorc 2, 2, 6
  003423c  lfs 5, 0(9)
  0034240  bt 2, 0x34280
  0034244  lis 9, 151
  0034248  lfs 6, 4(3)
  003424c  addic 9, 9, -25376
  0034250  lwz 9, 8320(9)
  0034254  lfs 7, 0(3)
  0034258  lfs 8, 196(9)
  003425c  lfs 9, 192(9)
  0034260  fmuls 6, 8, 6
  0034264  lfs 8, 200(9)
  0034268  lfs 10, 8(3)
  003426c  fmadds 6, 9, 7, 6
  0034270  fmadds 6, 8, 10, 6
  0034274  fcmpu 0, 6, 5
  0034278  cror 6, 0, 2
  003427c  bt 6, 0x342b4
  0034280  lis 9, 14545
  0034284  clrlwi 7, 7, 1
  0034288  ori 9, 9, 46871
  003428c  cmpw 7, 9
  0034290  bf 1, 0x343ac
  0034294  lfs 6, 4(3)
  0034298  lfs 7, 0(3)
  003429c  fmuls 3, 3, 6
  00342a0  lfs 6, 8(3)
  00342a4  fmadds 3, 4, 7, 3
  00342a8  fmadds 2, 2, 6, 3
  00342ac  fcmpu 0, 2, 5
  00342b0  bt 1, 0x343ac
  00342b4  lis 3, 3
  00342b8  li 7, 4
  00342bc  vspltisw 2, -1
  00342c0  addi 3, 3, 16864
  00342c4  lis 9, 114
  00342c8  li 10, -3056
  00342cc  vslw 2, 2, 2
  00342d0  <unknown>
  00342d4  li 7, 548
  00342d8  vspltw 3, 3, 0
  00342dc  <unknown>
  00342e0  lfs 2, 392(8)
  00342e4  lis 9, 151
  00342e8  vmaddfp 2, 4, 3, 2
  00342ec  addic 9, 9, -25376
  00342f0  vctsxs 2, 2, 0
  00342f4  vsplth 2, 2, 1
  00342f8  stvehx 2, 7, 8
  00342fc  lfs 4, 8(3)
  0034300  lfs 5, 12(3)
  0034304  fmuls 1, 1, 4
  0034308  lfs 3, 16(3)
  003430c  lbz 3, 8356(9)
  0034310  cmpwi 3, 1
  0034314  fsub 4, 5, 1
  0034318  fsel 1, 4, 1, 5
  003431c  bt 2, 0x34324
  0034320  lfs 3, 556(8)
  0034324  fsubs 4, 3, 2
  0034328  lfs 3, 552(8)
  003432c  fmadds 2, 4, 1, 2
  0034330  fcmpu 0, 2, 3
  0034334  cror 6, 0, 2
  0034338  bt 6, 0x34344
  003433c  fmr 3, 2
  0034340  stfs 2, 552(8)
  0034344  lwz 6, 384(6)
  0034348  lhz 3, 134(6)
  003434c  cmpwi 3, 0
  0034350  bf 2, 0x34370
  0034354  lwz 6, 112(6)
  0034358  li 3, 1
  003435c  lis 7, 15172
  0034360  ori 7, 7, 39846
  0034364  sth 3, 364(6)
  0034368  stfs 3, 368(6)
  003436c  stw 7, 376(6)
  0034370  lis 3, 114
  0034374  lis 6, 114
  0034378  lfs 2, -11020(3)
  003437c  lfs 3, -11060(6)
  0034380  lis 3, 114
  0034384  fsubs 2, 2, 3
  0034388  lis 6, 114
  003438c  fmadds 2, 2, 1, 3
  0034390  stfs 2, 0(4)
  0034394  lfs 2, -11016(3)
  0034398  lfs 3, -11056(6)
  003439c  fsubs 2, 2, 3
  00343a0  fmadds 1, 2, 1, 3
  00343a4  stfs 1, 0(5)
  00343a8  b 0x343e0
  00343ac  lhz 3, 548(8)
  00343b0  cmpwi 3, 0
  00343b4  bt 2, 0x343c8
  00343b8  li 3, 0
  00343bc  lfs 1, 392(8)
  00343c0  sth 3, 548(8)
  00343c4  stfs 1, 552(8)
  00343c8  lis 3, 114
  00343cc  lis 6, 114
  00343d0  lfs 1, -11060(3)
  00343d4  stfs 1, 0(4)
  00343d8  lfs 1, -11056(6)
  00343dc  stfs 1, 0(5)
  00343e0  blr

UpdateCamPosition_0:   # 0x343f8, 0x644 bytes
  00343f8  stdu 1, -368(1)
  00343fc  mflr 0
  0034400  std 0, 384(1)
  0034404  stfd 15, 232(1)
  0034408  stfd 16, 240(1)
  003440c  stfd 17, 248(1)
  0034410  stfd 18, 256(1)
  0034414  stfd 19, 264(1)
  0034418  stfd 20, 272(1)
  003441c  stfd 21, 280(1)
  0034420  stfd 22, 288(1)
  0034424  stfd 23, 296(1)
  0034428  stfd 24, 304(1)
  003442c  stfd 25, 312(1)
  0034430  stfd 26, 320(1)
  0034434  stfd 27, 328(1)
  0034438  stfd 28, 336(1)
  003443c  stfd 29, 344(1)
  0034440  stfd 30, 352(1)
  0034444  stfd 31, 360(1)
  0034448  std 31, 224(1)
  003444c  ori 31, 3, 0
  0034450  std 30, 216(1)
  0034454  lis 3, 3
  0034458  std 28, 200(1)
  003445c  lwz 30, 112(31)
  0034460  addi 28, 3, 17380
  0034464  lfs 1, 324(30)
  0034468  lfs 2, 320(30)
  003446c  fmuls 1, 1, 1
  0034470  lfs 3, 328(30)
  0034474  lis 3, 149
  0034478  lfs 4, 144(30)
  003447c  std 27, 192(1)
  0034480  addic 4, 1, 176
  0034484  addic 27, 3, 5056
  0034488  addic 5, 1, 180
  003448c  ori 3, 31, 0
  0034490  fmadds 1, 2, 2, 1
  0034494  lfs 2, 304(30)
  0034498  lfs 5, 148(30)
  003449c  fadds 2, 4, 2
  00344a0  lfs 4, 308(30)
  00344a4  fadds 4, 5, 4
  00344a8  fmadds 1, 3, 3, 1
  00344ac  lfs 3, 152(30)
  00344b0  lfs 5, 312(30)
  00344b4  fadds 3, 3, 5
  00344b8  stfs 2, 0(30)
  00344bc  fsqrts 31, 1
  00344c0  lfs 1, 156(30)
  00344c4  lfs 2, 348(30)
  00344c8  stfs 4, 4(30)
  00344cc  lfs 4, 512(30)
  00344d0  stfs 3, 8(30)
  00344d4  stfs 1, 12(30)
  00344d8  std 29, 208(1)
  00344dc  std 26, 184(1)
  00344e0  fsubs 30, 2, 4
  00344e4  bl 0x341f8
  00344e8  lfs 27, 0(28)
  00344ec  fmr 2, 30
  00344f0  lfs 3, 176(1)
  00344f4  addic 5, 30, 344
  00344f8  lfs 4, 180(1)
  00344fc  fmr 5, 27
  0034500  fmr 1, 31
  0034504  bl 0x501e8
  0034508  nop
  003450c  lfs 2, 308(30)
  0034510  lfs 3, 436(27)
  0034514  fmr 17, 1
  0034518  lfs 4, 324(30)
  003451c  fmuls 2, 2, 3
  0034520  lfs 5, 304(30)
  0034524  fmuls 3, 4, 3
  0034528  lfs 6, 432(27)
  003452c  lfs 7, 320(30)
  0034530  lfs 1, 312(30)
  0034534  lfs 4, 440(27)
  0034538  lfs 8, 328(30)
  003453c  fmadds 2, 5, 6, 2
  0034540  fmadds 3, 7, 6, 3
  0034544  lfs 31, 4(28)
  0034548  lis 26, 115
  003454c  fmr 5, 27
  0034550  addic 29, 26, 22720
  0034554  fmadds 29, 1, 4, 2
  0034558  fmadds 28, 8, 4, 3
  003455c  lfs 3, 22720(26)
  0034560  lfs 4, 4(29)
  0034564  lfs 6, 8(29)
  0034568  fdivs 1, 29, 30
  003456c  lfs 24, 8(28)
  0034570  lfs 7, 12(29)
  0034574  lis 3, 114
  0034578  lfs 26, 12(28)
  003457c  lis 4, 114
  0034580  addic 5, 30, 340
  0034584  lfs 0, -11044(3)
  0034588  lfs 30, -11040(4)
  003458c  fdivs 2, 28, 17
  0034590  fabs 8, 1
  0034594  fsub 9, 1, 27
  0034598  fsel 8, 9, 1, 8
  003459c  fsub 1, 1, 27
  00345a0  fabs 9, 2
  00345a4  fsub 10, 2, 27
  00345a8  fsubs 11, 31, 8
  00345ac  fsel 1, 1, 31, 24
  00345b0  fsel 9, 10, 2, 9
  00345b4  fsub 10, 11, 27
  00345b8  fsub 2, 2, 27
  00345bc  fsubs 12, 31, 9
  00345c0  fsel 10, 10, 11, 27
  00345c4  fmuls 11, 8, 8
  00345c8  fmuls 25, 9, 9
  00345cc  fsub 13, 12, 27
  00345d0  fsqrts 10, 10
  00345d4  fsel 12, 13, 12, 27
  00345d8  fmadds 13, 8, 4, 3
  00345dc  fmuls 8, 11, 8
  00345e0  fmadds 3, 9, 4, 3
  00345e4  fmuls 4, 25, 9
  00345e8  fsel 9, 2, 31, 24
  00345ec  fsqrts 12, 12
  00345f0  fmadds 11, 11, 6, 13
  00345f4  fmadds 6, 25, 6, 3
  00345f8  fmr 3, 0
  00345fc  fmadds 8, 8, 7, 11
  0034600  fmadds 6, 4, 7, 6
  0034604  fmr 4, 30
  0034608  fnmsubs 2, 8, 10, 26
  003460c  fmuls 2, 2, 1
  0034610  fnmsubs 1, 6, 12, 26
  0034614  fmuls 1, 1, 9
  0034618  bl 0x50288
  003461c  nop
  0034620  lfs 2, 432(27)
  0034624  lfs 3, 320(30)
  0034628  lfs 4, 436(27)
  003462c  fnmsubs 3, 2, 28, 3
  0034630  lfs 5, 440(27)
  0034634  lfs 6, 304(30)
  0034638  lfs 7, 308(30)
  003463c  lfs 8, 312(30)
  0034640  fnmsubs 25, 2, 29, 6
  0034644  fnmsubs 30, 4, 29, 7
  0034648  fnmsubs 29, 5, 29, 8
  003464c  stfs 3, 112(1)
  0034650  lfs 2, 324(30)
  0034654  fnmsubs 2, 4, 28, 2
  0034658  fmuls 4, 30, 30
  003465c  fmuls 6, 2, 2
  0034660  fmadds 4, 25, 25, 4
  0034664  stfs 2, 116(1)
  0034668  lfs 7, 328(30)
  003466c  fnmsubs 5, 5, 28, 7
  0034670  fmuls 2, 30, 2
  0034674  fmadds 6, 3, 3, 6
  0034678  fmadds 4, 29, 29, 4
  003467c  fmadds 2, 25, 3, 2
  0034680  fmadds 6, 5, 5, 6
  0034684  fsqrts 4, 4
  0034688  stfs 5, 120(1)
  003468c  lis 3, 114
  0034690  lis 4, 114
  0034694  addic 5, 30, 336
  0034698  fsqrts 6, 6
  003469c  fmadds 2, 29, 5, 2
  00346a0  fmr 28, 1
  00346a4  fmr 1, 27
  00346a8  fmr 5, 27
  00346ac  fmuls 3, 4, 6
  00346b0  lfs 6, 22720(26)
  00346b4  lfs 7, 4(29)
  00346b8  lfs 8, 8(29)
  00346bc  fdivs 2, 2, 3
  00346c0  lfs 9, 12(29)
  00346c4  lfs 3, 332(30)
  00346c8  stfs 3, 124(1)
  00346cc  lfs 3, -11052(3)
  00346d0  lfs 4, -11048(4)
  00346d4  fabs 10, 2
  00346d8  fsub 11, 2, 27
  00346dc  fsel 10, 11, 2, 10
  00346e0  fsub 2, 2, 27
  00346e4  fsubs 11, 31, 10
  00346e8  fmadds 6, 10, 7, 6
  00346ec  fmuls 12, 10, 10
  00346f0  fsel 2, 2, 31, 24
  00346f4  fsub 13, 11, 27
  00346f8  fmuls 10, 12, 10
  00346fc  fmadds 6, 12, 8, 6
  0034700  fsel 7, 13, 11, 27
  0034704  fmadds 6, 10, 9, 6
  0034708  fsqrts 7, 7
  003470c  fnmsubs 6, 6, 7, 26
  0034710  fnmsubs 2, 6, 2, 26
  0034714  bl 0x50288
  0034718  nop
  003471c  lfs 2, 120(1)
  0034720  lfs 3, 432(27)
  0034724  lfs 4, 440(27)
  0034728  fmuls 5, 3, 2
  003472c  lfs 6, 116(1)
  0034730  lfs 7, 112(1)
  0034734  fmuls 8, 4, 6
  0034738  lfs 9, 436(27)
  003473c  li 28, 0
  0034740  fmuls 10, 9, 7
  0034744  addic 26, 1, 144
  0034748  addic 4, 1, 112
  003474c  addic 5, 27, 432
  0034750  fmsubs 4, 4, 7, 5
  0034754  ori 3, 26, 0
  0034758  fmsubs 2, 9, 2, 8
  003475c  fmsubs 3, 3, 6, 10
  0034760  fmuls 5, 4, 30
  0034764  stfs 4, 132(1)
  0034768  stfs 2, 128(1)
  003476c  stfs 3, 136(1)
  0034770  stw 28, 140(1)
  0034774  fmadds 2, 2, 25, 5
  0034778  fmadds 2, 3, 29, 2
  003477c  fsub 2, 2, 27
  0034780  fsel 2, 2, 31, 24
  0034784  fmuls 1, 1, 2
  0034788  bl 0x1113e0
  003478c  nop
  0034790  lfs 2, 148(1)
  0034794  fmr 1, 28
  0034798  lfs 3, 440(27)
  003479c  addic 5, 1, 128
  00347a0  lfs 4, 152(1)
  00347a4  ori 3, 26, 0
  00347a8  lfs 5, 436(27)
  00347ac  ori 4, 26, 0
  00347b0  lfs 6, 432(27)
  00347b4  fmuls 7, 4, 5
  00347b8  lfs 8, 144(1)
  00347bc  fmuls 9, 2, 6
  00347c0  stw 28, 140(1)
  00347c4  fmuls 10, 8, 3
  00347c8  fmsubs 2, 2, 3, 7
  00347cc  fmsubs 3, 8, 5, 9
  00347d0  fmsubs 4, 4, 6, 10
  00347d4  stfs 2, 128(1)
  00347d8  stfs 3, 136(1)
  00347dc  stfs 4, 132(1)
  00347e0  bl 0x1113e0
  00347e4  nop
  00347e8  lfs 1, 148(1)
  00347ec  lfs 15, 144(1)
  00347f0  fmuls 1, 1, 1
  00347f4  lfs 2, 152(1)
  00347f8  lfs 28, 352(30)
  00347fc  lfs 30, 432(27)
  0034800  lfs 29, 436(27)
  0034804  lfs 0, 440(27)
  0034808  lfs 25, 444(27)
  003480c  lfs 23, 448(27)
  0034810  fmadds 1, 15, 15, 1
  0034814  lfs 22, 452(27)
  0034818  lfs 21, 456(27)
  003481c  lfs 20, 160(30)
  0034820  lfs 19, 164(30)
  0034824  lfs 18, 168(30)
  0034828  fmadds 16, 2, 2, 1
  003482c  fsqrts 16, 16
  0034830  fcmpu 0, 16, 27
  0034834  bf 2, 0x34870
  0034838  fmr 1, 27
  003483c  stfs 15, 320(30)
  0034840  lfs 2, 148(1)
  0034844  li 3, 0
  0034848  stfs 2, 324(30)
  003484c  lfs 3, 152(1)
  0034850  stfs 3, 328(30)
  0034854  lfs 15, 156(1)
  0034858  stw 3, 328(30)
  003485c  stw 3, 324(30)
  0034860  fmr 2, 1
  0034864  stw 3, 320(30)
  0034868  fmr 3, 2
  003486c  b 0x34898
  0034870  fdivs 1, 17, 16
  0034874  fmuls 3, 15, 1
  0034878  stfs 3, 320(30)
  003487c  lfs 2, 148(1)
  0034880  fmuls 2, 2, 1
  0034884  stfs 2, 324(30)
  0034888  lfs 4, 152(1)
  003488c  fmuls 1, 4, 1
  0034890  stfs 1, 328(30)
  0034894  lfs 15, 156(1)
  0034898  fmr 10, 3
  003489c  fmuls 4, 2, 2
  00348a0  lis 3, 115
  00348a4  stfs 15, 332(30)
  00348a8  lfs 7, 4(29)
  00348ac  fmadds 30, 30, 28, 20
  00348b0  lfs 8, 8(29)
  00348b4  fmadds 29, 29, 28, 19
  00348b8  lfs 9, 12(29)
  00348bc  fmadds 28, 0, 28, 18
  00348c0  lfs 6, 22720(3)
  00348c4  fmadds 4, 10, 10, 4
  00348c8  fmadds 5, 1, 1, 4
  00348cc  fmuls 4, 2, 22
  00348d0  fsqrts 5, 5
  00348d4  fmadds 4, 10, 23, 4
  00348d8  fmadds 4, 1, 21, 4
  00348dc  fcmpu 0, 5, 27
  00348e0  bt 2, 0x349ac
  00348e4  fdivs 5, 4, 5
  00348e8  lis 3, 3
  00348ec  addi 3, 3, 17380
  00348f0  lfs 4, 16(3)
  00348f4  fabs 11, 5
  00348f8  fsub 12, 5, 27
  00348fc  fsel 11, 12, 5, 11
  0034900  fsub 5, 5, 27
  0034904  fsubs 12, 31, 11
  0034908  fmadds 6, 11, 7, 6
  003490c  fmuls 13, 11, 11
  0034910  fsel 5, 5, 31, 24
  0034914  fsub 0, 12, 27
  0034918  fmuls 11, 13, 11
  003491c  fmadds 6, 13, 8, 6
  0034920  fsel 7, 0, 12, 27
  0034924  fmadds 6, 11, 9, 6
  0034928  fsqrts 7, 7
  003492c  fnmsubs 6, 6, 7, 26
  0034930  fnmsubs 31, 6, 5, 26
  0034934  fabs 31, 31
  0034938  fcmpu 0, 31, 4
  003493c  cror 6, 1, 2
  0034940  bt 6, 0x349ac
  0034944  fmr 5, 2
  0034948  fmr 6, 1
  003494c  li 29, 0
  0034950  fmuls 9, 22, 3
  0034954  fmr 1, 4
  0034958  fmr 2, 31
  003495c  stw 29, 172(1)
  0034960  fmuls 7, 21, 5
  0034964  fmuls 8, 23, 6
  0034968  fmsubs 5, 23, 5, 9
  003496c  fmsubs 4, 22, 6, 7
  0034970  fmsubs 3, 21, 3, 8
  0034974  stfs 4, 160(1)
  0034978  stfs 3, 164(1)
  003497c  stfs 5, 168(1)
  0034980  bl 0x5025e0
  0034984  nop
  0034988  addic 3, 30, 320
  003498c  addic 5, 1, 160
  0034990  ori 4, 3, 0
  0034994  bl 0x1113e0
  0034998  nop
  003499c  stw 29, 344(30)
  00349a0  stw 29, 336(30)
  00349a4  stw 29, 340(30)
  00349a8  lfs 10, 320(30)
  00349ac  fadds 1, 30, 10
  00349b0  stfs 1, 48(31)
  00349b4  lfs 1, 324(30)
  00349b8  fadds 1, 29, 1
  00349bc  stfs 1, 52(31)
  00349c0  lfs 1, 328(30)
  00349c4  stfs 25, 60(31)
  00349c8  fadds 1, 28, 1
  00349cc  stfs 1, 56(31)
  00349d0  ld 0, 384(1)
  00349d4  mtlr 0
  00349d8  lfd 15, 232(1)
  00349dc  lfd 16, 240(1)
  00349e0  lfd 17, 248(1)
  00349e4  lfd 18, 256(1)
  00349e8  lfd 19, 264(1)
  00349ec  lfd 20, 272(1)
  00349f0  lfd 21, 280(1)
  00349f4  lfd 22, 288(1)
  00349f8  lfd 23, 296(1)
  00349fc  lfd 24, 304(1)
  0034a00  lfd 25, 312(1)
  0034a04  lfd 26, 320(1)
  0034a08  lfd 27, 328(1)
  0034a0c  lfd 28, 336(1)
  0034a10  lfd 29, 344(1)
  0034a14  lfd 30, 352(1)
  0034a18  lfd 31, 360(1)
  0034a1c  ld 26, 184(1)
  0034a20  ld 27, 192(1)
  0034a24  ld 28, 200(1)
  0034a28  ld 29, 208(1)
  0034a2c  ld 30, 216(1)
  0034a30  ld 31, 224(1)
  0034a34  addi 1, 1, 368
  0034a38  blr

Cam0_DrawCollSpheres:   # 0x34a3c, 0x120 bytes
  0034a3c  stdu 1, -176(1)
  0034a40  mflr 0
  0034a44  std 0, 192(1)
  0034a48  std 25, 120(1)
  0034a4c  std 29, 152(1)
  0034a50  li 25, 0
  0034a54  std 31, 168(1)
  0034a58  std 30, 160(1)
  0034a5c  std 28, 144(1)
  0034a60  std 27, 136(1)
  0034a64  std 26, 128(1)
  0034a68  std 24, 112(1)
  0034a6c  ori 29, 25, 0
  0034a70  ori 31, 29, 0
  0034a74  ori 26, 29, 0
  0034a78  ori 30, 31, 0
  0034a7c  lis 27, 149
  0034a80  lwz 27, 16512(27)
  0034a84  lwzx 3, 27, 30
  0034a88  cmpwi 3, 0
  0034a8c  bt 2, 0x34b0c
  0034a90  addc 27, 3, 27
  0034a94  ori 28, 29, 0
  0034a98  clrldi 27, 27, 32
  0034a9c  lwz 3, 0(27)
  0034aa0  cmpwi 3, 0
  0034aa4  bf 1, 0x34b0c
  0034aa8  ori 24, 27, 0
  0034aac  lwz 4, 32(24)
  0034ab0  cmpwi 4, 5
  0034ab4  bf 2, 0x34afc
  0034ab8  lis 3, 165
  0034abc  lwz 4, 36(24)
  0034ac0  slwi 4, 4, 7
  0034ac4  lwz 3, 7112(3)
  0034ac8  addc 3, 3, 4
  0034acc  clrldi 3, 3, 32
  0034ad0  lfs 1, 4(3)
  0034ad4  lfs 2, 0(3)
  0034ad8  fmuls 1, 1, 1
  0034adc  lfs 3, 8(3)
  0034ae0  addic 3, 3, 48
  0034ae4  fmadds 1, 2, 2, 1
  0034ae8  fmadds 1, 3, 3, 1
  0034aec  fsqrts 1, 1
  0034af0  bl 0x65470
  0034af4  nop
  0034af8  lwz 3, 0(27)
  0034afc  addic 28, 28, 1
  0034b00  addic 24, 24, 48
  0034b04  cmpw 28, 3
  0034b08  bt 0, 0x34aac
  0034b0c  addic 26, 26, 1
  0034b10  addic 30, 30, 4
  0034b14  cmpwi 26, 64
  0034b18  bt 0, 0x34a7c
  0034b1c  addic 25, 25, 1
  0034b20  addic 31, 31, 256
  0034b24  cmpwi 25, 64
  0034b28  bt 0, 0x34a74
  0034b2c  ld 0, 192(1)
  0034b30  mtlr 0
  0034b34  ld 24, 112(1)
  0034b38  ld 25, 120(1)
  0034b3c  ld 26, 128(1)
  0034b40  ld 27, 136(1)
  0034b44  ld 28, 144(1)
  0034b48  ld 29, 152(1)
  0034b4c  ld 30, 160(1)
  0034b50  ld 31, 168(1)
  0034b54  addi 1, 1, 176
  0034b58  blr

UpdateFollowCamera:   # 0x34b5c, 0x74 bytes
  0034b5c  stdu 1, -128(1)
  0034b60  mflr 0
  0034b64  std 0, 144(1)
  0034b68  std 31, 120(1)
  0034b6c  ori 31, 3, 0
  0034b70  bl 0x34a3c
  0034b74  ori 3, 31, 0
  0034b78  bl 0x335f0
  0034b7c  ori 3, 31, 0
  0034b80  addic 4, 1, 112
  0034b84  addic 5, 1, 116
  0034b88  bl 0x32e10
  0034b8c  lfs 1, 112(1)
  0034b90  ori 3, 31, 0
  0034b94  lfs 2, 116(1)
  0034b98  bl 0x33068
  0034b9c  ori 3, 31, 0
  0034ba0  bl 0x32100
  0034ba4  ori 3, 31, 0
  0034ba8  bl 0x343f8
  0034bac  ori 3, 31, 0
  0034bb0  bl 0x32bd0
  0034bb4  ori 3, 31, 0
  0034bb8  bl 0x337a0
  0034bbc  ld 0, 144(1)
  0034bc0  mtlr 0
  0034bc4  ld 31, 120(1)
  0034bc8  addi 1, 1, 128
  0034bcc  blr

WarpFollowCam:   # 0x34bd0, 0x50 bytes
  0034bd0  lis 4, 149
  0034bd4  lfs 1, 0(3)
  0034bd8  addic 4, 4, 5056
  0034bdc  stfs 1, 320(4)
  0034be0  lfs 1, 4(3)
  0034be4  stfs 1, 324(4)
  0034be8  lfs 1, 8(3)
  0034bec  lwz 5, 384(4)
  0034bf0  stfs 1, 328(4)
  0034bf4  lfs 1, 12(3)
  0034bf8  stfs 1, 332(4)
  0034bfc  lfs 1, 0(3)
  0034c00  stfs 1, 48(5)
  0034c04  lfs 1, 4(3)
  0034c08  stfs 1, 52(5)
  0034c0c  lfs 1, 8(3)
  0034c10  stfs 1, 56(5)
  0034c14  lfs 1, 12(3)
  0034c18  stfs 1, 60(5)
  0034c1c  blr

Camera0_Activate:   # 0x34c20, 0x8 bytes
  0034c20  li 3, 0
  0034c24  blr

Camera0_Update:   # 0x34c28, 0xb4 bytes
  0034c28  stdu 1, -128(1)
  0034c2c  mflr 0
  0034c30  std 0, 144(1)
  0034c34  lis 4, 114
  0034c38  lis 5, 114
  0034c3c  lis 6, 114
  0034c40  std 31, 120(1)
  0034c44  addic 5, 5, -10880
  0034c48  ori 31, 3, 0
  0034c4c  lwz 4, -1216(4)
  0034c50  slwi 4, 4, 2
  0034c54  extsw 4, 4
  0034c58  lfsx 1, 5, 4
  0034c5c  stfs 1, -5548(6)
  0034c60  bl 0x2c268
  0034c64  ori 3, 31, 0
  0034c68  bl 0x2f530
  0034c6c  ori 3, 31, 0
  0034c70  bl 0x2e3a0
  0034c74  bl 0x34a3c
  0034c78  ori 3, 31, 0
  0034c7c  bl 0x335f0
  0034c80  ori 3, 31, 0
  0034c84  addic 4, 1, 112
  0034c88  addic 5, 1, 116
  0034c8c  bl 0x32e10
  0034c90  lfs 1, 112(1)
  0034c94  ori 3, 31, 0
  0034c98  lfs 2, 116(1)
  0034c9c  bl 0x33068
  0034ca0  ori 3, 31, 0
  0034ca4  bl 0x32100
  0034ca8  ori 3, 31, 0
  0034cac  bl 0x343f8
  0034cb0  ori 3, 31, 0
  0034cb4  bl 0x32bd0
  0034cb8  ori 3, 31, 0
  0034cbc  bl 0x337a0
  0034cc0  ori 3, 31, 0
  0034cc4  bl 0x2eda8
  0034cc8  ld 0, 144(1)
  0034ccc  mtlr 0
  0034cd0  ld 31, 120(1)
  0034cd4  addi 1, 1, 128
  0034cd8  blr

STUB_00034cdc:   # 0x34cdc, 0x4 bytes
  0034cdc  blr
