/* spd-match: far pct=17.20 flags=/O2 /c /nologo /TC method=m39 source=m39/4.1.2/va_0066C0C0 */
/* M4.1.2 try: unaff_EDI → fastcall 2nd arg (EDX); keep obj as 1st (ECX). */
#include "ghidra_compat.h"

int __cdecl FUN_00662e80();
int __fastcall FUN_0066c0c0(int * obj, int ctx)

{

  int iVar1;
  DWORD DVar2;
  int iVar3;
  
  iVar3 = *obj + 8;
  iVar1 = FUN_00662e80(*(undefined4 *)(ctx + 0x6c),obj + 2,iVar3,0,ctx + 0x70,0x10);
  if (iVar1 == iVar3) {
    DVar2 = GetTickCount();
    *(DWORD *)(ctx + 0xc4) = DVar2;
    *(int *)(ctx + 0x58) = *(int *)(ctx + 0x58) + iVar3;
    *(int *)(ctx + 0x60) = *(int *)(ctx + 0x60) + 1;
    if (obj[2] != 6) {
      *(undefined4 *)(ctx + 0xa4) = 0;
      return iVar1;
    }
  }
  else {
    iVar1 = -1;
  }
  return iVar1;
}
