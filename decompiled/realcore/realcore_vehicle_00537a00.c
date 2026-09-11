/* spd-match: far pct=5.49 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00537A00 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

void __fastcall FUN_00537a00(int val, int edi)

{
  int *piVar1;
  undefined4 *puVar2;

  int iVar3;
  
  if (val == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = val;
    if ((((val != 1) && (val != 2)) && (val != 3)) &&
       ((iVar3 = -1, 3 < val && (val < 10)))) {
      iVar3 = 4;
    }
  }
  piVar1 = *(int **)(edi + 0x14 + iVar3 * 4);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x28))();
    puVar2 = *(undefined4 **)(edi + 0x14 + iVar3 * 4);
    if (puVar2 != (undefined4 *)0x0) {
      (**(code **)*puVar2)(1);
    }
    *(undefined4 *)(edi + 0x14 + iVar3 * 4) = 0;
  }
  return;
}
