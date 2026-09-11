/* spd-match: far pct=29.27 flags=/O1 /Gr /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004262C0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00426110();
void __fastcall FUN_004262c0(int obj, undefined4 param_1, undefined4 param_2)

{

  if (*(int **)(obj + 0x2c) != (int *)0x0) {
    (**(code **)(**(int **)(obj + 0x2c) + 0x34))(param_2,0);
    return;
  }
  if ((*(int *)(obj + 0x28) != 1) && (*(int *)(obj + 0x28) != 3)) {
    FUN_00426110();
  }
  return;
}
