/* spd-match: far pct=14.10 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

int __cdecl FUN_005bb1eb();
int __cdecl FUN_005d7885();
int __cdecl FUN_005d78db();
int __cdecl FUN_005d8831();
extern void LAB_005bc730(void);
extern void LAB_005bc738(void);

undefined4 * FUN_005bc645(int param_1,int *param_2)

{
  int iVar1;
  void *pvVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  
  iVar4 = param_1;
  if (*(int *)(param_1 + 4) == 1) {
    while (param_1 = *(int *)(iVar4 + 8), *(int *)(param_1 + 4) != 2) {
      iVar4 = *(int *)(iVar4 + 0xc);
    }
  }
  pvVar2 = _malloc(0x50);
  if (pvVar2 == (void *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = (undefined4 *)FUN_005d8831(0,0,0,0,1,param_1 + 0x10);
  }
  if (puVar3 == (undefined4 *)0x0) {
LAB_005bc738:
    puVar3 = (undefined4 *)0x0;
  }
  else {
    if (param_2 != (int *)0x0) {
      iVar4 = (**(code **)(*param_2 + 8))();
      puVar3[8] = iVar4;
      if (iVar4 == 0) {
LAB_005bc730:
        (**(code **)*puVar3)(1);
        goto LAB_005bc738;
      }
    }
    piVar7 = puVar3 + 4;
    for (iVar4 = puVar3[8]; iVar4 != 0; iVar4 = *(int *)(iVar4 + 0xc)) {
      iVar1 = *(int *)(iVar4 + 8);
      if (((iVar1 != 0) && (*(int *)(iVar1 + 4) == 0xc)) && (*(int *)(iVar1 + 0x10) != 0)) {
        pvVar2 = _malloc(0x14);
        if (pvVar2 == (void *)0x0) {
          iVar5 = 0;
        }
        else {
          iVar5 = FUN_005d78db(0,0,"Types");
        }
        *piVar7 = iVar5;
        if (iVar5 == 0) goto LAB_005bc730;
        uVar6 = FUN_005d7885(*(undefined4 *)(iVar1 + 0x10));
        *(undefined4 *)(*piVar7 + 8) = uVar6;
        if (*(int *)(*piVar7 + 8) == 0) goto LAB_005bc730;
        piVar7 = (int *)(*piVar7 + 0xc);
      }
    }
    FUN_005bb1eb(puVar3);
  }
  return puVar3;
}
