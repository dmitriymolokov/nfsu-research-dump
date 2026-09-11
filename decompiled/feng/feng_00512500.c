/* spd-match: far pct=26.92 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00512500 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00511f00();
int __cdecl FUN_0057ce10();
extern int DAT_0073574c;
void __fastcall FUN_00512500(int obj, undefined4 param_1, undefined4 param_2)

{

  undefined4 uVar1;
  undefined4 uVar2;
  
  if (obj != 0) {
    if (*(char *)(obj + 0xc) == '\0') {
      uVar1 = *(undefined4 *)(*(int *)(obj + 0x18) + 8);
    }
    else {
      uVar1 = *(undefined4 *)(*(int *)(obj + 0x14) + 8);
    }
    uVar2 = DAT_0073574c;
    uVar1 = FUN_0057ce10(0,0x3a,uVar1,0,0xffffffff);
    FUN_00511f00(uVar1,uVar2,param_2);
  }
  return;
}
