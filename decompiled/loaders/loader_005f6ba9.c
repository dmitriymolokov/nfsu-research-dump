/* spd-match: far pct=9.84 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_cheap */
#include "ghidra_compat.h"

int __cdecl FUN_005f573e();
int __cdecl FUN_005f57fd();
int __cdecl FUN_005f5941();
int _local_10;

undefined4 FUN_005f6ba9(undefined4 param_1,undefined4 *param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 local_2c;
  short local_26;
  short local_24;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined2 local_10;
  undefined2 uStack_e;
  undefined4 uStack_c;
  undefined4 *local_8;
  
  iVar2 = FUN_005f57fd(param_2,&local_8,&param_2,0);
  uVar1 = param_3;
  if (iVar2 < 0) {
    uVar3 = 0;
  }
  else if (param_3 < *(ushort *)(param_2 + 2)) {
    local_24 = FUN_005f573e(local_8,param_2);
    puVar4 = &local_2c;
    for (iVar2 = 5; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *local_8;
      local_8 = local_8 + 1;
      puVar4 = puVar4 + 1;
    }
    local_26 = local_26 + (short)uVar1 * local_24;
    local_1c = 0;
    local_18 = *param_2;
    uStack_14 = param_2[1];
    uStack_c = param_2[3];
    _local_10 = CONCAT22((short)((uint)param_2[2] >> 0x10),1);
    uVar3 = FUN_005f5941(&local_2c,&local_18);
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}
