/* spd-match: far pct=5.95 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

int __cdecl FUN_004650d0();
int __cdecl FUN_00564b10();
int __cdecl FUN_00564db0();
int __cdecl FUN_00576f30();
int __cdecl FUN_00578730();
int __cdecl FUN_005791c0();
extern int DAT_006cc7a4;
extern int _DAT_006cc7b8;
extern int _DAT_006cc7bc;
extern int _DAT_006cc7dc;
extern int _DAT_006cc8bc;
int unaff_EDI;

void FUN_0044f1b0(int param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float10 fVar3;
  float10 fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  undefined4 *puVar9;
  int unaff_EDI;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  float fStack_48;
  float local_30;
  float local_2c;
  undefined4 local_28;
  float local_20;
  float local_1c;
  undefined4 local_18;
  
  *param_2 = 99999.0;
  *param_3 = 99999.0;
  iVar8 = *(int *)(param_1 + 0x3c);
  local_1c = *(float *)(iVar8 + 0xf4);
  local_30 = *(float *)(iVar8 + 0x100);
  local_20 = *(float *)(iVar8 + 0xf0);
  local_18 = *(undefined4 *)(iVar8 + 0xf8);
  local_2c = *(float *)(iVar8 + 0x104);
  local_28 = *(undefined4 *)(iVar8 + 0x108);
  fVar1 = (local_2c - local_1c) * _DAT_006cc7dc;
  fVar2 = (local_30 - local_20) * _DAT_006cc7dc;
  iVar8 = (**(code **)(**(int **)(unaff_EDI + 0x1d4) + 0x28))();
  if (iVar8 == 0) {
    local_1c = 0.0;
    local_30 = 0.0;
    local_2c = 0.0;
    fVar5 = DAT_006cc7a4;
  }
  else {
    FUN_00576f30();
    fVar5 = local_20;
  }
  fVar5 = (local_30 - fVar5) * _DAT_006cc7dc;
  puVar9 = (undefined4 *)FUN_00578730();
  iVar8 = FUN_00578730();
  FUN_00564db0(*puVar9,*(undefined4 *)(iVar8 + 4));
  fVar10 = (float10)FUN_00564b10();
  fVar11 = (float10)local_2c;
  fVar4 = (float10)local_1c;
  fVar3 = (float10)_DAT_006cc7dc;
  fVar12 = (float10)_DAT_006cc7bc;
  if (*(int *)(*(int *)(*(int *)(unaff_EDI + 0x1d4) + 0x1c) + 0xe4) != 0) {
    FUN_005791c0();
  }
  FUN_004650d0(&local_30);
  fStack_48 = 99999.0;
  if ((DAT_006cc7a4 <= local_2c) &&
     (ABS(local_30) <=
      (float)((fVar12 - fVar10 * fVar10) * (float10)fVar5 +
             (fVar11 - fVar4) * fVar3 * fVar10 * fVar10) + fVar1)) {
    fStack_48 = (local_2c - fVar5) - fVar2;
    if (fStack_48 <= DAT_006cc7a4) {
      fStack_48 = 0.0;
    }
    *param_2 = fStack_48;
  }
  if (_DAT_006cc7b8 < *(float *)(param_1 + 0x3d4)) {
    fVar1 = *(float *)(param_1 + 0x70);
    iVar8 = *(int *)(*(int *)(unaff_EDI + 0x1d4) + 0x1c);
    fVar2 = *(float *)(param_1 + 0x74);
    if (*(int *)(iVar8 + 0xe4) != 0) {
      FUN_005791c0();
    }
    fVar5 = ((*(float *)(iVar8 + 0x90) - fVar1) * fVar1 + fVar2 * (*(float *)(iVar8 + 0x94) - fVar2)
            ) / (fVar1 * fVar1 + fVar2 * fVar2);
    fVar6 = fVar1 * fVar5;
    fVar5 = fVar2 * fVar5;
    fVar7 = SQRT(fVar6 * fVar6 + fVar5 * fVar5);
    if ((fVar6 * fVar1 + fVar2 * fVar5 < DAT_006cc7a4) && (_DAT_006cc8bc < fVar7)) {
      *param_3 = fStack_48 / fVar7;
    }
  }
  return;
}
