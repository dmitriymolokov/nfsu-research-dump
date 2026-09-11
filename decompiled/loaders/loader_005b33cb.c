/* spd-match: far pct=13.21 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

int __cdecl FUN_005b30af();
int __cdecl FUN_005b31d8();
int __cdecl FUN_005d78c0();
int __cdecl FUN_005d87f4();
int __cdecl FUN_005d89c9();
extern void LAB_005b34ee(void);
extern void LAB_005b3503(void);
extern void LAB_005b3558(void);
extern void LAB_005b3572(void);

int FUN_005b33cb(uint param_1,int param_2)

{
  undefined4 uVar1;
  void *pvVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 local_1c;
  undefined4 local_18;
  uint local_14;
  undefined4 *local_10;
  undefined4 *local_c;
  int local_8;
  
  local_18 = *(undefined4 *)(param_2 + 0x40);
  local_8 = 0;
  local_c = (undefined4 *)0x0;
  local_10 = (undefined4 *)0x0;
  uVar1 = FUN_005b30af(param_1,&local_18,&local_14);
  *(undefined4 *)(param_2 + 0x14) = uVar1;
  if (*(int *)(*(int *)(param_2 + 0x2c) + 0x28) == 0) {
    pvVar2 = _malloc(0x50);
    if (pvVar2 == (void *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar3 = (undefined4 *)FUN_005d87f4();
    }
    if (puVar3 != (undefined4 *)0x0) {
      iVar4 = (**(code **)(**(int **)(*(int *)(param_2 + 0x2c) + 0x20) + 8))();
      puVar3[4] = iVar4;
      if (iVar4 != 0) {
        puVar6 = *(undefined4 **)(param_2 + 0x38);
        puVar7 = puVar3 + 0xc;
        for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar7 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar7 = puVar7 + 1;
        }
        param_1 = 0;
        if (local_14 != 0) {
          do {
            pvVar2 = _malloc(0x14);
            if (pvVar2 == (void *)0x0) {
              local_c = (undefined4 *)0x0;
            }
            else {
              local_c = (undefined4 *)FUN_005d78c0();
            }
            puVar6 = local_c;
            if (local_c == (undefined4 *)0x0) {
LAB_005b3503:
              local_8 = -0x7ff8fff2;
              goto LAB_005b3558;
            }
            pvVar2 = _malloc(0x40);
            if (pvVar2 == (void *)0x0) {
              local_10 = (undefined4 *)0x0;
            }
            else {
              local_10 = (undefined4 *)FUN_005d89c9();
            }
            if (local_10 == (undefined4 *)0x0) goto LAB_005b3503;
            param_1 = param_1 + 1;
            puVar6[2] = local_10;
            puVar6[3] = puVar3[8];
            local_10 = (undefined4 *)0x0;
            puVar3[8] = puVar6;
            local_c = (undefined4 *)0x0;
          } while (param_1 < local_14);
        }
        local_1c = puVar3[8];
        local_8 = FUN_005b31d8(&local_1c,*(undefined4 *)(*(int *)(param_2 + 0x2c) + 0x20),puVar3 + 5
                               ,puVar3 + 6);
        if (local_8 < 0) goto LAB_005b3572;
        *(undefined4 **)(*(int *)(param_2 + 0x2c) + 0x28) = puVar3;
        goto LAB_005b34ee;
      }
    }
    local_8 = -0x7ff8fff2;
  }
  else {
LAB_005b34ee:
    puVar3 = (undefined4 *)0x0;
    iVar4 = *(int *)(*(int *)(param_2 + 0x2c) + 0x28);
    if (*(int *)(iVar4 + 4) != 0xc) {
      return -0x7fffbffb;
    }
    while (((iVar5 = iVar4, *(int *)(iVar5 + 0x1c) == 0 &&
            (iVar4 = *(int *)(iVar5 + 0x20), iVar4 != 0)) && (*(int *)(iVar4 + 4) == 1))) {
      iVar4 = *(int *)(iVar4 + 8);
      if ((iVar4 == 0) || (*(int *)(iVar4 + 4) != 0xc)) break;
    }
    if ((*(int *)(iVar5 + 0x1c) == 0) &&
       ((iVar4 = *(int *)(iVar5 + 0x20), iVar4 != 0 && (*(int *)(iVar4 + 4) == 1)))) {
      *(int *)(param_2 + 0x1c) = iVar4;
      return local_8;
    }
    local_8 = -0x7fffbffb;
LAB_005b3558:
    if (local_c != (undefined4 *)0x0) {
      (**(code **)*local_c)(1);
    }
    if (local_10 != (undefined4 *)0x0) {
      (**(code **)*local_10)(1);
    }
  }
LAB_005b3572:
  if (puVar3 != (undefined4 *)0x0) {
    (**(code **)*puVar3)(1);
  }
  return local_8;
}
