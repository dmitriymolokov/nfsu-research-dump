/* spd-match: close pct=87.10 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00431940 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

void __fastcall FUN_00431940(int obj)

{
  int *piVar1;

  if ((*(int *)(*(int *)(*(int *)(obj + 4) + 0xc) + 0xc54) != 1) &&
     (piVar1 = *(int **)(*(int *)(obj + 4) + 0x878), piVar1 != (int *)0x0)) {
                    
                    
    (**(code **)(*piVar1 + 0x4c))();
    return;
  }
  return;
}
