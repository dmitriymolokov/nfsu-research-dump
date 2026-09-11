/* spd-match: far pct=18.00 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0066FBF0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_0066fb20();
void __fastcall FUN_0066fbf0(int obj, int param_1)

{

  int iVar1;
  uint uVar2;
  bool bVar3;
  
  bVar3 = *(int *)(obj + 8) == 4;
  uVar2 = *(uint *)(obj + 0xc);
  if (bVar3) {
    uVar2 = uVar2 - 1;
  }
  if (*(int *)(param_1 + 0xe8) != *(int *)(param_1 + 0xe4)) {
    do {
      iVar1 = *(int *)(param_1 + 0xe8);
      if (uVar2 < *(uint *)(*(int *)(param_1 + 0xf0) + 8 + iVar1)) break;
      if (*(int *)(param_1 + 0xec) == iVar1) {
        *(int *)(param_1 + 0xec) =
             (*(int *)(param_1 + 0xdc) + *(int *)(param_1 + 0xec)) % *(int *)(param_1 + 0xe0);
      }
      iVar1 = (*(int *)(param_1 + 0xdc) + iVar1) % *(int *)(param_1 + 0xe0);
      *(int *)(param_1 + 0xe8) = iVar1;
    } while (iVar1 != *(int *)(param_1 + 0xe4));
  }
  if (bVar3) {
    *(undefined4 *)(param_1 + 0xec) = *(undefined4 *)(param_1 + 0xe8);
    FUN_0066fb20();
  }
  return;
}
