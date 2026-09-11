/* spd-match: far pct=8.41 flags=/O1 /c /nologo /TP method=thiscall_tp source=reports/m375_8/p0/buckets/p0_02/thiscall_tp_attempt5_00534df0 */
#include "ghidra_compat.h"

int __cdecl FUN_00524870(...);
int __cdecl FUN_0064b510(...);
int __cdecl FUN_0064b580(...);
int __cdecl FUN_0064b5a0(...);
int __cdecl FUN_0064bbd0(...);
int __cdecl FUN_00674898(...);
extern int DAT_006b63b0;
extern int DAT_006b63b4;
extern int DAT_006f1dd8;
extern int DAT_006f227c;
extern int _DAT_006cc7bc;
extern void LAB_00684d6b(...);
void *ExceptionList;

struct ThisCallBox {
  void FUN_00534df0(int *param_2, undefined4 *param_3);
};
void ThisCallBox::FUN_00534df0(int *param_2, undefined4 *param_3) {
  ulonglong uVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  float10 extraout_ST0;
  float10 fVar9;
  LARGE_INTEGER local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = (undefined1 *)&LAB_00684d6b;
  local_10 = ExceptionList;
  if (DAT_006f1dd8 != 0) {
    iVar5 = 0;
    piVar3 = (int *)(((int)this) + 0x234);
    while (iVar5 < 2) {
      if ((piVar3[-1] != 0) && (param_2 == (int *)*piVar3)) {
        return;
      }
      iVar5 = iVar5 + 1;
      piVar3 = piVar3 + 0x8c;
    }
    ExceptionList = &local_10;
    *(int **)(*(int *)(((int)this) + 0x480) * 0x230 + 0x234 + ((int)this)) = param_2;
    piVar3 = *(int **)((*(int *)(((int)this) + 0x480) + 1) * 0x230 + ((int)this));
    if (piVar3 != (int *)0x0) {
      if (*piVar3 != 0) {
        FUN_0064bbd0();
      }
      FUN_0064b510(&param_2);
      FUN_0064b580();
      (**(code **)(*param_2 + 4))(piVar3);
      FUN_0064b5a0();
      *(undefined4 *)((*(int *)(((int)this) + 0x480) + 1) * 0x230 + ((int)this)) = 0;
    }
    uVar1 = (ulonglong)DAT_006f227c;
    uVar6 = DAT_006f227c ^ 0x1d872b41;
    uVar7 = uVar6 >> 5 ^ uVar6;
    DAT_006f227c = uVar7 << 0x1b ^ uVar7 ^ uVar6;
    switch((int)((uVar1 % 1000) % 5)) {
    case 1:
      break;
    case 2:
      break;
    case 3:
      break;
    case 4:
      break;
    }
    iVar5 = *(int *)(((int)this) + 0x480) * 0x230 + ((int)this);
    (**(code **)(*(int *)(iVar5 + 0x20) + 0x28))(*(undefined4 *)(iVar5 + 0x234),0);
    iVar8 = *(int *)(((int)this) + 0x480) * 0x230;
    iVar5 = *(int *)(iVar8 + 0x6c + ((int)this));
    *(int *)(((int)this) + 0x18) = iVar5;
    if (0x7fff < iVar5) {
      *(int *)(((int)this) + 0x18) = 0xffff - iVar5;
    }
    puVar2 = (undefined4 *)(unsigned int)DAT_006b63b0;
    *(uint *)(((int)this) + 0x18) = (0x3fff - (*(uint *)(((int)this) + 0x18) & 0x3fff)) * 2;
    if ((float)(unsigned int)puVar2 < (float)(unsigned int)param_3) {
      param_3 = (undefined4 *)(unsigned int)DAT_006b63b0;
    }
    if ((float)(unsigned int)param_3 < (float)(unsigned int)DAT_006b63b4 != ((float)(unsigned int)param_3 == (float)(unsigned int)DAT_006b63b4)) {
      param_3 = (undefined4 *)(unsigned int)DAT_006b63b4;
    }
    uVar4 = FUN_00674898();
    fVar9 = (float10)_DAT_006cc7bc;
    *(undefined4 *)(iVar8 + ((int)this) + 0x240) = uVar4;
    iVar8 = (**(code **)(*(int *)(*(int *)(((int)this) + 0x480) * 0x230 + 0x20 + ((int)this)) + 4))
                      (0,(float)(fVar9 - extraout_ST0));
    iVar5 = *(int *)(((int)this) + 0x480) * 0x230 + ((int)this);
    *(int *)(iVar5 + 0x23c) =
         *(int *)(iVar5 + 0x70) * (iVar8 * *(int *)(((int)this) + 0x18) >> 0xf) >> 0xf;
    if (*(int *)(*(int *)(((int)this) + 0x480) * 0x230 + 0x23c + ((int)this)) != 0) {
      FUN_0064b510(&param_3);
      FUN_0064b580();
      iVar5 = (**(code **)*param_3)(0x18,4,0xffffffff);
      FUN_0064b5a0();
      local_8 = 0;
      param_3 = (undefined4 *)iVar5;
      if (iVar5 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = FUN_00524870(*(undefined4 *)(*(int *)(((int)this) + 0x480) * 0x230 + 0x6c + ((int)this)),0);
      }
      *(undefined4 *)((*(int *)(((int)this) + 0x480) + 1) * 0x230 + ((int)this)) = uVar4;
      QueryPerformanceCounter(&local_18);
      uVar4 = __allshr();
      *(undefined4 *)(*(int *)(((int)this) + 0x480) * 0x230 + 0x238 + ((int)this)) = uVar4;
    }
    iVar5 = *(int *)(((int)this) + 0x480) + 1;
    *(int *)(((int)this) + 0x480) = iVar5;
    if (1 < iVar5) {
      *(undefined4 *)(((int)this) + 0x480) = 0;
    }
  }
  ExceptionList = local_10;
  return;
}
