/* spd-match: far pct=17.56 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00504990 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004ac5a0();
int __cdecl FUN_004b2480();
int __cdecl FUN_004f0800();
int __cdecl FUN_004f3f90();
int __cdecl FUN_004f61f0();
int __cdecl FUN_00504320();
extern int DAT_0073578c;
extern int DAT_00744ff8;
extern int DAT_00745000;
extern int DAT_00745720;
extern int DAT_00745e40;
extern int DAT_00746104;
void __fastcall FUN_00504990(undefined4 val, undefined4 param_1, undefined4 param_2, char param_3)

{
  int iVar1;

  int iVar2;
  undefined4 unaff_EBX;
  
  FUN_004b2480();
  DAT_00744ff8 = val;
  FUN_004ac5a0(val,0,&DAT_00745000);
  FUN_004ac5a0(DAT_00744ff8,0,&DAT_00745720);
  FUN_00504320(unaff_EBX);
  iVar1 = DAT_0073578c;
  DAT_00745e40 = param_1;
  if (param_3 != '\0') {
    FUN_004f61f0();
    return;
  }
  if (DAT_0073578c != 0) {
    iVar2 = FUN_004f3f90(&DAT_00746104);
    if ((iVar2 != 0) && (*(int *)(iVar2 + 0x18) != 0)) {
      FUN_004f0800(*(undefined4 *)(iVar1 + 8),*(int *)(iVar2 + 0x18));
    }
  }
  return;
}
