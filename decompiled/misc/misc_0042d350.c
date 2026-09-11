/* spd-match: far pct=43.85 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0042D350 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004906d0();
void __fastcall FUN_0042d350(int obj)

{
  int iVar1;

  if (*(int **)(obj + 0x27c) != (int *)0x0) {
    (**(code **)(**(int **)(obj + 0x27c) + 0x38))();
  }
  if (*(int **)(obj + 0x288) != (int *)0x0) {
    (**(code **)(**(int **)(obj + 0x288) + 0x38))();
  }
  iVar1 = *(int *)(obj + 0x28c);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x10) != 0)) {
    *(undefined4 *)(iVar1 + 0x10) = 0;
    if (*(int **)(iVar1 + 0xc) != (int *)0x0) {
      (**(code **)(**(int **)(iVar1 + 0xc) + 0x38))();
    }
  }
  iVar1 = *(int *)(obj + 0x290);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x10) != 0)) {
    *(undefined4 *)(iVar1 + 0x10) = 0;
    if (*(int **)(iVar1 + 0xc) != (int *)0x0) {
      (**(code **)(**(int **)(iVar1 + 0xc) + 0x38))();
    }
  }
  if (*(int *)(obj + 0x298) != 0) {
    FUN_004906d0(*(int *)(obj + 0x298) + 0x3c);
  }
  return;
}
