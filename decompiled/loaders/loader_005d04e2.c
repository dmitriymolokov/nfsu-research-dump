/* spd-match: far pct=9.25 flags=/O1 /c /nologo /TP method=thiscall_tp source=reports/m375_8/batches/p1_09/h2_loader_recipe_retry */
#include "ghidra_compat.h"

unsigned int __cdecl __controlfp(unsigned int, unsigned int);
long __cdecl __ftol(void);

int __cdecl FUN_005c9025(...);
int __cdecl FUN_005d0177(...);
int __cdecl FUN_005d0387(...);
extern void LAB_005d0606(...);

struct ThisCallBox {
  int FUN_005d04e2(int param_2, int *param_3, uint *param_4);
};
int ThisCallBox::FUN_005d04e2(int param_2, int *param_3, uint *param_4) {
  int *piVar1;
  int iVar2;
  int *piVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  void *pvVar7;
  int local_8;
  
  puVar4 = param_4;
  piVar3 = param_3;
  iVar2 = param_2;
  *(undefined4 *)(param_2 + 0xc) = 0;
  *(undefined4 *)(param_2 + 8) = 0;
  if ((param_3 != (int *)0x0) &&
     (uVar5 = (**(code **)(*param_3 + 0x10))(param_3), *param_4 + 1 <= uVar5)) {
    iVar6 = (**(code **)(*param_3 + 0xc))(param_3);
    *(undefined4 *)(param_2 + 0x24) = *(undefined4 *)(iVar6 + *param_4 * 4);
  }
  *param_4 = *param_4 + 1;
  if ((param_3 != (int *)0x0) &&
     (uVar5 = (**(code **)(*param_3 + 0x10))(param_3), *param_4 + 1 <= uVar5)) {
    iVar6 = (**(code **)(*param_3 + 0xc))(param_3);
    *(undefined4 *)(param_2 + 0x28) = *(undefined4 *)(iVar6 + *param_4 * 4);
  }
  *param_4 = *param_4 + 1;
  if ((param_3 != (int *)0x0) &&
     (uVar5 = (**(code **)(*param_3 + 0x10))(param_3), *param_4 + 1 <= uVar5)) {
    iVar6 = (**(code **)(*param_3 + 0xc))(param_3);
    *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(iVar6 + *param_4 * 4);
  }
  *param_4 = *param_4 + 1;
  if ((param_3 != (int *)0x0) &&
     (uVar5 = (**(code **)(*param_3 + 0x10))(param_3), *param_4 + 1 <= uVar5)) {
    iVar6 = (**(code **)(*param_3 + 0xc))(param_3);
    *(undefined4 *)(param_2 + 0x30) = *(undefined4 *)(iVar6 + *param_4 * 4);
  }
  *param_4 = *param_4 + 1;
  if ((param_3 != (int *)0x0) && (uVar5 = (**(code **)(*param_3 + 0x10))(param_3), uVar5 < *param_4)
     ) {
    return -0x7fffbffb;
  }
  piVar1 = (int *)(param_2 + 0x30);
  param_2 = 0;
  param_4 = (uint *)iVar2;
  param_3 = (int *)0x0;
  if (*piVar1 != 0) {
    do {
      pvVar7 = (void *)_malloc(0x44);
      if (pvVar7 == (void *)0x0) {
        local_8 = 0;
      }
      else {
        local_8 = FUN_005d0177();
      }
      if (local_8 == 0) {
        return -0x7ff8fff2;
      }
      param_2 = FUN_005c9025(local_8,piVar3,puVar4);
      if ((unsigned int)(param_2) < 0) goto LAB_005d0606;
      param_3 = (int *)((int)param_3 + 1);
      *(int *)((int)param_4 + 0x34) = local_8;
      param_4 = (uint *)local_8;
    } while ((unsigned int)(param_3) < *(uint *)(iVar2 + 0x30));
  }
  local_8 = 0;
  *(int *)(((int)this) + 0x88) = *(int *)(((int)this) + 0x88) + 1;
LAB_005d0606:
  if (local_8 != 0) {
    FUN_005d0387(1);
  }
  return param_2;
}
