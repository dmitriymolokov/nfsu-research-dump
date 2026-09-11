/* spd-match: far pct=9.09 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0054B6D0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00664d40();
int __cdecl FUN_00666ea0();
int unaff_ESI;
undefined4 __fastcall FUN_0054b6d0(int val)

{

  undefined4 uVar1;
  int unaff_ESI;
  
  if (*(int *)(unaff_ESI + 0x68) == 0) {
    return 0;
  }
  if (val == -1) {
    val = *(int *)(unaff_ESI + 0x294);
  }
  uVar1 = FUN_00664d40(*(int *)(unaff_ESI + 0x68),5,val);
  uVar1 = FUN_00666ea0(*(undefined4 *)(unaff_ESI + 0x74),uVar1);
  return uVar1;
}
