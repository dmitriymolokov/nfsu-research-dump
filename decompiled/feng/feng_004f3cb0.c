/* spd-match: far pct=9.38 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004F3CB0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004f3c40();
int __cdecl FUN_004fd230();
int __fastcall FUN_004f3cb0(int obj)

{

  int *piVar1;
  int iVar2;
  
  iVar2 = **(int **)(obj + 0x10);
  if (iVar2 == 0x30203) {
    piVar1 = (int *)FUN_004f3c40();
    if (((*piVar1 == -0x1891baba) && (piVar1[2] == 0x64486b50)) && (0x1ffff < (uint)piVar1[4])) {
      iVar2 = FUN_004fd230();
      return iVar2;
    }
  }
  else if (iVar2 == 0x30210) {
    return (*(int **)(obj + 0x10))[2];
  }
  return 0;
}
