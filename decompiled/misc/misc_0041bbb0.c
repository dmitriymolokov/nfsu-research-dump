/* spd-match: far pct=4.76 flags=/O1 /c /nologo /TP method=m39 build_strip source=m39/3.9.26.51-member42/va_0041BBB0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00419c20(...);
int unaff_EDI;

struct ThisCallBox {
  int FUN_0041bbb0(int obj, int param_2);
};
int ThisCallBox::FUN_0041bbb0(int obj, int param_2)

{
  int iVar1;
  int *piVar2;

  int iVar3;
  int unaff_EDI;
  
  iVar1 = obj + param_2 * 8;
  if (*(int *)(unaff_EDI + 0x10 + iVar1 * 4) == 0) {
    FUN_00419c20("ERROR: Trying to unload force effect on channel %d but we have an invalid effectid\n"
                 ,param_2);
    return 0;
  }
  (**(code **)(*(int *)*((undefined4 *)this) + 0x1c))((int *)*((undefined4 *)this));
  piVar2 = *(int **)(unaff_EDI + 0x10 + iVar1 * 4);
  iVar3 = (**(code **)(*piVar2 + 0x2c))(piVar2);
  if (iVar3 < 0) {
    FUN_00419c20("ERROR: Failed to unload force effect on channel %d\n",param_2);
    return iVar3;
  }
  *(undefined1 *)(iVar1 + unaff_EDI) = 0;
  *(undefined4 *)(unaff_EDI + 0x10 + iVar1 * 4) = 0;
  return iVar3;
}
