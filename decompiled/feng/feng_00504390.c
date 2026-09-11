/* spd-match: far pct=12.94 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00504390 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004f3f90();
int __cdecl FUN_004f7c00();
int __cdecl FUN_00504260();
extern int DAT_00746104;
int __fastcall FUN_00504390(int * obj)

{
  int *_Memory;
  int iVar1;
  int *piVar2;

  undefined4 uVar3;
  int iVar4;
  
  _Memory = (int *)*obj;
  if (_Memory != obj) {
    iVar1 = *_Memory;
    piVar2 = (int *)_Memory[1];
    *piVar2 = iVar1;
    *(int **)(iVar1 + 4) = piVar2;
    iVar1 = _Memory[2];
    _free(_Memory);
    uVar3 = FUN_00504260();
    iVar4 = FUN_004f3f90(&DAT_00746104);
    if (((iVar4 != 0) && (*(int *)(iVar4 + 0x18) != 0)) && (*(int *)(iVar4 + 0x14) != 0)) {
      FUN_004f7c00(uVar3,0,0,*(int *)(iVar4 + 0x18));
    }
    return iVar1;
  }
  return 0;
}
