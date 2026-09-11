/* spd-match: far pct=26.21 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00551B90 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004f9f30();
int __cdecl FUN_00550730();
int __cdecl FUN_00552610();
int __cdecl FUN_00552bb0();
int __cdecl FUN_00553300();
extern int DAT_00777b54;
void __fastcall FUN_00551b90(int val, int param_1)

{
  int iVar1;

  if (*(int *)(param_1 + 0x6c) != val) {
    iVar1 = *(int *)(param_1 + 0x7a0);
    *(int *)(param_1 + 0x6c) = val;
    FUN_00550730();
    if (*(int *)(iVar1 + 8) != val) {
      *(int *)(iVar1 + 8) = val;
      *(undefined1 *)(iVar1 + 0xc) = 1;
    }
    FUN_00553300();
    iVar1 = *(int *)(param_1 + 0x7a0);
    DAT_00777b54 = val;
    *(undefined4 *)(iVar1 + 0x24) = 0;
    *(undefined4 *)(iVar1 + 0x28) = 0;
    *(undefined4 *)(iVar1 + 0x2c) = 0;
    *(undefined4 *)(iVar1 + 0x30) = 0;
    *(undefined4 *)(iVar1 + 0x20) = 0;
    FUN_004f9f30();
    if (*(int *)(param_1 + 0x6c) == 0) {
      FUN_00552610(param_1,1);
      return;
    }
    FUN_00552bb0(param_1,1);
  }
  return;
}
