/* spd-match: far pct=5.14 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

int __cdecl FUN_00663980();
int __cdecl FUN_00663d90();

void __fastcall FUN_00663dc0(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = FUN_00663d90();
  while (0 < iVar3) {
    param_1[0x70] = param_1[0x70] + 1;
    iVar3 = FUN_00663d90();
  }
  param_1[0x6d] = 0;
  iVar3 = (**(code **)(*param_1 + 0x28))(*param_1);
  param_1[9] = iVar3;
  uVar4 = iVar3 - param_1[0x19];
  param_1[10] = param_1[10] + 1;
  if (999 < uVar4) {
    iVar1 = param_1[0x5d];
    iVar2 = *param_1;
    param_1[0x5d] = 0;
    param_1[0x16] = (uint)(iVar1 * 1000) / uVar4;
    iVar1 = param_1[0x5e];
    param_1[0x5e] = 0;
    param_1[0x17] = (uint)(iVar1 * 1000) / uVar4;
    param_1[0x18] =
         (uint)((((*(int *)(iVar2 + 0x60) - param_1[0x60]) * 0x29 - param_1[0x5f]) +
                *(int *)(iVar2 + 0x58)) * 1000) / uVar4;
    param_1[0x5f] = *(int *)(iVar2 + 0x58);
    param_1[0x60] = *(int *)(iVar2 + 0x60);
    param_1[0x19] = iVar3;
  }
  if ((param_1[0x12] != 0) && (100 < (uint)(iVar3 - param_1[0x12]))) {
    param_1[0x12] = 0;
    param_1[0x14] = iVar3;
  }
  if (((param_1[0x14] != 0) && (100 < (uint)(iVar3 - param_1[0x14]))) &&
     ((uint)(iVar3 - param_1[0x10]) < 0x32)) {
    param_1[0x14] = 0;
    param_1[0x12] = iVar3;
  }
  if ((param_1[0x13] != 0) && (100 < (uint)(iVar3 - param_1[0x13]))) {
    param_1[0x13] = 0;
    param_1[0x15] = iVar3;
  }
  if (((param_1[0x15] != 0) && (100 < (uint)(iVar3 - param_1[0x15]))) &&
     ((uint)(iVar3 - param_1[0x11]) < 0x32)) {
    param_1[0x15] = 0;
    param_1[0x13] = iVar3;
  }
  if (((500 < (uint)(iVar3 - param_1[2])) &&
      (iVar3 = (**(code **)(*param_1 + 0x2c))(*param_1,0,0,0), 0 < iVar3)) && (iVar3 < 8)) {
    FUN_00663980();
  }
  return;
}
