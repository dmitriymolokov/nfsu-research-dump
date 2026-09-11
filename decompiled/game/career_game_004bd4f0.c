/* spd-match: far pct=3.88 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004BD4F0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004ab510();
int __cdecl FUN_004bd5e0();
void __fastcall FUN_004bd4f0(int val)

{
  int *piVar1;

  int iVar2;
  int iVar3;
  
  iVar2 = FUN_004ab510();
  piVar1 = (int *)(iVar2 + 0x20);
  iVar2 = *piVar1;
  if (val == -0x4a68e40f) {
    iVar3 = iVar2 + -1;
    if (iVar3 < 1) {
      *piVar1 = 5;
      FUN_004bd5e0();
      return;
    }
    if ((iVar3 == 2) || (iVar3 == 4)) {
      *piVar1 = iVar2 + -2;
      FUN_004bd5e0();
      return;
    }
  }
  else {
    iVar3 = iVar2;
    if (val == -0x6edfbf62) {
      iVar3 = iVar2 + 1;
      if (5 < iVar3) {
        *piVar1 = 1;
        FUN_004bd5e0();
        return;
      }
      if ((iVar3 == 2) || (iVar3 == 4)) {
        iVar3 = iVar2 + 2;
      }
    }
  }
  *piVar1 = iVar3;
  FUN_004bd5e0();
  return;
}
