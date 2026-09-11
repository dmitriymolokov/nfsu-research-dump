/* spd-match: far pct=3.03 flags=/O1 method=thiscall_tp source=m375_sync_decomp:m375_c2440_void_char */
#include "ghidra_compat.h"

int __cdecl FUN_m375_thunk_helper(...);

extern void LAB_005cacea(...);

struct ThisCallBox {
  int FUN_005cabd8(char *param_2, int param_3, int *param_4);
};
int ThisCallBox::FUN_005cabd8(char *param_2, int param_3, int *param_4) {
  char cVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  uint uVar7;
  int iVar8;
  int local_c;
  int *local_8;
  
  local_c = 0;
  local_8 = (int *)0x0;
  iVar4 = param_3;
  if (param_4 != (int *)0x0) {
    iVar4 = *(int *)(param_4[2] + param_3 * 4);
  }
  iVar4 = iVar4 * 0x1c + *(int *)(((int)this) + 0x24);
  if (param_2 != (char *)0x0) {
    pcVar5 = param_2;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    pcVar5 = pcVar5 + (1 - (int)(param_2 + 1));
    piVar2 = *(int **)(iVar4 + 4);
    if ((piVar2 == (int *)0x0) ||
       (pcVar6 = (char *)(unsigned int)(**(code **)(*piVar2 + 0x10))(piVar2), pcVar6 < pcVar5)) {
      local_c = FUN_m375_thunk_helper(pcVar5,&local_8);
      if (local_c < 0) goto LAB_005cacea;
    }
    else {
      local_8 = *(int **)(iVar4 + 4);
      if (local_8 != (int *)0x0) {
        (**(code **)(*local_8 + 4))(local_8);
      }
    }
    pcVar6 = (char *)(unsigned int)(**(code **)(*local_8 + 0xc))(local_8);
    for (uVar7 = (uint)pcVar5 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)param_2;
      param_2 = param_2 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar7 = (uint)pcVar5 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar6 = *param_2;
      param_2 = param_2 + 1;
      pcVar6 = pcVar6 + 1;
    }
    if (local_8 != (int *)0x0) {
      (**(code **)(*local_8 + 4))(local_8);
    }
  }
  piVar2 = *(int **)(iVar4 + 4);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    *(undefined4 *)(iVar4 + 4) = 0;
  }
  *(int **)(iVar4 + 4) = local_8;
  if (param_4 != (int *)0x0) {
    for (piVar2 = (int *)param_4[4]; piVar2 != param_4; piVar2 = (int *)piVar2[4]) {
      if (*piVar2 != 0) {
        iVar8 = *(int *)(piVar2[2] + param_3 * 4) * 0x1c + *(int *)(*piVar2 + 0x24);
        piVar3 = *(int **)(iVar4 + 4);
        if (piVar3 != (int *)0x0) {
          (**(code **)(*piVar3 + 4))(piVar3);
        }
        piVar3 = *(int **)(iVar8 + 4);
        if (piVar3 != (int *)0x0) {
          (**(code **)(*piVar3 + 8))(piVar3);
          *(undefined4 *)(iVar8 + 4) = 0;
        }
        *(undefined4 *)(iVar8 + 4) = *(undefined4 *)(iVar4 + 4);
      }
    }
  }
LAB_005cacea:
  if (local_8 != (int *)0x0) {
    (**(code **)(*local_8 + 8))(local_8);
  }
  return local_c;
}
