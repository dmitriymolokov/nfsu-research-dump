/* spd-match: far pct=8.48 flags=/O1 /c /nologo /TP method=thiscall_tp source=reports/m375_8/p2/buckets/p2_01/thiscall_attempt3_recursive-float-buffer */
#include "ghidra_compat.h"

int __cdecl FUN_004f0660(...);
int __cdecl FUN_004fde50(...);
int __cdecl FUN_004fdf40(...);
int __cdecl FUN_004fe170(...);

struct ThisCallBox {
  void FUN_004f04e0(int param_2, undefined4 param_3, undefined4 param_4, undefined2 param_5);
};
void ThisCallBox::FUN_004f04e0(int param_2, undefined4 param_3, undefined4 param_4, undefined2 param_5) {
  undefined2 uVar1;
  int iVar2;
  float local_48 [18];
  
  iVar2 = *(int *)(param_2 + 0x2c);
  if ((*(int *)(iVar2 + 0xc) != 0) && ((*((char *)this) != '\0' || (-1 < *(int *)(param_2 + 0x1c))))) {
    FUN_004fde50();
    FUN_004fe170();
    local_48[0] = *(float *)(iVar2 + 0x24) + *(float *)(iVar2 + 0x18) + 0.0;
    FUN_004fdf40();
    FUN_004fdf40();
    *(short *)(((char *)this) + 0xd8) = *(short *)(((char *)this) + 0xd8) + 1;
    uVar1 = *(undefined2 *)(((char *)this) + 0xd8);
    *(undefined2 *)(param_2 + 0x20) = param_5;
    (**(code **)(**(int **)(((char *)this) + 0x10c) + 0x28))(uVar1,param_2);
    for (iVar2 = *(int *)(param_2 + 0x60); iVar2 != 0; iVar2 = *(int *)(iVar2 + 4)) {
      if (*(int *)(iVar2 + 0x18) == 5) {
        FUN_004f04e0(iVar2,(unsigned int)(local_48),param_2,uVar1);
      }
      else {
        FUN_004f0660(uVar1);
      }
    }
  }
  return;
}
