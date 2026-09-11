/* spd-match: far pct=7.34 flags=/O1 /c /nologo /TP method=m39 build_strip source=m39/3.9.26.51-smoke8/va_0041BAB0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00419c20(...);

struct ThisCallBox {
  int FUN_0041bab0(int obj, int param_2, int param_3);
};
int ThisCallBox::FUN_0041bab0(int obj, int param_2, int param_3)

{
  int iVar1;
  int *piVar2;

  int iVar3;
  
  iVar1 = obj + param_3 * 8;
  if (*(int *)(param_2 + 0x10 + iVar1 * 4) == 0) {
    FUN_00419c20("ERROR: Trying to start force effect on channel %d but we have an invalid effectid\n"
                 ,param_3);
    iVar3 = 0;
  }
  else {
    iVar3 = (**(code **)(*(int *)*((undefined4 *)this) + 0x1c))((int *)*((undefined4 *)this));
    if (-1 < iVar3) {
      piVar2 = *(int **)(param_2 + 0x10 + iVar1 * 4);
      iVar3 = (**(code **)(*piVar2 + 0x1c))(piVar2,1,0);
      if (iVar3 < 0) {
        FUN_00419c20("ERROR: Failed to start force effect on channel %d\n",param_3);
        return iVar3;
      }
      *(undefined1 *)(iVar1 + param_2) = 1;
      return iVar3;
    }
  }
  return iVar3;
}
