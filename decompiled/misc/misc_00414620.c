/* spd-match: far pct=5.71 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00414620 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004f0800();
int __cdecl FUN_004f3f90();
extern int DAT_0073578c;
extern int DAT_00736344;
extern int DAT_00746104;
void __fastcall FUN_00414620(int obj, int param_1)

{
  int iVar1;

  int iVar2;
  
  iVar1 = DAT_0073578c;
  if ((((*(char *)(obj + 0x80) == '\0') && (DAT_00736344 != param_1)) &&
      (DAT_00736344 = param_1, DAT_0073578c != 0)) &&
     ((iVar2 = FUN_004f3f90(&DAT_00746104), iVar2 != 0 && (*(int *)(iVar2 + 0x18) != 0)))) {
    FUN_004f0800(*(undefined4 *)(iVar1 + 8),*(int *)(iVar2 + 0x18));
  }
  return;
}
