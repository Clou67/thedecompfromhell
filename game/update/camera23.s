# game/update/camera23.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

SECTION_HEADER_CAMERA_UNK:   # 0x44a20, 0x14 bytes
  0044a20  lis 3, 114
  0044a24  lis 4, 1
  0044a28  addic 3, 3, -7024
  0044a2c  stw 4, 72(3)
  0044a30  blr

Cam23_IsTriggered:   # 0x44a38, 0x194 bytes
  0044a38  stdu 1, -128(1)
  0044a3c  mflr 0
  0044a40  std 0, 144(1)
  0044a44  lis 5, 149
  0044a48  lis 4, 149
  0044a4c  lhz 3, 132(3)
  0044a50  addic 5, 5, 5056
  0044a54  extsh 3, 3
  0044a58  sldi 3, 3, 5
  0044a5c  lwz 4, 16468(4)
  0044a60  lwz 5, 384(5)
  0044a64  std 31, 120(1)
  0044a68  addc 3, 4, 3
  0044a6c  clrldi 31, 3, 32
  0044a70  lhz 4, 134(5)
  0044a74  lwz 3, 112(5)
  0044a78  cmpwi 4, 0
  0044a7c  lwz 31, 28(31)
  0044a80  bt 2, 0x44a8c
  0044a84  li 3, 0
  0044a88  b 0x44bb8
  0044a8c  lhz 4, 70(31)
  0044a90  cmpwi 4, 0
  0044a94  bt 2, 0x44ab4
  0044a98  lis 4, 151
  0044a9c  addic 4, 4, -25376
  0044aa0  lbz 4, 8356(4)
  0044aa4  cmpwi 4, 1
  0044aa8  bt 2, 0x44ab4
  0044aac  li 3, 0
  0044ab0  b 0x44bb8
  0044ab4  lhz 4, 68(31)
  0044ab8  cmpwi 4, 0
  0044abc  bt 2, 0x44adc
  0044ac0  lis 4, 151
  0044ac4  addic 4, 4, -25376
  0044ac8  lbz 4, 8356(4)
  0044acc  cmpwi 4, 1
  0044ad0  bf 2, 0x44adc
  0044ad4  li 3, 0
  0044ad8  b 0x44bb8
  0044adc  lwz 4, 52(31)
  0044ae0  cmpwi 4, 0
  0044ae4  bt 2, 0x44b20
  0044ae8  lis 4, 15395
  0044aec  lwz 5, 356(3)
  0044af0  ori 4, 4, 55050
  0044af4  clrlwi 5, 5, 1
  0044af8  cmpw 5, 4
  0044afc  bt 1, 0x44b18
  0044b00  lis 4, 15395
  0044b04  lwz 3, 432(3)
  0044b08  ori 4, 4, 55050
  0044b0c  clrlwi 3, 3, 1
  0044b10  cmpw 3, 4
  0044b14  bf 1, 0x44b20
  0044b18  li 3, 0
  0044b1c  b 0x44bb8
  0044b20  lwz 3, 12(31)
  0044b24  cmpwi 3, 0
  0044b28  bt 0, 0x44b4c
  0044b2c  lis 5, 151
  0044b30  extsw 4, 3
  0044b34  addic 3, 5, -25376
  0044b38  addic 3, 3, 128
  0044b3c  bl 0x110b70
  0044b40  nop
  0044b44  cmpwi 3, 0
  0044b48  bf 2, 0x44ba4
  0044b4c  lwz 3, 16(31)
  0044b50  cmpwi 3, 0
  0044b54  bt 0, 0x44b78
  0044b58  lis 5, 151
  0044b5c  extsw 4, 3
  0044b60  addic 3, 5, -25376
  0044b64  addic 3, 3, 128
  0044b68  bl 0x110c60
  0044b6c  nop
  0044b70  cmpwi 3, 0
  0044b74  bf 2, 0x44ba4
  0044b78  lwz 3, 8(31)
  0044b7c  cmpwi 3, 0
  0044b80  bt 0, 0x44bac
  0044b84  lis 5, 151
  0044b88  extsw 4, 3
  0044b8c  addic 3, 5, -25376
  0044b90  addic 3, 3, 128
  0044b94  bl 0x110d48
  0044b98  nop
  0044b9c  cmpwi 3, 0
  0044ba0  bt 2, 0x44bac
  0044ba4  li 3, 1
  0044ba8  b 0x44bb8
  0044bac  li 4, 1
  0044bb0  li 3, 0
  0044bb4  sth 4, 38(31)
  0044bb8  ld 0, 144(1)
  0044bbc  mtlr 0
  0044bc0  ld 31, 120(1)
  0044bc4  addi 1, 1, 128
  0044bc8  blr

