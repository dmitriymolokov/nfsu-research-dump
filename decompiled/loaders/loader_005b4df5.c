/* spd-match: far pct=4.10 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

int __cdecl FUN_005b197d();
int __cdecl FUN_005b19e6();
int __cdecl FUN_005b4cdc();
int __cdecl FUN_005d7665();
int __cdecl FUN_005d9188();
int __cdecl FUN_005d91a1();
int __cdecl FUN_005e4fdd();

int FUN_005b4df5(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 *param_5,int param_6,undefined4 *param_7)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int **ppiVar4;
  int *local_c;
  int *local_8;
  
  puVar1 = param_5;
  local_8 = (int *)0x0;
  local_c = (int *)0x0;
  FUN_005d9188();
  if (param_7 != (undefined4 *)0x0) {
    *param_7 = 0;
  }
  if (param_5 != (undefined4 *)0x0) {
    *param_5 = 0;
  }
  iVar2 = FUN_005b4cdc(param_2);
  if (iVar2 == 0) {
    param_5 = (undefined4 *)0x8876086c;
  }
  else {
    param_5 = (undefined4 *)
              FUN_005e4fdd(param_1 + 8,*(undefined4 *)(param_1 + 0xf8),*(undefined4 *)(iVar2 + 0x20)
                           ,0,param_3,param_4,&local_8,0);
    if (-1 < (int)param_5) {
      iVar2 = FUN_005b19e6();
      if (iVar2 != 0) {
        param_5 = (undefined4 *)0x88760b59;
      }
      if (-1 < (int)param_5) {
        ppiVar4 = &local_c;
        uVar3 = (**(code **)(*local_8 + 0xc))(local_8,ppiVar4);
        param_5 = (undefined4 *)FUN_005d7665(uVar3,ppiVar4);
        if (-1 < (int)param_5) {
          if (puVar1 != (undefined4 *)0x0) {
            *puVar1 = local_8;
            local_8 = (int *)0x0;
          }
          if (param_7 != (undefined4 *)0x0) {
            *param_7 = local_c;
            local_c = (int *)0x0;
          }
        }
      }
    }
  }
  if (param_6 != 0) {
    FUN_005b197d(param_6);
  }
  if (local_8 != (int *)0x0) {
    (**(code **)(*local_8 + 8))(local_8);
    local_8 = (int *)0x0;
  }
  if (local_c != (int *)0x0) {
    (**(code **)(*local_c + 8))(local_c);
    local_c = (int *)0x0;
  }
  FUN_005d91a1();
  return (int)param_5;
}
