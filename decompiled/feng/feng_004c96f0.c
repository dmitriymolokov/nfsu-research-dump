/* spd-match: far pct=24.68 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004C96F0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_0041c7a0();
int __cdecl FUN_0041d8a0();
int __cdecl FUN_004f3f90();
int __cdecl FUN_004f7c00();
extern int DAT_00746104;
extern int DAT_0078a478;
void __fastcall FUN_004c96f0(int val, undefined4 param_1)

{

  int iVar1;
  
  FUN_0041d8a0(&DAT_0078a478,"auto");
  FUN_0041c7a0();
  if (val != 0) {
    iVar1 = FUN_004f3f90(&DAT_00746104);
    if (((iVar1 != 0) && (*(int *)(iVar1 + 0x18) != 0)) && (*(int *)(iVar1 + 0x14) != 0)) {
      FUN_004f7c00(param_1,0,0,*(int *)(iVar1 + 0x18));
    }
  }
  return;
}
