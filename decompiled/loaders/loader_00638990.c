/* spd-match: far pct=2.99 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2224_field_1_3 */
#include "ghidra_compat.h"

int __cdecl FUN_006388a0();
int __cdecl FUN_00638f00();
int __cdecl FUN_00638f20();

int FUN_00638990(undefined4 param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5,
                int param_6,int param_7)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  iVar2 = param_3;
  if (param_3 == 0) {
    iVar2 = 0x20;
  }
  uVar1 = FUN_00638f20(iVar2);
  param_3 = CONCAT31(((unsigned int)(param_3) >> 8),uVar1);
  iVar3 = FUN_00638f00(&param_3);
  iVar4 = FUN_006388a0(param_1,param_5);
  iVar2 = iVar4 + 0x10;
  if ((iVar3 < 9) && (param_4 != 0)) {
    if (param_4 == 0xf) {
      param_4 = 0x10;
    }
    uVar6 = 0;
    if (iVar2 != 0) {
      uVar6 = iVar4 + 0x1fU & 0xfffffff0;
    }
    if (iVar3 == 4) {
      uVar5 = 0x10;
    }
    else {
      uVar5 = (iVar3 != 8) - 1 & 0x100;
    }
    iVar2 = ((int)(uVar5 * param_4 + ((int)(uVar5 * param_4) >> 0x1f & 7U)) >> 3) + 0x10 + uVar6;
  }
  if (param_6 != 0) {
    iVar2 = iVar2 + 8 + param_6;
  }
  iVar3 = iVar2 + 0x10 + param_7;
  if (param_7 == 0) {
    iVar3 = iVar2;
  }
  return iVar3;
}
