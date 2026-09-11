/* spd-match: far pct=14.91 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0045A510 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004596b0();
int __cdecl FUN_0045a5b0();
int __cdecl FUN_005791c0();
int __cdecl FUN_00647b70();
extern int DAT_007372a0;
void __fastcall FUN_0045a510(int obj, undefined4 param_1)

{

  int iVar1;
  
  iVar1 = FUN_00647b70();
  if ((iVar1 != 6) ||
     (*(int *)(*(int *)(*(int *)(*(int *)(obj + 0x1d4) + 0x90) + 0x14) + 4) != 1)) {
    if (*(int *)(*(int *)(*(int *)(obj + 0x1d4) + 0x1c) + 0xe4) != 0) {
      FUN_005791c0();
    }
    iVar1 = *(int *)(*(int *)(obj + 0x1d4) + 0x1c);
    if (*(int *)(iVar1 + 0xe4) != 0) {
      FUN_005791c0();
    }
    FUN_004596b0(param_1,obj);
    FUN_0045a5b0(iVar1 + 0x40,&DAT_007372a0);
  }
  return;
}
