/* spd-match: far pct=26.72 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

int __cdecl FUN_0052ea00();
int __cdecl FUN_005791c0();

void __fastcall FUN_005338c0(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  
  if (param_1[0x8c] != 0) {
    iVar3 = *(int *)(param_1[0x8c] + 0x1c);
    if (*(int *)(iVar3 + 0xe4) != 0) {
      FUN_005791c0();
    }
    iVar1 = *(int *)(iVar3 + 0x44);
    iVar2 = *(int *)(iVar3 + 0x48);
    param_1[0x90] = *(int *)(iVar3 + 0x40);
    param_1[0x91] = iVar1;
    param_1[0x92] = iVar2;
  }
  FUN_0052ea00(param_1 + 0x90,param_1 + 0x98);
  if (param_1[0x14] < 1) {
    cVar4 = (**(code **)(*param_1 + 0x44))();
    if (cVar4 != '\0') {
                    
                    
      (**(code **)(*param_1 + 0x3c))();
      return;
    }
  }
  else {
    cVar4 = (**(code **)(*param_1 + 0x44))();
    if (cVar4 == '\0') {
                    
                    
      (**(code **)(*param_1 + 0x38))();
      return;
    }
  }
  return;
}
