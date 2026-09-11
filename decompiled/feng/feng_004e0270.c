/* spd-match: far pct=13.25 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004E0270 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004fd230();
int __cdecl FUN_004ff030();
void __fastcall FUN_004e0270(int obj)

{
  int iVar1;

  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(obj + 0xc);
  *(undefined1 *)(obj + 9) = 1;
  if ((iVar1 != 0) && (iVar3 = *(int *)(iVar1 + 0x4c), iVar3 != 0)) {
    while (iVar2 = FUN_004fd230(), *(int *)(iVar3 + 0x30) != iVar2) {
      iVar3 = *(int *)(iVar3 + 4);
      if (iVar3 == 0) {
        return;
      }
    }
    if (iVar3 != 0) {
      if (iVar3 != *(int *)(iVar1 + 0x54)) {
        *(int *)(iVar1 + 0x54) = iVar3;
        FUN_004ff030(iVar1);
        *(undefined4 *)(*(int *)(iVar1 + 0x54) + 0x10) = 0;
      }
      *(undefined4 *)(iVar3 + 0x10) = 0;
    }
  }
  return;
}
