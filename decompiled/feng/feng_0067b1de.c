/* spd-match: far pct=3.57 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0067B1DE */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __fastcall FUN_0067b1de(int val, int *param_1)

{
  int iVar1;

  int iVar2;
  
  iVar1 = param_1[1];
  iVar2 = *param_1 + val;
  if (-1 < iVar1) {
    iVar2 = iVar2 + *(int *)(*(int *)(iVar1 + val) + param_1[2]) + iVar1;
  }
  return iVar2;
}
