/* spd-match: far pct=14.78 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00504A20 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004ac5a0();
int __cdecl FUN_004b2480();
int __cdecl FUN_004f0800();
int __cdecl FUN_004f3f90();
int __cdecl FUN_00504320();
extern int DAT_0073578c;
extern int DAT_00744ff8;
extern int DAT_00745000;
extern int DAT_00745720;
extern int DAT_00745e40;
extern int DAT_00746104;
void __fastcall FUN_00504a20(undefined4 val, undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)

{
  int iVar1;

  int iVar2;
  
  FUN_004b2480();
  DAT_00744ff8 = val;
  FUN_004ac5a0(val,0,&DAT_00745000);
  FUN_004ac5a0(DAT_00744ff8,0,&DAT_00745720);
  FUN_00504320(param_4);
  iVar1 = DAT_0073578c;
  DAT_00745e40 = param_1;
  if (DAT_0073578c != 0) {
    iVar2 = FUN_004f3f90(&DAT_00746104);
    if ((iVar2 != 0) && (*(int *)(iVar2 + 0x18) != 0)) {
      FUN_004f0800(*(undefined4 *)(iVar1 + 8),*(int *)(iVar2 + 0x18));
    }
  }
  return;
}
