/* Decompiled from Speed.exe @ 005796b0 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


void FUN_005796b0(int param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  iVar3 = *(int *)(param_1 + 4);
  if (iVar3 != 0) {
    iVar2 = *(int *)(iVar3 + 4);
    piVar4 = *(int **)(iVar3 + 8);
    *piVar4 = iVar2;
    *(int **)(iVar2 + 4) = piVar4;
    if (*(undefined4 **)(param_1 + 4) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 4))(1);
    }
  }
  *(int *)(param_1 + 8) = param_2;
  iVar3 = FUN_00578cc0(param_2,param_3);
  *(int *)(param_1 + 4) = iVar3;
  *(undefined4 *)(iVar3 + 0xc) = *(undefined4 *)(param_1 + 0xc);
  if (*(int *)(param_1 + 4) == 0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = (int *)(*(int *)(param_1 + 4) + 4);
  }
  iVar3 = *(int *)(DAT_007345b8 + param_2 * 8);
  puVar1 = (undefined4 *)(DAT_007345b8 + param_2 * 8);
  *puVar1 = piVar4;
  *(int **)(iVar3 + 4) = piVar4;
  piVar4[1] = (int)puVar1;
  *piVar4 = iVar3;
  return;
}

