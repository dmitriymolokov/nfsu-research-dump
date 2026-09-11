/* spd-match: far pct=9.01 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

int __cdecl FUN_0044d570();
int __cdecl FUN_005aab20();
extern int DAT_006b5914;
extern int _DAT_006cc794;

float10 FUN_005a6e10(int *param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  int iVar6;
  float10 fVar7;
  
  if (param_1[0x2e] == -1) {
    iVar6 = 0;
  }
  else {
    iVar6 = param_1[param_1[0x2e] + 2];
  }
  FUN_0044d570();
  fVar4 = DAT_006b5914;
  if (iVar6 != 0) {
    fVar1 = *(float *)(iVar6 + 0x58);
    fVar2 = *(float *)(param_2 + 0x10);
    fVar3 = *(float *)(param_2 + 0xc);
    uVar5 = (**(code **)(*param_1 + 4))();
    fVar7 = (float10)FUN_005aab20(uVar5);
    return ((((float10)fVar1 - fVar7) - (float10)fVar4) - (float10)fVar2) - (float10)fVar3;
  }
  return (float10)_DAT_006cc794;
}
