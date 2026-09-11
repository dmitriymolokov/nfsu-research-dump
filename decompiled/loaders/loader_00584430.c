/* spd-match: far pct=19.47 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00584430 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00571c20();
int __cdecl FUN_00571ea0();
int __cdecl FUN_005840c0();
void __fastcall FUN_00584430(int obj, int param_1)

{

  int iVar1;
  char cVar2;
  
  FUN_00571ea0(0,"Average");
  FUN_00571c20(obj,param_1 + 0x2c,4,4,0);
  FUN_00571c20(obj,*(undefined4 *)(param_1 + 0x30),(uint)*(byte *)(param_1 + 5) << 2,0xffffffff,0
              );
  iVar1 = *(char *)(obj + 0x40) * 0x10;
  *(int *)(iVar1 + obj + 0x58) = *(int *)(obj + 0x150) - *(int *)(iVar1 + 0x58 + obj);
  cVar2 = *(char *)(obj + 0x40) + -1;
  *(char *)(obj + 0x40) = cVar2;
  if ((int)cVar2 < *(int *)(obj + 0x44)) {
    *(undefined4 *)(obj + 0x44) = 0xffffffff;
  }
  FUN_005840c0(*(undefined4 *)(param_1 + 0x10));
  return;
}
