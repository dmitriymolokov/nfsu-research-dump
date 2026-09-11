/* spd-match: far pct=11.61 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004DD080 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00495f00();
int __cdecl FUN_004f6850();
void __fastcall FUN_004dd080(undefined4 val, undefined4 param_1, undefined4 *param_2, int param_3)

{

  int iVar1;
  undefined4 *puVar2;
  
  *(undefined4 *)(param_3 + 0x4c) = val;
  *(undefined1 *)(param_3 + 0x84) = 0;
  puVar2 = (undefined4 *)(param_3 + 0x50);
  for (iVar1 = 0xe; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_2;
    param_2 = param_2 + 1;
    puVar2 = puVar2 + 1;
  }
  FUN_00495f00(*(undefined4 *)(param_3 + 0x50));
  if (*(char *)(param_3 + 0x84) == '\0') {
    FUN_00495f00(*(undefined4 *)(param_3 + 0x54));
  }
  else {
    FUN_004f6850(*(undefined4 *)(param_3 + 0x54));
  }
  FUN_00495f00(*(undefined4 *)(param_3 + 0x78));
  return;
}
