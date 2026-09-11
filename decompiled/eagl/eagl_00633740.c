/* spd-match: far pct=23.81 flags=/O1 /c /nologo /TP method=m39 source=m39/4.1.4/va_00633740 */
#include "ghidra_compat.h"

int __cdecl FUN_00633640(...);

void __fastcall FUN_00633740(undefined4* self, int dummy_edx, undefined4 param_2)
{
  int *piVar1;
  
  piVar1 = (int *)(*(int *)(self + 0x10) + *(int *)(self + 0x30) * 4);
  FUN_00633640((float)(int)(*(ushort *)(*piVar1 + 4) - 1),
               (float)(int)(*(ushort *)(piVar1[1] + 4) - 1),param_2);
  return;
}
