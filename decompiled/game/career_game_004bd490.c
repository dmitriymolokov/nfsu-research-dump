/* spd-match: far pct=3.23 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004BD490 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004ab510();
int __cdecl FUN_004bd580();
void __fastcall FUN_004bd490(int val)

{
  int *piVar1;

  int iVar2;
  
  iVar2 = FUN_004ab510();
  piVar1 = (int *)(iVar2 + 0x10);
  iVar2 = *piVar1;
  if (val == -0x6edfbf62) {
    iVar2 = iVar2 + -1;
    if (iVar2 < 1) {
      *piVar1 = 10;
      FUN_004bd580();
      return;
    }
  }
  else if ((val == -0x4a68e40f) && (iVar2 = iVar2 + 1, 10 < iVar2)) {
    iVar2 = 1;
  }
  *piVar1 = iVar2;
  FUN_004bd580();
  return;
}
