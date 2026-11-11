//==== 00060738  ns=collproc  size=0x48
// sig: int CollGetMobyPoly(void)
// callers(0): 
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int collproc::CollGetMobyPoly(void)

{
  uint uVar1;
  
  if (CollOutput.pMoby == (MobyInstance *)0x0) {
    uVar1 = 0xffffffff;
  }
  else if (CollOutput.poly < 0) {
    uVar1 = (uint)-((int)(CollOutput.pMoby)->collision + CollOutput.poly) >> 5;
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



//==== 00060780  ns=collproc  size=0x34
// sig: int CollHotspot(void)
// callers(43): 00053078 camera::Camera_UpdateUnderWater; 00053550 camera::UpdateCamera; 0007e5e8 hero::Hero_GetGroundInfo; 000824b0 hero::Hero_CheckLedgeGrab; 00083ac8 hero::Hero_HandleGroundType; 00097bd0 hero::Hero_UpdateLedge; 00098878 hero::Hero_CheckLedgeAhead; 0009c658 hero::Hero_KneeBumpMotion; 000a2a08 hero::Hero_SwimSurfTransition; 00106150 mobyutil::MB_RegisterLameShadow; 0010b030 mobyutil::MB_UpdateKick; 0012b108 partupd::UpdatePart_35; 001aa078 mobyupdate_unsorted::UpdateMoby_1059; 001fcd60 mobyupdate_unsorted::UpdateMoby_1202; 00201da8 mobyupdate_helpers::M121_00201da8; 00202b98 mobyupdate_unsorted::UpdateMoby_121; 0022d900 mobyupdate_helpers::M1262_0022d900; 00243a70 mobyupdate_unsorted::UpdateMoby_a_lot_9; 00244840 mobyupdate_unsorted::UpdateMoby_1309; 002a1a48 mobyupdate_helpers::M160_002a1a48; 002a2438 mobyupdate_unsorted::UpdateMoby_160; 002a52f8 mobyupdate_unsorted::UpdateMoby_1633; 002c9a68 mobyupdate_helpers::M1859_002c9a68; 002cb930 mobyupdate_helpers::M186_002cb930; 002cf460 mobyupdate_unsorted::UpdateMoby_1886
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* [collision] Material of last env hit: CollOutput.poly & 0x1f (COLL_MATERIAL), -1 if moby hit or
   COLL_DEFAULT. */

int collproc::CollHotspot(void)

{
  uint uVar1;
  
  if (CollOutput.poly < 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = CollOutput.poly & 0x1f;
    if (uVar1 == 0x1f) {
      uVar1 = 0xffffffff;
    }
  }
  return uVar1;
}



//==== 000607b4  ns=collproc  size=0x38
// sig: int CollSoundSurface(void)
// callers(1): 0007e5e8 hero::Hero_GetGroundInfo
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* [collision] Group bits of last env hit ((poly>>5)&3), 0 if moby hit or group==3. */

int collproc::CollSoundSurface(void)

{
  uint uVar1;
  
  if (CollOutput.poly < 0) {
    uVar1 = 0;
  }
  else if ((CollOutput.poly & 0x60U) == 0x60) {
    uVar1 = 0;
  }
  else {
    uVar1 = (uint)CollOutput.poly >> 5 & 3;
  }
  return uVar1;
}



//==== 00060800  ns=collproc  size=0x1e4
// sig: undefined CollLineVsSphere_Out(void)
// callers(0): 
// callees(0): 

undefined8 collproc::CollLineVsSphere_Out(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined8 uVar20;
  
  fVar1 = *param_1;
  fVar2 = param_1[1];
  fVar3 = *param_3;
  fVar8 = *param_2 - fVar1;
  fVar4 = param_3[1];
  fVar11 = param_2[1] - fVar2;
  fVar9 = fVar3 - fVar1;
  fVar5 = param_1[2];
  fVar12 = fVar4 - fVar2;
  fVar6 = param_3[2];
  fVar15 = param_2[2] - fVar5;
  fVar16 = fVar6 - fVar5;
  fVar17 = fVar8 * fVar8 + fVar11 * fVar11 + fVar15 * fVar15;
  fVar18 = fVar8 * fVar9 + fVar11 * fVar12 + fVar15 * fVar16;
  fVar7 = 0.0;
  fVar19 = param_3[3] * param_3[3];
  fVar14 = fVar18 / fVar17;
  if (fVar14 < 0.0) {
    fVar14 = fVar7;
  }
  if (1.0 < fVar14) {
    fVar14 = 1.0;
  }
  fVar10 = fVar3 - (fVar8 * fVar14 + fVar1);
  fVar13 = fVar4 - (fVar11 * fVar14 + fVar2);
  fVar14 = fVar6 - (fVar15 * fVar14 + fVar5);
  if ((fVar10 * fVar10 + fVar13 * fVar13 + fVar14 * fVar14) - fVar19 <= 0.0) {
    fVar18 = fVar18 * 2.0;
    fVar9 = fVar18 * fVar18 -
            fVar17 * 4.0 * ((fVar9 * fVar9 + fVar12 * fVar12 + fVar16 * fVar16) - fVar19);
    if (fVar9 < 0.0) {
      fVar9 = fVar7;
    }
    fVar9 = -((SQRT(fVar9) - fVar18) * 0.5 * fVar17);
    if (fVar9 < 0.0) {
      fVar9 = fVar7;
    }
    if (1.0 < fVar9) {
      fVar9 = 1.0;
    }
    uVar20 = 1;
    CollOutput.ip.x = fVar8 * fVar9 + fVar1;
    CollOutput.ip.y = fVar11 * fVar9 + fVar2;
    CollOutput.ip.z = fVar15 * fVar9 + fVar5;
    CollOutput.normal.x = CollOutput.ip.x - fVar3;
    CollOutput.normal.y = CollOutput.ip.y - fVar4;
    CollOutput.normal.z = CollOutput.ip.z - fVar6;
  }
  else {
    uVar20 = 0;
  }
  return uVar20;
}



//==== 000609e4  ns=stub  size=0x4
// sig: undefined STUB_000609e4(void)
// callers(0): 
// callees(0): 

void stub::STUB_000609e4(void)

{
  return;
}



//==== 000609f0  ns=Global  size=0xa0
// sig: undefined SECTION_HEADER_DEBUG(void)
// callers(0): 
// callees(0): 

void SECTION_HEADER_DEBUG(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  
  iVar4 = 0;
  iVar3 = 0;
  DAT_0071eb14 = 0x10000;
  do {
    iVar2 = 0;
    iVar1 = 0x100;
    *(undefined4 *)((int)collproc::g_CollMobyVertCache[0].mtx + iVar3) = 0;
    *(undefined4 *)((int)collproc::g_CollMobyVertCache[0].mtx + iVar3 + 4) = 0;
    *(undefined4 *)((int)collproc::g_CollMobyVertCache[0].mtx + iVar3 + 8) = 0;
    *(undefined4 *)((int)collproc::g_CollMobyVertCache[0].mtx + iVar3 + 0xc) = 0;
    *(undefined4 *)((int)collproc::g_CollMobyVertCache[0].mtx + iVar3 + 0x10) = 0;
    *(undefined4 *)((int)collproc::g_CollMobyVertCache[0].mtx + iVar3 + 0x14) = 0;
    *(undefined4 *)((int)collproc::g_CollMobyVertCache[0].mtx + iVar3 + 0x18) = 0;
    *(undefined4 *)((int)collproc::g_CollMobyVertCache[0].mtx + iVar3 + 0x1c) = 0;
    *(undefined4 *)((int)collproc::g_CollMobyVertCache[0].mtx + iVar3 + 0x20) = 0;
    do {
      iVar1 = iVar1 + -1;
      puVar5 = (undefined4 *)(iVar3 + 0x9540e8 + iVar2);
      iVar2 = iVar2 + 0xc;
      *puVar5 = 0;
      puVar5[1] = 0;
      puVar5[2] = 0;
    } while (iVar1 != 0);
    iVar4 = iVar4 + 1;
    iVar3 = iVar3 + 0xc28;
  } while (iVar4 < 8);
  return;
}



//==== 00060a90  ns=debug  size=0x30
// sig: void ResetDebugEnables(void)
// callers(2): 00012ec8 boot::GameStart; 000e0e60 main::startLevel
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void debug::ResetDebugEnables(void)

{
  int *piVar1;
  longlong lVar2;
  
  piVar1 = g_DebugEnables;
  lVar2 = 5;
  do {
    *piVar1 = 1;
    piVar1[1] = 1;
    piVar1[2] = 1;
    piVar1[3] = 1;
    piVar1 = piVar1 + 4;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return;
}



//==== 00060ac0  ns=debug  size=0x8c
// sig: void DebugFontPrintLeft(int x, int y, uint color, char * str)
// callers(2): 00063e68 debug::DrawDebugMenu; 0032f988 mobyupdate_unsorted::UpdateMoby_291
// callees(1): 005cd2a8 libc::snprintf
// strings: 0095a5bc: 'None'

void debug::DebugFontPrintLeft(int x,int y,uint color,char *str)

{
  DebugFontString *pDVar1;
  undefined *__s;
  int iVar2;
  
  iVar2 = g_DebugFontNumStrings;
  __s = g_pDebugFontBufPos;
  g_DebugFontStrings[g_DebugFontNumStrings].x = x;
  pDVar1 = g_DebugFontStrings + g_DebugFontNumStrings;
  g_DebugFontNumStrings = g_DebugFontNumStrings + 1;
  pDVar1->y = y;
  g_DebugFontStrings[iVar2].color = color;
  g_DebugFontStrings[iVar2].str = __s;
  iVar2 = libc::snprintf(__s,"%s",str);
  g_pDebugFontBufPos = __s + iVar2 + 1;
  return;
}



//==== 00060b4c  ns=debug  size=0xf4
// sig: void DebugFontPrintfLeft(int x, int y, int color, char * fmt, ...)
// callers(0): 
// callees(2): 005cd2a8 libc::snprintf; 005cd52c FUN_005cd52c
// strings: 0095a5bc: 'None'

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void debug::DebugFontPrintfLeft(int x,int y,int color,char *fmt,...)

{
  DebugFontString *pDVar1;
  undefined *__s;
  int iVar2;
  undefined8 in_r7;
  undefined8 in_r8;
  undefined8 in_r9;
  undefined8 in_r10;
  char *pcStack0000004c;
  undefined8 uStack00000050;
  undefined8 uStack00000058;
  undefined8 uStack00000060;
  undefined8 uStack00000068;
  undefined1 auStack_230 [512];
  
  pcStack0000004c = fmt;
  uStack00000050 = in_r7;
  uStack00000058 = in_r8;
  uStack00000060 = in_r9;
  uStack00000068 = in_r10;
  FUN_005cd52c(auStack_230,fmt,&stack0x00000050);
  iVar2 = g_DebugFontNumStrings;
  __s = g_pDebugFontBufPos;
  pDVar1 = g_DebugFontStrings + g_DebugFontNumStrings;
  g_DebugFontNumStrings = g_DebugFontNumStrings + 1;
  pDVar1->x = x;
  g_DebugFontStrings[iVar2].y = y;
  g_DebugFontStrings[iVar2].color = color;
  g_DebugFontStrings[iVar2].str = __s;
  iVar2 = libc::snprintf(__s,"%s",auStack_230);
  g_pDebugFontBufPos = __s + iVar2 + 1;
  return;
}



//==== 00060c40  ns=stub  size=0x4
// sig: undefined STUB_00060c40(void)
// callers(0): 
// callees(0): 

void stub::STUB_00060c40(void)

{
  return;
}



//==== 00060c44  ns=debug  size=0x20
// sig: void ResetDebugFontStrings(void)
// callers(2): 00063e68 debug::DrawDebugMenu; 000e0e60 main::startLevel
// callees(0): 
// strings: 0095a5bc: 'None'

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void debug::ResetDebugFontStrings(void)

{
  g_DebugFontNumStrings = 0;
  g_pDebugFontBufPos = g_DebugFontStringBuf;
  return;
}



//==== 00060c64  ns=debug  size=0x124
// sig: int DebugFontPrintCenter(int x, int y, int color, char * str)
// callers(2): 00063e68 debug::DrawDebugMenu; 000e2e10 map::DrawMapFrame
// callees(1): 005cd2a8 libc::snprintf
// strings: 0095a5bc: 'None'

int debug::DebugFontPrintCenter(int x,int y,int color,char *str)

{
  byte bVar1;
  ulonglong uVar2;
  DebugFontString *pDVar3;
  byte *pbVar4;
  undefined *__s;
  int iVar5;
  int iVar6;
  
  __s = g_pDebugFontBufPos;
  iVar5 = 0;
  bVar1 = *str;
  pbVar4 = (byte *)str;
  while (bVar1 != 0) {
    uVar2 = (ulonglong)*pbVar4 - 0x20 & 0xff;
    iVar5 = iVar5 + *(int *)((int)g_DebugFontCharWidths +
                            (int)((((longlong)(uVar2 - 0x60) >> 0x3f & uVar2 - 0x20) + 0x20 &
                                  0xffffffff) << 2));
    bVar1 = pbVar4[1];
    pbVar4 = pbVar4 + 1;
  }
  iVar5 = x - (iVar5 >> 1);
  g_DebugFontStrings[g_DebugFontNumStrings].x = iVar5;
  g_DebugFontStrings[g_DebugFontNumStrings].y = y;
  g_DebugFontStrings[g_DebugFontNumStrings].color = color;
  pDVar3 = g_DebugFontStrings + g_DebugFontNumStrings;
  g_DebugFontNumStrings = g_DebugFontNumStrings + 1;
  pDVar3->str = __s;
  iVar6 = libc::snprintf(__s,"%s",str);
  g_pDebugFontBufPos = __s + iVar6 + 1;
  return iVar5;
}



//==== 00060d88  ns=debug  size=0x168
// sig: int DebugFontPrintfCenter(int x, int y, int color, char * fmt, ...)
// callers(0): 
// callees(2): 005cd2a8 libc::snprintf; 005cd52c FUN_005cd52c
// strings: 0095a5bc: 'None'

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int debug::DebugFontPrintfCenter(int x,int y,int color,char *fmt,...)

{
  byte *pbVar1;
  ulonglong uVar2;
  DebugFontString *pDVar3;
  undefined *__s;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  undefined8 in_r7;
  undefined8 in_r8;
  undefined8 in_r9;
  undefined8 in_r10;
  char *pcStack0000004c;
  undefined8 uStack00000050;
  undefined8 uStack00000058;
  undefined8 uStack00000060;
  undefined8 uStack00000068;
  byte local_230 [512];
  
  pcStack0000004c = fmt;
  uStack00000050 = in_r7;
  uStack00000058 = in_r8;
  uStack00000060 = in_r9;
  uStack00000068 = in_r10;
  FUN_005cd52c(local_230,fmt,&stack0x00000050);
  __s = g_pDebugFontBufPos;
  iVar4 = 0;
  pbVar6 = local_230;
  if (local_230[0] != 0) {
    do {
      pbVar1 = pbVar6 + 1;
      uVar2 = (ulonglong)*pbVar6 - 0x20 & 0xff;
      iVar4 = iVar4 + *(int *)((int)g_DebugFontCharWidths +
                              (int)((((longlong)(uVar2 - 0x60) >> 0x3f & uVar2 - 0x20) + 0x20 &
                                    0xffffffff) << 2));
      pbVar6 = pbVar6 + 1;
    } while (*pbVar1 != 0);
  }
  iVar4 = x - (iVar4 >> 1);
  g_DebugFontStrings[g_DebugFontNumStrings].x = iVar4;
  g_DebugFontStrings[g_DebugFontNumStrings].y = y;
  g_DebugFontStrings[g_DebugFontNumStrings].color = color;
  pDVar3 = g_DebugFontStrings + g_DebugFontNumStrings;
  g_DebugFontNumStrings = g_DebugFontNumStrings + 1;
  pDVar3->str = __s;
  iVar5 = libc::snprintf(__s,"%s",local_230);
  g_pDebugFontBufPos = __s + iVar5 + 1;
  return iVar4;
}



//==== 00060ef0  ns=debug  size=0x110
// sig: void DebugFontPrintRight(int x, int y, int color, char * str)
// callers(0): 
// callees(1): 005cd2a8 libc::snprintf
// strings: 0095a5bc: 'None'

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void debug::DebugFontPrintRight(int x,int y,int color,char *str)

{
  byte bVar1;
  DebugFontString *pDVar2;
  ulonglong uVar3;
  byte *pbVar4;
  undefined *__s;
  int iVar5;
  int iVar6;
  
  iVar5 = g_DebugFontNumStrings;
  __s = g_pDebugFontBufPos;
  iVar6 = 0;
  bVar1 = *str;
  pbVar4 = (byte *)str;
  while (bVar1 != 0) {
    uVar3 = (ulonglong)*pbVar4 - 0x20 & 0xff;
    iVar6 = iVar6 + *(int *)((int)g_DebugFontCharWidths +
                            (int)((((longlong)(uVar3 - 0x60) >> 0x3f & uVar3 - 0x20) + 0x20 &
                                  0xffffffff) << 2));
    bVar1 = pbVar4[1];
    pbVar4 = pbVar4 + 1;
  }
  pDVar2 = g_DebugFontStrings + g_DebugFontNumStrings;
  g_DebugFontNumStrings = g_DebugFontNumStrings + 1;
  pDVar2->x = x - iVar6;
  g_DebugFontStrings[iVar5].y = y;
  g_DebugFontStrings[iVar5].color = color;
  g_DebugFontStrings[iVar5].str = __s;
  iVar6 = libc::snprintf(__s,"%s",str);
  g_pDebugFontBufPos = __s + iVar6 + 1;
  return;
}



//==== 00061000  ns=debug  size=0x154
// sig: void DebugFontPrintfRight(int x, int y, int color, char * fmt, ...)
// callers(0): 
// callees(2): 005cd2a8 libc::snprintf; 005cd52c FUN_005cd52c
// strings: 0095a5bc: 'None'

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void debug::DebugFontPrintfRight(int x,int y,int color,char *fmt,...)

{
  byte *pbVar1;
  DebugFontString *pDVar2;
  ulonglong uVar3;
  undefined *__s;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  undefined8 in_r7;
  undefined8 in_r8;
  undefined8 in_r9;
  undefined8 in_r10;
  char *pcStack0000004c;
  undefined8 uStack00000050;
  undefined8 uStack00000058;
  undefined8 uStack00000060;
  undefined8 uStack00000068;
  byte local_230 [520];
  
  pcStack0000004c = fmt;
  uStack00000050 = in_r7;
  uStack00000058 = in_r8;
  uStack00000060 = in_r9;
  uStack00000068 = in_r10;
  FUN_005cd52c(local_230,fmt,&stack0x00000050);
  iVar4 = g_DebugFontNumStrings;
  __s = g_pDebugFontBufPos;
  iVar5 = 0;
  pbVar6 = local_230;
  if (local_230[0] != 0) {
    do {
      pbVar1 = pbVar6 + 1;
      uVar3 = (ulonglong)*pbVar6 - 0x20 & 0xff;
      iVar5 = iVar5 + *(int *)((int)g_DebugFontCharWidths +
                              (int)((((longlong)(uVar3 - 0x60) >> 0x3f & uVar3 - 0x20) + 0x20 &
                                    0xffffffff) << 2));
      pbVar6 = pbVar6 + 1;
    } while (*pbVar1 != 0);
  }
  pDVar2 = g_DebugFontStrings + g_DebugFontNumStrings;
  g_DebugFontNumStrings = g_DebugFontNumStrings + 1;
  pDVar2->x = x - iVar5;
  g_DebugFontStrings[iVar4].y = y;
  g_DebugFontStrings[iVar4].color = color;
  g_DebugFontStrings[iVar4].str = __s;
  iVar4 = libc::snprintf(__s,"%s",local_230);
  g_pDebugFontBufPos = __s + iVar4 + 1;
  return;
}



//==== 00061154  ns=debug  size=0x4c
// sig: int DebugFontStringWidth(char * str)
// callers(0): 
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int debug::DebugFontStringWidth(char *str)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = 0;
  bVar1 = *str;
  while (bVar1 != 0) {
    iVar2 = iVar2 + *(int *)((int)g_DebugFontCharWidths + (((byte)*str - 0x20) * 4 & 0x3fc));
    bVar1 = ((byte *)str)[1];
    str = (char *)((byte *)str + 1);
  }
  return iVar2;
}



//==== 000611a0  ns=debug  size=0xf0
// sig: void DebugFontPrintN(int x, int y, int color, char * str, int len)
// callers(0): 
// callees(2): 005c5ad0 libc::memcpy; 005cd2a8 libc::snprintf
// strings: 0095a5bc: 'None'

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void debug::DebugFontPrintN(int x,int y,int color,char *str,int len)

{
  DebugFontString *pDVar1;
  undefined *__s;
  int iVar2;
  undefined1 auStack_b0 [128];
  
  if (0 < len) {
    libc::memcpy(auStack_b0,str,len);
    iVar2 = g_DebugFontNumStrings;
    auStack_b0[len] = 0;
    __s = g_pDebugFontBufPos;
    g_DebugFontStrings[g_DebugFontNumStrings].x = x;
    pDVar1 = g_DebugFontStrings + g_DebugFontNumStrings;
    g_DebugFontNumStrings = g_DebugFontNumStrings + 1;
    pDVar1->y = y;
    g_DebugFontStrings[iVar2].color = color;
    g_DebugFontStrings[iVar2].str = __s;
    iVar2 = libc::snprintf(__s,"%s",auStack_b0);
    g_pDebugFontBufPos = __s + iVar2 + 1;
  }
  return;
}



//==== 00061290  ns=debug  size=0x40
// sig: void AssertFailed(char * file, int line, char * expr)
// callers(0): 
// callees(1): 005cd098 libc::printf
// strings: 00651be4: 'assertion "%s" failed: file "%s", line %d\n'

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void debug::AssertFailed(char *file,int line,char *expr)

{
  undefined8 in_LR;
  
  libc::printf("assertion \"%s\" failed: file \"%s\", line %d\n",expr,file,line);
  trapWord(0x1f,in_LR,in_LR);
  return;
}



//==== 000612d0  ns=stub  size=0x4
// sig: undefined STUB_000612d0(void)
// callers(0): 
// callees(0): 

void stub::STUB_000612d0(void)

{
  return;
}



//==== 000612d4  ns=stub  size=0x4
// sig: undefined STUB_000612d4(void)
// callers(0): 
// callees(0): 

void stub::STUB_000612d4(void)

{
  return;
}



//==== 000612d8  ns=stub  size=0x4
// sig: undefined STUB_000612d8(void)
// callers(0): 
// callees(0): 

void stub::STUB_000612d8(void)

{
  return;
}



//==== 000612dc  ns=stub  size=0x4
// sig: undefined STUB_000612dc(void)
// callers(0): 
// callees(0): 

void stub::STUB_000612dc(void)

{
  return;
}



//==== 000612e0  ns=stub  size=0x4
// sig: undefined STUB_000612e0(void)
// callers(0): 
// callees(0): 

void stub::STUB_000612e0(void)

{
  return;
}



//==== 000612e4  ns=stub  size=0x4
// sig: undefined STUB_000612e4(void)
// callers(0): 
// callees(0): 

void stub::STUB_000612e4(void)

{
  return;
}



//==== 000612e8  ns=stub  size=0x4
// sig: undefined STUB_000612e8(void)
// callers(0): 
// callees(0): 

void stub::STUB_000612e8(void)

{
  return;
}



//==== 000612ec  ns=stub  size=0x4
// sig: undefined STUB_000612ec(void)
// callers(0): 
// callees(0): 

void stub::STUB_000612ec(void)

{
  return;
}



//==== 000612f0  ns=stub  size=0x4
// sig: undefined STUB_000612f0(void)
// callers(0): 
// callees(0): 

void stub::STUB_000612f0(void)

{
  return;
}



//==== 000612f4  ns=stub  size=0x4
// sig: undefined STUB_000612f4(void)
// callers(0): 
// callees(0): 

void stub::STUB_000612f4(void)

{
  return;
}



//==== 000612f8  ns=stub  size=0x4
// sig: undefined STUB_000612f8(void)
// callers(0): 
// callees(0): 

void stub::STUB_000612f8(void)

{
  return;
}



//==== 000612fc  ns=stub  size=0x4
// sig: undefined STUB_000612fc(void)
// callers(0): 
// callees(0): 

void stub::STUB_000612fc(void)

{
  return;
}



//==== 00061300  ns=stub  size=0x4
// sig: undefined STUB_00061300(void)
// callers(0): 
// callees(0): 

void stub::STUB_00061300(void)

{
  return;
}



//==== 00061304  ns=stub  size=0x4
// sig: undefined STUB_00061304(void)
// callers(0): 
// callees(0): 

void stub::STUB_00061304(void)

{
  return;
}



//==== 00061308  ns=stub  size=0x4
// sig: undefined STUB_00061308(void)
// callers(0): 
// callees(0): 

void stub::STUB_00061308(void)

{
  return;
}



//==== 0006130c  ns=stub  size=0x4
// sig: undefined STUB_0006130c(void)
// callers(0): 
// callees(0): 

void stub::STUB_0006130c(void)

{
  return;
}



//==== 00061310  ns=stub  size=0x4
// sig: undefined STUB_00061310(void)
// callers(0): 
// callees(0): 

void stub::STUB_00061310(void)

{
  return;
}



//==== 00061314  ns=stub  size=0x4
// sig: undefined STUB_00061314(void)
// callers(0): 
// callees(0): 

void stub::STUB_00061314(void)

{
  return;
}



//==== 00061318  ns=stub  size=0x4
// sig: undefined STUB_00061318(void)
// callers(0): 
// callees(0): 

void stub::STUB_00061318(void)

{
  return;
}



//==== 0006131c  ns=stub  size=0x4
// sig: undefined STUB_0006131c(void)
// callers(0): 
// callees(0): 

void stub::STUB_0006131c(void)

{
  return;
}



//==== 00061320  ns=stub  size=0x4
// sig: undefined STUB_00061320(void)
// callers(0): 
// callees(0): 

void stub::STUB_00061320(void)

{
  return;
}



//==== 00061324  ns=stub  size=0x4
// sig: undefined STUB_00061324(void)
// callers(0): 
// callees(0): 

void stub::STUB_00061324(void)

{
  return;
}



//==== 00061328  ns=stub  size=0x4
// sig: undefined STUB_00061328(void)
// callers(0): 
// callees(0): 

void stub::STUB_00061328(void)

{
  return;
}



//==== 0006132c  ns=stub  size=0x4
// sig: undefined STUB_0006132c(void)
// callers(0): 
// callees(0): 

void stub::STUB_0006132c(void)

{
  return;
}



//==== 00061330  ns=stub  size=0x4
// sig: undefined STUB_00061330(void)
// callers(0): 
// callees(0): 

void stub::STUB_00061330(void)

{
  return;
}



//==== 00061334  ns=stub  size=0x4
// sig: undefined STUB_00061334(void)
// callers(0): 
// callees(0): 

void stub::STUB_00061334(void)

{
  return;
}



//==== 00061338  ns=stub  size=0x4
// sig: undefined STUB_00061338(void)
// callers(0): 
// callees(0): 

void stub::STUB_00061338(void)

{
  return;
}



//==== 0006133c  ns=stub  size=0x4
// sig: undefined STUB_0006133c(void)
// callers(0): 
// callees(0): 

void stub::STUB_0006133c(void)

{
  return;
}



//==== 00061340  ns=stub  size=0x4
// sig: undefined STUB_00061340(void)
// callers(0): 
// callees(0): 

void stub::STUB_00061340(void)

{
  return;
}



//==== 00061344  ns=stub  size=0x4
// sig: undefined STUB_00061344(void)
// callers(0): 
// callees(0): 

void stub::STUB_00061344(void)

{
  return;
}



//==== 00061348  ns=stub  size=0x4
// sig: undefined STUB_00061348(void)
// callers(0): 
// callees(0): 

void stub::STUB_00061348(void)

{
  return;
}



//==== 0006134c  ns=stub  size=0x4
// sig: undefined STUB_0006134c(void)
// callers(0): 
// callees(0): 

void stub::STUB_0006134c(void)

{
  return;
}



//==== 00061350  ns=stub  size=0x4
// sig: undefined STUB_00061350(void)
// callers(0): 
// callees(0): 

void stub::STUB_00061350(void)

{
  return;
}



//==== 00061354  ns=stub  size=0x4
// sig: undefined STUB_00061354(void)
// callers(0): 
// callees(0): 

void stub::STUB_00061354(void)

{
  return;
}



//==== 000613a0  ns=debug  size=0x11d4
// sig: undefined DebugCamera(void)
// callers(1): 00166fb0 update::UpdateGameplay
// callees(8): 000307f8 camera0::ResetCamOfsVectors_0; 00050ae0 camera::UpdateAllCameras; 00500af8 fastfunc::FastMtx4Identity; 00500ca4 fastfunc::FastEulerToMtx1; 00500f6c fastfunc::FastMtxCopyNoTranslate; 00500fa8 fastfunc::FastApplyTransform; 0050162c fastfunc::FastVecMtx4Mul; 005025e0 fastfunc::FastDiffRots

void debug::DebugCamera(void)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  void *pvVar14;
  short sVar15;
  double dVar16;
  float local_270 [16];
  Vec4 aVStack_230 [4];
  float local_1f0 [16];
  Vec4 aVStack_1b0 [4];
  float afStack_170 [16];
  undefined1 auStack_130 [64];
  Vec4 aVStack_f0 [4];
  Vec4 local_b0;
  float local_a0;
  float local_9c;
  float local_98;
  float local_90;
  float local_8c;
  float local_88;
  
  bVar3 = false;
  if ((g_downButtons & START) != 0) {
    return;
  }
  if ((DebugUpdate & UPDATE_CAMERA) != NONE) {
    camera::UpdateAllCameras();
  }
  sVar15 = g_onMagnerail;
  if (DAT_00964b18 != 0) {
    return;
  }
  bVar1 = (g_downButtons & L2) == 0;
  bVar2 = g_onMagnerail != 2;
  if ((bVar1) || ((g_downButtons & R2) == 0)) {
    if ((g_downButtons & UP) != 0) {
      if (bVar2) {
        fVar4 = GameCamera.rot.radius + 1.5707963;
        fVar5 = 3.1415925 - GameCamera.rot.radius;
        if (GameCamera.rot.radius - (3.1415925 - GameCamera.rot.radius) < 0.0) {
          fVar5 = GameCamera.rot.radius;
        }
        fVar6 = 3.1415925 - fVar4;
        if (fVar4 - (3.1415925 - fVar4) < 0.0) {
          fVar6 = fVar4;
        }
        fVar7 = -3.1415925 - GameCamera.rot.radius;
        if ((-3.1415925 - GameCamera.rot.radius) - fVar5 < 0.0) {
          fVar7 = fVar5;
        }
        fVar5 = -3.1415925 - fVar4;
        if ((-3.1415925 - fVar4) - fVar6 < 0.0) {
          fVar5 = fVar6;
        }
        fVar4 = fVar7 * fVar7;
        fVar8 = fVar5 * fVar5;
        fVar6 = fVar4 * fVar4 * fVar7;
        fVar9 = fVar8 * fVar8 * fVar5;
        fVar11 = fVar4 * fVar6;
        fVar10 = fVar8 * fVar9;
        fVar6 = (fVar4 * fVar11 * 2.601887e-06 +
                fVar11 * -0.0001980741 + fVar6 * 0.0083330255 + fVar4 * fVar7 * -0.16666657 + fVar7)
                * DebugCameraSpeed.horizontal;
        fVar4 = (fVar8 * fVar10 * 2.601887e-06 +
                fVar10 * -0.0001980741 + fVar9 * 0.0083330255 + fVar8 * fVar5 * -0.16666657 + fVar5)
                * DebugCameraSpeed.horizontal;
      }
      else {
        fVar4 = 0.0;
        fVar8 = SQRT(GameCamera.orientMtx.forward.z * GameCamera.orientMtx.forward.z +
                     GameCamera.orientMtx.forward.x * GameCamera.orientMtx.forward.x +
                     GameCamera.orientMtx.forward.y * GameCamera.orientMtx.forward.y);
        fVar5 = DebugCameraSpeed.horizontal / fVar8;
        fVar7 = fVar4;
        if (0.0 - fVar8 < 0.0) {
          fVar7 = GameCamera.orientMtx.forward.z * fVar5;
        }
        fVar6 = fVar4;
        if (0.0 - fVar8 < 0.0) {
          fVar6 = GameCamera.orientMtx.forward.y * fVar5;
        }
        if (0.0 - fVar8 < 0.0) {
          fVar4 = GameCamera.orientMtx.forward.x * fVar5;
        }
        if (fVar8 - 0.0 < 0.0) {
          fVar7 = GameCamera.orientMtx.forward.z * fVar5;
        }
        if (fVar8 - 0.0 < 0.0) {
          fVar6 = GameCamera.orientMtx.forward.y * fVar5;
        }
        if (fVar8 - 0.0 < 0.0) {
          fVar4 = GameCamera.orientMtx.forward.x * fVar5;
        }
        GameCamera.posZ = GameCamera.posZ + fVar7;
      }
      GameCamera.posY = GameCamera.posY + fVar6;
      GameCamera.posX = GameCamera.posX + fVar4;
      bVar3 = true;
    }
    if ((g_downButtons & DOWN) != 0) {
      if (bVar2) {
        fVar4 = GameCamera.rot.radius + 1.5707963;
        fVar5 = 3.1415925 - GameCamera.rot.radius;
        if (GameCamera.rot.radius - (3.1415925 - GameCamera.rot.radius) < 0.0) {
          fVar5 = GameCamera.rot.radius;
        }
        fVar6 = 3.1415925 - fVar4;
        if (fVar4 - (3.1415925 - fVar4) < 0.0) {
          fVar6 = fVar4;
        }
        fVar7 = -3.1415925 - GameCamera.rot.radius;
        if ((-3.1415925 - GameCamera.rot.radius) - fVar5 < 0.0) {
          fVar7 = fVar5;
        }
        fVar5 = -3.1415925 - fVar4;
        if ((-3.1415925 - fVar4) - fVar6 < 0.0) {
          fVar5 = fVar6;
        }
        fVar4 = fVar7 * fVar7;
        fVar6 = fVar5 * fVar5;
        fVar10 = fVar4 * fVar4 * fVar7;
        fVar8 = fVar6 * fVar6 * fVar5;
        fVar11 = fVar4 * fVar10;
        fVar9 = fVar6 * fVar8;
        GameCamera.posY =
             -((fVar4 * fVar11 * 2.601887e-06 +
               fVar11 * -0.0001980741 + fVar10 * 0.0083330255 + fVar4 * fVar7 * -0.16666657 + fVar7)
               * DebugCameraSpeed.horizontal - GameCamera.posY);
        GameCamera.posX =
             -((fVar6 * fVar9 * 2.601887e-06 +
               fVar9 * -0.0001980741 + fVar8 * 0.0083330255 + fVar6 * fVar5 * -0.16666657 + fVar5) *
               DebugCameraSpeed.horizontal - GameCamera.posX);
      }
      else {
        fVar4 = 0.0;
        fVar7 = SQRT(GameCamera.orientMtx.forward.z * GameCamera.orientMtx.forward.z +
                     GameCamera.orientMtx.forward.x * GameCamera.orientMtx.forward.x +
                     GameCamera.orientMtx.forward.y * GameCamera.orientMtx.forward.y);
        fVar5 = DebugCameraSpeed.horizontal / fVar7;
        fVar6 = fVar4;
        if (0.0 - fVar7 < 0.0) {
          fVar6 = GameCamera.orientMtx.forward.z * fVar5;
        }
        fVar8 = fVar4;
        if (0.0 - fVar7 < 0.0) {
          fVar8 = GameCamera.orientMtx.forward.y * fVar5;
        }
        if (0.0 - fVar7 < 0.0) {
          fVar4 = GameCamera.orientMtx.forward.x * fVar5;
        }
        if (fVar7 - 0.0 < 0.0) {
          fVar6 = GameCamera.orientMtx.forward.z * fVar5;
        }
        if (fVar7 - 0.0 < 0.0) {
          fVar8 = GameCamera.orientMtx.forward.y * fVar5;
        }
        if (fVar7 - 0.0 < 0.0) {
          fVar4 = GameCamera.orientMtx.forward.x * fVar5;
        }
        GameCamera.posZ = GameCamera.posZ - fVar6;
        GameCamera.posY = GameCamera.posY - fVar8;
        GameCamera.posX = GameCamera.posX - fVar4;
      }
      bVar3 = true;
    }
    if (!bVar1) {
      if (bVar2) {
        fVar4 = 3.1415925 - GameCamera.rot.radius;
        if (GameCamera.rot.radius - (3.1415925 - GameCamera.rot.radius) < 0.0) {
          fVar4 = GameCamera.rot.radius;
        }
        fVar5 = -3.1415925 - GameCamera.rot.radius;
        if ((-3.1415925 - GameCamera.rot.radius) - fVar4 < 0.0) {
          fVar5 = fVar4;
        }
        fVar4 = fVar5 * fVar5;
        fVar6 = fVar4 * fVar4 * fVar5;
        fVar7 = fVar4 * fVar6;
        GameCamera.posX =
             -((fVar4 * fVar7 * 2.601887e-06 +
               fVar7 * -0.0001980741 + fVar6 * 0.0083330255 + fVar4 * fVar5 * -0.16666657 + fVar5) *
               DebugCameraSpeed.horizontal - GameCamera.posX);
        fVar5 = GameCamera.rot.radius + 1.5707963;
        fVar4 = 3.1415925 - fVar5;
        if (fVar5 - (3.1415925 - fVar5) < 0.0) {
          fVar4 = fVar5;
        }
        fVar6 = -3.1415925 - fVar5;
        if ((-3.1415925 - fVar5) - fVar4 < 0.0) {
          fVar6 = fVar4;
        }
        fVar4 = fVar6 * fVar6;
        fVar5 = fVar4 * fVar4 * fVar6;
        fVar7 = fVar4 * fVar5;
        fVar4 = (fVar4 * fVar7 * 2.601887e-06 +
                fVar7 * -0.0001980741 + fVar5 * 0.0083330255 + fVar4 * fVar6 * -0.16666657 + fVar6)
                * DebugCameraSpeed.horizontal;
      }
      else {
        fVar5 = 0.0;
        fVar8 = SQRT(GameCamera.orientMtx.right.z * GameCamera.orientMtx.right.z +
                     GameCamera.orientMtx.right.x * GameCamera.orientMtx.right.x +
                     GameCamera.orientMtx.right.y * GameCamera.orientMtx.right.y);
        fVar6 = DebugCameraSpeed.horizontal / fVar8;
        fVar7 = fVar5;
        if (0.0 - fVar8 < 0.0) {
          fVar7 = GameCamera.orientMtx.right.z * fVar6;
        }
        fVar4 = fVar5;
        if (0.0 - fVar8 < 0.0) {
          fVar4 = GameCamera.orientMtx.right.y * fVar6;
        }
        if (0.0 - fVar8 < 0.0) {
          fVar5 = GameCamera.orientMtx.right.x * fVar6;
        }
        if (fVar8 - 0.0 < 0.0) {
          fVar7 = GameCamera.orientMtx.right.z * fVar6;
        }
        if (fVar8 - 0.0 < 0.0) {
          fVar4 = GameCamera.orientMtx.right.y * fVar6;
        }
        if (fVar8 - 0.0 < 0.0) {
          fVar5 = GameCamera.orientMtx.right.x * fVar6;
        }
        GameCamera.posZ = GameCamera.posZ + fVar7;
        GameCamera.posX = GameCamera.posX + fVar5;
      }
      GameCamera.posY = GameCamera.posY + fVar4;
      bVar3 = true;
    }
    if ((g_downButtons & R2) == 0) {
      if (!bVar3) goto LAB_00061a78;
    }
    else if (g_onMagnerail == 2) {
      fVar4 = 0.0;
      fVar7 = SQRT(GameCamera.orientMtx.right.z * GameCamera.orientMtx.right.z +
                   GameCamera.orientMtx.right.x * GameCamera.orientMtx.right.x +
                   GameCamera.orientMtx.right.y * GameCamera.orientMtx.right.y);
      fVar5 = DebugCameraSpeed.horizontal / fVar7;
      fVar6 = fVar4;
      if (0.0 - fVar7 < 0.0) {
        fVar6 = GameCamera.orientMtx.right.z * fVar5;
      }
      fVar8 = fVar4;
      if (0.0 - fVar7 < 0.0) {
        fVar8 = GameCamera.orientMtx.right.y * fVar5;
      }
      if (0.0 - fVar7 < 0.0) {
        fVar4 = GameCamera.orientMtx.right.x * fVar5;
      }
      if (fVar7 - 0.0 < 0.0) {
        fVar6 = GameCamera.orientMtx.right.z * fVar5;
      }
      if (fVar7 - 0.0 < 0.0) {
        fVar8 = GameCamera.orientMtx.right.y * fVar5;
      }
      if (fVar7 - 0.0 < 0.0) {
        fVar4 = GameCamera.orientMtx.right.x * fVar5;
      }
      GameCamera.posZ = GameCamera.posZ - fVar6;
      GameCamera.posY = GameCamera.posY - fVar8;
      GameCamera.posX = GameCamera.posX - fVar4;
    }
    else {
      fVar4 = 3.1415925 - GameCamera.rot.radius;
      if (GameCamera.rot.radius - (3.1415925 - GameCamera.rot.radius) < 0.0) {
        fVar4 = GameCamera.rot.radius;
      }
      fVar5 = -3.1415925 - GameCamera.rot.radius;
      if ((-3.1415925 - GameCamera.rot.radius) - fVar4 < 0.0) {
        fVar5 = fVar4;
      }
      fVar4 = fVar5 * fVar5;
      fVar6 = fVar4 * fVar4 * fVar5;
      fVar7 = fVar4 * fVar6;
      GameCamera.posX =
           (fVar4 * fVar7 * 2.601887e-06 +
           fVar7 * -0.0001980741 + fVar6 * 0.0083330255 + fVar4 * fVar5 * -0.16666657 + fVar5) *
           DebugCameraSpeed.horizontal + GameCamera.posX;
      fVar5 = GameCamera.rot.radius + 1.5707963;
      fVar4 = 3.1415925 - fVar5;
      if (fVar5 - (3.1415925 - fVar5) < 0.0) {
        fVar4 = fVar5;
      }
      fVar6 = -3.1415925 - fVar5;
      if ((-3.1415925 - fVar5) - fVar4 < 0.0) {
        fVar6 = fVar4;
      }
      fVar4 = fVar6 * fVar6;
      fVar5 = fVar4 * fVar4 * fVar6;
      fVar7 = fVar4 * fVar5;
      GameCamera.posY =
           -((fVar4 * fVar7 * 2.601887e-06 +
             fVar7 * -0.0001980741 + fVar5 * 0.0083330255 + fVar4 * fVar6 * -0.16666657 + fVar6) *
             DebugCameraSpeed.horizontal - GameCamera.posY);
    }
    DebugCameraSpeed.horizontal = DebugCameraSpeed.horizontal + 0.004;
    if (0.3 < DebugCameraSpeed.horizontal) {
      DebugCameraSpeed.horizontal = 0.3;
    }
  }
  else {
LAB_00061a78:
    DebugCameraSpeed.horizontal = DebugCameraSpeed.horizontal * 0.5;
    if (DebugCameraSpeed.horizontal < 0.004) {
      DebugCameraSpeed.horizontal = 0.0;
    }
  }
  if ((((g_onMagnerail == 2) && (!bVar1)) && ((g_downButtons & R2) != 0)) ||
     ((g_downButtons & (LEFT|RIGHT)) == 0)) {
    DebugCameraSpeed.yaw = DebugCameraSpeed.yaw * 0.6666667;
    if (ABS(DebugCameraSpeed.yaw) < 0.002) {
      DebugCameraSpeed.yaw = 0.0;
    }
  }
  else {
    if ((g_downButtons & LEFT) == 0) {
      DebugCameraSpeed.yaw = DebugCameraSpeed.yaw + 0.002;
    }
    else {
      DebugCameraSpeed.yaw = DebugCameraSpeed.yaw - 0.002;
    }
    if (DebugCameraSpeed.yaw <= 0.04) {
      if (DebugCameraSpeed.yaw < -0.04) {
        DebugCameraSpeed.yaw = -0.04;
      }
    }
    else {
      DebugCameraSpeed.yaw = 0.04;
    }
    if (g_onMagnerail == 2) {
      fastfunc::FastMtx4Identity(local_270);
      fastfunc::FastMtxCopyNoTranslate(aVStack_230,0x951710);
      fastfunc::FastVecMtx4Mul(aVStack_230,aVStack_230,local_270);
      fastfunc::FastApplyTransform((Vec4 *)&GameCamera.orientMtx,aVStack_230);
    }
    else {
      dVar16 = (double)fastfunc::FastDiffRots((double)GameCamera.rot.radius);
      GameCamera.rot.radius = (float)dVar16;
    }
  }
  if ((((g_downButtons & L2) == 0) || ((g_downButtons & R2) == 0)) ||
     ((bVar3 = (g_downButtons & UP) == 0, bVar3 && ((g_downButtons & DOWN) == 0)))) {
    DebugCameraSpeed.pitch = DebugCameraSpeed.pitch * 0.6666667;
    if (ABS(DebugCameraSpeed.pitch) < 0.002) {
      DebugCameraSpeed.pitch = 0.0;
    }
  }
  else {
    if (bVar3) {
      DebugCameraSpeed.pitch = DebugCameraSpeed.pitch + 0.002;
    }
    else {
      DebugCameraSpeed.pitch = DebugCameraSpeed.pitch - 0.002;
    }
    if (DebugCameraSpeed.pitch <= 0.04) {
      if (DebugCameraSpeed.pitch < -0.04) {
        DebugCameraSpeed.pitch = -0.04;
      }
    }
    else {
      DebugCameraSpeed.pitch = 0.04;
    }
    if (sVar15 == 2) {
      fastfunc::FastMtx4Identity(local_1f0);
      fastfunc::FastMtxCopyNoTranslate(aVStack_1b0,0x951710);
      fastfunc::FastVecMtx4Mul(aVStack_1b0,aVStack_1b0,local_1f0);
      fastfunc::FastApplyTransform((Vec4 *)&GameCamera.orientMtx,aVStack_1b0);
    }
    else {
      dVar16 = (double)fastfunc::FastDiffRots((double)GameCamera.rot.elevation);
      GameCamera.rot.elevation = (float)dVar16;
    }
  }
  if (((sVar15 != 2) || ((g_downButtons & L2) == 0)) ||
     (((g_downButtons & R2) == 0 ||
      ((bVar3 = (g_downButtons & LEFT) == 0, bVar3 && ((g_downButtons & RIGHT) == 0)))))) {
    DebugCameraSpeed.roll = DebugCameraSpeed.roll * 0.6666667;
    if (ABS(DebugCameraSpeed.roll) < 0.002) {
      DebugCameraSpeed.roll = 0.0;
    }
  }
  else {
    if (bVar3) {
      DebugCameraSpeed.roll = DebugCameraSpeed.roll + 0.002;
    }
    else {
      DebugCameraSpeed.roll = DebugCameraSpeed.roll - 0.002;
    }
    if (DebugCameraSpeed.roll <= 0.04) {
      if (DebugCameraSpeed.roll < -0.04) {
        DebugCameraSpeed.roll = -0.04;
      }
    }
    else {
      DebugCameraSpeed.roll = 0.04;
    }
    fastfunc::FastMtx4Identity(afStack_170);
    fastfunc::FastMtxCopyNoTranslate(auStack_130,0x951710);
    fastfunc::FastVecMtx4Mul(aVStack_f0,auStack_130,afStack_170);
    fastfunc::FastApplyTransform((Vec4 *)&GameCamera.orientMtx,aVStack_f0);
  }
  bVar3 = (g_downButtons & R1) == 0;
  if ((bVar3) && ((g_downButtons & L1) == 0)) {
    DebugCameraSpeed.vertical = DebugCameraSpeed.vertical * 0.5;
    if (DebugCameraSpeed.vertical < 0.004) {
      DebugCameraSpeed.vertical = 0.0;
    }
  }
  else if (bVar3) {
    DebugCameraSpeed.vertical = DebugCameraSpeed.vertical - 0.004;
    if (DebugCameraSpeed.vertical < -0.3) {
      DebugCameraSpeed.vertical = -0.3;
    }
  }
  else {
    DebugCameraSpeed.vertical = DebugCameraSpeed.vertical + 0.004;
    if (0.3 < DebugCameraSpeed.vertical) {
      DebugCameraSpeed.vertical = 0.3;
    }
  }
  fVar4 = DebugCameraSpeed.vertical;
  if (sVar15 == 2) {
    fVar7 = 0.0;
    fVar5 = SQRT(GameCamera.orientMtx.up.z * GameCamera.orientMtx.up.z +
                 GameCamera.orientMtx.up.x * GameCamera.orientMtx.up.x +
                 GameCamera.orientMtx.up.y * GameCamera.orientMtx.up.y);
    fVar6 = DebugCameraSpeed.vertical / fVar5;
    fVar4 = fVar7;
    if (0.0 - fVar5 < 0.0) {
      fVar4 = GameCamera.orientMtx.up.z * fVar6;
    }
    fVar8 = fVar7;
    if (0.0 - fVar5 < 0.0) {
      fVar8 = GameCamera.orientMtx.up.y * fVar6;
    }
    if (0.0 - fVar5 < 0.0) {
      fVar7 = GameCamera.orientMtx.up.x * fVar6;
    }
    if (fVar5 - 0.0 < 0.0) {
      fVar4 = GameCamera.orientMtx.up.z * fVar6;
    }
    if (fVar5 - 0.0 < 0.0) {
      fVar8 = GameCamera.orientMtx.up.y * fVar6;
    }
    if (fVar5 - 0.0 < 0.0) {
      fVar7 = GameCamera.orientMtx.up.x * fVar6;
    }
    GameCamera.posY = GameCamera.posY + fVar8;
    GameCamera.posX = GameCamera.posX + fVar7;
  }
  GameCamera.posZ = GameCamera.posZ + fVar4;
  if (sVar15 != 2) {
    fastfunc::FastEulerToMtx1(&local_b0,0x951510);
    fVar4 = 0.0;
    fVar8 = local_b0.z * local_b0.z + local_b0.x * local_b0.x + local_b0.y * local_b0.y;
    fVar7 = fVar4;
    fVar5 = fVar4;
    fVar6 = fVar4;
    if (SQRT(fVar8) != 0.0) {
      fVar7 = 1.0 / SQRT(fVar8);
      fVar7 = -(fVar8 * fVar7 * fVar7 - 1.0) * fVar7 * 0.5 + fVar7;
      fVar7 = -(fVar8 * fVar7 * fVar7 - 1.0) * fVar7 * 0.5 + fVar7;
      fVar7 = -(fVar8 * fVar7 * fVar7 - 1.0) * fVar7 * 0.5 + fVar7;
      fVar6 = local_b0.x * fVar7;
      fVar5 = local_b0.y * fVar7;
      fVar7 = local_b0.z * fVar7;
    }
    fVar11 = local_98 * local_98 + local_a0 * local_a0 + local_9c * local_9c;
    fVar8 = fVar4;
    fVar9 = fVar4;
    fVar10 = fVar4;
    if (SQRT(fVar11) != 0.0) {
      fVar8 = 1.0 / SQRT(fVar11);
      fVar8 = -(fVar11 * fVar8 * fVar8 - 1.0) * fVar8 * 0.5 + fVar8;
      fVar8 = -(fVar11 * fVar8 * fVar8 - 1.0) * fVar8 * 0.5 + fVar8;
      fVar8 = -(fVar11 * fVar8 * fVar8 - 1.0) * fVar8 * 0.5 + fVar8;
      fVar10 = local_a0 * fVar8;
      fVar9 = local_9c * fVar8;
      fVar8 = local_98 * fVar8;
    }
    fVar13 = local_88 * local_88 + local_90 * local_90 + local_8c * local_8c;
    fVar11 = fVar4;
    fVar12 = fVar4;
    if (SQRT(fVar13) != 0.0) {
      fVar11 = 1.0 / SQRT(fVar13);
      fVar11 = -(fVar13 * fVar11 * fVar11 - 1.0) * fVar11 * 0.5 + fVar11;
      fVar11 = -(fVar13 * fVar11 * fVar11 - 1.0) * fVar11 * 0.5 + fVar11;
      fVar11 = -(fVar13 * fVar11 * fVar11 - 1.0) * fVar11 * 0.5 + fVar11;
      fVar4 = local_90 * fVar11;
      fVar12 = local_8c * fVar11;
      fVar11 = local_88 * fVar11;
    }
    local_b0.x = fVar6;
    local_b0.y = fVar5;
    local_b0.z = fVar7;
    local_a0 = fVar10;
    local_9c = fVar9;
    local_98 = fVar8;
    local_90 = fVar4;
    local_8c = fVar12;
    local_88 = fVar11;
    fastfunc::FastApplyTransform((Vec4 *)&GameCamera.orientMtx,&local_b0);
  }
  pvVar14 = GameCamera.pCurrentUpdCam;
  fVar4 = GameCamera.posX;
  if ((ControlMode == 2) && (GameCamera.pCurrentUpdCam != (void *)0x0)) {
    *(float *)((int)GameCamera.pCurrentUpdCam + 0x30) = GameCamera.posX;
    fVar5 = GameCamera.posY;
    *(float *)((int)pvVar14 + 0x34) = GameCamera.posY;
    fVar6 = GameCamera.posZ;
    *(float *)((int)pvVar14 + 0x38) = GameCamera.posZ;
    *(char (*) [4])((int)pvVar14 + 0x3c) = GameCamera.field8_0x14c;
    fVar7 = GameCamera.orientMtx.forward.x;
    *(float *)pvVar14 = GameCamera.orientMtx.forward.x;
    fVar8 = GameCamera.orientMtx.forward.y;
    *(float *)((int)pvVar14 + 4) = GameCamera.orientMtx.forward.y;
    fVar9 = GameCamera.orientMtx.forward.z;
    *(float *)((int)pvVar14 + 8) = GameCamera.orientMtx.forward.z;
    fVar10 = GameCamera.orientMtx.forward.w;
    *(float *)((int)pvVar14 + 0xc) = GameCamera.orientMtx.forward.w;
    *(float *)((int)pvVar14 + 0x10) = GameCamera.orientMtx.right.x;
    *(float *)((int)pvVar14 + 0x14) = GameCamera.orientMtx.right.y;
    *(float *)((int)pvVar14 + 0x18) = GameCamera.orientMtx.right.z;
    *(float *)((int)pvVar14 + 0x1c) = GameCamera.orientMtx.right.w;
    *(float *)((int)pvVar14 + 0x20) = GameCamera.orientMtx.up.x;
    *(float *)((int)pvVar14 + 0x24) = GameCamera.orientMtx.up.y;
    *(float *)((int)pvVar14 + 0x28) = GameCamera.orientMtx.up.z;
    fVar11 = GameCamera.orientMtx.up.w;
    *(float *)((int)pvVar14 + 0x40) = fVar7;
    *(float *)((int)pvVar14 + 0x2c) = fVar11;
    *(float *)((int)pvVar14 + 0x44) = fVar8;
    *(float *)((int)pvVar14 + 0x48) = fVar9;
    *(float *)((int)pvVar14 + 0x4c) = fVar10;
    *(float *)((int)pvVar14 + 100) = fVar4;
    *(float *)((int)pvVar14 + 0x68) = fVar5;
    *(float *)((int)pvVar14 + 0x6c) = fVar6;
    camera0::ResetCamOfsVectors_0(pvVar14);
  }
  return;
}



//==== 00062590  ns=debug  size=0x1d0
// sig: undefined UpdateDebugCamera(void)
// callers(1): 00166fb0 update::UpdateGameplay
// callees(4): 000f31a8 mobyfunc::UpdateMobyTransform; 0050027c fastfunc::FastMemCopy32; 00500ca4 fastfunc::FastEulerToMtx1; 00502578 fastfunc::FastWrapRot

void debug::UpdateDebugCamera(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  MobyInstance *pMVar5;
  Mtx4 *pMVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  dVar8 = (double)fastfunc::FastWrapRot(GameCamera.rot.radius,DAT_0095c648);
  fVar1 = (float)(dVar8 + 1.570796251296997);
  dVar7 = (double)(float)(3.141592502593994 - dVar8);
  if (dVar8 - (double)(float)(3.141592502593994 - dVar8) < 0.0) {
    dVar7 = dVar8;
  }
  fVar2 = 3.1415925 - fVar1;
  if (fVar1 - (3.1415925 - fVar1) < 0.0) {
    fVar2 = fVar1;
  }
  dVar9 = (double)(float)(-3.141592502593994 - dVar8);
  if ((double)(float)(-3.141592502593994 - dVar8) - dVar7 < 0.0) {
    dVar9 = dVar7;
  }
  fVar3 = -3.1415925 - fVar1;
  if ((-3.1415925 - fVar1) - fVar2 < 0.0) {
    fVar3 = fVar2;
  }
  dVar10 = (double)(float)(dVar9 * dVar9);
  fVar4 = fVar3 * fVar3;
  dVar7 = (double)(float)(dVar10 * (double)(float)(dVar10 * dVar9));
  fVar1 = fVar4 * fVar4 * fVar3;
  dVar8 = (double)(float)(dVar10 * dVar7);
  fVar2 = fVar4 * fVar1;
  g_heroPosition.z = GameCamera.posZ + DAT_0095c650;
  g_heroPosition.y =
       ((float)(dVar10 * dVar8) * 2.601887e-06 +
       (float)(dVar8 * -0.0001980741071747616 +
              (double)(float)(dVar7 * 0.008333025500178337 +
                             (double)(float)((double)(float)(dVar10 * dVar9) * -0.16666656732559204
                                            + dVar9)))) * DAT_0095c64c + GameCamera.posY;
  g_heroPosition.x =
       (fVar4 * fVar2 * 2.601887e-06 +
       fVar2 * -0.0001980741 + fVar1 * 0.0083330255 + fVar4 * fVar3 * -0.16666657 + fVar3) *
       DAT_0095c64c + GameCamera.posX;
  dVar7 = (double)fastfunc::FastWrapRot(GameCamera.rot.radius,DAT_0095c644);
  g_heroRotation.z = (float)dVar7;
  fastfunc::FastEulerToMtx1(&hero::g_heroMtx,&g_heroRotation);
  pMVar5 = g_heroMobyPtr;
  pMVar6 = &g_heroMobyPtr->transform;
  (g_heroMobyPtr->pos).x = g_heroPosition.x;
  (pMVar5->pos).y = g_heroPosition.y;
  (pMVar5->pos).z = g_heroPosition.z;
  (pMVar5->pos).w = g_heroPosition.w;
  (pMVar5->rotation).x = g_heroRotation.x;
  (pMVar5->rotation).y = g_heroRotation.y;
  (pMVar5->rotation).z = g_heroRotation.z;
  (pMVar5->rotation).w = g_heroRotation.w;
  fastfunc::FastMemCopy32(pMVar6,&hero::g_heroMtx,0x30);
  mobyfunc::UpdateMobyTransform(g_heroMobyPtr);
  return;
}



//==== 00062760  ns=stub  size=0x4
// sig: undefined STUB_00062760(void)
// callers(0): 
// callees(0): 

void stub::STUB_00062760(void)

{
  return;
}



//==== 00062764  ns=debug  size=0x4c
// sig: undefined SetDebugGameMode(void)
// callers(0): 
// callees(1): 000780f4 stub::STUB_000780f4

void debug::SetDebugGameMode(void)

{
  g_debugLastGameMode = g_gameMode;
  g_gameMode = GAME_MODE_DEBUG;
  stub::STUB_000780f4(0,0,0);
  return;
}



//==== 000627d0  ns=debug  size=0x168c
// sig: undefined UpdateDebugSelections(void)
// callers(1): 000e0e60 main::startLevel
// callees(14): 000668d0 draw::UpdateViewContext; 000678d8 draw::UpdateFog; 000780f4 stub::STUB_000780f4; 000e0038 loaders::LoadNpcMobys; 0015be68 sound::sound_Update; 005025e0 fastfunc::FastDiffRots; 00502730 fastfunc::FastIntToDouble; 00502dcc FUN_00502dcc; 00502dd4 stub::STUB_00502dd4; 00502ddc stub::STUB_00502ddc; 00502de0 stub::STUB_00502de0_RET_0; 00502de8 stub::STUB_00502de8; 005c8510 libc::strlen; 005cd2a8 libc::snprintf
// strings: 000627c8: '@#33`' | 00651c40: '%s%d\\%s%s' | 00651c70: 'occ_sample_deltas.dat' | 00651c50: 'host0:z:/i5/levels/level' | 00651c90: 'add_sample: %.2f %.2f %.2f\n' | 00651cb0: 'occ_samp.dat' | 00651cc0: 'start_pt: %.2f %.2f %.2f\n'

void debug::UpdateDebugSelections(void)

{
  bool bVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  DEBUG_OPTION DVar8;
  ulonglong *puVar9;
  char cVar10;
  CONTROLLER_INPUT CVar11;
  float fVar12;
  uint uVar13;
  CONTROLLER_INPUT CVar14;
  longlong lVar15;
  longlong lVar16;
  int iVar19;
  int iVar20;
  undefined8 uVar17;
  size_t sVar21;
  undefined8 uVar18;
  int iVar24;
  longlong lVar22;
  ulonglong uVar23;
  float *pfVar25;
  ulonglong uVar26;
  longlong lVar27;
  uint *puVar28;
  ulonglong uVar29;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar30;
  double dVar31;
  double dVar32;
  ulonglong in_f31;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  
  uVar23 = ZEXT48(&stack0x00000000);
  lVar16 = uVar23 - 0x1e0;
  puVar9 = (ulonglong *)lVar16;
  *puVar9 = uVar23;
  puVar9[0x3e] = in_LR;
  puVar9[0x3b] = in_f31;
  puVar9[0x3a] = unaff_r31;
  puVar9[0x39] = unaff_r30;
  puVar9[0x38] = unaff_r29;
  puVar9[0x37] = unaff_r28;
  puVar9[0x36] = unaff_r27;
  puVar9[0x35] = unaff_r26;
  puVar9[0x34] = unaff_r25;
  puVar9[0x33] = unaff_r24;
  puVar9[0x32] = unaff_r23;
  sound::sound_Update();
  CVar11 = g_buttonsPressedThisFrame;
  CVar14 = g_downButtons;
  if ((g_buttonsPressedThisFrame & (R3|SELECT)) == 0) {
    *(undefined4 *)((int)puVar9 + 0x7c) = 5;
    *(undefined4 *)(puVar9 + 0x10) = 0xb;
    *(undefined4 *)((int)puVar9 + 0x84) = 9;
    *(undefined4 *)(puVar9 + 0x11) = 0xe;
    *(undefined4 *)((int)puVar9 + 0x8c) = 7;
    *(undefined4 *)(puVar9 + 0x12) = 5;
    iVar19 = Segment;
    if ((CVar11 & RIGHT) == 0) {
      if ((CVar11 & LEFT) != 0) {
        DebugSelectedCol = DebugSelectedCol - 1;
        if ((int)DebugSelectedCol < 0) {
          DebugSelectedCol = 2;
        }
        else if (DebugSelectedCol == 2) {
          DebugSelectedCol = 5;
        }
      }
    }
    else {
      DebugSelectedCol = DebugSelectedCol + 1;
      if (DebugSelectedCol == 3) {
        DebugSelectedCol = 0;
      }
      else if (DebugSelectedCol == 6) {
        DebugSelectedCol = 3;
      }
    }
    if (((CVar11 & UP) == 0) ||
       (DebugSelectedRow = DebugSelectedRow - 1, -1 < (int)DebugSelectedRow)) {
      if ((CVar11 & DOWN) != 0) {
        DebugSelectedRow = DebugSelectedRow + 1;
        if (*(int *)((int)puVar9 + DebugSelectedCol * 4 + 0x7c) <= (int)DebugSelectedRow) {
          if ((int)DebugSelectedCol < 3) {
            iVar24 = DebugSelectedCol + 9;
            iVar20 = iVar24 / 6 + (iVar24 >> 0x1f);
            DebugSelectedCol = iVar24 + (iVar20 - (iVar20 >> 0x1f)) * -6;
          }
          DebugSelectedRow = 0;
        }
      }
    }
    else {
      uVar26 = (ulonglong)DebugSelectedCol;
      if (2 < (int)DebugSelectedCol) {
        lVar15 = (longlong)(int)(uVar26 + 3);
        uVar29 = lVar15 / 6 + (lVar15 >> 0x3f) & 0xffffffff;
        uVar26 = uVar26 + 3 + (uVar29 - ((longlong)(uVar29 << 0x20) >> 0x3f)) * -6;
        DebugSelectedCol = (uint)uVar26;
      }
      DebugSelectedRow = *(int *)((int)puVar9 + (int)((uVar26 & 0xffffffff) << 2) + 0x7c) - 1;
    }
    iVar20 = *(int *)((int)puVar9 + DebugSelectedCol * 4 + 0x7c);
    if (iVar20 <= (int)DebugSelectedRow) {
      DebugSelectedRow = iVar20 - 1;
    }
    uVar13 = DebugSelectedRow;
    if (DebugSelectedCol == 5) {
      if ((DebugSelectedRow == 0) && ((CVar11 & (CROSS|TRIANGLE)) != 0)) {
        BattleCam = (uint)LZCOUNT(BattleCam) >> 5;
      }
      if ((DebugSelectedRow == 1) && ((CVar11 & (CROSS|TRIANGLE)) != 0)) {
        Actuator = (uint)LZCOUNT(Actuator) >> 5;
      }
      if ((DebugSelectedRow == 2) && ((CVar11 & (SQUARE|CROSS|CIRCLE|TRIANGLE)) != 0)) {
        iVar20 = 0;
        iVar19 = 0;
        if (0 < DAT_00a108d4) {
          iVar24 = 0;
          do {
            pfVar25 = (float *)(DAT_00a1090c + iVar24);
            if ((((*pfVar25 < GameCamera.posX + 0.5) && (GameCamera.posX - 0.5 < *pfVar25)) &&
                (pfVar25[1] < GameCamera.posY + 0.5)) &&
               (((GameCamera.posY - 0.5 < pfVar25[1] && (pfVar25[2] < GameCamera.posZ + 0.5)) &&
                (GameCamera.posZ - 0.5 < pfVar25[2])))) {
              return;
            }
            iVar20 = iVar20 + 1;
            iVar24 = iVar24 + 4;
          } while (iVar20 < DAT_00a108d4);
        }
        libc::snprintf((char *)(uVar23 - 0xd8),"%s%d\\%s%s","host0:z:/i5/levels/level",Level,
                       "occ_sample_deltas.dat",&DAT_00651c88);
        dVar32 = (double)GameCamera.posY;
        dVar31 = (double)GameCamera.posZ;
        puVar9[8] = (ulonglong)(double)GameCamera.posX;
        puVar9[9] = (ulonglong)dVar32;
        puVar9[10] = (ulonglong)dVar31;
        libc::snprintf((char *)(puVar9 + 0x17),"add_sample: %.2f %.2f %.2f\n",puVar9[8],puVar9[9],
                       puVar9[10]);
        uVar17 = FUN_00502dcc(uVar23 - 0xd8,7);
        if (-1 < (int)uVar17) {
          stub::STUB_00502de0_RET_0(uVar17,0,5);
          sVar21 = libc::strlen((char *)(uVar23 - 0x128));
          stub::STUB_00502de8(uVar17,uVar23 - 0x128,sVar21);
          stub::STUB_00502ddc(uVar17);
          AddSample = 0x79;
        }
        iVar20 = DAT_00a1090c;
        libc::snprintf((char *)(uVar23 - 0xd8),"%s%d\\%s%s","host0:z:/i5/levels/level",Level,
                       "occ_samp.dat",&DAT_00651c88);
        uVar17 = FUN_00502dcc(uVar23 - 0xd8,7);
        if (-1 < (int)uVar17) {
          stub::STUB_00502de0_RET_0(uVar17,0,5);
          stub::STUB_00502de8(uVar17,0x951500,4);
          stub::STUB_00502de8(uVar17,0x951504,4);
          stub::STUB_00502de8(uVar17,0x951508,4);
          stub::STUB_00502de0_RET_0(uVar17,0,6);
          uVar18 = stub::STUB_00502de0_RET_0(uVar17,0,5);
          if ((int)uVar18 < 0x100001) {
            stub::STUB_00502de0_RET_0(uVar17,0,6);
            stub::STUB_00502dd4(uVar17,iVar20,uVar18);
            iVar19 = (int)uVar18 / 0xc;
          }
          DAT_00a108d4 = iVar19;
          stub::STUB_00502ddc(uVar17);
        }
      }
      if ((DebugSelectedRow == 3) &&
         ((g_buttonsPressedThisFrame & (SQUARE|CROSS|CIRCLE|TRIANGLE)) != 0)) {
        libc::snprintf((char *)(uVar23 - 0x98),"%s%d\\%s%s","host0:z:/i5/levels/level",Level,
                       "occ_sample_deltas.dat",&DAT_00651c88);
        dVar32 = (double)GameCamera.posY;
        dVar31 = (double)GameCamera.posZ;
        puVar9[8] = (ulonglong)(double)GameCamera.posX;
        puVar9[9] = (ulonglong)dVar32;
        puVar9[10] = (ulonglong)dVar31;
        libc::snprintf((char *)(puVar9 + 0x1c),"start_pt: %.2f %.2f %.2f\n",puVar9[8],puVar9[9],
                       puVar9[10]);
        uVar17 = FUN_00502dcc(uVar23 - 0x98,7);
        if (-1 < (int)uVar17) {
          stub::STUB_00502de0_RET_0(uVar17,0,5);
          sVar21 = libc::strlen((char *)(uVar23 - 0x100));
          stub::STUB_00502de8(uVar17,uVar23 - 0x100,sVar21);
          stub::STUB_00502ddc(uVar17);
          AddStart = 0x79;
        }
      }
    }
    else if (DebugSelectedCol == 4) {
      if (DebugSelectedRow == 0) {
        if (((CVar14 & CROSS) != 0) || ((CVar11 & R1) != 0)) {
          LevelFogNearDist = LevelFogNearDist + 1024.0;
        }
        if (((CVar14 & TRIANGLE) != 0) || ((CVar11 & L1) != 0)) {
          LevelFogNearDist = LevelFogNearDist - 1024.0;
        }
        if ((int)(((uint)((int)LevelFogFarDist >> 0x1f) >> 1 ^ (uint)LevelFogFarDist) -
                 ((int)LevelFogFarDist >> 0x1f)) <
            (int)(((uint)((int)LevelFogNearDist >> 0x1f) >> 1 ^ (uint)LevelFogNearDist) -
                 ((int)LevelFogNearDist >> 0x1f))) {
          LevelFogNearDist = LevelFogFarDist;
        }
        else if ((int)LevelFogNearDist < 0) {
          LevelFogNearDist = 0.0;
        }
      }
      if (DebugSelectedRow == 2) {
        if (((CVar14 & CROSS) != 0) || ((CVar11 & R1) != 0)) {
          LevelFogFarDist = LevelFogFarDist + 1024.0;
        }
        if (((CVar14 & TRIANGLE) != 0) || ((CVar11 & L1) != 0)) {
          LevelFogFarDist = LevelFogFarDist - 1024.0;
        }
        iVar19 = ((uint)((int)LevelFogFarDist >> 0x1f) >> 1 ^ (uint)LevelFogFarDist) -
                 ((int)LevelFogFarDist >> 0x1f);
        if (iVar19 < 0x49000001) {
          if (iVar19 < (int)(((uint)((int)LevelFogNearDist >> 0x1f) >> 1 ^ (uint)LevelFogNearDist) -
                            ((int)LevelFogNearDist >> 0x1f))) {
            LevelFogFarDist = LevelFogNearDist;
          }
        }
        else {
          LevelFogFarDist = 524288.0;
        }
      }
      if (DebugSelectedRow == 1) {
        if (((CVar14 & CROSS) != 0) || ((CVar11 & R1) != 0)) {
          LevelFogNearIntensity = LevelFogNearIntensity - (float)0x40233333;
        }
        if (((CVar14 & TRIANGLE) != 0) || ((CVar11 & L1) != 0)) {
          LevelFogNearIntensity = LevelFogNearIntensity + (float)0x40233333;
        }
        if ((int)(((uint)((int)LevelFogNearIntensity >> 0x1f) >> 1 ^ (uint)LevelFogNearIntensity) -
                 ((int)LevelFogNearIntensity >> 0x1f)) < 0x437f0001) {
          if ((int)LevelFogNearIntensity < 0) {
            LevelFogNearIntensity = 0.0;
          }
        }
        else {
          LevelFogNearIntensity = 255.0;
        }
      }
      if (DebugSelectedRow == 3) {
        if (((CVar14 & CROSS) != 0) || ((CVar11 & R1) != 0)) {
          LevelFogFarIntensity = LevelFogFarIntensity - (float)0x40233333;
        }
        if (((CVar14 & TRIANGLE) != 0) || ((CVar11 & L1) != 0)) {
          LevelFogFarIntensity = LevelFogFarIntensity + (float)0x40233333;
        }
        if ((int)(((uint)((int)LevelFogFarIntensity >> 0x1f) >> 1 ^ (uint)LevelFogFarIntensity) -
                 ((int)LevelFogFarIntensity >> 0x1f)) < 0x437f0001) {
          if ((int)LevelFogFarIntensity < 0) {
            LevelFogFarIntensity = 0.0;
          }
        }
        else {
          LevelFogFarIntensity = 255.0;
        }
      }
      if (DebugSelectedRow == 4) {
        if ((levelFog.r != 0xff) && (((CVar14 & CROSS) != 0 || ((CVar11 & R1) != 0)))) {
          levelFog.r = levelFog.r + '\x01';
        }
        if ((levelFog.r != '\0') && (((CVar14 & TRIANGLE) != 0 || ((CVar11 & L1) != 0)))) {
          levelFog.r = levelFog.r + 0xff;
        }
      }
      if (DebugSelectedRow == 5) {
        if ((levelFog.g != 0xff) && (((CVar14 & CROSS) != 0 || ((CVar11 & R1) != 0)))) {
          levelFog.g = levelFog.g + '\x01';
        }
        if ((levelFog.g != '\0') && (((CVar14 & TRIANGLE) != 0 || ((CVar11 & L1) != 0)))) {
          levelFog.g = levelFog.g + 0xff;
        }
      }
      if (DebugSelectedRow == 6) {
        if ((levelFog.b != 0xff) && (((CVar14 & CROSS) != 0 || ((CVar11 & R1) != 0)))) {
          levelFog.b = levelFog.b + '\x01';
        }
        if ((levelFog.b != '\0') && (((CVar14 & TRIANGLE) != 0 || ((CVar11 & L1) != 0)))) {
          levelFog.b = levelFog.b + 0xff;
        }
      }
      draw::UpdateFog();
    }
    else if (DebugSelectedCol == 3) {
      uVar23 = 999999;
      if ((int)DebugSelectedRow < 0xd) {
        puVar28 = &currentAmmoArray.field0_0x0 + (byte)(&DAT_0071ee3c)[DebugSelectedRow];
        uVar23 = (ulonglong)
                 (ushort)(&DAT_00737d3e)[(uint)(byte)(&DAT_0071ee3c)[DebugSelectedRow] * 0xc];
      }
      else {
        puVar28 = &g_boltCount;
      }
      if ((CVar14 & R1) == 0) {
        if ((CVar14 & R2) == 0) {
          if ((CVar11 & CROSS) != 0) {
            *puVar28 = *puVar28 + 1;
          }
          if (((CVar11 & CIRCLE) != 0) && (0 < (int)*puVar28)) {
            *puVar28 = *puVar28 - 1;
          }
        }
        else {
          if ((CVar11 & CROSS) != 0) {
            *puVar28 = *puVar28 + 600;
          }
          if ((CVar11 & CIRCLE) != 0) {
            *puVar28 = (uint)(600 - (longlong)(int)*puVar28 >> 0x3f) & *puVar28 - 600;
          }
        }
      }
      else {
        if ((CVar11 & CROSS) != 0) {
          *puVar28 = *puVar28 + 0x3c;
        }
        if ((CVar11 & CIRCLE) != 0) {
          *puVar28 = (uint)(0x3c - (longlong)(int)*puVar28 >> 0x3f) & *puVar28 - 0x3c;
        }
      }
      uVar7 = *puVar28;
      *puVar28 = uVar7 + ((uint)((longlong)(uVar23 - (longlong)(int)uVar7) >> 0x3f) &
                         (int)uVar23 - uVar7);
      if ((CVar11 & TRIANGLE) != 0) {
        (&g_goldWeaponsArray.field0_0x0)[(byte)(&DAT_0071ee3c)[uVar13]] =
             (&g_goldWeaponsArray.field0_0x0)[(byte)(&DAT_0071ee3c)[uVar13]] + '\x01';
      }
      if ((CVar11 & SQUARE) != 0) {
        (&g_goldWeaponsArray.field0_0x0)[(byte)(&DAT_0071ee3c)[uVar13]] =
             (&g_goldWeaponsArray.field0_0x0)[(byte)(&DAT_0071ee3c)[uVar13]] + 0xff;
      }
      bVar2 = (&DAT_0071ee3c)[uVar13];
      iVar19 = (uint)bVar2 * 0x10 + (uint)bVar2 * 0x3c;
      if (*(short *)(&DAT_0072103e + iVar19) <
          (short)(ushort)(&g_goldWeaponsArray.field0_0x0)[bVar2]) {
        (&g_goldWeaponsArray.field0_0x0)[bVar2] = (undefined)*(undefined2 *)(&DAT_0072103e + iVar19)
        ;
      }
    }
    else if (DebugSelectedCol == 2) {
      if ((CVar11 & CROSS) != 0) {
        DrawMode = DrawMode ^ 1 << (DebugSelectedRow & 0x3f);
      }
    }
    else if (DebugSelectedCol == 1) {
      if ((int)DebugSelectedRow < 5) {
        if ((int)DebugSelectedRow < 2) {
          if (-1 < (int)DebugSelectedRow) {
            if ((int)DebugSelectedRow < 1) {
              if ((CVar11 & (CROSS|TRIANGLE)) != 0) {
                if (((CVar11 & CROSS) != 0) && (ControlMode = ControlMode + 1, 3 < ControlMode)) {
                  ControlMode = 0;
                }
                if (((CVar11 & TRIANGLE) != 0) && (ControlMode = ControlMode + -1, ControlMode < 0))
                {
                  ControlMode = 3;
                }
                if (ControlMode < 2) {
                  if (-1 < ControlMode) {
                    if (ControlMode < 1) {
                      DebugUpdate = UPDATE_CAMERA|UPDATE_PARTICLES|UPDATE_MOBYS|UPDATE_HERO;
                    }
                    else {
                      DebugUpdate = NONE;
                    }
                  }
                }
                else if (ControlMode < 3) {
                  fVar4 = g_heroPosition.y - GameCamera.posY;
                  fVar5 = g_heroPosition.x - GameCamera.posX;
                  *(float *)(puVar9 + 0xe) = fVar5;
                  DebugUpdate = NONE;
                  *(float *)((int)puVar9 + 0x74) = fVar4;
                  DAT_0095c64c = SQRT(fVar5 * fVar5 + fVar4 * fVar4);
                  *(float *)(puVar9 + 0xf) = ABS(fVar5) - ABS(fVar4);
                  uVar26 = (ulonglong)(*(uint *)(puVar9 + 0xe) >> 0x1c) & 8 |
                           (ulonglong)(*(uint *)(puVar9 + 0xf) >> 0x1e) & 2 |
                           (ulonglong)(*(uint *)((int)puVar9 + 0x74) >> 0x1d) & 4;
                  dVar32 = 0.0;
                  fVar6 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar26 << 2));
                  fVar3 = *(float *)(((uint)(uVar26 << 2) | 0x735900) + 4);
                  fVar12 = ABS(*(float *)(puVar9 + 0xe));
                  if (*(float *)(puVar9 + 0xf) - 0.0 < 0.0) {
                    fVar12 = ABS(fVar4);
                  }
                  fVar4 = ABS(*(float *)((int)puVar9 + 0x74));
                  if (*(float *)(puVar9 + 0xf) - 0.0 < 0.0) {
                    fVar4 = ABS(fVar5);
                  }
                  if (0.0 < fVar12) {
                    lVar15 = uVar23 - 0x1d0;
                    lVar22 = uVar23 - 0x14c;
                    lVar27 = uVar23 - 0x13c;
                    lVar30 = 2;
                    fVar4 = (fVar4 - fVar12) / (fVar4 + fVar12);
                    fVar5 = fVar4 * fVar4;
                    *(float *)(puVar9 + 0x14) = fVar4;
                    *(float *)(puVar9 + 0x13) = fVar4;
                    *(float *)((int)puVar9 + 0x9c) = fVar4;
                    *(float *)((int)puVar9 + 0x94) = fVar4;
                    fVar4 = fVar5 * fVar5;
                    *(float *)(puVar9 + 0x13) = *(float *)(puVar9 + 0x13) * fVar5;
                    *(float *)((int)puVar9 + 0x9c) = *(float *)((int)puVar9 + 0x9c) * fVar4;
                    *(float *)(puVar9 + 0x14) = *(float *)(puVar9 + 0x14) * fVar4 * fVar5;
                    do {
                      *(float *)((int)lVar15 + 0x94) =
                           *(float *)((int)lVar15 + 0x84) * fVar4 * fVar4;
                      iVar19 = (int)lVar22;
                      lVar15 = lVar15 + 8;
                      lVar22 = lVar22 + 8;
                      *(float *)((int)lVar27 + 4) = *(float *)(iVar19 + 4) * fVar4 * fVar4;
                      lVar27 = lVar27 + 8;
                      lVar30 = lVar30 + -1;
                    } while (lVar30 != 0);
                    lVar30 = 4;
                    lVar27 = uVar23 - 0x14c;
                    pfVar25 = (float *)&DAT_007358e0;
                    lVar15 = lVar16;
                    lVar22 = lVar27;
                    do {
                      fVar4 = *pfVar25;
                      fVar5 = pfVar25[1];
                      pfVar25 = pfVar25 + 2;
                      *(float *)((int)lVar15 + 0x94) = *(float *)((int)lVar15 + 0x94) * fVar4;
                      lVar15 = lVar15 + 8;
                      *(float *)((int)lVar22 + 4) = *(float *)((int)lVar22 + 4) * fVar5;
                      lVar22 = lVar22 + 8;
                      lVar30 = lVar30 + -1;
                    } while (lVar30 != 0);
                    lVar15 = 2;
                    do {
                      iVar19 = (int)lVar16;
                      iVar20 = (int)lVar27;
                      lVar16 = lVar16 + 0x10;
                      lVar27 = lVar27 + 0x10;
                      dVar32 = (double)((float)(dVar32 + (double)*(float *)(iVar19 + 0x94)) +
                                        *(float *)(iVar20 + 4) + *(float *)(iVar20 + 8) +
                                       *(float *)(iVar20 + 0xc));
                      lVar15 = lVar15 + -1;
                    } while (lVar15 != 0);
                    dVar32 = (double)((float)(dVar32 + 0.7853981852531433) * fVar6 + fVar3);
                  }
                  dVar32 = (double)fastfunc::FastDiffRots(dVar32,(double)GameCamera.rot.radius);
                  DAT_0095c648 = (float)dVar32;
                  DAT_0095c650 = g_heroPosition.z - GameCamera.posZ;
                  dVar32 = (double)fastfunc::FastDiffRots
                                             ((double)g_heroRotation.z,(double)GameCamera.rot.radius
                                             );
                  DAT_0095c644 = (float)dVar32;
                }
                else if (ControlMode < 4) {
                  DebugUpdate = UPDATE_PARTICLES|UPDATE_MOBYS;
                }
              }
            }
            else {
              if (((CVar11 & CROSS) != 0) && (Profile = Profile + 1, 7 < Profile)) {
                Profile = 0;
              }
              if (((CVar11 & TRIANGLE) != 0) && (Profile = Profile + -1, Profile < 0)) {
                Profile = 7;
              }
            }
          }
        }
        else if ((int)DebugSelectedRow < 3) {
          if (OcclGrid == (void *)0x0) {
            OcclUpdate = 0;
          }
          else {
            if (((CVar11 & CROSS) != 0) && (OcclUpdate = OcclUpdate + 1, 2 < OcclUpdate)) {
              OcclUpdate = 0;
            }
            if (((CVar11 & TRIANGLE) != 0) && (OcclUpdate = OcclUpdate + -1, OcclUpdate < 0)) {
              OcclUpdate = 2;
            }
          }
        }
        else if ((int)DebugSelectedRow < 4) {
          if ((CVar11 & (CROSS|TRIANGLE)) != 0) {
            Bookmark = (uint)LZCOUNT(Bookmark) >> 5;
          }
        }
        else if ((CVar11 & (CROSS|TRIANGLE)) != 0) {
          Invincibility = (uint)LZCOUNT(Invincibility) >> 5;
        }
      }
      else if (DebugSelectedRow == 10) {
        if ((CVar11 & (CROSS|TRIANGLE)) == 0) {
          if ((CVar11 & CIRCLE) != 0) {
            cVar10 = (char)((LZCOUNT(-(uint)(byte)g_LevelFlags[Level][Segment]) << 0x3a) >> 0x3f);
            g_LevelFlags[Level][Segment] = cVar10;
            (&DAT_00a202c0)[iVar19] = cVar10;
          }
        }
        else if ((CVar11 & CROSS) == 0) {
          Segment = Segment + -1;
          if (Segment < 0) {
            Segment = 0xf;
          }
        }
        else {
          Segment = Segment + 1;
          if (Segment == 0x10) {
            Segment = 0;
          }
        }
      }
      else if (DebugSelectedRow == 9) {
        if ((CVar11 & (CROSS|TRIANGLE)) != 0) {
          do {
            if ((CVar11 & CROSS) == 0) {
              Scene = Scene + -1;
              if (-2 < Scene) goto LAB_0006321c;
              Scene = 0x23;
            }
            else {
              Scene = Scene + 1;
              if (Scene == 0x24) {
                Scene = -1;
              }
LAB_0006321c:
              if (Scene < 0) break;
            }
            iVar19 = loaders::LoadNpcMobys(Level,Scene);
            CVar11 = g_buttonsPressedThisFrame;
          } while (iVar19 == 0);
        }
        g_debugLastGameMode = (Scene >> 0x1f & 0xfffffffeU) + GAME_MODE_SCENE;
      }
      else if (DebugSelectedRow == 8) {
        if ((CVar11 & (CROSS|TRIANGLE)) != 0) {
          bVar1 = ScreenMode == 0;
          ScreenMode = (uint)LZCOUNT(ScreenMode) >> 5;
          if (bVar1) {
            dVar32 = (double)fastfunc::FastIntToDouble(draw::g_FrameBufWidth);
            dVar31 = 0.125;
            ViewContext.xpix = (float)(dVar32 * 0.125);
            dVar32 = (double)fastfunc::FastIntToDouble(draw::g_FrameBufHeight);
            dVar32 = dVar32 * dVar31;
          }
          else {
            dVar32 = (double)fastfunc::FastIntToDouble(draw::g_FrameBufWidth);
            dVar31 = 0.5;
            ViewContext.xpix = (float)(dVar32 * 0.5);
            dVar32 = (double)fastfunc::FastIntToDouble(draw::g_FrameBufHeight);
            dVar32 = dVar32 * dVar31;
          }
          ViewContext.ypix = (float)dVar32;
          ViewContext.xclip = ViewContext.xpix * 4.0;
          ViewContext.yclip = ViewContext.ypix * 4.0;
          draw::UpdateViewContext();
        }
      }
      else if (DebugSelectedRow == 7) {
        if ((CVar11 & (CROSS|TRIANGLE)) != 0) {
          TvMode = (uint)LZCOUNT(TvMode) >> 5;
        }
      }
      else if (DebugSelectedRow == 6) {
        if (((CVar11 & CROSS) != 0) && (CollMode = CollMode + 1, 2 < CollMode)) {
          CollMode = 0;
        }
        if (((CVar11 & TRIANGLE) != 0) && (CollMode = CollMode + -1, CollMode < 0)) {
          CollMode = 2;
        }
      }
      else if ((DebugSelectedRow == 5) && ((CVar11 & (CROSS|TRIANGLE)) != 0)) {
        bVar1 = DrawDistMode == 0;
        DrawDistMode = (uint)LZCOUNT(DrawDistMode) >> 5;
        if (bVar1) {
          TfragDrawDist = 65536.0;
          DAT_00a390b8 = 0x40;
          TieDrawDist = 64.0;
          ShrubDrawDist = 40.0;
          PartClipDist = 0x40000;
        }
        else {
          TfragDrawDist = 512000.0;
          TieDrawDist = 720.0;
          ShrubDrawDist = 500.0;
          DAT_00a390b8 = 500;
          PartClipDist = 0x1f4000;
        }
      }
    }
    else if (((DebugSelectedCol == 0) && ((CVar11 & CROSS) != 0)) &&
            (DVar8 = 1 << (DebugSelectedRow & 0x3f), DebugUpdate = DebugUpdate ^ DVar8,
            DVar8 == ENABLE_STEPPING)) {
      DebugUpdate = (int)((LZCOUNT(-(DebugUpdate & ENABLE_STEPPING)) << 0x3a) >> 0x3f) +
                    ENABLE_STEPPING;
    }
  }
  else {
    g_gameMode = g_debugLastGameMode;
    stub::STUB_000780f4(ViewContext.occlColor0,ViewContext.occlColor1,ViewContext.occlColor2);
    auVar33 = ZEXT416(2);
    auVar33 = auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60;
    auVar34 = loadVectorLeftIndexed(0x144,0x9513c0);
    auVar35 = loadVectorLeftIndexed(0x140,0x9513c0);
    auVar36 = loadVectorLeftIndexed(0x148,0x9513c0);
    auVar35 = vectorConvertToSignedFixedPointWordSaturate(auVar35,0);
    auVar34 = vectorConvertToSignedFixedPointWordSaturate(auVar34,0);
    auVar37 = vectorConvertToSignedFixedPointWordSaturate(auVar36,0);
    auVar36 = vectorShiftRightAlgebraicWord(auVar35,auVar33);
    auVar34 = vectorShiftRightAlgebraicWord(auVar34,auVar33);
    auVar35 = vectorShiftRightAlgebraicWord(auVar37,auVar33);
    auVar33 = auVar36 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar34 = auVar34 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar35 = auVar35 >> 0x60 & (undefined1  [16])0xffffffff;
    DAT_0095c654 = storeVectorElementWordIndexed
                             (auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60,0x94,
                              0x95c5c0);
    DAT_0095c658 = storeVectorElementWordIndexed
                             (auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60,0x98,
                              0x95c5c0);
    DAT_0095c65c = storeVectorElementWordIndexed
                             (auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,0x9c,
                              0x95c5c0);
    AddStart = 0x6e;
    AddSample = 0x6e;
  }
  return;
}



//==== 00063e68  ns=debug  size=0x15d0
// sig: undefined DrawDebugMenu(void)
// callers(1): 000e0e60 main::startLevel
// callees(5): 00060ac0 debug::DebugFontPrintLeft; 00060c44 debug::ResetDebugFontStrings; 00060c64 debug::DebugFontPrintCenter; 00078100 stub::STUB_00078100; 005cd2a8 libc::snprintf
// strings: 00651cdc: 'I-5' | 00651ce4: '-------------' | 00651cf4: 'UPDATE' | 00651cfc: '------' | 00651d04: 'Ratchett' | 00651d14: 'Mobys' | 00651d1c: 'Parts' | 00651d24: 'Camera' | 00651d2c: 'Step' | 00651d34: ',' | 00651d3c: 'MODE' | 00651d44: '----' | 00651d4c: 'Control' | 00651d54: 'Profile' | 00651d5c: 'Occl' | 00651d64: 'Bookmark' | 00651d74: 'Invinc' | 00651d7c: 'Drawdist' | 00651d8c: 'Coll' | 00651d94: 'Tv Mode' | 00651d9c: 'Screen' | 00651da4: 'Scene' | 00651dac: '%d' | 00651db4: 'none' | 00651dbc: 'Segment' | 00651dc4: '%d = %d' | 00651dcc: 'DRAW' | 00651dd4: 'Darken' | 00651ddc: 'Env Coll' | 00651dec: 'Moby Coll'

void debug::DrawDebugMenu(void)

{
  double dVar1;
  double dVar2;
  double dVar3;
  char local_a0 [8];
  char acStack_98 [16];
  char acStack_88 [16];
  char acStack_78 [16];
  char acStack_68 [24];
  
  stub::STUB_00078100();
  if (g_CutscenePlaying == 0) {
    DebugFontPrintCenter(0x100,0x10,-0x7f3f4000,"I-5");
    DebugFontPrintCenter(0x100,0x18,-0x7f3f4000,"-------------");
    DebugFontPrintLeft(0xc,0x2c,0x8000c000,"UPDATE");
    DebugFontPrintLeft(0xc,0x32,0x8000c000,"------");
    DebugFontPrintLeft(0x14,0x40,0x8000c0c0,"Ratchett");
    DebugFontPrintLeft(0x6c,0x40,0x80f0f0f0,
                       *(char **)((int)&PTR_s_off_00737b08 +
                                 (-(DebugUpdate & UPDATE_HERO) >> 0x1d & 4)));
    DebugFontPrintLeft(0x14,0x4f,0x8000c0c0,"Mobys");
    DebugFontPrintLeft(0x6c,0x4f,0x80f0f0f0,
                       *(char **)((int)&PTR_s_off_00737b08 +
                                 (-(DebugUpdate & UPDATE_MOBYS) >> 0x1d & 4)));
    DebugFontPrintLeft(0x14,0x5e,0x8000c0c0,"Parts");
    DebugFontPrintLeft(0x6c,0x5e,0x80f0f0f0,
                       *(char **)((int)&PTR_s_off_00737b08 +
                                 (-(DebugUpdate & UPDATE_PARTICLES) >> 0x1d & 4)));
    DebugFontPrintLeft(0x14,0x6d,0x8000c0c0,"Camera");
    DebugFontPrintLeft(0x6c,0x6d,0x80f0f0f0,
                       *(char **)((int)&PTR_s_off_00737b08 +
                                 (-(DebugUpdate & UPDATE_CAMERA) >> 0x1d & 4)));
    DebugFontPrintLeft(0x14,0x7c,0x8000c0c0,"Step");
    DebugFontPrintLeft(0x6c,0x7c,0x80f0f0f0,
                       *(char **)((int)&PTR_s_off_00737b08 +
                                 (-(DebugUpdate & ENABLE_STEPPING) >> 0x1d & 4)));
    if (DebugSelectedCol == 0) {
      DebugFontPrintLeft(9,DebugSelectedRow * 0xf + 0x40,0x800000c0,",");
    }
    DebugFontPrintLeft(0xa8,0x2c,0x8000c000,"MODE");
    DebugFontPrintLeft(0xa8,0x32,0x8000c000,"----");
    DebugFontPrintLeft(0xb0,0x40,0x8000c0c0,"Control");
    DebugFontPrintLeft(0x108,0x40,0x80f0f0f0,(&PTR_s_normal_00737b10)[ControlMode]);
    DebugFontPrintLeft(0xb0,0x4f,0x8000c0c0,"Profile");
    DebugFontPrintLeft(0x108,0x4f,0x80f0f0f0,(&PTR_s_off_00737b20)[Profile]);
    DebugFontPrintLeft(0xb0,0x5e,0x8000c0c0,"Occl");
    DebugFontPrintLeft(0x108,0x5e,0x80f0f0f0,(&PTR_s_off_00737b70)[OcclUpdate]);
    DebugFontPrintLeft(0xb0,0x6d,0x8000c0c0,"Bookmark");
    DebugFontPrintLeft(0x108,0x6d,0x80f0f0f0,
                       *(char **)((int)&PTR_s_off_00737b08 + ((uint)LZCOUNT(Bookmark) >> 3 & 4)));
    DebugFontPrintLeft(0xb0,0x7c,0x8000c0c0,"Invinc");
    DebugFontPrintLeft(0x108,0x7c,0x80f0f0f0,(&PTR_s_off_00737b08)[Invincibility]);
    DebugFontPrintLeft(0xb0,0x8b,0x8000c0c0,"Drawdist");
    DebugFontPrintLeft(0x108,0x8b,0x80f0f0f0,(&PTR_s_normal_00737b4c)[DrawDistMode]);
    DebugFontPrintLeft(0xb0,0x9a,0x8000c0c0,"Coll");
    DebugFontPrintLeft(0x108,0x9a,0x80f0f0f0,(&PTR_s_hotspt_00737b54)[CollMode]);
    DebugFontPrintLeft(0xb0,0xa9,0x8000c0c0,"Tv Mode");
    DebugFontPrintLeft(0x108,0xa9,0x80f0f0f0,(&PTR_DAT_00737b60)[TvMode]);
    DebugFontPrintLeft(0xb0,0xb8,0x8000c0c0,"Screen");
    DebugFontPrintLeft(0x108,0xb8,0x80f0f0f0,(&PTR_s_normal_00737b68)[ScreenMode]);
    DebugFontPrintLeft(0xb0,199,0x8000c0c0,"Scene");
    if (Scene < 0) {
      DebugFontPrintLeft(0x108,199,0x80f0f0f0,"none");
    }
    else {
      libc::snprintf(acStack_78,"%d",Scene);
      DebugFontPrintLeft(0x108,199,0x80f0f0f0,acStack_78);
    }
    DebugFontPrintLeft(0xb0,0xd6,0x8000c0c0,"Segment");
    libc::snprintf(acStack_68,"%d = %d",Segment,(ulonglong)(byte)g_LevelFlags[Level][Segment]);
    DebugFontPrintLeft(0x108,0xd6,0x80f0f0f0,acStack_68);
    if (DebugSelectedCol == 1) {
      DebugFontPrintLeft(0xa5,DebugSelectedRow * 0xf + 0x40,0x800000c0,",");
    }
    DebugFontPrintLeft(0x158,0x2c,0x8000c000,"DRAW");
    DebugFontPrintLeft(0x158,0x32,0x8000c000,"----");
    DebugFontPrintLeft(0x160,0x40,0x8000c0c0,"Darken");
    DebugFontPrintLeft(0x1cc,0x40,0x80f0f0f0,
                       *(char **)((int)&PTR_s_off_00737b08 + (-(DrawMode & Darken) >> 0x1d & 4)));
    DebugFontPrintLeft(0x160,0x4f,0x8000c0c0,"Env Coll");
    DebugFontPrintLeft(0x1cc,0x4f,0x80f0f0f0,
                       *(char **)((int)&PTR_s_off_00737b08 + (-(DrawMode & EnvColl) >> 0x1d & 4)));
    DebugFontPrintLeft(0x160,0x5e,0x8000c0c0,"Moby Coll");
    DebugFontPrintLeft(0x1cc,0x5e,0x80f0f0f0,
                       *(char **)((int)&PTR_s_off_00737b08 + (-(DrawMode & MobyColl) >> 0x1d & 4)));
    DebugFontPrintLeft(0x160,0x6d,0x8000c0c0,"Hero Coll");
    DebugFontPrintLeft(0x1cc,0x6d,0x80f0f0f0,
                       *(char **)((int)&PTR_s_off_00737b08 + (-(DrawMode & HeroColl) >> 0x1d & 4)));
    DebugFontPrintLeft(0x160,0x7c,0x8000c0c0,"Bspheres");
    DebugFontPrintLeft(0x1cc,0x7c,0x80f0f0f0,
                       *(char **)((int)&PTR_s_off_00737b08 + (-(DrawMode & Bspheres) >> 0x1d & 4)));
    DebugFontPrintLeft(0x160,0x8b,0x8000c0c0,"Cameras");
    DebugFontPrintLeft(0x1cc,0x8b,0x80f0f0f0,
                       *(char **)((int)&PTR_s_off_00737b08 + (-(DrawMode & Cameras) >> 0x1d & 4)));
    DebugFontPrintLeft(0x160,0x9a,0x8000c0c0,"Cuboids");
    DebugFontPrintLeft(0x1cc,0x9a,0x80f0f0f0,
                       *(char **)((int)&PTR_s_off_00737b08 + (-(DrawMode & Cuboids) >> 0x1d & 4)));
    DebugFontPrintLeft(0x160,0xa9,0x8000c0c0,"Samples");
    DebugFontPrintLeft(0x1cc,0xa9,0x80f0f0f0,
                       *(char **)((int)&PTR_s_off_00737b08 + (-(DrawMode & Samples) >> 0x1d & 4)));
    DebugFontPrintLeft(0x160,0xb8,0x8000c0c0,"Text");
    DebugFontPrintLeft(0x1cc,0xb8,0x80f0f0f0,
                       *(char **)((int)&PTR_s_off_00737b08 + (-(DrawMode & Text) >> 0x1d & 4)));
    if (DebugSelectedCol == 2) {
      DebugFontPrintLeft(0x155,DebugSelectedRow * 0xf + 0x3e,0x800000c0,",");
    }
    DebugFontPrintLeft(0xc,0xa6,0x8000c000,"AMMO");
    DebugFontPrintLeft(0xc,0xac,0x8000c000,"----");
    if (DebugSelectedCol == 3) {
      DebugFontPrintLeft(9,DebugSelectedRow * 0xf + 0xb8,0x800000c0,",");
    }
    DebugFontPrintLeft(0x14,0xba,0x8000c0c0,"SuckCannon");
    libc::snprintf(acStack_98,"%d",(ulonglong)g_goldWeaponsArray.suckCannon);
    DebugFontPrintLeft(0x7a,0xba,0x80406080,acStack_98);
    DebugFontPrintLeft(0x14,0xc9,0x8000c0c0,"Morpha-Ray");
    libc::snprintf(acStack_98,"%d",(ulonglong)g_goldWeaponsArray.morphORay);
    DebugFontPrintLeft(0x7a,0xc9,0x80406080,acStack_98);
    DebugFontPrintLeft(0x14,0xd8,0x8000c0c0,"Inflato R");
    libc::snprintf(acStack_98,"%d",(ulonglong)g_goldWeaponsArray.decoyGlove);
    DebugFontPrintLeft(0x7a,0xd8,0x80406080,acStack_98);
    DebugFontPrintLeft(0x14,0xe7,0x8000c0c0,"R.Y.N.O.");
    libc::snprintf(acStack_98,"%d",currentAmmoArray.ryno);
    DebugFontPrintLeft(0x8c,0xe7,0x80f0f0f0,acStack_98);
    DebugFontPrintLeft(0x14,0xf6,0x8000c0c0,"D. Droids");
    libc::snprintf(acStack_98,"%d",currentAmmoArray.droneDevice);
    DebugFontPrintLeft(0x8c,0xf6,0x80f0f0f0,acStack_98);
    DebugFontPrintLeft(0x14,0x105,0x8000c0c0,"Bomb");
    libc::snprintf(acStack_98,"%d",currentAmmoArray.bombGlove);
    DebugFontPrintLeft(0x8c,0x105,0x80f0f0f0,acStack_98);
    libc::snprintf(acStack_98,"%d",(ulonglong)g_goldWeaponsArray.bombGlove);
    DebugFontPrintLeft(0x7a,0x105,0x80406080,acStack_98);
    DebugFontPrintLeft(0x14,0x114,0x8000c0c0,"Devastator");
    libc::snprintf(acStack_98,"%d",currentAmmoArray.devastator);
    DebugFontPrintLeft(0x8c,0x114,0x80f0f0f0,acStack_98);
    libc::snprintf(acStack_98,"%d",(ulonglong)g_goldWeaponsArray.devastator);
    DebugFontPrintLeft(0x7a,0x114,0x80406080,acStack_98);
    DebugFontPrintLeft(0x14,0x123,0x8000c0c0,"Visibomb");
    libc::snprintf(acStack_98,"%d",currentAmmoArray.visibombGun);
    DebugFontPrintLeft(0x8c,0x123,0x80f0f0f0,acStack_98);
    DebugFontPrintLeft(0x14,0x132,0x8000c0c0,"Agents");
    libc::snprintf(acStack_98,"%d",currentAmmoArray.gloveOfDoom);
    DebugFontPrintLeft(0x8c,0x132,0x80f0f0f0,acStack_98);
    libc::snprintf(acStack_98,"%d",(ulonglong)g_goldWeaponsArray.gloveOfDoom);
    DebugFontPrintLeft(0x7a,0x132,0x80406080,acStack_98);
    DebugFontPrintLeft(0x14,0x141,0x8000c0c0,"Pyrocitor");
    libc::snprintf(acStack_98,"%d",currentAmmoArray.pyrocitor);
    DebugFontPrintLeft(0x8c,0x141,0x80f0f0f0,acStack_98);
    libc::snprintf(acStack_98,"%d",(ulonglong)g_goldWeaponsArray.pyrocitor);
    DebugFontPrintLeft(0x7a,0x141,0x80406080,acStack_98);
    DebugFontPrintLeft(0x14,0x150,0x8000c0c0,"Tesla Claw");
    libc::snprintf(acStack_98,"%d",currentAmmoArray.teslaClaw);
    DebugFontPrintLeft(0x8c,0x150,0x80f0f0f0,acStack_98);
    libc::snprintf(acStack_98,"%d",(ulonglong)g_goldWeaponsArray.teslaClaw);
    DebugFontPrintLeft(0x7a,0x150,0x80406080,acStack_98);
    DebugFontPrintLeft(0x14,0x15f,0x8000c0c0,"Mine Glove");
    libc::snprintf(acStack_98,"%d",currentAmmoArray.mineGlove);
    DebugFontPrintLeft(0x8c,0x15f,0x80f0f0f0,acStack_98);
    libc::snprintf(acStack_98,"%d",(ulonglong)g_goldWeaponsArray.mineGlove);
    DebugFontPrintLeft(0x7a,0x15f,0x80406080,acStack_98);
    DebugFontPrintLeft(0x14,0x16e,0x8000c0c0,"Blaster");
    libc::snprintf(acStack_98,"%d",currentAmmoArray.blaster);
    DebugFontPrintLeft(0x8c,0x16e,0x80f0f0f0,acStack_98);
    libc::snprintf(acStack_98,"%d",(ulonglong)g_goldWeaponsArray.blaster);
    DebugFontPrintLeft(0x7a,0x16e,0x80406080,acStack_98);
    DebugFontPrintLeft(0x14,0x17d,0x8000c0c0,"Bolts");
    libc::snprintf(acStack_98,"%d",g_boltCount);
    DebugFontPrintLeft(0x8c,0x17d,0x80f0f0f0,acStack_98);
    DebugFontPrintLeft(0xbc,0x100,0x8000c000,"FOG");
    DebugFontPrintLeft(0xbc,0x106,0x8000c000,"---");
    if (DebugSelectedCol == 4) {
      DebugFontPrintLeft(0xb9,DebugSelectedRow * 0xf + 0x112,0x800000c0,",");
    }
    DebugFontPrintLeft(0xc4,0x114,0x8000c0c0,"NearDst");
    dVar3 = 0.0009765625;
    libc::snprintf(acStack_88,"%.02f",(double)(LevelFogNearDist * 0.0009765625));
    DebugFontPrintLeft(0x11c,0x114,0x80f0f0f0,acStack_88);
    DebugFontPrintLeft(0xc4,0x123,0x8000c0c0,"NearInt");
    dVar2 = 0.3921568691730499;
    dVar1 = 100.0;
    libc::snprintf(acStack_88,"%.02f",-(double)(LevelFogNearIntensity * 0.39215687 - 100.0));
    DebugFontPrintLeft(0x11c,0x123,0x80f0f0f0,acStack_88);
    DebugFontPrintLeft(0xc4,0x132,0x8000c0c0,"FarDst");
    libc::snprintf(acStack_88,"%.02f",(double)(float)((double)LevelFogFarDist * dVar3));
    DebugFontPrintLeft(0x11c,0x132,0x80f0f0f0,acStack_88);
    DebugFontPrintLeft(0xc4,0x141,0x8000c0c0,"FarInt");
    libc::snprintf(acStack_88,"%.02f",-(double)(float)((double)LevelFogFarIntensity * dVar2 - dVar1)
                  );
    DebugFontPrintLeft(0x11c,0x141,0x80f0f0f0,acStack_88);
    DebugFontPrintLeft(0xc4,0x150,0x8000c0c0,"Color_R");
    libc::snprintf(acStack_88,"%d",(ulonglong)levelFog.r);
    DebugFontPrintLeft(0x11c,0x150,0x80f0f0f0,acStack_88);
    DebugFontPrintLeft(0xc4,0x15f,0x8000c0c0,"Color_G");
    libc::snprintf(acStack_88,"%d",(ulonglong)levelFog.g);
    DebugFontPrintLeft(0x11c,0x15f,0x80f0f0f0,acStack_88);
    DebugFontPrintLeft(0xc4,0x16e,0x8000c0c0,"Color_B");
    libc::snprintf(acStack_88,"%d",(ulonglong)levelFog.b);
    DebugFontPrintLeft(0x11c,0x16e,0x80f0f0f0,acStack_88);
    DebugFontPrintLeft(0x160,0x100,0x8000c000,"MISC");
    DebugFontPrintLeft(0x160,0x106,0x8000c000,"----");
    if (DebugSelectedCol == 5) {
      DebugFontPrintLeft(0x15d,DebugSelectedRow * 0xf + 0x112,0x800000c0,",");
    }
    DebugFontPrintLeft(0x168,0x114,0x8000c0c0,"BattleCam");
    DebugFontPrintLeft(0x1ca,0x114,0x80f0f0f0,
                       *(char **)((int)&PTR_s_off_00737b08 + ((uint)LZCOUNT(BattleCam) >> 3 & 4)));
    DebugFontPrintLeft(0x168,0x123,0x8000c0c0,"Actuator");
    DebugFontPrintLeft(0x1ca,0x123,0x80f0f0f0,(&PTR_s_off_00737b08)[Actuator]);
    DebugFontPrintLeft(0x168,0x132,0x8000c0c0,"AddSample");
    local_a0[0] = AddSample;
    local_a0[1] = 0;
    DebugFontPrintLeft(0x1ca,0x132,0x80f0f0f0,local_a0);
    DebugFontPrintLeft(0x168,0x141,0x8000c0c0,"AddStart");
    local_a0[1] = 0;
    local_a0[0] = AddStart;
    DebugFontPrintLeft(0x1ca,0x141,0x80f0f0f0,local_a0);
    ResetDebugFontStrings();
    do {
    } while ((DAT_00e5aa70 & 1) != 0);
  }
  return;
}



//==== 00065438  ns=stub  size=0x4
// sig: undefined STUB_00065438(void)
// callers(1): 00166fb0 update::UpdateGameplay
// callees(0): 

void stub::STUB_00065438(void)

{
  return;
}



//==== 0006543c  ns=stub  size=0x4
// sig: undefined STUB_0006543c(void)
// callers(0): 
// callees(0): 

void stub::STUB_0006543c(void)

{
  return;
}



//==== 00065440  ns=stub  size=0x4
// sig: undefined STUB_00065440(void)
// callers(1): 00166fb0 update::UpdateGameplay
// callees(0): 

void stub::STUB_00065440(void)

{
  return;
}



//==== 00065444  ns=stub  size=0x4
// sig: undefined STUB_00065444(void)
// callers(0): 
// callees(0): 

void stub::STUB_00065444(void)

{
  return;
}



//==== 00065448  ns=stub  size=0x4
// sig: undefined STUB_00065448(void)
// callers(1): 00166fb0 update::UpdateGameplay
// callees(0): 

void stub::STUB_00065448(void)

{
  return;
}



//==== 0006544c  ns=stub  size=0x4
// sig: undefined STUB_0006544c(void)
// callers(0): 
// callees(0): 

void stub::STUB_0006544c(void)

{
  return;
}



//==== 00065450  ns=stub  size=0x4
// sig: undefined STUB_00065450(void)
// callers(1): 00166fb0 update::UpdateGameplay
// callees(0): 

void stub::STUB_00065450(void)

{
  return;
}



//==== 00065454  ns=stub  size=0x4
// sig: undefined STUB_00065454(void)
// callers(0): 
// callees(0): 

void stub::STUB_00065454(void)

{
  return;
}



//==== 00065458  ns=stub  size=0x4
// sig: undefined STUB_00065458(void)
// callers(1): 00166fb0 update::UpdateGameplay
// callees(0): 

void stub::STUB_00065458(void)

{
  return;
}



//==== 0006545c  ns=stub  size=0x4
// sig: undefined STUB_0006545c(void)
// callers(0): 
// callees(0): 

void stub::STUB_0006545c(void)

{
  return;
}



//==== 00065460  ns=stub  size=0x4
// sig: undefined STUB_00065460(void)
// callers(0): 
// callees(0): 

void stub::STUB_00065460(void)

{
  return;
}



//==== 00065464  ns=stub  size=0x4
// sig: undefined STUB_00065464(void)
// callers(4): 000954c8 hero::HeroUpdate; 000fc024 mobyfunc::UpdateMobysInitial; 000fc168 mobyfunc::UpdateMobys; 000fc238 mobyfunc::UpdateMobysDebug
// callees(0): 

void stub::STUB_00065464(void)

{
  return;
}



//==== 00065468  ns=stub  size=0x4
// sig: undefined STUB_00065468(void)
// callers(13): 00040440 camera::camera19::UpdateCamera_19; 00136390 path::DrawPathDebug; 00139cf8 path::PosRing_DebugDraw; 0013a80c path::PathFollower_DebugDrawTangents; 00184c30 mobyupdate_unsorted::UpdateMoby_1009; 0019aea0 mobyupdate_unsorted::UpdateMoby_1045; 001aa078 mobyupdate_unsorted::UpdateMoby_1059; 002082e8 mobyupdate_helpers::M1215_002082e8; 0032f988 mobyupdate_unsorted::UpdateMoby_291; 003a14a8 mobyupdate_unsorted::UpdateMoby_491; 003d2c48 mobyupdate_unsorted::UpdateMoby_585; 0048c188 FUN_0048c188; 004bcd20 mobyupdate_unsorted::UpdateMoby_931
// callees(0): 

void stub::STUB_00065468(void)

{
  return;
}



//==== 0006546c  ns=stub  size=0x4
// sig: undefined STUB_0006546c(void)
// callers(0): 
// callees(0): 

void stub::STUB_0006546c(void)

{
  return;
}



//==== 00065470  ns=stub  size=0x4
// sig: undefined STUB_00065470(void)
// callers(3): 00034a3c camera0::Cam0_DrawCollSpheres; 00040440 camera::camera19::UpdateCamera_19; 00462258 mobyupdate_unsorted::UpdateMoby_8
// callees(0): 

void stub::STUB_00065470(void)

{
  return;
}



//==== 00065474  ns=stub  size=0x4
// sig: undefined STUB_00065474(void)
// callers(0): 
// callees(0): 

void stub::STUB_00065474(void)

{
  return;
}



//==== 00065490  ns=draw  size=0x178
// sig: undefined ScreenPosFromWorldSpace(void)
// callers(20): 00054a10 camera::Camera_DrawReticule; 00055378 camera::TargetCrosshairDraw; 001172b0 mobyutil::MB_WorldToScreenCell; 001e4b28 mobyupd::update1160::M1160_WorldToScreen; 001e5158 mobyupd::update1160::M1160_ScanTargets; 001e6130 mobyupd::update1160::M1160_Hud_Draw; 001e6ba8 mobyupd::update1160::M1160_UpdateGunsAndAimPos; 0021d558 mobyupd::update1242::M1242_0021d558; 0021e0d0 mobyupd::update1242::M1242_0021e0d0; 0021e750 mobyupd::update1242::M1242_Hud_Draw; 0021f2b0 mobyupd::update1242::M1242_0021f2b0; 0025f028 mobyupd::update1379::M1379_WorldToScreen; 0025fbd0 mobyupd::update1379::M1379_ScanTargets; 002611a0 mobyupd::update1379::M1379_Hud_Draw; 002619e0 mobyupd::update1379::M1379_UpdateGunsMissiles; 002d1540 mobyupdate_helpers::M1898_002d1540; 00418fc0 mobyupdate_helpers::M688_00418fc0; 00419b20 mobyupdate_helpers::M688_00419b20; 0041b008 mobyupdate_helpers::M688_0041b008; 0041b7c0 mobyupdate_helpers::M688_0041b7c0
// callees(2): 00500af8 fastfunc::FastMtx4Identity; 0050162c fastfunc::FastVecMtx4Mul

void draw::ScreenPosFromWorldSpace(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float afStack_a0 [16];
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  
  fastfunc::FastMtx4Identity(afStack_a0);
  fastfunc::FastVecMtx4Mul(&local_60,0x951400,afStack_a0);
  fVar1 = param_2[1] * 1024.0;
  fVar2 = *param_2 * 1024.0;
  fVar3 = param_2[2] * 1024.0;
  fVar4 = ViewContext.perspScale /
          (local_34 * fVar3 + local_54 * fVar2 + local_44 * fVar1 + local_24);
  *param_1 = ((local_40 * fVar3 + local_60 * fVar2 + local_50 * fVar1 + local_30) * fVar4 + 2048.0)
             * 16.0;
  param_1[1] = ((local_3c * fVar3 + local_5c * fVar2 + local_4c * fVar1 + local_2c) * fVar4 + 2048.0
               ) * 16.0;
  param_1[2] = (local_38 * fVar3 + local_58 * fVar2 + local_48 * fVar1 + local_28) * 0.0009765625;
  return;
}



//==== 00065608  ns=debug  size=0x20
// sig: undefined Debug_ResetLevelCounters(void)
// callers(1): 000e0e60 main::startLevel
// callees(0): 

void debug::Debug_ResetLevelCounters(void)

{
  DAT_0095a3b0 = 0;
  DAT_0095a568 = DAT_0095a564;
  DAT_0095a564 = 0;
  return;
}



//==== 00065628  ns=stub  size=0x4
// sig: undefined STUB_00065628(void)
// callers(1): 000e0e60 main::startLevel
// callees(0): 

void stub::STUB_00065628(void)

{
  return;
}



//==== 0006562c  ns=stub  size=0x4
// sig: undefined STUB_0006562c(void)
// callers(8): 000e0e60 main::startLevel; 000f171c mobyfunc::DrawMobyShadows; 000f1974 mobyfunc::DrawMobyList; 000f1a78 mobyfunc::DrawMobys; 00166b70 draw::DrawTies; 00166fb0 update::UpdateGameplay; 00168768 update::UpdateScene; 0016da88 vendor::Vendor_PreUpdate
// callees(0): 

void stub::STUB_0006562c(void)

{
  return;
}



//==== 00065630  ns=stub  size=0x4
// sig: undefined STUB_00065630(void)
// callers(5): 0006bb78 draw::DefaultDraw; 000e0e60 main::startLevel; 000f1974 mobyfunc::DrawMobyList; 000f1a78 mobyfunc::DrawMobys; 00166b70 draw::DrawTies
// callees(0): 

void stub::STUB_00065630(void)

{
  return;
}



//==== 00065634  ns=stub  size=0x8
// sig: undefined STUB_00065634_RET_NEG1(void)
// callers(0): 
// callees(0): 

undefined8 stub::STUB_00065634_RET_NEG1(void)

{
  return 0xffffffffffffffff;
}



//==== 0006563c  ns=stub  size=0x8
// sig: undefined STUB_0006563c_RET_NEG1(void)
// callers(0): 
// callees(0): 

undefined8 stub::STUB_0006563c_RET_NEG1(void)

{
  return 0xffffffffffffffff;
}



//==== 00065644  ns=stub  size=0x18
// sig: undefined STUB_00065644(void)
// callers(0): 
// callees(0): 

void stub::STUB_00065644(void)

{
  return;
}



//==== 0006565c  ns=Global  size=0x14
// sig: undefined SECTION_HEADER_DRAW(void)
// callers(0): 
// callees(0): 

void SECTION_HEADER_DRAW(void)

{
  DAT_0071eeac = 0x10000;
  return;
}



//==== 00065670  ns=draw  size=0x48
// sig: undefined ResetFrameBufferInfo(void)
// callers(3): 00012048 boot::PrepareFrontbin; 00012ec8 boot::GameStart; 000d8be8 initonce::InitOnce
// callees(2): 00078098 draw::SetFrameBufferInfo; 00503244 stub::FlushCache

void draw::ResetFrameBufferInfo(void)

{
  stub::FlushCache(0);
  SetFrameBufferInfo(0x200,0x1a0,0x200,0x1c0,0,0);
  return;
}



//==== 000656b8  ns=draw  size=0x104
// sig: undefined ResetFrameBufferForCutscene(void)
// callers(0): 
// callees(9): 00078098 draw::SetFrameBufferInfo; 000e9138 stub::STUB_000e9138; 00174c24 vuchain::VU1_initChain; 001754dc stub::STUB_001754dc; 001754e0 stub::STUB_001754e0; 00503070 stub::STUB_00503070; 0050307c stub::STUB_0050307c; 00503080 stub::STUB_00503080; 00503244 stub::FlushCache

void draw::ResetFrameBufferForCutscene(void)

{
  undefined4 uVar1;
  
  g_CutscenePlaying = 1;
  DAT_00e5aa70 = 0;
  stub::STUB_001754e0();
  stub::STUB_00503070(1);
  stub::STUB_000e9138();
  stub::STUB_0050307c(0,0xb,((LZCOUNT(-Cutscene) << 0x3a) >> 0x3f) + 0xd,9);
  stub::STUB_00503080();
  vuchain::VU1_initChain();
  uVar1 = DAT_00966ad4;
  DAT_00e5aa58 = 0;
  stub::FlushCache(0);
  SetFrameBufferInfo(0x200,0x1a0,0x200,0x1c0,0,0);
  DAT_00966ad4 = uVar1;
  vuchain::VU1_initChain();
  stub::STUB_001754dc();
  return;
}



//==== 000657c8  ns=draw  size=0x1b0
// sig: int CheckBSphere(float * bsphere)
// callers(0): 
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int draw::CheckBSphere(float *bsphere)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double in_f9;
  
  dVar7 = (double)bsphere[3];
  fVar2 = -(GameCamera.posY * 1024.0 - bsphere[1]);
  fVar3 = -(GameCamera.posX * 1024.0 - *bsphere);
  fVar4 = -(GameCamera.posZ * 1024.0 - bsphere[2]);
  fVar1 = (float)(dVar7 - in_f9);
  fVar6 = GameCamera.mtx0.v2.x * fVar4 + GameCamera.mtx0.v0.x * fVar3 + GameCamera.mtx0.v1.x * fVar2
  ;
  fVar5 = GameCamera.mtx0.v2.y * fVar4 + GameCamera.mtx0.v0.y * fVar3 + GameCamera.mtx0.v1.y * fVar2
  ;
  dVar8 = (double)(GameCamera.mtx0.v3.z * fVar1 +
                  GameCamera.mtx0.v2.z * fVar4 +
                  GameCamera.mtx0.v0.z * fVar3 + GameCamera.mtx0.v1.z * fVar2);
  dVar9 = (double)(GameCamera.mtx0.v3.x * fVar1 + fVar6);
  dVar10 = (double)(GameCamera.mtx0.v3.y * fVar1 + fVar5);
  if (ViewContext.nearClip <= (float)(dVar8 + dVar7)) {
    if ((float)(dVar8 - dVar7) <= ViewContext.farClip) {
      if (dVar9 - 0.0 < 0.0) {
        dVar9 = -(double)(GameCamera.mtx0.v3.x * fVar1 + fVar6);
      }
      if (dVar10 - 0.0 < 0.0) {
        dVar10 = -(double)(GameCamera.mtx0.v3.y * fVar1 + fVar5);
      }
      if ((float)(dVar8 * (double)ViewContext.xratio) <
          -(float)(dVar7 * (double)ViewContext.xradpad - dVar9)) {
        return -1;
      }
      if ((float)(dVar8 * (double)ViewContext.yratio) <
          -(float)(dVar7 * (double)ViewContext.yradpad - dVar10)) {
        return -1;
      }
      if ((float)(dVar8 - dVar7) <= ViewContext.nearClip) {
        return 0;
      }
      if (ViewContext.farClip <= (float)(dVar8 + dVar7)) {
        return 0;
      }
      if ((float)(dVar8 * (double)ViewContext.xratio) * 3.0 <=
          (float)(dVar7 * (double)ViewContext.xradpad + dVar9)) {
        return 0;
      }
      if ((float)(dVar8 * (double)ViewContext.yratio) * 3.0 <=
          (float)(dVar7 * (double)ViewContext.yradpad + dVar10)) {
        return 0;
      }
      return 1;
    }
  }
  return -1;
}



//==== 00065a00  ns=draw  size=0x684
// sig: undefined UploadViewMatricesToPasses(void)
// callers(2): 00066088 draw::ComposeCameraMatrix; 00071180 draw::SetScreenResolution
// callees(0): 

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void draw::UploadViewMatricesToPasses(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  code *pcVar5;
  RenderingStep *pRVar6;
  undefined4 uVar7;
  ulonglong *puVar8;
  float fVar9;
  int iVar10;
  int *piVar11;
  float fVar12;
  longlong lVar13;
  undefined4 *puVar14;
  int iVar15;
  int *piVar16;
  longlong lVar17;
  longlong lVar18;
  RsxCmd *pRVar20;
  ulonglong uVar19;
  ulonglong uVar21;
  longlong lVar22;
  float *pfVar23;
  longlong lVar24;
  ulonglong uVar25;
  RsxCmd *pRVar27;
  ulonglong uVar26;
  RenderingStep **ppRVar28;
  int *piVar29;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined4 in_vr31_32_0;
  undefined4 in_vr31_32_1;
  undefined4 in_vr31_32_2;
  undefined4 in_vr31_32_3;
  undefined1 auVar50 [16];
  
  uVar19 = ZEXT48(&stack0x00000000);
  lVar18 = uVar19 - 0x240;
  puVar8 = (ulonglong *)lVar18;
  *puVar8 = uVar19;
  puVar8[0x4a] = in_LR;
  lVar13 = uVar19 - 0x30;
  puVar14 = (undefined4 *)lVar13;
  puVar14[3] = in_vr31_32_3;
  puVar14[2] = in_vr31_32_2;
  puVar14[1] = in_vr31_32_1;
  *puVar14 = in_vr31_32_0;
  puVar8[0x47] = unaff_r31;
  fVar4 = ViewContext.yratio;
  *(undefined4 *)(puVar8 + 0x3c) = 0x3f800000;
  piVar11 = g_viewMtxPtr;
  fVar2 = ABS(fVar4);
  *(float *)((int)puVar8 + 0x1e4) = 1.0 - fVar2;
  fVar12 = FLOAT_0095d1c8;
  fVar9 = 0.0;
  puVar14 = *(undefined4 **)(*piVar11 + 0x20);
  uVar21 = (ulonglong)(*(uint *)((int)puVar8 + 0x1e4) >> 0x1e) & 2 |
           (ulonglong)((uint)fVar4 >> 0x1d) & 4;
  fVar4 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar21 << 2));
  fVar3 = ABS(*(float *)(puVar8 + 0x3c));
  if (*(float *)((int)puVar8 + 0x1e4) - 0.0 < 0.0) {
    fVar3 = fVar2;
  }
  fVar1 = *(float *)(((uint)(uVar21 << 2) | 0x735900) + 4);
  if (*(float *)((int)puVar8 + 0x1e4) - 0.0 < 0.0) {
    fVar2 = 1.0;
  }
  puVar8[0x46] = unaff_r30;
  puVar8[0x45] = unaff_r29;
  puVar8[0x44] = unaff_r28;
  if (0.0 < fVar3) {
    lVar17 = uVar19 - 0x230;
    lVar22 = uVar19 - 0x58;
    lVar24 = uVar19 - 0x48;
    lVar30 = 2;
    fVar2 = (fVar2 - fVar3) / (fVar2 + fVar3);
    fVar3 = fVar2 * fVar2;
    *(float *)((int)puVar8 + 500) = fVar2;
    *(float *)((int)puVar8 + 0x1ec) = fVar2;
    *(float *)(puVar8 + 0x3e) = fVar2;
    *(float *)(puVar8 + 0x3d) = fVar2;
    fVar2 = fVar3 * fVar3;
    *(float *)((int)puVar8 + 0x1ec) = *(float *)((int)puVar8 + 0x1ec) * fVar3;
    *(float *)(puVar8 + 0x3e) = *(float *)(puVar8 + 0x3e) * fVar2;
    *(float *)((int)puVar8 + 500) = *(float *)((int)puVar8 + 500) * fVar2 * fVar3;
    do {
      *(float *)((int)lVar17 + 0x1e8) = *(float *)((int)lVar17 + 0x1d8) * fVar2 * fVar2;
      iVar15 = (int)lVar22;
      lVar17 = lVar17 + 8;
      lVar22 = lVar22 + 8;
      *(float *)((int)lVar24 + 4) = *(float *)(iVar15 + 4) * fVar2 * fVar2;
      lVar24 = lVar24 + 8;
      lVar30 = lVar30 + -1;
    } while (lVar30 != 0);
    lVar30 = 4;
    lVar24 = uVar19 - 0x58;
    pfVar23 = (float *)&DAT_007358e0;
    lVar17 = lVar18;
    lVar22 = lVar24;
    do {
      fVar2 = *pfVar23;
      fVar3 = pfVar23[1];
      pfVar23 = pfVar23 + 2;
      *(float *)((int)lVar17 + 0x1e8) = *(float *)((int)lVar17 + 0x1e8) * fVar2;
      lVar17 = lVar17 + 8;
      *(float *)((int)lVar22 + 4) = *(float *)((int)lVar22 + 4) * fVar3;
      lVar22 = lVar22 + 8;
      lVar30 = lVar30 + -1;
    } while (lVar30 != 0);
    lVar17 = 2;
    do {
      iVar15 = (int)lVar18;
      iVar10 = (int)lVar24;
      lVar18 = lVar18 + 0x10;
      lVar24 = lVar24 + 0x10;
      fVar9 = fVar9 + *(float *)(iVar15 + 0x1e8) + *(float *)(iVar10 + 4) + *(float *)(iVar10 + 8) +
              *(float *)(iVar10 + 0xc);
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
    fVar9 = (fVar9 + 0.7853982) * fVar4 + fVar1;
  }
  pcVar5 = (code *)*puVar14;
  puVar8[5] = ZEXT48(&TOC_BASE);
  (*pcVar5)((double)(fVar9 * 57.295776 * fVar12),0x3fb99999a0000000,0x4092c00000000000,piVar11);
  auVar36 = _DAT_000659b0;
  auVar34 = _DAT_000659a0;
  auVar43 = ZEXT416(0);
  auVar31 = auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60;
  auVar32 = loadVectorLeftIndexed(0x13c0,0x950000);
  auVar33 = loadVectorLeftIndexed(0x20,0x9513c0);
  auVar35 = loadVectorLeftIndexed(4,0x9513c0);
  auVar37 = loadVectorLeftIndexed(0x10,0x9513c0);
  auVar38 = loadVectorLeftIndexed(0x14,0x9513c0);
  auVar39 = loadVectorLeftIndexed(0x24,0x9513c0);
  auVar40 = loadVectorLeftIndexed(8,0x9513c0);
  auVar41 = loadVectorLeftIndexed(0x18,0x9513c0);
  auVar42 = loadVectorLeftIndexed(0x28,0x9513c0);
  auVar43 = loadVectorLeftIndexed(0x140,0x9513c0);
  auVar44 = loadVectorLeftIndexed(0x144,0x9513c0);
  auVar45 = loadVectorLeftIndexed(0x148,0x9513c0);
  auVar46 = loadVectorLeftIndexed(lVar13,0x65980);
  auVar44 = vectorPermute(auVar43,auVar44,_DAT_000659a0);
  auVar43 = auVar46 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar46 = vectorPermute(auVar32,auVar37,_DAT_000659a0);
  auVar48 = vectorPermute(auVar35,auVar38,_DAT_000659a0);
  auVar43 = vectorPermute(auVar45,auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60,
                          _DAT_000659a0);
  auVar32 = vectorPermute(auVar32,auVar35,_DAT_000659a0);
  auVar50 = vectorPermute(auVar40,auVar41,_DAT_000659a0);
  auVar35 = vectorPermute(auVar44,auVar43,_DAT_000659b0);
  auVar40 = vectorPermute(auVar40,*(undefined1 (*) [16])(puVar8 + 0xe),_DAT_000659a0);
  auVar37 = vectorPermute(auVar37,auVar38,_DAT_000659a0);
  auVar47 = vectorPermute(auVar33,auVar31,_DAT_000659a0);
  auVar49 = vectorPermute(auVar39,auVar31,_DAT_000659a0);
  auVar38 = vectorPermute(auVar41,*(undefined1 (*) [16])(puVar8 + 0x10),_DAT_000659a0);
  auVar43 = vectorPermute(auVar42,auVar31,_DAT_000659a0);
  auVar31 = vectorPermute(auVar32,auVar40,_DAT_000659b0);
  auVar32 = vectorPermute(auVar33,auVar39,_DAT_000659a0);
  auVar39 = vectorPermute(auVar42,*(undefined1 (*) [16])(puVar8 + 0x12),_DAT_000659a0);
  auVar33 = vectorPermute(auVar37,auVar38,_DAT_000659b0);
  auVar37 = vectorPermute(auVar46,auVar47,_DAT_000659b0);
  auVar43 = vectorPermute(auVar50,auVar43,_DAT_000659b0);
  auVar38 = vectorPermute(auVar48,auVar49,_DAT_000659b0);
  auVar32 = vectorPermute(auVar32,auVar39,_DAT_000659b0);
  *(undefined1 (*) [16])(puVar8 + 0x16) = auVar31;
  *(undefined1 (*) [16])(puVar8 + 0x22) = auVar35;
  *(undefined1 (*) [16])(puVar8 + 0x18) = auVar33;
  *(undefined1 (*) [16])(puVar8 + 0x20) = auVar43;
  *(undefined1 (*) [16])(puVar8 + 0x1e) = auVar38;
  *(undefined1 (*) [16])(puVar8 + 0x1a) = auVar32;
  *(undefined1 (*) [16])(puVar8 + 0x1c) = auVar37;
  iVar15 = *piVar11;
  puVar8[5] = puVar8[5];
  auVar43 = vectorPermute(auVar45,*(undefined1 (*) [16])(puVar8 + 0x14),auVar34);
  vectorPermute(auVar44,auVar43,auVar36);
  pcVar5 = (code *)**(undefined4 **)(iVar15 + 0x24);
  (*pcVar5)(piVar11,uVar19 - 0x160,*(undefined4 **)(iVar15 + 0x24),pcVar5,uVar19 - 400);
  auVar31 = vectorMergeHighWord(*(undefined1 (*) [16])((uint)(piVar11 + 0x38) & 0xfffffff0),
                                *(undefined1 (*) [16])((uint)(piVar11 + 0x40) & 0xfffffff0));
  auVar32 = vectorMergeHighWord(*(undefined1 (*) [16])((uint)(piVar11 + 0x3c) & 0xfffffff0),
                                *(undefined1 (*) [16])((uint)(piVar11 + 0x44) & 0xfffffff0));
  auVar43 = vectorMergeLowWord(*(undefined1 (*) [16])((uint)(piVar11 + 0x38) & 0xfffffff0),
                               *(undefined1 (*) [16])((uint)(piVar11 + 0x40) & 0xfffffff0));
  auVar34 = vectorMergeLowWord(*(undefined1 (*) [16])((uint)(piVar11 + 0x3c) & 0xfffffff0),
                               *(undefined1 (*) [16])((uint)(piVar11 + 0x44) & 0xfffffff0));
  auVar36 = vectorMergeHighWord(auVar31,auVar32);
  auVar31 = vectorMergeLowWord(auVar31,auVar32);
  auVar32 = vectorMergeHighWord(auVar43,auVar34);
  auVar43 = vectorMergeLowWord(auVar43,auVar34);
  *(undefined1 (*) [16])(puVar8 + 0x24) = auVar36;
  *(undefined1 (*) [16])(puVar8 + 0x26) = auVar31;
  iVar15 = 0;
  *(undefined1 (*) [16])(puVar8 + 0x28) = auVar32;
  *(undefined1 (*) [16])(puVar8 + 0x2a) = auVar43;
  auVar31 = vectorMergeHighWord(*(undefined1 (*) [16])((uint)(piVar11 + 0x28) & 0xfffffff0),
                                *(undefined1 (*) [16])((uint)(piVar11 + 0x30) & 0xfffffff0));
  ppRVar28 = &DepthPass;
  auVar43 = vectorMergeLowWord(*(undefined1 (*) [16])((uint)(piVar11 + 0x28) & 0xfffffff0),
                               *(undefined1 (*) [16])((uint)(piVar11 + 0x30) & 0xfffffff0));
  auVar34 = vectorMergeHighWord(*(undefined1 (*) [16])((uint)(piVar11 + 0x2c) & 0xfffffff0),
                                *(undefined1 (*) [16])((uint)(piVar11 + 0x34) & 0xfffffff0));
  auVar36 = vectorMergeLowWord(*(undefined1 (*) [16])((uint)(piVar11 + 0x2c) & 0xfffffff0),
                               *(undefined1 (*) [16])((uint)(piVar11 + 0x34) & 0xfffffff0));
  auVar32 = vectorMergeHighWord(auVar31,auVar34);
  auVar34 = vectorMergeLowWord(auVar31,auVar34);
  auVar31 = vectorMergeHighWord(auVar43,auVar36);
  auVar43 = vectorMergeLowWord(auVar43,auVar36);
  *(undefined1 (*) [16])(puVar8 + 0x2c) = auVar32;
  *(undefined1 (*) [16])(puVar8 + 0x2e) = auVar34;
  *(undefined1 (*) [16])(puVar8 + 0x30) = auVar31;
  *(undefined1 (*) [16])(puVar8 + 0x32) = auVar43;
  do {
    pRVar6 = *ppRVar28;
    lVar18 = uVar19 - 0x120;
    lVar13 = 8;
    *pRVar6->command = 0x441efc;
    pRVar6->command[1] = 0;
    pRVar27 = pRVar6->command + 2;
    pRVar6->command = pRVar27;
    do {
      pRVar20 = (RsxCmd *)lVar18;
      *pRVar27 = *pRVar20;
      pRVar27 = pRVar6->command;
      pRVar6->command = pRVar27 + 1;
      lVar18 = lVar18 + 8;
      pRVar27[1] = pRVar20[1];
      pRVar27 = pRVar6->command + 1;
      pRVar6->command = pRVar27;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
    pRVar6 = *ppRVar28;
    lVar18 = uVar19 - 0xe0;
    lVar13 = 8;
    *pRVar6->command = 0x441efc;
    pRVar6->command[1] = 8;
    pRVar27 = pRVar6->command + 2;
    pRVar6->command = pRVar27;
    do {
      pRVar20 = (RsxCmd *)lVar18;
      *pRVar27 = *pRVar20;
      pRVar27 = pRVar6->command;
      pRVar6->command = pRVar27 + 1;
      lVar18 = lVar18 + 8;
      pRVar27[1] = pRVar20[1];
      pRVar27 = pRVar6->command + 1;
      pRVar6->command = pRVar27;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
    iVar15 = iVar15 + 1;
    ppRVar28 = ppRVar28 + 1;
  } while (iVar15 < 0xb);
  lVar13 = 8;
  *(undefined4 *)((int)puVar8 + 0x1ac) = 0;
  *(undefined4 *)(puVar8 + 0x35) = 0;
  *(undefined4 *)((int)puVar8 + 0x1a4) = 0;
  *(undefined4 *)(puVar8 + 0x34) = 0x3f800000;
  *(undefined4 *)((int)puVar8 + 0x1bc) = 0;
  *(undefined4 *)(puVar8 + 0x37) = 0;
  *(undefined4 *)((int)puVar8 + 0x1b4) = 0x3f800000;
  *(undefined4 *)(puVar8 + 0x36) = 0;
  pRVar6 = DepthPass;
  *(undefined4 *)((int)puVar8 + 0x1cc) = 0;
  *(undefined4 *)(puVar8 + 0x39) = 0x3f800000;
  *(undefined4 *)((int)puVar8 + 0x1c4) = 0;
  *(undefined4 *)(puVar8 + 0x38) = 0;
  *(undefined4 *)((int)puVar8 + 0x1dc) = 0x3f800000;
  *(undefined4 *)(puVar8 + 0x3b) = 0;
  *(undefined4 *)((int)puVar8 + 0x1d4) = 0;
  *(undefined4 *)(puVar8 + 0x3a) = 0;
  lVar18 = uVar19 - 0xa0;
  *pRVar6->command = 0x441efc;
  pRVar6->command[1] = 4;
  pRVar27 = pRVar6->command + 2;
  pRVar6->command = pRVar27;
  do {
    pRVar20 = (RsxCmd *)lVar18;
    *pRVar27 = *pRVar20;
    pRVar27 = pRVar6->command;
    pRVar6->command = pRVar27 + 1;
    lVar18 = lVar18 + 8;
    pRVar27[1] = pRVar20[1];
    pRVar27 = pRVar6->command + 1;
    pRVar6->command = pRVar27;
    lVar13 = lVar13 + -1;
  } while (lVar13 != 0);
  uVar19 = ZEXT48(&DAT_00a245a8);
  uVar21 = ZEXT48(&DAT_00a245ac);
  uVar25 = ZEXT48(&DAT_00a245b0);
  uVar26 = ZEXT48(&DAT_00a245b4);
  lVar18 = 6;
  piVar16 = piVar11;
  do {
    piVar29 = piVar16 + 200;
    piVar16 = piVar16 + 4;
    auVar43 = auRam00000000 >> 0x60 & (undefined1  [16])0xffffffff;
    uVar7 = storeVectorElementWordIndexed
                      (auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60,0,uVar19);
    *(undefined4 *)uVar19 = uVar7;
    uVar19 = uVar19 + 0x10;
    auVar43 = auRam00000000 >> 0x40 & (undefined1  [16])0xffffffff;
    uVar7 = storeVectorElementWordIndexed
                      (auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60,0,uVar21);
    *(undefined4 *)uVar21 = uVar7;
    uVar21 = uVar21 + 0x10;
    auVar43 = *(undefined1 (*) [16])((uint)piVar29 & 0xfffffff0) >> 0x20 &
              (undefined1  [16])0xffffffff;
    uVar7 = storeVectorElementWordIndexed
                      (auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60,0,uVar25);
    *(undefined4 *)uVar25 = uVar7;
    uVar25 = uVar25 + 0x10;
    auVar43 = *(undefined1 (*) [16])((uint)piVar29 & 0xfffffff0) & (undefined1  [16])0xffffffff;
    uVar7 = storeVectorElementWordIndexed
                      (auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60,0,uVar26);
    *(undefined4 *)uVar26 = uVar7;
    uVar26 = uVar26 + 0x10;
    lVar18 = lVar18 + -1;
  } while (lVar18 != 0);
  auVar36 = *(undefined1 (*) [16])((uint)(piVar11 + 0xe0) & 0xfffffff0);
  auVar43 = auVar36 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar34 = auVar36 >> 0x40 & (undefined1  [16])0xffffffff;
  auVar36 = auVar36 >> 0x20 & (undefined1  [16])0xffffffff;
  DAT_00a24608 = storeVectorElementWordIndexed
                           (auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60,0x4608,
                            0xa20000);
  DAT_00a2460c = storeVectorElementWordIndexed
                           (auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60,4,0xa24608
                           );
  DAT_00a24610 = storeVectorElementWordIndexed
                           (auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60,8,0xa24608
                           );
  return;
}



//==== 00066088  ns=draw  size=0x504
// sig: void ComposeCameraMatrix(void)
// callers(8): 00010c70 boot::FrontEnd_Draw; 000684a4 draw::UpdateOcclusion; 00071ac0 draw::ResetHUDPass; 00076580 draw::DrawWater; 0013b108 update::OpenPauseMenu; 0013de20 pause::FrontEnd_DrawMenu; 0016114c space::TransitionDraw_Space; 001744f0 vendor::Vendor_PostUpdate
// callees(4): 00065a00 draw::UploadViewMatricesToPasses; 0050162c fastfunc::FastVecMtx4Mul; 005c5ad0 libc::memcpy; 005dd914 mathfunc::SinCos

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void draw::ComposeCameraMatrix(void)

{
  undefined8 uVar1;
  double extraout_f1;
  double extraout_f1_00;
  double extraout_f1_01;
  double extraout_f1_02;
  double extraout_f1_03;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_90;
  float local_8c;
  float local_88;
  float local_80;
  float local_7c;
  float local_78;
  
  if (ControlMode == 0) {
    local_e0 = GameCamera.orientMtx.forward.x;
    local_dc = GameCamera.orientMtx.forward.y;
    local_d8 = GameCamera.orientMtx.forward.z;
    local_d4 = GameCamera.orientMtx.forward.w;
    local_d0 = GameCamera.orientMtx.right.x;
    local_cc = GameCamera.orientMtx.right.y;
    local_c8 = GameCamera.orientMtx.right.z;
    local_c4 = GameCamera.orientMtx.right.w;
    local_c0 = GameCamera.orientMtx.up.x;
    local_bc = GameCamera.orientMtx.up.y;
    local_b8 = GameCamera.orientMtx.up.z;
    local_b4 = GameCamera.orientMtx.up.w;
  }
  else {
    uVar1 = mathfunc::SinCos((double)GameCamera.rot.azimuth,ControlMode,0);
    dVar9 = extraout_f1;
    uVar1 = mathfunc::SinCos((double)GameCamera.rot.azimuth,uVar1,1);
    dVar8 = extraout_f1_00;
    uVar1 = mathfunc::SinCos((double)GameCamera.rot.elevation,uVar1,0);
    dVar7 = extraout_f1_01;
    uVar1 = mathfunc::SinCos((double)GameCamera.rot.elevation,uVar1,1);
    dVar6 = extraout_f1_02;
    uVar1 = mathfunc::SinCos((double)GameCamera.rot.radius,uVar1,0);
    dVar5 = extraout_f1_03;
    dVar2 = (double)mathfunc::SinCos((double)GameCamera.rot.radius,uVar1,1);
    dVar4 = (double)(float)(dVar7 * dVar5);
    dVar3 = (double)(float)(dVar2 * dVar7);
    libc::memcpy(&local_a0,&DAT_0071f028,0x40);
    local_a0 = (float)(dVar6 * dVar2);
    local_9c = (float)(dVar6 * dVar5);
    local_88 = (float)(dVar6 * dVar9);
    local_78 = (float)(dVar8 * dVar6);
    local_90 = (float)(dVar9 * dVar3 - (double)(float)(dVar8 * dVar5));
    local_8c = (float)(dVar9 * dVar4 + (double)(float)(dVar8 * dVar2));
    local_80 = (float)(dVar8 * dVar3 + (double)(float)(dVar9 * dVar5));
    local_7c = (float)(dVar8 * dVar4 - (double)(float)(dVar2 * dVar9));
    local_98 = (float)-dVar7;
    libc::memcpy(&local_e0,&local_a0,0x40);
  }
  GameCamera.mtx0.v0.x = -local_d0;
  GameCamera.mtx0.v1.x = -local_cc;
  GameCamera.mtx0.v2.x = -local_c8;
  GameCamera.mtx0.v0.y = -local_c0;
  GameCamera.mtx0.v1.y = -local_bc;
  GameCamera.mtx0.v2.y = -local_b8;
  GameCamera.mtx0.v3.x = 0.0;
  GameCamera.mtx0.v0.z = local_e0;
  GameCamera.mtx0.v3.y = 0.0;
  GameCamera.mtx0.v1.z = local_dc;
  GameCamera.mtx0.v2.z = local_d8;
  GameCamera.mtx0.v3.z = 0.0;
  GameCamera.mtx0.v0.w = 0.0;
  GameCamera.mtx0.v1.w = 0.0;
  GameCamera.mtx0.v2.w = 0.0;
  GameCamera.mtx0.v3.w = 1.0;
  fastfunc::FastVecMtx4Mul(0x951400,0x95d040,&GameCamera);
  fastfunc::FastVecMtx4Mul(0x951440,0x95d080,&GameCamera);
  GameCamera.mtx2.v0.x = GameCamera.mtx2.v0.w * ViewContext.hvdf[0] + GameCamera.mtx2.v0.x;
  GameCamera.mtx2.v0.y = GameCamera.mtx2.v0.w * ViewContext.hvdf[1] + GameCamera.mtx2.v0.y;
  GameCamera.mtx2.v0.z = GameCamera.mtx2.v0.w * ViewContext.hvdf[2] + GameCamera.mtx2.v0.z;
  GameCamera.mtx2.v1.x = GameCamera.mtx2.v1.w * ViewContext.hvdf[0] + GameCamera.mtx2.v1.x;
  GameCamera.mtx2.v1.y = GameCamera.mtx2.v1.w * ViewContext.hvdf[1] + GameCamera.mtx2.v1.y;
  GameCamera.mtx2.v1.z = GameCamera.mtx2.v1.w * ViewContext.hvdf[2] + GameCamera.mtx2.v1.z;
  GameCamera.mtx2.v2.x = GameCamera.mtx2.v2.w * ViewContext.hvdf[0] + GameCamera.mtx2.v2.x;
  GameCamera.mtx2.v2.y = GameCamera.mtx2.v2.w * ViewContext.hvdf[1] + GameCamera.mtx2.v2.y;
  GameCamera.mtx2.v2.z = GameCamera.mtx2.v2.w * ViewContext.hvdf[2] + GameCamera.mtx2.v2.z;
  GameCamera.mtx2.v3.x = GameCamera.mtx2.v3.w * ViewContext.hvdf[0] + GameCamera.mtx2.v3.x;
  GameCamera.mtx2.v3.y = GameCamera.mtx2.v3.w * ViewContext.hvdf[1] + GameCamera.mtx2.v3.y;
  GameCamera.mtx2.v3.z = GameCamera.mtx2.v3.w * ViewContext.hvdf[2] + GameCamera.mtx2.v3.z;
  fastfunc::FastVecMtx4Mul(0x951480,0x95d0c0,&GameCamera);
  GameCamera.mtx4.v0.x = ViewContext.hMtx.forward.x * ViewContext.guardX;
  GameCamera.mtx4.v0.y = ViewContext.hMtx.forward.y * ViewContext.guardX;
  GameCamera.mtx4.v0.z = ViewContext.hMtx.forward.z * ViewContext.guardX;
  GameCamera.mtx4.v0.w = ViewContext.hMtx.forward.w * ViewContext.guardX;
  GameCamera.mtx4.v1.x = ViewContext.hMtx.right.x * ViewContext.guardX;
  GameCamera.mtx4.v1.y = ViewContext.hMtx.right.y * ViewContext.guardX;
  GameCamera.mtx4.v1.z = ViewContext.hMtx.right.z * ViewContext.guardX;
  GameCamera.mtx4.v1.w = ViewContext.hMtx.right.w * ViewContext.guardX;
  GameCamera.mtx4.v2.x = ViewContext.hMtx.up.x;
  GameCamera.mtx4.v2.y = ViewContext.hMtx.up.y;
  GameCamera.mtx4.v2.z = ViewContext.hMtx.up.z;
  GameCamera.mtx4.v2.w = ViewContext.hMtx.up.w;
  GameCamera.mtx4.v3.x = ViewContext.hMtx.position.x;
  GameCamera.mtx4.v3.y = ViewContext.hMtx.position.y;
  GameCamera.mtx4.v3.z = ViewContext.hMtx.position.z;
  GameCamera.mtx4.v3.w = ViewContext.hMtx.position.w;
  fastfunc::FastVecMtx4Mul(0x9514c0,0x9514c0,&GameCamera);
  DAT_0095d200 = GameCamera.mtx0.v0.x;
  DAT_0095d204 = GameCamera.mtx0.v0.y;
  DAT_0095d208 = GameCamera.mtx0.v0.z;
  DAT_0095d20c = GameCamera.mtx0.v0.w;
  DAT_0095d210 = GameCamera.mtx0.v1.x;
  DAT_0095d214 = GameCamera.mtx0.v1.y;
  DAT_0095d218 = GameCamera.mtx0.v1.z;
  DAT_0095d21c = GameCamera.mtx0.v1.w;
  DAT_0095d220 = GameCamera.mtx0.v2.x;
  DAT_0095d224 = GameCamera.mtx0.v2.y;
  DAT_0095d228 = GameCamera.mtx0.v2.z;
  DAT_0095d22c = GameCamera.mtx0.v2.w;
  CameraCollPos.x = GameCamera.posX * 1024.0;
  CameraCollPos.y = GameCamera.posY * 1024.0;
  CameraCollPos.z = GameCamera.posZ * 1024.0;
  CameraCollPos.w = 1024.0;
  DAT_0159c340 = GameCamera.posX;
  DAT_0159c344 = GameCamera.posY;
  DAT_0159c348 = GameCamera.posZ;
  DAT_0159c34c[0] = GameCamera.field8_0x14c[0];
  DAT_0159c34c[1] = GameCamera.field8_0x14c[1];
  DAT_0159c34c[2] = GameCamera.field8_0x14c[2];
  DAT_0159c34c[3] = GameCamera.field8_0x14c[3];
  UploadViewMatricesToPasses();
  return;
}



//==== 00066598  ns=draw  size=0x278
// sig: void RebuildSharedWaveTables(void)
// callers(9): 000668d0 draw::UpdateViewContext; 0006bb78 draw::DefaultDraw; 0017e3b8 water::PushOceanFog; 0017e4c8 water::PopZoneFog; 0017e558 water::SubmitZone; 0017e700 water::OceanSpecialPass; 0017ea4c water::SetFogVars; 0017eb70 water::RestoreFogVars; 00340190 mobyupdate_helpers::M317_Gaspar_SubmitOcean
// callees(0): 

void draw::RebuildSharedWaveTables(void)

{
  RsxCmd RVar1;
  undefined4 uVar2;
  RenderingStep *pRVar3;
  RenderingStep *pRVar4;
  uint uVar5;
  RsxCmd *pRVar6;
  RsxCmd *pRVar7;
  ulonglong uVar8;
  RsxCmd *pRVar9;
  RsxCmd *pRVar10;
  longlong lVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  RsxCmd local_20 [6];
  
  uVar5 = DAT_00a15f64;
  uVar8 = (ulonglong)DAT_00a15f64;
  if (DAT_00a15f64 != 0) {
    auVar18 = ZEXT416(0xffffffff);
    auVar12 = auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60;
    auVar18 = ZEXT416(0xffffffff);
    auVar16 = auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60;
    auVar18 = ZEXT416(0xffffffff);
    auVar18 = auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60;
    auVar13 = vectorShiftLeftIntegerWord(auVar12,auVar12);
    auVar17 = vectorShiftLeftIntegerWord(auVar16,auVar16);
    auVar19 = vectorShiftLeftIntegerWord(auVar18,auVar18);
    *(float *)(DAT_00a15f64 + 0x20) = ViewContext.fogNearDist * 0.0009765625;
    auVar18 = loadVectorLeftIndexed(0x230,0x95cf80);
    auVar16 = loadVectorLeftIndexed(0x234,0x95cf80);
    auVar12 = vectorConvertFromSignedFixedPointWord(auVar18,0);
    auVar16 = vectorConvertFromSignedFixedPointWord(auVar16,0);
    *(float *)(uVar5 + 0x24) = ViewContext.fogFarDist * 0.0009765625;
    auVar18 = loadVectorLeftIndexed(4,0x6658c);
    auVar18 = auVar18 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar14 = auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60;
    auVar15 = loadVectorLeftIndexed(0x238,0x95cf80);
    auVar18 = vectorMultiplyAddFloatingPoint(auVar12,auVar14,auVar13);
    pRVar6 = local_20;
    lVar11 = 2;
    *(float *)(uVar5 + 0x28) = -(ViewContext.fogNearIntensity * 0.003921569 - 1.0);
    auVar18 = auVar18 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar13 = vectorConvertFromSignedFixedPointWord(auVar15,0);
    auVar12 = vectorMultiplyAddFloatingPoint(auVar16,auVar14,auVar17);
    auVar16 = vectorMultiplyAddFloatingPoint(auVar13,auVar14,auVar19);
    *(float *)(uVar5 + 0x2c) = -(ViewContext.fogFarIntensity * 0.003921569 - 1.0);
    auVar12 = auVar12 >> 0x60 & (undefined1  [16])0xffffffff;
    uVar2 = storeVectorElementWordIndexed
                      (auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60,0x10,uVar8);
    *(undefined4 *)(uVar5 + 0x10 & 0xfffffffc) = uVar2;
    uVar2 = storeVectorElementWordIndexed
                      (auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60,0x14,uVar8);
    *(undefined4 *)(uVar5 + 0x14 & 0xfffffffc) = uVar2;
    auVar18 = auVar16 >> 0x60 & (undefined1  [16])0xffffffff;
    uVar2 = storeVectorElementWordIndexed
                      (auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60,0x18,uVar8);
    *(undefined4 *)(uVar5 + 0x18 & 0xfffffffc) = uVar2;
    pRVar3 = ForwardPass;
    pRVar10 = ForwardPass->command;
    pRVar7 = pRVar10 + 2;
    *pRVar10 = NV4097_SET_TRANSFORM_CONSTANT_LOAD_x5;
    pRVar10[1] = 0x13;
    pRVar3->command = pRVar7;
    pRVar10 = pRVar6;
    do {
      pRVar9 = pRVar3->command;
      RVar1 = *pRVar10;
      pRVar3->command = pRVar9 + 1;
      *pRVar7 = RVar1;
      pRVar7 = pRVar10 + 1;
      pRVar10 = pRVar10 + 2;
      pRVar9[1] = *pRVar7;
      pRVar7 = pRVar3->command + 1;
      pRVar3->command = pRVar7;
      pRVar4 = ForwardPass;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
    lVar11 = 2;
    pRVar9 = (RsxCmd *)(DAT_00a15f64 + 0x10);
    pRVar10 = ForwardPass->command;
    pRVar7 = pRVar10 + 2;
    *pRVar10 = NV4097_SET_TRANSFORM_CONSTANT_LOAD_x5;
    pRVar10[1] = 0x14;
    pRVar4->command = pRVar7;
    do {
      pRVar10 = pRVar4->command;
      RVar1 = *pRVar9;
      pRVar4->command = pRVar10 + 1;
      *pRVar7 = RVar1;
      pRVar7 = pRVar9 + 1;
      pRVar9 = pRVar9 + 2;
      pRVar10[1] = *pRVar7;
      pRVar7 = pRVar4->command + 1;
      pRVar4->command = pRVar7;
      pRVar3 = OceanForwardPass;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
    lVar11 = 2;
    pRVar10 = OceanForwardPass->command;
    pRVar7 = pRVar10 + 2;
    *pRVar10 = NV4097_SET_TRANSFORM_CONSTANT_LOAD_x5;
    pRVar10[1] = 0x13;
    pRVar3->command = pRVar7;
    do {
      pRVar10 = pRVar3->command;
      RVar1 = *pRVar6;
      pRVar3->command = pRVar10 + 1;
      *pRVar7 = RVar1;
      pRVar7 = pRVar6 + 1;
      pRVar6 = pRVar6 + 2;
      pRVar10[1] = *pRVar7;
      pRVar7 = pRVar3->command + 1;
      pRVar3->command = pRVar7;
      pRVar4 = OceanForwardPass;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
    lVar11 = 2;
    pRVar7 = (RsxCmd *)(DAT_00a15f64 + 0x10);
    pRVar10 = OceanForwardPass->command;
    *pRVar10 = NV4097_SET_TRANSFORM_CONSTANT_LOAD_x5;
    pRVar6 = pRVar10 + 2;
    pRVar10[1] = 0x14;
    pRVar4->command = pRVar6;
    do {
      pRVar10 = pRVar4->command;
      RVar1 = *pRVar7;
      pRVar4->command = pRVar10 + 1;
      *pRVar6 = RVar1;
      pRVar6 = pRVar7 + 1;
      pRVar7 = pRVar7 + 2;
      pRVar10[1] = *pRVar6;
      pRVar6 = pRVar4->command + 1;
      pRVar4->command = pRVar6;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  return;
}



//==== 000668d0  ns=draw  size=0x1008
// sig: undefined UpdateViewContext(void)
// callers(27): 000109e4 boot::FrontEnd_UpdateSceneCamera; 00011b74 boot::Load_Front_End; 00040440 camera::camera19::UpdateCamera_19; 00041850 camera::camera20::UpdateCamera_20; 000627d0 debug::UpdateDebugSelections; 000678d8 draw::UpdateFog; 000682c8 draw::SetUserViewContext; 0006bb78 draw::DefaultDraw; 00071180 draw::SetScreenResolution; 00071ac0 draw::ResetHUDPass; 00076580 draw::DrawWater; 000d8be8 initonce::InitOnce; 0013b108 update::OpenPauseMenu; 0015dfe0 space::Space_SetCutsceneCamera; 0015fe00 space::ChooseLoadingScreen; 0016114c space::TransitionDraw_Space; 00161788 space::UpdateSpace; 00163aa0 space::SpaceTransition_LoadWad; 00167a30 update::mode_sceneUnInit; 001683a0 update::UpdateSceneCamera; 0016da88 vendor::Vendor_PreUpdate; 001e70a8 mobyupd::update1160::M1160_UpdateFlight; 0021ff90 mobyupd::update1242::M1242_0021ff90; 00262730 mobyupd::update1379::M1379_UpdateFlight; 0036b8c8 mobyupdate_helpers::M426_0036b8c8
// callees(3): 0002b898 draw::???_Draw_SetupFogTable; 00066598 draw::RebuildSharedWaveTables; 0050027c fastfunc::FastMemCopy32

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void draw::UpdateViewContext(void)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  ulonglong *puVar10;
  int iVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  ulonglong uVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  ulonglong uVar20;
  float *pfVar21;
  longlong lVar22;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  ulonglong in_f14;
  ulonglong in_f15;
  ulonglong in_f16;
  ulonglong in_f17;
  ulonglong in_f18;
  ulonglong in_f19;
  ulonglong in_f20;
  ulonglong in_f21;
  ulonglong in_f22;
  ulonglong in_f23;
  ulonglong in_f24;
  ulonglong in_f25;
  double dVar28;
  ulonglong in_f26;
  ulonglong in_f27;
  ulonglong in_f28;
  ulonglong in_f29;
  ulonglong in_f30;
  ulonglong in_f31;
  double dVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  
  uVar16 = ZEXT48(&stack0x00000000);
  lVar18 = uVar16 - 0x220;
  puVar10 = (ulonglong *)lVar18;
  *puVar10 = uVar16;
  puVar10[0x46] = in_LR;
  puVar10[0x32] = in_f14;
  puVar10[0x33] = in_f15;
  puVar10[0x34] = in_f16;
  puVar10[0x35] = in_f17;
  puVar10[0x36] = in_f18;
  puVar10[0x37] = in_f19;
  puVar10[0x38] = in_f20;
  puVar10[0x39] = in_f21;
  puVar10[0x3a] = in_f22;
  puVar10[0x3b] = in_f23;
  puVar10[0x3c] = in_f24;
  puVar10[0x3d] = in_f25;
  puVar10[0x3e] = in_f26;
  puVar10[0x3f] = in_f27;
  puVar10[0x40] = in_f28;
  puVar10[0x41] = in_f29;
  puVar10[0x42] = in_f30;
  puVar10[0x43] = in_f31;
  puVar10[0x31] = unaff_r31;
  DAT_00735fe0 = ViewContext.fogFarIntensity;
  fVar15 = ViewContext.fogNearIntensity;
  fVar13 = ViewContext.fogFarDist;
  fVar14 = ViewContext.fogNearDist;
  fVar5 = ViewContext.yclip;
  fVar9 = ViewContext.xclip;
  fVar4 = ViewContext.ypix;
  fVar2 = ViewContext.xpix;
  DAT_0095d27c = ViewContext.pad_1C4[0xe];
  DAT_0095d278 = ViewContext.pad_1C4[0xd];
  DAT_0095d26c = ViewContext.pad_1C4[10];
  ViewContext.pad_1C4[0xb] = (u32)ViewContext.farClip;
  ViewContext.pad_1C4[0xc] = (u32)ViewContext.nearClip;
  bVar1 = Cutscene == 0;
  puVar10[0x30] = unaff_r30;
  puVar10[0x2f] = unaff_r29;
  puVar10[0x2e] = unaff_r28;
  puVar10[0x2d] = unaff_r27;
  puVar10[0x2c] = unaff_r26;
  puVar10[0x2b] = unaff_r25;
  DAT_00735d58 = ViewContext.fogNearIntensity;
  fVar8 = ViewContext.xratio;
  if (bVar1) {
    fVar3 = 0.775;
  }
  else {
    fVar3 = 0.756;
  }
  dVar26 = (double)ViewContext.xratio;
  ViewContext.pad_1C4[3] = (u32)(fVar9 / fVar2);
  ViewContext.pad_1C4[4] = (u32)(fVar5 / fVar4);
  fVar2 = (float)(dVar26 * (double)fVar3);
  dVar29 = 1.0;
  ViewContext.xclipratio = (float)ViewContext.pad_1C4[3];
  ViewContext.yclipratio = (float)ViewContext.pad_1C4[4];
  ViewContext.yratio = fVar2;
  *(undefined4 *)((int)puVar10 + 0x94) = 0x3f800000;
  *(float *)(puVar10 + 0x13) = fVar8;
  *(float *)((int)puVar10 + 0x9c) = (float)(1.0 - ABS(dVar26));
  dVar27 = 0.0;
  uVar20 = (ulonglong)(*(uint *)((int)puVar10 + 0x9c) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)(puVar10 + 0x13) >> 0x1d) & 4;
  fVar8 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar20 << 2));
  dVar28 = ABS((double)*(float *)((int)puVar10 + 0x94));
  if (*(float *)((int)puVar10 + 0x9c) - 0.0 < 0.0) {
    dVar28 = ABS(dVar26);
  }
  fVar4 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
  dVar24 = ABS((double)*(float *)(puVar10 + 0x13));
  if (*(float *)((int)puVar10 + 0x9c) - 0.0 < 0.0) {
    dVar24 = dVar29;
  }
  dVar25 = dVar27;
  if (0.0 < dVar28) {
    lVar17 = uVar16 - 0x210;
    lVar19 = uVar16 - 0x120;
    lVar22 = uVar16 - 0x110;
    lVar23 = 2;
    fVar9 = (float)(dVar24 - dVar28) / (float)(dVar24 + dVar28);
    fVar5 = fVar9 * fVar9;
    *(float *)(puVar10 + 0x20) = fVar9;
    *(float *)((int)puVar10 + 0x104) = fVar9;
    *(float *)(puVar10 + 0x21) = fVar9;
    *(float *)((int)puVar10 + 0x10c) = fVar9;
    fVar9 = fVar5 * fVar5;
    *(float *)((int)puVar10 + 0x104) = *(float *)((int)puVar10 + 0x104) * fVar5;
    *(float *)(puVar10 + 0x21) = *(float *)(puVar10 + 0x21) * fVar9;
    *(float *)((int)puVar10 + 0x10c) = *(float *)((int)puVar10 + 0x10c) * fVar9 * fVar5;
    do {
      *(float *)((int)lVar17 + 0x100) = *(float *)((int)lVar17 + 0xf0) * fVar9 * fVar9;
      iVar11 = (int)lVar19;
      lVar17 = lVar17 + 8;
      lVar19 = lVar19 + 8;
      *(float *)((int)lVar22 + 4) = *(float *)(iVar11 + 4) * fVar9 * fVar9;
      lVar22 = lVar22 + 8;
      lVar23 = lVar23 + -1;
    } while (lVar23 != 0);
    lVar23 = 4;
    lVar22 = uVar16 - 0x120;
    pfVar21 = (float *)&DAT_007358e0;
    lVar17 = lVar18;
    lVar19 = lVar22;
    do {
      fVar9 = *pfVar21;
      fVar5 = pfVar21[1];
      pfVar21 = pfVar21 + 2;
      *(float *)((int)lVar17 + 0x100) = *(float *)((int)lVar17 + 0x100) * fVar9;
      lVar17 = lVar17 + 8;
      *(float *)((int)lVar19 + 4) = *(float *)((int)lVar19 + 4) * fVar5;
      lVar19 = lVar19 + 8;
      lVar23 = lVar23 + -1;
    } while (lVar23 != 0);
    lVar19 = 2;
    lVar17 = lVar18;
    dVar28 = dVar27;
    do {
      iVar11 = (int)lVar17;
      lVar17 = lVar17 + 0x10;
      iVar12 = (int)lVar22;
      lVar22 = lVar22 + 0x10;
      dVar28 = (double)((float)(dVar28 + (double)*(float *)(iVar11 + 0x100)) +
                        *(float *)(iVar12 + 4) + *(float *)(iVar12 + 8) + *(float *)(iVar12 + 0xc));
      lVar19 = lVar19 + -1;
    } while (lVar19 != 0);
    dVar25 = (double)((float)(dVar28 + 0.7853981852531433) * fVar8 + fVar4);
  }
  dVar28 = ABS((double)fVar2);
  fVar8 = (float)(dVar25 + 1.570796251296997);
  *(undefined4 *)(puVar10 + 0x11) = 0x3f800000;
  fVar4 = 3.1415925 - fVar8;
  if (fVar8 - (3.1415925 - fVar8) < 0.0) {
    fVar4 = fVar8;
  }
  fVar9 = -3.1415925 - fVar8;
  if ((-3.1415925 - fVar8) - fVar4 < 0.0) {
    fVar9 = fVar4;
  }
  fVar8 = fVar9 * fVar9;
  fVar4 = fVar8 * fVar8 * fVar9;
  fVar5 = fVar8 * fVar4;
  *(float *)(puVar10 + 0x12) = (float)(1.0 - dVar28);
  *(float *)((int)puVar10 + 0x8c) = fVar2;
  ViewContext.pad_1C4[7] =
       (u32)(1.0 / (fVar8 * fVar5 * 2.601887e-06 +
                   fVar5 * -0.0001980741 +
                   fVar4 * 0.0083330255 + fVar8 * fVar9 * -0.16666657 + fVar9));
  uVar20 = (ulonglong)(*(uint *)(puVar10 + 0x12) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar10 + 0x8c) >> 0x1d) & 4;
  dVar24 = ABS((double)*(float *)(puVar10 + 0x11));
  if (*(float *)(puVar10 + 0x12) - 0.0 < 0.0) {
    dVar24 = dVar28;
  }
  dVar28 = ABS((double)*(float *)((int)puVar10 + 0x8c));
  if (*(float *)(puVar10 + 0x12) - 0.0 < 0.0) {
    dVar28 = dVar29;
  }
  fVar4 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar20 << 2));
  fVar8 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
  dVar25 = dVar27;
  ViewContext.xradpad = (float)ViewContext.pad_1C4[7];
  if (0.0 < dVar24) {
    lVar17 = uVar16 - 0x210;
    lVar19 = uVar16 - 0x140;
    lVar22 = uVar16 - 0x130;
    lVar23 = 2;
    fVar9 = (float)(dVar28 - dVar24) / (float)(dVar28 + dVar24);
    fVar5 = fVar9 * fVar9;
    *(float *)(puVar10 + 0x1c) = fVar9;
    *(float *)((int)puVar10 + 0xe4) = fVar9;
    *(float *)(puVar10 + 0x1d) = fVar9;
    *(float *)((int)puVar10 + 0xec) = fVar9;
    fVar9 = fVar5 * fVar5;
    *(float *)((int)puVar10 + 0xe4) = *(float *)((int)puVar10 + 0xe4) * fVar5;
    *(float *)(puVar10 + 0x1d) = *(float *)(puVar10 + 0x1d) * fVar9;
    *(float *)((int)puVar10 + 0xec) = *(float *)((int)puVar10 + 0xec) * fVar9 * fVar5;
    do {
      *(float *)((int)lVar17 + 0xe0) = *(float *)((int)lVar17 + 0xd0) * fVar9 * fVar9;
      iVar11 = (int)lVar19;
      lVar17 = lVar17 + 8;
      lVar19 = lVar19 + 8;
      *(float *)((int)lVar22 + 4) = *(float *)(iVar11 + 4) * fVar9 * fVar9;
      lVar22 = lVar22 + 8;
      lVar23 = lVar23 + -1;
    } while (lVar23 != 0);
    lVar23 = 4;
    lVar22 = uVar16 - 0x140;
    pfVar21 = (float *)&DAT_007358e0;
    lVar17 = lVar18;
    lVar19 = lVar22;
    do {
      fVar9 = *pfVar21;
      fVar5 = pfVar21[1];
      pfVar21 = pfVar21 + 2;
      *(float *)((int)lVar17 + 0xe0) = *(float *)((int)lVar17 + 0xe0) * fVar9;
      lVar17 = lVar17 + 8;
      *(float *)((int)lVar19 + 4) = *(float *)((int)lVar19 + 4) * fVar5;
      lVar19 = lVar19 + 8;
      lVar23 = lVar23 + -1;
    } while (lVar23 != 0);
    lVar19 = 2;
    lVar17 = lVar18;
    dVar28 = dVar27;
    do {
      iVar11 = (int)lVar17;
      lVar17 = lVar17 + 0x10;
      iVar12 = (int)lVar22;
      lVar22 = lVar22 + 0x10;
      dVar28 = (double)((float)(dVar28 + (double)*(float *)(iVar11 + 0xe0)) + *(float *)(iVar12 + 4)
                        + *(float *)(iVar12 + 8) + *(float *)(iVar12 + 0xc));
      lVar19 = lVar19 + -1;
    } while (lVar19 != 0);
    dVar25 = (double)((float)(dVar28 + 0.7853981852531433) * fVar4 + fVar8);
  }
  fVar8 = (float)(dVar25 + 1.570796251296997);
  fVar4 = (float)(dVar26 * (double)(float)ViewContext.pad_1C4[3]);
  *(undefined4 *)((int)puVar10 + 0x7c) = 0x3f800000;
  dVar28 = ABS((double)fVar4);
  fVar9 = 3.1415925 - fVar8;
  if (fVar8 - (3.1415925 - fVar8) < 0.0) {
    fVar9 = fVar8;
  }
  *(float *)((int)puVar10 + 0x84) = (float)(1.0 - dVar28);
  *(float *)(puVar10 + 0x10) = fVar4;
  fVar4 = -3.1415925 - fVar8;
  if ((-3.1415925 - fVar8) - fVar9 < 0.0) {
    fVar4 = fVar9;
  }
  fVar5 = fVar4 * fVar4;
  fVar9 = fVar5 * fVar5 * fVar4;
  fVar8 = fVar5 * fVar9;
  ViewContext.pad_1C4[8] =
       (u32)(1.0 / (fVar5 * fVar8 * 2.601887e-06 +
                   fVar8 * -0.0001980741 +
                   fVar9 * 0.0083330255 + fVar5 * fVar4 * -0.16666657 + fVar4));
  uVar20 = (ulonglong)(*(uint *)((int)puVar10 + 0x84) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)(puVar10 + 0x10) >> 0x1d) & 4;
  dVar26 = ABS((double)*(float *)((int)puVar10 + 0x7c));
  if (*(float *)((int)puVar10 + 0x84) - 0.0 < 0.0) {
    dVar26 = dVar28;
  }
  dVar28 = ABS((double)*(float *)(puVar10 + 0x10));
  if (*(float *)((int)puVar10 + 0x84) - 0.0 < 0.0) {
    dVar28 = dVar29;
  }
  fVar4 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar20 << 2));
  fVar8 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
  dVar24 = dVar27;
  ViewContext.yradpad = (float)ViewContext.pad_1C4[8];
  if (0.0 < dVar26) {
    lVar17 = uVar16 - 0x210;
    lVar19 = uVar16 - 0x160;
    lVar22 = uVar16 - 0x150;
    lVar23 = 2;
    fVar9 = (float)(dVar28 - dVar26) / (float)(dVar28 + dVar26);
    fVar5 = fVar9 * fVar9;
    *(float *)(puVar10 + 0x18) = fVar9;
    *(float *)((int)puVar10 + 0xc4) = fVar9;
    *(float *)(puVar10 + 0x19) = fVar9;
    *(float *)((int)puVar10 + 0xcc) = fVar9;
    fVar9 = fVar5 * fVar5;
    *(float *)((int)puVar10 + 0xc4) = *(float *)((int)puVar10 + 0xc4) * fVar5;
    *(float *)(puVar10 + 0x19) = *(float *)(puVar10 + 0x19) * fVar9;
    *(float *)((int)puVar10 + 0xcc) = *(float *)((int)puVar10 + 0xcc) * fVar9 * fVar5;
    do {
      *(float *)((int)lVar17 + 0xc0) = *(float *)((int)lVar17 + 0xb0) * fVar9 * fVar9;
      iVar11 = (int)lVar19;
      lVar17 = lVar17 + 8;
      lVar19 = lVar19 + 8;
      *(float *)((int)lVar22 + 4) = *(float *)(iVar11 + 4) * fVar9 * fVar9;
      lVar22 = lVar22 + 8;
      lVar23 = lVar23 + -1;
    } while (lVar23 != 0);
    lVar23 = 4;
    lVar22 = uVar16 - 0x160;
    pfVar21 = (float *)&DAT_007358e0;
    lVar17 = lVar18;
    lVar19 = lVar22;
    do {
      fVar9 = *pfVar21;
      fVar5 = pfVar21[1];
      pfVar21 = pfVar21 + 2;
      *(float *)((int)lVar17 + 0xc0) = *(float *)((int)lVar17 + 0xc0) * fVar9;
      lVar17 = lVar17 + 8;
      *(float *)((int)lVar19 + 4) = *(float *)((int)lVar19 + 4) * fVar5;
      lVar19 = lVar19 + 8;
      lVar23 = lVar23 + -1;
    } while (lVar23 != 0);
    lVar19 = 2;
    lVar17 = lVar18;
    dVar28 = dVar27;
    do {
      iVar11 = (int)lVar17;
      lVar17 = lVar17 + 0x10;
      iVar12 = (int)lVar22;
      lVar22 = lVar22 + 0x10;
      dVar28 = (double)((float)(dVar28 + (double)*(float *)(iVar11 + 0xc0)) + *(float *)(iVar12 + 4)
                        + *(float *)(iVar12 + 8) + *(float *)(iVar12 + 0xc));
      lVar19 = lVar19 + -1;
    } while (lVar19 != 0);
    dVar24 = (double)((float)(dVar28 + 0.7853981852531433) * fVar4 + fVar8);
  }
  fVar8 = (float)(dVar24 + 1.570796251296997);
  fVar2 = (float)((double)fVar2 * (double)(float)ViewContext.pad_1C4[4]);
  *(undefined4 *)(puVar10 + 0xe) = 0x3f800000;
  dVar28 = ABS((double)fVar2);
  fVar4 = 3.1415925 - fVar8;
  if (fVar8 - (3.1415925 - fVar8) < 0.0) {
    fVar4 = fVar8;
  }
  *(float *)(puVar10 + 0xf) = (float)(1.0 - dVar28);
  *(float *)((int)puVar10 + 0x74) = fVar2;
  fVar2 = -3.1415925 - fVar8;
  if ((-3.1415925 - fVar8) - fVar4 < 0.0) {
    fVar2 = fVar4;
  }
  uVar20 = (ulonglong)(*(uint *)(puVar10 + 0xf) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar10 + 0x74) >> 0x1d) & 4;
  fVar8 = fVar2 * fVar2;
  dVar26 = ABS((double)*(float *)(puVar10 + 0xe));
  if (*(float *)(puVar10 + 0xf) - 0.0 < 0.0) {
    dVar26 = dVar28;
  }
  fVar9 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar20 << 2));
  fVar5 = fVar8 * fVar8 * fVar2;
  fVar3 = fVar8 * fVar5;
  fVar4 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
  dVar28 = ABS((double)*(float *)((int)puVar10 + 0x74));
  if (*(float *)(puVar10 + 0xf) - 0.0 < 0.0) {
    dVar28 = dVar29;
  }
  if (0.0 < dVar26) {
    lVar23 = 2;
    fVar6 = (float)(dVar28 - dVar26) / (float)(dVar28 + dVar26);
    fVar7 = fVar6 * fVar6;
    *(float *)(puVar10 + 0x14) = fVar6;
    *(float *)((int)puVar10 + 0xa4) = fVar6;
    *(float *)(puVar10 + 0x15) = fVar6;
    *(float *)((int)puVar10 + 0xac) = fVar6;
    lVar22 = uVar16 - 0x210;
    fVar6 = fVar7 * fVar7;
    lVar17 = uVar16 - 0x180;
    lVar19 = uVar16 - 0x170;
    *(float *)((int)puVar10 + 0xa4) = *(float *)((int)puVar10 + 0xa4) * fVar7;
    *(float *)(puVar10 + 0x15) = *(float *)(puVar10 + 0x15) * fVar6;
    *(float *)((int)puVar10 + 0xac) = *(float *)((int)puVar10 + 0xac) * fVar6 * fVar7;
    do {
      *(float *)((int)lVar22 + 0xa0) = *(float *)((int)lVar22 + 0x90) * fVar6 * fVar6;
      iVar11 = (int)lVar17;
      lVar22 = lVar22 + 8;
      lVar17 = lVar17 + 8;
      *(float *)((int)lVar19 + 4) = *(float *)(iVar11 + 4) * fVar6 * fVar6;
      lVar19 = lVar19 + 8;
      lVar23 = lVar23 + -1;
    } while (lVar23 != 0);
    lVar23 = 4;
    lVar22 = uVar16 - 0x180;
    pfVar21 = (float *)&DAT_007358e0;
    lVar17 = lVar18;
    lVar19 = lVar22;
    do {
      fVar6 = *pfVar21;
      fVar7 = pfVar21[1];
      pfVar21 = pfVar21 + 2;
      *(float *)((int)lVar17 + 0xa0) = *(float *)((int)lVar17 + 0xa0) * fVar6;
      lVar17 = lVar17 + 8;
      *(float *)((int)lVar19 + 4) = *(float *)((int)lVar19 + 4) * fVar7;
      lVar19 = lVar19 + 8;
      lVar23 = lVar23 + -1;
    } while (lVar23 != 0);
    lVar17 = 2;
    do {
      iVar11 = (int)lVar18;
      iVar12 = (int)lVar22;
      lVar18 = lVar18 + 0x10;
      lVar22 = lVar22 + 0x10;
      dVar27 = (double)((float)(dVar27 + (double)*(float *)(iVar11 + 0xa0)) + *(float *)(iVar12 + 4)
                        + *(float *)(iVar12 + 8) + *(float *)(iVar12 + 0xc));
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
    dVar27 = (double)((float)(dVar27 + 0.7853981852531433) * fVar9 + fVar4);
  }
  fVar4 = (float)(dVar27 + 1.570796251296997);
  fVar6 = fVar13 - fVar14;
  DAT_00735d50 = ((DAT_00735fe0 - fVar15) * (float)ViewContext.pad_1C4[0xc]) / fVar6;
  fVar9 = 3.1415925 - fVar4;
  if (fVar4 - (3.1415925 - fVar4) < 0.0) {
    fVar9 = fVar4;
  }
  ViewContext.fog1 = (fVar15 * fVar13 - DAT_00735fe0 * fVar14) / fVar6;
  fVar13 = -3.1415925 - fVar4;
  if ((-3.1415925 - fVar4) - fVar9 < 0.0) {
    fVar13 = fVar9;
  }
  fVar4 = fVar13 * fVar13;
  fVar9 = fVar4 * fVar4 * fVar13;
  fVar7 = fVar4 * fVar9;
  ViewContext.pad_1C4[6] = (u32)(float)(1.0 / (double)(float)ViewContext.pad_1C4[4]);
  ViewContext.pad_1C4[5] = (u32)(float)(1.0 / (double)(float)ViewContext.pad_1C4[3]);
  ViewContext.pad_1C4[9] =
       (u32)(((1.0 / (fVar8 * fVar3 * 2.601887e-06 +
                     fVar3 * -0.0001980741 +
                     fVar5 * 0.0083330255 + fVar8 * fVar2 * -0.16666657 + fVar2)) /
              (float)ViewContext.pad_1C4[7] +
             (1.0 / (fVar4 * fVar7 * 2.601887e-06 +
                    fVar7 * -0.0001980741 +
                    fVar9 * 0.0083330255 + fVar4 * fVar13 * -0.16666657 + fVar13)) /
             (float)ViewContext.pad_1C4[8]) * 0.5);
  fRam0095d24c = ViewContext.yradpad;
  fRam0095d248 = ViewContext.xradpad;
  fRam0095d244 = ViewContext.yratio;
  _DAT_0095d240 = ViewContext.xratio;
  DAT_0095d270 = (float)ViewContext.pad_1C4[0xb];
  DAT_0095d274 = (float)ViewContext.pad_1C4[0xc];
  ViewContext.fogMult = (DAT_00735fe0 - fVar15) / (fVar6 * 0.0009765625);
  DAT_00735d54 = DAT_00735fe0;
  DAT_00735fe4 = DAT_00735d58;
  DAT_00736030 = DAT_00735fe0;
  DAT_00736034 = DAT_00735d58;
  DAT_00735fdc = 0x437effff;
  DAT_0073602c = 0x437effff;
  ViewContext.fogAdd = -(fVar14 * 0.0009765625 * ViewContext.fogMult - fVar15);
  DAT_00735fd8 = DAT_00735d50;
  DAT_00736028 = DAT_00735d50;
  DAT_00737c70 = DAT_00735d50;
  DAT_0073adf0 = DAT_00735d50;
  ViewContext.perspScale = DAT_00735d50;
  DAT_0095d250 = (float)ViewContext.pad_1C4[3];
  DAT_0095d254 = (float)ViewContext.pad_1C4[4];
  DAT_0095d258 = (float)ViewContext.pad_1C4[5];
  DAT_0095d25c = (float)ViewContext.pad_1C4[6];
  DAT_0095d260 = (float)ViewContext.pad_1C4[7];
  DAT_0095d264 = (float)ViewContext.pad_1C4[8];
  DAT_0095d268 = (float)ViewContext.pad_1C4[9];
  DAT_00e574e0 = DAT_00735d50;
  ____Draw_SetupFogTable();
  DAT_00e572d0 = 0x361fc873;
  DAT_00e572d4 = 0xb61fc873;
  DAT_00e572d8 = 0x3f000000;
  dVar28 = (double)ViewContext.nearClip;
  dVar26 = (double)ViewContext.farClip;
  DAT_00e572dc = ViewContext.xpix / (float)((double)ViewContext.xratio * 210000.0);
  ViewContext.fMtx.forward.y = 0.0;
  ViewContext.fMtx.forward.z = 0.0;
  ViewContext.fMtx.forward.w = 0.0;
  ViewContext.fMtx.right.x = 0.0;
  ViewContext.fMtx.right.z = 0.0;
  ViewContext.fMtx.right.w = 0.0;
  ViewContext.fMtx.up.x = 0.0;
  ViewContext.fMtx.up.y = 0.0;
  ViewContext.fMtx.forward.x = ViewContext.xpix / (float)((double)ViewContext.xratio * dVar28);
  ViewContext.fMtx.right.y = ViewContext.ypix / (float)((double)ViewContext.yratio * dVar28);
  fVar8 = (float)(dVar28 * (double)(float)(dVar26 - dVar28));
  dVar27 = -8388080.0;
  ViewContext.fMtx.position.x = 0.0;
  ViewContext.fMtx.position.y = 0.0;
  ViewContext.fMtx.up.w = (float)(dVar29 / dVar28) * ViewContext.perspScale;
  ViewContext.fMtx.up.z = ((float)(dVar26 + dVar28) / fVar8) * -8.38808e+06;
  ViewContext.fMtx.position.w = 0.0;
  ViewContext.fMtx.position.z =
       ((float)((double)(float)(dVar28 * -2.0) * dVar26) / fVar8) * -8.38808e+06;
  fastfunc::FastMemCopy32(0x95d080,0x95d040,0x40);
  ViewContext.nfMtx.up.w = (float)(dVar29 / (double)ViewContext.nearClip);
  fastfunc::FastMemCopy32(0x95d0c0,0x95d080,0x40);
  auVar31 = ZEXT416(0xffffffff);
  auVar35 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
  auVar31 = ZEXT416(0xffffffff);
  auVar37 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
  auVar31 = ZEXT416(0xffffffff);
  auVar42 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
  auVar31 = ZEXT416(0xffffffff);
  auVar39 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
  auVar36 = vectorShiftLeftIntegerWord(auVar35,auVar35);
  auVar30 = loadVectorLeftIndexed(0x208,0x95cf80);
  auVar31 = loadVectorLeftIndexed(0x44,0x66810);
  auVar33 = loadVectorLeftIndexed(0x20c,0x95cf80);
  auVar35 = vectorReciprocalEstimateFloatingPoint(auVar30);
  auVar34 = vectorReciprocalEstimateFloatingPoint(auVar33);
  auVar31 = auVar31 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar32 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
  auVar37 = vectorShiftLeftIntegerWord(auVar37,auVar37);
  auVar39 = vectorShiftLeftIntegerWord(auVar39,auVar39);
  auVar31 = ZEXT416(0xffffffff);
  auVar53 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
  auVar31 = vectorNegativeMultiplySubtractFloatingPoint(auVar35,auVar30,auVar32);
  auVar40 = vectorNegativeMultiplySubtractFloatingPoint(auVar34,auVar33,auVar32);
  auVar36 = vectorMultiplyAddFloatingPoint(auVar35,auVar31,auVar36);
  auVar34 = vectorMultiplyAddFloatingPoint(auVar34,auVar40,auVar37);
  auVar38 = loadVectorLeftIndexed(0x210,0x95cf80);
  auVar37 = vectorShiftLeftIntegerWord(auVar42,auVar42);
  auVar40 = vectorReciprocalEstimateFloatingPoint(auVar38);
  auVar31 = ZEXT416(0xffffffff);
  auVar42 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
  auVar45 = loadVectorLeftIndexed(0xc0,0x95cf80);
  auVar46 = loadVectorLeftIndexed(0x140,0x95cf80);
  auVar35 = vectorReciprocalEstimateFloatingPoint(auVar45);
  auVar43 = vectorNegativeMultiplySubtractFloatingPoint(auVar36,auVar30,auVar32);
  auVar31 = vectorNegativeMultiplySubtractFloatingPoint(auVar34,auVar33,auVar32);
  auVar41 = vectorShiftLeftIntegerWord(auVar42,auVar42);
  auVar47 = vectorNegativeMultiplySubtractFloatingPoint(auVar40,auVar38,auVar32);
  auVar36 = vectorMultiplyAddFloatingPoint(auVar36,auVar43,auVar39);
  auVar34 = vectorMultiplyAddFloatingPoint(auVar34,auVar31,auVar37);
  auVar31 = ZEXT416(0xffffffff);
  auVar42 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
  auVar48 = vectorNegativeMultiplySubtractFloatingPoint(auVar35,auVar45,auVar32);
  auVar37 = loadVectorLeftIndexed(0xd4,0x95cf80);
  auVar31 = ZEXT416(0xffffffff);
  auVar39 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
  auVar49 = vectorReciprocalEstimateFloatingPoint(auVar37);
  auVar43 = vectorShiftLeftIntegerWord(auVar42,auVar42);
  auVar31 = ZEXT416(0xffffffff);
  auVar44 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
  auVar42 = vectorShiftLeftIntegerWord(auVar39,auVar39);
  auVar50 = loadVectorLeftIndexed(0x154,0x95cf80);
  auVar43 = vectorMultiplyAddFloatingPoint(auVar40,auVar47,auVar43);
  auVar31 = ZEXT416(0xffffffff);
  auVar31 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
  auVar40 = vectorNegativeMultiplySubtractFloatingPoint(auVar36,auVar30,auVar32);
  auVar47 = vectorShiftLeftIntegerWord(auVar44,auVar44);
  auVar44 = vectorNegativeMultiplySubtractFloatingPoint(auVar34,auVar33,auVar32);
  auVar31 = vectorShiftLeftIntegerWord(auVar31,auVar31);
  auVar39 = vectorMultiplyAddFloatingPoint(auVar35,auVar48,auVar31);
  auVar31 = ZEXT416(0xffffffff);
  auVar35 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
  auVar48 = vectorNegativeMultiplySubtractFloatingPoint(auVar43,auVar38,auVar32);
  auVar40 = vectorMultiplyAddFloatingPoint(auVar36,auVar40,auVar41);
  auVar42 = vectorMultiplyAddFloatingPoint(auVar34,auVar44,auVar42);
  auVar41 = vectorShiftLeftIntegerWord(auVar53,auVar53);
  auVar36 = vectorNegativeMultiplySubtractFloatingPoint(auVar49,auVar37,auVar32);
  auVar31 = ZEXT416(0xffffffff);
  auVar31 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
  auVar53 = loadVectorLeftIndexed(0x200,0x95cf80);
  auVar35 = vectorShiftLeftIntegerWord(auVar35,auVar35);
  auVar54 = vectorReciprocalEstimateFloatingPoint(auVar53);
  auVar34 = vectorShiftLeftIntegerWord(auVar31,auVar31);
  auVar44 = vectorMultiplyAddFloatingPoint(auVar43,auVar48,auVar35);
  auVar31 = ZEXT416(0xffffffff);
  auVar31 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
  auVar46 = vectorMultiplyAddFloatingPoint(auVar40,auVar46,auVar47);
  auVar35 = auVar40 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar47 = vectorMultiplyAddFloatingPoint(auVar42,auVar50,auVar41);
  auVar48 = vectorNegativeMultiplySubtractFloatingPoint(auVar39,auVar45,auVar32);
  auVar43 = vectorMultiplyAddFloatingPoint(auVar49,auVar36,auVar34);
  auVar49 = vectorShiftLeftIntegerWord(auVar31,auVar31);
  auVar41 = loadVectorLeftIndexed(0x204,0x95cf80);
  auVar31 = ZEXT416(0xffffffff);
  auVar34 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
  auVar31 = ZEXT416(0xffffffff);
  auVar31 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
  ViewContext.pad_1B0[2] = (u32)(float)(dVar27 / (double)ViewContext.fMtx.up.z);
  auVar36 = auVar42 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar50 = vectorShiftLeftIntegerWord(auVar34,auVar34);
  auVar51 = vectorShiftLeftIntegerWord(auVar31,auVar31);
  auVar31 = auVar46 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar34 = auVar47 >> 0x60 & (undefined1  [16])0xffffffff;
  ViewContext.hMtx.forward.x =
       (float)storeVectorElementWordIndexed
                        (auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60,0x140,
                         0x95cf80);
  ViewContext.hMtx.right.y =
       (float)storeVectorElementWordIndexed
                        (auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60,0x154,
                         0x95cf80);
  auVar31 = ZEXT416(0xffffffff);
  auVar31 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
  auVar34 = vectorMultiplyAddFloatingPoint(auVar39,auVar48,auVar49);
  auVar48 = vectorReciprocalEstimateFloatingPoint(auVar41);
  auVar47 = vectorNegativeMultiplySubtractFloatingPoint(auVar54,auVar53,auVar32);
  auVar49 = vectorNegativeMultiplySubtractFloatingPoint(auVar44,auVar38,auVar32);
  auVar39 = vectorShiftLeftIntegerWord(auVar31,auVar31);
  auVar46 = vectorNegativeMultiplySubtractFloatingPoint(auVar43,auVar37,auVar32);
  ViewContext.pad_180[0] =
       storeVectorElementWordIndexed
                 (auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,0x180,0x95cf80);
  auVar31 = ZEXT416(0xffffffff);
  auVar52 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
  ViewContext.pad_180[1] =
       storeVectorElementWordIndexed
                 (auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60,0x184,0x95cf80);
  ViewContext.hMtx.up.z = ViewContext.hMtx.up.z * -1.1921679e-07;
  ViewContext.hMtx.position.z = ViewContext.hMtx.position.z * -1.1921679e-07;
  ViewContext.pad_180[2] = 0xb4000210;
  auVar45 = vectorNegativeMultiplySubtractFloatingPoint(auVar34,auVar45,auVar32);
  auVar47 = vectorMultiplyAddFloatingPoint(auVar54,auVar47,auVar39);
  auVar44 = vectorMultiplyAddFloatingPoint(auVar44,auVar49,auVar50);
  auVar49 = vectorNegativeMultiplySubtractFloatingPoint(auVar48,auVar41,auVar32);
  auVar31 = ZEXT416(0xffffffff);
  auVar35 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
  auVar43 = vectorMultiplyAddFloatingPoint(auVar43,auVar46,auVar51);
  auVar31 = ZEXT416(0xffffffff);
  auVar51 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
  auVar36 = vectorShiftLeftIntegerWord(auVar52,auVar52);
  auVar31 = ZEXT416(0xffffffff);
  auVar39 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
  auVar31 = vectorShiftLeftIntegerWord(auVar35,auVar35);
  auVar35 = auVar30 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar50 = vectorShiftLeftIntegerWord(auVar39,auVar39);
  auVar46 = vectorMultiplyAddFloatingPoint(auVar34,auVar45,auVar36);
  auVar39 = vectorNegativeMultiplySubtractFloatingPoint(auVar47,auVar53,auVar32);
  auVar36 = auVar44 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar45 = vectorMultiplyAddFloatingPoint(auVar48,auVar49,auVar31);
  auVar34 = vectorNegativeMultiplySubtractFloatingPoint(auVar43,auVar37,auVar32);
  auVar31 = ZEXT416(0xffffffff);
  auVar37 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
  auVar31 = auVar33 >> 0x60 & (undefined1  [16])0xffffffff;
  ViewContext.pad_180[3] =
       storeVectorElementWordIndexed
                 (auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60,0x18c,0x95cf80);
  auVar36 = vectorShiftLeftIntegerWord(auVar37,auVar37);
  auVar37 = vectorShiftLeftIntegerWord(auVar51,auVar51);
  auVar46 = vectorMultiplyAddFloatingPoint(auVar46,auVar30,auVar50);
  auVar47 = vectorMultiplyAddFloatingPoint(auVar47,auVar39,auVar36);
  ViewContext.fontClipScale.x =
       (float)storeVectorElementWordIndexed
                        (auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,400,0x95cf80)
  ;
  auVar36 = vectorNegativeMultiplySubtractFloatingPoint(auVar45,auVar41,auVar32);
  auVar37 = vectorMultiplyAddFloatingPoint(auVar43,auVar34,auVar37);
  ViewContext.fontClipScale.y =
       (float)storeVectorElementWordIndexed
                        (auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60,0x194,
                         0x95cf80);
  auVar31 = ZEXT416(0xffffffff);
  auVar35 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
  auVar31 = ZEXT416(0xffffffff);
  auVar34 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
  auVar31 = ZEXT416(0xffffffff);
  auVar43 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
  auVar31 = auVar38 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar49 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
  auVar31 = vectorShiftLeftIntegerWord(auVar35,auVar35);
  auVar39 = vectorShiftLeftIntegerWord(auVar34,auVar34);
  ViewContext.fontClipScale.z = -8.38808e+06;
  auVar35 = auVar46 >> 0x60 & (undefined1  [16])0xffffffff;
  ViewContext.fontClipScale.w = (float)storeVectorElementWordIndexed(auVar49,0x19c,0x95cf80);
  auVar34 = vectorMultiplyAddFloatingPoint(auVar45,auVar36,auVar31);
  auVar36 = vectorMultiplyAddFloatingPoint(auVar37,auVar33,auVar39);
  auVar31 = ZEXT416(0xffffffff);
  auVar39 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
  auVar46 = vectorNegativeMultiplySubtractFloatingPoint(auVar47,auVar53,auVar32);
  auVar37 = vectorShiftLeftIntegerWord(auVar43,auVar43);
  ViewContext.pad_1B0[0] =
       storeVectorElementWordIndexed
                 (auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,0x1b0,0x95cf80);
  auVar31 = ZEXT416(0xffffffff);
  auVar31 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
  auVar45 = vectorShiftLeftIntegerWord(auVar39,auVar39);
  auVar48 = loadVectorLeftIndexed(0x214,0x95cf80);
  auVar43 = vectorShiftLeftIntegerWord(auVar31,auVar31);
  auVar35 = auVar48 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar39 = vectorNegativeMultiplySubtractFloatingPoint(auVar34,auVar41,auVar32);
  auVar36 = auVar36 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar32 = vectorMultiplyAddFloatingPoint(auVar47,auVar46,auVar37);
  auVar31 = ZEXT416(0xffffffff);
  auVar31 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
  auVar37 = vectorShiftLeftIntegerWord(auVar31,auVar31);
  ViewContext.pad_1B0[1] =
       storeVectorElementWordIndexed
                 (auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60,0x1b4,0x95cf80);
  ViewContext.pad_1B0[3] = storeVectorElementWordIndexed(auVar49,0x1bc,0x95cf80);
  ViewContext.hvdf[0] = 2048.0;
  ViewContext.hvdf[1] = 2048.0;
  auVar36 = vectorMultiplyAddFloatingPoint(auVar34,auVar39,auVar45);
  ViewContext.hvdf[3] =
       (float)storeVectorElementWordIndexed
                        (auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,0x1ac,
                         0x95cf80);
  ViewContext.hvdf[2] = 8388112.0;
  auVar34 = vectorMultiplyAddFloatingPoint(auVar32,auVar30,auVar43);
  auVar31 = auVar38 >> 0x60 & (undefined1  [16])0xff;
  auVar39 = auVar31 | auVar31 << 8 | auVar31 << 0x10 | auVar31 << 0x18 | auVar31 << 0x20 |
            auVar31 << 0x28 | auVar31 << 0x30 | auVar31 << 0x38 | auVar31 << 0x40 | auVar31 << 0x48
            | auVar31 << 0x50 | auVar31 << 0x58 | auVar31 << 0x60 | auVar31 << 0x68 |
            auVar31 << 0x70 | auVar31 << 0x78;
  auVar36 = vectorMultiplyAddFloatingPoint(auVar36,auVar33,auVar37);
  auVar31 = auVar34 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar32 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
  ViewContext.guardX = (float)storeVectorElementWordIndexed(auVar32,0x1c0,0x95cf80);
  auVar31 = auVar36 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar37 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
  ViewContext.pad_1C4[0] = storeVectorElementWordIndexed(auVar37,0x1c4,0x95cf80);
  ViewContext.pad_1C4[1] = 0x3f800000;
  ViewContext.pad_1C4[2] = 0x3f800000;
  ViewContext.pad_00[0]._0_1_ = SUB41(ViewContext.fogFarIntensity,0);
  ViewContext.pad_00[0]._1_1_ = 0;
  ViewContext.pad_00[0]._2_1_ = 0xe;
  ViewContext.pad_00[0]._3_1_ = 0;
  auVar35[0] = ViewContext.field_40.up.x._0_1_;
  auVar35[1] = ViewContext.field_40.up.x._1_1_;
  auVar35[2] = ViewContext.field_40.up.x._2_1_;
  auVar35[3] = ViewContext.field_40.up.x._3_1_;
  auVar35._4_4_ = ViewContext.field_40.up.y;
  auVar35._8_4_ = ViewContext.field_40.up.z;
  auVar35._12_4_ = ViewContext.field_40.up.w;
  ViewContext.field_40.up.x._0_1_ = storeVectorElementByteIndexed(auVar39,0x60,0x95cf80);
  ViewContext.field_40.up.x._1_1_ = 0;
  ViewContext.field_40.up.x._2_1_ = 0x12;
  ViewContext.field_40.up.x._3_1_ = 0;
  ViewContext.field_40.position.x._0_1_ = storeVectorElementByteIndexed(auVar39,0x70,0x95cf80);
  ViewContext.field_40.position.x._1_1_ = 0;
  ViewContext.field_40.position.x._2_1_ = 0x12;
  ViewContext.field_40.position.x._3_1_ = 0;
  ViewContext.pad_80[0]._0_1_ = storeVectorElementByteIndexed(auVar39,0x80,0x95cf80);
  ViewContext.pad_80[0]._1_1_ = 0;
  ViewContext.pad_80[0]._2_1_ = 0x41;
  ViewContext.pad_80[0]._3_1_ = 0;
  ViewContext.pad_80[4]._0_1_ = storeVectorElementByteIndexed(auVar39,0x90,0x95cf80);
  ViewContext.pad_80[4]._1_1_ = 0;
  ViewContext.pad_80[4]._2_1_ = 0x41;
  ViewContext.pad_80[4]._3_1_ = 0;
  auVar31 = loadVectorLeftIndexed(0x4c,0x66810);
  auVar31 = auVar31 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar31 = vectorPermute(auVar38,auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60,
                          _DAT_00066860);
  ViewContext.pad_00._16_16_ = vectorPermute(auVar31,auVar35,_DAT_00066870);
  auVar31 = loadVectorLeftIndexed(8,0x66810);
  auVar35 = vectorPermute(auVar34,auVar36,_DAT_00066880);
  auVar31 = auVar31 >> 0x60 & (undefined1  [16])0xffffffff;
  _DAT_00735cf0 =
       vectorPermute(auVar35,auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60,
                     _DAT_00066890);
  auVar31 = loadVectorLeftIndexed(0x48,0x66810);
  auVar31 = auVar31 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar36 = vectorPermute(auVar40,auVar42,_DAT_000668a0);
  auVar35 = vectorPermute(auVar30,auVar33,_DAT_000668a0);
  auVar31 = vectorPermute(auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60,auVar44,
                          _DAT_000668a0);
  _DAT_00735db0 = vectorPermute(auVar36,auVar31,_DAT_00066890);
  auVar31 = loadVectorLeftIndexed(0x3c,0x66810);
  auVar31 = auVar31 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar31 = vectorPermute(auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60,auVar38,
                          _DAT_000668a0);
  _DAT_00735ce0 = (Vec4)vectorPermute(auVar35,auVar31,_DAT_00066890);
  _DAT_00735cd0 = (Vec4)vectorPermute(_DAT_000668b0,auVar48,_DAT_000668c0);
  DAT_00735de0 = storeVectorElementWordIndexed(auVar32,0xa0,0x735d40);
  DAT_00735de4 = storeVectorElementWordIndexed(auVar37,0xa4,0x735d40);
  _DAT_00735da0 = _DAT_00735cd0;
  _DAT_00735dc0 = _DAT_00735ce0;
  _DAT_00736040 = _DAT_00735ce0;
  _DAT_00736050 = _DAT_00735cd0;
  ViewContext.pad_00._32_16_ = _DAT_00735cf0;
  ViewContext.pad_00._48_16_ = _DAT_00735db0;
  ViewContext.field_40.forward = _DAT_00735ce0;
  ViewContext.field_40.right = _DAT_00735cd0;
  RebuildSharedWaveTables();
  return;
}



//==== 000678d8  ns=draw  size=0xec
// sig: undefined UpdateFog(void)
// callers(5): 00011648 boot::LoadGameplay; 000627d0 debug::UpdateDebugSelections; 000dcf58 loaders::NAVG_LoadFile; 0013b838 pause::UpdatePause; 0013d8a0 pause::FrontEnd_UpdateMenu
// callees(1): 000668d0 draw::UpdateViewContext

void draw::UpdateFog(void)

{
  byte g;
  byte b;
  byte r;
  
  if (GameCamera.camUnderWater == 0) {
    PartClipDist = 0x1f4000;
    r = levelFog.r;
    g = levelFog.g;
    b = levelFog.b;
    ViewContext.fogNearDist = LevelFogNearDist;
    ViewContext.fogFarDist = LevelFogFarDist;
    ViewContext.fogNearIntensity = LevelFogNearIntensity;
    ViewContext.fogFarIntensity = LevelFogFarIntensity;
  }
  else {
    PartClipDist = 0x40000;
    r = WaterFog.r;
    g = WaterFog.g;
    b = WaterFog.b;
    ViewContext.fogNearDist = WaterFogNearDist;
    ViewContext.fogFarDist = WaterFogFarDist;
    ViewContext.fogNearIntensity = WaterFogNearIntensity;
    ViewContext.fogFarIntensity = WaterFogFarIntensity;
  }
  ViewContext.fogR = (int)r;
  ViewContext.fogG = (int)g;
  ViewContext.fogB = (int)b;
  UpdateViewContext();
  LevelFogMode = 0;
  return;
}



//==== 000679c4  ns=draw  size=0xe4
// sig: char * ParseOcclGrid(int x, int y, int z)
// callers(2): 00067ab0 draw::GetOcclGridFromPair; 00067b90 draw::BuildOcclVisibility
// callees(0): 

char * draw::ParseOcclGrid(int x,int y,int z)

{
  int iVar1;
  ushort *puVar2;
  
                    /* WARNING: Load size is inaccurate */
  iVar1 = z - (uint)*(ushort *)((int)OcclGrid + 4);
  if (((-1 < iVar1) && (iVar1 < (int)(uint)*(ushort *)((int)OcclGrid + 6))) &&
     (iVar1 = *(int *)((int)OcclGrid + iVar1 * 4 + 8), iVar1 != 0)) {
    puVar2 = (ushort *)((int)OcclGrid + iVar1);
    iVar1 = y - (uint)*puVar2;
    if (((-1 < iVar1) && (iVar1 < (int)(uint)puVar2[1])) && (*(int *)(puVar2 + iVar1 * 2 + 2) != 0))
    {
      puVar2 = (ushort *)((int)OcclGrid + *(int *)(puVar2 + iVar1 * 2 + 2));
      iVar1 = x - (uint)*puVar2;
      if (((-1 < iVar1) && (iVar1 < (int)(uint)puVar2[1])) && (puVar2[iVar1 + 2] != 0xffff)) {
        return (char *)((int)OcclGrid + (uint)puVar2[iVar1 + 2] * 0x80 + *OcclGrid);
      }
    }
  }
  return (char *)0x0;
}



//==== 00067ab0  ns=draw  size=0xd0
// sig: char * GetOcclGridFromPair(int x0, int y0, int z0, int x1, int y1, int z1, float interp)
// callers(0): 
// callees(1): 000679c4 draw::ParseOcclGrid

char * draw::GetOcclGridFromPair(int x0,int y0,int z0,int x1,int y1,int z1,float interp)

{
  char *pcVar1;
  
  if (0.5 <= interp) {
    pcVar1 = ParseOcclGrid(x1,y1,z1);
    if (pcVar1 == (char *)0x0) {
      pcVar1 = ParseOcclGrid(x0,y0,z0);
    }
  }
  else {
    pcVar1 = ParseOcclGrid(x0,y0,z0);
    if (pcVar1 == (char *)0x0) {
      pcVar1 = ParseOcclGrid(x1,y1,z1);
    }
  }
  return pcVar1;
}



//==== 00067b90  ns=draw  size=0x558
// sig: void BuildOcclVisibility(void)
// callers(2): 000680e8 draw::UpdateOcclusion; 000684a4 draw::UpdateOcclusion
// callees(7): 000679c4 draw::ParseOcclGrid; 005001fc fastfunc::FastMemSet; 00500250 fastfunc::FastMemSetZero; 005002cc fastfunc::FastMemCopy; 005003c4 fastfunc::FastMemOr16; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void draw::BuildOcclVisibility(void)

{
  undefined8 x;
  undefined8 y;
  int z;
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  int y_00;
  undefined *puVar4;
  double dVar5;
  double dVar6;
  double OCCL_SCALE;
  int x_00;
  
  OCCL_SCALE = 0.25;
  x = fastfunc::FastDoubleToInt((double)(GameCamera.posX * 0.25));
  y = fastfunc::FastDoubleToInt((double)(float)((double)GameCamera.posY * OCCL_SCALE));
  z = fastfunc::FastDoubleToInt((double)(float)((double)GameCamera.posZ * OCCL_SCALE));
  x_00 = (int)x;
  y_00 = (int)y;
  pcVar1 = ParseOcclGrid(x_00,y_00,z);
  if (pcVar1 == (char *)0x0) {
    OcclInvalidGridGp = 1;
    puVar4 = (undefined *)0x0;
    if (OcclMode == 0) {
      dVar5 = (double)fastfunc::FastIntToDouble(x);
      dVar6 = 0.5;
      if (0.5 <= (float)((double)GameCamera.posX * OCCL_SCALE - dVar5)) {
        pcVar1 = ParseOcclGrid(x_00 + 1,y_00,z);
        if (pcVar1 == (char *)0x0) {
          pcVar1 = ParseOcclGrid(x_00 + -1,y_00,z);
        }
      }
      else {
        pcVar1 = ParseOcclGrid(x_00 + -1,y_00,z);
        if (pcVar1 == (char *)0x0) {
          pcVar1 = ParseOcclGrid(x_00 + 1,y_00,z);
        }
      }
      dVar5 = (double)fastfunc::FastIntToDouble(y);
      if (dVar6 <= (double)(float)((double)GameCamera.posY * OCCL_SCALE - dVar5)) {
        pcVar2 = ParseOcclGrid(x_00,y_00 + 1,z);
        if (pcVar2 == (char *)0x0) {
          pcVar2 = ParseOcclGrid(x_00,y_00 + -1,z);
        }
      }
      else {
        pcVar2 = ParseOcclGrid(x_00,y_00 + -1,z);
        if (pcVar2 == (char *)0x0) {
          pcVar2 = ParseOcclGrid(x_00,y_00 + 1,z);
        }
      }
      dVar5 = (double)fastfunc::FastIntToDouble();
      if (dVar6 <= (double)(float)((double)GameCamera.posZ * OCCL_SCALE - dVar5)) {
        pcVar3 = ParseOcclGrid(x_00,y_00,z + 1);
        if (pcVar3 == (char *)0x0) {
          pcVar3 = ParseOcclGrid(x_00,y_00,z + -1);
        }
      }
      else {
        pcVar3 = ParseOcclGrid(x_00,y_00,z + -1);
        if (pcVar3 == (char *)0x0) {
          pcVar3 = ParseOcclGrid(x_00,y_00,z + 1);
        }
      }
      if (((pcVar1 != (char *)0x0) || (pcVar2 != (char *)0x0)) || (pcVar3 != (char *)0x0)) {
        puVar4 = OcclVisibilityMerged;
        fastfunc::FastMemSetZero(OcclVisibilityMerged,0x80);
        if (pcVar1 != (char *)0x0) {
          fastfunc::FastMemOr16(OcclVisibilityMerged,OcclVisibilityMerged,pcVar1,0x80);
        }
        if (pcVar2 != (char *)0x0) {
          fastfunc::FastMemOr16(OcclVisibilityMerged,OcclVisibilityMerged,pcVar2,0x80);
        }
        if (pcVar3 != (char *)0x0) {
          fastfunc::FastMemOr16(OcclVisibilityMerged,OcclVisibilityMerged,pcVar3,0x80);
        }
        OcclPreviousGrid = OcclVisibilityMerged;
        fastfunc::FastMemCopy(OcclVisibility,OcclVisibilityMerged,0x80);
      }
    }
    if (puVar4 == (undefined *)0x0) {
      if (OcclMode < 1) {
        if (-1 < OcclMode) {
          if ((ControlMode == 0) && (OcclPreviousGrid != (char *)0x0)) {
            fastfunc::FastMemCopy(OcclVisibility,OcclPreviousGrid,0x80);
          }
          else {
            fastfunc::FastMemSet(OcclVisibility,0xffffffffffffffff,0x80);
          }
        }
      }
      else if (OcclMode < 2) {
        fastfunc::FastMemSet(OcclVisibility,0xffffffffffffffff,0x80);
      }
      else if (OcclMode < 3) {
        if (OcclOct == (void *)0x0) {
          if ((ControlMode == 0) && (OcclPreviousGrid != (char *)0x0)) {
            fastfunc::FastMemCopy(OcclVisibility,OcclPreviousGrid,0x80);
          }
          else {
            fastfunc::FastMemSet(OcclVisibility,0xffffffffffffffff,0x80);
          }
        }
        else {
                    /* WARNING: Load size is inaccurate */
          fastfunc::FastMemCopy
                    (OcclVisibility,
                     ZEXT48(OcclOct) +
                     ((ulonglong)(0.0 < GameCamera.posX - *OcclOct) << 2 |
                     (ulonglong)(0.0 < GameCamera.posY - *(float *)((int)OcclOct + 4)) << 1 |
                     (ulonglong)(0.0 < GameCamera.posZ - *(float *)((int)OcclOct + 8))) * 0x80 +
                     0x10 & 0xffffffff,0x80);
        }
      }
    }
  }
  else {
    OcclInvalidGridGp = 0;
    fastfunc::FastMemCopy(OcclVisibility,pcVar1,0x80);
    OcclPreviousGrid = pcVar1;
  }
  OcclVisibility[0x7f] = OcclVisibility[0x7f] | 0x80;
  return;
}



//==== 000680e8  ns=draw  size=0x6c
// sig: void UpdateOcclusion(void)
// callers(0): 
// callees(2): 00067b90 draw::BuildOcclVisibility; 005001fc fastfunc::FastMemSet

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void draw::UpdateOcclusion(void)

{
  if (OcclUpdate == 0) {
    fastfunc::FastMemSet(OcclVisibility,0xffffffffffffffff,0x80);
  }
  else if (OcclUpdate == 2) {
    BuildOcclVisibility();
  }
  *(undefined **)(DAT_00902e9c + 0x41c) = OcclVisibility;
  return;
}



//==== 00068160  ns=draw  size=0x15c
// sig: void InitViewContext(void)
// callers(5): 00011b74 boot::Load_Front_End; 00071ac0 draw::ResetHUDPass; 000d8be8 initonce::InitOnce; 00163aa0 space::SpaceTransition_LoadWad; 004d3044 FUN_004d3044
// callees(1): 00502730 fastfunc::FastIntToDouble

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void draw::InitViewContext(void)

{
  double dVar1;
  double dVar2;
  
  g_ScreenWidth = (int)g_FrameBufWidth;
  g_ScreenHalfWidth = g_ScreenWidth >> 1;
  DAT_00966b18 = g_ScreenHalfWidth * 0x10 + 0x8000;
  g_ScreenHeight = (int)g_FrameBufHeight;
  g_ScreenHalfHeight = g_ScreenHeight >> 1;
  SCREEN_PROJECTION_MAP_X = (undefined4)((0x800U - (longlong)g_ScreenHalfWidth & 0xffffffff) << 4);
  DAT_00966b1c = g_ScreenHalfHeight * 0x10 + 0x8000;
  SCREEN_PROJECTION_MAP_Y = (undefined4)((0x800U - (longlong)g_ScreenHalfHeight & 0xffffffff) << 4);
  DAT_00966b20 = *(undefined4 *)(g_viewMtxPtr + 4);
  DAT_00966b24 = *(undefined4 *)(g_viewMtxPtr + 8);
  ViewContext.nearClip = 32.0;
  ViewContext.farClip = 745472.0;
  ViewContext.xratio = 0.63;
  dVar1 = (double)fastfunc::FastIntToDouble();
  dVar2 = 0.5;
  ViewContext.xpix = (float)(dVar1 * 0.5);
  dVar1 = (double)fastfunc::FastIntToDouble(g_FrameBufHeight);
  ViewContext.ypix = (float)(dVar1 * dVar2);
  ViewContext.fogNearDist = 0.0;
  ViewContext.fogFarDist = 524288.0;
  ViewContext.fogNearIntensity = 255.0;
  ViewContext.fogFarIntensity = 0.0;
  FLOAT_0095d1c8 = 2.0;
  ViewContext.xclip = ViewContext.xpix * 4.0;
  ViewContext.yclip = (float)(dVar1 * dVar2) * 4.0;
  return;
}



//==== 000682c8  ns=draw  size=0x144
// sig: void SetUserViewContext(int width, int height, float xratio, float fogNearDist, float fogFarDist, float fogNearIntensity, float fogFarIntensity)
// callers(1): 00171d00 vendor::Vendor_SetupScreenRender
// callees(2): 000668d0 draw::UpdateViewContext; 00502730 fastfunc::FastIntToDouble

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void draw::SetUserViewContext
               (int width,int height,float xratio,float fogNearDist,float fogFarDist,
               float fogNearIntensity,float fogFarIntensity)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  dVar5 = (double)fogNearIntensity;
  dVar6 = (double)fogFarIntensity;
  dVar2 = (double)fogNearDist;
  dVar4 = (double)fogFarDist;
  g_ScreenHalfWidth = width >> 1;
  g_ScreenHalfHeight = height >> 1;
  SCREEN_PROJECTION_MAP_X = (undefined4)((0x800U - (longlong)g_ScreenHalfWidth & 0xffffffff) << 4);
  SCREEN_PROJECTION_MAP_Y = (undefined4)((0x800U - (longlong)g_ScreenHalfHeight & 0xffffffff) << 4);
  DAT_00966b18 = g_ScreenHalfWidth * 0x10 + 0x8000;
  DAT_00966b1c = g_ScreenHalfHeight * 0x10 + 0x8000;
  ViewContext.nearClip = 32.0;
  ViewContext.farClip = 524288.0;
  ViewContext.xratio = xratio;
  g_ScreenWidth = width;
  g_ScreenHeight = height;
  dVar1 = (double)fastfunc::FastIntToDouble();
  dVar3 = 0.5;
  ViewContext.xpix = (float)(dVar1 * 0.5);
  dVar1 = (double)fastfunc::FastIntToDouble(height);
  ViewContext.ypix = (float)(dVar1 * dVar3);
  ViewContext.fogNearDist = (float)dVar2;
  ViewContext.xclip = ViewContext.xpix * 4.0;
  ViewContext.yclip = ViewContext.ypix * 4.0;
  ViewContext.fogFarDist = (float)dVar4;
  ViewContext.fogNearIntensity = (float)dVar5;
  ViewContext.fogFarIntensity = (float)dVar6;
  UpdateViewContext();
  return;
}



//==== 0006840c  ns=draw  size=0x90
// sig: void ResetDrawGlobals(void)
// callers(3): 00011648 boot::LoadGameplay; 000dcf58 loaders::NAVG_LoadFile; 00163aa0 space::SpaceTransition_LoadWad
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void draw::ResetDrawGlobals(void)

{
  g_MobyFuncListCount = 0;
  g_PostDrawCount = 0;
  mobyutil::g_NumLameShadows = 0;
  g_PreDrawCount = 0;
  DAT_0095cae0 = 0;
  g_PostPreDrawCount = 0;
  DAT_0095ccf0 = 0;
  LetterBoxOn = 0;
  LetterBoxPixels = 0;
  ScreenColorEffectEnabled = 0;
  DAT_0095cf20 = 0;
  g_ScreenInsertEffect = 0;
  OcclMode = 0;
  WaterTiles = (WaterTile *)0x0;
  WaterTileBoxes = (WaterTileBox *)0x0;
  WaterTileCnt = 0;
  WaterPlaneActive = 0;
  return;
}



//==== 0006849c  ns=stub  size=0x4
// sig: undefined STUB_0006849c(void)
// callers(3): 00012ec8 boot::GameStart; 0016114c space::TransitionDraw_Space; 001744f0 vendor::Vendor_PostUpdate
// callees(0): 

void stub::STUB_0006849c(void)

{
  return;
}



//==== 000684a0  ns=stub  size=0x4
// sig: undefined STUB_000684a0(void)
// callers(3): 00012ec8 boot::GameStart; 000e0e60 main::startLevel; 00164760 space::PlaySpacePlate
// callees(0): 

void stub::STUB_000684a0(void)

{
  return;
}



//==== 000684a4  ns=draw  size=0xbc
// sig: undefined UpdateOcclusion(void)
// callers(14): 00010238 boot::PlayLogoMovie; 00010c70 boot::FrontEnd_Draw; 00012048 boot::PrepareFrontbin; 00012b0c boot::ShowSplash; 00012ccc boot::LoadAndShowSplash; 00012ec8 boot::GameStart; 00013760 boot::LoadAndShowSplashVram; 000e0e60 main::startLevel; 000e8ca0 memcard::memcard_RestoreSaveGame; 001639a8 space::DisplayLoadingScreen; 001643e0 space::PlaySpaceMovie; 00164760 space::PlaySpacePlate; 0016963c update::PlayMovieBlocking; 0016974c update::UpdateCinematic
// callees(3): 00066088 draw::ComposeCameraMatrix; 00067b90 draw::BuildOcclVisibility; 005001fc fastfunc::FastMemSet

void draw::UpdateOcclusion(char param_1)

{
  int *piVar1;
  
  piVar1 = g_viewMtxPtr;
  ComposeCameraMatrix();
  if (param_1 != '\0') {
    if (OcclUpdate == 0) {
      fastfunc::FastMemSet(OcclVisibility,0xffffffffffffffff,0x80);
    }
    else if (OcclUpdate == 2) {
      BuildOcclVisibility();
    }
    *(undefined **)(DAT_00902e9c + 0x41c) = OcclVisibility;
  }
  (*(code *)**(undefined4 **)(*piVar1 + 0x14))(piVar1);
  return;
}



//==== 00068560  ns=draw  size=0x64
// sig: undefined Render_DispatchJob(void)
// callers(14): 00010238 boot::PlayLogoMovie; 00010c70 boot::FrontEnd_Draw; 00012048 boot::PrepareFrontbin; 00012b0c boot::ShowSplash; 00012ccc boot::LoadAndShowSplash; 00012ec8 boot::GameStart; 00013760 boot::LoadAndShowSplashVram; 000e0e60 main::startLevel; 000e8ca0 memcard::memcard_RestoreSaveGame; 001639a8 space::DisplayLoadingScreen; 001643e0 space::PlaySpaceMovie; 00164760 space::PlaySpacePlate; 0016963c update::PlayMovieBlocking; 0016974c update::UpdateCinematic
// callees(1): 004eddc4 idol_draw::Spurs_FlushAndSwapQueue

void draw::Render_DispatchJob(void)

{
  idol_draw::Spurs_FlushAndSwapQueue(&DAT_01111700);
  OcclMode = 0;
  (*(code *)**(undefined4 **)(*g_viewMtxPtr + 0x18))(g_viewMtxPtr);
  return;
}



//==== 000685c4  ns=draw  size=0x1c
// sig: undefined GetEffectTex(void)
// callers(212): 00010820 boot::FrontEnd_DrawLogo; 00010c70 boot::FrontEnd_Draw; 00016940 mobyupdate_unsorted::Moby1267_DrawHud; 00054a10 camera::Camera_DrawReticule; 00054e38 camera::DrawCrosshairSprite; 000731c8 draw::DrawTexturedStrips; 00073de0 draw::DrawLavaStrips; 00074fa0 draw::ImpactSprite_Draw; 00076328 draw::???_Water_SetPassTextures; 00076580 draw::DrawWater; 000768e8 draw::???_Draw_EffectStrip_M401; 000784e8 freeze::DrawDialogText; 0007c838 help::Help_DrawIconBox; 0007c978 help::Help_Draw; 000ca72c hud::DrawFlatOverlay; 000d865c hud::Hud_DrawEffectTexLine; 000d9668 initsky::DrawSceneShipEffect; 00119028 mobyutil::MB_DrawGlowFX; 0011ef18 partproc::DrawParts; 0013c5e8 pause::DrawTVTextures; 001402c8 pause::MenuText_Draw; 00141c90 pause::DrawPauseStrings; 00144638 pause::DrawSkillPointsFrame; 0014d63c pause::Draw_GameCompletedFrame; 0015ebd0 space::Space_DrawShipEngineGlow
// callees(0): 

undefined4 draw::GetEffectTex(longlong param_1)

{
  return *(undefined4 *)(TexInfo + (int)(param_1 << 2));
}



//==== 000685e0  ns=draw  size=0x2bc
// sig: void DrawFullScreenQuad(int rgba, void * tex)
// callers(10): 0006889c draw::Sprite_DrawShape; 0006a634 draw::DrawRectOverlay; 0006a718 draw::DrawRoundedRect; 0006b1f8 draw::DrawScreenEffect; 0006b5a4 draw::DrawScreenOverlayTex; 0006b5dc draw::DrawScreenOverlay; 0006b890 draw::DrawScreenInsertEffect; 0006bb78 draw::DefaultDraw; 0006d590 draw::DrawSomeOverlay; 0006f0a0 draw::DrawTextBox
// callees(4): 004d6948 idol_draw::ResetPassState; 004d6e60 idol_draw::BindTexture; 004d86b0 FUN_004d86b0; 004deab8 FUN_004deab8

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void draw::DrawFullScreenQuad(int rgba,void *tex)

{
  uint uVar1;
  RenderingStep *pRVar2;
  undefined4 uVar3;
  
  uVar3 = g_viewMtxPtr;
  FUN_004deab8(g_viewMtxPtr,g_FrameBufWidth,g_FrameBufHeight);
  uVar1 = *(uint *)((int)tex + 0x18);
  idol_draw::BindTexture(HUD_Pass,0,tex,TexSamplerFlags);
  idol_draw::ResetPassState(HUD_Pass);
  pRVar2 = HUD_Pass;
  *HUD_Pass->command = 0x41948;
  pRVar2->command[1] =
       (rgba >> 8 & 0xffU) << 8 | (rgba >> 0x10 & 0xffU) << 0x10 | rgba & 0xff000000 | rgba & 0xff;
  pRVar2->command = pRVar2->command + 2;
  pRVar2 = HUD_Pass;
  *HUD_Pass->command = 0x400c1714;
  pRVar2->command[1] = 0;
  pRVar2->command[2] = 0;
  pRVar2->command[3] = 0;
  pRVar2->command[4] = NV4097_SET_BEGIN_END_x1;
  pRVar2->command[5] = 8;
  pRVar2->command = pRVar2->command + 6;
  pRVar2 = HUD_Pass;
  *HUD_Pass->command = 0x41904;
  pRVar2->command[1] = 0;
  pRVar2->command = pRVar2->command + 2;
  pRVar2 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_VERTEX_DATA2S_M_x1;
  pRVar2->command[1] = 0;
  pRVar2->command = pRVar2->command + 2;
  pRVar2 = HUD_Pass;
  *HUD_Pass->command = 0x41904;
  pRVar2->command[1] = uVar1 << 0x10;
  pRVar2->command = pRVar2->command + 2;
  pRVar2 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_VERTEX_DATA2S_M_x1;
  pRVar2->command[1] = 0x1a00000;
  pRVar2->command = pRVar2->command + 2;
  pRVar2 = HUD_Pass;
  *HUD_Pass->command = 0x41904;
  pRVar2->command[1] = uVar1 << 0x10 | uVar1 >> 0x10;
  pRVar2->command = pRVar2->command + 2;
  pRVar2 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_VERTEX_DATA2S_M_x1;
  pRVar2->command[1] = 0x1a00200;
  pRVar2->command = pRVar2->command + 2;
  pRVar2 = HUD_Pass;
  *HUD_Pass->command = 0x41904;
  pRVar2->command[1] = uVar1 >> 0x10;
  pRVar2->command = pRVar2->command + 2;
  pRVar2 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_VERTEX_DATA2S_M_x1;
  pRVar2->command[1] = 0x200;
  pRVar2->command = pRVar2->command + 2;
  pRVar2 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_BEGIN_END_x1;
  pRVar2->command[1] = 0;
  pRVar2->command = pRVar2->command + 2;
  FUN_004d86b0(uVar3);
  return;
}



//==== 0006889c  ns=draw  size=0x354
// sig: undefined Sprite_DrawShape(void)
// callers(23): 00010820 boot::FrontEnd_DrawLogo; 00010c70 boot::FrontEnd_Draw; 00068bf0 draw::Sprite_DrawShapeF; 00068c70 draw::FontPrintJapanese_unk2; 0006a5c4 draw::Sprite_DrawShapeWrapper; 0006a634 draw::DrawRectOverlay; 0006a718 draw::DrawRoundedRect; 0006b1f8 draw::DrawScreenEffect; 0006b890 draw::DrawScreenInsertEffect; 0006c5ec draw::FontPrintJapanese; 0006c8d0 draw::FontPrint; 0006d590 draw::DrawSomeOverlay; 0006f0a0 draw::DrawTextBox; 0013ca68 pause::DrawPauseMenu; 0013de20 pause::FrontEnd_DrawMenu; 001484a4 pause::ImageWidget_Draw; 001491f0 pause::ImageWidget_DrawWithText; 001499c4 pause::HelpControls_Draw; 0015fcb0 space::Space_DrawLoadingBanner; 0016114c space::TransitionDraw_Space; 00164760 space::PlaySpacePlate; 00172c40 vendor::Vendor_HudUpdate; 00173b60 vendor::Vendor_DrawScreen
// callees(3): 000685e0 draw::DrawFullScreenQuad; 004d6948 idol_draw::ResetPassState; 004d6e60 idol_draw::BindTexture

void draw::Sprite_DrawShape
               (RsxCmd param_1,ulonglong param_2,int param_3,longlong param_4,longlong param_5,
               longlong param_6,int param_7,longlong param_8)

{
  RsxCmd *pRVar1;
  ulonglong uVar2;
  RsxCmd RVar3;
  RsxCmd RVar4;
  RenderingStep *pRVar5;
  ulonglong in_stack_00000070;
  void *in_stack_0000007c;
  
  if (((param_1 == 0 && param_3 == 0x200) && ((int)param_2 == 0)) && ((int)param_4 == 0x1a0)) {
    DrawFullScreenQuad((RsxCmd)in_stack_00000070,in_stack_0000007c);
  }
  else {
    uVar2 = (param_8 + param_6) * 2;
    idol_draw::BindTexture(HUD_Pass,0,in_stack_0000007c,TexSamplerFlags);
    idol_draw::ResetPassState(HUD_Pass);
    pRVar5 = HUD_Pass;
    *HUD_Pass->command = 0x41948;
    pRVar1 = pRVar5->command;
    pRVar1[1] = (RsxCmd)((in_stack_00000070 >> 8 & 0xff) << 8) |
                (RsxCmd)((in_stack_00000070 >> 0x18 & 0xff) << 0x18) |
                (RsxCmd)((in_stack_00000070 >> 0x10 & 0xff) << 0x10) |
                (RsxCmd)in_stack_00000070 & 0xff;
    pRVar5->command = pRVar1 + 2;
    pRVar5 = HUD_Pass;
    *HUD_Pass->command = 0x400c1714;
    pRVar5->command[1] = 0;
    pRVar5->command[2] = 0;
    pRVar5->command[3] = 0;
    pRVar5->command[4] = NV4097_SET_BEGIN_END_x1;
    pRVar1 = pRVar5->command;
    pRVar1[5] = 8;
    pRVar5->command = pRVar1 + 6;
    pRVar5 = HUD_Pass;
    RVar3 = (RsxCmd)(param_5 << 1) & 0xfffe;
    *HUD_Pass->command = 0x41904;
    pRVar1 = pRVar5->command;
    pRVar1[1] = (RsxCmd)((param_6 << 1 & 0xfffffffeU) << 0x10) | RVar3;
    pRVar5->command = pRVar1 + 2;
    pRVar5 = HUD_Pass;
    *HUD_Pass->command = NV4097_SET_VERTEX_DATA2S_M_x1;
    pRVar1 = pRVar5->command;
    pRVar1[1] = (RsxCmd)((param_2 & 0xffffffff) << 0x10) | param_1 & 0xffff;
    pRVar5->command = pRVar1 + 2;
    pRVar5 = HUD_Pass;
    RVar4 = param_3 + param_1 & 0xffff;
    *HUD_Pass->command = 0x41904;
    pRVar1 = pRVar5->command;
    pRVar1[1] = (RsxCmd)((uVar2 & 0xfffffffe) << 0x10) | RVar3;
    pRVar5->command = pRVar1 + 2;
    pRVar5 = HUD_Pass;
    RVar3 = ((int)param_5 + param_7) * 2 & 0xfffe;
    *HUD_Pass->command = NV4097_SET_VERTEX_DATA2S_M_x1;
    pRVar1 = pRVar5->command;
    pRVar1[1] = (RsxCmd)((param_4 + param_2 & 0xffffffff) << 0x10) | param_1 & 0xffff;
    pRVar5->command = pRVar1 + 2;
    pRVar5 = HUD_Pass;
    *HUD_Pass->command = 0x41904;
    pRVar1 = pRVar5->command;
    pRVar1[1] = (RsxCmd)((uVar2 & 0xfffffffe) << 0x10) | RVar3;
    pRVar5->command = pRVar1 + 2;
    pRVar5 = HUD_Pass;
    *HUD_Pass->command = NV4097_SET_VERTEX_DATA2S_M_x1;
    pRVar1 = pRVar5->command;
    pRVar1[1] = (RsxCmd)((param_4 + param_2 & 0xffffffff) << 0x10) | RVar4;
    pRVar5->command = pRVar1 + 2;
    pRVar5 = HUD_Pass;
    *HUD_Pass->command = 0x41904;
    pRVar1 = pRVar5->command;
    pRVar1[1] = (RsxCmd)((param_6 << 1 & 0xfffffffeU) << 0x10) | RVar3;
    pRVar5->command = pRVar1 + 2;
    pRVar5 = HUD_Pass;
    *HUD_Pass->command = NV4097_SET_VERTEX_DATA2S_M_x1;
    pRVar1 = pRVar5->command;
    pRVar1[1] = (RsxCmd)((param_2 & 0xffffffff) << 0x10) | RVar4;
    pRVar5->command = pRVar1 + 2;
    pRVar5 = HUD_Pass;
    *HUD_Pass->command = NV4097_SET_BEGIN_END_x1;
    pRVar1 = pRVar5->command;
    pRVar1[1] = 0;
    pRVar5->command = pRVar1 + 2;
  }
  return;
}



//==== 00068bf0  ns=draw  size=0x78
// sig: undefined Sprite_DrawShapeF(void)
// callers(0): 
// callees(1): 0006889c draw::Sprite_DrawShape

void draw::Sprite_DrawShapeF(double param_1,double param_2,double param_3,double param_4)

{
  Sprite_DrawShape((int)param_1,(int)param_2,(int)param_3,(int)param_4);
  return;
}



//==== 00068c70  ns=draw  size=0x3e4
// sig: undefined FontPrintJapanese_unk2(void)
// callers(10): 000690e0 draw::FontPrintOptJapanese; 0006fda4 draw::FontPrint_unk; 0006fe44 draw::FontPrintScaled; 0006fee4 draw::FontPrintScaled_v2; 0006ff88 draw::FontPrintRightWithScale; 00070680 draw::FontPrintCenterScaled; 00070b00 draw::FontPrintCenterScaledMedium; 00070cb0 draw::FontPrintCenterScaledSmall; 00070e60 draw::FontPrintCenterScaledLarge; 00141c90 pause::DrawPauseStrings
// callees(2): 0006889c draw::Sprite_DrawShape; 00502730 fastfunc::FastIntToDouble

void draw::FontPrintJapanese_unk2
               (double param_1,double param_2,double param_3,undefined8 param_4,undefined8 param_5,
               undefined4 param_6,int param_7,int param_8,undefined8 param_9,undefined8 param_10,
               int param_11)

{
  int iVar1;
  double dVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  double dVar8;
  
  if (DAT_0095ee18 == 0) {
    DAT_0071ef98 = param_6;
  }
  iVar7 = 0;
  if (param_8 != 0) {
    iVar1 = (int)(param_3 * 16.0);
    dVar2 = param_3 * 24.0;
    do {
      bVar3 = *(byte *)(param_7 + iVar7);
      if (bVar3 == 0) {
        return;
      }
      if ((bVar3 < 8) || (0xf < bVar3)) {
        dVar8 = (double)fastfunc::FastIntToDouble(*(undefined1 *)(param_11 + (uint)bVar3 * 4 + 2));
        bVar3 = *(byte *)(param_7 + iVar7);
        iVar6 = (uint)bVar3 * 4;
        if (*(char *)(param_11 + iVar6 + 3) != '\0') {
          iVar4 = param_11 + (uint)bVar3 * 4;
          if (bVar3 < 0x20) {
            Sprite_DrawShape((int)param_1,(int)(dVar8 * param_3 + param_2),(int)dVar2,iVar1,
                             *(undefined1 *)(param_11 + iVar6),*(undefined1 *)(iVar4 + 1),0x18,0x10)
            ;
          }
          else {
            if ((0xbc < bVar3) && (bVar3 < 0xbf)) {
              bVar3 = *(byte *)(param_7 + iVar7 + -1);
              iVar5 = param_11 + (bVar3 + 0x80) * 4;
              Sprite_DrawShape((int)((double)(longlong)
                                             ((int)*(char *)(iVar5 + 3) -
                                             (int)*(char *)(param_11 + (uint)bVar3 * 4 + 3)) *
                                     param_3 + param_1),
                               (int)((double)(longlong)(int)*(char *)(iVar5 + 2) * param_3 + param_2
                                    ),iVar1,iVar1,*(undefined1 *)(param_11 + iVar6),
                               *(undefined1 *)(iVar4 + 1),0x10,0x10);
              param_1 = (double)(float)((double)(longlong)
                                                (int)(((int)*(char *)(iVar5 + 3) -
                                                      (int)*(char *)(param_11 +
                                                                     (uint)*(byte *)(param_7 + iVar7
                                                                                    + -1) * 4 + 3))
                                                      + ((uint)LZCOUNT(*(byte *)(param_7 + iVar7) -
                                                                       0xbe) >> 5) + 4) * param_3 +
                                       param_1);
              goto LAB_00068ffc;
            }
            if (0x20 < bVar3) {
              Sprite_DrawShape((int)param_1,(int)(dVar8 * param_3 + param_2),iVar1,iVar1,
                               *(undefined1 *)(param_11 + (uint)bVar3 * 4),
                               *(undefined1 *)(iVar4 + 1),0x10,0x10);
            }
          }
          dVar8 = (double)fastfunc::FastIntToDouble
                                    (*(undefined1 *)
                                      (param_11 + (uint)*(byte *)(param_7 + iVar7) * 4 + 3));
          param_1 = (double)(float)(dVar8 * param_3 + param_1);
        }
      }
LAB_00068ffc:
      iVar7 = iVar7 + 1;
    } while (iVar7 != param_8);
  }
  return;
}



//==== 00069058  ns=draw  size=0x7c
// sig: undefined FontLenScaledWithTableNoKern(void)
// callers(1): 00141c90 pause::DrawPauseStrings
// callees(0): 

int draw::FontLenScaledWithTableNoKern
              (double param_1,int param_2,int param_3,undefined8 param_4,int param_5)

{
  byte *pbVar1;
  int iVar2;
  double dVar3;
  
  iVar2 = 0;
  dVar3 = 0.0;
  if (param_3 != 0) {
    do {
      pbVar1 = (byte *)(param_2 + iVar2);
      if (*pbVar1 == 0) break;
      iVar2 = iVar2 + 1;
      dVar3 = (double)(float)((double)(longlong)(int)*(char *)(param_5 + (uint)*pbVar1 * 4 + 3) *
                              param_1 + dVar3);
    } while (iVar2 != param_3);
  }
  return (int)dVar3;
}



//==== 000690e0  ns=draw  size=0x5ac
// sig: undefined FontPrintOptJapanese(void)
// callers(6): 0006a510 draw::FontPrintMediumOpt; 0006ad48 draw::DrawSubtitles; 0007100c draw::FontPrintOpt; 000710b8 draw::FontPrintOptLarge; 001402c8 pause::MenuText_Draw; 00144638 pause::DrawSkillPointsFrame
// callees(1): 00068c70 draw::FontPrintJapanese_unk2

void draw::FontPrintOptJapanese
               (double param_1,undefined8 param_2,undefined4 param_3,int param_4,int param_5,
               undefined8 param_6,longlong param_7)

{
  byte bVar1;
  ushort uVar2;
  short sVar3;
  undefined4 uVar4;
  undefined2 uVar5;
  undefined1 auVar6 [16];
  ulonglong *puVar7;
  int iVar8;
  int iVar9;
  int iVar11;
  longlong lVar10;
  int iVar12;
  ulonglong uVar13;
  short sVar14;
  short sVar15;
  short sVar17;
  int iVar16;
  longlong lVar18;
  int iVar19;
  short sVar20;
  ulonglong unaff_r20;
  ulonglong unaff_r21;
  longlong lVar21;
  ulonglong unaff_r22;
  ulonglong unaff_r23;
  longlong lVar22;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  int iVar23;
  ulonglong unaff_r26;
  int iVar24;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  double dVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  ulonglong in_f31;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  
  lVar22 = ZEXT48(&stack0x00000000) - 0x1d0;
  puVar7 = (ulonglong *)lVar22;
  *puVar7 = ZEXT48(&stack0x00000000);
  puVar7[0x3c] = in_LR;
  puVar7[0x39] = in_f31;
  puVar7[0x38] = unaff_r31;
  *(float *)(puVar7 + 0x26) = (float)param_1;
  *(float *)((int)puVar7 + 0x134) = (float)param_1;
  *(float *)(puVar7 + 0x27) = (float)param_1;
  puVar7[0x36] = unaff_r29;
  puVar7[0x31] = unaff_r24;
  *(float *)((int)puVar7 + 0x13c) = (float)param_1;
  puVar7[0x37] = unaff_r30;
  iVar8 = (int)param_2;
  uVar2 = *(ushort *)(iVar8 + 0x12);
  sVar14 = *(short *)(iVar8 + 0x10);
  sVar3 = *(short *)(iVar8 + 10);
  puVar7[0x35] = unaff_r28;
  auVar30 = *(undefined1 (*) [16])(puVar7 + 0x26);
  puVar7[0x34] = unaff_r27;
  puVar7[0x33] = unaff_r26;
  puVar7[0x32] = unaff_r25;
  puVar7[0x30] = unaff_r23;
  puVar7[0x2f] = unaff_r22;
  puVar7[0x2e] = unaff_r21;
  puVar7[0x2d] = unaff_r20;
  DAT_0095ee18 = 1;
  if ((uVar2 & 1) == 0) {
    iVar11 = (int)*(short *)(iVar8 + 6) - (int)*(short *)(iVar8 + 8);
  }
  else {
    lVar10 = (longlong)*(short *)(iVar8 + 8);
    lVar18 = (longlong)*(short *)(iVar8 + 4);
    lVar21 = *(short *)(iVar8 + 6) - lVar10;
    iVar11 = (int)(((lVar10 + (lVar21 - (lVar10 - lVar18) >> 0x3f & *(short *)(iVar8 + 6) - lVar10))
                    - (lVar18 + (lVar21 - (lVar10 - lVar18) >> 0x3f & lVar10 - lVar18)) &
                   0xffffffffU) << 1);
  }
  iVar24 = 0;
  iVar16 = 0;
  sVar15 = 0;
  lVar10 = lVar22;
  iVar9 = 0;
  if (param_5 != 0) {
    while (iVar24 = iVar9, *(char *)(param_4 + iVar16) != '\0') {
      iVar9 = (int)lVar10;
      sVar17 = (short)iVar16;
      *(short *)(iVar9 + 0x70) = sVar17;
      lVar18 = 0;
      *(short *)(iVar9 + 0xf0) = sVar15;
      iVar19 = iVar16;
      if (0 < iVar11) {
        do {
          bVar1 = *(byte *)(param_4 + iVar16);
          if ((bVar1 == 0x20) || (bVar1 < 0x10)) {
            iVar19 = iVar16;
          }
          if (((g_FontColorsEnabled != 0) && (7 < bVar1)) && (bVar1 < 0x10)) {
            sVar15 = bVar1 - 8;
          }
          if ((bVar1 == 0) || (bVar1 == 1)) break;
          iVar16 = iVar16 + 1;
          bVar1 = *(byte *)((int)param_7 + (uint)bVar1 * 4 + 3);
          lVar21 = lVar18 + (char)bVar1;
          lVar18 = lVar21 + ((LZCOUNT(-(uint)bVar1) << 0x3a) >> 0x3f & lVar18 - lVar21);
        } while ((int)lVar18 < iVar11);
      }
      sVar20 = (short)iVar19;
      *(short *)(iVar9 + 0xb0) = sVar20;
      if (sVar20 == sVar17) {
        sVar20 = (short)iVar16;
        *(short *)(iVar9 + 0xb0) = sVar20;
      }
      bVar1 = *(byte *)(param_4 + sVar20);
      if ((bVar1 == 0x20) || (bVar1 < 0x10)) {
        *(short *)(iVar9 + 0xb0) = sVar20 + -1;
      }
      iVar24 = iVar24 + 1;
      if ((bVar1 == 0) ||
         (iVar16 = sVar20 + 1, lVar10 = lVar10 + 2, iVar9 = iVar24, iVar16 == param_5)) break;
    }
  }
  *(undefined2 *)(iVar8 + 0xc) = 0;
  *(short *)(iVar8 + 0xe) = (short)iVar24 * sVar14;
  lVar10 = (longlong)sVar3 - (longlong)(sVar14 * iVar24 >> 1);
  iVar11 = 0;
  if (0 < iVar24) {
    lVar10 = lVar10 + ((LZCOUNT(-(uVar2 & 2)) << 0x3a) >> 0x3f & sVar3 - lVar10);
    do {
      iVar9 = (int)lVar22;
      iVar12 = 0;
      auVar28 = ZEXT416(0);
      auVar28 = auVar28 | auVar28 << 0x20 | auVar28 << 0x40 | auVar28 << 0x60;
      dVar25 = 0.0;
      iVar16 = *(short *)(iVar9 + 0x70) + param_4;
      iVar19 = ((int)*(short *)(iVar9 + 0xb0) - (int)*(short *)(iVar9 + 0x70)) + 1;
      if (iVar19 != 0) {
        auVar6 = ZEXT416(0xfffffff8);
        do {
          auVar28 = auVar28 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar28 = auVar28 | auVar28 << 0x20 | auVar28 << 0x40 | auVar28 << 0x60;
          if (*(byte *)(iVar16 + iVar12) == 0) break;
          uVar13 = param_7 + (ulonglong)*(byte *)(iVar16 + iVar12) * 4;
          iVar12 = iVar12 + 1;
          auVar29 = loadVectorLeftIndexed(3,uVar13 & 0xffffffff);
          auVar29 = vectorShiftRightAlgebraicWord
                              (auVar29,auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60);
          puVar7[0x28] = (longlong)(int)*(char *)((int)uVar13 + 3);
          auVar29 = vectorConvertFromSignedFixedPointWord(auVar29,0);
          auVar28 = vectorMultiplyAddFloatingPoint(auVar29,auVar30,auVar28);
          dVar25 = (double)(float)((double)(longlong)puVar7[0x28] * param_1 + dVar25);
        } while (iVar12 != iVar19);
      }
      sVar14 = *(short *)(iVar8 + 0xc);
      auVar28 = auVar28 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar28 = vectorConvertToSignedFixedPointWordSaturate
                          (auVar28 | auVar28 << 0x20 | auVar28 << 0x40 | auVar28 << 0x60,0);
      puVar7[0x28] = (longlong)(int)dVar25;
      iVar12 = *(int *)((int)puVar7 + 0x144);
      if (sVar14 < iVar12) {
        auVar28 = vectorSplatHalfWord(auVar28,1);
        uVar5 = storeVectorElementHalfWordIndexed(auVar28,0xc,param_2);
        *(undefined2 *)(iVar8 + 0xc) = uVar5;
      }
      uVar2 = *(ushort *)(iVar8 + 0x12);
      if ((uVar2 & 4) == 0) {
        iVar23 = (int)lVar10;
        iVar12 = iVar12 >> 1;
        DAT_0071ef98 = param_3;
        if ((uVar2 & 8) == 0) {
          if ((uVar2 & 1) == 0) {
            puVar7[0x28] = (longlong)(int)*(short *)(iVar8 + 8);
            lVar18 = (longlong)*(short *)(iVar9 + 0xf0) << 2;
            uVar4 = *(undefined4 *)((int)&DAT_0071ef98 + (int)lVar18);
            uVar13 = puVar7[0x28];
            puVar7[0x28] = (longlong)iVar23;
            FontPrintJapanese_unk2
                      ((double)(longlong)uVar13,(double)(longlong)puVar7[0x28],param_1,lVar18,iVar16
                       ,uVar4,iVar16,iVar19,(longlong)iVar23,param_6,param_7);
          }
          else {
            puVar7[0x28] = (longlong)(*(short *)(iVar8 + 8) - iVar12);
            uVar4 = *(undefined4 *)
                     ((int)&DAT_0071ef98 + (int)((longlong)*(short *)(iVar9 + 0xf0) << 2));
            uVar13 = puVar7[0x28];
            puVar7[0x28] = (longlong)iVar23;
            FontPrintJapanese_unk2
                      ((double)(longlong)uVar13,(double)(longlong)puVar7[0x28],param_1,iVar19,iVar16
                       ,uVar4,iVar16,iVar19,(longlong)iVar23,param_6,param_7);
          }
        }
        else {
          if ((uVar2 & 1) == 0) {
            sVar14 = *(short *)(iVar8 + 0x14);
            iVar12 = (int)*(short *)(iVar8 + 8);
          }
          else {
            sVar14 = *(short *)(iVar8 + 0x14);
            iVar12 = *(short *)(iVar8 + 8) - iVar12;
          }
          puVar7[0x28] = (longlong)(int)sVar14;
          sVar14 = *(short *)(iVar8 + 0x16);
          sVar3 = *(short *)(iVar9 + 0xf0);
          uVar13 = puVar7[0x28];
          puVar7[0x28] = (longlong)iVar12;
          uVar26 = puVar7[0x28];
          puVar7[0x28] = (longlong)iVar23;
          uVar4 = *(undefined4 *)((int)&DAT_0071ef98 + (int)((longlong)sVar3 << 2));
          uVar27 = puVar7[0x28];
          puVar7[0x28] = (longlong)(int)sVar14;
          FontPrintJapanese_unk2
                    ((double)((float)(longlong)uVar13 * 0.0625 + (float)(longlong)uVar26),
                     (double)((float)(longlong)puVar7[0x28] * 0.0625 + (float)(longlong)uVar27),
                     param_1,iVar19,iVar16,uVar4,iVar16,iVar19,(longlong)(int)sVar14,param_6,param_7
                    );
        }
      }
      iVar11 = iVar11 + 1;
      lVar22 = lVar22 + 2;
      lVar10 = lVar10 + *(short *)(iVar8 + 0x10);
    } while (iVar11 < iVar24);
  }
  DAT_0095ee18 = 0;
  return;
}



//==== 0006968c  ns=draw  size=0x378
// sig: undefined DrawSpriteFont(void)
// callers(3): 00069a04 draw::DrawSpriteFont_thunk; 00069a50 draw::FontPrint_unk3; 001717a8 vendor::Vendor_DrawFlickerText
// callees(2): 004d6948 idol_draw::ResetPassState; 004d6bb0 FUN_004d6bb0

void draw::DrawSpriteFont(double param_1,double param_2,double param_3,double param_4)

{
  ulonglong uVar1;
  RsxCmd RVar2;
  RenderingStep *pRVar3;
  undefined4 *puVar4;
  ulonglong in_r7;
  ulonglong in_r8;
  int in_r9;
  longlong in_r10;
  double dVar5;
  double dVar6;
  ulonglong in_stack_00000070;
  longlong in_stack_00000078;
  undefined4 local_90;
  uint local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  
  dVar6 = (double)(float)(param_3 + param_1);
  dVar5 = (double)(float)(param_4 + param_2);
  puVar4 = (undefined4 *)
           (EffectTexHeaders + (int)(in_stack_00000078 << 5) + (int)(in_stack_00000078 << 2));
  uVar1 = (in_r10 + in_r8) * 2;
  local_90 = *puVar4;
  local_88 = puVar4[2];
  local_84 = puVar4[3];
  local_80 = puVar4[4];
  local_7c = puVar4[5];
  local_8c = puVar4[1] & 0xffff | 0x14000;
  local_78 = puVar4[6];
  local_74 = puVar4[7];
  local_70 = puVar4[8];
  FUN_004d6bb0(HUD_Pass,0,&local_90);
  idol_draw::ResetPassState(HUD_Pass);
  pRVar3 = HUD_Pass;
  *HUD_Pass->command = 0x41948;
  pRVar3->command[1] =
       (RsxCmd)((in_stack_00000070 >> 8 & 0xff) << 8) |
       (RsxCmd)((in_stack_00000070 >> 0x18 & 0xff) << 0x18) |
       (RsxCmd)((in_stack_00000070 >> 0x10 & 0xff) << 0x10) | (RsxCmd)in_stack_00000070 & 0xff;
  pRVar3->command = pRVar3->command + 2;
  pRVar3 = HUD_Pass;
  *HUD_Pass->command = 0x400c1714;
  pRVar3->command[1] = 0;
  pRVar3->command[2] = 0;
  pRVar3->command[3] = 0;
  pRVar3->command[4] = NV4097_SET_BEGIN_END_x1;
  pRVar3->command[5] = 8;
  RVar2 = (RsxCmd)((in_r7 & 0xffffffff) << 1) & 0xfffe;
  pRVar3->command = pRVar3->command + 6;
  pRVar3 = HUD_Pass;
  *HUD_Pass->command = 0x41904;
  pRVar3->command[1] = (RsxCmd)((in_r8 & 0xffffffff) << 0x11) | RVar2;
  pRVar3->command = pRVar3->command + 2;
  pRVar3 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_VERTEX_DATA2F_M_x2;
  pRVar3->command[1] = (RsxCmd)(float)param_1;
  pRVar3->command[2] = (RsxCmd)(float)param_2;
  pRVar3->command = pRVar3->command + 3;
  pRVar3 = HUD_Pass;
  *HUD_Pass->command = 0x41904;
  pRVar3->command[1] = (RsxCmd)((uVar1 & 0xfffffffe) << 0x10) | RVar2;
  RVar2 = ((int)in_r7 + in_r9) * 2 & 0xfffe;
  pRVar3->command = pRVar3->command + 2;
  pRVar3 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_VERTEX_DATA2F_M_x2;
  pRVar3->command[1] = (RsxCmd)(float)param_1;
  pRVar3->command[2] = (RsxCmd)(float)dVar5;
  pRVar3->command = pRVar3->command + 3;
  pRVar3 = HUD_Pass;
  *HUD_Pass->command = 0x41904;
  pRVar3->command[1] = (RsxCmd)((uVar1 & 0xfffffffe) << 0x10) | RVar2;
  pRVar3->command = pRVar3->command + 2;
  pRVar3 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_VERTEX_DATA2F_M_x2;
  pRVar3->command[1] = (RsxCmd)(float)dVar6;
  pRVar3->command[2] = (RsxCmd)(float)dVar5;
  pRVar3->command = pRVar3->command + 3;
  pRVar3 = HUD_Pass;
  *HUD_Pass->command = 0x41904;
  pRVar3->command[1] = (RsxCmd)((in_r8 & 0xffffffff) << 0x11) | RVar2;
  pRVar3->command = pRVar3->command + 2;
  pRVar3 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_VERTEX_DATA2F_M_x2;
  pRVar3->command[1] = (RsxCmd)(float)dVar6;
  pRVar3->command[2] = (RsxCmd)(float)param_2;
  pRVar3->command = pRVar3->command + 3;
  pRVar3 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_BEGIN_END_x1;
  pRVar3->command[1] = 0;
  pRVar3->command = pRVar3->command + 2;
  return;
}



//==== 00069a04  ns=draw  size=0x40
// sig: undefined DrawSpriteFont_thunk(void)
// callers(0): 
// callees(1): 0006968c draw::DrawSpriteFont

void draw::DrawSpriteFont_thunk(void)

{
  DrawSpriteFont();
  return;
}



//==== 00069a50  ns=draw  size=0x34c
// sig: undefined FontPrint_unk3(void)
// callers(10): 00069db8 draw::FontPrintOptWestern; 0006fda4 draw::FontPrint_unk; 0006fe44 draw::FontPrintScaled; 0006fee4 draw::FontPrintScaled_v2; 0006ff88 draw::FontPrintRightWithScale; 00070680 draw::FontPrintCenterScaled; 00070b00 draw::FontPrintCenterScaledMedium; 00070cb0 draw::FontPrintCenterScaledSmall; 00070e60 draw::FontPrintCenterScaledLarge; 00141c90 pause::DrawPauseStrings
// callees(5): 0006968c draw::DrawSpriteFont; 00174f80 vuchain::SetGSReg; 00502730 fastfunc::FastIntToDouble; 00502ea8 idol_draw::PackCmd; 00502f7c idol_draw::Blend

void draw::FontPrint_unk3
               (double param_1,double param_2,double param_3,undefined8 param_4,undefined8 param_5,
               undefined4 param_6,int param_7,int param_8,undefined8 param_9,undefined8 param_10,
               int param_11)

{
  int iVar1;
  undefined8 uVar2;
  byte bVar3;
  int iVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  uVar2 = idol_draw::PackCmd(0,1,0,1,0);
  vuchain::SetGSReg(3,uVar2);
  uVar2 = idol_draw::Blend(1,5,4,0,0,0,0,1);
  vuchain::SetGSReg(0x16,uVar2);
  if (DAT_0095ee18 == 0) {
    DAT_0071ef98 = param_6;
  }
  iVar4 = 0;
  dVar8 = (double)(float)(param_3 * 16.0);
  if (param_8 != 0) {
    dVar9 = (double)(float)(param_3 * 24.0);
    do {
      bVar3 = *(byte *)(param_7 + iVar4);
      if (bVar3 == 0) {
        return;
      }
      if (((bVar3 < 8) || (0xf < bVar3)) &&
         (iVar1 = param_11 + (uint)bVar3 * 4, *(char *)(iVar1 + 3) != '\0')) {
        dVar5 = (double)fastfunc::FastIntToDouble(*(undefined1 *)(iVar1 + 2));
        bVar3 = *(byte *)(param_7 + iVar4);
        if ((0x7f < bVar3) && (bVar3 < 0xa8)) {
          iVar1 = param_11 + (bVar3 + 0x40) * 4;
          dVar6 = (double)fastfunc::FastIntToDouble(*(undefined1 *)(iVar1 + 3));
          dVar7 = (double)fastfunc::FastIntToDouble(*(undefined1 *)(iVar1 + 2));
          DrawSpriteFont((double)(float)(dVar6 * param_3 + param_1),
                         (double)(float)(dVar7 * param_3 + param_2),dVar8,dVar8);
          bVar3 = *(byte *)(param_7 + iVar4);
        }
        dVar5 = (double)(float)(dVar5 * param_3 + param_2);
        if (bVar3 < 0x20) {
          DrawSpriteFont(param_1,dVar5,dVar9,dVar8);
        }
        else if (0x20 < bVar3) {
          DrawSpriteFont(param_1,dVar5,dVar8,dVar8);
        }
        dVar5 = (double)fastfunc::FastIntToDouble
                                  (*(undefined1 *)
                                    (param_11 + (uint)*(byte *)(param_7 + iVar4) * 4 + 3));
        param_1 = (double)(float)(dVar5 * param_3 + param_1);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 != param_8);
  }
  return;
}



//==== 00069db8  ns=draw  size=0x750
// sig: undefined FontPrintOptWestern(void)
// callers(7): 0006a510 draw::FontPrintMediumOpt; 0006ad48 draw::DrawSubtitles; 0007100c draw::FontPrintOpt; 000710b8 draw::FontPrintOptLarge; 000784e8 freeze::DrawDialogText; 001402c8 pause::MenuText_Draw; 00144638 pause::DrawSkillPointsFrame
// callees(1): 00069a50 draw::FontPrint_unk3

void draw::FontPrintOptWestern
               (double param_1,undefined8 param_2,undefined4 param_3,int param_4,int param_5,
               undefined8 param_6,longlong param_7)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  undefined4 uVar4;
  undefined2 uVar5;
  undefined1 auVar6 [16];
  ulonglong *puVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  undefined4 *puVar11;
  short sVar15;
  int iVar13;
  ulonglong uVar12;
  int iVar14;
  longlong lVar16;
  longlong lVar17;
  int iVar18;
  short sVar19;
  int iVar20;
  short sVar21;
  longlong lVar22;
  ulonglong unaff_r14;
  ulonglong unaff_r15;
  ulonglong unaff_r16;
  ulonglong unaff_r17;
  ulonglong unaff_r18;
  ulonglong unaff_r19;
  ulonglong unaff_r20;
  ulonglong unaff_r21;
  ulonglong unaff_r22;
  longlong lVar23;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  longlong lVar24;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  longlong lVar25;
  int iVar28;
  longlong lVar26;
  longlong lVar27;
  ulonglong unaff_r31;
  longlong lVar29;
  ulonglong uVar30;
  int iVar31;
  ulonglong in_LR;
  double dVar32;
  ulonglong uVar33;
  ulonglong in_f31;
  double dVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined4 in_vr31_32_0;
  undefined4 in_vr31_32_1;
  undefined4 in_vr31_32_2;
  undefined4 in_vr31_32_3;
  undefined1 auVar37 [16];
  
  uVar12 = ZEXT48(&stack0x00000000);
  lVar27 = uVar12 - 0x210;
  puVar7 = (ulonglong *)lVar27;
  *puVar7 = uVar12;
  puVar7[0x44] = in_LR;
  puVar7[0x41] = in_f31;
  puVar7[0x30] = unaff_r15;
  puVar11 = (undefined4 *)(uVar12 - 0xb0);
  puVar11[3] = in_vr31_32_3;
  puVar11[2] = in_vr31_32_2;
  puVar11[1] = in_vr31_32_1;
  *puVar11 = in_vr31_32_0;
  puVar7[0x31] = unaff_r16;
  puVar7[0x2f] = unaff_r14;
  iVar8 = (int)param_2;
  uVar2 = *(ushort *)(iVar8 + 0x12);
  puVar7[0x38] = unaff_r23;
  DAT_0095ee18 = 1;
  puVar7[0x33] = unaff_r18;
  uVar3 = *(ushort *)(iVar8 + 10);
  puVar7[0x28] = (ulonglong)*(ushort *)(iVar8 + 0x10);
  puVar7[0x3d] = unaff_r28;
  puVar7[0x3c] = unaff_r27;
  puVar7[0x34] = unaff_r19;
  puVar7[0x29] = (ulonglong)uVar3;
  puVar7[0x40] = unaff_r31;
  puVar7[0x3f] = unaff_r30;
  puVar7[0x3e] = unaff_r29;
  puVar7[0x3b] = unaff_r26;
  puVar7[0x3a] = unaff_r25;
  puVar7[0x39] = unaff_r24;
  puVar7[0x37] = unaff_r22;
  puVar7[0x36] = unaff_r21;
  puVar7[0x35] = unaff_r20;
  puVar7[0x32] = unaff_r17;
  if ((uVar2 & 1) == 0) {
    lVar25 = (longlong)*(short *)(iVar8 + 6) - (longlong)*(short *)(iVar8 + 8);
  }
  else {
    lVar25 = (longlong)*(short *)(iVar8 + 8);
    lVar16 = (longlong)*(short *)(iVar8 + 4);
    lVar26 = *(short *)(iVar8 + 6) - lVar25;
    lVar25 = ((lVar25 + (lVar26 - (lVar25 - lVar16) >> 0x3f & *(short *)(iVar8 + 6) - lVar25)) -
              (lVar16 + (lVar26 - (lVar25 - lVar16) >> 0x3f & lVar25 - lVar16)) & 0x7fffffffU) << 1;
  }
  dVar34 = 1.0;
  if (0.001 < ABS((float)(param_1 - 1.0))) {
    *(float *)(puVar7 + 0x26) = (float)param_1;
    *(float *)((int)puVar7 + 0x134) = (float)param_1;
    *(float *)(puVar7 + 0x27) = (float)param_1;
    *(float *)((int)puVar7 + 0x13c) = (float)param_1;
    auVar37 = *(undefined1 (*) [16])(puVar7 + 0x26);
    dVar34 = param_1;
    goto LAB_00069fb0;
  }
  if (g_Language < 4) {
    if (1 < g_Language) {
      if (g_Language < 3) {
        dVar34 = 0.8999999761581421;
        auVar37 = loadVectorLeftIndexed(8,0x69d9c);
        auVar37 = auVar37 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar37 = auVar37 | auVar37 << 0x20 | auVar37 << 0x40 | auVar37 << 0x60;
      }
      else {
        dVar34 = 0.8999999761581421;
        auVar37 = loadVectorLeftIndexed(8,0x69d9c);
        auVar37 = auVar37 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar37 = auVar37 | auVar37 << 0x20 | auVar37 << 0x40 | auVar37 << 0x60;
        if ((uVar2 & 0x10) != 0) {
          dVar34 = 0.7999999523162842;
          auVar37 = loadVectorLeftIndexed(0xc,0x69d9c);
          auVar37 = auVar37 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar37 = auVar37 | auVar37 << 0x20 | auVar37 << 0x40 | auVar37 << 0x60;
        }
      }
      goto LAB_00069fb0;
    }
  }
  else {
    if (g_Language < 5) {
      dVar34 = 0.8999999761581421;
      auVar37 = loadVectorLeftIndexed(8,0x69d9c);
      auVar37 = auVar37 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar37 = auVar37 | auVar37 << 0x20 | auVar37 << 0x40 | auVar37 << 0x60;
      goto LAB_00069fb0;
    }
    if (g_Language < 6) {
      dVar34 = 0.8999999761581421;
      auVar37 = loadVectorLeftIndexed(8,0x69d9c);
      auVar37 = auVar37 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar37 = auVar37 | auVar37 << 0x20 | auVar37 << 0x40 | auVar37 << 0x60;
      goto LAB_00069fb0;
    }
  }
  auVar37 = loadVectorLeftIndexed(uVar12 - 0xb0,0x69d9c);
  auVar37 = auVar37 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar37 = auVar37 | auVar37 << 0x20 | auVar37 << 0x40 | auVar37 << 0x60;
LAB_00069fb0:
  sVar19 = 0;
  bVar10 = false;
  lVar23 = 0;
  lVar16 = 0;
  lVar26 = lVar25;
  do {
    iVar13 = 0;
    lVar24 = 0;
    iVar28 = (int)lVar26;
    lVar17 = lVar16;
    lVar29 = lVar27;
    if (param_5 != 0) {
      while (lVar17 = lVar16, *(char *)(param_4 + iVar13) != '\0') {
        iVar9 = (int)lVar29;
        sVar15 = (short)iVar13;
        *(short *)(iVar9 + 0x70) = sVar15;
        lVar17 = 0;
        *(short *)(iVar9 + 0xf0) = sVar19;
        iVar20 = iVar13;
        if (0 < iVar28) {
          do {
            bVar1 = *(byte *)(param_4 + iVar13);
            if ((bVar1 == 0x20) || (bVar1 < 0x10)) {
              iVar20 = iVar13;
            }
            if (((g_FontColorsEnabled != 0) && (7 < bVar1)) && (bVar1 < 0x10)) {
              sVar19 = bVar1 - 8;
            }
            if ((bVar1 == 0) || (bVar1 == 1)) break;
            iVar13 = iVar13 + 1;
            bVar1 = *(byte *)((int)param_7 + (uint)bVar1 * 4 + 3);
            puVar7[0x2a] = (longlong)(int)(char)bVar1;
            puVar7[0x2a] = (longlong)(int)((double)(longlong)puVar7[0x2a] * dVar34);
            lVar22 = lVar17 + (ulonglong)*(uint *)((int)puVar7 + 0x154);
            lVar17 = lVar22 + ((LZCOUNT(-(uint)bVar1) << 0x3a) >> 0x3f & lVar17 - lVar22);
          } while ((int)lVar17 < iVar28);
        }
        sVar21 = (short)iVar20;
        *(short *)(iVar9 + 0xb0) = sVar21;
        if (sVar21 == sVar15) {
          sVar21 = (short)iVar13;
          *(short *)(iVar9 + 0xb0) = sVar21;
        }
        bVar1 = *(byte *)(param_4 + sVar21);
        if ((bVar1 == 0x20) || (bVar1 < 0x10)) {
          *(short *)(iVar9 + 0xb0) = sVar21 + -1;
        }
        lVar24 = lVar24 + 1;
        if ((bVar1 == 0) ||
           (iVar13 = sVar21 + 1, lVar17 = lVar16, lVar29 = lVar29 + 2, iVar13 == param_5)) break;
      }
    }
    iVar13 = (int)lVar24;
    if ((bVar10) || (iVar13 < 2)) {
LAB_0006a184:
      uVar12 = puVar7[0x28];
      uVar30 = puVar7[0x29];
      *(undefined2 *)(iVar8 + 0xc) = 0;
      *(short *)(iVar8 + 0xe) = (short)lVar24 * (short)uVar12;
      iVar28 = 0;
      lVar25 = (longlong)(short)uVar30 - (longlong)((short)uVar12 * iVar13 >> 1);
      if (0 < iVar13) {
        lVar25 = lVar25 + ((LZCOUNT(-(uVar2 & 2)) << 0x3a) >> 0x3f & (short)uVar30 - lVar25);
        do {
          iVar9 = (int)lVar27;
          iVar18 = 0;
          auVar35 = ZEXT416(0);
          auVar35 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
          dVar32 = 0.0;
          iVar14 = *(short *)(iVar9 + 0x70) + param_4;
          iVar20 = ((int)*(short *)(iVar9 + 0xb0) - (int)*(short *)(iVar9 + 0x70)) + 1;
          if (iVar20 != 0) {
            auVar6 = ZEXT416(0xfffffff8);
            do {
              auVar35 = auVar35 >> 0x60 & (undefined1  [16])0xffffffff;
              auVar35 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
              if (*(byte *)(iVar14 + iVar18) == 0) break;
              uVar12 = param_7 + (ulonglong)*(byte *)(iVar14 + iVar18) * 4;
              iVar18 = iVar18 + 1;
              puVar7[0x2a] = (longlong)(int)*(char *)((int)uVar12 + 3);
              auVar36 = loadVectorLeftIndexed(3,uVar12 & 0xffffffff);
              auVar36 = vectorShiftRightAlgebraicWord
                                  (auVar36,auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60
                                  );
              auVar36 = vectorConvertFromSignedFixedPointWord(auVar36,0);
              auVar35 = vectorMultiplyAddFloatingPoint(auVar36,auVar37,auVar35);
              dVar32 = (double)(float)((double)(longlong)puVar7[0x2a] * dVar34 + dVar32);
            } while (iVar18 != iVar20);
          }
          auVar35 = auVar35 >> 0x60 & (undefined1  [16])0xffffffff;
          sVar19 = *(short *)(iVar8 + 0xc);
          auVar35 = vectorConvertToSignedFixedPointWordSaturate
                              (auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,0);
          puVar7[0x2a] = (longlong)(int)dVar32;
          iVar18 = *(int *)((int)puVar7 + 0x154);
          if (sVar19 < iVar18) {
            auVar35 = vectorSplatHalfWord(auVar35,1);
            uVar5 = storeVectorElementHalfWordIndexed(auVar35,0xc,param_2);
            *(undefined2 *)(iVar8 + 0xc) = uVar5;
          }
          uVar2 = *(ushort *)(iVar8 + 0x12);
          if ((uVar2 & 4) == 0) {
            iVar31 = (int)lVar25;
            iVar18 = iVar18 >> 1;
            DAT_0071ef98 = param_3;
            if ((uVar2 & 8) == 0) {
              if ((uVar2 & 1) == 0) {
                puVar7[0x2a] = (longlong)(int)*(short *)(iVar8 + 8);
                uVar4 = *(undefined4 *)
                         ((int)&DAT_0071ef98 + (int)((longlong)*(short *)(iVar9 + 0xf0) << 2));
                uVar12 = puVar7[0x2a];
                puVar7[0x2a] = (longlong)iVar31;
                FontPrint_unk3((double)(longlong)uVar12,(double)(longlong)puVar7[0x2a],dVar34,iVar20
                               ,iVar14,uVar4,iVar14,iVar20,(longlong)iVar31,param_6,param_7);
              }
              else {
                puVar7[0x2a] = (longlong)(*(short *)(iVar8 + 8) - iVar18);
                lVar16 = (longlong)*(short *)(iVar9 + 0xf0) << 2;
                uVar4 = *(undefined4 *)((int)&DAT_0071ef98 + (int)lVar16);
                uVar12 = puVar7[0x2a];
                puVar7[0x2a] = (longlong)iVar31;
                FontPrint_unk3((double)(longlong)uVar12,(double)(longlong)puVar7[0x2a],dVar34,lVar16
                               ,iVar14,uVar4,iVar14,iVar20,(longlong)iVar31,param_6,param_7);
              }
            }
            else {
              if ((uVar2 & 1) == 0) {
                sVar19 = *(short *)(iVar8 + 0x14);
                iVar18 = (int)*(short *)(iVar8 + 8);
              }
              else {
                sVar19 = *(short *)(iVar8 + 0x14);
                iVar18 = *(short *)(iVar8 + 8) - iVar18;
              }
              puVar7[0x2a] = (longlong)(int)sVar19;
              sVar19 = *(short *)(iVar8 + 0x16);
              sVar15 = *(short *)(iVar9 + 0xf0);
              uVar12 = puVar7[0x2a];
              puVar7[0x2a] = (longlong)iVar18;
              uVar30 = puVar7[0x2a];
              puVar7[0x2a] = (longlong)iVar31;
              uVar4 = *(undefined4 *)((int)&DAT_0071ef98 + (int)((longlong)sVar15 << 2));
              uVar33 = puVar7[0x2a];
              puVar7[0x2a] = (longlong)(int)sVar19;
              FontPrint_unk3((double)((float)(longlong)uVar12 * 0.0625 + (float)(longlong)uVar30),
                             (double)((float)(longlong)puVar7[0x2a] * 0.0625 +
                                     (float)(longlong)uVar33),dVar34,iVar20,iVar14,uVar4,iVar14,
                             iVar20,(longlong)(int)sVar19,param_6,param_7);
            }
          }
          iVar28 = iVar28 + 1;
          lVar27 = lVar27 + 2;
          lVar25 = lVar25 + *(short *)(iVar8 + 0x10);
        } while (iVar28 < iVar13);
      }
      DAT_0095ee18 = 0;
      return;
    }
    lVar23 = lVar23 + ((LZCOUNT(-(int)lVar23) << 0x3a) >> 0x3f & lVar24 - lVar23);
    lVar16 = lVar17;
    if ((int)lVar23 < iVar13) {
      bVar10 = true;
      lVar26 = lVar25;
    }
    else {
      if (iVar28 / 3 <= (int)lVar17) goto LAB_0006a184;
      lVar26 = lVar26 + -0x10;
    }
  } while( true );
}



//==== 0006a510  ns=draw  size=0xb4
// sig: undefined FontPrintMediumOpt(void)
// callers(8): 000784e8 freeze::DrawDialogText; 00145b8c pause::ItemView_Draw; 00146708 pause::PlanetInfo_Draw; 00146b14 pause::GoldBoltWidget_Update; 00147334 pause::ItemInfo_DrawCost; 0014a86c pause::ConfirmDialog_Draw; 0014d1f0 pause::SecretMenu_Draw; 0014d49c pause::DrawUnusedCompletedGameFrame
// callees(2): 000690e0 draw::FontPrintOptJapanese; 00069db8 draw::FontPrintOptWestern

void draw::FontPrintMediumOpt
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* Is used in cheats menu
                       "No cheats activated" */
  if (g_JapaneseMode) {
    FontPrintOptJapanese
              (0x3ff0000000000000,param_1,param_2,param_3,param_4,*(undefined4 *)(TexInfo + 4),
               &JapaneseGlyphs);
  }
  else {
    FontPrintOptWestern(param_1,param_2,param_3,param_4,*(undefined4 *)(TexInfo + 4),
                        &MediumWesternGlyphs);
  }
  return;
}



//==== 0006a5c4  ns=draw  size=0x70
// sig: undefined Sprite_DrawShapeWrapper(void)
// callers(15): 00054a10 camera::Camera_DrawReticule; 0007c838 help::Help_DrawIconBox; 0007c978 help::Help_Draw; 0013c5e8 pause::DrawTVTextures; 0016f9a8 vendor::DrawVendorHintFrame; 0017007c vendor::DrawWeaponIcons; 001e4eb8 mobyupd::update1160::M1160_001e4eb8; 001e6130 mobyupd::update1160::M1160_Hud_Draw; 0021ddf0 mobyupd::update1242::M1242_0021ddf0; 0021e750 mobyupd::update1242::M1242_Hud_Draw; 0025f8c0 mobyupd::update1379::M1379_DrawRadarIcon; 002611a0 mobyupd::update1379::M1379_Hud_Draw; 00419870 mobyupdate_helpers::M688_00419870; 0041b008 mobyupdate_helpers::M688_0041b008; 00480000 mobyupdate_helpers::M832_00480000
// callees(1): 0006889c draw::Sprite_DrawShape

void draw::Sprite_DrawShapeWrapper(void)

{
  Sprite_DrawShape();
  return;
}



//==== 0006a634  ns=draw  size=0xe4
// sig: void DrawRectOverlay(int top, int bot, int left, int right, int color)
// callers(2): 0025a374 mobyupdate_helpers::M1357_0025a374; 00417220 mobyupdate_helpers::M688_00417220
// callees(2): 000685e0 draw::DrawFullScreenQuad; 0006889c draw::Sprite_DrawShape

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void draw::DrawRectOverlay(int top,int bot,int left,int right,int color)

{
  if (((top == 0 && bot == 0x1a0) && (left == 0)) && (right == 0x200)) {
    DrawFullScreenQuad(color,(void *)(EffectTexHeaders + *(int *)(TexInfo + 0x58) * 0x24));
  }
  else {
    Sprite_DrawShape(left,top,right - left,bot - top,0,0,0x10,0x10);
  }
  return;
}



//==== 0006a718  ns=draw  size=0x578
// sig: undefined DrawRoundedRect(void)
// callers(10): 0006ad48 draw::DrawSubtitles; 000784e8 freeze::DrawDialogText; 0007c838 help::Help_DrawIconBox; 0007c978 help::Help_Draw; 000e2e10 map::DrawMapFrame; 001ca5d8 mobyupdate_helpers::M1109_001ca5d8; 0022485c mobyupdate_helpers::M1246_0022485c; 00224a00 mobyupdate_helpers::M1246_00224a00; 003d43c8 mobyupdate_helpers::M587_003d43c8; 00406458 mobyupdate_helpers::M656_00406458
// callees(2): 000685e0 draw::DrawFullScreenQuad; 0006889c draw::Sprite_DrawShape

void draw::DrawRoundedRect
               (undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4,int param_5)

{
  uint rgba;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  rgba = param_5 << 0x18 | 0x40404;
  iVar9 = (int)param_1;
  iVar1 = (int)param_3;
  iVar8 = (int)param_4;
  if (((iVar9 == 0 && param_2 == 0x1a0) && (iVar1 == 0)) && (iVar8 == 0x200)) {
    DrawFullScreenQuad(rgba,(void *)(EffectTexHeaders + *(int *)(TexInfo + 0x58) * 0x24));
  }
  else {
    Sprite_DrawShape(param_3,param_1,iVar8 - iVar1,param_2 - iVar9,0,0,0x10,0x10);
  }
  iVar7 = iVar9 + 1;
  iVar6 = param_2 + -1;
  iVar2 = iVar1 + -2;
  if (((iVar7 == 0 && iVar6 == 0x1a0) && (iVar2 == 0)) && (iVar1 == 0x200)) {
    DrawFullScreenQuad(rgba,(void *)(EffectTexHeaders + *(int *)(TexInfo + 0x58) * 0x24));
  }
  else {
    Sprite_DrawShape(iVar2,iVar7,iVar1 - iVar2,iVar6 - iVar7,0,0,0x10,0x10);
  }
  iVar5 = iVar9 + 2;
  iVar4 = param_2 + -2;
  iVar3 = iVar1 + -3;
  if (((iVar5 == 0 && iVar4 == 0x1a0) && (iVar3 == 0)) && (iVar2 == 0x200)) {
    DrawFullScreenQuad(rgba,(void *)(EffectTexHeaders + *(int *)(TexInfo + 0x58) * 0x24));
  }
  else {
    Sprite_DrawShape(iVar3,iVar5,iVar2 - iVar3,iVar4 - iVar5,0,0,0x10,0x10);
  }
  iVar9 = iVar9 + 4;
  param_2 = param_2 + -4;
  iVar1 = iVar1 + -4;
  if (((iVar9 == 0 && param_2 == 0x1a0) && (iVar1 == 0)) && (iVar3 == 0x200)) {
    DrawFullScreenQuad(rgba,(void *)(EffectTexHeaders + *(int *)(TexInfo + 0x58) * 0x24));
  }
  else {
    Sprite_DrawShape(iVar1,iVar9,iVar3 - iVar1,param_2 - iVar9,0,0,0x10,0x10);
  }
  iVar1 = iVar8 + 2;
  if (((iVar7 == 0) && (iVar6 == 0x1a0)) && ((iVar8 == 0 && (iVar1 == 0x200)))) {
    DrawFullScreenQuad(rgba,(void *)(EffectTexHeaders + *(int *)(TexInfo + 0x58) * 0x24));
  }
  else {
    Sprite_DrawShape(param_4,iVar7,iVar1 - iVar8,iVar6 - iVar7,0,0,0x10,0x10);
  }
  iVar2 = iVar8 + 3;
  if (((iVar5 == 0) && (iVar4 == 0x1a0)) && ((iVar1 == 0 && (iVar2 == 0x200)))) {
    DrawFullScreenQuad(rgba,(void *)(EffectTexHeaders + *(int *)(TexInfo + 0x58) * 0x24));
  }
  else {
    Sprite_DrawShape(iVar1,iVar5,iVar2 - iVar1,iVar4 - iVar5,0,0,0x10,0x10);
  }
  if ((((iVar9 == 0) && (param_2 == 0x1a0)) && (iVar2 == 0)) && (iVar8 + 4 == 0x200)) {
    DrawFullScreenQuad(rgba,(void *)(EffectTexHeaders + *(int *)(TexInfo + 0x58) * 0x24));
  }
  else {
    Sprite_DrawShape(iVar2,iVar9,(iVar8 + 4) - iVar2,param_2 - iVar9,0,0,0x10,0x10);
  }
  return;
}



//==== 0006ac90  ns=draw  size=0x3c
// sig: void SetFontWindow(FontWindow * window, int win_top, int win_bot, int win_left, int win_right, int text_x, int text_y, int line_spacing, int flags)
// callers(3): 0007b880 help::Help_StartMessageBox; 0007ba00 help::Help_Update; 0007c978 help::Help_Draw
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void draw::SetFontWindow(FontWindow *window,int win_top,int win_bot,int win_left,int win_right,
                        int text_x,int text_y,int line_spacing,int flags)

{
  short in_stack_00000076;
  
  window->win_top = (short)win_top;
  window->win_bot = (short)win_bot;
  window->win_left = (short)win_left;
  window->win_right = (short)win_right;
  window->text_x = (short)text_x;
  window->text_y = (short)text_y;
  window->line_spacing = (short)line_spacing;
  window->flags = in_stack_00000076;
  window->max_width = 0;
  window->max_height = 0;
  window->sub_pixel_x = 0;
  window->sub_pixel_y = 0;
  return;
}



//==== 0006accc  ns=draw  size=0x74
// sig: undefined ShouldForceSubtitles(void)
// callers(0): 
// callees(0): 

undefined8 draw::ShouldForceSubtitles(void)

{
  undefined8 uVar1;
  
  if (g_Language < 2 || 5 < g_Language) {
    if ((update::g_SceneId == 4) && (Level == Novalis)) {
      uVar1 = 1;
    }
    else if ((update::g_SceneId == 0) && (Level == Aridia)) {
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



//==== 0006ad48  ns=draw  size=0x460
// sig: undefined DrawSubtitles(void)
// callers(1): 0006bb78 draw::DefaultDraw
// callees(5): 000690e0 draw::FontPrintOptJapanese; 00069db8 draw::FontPrintOptWestern; 0006a718 draw::DrawRoundedRect; 005cd2a8 libc::snprintf; 005d0140 libc::memset
// strings: 00651fa4: 'Fammi vedere la trivella....tieni!'

/* WARNING: Removing unreachable block (ram,0x0006b030) */

void draw::DrawSubtitles(void)

{
  short sVar1;
  short sVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  char *__s;
  ulonglong uVar6;
  short *psVar7;
  undefined8 uVar8;
  char local_110 [128];
  undefined1 local_90 [24];
  
  uVar6 = ZEXT48(g_SubtitleTable);
  if (g_SubtitleTable != (short *)0x0) {
    lVar3 = 0;
    if ((1 < (int)g_Language) && ((int)g_Language < 6)) {
      lVar3 = (ulonglong)g_Language - 1;
    }
    if (-1 < *g_SubtitleTable) {
      uVar5 = uVar6 + (((LZCOUNT(-(uint)g_JapaneseMode) << 0x3a) >> 0x3f & lVar3 - 5U) + 5) * 2 &
              0xffffffff;
      do {
        psVar7 = (short *)uVar6;
        sVar1 = *psVar7;
        if ((sVar1 <= boot::g_SpaceSceneFrame) &&
           (sVar2 = psVar7[1], boot::g_SpaceSceneFrame <= sVar2)) {
          __s = (char *)((int)g_SubtitleTable + (int)*(short *)((int)uVar5 + 4));
          libc::memset(local_110,0x20,0x80);
          if ((Level == Hoven) &&
             ((((g_Language == 5 && (update::g_SceneId == 2)) && (sVar1 == 0x38b)) &&
              (sVar2 == 0x3d3)))) {
            __s = local_110;
            libc::snprintf(__s,"Fammi vedere la trivella....tieni!");
          }
          if (*__s != '\0') {
            uVar8 = 0x3ff0000000000000;
            if (g_JapaneseMode == false) {
              FontPrintOptWestern(0x3ff0000000000000,local_90,0x80b0b0b0,__s,0xffffffffffffffff,
                                  *(undefined4 *)(TexInfo + 4),&MediumWesternGlyphs);
            }
            else {
              FontPrintOptJapanese
                        (0x3ff0000000000000,local_90,0x80b0b0b0,__s,0xffffffffffffffff,
                         *(undefined4 *)(TexInfo + 4),&JapaneseGlyphs);
            }
            iVar4 = 0;
            if (((0 < (int)g_Language && (int)g_Language < 6) && (Level == Veldin2)) &&
               ((update::g_SceneId == 2 && ((*psVar7 == 0x340 && (psVar7[1] == 0xa03)))))) {
              iVar4 = 1;
            }
            DrawRoundedRect(0x14f - (((uint)((LZCOUNT(-iVar4) << 0x3a) >> 0x3f) & 0xffffffec) + 0x14
                                    ),0x159,0x28,0x1d8,0x60);
            if (g_JapaneseMode == false) {
              FontPrintOptWestern(uVar8,local_90,0x80b0b0b0,__s,0xffffffffffffffff,
                                  *(undefined4 *)(TexInfo + 4),&MediumWesternGlyphs);
              return;
            }
            FontPrintOptJapanese
                      (uVar8,local_90,0x80b0b0b0,__s,0xffffffffffffffff,*(undefined4 *)(TexInfo + 4)
                       ,&JapaneseGlyphs);
            return;
          }
        }
        uVar5 = uVar5 + 0x10;
        uVar6 = uVar6 + 0x10;
      } while (-1 < psVar7[8]);
    }
  }
  return;
}



//==== 0006b1a8  ns=draw  size=0x44
// sig: void UpdateLetterBox(void)
// callers(0): 
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void draw::UpdateLetterBox(void)

{
  if (LetterBoxOn == 0) {
    if (LetterBoxPixels != 0) {
      LetterBoxPixels = LetterBoxPixels + -1;
    }
  }
  else if (LetterBoxPixels < 0x18) {
    LetterBoxPixels = LetterBoxPixels + 1;
  }
  return;
}



//==== 0006b1f8  ns=draw  size=0x3ac
// sig: void DrawScreenEffect(void)
// callers(1): 0006bb78 draw::DefaultDraw
// callees(5): 000685e0 draw::DrawFullScreenQuad; 0006889c draw::Sprite_DrawShape; 00174f80 vuchain::SetGSReg; 004d86b0 FUN_004d86b0; 004deab8 FUN_004deab8

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void draw::DrawScreenEffect(void)

{
  RsxCmd *pRVar1;
  int iVar2;
  RenderingStep *pRVar3;
  undefined4 uVar4;
  short sVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  
  uVar4 = g_viewMtxPtr;
  FUN_004deab8(g_viewMtxPtr,g_FrameBufWidth,g_FrameBufHeight);
  sVar5 = g_FrameBufHeight;
  lVar6 = (longlong)g_FrameBufHeight;
  if (*(ulonglong *)(ScreenColorEffectNow + 8) != 0) {
    vuchain::SetGSReg(3,*(ulonglong *)(ScreenColorEffectNow + 8) & 0xff000000ff);
  }
  iVar7 = (int)sVar5;
  if ((*(uint *)(ScreenColorEffectNow + 4) & 0xff000000) != 0) {
    if (iVar7 == 0x1a0 && g_FrameBufWidth == 0x200) {
      DrawFullScreenQuad(*(uint *)(ScreenColorEffectNow + 4),
                         (void *)(EffectTexHeaders + *(int *)(TexInfo + 0x58) * 0x24));
    }
    else {
      Sprite_DrawShape(0,0,g_FrameBufWidth,lVar6,0,0,0x10,0x10);
    }
  }
  iVar8 = 0;
  if (0 < iVar7) {
    lVar6 = lVar6 + -1;
    do {
      if (*(ulonglong *)(ScreenColorEffectNow + 0x18) != 0) {
        vuchain::SetGSReg(3,*(ulonglong *)(ScreenColorEffectNow + 0x18) & 0xff000000ff);
      }
      iVar2 = (int)lVar6;
      if ((*(uint *)(ScreenColorEffectNow + 0x14) & 0xff000000) != 0) {
        Sprite_DrawShape(0xfffffffffffffed4,iVar8,(longlong)g_FrameBufWidth + 600,
                         (iVar2 + ((uint)((iVar8 + *(int *)(ScreenColorEffectNow + 0x10)) - lVar6 >>
                                         0x3f) &
                                  (iVar8 + *(int *)(ScreenColorEffectNow + 0x10)) - iVar2)) - iVar8,
                         0,0,0x10,0x10);
      }
      iVar8 = iVar8 + *(int *)(ScreenColorEffectNow + 0x10);
      if (*(ulonglong *)(ScreenColorEffectNow + 0x28) != 0) {
        vuchain::SetGSReg(3,*(ulonglong *)(ScreenColorEffectNow + 0x28) & 0xff000000ff);
      }
      if ((*(uint *)(ScreenColorEffectNow + 0x24) & 0xff000000) != 0) {
        Sprite_DrawShape(0xfffffffffffffed4,iVar8,(longlong)g_FrameBufWidth + 600,
                         (iVar2 + ((uint)((iVar8 + *(int *)(ScreenColorEffectNow + 0x20)) - lVar6 >>
                                         0x3f) &
                                  (iVar8 + *(int *)(ScreenColorEffectNow + 0x20)) - iVar2)) - iVar8,
                         0,0,0x10,0x10);
      }
      iVar8 = iVar8 + *(int *)(ScreenColorEffectNow + 0x20);
    } while (iVar8 < iVar7);
  }
  pRVar1 = HUD_Pass->command;
  HUD_Pass->command = pRVar1 + 2;
  pRVar3 = HUD_Pass;
  *pRVar1 = NV4097_SET_BLEND_EQUATION_x1;
  pRVar1[1] = 0x80068006;
  pRVar1 = pRVar3->command;
  *pRVar1 = NV4097_SET_BLEND_FUNC_SFACTOR_x2;
  pRVar1[1] = 0x3020302;
  pRVar1[2] = 0x3030303;
  pRVar3->command = pRVar1 + 3;
  FUN_004d86b0(uVar4);
  return;
}



//==== 0006b5a4  ns=draw  size=0x38
// sig: void DrawScreenOverlayTex(int r, int g, int b, int a, void * tex)
// callers(3): 00012b0c boot::ShowSplash; 00012ccc boot::LoadAndShowSplash; 00013760 boot::LoadAndShowSplashVram
// callees(1): 000685e0 draw::DrawFullScreenQuad

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void draw::DrawScreenOverlayTex(int r,int g,int b,int a,void *tex)

{
  DrawFullScreenQuad(a << 0x18 | (b & 0xffU) << 0x10 | (g & 0xffU) << 8 | r & 0xffU,tex);
  return;
}



//==== 0006b5dc  ns=draw  size=0x5c
// sig: void DrawScreenOverlay(int r, int g, int b, int a)
// callers(6): 00010c70 boot::FrontEnd_Draw; 00012ec8 boot::GameStart; 00017ac0 mobyupdate_unsorted::Moby1267_DrawDeathFade; 000784e8 freeze::DrawDialogText; 0013ca68 pause::DrawPauseMenu; 003656c8 mobyupdate_helpers::M408_003656c8
// callees(1): 000685e0 draw::DrawFullScreenQuad

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void draw::DrawScreenOverlay(int r,int g,int b,int a)

{
  DrawFullScreenQuad(a << 0x18 | (b & 0xffU) << 0x10 | (g & 0xffU) << 8 | r & 0xffU,
                     (void *)(EffectTexHeaders + *(int *)(TexInfo + 0x58) * 0x24));
  return;
}



//==== 0006b638  ns=draw  size=0xdc
// sig: void ExecutePostDraws(void)
// callers(0): 
// callees(2): 0050eaf8 idol_draw::RsxCmd_DebugStr_Marker; 0050ec5c idol_draw::RsxCmd_WritePass
// strings: 00651fc8: 'PostDraw'

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void draw::ExecutePostDraws(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if (g_PostDrawCount != 0) {
    idol_draw::RsxCmd_DebugStr_Marker(ForwardPass,"PostDraw");
  }
  iVar3 = 0;
  if (0 < g_PostDrawCount) {
    puVar1 = &g_PostDrawFuncs;
    puVar2 = &g_PostDrawArgs;
    do {
      (**(code **)*puVar1)(*puVar2);
      iVar3 = iVar3 + 1;
      puVar1 = puVar1 + 1;
      puVar2 = puVar2 + 1;
    } while (iVar3 < g_PostDrawCount);
  }
  if (g_PostDrawCount != 0) {
    idol_draw::RsxCmd_WritePass(ForwardPass);
  }
  return;
}



//==== 0006b714  ns=draw  size=0x94
// sig: void ExecuteRegisteredMobyFuncs(void)
// callers(1): 00010c70 boot::FrontEnd_Draw
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void draw::ExecuteRegisteredMobyFuncs(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  iVar1 = 0;
  if (0 < g_MobyFuncListCount) {
    puVar2 = &g_MobyFuncList;
    puVar3 = &g_MobyFuncListArgs;
    do {
      (**(code **)*puVar2)(*puVar3);
      iVar1 = iVar1 + 1;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    } while (iVar1 < g_MobyFuncListCount);
  }
  return;
}



//==== 0006b7a8  ns=draw  size=0xdc
// sig: void ExecutePostPreDraws(void)
// callers(0): 
// callees(2): 0050eaf8 idol_draw::RsxCmd_DebugStr_Marker; 0050ec5c idol_draw::RsxCmd_WritePass
// strings: 00651fd4: 'PostPreDraw'

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void draw::ExecutePostPreDraws(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if (g_PostPreDrawCount != 0) {
    idol_draw::RsxCmd_DebugStr_Marker(ForwardPass,"PostPreDraw");
  }
  iVar3 = 0;
  if (0 < g_PostPreDrawCount) {
    puVar1 = &g_PostPreDrawFuncs;
    puVar2 = &g_PostPreDrawArgs;
    do {
      (**(code **)*puVar1)(*puVar2);
      iVar3 = iVar3 + 1;
      puVar1 = puVar1 + 1;
      puVar2 = puVar2 + 1;
    } while (iVar3 < g_PostPreDrawCount);
  }
  if (g_PostPreDrawCount != 0) {
    idol_draw::RsxCmd_WritePass(ForwardPass);
  }
  return;
}



//==== 0006b890  ns=draw  size=0x200
// sig: void DrawScreenInsertEffect(void * effect)
// callers(1): 0006bb78 draw::DefaultDraw
// callees(7): 000685e0 draw::DrawFullScreenQuad; 0006889c draw::Sprite_DrawShape; 00174f80 vuchain::SetGSReg; 004d86b0 FUN_004d86b0; 004deab8 FUN_004deab8; 00502ea8 idol_draw::PackCmd; 00502ffc stub::VU1_addGSregister

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void draw::DrawScreenInsertEffect(void *effect)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar1 = g_viewMtxPtr;
  FUN_004deab8(g_viewMtxPtr,g_FrameBufWidth,g_FrameBufHeight);
  if (*(ulonglong *)((int)effect + 8) != 0) {
    vuchain::SetGSReg(3,*(ulonglong *)((int)effect + 8) & 0xff000000ff);
  }
  if ((*(uint *)((int)effect + 4) & 0xff000000) != 0) {
    uVar2 = stub::VU1_addGSregister(GSmem.zbuf >> 0xd,1,1);
    vuchain::SetGSReg(0x21,uVar2);
    if ((g_FrameBufHeight == 0x1a0) && (g_FrameBufWidth == 0x200)) {
      DrawFullScreenQuad(*(int *)((int)effect + 4),
                         (void *)(EffectTexHeaders + *(int *)(TexInfo + 0x58) * 0x24));
    }
    else {
      Sprite_DrawShape(0,0,g_FrameBufWidth,g_FrameBufHeight,0,0,0x10,0x10);
    }
    uVar2 = stub::VU1_addGSregister(GSmem.zbuf >> 0xd,1,0);
    vuchain::SetGSReg(0x21,uVar2);
  }
  if (*(longlong *)((int)effect + 8) != 0) {
    uVar2 = idol_draw::PackCmd(0,1,0,1,0x80);
    vuchain::SetGSReg(3,uVar2);
  }
  FUN_004d86b0(uVar1);
  return;
}



//==== 0006ba90  ns=draw  size=0xdc
// sig: void ExecutePreDraws(void)
// callers(0): 
// callees(2): 0050eaf8 idol_draw::RsxCmd_DebugStr_Marker; 0050ec5c idol_draw::RsxCmd_WritePass
// strings: 00651fe0: 'PreDraw'

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void draw::ExecutePreDraws(void)

{
  undefined4 *puVar1;
  MobyInstance **ppMVar2;
  int iVar3;
  
  if (g_PreDrawCount != 0) {
    idol_draw::RsxCmd_DebugStr_Marker(ForwardPass,"PreDraw");
  }
  iVar3 = 0;
  if (0 < g_PreDrawCount) {
    puVar1 = &CurrentOceanSubmitter;
    ppMVar2 = &WaterMoby;
    do {
      (**(code **)*puVar1)(*ppMVar2);
      iVar3 = iVar3 + 1;
      puVar1 = puVar1 + 1;
      ppMVar2 = ppMVar2 + 1;
    } while (iVar3 < g_PreDrawCount);
  }
  if (g_PreDrawCount != 0) {
    idol_draw::RsxCmd_WritePass(ForwardPass);
  }
  return;
}



//==== 0006bb78  ns=draw  size=0x8a8
// sig: undefined DefaultDraw(void)
// callers(5): 0006c424 draw::SetupDefaultDraw; 0006c494 draw::SetupDefaultDrawMovie; 0006c4d8 draw::SetupDefaultDrawFreeze; 001639a8 space::DisplayLoadingScreen; 001744f0 vendor::Vendor_PostUpdate
// callees(33): 00054a10 camera::Camera_DrawReticule; 00055378 camera::TargetCrosshairDraw; 00065630 stub::STUB_00065630; 00066598 draw::RebuildSharedWaveTables; 000668d0 draw::UpdateViewContext; 000685e0 draw::DrawFullScreenQuad; 0006ad48 draw::DrawSubtitles; 0006b1f8 draw::DrawScreenEffect; 0006b890 draw::DrawScreenInsertEffect; 00074fa0 draw::ImpactSprite_Draw; 0007c978 help::Help_Draw; 000d5c20 hud::DrawGameplayHud; 000d93c0 initsky::InitSky; 000f0fe8 mobyfunc::CleanAnimationCache; 000f1a78 mobyfunc::DrawMobys; 0011ef18 partproc::DrawParts; 001595d0 skyfunc::SkyLevelGeneric; 004d5fe4 idol_draw::DrawDepth; 004ec6ec idol_draw::InitFrameRenderState; 004ec8a4 FUN_004ec8a4; 004ecc84 FUN_004ecc84; 004ed144 FUN_004ed144; 00502758 fastfunc::FastDoubleToInt; 00502ea8 idol_draw::PackCmd; 00508738 FUN_00508738; 00508c10 shrubfunc::DrawShrub; 0050b08c FUN_0050b08c; 0050bf38 tfragfunc::DrawTfrag; 0050bfd4 FUN_0050bfd4; 0050c020 FUN_0050c020; 0050c5e0 tiefunc::DrawTie; 0050eaf8 idol_draw::RsxCmd_DebugStr_Marker; 0050ec5c idol_draw::RsxCmd_WritePass
// strings: 00651fe0: 'PreDraw' | 00651fd4: 'PostPreDraw' | 00651fc8: 'PostDraw' | 00651fe8: 'screen overlays'

void draw::DefaultDraw(void)

{
  RenderingStep *pRVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  MobyInstance **ppMVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined1 auStack_50 [4];
  undefined4 local_4c;
  undefined4 local_48;
  undefined1 auStack_44 [4];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  byte g;
  byte r;
  byte b;
  
  mobyfunc::CleanAnimationCache();
  RebuildSharedWaveTables();
  idol_draw::InitFrameRenderState
            (&DAT_01111700,DirectionalLights,0x10,PointLights,8,&DAT_00a4c4e0,4);
  if ((g_RenderFlags & Tfrags) != 0) {
    FUN_0050b08c(&TEX_BASE,&local_38);
    FUN_004ec8a4(&DAT_01111700,local_34,local_38);
    FUN_0050bfd4(&local_38);
  }
  if ((g_RenderFlags & Ties) != 0) {
    FUN_0050c020(&TEX_BASE,auStack_50);
    FUN_004ecc84(&DAT_01111700,local_4c,local_48);
  }
  if ((g_RenderFlags & Shrubs) != 0) {
    FUN_00508738(&TEX_BASE,auStack_44);
    FUN_004ed144(&DAT_01111700,local_40,local_3c);
  }
  if ((g_RenderFlags & Sky) != 0) {
    if (g_FrontEnd == '\0') {
      initsky::InitSky();
    }
    else {
      skyfunc::SkyLevelGeneric();
    }
  }
  if ((g_RenderFlags & Tfrags) != 0) {
    tfragfunc::DrawTfrag(&TEX_BASE,&local_38);
  }
  if ((g_RenderFlags & Ties) != 0) {
    tiefunc::DrawTie(&TEX_BASE,auStack_50);
  }
  if ((debug::g_DebugEnables[0xd] != 0) && (g_PreDrawCount != 0)) {
    idol_draw::RsxCmd_DebugStr_Marker(ForwardPass,"PreDraw");
    iVar7 = 0;
    if (0 < g_PreDrawCount) {
      puVar5 = &CurrentOceanSubmitter;
      ppMVar4 = &WaterMoby;
      do {
        (**(code **)*puVar5)(*ppMVar4);
        iVar7 = iVar7 + 1;
        puVar5 = puVar5 + 1;
        ppMVar4 = ppMVar4 + 1;
      } while (iVar7 < g_PreDrawCount);
    }
    if (g_PreDrawCount != 0) {
      idol_draw::RsxCmd_WritePass(ForwardPass);
    }
  }
  if ((g_RenderFlags & Shrubs) != 0) {
    shrubfunc::DrawShrub(&TEX_BASE,auStack_44);
  }
  if (g_ScreenInsertEffect != '\0') {
    DrawScreenInsertEffect(&g_ScreenInsertEffect);
  }
  if ((debug::g_DebugEnables[0xd] != 0) && (g_PostPreDrawCount != 0)) {
    idol_draw::RsxCmd_DebugStr_Marker(ForwardPass,"PostPreDraw");
    iVar7 = 0;
    if (0 < g_PostPreDrawCount) {
      puVar6 = &g_PostPreDrawFuncs;
      puVar5 = &g_PostPreDrawArgs;
      do {
        (**(code **)*puVar6)(*puVar5);
        iVar7 = iVar7 + 1;
        puVar6 = puVar6 + 1;
        puVar5 = puVar5 + 1;
      } while (iVar7 < g_PostPreDrawCount);
    }
    if (g_PostPreDrawCount != 0) {
      idol_draw::RsxCmd_WritePass(ForwardPass);
    }
  }
  mobyfunc::DrawMobys();
  if (((g_RenderFlags & Ocean) != 0) && (debug::g_DebugEnables[0xd] != 0)) {
    if (g_MobyFuncListCount != 0) {
      iVar7 = 0;
      if (0 < g_MobyFuncListCount) {
        puVar6 = &g_MobyFuncList;
        puVar5 = &g_MobyFuncListArgs;
        do {
          (**(code **)*puVar6)(*puVar5);
          iVar7 = iVar7 + 1;
          puVar6 = puVar6 + 1;
          puVar5 = puVar5 + 1;
        } while (iVar7 < g_MobyFuncListCount);
      }
    }
    camera::Camera_DrawReticule();
  }
  if (debug::g_DebugEnables[0xe] != 0) {
    partproc::DrawParts();
  }
  if (debug::g_DebugEnables[0xf] != 0) {
    if (g_PostDrawCount != 0) {
      idol_draw::RsxCmd_DebugStr_Marker(ForwardPass,"PostDraw");
      iVar7 = 0;
      if (0 < g_PostDrawCount) {
        puVar6 = &g_PostDrawFuncs;
        puVar5 = &g_PostDrawArgs;
        do {
          (**(code **)*puVar6)(*puVar5);
          iVar7 = iVar7 + 1;
          puVar6 = puVar6 + 1;
          puVar5 = puVar5 + 1;
        } while (iVar7 < g_PostDrawCount);
      }
      if (g_PostDrawCount != 0) {
        idol_draw::RsxCmd_WritePass(ForwardPass);
      }
    }
    if (g_gameMode == GAME_MODE_NORMAL) {
      ImpactSprite_Draw();
    }
    camera::TargetCrosshairDraw();
  }
  pRVar1 = HUD_Pass;
                    /* Handles screen overlays such as when you're underwater */
  if ((g_RenderFlags & Screen_Overlays) != 0) {
    if (debug::g_DebugEnables[0x11] != 0) {
      uVar2 = idol_draw::PackCmd(0,1,0,1,0x80);
      idol_draw::DrawDepth(pRVar1,uVar2);
      if (GameCamera.camUnderWater != 0) {
        DrawFullScreenQuad(CONCAT13(DAT_0073a963,
                                    CONCAT12(DAT_0073a962,CONCAT11(DAT_0073a961,DAT_0073a960))),
                           (void *)(EffectTexHeaders + *(int *)(TexInfo + 0x58) * 0x24));
      }
      if (0 < (int)boot::SceneScreenFade) {
        if (0x3f800000 <
            (int)(((uint)((int)boot::SceneScreenFade >> 0x1f) >> 1 ^ (uint)boot::SceneScreenFade) -
                 ((int)boot::SceneScreenFade >> 0x1f))) {
          boot::SceneScreenFade = 1.0;
        }
        uVar3 = fastfunc::FastDoubleToInt((double)(boot::SceneScreenFade * 128.0));
        DrawFullScreenQuad((int)((uVar3 & 0xffffffff) << 0x18),
                           (void *)(EffectTexHeaders + *(int *)(TexInfo + 0x58) * 0x24));
      }
      if (0 < (int)DAT_0095cf14) {
        if (0x3f800000 <
            (int)(((uint)((int)DAT_0095cf14 >> 0x1f) >> 1 ^ (uint)DAT_0095cf14) -
                 ((int)DAT_0095cf14 >> 0x1f))) {
          DAT_0095cf14 = 1.0;
        }
        uVar3 = fastfunc::FastDoubleToInt((double)(DAT_0095cf14 * 128.0));
        DrawFullScreenQuad((uint)((uVar3 & 0xffffffff) << 0x18) | 0xffffff,
                           (void *)(EffectTexHeaders + *(int *)(TexInfo + 0x58) * 0x24));
      }
      if ((ScreenColorEffectEnabled != '\0') && (ScreenColorEffectNow != (undefined *)0x0)) {
        DrawScreenEffect();
      }
    }
    stub::STUB_00065630("screen overlays",10);
  }
  if (((g_RenderFlags & HUD) != 0) && (debug::g_DebugEnables[0x10] != 0)) {
    hud::DrawGameplayHud();
    help::Help_Draw();
    if (LetterBoxOn == 0) {
      if (LetterBoxPixels != 0) {
        LetterBoxPixels = LetterBoxPixels + -1;
      }
    }
    else if (LetterBoxPixels < 0x18) {
      LetterBoxPixels = LetterBoxPixels + 1;
    }
  }
  if ((g_gameMode == GAME_MODE_SCENE) && (DAT_00969c78 != '\0')) {
    DrawSubtitles();
  }
  if (GameCamera.camUnderWater == 0) {
    PartClipDist = 0x1f4000;
    b = levelFog.b;
    g = levelFog.g;
    r = levelFog.r;
    ViewContext.fogFarIntensity = LevelFogFarIntensity;
    ViewContext.fogNearIntensity = LevelFogNearIntensity;
    ViewContext.fogFarDist = LevelFogFarDist;
    ViewContext.fogNearDist = LevelFogNearDist;
  }
  else {
    PartClipDist = 0x40000;
    b = WaterFog.b;
    g = WaterFog.g;
    r = WaterFog.r;
    ViewContext.fogFarIntensity = WaterFogFarIntensity;
    ViewContext.fogNearIntensity = WaterFogNearIntensity;
    ViewContext.fogFarDist = WaterFogFarDist;
    ViewContext.fogNearDist = WaterFogNearDist;
  }
  ViewContext.fogR = (int)r;
  ViewContext.fogG = (int)g;
  ViewContext.fogB = (int)b;
  UpdateViewContext();
  LevelFogMode = 0;
  return;
}



//==== 0006c424  ns=draw  size=0x70
// sig: undefined SetupDefaultDraw(void)
// callers(2): 00010c70 boot::FrontEnd_Draw; 000e0e60 main::startLevel
// callees(1): 0006bb78 draw::DefaultDraw

void draw::SetupDefaultDraw(void)

{
  if ((g_CutscenePlaying == 0) && (g_HeroIsOutOfBounds == '\0')) {
    g_RenderFlags = 0x100ff;
    if (g_gameMode == GAME_MODE_PAUSE) {
      g_RenderFlags = 0x7f;
    }
    DefaultDraw();
  }
  return;
}



//==== 0006c494  ns=draw  size=0x44
// sig: undefined SetupDefaultDrawMovie(void)
// callers(2): 000e0e60 main::startLevel; 001639a8 space::DisplayLoadingScreen
// callees(2): 0006bb78 draw::DefaultDraw; 00078100 stub::STUB_00078100

void draw::SetupDefaultDrawMovie(void)

{
  if (g_CutscenePlaying == 0) {
    stub::STUB_00078100();
    g_RenderFlags = 0x7f;
    DefaultDraw();
  }
  return;
}



//==== 0006c4d8  ns=draw  size=0x80
// sig: undefined SetupDefaultDrawFreeze(void)
// callers(1): 000e0e60 main::startLevel
// callees(5): 0006bb78 draw::DefaultDraw; 00078100 stub::STUB_00078100; 00078158 freeze::GetFreezePrevGameMode; 000784e8 freeze::DrawDialogText; 0013ca68 pause::DrawPauseMenu

void draw::SetupDefaultDrawFreeze(void)

{
  gameMode_t gVar1;
  
  if (g_CutscenePlaying == 0) {
    gVar1 = freeze::GetFreezePrevGameMode();
    if (gVar1 == GAME_MODE_NORMAL) {
      stub::STUB_00078100();
      g_RenderFlags = 0x100ff;
      DefaultDraw();
    }
    else {
      gVar1 = freeze::GetFreezePrevGameMode();
      if (gVar1 == GAME_MODE_PAUSE) {
        pause::DrawPauseMenu(1);
      }
    }
    freeze::DrawDialogText();
  }
  return;
}



//==== 0006c558  ns=draw  size=0x84
// sig: undefined InitLevelRenderState(void)
// callers(1): 000e0e60 main::startLevel
// callees(2): 0013ca68 pause::DrawPauseMenu; 004ec6ec idol_draw::InitFrameRenderState

void draw::InitLevelRenderState(void)

{
  if (g_CutscenePlaying == 0) {
    DAT_010ee2f0 = 0xffffffff;
    idol_draw::InitFrameRenderState
              (&DAT_01111700,DirectionalLights,0x10,PointLights,8,&DAT_00a4c4e0,4);
    pause::DrawPauseMenu(0);
  }
  return;
}



//==== 0006c5dc  ns=draw  size=0x10
// sig: void EnableFontColors(void)
// callers(8): 00011648 boot::LoadGameplay; 000dcf58 loaders::NAVG_LoadFile; 001402c8 pause::MenuText_Draw; 00141c90 pause::DrawPauseStrings; 00144638 pause::DrawSkillPointsFrame; 001476f0 pause::MapMenu_DrawOptions; 00147cf8 pause::DrawMissionsFrame; 0014d63c pause::Draw_GameCompletedFrame
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void draw::EnableFontColors(void)

{
  g_FontColorsEnabled = 1;
  return;
}



//==== 0006c5ec  ns=draw  size=0x2e4
// sig: undefined FontPrintJapanese(void)
// callers(11): 0006cc0c draw::FontPrintMediumLeft; 0006cea0 draw::DrawFancyTextWithBox; 0006fc54 draw::FontPrintSmallLeft; 0006fcfc draw::FontPrintLarge; 00070130 draw::FontPrintMediumRight; 0007027c draw::FontPrintSmallRight; 000703c8 draw::FontPrintLargeRight; 00070514 draw::FontPrintMediumCenter; 00070834 draw::FontPrintSmallCenter; 00070998 draw::FontPrintLargeCenter; 0014d63c pause::Draw_GameCompletedFrame
// callees(1): 0006889c draw::Sprite_DrawShape

void draw::FontPrintJapanese
               (int param_1,int param_2,undefined4 param_3,int param_4,int param_5,
               undefined8 param_6,int param_7)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (DAT_0095ee18 == 0) {
    DAT_0071ef98 = param_3;
  }
  iVar5 = 0;
  if (param_5 != 0) {
    do {
      bVar1 = *(byte *)(param_4 + iVar5);
      if (bVar1 == 0) {
        return;
      }
      iVar3 = (uint)bVar1 * 4;
      if (((bVar1 < 8) || (0xf < bVar1)) && (iVar4 = param_7 + iVar3, *(char *)(iVar4 + 3) != '\0'))
      {
        if (bVar1 < 0x20) {
          Sprite_DrawShape(param_1,param_2 + *(char *)(iVar4 + 2),0x18,0x10,
                           *(undefined1 *)(param_7 + iVar3),*(undefined1 *)(iVar4 + 1),0x18,0x10);
        }
        else {
          if ((0xbc < bVar1) && (bVar1 < 0xbf)) {
            bVar1 = *(byte *)(param_4 + iVar5 + -1);
            iVar2 = param_7 + (bVar1 + 0x80) * 4;
            Sprite_DrawShape((param_1 - *(char *)(param_7 + (uint)bVar1 * 4 + 3)) +
                             (int)*(char *)(iVar2 + 3),param_2 + *(char *)(iVar2 + 2),0x10,0x10,
                             *(undefined1 *)(param_7 + iVar3),*(undefined1 *)(iVar4 + 1),0x10,0x10);
            param_1 = ((int)*(char *)(iVar2 + 3) -
                      (int)*(char *)(param_7 + (uint)*(byte *)(param_4 + iVar5 + -1) * 4 + 3)) +
                      ((uint)LZCOUNT(*(byte *)(param_4 + iVar5) - 0xbe) >> 5) + param_1 + 4;
            goto LAB_0006c884;
          }
          if (0x20 < bVar1) {
            Sprite_DrawShape(param_1,param_2 + *(char *)(iVar4 + 2),0x10,0x10,
                             *(undefined1 *)(param_7 + iVar3),*(undefined1 *)(iVar4 + 1),0x10,0x10);
          }
        }
        param_1 = param_1 + *(char *)(param_7 + (uint)*(byte *)(param_4 + iVar5) * 4 + 3);
      }
LAB_0006c884:
      iVar5 = iVar5 + 1;
    } while (iVar5 != param_5);
  }
  return;
}



//==== 0006c8d0  ns=draw  size=0x33c
// sig: undefined FontPrint(void)
// callers(11): 0006cc0c draw::FontPrintMediumLeft; 0006cea0 draw::DrawFancyTextWithBox; 0006fc54 draw::FontPrintSmallLeft; 0006fcfc draw::FontPrintLarge; 00070130 draw::FontPrintMediumRight; 0007027c draw::FontPrintSmallRight; 000703c8 draw::FontPrintLargeRight; 00070514 draw::FontPrintMediumCenter; 00070834 draw::FontPrintSmallCenter; 00070998 draw::FontPrintLargeCenter; 0014d63c pause::Draw_GameCompletedFrame
// callees(4): 0006889c draw::Sprite_DrawShape; 00174f80 vuchain::SetGSReg; 00502ea8 idol_draw::PackCmd; 00502f7c idol_draw::Blend

void draw::FontPrint(int param_1,int param_2,undefined4 param_3,int param_4,int param_5,
                    undefined8 param_6,int param_7)

{
  byte bVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  uVar2 = idol_draw::PackCmd(0,1,0,1,0);
  vuchain::SetGSReg(3,uVar2);
  uVar2 = idol_draw::Blend(1,5,4,0,0,0,0,1);
  vuchain::SetGSReg(0x16,uVar2);
  if (DAT_0095ee18 == 0) {
    DAT_0071ef98 = param_3;
  }
  iVar6 = 0;
  if (param_5 != 0) {
    do {
      bVar1 = *(byte *)(param_4 + iVar6);
      uVar3 = (uint)bVar1;
      if (bVar1 == 0) {
        return;
      }
      if ((0xf < bVar1 || bVar1 < 8) && (*(char *)(param_7 + (uint)bVar1 * 4 + 3) != '\0')) {
        if ((char)bVar1 < -0x58) {
          iVar4 = (uVar3 + 0x40) * 4;
          iVar5 = param_7 + iVar4;
          Sprite_DrawShape(param_1 + *(char *)(iVar5 + 3),param_2 + *(char *)(iVar5 + 2),0x10,0x10,
                           *(undefined1 *)(param_7 + iVar4),*(undefined1 *)(iVar5 + 1),0x10,0x10);
          uVar3 = (uint)*(byte *)(param_4 + iVar6);
        }
        iVar5 = uVar3 * 4;
        iVar4 = param_7 + iVar5;
        if (uVar3 < 0x20) {
          Sprite_DrawShape(param_1,param_2 + *(char *)(iVar4 + 2),0x18,0x10,
                           *(undefined1 *)(param_7 + iVar5),*(undefined1 *)(iVar4 + 1),0x18,0x10);
        }
        else if (0x20 < uVar3) {
          Sprite_DrawShape(param_1,param_2 + *(char *)(iVar4 + 2),0x10,0x10,
                           *(undefined1 *)(param_7 + iVar5),*(undefined1 *)(iVar4 + 1),0x10,0x10);
        }
        param_1 = param_1 + *(char *)(param_7 + (uint)*(byte *)(param_4 + iVar6) * 4 + 3);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 != param_5);
  }
  return;
}



//==== 0006cc0c  ns=draw  size=0xa8
// sig: undefined FontPrintMediumLeft(void)
// callers(7): 00146708 pause::PlanetInfo_Draw; 00147bb0 pause::ExitSelectPrompt_Draw; 00147cf8 pause::DrawMissionsFrame; 00149f88 pause::SlotConfig_Draw; 0014a86c pause::ConfirmDialog_Draw; 0014bf78 pause::MenuIconText_Draw; 004d27b0 idol_draw::DrawGalacticMapFrame
// callees(2): 0006c5ec draw::FontPrintJapanese; 0006c8d0 draw::FontPrint

void draw::FontPrintMediumLeft
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  if (g_JapaneseMode) {
    FontPrintJapanese(param_1,param_2,param_3,param_4,param_5,*(undefined4 *)(TexInfo + 4),
                      &JapaneseGlyphs);
  }
  else {
    FontPrint(param_1,param_2,param_3,param_4,param_5,*(undefined4 *)(TexInfo + 4),
              &MediumWesternGlyphs);
  }
  return;
}



//==== 0006ccb4  ns=draw  size=0x10
// sig: void DisableFontColors(void)
// callers(6): 001402c8 pause::MenuText_Draw; 00141c90 pause::DrawPauseStrings; 00144638 pause::DrawSkillPointsFrame; 001476f0 pause::MapMenu_DrawOptions; 00147cf8 pause::DrawMissionsFrame; 0014d63c pause::Draw_GameCompletedFrame
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void draw::DisableFontColors(void)

{
  g_FontColorsEnabled = 0;
  return;
}



//==== 0006ccc4  ns=draw  size=0xbc
// sig: int FontLenWithTable(char * s, int len, void * glyphs)
// callers(10): 0006cde8 draw::FontLen; 0006cea0 draw::DrawFancyTextWithBox; 0006f7b0 draw::FontLenSmall; 0006f860 draw::FontLenLarge; 00070130 draw::FontPrintMediumRight; 0007027c draw::FontPrintSmallRight; 000703c8 draw::FontPrintLargeRight; 00070514 draw::FontPrintMediumCenter; 00070834 draw::FontPrintSmallCenter; 00070998 draw::FontPrintLargeCenter
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int draw::FontLenWithTable(char *s,int len,void *glyphs)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar3 = 0;
  if (len != 0) {
    do {
      bVar2 = s[iVar4];
      if (bVar2 == 0) {
        return iVar3;
      }
      cVar1 = *(char *)((int)glyphs + (uint)bVar2 * 4 + 3);
      if (cVar1 != '\0') {
        if ((bVar2 < 0xbd) || (0xbe < bVar2)) {
          iVar3 = iVar3 + cVar1;
        }
        else {
          iVar3 = ((int)*(char *)((int)glyphs + (uint)(byte)s[iVar4 + -1] * 4 + 0x203) -
                  (int)*(char *)((int)glyphs + (uint)(byte)s[iVar4 + -1] * 4 + 3)) +
                  ((uint)LZCOUNT(bVar2 - 0xbe) >> 5) + iVar3 + 4;
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 != len);
  }
  return iVar3;
}



//==== 0006cd80  ns=draw  size=0x68
// sig: int FontLenWithTableNoKern(char * s, int len, void * glyphs)
// callers(0): 
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int draw::FontLenWithTableNoKern(char *s,int len,void *glyphs)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar3 = 0;
  if (len != 0) {
    do {
      bVar1 = s[iVar2];
      if (bVar1 == 0) {
        return iVar3;
      }
      if (*(char *)((int)glyphs + (uint)bVar1 * 4 + 3) != '\0') {
        iVar3 = iVar3 + *(char *)((int)glyphs + (uint)bVar1 * 4 + 3);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 != len);
  }
  return iVar3;
}



//==== 0006cde8  ns=draw  size=0xb0
// sig: int FontLen(char * s, int len)
// callers(7): 000cc450 hud::Draw_PromptMsg; 000d6148 hud::Draw_RaceLapPlaceHud; 000d6710 hud::Draw_RaceTimeScoreHud; 00146708 pause::PlanetInfo_Draw; 0014d63c pause::Draw_GameCompletedFrame; 00170490 vendor::DrawWeaponStrings; 004d27b0 idol_draw::DrawGalacticMapFrame
// callees(1): 0006ccc4 draw::FontLenWithTable

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int draw::FontLen(char *s,int len)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  
  if (g_JapaneseMode) {
    iVar2 = FontLenWithTable(s,len,&JapaneseGlyphs);
  }
  else {
    iVar3 = 0;
    iVar2 = 0;
    if (len != 0) {
      do {
        bVar1 = s[iVar3];
        if (bVar1 == 0) {
          return iVar2;
        }
        if ((&DAT_007368b3)[(uint)bVar1 * 4] != '\0') {
          iVar2 = iVar2 + (char)(&DAT_007368b3)[(uint)bVar1 * 4];
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 != len);
    }
  }
  return iVar2;
}



//==== 0006cea0  ns=draw  size=0x2dc
// sig: undefined DrawFancyTextWithBox(void)
// callers(1): 0006d190 draw::DrawTimedHelpMsg
// callees(5): 0006c5ec draw::FontPrintJapanese; 0006c8d0 draw::FontPrint; 0006ccc4 draw::FontLenWithTable; 000cc148 hud::Hud_DrawTextBox; 00502758 fastfunc::FastDoubleToInt

void draw::DrawFancyTextWithBox
               (double param_1,double param_2,longlong param_3,int param_4,int param_5,
               undefined8 param_6,undefined8 param_7,char *param_8)

{
  uint uVar1;
  byte bVar2;
  int iVar5;
  longlong lVar3;
  undefined8 uVar4;
  int iVar6;
  int iVar7;
  
  if (g_JapaneseMode) {
    iVar5 = FontLenWithTable(param_8,-1,&JapaneseGlyphs);
  }
  else {
    iVar6 = 0;
    iVar5 = 0;
    do {
      bVar2 = param_8[iVar6];
      if (bVar2 == 0) break;
      if ((&DAT_007368b3)[(uint)bVar2 * 4] != '\0') {
        iVar5 = iVar5 + (char)(&DAT_007368b3)[(uint)bVar2 * 4];
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 != -1);
  }
  uVar1 = (uint)((double)(longlong)iVar5 * param_1);
  lVar3 = param_3;
  if (param_5 < 0) {
    if (-2 < param_5) {
      lVar3 = (ulonglong)uVar1 + param_3;
    }
  }
  else if (param_5 < 1) {
    lVar3 = param_3 + ((int)uVar1 >> 1);
    param_3 = (longlong)((int)param_3 - ((int)uVar1 >> 1));
  }
  else if (param_5 < 2) {
    param_3 = (longlong)(int)((int)param_3 - uVar1);
  }
  iVar6 = (int)param_3;
  uVar4 = fastfunc::FastDoubleToInt((double)(float)(param_1 * 112.0));
  hud::Hud_DrawTextBox(iVar6 + -0x20,param_4 + -0xe,((int)lVar3 - iVar6) + 0x40,0x1c,uVar4);
  g_FontColorsEnabled = 0;
  iVar5 = (int)(param_2 * 128.0) * 0x1000000;
  iVar7 = iVar5 + 0xe0e0e0;
  if (g_JapaneseMode == false) {
    FontPrint();
  }
  else {
    FontPrintJapanese(iVar6 + 1,param_4 + -7,iVar5,param_8,0xffffffffffffffff,
                      *(undefined4 *)(TexInfo + 4),&JapaneseGlyphs);
  }
  if (g_JapaneseMode == false) {
    FontPrint(param_3,param_4 + -8,iVar7,param_8,0xffffffffffffffff,*(undefined4 *)(TexInfo + 4),
              &MediumWesternGlyphs);
  }
  else {
    FontPrintJapanese(param_3,param_4 + -8,iVar7,param_8,0xffffffffffffffff,
                      *(undefined4 *)(TexInfo + 4),&JapaneseGlyphs);
  }
  g_FontColorsEnabled = 1;
  return;
}



//==== 0006d190  ns=draw  size=0x3f8
// sig: undefined DrawTimedHelpMsg(void)
// callers(1): 0006d590 draw::DrawSomeOverlay
// callees(2): 0006cea0 draw::DrawFancyTextWithBox; 0007b740 help::help_msg_string_by_index

void draw::DrawTimedHelpMsg(undefined8 param_1,int param_2)

{
  char cVar1;
  short sVar2;
  int *piVar3;
  char *pcVar4;
  char *pcVar5;
  int iVar6;
  char *pcVar7;
  longlong lVar8;
  byte in_cr6;
  double dVar9;
  double dVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  char local_150 [288];
  
  auVar11 = ZEXT416(0xfffffff0);
  auVar11 = auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60;
  piVar3 = (int *)param_1;
  sVar2 = *(short *)(piVar3 + 2);
  auVar13 = loadVectorLeftIndexed(8,param_1);
  auVar12 = loadVectorLeftIndexed(10,param_1);
  auVar14 = vectorShiftRightAlgebraicWord(auVar13,auVar11);
  auVar11 = vectorShiftRightAlgebraicWord(auVar12,auVar11);
  iVar6 = (int)sVar2 + (int)*(short *)((int)piVar3 + 10);
  auVar15._0_4_ = auVar14._0_4_ + auVar11._0_4_;
  auVar15._8_8_ = auVar11._8_8_;
  auVar15._4_4_ = auVar14._4_4_ + auVar11._4_4_;
  auVar13._0_8_ = auVar15._0_8_;
  auVar13._12_4_ = auVar11._12_4_;
  auVar13._8_4_ = auVar14._8_4_ + auVar11._8_4_;
  auVar12._0_12_ = auVar13._0_12_;
  auVar12._12_4_ = auVar14._12_4_ + auVar13._12_4_;
  auVar11._0_4_ = param_2;
  auVar11._4_4_ = param_2;
  auVar11._8_4_ = param_2;
  auVar11._12_4_ = param_2;
  if (param_2 <= iVar6 && sVar2 <= param_2) {
    dVar9 = 1.0;
    dVar10 = dVar9;
    if (param_2 < sVar2 + 0x10) {
      dVar10 = (double)((float)(longlong)(param_2 - sVar2) * 0.0625);
    }
    if (iVar6 + -8 < param_2) {
      dVar10 = (double)((float)(longlong)(iVar6 - param_2) * 0.125);
    }
    if (param_2 < sVar2 + 0x20) {
      auVar14 = vectorSubtractUnsignedWordModulo(auVar11,auVar14);
      auVar13 = ZEXT416(0xffffffff);
      auVar15 = auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60;
      auVar13 = loadVectorLeftIndexed(0xc,0x6d17c);
      auVar16 = vectorShiftLeftIntegerWord(auVar15,auVar15);
      auVar15 = auVar13 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar13 = ZEXT416(0);
      auVar14 = vectorSubtractUnsignedWordModulo
                          (auVar14,auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60);
      auVar15 = loadVectorLeftIndexed(4,0x6d17c);
      auVar15 = auVar15 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar14 = vectorConvertFromSignedFixedPointWord(auVar14,0);
      auVar15 = vectorMultiplyAddFloatingPoint
                          (auVar14,auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60,
                           auVar16);
      dVar9 = (double)((float)(longlong)((param_2 - sVar2) + -0x10) * 0.0625);
      auVar15 = auVar15 >> 0x60 & (undefined1  [16])0xffffffff;
      vectorCompareGreaterThanOrEqualToFloatingPoint
                (auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60,
                 auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60);
      if ((bool)(in_cr6 >> 1 & 1)) {
        dVar9 = 0.0;
      }
    }
    if (iVar6 + -0x10 < param_2) {
      auVar13 = vectorSubtractUnsignedWordModulo(auVar12,auVar11);
      auVar11 = ZEXT416(8);
      auVar12 = ZEXT416(0);
      auVar13 = vectorSubtractUnsignedWordModulo
                          (auVar13,auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60);
      auVar11 = ZEXT416(0xffffffff);
      auVar11 = auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60;
      auVar13 = vectorConvertFromSignedFixedPointWord(auVar13,0);
      auVar14 = loadVectorLeftIndexed(8,0x6d17c);
      auVar15 = vectorShiftLeftIntegerWord(auVar11,auVar11);
      auVar11 = auVar14 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar11 = vectorMultiplyAddFloatingPoint
                          (auVar13,auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60,
                           auVar15);
      auVar11 = auVar11 >> 0x60 & (undefined1  [16])0xffffffff;
      dVar9 = (double)((float)(longlong)((iVar6 - param_2) + -8) * 0.125);
      vectorCompareGreaterThanOrEqualToFloatingPoint
                (auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60,
                 auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60);
      if ((bool)(in_cr6 >> 1 & 1)) {
        dVar9 = 0.0;
      }
    }
    pcVar4 = (char *)help::help_msg_string_by_index
                               (*piVar3 + (int)((longlong)*piVar3 + -0x5136 >> 0x3f));
    if (*(short *)((int)piVar3 + 0xe) == 1) {
      cVar1 = *pcVar4;
      pcVar5 = local_150;
      while (cVar1 != '\0') {
        if (*pcVar4 == '\x01') {
          *pcVar5 = ' ';
          pcVar5[1] = '-';
          pcVar5[2] = ' ';
          cVar1 = *pcVar4;
          while (cVar1 == '\x01') {
            pcVar4 = pcVar4 + 1;
            cVar1 = *pcVar4;
          }
          pcVar7 = pcVar5 + 3;
          if (*pcVar4 == '\0') {
            pcVar7 = pcVar5;
          }
        }
        else {
          cVar1 = *pcVar4;
          pcVar4 = pcVar4 + 1;
          *pcVar5 = cVar1;
          pcVar7 = pcVar5 + 1;
        }
        pcVar5 = pcVar7;
        cVar1 = *pcVar4;
      }
      *pcVar5 = '\0';
      DrawFancyTextWithBox
                (dVar10,dVar9,*(undefined2 *)(piVar3 + 1),*(undefined2 *)((int)piVar3 + 6),
                 *(undefined2 *)(piVar3 + 3));
    }
    else {
      lVar8 = (longlong)*(short *)((int)piVar3 + 6);
      cVar1 = *pcVar4;
      pcVar5 = local_150;
      while (cVar1 != '\0') {
        if (*pcVar4 == '\x01') {
          *pcVar5 = '\0';
          DrawFancyTextWithBox
                    (dVar10,dVar9,*(undefined2 *)(piVar3 + 1),lVar8,*(undefined2 *)(piVar3 + 3));
          lVar8 = (longlong)((int)lVar8 + 0x1a);
          cVar1 = *pcVar4;
          while (cVar1 == '\x01') {
            pcVar4 = pcVar4 + 1;
            cVar1 = *pcVar4;
          }
          pcVar5 = local_150;
          if (*pcVar4 == '\0') break;
        }
        else {
          cVar1 = *pcVar4;
          pcVar4 = pcVar4 + 1;
          *pcVar5 = cVar1;
          pcVar5 = pcVar5 + 1;
        }
        cVar1 = *pcVar4;
      }
      if (local_150 < pcVar5) {
        *pcVar5 = '\0';
        DrawFancyTextWithBox
                  (dVar10,dVar9,*(undefined2 *)(piVar3 + 1),lVar8,*(undefined2 *)(piVar3 + 3));
      }
    }
  }
  return;
}



//==== 0006d590  ns=draw  size=0x174
// sig: undefined DrawSomeOverlay(void)
// callers(1): 000e0e60 main::startLevel
// callees(4): 000685e0 draw::DrawFullScreenQuad; 0006889c draw::Sprite_DrawShape; 0006d190 draw::DrawTimedHelpMsg; 00502758 fastfunc::FastDoubleToInt

void draw::DrawSomeOverlay(void)

{
  int *piVar1;
  ulonglong uVar2;
  int iVar3;
  undefined4 *puVar4;
  
  if (g_CutscenePlaying == 0) {
    TexSamplerFlags = 5;
    Sprite_DrawShape(0,0,0x200,0x1a0,0,0,0x100,0xd0);
    if (0 < (int)boot::SceneScreenFade) {
      if (0x3f800000 <
          (int)(((uint)((int)boot::SceneScreenFade >> 0x1f) >> 1 ^ (uint)boot::SceneScreenFade) -
               ((int)boot::SceneScreenFade >> 0x1f))) {
        boot::SceneScreenFade = 1.0;
      }
      uVar2 = fastfunc::FastDoubleToInt((double)(boot::SceneScreenFade * 128.0));
      DrawFullScreenQuad((int)((uVar2 & 0xffffffff) << 0x18),
                         (void *)(EffectTexHeaders + *(int *)(TexInfo + 0x58) * 0x24));
    }
    puVar4 = &DAT_0071fbdc;
    if (-1 < DAT_0071fbdc) {
      iVar3 = 0;
      do {
        DrawTimedHelpMsg(puVar4,DAT_00a15c22);
        puVar4 = puVar4 + 4;
        piVar1 = (int *)(&DAT_0071fbec + iVar3);
        iVar3 = iVar3 + 0x10;
      } while (-1 < *piVar1);
    }
  }
  return;
}



//==== 0006d704  ns=stub  size=0x4
// sig: undefined STUB_0006d704(void)
// callers(35): 000784e8 freeze::DrawDialogText; 000e0e60 main::startLevel; 000e2e10 map::DrawMapFrame; 0013ca68 pause::DrawPauseMenu; 0013de20 pause::FrontEnd_DrawMenu; 0013fd08 pause::IconList_Draw; 001402c8 pause::MenuText_Draw; 00141c90 pause::DrawPauseStrings; 00144084 pause::DrawSoundOptionsFrame; 00144638 pause::DrawSkillPointsFrame; 00144ec0 pause::MenuButton_Draw; 00145b8c pause::ItemView_Draw; 00146708 pause::PlanetInfo_Draw; 00146b14 pause::GoldBoltWidget_Update; 00147044 pause::Update_FoundGBsShipMenu; 00147334 pause::ItemInfo_DrawCost; 001476f0 pause::MapMenu_DrawOptions; 00147bb0 pause::ExitSelectPrompt_Draw; 00147cf8 pause::DrawMissionsFrame; 001491f0 pause::ImageWidget_DrawWithText; 001499c4 pause::HelpControls_Draw; 00149f88 pause::SlotConfig_Draw; 0014a86c pause::ConfirmDialog_Draw; 0014ad88 pause::DrawCameraSettingsFrame; 0014b9a8 pause::MessageBox_Draw
// callees(0): 

void stub::STUB_0006d704(void)

{
  return;
}



//==== 0006d708  ns=stub  size=0x4
// sig: undefined STUB_0006d708(void)
// callers(35): 000784e8 freeze::DrawDialogText; 000e0e60 main::startLevel; 000e2e10 map::DrawMapFrame; 0013ca68 pause::DrawPauseMenu; 0013de20 pause::FrontEnd_DrawMenu; 0013fd08 pause::IconList_Draw; 001402c8 pause::MenuText_Draw; 00141c90 pause::DrawPauseStrings; 00144084 pause::DrawSoundOptionsFrame; 00144638 pause::DrawSkillPointsFrame; 00144ec0 pause::MenuButton_Draw; 00145b8c pause::ItemView_Draw; 00146708 pause::PlanetInfo_Draw; 00146b14 pause::GoldBoltWidget_Update; 00147044 pause::Update_FoundGBsShipMenu; 00147334 pause::ItemInfo_DrawCost; 001476f0 pause::MapMenu_DrawOptions; 00147bb0 pause::ExitSelectPrompt_Draw; 00147cf8 pause::DrawMissionsFrame; 001491f0 pause::ImageWidget_DrawWithText; 001499c4 pause::HelpControls_Draw; 00149f88 pause::SlotConfig_Draw; 0014a86c pause::ConfirmDialog_Draw; 0014ad88 pause::DrawCameraSettingsFrame; 0014b9a8 pause::MessageBox_Draw
// callees(0): 

void stub::STUB_0006d708(void)

{
  return;
}



//==== 0006d70c  ns=draw  size=0x14
// sig: undefined GetEffectTexAddr(void)
// callers(1): 0011ef18 partproc::DrawParts
// callees(0): 

int draw::GetEffectTexAddr(int param_1)

{
  return partproc::g_PartTexBaseIndex + param_1;
}



//==== 0006d720  ns=Global  size=0x40
// sig: undefined RegisterFuncForMoby(void * * function, MobyInstance * moby)
// callers(145): 0008179c hero::Hero_RegisterGlowDraw; 0008c3d0 hero::HeroUpdateNonRatchet; 0008f3ec hero::Hero_AddGlow; 0008f538 hero::Hero_UpdateGadgetGlows; 000914e0 hero::Hero_UpdateGadgetMobys; 00095aa8 hero::???_Hero_AddPulsingMobyGlow; 000d9ee8 initsky::UpdateSpaceSceneEffects; 0015da58 space::UpdateMoby_Spaceship; 00161788 space::UpdateSpace; 0018137c mobyupdate_unsorted::UpdateMoby_100; 001933d8 mobyupdate_unsorted::UpdateMoby_1035; 00199300 mobyupdate_helpers::M1045_00199300; 00199398 mobyupdate_helpers::M1045_00199398; 00199888 mobyupdate_helpers::M1045_00199888; 0019aea0 mobyupdate_unsorted::UpdateMoby_1045; 0019ea18 mobyupdate_unsorted::UpdateMoby_1046; 001abfcc mobyupdate_helpers::M1060_001abfcc; 001ac058 mobyupdate_unsorted::UpdateMoby_1060; 001ad140 mobyupdate_unsorted::UpdateMoby_1062; 001af4c0 mobyupdate_helpers::M1068_001af4c0; 001b4378 mobyupdate_unsorted::UpdateMoby_1072; 001b9d68 mobyupdate_unsorted::UpdateMoby_1083; 001c3478 mobyupdate_helpers::M1106_001c3478; 001c3510 mobyupdate_helpers::M1106_001c3510; 001c3a18 mobyupdate_helpers::M1106_001c3a18
// callees(0): 

void RegisterFuncForMoby(void **function,MobyInstance *moby)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = draw::g_MobyFuncListCount;
  if (draw::g_MobyFuncListCount < 0x40) {
    puVar1 = &draw::g_MobyFuncList + draw::g_MobyFuncListCount;
    draw::g_MobyFuncListCount = draw::g_MobyFuncListCount + 1;
    *puVar1 = function;
    (&draw::g_MobyFuncListArgs)[iVar2] = moby;
  }
  return;
}



//==== 0006d760  ns=draw  size=0x40
// sig: undefined RegisterOceanUpdate(void)
// callers(8): 00188888 mobyupdate_unsorted::UpdateMoby_1018; 00272c50 mobyupdate_unsorted::UpdateMoby_1418; 002d4550 mobyupdate_unsorted::UpdateMoby_1901; 003314a0 mobyupdate_unsorted::UpdateMoby_293; 00340588 mobyupdate_unsorted::UpdateMoby_317_GasparOcean; 00392e58 mobyupdate_unsorted::UpdateMoby_460; 0048eb78 mobyupdate_unsorted::UpdateMoby_854_AridiaOcean; 0049f960 mobyupdate_unsorted::UpdateMoby_879_RilgarOcean
// callees(0): 

void draw::RegisterOceanUpdate(undefined4 param_1,MobyInstance *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = g_PreDrawCount;
  if (g_PreDrawCount < 0x40) {
    puVar1 = &CurrentOceanSubmitter + g_PreDrawCount;
    g_PreDrawCount = g_PreDrawCount + 1;
    *puVar1 = param_1;
    (&WaterMoby)[iVar2] = param_2;
  }
  return;
}



//==== 0006d7a0  ns=draw  size=0x40
// sig: void RegisterPostPreDraw(void * func, void * arg)
// callers(2): 00326788 mobyupdate_helpers::M28_00326788; 00460fd0 mobyupdate_helpers::M8_00460fd0
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void draw::RegisterPostPreDraw(void *func,void *arg)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = g_PostPreDrawCount;
  if (g_PostPreDrawCount < 0x40) {
    puVar1 = &g_PostPreDrawFuncs + g_PostPreDrawCount;
    g_PostPreDrawCount = g_PostPreDrawCount + 1;
    *puVar1 = func;
    (&g_PostPreDrawArgs)[iVar2] = arg;
  }
  return;
}



//==== 0006d7e0  ns=draw  size=0x40
// sig: void RegisterPostDraw(void * func, void * arg)
// callers(45): 000156a8 mobyupdate_unsorted::UpdateMoby_1267; 0015da58 space::UpdateMoby_Spaceship; 00161788 space::UpdateSpace; 0016da88 vendor::Vendor_PreUpdate; 0018d608 mobyupdate_unsorted::UpdateMoby_{1024_1302}; 001ae060 mobyupdate_unsorted::UpdateMoby_1067; 001bd450 mobyupdate_unsorted::UpdateMoby_11; 0020dd00 mobyupdate_unsorted::UpdateMoby_1224; 00230308 mobyupdate_unsorted::UpdateMoby_{1263_1393}; 0024d11c mobyupdate_unsorted::UpdateMoby_1331; 0026e8f4 mobyupdate_unsorted::UpdateMoby_1405; 0026ee28 mobyupdate_unsorted::UpdateMoby_1406; 0026f358 mobyupdate_unsorted::UpdateMoby_1407; 0026f914 mobyupdate_unsorted::UpdateMoby_1408; 0026fe14 mobyupdate_unsorted::UpdateMoby_1409; 0027b0ec mobyupdate_unsorted::UpdateMoby_1426; 0027cb28 mobyupdate_helpers::M1440_0027cb28; 00288584 mobyupdate_unsorted::UpdateMoby_1471; 0028dfa8 mobyupdate_unsorted::UpdateMoby_1510; 0029da6c mobyupdate_unsorted::UpdateMoby_1565; 0029df7c mobyupdate_unsorted::UpdateMoby_1567; 002aa9c0 mobyupdate_unsorted::UpdateMoby_167; 002b6630 mobyupdate_unsorted::UpdateMoby_177; 002ba3d8 mobyupdate_unsorted::UpdateMoby_180; 002c5f88 mobyupdate_helpers::M185_002c5f88
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void draw::RegisterPostDraw(void *func,void *arg)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = g_PostDrawCount;
  if (g_PostDrawCount < 0x40) {
    puVar1 = &g_PostDrawFuncs + g_PostDrawCount;
    g_PostDrawCount = g_PostDrawCount + 1;
    *puVar1 = func;
    (&g_PostDrawArgs)[iVar2] = arg;
  }
  return;
}



//==== 0006d830  ns=draw  size=0x290
// sig: void DrawLameShadows(void)
// callers(0): 
// callees(4): 00072280 draw::FastDrawQuad; 00502ea8 idol_draw::PackCmd; 00502f08 FUN_00502f08; 00502fd4 stub::STUB_00502fd4_RET_0

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void draw::DrawLameShadows(void)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  ulonglong *puVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  int iVar12;
  uint *puVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  longlong lVar18;
  float *pfVar19;
  longlong lVar20;
  float *pfVar21;
  ulonglong unaff_r27;
  int iVar22;
  ulonglong unaff_r28;
  int iVar23;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar24;
  
  uVar14 = ZEXT48(&stack0x00000000);
  lVar1 = uVar14 - 0x130;
  puVar7 = (ulonglong *)lVar1;
  *puVar7 = uVar14;
  puVar7[0x28] = in_LR;
  puVar7[0x23] = unaff_r29;
  puVar13 = TexInfo;
  puVar7[0x25] = unaff_r31;
  puVar7[0x24] = unaff_r30;
  puVar7[0x22] = unaff_r28;
  puVar7[0x21] = unaff_r27;
  puVar7[0x1d] = (ulonglong)*puVar13;
  uVar15 = stub::STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  puVar7[0x1e] = uVar15;
  uVar15 = FUN_00502f08(1,1,0,0,0,0);
  puVar7[0x1c] = uVar15;
  uVar15 = idol_draw::PackCmd(0,1,0,1,0x80);
  puVar7[0x1f] = uVar15;
  iVar23 = 0;
  puVar16 = &DAT_0071ef48;
  puVar17 = &DAT_0071ef4c;
  lVar24 = 4;
  lVar18 = lVar1;
  lVar20 = lVar1;
  do {
    uVar2 = *puVar16;
    uVar3 = *puVar17;
    puVar16 = puVar16 + 4;
    *(undefined4 *)((int)lVar20 + 0xc0) = uVar2;
    puVar17 = puVar17 + 4;
    *(undefined4 *)((int)lVar20 + 0xc4) = uVar3;
    *(undefined4 *)((int)lVar18 + 0xb0) = 0x40808080;
    lVar20 = lVar20 + 8;
    lVar18 = lVar18 + 4;
    lVar24 = lVar24 + -1;
  } while (lVar24 != 0);
  iVar22 = 0;
  if (0 < mobyutil::g_NumLameShadows) {
    do {
      fVar4 = *(float *)((int)&DAT_0095e604 + iVar23);
      fVar5 = *(float *)((int)&DAT_0095e600 + iVar23);
      fVar6 = *(float *)((int)&DAT_0095e608 + iVar23);
      fVar9 = 0.0;
      fVar11 = fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4;
      fVar10 = fVar9;
      fVar8 = fVar9;
      if (SQRT(fVar11) != 0.0) {
        fVar10 = 1.0 / SQRT(fVar11);
        fVar10 = -(fVar11 * fVar10 * fVar10 - 1.0) * fVar10 * 0.5 + fVar10;
        fVar10 = -(fVar11 * fVar10 * fVar10 - 1.0) * fVar10 * 0.5 + fVar10;
        fVar10 = -(fVar11 * fVar10 * fVar10 - 1.0) * fVar10 * 0.5 + fVar10;
        fVar9 = fVar5 * fVar10;
        fVar8 = fVar4 * fVar10;
        fVar10 = fVar6 * fVar10;
      }
      fVar4 = *(float *)((int)&DAT_0095e5fc + iVar23);
      pfVar19 = (float *)&DAT_0071ef44;
      lVar24 = 4;
      lVar20 = uVar14 - 0xc0;
      lVar18 = lVar1;
      pfVar21 = (float *)&DAT_0071ef40;
      do {
        fVar5 = *pfVar19;
        fVar6 = *pfVar21;
        puVar17 = (undefined4 *)lVar20;
        *puVar17 = *(undefined4 *)((int)&mobyutil::g_LameShadows + iVar23);
        puVar17[1] = *(undefined4 *)((int)&DAT_0095e5f4 + iVar23);
        puVar17[2] = *(undefined4 *)((int)&DAT_0095e5f8 + iVar23);
        fVar11 = fVar6 * fVar9 + fVar5 * fVar8;
        puVar17[3] = *(undefined4 *)((int)&DAT_0095e5fc + iVar23);
        fVar5 = *pfVar21;
        lVar20 = lVar20 + 0x10;
        fVar6 = *pfVar19;
        pfVar21 = pfVar21 + 4;
        iVar12 = (int)lVar18;
        pfVar19 = pfVar19 + 4;
        *(float *)(iVar12 + 0x78) = -(fVar11 * fVar10 * fVar4 - *(float *)(iVar12 + 0x78));
        *(float *)(iVar12 + 0x70) = -(fVar11 * fVar9 - fVar5) * fVar4 + *(float *)(iVar12 + 0x70);
        *(float *)(iVar12 + 0x74) = -(fVar11 * fVar8 - fVar6) * fVar4 + *(float *)(iVar12 + 0x74);
        lVar18 = lVar18 + 0x10;
        lVar24 = lVar24 + -1;
      } while (lVar24 != 0);
      FastDrawQuad(uVar14 - 0xc0,0,0,EffectTexHeaders,9);
      iVar22 = iVar22 + 1;
      iVar23 = iVar23 + 0x20;
    } while (iVar22 < mobyutil::g_NumLameShadows);
  }
  return;
}



//==== 0006dad0  ns=draw  size=0x598
// sig: undefined FadeToBlack(void)
// callers(39): 000103b0 boot::PlayAttractMovie; 00012048 boot::PrepareFrontbin; 00012ec8 boot::GameStart; 00079b18 freeze::UpdateFreeze; 00083950 hero::HandleHeroDeath; 00083ac8 hero::Hero_HandleGroundType; 00087a88 hero::Hero_UpdateTimers; 000954c8 hero::HeroUpdate; 000e0528 loaders::LoadWeaponCutscene; 000e06b0 loaders::LoadSpaceScene; 0013b838 pause::UpdatePause; 0014a460 pause::ConfirmDialog_Update; 0014c370 pause::ShowScreenAfterDrekDefeat; 00161788 space::UpdateSpace; 00163aa0 space::SpaceTransition_LoadWad; 001643e0 space::PlaySpaceMovie; 00164760 space::PlaySpacePlate; 00164c58 space::DoSpaceTransition; 00167a30 update::mode_sceneUnInit; 00167e60 update::mode_sceneInit; 00168d34 update::StartMovie; 00168dec update::PlayInfobotMovie; 00168f7c update::PlayHelpMovie; 0016910c update::PlaySpecialMovie; 00169268 update::PlayStoryMovie
// callees(2): 004edcfc FUN_004edcfc; 004eddc4 idol_draw::Spurs_FlushAndSwapQueue

void draw::FadeToBlack(int param_1)

{
  ushort uVar1;
  ushort uVar2;
  RsxCmd *pRVar3;
  RenderingStep *pRVar4;
  int *piVar5;
  undefined8 uVar6;
  undefined1 in_vs34 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  
  piVar5 = g_viewMtxPtr;
  uVar6 = 0x70;
  auVar14._0_4_ = param_1;
  auVar14._4_4_ = param_1;
  auVar14._8_4_ = param_1;
  auVar14._12_4_ = param_1;
  if (g_viewMtxPtr[0x6a3] == 0) {
    idol_draw::Spurs_FlushAndSwapQueue(&DAT_01111700);
    FUN_004edcfc(&DAT_01111700);
    if ((piVar5[0x128] == 1) && ((piVar5[0x69b] & 1U) != 0)) {
      (*(code *)**(undefined4 **)(*piVar5 + 0x18))(piVar5);
    }
    param_1 = param_1 + -1;
    auVar18 = ZEXT416(1);
    auVar18 = auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60;
    if (-1 < param_1) {
      auVar17 = vectorSubtractUnsignedWordModulo(auVar14,auVar18);
      auVar14 = loadVectorLeftIndexed(uVar6,0x6dac0);
      auVar16 = loadVectorLeftIndexed(4,0x6dac0);
      auVar19 = loadVectorLeftIndexed(8,0x6dac0);
      auVar14 = auVar14 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar15 = auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60;
      auVar14 = auVar16 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar16 = auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60;
      auVar14 = auVar19 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar14 = auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60;
      do {
        auVar19._0_4_ = auVar17._0_4_ + auVar18._0_4_;
        auVar19._8_8_ = in_vs34._8_8_;
        auVar19._4_4_ = auVar17._4_4_ + auVar18._4_4_;
        auVar7._0_8_ = auVar19._0_8_;
        auVar7._8_4_ = auVar17._8_4_ + auVar18._8_4_;
        auVar7._12_4_ = auVar17._12_4_ + auVar18._12_4_;
        auVar19 = ZEXT416(0xffffffff);
        auVar8 = auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60;
        auVar19 = ZEXT416(0xffffffff);
        auVar19 = auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60;
        auVar7 = vectorConvertFromSignedFixedPointWord(auVar7,0);
        auVar8 = vectorShiftLeftIntegerWord(auVar8,auVar8);
        auVar10 = vectorConvertFromSignedFixedPointWord(auVar17,0);
        auVar9 = vectorShiftLeftIntegerWord(auVar19,auVar19);
        auVar19 = ZEXT416(0xffffffff);
        auVar11 = auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60;
        auVar19 = ZEXT416(0xffffffff);
        auVar12 = auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60;
        auVar19 = vectorShiftLeftIntegerWord(auVar11,auVar11);
        auVar13 = vectorShiftLeftIntegerWord(auVar12,auVar12);
        auVar11 = vectorReciprocalEstimateFloatingPoint(auVar7);
        auVar10 = vectorMultiplyAddFloatingPoint(auVar10,auVar15,auVar19);
        auVar19 = ZEXT416(0xffffffff);
        auVar19 = auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60;
        auVar12 = vectorNegativeMultiplySubtractFloatingPoint(auVar11,auVar7,auVar14);
        auVar8 = vectorMultiplyAddFloatingPoint(auVar11,auVar12,auVar8);
        auVar11 = vectorShiftLeftIntegerWord(auVar19,auVar19);
        auVar19 = ZEXT416(0xffffffff);
        auVar19 = auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60;
        auVar12 = vectorShiftLeftIntegerWord(auVar19,auVar19);
        auVar19 = vectorNegativeMultiplySubtractFloatingPoint(auVar8,auVar7,auVar14);
        auVar8 = vectorMultiplyAddFloatingPoint(auVar8,auVar19,auVar9);
        auVar19 = vectorNegativeMultiplySubtractFloatingPoint(auVar8,auVar7,auVar14);
        auVar19 = vectorMultiplyAddFloatingPoint(auVar8,auVar19,auVar13);
        auVar19 = vectorMultiplyAddFloatingPoint(auVar19,auVar10,auVar11);
        in_vs34 = vectorMultiplyAddFloatingPoint(auVar19,auVar16,auVar12);
        DAT_008fa550 = storeVectorElementWordIndexed(in_vs34,0xffffffffffffa550,0x900000);
        (*(code *)**(undefined4 **)(*piVar5 + 0x18))(piVar5);
        if (piVar5[0x128] == 1) {
          (*(code *)**(undefined4 **)(*piVar5 + 0x18))(piVar5);
        }
        param_1 = param_1 + -1;
        auVar17 = vectorSubtractUnsignedWordModulo(auVar17,auVar18);
        DAT_0159c330 = DAT_0159c330 + 1;
      } while (-1 < param_1);
    }
    DAT_0159c330 = DAT_0159c330 + 1;
    (*(code *)**(undefined4 **)(*piVar5 + 0x10))(piVar5,DepthPass,piVar5[1],piVar5[2]);
    pRVar4 = DepthPass;
    *DepthPass->command = NV4097_SET_CONTEXT_DMA_COLOR_A_x1;
    pRVar4->command[1] = *(byte *)(piVar5 + 0x6fa) + 0xfeed0000;
    pRVar3 = pRVar4->command;
    pRVar4->command = pRVar3 + 2;
    pRVar3[2] = NV4097_SET_CONTEXT_DMA_COLOR_B_x1;
    pRVar4->command[1] = *(byte *)((int)piVar5 + 0x1be9) + 0xfeed0000;
    pRVar3 = pRVar4->command;
    pRVar4->command = pRVar3 + 2;
    pRVar3[2] = NV4097_SET_CONTEXT_DMA_COLOR_C_x2;
    pRVar4->command[1] = *(byte *)((int)piVar5 + 0x1bea) + 0xfeed0000;
    pRVar4->command[2] = *(byte *)((int)piVar5 + 0x1beb) + 0xfeed0000;
    pRVar3 = pRVar4->command;
    pRVar4->command = pRVar3 + 3;
    pRVar3[3] = NV4097_SET_CONTEXT_DMA_ZETA_x1;
    pRVar4->command[1] = *(byte *)((int)piVar5 + 0x1c0d) + 0xfeed0000;
    pRVar3 = pRVar4->command;
    pRVar4->command = pRVar3 + 2;
    uVar1 = *(ushort *)(piVar5 + 0x706);
    uVar2 = *(ushort *)((int)piVar5 + 0x1c1a);
    pRVar3[2] = (RsxCmd)&DAT_00180208;
    pRVar4->command[1] =
         (uint)*(byte *)((int)piVar5 + 0x1be6) | (uint)*(byte *)(piVar5 + 0x703) << 5 |
         (uint)*(byte *)(piVar5 + 0x6f9) << 8 | (uint)*(byte *)((int)piVar5 + 0x1be5) << 0xc |
         (RsxCmd)((0x1fU - LZCOUNT((uint)uVar1) & 0xffffffff) << 0x10) |
         (RsxCmd)((0x1fU - LZCOUNT((uint)uVar2) & 0xffffffff) << 0x18);
    pRVar4->command[2] = piVar5[0x6ff];
    pRVar4->command[3] = piVar5[0x6fb];
    pRVar4->command[4] = piVar5[0x704];
    pRVar4->command[5] = piVar5[0x6fc];
    pRVar4->command[6] = piVar5[0x700];
    pRVar3 = pRVar4->command;
    pRVar4->command = pRVar3 + 7;
    pRVar3[7] = NV4097_SET_SURFACE_PITCH_Z_x1;
    pRVar4->command[1] = piVar5[0x705];
    pRVar3 = pRVar4->command;
    pRVar4->command = pRVar3 + 2;
    pRVar3[2] = NV4097_SET_SURFACE_PITCH_C_x4;
    pRVar4->command[1] = piVar5[0x701];
    pRVar4->command[2] = piVar5[0x702];
    pRVar4->command[3] = piVar5[0x6fd];
    pRVar4->command[4] = piVar5[0x6fe];
    pRVar3 = pRVar4->command;
    pRVar4->command = pRVar3 + 5;
    pRVar3[5] = NV4097_SET_SURFACE_COLOR_TARGET_x1;
    pRVar4->command[1] = (uint)*(byte *)((int)piVar5 + 0x1be7);
    pRVar3 = pRVar4->command;
    pRVar4->command = pRVar3 + 2;
    pRVar3[2] = NV4097_SET_WINDOW_OFFSET_x1;
    pRVar4->command[1] =
         CONCAT22(*(undefined2 *)((int)piVar5 + 0x1c1e),*(undefined2 *)(piVar5 + 0x707));
    pRVar3 = pRVar4->command;
    pRVar4->command = pRVar3 + 2;
    pRVar3[2] = NV4097_SET_SURFACE_CLIP_HORIZONTAL_x2;
    pRVar4->command[1] = CONCAT22(*(undefined2 *)(piVar5 + 0x706),*(undefined2 *)(piVar5 + 0x707));
    pRVar4->command[2] =
         CONCAT22(*(undefined2 *)((int)piVar5 + 0x1c1a),*(undefined2 *)((int)piVar5 + 0x1c1e));
    pRVar3 = pRVar4->command;
    pRVar4->command = pRVar3 + 3;
    pRVar3[3] = NV4097_SET_SHADER_WINDOW_x1;
    pRVar4->command[1] =
         (uint)*(ushort *)((int)piVar5 + 0x1c1a) - (*(ushort *)((int)piVar5 + 0x1c1a) >> 0xc & 1) |
         0x1000;
    pRVar4->command = pRVar4->command + 2;
    pRVar4 = DepthPass;
    *DepthPass->command = NV4097_SET_COLOR_CLEAR_VALUE_x1;
    pRVar4->command[1] = 0;
    pRVar4->command = pRVar4->command + 2;
    pRVar4 = DepthPass;
    *DepthPass->command = NV4097_CLEAR_SURFACE_x1;
    pRVar4->command[1] = 0xf0;
    pRVar3 = pRVar4->command;
    pRVar4->command = pRVar3 + 2;
    pRVar3[2] = NV4097_NO_OPERATION_x1;
    pRVar4->command[1] = 0;
    pRVar4->command = pRVar4->command + 2;
    DAT_008fa550 = 0x3f800000;
  }
  return;
}



//==== 0006e068  ns=draw  size=0x70
// sig: void Draw_FlushAndPresent(void)
// callers(2): 0013b108 update::OpenPauseMenu; 001744f0 vendor::Vendor_PostUpdate
// callees(4): 004d5e48 FUN_004d5e48; 004dc8c8 idol_draw::Gfx_Present; 004edcfc FUN_004edcfc; 004eddc4 idol_draw::Spurs_FlushAndSwapQueue

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void draw::Draw_FlushAndPresent(void)

{
  int iVar1;
  
  iVar1 = g_viewMtxPtr;
  idol_draw::Spurs_FlushAndSwapQueue(&DAT_01111700);
  FUN_004edcfc(&DAT_01111700);
  idol_draw::Gfx_Present(iVar1,iVar1 + 0x1fe0);
  FUN_004d5e48(*(undefined4 *)(iVar1 + 0x1a74));
  return;
}



//==== 0006e0d8  ns=draw  size=0x644
// sig: undefined DrawRenderTargetToScreen(void)
// callers(2): 0013ca68 pause::DrawPauseMenu; 001744f0 vendor::Vendor_PostUpdate
// callees(2): 004d82b8 idol_draw::BindFragmentProgram; 004d83ec idol_draw::BindVertexProgram

void draw::DrawRenderTargetToScreen(void)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  ushort uVar6;
  RsxCmd RVar7;
  RsxCmd RVar8;
  RsxCmd RVar9;
  RsxCmd *pRVar10;
  RsxCmd RVar11;
  RenderingStep *pRVar12;
  int iVar13;
  
  iVar13 = g_viewMtxPtr;
  pRVar12 = ForwardPass;
  *ForwardPass->command = NV4097_SET_DEPTH_TEST_ENABLE_x1;
  pRVar12->command[1] = 0;
  pRVar12->command = pRVar12->command + 2;
  pRVar12 = ForwardPass;
  *ForwardPass->command = NV4097_SET_DEPTH_MASK_x1;
  pRVar12->command[1] = 0;
  pRVar12->command = pRVar12->command + 2;
  pRVar12 = ForwardPass;
  *ForwardPass->command = NV4097_SET_STENCIL_MASK_x1;
  pRVar12->command[1] = 0;
  pRVar12->command = pRVar12->command + 2;
  pRVar12 = ForwardPass;
  *ForwardPass->command = NV4097_SET_BLEND_ENABLE_x1;
  pRVar12->command[1] = 0;
  pRVar12->command = pRVar12->command + 2;
  pRVar12 = ForwardPass;
  *ForwardPass->command = NV4097_SET_ALPHA_TEST_ENABLE_x1;
  pRVar12->command[1] = 0;
  RVar7 = *(RsxCmd *)(iVar13 + 0x206c);
  pRVar12->command = pRVar12->command + 2;
  pRVar12 = ForwardPass;
  bVar1 = *(byte *)(iVar13 + 0x2066);
  bVar2 = *(byte *)(iVar13 + 0x2059);
  bVar3 = *(byte *)(iVar13 + 0x2058);
  bVar4 = *(byte *)(iVar13 + 0x205b);
  bVar5 = *(byte *)(iVar13 + 0x205a);
  RVar11 = *(RsxCmd *)(iVar13 + 0x2060);
  RVar8 = *(RsxCmd *)(iVar13 + 0x205c);
  RVar9 = *(RsxCmd *)(iVar13 + 0x2068);
  uVar6 = *(ushort *)(iVar13 + 0x2064);
  *ForwardPass->command = (RsxCmd)&DAT_00081a00;
  pRVar12->command[1] = RVar7;
  pRVar12->command[2] =
       (uint)bVar2 << 0x10 | bVar1 + 1 | 8 | (uint)bVar3 << 8 | (uint)bVar4 << 2 | (uint)bVar5 << 4;
  pRVar10 = pRVar12->command;
  pRVar12->command = pRVar10 + 3;
  pRVar10[3] = NV4097_SET_TEXTURE_IMAGE_RECT_x1;
  pRVar12->command[1] = RVar11;
  pRVar10 = pRVar12->command;
  pRVar12->command = pRVar10 + 2;
  pRVar10[2] = (RsxCmd)&DAT_00041840;
  pRVar12->command[1] = RVar9 | (uint)uVar6 << 0x14;
  pRVar10 = pRVar12->command;
  pRVar12->command = pRVar10 + 2;
  pRVar10[2] = NV4097_SET_TEXTURE_CONTROL1_x1;
  pRVar12->command[1] = RVar8;
  pRVar12->command = pRVar12->command + 2;
  pRVar12 = ForwardPass;
  *ForwardPass->command = NV4097_SET_TEXTURE_CONTROL0_x1;
  pRVar12->command[1] = 0x80000000;
  pRVar12->command = pRVar12->command + 2;
  pRVar12 = ForwardPass;
  *ForwardPass->command = NV4097_SET_TEXTURE_ADDRESS_x1;
  pRVar12->command[1] = 0x40030303;
  pRVar12->command = pRVar12->command + 2;
  pRVar12 = ForwardPass;
  *ForwardPass->command = NV4097_SET_TEXTURE_FILTER_x1;
  pRVar12->command[1] = 0x2022000;
  pRVar12->command = pRVar12->command + 2;
  idol_draw::BindVertexProgram(iVar13,ForwardPass,0);
  idol_draw::BindFragmentProgram(iVar13,ForwardPass,0);
  pRVar12 = ForwardPass;
  *ForwardPass->command = NV4097_SET_VERTEX_DATA_ARRAY_FORMAT_x1;
  pRVar12->command[1] = 2;
  pRVar10 = pRVar12->command;
  pRVar12->command = pRVar10 + 2;
  pRVar10[2] = NV4097_SET_VERTEX_DATA_ARRAY_OFFSET_x1;
  pRVar12->command[1] = 0;
  pRVar12->command = pRVar12->command + 2;
  pRVar12 = ForwardPass;
  *ForwardPass->command = 0x41744;
  pRVar12->command[1] = 2;
  pRVar10 = pRVar12->command;
  pRVar12->command = pRVar10 + 2;
  pRVar10[2] = 0x41684;
  pRVar12->command[1] = 0;
  pRVar12->command = pRVar12->command + 2;
  pRVar12 = ForwardPass;
  *ForwardPass->command = 0x41748;
  pRVar12->command[1] = 2;
  pRVar10 = pRVar12->command;
  pRVar12->command = pRVar10 + 2;
  pRVar10[2] = 0x41688;
  pRVar12->command[1] = 0;
  pRVar12->command = pRVar12->command + 2;
  pRVar12 = ForwardPass;
  *ForwardPass->command = 0x4174c;
  pRVar12->command[1] = 2;
  pRVar10 = pRVar12->command;
  pRVar12->command = pRVar10 + 2;
  pRVar10[2] = 0x4168c;
  pRVar12->command[1] = 0;
  pRVar12->command = pRVar12->command + 2;
  pRVar12 = ForwardPass;
  *ForwardPass->command = 0x400c1714;
  pRVar12->command[1] = 0;
  pRVar12->command[2] = 0;
  pRVar12->command[3] = 0;
  pRVar12->command[4] = NV4097_SET_BEGIN_END_x1;
  pRVar12->command[5] = 8;
  pRVar12->command = pRVar12->command + 6;
  pRVar12 = ForwardPass;
  *ForwardPass->command = 0xc1510;
  pRVar12->command[1] = 0;
  pRVar12->command[2] = 0;
  pRVar12->command[3] = 0x3f800000;
  pRVar12->command = pRVar12->command + 4;
  pRVar12 = ForwardPass;
  *ForwardPass->command = NV4097_SET_VERTEX_DATA2F_M_x2;
  pRVar12->command[1] = 0xbf800000;
  pRVar12->command[2] = 0x3f800000;
  pRVar12->command = pRVar12->command + 3;
  pRVar12 = ForwardPass;
  *ForwardPass->command = 0xc1510;
  pRVar12->command[1] = 0;
  pRVar12->command[2] = 0x3f800000;
  pRVar12->command[3] = 0x3f800000;
  pRVar12->command = pRVar12->command + 4;
  pRVar12 = ForwardPass;
  *ForwardPass->command = NV4097_SET_VERTEX_DATA2F_M_x2;
  pRVar12->command[1] = 0xbf800000;
  pRVar12->command[2] = 0xbf800000;
  pRVar12->command = pRVar12->command + 3;
  pRVar12 = ForwardPass;
  *ForwardPass->command = 0xc1510;
  pRVar12->command[1] = 0x3f800000;
  pRVar12->command[2] = 0x3f800000;
  pRVar12->command[3] = 0x3f800000;
  pRVar12->command = pRVar12->command + 4;
  pRVar12 = ForwardPass;
  *ForwardPass->command = NV4097_SET_VERTEX_DATA2F_M_x2;
  pRVar12->command[1] = 0x3f800000;
  pRVar12->command[2] = 0xbf800000;
  pRVar12->command = pRVar12->command + 3;
  pRVar12 = ForwardPass;
  *ForwardPass->command = 0xc1510;
  pRVar12->command[1] = 0x3f800000;
  pRVar12->command[2] = 0;
  pRVar12->command[3] = 0x3f800000;
  pRVar12->command = pRVar12->command + 4;
  pRVar12 = ForwardPass;
  *ForwardPass->command = NV4097_SET_VERTEX_DATA2F_M_x2;
  pRVar12->command[1] = 0x3f800000;
  pRVar12->command[2] = 0x3f800000;
  pRVar12->command = pRVar12->command + 3;
  pRVar12 = ForwardPass;
  *ForwardPass->command = NV4097_SET_BEGIN_END_x1;
  pRVar12->command[1] = 0;
  pRVar12->command = pRVar12->command + 2;
  pRVar12 = ForwardPass;
  *ForwardPass->command = NV4097_SET_DEPTH_TEST_ENABLE_x1;
  pRVar12->command[1] = 1;
  pRVar12->command = pRVar12->command + 2;
  pRVar12 = ForwardPass;
  *ForwardPass->command = NV4097_SET_DEPTH_MASK_x1;
  pRVar12->command[1] = 1;
  pRVar12->command = pRVar12->command + 2;
  pRVar12 = ForwardPass;
  *ForwardPass->command = NV4097_SET_BLEND_ENABLE_x1;
  pRVar12->command[1] = 1;
  pRVar12->command = pRVar12->command + 2;
  return;
}



//==== 0006e71c  ns=stub  size=0x4
// sig: undefined STUB_0006e71c(void)
// callers(0): 
// callees(0): 

void stub::STUB_0006e71c(void)

{
  return;
}



//==== 0006e740  ns=draw  size=0x598
// sig: void Sprite_DrawRotated(float param_1, float param_2, double param_3, double param_4, double param_5, double param_6, double param_7)
// callers(10): 00054e38 camera::DrawCrosshairSprite; 0021d298 mobyupd::update1242::M1242_0021d298; 0021d328 mobyupd::update1242::M1242_0021d328; 0021e750 mobyupd::update1242::M1242_Hud_Draw; 0025ed68 mobyupd::update1379::M1379_0025ed68; 0025edf8 mobyupd::update1379::M1379_0025edf8; 002611a0 mobyupd::update1379::M1379_Hud_Draw; 00418d00 mobyupdate_helpers::M688_00418d00; 00418d90 mobyupdate_helpers::M688_00418d90; 0041b008 mobyupdate_helpers::M688_0041b008
// callees(3): 004d6948 idol_draw::ResetPassState; 004d6bb0 FUN_004d6bb0; 004e3178 FUN_004e3178

void draw::Sprite_DrawRotated
               (float param_1,float param_2,double param_3,double param_4,double param_5,
               double param_6,double param_7)

{
  float fVar1;
  RsxCmd *pRVar2;
  RsxCmd *pRVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  RsxCmd RVar7;
  RsxCmd RVar8;
  RenderingStep *pRVar9;
  undefined4 *puVar10;
  ulonglong in_r8;
  ulonglong in_r9;
  longlong in_r10;
  ulonglong uVar11;
  ulonglong uVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  RsxCmd in_stack_0000007c;
  uint in_stack_00000084;
  uint in_stack_0000008c;
  char in_stack_000000a7;
  undefined4 local_110;
  uint local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  
  fVar1 = (float)(param_5 + 1.570796251296997);
  uVar11 = (in_r9 & 0x7fffffff) * 2;
  dVar13 = (double)(float)(3.141592502593994 - param_5);
  if (param_5 - (double)(float)(3.141592502593994 - param_5) < 0.0) {
    dVar13 = param_5;
  }
  fVar4 = 3.1415925 - fVar1;
  if (fVar1 - (3.1415925 - fVar1) < 0.0) {
    fVar4 = fVar1;
  }
  dVar14 = (double)(float)(-3.141592502593994 - param_5);
  if ((double)(float)(-3.141592502593994 - param_5) - dVar13 < 0.0) {
    dVar14 = dVar13;
  }
  dVar13 = (double)(float)(dVar14 * dVar14);
  fVar5 = -3.1415925 - fVar1;
  if ((-3.1415925 - fVar1) - fVar4 < 0.0) {
    fVar5 = fVar4;
  }
  fVar6 = fVar5 * fVar5;
  RVar8 = (RsxCmd)((in_r8 & 0x7fffffff) << 1);
  dVar20 = (double)(float)(dVar13 * (double)(float)(dVar13 * dVar14));
  dVar19 = (double)(float)(dVar13 * dVar20);
  fVar4 = fVar6 * fVar6 * fVar5;
  uVar12 = uVar11 + ((LZCOUNT(-(in_stack_0000008c & 0xff)) << 0x3a) >> 0x3f &
                    (in_r9 & 0x7fffffff) * -2);
  fVar1 = fVar6 * fVar4;
  dVar13 = (double)((float)(dVar13 * dVar19) * 2.601887e-06 +
                   (float)(dVar19 * -0.0001980741071747616 +
                          (double)(float)(dVar20 * 0.008333025500178337 +
                                         (double)(float)((double)(float)(dVar13 * dVar14) *
                                                         -0.16666656732559204 + dVar14))));
  dVar16 = (double)(float)(1.0 - param_6);
  uVar11 = (LZCOUNT(-(in_stack_0000008c & 0xff)) << 0x3a) >> 0x3f & uVar11;
  dVar20 = (double)(float)(param_4 * dVar13);
  dVar19 = (double)(float)(param_3 * dVar13);
  dVar13 = (double)(fVar6 * fVar1 * 2.601887e-06 +
                   fVar1 * -0.0001980741 +
                   fVar4 * 0.0083330255 + fVar6 * fVar5 * -0.16666657 + fVar5);
  puVar10 = (undefined4 *)(EffectTexHeaders + (int)(in_r10 << 5) + (int)(in_r10 << 2));
  dVar14 = (double)(float)(param_4 * dVar13);
  dVar17 = (double)(float)(param_3 * dVar13);
  local_110 = *puVar10;
  local_108 = puVar10[2];
  local_104 = puVar10[3];
  dVar15 = (double)(float)((double)(float)(1.0 - param_7) * dVar20 + (double)param_1);
  fVar4 = -(float)(dVar19 * param_6);
  fVar1 = (float)((double)(float)(1.0 - param_7) * dVar14 + (double)param_2);
  local_10c = puVar10[1] & 0xffff | 0x14000;
  local_100 = puVar10[4];
  dVar13 = -(double)(float)(dVar20 * param_7 - (double)param_1);
  fVar5 = -(float)(dVar14 * param_7 - (double)param_2);
  local_fc = puVar10[5];
  fVar6 = -(float)(dVar19 * dVar16);
  local_f8 = puVar10[6];
  local_f4 = puVar10[7];
  dVar14 = -(double)(float)(dVar16 * dVar17 - dVar15);
  dVar20 = (double)(fVar1 + fVar4);
  dVar19 = (double)(float)(param_6 * dVar17 + dVar15);
  local_f0 = puVar10[8];
  dVar15 = -(double)(float)(dVar16 * dVar17 - dVar13);
  dVar18 = (double)(fVar5 + fVar4);
  dVar17 = (double)(float)(param_6 * dVar17 + dVar13);
  dVar13 = (double)(fVar1 - fVar6);
  dVar16 = (double)(fVar5 - fVar6);
  FUN_004d6bb0(HUD_Pass,0,&local_110);
  idol_draw::ResetPassState(HUD_Pass);
  pRVar2 = HUD_Pass->command;
  RVar7 = RVar8 + ((uint)((LZCOUNT(-(in_stack_00000084 & 0xff)) << 0x3a) >> 0x3f) & -RVar8) & 0xffff
  ;
  HUD_Pass->command = pRVar2 + 2;
  pRVar9 = HUD_Pass;
  pRVar3 = HUD_Pass->command;
  *pRVar2 = 0x41948;
  pRVar2[1] = ((int)in_stack_0000007c >> 8 & 0xffU) << 8 |
              ((int)in_stack_0000007c >> 0x10 & 0xffU) << 0x10 | in_stack_0000007c & 0xff000000 |
              in_stack_0000007c & 0xff;
  *pRVar3 = 0x400c1714;
  pRVar9->command = pRVar3 + 6;
  pRVar9 = HUD_Pass;
  pRVar3[1] = 0;
  pRVar3[2] = 0;
  pRVar3[3] = 0;
  pRVar3[4] = NV4097_SET_BEGIN_END_x1;
  pRVar2 = pRVar9->command;
  pRVar3[5] = 8;
  *pRVar2 = 0x41904;
  pRVar2[1] = (RsxCmd)((uVar12 & 0xffffffff) << 0x10) | RVar7;
  pRVar9->command = pRVar2 + 2;
  if (in_stack_000000a7 != '\0') {
    FUN_004e3178(g_viewMtxPtr);
  }
  pRVar9 = HUD_Pass;
  pRVar2 = HUD_Pass->command;
  pRVar2[1] = (RsxCmd)(float)dVar14;
  pRVar3 = pRVar9->command;
  *pRVar2 = NV4097_SET_VERTEX_DATA2F_M_x2;
  pRVar3[2] = (RsxCmd)(float)dVar13;
  pRVar9->command = pRVar3 + 3;
  pRVar9 = HUD_Pass;
  pRVar2 = HUD_Pass->command;
  *pRVar2 = 0x41904;
  pRVar2[1] = (RsxCmd)(uVar11 << 0x10) | RVar7;
  pRVar9->command = pRVar2 + 2;
  if (in_stack_000000a7 != '\0') {
    FUN_004e3178(g_viewMtxPtr);
  }
  pRVar9 = HUD_Pass;
  RVar7 = (RsxCmd)((LZCOUNT(-(in_stack_00000084 & 0xff)) << 0x3a) >> 0x3f) & RVar8 & 0xffff;
  pRVar2 = HUD_Pass->command;
  pRVar2[1] = (RsxCmd)(float)dVar15;
  pRVar3 = pRVar9->command;
  *pRVar2 = NV4097_SET_VERTEX_DATA2F_M_x2;
  pRVar3[2] = (RsxCmd)(float)dVar16;
  pRVar9->command = pRVar3 + 3;
  pRVar9 = HUD_Pass;
  pRVar2 = HUD_Pass->command;
  *pRVar2 = 0x41904;
  pRVar2[1] = (RsxCmd)(uVar11 << 0x10) | RVar7;
  pRVar9->command = pRVar2 + 2;
  if (in_stack_000000a7 != '\0') {
    FUN_004e3178(g_viewMtxPtr);
  }
  pRVar9 = HUD_Pass;
  pRVar2 = HUD_Pass->command;
  pRVar2[1] = (RsxCmd)(float)dVar17;
  pRVar3 = pRVar9->command;
  *pRVar2 = NV4097_SET_VERTEX_DATA2F_M_x2;
  pRVar3[2] = (RsxCmd)(float)dVar18;
  pRVar9->command = pRVar3 + 3;
  pRVar9 = HUD_Pass;
  pRVar2 = HUD_Pass->command;
  *pRVar2 = 0x41904;
  pRVar2[1] = (RsxCmd)((uVar12 & 0xffffffff) << 0x10) | RVar7;
  pRVar9->command = pRVar2 + 2;
  if (in_stack_000000a7 != '\0') {
    FUN_004e3178(g_viewMtxPtr);
  }
  pRVar9 = HUD_Pass;
  pRVar2 = HUD_Pass->command;
  pRVar2[1] = (RsxCmd)(float)dVar19;
  pRVar3 = pRVar9->command;
  *pRVar2 = NV4097_SET_VERTEX_DATA2F_M_x2;
  pRVar3[2] = (RsxCmd)(float)dVar20;
  pRVar9->command = pRVar3 + 3;
  pRVar9 = HUD_Pass;
  pRVar2 = HUD_Pass->command;
  *pRVar2 = NV4097_SET_BEGIN_END_x1;
  pRVar2[1] = 0;
  pRVar9->command = pRVar2 + 2;
  return;
}



//==== 0006ecf8  ns=draw  size=0x3a8
// sig: undefined DrawTexturedQuadHud(void)
// callers(12): 00016940 mobyupdate_unsorted::Moby1267_DrawHud; 002d1540 mobyupdate_helpers::M1898_002d1540; 003806d0 mobyupdate_helpers::M440_003806d0; 003deb50 mobyupdate_helpers::M617_003deb50; 003def78 mobyupdate_helpers::M617_003def78; 003df398 mobyupdate_helpers::M617_003df398; 003df8dc mobyupdate_helpers::M617_003df8dc; 003dfa30 mobyupdate_helpers::M617_003dfa30; 003e12b0 mobyupdate_helpers::M617_003e12b0; 003e15f0 mobyupdate_helpers::M617_003e15f0; 003e19a0 mobyupdate_helpers::M617_003e19a0; 003f5d90 mobyupdate_helpers::M1382_003f5d90
// callees(2): 004d6948 idol_draw::ResetPassState; 004d6e60 idol_draw::BindTexture

void draw::DrawTexturedQuadHud(int param_1,int param_2,undefined8 param_3,int param_4,int param_5)

{
  RsxCmd *pRVar1;
  uint uVar2;
  RsxCmd RVar3;
  int iVar4;
  undefined4 uVar5;
  ulonglong *puVar6;
  RenderingStep *pRVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  
  lVar9 = ZEXT48(&stack0x00000000) - 0xb0;
  puVar6 = (ulonglong *)lVar9;
  *puVar6 = ZEXT48(&stack0x00000000);
  puVar6[0x18] = in_LR;
  puVar6[0x13] = unaff_r29;
  puVar6[0x14] = unaff_r30;
  uVar8 = 0;
  puVar6[0x15] = unaff_r31;
  puVar6[0x12] = unaff_r28;
  if (param_5 != 0) {
    uVar8 = 5;
  }
  idol_draw::BindTexture(HUD_Pass,0,EffectTexHeaders + param_4 * 0x24,uVar8);
  idol_draw::ResetPassState(HUD_Pass);
  pRVar7 = HUD_Pass;
  *HUD_Pass->command = 0x400c1714;
  pRVar7->command[1] = 0;
  pRVar7->command[2] = 0;
  pRVar7->command[3] = 0;
  pRVar7->command[4] = NV4097_SET_BEGIN_END_x1;
  pRVar1 = pRVar7->command;
  *(undefined4 *)(puVar6 + 0xe) = 0;
  *(undefined4 *)((int)puVar6 + 0x74) = 1;
  *(undefined4 *)(puVar6 + 0xf) = 3;
  pRVar1[5] = 8;
  pRVar1 = pRVar7->command;
  *(undefined4 *)((int)puVar6 + 0x7c) = 2;
  pRVar7->command = pRVar1 + 6;
  auVar20 = loadVectorLeftIndexed(4,0x6ecd8);
  auVar18 = loadVectorLeftIndexed(8,0x6ecd8);
  auVar16 = loadVectorLeftIndexed(0x10,0x6ecd8);
  auVar20 = auVar20 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar21 = auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60;
  auVar20 = auVar18 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar19 = auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60;
  auVar20 = loadVectorLeftIndexed(0xc,0x6ecd8);
  auVar15 = loadVectorLeftIndexed(0x14,0x6ecd8);
  lVar11 = 4;
  auVar18 = loadVectorLeftIndexed(0x18,0x6ecd8);
  auVar20 = auVar20 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar17 = auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60;
  auVar20 = auVar16 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar16 = auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60;
  auVar20 = auVar15 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar15 = auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60;
  auVar20 = auVar18 >> 0x60 & (undefined1  [16])0xffffffff;
  do {
    uVar2 = *(uint *)((int)lVar9 + 0x70);
    auVar18 = ZEXT416(0xfffffff8);
    lVar10 = ((ulonglong)uVar2 & 0x3fffffff) << 2;
    auVar22 = ZEXT416(0xfffffff0);
    auVar14 = ZEXT416(0xffffffff);
    auVar25 = auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60;
    auVar14 = ZEXT416(0xffffffff);
    auVar27 = auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60;
    auVar14 = ZEXT416(0xffffffff);
    auVar14 = auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60;
    auVar23 = loadVectorLeftIndexed(lVar10,param_3);
    auVar26 = vectorShiftLeftIntegerWord(auVar25,auVar25);
    auVar18 = vectorRotateLeftIntegerWord
                        (auVar23,auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60);
    auVar25 = vectorRotateLeftIntegerWord
                        (auVar23,auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60);
    auVar24 = vectorLogicalAnd(auVar23,auVar16);
    auVar23 = vectorShiftRightWord(auVar23,auVar15);
    auVar22 = vectorLogicalAnd(auVar18,auVar16);
    auVar25 = vectorLogicalAnd(auVar25,auVar16);
    auVar24 = vectorConvertFromUnsignedFixedPointWord(auVar24,0);
    auVar27 = vectorShiftLeftIntegerWord(auVar27,auVar27);
    auVar23 = vectorConvertFromUnsignedFixedPointWord(auVar23,0);
    auVar18 = ZEXT416(0xffffffff);
    auVar18 = auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60;
    auVar22 = vectorConvertFromUnsignedFixedPointWord(auVar22,0);
    auVar25 = vectorConvertFromUnsignedFixedPointWord(auVar25,0);
    uVar8 = *(undefined8 *)(param_1 + uVar2 * 8);
    auVar24 = vectorMultiplyAddFloatingPoint(auVar24,auVar21,auVar27);
    auVar27 = vectorShiftLeftIntegerWord(auVar18,auVar18);
    auVar22 = vectorMultiplyAddFloatingPoint(auVar22,auVar21,auVar26);
    auVar18 = vectorShiftLeftIntegerWord(auVar14,auVar14);
    auVar23 = vectorMultiplyAddFloatingPoint(auVar23,auVar21,auVar27);
    auVar14 = vectorMultiplyAddFloatingPoint(auVar25,auVar21,auVar18);
    puVar6[0x10] = (longlong)(int)(((uint)uVar8 & 0xffff) - SCREEN_PROJECTION_MAP_X);
    auVar25 = vectorCompareGreaterThanFloatingPoint(auVar24,auVar19);
    uVar12 = puVar6[0x10];
    auVar18 = vectorCompareGreaterThanFloatingPoint(auVar22,auVar19);
    auVar25 = vectorConditionalSelect(auVar24,auVar19,auVar25);
    auVar22 = vectorConditionalSelect(auVar22,auVar19,auVar18);
    auVar18 = vectorCompareGreaterThanFloatingPoint(auVar23,auVar19);
    auVar24 = vectorAddFloatingPoint(auVar25,auVar17);
    auVar26 = vectorCompareGreaterThanFloatingPoint(auVar14,auVar19);
    auVar22 = vectorAddFloatingPoint(auVar22,auVar17);
    auVar25 = vectorConditionalSelect(auVar23,auVar19,auVar18);
    auVar18 = vectorConditionalSelect(auVar14,auVar19,auVar26);
    auVar25 = vectorAddFloatingPoint(auVar25,auVar17);
    auVar14 = vectorAddFloatingPoint(auVar18,auVar17);
    puVar6[0x10] = (longlong)
                   (int)(((uint)((ulonglong)uVar8 >> 0x10) & 0xffff) - SCREEN_PROJECTION_MAP_Y);
    pRVar7 = HUD_Pass;
    uVar2 = *(uint *)(param_2 + (int)lVar10);
    uVar13 = puVar6[0x10];
    auVar23 = vectorCompareGreaterThanFloatingPoint(auVar24,auVar19);
    auVar18 = vectorCompareGreaterThanFloatingPoint(auVar22,auVar19);
    auVar23 = vectorConditionalSelect(auVar24,auVar19,auVar23);
    auVar18 = vectorConditionalSelect(auVar22,auVar19,auVar18);
    auVar23 = vectorConvertToSignedFixedPointWordSaturate(auVar23,0);
    auVar24 = vectorCompareGreaterThanFloatingPoint(auVar14,auVar19);
    auVar22 = vectorConvertToSignedFixedPointWordSaturate(auVar18,0);
    auVar18 = vectorConditionalSelect(auVar14,auVar19,auVar24);
    auVar14 = vectorCompareGreaterThanFloatingPoint(auVar25,auVar19);
    *HUD_Pass->command = 0x41948;
    auVar25 = vectorConditionalSelect(auVar25,auVar19,auVar14);
    auVar14 = vectorConvertToSignedFixedPointWordSaturate(auVar18,0);
    auVar18 = ZEXT416(8);
    auVar25 = vectorConvertToSignedFixedPointWordSaturate(auVar25,0);
    auVar18 = vectorShiftLeftIntegerWord
                        (auVar22,auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60);
    auVar22 = vectorShiftLeftIntegerWord
                        (auVar14,auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60);
    auVar14 = vectorShiftLeftIntegerWord(auVar25,auVar15);
    lVar9 = lVar9 + 4;
    auVar18 = (auVar23 | auVar18 | auVar22 | auVar14) >> 0x60 & (undefined1  [16])0xffffffff;
    uVar5 = storeVectorElementWordIndexed
                      (auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60,4,
                       ZEXT48(pRVar7->command));
    *(undefined4 *)((uint)(pRVar7->command + 1) & 0xfffffffc) = uVar5;
    pRVar7->command = pRVar7->command + 2;
    pRVar7 = HUD_Pass;
    *HUD_Pass->command = 0x41904;
    pRVar1 = pRVar7->command;
    puVar6[0x10] = (longlong)(int)((float)(longlong)uVar12 * 0.0625);
    pRVar1[1] = ((int)uVar2 >> 0x10 & 0xfff8U) << 0xd | (int)(short)((ushort)(uVar2 >> 3) & 0x1fff);
    pRVar7->command = pRVar7->command + 2;
    pRVar7 = HUD_Pass;
    RVar3 = *(RsxCmd *)((int)puVar6 + 0x84);
    puVar6[0x10] = (longlong)(int)((float)(longlong)uVar13 * 0.0625);
    iVar4 = *(int *)((int)puVar6 + 0x84);
    *pRVar7->command = NV4097_SET_VERTEX_DATA2S_M_x1;
    pRVar7->command[1] = iVar4 << 0x10 | RVar3 & 0xffff;
    pRVar7->command = pRVar7->command + 2;
    pRVar7 = HUD_Pass;
    lVar11 = lVar11 + -1;
  } while (lVar11 != 0);
  *HUD_Pass->command = NV4097_SET_BEGIN_END_x1;
  pRVar7->command[1] = 0;
  pRVar7->command = pRVar7->command + 2;
  return;
}



//==== 0006f0a0  ns=draw  size=0x710
// sig: undefined DrawTextBox(void)
// callers(1): 000784e8 freeze::DrawDialogText
// callees(2): 000685e0 draw::DrawFullScreenQuad; 0006889c draw::Sprite_DrawShape

void draw::DrawTextBox(undefined8 param_1,int param_2,undefined8 param_3,int param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  iVar9 = (int)param_1;
  iVar2 = (int)param_3;
  if (((iVar9 == 0 && param_2 == 0x1a0) && (iVar2 == 0)) && (param_4 == 0x200)) {
    DrawFullScreenQuad(param_5 & 0xff000000 | 4,
                       (void *)(EffectTexHeaders + *(int *)(TexInfo + 0x58) * 0x24));
  }
  else {
    Sprite_DrawShape(param_3,param_1,param_4 - iVar2,param_2 - iVar9,0,0,0x10,0x10);
  }
  iVar1 = iVar9 + -1;
  iVar8 = iVar9 + 1;
  iVar7 = iVar2 + 3;
  iVar6 = param_4 + 5;
  if (((iVar1 == 0 && iVar8 == 0x1a0) && (iVar7 == 0)) && (iVar6 == 0x200)) {
    DrawFullScreenQuad(param_5,(void *)(EffectTexHeaders + *(int *)(TexInfo + 0x58) * 0x24));
  }
  else {
    Sprite_DrawShape(iVar7,iVar1,iVar6 - iVar7,iVar8 - iVar1,0,0,0x10,0x10);
  }
  iVar1 = iVar9 + -3;
  iVar4 = iVar9 + -5;
  iVar3 = iVar2 + -1;
  iVar5 = param_4 + -3;
  if (((iVar1 == 0 && iVar4 == 0x1a0) && (iVar3 == 0)) && (iVar5 == 0x200)) {
    DrawFullScreenQuad(param_5,(void *)(EffectTexHeaders + *(int *)(TexInfo + 0x58) * 0x24));
  }
  else {
    Sprite_DrawShape(iVar3,iVar1,iVar5 - iVar3,iVar4 - iVar1,0,0,0x10,0x10);
  }
  iVar1 = param_2 + -3;
  if (((iVar4 == 0 && iVar1 == 0x1a0) && (iVar3 == 0)) && (iVar2 + 1 == 0x200)) {
    DrawFullScreenQuad(param_5,(void *)(EffectTexHeaders + *(int *)(TexInfo + 0x58) * 0x24));
  }
  else {
    Sprite_DrawShape(iVar3,iVar4,(iVar2 + 1) - iVar3,iVar1 - iVar4,0,0,0x10,0x10);
  }
  iVar9 = iVar9 + 3;
  iVar4 = param_2 + 1;
  iVar3 = iVar2 + -3;
  if (((iVar9 == 0 && iVar4 == 0x1a0) && (iVar3 == 0)) && (iVar2 + -5 == 0x200)) {
    DrawFullScreenQuad(param_5,(void *)(EffectTexHeaders + *(int *)(TexInfo + 0x58) * 0x24));
  }
  else {
    Sprite_DrawShape(iVar3,iVar9,(iVar2 + -5) - iVar3,iVar4 - iVar9,0,0,0x10,0x10);
  }
  iVar2 = param_2 + -1;
  if (((iVar2 == 0) && (iVar4 == 0x1a0)) && ((iVar3 == 0 && (iVar5 == 0x200)))) {
    DrawFullScreenQuad(param_5,(void *)(EffectTexHeaders + *(int *)(TexInfo + 0x58) * 0x24));
  }
  else {
    Sprite_DrawShape(iVar3,iVar2,iVar5 - iVar3,iVar4 - iVar2,0,0,0x10,0x10);
  }
  iVar2 = param_2 + 3;
  iVar3 = param_4 + 1;
  if (((iVar2 == 0 && param_2 + 5 == 0x1a0) && (iVar7 == 0)) && (iVar3 == 0x200)) {
    DrawFullScreenQuad(param_5,(void *)(EffectTexHeaders + *(int *)(TexInfo + 0x58) * 0x24));
  }
  else {
    Sprite_DrawShape(iVar7,iVar2,iVar3 - iVar7,(param_2 + 5) - iVar2,0,0,0x10,0x10);
  }
  iVar7 = param_4 + -1;
  if (((iVar9 == 0) && (iVar2 == 0x1a0)) && ((iVar7 == 0 && (iVar3 == 0x200)))) {
    DrawFullScreenQuad(param_5,(void *)(EffectTexHeaders + *(int *)(TexInfo + 0x58) * 0x24));
  }
  else {
    Sprite_DrawShape(iVar7,iVar9,iVar3 - iVar7,iVar2 - iVar9,0,0,0x10,0x10);
  }
  param_4 = param_4 + 3;
  if (((iVar8 == 0) && (iVar1 == 0x1a0)) && ((param_4 == 0 && (iVar6 == 0x200)))) {
    DrawFullScreenQuad(param_5,(void *)(EffectTexHeaders + *(int *)(TexInfo + 0x58) * 0x24));
  }
  else {
    Sprite_DrawShape(param_4,iVar8,iVar6 - param_4,iVar1 - iVar8,0,0,0x10,0x10);
  }
  return;
}



//==== 0006f7b0  ns=draw  size=0xb0
// sig: int FontLenSmall(char * s, int len)
// callers(0): 
// callees(1): 0006ccc4 draw::FontLenWithTable

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int draw::FontLenSmall(char *s,int len)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  
  if (g_JapaneseMode) {
    iVar2 = FontLenWithTable(s,len,&JapaneseGlyphs);
  }
  else {
    iVar3 = 0;
    iVar2 = 0;
    if (len != 0) {
      do {
        bVar1 = s[iVar3];
        if (bVar1 == 0) {
          return iVar2;
        }
        if ((&DAT_00736c53)[(uint)bVar1 * 4] != '\0') {
          iVar2 = iVar2 + (char)(&DAT_00736c53)[(uint)bVar1 * 4];
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 != len);
    }
  }
  return iVar2;
}



//==== 0006f860  ns=draw  size=0xb0
// sig: int FontLenLarge(char * s, int len)
// callers(0): 
// callees(1): 0006ccc4 draw::FontLenWithTable

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int draw::FontLenLarge(char *s,int len)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  
  if (g_JapaneseMode) {
    iVar2 = FontLenWithTable(s,len,&JapaneseGlyphs);
  }
  else {
    iVar3 = 0;
    iVar2 = 0;
    if (len != 0) {
      do {
        bVar1 = s[iVar3];
        if (bVar1 == 0) {
          return iVar2;
        }
        if ((&DAT_00736ff3)[(uint)bVar1 * 4] != '\0') {
          iVar2 = iVar2 + (char)(&DAT_00736ff3)[(uint)bVar1 * 4];
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 != len);
    }
  }
  return iVar2;
}



//==== 0006f918  ns=draw  size=0xe4
// sig: undefined FontLenScaledWithTable(void)
// callers(9): 0006fa00 draw::FontLenScaled; 0006fac8 draw::FontLenScaledSmall; 0006fb90 draw::FontLenScaledLarge; 0006ff88 draw::FontPrintRightWithScale; 00070680 draw::FontPrintCenterScaled; 00070b00 draw::FontPrintCenterScaledMedium; 00070cb0 draw::FontPrintCenterScaledSmall; 00070e60 draw::FontPrintCenterScaledLarge; 00141c90 pause::DrawPauseStrings
// callees(0): 

int draw::FontLenScaledWithTable
              (double param_1,int param_2,int param_3,undefined8 param_4,int param_5)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  double dVar6;
  
  iVar5 = 0;
  dVar6 = 0.0;
  if (param_3 != 0) {
    do {
      bVar3 = *(byte *)(param_2 + iVar5);
      if (bVar3 == 0) break;
      cVar1 = *(char *)(param_5 + (uint)bVar3 * 4 + 3);
      if (cVar1 != '\0') {
        if ((bVar3 < 0xbd) || (0xbe < bVar3)) {
          iVar4 = (int)cVar1;
        }
        else {
          bVar2 = *(byte *)(param_2 + iVar5 + -1);
          iVar4 = ((int)*(char *)(param_5 + (uint)bVar2 * 4 + 0x203) -
                  (int)*(char *)(param_5 + (uint)bVar2 * 4 + 3)) +
                  ((uint)LZCOUNT(bVar3 - 0xbe) >> 5) + 4;
        }
        dVar6 = (double)(float)((double)(longlong)iVar4 * param_1 + dVar6);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 != param_3);
  }
  return (int)dVar6;
}



//==== 0006fa00  ns=draw  size=0xc4
// sig: undefined FontLenScaled(void)
// callers(0): 
// callees(1): 0006f918 draw::FontLenScaledWithTable

int draw::FontLenScaled(double param_1,int param_2,undefined8 param_3)

{
  byte *pbVar1;
  int iVar2;
  double dVar3;
  
  if (g_JapaneseMode) {
    iVar2 = FontLenScaledWithTable(param_2,param_3,param_2,&JapaneseGlyphs);
  }
  else {
    iVar2 = 0;
    dVar3 = 0.0;
    if ((int)param_3 != 0) {
      do {
        pbVar1 = (byte *)(param_2 + iVar2);
        if (*pbVar1 == 0) break;
        iVar2 = iVar2 + 1;
        dVar3 = (double)(float)((double)(longlong)(int)(char)(&DAT_007368b3)[(uint)*pbVar1 * 4] *
                                param_1 + dVar3);
      } while (iVar2 != (int)param_3);
    }
    iVar2 = (int)dVar3;
  }
  return iVar2;
}



//==== 0006fac8  ns=draw  size=0xc4
// sig: undefined FontLenScaledSmall(void)
// callers(1): 001476f0 pause::MapMenu_DrawOptions
// callees(1): 0006f918 draw::FontLenScaledWithTable

int draw::FontLenScaledSmall(double param_1,int param_2,undefined8 param_3)

{
  byte *pbVar1;
  int iVar2;
  double dVar3;
  
  if (g_JapaneseMode) {
    iVar2 = FontLenScaledWithTable(param_2,param_3,param_2,&JapaneseGlyphs);
  }
  else {
    iVar2 = 0;
    dVar3 = 0.0;
    if ((int)param_3 != 0) {
      do {
        pbVar1 = (byte *)(param_2 + iVar2);
        if (*pbVar1 == 0) break;
        iVar2 = iVar2 + 1;
        dVar3 = (double)(float)((double)(longlong)(int)(char)(&DAT_00736c53)[(uint)*pbVar1 * 4] *
                                param_1 + dVar3);
      } while (iVar2 != (int)param_3);
    }
    iVar2 = (int)dVar3;
  }
  return iVar2;
}



//==== 0006fb90  ns=draw  size=0xc4
// sig: undefined FontLenScaledLarge(void)
// callers(0): 
// callees(1): 0006f918 draw::FontLenScaledWithTable

int draw::FontLenScaledLarge(double param_1,int param_2,undefined8 param_3)

{
  byte *pbVar1;
  int iVar2;
  double dVar3;
  
  if (g_JapaneseMode) {
    iVar2 = FontLenScaledWithTable(param_2,param_3,param_2,&JapaneseGlyphs);
  }
  else {
    iVar2 = 0;
    dVar3 = 0.0;
    if ((int)param_3 != 0) {
      do {
        pbVar1 = (byte *)(param_2 + iVar2);
        if (*pbVar1 == 0) break;
        iVar2 = iVar2 + 1;
        dVar3 = (double)(float)((double)(longlong)(int)(char)(&DAT_00736ff3)[(uint)*pbVar1 * 4] *
                                param_1 + dVar3);
      } while (iVar2 != (int)param_3);
    }
    iVar2 = (int)dVar3;
  }
  return iVar2;
}



//==== 0006fc54  ns=draw  size=0xa8
// sig: undefined FontPrintSmallLeft(void)
// callers(4): 0014ec5c pause::DrawSaveLoadFrame; 00170490 vendor::DrawWeaponStrings; 001711a8 vendor::Vendor_DrawItemInfo; 001e6130 mobyupd::update1160::M1160_Hud_Draw
// callees(2): 0006c5ec draw::FontPrintJapanese; 0006c8d0 draw::FontPrint

void draw::FontPrintSmallLeft
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  if (g_JapaneseMode) {
    FontPrintJapanese(param_1,param_2,param_3,param_4,param_5,*(undefined4 *)(TexInfo + 4),
                      &JapaneseGlyphs);
  }
  else {
    FontPrint(param_1,param_2,param_3,param_4,param_5,*(undefined4 *)(TexInfo + 8),&Glyphs);
  }
  return;
}



//==== 0006fcfc  ns=draw  size=0xa8
// sig: undefined FontPrintLarge(void)
// callers(5): 000c9824 hud::HudEntry_DrawLargeNumber; 000d3e20 hud::Draw_MetalDetectorHud; 000d6148 hud::Draw_RaceLapPlaceHud; 000d6710 hud::Draw_RaceTimeScoreHud; 00272f40 mobyupdate_helpers::M1421_00272f40
// callees(2): 0006c5ec draw::FontPrintJapanese; 0006c8d0 draw::FontPrint

void draw::FontPrintLarge
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  if (g_JapaneseMode) {
    FontPrintJapanese(param_1,param_2,param_3,param_4,param_5,*(undefined4 *)(TexInfo + 4),
                      &JapaneseGlyphs);
  }
  else {
    FontPrint(param_1,param_2,param_3,param_4,param_5,*(undefined4 *)(TexInfo + 0xc),
              &LargeWesternGlyphs);
  }
  return;
}



//==== 0006fda4  ns=draw  size=0xa0
// sig: undefined FontPrint_unk(void)
// callers(3): 0014ad88 pause::DrawCameraSettingsFrame; 0016fc10 vendor::Vendor_DrawScrollText; 00172c40 vendor::Vendor_HudUpdate
// callees(2): 00068c70 draw::FontPrintJapanese_unk2; 00069a50 draw::FontPrint_unk3

void draw::FontPrint_unk(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  if (g_JapaneseMode) {
    FontPrintJapanese_unk2(param_1,param_2,param_3);
  }
  else {
    FontPrint_unk3(param_1,param_2,param_3);
  }
  return;
}



//==== 0006fe44  ns=draw  size=0xa0
// sig: undefined FontPrintScaled(void)
// callers(3): 001476f0 pause::MapMenu_DrawOptions; 00170490 vendor::DrawWeaponStrings; 001711a8 vendor::Vendor_DrawItemInfo
// callees(2): 00068c70 draw::FontPrintJapanese_unk2; 00069a50 draw::FontPrint_unk3

void draw::FontPrintScaled(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  if (g_JapaneseMode) {
    FontPrintJapanese_unk2(param_1,param_2,param_3);
  }
  else {
    FontPrint_unk3(param_1,param_2,param_3);
  }
  return;
}



//==== 0006fee4  ns=draw  size=0xa0
// sig: undefined FontPrintScaled_v2(void)
// callers(0): 
// callees(2): 00068c70 draw::FontPrintJapanese_unk2; 00069a50 draw::FontPrint_unk3

void draw::FontPrintScaled_v2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  if (g_JapaneseMode) {
    FontPrintJapanese_unk2(param_1,param_2,param_3);
  }
  else {
    FontPrint_unk3(param_1,param_2,param_3);
  }
  return;
}



//==== 0006ff88  ns=draw  size=0x1a8
// sig: undefined FontPrintRightWithScale(void)
// callers(1): 0014ad88 pause::DrawCameraSettingsFrame
// callees(3): 00068c70 draw::FontPrintJapanese_unk2; 00069a50 draw::FontPrint_unk3; 0006f918 draw::FontLenScaledWithTable

void draw::FontPrintRightWithScale
               (double param_1,int param_2,int param_3,undefined8 param_4,int param_5,
               undefined8 param_6)

{
  byte *pbVar1;
  longlong lVar2;
  int iVar3;
  double dVar4;
  
  if (g_JapaneseMode) {
    iVar3 = FontLenScaledWithTable(param_1,param_5,param_6,param_4,&JapaneseGlyphs);
  }
  else {
    iVar3 = 0;
    dVar4 = 0.0;
    if ((int)param_6 != 0) {
      do {
        pbVar1 = (byte *)(param_5 + iVar3);
        if (*pbVar1 == 0) break;
        iVar3 = iVar3 + 1;
        dVar4 = (double)(float)((double)(longlong)(int)(char)(&DAT_007368b3)[(uint)*pbVar1 * 4] *
                                param_1 + dVar4);
      } while (iVar3 != (int)param_6);
    }
    iVar3 = (int)dVar4;
  }
  lVar2 = (longlong)(param_2 - iVar3);
  if (g_JapaneseMode == false) {
    FontPrint_unk3((double)lVar2,(double)(longlong)param_3,param_1,TexInfo,lVar2,param_4,param_5,
                   param_6);
  }
  else {
    FontPrintJapanese_unk2
              ((double)lVar2,(double)(longlong)param_3,param_1,TexInfo,lVar2,param_4,param_5,param_6
              );
  }
  return;
}



