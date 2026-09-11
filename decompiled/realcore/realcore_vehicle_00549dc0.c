/* spd-match: far pct=11.61 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00549DC0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_0054a140();
int __cdecl FUN_00565da0();
extern int DAT_006ca778;
extern int DAT_006ca910;
extern int DAT_0078ee30;
undefined * __fastcall FUN_00549dc0(int obj, int param_1)

{

  int iVar1;
  undefined1 local_8c [44];
  int local_60;
  int local_44;
  int local_28;
  int local_c;
  
  if ((*(int *)(obj + 0x68) != 0) && (iVar1 = FUN_0054a140(obj,local_8c), iVar1 == 0)) {
    if ((((param_1 == 0) || (local_60 = local_44, param_1 == 1)) ||
        (local_60 = local_c, param_1 == 2)) || (local_60 = local_28, param_1 == 3)) {
      if (local_60 == 0) {
        local_60 = 100;
      }
      FUN_00565da0(&DAT_006ca778,local_60);
    }
    return &DAT_0078ee30;
  }
  return &DAT_006ca910;
}
