/* spd-match: far pct=19.81 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_cheap */
#include "ghidra_compat.h"

int __cdecl FUN_00681236();
extern unsigned char *DAT_00717ab0;

undefined4 FUN_00679330(void)

{
  LPCWSTR lpWideCharStr;
  size_t _Size;
  LPSTR lpMultiByteStr;
  int iVar1;
  undefined4 *puVar2;
  
  lpWideCharStr = (LPCWSTR)*DAT_00717ab0;
  puVar2 = DAT_00717ab0;
  while( true ) {
    if (lpWideCharStr == (LPCWSTR)0x0) {
      return 0;
    }
    _Size = WideCharToMultiByte(0,0,lpWideCharStr,-1,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
    if (((_Size == 0) || (lpMultiByteStr = _malloc(_Size), lpMultiByteStr == (LPSTR)0x0)) ||
       (iVar1 = WideCharToMultiByte(0,0,(LPCWSTR)*puVar2,-1,lpMultiByteStr,_Size,(LPCSTR)0x0,
                                    (LPBOOL)0x0), iVar1 == 0)) break;
    FUN_00681236(lpMultiByteStr,0);
    puVar2 = puVar2 + 1;
    lpWideCharStr = (LPCWSTR)*puVar2;
  }
  return 0xffffffff;
}
