/* spd-match: far pct=69.57 flags=/O1 /c /nologo /TC method=m39 source=m39/4.1.G.45-s0/va_00576F10 */
/* Decompiled from Speed.exe @ 00576f10 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */
#define DAT_007306cc (*(int **)0x007306cc)
void __fastcall FUN_00576f10(int *ecx_ptr) {
  int *pMgr = DAT_007306cc;
  int v10 = pMgr[4];
  int v18 = pMgr[6];
  int esi_save = v10;
  *ecx_ptr = esi_save;
  pMgr[6] = v18 - 1;
  pMgr[4] = (int)ecx_ptr;
}

