/* spd-match: far pct=73.33 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00436B40 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00436460();
void __fastcall FUN_00436b40(int obj, int param_1)

{
  int iVar1;

  iVar1 = *(int *)(obj + param_1 * 4);
  if ((*(char *)(iVar1 + 0x14) != '\0') &&
     ((iVar1 = *(int *)(iVar1 + 0x10), iVar1 == 0 || (iVar1 == 1)))) {
    FUN_00436460(1);
  }
  return;
}
