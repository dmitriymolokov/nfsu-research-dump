/* spd-match: far pct=20.00 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.51-cefam-err_nodecomp/va_0064D000 */
#include "ghidra_compat.h"

void __fastcall FUN_0064d000(int param_1, int count, int min_val)

{
  int *piVar1;
  int iVar2;

  piVar1 = (int *)(param_1 + 8);
  iVar2 = count - 1;
  do {
    if (*piVar1 < min_val) {
      min_val = *piVar1;
    }
    piVar1 = piVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}
