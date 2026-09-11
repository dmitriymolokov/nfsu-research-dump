/* spd-match: far pct=14.67 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004F6240 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004f09b0();
int __cdecl FUN_004f3f90();
int __cdecl FUN_004f40c0();
int __cdecl FUN_004f5b90();
extern int DAT_0073578c;
extern int DAT_00746104;
void __fastcall FUN_004f6240(int val)

{

  int iVar1;
  
  if (DAT_0073578c != 0) {
    if (val == 0) {
      FUN_004f40c0(0);
    }
    else {
      iVar1 = FUN_004f3f90(&DAT_00746104);
      if ((iVar1 != 0) && (*(int *)(iVar1 + 0x18) != 0)) {
        FUN_004f09b0(*(int *)(iVar1 + 0x18));
        FUN_004f5b90(DAT_0073578c);
        return;
      }
    }
    FUN_004f5b90(DAT_0073578c);
  }
  return;
}
