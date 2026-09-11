/* spd-match: far pct=25.45 flags=/O1 /c /nologo /TP method=m39 source=m39/4.1.4/va_00623260 */
#include "ghidra_compat.h"

extern void *PTR_FUN_006a79c0;
extern void *PTR_FUN_006dfaa0;
undefined4* __fastcall FUN_00623260(undefined4* self, int dummy_edx, byte param_2)
{
  int *piVar1;
  
  piVar1 = (int *)self[1];
  *self = (unsigned int)&PTR_FUN_006a79c0;
  if (piVar1 != (int *)0x0) {
    (*(int (__cdecl **)(...))(*piVar1 + 8))(piVar1);
  }
  self[1] = 0;
  self[6] = 0;
  if ((param_2 & 1) != 0) {
    (*(int (__cdecl *)(...))PTR_FUN_006dfaa0)(self,0x24);
  }
  return self;
}
