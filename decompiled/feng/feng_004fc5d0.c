/* spd-match: far pct=3.12 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004FC5D0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00674898();
void __fastcall FUN_004fc5d0(int val, undefined4 param_1, int *param_2, int *param_3)

{

  int iVar1;
  int unaff_ESI;
  
  iVar1 = FUN_00674898(val - unaff_ESI);
  *param_3 = iVar1 + *param_2 + unaff_ESI;
  return;
}
