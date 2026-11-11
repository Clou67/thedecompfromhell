# game/update/moby55.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

UpdateMoby_55:   # 0x3b17e8, 0x408 bytes
  03b17e8  stdu 1, -192(1)
  03b17ec  mflr 0
  03b17f0  std 0, 208(1)
  03b17f4  stfd 24, 128(1)
  03b17f8  stfd 25, 136(1)
  03b17fc  stfd 26, 144(1)
  03b1800  stfd 27, 152(1)
  03b1804  stfd 28, 160(1)
  03b1808  stfd 29, 168(1)
  03b180c  stfd 30, 176(1)
  03b1810  stfd 31, 184(1)
  03b1814  std 31, 120(1)
  03b1818  lis 4, 161
  03b181c  ori 31, 3, 0
  03b1820  std 30, 112(1)
  03b1824  lwz 4, 1800(4)
  03b1828  lwz 30, 120(3)
  03b182c  cmpwi 4, 6
  03b1830  bf 2, 0x3b18a4
  03b1834  lwz 3, 16(30)
  03b1838  cmpwi 3, 0
  03b183c  bf 2, 0x3b18ac
  03b1840  lis 3, 150
  03b1844  li 4, 0
  03b1848  addic 3, 3, 17776
  03b184c  stw 4, 16(30)
  03b1850  lwz 3, 32(3)
  03b1854  cmpwi 3, 8
  03b1858  cmpwi 1, 3, 3
  03b185c  bf 2, 0x3b1880
  03b1860  lis 3, 16050
  03b1864  li 4, 0
  03b1868  li 5, 1
  03b186c  ori 3, 3, 47298
  03b1870  stw 4, 20(30)
  03b1874  stw 5, 16(30)
  03b1878  stw 3, 24(30)
  03b187c  b 0x3b18ac
  03b1880  bf 6, 0x3b18ac
  03b1884  li 3, 1
  03b1888  lis 4, 16050
  03b188c  li 5, 0
  03b1890  ori 4, 4, 47298
  03b1894  stw 3, 16(30)
  03b1898  stw 5, 24(30)
  03b189c  stw 4, 20(30)
  03b18a0  b 0x3b18ac
  03b18a4  li 3, 0
  03b18a8  stw 3, 16(30)
  03b18ac  lwz 3, 24(30)
  03b18b0  lwz 4, 20(30)
  03b18b4  lfs 1, 20(30)
  03b18b8  cmpw 3, 4
  03b18bc  bt 2, 0x3b18f8
  03b18c0  lis 3, 59
  03b18c4  lis 4, 114
  03b18c8  addi 3, 3, 6080
  03b18cc  lis 6, 114
  03b18d0  addic 5, 30, 8
  03b18d4  lfs 4, 0(3)
  03b18d8  lfs 3, -3048(4)
  03b18dc  addic 3, 30, 24
  03b18e0  lfs 5, -3052(6)
  03b18e4  fmuls 2, 3, 4
  03b18e8  fmuls 4, 5, 4
  03b18ec  fmr 3, 2
  03b18f0  bl 0x10a2e0
  03b18f4  nop
  03b18f8  lbz 3, 32(31)
  03b18fc  cmpwi 3, 0
  03b1900  cmpwi 1, 3, 2
  03b1904  cmpwi 6, 3, 1
  03b1908  cmpwi 7, 3, -1
  03b190c  bt 1, 0x3b1918
  03b1910  bf 29, 0x3b1bb8
  03b1914  b 0x3b194c
  03b1918  lis 3, 59
  03b191c  addi 3, 3, 6080
  03b1920  lfs 28, 4(3)
  03b1924  lfs 1, 8(3)
  03b1928  lfs 25, 12(3)
  03b192c  lfs 29, 16(3)
  03b1930  lfs 26, 20(3)
  03b1934  lfs 30, 24(3)
  03b1938  lfs 27, 28(3)
  03b193c  lfs 31, 32(3)
  03b1940  bf 25, 0x3b19c8
  03b1944  bf 5, 0x3b1ac4
  03b1948  b 0x3b1bb8
  03b194c  lis 3, 165
  03b1950  lwz 4, 0(30)
  03b1954  slwi 4, 4, 7
  03b1958  lwz 3, 7128(3)
  03b195c  lfs 1, 20(31)
  03b1960  addc 3, 3, 4
  03b1964  lfs 2, 16(31)
  03b1968  clrldi 3, 3, 32
  03b196c  li 4, 2
  03b1970  lfs 3, 52(3)
  03b1974  lfs 4, 48(3)
  03b1978  fsubs 1, 1, 3
  03b197c  fsubs 2, 2, 4
  03b1980  li 3, 0
  03b1984  li 5, 1
  03b1988  subc 4, 4, 5
  03b198c  fmuls 1, 1, 1
  03b1990  fmadds 1, 2, 2, 1
  03b1994  fsqrts 1, 1
  03b1998  stfs 1, 12(30)
  03b199c  lfs 1, 72(31)
  03b19a0  stfs 1, 4(30)
  03b19a4  lwz 6, 68(31)
  03b19a8  subc 3, 3, 6
  03b19ac  cntlzw 3, 3
  03b19b0  sldi 3, 3, 58
  03b19b4  sradi 3, 3, 63
  03b19b8  and 3, 3, 4
  03b19bc  addc 3, 5, 3
  03b19c0  stb 3, 32(31)
  03b19c4  b 0x3b1bb8
  03b19c8  fmr 2, 1
  03b19cc  lfs 1, 24(30)
  03b19d0  lfs 24, 24(31)
  03b19d4  bl 0x502578
  03b19d8  nop
  03b19dc  fadds 2, 1, 25
  03b19e0  fsubs 3, 26, 1
  03b19e4  fsubs 4, 27, 1
  03b19e8  lis 3, 165
  03b19ec  li 5, 0
  03b19f0  fsubs 5, 26, 2
  03b19f4  fsub 7, 1, 3
  03b19f8  fsubs 6, 27, 2
  03b19fc  fsub 8, 2, 5
  03b1a00  fsel 1, 7, 3, 1
  03b1a04  fsel 2, 8, 5, 2
  03b1a08  fsub 3, 4, 1
  03b1a0c  fsub 5, 6, 2
  03b1a10  fsel 1, 3, 4, 1
  03b1a14  fsel 2, 5, 6, 2
  03b1a18  fmuls 3, 1, 1
  03b1a1c  lfs 6, 12(30)
  03b1a20  lwz 4, 0(30)
  03b1a24  lwz 3, 7128(3)
  03b1a28  slwi 4, 4, 7
  03b1a2c  addc 3, 3, 4
  03b1a30  fmuls 4, 2, 2
  03b1a34  fmuls 5, 3, 1
  03b1a38  clrldi 3, 3, 32
  03b1a3c  fmuls 7, 4, 2
  03b1a40  fmuls 8, 3, 5
  03b1a44  fmadds 1, 5, 28, 1
  03b1a48  fmuls 5, 4, 7
  03b1a4c  fmadds 2, 7, 28, 2
  03b1a50  fmuls 7, 3, 8
  03b1a54  fmadds 1, 8, 29, 1
  03b1a58  fmuls 8, 4, 5
  03b1a5c  fmadds 2, 5, 29, 2
  03b1a60  fmuls 3, 3, 7
  03b1a64  fmadds 1, 7, 30, 1
  03b1a68  fmuls 4, 4, 8
  03b1a6c  fmadds 2, 8, 30, 2
  03b1a70  fmadds 1, 3, 31, 1
  03b1a74  fmadds 2, 4, 31, 2
  03b1a78  fmuls 2, 2, 6
  03b1a7c  stfs 2, 16(31)
  03b1a80  lfs 3, 12(30)
  03b1a84  stw 5, 24(31)
  03b1a88  fmuls 1, 1, 3
  03b1a8c  stfs 1, 20(31)
  03b1a90  lfs 3, 48(3)
  03b1a94  fadds 2, 2, 3
  03b1a98  stfs 2, 16(31)
  03b1a9c  lfs 2, 52(3)
  03b1aa0  stfs 24, 24(31)
  03b1aa4  fadds 1, 1, 2
  03b1aa8  stfs 1, 20(31)
  03b1aac  lfs 1, 4(30)
  03b1ab0  lfs 2, 24(30)
  03b1ab4  bl 0x502578
  03b1ab8  nop
  03b1abc  stfs 1, 72(31)
  03b1ac0  b 0x3b1bb8
  03b1ac4  lfs 2, 24(30)
  03b1ac8  lfs 24, 24(31)
  03b1acc  bl 0x5025e0
  03b1ad0  nop
  03b1ad4  fadds 2, 1, 25
  03b1ad8  fsubs 3, 26, 1
  03b1adc  fsubs 4, 27, 1
  03b1ae0  lis 3, 165
  03b1ae4  li 4, 0
  03b1ae8  fsubs 5, 26, 2
  03b1aec  fsub 7, 1, 3
  03b1af0  fsubs 6, 27, 2
  03b1af4  fsub 8, 2, 5
  03b1af8  fsel 1, 7, 3, 1
  03b1afc  fsel 2, 8, 5, 2
  03b1b00  fsub 3, 4, 1
  03b1b04  fsub 5, 6, 2
  03b1b08  fsel 1, 3, 4, 1
  03b1b0c  fsel 2, 5, 6, 2
  03b1b10  fmuls 3, 1, 1
  03b1b14  lfs 6, 12(30)
  03b1b18  lwz 5, 0(30)
  03b1b1c  lwz 3, 7128(3)
  03b1b20  slwi 5, 5, 7
  03b1b24  addc 3, 3, 5
  03b1b28  fmuls 4, 2, 2
  03b1b2c  fmuls 5, 3, 1
  03b1b30  clrldi 3, 3, 32
  03b1b34  fmuls 7, 4, 2
  03b1b38  fmuls 8, 3, 5
  03b1b3c  fmadds 1, 5, 28, 1
  03b1b40  fmuls 5, 4, 7
  03b1b44  fmadds 2, 7, 28, 2
  03b1b48  fmuls 7, 3, 8
  03b1b4c  fmadds 1, 8, 29, 1
  03b1b50  fmuls 8, 4, 5
  03b1b54  fmadds 2, 5, 29, 2
  03b1b58  fmuls 3, 3, 7
  03b1b5c  fmadds 1, 7, 30, 1
  03b1b60  fmuls 4, 4, 8
  03b1b64  fmadds 2, 8, 30, 2
  03b1b68  fmadds 1, 3, 31, 1
  03b1b6c  fmadds 2, 4, 31, 2
  03b1b70  fmuls 2, 2, 6
  03b1b74  stfs 2, 16(31)
  03b1b78  lfs 3, 12(30)
  03b1b7c  stw 4, 24(31)
  03b1b80  fmuls 1, 1, 3
  03b1b84  stfs 1, 20(31)
  03b1b88  lfs 3, 48(3)
  03b1b8c  fadds 2, 2, 3
  03b1b90  stfs 2, 16(31)
  03b1b94  lfs 2, 52(3)
  03b1b98  stfs 24, 24(31)
  03b1b9c  fadds 1, 1, 2
  03b1ba0  stfs 1, 20(31)
  03b1ba4  lfs 1, 4(30)
  03b1ba8  lfs 2, 24(30)
  03b1bac  bl 0x5025e0
  03b1bb0  nop
  03b1bb4  stfs 1, 72(31)
  03b1bb8  ld 0, 208(1)
  03b1bbc  mtlr 0
  03b1bc0  lfd 24, 128(1)
  03b1bc4  lfd 25, 136(1)
  03b1bc8  lfd 26, 144(1)
  03b1bcc  lfd 27, 152(1)
  03b1bd0  lfd 28, 160(1)
  03b1bd4  lfd 29, 168(1)
  03b1bd8  lfd 30, 176(1)
  03b1bdc  lfd 31, 184(1)
  03b1be0  ld 30, 112(1)
  03b1be4  ld 31, 120(1)
  03b1be8  addi 1, 1, 192
  03b1bec  blr
