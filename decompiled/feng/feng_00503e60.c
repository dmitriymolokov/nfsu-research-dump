/* spd-match: far pct=33.33 flags=/O2 /c /nologo /TC method=m39 source=m39/4.1.3/va_00503E60 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
/* M4.1.3: drop phantom param_1 (phantom_param; sync only on uplift). */
#include "ghidra_compat.h"

void __fastcall FUN_00503e60(int obj, int param_2)

{
  int iVar1;

  int iVar2;
  
  iVar1 = *(int *)(param_2 + 0x20);
  if (obj != 0) {
    if (iVar1 == 0) {
      iVar2 = *(int *)(param_2 + 0x1c);
      *(int *)(obj + 4) = iVar2;
      if (iVar2 != 0) {
        *(int *)(iVar2 + 8) = obj;
      }
      *(undefined4 *)(obj + 8) = 0;
      *(int *)(param_2 + 0x1c) = obj;
    }
    else {
      iVar2 = *(int *)(iVar1 + 4);
      *(int *)(obj + 4) = iVar2;
      if (iVar2 != 0) {
        *(int *)(iVar2 + 8) = obj;
      }
      *(int *)(obj + 8) = iVar1;
      *(int *)(iVar1 + 4) = obj;
    }
    if (*(int *)(param_2 + 0x20) == iVar1) {
      *(int *)(param_2 + 0x20) = obj;
    }
    *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 1;
  }
  iVar2 = 0;
  for (iVar1 = *(int *)(param_2 + 0x1c); iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
    *(int *)(iVar1 + 0x1c) = iVar2;
    iVar2 = iVar2 + *(int *)(iVar1 + 0x18);
  }
  return;
}
