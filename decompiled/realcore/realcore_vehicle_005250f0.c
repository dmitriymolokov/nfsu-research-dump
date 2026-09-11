/* spd-match: far pct=15.28 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_005250F0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_0064bc30();
int __cdecl FUN_00674898();
void __fastcall FUN_005250f0(int * obj)

{

  int iVar1;
  undefined4 local_4;
  
  iVar1 = obj[0x1b];
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  else if (0xffff < iVar1) {
    iVar1 = 0xffff;
  }
  *(int *)(obj[0xc0] + 0x10) = iVar1;
  iVar1 = FUN_00674898();
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  else if (0x1fa0 < iVar1) {
    iVar1 = 0x1fa0;
  }
  *(int *)(obj[0xc0] + 0xc) = iVar1;
  local_4 = FUN_00674898();
  (**(code **)(*obj + 0x38))(&local_4);
  *(undefined4 *)(obj[0xc0] + 8) = 9;
  if (*(int *)obj[0xc0] != 0) {
    FUN_0064bc30((int *)obj[0xc0] + 1);
  }
  return;
}
