/* spd-match: far pct=8.84 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

int __cdecl FUN_00417490();
int __cdecl FUN_0041f5d0();
int __cdecl FUN_00421960();
int __cdecl FUN_00426110();
int __cdecl FUN_004262c0();
int __cdecl FUN_00427f70();
int __cdecl FUN_00442590();
int __cdecl FUN_0044d640();
int __cdecl FUN_004ee660();
int __cdecl FUN_0059ba10();

void FUN_0059a960(undefined4 param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float10 fVar6;
  float10 fVar7;
  undefined4 local_34;
  
  piVar2 = (int *)FUN_0041f5d0();
  FUN_0044d640();
  cVar1 = FUN_0059ba10();
  if (cVar1 == '\0') {
    FUN_004ee660();
    iVar3 = (**(code **)(*piVar2 + 0x40))();
    uVar4 = FUN_00421960();
    uVar5 = FUN_00417490();
    fVar6 = (float10)(**(code **)(*piVar2 + 0x5c))();
    fVar7 = (float10)FUN_00442590();
    if (iVar3 == 0) {
      local_34 = 0x3f800000;
    }
    else {
      local_34 = 0xbf800000;
    }
    FUN_00427f70(param_1,uVar4,uVar5,(float)fVar6,0,local_34,0,(float)fVar7,0);
    FUN_00426110();
    FUN_004262c0();
  }
  return;
}