Cam23_ModifyFollowCam:   # 0x44c00, 0x51c bytes
  0044c00  stdu 1, -160(1)
  0044c04  mflr 0
  0044c08  std 0, 176(1)
  0044c0c  stfd 30, 144(1)
  0044c10  stfd 31, 152(1)
  0044c14  std 30, 128(1)
  0044c18  ori 30, 3, 0
  0044c1c  lis 4, 149
  0044c20  lhz 5, 132(30)
  0044c24  lwz 4, 16468(4)
  0044c28  extsh 5, 5
  0044c2c  sldi 5, 5, 5
  0044c30  std 31, 136(1)
  0044c34  addc 4, 4, 5
  0044c38  clrldi 31, 4, 32
  0044c3c  lwz 31, 28(31)
  0044c40  bl 0x44a38
  0044c44  cmpwi 3, 0
  0044c48  bf 2, 0x44c78
  0044c4c  lwz 3, 32(31)
  0044c50  cmpwi 3, 0
  0044c54  bt 2, 0x44c60
  0044c58  li 3, 1
  0044c5c  sth 3, 38(31)
  0044c60  li 4, 0
  0044c64  ori 3, 30, 0
  0044c68  stw 4, 32(31)
  0044c6c  bl 0x32bd4
  0044c70  nop
  0044c74  b 0x450fc
  0044c78  ori 3, 30, 0
  0044c7c  bl 0x32c24
  0044c80  nop
  0044c84  cmpwi 3, 0
  0044c88  bt 1, 0x44cac
  0044c8c  lwz 3, 32(31)
  0044c90  cmpwi 3, 0
  0044c94  bt 2, 0x44ca0
  0044c98  li 3, 1
  0044c9c  sth 3, 38(31)
  0044ca0  li 3, 0
  0044ca4  stw 3, 32(31)
  0044ca8  b 0x450fc
  0044cac  lis 3, 150
  0044cb0  li 4, 5
  0044cb4  addic 3, 3, 19008
  0044cb8  lwz 3, 160(3)
  0044cbc  and 3, 3, 4
  0044cc0  cmpwi 3, 0
  0044cc4  bt 2, 0x44cf4
  0044cc8  lwz 3, 32(31)
  0044ccc  cmpwi 3, 0
  0044cd0  bt 2, 0x44cdc
  0044cd4  li 3, 1
  0044cd8  sth 3, 38(31)
  0044cdc  li 4, 0
  0044ce0  ori 3, 30, 0
  0044ce4  stw 4, 32(31)
  0044ce8  bl 0x32bd4
  0044cec  nop
  0044cf0  b 0x450fc
  0044cf4  lwz 3, 32(31)
  0044cf8  cmpwi 3, 2
  0044cfc  bf 0, 0x44fdc
  0044d00  lis 3, 149
  0044d04  lhz 5, 132(30)
  0044d08  lis 4, 151
  0044d0c  extsh 5, 5
  0044d10  addic 30, 4, -25376
  0044d14  sldi 5, 5, 5
  0044d18  lwz 3, 16468(3)
  0044d1c  addc 3, 3, 5
  0044d20  lfs 1, 132(30)
  0044d24  clrldi 3, 3, 32
  0044d28  lfs 2, 128(30)
  0044d2c  lfs 6, 4(3)
  0044d30  lfs 7, 0(3)
  0044d34  fsubs 1, 6, 1
  0044d38  lfs 3, 660(30)
  0044d3c  fsubs 2, 7, 2
  0044d40  lfs 5, 8(3)
  0044d44  lfs 4, 136(30)
  0044d48  lfs 8, 656(30)
  0044d4c  fsubs 9, 5, 4
  0044d50  lfs 10, 664(30)
  0044d54  fmuls 4, 1, 3
  0044d58  lis 3, 4
  0044d5c  lwz 5, 44(31)
  0044d60  lis 4, 16329
  0044d64  addi 3, 3, 19404
  0044d68  ori 4, 4, 4059
  0044d6c  clrlwi 5, 5, 1
  0044d70  fmadds 11, 2, 8, 4
  0044d74  cmpw 5, 4
  0044d78  fmadds 4, 9, 10, 11
  0044d7c  fnmsubs 1, 3, 4, 1
  0044d80  fnmsubs 2, 8, 4, 2
  0044d84  fnmsubs 3, 10, 4, 9
  0044d88  fmuls 1, 1, 1
  0044d8c  fmadds 1, 2, 2, 1
  0044d90  lfs 2, 44(31)
  0044d94  fmadds 4, 3, 3, 1
  0044d98  fnmadds 3, 9, 10, 11
  0044d9c  fsqrts 4, 4
  0044da0  stfs 3, 60(31)
  0044da4  stfs 4, 56(31)
  0044da8  lfs 1, 0(3)
  0044dac  bt 2, 0x44e58
  0044db0  lis 3, 4
  0044db4  addi 3, 3, 19404
  0044db8  lfs 1, 4(3)
  0044dbc  lfs 8, 28(3)
  0044dc0  fsubs 10, 1, 2
  0044dc4  lfs 9, 8(3)
  0044dc8  fadds 8, 2, 8
  0044dcc  fsubs 11, 9, 2
  0044dd0  fsub 12, 2, 10
  0044dd4  fsubs 1, 1, 8
  0044dd8  fsubs 9, 9, 8
  0044ddc  fsel 2, 12, 10, 2
  0044de0  fsub 10, 8, 1
  0044de4  lfs 12, 12(3)
  0044de8  fsub 0, 11, 2
  0044dec  fsel 1, 10, 1, 8
  0044df0  lfs 8, 16(3)
  0044df4  lfs 10, 20(3)
  0044df8  fsel 2, 0, 11, 2
  0044dfc  fsub 11, 9, 1
  0044e00  fmuls 13, 2, 2
  0044e04  fsel 1, 11, 9, 1
  0044e08  lfs 9, 24(3)
  0044e0c  fmuls 11, 13, 2
  0044e10  fmuls 0, 1, 1
  0044e14  fmuls 31, 13, 11
  0044e18  fmadds 2, 11, 12, 2
  0044e1c  fmuls 11, 0, 1
  0044e20  fmuls 30, 13, 31
  0044e24  fmadds 2, 31, 8, 2
  0044e28  fmuls 31, 0, 11
  0044e2c  fmadds 1, 11, 12, 1
  0044e30  fmuls 11, 13, 30
  0044e34  fmadds 2, 30, 10, 2
  0044e38  fmuls 12, 0, 31
  0044e3c  fmadds 1, 31, 8, 1
  0044e40  fmadds 2, 11, 9, 2
  0044e44  fmuls 8, 0, 12
  0044e48  fmadds 1, 12, 10, 1
  0044e4c  fmadds 1, 8, 9, 1
  0044e50  fdivs 1, 2, 1
  0044e54  fnmsubs 1, 4, 1, 3
  0044e58  lis 3, 149
  0044e5c  stfs 1, 64(31)
  0044e60  li 4, 0
  0044e64  addic 3, 3, 5056
  0044e68  lwz 3, 384(3)
  0044e6c  lwz 5, 112(3)
  0044e70  stfs 7, 48(3)
  0044e74  stfs 6, 52(3)
  0044e78  stfs 5, 56(3)
  0044e7c  stw 4, 60(3)
  0044e80  lfs 1, 56(31)
  0044e84  stfs 1, 348(5)
  0044e88  lfs 1, 60(31)
  0044e8c  stfs 1, 352(5)
  0044e90  lfs 2, 64(31)
  0044e94  stfs 2, 240(5)
  0044e98  lfs 3, 656(30)
  0044e9c  lfs 8, 660(30)
  0044ea0  fmuls 4, 1, 3
  0044ea4  lfs 9, 128(30)
  0044ea8  fmuls 10, 1, 8
  0044eac  lfs 11, 664(30)
  0044eb0  fmuls 3, 2, 3
  0044eb4  fmuls 12, 1, 11
  0044eb8  fmuls 11, 2, 11
  0044ebc  fmuls 8, 2, 8
  0044ec0  fneg 4, 4
  0044ec4  fneg 10, 10
  0044ec8  fneg 3, 3
  0044ecc  fneg 12, 12
  0044ed0  fneg 8, 8
  0044ed4  fadds 4, 9, 4
  0044ed8  fadds 3, 9, 3
  0044edc  stfs 4, 144(5)
  0044ee0  lfs 13, 132(30)
  0044ee4  fsubs 4, 7, 4
  0044ee8  fneg 7, 11
  0044eec  fadds 10, 13, 10
  0044ef0  fadds 8, 13, 8
  0044ef4  fsubs 6, 6, 10
  0044ef8  stfs 10, 148(5)
  0044efc  lfs 11, 136(30)
  0044f00  fadds 12, 11, 12
  0044f04  fadds 7, 11, 7
  0044f08  fsubs 5, 5, 12
  0044f0c  stfs 12, 152(5)
  0044f10  lfs 10, 140(30)
  0044f14  stfs 4, 304(5)
  0044f18  stfs 10, 156(5)
  0044f1c  stfs 6, 308(5)
  0044f20  stw 4, 316(5)
  0044f24  stfs 4, 320(5)
  0044f28  stfs 6, 324(5)
  0044f2c  stw 4, 332(5)
  0044f30  stfs 5, 312(5)
  0044f34  stfs 5, 328(5)
  0044f38  stfs 3, 128(5)
  0044f3c  stfs 8, 132(5)
  0044f40  stfs 7, 136(5)
  0044f44  stfs 10, 140(5)
  0044f48  stfs 3, 208(5)
  0044f4c  stfs 8, 212(5)
  0044f50  stfs 7, 216(5)
  0044f54  stfs 10, 220(5)
  0044f58  stfs 9, 64(5)
  0044f5c  stfs 13, 68(5)
  0044f60  stfs 11, 72(5)
  0044f64  stfs 10, 76(5)
  0044f68  stfs 9, 160(5)
  0044f6c  stfs 13, 164(5)
  0044f70  stfs 11, 168(5)
  0044f74  stfs 10, 172(5)
  0044f78  lfs 3, 48(3)
  0044f7c  stfs 3, 0(5)
  0044f80  lfs 3, 52(3)
  0044f84  stfs 3, 4(5)
  0044f88  lfs 3, 56(3)
  0044f8c  stfs 3, 8(5)
  0044f90  lfs 3, 60(3)
  0044f94  stfs 3, 12(5)
  0044f98  lfs 3, 48(3)
  0044f9c  stfs 3, 496(5)
  0044fa0  lfs 3, 52(3)
  0044fa4  stfs 3, 500(5)
  0044fa8  lfs 3, 56(3)
  0044fac  stfs 3, 504(5)
  0044fb0  lfs 3, 60(3)
  0044fb4  stw 4, 512(5)
  0044fb8  stfs 3, 508(5)
  0044fbc  stw 4, 52(5)
  0044fc0  stfs 2, 36(5)
  0044fc4  stfs 1, 40(5)
  0044fc8  stw 4, 56(5)
  0044fcc  stw 4, 48(5)
  0044fd0  stw 4, 44(5)
  0044fd4  sth 4, 34(5)
  0044fd8  lwz 3, 32(31)
  0044fdc  lis 4, 4
  0044fe0  addic 3, 3, 1
  0044fe4  vspltisw 2, -1
  0044fe8  addi 4, 4, 19404
  0044fec  lis 5, 114
  0044ff0  li 6, 32
  0044ff4  stw 3, 32(31)
  0044ff8  li 7, -3056
  0044ffc  vslw 2, 2, 2
  0045000  lfs 1, 32(4)
  0045004  lfs 2, -3056(5)
  0045008  lvlx 3, 6, 4
  004500c  fmuls 1, 2, 1
  0045010  vspltw 3, 3, 0
  0045014  lvlx 4, 7, 5
  0045018  vmaddfp 2, 4, 3, 2
  004501c  fctiwz 1, 1
  0045020  vctsxs 2, 2, 0
  0045024  stfd 1, 112(1)
  0045028  lwz 4, 116(1)
  004502c  cmpw 3, 4
  0045030  bf 1, 0x45040
  0045034  vspltw 2, 2, 0
  0045038  li 3, 32
  004503c  stvewx 2, 3, 31
  0045040  lwz 3, 56(31)
  0045044  lfs 1, 56(31)
  0045048  cmpwi 3, 0
  004504c  bt 2, 0x45070
  0045050  lis 3, 4
  0045054  li 4, 0
  0045058  addi 3, 3, 19404
  004505c  lfs 2, 36(3)
  0045060  bl 0x2f3d8
  0045064  nop
  0045068  bl 0x2f3b0
  004506c  nop
  0045070  lwz 3, 60(31)
  0045074  lfs 1, 60(31)
  0045078  cmpwi 3, 0
  004507c  bt 2, 0x45094
  0045080  lis 3, 4
  0045084  addi 3, 3, 19404
  0045088  lfs 2, 36(3)
  004508c  bl 0x2e354
  0045090  nop
  0045094  lwz 3, 64(31)
  0045098  lfs 1, 64(31)
  004509c  cmpwi 3, 0
  00450a0  bt 2, 0x450bc
  00450a4  lis 3, 4
  00450a8  li 4, 0
  00450ac  addi 3, 3, 19404
  00450b0  lfs 2, 40(3)
  00450b4  bl 0x2f414
  00450b8  nop
  00450bc  lwz 3, 40(31)
  00450c0  lfs 1, 40(31)
  00450c4  cmpwi 3, 0
  00450c8  bt 2, 0x450e4
  00450cc  lis 3, 4
  00450d0  addi 3, 3, 19404
  00450d4  lfs 2, 44(3)
  00450d8  fmuls 1, 1, 2
  00450dc  bl 0x32cf0
  00450e0  nop
  00450e4  lhz 31, 36(31)
  00450e8  cmpwi 31, 0
  00450ec  bf 2, 0x450fc
  00450f0  extsh 3, 31
  00450f4  bl 0x2f064
  00450f8  nop
  00450fc  ld 0, 176(1)
  0045100  mtlr 0
  0045104  lfd 30, 144(1)
  0045108  lfd 31, 152(1)
  004510c  ld 30, 128(1)
  0045110  ld 31, 136(1)
  0045114  addi 1, 1, 160
  0045118  blr

