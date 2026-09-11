/* spd-match: far pct=2.33 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_005A34A0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int unaff_ESI;
void __fastcall FUN_005a34a0(int val, int param_1)

{
  int iVar1;

  int iVar2;
  int unaff_ESI;
  
  if ((-1 < val) && (val < 0x19)) {
    param_1 = val * 0x90 + 4 + param_1;
    iVar2 = 0;
    while ((iVar1 = *(int *)(param_1 + iVar2 * 4), iVar1 != 0 && (iVar1 != unaff_ESI))) {
      iVar2 = iVar2 + 1;
      if (0x23 < iVar2) {
        return;
      }
    }
    *(int *)(param_1 + iVar2 * 4) = unaff_ESI;
  }
  return;
}
