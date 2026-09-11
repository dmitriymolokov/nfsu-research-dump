/* spd-match: far pct=5.63 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2069 */
#include "ghidra_compat.h"

int __cdecl FUN_00456830();
int __cdecl FUN_00463800();
int __cdecl FUN_00567370();
int __cdecl FUN_0059d430();
int __cdecl FUN_0059d540();
extern int DAT_006b72e0;
extern int DAT_006b72e4;
extern int DAT_006b7300;
extern int DAT_006cc7a4;
extern int _DAT_006b72ec;
extern int _DAT_006b733c;

void FUN_00463910(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int *piVar4;
  int iVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  undefined8 uVar15;
  float local_30;
  float fStack_2c;
  float fStack_28;
  float local_20;
  float fStack_1c;
  float fStack_18;
  
  piVar4 = *(int **)(*(int *)(param_1 + 8) + 0x30);
  fVar1 = (float)piVar4[0x6f];
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(float *)(param_1 + 0x10) = (float)((char)piVar4[4] + -1) / fVar1;
  uVar15 = FUN_0059d430(0);
  fVar12 = (float10)FUN_0059d540((int)((ulonglong)uVar15 >> 0x20),(float)(int)uVar15,DAT_006b72e4,0)
  ;
  FUN_00463800(param_1,*(int *)(param_1 + 8) + 0x60,(float)fVar12);
  *(float *)(param_1 + 0x1c) = (float)fVar12;
  FUN_00567370();
  fVar2 = *(float *)(*(int *)(param_1 + 8) + 0x3d0) * *(float *)(param_1 + 0x10);
  *(float *)(param_1 + 0x20) = fVar2;
  fVar13 = (**(float10 (**)())(*piVar4 + 0x70))();
  fVar12 = (float10)_DAT_006b733c;
  fVar1 = *(float *)(param_1 + 0x10);
  fVar14 = (**(float10 (**)())(*piVar4 + 0x74))();
  if (fVar14 <= (float10)DAT_006cc7a4) {
    fVar14 = (float10)DAT_006b72e0;
  }
  else {
    fVar14 = (**(float10 (**)())(*piVar4 + 0x74))();
  }
  *(float *)(param_1 + 0x24) =
       (float)((float10)(float)(fVar13 * fVar12 * (float10)fVar1 - (float10)fVar2) / fVar14);
  fVar12 = (float10)FUN_00456830(*(undefined4 *)(param_1 + 8),
                                 *(float *)(param_1 + 0x20) / *(float *)(param_1 + 0x10));
  fVar12 = fVar12 * (float10)*(float *)(param_1 + 0x10);
  if ((float10)*(float *)(param_1 + 0x24) <= fVar12) {
    fVar1 = _DAT_006b72ec * *(float *)(param_1 + 0x10);
    if (*(float *)(param_1 + 0x24) < fVar1) {
      *(float *)(param_1 + 0x24) = fVar1;
    }
  }
  else {
    *(float *)(param_1 + 0x24) = (float)fVar12;
  }
  iVar5 = *(int *)(param_1 + 8);
  pfVar6 = *(float **)(param_1 + 0x18);
  fVar8 = fStack_2c - fStack_28 * DAT_006cc7a4;
  fVar9 = fStack_28 * DAT_006cc7a4 - local_30;
  fVar10 = local_30 * DAT_006cc7a4 - fStack_2c * DAT_006cc7a4;
  fVar7 = -(fVar8 * local_20 + fStack_1c * fVar9 + fStack_18 * fVar10);
  fVar1 = *(float *)(iVar5 + 0x78);
  fVar2 = *(float *)(iVar5 + 0x74);
  fVar3 = *(float *)(iVar5 + 0x70);
  *pfVar6 = fVar7;
  if (fVar7 != pfVar6[2]) {
    *(undefined2 *)(pfVar6 + 0xb) = 2;
  }
  iVar5 = *(int *)(param_1 + 0x18);
  fVar1 = DAT_006b72e0 * (fVar8 * fVar3 + fVar9 * fVar2 + fVar10 * fVar1);
  *(float *)(iVar5 + 4) = fVar1;
  if (fVar1 != *(float *)(iVar5 + 0xc)) {
    *(undefined2 *)(iVar5 + 0x2c) = 2;
  }
  uVar11 = DAT_006b7300;
  *(float *)(*(int *)(param_1 + 0x18) + 0x24) = DAT_006b72e0;
  iVar5 = *(int *)(param_1 + 0x28);
  *(undefined4 *)(iVar5 + 0x24) = uVar11;
  *(undefined4 *)(iVar5 + 0x54) = uVar11;
  return;
}
