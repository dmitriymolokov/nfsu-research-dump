/* spd-match: far pct=6.43 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2069 */
#include "ghidra_compat.h"

int __cdecl FUN_005ca4f3();
int __cdecl FUN_005d71f8();
int __cdecl FUN_005d75b0();

int FUN_005ca99e(int param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int local_8;
  
  local_8 = 0;
  if (param_3 == (undefined4 *)0x0) {
    local_8 = -0x7789f794;
  }
  else {
    iVar1 = FUN_005ca4f3(param_2,0);
    if (iVar1 == 0) {
      local_8 = -0x7789f794;
    }
    else {
      puVar4 = param_3;
      for (iVar6 = 0x117; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
      }
      piVar2 = (int *)(*(int *)(iVar1 + 0x20) + *(int *)(param_1 + 0x2c));
      if (*piVar2 == 0) {
        piVar2 = (int *)0x0;
      }
      else {
        piVar2 = piVar2 + 1;
      }
      *param_3 = piVar2;
      param_3[1] = *(undefined4 *)(iVar1 + 0x2c);
      param_3[2] = 0;
      param_3[3] = 0;
      param_3[4] = 0;
      param_3[0x85] = 0;
      param_3[0x106] = 0;
      if (*(int *)(iVar1 + 0x34) != -1) {
        iVar3 = *(int *)(iVar1 + 0x34) * 0xac + *(int *)(iVar1 + 0x28);
        iVar6 = *(int *)(*(int *)(param_1 + 0x8c) + *(int *)(iVar3 + 0xc) * 4);
        iVar5 = *(int *)(iVar6 + 0x38);
        iVar6 = *(int *)(iVar6 + 0x28) + *(int *)(iVar3 + 0x14);
        if (iVar5 == 0) {
          iVar6 = *(int *)(iVar6 + *(int *)(param_1 + 0x2c));
        }
        else {
          iVar6 = *(int *)(*(int *)(iVar5 + 8) +
                          *(int *)(iVar6 + *(int *)(*(int *)(param_1 + 0xc) + 8)) * 4);
        }
        piVar2 = *(int **)(iVar6 * 0x1c + *(int *)(param_1 + 0x24) + 0x10);
        if (piVar2 != (int *)0x0) {
          puVar4 = (**(undefined4 * (**)())(*piVar2 + 0xc))(piVar2);
          param_3[2] = *puVar4;
          local_8 = FUN_005d71f8(puVar4,param_3 + 5,param_3 + 4);
          if (local_8 < 0) {
            return local_8;
          }
        }
      }
      if (*(int *)(iVar1 + 0x38) != -1) {
        iVar5 = *(int *)(iVar1 + 0x38) * 0xac + *(int *)(iVar1 + 0x28);
        iVar1 = *(int *)(*(int *)(param_1 + 0x8c) + *(int *)(iVar5 + 0xc) * 4);
        iVar6 = *(int *)(iVar1 + 0x38);
        iVar1 = *(int *)(iVar1 + 0x28) + *(int *)(iVar5 + 0x14);
        if (iVar6 == 0) {
          iVar1 = *(int *)(iVar1 + *(int *)(param_1 + 0x2c));
        }
        else {
          iVar1 = *(int *)(*(int *)(iVar6 + 8) +
                          *(int *)(iVar1 + *(int *)(*(int *)(param_1 + 0xc) + 8)) * 4);
        }
        piVar2 = *(int **)(iVar1 * 0x1c + *(int *)(param_1 + 0x24) + 0x10);
        if (piVar2 != (int *)0x0) {
          puVar4 = (**(undefined4 * (**)())(*piVar2 + 0xc))(piVar2);
          param_3[3] = *puVar4;
          local_8 = FUN_005d71f8(puVar4,param_3 + 0x86,param_3 + 0x85);
          if (-1 < local_8) {
            local_8 = FUN_005d75b0(puVar4,param_3 + 0x107,param_3 + 0x106);
          }
        }
      }
    }
  }
  return local_8;
}
