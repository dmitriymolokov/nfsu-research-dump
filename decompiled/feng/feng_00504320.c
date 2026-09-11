/* spd-match: far pct=8.24 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00504320 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004f3f90();
int __cdecl FUN_004f7c00();
int __cdecl FUN_00504260();
extern int DAT_00746104;
void __fastcall FUN_00504320(int * obj, int param_1)

{

  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  
  piVar1 = _malloc(0xc);
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1[2] = param_1;
  }
  iVar3 = *obj;
  *obj = (int)piVar1;
  *(int **)(iVar3 + 4) = piVar1;
  piVar1[1] = (int)obj;
  *piVar1 = iVar3;
  uVar2 = FUN_00504260();
  iVar3 = FUN_004f3f90(&DAT_00746104);
  if (((iVar3 != 0) && (*(int *)(iVar3 + 0x18) != 0)) && (*(int *)(iVar3 + 0x14) != 0)) {
    FUN_004f7c00(uVar2,0,0,*(int *)(iVar3 + 0x18));
  }
  return;
}
