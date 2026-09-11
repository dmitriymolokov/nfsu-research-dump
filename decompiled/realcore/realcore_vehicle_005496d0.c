/* spd-match: close pct=91.49 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_005496D0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00549980();
int __cdecl FUN_00565ce0();
void __fastcall FUN_005496d0(int obj)

{
  int *piVar1;
  int iVar2;

  FUN_00549980();
  piVar1 = *(int **)(obj + 0x284);
  while (piVar1 != (int *)(obj + 0x284)) {
    iVar2 = *piVar1;
    piVar1 = (int *)piVar1[1];
    *piVar1 = iVar2;
    *(int **)(iVar2 + 4) = piVar1;
    FUN_00565ce0();
    piVar1 = *(int **)(obj + 0x284);
  }
  return;
}
