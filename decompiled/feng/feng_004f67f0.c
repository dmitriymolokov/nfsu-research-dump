/* spd-match: far pct=21.13 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004F67F0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004ef050();
int __cdecl FUN_004f65d0();
int __cdecl FUN_004f6780();
int __cdecl FUN_004fd230();
int __cdecl FUN_004ffb70();
extern int DAT_0073578c;
undefined4 __fastcall FUN_004f67f0(int val)

{

  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_004fd230();
  if (((val == 0) || (iVar2 = FUN_004f65d0(), iVar2 == 0)) ||
     (iVar2 = FUN_004ffb70(), iVar2 == 0)) {
    if (DAT_0073578c == 0) {
      return 0;
    }
    iVar2 = FUN_004ef050(uVar1);
  }
  if ((iVar2 != 0) && (*(int *)(iVar2 + 0x18) == 2)) {
    uVar1 = FUN_004f6780();
    return uVar1;
  }
  return 0;
}
