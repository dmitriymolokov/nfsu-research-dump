/* spd-match: far pct=7.29 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0041BCF0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00419c20();
uint __fastcall FUN_0041bcf0(int * obj)

{
  int *piVar1;

  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  int iStack_4;
  
  piVar1 = (int *)*obj;
  local_14 = 0x14;
  local_10 = 0x10;
  local_c = 0;
  local_8 = 0;
  if (piVar1 != (int *)0x0) {
    local_18 = (**(code **)(*piVar1 + 0x14))(piVar1,7,&local_14);
  }
  if (-1 < local_18) {
    return (uint)(iStack_4 * 100) / 10000;
  }
  FUN_00419c20("ERROR: Failed to get overall force gain\n");
  return 0xffffffff;
}
