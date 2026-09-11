/* spd-match: far pct=40.00 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0066B610 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_0066b150();
void __fastcall FUN_0066b610(int obj)

{

  DWORD DVar1;
  int iVar2;
  DWORD *pDVar3;
  
  if ((((*(int *)(obj + 0x80) == 3) && (*(int *)(obj + 0xa8) != *(int *)(obj + 0xac))) &&
      ((pDVar3 = (DWORD *)(*(int *)(obj + 0xb0) + *(int *)(obj + 0xac)), *pDVar3 == 0 ||
       (DVar1 = GetTickCount(), 0xf9 < DVar1 - *pDVar3)))) && (iVar2 = FUN_0066b150(), -1 < iVar2))
  {
    DVar1 = GetTickCount();
    *pDVar3 = DVar1;
  }
  return;
}
