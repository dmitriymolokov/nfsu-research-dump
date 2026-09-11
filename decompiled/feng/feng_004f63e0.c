/* spd-match: far pct=18.57 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004F63E0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004f08f0();
int __cdecl FUN_004f3f90();
extern int DAT_0073578c;
extern int DAT_00746104;
void __fastcall FUN_004f63e0(int val, undefined4 param_1)

{
  int iVar1;

  int iVar2;
  
  iVar1 = DAT_0073578c;
  if (DAT_0073578c != 0) {
    if (val != 0) {
      iVar2 = FUN_004f3f90(&DAT_00746104);
      if (iVar2 != 0) {
        FUN_004f08f0(*(undefined4 *)(iVar1 + 8),*(undefined4 *)(iVar2 + 0x18),param_1);
        return;
      }
    }
    FUN_004f08f0(*(undefined4 *)(iVar1 + 8),0,param_1);
  }
  return;
}
