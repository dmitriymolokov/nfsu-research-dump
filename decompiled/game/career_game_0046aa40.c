/* spd-match: far pct=5.81 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

int __cdecl FUN_0046ab70();

void FUN_0046aa40(int *param_1,float param_2)

{
  int *piVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  int local_234;
  float local_230 [140];
  
  FUN_0046ab70(param_1,local_230);
  iVar5 = param_1[3];
  local_234 = 0;
  while( true ) {
    if (iVar5 == 0) {
      piVar6 = (int *)0x0;
    }
    else {
      piVar6 = (int *)(iVar5 + -4);
    }
    if (param_1 == (int *)0xfffffff4) {
      piVar1 = (int *)0x0;
    }
    else {
      piVar1 = param_1 + 2;
    }
    if (piVar6 == piVar1) break;
    iVar2 = (**(code **)(*piVar6 + 4))();
    pfVar3 = (float *)(**(code **)(*piVar6 + 0xc))();
    pfVar9 = local_230 + local_234;
    (**(code **)(*piVar6 + 0x20))();
    iVar5 = 0;
    if (3 < iVar2) {
      iVar4 = 3;
      pfVar7 = pfVar3;
      pfVar8 = pfVar9;
      do {
        iVar4 = iVar4 + 4;
        iVar5 = iVar5 + 4;
        pfVar3 = pfVar7 + 4;
        pfVar9 = pfVar8 + 4;
        *pfVar7 = param_2 * *pfVar8 + *pfVar7;
        pfVar7[1] = param_2 * pfVar8[1] + pfVar7[1];
        pfVar7[2] = param_2 * pfVar8[2] + pfVar7[2];
        pfVar7[3] = param_2 * pfVar8[3] + pfVar7[3];
        pfVar7 = pfVar3;
        pfVar8 = pfVar9;
      } while (iVar4 < iVar2);
    }
    if (iVar5 < iVar2) {
      iVar5 = iVar2 - iVar5;
      do {
        iVar5 = iVar5 + -1;
        *pfVar3 = param_2 * *pfVar9 + *pfVar3;
        pfVar3 = pfVar3 + 1;
        pfVar9 = pfVar9 + 1;
      } while (iVar5 != 0);
    }
    iVar5 = piVar6[1];
    local_234 = local_234 + iVar2;
  }
  (**(code **)(*param_1 + 4))();
  return;
}
