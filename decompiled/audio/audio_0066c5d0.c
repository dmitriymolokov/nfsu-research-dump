/* spd-match: far pct=16.87 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0066C5D0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_0066c2a0();
void __fastcall FUN_0066c5d0(int obj, int param_1)

{
  int iVar1;

  int iVar2;
  uint uVar3;
  
  iVar1 = *(int *)(obj + 8);
  if (iVar1 != 6) {
    uVar3 = *(uint *)(obj + 0xc);
    if (iVar1 == 4) {
      uVar3 = uVar3 - 1;
    }
    if (*(int *)(param_1 + 0xb4) != *(int *)(param_1 + 0xb0)) {
      do {
        iVar2 = *(int *)(param_1 + 0xb4);
        if (uVar3 < *(uint *)(*(int *)(param_1 + 0xbc) + 8 + iVar2)) break;
        if (*(int *)(param_1 + 0xb8) == iVar2) {
          *(int *)(param_1 + 0xb8) =
               (*(int *)(param_1 + 0xa8) + *(int *)(param_1 + 0xb8)) % *(int *)(param_1 + 0xac);
        }
        iVar2 = (*(int *)(param_1 + 0xa8) + iVar2) % *(int *)(param_1 + 0xac);
        *(int *)(param_1 + 0xb4) = iVar2;
      } while (iVar2 != *(int *)(param_1 + 0xb0));
    }
    if (iVar1 == 4) {
      *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0xb4);
      FUN_0066c2a0();
    }
  }
  return;
}
