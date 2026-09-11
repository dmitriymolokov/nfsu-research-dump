/* spd-match: far pct=15.93 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00431F40 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00432910();
int __cdecl FUN_00571c20();
int __cdecl FUN_00571ea0();
int __cdecl FUN_00580a40();
void __fastcall FUN_00431f40(int obj, int param_1)

{
  int *piVar1;

  int iVar2;
  char cVar3;
  int local_4;
  
  FUN_00571ea0(0,"RaceParameters");
  FUN_00571c20(obj,param_1,2,4,0);
  FUN_00571c20(obj,param_1 + 4,1,4,1);
  FUN_00571c20(obj,param_1 + 8,1,4,1);
  FUN_00571c20(obj,param_1 + 0xc,1,4,1);
  FUN_00571c20(obj,param_1 + 0x10,1,4,1);
  FUN_00571c20(obj,param_1 + 0x14,4,0xffffffff,0);
  FUN_00571c20(obj,param_1 + 0x1c,1,4,1);
  FUN_00571c20(obj,param_1 + 0x20,4,0xffffffff,0);
  FUN_00571c20(obj,param_1 + 0x24,4,0xffffffff,0);
  FUN_00571c20(obj,param_1 + 0x28,1,4,0);
  FUN_00571c20(obj,param_1 + 0x2c,1,4,0);
  FUN_00571c20(obj,param_1 + 0x30,1,4,0);
  FUN_00571c20(obj,param_1 + 0x34,1,4,0);
  FUN_00571c20(obj,param_1 + 0x38,1,4,0);
  FUN_00571c20(obj,param_1 + 0x3c,1,4,0);
  FUN_00571c20(obj,param_1 + 0x40,1,4,1);
  FUN_00571c20(obj,param_1 + 0x44,1,1,1);
  FUN_00571c20(obj,param_1 + 0x45,1,1,1);
  FUN_00571c20(obj,param_1 + 0x46,1,1,0);
  FUN_00571c20(obj,param_1 + 0x10a,1,1,1);
  FUN_00571c20(obj,param_1 + 0x10b,1,1,1);
  FUN_00571c20(obj,param_1 + 0x47,1,1,0);
  FUN_00571c20(obj,param_1 + 0x14,4,0xffffffff,0);
  FUN_00571c20(obj,param_1 + 0x48,1,4,1);
  FUN_00571c20(obj,param_1 + 0x60,1,4,0);
  FUN_00571c20(obj,param_1 + 100,1,4,0);
  FUN_00571c20(obj,param_1 + 0x68,1,4,0);
  FUN_00571c20(obj,param_1 + 0x6c,1,4,0);
  FUN_00571c20(obj,param_1 + 0x70,1,4,0);
  FUN_00571c20(obj,param_1 + 0x74,1,4,0);
  FUN_00571c20(obj,param_1 + 0x78,1,4,0);
  FUN_00571c20(obj,param_1 + 0x7c,1,4,0);
  FUN_00571c20(obj,param_1 + 0x80,1,4,0);
  FUN_00571c20(obj,param_1 + 0x84,1,4,0);
  FUN_00571c20(obj,param_1 + 0x88,1,4,0);
  FUN_00571c20(obj,param_1 + 0x8c,1,4,1);
  FUN_00432910();
  FUN_00432910();
  FUN_00571c20(obj,param_1 + 0x10c,1,4,1);
  FUN_00571c20(obj,param_1 + 0x110,1,4,0);
  FUN_00571c20(obj,param_1 + 0x114,4,0xffffffff,0);
  FUN_00571c20(obj,param_1 + 0x118,4,0xffffffff,0);
  piVar1 = (int *)(param_1 + 300);
  FUN_00571c20(obj,piVar1,4,4,1);
  local_4 = 0;
  if (0 < *piVar1) {
    do {
      FUN_00580a40();
      local_4 = local_4 + 1;
    } while (local_4 < *piVar1);
  }
  iVar2 = *(char *)(obj + 0x40) * 0x10;
  *(int *)(iVar2 + obj + 0x58) = *(int *)(obj + 0x150) - *(int *)(iVar2 + 0x58 + obj);
  cVar3 = *(char *)(obj + 0x40) + -1;
  *(char *)(obj + 0x40) = cVar3;
  if ((int)cVar3 < *(int *)(obj + 0x44)) {
    *(undefined4 *)(obj + 0x44) = 0xffffffff;
  }
  return;
}
