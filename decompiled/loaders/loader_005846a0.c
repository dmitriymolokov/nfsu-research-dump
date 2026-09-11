/* spd-match: far pct=12.59 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_005846A0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00571c20();
int __cdecl FUN_00571ea0();
int __cdecl FUN_005840c0();
void __fastcall FUN_005846a0(int obj, int param_1)

{
  int iVar1;

  char cVar2;
  
  FUN_00571ea0(0,"PidError");
  FUN_005840c0(*(undefined4 *)(param_1 + 0x10));
  FUN_005840c0(*(undefined4 *)(param_1 + 0x38));
  FUN_005840c0(*(undefined4 *)(param_1 + 0x60));
  FUN_00571c20(obj,param_1 + 0x78,4,0xffffffff,0);
  FUN_00571c20(obj,param_1 + 0x7c,4,0xffffffff,0);
  FUN_00571c20(obj,param_1 + 0x80,4,0xffffffff,0);
  iVar1 = *(char *)(obj + 0x40) * 0x10 + 0x4c + obj;
  *(int *)(iVar1 + 0xc) = *(int *)(obj + 0x150) - *(int *)(iVar1 + 0xc);
  cVar2 = *(char *)(obj + 0x40) + -1;
  *(char *)(obj + 0x40) = cVar2;
  if ((int)cVar2 < *(int *)(obj + 0x44)) {
    *(undefined4 *)(obj + 0x44) = 0xffffffff;
  }
  return;
}
