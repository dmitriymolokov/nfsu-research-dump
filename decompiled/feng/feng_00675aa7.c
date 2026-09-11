/* Decompiled from Speed.exe @ 00675aa7 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


undefined4 FUN_00675aa7(void)

{
  int iVar1;
  DWORD *lpTlsValue;
  BOOL BVar2;
  DWORD DVar3;
  
  iVar1 = __mtinitlocks();
  if (iVar1 != 0) {
    DAT_006eb864 = TlsAlloc();
    if (DAT_006eb864 != 0xffffffff) {
      lpTlsValue = _calloc(1,0x88);
      if (lpTlsValue != (DWORD *)0x0) {
        BVar2 = TlsSetValue(DAT_006eb864,lpTlsValue);
        if (BVar2 != 0) {
          lpTlsValue[0x15] = (DWORD)&DAT_006eb7b8;
          lpTlsValue[5] = 1;
          DVar3 = GetCurrentThreadId();
          lpTlsValue[1] = 0xffffffff;
          *lpTlsValue = DVar3;
          return 1;
        }
      }
      FUN_0067589a();
      return 0;
    }
  }
  FUN_0067589a();
  return 0;
}

