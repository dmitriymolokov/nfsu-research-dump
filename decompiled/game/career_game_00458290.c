/* spd-match: far pct=10.96 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

int __cdecl FUN_00458340();
int __cdecl FUN_00564db0();
int __cdecl FUN_00576f30();
int __cdecl FUN_00578730();
int unaff_EDI;

void FUN_00458290(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int unaff_EDI;
  
  iVar1 = (**(code **)(**(int **)(unaff_EDI + 0x1d4) + 0x28))();
  if (iVar1 != 0) {
    FUN_00576f30();
  }
  puVar2 = (undefined4 *)FUN_00578730();
  iVar1 = FUN_00578730(param_4);
  uVar3 = FUN_00564db0(*puVar2,*(undefined4 *)(iVar1 + 4));
  FUN_00458340(param_1,param_2,uVar3,param_4);
  return;
}
