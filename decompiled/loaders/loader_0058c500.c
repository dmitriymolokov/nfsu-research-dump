/* spd-match: far pct=6.92 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0058C500 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_0058b6c0();
int __cdecl FUN_0058ba80();
int __cdecl FUN_0058bf40();
undefined4 __fastcall FUN_0058c500(int obj, int param_1)

{
  int *piVar1;
  int iVar2;

  piVar1 = (int *)(param_1 + 8);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    *(int *)(obj + 0x58) = *(int *)(obj + 0x58) + -1;
    iVar2 = *(int *)(param_1 + 0x18);
    if (((iVar2 != 0) && (*(char *)(iVar2 + 0xba1) == '\0')) && (*(char *)(iVar2 + 0xba2) == '\0'))
    {
      *(char *)(iVar2 + 0xba0) = *(char *)(iVar2 + 0xba0) + -1;
      FUN_0058bf40(obj);
      *(undefined4 *)(param_1 + 0x18) = 0;
    }
    iVar2 = *(int *)(param_1 + 0x14);
    if ((iVar2 != 0) && (*(char *)(iVar2 + 9) == '\0')) {
      *(char *)(iVar2 + 8) = *(char *)(iVar2 + 8) + -1;
      FUN_0058ba80(obj);
      *(undefined4 *)(param_1 + 0x14) = 0;
    }
    iVar2 = *(int *)(param_1 + 0x10);
    if ((iVar2 != 0) && (*(char *)(iVar2 + 0xd) == '\0')) {
      *(char *)(iVar2 + 0xc) = *(char *)(iVar2 + 0xc) + -1;
      FUN_0058b6c0(obj);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    return 1;
  }
  return 0;
}
