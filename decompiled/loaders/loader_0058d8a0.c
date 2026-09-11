/* spd-match: far pct=11.72 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0058D8A0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00571c20();
int __cdecl FUN_00571ea0();
int __cdecl FUN_0058d560();
int __cdecl FUN_0058db20();
void __fastcall FUN_0058d8a0(int obj, int param_1)

{

  int iVar1;
  char cVar2;
  
  FUN_00571ea0(param_1,"CarDamage");
  FUN_0058d560();
  FUN_00571c20(obj,param_1 + 0xe0,4,4,0);
  if (*(char *)(obj + 0x3d) != '\0') {
    FUN_0058db20();
  }
  FUN_00571c20(obj,param_1 + 8,1,1,1);
  iVar1 = *(char *)(obj + 0x40) * 0x10;
  *(int *)(iVar1 + obj + 0x58) = *(int *)(obj + 0x150) - *(int *)(iVar1 + 0x58 + obj);
  cVar2 = *(char *)(obj + 0x40) + -1;
  *(char *)(obj + 0x40) = cVar2;
  if ((int)cVar2 < *(int *)(obj + 0x44)) {
    *(undefined4 *)(obj + 0x44) = 0xffffffff;
  }
  return;
}