ActivateCamera_23:   # 0x4511c, 0xa0 bytes
  004511c  stdu 1, -128(1)
  0045120  mflr 0
  0045124  std 0, 144(1)
  0045128  lis 4, 149
  004512c  std 31, 120(1)
  0045130  lhz 5, 132(3)
  0045134  ori 31, 3, 0
  0045138  extsh 5, 5
  004513c  lwz 4, 16468(4)
  0045140  sldi 5, 5, 5
  0045144  std 30, 112(1)
  0045148  addc 4, 4, 5
  004514c  clrldi 30, 4, 32
  0045150  lwz 30, 28(30)
  0045154  lhz 3, 38(30)
  0045158  cmpwi 3, 0
  004515c  bt 2, 0x45168
  0045160  li 3, 0
  0045164  b 0x451a4
  0045168  lis 3, 161
  004516c  lwz 3, 1800(3)
  0045170  cmpwi 3, 0
  0045174  bt 2, 0x45198
  0045178  ori 3, 31, 0
  004517c  bl 0x44a38
  0045180  cmpwi 3, 0
  0045184  bt 2, 0x45198
  0045188  li 3, 0
  004518c  sth 3, 38(30)
  0045190  stw 3, 32(30)
  0045194  b 0x451a4
  0045198  ori 3, 31, 0
  004519c  bl 0x44c00
  00451a0  li 3, 0
  00451a4  ld 0, 144(1)
  00451a8  mtlr 0
  00451ac  ld 30, 112(1)
  00451b0  ld 31, 120(1)
  00451b4  addi 1, 1, 128
  00451b8  blr

STUB_000451bc:   # 0x451bc, 0x4 bytes
  00451bc  blr

STUB_000451c0:   # 0x451c0, 0x4 bytes
  00451c0  blr

STUB_000451c4:   # 0x451c4, 0x4 bytes
  00451c4  blr
