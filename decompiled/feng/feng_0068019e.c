/* spd-match: far pct=47.92 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_cheap */
#include "ghidra_compat.h"

int __cdecl FUN_00677f42();

int ___wctomb_mt(int param_1,LPSTR param_2,WCHAR param_3)

{
  LPSTR lpMultiByteStr;
  int iVar1;
  undefined4 *puVar2;
  
  lpMultiByteStr = param_2;
  if (param_2 == (LPSTR)0x0) {
    iVar1 = 0;
  }
  else {
    if (*(int *)(param_1 + 0x14) == 0) {
      if ((ushort)param_3 < 0x100) {
        *param_2 = (CHAR)param_3;
        return 1;
      }
    }
    else {
      param_2 = (LPSTR)0x0;
      iVar1 = WideCharToMultiByte(*(UINT *)(param_1 + 4),0,&param_3,1,lpMultiByteStr,
                                  *(int *)(param_1 + 0x28),(LPCSTR)0x0,(LPBOOL)&param_2);
      if ((iVar1 != 0) && (param_2 == (LPSTR)0x0)) {
        return iVar1;
      }
    }
    puVar2 = (undefined4 *)FUN_00677f42();
    *puVar2 = 0x2a;
    iVar1 = -1;
  }
  return iVar1;
}
