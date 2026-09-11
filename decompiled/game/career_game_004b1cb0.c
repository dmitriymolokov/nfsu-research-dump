/* spd-match: far pct=18.31 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004B1CB0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004ef050();
int __cdecl FUN_004f65d0();
int __cdecl FUN_004f6970();
int __cdecl FUN_004ffb70();
extern int DAT_0073578c;
void __fastcall FUN_004b1cb0(int obj)

{

  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(obj + 0x94) != 0) {
    return;
  }
  if (((*(int *)(obj + 0xc) == 0) || (iVar1 = FUN_004f65d0(), iVar1 == 0)) ||
     (iVar1 = FUN_004ffb70(), iVar1 == 0)) {
    if (DAT_0073578c != 0) {
      uVar2 = FUN_004ef050(0x3b7f8ae);
      FUN_004f6970(uVar2);
      return;
    }
    iVar1 = 0;
  }
  FUN_004f6970(iVar1);
  return;
}
