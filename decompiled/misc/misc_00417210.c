/* spd-match: far pct=3.12 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00417210 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00416f40();
int __cdecl FUN_0041d0d0();
int __cdecl FUN_004dc6e0();
void __fastcall FUN_00417210(int obj, undefined4 param_1)

{
  char cVar1;

  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  *(undefined4 *)(obj + 0x54) = param_1;
  cVar1 = FUN_0041d0d0();
  if (cVar1 != '\0') {
    local_8 = 0;
    local_4 = 0;
    local_24 = 0x4e20c880;
    local_1c = 0x7e9d91db;
    local_20 = 0x639;
    local_14 = 0x1234ccc0;
    local_18 = 0x541389e5;
    local_10 = 1;
    local_c = 0xb8a7c6cd;
    FUN_004dc6e0(&local_24,"GenericDialog.fng",*(undefined4 *)(obj + 0xc));
    return;
  }
  FUN_00416f40();
  return;
}
