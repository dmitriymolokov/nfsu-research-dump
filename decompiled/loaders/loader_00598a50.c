/* spd-match: far pct=13.04 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

int __cdecl FUN_0041f5d0();
int __cdecl FUN_0041f5f0();
int __cdecl FUN_00424e10();
int __cdecl FUN_00443d60();
int __cdecl FUN_0059b490();
extern int DAT_006cc7a4;

undefined1 FUN_00598a50(undefined4 param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float fVar8;
  undefined1 local_28;
  undefined1 local_24;
  
  piVar1 = (int *)FUN_0041f5d0();
  FUN_0059b490(param_1);
  piVar2 = (int *)FUN_0041f5d0();
  fVar5 = (float10)FUN_0041f5f0();
  fVar8 = (float)fVar5;
  fVar5 = (float10)FUN_0041f5f0(fVar8);
  fVar5 = (float10)FUN_00443d60((float)fVar5,fVar8);
  fVar6 = (float10)FUN_00424e10();
  fVar7 = (float10)FUN_00424e10();
  if (DAT_006cc7a4 < (float)fVar5) {
    iVar3 = (**(code **)(*piVar1 + 0x40))();
    iVar4 = (**(code **)(*piVar2 + 0x40))();
    if ((iVar3 != iVar4) || ((float)((float10)(float)fVar6 - fVar7) <= DAT_006cc7a4)) {
      local_24 = 0;
    }
    else {
      local_24 = 1;
    }
    return local_24;
  }
  iVar3 = (**(code **)(*piVar1 + 0x40))();
  iVar4 = (**(code **)(*piVar2 + 0x40))();
  if ((iVar3 != iVar4) || ((float)((float10)(float)fVar6 - fVar7) < DAT_006cc7a4)) {
    local_28 = 1;
  }
  else {
    local_28 = 0;
  }
  return local_28;
}
