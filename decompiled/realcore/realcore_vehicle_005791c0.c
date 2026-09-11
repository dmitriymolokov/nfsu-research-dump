/* spd-match: far pct=14.98 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_7/buckets/realcore_p2/batches/20260724T153821Z_w0_tc0 */
#include "ghidra_compat.h"

int __cdecl FUN_00401cd0();
extern char stack0xffffffd4;
int unaff_EDI;

void __fastcall FUN_005791c0(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  float unaff_EDI;
  
  iVar6 = *(int *)(param_1 + 0xe0);
  if (iVar6 != 0) {
    if (*(int *)(iVar6 + 0xe4) != 0) {
      FUN_005791c0(param_1);
    }
    FUN_005791c0(param_1 + 0x10);
    iVar7 = *(int *)(param_1 + 0xe0);
    if (*(int *)(iVar7 + 0xe4) != 0) {
      FUN_005791c0(param_1);
    }
    FUN_005791c0(&stack0xffffffd4,param_1 + 0xa0,iVar7 + 0x10);
    iVar7 = *(int *)(param_1 + 0xe0);
    if (*(int *)(iVar7 + 0xe4) != 0) {
      FUN_005791c0(param_1);
    }
    fVar1 = *(float *)(iVar7 + 0x44);
    fVar2 = *(float *)(iVar7 + 0x48);
    fVar3 = *(float *)(iVar7 + 0x40);
    iVar7 = *(int *)(param_1 + 0xe0);
    if (*(int *)(iVar7 + 0xe4) != 0) {
      FUN_005791c0(param_1);
    }
    fVar4 = *(float *)(iVar7 + 0x94);
    fVar5 = *(float *)(iVar7 + 0x98);
    *(float *)(param_1 + 0x90) = ((float)(param_1 + 0x50) - fVar3) + *(float *)(iVar7 + 0x90);
    *(float *)(param_1 + 0x98) = fVar5 + (unaff_EDI - fVar2);
    *(float *)(param_1 + 0x94) = fVar4 + ((float)(iVar6 + 0x10) - fVar1);
    *(undefined4 *)(param_1 + 0xe4) = 0;
    return;
  }
  FUN_00401cd0();
  *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_1 + 0xa0);
  *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(param_1 + 0xa4);
  *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_1 + 0xa8);
  *(undefined4 *)(param_1 + 0xe4) = 0;
  return;
}
