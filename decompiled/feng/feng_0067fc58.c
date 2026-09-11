/* spd-match: far pct=7.23 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

extern int DAT_00717a88;
extern int DAT_00717a94;
extern code *DAT_00717ed0;
extern code *DAT_00717ed4;
extern code *DAT_00717ed8;
extern code *DAT_00717edc;
extern code *DAT_00717ee0;

int __cdecl ___crtMessageBoxA(LPCSTR _LpText,LPCSTR _LpCaption,UINT _UType)

{
  HMODULE hModule;
  int iVar1;
  int iVar2;
  undefined1 local_14 [8];
  byte local_c;
  undefined1 local_8 [4];
  
  iVar2 = 0;
  if (DAT_00717ed0 == (FARPROC)0x0) {
    hModule = LoadLibraryA("user32.dll");
    if ((hModule == (HMODULE)0x0) ||
       (DAT_00717ed0 = GetProcAddress(hModule,"MessageBoxA"), DAT_00717ed0 == (FARPROC)0x0)) {
      return 0;
    }
    DAT_00717ed4 = GetProcAddress(hModule,"GetActiveWindow");
    DAT_00717ed8 = GetProcAddress(hModule,"GetLastActivePopup");
    if ((DAT_00717a88 == 2) &&
       (DAT_00717ee0 = GetProcAddress(hModule,"GetUserObjectInformationA"),
       DAT_00717ee0 != (FARPROC)0x0)) {
      DAT_00717edc = GetProcAddress(hModule,"GetProcessWindowStation");
    }
  }
  if ((DAT_00717edc == (FARPROC)0x0) ||
     (((iVar1 = (*DAT_00717edc)(), iVar1 != 0 &&
       (iVar1 = (*DAT_00717ee0)(iVar1,1,local_14,0xc,local_8), iVar1 != 0)) && ((local_c & 1) != 0))
     )) {
    if (((DAT_00717ed4 != (FARPROC)0x0) && (iVar2 = (*DAT_00717ed4)(), iVar2 != 0)) &&
       (DAT_00717ed8 != (FARPROC)0x0)) {
      iVar2 = (*DAT_00717ed8)(iVar2);
    }
  }
  else if (DAT_00717a94 < 4) {
    _UType = _UType | 0x40000;
  }
  else {
    _UType = _UType | 0x200000;
  }
  iVar2 = (*DAT_00717ed0)(iVar2,_LpText,_LpCaption,_UType);
  return iVar2;
}
