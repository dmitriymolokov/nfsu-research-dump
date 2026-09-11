/* spd-match: far pct=7.95 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

int __cdecl FUN_0041f5d0();
int __cdecl FUN_0041f5e0();
int __cdecl FUN_0041f5f0();
int __cdecl FUN_0042adf0();
int __cdecl FUN_00443d60();
int __cdecl FUN_0044d3e0();
int __cdecl FUN_005995e0();
int __cdecl FUN_00599b20();
int __cdecl FUN_0059a7c0();
int __cdecl FUN_0059aa60();
int __cdecl FUN_0059aea0();
extern int DAT_006b5a38;

undefined4 FUN_005999c0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  byte bVar1;
  char cVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  float10 fVar9;
  float fVar10;
  undefined4 uVar11;
  undefined4 local_10;
  int local_c;
  undefined4 local_8;
  
  fVar9 = (float10)FUN_0041f5f0();
  fVar10 = (float)fVar9;
  fVar9 = (float10)FUN_0041f5f0(fVar10);
  FUN_00443d60((float)fVar9,fVar10);
  bVar1 = FUN_0059aea0();
  piVar3 = (int *)FUN_0041f5d0();
  uVar4 = (**(code **)(*piVar3 + 0x40))();
  uVar8 = (uint)bVar1;
  uVar11 = DAT_006b5a38;
  local_8 = uVar4;
  fVar9 = (float10)FUN_0041f5f0(uVar4,DAT_006b5a38,uVar8);
  fVar10 = (float)fVar9;
  uVar5 = FUN_0041f5e0(fVar10);
  iVar6 = FUN_00599b20(uVar5,fVar10,uVar4,uVar11,uVar8);
  if ((iVar6 != 0) && (iVar7 = FUN_005995e0(iVar6,bVar1), iVar7 != -1)) {
    local_10 = FUN_0044d3e0();
    local_c = iVar6;
    cVar2 = FUN_0059aa60(&local_10,param_3,param_1,0);
    if (cVar2 != '\0') {
      uVar11 = 0;
      fVar9 = (float10)FUN_0042adf0(0);
      FUN_0059a7c0(param_1,local_c,0,iVar7,0x41c4b127,(float)fVar9,uVar11);
      return 1;
    }
  }
  return 0;
}
